// Generated C++ Header for Model 304
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model304_Raw {
    uint16_t ID;
    uint16_t L;
};
#pragma pack(pop)

class Model304 : public SunSpecModelBase {
public:
    Model304_Raw raw;

    uint16_t get_id() const override { return 304; }

    void from_buffer(const uint8_t* buffer) override {
        std::memcpy(&raw, buffer, sizeof(Model304_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

};
