// Generated C++ Header for Model 501
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model501_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t Stat;
    uint16_t StatVend;
    uint32_t Evt;
    uint32_t EvtVend;
    uint16_t Ctl;
    uint32_t CtlVend;
    int32_t CtlVal;
    uint32_t Tms;
    uint16_t OutA;
    uint16_t OutV;
    uint16_t OutWh;
    uint16_t OutW;
    uint16_t Tmp;
    uint16_t InA;
    uint16_t InV;
    uint16_t InWh;
    uint16_t InW;
};
#pragma pack(pop)

class Model501 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 501;
    Model501_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model501_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_Stat() const {
        return be16toh_custom(raw.Stat);
    }

    uint16_t get_raw_StatVend() const {
        return be16toh_custom(raw.StatVend);
    }

    uint16_t get_raw_Ctl() const {
        return be16toh_custom(raw.Ctl);
    }

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
            std::cout << "    Stat: " << be16toh_custom(raw.Stat) << std::endl;
            std::cout << "    StatVend: " << be16toh_custom(raw.StatVend) << std::endl;
            std::cout << "    Evt: " << be32toh_custom(raw.Evt) << std::endl;
            std::cout << "    EvtVend: " << be32toh_custom(raw.EvtVend) << std::endl;
            std::cout << "    Ctl: " << be16toh_custom(raw.Ctl) << std::endl;
            std::cout << "    CtlVend: " << be32toh_custom(raw.CtlVend) << std::endl;
            std::cout << "    CtlVal: " << be32toh_custom(raw.CtlVal) << std::endl;
            std::cout << "    Tms: " << be32toh_custom(raw.Tms) << std::endl;
            std::cout << "    OutA: " << be32toh_custom(raw.OutA) << std::endl;
            std::cout << "    OutV: " << be32toh_custom(raw.OutV) << std::endl;
            std::cout << "    OutWh: " << be32toh_custom(raw.OutWh) << std::endl;
            std::cout << "    OutW: " << be32toh_custom(raw.OutW) << std::endl;
            std::cout << "    Tmp: " << be32toh_custom(raw.Tmp) << std::endl;
            std::cout << "    InA: " << be32toh_custom(raw.InA) << std::endl;
            std::cout << "    InV: " << be32toh_custom(raw.InV) << std::endl;
            std::cout << "    InWh: " << be32toh_custom(raw.InWh) << std::endl;
            std::cout << "    InW: " << be32toh_custom(raw.InW) << std::endl;
        const uint8_t* cur_ptr = base_addr + sizeof(Model501_Raw);
    }

};
