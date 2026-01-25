// Generated C++ Header for Model 5
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model5_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t X;
    uint16_t Off1;
    uint16_t Val1;
    uint16_t Off2;
    uint16_t Val2;
    uint16_t Off3;
    uint16_t Val3;
    uint16_t Off4;
    uint16_t Val4;
    uint16_t Off5;
    uint16_t Val5;
    uint16_t Off6;
    uint16_t Val6;
    uint16_t Off7;
    uint16_t Val7;
    uint16_t Off8;
    uint16_t Val8;
    uint16_t Off9;
    uint16_t Val9;
    uint16_t Off10;
    uint16_t Val10;
    uint16_t Off11;
    uint16_t Val11;
    uint16_t Off12;
    uint16_t Val12;
    uint16_t Off13;
    uint16_t Val13;
    uint16_t Off14;
    uint16_t Val14;
    uint16_t Off15;
    uint16_t Val15;
    uint16_t Off16;
    uint16_t Val16;
    uint16_t Off17;
    uint16_t Val17;
    uint16_t Off18;
    uint16_t Val18;
    uint16_t Off19;
    uint16_t Val19;
    uint16_t Off20;
    uint16_t Val20;
    uint16_t Off21;
    uint16_t Val21;
    uint16_t Off22;
    uint16_t Val22;
    uint16_t Off23;
    uint16_t Val23;
    uint16_t Off24;
    uint16_t Val24;
    uint16_t Off25;
    uint16_t Val25;
    uint16_t Off26;
    uint16_t Val26;
    uint16_t Off27;
    uint16_t Val27;
    uint16_t Off28;
    uint16_t Val28;
    uint16_t Off29;
    uint16_t Val29;
    uint16_t Off30;
    uint16_t Val30;
    uint16_t Off31;
    uint16_t Val31;
    uint16_t Off32;
    uint16_t Val32;
    uint16_t Off33;
    uint16_t Val33;
    uint16_t Off34;
    uint16_t Val34;
    uint16_t Off35;
    uint16_t Val35;
    uint16_t Off36;
    uint16_t Val36;
    uint16_t Off37;
    uint16_t Val37;
    uint16_t Off38;
    uint16_t Val38;
    uint16_t Off39;
    uint16_t Val39;
    uint16_t Off40;
    uint16_t Val40;
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
struct Model5_repeating_Raw {
    uint16_t DS;
};
#pragma pack(pop)

class Model5 : public SunSpecModelBase {
public:
    Model5_Raw raw;

    uint16_t get_id() const override { return 5; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model5_Raw));
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

    uint16_t get_raw_Val1() const {
        return be16toh_custom(raw.Val1);
    }

    uint16_t get_raw_Off2() const {
        return be16toh_custom(raw.Off2);
    }

    uint16_t get_raw_Val2() const {
        return be16toh_custom(raw.Val2);
    }

    uint16_t get_raw_Off3() const {
        return be16toh_custom(raw.Off3);
    }

    uint16_t get_raw_Val3() const {
        return be16toh_custom(raw.Val3);
    }

    uint16_t get_raw_Off4() const {
        return be16toh_custom(raw.Off4);
    }

    uint16_t get_raw_Val4() const {
        return be16toh_custom(raw.Val4);
    }

    uint16_t get_raw_Off5() const {
        return be16toh_custom(raw.Off5);
    }

    uint16_t get_raw_Val5() const {
        return be16toh_custom(raw.Val5);
    }

    uint16_t get_raw_Off6() const {
        return be16toh_custom(raw.Off6);
    }

    uint16_t get_raw_Val6() const {
        return be16toh_custom(raw.Val6);
    }

    uint16_t get_raw_Off7() const {
        return be16toh_custom(raw.Off7);
    }

    uint16_t get_raw_Val7() const {
        return be16toh_custom(raw.Val7);
    }

    uint16_t get_raw_Off8() const {
        return be16toh_custom(raw.Off8);
    }

    uint16_t get_raw_Val8() const {
        return be16toh_custom(raw.Val8);
    }

    uint16_t get_raw_Off9() const {
        return be16toh_custom(raw.Off9);
    }

    uint16_t get_raw_Val9() const {
        return be16toh_custom(raw.Val9);
    }

    uint16_t get_raw_Off10() const {
        return be16toh_custom(raw.Off10);
    }

    uint16_t get_raw_Val10() const {
        return be16toh_custom(raw.Val10);
    }

    uint16_t get_raw_Off11() const {
        return be16toh_custom(raw.Off11);
    }

    uint16_t get_raw_Val11() const {
        return be16toh_custom(raw.Val11);
    }

    uint16_t get_raw_Off12() const {
        return be16toh_custom(raw.Off12);
    }

    uint16_t get_raw_Val12() const {
        return be16toh_custom(raw.Val12);
    }

    uint16_t get_raw_Off13() const {
        return be16toh_custom(raw.Off13);
    }

    uint16_t get_raw_Val13() const {
        return be16toh_custom(raw.Val13);
    }

    uint16_t get_raw_Off14() const {
        return be16toh_custom(raw.Off14);
    }

    uint16_t get_raw_Val14() const {
        return be16toh_custom(raw.Val14);
    }

    uint16_t get_raw_Off15() const {
        return be16toh_custom(raw.Off15);
    }

    uint16_t get_raw_Val15() const {
        return be16toh_custom(raw.Val15);
    }

    uint16_t get_raw_Off16() const {
        return be16toh_custom(raw.Off16);
    }

    uint16_t get_raw_Val16() const {
        return be16toh_custom(raw.Val16);
    }

    uint16_t get_raw_Off17() const {
        return be16toh_custom(raw.Off17);
    }

    uint16_t get_raw_Val17() const {
        return be16toh_custom(raw.Val17);
    }

    uint16_t get_raw_Off18() const {
        return be16toh_custom(raw.Off18);
    }

    uint16_t get_raw_Val18() const {
        return be16toh_custom(raw.Val18);
    }

    uint16_t get_raw_Off19() const {
        return be16toh_custom(raw.Off19);
    }

    uint16_t get_raw_Val19() const {
        return be16toh_custom(raw.Val19);
    }

    uint16_t get_raw_Off20() const {
        return be16toh_custom(raw.Off20);
    }

    uint16_t get_raw_Val20() const {
        return be16toh_custom(raw.Val20);
    }

    uint16_t get_raw_Off21() const {
        return be16toh_custom(raw.Off21);
    }

    uint16_t get_raw_Val21() const {
        return be16toh_custom(raw.Val21);
    }

    uint16_t get_raw_Off22() const {
        return be16toh_custom(raw.Off22);
    }

    uint16_t get_raw_Val22() const {
        return be16toh_custom(raw.Val22);
    }

    uint16_t get_raw_Off23() const {
        return be16toh_custom(raw.Off23);
    }

    uint16_t get_raw_Val23() const {
        return be16toh_custom(raw.Val23);
    }

    uint16_t get_raw_Off24() const {
        return be16toh_custom(raw.Off24);
    }

    uint16_t get_raw_Val24() const {
        return be16toh_custom(raw.Val24);
    }

    uint16_t get_raw_Off25() const {
        return be16toh_custom(raw.Off25);
    }

    uint16_t get_raw_Val25() const {
        return be16toh_custom(raw.Val25);
    }

    uint16_t get_raw_Off26() const {
        return be16toh_custom(raw.Off26);
    }

    uint16_t get_raw_Val26() const {
        return be16toh_custom(raw.Val26);
    }

    uint16_t get_raw_Off27() const {
        return be16toh_custom(raw.Off27);
    }

    uint16_t get_raw_Val27() const {
        return be16toh_custom(raw.Val27);
    }

    uint16_t get_raw_Off28() const {
        return be16toh_custom(raw.Off28);
    }

    uint16_t get_raw_Val28() const {
        return be16toh_custom(raw.Val28);
    }

    uint16_t get_raw_Off29() const {
        return be16toh_custom(raw.Off29);
    }

    uint16_t get_raw_Val29() const {
        return be16toh_custom(raw.Val29);
    }

    uint16_t get_raw_Off30() const {
        return be16toh_custom(raw.Off30);
    }

    uint16_t get_raw_Val30() const {
        return be16toh_custom(raw.Val30);
    }

    uint16_t get_raw_Off31() const {
        return be16toh_custom(raw.Off31);
    }

    uint16_t get_raw_Val31() const {
        return be16toh_custom(raw.Val31);
    }

    uint16_t get_raw_Off32() const {
        return be16toh_custom(raw.Off32);
    }

    uint16_t get_raw_Val32() const {
        return be16toh_custom(raw.Val32);
    }

    uint16_t get_raw_Off33() const {
        return be16toh_custom(raw.Off33);
    }

    uint16_t get_raw_Val33() const {
        return be16toh_custom(raw.Val33);
    }

    uint16_t get_raw_Off34() const {
        return be16toh_custom(raw.Off34);
    }

    uint16_t get_raw_Val34() const {
        return be16toh_custom(raw.Val34);
    }

    uint16_t get_raw_Off35() const {
        return be16toh_custom(raw.Off35);
    }

    uint16_t get_raw_Val35() const {
        return be16toh_custom(raw.Val35);
    }

    uint16_t get_raw_Off36() const {
        return be16toh_custom(raw.Off36);
    }

    uint16_t get_raw_Val36() const {
        return be16toh_custom(raw.Val36);
    }

    uint16_t get_raw_Off37() const {
        return be16toh_custom(raw.Off37);
    }

    uint16_t get_raw_Val37() const {
        return be16toh_custom(raw.Val37);
    }

    uint16_t get_raw_Off38() const {
        return be16toh_custom(raw.Off38);
    }

    uint16_t get_raw_Val38() const {
        return be16toh_custom(raw.Val38);
    }

    uint16_t get_raw_Off39() const {
        return be16toh_custom(raw.Off39);
    }

    uint16_t get_raw_Val39() const {
        return be16toh_custom(raw.Val39);
    }

    uint16_t get_raw_Off40() const {
        return be16toh_custom(raw.Off40);
    }

    uint16_t get_raw_Val40() const {
        return be16toh_custom(raw.Val40);
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
        return be16toh_custom_s(raw.Alg);
    }

    uint16_t get_raw_N() const {
        return be16toh_custom(raw.N);
    }

    // Accessor for repeating group: repeating
    static const Model5_repeating_Raw* get_repeating(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model5_repeating_Raw*>(base_buffer + offset_bytes + index * sizeof(Model5_repeating_Raw));
    }

};
