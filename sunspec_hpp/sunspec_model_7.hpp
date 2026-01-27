// Generated C++ Header for Model 7
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
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

// Group: repeating
#pragma pack(push, 1)
struct Model7_repeating_Raw {
    uint16_t DS;
};
#pragma pack(pop)

class Model7 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 7;
    Model7_Raw raw;

    uint16_t get_id() const override { return ID; }

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
        return be16toh_custom(raw.Sts);
    }

    uint16_t get_raw_Ms() const {
        return be16toh_custom(raw.Ms);
    }

    uint16_t get_raw_Seq() const {
        return be16toh_custom(raw.Seq);
    }

    uint16_t get_raw_Alm() const {
        return be16toh_custom(raw.Alm);
    }

    uint16_t get_raw_Alg() const {
        return be16toh_custom(raw.Alg);
    }

    uint16_t get_raw_N() const {
        return be16toh_custom(raw.N);
    }

    // Accessor for repeating group: repeating
    static const Model7_repeating_Raw* get_repeating(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model7_repeating_Raw*>(base_buffer + offset_bytes + index * sizeof(Model7_repeating_Raw));
    }

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
            std::cout << "    RqSeq: " << be16toh_custom(raw.RqSeq) << std::endl;
            std::cout << "    Sts: " << be16toh_custom(raw.Sts) << std::endl;
            std::cout << "    Ts: " << be32toh_custom(raw.Ts) << std::endl;
            std::cout << "    Ms: " << be16toh_custom(raw.Ms) << std::endl;
            std::cout << "    Seq: " << be16toh_custom(raw.Seq) << std::endl;
            std::cout << "    Alm: " << be16toh_custom(raw.Alm) << std::endl;
            std::cout << "    Alg: " << be16toh_custom(raw.Alg) << std::endl;
            std::cout << "    N: " << be16toh_custom(raw.N) << std::endl;
        const uint8_t* cur_ptr = base_addr + sizeof(Model7_Raw);
        {
            size_t rem_bytes = (get_raw_L() * 2 + 4) - (size_t)(cur_ptr - base_addr);
            size_t count = rem_bytes / sizeof(Model7_repeating_Raw);
        // Loop for group: repeating
        for (size_t i = 0; i < count; ++i) {
            if ((cur_ptr - base_addr) + sizeof(Model7_repeating_Raw) > (size_t)(get_raw_L() * 2 + 4)) break;
            auto* grp = reinterpret_cast<const Model7_repeating_Raw*>(cur_ptr);
            std::cout << "    Group repeating[" << i << "]:" << std::endl;
            std::cout << "    DS: " << be16toh_custom(grp->DS) << std::endl;
            cur_ptr += sizeof(Model7_repeating_Raw);
        }
        }
    }

};
