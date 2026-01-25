// Generated C++ Header for Model 710
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model710_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t Ena;
    uint16_t AdptCrvReq;
    uint16_t AdptCrvRslt;
    uint16_t NPt;
    uint16_t NCrvSet;
    int16_t Hz_SF;
    int16_t Tms_SF;
};
#pragma pack(pop)

// Repeating group: Crv
#pragma pack(push, 1)
struct Model710_Crv_Raw {
    uint16_t ReadOnly;
};
#pragma pack(pop)

// Repeating group: Crv_MustTrip
#pragma pack(push, 1)
struct Model710_Crv_MustTrip_Raw {
    uint16_t ActPt;
};
#pragma pack(pop)

// Repeating group: Crv_MustTrip_Pt
#pragma pack(push, 1)
struct Model710_Crv_MustTrip_Pt_Raw {
    uint32_t Hz;
    uint32_t Tms;
};
#pragma pack(pop)

// Repeating group: Crv_MayTrip
#pragma pack(push, 1)
struct Model710_Crv_MayTrip_Raw {
    uint16_t ActPt;
};
#pragma pack(pop)

// Repeating group: Crv_MayTrip_Pt
#pragma pack(push, 1)
struct Model710_Crv_MayTrip_Pt_Raw {
    uint32_t Hz;
    uint32_t Tms;
};
#pragma pack(pop)

// Repeating group: Crv_MomCess
#pragma pack(push, 1)
struct Model710_Crv_MomCess_Raw {
    uint16_t ActPt;
};
#pragma pack(pop)

// Repeating group: Crv_MomCess_Pt
#pragma pack(push, 1)
struct Model710_Crv_MomCess_Pt_Raw {
    uint32_t Hz;
    uint32_t Tms;
};
#pragma pack(pop)

class Model710 : public SunSpecModelBase {
public:
    Model710_Raw raw;

    uint16_t get_id() const override { return 710; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model710_Raw));
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

    int16_t get_raw_Hz_SF() const {
        return be16toh_custom_s(raw.Hz_SF);
    }

    int16_t get_raw_Tms_SF() const {
        return be16toh_custom_s(raw.Tms_SF);
    }

    // Accessor for repeating group: Crv
    static const Model710_Crv_Raw* get_Crv(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model710_Crv_Raw*>(base_buffer + offset_bytes + index * sizeof(Model710_Crv_Raw));
    }

    // Accessor for repeating group: Crv_MustTrip
    static const Model710_Crv_MustTrip_Raw* get_Crv_MustTrip(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model710_Crv_MustTrip_Raw*>(base_buffer + offset_bytes + index * sizeof(Model710_Crv_MustTrip_Raw));
    }

    // Accessor for repeating group: Crv_MustTrip_Pt
    static const Model710_Crv_MustTrip_Pt_Raw* get_Crv_MustTrip_Pt(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model710_Crv_MustTrip_Pt_Raw*>(base_buffer + offset_bytes + index * sizeof(Model710_Crv_MustTrip_Pt_Raw));
    }

    // Accessor for repeating group: Crv_MayTrip
    static const Model710_Crv_MayTrip_Raw* get_Crv_MayTrip(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model710_Crv_MayTrip_Raw*>(base_buffer + offset_bytes + index * sizeof(Model710_Crv_MayTrip_Raw));
    }

    // Accessor for repeating group: Crv_MayTrip_Pt
    static const Model710_Crv_MayTrip_Pt_Raw* get_Crv_MayTrip_Pt(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model710_Crv_MayTrip_Pt_Raw*>(base_buffer + offset_bytes + index * sizeof(Model710_Crv_MayTrip_Pt_Raw));
    }

    // Accessor for repeating group: Crv_MomCess
    static const Model710_Crv_MomCess_Raw* get_Crv_MomCess(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model710_Crv_MomCess_Raw*>(base_buffer + offset_bytes + index * sizeof(Model710_Crv_MomCess_Raw));
    }

    // Accessor for repeating group: Crv_MomCess_Pt
    static const Model710_Crv_MomCess_Pt_Raw* get_Crv_MomCess_Pt(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model710_Crv_MomCess_Pt_Raw*>(base_buffer + offset_bytes + index * sizeof(Model710_Crv_MomCess_Pt_Raw));
    }

};
