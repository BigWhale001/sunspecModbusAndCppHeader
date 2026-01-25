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

// Repeating group: Ctl
#pragma pack(push, 1)
struct Model711_Ctl_Raw {
    uint32_t DbOf;
    uint32_t DbUf;
    uint16_t KOf;
    uint16_t KUf;
    uint32_t RspTms;
    int16_t PMin;
    uint16_t ReadOnly;
};
#pragma pack(pop)

class Model711 : public SunSpecModelBase {
public:
    Model711_Raw raw;

    uint16_t get_id() const override { return 711; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model711_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_Ena() const {
        return be16toh_custom(raw.Ena);
    }

    uint16_t get_raw_AdptCtlReq() const {
        return be16toh_custom(raw.AdptCtlReq);
    }

    uint16_t get_raw_AdptCtlRslt() const {
        return be16toh_custom(raw.AdptCtlRslt);
    }

    uint16_t get_raw_NCtl() const {
        return be16toh_custom(raw.NCtl);
    }

    uint16_t get_raw_RvrtCtl() const {
        return be16toh_custom(raw.RvrtCtl);
    }

    int16_t get_raw_Db_SF() const {
        return be16toh_custom_s(raw.Db_SF);
    }

    int16_t get_raw_K_SF() const {
        return be16toh_custom_s(raw.K_SF);
    }

    int16_t get_raw_RspTms_SF() const {
        return be16toh_custom_s(raw.RspTms_SF);
    }

    // Accessor for repeating group: Ctl
    static const Model711_Ctl_Raw* get_Ctl(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model711_Ctl_Raw*>(base_buffer + offset_bytes + index * sizeof(Model711_Ctl_Raw));
    }

};
