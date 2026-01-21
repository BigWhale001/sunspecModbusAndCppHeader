// Generated C++ Header for Model 711
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model711_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t Ena;
    uint16_t AdptCtlReq;
    uint16_t AdptCtlRslt;
    uint16_t NCtl;
    uint32_t RvrtTms;
    uint32_t RvrtRem;
    uint16_t RvrtCtl;
    int16_t Db_SF;
    int16_t K_SF;
    int16_t RspTms_SF;
};
#pragma pack(pop)

class Model711 : public SunSpecModelBase {
public:
    Model711_Raw raw;

    uint16_t get_id() const override { return 711; }

    void from_buffer(const uint8_t* buffer) override {
        std::memcpy(&raw, buffer, sizeof(Model711_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_Ena() const {
        return be16toh_custom_s(raw.Ena);
    }

    uint16_t get_raw_AdptCtlReq() const {
        return be16toh_custom(raw.AdptCtlReq);
    }

    uint16_t get_raw_AdptCtlRslt() const {
        return be16toh_custom_s(raw.AdptCtlRslt);
    }

    uint16_t get_raw_NCtl() const {
        return be16toh_custom(raw.NCtl);
    }

    uint16_t get_raw_RvrtCtl() const {
        return be16toh_custom(raw.RvrtCtl);
    }

};
