// Generated C++ Header for Model 303
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model303_Raw {
    uint16_t ID;
    uint16_t L;
};
#pragma pack(pop)

// Repeating group: temp
#pragma pack(push, 1)
struct Model303_temp_Raw {
    int16_t TmpBOM;
};
#pragma pack(pop)

class Model303 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 303;
    Model303_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model303_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    // Accessor for repeating group: temp
    static const Model303_temp_Raw* get_temp(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model303_temp_Raw*>(base_buffer + offset_bytes + index * sizeof(Model303_temp_Raw));
    }

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
    }

};
