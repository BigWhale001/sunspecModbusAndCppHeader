// Generated C++ Header for Model 601
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model601_Raw {
    uint16_t ID;
    uint16_t L;
    char Nam[16];
    uint16_t Typ;
    char DtLoc[10];
    char TmLoc[6];
    uint16_t Day;
    int32_t GlblElCtl;
    int32_t GlblAzCtl;
    uint16_t GlblCtl;
    uint16_t GlblAlm;
    int16_t Dgr_SF;
    uint16_t N;
};
#pragma pack(pop)

class Model601 : public SunSpecModelBase {
public:
    Model601_Raw raw;

    uint16_t get_id() const override { return 601; }

    void from_buffer(const uint8_t* buffer) override {
        std::memcpy(&raw, buffer, sizeof(Model601_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_Typ() const {
        return be16toh_custom_s(raw.Typ);
    }

    uint16_t get_raw_Day() const {
        return be16toh_custom(raw.Day);
    }

    uint16_t get_raw_GlblCtl() const {
        return be16toh_custom_s(raw.GlblCtl);
    }

    uint16_t get_raw_GlblAlm() const {
        return be16toh_custom_s(raw.GlblAlm);
    }

    uint16_t get_raw_N() const {
        return be16toh_custom(raw.N);
    }

};
