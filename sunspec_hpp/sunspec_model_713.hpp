// Generated C++ Header for Model 713
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model713_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t WHRtg;
    uint16_t WHAvail;
    uint16_t SoC;
    uint16_t SoH;
    uint16_t Sta;
    int16_t WH_SF;
    int16_t Pct_SF;
};
#pragma pack(pop)

class Model713 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 713;
    Model713_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model713_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    float get_WHRtg() const {
        int16_t sf_val = be16toh_custom_s(raw.WH_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.WHRtg);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_WHRtg() const {
        return be16toh_custom(raw.WHRtg);
    }

    float get_WHAvail() const {
        int16_t sf_val = be16toh_custom_s(raw.WH_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.WHAvail);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_WHAvail() const {
        return be16toh_custom(raw.WHAvail);
    }

    float get_SoC() const {
        int16_t sf_val = be16toh_custom_s(raw.Pct_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.SoC);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_SoC() const {
        return be16toh_custom(raw.SoC);
    }

    float get_SoH() const {
        int16_t sf_val = be16toh_custom_s(raw.Pct_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.SoH);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_SoH() const {
        return be16toh_custom(raw.SoH);
    }

    uint16_t get_raw_Sta() const {
        return be16toh_custom(raw.Sta);
    }

    int16_t get_raw_WH_SF() const {
        return be16toh_custom_s(raw.WH_SF);
    }

    int16_t get_raw_Pct_SF() const {
        return be16toh_custom_s(raw.Pct_SF);
    }

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
        std::cout << "    WHRtg: " << be16toh_custom(raw.WHRtg) << std::endl;
        std::cout << "    WHAvail: " << be16toh_custom(raw.WHAvail) << std::endl;
        std::cout << "    SoC: " << be16toh_custom(raw.SoC) << std::endl;
        std::cout << "    SoH: " << be16toh_custom(raw.SoH) << std::endl;
        std::cout << "    Sta: " << be16toh_custom(raw.Sta) << std::endl;
        std::cout << "    WH_SF: " << be16toh_custom_s(raw.WH_SF) << std::endl;
        std::cout << "    Pct_SF: " << be16toh_custom_s(raw.Pct_SF) << std::endl;
    }

};
