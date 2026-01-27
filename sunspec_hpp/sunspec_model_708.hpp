// Generated C++ Header for Model 708
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model708_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t Ena;
    uint16_t AdptCrvReq;
    uint16_t AdptCrvRslt;
    uint16_t NPt;
    uint16_t NCrvSet;
    int16_t V_SF;
    int16_t Tms_SF;
};
#pragma pack(pop)

// Group: Crv
#pragma pack(push, 1)
struct Model708_Crv_Raw {
    uint16_t ReadOnly;
};
#pragma pack(pop)

// Group: Crv_MustTrip
#pragma pack(push, 1)
struct Model708_Crv_MustTrip_Raw {
    uint16_t ActPt;
};
#pragma pack(pop)

// Group: Crv_MustTrip_Pt
#pragma pack(push, 1)
struct Model708_Crv_MustTrip_Pt_Raw {
    uint16_t V;
    uint32_t Tms;
};
#pragma pack(pop)

// Group: Crv_MayTrip
#pragma pack(push, 1)
struct Model708_Crv_MayTrip_Raw {
    uint16_t ActPt;
};
#pragma pack(pop)

// Group: Crv_MayTrip_Pt
#pragma pack(push, 1)
struct Model708_Crv_MayTrip_Pt_Raw {
    uint16_t V;
    uint32_t Tms;
};
#pragma pack(pop)

// Group: Crv_MomCess
#pragma pack(push, 1)
struct Model708_Crv_MomCess_Raw {
    uint16_t ActPt;
};
#pragma pack(pop)

// Group: Crv_MomCess_Pt
#pragma pack(push, 1)
struct Model708_Crv_MomCess_Pt_Raw {
    uint16_t V;
    uint32_t Tms;
};
#pragma pack(pop)

class Model708 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 708;
    Model708_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model708_Raw));
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

    uint16_t get_raw_NCrvSet() const {
        return be16toh_custom(raw.NCrvSet);
    }

    int16_t get_raw_V_SF() const {
        return be16toh_custom_s(raw.V_SF);
    }

    int16_t get_raw_Tms_SF() const {
        return be16toh_custom_s(raw.Tms_SF);
    }

    // Accessor for repeating group: Crv
    static const Model708_Crv_Raw* get_Crv(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model708_Crv_Raw*>(base_buffer + offset_bytes + index * sizeof(Model708_Crv_Raw));
    }

    // Accessor for repeating group: Crv_MustTrip
    static const Model708_Crv_MustTrip_Raw* get_Crv_MustTrip(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model708_Crv_MustTrip_Raw*>(base_buffer + offset_bytes + index * sizeof(Model708_Crv_MustTrip_Raw));
    }

    // Accessor for repeating group: Crv_MustTrip_Pt
    static const Model708_Crv_MustTrip_Pt_Raw* get_Crv_MustTrip_Pt(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model708_Crv_MustTrip_Pt_Raw*>(base_buffer + offset_bytes + index * sizeof(Model708_Crv_MustTrip_Pt_Raw));
    }

    // Accessor for repeating group: Crv_MayTrip
    static const Model708_Crv_MayTrip_Raw* get_Crv_MayTrip(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model708_Crv_MayTrip_Raw*>(base_buffer + offset_bytes + index * sizeof(Model708_Crv_MayTrip_Raw));
    }

    // Accessor for repeating group: Crv_MayTrip_Pt
    static const Model708_Crv_MayTrip_Pt_Raw* get_Crv_MayTrip_Pt(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model708_Crv_MayTrip_Pt_Raw*>(base_buffer + offset_bytes + index * sizeof(Model708_Crv_MayTrip_Pt_Raw));
    }

    // Accessor for repeating group: Crv_MomCess
    static const Model708_Crv_MomCess_Raw* get_Crv_MomCess(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model708_Crv_MomCess_Raw*>(base_buffer + offset_bytes + index * sizeof(Model708_Crv_MomCess_Raw));
    }

    // Accessor for repeating group: Crv_MomCess_Pt
    static const Model708_Crv_MomCess_Pt_Raw* get_Crv_MomCess_Pt(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model708_Crv_MomCess_Pt_Raw*>(base_buffer + offset_bytes + index * sizeof(Model708_Crv_MomCess_Pt_Raw));
    }

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
            std::cout << "    Ena: " << be16toh_custom(raw.Ena) << std::endl;
            std::cout << "    AdptCrvReq: " << be16toh_custom(raw.AdptCrvReq) << std::endl;
            std::cout << "    AdptCrvRslt: " << be16toh_custom(raw.AdptCrvRslt) << std::endl;
            std::cout << "    NPt: " << be16toh_custom(raw.NPt) << std::endl;
            std::cout << "    NCrvSet: " << be16toh_custom(raw.NCrvSet) << std::endl;
            std::cout << "    V_SF: " << be16toh_custom_s(raw.V_SF) << std::endl;
            std::cout << "    Tms_SF: " << be16toh_custom_s(raw.Tms_SF) << std::endl;
        const uint8_t* cur_ptr = base_addr + sizeof(Model708_Raw);
        // Loop for group: Crv
        for (size_t i = 0; i < be16toh_custom(raw.NCrvSet); ++i) {
            if ((cur_ptr - base_addr) + sizeof(Model708_Crv_Raw) > (size_t)(get_raw_L() * 2 + 4)) break;
            auto* grp = reinterpret_cast<const Model708_Crv_Raw*>(cur_ptr);
            std::cout << "    Group Crv[" << i << "]:" << std::endl;
            std::cout << "    ReadOnly: " << be16toh_custom(grp->ReadOnly) << std::endl;
            cur_ptr += sizeof(Model708_Crv_Raw);
        // Group: MustTrip (Single)
        if ((cur_ptr - base_addr) + sizeof(Model708_Crv_MustTrip_Raw) <= (size_t)(get_raw_L() * 2 + 4)) {
            auto* grp = reinterpret_cast<const Model708_Crv_MustTrip_Raw*>(cur_ptr);
            std::cout << "    Group MustTrip:" << std::endl;
            std::cout << "    ActPt: " << be16toh_custom(grp->ActPt) << std::endl;
            cur_ptr += sizeof(Model708_Crv_MustTrip_Raw);
        // Loop for group: Pt
        for (size_t i = 0; i < be16toh_custom(raw.NPt); ++i) {
            if ((cur_ptr - base_addr) + sizeof(Model708_Crv_MustTrip_Pt_Raw) > (size_t)(get_raw_L() * 2 + 4)) break;
            auto* grp = reinterpret_cast<const Model708_Crv_MustTrip_Pt_Raw*>(cur_ptr);
            std::cout << "    Group Pt[" << i << "]:" << std::endl;
            std::cout << "    V: " << be16toh_custom(grp->V) << std::endl;
            std::cout << "    Tms: " << be32toh_custom(grp->Tms) << std::endl;
            cur_ptr += sizeof(Model708_Crv_MustTrip_Pt_Raw);
        }
        }
        // Group: MayTrip (Single)
        if ((cur_ptr - base_addr) + sizeof(Model708_Crv_MayTrip_Raw) <= (size_t)(get_raw_L() * 2 + 4)) {
            auto* grp = reinterpret_cast<const Model708_Crv_MayTrip_Raw*>(cur_ptr);
            std::cout << "    Group MayTrip:" << std::endl;
            std::cout << "    ActPt: " << be16toh_custom(grp->ActPt) << std::endl;
            cur_ptr += sizeof(Model708_Crv_MayTrip_Raw);
        // Loop for group: Pt
        for (size_t i = 0; i < be16toh_custom(raw.NPt); ++i) {
            if ((cur_ptr - base_addr) + sizeof(Model708_Crv_MayTrip_Pt_Raw) > (size_t)(get_raw_L() * 2 + 4)) break;
            auto* grp = reinterpret_cast<const Model708_Crv_MayTrip_Pt_Raw*>(cur_ptr);
            std::cout << "    Group Pt[" << i << "]:" << std::endl;
            std::cout << "    V: " << be16toh_custom(grp->V) << std::endl;
            std::cout << "    Tms: " << be32toh_custom(grp->Tms) << std::endl;
            cur_ptr += sizeof(Model708_Crv_MayTrip_Pt_Raw);
        }
        }
        // Group: MomCess (Single)
        if ((cur_ptr - base_addr) + sizeof(Model708_Crv_MomCess_Raw) <= (size_t)(get_raw_L() * 2 + 4)) {
            auto* grp = reinterpret_cast<const Model708_Crv_MomCess_Raw*>(cur_ptr);
            std::cout << "    Group MomCess:" << std::endl;
            std::cout << "    ActPt: " << be16toh_custom(grp->ActPt) << std::endl;
            cur_ptr += sizeof(Model708_Crv_MomCess_Raw);
        // Loop for group: Pt
        for (size_t i = 0; i < be16toh_custom(raw.NPt); ++i) {
            if ((cur_ptr - base_addr) + sizeof(Model708_Crv_MomCess_Pt_Raw) > (size_t)(get_raw_L() * 2 + 4)) break;
            auto* grp = reinterpret_cast<const Model708_Crv_MomCess_Pt_Raw*>(cur_ptr);
            std::cout << "    Group Pt[" << i << "]:" << std::endl;
            std::cout << "    V: " << be16toh_custom(grp->V) << std::endl;
            std::cout << "    Tms: " << be32toh_custom(grp->Tms) << std::endl;
            cur_ptr += sizeof(Model708_Crv_MomCess_Pt_Raw);
        }
        }
        }
    }

};
