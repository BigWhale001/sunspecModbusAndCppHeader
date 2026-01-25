// Generated C++ Header for Model 121
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model121_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t WMax;
    uint16_t VRef;
    int16_t VRefOfs;
    uint16_t VMax;
    uint16_t VMin;
    uint16_t VAMax;
    int16_t VArMaxQ1;
    int16_t VArMaxQ2;
    int16_t VArMaxQ3;
    int16_t VArMaxQ4;
    uint16_t WGra;
    int16_t PFMinQ1;
    int16_t PFMinQ2;
    int16_t PFMinQ3;
    int16_t PFMinQ4;
    uint16_t VArAct;
    uint16_t ClcTotVA;
    uint16_t MaxRmpRte;
    uint16_t ECPNomHz;
    uint16_t ConnPh;
    int16_t WMax_SF;
    int16_t VRef_SF;
    int16_t VRefOfs_SF;
    int16_t VMinMax_SF;
    int16_t VAMax_SF;
    int16_t VArMax_SF;
    int16_t WGra_SF;
    int16_t PFMin_SF;
    int16_t MaxRmpRte_SF;
    int16_t ECPNomHz_SF;
};
#pragma pack(pop)

class Model121 : public SunSpecModelBase {
public:
    Model121_Raw raw;

    uint16_t get_id() const override { return 121; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model121_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    float get_WMax() const {
        int16_t sf_val = be16toh_custom_s(raw.WMax_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.WMax);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_WMax() const {
        return be16toh_custom(raw.WMax);
    }

    float get_VRef() const {
        int16_t sf_val = be16toh_custom_s(raw.VRef_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.VRef);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_VRef() const {
        return be16toh_custom(raw.VRef);
    }

    float get_VRefOfs() const {
        int16_t sf_val = be16toh_custom_s(raw.VRefOfs_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.VRefOfs);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_VRefOfs() const {
        return be16toh_custom_s(raw.VRefOfs);
    }

    float get_VMax() const {
        int16_t sf_val = be16toh_custom_s(raw.VMinMax_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.VMax);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_VMax() const {
        return be16toh_custom(raw.VMax);
    }

    float get_VMin() const {
        int16_t sf_val = be16toh_custom_s(raw.VMinMax_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.VMin);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_VMin() const {
        return be16toh_custom(raw.VMin);
    }

    float get_VAMax() const {
        int16_t sf_val = be16toh_custom_s(raw.VAMax_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.VAMax);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_VAMax() const {
        return be16toh_custom(raw.VAMax);
    }

    float get_VArMaxQ1() const {
        int16_t sf_val = be16toh_custom_s(raw.VArMax_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.VArMaxQ1);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_VArMaxQ1() const {
        return be16toh_custom_s(raw.VArMaxQ1);
    }

    float get_VArMaxQ2() const {
        int16_t sf_val = be16toh_custom_s(raw.VArMax_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.VArMaxQ2);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_VArMaxQ2() const {
        return be16toh_custom_s(raw.VArMaxQ2);
    }

    float get_VArMaxQ3() const {
        int16_t sf_val = be16toh_custom_s(raw.VArMax_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.VArMaxQ3);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_VArMaxQ3() const {
        return be16toh_custom_s(raw.VArMaxQ3);
    }

    float get_VArMaxQ4() const {
        int16_t sf_val = be16toh_custom_s(raw.VArMax_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.VArMaxQ4);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_VArMaxQ4() const {
        return be16toh_custom_s(raw.VArMaxQ4);
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

    float get_PFMinQ1() const {
        int16_t sf_val = be16toh_custom_s(raw.PFMin_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.PFMinQ1);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_PFMinQ1() const {
        return be16toh_custom_s(raw.PFMinQ1);
    }

    float get_PFMinQ2() const {
        int16_t sf_val = be16toh_custom_s(raw.PFMin_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.PFMinQ2);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_PFMinQ2() const {
        return be16toh_custom_s(raw.PFMinQ2);
    }

    float get_PFMinQ3() const {
        int16_t sf_val = be16toh_custom_s(raw.PFMin_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.PFMinQ3);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_PFMinQ3() const {
        return be16toh_custom_s(raw.PFMinQ3);
    }

    float get_PFMinQ4() const {
        int16_t sf_val = be16toh_custom_s(raw.PFMin_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.PFMinQ4);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_PFMinQ4() const {
        return be16toh_custom_s(raw.PFMinQ4);
    }

    uint16_t get_raw_VArAct() const {
        return be16toh_custom_s(raw.VArAct);
    }

    uint16_t get_raw_ClcTotVA() const {
        return be16toh_custom_s(raw.ClcTotVA);
    }

    float get_MaxRmpRte() const {
        int16_t sf_val = be16toh_custom_s(raw.MaxRmpRte_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.MaxRmpRte);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_MaxRmpRte() const {
        return be16toh_custom(raw.MaxRmpRte);
    }

    float get_ECPNomHz() const {
        int16_t sf_val = be16toh_custom_s(raw.ECPNomHz_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.ECPNomHz);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_ECPNomHz() const {
        return be16toh_custom(raw.ECPNomHz);
    }

    uint16_t get_raw_ConnPh() const {
        return be16toh_custom_s(raw.ConnPh);
    }

};
