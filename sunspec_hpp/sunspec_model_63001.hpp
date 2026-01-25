// Generated C++ Header for Model 63001
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model63001_Raw {
    uint16_t ID;
    uint16_t L;
    int16_t sunssf_1;
    int16_t sunssf_2;
    int16_t sunssf_3;
    int16_t sunssf_4;
    int16_t int16_1;
    int16_t int16_2;
    int16_t int16_3;
    int16_t int16_4;
    int16_t int16_5;
    int16_t int16_u;
    uint16_t uint16_1;
    uint16_t uint16_2;
    uint16_t uint16_3;
    uint16_t uint16_4;
    uint16_t uint16_5;
    uint16_t uint16_u;
    uint16_t acc16;
    uint16_t acc16_u;
    uint16_t enum16;
    uint16_t enum16_u;
    uint16_t bitfield16;
    uint16_t bitfield16_u;
    int32_t int32_1;
    int32_t int32_2;
    int32_t int32_3;
    int32_t int32_4;
    int32_t int32_5;
    int32_t int32_u;
    uint32_t uint32_1;
    uint32_t uint32_2;
    uint32_t uint32_3;
    uint32_t uint32_4;
    uint32_t uint32_5;
    uint32_t uint32_u;
    uint32_t acc32;
    uint32_t acc32_u;
    uint32_t enum32;
    uint32_t enum32_u;
    uint32_t bitfield32;
    uint32_t bitfield32_u;
    uint16_t ipaddr[2];
    uint16_t ipaddr_u[2];
    uint16_t int64[4];
    uint16_t int64_u[4];
    uint16_t acc64[4];
    uint16_t acc64_u[4];
    uint16_t ipv6addr[8];
    uint16_t ipv6addr_u[8];
    uint16_t float32;
    uint16_t float32_u;
    char string[32];
    char string_u[32];
    int16_t sunssf_5;
    int16_t sunssf_6;
    int16_t sunssf_7;
    uint16_t pad_135;
};
#pragma pack(pop)

// Repeating group: repeating
#pragma pack(push, 1)
struct Model63001_repeating_Raw {
    int16_t sunssf_8;
    int16_t int16_11;
    int16_t int16_12;
    int16_t int16_u;
    uint16_t uint16_11;
    uint16_t uint16_12;
    uint16_t uint16_13;
    uint16_t uint16_u;
    int32_t int32;
    int32_t int32_u;
    uint32_t uint32;
    uint32_t uint32_u;
    int16_t sunssf_9;
    uint16_t pad_17;
};
#pragma pack(pop)

class Model63001 : public SunSpecModelBase {
public:
    Model63001_Raw raw;

    uint16_t get_id() const override { return 63001; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model63001_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    int16_t get_raw_sunssf_1() const {
        return be16toh_custom_s(raw.sunssf_1);
    }

    int16_t get_raw_sunssf_2() const {
        return be16toh_custom_s(raw.sunssf_2);
    }

    int16_t get_raw_sunssf_3() const {
        return be16toh_custom_s(raw.sunssf_3);
    }

    int16_t get_raw_sunssf_4() const {
        return be16toh_custom_s(raw.sunssf_4);
    }

    float get_int16_1() const {
        int16_t sf_val = be16toh_custom_s(raw.sunssf_1);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.int16_1);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_int16_1() const {
        return be16toh_custom_s(raw.int16_1);
    }

    float get_int16_2() const {
        int16_t sf_val = be16toh_custom_s(raw.sunssf_2);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.int16_2);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_int16_2() const {
        return be16toh_custom_s(raw.int16_2);
    }

    float get_int16_3() const {
        int16_t sf_val = be16toh_custom_s(raw.sunssf_3);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.int16_3);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_int16_3() const {
        return be16toh_custom_s(raw.int16_3);
    }

    float get_int16_4() const {
        int16_t sf_val = be16toh_custom_s(raw.sunssf_4);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.int16_4);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_int16_4() const {
        return be16toh_custom_s(raw.int16_4);
    }

    int16_t get_raw_int16_5() const {
        return be16toh_custom_s(raw.int16_5);
    }

    int16_t get_raw_int16_u() const {
        return be16toh_custom_s(raw.int16_u);
    }

    float get_uint16_1() const {
        int16_t sf_val = be16toh_custom_s(raw.sunssf_1);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.uint16_1);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_uint16_1() const {
        return be16toh_custom(raw.uint16_1);
    }

    float get_uint16_2() const {
        int16_t sf_val = be16toh_custom_s(raw.sunssf_2);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.uint16_2);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_uint16_2() const {
        return be16toh_custom(raw.uint16_2);
    }

    float get_uint16_3() const {
        int16_t sf_val = be16toh_custom_s(raw.sunssf_3);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.uint16_3);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_uint16_3() const {
        return be16toh_custom(raw.uint16_3);
    }

    float get_uint16_4() const {
        int16_t sf_val = be16toh_custom_s(raw.sunssf_4);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.uint16_4);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_uint16_4() const {
        return be16toh_custom(raw.uint16_4);
    }

    uint16_t get_raw_uint16_5() const {
        return be16toh_custom(raw.uint16_5);
    }

    uint16_t get_raw_uint16_u() const {
        return be16toh_custom(raw.uint16_u);
    }

    uint16_t get_raw_enum16() const {
        return be16toh_custom(raw.enum16);
    }

    uint16_t get_raw_enum16_u() const {
        return be16toh_custom(raw.enum16_u);
    }

    uint16_t get_raw_bitfield16() const {
        return be16toh_custom(raw.bitfield16);
    }

    uint16_t get_raw_bitfield16_u() const {
        return be16toh_custom(raw.bitfield16_u);
    }

    int16_t get_raw_sunssf_5() const {
        return be16toh_custom_s(raw.sunssf_5);
    }

    int16_t get_raw_sunssf_6() const {
        return be16toh_custom_s(raw.sunssf_6);
    }

    int16_t get_raw_sunssf_7() const {
        return be16toh_custom_s(raw.sunssf_7);
    }

    // Accessor for repeating group: repeating
    static const Model63001_repeating_Raw* get_repeating(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model63001_repeating_Raw*>(base_buffer + offset_bytes + index * sizeof(Model63001_repeating_Raw));
    }

};
