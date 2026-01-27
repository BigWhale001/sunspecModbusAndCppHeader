// Generated C++ Header for Model 3
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
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

// Group: repeating
#pragma pack(push, 1)
struct Model3_repeating_Raw {
    uint16_t DS;
};
#pragma pack(pop)

class Model3 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 3;
    Model3_Raw raw;

    uint16_t get_id() const override { return ID; }

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

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
            std::cout << "    X: " << be16toh_custom(raw.X) << std::endl;
            std::cout << "    Off1: " << be16toh_custom(raw.Off1) << std::endl;
            std::cout << "    Off2: " << be16toh_custom(raw.Off2) << std::endl;
            std::cout << "    Off3: " << be16toh_custom(raw.Off3) << std::endl;
            std::cout << "    Off4: " << be16toh_custom(raw.Off4) << std::endl;
            std::cout << "    Off5: " << be16toh_custom(raw.Off5) << std::endl;
            std::cout << "    Off6: " << be16toh_custom(raw.Off6) << std::endl;
            std::cout << "    Off7: " << be16toh_custom(raw.Off7) << std::endl;
            std::cout << "    Off8: " << be16toh_custom(raw.Off8) << std::endl;
            std::cout << "    Off9: " << be16toh_custom(raw.Off9) << std::endl;
            std::cout << "    Off10: " << be16toh_custom(raw.Off10) << std::endl;
            std::cout << "    Off11: " << be16toh_custom(raw.Off11) << std::endl;
            std::cout << "    Off12: " << be16toh_custom(raw.Off12) << std::endl;
            std::cout << "    Off13: " << be16toh_custom(raw.Off13) << std::endl;
            std::cout << "    Off14: " << be16toh_custom(raw.Off14) << std::endl;
            std::cout << "    Off15: " << be16toh_custom(raw.Off15) << std::endl;
            std::cout << "    Off16: " << be16toh_custom(raw.Off16) << std::endl;
            std::cout << "    Off17: " << be16toh_custom(raw.Off17) << std::endl;
            std::cout << "    Off18: " << be16toh_custom(raw.Off18) << std::endl;
            std::cout << "    Off19: " << be16toh_custom(raw.Off19) << std::endl;
            std::cout << "    Off20: " << be16toh_custom(raw.Off20) << std::endl;
            std::cout << "    Off21: " << be16toh_custom(raw.Off21) << std::endl;
            std::cout << "    Off22: " << be16toh_custom(raw.Off22) << std::endl;
            std::cout << "    Off23: " << be16toh_custom(raw.Off23) << std::endl;
            std::cout << "    Off24: " << be16toh_custom(raw.Off24) << std::endl;
            std::cout << "    Off25: " << be16toh_custom(raw.Off25) << std::endl;
            std::cout << "    Off26: " << be16toh_custom(raw.Off26) << std::endl;
            std::cout << "    Off27: " << be16toh_custom(raw.Off27) << std::endl;
            std::cout << "    Off28: " << be16toh_custom(raw.Off28) << std::endl;
            std::cout << "    Off29: " << be16toh_custom(raw.Off29) << std::endl;
            std::cout << "    Off30: " << be16toh_custom(raw.Off30) << std::endl;
            std::cout << "    Off31: " << be16toh_custom(raw.Off31) << std::endl;
            std::cout << "    Off32: " << be16toh_custom(raw.Off32) << std::endl;
            std::cout << "    Off33: " << be16toh_custom(raw.Off33) << std::endl;
            std::cout << "    Off34: " << be16toh_custom(raw.Off34) << std::endl;
            std::cout << "    Off35: " << be16toh_custom(raw.Off35) << std::endl;
            std::cout << "    Off36: " << be16toh_custom(raw.Off36) << std::endl;
            std::cout << "    Off37: " << be16toh_custom(raw.Off37) << std::endl;
            std::cout << "    Off38: " << be16toh_custom(raw.Off38) << std::endl;
            std::cout << "    Off39: " << be16toh_custom(raw.Off39) << std::endl;
            std::cout << "    Off40: " << be16toh_custom(raw.Off40) << std::endl;
            std::cout << "    Off41: " << be16toh_custom(raw.Off41) << std::endl;
            std::cout << "    Off42: " << be16toh_custom(raw.Off42) << std::endl;
            std::cout << "    Off43: " << be16toh_custom(raw.Off43) << std::endl;
            std::cout << "    Off44: " << be16toh_custom(raw.Off44) << std::endl;
            std::cout << "    Off45: " << be16toh_custom(raw.Off45) << std::endl;
            std::cout << "    Off46: " << be16toh_custom(raw.Off46) << std::endl;
            std::cout << "    Off47: " << be16toh_custom(raw.Off47) << std::endl;
            std::cout << "    Off48: " << be16toh_custom(raw.Off48) << std::endl;
            std::cout << "    Off49: " << be16toh_custom(raw.Off49) << std::endl;
            std::cout << "    Off50: " << be16toh_custom(raw.Off50) << std::endl;
            std::cout << "    Ts: " << be32toh_custom(raw.Ts) << std::endl;
            std::cout << "    Ms: " << be16toh_custom(raw.Ms) << std::endl;
            std::cout << "    Seq: " << be16toh_custom(raw.Seq) << std::endl;
            std::cout << "    Role: " << be16toh_custom(raw.Role) << std::endl;
            std::cout << "    Alg: " << be16toh_custom(raw.Alg) << std::endl;
            std::cout << "    N: " << be16toh_custom(raw.N) << std::endl;
        const uint8_t* cur_ptr = base_addr + sizeof(Model3_Raw);
        {
            size_t rem_bytes = (get_raw_L() * 2 + 4) - (size_t)(cur_ptr - base_addr);
            size_t count = rem_bytes / sizeof(Model3_repeating_Raw);
        // Loop for group: repeating
        for (size_t i = 0; i < count; ++i) {
            if ((cur_ptr - base_addr) + sizeof(Model3_repeating_Raw) > (size_t)(get_raw_L() * 2 + 4)) break;
            auto* grp = reinterpret_cast<const Model3_repeating_Raw*>(cur_ptr);
            std::cout << "    Group repeating[" << i << "]:" << std::endl;
            std::cout << "    DS: " << be16toh_custom(grp->DS) << std::endl;
            cur_ptr += sizeof(Model3_repeating_Raw);
        }
        }
    }

};
