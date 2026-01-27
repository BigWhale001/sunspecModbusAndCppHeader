// Generated C++ Header for Model 160
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model160_Raw {
    uint16_t ID;
    uint16_t L;
    int16_t DCA_SF;
    int16_t DCV_SF;
    int16_t DCW_SF;
    int16_t DCWH_SF;
    uint32_t Evt;
    uint16_t N;
    uint16_t TmsPer;
};
#pragma pack(pop)

// Group: module
#pragma pack(push, 1)
struct Model160_module_Raw {
    uint16_t ID;
    char IDStr[16];
    uint16_t DCA;
    uint16_t DCV;
    uint16_t DCW;
    uint32_t DCWH;
    uint32_t Tms;
    int16_t Tmp;
    uint16_t DCSt;
    uint32_t DCEvt;
};
#pragma pack(pop)

class Model160 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 160;
    Model160_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model160_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    int16_t get_raw_DCA_SF() const {
        return be16toh_custom_s(raw.DCA_SF);
    }

    int16_t get_raw_DCV_SF() const {
        return be16toh_custom_s(raw.DCV_SF);
    }

    int16_t get_raw_DCW_SF() const {
        return be16toh_custom_s(raw.DCW_SF);
    }

    int16_t get_raw_DCWH_SF() const {
        return be16toh_custom_s(raw.DCWH_SF);
    }

    uint16_t get_raw_TmsPer() const {
        return be16toh_custom(raw.TmsPer);
    }

    // Accessor for repeating group: module
    static const Model160_module_Raw* get_module(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model160_module_Raw*>(base_buffer + offset_bytes + index * sizeof(Model160_module_Raw));
    }

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
            std::cout << "    DCA_SF: " << be16toh_custom_s(raw.DCA_SF) << std::endl;
            std::cout << "    DCV_SF: " << be16toh_custom_s(raw.DCV_SF) << std::endl;
            std::cout << "    DCW_SF: " << be16toh_custom_s(raw.DCW_SF) << std::endl;
            std::cout << "    DCWH_SF: " << be16toh_custom_s(raw.DCWH_SF) << std::endl;
            std::cout << "    Evt: " << be32toh_custom(raw.Evt) << std::endl;
            std::cout << "    N: " << be16toh_custom(raw.N) << std::endl;
            std::cout << "    TmsPer: " << be16toh_custom(raw.TmsPer) << std::endl;
        const uint8_t* cur_ptr = base_addr + sizeof(Model160_Raw);
        {
            size_t rem_bytes = (get_raw_L() * 2 + 4) - (size_t)(cur_ptr - base_addr);
            size_t count = rem_bytes / sizeof(Model160_module_Raw);
        // Loop for group: module
        for (size_t i = 0; i < count; ++i) {
            if ((cur_ptr - base_addr) + sizeof(Model160_module_Raw) > (size_t)(get_raw_L() * 2 + 4)) break;
            auto* grp = reinterpret_cast<const Model160_module_Raw*>(cur_ptr);
            std::cout << "    Group module[" << i << "]:" << std::endl;
            std::cout << "    IDStr: ";
            for(size_t i=0; i<sizeof(grp->IDStr) && grp->IDStr[i] != 0; ++i) std::cout << grp->IDStr[i];
            std::cout << std::endl;
            std::cout << "    DCA: " << be16toh_custom(grp->DCA) << std::endl;
            std::cout << "    DCV: " << be16toh_custom(grp->DCV) << std::endl;
            std::cout << "    DCW: " << be16toh_custom(grp->DCW) << std::endl;
            std::cout << "    DCWH: " << be32toh_custom(grp->DCWH) << std::endl;
            std::cout << "    Tms: " << be32toh_custom(grp->Tms) << std::endl;
            std::cout << "    Tmp: " << be16toh_custom_s(grp->Tmp) << std::endl;
            std::cout << "    DCSt: " << be16toh_custom(grp->DCSt) << std::endl;
            std::cout << "    DCEvt: " << be32toh_custom(grp->DCEvt) << std::endl;
            cur_ptr += sizeof(Model160_module_Raw);
        }
        }
    }

};
