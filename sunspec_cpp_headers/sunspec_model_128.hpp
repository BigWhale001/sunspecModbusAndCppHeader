// Generated C++ Header for Model 128
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model128_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t ArGraMod;
    uint16_t ArGraSag;
    uint16_t ArGraSwell;
    uint16_t ModEna;
    uint16_t FilTms;
    uint16_t DbVMin;
    uint16_t DbVMax;
    uint16_t BlkZnV;
    uint16_t HysBlkZnV;
    uint16_t BlkZnTmms;
    uint16_t HoldTmms;
    int16_t ArGra_SF;
    int16_t VRefPct_SF;
    uint16_t pad_15;
};
#pragma pack(pop)

class Model128 : public SunSpecModelBase {
public:
    Model128_Raw raw;

    uint16_t get_id() const override { return 128; }

    void from_buffer(const uint8_t* buffer) override {
        std::memcpy(&raw, buffer, sizeof(Model128_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_ArGraMod() const {
        return be16toh_custom_s(raw.ArGraMod);
    }

    float get_ArGraSag() const {
        int16_t sf_val = be16toh_custom_s(raw.ArGra_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.ArGraSag);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_ArGraSag() const {
        return be16toh_custom(raw.ArGraSag);
    }

    float get_ArGraSwell() const {
        int16_t sf_val = be16toh_custom_s(raw.ArGra_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.ArGraSwell);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_ArGraSwell() const {
        return be16toh_custom(raw.ArGraSwell);
    }

    uint16_t get_raw_ModEna() const {
        return be16toh_custom_s(raw.ModEna);
    }

    uint16_t get_raw_FilTms() const {
        return be16toh_custom(raw.FilTms);
    }

    float get_DbVMin() const {
        int16_t sf_val = be16toh_custom_s(raw.VRefPct_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.DbVMin);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_DbVMin() const {
        return be16toh_custom(raw.DbVMin);
    }

    float get_DbVMax() const {
        int16_t sf_val = be16toh_custom_s(raw.VRefPct_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.DbVMax);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_DbVMax() const {
        return be16toh_custom(raw.DbVMax);
    }

    float get_BlkZnV() const {
        int16_t sf_val = be16toh_custom_s(raw.VRefPct_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.BlkZnV);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_BlkZnV() const {
        return be16toh_custom(raw.BlkZnV);
    }

    float get_HysBlkZnV() const {
        int16_t sf_val = be16toh_custom_s(raw.VRefPct_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.HysBlkZnV);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_HysBlkZnV() const {
        return be16toh_custom(raw.HysBlkZnV);
    }

    uint16_t get_raw_BlkZnTmms() const {
        return be16toh_custom(raw.BlkZnTmms);
    }

    uint16_t get_raw_HoldTmms() const {
        return be16toh_custom(raw.HoldTmms);
    }

};
