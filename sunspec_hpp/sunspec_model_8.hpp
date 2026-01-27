// Generated C++ Header for Model 8
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model8_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t Fmt;
    uint16_t N;
};
#pragma pack(pop)

// Group: repeating
#pragma pack(push, 1)
struct Model8_repeating_Raw {
    uint16_t Cert;
};
#pragma pack(pop)

class Model8 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 8;
    Model8_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model8_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_Fmt() const {
        return be16toh_custom(raw.Fmt);
    }

    uint16_t get_raw_N() const {
        return be16toh_custom(raw.N);
    }

    // Accessor for repeating group: repeating
    static const Model8_repeating_Raw* get_repeating(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model8_repeating_Raw*>(base_buffer + offset_bytes + index * sizeof(Model8_repeating_Raw));
    }

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
            std::cout << "    Fmt: " << be16toh_custom(raw.Fmt) << std::endl;
            std::cout << "    N: " << be16toh_custom(raw.N) << std::endl;
        const uint8_t* cur_ptr = base_addr + sizeof(Model8_Raw);
        {
            size_t rem_bytes = (get_raw_L() * 2 + 4) - (size_t)(cur_ptr - base_addr);
            size_t count = rem_bytes / sizeof(Model8_repeating_Raw);
        // Loop for group: repeating
        for (size_t i = 0; i < count; ++i) {
            if ((cur_ptr - base_addr) + sizeof(Model8_repeating_Raw) > (size_t)(get_raw_L() * 2 + 4)) break;
            auto* grp = reinterpret_cast<const Model8_repeating_Raw*>(cur_ptr);
            std::cout << "    Group repeating[" << i << "]:" << std::endl;
            std::cout << "    Cert: " << be16toh_custom(grp->Cert) << std::endl;
            cur_ptr += sizeof(Model8_repeating_Raw);
        }
        }
    }

};
