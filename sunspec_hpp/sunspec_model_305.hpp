// Generated C++ Header for Model 305
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model305_Raw {
    uint16_t ID;
    uint16_t L;
    char Tm[12];
    char Date[8];
    char Loc[40];
    int32_t Lat;
    int32_t Long;
    int32_t Alt;
};
#pragma pack(pop)

class Model305 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 305;
    Model305_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model305_Raw));
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
        std::cout << "    Tm: ";
        for(size_t i=0; i<sizeof(raw.Tm) && raw.Tm[i] != 0; ++i) std::cout << raw.Tm[i];
        std::cout << std::endl;
        std::cout << "    Date: ";
        for(size_t i=0; i<sizeof(raw.Date) && raw.Date[i] != 0; ++i) std::cout << raw.Date[i];
        std::cout << std::endl;
        std::cout << "    Loc: ";
        for(size_t i=0; i<sizeof(raw.Loc) && raw.Loc[i] != 0; ++i) std::cout << raw.Loc[i];
        std::cout << std::endl;
        std::cout << "    Lat: " << be32toh_custom(raw.Lat) << std::endl;
        std::cout << "    Long: " << be32toh_custom(raw.Long) << std::endl;
        std::cout << "    Alt: " << be32toh_custom(raw.Alt) << std::endl;
    }

};
