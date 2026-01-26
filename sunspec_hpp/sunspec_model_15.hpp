// Generated C++ Header for Model 15
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model15_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t Clr;
    uint32_t InCnt;
    uint32_t InUcCnt;
    uint32_t InNUcCnt;
    uint32_t InDscCnt;
    uint32_t InErrCnt;
    uint32_t InUnkCnt;
    uint32_t OutCnt;
    uint32_t OutUcCnt;
    uint32_t OutNUcCnt;
    uint32_t OutDscCnt;
    uint32_t OutErrCnt;
    uint16_t pad_25;
};
#pragma pack(pop)

class Model15 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 15;
    Model15_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model15_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_Clr() const {
        return be16toh_custom(raw.Clr);
    }

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
        std::cout << "    Clr: " << be16toh_custom(raw.Clr) << std::endl;
        std::cout << "    InCnt: " << be32toh_custom(raw.InCnt) << std::endl;
        std::cout << "    InUcCnt: " << be32toh_custom(raw.InUcCnt) << std::endl;
        std::cout << "    InNUcCnt: " << be32toh_custom(raw.InNUcCnt) << std::endl;
        std::cout << "    InDscCnt: " << be32toh_custom(raw.InDscCnt) << std::endl;
        std::cout << "    InErrCnt: " << be32toh_custom(raw.InErrCnt) << std::endl;
        std::cout << "    InUnkCnt: " << be32toh_custom(raw.InUnkCnt) << std::endl;
        std::cout << "    OutCnt: " << be32toh_custom(raw.OutCnt) << std::endl;
        std::cout << "    OutUcCnt: " << be32toh_custom(raw.OutUcCnt) << std::endl;
        std::cout << "    OutNUcCnt: " << be32toh_custom(raw.OutNUcCnt) << std::endl;
        std::cout << "    OutDscCnt: " << be32toh_custom(raw.OutDscCnt) << std::endl;
        std::cout << "    OutErrCnt: " << be32toh_custom(raw.OutErrCnt) << std::endl;
    }

};
