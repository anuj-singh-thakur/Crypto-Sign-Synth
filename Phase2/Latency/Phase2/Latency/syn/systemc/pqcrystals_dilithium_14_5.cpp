#include "pqcrystals_dilithium_14.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void pqcrystals_dilithium_14::thread_mul_ln181_50_fu_10305_p0() {
    mul_ln181_50_fu_10305_p0 =  (sc_lv<23>) (mul_ln181_50_fu_10305_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_50_fu_10305_p00() {
    mul_ln181_50_fu_10305_p00 = esl_zext<55,23>(reg_8011.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_50_fu_10305_p1() {
    mul_ln181_50_fu_10305_p1 = reg_8015.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_50_fu_10305_p2() {
    mul_ln181_50_fu_10305_p2 = (!mul_ln181_50_fu_10305_p0.read().is_01() || !mul_ln181_50_fu_10305_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_50_fu_10305_p0.read()) * sc_bigint<32>(mul_ln181_50_fu_10305_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_51_fu_10319_p0() {
    mul_ln181_51_fu_10319_p0 =  (sc_lv<23>) (mul_ln181_51_fu_10319_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_51_fu_10319_p00() {
    mul_ln181_51_fu_10319_p00 = esl_zext<55,23>(reg_8019.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_51_fu_10319_p1() {
    mul_ln181_51_fu_10319_p1 = reg_8023.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_51_fu_10319_p2() {
    mul_ln181_51_fu_10319_p2 = (!mul_ln181_51_fu_10319_p0.read().is_01() || !mul_ln181_51_fu_10319_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_51_fu_10319_p0.read()) * sc_bigint<32>(mul_ln181_51_fu_10319_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_52_fu_10389_p0() {
    mul_ln181_52_fu_10389_p0 =  (sc_lv<23>) (mul_ln181_52_fu_10389_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_52_fu_10389_p00() {
    mul_ln181_52_fu_10389_p00 = esl_zext<55,23>(reg_8011.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_52_fu_10389_p1() {
    mul_ln181_52_fu_10389_p1 = reg_8015.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_52_fu_10389_p2() {
    mul_ln181_52_fu_10389_p2 = (!mul_ln181_52_fu_10389_p0.read().is_01() || !mul_ln181_52_fu_10389_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_52_fu_10389_p0.read()) * sc_bigint<32>(mul_ln181_52_fu_10389_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_53_fu_10403_p0() {
    mul_ln181_53_fu_10403_p0 =  (sc_lv<23>) (mul_ln181_53_fu_10403_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_53_fu_10403_p00() {
    mul_ln181_53_fu_10403_p00 = esl_zext<55,23>(reg_8019.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_53_fu_10403_p1() {
    mul_ln181_53_fu_10403_p1 = reg_8023.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_53_fu_10403_p2() {
    mul_ln181_53_fu_10403_p2 = (!mul_ln181_53_fu_10403_p0.read().is_01() || !mul_ln181_53_fu_10403_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_53_fu_10403_p0.read()) * sc_bigint<32>(mul_ln181_53_fu_10403_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_54_fu_10473_p0() {
    mul_ln181_54_fu_10473_p0 =  (sc_lv<23>) (mul_ln181_54_fu_10473_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_54_fu_10473_p00() {
    mul_ln181_54_fu_10473_p00 = esl_zext<55,23>(reg_8011.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_54_fu_10473_p1() {
    mul_ln181_54_fu_10473_p1 = reg_8015.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_54_fu_10473_p2() {
    mul_ln181_54_fu_10473_p2 = (!mul_ln181_54_fu_10473_p0.read().is_01() || !mul_ln181_54_fu_10473_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_54_fu_10473_p0.read()) * sc_bigint<32>(mul_ln181_54_fu_10473_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_55_fu_10487_p0() {
    mul_ln181_55_fu_10487_p0 =  (sc_lv<23>) (mul_ln181_55_fu_10487_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_55_fu_10487_p00() {
    mul_ln181_55_fu_10487_p00 = esl_zext<55,23>(reg_8019.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_55_fu_10487_p1() {
    mul_ln181_55_fu_10487_p1 = reg_8023.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_55_fu_10487_p2() {
    mul_ln181_55_fu_10487_p2 = (!mul_ln181_55_fu_10487_p0.read().is_01() || !mul_ln181_55_fu_10487_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_55_fu_10487_p0.read()) * sc_bigint<32>(mul_ln181_55_fu_10487_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_56_fu_10557_p0() {
    mul_ln181_56_fu_10557_p0 =  (sc_lv<23>) (mul_ln181_56_fu_10557_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_56_fu_10557_p00() {
    mul_ln181_56_fu_10557_p00 = esl_zext<55,23>(reg_8011.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_56_fu_10557_p1() {
    mul_ln181_56_fu_10557_p1 = reg_8015.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_56_fu_10557_p2() {
    mul_ln181_56_fu_10557_p2 = (!mul_ln181_56_fu_10557_p0.read().is_01() || !mul_ln181_56_fu_10557_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_56_fu_10557_p0.read()) * sc_bigint<32>(mul_ln181_56_fu_10557_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_57_fu_10571_p0() {
    mul_ln181_57_fu_10571_p0 =  (sc_lv<23>) (mul_ln181_57_fu_10571_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_57_fu_10571_p00() {
    mul_ln181_57_fu_10571_p00 = esl_zext<55,23>(reg_8019.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_57_fu_10571_p1() {
    mul_ln181_57_fu_10571_p1 = reg_8023.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_57_fu_10571_p2() {
    mul_ln181_57_fu_10571_p2 = (!mul_ln181_57_fu_10571_p0.read().is_01() || !mul_ln181_57_fu_10571_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_57_fu_10571_p0.read()) * sc_bigint<32>(mul_ln181_57_fu_10571_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_58_fu_10641_p0() {
    mul_ln181_58_fu_10641_p0 =  (sc_lv<23>) (mul_ln181_58_fu_10641_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_58_fu_10641_p00() {
    mul_ln181_58_fu_10641_p00 = esl_zext<55,23>(reg_8011.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_58_fu_10641_p1() {
    mul_ln181_58_fu_10641_p1 = reg_8015.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_58_fu_10641_p2() {
    mul_ln181_58_fu_10641_p2 = (!mul_ln181_58_fu_10641_p0.read().is_01() || !mul_ln181_58_fu_10641_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_58_fu_10641_p0.read()) * sc_bigint<32>(mul_ln181_58_fu_10641_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_59_fu_10655_p0() {
    mul_ln181_59_fu_10655_p0 =  (sc_lv<23>) (mul_ln181_59_fu_10655_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_59_fu_10655_p00() {
    mul_ln181_59_fu_10655_p00 = esl_zext<55,23>(reg_8019.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_59_fu_10655_p1() {
    mul_ln181_59_fu_10655_p1 = reg_8023.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_59_fu_10655_p2() {
    mul_ln181_59_fu_10655_p2 = (!mul_ln181_59_fu_10655_p0.read().is_01() || !mul_ln181_59_fu_10655_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_59_fu_10655_p0.read()) * sc_bigint<32>(mul_ln181_59_fu_10655_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_5_fu_8387_p0() {
    mul_ln181_5_fu_8387_p0 =  (sc_lv<23>) (mul_ln181_5_fu_8387_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_5_fu_8387_p00() {
    mul_ln181_5_fu_8387_p00 = esl_zext<55,23>(reg_8019.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_5_fu_8387_p1() {
    mul_ln181_5_fu_8387_p1 = reg_8023.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_5_fu_8387_p2() {
    mul_ln181_5_fu_8387_p2 = (!mul_ln181_5_fu_8387_p0.read().is_01() || !mul_ln181_5_fu_8387_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_5_fu_8387_p0.read()) * sc_bigint<32>(mul_ln181_5_fu_8387_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_60_fu_10725_p0() {
    mul_ln181_60_fu_10725_p0 =  (sc_lv<23>) (mul_ln181_60_fu_10725_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_60_fu_10725_p00() {
    mul_ln181_60_fu_10725_p00 = esl_zext<55,23>(reg_8011.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_60_fu_10725_p1() {
    mul_ln181_60_fu_10725_p1 = reg_8015.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_60_fu_10725_p2() {
    mul_ln181_60_fu_10725_p2 = (!mul_ln181_60_fu_10725_p0.read().is_01() || !mul_ln181_60_fu_10725_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_60_fu_10725_p0.read()) * sc_bigint<32>(mul_ln181_60_fu_10725_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_61_fu_10739_p0() {
    mul_ln181_61_fu_10739_p0 =  (sc_lv<23>) (mul_ln181_61_fu_10739_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_61_fu_10739_p00() {
    mul_ln181_61_fu_10739_p00 = esl_zext<55,23>(reg_8019.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_61_fu_10739_p1() {
    mul_ln181_61_fu_10739_p1 = reg_8023.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_61_fu_10739_p2() {
    mul_ln181_61_fu_10739_p2 = (!mul_ln181_61_fu_10739_p0.read().is_01() || !mul_ln181_61_fu_10739_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_61_fu_10739_p0.read()) * sc_bigint<32>(mul_ln181_61_fu_10739_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_62_fu_10809_p0() {
    mul_ln181_62_fu_10809_p0 =  (sc_lv<23>) (mul_ln181_62_fu_10809_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_62_fu_10809_p00() {
    mul_ln181_62_fu_10809_p00 = esl_zext<55,23>(reg_8011.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_62_fu_10809_p1() {
    mul_ln181_62_fu_10809_p1 = reg_8015.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_62_fu_10809_p2() {
    mul_ln181_62_fu_10809_p2 = (!mul_ln181_62_fu_10809_p0.read().is_01() || !mul_ln181_62_fu_10809_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_62_fu_10809_p0.read()) * sc_bigint<32>(mul_ln181_62_fu_10809_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_63_fu_10823_p0() {
    mul_ln181_63_fu_10823_p0 =  (sc_lv<23>) (mul_ln181_63_fu_10823_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_63_fu_10823_p00() {
    mul_ln181_63_fu_10823_p00 = esl_zext<55,23>(reg_8019.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_63_fu_10823_p1() {
    mul_ln181_63_fu_10823_p1 = reg_8023.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_63_fu_10823_p2() {
    mul_ln181_63_fu_10823_p2 = (!mul_ln181_63_fu_10823_p0.read().is_01() || !mul_ln181_63_fu_10823_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_63_fu_10823_p0.read()) * sc_bigint<32>(mul_ln181_63_fu_10823_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_64_fu_10893_p0() {
    mul_ln181_64_fu_10893_p0 =  (sc_lv<23>) (mul_ln181_64_fu_10893_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_64_fu_10893_p00() {
    mul_ln181_64_fu_10893_p00 = esl_zext<55,23>(reg_8011.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_64_fu_10893_p1() {
    mul_ln181_64_fu_10893_p1 = reg_8015.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_64_fu_10893_p2() {
    mul_ln181_64_fu_10893_p2 = (!mul_ln181_64_fu_10893_p0.read().is_01() || !mul_ln181_64_fu_10893_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_64_fu_10893_p0.read()) * sc_bigint<32>(mul_ln181_64_fu_10893_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_65_fu_10907_p0() {
    mul_ln181_65_fu_10907_p0 =  (sc_lv<23>) (mul_ln181_65_fu_10907_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_65_fu_10907_p00() {
    mul_ln181_65_fu_10907_p00 = esl_zext<55,23>(reg_8019.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_65_fu_10907_p1() {
    mul_ln181_65_fu_10907_p1 = reg_8023.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_65_fu_10907_p2() {
    mul_ln181_65_fu_10907_p2 = (!mul_ln181_65_fu_10907_p0.read().is_01() || !mul_ln181_65_fu_10907_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_65_fu_10907_p0.read()) * sc_bigint<32>(mul_ln181_65_fu_10907_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_66_fu_10977_p0() {
    mul_ln181_66_fu_10977_p0 =  (sc_lv<23>) (mul_ln181_66_fu_10977_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_66_fu_10977_p00() {
    mul_ln181_66_fu_10977_p00 = esl_zext<55,23>(reg_8011.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_66_fu_10977_p1() {
    mul_ln181_66_fu_10977_p1 = reg_8015.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_66_fu_10977_p2() {
    mul_ln181_66_fu_10977_p2 = (!mul_ln181_66_fu_10977_p0.read().is_01() || !mul_ln181_66_fu_10977_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_66_fu_10977_p0.read()) * sc_bigint<32>(mul_ln181_66_fu_10977_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_67_fu_10991_p0() {
    mul_ln181_67_fu_10991_p0 =  (sc_lv<23>) (mul_ln181_67_fu_10991_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_67_fu_10991_p00() {
    mul_ln181_67_fu_10991_p00 = esl_zext<55,23>(reg_8019.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_67_fu_10991_p1() {
    mul_ln181_67_fu_10991_p1 = reg_8023.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_67_fu_10991_p2() {
    mul_ln181_67_fu_10991_p2 = (!mul_ln181_67_fu_10991_p0.read().is_01() || !mul_ln181_67_fu_10991_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_67_fu_10991_p0.read()) * sc_bigint<32>(mul_ln181_67_fu_10991_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_68_fu_11061_p0() {
    mul_ln181_68_fu_11061_p0 =  (sc_lv<23>) (mul_ln181_68_fu_11061_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_68_fu_11061_p00() {
    mul_ln181_68_fu_11061_p00 = esl_zext<55,23>(reg_8011.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_68_fu_11061_p1() {
    mul_ln181_68_fu_11061_p1 = reg_8015.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_68_fu_11061_p2() {
    mul_ln181_68_fu_11061_p2 = (!mul_ln181_68_fu_11061_p0.read().is_01() || !mul_ln181_68_fu_11061_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_68_fu_11061_p0.read()) * sc_bigint<32>(mul_ln181_68_fu_11061_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_69_fu_11075_p0() {
    mul_ln181_69_fu_11075_p0 =  (sc_lv<23>) (mul_ln181_69_fu_11075_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_69_fu_11075_p00() {
    mul_ln181_69_fu_11075_p00 = esl_zext<55,23>(reg_8019.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_69_fu_11075_p1() {
    mul_ln181_69_fu_11075_p1 = reg_8023.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_69_fu_11075_p2() {
    mul_ln181_69_fu_11075_p2 = (!mul_ln181_69_fu_11075_p0.read().is_01() || !mul_ln181_69_fu_11075_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_69_fu_11075_p0.read()) * sc_bigint<32>(mul_ln181_69_fu_11075_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_6_fu_8457_p0() {
    mul_ln181_6_fu_8457_p0 =  (sc_lv<23>) (mul_ln181_6_fu_8457_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_6_fu_8457_p00() {
    mul_ln181_6_fu_8457_p00 = esl_zext<55,23>(reg_8011.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_6_fu_8457_p1() {
    mul_ln181_6_fu_8457_p1 = reg_8015.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_6_fu_8457_p2() {
    mul_ln181_6_fu_8457_p2 = (!mul_ln181_6_fu_8457_p0.read().is_01() || !mul_ln181_6_fu_8457_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_6_fu_8457_p0.read()) * sc_bigint<32>(mul_ln181_6_fu_8457_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_70_fu_11145_p0() {
    mul_ln181_70_fu_11145_p0 =  (sc_lv<23>) (mul_ln181_70_fu_11145_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_70_fu_11145_p00() {
    mul_ln181_70_fu_11145_p00 = esl_zext<55,23>(reg_8011.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_70_fu_11145_p1() {
    mul_ln181_70_fu_11145_p1 = reg_8015.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_70_fu_11145_p2() {
    mul_ln181_70_fu_11145_p2 = (!mul_ln181_70_fu_11145_p0.read().is_01() || !mul_ln181_70_fu_11145_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_70_fu_11145_p0.read()) * sc_bigint<32>(mul_ln181_70_fu_11145_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_71_fu_11159_p0() {
    mul_ln181_71_fu_11159_p0 =  (sc_lv<23>) (mul_ln181_71_fu_11159_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_71_fu_11159_p00() {
    mul_ln181_71_fu_11159_p00 = esl_zext<55,23>(reg_8019.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_71_fu_11159_p1() {
    mul_ln181_71_fu_11159_p1 = reg_8023.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_71_fu_11159_p2() {
    mul_ln181_71_fu_11159_p2 = (!mul_ln181_71_fu_11159_p0.read().is_01() || !mul_ln181_71_fu_11159_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_71_fu_11159_p0.read()) * sc_bigint<32>(mul_ln181_71_fu_11159_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_72_fu_11229_p0() {
    mul_ln181_72_fu_11229_p0 =  (sc_lv<23>) (mul_ln181_72_fu_11229_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_72_fu_11229_p00() {
    mul_ln181_72_fu_11229_p00 = esl_zext<55,23>(reg_8011.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_72_fu_11229_p1() {
    mul_ln181_72_fu_11229_p1 = reg_8015.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_72_fu_11229_p2() {
    mul_ln181_72_fu_11229_p2 = (!mul_ln181_72_fu_11229_p0.read().is_01() || !mul_ln181_72_fu_11229_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_72_fu_11229_p0.read()) * sc_bigint<32>(mul_ln181_72_fu_11229_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_73_fu_11243_p0() {
    mul_ln181_73_fu_11243_p0 =  (sc_lv<23>) (mul_ln181_73_fu_11243_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_73_fu_11243_p00() {
    mul_ln181_73_fu_11243_p00 = esl_zext<55,23>(reg_8019.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_73_fu_11243_p1() {
    mul_ln181_73_fu_11243_p1 = reg_8023.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_73_fu_11243_p2() {
    mul_ln181_73_fu_11243_p2 = (!mul_ln181_73_fu_11243_p0.read().is_01() || !mul_ln181_73_fu_11243_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_73_fu_11243_p0.read()) * sc_bigint<32>(mul_ln181_73_fu_11243_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_74_fu_11313_p0() {
    mul_ln181_74_fu_11313_p0 =  (sc_lv<23>) (mul_ln181_74_fu_11313_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_74_fu_11313_p00() {
    mul_ln181_74_fu_11313_p00 = esl_zext<55,23>(reg_8011.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_74_fu_11313_p1() {
    mul_ln181_74_fu_11313_p1 = reg_8015.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_74_fu_11313_p2() {
    mul_ln181_74_fu_11313_p2 = (!mul_ln181_74_fu_11313_p0.read().is_01() || !mul_ln181_74_fu_11313_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_74_fu_11313_p0.read()) * sc_bigint<32>(mul_ln181_74_fu_11313_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_75_fu_11327_p0() {
    mul_ln181_75_fu_11327_p0 =  (sc_lv<23>) (mul_ln181_75_fu_11327_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_75_fu_11327_p00() {
    mul_ln181_75_fu_11327_p00 = esl_zext<55,23>(reg_8019.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_75_fu_11327_p1() {
    mul_ln181_75_fu_11327_p1 = reg_8023.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_75_fu_11327_p2() {
    mul_ln181_75_fu_11327_p2 = (!mul_ln181_75_fu_11327_p0.read().is_01() || !mul_ln181_75_fu_11327_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_75_fu_11327_p0.read()) * sc_bigint<32>(mul_ln181_75_fu_11327_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_76_fu_11397_p0() {
    mul_ln181_76_fu_11397_p0 =  (sc_lv<23>) (mul_ln181_76_fu_11397_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_76_fu_11397_p00() {
    mul_ln181_76_fu_11397_p00 = esl_zext<55,23>(reg_8011.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_76_fu_11397_p1() {
    mul_ln181_76_fu_11397_p1 = reg_8015.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_76_fu_11397_p2() {
    mul_ln181_76_fu_11397_p2 = (!mul_ln181_76_fu_11397_p0.read().is_01() || !mul_ln181_76_fu_11397_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_76_fu_11397_p0.read()) * sc_bigint<32>(mul_ln181_76_fu_11397_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_77_fu_11411_p0() {
    mul_ln181_77_fu_11411_p0 =  (sc_lv<23>) (mul_ln181_77_fu_11411_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_77_fu_11411_p00() {
    mul_ln181_77_fu_11411_p00 = esl_zext<55,23>(reg_8019.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_77_fu_11411_p1() {
    mul_ln181_77_fu_11411_p1 = reg_8023.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_77_fu_11411_p2() {
    mul_ln181_77_fu_11411_p2 = (!mul_ln181_77_fu_11411_p0.read().is_01() || !mul_ln181_77_fu_11411_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_77_fu_11411_p0.read()) * sc_bigint<32>(mul_ln181_77_fu_11411_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_78_fu_11481_p0() {
    mul_ln181_78_fu_11481_p0 =  (sc_lv<23>) (mul_ln181_78_fu_11481_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_78_fu_11481_p00() {
    mul_ln181_78_fu_11481_p00 = esl_zext<55,23>(reg_8011.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_78_fu_11481_p1() {
    mul_ln181_78_fu_11481_p1 = reg_8015.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_78_fu_11481_p2() {
    mul_ln181_78_fu_11481_p2 = (!mul_ln181_78_fu_11481_p0.read().is_01() || !mul_ln181_78_fu_11481_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_78_fu_11481_p0.read()) * sc_bigint<32>(mul_ln181_78_fu_11481_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_79_fu_11495_p0() {
    mul_ln181_79_fu_11495_p0 =  (sc_lv<23>) (mul_ln181_79_fu_11495_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_79_fu_11495_p00() {
    mul_ln181_79_fu_11495_p00 = esl_zext<55,23>(reg_8019.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_79_fu_11495_p1() {
    mul_ln181_79_fu_11495_p1 = reg_8023.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_79_fu_11495_p2() {
    mul_ln181_79_fu_11495_p2 = (!mul_ln181_79_fu_11495_p0.read().is_01() || !mul_ln181_79_fu_11495_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_79_fu_11495_p0.read()) * sc_bigint<32>(mul_ln181_79_fu_11495_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_7_fu_8471_p0() {
    mul_ln181_7_fu_8471_p0 =  (sc_lv<23>) (mul_ln181_7_fu_8471_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_7_fu_8471_p00() {
    mul_ln181_7_fu_8471_p00 = esl_zext<55,23>(reg_8019.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_7_fu_8471_p1() {
    mul_ln181_7_fu_8471_p1 = reg_8023.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_7_fu_8471_p2() {
    mul_ln181_7_fu_8471_p2 = (!mul_ln181_7_fu_8471_p0.read().is_01() || !mul_ln181_7_fu_8471_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_7_fu_8471_p0.read()) * sc_bigint<32>(mul_ln181_7_fu_8471_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_80_fu_11565_p0() {
    mul_ln181_80_fu_11565_p0 =  (sc_lv<23>) (mul_ln181_80_fu_11565_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_80_fu_11565_p00() {
    mul_ln181_80_fu_11565_p00 = esl_zext<55,23>(reg_8011.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_80_fu_11565_p1() {
    mul_ln181_80_fu_11565_p1 = reg_8015.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_80_fu_11565_p2() {
    mul_ln181_80_fu_11565_p2 = (!mul_ln181_80_fu_11565_p0.read().is_01() || !mul_ln181_80_fu_11565_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_80_fu_11565_p0.read()) * sc_bigint<32>(mul_ln181_80_fu_11565_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_81_fu_11579_p0() {
    mul_ln181_81_fu_11579_p0 =  (sc_lv<23>) (mul_ln181_81_fu_11579_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_81_fu_11579_p00() {
    mul_ln181_81_fu_11579_p00 = esl_zext<55,23>(reg_8019.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_81_fu_11579_p1() {
    mul_ln181_81_fu_11579_p1 = reg_8023.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_81_fu_11579_p2() {
    mul_ln181_81_fu_11579_p2 = (!mul_ln181_81_fu_11579_p0.read().is_01() || !mul_ln181_81_fu_11579_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_81_fu_11579_p0.read()) * sc_bigint<32>(mul_ln181_81_fu_11579_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_82_fu_11649_p0() {
    mul_ln181_82_fu_11649_p0 =  (sc_lv<23>) (mul_ln181_82_fu_11649_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_82_fu_11649_p00() {
    mul_ln181_82_fu_11649_p00 = esl_zext<55,23>(reg_8011.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_82_fu_11649_p1() {
    mul_ln181_82_fu_11649_p1 = reg_8015.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_82_fu_11649_p2() {
    mul_ln181_82_fu_11649_p2 = (!mul_ln181_82_fu_11649_p0.read().is_01() || !mul_ln181_82_fu_11649_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_82_fu_11649_p0.read()) * sc_bigint<32>(mul_ln181_82_fu_11649_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_83_fu_11663_p0() {
    mul_ln181_83_fu_11663_p0 =  (sc_lv<23>) (mul_ln181_83_fu_11663_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_83_fu_11663_p00() {
    mul_ln181_83_fu_11663_p00 = esl_zext<55,23>(reg_8019.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_83_fu_11663_p1() {
    mul_ln181_83_fu_11663_p1 = reg_8023.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_83_fu_11663_p2() {
    mul_ln181_83_fu_11663_p2 = (!mul_ln181_83_fu_11663_p0.read().is_01() || !mul_ln181_83_fu_11663_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_83_fu_11663_p0.read()) * sc_bigint<32>(mul_ln181_83_fu_11663_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_84_fu_11733_p0() {
    mul_ln181_84_fu_11733_p0 =  (sc_lv<23>) (mul_ln181_84_fu_11733_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_84_fu_11733_p00() {
    mul_ln181_84_fu_11733_p00 = esl_zext<55,23>(reg_8011.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_84_fu_11733_p1() {
    mul_ln181_84_fu_11733_p1 = reg_8015.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_84_fu_11733_p2() {
    mul_ln181_84_fu_11733_p2 = (!mul_ln181_84_fu_11733_p0.read().is_01() || !mul_ln181_84_fu_11733_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_84_fu_11733_p0.read()) * sc_bigint<32>(mul_ln181_84_fu_11733_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_85_fu_11747_p0() {
    mul_ln181_85_fu_11747_p0 =  (sc_lv<23>) (mul_ln181_85_fu_11747_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_85_fu_11747_p00() {
    mul_ln181_85_fu_11747_p00 = esl_zext<55,23>(reg_8019.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_85_fu_11747_p1() {
    mul_ln181_85_fu_11747_p1 = reg_8023.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_85_fu_11747_p2() {
    mul_ln181_85_fu_11747_p2 = (!mul_ln181_85_fu_11747_p0.read().is_01() || !mul_ln181_85_fu_11747_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_85_fu_11747_p0.read()) * sc_bigint<32>(mul_ln181_85_fu_11747_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_86_fu_11817_p0() {
    mul_ln181_86_fu_11817_p0 =  (sc_lv<23>) (mul_ln181_86_fu_11817_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_86_fu_11817_p00() {
    mul_ln181_86_fu_11817_p00 = esl_zext<55,23>(reg_8011.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_86_fu_11817_p1() {
    mul_ln181_86_fu_11817_p1 = reg_8015.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_86_fu_11817_p2() {
    mul_ln181_86_fu_11817_p2 = (!mul_ln181_86_fu_11817_p0.read().is_01() || !mul_ln181_86_fu_11817_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_86_fu_11817_p0.read()) * sc_bigint<32>(mul_ln181_86_fu_11817_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_87_fu_11831_p0() {
    mul_ln181_87_fu_11831_p0 =  (sc_lv<23>) (mul_ln181_87_fu_11831_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_87_fu_11831_p00() {
    mul_ln181_87_fu_11831_p00 = esl_zext<55,23>(reg_8019.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_87_fu_11831_p1() {
    mul_ln181_87_fu_11831_p1 = reg_8023.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_87_fu_11831_p2() {
    mul_ln181_87_fu_11831_p2 = (!mul_ln181_87_fu_11831_p0.read().is_01() || !mul_ln181_87_fu_11831_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_87_fu_11831_p0.read()) * sc_bigint<32>(mul_ln181_87_fu_11831_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_88_fu_11901_p0() {
    mul_ln181_88_fu_11901_p0 =  (sc_lv<23>) (mul_ln181_88_fu_11901_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_88_fu_11901_p00() {
    mul_ln181_88_fu_11901_p00 = esl_zext<55,23>(reg_8011.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_88_fu_11901_p1() {
    mul_ln181_88_fu_11901_p1 = reg_8015.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_88_fu_11901_p2() {
    mul_ln181_88_fu_11901_p2 = (!mul_ln181_88_fu_11901_p0.read().is_01() || !mul_ln181_88_fu_11901_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_88_fu_11901_p0.read()) * sc_bigint<32>(mul_ln181_88_fu_11901_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_89_fu_11915_p0() {
    mul_ln181_89_fu_11915_p0 =  (sc_lv<23>) (mul_ln181_89_fu_11915_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_89_fu_11915_p00() {
    mul_ln181_89_fu_11915_p00 = esl_zext<55,23>(reg_8019.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_89_fu_11915_p1() {
    mul_ln181_89_fu_11915_p1 = reg_8023.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_89_fu_11915_p2() {
    mul_ln181_89_fu_11915_p2 = (!mul_ln181_89_fu_11915_p0.read().is_01() || !mul_ln181_89_fu_11915_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_89_fu_11915_p0.read()) * sc_bigint<32>(mul_ln181_89_fu_11915_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_8_fu_8541_p0() {
    mul_ln181_8_fu_8541_p0 =  (sc_lv<23>) (mul_ln181_8_fu_8541_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_8_fu_8541_p00() {
    mul_ln181_8_fu_8541_p00 = esl_zext<55,23>(reg_8011.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_8_fu_8541_p1() {
    mul_ln181_8_fu_8541_p1 = reg_8015.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_8_fu_8541_p2() {
    mul_ln181_8_fu_8541_p2 = (!mul_ln181_8_fu_8541_p0.read().is_01() || !mul_ln181_8_fu_8541_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_8_fu_8541_p0.read()) * sc_bigint<32>(mul_ln181_8_fu_8541_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_90_fu_11985_p0() {
    mul_ln181_90_fu_11985_p0 =  (sc_lv<23>) (mul_ln181_90_fu_11985_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_90_fu_11985_p00() {
    mul_ln181_90_fu_11985_p00 = esl_zext<55,23>(reg_8011.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_90_fu_11985_p1() {
    mul_ln181_90_fu_11985_p1 = reg_8015.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_90_fu_11985_p2() {
    mul_ln181_90_fu_11985_p2 = (!mul_ln181_90_fu_11985_p0.read().is_01() || !mul_ln181_90_fu_11985_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_90_fu_11985_p0.read()) * sc_bigint<32>(mul_ln181_90_fu_11985_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_91_fu_11999_p0() {
    mul_ln181_91_fu_11999_p0 =  (sc_lv<23>) (mul_ln181_91_fu_11999_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_91_fu_11999_p00() {
    mul_ln181_91_fu_11999_p00 = esl_zext<55,23>(reg_8019.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_91_fu_11999_p1() {
    mul_ln181_91_fu_11999_p1 = reg_8023.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_91_fu_11999_p2() {
    mul_ln181_91_fu_11999_p2 = (!mul_ln181_91_fu_11999_p0.read().is_01() || !mul_ln181_91_fu_11999_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_91_fu_11999_p0.read()) * sc_bigint<32>(mul_ln181_91_fu_11999_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_92_fu_12069_p0() {
    mul_ln181_92_fu_12069_p0 =  (sc_lv<23>) (mul_ln181_92_fu_12069_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_92_fu_12069_p00() {
    mul_ln181_92_fu_12069_p00 = esl_zext<55,23>(reg_8011.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_92_fu_12069_p1() {
    mul_ln181_92_fu_12069_p1 = reg_8015.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_92_fu_12069_p2() {
    mul_ln181_92_fu_12069_p2 = (!mul_ln181_92_fu_12069_p0.read().is_01() || !mul_ln181_92_fu_12069_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_92_fu_12069_p0.read()) * sc_bigint<32>(mul_ln181_92_fu_12069_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_93_fu_12083_p0() {
    mul_ln181_93_fu_12083_p0 =  (sc_lv<23>) (mul_ln181_93_fu_12083_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_93_fu_12083_p00() {
    mul_ln181_93_fu_12083_p00 = esl_zext<55,23>(reg_8019.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_93_fu_12083_p1() {
    mul_ln181_93_fu_12083_p1 = reg_8023.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_93_fu_12083_p2() {
    mul_ln181_93_fu_12083_p2 = (!mul_ln181_93_fu_12083_p0.read().is_01() || !mul_ln181_93_fu_12083_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_93_fu_12083_p0.read()) * sc_bigint<32>(mul_ln181_93_fu_12083_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_94_fu_12153_p0() {
    mul_ln181_94_fu_12153_p0 =  (sc_lv<23>) (mul_ln181_94_fu_12153_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_94_fu_12153_p00() {
    mul_ln181_94_fu_12153_p00 = esl_zext<55,23>(reg_8011.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_94_fu_12153_p1() {
    mul_ln181_94_fu_12153_p1 = reg_8015.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_94_fu_12153_p2() {
    mul_ln181_94_fu_12153_p2 = (!mul_ln181_94_fu_12153_p0.read().is_01() || !mul_ln181_94_fu_12153_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_94_fu_12153_p0.read()) * sc_bigint<32>(mul_ln181_94_fu_12153_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_95_fu_12167_p0() {
    mul_ln181_95_fu_12167_p0 =  (sc_lv<23>) (mul_ln181_95_fu_12167_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_95_fu_12167_p00() {
    mul_ln181_95_fu_12167_p00 = esl_zext<55,23>(reg_8019.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_95_fu_12167_p1() {
    mul_ln181_95_fu_12167_p1 = reg_8023.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_95_fu_12167_p2() {
    mul_ln181_95_fu_12167_p2 = (!mul_ln181_95_fu_12167_p0.read().is_01() || !mul_ln181_95_fu_12167_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_95_fu_12167_p0.read()) * sc_bigint<32>(mul_ln181_95_fu_12167_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_96_fu_12237_p0() {
    mul_ln181_96_fu_12237_p0 =  (sc_lv<23>) (mul_ln181_96_fu_12237_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_96_fu_12237_p00() {
    mul_ln181_96_fu_12237_p00 = esl_zext<55,23>(reg_8011.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_96_fu_12237_p1() {
    mul_ln181_96_fu_12237_p1 = reg_8015.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_96_fu_12237_p2() {
    mul_ln181_96_fu_12237_p2 = (!mul_ln181_96_fu_12237_p0.read().is_01() || !mul_ln181_96_fu_12237_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_96_fu_12237_p0.read()) * sc_bigint<32>(mul_ln181_96_fu_12237_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_97_fu_12251_p0() {
    mul_ln181_97_fu_12251_p0 =  (sc_lv<23>) (mul_ln181_97_fu_12251_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_97_fu_12251_p00() {
    mul_ln181_97_fu_12251_p00 = esl_zext<55,23>(reg_8019.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_97_fu_12251_p1() {
    mul_ln181_97_fu_12251_p1 = reg_8023.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_97_fu_12251_p2() {
    mul_ln181_97_fu_12251_p2 = (!mul_ln181_97_fu_12251_p0.read().is_01() || !mul_ln181_97_fu_12251_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_97_fu_12251_p0.read()) * sc_bigint<32>(mul_ln181_97_fu_12251_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_98_fu_12321_p0() {
    mul_ln181_98_fu_12321_p0 =  (sc_lv<23>) (mul_ln181_98_fu_12321_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_98_fu_12321_p00() {
    mul_ln181_98_fu_12321_p00 = esl_zext<55,23>(reg_8011.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_98_fu_12321_p1() {
    mul_ln181_98_fu_12321_p1 = reg_8015.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_98_fu_12321_p2() {
    mul_ln181_98_fu_12321_p2 = (!mul_ln181_98_fu_12321_p0.read().is_01() || !mul_ln181_98_fu_12321_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_98_fu_12321_p0.read()) * sc_bigint<32>(mul_ln181_98_fu_12321_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_99_fu_12335_p0() {
    mul_ln181_99_fu_12335_p0 =  (sc_lv<23>) (mul_ln181_99_fu_12335_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_99_fu_12335_p00() {
    mul_ln181_99_fu_12335_p00 = esl_zext<55,23>(reg_8019.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_99_fu_12335_p1() {
    mul_ln181_99_fu_12335_p1 = reg_8023.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_99_fu_12335_p2() {
    mul_ln181_99_fu_12335_p2 = (!mul_ln181_99_fu_12335_p0.read().is_01() || !mul_ln181_99_fu_12335_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_99_fu_12335_p0.read()) * sc_bigint<32>(mul_ln181_99_fu_12335_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_9_fu_8555_p0() {
    mul_ln181_9_fu_8555_p0 =  (sc_lv<23>) (mul_ln181_9_fu_8555_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_9_fu_8555_p00() {
    mul_ln181_9_fu_8555_p00 = esl_zext<55,23>(reg_8019.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_9_fu_8555_p1() {
    mul_ln181_9_fu_8555_p1 = reg_8023.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_9_fu_8555_p2() {
    mul_ln181_9_fu_8555_p2 = (!mul_ln181_9_fu_8555_p0.read().is_01() || !mul_ln181_9_fu_8555_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_9_fu_8555_p0.read()) * sc_bigint<32>(mul_ln181_9_fu_8555_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_fu_8205_p0() {
    mul_ln181_fu_8205_p0 =  (sc_lv<23>) (mul_ln181_fu_8205_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_fu_8205_p00() {
    mul_ln181_fu_8205_p00 = esl_zext<55,23>(reg_8011.read());
}

void pqcrystals_dilithium_14::thread_mul_ln181_fu_8205_p1() {
    mul_ln181_fu_8205_p1 = reg_8015.read();
}

void pqcrystals_dilithium_14::thread_mul_ln181_fu_8205_p2() {
    mul_ln181_fu_8205_p2 = (!mul_ln181_fu_8205_p0.read().is_01() || !mul_ln181_fu_8205_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln181_fu_8205_p0.read()) * sc_bigint<32>(mul_ln181_fu_8205_p1.read());
}

void pqcrystals_dilithium_14::thread_or_ln181_100_fu_12187_p2() {
    or_ln181_100_fu_12187_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_65);
}

void pqcrystals_dilithium_14::thread_or_ln181_101_fu_12257_p2() {
    or_ln181_101_fu_12257_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_66);
}

void pqcrystals_dilithium_14::thread_or_ln181_102_fu_12271_p2() {
    or_ln181_102_fu_12271_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_67);
}

void pqcrystals_dilithium_14::thread_or_ln181_103_fu_12341_p2() {
    or_ln181_103_fu_12341_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_68);
}

void pqcrystals_dilithium_14::thread_or_ln181_104_fu_12355_p2() {
    or_ln181_104_fu_12355_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_69);
}

void pqcrystals_dilithium_14::thread_or_ln181_105_fu_12425_p2() {
    or_ln181_105_fu_12425_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_6A);
}

void pqcrystals_dilithium_14::thread_or_ln181_106_fu_12439_p2() {
    or_ln181_106_fu_12439_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_6B);
}

void pqcrystals_dilithium_14::thread_or_ln181_107_fu_12509_p2() {
    or_ln181_107_fu_12509_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_6C);
}

void pqcrystals_dilithium_14::thread_or_ln181_108_fu_12523_p2() {
    or_ln181_108_fu_12523_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_6D);
}

void pqcrystals_dilithium_14::thread_or_ln181_109_fu_12593_p2() {
    or_ln181_109_fu_12593_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_6E);
}

void pqcrystals_dilithium_14::thread_or_ln181_10_fu_8407_p2() {
    or_ln181_10_fu_8407_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_B);
}

void pqcrystals_dilithium_14::thread_or_ln181_110_fu_12607_p2() {
    or_ln181_110_fu_12607_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_6F);
}

void pqcrystals_dilithium_14::thread_or_ln181_111_fu_12677_p2() {
    or_ln181_111_fu_12677_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_70);
}

void pqcrystals_dilithium_14::thread_or_ln181_112_fu_12691_p2() {
    or_ln181_112_fu_12691_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_71);
}

void pqcrystals_dilithium_14::thread_or_ln181_113_fu_12761_p2() {
    or_ln181_113_fu_12761_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_72);
}

void pqcrystals_dilithium_14::thread_or_ln181_114_fu_12775_p2() {
    or_ln181_114_fu_12775_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_73);
}

void pqcrystals_dilithium_14::thread_or_ln181_115_fu_12845_p2() {
    or_ln181_115_fu_12845_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_74);
}

void pqcrystals_dilithium_14::thread_or_ln181_116_fu_12859_p2() {
    or_ln181_116_fu_12859_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_75);
}

void pqcrystals_dilithium_14::thread_or_ln181_117_fu_12929_p2() {
    or_ln181_117_fu_12929_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_76);
}

void pqcrystals_dilithium_14::thread_or_ln181_118_fu_12943_p2() {
    or_ln181_118_fu_12943_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_77);
}

void pqcrystals_dilithium_14::thread_or_ln181_119_fu_13013_p2() {
    or_ln181_119_fu_13013_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_78);
}

void pqcrystals_dilithium_14::thread_or_ln181_11_fu_8477_p2() {
    or_ln181_11_fu_8477_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_C);
}

void pqcrystals_dilithium_14::thread_or_ln181_120_fu_13027_p2() {
    or_ln181_120_fu_13027_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_79);
}

void pqcrystals_dilithium_14::thread_or_ln181_121_fu_13097_p2() {
    or_ln181_121_fu_13097_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_7A);
}

void pqcrystals_dilithium_14::thread_or_ln181_122_fu_13111_p2() {
    or_ln181_122_fu_13111_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_7B);
}

void pqcrystals_dilithium_14::thread_or_ln181_123_fu_13181_p2() {
    or_ln181_123_fu_13181_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_7C);
}

void pqcrystals_dilithium_14::thread_or_ln181_124_fu_13195_p2() {
    or_ln181_124_fu_13195_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_7D);
}

void pqcrystals_dilithium_14::thread_or_ln181_125_fu_13265_p2() {
    or_ln181_125_fu_13265_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_7E);
}

void pqcrystals_dilithium_14::thread_or_ln181_126_fu_13279_p2() {
    or_ln181_126_fu_13279_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_7F);
}

void pqcrystals_dilithium_14::thread_or_ln181_127_fu_13349_p2() {
    or_ln181_127_fu_13349_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_80);
}

void pqcrystals_dilithium_14::thread_or_ln181_128_fu_13363_p2() {
    or_ln181_128_fu_13363_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_81);
}

void pqcrystals_dilithium_14::thread_or_ln181_129_fu_13433_p2() {
    or_ln181_129_fu_13433_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_82);
}

void pqcrystals_dilithium_14::thread_or_ln181_12_fu_8491_p2() {
    or_ln181_12_fu_8491_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_D);
}

void pqcrystals_dilithium_14::thread_or_ln181_130_fu_13447_p2() {
    or_ln181_130_fu_13447_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_83);
}

void pqcrystals_dilithium_14::thread_or_ln181_131_fu_13517_p2() {
    or_ln181_131_fu_13517_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_84);
}

void pqcrystals_dilithium_14::thread_or_ln181_132_fu_13531_p2() {
    or_ln181_132_fu_13531_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_85);
}

void pqcrystals_dilithium_14::thread_or_ln181_133_fu_13601_p2() {
    or_ln181_133_fu_13601_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_86);
}

void pqcrystals_dilithium_14::thread_or_ln181_134_fu_13615_p2() {
    or_ln181_134_fu_13615_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_87);
}

void pqcrystals_dilithium_14::thread_or_ln181_135_fu_13685_p2() {
    or_ln181_135_fu_13685_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_88);
}

void pqcrystals_dilithium_14::thread_or_ln181_136_fu_13699_p2() {
    or_ln181_136_fu_13699_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_89);
}

void pqcrystals_dilithium_14::thread_or_ln181_137_fu_13769_p2() {
    or_ln181_137_fu_13769_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_8A);
}

void pqcrystals_dilithium_14::thread_or_ln181_138_fu_13783_p2() {
    or_ln181_138_fu_13783_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_8B);
}

void pqcrystals_dilithium_14::thread_or_ln181_139_fu_13853_p2() {
    or_ln181_139_fu_13853_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_8C);
}

void pqcrystals_dilithium_14::thread_or_ln181_13_fu_8561_p2() {
    or_ln181_13_fu_8561_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_E);
}

void pqcrystals_dilithium_14::thread_or_ln181_140_fu_13867_p2() {
    or_ln181_140_fu_13867_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_8D);
}

void pqcrystals_dilithium_14::thread_or_ln181_141_fu_13937_p2() {
    or_ln181_141_fu_13937_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_8E);
}

void pqcrystals_dilithium_14::thread_or_ln181_142_fu_13951_p2() {
    or_ln181_142_fu_13951_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_8F);
}

void pqcrystals_dilithium_14::thread_or_ln181_143_fu_14021_p2() {
    or_ln181_143_fu_14021_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_90);
}

void pqcrystals_dilithium_14::thread_or_ln181_144_fu_14035_p2() {
    or_ln181_144_fu_14035_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_91);
}

void pqcrystals_dilithium_14::thread_or_ln181_145_fu_14105_p2() {
    or_ln181_145_fu_14105_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_92);
}

void pqcrystals_dilithium_14::thread_or_ln181_146_fu_14119_p2() {
    or_ln181_146_fu_14119_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_93);
}

void pqcrystals_dilithium_14::thread_or_ln181_147_fu_14189_p2() {
    or_ln181_147_fu_14189_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_94);
}

void pqcrystals_dilithium_14::thread_or_ln181_148_fu_14203_p2() {
    or_ln181_148_fu_14203_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_95);
}

void pqcrystals_dilithium_14::thread_or_ln181_149_fu_14273_p2() {
    or_ln181_149_fu_14273_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_96);
}

void pqcrystals_dilithium_14::thread_or_ln181_14_fu_8575_p2() {
    or_ln181_14_fu_8575_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_F);
}

void pqcrystals_dilithium_14::thread_or_ln181_150_fu_14287_p2() {
    or_ln181_150_fu_14287_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_97);
}

void pqcrystals_dilithium_14::thread_or_ln181_151_fu_14357_p2() {
    or_ln181_151_fu_14357_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_98);
}

void pqcrystals_dilithium_14::thread_or_ln181_152_fu_14371_p2() {
    or_ln181_152_fu_14371_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_99);
}

void pqcrystals_dilithium_14::thread_or_ln181_153_fu_14441_p2() {
    or_ln181_153_fu_14441_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_9A);
}

void pqcrystals_dilithium_14::thread_or_ln181_154_fu_14455_p2() {
    or_ln181_154_fu_14455_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_9B);
}

void pqcrystals_dilithium_14::thread_or_ln181_155_fu_14525_p2() {
    or_ln181_155_fu_14525_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_9C);
}

void pqcrystals_dilithium_14::thread_or_ln181_156_fu_14539_p2() {
    or_ln181_156_fu_14539_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_9D);
}

void pqcrystals_dilithium_14::thread_or_ln181_157_fu_14609_p2() {
    or_ln181_157_fu_14609_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_9E);
}

void pqcrystals_dilithium_14::thread_or_ln181_158_fu_14623_p2() {
    or_ln181_158_fu_14623_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_9F);
}

void pqcrystals_dilithium_14::thread_or_ln181_159_fu_14693_p2() {
    or_ln181_159_fu_14693_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_A0);
}

void pqcrystals_dilithium_14::thread_or_ln181_15_fu_8645_p2() {
    or_ln181_15_fu_8645_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_10);
}

void pqcrystals_dilithium_14::thread_or_ln181_160_fu_14707_p2() {
    or_ln181_160_fu_14707_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_A1);
}

void pqcrystals_dilithium_14::thread_or_ln181_161_fu_14777_p2() {
    or_ln181_161_fu_14777_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_A2);
}

void pqcrystals_dilithium_14::thread_or_ln181_162_fu_14791_p2() {
    or_ln181_162_fu_14791_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_A3);
}

void pqcrystals_dilithium_14::thread_or_ln181_163_fu_14861_p2() {
    or_ln181_163_fu_14861_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_A4);
}

void pqcrystals_dilithium_14::thread_or_ln181_164_fu_14875_p2() {
    or_ln181_164_fu_14875_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_A5);
}

void pqcrystals_dilithium_14::thread_or_ln181_165_fu_14945_p2() {
    or_ln181_165_fu_14945_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_A6);
}

void pqcrystals_dilithium_14::thread_or_ln181_166_fu_14959_p2() {
    or_ln181_166_fu_14959_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_A7);
}

void pqcrystals_dilithium_14::thread_or_ln181_167_fu_15029_p2() {
    or_ln181_167_fu_15029_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_A8);
}

void pqcrystals_dilithium_14::thread_or_ln181_168_fu_15043_p2() {
    or_ln181_168_fu_15043_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_A9);
}

void pqcrystals_dilithium_14::thread_or_ln181_169_fu_15113_p2() {
    or_ln181_169_fu_15113_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_AA);
}

void pqcrystals_dilithium_14::thread_or_ln181_16_fu_8659_p2() {
    or_ln181_16_fu_8659_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_11);
}

void pqcrystals_dilithium_14::thread_or_ln181_170_fu_15127_p2() {
    or_ln181_170_fu_15127_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_AB);
}

void pqcrystals_dilithium_14::thread_or_ln181_171_fu_15197_p2() {
    or_ln181_171_fu_15197_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_AC);
}

void pqcrystals_dilithium_14::thread_or_ln181_172_fu_15211_p2() {
    or_ln181_172_fu_15211_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_AD);
}

void pqcrystals_dilithium_14::thread_or_ln181_173_fu_15281_p2() {
    or_ln181_173_fu_15281_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_AE);
}

void pqcrystals_dilithium_14::thread_or_ln181_174_fu_15295_p2() {
    or_ln181_174_fu_15295_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_AF);
}

void pqcrystals_dilithium_14::thread_or_ln181_175_fu_15365_p2() {
    or_ln181_175_fu_15365_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_B0);
}

void pqcrystals_dilithium_14::thread_or_ln181_176_fu_15379_p2() {
    or_ln181_176_fu_15379_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_B1);
}

void pqcrystals_dilithium_14::thread_or_ln181_177_fu_15449_p2() {
    or_ln181_177_fu_15449_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_B2);
}

void pqcrystals_dilithium_14::thread_or_ln181_178_fu_15463_p2() {
    or_ln181_178_fu_15463_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_B3);
}

void pqcrystals_dilithium_14::thread_or_ln181_179_fu_15533_p2() {
    or_ln181_179_fu_15533_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_B4);
}

void pqcrystals_dilithium_14::thread_or_ln181_17_fu_8729_p2() {
    or_ln181_17_fu_8729_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_12);
}

void pqcrystals_dilithium_14::thread_or_ln181_180_fu_15547_p2() {
    or_ln181_180_fu_15547_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_B5);
}

void pqcrystals_dilithium_14::thread_or_ln181_181_fu_15617_p2() {
    or_ln181_181_fu_15617_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_B6);
}

void pqcrystals_dilithium_14::thread_or_ln181_182_fu_15631_p2() {
    or_ln181_182_fu_15631_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_B7);
}

void pqcrystals_dilithium_14::thread_or_ln181_183_fu_15701_p2() {
    or_ln181_183_fu_15701_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_B8);
}

void pqcrystals_dilithium_14::thread_or_ln181_184_fu_15715_p2() {
    or_ln181_184_fu_15715_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_B9);
}

void pqcrystals_dilithium_14::thread_or_ln181_185_fu_15785_p2() {
    or_ln181_185_fu_15785_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_BA);
}

void pqcrystals_dilithium_14::thread_or_ln181_186_fu_15799_p2() {
    or_ln181_186_fu_15799_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_BB);
}

void pqcrystals_dilithium_14::thread_or_ln181_187_fu_15869_p2() {
    or_ln181_187_fu_15869_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_BC);
}

void pqcrystals_dilithium_14::thread_or_ln181_188_fu_15883_p2() {
    or_ln181_188_fu_15883_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_BD);
}

void pqcrystals_dilithium_14::thread_or_ln181_189_fu_15953_p2() {
    or_ln181_189_fu_15953_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_BE);
}

void pqcrystals_dilithium_14::thread_or_ln181_18_fu_8743_p2() {
    or_ln181_18_fu_8743_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_13);
}

void pqcrystals_dilithium_14::thread_or_ln181_190_fu_15967_p2() {
    or_ln181_190_fu_15967_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_BF);
}

void pqcrystals_dilithium_14::thread_or_ln181_191_fu_16037_p2() {
    or_ln181_191_fu_16037_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_C0);
}

void pqcrystals_dilithium_14::thread_or_ln181_192_fu_16051_p2() {
    or_ln181_192_fu_16051_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_C1);
}

void pqcrystals_dilithium_14::thread_or_ln181_193_fu_16121_p2() {
    or_ln181_193_fu_16121_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_C2);
}

void pqcrystals_dilithium_14::thread_or_ln181_194_fu_16135_p2() {
    or_ln181_194_fu_16135_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_C3);
}

void pqcrystals_dilithium_14::thread_or_ln181_195_fu_16205_p2() {
    or_ln181_195_fu_16205_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_C4);
}

void pqcrystals_dilithium_14::thread_or_ln181_196_fu_16219_p2() {
    or_ln181_196_fu_16219_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_C5);
}

void pqcrystals_dilithium_14::thread_or_ln181_197_fu_16289_p2() {
    or_ln181_197_fu_16289_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_C6);
}

void pqcrystals_dilithium_14::thread_or_ln181_198_fu_16303_p2() {
    or_ln181_198_fu_16303_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_C7);
}

void pqcrystals_dilithium_14::thread_or_ln181_199_fu_16373_p2() {
    or_ln181_199_fu_16373_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_C8);
}

void pqcrystals_dilithium_14::thread_or_ln181_19_fu_8813_p2() {
    or_ln181_19_fu_8813_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_14);
}

void pqcrystals_dilithium_14::thread_or_ln181_1_fu_8101_p2() {
    or_ln181_1_fu_8101_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_2);
}

void pqcrystals_dilithium_14::thread_or_ln181_200_fu_16387_p2() {
    or_ln181_200_fu_16387_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_C9);
}

void pqcrystals_dilithium_14::thread_or_ln181_201_fu_16457_p2() {
    or_ln181_201_fu_16457_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_CA);
}

void pqcrystals_dilithium_14::thread_or_ln181_202_fu_16471_p2() {
    or_ln181_202_fu_16471_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_CB);
}

void pqcrystals_dilithium_14::thread_or_ln181_203_fu_16541_p2() {
    or_ln181_203_fu_16541_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_CC);
}

void pqcrystals_dilithium_14::thread_or_ln181_204_fu_16555_p2() {
    or_ln181_204_fu_16555_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_CD);
}

void pqcrystals_dilithium_14::thread_or_ln181_205_fu_16625_p2() {
    or_ln181_205_fu_16625_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_CE);
}

void pqcrystals_dilithium_14::thread_or_ln181_206_fu_16639_p2() {
    or_ln181_206_fu_16639_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_CF);
}

void pqcrystals_dilithium_14::thread_or_ln181_207_fu_16709_p2() {
    or_ln181_207_fu_16709_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_D0);
}

void pqcrystals_dilithium_14::thread_or_ln181_208_fu_16723_p2() {
    or_ln181_208_fu_16723_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_D1);
}

void pqcrystals_dilithium_14::thread_or_ln181_209_fu_16793_p2() {
    or_ln181_209_fu_16793_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_D2);
}

void pqcrystals_dilithium_14::thread_or_ln181_20_fu_8827_p2() {
    or_ln181_20_fu_8827_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_15);
}

void pqcrystals_dilithium_14::thread_or_ln181_210_fu_16807_p2() {
    or_ln181_210_fu_16807_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_D3);
}

void pqcrystals_dilithium_14::thread_or_ln181_211_fu_16877_p2() {
    or_ln181_211_fu_16877_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_D4);
}

void pqcrystals_dilithium_14::thread_or_ln181_212_fu_16891_p2() {
    or_ln181_212_fu_16891_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_D5);
}

void pqcrystals_dilithium_14::thread_or_ln181_213_fu_16961_p2() {
    or_ln181_213_fu_16961_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_D6);
}

void pqcrystals_dilithium_14::thread_or_ln181_214_fu_16975_p2() {
    or_ln181_214_fu_16975_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_D7);
}

void pqcrystals_dilithium_14::thread_or_ln181_215_fu_17045_p2() {
    or_ln181_215_fu_17045_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_D8);
}

void pqcrystals_dilithium_14::thread_or_ln181_216_fu_17059_p2() {
    or_ln181_216_fu_17059_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_D9);
}

void pqcrystals_dilithium_14::thread_or_ln181_217_fu_17129_p2() {
    or_ln181_217_fu_17129_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_DA);
}

void pqcrystals_dilithium_14::thread_or_ln181_218_fu_17143_p2() {
    or_ln181_218_fu_17143_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_DB);
}

void pqcrystals_dilithium_14::thread_or_ln181_219_fu_17213_p2() {
    or_ln181_219_fu_17213_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_DC);
}

void pqcrystals_dilithium_14::thread_or_ln181_21_fu_8897_p2() {
    or_ln181_21_fu_8897_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_16);
}

void pqcrystals_dilithium_14::thread_or_ln181_220_fu_17227_p2() {
    or_ln181_220_fu_17227_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_DD);
}

void pqcrystals_dilithium_14::thread_or_ln181_221_fu_17297_p2() {
    or_ln181_221_fu_17297_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_DE);
}

void pqcrystals_dilithium_14::thread_or_ln181_222_fu_17311_p2() {
    or_ln181_222_fu_17311_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_DF);
}

void pqcrystals_dilithium_14::thread_or_ln181_223_fu_17381_p2() {
    or_ln181_223_fu_17381_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_E0);
}

void pqcrystals_dilithium_14::thread_or_ln181_224_fu_17395_p2() {
    or_ln181_224_fu_17395_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_E1);
}

void pqcrystals_dilithium_14::thread_or_ln181_225_fu_17465_p2() {
    or_ln181_225_fu_17465_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_E2);
}

void pqcrystals_dilithium_14::thread_or_ln181_226_fu_17479_p2() {
    or_ln181_226_fu_17479_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_E3);
}

void pqcrystals_dilithium_14::thread_or_ln181_227_fu_17549_p2() {
    or_ln181_227_fu_17549_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_E4);
}

void pqcrystals_dilithium_14::thread_or_ln181_228_fu_17563_p2() {
    or_ln181_228_fu_17563_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_E5);
}

void pqcrystals_dilithium_14::thread_or_ln181_229_fu_17633_p2() {
    or_ln181_229_fu_17633_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_E6);
}

void pqcrystals_dilithium_14::thread_or_ln181_22_fu_8911_p2() {
    or_ln181_22_fu_8911_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_17);
}

void pqcrystals_dilithium_14::thread_or_ln181_230_fu_17647_p2() {
    or_ln181_230_fu_17647_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_E7);
}

void pqcrystals_dilithium_14::thread_or_ln181_231_fu_17717_p2() {
    or_ln181_231_fu_17717_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_E8);
}

void pqcrystals_dilithium_14::thread_or_ln181_232_fu_17731_p2() {
    or_ln181_232_fu_17731_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_E9);
}

void pqcrystals_dilithium_14::thread_or_ln181_233_fu_17801_p2() {
    or_ln181_233_fu_17801_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_EA);
}

void pqcrystals_dilithium_14::thread_or_ln181_234_fu_17815_p2() {
    or_ln181_234_fu_17815_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_EB);
}

void pqcrystals_dilithium_14::thread_or_ln181_235_fu_17885_p2() {
    or_ln181_235_fu_17885_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_EC);
}

void pqcrystals_dilithium_14::thread_or_ln181_236_fu_17899_p2() {
    or_ln181_236_fu_17899_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_ED);
}

void pqcrystals_dilithium_14::thread_or_ln181_237_fu_17969_p2() {
    or_ln181_237_fu_17969_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_EE);
}

void pqcrystals_dilithium_14::thread_or_ln181_238_fu_17983_p2() {
    or_ln181_238_fu_17983_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_EF);
}

void pqcrystals_dilithium_14::thread_or_ln181_239_fu_18053_p2() {
    or_ln181_239_fu_18053_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_F0);
}

void pqcrystals_dilithium_14::thread_or_ln181_23_fu_8981_p2() {
    or_ln181_23_fu_8981_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_18);
}

void pqcrystals_dilithium_14::thread_or_ln181_240_fu_18067_p2() {
    or_ln181_240_fu_18067_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_F1);
}

void pqcrystals_dilithium_14::thread_or_ln181_241_fu_18137_p2() {
    or_ln181_241_fu_18137_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_F2);
}

void pqcrystals_dilithium_14::thread_or_ln181_242_fu_18151_p2() {
    or_ln181_242_fu_18151_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_F3);
}

void pqcrystals_dilithium_14::thread_or_ln181_243_fu_18221_p2() {
    or_ln181_243_fu_18221_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_F4);
}

void pqcrystals_dilithium_14::thread_or_ln181_244_fu_18235_p2() {
    or_ln181_244_fu_18235_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_F5);
}

void pqcrystals_dilithium_14::thread_or_ln181_245_fu_18305_p2() {
    or_ln181_245_fu_18305_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_F6);
}

void pqcrystals_dilithium_14::thread_or_ln181_246_fu_18319_p2() {
    or_ln181_246_fu_18319_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_F7);
}

void pqcrystals_dilithium_14::thread_or_ln181_247_fu_18389_p2() {
    or_ln181_247_fu_18389_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_F8);
}

void pqcrystals_dilithium_14::thread_or_ln181_248_fu_18403_p2() {
    or_ln181_248_fu_18403_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_F9);
}

void pqcrystals_dilithium_14::thread_or_ln181_249_fu_18473_p2() {
    or_ln181_249_fu_18473_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_FA);
}

void pqcrystals_dilithium_14::thread_or_ln181_24_fu_8995_p2() {
    or_ln181_24_fu_8995_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_19);
}

void pqcrystals_dilithium_14::thread_or_ln181_250_fu_18487_p2() {
    or_ln181_250_fu_18487_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_FB);
}

void pqcrystals_dilithium_14::thread_or_ln181_251_fu_18557_p2() {
    or_ln181_251_fu_18557_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_FC);
}

void pqcrystals_dilithium_14::thread_or_ln181_252_fu_18571_p2() {
    or_ln181_252_fu_18571_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_FD);
}

void pqcrystals_dilithium_14::thread_or_ln181_253_fu_18641_p2() {
    or_ln181_253_fu_18641_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_FE);
}

void pqcrystals_dilithium_14::thread_or_ln181_254_fu_18655_p2() {
    or_ln181_254_fu_18655_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_FF);
}

void pqcrystals_dilithium_14::thread_or_ln181_255_fu_8090_p2() {
    or_ln181_255_fu_8090_p2 = (tmp_255_fu_8077_p3.read() | ap_const_lv14_1);
}

void pqcrystals_dilithium_14::thread_or_ln181_256_fu_8129_p2() {
    or_ln181_256_fu_8129_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_2);
}

void pqcrystals_dilithium_14::thread_or_ln181_257_fu_8139_p2() {
    or_ln181_257_fu_8139_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_3);
}

void pqcrystals_dilithium_14::thread_or_ln181_258_fu_8177_p2() {
    or_ln181_258_fu_8177_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_4);
}

void pqcrystals_dilithium_14::thread_or_ln181_259_fu_8187_p2() {
    or_ln181_259_fu_8187_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_5);
}

void pqcrystals_dilithium_14::thread_or_ln181_25_fu_9065_p2() {
    or_ln181_25_fu_9065_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_1A);
}

void pqcrystals_dilithium_14::thread_or_ln181_260_fu_8253_p2() {
    or_ln181_260_fu_8253_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_6);
}

void pqcrystals_dilithium_14::thread_or_ln181_261_fu_8263_p2() {
    or_ln181_261_fu_8263_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_7);
}

void pqcrystals_dilithium_14::thread_or_ln181_262_fu_8337_p2() {
    or_ln181_262_fu_8337_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_8);
}

void pqcrystals_dilithium_14::thread_or_ln181_263_fu_8347_p2() {
    or_ln181_263_fu_8347_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_9);
}

void pqcrystals_dilithium_14::thread_or_ln181_264_fu_8421_p2() {
    or_ln181_264_fu_8421_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_A);
}

void pqcrystals_dilithium_14::thread_or_ln181_265_fu_8431_p2() {
    or_ln181_265_fu_8431_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_B);
}

void pqcrystals_dilithium_14::thread_or_ln181_266_fu_8505_p2() {
    or_ln181_266_fu_8505_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_C);
}

void pqcrystals_dilithium_14::thread_or_ln181_267_fu_8515_p2() {
    or_ln181_267_fu_8515_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_D);
}

void pqcrystals_dilithium_14::thread_or_ln181_268_fu_8589_p2() {
    or_ln181_268_fu_8589_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_E);
}

void pqcrystals_dilithium_14::thread_or_ln181_269_fu_8599_p2() {
    or_ln181_269_fu_8599_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_F);
}

void pqcrystals_dilithium_14::thread_or_ln181_26_fu_9079_p2() {
    or_ln181_26_fu_9079_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_1B);
}

void pqcrystals_dilithium_14::thread_or_ln181_270_fu_8673_p2() {
    or_ln181_270_fu_8673_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_10);
}

void pqcrystals_dilithium_14::thread_or_ln181_271_fu_8683_p2() {
    or_ln181_271_fu_8683_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_11);
}

void pqcrystals_dilithium_14::thread_or_ln181_272_fu_8757_p2() {
    or_ln181_272_fu_8757_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_12);
}

void pqcrystals_dilithium_14::thread_or_ln181_273_fu_8767_p2() {
    or_ln181_273_fu_8767_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_13);
}

void pqcrystals_dilithium_14::thread_or_ln181_274_fu_8841_p2() {
    or_ln181_274_fu_8841_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_14);
}

void pqcrystals_dilithium_14::thread_or_ln181_275_fu_8851_p2() {
    or_ln181_275_fu_8851_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_15);
}

void pqcrystals_dilithium_14::thread_or_ln181_276_fu_8925_p2() {
    or_ln181_276_fu_8925_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_16);
}

void pqcrystals_dilithium_14::thread_or_ln181_277_fu_8935_p2() {
    or_ln181_277_fu_8935_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_17);
}

void pqcrystals_dilithium_14::thread_or_ln181_278_fu_9009_p2() {
    or_ln181_278_fu_9009_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_18);
}

void pqcrystals_dilithium_14::thread_or_ln181_279_fu_9019_p2() {
    or_ln181_279_fu_9019_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_19);
}

void pqcrystals_dilithium_14::thread_or_ln181_27_fu_9149_p2() {
    or_ln181_27_fu_9149_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_1C);
}

void pqcrystals_dilithium_14::thread_or_ln181_280_fu_9093_p2() {
    or_ln181_280_fu_9093_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_1A);
}

void pqcrystals_dilithium_14::thread_or_ln181_281_fu_9103_p2() {
    or_ln181_281_fu_9103_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_1B);
}

void pqcrystals_dilithium_14::thread_or_ln181_282_fu_9177_p2() {
    or_ln181_282_fu_9177_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_1C);
}

void pqcrystals_dilithium_14::thread_or_ln181_283_fu_9187_p2() {
    or_ln181_283_fu_9187_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_1D);
}

void pqcrystals_dilithium_14::thread_or_ln181_284_fu_9261_p2() {
    or_ln181_284_fu_9261_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_1E);
}

void pqcrystals_dilithium_14::thread_or_ln181_285_fu_9271_p2() {
    or_ln181_285_fu_9271_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_1F);
}

void pqcrystals_dilithium_14::thread_or_ln181_286_fu_9345_p2() {
    or_ln181_286_fu_9345_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_20);
}

void pqcrystals_dilithium_14::thread_or_ln181_287_fu_9355_p2() {
    or_ln181_287_fu_9355_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_21);
}

void pqcrystals_dilithium_14::thread_or_ln181_288_fu_9429_p2() {
    or_ln181_288_fu_9429_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_22);
}

void pqcrystals_dilithium_14::thread_or_ln181_289_fu_9439_p2() {
    or_ln181_289_fu_9439_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_23);
}

void pqcrystals_dilithium_14::thread_or_ln181_28_fu_9163_p2() {
    or_ln181_28_fu_9163_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_1D);
}

void pqcrystals_dilithium_14::thread_or_ln181_290_fu_9513_p2() {
    or_ln181_290_fu_9513_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_24);
}

void pqcrystals_dilithium_14::thread_or_ln181_291_fu_9523_p2() {
    or_ln181_291_fu_9523_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_25);
}

void pqcrystals_dilithium_14::thread_or_ln181_292_fu_9597_p2() {
    or_ln181_292_fu_9597_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_26);
}

void pqcrystals_dilithium_14::thread_or_ln181_293_fu_9607_p2() {
    or_ln181_293_fu_9607_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_27);
}

void pqcrystals_dilithium_14::thread_or_ln181_294_fu_9681_p2() {
    or_ln181_294_fu_9681_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_28);
}

void pqcrystals_dilithium_14::thread_or_ln181_295_fu_9691_p2() {
    or_ln181_295_fu_9691_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_29);
}

void pqcrystals_dilithium_14::thread_or_ln181_296_fu_9765_p2() {
    or_ln181_296_fu_9765_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_2A);
}

void pqcrystals_dilithium_14::thread_or_ln181_297_fu_9775_p2() {
    or_ln181_297_fu_9775_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_2B);
}

void pqcrystals_dilithium_14::thread_or_ln181_298_fu_9849_p2() {
    or_ln181_298_fu_9849_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_2C);
}

void pqcrystals_dilithium_14::thread_or_ln181_299_fu_9859_p2() {
    or_ln181_299_fu_9859_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_2D);
}

void pqcrystals_dilithium_14::thread_or_ln181_29_fu_9233_p2() {
    or_ln181_29_fu_9233_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_1E);
}

void pqcrystals_dilithium_14::thread_or_ln181_2_fu_8115_p2() {
    or_ln181_2_fu_8115_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_3);
}

void pqcrystals_dilithium_14::thread_or_ln181_300_fu_9933_p2() {
    or_ln181_300_fu_9933_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_2E);
}

void pqcrystals_dilithium_14::thread_or_ln181_301_fu_9943_p2() {
    or_ln181_301_fu_9943_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_2F);
}

void pqcrystals_dilithium_14::thread_or_ln181_302_fu_10017_p2() {
    or_ln181_302_fu_10017_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_30);
}

void pqcrystals_dilithium_14::thread_or_ln181_303_fu_10027_p2() {
    or_ln181_303_fu_10027_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_31);
}

void pqcrystals_dilithium_14::thread_or_ln181_304_fu_10101_p2() {
    or_ln181_304_fu_10101_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_32);
}

void pqcrystals_dilithium_14::thread_or_ln181_305_fu_10111_p2() {
    or_ln181_305_fu_10111_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_33);
}

void pqcrystals_dilithium_14::thread_or_ln181_306_fu_10185_p2() {
    or_ln181_306_fu_10185_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_34);
}

void pqcrystals_dilithium_14::thread_or_ln181_307_fu_10195_p2() {
    or_ln181_307_fu_10195_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_35);
}

void pqcrystals_dilithium_14::thread_or_ln181_308_fu_10269_p2() {
    or_ln181_308_fu_10269_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_36);
}

void pqcrystals_dilithium_14::thread_or_ln181_309_fu_10279_p2() {
    or_ln181_309_fu_10279_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_37);
}

void pqcrystals_dilithium_14::thread_or_ln181_30_fu_9247_p2() {
    or_ln181_30_fu_9247_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_1F);
}

void pqcrystals_dilithium_14::thread_or_ln181_310_fu_10353_p2() {
    or_ln181_310_fu_10353_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_38);
}

void pqcrystals_dilithium_14::thread_or_ln181_311_fu_10363_p2() {
    or_ln181_311_fu_10363_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_39);
}

void pqcrystals_dilithium_14::thread_or_ln181_312_fu_10437_p2() {
    or_ln181_312_fu_10437_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_3A);
}

void pqcrystals_dilithium_14::thread_or_ln181_313_fu_10447_p2() {
    or_ln181_313_fu_10447_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_3B);
}

void pqcrystals_dilithium_14::thread_or_ln181_314_fu_10521_p2() {
    or_ln181_314_fu_10521_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_3C);
}

void pqcrystals_dilithium_14::thread_or_ln181_315_fu_10531_p2() {
    or_ln181_315_fu_10531_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_3D);
}

void pqcrystals_dilithium_14::thread_or_ln181_316_fu_10605_p2() {
    or_ln181_316_fu_10605_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_3E);
}

void pqcrystals_dilithium_14::thread_or_ln181_317_fu_10615_p2() {
    or_ln181_317_fu_10615_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_3F);
}

void pqcrystals_dilithium_14::thread_or_ln181_318_fu_10689_p2() {
    or_ln181_318_fu_10689_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_40);
}

void pqcrystals_dilithium_14::thread_or_ln181_319_fu_10699_p2() {
    or_ln181_319_fu_10699_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_41);
}

void pqcrystals_dilithium_14::thread_or_ln181_31_fu_9317_p2() {
    or_ln181_31_fu_9317_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_20);
}

void pqcrystals_dilithium_14::thread_or_ln181_320_fu_10773_p2() {
    or_ln181_320_fu_10773_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_42);
}

void pqcrystals_dilithium_14::thread_or_ln181_321_fu_10783_p2() {
    or_ln181_321_fu_10783_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_43);
}

void pqcrystals_dilithium_14::thread_or_ln181_322_fu_10857_p2() {
    or_ln181_322_fu_10857_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_44);
}

void pqcrystals_dilithium_14::thread_or_ln181_323_fu_10867_p2() {
    or_ln181_323_fu_10867_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_45);
}

void pqcrystals_dilithium_14::thread_or_ln181_324_fu_10941_p2() {
    or_ln181_324_fu_10941_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_46);
}

void pqcrystals_dilithium_14::thread_or_ln181_325_fu_10951_p2() {
    or_ln181_325_fu_10951_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_47);
}

void pqcrystals_dilithium_14::thread_or_ln181_326_fu_11025_p2() {
    or_ln181_326_fu_11025_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_48);
}

void pqcrystals_dilithium_14::thread_or_ln181_327_fu_11035_p2() {
    or_ln181_327_fu_11035_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_49);
}

void pqcrystals_dilithium_14::thread_or_ln181_328_fu_11109_p2() {
    or_ln181_328_fu_11109_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_4A);
}

void pqcrystals_dilithium_14::thread_or_ln181_329_fu_11119_p2() {
    or_ln181_329_fu_11119_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_4B);
}

void pqcrystals_dilithium_14::thread_or_ln181_32_fu_9331_p2() {
    or_ln181_32_fu_9331_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_21);
}

void pqcrystals_dilithium_14::thread_or_ln181_330_fu_11193_p2() {
    or_ln181_330_fu_11193_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_4C);
}

void pqcrystals_dilithium_14::thread_or_ln181_331_fu_11203_p2() {
    or_ln181_331_fu_11203_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_4D);
}

void pqcrystals_dilithium_14::thread_or_ln181_332_fu_11277_p2() {
    or_ln181_332_fu_11277_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_4E);
}

void pqcrystals_dilithium_14::thread_or_ln181_333_fu_11287_p2() {
    or_ln181_333_fu_11287_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_4F);
}

void pqcrystals_dilithium_14::thread_or_ln181_334_fu_11361_p2() {
    or_ln181_334_fu_11361_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_50);
}

void pqcrystals_dilithium_14::thread_or_ln181_335_fu_11371_p2() {
    or_ln181_335_fu_11371_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_51);
}

void pqcrystals_dilithium_14::thread_or_ln181_336_fu_11445_p2() {
    or_ln181_336_fu_11445_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_52);
}

void pqcrystals_dilithium_14::thread_or_ln181_337_fu_11455_p2() {
    or_ln181_337_fu_11455_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_53);
}

void pqcrystals_dilithium_14::thread_or_ln181_338_fu_11529_p2() {
    or_ln181_338_fu_11529_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_54);
}

void pqcrystals_dilithium_14::thread_or_ln181_339_fu_11539_p2() {
    or_ln181_339_fu_11539_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_55);
}

void pqcrystals_dilithium_14::thread_or_ln181_33_fu_9401_p2() {
    or_ln181_33_fu_9401_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_22);
}

void pqcrystals_dilithium_14::thread_or_ln181_340_fu_11613_p2() {
    or_ln181_340_fu_11613_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_56);
}

void pqcrystals_dilithium_14::thread_or_ln181_341_fu_11623_p2() {
    or_ln181_341_fu_11623_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_57);
}

void pqcrystals_dilithium_14::thread_or_ln181_342_fu_11697_p2() {
    or_ln181_342_fu_11697_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_58);
}

void pqcrystals_dilithium_14::thread_or_ln181_343_fu_11707_p2() {
    or_ln181_343_fu_11707_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_59);
}

void pqcrystals_dilithium_14::thread_or_ln181_344_fu_11781_p2() {
    or_ln181_344_fu_11781_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_5A);
}

void pqcrystals_dilithium_14::thread_or_ln181_345_fu_11791_p2() {
    or_ln181_345_fu_11791_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_5B);
}

void pqcrystals_dilithium_14::thread_or_ln181_346_fu_11865_p2() {
    or_ln181_346_fu_11865_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_5C);
}

void pqcrystals_dilithium_14::thread_or_ln181_347_fu_11875_p2() {
    or_ln181_347_fu_11875_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_5D);
}

void pqcrystals_dilithium_14::thread_or_ln181_348_fu_11949_p2() {
    or_ln181_348_fu_11949_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_5E);
}

void pqcrystals_dilithium_14::thread_or_ln181_349_fu_11959_p2() {
    or_ln181_349_fu_11959_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_5F);
}

void pqcrystals_dilithium_14::thread_or_ln181_34_fu_9415_p2() {
    or_ln181_34_fu_9415_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_23);
}

void pqcrystals_dilithium_14::thread_or_ln181_350_fu_12033_p2() {
    or_ln181_350_fu_12033_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_60);
}

void pqcrystals_dilithium_14::thread_or_ln181_351_fu_12043_p2() {
    or_ln181_351_fu_12043_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_61);
}

void pqcrystals_dilithium_14::thread_or_ln181_352_fu_12117_p2() {
    or_ln181_352_fu_12117_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_62);
}

void pqcrystals_dilithium_14::thread_or_ln181_353_fu_12127_p2() {
    or_ln181_353_fu_12127_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_63);
}

void pqcrystals_dilithium_14::thread_or_ln181_354_fu_12201_p2() {
    or_ln181_354_fu_12201_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_64);
}

void pqcrystals_dilithium_14::thread_or_ln181_355_fu_12211_p2() {
    or_ln181_355_fu_12211_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_65);
}

void pqcrystals_dilithium_14::thread_or_ln181_356_fu_12285_p2() {
    or_ln181_356_fu_12285_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_66);
}

void pqcrystals_dilithium_14::thread_or_ln181_357_fu_12295_p2() {
    or_ln181_357_fu_12295_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_67);
}

void pqcrystals_dilithium_14::thread_or_ln181_358_fu_12369_p2() {
    or_ln181_358_fu_12369_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_68);
}

void pqcrystals_dilithium_14::thread_or_ln181_359_fu_12379_p2() {
    or_ln181_359_fu_12379_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_69);
}

void pqcrystals_dilithium_14::thread_or_ln181_35_fu_9485_p2() {
    or_ln181_35_fu_9485_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_24);
}

void pqcrystals_dilithium_14::thread_or_ln181_360_fu_12453_p2() {
    or_ln181_360_fu_12453_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_6A);
}

void pqcrystals_dilithium_14::thread_or_ln181_361_fu_12463_p2() {
    or_ln181_361_fu_12463_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_6B);
}

void pqcrystals_dilithium_14::thread_or_ln181_362_fu_12537_p2() {
    or_ln181_362_fu_12537_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_6C);
}

void pqcrystals_dilithium_14::thread_or_ln181_363_fu_12547_p2() {
    or_ln181_363_fu_12547_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_6D);
}

void pqcrystals_dilithium_14::thread_or_ln181_364_fu_12621_p2() {
    or_ln181_364_fu_12621_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_6E);
}

void pqcrystals_dilithium_14::thread_or_ln181_365_fu_12631_p2() {
    or_ln181_365_fu_12631_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_6F);
}

void pqcrystals_dilithium_14::thread_or_ln181_366_fu_12705_p2() {
    or_ln181_366_fu_12705_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_70);
}

void pqcrystals_dilithium_14::thread_or_ln181_367_fu_12715_p2() {
    or_ln181_367_fu_12715_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_71);
}

void pqcrystals_dilithium_14::thread_or_ln181_368_fu_12789_p2() {
    or_ln181_368_fu_12789_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_72);
}

void pqcrystals_dilithium_14::thread_or_ln181_369_fu_12799_p2() {
    or_ln181_369_fu_12799_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_73);
}

void pqcrystals_dilithium_14::thread_or_ln181_36_fu_9499_p2() {
    or_ln181_36_fu_9499_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_25);
}

void pqcrystals_dilithium_14::thread_or_ln181_370_fu_12873_p2() {
    or_ln181_370_fu_12873_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_74);
}

void pqcrystals_dilithium_14::thread_or_ln181_371_fu_12883_p2() {
    or_ln181_371_fu_12883_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_75);
}

void pqcrystals_dilithium_14::thread_or_ln181_372_fu_12957_p2() {
    or_ln181_372_fu_12957_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_76);
}

void pqcrystals_dilithium_14::thread_or_ln181_373_fu_12967_p2() {
    or_ln181_373_fu_12967_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_77);
}

void pqcrystals_dilithium_14::thread_or_ln181_374_fu_13041_p2() {
    or_ln181_374_fu_13041_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_78);
}

void pqcrystals_dilithium_14::thread_or_ln181_375_fu_13051_p2() {
    or_ln181_375_fu_13051_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_79);
}

void pqcrystals_dilithium_14::thread_or_ln181_376_fu_13125_p2() {
    or_ln181_376_fu_13125_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_7A);
}

void pqcrystals_dilithium_14::thread_or_ln181_377_fu_13135_p2() {
    or_ln181_377_fu_13135_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_7B);
}

void pqcrystals_dilithium_14::thread_or_ln181_378_fu_13209_p2() {
    or_ln181_378_fu_13209_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_7C);
}

void pqcrystals_dilithium_14::thread_or_ln181_379_fu_13219_p2() {
    or_ln181_379_fu_13219_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_7D);
}

void pqcrystals_dilithium_14::thread_or_ln181_37_fu_9569_p2() {
    or_ln181_37_fu_9569_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_26);
}

void pqcrystals_dilithium_14::thread_or_ln181_380_fu_13293_p2() {
    or_ln181_380_fu_13293_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_7E);
}

void pqcrystals_dilithium_14::thread_or_ln181_381_fu_13303_p2() {
    or_ln181_381_fu_13303_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_7F);
}

void pqcrystals_dilithium_14::thread_or_ln181_382_fu_13377_p2() {
    or_ln181_382_fu_13377_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_80);
}

void pqcrystals_dilithium_14::thread_or_ln181_383_fu_13387_p2() {
    or_ln181_383_fu_13387_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_81);
}

void pqcrystals_dilithium_14::thread_or_ln181_384_fu_13461_p2() {
    or_ln181_384_fu_13461_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_82);
}

void pqcrystals_dilithium_14::thread_or_ln181_385_fu_13471_p2() {
    or_ln181_385_fu_13471_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_83);
}

void pqcrystals_dilithium_14::thread_or_ln181_386_fu_13545_p2() {
    or_ln181_386_fu_13545_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_84);
}

void pqcrystals_dilithium_14::thread_or_ln181_387_fu_13555_p2() {
    or_ln181_387_fu_13555_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_85);
}

void pqcrystals_dilithium_14::thread_or_ln181_388_fu_13629_p2() {
    or_ln181_388_fu_13629_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_86);
}

void pqcrystals_dilithium_14::thread_or_ln181_389_fu_13639_p2() {
    or_ln181_389_fu_13639_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_87);
}

void pqcrystals_dilithium_14::thread_or_ln181_38_fu_9583_p2() {
    or_ln181_38_fu_9583_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_27);
}

void pqcrystals_dilithium_14::thread_or_ln181_390_fu_13713_p2() {
    or_ln181_390_fu_13713_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_88);
}

void pqcrystals_dilithium_14::thread_or_ln181_391_fu_13723_p2() {
    or_ln181_391_fu_13723_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_89);
}

void pqcrystals_dilithium_14::thread_or_ln181_392_fu_13797_p2() {
    or_ln181_392_fu_13797_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_8A);
}

void pqcrystals_dilithium_14::thread_or_ln181_393_fu_13807_p2() {
    or_ln181_393_fu_13807_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_8B);
}

void pqcrystals_dilithium_14::thread_or_ln181_394_fu_13881_p2() {
    or_ln181_394_fu_13881_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_8C);
}

void pqcrystals_dilithium_14::thread_or_ln181_395_fu_13891_p2() {
    or_ln181_395_fu_13891_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_8D);
}

void pqcrystals_dilithium_14::thread_or_ln181_396_fu_13965_p2() {
    or_ln181_396_fu_13965_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_8E);
}

void pqcrystals_dilithium_14::thread_or_ln181_397_fu_13975_p2() {
    or_ln181_397_fu_13975_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_8F);
}

void pqcrystals_dilithium_14::thread_or_ln181_398_fu_14049_p2() {
    or_ln181_398_fu_14049_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_90);
}

void pqcrystals_dilithium_14::thread_or_ln181_399_fu_14059_p2() {
    or_ln181_399_fu_14059_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_91);
}

void pqcrystals_dilithium_14::thread_or_ln181_39_fu_9653_p2() {
    or_ln181_39_fu_9653_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_28);
}

void pqcrystals_dilithium_14::thread_or_ln181_3_fu_8149_p2() {
    or_ln181_3_fu_8149_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_4);
}

void pqcrystals_dilithium_14::thread_or_ln181_400_fu_14133_p2() {
    or_ln181_400_fu_14133_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_92);
}

void pqcrystals_dilithium_14::thread_or_ln181_401_fu_14143_p2() {
    or_ln181_401_fu_14143_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_93);
}

void pqcrystals_dilithium_14::thread_or_ln181_402_fu_14217_p2() {
    or_ln181_402_fu_14217_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_94);
}

void pqcrystals_dilithium_14::thread_or_ln181_403_fu_14227_p2() {
    or_ln181_403_fu_14227_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_95);
}

void pqcrystals_dilithium_14::thread_or_ln181_404_fu_14301_p2() {
    or_ln181_404_fu_14301_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_96);
}

void pqcrystals_dilithium_14::thread_or_ln181_405_fu_14311_p2() {
    or_ln181_405_fu_14311_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_97);
}

void pqcrystals_dilithium_14::thread_or_ln181_406_fu_14385_p2() {
    or_ln181_406_fu_14385_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_98);
}

void pqcrystals_dilithium_14::thread_or_ln181_407_fu_14395_p2() {
    or_ln181_407_fu_14395_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_99);
}

void pqcrystals_dilithium_14::thread_or_ln181_408_fu_14469_p2() {
    or_ln181_408_fu_14469_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_9A);
}

void pqcrystals_dilithium_14::thread_or_ln181_409_fu_14479_p2() {
    or_ln181_409_fu_14479_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_9B);
}

void pqcrystals_dilithium_14::thread_or_ln181_40_fu_9667_p2() {
    or_ln181_40_fu_9667_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_29);
}

void pqcrystals_dilithium_14::thread_or_ln181_410_fu_14553_p2() {
    or_ln181_410_fu_14553_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_9C);
}

void pqcrystals_dilithium_14::thread_or_ln181_411_fu_14563_p2() {
    or_ln181_411_fu_14563_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_9D);
}

void pqcrystals_dilithium_14::thread_or_ln181_412_fu_14637_p2() {
    or_ln181_412_fu_14637_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_9E);
}

void pqcrystals_dilithium_14::thread_or_ln181_413_fu_14647_p2() {
    or_ln181_413_fu_14647_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_9F);
}

void pqcrystals_dilithium_14::thread_or_ln181_414_fu_14721_p2() {
    or_ln181_414_fu_14721_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_A0);
}

void pqcrystals_dilithium_14::thread_or_ln181_415_fu_14731_p2() {
    or_ln181_415_fu_14731_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_A1);
}

void pqcrystals_dilithium_14::thread_or_ln181_416_fu_14805_p2() {
    or_ln181_416_fu_14805_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_A2);
}

void pqcrystals_dilithium_14::thread_or_ln181_417_fu_14815_p2() {
    or_ln181_417_fu_14815_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_A3);
}

void pqcrystals_dilithium_14::thread_or_ln181_418_fu_14889_p2() {
    or_ln181_418_fu_14889_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_A4);
}

void pqcrystals_dilithium_14::thread_or_ln181_419_fu_14899_p2() {
    or_ln181_419_fu_14899_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_A5);
}

void pqcrystals_dilithium_14::thread_or_ln181_41_fu_9737_p2() {
    or_ln181_41_fu_9737_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_2A);
}

void pqcrystals_dilithium_14::thread_or_ln181_420_fu_14973_p2() {
    or_ln181_420_fu_14973_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_A6);
}

void pqcrystals_dilithium_14::thread_or_ln181_421_fu_14983_p2() {
    or_ln181_421_fu_14983_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_A7);
}

void pqcrystals_dilithium_14::thread_or_ln181_422_fu_15057_p2() {
    or_ln181_422_fu_15057_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_A8);
}

void pqcrystals_dilithium_14::thread_or_ln181_423_fu_15067_p2() {
    or_ln181_423_fu_15067_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_A9);
}

void pqcrystals_dilithium_14::thread_or_ln181_424_fu_15141_p2() {
    or_ln181_424_fu_15141_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_AA);
}

void pqcrystals_dilithium_14::thread_or_ln181_425_fu_15151_p2() {
    or_ln181_425_fu_15151_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_AB);
}

void pqcrystals_dilithium_14::thread_or_ln181_426_fu_15225_p2() {
    or_ln181_426_fu_15225_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_AC);
}

void pqcrystals_dilithium_14::thread_or_ln181_427_fu_15235_p2() {
    or_ln181_427_fu_15235_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_AD);
}

void pqcrystals_dilithium_14::thread_or_ln181_428_fu_15309_p2() {
    or_ln181_428_fu_15309_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_AE);
}

void pqcrystals_dilithium_14::thread_or_ln181_429_fu_15319_p2() {
    or_ln181_429_fu_15319_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_AF);
}

void pqcrystals_dilithium_14::thread_or_ln181_42_fu_9751_p2() {
    or_ln181_42_fu_9751_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_2B);
}

void pqcrystals_dilithium_14::thread_or_ln181_430_fu_15393_p2() {
    or_ln181_430_fu_15393_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_B0);
}

void pqcrystals_dilithium_14::thread_or_ln181_431_fu_15403_p2() {
    or_ln181_431_fu_15403_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_B1);
}

void pqcrystals_dilithium_14::thread_or_ln181_432_fu_15477_p2() {
    or_ln181_432_fu_15477_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_B2);
}

void pqcrystals_dilithium_14::thread_or_ln181_433_fu_15487_p2() {
    or_ln181_433_fu_15487_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_B3);
}

void pqcrystals_dilithium_14::thread_or_ln181_434_fu_15561_p2() {
    or_ln181_434_fu_15561_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_B4);
}

void pqcrystals_dilithium_14::thread_or_ln181_435_fu_15571_p2() {
    or_ln181_435_fu_15571_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_B5);
}

void pqcrystals_dilithium_14::thread_or_ln181_436_fu_15645_p2() {
    or_ln181_436_fu_15645_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_B6);
}

void pqcrystals_dilithium_14::thread_or_ln181_437_fu_15655_p2() {
    or_ln181_437_fu_15655_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_B7);
}

void pqcrystals_dilithium_14::thread_or_ln181_438_fu_15729_p2() {
    or_ln181_438_fu_15729_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_B8);
}

void pqcrystals_dilithium_14::thread_or_ln181_439_fu_15739_p2() {
    or_ln181_439_fu_15739_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_B9);
}

void pqcrystals_dilithium_14::thread_or_ln181_43_fu_9821_p2() {
    or_ln181_43_fu_9821_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_2C);
}

void pqcrystals_dilithium_14::thread_or_ln181_440_fu_15813_p2() {
    or_ln181_440_fu_15813_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_BA);
}

void pqcrystals_dilithium_14::thread_or_ln181_441_fu_15823_p2() {
    or_ln181_441_fu_15823_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_BB);
}

void pqcrystals_dilithium_14::thread_or_ln181_442_fu_15897_p2() {
    or_ln181_442_fu_15897_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_BC);
}

void pqcrystals_dilithium_14::thread_or_ln181_443_fu_15907_p2() {
    or_ln181_443_fu_15907_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_BD);
}

void pqcrystals_dilithium_14::thread_or_ln181_444_fu_15981_p2() {
    or_ln181_444_fu_15981_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_BE);
}

void pqcrystals_dilithium_14::thread_or_ln181_445_fu_15991_p2() {
    or_ln181_445_fu_15991_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_BF);
}

void pqcrystals_dilithium_14::thread_or_ln181_446_fu_16065_p2() {
    or_ln181_446_fu_16065_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_C0);
}

void pqcrystals_dilithium_14::thread_or_ln181_447_fu_16075_p2() {
    or_ln181_447_fu_16075_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_C1);
}

void pqcrystals_dilithium_14::thread_or_ln181_448_fu_16149_p2() {
    or_ln181_448_fu_16149_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_C2);
}

void pqcrystals_dilithium_14::thread_or_ln181_449_fu_16159_p2() {
    or_ln181_449_fu_16159_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_C3);
}

void pqcrystals_dilithium_14::thread_or_ln181_44_fu_9835_p2() {
    or_ln181_44_fu_9835_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_2D);
}

void pqcrystals_dilithium_14::thread_or_ln181_450_fu_16233_p2() {
    or_ln181_450_fu_16233_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_C4);
}

void pqcrystals_dilithium_14::thread_or_ln181_451_fu_16243_p2() {
    or_ln181_451_fu_16243_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_C5);
}

void pqcrystals_dilithium_14::thread_or_ln181_452_fu_16317_p2() {
    or_ln181_452_fu_16317_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_C6);
}

void pqcrystals_dilithium_14::thread_or_ln181_453_fu_16327_p2() {
    or_ln181_453_fu_16327_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_C7);
}

void pqcrystals_dilithium_14::thread_or_ln181_454_fu_16401_p2() {
    or_ln181_454_fu_16401_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_C8);
}

void pqcrystals_dilithium_14::thread_or_ln181_455_fu_16411_p2() {
    or_ln181_455_fu_16411_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_C9);
}

void pqcrystals_dilithium_14::thread_or_ln181_456_fu_16485_p2() {
    or_ln181_456_fu_16485_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_CA);
}

void pqcrystals_dilithium_14::thread_or_ln181_457_fu_16495_p2() {
    or_ln181_457_fu_16495_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_CB);
}

void pqcrystals_dilithium_14::thread_or_ln181_458_fu_16569_p2() {
    or_ln181_458_fu_16569_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_CC);
}

void pqcrystals_dilithium_14::thread_or_ln181_459_fu_16579_p2() {
    or_ln181_459_fu_16579_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_CD);
}

void pqcrystals_dilithium_14::thread_or_ln181_45_fu_9905_p2() {
    or_ln181_45_fu_9905_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_2E);
}

void pqcrystals_dilithium_14::thread_or_ln181_460_fu_16653_p2() {
    or_ln181_460_fu_16653_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_CE);
}

void pqcrystals_dilithium_14::thread_or_ln181_461_fu_16663_p2() {
    or_ln181_461_fu_16663_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_CF);
}

void pqcrystals_dilithium_14::thread_or_ln181_462_fu_16737_p2() {
    or_ln181_462_fu_16737_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_D0);
}

void pqcrystals_dilithium_14::thread_or_ln181_463_fu_16747_p2() {
    or_ln181_463_fu_16747_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_D1);
}

void pqcrystals_dilithium_14::thread_or_ln181_464_fu_16821_p2() {
    or_ln181_464_fu_16821_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_D2);
}

void pqcrystals_dilithium_14::thread_or_ln181_465_fu_16831_p2() {
    or_ln181_465_fu_16831_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_D3);
}

void pqcrystals_dilithium_14::thread_or_ln181_466_fu_16905_p2() {
    or_ln181_466_fu_16905_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_D4);
}

void pqcrystals_dilithium_14::thread_or_ln181_467_fu_16915_p2() {
    or_ln181_467_fu_16915_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_D5);
}

void pqcrystals_dilithium_14::thread_or_ln181_468_fu_16989_p2() {
    or_ln181_468_fu_16989_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_D6);
}

void pqcrystals_dilithium_14::thread_or_ln181_469_fu_16999_p2() {
    or_ln181_469_fu_16999_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_D7);
}

void pqcrystals_dilithium_14::thread_or_ln181_46_fu_9919_p2() {
    or_ln181_46_fu_9919_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_2F);
}

void pqcrystals_dilithium_14::thread_or_ln181_470_fu_17073_p2() {
    or_ln181_470_fu_17073_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_D8);
}

void pqcrystals_dilithium_14::thread_or_ln181_471_fu_17083_p2() {
    or_ln181_471_fu_17083_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_D9);
}

void pqcrystals_dilithium_14::thread_or_ln181_472_fu_17157_p2() {
    or_ln181_472_fu_17157_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_DA);
}

void pqcrystals_dilithium_14::thread_or_ln181_473_fu_17167_p2() {
    or_ln181_473_fu_17167_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_DB);
}

void pqcrystals_dilithium_14::thread_or_ln181_474_fu_17241_p2() {
    or_ln181_474_fu_17241_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_DC);
}

void pqcrystals_dilithium_14::thread_or_ln181_475_fu_17251_p2() {
    or_ln181_475_fu_17251_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_DD);
}

void pqcrystals_dilithium_14::thread_or_ln181_476_fu_17325_p2() {
    or_ln181_476_fu_17325_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_DE);
}

void pqcrystals_dilithium_14::thread_or_ln181_477_fu_17335_p2() {
    or_ln181_477_fu_17335_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_DF);
}

void pqcrystals_dilithium_14::thread_or_ln181_478_fu_17409_p2() {
    or_ln181_478_fu_17409_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_E0);
}

void pqcrystals_dilithium_14::thread_or_ln181_479_fu_17419_p2() {
    or_ln181_479_fu_17419_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_E1);
}

void pqcrystals_dilithium_14::thread_or_ln181_47_fu_9989_p2() {
    or_ln181_47_fu_9989_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_30);
}

void pqcrystals_dilithium_14::thread_or_ln181_480_fu_17493_p2() {
    or_ln181_480_fu_17493_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_E2);
}

void pqcrystals_dilithium_14::thread_or_ln181_481_fu_17503_p2() {
    or_ln181_481_fu_17503_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_E3);
}

void pqcrystals_dilithium_14::thread_or_ln181_482_fu_17577_p2() {
    or_ln181_482_fu_17577_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_E4);
}

void pqcrystals_dilithium_14::thread_or_ln181_483_fu_17587_p2() {
    or_ln181_483_fu_17587_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_E5);
}

void pqcrystals_dilithium_14::thread_or_ln181_484_fu_17661_p2() {
    or_ln181_484_fu_17661_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_E6);
}

void pqcrystals_dilithium_14::thread_or_ln181_485_fu_17671_p2() {
    or_ln181_485_fu_17671_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_E7);
}

void pqcrystals_dilithium_14::thread_or_ln181_486_fu_17745_p2() {
    or_ln181_486_fu_17745_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_E8);
}

void pqcrystals_dilithium_14::thread_or_ln181_487_fu_17755_p2() {
    or_ln181_487_fu_17755_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_E9);
}

void pqcrystals_dilithium_14::thread_or_ln181_488_fu_17829_p2() {
    or_ln181_488_fu_17829_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_EA);
}

void pqcrystals_dilithium_14::thread_or_ln181_489_fu_17839_p2() {
    or_ln181_489_fu_17839_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_EB);
}

void pqcrystals_dilithium_14::thread_or_ln181_48_fu_10003_p2() {
    or_ln181_48_fu_10003_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_31);
}

void pqcrystals_dilithium_14::thread_or_ln181_490_fu_17913_p2() {
    or_ln181_490_fu_17913_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_EC);
}

void pqcrystals_dilithium_14::thread_or_ln181_491_fu_17923_p2() {
    or_ln181_491_fu_17923_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_ED);
}

void pqcrystals_dilithium_14::thread_or_ln181_492_fu_17997_p2() {
    or_ln181_492_fu_17997_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_EE);
}

void pqcrystals_dilithium_14::thread_or_ln181_493_fu_18007_p2() {
    or_ln181_493_fu_18007_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_EF);
}

void pqcrystals_dilithium_14::thread_or_ln181_494_fu_18081_p2() {
    or_ln181_494_fu_18081_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_F0);
}

void pqcrystals_dilithium_14::thread_or_ln181_495_fu_18091_p2() {
    or_ln181_495_fu_18091_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_F1);
}

void pqcrystals_dilithium_14::thread_or_ln181_496_fu_18165_p2() {
    or_ln181_496_fu_18165_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_F2);
}

void pqcrystals_dilithium_14::thread_or_ln181_497_fu_18175_p2() {
    or_ln181_497_fu_18175_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_F3);
}

void pqcrystals_dilithium_14::thread_or_ln181_498_fu_18249_p2() {
    or_ln181_498_fu_18249_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_F4);
}

void pqcrystals_dilithium_14::thread_or_ln181_499_fu_18259_p2() {
    or_ln181_499_fu_18259_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_F5);
}

void pqcrystals_dilithium_14::thread_or_ln181_49_fu_10073_p2() {
    or_ln181_49_fu_10073_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_32);
}

void pqcrystals_dilithium_14::thread_or_ln181_4_fu_8163_p2() {
    or_ln181_4_fu_8163_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_5);
}

void pqcrystals_dilithium_14::thread_or_ln181_500_fu_18333_p2() {
    or_ln181_500_fu_18333_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_F6);
}

void pqcrystals_dilithium_14::thread_or_ln181_501_fu_18343_p2() {
    or_ln181_501_fu_18343_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_F7);
}

void pqcrystals_dilithium_14::thread_or_ln181_502_fu_18417_p2() {
    or_ln181_502_fu_18417_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_F8);
}

void pqcrystals_dilithium_14::thread_or_ln181_503_fu_18427_p2() {
    or_ln181_503_fu_18427_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_F9);
}

void pqcrystals_dilithium_14::thread_or_ln181_504_fu_18501_p2() {
    or_ln181_504_fu_18501_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_FA);
}

void pqcrystals_dilithium_14::thread_or_ln181_505_fu_18511_p2() {
    or_ln181_505_fu_18511_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_FB);
}

void pqcrystals_dilithium_14::thread_or_ln181_506_fu_18585_p2() {
    or_ln181_506_fu_18585_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_FC);
}

void pqcrystals_dilithium_14::thread_or_ln181_507_fu_18595_p2() {
    or_ln181_507_fu_18595_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_FD);
}

void pqcrystals_dilithium_14::thread_or_ln181_508_fu_18669_p2() {
    or_ln181_508_fu_18669_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_FE);
}

void pqcrystals_dilithium_14::thread_or_ln181_509_fu_18679_p2() {
    or_ln181_509_fu_18679_p2 = (tmp_255_reg_19073.read() | ap_const_lv14_FF);
}

void pqcrystals_dilithium_14::thread_or_ln181_50_fu_10087_p2() {
    or_ln181_50_fu_10087_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_33);
}

void pqcrystals_dilithium_14::thread_or_ln181_51_fu_10157_p2() {
    or_ln181_51_fu_10157_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_34);
}

void pqcrystals_dilithium_14::thread_or_ln181_52_fu_10171_p2() {
    or_ln181_52_fu_10171_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_35);
}

void pqcrystals_dilithium_14::thread_or_ln181_53_fu_10241_p2() {
    or_ln181_53_fu_10241_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_36);
}

void pqcrystals_dilithium_14::thread_or_ln181_54_fu_10255_p2() {
    or_ln181_54_fu_10255_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_37);
}

void pqcrystals_dilithium_14::thread_or_ln181_55_fu_10325_p2() {
    or_ln181_55_fu_10325_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_38);
}

void pqcrystals_dilithium_14::thread_or_ln181_56_fu_10339_p2() {
    or_ln181_56_fu_10339_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_39);
}

void pqcrystals_dilithium_14::thread_or_ln181_57_fu_10409_p2() {
    or_ln181_57_fu_10409_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_3A);
}

void pqcrystals_dilithium_14::thread_or_ln181_58_fu_10423_p2() {
    or_ln181_58_fu_10423_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_3B);
}

void pqcrystals_dilithium_14::thread_or_ln181_59_fu_10493_p2() {
    or_ln181_59_fu_10493_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_3C);
}

void pqcrystals_dilithium_14::thread_or_ln181_5_fu_8225_p2() {
    or_ln181_5_fu_8225_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_6);
}

void pqcrystals_dilithium_14::thread_or_ln181_60_fu_10507_p2() {
    or_ln181_60_fu_10507_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_3D);
}

void pqcrystals_dilithium_14::thread_or_ln181_61_fu_10577_p2() {
    or_ln181_61_fu_10577_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_3E);
}

void pqcrystals_dilithium_14::thread_or_ln181_62_fu_10591_p2() {
    or_ln181_62_fu_10591_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_3F);
}

void pqcrystals_dilithium_14::thread_or_ln181_63_fu_10661_p2() {
    or_ln181_63_fu_10661_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_40);
}

void pqcrystals_dilithium_14::thread_or_ln181_64_fu_10675_p2() {
    or_ln181_64_fu_10675_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_41);
}

void pqcrystals_dilithium_14::thread_or_ln181_65_fu_10745_p2() {
    or_ln181_65_fu_10745_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_42);
}

void pqcrystals_dilithium_14::thread_or_ln181_66_fu_10759_p2() {
    or_ln181_66_fu_10759_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_43);
}

void pqcrystals_dilithium_14::thread_or_ln181_67_fu_10829_p2() {
    or_ln181_67_fu_10829_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_44);
}

void pqcrystals_dilithium_14::thread_or_ln181_68_fu_10843_p2() {
    or_ln181_68_fu_10843_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_45);
}

void pqcrystals_dilithium_14::thread_or_ln181_69_fu_10913_p2() {
    or_ln181_69_fu_10913_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_46);
}

void pqcrystals_dilithium_14::thread_or_ln181_6_fu_8239_p2() {
    or_ln181_6_fu_8239_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_7);
}

void pqcrystals_dilithium_14::thread_or_ln181_70_fu_10927_p2() {
    or_ln181_70_fu_10927_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_47);
}

void pqcrystals_dilithium_14::thread_or_ln181_71_fu_10997_p2() {
    or_ln181_71_fu_10997_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_48);
}

void pqcrystals_dilithium_14::thread_or_ln181_72_fu_11011_p2() {
    or_ln181_72_fu_11011_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_49);
}

void pqcrystals_dilithium_14::thread_or_ln181_73_fu_11081_p2() {
    or_ln181_73_fu_11081_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_4A);
}

void pqcrystals_dilithium_14::thread_or_ln181_74_fu_11095_p2() {
    or_ln181_74_fu_11095_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_4B);
}

void pqcrystals_dilithium_14::thread_or_ln181_75_fu_11165_p2() {
    or_ln181_75_fu_11165_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_4C);
}

void pqcrystals_dilithium_14::thread_or_ln181_76_fu_11179_p2() {
    or_ln181_76_fu_11179_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_4D);
}

void pqcrystals_dilithium_14::thread_or_ln181_77_fu_11249_p2() {
    or_ln181_77_fu_11249_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_4E);
}

void pqcrystals_dilithium_14::thread_or_ln181_78_fu_11263_p2() {
    or_ln181_78_fu_11263_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_4F);
}

void pqcrystals_dilithium_14::thread_or_ln181_79_fu_11333_p2() {
    or_ln181_79_fu_11333_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_50);
}

void pqcrystals_dilithium_14::thread_or_ln181_7_fu_8309_p2() {
    or_ln181_7_fu_8309_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_8);
}

void pqcrystals_dilithium_14::thread_or_ln181_80_fu_11347_p2() {
    or_ln181_80_fu_11347_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_51);
}

void pqcrystals_dilithium_14::thread_or_ln181_81_fu_11417_p2() {
    or_ln181_81_fu_11417_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_52);
}

void pqcrystals_dilithium_14::thread_or_ln181_82_fu_11431_p2() {
    or_ln181_82_fu_11431_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_53);
}

void pqcrystals_dilithium_14::thread_or_ln181_83_fu_11501_p2() {
    or_ln181_83_fu_11501_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_54);
}

void pqcrystals_dilithium_14::thread_or_ln181_84_fu_11515_p2() {
    or_ln181_84_fu_11515_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_55);
}

void pqcrystals_dilithium_14::thread_or_ln181_85_fu_11585_p2() {
    or_ln181_85_fu_11585_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_56);
}

void pqcrystals_dilithium_14::thread_or_ln181_86_fu_11599_p2() {
    or_ln181_86_fu_11599_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_57);
}

void pqcrystals_dilithium_14::thread_or_ln181_87_fu_11669_p2() {
    or_ln181_87_fu_11669_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_58);
}

void pqcrystals_dilithium_14::thread_or_ln181_88_fu_11683_p2() {
    or_ln181_88_fu_11683_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_59);
}

void pqcrystals_dilithium_14::thread_or_ln181_89_fu_11753_p2() {
    or_ln181_89_fu_11753_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_5A);
}

void pqcrystals_dilithium_14::thread_or_ln181_8_fu_8323_p2() {
    or_ln181_8_fu_8323_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_9);
}

void pqcrystals_dilithium_14::thread_or_ln181_90_fu_11767_p2() {
    or_ln181_90_fu_11767_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_5B);
}

void pqcrystals_dilithium_14::thread_or_ln181_91_fu_11837_p2() {
    or_ln181_91_fu_11837_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_5C);
}

void pqcrystals_dilithium_14::thread_or_ln181_92_fu_11851_p2() {
    or_ln181_92_fu_11851_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_5D);
}

void pqcrystals_dilithium_14::thread_or_ln181_93_fu_11921_p2() {
    or_ln181_93_fu_11921_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_5E);
}

void pqcrystals_dilithium_14::thread_or_ln181_94_fu_11935_p2() {
    or_ln181_94_fu_11935_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_5F);
}

void pqcrystals_dilithium_14::thread_or_ln181_95_fu_12005_p2() {
    or_ln181_95_fu_12005_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_60);
}

void pqcrystals_dilithium_14::thread_or_ln181_96_fu_12019_p2() {
    or_ln181_96_fu_12019_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_61);
}

void pqcrystals_dilithium_14::thread_or_ln181_97_fu_12089_p2() {
    or_ln181_97_fu_12089_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_62);
}

void pqcrystals_dilithium_14::thread_or_ln181_98_fu_12103_p2() {
    or_ln181_98_fu_12103_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_63);
}

void pqcrystals_dilithium_14::thread_or_ln181_99_fu_12173_p2() {
    or_ln181_99_fu_12173_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_64);
}

void pqcrystals_dilithium_14::thread_or_ln181_9_fu_8393_p2() {
    or_ln181_9_fu_8393_p2 = (tmp_260_reg_18805.read() | ap_const_lv11_A);
}

void pqcrystals_dilithium_14::thread_or_ln181_fu_8044_p2() {
    or_ln181_fu_8044_p2 = (tmp_260_fu_8031_p3.read() | ap_const_lv11_1);
}

void pqcrystals_dilithium_14::thread_sext_ln181_101_fu_10293_p1() {
    sext_ln181_101_fu_10293_p1 = esl_sext<64,55>(mul_ln181_49_reg_20346.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_103_fu_10373_p1() {
    sext_ln181_103_fu_10373_p1 = esl_sext<64,55>(mul_ln181_50_reg_20381.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_105_fu_10377_p1() {
    sext_ln181_105_fu_10377_p1 = esl_sext<64,55>(mul_ln181_51_reg_20386.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_107_fu_10457_p1() {
    sext_ln181_107_fu_10457_p1 = esl_sext<64,55>(mul_ln181_52_reg_20421.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_109_fu_10461_p1() {
    sext_ln181_109_fu_10461_p1 = esl_sext<64,55>(mul_ln181_53_reg_20426.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_111_fu_10541_p1() {
    sext_ln181_111_fu_10541_p1 = esl_sext<64,55>(mul_ln181_54_reg_20461.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_113_fu_10545_p1() {
    sext_ln181_113_fu_10545_p1 = esl_sext<64,55>(mul_ln181_55_reg_20466.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_115_fu_10625_p1() {
    sext_ln181_115_fu_10625_p1 = esl_sext<64,55>(mul_ln181_56_reg_20501.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_117_fu_10629_p1() {
    sext_ln181_117_fu_10629_p1 = esl_sext<64,55>(mul_ln181_57_reg_20506.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_119_fu_10709_p1() {
    sext_ln181_119_fu_10709_p1 = esl_sext<64,55>(mul_ln181_58_reg_20541.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_11_fu_8441_p1() {
    sext_ln181_11_fu_8441_p1 = esl_sext<64,55>(mul_ln181_4_reg_19461.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_121_fu_10713_p1() {
    sext_ln181_121_fu_10713_p1 = esl_sext<64,55>(mul_ln181_59_reg_20546.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_123_fu_10793_p1() {
    sext_ln181_123_fu_10793_p1 = esl_sext<64,55>(mul_ln181_60_reg_20581.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_125_fu_10797_p1() {
    sext_ln181_125_fu_10797_p1 = esl_sext<64,55>(mul_ln181_61_reg_20586.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_127_fu_10877_p1() {
    sext_ln181_127_fu_10877_p1 = esl_sext<64,55>(mul_ln181_62_reg_20621.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_129_fu_10881_p1() {
    sext_ln181_129_fu_10881_p1 = esl_sext<64,55>(mul_ln181_63_reg_20626.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_131_fu_10961_p1() {
    sext_ln181_131_fu_10961_p1 = esl_sext<64,55>(mul_ln181_64_reg_20661.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_133_fu_10965_p1() {
    sext_ln181_133_fu_10965_p1 = esl_sext<64,55>(mul_ln181_65_reg_20666.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_135_fu_11045_p1() {
    sext_ln181_135_fu_11045_p1 = esl_sext<64,55>(mul_ln181_66_reg_20701.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_137_fu_11049_p1() {
    sext_ln181_137_fu_11049_p1 = esl_sext<64,55>(mul_ln181_67_reg_20706.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_139_fu_11129_p1() {
    sext_ln181_139_fu_11129_p1 = esl_sext<64,55>(mul_ln181_68_reg_20741.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_13_fu_8445_p1() {
    sext_ln181_13_fu_8445_p1 = esl_sext<64,55>(mul_ln181_5_reg_19466.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_141_fu_11133_p1() {
    sext_ln181_141_fu_11133_p1 = esl_sext<64,55>(mul_ln181_69_reg_20746.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_143_fu_11213_p1() {
    sext_ln181_143_fu_11213_p1 = esl_sext<64,55>(mul_ln181_70_reg_20781.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_145_fu_11217_p1() {
    sext_ln181_145_fu_11217_p1 = esl_sext<64,55>(mul_ln181_71_reg_20786.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_147_fu_11297_p1() {
    sext_ln181_147_fu_11297_p1 = esl_sext<64,55>(mul_ln181_72_reg_20821.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_149_fu_11301_p1() {
    sext_ln181_149_fu_11301_p1 = esl_sext<64,55>(mul_ln181_73_reg_20826.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_151_fu_11381_p1() {
    sext_ln181_151_fu_11381_p1 = esl_sext<64,55>(mul_ln181_74_reg_20861.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_153_fu_11385_p1() {
    sext_ln181_153_fu_11385_p1 = esl_sext<64,55>(mul_ln181_75_reg_20866.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_155_fu_11465_p1() {
    sext_ln181_155_fu_11465_p1 = esl_sext<64,55>(mul_ln181_76_reg_20901.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_157_fu_11469_p1() {
    sext_ln181_157_fu_11469_p1 = esl_sext<64,55>(mul_ln181_77_reg_20906.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_159_fu_11549_p1() {
    sext_ln181_159_fu_11549_p1 = esl_sext<64,55>(mul_ln181_78_reg_20941.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_15_fu_8525_p1() {
    sext_ln181_15_fu_8525_p1 = esl_sext<64,55>(mul_ln181_6_reg_19501.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_161_fu_11553_p1() {
    sext_ln181_161_fu_11553_p1 = esl_sext<64,55>(mul_ln181_79_reg_20946.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_163_fu_11633_p1() {
    sext_ln181_163_fu_11633_p1 = esl_sext<64,55>(mul_ln181_80_reg_20981.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_165_fu_11637_p1() {
    sext_ln181_165_fu_11637_p1 = esl_sext<64,55>(mul_ln181_81_reg_20986.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_167_fu_11717_p1() {
    sext_ln181_167_fu_11717_p1 = esl_sext<64,55>(mul_ln181_82_reg_21021.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_169_fu_11721_p1() {
    sext_ln181_169_fu_11721_p1 = esl_sext<64,55>(mul_ln181_83_reg_21026.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_171_fu_11801_p1() {
    sext_ln181_171_fu_11801_p1 = esl_sext<64,55>(mul_ln181_84_reg_21061.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_173_fu_11805_p1() {
    sext_ln181_173_fu_11805_p1 = esl_sext<64,55>(mul_ln181_85_reg_21066.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_175_fu_11885_p1() {
    sext_ln181_175_fu_11885_p1 = esl_sext<64,55>(mul_ln181_86_reg_21101.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_177_fu_11889_p1() {
    sext_ln181_177_fu_11889_p1 = esl_sext<64,55>(mul_ln181_87_reg_21106.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_179_fu_11969_p1() {
    sext_ln181_179_fu_11969_p1 = esl_sext<64,55>(mul_ln181_88_reg_21141.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_17_fu_8529_p1() {
    sext_ln181_17_fu_8529_p1 = esl_sext<64,55>(mul_ln181_7_reg_19506.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_181_fu_11973_p1() {
    sext_ln181_181_fu_11973_p1 = esl_sext<64,55>(mul_ln181_89_reg_21146.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_183_fu_12053_p1() {
    sext_ln181_183_fu_12053_p1 = esl_sext<64,55>(mul_ln181_90_reg_21181.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_185_fu_12057_p1() {
    sext_ln181_185_fu_12057_p1 = esl_sext<64,55>(mul_ln181_91_reg_21186.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_187_fu_12137_p1() {
    sext_ln181_187_fu_12137_p1 = esl_sext<64,55>(mul_ln181_92_reg_21221.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_189_fu_12141_p1() {
    sext_ln181_189_fu_12141_p1 = esl_sext<64,55>(mul_ln181_93_reg_21226.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_191_fu_12221_p1() {
    sext_ln181_191_fu_12221_p1 = esl_sext<64,55>(mul_ln181_94_reg_21261.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_193_fu_12225_p1() {
    sext_ln181_193_fu_12225_p1 = esl_sext<64,55>(mul_ln181_95_reg_21266.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_195_fu_12305_p1() {
    sext_ln181_195_fu_12305_p1 = esl_sext<64,55>(mul_ln181_96_reg_21301.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_197_fu_12309_p1() {
    sext_ln181_197_fu_12309_p1 = esl_sext<64,55>(mul_ln181_97_reg_21306.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_199_fu_12389_p1() {
    sext_ln181_199_fu_12389_p1 = esl_sext<64,55>(mul_ln181_98_reg_21341.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_19_fu_8609_p1() {
    sext_ln181_19_fu_8609_p1 = esl_sext<64,55>(mul_ln181_8_reg_19541.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_201_fu_12393_p1() {
    sext_ln181_201_fu_12393_p1 = esl_sext<64,55>(mul_ln181_99_reg_21346.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_203_fu_12473_p1() {
    sext_ln181_203_fu_12473_p1 = esl_sext<64,55>(mul_ln181_100_reg_21381.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_205_fu_12477_p1() {
    sext_ln181_205_fu_12477_p1 = esl_sext<64,55>(mul_ln181_101_reg_21386.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_207_fu_12557_p1() {
    sext_ln181_207_fu_12557_p1 = esl_sext<64,55>(mul_ln181_102_reg_21421.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_209_fu_12561_p1() {
    sext_ln181_209_fu_12561_p1 = esl_sext<64,55>(mul_ln181_103_reg_21426.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_211_fu_12641_p1() {
    sext_ln181_211_fu_12641_p1 = esl_sext<64,55>(mul_ln181_104_reg_21461.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_213_fu_12645_p1() {
    sext_ln181_213_fu_12645_p1 = esl_sext<64,55>(mul_ln181_105_reg_21466.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_215_fu_12725_p1() {
    sext_ln181_215_fu_12725_p1 = esl_sext<64,55>(mul_ln181_106_reg_21501.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_217_fu_12729_p1() {
    sext_ln181_217_fu_12729_p1 = esl_sext<64,55>(mul_ln181_107_reg_21506.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_219_fu_12809_p1() {
    sext_ln181_219_fu_12809_p1 = esl_sext<64,55>(mul_ln181_108_reg_21541.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_21_fu_8613_p1() {
    sext_ln181_21_fu_8613_p1 = esl_sext<64,55>(mul_ln181_9_reg_19546.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_221_fu_12813_p1() {
    sext_ln181_221_fu_12813_p1 = esl_sext<64,55>(mul_ln181_109_reg_21546.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_223_fu_12893_p1() {
    sext_ln181_223_fu_12893_p1 = esl_sext<64,55>(mul_ln181_110_reg_21581.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_225_fu_12897_p1() {
    sext_ln181_225_fu_12897_p1 = esl_sext<64,55>(mul_ln181_111_reg_21586.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_227_fu_12977_p1() {
    sext_ln181_227_fu_12977_p1 = esl_sext<64,55>(mul_ln181_112_reg_21621.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_229_fu_12981_p1() {
    sext_ln181_229_fu_12981_p1 = esl_sext<64,55>(mul_ln181_113_reg_21626.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_231_fu_13061_p1() {
    sext_ln181_231_fu_13061_p1 = esl_sext<64,55>(mul_ln181_114_reg_21661.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_233_fu_13065_p1() {
    sext_ln181_233_fu_13065_p1 = esl_sext<64,55>(mul_ln181_115_reg_21666.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_235_fu_13145_p1() {
    sext_ln181_235_fu_13145_p1 = esl_sext<64,55>(mul_ln181_116_reg_21701.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_237_fu_13149_p1() {
    sext_ln181_237_fu_13149_p1 = esl_sext<64,55>(mul_ln181_117_reg_21706.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_239_fu_13229_p1() {
    sext_ln181_239_fu_13229_p1 = esl_sext<64,55>(mul_ln181_118_reg_21741.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_23_fu_8693_p1() {
    sext_ln181_23_fu_8693_p1 = esl_sext<64,55>(mul_ln181_10_reg_19581.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_241_fu_13233_p1() {
    sext_ln181_241_fu_13233_p1 = esl_sext<64,55>(mul_ln181_119_reg_21746.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_243_fu_13313_p1() {
    sext_ln181_243_fu_13313_p1 = esl_sext<64,55>(mul_ln181_120_reg_21781.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_245_fu_13317_p1() {
    sext_ln181_245_fu_13317_p1 = esl_sext<64,55>(mul_ln181_121_reg_21786.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_247_fu_13397_p1() {
    sext_ln181_247_fu_13397_p1 = esl_sext<64,55>(mul_ln181_122_reg_21821.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_249_fu_13401_p1() {
    sext_ln181_249_fu_13401_p1 = esl_sext<64,55>(mul_ln181_123_reg_21826.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_251_fu_13481_p1() {
    sext_ln181_251_fu_13481_p1 = esl_sext<64,55>(mul_ln181_124_reg_21861.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_253_fu_13485_p1() {
    sext_ln181_253_fu_13485_p1 = esl_sext<64,55>(mul_ln181_125_reg_21866.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_255_fu_13565_p1() {
    sext_ln181_255_fu_13565_p1 = esl_sext<64,55>(mul_ln181_126_reg_21901.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_257_fu_13569_p1() {
    sext_ln181_257_fu_13569_p1 = esl_sext<64,55>(mul_ln181_127_reg_21906.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_259_fu_13649_p1() {
    sext_ln181_259_fu_13649_p1 = esl_sext<64,55>(mul_ln181_128_reg_21941.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_25_fu_8697_p1() {
    sext_ln181_25_fu_8697_p1 = esl_sext<64,55>(mul_ln181_11_reg_19586.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_261_fu_13653_p1() {
    sext_ln181_261_fu_13653_p1 = esl_sext<64,55>(mul_ln181_129_reg_21946.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_263_fu_13733_p1() {
    sext_ln181_263_fu_13733_p1 = esl_sext<64,55>(mul_ln181_130_reg_21981.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_265_fu_13737_p1() {
    sext_ln181_265_fu_13737_p1 = esl_sext<64,55>(mul_ln181_131_reg_21986.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_267_fu_13817_p1() {
    sext_ln181_267_fu_13817_p1 = esl_sext<64,55>(mul_ln181_132_reg_22021.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_269_fu_13821_p1() {
    sext_ln181_269_fu_13821_p1 = esl_sext<64,55>(mul_ln181_133_reg_22026.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_271_fu_13901_p1() {
    sext_ln181_271_fu_13901_p1 = esl_sext<64,55>(mul_ln181_134_reg_22061.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_273_fu_13905_p1() {
    sext_ln181_273_fu_13905_p1 = esl_sext<64,55>(mul_ln181_135_reg_22066.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_275_fu_13985_p1() {
    sext_ln181_275_fu_13985_p1 = esl_sext<64,55>(mul_ln181_136_reg_22101.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_277_fu_13989_p1() {
    sext_ln181_277_fu_13989_p1 = esl_sext<64,55>(mul_ln181_137_reg_22106.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_279_fu_14069_p1() {
    sext_ln181_279_fu_14069_p1 = esl_sext<64,55>(mul_ln181_138_reg_22141.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_27_fu_8777_p1() {
    sext_ln181_27_fu_8777_p1 = esl_sext<64,55>(mul_ln181_12_reg_19621.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_281_fu_14073_p1() {
    sext_ln181_281_fu_14073_p1 = esl_sext<64,55>(mul_ln181_139_reg_22146.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_283_fu_14153_p1() {
    sext_ln181_283_fu_14153_p1 = esl_sext<64,55>(mul_ln181_140_reg_22181.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_285_fu_14157_p1() {
    sext_ln181_285_fu_14157_p1 = esl_sext<64,55>(mul_ln181_141_reg_22186.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_287_fu_14237_p1() {
    sext_ln181_287_fu_14237_p1 = esl_sext<64,55>(mul_ln181_142_reg_22221.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_289_fu_14241_p1() {
    sext_ln181_289_fu_14241_p1 = esl_sext<64,55>(mul_ln181_143_reg_22226.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_291_fu_14321_p1() {
    sext_ln181_291_fu_14321_p1 = esl_sext<64,55>(mul_ln181_144_reg_22261.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_293_fu_14325_p1() {
    sext_ln181_293_fu_14325_p1 = esl_sext<64,55>(mul_ln181_145_reg_22266.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_295_fu_14405_p1() {
    sext_ln181_295_fu_14405_p1 = esl_sext<64,55>(mul_ln181_146_reg_22301.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_297_fu_14409_p1() {
    sext_ln181_297_fu_14409_p1 = esl_sext<64,55>(mul_ln181_147_reg_22306.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_299_fu_14489_p1() {
    sext_ln181_299_fu_14489_p1 = esl_sext<64,55>(mul_ln181_148_reg_22341.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_29_fu_8781_p1() {
    sext_ln181_29_fu_8781_p1 = esl_sext<64,55>(mul_ln181_13_reg_19626.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_301_fu_14493_p1() {
    sext_ln181_301_fu_14493_p1 = esl_sext<64,55>(mul_ln181_149_reg_22346.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_303_fu_14573_p1() {
    sext_ln181_303_fu_14573_p1 = esl_sext<64,55>(mul_ln181_150_reg_22381.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_305_fu_14577_p1() {
    sext_ln181_305_fu_14577_p1 = esl_sext<64,55>(mul_ln181_151_reg_22386.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_307_fu_14657_p1() {
    sext_ln181_307_fu_14657_p1 = esl_sext<64,55>(mul_ln181_152_reg_22421.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_309_fu_14661_p1() {
    sext_ln181_309_fu_14661_p1 = esl_sext<64,55>(mul_ln181_153_reg_22426.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_311_fu_14741_p1() {
    sext_ln181_311_fu_14741_p1 = esl_sext<64,55>(mul_ln181_154_reg_22461.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_313_fu_14745_p1() {
    sext_ln181_313_fu_14745_p1 = esl_sext<64,55>(mul_ln181_155_reg_22466.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_315_fu_14825_p1() {
    sext_ln181_315_fu_14825_p1 = esl_sext<64,55>(mul_ln181_156_reg_22501.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_317_fu_14829_p1() {
    sext_ln181_317_fu_14829_p1 = esl_sext<64,55>(mul_ln181_157_reg_22506.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_319_fu_14909_p1() {
    sext_ln181_319_fu_14909_p1 = esl_sext<64,55>(mul_ln181_158_reg_22541.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_31_fu_8861_p1() {
    sext_ln181_31_fu_8861_p1 = esl_sext<64,55>(mul_ln181_14_reg_19661.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_321_fu_14913_p1() {
    sext_ln181_321_fu_14913_p1 = esl_sext<64,55>(mul_ln181_159_reg_22546.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_323_fu_14993_p1() {
    sext_ln181_323_fu_14993_p1 = esl_sext<64,55>(mul_ln181_160_reg_22581.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_325_fu_14997_p1() {
    sext_ln181_325_fu_14997_p1 = esl_sext<64,55>(mul_ln181_161_reg_22586.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_327_fu_15077_p1() {
    sext_ln181_327_fu_15077_p1 = esl_sext<64,55>(mul_ln181_162_reg_22621.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_329_fu_15081_p1() {
    sext_ln181_329_fu_15081_p1 = esl_sext<64,55>(mul_ln181_163_reg_22626.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_331_fu_15161_p1() {
    sext_ln181_331_fu_15161_p1 = esl_sext<64,55>(mul_ln181_164_reg_22661.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_333_fu_15165_p1() {
    sext_ln181_333_fu_15165_p1 = esl_sext<64,55>(mul_ln181_165_reg_22666.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_335_fu_15245_p1() {
    sext_ln181_335_fu_15245_p1 = esl_sext<64,55>(mul_ln181_166_reg_22701.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_337_fu_15249_p1() {
    sext_ln181_337_fu_15249_p1 = esl_sext<64,55>(mul_ln181_167_reg_22706.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_339_fu_15329_p1() {
    sext_ln181_339_fu_15329_p1 = esl_sext<64,55>(mul_ln181_168_reg_22741.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_33_fu_8865_p1() {
    sext_ln181_33_fu_8865_p1 = esl_sext<64,55>(mul_ln181_15_reg_19666.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_341_fu_15333_p1() {
    sext_ln181_341_fu_15333_p1 = esl_sext<64,55>(mul_ln181_169_reg_22746.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_343_fu_15413_p1() {
    sext_ln181_343_fu_15413_p1 = esl_sext<64,55>(mul_ln181_170_reg_22781.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_345_fu_15417_p1() {
    sext_ln181_345_fu_15417_p1 = esl_sext<64,55>(mul_ln181_171_reg_22786.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_347_fu_15497_p1() {
    sext_ln181_347_fu_15497_p1 = esl_sext<64,55>(mul_ln181_172_reg_22821.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_349_fu_15501_p1() {
    sext_ln181_349_fu_15501_p1 = esl_sext<64,55>(mul_ln181_173_reg_22826.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_351_fu_15581_p1() {
    sext_ln181_351_fu_15581_p1 = esl_sext<64,55>(mul_ln181_174_reg_22861.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_353_fu_15585_p1() {
    sext_ln181_353_fu_15585_p1 = esl_sext<64,55>(mul_ln181_175_reg_22866.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_355_fu_15665_p1() {
    sext_ln181_355_fu_15665_p1 = esl_sext<64,55>(mul_ln181_176_reg_22901.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_357_fu_15669_p1() {
    sext_ln181_357_fu_15669_p1 = esl_sext<64,55>(mul_ln181_177_reg_22906.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_359_fu_15749_p1() {
    sext_ln181_359_fu_15749_p1 = esl_sext<64,55>(mul_ln181_178_reg_22941.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_35_fu_8945_p1() {
    sext_ln181_35_fu_8945_p1 = esl_sext<64,55>(mul_ln181_16_reg_19701.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_361_fu_15753_p1() {
    sext_ln181_361_fu_15753_p1 = esl_sext<64,55>(mul_ln181_179_reg_22946.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_363_fu_15833_p1() {
    sext_ln181_363_fu_15833_p1 = esl_sext<64,55>(mul_ln181_180_reg_22981.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_365_fu_15837_p1() {
    sext_ln181_365_fu_15837_p1 = esl_sext<64,55>(mul_ln181_181_reg_22986.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_367_fu_15917_p1() {
    sext_ln181_367_fu_15917_p1 = esl_sext<64,55>(mul_ln181_182_reg_23021.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_369_fu_15921_p1() {
    sext_ln181_369_fu_15921_p1 = esl_sext<64,55>(mul_ln181_183_reg_23026.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_371_fu_16001_p1() {
    sext_ln181_371_fu_16001_p1 = esl_sext<64,55>(mul_ln181_184_reg_23061.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_373_fu_16005_p1() {
    sext_ln181_373_fu_16005_p1 = esl_sext<64,55>(mul_ln181_185_reg_23066.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_375_fu_16085_p1() {
    sext_ln181_375_fu_16085_p1 = esl_sext<64,55>(mul_ln181_186_reg_23101.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_377_fu_16089_p1() {
    sext_ln181_377_fu_16089_p1 = esl_sext<64,55>(mul_ln181_187_reg_23106.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_379_fu_16169_p1() {
    sext_ln181_379_fu_16169_p1 = esl_sext<64,55>(mul_ln181_188_reg_23141.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_37_fu_8949_p1() {
    sext_ln181_37_fu_8949_p1 = esl_sext<64,55>(mul_ln181_17_reg_19706.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_381_fu_16173_p1() {
    sext_ln181_381_fu_16173_p1 = esl_sext<64,55>(mul_ln181_189_reg_23146.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_383_fu_16253_p1() {
    sext_ln181_383_fu_16253_p1 = esl_sext<64,55>(mul_ln181_190_reg_23181.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_385_fu_16257_p1() {
    sext_ln181_385_fu_16257_p1 = esl_sext<64,55>(mul_ln181_191_reg_23186.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_387_fu_16337_p1() {
    sext_ln181_387_fu_16337_p1 = esl_sext<64,55>(mul_ln181_192_reg_23221.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_389_fu_16341_p1() {
    sext_ln181_389_fu_16341_p1 = esl_sext<64,55>(mul_ln181_193_reg_23226.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_391_fu_16421_p1() {
    sext_ln181_391_fu_16421_p1 = esl_sext<64,55>(mul_ln181_194_reg_23261.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_393_fu_16425_p1() {
    sext_ln181_393_fu_16425_p1 = esl_sext<64,55>(mul_ln181_195_reg_23266.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_395_fu_16505_p1() {
    sext_ln181_395_fu_16505_p1 = esl_sext<64,55>(mul_ln181_196_reg_23301.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_397_fu_16509_p1() {
    sext_ln181_397_fu_16509_p1 = esl_sext<64,55>(mul_ln181_197_reg_23306.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_399_fu_16589_p1() {
    sext_ln181_399_fu_16589_p1 = esl_sext<64,55>(mul_ln181_198_reg_23341.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_39_fu_9029_p1() {
    sext_ln181_39_fu_9029_p1 = esl_sext<64,55>(mul_ln181_18_reg_19741.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_3_fu_8273_p1() {
    sext_ln181_3_fu_8273_p1 = esl_sext<64,55>(mul_ln181_reg_19381.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_401_fu_16593_p1() {
    sext_ln181_401_fu_16593_p1 = esl_sext<64,55>(mul_ln181_199_reg_23346.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_403_fu_16673_p1() {
    sext_ln181_403_fu_16673_p1 = esl_sext<64,55>(mul_ln181_200_reg_23381.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_405_fu_16677_p1() {
    sext_ln181_405_fu_16677_p1 = esl_sext<64,55>(mul_ln181_201_reg_23386.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_407_fu_16757_p1() {
    sext_ln181_407_fu_16757_p1 = esl_sext<64,55>(mul_ln181_202_reg_23421.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_409_fu_16761_p1() {
    sext_ln181_409_fu_16761_p1 = esl_sext<64,55>(mul_ln181_203_reg_23426.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_411_fu_16841_p1() {
    sext_ln181_411_fu_16841_p1 = esl_sext<64,55>(mul_ln181_204_reg_23461.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_413_fu_16845_p1() {
    sext_ln181_413_fu_16845_p1 = esl_sext<64,55>(mul_ln181_205_reg_23466.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_415_fu_16925_p1() {
    sext_ln181_415_fu_16925_p1 = esl_sext<64,55>(mul_ln181_206_reg_23501.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_417_fu_16929_p1() {
    sext_ln181_417_fu_16929_p1 = esl_sext<64,55>(mul_ln181_207_reg_23506.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_419_fu_17009_p1() {
    sext_ln181_419_fu_17009_p1 = esl_sext<64,55>(mul_ln181_208_reg_23541.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_41_fu_9033_p1() {
    sext_ln181_41_fu_9033_p1 = esl_sext<64,55>(mul_ln181_19_reg_19746.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_421_fu_17013_p1() {
    sext_ln181_421_fu_17013_p1 = esl_sext<64,55>(mul_ln181_209_reg_23546.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_423_fu_17093_p1() {
    sext_ln181_423_fu_17093_p1 = esl_sext<64,55>(mul_ln181_210_reg_23581.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_425_fu_17097_p1() {
    sext_ln181_425_fu_17097_p1 = esl_sext<64,55>(mul_ln181_211_reg_23586.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_427_fu_17177_p1() {
    sext_ln181_427_fu_17177_p1 = esl_sext<64,55>(mul_ln181_212_reg_23621.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_429_fu_17181_p1() {
    sext_ln181_429_fu_17181_p1 = esl_sext<64,55>(mul_ln181_213_reg_23626.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_431_fu_17261_p1() {
    sext_ln181_431_fu_17261_p1 = esl_sext<64,55>(mul_ln181_214_reg_23661.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_433_fu_17265_p1() {
    sext_ln181_433_fu_17265_p1 = esl_sext<64,55>(mul_ln181_215_reg_23666.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_435_fu_17345_p1() {
    sext_ln181_435_fu_17345_p1 = esl_sext<64,55>(mul_ln181_216_reg_23701.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_437_fu_17349_p1() {
    sext_ln181_437_fu_17349_p1 = esl_sext<64,55>(mul_ln181_217_reg_23706.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_439_fu_17429_p1() {
    sext_ln181_439_fu_17429_p1 = esl_sext<64,55>(mul_ln181_218_reg_23741.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_43_fu_9113_p1() {
    sext_ln181_43_fu_9113_p1 = esl_sext<64,55>(mul_ln181_20_reg_19781.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_441_fu_17433_p1() {
    sext_ln181_441_fu_17433_p1 = esl_sext<64,55>(mul_ln181_219_reg_23746.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_443_fu_17513_p1() {
    sext_ln181_443_fu_17513_p1 = esl_sext<64,55>(mul_ln181_220_reg_23781.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_445_fu_17517_p1() {
    sext_ln181_445_fu_17517_p1 = esl_sext<64,55>(mul_ln181_221_reg_23786.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_447_fu_17597_p1() {
    sext_ln181_447_fu_17597_p1 = esl_sext<64,55>(mul_ln181_222_reg_23821.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_449_fu_17601_p1() {
    sext_ln181_449_fu_17601_p1 = esl_sext<64,55>(mul_ln181_223_reg_23826.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_451_fu_17681_p1() {
    sext_ln181_451_fu_17681_p1 = esl_sext<64,55>(mul_ln181_224_reg_23861.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_453_fu_17685_p1() {
    sext_ln181_453_fu_17685_p1 = esl_sext<64,55>(mul_ln181_225_reg_23866.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_455_fu_17765_p1() {
    sext_ln181_455_fu_17765_p1 = esl_sext<64,55>(mul_ln181_226_reg_23901.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_457_fu_17769_p1() {
    sext_ln181_457_fu_17769_p1 = esl_sext<64,55>(mul_ln181_227_reg_23906.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_459_fu_17849_p1() {
    sext_ln181_459_fu_17849_p1 = esl_sext<64,55>(mul_ln181_228_reg_23941.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_45_fu_9117_p1() {
    sext_ln181_45_fu_9117_p1 = esl_sext<64,55>(mul_ln181_21_reg_19786.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_461_fu_17853_p1() {
    sext_ln181_461_fu_17853_p1 = esl_sext<64,55>(mul_ln181_229_reg_23946.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_463_fu_17933_p1() {
    sext_ln181_463_fu_17933_p1 = esl_sext<64,55>(mul_ln181_230_reg_23981.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_465_fu_17937_p1() {
    sext_ln181_465_fu_17937_p1 = esl_sext<64,55>(mul_ln181_231_reg_23986.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_467_fu_18017_p1() {
    sext_ln181_467_fu_18017_p1 = esl_sext<64,55>(mul_ln181_232_reg_24021.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_469_fu_18021_p1() {
    sext_ln181_469_fu_18021_p1 = esl_sext<64,55>(mul_ln181_233_reg_24026.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_471_fu_18101_p1() {
    sext_ln181_471_fu_18101_p1 = esl_sext<64,55>(mul_ln181_234_reg_24061.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_473_fu_18105_p1() {
    sext_ln181_473_fu_18105_p1 = esl_sext<64,55>(mul_ln181_235_reg_24066.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_475_fu_18185_p1() {
    sext_ln181_475_fu_18185_p1 = esl_sext<64,55>(mul_ln181_236_reg_24101.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_477_fu_18189_p1() {
    sext_ln181_477_fu_18189_p1 = esl_sext<64,55>(mul_ln181_237_reg_24106.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_479_fu_18269_p1() {
    sext_ln181_479_fu_18269_p1 = esl_sext<64,55>(mul_ln181_238_reg_24141.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_47_fu_9197_p1() {
    sext_ln181_47_fu_9197_p1 = esl_sext<64,55>(mul_ln181_22_reg_19821.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_481_fu_18273_p1() {
    sext_ln181_481_fu_18273_p1 = esl_sext<64,55>(mul_ln181_239_reg_24146.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_483_fu_18353_p1() {
    sext_ln181_483_fu_18353_p1 = esl_sext<64,55>(mul_ln181_240_reg_24181.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_485_fu_18357_p1() {
    sext_ln181_485_fu_18357_p1 = esl_sext<64,55>(mul_ln181_241_reg_24186.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_487_fu_18437_p1() {
    sext_ln181_487_fu_18437_p1 = esl_sext<64,55>(mul_ln181_242_reg_24221.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_489_fu_18441_p1() {
    sext_ln181_489_fu_18441_p1 = esl_sext<64,55>(mul_ln181_243_reg_24226.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_491_fu_18521_p1() {
    sext_ln181_491_fu_18521_p1 = esl_sext<64,55>(mul_ln181_244_reg_24261.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_493_fu_18525_p1() {
    sext_ln181_493_fu_18525_p1 = esl_sext<64,55>(mul_ln181_245_reg_24266.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_495_fu_18605_p1() {
    sext_ln181_495_fu_18605_p1 = esl_sext<64,55>(mul_ln181_246_reg_24301.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_497_fu_18609_p1() {
    sext_ln181_497_fu_18609_p1 = esl_sext<64,55>(mul_ln181_247_reg_24306.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_499_fu_18689_p1() {
    sext_ln181_499_fu_18689_p1 = esl_sext<64,55>(mul_ln181_248_reg_24341.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_49_fu_9201_p1() {
    sext_ln181_49_fu_9201_p1 = esl_sext<64,55>(mul_ln181_23_reg_19826.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_501_fu_18693_p1() {
    sext_ln181_501_fu_18693_p1 = esl_sext<64,55>(mul_ln181_249_reg_24346.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_503_fu_18725_p1() {
    sext_ln181_503_fu_18725_p1 = esl_sext<64,55>(mul_ln181_250_reg_24381.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_505_fu_18729_p1() {
    sext_ln181_505_fu_18729_p1 = esl_sext<64,55>(mul_ln181_251_reg_24386.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_507_fu_18761_p1() {
    sext_ln181_507_fu_18761_p1 = esl_sext<64,55>(mul_ln181_252_reg_24401.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_509_fu_18765_p1() {
    sext_ln181_509_fu_18765_p1 = esl_sext<64,55>(mul_ln181_253_reg_24406.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_511_fu_18797_p1() {
    sext_ln181_511_fu_18797_p1 = esl_sext<64,55>(mul_ln181_254_reg_24421.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_513_fu_18801_p1() {
    sext_ln181_513_fu_18801_p1 = esl_sext<64,55>(mul_ln181_255_reg_24426.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_51_fu_9281_p1() {
    sext_ln181_51_fu_9281_p1 = esl_sext<64,55>(mul_ln181_24_reg_19861.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_53_fu_9285_p1() {
    sext_ln181_53_fu_9285_p1 = esl_sext<64,55>(mul_ln181_25_reg_19866.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_55_fu_9365_p1() {
    sext_ln181_55_fu_9365_p1 = esl_sext<64,55>(mul_ln181_26_reg_19901.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_57_fu_9369_p1() {
    sext_ln181_57_fu_9369_p1 = esl_sext<64,55>(mul_ln181_27_reg_19906.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_59_fu_9449_p1() {
    sext_ln181_59_fu_9449_p1 = esl_sext<64,55>(mul_ln181_28_reg_19941.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_5_fu_8277_p1() {
    sext_ln181_5_fu_8277_p1 = esl_sext<64,55>(mul_ln181_1_reg_19386.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_61_fu_9453_p1() {
    sext_ln181_61_fu_9453_p1 = esl_sext<64,55>(mul_ln181_29_reg_19946.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_63_fu_9533_p1() {
    sext_ln181_63_fu_9533_p1 = esl_sext<64,55>(mul_ln181_30_reg_19981.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_65_fu_9537_p1() {
    sext_ln181_65_fu_9537_p1 = esl_sext<64,55>(mul_ln181_31_reg_19986.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_67_fu_9617_p1() {
    sext_ln181_67_fu_9617_p1 = esl_sext<64,55>(mul_ln181_32_reg_20021.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_69_fu_9621_p1() {
    sext_ln181_69_fu_9621_p1 = esl_sext<64,55>(mul_ln181_33_reg_20026.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_71_fu_9701_p1() {
    sext_ln181_71_fu_9701_p1 = esl_sext<64,55>(mul_ln181_34_reg_20061.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_73_fu_9705_p1() {
    sext_ln181_73_fu_9705_p1 = esl_sext<64,55>(mul_ln181_35_reg_20066.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_75_fu_9785_p1() {
    sext_ln181_75_fu_9785_p1 = esl_sext<64,55>(mul_ln181_36_reg_20101.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_77_fu_9789_p1() {
    sext_ln181_77_fu_9789_p1 = esl_sext<64,55>(mul_ln181_37_reg_20106.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_79_fu_9869_p1() {
    sext_ln181_79_fu_9869_p1 = esl_sext<64,55>(mul_ln181_38_reg_20141.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_7_fu_8357_p1() {
    sext_ln181_7_fu_8357_p1 = esl_sext<64,55>(mul_ln181_2_reg_19421.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_81_fu_9873_p1() {
    sext_ln181_81_fu_9873_p1 = esl_sext<64,55>(mul_ln181_39_reg_20146.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_83_fu_9953_p1() {
    sext_ln181_83_fu_9953_p1 = esl_sext<64,55>(mul_ln181_40_reg_20181.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_85_fu_9957_p1() {
    sext_ln181_85_fu_9957_p1 = esl_sext<64,55>(mul_ln181_41_reg_20186.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_87_fu_10037_p1() {
    sext_ln181_87_fu_10037_p1 = esl_sext<64,55>(mul_ln181_42_reg_20221.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_89_fu_10041_p1() {
    sext_ln181_89_fu_10041_p1 = esl_sext<64,55>(mul_ln181_43_reg_20226.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_91_fu_10121_p1() {
    sext_ln181_91_fu_10121_p1 = esl_sext<64,55>(mul_ln181_44_reg_20261.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_93_fu_10125_p1() {
    sext_ln181_93_fu_10125_p1 = esl_sext<64,55>(mul_ln181_45_reg_20266.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_95_fu_10205_p1() {
    sext_ln181_95_fu_10205_p1 = esl_sext<64,55>(mul_ln181_46_reg_20301.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_97_fu_10209_p1() {
    sext_ln181_97_fu_10209_p1 = esl_sext<64,55>(mul_ln181_47_reg_20306.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_99_fu_10289_p1() {
    sext_ln181_99_fu_10289_p1 = esl_sext<64,55>(mul_ln181_48_reg_20341.read());
}

void pqcrystals_dilithium_14::thread_sext_ln181_9_fu_8361_p1() {
    sext_ln181_9_fu_8361_p1 = esl_sext<64,55>(mul_ln181_3_reg_19426.read());
}

void pqcrystals_dilithium_14::thread_tmp_255_fu_8077_p3() {
    tmp_255_fu_8077_p3 = esl_concat<6,8>(add_ln181_fu_8071_p2.read(), ap_const_lv8_0);
}

void pqcrystals_dilithium_14::thread_tmp_260_fu_8031_p3() {
    tmp_260_fu_8031_p3 = esl_concat<3,8>(a_coeffs_offset1.read(), ap_const_lv8_0);
}

void pqcrystals_dilithium_14::thread_tmp_261_fu_8050_p3() {
    tmp_261_fu_8050_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln181_fu_8044_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_262_fu_8106_p3() {
    tmp_262_fu_8106_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln181_1_fu_8101_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_263_fu_8120_p3() {
    tmp_263_fu_8120_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln181_2_fu_8115_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_264_fu_8154_p3() {
    tmp_264_fu_8154_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln181_3_fu_8149_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_265_fu_8168_p3() {
    tmp_265_fu_8168_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln181_4_fu_8163_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_266_fu_8230_p3() {
    tmp_266_fu_8230_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln181_5_fu_8225_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_267_fu_8244_p3() {
    tmp_267_fu_8244_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln181_6_fu_8239_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_268_fu_8314_p3() {
    tmp_268_fu_8314_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln181_7_fu_8309_p2.read());
}

}

