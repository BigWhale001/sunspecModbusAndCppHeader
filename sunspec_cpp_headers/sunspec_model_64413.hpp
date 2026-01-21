// Generated C++ Header for Model 64413
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model64413_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t IVLen;
    uint16_t Irr;
    int16_t Irr_SF;
};
#pragma pack(pop)

class Model64413 : public SunSpecModelBase {
public:
    Model64413_Raw raw;

    uint16_t get_id() const override { return 64413; }

    void from_buffer(const uint8_t* buffer) override {
        std::memcpy(&raw, buffer, sizeof(Model64413_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    float get_Irr() const {
        int16_t sf_val = be16toh_custom_s(raw.Irr_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.Irr);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_Irr() const {
        return be16toh_custom(raw.Irr);
    }

};
