// Generated C++ Header for Model 131
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model131_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t ActCrv;
    uint16_t ModEna;
    uint16_t WinTms;
    uint16_t RvrtTms;
    uint16_t RmpTms;
    uint16_t NCrv;
    uint16_t NPt;
    int16_t W_SF;
    int16_t PF_SF;
    int16_t RmpIncDec_SF;
};
#pragma pack(pop)

// Repeating group: curve
#pragma pack(push, 1)
struct Model131_curve_Raw {
    uint16_t ActPt;
    int16_t W1;
    int16_t PF1;
    int16_t W2;
    int16_t PF2;
    int16_t W3;
    int16_t PF3;
    int16_t W4;
    int16_t PF4;
    int16_t W5;
    int16_t PF5;
    int16_t W6;
    int16_t PF6;
    int16_t W7;
    int16_t PF7;
    int16_t W8;
    int16_t PF8;
    int16_t W9;
    int16_t PF9;
    int16_t W10;
    int16_t PF10;
    int16_t W11;
    int16_t PF11;
    int16_t W12;
    int16_t PF12;
    int16_t W13;
    int16_t PF13;
    int16_t W14;
    int16_t PF14;
    int16_t W15;
    int16_t PF15;
    int16_t W16;
    int16_t PF16;
    int16_t W17;
    int16_t PF17;
    int16_t W18;
    int16_t PF18;
    int16_t W19;
    int16_t PF19;
    int16_t W20;
    int16_t PF20;
    char CrvNam[16];
    uint16_t RmpPT1Tms;
    uint16_t RmpDecTmm;
    uint16_t RmpIncTmm;
    uint16_t ReadOnly;
    uint16_t pad_53;
};
#pragma pack(pop)

class Model131 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 131;
    Model131_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model131_Raw));
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

    int16_t get_raw_W_SF() const {
        return be16toh_custom_s(raw.W_SF);
    }

    int16_t get_raw_PF_SF() const {
        return be16toh_custom_s(raw.PF_SF);
    }

    int16_t get_raw_RmpIncDec_SF() const {
        return be16toh_custom_s(raw.RmpIncDec_SF);
    }

    // Accessor for repeating group: curve
    static const Model131_curve_Raw* get_curve(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model131_curve_Raw*>(base_buffer + offset_bytes + index * sizeof(Model131_curve_Raw));
    }

};
