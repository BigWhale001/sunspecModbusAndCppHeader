// Generated C++ Header for Model 18
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model18_Raw {
    uint16_t ID;
    uint16_t L;
    char Nam[8];
    uint32_t IMEI;
    char APN[8];
    char Num[12];
    char Pin[12];
};
#pragma pack(pop)

class Model18 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 18;
    Model18_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model18_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
        std::cout << "    Nam: ";
        for(size_t i=0; i<sizeof(raw.Nam) && raw.Nam[i] != 0; ++i) std::cout << raw.Nam[i];
        std::cout << std::endl;
        std::cout << "    IMEI: " << be32toh_custom(raw.IMEI) << std::endl;
        std::cout << "    APN: ";
        for(size_t i=0; i<sizeof(raw.APN) && raw.APN[i] != 0; ++i) std::cout << raw.APN[i];
        std::cout << std::endl;
        std::cout << "    Num: ";
        for(size_t i=0; i<sizeof(raw.Num) && raw.Num[i] != 0; ++i) std::cout << raw.Num[i];
        std::cout << std::endl;
        std::cout << "    Pin: ";
        for(size_t i=0; i<sizeof(raw.Pin) && raw.Pin[i] != 0; ++i) std::cout << raw.Pin[i];
        std::cout << std::endl;
    }

};
