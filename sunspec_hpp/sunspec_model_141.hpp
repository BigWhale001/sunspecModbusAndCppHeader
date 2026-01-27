// Generated C++ Header for Model 141
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model141_Raw {
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

// Group: curve
#pragma pack(push, 1)
struct Model141_curve_Raw {
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

class Model141 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 141;
    Model141_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model141_Raw));
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

    int16_t get_raw_Hz_SF() const {
        return be16toh_custom_s(raw.Hz_SF);
    }

    // Accessor for repeating group: curve
    static const Model141_curve_Raw* get_curve(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model141_curve_Raw*>(base_buffer + offset_bytes + index * sizeof(Model141_curve_Raw));
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
            std::cout << "    Hz_SF: " << be16toh_custom_s(raw.Hz_SF) << std::endl;
        const uint8_t* cur_ptr = base_addr + sizeof(Model141_Raw);
        {
            size_t rem_bytes = (get_raw_L() * 2 + 4) - (size_t)(cur_ptr - base_addr);
            size_t count = rem_bytes / sizeof(Model141_curve_Raw);
        // Loop for group: curve
        for (size_t i = 0; i < count; ++i) {
            if ((cur_ptr - base_addr) + sizeof(Model141_curve_Raw) > (size_t)(get_raw_L() * 2 + 4)) break;
            auto* grp = reinterpret_cast<const Model141_curve_Raw*>(cur_ptr);
            std::cout << "    Group curve[" << i << "]:" << std::endl;
            std::cout << "    ActPt: " << be16toh_custom(grp->ActPt) << std::endl;
            std::cout << "    Tms1: " << be16toh_custom(grp->Tms1) << std::endl;
            std::cout << "    Hz1: " << be16toh_custom(grp->Hz1) << std::endl;
            std::cout << "    Tms2: " << be16toh_custom(grp->Tms2) << std::endl;
            std::cout << "    Hz2: " << be16toh_custom(grp->Hz2) << std::endl;
            std::cout << "    Tms3: " << be16toh_custom(grp->Tms3) << std::endl;
            std::cout << "    Hz3: " << be16toh_custom(grp->Hz3) << std::endl;
            std::cout << "    Tms4: " << be16toh_custom(grp->Tms4) << std::endl;
            std::cout << "    Hz4: " << be16toh_custom(grp->Hz4) << std::endl;
            std::cout << "    Tms5: " << be16toh_custom(grp->Tms5) << std::endl;
            std::cout << "    Hz5: " << be16toh_custom(grp->Hz5) << std::endl;
            std::cout << "    Tms6: " << be16toh_custom(grp->Tms6) << std::endl;
            std::cout << "    Hz6: " << be16toh_custom(grp->Hz6) << std::endl;
            std::cout << "    Tms7: " << be16toh_custom(grp->Tms7) << std::endl;
            std::cout << "    Hz7: " << be16toh_custom(grp->Hz7) << std::endl;
            std::cout << "    Tms8: " << be16toh_custom(grp->Tms8) << std::endl;
            std::cout << "    Hz8: " << be16toh_custom(grp->Hz8) << std::endl;
            std::cout << "    Tms9: " << be16toh_custom(grp->Tms9) << std::endl;
            std::cout << "    Hz9: " << be16toh_custom(grp->Hz9) << std::endl;
            std::cout << "    Tms10: " << be16toh_custom(grp->Tms10) << std::endl;
            std::cout << "    Hz10: " << be16toh_custom(grp->Hz10) << std::endl;
            std::cout << "    Tms11: " << be16toh_custom(grp->Tms11) << std::endl;
            std::cout << "    Hz11: " << be16toh_custom(grp->Hz11) << std::endl;
            std::cout << "    Tms12: " << be16toh_custom(grp->Tms12) << std::endl;
            std::cout << "    Hz12: " << be16toh_custom(grp->Hz12) << std::endl;
            std::cout << "    Tms13: " << be16toh_custom(grp->Tms13) << std::endl;
            std::cout << "    Hz13: " << be16toh_custom(grp->Hz13) << std::endl;
            std::cout << "    Tms14: " << be16toh_custom(grp->Tms14) << std::endl;
            std::cout << "    Hz14: " << be16toh_custom(grp->Hz14) << std::endl;
            std::cout << "    Tms15: " << be16toh_custom(grp->Tms15) << std::endl;
            std::cout << "    Hz15: " << be16toh_custom(grp->Hz15) << std::endl;
            std::cout << "    Tms16: " << be16toh_custom(grp->Tms16) << std::endl;
            std::cout << "    Hz16: " << be16toh_custom(grp->Hz16) << std::endl;
            std::cout << "    Tms17: " << be16toh_custom(grp->Tms17) << std::endl;
            std::cout << "    Hz17: " << be16toh_custom(grp->Hz17) << std::endl;
            std::cout << "    Tms18: " << be16toh_custom(grp->Tms18) << std::endl;
            std::cout << "    Hz18: " << be16toh_custom(grp->Hz18) << std::endl;
            std::cout << "    Tms19: " << be16toh_custom(grp->Tms19) << std::endl;
            std::cout << "    Hz19: " << be16toh_custom(grp->Hz19) << std::endl;
            std::cout << "    Tms20: " << be16toh_custom(grp->Tms20) << std::endl;
            std::cout << "    Hz20: " << be16toh_custom(grp->Hz20) << std::endl;
            std::cout << "    CrvNam: ";
            for(size_t i=0; i<sizeof(grp->CrvNam) && grp->CrvNam[i] != 0; ++i) std::cout << grp->CrvNam[i];
            std::cout << std::endl;
            std::cout << "    ReadOnly: " << be16toh_custom(grp->ReadOnly) << std::endl;
            cur_ptr += sizeof(Model141_curve_Raw);
        }
        }
    }

};
