// Generated C++ Header for Model 803
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model803_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t NStr;
    uint16_t NStrCon;
    int16_t ModTmpMax;
    uint16_t ModTmpMaxStr;
    uint16_t ModTmpMaxMod;
    int16_t ModTmpMin;
    uint16_t ModTmpMinStr;
    uint16_t ModTmpMinMod;
    int16_t ModTmpAvg;
    uint16_t StrVMax;
    uint16_t StrVMaxStr;
    uint16_t StrVMin;
    uint16_t StrVMinStr;
    uint16_t StrVAvg;
    int16_t StrAMax;
    uint16_t StrAMaxStr;
    int16_t StrAMin;
    uint16_t StrAMinStr;
    int16_t StrAAvg;
    uint16_t NCellBal;
    int16_t CellV_SF;
    int16_t ModTmp_SF;
    int16_t A_SF;
    int16_t SoH_SF;
    int16_t SoC_SF;
    int16_t V_SF;
};
#pragma pack(pop)

class Model803 : public SunSpecModelBase {
public:
    Model803_Raw raw;

    uint16_t get_id() const override { return 803; }

    void from_buffer(const uint8_t* buffer) override {
        std::memcpy(&raw, buffer, sizeof(Model803_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_NStr() const {
        return be16toh_custom(raw.NStr);
    }

    uint16_t get_raw_NStrCon() const {
        return be16toh_custom(raw.NStrCon);
    }

    float get_ModTmpMax() const {
        int16_t sf_val = be16toh_custom_s(raw.ModTmp_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.ModTmpMax);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_ModTmpMax() const {
        return be16toh_custom_s(raw.ModTmpMax);
    }

    uint16_t get_raw_ModTmpMaxStr() const {
        return be16toh_custom(raw.ModTmpMaxStr);
    }

    uint16_t get_raw_ModTmpMaxMod() const {
        return be16toh_custom(raw.ModTmpMaxMod);
    }

    float get_ModTmpMin() const {
        int16_t sf_val = be16toh_custom_s(raw.ModTmp_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.ModTmpMin);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_ModTmpMin() const {
        return be16toh_custom_s(raw.ModTmpMin);
    }

    uint16_t get_raw_ModTmpMinStr() const {
        return be16toh_custom(raw.ModTmpMinStr);
    }

    uint16_t get_raw_ModTmpMinMod() const {
        return be16toh_custom(raw.ModTmpMinMod);
    }

    float get_ModTmpAvg() const {
        int16_t sf_val = be16toh_custom_s(raw.ModTmp_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.ModTmpAvg);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_ModTmpAvg() const {
        return be16toh_custom_s(raw.ModTmpAvg);
    }

    float get_StrVMax() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.StrVMax);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_StrVMax() const {
        return be16toh_custom(raw.StrVMax);
    }

    uint16_t get_raw_StrVMaxStr() const {
        return be16toh_custom(raw.StrVMaxStr);
    }

    float get_StrVMin() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.StrVMin);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_StrVMin() const {
        return be16toh_custom(raw.StrVMin);
    }

    uint16_t get_raw_StrVMinStr() const {
        return be16toh_custom(raw.StrVMinStr);
    }

    float get_StrVAvg() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.StrVAvg);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_StrVAvg() const {
        return be16toh_custom(raw.StrVAvg);
    }

    float get_StrAMax() const {
        int16_t sf_val = be16toh_custom_s(raw.A_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.StrAMax);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_StrAMax() const {
        return be16toh_custom_s(raw.StrAMax);
    }

    uint16_t get_raw_StrAMaxStr() const {
        return be16toh_custom(raw.StrAMaxStr);
    }

    float get_StrAMin() const {
        int16_t sf_val = be16toh_custom_s(raw.A_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.StrAMin);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_StrAMin() const {
        return be16toh_custom_s(raw.StrAMin);
    }

    uint16_t get_raw_StrAMinStr() const {
        return be16toh_custom(raw.StrAMinStr);
    }

    float get_StrAAvg() const {
        int16_t sf_val = be16toh_custom_s(raw.A_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.StrAAvg);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_StrAAvg() const {
        return be16toh_custom_s(raw.StrAAvg);
    }

    uint16_t get_raw_NCellBal() const {
        return be16toh_custom(raw.NCellBal);
    }

};
