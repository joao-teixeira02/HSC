#include "pixel_proc.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void pixel_proc::thread_tmp_74_fu_24187_p3() {
    tmp_74_fu_24187_p3 = R_temp_V_1_fu_24182_p2.read().range(95, 95);
}

void pixel_proc::thread_tmp_77_fu_24214_p3() {
    tmp_77_fu_24214_p3 = ret_V_14_reg_28171.read().range(160, 160);
}

void pixel_proc::thread_tmp_79_fu_24818_p4() {
    tmp_79_fu_24818_p4 = lsb_index_1_fu_24813_p2.read().range(31, 1);
}

void pixel_proc::thread_tmp_7_fu_8250_p3() {
    tmp_7_fu_8250_p3 = esl_concat<1,8>(ap_const_lv1_0, add_ln964_fu_8244_p2.read());
}

void pixel_proc::thread_tmp_80_fu_24866_p3() {
    tmp_80_fu_24866_p3 = lsb_index_1_fu_24813_p2.read().range(31, 31);
}

void pixel_proc::thread_tmp_84_fu_26299_p4() {
    tmp_84_fu_26299_p4 = sh_amt_3_fu_26294_p2.read().range(8, 3);
}

void pixel_proc::thread_tmp_85_fu_26458_p3() {
    tmp_85_fu_26458_p3 = reg_V_1_reg_28782.read().range(31, 31);
}

void pixel_proc::thread_tmp_87_fu_25283_p4() {
    tmp_87_fu_25283_p4 = lsb_index_2_fu_25278_p2.read().range(31, 1);
}

void pixel_proc::thread_tmp_88_fu_25331_p3() {
    tmp_88_fu_25331_p3 = lsb_index_2_fu_25278_p2.read().range(31, 31);
}

void pixel_proc::thread_tmp_8_fu_7959_p3() {
    tmp_8_fu_7959_p3 = esl_ctlz<64,64>(zext_ln1073_fu_7956_p1.read());
}

void pixel_proc::thread_tmp_92_fu_26745_p4() {
    tmp_92_fu_26745_p4 = sh_amt_5_fu_26740_p2.read().range(8, 3);
}

void pixel_proc::thread_tmp_93_fu_26825_p3() {
    tmp_93_fu_26825_p3 = reg_V_2_reg_28963.read().range(31, 31);
}

void pixel_proc::thread_tmp_95_fu_24990_p4() {
    tmp_95_fu_24990_p4 = lsb_index_3_fu_24985_p2.read().range(31, 1);
}

void pixel_proc::thread_tmp_96_fu_25038_p3() {
    tmp_96_fu_25038_p3 = lsb_index_3_fu_24985_p2.read().range(31, 31);
}

void pixel_proc::thread_tmp_V_22_fu_24784_p2() {
    tmp_V_22_fu_24784_p2 = (!ap_const_lv96_0.is_01() || !tmp_V_40_reg_28344.read().is_01())? sc_lv<96>(): (sc_biguint<96>(ap_const_lv96_0) - sc_biguint<96>(tmp_V_40_reg_28344.read()));
}

void pixel_proc::thread_tmp_V_27_fu_24544_p2() {
    tmp_V_27_fu_24544_p2 = (!ap_const_lv96_0.is_01() || !tmp_V_41_reg_28292.read().is_01())? sc_lv<96>(): (sc_biguint<96>(ap_const_lv96_0) - sc_biguint<96>(tmp_V_41_reg_28292.read()));
}

void pixel_proc::thread_tmp_V_32_fu_7465_p1() {
    tmp_V_32_fu_7465_p1 = video_in_TDATA_int.read().range(8-1, 0);
}

void pixel_proc::thread_tmp_V_33_fu_7469_p4() {
    tmp_V_33_fu_7469_p4 = video_in_TDATA_int.read().range(15, 8);
}

void pixel_proc::thread_tmp_V_34_fu_7479_p4() {
    tmp_V_34_fu_7479_p4 = video_in_TDATA_int.read().range(23, 16);
}

void pixel_proc::thread_tmp_V_35_fu_8284_p4() {
    tmp_V_35_fu_8284_p4 = t_V_5_fu_8281_p1.read().range(30, 23);
}

void pixel_proc::thread_tmp_V_36_fu_8370_p1() {
    tmp_V_36_fu_8370_p1 = p_Val2_29_reg_27230.read().range(23-1, 0);
}

void pixel_proc::thread_tmp_V_37_fu_8613_p3() {
    tmp_V_37_fu_8613_p3 = (!p_Result_72_reg_27282_pp0_iter8_reg.read()[0].is_01())? sc_lv<8>(): ((p_Result_72_reg_27282_pp0_iter8_reg.read()[0].to_bool())? sub_ln461_fu_8608_p2.read(): select_ln282_reg_27328.read());
}

void pixel_proc::thread_tmp_V_39_fu_24326_p3() {
    tmp_V_39_fu_24326_p3 = (!or_ln340_5_fu_24306_p2.read()[0].is_01())? sc_lv<96>(): ((or_ln340_5_fu_24306_p2.read()[0].to_bool())? select_ln340_2_fu_24312_p3.read(): select_ln388_2_fu_24319_p3.read());
}

void pixel_proc::thread_tmp_V_40_fu_24620_p3() {
    tmp_V_40_fu_24620_p3 = (!or_ln340_8_fu_24600_p2.read()[0].is_01())? sc_lv<96>(): ((or_ln340_8_fu_24600_p2.read()[0].to_bool())? select_ln340_3_fu_24606_p3.read(): select_ln388_3_fu_24613_p3.read());
}

void pixel_proc::thread_tmp_V_41_fu_24439_p3() {
    tmp_V_41_fu_24439_p3 = (!or_ln340_11_fu_24419_p2.read()[0].is_01())? sc_lv<96>(): ((or_ln340_11_fu_24419_p2.read()[0].to_bool())? select_ln340_4_fu_24425_p3.read(): select_ln388_4_fu_24432_p3.read());
}

void pixel_proc::thread_tmp_V_42_fu_24633_p3() {
    tmp_V_42_fu_24633_p3 = (!p_Result_82_reg_28299.read()[0].is_01())? sc_lv<96>(): ((p_Result_82_reg_28299.read()[0].to_bool())? tmp_V_reg_28334.read(): tmp_V_39_reg_28256.read());
}

void pixel_proc::thread_tmp_V_43_fu_25442_p4() {
    tmp_V_43_fu_25442_p4 = t_V_15_fu_25439_p1.read().range(30, 23);
}

void pixel_proc::thread_tmp_V_44_fu_25650_p1() {
    tmp_V_44_fu_25650_p1 = p_Val2_60_fu_25645_p2.read().range(23-1, 0);
}

void pixel_proc::thread_tmp_V_45_fu_24928_p3() {
    tmp_V_45_fu_24928_p3 = (!p_Result_89_reg_28380.read()[0].is_01())? sc_lv<96>(): ((p_Result_89_reg_28380.read()[0].to_bool())? tmp_V_22_reg_28432.read(): tmp_V_40_reg_28344.read());
}

void pixel_proc::thread_tmp_V_46_fu_25800_p4() {
    tmp_V_46_fu_25800_p4 = t_V_19_fu_25797_p1.read().range(30, 23);
}

void pixel_proc::thread_tmp_V_47_fu_25909_p1() {
    tmp_V_47_fu_25909_p1 = p_Val2_71_fu_25904_p2.read().range(23-1, 0);
}

void pixel_proc::thread_tmp_V_48_fu_24703_p3() {
    tmp_V_48_fu_24703_p3 = (!p_Result_96_reg_28305.read()[0].is_01())? sc_lv<96>(): ((p_Result_96_reg_28305.read()[0].to_bool())? tmp_V_27_reg_28339.read(): tmp_V_41_reg_28292.read());
}

void pixel_proc::thread_tmp_V_49_fu_25537_p4() {
    tmp_V_49_fu_25537_p4 = t_V_23_fu_25534_p1.read().range(30, 23);
}

void pixel_proc::thread_tmp_V_50_fu_25735_p1() {
    tmp_V_50_fu_25735_p1 = p_Val2_82_fu_25730_p2.read().range(23-1, 0);
}

void pixel_proc::thread_tmp_V_fu_24539_p2() {
    tmp_V_fu_24539_p2 = (!ap_const_lv96_0.is_01() || !tmp_V_39_reg_28256.read().is_01())? sc_lv<96>(): (sc_biguint<96>(ap_const_lv96_0) - sc_biguint<96>(tmp_V_39_reg_28256.read()));
}

void pixel_proc::thread_tmp_fu_7983_p3() {
    tmp_fu_7983_p3 = esl_ctlz<64,64>(p_Result_67_fu_7976_p3.read());
}

void pixel_proc::thread_tmp_s_fu_24748_p3() {
    tmp_s_fu_24748_p3 = esl_ctlz<64,64>(p_Result_97_fu_24740_p3.read());
}

void pixel_proc::thread_trunc_ln1074_1_fu_24656_p1() {
    trunc_ln1074_1_fu_24656_p1 = tmp_20_fu_24648_p3.read().range(32-1, 0);
}

void pixel_proc::thread_trunc_ln1074_2_fu_24951_p1() {
    trunc_ln1074_2_fu_24951_p1 = tmp_25_fu_24943_p3.read().range(32-1, 0);
}

void pixel_proc::thread_trunc_ln1074_3_fu_24726_p1() {
    trunc_ln1074_3_fu_24726_p1 = tmp_29_fu_24718_p3.read().range(32-1, 0);
}

void pixel_proc::thread_trunc_ln1074_fu_7967_p1() {
    trunc_ln1074_fu_7967_p1 = tmp_8_fu_7959_p3.read().range(32-1, 0);
}

void pixel_proc::thread_trunc_ln1081_1_fu_24666_p1() {
    trunc_ln1081_1_fu_24666_p1 = tmp_V_42_fu_24633_p3.read().range(32-1, 0);
}

void pixel_proc::thread_trunc_ln1081_2_fu_24961_p1() {
    trunc_ln1081_2_fu_24961_p1 = tmp_V_45_fu_24928_p3.read().range(32-1, 0);
}

void pixel_proc::thread_trunc_ln1081_3_fu_24736_p1() {
    trunc_ln1081_3_fu_24736_p1 = tmp_V_48_fu_24703_p3.read().range(32-1, 0);
}

void pixel_proc::thread_trunc_ln1081_fu_7814_p1() {
    trunc_ln1081_fu_7814_p1 = p_Val2_6_fu_7739_p2.read().range(32-1, 0);
}

void pixel_proc::thread_trunc_ln1083_1_fu_24686_p1() {
    trunc_ln1083_1_fu_24686_p1 = tmp_2_fu_24678_p3.read().range(32-1, 0);
}

void pixel_proc::thread_trunc_ln1083_2_fu_24981_p1() {
    trunc_ln1083_2_fu_24981_p1 = tmp_6_fu_24973_p3.read().range(32-1, 0);
}

void pixel_proc::thread_trunc_ln1083_3_fu_24756_p1() {
    trunc_ln1083_3_fu_24756_p1 = tmp_s_fu_24748_p3.read().range(32-1, 0);
}

void pixel_proc::thread_trunc_ln1083_fu_7991_p1() {
    trunc_ln1083_fu_7991_p1 = tmp_fu_7983_p3.read().range(32-1, 0);
}

void pixel_proc::thread_trunc_ln1192_1_fu_8343_p1() {
    trunc_ln1192_1_fu_8343_p1 = grp_fu_8043_p2.read().range(96-1, 0);
}

void pixel_proc::thread_trunc_ln1192_fu_8339_p1() {
    trunc_ln1192_fu_8339_p1 = grp_fu_8037_p2.read().range(96-1, 0);
}

void pixel_proc::thread_trunc_ln191_1_fu_26543_p1() {
    trunc_ln191_1_fu_26543_p1 = bitcast_ln191_1_fu_26530_p1.read().range(23-1, 0);
}

void pixel_proc::thread_trunc_ln191_2_fu_26060_p1() {
    trunc_ln191_2_fu_26060_p1 = bitcast_ln191_2_fu_26047_p1.read().range(23-1, 0);
}

void pixel_proc::thread_trunc_ln191_fu_26031_p1() {
    trunc_ln191_fu_26031_p1 = bitcast_ln191_fu_26018_p1.read().range(23-1, 0);
}

void pixel_proc::thread_trunc_ln209_1_fu_10752_p1() {
    trunc_ln209_1_fu_10752_p1 = tmp_14_fu_10234_p258.read().range(8-1, 0);
}

void pixel_proc::thread_trunc_ln209_2_fu_15110_p1() {
    trunc_ln209_2_fu_15110_p1 = address_counter_V.read().range(6-1, 0);
}

void pixel_proc::thread_trunc_ln209_3_fu_10845_p1() {
    trunc_ln209_3_fu_10845_p1 = address_counter_V.read().range(6-1, 0);
}

void pixel_proc::thread_trunc_ln209_fu_15017_p1() {
    trunc_ln209_fu_15017_p1 = tmp_12_fu_14499_p258.read().range(8-1, 0);
}

void pixel_proc::thread_trunc_ln214_1_fu_26165_p1() {
    trunc_ln214_1_fu_26165_p1 = bitcast_ln214_1_fu_26152_p1.read().range(23-1, 0);
}

void pixel_proc::thread_trunc_ln214_2_fu_25984_p1() {
    trunc_ln214_2_fu_25984_p1 = bitcast_ln214_2_fu_25971_p1.read().range(23-1, 0);
}

void pixel_proc::thread_trunc_ln214_fu_25851_p1() {
    trunc_ln214_fu_25851_p1 = bitcast_ln214_fu_25838_p1.read().range(23-1, 0);
}

void pixel_proc::thread_trunc_ln262_1_fu_26092_p1() {
    trunc_ln262_1_fu_26092_p1 = reg_V_1_fu_26085_p3.read().range(31-1, 0);
}

void pixel_proc::thread_trunc_ln262_2_fu_26586_p1() {
    trunc_ln262_2_fu_26586_p1 = reg_V_2_fu_26579_p3.read().range(31-1, 0);
}

void pixel_proc::thread_trunc_ln262_3_fu_26215_p1() {
    trunc_ln262_3_fu_26215_p1 = reg_V_3_fu_26208_p3.read().range(31-1, 0);
}

void pixel_proc::thread_trunc_ln262_fu_8434_p1() {
    trunc_ln262_fu_8434_p1 = reg_V_fu_8430_p1.read().range(31-1, 0);
}

void pixel_proc::thread_trunc_ln270_1_fu_26275_p1() {
    trunc_ln270_1_fu_26275_p1 = reg_V_1_reg_28782.read().range(23-1, 0);
}

void pixel_proc::thread_trunc_ln270_2_fu_26721_p1() {
    trunc_ln270_2_fu_26721_p1 = reg_V_2_reg_28963.read().range(23-1, 0);
}

void pixel_proc::thread_trunc_ln270_3_fu_26365_p1() {
    trunc_ln270_3_fu_26365_p1 = reg_V_3_reg_28835.read().range(23-1, 0);
}

void pixel_proc::thread_trunc_ln270_fu_7573_p1() {
    trunc_ln270_fu_7573_p1 = reg_V_reg_27276.read().range(23-1, 0);
}

void pixel_proc::thread_trunc_ln283_1_fu_26118_p1() {
    trunc_ln283_1_fu_26118_p1 = reg_V_1_fu_26085_p3.read().range(8-1, 0);
}

void pixel_proc::thread_trunc_ln283_2_fu_26612_p1() {
    trunc_ln283_2_fu_26612_p1 = reg_V_2_fu_26579_p3.read().range(8-1, 0);
}

void pixel_proc::thread_trunc_ln283_3_fu_26241_p1() {
    trunc_ln283_3_fu_26241_p1 = reg_V_3_fu_26208_p3.read().range(8-1, 0);
}

void pixel_proc::thread_trunc_ln283_fu_8460_p1() {
    trunc_ln283_fu_8460_p1 = reg_V_fu_8430_p1.read().range(8-1, 0);
}

void pixel_proc::thread_trunc_ln286_1_fu_26321_p1() {
    trunc_ln286_1_fu_26321_p1 = lshr_ln286_1_fu_26315_p2.read().range(8-1, 0);
}

void pixel_proc::thread_trunc_ln286_2_fu_26767_p1() {
    trunc_ln286_2_fu_26767_p1 = lshr_ln286_2_fu_26761_p2.read().range(8-1, 0);
}

void pixel_proc::thread_trunc_ln286_3_fu_26411_p1() {
    trunc_ln286_3_fu_26411_p1 = lshr_ln286_3_fu_26405_p2.read().range(8-1, 0);
}

void pixel_proc::thread_trunc_ln286_fu_7619_p1() {
    trunc_ln286_fu_7619_p1 = lshr_ln286_fu_7613_p2.read().range(8-1, 0);
}

void pixel_proc::thread_trunc_ln321_1_fu_10767_p1() {
    trunc_ln321_1_fu_10767_p1 = address_counter_V.read().range(6-1, 0);
}

void pixel_proc::thread_trunc_ln321_fu_15032_p1() {
    trunc_ln321_fu_15032_p1 = address_counter_V.read().range(6-1, 0);
}

void pixel_proc::thread_trunc_ln647_fu_8628_p1() {
    trunc_ln647_fu_8628_p1 = frame_counter_V.read().range(2-1, 0);
}

void pixel_proc::thread_trunc_ln738_2_fu_8638_p1() {
    trunc_ln738_2_fu_8638_p1 = tmp_V_37_fu_8613_p3.read().range(6-1, 0);
}

void pixel_proc::thread_trunc_ln738_fu_8642_p1() {
    trunc_ln738_fu_8642_p1 = tmp_V_37_fu_8613_p3.read().range(6-1, 0);
}

void pixel_proc::thread_trunc_ln943_1_fu_24780_p1() {
    trunc_ln943_1_fu_24780_p1 = l_1_fu_24764_p3.read().range(8-1, 0);
}

void pixel_proc::thread_trunc_ln943_2_fu_25169_p1() {
    trunc_ln943_2_fu_25169_p1 = l_2_fu_25153_p3.read().range(8-1, 0);
}

void pixel_proc::thread_trunc_ln943_3_fu_24809_p1() {
    trunc_ln943_3_fu_24809_p1 = l_3_fu_24793_p3.read().range(8-1, 0);
}

void pixel_proc::thread_trunc_ln943_fu_8015_p1() {
    trunc_ln943_fu_8015_p1 = l_fu_7999_p3.read().range(8-1, 0);
}

void pixel_proc::thread_trunc_ln947_1_fu_24776_p1() {
    trunc_ln947_1_fu_24776_p1 = sub_ln944_1_fu_24770_p2.read().range(7-1, 0);
}

void pixel_proc::thread_trunc_ln947_2_fu_25165_p1() {
    trunc_ln947_2_fu_25165_p1 = sub_ln944_2_fu_25159_p2.read().range(7-1, 0);
}

void pixel_proc::thread_trunc_ln947_3_fu_24805_p1() {
    trunc_ln947_3_fu_24805_p1 = sub_ln944_3_fu_24799_p2.read().range(7-1, 0);
}

void pixel_proc::thread_trunc_ln947_fu_8011_p1() {
    trunc_ln947_fu_8011_p1 = sub_ln944_fu_8005_p2.read().range(7-1, 0);
}

void pixel_proc::thread_trunc_ln954_1_fu_8195_p1() {
    trunc_ln954_1_fu_8195_p1 = shl_ln954_fu_8186_p2.read().range(32-1, 0);
}

void pixel_proc::thread_trunc_ln954_2_fu_25111_p1() {
    trunc_ln954_2_fu_25111_p1 = lshr_ln954_1_fu_25098_p2.read().range(32-1, 0);
}

void pixel_proc::thread_trunc_ln954_3_fu_25115_p1() {
    trunc_ln954_3_fu_25115_p1 = shl_ln954_1_fu_25106_p2.read().range(32-1, 0);
}

void pixel_proc::thread_trunc_ln954_4_fu_25496_p1() {
    trunc_ln954_4_fu_25496_p1 = lshr_ln954_2_fu_25483_p2.read().range(32-1, 0);
}

void pixel_proc::thread_trunc_ln954_5_fu_25500_p1() {
    trunc_ln954_5_fu_25500_p1 = shl_ln954_2_fu_25491_p2.read().range(32-1, 0);
}

void pixel_proc::thread_trunc_ln954_6_fu_25189_p1() {
    trunc_ln954_6_fu_25189_p1 = lshr_ln954_3_fu_25176_p2.read().range(32-1, 0);
}

void pixel_proc::thread_trunc_ln954_7_fu_25193_p1() {
    trunc_ln954_7_fu_25193_p1 = shl_ln954_3_fu_25184_p2.read().range(32-1, 0);
}

void pixel_proc::thread_trunc_ln954_fu_8191_p1() {
    trunc_ln954_fu_8191_p1 = lshr_ln954_fu_8178_p2.read().range(32-1, 0);
}

void pixel_proc::thread_underflow_1_fu_7915_p2() {
    underflow_1_fu_7915_p2 = (p_Result_65_reg_27058.read() & xor_ln786_1_fu_7909_p2.read());
}

void pixel_proc::thread_underflow_2_fu_24290_p2() {
    underflow_2_fu_24290_p2 = (p_Result_73_reg_28142.read() & xor_ln786_2_fu_24284_p2.read());
}

void pixel_proc::thread_underflow_3_fu_24584_p2() {
    underflow_3_fu_24584_p2 = (p_Result_76_reg_28268.read() & xor_ln786_3_fu_24578_p2.read());
}

void pixel_proc::thread_underflow_4_fu_24403_p2() {
    underflow_4_fu_24403_p2 = (p_Result_79_reg_28176.read() & xor_ln786_4_fu_24397_p2.read());
}

void pixel_proc::thread_underflow_fu_7846_p2() {
    underflow_fu_7846_p2 = (p_Result_63_reg_27023.read() & xor_ln786_fu_7840_p2.read());
}

void pixel_proc::thread_values_V_1_ack_in() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, values_V_1_vld_reg.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, values_V_1_vld_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_const_logic_1)))) {
        values_V_1_ack_in = ap_const_logic_1;
    } else {
        values_V_1_ack_in = ap_const_logic_0;
    }
}

void pixel_proc::thread_values_V_1_data_in() {
    if (esl_seteq<1,1,1>(ap_condition_9732.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,1,1>(ap_const_lv1_1, copy_select_V_reg_27357.read()) && 
             esl_seteq<1,2,2>(ap_const_lv2_1, copy2_state_load_reg_27744.read()))) {
            values_V_1_data_in = copy2_values_V.read();
        } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, copy_select_V_reg_27357.read()) && 
                    esl_seteq<1,2,2>(ap_const_lv2_1, copy1_state_load_reg_27395.read()))) {
            values_V_1_data_in = copy1_values_V.read();
        } else {
            values_V_1_data_in =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        values_V_1_data_in =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pixel_proc::thread_values_V_1_vld_in() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, copy_select_V_reg_27357.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
          esl_seteq<1,2,2>(ap_const_lv2_1, copy1_state_load_reg_27395.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, copy_select_V_reg_27357.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
          esl_seteq<1,2,2>(ap_const_lv2_1, copy2_state_load_reg_27744.read())))) {
        values_V_1_vld_in = ap_const_logic_1;
    } else {
        values_V_1_vld_in = ap_const_logic_0;
    }
}

void pixel_proc::thread_video_in_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        video_in_TDATA_blk_n = video_in_TVALID_int.read();
    } else {
        video_in_TDATA_blk_n = ap_const_logic_1;
    }
}

void pixel_proc::thread_video_in_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, video_in_TVALID.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, regslice_both_video_in_data_U_ack_in.read()))) {
        video_in_TREADY = ap_const_logic_1;
    } else {
        video_in_TREADY = ap_const_logic_0;
    }
}

void pixel_proc::thread_video_in_TREADY_int() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        video_in_TREADY_int = ap_const_logic_1;
    } else {
        video_in_TREADY_int = ap_const_logic_0;
    }
}

void pixel_proc::thread_video_out_TDATA_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter22.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter22.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)))) {
        video_out_TDATA_blk_n = video_out_TREADY_int.read();
    } else {
        video_out_TDATA_blk_n = ap_const_logic_1;
    }
}

void pixel_proc::thread_video_out_TDATA_int() {
    video_out_TDATA_int = esl_concat<16,8>(esl_concat<8,8>(select_ln303_2_reg_29041.read(), select_ln303_1_fu_26902_p3.read()), select_ln303_reg_28958_pp0_iter21_reg.read());
}

void pixel_proc::thread_video_out_TVALID() {
    video_out_TVALID = regslice_both_video_out_data_U_vld_out.read();
}

void pixel_proc::thread_video_out_TVALID_int() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter22.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        video_out_TVALID_int = ap_const_logic_1;
    } else {
        video_out_TVALID_int = ap_const_logic_0;
    }
}

void pixel_proc::thread_write_ready_V_0_ack_out() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, frames_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, rows_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, pixels_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, sum_before_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, sum_after_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, values_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, read_done_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_1, regslice_both_video_out_data_U_apdone_blk.read()))))) {
        write_ready_V_0_ack_out = ap_const_logic_1;
    } else {
        write_ready_V_0_ack_out = ap_const_logic_0;
    }
}

void pixel_proc::thread_xor_ln1309_1_fu_25654_p2() {
    xor_ln1309_1_fu_25654_p2 = (reg_7422.read() ^ ap_const_lv23_7FFFFF);
}

void pixel_proc::thread_xor_ln1309_2_fu_25913_p2() {
    xor_ln1309_2_fu_25913_p2 = (reg_7443.read() ^ ap_const_lv23_7FFFFF);
}

void pixel_proc::thread_xor_ln1309_3_fu_25739_p2() {
    xor_ln1309_3_fu_25739_p2 = (reg_7443.read() ^ ap_const_lv23_7FFFFF);
}

void pixel_proc::thread_xor_ln1309_fu_8373_p2() {
    xor_ln1309_fu_8373_p2 = (reg_7422.read() ^ ap_const_lv23_7FFFFF);
}

void pixel_proc::thread_xor_ln278_1_fu_26513_p2() {
    xor_ln278_1_fu_26513_p2 = (icmp_ln278_1_reg_28799.read() ^ ap_const_lv1_1);
}

void pixel_proc::thread_xor_ln278_2_fu_26880_p2() {
    xor_ln278_2_fu_26880_p2 = (icmp_ln278_2_reg_28980.read() ^ ap_const_lv1_1);
}

void pixel_proc::thread_xor_ln278_3_fu_26704_p2() {
    xor_ln278_3_fu_26704_p2 = (icmp_ln278_3_reg_28852_pp0_iter20_reg.read() ^ ap_const_lv1_1);
}

void pixel_proc::thread_xor_ln278_fu_8564_p2() {
    xor_ln278_fu_8564_p2 = (icmp_ln278_reg_27293.read() ^ ap_const_lv1_1);
}

void pixel_proc::thread_xor_ln282_1_fu_26325_p2() {
    xor_ln282_1_fu_26325_p2 = (or_ln282_1_reg_28823.read() ^ ap_const_lv1_1);
}

void pixel_proc::thread_xor_ln282_2_fu_26771_p2() {
    xor_ln282_2_fu_26771_p2 = (or_ln282_2_reg_29004.read() ^ ap_const_lv1_1);
}

void pixel_proc::thread_xor_ln282_3_fu_26415_p2() {
    xor_ln282_3_fu_26415_p2 = (or_ln282_3_reg_28876.read() ^ ap_const_lv1_1);
}

void pixel_proc::thread_xor_ln282_fu_7623_p2() {
    xor_ln282_fu_7623_p2 = (or_ln282_reg_27317.read() ^ ap_const_lv1_1);
}

void pixel_proc::thread_xor_ln284_1_fu_26353_p2() {
    xor_ln284_1_fu_26353_p2 = (or_ln284_1_fu_26349_p2.read() ^ ap_const_lv1_1);
}

void pixel_proc::thread_xor_ln284_2_fu_26799_p2() {
    xor_ln284_2_fu_26799_p2 = (or_ln284_2_fu_26795_p2.read() ^ ap_const_lv1_1);
}

void pixel_proc::thread_xor_ln284_3_fu_26443_p2() {
    xor_ln284_3_fu_26443_p2 = (or_ln284_3_fu_26439_p2.read() ^ ap_const_lv1_1);
}

void pixel_proc::thread_xor_ln284_fu_7651_p2() {
    xor_ln284_fu_7651_p2 = (or_ln284_fu_7647_p2.read() ^ ap_const_lv1_1);
}

void pixel_proc::thread_xor_ln285_1_fu_26495_p2() {
    xor_ln285_1_fu_26495_p2 = (icmp_ln285_1_reg_28882.read() ^ ap_const_lv1_1);
}

void pixel_proc::thread_xor_ln285_2_fu_26862_p2() {
    xor_ln285_2_fu_26862_p2 = (icmp_ln285_2_reg_29016.read() ^ ap_const_lv1_1);
}

void pixel_proc::thread_xor_ln285_3_fu_26686_p2() {
    xor_ln285_3_fu_26686_p2 = (icmp_ln285_3_reg_28907.read() ^ ap_const_lv1_1);
}

void pixel_proc::thread_xor_ln285_fu_8546_p2() {
    xor_ln285_fu_8546_p2 = (icmp_ln285_reg_26961.read() ^ ap_const_lv1_1);
}

void pixel_proc::thread_xor_ln416_3_fu_24107_p2() {
    xor_ln416_3_fu_24107_p2 = (tmp_60_fu_24099_p3.read() ^ ap_const_lv1_1);
}

void pixel_proc::thread_xor_ln416_4_fu_24139_p2() {
    xor_ln416_4_fu_24139_p2 = (p_Result_74_reg_28153.read() ^ ap_const_lv1_1);
}

void pixel_proc::thread_xor_ln416_5_fu_24511_p2() {
    xor_ln416_5_fu_24511_p2 = (p_Result_77_reg_28279.read() ^ ap_const_lv1_1);
}

void pixel_proc::thread_xor_ln416_6_fu_24195_p2() {
    xor_ln416_6_fu_24195_p2 = (tmp_74_fu_24187_p3.read() ^ ap_const_lv1_1);
}

void pixel_proc::thread_xor_ln416_7_fu_24227_p2() {
    xor_ln416_7_fu_24227_p2 = (p_Result_80_reg_28187.read() ^ ap_const_lv1_1);
}

void pixel_proc::thread_xor_ln416_fu_24479_p2() {
    xor_ln416_fu_24479_p2 = (tmp_67_fu_24471_p3.read() ^ ap_const_lv1_1);
}

void pixel_proc::thread_xor_ln779_1_fu_24505_p2() {
    xor_ln779_1_fu_24505_p2 = (tmp_70_fu_24498_p3.read() ^ ap_const_lv1_1);
}

void pixel_proc::thread_xor_ln779_2_fu_24221_p2() {
    xor_ln779_2_fu_24221_p2 = (tmp_77_fu_24214_p3.read() ^ ap_const_lv1_1);
}

void pixel_proc::thread_xor_ln779_fu_24133_p2() {
    xor_ln779_fu_24133_p2 = (tmp_63_fu_24126_p3.read() ^ ap_const_lv1_1);
}

void pixel_proc::thread_xor_ln785_1_fu_7894_p2() {
    xor_ln785_1_fu_7894_p2 = (p_Result_65_reg_27058.read() ^ ap_const_lv1_1);
}

void pixel_proc::thread_xor_ln785_2_fu_24259_p2() {
    xor_ln785_2_fu_24259_p2 = (Range2_all_ones_reg_28159.read() ^ carry_1_reg_28206.read());
}

void pixel_proc::thread_xor_ln785_3_fu_24268_p2() {
    xor_ln785_3_fu_24268_p2 = (p_Result_73_reg_28142.read() ^ ap_const_lv1_1);
}

void pixel_proc::thread_xor_ln785_4_fu_24553_p2() {
    xor_ln785_4_fu_24553_p2 = (Range2_all_ones_1_reg_28285.read() ^ carry_3_reg_28317.read());
}

void pixel_proc::thread_xor_ln785_5_fu_24562_p2() {
    xor_ln785_5_fu_24562_p2 = (p_Result_76_reg_28268.read() ^ ap_const_lv1_1);
}

void pixel_proc::thread_xor_ln785_6_fu_24372_p2() {
    xor_ln785_6_fu_24372_p2 = (Range2_all_ones_2_reg_28193.read() ^ carry_5_reg_28239.read());
}

void pixel_proc::thread_xor_ln785_7_fu_24381_p2() {
    xor_ln785_7_fu_24381_p2 = (p_Result_79_reg_28176.read() ^ ap_const_lv1_1);
}

void pixel_proc::thread_xor_ln785_fu_7825_p2() {
    xor_ln785_fu_7825_p2 = (p_Result_63_reg_27023.read() ^ ap_const_lv1_1);
}

void pixel_proc::thread_xor_ln786_1_fu_7909_p2() {
    xor_ln786_1_fu_7909_p2 = (and_ln786_5_fu_7905_p2.read() ^ ap_const_lv1_1);
}

void pixel_proc::thread_xor_ln786_2_fu_24284_p2() {
    xor_ln786_2_fu_24284_p2 = (or_ln786_fu_24279_p2.read() ^ ap_const_lv1_1);
}

void pixel_proc::thread_xor_ln786_3_fu_24578_p2() {
    xor_ln786_3_fu_24578_p2 = (or_ln786_1_fu_24573_p2.read() ^ ap_const_lv1_1);
}

void pixel_proc::thread_xor_ln786_4_fu_24397_p2() {
    xor_ln786_4_fu_24397_p2 = (or_ln786_2_fu_24392_p2.read() ^ ap_const_lv1_1);
}

void pixel_proc::thread_xor_ln786_fu_7840_p2() {
    xor_ln786_fu_7840_p2 = (and_ln786_1_fu_7836_p2.read() ^ ap_const_lv1_1);
}

void pixel_proc::thread_xor_ln849_1_fu_25695_p2() {
    xor_ln849_1_fu_25695_p2 = (icmp_ln849_2_reg_28598.read() ^ ap_const_lv1_1);
}

void pixel_proc::thread_xor_ln849_2_fu_25954_p2() {
    xor_ln849_2_fu_25954_p2 = (icmp_ln849_4_reg_28687.read() ^ ap_const_lv1_1);
}

void pixel_proc::thread_xor_ln849_3_fu_25780_p2() {
    xor_ln849_3_fu_25780_p2 = (icmp_ln849_6_reg_28635.read() ^ ap_const_lv1_1);
}

void pixel_proc::thread_xor_ln849_fu_8413_p2() {
    xor_ln849_fu_8413_p2 = (icmp_ln849_reg_27209.read() ^ ap_const_lv1_1);
}

void pixel_proc::thread_xor_ln949_1_fu_24874_p2() {
    xor_ln949_1_fu_24874_p2 = (tmp_80_fu_24866_p3.read() ^ ap_const_lv1_1);
}

void pixel_proc::thread_xor_ln949_2_fu_25339_p2() {
    xor_ln949_2_fu_25339_p2 = (tmp_88_fu_25331_p3.read() ^ ap_const_lv1_1);
}

void pixel_proc::thread_xor_ln949_3_fu_25046_p2() {
    xor_ln949_3_fu_25046_p2 = (tmp_96_fu_25038_p3.read() ^ ap_const_lv1_1);
}

void pixel_proc::thread_xor_ln949_fu_8120_p2() {
    xor_ln949_fu_8120_p2 = (tmp_41_fu_8112_p3.read() ^ ap_const_lv1_1);
}

void pixel_proc::thread_xs_sig_V_1_fu_25660_p2() {
    xs_sig_V_1_fu_25660_p2 = (tmp_V_44_fu_25650_p1.read() & xor_ln1309_1_fu_25654_p2.read());
}

void pixel_proc::thread_xs_sig_V_2_fu_25919_p2() {
    xs_sig_V_2_fu_25919_p2 = (tmp_V_47_fu_25909_p1.read() & xor_ln1309_2_fu_25913_p2.read());
}

void pixel_proc::thread_xs_sig_V_3_fu_25745_p2() {
    xs_sig_V_3_fu_25745_p2 = (tmp_V_50_fu_25735_p1.read() & xor_ln1309_3_fu_25739_p2.read());
}

void pixel_proc::thread_xs_sig_V_fu_8379_p2() {
    xs_sig_V_fu_8379_p2 = (tmp_V_36_fu_8370_p1.read() & xor_ln1309_fu_8373_p2.read());
}

void pixel_proc::thread_zext_ln1073_fu_7956_p1() {
    zext_ln1073_fu_7956_p1 = esl_zext<64,40>(tmp_5_reg_27081.read());
}

void pixel_proc::thread_zext_ln1118_2_fu_7503_p1() {
    zext_ln1118_2_fu_7503_p1 = esl_zext<72,8>(tmp_V_33_fu_7469_p4.read());
}

void pixel_proc::thread_zext_ln1118_3_fu_7513_p1() {
    zext_ln1118_3_fu_7513_p1 = esl_zext<71,8>(tmp_V_34_fu_7479_p4.read());
}

void pixel_proc::thread_zext_ln1192_fu_7668_p1() {
    zext_ln1192_fu_7668_p1 = esl_zext<71,69>(r_V_reg_26986.read());
}

void pixel_proc::thread_zext_ln209_1_fu_20427_p1() {
    zext_ln209_1_fu_20427_p1 = esl_zext<32,22>(tmp_18_reg_27728.read());
}

void pixel_proc::thread_zext_ln209_4_fu_8322_p1() {
    zext_ln209_4_fu_8322_p1 = esl_zext<32,24>(one_half_table9_q0.read());
}

void pixel_proc::thread_zext_ln209_5_fu_25641_p1() {
    zext_ln209_5_fu_25641_p1 = esl_zext<32,24>(reg_7438.read());
}

void pixel_proc::thread_zext_ln209_6_fu_25900_p1() {
    zext_ln209_6_fu_25900_p1 = esl_zext<32,24>(reg_7438.read());
}

void pixel_proc::thread_zext_ln209_7_fu_25727_p1() {
    zext_ln209_7_fu_25727_p1 = esl_zext<32,24>(one_half_3_reg_28662.read());
}

void pixel_proc::thread_zext_ln209_fu_23833_p1() {
    zext_ln209_fu_23833_p1 = esl_zext<32,22>(tmp_15_reg_28077.read());
}

void pixel_proc::thread_zext_ln321_2_fu_15036_p1() {
    zext_ln321_2_fu_15036_p1 = esl_zext<64,2>(grp_fu_6344_p4.read());
}

void pixel_proc::thread_zext_ln321_3_fu_20494_p1() {
    zext_ln321_3_fu_20494_p1 = esl_zext<64,2>(reg_7434.read());
}

void pixel_proc::thread_zext_ln321_5_fu_10771_p1() {
    zext_ln321_5_fu_10771_p1 = esl_zext<64,2>(grp_fu_6344_p4.read());
}

void pixel_proc::thread_zext_ln321_fu_23900_p1() {
    zext_ln321_fu_23900_p1 = esl_zext<64,2>(reg_7434.read());
}

void pixel_proc::thread_zext_ln415_1_fu_24463_p1() {
    zext_ln415_1_fu_24463_p1 = esl_zext<96,1>(tmp_66_reg_27323_pp0_iter11_reg.read());
}

void pixel_proc::thread_zext_ln415_2_fu_24179_p1() {
    zext_ln415_2_fu_24179_p1 = esl_zext<96,1>(tmp_73_reg_27271_pp0_iter10_reg.read());
}

void pixel_proc::thread_zext_ln415_fu_24091_p1() {
    zext_ln415_fu_24091_p1 = esl_zext<96,1>(tmp_59_reg_27241_pp0_iter10_reg.read());
}

void pixel_proc::thread_zext_ln498_1_fu_25474_p1() {
    zext_ln498_1_fu_25474_p1 = esl_zext<64,5>(index_V_1_fu_25464_p4.read());
}

void pixel_proc::thread_zext_ln498_2_fu_25832_p1() {
    zext_ln498_2_fu_25832_p1 = esl_zext<64,5>(index_V_2_fu_25822_p4.read());
}

void pixel_proc::thread_zext_ln498_3_fu_25569_p1() {
    zext_ln498_3_fu_25569_p1 = esl_zext<64,5>(index_V_3_fu_25559_p4.read());
}

void pixel_proc::thread_zext_ln498_fu_8316_p1() {
    zext_ln498_fu_8316_p1 = esl_zext<64,5>(index_V_fu_8306_p4.read());
}

void pixel_proc::thread_zext_ln700_1_fu_9191_p1() {
    zext_ln700_1_fu_9191_p1 = esl_zext<32,8>(tmp_V_37_reg_27349.read());
}

void pixel_proc::thread_zext_ln700_2_fu_22139_p1() {
    zext_ln700_2_fu_22139_p1 = esl_zext<32,8>(newB_V_reg_27738.read());
}

void pixel_proc::thread_zext_ln700_3_fu_18733_p1() {
    zext_ln700_3_fu_18733_p1 = esl_zext<32,8>(newB_V_1_reg_27389.read());
}

void pixel_proc::thread_zext_ln700_fu_13456_p1() {
    zext_ln700_fu_13456_p1 = esl_zext<32,8>(tmp_V_37_reg_27349.read());
}

void pixel_proc::thread_zext_ln703_1_fu_7691_p1() {
    zext_ln703_1_fu_7691_p1 = esl_zext<72,71>(r_V_10_fu_7684_p3.read());
}

void pixel_proc::thread_zext_ln703_2_fu_7751_p1() {
    zext_ln703_2_fu_7751_p1 = esl_zext<72,71>(r_V_11_fu_7744_p3.read());
}

void pixel_proc::thread_zext_ln703_3_fu_24000_p1() {
    zext_ln703_3_fu_24000_p1 = esl_zext<161,136>(r_V_14_fu_23992_p3.read());
}

void pixel_proc::thread_zext_ln703_fu_7736_p1() {
    zext_ln703_fu_7736_p1 = esl_zext<72,71>(add_ln703_reg_27018.read());
}

void pixel_proc::thread_zext_ln738_1_fu_8657_p1() {
    zext_ln738_1_fu_8657_p1 = esl_zext<9,8>(tmp_11_fu_8650_p3.read());
}

void pixel_proc::thread_zext_ln738_fu_12934_p1() {
    zext_ln738_fu_12934_p1 = esl_zext<9,8>(tmp_10_fu_12927_p3.read());
}

void pixel_proc::thread_zext_ln785_fu_8055_p1() {
    zext_ln785_fu_8055_p1 = esl_zext<96,72>(p_Val2_6_reg_27051_pp0_iter4_reg.read());
}

void pixel_proc::thread_zext_ln947_1_fu_24839_p1() {
    zext_ln947_1_fu_24839_p1 = esl_zext<96,7>(sub_ln947_1_fu_24834_p2.read());
}

void pixel_proc::thread_zext_ln947_2_fu_25304_p1() {
    zext_ln947_2_fu_25304_p1 = esl_zext<96,7>(sub_ln947_2_fu_25299_p2.read());
}

void pixel_proc::thread_zext_ln947_3_fu_25011_p1() {
    zext_ln947_3_fu_25011_p1 = esl_zext<96,7>(sub_ln947_3_fu_25006_p2.read());
}

void pixel_proc::thread_zext_ln947_fu_8084_p1() {
    zext_ln947_fu_8084_p1 = esl_zext<96,7>(sub_ln947_fu_8079_p2.read());
}

void pixel_proc::thread_zext_ln954_1_fu_8183_p1() {
    zext_ln954_1_fu_8183_p1 = esl_zext<96,32>(sub_ln954_reg_27177.read());
}

void pixel_proc::thread_zext_ln954_2_fu_25095_p1() {
    zext_ln954_2_fu_25095_p1 = esl_zext<96,32>(add_ln954_1_reg_28464.read());
}

void pixel_proc::thread_zext_ln954_3_fu_25103_p1() {
    zext_ln954_3_fu_25103_p1 = esl_zext<96,32>(sub_ln954_1_reg_28469.read());
}

void pixel_proc::thread_zext_ln954_4_fu_25480_p1() {
    zext_ln954_4_fu_25480_p1 = esl_zext<96,32>(add_ln954_2_reg_28576.read());
}

void pixel_proc::thread_zext_ln954_5_fu_25488_p1() {
    zext_ln954_5_fu_25488_p1 = esl_zext<96,32>(sub_ln954_2_reg_28581.read());
}

void pixel_proc::thread_zext_ln954_6_fu_25173_p1() {
    zext_ln954_6_fu_25173_p1 = esl_zext<96,32>(add_ln954_3_reg_28513.read());
}

void pixel_proc::thread_zext_ln954_7_fu_25181_p1() {
    zext_ln954_7_fu_25181_p1 = esl_zext<96,32>(sub_ln954_3_reg_28518.read());
}

void pixel_proc::thread_zext_ln954_fu_8175_p1() {
    zext_ln954_fu_8175_p1 = esl_zext<72,32>(add_ln954_reg_27172.read());
}

}

