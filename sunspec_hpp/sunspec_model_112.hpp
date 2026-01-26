// Generated C++ Header for Model 112
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model112_Raw {
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

class Model112 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 112;
    Model112_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model112_Raw));
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

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
        std::cout << "    A: " << be32toh_custom(raw.A) << std::endl;
        std::cout << "    AphA: " << be32toh_custom(raw.AphA) << std::endl;
        std::cout << "    AphB: " << be32toh_custom(raw.AphB) << std::endl;
        std::cout << "    AphC: " << be32toh_custom(raw.AphC) << std::endl;
        std::cout << "    PPVphAB: " << be32toh_custom(raw.PPVphAB) << std::endl;
        std::cout << "    PPVphBC: " << be32toh_custom(raw.PPVphBC) << std::endl;
        std::cout << "    PPVphCA: " << be32toh_custom(raw.PPVphCA) << std::endl;
        std::cout << "    PhVphA: " << be32toh_custom(raw.PhVphA) << std::endl;
        std::cout << "    PhVphB: " << be32toh_custom(raw.PhVphB) << std::endl;
        std::cout << "    PhVphC: " << be32toh_custom(raw.PhVphC) << std::endl;
        std::cout << "    W: " << be32toh_custom(raw.W) << std::endl;
        std::cout << "    Hz: " << be32toh_custom(raw.Hz) << std::endl;
        std::cout << "    VA: " << be32toh_custom(raw.VA) << std::endl;
        std::cout << "    VAr: " << be32toh_custom(raw.VAr) << std::endl;
        std::cout << "    PF: " << be32toh_custom(raw.PF) << std::endl;
        std::cout << "    WH: " << be32toh_custom(raw.WH) << std::endl;
        std::cout << "    DCA: " << be32toh_custom(raw.DCA) << std::endl;
        std::cout << "    DCV: " << be32toh_custom(raw.DCV) << std::endl;
        std::cout << "    DCW: " << be32toh_custom(raw.DCW) << std::endl;
        std::cout << "    TmpCab: " << be32toh_custom(raw.TmpCab) << std::endl;
        std::cout << "    TmpSnk: " << be32toh_custom(raw.TmpSnk) << std::endl;
        std::cout << "    TmpTrns: " << be32toh_custom(raw.TmpTrns) << std::endl;
        std::cout << "    TmpOt: " << be32toh_custom(raw.TmpOt) << std::endl;
        std::cout << "    St: " << be16toh_custom(raw.St) << std::endl;
        std::cout << "    StVnd: " << be16toh_custom(raw.StVnd) << std::endl;
        std::cout << "    Evt1: " << be32toh_custom(raw.Evt1) << std::endl;
        std::cout << "    Evt2: " << be32toh_custom(raw.Evt2) << std::endl;
        std::cout << "    EvtVnd1: " << be32toh_custom(raw.EvtVnd1) << std::endl;
        std::cout << "    EvtVnd2: " << be32toh_custom(raw.EvtVnd2) << std::endl;
        std::cout << "    EvtVnd3: " << be32toh_custom(raw.EvtVnd3) << std::endl;
        std::cout << "    EvtVnd4: " << be32toh_custom(raw.EvtVnd4) << std::endl;
    }

};
