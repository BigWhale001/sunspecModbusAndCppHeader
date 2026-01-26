#include "modbus_client.hpp"
#include <iostream>
#include <errno.h>

ModbusClient::ModbusClient(const std::string& ip, int port, int slave_id)
    : ip_(ip), port_(port), slave_id_(slave_id), ctx_(nullptr), connected_(false) {
    ctx_ = modbus_new_tcp(ip.c_str(), port);
    if (ctx_ == nullptr) {
        std::cerr << "Unable to create the libmodbus context" << std::endl;
    } else {
        modbus_set_slave(ctx_, slave_id);
    }
}

ModbusClient::~ModbusClient() {
    disconnect();
    if (ctx_) {
        modbus_free(ctx_);
    }
}

bool ModbusClient::connect() {
    if (!ctx_) return false;

    if (modbus_connect(ctx_) == -1) {
        std::cerr << "Connection failed: " << modbus_strerror(errno) << std::endl;
        connected_ = false;
        return false;
    }
    
    connected_ = true;
    return true;
}

void ModbusClient::disconnect() {
    if (ctx_ && connected_) {
        modbus_close(ctx_);
        connected_ = false;
    }
}

bool ModbusClient::is_connected() const {
    return connected_;
}

bool ModbusClient::read_holding_registers(int address, int count, std::vector<uint16_t>& buffer) {
    if (!connected_ || !ctx_) return false;

    buffer.resize(count);
    int rc = modbus_read_registers(ctx_, address, count, buffer.data());
    if (rc == -1) {
        std::cerr << "Read failed at address " << address << ": " << modbus_strerror(errno) << std::endl;
        return false;
    }
    return true;
}

bool ModbusClient::write_register(int address, uint16_t value) {
    if (!connected_ || !ctx_) return false;

    int rc = modbus_write_register(ctx_, address, value);
    if (rc == -1) {
        std::cerr << "Write failed at address " << address << ": " << modbus_strerror(errno) << std::endl;
        return false;
    }
    return true;
}

bool ModbusClient::write_registers(int address, const std::vector<uint16_t>& values) {
    if (!connected_ || !ctx_) return false;

    int rc = modbus_write_registers(ctx_, address, values.size(), values.data());
    if (rc == -1) {
        std::cerr << "Write multiple failed at address " << address << ": " << modbus_strerror(errno) << std::endl;
        return false;
    }
    return true;
}

bool ModbusClient::send_heartbeat(int address, uint16_t value) {
    // Heartbeat is just writing a value to a register
    return write_register(address, value);
}
