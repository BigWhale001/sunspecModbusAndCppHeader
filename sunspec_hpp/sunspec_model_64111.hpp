// Generated C++ Header for Model 64111
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model64111_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t Port;
    int16_t V_SF;
    int16_t A_SF;
    int16_t P_SF;
    int16_t AH_SF;
    int16_t KWH_SF;
    uint16_t BattV;
    uint16_t ArrayV;
    uint16_t OutputA;
    uint16_t InputA;
    uint16_t ChargerSt;
    uint16_t OutputW;
    uint16_t TodayMinBatV;
    uint16_t TodayMaxBatV;
    uint16_t VOCV;
    uint16_t TodayMaxVOC;
    uint16_t TodaykWhOutput;
    uint16_t TodayAHOutput;
    uint16_t LifeTimeKWHOut;
    uint16_t LifeTimeAHOut;
    uint16_t LifeTimeMaxOut;
    uint16_t LifeTimeMaxBatt;
    uint16_t LifeTimeMaxVOC;
};
#pragma pack(pop)

class Model64111 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 64111;
    Model64111_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model64111_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_Port() const {
        return be16toh_custom(raw.Port);
    }

    int16_t get_raw_V_SF() const {
        return be16toh_custom_s(raw.V_SF);
    }

    int16_t get_raw_A_SF() const {
        return be16toh_custom_s(raw.A_SF);
    }

    int16_t get_raw_P_SF() const {
        return be16toh_custom_s(raw.P_SF);
    }

    int16_t get_raw_AH_SF() const {
        return be16toh_custom_s(raw.AH_SF);
    }

    int16_t get_raw_KWH_SF() const {
        return be16toh_custom_s(raw.KWH_SF);
    }

    float get_BattV() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.BattV);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_BattV() const {
        return be16toh_custom(raw.BattV);
    }

    float get_ArrayV() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.ArrayV);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_ArrayV() const {
        return be16toh_custom(raw.ArrayV);
    }

    float get_OutputA() const {
        int16_t sf_val = be16toh_custom_s(raw.A_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.OutputA);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_OutputA() const {
        return be16toh_custom(raw.OutputA);
    }

    float get_InputA() const {
        int16_t sf_val = be16toh_custom_s(raw.P_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.InputA);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_InputA() const {
        return be16toh_custom(raw.InputA);
    }

    uint16_t get_raw_ChargerSt() const {
        return be16toh_custom(raw.ChargerSt);
    }

    float get_OutputW() const {
        int16_t sf_val = be16toh_custom_s(raw.P_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.OutputW);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_OutputW() const {
        return be16toh_custom(raw.OutputW);
    }

    float get_TodayMinBatV() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.TodayMinBatV);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_TodayMinBatV() const {
        return be16toh_custom(raw.TodayMinBatV);
    }

    float get_TodayMaxBatV() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.TodayMaxBatV);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_TodayMaxBatV() const {
        return be16toh_custom(raw.TodayMaxBatV);
    }

    float get_VOCV() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.VOCV);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_VOCV() const {
        return be16toh_custom(raw.VOCV);
    }

    float get_TodayMaxVOC() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.TodayMaxVOC);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_TodayMaxVOC() const {
        return be16toh_custom(raw.TodayMaxVOC);
    }

    float get_TodaykWhOutput() const {
        int16_t sf_val = be16toh_custom_s(raw.KWH_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.TodaykWhOutput);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_TodaykWhOutput() const {
        return be16toh_custom(raw.TodaykWhOutput);
    }

    float get_TodayAHOutput() const {
        int16_t sf_val = be16toh_custom_s(raw.AH_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.TodayAHOutput);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_TodayAHOutput() const {
        return be16toh_custom(raw.TodayAHOutput);
    }

    float get_LifeTimeKWHOut() const {
        int16_t sf_val = be16toh_custom_s(raw.P_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.LifeTimeKWHOut);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_LifeTimeKWHOut() const {
        return be16toh_custom(raw.LifeTimeKWHOut);
    }

    float get_LifeTimeAHOut() const {
        int16_t sf_val = be16toh_custom_s(raw.KWH_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.LifeTimeAHOut);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_LifeTimeAHOut() const {
        return be16toh_custom(raw.LifeTimeAHOut);
    }

    float get_LifeTimeMaxOut() const {
        int16_t sf_val = be16toh_custom_s(raw.P_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.LifeTimeMaxOut);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_LifeTimeMaxOut() const {
        return be16toh_custom(raw.LifeTimeMaxOut);
    }

    float get_LifeTimeMaxBatt() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.LifeTimeMaxBatt);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_LifeTimeMaxBatt() const {
        return be16toh_custom(raw.LifeTimeMaxBatt);
    }

    float get_LifeTimeMaxVOC() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.LifeTimeMaxVOC);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_LifeTimeMaxVOC() const {
        return be16toh_custom(raw.LifeTimeMaxVOC);
    }

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
            std::cout << "    Port: " << be16toh_custom(raw.Port) << std::endl;
            std::cout << "    V_SF: " << be16toh_custom_s(raw.V_SF) << std::endl;
            std::cout << "    A_SF: " << be16toh_custom_s(raw.A_SF) << std::endl;
            std::cout << "    P_SF: " << be16toh_custom_s(raw.P_SF) << std::endl;
            std::cout << "    AH_SF: " << be16toh_custom_s(raw.AH_SF) << std::endl;
            std::cout << "    KWH_SF: " << be16toh_custom_s(raw.KWH_SF) << std::endl;
            std::cout << "    BattV: " << be16toh_custom(raw.BattV) << std::endl;
            std::cout << "    ArrayV: " << be16toh_custom(raw.ArrayV) << std::endl;
            std::cout << "    OutputA: " << be16toh_custom(raw.OutputA) << std::endl;
            std::cout << "    InputA: " << be16toh_custom(raw.InputA) << std::endl;
            std::cout << "    ChargerSt: " << be16toh_custom(raw.ChargerSt) << std::endl;
            std::cout << "    OutputW: " << be16toh_custom(raw.OutputW) << std::endl;
            std::cout << "    TodayMinBatV: " << be16toh_custom(raw.TodayMinBatV) << std::endl;
            std::cout << "    TodayMaxBatV: " << be16toh_custom(raw.TodayMaxBatV) << std::endl;
            std::cout << "    VOCV: " << be16toh_custom(raw.VOCV) << std::endl;
            std::cout << "    TodayMaxVOC: " << be16toh_custom(raw.TodayMaxVOC) << std::endl;
            std::cout << "    TodaykWhOutput: " << be16toh_custom(raw.TodaykWhOutput) << std::endl;
            std::cout << "    TodayAHOutput: " << be16toh_custom(raw.TodayAHOutput) << std::endl;
            std::cout << "    LifeTimeKWHOut: " << be16toh_custom(raw.LifeTimeKWHOut) << std::endl;
            std::cout << "    LifeTimeAHOut: " << be16toh_custom(raw.LifeTimeAHOut) << std::endl;
            std::cout << "    LifeTimeMaxOut: " << be16toh_custom(raw.LifeTimeMaxOut) << std::endl;
            std::cout << "    LifeTimeMaxBatt: " << be16toh_custom(raw.LifeTimeMaxBatt) << std::endl;
            std::cout << "    LifeTimeMaxVOC: " << be16toh_custom(raw.LifeTimeMaxVOC) << std::endl;
        const uint8_t* cur_ptr = base_addr + sizeof(Model64111_Raw);
    }

};
