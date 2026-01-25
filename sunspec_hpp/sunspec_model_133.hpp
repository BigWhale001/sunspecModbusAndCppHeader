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

// Repeating group: repeating
#pragma pack(push, 1)
struct Model133_repeating_Raw {
    uint16_t ActPts;
    uint32_t StrTms;
    uint16_t RepPer;
    uint16_t IntvTyp;
    uint16_t XTyp;
    int16_t X_SF;
    uint16_t YTyp;
    int16_t Y_SF;
    int32_t X1;
    int32_t Y1;
    int32_t X2;
    int32_t Y2;
    int32_t X3;
    int32_t Y3;
    int32_t X4;
    int32_t Y4;
    int32_t X5;
    int32_t Y5;
    int32_t X6;
    int32_t Y6;
    int32_t X7;
    int32_t Y7;
    int32_t X8;
    int32_t Y8;
    int32_t X9;
    int32_t Y9;
    int32_t X10;
    int32_t Y10;
    char Nam[16];
    uint16_t WinTms;
    uint16_t RmpTms;
    uint16_t ActIndx;
};
#pragma pack(pop)

class Model133 : public SunSpecModelBase {
public:
    Model133_Raw raw;

    uint16_t get_id() const override { return 133; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
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

    // Accessor for repeating group: repeating
    static const Model133_repeating_Raw* get_repeating(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model133_repeating_Raw*>(base_buffer + offset_bytes + index * sizeof(Model133_repeating_Raw));
    }

};
