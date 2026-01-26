// Generated C++ Header for Model 64101
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model64101_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t Eltek_Country_Code;
    uint16_t Eltek_Feeding_Phase;
    uint16_t Eltek_APD_Method;
    uint16_t Eltek_APD_Power_Ref;
    uint16_t Eltek_RPS_Method;
    uint16_t Eltek_RPS_Q_Ref;
    int16_t Eltek_RPS_CosPhi_Ref;
};
#pragma pack(pop)

class Model64101 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 64101;
    Model64101_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model64101_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_Eltek_Country_Code() const {
        return be16toh_custom(raw.Eltek_Country_Code);
    }

    uint16_t get_raw_Eltek_Feeding_Phase() const {
        return be16toh_custom(raw.Eltek_Feeding_Phase);
    }

    uint16_t get_raw_Eltek_APD_Method() const {
        return be16toh_custom(raw.Eltek_APD_Method);
    }

    uint16_t get_raw_Eltek_APD_Power_Ref() const {
        return be16toh_custom(raw.Eltek_APD_Power_Ref);
    }

    uint16_t get_raw_Eltek_RPS_Method() const {
        return be16toh_custom(raw.Eltek_RPS_Method);
    }

    uint16_t get_raw_Eltek_RPS_Q_Ref() const {
        return be16toh_custom(raw.Eltek_RPS_Q_Ref);
    }

    int16_t get_raw_Eltek_RPS_CosPhi_Ref() const {
        return be16toh_custom_s(raw.Eltek_RPS_CosPhi_Ref);
    }

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
        std::cout << "    Eltek_Country_Code: " << be16toh_custom(raw.Eltek_Country_Code) << std::endl;
        std::cout << "    Eltek_Feeding_Phase: " << be16toh_custom(raw.Eltek_Feeding_Phase) << std::endl;
        std::cout << "    Eltek_APD_Method: " << be16toh_custom(raw.Eltek_APD_Method) << std::endl;
        std::cout << "    Eltek_APD_Power_Ref: " << be16toh_custom(raw.Eltek_APD_Power_Ref) << std::endl;
        std::cout << "    Eltek_RPS_Method: " << be16toh_custom(raw.Eltek_RPS_Method) << std::endl;
        std::cout << "    Eltek_RPS_Q_Ref: " << be16toh_custom(raw.Eltek_RPS_Q_Ref) << std::endl;
        std::cout << "    Eltek_RPS_CosPhi_Ref: " << be16toh_custom_s(raw.Eltek_RPS_CosPhi_Ref) << std::endl;
    }

};
