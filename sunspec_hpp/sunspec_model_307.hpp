// Generated C++ Header for Model 307
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model307_Raw {
    uint16_t ID;
    uint16_t L;
    int16_t TmpAmb;
    int16_t RH;
    int16_t Pres;
    int16_t WndSpd;
    int16_t WndDir;
    int16_t Rain;
    int16_t Snw;
    int16_t PPT;
    int16_t ElecFld;
    int16_t SurWet;
    int16_t SoilWet;
};
#pragma pack(pop)

class Model307 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 307;
    Model307_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model307_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
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

    int16_t get_raw_RH() const {
        return be16toh_custom_s(raw.RH);
    }

    int16_t get_raw_Pres() const {
        return be16toh_custom_s(raw.Pres);
    }

    int16_t get_raw_WndSpd() const {
        return be16toh_custom_s(raw.WndSpd);
    }

    int16_t get_raw_WndDir() const {
        return be16toh_custom_s(raw.WndDir);
    }

    int16_t get_raw_Rain() const {
        return be16toh_custom_s(raw.Rain);
    }

    int16_t get_raw_Snw() const {
        return be16toh_custom_s(raw.Snw);
    }

    int16_t get_raw_PPT() const {
        return be16toh_custom_s(raw.PPT);
    }

    int16_t get_raw_ElecFld() const {
        return be16toh_custom_s(raw.ElecFld);
    }

    int16_t get_raw_SurWet() const {
        return be16toh_custom_s(raw.SurWet);
    }

    int16_t get_raw_SoilWet() const {
        return be16toh_custom_s(raw.SoilWet);
    }

};
