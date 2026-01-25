// Generated C++ Header for Model 1
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model1_Raw {
    uint16_t ID;
    uint16_t L;
    char Mn[32];
    char Md[32];
    char Opt[16];
    char Vr[16];
    char SN[32];
    uint16_t DA;
    uint16_t pad_67;
};
#pragma pack(pop)

class Model1 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 1;
    Model1_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model1_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_DA() const {
        return be16toh_custom(raw.DA);
    }

};
