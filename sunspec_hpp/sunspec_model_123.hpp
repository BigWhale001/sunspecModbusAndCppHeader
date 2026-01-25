// Generated C++ Header for Model 123
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model123_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t Conn_WinTms;
    uint16_t Conn_RvrtTms;
    uint16_t Conn;
    uint16_t WMaxLimPct;
    uint16_t WMaxLimPct_WinTms;
    uint16_t WMaxLimPct_RvrtTms;
    uint16_t WMaxLimPct_RmpTms;
    uint16_t WMaxLim_Ena;
    int16_t OutPFSet;
    uint16_t OutPFSet_WinTms;
    uint16_t OutPFSet_RvrtTms;
    uint16_t OutPFSet_RmpTms;
    uint16_t OutPFSet_Ena;
    int16_t VArWMaxPct;
    int16_t VArMaxPct;
    int16_t VArAvalPct;
    uint16_t VArPct_WinTms;
    uint16_t VArPct_RvrtTms;
    uint16_t VArPct_RmpTms;
    uint16_t VArPct_Mod;
    uint16_t VArPct_Ena;
    int16_t WMaxLimPct_SF;
    int16_t OutPFSet_SF;
    int16_t VArPct_SF;
};
#pragma pack(pop)

class Model123 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 123;
    Model123_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model123_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_Conn_WinTms() const {
        return be16toh_custom(raw.Conn_WinTms);
    }

    uint16_t get_raw_Conn_RvrtTms() const {
        return be16toh_custom(raw.Conn_RvrtTms);
    }

    uint16_t get_raw_Conn() const {
        return be16toh_custom(raw.Conn);
    }

    float get_WMaxLimPct() const {
        int16_t sf_val = be16toh_custom_s(raw.WMaxLimPct_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.WMaxLimPct);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_WMaxLimPct() const {
        return be16toh_custom(raw.WMaxLimPct);
    }

    uint16_t get_raw_WMaxLimPct_WinTms() const {
        return be16toh_custom(raw.WMaxLimPct_WinTms);
    }

    uint16_t get_raw_WMaxLimPct_RvrtTms() const {
        return be16toh_custom(raw.WMaxLimPct_RvrtTms);
    }

    uint16_t get_raw_WMaxLimPct_RmpTms() const {
        return be16toh_custom(raw.WMaxLimPct_RmpTms);
    }

    uint16_t get_raw_WMaxLim_Ena() const {
        return be16toh_custom(raw.WMaxLim_Ena);
    }

    float get_OutPFSet() const {
        int16_t sf_val = be16toh_custom_s(raw.OutPFSet_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.OutPFSet);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_OutPFSet() const {
        return be16toh_custom_s(raw.OutPFSet);
    }

    uint16_t get_raw_OutPFSet_WinTms() const {
        return be16toh_custom(raw.OutPFSet_WinTms);
    }

    uint16_t get_raw_OutPFSet_RvrtTms() const {
        return be16toh_custom(raw.OutPFSet_RvrtTms);
    }

    uint16_t get_raw_OutPFSet_RmpTms() const {
        return be16toh_custom(raw.OutPFSet_RmpTms);
    }

    uint16_t get_raw_OutPFSet_Ena() const {
        return be16toh_custom(raw.OutPFSet_Ena);
    }

    float get_VArWMaxPct() const {
        int16_t sf_val = be16toh_custom_s(raw.VArPct_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.VArWMaxPct);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_VArWMaxPct() const {
        return be16toh_custom_s(raw.VArWMaxPct);
    }

    float get_VArMaxPct() const {
        int16_t sf_val = be16toh_custom_s(raw.VArPct_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.VArMaxPct);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_VArMaxPct() const {
        return be16toh_custom_s(raw.VArMaxPct);
    }

    float get_VArAvalPct() const {
        int16_t sf_val = be16toh_custom_s(raw.VArPct_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.VArAvalPct);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_VArAvalPct() const {
        return be16toh_custom_s(raw.VArAvalPct);
    }

    uint16_t get_raw_VArPct_WinTms() const {
        return be16toh_custom(raw.VArPct_WinTms);
    }

    uint16_t get_raw_VArPct_RvrtTms() const {
        return be16toh_custom(raw.VArPct_RvrtTms);
    }

    uint16_t get_raw_VArPct_RmpTms() const {
        return be16toh_custom(raw.VArPct_RmpTms);
    }

    uint16_t get_raw_VArPct_Mod() const {
        return be16toh_custom(raw.VArPct_Mod);
    }

    uint16_t get_raw_VArPct_Ena() const {
        return be16toh_custom(raw.VArPct_Ena);
    }

    int16_t get_raw_WMaxLimPct_SF() const {
        return be16toh_custom_s(raw.WMaxLimPct_SF);
    }

    int16_t get_raw_OutPFSet_SF() const {
        return be16toh_custom_s(raw.OutPFSet_SF);
    }

    int16_t get_raw_VArPct_SF() const {
        return be16toh_custom_s(raw.VArPct_SF);
    }

};
