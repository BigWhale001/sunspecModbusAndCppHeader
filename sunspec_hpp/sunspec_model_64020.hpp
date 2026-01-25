// Generated C++ Header for Model 64020
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model64020_Raw {
    uint16_t ID;
    uint16_t L;
    int16_t Aux0Tmp;
    int16_t Aux1Tmp;
    int16_t Aux2Tmp;
    int16_t Aux3Tmp;
    int16_t Aux4Tmp;
    int16_t ProbeTmp;
    int16_t MainTmp;
    int16_t SensorV_SF;
    int16_t SensorA_SF;
    int16_t SensorHz_SF;
    int16_t Sensor1Voltage;
    int16_t Sensor2Voltage;
    int16_t Sensor3Voltage;
    int16_t Sensor4Voltage;
    int16_t Sensor5Voltage;
    int16_t Sensor6Voltage;
    int16_t Sensor7Voltage;
    int16_t Sensor1Current;
    int16_t Sensor2Current;
    int16_t Sensor3Current;
    int16_t Sensor4Current;
    int16_t Sensor5Current;
    int16_t Sensor6Current;
    int16_t Sensor7Current;
    uint16_t Sensor8;
    uint16_t Relay1;
    uint16_t Relay2;
    uint16_t Relay3;
    uint16_t ResetAccumulators;
    uint16_t Reset;
};
#pragma pack(pop)

// Repeating group: repeating
#pragma pack(push, 1)
struct Model64020_repeating_Raw {
    char SerialNumber[18];
    char Firmware[12];
    uint16_t Hardware;
};
#pragma pack(pop)

class Model64020 : public SunSpecModelBase {
public:
    Model64020_Raw raw;

    uint16_t get_id() const override { return 64020; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model64020_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    int16_t get_raw_Aux0Tmp() const {
        return be16toh_custom_s(raw.Aux0Tmp);
    }

    int16_t get_raw_Aux1Tmp() const {
        return be16toh_custom_s(raw.Aux1Tmp);
    }

    int16_t get_raw_Aux2Tmp() const {
        return be16toh_custom_s(raw.Aux2Tmp);
    }

    int16_t get_raw_Aux3Tmp() const {
        return be16toh_custom_s(raw.Aux3Tmp);
    }

    int16_t get_raw_Aux4Tmp() const {
        return be16toh_custom_s(raw.Aux4Tmp);
    }

    int16_t get_raw_ProbeTmp() const {
        return be16toh_custom_s(raw.ProbeTmp);
    }

    int16_t get_raw_MainTmp() const {
        return be16toh_custom_s(raw.MainTmp);
    }

    int16_t get_raw_SensorV_SF() const {
        return be16toh_custom_s(raw.SensorV_SF);
    }

    int16_t get_raw_SensorA_SF() const {
        return be16toh_custom_s(raw.SensorA_SF);
    }

    int16_t get_raw_SensorHz_SF() const {
        return be16toh_custom_s(raw.SensorHz_SF);
    }

    float get_Sensor1Voltage() const {
        int16_t sf_val = be16toh_custom_s(raw.SensorV_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.Sensor1Voltage);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_Sensor1Voltage() const {
        return be16toh_custom_s(raw.Sensor1Voltage);
    }

    float get_Sensor2Voltage() const {
        int16_t sf_val = be16toh_custom_s(raw.SensorV_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.Sensor2Voltage);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_Sensor2Voltage() const {
        return be16toh_custom_s(raw.Sensor2Voltage);
    }

    float get_Sensor3Voltage() const {
        int16_t sf_val = be16toh_custom_s(raw.SensorV_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.Sensor3Voltage);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_Sensor3Voltage() const {
        return be16toh_custom_s(raw.Sensor3Voltage);
    }

    float get_Sensor4Voltage() const {
        int16_t sf_val = be16toh_custom_s(raw.SensorV_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.Sensor4Voltage);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_Sensor4Voltage() const {
        return be16toh_custom_s(raw.Sensor4Voltage);
    }

    float get_Sensor5Voltage() const {
        int16_t sf_val = be16toh_custom_s(raw.SensorV_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.Sensor5Voltage);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_Sensor5Voltage() const {
        return be16toh_custom_s(raw.Sensor5Voltage);
    }

    float get_Sensor6Voltage() const {
        int16_t sf_val = be16toh_custom_s(raw.SensorV_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.Sensor6Voltage);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_Sensor6Voltage() const {
        return be16toh_custom_s(raw.Sensor6Voltage);
    }

    float get_Sensor7Voltage() const {
        int16_t sf_val = be16toh_custom_s(raw.SensorV_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.Sensor7Voltage);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_Sensor7Voltage() const {
        return be16toh_custom_s(raw.Sensor7Voltage);
    }

    float get_Sensor1Current() const {
        int16_t sf_val = be16toh_custom_s(raw.SensorA_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.Sensor1Current);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_Sensor1Current() const {
        return be16toh_custom_s(raw.Sensor1Current);
    }

    float get_Sensor2Current() const {
        int16_t sf_val = be16toh_custom_s(raw.SensorA_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.Sensor2Current);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_Sensor2Current() const {
        return be16toh_custom_s(raw.Sensor2Current);
    }

    float get_Sensor3Current() const {
        int16_t sf_val = be16toh_custom_s(raw.SensorA_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.Sensor3Current);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_Sensor3Current() const {
        return be16toh_custom_s(raw.Sensor3Current);
    }

    float get_Sensor4Current() const {
        int16_t sf_val = be16toh_custom_s(raw.SensorA_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.Sensor4Current);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_Sensor4Current() const {
        return be16toh_custom_s(raw.Sensor4Current);
    }

    float get_Sensor5Current() const {
        int16_t sf_val = be16toh_custom_s(raw.SensorA_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.Sensor5Current);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_Sensor5Current() const {
        return be16toh_custom_s(raw.Sensor5Current);
    }

    float get_Sensor6Current() const {
        int16_t sf_val = be16toh_custom_s(raw.SensorA_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.Sensor6Current);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_Sensor6Current() const {
        return be16toh_custom_s(raw.Sensor6Current);
    }

    float get_Sensor7Current() const {
        int16_t sf_val = be16toh_custom_s(raw.SensorA_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.Sensor7Current);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_Sensor7Current() const {
        return be16toh_custom_s(raw.Sensor7Current);
    }

    float get_Sensor8() const {
        int16_t sf_val = be16toh_custom_s(raw.SensorHz_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.Sensor8);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_Sensor8() const {
        return be16toh_custom(raw.Sensor8);
    }

    uint16_t get_raw_Relay1() const {
        return be16toh_custom(raw.Relay1);
    }

    uint16_t get_raw_Relay2() const {
        return be16toh_custom(raw.Relay2);
    }

    uint16_t get_raw_Relay3() const {
        return be16toh_custom(raw.Relay3);
    }

    uint16_t get_raw_ResetAccumulators() const {
        return be16toh_custom(raw.ResetAccumulators);
    }

    uint16_t get_raw_Reset() const {
        return be16toh_custom(raw.Reset);
    }

    // Accessor for repeating group: repeating
    static const Model64020_repeating_Raw* get_repeating(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model64020_repeating_Raw*>(base_buffer + offset_bytes + index * sizeof(Model64020_repeating_Raw));
    }

};
