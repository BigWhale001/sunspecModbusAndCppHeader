// Generated C++ Header for Model 64410
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model64410_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t VMaxLim;
    uint16_t PMaxLim;
    uint16_t IMaxLim;
    uint16_t Mode;
    uint16_t Ena;
    uint16_t Reset;
    uint16_t VSet;
    uint16_t PSet;
    uint16_t ISet;
    uint16_t EN50530;
    uint16_t Vmpp;
    uint16_t Pmpp;
    uint16_t GSet;
    uint16_t VSlewRate;
    uint16_t PSlewRate;
    uint16_t ISlewRate;
    uint16_t EnaProf;
    uint16_t AdptProfReq;
    uint16_t AdptProfRslt;
    int32_t V;
    int32_t P;
    int32_t I;
    char Errors[64];
    uint16_t NPt;
    uint16_t NProf;
    int16_t W_SF;
    int16_t V_SF;
    int16_t A_SF;
    int16_t G_SF;
    int16_t Tms_SF;
    int16_t VSlew_SF;
    int16_t PSlew_SF;
    int16_t ISlew_SF;
    int16_t Pct_SF;
};
#pragma pack(pop)

// Repeating group: Prof
#pragma pack(push, 1)
struct Model64410_Prof_Raw {
    uint16_t ActPt;
    uint32_t DeptRef;
};
#pragma pack(pop)

// Repeating group: Prof_Pt
#pragma pack(push, 1)
struct Model64410_Prof_Pt_Raw {
    uint16_t Tms;
    uint16_t V;
    uint16_t P;
    uint16_t I;
    uint16_t G;
};
#pragma pack(pop)

class Model64410 : public SunSpecModelBase {
public:
    Model64410_Raw raw;

    uint16_t get_id() const override { return 64410; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model64410_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    float get_VMaxLim() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.VMaxLim);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_VMaxLim() const {
        return be16toh_custom(raw.VMaxLim);
    }

    float get_PMaxLim() const {
        int16_t sf_val = be16toh_custom_s(raw.W_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.PMaxLim);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_PMaxLim() const {
        return be16toh_custom(raw.PMaxLim);
    }

    float get_IMaxLim() const {
        int16_t sf_val = be16toh_custom_s(raw.A_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.IMaxLim);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_IMaxLim() const {
        return be16toh_custom(raw.IMaxLim);
    }

    uint16_t get_raw_Mode() const {
        return be16toh_custom(raw.Mode);
    }

    uint16_t get_raw_Ena() const {
        return be16toh_custom(raw.Ena);
    }

    uint16_t get_raw_Reset() const {
        return be16toh_custom(raw.Reset);
    }

    float get_VSet() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.VSet);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_VSet() const {
        return be16toh_custom(raw.VSet);
    }

    float get_PSet() const {
        int16_t sf_val = be16toh_custom_s(raw.W_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.PSet);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_PSet() const {
        return be16toh_custom(raw.PSet);
    }

    float get_ISet() const {
        int16_t sf_val = be16toh_custom_s(raw.A_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.ISet);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_ISet() const {
        return be16toh_custom(raw.ISet);
    }

    uint16_t get_raw_EN50530() const {
        return be16toh_custom(raw.EN50530);
    }

    float get_Vmpp() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.Vmpp);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_Vmpp() const {
        return be16toh_custom(raw.Vmpp);
    }

    float get_Pmpp() const {
        int16_t sf_val = be16toh_custom_s(raw.W_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.Pmpp);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_Pmpp() const {
        return be16toh_custom(raw.Pmpp);
    }

    float get_GSet() const {
        int16_t sf_val = be16toh_custom_s(raw.G_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.GSet);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_GSet() const {
        return be16toh_custom(raw.GSet);
    }

    float get_VSlewRate() const {
        int16_t sf_val = be16toh_custom_s(raw.VSlew_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.VSlewRate);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_VSlewRate() const {
        return be16toh_custom(raw.VSlewRate);
    }

    float get_PSlewRate() const {
        int16_t sf_val = be16toh_custom_s(raw.PSlew_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.PSlewRate);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_PSlewRate() const {
        return be16toh_custom(raw.PSlewRate);
    }

    float get_ISlewRate() const {
        int16_t sf_val = be16toh_custom_s(raw.ISlew_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.ISlewRate);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_ISlewRate() const {
        return be16toh_custom(raw.ISlewRate);
    }

    uint16_t get_raw_EnaProf() const {
        return be16toh_custom(raw.EnaProf);
    }

    uint16_t get_raw_AdptProfReq() const {
        return be16toh_custom(raw.AdptProfReq);
    }

    uint16_t get_raw_AdptProfRslt() const {
        return be16toh_custom(raw.AdptProfRslt);
    }

    uint16_t get_raw_NPt() const {
        return be16toh_custom(raw.NPt);
    }

    uint16_t get_raw_NProf() const {
        return be16toh_custom(raw.NProf);
    }

    int16_t get_raw_W_SF() const {
        return be16toh_custom_s(raw.W_SF);
    }

    int16_t get_raw_V_SF() const {
        return be16toh_custom_s(raw.V_SF);
    }

    int16_t get_raw_A_SF() const {
        return be16toh_custom_s(raw.A_SF);
    }

    int16_t get_raw_G_SF() const {
        return be16toh_custom_s(raw.G_SF);
    }

    int16_t get_raw_Tms_SF() const {
        return be16toh_custom_s(raw.Tms_SF);
    }

    int16_t get_raw_VSlew_SF() const {
        return be16toh_custom_s(raw.VSlew_SF);
    }

    int16_t get_raw_PSlew_SF() const {
        return be16toh_custom_s(raw.PSlew_SF);
    }

    int16_t get_raw_ISlew_SF() const {
        return be16toh_custom_s(raw.ISlew_SF);
    }

    int16_t get_raw_Pct_SF() const {
        return be16toh_custom_s(raw.Pct_SF);
    }

    // Accessor for repeating group: Prof
    static const Model64410_Prof_Raw* get_Prof(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model64410_Prof_Raw*>(base_buffer + offset_bytes + index * sizeof(Model64410_Prof_Raw));
    }

    // Accessor for repeating group: Prof_Pt
    static const Model64410_Prof_Pt_Raw* get_Prof_Pt(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model64410_Prof_Pt_Raw*>(base_buffer + offset_bytes + index * sizeof(Model64410_Prof_Pt_Raw));
    }

};
