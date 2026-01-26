// Generated C++ Header for Model 4
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model4_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t RqSeq;
    uint16_t Sts;
    uint16_t X;
    uint16_t Val1;
    uint16_t Val2;
    uint16_t Val3;
    uint16_t Val4;
    uint16_t Val5;
    uint16_t Val6;
    uint16_t Val7;
    uint16_t Val8;
    uint16_t Val9;
    uint16_t Val10;
    uint16_t Val11;
    uint16_t Val12;
    uint16_t Val13;
    uint16_t Val14;
    uint16_t Val15;
    uint16_t Val16;
    uint16_t Val17;
    uint16_t Val18;
    uint16_t Val19;
    uint16_t Val20;
    uint16_t Val21;
    uint16_t Val22;
    uint16_t Val23;
    uint16_t Val24;
    uint16_t Val25;
    uint16_t Val26;
    uint16_t Val27;
    uint16_t Val28;
    uint16_t Val29;
    uint16_t Val30;
    uint16_t Val31;
    uint16_t Val32;
    uint16_t Val33;
    uint16_t Val34;
    uint16_t Val35;
    uint16_t Val36;
    uint16_t Val37;
    uint16_t Val38;
    uint16_t Val39;
    uint16_t Val40;
    uint16_t Val41;
    uint16_t Val42;
    uint16_t Val43;
    uint16_t Val44;
    uint16_t Val45;
    uint16_t Val46;
    uint16_t Val47;
    uint16_t Val48;
    uint16_t Val49;
    uint16_t Val50;
    uint32_t Ts;
    uint16_t Ms;
    uint16_t Seq;
    uint16_t Alm;
    uint16_t Alg;
    uint16_t N;
};
#pragma pack(pop)

// Repeating group: repeating
#pragma pack(push, 1)
struct Model4_repeating_Raw {
    uint16_t DS;
};
#pragma pack(pop)

class Model4 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 4;
    Model4_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model4_Raw));
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

    uint16_t get_raw_X() const {
        return be16toh_custom(raw.X);
    }

    uint16_t get_raw_Val1() const {
        return be16toh_custom(raw.Val1);
    }

    uint16_t get_raw_Val2() const {
        return be16toh_custom(raw.Val2);
    }

    uint16_t get_raw_Val3() const {
        return be16toh_custom(raw.Val3);
    }

    uint16_t get_raw_Val4() const {
        return be16toh_custom(raw.Val4);
    }

    uint16_t get_raw_Val5() const {
        return be16toh_custom(raw.Val5);
    }

    uint16_t get_raw_Val6() const {
        return be16toh_custom(raw.Val6);
    }

    uint16_t get_raw_Val7() const {
        return be16toh_custom(raw.Val7);
    }

    uint16_t get_raw_Val8() const {
        return be16toh_custom(raw.Val8);
    }

    uint16_t get_raw_Val9() const {
        return be16toh_custom(raw.Val9);
    }

    uint16_t get_raw_Val10() const {
        return be16toh_custom(raw.Val10);
    }

    uint16_t get_raw_Val11() const {
        return be16toh_custom(raw.Val11);
    }

    uint16_t get_raw_Val12() const {
        return be16toh_custom(raw.Val12);
    }

    uint16_t get_raw_Val13() const {
        return be16toh_custom(raw.Val13);
    }

    uint16_t get_raw_Val14() const {
        return be16toh_custom(raw.Val14);
    }

    uint16_t get_raw_Val15() const {
        return be16toh_custom(raw.Val15);
    }

    uint16_t get_raw_Val16() const {
        return be16toh_custom(raw.Val16);
    }

    uint16_t get_raw_Val17() const {
        return be16toh_custom(raw.Val17);
    }

    uint16_t get_raw_Val18() const {
        return be16toh_custom(raw.Val18);
    }

    uint16_t get_raw_Val19() const {
        return be16toh_custom(raw.Val19);
    }

    uint16_t get_raw_Val20() const {
        return be16toh_custom(raw.Val20);
    }

    uint16_t get_raw_Val21() const {
        return be16toh_custom(raw.Val21);
    }

    uint16_t get_raw_Val22() const {
        return be16toh_custom(raw.Val22);
    }

    uint16_t get_raw_Val23() const {
        return be16toh_custom(raw.Val23);
    }

    uint16_t get_raw_Val24() const {
        return be16toh_custom(raw.Val24);
    }

    uint16_t get_raw_Val25() const {
        return be16toh_custom(raw.Val25);
    }

    uint16_t get_raw_Val26() const {
        return be16toh_custom(raw.Val26);
    }

    uint16_t get_raw_Val27() const {
        return be16toh_custom(raw.Val27);
    }

    uint16_t get_raw_Val28() const {
        return be16toh_custom(raw.Val28);
    }

    uint16_t get_raw_Val29() const {
        return be16toh_custom(raw.Val29);
    }

    uint16_t get_raw_Val30() const {
        return be16toh_custom(raw.Val30);
    }

    uint16_t get_raw_Val31() const {
        return be16toh_custom(raw.Val31);
    }

    uint16_t get_raw_Val32() const {
        return be16toh_custom(raw.Val32);
    }

    uint16_t get_raw_Val33() const {
        return be16toh_custom(raw.Val33);
    }

    uint16_t get_raw_Val34() const {
        return be16toh_custom(raw.Val34);
    }

    uint16_t get_raw_Val35() const {
        return be16toh_custom(raw.Val35);
    }

    uint16_t get_raw_Val36() const {
        return be16toh_custom(raw.Val36);
    }

    uint16_t get_raw_Val37() const {
        return be16toh_custom(raw.Val37);
    }

    uint16_t get_raw_Val38() const {
        return be16toh_custom(raw.Val38);
    }

    uint16_t get_raw_Val39() const {
        return be16toh_custom(raw.Val39);
    }

    uint16_t get_raw_Val40() const {
        return be16toh_custom(raw.Val40);
    }

    uint16_t get_raw_Val41() const {
        return be16toh_custom(raw.Val41);
    }

    uint16_t get_raw_Val42() const {
        return be16toh_custom(raw.Val42);
    }

    uint16_t get_raw_Val43() const {
        return be16toh_custom(raw.Val43);
    }

    uint16_t get_raw_Val44() const {
        return be16toh_custom(raw.Val44);
    }

    uint16_t get_raw_Val45() const {
        return be16toh_custom(raw.Val45);
    }

    uint16_t get_raw_Val46() const {
        return be16toh_custom(raw.Val46);
    }

    uint16_t get_raw_Val47() const {
        return be16toh_custom(raw.Val47);
    }

    uint16_t get_raw_Val48() const {
        return be16toh_custom(raw.Val48);
    }

    uint16_t get_raw_Val49() const {
        return be16toh_custom(raw.Val49);
    }

    uint16_t get_raw_Val50() const {
        return be16toh_custom(raw.Val50);
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
    static const Model4_repeating_Raw* get_repeating(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model4_repeating_Raw*>(base_buffer + offset_bytes + index * sizeof(Model4_repeating_Raw));
    }

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
        std::cout << "    RqSeq: " << be16toh_custom(raw.RqSeq) << std::endl;
        std::cout << "    Sts: " << be16toh_custom(raw.Sts) << std::endl;
        std::cout << "    X: " << be16toh_custom(raw.X) << std::endl;
        std::cout << "    Val1: " << be16toh_custom(raw.Val1) << std::endl;
        std::cout << "    Val2: " << be16toh_custom(raw.Val2) << std::endl;
        std::cout << "    Val3: " << be16toh_custom(raw.Val3) << std::endl;
        std::cout << "    Val4: " << be16toh_custom(raw.Val4) << std::endl;
        std::cout << "    Val5: " << be16toh_custom(raw.Val5) << std::endl;
        std::cout << "    Val6: " << be16toh_custom(raw.Val6) << std::endl;
        std::cout << "    Val7: " << be16toh_custom(raw.Val7) << std::endl;
        std::cout << "    Val8: " << be16toh_custom(raw.Val8) << std::endl;
        std::cout << "    Val9: " << be16toh_custom(raw.Val9) << std::endl;
        std::cout << "    Val10: " << be16toh_custom(raw.Val10) << std::endl;
        std::cout << "    Val11: " << be16toh_custom(raw.Val11) << std::endl;
        std::cout << "    Val12: " << be16toh_custom(raw.Val12) << std::endl;
        std::cout << "    Val13: " << be16toh_custom(raw.Val13) << std::endl;
        std::cout << "    Val14: " << be16toh_custom(raw.Val14) << std::endl;
        std::cout << "    Val15: " << be16toh_custom(raw.Val15) << std::endl;
        std::cout << "    Val16: " << be16toh_custom(raw.Val16) << std::endl;
        std::cout << "    Val17: " << be16toh_custom(raw.Val17) << std::endl;
        std::cout << "    Val18: " << be16toh_custom(raw.Val18) << std::endl;
        std::cout << "    Val19: " << be16toh_custom(raw.Val19) << std::endl;
        std::cout << "    Val20: " << be16toh_custom(raw.Val20) << std::endl;
        std::cout << "    Val21: " << be16toh_custom(raw.Val21) << std::endl;
        std::cout << "    Val22: " << be16toh_custom(raw.Val22) << std::endl;
        std::cout << "    Val23: " << be16toh_custom(raw.Val23) << std::endl;
        std::cout << "    Val24: " << be16toh_custom(raw.Val24) << std::endl;
        std::cout << "    Val25: " << be16toh_custom(raw.Val25) << std::endl;
        std::cout << "    Val26: " << be16toh_custom(raw.Val26) << std::endl;
        std::cout << "    Val27: " << be16toh_custom(raw.Val27) << std::endl;
        std::cout << "    Val28: " << be16toh_custom(raw.Val28) << std::endl;
        std::cout << "    Val29: " << be16toh_custom(raw.Val29) << std::endl;
        std::cout << "    Val30: " << be16toh_custom(raw.Val30) << std::endl;
        std::cout << "    Val31: " << be16toh_custom(raw.Val31) << std::endl;
        std::cout << "    Val32: " << be16toh_custom(raw.Val32) << std::endl;
        std::cout << "    Val33: " << be16toh_custom(raw.Val33) << std::endl;
        std::cout << "    Val34: " << be16toh_custom(raw.Val34) << std::endl;
        std::cout << "    Val35: " << be16toh_custom(raw.Val35) << std::endl;
        std::cout << "    Val36: " << be16toh_custom(raw.Val36) << std::endl;
        std::cout << "    Val37: " << be16toh_custom(raw.Val37) << std::endl;
        std::cout << "    Val38: " << be16toh_custom(raw.Val38) << std::endl;
        std::cout << "    Val39: " << be16toh_custom(raw.Val39) << std::endl;
        std::cout << "    Val40: " << be16toh_custom(raw.Val40) << std::endl;
        std::cout << "    Val41: " << be16toh_custom(raw.Val41) << std::endl;
        std::cout << "    Val42: " << be16toh_custom(raw.Val42) << std::endl;
        std::cout << "    Val43: " << be16toh_custom(raw.Val43) << std::endl;
        std::cout << "    Val44: " << be16toh_custom(raw.Val44) << std::endl;
        std::cout << "    Val45: " << be16toh_custom(raw.Val45) << std::endl;
        std::cout << "    Val46: " << be16toh_custom(raw.Val46) << std::endl;
        std::cout << "    Val47: " << be16toh_custom(raw.Val47) << std::endl;
        std::cout << "    Val48: " << be16toh_custom(raw.Val48) << std::endl;
        std::cout << "    Val49: " << be16toh_custom(raw.Val49) << std::endl;
        std::cout << "    Val50: " << be16toh_custom(raw.Val50) << std::endl;
        std::cout << "    Ts: " << be32toh_custom(raw.Ts) << std::endl;
        std::cout << "    Ms: " << be16toh_custom(raw.Ms) << std::endl;
        std::cout << "    Seq: " << be16toh_custom(raw.Seq) << std::endl;
        std::cout << "    Alm: " << be16toh_custom(raw.Alm) << std::endl;
        std::cout << "    Alg: " << be16toh_custom(raw.Alg) << std::endl;
        std::cout << "    N: " << be16toh_custom(raw.N) << std::endl;
    }

};
