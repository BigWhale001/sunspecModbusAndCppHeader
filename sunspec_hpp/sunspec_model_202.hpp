// Generated C++ Header for Model 202
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
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
    static constexpr uint16_t ID = 202;
    Model202_Raw raw;

    uint16_t get_id() const override { return ID; }

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

    int16_t get_raw_A_SF() const {
        return be16toh_custom_s(raw.A_SF);
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

    int16_t get_raw_V_SF() const {
        return be16toh_custom_s(raw.V_SF);
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

    int16_t get_raw_Hz_SF() const {
        return be16toh_custom_s(raw.Hz_SF);
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

    int16_t get_raw_W_SF() const {
        return be16toh_custom_s(raw.W_SF);
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

    int16_t get_raw_VA_SF() const {
        return be16toh_custom_s(raw.VA_SF);
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

    int16_t get_raw_VAR_SF() const {
        return be16toh_custom_s(raw.VAR_SF);
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

    int16_t get_raw_PF_SF() const {
        return be16toh_custom_s(raw.PF_SF);
    }

    int16_t get_raw_TotWh_SF() const {
        return be16toh_custom_s(raw.TotWh_SF);
    }

    int16_t get_raw_TotVAh_SF() const {
        return be16toh_custom_s(raw.TotVAh_SF);
    }

    int16_t get_raw_TotVArh_SF() const {
        return be16toh_custom_s(raw.TotVArh_SF);
    }

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
        std::cout << "    A: " << be16toh_custom_s(raw.A) << std::endl;
        std::cout << "    AphA: " << be16toh_custom_s(raw.AphA) << std::endl;
        std::cout << "    AphB: " << be16toh_custom_s(raw.AphB) << std::endl;
        std::cout << "    AphC: " << be16toh_custom_s(raw.AphC) << std::endl;
        std::cout << "    A_SF: " << be16toh_custom_s(raw.A_SF) << std::endl;
        std::cout << "    PhV: " << be16toh_custom_s(raw.PhV) << std::endl;
        std::cout << "    PhVphA: " << be16toh_custom_s(raw.PhVphA) << std::endl;
        std::cout << "    PhVphB: " << be16toh_custom_s(raw.PhVphB) << std::endl;
        std::cout << "    PhVphC: " << be16toh_custom_s(raw.PhVphC) << std::endl;
        std::cout << "    PPV: " << be16toh_custom_s(raw.PPV) << std::endl;
        std::cout << "    PhVphAB: " << be16toh_custom_s(raw.PhVphAB) << std::endl;
        std::cout << "    PhVphBC: " << be16toh_custom_s(raw.PhVphBC) << std::endl;
        std::cout << "    PhVphCA: " << be16toh_custom_s(raw.PhVphCA) << std::endl;
        std::cout << "    V_SF: " << be16toh_custom_s(raw.V_SF) << std::endl;
        std::cout << "    Hz: " << be16toh_custom_s(raw.Hz) << std::endl;
        std::cout << "    Hz_SF: " << be16toh_custom_s(raw.Hz_SF) << std::endl;
        std::cout << "    W: " << be16toh_custom_s(raw.W) << std::endl;
        std::cout << "    WphA: " << be16toh_custom_s(raw.WphA) << std::endl;
        std::cout << "    WphB: " << be16toh_custom_s(raw.WphB) << std::endl;
        std::cout << "    WphC: " << be16toh_custom_s(raw.WphC) << std::endl;
        std::cout << "    W_SF: " << be16toh_custom_s(raw.W_SF) << std::endl;
        std::cout << "    VA: " << be16toh_custom_s(raw.VA) << std::endl;
        std::cout << "    VAphA: " << be16toh_custom_s(raw.VAphA) << std::endl;
        std::cout << "    VAphB: " << be16toh_custom_s(raw.VAphB) << std::endl;
        std::cout << "    VAphC: " << be16toh_custom_s(raw.VAphC) << std::endl;
        std::cout << "    VA_SF: " << be16toh_custom_s(raw.VA_SF) << std::endl;
        std::cout << "    VAR: " << be16toh_custom_s(raw.VAR) << std::endl;
        std::cout << "    VARphA: " << be16toh_custom_s(raw.VARphA) << std::endl;
        std::cout << "    VARphB: " << be16toh_custom_s(raw.VARphB) << std::endl;
        std::cout << "    VARphC: " << be16toh_custom_s(raw.VARphC) << std::endl;
        std::cout << "    VAR_SF: " << be16toh_custom_s(raw.VAR_SF) << std::endl;
        std::cout << "    PF: " << be16toh_custom_s(raw.PF) << std::endl;
        std::cout << "    PFphA: " << be16toh_custom_s(raw.PFphA) << std::endl;
        std::cout << "    PFphB: " << be16toh_custom_s(raw.PFphB) << std::endl;
        std::cout << "    PFphC: " << be16toh_custom_s(raw.PFphC) << std::endl;
        std::cout << "    PF_SF: " << be16toh_custom_s(raw.PF_SF) << std::endl;
        std::cout << "    TotWhExp: " << be32toh_custom(raw.TotWhExp) << std::endl;
        std::cout << "    TotWhExpPhA: " << be32toh_custom(raw.TotWhExpPhA) << std::endl;
        std::cout << "    TotWhExpPhB: " << be32toh_custom(raw.TotWhExpPhB) << std::endl;
        std::cout << "    TotWhExpPhC: " << be32toh_custom(raw.TotWhExpPhC) << std::endl;
        std::cout << "    TotWhImp: " << be32toh_custom(raw.TotWhImp) << std::endl;
        std::cout << "    TotWhImpPhA: " << be32toh_custom(raw.TotWhImpPhA) << std::endl;
        std::cout << "    TotWhImpPhB: " << be32toh_custom(raw.TotWhImpPhB) << std::endl;
        std::cout << "    TotWhImpPhC: " << be32toh_custom(raw.TotWhImpPhC) << std::endl;
        std::cout << "    TotWh_SF: " << be16toh_custom_s(raw.TotWh_SF) << std::endl;
        std::cout << "    TotVAhExp: " << be32toh_custom(raw.TotVAhExp) << std::endl;
        std::cout << "    TotVAhExpPhA: " << be32toh_custom(raw.TotVAhExpPhA) << std::endl;
        std::cout << "    TotVAhExpPhB: " << be32toh_custom(raw.TotVAhExpPhB) << std::endl;
        std::cout << "    TotVAhExpPhC: " << be32toh_custom(raw.TotVAhExpPhC) << std::endl;
        std::cout << "    TotVAhImp: " << be32toh_custom(raw.TotVAhImp) << std::endl;
        std::cout << "    TotVAhImpPhA: " << be32toh_custom(raw.TotVAhImpPhA) << std::endl;
        std::cout << "    TotVAhImpPhB: " << be32toh_custom(raw.TotVAhImpPhB) << std::endl;
        std::cout << "    TotVAhImpPhC: " << be32toh_custom(raw.TotVAhImpPhC) << std::endl;
        std::cout << "    TotVAh_SF: " << be16toh_custom_s(raw.TotVAh_SF) << std::endl;
        std::cout << "    TotVArhImpQ1: " << be32toh_custom(raw.TotVArhImpQ1) << std::endl;
        std::cout << "    TotVArhImpQ1PhA: " << be32toh_custom(raw.TotVArhImpQ1PhA) << std::endl;
        std::cout << "    TotVArhImpQ1PhB: " << be32toh_custom(raw.TotVArhImpQ1PhB) << std::endl;
        std::cout << "    TotVArhImpQ1PhC: " << be32toh_custom(raw.TotVArhImpQ1PhC) << std::endl;
        std::cout << "    TotVArhImpQ2: " << be32toh_custom(raw.TotVArhImpQ2) << std::endl;
        std::cout << "    TotVArhImpQ2PhA: " << be32toh_custom(raw.TotVArhImpQ2PhA) << std::endl;
        std::cout << "    TotVArhImpQ2PhB: " << be32toh_custom(raw.TotVArhImpQ2PhB) << std::endl;
        std::cout << "    TotVArhImpQ2PhC: " << be32toh_custom(raw.TotVArhImpQ2PhC) << std::endl;
        std::cout << "    TotVArhExpQ3: " << be32toh_custom(raw.TotVArhExpQ3) << std::endl;
        std::cout << "    TotVArhExpQ3PhA: " << be32toh_custom(raw.TotVArhExpQ3PhA) << std::endl;
        std::cout << "    TotVArhExpQ3PhB: " << be32toh_custom(raw.TotVArhExpQ3PhB) << std::endl;
        std::cout << "    TotVArhExpQ3PhC: " << be32toh_custom(raw.TotVArhExpQ3PhC) << std::endl;
        std::cout << "    TotVArhExpQ4: " << be32toh_custom(raw.TotVArhExpQ4) << std::endl;
        std::cout << "    TotVArhExpQ4PhA: " << be32toh_custom(raw.TotVArhExpQ4PhA) << std::endl;
        std::cout << "    TotVArhExpQ4PhB: " << be32toh_custom(raw.TotVArhExpQ4PhB) << std::endl;
        std::cout << "    TotVArhExpQ4PhC: " << be32toh_custom(raw.TotVArhExpQ4PhC) << std::endl;
        std::cout << "    TotVArh_SF: " << be16toh_custom_s(raw.TotVArh_SF) << std::endl;
        std::cout << "    Evt: " << be32toh_custom(raw.Evt) << std::endl;
    }

};
