// Generated C++ Header for Model 64411
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
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

// Repeating group: Prof
#pragma pack(push, 1)
struct Model64411_Prof_Raw {
    char Name[64];
    uint16_t ActPt;
};
#pragma pack(pop)

// Repeating group: Prof_Pt
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

};
