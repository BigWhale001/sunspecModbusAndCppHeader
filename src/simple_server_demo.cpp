#include <iostream>
#include <vector>
#include <unistd.h> // for sleep
#include <csignal>
#include "modbus_server.hpp"

// Global flag to stop the loop gracefully
volatile bool keep_running = true;

void signal_handler(int signum) {
    std::cout << "\nCaught signal " << signum << ", stopping server..." << std::endl;
    keep_running = false;
}

int main() {
    // Register signal handler (Ctrl+C)
    signal(SIGINT, signal_handler);

    // 1. Create Server Instance
    // Listen on localhost port 1502
    std::string ip = "127.0.0.1";
    int port = 1502;
    ModbusServer server(ip, port);

    std::cout << "=== Simple Modbus Server Demo ===" << std::endl;

    // 2. Start Listening
    if (!server.start()) {
        std::cerr << "Failed to start server on " << ip << ":" << port << std::endl;
        return 1;
    }
    std::cout << "Server started on " << ip << ":" << port << std::endl;

    // 3. Allocate Memory Mapping
    // Allocating 500 Holding Registers (to be compatible with mb_client's heartbeat check at 400)
    int num_registers = 500;
    if (!server.allocate_mapping(0, 0, num_registers, 0)) {
        std::cerr << "Failed to allocate mapping" << std::endl;
        return 1;
    }
    std::cout << "Allocated " << num_registers << " Holding Registers." << std::endl;
    
    std::vector<uint16_t> suns_data;
    
    // Header: "SunS"
    suns_data.push_back(0x5375); 
    suns_data.push_back(0x6e53);
    
    // Model 1 Header: ID=1, Len=66
    suns_data.push_back(0x0001); 
    suns_data.push_back(66);
    
    // Model 1 Body: Fill with 66 zeros (Padding) to satisfy length requirement
    for(int i=0; i<66; i++) {
        suns_data.push_back(0); 
    }

    // End Model Marker: 0xFFFF, 0x0000
    suns_data.push_back(0xFFFF);
    suns_data.push_back(0x0000);

    server.set_holding_registers(0, suns_data);
    std::cout << "Set valid SunSpec Data (Header + Model 1 + End) at Register[0-" << suns_data.size()-1 << "]" << std::endl;

    // Set registers 200-204 to [10, 20, 30, 40, 50] (moved to avoid overlap)
    std::vector<uint16_t> batch_data = {10, 20, 30, 40, 50};
    server.set_holding_registers(200, batch_data);
    std::cout << "Set Register[200-204] = {10, 20, 30, 40, 50}" << std::endl;

    std::cout << "Server is running. Waiting for connections..." << std::endl;
    std::cout << "Press Ctrl+C to stop." << std::endl;

    // 6. Main Loop
    while (keep_running) {
        
        bool success = server.handle_request();

        if (success) {
            std::cout << "Client disconnected or timeout. Ready for next connection." << std::endl;
            
            uint16_t current_val = server.get_holding_register(9);
            server.set_holding_register(9, current_val + 1);
            std::cout << "Updated Register[9] to " << (current_val + 1) << std::endl;
        }
    }

    // 7. Stop Server (Optional, destructor also calls this)
    server.stop();
    std::cout << "Server stopped." << std::endl;

    return 0;
}
