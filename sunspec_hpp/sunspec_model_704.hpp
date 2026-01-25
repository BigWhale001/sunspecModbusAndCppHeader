// Generated C++ Header for Model 704
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model704_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t PFWInjEna;
    uint16_t PFWInjEnaRvrt;
    uint32_t PFWInjRvrtTms;
    uint32_t PFWInjRvrtRem;
    uint16_t PFWAbsEna;
    uint16_t PFWAbsEnaRvrt;
    uint32_t PFWAbsRvrtTms;
    uint32_t PFWAbsRvrtRem;
    uint16_t WMaxLimPctEna;
    uint16_t WMaxLimPct;
    uint16_t WMaxLimPctRvrt;
    uint16_t WMaxLimPctEnaRvrt;
    uint32_t WMaxLimPctRvrtTms;
    uint32_t WMaxLimPctRvrtRem;
    uint16_t WSetEna;
    uint16_t WSetMod;
    int32_t WSet;
    int32_t WSetRvrt;
    int16_t WSetPct;
    int16_t WSetPctRvrt;
    uint16_t WSetEnaRvrt;
    uint32_t WSetRvrtTms;
    uint32_t WSetRvrtRem;
    uint16_t VarSetEna;
    uint16_t VarSetMod;
    uint16_t VarSetPri;
    int32_t VarSet;
    int32_t VarSetRvrt;
    int16_t VarSetPct;
    int16_t VarSetPctRvrt;
    uint16_t VarSetEnaRvrt;
    uint32_t VarSetRvrtTms;
    uint32_t VarSetRvrtRem;
    uint16_t WRmp;
    uint16_t WRmpRef;
    uint16_t VarRmp;
    uint16_t AntiIslEna;
    int16_t PF_SF;
    int16_t WMaxLimPct_SF;
    int16_t WSet_SF;
    int16_t WSetPct_SF;
    int16_t VarSet_SF;
    int16_t VarSetPct_SF;
};
#pragma pack(pop)

// Repeating group: PFWInj
#pragma pack(push, 1)
struct Model704_PFWInj_Raw {
    uint16_t PF;
    uint16_t Ext;
};
#pragma pack(pop)

// Repeating group: PFWInjRvrt
#pragma pack(push, 1)
struct Model704_PFWInjRvrt_Raw {
    uint16_t PF;
    uint16_t Ext;
};
#pragma pack(pop)

// Repeating group: PFWAbs
#pragma pack(push, 1)
struct Model704_PFWAbs_Raw {
    uint16_t PF;
    uint16_t Ext;
};
#pragma pack(pop)

// Repeating group: PFWAbsRvrt
#pragma pack(push, 1)
struct Model704_PFWAbsRvrt_Raw {
    uint16_t PF;
    uint16_t Ext;
};
#pragma pack(pop)

class Model704 : public SunSpecModelBase {
public:
    Model704_Raw raw;

    uint16_t get_id() const override { return 704; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model704_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_PFWInjEna() const {
        return be16toh_custom(raw.PFWInjEna);
    }

    uint16_t get_raw_PFWInjEnaRvrt() const {
        return be16toh_custom(raw.PFWInjEnaRvrt);
    }

    uint16_t get_raw_PFWAbsEna() const {
        return be16toh_custom(raw.PFWAbsEna);
    }

    uint16_t get_raw_PFWAbsEnaRvrt() const {
        return be16toh_custom(raw.PFWAbsEnaRvrt);
    }

    uint16_t get_raw_WMaxLimPctEna() const {
        return be16toh_custom(raw.WMaxLimPctEna);
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

    float get_WMaxLimPctRvrt() const {
        int16_t sf_val = be16toh_custom_s(raw.WMaxLimPct_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.WMaxLimPctRvrt);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_WMaxLimPctRvrt() const {
        return be16toh_custom(raw.WMaxLimPctRvrt);
    }

    uint16_t get_raw_WMaxLimPctEnaRvrt() const {
        return be16toh_custom(raw.WMaxLimPctEnaRvrt);
    }

    uint16_t get_raw_WSetEna() const {
        return be16toh_custom(raw.WSetEna);
    }

    uint16_t get_raw_WSetMod() const {
        return be16toh_custom(raw.WSetMod);
    }

    float get_WSetPct() const {
        int16_t sf_val = be16toh_custom_s(raw.WSetPct_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.WSetPct);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_WSetPct() const {
        return be16toh_custom_s(raw.WSetPct);
    }

    float get_WSetPctRvrt() const {
        int16_t sf_val = be16toh_custom_s(raw.WSetPct_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.WSetPctRvrt);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_WSetPctRvrt() const {
        return be16toh_custom_s(raw.WSetPctRvrt);
    }

    uint16_t get_raw_WSetEnaRvrt() const {
        return be16toh_custom(raw.WSetEnaRvrt);
    }

    uint16_t get_raw_VarSetEna() const {
        return be16toh_custom(raw.VarSetEna);
    }

    uint16_t get_raw_VarSetMod() const {
        return be16toh_custom(raw.VarSetMod);
    }

    uint16_t get_raw_VarSetPri() const {
        return be16toh_custom(raw.VarSetPri);
    }

    float get_VarSetPct() const {
        int16_t sf_val = be16toh_custom_s(raw.VarSetPct_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.VarSetPct);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_VarSetPct() const {
        return be16toh_custom_s(raw.VarSetPct);
    }

    float get_VarSetPctRvrt() const {
        int16_t sf_val = be16toh_custom_s(raw.VarSetPct_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.VarSetPctRvrt);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_VarSetPctRvrt() const {
        return be16toh_custom_s(raw.VarSetPctRvrt);
    }

    uint16_t get_raw_VarSetEnaRvrt() const {
        return be16toh_custom(raw.VarSetEnaRvrt);
    }

    uint16_t get_raw_WRmp() const {
        return be16toh_custom(raw.WRmp);
    }

    uint16_t get_raw_WRmpRef() const {
        return be16toh_custom(raw.WRmpRef);
    }

    uint16_t get_raw_VarRmp() const {
        return be16toh_custom(raw.VarRmp);
    }

    uint16_t get_raw_AntiIslEna() const {
        return be16toh_custom(raw.AntiIslEna);
    }

    int16_t get_raw_PF_SF() const {
        return be16toh_custom_s(raw.PF_SF);
    }

    int16_t get_raw_WMaxLimPct_SF() const {
        return be16toh_custom_s(raw.WMaxLimPct_SF);
    }

    int16_t get_raw_WSet_SF() const {
        return be16toh_custom_s(raw.WSet_SF);
    }

    int16_t get_raw_WSetPct_SF() const {
        return be16toh_custom_s(raw.WSetPct_SF);
    }

    int16_t get_raw_VarSet_SF() const {
        return be16toh_custom_s(raw.VarSet_SF);
    }

    int16_t get_raw_VarSetPct_SF() const {
        return be16toh_custom_s(raw.VarSetPct_SF);
    }

    // Accessor for repeating group: PFWInj
    static const Model704_PFWInj_Raw* get_PFWInj(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model704_PFWInj_Raw*>(base_buffer + offset_bytes + index * sizeof(Model704_PFWInj_Raw));
    }

    // Accessor for repeating group: PFWInjRvrt
    static const Model704_PFWInjRvrt_Raw* get_PFWInjRvrt(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model704_PFWInjRvrt_Raw*>(base_buffer + offset_bytes + index * sizeof(Model704_PFWInjRvrt_Raw));
    }

    // Accessor for repeating group: PFWAbs
    static const Model704_PFWAbs_Raw* get_PFWAbs(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model704_PFWAbs_Raw*>(base_buffer + offset_bytes + index * sizeof(Model704_PFWAbs_Raw));
    }

    // Accessor for repeating group: PFWAbsRvrt
    static const Model704_PFWAbsRvrt_Raw* get_PFWAbsRvrt(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model704_PFWAbsRvrt_Raw*>(base_buffer + offset_bytes + index * sizeof(Model704_PFWAbsRvrt_Raw));
    }

};
