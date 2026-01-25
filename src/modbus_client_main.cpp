#include <iostream>
#include <modbus/modbus.h>
#include <errno.h>
#include <vector>
#include <cstdint>
#include "sunspec_decoder.hpp"
#include "sunspec_hpp/sunspec_factory.hpp"

// 辅助：大端转换宏 (模拟网络数据)
#define HTONS(x) ((uint16_t)((((x) & 0xFF) << 8) | (((x) >> 8) & 0xFF)))

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

    // Read registers in chunks (Modbus TCP limit is usually 125 registers)
    const int TOTAL_LEN = 200;
    const int CHUNK_SIZE = 100;
    std::vector<uint16_t> buffer(TOTAL_LEN);
    
    int total_read = 0;
    for (int addr = 0; addr < TOTAL_LEN; addr += CHUNK_SIZE) {
        int len = std::min(CHUNK_SIZE, TOTAL_LEN - addr);
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

    // --- Decode SunSpec Data ---
    SunSpecDecoder decoder;
    decoder.decode(buffer.data(), total_read);

    // --- Access Models Dynamically ---
    std::cout << "\n--- Decoded Data ---" << std::endl;
    for (const auto& pair : decoder.models) {
        uint16_t id = pair.first;
        const auto& instances = pair.second;

        for (const auto& model_base : instances) {
            std::cout << "\n[Model " << id << "]" << std::endl;
            
            // Dynamic dispatch based on ID for specific printing
            if (id == 103) {
                 auto m = std::dynamic_pointer_cast<Model103>(model_base);
                 if (m) {
                    std::cout << "  Three Phase Inverter (Model 103)" << std::endl;
                    std::cout << "    Amps: " << m->get_A() << " A" << std::endl;
                    std::cout << "    Raw A: " << m->get_raw_A() << std::endl;
                    std::cout << "    Raw A_SF: " << m->get_raw_A_SF() << std::endl;
                 }
            } else if (id == 708) {
                 auto m = std::dynamic_pointer_cast<Model708>(model_base);
                 if (m) {
                    std::cout << "  IEEE 1547 (Model 708)" << std::endl;
                    std::cout << "    NPt: " << m->get_raw_NPt() << std::endl;
                 }
            } else if (id == 1) {
                 // Model 1 (Common) usually contains manufacturer info
                 auto m = std::dynamic_pointer_cast<Model1>(model_base);
                 if (m) {
                     // Safe string printing for fixed buffers
                     char mn[33] = {0};
                     std::memcpy(mn, m->raw.Mn, 32);
                     std::cout << "  Common Model (Model 1)" << std::endl;
                     std::cout << "  Manufacturer: " << mn << std::endl;
                 }
            } else {
                std::cout << "  (Generic handling for Model " << id << ")" << std::endl;
            }
        }
    }

    modbus_close(ctx);
    modbus_free(ctx);

    return 0;
}
