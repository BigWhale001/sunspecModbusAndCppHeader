// Generated C++ Header for Model 306
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model306_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t GHI;
    uint16_t A;
    uint16_t V;
    uint16_t Tmp;
};
#pragma pack(pop)

class Model306 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 306;
    Model306_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model306_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_GHI() const {
        return be16toh_custom(raw.GHI);
    }

    uint16_t get_raw_A() const {
        return be16toh_custom(raw.A);
    }

    uint16_t get_raw_V() const {
        return be16toh_custom(raw.V);
    }

    uint16_t get_raw_Tmp() const {
        return be16toh_custom(raw.Tmp);
    }

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
            std::cout << "    GHI: " << be16toh_custom(raw.GHI) << std::endl;
            std::cout << "    A: " << be16toh_custom(raw.A) << std::endl;
            std::cout << "    V: " << be16toh_custom(raw.V) << std::endl;
            std::cout << "    Tmp: " << be16toh_custom(raw.Tmp) << std::endl;
        const uint8_t* cur_ptr = base_addr + sizeof(Model306_Raw);
    }

};
