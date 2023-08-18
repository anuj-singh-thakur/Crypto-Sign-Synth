# ==============================================================
# Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2022.2 (64-bit)
# Tool Version Limit: 2019.12
# Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
# ==============================================================
CSIM_DESIGN = 1

__SIM_FPO__ = 1

__SIM_MATHHLS__ = 1

__SIM_FFT__ = 1

__SIM_FIR__ = 1

__SIM_DDS__ = 1

ObjDir = obj

HLS_SOURCES = ../../../../dilithium2/test/test_dilithium.c ../../../../dilithium2/symmetric-shake.c ../../../../dilithium2/symmetric-aes.c ../../../../dilithium2/sign.c ../../../../dilithium2/rounding.c ../../../../dilithium2/rng.c ../../../../dilithium2/reduce.c ../../../../dilithium2/polyvec.c ../../../../dilithium2/poly.c ../../../../dilithium2/packing.c ../../../../dilithium2/ntt.c ../../../../dilithium2/fips202.c ../../../../dilithium2/aes256ctr.c ../../../../dilithium2/aes.c

override TARGET := csim.exe

AUTOPILOT_ROOT := /home/shikha/Vivado/Vitis_HLS/2022.2
AUTOPILOT_MACH := lnx64
ifdef AP_GCC_M32
  AUTOPILOT_MACH := Linux_x86
  IFLAG += -m32
endif
IFLAG += -fPIC
ifndef AP_GCC_PATH
  AP_GCC_PATH := /home/shikha/Vivado/Vitis_HLS/2022.2/tps/lnx64/gcc-8.3.0/bin
endif
AUTOPILOT_TOOL := ${AUTOPILOT_ROOT}/${AUTOPILOT_MACH}/tools
AP_CLANG_PATH := ${AUTOPILOT_TOOL}/clang-3.9/bin
AUTOPILOT_TECH := ${AUTOPILOT_ROOT}/common/technology


IFLAG += -I "${AUTOPILOT_ROOT}/include"
IFLAG += -I "${AUTOPILOT_ROOT}/include/ap_sysc"
IFLAG += -I "${AUTOPILOT_TECH}/generic/SystemC"
IFLAG += -I "${AUTOPILOT_TECH}/generic/SystemC/AESL_FP_comp"
IFLAG += -I "${AUTOPILOT_TECH}/generic/SystemC/AESL_comp"
IFLAG += -I "${AUTOPILOT_TOOL}/auto_cc/include"
IFLAG += -I "/usr/include/x86_64-linux-gnu"
IFLAG += -D__HLS_COSIM__

IFLAG += -D__HLS_CSIM__

IFLAG += -D__VITIS_HLS__

IFLAG += -D__SIM_FPO__

IFLAG += -D__SIM_FFT__

IFLAG += -D__SIM_FIR__

IFLAG += -D__SIM_DDS__

IFLAG += -D__DSP48E1__
IFLAG += -Wno-unknown-pragmas 
IFLAG += -g
DFLAG += -DAUTOCC
DFLAG += -D__xilinx_ip_top= -DAESL_TB
CCFLAG += -Werror=return-type
CCFLAG += -Wno-abi
TOOLCHAIN += 



include ./Makefile.rules

all: $(TARGET)



AUTOCC := apcc  

$(ObjDir)/test_dilithium.o: ../../../../dilithium2/test/test_dilithium.c $(ObjDir)/.dir
	$(Echo) "   Compiling(apcc) ../../../../dilithium2/test/test_dilithium.c in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(AUTOCC) -c -MMD -Wno-unknown-pragmas -Wno-unknown-pragmas  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/test_dilithium.d

$(ObjDir)/symmetric-shake.o: ../../../../dilithium2/symmetric-shake.c $(ObjDir)/.dir
	$(Echo) "   Compiling(apcc) ../../../../dilithium2/symmetric-shake.c in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(AUTOCC) -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/symmetric-shake.d

$(ObjDir)/symmetric-aes.o: ../../../../dilithium2/symmetric-aes.c $(ObjDir)/.dir
	$(Echo) "   Compiling(apcc) ../../../../dilithium2/symmetric-aes.c in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(AUTOCC) -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/symmetric-aes.d

$(ObjDir)/sign.o: ../../../../dilithium2/sign.c $(ObjDir)/.dir
	$(Echo) "   Compiling(apcc) ../../../../dilithium2/sign.c in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(AUTOCC) -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/sign.d

$(ObjDir)/rounding.o: ../../../../dilithium2/rounding.c $(ObjDir)/.dir
	$(Echo) "   Compiling(apcc) ../../../../dilithium2/rounding.c in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(AUTOCC) -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/rounding.d

$(ObjDir)/rng.o: ../../../../dilithium2/rng.c $(ObjDir)/.dir
	$(Echo) "   Compiling(apcc) ../../../../dilithium2/rng.c in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(AUTOCC) -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/rng.d

$(ObjDir)/reduce.o: ../../../../dilithium2/reduce.c $(ObjDir)/.dir
	$(Echo) "   Compiling(apcc) ../../../../dilithium2/reduce.c in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(AUTOCC) -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/reduce.d

$(ObjDir)/polyvec.o: ../../../../dilithium2/polyvec.c $(ObjDir)/.dir
	$(Echo) "   Compiling(apcc) ../../../../dilithium2/polyvec.c in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(AUTOCC) -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/polyvec.d

$(ObjDir)/poly.o: ../../../../dilithium2/poly.c $(ObjDir)/.dir
	$(Echo) "   Compiling(apcc) ../../../../dilithium2/poly.c in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(AUTOCC) -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/poly.d

$(ObjDir)/packing.o: ../../../../dilithium2/packing.c $(ObjDir)/.dir
	$(Echo) "   Compiling(apcc) ../../../../dilithium2/packing.c in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(AUTOCC) -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/packing.d

$(ObjDir)/ntt.o: ../../../../dilithium2/ntt.c $(ObjDir)/.dir
	$(Echo) "   Compiling(apcc) ../../../../dilithium2/ntt.c in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(AUTOCC) -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/ntt.d

$(ObjDir)/fips202.o: ../../../../dilithium2/fips202.c $(ObjDir)/.dir
	$(Echo) "   Compiling(apcc) ../../../../dilithium2/fips202.c in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(AUTOCC) -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/fips202.d

$(ObjDir)/aes256ctr.o: ../../../../dilithium2/aes256ctr.c $(ObjDir)/.dir
	$(Echo) "   Compiling(apcc) ../../../../dilithium2/aes256ctr.c in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(AUTOCC) -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/aes256ctr.d

$(ObjDir)/aes.o: ../../../../dilithium2/aes.c $(ObjDir)/.dir
	$(Echo) "   Compiling(apcc) ../../../../dilithium2/aes.c in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(AUTOCC) -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/aes.d
