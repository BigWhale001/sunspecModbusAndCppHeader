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

// Repeating group: IV
#pragma pack(push, 1)
struct Model64413_IV_Raw {
    uint16_t P;
    uint16_t I;
    uint16_t V;
};
#pragma pack(pop)

class Model64413 : public SunSpecModelBase {
public:
    Model64413_Raw raw;

    uint16_t get_id() const override { return 64413; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
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

    int16_t get_raw_Irr_SF() const {
        return be16toh_custom_s(raw.Irr_SF);
    }

    // Accessor for repeating group: IV
    static const Model64413_IV_Raw* get_IV(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model64413_IV_Raw*>(base_buffer + offset_bytes + index * sizeof(Model64413_IV_Raw));
    }

};
