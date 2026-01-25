// Generated C++ Header for Model 714
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model714_Raw {
    uint16_t ID;
    uint16_t L;
    uint32_t PrtAlrms;
    uint16_t NPrt;
    int16_t DCA;
    int16_t DCW;
    uint16_t DCWhInj[4];
    uint16_t DCWhAbs[4];
    int16_t DCA_SF;
    int16_t DCV_SF;
    int16_t DCW_SF;
    int16_t DCWH_SF;
    int16_t Tmp_SF;
};
#pragma pack(pop)

// Repeating group: Prt
#pragma pack(push, 1)
struct Model714_Prt_Raw {
    uint16_t PrtTyp;
    uint16_t ID;
    char IDStr[16];
    int16_t DCA;
    uint16_t DCV;
    int16_t DCW;
    uint16_t DCWhInj[4];
    uint16_t DCWhAbs[4];
    int16_t Tmp;
    uint16_t DCSta;
    uint32_t DCAlrm;
};
#pragma pack(pop)

class Model714 : public SunSpecModelBase {
public:
    Model714_Raw raw;

    uint16_t get_id() const override { return 714; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model714_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_NPrt() const {
        return be16toh_custom(raw.NPrt);
    }

    float get_DCA() const {
        int16_t sf_val = be16toh_custom_s(raw.DCA_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.DCA);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_DCA() const {
        return be16toh_custom_s(raw.DCA);
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

    int16_t get_raw_DCA_SF() const {
        return be16toh_custom_s(raw.DCA_SF);
    }

    int16_t get_raw_DCV_SF() const {
        return be16toh_custom_s(raw.DCV_SF);
    }

    int16_t get_raw_DCW_SF() const {
        return be16toh_custom_s(raw.DCW_SF);
    }

    int16_t get_raw_DCWH_SF() const {
        return be16toh_custom_s(raw.DCWH_SF);
    }

    int16_t get_raw_Tmp_SF() const {
        return be16toh_custom_s(raw.Tmp_SF);
    }

    // Accessor for repeating group: Prt
    static const Model714_Prt_Raw* get_Prt(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model714_Prt_Raw*>(base_buffer + offset_bytes + index * sizeof(Model714_Prt_Raw));
    }

};
