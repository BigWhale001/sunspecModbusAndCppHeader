// Generated C++ Header for Model 403
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model403_Raw {
    uint16_t ID;
    uint16_t L;
    int16_t DCA_SF;
    int16_t DCAhr_SF;
    int16_t DCV_SF;
    uint16_t DCAMax;
    uint16_t N;
    uint32_t Evt;
    uint32_t EvtVnd;
    int16_t DCA;
    uint32_t DCAhr;
    int16_t DCV;
    int16_t Tmp;
    int16_t InDCA_SF;
    int16_t InDCAhr_SF;
};
#pragma pack(pop)

class Model403 : public SunSpecModelBase {
public:
    Model403_Raw raw;

    uint16_t get_id() const override { return 403; }

    void from_buffer(const uint8_t* buffer) override {
        std::memcpy(&raw, buffer, sizeof(Model403_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    float get_DCAMax() const {
        int16_t sf_val = be16toh_custom_s(raw.DCA_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.DCAMax);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_DCAMax() const {
        return be16toh_custom(raw.DCAMax);
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

    float get_DCV() const {
        int16_t sf_val = be16toh_custom_s(raw.DCV_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.DCV);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_DCV() const {
        return be16toh_custom_s(raw.DCV);
    }

    int16_t get_raw_Tmp() const {
        return be16toh_custom_s(raw.Tmp);
    }

};
