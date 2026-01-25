// Generated C++ Header for Model 132
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model132_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t ActCrv;
    uint16_t ModEna;
    uint16_t WinTms;
    uint16_t RvrtTms;
    uint16_t RmpTms;
    uint16_t NCrv;
    uint16_t NPt;
    int16_t V_SF;
    int16_t DeptRef_SF;
    int16_t RmpIncDec_SF;
};
#pragma pack(pop)

// Repeating group: curve
#pragma pack(push, 1)
struct Model132_curve_Raw {
    uint16_t ActPt;
    uint16_t DeptRef;
    uint16_t V1;
    int16_t W1;
    uint16_t V2;
    int16_t W2;
    uint16_t V3;
    int16_t W3;
    uint16_t V4;
    int16_t W4;
    uint16_t V5;
    int16_t W5;
    uint16_t V6;
    int16_t W6;
    uint16_t V7;
    int16_t W7;
    uint16_t V8;
    int16_t W8;
    uint16_t V9;
    int16_t W9;
    uint16_t V10;
    int16_t W10;
    uint16_t V11;
    int16_t W11;
    uint16_t V12;
    int16_t W12;
    uint16_t V13;
    int16_t W13;
    uint16_t V14;
    int16_t W14;
    uint16_t V15;
    int16_t W15;
    uint16_t V16;
    int16_t W16;
    uint16_t V17;
    int16_t W17;
    uint16_t V18;
    int16_t W18;
    uint16_t V19;
    int16_t W19;
    uint16_t V20;
    int16_t W20;
    char CrvNam[16];
    uint16_t RmpPt1Tms;
    uint16_t RmpDecTmm;
    uint16_t RmpIncTmm;
    uint16_t ReadOnly;
};
#pragma pack(pop)

class Model132 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 132;
    Model132_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model132_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_ActCrv() const {
        return be16toh_custom(raw.ActCrv);
    }

    uint16_t get_raw_ModEna() const {
        return be16toh_custom(raw.ModEna);
    }

    uint16_t get_raw_WinTms() const {
        return be16toh_custom(raw.WinTms);
    }

    uint16_t get_raw_RvrtTms() const {
        return be16toh_custom(raw.RvrtTms);
    }

    uint16_t get_raw_RmpTms() const {
        return be16toh_custom(raw.RmpTms);
    }

    uint16_t get_raw_NCrv() const {
        return be16toh_custom(raw.NCrv);
    }

    uint16_t get_raw_NPt() const {
        return be16toh_custom(raw.NPt);
    }

    int16_t get_raw_V_SF() const {
        return be16toh_custom_s(raw.V_SF);
    }

    int16_t get_raw_DeptRef_SF() const {
        return be16toh_custom_s(raw.DeptRef_SF);
    }

    int16_t get_raw_RmpIncDec_SF() const {
        return be16toh_custom_s(raw.RmpIncDec_SF);
    }

    // Accessor for repeating group: curve
    static const Model132_curve_Raw* get_curve(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model132_curve_Raw*>(base_buffer + offset_bytes + index * sizeof(Model132_curve_Raw));
    }

};
