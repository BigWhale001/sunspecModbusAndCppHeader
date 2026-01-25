// Generated C++ Header for Model 2
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model2_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t AID;
    uint16_t N;
    uint16_t UN;
    uint16_t St;
    uint16_t StVnd;
    uint32_t Evt;
    uint32_t EvtVnd;
    uint16_t Ctl;
    uint32_t CtlVnd;
    uint32_t CtlVl;
};
#pragma pack(pop)

class Model2 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 2;
    Model2_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model2_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_AID() const {
        return be16toh_custom(raw.AID);
    }

    uint16_t get_raw_N() const {
        return be16toh_custom(raw.N);
    }

    uint16_t get_raw_UN() const {
        return be16toh_custom(raw.UN);
    }

    uint16_t get_raw_St() const {
        return be16toh_custom(raw.St);
    }

    uint16_t get_raw_StVnd() const {
        return be16toh_custom(raw.StVnd);
    }

    uint16_t get_raw_Ctl() const {
        return be16toh_custom(raw.Ctl);
    }

};
