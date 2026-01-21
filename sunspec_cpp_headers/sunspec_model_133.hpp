// Generated C++ Header for Model 133
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model133_Raw {
    uint16_t ID;
    uint16_t L;
    uint32_t ActSchd;
    uint16_t ModEna;
    uint16_t NSchd;
    uint16_t NPts;
    uint16_t pad_7;
};
#pragma pack(pop)

class Model133 : public SunSpecModelBase {
public:
    Model133_Raw raw;

    uint16_t get_id() const override { return 133; }

    void from_buffer(const uint8_t* buffer) override {
        std::memcpy(&raw, buffer, sizeof(Model133_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_ModEna() const {
        return be16toh_custom_s(raw.ModEna);
    }

    uint16_t get_raw_NSchd() const {
        return be16toh_custom(raw.NSchd);
    }

    uint16_t get_raw_NPts() const {
        return be16toh_custom(raw.NPts);
    }

};
