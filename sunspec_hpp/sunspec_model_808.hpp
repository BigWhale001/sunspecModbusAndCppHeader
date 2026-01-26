// Generated C++ Header for Model 808
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model808_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t ModuleTBD;
};
#pragma pack(pop)

// Repeating group: stack
#pragma pack(push, 1)
struct Model808_stack_Raw {
    uint16_t StackTBD;
};
#pragma pack(pop)

class Model808 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 808;
    Model808_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model808_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_ModuleTBD() const {
        return be16toh_custom(raw.ModuleTBD);
    }

    // Accessor for repeating group: stack
    static const Model808_stack_Raw* get_stack(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model808_stack_Raw*>(base_buffer + offset_bytes + index * sizeof(Model808_stack_Raw));
    }

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
        std::cout << "    ModuleTBD: " << be16toh_custom(raw.ModuleTBD) << std::endl;
    }

};
