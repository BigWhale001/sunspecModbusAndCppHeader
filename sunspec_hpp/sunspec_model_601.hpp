// Generated C++ Header for Model 601
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model601_Raw {
    uint16_t ID;
    uint16_t L;
    char Nam[16];
    uint16_t Typ;
    char DtLoc[10];
    char TmLoc[6];
    uint16_t Day;
    int32_t GlblElCtl;
    int32_t GlblAzCtl;
    uint16_t GlblCtl;
    uint16_t GlblAlm;
    int16_t Dgr_SF;
    uint16_t N;
};
#pragma pack(pop)

// Group: tracker
#pragma pack(push, 1)
struct Model601_tracker_Raw {
    char Id[16];
    int32_t ElTrgt;
    int32_t AzTrgt;
    int32_t ElPos;
    int32_t AzPos;
    int32_t ElCtl;
    int32_t AzCtl;
    uint16_t Ctl;
    uint16_t Alm;
};
#pragma pack(pop)

class Model601 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 601;
    Model601_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model601_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_Typ() const {
        return be16toh_custom(raw.Typ);
    }

    uint16_t get_raw_Day() const {
        return be16toh_custom(raw.Day);
    }

    uint16_t get_raw_GlblCtl() const {
        return be16toh_custom(raw.GlblCtl);
    }

    uint16_t get_raw_GlblAlm() const {
        return be16toh_custom(raw.GlblAlm);
    }

    int16_t get_raw_Dgr_SF() const {
        return be16toh_custom_s(raw.Dgr_SF);
    }

    uint16_t get_raw_N() const {
        return be16toh_custom(raw.N);
    }

    // Accessor for repeating group: tracker
    static const Model601_tracker_Raw* get_tracker(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model601_tracker_Raw*>(base_buffer + offset_bytes + index * sizeof(Model601_tracker_Raw));
    }

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
            std::cout << "    Nam: ";
            for(size_t i=0; i<sizeof(raw.Nam) && raw.Nam[i] != 0; ++i) std::cout << raw.Nam[i];
            std::cout << std::endl;
            std::cout << "    Typ: " << be16toh_custom(raw.Typ) << std::endl;
            std::cout << "    DtLoc: ";
            for(size_t i=0; i<sizeof(raw.DtLoc) && raw.DtLoc[i] != 0; ++i) std::cout << raw.DtLoc[i];
            std::cout << std::endl;
            std::cout << "    TmLoc: ";
            for(size_t i=0; i<sizeof(raw.TmLoc) && raw.TmLoc[i] != 0; ++i) std::cout << raw.TmLoc[i];
            std::cout << std::endl;
            std::cout << "    Day: " << be16toh_custom(raw.Day) << std::endl;
            std::cout << "    GlblElCtl: " << be32toh_custom(raw.GlblElCtl) << std::endl;
            std::cout << "    GlblAzCtl: " << be32toh_custom(raw.GlblAzCtl) << std::endl;
            std::cout << "    GlblCtl: " << be16toh_custom(raw.GlblCtl) << std::endl;
            std::cout << "    GlblAlm: " << be16toh_custom(raw.GlblAlm) << std::endl;
            std::cout << "    Dgr_SF: " << be16toh_custom_s(raw.Dgr_SF) << std::endl;
            std::cout << "    N: " << be16toh_custom(raw.N) << std::endl;
        const uint8_t* cur_ptr = base_addr + sizeof(Model601_Raw);
        {
            size_t rem_bytes = (get_raw_L() * 2 + 4) - (size_t)(cur_ptr - base_addr);
            size_t count = rem_bytes / sizeof(Model601_tracker_Raw);
        // Loop for group: tracker
        for (size_t i = 0; i < count; ++i) {
            if ((cur_ptr - base_addr) + sizeof(Model601_tracker_Raw) > (size_t)(get_raw_L() * 2 + 4)) break;
            auto* grp = reinterpret_cast<const Model601_tracker_Raw*>(cur_ptr);
            std::cout << "    Group tracker[" << i << "]:" << std::endl;
            std::cout << "    Id: ";
            for(size_t i=0; i<sizeof(grp->Id) && grp->Id[i] != 0; ++i) std::cout << grp->Id[i];
            std::cout << std::endl;
            std::cout << "    ElTrgt: " << be32toh_custom(grp->ElTrgt) << std::endl;
            std::cout << "    AzTrgt: " << be32toh_custom(grp->AzTrgt) << std::endl;
            std::cout << "    ElPos: " << be32toh_custom(grp->ElPos) << std::endl;
            std::cout << "    AzPos: " << be32toh_custom(grp->AzPos) << std::endl;
            std::cout << "    ElCtl: " << be32toh_custom(grp->ElCtl) << std::endl;
            std::cout << "    AzCtl: " << be32toh_custom(grp->AzCtl) << std::endl;
            std::cout << "    Ctl: " << be16toh_custom(grp->Ctl) << std::endl;
            std::cout << "    Alm: " << be16toh_custom(grp->Alm) << std::endl;
            cur_ptr += sizeof(Model601_tracker_Raw);
        }
        }
    }

};
