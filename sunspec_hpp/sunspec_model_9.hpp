// Generated C++ Header for Model 9
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model9_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t CertUID;
    uint16_t CertRole;
    uint16_t Fmt;
    uint16_t Typ;
    uint16_t TotLn;
    uint16_t FrgLn;
    uint16_t Frg1;
    uint16_t Frg2;
    uint16_t Frg3;
    uint16_t Frg4;
    uint16_t Frg5;
    uint16_t Frg6;
    uint16_t Frg7;
    uint16_t Frg8;
    uint16_t Frg9;
    uint16_t Frg10;
    uint16_t Frg11;
    uint16_t Frg12;
    uint16_t Frg13;
    uint16_t Frg14;
    uint16_t Frg15;
    uint16_t Frg16;
    uint16_t Frg17;
    uint16_t Frg18;
    uint16_t Frg19;
    uint16_t Frg20;
    uint16_t Frg21;
    uint16_t Frg22;
    uint16_t Frg23;
    uint16_t Frg24;
    uint16_t Frg25;
    uint16_t Frg26;
    uint16_t Frg27;
    uint16_t Frg28;
    uint16_t Frg29;
    uint16_t Frg30;
    uint16_t Frg31;
    uint16_t Frg32;
    uint16_t Frg33;
    uint16_t Frg34;
    uint16_t Frg35;
    uint16_t Frg36;
    uint16_t Frg37;
    uint16_t Frg38;
    uint16_t Frg39;
    uint16_t Frg40;
    uint16_t Frg41;
    uint16_t Frg42;
    uint16_t Frg43;
    uint16_t Frg44;
    uint16_t Frg45;
    uint16_t Frg46;
    uint16_t Frg47;
    uint16_t Frg48;
    uint16_t Frg49;
    uint16_t Frg50;
    uint16_t Frg51;
    uint16_t Frg52;
    uint16_t Frg53;
    uint16_t Frg54;
    uint16_t Frg55;
    uint16_t Frg56;
    uint16_t Frg57;
    uint16_t Frg58;
    uint16_t Frg59;
    uint16_t Frg60;
    uint16_t Frg61;
    uint16_t Frg62;
    uint16_t Frg63;
    uint16_t Frg64;
    uint16_t Frg65;
    uint16_t Frg66;
    uint16_t Frg67;
    uint16_t Frg68;
    uint16_t Frg69;
    uint16_t Frg70;
    uint16_t Frg71;
    uint16_t Frg72;
    uint16_t Frg73;
    uint16_t Frg74;
    uint16_t Frg75;
    uint16_t Frg78;
    uint16_t Frg79;
    uint16_t Frg80;
    uint32_t Ts;
    uint16_t Ms;
    uint16_t Seq;
    uint16_t UID;
    uint16_t Role;
    uint16_t Alg;
    uint16_t N;
};
#pragma pack(pop)

// Repeating group: repeating
#pragma pack(push, 1)
struct Model9_repeating_Raw {
    uint16_t Cert;
};
#pragma pack(pop)

class Model9 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 9;
    Model9_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model9_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_CertUID() const {
        return be16toh_custom(raw.CertUID);
    }

    uint16_t get_raw_CertRole() const {
        return be16toh_custom(raw.CertRole);
    }

    uint16_t get_raw_Fmt() const {
        return be16toh_custom(raw.Fmt);
    }

    uint16_t get_raw_Typ() const {
        return be16toh_custom(raw.Typ);
    }

    uint16_t get_raw_TotLn() const {
        return be16toh_custom(raw.TotLn);
    }

    uint16_t get_raw_FrgLn() const {
        return be16toh_custom(raw.FrgLn);
    }

    uint16_t get_raw_Frg1() const {
        return be16toh_custom(raw.Frg1);
    }

    uint16_t get_raw_Frg2() const {
        return be16toh_custom(raw.Frg2);
    }

    uint16_t get_raw_Frg3() const {
        return be16toh_custom(raw.Frg3);
    }

    uint16_t get_raw_Frg4() const {
        return be16toh_custom(raw.Frg4);
    }

    uint16_t get_raw_Frg5() const {
        return be16toh_custom(raw.Frg5);
    }

    uint16_t get_raw_Frg6() const {
        return be16toh_custom(raw.Frg6);
    }

    uint16_t get_raw_Frg7() const {
        return be16toh_custom(raw.Frg7);
    }

    uint16_t get_raw_Frg8() const {
        return be16toh_custom(raw.Frg8);
    }

    uint16_t get_raw_Frg9() const {
        return be16toh_custom(raw.Frg9);
    }

    uint16_t get_raw_Frg10() const {
        return be16toh_custom(raw.Frg10);
    }

    uint16_t get_raw_Frg11() const {
        return be16toh_custom(raw.Frg11);
    }

    uint16_t get_raw_Frg12() const {
        return be16toh_custom(raw.Frg12);
    }

    uint16_t get_raw_Frg13() const {
        return be16toh_custom(raw.Frg13);
    }

    uint16_t get_raw_Frg14() const {
        return be16toh_custom(raw.Frg14);
    }

    uint16_t get_raw_Frg15() const {
        return be16toh_custom(raw.Frg15);
    }

    uint16_t get_raw_Frg16() const {
        return be16toh_custom(raw.Frg16);
    }

    uint16_t get_raw_Frg17() const {
        return be16toh_custom(raw.Frg17);
    }

    uint16_t get_raw_Frg18() const {
        return be16toh_custom(raw.Frg18);
    }

    uint16_t get_raw_Frg19() const {
        return be16toh_custom(raw.Frg19);
    }

    uint16_t get_raw_Frg20() const {
        return be16toh_custom(raw.Frg20);
    }

    uint16_t get_raw_Frg21() const {
        return be16toh_custom(raw.Frg21);
    }

    uint16_t get_raw_Frg22() const {
        return be16toh_custom(raw.Frg22);
    }

    uint16_t get_raw_Frg23() const {
        return be16toh_custom(raw.Frg23);
    }

    uint16_t get_raw_Frg24() const {
        return be16toh_custom(raw.Frg24);
    }

    uint16_t get_raw_Frg25() const {
        return be16toh_custom(raw.Frg25);
    }

    uint16_t get_raw_Frg26() const {
        return be16toh_custom(raw.Frg26);
    }

    uint16_t get_raw_Frg27() const {
        return be16toh_custom(raw.Frg27);
    }

    uint16_t get_raw_Frg28() const {
        return be16toh_custom(raw.Frg28);
    }

    uint16_t get_raw_Frg29() const {
        return be16toh_custom(raw.Frg29);
    }

    uint16_t get_raw_Frg30() const {
        return be16toh_custom(raw.Frg30);
    }

    uint16_t get_raw_Frg31() const {
        return be16toh_custom(raw.Frg31);
    }

    uint16_t get_raw_Frg32() const {
        return be16toh_custom(raw.Frg32);
    }

    uint16_t get_raw_Frg33() const {
        return be16toh_custom(raw.Frg33);
    }

    uint16_t get_raw_Frg34() const {
        return be16toh_custom(raw.Frg34);
    }

    uint16_t get_raw_Frg35() const {
        return be16toh_custom(raw.Frg35);
    }

    uint16_t get_raw_Frg36() const {
        return be16toh_custom(raw.Frg36);
    }

    uint16_t get_raw_Frg37() const {
        return be16toh_custom(raw.Frg37);
    }

    uint16_t get_raw_Frg38() const {
        return be16toh_custom(raw.Frg38);
    }

    uint16_t get_raw_Frg39() const {
        return be16toh_custom(raw.Frg39);
    }

    uint16_t get_raw_Frg40() const {
        return be16toh_custom(raw.Frg40);
    }

    uint16_t get_raw_Frg41() const {
        return be16toh_custom(raw.Frg41);
    }

    uint16_t get_raw_Frg42() const {
        return be16toh_custom(raw.Frg42);
    }

    uint16_t get_raw_Frg43() const {
        return be16toh_custom(raw.Frg43);
    }

    uint16_t get_raw_Frg44() const {
        return be16toh_custom(raw.Frg44);
    }

    uint16_t get_raw_Frg45() const {
        return be16toh_custom(raw.Frg45);
    }

    uint16_t get_raw_Frg46() const {
        return be16toh_custom(raw.Frg46);
    }

    uint16_t get_raw_Frg47() const {
        return be16toh_custom(raw.Frg47);
    }

    uint16_t get_raw_Frg48() const {
        return be16toh_custom(raw.Frg48);
    }

    uint16_t get_raw_Frg49() const {
        return be16toh_custom(raw.Frg49);
    }

    uint16_t get_raw_Frg50() const {
        return be16toh_custom(raw.Frg50);
    }

    uint16_t get_raw_Frg51() const {
        return be16toh_custom(raw.Frg51);
    }

    uint16_t get_raw_Frg52() const {
        return be16toh_custom(raw.Frg52);
    }

    uint16_t get_raw_Frg53() const {
        return be16toh_custom(raw.Frg53);
    }

    uint16_t get_raw_Frg54() const {
        return be16toh_custom(raw.Frg54);
    }

    uint16_t get_raw_Frg55() const {
        return be16toh_custom(raw.Frg55);
    }

    uint16_t get_raw_Frg56() const {
        return be16toh_custom(raw.Frg56);
    }

    uint16_t get_raw_Frg57() const {
        return be16toh_custom(raw.Frg57);
    }

    uint16_t get_raw_Frg58() const {
        return be16toh_custom(raw.Frg58);
    }

    uint16_t get_raw_Frg59() const {
        return be16toh_custom(raw.Frg59);
    }

    uint16_t get_raw_Frg60() const {
        return be16toh_custom(raw.Frg60);
    }

    uint16_t get_raw_Frg61() const {
        return be16toh_custom(raw.Frg61);
    }

    uint16_t get_raw_Frg62() const {
        return be16toh_custom(raw.Frg62);
    }

    uint16_t get_raw_Frg63() const {
        return be16toh_custom(raw.Frg63);
    }

    uint16_t get_raw_Frg64() const {
        return be16toh_custom(raw.Frg64);
    }

    uint16_t get_raw_Frg65() const {
        return be16toh_custom(raw.Frg65);
    }

    uint16_t get_raw_Frg66() const {
        return be16toh_custom(raw.Frg66);
    }

    uint16_t get_raw_Frg67() const {
        return be16toh_custom(raw.Frg67);
    }

    uint16_t get_raw_Frg68() const {
        return be16toh_custom(raw.Frg68);
    }

    uint16_t get_raw_Frg69() const {
        return be16toh_custom(raw.Frg69);
    }

    uint16_t get_raw_Frg70() const {
        return be16toh_custom(raw.Frg70);
    }

    uint16_t get_raw_Frg71() const {
        return be16toh_custom(raw.Frg71);
    }

    uint16_t get_raw_Frg72() const {
        return be16toh_custom(raw.Frg72);
    }

    uint16_t get_raw_Frg73() const {
        return be16toh_custom(raw.Frg73);
    }

    uint16_t get_raw_Frg74() const {
        return be16toh_custom(raw.Frg74);
    }

    uint16_t get_raw_Frg75() const {
        return be16toh_custom(raw.Frg75);
    }

    uint16_t get_raw_Frg78() const {
        return be16toh_custom(raw.Frg78);
    }

    uint16_t get_raw_Frg79() const {
        return be16toh_custom(raw.Frg79);
    }

    uint16_t get_raw_Frg80() const {
        return be16toh_custom(raw.Frg80);
    }

    uint16_t get_raw_Ms() const {
        return be16toh_custom(raw.Ms);
    }

    uint16_t get_raw_Seq() const {
        return be16toh_custom(raw.Seq);
    }

    uint16_t get_raw_UID() const {
        return be16toh_custom(raw.UID);
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
    static const Model9_repeating_Raw* get_repeating(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model9_repeating_Raw*>(base_buffer + offset_bytes + index * sizeof(Model9_repeating_Raw));
    }

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
        std::cout << "    CertUID: " << be16toh_custom(raw.CertUID) << std::endl;
        std::cout << "    CertRole: " << be16toh_custom(raw.CertRole) << std::endl;
        std::cout << "    Fmt: " << be16toh_custom(raw.Fmt) << std::endl;
        std::cout << "    Typ: " << be16toh_custom(raw.Typ) << std::endl;
        std::cout << "    TotLn: " << be16toh_custom(raw.TotLn) << std::endl;
        std::cout << "    FrgLn: " << be16toh_custom(raw.FrgLn) << std::endl;
        std::cout << "    Frg1: " << be16toh_custom(raw.Frg1) << std::endl;
        std::cout << "    Frg2: " << be16toh_custom(raw.Frg2) << std::endl;
        std::cout << "    Frg3: " << be16toh_custom(raw.Frg3) << std::endl;
        std::cout << "    Frg4: " << be16toh_custom(raw.Frg4) << std::endl;
        std::cout << "    Frg5: " << be16toh_custom(raw.Frg5) << std::endl;
        std::cout << "    Frg6: " << be16toh_custom(raw.Frg6) << std::endl;
        std::cout << "    Frg7: " << be16toh_custom(raw.Frg7) << std::endl;
        std::cout << "    Frg8: " << be16toh_custom(raw.Frg8) << std::endl;
        std::cout << "    Frg9: " << be16toh_custom(raw.Frg9) << std::endl;
        std::cout << "    Frg10: " << be16toh_custom(raw.Frg10) << std::endl;
        std::cout << "    Frg11: " << be16toh_custom(raw.Frg11) << std::endl;
        std::cout << "    Frg12: " << be16toh_custom(raw.Frg12) << std::endl;
        std::cout << "    Frg13: " << be16toh_custom(raw.Frg13) << std::endl;
        std::cout << "    Frg14: " << be16toh_custom(raw.Frg14) << std::endl;
        std::cout << "    Frg15: " << be16toh_custom(raw.Frg15) << std::endl;
        std::cout << "    Frg16: " << be16toh_custom(raw.Frg16) << std::endl;
        std::cout << "    Frg17: " << be16toh_custom(raw.Frg17) << std::endl;
        std::cout << "    Frg18: " << be16toh_custom(raw.Frg18) << std::endl;
        std::cout << "    Frg19: " << be16toh_custom(raw.Frg19) << std::endl;
        std::cout << "    Frg20: " << be16toh_custom(raw.Frg20) << std::endl;
        std::cout << "    Frg21: " << be16toh_custom(raw.Frg21) << std::endl;
        std::cout << "    Frg22: " << be16toh_custom(raw.Frg22) << std::endl;
        std::cout << "    Frg23: " << be16toh_custom(raw.Frg23) << std::endl;
        std::cout << "    Frg24: " << be16toh_custom(raw.Frg24) << std::endl;
        std::cout << "    Frg25: " << be16toh_custom(raw.Frg25) << std::endl;
        std::cout << "    Frg26: " << be16toh_custom(raw.Frg26) << std::endl;
        std::cout << "    Frg27: " << be16toh_custom(raw.Frg27) << std::endl;
        std::cout << "    Frg28: " << be16toh_custom(raw.Frg28) << std::endl;
        std::cout << "    Frg29: " << be16toh_custom(raw.Frg29) << std::endl;
        std::cout << "    Frg30: " << be16toh_custom(raw.Frg30) << std::endl;
        std::cout << "    Frg31: " << be16toh_custom(raw.Frg31) << std::endl;
        std::cout << "    Frg32: " << be16toh_custom(raw.Frg32) << std::endl;
        std::cout << "    Frg33: " << be16toh_custom(raw.Frg33) << std::endl;
        std::cout << "    Frg34: " << be16toh_custom(raw.Frg34) << std::endl;
        std::cout << "    Frg35: " << be16toh_custom(raw.Frg35) << std::endl;
        std::cout << "    Frg36: " << be16toh_custom(raw.Frg36) << std::endl;
        std::cout << "    Frg37: " << be16toh_custom(raw.Frg37) << std::endl;
        std::cout << "    Frg38: " << be16toh_custom(raw.Frg38) << std::endl;
        std::cout << "    Frg39: " << be16toh_custom(raw.Frg39) << std::endl;
        std::cout << "    Frg40: " << be16toh_custom(raw.Frg40) << std::endl;
        std::cout << "    Frg41: " << be16toh_custom(raw.Frg41) << std::endl;
        std::cout << "    Frg42: " << be16toh_custom(raw.Frg42) << std::endl;
        std::cout << "    Frg43: " << be16toh_custom(raw.Frg43) << std::endl;
        std::cout << "    Frg44: " << be16toh_custom(raw.Frg44) << std::endl;
        std::cout << "    Frg45: " << be16toh_custom(raw.Frg45) << std::endl;
        std::cout << "    Frg46: " << be16toh_custom(raw.Frg46) << std::endl;
        std::cout << "    Frg47: " << be16toh_custom(raw.Frg47) << std::endl;
        std::cout << "    Frg48: " << be16toh_custom(raw.Frg48) << std::endl;
        std::cout << "    Frg49: " << be16toh_custom(raw.Frg49) << std::endl;
        std::cout << "    Frg50: " << be16toh_custom(raw.Frg50) << std::endl;
        std::cout << "    Frg51: " << be16toh_custom(raw.Frg51) << std::endl;
        std::cout << "    Frg52: " << be16toh_custom(raw.Frg52) << std::endl;
        std::cout << "    Frg53: " << be16toh_custom(raw.Frg53) << std::endl;
        std::cout << "    Frg54: " << be16toh_custom(raw.Frg54) << std::endl;
        std::cout << "    Frg55: " << be16toh_custom(raw.Frg55) << std::endl;
        std::cout << "    Frg56: " << be16toh_custom(raw.Frg56) << std::endl;
        std::cout << "    Frg57: " << be16toh_custom(raw.Frg57) << std::endl;
        std::cout << "    Frg58: " << be16toh_custom(raw.Frg58) << std::endl;
        std::cout << "    Frg59: " << be16toh_custom(raw.Frg59) << std::endl;
        std::cout << "    Frg60: " << be16toh_custom(raw.Frg60) << std::endl;
        std::cout << "    Frg61: " << be16toh_custom(raw.Frg61) << std::endl;
        std::cout << "    Frg62: " << be16toh_custom(raw.Frg62) << std::endl;
        std::cout << "    Frg63: " << be16toh_custom(raw.Frg63) << std::endl;
        std::cout << "    Frg64: " << be16toh_custom(raw.Frg64) << std::endl;
        std::cout << "    Frg65: " << be16toh_custom(raw.Frg65) << std::endl;
        std::cout << "    Frg66: " << be16toh_custom(raw.Frg66) << std::endl;
        std::cout << "    Frg67: " << be16toh_custom(raw.Frg67) << std::endl;
        std::cout << "    Frg68: " << be16toh_custom(raw.Frg68) << std::endl;
        std::cout << "    Frg69: " << be16toh_custom(raw.Frg69) << std::endl;
        std::cout << "    Frg70: " << be16toh_custom(raw.Frg70) << std::endl;
        std::cout << "    Frg71: " << be16toh_custom(raw.Frg71) << std::endl;
        std::cout << "    Frg72: " << be16toh_custom(raw.Frg72) << std::endl;
        std::cout << "    Frg73: " << be16toh_custom(raw.Frg73) << std::endl;
        std::cout << "    Frg74: " << be16toh_custom(raw.Frg74) << std::endl;
        std::cout << "    Frg75: " << be16toh_custom(raw.Frg75) << std::endl;
        std::cout << "    Frg78: " << be16toh_custom(raw.Frg78) << std::endl;
        std::cout << "    Frg79: " << be16toh_custom(raw.Frg79) << std::endl;
        std::cout << "    Frg80: " << be16toh_custom(raw.Frg80) << std::endl;
        std::cout << "    Ts: " << be32toh_custom(raw.Ts) << std::endl;
        std::cout << "    Ms: " << be16toh_custom(raw.Ms) << std::endl;
        std::cout << "    Seq: " << be16toh_custom(raw.Seq) << std::endl;
        std::cout << "    UID: " << be16toh_custom(raw.UID) << std::endl;
        std::cout << "    Role: " << be16toh_custom(raw.Role) << std::endl;
        std::cout << "    Alg: " << be16toh_custom(raw.Alg) << std::endl;
        std::cout << "    N: " << be16toh_custom(raw.N) << std::endl;
    }

};
