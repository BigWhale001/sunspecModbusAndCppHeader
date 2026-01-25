// Generated C++ Header for Model 401
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model401_Raw {
    uint16_t ID;
    uint16_t L;
    int16_t DCA_SF;
    int16_t DCAhr_SF;
    int16_t DCV_SF;
    uint16_t DCAMax;
    uint16_t N;
    uint32_t Evt;
    uint32_t EvtVnd;
    int16_t DCA;
    uint32_t DCAhr;
    uint16_t DCV;
    int16_t Tmp;
};
#pragma pack(pop)

// Repeating group: string
#pragma pack(push, 1)
struct Model401_string_Raw {
    uint16_t InID;
    uint32_t InEvt;
    uint32_t InEvtVnd;
    int16_t InDCA;
    uint32_t InDCAhr;
};
#pragma pack(pop)

class Model401 : public SunSpecModelBase {
public:
    Model401_Raw raw;

    uint16_t get_id() const override { return 401; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model401_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    float get_DCAMax() const {
        int16_t sf_val = be16toh_custom_s(raw.DCA_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.DCAMax);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_DCAMax() const {
        return be16toh_custom(raw.DCAMax);
    }

    float get_DCA() const {
        int16_t sf_val = be16toh_custom_s(raw.DCA_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.DCA);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_DCA() const {
        return be16toh_custom_s(raw.DCA);
    }

    float get_DCV() const {
        int16_t sf_val = be16toh_custom_s(raw.DCV_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.DCV);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_DCV() const {
        return be16toh_custom(raw.DCV);
    }

    int16_t get_raw_Tmp() const {
        return be16toh_custom_s(raw.Tmp);
    }

    // Accessor for repeating group: string
    static const Model401_string_Raw* get_string(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model401_string_Raw*>(base_buffer + offset_bytes + index * sizeof(Model401_string_Raw));
    }

};
