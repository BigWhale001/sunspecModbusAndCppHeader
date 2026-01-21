// Generated C++ Header for Model 160
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model160_Raw {
    uint16_t ID;
    uint16_t L;
    int16_t DCA_SF;
    int16_t DCV_SF;
    int16_t DCW_SF;
    int16_t DCWH_SF;
    uint32_t Evt;
    uint16_t N;
    uint16_t TmsPer;
};
#pragma pack(pop)

class Model160 : public SunSpecModelBase {
public:
    Model160_Raw raw;

    uint16_t get_id() const override { return 160; }

    void from_buffer(const uint8_t* buffer) override {
        std::memcpy(&raw, buffer, sizeof(Model160_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_TmsPer() const {
        return be16toh_custom(raw.TmsPer);
    }

};
