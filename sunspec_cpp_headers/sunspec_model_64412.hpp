// Generated C++ Header for Model 64412
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model64412_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t DAManipulation;
    uint16_t FalsifyDeviceIdentity;
    uint16_t MeasPAlwaysNameplate;
    uint16_t MeasQAlwaysMinimum;
    uint16_t MeasQAlwaysMaximum;
    uint16_t MeasQAlwaysZero;
    uint16_t MeasZeroP;
    uint16_t MeasInvertQ;
    uint16_t MeasLowV;
    uint16_t MeasHighV;
    uint16_t MeasLowL1V;
    uint16_t MeasHighL1V;
    uint16_t MeasLowF;
    uint16_t MeasHighF;
    uint16_t MeasLowAmps;
    uint16_t MeasHighAmps;
    uint16_t MeasHighS;
    uint16_t MeasLowS;
    uint16_t MeasHighQ;
    uint16_t MeasLowQ;
    uint16_t MeasLowPF;
    uint16_t MeasLowReversedPF;
    uint16_t NameplateHighP;
    uint16_t NameplateLowP;
    uint16_t NameplateHighS;
    uint16_t NameplateLowS;
    uint16_t NameplateHighQ;
    uint16_t NameplateLowQ;
    uint16_t NameplateHighNomV;
    uint16_t NameplateLowNomV;
    uint16_t NameplateLowAmps;
    uint16_t NameplateLowVarmaxinj;
    uint16_t NameplateLowVarmaxabs;
    uint16_t NameplateLowPF;
    uint16_t SettingsHighNomV;
    uint16_t SettingsLowAmps;
    uint16_t SettingsHighP;
    uint16_t SettingsLowP;
    uint16_t SettingsHighVAMax;
    uint16_t SettingsHighVarmaxinj;
    uint16_t SettingsHighVarmaxabs;
    uint16_t ChangeCommonModelID;
    uint16_t ChangeCommonModelLength;
};
#pragma pack(pop)

class Model64412 : public SunSpecModelBase {
public:
    Model64412_Raw raw;

    uint16_t get_id() const override { return 64412; }

    void from_buffer(const uint8_t* buffer) override {
        std::memcpy(&raw, buffer, sizeof(Model64412_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_DAManipulation() const {
        return be16toh_custom_s(raw.DAManipulation);
    }

    uint16_t get_raw_FalsifyDeviceIdentity() const {
        return be16toh_custom_s(raw.FalsifyDeviceIdentity);
    }

    uint16_t get_raw_MeasPAlwaysNameplate() const {
        return be16toh_custom_s(raw.MeasPAlwaysNameplate);
    }

    uint16_t get_raw_MeasQAlwaysMinimum() const {
        return be16toh_custom_s(raw.MeasQAlwaysMinimum);
    }

    uint16_t get_raw_MeasQAlwaysMaximum() const {
        return be16toh_custom_s(raw.MeasQAlwaysMaximum);
    }

    uint16_t get_raw_MeasQAlwaysZero() const {
        return be16toh_custom_s(raw.MeasQAlwaysZero);
    }

    uint16_t get_raw_MeasZeroP() const {
        return be16toh_custom_s(raw.MeasZeroP);
    }

    uint16_t get_raw_MeasInvertQ() const {
        return be16toh_custom_s(raw.MeasInvertQ);
    }

    uint16_t get_raw_MeasLowV() const {
        return be16toh_custom_s(raw.MeasLowV);
    }

    uint16_t get_raw_MeasHighV() const {
        return be16toh_custom_s(raw.MeasHighV);
    }

    uint16_t get_raw_MeasLowL1V() const {
        return be16toh_custom_s(raw.MeasLowL1V);
    }

    uint16_t get_raw_MeasHighL1V() const {
        return be16toh_custom_s(raw.MeasHighL1V);
    }

    uint16_t get_raw_MeasLowF() const {
        return be16toh_custom_s(raw.MeasLowF);
    }

    uint16_t get_raw_MeasHighF() const {
        return be16toh_custom_s(raw.MeasHighF);
    }

    uint16_t get_raw_MeasLowAmps() const {
        return be16toh_custom_s(raw.MeasLowAmps);
    }

    uint16_t get_raw_MeasHighAmps() const {
        return be16toh_custom_s(raw.MeasHighAmps);
    }

    uint16_t get_raw_MeasHighS() const {
        return be16toh_custom_s(raw.MeasHighS);
    }

    uint16_t get_raw_MeasLowS() const {
        return be16toh_custom_s(raw.MeasLowS);
    }

    uint16_t get_raw_MeasHighQ() const {
        return be16toh_custom_s(raw.MeasHighQ);
    }

    uint16_t get_raw_MeasLowQ() const {
        return be16toh_custom_s(raw.MeasLowQ);
    }

    uint16_t get_raw_MeasLowPF() const {
        return be16toh_custom_s(raw.MeasLowPF);
    }

    uint16_t get_raw_MeasLowReversedPF() const {
        return be16toh_custom_s(raw.MeasLowReversedPF);
    }

    uint16_t get_raw_NameplateHighP() const {
        return be16toh_custom_s(raw.NameplateHighP);
    }

    uint16_t get_raw_NameplateLowP() const {
        return be16toh_custom_s(raw.NameplateLowP);
    }

    uint16_t get_raw_NameplateHighS() const {
        return be16toh_custom_s(raw.NameplateHighS);
    }

    uint16_t get_raw_NameplateLowS() const {
        return be16toh_custom_s(raw.NameplateLowS);
    }

    uint16_t get_raw_NameplateHighQ() const {
        return be16toh_custom_s(raw.NameplateHighQ);
    }

    uint16_t get_raw_NameplateLowQ() const {
        return be16toh_custom_s(raw.NameplateLowQ);
    }

    uint16_t get_raw_NameplateHighNomV() const {
        return be16toh_custom_s(raw.NameplateHighNomV);
    }

    uint16_t get_raw_NameplateLowNomV() const {
        return be16toh_custom_s(raw.NameplateLowNomV);
    }

    uint16_t get_raw_NameplateLowAmps() const {
        return be16toh_custom_s(raw.NameplateLowAmps);
    }

    uint16_t get_raw_NameplateLowVarmaxinj() const {
        return be16toh_custom_s(raw.NameplateLowVarmaxinj);
    }

    uint16_t get_raw_NameplateLowVarmaxabs() const {
        return be16toh_custom_s(raw.NameplateLowVarmaxabs);
    }

    uint16_t get_raw_NameplateLowPF() const {
        return be16toh_custom_s(raw.NameplateLowPF);
    }

    uint16_t get_raw_SettingsHighNomV() const {
        return be16toh_custom_s(raw.SettingsHighNomV);
    }

    uint16_t get_raw_SettingsLowAmps() const {
        return be16toh_custom_s(raw.SettingsLowAmps);
    }

    uint16_t get_raw_SettingsHighP() const {
        return be16toh_custom_s(raw.SettingsHighP);
    }

    uint16_t get_raw_SettingsLowP() const {
        return be16toh_custom_s(raw.SettingsLowP);
    }

    uint16_t get_raw_SettingsHighVAMax() const {
        return be16toh_custom_s(raw.SettingsHighVAMax);
    }

    uint16_t get_raw_SettingsHighVarmaxinj() const {
        return be16toh_custom_s(raw.SettingsHighVarmaxinj);
    }

    uint16_t get_raw_SettingsHighVarmaxabs() const {
        return be16toh_custom_s(raw.SettingsHighVarmaxabs);
    }

    uint16_t get_raw_ChangeCommonModelID() const {
        return be16toh_custom_s(raw.ChangeCommonModelID);
    }

    uint16_t get_raw_ChangeCommonModelLength() const {
        return be16toh_custom_s(raw.ChangeCommonModelLength);
    }

};
