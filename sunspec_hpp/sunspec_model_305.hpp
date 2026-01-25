// Generated C++ Header for Model 305
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model305_Raw {
    uint16_t ID;
    uint16_t L;
    char Tm[12];
    char Date[8];
    char Loc[40];
    int32_t Lat;
    int32_t Long;
    int32_t Alt;
};
#pragma pack(pop)

class Model305 : public SunSpecModelBase {
public:
    Model305_Raw raw;

    uint16_t get_id() const override { return 305; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model305_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

};
