// Generated C++ Header for Model 140
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model140_Raw {
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
    uint16_t CrvType;
};
#pragma pack(pop)

// Group: curve
#pragma pack(push, 1)
struct Model140_curve_Raw {
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

class Model140 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 140;
    Model140_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model140_Raw));
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

    uint16_t get_raw_CrvType() const {
        return be16toh_custom(raw.CrvType);
    }

    // Accessor for repeating group: curve
    static const Model140_curve_Raw* get_curve(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model140_curve_Raw*>(base_buffer + offset_bytes + index * sizeof(Model140_curve_Raw));
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
            std::cout << "    CrvType: " << be16toh_custom(raw.CrvType) << std::endl;
        const uint8_t* cur_ptr = base_addr + sizeof(Model140_Raw);
        {
            size_t rem_bytes = (get_raw_L() * 2 + 4) - (size_t)(cur_ptr - base_addr);
            size_t count = rem_bytes / sizeof(Model140_curve_Raw);
        // Loop for group: curve
        for (size_t i = 0; i < count; ++i) {
            if ((cur_ptr - base_addr) + sizeof(Model140_curve_Raw) > (size_t)(get_raw_L() * 2 + 4)) break;
            auto* grp = reinterpret_cast<const Model140_curve_Raw*>(cur_ptr);
            std::cout << "    Group curve[" << i << "]:" << std::endl;
            std::cout << "    ActPt: " << be16toh_custom(grp->ActPt) << std::endl;
            std::cout << "    Tms1: " << be16toh_custom(grp->Tms1) << std::endl;
            std::cout << "    V1: " << be16toh_custom(grp->V1) << std::endl;
            std::cout << "    Tms2: " << be16toh_custom(grp->Tms2) << std::endl;
            std::cout << "    V2: " << be16toh_custom(grp->V2) << std::endl;
            std::cout << "    Tms3: " << be16toh_custom(grp->Tms3) << std::endl;
            std::cout << "    V3: " << be16toh_custom(grp->V3) << std::endl;
            std::cout << "    Tms4: " << be16toh_custom(grp->Tms4) << std::endl;
            std::cout << "    V4: " << be16toh_custom(grp->V4) << std::endl;
            std::cout << "    Tms5: " << be16toh_custom(grp->Tms5) << std::endl;
            std::cout << "    V5: " << be16toh_custom(grp->V5) << std::endl;
            std::cout << "    Tms6: " << be16toh_custom(grp->Tms6) << std::endl;
            std::cout << "    V6: " << be16toh_custom(grp->V6) << std::endl;
            std::cout << "    Tms7: " << be16toh_custom(grp->Tms7) << std::endl;
            std::cout << "    V7: " << be16toh_custom(grp->V7) << std::endl;
            std::cout << "    Tms8: " << be16toh_custom(grp->Tms8) << std::endl;
            std::cout << "    V8: " << be16toh_custom(grp->V8) << std::endl;
            std::cout << "    Tms9: " << be16toh_custom(grp->Tms9) << std::endl;
            std::cout << "    V9: " << be16toh_custom(grp->V9) << std::endl;
            std::cout << "    Tms10: " << be16toh_custom(grp->Tms10) << std::endl;
            std::cout << "    V10: " << be16toh_custom(grp->V10) << std::endl;
            std::cout << "    Tms11: " << be16toh_custom(grp->Tms11) << std::endl;
            std::cout << "    V11: " << be16toh_custom(grp->V11) << std::endl;
            std::cout << "    Tms12: " << be16toh_custom(grp->Tms12) << std::endl;
            std::cout << "    V12: " << be16toh_custom(grp->V12) << std::endl;
            std::cout << "    Tms13: " << be16toh_custom(grp->Tms13) << std::endl;
            std::cout << "    V13: " << be16toh_custom(grp->V13) << std::endl;
            std::cout << "    Tms14: " << be16toh_custom(grp->Tms14) << std::endl;
            std::cout << "    V14: " << be16toh_custom(grp->V14) << std::endl;
            std::cout << "    Tms15: " << be16toh_custom(grp->Tms15) << std::endl;
            std::cout << "    V15: " << be16toh_custom(grp->V15) << std::endl;
            std::cout << "    Tms16: " << be16toh_custom(grp->Tms16) << std::endl;
            std::cout << "    V16: " << be16toh_custom(grp->V16) << std::endl;
            std::cout << "    Tms17: " << be16toh_custom(grp->Tms17) << std::endl;
            std::cout << "    V17: " << be16toh_custom(grp->V17) << std::endl;
            std::cout << "    Tms18: " << be16toh_custom(grp->Tms18) << std::endl;
            std::cout << "    V18: " << be16toh_custom(grp->V18) << std::endl;
            std::cout << "    Tms19: " << be16toh_custom(grp->Tms19) << std::endl;
            std::cout << "    V19: " << be16toh_custom(grp->V19) << std::endl;
            std::cout << "    Tms20: " << be16toh_custom(grp->Tms20) << std::endl;
            std::cout << "    V20: " << be16toh_custom(grp->V20) << std::endl;
            std::cout << "    CrvNam: ";
            for(size_t i=0; i<sizeof(grp->CrvNam) && grp->CrvNam[i] != 0; ++i) std::cout << grp->CrvNam[i];
            std::cout << std::endl;
            std::cout << "    ReadOnly: " << be16toh_custom(grp->ReadOnly) << std::endl;
            cur_ptr += sizeof(Model140_curve_Raw);
        }
        }
    }

};
