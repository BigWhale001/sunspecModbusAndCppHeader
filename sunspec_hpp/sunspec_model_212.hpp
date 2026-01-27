// Generated C++ Header for Model 212
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model212_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t A;
    uint16_t AphA;
    uint16_t AphB;
    uint16_t AphC;
    uint16_t PhV;
    uint16_t PhVphA;
    uint16_t PhVphB;
    uint16_t PhVphC;
    uint16_t PPV;
    uint16_t PPVphAB;
    uint16_t PPVphBC;
    uint16_t PPVphCA;
    uint16_t Hz;
    uint16_t W;
    uint16_t WphA;
    uint16_t WphB;
    uint16_t WphC;
    uint16_t VA;
    uint16_t VAphA;
    uint16_t VAphB;
    uint16_t VAphC;
    uint16_t VAR;
    uint16_t VARphA;
    uint16_t VARphB;
    uint16_t VARphC;
    uint16_t PF;
    uint16_t PFphA;
    uint16_t PFphB;
    uint16_t PFphC;
    uint16_t TotWhExp;
    uint16_t TotWhExpPhA;
    uint16_t TotWhExpPhB;
    uint16_t TotWhExpPhC;
    uint16_t TotWhImp;
    uint16_t TotWhImpPhA;
    uint16_t TotWhImpPhB;
    uint16_t TotWhImpPhC;
    uint16_t TotVAhExp;
    uint16_t TotVAhExpPhA;
    uint16_t TotVAhExpPhB;
    uint16_t TotVAhExpPhC;
    uint16_t TotVAhImp;
    uint16_t TotVAhImpPhA;
    uint16_t TotVAhImpPhB;
    uint16_t TotVAhImpPhC;
    uint16_t TotVArhImpQ1;
    uint16_t TotVArhImpQ1phA;
    uint16_t TotVArhImpQ1phB;
    uint16_t TotVArhImpQ1phC;
    uint16_t TotVArhImpQ2;
    uint16_t TotVArhImpQ2phA;
    uint16_t TotVArhImpQ2phB;
    uint16_t TotVArhImpQ2phC;
    uint16_t TotVArhExpQ3;
    uint16_t TotVArhExpQ3phA;
    uint16_t TotVArhExpQ3phB;
    uint16_t TotVArhExpQ3phC;
    uint16_t TotVArhExpQ4;
    uint16_t TotVArhExpQ4phA;
    uint16_t TotVArhExpQ4phB;
    uint16_t TotVArhExpQ4phC;
    uint32_t Evt;
};
#pragma pack(pop)

class Model212 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 212;
    Model212_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model212_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
            std::cout << "    A: " << be32toh_custom(raw.A) << std::endl;
            std::cout << "    AphA: " << be32toh_custom(raw.AphA) << std::endl;
            std::cout << "    AphB: " << be32toh_custom(raw.AphB) << std::endl;
            std::cout << "    AphC: " << be32toh_custom(raw.AphC) << std::endl;
            std::cout << "    PhV: " << be32toh_custom(raw.PhV) << std::endl;
            std::cout << "    PhVphA: " << be32toh_custom(raw.PhVphA) << std::endl;
            std::cout << "    PhVphB: " << be32toh_custom(raw.PhVphB) << std::endl;
            std::cout << "    PhVphC: " << be32toh_custom(raw.PhVphC) << std::endl;
            std::cout << "    PPV: " << be32toh_custom(raw.PPV) << std::endl;
            std::cout << "    PPVphAB: " << be32toh_custom(raw.PPVphAB) << std::endl;
            std::cout << "    PPVphBC: " << be32toh_custom(raw.PPVphBC) << std::endl;
            std::cout << "    PPVphCA: " << be32toh_custom(raw.PPVphCA) << std::endl;
            std::cout << "    Hz: " << be32toh_custom(raw.Hz) << std::endl;
            std::cout << "    W: " << be32toh_custom(raw.W) << std::endl;
            std::cout << "    WphA: " << be32toh_custom(raw.WphA) << std::endl;
            std::cout << "    WphB: " << be32toh_custom(raw.WphB) << std::endl;
            std::cout << "    WphC: " << be32toh_custom(raw.WphC) << std::endl;
            std::cout << "    VA: " << be32toh_custom(raw.VA) << std::endl;
            std::cout << "    VAphA: " << be32toh_custom(raw.VAphA) << std::endl;
            std::cout << "    VAphB: " << be32toh_custom(raw.VAphB) << std::endl;
            std::cout << "    VAphC: " << be32toh_custom(raw.VAphC) << std::endl;
            std::cout << "    VAR: " << be32toh_custom(raw.VAR) << std::endl;
            std::cout << "    VARphA: " << be32toh_custom(raw.VARphA) << std::endl;
            std::cout << "    VARphB: " << be32toh_custom(raw.VARphB) << std::endl;
            std::cout << "    VARphC: " << be32toh_custom(raw.VARphC) << std::endl;
            std::cout << "    PF: " << be32toh_custom(raw.PF) << std::endl;
            std::cout << "    PFphA: " << be32toh_custom(raw.PFphA) << std::endl;
            std::cout << "    PFphB: " << be32toh_custom(raw.PFphB) << std::endl;
            std::cout << "    PFphC: " << be32toh_custom(raw.PFphC) << std::endl;
            std::cout << "    TotWhExp: " << be32toh_custom(raw.TotWhExp) << std::endl;
            std::cout << "    TotWhExpPhA: " << be32toh_custom(raw.TotWhExpPhA) << std::endl;
            std::cout << "    TotWhExpPhB: " << be32toh_custom(raw.TotWhExpPhB) << std::endl;
            std::cout << "    TotWhExpPhC: " << be32toh_custom(raw.TotWhExpPhC) << std::endl;
            std::cout << "    TotWhImp: " << be32toh_custom(raw.TotWhImp) << std::endl;
            std::cout << "    TotWhImpPhA: " << be32toh_custom(raw.TotWhImpPhA) << std::endl;
            std::cout << "    TotWhImpPhB: " << be32toh_custom(raw.TotWhImpPhB) << std::endl;
            std::cout << "    TotWhImpPhC: " << be32toh_custom(raw.TotWhImpPhC) << std::endl;
            std::cout << "    TotVAhExp: " << be32toh_custom(raw.TotVAhExp) << std::endl;
            std::cout << "    TotVAhExpPhA: " << be32toh_custom(raw.TotVAhExpPhA) << std::endl;
            std::cout << "    TotVAhExpPhB: " << be32toh_custom(raw.TotVAhExpPhB) << std::endl;
            std::cout << "    TotVAhExpPhC: " << be32toh_custom(raw.TotVAhExpPhC) << std::endl;
            std::cout << "    TotVAhImp: " << be32toh_custom(raw.TotVAhImp) << std::endl;
            std::cout << "    TotVAhImpPhA: " << be32toh_custom(raw.TotVAhImpPhA) << std::endl;
            std::cout << "    TotVAhImpPhB: " << be32toh_custom(raw.TotVAhImpPhB) << std::endl;
            std::cout << "    TotVAhImpPhC: " << be32toh_custom(raw.TotVAhImpPhC) << std::endl;
            std::cout << "    TotVArhImpQ1: " << be32toh_custom(raw.TotVArhImpQ1) << std::endl;
            std::cout << "    TotVArhImpQ1phA: " << be32toh_custom(raw.TotVArhImpQ1phA) << std::endl;
            std::cout << "    TotVArhImpQ1phB: " << be32toh_custom(raw.TotVArhImpQ1phB) << std::endl;
            std::cout << "    TotVArhImpQ1phC: " << be32toh_custom(raw.TotVArhImpQ1phC) << std::endl;
            std::cout << "    TotVArhImpQ2: " << be32toh_custom(raw.TotVArhImpQ2) << std::endl;
            std::cout << "    TotVArhImpQ2phA: " << be32toh_custom(raw.TotVArhImpQ2phA) << std::endl;
            std::cout << "    TotVArhImpQ2phB: " << be32toh_custom(raw.TotVArhImpQ2phB) << std::endl;
            std::cout << "    TotVArhImpQ2phC: " << be32toh_custom(raw.TotVArhImpQ2phC) << std::endl;
            std::cout << "    TotVArhExpQ3: " << be32toh_custom(raw.TotVArhExpQ3) << std::endl;
            std::cout << "    TotVArhExpQ3phA: " << be32toh_custom(raw.TotVArhExpQ3phA) << std::endl;
            std::cout << "    TotVArhExpQ3phB: " << be32toh_custom(raw.TotVArhExpQ3phB) << std::endl;
            std::cout << "    TotVArhExpQ3phC: " << be32toh_custom(raw.TotVArhExpQ3phC) << std::endl;
            std::cout << "    TotVArhExpQ4: " << be32toh_custom(raw.TotVArhExpQ4) << std::endl;
            std::cout << "    TotVArhExpQ4phA: " << be32toh_custom(raw.TotVArhExpQ4phA) << std::endl;
            std::cout << "    TotVArhExpQ4phB: " << be32toh_custom(raw.TotVArhExpQ4phB) << std::endl;
            std::cout << "    TotVArhExpQ4phC: " << be32toh_custom(raw.TotVArhExpQ4phC) << std::endl;
            std::cout << "    Evt: " << be32toh_custom(raw.Evt) << std::endl;
        const uint8_t* cur_ptr = base_addr + sizeof(Model212_Raw);
    }

};
