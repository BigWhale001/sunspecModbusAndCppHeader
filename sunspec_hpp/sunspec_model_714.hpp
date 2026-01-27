// Generated C++ Header for Model 714
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model714_Raw {
    uint16_t ID;
    uint16_t L;
    uint32_t PrtAlrms;
    uint16_t NPrt;
    int16_t DCA;
    int16_t DCW;
    uint16_t DCWhInj[4];
    uint16_t DCWhAbs[4];
    int16_t DCA_SF;
    int16_t DCV_SF;
    int16_t DCW_SF;
    int16_t DCWH_SF;
    int16_t Tmp_SF;
};
#pragma pack(pop)

// Group: Prt
#pragma pack(push, 1)
struct Model714_Prt_Raw {
    uint16_t PrtTyp;
    uint16_t ID;
    char IDStr[16];
    int16_t DCA;
    uint16_t DCV;
    int16_t DCW;
    uint16_t DCWhInj[4];
    uint16_t DCWhAbs[4];
    int16_t Tmp;
    uint16_t DCSta;
    uint32_t DCAlrm;
};
#pragma pack(pop)

class Model714 : public SunSpecModelBase {
public:
    static constexpr uint16_t ID = 714;
    Model714_Raw raw;

    uint16_t get_id() const override { return ID; }

    void from_buffer(const uint8_t* buffer) override {
        base_addr = buffer;
        std::memcpy(&raw, buffer, sizeof(Model714_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_NPrt() const {
        return be16toh_custom(raw.NPrt);
    }

    float get_DCA() const {
        int16_t sf_val = be16toh_custom_s(raw.DCA_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.DCA);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_DCA() const {
        return be16toh_custom_s(raw.DCA);
    }

    float get_DCW() const {
        int16_t sf_val = be16toh_custom_s(raw.DCW_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        int16_t val = be16toh_custom_s(raw.DCW);
        return (float)val * std::pow(10.0f, sf_val);
    }

    int16_t get_raw_DCW() const {
        return be16toh_custom_s(raw.DCW);
    }

    int16_t get_raw_DCA_SF() const {
        return be16toh_custom_s(raw.DCA_SF);
    }

    int16_t get_raw_DCV_SF() const {
        return be16toh_custom_s(raw.DCV_SF);
    }

    int16_t get_raw_DCW_SF() const {
        return be16toh_custom_s(raw.DCW_SF);
    }

    int16_t get_raw_DCWH_SF() const {
        return be16toh_custom_s(raw.DCWH_SF);
    }

    int16_t get_raw_Tmp_SF() const {
        return be16toh_custom_s(raw.Tmp_SF);
    }

    // Accessor for repeating group: Prt
    static const Model714_Prt_Raw* get_Prt(const uint8_t* base_buffer, size_t index, size_t offset_bytes) {
        return reinterpret_cast<const Model714_Prt_Raw*>(base_buffer + offset_bytes + index * sizeof(Model714_Prt_Raw));
    }

    void print_attributes() const override {
        std::cout << "    ID: " << get_raw_ID() << std::endl;
        std::cout << "    L: " << get_raw_L() << std::endl;
            std::cout << "    PrtAlrms: " << be32toh_custom(raw.PrtAlrms) << std::endl;
            std::cout << "    NPrt: " << be16toh_custom(raw.NPrt) << std::endl;
            std::cout << "    DCA: " << be16toh_custom_s(raw.DCA) << std::endl;
            std::cout << "    DCW: " << be16toh_custom_s(raw.DCW) << std::endl;
            std::cout << "    DCWhInj: [";
            for(size_t i=0; i<4; ++i) {
                std::cout << be16toh_custom(raw.DCWhInj[i]) << (i < 3 ? ", " : "");
            }
            std::cout << "]" << std::endl;
            std::cout << "    DCWhAbs: [";
            for(size_t i=0; i<4; ++i) {
                std::cout << be16toh_custom(raw.DCWhAbs[i]) << (i < 3 ? ", " : "");
            }
            std::cout << "]" << std::endl;
            std::cout << "    DCA_SF: " << be16toh_custom_s(raw.DCA_SF) << std::endl;
            std::cout << "    DCV_SF: " << be16toh_custom_s(raw.DCV_SF) << std::endl;
            std::cout << "    DCW_SF: " << be16toh_custom_s(raw.DCW_SF) << std::endl;
            std::cout << "    DCWH_SF: " << be16toh_custom_s(raw.DCWH_SF) << std::endl;
            std::cout << "    Tmp_SF: " << be16toh_custom_s(raw.Tmp_SF) << std::endl;
        const uint8_t* cur_ptr = base_addr + sizeof(Model714_Raw);
        // Loop for group: Prt
        for (size_t i = 0; i < be16toh_custom(raw.NPrt); ++i) {
            if ((cur_ptr - base_addr) + sizeof(Model714_Prt_Raw) > (size_t)(get_raw_L() * 2 + 4)) break;
            auto* grp = reinterpret_cast<const Model714_Prt_Raw*>(cur_ptr);
            std::cout << "    Group Prt[" << i << "]:" << std::endl;
            std::cout << "    PrtTyp: " << be16toh_custom(grp->PrtTyp) << std::endl;
            std::cout << "    IDStr: ";
            for(size_t i=0; i<sizeof(grp->IDStr) && grp->IDStr[i] != 0; ++i) std::cout << grp->IDStr[i];
            std::cout << std::endl;
            std::cout << "    DCA: " << be16toh_custom_s(grp->DCA) << std::endl;
            std::cout << "    DCV: " << be16toh_custom(grp->DCV) << std::endl;
            std::cout << "    DCW: " << be16toh_custom_s(grp->DCW) << std::endl;
            std::cout << "    DCWhInj: [";
            for(size_t i=0; i<4; ++i) {
                std::cout << be16toh_custom(grp->DCWhInj[i]) << (i < 3 ? ", " : "");
            }
            std::cout << "]" << std::endl;
            std::cout << "    DCWhAbs: [";
            for(size_t i=0; i<4; ++i) {
                std::cout << be16toh_custom(grp->DCWhAbs[i]) << (i < 3 ? ", " : "");
            }
            std::cout << "]" << std::endl;
            std::cout << "    Tmp: " << be16toh_custom_s(grp->Tmp) << std::endl;
            std::cout << "    DCSta: " << be16toh_custom(grp->DCSta) << std::endl;
            std::cout << "    DCAlrm: " << be32toh_custom(grp->DCAlrm) << std::endl;
            cur_ptr += sizeof(Model714_Prt_Raw);
        }
    }

};
