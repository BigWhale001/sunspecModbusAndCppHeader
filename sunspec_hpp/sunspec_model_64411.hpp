// Generated C++ Header for Model 64411
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model64411_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t Phases;
    uint16_t PhaseAngle;
    uint16_t VNom;
    uint16_t VMax;
    uint16_t IMax;
    uint16_t Freq;
    uint16_t Output;
    uint16_t Relay;
    uint16_t Regen;
    uint16_t VSet;
    uint16_t VSetA;
    uint16_t VSetB;
    uint16_t VSetC;
    uint16_t FreqSlew;
    uint16_t VSlew;
    int32_t VA;
    int32_t VB;
    int32_t VC;
    int32_t Hz;
    int32_t IA;
    int32_t IB;
    int32_t IC;
    char VHarA[300];
    char VHarB[300];
    char VHarC[300];
    char IHarA[300];
    char IHarB[300];
    char IHarC[300];
    char IIntHarA[300];
    char IIntHarB[300];
    char IIntHarC[300];
    uint16_t VThdA;
    uint16_t VThdB;
    uint16_t VThdC;
    uint16_t IThdA;
    uint16_t IThdB;
    uint16_t IThdC;
    uint16_t EnaProf;
    uint16_t ProfRslt;
    uint16_t NProf;
    uint16_t NPt;
    int16_t V_SF;
    int16_t A_SF;
    int16_t Tms_SF;
    int16_t Hz_SF;
    int16_t HzSlew_SF;
    int16_t VSlew_SF;
    int16_t THD_SF;
};
#pragma pack(pop)

// Group: Prof
#pragma pack(push, 1)
struct Model64411_Prof_Raw {
    char Name[64];
    uint16_t ActPt;
};
#pragma pack(pop)

// Group: Prof_Pt
#pragma pack(push, 1)
struct Model64411_Prof_Pt_Raw {
    uint16_t Tms;
    uint16_t VA;
    uint16_t VB;
    uint16_t VC;
    uint16_t Hz;
    uint16_t PhaseAngleA;
    uint16_t PhaseAngleB;
    uint16_t PhaseAngleC;
};
#pragma pack(pop)

class Model64411 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 64411;
    Model64411_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model64411_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_Phases() const {
        return be16toh_custom(raw.Phases);
    }

    uint16_t get_raw_PhaseAngle() const {
        return be16toh_custom(raw.PhaseAngle);
    }

    float get_VNom() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.VNom);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_VNom() const {
        return be16toh_custom(raw.VNom);
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

    float get_IMax() const {
        int16_t sf_val = be16toh_custom_s(raw.A_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.IMax);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_IMax() const {
        return be16toh_custom(raw.IMax);
    }

    float get_Freq() const {
        int16_t sf_val = be16toh_custom_s(raw.Hz_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.Freq);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_Freq() const {
        return be16toh_custom(raw.Freq);
    }

    uint16_t get_raw_Output() const {
        return be16toh_custom(raw.Output);
    }

    uint16_t get_raw_Relay() const {
        return be16toh_custom(raw.Relay);
    }

    uint16_t get_raw_Regen() const {
        return be16toh_custom(raw.Regen);
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

    float get_VSetA() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.VSetA);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_VSetA() const {
        return be16toh_custom(raw.VSetA);
    }

    float get_VSetB() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.VSetB);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_VSetB() const {
        return be16toh_custom(raw.VSetB);
    }

    float get_VSetC() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.VSetC);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_VSetC() const {
        return be16toh_custom(raw.VSetC);
    }

    float get_FreqSlew() const {
        int16_t sf_val = be16toh_custom_s(raw.HzSlew_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.FreqSlew);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_FreqSlew() const {
        return be16toh_custom(raw.FreqSlew);
    }

    float get_VSlew() const {
        int16_t sf_val = be16toh_custom_s(raw.VSlew_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.VSlew);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_VSlew() const {
        return be16toh_custom(raw.VSlew);
    }

    float get_VThdA() const {
        int16_t sf_val = be16toh_custom_s(raw.THD_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.VThdA);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_VThdA() const {
        return be16toh_custom(raw.VThdA);
    }

    float get_VThdB() const {
        int16_t sf_val = be16toh_custom_s(raw.THD_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.VThdB);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_VThdB() const {
        return be16toh_custom(raw.VThdB);
    }

    float get_VThdC() const {
        int16_t sf_val = be16toh_custom_s(raw.THD_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.VThdC);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_VThdC() const {
        return be16toh_custom(raw.VThdC);
    }

    float get_IThdA() const {
        int16_t sf_val = be16toh_custom_s(raw.THD_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.IThdA);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_IThdA() const {
        return be16toh_custom(raw.IThdA);
    }

    float get_IThdB() const {
        int16_t sf_val = be16toh_custom_s(raw.THD_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.IThdB);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_IThdB() const {
        return be16toh_custom(raw.IThdB);
    }

    float get_IThdC() const {
        int16_t sf_val = be16toh_custom_s(raw.THD_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.IThdC);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_IThdC() const {
        return be16toh_custom(raw.IThdC);
    }

    uint16_t get_raw_EnaProf() const {
        return be16toh_custom(raw.EnaProf);
    }

    uint16_t get_raw_ProfRslt() const {
        return be16toh_custom(raw.ProfRslt);
    }

    uint16_t get_raw_NProf() const {
        return be16toh_custom(raw.NProf);
    }

    uint16_t get_raw_NPt() const {
        return be16toh_custom(raw.NPt);
    }

    int16_t get_raw_V_SF() const {
        return be16toh_custom_s(raw.V_SF);
    }

    int16_t get_raw_A_SF() const {
        return be16toh_custom_s(raw.A_SF);
    }

    int16_t get_raw_Tms_SF() const {
        return be16toh_custom_s(raw.Tms_SF);
    }

    int16_t get_raw_Hz_SF() const {
        return be16toh_custom_s(raw.Hz_SF);
    }

    int16_t get_raw_HzSlew_SF() const {
        return be16toh_custom_s(raw.HzSlew_SF);
    }

    int16_t get_raw_VSlew_SF() const {
        return be16toh_custom_s(raw.VSlew_SF);
    }

    int16_t get_raw_THD_SF() const {
        return be16toh_custom_s(raw.THD_SF);
    }

    // Accessor for repeating group: Prof
    static const Model64411_Prof_Raw* get_Prof(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model64411_Prof_Raw*>(base_buffer + offset_bytes + index * sizeof(Model64411_Prof_Raw));
    }

    // Accessor for repeating group: Prof_Pt
    static const Model64411_Prof_Pt_Raw* get_Prof_Pt(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model64411_Prof_Pt_Raw*>(base_buffer + offset_bytes + index * sizeof(Model64411_Prof_Pt_Raw));
    }

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
            std::cout << "    Phases: " << be16toh_custom(raw.Phases) << std::endl;
            std::cout << "    PhaseAngle: " << be16toh_custom(raw.PhaseAngle) << std::endl;
            std::cout << "    VNom: " << be16toh_custom(raw.VNom) << std::endl;
            std::cout << "    VMax: " << be16toh_custom(raw.VMax) << std::endl;
            std::cout << "    IMax: " << be16toh_custom(raw.IMax) << std::endl;
            std::cout << "    Freq: " << be16toh_custom(raw.Freq) << std::endl;
            std::cout << "    Output: " << be16toh_custom(raw.Output) << std::endl;
            std::cout << "    Relay: " << be16toh_custom(raw.Relay) << std::endl;
            std::cout << "    Regen: " << be16toh_custom(raw.Regen) << std::endl;
            std::cout << "    VSet: " << be16toh_custom(raw.VSet) << std::endl;
            std::cout << "    VSetA: " << be16toh_custom(raw.VSetA) << std::endl;
            std::cout << "    VSetB: " << be16toh_custom(raw.VSetB) << std::endl;
            std::cout << "    VSetC: " << be16toh_custom(raw.VSetC) << std::endl;
            std::cout << "    FreqSlew: " << be16toh_custom(raw.FreqSlew) << std::endl;
            std::cout << "    VSlew: " << be16toh_custom(raw.VSlew) << std::endl;
            std::cout << "    VA: " << be32toh_custom(raw.VA) << std::endl;
            std::cout << "    VB: " << be32toh_custom(raw.VB) << std::endl;
            std::cout << "    VC: " << be32toh_custom(raw.VC) << std::endl;
            std::cout << "    Hz: " << be32toh_custom(raw.Hz) << std::endl;
            std::cout << "    IA: " << be32toh_custom(raw.IA) << std::endl;
            std::cout << "    IB: " << be32toh_custom(raw.IB) << std::endl;
            std::cout << "    IC: " << be32toh_custom(raw.IC) << std::endl;
            std::cout << "    VHarA: ";
            for(size_t i=0; i<sizeof(raw.VHarA) && raw.VHarA[i] != 0; ++i) std::cout << raw.VHarA[i];
            std::cout << std::endl;
            std::cout << "    VHarB: ";
            for(size_t i=0; i<sizeof(raw.VHarB) && raw.VHarB[i] != 0; ++i) std::cout << raw.VHarB[i];
            std::cout << std::endl;
            std::cout << "    VHarC: ";
            for(size_t i=0; i<sizeof(raw.VHarC) && raw.VHarC[i] != 0; ++i) std::cout << raw.VHarC[i];
            std::cout << std::endl;
            std::cout << "    IHarA: ";
            for(size_t i=0; i<sizeof(raw.IHarA) && raw.IHarA[i] != 0; ++i) std::cout << raw.IHarA[i];
            std::cout << std::endl;
            std::cout << "    IHarB: ";
            for(size_t i=0; i<sizeof(raw.IHarB) && raw.IHarB[i] != 0; ++i) std::cout << raw.IHarB[i];
            std::cout << std::endl;
            std::cout << "    IHarC: ";
            for(size_t i=0; i<sizeof(raw.IHarC) && raw.IHarC[i] != 0; ++i) std::cout << raw.IHarC[i];
            std::cout << std::endl;
            std::cout << "    IIntHarA: ";
            for(size_t i=0; i<sizeof(raw.IIntHarA) && raw.IIntHarA[i] != 0; ++i) std::cout << raw.IIntHarA[i];
            std::cout << std::endl;
            std::cout << "    IIntHarB: ";
            for(size_t i=0; i<sizeof(raw.IIntHarB) && raw.IIntHarB[i] != 0; ++i) std::cout << raw.IIntHarB[i];
            std::cout << std::endl;
            std::cout << "    IIntHarC: ";
            for(size_t i=0; i<sizeof(raw.IIntHarC) && raw.IIntHarC[i] != 0; ++i) std::cout << raw.IIntHarC[i];
            std::cout << std::endl;
            std::cout << "    VThdA: " << be16toh_custom(raw.VThdA) << std::endl;
            std::cout << "    VThdB: " << be16toh_custom(raw.VThdB) << std::endl;
            std::cout << "    VThdC: " << be16toh_custom(raw.VThdC) << std::endl;
            std::cout << "    IThdA: " << be16toh_custom(raw.IThdA) << std::endl;
            std::cout << "    IThdB: " << be16toh_custom(raw.IThdB) << std::endl;
            std::cout << "    IThdC: " << be16toh_custom(raw.IThdC) << std::endl;
            std::cout << "    EnaProf: " << be16toh_custom(raw.EnaProf) << std::endl;
            std::cout << "    ProfRslt: " << be16toh_custom(raw.ProfRslt) << std::endl;
            std::cout << "    NProf: " << be16toh_custom(raw.NProf) << std::endl;
            std::cout << "    NPt: " << be16toh_custom(raw.NPt) << std::endl;
            std::cout << "    V_SF: " << be16toh_custom_s(raw.V_SF) << std::endl;
            std::cout << "    A_SF: " << be16toh_custom_s(raw.A_SF) << std::endl;
            std::cout << "    Tms_SF: " << be16toh_custom_s(raw.Tms_SF) << std::endl;
            std::cout << "    Hz_SF: " << be16toh_custom_s(raw.Hz_SF) << std::endl;
            std::cout << "    HzSlew_SF: " << be16toh_custom_s(raw.HzSlew_SF) << std::endl;
            std::cout << "    VSlew_SF: " << be16toh_custom_s(raw.VSlew_SF) << std::endl;
            std::cout << "    THD_SF: " << be16toh_custom_s(raw.THD_SF) << std::endl;
        const uint8_t* cur_ptr = base_addr + sizeof(Model64411_Raw);
        // Loop for group: Prof
        for (size_t i = 0; i < be16toh_custom(raw.NProf); ++i) {
            if ((cur_ptr - base_addr) + sizeof(Model64411_Prof_Raw) > (size_t)(get_raw_L() * 2 + 4)) break;
            auto* grp = reinterpret_cast<const Model64411_Prof_Raw*>(cur_ptr);
            std::cout << "    Group Prof[" << i << "]:" << std::endl;
            std::cout << "    Name: ";
            for(size_t i=0; i<sizeof(grp->Name) && grp->Name[i] != 0; ++i) std::cout << grp->Name[i];
            std::cout << std::endl;
            std::cout << "    ActPt: " << be16toh_custom(grp->ActPt) << std::endl;
            cur_ptr += sizeof(Model64411_Prof_Raw);
        // Loop for group: Pt
        for (size_t i = 0; i < be16toh_custom(raw.NPt); ++i) {
            if ((cur_ptr - base_addr) + sizeof(Model64411_Prof_Pt_Raw) > (size_t)(get_raw_L() * 2 + 4)) break;
            auto* grp = reinterpret_cast<const Model64411_Prof_Pt_Raw*>(cur_ptr);
            std::cout << "    Group Pt[" << i << "]:" << std::endl;
            std::cout << "    Tms: " << be16toh_custom(grp->Tms) << std::endl;
            std::cout << "    VA: " << be16toh_custom(grp->VA) << std::endl;
            std::cout << "    VB: " << be16toh_custom(grp->VB) << std::endl;
            std::cout << "    VC: " << be16toh_custom(grp->VC) << std::endl;
            std::cout << "    Hz: " << be16toh_custom(grp->Hz) << std::endl;
            std::cout << "    PhaseAngleA: " << be16toh_custom(grp->PhaseAngleA) << std::endl;
            std::cout << "    PhaseAngleB: " << be16toh_custom(grp->PhaseAngleB) << std::endl;
            std::cout << "    PhaseAngleC: " << be16toh_custom(grp->PhaseAngleC) << std::endl;
            cur_ptr += sizeof(Model64411_Prof_Pt_Raw);
        }
        }
    }

};
