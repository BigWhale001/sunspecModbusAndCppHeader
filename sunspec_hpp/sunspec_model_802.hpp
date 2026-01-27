// Generated C++ Header for Model 802
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
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
    static constexpr uint16_t ID = 802;
    Model802_Raw raw;

    uint16_t get_id() const override { return ID; }

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
        return be16toh_custom(raw.ChaSt);
    }

    uint16_t get_raw_LocRemCtl() const {
        return be16toh_custom(raw.LocRemCtl);
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
        return be16toh_custom(raw.Typ);
    }

    uint16_t get_raw_State() const {
        return be16toh_custom(raw.State);
    }

    uint16_t get_raw_StateVnd() const {
        return be16toh_custom(raw.StateVnd);
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
        return be16toh_custom(raw.ReqInvState);
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
        return be16toh_custom(raw.SetOp);
    }

    uint16_t get_raw_SetInvState() const {
        return be16toh_custom(raw.SetInvState);
    }

    int16_t get_raw_AHRtg_SF() const {
        return be16toh_custom_s(raw.AHRtg_SF);
    }

    int16_t get_raw_WHRtg_SF() const {
        return be16toh_custom_s(raw.WHRtg_SF);
    }

    int16_t get_raw_WChaDisChaMax_SF() const {
        return be16toh_custom_s(raw.WChaDisChaMax_SF);
    }

    int16_t get_raw_DisChaRte_SF() const {
        return be16toh_custom_s(raw.DisChaRte_SF);
    }

    int16_t get_raw_SoC_SF() const {
        return be16toh_custom_s(raw.SoC_SF);
    }

    int16_t get_raw_DoD_SF() const {
        return be16toh_custom_s(raw.DoD_SF);
    }

    int16_t get_raw_SoH_SF() const {
        return be16toh_custom_s(raw.SoH_SF);
    }

    int16_t get_raw_V_SF() const {
        return be16toh_custom_s(raw.V_SF);
    }

    int16_t get_raw_CellV_SF() const {
        return be16toh_custom_s(raw.CellV_SF);
    }

    int16_t get_raw_A_SF() const {
        return be16toh_custom_s(raw.A_SF);
    }

    int16_t get_raw_AMax_SF() const {
        return be16toh_custom_s(raw.AMax_SF);
    }

    int16_t get_raw_W_SF() const {
        return be16toh_custom_s(raw.W_SF);
    }

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
            std::cout << "    AHRtg: " << be16toh_custom(raw.AHRtg) << std::endl;
            std::cout << "    WHRtg: " << be16toh_custom(raw.WHRtg) << std::endl;
            std::cout << "    WChaRteMax: " << be16toh_custom(raw.WChaRteMax) << std::endl;
            std::cout << "    WDisChaRteMax: " << be16toh_custom(raw.WDisChaRteMax) << std::endl;
            std::cout << "    DisChaRte: " << be16toh_custom(raw.DisChaRte) << std::endl;
            std::cout << "    SoCMax: " << be16toh_custom(raw.SoCMax) << std::endl;
            std::cout << "    SoCMin: " << be16toh_custom(raw.SoCMin) << std::endl;
            std::cout << "    SocRsvMax: " << be16toh_custom(raw.SocRsvMax) << std::endl;
            std::cout << "    SoCRsvMin: " << be16toh_custom(raw.SoCRsvMin) << std::endl;
            std::cout << "    SoC: " << be16toh_custom(raw.SoC) << std::endl;
            std::cout << "    DoD: " << be16toh_custom(raw.DoD) << std::endl;
            std::cout << "    SoH: " << be16toh_custom(raw.SoH) << std::endl;
            std::cout << "    NCyc: " << be32toh_custom(raw.NCyc) << std::endl;
            std::cout << "    ChaSt: " << be16toh_custom(raw.ChaSt) << std::endl;
            std::cout << "    LocRemCtl: " << be16toh_custom(raw.LocRemCtl) << std::endl;
            std::cout << "    Hb: " << be16toh_custom(raw.Hb) << std::endl;
            std::cout << "    CtrlHb: " << be16toh_custom(raw.CtrlHb) << std::endl;
            std::cout << "    AlmRst: " << be16toh_custom(raw.AlmRst) << std::endl;
            std::cout << "    Typ: " << be16toh_custom(raw.Typ) << std::endl;
            std::cout << "    State: " << be16toh_custom(raw.State) << std::endl;
            std::cout << "    StateVnd: " << be16toh_custom(raw.StateVnd) << std::endl;
            std::cout << "    WarrDt: " << be32toh_custom(raw.WarrDt) << std::endl;
            std::cout << "    Evt1: " << be32toh_custom(raw.Evt1) << std::endl;
            std::cout << "    Evt2: " << be32toh_custom(raw.Evt2) << std::endl;
            std::cout << "    EvtVnd1: " << be32toh_custom(raw.EvtVnd1) << std::endl;
            std::cout << "    EvtVnd2: " << be32toh_custom(raw.EvtVnd2) << std::endl;
            std::cout << "    V: " << be16toh_custom(raw.V) << std::endl;
            std::cout << "    VMax: " << be16toh_custom(raw.VMax) << std::endl;
            std::cout << "    VMin: " << be16toh_custom(raw.VMin) << std::endl;
            std::cout << "    CellVMax: " << be16toh_custom(raw.CellVMax) << std::endl;
            std::cout << "    CellVMaxStr: " << be16toh_custom(raw.CellVMaxStr) << std::endl;
            std::cout << "    CellVMaxMod: " << be16toh_custom(raw.CellVMaxMod) << std::endl;
            std::cout << "    CellVMin: " << be16toh_custom(raw.CellVMin) << std::endl;
            std::cout << "    CellVMinStr: " << be16toh_custom(raw.CellVMinStr) << std::endl;
            std::cout << "    CellVMinMod: " << be16toh_custom(raw.CellVMinMod) << std::endl;
            std::cout << "    CellVAvg: " << be16toh_custom(raw.CellVAvg) << std::endl;
            std::cout << "    A: " << be16toh_custom_s(raw.A) << std::endl;
            std::cout << "    AChaMax: " << be16toh_custom(raw.AChaMax) << std::endl;
            std::cout << "    ADisChaMax: " << be16toh_custom(raw.ADisChaMax) << std::endl;
            std::cout << "    W: " << be16toh_custom_s(raw.W) << std::endl;
            std::cout << "    ReqInvState: " << be16toh_custom(raw.ReqInvState) << std::endl;
            std::cout << "    ReqW: " << be16toh_custom_s(raw.ReqW) << std::endl;
            std::cout << "    SetOp: " << be16toh_custom(raw.SetOp) << std::endl;
            std::cout << "    SetInvState: " << be16toh_custom(raw.SetInvState) << std::endl;
            std::cout << "    AHRtg_SF: " << be16toh_custom_s(raw.AHRtg_SF) << std::endl;
            std::cout << "    WHRtg_SF: " << be16toh_custom_s(raw.WHRtg_SF) << std::endl;
            std::cout << "    WChaDisChaMax_SF: " << be16toh_custom_s(raw.WChaDisChaMax_SF) << std::endl;
            std::cout << "    DisChaRte_SF: " << be16toh_custom_s(raw.DisChaRte_SF) << std::endl;
            std::cout << "    SoC_SF: " << be16toh_custom_s(raw.SoC_SF) << std::endl;
            std::cout << "    DoD_SF: " << be16toh_custom_s(raw.DoD_SF) << std::endl;
            std::cout << "    SoH_SF: " << be16toh_custom_s(raw.SoH_SF) << std::endl;
            std::cout << "    V_SF: " << be16toh_custom_s(raw.V_SF) << std::endl;
            std::cout << "    CellV_SF: " << be16toh_custom_s(raw.CellV_SF) << std::endl;
            std::cout << "    A_SF: " << be16toh_custom_s(raw.A_SF) << std::endl;
            std::cout << "    AMax_SF: " << be16toh_custom_s(raw.AMax_SF) << std::endl;
            std::cout << "    W_SF: " << be16toh_custom_s(raw.W_SF) << std::endl;
        const uint8_t* cur_ptr = base_addr + sizeof(Model802_Raw);
    }

};
