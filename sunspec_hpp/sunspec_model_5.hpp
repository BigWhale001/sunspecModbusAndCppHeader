// Generated C++ Header for Model 5
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
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

// Group: repeating
#pragma pack(push, 1)
struct Model5_repeating_Raw {
    uint16_t DS;
};
#pragma pack(pop)

class Model5 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 5;
    Model5_Raw raw;

    uint16_t get_id() const override { return ID; }

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
        return be16toh_custom(raw.Alg);
    }

    uint16_t get_raw_N() const {
        return be16toh_custom(raw.N);
    }

    // Accessor for repeating group: repeating
    static const Model5_repeating_Raw* get_repeating(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model5_repeating_Raw*>(base_buffer + offset_bytes + index * sizeof(Model5_repeating_Raw));
    }

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
            std::cout << "    X: " << be16toh_custom(raw.X) << std::endl;
            std::cout << "    Off1: " << be16toh_custom(raw.Off1) << std::endl;
            std::cout << "    Val1: " << be16toh_custom(raw.Val1) << std::endl;
            std::cout << "    Off2: " << be16toh_custom(raw.Off2) << std::endl;
            std::cout << "    Val2: " << be16toh_custom(raw.Val2) << std::endl;
            std::cout << "    Off3: " << be16toh_custom(raw.Off3) << std::endl;
            std::cout << "    Val3: " << be16toh_custom(raw.Val3) << std::endl;
            std::cout << "    Off4: " << be16toh_custom(raw.Off4) << std::endl;
            std::cout << "    Val4: " << be16toh_custom(raw.Val4) << std::endl;
            std::cout << "    Off5: " << be16toh_custom(raw.Off5) << std::endl;
            std::cout << "    Val5: " << be16toh_custom(raw.Val5) << std::endl;
            std::cout << "    Off6: " << be16toh_custom(raw.Off6) << std::endl;
            std::cout << "    Val6: " << be16toh_custom(raw.Val6) << std::endl;
            std::cout << "    Off7: " << be16toh_custom(raw.Off7) << std::endl;
            std::cout << "    Val7: " << be16toh_custom(raw.Val7) << std::endl;
            std::cout << "    Off8: " << be16toh_custom(raw.Off8) << std::endl;
            std::cout << "    Val8: " << be16toh_custom(raw.Val8) << std::endl;
            std::cout << "    Off9: " << be16toh_custom(raw.Off9) << std::endl;
            std::cout << "    Val9: " << be16toh_custom(raw.Val9) << std::endl;
            std::cout << "    Off10: " << be16toh_custom(raw.Off10) << std::endl;
            std::cout << "    Val10: " << be16toh_custom(raw.Val10) << std::endl;
            std::cout << "    Off11: " << be16toh_custom(raw.Off11) << std::endl;
            std::cout << "    Val11: " << be16toh_custom(raw.Val11) << std::endl;
            std::cout << "    Off12: " << be16toh_custom(raw.Off12) << std::endl;
            std::cout << "    Val12: " << be16toh_custom(raw.Val12) << std::endl;
            std::cout << "    Off13: " << be16toh_custom(raw.Off13) << std::endl;
            std::cout << "    Val13: " << be16toh_custom(raw.Val13) << std::endl;
            std::cout << "    Off14: " << be16toh_custom(raw.Off14) << std::endl;
            std::cout << "    Val14: " << be16toh_custom(raw.Val14) << std::endl;
            std::cout << "    Off15: " << be16toh_custom(raw.Off15) << std::endl;
            std::cout << "    Val15: " << be16toh_custom(raw.Val15) << std::endl;
            std::cout << "    Off16: " << be16toh_custom(raw.Off16) << std::endl;
            std::cout << "    Val16: " << be16toh_custom(raw.Val16) << std::endl;
            std::cout << "    Off17: " << be16toh_custom(raw.Off17) << std::endl;
            std::cout << "    Val17: " << be16toh_custom(raw.Val17) << std::endl;
            std::cout << "    Off18: " << be16toh_custom(raw.Off18) << std::endl;
            std::cout << "    Val18: " << be16toh_custom(raw.Val18) << std::endl;
            std::cout << "    Off19: " << be16toh_custom(raw.Off19) << std::endl;
            std::cout << "    Val19: " << be16toh_custom(raw.Val19) << std::endl;
            std::cout << "    Off20: " << be16toh_custom(raw.Off20) << std::endl;
            std::cout << "    Val20: " << be16toh_custom(raw.Val20) << std::endl;
            std::cout << "    Off21: " << be16toh_custom(raw.Off21) << std::endl;
            std::cout << "    Val21: " << be16toh_custom(raw.Val21) << std::endl;
            std::cout << "    Off22: " << be16toh_custom(raw.Off22) << std::endl;
            std::cout << "    Val22: " << be16toh_custom(raw.Val22) << std::endl;
            std::cout << "    Off23: " << be16toh_custom(raw.Off23) << std::endl;
            std::cout << "    Val23: " << be16toh_custom(raw.Val23) << std::endl;
            std::cout << "    Off24: " << be16toh_custom(raw.Off24) << std::endl;
            std::cout << "    Val24: " << be16toh_custom(raw.Val24) << std::endl;
            std::cout << "    Off25: " << be16toh_custom(raw.Off25) << std::endl;
            std::cout << "    Val25: " << be16toh_custom(raw.Val25) << std::endl;
            std::cout << "    Off26: " << be16toh_custom(raw.Off26) << std::endl;
            std::cout << "    Val26: " << be16toh_custom(raw.Val26) << std::endl;
            std::cout << "    Off27: " << be16toh_custom(raw.Off27) << std::endl;
            std::cout << "    Val27: " << be16toh_custom(raw.Val27) << std::endl;
            std::cout << "    Off28: " << be16toh_custom(raw.Off28) << std::endl;
            std::cout << "    Val28: " << be16toh_custom(raw.Val28) << std::endl;
            std::cout << "    Off29: " << be16toh_custom(raw.Off29) << std::endl;
            std::cout << "    Val29: " << be16toh_custom(raw.Val29) << std::endl;
            std::cout << "    Off30: " << be16toh_custom(raw.Off30) << std::endl;
            std::cout << "    Val30: " << be16toh_custom(raw.Val30) << std::endl;
            std::cout << "    Off31: " << be16toh_custom(raw.Off31) << std::endl;
            std::cout << "    Val31: " << be16toh_custom(raw.Val31) << std::endl;
            std::cout << "    Off32: " << be16toh_custom(raw.Off32) << std::endl;
            std::cout << "    Val32: " << be16toh_custom(raw.Val32) << std::endl;
            std::cout << "    Off33: " << be16toh_custom(raw.Off33) << std::endl;
            std::cout << "    Val33: " << be16toh_custom(raw.Val33) << std::endl;
            std::cout << "    Off34: " << be16toh_custom(raw.Off34) << std::endl;
            std::cout << "    Val34: " << be16toh_custom(raw.Val34) << std::endl;
            std::cout << "    Off35: " << be16toh_custom(raw.Off35) << std::endl;
            std::cout << "    Val35: " << be16toh_custom(raw.Val35) << std::endl;
            std::cout << "    Off36: " << be16toh_custom(raw.Off36) << std::endl;
            std::cout << "    Val36: " << be16toh_custom(raw.Val36) << std::endl;
            std::cout << "    Off37: " << be16toh_custom(raw.Off37) << std::endl;
            std::cout << "    Val37: " << be16toh_custom(raw.Val37) << std::endl;
            std::cout << "    Off38: " << be16toh_custom(raw.Off38) << std::endl;
            std::cout << "    Val38: " << be16toh_custom(raw.Val38) << std::endl;
            std::cout << "    Off39: " << be16toh_custom(raw.Off39) << std::endl;
            std::cout << "    Val39: " << be16toh_custom(raw.Val39) << std::endl;
            std::cout << "    Off40: " << be16toh_custom(raw.Off40) << std::endl;
            std::cout << "    Val40: " << be16toh_custom(raw.Val40) << std::endl;
            std::cout << "    Ts: " << be32toh_custom(raw.Ts) << std::endl;
            std::cout << "    Ms: " << be16toh_custom(raw.Ms) << std::endl;
            std::cout << "    Seq: " << be16toh_custom(raw.Seq) << std::endl;
            std::cout << "    Role: " << be16toh_custom(raw.Role) << std::endl;
            std::cout << "    Alg: " << be16toh_custom(raw.Alg) << std::endl;
            std::cout << "    N: " << be16toh_custom(raw.N) << std::endl;
        const uint8_t* cur_ptr = base_addr + sizeof(Model5_Raw);
        {
            size_t rem_bytes = (get_raw_L() * 2 + 4) - (size_t)(cur_ptr - base_addr);
            size_t count = rem_bytes / sizeof(Model5_repeating_Raw);
        // Loop for group: repeating
        for (size_t i = 0; i < count; ++i) {
            if ((cur_ptr - base_addr) + sizeof(Model5_repeating_Raw) > (size_t)(get_raw_L() * 2 + 4)) break;
            auto* grp = reinterpret_cast<const Model5_repeating_Raw*>(cur_ptr);
            std::cout << "    Group repeating[" << i << "]:" << std::endl;
            std::cout << "    DS: " << be16toh_custom(grp->DS) << std::endl;
            cur_ptr += sizeof(Model5_repeating_Raw);
        }
        }
    }

};
