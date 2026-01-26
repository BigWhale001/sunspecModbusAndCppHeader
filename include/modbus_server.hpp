#pragma once

#include <string>
#include <vector>
#include <cstdint>
#include <modbus/modbus.h>


class ModbusServer {
public:
    ModbusServer(const std::string& ip, int port, int max_connections = 1);
    ~ModbusServer();

    bool start();
    void stop();
    
    // Allocate mapping for registers
    bool allocate_mapping(int nb_bits, int nb_input_bits, int nb_registers, int nb_input_registers);
    
    // Set value in Holding Registers (used for simulation)
    void set_holding_register(int address, uint16_t value);
    
    // Get value from Holding Registers
    uint16_t get_holding_register(int address) const;

    // Load multiple registers from a vector
    void set_holding_registers(int address, const std::vector<uint16_t>& values);

    // Handle incoming requests (blocking, usually runs in a loop)
    // Returns true if request handled, false on error or exit
    bool handle_request();
    
    // Listen socket getter (for advanced usage like select/poll)
    int get_socket() const;

private:
    std::string ip_;
    int port_;
    int max_connections_;
    modbus_t* ctx_;
    modbus_mapping_t* mb_mapping_;
    int server_socket_;
};
