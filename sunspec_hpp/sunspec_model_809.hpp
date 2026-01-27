// Generated C++ Header for Model 809
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model809_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t StackTBD;
};
#pragma pack(pop)

// Group: cell
#pragma pack(push, 1)
struct Model809_cell_Raw {
    uint16_t CellTBD;
};
#pragma pack(pop)

class Model809 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 809;
    Model809_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model809_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_StackTBD() const {
        return be16toh_custom(raw.StackTBD);
    }

    // Accessor for repeating group: cell
    static const Model809_cell_Raw* get_cell(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model809_cell_Raw*>(base_buffer + offset_bytes + index * sizeof(Model809_cell_Raw));
    }

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
            std::cout << "    StackTBD: " << be16toh_custom(raw.StackTBD) << std::endl;
        const uint8_t* cur_ptr = base_addr + sizeof(Model809_Raw);
        {
            size_t rem_bytes = (get_raw_L() * 2 + 4) - (size_t)(cur_ptr - base_addr);
            size_t count = rem_bytes / sizeof(Model809_cell_Raw);
        // Loop for group: cell
        for (size_t i = 0; i < count; ++i) {
            if ((cur_ptr - base_addr) + sizeof(Model809_cell_Raw) > (size_t)(get_raw_L() * 2 + 4)) break;
            auto* grp = reinterpret_cast<const Model809_cell_Raw*>(cur_ptr);
            std::cout << "    Group cell[" << i << "]:" << std::endl;
            std::cout << "    CellTBD: " << be16toh_custom(grp->CellTBD) << std::endl;
            cur_ptr += sizeof(Model809_cell_Raw);
        }
        }
    }

};
