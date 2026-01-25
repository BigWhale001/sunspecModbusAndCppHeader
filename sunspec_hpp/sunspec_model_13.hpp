// Generated C++ Header for Model 13
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model13_Raw {
    uint16_t ID;
    uint16_t L;
    char Nam[8];
    uint16_t CfgSt;
    uint16_t ChgSt;
    uint16_t Cap;
    uint16_t Cfg;
    uint16_t Ctl;
    char Addr[40];
    char CIDR[40];
    char Gw[40];
    char DNS1[40];
    char DNS2[40];
    char NTP1[40];
    char NTP2[40];
    char DomNam[24];
    char HostNam[24];
    uint16_t pad_175;
};
#pragma pack(pop)

class Model13 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 13;
    Model13_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model13_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_CfgSt() const {
        return be16toh_custom(raw.CfgSt);
    }

    uint16_t get_raw_ChgSt() const {
        return be16toh_custom(raw.ChgSt);
    }

    uint16_t get_raw_Cap() const {
        return be16toh_custom(raw.Cap);
    }

    uint16_t get_raw_Cfg() const {
        return be16toh_custom(raw.Cfg);
    }

    uint16_t get_raw_Ctl() const {
        return be16toh_custom(raw.Ctl);
    }

};
