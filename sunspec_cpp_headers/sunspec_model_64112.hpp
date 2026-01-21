// Generated C++ Header for Model 64112
#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <algorithm>
#include "sunspec_utils.hpp"
#include "sunspec_model_base.hpp"

#pragma pack(push, 1)
struct Model64112_Raw {
    uint16_t ID;
    uint16_t L;
    uint16_t Port;
    int16_t V_SF;
    int16_t C_SF;
    int16_t H_SF;
    int16_t P_SF;
    int16_t AH_SF;
    int16_t KWH_SF;
    uint16_t CC_Config_fault;
    uint16_t CC_Config_absorb_V;
    uint16_t CC_Config_absorb_Hr;
    uint16_t CC_Config_absorb_End_A;
    uint16_t CC_Config_rebulk_V;
    uint16_t CC_Config_float_V;
    uint16_t CC_Config_max_Chg_A;
    uint16_t CC_Config_equalize_V;
    uint16_t CC_Config_equalize_Hr;
    uint16_t CC_Config_auto_equalize;
    uint16_t CC_Config_MPPT_mode;
    uint16_t CC_Config_sweep_width;
    uint16_t CC_Config_sweep_max;
    uint16_t CC_Config_U_Pick_Duty_cyc;
    uint16_t CC_Config_grid_tie;
    uint16_t CC_Config_temp_comp;
    uint16_t CC_Config_temp_comp_llimt;
    uint16_t CC_Config_temp_comp_hlimt;
    uint16_t CC_Config_auto_restart;
    uint16_t CC_Config_wakeup_VOC;
    uint16_t CC_Config_snooze_mode_A;
    uint16_t CC_Config_wakeup_interval;
    uint16_t CC_Config_AUX_mode;
    uint16_t CC_Config_AUX_control;
    uint16_t CC_Config_AUX_state;
    uint16_t CC_Config_AUX_polarity;
    uint16_t CC_Config_AUX_L_Batt_disc;
    uint16_t CC_Config_AUX_L_Batt_rcon;
    uint16_t CC_Config_AUX_L_Batt_dly;
    uint16_t CC_Config_AUX_Vent_fan_V;
    uint16_t CC_Config_AUX_PV_triggerV;
    uint16_t CC_Config_AUX_PV_trg_h_tm;
    uint16_t CC_Config_AUX_Nlite_ThrsV;
    uint16_t CC_Config_AUX_Nlite_On_tm;
    uint16_t CC_Config_AUX_Nlite_On_hist;
    uint16_t CC_Config_AUX_Nlite_Off_hist;
    uint16_t CC_Config_AUX_Error_batt_V;
    uint16_t CC_Config_AUX_Divert_h_time;
    uint16_t CC_Config_AUX_Divert_dly_time;
    uint16_t CC_Config_AUX_Divert_Rel_V;
    uint16_t CC_Config_AUX_Divert_Hyst_V;
    uint16_t CC_Config_MajorFWRev;
    uint16_t CC_Config_MidFWRev;
    uint16_t CC_Config_MinorFWRev;
    uint16_t CC_Config_DataLog_Day_offset;
    uint16_t CC_Config_DataLog_Cur_Day_off;
    uint16_t CC_Config_DataLog_Daily_AH;
    uint16_t CC_Config_DataLog_Daily_KWH;
    uint16_t CC_Config_DataLog_Max_Out_A;
    uint16_t CC_Config_DataLog_Max_Out_W;
    uint16_t CC_Config_DataLog_Absorb_T;
    uint16_t CC_Config_DataLog_Float_T;
    uint16_t CC_Config_DataLog_Min_Batt_V;
    uint16_t CC_Config_DataLog_Max_Batt_V;
    uint16_t CC_Config_DataLog_Max_Input_V;
    uint16_t CC_Config_DataLog_Clear;
    uint16_t CC_Config_DataLog_Clr_Comp;
};
#pragma pack(pop)

class Model64112 : public SunSpecModelBase {
public:
    Model64112_Raw raw;

    uint16_t get_id() const override { return 64112; }

    void from_buffer(const uint8_t* buffer) override {
        std::memcpy(&raw, buffer, sizeof(Model64112_Raw));
    }

    uint16_t get_raw_ID() const {
        return be16toh_custom(raw.ID);
    }

    uint16_t get_raw_L() const {
        return be16toh_custom(raw.L);
    }

    uint16_t get_raw_Port() const {
        return be16toh_custom(raw.Port);
    }

    uint16_t get_raw_CC_Config_fault() const {
        return be16toh_custom_s(raw.CC_Config_fault);
    }

    float get_CC_Config_absorb_V() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.CC_Config_absorb_V);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_CC_Config_absorb_V() const {
        return be16toh_custom(raw.CC_Config_absorb_V);
    }

    float get_CC_Config_absorb_Hr() const {
        int16_t sf_val = be16toh_custom_s(raw.H_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.CC_Config_absorb_Hr);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_CC_Config_absorb_Hr() const {
        return be16toh_custom(raw.CC_Config_absorb_Hr);
    }

    float get_CC_Config_absorb_End_A() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.CC_Config_absorb_End_A);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_CC_Config_absorb_End_A() const {
        return be16toh_custom(raw.CC_Config_absorb_End_A);
    }

    float get_CC_Config_rebulk_V() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.CC_Config_rebulk_V);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_CC_Config_rebulk_V() const {
        return be16toh_custom(raw.CC_Config_rebulk_V);
    }

    float get_CC_Config_float_V() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.CC_Config_float_V);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_CC_Config_float_V() const {
        return be16toh_custom(raw.CC_Config_float_V);
    }

    float get_CC_Config_max_Chg_A() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.CC_Config_max_Chg_A);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_CC_Config_max_Chg_A() const {
        return be16toh_custom(raw.CC_Config_max_Chg_A);
    }

    float get_CC_Config_equalize_V() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.CC_Config_equalize_V);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_CC_Config_equalize_V() const {
        return be16toh_custom(raw.CC_Config_equalize_V);
    }

    uint16_t get_raw_CC_Config_equalize_Hr() const {
        return be16toh_custom(raw.CC_Config_equalize_Hr);
    }

    uint16_t get_raw_CC_Config_auto_equalize() const {
        return be16toh_custom(raw.CC_Config_auto_equalize);
    }

    uint16_t get_raw_CC_Config_MPPT_mode() const {
        return be16toh_custom_s(raw.CC_Config_MPPT_mode);
    }

    uint16_t get_raw_CC_Config_sweep_width() const {
        return be16toh_custom_s(raw.CC_Config_sweep_width);
    }

    uint16_t get_raw_CC_Config_sweep_max() const {
        return be16toh_custom_s(raw.CC_Config_sweep_max);
    }

    float get_CC_Config_U_Pick_Duty_cyc() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.CC_Config_U_Pick_Duty_cyc);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_CC_Config_U_Pick_Duty_cyc() const {
        return be16toh_custom(raw.CC_Config_U_Pick_Duty_cyc);
    }

    uint16_t get_raw_CC_Config_grid_tie() const {
        return be16toh_custom_s(raw.CC_Config_grid_tie);
    }

    uint16_t get_raw_CC_Config_temp_comp() const {
        return be16toh_custom_s(raw.CC_Config_temp_comp);
    }

    float get_CC_Config_temp_comp_llimt() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.CC_Config_temp_comp_llimt);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_CC_Config_temp_comp_llimt() const {
        return be16toh_custom(raw.CC_Config_temp_comp_llimt);
    }

    float get_CC_Config_temp_comp_hlimt() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.CC_Config_temp_comp_hlimt);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_CC_Config_temp_comp_hlimt() const {
        return be16toh_custom(raw.CC_Config_temp_comp_hlimt);
    }

    uint16_t get_raw_CC_Config_auto_restart() const {
        return be16toh_custom_s(raw.CC_Config_auto_restart);
    }

    float get_CC_Config_wakeup_VOC() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.CC_Config_wakeup_VOC);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_CC_Config_wakeup_VOC() const {
        return be16toh_custom(raw.CC_Config_wakeup_VOC);
    }

    float get_CC_Config_snooze_mode_A() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.CC_Config_snooze_mode_A);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_CC_Config_snooze_mode_A() const {
        return be16toh_custom(raw.CC_Config_snooze_mode_A);
    }

    uint16_t get_raw_CC_Config_wakeup_interval() const {
        return be16toh_custom(raw.CC_Config_wakeup_interval);
    }

    uint16_t get_raw_CC_Config_AUX_mode() const {
        return be16toh_custom_s(raw.CC_Config_AUX_mode);
    }

    uint16_t get_raw_CC_Config_AUX_control() const {
        return be16toh_custom_s(raw.CC_Config_AUX_control);
    }

    uint16_t get_raw_CC_Config_AUX_state() const {
        return be16toh_custom_s(raw.CC_Config_AUX_state);
    }

    uint16_t get_raw_CC_Config_AUX_polarity() const {
        return be16toh_custom_s(raw.CC_Config_AUX_polarity);
    }

    float get_CC_Config_AUX_L_Batt_disc() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.CC_Config_AUX_L_Batt_disc);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_CC_Config_AUX_L_Batt_disc() const {
        return be16toh_custom(raw.CC_Config_AUX_L_Batt_disc);
    }

    float get_CC_Config_AUX_L_Batt_rcon() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.CC_Config_AUX_L_Batt_rcon);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_CC_Config_AUX_L_Batt_rcon() const {
        return be16toh_custom(raw.CC_Config_AUX_L_Batt_rcon);
    }

    uint16_t get_raw_CC_Config_AUX_L_Batt_dly() const {
        return be16toh_custom(raw.CC_Config_AUX_L_Batt_dly);
    }

    float get_CC_Config_AUX_Vent_fan_V() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.CC_Config_AUX_Vent_fan_V);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_CC_Config_AUX_Vent_fan_V() const {
        return be16toh_custom(raw.CC_Config_AUX_Vent_fan_V);
    }

    float get_CC_Config_AUX_PV_triggerV() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.CC_Config_AUX_PV_triggerV);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_CC_Config_AUX_PV_triggerV() const {
        return be16toh_custom(raw.CC_Config_AUX_PV_triggerV);
    }

    uint16_t get_raw_CC_Config_AUX_PV_trg_h_tm() const {
        return be16toh_custom(raw.CC_Config_AUX_PV_trg_h_tm);
    }

    float get_CC_Config_AUX_Nlite_ThrsV() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.CC_Config_AUX_Nlite_ThrsV);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_CC_Config_AUX_Nlite_ThrsV() const {
        return be16toh_custom(raw.CC_Config_AUX_Nlite_ThrsV);
    }

    float get_CC_Config_AUX_Nlite_On_tm() const {
        int16_t sf_val = be16toh_custom_s(raw.H_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.CC_Config_AUX_Nlite_On_tm);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_CC_Config_AUX_Nlite_On_tm() const {
        return be16toh_custom(raw.CC_Config_AUX_Nlite_On_tm);
    }

    uint16_t get_raw_CC_Config_AUX_Nlite_On_hist() const {
        return be16toh_custom(raw.CC_Config_AUX_Nlite_On_hist);
    }

    uint16_t get_raw_CC_Config_AUX_Nlite_Off_hist() const {
        return be16toh_custom(raw.CC_Config_AUX_Nlite_Off_hist);
    }

    float get_CC_Config_AUX_Error_batt_V() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.CC_Config_AUX_Error_batt_V);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_CC_Config_AUX_Error_batt_V() const {
        return be16toh_custom(raw.CC_Config_AUX_Error_batt_V);
    }

    float get_CC_Config_AUX_Divert_h_time() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.CC_Config_AUX_Divert_h_time);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_CC_Config_AUX_Divert_h_time() const {
        return be16toh_custom(raw.CC_Config_AUX_Divert_h_time);
    }

    uint16_t get_raw_CC_Config_AUX_Divert_dly_time() const {
        return be16toh_custom(raw.CC_Config_AUX_Divert_dly_time);
    }

    float get_CC_Config_AUX_Divert_Rel_V() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.CC_Config_AUX_Divert_Rel_V);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_CC_Config_AUX_Divert_Rel_V() const {
        return be16toh_custom(raw.CC_Config_AUX_Divert_Rel_V);
    }

    float get_CC_Config_AUX_Divert_Hyst_V() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.CC_Config_AUX_Divert_Hyst_V);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_CC_Config_AUX_Divert_Hyst_V() const {
        return be16toh_custom(raw.CC_Config_AUX_Divert_Hyst_V);
    }

    uint16_t get_raw_CC_Config_MajorFWRev() const {
        return be16toh_custom(raw.CC_Config_MajorFWRev);
    }

    uint16_t get_raw_CC_Config_MidFWRev() const {
        return be16toh_custom(raw.CC_Config_MidFWRev);
    }

    uint16_t get_raw_CC_Config_MinorFWRev() const {
        return be16toh_custom(raw.CC_Config_MinorFWRev);
    }

    uint16_t get_raw_CC_Config_DataLog_Day_offset() const {
        return be16toh_custom(raw.CC_Config_DataLog_Day_offset);
    }

    uint16_t get_raw_CC_Config_DataLog_Cur_Day_off() const {
        return be16toh_custom(raw.CC_Config_DataLog_Cur_Day_off);
    }

    uint16_t get_raw_CC_Config_DataLog_Daily_AH() const {
        return be16toh_custom(raw.CC_Config_DataLog_Daily_AH);
    }

    float get_CC_Config_DataLog_Daily_KWH() const {
        int16_t sf_val = be16toh_custom_s(raw.KWH_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.CC_Config_DataLog_Daily_KWH);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_CC_Config_DataLog_Daily_KWH() const {
        return be16toh_custom(raw.CC_Config_DataLog_Daily_KWH);
    }

    float get_CC_Config_DataLog_Max_Out_A() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.CC_Config_DataLog_Max_Out_A);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_CC_Config_DataLog_Max_Out_A() const {
        return be16toh_custom(raw.CC_Config_DataLog_Max_Out_A);
    }

    float get_CC_Config_DataLog_Max_Out_W() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.CC_Config_DataLog_Max_Out_W);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_CC_Config_DataLog_Max_Out_W() const {
        return be16toh_custom(raw.CC_Config_DataLog_Max_Out_W);
    }

    uint16_t get_raw_CC_Config_DataLog_Absorb_T() const {
        return be16toh_custom(raw.CC_Config_DataLog_Absorb_T);
    }

    uint16_t get_raw_CC_Config_DataLog_Float_T() const {
        return be16toh_custom(raw.CC_Config_DataLog_Float_T);
    }

    float get_CC_Config_DataLog_Min_Batt_V() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.CC_Config_DataLog_Min_Batt_V);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_CC_Config_DataLog_Min_Batt_V() const {
        return be16toh_custom(raw.CC_Config_DataLog_Min_Batt_V);
    }

    float get_CC_Config_DataLog_Max_Batt_V() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.CC_Config_DataLog_Max_Batt_V);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_CC_Config_DataLog_Max_Batt_V() const {
        return be16toh_custom(raw.CC_Config_DataLog_Max_Batt_V);
    }

    float get_CC_Config_DataLog_Max_Input_V() const {
        int16_t sf_val = be16toh_custom_s(raw.V_SF);
        if (sf_val == (int16_t)0x8000) return NAN;
        uint16_t val = be16toh_custom(raw.CC_Config_DataLog_Max_Input_V);
        return (float)val * std::pow(10.0f, sf_val);
    }

    uint16_t get_raw_CC_Config_DataLog_Max_Input_V() const {
        return be16toh_custom(raw.CC_Config_DataLog_Max_Input_V);
    }

    uint16_t get_raw_CC_Config_DataLog_Clear() const {
        return be16toh_custom(raw.CC_Config_DataLog_Clear);
    }

    uint16_t get_raw_CC_Config_DataLog_Clr_Comp() const {
        return be16toh_custom(raw.CC_Config_DataLog_Clr_Comp);
    }

};
