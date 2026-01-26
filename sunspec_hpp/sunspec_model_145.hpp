// Generated C++ Header for Model 145
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model145_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t NomRmpUpRte;
    uint16_t NomRmpDnRte;
    uint16_t EmgRmpUpRte;
    uint16_t EmgRmpDnRte;
    uint16_t ConnRmpUpRte;
    uint16_t ConnRmpDnRte;
    uint16_t AGra;
    int16_t Rmp_SF;
};
#pragma pack(pop)

class Model145 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 145;
    Model145_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model145_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    float get_NomRmpUpRte() const {
        int16_t sf_val = be16toh_custom_s(raw.Rmp_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.NomRmpUpRte);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_NomRmpUpRte() const {
        return be16toh_custom(raw.NomRmpUpRte);
    }

    float get_NomRmpDnRte() const {
        int16_t sf_val = be16toh_custom_s(raw.Rmp_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.NomRmpDnRte);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_NomRmpDnRte() const {
        return be16toh_custom(raw.NomRmpDnRte);
    }

    float get_EmgRmpUpRte() const {
        int16_t sf_val = be16toh_custom_s(raw.Rmp_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.EmgRmpUpRte);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_EmgRmpUpRte() const {
        return be16toh_custom(raw.EmgRmpUpRte);
    }

    float get_EmgRmpDnRte() const {
        int16_t sf_val = be16toh_custom_s(raw.Rmp_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.EmgRmpDnRte);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_EmgRmpDnRte() const {
        return be16toh_custom(raw.EmgRmpDnRte);
    }

    float get_ConnRmpUpRte() const {
        int16_t sf_val = be16toh_custom_s(raw.Rmp_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.ConnRmpUpRte);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_ConnRmpUpRte() const {
        return be16toh_custom(raw.ConnRmpUpRte);
    }

    float get_ConnRmpDnRte() const {
        int16_t sf_val = be16toh_custom_s(raw.Rmp_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.ConnRmpDnRte);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_ConnRmpDnRte() const {
        return be16toh_custom(raw.ConnRmpDnRte);
    }

    float get_AGra() const {
        int16_t sf_val = be16toh_custom_s(raw.Rmp_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.AGra);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_AGra() const {
        return be16toh_custom(raw.AGra);
    }

    int16_t get_raw_Rmp_SF() const {
        return be16toh_custom_s(raw.Rmp_SF);
    }

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
        std::cout << "    NomRmpUpRte: " << be16toh_custom(raw.NomRmpUpRte) << std::endl;
        std::cout << "    NomRmpDnRte: " << be16toh_custom(raw.NomRmpDnRte) << std::endl;
        std::cout << "    EmgRmpUpRte: " << be16toh_custom(raw.EmgRmpUpRte) << std::endl;
        std::cout << "    EmgRmpDnRte: " << be16toh_custom(raw.EmgRmpDnRte) << std::endl;
        std::cout << "    ConnRmpUpRte: " << be16toh_custom(raw.ConnRmpUpRte) << std::endl;
        std::cout << "    ConnRmpDnRte: " << be16toh_custom(raw.ConnRmpDnRte) << std::endl;
        std::cout << "    AGra: " << be16toh_custom(raw.AGra) << std::endl;
        std::cout << "    Rmp_SF: " << be16toh_custom_s(raw.Rmp_SF) << std::endl;
    }

};
