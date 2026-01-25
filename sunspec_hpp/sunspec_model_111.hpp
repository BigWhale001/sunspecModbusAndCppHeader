// Generated C++ Header for Model 111
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model111_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t A;
    uint16_t AphA;
    uint16_t AphB;
    uint16_t AphC;
    uint16_t PPVphAB;
    uint16_t PPVphBC;
    uint16_t PPVphCA;
    uint16_t PhVphA;
    uint16_t PhVphB;
    uint16_t PhVphC;
    uint16_t W;
    uint16_t Hz;
    uint16_t VA;
    uint16_t VAr;
    uint16_t PF;
    uint16_t WH;
    uint16_t DCA;
    uint16_t DCV;
    uint16_t DCW;
    uint16_t TmpCab;
    uint16_t TmpSnk;
    uint16_t TmpTrns;
    uint16_t TmpOt;
    uint16_t St;
    uint16_t StVnd;
    uint32_t Evt1;
    uint32_t Evt2;
    uint32_t EvtVnd1;
    uint32_t EvtVnd2;
    uint32_t EvtVnd3;
    uint32_t EvtVnd4;
};
#pragma pack(pop)

class Model111 : public SunSpecModelBase {
public:
    Model111_Raw raw;

    uint16_t get_id() const override { return 111; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model111_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_St() const {
        return be16toh_custom(raw.St);
    }

    uint16_t get_raw_StVnd() const {
        return be16toh_custom(raw.StVnd);
    }

};
