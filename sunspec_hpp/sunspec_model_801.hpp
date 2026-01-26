// Generated C++ Header for Model 801
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model801_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t DEPRECATED;
};
#pragma pack(pop)

class Model801 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 801;
    Model801_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model801_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_DEPRECATED() const {
        return be16toh_custom(raw.DEPRECATED);
    }

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
        std::cout << "    DEPRECATED: " << be16toh_custom(raw.DEPRECATED) << std::endl;
    }

};
