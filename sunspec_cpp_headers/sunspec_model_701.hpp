// Generated C++ Header for Model 701
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model701_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t ACType;
    uint16_t St;
    uint16_t InvSt;
    uint16_t ConnSt;
    uint32_t Alrm;
    uint32_t DERMode;
    int16_t W;
    int16_t VA;
    int16_t Var;
    int16_t PF;
    int16_t A;
    uint16_t LLV;
    uint16_t LNV;
    uint32_t Hz;
    uint16_t TotWhInj[4];
    uint16_t TotWhAbs[4];
    uint16_t TotVarhInj[4];
    uint16_t TotVarhAbs[4];
    int16_t TmpAmb;
    int16_t TmpCab;
    int16_t TmpSnk;
    int16_t TmpTrns;
    int16_t TmpSw;
    int16_t TmpOt;
    int16_t WL1;
    int16_t VAL1;
    int16_t VarL1;
    int16_t PFL1;
    int16_t AL1;
    uint16_t VL1L2;
    uint16_t VL1;
    uint16_t TotWhInjL1[4];
    uint16_t TotWhAbsL1[4];
    uint16_t TotVarhInjL1[4];
    uint16_t TotVarhAbsL1[4];
    int16_t WL2;
    int16_t VAL2;
    int16_t VarL2;
    int16_t PFL2;
    int16_t AL2;
    uint16_t VL2L3;
    uint16_t VL2;
    uint16_t TotWhInjL2[4];
    uint16_t TotWhAbsL2[4];
    uint16_t TotVarhInjL2[4];
    uint16_t TotVarhAbsL2[4];
    int16_t WL3;
    int16_t VAL3;
    int16_t VarL3;
    int16_t PFL3;
    int16_t AL3;
    uint16_t VL3L1;
    uint16_t VL3;
    uint16_t TotWhInjL3[4];
    uint16_t TotWhAbsL3[4];
    uint16_t TotVarhInjL3[4];
    uint16_t TotVarhAbsL3[4];
    uint16_t ThrotPct;
    uint32_t ThrotSrc;
    int16_t A_SF;
    int16_t V_SF;
    int16_t Hz_SF;
    int16_t W_SF;
    int16_t PF_SF;
    int16_t VA_SF;
    int16_t Var_SF;
    int16_t TotWh_SF;
    int16_t TotVarh_SF;
    int16_t Tmp_SF;
    char MnAlrmInfo[64];
};
#pragma pack(pop)

class Model701 : public SunSpecModelBase {
public:
    Model701_Raw raw;

    uint16_t get_id() const override { return 701; }

    void from_buffer(const uint8_t* buffer) override {
        std::memcpy(&raw, buffer, sizeof(Model701_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_ACType() const {
        return be16toh_custom_s(raw.ACType);
    }

    uint16_t get_raw_St() const {
        return be16toh_custom_s(raw.St);
    }

    uint16_t get_raw_InvSt() const {
        return be16toh_custom_s(raw.InvSt);
    }

    uint16_t get_raw_ConnSt() const {
        return be16toh_custom_s(raw.ConnSt);
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

    float get_VA() const {
        int16_t sf_val = be16toh_custom_s(raw.VA_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.VA);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_VA() const {
        return be16toh_custom_s(raw.VA);
    }

    float get_Var() const {
        int16_t sf_val = be16toh_custom_s(raw.Var_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.Var);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_Var() const {
        return be16toh_custom_s(raw.Var);
    }

    float get_PF() const {
        int16_t sf_val = be16toh_custom_s(raw.PF_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.PF);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_PF() const {
        return be16toh_custom_s(raw.PF);
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

    float get_LLV() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.LLV);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_LLV() const {
        return be16toh_custom(raw.LLV);
    }

    float get_LNV() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.LNV);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_LNV() const {
        return be16toh_custom(raw.LNV);
    }

    float get_TmpAmb() const {
        int16_t sf_val = be16toh_custom_s(raw.Tmp_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.TmpAmb);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_TmpAmb() const {
        return be16toh_custom_s(raw.TmpAmb);
    }

    float get_TmpCab() const {
        int16_t sf_val = be16toh_custom_s(raw.Tmp_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.TmpCab);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_TmpCab() const {
        return be16toh_custom_s(raw.TmpCab);
    }

    float get_TmpSnk() const {
        int16_t sf_val = be16toh_custom_s(raw.Tmp_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.TmpSnk);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_TmpSnk() const {
        return be16toh_custom_s(raw.TmpSnk);
    }

    float get_TmpTrns() const {
        int16_t sf_val = be16toh_custom_s(raw.Tmp_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.TmpTrns);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_TmpTrns() const {
        return be16toh_custom_s(raw.TmpTrns);
    }

    float get_TmpSw() const {
        int16_t sf_val = be16toh_custom_s(raw.Tmp_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.TmpSw);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_TmpSw() const {
        return be16toh_custom_s(raw.TmpSw);
    }

    float get_TmpOt() const {
        int16_t sf_val = be16toh_custom_s(raw.Tmp_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.TmpOt);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_TmpOt() const {
        return be16toh_custom_s(raw.TmpOt);
    }

    float get_WL1() const {
        int16_t sf_val = be16toh_custom_s(raw.W_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.WL1);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_WL1() const {
        return be16toh_custom_s(raw.WL1);
    }

    float get_VAL1() const {
        int16_t sf_val = be16toh_custom_s(raw.VA_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.VAL1);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_VAL1() const {
        return be16toh_custom_s(raw.VAL1);
    }

    float get_VarL1() const {
        int16_t sf_val = be16toh_custom_s(raw.Var_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.VarL1);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_VarL1() const {
        return be16toh_custom_s(raw.VarL1);
    }

    float get_PFL1() const {
        int16_t sf_val = be16toh_custom_s(raw.PF_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.PFL1);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_PFL1() const {
        return be16toh_custom_s(raw.PFL1);
    }

    float get_AL1() const {
        int16_t sf_val = be16toh_custom_s(raw.A_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.AL1);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_AL1() const {
        return be16toh_custom_s(raw.AL1);
    }

    float get_VL1L2() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.VL1L2);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_VL1L2() const {
        return be16toh_custom(raw.VL1L2);
    }

    float get_VL1() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.VL1);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_VL1() const {
        return be16toh_custom(raw.VL1);
    }

    float get_WL2() const {
        int16_t sf_val = be16toh_custom_s(raw.W_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.WL2);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_WL2() const {
        return be16toh_custom_s(raw.WL2);
    }

    float get_VAL2() const {
        int16_t sf_val = be16toh_custom_s(raw.VA_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.VAL2);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_VAL2() const {
        return be16toh_custom_s(raw.VAL2);
    }

    float get_VarL2() const {
        int16_t sf_val = be16toh_custom_s(raw.Var_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.VarL2);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_VarL2() const {
        return be16toh_custom_s(raw.VarL2);
    }

    float get_PFL2() const {
        int16_t sf_val = be16toh_custom_s(raw.PF_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.PFL2);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_PFL2() const {
        return be16toh_custom_s(raw.PFL2);
    }

    float get_AL2() const {
        int16_t sf_val = be16toh_custom_s(raw.A_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.AL2);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_AL2() const {
        return be16toh_custom_s(raw.AL2);
    }

    float get_VL2L3() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.VL2L3);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_VL2L3() const {
        return be16toh_custom(raw.VL2L3);
    }

    float get_VL2() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.VL2);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_VL2() const {
        return be16toh_custom(raw.VL2);
    }

    float get_WL3() const {
        int16_t sf_val = be16toh_custom_s(raw.W_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.WL3);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_WL3() const {
        return be16toh_custom_s(raw.WL3);
    }

    float get_VAL3() const {
        int16_t sf_val = be16toh_custom_s(raw.VA_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.VAL3);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_VAL3() const {
        return be16toh_custom_s(raw.VAL3);
    }

    float get_VarL3() const {
        int16_t sf_val = be16toh_custom_s(raw.Var_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.VarL3);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_VarL3() const {
        return be16toh_custom_s(raw.VarL3);
    }

    float get_PFL3() const {
        int16_t sf_val = be16toh_custom_s(raw.PF_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.PFL3);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_PFL3() const {
        return be16toh_custom_s(raw.PFL3);
    }

    float get_AL3() const {
        int16_t sf_val = be16toh_custom_s(raw.A_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.AL3);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_AL3() const {
        return be16toh_custom_s(raw.AL3);
    }

    float get_VL3L1() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.VL3L1);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_VL3L1() const {
        return be16toh_custom(raw.VL3L1);
    }

    float get_VL3() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.VL3);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_VL3() const {
        return be16toh_custom(raw.VL3);
    }

    uint16_t get_raw_ThrotPct() const {
        return be16toh_custom(raw.ThrotPct);
    }

};
