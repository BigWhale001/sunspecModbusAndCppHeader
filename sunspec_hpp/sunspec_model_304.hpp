// Generated C++ Header for Model 304
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model304_Raw {
    uint16_t ID;
    uint16_t L;
};
#pragma pack(pop)

// Group: incl
#pragma pack(push, 1)
struct Model304_incl_Raw {
    int32_t Inclx;
    int32_t Incly;
    int32_t Inclz;
};
#pragma pack(pop)

class Model304 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 304;
    Model304_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model304_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    // Accessor for repeating group: incl
    static const Model304_incl_Raw* get_incl(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model304_incl_Raw*>(base_buffer + offset_bytes + index * sizeof(Model304_incl_Raw));
    }

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
        const uint8_t* cur_ptr = base_addr + sizeof(Model304_Raw);
        {
            size_t rem_bytes = (get_raw_L() * 2 + 4) - (size_t)(cur_ptr - base_addr);
            size_t count = rem_bytes / sizeof(Model304_incl_Raw);
        // Loop for group: incl
        for (size_t i = 0; i < count; ++i) {
            if ((cur_ptr - base_addr) + sizeof(Model304_incl_Raw) > (size_t)(get_raw_L() * 2 + 4)) break;
            auto* grp = reinterpret_cast<const Model304_incl_Raw*>(cur_ptr);
            std::cout << "    Group incl[" << i << "]:" << std::endl;
            std::cout << "    Inclx: " << be32toh_custom(grp->Inclx) << std::endl;
            std::cout << "    Incly: " << be32toh_custom(grp->Incly) << std::endl;
            std::cout << "    Inclz: " << be32toh_custom(grp->Inclz) << std::endl;
            cur_ptr += sizeof(Model304_incl_Raw);
        }
        }
    }

};
