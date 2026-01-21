// Generated C++ Header for Model 12
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model12_Raw {
    uint16_t ID;
    uint16_t L;
    char Nam[8];
    uint16_t CfgSt;
    uint16_t ChgSt;
    uint16_t Cap;
    uint16_t Cfg;
    uint16_t Ctl;
    char Addr[16];
    char Msk[16];
    char Gw[16];
    char DNS1[16];
    char DNS2[16];
    char NTP1[24];
    char NTP2[24];
    char DomNam[24];
    char HostNam[24];
    uint16_t pad_99;
};
#pragma pack(pop)

class Model12 : public SunSpecModelBase {
public:
    Model12_Raw raw;

    uint16_t get_id() const override { return 12; }

    void from_buffer(const uint8_t* buffer) override {
        std::memcpy(&raw, buffer, sizeof(Model12_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_CfgSt() const {
        return be16toh_custom_s(raw.CfgSt);
    }

    uint16_t get_raw_ChgSt() const {
        return be16toh_custom_s(raw.ChgSt);
    }

    uint16_t get_raw_Cap() const {
        return be16toh_custom_s(raw.Cap);
    }

    uint16_t get_raw_Cfg() const {
        return be16toh_custom_s(raw.Cfg);
    }

    uint16_t get_raw_Ctl() const {
        return be16toh_custom_s(raw.Ctl);
    }

};
