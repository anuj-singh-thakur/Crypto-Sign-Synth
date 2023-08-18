############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project Phase2
set_top pqcrystals_dilithium2_ref
add_files dilithium2/aes.c
add_files dilithium2/aes.h
add_files dilithium2/aes256ctr.c
add_files dilithium2/aes256ctr.h
add_files dilithium2/api.h
add_files dilithium2/config.h
add_files dilithium2/fips202.c
add_files dilithium2/fips202.h
add_files dilithium2/ntt.c
add_files dilithium2/ntt.h
add_files dilithium2/packing.c
add_files dilithium2/packing.h
add_files dilithium2/params.h
add_files dilithium2/poly.c
add_files dilithium2/poly.h
add_files dilithium2/polyvec.c
add_files dilithium2/polyvec.h
add_files dilithium2/randombytes.h
add_files dilithium2/reduce.c
add_files dilithium2/reduce.h
add_files dilithium2/rng.c
add_files dilithium2/rng.h
add_files dilithium2/rounding.c
add_files dilithium2/rounding.h
add_files dilithium2/sign.c
add_files dilithium2/sign.h
add_files dilithium2/symmetric-aes.c
add_files dilithium2/symmetric-shake.c
add_files dilithium2/symmetric.h
add_files -tb dilithium2/PQCgenKAT_sign.c -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
open_solution "Latency"
set_part {xc7a200t-fbg676-2}
create_clock -period 10 -name default
config_sdx -optimization_level none -target none
config_export -vivado_optimization_level 2
set_clock_uncertainty 12.5%
source "./Phase2/Latency/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -rtl verilog -format ip_catalog
