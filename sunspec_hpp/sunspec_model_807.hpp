// Generated C++ Header for Model 807
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model807_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t Idx;
    uint16_t NMod;
    uint16_t NModCon;
    uint16_t ModVMax;
    uint16_t ModVMaxMod;
    uint16_t ModVMin;
    uint16_t ModVMinMod;
    uint16_t ModVAvg;
    uint16_t CellVMax;
    uint16_t CellVMaxMod;
    uint16_t CellVMaxStk;
    uint16_t CellVMin;
    uint16_t CellVMinMod;
    uint16_t CellVMinStk;
    uint16_t CellVAvg;
    int16_t TmpMax;
    uint16_t TmpMaxMod;
    int16_t TmpMin;
    uint16_t TmpMinMod;
    int16_t TmpAvg;
    uint32_t Evt1;
    uint32_t Evt2;
    uint32_t EvtVnd1;
    uint32_t EvtVnd2;
    int16_t ModV_SF;
    int16_t CellV_SF;
    int16_t Tmp_SF;
    int16_t SoC_SF;
    int16_t OCV_SF;
    uint16_t pad_35;
};
#pragma pack(pop)

// Group: module
#pragma pack(push, 1)
struct Model807_module_Raw {
    uint16_t ModIdx;
    uint16_t ModNStk;
    uint32_t ModSt;
    uint16_t ModSoC;
    uint16_t ModOCV;
    uint16_t ModV;
    uint16_t ModCellVMax;
    uint16_t ModCellVMaxCell;
    uint16_t ModCellVMin;
    uint16_t ModCellVMinCell;
    uint16_t ModCellVAvg;
    uint16_t ModAnoTmp;
    uint16_t ModCatTmp;
    uint32_t ModConSt;
    uint32_t ModEvt1;
    uint32_t ModEvt2;
    uint16_t ModConFail;
    uint16_t ModSetEna;
    uint16_t ModSetCon;
    uint16_t ModDisRsn;
};
#pragma pack(pop)

class Model807 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 807;
    Model807_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model807_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_Idx() const {
        return be16toh_custom(raw.Idx);
    }

    uint16_t get_raw_NMod() const {
        return be16toh_custom(raw.NMod);
    }

    uint16_t get_raw_NModCon() const {
        return be16toh_custom(raw.NModCon);
    }

    float get_ModVMax() const {
        int16_t sf_val = be16toh_custom_s(raw.ModV_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.ModVMax);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_ModVMax() const {
        return be16toh_custom(raw.ModVMax);
    }

    uint16_t get_raw_ModVMaxMod() const {
        return be16toh_custom(raw.ModVMaxMod);
    }

    float get_ModVMin() const {
        int16_t sf_val = be16toh_custom_s(raw.ModV_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.ModVMin);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_ModVMin() const {
        return be16toh_custom(raw.ModVMin);
    }

    uint16_t get_raw_ModVMinMod() const {
        return be16toh_custom(raw.ModVMinMod);
    }

    float get_ModVAvg() const {
        int16_t sf_val = be16toh_custom_s(raw.ModV_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.ModVAvg);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_ModVAvg() const {
        return be16toh_custom(raw.ModVAvg);
    }

    float get_CellVMax() const {
        int16_t sf_val = be16toh_custom_s(raw.CellV_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.CellVMax);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_CellVMax() const {
        return be16toh_custom(raw.CellVMax);
    }

    uint16_t get_raw_CellVMaxMod() const {
        return be16toh_custom(raw.CellVMaxMod);
    }

    uint16_t get_raw_CellVMaxStk() const {
        return be16toh_custom(raw.CellVMaxStk);
    }

    float get_CellVMin() const {
        int16_t sf_val = be16toh_custom_s(raw.CellV_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.CellVMin);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_CellVMin() const {
        return be16toh_custom(raw.CellVMin);
    }

    uint16_t get_raw_CellVMinMod() const {
        return be16toh_custom(raw.CellVMinMod);
    }

    uint16_t get_raw_CellVMinStk() const {
        return be16toh_custom(raw.CellVMinStk);
    }

    float get_CellVAvg() const {
        int16_t sf_val = be16toh_custom_s(raw.CellV_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.CellVAvg);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_CellVAvg() const {
        return be16toh_custom(raw.CellVAvg);
    }

    float get_TmpMax() const {
        int16_t sf_val = be16toh_custom_s(raw.Tmp_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.TmpMax);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_TmpMax() const {
        return be16toh_custom_s(raw.TmpMax);
    }

    uint16_t get_raw_TmpMaxMod() const {
        return be16toh_custom(raw.TmpMaxMod);
    }

    float get_TmpMin() const {
        int16_t sf_val = be16toh_custom_s(raw.Tmp_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.TmpMin);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_TmpMin() const {
        return be16toh_custom_s(raw.TmpMin);
    }

    uint16_t get_raw_TmpMinMod() const {
        return be16toh_custom(raw.TmpMinMod);
    }

    float get_TmpAvg() const {
        int16_t sf_val = be16toh_custom_s(raw.Tmp_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.TmpAvg);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_TmpAvg() const {
        return be16toh_custom_s(raw.TmpAvg);
    }

    int16_t get_raw_ModV_SF() const {
        return be16toh_custom_s(raw.ModV_SF);
    }

    int16_t get_raw_CellV_SF() const {
        return be16toh_custom_s(raw.CellV_SF);
    }

    int16_t get_raw_Tmp_SF() const {
        return be16toh_custom_s(raw.Tmp_SF);
    }

    int16_t get_raw_SoC_SF() const {
        return be16toh_custom_s(raw.SoC_SF);
    }

    int16_t get_raw_OCV_SF() const {
        return be16toh_custom_s(raw.OCV_SF);
    }

    // Accessor for repeating group: module
    static const Model807_module_Raw* get_module(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model807_module_Raw*>(base_buffer + offset_bytes + index * sizeof(Model807_module_Raw));
    }

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
            std::cout << "    Idx: " << be16toh_custom(raw.Idx) << std::endl;
            std::cout << "    NMod: " << be16toh_custom(raw.NMod) << std::endl;
            std::cout << "    NModCon: " << be16toh_custom(raw.NModCon) << std::endl;
            std::cout << "    ModVMax: " << be16toh_custom(raw.ModVMax) << std::endl;
            std::cout << "    ModVMaxMod: " << be16toh_custom(raw.ModVMaxMod) << std::endl;
            std::cout << "    ModVMin: " << be16toh_custom(raw.ModVMin) << std::endl;
            std::cout << "    ModVMinMod: " << be16toh_custom(raw.ModVMinMod) << std::endl;
            std::cout << "    ModVAvg: " << be16toh_custom(raw.ModVAvg) << std::endl;
            std::cout << "    CellVMax: " << be16toh_custom(raw.CellVMax) << std::endl;
            std::cout << "    CellVMaxMod: " << be16toh_custom(raw.CellVMaxMod) << std::endl;
            std::cout << "    CellVMaxStk: " << be16toh_custom(raw.CellVMaxStk) << std::endl;
            std::cout << "    CellVMin: " << be16toh_custom(raw.CellVMin) << std::endl;
            std::cout << "    CellVMinMod: " << be16toh_custom(raw.CellVMinMod) << std::endl;
            std::cout << "    CellVMinStk: " << be16toh_custom(raw.CellVMinStk) << std::endl;
            std::cout << "    CellVAvg: " << be16toh_custom(raw.CellVAvg) << std::endl;
            std::cout << "    TmpMax: " << be16toh_custom_s(raw.TmpMax) << std::endl;
            std::cout << "    TmpMaxMod: " << be16toh_custom(raw.TmpMaxMod) << std::endl;
            std::cout << "    TmpMin: " << be16toh_custom_s(raw.TmpMin) << std::endl;
            std::cout << "    TmpMinMod: " << be16toh_custom(raw.TmpMinMod) << std::endl;
            std::cout << "    TmpAvg: " << be16toh_custom_s(raw.TmpAvg) << std::endl;
            std::cout << "    Evt1: " << be32toh_custom(raw.Evt1) << std::endl;
            std::cout << "    Evt2: " << be32toh_custom(raw.Evt2) << std::endl;
            std::cout << "    EvtVnd1: " << be32toh_custom(raw.EvtVnd1) << std::endl;
            std::cout << "    EvtVnd2: " << be32toh_custom(raw.EvtVnd2) << std::endl;
            std::cout << "    ModV_SF: " << be16toh_custom_s(raw.ModV_SF) << std::endl;
            std::cout << "    CellV_SF: " << be16toh_custom_s(raw.CellV_SF) << std::endl;
            std::cout << "    Tmp_SF: " << be16toh_custom_s(raw.Tmp_SF) << std::endl;
            std::cout << "    SoC_SF: " << be16toh_custom_s(raw.SoC_SF) << std::endl;
            std::cout << "    OCV_SF: " << be16toh_custom_s(raw.OCV_SF) << std::endl;
        const uint8_t* cur_ptr = base_addr + sizeof(Model807_Raw);
        {
            size_t rem_bytes = (get_raw_L() * 2 + 4) - (size_t)(cur_ptr - base_addr);
            size_t count = rem_bytes / sizeof(Model807_module_Raw);
        // Loop for group: module
        for (size_t i = 0; i < count; ++i) {
            if ((cur_ptr - base_addr) + sizeof(Model807_module_Raw) > (size_t)(get_raw_L() * 2 + 4)) break;
            auto* grp = reinterpret_cast<const Model807_module_Raw*>(cur_ptr);
            std::cout << "    Group module[" << i << "]:" << std::endl;
            std::cout << "    ModIdx: " << be16toh_custom(grp->ModIdx) << std::endl;
            std::cout << "    ModNStk: " << be16toh_custom(grp->ModNStk) << std::endl;
            std::cout << "    ModSt: " << be32toh_custom(grp->ModSt) << std::endl;
            std::cout << "    ModSoC: " << be16toh_custom(grp->ModSoC) << std::endl;
            std::cout << "    ModOCV: " << be16toh_custom(grp->ModOCV) << std::endl;
            std::cout << "    ModV: " << be16toh_custom(grp->ModV) << std::endl;
            std::cout << "    ModCellVMax: " << be16toh_custom(grp->ModCellVMax) << std::endl;
            std::cout << "    ModCellVMaxCell: " << be16toh_custom(grp->ModCellVMaxCell) << std::endl;
            std::cout << "    ModCellVMin: " << be16toh_custom(grp->ModCellVMin) << std::endl;
            std::cout << "    ModCellVMinCell: " << be16toh_custom(grp->ModCellVMinCell) << std::endl;
            std::cout << "    ModCellVAvg: " << be16toh_custom(grp->ModCellVAvg) << std::endl;
            std::cout << "    ModAnoTmp: " << be16toh_custom(grp->ModAnoTmp) << std::endl;
            std::cout << "    ModCatTmp: " << be16toh_custom(grp->ModCatTmp) << std::endl;
            std::cout << "    ModConSt: " << be32toh_custom(grp->ModConSt) << std::endl;
            std::cout << "    ModEvt1: " << be32toh_custom(grp->ModEvt1) << std::endl;
            std::cout << "    ModEvt2: " << be32toh_custom(grp->ModEvt2) << std::endl;
            std::cout << "    ModConFail: " << be16toh_custom(grp->ModConFail) << std::endl;
            std::cout << "    ModSetEna: " << be16toh_custom(grp->ModSetEna) << std::endl;
            std::cout << "    ModSetCon: " << be16toh_custom(grp->ModSetCon) << std::endl;
            std::cout << "    ModDisRsn: " << be16toh_custom(grp->ModDisRsn) << std::endl;
            cur_ptr += sizeof(Model807_module_Raw);
        }
        }
    }

};
