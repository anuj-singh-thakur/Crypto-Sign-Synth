# ==============================================================
# Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
# Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
# ==============================================================
__SIM_FPO__ = 1
__SIM_MATHHLS__ = 1
__SIM_OPENCV__ = 1
__SIM_FFT__ = 1
__SIM_FIR__ = 1
__SIM_DDS__ = 1

TARGET := cosim.pc.exe

AUTOPILOT_ROOT := C:/Xilinx/Vivado/2019.2
AUTOPILOT_MACH := win64

ifdef COSIM_M32
  AUTOPILOT_MACH := lnx32
  IFLAG += -m32
endif
ifdef AP_GCC_M32
  AUTOPILOT_MACH := Linux_x86
  IFLAG += -m32
endif
ifndef AP_GCC_PATH
  AP_GCC_PATH := C:/Xilinx/Vivado/2019.2/tps/win64/msys64/mingw64/bin
endif
AUTOPILOT_TOOL = ${AUTOPILOT_ROOT}/${AUTOPILOT_MACH}/tools
AUTOPILOT_TECH = ${AUTOPILOT_ROOT}/common/technology
CCFLAG += 
TOOLCHAIN += 

IFLAG += -g

IFLAG += -I "${AUTOPILOT_ROOT}/include"
IFLAG += -I "${AUTOPILOT_ROOT}/include/ap_sysc"
IFLAG += -I "${AUTOPILOT_ROOT}/common/technology/generic/SystemC"
IFLAG += -I "${AUTOPILOT_ROOT}/common/technology/generic/SystemC/AESL_FP_comp"
IFLAG += -I "${AUTOPILOT_ROOT}/common/technology/generic/SystemC/AESL_comp"
IFLAG += -I "${AUTOPILOT_ROOT}/${AUTOPILOT_MACH}/tools/systemc/include"
IFLAG += -I "${AUTOPILOT_ROOT}/${AUTOPILOT_MACH}/tools/auto_cc/include"
IFLAG += -D__SIM_FPO__
IFLAG += -D__SIM_OPENCV__
IFLAG += -D__SIM_FFT__
IFLAG += -D__SIM_FIR__
IFLAG += -D__SIM_DDS__
IFLAG += -D__DSP48E1__
IFLAG += -DNT
IFLAG += -Wno-unknown-pragmas
LFLAG += -L "${AUTOPILOT_ROOT}/${AUTOPILOT_MACH}/tools/systemc/lib" -lsystemc -lpthread
IFLAG += -D__RTL_SIMULATION__
IFLAG += -D__xilinx_ip_top=
LFLAG += -Wl,--enable-auto-import
DFLAG += -DAUTOCC
DFLAG += -DAESL_EXTERN_C

include ./Makefile.rules

all : $(TARGET)

AUTOCC := cmd //c apcc.bat

$(ObjDir)/PQCgenKAT_sign.c_pre.c.tb.o : PQCgenKAT_sign.c_pre.c.tb.c $(ObjDir)/.dir
	$(Echo) "   Compiling (apcc) PQCgenKAT_sign.c_pre.c.tb.c" $(AVE_DIR_DLOG)
	$(Verb) $(AUTOCC) -fno-builtin-isinf -fno-builtin-isnan -c $(IFLAG) $(DFLAG) $< -o $@; \

$(ObjDir)/aes.c_pre.c.tb.o : aes.c_pre.c.tb.c $(ObjDir)/.dir
	$(Echo) "   Compiling (apcc) aes.c_pre.c.tb.c" $(AVE_DIR_DLOG)
	$(Verb) $(AUTOCC) -fno-builtin-isinf -fno-builtin-isnan -c $(IFLAG) $(DFLAG) $< -o $@; \

$(ObjDir)/aes256ctr.c_pre.c.tb.o : aes256ctr.c_pre.c.tb.c $(ObjDir)/.dir
	$(Echo) "   Compiling (apcc) aes256ctr.c_pre.c.tb.c" $(AVE_DIR_DLOG)
	$(Verb) $(AUTOCC) -fno-builtin-isinf -fno-builtin-isnan -c $(IFLAG) $(DFLAG) $< -o $@; \

$(ObjDir)/fips202.c_pre.c.tb.o : fips202.c_pre.c.tb.c $(ObjDir)/.dir
	$(Echo) "   Compiling (apcc) fips202.c_pre.c.tb.c" $(AVE_DIR_DLOG)
	$(Verb) $(AUTOCC) -fno-builtin-isinf -fno-builtin-isnan -c $(IFLAG) $(DFLAG) $< -o $@; \

$(ObjDir)/ntt.c_pre.c.tb.o : ntt.c_pre.c.tb.c $(ObjDir)/.dir
	$(Echo) "   Compiling (apcc) ntt.c_pre.c.tb.c" $(AVE_DIR_DLOG)
	$(Verb) $(AUTOCC) -fno-builtin-isinf -fno-builtin-isnan -c $(IFLAG) $(DFLAG) $< -o $@; \

$(ObjDir)/packing.c_pre.c.tb.o : packing.c_pre.c.tb.c $(ObjDir)/.dir
	$(Echo) "   Compiling (apcc) packing.c_pre.c.tb.c" $(AVE_DIR_DLOG)
	$(Verb) $(AUTOCC) -fno-builtin-isinf -fno-builtin-isnan -c $(IFLAG) $(DFLAG) $< -o $@; \

$(ObjDir)/poly.c_pre.c.tb.o : poly.c_pre.c.tb.c $(ObjDir)/.dir
	$(Echo) "   Compiling (apcc) poly.c_pre.c.tb.c" $(AVE_DIR_DLOG)
	$(Verb) $(AUTOCC) -fno-builtin-isinf -fno-builtin-isnan -c $(IFLAG) $(DFLAG) $< -o $@; \

$(ObjDir)/polyvec.c_pre.c.tb.o : polyvec.c_pre.c.tb.c $(ObjDir)/.dir
	$(Echo) "   Compiling (apcc) polyvec.c_pre.c.tb.c" $(AVE_DIR_DLOG)
	$(Verb) $(AUTOCC) -fno-builtin-isinf -fno-builtin-isnan -c $(IFLAG) $(DFLAG) $< -o $@; \

$(ObjDir)/reduce.c_pre.c.tb.o : reduce.c_pre.c.tb.c $(ObjDir)/.dir
	$(Echo) "   Compiling (apcc) reduce.c_pre.c.tb.c" $(AVE_DIR_DLOG)
	$(Verb) $(AUTOCC) -fno-builtin-isinf -fno-builtin-isnan -c $(IFLAG) $(DFLAG) $< -o $@; \

$(ObjDir)/rng.c_pre.c.tb.o : rng.c_pre.c.tb.c $(ObjDir)/.dir
	$(Echo) "   Compiling (apcc) rng.c_pre.c.tb.c" $(AVE_DIR_DLOG)
	$(Verb) $(AUTOCC) -fno-builtin-isinf -fno-builtin-isnan -c $(IFLAG) $(DFLAG) $< -o $@; \

$(ObjDir)/rounding.c_pre.c.tb.o : rounding.c_pre.c.tb.c $(ObjDir)/.dir
	$(Echo) "   Compiling (apcc) rounding.c_pre.c.tb.c" $(AVE_DIR_DLOG)
	$(Verb) $(AUTOCC) -fno-builtin-isinf -fno-builtin-isnan -c $(IFLAG) $(DFLAG) $< -o $@; \

$(ObjDir)/sign.c_pre.c.tb.o : sign.c_pre.c.tb.c $(ObjDir)/.dir
	$(Echo) "   Compiling (apcc) sign.c_pre.c.tb.c" $(AVE_DIR_DLOG)
	$(Verb) $(AUTOCC) -fno-builtin-isinf -fno-builtin-isnan -c $(IFLAG) $(DFLAG) $< -o $@; \

$(ObjDir)/symmetric-aes.c_pre.c.tb.o : symmetric-aes.c_pre.c.tb.c $(ObjDir)/.dir
	$(Echo) "   Compiling (apcc) symmetric-aes.c_pre.c.tb.c" $(AVE_DIR_DLOG)
	$(Verb) $(AUTOCC) -fno-builtin-isinf -fno-builtin-isnan -c $(IFLAG) $(DFLAG) $< -o $@; \

$(ObjDir)/symmetric-shake.c_pre.c.tb.o : symmetric-shake.c_pre.c.tb.c $(ObjDir)/.dir
	$(Echo) "   Compiling (apcc) symmetric-shake.c_pre.c.tb.c" $(AVE_DIR_DLOG)
	$(Verb) $(AUTOCC) -fno-builtin-isinf -fno-builtin-isnan -c $(IFLAG) $(DFLAG) $< -o $@; \
