// Generated C++ Header for Model 64415
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model64415_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t LogEventEna;
    uint16_t HTTPMsg;
    uint16_t COMM004Cert;
};
#pragma pack(pop)

class Model64415 : public SunSpecModelBase {
public:
    Model64415_Raw raw;

    uint16_t get_id() const override { return 64415; }

    void from_buffer(const uint8_t* buffer) override {
        std::memcpy(&raw, buffer, sizeof(Model64415_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_LogEventEna() const {
        return be16toh_custom_s(raw.LogEventEna);
    }

    uint16_t get_raw_HTTPMsg() const {
        return be16toh_custom_s(raw.HTTPMsg);
    }

    uint16_t get_raw_COMM004Cert() const {
        return be16toh_custom_s(raw.COMM004Cert);
    }

};
