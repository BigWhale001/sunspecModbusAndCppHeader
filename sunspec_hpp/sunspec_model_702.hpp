// Generated C++ Header for Model 702
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model702_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t WMaxRtg;
    uint16_t WOvrExtRtg;
    uint16_t WOvrExtRtgPF;
    uint16_t WUndExtRtg;
    uint16_t WUndExtRtgPF;
    uint16_t VAMaxRtg;
    uint16_t VarMaxInjRtg;
    uint16_t VarMaxAbsRtg;
    uint16_t WChaRteMaxRtg;
    uint16_t WDisChaRteMaxRtg;
    uint16_t VAChaRteMaxRtg;
    uint16_t VADisChaRteMaxRtg;
    uint16_t VNomRtg;
    uint16_t VMaxRtg;
    uint16_t VMinRtg;
    uint16_t AMaxRtg;
    uint16_t PFOvrExtRtg;
    uint16_t PFUndExtRtg;
    uint16_t ReactSusceptRtg;
    uint16_t NorOpCatRtg;
    uint16_t AbnOpCatRtg;
    uint32_t CtrlModes;
    uint16_t IntIslandCatRtg;
    uint16_t WMax;
    uint16_t WMaxOvrExt;
    uint16_t WOvrExtPF;
    uint16_t WMaxUndExt;
    uint16_t WUndExtPF;
    uint16_t VAMax;
    uint16_t VarMaxInj;
    uint16_t VarMaxAbs;
    uint16_t WChaRteMax;
    uint16_t WDisChaRteMax;
    uint16_t VAChaRteMax;
    uint16_t VADisChaRteMax;
    uint16_t VNom;
    uint16_t VMax;
    uint16_t VMin;
    uint16_t AMax;
    uint16_t PFOvrExt;
    uint16_t PFUndExt;
    uint16_t IntIslandCat;
    int16_t W_SF;
    int16_t PF_SF;
    int16_t VA_SF;
    int16_t Var_SF;
    int16_t V_SF;
    int16_t A_SF;
    int16_t S_SF;
};
#pragma pack(pop)

class Model702 : public SunSpecModelBase {
public:
    Model702_Raw raw;

    uint16_t get_id() const override { return 702; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model702_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    float get_WMaxRtg() const {
        int16_t sf_val = be16toh_custom_s(raw.W_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.WMaxRtg);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_WMaxRtg() const {
        return be16toh_custom(raw.WMaxRtg);
    }

    float get_WOvrExtRtg() const {
        int16_t sf_val = be16toh_custom_s(raw.W_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.WOvrExtRtg);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_WOvrExtRtg() const {
        return be16toh_custom(raw.WOvrExtRtg);
    }

    float get_WOvrExtRtgPF() const {
        int16_t sf_val = be16toh_custom_s(raw.PF_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.WOvrExtRtgPF);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_WOvrExtRtgPF() const {
        return be16toh_custom(raw.WOvrExtRtgPF);
    }

    float get_WUndExtRtg() const {
        int16_t sf_val = be16toh_custom_s(raw.W_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.WUndExtRtg);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_WUndExtRtg() const {
        return be16toh_custom(raw.WUndExtRtg);
    }

    float get_WUndExtRtgPF() const {
        int16_t sf_val = be16toh_custom_s(raw.PF_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.WUndExtRtgPF);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_WUndExtRtgPF() const {
        return be16toh_custom(raw.WUndExtRtgPF);
    }

    float get_VAMaxRtg() const {
        int16_t sf_val = be16toh_custom_s(raw.VA_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.VAMaxRtg);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_VAMaxRtg() const {
        return be16toh_custom(raw.VAMaxRtg);
    }

    float get_VarMaxInjRtg() const {
        int16_t sf_val = be16toh_custom_s(raw.Var_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.VarMaxInjRtg);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_VarMaxInjRtg() const {
        return be16toh_custom(raw.VarMaxInjRtg);
    }

    float get_VarMaxAbsRtg() const {
        int16_t sf_val = be16toh_custom_s(raw.Var_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.VarMaxAbsRtg);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_VarMaxAbsRtg() const {
        return be16toh_custom(raw.VarMaxAbsRtg);
    }

    float get_WChaRteMaxRtg() const {
        int16_t sf_val = be16toh_custom_s(raw.W_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.WChaRteMaxRtg);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_WChaRteMaxRtg() const {
        return be16toh_custom(raw.WChaRteMaxRtg);
    }

    float get_WDisChaRteMaxRtg() const {
        int16_t sf_val = be16toh_custom_s(raw.W_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.WDisChaRteMaxRtg);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_WDisChaRteMaxRtg() const {
        return be16toh_custom(raw.WDisChaRteMaxRtg);
    }

    float get_VAChaRteMaxRtg() const {
        int16_t sf_val = be16toh_custom_s(raw.VA_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.VAChaRteMaxRtg);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_VAChaRteMaxRtg() const {
        return be16toh_custom(raw.VAChaRteMaxRtg);
    }

    float get_VADisChaRteMaxRtg() const {
        int16_t sf_val = be16toh_custom_s(raw.VA_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.VADisChaRteMaxRtg);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_VADisChaRteMaxRtg() const {
        return be16toh_custom(raw.VADisChaRteMaxRtg);
    }

    float get_VNomRtg() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.VNomRtg);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_VNomRtg() const {
        return be16toh_custom(raw.VNomRtg);
    }

    float get_VMaxRtg() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.VMaxRtg);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_VMaxRtg() const {
        return be16toh_custom(raw.VMaxRtg);
    }

    float get_VMinRtg() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.VMinRtg);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_VMinRtg() const {
        return be16toh_custom(raw.VMinRtg);
    }

    float get_AMaxRtg() const {
        int16_t sf_val = be16toh_custom_s(raw.A_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.AMaxRtg);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_AMaxRtg() const {
        return be16toh_custom(raw.AMaxRtg);
    }

    float get_PFOvrExtRtg() const {
        int16_t sf_val = be16toh_custom_s(raw.PF_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.PFOvrExtRtg);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_PFOvrExtRtg() const {
        return be16toh_custom(raw.PFOvrExtRtg);
    }

    float get_PFUndExtRtg() const {
        int16_t sf_val = be16toh_custom_s(raw.PF_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.PFUndExtRtg);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_PFUndExtRtg() const {
        return be16toh_custom(raw.PFUndExtRtg);
    }

    float get_ReactSusceptRtg() const {
        int16_t sf_val = be16toh_custom_s(raw.S_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.ReactSusceptRtg);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_ReactSusceptRtg() const {
        return be16toh_custom(raw.ReactSusceptRtg);
    }

    uint16_t get_raw_NorOpCatRtg() const {
        return be16toh_custom_s(raw.NorOpCatRtg);
    }

    uint16_t get_raw_AbnOpCatRtg() const {
        return be16toh_custom_s(raw.AbnOpCatRtg);
    }

    uint16_t get_raw_IntIslandCatRtg() const {
        return be16toh_custom_s(raw.IntIslandCatRtg);
    }

    float get_WMax() const {
        int16_t sf_val = be16toh_custom_s(raw.W_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.WMax);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_WMax() const {
        return be16toh_custom(raw.WMax);
    }

    float get_WMaxOvrExt() const {
        int16_t sf_val = be16toh_custom_s(raw.W_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.WMaxOvrExt);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_WMaxOvrExt() const {
        return be16toh_custom(raw.WMaxOvrExt);
    }

    float get_WOvrExtPF() const {
        int16_t sf_val = be16toh_custom_s(raw.PF_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.WOvrExtPF);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_WOvrExtPF() const {
        return be16toh_custom(raw.WOvrExtPF);
    }

    float get_WMaxUndExt() const {
        int16_t sf_val = be16toh_custom_s(raw.W_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.WMaxUndExt);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_WMaxUndExt() const {
        return be16toh_custom(raw.WMaxUndExt);
    }

    float get_WUndExtPF() const {
        int16_t sf_val = be16toh_custom_s(raw.PF_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.WUndExtPF);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_WUndExtPF() const {
        return be16toh_custom(raw.WUndExtPF);
    }

    float get_VAMax() const {
        int16_t sf_val = be16toh_custom_s(raw.VA_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.VAMax);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_VAMax() const {
        return be16toh_custom(raw.VAMax);
    }

    float get_VarMaxInj() const {
        int16_t sf_val = be16toh_custom_s(raw.Var_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.VarMaxInj);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_VarMaxInj() const {
        return be16toh_custom(raw.VarMaxInj);
    }

    float get_VarMaxAbs() const {
        int16_t sf_val = be16toh_custom_s(raw.Var_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.VarMaxAbs);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_VarMaxAbs() const {
        return be16toh_custom(raw.VarMaxAbs);
    }

    float get_WChaRteMax() const {
        int16_t sf_val = be16toh_custom_s(raw.W_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.WChaRteMax);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_WChaRteMax() const {
        return be16toh_custom(raw.WChaRteMax);
    }

    float get_WDisChaRteMax() const {
        int16_t sf_val = be16toh_custom_s(raw.W_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.WDisChaRteMax);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_WDisChaRteMax() const {
        return be16toh_custom(raw.WDisChaRteMax);
    }

    float get_VAChaRteMax() const {
        int16_t sf_val = be16toh_custom_s(raw.VA_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.VAChaRteMax);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_VAChaRteMax() const {
        return be16toh_custom(raw.VAChaRteMax);
    }

    float get_VADisChaRteMax() const {
        int16_t sf_val = be16toh_custom_s(raw.VA_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.VADisChaRteMax);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_VADisChaRteMax() const {
        return be16toh_custom(raw.VADisChaRteMax);
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

    float get_VMin() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.VMin);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_VMin() const {
        return be16toh_custom(raw.VMin);
    }

    float get_AMax() const {
        int16_t sf_val = be16toh_custom_s(raw.A_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.AMax);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_AMax() const {
        return be16toh_custom(raw.AMax);
    }

    float get_PFOvrExt() const {
        int16_t sf_val = be16toh_custom_s(raw.PF_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.PFOvrExt);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_PFOvrExt() const {
        return be16toh_custom(raw.PFOvrExt);
    }

    float get_PFUndExt() const {
        int16_t sf_val = be16toh_custom_s(raw.PF_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.PFUndExt);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_PFUndExt() const {
        return be16toh_custom(raw.PFUndExt);
    }

    uint16_t get_raw_IntIslandCat() const {
        return be16toh_custom_s(raw.IntIslandCat);
    }

};
