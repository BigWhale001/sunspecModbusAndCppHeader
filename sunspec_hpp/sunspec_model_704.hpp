// Generated C++ Header for Model 704
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
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
    uint16_t PFWInj_PF;
    uint16_t PFWInj_Ext;
    uint16_t PFWInjRvrt_PF;
    uint16_t PFWInjRvrt_Ext;
    uint16_t PFWAbs_PF;
    uint16_t PFWAbs_Ext;
    uint16_t PFWAbsRvrt_PF;
    uint16_t PFWAbsRvrt_Ext;
};
#pragma pack(pop)

class Model704 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 704;
    Model704_Raw raw;

    uint16_t get_id() const override { return ID; }

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

    float get_PFWInj_PF() const {
        int16_t sf_val = be16toh_custom_s(raw.PF_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.PFWInj_PF);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_PFWInj_PF() const {
        return be16toh_custom(raw.PFWInj_PF);
    }

    uint16_t get_raw_PFWInj_Ext() const {
        return be16toh_custom(raw.PFWInj_Ext);
    }

    float get_PFWInjRvrt_PF() const {
        int16_t sf_val = be16toh_custom_s(raw.PF_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.PFWInjRvrt_PF);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_PFWInjRvrt_PF() const {
        return be16toh_custom(raw.PFWInjRvrt_PF);
    }

    uint16_t get_raw_PFWInjRvrt_Ext() const {
        return be16toh_custom(raw.PFWInjRvrt_Ext);
    }

    float get_PFWAbs_PF() const {
        int16_t sf_val = be16toh_custom_s(raw.PF_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.PFWAbs_PF);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_PFWAbs_PF() const {
        return be16toh_custom(raw.PFWAbs_PF);
    }

    uint16_t get_raw_PFWAbs_Ext() const {
        return be16toh_custom(raw.PFWAbs_Ext);
    }

    float get_PFWAbsRvrt_PF() const {
        int16_t sf_val = be16toh_custom_s(raw.PF_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.PFWAbsRvrt_PF);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_PFWAbsRvrt_PF() const {
        return be16toh_custom(raw.PFWAbsRvrt_PF);
    }

    uint16_t get_raw_PFWAbsRvrt_Ext() const {
        return be16toh_custom(raw.PFWAbsRvrt_Ext);
    }

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
            std::cout << "    PFWInjEna: " << be16toh_custom(raw.PFWInjEna) << std::endl;
            std::cout << "    PFWInjEnaRvrt: " << be16toh_custom(raw.PFWInjEnaRvrt) << std::endl;
            std::cout << "    PFWInjRvrtTms: " << be32toh_custom(raw.PFWInjRvrtTms) << std::endl;
            std::cout << "    PFWInjRvrtRem: " << be32toh_custom(raw.PFWInjRvrtRem) << std::endl;
            std::cout << "    PFWAbsEna: " << be16toh_custom(raw.PFWAbsEna) << std::endl;
            std::cout << "    PFWAbsEnaRvrt: " << be16toh_custom(raw.PFWAbsEnaRvrt) << std::endl;
            std::cout << "    PFWAbsRvrtTms: " << be32toh_custom(raw.PFWAbsRvrtTms) << std::endl;
            std::cout << "    PFWAbsRvrtRem: " << be32toh_custom(raw.PFWAbsRvrtRem) << std::endl;
            std::cout << "    WMaxLimPctEna: " << be16toh_custom(raw.WMaxLimPctEna) << std::endl;
            std::cout << "    WMaxLimPct: " << be16toh_custom(raw.WMaxLimPct) << std::endl;
            std::cout << "    WMaxLimPctRvrt: " << be16toh_custom(raw.WMaxLimPctRvrt) << std::endl;
            std::cout << "    WMaxLimPctEnaRvrt: " << be16toh_custom(raw.WMaxLimPctEnaRvrt) << std::endl;
            std::cout << "    WMaxLimPctRvrtTms: " << be32toh_custom(raw.WMaxLimPctRvrtTms) << std::endl;
            std::cout << "    WMaxLimPctRvrtRem: " << be32toh_custom(raw.WMaxLimPctRvrtRem) << std::endl;
            std::cout << "    WSetEna: " << be16toh_custom(raw.WSetEna) << std::endl;
            std::cout << "    WSetMod: " << be16toh_custom(raw.WSetMod) << std::endl;
            std::cout << "    WSet: " << be32toh_custom(raw.WSet) << std::endl;
            std::cout << "    WSetRvrt: " << be32toh_custom(raw.WSetRvrt) << std::endl;
            std::cout << "    WSetPct: " << be16toh_custom_s(raw.WSetPct) << std::endl;
            std::cout << "    WSetPctRvrt: " << be16toh_custom_s(raw.WSetPctRvrt) << std::endl;
            std::cout << "    WSetEnaRvrt: " << be16toh_custom(raw.WSetEnaRvrt) << std::endl;
            std::cout << "    WSetRvrtTms: " << be32toh_custom(raw.WSetRvrtTms) << std::endl;
            std::cout << "    WSetRvrtRem: " << be32toh_custom(raw.WSetRvrtRem) << std::endl;
            std::cout << "    VarSetEna: " << be16toh_custom(raw.VarSetEna) << std::endl;
            std::cout << "    VarSetMod: " << be16toh_custom(raw.VarSetMod) << std::endl;
            std::cout << "    VarSetPri: " << be16toh_custom(raw.VarSetPri) << std::endl;
            std::cout << "    VarSet: " << be32toh_custom(raw.VarSet) << std::endl;
            std::cout << "    VarSetRvrt: " << be32toh_custom(raw.VarSetRvrt) << std::endl;
            std::cout << "    VarSetPct: " << be16toh_custom_s(raw.VarSetPct) << std::endl;
            std::cout << "    VarSetPctRvrt: " << be16toh_custom_s(raw.VarSetPctRvrt) << std::endl;
            std::cout << "    VarSetEnaRvrt: " << be16toh_custom(raw.VarSetEnaRvrt) << std::endl;
            std::cout << "    VarSetRvrtTms: " << be32toh_custom(raw.VarSetRvrtTms) << std::endl;
            std::cout << "    VarSetRvrtRem: " << be32toh_custom(raw.VarSetRvrtRem) << std::endl;
            std::cout << "    WRmp: " << be16toh_custom(raw.WRmp) << std::endl;
            std::cout << "    WRmpRef: " << be16toh_custom(raw.WRmpRef) << std::endl;
            std::cout << "    VarRmp: " << be16toh_custom(raw.VarRmp) << std::endl;
            std::cout << "    AntiIslEna: " << be16toh_custom(raw.AntiIslEna) << std::endl;
            std::cout << "    PF_SF: " << be16toh_custom_s(raw.PF_SF) << std::endl;
            std::cout << "    WMaxLimPct_SF: " << be16toh_custom_s(raw.WMaxLimPct_SF) << std::endl;
            std::cout << "    WSet_SF: " << be16toh_custom_s(raw.WSet_SF) << std::endl;
            std::cout << "    WSetPct_SF: " << be16toh_custom_s(raw.WSetPct_SF) << std::endl;
            std::cout << "    VarSet_SF: " << be16toh_custom_s(raw.VarSet_SF) << std::endl;
            std::cout << "    VarSetPct_SF: " << be16toh_custom_s(raw.VarSetPct_SF) << std::endl;
            std::cout << "    PFWInj_PF: " << be16toh_custom(raw.PFWInj_PF) << std::endl;
            std::cout << "    PFWInj_Ext: " << be16toh_custom(raw.PFWInj_Ext) << std::endl;
            std::cout << "    PFWInjRvrt_PF: " << be16toh_custom(raw.PFWInjRvrt_PF) << std::endl;
            std::cout << "    PFWInjRvrt_Ext: " << be16toh_custom(raw.PFWInjRvrt_Ext) << std::endl;
            std::cout << "    PFWAbs_PF: " << be16toh_custom(raw.PFWAbs_PF) << std::endl;
            std::cout << "    PFWAbs_Ext: " << be16toh_custom(raw.PFWAbs_Ext) << std::endl;
            std::cout << "    PFWAbsRvrt_PF: " << be16toh_custom(raw.PFWAbsRvrt_PF) << std::endl;
            std::cout << "    PFWAbsRvrt_Ext: " << be16toh_custom(raw.PFWAbsRvrt_Ext) << std::endl;
        const uint8_t* cur_ptr = base_addr + sizeof(Model704_Raw);
    }

};
