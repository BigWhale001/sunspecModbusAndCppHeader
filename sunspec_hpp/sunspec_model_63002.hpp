// Generated C++ Header for Model 63002
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model63002_Raw {
    uint16_t ID;
    uint16_t L;
};
#pragma pack(pop)

// Repeating group: repeating
#pragma pack(push, 1)
struct Model63002_repeating_Raw {
    int16_t sunssf_1;
    int16_t int16_1;
    int16_t int16_2;
    int16_t sunssf_2;
};
#pragma pack(pop)

class Model63002 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 63002;
    Model63002_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model63002_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    // Accessor for repeating group: repeating
    static const Model63002_repeating_Raw* get_repeating(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model63002_repeating_Raw*>(base_buffer + offset_bytes + index * sizeof(Model63002_repeating_Raw));
    }

};
