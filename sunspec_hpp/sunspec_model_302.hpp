// Generated C++ Header for Model 302
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model302_Raw {
    uint16_t ID;
    uint16_t L;
};
#pragma pack(pop)

// Group: repeating
#pragma pack(push, 1)
struct Model302_repeating_Raw {
    uint16_t GHI;
    uint16_t POAI;
    uint16_t DFI;
    uint16_t DNI;
    uint16_t OTI;
};
#pragma pack(pop)

class Model302 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 302;
    Model302_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model302_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    // Accessor for repeating group: repeating
    static const Model302_repeating_Raw* get_repeating(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model302_repeating_Raw*>(base_buffer + offset_bytes + index * sizeof(Model302_repeating_Raw));
    }

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
        const uint8_t* cur_ptr = base_addr + sizeof(Model302_Raw);
        {
            size_t rem_bytes = (get_raw_L() * 2 + 4) - (size_t)(cur_ptr - base_addr);
            size_t count = rem_bytes / sizeof(Model302_repeating_Raw);
        // Loop for group: repeating
        for (size_t i = 0; i < count; ++i) {
            if ((cur_ptr - base_addr) + sizeof(Model302_repeating_Raw) > (size_t)(get_raw_L() * 2 + 4)) break;
            auto* grp = reinterpret_cast<const Model302_repeating_Raw*>(cur_ptr);
            std::cout << "    Group repeating[" << i << "]:" << std::endl;
            std::cout << "    GHI: " << be16toh_custom(grp->GHI) << std::endl;
            std::cout << "    POAI: " << be16toh_custom(grp->POAI) << std::endl;
            std::cout << "    DFI: " << be16toh_custom(grp->DFI) << std::endl;
            std::cout << "    DNI: " << be16toh_custom(grp->DNI) << std::endl;
            std::cout << "    OTI: " << be16toh_custom(grp->OTI) << std::endl;
            cur_ptr += sizeof(Model302_repeating_Raw);
        }
        }
    }

};
