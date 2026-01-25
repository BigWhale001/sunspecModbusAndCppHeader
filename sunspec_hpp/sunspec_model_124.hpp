// Generated C++ Header for Model 124
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model124_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t WChaMax;
    uint16_t WChaGra;
    uint16_t WDisChaGra;
    uint16_t StorCtl_Mod;
    uint16_t VAChaMax;
    uint16_t MinRsvPct;
    uint16_t ChaState;
    uint16_t StorAval;
    uint16_t InBatV;
    uint16_t ChaSt;
    int16_t OutWRte;
    int16_t InWRte;
    uint16_t InOutWRte_WinTms;
    uint16_t InOutWRte_RvrtTms;
    uint16_t InOutWRte_RmpTms;
    uint16_t ChaGriSet;
    int16_t WChaMax_SF;
    int16_t WChaDisChaGra_SF;
    int16_t VAChaMax_SF;
    int16_t MinRsvPct_SF;
    int16_t ChaState_SF;
    int16_t StorAval_SF;
    int16_t InBatV_SF;
    int16_t InOutWRte_SF;
};
#pragma pack(pop)

class Model124 : public SunSpecModelBase {
public:
    Model124_Raw raw;

    uint16_t get_id() const override { return 124; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model124_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    float get_WChaMax() const {
        int16_t sf_val = be16toh_custom_s(raw.WChaMax_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.WChaMax);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_WChaMax() const {
        return be16toh_custom(raw.WChaMax);
    }

    float get_WChaGra() const {
        int16_t sf_val = be16toh_custom_s(raw.WChaDisChaGra_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.WChaGra);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_WChaGra() const {
        return be16toh_custom(raw.WChaGra);
    }

    float get_WDisChaGra() const {
        int16_t sf_val = be16toh_custom_s(raw.WChaDisChaGra_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.WDisChaGra);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_WDisChaGra() const {
        return be16toh_custom(raw.WDisChaGra);
    }

    uint16_t get_raw_StorCtl_Mod() const {
        return be16toh_custom(raw.StorCtl_Mod);
    }

    float get_VAChaMax() const {
        int16_t sf_val = be16toh_custom_s(raw.VAChaMax_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.VAChaMax);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_VAChaMax() const {
        return be16toh_custom(raw.VAChaMax);
    }

    float get_MinRsvPct() const {
        int16_t sf_val = be16toh_custom_s(raw.MinRsvPct_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.MinRsvPct);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_MinRsvPct() const {
        return be16toh_custom(raw.MinRsvPct);
    }

    float get_ChaState() const {
        int16_t sf_val = be16toh_custom_s(raw.ChaState_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.ChaState);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_ChaState() const {
        return be16toh_custom(raw.ChaState);
    }

    float get_StorAval() const {
        int16_t sf_val = be16toh_custom_s(raw.StorAval_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.StorAval);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_StorAval() const {
        return be16toh_custom(raw.StorAval);
    }

    float get_InBatV() const {
        int16_t sf_val = be16toh_custom_s(raw.InBatV_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.InBatV);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_InBatV() const {
        return be16toh_custom(raw.InBatV);
    }

    uint16_t get_raw_ChaSt() const {
        return be16toh_custom(raw.ChaSt);
    }

    float get_OutWRte() const {
        int16_t sf_val = be16toh_custom_s(raw.InOutWRte_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.OutWRte);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_OutWRte() const {
        return be16toh_custom_s(raw.OutWRte);
    }

    float get_InWRte() const {
        int16_t sf_val = be16toh_custom_s(raw.InOutWRte_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.InWRte);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_InWRte() const {
        return be16toh_custom_s(raw.InWRte);
    }

    uint16_t get_raw_InOutWRte_WinTms() const {
        return be16toh_custom(raw.InOutWRte_WinTms);
    }

    uint16_t get_raw_InOutWRte_RvrtTms() const {
        return be16toh_custom(raw.InOutWRte_RvrtTms);
    }

    uint16_t get_raw_InOutWRte_RmpTms() const {
        return be16toh_custom(raw.InOutWRte_RmpTms);
    }

    uint16_t get_raw_ChaGriSet() const {
        return be16toh_custom(raw.ChaGriSet);
    }

    int16_t get_raw_WChaMax_SF() const {
        return be16toh_custom_s(raw.WChaMax_SF);
    }

    int16_t get_raw_WChaDisChaGra_SF() const {
        return be16toh_custom_s(raw.WChaDisChaGra_SF);
    }

    int16_t get_raw_VAChaMax_SF() const {
        return be16toh_custom_s(raw.VAChaMax_SF);
    }

    int16_t get_raw_MinRsvPct_SF() const {
        return be16toh_custom_s(raw.MinRsvPct_SF);
    }

    int16_t get_raw_ChaState_SF() const {
        return be16toh_custom_s(raw.ChaState_SF);
    }

    int16_t get_raw_StorAval_SF() const {
        return be16toh_custom_s(raw.StorAval_SF);
    }

    int16_t get_raw_InBatV_SF() const {
        return be16toh_custom_s(raw.InBatV_SF);
    }

    int16_t get_raw_InOutWRte_SF() const {
        return be16toh_custom_s(raw.InOutWRte_SF);
    }

};
