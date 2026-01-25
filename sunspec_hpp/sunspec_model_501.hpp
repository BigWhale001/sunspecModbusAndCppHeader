// Generated C++ Header for Model 501
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model501_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t Stat;
    uint16_t StatVend;
    uint32_t Evt;
    uint32_t EvtVend;
    uint16_t Ctl;
    uint32_t CtlVend;
    int32_t CtlVal;
    uint32_t Tms;
    uint16_t OutA;
    uint16_t OutV;
    uint16_t OutWh;
    uint16_t OutW;
    uint16_t Tmp;
    uint16_t InA;
    uint16_t InV;
    uint16_t InWh;
    uint16_t InW;
};
#pragma pack(pop)

class Model501 : public SunSpecModelBase {
public:
    Model501_Raw raw;

    uint16_t get_id() const override { return 501; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model501_Raw));
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

};
