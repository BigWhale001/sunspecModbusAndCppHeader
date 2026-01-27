// Generated C++ Header for Model 120
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model120_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t DERTyp;
    uint16_t WRtg;
    int16_t WRtg_SF;
    uint16_t VARtg;
    int16_t VARtg_SF;
    int16_t VArRtgQ1;
    int16_t VArRtgQ2;
    int16_t VArRtgQ3;
    int16_t VArRtgQ4;
    int16_t VArRtg_SF;
    uint16_t ARtg;
    int16_t ARtg_SF;
    int16_t PFRtgQ1;
    int16_t PFRtgQ2;
    int16_t PFRtgQ3;
    int16_t PFRtgQ4;
    int16_t PFRtg_SF;
    uint16_t WHRtg;
    int16_t WHRtg_SF;
    uint16_t AhrRtg;
    int16_t AhrRtg_SF;
    uint16_t MaxChaRte;
    int16_t MaxChaRte_SF;
    uint16_t MaxDisChaRte;
    int16_t MaxDisChaRte_SF;
    uint16_t pad_27;
};
#pragma pack(pop)

class Model120 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 120;
    Model120_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model120_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_DERTyp() const {
        return be16toh_custom(raw.DERTyp);
    }

    float get_WRtg() const {
        int16_t sf_val = be16toh_custom_s(raw.WRtg_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.WRtg);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_WRtg() const {
        return be16toh_custom(raw.WRtg);
    }

    int16_t get_raw_WRtg_SF() const {
        return be16toh_custom_s(raw.WRtg_SF);
    }

    float get_VARtg() const {
        int16_t sf_val = be16toh_custom_s(raw.VARtg_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.VARtg);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_VARtg() const {
        return be16toh_custom(raw.VARtg);
    }

    int16_t get_raw_VARtg_SF() const {
        return be16toh_custom_s(raw.VARtg_SF);
    }

    float get_VArRtgQ1() const {
        int16_t sf_val = be16toh_custom_s(raw.VArRtg_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.VArRtgQ1);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_VArRtgQ1() const {
        return be16toh_custom_s(raw.VArRtgQ1);
    }

    float get_VArRtgQ2() const {
        int16_t sf_val = be16toh_custom_s(raw.VArRtg_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.VArRtgQ2);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_VArRtgQ2() const {
        return be16toh_custom_s(raw.VArRtgQ2);
    }

    float get_VArRtgQ3() const {
        int16_t sf_val = be16toh_custom_s(raw.VArRtg_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.VArRtgQ3);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_VArRtgQ3() const {
        return be16toh_custom_s(raw.VArRtgQ3);
    }

    float get_VArRtgQ4() const {
        int16_t sf_val = be16toh_custom_s(raw.VArRtg_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.VArRtgQ4);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_VArRtgQ4() const {
        return be16toh_custom_s(raw.VArRtgQ4);
    }

    int16_t get_raw_VArRtg_SF() const {
        return be16toh_custom_s(raw.VArRtg_SF);
    }

    float get_ARtg() const {
        int16_t sf_val = be16toh_custom_s(raw.ARtg_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.ARtg);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_ARtg() const {
        return be16toh_custom(raw.ARtg);
    }

    int16_t get_raw_ARtg_SF() const {
        return be16toh_custom_s(raw.ARtg_SF);
    }

    float get_PFRtgQ1() const {
        int16_t sf_val = be16toh_custom_s(raw.PFRtg_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.PFRtgQ1);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_PFRtgQ1() const {
        return be16toh_custom_s(raw.PFRtgQ1);
    }

    float get_PFRtgQ2() const {
        int16_t sf_val = be16toh_custom_s(raw.PFRtg_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.PFRtgQ2);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_PFRtgQ2() const {
        return be16toh_custom_s(raw.PFRtgQ2);
    }

    float get_PFRtgQ3() const {
        int16_t sf_val = be16toh_custom_s(raw.PFRtg_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.PFRtgQ3);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_PFRtgQ3() const {
        return be16toh_custom_s(raw.PFRtgQ3);
    }

    float get_PFRtgQ4() const {
        int16_t sf_val = be16toh_custom_s(raw.PFRtg_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.PFRtgQ4);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_PFRtgQ4() const {
        return be16toh_custom_s(raw.PFRtgQ4);
    }

    int16_t get_raw_PFRtg_SF() const {
        return be16toh_custom_s(raw.PFRtg_SF);
    }

    float get_WHRtg() const {
        int16_t sf_val = be16toh_custom_s(raw.WHRtg_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.WHRtg);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_WHRtg() const {
        return be16toh_custom(raw.WHRtg);
    }

    int16_t get_raw_WHRtg_SF() const {
        return be16toh_custom_s(raw.WHRtg_SF);
    }

    float get_AhrRtg() const {
        int16_t sf_val = be16toh_custom_s(raw.AhrRtg_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.AhrRtg);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_AhrRtg() const {
        return be16toh_custom(raw.AhrRtg);
    }

    int16_t get_raw_AhrRtg_SF() const {
        return be16toh_custom_s(raw.AhrRtg_SF);
    }

    float get_MaxChaRte() const {
        int16_t sf_val = be16toh_custom_s(raw.MaxChaRte_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.MaxChaRte);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_MaxChaRte() const {
        return be16toh_custom(raw.MaxChaRte);
    }

    int16_t get_raw_MaxChaRte_SF() const {
        return be16toh_custom_s(raw.MaxChaRte_SF);
    }

    float get_MaxDisChaRte() const {
        int16_t sf_val = be16toh_custom_s(raw.MaxDisChaRte_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.MaxDisChaRte);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_MaxDisChaRte() const {
        return be16toh_custom(raw.MaxDisChaRte);
    }

    int16_t get_raw_MaxDisChaRte_SF() const {
        return be16toh_custom_s(raw.MaxDisChaRte_SF);
    }

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
            std::cout << "    DERTyp: " << be16toh_custom(raw.DERTyp) << std::endl;
            std::cout << "    WRtg: " << be16toh_custom(raw.WRtg) << std::endl;
            std::cout << "    WRtg_SF: " << be16toh_custom_s(raw.WRtg_SF) << std::endl;
            std::cout << "    VARtg: " << be16toh_custom(raw.VARtg) << std::endl;
            std::cout << "    VARtg_SF: " << be16toh_custom_s(raw.VARtg_SF) << std::endl;
            std::cout << "    VArRtgQ1: " << be16toh_custom_s(raw.VArRtgQ1) << std::endl;
            std::cout << "    VArRtgQ2: " << be16toh_custom_s(raw.VArRtgQ2) << std::endl;
            std::cout << "    VArRtgQ3: " << be16toh_custom_s(raw.VArRtgQ3) << std::endl;
            std::cout << "    VArRtgQ4: " << be16toh_custom_s(raw.VArRtgQ4) << std::endl;
            std::cout << "    VArRtg_SF: " << be16toh_custom_s(raw.VArRtg_SF) << std::endl;
            std::cout << "    ARtg: " << be16toh_custom(raw.ARtg) << std::endl;
            std::cout << "    ARtg_SF: " << be16toh_custom_s(raw.ARtg_SF) << std::endl;
            std::cout << "    PFRtgQ1: " << be16toh_custom_s(raw.PFRtgQ1) << std::endl;
            std::cout << "    PFRtgQ2: " << be16toh_custom_s(raw.PFRtgQ2) << std::endl;
            std::cout << "    PFRtgQ3: " << be16toh_custom_s(raw.PFRtgQ3) << std::endl;
            std::cout << "    PFRtgQ4: " << be16toh_custom_s(raw.PFRtgQ4) << std::endl;
            std::cout << "    PFRtg_SF: " << be16toh_custom_s(raw.PFRtg_SF) << std::endl;
            std::cout << "    WHRtg: " << be16toh_custom(raw.WHRtg) << std::endl;
            std::cout << "    WHRtg_SF: " << be16toh_custom_s(raw.WHRtg_SF) << std::endl;
            std::cout << "    AhrRtg: " << be16toh_custom(raw.AhrRtg) << std::endl;
            std::cout << "    AhrRtg_SF: " << be16toh_custom_s(raw.AhrRtg_SF) << std::endl;
            std::cout << "    MaxChaRte: " << be16toh_custom(raw.MaxChaRte) << std::endl;
            std::cout << "    MaxChaRte_SF: " << be16toh_custom_s(raw.MaxChaRte_SF) << std::endl;
            std::cout << "    MaxDisChaRte: " << be16toh_custom(raw.MaxDisChaRte) << std::endl;
            std::cout << "    MaxDisChaRte_SF: " << be16toh_custom_s(raw.MaxDisChaRte_SF) << std::endl;
        const uint8_t* cur_ptr = base_addr + sizeof(Model120_Raw);
    }

};
