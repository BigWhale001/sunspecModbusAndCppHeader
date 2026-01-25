// Generated C++ Header for Model 14
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
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

};
