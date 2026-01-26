// Generated C++ Header for Model 806
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model806_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t BatTBD;
};
#pragma pack(pop)

// Repeating group: battery_string
#pragma pack(push, 1)
struct Model806_battery_string_Raw {
    uint16_t BatStTBD;
};
#pragma pack(pop)

class Model806 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 806;
    Model806_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model806_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_BatTBD() const {
        return be16toh_custom(raw.BatTBD);
    }

    // Accessor for repeating group: battery_string
    static const Model806_battery_string_Raw* get_battery_string(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model806_battery_string_Raw*>(base_buffer + offset_bytes + index * sizeof(Model806_battery_string_Raw));
    }

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
        std::cout << "    BatTBD: " << be16toh_custom(raw.BatTBD) << std::endl;
    }

};
