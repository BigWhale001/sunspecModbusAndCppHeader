// Generated C++ Header for Model 11
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model11_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t Spd;
    uint16_t CfgSt;
    uint16_t St;
    uint16_t MAC[4];
    char Nam[8];
    uint16_t Ctl;
    uint16_t FrcSpd;
};
#pragma pack(pop)

class Model11 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 11;
    Model11_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model11_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_Spd() const {
        return be16toh_custom(raw.Spd);
    }

    uint16_t get_raw_CfgSt() const {
        return be16toh_custom(raw.CfgSt);
    }

    uint16_t get_raw_St() const {
        return be16toh_custom(raw.St);
    }

    uint16_t get_raw_Ctl() const {
        return be16toh_custom(raw.Ctl);
    }

    uint16_t get_raw_FrcSpd() const {
        return be16toh_custom(raw.FrcSpd);
    }

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
            std::cout << "    Spd: " << be16toh_custom(raw.Spd) << std::endl;
            std::cout << "    CfgSt: " << be16toh_custom(raw.CfgSt) << std::endl;
            std::cout << "    St: " << be16toh_custom(raw.St) << std::endl;
            std::cout << "    MAC: [";
            for(size_t i=0; i<4; ++i) {
                std::cout << be16toh_custom(raw.MAC[i]) << (i < 3 ? ", " : "");
            }
            std::cout << "]" << std::endl;
            std::cout << "    Nam: ";
            for(size_t i=0; i<sizeof(raw.Nam) && raw.Nam[i] != 0; ++i) std::cout << raw.Nam[i];
            std::cout << std::endl;
            std::cout << "    Ctl: " << be16toh_custom(raw.Ctl) << std::endl;
            std::cout << "    FrcSpd: " << be16toh_custom(raw.FrcSpd) << std::endl;
        const uint8_t* cur_ptr = base_addr + sizeof(Model11_Raw);
    }

};
