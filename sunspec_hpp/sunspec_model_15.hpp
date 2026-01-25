// Generated C++ Header for Model 15
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
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
    Model15_Raw raw;

    uint16_t get_id() const override { return 15; }

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

};
