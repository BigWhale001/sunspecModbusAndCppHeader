/**
 * @file modbus_server_main.cpp
 * @brief Modbus TCP Server 模拟 SunSpec 设备
 * 
 * 该程序使用 libmodbus 库创建一个 Modbus TCP 服务器，并模拟 SunSpec 兼容设备的内存映射。
 * 主要功能：
 * 1. 监听 1502 端口
 * 2. 构建 SunSpec 寄存器数据流 (包含 "SunS" 头部, Model 1, Model 103, Model 708)
 * 3. 响应 Client 的读请求
 * 
 * 关键点：
 * - 大端序 (Big Endian) 数据存储
 * - SunSpec 模型结构模拟
 */

#include <iostream>
#include <modbus/modbus.h>
#include <errno.h>
#include <unistd.h>
#include <cstring>
#include <vector>
#include <cstdint>
#include "endian_utils.hpp"

int main() {
    std::cout << "Starting Modbus TCP Server with SunSpec Simulation..." << std::endl;

    // 1. 创建 Modbus TCP 上下文
    // 监听本地回环地址 127.0.0.1，端口 1502
    modbus_t *ctx = modbus_new_tcp("127.0.0.1", 1502);
    if (ctx == nullptr) {
        std::cerr << "Unable to create the libmodbus context" << std::endl;
        return -1;
    }

    // 2. 开始监听连接
    // 第二个参数是最大挂起连接数
    int server_socket = modbus_tcp_listen(ctx, 1);
    if (server_socket == -1) {
        std::cerr << "Unable to listen: " << modbus_strerror(errno) << std::endl;
        modbus_free(ctx);
        return -1;
    }

    std::cout << "Listening on 127.0.0.1:1502" << std::endl;

    // 3. 分配 Modbus 映射 (寄存器内存)
    // 这里我们只分配 Holding Registers (保持寄存器)，用于存储 SunSpec 数据
    // 参数顺序: bits, input_bits, registers, input_registers
    modbus_mapping_t *mb_mapping = modbus_mapping_new(0, 0, 500, 0);
    if (mb_mapping == nullptr) {
        std::cerr << "Failed to allocate the mapping: " << modbus_strerror(errno) << std::endl;
        modbus_free(ctx);
        return -1;
    }

    // --- 构建 SunSpec 数据流 ---
    // 下面的代码模拟了一个完整的 SunSpec 设备内存映射
    std::vector<uint16_t> stream;

    // 4. SunS 头部标识 (0x5375, 0x6e53 -> "SunS")
    // 这是 SunSpec 协议的入口标志
    stream.push_back(0x5375); 
    stream.push_back(0x6e53);

    // 5. Model 1 (Common Model - 通用模型)
    // 包含了设备的基本信息，如厂商、型号、序列号等
    // ID=1, Len=66 (长度不包含 ID 和 Length 字段本身)
    stream.push_back(HTONS(1));   
    stream.push_back(HTONS(66));  
    
    // Mn (Manufacturer) = "SunSpec"
    // 字符串 "SunSpec" 对应的 ASCII 码：
    // "Su" (0x5375), "nS" (0x6e53), "pe" (0x7065), "c\0" (0x6300)
    // 使用 HTONS 确保在寄存器中存储为大端格式，Client 读取后内存布局即为正确字符串顺序
    stream.push_back(HTONS(0x5375)); // Su
    stream.push_back(HTONS(0x6e53)); // nS
    stream.push_back(HTONS(0x7065)); // pe
    stream.push_back(HTONS(0x6300)); // c\0
    
    // 填充 Mn 剩余的空间 (总共 32 字节 / 16 寄存器)
    for(int i=0; i<12; i++) stream.push_back(0);

    // 填充 Md (Model), Opt (Options), Vr (Version), SN (Serial Number) 等字段为空
    for(int i=0; i<16; i++) stream.push_back(0); // Md
    for(int i=0; i<8; i++) stream.push_back(0);  // Opt
    for(int i=0; i<8; i++) stream.push_back(0);  // Vr
    for(int i=0; i<16; i++) stream.push_back(0); // SN
    
    // DA (Device Address) + Pad
    stream.push_back(0);
    stream.push_back(0); 

    // 6. Model 103 (Three Phase Inverter - 三相逆变器)
    // ID=103, Len=50
    stream.push_back(HTONS(103)); 
    stream.push_back(HTONS(50));  
    
    std::vector<uint16_t> m103_body(50, 0);
    
    // 设置电流数据: Amps = 123.45 A
    // SunSpec 使用整型 + 比例因子 (Scale Factor) 表示浮点数
    // Value = Raw_Value * 10^SF
    // 这里: 12345 * 10^-2 = 123.45
    m103_body[0] = HTONS(12345);    // A (uint16) - 电流原始值
    m103_body[4] = HTONS(0xFFFE);   // A_SF (sunssf/int16) - 比例因子 -2 (补码表示)
    
    stream.insert(stream.end(), m103_body.begin(), m103_body.end());

    // 7. Model 708 (IEEE 1547 - 分布式能源互联标准)
    // 这是一个复杂的嵌套模型，包含重复组 (Repeating Groups)
    std::vector<uint16_t> m708_body;
    
    // 根参数 (Root Params)
    m708_body.push_back(HTONS(708)); // ID (在结构体中重复出现)
    m708_body.push_back(HTONS(29));  // L (长度)
    m708_body.push_back(0); // Ena
    m708_body.push_back(0); // AdptCrvReq
    m708_body.push_back(0); // AdptCrvRslt
    m708_body.push_back(HTONS(2)); // NPt = 2 (每条曲线的最大点数)
    m708_body.push_back(HTONS(1)); // NCrvSet = 1 (曲线组数量)
    m708_body.push_back(0); // V_SF
    m708_body.push_back(0); // Tms_SF

    // 曲线组 1 (Curve Set 0)
    m708_body.push_back(HTONS(0)); // ReadOnly

    // MustTrip 组
    m708_body.push_back(HTONS(2)); // ActPt = 2 (有效点数)
    // 点 1: V=100, Tms=10
    m708_body.push_back(HTONS(100)); 
    m708_body.push_back(0); m708_body.push_back(HTONS(10)); // Tms 是 uint32
    // 点 2: V=110, Tms=20
    m708_body.push_back(HTONS(110)); 
    m708_body.push_back(0); m708_body.push_back(HTONS(20));

    // MayTrip 组
    m708_body.push_back(HTONS(2)); // ActPt
    // 点 1
    m708_body.push_back(HTONS(105)); 
    m708_body.push_back(0); m708_body.push_back(HTONS(15));
    // 点 2
    m708_body.push_back(HTONS(115)); 
    m708_body.push_back(0); m708_body.push_back(HTONS(25));

    // MomCess 组
    m708_body.push_back(HTONS(2)); // ActPt
    // 点 1
    m708_body.push_back(HTONS(120)); 
    m708_body.push_back(0); m708_body.push_back(HTONS(5));
    // 点 2
    m708_body.push_back(HTONS(130)); 
    m708_body.push_back(0); m708_body.push_back(HTONS(1));

    stream.insert(stream.end(), m708_body.begin(), m708_body.end());

    // 8. 结束标记 (End Model)
    // ID=0xFFFF, Len=0
    stream.push_back(0xFFFF); 
    stream.push_back(0x0000);

    std::cout << "SunSpec Stream constructed. Total size: " << stream.size() << " registers." << std::endl;

    if (stream.size() > 500) {
        std::cerr << "Error: Stream size exceeds mapping size!" << std::endl;
    }

    // 9. 将构建的数据流复制到 Modbus 映射中
    // 这样当 Client 读取这些寄存器时，就会得到我们构建的数据
    for (size_t i = 0; i < stream.size() && i < 500; ++i) {
        mb_mapping->tab_registers[i] = stream[i];
    }

    // 10. 进入主循环处理 Client 请求
    while (true) {
        // 等待新的连接
        modbus_tcp_accept(ctx, &server_socket);
        
        uint8_t query[MODBUS_TCP_MAX_ADU_LENGTH];
        int rc;

        while (true) {
            // 接收请求
            rc = modbus_receive(ctx, query);
            if (rc > 0) {
                // 自动回复请求 (libmodbus 根据 mb_mapping 自动处理读写)
                modbus_reply(ctx, query, rc, mb_mapping);
            } else if (rc == -1) {
                // Client 断开连接或出错
                break;
            }
        }
        std::cout << "Client disconnected." << std::endl;
    }

    // 11. 清理资源
    modbus_mapping_free(mb_mapping);
    close(server_socket);
    modbus_free(ctx);

    return 0;
}
