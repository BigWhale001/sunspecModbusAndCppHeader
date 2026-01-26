// Generated C++ Header for Model 14
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model14_Raw {
    uint16_t ID;
    uint16_t L;
    char Nam[8];
    uint16_t Cap;
    uint16_t Cfg;
    uint16_t Typ;
    char Addr[40];
    uint16_t Port;
    char User[24];
    char Pw[24];
};
#pragma pack(pop)

class Model14 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 14;
    Model14_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model14_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_Cap() const {
        return be16toh_custom(raw.Cap);
    }

    uint16_t get_raw_Cfg() const {
        return be16toh_custom(raw.Cfg);
    }

    uint16_t get_raw_Typ() const {
        return be16toh_custom(raw.Typ);
    }

    uint16_t get_raw_Port() const {
        return be16toh_custom(raw.Port);
    }

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
        std::cout << "    Nam: ";
        for(size_t i=0; i<sizeof(raw.Nam) && raw.Nam[i] != 0; ++i) std::cout << raw.Nam[i];
        std::cout << std::endl;
        std::cout << "    Cap: " << be16toh_custom(raw.Cap) << std::endl;
        std::cout << "    Cfg: " << be16toh_custom(raw.Cfg) << std::endl;
        std::cout << "    Typ: " << be16toh_custom(raw.Typ) << std::endl;
        std::cout << "    Addr: ";
        for(size_t i=0; i<sizeof(raw.Addr) && raw.Addr[i] != 0; ++i) std::cout << raw.Addr[i];
        std::cout << std::endl;
        std::cout << "    Port: " << be16toh_custom(raw.Port) << std::endl;
        std::cout << "    User: ";
        for(size_t i=0; i<sizeof(raw.User) && raw.User[i] != 0; ++i) std::cout << raw.User[i];
        std::cout << std::endl;
        std::cout << "    Pw: ";
        for(size_t i=0; i<sizeof(raw.Pw) && raw.Pw[i] != 0; ++i) std::cout << raw.Pw[i];
        std::cout << std::endl;
    }

};
