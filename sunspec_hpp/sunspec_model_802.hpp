// Generated C++ Header for Model 802
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model802_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t AHRtg;
    uint16_t WHRtg;
    uint16_t WChaRteMax;
    uint16_t WDisChaRteMax;
    uint16_t DisChaRte;
    uint16_t SoCMax;
    uint16_t SoCMin;
    uint16_t SocRsvMax;
    uint16_t SoCRsvMin;
    uint16_t SoC;
    uint16_t DoD;
    uint16_t SoH;
    uint32_t NCyc;
    uint16_t ChaSt;
    uint16_t LocRemCtl;
    uint16_t Hb;
    uint16_t CtrlHb;
    uint16_t AlmRst;
    uint16_t Typ;
    uint16_t State;
    uint16_t StateVnd;
    uint32_t WarrDt;
    uint32_t Evt1;
    uint32_t Evt2;
    uint32_t EvtVnd1;
    uint32_t EvtVnd2;
    uint16_t V;
    uint16_t VMax;
    uint16_t VMin;
    uint16_t CellVMax;
    uint16_t CellVMaxStr;
    uint16_t CellVMaxMod;
    uint16_t CellVMin;
    uint16_t CellVMinStr;
    uint16_t CellVMinMod;
    uint16_t CellVAvg;
    int16_t A;
    uint16_t AChaMax;
    uint16_t ADisChaMax;
    int16_t W;
    uint16_t ReqInvState;
    int16_t ReqW;
    uint16_t SetOp;
    uint16_t SetInvState;
    int16_t AHRtg_SF;
    int16_t WHRtg_SF;
    int16_t WChaDisChaMax_SF;
    int16_t DisChaRte_SF;
    int16_t SoC_SF;
    int16_t DoD_SF;
    int16_t SoH_SF;
    int16_t V_SF;
    int16_t CellV_SF;
    int16_t A_SF;
    int16_t AMax_SF;
    int16_t W_SF;
};
#pragma pack(pop)

class Model802 : public SunSpecModelBase {
public:
    Model802_Raw raw;

    uint16_t get_id() const override { return 802; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model802_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    float get_AHRtg() const {
        int16_t sf_val = be16toh_custom_s(raw.AHRtg_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.AHRtg);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_AHRtg() const {
        return be16toh_custom(raw.AHRtg);
    }

    float get_WHRtg() const {
        int16_t sf_val = be16toh_custom_s(raw.WHRtg_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.WHRtg);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_WHRtg() const {
        return be16toh_custom(raw.WHRtg);
    }

    float get_WChaRteMax() const {
        int16_t sf_val = be16toh_custom_s(raw.WChaDisChaMax_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.WChaRteMax);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_WChaRteMax() const {
        return be16toh_custom(raw.WChaRteMax);
    }

    float get_WDisChaRteMax() const {
        int16_t sf_val = be16toh_custom_s(raw.WChaDisChaMax_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.WDisChaRteMax);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_WDisChaRteMax() const {
        return be16toh_custom(raw.WDisChaRteMax);
    }

    float get_DisChaRte() const {
        int16_t sf_val = be16toh_custom_s(raw.DisChaRte_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.DisChaRte);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_DisChaRte() const {
        return be16toh_custom(raw.DisChaRte);
    }

    float get_SoCMax() const {
        int16_t sf_val = be16toh_custom_s(raw.SoC_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.SoCMax);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_SoCMax() const {
        return be16toh_custom(raw.SoCMax);
    }

    float get_SoCMin() const {
        int16_t sf_val = be16toh_custom_s(raw.SoC_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.SoCMin);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_SoCMin() const {
        return be16toh_custom(raw.SoCMin);
    }

    float get_SocRsvMax() const {
        int16_t sf_val = be16toh_custom_s(raw.SoC_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.SocRsvMax);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_SocRsvMax() const {
        return be16toh_custom(raw.SocRsvMax);
    }

    float get_SoCRsvMin() const {
        int16_t sf_val = be16toh_custom_s(raw.SoC_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.SoCRsvMin);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_SoCRsvMin() const {
        return be16toh_custom(raw.SoCRsvMin);
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

    uint16_t get_raw_ChaSt() const {
        return be16toh_custom_s(raw.ChaSt);
    }

    uint16_t get_raw_LocRemCtl() const {
        return be16toh_custom_s(raw.LocRemCtl);
    }

    uint16_t get_raw_Hb() const {
        return be16toh_custom(raw.Hb);
    }

    uint16_t get_raw_CtrlHb() const {
        return be16toh_custom(raw.CtrlHb);
    }

    uint16_t get_raw_AlmRst() const {
        return be16toh_custom(raw.AlmRst);
    }

    uint16_t get_raw_Typ() const {
        return be16toh_custom_s(raw.Typ);
    }

    uint16_t get_raw_State() const {
        return be16toh_custom_s(raw.State);
    }

    uint16_t get_raw_StateVnd() const {
        return be16toh_custom_s(raw.StateVnd);
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

    float get_VMax() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.VMax);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_VMax() const {
        return be16toh_custom(raw.VMax);
    }

    float get_VMin() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.VMin);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_VMin() const {
        return be16toh_custom(raw.VMin);
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

    uint16_t get_raw_CellVMaxStr() const {
        return be16toh_custom(raw.CellVMaxStr);
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

    uint16_t get_raw_CellVMinStr() const {
        return be16toh_custom(raw.CellVMinStr);
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

    float get_A() const {
        int16_t sf_val = be16toh_custom_s(raw.A_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.A);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_A() const {
        return be16toh_custom_s(raw.A);
    }

    float get_AChaMax() const {
        int16_t sf_val = be16toh_custom_s(raw.AMax_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.AChaMax);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_AChaMax() const {
        return be16toh_custom(raw.AChaMax);
    }

    float get_ADisChaMax() const {
        int16_t sf_val = be16toh_custom_s(raw.AMax_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.ADisChaMax);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_ADisChaMax() const {
        return be16toh_custom(raw.ADisChaMax);
    }

    float get_W() const {
        int16_t sf_val = be16toh_custom_s(raw.W_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.W);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_W() const {
        return be16toh_custom_s(raw.W);
    }

    uint16_t get_raw_ReqInvState() const {
        return be16toh_custom_s(raw.ReqInvState);
    }

    float get_ReqW() const {
        int16_t sf_val = be16toh_custom_s(raw.W_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.ReqW);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_ReqW() const {
        return be16toh_custom_s(raw.ReqW);
    }

    uint16_t get_raw_SetOp() const {
        return be16toh_custom_s(raw.SetOp);
    }

    uint16_t get_raw_SetInvState() const {
        return be16toh_custom_s(raw.SetInvState);
    }

};
