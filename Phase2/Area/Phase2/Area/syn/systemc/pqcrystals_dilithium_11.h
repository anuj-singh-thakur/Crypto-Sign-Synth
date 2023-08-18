// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _pqcrystals_dilithium_11_HH_
#define _pqcrystals_dilithium_11_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct pqcrystals_dilithium_11 : public sc_module {
    // Port declarations 22
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<10> > r_coeffs_address0;
    sc_out< sc_logic > r_coeffs_ce0;
    sc_out< sc_logic > r_coeffs_we0;
    sc_out< sc_lv<32> > r_coeffs_d0;
    sc_out< sc_lv<10> > r_coeffs_address1;
    sc_out< sc_logic > r_coeffs_ce1;
    sc_out< sc_logic > r_coeffs_we1;
    sc_out< sc_lv<32> > r_coeffs_d1;
    sc_in< sc_lv<3> > r_coeffs_offset;
    sc_out< sc_lv<12> > a_address0;
    sc_out< sc_logic > a_ce0;
    sc_in< sc_lv<8> > a_q0;
    sc_out< sc_lv<12> > a_address1;
    sc_out< sc_logic > a_ce1;
    sc_in< sc_lv<8> > a_q1;
    sc_in< sc_lv<33> > a_offset;


    // Module declarations
    pqcrystals_dilithium_11(sc_module_name name);
    SC_HAS_PROCESS(pqcrystals_dilithium_11);

    ~pqcrystals_dilithium_11();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<6> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<13> > trunc_ln599_fu_205_p1;
    sc_signal< sc_lv<13> > trunc_ln599_reg_661;
    sc_signal< sc_lv<6> > i_fu_219_p2;
    sc_signal< sc_lv<6> > i_reg_671;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<5> > trunc_ln599_1_fu_225_p1;
    sc_signal< sc_lv<5> > trunc_ln599_1_reg_676;
    sc_signal< sc_lv<1> > icmp_ln598_fu_213_p2;
    sc_signal< sc_lv<8> > sub_ln599_fu_241_p2;
    sc_signal< sc_lv<8> > sub_ln599_reg_682;
    sc_signal< sc_lv<8> > shl_ln_fu_269_p3;
    sc_signal< sc_lv<8> > shl_ln_reg_693;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<2> > tmp_28_reg_703;
    sc_signal< sc_lv<3> > trunc_ln18_reg_718;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<1> > tmp_reg_723;
    sc_signal< sc_lv<2> > trunc_ln604_fu_472_p1;
    sc_signal< sc_lv<2> > trunc_ln604_reg_728;
    sc_signal< sc_lv<3> > trunc_ln19_reg_733;
    sc_signal< sc_lv<3> > tmp_34_reg_738;
    sc_signal< sc_lv<6> > i_0_reg_194;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<64> > zext_ln599_1_fu_256_p1;
    sc_signal< sc_lv<64> > zext_ln599_3_fu_284_p1;
    sc_signal< sc_lv<64> > zext_ln600_1_fu_316_p1;
    sc_signal< sc_lv<64> > zext_ln601_fu_345_p1;
    sc_signal< sc_lv<64> > zext_ln604_fu_364_p1;
    sc_signal< sc_lv<64> > zext_ln601_2_fu_418_p1;
    sc_signal< sc_lv<64> > zext_ln602_1_fu_449_p1;
    sc_signal< sc_lv<64> > zext_ln603_1_fu_533_p1;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<64> > zext_ln604_2_fu_560_p1;
    sc_signal< sc_lv<64> > zext_ln605_1_fu_602_p1;
    sc_signal< sc_lv<64> > zext_ln606_1_fu_622_p1;
    sc_signal< sc_lv<32> > sext_ln608_fu_375_p1;
    sc_signal< sc_lv<32> > sext_ln609_fu_386_p1;
    sc_signal< sc_lv<32> > sext_ln610_fu_502_p1;
    sc_signal< sc_lv<32> > sext_ln611_fu_513_p1;
    sc_signal< sc_lv<32> > sext_ln612_fu_571_p1;
    sc_signal< sc_lv<32> > sext_ln613_fu_582_p1;
    sc_signal< sc_lv<32> > sext_ln614_fu_633_p1;
    sc_signal< sc_lv<32> > sext_ln615_fu_644_p1;
    sc_signal< sc_lv<7> > shl_ln599_1_fu_229_p3;
    sc_signal< sc_lv<8> > zext_ln599_fu_237_p1;
    sc_signal< sc_lv<8> > zext_ln598_fu_209_p1;
    sc_signal< sc_lv<13> > sext_ln599_fu_247_p1;
    sc_signal< sc_lv<13> > add_ln599_fu_251_p2;
    sc_signal< sc_lv<3> > trunc_ln599_2_fu_261_p1;
    sc_signal< sc_lv<11> > tmp_s_fu_276_p4;
    sc_signal< sc_lv<3> > trunc_ln_fu_289_p4;
    sc_signal< sc_lv<8> > or_ln600_fu_303_p2;
    sc_signal< sc_lv<11> > tmp_27_fu_309_p3;
    sc_signal< sc_lv<8> > add_ln601_fu_331_p2;
    sc_signal< sc_lv<13> > sext_ln601_fu_336_p1;
    sc_signal< sc_lv<13> > add_ln601_1_fu_340_p2;
    sc_signal< sc_lv<8> > add_ln604_fu_350_p2;
    sc_signal< sc_lv<13> > sext_ln604_fu_355_p1;
    sc_signal< sc_lv<13> > add_ln604_1_fu_359_p2;
    sc_signal< sc_lv<4> > zext_ln599_2_fu_265_p1;
    sc_signal< sc_lv<4> > sub_ln608_fu_369_p2;
    sc_signal< sc_lv<4> > zext_ln600_fu_299_p1;
    sc_signal< sc_lv<4> > sub_ln609_fu_380_p2;
    sc_signal< sc_lv<1> > trunc_ln601_fu_391_p1;
    sc_signal< sc_lv<3> > or_ln_fu_395_p3;
    sc_signal< sc_lv<8> > or_ln601_fu_406_p2;
    sc_signal< sc_lv<11> > tmp_29_fu_411_p3;
    sc_signal< sc_lv<3> > trunc_ln17_fu_423_p4;
    sc_signal< sc_lv<8> > or_ln602_fu_437_p2;
    sc_signal< sc_lv<11> > tmp_30_fu_442_p3;
    sc_signal< sc_lv<4> > zext_ln601_1_fu_402_p1;
    sc_signal< sc_lv<4> > sub_ln610_fu_496_p2;
    sc_signal< sc_lv<4> > zext_ln602_fu_433_p1;
    sc_signal< sc_lv<4> > sub_ln611_fu_507_p2;
    sc_signal< sc_lv<8> > or_ln603_fu_521_p2;
    sc_signal< sc_lv<11> > tmp_31_fu_526_p3;
    sc_signal< sc_lv<3> > or_ln1_fu_538_p3;
    sc_signal< sc_lv<8> > or_ln604_fu_548_p2;
    sc_signal< sc_lv<11> > tmp_32_fu_553_p3;
    sc_signal< sc_lv<4> > zext_ln603_fu_518_p1;
    sc_signal< sc_lv<4> > sub_ln612_fu_565_p2;
    sc_signal< sc_lv<4> > zext_ln604_1_fu_544_p1;
    sc_signal< sc_lv<4> > sub_ln613_fu_576_p2;
    sc_signal< sc_lv<8> > or_ln605_fu_590_p2;
    sc_signal< sc_lv<11> > tmp_33_fu_595_p3;
    sc_signal< sc_lv<8> > or_ln606_fu_610_p2;
    sc_signal< sc_lv<11> > tmp_35_fu_615_p3;
    sc_signal< sc_lv<4> > zext_ln605_fu_587_p1;
    sc_signal< sc_lv<4> > sub_ln614_fu_627_p2;
    sc_signal< sc_lv<4> > zext_ln606_fu_607_p1;
    sc_signal< sc_lv<4> > sub_ln615_fu_638_p2;
    sc_signal< sc_lv<6> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<6> ap_ST_fsm_state1;
    static const sc_lv<6> ap_ST_fsm_state2;
    static const sc_lv<6> ap_ST_fsm_state3;
    static const sc_lv<6> ap_ST_fsm_state4;
    static const sc_lv<6> ap_ST_fsm_state5;
    static const sc_lv<6> ap_ST_fsm_state6;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<6> ap_const_lv6_20;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<8> ap_const_lv8_1;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<8> ap_const_lv8_2;
    static const sc_lv<4> ap_const_lv4_2;
    static const sc_lv<8> ap_const_lv8_3;
    static const sc_lv<8> ap_const_lv8_4;
    static const sc_lv<8> ap_const_lv8_5;
    static const sc_lv<8> ap_const_lv8_6;
    static const sc_lv<8> ap_const_lv8_7;
    static const sc_lv<1> ap_const_lv1_1;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_a_address0();
    void thread_a_address1();
    void thread_a_ce0();
    void thread_a_ce1();
    void thread_add_ln599_fu_251_p2();
    void thread_add_ln601_1_fu_340_p2();
    void thread_add_ln601_fu_331_p2();
    void thread_add_ln604_1_fu_359_p2();
    void thread_add_ln604_fu_350_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_i_fu_219_p2();
    void thread_icmp_ln598_fu_213_p2();
    void thread_or_ln1_fu_538_p3();
    void thread_or_ln600_fu_303_p2();
    void thread_or_ln601_fu_406_p2();
    void thread_or_ln602_fu_437_p2();
    void thread_or_ln603_fu_521_p2();
    void thread_or_ln604_fu_548_p2();
    void thread_or_ln605_fu_590_p2();
    void thread_or_ln606_fu_610_p2();
    void thread_or_ln_fu_395_p3();
    void thread_r_coeffs_address0();
    void thread_r_coeffs_address1();
    void thread_r_coeffs_ce0();
    void thread_r_coeffs_ce1();
    void thread_r_coeffs_d0();
    void thread_r_coeffs_d1();
    void thread_r_coeffs_we0();
    void thread_r_coeffs_we1();
    void thread_sext_ln599_fu_247_p1();
    void thread_sext_ln601_fu_336_p1();
    void thread_sext_ln604_fu_355_p1();
    void thread_sext_ln608_fu_375_p1();
    void thread_sext_ln609_fu_386_p1();
    void thread_sext_ln610_fu_502_p1();
    void thread_sext_ln611_fu_513_p1();
    void thread_sext_ln612_fu_571_p1();
    void thread_sext_ln613_fu_582_p1();
    void thread_sext_ln614_fu_633_p1();
    void thread_sext_ln615_fu_644_p1();
    void thread_shl_ln599_1_fu_229_p3();
    void thread_shl_ln_fu_269_p3();
    void thread_sub_ln599_fu_241_p2();
    void thread_sub_ln608_fu_369_p2();
    void thread_sub_ln609_fu_380_p2();
    void thread_sub_ln610_fu_496_p2();
    void thread_sub_ln611_fu_507_p2();
    void thread_sub_ln612_fu_565_p2();
    void thread_sub_ln613_fu_576_p2();
    void thread_sub_ln614_fu_627_p2();
    void thread_sub_ln615_fu_638_p2();
    void thread_tmp_27_fu_309_p3();
    void thread_tmp_29_fu_411_p3();
    void thread_tmp_30_fu_442_p3();
    void thread_tmp_31_fu_526_p3();
    void thread_tmp_32_fu_553_p3();
    void thread_tmp_33_fu_595_p3();
    void thread_tmp_35_fu_615_p3();
    void thread_tmp_s_fu_276_p4();
    void thread_trunc_ln17_fu_423_p4();
    void thread_trunc_ln599_1_fu_225_p1();
    void thread_trunc_ln599_2_fu_261_p1();
    void thread_trunc_ln599_fu_205_p1();
    void thread_trunc_ln601_fu_391_p1();
    void thread_trunc_ln604_fu_472_p1();
    void thread_trunc_ln_fu_289_p4();
    void thread_zext_ln598_fu_209_p1();
    void thread_zext_ln599_1_fu_256_p1();
    void thread_zext_ln599_2_fu_265_p1();
    void thread_zext_ln599_3_fu_284_p1();
    void thread_zext_ln599_fu_237_p1();
    void thread_zext_ln600_1_fu_316_p1();
    void thread_zext_ln600_fu_299_p1();
    void thread_zext_ln601_1_fu_402_p1();
    void thread_zext_ln601_2_fu_418_p1();
    void thread_zext_ln601_fu_345_p1();
    void thread_zext_ln602_1_fu_449_p1();
    void thread_zext_ln602_fu_433_p1();
    void thread_zext_ln603_1_fu_533_p1();
    void thread_zext_ln603_fu_518_p1();
    void thread_zext_ln604_1_fu_544_p1();
    void thread_zext_ln604_2_fu_560_p1();
    void thread_zext_ln604_fu_364_p1();
    void thread_zext_ln605_1_fu_602_p1();
    void thread_zext_ln605_fu_587_p1();
    void thread_zext_ln606_1_fu_622_p1();
    void thread_zext_ln606_fu_607_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif