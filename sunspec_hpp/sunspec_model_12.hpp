// Generated C++ Header for Model 12
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
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
    static constexpr uint16_t ID = 12;
    Model12_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model12_Raw));
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

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
            std::cout << "    Nam: ";
            for(size_t i=0; i<sizeof(raw.Nam) && raw.Nam[i] != 0; ++i) std::cout << raw.Nam[i];
            std::cout << std::endl;
            std::cout << "    CfgSt: " << be16toh_custom(raw.CfgSt) << std::endl;
            std::cout << "    ChgSt: " << be16toh_custom(raw.ChgSt) << std::endl;
            std::cout << "    Cap: " << be16toh_custom(raw.Cap) << std::endl;
            std::cout << "    Cfg: " << be16toh_custom(raw.Cfg) << std::endl;
            std::cout << "    Ctl: " << be16toh_custom(raw.Ctl) << std::endl;
            std::cout << "    Addr: ";
            for(size_t i=0; i<sizeof(raw.Addr) && raw.Addr[i] != 0; ++i) std::cout << raw.Addr[i];
            std::cout << std::endl;
            std::cout << "    Msk: ";
            for(size_t i=0; i<sizeof(raw.Msk) && raw.Msk[i] != 0; ++i) std::cout << raw.Msk[i];
            std::cout << std::endl;
            std::cout << "    Gw: ";
            for(size_t i=0; i<sizeof(raw.Gw) && raw.Gw[i] != 0; ++i) std::cout << raw.Gw[i];
            std::cout << std::endl;
            std::cout << "    DNS1: ";
            for(size_t i=0; i<sizeof(raw.DNS1) && raw.DNS1[i] != 0; ++i) std::cout << raw.DNS1[i];
            std::cout << std::endl;
            std::cout << "    DNS2: ";
            for(size_t i=0; i<sizeof(raw.DNS2) && raw.DNS2[i] != 0; ++i) std::cout << raw.DNS2[i];
            std::cout << std::endl;
            std::cout << "    NTP1: ";
            for(size_t i=0; i<sizeof(raw.NTP1) && raw.NTP1[i] != 0; ++i) std::cout << raw.NTP1[i];
            std::cout << std::endl;
            std::cout << "    NTP2: ";
            for(size_t i=0; i<sizeof(raw.NTP2) && raw.NTP2[i] != 0; ++i) std::cout << raw.NTP2[i];
            std::cout << std::endl;
            std::cout << "    DomNam: ";
            for(size_t i=0; i<sizeof(raw.DomNam) && raw.DomNam[i] != 0; ++i) std::cout << raw.DomNam[i];
            std::cout << std::endl;
            std::cout << "    HostNam: ";
            for(size_t i=0; i<sizeof(raw.HostNam) && raw.HostNam[i] != 0; ++i) std::cout << raw.HostNam[i];
            std::cout << std::endl;
        const uint8_t* cur_ptr = base_addr + sizeof(Model12_Raw);
    }

};
