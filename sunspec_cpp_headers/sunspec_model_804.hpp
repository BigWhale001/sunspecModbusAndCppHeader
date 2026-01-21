// Generated C++ Header for Model 804
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model804_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t Idx;
    uint16_t NMod;
    uint32_t St;
    uint16_t ConFail;
    uint16_t NCellBal;
    uint16_t SoC;
    uint16_t DoD;
    uint32_t NCyc;
    uint16_t SoH;
    int16_t A;
    uint16_t V;
    uint16_t CellVMax;
    uint16_t CellVMaxMod;
    uint16_t CellVMin;
    uint16_t CellVMinMod;
    uint16_t CellVAvg;
    int16_t ModTmpMax;
    uint16_t ModTmpMaxMod;
    int16_t ModTmpMin;
    uint16_t ModTmpMinMod;
    int16_t ModTmpAvg;
    uint16_t pad_25;
    uint32_t ConSt;
    uint32_t Evt1;
    uint32_t Evt2;
    uint32_t EvtVnd1;
    uint32_t EvtVnd2;
    uint16_t SetEna;
    uint16_t SetCon;
    int16_t SoC_SF;
    int16_t SoH_SF;
    int16_t DoD_SF;
    int16_t A_SF;
    int16_t V_SF;
    int16_t CellV_SF;
    int16_t ModTmp_SF;
    uint16_t pad_45;
    uint16_t pad_46;
    uint16_t pad_47;
};
#pragma pack(pop)

class Model804 : public SunSpecModelBase {
public:
    Model804_Raw raw;

    uint16_t get_id() const override { return 804; }

    void from_buffer(const uint8_t* buffer) override {
        std::memcpy(&raw, buffer, sizeof(Model804_Raw));
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

    uint16_t get_raw_ConFail() const {
        return be16toh_custom_s(raw.ConFail);
    }

    uint16_t get_raw_NCellBal() const {
        return be16toh_custom(raw.NCellBal);
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

    float get_A() const {
        int16_t sf_val = be16toh_custom_s(raw.A_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.A);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_A() const {
        return be16toh_custom_s(raw.A);
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

    uint16_t get_raw_CellVMaxMod() const {
        return be16toh_custom(raw.CellVMaxMod);
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

    float get_CellVAvg() const {
        int16_t sf_val = be16toh_custom_s(raw.CellV_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.CellVAvg);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_CellVAvg() const {
        return be16toh_custom(raw.CellVAvg);
    }

    float get_ModTmpMax() const {
        int16_t sf_val = be16toh_custom_s(raw.ModTmp_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.ModTmpMax);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_ModTmpMax() const {
        return be16toh_custom_s(raw.ModTmpMax);
    }

    uint16_t get_raw_ModTmpMaxMod() const {
        return be16toh_custom(raw.ModTmpMaxMod);
    }

    float get_ModTmpMin() const {
        int16_t sf_val = be16toh_custom_s(raw.ModTmp_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.ModTmpMin);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_ModTmpMin() const {
        return be16toh_custom_s(raw.ModTmpMin);
    }

    uint16_t get_raw_ModTmpMinMod() const {
        return be16toh_custom(raw.ModTmpMinMod);
    }

    float get_ModTmpAvg() const {
        int16_t sf_val = be16toh_custom_s(raw.ModTmp_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.ModTmpAvg);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_ModTmpAvg() const {
        return be16toh_custom_s(raw.ModTmpAvg);
    }

    uint16_t get_raw_SetEna() const {
        return be16toh_custom_s(raw.SetEna);
    }

    uint16_t get_raw_SetCon() const {
        return be16toh_custom_s(raw.SetCon);
    }

};
