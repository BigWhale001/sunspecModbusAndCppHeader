// Generated C++ Header for Model 10
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model10_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t St;
    uint16_t Ctl;
    uint16_t Typ;
    uint16_t pad_5;
};
#pragma pack(pop)

class Model10 : public SunSpecModelBase {
public:
    Model10_Raw raw;

    uint16_t get_id() const override { return 10; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model10_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_St() const {
        return be16toh_custom_s(raw.St);
    }

    uint16_t get_raw_Ctl() const {
        return be16toh_custom(raw.Ctl);
    }

    uint16_t get_raw_Typ() const {
        return be16toh_custom_s(raw.Typ);
    }

};
