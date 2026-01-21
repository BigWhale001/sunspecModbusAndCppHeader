// Generated C++ Header for Model 127
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model127_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t WGra;
    int16_t HzStr;
    int16_t HzStop;
    uint16_t HysEna;
    uint16_t ModEna;
    uint16_t HzStopWGra;
    int16_t WGra_SF;
    int16_t HzStrStop_SF;
    int16_t RmpIncDec_SF;
    uint16_t pad_11;
};
#pragma pack(pop)

class Model127 : public SunSpecModelBase {
public:
    Model127_Raw raw;

    uint16_t get_id() const override { return 127; }

    void from_buffer(const uint8_t* buffer) override {
        std::memcpy(&raw, buffer, sizeof(Model127_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    float get_WGra() const {
        int16_t sf_val = be16toh_custom_s(raw.WGra_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.WGra);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_WGra() const {
        return be16toh_custom(raw.WGra);
    }

    float get_HzStr() const {
        int16_t sf_val = be16toh_custom_s(raw.HzStrStop_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.HzStr);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_HzStr() const {
        return be16toh_custom_s(raw.HzStr);
    }

    float get_HzStop() const {
        int16_t sf_val = be16toh_custom_s(raw.HzStrStop_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.HzStop);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_HzStop() const {
        return be16toh_custom_s(raw.HzStop);
    }

    uint16_t get_raw_HysEna() const {
        return be16toh_custom_s(raw.HysEna);
    }

    uint16_t get_raw_ModEna() const {
        return be16toh_custom_s(raw.ModEna);
    }

    float get_HzStopWGra() const {
        int16_t sf_val = be16toh_custom_s(raw.RmpIncDec_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.HzStopWGra);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_HzStopWGra() const {
        return be16toh_custom(raw.HzStopWGra);
    }

};
