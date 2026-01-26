// Generated C++ Header for Model 220
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model220_Raw {
    uint16_t ID;
    uint16_t L;
    int16_t A;
    int16_t A_SF;
    int16_t PhV;
    int16_t V_SF;
    int16_t Hz;
    int16_t Hz_SF;
    int16_t W;
    int16_t W_SF;
    int16_t VA;
    int16_t VA_SF;
    int16_t VAR;
    int16_t VAR_SF;
    int16_t PF;
    int16_t PF_SF;
    uint32_t TotWhExp;
    uint32_t TotWhImp;
    int16_t TotWh_SF;
    uint32_t TotVAhExp;
    uint32_t TotVAhImp;
    int16_t TotVAh_SF;
    uint32_t TotVArhImpQ1;
    uint32_t TotVArhImpQ2;
    uint32_t TotVArhExpQ3;
    uint32_t TotVArhExpQ4;
    int16_t TotVArh_SF;
    uint32_t Evt;
    uint16_t pad_37;
    uint32_t Ts;
    uint16_t Ms;
    uint16_t Seq;
    uint16_t Alg;
    uint16_t N;
};
#pragma pack(pop)

// Repeating group: repeating
#pragma pack(push, 1)
struct Model220_repeating_Raw {
    uint16_t DS;
};
#pragma pack(pop)

class Model220 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 220;
    Model220_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model220_Raw));
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

    uint16_t get_raw_Ms() const {
        return be16toh_custom(raw.Ms);
    }

    uint16_t get_raw_Seq() const {
        return be16toh_custom(raw.Seq);
    }

    uint16_t get_raw_Alg() const {
        return be16toh_custom(raw.Alg);
    }

    uint16_t get_raw_N() const {
        return be16toh_custom(raw.N);
    }

    // Accessor for repeating group: repeating
    static const Model220_repeating_Raw* get_repeating(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model220_repeating_Raw*>(base_buffer + offset_bytes + index * sizeof(Model220_repeating_Raw));
    }

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
        std::cout << "    A: " << be16toh_custom_s(raw.A) << std::endl;
        std::cout << "    A_SF: " << be16toh_custom_s(raw.A_SF) << std::endl;
        std::cout << "    PhV: " << be16toh_custom_s(raw.PhV) << std::endl;
        std::cout << "    V_SF: " << be16toh_custom_s(raw.V_SF) << std::endl;
        std::cout << "    Hz: " << be16toh_custom_s(raw.Hz) << std::endl;
        std::cout << "    Hz_SF: " << be16toh_custom_s(raw.Hz_SF) << std::endl;
        std::cout << "    W: " << be16toh_custom_s(raw.W) << std::endl;
        std::cout << "    W_SF: " << be16toh_custom_s(raw.W_SF) << std::endl;
        std::cout << "    VA: " << be16toh_custom_s(raw.VA) << std::endl;
        std::cout << "    VA_SF: " << be16toh_custom_s(raw.VA_SF) << std::endl;
        std::cout << "    VAR: " << be16toh_custom_s(raw.VAR) << std::endl;
        std::cout << "    VAR_SF: " << be16toh_custom_s(raw.VAR_SF) << std::endl;
        std::cout << "    PF: " << be16toh_custom_s(raw.PF) << std::endl;
        std::cout << "    PF_SF: " << be16toh_custom_s(raw.PF_SF) << std::endl;
        std::cout << "    TotWhExp: " << be32toh_custom(raw.TotWhExp) << std::endl;
        std::cout << "    TotWhImp: " << be32toh_custom(raw.TotWhImp) << std::endl;
        std::cout << "    TotWh_SF: " << be16toh_custom_s(raw.TotWh_SF) << std::endl;
        std::cout << "    TotVAhExp: " << be32toh_custom(raw.TotVAhExp) << std::endl;
        std::cout << "    TotVAhImp: " << be32toh_custom(raw.TotVAhImp) << std::endl;
        std::cout << "    TotVAh_SF: " << be16toh_custom_s(raw.TotVAh_SF) << std::endl;
        std::cout << "    TotVArhImpQ1: " << be32toh_custom(raw.TotVArhImpQ1) << std::endl;
        std::cout << "    TotVArhImpQ2: " << be32toh_custom(raw.TotVArhImpQ2) << std::endl;
        std::cout << "    TotVArhExpQ3: " << be32toh_custom(raw.TotVArhExpQ3) << std::endl;
        std::cout << "    TotVArhExpQ4: " << be32toh_custom(raw.TotVArhExpQ4) << std::endl;
        std::cout << "    TotVArh_SF: " << be16toh_custom_s(raw.TotVArh_SF) << std::endl;
        std::cout << "    Evt: " << be32toh_custom(raw.Evt) << std::endl;
        std::cout << "    Ts: " << be32toh_custom(raw.Ts) << std::endl;
        std::cout << "    Ms: " << be16toh_custom(raw.Ms) << std::endl;
        std::cout << "    Seq: " << be16toh_custom(raw.Seq) << std::endl;
        std::cout << "    Alg: " << be16toh_custom(raw.Alg) << std::endl;
        std::cout << "    N: " << be16toh_custom(raw.N) << std::endl;
    }

};
