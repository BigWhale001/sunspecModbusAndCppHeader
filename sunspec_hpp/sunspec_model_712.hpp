// Generated C++ Header for Model 712
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model712_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t Ena;
    uint16_t AdptCrvReq;
    uint16_t AdptCrvRslt;
    uint16_t NPt;
    uint16_t NCrv;
    uint32_t RvrtTms;
    uint32_t RvrtRem;
    uint16_t RvrtCrv;
    int16_t W_SF;
    int16_t DeptRef_SF;
};
#pragma pack(pop)

// Group: Crv
#pragma pack(push, 1)
struct Model712_Crv_Raw {
    uint16_t ActPt;
    uint16_t DeptRef;
    uint16_t Pri;
    uint16_t ReadOnly;
};
#pragma pack(pop)

// Group: Crv_Pt
#pragma pack(push, 1)
struct Model712_Crv_Pt_Raw {
    int16_t W;
    int16_t Var;
};
#pragma pack(pop)

class Model712 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 712;
    Model712_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model712_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_Ena() const {
        return be16toh_custom(raw.Ena);
    }

    uint16_t get_raw_AdptCrvReq() const {
        return be16toh_custom(raw.AdptCrvReq);
    }

    uint16_t get_raw_AdptCrvRslt() const {
        return be16toh_custom(raw.AdptCrvRslt);
    }

    uint16_t get_raw_NPt() const {
        return be16toh_custom(raw.NPt);
    }

    uint16_t get_raw_NCrv() const {
        return be16toh_custom(raw.NCrv);
    }

    uint16_t get_raw_RvrtCrv() const {
        return be16toh_custom(raw.RvrtCrv);
    }

    int16_t get_raw_W_SF() const {
        return be16toh_custom_s(raw.W_SF);
    }

    int16_t get_raw_DeptRef_SF() const {
        return be16toh_custom_s(raw.DeptRef_SF);
    }

    // Accessor for repeating group: Crv
    static const Model712_Crv_Raw* get_Crv(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model712_Crv_Raw*>(base_buffer + offset_bytes + index * sizeof(Model712_Crv_Raw));
    }

    // Accessor for repeating group: Crv_Pt
    static const Model712_Crv_Pt_Raw* get_Crv_Pt(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model712_Crv_Pt_Raw*>(base_buffer + offset_bytes + index * sizeof(Model712_Crv_Pt_Raw));
    }

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
            std::cout << "    Ena: " << be16toh_custom(raw.Ena) << std::endl;
            std::cout << "    AdptCrvReq: " << be16toh_custom(raw.AdptCrvReq) << std::endl;
            std::cout << "    AdptCrvRslt: " << be16toh_custom(raw.AdptCrvRslt) << std::endl;
            std::cout << "    NPt: " << be16toh_custom(raw.NPt) << std::endl;
            std::cout << "    NCrv: " << be16toh_custom(raw.NCrv) << std::endl;
            std::cout << "    RvrtTms: " << be32toh_custom(raw.RvrtTms) << std::endl;
            std::cout << "    RvrtRem: " << be32toh_custom(raw.RvrtRem) << std::endl;
            std::cout << "    RvrtCrv: " << be16toh_custom(raw.RvrtCrv) << std::endl;
            std::cout << "    W_SF: " << be16toh_custom_s(raw.W_SF) << std::endl;
            std::cout << "    DeptRef_SF: " << be16toh_custom_s(raw.DeptRef_SF) << std::endl;
        const uint8_t* cur_ptr = base_addr + sizeof(Model712_Raw);
        // Loop for group: Crv
        for (size_t i = 0; i < be16toh_custom(raw.NCrv); ++i) {
            if ((cur_ptr - base_addr) + sizeof(Model712_Crv_Raw) > (size_t)(get_raw_L() * 2 + 4)) break;
            auto* grp = reinterpret_cast<const Model712_Crv_Raw*>(cur_ptr);
            std::cout << "    Group Crv[" << i << "]:" << std::endl;
            std::cout << "    ActPt: " << be16toh_custom(grp->ActPt) << std::endl;
            std::cout << "    DeptRef: " << be16toh_custom(grp->DeptRef) << std::endl;
            std::cout << "    Pri: " << be16toh_custom(grp->Pri) << std::endl;
            std::cout << "    ReadOnly: " << be16toh_custom(grp->ReadOnly) << std::endl;
            cur_ptr += sizeof(Model712_Crv_Raw);
        // Loop for group: Pt
        for (size_t i = 0; i < be16toh_custom(raw.NPt); ++i) {
            if ((cur_ptr - base_addr) + sizeof(Model712_Crv_Pt_Raw) > (size_t)(get_raw_L() * 2 + 4)) break;
            auto* grp = reinterpret_cast<const Model712_Crv_Pt_Raw*>(cur_ptr);
            std::cout << "    Group Pt[" << i << "]:" << std::endl;
            std::cout << "    W: " << be16toh_custom_s(grp->W) << std::endl;
            std::cout << "    Var: " << be16toh_custom_s(grp->Var) << std::endl;
            cur_ptr += sizeof(Model712_Crv_Pt_Raw);
        }
        }
    }

};
