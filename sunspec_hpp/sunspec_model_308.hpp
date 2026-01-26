// Generated C++ Header for Model 308
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model308_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t GHI;
    int16_t TmpBOM;
    int16_t TmpAmb;
    uint16_t WndSpd;
};
#pragma pack(pop)

class Model308 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 308;
    Model308_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model308_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_GHI() const {
        return be16toh_custom(raw.GHI);
    }

    float get_TmpBOM() const {
        int16_t sf_val = -1;
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.TmpBOM);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_TmpBOM() const {
        return be16toh_custom_s(raw.TmpBOM);
    }

    float get_TmpAmb() const {
        int16_t sf_val = -1;
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.TmpAmb);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_TmpAmb() const {
        return be16toh_custom_s(raw.TmpAmb);
    }

    uint16_t get_raw_WndSpd() const {
        return be16toh_custom(raw.WndSpd);
    }

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
        std::cout << "    GHI: " << be16toh_custom(raw.GHI) << std::endl;
        std::cout << "    TmpBOM: " << be16toh_custom_s(raw.TmpBOM) << std::endl;
        std::cout << "    TmpAmb: " << be16toh_custom_s(raw.TmpAmb) << std::endl;
        std::cout << "    WndSpd: " << be16toh_custom(raw.WndSpd) << std::endl;
    }

};
