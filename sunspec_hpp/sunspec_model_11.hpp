// Generated C++ Header for Model 11
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
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

};
