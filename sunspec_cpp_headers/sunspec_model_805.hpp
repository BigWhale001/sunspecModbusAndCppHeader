// Generated C++ Header for Model 805
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
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

class Model805 : public SunSpecModelBase {
public:
    Model805_Raw raw;

    uint16_t get_id() const override { return 805; }

    void from_buffer(const uint8_t* buffer) override {
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

};
