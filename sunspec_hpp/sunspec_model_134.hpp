// Generated C++ Header for Model 134
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model134_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t ActCrv;
    uint16_t ModEna;
    uint16_t WinTms;
    uint16_t RvrtTms;
    uint16_t RmpTms;
    uint16_t NCrv;
    uint16_t NPt;
    int16_t Hz_SF;
    int16_t W_SF;
    int16_t RmpIncDec_SF;
};
#pragma pack(pop)

// Repeating group: curve
#pragma pack(push, 1)
struct Model134_curve_Raw {
    uint16_t ActPt;
    uint16_t Hz1;
    int16_t W1;
    uint16_t Hz2;
    int16_t W2;
    uint16_t Hz3;
    int16_t W3;
    uint16_t Hz4;
    int16_t W4;
    uint16_t Hz5;
    int16_t W5;
    uint16_t Hz6;
    int16_t W6;
    uint16_t Hz7;
    int16_t W7;
    uint16_t Hz8;
    int16_t W8;
    uint16_t Hz9;
    int16_t W9;
    uint16_t Hz10;
    int16_t W10;
    uint16_t Hz11;
    int16_t W11;
    uint16_t Hz12;
    int16_t W12;
    uint16_t Hz13;
    int16_t W13;
    uint16_t Hz14;
    int16_t W14;
    uint16_t Hz15;
    int16_t W15;
    uint16_t Hz16;
    int16_t W16;
    uint16_t Hz17;
    int16_t W17;
    uint16_t Hz18;
    int16_t W18;
    uint16_t Hz19;
    int16_t W19;
    uint16_t Hz20;
    int16_t W20;
    char CrvNam[16];
    uint16_t RmpPT1Tms;
    uint16_t RmpDecTmm;
    uint16_t RmpIncTmm;
    uint16_t RmpRsUp;
    uint16_t SnptW;
    uint16_t WRef;
    uint16_t WRefStrHz;
    uint16_t WRefStopHz;
    uint16_t ReadOnly;
};
#pragma pack(pop)

class Model134 : public SunSpecModelBase {
public:
    Model134_Raw raw;

    uint16_t get_id() const override { return 134; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model134_Raw));
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
        return be16toh_custom_s(raw.ModEna);
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

    // Accessor for repeating group: curve
    static const Model134_curve_Raw* get_curve(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model134_curve_Raw*>(base_buffer + offset_bytes + index * sizeof(Model134_curve_Raw));
    }

};
