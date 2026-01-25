// Generated C++ Header for Model 7
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model7_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t RqSeq;
    uint16_t Sts;
    uint32_t Ts;
    uint16_t Ms;
    uint16_t Seq;
    uint16_t Alm;
    uint16_t pad_9;
    uint16_t Alg;
    uint16_t N;
};
#pragma pack(pop)

// Repeating group: repeating
#pragma pack(push, 1)
struct Model7_repeating_Raw {
    uint16_t DS;
};
#pragma pack(pop)

class Model7 : public SunSpecModelBase {
public:
    Model7_Raw raw;

    uint16_t get_id() const override { return 7; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model7_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_RqSeq() const {
        return be16toh_custom(raw.RqSeq);
    }

    uint16_t get_raw_Sts() const {
        return be16toh_custom_s(raw.Sts);
    }

    uint16_t get_raw_Ms() const {
        return be16toh_custom(raw.Ms);
    }

    uint16_t get_raw_Seq() const {
        return be16toh_custom(raw.Seq);
    }

    uint16_t get_raw_Alm() const {
        return be16toh_custom_s(raw.Alm);
    }

    uint16_t get_raw_Alg() const {
        return be16toh_custom_s(raw.Alg);
    }

    uint16_t get_raw_N() const {
        return be16toh_custom(raw.N);
    }

    // Accessor for repeating group: repeating
    static const Model7_repeating_Raw* get_repeating(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model7_repeating_Raw*>(base_buffer + offset_bytes + index * sizeof(Model7_repeating_Raw));
    }

};
