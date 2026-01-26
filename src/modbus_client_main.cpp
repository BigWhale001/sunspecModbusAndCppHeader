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
#include <vector>
#include <cstdint>
#include "sunspec_decoder.hpp"
#include "modbus_client.hpp"

int main() {
    std::cout << "Starting Modbus TCP Client (SunSpec Decoder) (Abstracted)..." << std::endl;

    ModbusClient client("127.0.0.1", 1502);

    if (!client.connect()) {
        std::cerr << "Connection failed." << std::endl;
        return -1;
    }

    std::cout << "Connected to server." << std::endl;

    // Send Heartbeat (e.g. to register 400)
    std::cout << "Sending heartbeat..." << std::endl;
    if (client.send_heartbeat(400, 12345)) {
        std::cout << "Heartbeat sent." << std::endl;
    } else {
        std::cerr << "Heartbeat failed." << std::endl;
    }

    // 3. Read Holding Registers
    const int TOTAL_LEN = 200;
    const int CHUNK_SIZE = 100;
    std::vector<uint16_t> full_buffer;
    
    // Chunked Read
    for (int addr = 0; addr < TOTAL_LEN; addr += CHUNK_SIZE) {
        int len = std::min(CHUNK_SIZE, TOTAL_LEN - addr);
        std::vector<uint16_t> chunk;
        if (!client.read_holding_registers(addr, len, chunk)) {
             std::cerr << "Read failed at address " << addr << std::endl;
             return -1;
        }
        full_buffer.insert(full_buffer.end(), chunk.begin(), chunk.end());
    }

    std::cout << "Read " << full_buffer.size() << " registers. Decoding..." << std::endl;

    // --- 4. Decode SunSpec Data ---
    SunSpecDecoder decoder;
    decoder.decode(full_buffer.data(), full_buffer.size());

    // --- 5. Dynamic Model Access ---
    std::cout << "\n--- Decoded Data ---" << std::endl;
    for (const auto& pair : decoder.models) {
        uint16_t id = pair.first;
        const auto& instances = pair.second;

        for (const auto& model_base : instances) {
            std::cout << "\n[Model " << id << "]" << std::endl;
            model_base->print_attributes();
        }
    }
    
    client.disconnect();
    return 0;
}
