// Generated C++ Header for Model 19
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model19_Raw {
    uint16_t ID;
    uint16_t L;
    char Nam[8];
    uint32_t Rte;
    uint16_t Bits;
    uint16_t Pty;
    uint16_t Dup;
    uint16_t Flw;
    uint16_t Auth;
    char UsrNam[24];
    char Pw[12];
    uint16_t pad_31;
};
#pragma pack(pop)

class Model19 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 19;
    Model19_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model19_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_Bits() const {
        return be16toh_custom(raw.Bits);
    }

    uint16_t get_raw_Pty() const {
        return be16toh_custom(raw.Pty);
    }

    uint16_t get_raw_Dup() const {
        return be16toh_custom(raw.Dup);
    }

    uint16_t get_raw_Flw() const {
        return be16toh_custom(raw.Flw);
    }

    uint16_t get_raw_Auth() const {
        return be16toh_custom(raw.Auth);
    }

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
            std::cout << "    Nam: ";
            for(size_t i=0; i<sizeof(raw.Nam) && raw.Nam[i] != 0; ++i) std::cout << raw.Nam[i];
            std::cout << std::endl;
            std::cout << "    Rte: " << be32toh_custom(raw.Rte) << std::endl;
            std::cout << "    Bits: " << be16toh_custom(raw.Bits) << std::endl;
            std::cout << "    Pty: " << be16toh_custom(raw.Pty) << std::endl;
            std::cout << "    Dup: " << be16toh_custom(raw.Dup) << std::endl;
            std::cout << "    Flw: " << be16toh_custom(raw.Flw) << std::endl;
            std::cout << "    Auth: " << be16toh_custom(raw.Auth) << std::endl;
            std::cout << "    UsrNam: ";
            for(size_t i=0; i<sizeof(raw.UsrNam) && raw.UsrNam[i] != 0; ++i) std::cout << raw.UsrNam[i];
            std::cout << std::endl;
            std::cout << "    Pw: ";
            for(size_t i=0; i<sizeof(raw.Pw) && raw.Pw[i] != 0; ++i) std::cout << raw.Pw[i];
            std::cout << std::endl;
        const uint8_t* cur_ptr = base_addr + sizeof(Model19_Raw);
    }

};
