// Generated C++ Header for Model 302
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model302_Raw {
    uint16_t ID;
    uint16_t L;
};
#pragma pack(pop)

// Repeating group: repeating
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
    Model302_Raw raw;

    uint16_t get_id() const override { return 302; }

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

};
