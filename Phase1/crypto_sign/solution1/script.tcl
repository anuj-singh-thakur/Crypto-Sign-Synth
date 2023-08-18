############################################################
## This file is generated automatically by Vitis HLS.
## Please DO NOT edit it.
## Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
############################################################
open_project crypto_sign
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
add_files dilithium2/precomp.gp
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
add_files -tb dilithium2/PQCgenKAT_sign.c
add_files -tb dilithium2/test/test_dilithium.c
open_solution "solution1" -flow_target vivado
set_part {xc7a200tfbg676-2}
create_clock -period 50 -name default
#source "./crypto_sign/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
