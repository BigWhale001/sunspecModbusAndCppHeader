// Generated C++ Header for Model 101
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model101_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t A;
    uint16_t AphA;
    uint16_t AphB;
    uint16_t AphC;
    int16_t A_SF;
    uint16_t PPVphAB;
    uint16_t PPVphBC;
    uint16_t PPVphCA;
    uint16_t PhVphA;
    uint16_t PhVphB;
    uint16_t PhVphC;
    int16_t V_SF;
    int16_t W;
    int16_t W_SF;
    uint16_t Hz;
    int16_t Hz_SF;
    int16_t VA;
    int16_t VA_SF;
    int16_t VAr;
    int16_t VAr_SF;
    int16_t PF;
    int16_t PF_SF;
    uint32_t WH;
    int16_t WH_SF;
    uint16_t DCA;
    int16_t DCA_SF;
    uint16_t DCV;
    int16_t DCV_SF;
    int16_t DCW;
    int16_t DCW_SF;
    int16_t TmpCab;
    int16_t TmpSnk;
    int16_t TmpTrns;
    int16_t TmpOt;
    int16_t Tmp_SF;
    uint16_t St;
    uint16_t StVnd;
    uint32_t Evt1;
    uint32_t Evt2;
    uint32_t EvtVnd1;
    uint32_t EvtVnd2;
    uint32_t EvtVnd3;
    uint32_t EvtVnd4;
};
#pragma pack(pop)

class Model101 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 101;
    Model101_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model101_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    float get_A() const {
        int16_t sf_val = be16toh_custom_s(raw.A_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.A);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_A() const {
        return be16toh_custom(raw.A);
    }

    float get_AphA() const {
        int16_t sf_val = be16toh_custom_s(raw.A_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.AphA);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_AphA() const {
        return be16toh_custom(raw.AphA);
    }

    float get_AphB() const {
        int16_t sf_val = be16toh_custom_s(raw.A_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.AphB);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_AphB() const {
        return be16toh_custom(raw.AphB);
    }

    float get_AphC() const {
        int16_t sf_val = be16toh_custom_s(raw.A_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.AphC);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_AphC() const {
        return be16toh_custom(raw.AphC);
    }

    int16_t get_raw_A_SF() const {
        return be16toh_custom_s(raw.A_SF);
    }

    float get_PPVphAB() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.PPVphAB);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_PPVphAB() const {
        return be16toh_custom(raw.PPVphAB);
    }

    float get_PPVphBC() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.PPVphBC);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_PPVphBC() const {
        return be16toh_custom(raw.PPVphBC);
    }

    float get_PPVphCA() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.PPVphCA);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_PPVphCA() const {
        return be16toh_custom(raw.PPVphCA);
    }

    float get_PhVphA() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.PhVphA);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_PhVphA() const {
        return be16toh_custom(raw.PhVphA);
    }

    float get_PhVphB() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.PhVphB);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_PhVphB() const {
        return be16toh_custom(raw.PhVphB);
    }

    float get_PhVphC() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.PhVphC);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_PhVphC() const {
        return be16toh_custom(raw.PhVphC);
    }

    int16_t get_raw_V_SF() const {
        return be16toh_custom_s(raw.V_SF);
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

    int16_t get_raw_W_SF() const {
        return be16toh_custom_s(raw.W_SF);
    }

    float get_Hz() const {
        int16_t sf_val = be16toh_custom_s(raw.Hz_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.Hz);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_Hz() const {
        return be16toh_custom(raw.Hz);
    }

    int16_t get_raw_Hz_SF() const {
        return be16toh_custom_s(raw.Hz_SF);
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

    int16_t get_raw_VA_SF() const {
        return be16toh_custom_s(raw.VA_SF);
    }

    float get_VAr() const {
        int16_t sf_val = be16toh_custom_s(raw.VAr_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.VAr);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_VAr() const {
        return be16toh_custom_s(raw.VAr);
    }

    int16_t get_raw_VAr_SF() const {
        return be16toh_custom_s(raw.VAr_SF);
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

    int16_t get_raw_PF_SF() const {
        return be16toh_custom_s(raw.PF_SF);
    }

    int16_t get_raw_WH_SF() const {
        return be16toh_custom_s(raw.WH_SF);
    }

    float get_DCA() const {
        int16_t sf_val = be16toh_custom_s(raw.DCA_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.DCA);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_DCA() const {
        return be16toh_custom(raw.DCA);
    }

    int16_t get_raw_DCA_SF() const {
        return be16toh_custom_s(raw.DCA_SF);
    }

    float get_DCV() const {
        int16_t sf_val = be16toh_custom_s(raw.DCV_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.DCV);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_DCV() const {
        return be16toh_custom(raw.DCV);
    }

    int16_t get_raw_DCV_SF() const {
        return be16toh_custom_s(raw.DCV_SF);
    }

    float get_DCW() const {
        int16_t sf_val = be16toh_custom_s(raw.DCW_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.DCW);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_DCW() const {
        return be16toh_custom_s(raw.DCW);
    }

    int16_t get_raw_DCW_SF() const {
        return be16toh_custom_s(raw.DCW_SF);
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

    float get_TmpOt() const {
        int16_t sf_val = be16toh_custom_s(raw.Tmp_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.TmpOt);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_TmpOt() const {
        return be16toh_custom_s(raw.TmpOt);
    }

    int16_t get_raw_Tmp_SF() const {
        return be16toh_custom_s(raw.Tmp_SF);
    }

    uint16_t get_raw_St() const {
        return be16toh_custom(raw.St);
    }

    uint16_t get_raw_StVnd() const {
        return be16toh_custom(raw.StVnd);
    }

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
            std::cout << "    A: " << be16toh_custom(raw.A) << std::endl;
            std::cout << "    AphA: " << be16toh_custom(raw.AphA) << std::endl;
            std::cout << "    AphB: " << be16toh_custom(raw.AphB) << std::endl;
            std::cout << "    AphC: " << be16toh_custom(raw.AphC) << std::endl;
            std::cout << "    A_SF: " << be16toh_custom_s(raw.A_SF) << std::endl;
            std::cout << "    PPVphAB: " << be16toh_custom(raw.PPVphAB) << std::endl;
            std::cout << "    PPVphBC: " << be16toh_custom(raw.PPVphBC) << std::endl;
            std::cout << "    PPVphCA: " << be16toh_custom(raw.PPVphCA) << std::endl;
            std::cout << "    PhVphA: " << be16toh_custom(raw.PhVphA) << std::endl;
            std::cout << "    PhVphB: " << be16toh_custom(raw.PhVphB) << std::endl;
            std::cout << "    PhVphC: " << be16toh_custom(raw.PhVphC) << std::endl;
            std::cout << "    V_SF: " << be16toh_custom_s(raw.V_SF) << std::endl;
            std::cout << "    W: " << be16toh_custom_s(raw.W) << std::endl;
            std::cout << "    W_SF: " << be16toh_custom_s(raw.W_SF) << std::endl;
            std::cout << "    Hz: " << be16toh_custom(raw.Hz) << std::endl;
            std::cout << "    Hz_SF: " << be16toh_custom_s(raw.Hz_SF) << std::endl;
            std::cout << "    VA: " << be16toh_custom_s(raw.VA) << std::endl;
            std::cout << "    VA_SF: " << be16toh_custom_s(raw.VA_SF) << std::endl;
            std::cout << "    VAr: " << be16toh_custom_s(raw.VAr) << std::endl;
            std::cout << "    VAr_SF: " << be16toh_custom_s(raw.VAr_SF) << std::endl;
            std::cout << "    PF: " << be16toh_custom_s(raw.PF) << std::endl;
            std::cout << "    PF_SF: " << be16toh_custom_s(raw.PF_SF) << std::endl;
            std::cout << "    WH: " << be32toh_custom(raw.WH) << std::endl;
            std::cout << "    WH_SF: " << be16toh_custom_s(raw.WH_SF) << std::endl;
            std::cout << "    DCA: " << be16toh_custom(raw.DCA) << std::endl;
            std::cout << "    DCA_SF: " << be16toh_custom_s(raw.DCA_SF) << std::endl;
            std::cout << "    DCV: " << be16toh_custom(raw.DCV) << std::endl;
            std::cout << "    DCV_SF: " << be16toh_custom_s(raw.DCV_SF) << std::endl;
            std::cout << "    DCW: " << be16toh_custom_s(raw.DCW) << std::endl;
            std::cout << "    DCW_SF: " << be16toh_custom_s(raw.DCW_SF) << std::endl;
            std::cout << "    TmpCab: " << be16toh_custom_s(raw.TmpCab) << std::endl;
            std::cout << "    TmpSnk: " << be16toh_custom_s(raw.TmpSnk) << std::endl;
            std::cout << "    TmpTrns: " << be16toh_custom_s(raw.TmpTrns) << std::endl;
            std::cout << "    TmpOt: " << be16toh_custom_s(raw.TmpOt) << std::endl;
            std::cout << "    Tmp_SF: " << be16toh_custom_s(raw.Tmp_SF) << std::endl;
            std::cout << "    St: " << be16toh_custom(raw.St) << std::endl;
            std::cout << "    StVnd: " << be16toh_custom(raw.StVnd) << std::endl;
            std::cout << "    Evt1: " << be32toh_custom(raw.Evt1) << std::endl;
            std::cout << "    Evt2: " << be32toh_custom(raw.Evt2) << std::endl;
            std::cout << "    EvtVnd1: " << be32toh_custom(raw.EvtVnd1) << std::endl;
            std::cout << "    EvtVnd2: " << be32toh_custom(raw.EvtVnd2) << std::endl;
            std::cout << "    EvtVnd3: " << be32toh_custom(raw.EvtVnd3) << std::endl;
            std::cout << "    EvtVnd4: " << be32toh_custom(raw.EvtVnd4) << std::endl;
        const uint8_t* cur_ptr = base_addr + sizeof(Model101_Raw);
    }

};
