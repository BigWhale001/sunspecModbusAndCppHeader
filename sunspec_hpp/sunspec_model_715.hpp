// Generated C++ Header for Model 715
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model715_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t LocRemCtl;
    uint32_t DERHb;
    uint32_t ControllerHb;
    uint16_t AlarmReset;
    uint16_t OpCtl;
};
#pragma pack(pop)

class Model715 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 715;
    Model715_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model715_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_LocRemCtl() const {
        return be16toh_custom(raw.LocRemCtl);
    }

    uint16_t get_raw_AlarmReset() const {
        return be16toh_custom(raw.AlarmReset);
    }

    uint16_t get_raw_OpCtl() const {
        return be16toh_custom(raw.OpCtl);
    }

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
        std::cout << "    LocRemCtl: " << be16toh_custom(raw.LocRemCtl) << std::endl;
        std::cout << "    DERHb: " << be32toh_custom(raw.DERHb) << std::endl;
        std::cout << "    ControllerHb: " << be32toh_custom(raw.ControllerHb) << std::endl;
        std::cout << "    AlarmReset: " << be16toh_custom(raw.AlarmReset) << std::endl;
        std::cout << "    OpCtl: " << be16toh_custom(raw.OpCtl) << std::endl;
    }

};
