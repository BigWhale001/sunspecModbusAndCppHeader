// Generated C++ Header for Model 502
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
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
    static constexpr uint16_t ID = 502;
    Model502_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model502_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    int16_t get_raw_A_SF() const {
        return be16toh_custom_s(raw.A_SF);
    }

    int16_t get_raw_V_SF() const {
        return be16toh_custom_s(raw.V_SF);
    }

    int16_t get_raw_W_SF() const {
        return be16toh_custom_s(raw.W_SF);
    }

    int16_t get_raw_Wh_SF() const {
        return be16toh_custom_s(raw.Wh_SF);
    }

    uint16_t get_raw_Stat() const {
        return be16toh_custom(raw.Stat);
    }

    uint16_t get_raw_StatVend() const {
        return be16toh_custom(raw.StatVend);
    }

    uint16_t get_raw_Ctl() const {
        return be16toh_custom(raw.Ctl);
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

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
            std::cout << "    A_SF: " << be16toh_custom_s(raw.A_SF) << std::endl;
            std::cout << "    V_SF: " << be16toh_custom_s(raw.V_SF) << std::endl;
            std::cout << "    W_SF: " << be16toh_custom_s(raw.W_SF) << std::endl;
            std::cout << "    Wh_SF: " << be16toh_custom_s(raw.Wh_SF) << std::endl;
            std::cout << "    Stat: " << be16toh_custom(raw.Stat) << std::endl;
            std::cout << "    StatVend: " << be16toh_custom(raw.StatVend) << std::endl;
            std::cout << "    Evt: " << be32toh_custom(raw.Evt) << std::endl;
            std::cout << "    EvtVend: " << be32toh_custom(raw.EvtVend) << std::endl;
            std::cout << "    Ctl: " << be16toh_custom(raw.Ctl) << std::endl;
            std::cout << "    CtlVend: " << be32toh_custom(raw.CtlVend) << std::endl;
            std::cout << "    CtlVal: " << be32toh_custom(raw.CtlVal) << std::endl;
            std::cout << "    Tms: " << be32toh_custom(raw.Tms) << std::endl;
            std::cout << "    OutA: " << be16toh_custom_s(raw.OutA) << std::endl;
            std::cout << "    OutV: " << be16toh_custom_s(raw.OutV) << std::endl;
            std::cout << "    OutWh: " << be32toh_custom(raw.OutWh) << std::endl;
            std::cout << "    OutPw: " << be16toh_custom_s(raw.OutPw) << std::endl;
            std::cout << "    Tmp: " << be16toh_custom_s(raw.Tmp) << std::endl;
            std::cout << "    InA: " << be16toh_custom_s(raw.InA) << std::endl;
            std::cout << "    InV: " << be16toh_custom_s(raw.InV) << std::endl;
            std::cout << "    InWh: " << be32toh_custom(raw.InWh) << std::endl;
            std::cout << "    InW: " << be16toh_custom_s(raw.InW) << std::endl;
        const uint8_t* cur_ptr = base_addr + sizeof(Model502_Raw);
    }

};
