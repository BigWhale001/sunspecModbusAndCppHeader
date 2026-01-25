// Generated C++ Header for Model 706
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model706_Raw {
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
    int16_t V_SF;
    int16_t DeptRef_SF;
    int16_t RspTms_SF;
};
#pragma pack(pop)

// Repeating group: Crv
#pragma pack(push, 1)
struct Model706_Crv_Raw {
    uint16_t ActPt;
    uint16_t DeptRef;
    uint32_t RspTms;
    uint16_t ReadOnly;
};
#pragma pack(pop)

// Repeating group: Crv_Pt
#pragma pack(push, 1)
struct Model706_Crv_Pt_Raw {
    uint16_t V;
    int16_t W;
};
#pragma pack(pop)

class Model706 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 706;
    Model706_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model706_Raw));
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

    uint16_t get_raw_AdptCrvReq() const {
        return be16toh_custom(raw.AdptCrvReq);
    }

    uint16_t get_raw_AdptCrvRslt() const {
        return be16toh_custom(raw.AdptCrvRslt);
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

    int16_t get_raw_V_SF() const {
        return be16toh_custom_s(raw.V_SF);
    }

    int16_t get_raw_DeptRef_SF() const {
        return be16toh_custom_s(raw.DeptRef_SF);
    }

    int16_t get_raw_RspTms_SF() const {
        return be16toh_custom_s(raw.RspTms_SF);
    }

    // Accessor for repeating group: Crv
    static const Model706_Crv_Raw* get_Crv(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model706_Crv_Raw*>(base_buffer + offset_bytes + index * sizeof(Model706_Crv_Raw));
    }

    // Accessor for repeating group: Crv_Pt
    static const Model706_Crv_Pt_Raw* get_Crv_Pt(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model706_Crv_Pt_Raw*>(base_buffer + offset_bytes + index * sizeof(Model706_Crv_Pt_Raw));
    }

};
