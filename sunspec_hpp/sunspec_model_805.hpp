// Generated C++ Header for Model 805
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model805_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t StrIdx;
    uint16_t ModIdx;
    uint16_t NCell;
    uint16_t SoC;
    uint16_t DoD;
    uint16_t SoH;
    uint32_t NCyc;
    uint16_t V;
    uint16_t CellVMax;
    uint16_t CellVMaxCell;
    uint16_t CellVMin;
    uint16_t CellVMinCell;
    uint16_t CellVAvg;
    int16_t CellTmpMax;
    uint16_t CellTmpMaxCell;
    int16_t CellTmpMin;
    uint16_t CellTmpMinCell;
    int16_t CellTmpAvg;
    uint16_t NCellBal;
    char SN[32];
    int16_t SoC_SF;
    int16_t SoH_SF;
    int16_t DoD_SF;
    int16_t V_SF;
    int16_t CellV_SF;
    int16_t Tmp_SF;
};
#pragma pack(pop)

// Group: lithium_ion_module_cell
#pragma pack(push, 1)
struct Model805_lithium_ion_module_cell_Raw {
    uint16_t CellV;
    int16_t CellTmp;
    uint32_t CellSt;
};
#pragma pack(pop)

class Model805 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 805;
    Model805_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model805_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_StrIdx() const {
        return be16toh_custom(raw.StrIdx);
    }

    uint16_t get_raw_ModIdx() const {
        return be16toh_custom(raw.ModIdx);
    }

    uint16_t get_raw_NCell() const {
        return be16toh_custom(raw.NCell);
    }

    float get_SoC() const {
        int16_t sf_val = be16toh_custom_s(raw.SoC_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.SoC);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_SoC() const {
        return be16toh_custom(raw.SoC);
    }

    float get_DoD() const {
        int16_t sf_val = be16toh_custom_s(raw.DoD_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.DoD);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_DoD() const {
        return be16toh_custom(raw.DoD);
    }

    float get_SoH() const {
        int16_t sf_val = be16toh_custom_s(raw.SoH_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.SoH);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_SoH() const {
        return be16toh_custom(raw.SoH);
    }

    float get_V() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.V);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_V() const {
        return be16toh_custom(raw.V);
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

    uint16_t get_raw_CellVMaxCell() const {
        return be16toh_custom(raw.CellVMaxCell);
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

    uint16_t get_raw_CellVMinCell() const {
        return be16toh_custom(raw.CellVMinCell);
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

    float get_CellTmpMax() const {
        int16_t sf_val = be16toh_custom_s(raw.Tmp_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.CellTmpMax);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_CellTmpMax() const {
        return be16toh_custom_s(raw.CellTmpMax);
    }

    uint16_t get_raw_CellTmpMaxCell() const {
        return be16toh_custom(raw.CellTmpMaxCell);
    }

    float get_CellTmpMin() const {
        int16_t sf_val = be16toh_custom_s(raw.Tmp_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.CellTmpMin);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_CellTmpMin() const {
        return be16toh_custom_s(raw.CellTmpMin);
    }

    uint16_t get_raw_CellTmpMinCell() const {
        return be16toh_custom(raw.CellTmpMinCell);
    }

    float get_CellTmpAvg() const {
        int16_t sf_val = be16toh_custom_s(raw.Tmp_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.CellTmpAvg);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_CellTmpAvg() const {
        return be16toh_custom_s(raw.CellTmpAvg);
    }

    uint16_t get_raw_NCellBal() const {
        return be16toh_custom(raw.NCellBal);
    }

    int16_t get_raw_SoC_SF() const {
        return be16toh_custom_s(raw.SoC_SF);
    }

    int16_t get_raw_SoH_SF() const {
        return be16toh_custom_s(raw.SoH_SF);
    }

    int16_t get_raw_DoD_SF() const {
        return be16toh_custom_s(raw.DoD_SF);
    }

    int16_t get_raw_V_SF() const {
        return be16toh_custom_s(raw.V_SF);
    }

    int16_t get_raw_CellV_SF() const {
        return be16toh_custom_s(raw.CellV_SF);
    }

    int16_t get_raw_Tmp_SF() const {
        return be16toh_custom_s(raw.Tmp_SF);
    }

    // Accessor for repeating group: lithium_ion_module_cell
    static const Model805_lithium_ion_module_cell_Raw* get_lithium_ion_module_cell(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model805_lithium_ion_module_cell_Raw*>(base_buffer + offset_bytes + index * sizeof(Model805_lithium_ion_module_cell_Raw));
    }

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
            std::cout << "    StrIdx: " << be16toh_custom(raw.StrIdx) << std::endl;
            std::cout << "    ModIdx: " << be16toh_custom(raw.ModIdx) << std::endl;
            std::cout << "    NCell: " << be16toh_custom(raw.NCell) << std::endl;
            std::cout << "    SoC: " << be16toh_custom(raw.SoC) << std::endl;
            std::cout << "    DoD: " << be16toh_custom(raw.DoD) << std::endl;
            std::cout << "    SoH: " << be16toh_custom(raw.SoH) << std::endl;
            std::cout << "    NCyc: " << be32toh_custom(raw.NCyc) << std::endl;
            std::cout << "    V: " << be16toh_custom(raw.V) << std::endl;
            std::cout << "    CellVMax: " << be16toh_custom(raw.CellVMax) << std::endl;
            std::cout << "    CellVMaxCell: " << be16toh_custom(raw.CellVMaxCell) << std::endl;
            std::cout << "    CellVMin: " << be16toh_custom(raw.CellVMin) << std::endl;
            std::cout << "    CellVMinCell: " << be16toh_custom(raw.CellVMinCell) << std::endl;
            std::cout << "    CellVAvg: " << be16toh_custom(raw.CellVAvg) << std::endl;
            std::cout << "    CellTmpMax: " << be16toh_custom_s(raw.CellTmpMax) << std::endl;
            std::cout << "    CellTmpMaxCell: " << be16toh_custom(raw.CellTmpMaxCell) << std::endl;
            std::cout << "    CellTmpMin: " << be16toh_custom_s(raw.CellTmpMin) << std::endl;
            std::cout << "    CellTmpMinCell: " << be16toh_custom(raw.CellTmpMinCell) << std::endl;
            std::cout << "    CellTmpAvg: " << be16toh_custom_s(raw.CellTmpAvg) << std::endl;
            std::cout << "    NCellBal: " << be16toh_custom(raw.NCellBal) << std::endl;
            std::cout << "    SN: ";
            for(size_t i=0; i<sizeof(raw.SN) && raw.SN[i] != 0; ++i) std::cout << raw.SN[i];
            std::cout << std::endl;
            std::cout << "    SoC_SF: " << be16toh_custom_s(raw.SoC_SF) << std::endl;
            std::cout << "    SoH_SF: " << be16toh_custom_s(raw.SoH_SF) << std::endl;
            std::cout << "    DoD_SF: " << be16toh_custom_s(raw.DoD_SF) << std::endl;
            std::cout << "    V_SF: " << be16toh_custom_s(raw.V_SF) << std::endl;
            std::cout << "    CellV_SF: " << be16toh_custom_s(raw.CellV_SF) << std::endl;
            std::cout << "    Tmp_SF: " << be16toh_custom_s(raw.Tmp_SF) << std::endl;
        const uint8_t* cur_ptr = base_addr + sizeof(Model805_Raw);
        {
            size_t rem_bytes = (get_raw_L() * 2 + 4) - (size_t)(cur_ptr - base_addr);
            size_t count = rem_bytes / sizeof(Model805_lithium_ion_module_cell_Raw);
        // Loop for group: lithium-ion-module-cell
        for (size_t i = 0; i < count; ++i) {
            if ((cur_ptr - base_addr) + sizeof(Model805_lithium_ion_module_cell_Raw) > (size_t)(get_raw_L() * 2 + 4)) break;
            auto* grp = reinterpret_cast<const Model805_lithium_ion_module_cell_Raw*>(cur_ptr);
            std::cout << "    Group lithium-ion-module-cell[" << i << "]:" << std::endl;
            std::cout << "    CellV: " << be16toh_custom(grp->CellV) << std::endl;
            std::cout << "    CellTmp: " << be16toh_custom_s(grp->CellTmp) << std::endl;
            std::cout << "    CellSt: " << be32toh_custom(grp->CellSt) << std::endl;
            cur_ptr += sizeof(Model805_lithium_ion_module_cell_Raw);
        }
        }
    }

};
