// Generated C++ Header for Model 714
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model714_Raw {
    uint16_t ID;
    uint16_t L;
    uint32_t PrtAlrms;
    uint16_t NPrt;
    int16_t DCA;
    int16_t DCW;
    uint16_t DCWhInj[4];
    uint16_t DCWhAbs[4];
    int16_t DCA_SF;
    int16_t DCV_SF;
    int16_t DCW_SF;
    int16_t DCWH_SF;
    int16_t Tmp_SF;
};
#pragma pack(pop)

class Model714 : public SunSpecModelBase {
public:
    Model714_Raw raw;

    uint16_t get_id() const override { return 714; }

    void from_buffer(const uint8_t* buffer) override {
        std::memcpy(&raw, buffer, sizeof(Model714_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_NPrt() const {
        return be16toh_custom(raw.NPrt);
    }

    float get_DCA() const {
        int16_t sf_val = be16toh_custom_s(raw.DCA_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.DCA);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_DCA() const {
        return be16toh_custom_s(raw.DCA);
    }

    float get_DCW() const {
        int16_t sf_val = be16toh_custom_s(raw.DCW_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.DCW);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_DCW() const {
        return be16toh_custom_s(raw.DCW);
    }

};
