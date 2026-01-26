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
#include <vector>
#include <cstdint>
#include <csignal>
#include "endian_utils.hpp"
#include "modbus_server.hpp"

// Global flag for signal handling
volatile bool running = true;

void signal_handler(int signum) {
    running = false;
}

int main() {
    signal(SIGINT, signal_handler);

    std::cout << "Starting Modbus TCP Server with SunSpec Simulation (Abstracted)..." << std::endl;

    ModbusServer server("127.0.0.1", 1502);

    if (!server.start()) {
        return -1;
    }

    std::cout << "Listening on 127.0.0.1:1502" << std::endl;

    // Allocate mapping (500 Holding Registers)
    if (!server.allocate_mapping(0, 0, 500, 0)) {
        return -1;
    }

    // --- 构建 SunSpec 数据流 ---
    std::vector<uint16_t> stream;

    // 4. SunS 头部标识 (0x5375, 0x6e53 -> "SunS")
    stream.push_back(0x5375); 
    stream.push_back(0x6e53);

    // 5. Model 1 (Common Model)
    stream.push_back(HTONS(1));   
    stream.push_back(HTONS(66));  
    stream.push_back(HTONS(0x5375)); // Su
    stream.push_back(HTONS(0x6e53)); // nS
    stream.push_back(HTONS(0x7065)); // pe
    stream.push_back(HTONS(0x6300)); // c\0
    for(int i=0; i<12; i++) stream.push_back(0); // Mn padding
    for(int i=0; i<16; i++) stream.push_back(0); // Md
    for(int i=0; i<8; i++) stream.push_back(0);  // Opt
    for(int i=0; i<8; i++) stream.push_back(0);  // Vr
    for(int i=0; i<16; i++) stream.push_back(0); // SN
    stream.push_back(0); // DA
    stream.push_back(0); // Pad

    // 6. Model 103 (Three Phase Inverter)
    stream.push_back(HTONS(103)); 
    stream.push_back(HTONS(50));  
    std::vector<uint16_t> m103_body(50, 0);
    m103_body[0] = HTONS(12345);    // A
    m103_body[4] = HTONS(0xFFFE);   // A_SF (-2)
    stream.insert(stream.end(), m103_body.begin(), m103_body.end());

    // 7. Model 708 (IEEE 1547)
    std::vector<uint16_t> m708_body;
    m708_body.push_back(HTONS(708));
    m708_body.push_back(HTONS(29));
    m708_body.push_back(0); 
    m708_body.push_back(0); 
    m708_body.push_back(0); 
    m708_body.push_back(HTONS(2)); // NPt
    m708_body.push_back(HTONS(1)); // NCrvSet
    m708_body.push_back(0); 
    m708_body.push_back(0); 
    // Crv[0]
    m708_body.push_back(HTONS(0)); 
    // MustTrip
    m708_body.push_back(HTONS(2)); 
    m708_body.push_back(HTONS(100)); m708_body.push_back(0); m708_body.push_back(HTONS(10));
    m708_body.push_back(HTONS(110)); m708_body.push_back(0); m708_body.push_back(HTONS(20));
    // MayTrip
    m708_body.push_back(HTONS(2)); 
    m708_body.push_back(HTONS(105)); m708_body.push_back(0); m708_body.push_back(HTONS(15));
    m708_body.push_back(HTONS(115)); m708_body.push_back(0); m708_body.push_back(HTONS(25));
    // MomCess
    m708_body.push_back(HTONS(2)); 
    m708_body.push_back(HTONS(120)); m708_body.push_back(0); m708_body.push_back(HTONS(5));
    m708_body.push_back(HTONS(130)); m708_body.push_back(0); m708_body.push_back(HTONS(1));

    stream.insert(stream.end(), m708_body.begin(), m708_body.end());

    // 8. End Model
    stream.push_back(0xFFFF); 
    stream.push_back(0x0000);

    // Set data to server mapping
    server.set_holding_registers(0, stream);

    std::cout << "Server ready. Press Ctrl+C to stop." << std::endl;

    // Loop to handle requests
    while (running) {
        // This blocks until a client connects and disconnects
        server.handle_request();
    }

    server.stop();
    return 0;
}
