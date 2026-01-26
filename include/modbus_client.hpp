#pragma once

#include <string>
#include <vector>
#include <cstdint>
#include <modbus/modbus.h>

class ModbusClient {
public:
    ModbusClient(const std::string& ip, int port, int slave_id = 1);
    ~ModbusClient();

    bool connect();
    void disconnect();
    bool is_connected() const;

    // Read Holding Registers (Function Code 0x03)
    bool read_holding_registers(int address, int count, std::vector<uint16_t>& buffer);

    // Write Single Register (Function Code 0x06)
    bool write_register(int address, uint16_t value);

    // Write Multiple Registers (Function Code 0x10)
    bool write_registers(int address, const std::vector<uint16_t>& values);

    // Heartbeat: Write a value to a specific register to indicate aliveness
    bool send_heartbeat(int address, uint16_t value);

private:
    std::string ip_;
    int port_;
    int slave_id_;
    modbus_t* ctx_;
    bool connected_;
};


