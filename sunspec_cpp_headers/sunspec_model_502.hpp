// Generated C++ Header for Model 502
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model502_Raw {
    uint16_t ID;
    uint16_t L;
    int16_t A_SF;
    int16_t V_SF;
    int16_t W_SF;
    int16_t Wh_SF;
    uint16_t Stat;
    uint16_t StatVend;
    uint32_t Evt;
    uint32_t EvtVend;
    uint16_t Ctl;
    uint32_t CtlVend;
    int32_t CtlVal;
    uint32_t Tms;
    int16_t OutA;
    int16_t OutV;
    uint32_t OutWh;
    int16_t OutPw;
    int16_t Tmp;
    int16_t InA;
    int16_t InV;
    uint32_t InWh;
    int16_t InW;
};
#pragma pack(pop)

class Model502 : public SunSpecModelBase {
public:
    Model502_Raw raw;

    uint16_t get_id() const override { return 502; }

    void from_buffer(const uint8_t* buffer) override {
        std::memcpy(&raw, buffer, sizeof(Model502_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_Stat() const {
        return be16toh_custom_s(raw.Stat);
    }

    uint16_t get_raw_StatVend() const {
        return be16toh_custom_s(raw.StatVend);
    }

    uint16_t get_raw_Ctl() const {
        return be16toh_custom_s(raw.Ctl);
    }

    float get_OutA() const {
        int16_t sf_val = be16toh_custom_s(raw.A_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.OutA);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_OutA() const {
        return be16toh_custom_s(raw.OutA);
    }

    float get_OutV() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.OutV);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_OutV() const {
        return be16toh_custom_s(raw.OutV);
    }

    float get_OutPw() const {
        int16_t sf_val = be16toh_custom_s(raw.W_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.OutPw);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_OutPw() const {
        return be16toh_custom_s(raw.OutPw);
    }

    int16_t get_raw_Tmp() const {
        return be16toh_custom_s(raw.Tmp);
    }

    float get_InA() const {
        int16_t sf_val = be16toh_custom_s(raw.A_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.InA);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_InA() const {
        return be16toh_custom_s(raw.InA);
    }

    float get_InV() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.InV);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_InV() const {
        return be16toh_custom_s(raw.InV);
    }

    float get_InW() const {
        int16_t sf_val = be16toh_custom_s(raw.W_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.InW);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_InW() const {
        return be16toh_custom_s(raw.InW);
    }

};
