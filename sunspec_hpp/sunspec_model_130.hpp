// Generated C++ Header for Model 130
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model130_Raw {
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
    int16_t V_SF;
    uint16_t pad_11;
};
#pragma pack(pop)

// Repeating group: curve
#pragma pack(push, 1)
struct Model130_curve_Raw {
    uint16_t ActPt;
    uint16_t Tms1;
    uint16_t V1;
    uint16_t Tms2;
    uint16_t V2;
    uint16_t Tms3;
    uint16_t V3;
    uint16_t Tms4;
    uint16_t V4;
    uint16_t Tms5;
    uint16_t V5;
    uint16_t Tms6;
    uint16_t V6;
    uint16_t Tms7;
    uint16_t V7;
    uint16_t Tms8;
    uint16_t V8;
    uint16_t Tms9;
    uint16_t V9;
    uint16_t Tms10;
    uint16_t V10;
    uint16_t Tms11;
    uint16_t V11;
    uint16_t Tms12;
    uint16_t V12;
    uint16_t Tms13;
    uint16_t V13;
    uint16_t Tms14;
    uint16_t V14;
    uint16_t Tms15;
    uint16_t V15;
    uint16_t Tms16;
    uint16_t V16;
    uint16_t Tms17;
    uint16_t V17;
    uint16_t Tms18;
    uint16_t V18;
    uint16_t Tms19;
    uint16_t V19;
    uint16_t Tms20;
    uint16_t V20;
    char CrvNam[16];
    uint16_t ReadOnly;
};
#pragma pack(pop)

class Model130 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 130;
    Model130_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model130_Raw));
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

    int16_t get_raw_Tms_SF() const {
        return be16toh_custom_s(raw.Tms_SF);
    }

    int16_t get_raw_V_SF() const {
        return be16toh_custom_s(raw.V_SF);
    }

    // Accessor for repeating group: curve
    static const Model130_curve_Raw* get_curve(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model130_curve_Raw*>(base_buffer + offset_bytes + index * sizeof(Model130_curve_Raw));
    }

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
        std::cout << "    ActCrv: " << be16toh_custom(raw.ActCrv) << std::endl;
        std::cout << "    ModEna: " << be16toh_custom(raw.ModEna) << std::endl;
        std::cout << "    WinTms: " << be16toh_custom(raw.WinTms) << std::endl;
        std::cout << "    RvrtTms: " << be16toh_custom(raw.RvrtTms) << std::endl;
        std::cout << "    RmpTms: " << be16toh_custom(raw.RmpTms) << std::endl;
        std::cout << "    NCrv: " << be16toh_custom(raw.NCrv) << std::endl;
        std::cout << "    NPt: " << be16toh_custom(raw.NPt) << std::endl;
        std::cout << "    Tms_SF: " << be16toh_custom_s(raw.Tms_SF) << std::endl;
        std::cout << "    V_SF: " << be16toh_custom_s(raw.V_SF) << std::endl;
    }

};
