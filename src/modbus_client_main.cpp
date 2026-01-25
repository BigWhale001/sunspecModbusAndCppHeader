/**
 * @file modbus_client_main.cpp
 * @brief Modbus TCP Client & SunSpec Decoder
 * 
 * 该程序连接到 Modbus TCP 服务器，读取保持寄存器，并使用 SunSpecDecoder 解析数据。
 * 主要功能：
 * 1. 连接 Modbus 服务器
 * 2. 读取寄存器数据
 * 3. 使用 SunSpecDecoder 解析模型
 * 4. 动态遍历和访问不同类型的模型数据
 */

#include <iostream>
#include <modbus/modbus.h>
#include <errno.h>
#include <vector>
#include <cstdint>
#include "sunspec_decoder.hpp"

int main() {
    std::cout << "Starting Modbus TCP Client (SunSpec Decoder)..." << std::endl;

    modbus_t *ctx = modbus_new_tcp("127.0.0.1", 1502);
    if (ctx == nullptr) {
        std::cerr << "Unable to create the libmodbus context" << std::endl;
        return -1;
    }

    if (modbus_connect(ctx) == -1) {
        std::cerr << "Connection failed: " << modbus_strerror(errno) << std::endl;
        modbus_free(ctx);
        return -1;
    }

    std::cout << "Connected to server." << std::endl;

    // 3. 读取保持寄存器 (Holding Registers)
    // 这里我们分块读取，总共读取 200 个寄存器用于演示
    const int TOTAL_LEN = 200;
    const int CHUNK_SIZE = 100;
    std::vector<uint16_t> buffer(TOTAL_LEN);
    
    int total_read = 0;
    // 分块读取循环
    for (int addr = 0; addr < TOTAL_LEN; addr += CHUNK_SIZE) {
        int len = std::min(CHUNK_SIZE, TOTAL_LEN - addr);
        // modbus_read_registers 读取保持寄存器 (功能码 0x03)
        int rc = modbus_read_registers(ctx, addr, len, buffer.data() + addr);
        if (rc == -1) {
            std::cerr << "Read failed at address " << addr << ": " << modbus_strerror(errno) << std::endl;
            modbus_close(ctx);
            modbus_free(ctx);
            return -1;
        }
        total_read += rc;
    }

    std::cout << "Read " << total_read << " registers. Decoding..." << std::endl;

    // --- 4. 解码 SunSpec 数据 ---
    // SunSpecDecoder 会解析数据流，识别 "SunS" 头部，并根据 ID 实例化对应的模型对象
    SunSpecDecoder decoder;
    decoder.decode(buffer.data(), total_read);

    // --- 5. 动态访问模型 (Dynamic Model Access) ---
    // decoder.models 是一个 map<uint16_t, vector<shared_ptr<SunSpecModelBase>>>
    // 存储了所有解码出的模型，key 是模型 ID
    std::cout << "\n--- Decoded Data ---" << std::endl;
    for (const auto& pair : decoder.models) {
        uint16_t id = pair.first;
        const auto& instances = pair.second; // 同一个 ID 可能有多个实例 (例如多个 MPPT 模块)

        for (const auto& model_base : instances) {
            std::cout << "\n[Model " << id << "]" << std::endl;
            
            // 根据 ID 进行动态类型转换 (Dynamic Dispatch)
            // 以便访问特定模型的特有字段
            // 注意：虽然我们已经从流中获取了 ID，但为了访问特定模型的方法（如 get_A），
            // 我们必须将基类指针转换为特定的子类指针。
            if (id == Model103::ID) {
                 // Model 103: 三相逆变器
                 auto m = std::dynamic_pointer_cast<Model103>(model_base);
                 if (m) {
                    std::cout << "  Three Phase Inverter (Model 103)" << std::endl;
                    // 使用生成的 getter 方法访问数据
                    // get_A(): 自动应用 Scale Factor 转换后的浮点值
                    std::cout << "    Amps: " << m->get_A() << " A" << std::endl;
                    // get_raw_A(): 原始寄存器整数值
                    std::cout << "    Raw A: " << m->get_raw_A() << std::endl;
                    // get_raw_A_SF(): 比例因子原始值
                    std::cout << "    Raw A_SF: " << m->get_raw_A_SF() << std::endl;
                 }
            } else if (id == Model708::ID) {
                 // Model 708: IEEE 1547 (复杂模型，包含嵌套重复组)
                 auto m = std::dynamic_pointer_cast<Model708>(model_base);
                 if (m) {
                    std::cout << "  IEEE 1547 (Model 708)" << std::endl;
                    std::cout << "    NPt: " << m->get_raw_NPt() << std::endl;
                 }
            } else if (id == Model1::ID) {
                 // Model 1: 通用设备信息 (Common)
                 auto m = std::dynamic_pointer_cast<Model1>(model_base);
                 if (m) {
                     // 处理字符串字段 (Mn: Manufacturer)
                     // SunSpec 字符串是固定长度的，需要注意终止符
                     char mn[33] = {0};
                     std::memcpy(mn, m->raw.Mn, 32);
                     std::cout << "  Common Model (Model 1)" << std::endl;
                     std::cout << "  Manufacturer: " << mn << std::endl;
                 }
            } else {
                // 对于未显式处理的其他模型，仅打印 ID
                std::cout << "  (Generic handling for Model " << id << ")" << std::endl;
            }
        }
    }

    modbus_close(ctx);
    modbus_free(ctx);

    return 0;
}
