// Generated C++ Header for Model 803
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model803_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t NStr;
    uint16_t NStrCon;
    int16_t ModTmpMax;
    uint16_t ModTmpMaxStr;
    uint16_t ModTmpMaxMod;
    int16_t ModTmpMin;
    uint16_t ModTmpMinStr;
    uint16_t ModTmpMinMod;
    int16_t ModTmpAvg;
    uint16_t StrVMax;
    uint16_t StrVMaxStr;
    uint16_t StrVMin;
    uint16_t StrVMinStr;
    uint16_t StrVAvg;
    int16_t StrAMax;
    uint16_t StrAMaxStr;
    int16_t StrAMin;
    uint16_t StrAMinStr;
    int16_t StrAAvg;
    uint16_t NCellBal;
    int16_t CellV_SF;
    int16_t ModTmp_SF;
    int16_t A_SF;
    int16_t SoH_SF;
    int16_t SoC_SF;
    int16_t V_SF;
};
#pragma pack(pop)

// Repeating group: string
#pragma pack(push, 1)
struct Model803_string_Raw {
    uint16_t StrNMod;
    uint32_t StrSt;
    uint16_t StrConFail;
    uint16_t StrSoC;
    uint16_t StrSoH;
    int16_t StrA;
    uint16_t StrCellVMax;
    uint16_t StrCellVMaxMod;
    uint16_t StrCellVMin;
    uint16_t StrCellVMinMod;
    uint16_t StrCellVAvg;
    int16_t StrModTmpMax;
    uint16_t StrModTmpMaxMod;
    int16_t StrModTmpMin;
    uint16_t StrModTmpMinMod;
    int16_t StrModTmpAvg;
    uint16_t StrDisRsn;
    uint32_t StrConSt;
    uint32_t StrEvt1;
    uint32_t StrEvt2;
    uint32_t StrEvtVnd1;
    uint32_t StrEvtVnd2;
    uint16_t StrSetEna;
    uint16_t StrSetCon;
    uint16_t pad_30;
    uint16_t pad_31;
};
#pragma pack(pop)

class Model803 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 803;
    Model803_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model803_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_NStr() const {
        return be16toh_custom(raw.NStr);
    }

    uint16_t get_raw_NStrCon() const {
        return be16toh_custom(raw.NStrCon);
    }

    float get_ModTmpMax() const {
        int16_t sf_val = be16toh_custom_s(raw.ModTmp_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.ModTmpMax);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_ModTmpMax() const {
        return be16toh_custom_s(raw.ModTmpMax);
    }

    uint16_t get_raw_ModTmpMaxStr() const {
        return be16toh_custom(raw.ModTmpMaxStr);
    }

    uint16_t get_raw_ModTmpMaxMod() const {
        return be16toh_custom(raw.ModTmpMaxMod);
    }

    float get_ModTmpMin() const {
        int16_t sf_val = be16toh_custom_s(raw.ModTmp_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.ModTmpMin);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_ModTmpMin() const {
        return be16toh_custom_s(raw.ModTmpMin);
    }

    uint16_t get_raw_ModTmpMinStr() const {
        return be16toh_custom(raw.ModTmpMinStr);
    }

    uint16_t get_raw_ModTmpMinMod() const {
        return be16toh_custom(raw.ModTmpMinMod);
    }

    float get_ModTmpAvg() const {
        int16_t sf_val = be16toh_custom_s(raw.ModTmp_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.ModTmpAvg);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_ModTmpAvg() const {
        return be16toh_custom_s(raw.ModTmpAvg);
    }

    float get_StrVMax() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.StrVMax);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_StrVMax() const {
        return be16toh_custom(raw.StrVMax);
    }

    uint16_t get_raw_StrVMaxStr() const {
        return be16toh_custom(raw.StrVMaxStr);
    }

    float get_StrVMin() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.StrVMin);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_StrVMin() const {
        return be16toh_custom(raw.StrVMin);
    }

    uint16_t get_raw_StrVMinStr() const {
        return be16toh_custom(raw.StrVMinStr);
    }

    float get_StrVAvg() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.StrVAvg);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_StrVAvg() const {
        return be16toh_custom(raw.StrVAvg);
    }

    float get_StrAMax() const {
        int16_t sf_val = be16toh_custom_s(raw.A_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.StrAMax);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_StrAMax() const {
        return be16toh_custom_s(raw.StrAMax);
    }

    uint16_t get_raw_StrAMaxStr() const {
        return be16toh_custom(raw.StrAMaxStr);
    }

    float get_StrAMin() const {
        int16_t sf_val = be16toh_custom_s(raw.A_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.StrAMin);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_StrAMin() const {
        return be16toh_custom_s(raw.StrAMin);
    }

    uint16_t get_raw_StrAMinStr() const {
        return be16toh_custom(raw.StrAMinStr);
    }

    float get_StrAAvg() const {
        int16_t sf_val = be16toh_custom_s(raw.A_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.StrAAvg);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_StrAAvg() const {
        return be16toh_custom_s(raw.StrAAvg);
    }

    uint16_t get_raw_NCellBal() const {
        return be16toh_custom(raw.NCellBal);
    }

    int16_t get_raw_CellV_SF() const {
        return be16toh_custom_s(raw.CellV_SF);
    }

    int16_t get_raw_ModTmp_SF() const {
        return be16toh_custom_s(raw.ModTmp_SF);
    }

    int16_t get_raw_A_SF() const {
        return be16toh_custom_s(raw.A_SF);
    }

    int16_t get_raw_SoH_SF() const {
        return be16toh_custom_s(raw.SoH_SF);
    }

    int16_t get_raw_SoC_SF() const {
        return be16toh_custom_s(raw.SoC_SF);
    }

    int16_t get_raw_V_SF() const {
        return be16toh_custom_s(raw.V_SF);
    }

    // Accessor for repeating group: string
    static const Model803_string_Raw* get_string(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model803_string_Raw*>(base_buffer + offset_bytes + index * sizeof(Model803_string_Raw));
    }

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
        std::cout << "    NStr: " << be16toh_custom(raw.NStr) << std::endl;
        std::cout << "    NStrCon: " << be16toh_custom(raw.NStrCon) << std::endl;
        std::cout << "    ModTmpMax: " << be16toh_custom_s(raw.ModTmpMax) << std::endl;
        std::cout << "    ModTmpMaxStr: " << be16toh_custom(raw.ModTmpMaxStr) << std::endl;
        std::cout << "    ModTmpMaxMod: " << be16toh_custom(raw.ModTmpMaxMod) << std::endl;
        std::cout << "    ModTmpMin: " << be16toh_custom_s(raw.ModTmpMin) << std::endl;
        std::cout << "    ModTmpMinStr: " << be16toh_custom(raw.ModTmpMinStr) << std::endl;
        std::cout << "    ModTmpMinMod: " << be16toh_custom(raw.ModTmpMinMod) << std::endl;
        std::cout << "    ModTmpAvg: " << be16toh_custom_s(raw.ModTmpAvg) << std::endl;
        std::cout << "    StrVMax: " << be16toh_custom(raw.StrVMax) << std::endl;
        std::cout << "    StrVMaxStr: " << be16toh_custom(raw.StrVMaxStr) << std::endl;
        std::cout << "    StrVMin: " << be16toh_custom(raw.StrVMin) << std::endl;
        std::cout << "    StrVMinStr: " << be16toh_custom(raw.StrVMinStr) << std::endl;
        std::cout << "    StrVAvg: " << be16toh_custom(raw.StrVAvg) << std::endl;
        std::cout << "    StrAMax: " << be16toh_custom_s(raw.StrAMax) << std::endl;
        std::cout << "    StrAMaxStr: " << be16toh_custom(raw.StrAMaxStr) << std::endl;
        std::cout << "    StrAMin: " << be16toh_custom_s(raw.StrAMin) << std::endl;
        std::cout << "    StrAMinStr: " << be16toh_custom(raw.StrAMinStr) << std::endl;
        std::cout << "    StrAAvg: " << be16toh_custom_s(raw.StrAAvg) << std::endl;
        std::cout << "    NCellBal: " << be16toh_custom(raw.NCellBal) << std::endl;
        std::cout << "    CellV_SF: " << be16toh_custom_s(raw.CellV_SF) << std::endl;
        std::cout << "    ModTmp_SF: " << be16toh_custom_s(raw.ModTmp_SF) << std::endl;
        std::cout << "    A_SF: " << be16toh_custom_s(raw.A_SF) << std::endl;
        std::cout << "    SoH_SF: " << be16toh_custom_s(raw.SoH_SF) << std::endl;
        std::cout << "    SoC_SF: " << be16toh_custom_s(raw.SoC_SF) << std::endl;
        std::cout << "    V_SF: " << be16toh_custom_s(raw.V_SF) << std::endl;
    }

};
