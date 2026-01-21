// Generated C++ Header for Model 64414
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model64414_Raw {
    uint16_t ID;
    uint16_t L;
    char Time[20];
    uint16_t Temperature;
    char GridModelSource[64];
    char IrradianceModelSource[64];
    uint16_t Irradiance;
    uint16_t GridVoltageA;
    uint16_t GridVoltageB;
    uint16_t GridVoltageC;
    uint16_t GridFrequency;
};
#pragma pack(pop)

class Model64414 : public SunSpecModelBase {
public:
    Model64414_Raw raw;

    uint16_t get_id() const override { return 64414; }

    void from_buffer(const uint8_t* buffer) override {
        std::memcpy(&raw, buffer, sizeof(Model64414_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

};
