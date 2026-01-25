// Generated C++ Header for Model 703
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model703_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t ES;
    uint16_t ESVHi;
    uint16_t ESVLo;
    uint32_t ESHzHi;
    uint32_t ESHzLo;
    uint32_t ESDlyTms;
    uint32_t ESRndTms;
    uint32_t ESRmpTms;
    uint32_t ESDlyRemTms;
    int16_t V_SF;
    int16_t Hz_SF;
};
#pragma pack(pop)

class Model703 : public SunSpecModelBase {
public:
    Model703_Raw raw;

    uint16_t get_id() const override { return 703; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model703_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_ES() const {
        return be16toh_custom(raw.ES);
    }

    float get_ESVHi() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.ESVHi);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_ESVHi() const {
        return be16toh_custom(raw.ESVHi);
    }

    float get_ESVLo() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.ESVLo);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_ESVLo() const {
        return be16toh_custom(raw.ESVLo);
    }

    int16_t get_raw_V_SF() const {
        return be16toh_custom_s(raw.V_SF);
    }

    int16_t get_raw_Hz_SF() const {
        return be16toh_custom_s(raw.Hz_SF);
    }

};
