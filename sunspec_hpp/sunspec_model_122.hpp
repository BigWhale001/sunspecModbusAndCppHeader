// Generated C++ Header for Model 122
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model122_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t PVConn;
    uint16_t StorConn;
    uint16_t ECPConn;
    uint16_t ActWh[4];
    uint16_t ActVAh[4];
    uint16_t ActVArhQ1[4];
    uint16_t ActVArhQ2[4];
    uint16_t ActVArhQ3[4];
    uint16_t ActVArhQ4[4];
    int16_t VArAval;
    int16_t VArAval_SF;
    uint16_t WAval;
    int16_t WAval_SF;
    uint32_t StSetLimMsk;
    uint32_t StActCtl;
    char TmSrc[8];
    uint32_t Tms;
    uint16_t RtSt;
    uint16_t Ris;
    int16_t Ris_SF;
};
#pragma pack(pop)

class Model122 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 122;
    Model122_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model122_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_PVConn() const {
        return be16toh_custom(raw.PVConn);
    }

    uint16_t get_raw_StorConn() const {
        return be16toh_custom(raw.StorConn);
    }

    uint16_t get_raw_ECPConn() const {
        return be16toh_custom(raw.ECPConn);
    }

    float get_VArAval() const {
        int16_t sf_val = be16toh_custom_s(raw.VArAval_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.VArAval);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_VArAval() const {
        return be16toh_custom_s(raw.VArAval);
    }

    int16_t get_raw_VArAval_SF() const {
        return be16toh_custom_s(raw.VArAval_SF);
    }

    float get_WAval() const {
        int16_t sf_val = be16toh_custom_s(raw.WAval_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.WAval);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_WAval() const {
        return be16toh_custom(raw.WAval);
    }

    int16_t get_raw_WAval_SF() const {
        return be16toh_custom_s(raw.WAval_SF);
    }

    uint16_t get_raw_RtSt() const {
        return be16toh_custom(raw.RtSt);
    }

    float get_Ris() const {
        int16_t sf_val = be16toh_custom_s(raw.Ris_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.Ris);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_Ris() const {
        return be16toh_custom(raw.Ris);
    }

    int16_t get_raw_Ris_SF() const {
        return be16toh_custom_s(raw.Ris_SF);
    }

};
