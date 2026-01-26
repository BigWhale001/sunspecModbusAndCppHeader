// Generated C++ Header for Model 16
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model16_Raw {
    uint16_t ID;
    uint16_t L;
    char Nam[8];
    uint16_t Cfg;
    uint16_t Ctl;
    char Addr[16];
    char Msk[16];
    char Gw[16];
    char DNS1[16];
    char DNS2[16];
    uint16_t MAC[4];
    uint16_t LnkCtl;
    uint16_t pad_53;
};
#pragma pack(pop)

class Model16 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 16;
    Model16_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model16_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_Cfg() const {
        return be16toh_custom(raw.Cfg);
    }

    uint16_t get_raw_Ctl() const {
        return be16toh_custom(raw.Ctl);
    }

    uint16_t get_raw_LnkCtl() const {
        return be16toh_custom(raw.LnkCtl);
    }

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
        std::cout << "    Nam: ";
        for(size_t i=0; i<sizeof(raw.Nam) && raw.Nam[i] != 0; ++i) std::cout << raw.Nam[i];
        std::cout << std::endl;
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
        std::cout << "    MAC: [";
        for(size_t i=0; i<4; ++i) {
            std::cout << be16toh_custom(raw.MAC[i]) << (i < 3 ? ", " : "");
        }
        std::cout << "]" << std::endl;
        std::cout << "    LnkCtl: " << be16toh_custom(raw.LnkCtl) << std::endl;
    }

};
