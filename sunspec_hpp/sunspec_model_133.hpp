// Generated C++ Header for Model 133
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model133_Raw {
    uint16_t ID;
    uint16_t L;
    uint32_t ActSchd;
    uint16_t ModEna;
    uint16_t NSchd;
    uint16_t NPts;
    uint16_t pad_7;
};
#pragma pack(pop)

// Group: repeating
#pragma pack(push, 1)
struct Model133_repeating_Raw {
    uint16_t ActPts;
    uint32_t StrTms;
    uint16_t RepPer;
    uint16_t IntvTyp;
    uint16_t XTyp;
    int16_t X_SF;
    uint16_t YTyp;
    int16_t Y_SF;
    int32_t X1;
    int32_t Y1;
    int32_t X2;
    int32_t Y2;
    int32_t X3;
    int32_t Y3;
    int32_t X4;
    int32_t Y4;
    int32_t X5;
    int32_t Y5;
    int32_t X6;
    int32_t Y6;
    int32_t X7;
    int32_t Y7;
    int32_t X8;
    int32_t Y8;
    int32_t X9;
    int32_t Y9;
    int32_t X10;
    int32_t Y10;
    char Nam[16];
    uint16_t WinTms;
    uint16_t RmpTms;
    uint16_t ActIndx;
};
#pragma pack(pop)

class Model133 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 133;
    Model133_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model133_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_ModEna() const {
        return be16toh_custom(raw.ModEna);
    }

    uint16_t get_raw_NSchd() const {
        return be16toh_custom(raw.NSchd);
    }

    uint16_t get_raw_NPts() const {
        return be16toh_custom(raw.NPts);
    }

    // Accessor for repeating group: repeating
    static const Model133_repeating_Raw* get_repeating(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model133_repeating_Raw*>(base_buffer + offset_bytes + index * sizeof(Model133_repeating_Raw));
    }

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
            std::cout << "    ActSchd: " << be32toh_custom(raw.ActSchd) << std::endl;
            std::cout << "    ModEna: " << be16toh_custom(raw.ModEna) << std::endl;
            std::cout << "    NSchd: " << be16toh_custom(raw.NSchd) << std::endl;
            std::cout << "    NPts: " << be16toh_custom(raw.NPts) << std::endl;
        const uint8_t* cur_ptr = base_addr + sizeof(Model133_Raw);
        {
            size_t rem_bytes = (get_raw_L() * 2 + 4) - (size_t)(cur_ptr - base_addr);
            size_t count = rem_bytes / sizeof(Model133_repeating_Raw);
        // Loop for group: repeating
        for (size_t i = 0; i < count; ++i) {
            if ((cur_ptr - base_addr) + sizeof(Model133_repeating_Raw) > (size_t)(get_raw_L() * 2 + 4)) break;
            auto* grp = reinterpret_cast<const Model133_repeating_Raw*>(cur_ptr);
            std::cout << "    Group repeating[" << i << "]:" << std::endl;
            std::cout << "    ActPts: " << be16toh_custom(grp->ActPts) << std::endl;
            std::cout << "    StrTms: " << be32toh_custom(grp->StrTms) << std::endl;
            std::cout << "    RepPer: " << be16toh_custom(grp->RepPer) << std::endl;
            std::cout << "    IntvTyp: " << be16toh_custom(grp->IntvTyp) << std::endl;
            std::cout << "    XTyp: " << be16toh_custom(grp->XTyp) << std::endl;
            std::cout << "    X_SF: " << be16toh_custom_s(grp->X_SF) << std::endl;
            std::cout << "    YTyp: " << be16toh_custom(grp->YTyp) << std::endl;
            std::cout << "    Y_SF: " << be16toh_custom_s(grp->Y_SF) << std::endl;
            std::cout << "    X1: " << be32toh_custom(grp->X1) << std::endl;
            std::cout << "    Y1: " << be32toh_custom(grp->Y1) << std::endl;
            std::cout << "    X2: " << be32toh_custom(grp->X2) << std::endl;
            std::cout << "    Y2: " << be32toh_custom(grp->Y2) << std::endl;
            std::cout << "    X3: " << be32toh_custom(grp->X3) << std::endl;
            std::cout << "    Y3: " << be32toh_custom(grp->Y3) << std::endl;
            std::cout << "    X4: " << be32toh_custom(grp->X4) << std::endl;
            std::cout << "    Y4: " << be32toh_custom(grp->Y4) << std::endl;
            std::cout << "    X5: " << be32toh_custom(grp->X5) << std::endl;
            std::cout << "    Y5: " << be32toh_custom(grp->Y5) << std::endl;
            std::cout << "    X6: " << be32toh_custom(grp->X6) << std::endl;
            std::cout << "    Y6: " << be32toh_custom(grp->Y6) << std::endl;
            std::cout << "    X7: " << be32toh_custom(grp->X7) << std::endl;
            std::cout << "    Y7: " << be32toh_custom(grp->Y7) << std::endl;
            std::cout << "    X8: " << be32toh_custom(grp->X8) << std::endl;
            std::cout << "    Y8: " << be32toh_custom(grp->Y8) << std::endl;
            std::cout << "    X9: " << be32toh_custom(grp->X9) << std::endl;
            std::cout << "    Y9: " << be32toh_custom(grp->Y9) << std::endl;
            std::cout << "    X10: " << be32toh_custom(grp->X10) << std::endl;
            std::cout << "    Y10: " << be32toh_custom(grp->Y10) << std::endl;
            std::cout << "    Nam: ";
            for(size_t i=0; i<sizeof(grp->Nam) && grp->Nam[i] != 0; ++i) std::cout << grp->Nam[i];
            std::cout << std::endl;
            std::cout << "    WinTms: " << be16toh_custom(grp->WinTms) << std::endl;
            std::cout << "    RmpTms: " << be16toh_custom(grp->RmpTms) << std::endl;
            std::cout << "    ActIndx: " << be16toh_custom(grp->ActIndx) << std::endl;
            cur_ptr += sizeof(Model133_repeating_Raw);
        }
        }
    }

};
