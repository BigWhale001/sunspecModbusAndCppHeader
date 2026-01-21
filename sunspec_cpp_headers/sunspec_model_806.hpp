// Generated C++ Header for Model 806
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model806_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t BatTBD;
};
#pragma pack(pop)

class Model806 : public SunSpecModelBase {
public:
    Model806_Raw raw;

    uint16_t get_id() const override { return 806; }

    void from_buffer(const uint8_t* buffer) override {
        std::memcpy(&raw, buffer, sizeof(Model806_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_BatTBD() const {
        return be16toh_custom(raw.BatTBD);
    }

};
