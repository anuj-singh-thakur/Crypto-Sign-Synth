# ==============================================================
# Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
# Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
# ==============================================================
CSIM_DESIGN = 1

__SIM_FPO__ = 1

__HLS_FPO_v6_1__ = 1

__SIM_MATHHLS__ = 1

__SIM_OPENCV__ = 1

__SIM_FFT__ = 1

__SIM_FIR__ = 1

__SIM_DDS__ = 1

ObjDir = obj

HLS_SOURCES = ../../../../dilithium2/PQCgenKAT_sign.c ../../../../dilithium2/aes.c ../../../../dilithium2/aes256ctr.c ../../../../dilithium2/fips202.c ../../../../dilithium2/ntt.c ../../../../dilithium2/packing.c ../../../../dilithium2/poly.c ../../../../dilithium2/polyvec.c ../../../../dilithium2/reduce.c ../../../../dilithium2/rng.c ../../../../dilithium2/rounding.c ../../../../dilithium2/sign.c ../../../../dilithium2/symmetric-aes.c ../../../../dilithium2/symmetric-shake.c

TARGET := csim.exe

AUTOPILOT_ROOT := C:/Xilinx/Vivado/2019.2
AUTOPILOT_MACH := win64
ifdef AP_GCC_M32
  AUTOPILOT_MACH := Linux_x86
  IFLAG += -m32
endif
ifndef AP_GCC_PATH
  AP_GCC_PATH := C:/Xilinx/Vivado/2019.2/tps/win64/msys64/mingw64/bin
endif
AUTOPILOT_TOOL := ${AUTOPILOT_ROOT}/${AUTOPILOT_MACH}/tools
AP_CLANG_PATH := ${AUTOPILOT_ROOT}/tps/win64/msys64/mingw64/bin
AUTOPILOT_TECH := ${AUTOPILOT_ROOT}/common/technology


IFLAG += -I "${AUTOPILOT_TOOL}/systemc/include"
IFLAG += -I "${AUTOPILOT_ROOT}/include"
IFLAG += -I "${AUTOPILOT_ROOT}/include/opencv"
IFLAG += -I "${AUTOPILOT_ROOT}/include/ap_sysc"
IFLAG += -I "${AUTOPILOT_TECH}/generic/SystemC"
IFLAG += -I "${AUTOPILOT_TECH}/generic/SystemC/AESL_FP_comp"
IFLAG += -I "${AUTOPILOT_TECH}/generic/SystemC/AESL_comp"
IFLAG += -I "${AUTOPILOT_TOOL}/auto_cc/include"
IFLAG += -D__SIM_FPO__

IFLAG += -D__HLS_FPO_v6_1__

IFLAG += -D__SIM_OPENCV__

IFLAG += -D__SIM_FFT__

IFLAG += -D__SIM_FIR__

IFLAG += -D__SIM_DDS__

IFLAG += -D__DSP48E1__
IFLAG += -Wno-unknown-pragmas 
IFLAG += -g
IFLAG += -DNT
LFLAG += -Wl,--enable-auto-import 
DFLAG += -DAUTOCC
DFLAG += -D__xilinx_ip_top= -DAESL_TB
CCFLAG += 
TOOLCHAIN += 



include ./Makefile.rules

all: $(TARGET)



AUTOCC := cmd //c apcc.bat  

$(ObjDir)/PQCgenKAT_sign.o: ../../../../dilithium2/PQCgenKAT_sign.c $(ObjDir)/.dir
	$(Echo) "   Compiling(apcc) ../../../../dilithium2/PQCgenKAT_sign.c in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(AUTOCC) -c -MMD -Wno-unknown-pragmas -Wno-unknown-pragmas  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/PQCgenKAT_sign.d

$(ObjDir)/aes.o: ../../../../dilithium2/aes.c $(ObjDir)/.dir
	$(Echo) "   Compiling(apcc) ../../../../dilithium2/aes.c in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(AUTOCC) -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/aes.d

$(ObjDir)/aes256ctr.o: ../../../../dilithium2/aes256ctr.c $(ObjDir)/.dir
	$(Echo) "   Compiling(apcc) ../../../../dilithium2/aes256ctr.c in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(AUTOCC) -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/aes256ctr.d

$(ObjDir)/fips202.o: ../../../../dilithium2/fips202.c $(ObjDir)/.dir
	$(Echo) "   Compiling(apcc) ../../../../dilithium2/fips202.c in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(AUTOCC) -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/fips202.d

$(ObjDir)/ntt.o: ../../../../dilithium2/ntt.c $(ObjDir)/.dir
	$(Echo) "   Compiling(apcc) ../../../../dilithium2/ntt.c in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(AUTOCC) -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/ntt.d

$(ObjDir)/packing.o: ../../../../dilithium2/packing.c $(ObjDir)/.dir
	$(Echo) "   Compiling(apcc) ../../../../dilithium2/packing.c in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(AUTOCC) -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/packing.d

$(ObjDir)/poly.o: ../../../../dilithium2/poly.c $(ObjDir)/.dir
	$(Echo) "   Compiling(apcc) ../../../../dilithium2/poly.c in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(AUTOCC) -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/poly.d

$(ObjDir)/polyvec.o: ../../../../dilithium2/polyvec.c $(ObjDir)/.dir
	$(Echo) "   Compiling(apcc) ../../../../dilithium2/polyvec.c in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(AUTOCC) -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/polyvec.d

$(ObjDir)/reduce.o: ../../../../dilithium2/reduce.c $(ObjDir)/.dir
	$(Echo) "   Compiling(apcc) ../../../../dilithium2/reduce.c in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(AUTOCC) -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/reduce.d

$(ObjDir)/rng.o: ../../../../dilithium2/rng.c $(ObjDir)/.dir
	$(Echo) "   Compiling(apcc) ../../../../dilithium2/rng.c in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(AUTOCC) -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/rng.d

$(ObjDir)/rounding.o: ../../../../dilithium2/rounding.c $(ObjDir)/.dir
	$(Echo) "   Compiling(apcc) ../../../../dilithium2/rounding.c in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(AUTOCC) -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/rounding.d

$(ObjDir)/sign.o: ../../../../dilithium2/sign.c $(ObjDir)/.dir
	$(Echo) "   Compiling(apcc) ../../../../dilithium2/sign.c in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(AUTOCC) -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/sign.d

$(ObjDir)/symmetric-aes.o: ../../../../dilithium2/symmetric-aes.c $(ObjDir)/.dir
	$(Echo) "   Compiling(apcc) ../../../../dilithium2/symmetric-aes.c in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(AUTOCC) -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/symmetric-aes.d

$(ObjDir)/symmetric-shake.o: ../../../../dilithium2/symmetric-shake.c $(ObjDir)/.dir
	$(Echo) "   Compiling(apcc) ../../../../dilithium2/symmetric-shake.c in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(AUTOCC) -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/symmetric-shake.d
