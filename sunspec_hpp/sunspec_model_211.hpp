// Generated C++ Header for Model 211
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model211_Raw {
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

class Model211 : public SunSpecModelBase {
public:
    Model211_Raw raw;

    uint16_t get_id() const override { return 211; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model211_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

};
