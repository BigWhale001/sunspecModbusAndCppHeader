// Generated C++ Header for Model 64414
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model64414_Raw {
    uint16_t ID;
    uint16_t L;
    char Time[20];
    uint16_t Temperature;
    char GridModelSource[64];
    char IrradianceModelSource[64];
    uint16_t Irradiance;
    uint16_t GridVoltageA;
    uint16_t GridVoltageB;
    uint16_t GridVoltageC;
    uint16_t GridFrequency;
};
#pragma pack(pop)

class Model64414 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 64414;
    Model64414_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model64414_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
        std::cout << "    Time: ";
        for(size_t i=0; i<sizeof(raw.Time) && raw.Time[i] != 0; ++i) std::cout << raw.Time[i];
        std::cout << std::endl;
        std::cout << "    Temperature: " << be32toh_custom(raw.Temperature) << std::endl;
        std::cout << "    GridModelSource: ";
        for(size_t i=0; i<sizeof(raw.GridModelSource) && raw.GridModelSource[i] != 0; ++i) std::cout << raw.GridModelSource[i];
        std::cout << std::endl;
        std::cout << "    IrradianceModelSource: ";
        for(size_t i=0; i<sizeof(raw.IrradianceModelSource) && raw.IrradianceModelSource[i] != 0; ++i) std::cout << raw.IrradianceModelSource[i];
        std::cout << std::endl;
        std::cout << "    Irradiance: " << be32toh_custom(raw.Irradiance) << std::endl;
        std::cout << "    GridVoltageA: " << be32toh_custom(raw.GridVoltageA) << std::endl;
        std::cout << "    GridVoltageB: " << be32toh_custom(raw.GridVoltageB) << std::endl;
        std::cout << "    GridVoltageC: " << be32toh_custom(raw.GridVoltageC) << std::endl;
        std::cout << "    GridFrequency: " << be32toh_custom(raw.GridFrequency) << std::endl;
    }

};
