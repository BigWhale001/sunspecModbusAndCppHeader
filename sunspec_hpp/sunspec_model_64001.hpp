// Generated C++ Header for Model 64001
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model64001_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t Cmd;
    uint16_t HWRev;
    uint16_t RSFWRev;
    uint16_t OSFWRev;
    char ProdRev[4];
    uint16_t Boots;
    uint16_t Switch;
    uint16_t Sensors;
    uint16_t Talking;
    uint16_t Status;
    uint16_t Config;
    uint16_t LEDblink;
    uint16_t LEDon;
    uint16_t Reserved;
    char Loc[32];
    uint16_t S1ID;
    uint16_t S1Addr;
    uint16_t S1OSVer;
    char S1Ver[4];
    char S1Serial[10];
    uint16_t S2ID;
    uint16_t S2Addr;
    uint16_t S2OSVer;
    char S2Ver[4];
    char S2Serial[10];
    uint16_t S3ID;
    uint16_t S3Addr;
    uint16_t S3OSVer;
    char S3Ver[4];
    char S3Serial[10];
    uint16_t S4ID;
    uint16_t S4Addr;
    uint16_t S4OSVer;
    char S4Ver[4];
    char S4Serial[10];
};
#pragma pack(pop)

class Model64001 : public SunSpecModelBase {
public:
    Model64001_Raw raw;

    uint16_t get_id() const override { return 64001; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model64001_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_Cmd() const {
        return be16toh_custom(raw.Cmd);
    }

    uint16_t get_raw_HWRev() const {
        return be16toh_custom(raw.HWRev);
    }

    uint16_t get_raw_RSFWRev() const {
        return be16toh_custom(raw.RSFWRev);
    }

    uint16_t get_raw_OSFWRev() const {
        return be16toh_custom(raw.OSFWRev);
    }

    uint16_t get_raw_Boots() const {
        return be16toh_custom(raw.Boots);
    }

    uint16_t get_raw_Switch() const {
        return be16toh_custom(raw.Switch);
    }

    uint16_t get_raw_Sensors() const {
        return be16toh_custom(raw.Sensors);
    }

    uint16_t get_raw_Talking() const {
        return be16toh_custom(raw.Talking);
    }

    uint16_t get_raw_Status() const {
        return be16toh_custom(raw.Status);
    }

    uint16_t get_raw_Config() const {
        return be16toh_custom(raw.Config);
    }

    uint16_t get_raw_LEDblink() const {
        return be16toh_custom(raw.LEDblink);
    }

    uint16_t get_raw_LEDon() const {
        return be16toh_custom(raw.LEDon);
    }

    uint16_t get_raw_Reserved() const {
        return be16toh_custom(raw.Reserved);
    }

    uint16_t get_raw_S1ID() const {
        return be16toh_custom(raw.S1ID);
    }

    uint16_t get_raw_S1Addr() const {
        return be16toh_custom(raw.S1Addr);
    }

    uint16_t get_raw_S1OSVer() const {
        return be16toh_custom(raw.S1OSVer);
    }

    uint16_t get_raw_S2ID() const {
        return be16toh_custom(raw.S2ID);
    }

    uint16_t get_raw_S2Addr() const {
        return be16toh_custom(raw.S2Addr);
    }

    uint16_t get_raw_S2OSVer() const {
        return be16toh_custom(raw.S2OSVer);
    }

    uint16_t get_raw_S3ID() const {
        return be16toh_custom(raw.S3ID);
    }

    uint16_t get_raw_S3Addr() const {
        return be16toh_custom(raw.S3Addr);
    }

    uint16_t get_raw_S3OSVer() const {
        return be16toh_custom(raw.S3OSVer);
    }

    uint16_t get_raw_S4ID() const {
        return be16toh_custom(raw.S4ID);
    }

    uint16_t get_raw_S4Addr() const {
        return be16toh_custom(raw.S4Addr);
    }

    uint16_t get_raw_S4OSVer() const {
        return be16toh_custom(raw.S4OSVer);
    }

};
