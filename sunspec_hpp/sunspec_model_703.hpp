// Generated C++ Header for Model 703
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model703_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t ES;
    uint16_t ESVHi;
    uint16_t ESVLo;
    uint32_t ESHzHi;
    uint32_t ESHzLo;
    uint32_t ESDlyTms;
    uint32_t ESRndTms;
    uint32_t ESRmpTms;
    uint32_t ESDlyRemTms;
    int16_t V_SF;
    int16_t Hz_SF;
};
#pragma pack(pop)

class Model703 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 703;
    Model703_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model703_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_ES() const {
        return be16toh_custom(raw.ES);
    }

    float get_ESVHi() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.ESVHi);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_ESVHi() const {
        return be16toh_custom(raw.ESVHi);
    }

    float get_ESVLo() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.ESVLo);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_ESVLo() const {
        return be16toh_custom(raw.ESVLo);
    }

    int16_t get_raw_V_SF() const {
        return be16toh_custom_s(raw.V_SF);
    }

    int16_t get_raw_Hz_SF() const {
        return be16toh_custom_s(raw.Hz_SF);
    }

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
        std::cout << "    ES: " << be16toh_custom(raw.ES) << std::endl;
        std::cout << "    ESVHi: " << be16toh_custom(raw.ESVHi) << std::endl;
        std::cout << "    ESVLo: " << be16toh_custom(raw.ESVLo) << std::endl;
        std::cout << "    ESHzHi: " << be32toh_custom(raw.ESHzHi) << std::endl;
        std::cout << "    ESHzLo: " << be32toh_custom(raw.ESHzLo) << std::endl;
        std::cout << "    ESDlyTms: " << be32toh_custom(raw.ESDlyTms) << std::endl;
        std::cout << "    ESRndTms: " << be32toh_custom(raw.ESRndTms) << std::endl;
        std::cout << "    ESRmpTms: " << be32toh_custom(raw.ESRmpTms) << std::endl;
        std::cout << "    ESDlyRemTms: " << be32toh_custom(raw.ESDlyRemTms) << std::endl;
        std::cout << "    V_SF: " << be16toh_custom_s(raw.V_SF) << std::endl;
        std::cout << "    Hz_SF: " << be16toh_custom_s(raw.Hz_SF) << std::endl;
    }

};
