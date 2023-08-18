# This script segment is generated automatically by AutoPilot

# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 9 \
    name rho \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename rho \
    op interface \
    ports { rho_address0 { O 8 vector } rho_ce0 { O 1 bit } rho_we0 { O 1 bit } rho_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'rho'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 10 \
    name t0_vec_coeffs \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename t0_vec_coeffs \
    op interface \
    ports { t0_vec_coeffs_address0 { O 10 vector } t0_vec_coeffs_ce0 { O 1 bit } t0_vec_coeffs_we0 { O 1 bit } t0_vec_coeffs_d0 { O 32 vector } t0_vec_coeffs_address1 { O 10 vector } t0_vec_coeffs_ce1 { O 1 bit } t0_vec_coeffs_we1 { O 1 bit } t0_vec_coeffs_d1 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 't0_vec_coeffs'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 11 \
    name s1_vec_coeffs \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename s1_vec_coeffs \
    op interface \
    ports { s1_vec_coeffs_address0 { O 10 vector } s1_vec_coeffs_ce0 { O 1 bit } s1_vec_coeffs_we0 { O 1 bit } s1_vec_coeffs_d0 { O 32 vector } s1_vec_coeffs_address1 { O 10 vector } s1_vec_coeffs_ce1 { O 1 bit } s1_vec_coeffs_we1 { O 1 bit } s1_vec_coeffs_d1 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 's1_vec_coeffs'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 12 \
    name s2_vec_coeffs \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename s2_vec_coeffs \
    op interface \
    ports { s2_vec_coeffs_address0 { O 10 vector } s2_vec_coeffs_ce0 { O 1 bit } s2_vec_coeffs_we0 { O 1 bit } s2_vec_coeffs_d0 { O 32 vector } s2_vec_coeffs_address1 { O 10 vector } s2_vec_coeffs_ce1 { O 1 bit } s2_vec_coeffs_we1 { O 1 bit } s2_vec_coeffs_d1 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 's2_vec_coeffs'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 13 \
    name sk \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename sk \
    op interface \
    ports { sk_address0 { O 12 vector } sk_ce0 { O 1 bit } sk_q0 { I 8 vector } sk_address1 { O 12 vector } sk_ce1 { O 1 bit } sk_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'sk'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


