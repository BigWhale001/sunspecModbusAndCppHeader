// Generated C++ Header for Model 64410
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model64410_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t VMaxLim;
    uint16_t PMaxLim;
    uint16_t IMaxLim;
    uint16_t Mode;
    uint16_t Ena;
    uint16_t Reset;
    uint16_t VSet;
    uint16_t PSet;
    uint16_t ISet;
    uint16_t EN50530;
    uint16_t Vmpp;
    uint16_t Pmpp;
    uint16_t GSet;
    uint16_t VSlewRate;
    uint16_t PSlewRate;
    uint16_t ISlewRate;
    uint16_t EnaProf;
    uint16_t AdptProfReq;
    uint16_t AdptProfRslt;
    int32_t V;
    int32_t P;
    int32_t I;
    char Errors[64];
    uint16_t NPt;
    uint16_t NProf;
    int16_t W_SF;
    int16_t V_SF;
    int16_t A_SF;
    int16_t G_SF;
    int16_t Tms_SF;
    int16_t VSlew_SF;
    int16_t PSlew_SF;
    int16_t ISlew_SF;
    int16_t Pct_SF;
};
#pragma pack(pop)

// Group: Prof
#pragma pack(push, 1)
struct Model64410_Prof_Raw {
    uint16_t ActPt;
    uint32_t DeptRef;
};
#pragma pack(pop)

// Group: Prof_Pt
#pragma pack(push, 1)
struct Model64410_Prof_Pt_Raw {
    uint16_t Tms;
    uint16_t V;
    uint16_t P;
    uint16_t I;
    uint16_t G;
};
#pragma pack(pop)

class Model64410 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 64410;
    Model64410_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model64410_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    float get_VMaxLim() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.VMaxLim);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_VMaxLim() const {
        return be16toh_custom(raw.VMaxLim);
    }

    float get_PMaxLim() const {
        int16_t sf_val = be16toh_custom_s(raw.W_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.PMaxLim);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_PMaxLim() const {
        return be16toh_custom(raw.PMaxLim);
    }

    float get_IMaxLim() const {
        int16_t sf_val = be16toh_custom_s(raw.A_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.IMaxLim);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_IMaxLim() const {
        return be16toh_custom(raw.IMaxLim);
    }

    uint16_t get_raw_Mode() const {
        return be16toh_custom(raw.Mode);
    }

    uint16_t get_raw_Ena() const {
        return be16toh_custom(raw.Ena);
    }

    uint16_t get_raw_Reset() const {
        return be16toh_custom(raw.Reset);
    }

    float get_VSet() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.VSet);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_VSet() const {
        return be16toh_custom(raw.VSet);
    }

    float get_PSet() const {
        int16_t sf_val = be16toh_custom_s(raw.W_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.PSet);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_PSet() const {
        return be16toh_custom(raw.PSet);
    }

    float get_ISet() const {
        int16_t sf_val = be16toh_custom_s(raw.A_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.ISet);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_ISet() const {
        return be16toh_custom(raw.ISet);
    }

    uint16_t get_raw_EN50530() const {
        return be16toh_custom(raw.EN50530);
    }

    float get_Vmpp() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.Vmpp);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_Vmpp() const {
        return be16toh_custom(raw.Vmpp);
    }

    float get_Pmpp() const {
        int16_t sf_val = be16toh_custom_s(raw.W_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.Pmpp);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_Pmpp() const {
        return be16toh_custom(raw.Pmpp);
    }

    float get_GSet() const {
        int16_t sf_val = be16toh_custom_s(raw.G_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.GSet);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_GSet() const {
        return be16toh_custom(raw.GSet);
    }

    float get_VSlewRate() const {
        int16_t sf_val = be16toh_custom_s(raw.VSlew_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.VSlewRate);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_VSlewRate() const {
        return be16toh_custom(raw.VSlewRate);
    }

    float get_PSlewRate() const {
        int16_t sf_val = be16toh_custom_s(raw.PSlew_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.PSlewRate);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_PSlewRate() const {
        return be16toh_custom(raw.PSlewRate);
    }

    float get_ISlewRate() const {
        int16_t sf_val = be16toh_custom_s(raw.ISlew_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.ISlewRate);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_ISlewRate() const {
        return be16toh_custom(raw.ISlewRate);
    }

    uint16_t get_raw_EnaProf() const {
        return be16toh_custom(raw.EnaProf);
    }

    uint16_t get_raw_AdptProfReq() const {
        return be16toh_custom(raw.AdptProfReq);
    }

    uint16_t get_raw_AdptProfRslt() const {
        return be16toh_custom(raw.AdptProfRslt);
    }

    uint16_t get_raw_NPt() const {
        return be16toh_custom(raw.NPt);
    }

    uint16_t get_raw_NProf() const {
        return be16toh_custom(raw.NProf);
    }

    int16_t get_raw_W_SF() const {
        return be16toh_custom_s(raw.W_SF);
    }

    int16_t get_raw_V_SF() const {
        return be16toh_custom_s(raw.V_SF);
    }

    int16_t get_raw_A_SF() const {
        return be16toh_custom_s(raw.A_SF);
    }

    int16_t get_raw_G_SF() const {
        return be16toh_custom_s(raw.G_SF);
    }

    int16_t get_raw_Tms_SF() const {
        return be16toh_custom_s(raw.Tms_SF);
    }

    int16_t get_raw_VSlew_SF() const {
        return be16toh_custom_s(raw.VSlew_SF);
    }

    int16_t get_raw_PSlew_SF() const {
        return be16toh_custom_s(raw.PSlew_SF);
    }

    int16_t get_raw_ISlew_SF() const {
        return be16toh_custom_s(raw.ISlew_SF);
    }

    int16_t get_raw_Pct_SF() const {
        return be16toh_custom_s(raw.Pct_SF);
    }

    // Accessor for repeating group: Prof
    static const Model64410_Prof_Raw* get_Prof(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model64410_Prof_Raw*>(base_buffer + offset_bytes + index * sizeof(Model64410_Prof_Raw));
    }

    // Accessor for repeating group: Prof_Pt
    static const Model64410_Prof_Pt_Raw* get_Prof_Pt(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model64410_Prof_Pt_Raw*>(base_buffer + offset_bytes + index * sizeof(Model64410_Prof_Pt_Raw));
    }

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
            std::cout << "    VMaxLim: " << be16toh_custom(raw.VMaxLim) << std::endl;
            std::cout << "    PMaxLim: " << be16toh_custom(raw.PMaxLim) << std::endl;
            std::cout << "    IMaxLim: " << be16toh_custom(raw.IMaxLim) << std::endl;
            std::cout << "    Mode: " << be16toh_custom(raw.Mode) << std::endl;
            std::cout << "    Ena: " << be16toh_custom(raw.Ena) << std::endl;
            std::cout << "    Reset: " << be16toh_custom(raw.Reset) << std::endl;
            std::cout << "    VSet: " << be16toh_custom(raw.VSet) << std::endl;
            std::cout << "    PSet: " << be16toh_custom(raw.PSet) << std::endl;
            std::cout << "    ISet: " << be16toh_custom(raw.ISet) << std::endl;
            std::cout << "    EN50530: " << be16toh_custom(raw.EN50530) << std::endl;
            std::cout << "    Vmpp: " << be16toh_custom(raw.Vmpp) << std::endl;
            std::cout << "    Pmpp: " << be16toh_custom(raw.Pmpp) << std::endl;
            std::cout << "    GSet: " << be16toh_custom(raw.GSet) << std::endl;
            std::cout << "    VSlewRate: " << be16toh_custom(raw.VSlewRate) << std::endl;
            std::cout << "    PSlewRate: " << be16toh_custom(raw.PSlewRate) << std::endl;
            std::cout << "    ISlewRate: " << be16toh_custom(raw.ISlewRate) << std::endl;
            std::cout << "    EnaProf: " << be16toh_custom(raw.EnaProf) << std::endl;
            std::cout << "    AdptProfReq: " << be16toh_custom(raw.AdptProfReq) << std::endl;
            std::cout << "    AdptProfRslt: " << be16toh_custom(raw.AdptProfRslt) << std::endl;
            std::cout << "    V: " << be32toh_custom(raw.V) << std::endl;
            std::cout << "    P: " << be32toh_custom(raw.P) << std::endl;
            std::cout << "    I: " << be32toh_custom(raw.I) << std::endl;
            std::cout << "    Errors: ";
            for(size_t i=0; i<sizeof(raw.Errors) && raw.Errors[i] != 0; ++i) std::cout << raw.Errors[i];
            std::cout << std::endl;
            std::cout << "    NPt: " << be16toh_custom(raw.NPt) << std::endl;
            std::cout << "    NProf: " << be16toh_custom(raw.NProf) << std::endl;
            std::cout << "    W_SF: " << be16toh_custom_s(raw.W_SF) << std::endl;
            std::cout << "    V_SF: " << be16toh_custom_s(raw.V_SF) << std::endl;
            std::cout << "    A_SF: " << be16toh_custom_s(raw.A_SF) << std::endl;
            std::cout << "    G_SF: " << be16toh_custom_s(raw.G_SF) << std::endl;
            std::cout << "    Tms_SF: " << be16toh_custom_s(raw.Tms_SF) << std::endl;
            std::cout << "    VSlew_SF: " << be16toh_custom_s(raw.VSlew_SF) << std::endl;
            std::cout << "    PSlew_SF: " << be16toh_custom_s(raw.PSlew_SF) << std::endl;
            std::cout << "    ISlew_SF: " << be16toh_custom_s(raw.ISlew_SF) << std::endl;
            std::cout << "    Pct_SF: " << be16toh_custom_s(raw.Pct_SF) << std::endl;
        const uint8_t* cur_ptr = base_addr + sizeof(Model64410_Raw);
        // Loop for group: Prof
        for (size_t i = 0; i < be16toh_custom(raw.NProf); ++i) {
            if ((cur_ptr - base_addr) + sizeof(Model64410_Prof_Raw) > (size_t)(get_raw_L() * 2 + 4)) break;
            auto* grp = reinterpret_cast<const Model64410_Prof_Raw*>(cur_ptr);
            std::cout << "    Group Prof[" << i << "]:" << std::endl;
            std::cout << "    ActPt: " << be16toh_custom(grp->ActPt) << std::endl;
            std::cout << "    DeptRef: " << be32toh_custom(grp->DeptRef) << std::endl;
            cur_ptr += sizeof(Model64410_Prof_Raw);
        // Loop for group: Pt
        for (size_t i = 0; i < be16toh_custom(raw.NPt); ++i) {
            if ((cur_ptr - base_addr) + sizeof(Model64410_Prof_Pt_Raw) > (size_t)(get_raw_L() * 2 + 4)) break;
            auto* grp = reinterpret_cast<const Model64410_Prof_Pt_Raw*>(cur_ptr);
            std::cout << "    Group Pt[" << i << "]:" << std::endl;
            std::cout << "    Tms: " << be16toh_custom(grp->Tms) << std::endl;
            std::cout << "    V: " << be16toh_custom(grp->V) << std::endl;
            std::cout << "    P: " << be16toh_custom(grp->P) << std::endl;
            std::cout << "    I: " << be16toh_custom(grp->I) << std::endl;
            std::cout << "    G: " << be16toh_custom(grp->G) << std::endl;
            cur_ptr += sizeof(Model64410_Prof_Pt_Raw);
        }
        }
    }

};
