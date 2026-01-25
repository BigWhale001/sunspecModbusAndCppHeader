// Generated C++ Header for Model 8
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
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

// Repeating group: repeating
#pragma pack(push, 1)
struct Model8_repeating_Raw {
    uint16_t Cert;
};
#pragma pack(pop)

class Model8 : public SunSpecModelBase {
public:
    Model8_Raw raw;

    uint16_t get_id() const override { return 8; }

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
        return be16toh_custom_s(raw.Fmt);
    }

    uint16_t get_raw_N() const {
        return be16toh_custom(raw.N);
    }

    // Accessor for repeating group: repeating
    static const Model8_repeating_Raw* get_repeating(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model8_repeating_Raw*>(base_buffer + offset_bytes + index * sizeof(Model8_repeating_Raw));
    }

};
