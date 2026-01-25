// Generated C++ Header for Model 136
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model136_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t ActCrv;
    uint16_t ModEna;
    uint16_t WinTms;
    uint16_t RvrtTms;
    uint16_t RmpTms;
    uint16_t NCrv;
    uint16_t NPt;
    int16_t Tms_SF;
    int16_t Hz_SF;
    uint16_t pad_11;
};
#pragma pack(pop)

// Repeating group: curve
#pragma pack(push, 1)
struct Model136_curve_Raw {
    uint16_t ActPt;
    uint16_t Tms1;
    uint16_t Hz1;
    uint16_t Tms2;
    uint16_t Hz2;
    uint16_t Tms3;
    uint16_t Hz3;
    uint16_t Tms4;
    uint16_t Hz4;
    uint16_t Tms5;
    uint16_t Hz5;
    uint16_t Tms6;
    uint16_t Hz6;
    uint16_t Tms7;
    uint16_t Hz7;
    uint16_t Tms8;
    uint16_t Hz8;
    uint16_t Tms9;
    uint16_t Hz9;
    uint16_t Tms10;
    uint16_t Hz10;
    uint16_t Tms11;
    uint16_t Hz11;
    uint16_t Tms12;
    uint16_t Hz12;
    uint16_t Tms13;
    uint16_t Hz13;
    uint16_t Tms14;
    uint16_t Hz14;
    uint16_t Tms15;
    uint16_t Hz15;
    uint16_t Tms16;
    uint16_t Hz16;
    uint16_t Tms17;
    uint16_t Hz17;
    uint16_t Tms18;
    uint16_t Hz18;
    uint16_t Tms19;
    uint16_t Hz19;
    uint16_t Tms20;
    uint16_t Hz20;
    char CrvNam[16];
    uint16_t ReadOnly;
};
#pragma pack(pop)

class Model136 : public SunSpecModelBase {
public:
    Model136_Raw raw;

    uint16_t get_id() const override { return 136; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model136_Raw));
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
    static const Model136_curve_Raw* get_curve(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model136_curve_Raw*>(base_buffer + offset_bytes + index * sizeof(Model136_curve_Raw));
    }

};
