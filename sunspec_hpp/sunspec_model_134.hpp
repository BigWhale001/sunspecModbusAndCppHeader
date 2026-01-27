// Generated C++ Header for Model 134
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
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

// Group: curve
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
    static constexpr uint16_t ID = 134;
    Model134_Raw raw;

    uint16_t get_id() const override { return ID; }

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

    int16_t get_raw_Hz_SF() const {
        return be16toh_custom_s(raw.Hz_SF);
    }

    int16_t get_raw_W_SF() const {
        return be16toh_custom_s(raw.W_SF);
    }

    int16_t get_raw_RmpIncDec_SF() const {
        return be16toh_custom_s(raw.RmpIncDec_SF);
    }

    // Accessor for repeating group: curve
    static const Model134_curve_Raw* get_curve(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model134_curve_Raw*>(base_buffer + offset_bytes + index * sizeof(Model134_curve_Raw));
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
            std::cout << "    Hz_SF: " << be16toh_custom_s(raw.Hz_SF) << std::endl;
            std::cout << "    W_SF: " << be16toh_custom_s(raw.W_SF) << std::endl;
            std::cout << "    RmpIncDec_SF: " << be16toh_custom_s(raw.RmpIncDec_SF) << std::endl;
        const uint8_t* cur_ptr = base_addr + sizeof(Model134_Raw);
        {
            size_t rem_bytes = (get_raw_L() * 2 + 4) - (size_t)(cur_ptr - base_addr);
            size_t count = rem_bytes / sizeof(Model134_curve_Raw);
        // Loop for group: curve
        for (size_t i = 0; i < count; ++i) {
            if ((cur_ptr - base_addr) + sizeof(Model134_curve_Raw) > (size_t)(get_raw_L() * 2 + 4)) break;
            auto* grp = reinterpret_cast<const Model134_curve_Raw*>(cur_ptr);
            std::cout << "    Group curve[" << i << "]:" << std::endl;
            std::cout << "    ActPt: " << be16toh_custom(grp->ActPt) << std::endl;
            std::cout << "    Hz1: " << be16toh_custom(grp->Hz1) << std::endl;
            std::cout << "    W1: " << be16toh_custom_s(grp->W1) << std::endl;
            std::cout << "    Hz2: " << be16toh_custom(grp->Hz2) << std::endl;
            std::cout << "    W2: " << be16toh_custom_s(grp->W2) << std::endl;
            std::cout << "    Hz3: " << be16toh_custom(grp->Hz3) << std::endl;
            std::cout << "    W3: " << be16toh_custom_s(grp->W3) << std::endl;
            std::cout << "    Hz4: " << be16toh_custom(grp->Hz4) << std::endl;
            std::cout << "    W4: " << be16toh_custom_s(grp->W4) << std::endl;
            std::cout << "    Hz5: " << be16toh_custom(grp->Hz5) << std::endl;
            std::cout << "    W5: " << be16toh_custom_s(grp->W5) << std::endl;
            std::cout << "    Hz6: " << be16toh_custom(grp->Hz6) << std::endl;
            std::cout << "    W6: " << be16toh_custom_s(grp->W6) << std::endl;
            std::cout << "    Hz7: " << be16toh_custom(grp->Hz7) << std::endl;
            std::cout << "    W7: " << be16toh_custom_s(grp->W7) << std::endl;
            std::cout << "    Hz8: " << be16toh_custom(grp->Hz8) << std::endl;
            std::cout << "    W8: " << be16toh_custom_s(grp->W8) << std::endl;
            std::cout << "    Hz9: " << be16toh_custom(grp->Hz9) << std::endl;
            std::cout << "    W9: " << be16toh_custom_s(grp->W9) << std::endl;
            std::cout << "    Hz10: " << be16toh_custom(grp->Hz10) << std::endl;
            std::cout << "    W10: " << be16toh_custom_s(grp->W10) << std::endl;
            std::cout << "    Hz11: " << be16toh_custom(grp->Hz11) << std::endl;
            std::cout << "    W11: " << be16toh_custom_s(grp->W11) << std::endl;
            std::cout << "    Hz12: " << be16toh_custom(grp->Hz12) << std::endl;
            std::cout << "    W12: " << be16toh_custom_s(grp->W12) << std::endl;
            std::cout << "    Hz13: " << be16toh_custom(grp->Hz13) << std::endl;
            std::cout << "    W13: " << be16toh_custom_s(grp->W13) << std::endl;
            std::cout << "    Hz14: " << be16toh_custom(grp->Hz14) << std::endl;
            std::cout << "    W14: " << be16toh_custom_s(grp->W14) << std::endl;
            std::cout << "    Hz15: " << be16toh_custom(grp->Hz15) << std::endl;
            std::cout << "    W15: " << be16toh_custom_s(grp->W15) << std::endl;
            std::cout << "    Hz16: " << be16toh_custom(grp->Hz16) << std::endl;
            std::cout << "    W16: " << be16toh_custom_s(grp->W16) << std::endl;
            std::cout << "    Hz17: " << be16toh_custom(grp->Hz17) << std::endl;
            std::cout << "    W17: " << be16toh_custom_s(grp->W17) << std::endl;
            std::cout << "    Hz18: " << be16toh_custom(grp->Hz18) << std::endl;
            std::cout << "    W18: " << be16toh_custom_s(grp->W18) << std::endl;
            std::cout << "    Hz19: " << be16toh_custom(grp->Hz19) << std::endl;
            std::cout << "    W19: " << be16toh_custom_s(grp->W19) << std::endl;
            std::cout << "    Hz20: " << be16toh_custom(grp->Hz20) << std::endl;
            std::cout << "    W20: " << be16toh_custom_s(grp->W20) << std::endl;
            std::cout << "    CrvNam: ";
            for(size_t i=0; i<sizeof(grp->CrvNam) && grp->CrvNam[i] != 0; ++i) std::cout << grp->CrvNam[i];
            std::cout << std::endl;
            std::cout << "    RmpPT1Tms: " << be16toh_custom(grp->RmpPT1Tms) << std::endl;
            std::cout << "    RmpDecTmm: " << be16toh_custom(grp->RmpDecTmm) << std::endl;
            std::cout << "    RmpIncTmm: " << be16toh_custom(grp->RmpIncTmm) << std::endl;
            std::cout << "    RmpRsUp: " << be16toh_custom(grp->RmpRsUp) << std::endl;
            std::cout << "    SnptW: " << be16toh_custom(grp->SnptW) << std::endl;
            std::cout << "    WRef: " << be16toh_custom(grp->WRef) << std::endl;
            std::cout << "    WRefStrHz: " << be16toh_custom(grp->WRefStrHz) << std::endl;
            std::cout << "    WRefStopHz: " << be16toh_custom(grp->WRefStopHz) << std::endl;
            std::cout << "    ReadOnly: " << be16toh_custom(grp->ReadOnly) << std::endl;
            cur_ptr += sizeof(Model134_curve_Raw);
        }
        }
    }

};
