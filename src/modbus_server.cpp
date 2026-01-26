#include "modbus_server.hpp"
#include <iostream>
#include <errno.h>
#include <cstring>
#include <unistd.h>
#include <sys/select.h>

ModbusServer::ModbusServer(const std::string& ip, int port, int max_connections)
    : ip_(ip), port_(port), max_connections_(max_connections), 
      ctx_(nullptr), mb_mapping_(nullptr), server_socket_(-1) {
    ctx_ = modbus_new_tcp(ip.c_str(), port);
    if (ctx_ == nullptr) {
        std::cerr << "Unable to create the libmodbus context" << std::endl;
    }
}

ModbusServer::~ModbusServer() {
    stop();
    if (mb_mapping_) {
        modbus_mapping_free(mb_mapping_);
    }
    if (ctx_) {
        modbus_free(ctx_);
    }
}

bool ModbusServer::start() {
    if (!ctx_) return false;

    server_socket_ = modbus_tcp_listen(ctx_, max_connections_);
    if (server_socket_ == -1) {
        std::cerr << "Unable to listen: " << modbus_strerror(errno) << std::endl;
        return false;
    }
    return true;
}

void ModbusServer::stop() {
    if (server_socket_ != -1) {
        close(server_socket_);
        server_socket_ = -1;
    }
}

bool ModbusServer::allocate_mapping(int nb_bits, int nb_input_bits, int nb_registers, int nb_input_registers) {
    if (mb_mapping_) {
        modbus_mapping_free(mb_mapping_);
    }
    mb_mapping_ = modbus_mapping_new(nb_bits, nb_input_bits, nb_registers, nb_input_registers);
    if (mb_mapping_ == nullptr) {
        std::cerr << "Failed to allocate the mapping: " << modbus_strerror(errno) << std::endl;
        return false;
    }
    return true;
}

void ModbusServer::set_holding_register(int address, uint16_t value) {
    if (mb_mapping_ && address >= 0 && address < mb_mapping_->nb_registers) {
        mb_mapping_->tab_registers[address] = value;
    }
}

uint16_t ModbusServer::get_holding_register(int address) const {
    if (mb_mapping_ && address >= 0 && address < mb_mapping_->nb_registers) {
        return mb_mapping_->tab_registers[address];
    }
    return 0;
}

void ModbusServer::set_holding_registers(int address, const std::vector<uint16_t>& values) {
    if (!mb_mapping_) return;
    
    for (size_t i = 0; i < values.size(); ++i) {
        if (address + i < static_cast<size_t>(mb_mapping_->nb_registers)) {
            mb_mapping_->tab_registers[address + i] = values[i];
        }
    }
}

bool ModbusServer::handle_request() {
    if (!ctx_ || !mb_mapping_ || server_socket_ == -1) return false;

    // Use select to wait for a connection with timeout (1s)
    // This allows the main loop to check for termination signals
    fd_set readfds;
    struct timeval tv;
    FD_ZERO(&readfds);
    FD_SET(server_socket_, &readfds);
    tv.tv_sec = 1;
    tv.tv_usec = 0;

    int s_rc = select(server_socket_ + 1, &readfds, NULL, NULL, &tv);
    if (s_rc == -1) {
        // Error or signal
        return false;
    } else if (s_rc == 0) {
        // Timeout
        return true;
    }

    // Accept new connection
    // modbus_tcp_accept is blocking by default until a client connects
    int rc = modbus_tcp_accept(ctx_, &server_socket_);
    if (rc == -1) {
        std::cerr << "Accept failed: " << modbus_strerror(errno) << std::endl;
        return false;
    }

    // Loop to receive data from the connected client
    // until connection is closed or error
    uint8_t query[MODBUS_TCP_MAX_ADU_LENGTH];
    while (true) {
        rc = modbus_receive(ctx_, query);
        if (rc > 0) {
            // Reply to the request
            modbus_reply(ctx_, query, rc, mb_mapping_);
        } else if (rc == -1) {
            // Connection closed or error
            break;
        }
    }

    // Close the connection with the current client
    modbus_close(ctx_);

    return true;
}

int ModbusServer::get_socket() const {
    return server_socket_;
}
