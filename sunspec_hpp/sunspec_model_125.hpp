// Generated C++ Header for Model 125
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model125_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t ModEna;
    uint16_t SigType;
    int16_t Sig;
    uint16_t WinTms;
    uint16_t RvtTms;
    uint16_t RmpTms;
    int16_t Sig_SF;
    uint16_t pad_9;
};
#pragma pack(pop)

class Model125 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 125;
    Model125_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model125_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_ModEna() const {
        return be16toh_custom(raw.ModEna);
    }

    uint16_t get_raw_SigType() const {
        return be16toh_custom(raw.SigType);
    }

    float get_Sig() const {
        int16_t sf_val = be16toh_custom_s(raw.Sig_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.Sig);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_Sig() const {
        return be16toh_custom_s(raw.Sig);
    }

    uint16_t get_raw_WinTms() const {
        return be16toh_custom(raw.WinTms);
    }

    uint16_t get_raw_RvtTms() const {
        return be16toh_custom(raw.RvtTms);
    }

    uint16_t get_raw_RmpTms() const {
        return be16toh_custom(raw.RmpTms);
    }

    int16_t get_raw_Sig_SF() const {
        return be16toh_custom_s(raw.Sig_SF);
    }

};
