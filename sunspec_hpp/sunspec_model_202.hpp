// Generated C++ Header for Model 202
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model202_Raw {
    uint16_t ID;
    uint16_t L;
    int16_t A;
    int16_t AphA;
    int16_t AphB;
    int16_t AphC;
    int16_t A_SF;
    int16_t PhV;
    int16_t PhVphA;
    int16_t PhVphB;
    int16_t PhVphC;
    int16_t PPV;
    int16_t PhVphAB;
    int16_t PhVphBC;
    int16_t PhVphCA;
    int16_t V_SF;
    int16_t Hz;
    int16_t Hz_SF;
    int16_t W;
    int16_t WphA;
    int16_t WphB;
    int16_t WphC;
    int16_t W_SF;
    int16_t VA;
    int16_t VAphA;
    int16_t VAphB;
    int16_t VAphC;
    int16_t VA_SF;
    int16_t VAR;
    int16_t VARphA;
    int16_t VARphB;
    int16_t VARphC;
    int16_t VAR_SF;
    int16_t PF;
    int16_t PFphA;
    int16_t PFphB;
    int16_t PFphC;
    int16_t PF_SF;
    uint32_t TotWhExp;
    uint32_t TotWhExpPhA;
    uint32_t TotWhExpPhB;
    uint32_t TotWhExpPhC;
    uint32_t TotWhImp;
    uint32_t TotWhImpPhA;
    uint32_t TotWhImpPhB;
    uint32_t TotWhImpPhC;
    int16_t TotWh_SF;
    uint32_t TotVAhExp;
    uint32_t TotVAhExpPhA;
    uint32_t TotVAhExpPhB;
    uint32_t TotVAhExpPhC;
    uint32_t TotVAhImp;
    uint32_t TotVAhImpPhA;
    uint32_t TotVAhImpPhB;
    uint32_t TotVAhImpPhC;
    int16_t TotVAh_SF;
    uint32_t TotVArhImpQ1;
    uint32_t TotVArhImpQ1PhA;
    uint32_t TotVArhImpQ1PhB;
    uint32_t TotVArhImpQ1PhC;
    uint32_t TotVArhImpQ2;
    uint32_t TotVArhImpQ2PhA;
    uint32_t TotVArhImpQ2PhB;
    uint32_t TotVArhImpQ2PhC;
    uint32_t TotVArhExpQ3;
    uint32_t TotVArhExpQ3PhA;
    uint32_t TotVArhExpQ3PhB;
    uint32_t TotVArhExpQ3PhC;
    uint32_t TotVArhExpQ4;
    uint32_t TotVArhExpQ4PhA;
    uint32_t TotVArhExpQ4PhB;
    uint32_t TotVArhExpQ4PhC;
    int16_t TotVArh_SF;
    uint32_t Evt;
};
#pragma pack(pop)

class Model202 : public SunSpecModelBase {
public:
    Model202_Raw raw;

    uint16_t get_id() const override { return 202; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model202_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    float get_A() const {
        int16_t sf_val = be16toh_custom_s(raw.A_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.A);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_A() const {
        return be16toh_custom_s(raw.A);
    }

    float get_AphA() const {
        int16_t sf_val = be16toh_custom_s(raw.A_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.AphA);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_AphA() const {
        return be16toh_custom_s(raw.AphA);
    }

    float get_AphB() const {
        int16_t sf_val = be16toh_custom_s(raw.A_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.AphB);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_AphB() const {
        return be16toh_custom_s(raw.AphB);
    }

    float get_AphC() const {
        int16_t sf_val = be16toh_custom_s(raw.A_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.AphC);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_AphC() const {
        return be16toh_custom_s(raw.AphC);
    }

    float get_PhV() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.PhV);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_PhV() const {
        return be16toh_custom_s(raw.PhV);
    }

    float get_PhVphA() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.PhVphA);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_PhVphA() const {
        return be16toh_custom_s(raw.PhVphA);
    }

    float get_PhVphB() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.PhVphB);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_PhVphB() const {
        return be16toh_custom_s(raw.PhVphB);
    }

    float get_PhVphC() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.PhVphC);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_PhVphC() const {
        return be16toh_custom_s(raw.PhVphC);
    }

    float get_PPV() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.PPV);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_PPV() const {
        return be16toh_custom_s(raw.PPV);
    }

    float get_PhVphAB() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.PhVphAB);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_PhVphAB() const {
        return be16toh_custom_s(raw.PhVphAB);
    }

    float get_PhVphBC() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.PhVphBC);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_PhVphBC() const {
        return be16toh_custom_s(raw.PhVphBC);
    }

    float get_PhVphCA() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.PhVphCA);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_PhVphCA() const {
        return be16toh_custom_s(raw.PhVphCA);
    }

    float get_Hz() const {
        int16_t sf_val = be16toh_custom_s(raw.Hz_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.Hz);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_Hz() const {
        return be16toh_custom_s(raw.Hz);
    }

    float get_W() const {
        int16_t sf_val = be16toh_custom_s(raw.W_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.W);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_W() const {
        return be16toh_custom_s(raw.W);
    }

    float get_WphA() const {
        int16_t sf_val = be16toh_custom_s(raw.W_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.WphA);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_WphA() const {
        return be16toh_custom_s(raw.WphA);
    }

    float get_WphB() const {
        int16_t sf_val = be16toh_custom_s(raw.W_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.WphB);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_WphB() const {
        return be16toh_custom_s(raw.WphB);
    }

    float get_WphC() const {
        int16_t sf_val = be16toh_custom_s(raw.W_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.WphC);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_WphC() const {
        return be16toh_custom_s(raw.WphC);
    }

    float get_VA() const {
        int16_t sf_val = be16toh_custom_s(raw.VA_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.VA);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_VA() const {
        return be16toh_custom_s(raw.VA);
    }

    float get_VAphA() const {
        int16_t sf_val = be16toh_custom_s(raw.VA_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.VAphA);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_VAphA() const {
        return be16toh_custom_s(raw.VAphA);
    }

    float get_VAphB() const {
        int16_t sf_val = be16toh_custom_s(raw.VA_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.VAphB);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_VAphB() const {
        return be16toh_custom_s(raw.VAphB);
    }

    float get_VAphC() const {
        int16_t sf_val = be16toh_custom_s(raw.VA_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.VAphC);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_VAphC() const {
        return be16toh_custom_s(raw.VAphC);
    }

    float get_VAR() const {
        int16_t sf_val = be16toh_custom_s(raw.VAR_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.VAR);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_VAR() const {
        return be16toh_custom_s(raw.VAR);
    }

    float get_VARphA() const {
        int16_t sf_val = be16toh_custom_s(raw.VAR_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.VARphA);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_VARphA() const {
        return be16toh_custom_s(raw.VARphA);
    }

    float get_VARphB() const {
        int16_t sf_val = be16toh_custom_s(raw.VAR_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.VARphB);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_VARphB() const {
        return be16toh_custom_s(raw.VARphB);
    }

    float get_VARphC() const {
        int16_t sf_val = be16toh_custom_s(raw.VAR_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.VARphC);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_VARphC() const {
        return be16toh_custom_s(raw.VARphC);
    }

    float get_PF() const {
        int16_t sf_val = be16toh_custom_s(raw.PF_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.PF);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_PF() const {
        return be16toh_custom_s(raw.PF);
    }

    float get_PFphA() const {
        int16_t sf_val = be16toh_custom_s(raw.PF_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.PFphA);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_PFphA() const {
        return be16toh_custom_s(raw.PFphA);
    }

    float get_PFphB() const {
        int16_t sf_val = be16toh_custom_s(raw.PF_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.PFphB);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_PFphB() const {
        return be16toh_custom_s(raw.PFphB);
    }

    float get_PFphC() const {
        int16_t sf_val = be16toh_custom_s(raw.PF_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.PFphC);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_PFphC() const {
        return be16toh_custom_s(raw.PFphC);
    }

};
