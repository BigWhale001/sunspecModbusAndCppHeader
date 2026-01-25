// Generated C++ Header for Model 712
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model712_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t Ena;
    uint16_t AdptCrvReq;
    uint16_t AdptCrvRslt;
    uint16_t NPt;
    uint16_t NCrv;
    uint32_t RvrtTms;
    uint32_t RvrtRem;
    uint16_t RvrtCrv;
    int16_t W_SF;
    int16_t DeptRef_SF;
};
#pragma pack(pop)

// Repeating group: Crv
#pragma pack(push, 1)
struct Model712_Crv_Raw {
    uint16_t ActPt;
    uint16_t DeptRef;
    uint16_t Pri;
    uint16_t ReadOnly;
};
#pragma pack(pop)

// Repeating group: Crv_Pt
#pragma pack(push, 1)
struct Model712_Crv_Pt_Raw {
    int16_t W;
    int16_t Var;
};
#pragma pack(pop)

class Model712 : public SunSpecModelBase {
public:
    Model712_Raw raw;

    uint16_t get_id() const override { return 712; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model712_Raw));
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

    uint16_t get_raw_AdptCrvReq() const {
        return be16toh_custom(raw.AdptCrvReq);
    }

    uint16_t get_raw_AdptCrvRslt() const {
        return be16toh_custom_s(raw.AdptCrvRslt);
    }

    uint16_t get_raw_NPt() const {
        return be16toh_custom(raw.NPt);
    }

    uint16_t get_raw_NCrv() const {
        return be16toh_custom(raw.NCrv);
    }

    uint16_t get_raw_RvrtCrv() const {
        return be16toh_custom(raw.RvrtCrv);
    }

    // Accessor for repeating group: Crv
    static const Model712_Crv_Raw* get_Crv(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model712_Crv_Raw*>(base_buffer + offset_bytes + index * sizeof(Model712_Crv_Raw));
    }

    // Accessor for repeating group: Crv_Pt
    static const Model712_Crv_Pt_Raw* get_Crv_Pt(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model712_Crv_Pt_Raw*>(base_buffer + offset_bytes + index * sizeof(Model712_Crv_Pt_Raw));
    }

};
