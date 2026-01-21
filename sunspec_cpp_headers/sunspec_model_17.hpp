// Generated C++ Header for Model 17
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model17_Raw {
    uint16_t ID;
    uint16_t L;
    char Nam[8];
    uint32_t Rte;
    uint16_t Bits;
    uint16_t Pty;
    uint16_t Dup;
    uint16_t Flw;
    uint16_t Typ;
    uint16_t Pcol;
};
#pragma pack(pop)

class Model17 : public SunSpecModelBase {
public:
    Model17_Raw raw;

    uint16_t get_id() const override { return 17; }

    void from_buffer(const uint8_t* buffer) override {
        std::memcpy(&raw, buffer, sizeof(Model17_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_Bits() const {
        return be16toh_custom(raw.Bits);
    }

    uint16_t get_raw_Pty() const {
        return be16toh_custom_s(raw.Pty);
    }

    uint16_t get_raw_Dup() const {
        return be16toh_custom_s(raw.Dup);
    }

    uint16_t get_raw_Flw() const {
        return be16toh_custom_s(raw.Flw);
    }

    uint16_t get_raw_Typ() const {
        return be16toh_custom_s(raw.Typ);
    }

    uint16_t get_raw_Pcol() const {
        return be16toh_custom_s(raw.Pcol);
    }

};
