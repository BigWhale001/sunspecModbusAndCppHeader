// Generated C++ Header for Model 64001
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
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
    static constexpr uint16_t ID = 64001;
    Model64001_Raw raw;

    uint16_t get_id() const override { return ID; }

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

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
            std::cout << "    Cmd: " << be16toh_custom(raw.Cmd) << std::endl;
            std::cout << "    HWRev: " << be16toh_custom(raw.HWRev) << std::endl;
            std::cout << "    RSFWRev: " << be16toh_custom(raw.RSFWRev) << std::endl;
            std::cout << "    OSFWRev: " << be16toh_custom(raw.OSFWRev) << std::endl;
            std::cout << "    ProdRev: ";
            for(size_t i=0; i<sizeof(raw.ProdRev) && raw.ProdRev[i] != 0; ++i) std::cout << raw.ProdRev[i];
            std::cout << std::endl;
            std::cout << "    Boots: " << be16toh_custom(raw.Boots) << std::endl;
            std::cout << "    Switch: " << be16toh_custom(raw.Switch) << std::endl;
            std::cout << "    Sensors: " << be16toh_custom(raw.Sensors) << std::endl;
            std::cout << "    Talking: " << be16toh_custom(raw.Talking) << std::endl;
            std::cout << "    Status: " << be16toh_custom(raw.Status) << std::endl;
            std::cout << "    Config: " << be16toh_custom(raw.Config) << std::endl;
            std::cout << "    LEDblink: " << be16toh_custom(raw.LEDblink) << std::endl;
            std::cout << "    LEDon: " << be16toh_custom(raw.LEDon) << std::endl;
            std::cout << "    Reserved: " << be16toh_custom(raw.Reserved) << std::endl;
            std::cout << "    Loc: ";
            for(size_t i=0; i<sizeof(raw.Loc) && raw.Loc[i] != 0; ++i) std::cout << raw.Loc[i];
            std::cout << std::endl;
            std::cout << "    S1ID: " << be16toh_custom(raw.S1ID) << std::endl;
            std::cout << "    S1Addr: " << be16toh_custom(raw.S1Addr) << std::endl;
            std::cout << "    S1OSVer: " << be16toh_custom(raw.S1OSVer) << std::endl;
            std::cout << "    S1Ver: ";
            for(size_t i=0; i<sizeof(raw.S1Ver) && raw.S1Ver[i] != 0; ++i) std::cout << raw.S1Ver[i];
            std::cout << std::endl;
            std::cout << "    S1Serial: ";
            for(size_t i=0; i<sizeof(raw.S1Serial) && raw.S1Serial[i] != 0; ++i) std::cout << raw.S1Serial[i];
            std::cout << std::endl;
            std::cout << "    S2ID: " << be16toh_custom(raw.S2ID) << std::endl;
            std::cout << "    S2Addr: " << be16toh_custom(raw.S2Addr) << std::endl;
            std::cout << "    S2OSVer: " << be16toh_custom(raw.S2OSVer) << std::endl;
            std::cout << "    S2Ver: ";
            for(size_t i=0; i<sizeof(raw.S2Ver) && raw.S2Ver[i] != 0; ++i) std::cout << raw.S2Ver[i];
            std::cout << std::endl;
            std::cout << "    S2Serial: ";
            for(size_t i=0; i<sizeof(raw.S2Serial) && raw.S2Serial[i] != 0; ++i) std::cout << raw.S2Serial[i];
            std::cout << std::endl;
            std::cout << "    S3ID: " << be16toh_custom(raw.S3ID) << std::endl;
            std::cout << "    S3Addr: " << be16toh_custom(raw.S3Addr) << std::endl;
            std::cout << "    S3OSVer: " << be16toh_custom(raw.S3OSVer) << std::endl;
            std::cout << "    S3Ver: ";
            for(size_t i=0; i<sizeof(raw.S3Ver) && raw.S3Ver[i] != 0; ++i) std::cout << raw.S3Ver[i];
            std::cout << std::endl;
            std::cout << "    S3Serial: ";
            for(size_t i=0; i<sizeof(raw.S3Serial) && raw.S3Serial[i] != 0; ++i) std::cout << raw.S3Serial[i];
            std::cout << std::endl;
            std::cout << "    S4ID: " << be16toh_custom(raw.S4ID) << std::endl;
            std::cout << "    S4Addr: " << be16toh_custom(raw.S4Addr) << std::endl;
            std::cout << "    S4OSVer: " << be16toh_custom(raw.S4OSVer) << std::endl;
            std::cout << "    S4Ver: ";
            for(size_t i=0; i<sizeof(raw.S4Ver) && raw.S4Ver[i] != 0; ++i) std::cout << raw.S4Ver[i];
            std::cout << std::endl;
            std::cout << "    S4Serial: ";
            for(size_t i=0; i<sizeof(raw.S4Serial) && raw.S4Serial[i] != 0; ++i) std::cout << raw.S4Serial[i];
            std::cout << std::endl;
        const uint8_t* cur_ptr = base_addr + sizeof(Model64001_Raw);
    }

};
