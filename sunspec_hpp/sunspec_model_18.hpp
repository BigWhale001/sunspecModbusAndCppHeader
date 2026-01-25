// Generated C++ Header for Model 18
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
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
    Model18_Raw raw;

    uint16_t get_id() const override { return 18; }

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

};
