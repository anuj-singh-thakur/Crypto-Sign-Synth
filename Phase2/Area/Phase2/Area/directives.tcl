############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
set_directive_inline "keccak_absorb"
set_directive_allocation -limit 1 -type function "keccak_absorb" keccak_absorb
set_directive_inline "keccak_squeezeblocks"
set_directive_allocation -limit 1 -type function "keccak_squeezeblocks" keccak_squeezeblocks
set_directive_unroll -factor 8 "store64/store64_label0"
set_directive_unroll -factor 8 "load64/load64_label1"
set_directive_inline "shake128_squeezeblocks"
set_directive_allocation -limit 1 -type function "shake128_squeezeblocks" shake128_squeezeblocks
set_directive_inline "rej_eta"
set_directive_inline "pqcrystals_dilithium2_ref_poly_uniform_eta"
set_directive_inline "pqcrystals_dilithium2_ref_polyvecl_uniform_eta"
set_directive_inline "pqcrystals_dilithium2_ref_polyveck_uniform_eta"
set_directive_inline "shake256_absorb"
set_directive_allocation -limit 1 -type function "shake256_absorb" shake256_absorb
set_directive_inline "shake256_squeezeblocks"
set_directive_allocation -limit 1 -type function "shake256_squeezeblocks" shake256_squeezeblocks
set_directive_inline "pqcrystals_dilithium2_ref_reduce32"
set_directive_inline "pqcrystals_dilithium2_ref_caddq"
set_directive_inline "pqcrystals_dilithium2_ref_freeze"
set_directive_inline "pqcrystals_dilithium2_ref_polyvecl_ntt"
