// Generated C++ Header for Model 16
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
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
    Model16_Raw raw;

    uint16_t get_id() const override { return 16; }

    void from_buffer(const uint8_t* buffer) override {
        std::memcpy(&raw, buffer, sizeof(Model16_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_Cfg() const {
        return be16toh_custom_s(raw.Cfg);
    }

    uint16_t get_raw_Ctl() const {
        return be16toh_custom_s(raw.Ctl);
    }

    uint16_t get_raw_LnkCtl() const {
        return be16toh_custom_s(raw.LnkCtl);
    }

};
