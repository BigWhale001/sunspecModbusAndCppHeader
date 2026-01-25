// Generated C++ Header for Model 304
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model304_Raw {
    uint16_t ID;
    uint16_t L;
};
#pragma pack(pop)

// Repeating group: incl
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

};
