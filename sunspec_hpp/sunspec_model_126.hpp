// Generated C++ Header for Model 126
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model126_Raw {
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

// Group: curve
#pragma pack(push, 1)
struct Model126_curve_Raw {
    uint16_t ActPt;
    uint16_t DeptRef;
    uint16_t V1;
    int16_t VAr1;
    uint16_t V2;
    int16_t VAr2;
    uint16_t V3;
    int16_t VAr3;
    uint16_t V4;
    int16_t VAr4;
    uint16_t V5;
    int16_t VAr5;
    uint16_t V6;
    int16_t VAr6;
    uint16_t V7;
    int16_t VAr7;
    uint16_t V8;
    int16_t VAr8;
    uint16_t V9;
    int16_t VAr9;
    uint16_t V10;
    int16_t VAr10;
    uint16_t V11;
    int16_t VAr11;
    uint16_t V12;
    int16_t VAr12;
    uint16_t V13;
    int16_t VAr13;
    uint16_t V14;
    int16_t VAr14;
    uint16_t V15;
    int16_t VAr15;
    uint16_t V16;
    int16_t VAr16;
    uint16_t V17;
    int16_t VAr17;
    uint16_t V18;
    int16_t VAr18;
    uint16_t V19;
    int16_t VAr19;
    uint16_t V20;
    int16_t VAr20;
    char CrvNam[16];
    uint16_t RmpTms;
    uint16_t RmpDecTmm;
    uint16_t RmpIncTmm;
    uint16_t ReadOnly;
};
#pragma pack(pop)

class Model126 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 126;
    Model126_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model126_Raw));
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
    static const Model126_curve_Raw* get_curve(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model126_curve_Raw*>(base_buffer + offset_bytes + index * sizeof(Model126_curve_Raw));
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
            std::cout << "    V_SF: " << be16toh_custom_s(raw.V_SF) << std::endl;
            std::cout << "    DeptRef_SF: " << be16toh_custom_s(raw.DeptRef_SF) << std::endl;
            std::cout << "    RmpIncDec_SF: " << be16toh_custom_s(raw.RmpIncDec_SF) << std::endl;
        const uint8_t* cur_ptr = base_addr + sizeof(Model126_Raw);
        {
            size_t rem_bytes = (get_raw_L() * 2 + 4) - (size_t)(cur_ptr - base_addr);
            size_t count = rem_bytes / sizeof(Model126_curve_Raw);
        // Loop for group: curve
        for (size_t i = 0; i < count; ++i) {
            if ((cur_ptr - base_addr) + sizeof(Model126_curve_Raw) > (size_t)(get_raw_L() * 2 + 4)) break;
            auto* grp = reinterpret_cast<const Model126_curve_Raw*>(cur_ptr);
            std::cout << "    Group curve[" << i << "]:" << std::endl;
            std::cout << "    ActPt: " << be16toh_custom(grp->ActPt) << std::endl;
            std::cout << "    DeptRef: " << be16toh_custom(grp->DeptRef) << std::endl;
            std::cout << "    V1: " << be16toh_custom(grp->V1) << std::endl;
            std::cout << "    VAr1: " << be16toh_custom_s(grp->VAr1) << std::endl;
            std::cout << "    V2: " << be16toh_custom(grp->V2) << std::endl;
            std::cout << "    VAr2: " << be16toh_custom_s(grp->VAr2) << std::endl;
            std::cout << "    V3: " << be16toh_custom(grp->V3) << std::endl;
            std::cout << "    VAr3: " << be16toh_custom_s(grp->VAr3) << std::endl;
            std::cout << "    V4: " << be16toh_custom(grp->V4) << std::endl;
            std::cout << "    VAr4: " << be16toh_custom_s(grp->VAr4) << std::endl;
            std::cout << "    V5: " << be16toh_custom(grp->V5) << std::endl;
            std::cout << "    VAr5: " << be16toh_custom_s(grp->VAr5) << std::endl;
            std::cout << "    V6: " << be16toh_custom(grp->V6) << std::endl;
            std::cout << "    VAr6: " << be16toh_custom_s(grp->VAr6) << std::endl;
            std::cout << "    V7: " << be16toh_custom(grp->V7) << std::endl;
            std::cout << "    VAr7: " << be16toh_custom_s(grp->VAr7) << std::endl;
            std::cout << "    V8: " << be16toh_custom(grp->V8) << std::endl;
            std::cout << "    VAr8: " << be16toh_custom_s(grp->VAr8) << std::endl;
            std::cout << "    V9: " << be16toh_custom(grp->V9) << std::endl;
            std::cout << "    VAr9: " << be16toh_custom_s(grp->VAr9) << std::endl;
            std::cout << "    V10: " << be16toh_custom(grp->V10) << std::endl;
            std::cout << "    VAr10: " << be16toh_custom_s(grp->VAr10) << std::endl;
            std::cout << "    V11: " << be16toh_custom(grp->V11) << std::endl;
            std::cout << "    VAr11: " << be16toh_custom_s(grp->VAr11) << std::endl;
            std::cout << "    V12: " << be16toh_custom(grp->V12) << std::endl;
            std::cout << "    VAr12: " << be16toh_custom_s(grp->VAr12) << std::endl;
            std::cout << "    V13: " << be16toh_custom(grp->V13) << std::endl;
            std::cout << "    VAr13: " << be16toh_custom_s(grp->VAr13) << std::endl;
            std::cout << "    V14: " << be16toh_custom(grp->V14) << std::endl;
            std::cout << "    VAr14: " << be16toh_custom_s(grp->VAr14) << std::endl;
            std::cout << "    V15: " << be16toh_custom(grp->V15) << std::endl;
            std::cout << "    VAr15: " << be16toh_custom_s(grp->VAr15) << std::endl;
            std::cout << "    V16: " << be16toh_custom(grp->V16) << std::endl;
            std::cout << "    VAr16: " << be16toh_custom_s(grp->VAr16) << std::endl;
            std::cout << "    V17: " << be16toh_custom(grp->V17) << std::endl;
            std::cout << "    VAr17: " << be16toh_custom_s(grp->VAr17) << std::endl;
            std::cout << "    V18: " << be16toh_custom(grp->V18) << std::endl;
            std::cout << "    VAr18: " << be16toh_custom_s(grp->VAr18) << std::endl;
            std::cout << "    V19: " << be16toh_custom(grp->V19) << std::endl;
            std::cout << "    VAr19: " << be16toh_custom_s(grp->VAr19) << std::endl;
            std::cout << "    V20: " << be16toh_custom(grp->V20) << std::endl;
            std::cout << "    VAr20: " << be16toh_custom_s(grp->VAr20) << std::endl;
            std::cout << "    CrvNam: ";
            for(size_t i=0; i<sizeof(grp->CrvNam) && grp->CrvNam[i] != 0; ++i) std::cout << grp->CrvNam[i];
            std::cout << std::endl;
            std::cout << "    RmpTms: " << be16toh_custom(grp->RmpTms) << std::endl;
            std::cout << "    RmpDecTmm: " << be16toh_custom(grp->RmpDecTmm) << std::endl;
            std::cout << "    RmpIncTmm: " << be16toh_custom(grp->RmpIncTmm) << std::endl;
            std::cout << "    ReadOnly: " << be16toh_custom(grp->ReadOnly) << std::endl;
            cur_ptr += sizeof(Model126_curve_Raw);
        }
        }
    }

};
