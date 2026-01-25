// Generated C++ Header for Model 3
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model3_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t X;
    uint16_t Off1;
    uint16_t Off2;
    uint16_t Off3;
    uint16_t Off4;
    uint16_t Off5;
    uint16_t Off6;
    uint16_t Off7;
    uint16_t Off8;
    uint16_t Off9;
    uint16_t Off10;
    uint16_t Off11;
    uint16_t Off12;
    uint16_t Off13;
    uint16_t Off14;
    uint16_t Off15;
    uint16_t Off16;
    uint16_t Off17;
    uint16_t Off18;
    uint16_t Off19;
    uint16_t Off20;
    uint16_t Off21;
    uint16_t Off22;
    uint16_t Off23;
    uint16_t Off24;
    uint16_t Off25;
    uint16_t Off26;
    uint16_t Off27;
    uint16_t Off28;
    uint16_t Off29;
    uint16_t Off30;
    uint16_t Off31;
    uint16_t Off32;
    uint16_t Off33;
    uint16_t Off34;
    uint16_t Off35;
    uint16_t Off36;
    uint16_t Off37;
    uint16_t Off38;
    uint16_t Off39;
    uint16_t Off40;
    uint16_t Off41;
    uint16_t Off42;
    uint16_t Off43;
    uint16_t Off44;
    uint16_t Off45;
    uint16_t Off46;
    uint16_t Off47;
    uint16_t Off48;
    uint16_t Off49;
    uint16_t Off50;
    uint32_t Ts;
    uint16_t Ms;
    uint16_t Seq;
    uint16_t Role;
    uint16_t Alg;
    uint16_t N;
};
#pragma pack(pop)

// Repeating group: repeating
#pragma pack(push, 1)
struct Model3_repeating_Raw {
    uint16_t DS;
};
#pragma pack(pop)

class Model3 : public SunSpecModelBase {
public:
    Model3_Raw raw;

    uint16_t get_id() const override { return 3; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model3_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_X() const {
        return be16toh_custom(raw.X);
    }

    uint16_t get_raw_Off1() const {
        return be16toh_custom(raw.Off1);
    }

    uint16_t get_raw_Off2() const {
        return be16toh_custom(raw.Off2);
    }

    uint16_t get_raw_Off3() const {
        return be16toh_custom(raw.Off3);
    }

    uint16_t get_raw_Off4() const {
        return be16toh_custom(raw.Off4);
    }

    uint16_t get_raw_Off5() const {
        return be16toh_custom(raw.Off5);
    }

    uint16_t get_raw_Off6() const {
        return be16toh_custom(raw.Off6);
    }

    uint16_t get_raw_Off7() const {
        return be16toh_custom(raw.Off7);
    }

    uint16_t get_raw_Off8() const {
        return be16toh_custom(raw.Off8);
    }

    uint16_t get_raw_Off9() const {
        return be16toh_custom(raw.Off9);
    }

    uint16_t get_raw_Off10() const {
        return be16toh_custom(raw.Off10);
    }

    uint16_t get_raw_Off11() const {
        return be16toh_custom(raw.Off11);
    }

    uint16_t get_raw_Off12() const {
        return be16toh_custom(raw.Off12);
    }

    uint16_t get_raw_Off13() const {
        return be16toh_custom(raw.Off13);
    }

    uint16_t get_raw_Off14() const {
        return be16toh_custom(raw.Off14);
    }

    uint16_t get_raw_Off15() const {
        return be16toh_custom(raw.Off15);
    }

    uint16_t get_raw_Off16() const {
        return be16toh_custom(raw.Off16);
    }

    uint16_t get_raw_Off17() const {
        return be16toh_custom(raw.Off17);
    }

    uint16_t get_raw_Off18() const {
        return be16toh_custom(raw.Off18);
    }

    uint16_t get_raw_Off19() const {
        return be16toh_custom(raw.Off19);
    }

    uint16_t get_raw_Off20() const {
        return be16toh_custom(raw.Off20);
    }

    uint16_t get_raw_Off21() const {
        return be16toh_custom(raw.Off21);
    }

    uint16_t get_raw_Off22() const {
        return be16toh_custom(raw.Off22);
    }

    uint16_t get_raw_Off23() const {
        return be16toh_custom(raw.Off23);
    }

    uint16_t get_raw_Off24() const {
        return be16toh_custom(raw.Off24);
    }

    uint16_t get_raw_Off25() const {
        return be16toh_custom(raw.Off25);
    }

    uint16_t get_raw_Off26() const {
        return be16toh_custom(raw.Off26);
    }

    uint16_t get_raw_Off27() const {
        return be16toh_custom(raw.Off27);
    }

    uint16_t get_raw_Off28() const {
        return be16toh_custom(raw.Off28);
    }

    uint16_t get_raw_Off29() const {
        return be16toh_custom(raw.Off29);
    }

    uint16_t get_raw_Off30() const {
        return be16toh_custom(raw.Off30);
    }

    uint16_t get_raw_Off31() const {
        return be16toh_custom(raw.Off31);
    }

    uint16_t get_raw_Off32() const {
        return be16toh_custom(raw.Off32);
    }

    uint16_t get_raw_Off33() const {
        return be16toh_custom(raw.Off33);
    }

    uint16_t get_raw_Off34() const {
        return be16toh_custom(raw.Off34);
    }

    uint16_t get_raw_Off35() const {
        return be16toh_custom(raw.Off35);
    }

    uint16_t get_raw_Off36() const {
        return be16toh_custom(raw.Off36);
    }

    uint16_t get_raw_Off37() const {
        return be16toh_custom(raw.Off37);
    }

    uint16_t get_raw_Off38() const {
        return be16toh_custom(raw.Off38);
    }

    uint16_t get_raw_Off39() const {
        return be16toh_custom(raw.Off39);
    }

    uint16_t get_raw_Off40() const {
        return be16toh_custom(raw.Off40);
    }

    uint16_t get_raw_Off41() const {
        return be16toh_custom(raw.Off41);
    }

    uint16_t get_raw_Off42() const {
        return be16toh_custom(raw.Off42);
    }

    uint16_t get_raw_Off43() const {
        return be16toh_custom(raw.Off43);
    }

    uint16_t get_raw_Off44() const {
        return be16toh_custom(raw.Off44);
    }

    uint16_t get_raw_Off45() const {
        return be16toh_custom(raw.Off45);
    }

    uint16_t get_raw_Off46() const {
        return be16toh_custom(raw.Off46);
    }

    uint16_t get_raw_Off47() const {
        return be16toh_custom(raw.Off47);
    }

    uint16_t get_raw_Off48() const {
        return be16toh_custom(raw.Off48);
    }

    uint16_t get_raw_Off49() const {
        return be16toh_custom(raw.Off49);
    }

    uint16_t get_raw_Off50() const {
        return be16toh_custom(raw.Off50);
    }

    uint16_t get_raw_Ms() const {
        return be16toh_custom(raw.Ms);
    }

    uint16_t get_raw_Seq() const {
        return be16toh_custom(raw.Seq);
    }

    uint16_t get_raw_Role() const {
        return be16toh_custom(raw.Role);
    }

    uint16_t get_raw_Alg() const {
        return be16toh_custom(raw.Alg);
    }

    uint16_t get_raw_N() const {
        return be16toh_custom(raw.N);
    }

    // Accessor for repeating group: repeating
    static const Model3_repeating_Raw* get_repeating(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model3_repeating_Raw*>(base_buffer + offset_bytes + index * sizeof(Model3_repeating_Raw));
    }

};
