/* Provide Declarations */
#include <stdarg.h>
#include <setjmp.h>
#include <limits.h>
#ifdef NEED_CBEAPINT
#include <autopilot_cbe.h>
#else
#define aesl_fopen fopen
#define aesl_freopen freopen
#define aesl_tmpfile tmpfile
#endif
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#ifdef __STRICT_ANSI__
#define inline __inline__
#define typeof __typeof__ 
#endif
#define __isoc99_fscanf fscanf
#define __isoc99_sscanf sscanf
#undef ferror
#undef feof
/* get a declaration for alloca */
#if defined(__CYGWIN__) || defined(__MINGW32__)
#define  alloca(x) __builtin_alloca((x))
#define _alloca(x) __builtin_alloca((x))
#elif defined(__APPLE__)
extern void *__builtin_alloca(unsigned long);
#define alloca(x) __builtin_alloca(x)
#define longjmp _longjmp
#define setjmp _setjmp
#elif defined(__sun__)
#if defined(__sparcv9)
extern void *__builtin_alloca(unsigned long);
#else
extern void *__builtin_alloca(unsigned int);
#endif
#define alloca(x) __builtin_alloca(x)
#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__) || defined(__arm__)
#define alloca(x) __builtin_alloca(x)
#elif defined(_MSC_VER)
#define inline _inline
#define alloca(x) _alloca(x)
#else
#include <alloca.h>
#endif

#ifndef __GNUC__  /* Can only support "linkonce" vars with GCC */
#define __attribute__(X)
#endif

#if defined(__GNUC__) && defined(__APPLE_CC__)
#define __EXTERNAL_WEAK__ __attribute__((weak_import))
#elif defined(__GNUC__)
#define __EXTERNAL_WEAK__ __attribute__((weak))
#else
#define __EXTERNAL_WEAK__
#endif

#if defined(__GNUC__) && (defined(__APPLE_CC__) || defined(__CYGWIN__) || defined(__MINGW32__))
#define __ATTRIBUTE_WEAK__
#elif defined(__GNUC__)
#define __ATTRIBUTE_WEAK__ __attribute__((weak))
#else
#define __ATTRIBUTE_WEAK__
#endif

#if defined(__GNUC__)
#define __HIDDEN__ __attribute__((visibility("hidden")))
#endif

#ifdef __GNUC__
#define LLVM_NAN(NanStr)   __builtin_nan(NanStr)   /* Double */
#define LLVM_NANF(NanStr)  __builtin_nanf(NanStr)  /* Float */
#define LLVM_NANS(NanStr)  __builtin_nans(NanStr)  /* Double */
#define LLVM_NANSF(NanStr) __builtin_nansf(NanStr) /* Float */
#define LLVM_INF           __builtin_inf()         /* Double */
#define LLVM_INFF          __builtin_inff()        /* Float */
#define LLVM_PREFETCH(addr,rw,locality) __builtin_prefetch(addr,rw,locality)
#define __ATTRIBUTE_CTOR__ __attribute__((constructor))
#define __ATTRIBUTE_DTOR__ __attribute__((destructor))
#define LLVM_ASM           __asm__
#else
#define LLVM_NAN(NanStr)   ((double)0.0)           /* Double */
#define LLVM_NANF(NanStr)  0.0F                    /* Float */
#define LLVM_NANS(NanStr)  ((double)0.0)           /* Double */
#define LLVM_NANSF(NanStr) 0.0F                    /* Float */
#define LLVM_INF           ((double)0.0)           /* Double */
#define LLVM_INFF          0.0F                    /* Float */
#define LLVM_PREFETCH(addr,rw,locality)            /* PREFETCH */
#define __ATTRIBUTE_CTOR__
#define __ATTRIBUTE_DTOR__
#define LLVM_ASM(X)
#endif

#if __GNUC__ < 4 /* Old GCC's, or compilers not GCC */ 
#define __builtin_stack_save() 0   /* not implemented */
#define __builtin_stack_restore(X) /* noop */
#endif

#if __GNUC__ && __LP64__ /* 128-bit integer types */
typedef int __attribute__((mode(TI))) llvmInt128;
typedef unsigned __attribute__((mode(TI))) llvmUInt128;
#endif

#define CODE_FOR_MAIN() /* Any target-specific code for main()*/

#ifndef __cplusplus
typedef unsigned char bool;
#endif


/* Support for floating point constants */
typedef unsigned long long ConstantDoubleTy;
typedef unsigned int        ConstantFloatTy;
typedef struct { unsigned long long f1; unsigned short f2; unsigned short pad[3]; } ConstantFP80Ty;
typedef struct { unsigned long long f1; unsigned long long f2; } ConstantFP128Ty;


/* Global Declarations */
/* Helper union for bitcasts */
typedef union {
  unsigned int Int32;
  unsigned long long Int64;
  float Float;
  double Double;
} llvmBitCastUnion;
/* Structure forward decls */
typedef struct l_struct_OC_aes256ctr_ctx l_struct_OC_aes256ctr_ctx;

/* Structure contents */
struct l_struct_OC_aes256ctr_ctx {
  signed long long field0[120];
  signed int field1[16];
};


/* External Global Variable Declarations */

/* Function Declarations */
double fmod(double, double);
float fmodf(float, float);
long double fmodl(long double, long double);
void pqcrystals_aes256ctr_ref_prf( char *llvm_cbe_out, signed long long llvm_cbe_outlen,  char *llvm_cbe_key,  char *llvm_cbe_nonce);
static void aesl_internal_br_aes_ct64_ctr_init(signed long long *llvm_cbe_sk_exp,  char *llvm_cbe_key);
static void aesl_internal_br_aes_ct64_ctr_run(signed long long *llvm_cbe_sk_exp,  char *llvm_cbe_iv,  char *llvm_cbe_data, signed long long llvm_cbe_len);
void pqcrystals_aes256ctr_ref_init(l_struct_OC_aes256ctr_ctx *llvm_cbe_s,  char *llvm_cbe_key,  char *llvm_cbe_nonce);
static void aesl_internal_br_range_dec32le(signed int *llvm_cbe_v, signed long long llvm_cbe_num,  char *llvm_cbe_src);
static signed int aesl_internal_br_swap32(signed int llvm_cbe_x);
void pqcrystals_aes256ctr_ref_squeezeblocks( char *llvm_cbe_out, signed long long llvm_cbe_nblocks, l_struct_OC_aes256ctr_ctx *llvm_cbe_s);
static void aesl_internal_aes_ctr4x( char *llvm_cbe_out, signed int *llvm_cbe_ivw, signed long long *llvm_cbe_sk_exp);
static void aesl_internal_br_aes_ct64_interleave_in(signed long long *llvm_cbe_q0, signed long long *llvm_cbe_q1, signed int *llvm_cbe_w);
static void aesl_internal_br_aes_ct64_ortho(signed long long *llvm_cbe_q);
static void aesl_internal_add_round_key(signed long long *llvm_cbe_q, signed long long *llvm_cbe_sk);
static void aesl_internal_br_aes_ct64_bitslice_Sbox(signed long long *llvm_cbe_q);
static void aesl_internal_shift_rows(signed long long *llvm_cbe_q);
static void aesl_internal_mix_columns(signed long long *llvm_cbe_q);
static void aesl_internal_br_aes_ct64_interleave_out(signed int *llvm_cbe_w, signed long long llvm_cbe_q0, signed long long llvm_cbe_q1);
static void aesl_internal_br_range_enc32le( char *llvm_cbe_dst, signed int *llvm_cbe_v);
static void aesl_internal_inc4_be(signed int *llvm_cbe_x);
static void aesl_internal_br_enc32le( char *llvm_cbe_dst, signed int llvm_cbe_x);
static signed long long aesl_internal_rotr32(signed long long llvm_cbe_x);
static signed int aesl_internal_br_dec32le( char *llvm_cbe_src);
static void aesl_internal_br_aes_ct64_keysched(signed long long *llvm_cbe_comp_skey,  char *llvm_cbe_key);
static void aesl_internal_br_aes_ct64_skey_expand(signed long long *llvm_cbe_skey, signed long long *llvm_cbe_comp_skey);
static signed int aesl_internal_sub_word(signed int llvm_cbe_x);


/* Global Variable Definitions and Initialization */
static  char aesl_internal_Rcon[10] = { ((unsigned char )1), ((unsigned char )2), ((unsigned char )4), ((unsigned char )8), ((unsigned char )16), ((unsigned char )32), ((unsigned char )64), ((unsigned char )128u), ((unsigned char )27), ((unsigned char )54) };


/* Function Bodies */
static inline int llvm_fcmp_ord(double X, double Y) { return X == X && Y == Y; }
static inline int llvm_fcmp_uno(double X, double Y) { return X != X || Y != Y; }
static inline int llvm_fcmp_ueq(double X, double Y) { return X == Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_une(double X, double Y) { return X != Y; }
static inline int llvm_fcmp_ult(double X, double Y) { return X <  Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_ugt(double X, double Y) { return X >  Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_ule(double X, double Y) { return X <= Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_uge(double X, double Y) { return X >= Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_oeq(double X, double Y) { return X == Y ; }
static inline int llvm_fcmp_one(double X, double Y) { return X != Y && llvm_fcmp_ord(X, Y); }
static inline int llvm_fcmp_olt(double X, double Y) { return X <  Y ; }
static inline int llvm_fcmp_ogt(double X, double Y) { return X >  Y ; }
static inline int llvm_fcmp_ole(double X, double Y) { return X <= Y ; }
static inline int llvm_fcmp_oge(double X, double Y) { return X >= Y ; }

void pqcrystals_aes256ctr_ref_prf( char *llvm_cbe_out, signed long long llvm_cbe_outlen,  char *llvm_cbe_key,  char *llvm_cbe_nonce) {
  static  unsigned long long aesl_llvm_cbe_sk_exp_count = 0;
  signed long long llvm_cbe_sk_exp[120];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_3_count = 0;
  static  unsigned long long aesl_llvm_cbe_4_count = 0;
  static  unsigned long long aesl_llvm_cbe_5_count = 0;
  static  unsigned long long aesl_llvm_cbe_6_count = 0;
  static  unsigned long long aesl_llvm_cbe_7_count = 0;
  static  unsigned long long aesl_llvm_cbe_8_count = 0;
  static  unsigned long long aesl_llvm_cbe_9_count = 0;
  signed long long *llvm_cbe_tmp__1;
  static  unsigned long long aesl_llvm_cbe_10_count = 0;
  static  unsigned long long aesl_llvm_cbe_11_count = 0;
  static  unsigned long long aesl_llvm_cbe_12_count = 0;
  static  unsigned long long aesl_llvm_cbe_13_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_aes256ctr_ref_prf\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds [120 x i64]* %%sk_exp, i64 0, i64 0, !dbg !19 for 0x%I64xth hint within @pqcrystals_aes256ctr_ref_prf  --> \n", ++aesl_llvm_cbe_9_count);
  llvm_cbe_tmp__1 = (signed long long *)(&llvm_cbe_sk_exp[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 120
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call fastcc void @aesl_internal_br_aes_ct64_ctr_init(i64* %%1, i8* %%key), !dbg !19 for 0x%I64xth hint within @pqcrystals_aes256ctr_ref_prf  --> \n", ++aesl_llvm_cbe_11_count);
  aesl_internal_br_aes_ct64_ctr_init((signed long long *)llvm_cbe_tmp__1, ( char *)llvm_cbe_key);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call fastcc void @aesl_internal_br_aes_ct64_ctr_run(i64* %%1, i8* %%nonce, i8* %%out, i64 %%outlen), !dbg !18 for 0x%I64xth hint within @pqcrystals_aes256ctr_ref_prf  --> \n", ++aesl_llvm_cbe_12_count);
  aesl_internal_br_aes_ct64_ctr_run((signed long long *)llvm_cbe_tmp__1, ( char *)llvm_cbe_nonce, ( char *)llvm_cbe_out, llvm_cbe_outlen);
if (AESL_DEBUG_TRACE) {
printf("\nArgument outlen = 0x%I64X",llvm_cbe_outlen);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_aes256ctr_ref_prf}\n");
  return;
}


static void aesl_internal_br_aes_ct64_ctr_init(signed long long *llvm_cbe_sk_exp,  char *llvm_cbe_key) {
  static  unsigned long long aesl_llvm_cbe_skey_count = 0;
  signed long long llvm_cbe_skey[30];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_14_count = 0;
  static  unsigned long long aesl_llvm_cbe_15_count = 0;
  static  unsigned long long aesl_llvm_cbe_16_count = 0;
  static  unsigned long long aesl_llvm_cbe_17_count = 0;
  static  unsigned long long aesl_llvm_cbe_18_count = 0;
  signed long long *llvm_cbe_tmp__2;
  static  unsigned long long aesl_llvm_cbe_19_count = 0;
  static  unsigned long long aesl_llvm_cbe_20_count = 0;
  static  unsigned long long aesl_llvm_cbe_21_count = 0;
  static  unsigned long long aesl_llvm_cbe_22_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @aesl_internal_br_aes_ct64_ctr_init\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds [30 x i64]* %%skey, i64 0, i64 0, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ctr_init  --> \n", ++aesl_llvm_cbe_18_count);
  llvm_cbe_tmp__2 = (signed long long *)(&llvm_cbe_skey[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 30
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call fastcc void @aesl_internal_br_aes_ct64_keysched(i64* %%1, i8* %%key), !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ctr_init  --> \n", ++aesl_llvm_cbe_20_count);
  aesl_internal_br_aes_ct64_keysched((signed long long *)llvm_cbe_tmp__2, ( char *)llvm_cbe_key);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call fastcc void @aesl_internal_br_aes_ct64_skey_expand(i64* %%sk_exp, i64* %%1), !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ctr_init  --> \n", ++aesl_llvm_cbe_21_count);
  aesl_internal_br_aes_ct64_skey_expand((signed long long *)llvm_cbe_sk_exp, (signed long long *)llvm_cbe_tmp__2);
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @aesl_internal_br_aes_ct64_ctr_init}\n");
  return;
}


static void aesl_internal_br_aes_ct64_ctr_run(signed long long *llvm_cbe_sk_exp,  char *llvm_cbe_iv,  char *llvm_cbe_data, signed long long llvm_cbe_len) {
  static  unsigned long long aesl_llvm_cbe_ivw_count = 0;
  signed int llvm_cbe_ivw[16];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_tmp_count = 0;
   char llvm_cbe_tmp[64];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_23_count = 0;
  static  unsigned long long aesl_llvm_cbe_24_count = 0;
  static  unsigned long long aesl_llvm_cbe_25_count = 0;
  static  unsigned long long aesl_llvm_cbe_26_count = 0;
  static  unsigned long long aesl_llvm_cbe_27_count = 0;
  static  unsigned long long aesl_llvm_cbe_28_count = 0;
  static  unsigned long long aesl_llvm_cbe_29_count = 0;
  static  unsigned long long aesl_llvm_cbe_30_count = 0;
  static  unsigned long long aesl_llvm_cbe_31_count = 0;
  static  unsigned long long aesl_llvm_cbe_32_count = 0;
  static  unsigned long long aesl_llvm_cbe_33_count = 0;
  static  unsigned long long aesl_llvm_cbe_34_count = 0;
  static  unsigned long long aesl_llvm_cbe_35_count = 0;
  static  unsigned long long aesl_llvm_cbe_36_count = 0;
  static  unsigned long long aesl_llvm_cbe_37_count = 0;
  static  unsigned long long aesl_llvm_cbe_38_count = 0;
  static  unsigned long long aesl_llvm_cbe_39_count = 0;
  static  unsigned long long aesl_llvm_cbe_40_count = 0;
  static  unsigned long long aesl_llvm_cbe_41_count = 0;
  static  unsigned long long aesl_llvm_cbe_42_count = 0;
  signed int *llvm_cbe_tmp__3;
  static  unsigned long long aesl_llvm_cbe_43_count = 0;
  static  unsigned long long aesl_llvm_cbe_44_count = 0;
  static  unsigned long long aesl_llvm_cbe_45_count = 0;
  signed int *llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_46_count = 0;
   char *llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_47_count = 0;
   char *llvm_cbe_tmp__6;
  static  unsigned long long aesl_llvm_cbe_48_count = 0;
   char *llvm_cbe_tmp__7;
  static  unsigned long long aesl_llvm_cbe_49_count = 0;
  signed int *llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_50_count = 0;
   char *llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_51_count = 0;
   char *llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_52_count = 0;
  signed int *llvm_cbe_tmp__11;
  static  unsigned long long aesl_llvm_cbe_53_count = 0;
   char *llvm_cbe_tmp__12;
  static  unsigned long long aesl_llvm_cbe_54_count = 0;
   char *llvm_cbe_tmp__13;
  static  unsigned long long aesl_llvm_cbe_55_count = 0;
  unsigned int llvm_cbe_tmp__14;
  static  unsigned long long aesl_llvm_cbe_56_count = 0;
  signed int *llvm_cbe_tmp__15;
  static  unsigned long long aesl_llvm_cbe_57_count = 0;
  static  unsigned long long aesl_llvm_cbe_58_count = 0;
  unsigned int llvm_cbe_tmp__16;
  static  unsigned long long aesl_llvm_cbe_59_count = 0;
  signed int *llvm_cbe_tmp__17;
  static  unsigned long long aesl_llvm_cbe_60_count = 0;
  static  unsigned long long aesl_llvm_cbe_61_count = 0;
  unsigned int llvm_cbe_tmp__18;
  static  unsigned long long aesl_llvm_cbe_62_count = 0;
  signed int *llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_63_count = 0;
  static  unsigned long long aesl_llvm_cbe_64_count = 0;
  unsigned int llvm_cbe_tmp__20;
  static  unsigned long long aesl_llvm_cbe_65_count = 0;
  signed int *llvm_cbe_tmp__21;
  static  unsigned long long aesl_llvm_cbe_66_count = 0;
  static  unsigned long long aesl_llvm_cbe_67_count = 0;
  static  unsigned long long aesl_llvm_cbe_68_count = 0;
  static  unsigned long long aesl_llvm_cbe__2e_rec_count = 0;
  unsigned long long llvm_cbe__2e_rec;
  unsigned long long llvm_cbe__2e_rec__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_69_count = 0;
  unsigned long long llvm_cbe_tmp__22;
  unsigned long long llvm_cbe_tmp__22__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_70_count = 0;
   char *llvm_cbe_tmp__23;
  static  unsigned long long aesl_llvm_cbe_71_count = 0;
  static  unsigned long long aesl_llvm_cbe__2e_rec7_count = 0;
  unsigned long long llvm_cbe__2e_rec7;
  static  unsigned long long aesl_llvm_cbe_72_count = 0;
   char *llvm_cbe_tmp__24;
  static  unsigned long long aesl_llvm_cbe_73_count = 0;
  static  unsigned long long aesl_llvm_cbe_74_count = 0;
  static  unsigned long long aesl_llvm_cbe_75_count = 0;
  static  unsigned long long aesl_llvm_cbe_76_count = 0;
  static  unsigned long long aesl_llvm_cbe_77_count = 0;
  unsigned long long llvm_cbe_tmp__25;
  static  unsigned long long aesl_llvm_cbe_78_count = 0;
  static  unsigned long long aesl_llvm_cbe_79_count = 0;
  static  unsigned long long aesl_llvm_cbe_80_count = 0;
  static  unsigned long long aesl_llvm_cbe_81_count = 0;
  static  unsigned long long aesl_llvm_cbe_82_count = 0;
  static  unsigned long long aesl_llvm_cbe_83_count = 0;
  static  unsigned long long aesl_llvm_cbe_84_count = 0;
  static  unsigned long long aesl_llvm_cbe__2e_lcssa2_count = 0;
   char *llvm_cbe__2e_lcssa2;
   char *llvm_cbe__2e_lcssa2__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe__2e_lcssa_count = 0;
  unsigned long long llvm_cbe__2e_lcssa;
  unsigned long long llvm_cbe__2e_lcssa__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_85_count = 0;
  static  unsigned long long aesl_llvm_cbe_86_count = 0;
  static  unsigned long long aesl_llvm_cbe_87_count = 0;
  static  unsigned long long aesl_llvm_cbe_88_count = 0;
   char *llvm_cbe_tmp__26;
  static  unsigned long long aesl_llvm_cbe_89_count = 0;
  static  unsigned long long aesl_llvm_cbe_90_count = 0;
  static  unsigned long long aesl_llvm_cbe_91_count = 0;
  static  unsigned long long aesl_llvm_cbe_92_count = 0;
  static  unsigned long long aesl_llvm_cbe_93_count = 0;
  static  unsigned long long aesl_llvm_cbe_94_count = 0;
  static  unsigned long long aesl_llvm_cbe_95_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned long long llvm_cbe_storemerge1;
  unsigned long long llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_96_count = 0;
   char *llvm_cbe_tmp__27;
  static  unsigned long long aesl_llvm_cbe_97_count = 0;
  unsigned char llvm_cbe_tmp__28;
  static  unsigned long long aesl_llvm_cbe_98_count = 0;
   char *llvm_cbe_tmp__29;
  static  unsigned long long aesl_llvm_cbe_99_count = 0;
  static  unsigned long long aesl_llvm_cbe_100_count = 0;
  unsigned long long llvm_cbe_tmp__30;
  static  unsigned long long aesl_llvm_cbe_101_count = 0;
  static  unsigned long long aesl_llvm_cbe_102_count = 0;
  static  unsigned long long aesl_llvm_cbe_103_count = 0;
  static  unsigned long long aesl_llvm_cbe_104_count = 0;
  static  unsigned long long aesl_llvm_cbe_105_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_106_count = 0;
  static  unsigned long long aesl_llvm_cbe_107_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @aesl_internal_br_aes_ct64_ctr_run\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds [16 x i32]* %%ivw, i64 0, i64 0, !dbg !21 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ctr_run  --> \n", ++aesl_llvm_cbe_42_count);
  llvm_cbe_tmp__3 = (signed int *)(&llvm_cbe_ivw[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call fastcc void @aesl_internal_br_range_dec32le(i32* %%1, i64 3, i8* %%iv), !dbg !21 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ctr_run  --> \n", ++aesl_llvm_cbe_44_count);
  aesl_internal_br_range_dec32le((signed int *)llvm_cbe_tmp__3, 3ull, ( char *)llvm_cbe_iv);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",3ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds [16 x i32]* %%ivw, i64 0, i64 4, !dbg !21 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ctr_run  --> \n", ++aesl_llvm_cbe_45_count);
  llvm_cbe_tmp__4 = (signed int *)(&llvm_cbe_ivw[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = bitcast i32* %%2 to i8*, !dbg !21 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ctr_run  --> \n", ++aesl_llvm_cbe_46_count);
  llvm_cbe_tmp__5 = ( char *)(( char *)llvm_cbe_tmp__4);
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = bitcast [16 x i32]* %%ivw to i8*, !dbg !21 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ctr_run  --> \n", ++aesl_llvm_cbe_47_count);
  llvm_cbe_tmp__6 = ( char *)(( char *)(&llvm_cbe_ivw));
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = call i8* @memcpy(i8* %%3, i8* %%4, i64 12 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ctr_run  --> \n", ++aesl_llvm_cbe_48_count);
  ( char *)memcpy(( char *)llvm_cbe_tmp__5, ( char *)llvm_cbe_tmp__6, 12ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",12ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__7);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds [16 x i32]* %%ivw, i64 0, i64 8, !dbg !21 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ctr_run  --> \n", ++aesl_llvm_cbe_49_count);
  llvm_cbe_tmp__8 = (signed int *)(&llvm_cbe_ivw[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = bitcast i32* %%6 to i8*, !dbg !21 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ctr_run  --> \n", ++aesl_llvm_cbe_50_count);
  llvm_cbe_tmp__9 = ( char *)(( char *)llvm_cbe_tmp__8);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = call i8* @memcpy(i8* %%7, i8* %%4, i64 12 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ctr_run  --> \n", ++aesl_llvm_cbe_51_count);
  ( char *)memcpy(( char *)llvm_cbe_tmp__9, ( char *)llvm_cbe_tmp__6, 12ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",12ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__10);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds [16 x i32]* %%ivw, i64 0, i64 12, !dbg !21 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ctr_run  --> \n", ++aesl_llvm_cbe_52_count);
  llvm_cbe_tmp__11 = (signed int *)(&llvm_cbe_ivw[(((signed long long )12ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = bitcast i32* %%9 to i8*, !dbg !21 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ctr_run  --> \n", ++aesl_llvm_cbe_53_count);
  llvm_cbe_tmp__12 = ( char *)(( char *)llvm_cbe_tmp__11);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = call i8* @memcpy(i8* %%10, i8* %%4, i64 12 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ctr_run  --> \n", ++aesl_llvm_cbe_54_count);
  ( char *)memcpy(( char *)llvm_cbe_tmp__12, ( char *)llvm_cbe_tmp__6, 12ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",12ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__13);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = call fastcc i32 @aesl_internal_br_swap32(i32 0), !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ctr_run  --> \n", ++aesl_llvm_cbe_55_count);
  llvm_cbe_tmp__14 = (unsigned int )aesl_internal_br_swap32(0u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",0u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__14);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds [16 x i32]* %%ivw, i64 0, i64 3, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ctr_run  --> \n", ++aesl_llvm_cbe_56_count);
  llvm_cbe_tmp__15 = (signed int *)(&llvm_cbe_ivw[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )3ull) < 16 && "Write access out of array 'ivw' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%12, i32* %%13, align 4, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ctr_run  --> \n", ++aesl_llvm_cbe_57_count);
  *llvm_cbe_tmp__15 = llvm_cbe_tmp__14;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__14);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = call fastcc i32 @aesl_internal_br_swap32(i32 1), !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ctr_run  --> \n", ++aesl_llvm_cbe_58_count);
  llvm_cbe_tmp__16 = (unsigned int )aesl_internal_br_swap32(1u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",1u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__16);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds [16 x i32]* %%ivw, i64 0, i64 7, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ctr_run  --> \n", ++aesl_llvm_cbe_59_count);
  llvm_cbe_tmp__17 = (signed int *)(&llvm_cbe_ivw[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )7ull) < 16 && "Write access out of array 'ivw' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%14, i32* %%15, align 4, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ctr_run  --> \n", ++aesl_llvm_cbe_60_count);
  *llvm_cbe_tmp__17 = llvm_cbe_tmp__16;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__16);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = call fastcc i32 @aesl_internal_br_swap32(i32 2), !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ctr_run  --> \n", ++aesl_llvm_cbe_61_count);
  llvm_cbe_tmp__18 = (unsigned int )aesl_internal_br_swap32(2u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",2u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__18);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = getelementptr inbounds [16 x i32]* %%ivw, i64 0, i64 11, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ctr_run  --> \n", ++aesl_llvm_cbe_62_count);
  llvm_cbe_tmp__19 = (signed int *)(&llvm_cbe_ivw[(((signed long long )11ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )11ull) < 16 && "Write access out of array 'ivw' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%16, i32* %%17, align 4, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ctr_run  --> \n", ++aesl_llvm_cbe_63_count);
  *llvm_cbe_tmp__19 = llvm_cbe_tmp__18;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__18);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = call fastcc i32 @aesl_internal_br_swap32(i32 3), !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ctr_run  --> \n", ++aesl_llvm_cbe_64_count);
  llvm_cbe_tmp__20 = (unsigned int )aesl_internal_br_swap32(3u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",3u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__20);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = getelementptr inbounds [16 x i32]* %%ivw, i64 0, i64 15, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ctr_run  --> \n", ++aesl_llvm_cbe_65_count);
  llvm_cbe_tmp__21 = (signed int *)(&llvm_cbe_ivw[(((signed long long )15ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )15ull) < 16 && "Write access out of array 'ivw' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%18, i32* %%19, align 4, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ctr_run  --> \n", ++aesl_llvm_cbe_66_count);
  *llvm_cbe_tmp__21 = llvm_cbe_tmp__20;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__20);
  if ((((unsigned long long )llvm_cbe_len&18446744073709551615ULL) > ((unsigned long long )64ull&18446744073709551615ULL))) {
    llvm_cbe__2e_rec__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    llvm_cbe_tmp__22__PHI_TEMPORARY = (unsigned long long )llvm_cbe_len;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph3;
  } else {
    llvm_cbe__2e_lcssa2__PHI_TEMPORARY = ( char *)llvm_cbe_data;   /* for PHI node */
    llvm_cbe__2e_lcssa__PHI_TEMPORARY = (unsigned long long )llvm_cbe_len;   /* for PHI node */
    goto llvm_cbe__2e__crit_edge;
  }

  do {     /* Syntactic loop '.lr.ph3' to make GCC happy */
llvm_cbe__2e_lr_2e_ph3:
if (AESL_DEBUG_TRACE)
printf("\n  %%.rec = phi i64 [ %%.rec7, %%.lr.ph3 ], [ 0, %%0  for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ctr_run  --> \n", ++aesl_llvm_cbe__2e_rec_count);
  llvm_cbe__2e_rec = (unsigned long long )llvm_cbe__2e_rec__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n.rec = 0x%I64X",llvm_cbe__2e_rec);
printf("\n.rec7 = 0x%I64X",llvm_cbe__2e_rec7);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = phi i64 [ %%24, %%.lr.ph3 ], [ %%len, %%0  for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ctr_run  --> \n", ++aesl_llvm_cbe_69_count);
  llvm_cbe_tmp__22 = (unsigned long long )llvm_cbe_tmp__22__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",llvm_cbe_tmp__22);
printf("\n = 0x%I64X",llvm_cbe_tmp__25);
printf("\nlen = 0x%I64X",llvm_cbe_len);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = getelementptr i8* %%data, i64 %%.re for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ctr_run  --> \n", ++aesl_llvm_cbe_70_count);
  llvm_cbe_tmp__23 = ( char *)(&llvm_cbe_data[(((signed long long )llvm_cbe__2e_rec))]);
if (AESL_DEBUG_TRACE) {
printf("\n.rec = 0x%I64X",((signed long long )llvm_cbe__2e_rec));
}
if (AESL_DEBUG_TRACE)
printf("\n  call fastcc void @aesl_internal_aes_ctr4x(i8* %%22, i32* %%1, i64* %%sk_exp), !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ctr_run  --> \n", ++aesl_llvm_cbe_71_count);
  aesl_internal_aes_ctr4x(( char *)llvm_cbe_tmp__23, (signed int *)llvm_cbe_tmp__3, (signed long long *)llvm_cbe_sk_exp);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%.rec7 = add i64 %%.rec, 64, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ctr_run  --> \n", ++aesl_llvm_cbe__2e_rec7_count);
  llvm_cbe__2e_rec7 = (unsigned long long )((unsigned long long )(llvm_cbe__2e_rec&18446744073709551615ull)) + ((unsigned long long )(64ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n.rec7 = 0x%I64X\n", ((unsigned long long )(llvm_cbe__2e_rec7&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = getelementptr inbounds i8* %%data, i64 %%.rec7, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ctr_run  --> \n", ++aesl_llvm_cbe_72_count);
  llvm_cbe_tmp__24 = ( char *)(&llvm_cbe_data[(((signed long long )llvm_cbe__2e_rec7))]);
if (AESL_DEBUG_TRACE) {
printf("\n.rec7 = 0x%I64X",((signed long long )llvm_cbe__2e_rec7));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = add i64 %%21, -64, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ctr_run  --> \n", ++aesl_llvm_cbe_77_count);
  llvm_cbe_tmp__25 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__22&18446744073709551615ull)) + ((unsigned long long )(18446744073709551552ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__25&18446744073709551615ull)));
  if ((((unsigned long long )llvm_cbe_tmp__25&18446744073709551615ULL) > ((unsigned long long )64ull&18446744073709551615ULL))) {
    llvm_cbe__2e_rec__PHI_TEMPORARY = (unsigned long long )llvm_cbe__2e_rec7;   /* for PHI node */
    llvm_cbe_tmp__22__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__25;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph3;
  } else {
    llvm_cbe__2e_lcssa2__PHI_TEMPORARY = ( char *)llvm_cbe_tmp__24;   /* for PHI node */
    llvm_cbe__2e_lcssa__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__25;   /* for PHI node */
    goto llvm_cbe__2e__crit_edge;
  }

  } while (1); /* end of syntactic loop '.lr.ph3' */
llvm_cbe__2e__crit_edge:
if (AESL_DEBUG_TRACE)
printf("\n  %%.lcssa2 = phi i8* [ %%data, %%0 ], [ %%23, %%.lr.ph3  for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ctr_run  --> \n", ++aesl_llvm_cbe__2e_lcssa2_count);
  llvm_cbe__2e_lcssa2 = ( char *)llvm_cbe__2e_lcssa2__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE)
printf("\n  %%.lcssa = phi i64 [ %%len, %%0 ], [ %%24, %%.lr.ph3  for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ctr_run  --> \n", ++aesl_llvm_cbe__2e_lcssa_count);
  llvm_cbe__2e_lcssa = (unsigned long long )llvm_cbe__2e_lcssa__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n.lcssa = 0x%I64X",llvm_cbe__2e_lcssa);
printf("\nlen = 0x%I64X",llvm_cbe_len);
printf("\n = 0x%I64X",llvm_cbe_tmp__25);
}
  if (((llvm_cbe__2e_lcssa&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e_loopexit;
  } else {
    goto llvm_cbe__2e_lr_2e_ph;
  }

llvm_cbe__2e_lr_2e_ph:
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = getelementptr inbounds [64 x i8]* %%tmp, i64 0, i64 0, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ctr_run  --> \n", ++aesl_llvm_cbe_88_count);
  llvm_cbe_tmp__26 = ( char *)(&llvm_cbe_tmp[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 64
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call fastcc void @aesl_internal_aes_ctr4x(i8* %%27, i32* %%1, i64* %%sk_exp), !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ctr_run  --> \n", ++aesl_llvm_cbe_89_count);
  aesl_internal_aes_ctr4x(( char *)llvm_cbe_tmp__26, (signed int *)llvm_cbe_tmp__3, (signed long long *)llvm_cbe_sk_exp);
if (AESL_DEBUG_TRACE) {
}
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  goto llvm_cbe_tmp__31;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__31:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i64 [ 0, %%.lr.ph ], [ %%32, %%28  for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ctr_run  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned long long )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%I64X",llvm_cbe_storemerge1);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__30);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = getelementptr inbounds [64 x i8]* %%tmp, i64 0, i64 %%storemerge1, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ctr_run  --> \n", ++aesl_llvm_cbe_96_count);
  llvm_cbe_tmp__27 = ( char *)(&llvm_cbe_tmp[(((signed long long )llvm_cbe_storemerge1))
#ifdef AESL_BC_SIM
 % 64
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%I64X",((signed long long )llvm_cbe_storemerge1));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_storemerge1) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'tmp' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = load i8* %%29, align 1, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ctr_run  --> \n", ++aesl_llvm_cbe_97_count);
  llvm_cbe_tmp__28 = (unsigned char )*llvm_cbe_tmp__27;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__28);
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = getelementptr inbounds i8* %%.lcssa2, i64 %%storemerge1, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ctr_run  --> \n", ++aesl_llvm_cbe_98_count);
  llvm_cbe_tmp__29 = ( char *)(&llvm_cbe__2e_lcssa2[(((signed long long )llvm_cbe_storemerge1))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%I64X",((signed long long )llvm_cbe_storemerge1));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%30, i8* %%31, align 1, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ctr_run  --> \n", ++aesl_llvm_cbe_99_count);
  *llvm_cbe_tmp__29 = llvm_cbe_tmp__28;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__28);
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = add i64 %%storemerge1, 1, !dbg !22 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ctr_run  --> \n", ++aesl_llvm_cbe_100_count);
  llvm_cbe_tmp__30 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__30&18446744073709551615ull)));
  if (((llvm_cbe_tmp__30&18446744073709551615ULL) == (llvm_cbe__2e_lcssa&18446744073709551615ULL))) {
    goto llvm_cbe__2e_loopexit;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__30;   /* for PHI node */
    goto llvm_cbe_tmp__31;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e_loopexit:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @aesl_internal_br_aes_ct64_ctr_run}\n");
  return;
}


void pqcrystals_aes256ctr_ref_init(l_struct_OC_aes256ctr_ctx *llvm_cbe_s,  char *llvm_cbe_key,  char *llvm_cbe_nonce) {
  static  unsigned long long aesl_llvm_cbe_108_count = 0;
  static  unsigned long long aesl_llvm_cbe_109_count = 0;
  static  unsigned long long aesl_llvm_cbe_110_count = 0;
  static  unsigned long long aesl_llvm_cbe_111_count = 0;
  static  unsigned long long aesl_llvm_cbe_112_count = 0;
  static  unsigned long long aesl_llvm_cbe_113_count = 0;
  static  unsigned long long aesl_llvm_cbe_114_count = 0;
  static  unsigned long long aesl_llvm_cbe_115_count = 0;
  static  unsigned long long aesl_llvm_cbe_116_count = 0;
  static  unsigned long long aesl_llvm_cbe_117_count = 0;
  static  unsigned long long aesl_llvm_cbe_118_count = 0;
  static  unsigned long long aesl_llvm_cbe_119_count = 0;
  static  unsigned long long aesl_llvm_cbe_120_count = 0;
  static  unsigned long long aesl_llvm_cbe_121_count = 0;
  static  unsigned long long aesl_llvm_cbe_122_count = 0;
  static  unsigned long long aesl_llvm_cbe_123_count = 0;
  static  unsigned long long aesl_llvm_cbe_124_count = 0;
  signed long long *llvm_cbe_tmp__32;
  static  unsigned long long aesl_llvm_cbe_125_count = 0;
  static  unsigned long long aesl_llvm_cbe_126_count = 0;
  static  unsigned long long aesl_llvm_cbe_127_count = 0;
  signed int *llvm_cbe_tmp__33;
  static  unsigned long long aesl_llvm_cbe_128_count = 0;
  static  unsigned long long aesl_llvm_cbe_129_count = 0;
  signed int *llvm_cbe_tmp__34;
  static  unsigned long long aesl_llvm_cbe_130_count = 0;
   char *llvm_cbe_tmp__35;
  static  unsigned long long aesl_llvm_cbe_131_count = 0;
   char *llvm_cbe_tmp__36;
  static  unsigned long long aesl_llvm_cbe_132_count = 0;
   char *llvm_cbe_tmp__37;
  static  unsigned long long aesl_llvm_cbe_133_count = 0;
  signed int *llvm_cbe_tmp__38;
  static  unsigned long long aesl_llvm_cbe_134_count = 0;
   char *llvm_cbe_tmp__39;
  static  unsigned long long aesl_llvm_cbe_135_count = 0;
   char *llvm_cbe_tmp__40;
  static  unsigned long long aesl_llvm_cbe_136_count = 0;
  signed int *llvm_cbe_tmp__41;
  static  unsigned long long aesl_llvm_cbe_137_count = 0;
   char *llvm_cbe_tmp__42;
  static  unsigned long long aesl_llvm_cbe_138_count = 0;
   char *llvm_cbe_tmp__43;
  static  unsigned long long aesl_llvm_cbe_139_count = 0;
  unsigned int llvm_cbe_tmp__44;
  static  unsigned long long aesl_llvm_cbe_140_count = 0;
  signed int *llvm_cbe_tmp__45;
  static  unsigned long long aesl_llvm_cbe_141_count = 0;
  static  unsigned long long aesl_llvm_cbe_142_count = 0;
  unsigned int llvm_cbe_tmp__46;
  static  unsigned long long aesl_llvm_cbe_143_count = 0;
  signed int *llvm_cbe_tmp__47;
  static  unsigned long long aesl_llvm_cbe_144_count = 0;
  static  unsigned long long aesl_llvm_cbe_145_count = 0;
  unsigned int llvm_cbe_tmp__48;
  static  unsigned long long aesl_llvm_cbe_146_count = 0;
  signed int *llvm_cbe_tmp__49;
  static  unsigned long long aesl_llvm_cbe_147_count = 0;
  static  unsigned long long aesl_llvm_cbe_148_count = 0;
  unsigned int llvm_cbe_tmp__50;
  static  unsigned long long aesl_llvm_cbe_149_count = 0;
  signed int *llvm_cbe_tmp__51;
  static  unsigned long long aesl_llvm_cbe_150_count = 0;
  static  unsigned long long aesl_llvm_cbe_151_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_aes256ctr_ref_init\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.aes256ctr_ctx* %%s, i64 0, i32 0, i64 0, !dbg !18 for 0x%I64xth hint within @pqcrystals_aes256ctr_ref_init  --> \n", ++aesl_llvm_cbe_124_count);
  llvm_cbe_tmp__32 = (signed long long *)(&llvm_cbe_s->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call fastcc void @aesl_internal_br_aes_ct64_ctr_init(i64* %%1, i8* %%key), !dbg !18 for 0x%I64xth hint within @pqcrystals_aes256ctr_ref_init  --> \n", ++aesl_llvm_cbe_126_count);
   /*tail*/ aesl_internal_br_aes_ct64_ctr_init((signed long long *)llvm_cbe_tmp__32, ( char *)llvm_cbe_key);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds %%struct.aes256ctr_ctx* %%s, i64 0, i32 1, i64 0, !dbg !18 for 0x%I64xth hint within @pqcrystals_aes256ctr_ref_init  --> \n", ++aesl_llvm_cbe_127_count);
  llvm_cbe_tmp__33 = (signed int *)(&llvm_cbe_s->field1[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call fastcc void @aesl_internal_br_range_dec32le(i32* %%2, i64 3, i8* %%nonce), !dbg !18 for 0x%I64xth hint within @pqcrystals_aes256ctr_ref_init  --> \n", ++aesl_llvm_cbe_128_count);
   /*tail*/ aesl_internal_br_range_dec32le((signed int *)llvm_cbe_tmp__33, 3ull, ( char *)llvm_cbe_nonce);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",3ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.aes256ctr_ctx* %%s, i64 0, i32 1, i64 4, !dbg !18 for 0x%I64xth hint within @pqcrystals_aes256ctr_ref_init  --> \n", ++aesl_llvm_cbe_129_count);
  llvm_cbe_tmp__34 = (signed int *)(&llvm_cbe_s->field1[(((signed long long )4ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = bitcast i32* %%3 to i8*, !dbg !18 for 0x%I64xth hint within @pqcrystals_aes256ctr_ref_init  --> \n", ++aesl_llvm_cbe_130_count);
  llvm_cbe_tmp__35 = ( char *)(( char *)llvm_cbe_tmp__34);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = bitcast i32* %%2 to i8*, !dbg !18 for 0x%I64xth hint within @pqcrystals_aes256ctr_ref_init  --> \n", ++aesl_llvm_cbe_131_count);
  llvm_cbe_tmp__36 = ( char *)(( char *)llvm_cbe_tmp__33);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = call i8* @memcpy(i8* %%4, i8* %%5, i64 12 for 0x%I64xth hint within @pqcrystals_aes256ctr_ref_init  --> \n", ++aesl_llvm_cbe_132_count);
  ( char *)memcpy(( char *)llvm_cbe_tmp__35, ( char *)llvm_cbe_tmp__36, 12ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",12ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__37);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds %%struct.aes256ctr_ctx* %%s, i64 0, i32 1, i64 8, !dbg !18 for 0x%I64xth hint within @pqcrystals_aes256ctr_ref_init  --> \n", ++aesl_llvm_cbe_133_count);
  llvm_cbe_tmp__38 = (signed int *)(&llvm_cbe_s->field1[(((signed long long )8ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = bitcast i32* %%7 to i8*, !dbg !18 for 0x%I64xth hint within @pqcrystals_aes256ctr_ref_init  --> \n", ++aesl_llvm_cbe_134_count);
  llvm_cbe_tmp__39 = ( char *)(( char *)llvm_cbe_tmp__38);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = call i8* @memcpy(i8* %%8, i8* %%5, i64 12 for 0x%I64xth hint within @pqcrystals_aes256ctr_ref_init  --> \n", ++aesl_llvm_cbe_135_count);
  ( char *)memcpy(( char *)llvm_cbe_tmp__39, ( char *)llvm_cbe_tmp__36, 12ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",12ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__40);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds %%struct.aes256ctr_ctx* %%s, i64 0, i32 1, i64 12, !dbg !19 for 0x%I64xth hint within @pqcrystals_aes256ctr_ref_init  --> \n", ++aesl_llvm_cbe_136_count);
  llvm_cbe_tmp__41 = (signed int *)(&llvm_cbe_s->field1[(((signed long long )12ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = bitcast i32* %%10 to i8*, !dbg !19 for 0x%I64xth hint within @pqcrystals_aes256ctr_ref_init  --> \n", ++aesl_llvm_cbe_137_count);
  llvm_cbe_tmp__42 = ( char *)(( char *)llvm_cbe_tmp__41);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = call i8* @memcpy(i8* %%11, i8* %%5, i64 12 for 0x%I64xth hint within @pqcrystals_aes256ctr_ref_init  --> \n", ++aesl_llvm_cbe_138_count);
  ( char *)memcpy(( char *)llvm_cbe_tmp__42, ( char *)llvm_cbe_tmp__36, 12ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",12ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__43);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = tail call fastcc i32 @aesl_internal_br_swap32(i32 0), !dbg !19 for 0x%I64xth hint within @pqcrystals_aes256ctr_ref_init  --> \n", ++aesl_llvm_cbe_139_count);
  llvm_cbe_tmp__44 = (unsigned int ) /*tail*/ aesl_internal_br_swap32(0u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",0u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__44);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = getelementptr inbounds %%struct.aes256ctr_ctx* %%s, i64 0, i32 1, i64 3, !dbg !19 for 0x%I64xth hint within @pqcrystals_aes256ctr_ref_init  --> \n", ++aesl_llvm_cbe_140_count);
  llvm_cbe_tmp__45 = (signed int *)(&llvm_cbe_s->field1[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%13, i32* %%14, align 4, !dbg !19 for 0x%I64xth hint within @pqcrystals_aes256ctr_ref_init  --> \n", ++aesl_llvm_cbe_141_count);
  *llvm_cbe_tmp__45 = llvm_cbe_tmp__44;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__44);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = tail call fastcc i32 @aesl_internal_br_swap32(i32 1), !dbg !19 for 0x%I64xth hint within @pqcrystals_aes256ctr_ref_init  --> \n", ++aesl_llvm_cbe_142_count);
  llvm_cbe_tmp__46 = (unsigned int ) /*tail*/ aesl_internal_br_swap32(1u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",1u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__46);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = getelementptr inbounds %%struct.aes256ctr_ctx* %%s, i64 0, i32 1, i64 7, !dbg !19 for 0x%I64xth hint within @pqcrystals_aes256ctr_ref_init  --> \n", ++aesl_llvm_cbe_143_count);
  llvm_cbe_tmp__47 = (signed int *)(&llvm_cbe_s->field1[(((signed long long )7ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%15, i32* %%16, align 4, !dbg !19 for 0x%I64xth hint within @pqcrystals_aes256ctr_ref_init  --> \n", ++aesl_llvm_cbe_144_count);
  *llvm_cbe_tmp__47 = llvm_cbe_tmp__46;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__46);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = tail call fastcc i32 @aesl_internal_br_swap32(i32 2), !dbg !19 for 0x%I64xth hint within @pqcrystals_aes256ctr_ref_init  --> \n", ++aesl_llvm_cbe_145_count);
  llvm_cbe_tmp__48 = (unsigned int ) /*tail*/ aesl_internal_br_swap32(2u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",2u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__48);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = getelementptr inbounds %%struct.aes256ctr_ctx* %%s, i64 0, i32 1, i64 11, !dbg !19 for 0x%I64xth hint within @pqcrystals_aes256ctr_ref_init  --> \n", ++aesl_llvm_cbe_146_count);
  llvm_cbe_tmp__49 = (signed int *)(&llvm_cbe_s->field1[(((signed long long )11ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%17, i32* %%18, align 4, !dbg !19 for 0x%I64xth hint within @pqcrystals_aes256ctr_ref_init  --> \n", ++aesl_llvm_cbe_147_count);
  *llvm_cbe_tmp__49 = llvm_cbe_tmp__48;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__48);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = tail call fastcc i32 @aesl_internal_br_swap32(i32 3), !dbg !19 for 0x%I64xth hint within @pqcrystals_aes256ctr_ref_init  --> \n", ++aesl_llvm_cbe_148_count);
  llvm_cbe_tmp__50 = (unsigned int ) /*tail*/ aesl_internal_br_swap32(3u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",3u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__50);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = getelementptr inbounds %%struct.aes256ctr_ctx* %%s, i64 0, i32 1, i64 15, !dbg !19 for 0x%I64xth hint within @pqcrystals_aes256ctr_ref_init  --> \n", ++aesl_llvm_cbe_149_count);
  llvm_cbe_tmp__51 = (signed int *)(&llvm_cbe_s->field1[(((signed long long )15ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%19, i32* %%20, align 4, !dbg !19 for 0x%I64xth hint within @pqcrystals_aes256ctr_ref_init  --> \n", ++aesl_llvm_cbe_150_count);
  *llvm_cbe_tmp__51 = llvm_cbe_tmp__50;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__50);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_aes256ctr_ref_init}\n");
  return;
}


static void aesl_internal_br_range_dec32le(signed int *llvm_cbe_v, signed long long llvm_cbe_num,  char *llvm_cbe_src) {
  static  unsigned long long aesl_llvm_cbe_152_count = 0;
  static  unsigned long long aesl_llvm_cbe_153_count = 0;
  static  unsigned long long aesl_llvm_cbe_154_count = 0;
  static  unsigned long long aesl_llvm_cbe_155_count = 0;
  static  unsigned long long aesl_llvm_cbe_156_count = 0;
  static  unsigned long long aesl_llvm_cbe_157_count = 0;
  static  unsigned long long aesl_llvm_cbe_158_count = 0;
  static  unsigned long long aesl_llvm_cbe_159_count = 0;
  static  unsigned long long aesl_llvm_cbe_160_count = 0;
  static  unsigned long long aesl_llvm_cbe__2e_in_count = 0;
  unsigned long long llvm_cbe__2e_in;
  unsigned long long llvm_cbe__2e_in__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_storemerge1_2e_rec_count = 0;
  unsigned long long llvm_cbe_storemerge1_2e_rec;
  unsigned long long llvm_cbe_storemerge1_2e_rec__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe__2e_rec2_count = 0;
  unsigned long long llvm_cbe__2e_rec2;
  unsigned long long llvm_cbe__2e_rec2__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_161_count = 0;
  signed int *llvm_cbe_tmp__52;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
   char *llvm_cbe_storemerge1;
  static  unsigned long long aesl_llvm_cbe_162_count = 0;
  unsigned long long llvm_cbe_tmp__53;
  static  unsigned long long aesl_llvm_cbe_163_count = 0;
  static  unsigned long long aesl_llvm_cbe_164_count = 0;
  unsigned int llvm_cbe_tmp__54;
  static  unsigned long long aesl_llvm_cbe__2e_rec3_count = 0;
  unsigned long long llvm_cbe__2e_rec3;
  static  unsigned long long aesl_llvm_cbe_165_count = 0;
  static  unsigned long long aesl_llvm_cbe__2e_rec_count = 0;
  unsigned long long llvm_cbe__2e_rec;
  static  unsigned long long aesl_llvm_cbe_166_count = 0;
  static  unsigned long long aesl_llvm_cbe_167_count = 0;
  static  unsigned long long aesl_llvm_cbe_168_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @aesl_internal_br_range_dec32le\n");
  if (((llvm_cbe_num&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge;
  } else {
    llvm_cbe__2e_in__PHI_TEMPORARY = (unsigned long long )llvm_cbe_num;   /* for PHI node */
    llvm_cbe_storemerge1_2e_rec__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    llvm_cbe__2e_rec2__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph;
  }

  do {     /* Syntactic loop '.lr.ph' to make GCC happy */
llvm_cbe__2e_lr_2e_ph:
if (AESL_DEBUG_TRACE)
printf("\n  %%.in = phi i64 [ %%3, %%.lr.ph ], [ %%num, %%0  for 0x%I64xth hint within @aesl_internal_br_range_dec32le  --> \n", ++aesl_llvm_cbe__2e_in_count);
  llvm_cbe__2e_in = (unsigned long long )llvm_cbe__2e_in__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n.in = 0x%I64X",llvm_cbe__2e_in);
printf("\n = 0x%I64X",llvm_cbe_tmp__53);
printf("\nnum = 0x%I64X",llvm_cbe_num);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1.rec = phi i64 [ %%.rec, %%.lr.ph ], [ 0, %%0  for 0x%I64xth hint within @aesl_internal_br_range_dec32le  --> \n", ++aesl_llvm_cbe_storemerge1_2e_rec_count);
  llvm_cbe_storemerge1_2e_rec = (unsigned long long )llvm_cbe_storemerge1_2e_rec__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1.rec = 0x%I64X",llvm_cbe_storemerge1_2e_rec);
printf("\n.rec = 0x%I64X",llvm_cbe__2e_rec);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%.rec2 = phi i64 [ %%.rec3, %%.lr.ph ], [ 0, %%0  for 0x%I64xth hint within @aesl_internal_br_range_dec32le  --> \n", ++aesl_llvm_cbe__2e_rec2_count);
  llvm_cbe__2e_rec2 = (unsigned long long )llvm_cbe__2e_rec2__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n.rec2 = 0x%I64X",llvm_cbe__2e_rec2);
printf("\n.rec3 = 0x%I64X",llvm_cbe__2e_rec3);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr i32* %%v, i64 %%.rec for 0x%I64xth hint within @aesl_internal_br_range_dec32le  --> \n", ++aesl_llvm_cbe_161_count);
  llvm_cbe_tmp__52 = (signed int *)(&llvm_cbe_v[(((signed long long )llvm_cbe__2e_rec2))]);
if (AESL_DEBUG_TRACE) {
printf("\n.rec2 = 0x%I64X",((signed long long )llvm_cbe__2e_rec2));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = getelementptr i8* %%src, i64 %%storemerge1.re for 0x%I64xth hint within @aesl_internal_br_range_dec32le  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = ( char *)(&llvm_cbe_src[(((signed long long )llvm_cbe_storemerge1_2e_rec))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1.rec = 0x%I64X",((signed long long )llvm_cbe_storemerge1_2e_rec));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = add i64 %%.in, -1, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_range_dec32le  --> \n", ++aesl_llvm_cbe_162_count);
  llvm_cbe_tmp__53 = (unsigned long long )((unsigned long long )(llvm_cbe__2e_in&18446744073709551615ull)) + ((unsigned long long )(18446744073709551615ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__53&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = tail call fastcc i32 @aesl_internal_br_dec32le(i8* %%storemerge1), !dbg !18 for 0x%I64xth hint within @aesl_internal_br_range_dec32le  --> \n", ++aesl_llvm_cbe_164_count);
  llvm_cbe_tmp__54 = (unsigned int ) /*tail*/ aesl_internal_br_dec32le(( char *)llvm_cbe_storemerge1);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__54);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%.rec3 = add i64 %%.rec2, 1, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_range_dec32le  --> \n", ++aesl_llvm_cbe__2e_rec3_count);
  llvm_cbe__2e_rec3 = (unsigned long long )((unsigned long long )(llvm_cbe__2e_rec2&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n.rec3 = 0x%I64X\n", ((unsigned long long )(llvm_cbe__2e_rec3&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%4, i32* %%2, align 4, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_range_dec32le  --> \n", ++aesl_llvm_cbe_165_count);
  *llvm_cbe_tmp__52 = llvm_cbe_tmp__54;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__54);
if (AESL_DEBUG_TRACE)
printf("\n  %%.rec = add i64 %%storemerge1.rec, 4, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_range_dec32le  --> \n", ++aesl_llvm_cbe__2e_rec_count);
  llvm_cbe__2e_rec = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1_2e_rec&18446744073709551615ull)) + ((unsigned long long )(4ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n.rec = 0x%I64X\n", ((unsigned long long )(llvm_cbe__2e_rec&18446744073709551615ull)));
  if (((llvm_cbe_tmp__53&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge;
  } else {
    llvm_cbe__2e_in__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__53;   /* for PHI node */
    llvm_cbe_storemerge1_2e_rec__PHI_TEMPORARY = (unsigned long long )llvm_cbe__2e_rec;   /* for PHI node */
    llvm_cbe__2e_rec2__PHI_TEMPORARY = (unsigned long long )llvm_cbe__2e_rec3;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph;
  }

  } while (1); /* end of syntactic loop '.lr.ph' */
llvm_cbe__2e__crit_edge:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @aesl_internal_br_range_dec32le}\n");
  return;
}


static signed int aesl_internal_br_swap32(signed int llvm_cbe_x) {
  static  unsigned long long aesl_llvm_cbe_169_count = 0;
  static  unsigned long long aesl_llvm_cbe_170_count = 0;
  static  unsigned long long aesl_llvm_cbe_171_count = 0;
  static  unsigned long long aesl_llvm_cbe_172_count = 0;
  static  unsigned long long aesl_llvm_cbe_173_count = 0;
  static  unsigned long long aesl_llvm_cbe_bswap_2e_4_count = 0;
  unsigned int llvm_cbe_bswap_2e_4;
  static  unsigned long long aesl_llvm_cbe_bswap_2e_3_count = 0;
  unsigned int llvm_cbe_bswap_2e_3;
  static  unsigned long long aesl_llvm_cbe_bswap_2e_2_count = 0;
  unsigned int llvm_cbe_bswap_2e_2;
  static  unsigned long long aesl_llvm_cbe_bswap_2e_1_count = 0;
  unsigned int llvm_cbe_bswap_2e_1;
  static  unsigned long long aesl_llvm_cbe_bswap_2e_and3_count = 0;
  unsigned int llvm_cbe_bswap_2e_and3;
  static  unsigned long long aesl_llvm_cbe_bswap_2e_and2_count = 0;
  unsigned int llvm_cbe_bswap_2e_and2;
  static  unsigned long long aesl_llvm_cbe_bswap_2e_or1_count = 0;
  unsigned int llvm_cbe_bswap_2e_or1;
  static  unsigned long long aesl_llvm_cbe_bswap_2e_or2_count = 0;
  unsigned int llvm_cbe_bswap_2e_or2;
  static  unsigned long long aesl_llvm_cbe_bswap_2e_i32_count = 0;
  unsigned int llvm_cbe_bswap_2e_i32;
  static  unsigned long long aesl_llvm_cbe_174_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @aesl_internal_br_swap32\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%bswap.4 = shl i32 %%x, 2 for 0x%I64xth hint within @aesl_internal_br_swap32  --> \n", ++aesl_llvm_cbe_bswap_2e_4_count);
  llvm_cbe_bswap_2e_4 = (unsigned int )llvm_cbe_x << 24u;
if (AESL_DEBUG_TRACE)
printf("\nbswap.4 = 0x%X\n", llvm_cbe_bswap_2e_4);
if (AESL_DEBUG_TRACE)
printf("\n  %%bswap.3 = shl i32 %%x,  for 0x%I64xth hint within @aesl_internal_br_swap32  --> \n", ++aesl_llvm_cbe_bswap_2e_3_count);
  llvm_cbe_bswap_2e_3 = (unsigned int )llvm_cbe_x << 8u;
if (AESL_DEBUG_TRACE)
printf("\nbswap.3 = 0x%X\n", llvm_cbe_bswap_2e_3);
if (AESL_DEBUG_TRACE)
printf("\n  %%bswap.2 = lshr i32 %%x,  for 0x%I64xth hint within @aesl_internal_br_swap32  --> \n", ++aesl_llvm_cbe_bswap_2e_2_count);
  llvm_cbe_bswap_2e_2 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_x&4294967295ull)) >> ((unsigned int )(8u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\nbswap.2 = 0x%X\n", ((unsigned int )(llvm_cbe_bswap_2e_2&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%bswap.1 = lshr i32 %%x, 2 for 0x%I64xth hint within @aesl_internal_br_swap32  --> \n", ++aesl_llvm_cbe_bswap_2e_1_count);
  llvm_cbe_bswap_2e_1 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_x&4294967295ull)) >> ((unsigned int )(24u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\nbswap.1 = 0x%X\n", ((unsigned int )(llvm_cbe_bswap_2e_1&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%bswap.and3 = and i32 %%bswap.3, 1671168 for 0x%I64xth hint within @aesl_internal_br_swap32  --> \n", ++aesl_llvm_cbe_bswap_2e_and3_count);
  llvm_cbe_bswap_2e_and3 = (unsigned int )llvm_cbe_bswap_2e_3 & 16711680u;
if (AESL_DEBUG_TRACE)
printf("\nbswap.and3 = 0x%X\n", llvm_cbe_bswap_2e_and3);
if (AESL_DEBUG_TRACE)
printf("\n  %%bswap.and2 = and i32 %%bswap.2, 6528 for 0x%I64xth hint within @aesl_internal_br_swap32  --> \n", ++aesl_llvm_cbe_bswap_2e_and2_count);
  llvm_cbe_bswap_2e_and2 = (unsigned int )llvm_cbe_bswap_2e_2 & 65280u;
if (AESL_DEBUG_TRACE)
printf("\nbswap.and2 = 0x%X\n", llvm_cbe_bswap_2e_and2);
if (AESL_DEBUG_TRACE)
printf("\n  %%bswap.or1 = or i32 %%bswap.4, %%bswap.and for 0x%I64xth hint within @aesl_internal_br_swap32  --> \n", ++aesl_llvm_cbe_bswap_2e_or1_count);
  llvm_cbe_bswap_2e_or1 = (unsigned int )llvm_cbe_bswap_2e_4 | llvm_cbe_bswap_2e_and3;
if (AESL_DEBUG_TRACE)
printf("\nbswap.or1 = 0x%X\n", llvm_cbe_bswap_2e_or1);
if (AESL_DEBUG_TRACE)
printf("\n  %%bswap.or2 = or i32 %%bswap.and2, %%bswap. for 0x%I64xth hint within @aesl_internal_br_swap32  --> \n", ++aesl_llvm_cbe_bswap_2e_or2_count);
  llvm_cbe_bswap_2e_or2 = (unsigned int )llvm_cbe_bswap_2e_and2 | llvm_cbe_bswap_2e_1;
if (AESL_DEBUG_TRACE)
printf("\nbswap.or2 = 0x%X\n", llvm_cbe_bswap_2e_or2);
if (AESL_DEBUG_TRACE)
printf("\n  %%bswap.i32 = or i32 %%bswap.or1, %%bswap.or for 0x%I64xth hint within @aesl_internal_br_swap32  --> \n", ++aesl_llvm_cbe_bswap_2e_i32_count);
  llvm_cbe_bswap_2e_i32 = (unsigned int )llvm_cbe_bswap_2e_or1 | llvm_cbe_bswap_2e_or2;
if (AESL_DEBUG_TRACE)
printf("\nbswap.i32 = 0x%X\n", llvm_cbe_bswap_2e_i32);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @aesl_internal_br_swap32}\n");
  return llvm_cbe_bswap_2e_i32;
}


void pqcrystals_aes256ctr_ref_squeezeblocks( char *llvm_cbe_out, signed long long llvm_cbe_nblocks, l_struct_OC_aes256ctr_ctx *llvm_cbe_s) {
  static  unsigned long long aesl_llvm_cbe_175_count = 0;
  static  unsigned long long aesl_llvm_cbe_176_count = 0;
  static  unsigned long long aesl_llvm_cbe_177_count = 0;
  static  unsigned long long aesl_llvm_cbe_178_count = 0;
  static  unsigned long long aesl_llvm_cbe_179_count = 0;
  static  unsigned long long aesl_llvm_cbe_180_count = 0;
  static  unsigned long long aesl_llvm_cbe_181_count = 0;
  static  unsigned long long aesl_llvm_cbe_182_count = 0;
  static  unsigned long long aesl_llvm_cbe_183_count = 0;
  static  unsigned long long aesl_llvm_cbe_184_count = 0;
  static  unsigned long long aesl_llvm_cbe_185_count = 0;
  static  unsigned long long aesl_llvm_cbe_186_count = 0;
  signed int *llvm_cbe_tmp__55;
  static  unsigned long long aesl_llvm_cbe_187_count = 0;
  signed long long *llvm_cbe_tmp__56;
  static  unsigned long long aesl_llvm_cbe_188_count = 0;
  static  unsigned long long aesl_llvm_cbe__2e_rec_count = 0;
  unsigned long long llvm_cbe__2e_rec;
  unsigned long long llvm_cbe__2e_rec__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_189_count = 0;
  unsigned long long llvm_cbe_tmp__57;
  unsigned long long llvm_cbe_tmp__57__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_190_count = 0;
   char *llvm_cbe_tmp__58;
  static  unsigned long long aesl_llvm_cbe_191_count = 0;
  static  unsigned long long aesl_llvm_cbe__2e_rec1_count = 0;
  unsigned long long llvm_cbe__2e_rec1;
  static  unsigned long long aesl_llvm_cbe_192_count = 0;
  unsigned long long llvm_cbe_tmp__59;
  static  unsigned long long aesl_llvm_cbe_193_count = 0;
  static  unsigned long long aesl_llvm_cbe_194_count = 0;
  static  unsigned long long aesl_llvm_cbe_195_count = 0;
  static  unsigned long long aesl_llvm_cbe_196_count = 0;
  static  unsigned long long aesl_llvm_cbe_197_count = 0;
  static  unsigned long long aesl_llvm_cbe_198_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_aes256ctr_ref_squeezeblocks\n");
  if (((llvm_cbe_nblocks&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge;
  } else {
    goto llvm_cbe__2e_lr_2e_ph;
  }

llvm_cbe__2e_lr_2e_ph:
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds %%struct.aes256ctr_ctx* %%s, i64 0, i32 1, i64 0, !dbg !18 for 0x%I64xth hint within @pqcrystals_aes256ctr_ref_squeezeblocks  --> \n", ++aesl_llvm_cbe_186_count);
  llvm_cbe_tmp__55 = (signed int *)(&llvm_cbe_s->field1[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.aes256ctr_ctx* %%s, i64 0, i32 0, i64 0, !dbg !18 for 0x%I64xth hint within @pqcrystals_aes256ctr_ref_squeezeblocks  --> \n", ++aesl_llvm_cbe_187_count);
  llvm_cbe_tmp__56 = (signed long long *)(&llvm_cbe_s->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
  llvm_cbe__2e_rec__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  llvm_cbe_tmp__57__PHI_TEMPORARY = (unsigned long long )llvm_cbe_nblocks;   /* for PHI node */
  goto llvm_cbe_tmp__60;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__60:
if (AESL_DEBUG_TRACE)
printf("\n  %%.rec = phi i64 [ 0, %%.lr.ph ], [ %%.rec1, %%4  for 0x%I64xth hint within @pqcrystals_aes256ctr_ref_squeezeblocks  --> \n", ++aesl_llvm_cbe__2e_rec_count);
  llvm_cbe__2e_rec = (unsigned long long )llvm_cbe__2e_rec__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n.rec = 0x%I64X",llvm_cbe__2e_rec);
printf("\n = 0x%I64X",0ull);
printf("\n.rec1 = 0x%I64X",llvm_cbe__2e_rec1);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = phi i64 [ %%nblocks, %%.lr.ph ], [ %%7, %%4  for 0x%I64xth hint within @pqcrystals_aes256ctr_ref_squeezeblocks  --> \n", ++aesl_llvm_cbe_189_count);
  llvm_cbe_tmp__57 = (unsigned long long )llvm_cbe_tmp__57__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",llvm_cbe_tmp__57);
printf("\nnblocks = 0x%I64X",llvm_cbe_nblocks);
printf("\n = 0x%I64X",llvm_cbe_tmp__59);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr i8* %%out, i64 %%.re for 0x%I64xth hint within @pqcrystals_aes256ctr_ref_squeezeblocks  --> \n", ++aesl_llvm_cbe_190_count);
  llvm_cbe_tmp__58 = ( char *)(&llvm_cbe_out[(((signed long long )llvm_cbe__2e_rec))]);
if (AESL_DEBUG_TRACE) {
printf("\n.rec = 0x%I64X",((signed long long )llvm_cbe__2e_rec));
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call fastcc void @aesl_internal_aes_ctr4x(i8* %%6, i32* %%2, i64* %%3), !dbg !18 for 0x%I64xth hint within @pqcrystals_aes256ctr_ref_squeezeblocks  --> \n", ++aesl_llvm_cbe_191_count);
   /*tail*/ aesl_internal_aes_ctr4x(( char *)llvm_cbe_tmp__58, (signed int *)llvm_cbe_tmp__55, (signed long long *)llvm_cbe_tmp__56);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%.rec1 = add i64 %%.rec, 64, !dbg !18 for 0x%I64xth hint within @pqcrystals_aes256ctr_ref_squeezeblocks  --> \n", ++aesl_llvm_cbe__2e_rec1_count);
  llvm_cbe__2e_rec1 = (unsigned long long )((unsigned long long )(llvm_cbe__2e_rec&18446744073709551615ull)) + ((unsigned long long )(64ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n.rec1 = 0x%I64X\n", ((unsigned long long )(llvm_cbe__2e_rec1&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = add i64 %%5, -1, !dbg !19 for 0x%I64xth hint within @pqcrystals_aes256ctr_ref_squeezeblocks  --> \n", ++aesl_llvm_cbe_192_count);
  llvm_cbe_tmp__59 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__57&18446744073709551615ull)) + ((unsigned long long )(18446744073709551615ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__59&18446744073709551615ull)));
  if (((llvm_cbe_tmp__59&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge;
  } else {
    llvm_cbe__2e_rec__PHI_TEMPORARY = (unsigned long long )llvm_cbe__2e_rec1;   /* for PHI node */
    llvm_cbe_tmp__57__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__59;   /* for PHI node */
    goto llvm_cbe_tmp__60;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e__crit_edge:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_aes256ctr_ref_squeezeblocks}\n");
  return;
}


static void aesl_internal_aes_ctr4x( char *llvm_cbe_out, signed int *llvm_cbe_ivw, signed long long *llvm_cbe_sk_exp) {
  static  unsigned long long aesl_llvm_cbe_w_count = 0;
  signed int llvm_cbe_w[16];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_q_count = 0;
  signed long long llvm_cbe_q[8];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_199_count = 0;
  static  unsigned long long aesl_llvm_cbe_200_count = 0;
  static  unsigned long long aesl_llvm_cbe_201_count = 0;
  static  unsigned long long aesl_llvm_cbe_202_count = 0;
  static  unsigned long long aesl_llvm_cbe_203_count = 0;
  static  unsigned long long aesl_llvm_cbe_204_count = 0;
  static  unsigned long long aesl_llvm_cbe_205_count = 0;
  static  unsigned long long aesl_llvm_cbe_206_count = 0;
  static  unsigned long long aesl_llvm_cbe_207_count = 0;
  static  unsigned long long aesl_llvm_cbe_208_count = 0;
  static  unsigned long long aesl_llvm_cbe_209_count = 0;
  static  unsigned long long aesl_llvm_cbe_210_count = 0;
  static  unsigned long long aesl_llvm_cbe_211_count = 0;
  static  unsigned long long aesl_llvm_cbe_212_count = 0;
  static  unsigned long long aesl_llvm_cbe_213_count = 0;
   char *llvm_cbe_tmp__61;
  static  unsigned long long aesl_llvm_cbe_214_count = 0;
   char *llvm_cbe_tmp__62;
  static  unsigned long long aesl_llvm_cbe_215_count = 0;
   char *llvm_cbe_tmp__63;
  static  unsigned long long aesl_llvm_cbe_216_count = 0;
  static  unsigned long long aesl_llvm_cbe_217_count = 0;
  static  unsigned long long aesl_llvm_cbe_218_count = 0;
  static  unsigned long long aesl_llvm_cbe_219_count = 0;
  static  unsigned long long aesl_llvm_cbe_220_count = 0;
  static  unsigned long long aesl_llvm_cbe_221_count = 0;
  static  unsigned long long aesl_llvm_cbe_222_count = 0;
  static  unsigned long long aesl_llvm_cbe_223_count = 0;
  static  unsigned long long aesl_llvm_cbe_224_count = 0;
  static  unsigned long long aesl_llvm_cbe_225_count = 0;
  static  unsigned long long aesl_llvm_cbe_226_count = 0;
  static  unsigned long long aesl_llvm_cbe_227_count = 0;
  static  unsigned long long aesl_llvm_cbe_228_count = 0;
  static  unsigned long long aesl_llvm_cbe_229_count = 0;
  static  unsigned long long aesl_llvm_cbe_230_count = 0;
  signed long long *llvm_cbe_tmp__64;
  static  unsigned long long aesl_llvm_cbe_231_count = 0;
  signed long long *llvm_cbe_tmp__65;
  static  unsigned long long aesl_llvm_cbe_232_count = 0;
  signed int *llvm_cbe_tmp__66;
  static  unsigned long long aesl_llvm_cbe_233_count = 0;
  static  unsigned long long aesl_llvm_cbe_234_count = 0;
  static  unsigned long long aesl_llvm_cbe_235_count = 0;
  static  unsigned long long aesl_llvm_cbe_236_count = 0;
  static  unsigned long long aesl_llvm_cbe_237_count = 0;
  static  unsigned long long aesl_llvm_cbe_238_count = 0;
  static  unsigned long long aesl_llvm_cbe_239_count = 0;
  static  unsigned long long aesl_llvm_cbe_240_count = 0;
  static  unsigned long long aesl_llvm_cbe_241_count = 0;
  static  unsigned long long aesl_llvm_cbe_242_count = 0;
  static  unsigned long long aesl_llvm_cbe_243_count = 0;
  static  unsigned long long aesl_llvm_cbe_244_count = 0;
  static  unsigned long long aesl_llvm_cbe_245_count = 0;
  static  unsigned long long aesl_llvm_cbe_246_count = 0;
  static  unsigned long long aesl_llvm_cbe_247_count = 0;
  static  unsigned long long aesl_llvm_cbe_248_count = 0;
  signed long long *llvm_cbe_tmp__67;
  static  unsigned long long aesl_llvm_cbe_249_count = 0;
  signed long long *llvm_cbe_tmp__68;
  static  unsigned long long aesl_llvm_cbe_250_count = 0;
  signed int *llvm_cbe_tmp__69;
  static  unsigned long long aesl_llvm_cbe_251_count = 0;
  static  unsigned long long aesl_llvm_cbe_252_count = 0;
  static  unsigned long long aesl_llvm_cbe_253_count = 0;
  static  unsigned long long aesl_llvm_cbe_254_count = 0;
  static  unsigned long long aesl_llvm_cbe_255_count = 0;
  static  unsigned long long aesl_llvm_cbe_256_count = 0;
  static  unsigned long long aesl_llvm_cbe_257_count = 0;
  static  unsigned long long aesl_llvm_cbe_258_count = 0;
  static  unsigned long long aesl_llvm_cbe_259_count = 0;
  static  unsigned long long aesl_llvm_cbe_260_count = 0;
  static  unsigned long long aesl_llvm_cbe_261_count = 0;
  static  unsigned long long aesl_llvm_cbe_262_count = 0;
  static  unsigned long long aesl_llvm_cbe_263_count = 0;
  static  unsigned long long aesl_llvm_cbe_264_count = 0;
  static  unsigned long long aesl_llvm_cbe_265_count = 0;
  static  unsigned long long aesl_llvm_cbe_266_count = 0;
  signed long long *llvm_cbe_tmp__70;
  static  unsigned long long aesl_llvm_cbe_267_count = 0;
  signed long long *llvm_cbe_tmp__71;
  static  unsigned long long aesl_llvm_cbe_268_count = 0;
  signed int *llvm_cbe_tmp__72;
  static  unsigned long long aesl_llvm_cbe_269_count = 0;
  static  unsigned long long aesl_llvm_cbe_270_count = 0;
  static  unsigned long long aesl_llvm_cbe_271_count = 0;
  static  unsigned long long aesl_llvm_cbe_272_count = 0;
  static  unsigned long long aesl_llvm_cbe_273_count = 0;
  static  unsigned long long aesl_llvm_cbe_274_count = 0;
  static  unsigned long long aesl_llvm_cbe_275_count = 0;
  static  unsigned long long aesl_llvm_cbe_276_count = 0;
  static  unsigned long long aesl_llvm_cbe_277_count = 0;
  static  unsigned long long aesl_llvm_cbe_278_count = 0;
  static  unsigned long long aesl_llvm_cbe_279_count = 0;
  static  unsigned long long aesl_llvm_cbe_280_count = 0;
  static  unsigned long long aesl_llvm_cbe_281_count = 0;
  static  unsigned long long aesl_llvm_cbe_282_count = 0;
  static  unsigned long long aesl_llvm_cbe_283_count = 0;
  static  unsigned long long aesl_llvm_cbe_284_count = 0;
  signed long long *llvm_cbe_tmp__73;
  static  unsigned long long aesl_llvm_cbe_285_count = 0;
  signed long long *llvm_cbe_tmp__74;
  static  unsigned long long aesl_llvm_cbe_286_count = 0;
  signed int *llvm_cbe_tmp__75;
  static  unsigned long long aesl_llvm_cbe_287_count = 0;
  static  unsigned long long aesl_llvm_cbe_288_count = 0;
  static  unsigned long long aesl_llvm_cbe_289_count = 0;
  static  unsigned long long aesl_llvm_cbe_290_count = 0;
  static  unsigned long long aesl_llvm_cbe_291_count = 0;
  static  unsigned long long aesl_llvm_cbe_292_count = 0;
  static  unsigned long long aesl_llvm_cbe_293_count = 0;
  static  unsigned long long aesl_llvm_cbe_294_count = 0;
  static  unsigned long long aesl_llvm_cbe_295_count = 0;
  static  unsigned long long aesl_llvm_cbe_296_count = 0;
  static  unsigned long long aesl_llvm_cbe_297_count = 0;
  static  unsigned long long aesl_llvm_cbe_298_count = 0;
  static  unsigned long long aesl_llvm_cbe_299_count = 0;
  static  unsigned long long aesl_llvm_cbe_300_count = 0;
  static  unsigned long long aesl_llvm_cbe_301_count = 0;
  static  unsigned long long aesl_llvm_cbe_302_count = 0;
  static  unsigned long long aesl_llvm_cbe_303_count = 0;
  static  unsigned long long aesl_llvm_cbe_304_count = 0;
  static  unsigned long long aesl_llvm_cbe_305_count = 0;
  static  unsigned long long aesl_llvm_cbe_306_count = 0;
  static  unsigned long long aesl_llvm_cbe_307_count = 0;
  static  unsigned long long aesl_llvm_cbe_308_count = 0;
  static  unsigned long long aesl_llvm_cbe_309_count = 0;
  static  unsigned long long aesl_llvm_cbe_310_count = 0;
  static  unsigned long long aesl_llvm_cbe_311_count = 0;
  static  unsigned long long aesl_llvm_cbe_312_count = 0;
  static  unsigned long long aesl_llvm_cbe_313_count = 0;
  static  unsigned long long aesl_llvm_cbe_314_count = 0;
  static  unsigned long long aesl_llvm_cbe_315_count = 0;
  static  unsigned long long aesl_llvm_cbe_316_count = 0;
  static  unsigned long long aesl_llvm_cbe_317_count = 0;
  static  unsigned long long aesl_llvm_cbe_318_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge14_count = 0;
  unsigned int llvm_cbe_storemerge14;
  unsigned int llvm_cbe_storemerge14__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_319_count = 0;
  static  unsigned long long aesl_llvm_cbe_320_count = 0;
  static  unsigned long long aesl_llvm_cbe_321_count = 0;
  static  unsigned long long aesl_llvm_cbe_322_count = 0;
  unsigned int llvm_cbe_tmp__76;
  static  unsigned long long aesl_llvm_cbe_323_count = 0;
  unsigned long long llvm_cbe_tmp__77;
  static  unsigned long long aesl_llvm_cbe_324_count = 0;
  signed long long *llvm_cbe_tmp__78;
  static  unsigned long long aesl_llvm_cbe_325_count = 0;
  static  unsigned long long aesl_llvm_cbe_326_count = 0;
  unsigned int llvm_cbe_tmp__79;
  static  unsigned long long aesl_llvm_cbe_327_count = 0;
  static  unsigned long long aesl_llvm_cbe_328_count = 0;
  static  unsigned long long aesl_llvm_cbe_329_count = 0;
  static  unsigned long long aesl_llvm_cbe_330_count = 0;
  static  unsigned long long aesl_llvm_cbe_331_count = 0;
  static  unsigned long long aesl_llvm_cbe_332_count = 0;
  static  unsigned long long aesl_llvm_cbe_333_count = 0;
  static  unsigned long long aesl_llvm_cbe_334_count = 0;
  static  unsigned long long aesl_llvm_cbe_335_count = 0;
  static  unsigned long long aesl_llvm_cbe_336_count = 0;
  static  unsigned long long aesl_llvm_cbe_337_count = 0;
  static  unsigned long long aesl_llvm_cbe_338_count = 0;
  static  unsigned long long aesl_llvm_cbe_339_count = 0;
  static  unsigned long long aesl_llvm_cbe_340_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond6_count = 0;
  static  unsigned long long aesl_llvm_cbe_341_count = 0;
  static  unsigned long long aesl_llvm_cbe_342_count = 0;
  static  unsigned long long aesl_llvm_cbe_343_count = 0;
  static  unsigned long long aesl_llvm_cbe_344_count = 0;
  signed long long *llvm_cbe_tmp__80;
  static  unsigned long long aesl_llvm_cbe_345_count = 0;
  static  unsigned long long aesl_llvm_cbe_346_count = 0;
  static  unsigned long long aesl_llvm_cbe_347_count = 0;
  static  unsigned long long aesl_llvm_cbe_348_count = 0;
  static  unsigned long long aesl_llvm_cbe_349_count = 0;
  static  unsigned long long aesl_llvm_cbe_350_count = 0;
  static  unsigned long long aesl_llvm_cbe_351_count = 0;
  static  unsigned long long aesl_llvm_cbe_352_count = 0;
  static  unsigned long long aesl_llvm_cbe_353_count = 0;
  static  unsigned long long aesl_llvm_cbe_354_count = 0;
  static  unsigned long long aesl_llvm_cbe_355_count = 0;
  static  unsigned long long aesl_llvm_cbe_356_count = 0;
  static  unsigned long long aesl_llvm_cbe_357_count = 0;
  static  unsigned long long aesl_llvm_cbe_358_count = 0;
  static  unsigned long long aesl_llvm_cbe_359_count = 0;
  static  unsigned long long aesl_llvm_cbe_360_count = 0;
  static  unsigned long long aesl_llvm_cbe_361_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge23_count = 0;
  unsigned int llvm_cbe_storemerge23;
  unsigned int llvm_cbe_storemerge23__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_362_count = 0;
  unsigned int llvm_cbe_tmp__81;
  static  unsigned long long aesl_llvm_cbe_363_count = 0;
  unsigned long long llvm_cbe_tmp__82;
  static  unsigned long long aesl_llvm_cbe_364_count = 0;
  signed int *llvm_cbe_tmp__83;
  static  unsigned long long aesl_llvm_cbe_365_count = 0;
  unsigned long long llvm_cbe_tmp__84;
  static  unsigned long long aesl_llvm_cbe_366_count = 0;
  signed long long *llvm_cbe_tmp__85;
  static  unsigned long long aesl_llvm_cbe_367_count = 0;
  unsigned long long llvm_cbe_tmp__86;
  static  unsigned long long aesl_llvm_cbe_368_count = 0;
  unsigned int llvm_cbe_tmp__87;
  static  unsigned long long aesl_llvm_cbe_369_count = 0;
  unsigned long long llvm_cbe_tmp__88;
  static  unsigned long long aesl_llvm_cbe_370_count = 0;
  signed long long *llvm_cbe_tmp__89;
  static  unsigned long long aesl_llvm_cbe_371_count = 0;
  unsigned long long llvm_cbe_tmp__90;
  static  unsigned long long aesl_llvm_cbe_372_count = 0;
  static  unsigned long long aesl_llvm_cbe_373_count = 0;
  unsigned int llvm_cbe_tmp__91;
  static  unsigned long long aesl_llvm_cbe_374_count = 0;
  static  unsigned long long aesl_llvm_cbe_375_count = 0;
  static  unsigned long long aesl_llvm_cbe_376_count = 0;
  static  unsigned long long aesl_llvm_cbe_377_count = 0;
  static  unsigned long long aesl_llvm_cbe_378_count = 0;
  static  unsigned long long aesl_llvm_cbe_379_count = 0;
  static  unsigned long long aesl_llvm_cbe_380_count = 0;
  static  unsigned long long aesl_llvm_cbe_381_count = 0;
  static  unsigned long long aesl_llvm_cbe_382_count = 0;
  static  unsigned long long aesl_llvm_cbe_383_count = 0;
  static  unsigned long long aesl_llvm_cbe_384_count = 0;
  static  unsigned long long aesl_llvm_cbe_385_count = 0;
  static  unsigned long long aesl_llvm_cbe_386_count = 0;
  static  unsigned long long aesl_llvm_cbe_387_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_388_count = 0;
  static  unsigned long long aesl_llvm_cbe_389_count = 0;
  static  unsigned long long aesl_llvm_cbe_390_count = 0;
  signed int *llvm_cbe_tmp__92;
  static  unsigned long long aesl_llvm_cbe_391_count = 0;
  static  unsigned long long aesl_llvm_cbe_392_count = 0;
  signed int *llvm_cbe_tmp__93;
  static  unsigned long long aesl_llvm_cbe_393_count = 0;
  static  unsigned long long aesl_llvm_cbe_394_count = 0;
  signed int *llvm_cbe_tmp__94;
  static  unsigned long long aesl_llvm_cbe_395_count = 0;
  static  unsigned long long aesl_llvm_cbe_396_count = 0;
  signed int *llvm_cbe_tmp__95;
  static  unsigned long long aesl_llvm_cbe_397_count = 0;
  static  unsigned long long aesl_llvm_cbe_398_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @aesl_internal_aes_ctr4x\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = bitcast [16 x i32]* %%w to i8*, !dbg !18 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_213_count);
  llvm_cbe_tmp__61 = ( char *)(( char *)(&llvm_cbe_w));
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = bitcast i32* %%ivw to i8*, !dbg !18 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_214_count);
  llvm_cbe_tmp__62 = ( char *)(( char *)llvm_cbe_ivw);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = call i8* @memcpy(i8* %%1, i8* %%2, i64 64 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_215_count);
  ( char *)memcpy(( char *)llvm_cbe_tmp__61, ( char *)llvm_cbe_tmp__62, 64ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",64ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__63);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds [8 x i64]* %%q, i64 0, i64 0, !dbg !21 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_230_count);
  llvm_cbe_tmp__64 = (signed long long *)(&llvm_cbe_q[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds [8 x i64]* %%q, i64 0, i64 4, !dbg !21 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_231_count);
  llvm_cbe_tmp__65 = (signed long long *)(&llvm_cbe_q[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds [16 x i32]* %%w, i64 0, i64 0, !dbg !21 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_232_count);
  llvm_cbe_tmp__66 = (signed int *)(&llvm_cbe_w[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call fastcc void @aesl_internal_br_aes_ct64_interleave_in(i64* %%4, i64* %%5, i32* %%6), !dbg !21 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_233_count);
  aesl_internal_br_aes_ct64_interleave_in((signed long long *)llvm_cbe_tmp__64, (signed long long *)llvm_cbe_tmp__65, (signed int *)llvm_cbe_tmp__66);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds [8 x i64]* %%q, i64 0, i64 1, !dbg !21 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_248_count);
  llvm_cbe_tmp__67 = (signed long long *)(&llvm_cbe_q[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds [8 x i64]* %%q, i64 0, i64 5, !dbg !21 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_249_count);
  llvm_cbe_tmp__68 = (signed long long *)(&llvm_cbe_q[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds [16 x i32]* %%w, i64 0, i64 4, !dbg !21 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_250_count);
  llvm_cbe_tmp__69 = (signed int *)(&llvm_cbe_w[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call fastcc void @aesl_internal_br_aes_ct64_interleave_in(i64* %%7, i64* %%8, i32* %%9), !dbg !21 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_251_count);
  aesl_internal_br_aes_ct64_interleave_in((signed long long *)llvm_cbe_tmp__67, (signed long long *)llvm_cbe_tmp__68, (signed int *)llvm_cbe_tmp__69);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds [8 x i64]* %%q, i64 0, i64 2, !dbg !21 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_266_count);
  llvm_cbe_tmp__70 = (signed long long *)(&llvm_cbe_q[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds [8 x i64]* %%q, i64 0, i64 6, !dbg !21 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_267_count);
  llvm_cbe_tmp__71 = (signed long long *)(&llvm_cbe_q[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = getelementptr inbounds [16 x i32]* %%w, i64 0, i64 8, !dbg !21 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_268_count);
  llvm_cbe_tmp__72 = (signed int *)(&llvm_cbe_w[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call fastcc void @aesl_internal_br_aes_ct64_interleave_in(i64* %%10, i64* %%11, i32* %%12), !dbg !21 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_269_count);
  aesl_internal_br_aes_ct64_interleave_in((signed long long *)llvm_cbe_tmp__70, (signed long long *)llvm_cbe_tmp__71, (signed int *)llvm_cbe_tmp__72);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds [8 x i64]* %%q, i64 0, i64 3, !dbg !21 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_284_count);
  llvm_cbe_tmp__73 = (signed long long *)(&llvm_cbe_q[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = getelementptr inbounds [8 x i64]* %%q, i64 0, i64 7, !dbg !21 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_285_count);
  llvm_cbe_tmp__74 = (signed long long *)(&llvm_cbe_q[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds [16 x i32]* %%w, i64 0, i64 12, !dbg !21 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_286_count);
  llvm_cbe_tmp__75 = (signed int *)(&llvm_cbe_w[(((signed long long )12ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call fastcc void @aesl_internal_br_aes_ct64_interleave_in(i64* %%13, i64* %%14, i32* %%15), !dbg !21 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_287_count);
  aesl_internal_br_aes_ct64_interleave_in((signed long long *)llvm_cbe_tmp__73, (signed long long *)llvm_cbe_tmp__74, (signed int *)llvm_cbe_tmp__75);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call fastcc void @aesl_internal_br_aes_ct64_ortho(i64* %%4), !dbg !22 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_302_count);
  aesl_internal_br_aes_ct64_ortho((signed long long *)llvm_cbe_tmp__64);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call fastcc void @aesl_internal_add_round_key(i64* %%4, i64* %%sk_exp), !dbg !19 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_303_count);
  aesl_internal_add_round_key((signed long long *)llvm_cbe_tmp__64, (signed long long *)llvm_cbe_sk_exp);
if (AESL_DEBUG_TRACE) {
}
  llvm_cbe_storemerge14__PHI_TEMPORARY = (unsigned int )1u;   /* for PHI node */
  goto llvm_cbe_tmp__96;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__96:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge14 = phi i32 [ 1, %%0 ], [ %%20, %%16  for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_storemerge14_count);
  llvm_cbe_storemerge14 = (unsigned int )llvm_cbe_storemerge14__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge14 = 0x%X",llvm_cbe_storemerge14);
printf("\n = 0x%X",1u);
printf("\n = 0x%X",llvm_cbe_tmp__79);
}
if (AESL_DEBUG_TRACE)
printf("\n  call fastcc void @aesl_internal_br_aes_ct64_bitslice_Sbox(i64* %%4), !dbg !22 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_319_count);
  aesl_internal_br_aes_ct64_bitslice_Sbox((signed long long *)llvm_cbe_tmp__64);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call fastcc void @aesl_internal_shift_rows(i64* %%4), !dbg !22 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_320_count);
  aesl_internal_shift_rows((signed long long *)llvm_cbe_tmp__64);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call fastcc void @aesl_internal_mix_columns(i64* %%4), !dbg !22 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_321_count);
  aesl_internal_mix_columns((signed long long *)llvm_cbe_tmp__64);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = shl i32 %%storemerge14, 3, !dbg !19 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_322_count);
  llvm_cbe_tmp__76 = (unsigned int )llvm_cbe_storemerge14 << 3u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__76);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = sext i32 %%17 to i64, !dbg !19 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_323_count);
  llvm_cbe_tmp__77 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__76);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__77);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = getelementptr inbounds i64* %%sk_exp, i64 %%18, !dbg !19 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_324_count);
  llvm_cbe_tmp__78 = (signed long long *)(&llvm_cbe_sk_exp[(((signed long long )llvm_cbe_tmp__77))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__77));
}
if (AESL_DEBUG_TRACE)
printf("\n  call fastcc void @aesl_internal_add_round_key(i64* %%4, i64* %%19), !dbg !19 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_325_count);
  aesl_internal_add_round_key((signed long long *)llvm_cbe_tmp__64, (signed long long *)llvm_cbe_tmp__78);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = add nsw i32 %%storemerge14, 1, !dbg !21 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_326_count);
  llvm_cbe_tmp__79 = (unsigned int )((unsigned int )(llvm_cbe_storemerge14&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__79&4294967295ull)));
  if (((llvm_cbe_tmp__79&4294967295U) == (14u&4294967295U))) {
    goto llvm_cbe_tmp__97;
  } else {
    llvm_cbe_storemerge14__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__79;   /* for PHI node */
    goto llvm_cbe_tmp__96;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__97:
if (AESL_DEBUG_TRACE)
printf("\n  call fastcc void @aesl_internal_br_aes_ct64_bitslice_Sbox(i64* %%4), !dbg !22 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_342_count);
  aesl_internal_br_aes_ct64_bitslice_Sbox((signed long long *)llvm_cbe_tmp__64);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call fastcc void @aesl_internal_shift_rows(i64* %%4), !dbg !22 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_343_count);
  aesl_internal_shift_rows((signed long long *)llvm_cbe_tmp__64);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = getelementptr inbounds i64* %%sk_exp, i64 112, !dbg !20 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_344_count);
  llvm_cbe_tmp__80 = (signed long long *)(&llvm_cbe_sk_exp[(((signed long long )112ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call fastcc void @aesl_internal_add_round_key(i64* %%4, i64* %%22), !dbg !20 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_345_count);
  aesl_internal_add_round_key((signed long long *)llvm_cbe_tmp__64, (signed long long *)llvm_cbe_tmp__80);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call fastcc void @aesl_internal_br_aes_ct64_ortho(i64* %%4), !dbg !22 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_346_count);
  aesl_internal_br_aes_ct64_ortho((signed long long *)llvm_cbe_tmp__64);
if (AESL_DEBUG_TRACE) {
}
  llvm_cbe_storemerge23__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__98;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__98:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge23 = phi i32 [ 0, %%21 ], [ %%34, %%23  for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_storemerge23_count);
  llvm_cbe_storemerge23 = (unsigned int )llvm_cbe_storemerge23__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge23 = 0x%X",llvm_cbe_storemerge23);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__91);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = shl i32 %%storemerge23, 2, !dbg !21 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_362_count);
  llvm_cbe_tmp__81 = (unsigned int )llvm_cbe_storemerge23 << 2u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__81);
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = sext i32 %%24 to i64, !dbg !21 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_363_count);
  llvm_cbe_tmp__82 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__81);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__82);
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = getelementptr inbounds [16 x i32]* %%w, i64 0, i64 %%25, !dbg !21 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_364_count);
  llvm_cbe_tmp__83 = (signed int *)(&llvm_cbe_w[(((signed long long )llvm_cbe_tmp__82))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__82));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = sext i32 %%storemerge23 to i64, !dbg !21 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_365_count);
  llvm_cbe_tmp__84 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge23);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__84);
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = getelementptr inbounds [8 x i64]* %%q, i64 0, i64 %%27, !dbg !21 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_366_count);
  llvm_cbe_tmp__85 = (signed long long *)(&llvm_cbe_q[(((signed long long )llvm_cbe_tmp__84))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__84));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__84) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'q' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = load i64* %%28, align 8, !dbg !21 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_367_count);
  llvm_cbe_tmp__86 = (unsigned long long )*llvm_cbe_tmp__85;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__86);
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = add nsw i32 %%storemerge23, 4, !dbg !21 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_368_count);
  llvm_cbe_tmp__87 = (unsigned int )((unsigned int )(llvm_cbe_storemerge23&4294967295ull)) + ((unsigned int )(4u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__87&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = sext i32 %%30 to i64, !dbg !21 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_369_count);
  llvm_cbe_tmp__88 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__87);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__88);
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = getelementptr inbounds [8 x i64]* %%q, i64 0, i64 %%31, !dbg !21 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_370_count);
  llvm_cbe_tmp__89 = (signed long long *)(&llvm_cbe_q[(((signed long long )llvm_cbe_tmp__88))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__88));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__88) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'q' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = load i64* %%32, align 8, !dbg !21 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_371_count);
  llvm_cbe_tmp__90 = (unsigned long long )*llvm_cbe_tmp__89;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__90);
if (AESL_DEBUG_TRACE)
printf("\n  call fastcc void @aesl_internal_br_aes_ct64_interleave_out(i32* %%26, i64 %%29, i64 %%33), !dbg !21 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_372_count);
  aesl_internal_br_aes_ct64_interleave_out((signed int *)llvm_cbe_tmp__83, llvm_cbe_tmp__86, llvm_cbe_tmp__90);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__86);
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__90);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = add nsw i32 %%storemerge23, 1, !dbg !22 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_373_count);
  llvm_cbe_tmp__91 = (unsigned int )((unsigned int )(llvm_cbe_storemerge23&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__91&4294967295ull)));
  if (((llvm_cbe_tmp__91&4294967295U) == (4u&4294967295U))) {
    goto llvm_cbe_tmp__99;
  } else {
    llvm_cbe_storemerge23__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__91;   /* for PHI node */
    goto llvm_cbe_tmp__98;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__99:
if (AESL_DEBUG_TRACE)
printf("\n  call fastcc void @aesl_internal_br_range_enc32le(i8* %%out, i32* %%6), !dbg !18 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_389_count);
  aesl_internal_br_range_enc32le(( char *)llvm_cbe_out, (signed int *)llvm_cbe_tmp__66);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = getelementptr inbounds i32* %%ivw, i64 3, !dbg !19 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_390_count);
  llvm_cbe_tmp__92 = (signed int *)(&llvm_cbe_ivw[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call fastcc void @aesl_internal_inc4_be(i32* %%36), !dbg !19 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_391_count);
  aesl_internal_inc4_be((signed int *)llvm_cbe_tmp__92);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = getelementptr inbounds i32* %%ivw, i64 7, !dbg !19 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_392_count);
  llvm_cbe_tmp__93 = (signed int *)(&llvm_cbe_ivw[(((signed long long )7ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call fastcc void @aesl_internal_inc4_be(i32* %%37), !dbg !19 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_393_count);
  aesl_internal_inc4_be((signed int *)llvm_cbe_tmp__93);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = getelementptr inbounds i32* %%ivw, i64 11, !dbg !19 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_394_count);
  llvm_cbe_tmp__94 = (signed int *)(&llvm_cbe_ivw[(((signed long long )11ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call fastcc void @aesl_internal_inc4_be(i32* %%38), !dbg !19 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_395_count);
  aesl_internal_inc4_be((signed int *)llvm_cbe_tmp__94);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = getelementptr inbounds i32* %%ivw, i64 15, !dbg !19 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_396_count);
  llvm_cbe_tmp__95 = (signed int *)(&llvm_cbe_ivw[(((signed long long )15ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call fastcc void @aesl_internal_inc4_be(i32* %%39), !dbg !19 for 0x%I64xth hint within @aesl_internal_aes_ctr4x  --> \n", ++aesl_llvm_cbe_397_count);
  aesl_internal_inc4_be((signed int *)llvm_cbe_tmp__95);
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @aesl_internal_aes_ctr4x}\n");
  return;
}


static void aesl_internal_br_aes_ct64_interleave_in(signed long long *llvm_cbe_q0, signed long long *llvm_cbe_q1, signed int *llvm_cbe_w) {
  static  unsigned long long aesl_llvm_cbe_399_count = 0;
  static  unsigned long long aesl_llvm_cbe_400_count = 0;
  static  unsigned long long aesl_llvm_cbe_401_count = 0;
  static  unsigned long long aesl_llvm_cbe_402_count = 0;
  static  unsigned long long aesl_llvm_cbe_403_count = 0;
  static  unsigned long long aesl_llvm_cbe_404_count = 0;
  static  unsigned long long aesl_llvm_cbe_405_count = 0;
  static  unsigned long long aesl_llvm_cbe_406_count = 0;
  static  unsigned long long aesl_llvm_cbe_407_count = 0;
  static  unsigned long long aesl_llvm_cbe_408_count = 0;
  unsigned int llvm_cbe_tmp__100;
  static  unsigned long long aesl_llvm_cbe_409_count = 0;
  unsigned long long llvm_cbe_tmp__101;
  static  unsigned long long aesl_llvm_cbe_410_count = 0;
  static  unsigned long long aesl_llvm_cbe_411_count = 0;
  static  unsigned long long aesl_llvm_cbe_412_count = 0;
  static  unsigned long long aesl_llvm_cbe_413_count = 0;
  static  unsigned long long aesl_llvm_cbe_414_count = 0;
  static  unsigned long long aesl_llvm_cbe_415_count = 0;
  static  unsigned long long aesl_llvm_cbe_416_count = 0;
  static  unsigned long long aesl_llvm_cbe_417_count = 0;
  static  unsigned long long aesl_llvm_cbe_418_count = 0;
  signed int *llvm_cbe_tmp__102;
  static  unsigned long long aesl_llvm_cbe_419_count = 0;
  unsigned int llvm_cbe_tmp__103;
  static  unsigned long long aesl_llvm_cbe_420_count = 0;
  unsigned long long llvm_cbe_tmp__104;
  static  unsigned long long aesl_llvm_cbe_421_count = 0;
  static  unsigned long long aesl_llvm_cbe_422_count = 0;
  static  unsigned long long aesl_llvm_cbe_423_count = 0;
  static  unsigned long long aesl_llvm_cbe_424_count = 0;
  static  unsigned long long aesl_llvm_cbe_425_count = 0;
  static  unsigned long long aesl_llvm_cbe_426_count = 0;
  static  unsigned long long aesl_llvm_cbe_427_count = 0;
  static  unsigned long long aesl_llvm_cbe_428_count = 0;
  static  unsigned long long aesl_llvm_cbe_429_count = 0;
  signed int *llvm_cbe_tmp__105;
  static  unsigned long long aesl_llvm_cbe_430_count = 0;
  unsigned int llvm_cbe_tmp__106;
  static  unsigned long long aesl_llvm_cbe_431_count = 0;
  unsigned long long llvm_cbe_tmp__107;
  static  unsigned long long aesl_llvm_cbe_432_count = 0;
  static  unsigned long long aesl_llvm_cbe_433_count = 0;
  static  unsigned long long aesl_llvm_cbe_434_count = 0;
  static  unsigned long long aesl_llvm_cbe_435_count = 0;
  static  unsigned long long aesl_llvm_cbe_436_count = 0;
  static  unsigned long long aesl_llvm_cbe_437_count = 0;
  static  unsigned long long aesl_llvm_cbe_438_count = 0;
  static  unsigned long long aesl_llvm_cbe_439_count = 0;
  static  unsigned long long aesl_llvm_cbe_440_count = 0;
  signed int *llvm_cbe_tmp__108;
  static  unsigned long long aesl_llvm_cbe_441_count = 0;
  unsigned int llvm_cbe_tmp__109;
  static  unsigned long long aesl_llvm_cbe_442_count = 0;
  unsigned long long llvm_cbe_tmp__110;
  static  unsigned long long aesl_llvm_cbe_443_count = 0;
  static  unsigned long long aesl_llvm_cbe_444_count = 0;
  static  unsigned long long aesl_llvm_cbe_445_count = 0;
  static  unsigned long long aesl_llvm_cbe_446_count = 0;
  static  unsigned long long aesl_llvm_cbe_447_count = 0;
  static  unsigned long long aesl_llvm_cbe_448_count = 0;
  static  unsigned long long aesl_llvm_cbe_449_count = 0;
  static  unsigned long long aesl_llvm_cbe_450_count = 0;
  static  unsigned long long aesl_llvm_cbe_451_count = 0;
  unsigned long long llvm_cbe_tmp__111;
  static  unsigned long long aesl_llvm_cbe_452_count = 0;
  unsigned long long llvm_cbe_tmp__112;
  static  unsigned long long aesl_llvm_cbe_453_count = 0;
  static  unsigned long long aesl_llvm_cbe_454_count = 0;
  static  unsigned long long aesl_llvm_cbe_455_count = 0;
  static  unsigned long long aesl_llvm_cbe_456_count = 0;
  static  unsigned long long aesl_llvm_cbe_457_count = 0;
  static  unsigned long long aesl_llvm_cbe_458_count = 0;
  static  unsigned long long aesl_llvm_cbe_459_count = 0;
  static  unsigned long long aesl_llvm_cbe_460_count = 0;
  static  unsigned long long aesl_llvm_cbe_461_count = 0;
  unsigned long long llvm_cbe_tmp__113;
  static  unsigned long long aesl_llvm_cbe_462_count = 0;
  unsigned long long llvm_cbe_tmp__114;
  static  unsigned long long aesl_llvm_cbe_463_count = 0;
  static  unsigned long long aesl_llvm_cbe_464_count = 0;
  static  unsigned long long aesl_llvm_cbe_465_count = 0;
  static  unsigned long long aesl_llvm_cbe_466_count = 0;
  static  unsigned long long aesl_llvm_cbe_467_count = 0;
  static  unsigned long long aesl_llvm_cbe_468_count = 0;
  static  unsigned long long aesl_llvm_cbe_469_count = 0;
  static  unsigned long long aesl_llvm_cbe_470_count = 0;
  static  unsigned long long aesl_llvm_cbe_471_count = 0;
  unsigned long long llvm_cbe_tmp__115;
  static  unsigned long long aesl_llvm_cbe_472_count = 0;
  unsigned long long llvm_cbe_tmp__116;
  static  unsigned long long aesl_llvm_cbe_473_count = 0;
  static  unsigned long long aesl_llvm_cbe_474_count = 0;
  static  unsigned long long aesl_llvm_cbe_475_count = 0;
  static  unsigned long long aesl_llvm_cbe_476_count = 0;
  static  unsigned long long aesl_llvm_cbe_477_count = 0;
  static  unsigned long long aesl_llvm_cbe_478_count = 0;
  static  unsigned long long aesl_llvm_cbe_479_count = 0;
  static  unsigned long long aesl_llvm_cbe_480_count = 0;
  static  unsigned long long aesl_llvm_cbe_481_count = 0;
  unsigned long long llvm_cbe_tmp__117;
  static  unsigned long long aesl_llvm_cbe_482_count = 0;
  unsigned long long llvm_cbe_tmp__118;
  static  unsigned long long aesl_llvm_cbe_483_count = 0;
  static  unsigned long long aesl_llvm_cbe_484_count = 0;
  static  unsigned long long aesl_llvm_cbe_485_count = 0;
  static  unsigned long long aesl_llvm_cbe_486_count = 0;
  static  unsigned long long aesl_llvm_cbe_487_count = 0;
  static  unsigned long long aesl_llvm_cbe_488_count = 0;
  static  unsigned long long aesl_llvm_cbe_489_count = 0;
  static  unsigned long long aesl_llvm_cbe_490_count = 0;
  static  unsigned long long aesl_llvm_cbe_491_count = 0;
  unsigned long long llvm_cbe_tmp__119;
  static  unsigned long long aesl_llvm_cbe_492_count = 0;
  static  unsigned long long aesl_llvm_cbe_493_count = 0;
  static  unsigned long long aesl_llvm_cbe_494_count = 0;
  static  unsigned long long aesl_llvm_cbe_495_count = 0;
  static  unsigned long long aesl_llvm_cbe_496_count = 0;
  static  unsigned long long aesl_llvm_cbe_497_count = 0;
  static  unsigned long long aesl_llvm_cbe_498_count = 0;
  static  unsigned long long aesl_llvm_cbe_499_count = 0;
  static  unsigned long long aesl_llvm_cbe_500_count = 0;
  unsigned long long llvm_cbe_tmp__120;
  static  unsigned long long aesl_llvm_cbe_501_count = 0;
  static  unsigned long long aesl_llvm_cbe_502_count = 0;
  static  unsigned long long aesl_llvm_cbe_503_count = 0;
  static  unsigned long long aesl_llvm_cbe_504_count = 0;
  static  unsigned long long aesl_llvm_cbe_505_count = 0;
  static  unsigned long long aesl_llvm_cbe_506_count = 0;
  static  unsigned long long aesl_llvm_cbe_507_count = 0;
  static  unsigned long long aesl_llvm_cbe_508_count = 0;
  static  unsigned long long aesl_llvm_cbe_509_count = 0;
  unsigned long long llvm_cbe_tmp__121;
  static  unsigned long long aesl_llvm_cbe_510_count = 0;
  static  unsigned long long aesl_llvm_cbe_511_count = 0;
  static  unsigned long long aesl_llvm_cbe_512_count = 0;
  static  unsigned long long aesl_llvm_cbe_513_count = 0;
  static  unsigned long long aesl_llvm_cbe_514_count = 0;
  static  unsigned long long aesl_llvm_cbe_515_count = 0;
  static  unsigned long long aesl_llvm_cbe_516_count = 0;
  static  unsigned long long aesl_llvm_cbe_517_count = 0;
  static  unsigned long long aesl_llvm_cbe_518_count = 0;
  unsigned long long llvm_cbe_tmp__122;
  static  unsigned long long aesl_llvm_cbe_519_count = 0;
  static  unsigned long long aesl_llvm_cbe_520_count = 0;
  static  unsigned long long aesl_llvm_cbe_521_count = 0;
  static  unsigned long long aesl_llvm_cbe_522_count = 0;
  static  unsigned long long aesl_llvm_cbe_523_count = 0;
  static  unsigned long long aesl_llvm_cbe_524_count = 0;
  static  unsigned long long aesl_llvm_cbe_525_count = 0;
  static  unsigned long long aesl_llvm_cbe_526_count = 0;
  static  unsigned long long aesl_llvm_cbe_527_count = 0;
  unsigned long long llvm_cbe_tmp__123;
  static  unsigned long long aesl_llvm_cbe_528_count = 0;
  unsigned long long llvm_cbe_tmp__124;
  static  unsigned long long aesl_llvm_cbe_529_count = 0;
  static  unsigned long long aesl_llvm_cbe_530_count = 0;
  static  unsigned long long aesl_llvm_cbe_531_count = 0;
  static  unsigned long long aesl_llvm_cbe_532_count = 0;
  static  unsigned long long aesl_llvm_cbe_533_count = 0;
  static  unsigned long long aesl_llvm_cbe_534_count = 0;
  static  unsigned long long aesl_llvm_cbe_535_count = 0;
  static  unsigned long long aesl_llvm_cbe_536_count = 0;
  static  unsigned long long aesl_llvm_cbe_537_count = 0;
  unsigned long long llvm_cbe_tmp__125;
  static  unsigned long long aesl_llvm_cbe_538_count = 0;
  unsigned long long llvm_cbe_tmp__126;
  static  unsigned long long aesl_llvm_cbe_539_count = 0;
  static  unsigned long long aesl_llvm_cbe_540_count = 0;
  static  unsigned long long aesl_llvm_cbe_541_count = 0;
  static  unsigned long long aesl_llvm_cbe_542_count = 0;
  static  unsigned long long aesl_llvm_cbe_543_count = 0;
  static  unsigned long long aesl_llvm_cbe_544_count = 0;
  static  unsigned long long aesl_llvm_cbe_545_count = 0;
  static  unsigned long long aesl_llvm_cbe_546_count = 0;
  static  unsigned long long aesl_llvm_cbe_547_count = 0;
  unsigned long long llvm_cbe_tmp__127;
  static  unsigned long long aesl_llvm_cbe_548_count = 0;
  unsigned long long llvm_cbe_tmp__128;
  static  unsigned long long aesl_llvm_cbe_549_count = 0;
  static  unsigned long long aesl_llvm_cbe_550_count = 0;
  static  unsigned long long aesl_llvm_cbe_551_count = 0;
  static  unsigned long long aesl_llvm_cbe_552_count = 0;
  static  unsigned long long aesl_llvm_cbe_553_count = 0;
  static  unsigned long long aesl_llvm_cbe_554_count = 0;
  static  unsigned long long aesl_llvm_cbe_555_count = 0;
  static  unsigned long long aesl_llvm_cbe_556_count = 0;
  static  unsigned long long aesl_llvm_cbe_557_count = 0;
  unsigned long long llvm_cbe_tmp__129;
  static  unsigned long long aesl_llvm_cbe_558_count = 0;
  unsigned long long llvm_cbe_tmp__130;
  static  unsigned long long aesl_llvm_cbe_559_count = 0;
  static  unsigned long long aesl_llvm_cbe_560_count = 0;
  static  unsigned long long aesl_llvm_cbe_561_count = 0;
  static  unsigned long long aesl_llvm_cbe_562_count = 0;
  static  unsigned long long aesl_llvm_cbe_563_count = 0;
  static  unsigned long long aesl_llvm_cbe_564_count = 0;
  static  unsigned long long aesl_llvm_cbe_565_count = 0;
  static  unsigned long long aesl_llvm_cbe_566_count = 0;
  static  unsigned long long aesl_llvm_cbe_567_count = 0;
  unsigned long long llvm_cbe_tmp__131;
  static  unsigned long long aesl_llvm_cbe_568_count = 0;
  static  unsigned long long aesl_llvm_cbe_569_count = 0;
  static  unsigned long long aesl_llvm_cbe_570_count = 0;
  static  unsigned long long aesl_llvm_cbe_571_count = 0;
  static  unsigned long long aesl_llvm_cbe_572_count = 0;
  static  unsigned long long aesl_llvm_cbe_573_count = 0;
  static  unsigned long long aesl_llvm_cbe_574_count = 0;
  static  unsigned long long aesl_llvm_cbe_575_count = 0;
  static  unsigned long long aesl_llvm_cbe_576_count = 0;
  unsigned long long llvm_cbe_tmp__132;
  static  unsigned long long aesl_llvm_cbe_577_count = 0;
  static  unsigned long long aesl_llvm_cbe_578_count = 0;
  static  unsigned long long aesl_llvm_cbe_579_count = 0;
  static  unsigned long long aesl_llvm_cbe_580_count = 0;
  static  unsigned long long aesl_llvm_cbe_581_count = 0;
  static  unsigned long long aesl_llvm_cbe_582_count = 0;
  static  unsigned long long aesl_llvm_cbe_583_count = 0;
  static  unsigned long long aesl_llvm_cbe_584_count = 0;
  static  unsigned long long aesl_llvm_cbe_585_count = 0;
  unsigned long long llvm_cbe_tmp__133;
  static  unsigned long long aesl_llvm_cbe_586_count = 0;
  unsigned long long llvm_cbe_tmp__134;
  static  unsigned long long aesl_llvm_cbe_587_count = 0;
  unsigned long long llvm_cbe_tmp__135;
  static  unsigned long long aesl_llvm_cbe_588_count = 0;
  static  unsigned long long aesl_llvm_cbe_589_count = 0;
  unsigned long long llvm_cbe_tmp__136;
  static  unsigned long long aesl_llvm_cbe_590_count = 0;
  unsigned long long llvm_cbe_tmp__137;
  static  unsigned long long aesl_llvm_cbe_591_count = 0;
  unsigned long long llvm_cbe_tmp__138;
  static  unsigned long long aesl_llvm_cbe_592_count = 0;
  static  unsigned long long aesl_llvm_cbe_593_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @aesl_internal_br_aes_ct64_interleave_in\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = load i32* %%w, align 4, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_in  --> \n", ++aesl_llvm_cbe_408_count);
  llvm_cbe_tmp__100 = (unsigned int )*llvm_cbe_w;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__100);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = zext i32 %%1 to i64, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_in  --> \n", ++aesl_llvm_cbe_409_count);
  llvm_cbe_tmp__101 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__100&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__101);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds i32* %%w, i64 1, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_in  --> \n", ++aesl_llvm_cbe_418_count);
  llvm_cbe_tmp__102 = (signed int *)(&llvm_cbe_w[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = load i32* %%3, align 4, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_in  --> \n", ++aesl_llvm_cbe_419_count);
  llvm_cbe_tmp__103 = (unsigned int )*llvm_cbe_tmp__102;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__103);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = zext i32 %%4 to i64, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_in  --> \n", ++aesl_llvm_cbe_420_count);
  llvm_cbe_tmp__104 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__103&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__104);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds i32* %%w, i64 2, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_in  --> \n", ++aesl_llvm_cbe_429_count);
  llvm_cbe_tmp__105 = (signed int *)(&llvm_cbe_w[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = load i32* %%6, align 4, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_in  --> \n", ++aesl_llvm_cbe_430_count);
  llvm_cbe_tmp__106 = (unsigned int )*llvm_cbe_tmp__105;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__106);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = zext i32 %%7 to i64, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_in  --> \n", ++aesl_llvm_cbe_431_count);
  llvm_cbe_tmp__107 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__106&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__107);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds i32* %%w, i64 3, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_in  --> \n", ++aesl_llvm_cbe_440_count);
  llvm_cbe_tmp__108 = (signed int *)(&llvm_cbe_w[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = load i32* %%9, align 4, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_in  --> \n", ++aesl_llvm_cbe_441_count);
  llvm_cbe_tmp__109 = (unsigned int )*llvm_cbe_tmp__108;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__109);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = zext i32 %%10 to i64, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_in  --> \n", ++aesl_llvm_cbe_442_count);
  llvm_cbe_tmp__110 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__109&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__110);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = shl nuw nsw i64 %%2, 16, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_in  --> \n", ++aesl_llvm_cbe_451_count);
  llvm_cbe_tmp__111 = (unsigned long long )llvm_cbe_tmp__101 << 16ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__111);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = or i64 %%12, %%2, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_in  --> \n", ++aesl_llvm_cbe_452_count);
  llvm_cbe_tmp__112 = (unsigned long long )llvm_cbe_tmp__111 | llvm_cbe_tmp__101;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__112);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = shl nuw nsw i64 %%5, 16, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_in  --> \n", ++aesl_llvm_cbe_461_count);
  llvm_cbe_tmp__113 = (unsigned long long )llvm_cbe_tmp__104 << 16ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__113);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = or i64 %%14, %%5, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_in  --> \n", ++aesl_llvm_cbe_462_count);
  llvm_cbe_tmp__114 = (unsigned long long )llvm_cbe_tmp__113 | llvm_cbe_tmp__104;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__114);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = shl nuw nsw i64 %%8, 16, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_in  --> \n", ++aesl_llvm_cbe_471_count);
  llvm_cbe_tmp__115 = (unsigned long long )llvm_cbe_tmp__107 << 16ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__115);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = or i64 %%16, %%8, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_in  --> \n", ++aesl_llvm_cbe_472_count);
  llvm_cbe_tmp__116 = (unsigned long long )llvm_cbe_tmp__115 | llvm_cbe_tmp__107;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__116);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = shl nuw nsw i64 %%11, 16, !dbg !21 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_in  --> \n", ++aesl_llvm_cbe_481_count);
  llvm_cbe_tmp__117 = (unsigned long long )llvm_cbe_tmp__110 << 16ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__117);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = or i64 %%18, %%11, !dbg !21 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_in  --> \n", ++aesl_llvm_cbe_482_count);
  llvm_cbe_tmp__118 = (unsigned long long )llvm_cbe_tmp__117 | llvm_cbe_tmp__110;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__118);
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = and i64 %%13, 281470681808895, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_in  --> \n", ++aesl_llvm_cbe_491_count);
  llvm_cbe_tmp__119 = (unsigned long long )llvm_cbe_tmp__112 & 281470681808895ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__119);
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = and i64 %%15, 281470681808895, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_in  --> \n", ++aesl_llvm_cbe_500_count);
  llvm_cbe_tmp__120 = (unsigned long long )llvm_cbe_tmp__114 & 281470681808895ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__120);
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = and i64 %%17, 281470681808895, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_in  --> \n", ++aesl_llvm_cbe_509_count);
  llvm_cbe_tmp__121 = (unsigned long long )llvm_cbe_tmp__116 & 281470681808895ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__121);
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = and i64 %%19, 281470681808895, !dbg !21 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_in  --> \n", ++aesl_llvm_cbe_518_count);
  llvm_cbe_tmp__122 = (unsigned long long )llvm_cbe_tmp__118 & 281470681808895ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__122);
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = shl nuw nsw i64 %%20, 8, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_in  --> \n", ++aesl_llvm_cbe_527_count);
  llvm_cbe_tmp__123 = (unsigned long long )llvm_cbe_tmp__119 << 8ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__123);
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = or i64 %%24, %%20, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_in  --> \n", ++aesl_llvm_cbe_528_count);
  llvm_cbe_tmp__124 = (unsigned long long )llvm_cbe_tmp__123 | llvm_cbe_tmp__119;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__124);
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = shl nuw nsw i64 %%21, 8, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_in  --> \n", ++aesl_llvm_cbe_537_count);
  llvm_cbe_tmp__125 = (unsigned long long )llvm_cbe_tmp__120 << 8ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__125);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = or i64 %%26, %%21, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_in  --> \n", ++aesl_llvm_cbe_538_count);
  llvm_cbe_tmp__126 = (unsigned long long )llvm_cbe_tmp__125 | llvm_cbe_tmp__120;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__126);
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = shl nuw nsw i64 %%22, 8, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_in  --> \n", ++aesl_llvm_cbe_547_count);
  llvm_cbe_tmp__127 = (unsigned long long )llvm_cbe_tmp__121 << 8ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__127);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = or i64 %%28, %%22, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_in  --> \n", ++aesl_llvm_cbe_548_count);
  llvm_cbe_tmp__128 = (unsigned long long )llvm_cbe_tmp__127 | llvm_cbe_tmp__121;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__128);
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = shl nuw nsw i64 %%23, 8, !dbg !21 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_in  --> \n", ++aesl_llvm_cbe_557_count);
  llvm_cbe_tmp__129 = (unsigned long long )llvm_cbe_tmp__122 << 8ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__129);
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = or i64 %%30, %%23, !dbg !21 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_in  --> \n", ++aesl_llvm_cbe_558_count);
  llvm_cbe_tmp__130 = (unsigned long long )llvm_cbe_tmp__129 | llvm_cbe_tmp__122;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__130);
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = and i64 %%25, 71777214294589695, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_in  --> \n", ++aesl_llvm_cbe_567_count);
  llvm_cbe_tmp__131 = (unsigned long long )llvm_cbe_tmp__124 & 71777214294589695ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__131);
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = and i64 %%27, 71777214294589695, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_in  --> \n", ++aesl_llvm_cbe_576_count);
  llvm_cbe_tmp__132 = (unsigned long long )llvm_cbe_tmp__126 & 71777214294589695ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__132);
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = shl nuw i64 %%29, 8, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_in  --> \n", ++aesl_llvm_cbe_585_count);
  llvm_cbe_tmp__133 = (unsigned long long )llvm_cbe_tmp__128 << 8ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__133);
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = and i64 %%34, -71777214294589696, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_in  --> \n", ++aesl_llvm_cbe_586_count);
  llvm_cbe_tmp__134 = (unsigned long long )llvm_cbe_tmp__133 & 18374966859414961920ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__134);
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = or i64 %%35, %%32, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_in  --> \n", ++aesl_llvm_cbe_587_count);
  llvm_cbe_tmp__135 = (unsigned long long )llvm_cbe_tmp__134 | llvm_cbe_tmp__131;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__135);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%36, i64* %%q0, align 8, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_in  --> \n", ++aesl_llvm_cbe_588_count);
  *llvm_cbe_q0 = llvm_cbe_tmp__135;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__135);
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = shl nuw i64 %%31, 8, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_in  --> \n", ++aesl_llvm_cbe_589_count);
  llvm_cbe_tmp__136 = (unsigned long long )llvm_cbe_tmp__130 << 8ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__136);
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = and i64 %%37, -71777214294589696, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_in  --> \n", ++aesl_llvm_cbe_590_count);
  llvm_cbe_tmp__137 = (unsigned long long )llvm_cbe_tmp__136 & 18374966859414961920ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__137);
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = or i64 %%38, %%33, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_in  --> \n", ++aesl_llvm_cbe_591_count);
  llvm_cbe_tmp__138 = (unsigned long long )llvm_cbe_tmp__137 | llvm_cbe_tmp__132;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__138);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%39, i64* %%q1, align 8, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_in  --> \n", ++aesl_llvm_cbe_592_count);
  *llvm_cbe_q1 = llvm_cbe_tmp__138;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__138);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @aesl_internal_br_aes_ct64_interleave_in}\n");
  return;
}


static void aesl_internal_br_aes_ct64_ortho(signed long long *llvm_cbe_q) {
  static  unsigned long long aesl_llvm_cbe_594_count = 0;
  static  unsigned long long aesl_llvm_cbe_595_count = 0;
  static  unsigned long long aesl_llvm_cbe_596_count = 0;
  static  unsigned long long aesl_llvm_cbe_597_count = 0;
  static  unsigned long long aesl_llvm_cbe_598_count = 0;
  static  unsigned long long aesl_llvm_cbe_599_count = 0;
  static  unsigned long long aesl_llvm_cbe_600_count = 0;
  static  unsigned long long aesl_llvm_cbe_601_count = 0;
  static  unsigned long long aesl_llvm_cbe_602_count = 0;
  static  unsigned long long aesl_llvm_cbe_603_count = 0;
  static  unsigned long long aesl_llvm_cbe_604_count = 0;
  static  unsigned long long aesl_llvm_cbe_605_count = 0;
  static  unsigned long long aesl_llvm_cbe_606_count = 0;
  static  unsigned long long aesl_llvm_cbe_607_count = 0;
  static  unsigned long long aesl_llvm_cbe_608_count = 0;
  static  unsigned long long aesl_llvm_cbe_609_count = 0;
  static  unsigned long long aesl_llvm_cbe_610_count = 0;
  static  unsigned long long aesl_llvm_cbe_611_count = 0;
  static  unsigned long long aesl_llvm_cbe_612_count = 0;
  static  unsigned long long aesl_llvm_cbe_613_count = 0;
  static  unsigned long long aesl_llvm_cbe_614_count = 0;
  static  unsigned long long aesl_llvm_cbe_615_count = 0;
  static  unsigned long long aesl_llvm_cbe_616_count = 0;
  static  unsigned long long aesl_llvm_cbe_617_count = 0;
  static  unsigned long long aesl_llvm_cbe_618_count = 0;
  static  unsigned long long aesl_llvm_cbe_619_count = 0;
  static  unsigned long long aesl_llvm_cbe_620_count = 0;
  static  unsigned long long aesl_llvm_cbe_621_count = 0;
  static  unsigned long long aesl_llvm_cbe_622_count = 0;
  static  unsigned long long aesl_llvm_cbe_623_count = 0;
  static  unsigned long long aesl_llvm_cbe_624_count = 0;
  static  unsigned long long aesl_llvm_cbe_625_count = 0;
  static  unsigned long long aesl_llvm_cbe_626_count = 0;
  static  unsigned long long aesl_llvm_cbe_627_count = 0;
  static  unsigned long long aesl_llvm_cbe_628_count = 0;
  static  unsigned long long aesl_llvm_cbe_629_count = 0;
  static  unsigned long long aesl_llvm_cbe_630_count = 0;
  static  unsigned long long aesl_llvm_cbe_631_count = 0;
  static  unsigned long long aesl_llvm_cbe_632_count = 0;
  static  unsigned long long aesl_llvm_cbe_633_count = 0;
  static  unsigned long long aesl_llvm_cbe_634_count = 0;
  static  unsigned long long aesl_llvm_cbe_635_count = 0;
  static  unsigned long long aesl_llvm_cbe_636_count = 0;
  static  unsigned long long aesl_llvm_cbe_637_count = 0;
  static  unsigned long long aesl_llvm_cbe_638_count = 0;
  static  unsigned long long aesl_llvm_cbe_639_count = 0;
  static  unsigned long long aesl_llvm_cbe_640_count = 0;
  static  unsigned long long aesl_llvm_cbe_641_count = 0;
  static  unsigned long long aesl_llvm_cbe_642_count = 0;
  static  unsigned long long aesl_llvm_cbe_643_count = 0;
  unsigned long long llvm_cbe_tmp__139;
  static  unsigned long long aesl_llvm_cbe_644_count = 0;
  static  unsigned long long aesl_llvm_cbe_645_count = 0;
  static  unsigned long long aesl_llvm_cbe_646_count = 0;
  static  unsigned long long aesl_llvm_cbe_647_count = 0;
  signed long long *llvm_cbe_tmp__140;
  static  unsigned long long aesl_llvm_cbe_648_count = 0;
  unsigned long long llvm_cbe_tmp__141;
  static  unsigned long long aesl_llvm_cbe_649_count = 0;
  static  unsigned long long aesl_llvm_cbe_650_count = 0;
  static  unsigned long long aesl_llvm_cbe_651_count = 0;
  static  unsigned long long aesl_llvm_cbe_652_count = 0;
  unsigned long long llvm_cbe_tmp__142;
  static  unsigned long long aesl_llvm_cbe_653_count = 0;
  unsigned long long llvm_cbe_tmp__143;
  static  unsigned long long aesl_llvm_cbe_654_count = 0;
  unsigned long long llvm_cbe_tmp__144;
  static  unsigned long long aesl_llvm_cbe_655_count = 0;
  unsigned long long llvm_cbe_tmp__145;
  static  unsigned long long aesl_llvm_cbe_656_count = 0;
  unsigned long long llvm_cbe_tmp__146;
  static  unsigned long long aesl_llvm_cbe_657_count = 0;
  unsigned long long llvm_cbe_tmp__147;
  static  unsigned long long aesl_llvm_cbe_658_count = 0;
  unsigned long long llvm_cbe_tmp__148;
  static  unsigned long long aesl_llvm_cbe_659_count = 0;
  unsigned long long llvm_cbe_tmp__149;
  static  unsigned long long aesl_llvm_cbe_660_count = 0;
  signed long long *llvm_cbe_tmp__150;
  static  unsigned long long aesl_llvm_cbe_661_count = 0;
  unsigned long long llvm_cbe_tmp__151;
  static  unsigned long long aesl_llvm_cbe_662_count = 0;
  static  unsigned long long aesl_llvm_cbe_663_count = 0;
  static  unsigned long long aesl_llvm_cbe_664_count = 0;
  static  unsigned long long aesl_llvm_cbe_665_count = 0;
  signed long long *llvm_cbe_tmp__152;
  static  unsigned long long aesl_llvm_cbe_666_count = 0;
  unsigned long long llvm_cbe_tmp__153;
  static  unsigned long long aesl_llvm_cbe_667_count = 0;
  static  unsigned long long aesl_llvm_cbe_668_count = 0;
  static  unsigned long long aesl_llvm_cbe_669_count = 0;
  static  unsigned long long aesl_llvm_cbe_670_count = 0;
  unsigned long long llvm_cbe_tmp__154;
  static  unsigned long long aesl_llvm_cbe_671_count = 0;
  unsigned long long llvm_cbe_tmp__155;
  static  unsigned long long aesl_llvm_cbe_672_count = 0;
  unsigned long long llvm_cbe_tmp__156;
  static  unsigned long long aesl_llvm_cbe_673_count = 0;
  unsigned long long llvm_cbe_tmp__157;
  static  unsigned long long aesl_llvm_cbe_674_count = 0;
  unsigned long long llvm_cbe_tmp__158;
  static  unsigned long long aesl_llvm_cbe_675_count = 0;
  unsigned long long llvm_cbe_tmp__159;
  static  unsigned long long aesl_llvm_cbe_676_count = 0;
  unsigned long long llvm_cbe_tmp__160;
  static  unsigned long long aesl_llvm_cbe_677_count = 0;
  unsigned long long llvm_cbe_tmp__161;
  static  unsigned long long aesl_llvm_cbe_678_count = 0;
  signed long long *llvm_cbe_tmp__162;
  static  unsigned long long aesl_llvm_cbe_679_count = 0;
  unsigned long long llvm_cbe_tmp__163;
  static  unsigned long long aesl_llvm_cbe_680_count = 0;
  static  unsigned long long aesl_llvm_cbe_681_count = 0;
  static  unsigned long long aesl_llvm_cbe_682_count = 0;
  static  unsigned long long aesl_llvm_cbe_683_count = 0;
  signed long long *llvm_cbe_tmp__164;
  static  unsigned long long aesl_llvm_cbe_684_count = 0;
  unsigned long long llvm_cbe_tmp__165;
  static  unsigned long long aesl_llvm_cbe_685_count = 0;
  static  unsigned long long aesl_llvm_cbe_686_count = 0;
  static  unsigned long long aesl_llvm_cbe_687_count = 0;
  static  unsigned long long aesl_llvm_cbe_688_count = 0;
  unsigned long long llvm_cbe_tmp__166;
  static  unsigned long long aesl_llvm_cbe_689_count = 0;
  unsigned long long llvm_cbe_tmp__167;
  static  unsigned long long aesl_llvm_cbe_690_count = 0;
  unsigned long long llvm_cbe_tmp__168;
  static  unsigned long long aesl_llvm_cbe_691_count = 0;
  unsigned long long llvm_cbe_tmp__169;
  static  unsigned long long aesl_llvm_cbe_692_count = 0;
  unsigned long long llvm_cbe_tmp__170;
  static  unsigned long long aesl_llvm_cbe_693_count = 0;
  unsigned long long llvm_cbe_tmp__171;
  static  unsigned long long aesl_llvm_cbe_694_count = 0;
  unsigned long long llvm_cbe_tmp__172;
  static  unsigned long long aesl_llvm_cbe_695_count = 0;
  unsigned long long llvm_cbe_tmp__173;
  static  unsigned long long aesl_llvm_cbe_696_count = 0;
  signed long long *llvm_cbe_tmp__174;
  static  unsigned long long aesl_llvm_cbe_697_count = 0;
  unsigned long long llvm_cbe_tmp__175;
  static  unsigned long long aesl_llvm_cbe_698_count = 0;
  static  unsigned long long aesl_llvm_cbe_699_count = 0;
  static  unsigned long long aesl_llvm_cbe_700_count = 0;
  static  unsigned long long aesl_llvm_cbe_701_count = 0;
  signed long long *llvm_cbe_tmp__176;
  static  unsigned long long aesl_llvm_cbe_702_count = 0;
  unsigned long long llvm_cbe_tmp__177;
  static  unsigned long long aesl_llvm_cbe_703_count = 0;
  static  unsigned long long aesl_llvm_cbe_704_count = 0;
  static  unsigned long long aesl_llvm_cbe_705_count = 0;
  static  unsigned long long aesl_llvm_cbe_706_count = 0;
  unsigned long long llvm_cbe_tmp__178;
  static  unsigned long long aesl_llvm_cbe_707_count = 0;
  unsigned long long llvm_cbe_tmp__179;
  static  unsigned long long aesl_llvm_cbe_708_count = 0;
  unsigned long long llvm_cbe_tmp__180;
  static  unsigned long long aesl_llvm_cbe_709_count = 0;
  unsigned long long llvm_cbe_tmp__181;
  static  unsigned long long aesl_llvm_cbe_710_count = 0;
  unsigned long long llvm_cbe_tmp__182;
  static  unsigned long long aesl_llvm_cbe_711_count = 0;
  unsigned long long llvm_cbe_tmp__183;
  static  unsigned long long aesl_llvm_cbe_712_count = 0;
  unsigned long long llvm_cbe_tmp__184;
  static  unsigned long long aesl_llvm_cbe_713_count = 0;
  unsigned long long llvm_cbe_tmp__185;
  static  unsigned long long aesl_llvm_cbe_714_count = 0;
  static  unsigned long long aesl_llvm_cbe_715_count = 0;
  static  unsigned long long aesl_llvm_cbe_716_count = 0;
  static  unsigned long long aesl_llvm_cbe_717_count = 0;
  static  unsigned long long aesl_llvm_cbe_718_count = 0;
  static  unsigned long long aesl_llvm_cbe_719_count = 0;
  static  unsigned long long aesl_llvm_cbe_720_count = 0;
  unsigned long long llvm_cbe_tmp__186;
  static  unsigned long long aesl_llvm_cbe_721_count = 0;
  unsigned long long llvm_cbe_tmp__187;
  static  unsigned long long aesl_llvm_cbe_722_count = 0;
  unsigned long long llvm_cbe_tmp__188;
  static  unsigned long long aesl_llvm_cbe_723_count = 0;
  unsigned long long llvm_cbe_tmp__189;
  static  unsigned long long aesl_llvm_cbe_724_count = 0;
  unsigned long long llvm_cbe_tmp__190;
  static  unsigned long long aesl_llvm_cbe_725_count = 0;
  unsigned long long llvm_cbe_tmp__191;
  static  unsigned long long aesl_llvm_cbe_726_count = 0;
  unsigned long long llvm_cbe_tmp__192;
  static  unsigned long long aesl_llvm_cbe_727_count = 0;
  unsigned long long llvm_cbe_tmp__193;
  static  unsigned long long aesl_llvm_cbe_728_count = 0;
  static  unsigned long long aesl_llvm_cbe_729_count = 0;
  static  unsigned long long aesl_llvm_cbe_730_count = 0;
  static  unsigned long long aesl_llvm_cbe_731_count = 0;
  static  unsigned long long aesl_llvm_cbe_732_count = 0;
  static  unsigned long long aesl_llvm_cbe_733_count = 0;
  static  unsigned long long aesl_llvm_cbe_734_count = 0;
  unsigned long long llvm_cbe_tmp__194;
  static  unsigned long long aesl_llvm_cbe_735_count = 0;
  unsigned long long llvm_cbe_tmp__195;
  static  unsigned long long aesl_llvm_cbe_736_count = 0;
  unsigned long long llvm_cbe_tmp__196;
  static  unsigned long long aesl_llvm_cbe_737_count = 0;
  unsigned long long llvm_cbe_tmp__197;
  static  unsigned long long aesl_llvm_cbe_738_count = 0;
  unsigned long long llvm_cbe_tmp__198;
  static  unsigned long long aesl_llvm_cbe_739_count = 0;
  unsigned long long llvm_cbe_tmp__199;
  static  unsigned long long aesl_llvm_cbe_740_count = 0;
  unsigned long long llvm_cbe_tmp__200;
  static  unsigned long long aesl_llvm_cbe_741_count = 0;
  unsigned long long llvm_cbe_tmp__201;
  static  unsigned long long aesl_llvm_cbe_742_count = 0;
  static  unsigned long long aesl_llvm_cbe_743_count = 0;
  static  unsigned long long aesl_llvm_cbe_744_count = 0;
  static  unsigned long long aesl_llvm_cbe_745_count = 0;
  static  unsigned long long aesl_llvm_cbe_746_count = 0;
  static  unsigned long long aesl_llvm_cbe_747_count = 0;
  static  unsigned long long aesl_llvm_cbe_748_count = 0;
  unsigned long long llvm_cbe_tmp__202;
  static  unsigned long long aesl_llvm_cbe_749_count = 0;
  unsigned long long llvm_cbe_tmp__203;
  static  unsigned long long aesl_llvm_cbe_750_count = 0;
  unsigned long long llvm_cbe_tmp__204;
  static  unsigned long long aesl_llvm_cbe_751_count = 0;
  unsigned long long llvm_cbe_tmp__205;
  static  unsigned long long aesl_llvm_cbe_752_count = 0;
  unsigned long long llvm_cbe_tmp__206;
  static  unsigned long long aesl_llvm_cbe_753_count = 0;
  unsigned long long llvm_cbe_tmp__207;
  static  unsigned long long aesl_llvm_cbe_754_count = 0;
  unsigned long long llvm_cbe_tmp__208;
  static  unsigned long long aesl_llvm_cbe_755_count = 0;
  unsigned long long llvm_cbe_tmp__209;
  static  unsigned long long aesl_llvm_cbe_756_count = 0;
  static  unsigned long long aesl_llvm_cbe_757_count = 0;
  static  unsigned long long aesl_llvm_cbe_758_count = 0;
  static  unsigned long long aesl_llvm_cbe_759_count = 0;
  static  unsigned long long aesl_llvm_cbe_760_count = 0;
  static  unsigned long long aesl_llvm_cbe_761_count = 0;
  static  unsigned long long aesl_llvm_cbe_762_count = 0;
  unsigned long long llvm_cbe_tmp__210;
  static  unsigned long long aesl_llvm_cbe_763_count = 0;
  unsigned long long llvm_cbe_tmp__211;
  static  unsigned long long aesl_llvm_cbe_764_count = 0;
  unsigned long long llvm_cbe_tmp__212;
  static  unsigned long long aesl_llvm_cbe_765_count = 0;
  unsigned long long llvm_cbe_tmp__213;
  static  unsigned long long aesl_llvm_cbe_766_count = 0;
  unsigned long long llvm_cbe_tmp__214;
  static  unsigned long long aesl_llvm_cbe_767_count = 0;
  unsigned long long llvm_cbe_tmp__215;
  static  unsigned long long aesl_llvm_cbe_768_count = 0;
  unsigned long long llvm_cbe_tmp__216;
  static  unsigned long long aesl_llvm_cbe_769_count = 0;
  unsigned long long llvm_cbe_tmp__217;
  static  unsigned long long aesl_llvm_cbe_770_count = 0;
  static  unsigned long long aesl_llvm_cbe_771_count = 0;
  static  unsigned long long aesl_llvm_cbe_772_count = 0;
  static  unsigned long long aesl_llvm_cbe_773_count = 0;
  static  unsigned long long aesl_llvm_cbe_774_count = 0;
  static  unsigned long long aesl_llvm_cbe_775_count = 0;
  static  unsigned long long aesl_llvm_cbe_776_count = 0;
  unsigned long long llvm_cbe_tmp__218;
  static  unsigned long long aesl_llvm_cbe_777_count = 0;
  unsigned long long llvm_cbe_tmp__219;
  static  unsigned long long aesl_llvm_cbe_778_count = 0;
  unsigned long long llvm_cbe_tmp__220;
  static  unsigned long long aesl_llvm_cbe_779_count = 0;
  unsigned long long llvm_cbe_tmp__221;
  static  unsigned long long aesl_llvm_cbe_780_count = 0;
  static  unsigned long long aesl_llvm_cbe_781_count = 0;
  unsigned long long llvm_cbe_tmp__222;
  static  unsigned long long aesl_llvm_cbe_782_count = 0;
  unsigned long long llvm_cbe_tmp__223;
  static  unsigned long long aesl_llvm_cbe_783_count = 0;
  unsigned long long llvm_cbe_tmp__224;
  static  unsigned long long aesl_llvm_cbe_784_count = 0;
  unsigned long long llvm_cbe_tmp__225;
  static  unsigned long long aesl_llvm_cbe_785_count = 0;
  static  unsigned long long aesl_llvm_cbe_786_count = 0;
  static  unsigned long long aesl_llvm_cbe_787_count = 0;
  static  unsigned long long aesl_llvm_cbe_788_count = 0;
  static  unsigned long long aesl_llvm_cbe_789_count = 0;
  static  unsigned long long aesl_llvm_cbe_790_count = 0;
  static  unsigned long long aesl_llvm_cbe_791_count = 0;
  static  unsigned long long aesl_llvm_cbe_792_count = 0;
  unsigned long long llvm_cbe_tmp__226;
  static  unsigned long long aesl_llvm_cbe_793_count = 0;
  unsigned long long llvm_cbe_tmp__227;
  static  unsigned long long aesl_llvm_cbe_794_count = 0;
  unsigned long long llvm_cbe_tmp__228;
  static  unsigned long long aesl_llvm_cbe_795_count = 0;
  unsigned long long llvm_cbe_tmp__229;
  static  unsigned long long aesl_llvm_cbe_796_count = 0;
  static  unsigned long long aesl_llvm_cbe_797_count = 0;
  unsigned long long llvm_cbe_tmp__230;
  static  unsigned long long aesl_llvm_cbe_798_count = 0;
  unsigned long long llvm_cbe_tmp__231;
  static  unsigned long long aesl_llvm_cbe_799_count = 0;
  unsigned long long llvm_cbe_tmp__232;
  static  unsigned long long aesl_llvm_cbe_800_count = 0;
  unsigned long long llvm_cbe_tmp__233;
  static  unsigned long long aesl_llvm_cbe_801_count = 0;
  static  unsigned long long aesl_llvm_cbe_802_count = 0;
  static  unsigned long long aesl_llvm_cbe_803_count = 0;
  static  unsigned long long aesl_llvm_cbe_804_count = 0;
  static  unsigned long long aesl_llvm_cbe_805_count = 0;
  static  unsigned long long aesl_llvm_cbe_806_count = 0;
  static  unsigned long long aesl_llvm_cbe_807_count = 0;
  static  unsigned long long aesl_llvm_cbe_808_count = 0;
  unsigned long long llvm_cbe_tmp__234;
  static  unsigned long long aesl_llvm_cbe_809_count = 0;
  unsigned long long llvm_cbe_tmp__235;
  static  unsigned long long aesl_llvm_cbe_810_count = 0;
  unsigned long long llvm_cbe_tmp__236;
  static  unsigned long long aesl_llvm_cbe_811_count = 0;
  unsigned long long llvm_cbe_tmp__237;
  static  unsigned long long aesl_llvm_cbe_812_count = 0;
  static  unsigned long long aesl_llvm_cbe_813_count = 0;
  unsigned long long llvm_cbe_tmp__238;
  static  unsigned long long aesl_llvm_cbe_814_count = 0;
  unsigned long long llvm_cbe_tmp__239;
  static  unsigned long long aesl_llvm_cbe_815_count = 0;
  unsigned long long llvm_cbe_tmp__240;
  static  unsigned long long aesl_llvm_cbe_816_count = 0;
  unsigned long long llvm_cbe_tmp__241;
  static  unsigned long long aesl_llvm_cbe_817_count = 0;
  static  unsigned long long aesl_llvm_cbe_818_count = 0;
  static  unsigned long long aesl_llvm_cbe_819_count = 0;
  static  unsigned long long aesl_llvm_cbe_820_count = 0;
  static  unsigned long long aesl_llvm_cbe_821_count = 0;
  static  unsigned long long aesl_llvm_cbe_822_count = 0;
  static  unsigned long long aesl_llvm_cbe_823_count = 0;
  static  unsigned long long aesl_llvm_cbe_824_count = 0;
  unsigned long long llvm_cbe_tmp__242;
  static  unsigned long long aesl_llvm_cbe_825_count = 0;
  unsigned long long llvm_cbe_tmp__243;
  static  unsigned long long aesl_llvm_cbe_826_count = 0;
  unsigned long long llvm_cbe_tmp__244;
  static  unsigned long long aesl_llvm_cbe_827_count = 0;
  unsigned long long llvm_cbe_tmp__245;
  static  unsigned long long aesl_llvm_cbe_828_count = 0;
  static  unsigned long long aesl_llvm_cbe_829_count = 0;
  unsigned long long llvm_cbe_tmp__246;
  static  unsigned long long aesl_llvm_cbe_830_count = 0;
  unsigned long long llvm_cbe_tmp__247;
  static  unsigned long long aesl_llvm_cbe_831_count = 0;
  unsigned long long llvm_cbe_tmp__248;
  static  unsigned long long aesl_llvm_cbe_832_count = 0;
  unsigned long long llvm_cbe_tmp__249;
  static  unsigned long long aesl_llvm_cbe_833_count = 0;
  static  unsigned long long aesl_llvm_cbe_834_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @aesl_internal_br_aes_ct64_ortho\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = load i64* %%q, align 8, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_643_count);
  llvm_cbe_tmp__139 = (unsigned long long )*llvm_cbe_q;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__139);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds i64* %%q, i64 1, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_647_count);
  llvm_cbe_tmp__140 = (signed long long *)(&llvm_cbe_q[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = load i64* %%2, align 8, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_648_count);
  llvm_cbe_tmp__141 = (unsigned long long )*llvm_cbe_tmp__140;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__141);
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = and i64 %%1, 6148914691236517205, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_652_count);
  llvm_cbe_tmp__142 = (unsigned long long )llvm_cbe_tmp__139 & 6148914691236517205ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__142);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = shl i64 %%3, 1, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_653_count);
  llvm_cbe_tmp__143 = (unsigned long long )llvm_cbe_tmp__141 << 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__143);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = and i64 %%5, -6148914691236517206, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_654_count);
  llvm_cbe_tmp__144 = (unsigned long long )llvm_cbe_tmp__143 & 12297829382473034410ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__144);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = or i64 %%6, %%4, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_655_count);
  llvm_cbe_tmp__145 = (unsigned long long )llvm_cbe_tmp__144 | llvm_cbe_tmp__142;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__145);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = lshr i64 %%1, 1, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_656_count);
  llvm_cbe_tmp__146 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_tmp__139&18446744073709551615ull)) >> ((unsigned long long )(1ull&18446744073709551615ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__146&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = and i64 %%8, 6148914691236517205, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_657_count);
  llvm_cbe_tmp__147 = (unsigned long long )llvm_cbe_tmp__146 & 6148914691236517205ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__147);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = and i64 %%3, -6148914691236517206, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_658_count);
  llvm_cbe_tmp__148 = (unsigned long long )llvm_cbe_tmp__141 & 12297829382473034410ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__148);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = or i64 %%9, %%10, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_659_count);
  llvm_cbe_tmp__149 = (unsigned long long )llvm_cbe_tmp__147 | llvm_cbe_tmp__148;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__149);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = getelementptr inbounds i64* %%q, i64 2, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_660_count);
  llvm_cbe_tmp__150 = (signed long long *)(&llvm_cbe_q[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = load i64* %%12, align 8, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_661_count);
  llvm_cbe_tmp__151 = (unsigned long long )*llvm_cbe_tmp__150;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__151);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = getelementptr inbounds i64* %%q, i64 3, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_665_count);
  llvm_cbe_tmp__152 = (signed long long *)(&llvm_cbe_q[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = load i64* %%14, align 8, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_666_count);
  llvm_cbe_tmp__153 = (unsigned long long )*llvm_cbe_tmp__152;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__153);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = and i64 %%13, 6148914691236517205, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_670_count);
  llvm_cbe_tmp__154 = (unsigned long long )llvm_cbe_tmp__151 & 6148914691236517205ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__154);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = shl i64 %%15, 1, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_671_count);
  llvm_cbe_tmp__155 = (unsigned long long )llvm_cbe_tmp__153 << 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__155);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = and i64 %%17, -6148914691236517206, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_672_count);
  llvm_cbe_tmp__156 = (unsigned long long )llvm_cbe_tmp__155 & 12297829382473034410ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__156);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = or i64 %%18, %%16, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_673_count);
  llvm_cbe_tmp__157 = (unsigned long long )llvm_cbe_tmp__156 | llvm_cbe_tmp__154;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__157);
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = lshr i64 %%13, 1, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_674_count);
  llvm_cbe_tmp__158 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_tmp__151&18446744073709551615ull)) >> ((unsigned long long )(1ull&18446744073709551615ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__158&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = and i64 %%20, 6148914691236517205, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_675_count);
  llvm_cbe_tmp__159 = (unsigned long long )llvm_cbe_tmp__158 & 6148914691236517205ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__159);
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = and i64 %%15, -6148914691236517206, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_676_count);
  llvm_cbe_tmp__160 = (unsigned long long )llvm_cbe_tmp__153 & 12297829382473034410ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__160);
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = or i64 %%21, %%22, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_677_count);
  llvm_cbe_tmp__161 = (unsigned long long )llvm_cbe_tmp__159 | llvm_cbe_tmp__160;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__161);
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = getelementptr inbounds i64* %%q, i64 4, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_678_count);
  llvm_cbe_tmp__162 = (signed long long *)(&llvm_cbe_q[(((signed long long )4ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = load i64* %%24, align 8, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_679_count);
  llvm_cbe_tmp__163 = (unsigned long long )*llvm_cbe_tmp__162;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__163);
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = getelementptr inbounds i64* %%q, i64 5, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_683_count);
  llvm_cbe_tmp__164 = (signed long long *)(&llvm_cbe_q[(((signed long long )5ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = load i64* %%26, align 8, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_684_count);
  llvm_cbe_tmp__165 = (unsigned long long )*llvm_cbe_tmp__164;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__165);
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = and i64 %%25, 6148914691236517205, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_688_count);
  llvm_cbe_tmp__166 = (unsigned long long )llvm_cbe_tmp__163 & 6148914691236517205ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__166);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = shl i64 %%27, 1, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_689_count);
  llvm_cbe_tmp__167 = (unsigned long long )llvm_cbe_tmp__165 << 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__167);
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = and i64 %%29, -6148914691236517206, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_690_count);
  llvm_cbe_tmp__168 = (unsigned long long )llvm_cbe_tmp__167 & 12297829382473034410ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__168);
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = or i64 %%30, %%28, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_691_count);
  llvm_cbe_tmp__169 = (unsigned long long )llvm_cbe_tmp__168 | llvm_cbe_tmp__166;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__169);
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = lshr i64 %%25, 1, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_692_count);
  llvm_cbe_tmp__170 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_tmp__163&18446744073709551615ull)) >> ((unsigned long long )(1ull&18446744073709551615ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__170&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = and i64 %%32, 6148914691236517205, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_693_count);
  llvm_cbe_tmp__171 = (unsigned long long )llvm_cbe_tmp__170 & 6148914691236517205ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__171);
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = and i64 %%27, -6148914691236517206, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_694_count);
  llvm_cbe_tmp__172 = (unsigned long long )llvm_cbe_tmp__165 & 12297829382473034410ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__172);
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = or i64 %%33, %%34, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_695_count);
  llvm_cbe_tmp__173 = (unsigned long long )llvm_cbe_tmp__171 | llvm_cbe_tmp__172;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__173);
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = getelementptr inbounds i64* %%q, i64 6, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_696_count);
  llvm_cbe_tmp__174 = (signed long long *)(&llvm_cbe_q[(((signed long long )6ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = load i64* %%36, align 8, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_697_count);
  llvm_cbe_tmp__175 = (unsigned long long )*llvm_cbe_tmp__174;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__175);
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = getelementptr inbounds i64* %%q, i64 7, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_701_count);
  llvm_cbe_tmp__176 = (signed long long *)(&llvm_cbe_q[(((signed long long )7ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = load i64* %%38, align 8, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_702_count);
  llvm_cbe_tmp__177 = (unsigned long long )*llvm_cbe_tmp__176;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__177);
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = and i64 %%37, 6148914691236517205, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_706_count);
  llvm_cbe_tmp__178 = (unsigned long long )llvm_cbe_tmp__175 & 6148914691236517205ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__178);
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = shl i64 %%39, 1, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_707_count);
  llvm_cbe_tmp__179 = (unsigned long long )llvm_cbe_tmp__177 << 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__179);
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = and i64 %%41, -6148914691236517206, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_708_count);
  llvm_cbe_tmp__180 = (unsigned long long )llvm_cbe_tmp__179 & 12297829382473034410ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__180);
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = or i64 %%42, %%40, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_709_count);
  llvm_cbe_tmp__181 = (unsigned long long )llvm_cbe_tmp__180 | llvm_cbe_tmp__178;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__181);
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = lshr i64 %%37, 1, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_710_count);
  llvm_cbe_tmp__182 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_tmp__175&18446744073709551615ull)) >> ((unsigned long long )(1ull&18446744073709551615ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__182&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = and i64 %%44, 6148914691236517205, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_711_count);
  llvm_cbe_tmp__183 = (unsigned long long )llvm_cbe_tmp__182 & 6148914691236517205ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__183);
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = and i64 %%39, -6148914691236517206, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_712_count);
  llvm_cbe_tmp__184 = (unsigned long long )llvm_cbe_tmp__177 & 12297829382473034410ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__184);
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = or i64 %%45, %%46, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_713_count);
  llvm_cbe_tmp__185 = (unsigned long long )llvm_cbe_tmp__183 | llvm_cbe_tmp__184;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__185);
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = and i64 %%7, 3689348814741910323, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_720_count);
  llvm_cbe_tmp__186 = (unsigned long long )llvm_cbe_tmp__145 & 3689348814741910323ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__186);
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = shl i64 %%19, 2, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_721_count);
  llvm_cbe_tmp__187 = (unsigned long long )llvm_cbe_tmp__157 << 2ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__187);
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = and i64 %%49, -3689348814741910324, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_722_count);
  llvm_cbe_tmp__188 = (unsigned long long )llvm_cbe_tmp__187 & 14757395258967641292ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__188);
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = or i64 %%50, %%48, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_723_count);
  llvm_cbe_tmp__189 = (unsigned long long )llvm_cbe_tmp__188 | llvm_cbe_tmp__186;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__189);
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = lshr i64 %%7, 2, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_724_count);
  llvm_cbe_tmp__190 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_tmp__145&18446744073709551615ull)) >> ((unsigned long long )(2ull&18446744073709551615ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__190&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = and i64 %%52, 3689348814741910323, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_725_count);
  llvm_cbe_tmp__191 = (unsigned long long )llvm_cbe_tmp__190 & 3689348814741910323ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__191);
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = and i64 %%19, -3689348814741910324, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_726_count);
  llvm_cbe_tmp__192 = (unsigned long long )llvm_cbe_tmp__157 & 14757395258967641292ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__192);
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = or i64 %%53, %%54, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_727_count);
  llvm_cbe_tmp__193 = (unsigned long long )llvm_cbe_tmp__191 | llvm_cbe_tmp__192;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__193);
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = and i64 %%11, 3689348814741910323, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_734_count);
  llvm_cbe_tmp__194 = (unsigned long long )llvm_cbe_tmp__149 & 3689348814741910323ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__194);
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = shl i64 %%23, 2, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_735_count);
  llvm_cbe_tmp__195 = (unsigned long long )llvm_cbe_tmp__161 << 2ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__195);
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = and i64 %%57, -3689348814741910324, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_736_count);
  llvm_cbe_tmp__196 = (unsigned long long )llvm_cbe_tmp__195 & 14757395258967641292ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__196);
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = or i64 %%58, %%56, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_737_count);
  llvm_cbe_tmp__197 = (unsigned long long )llvm_cbe_tmp__196 | llvm_cbe_tmp__194;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__197);
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = lshr i64 %%11, 2, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_738_count);
  llvm_cbe_tmp__198 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_tmp__149&18446744073709551615ull)) >> ((unsigned long long )(2ull&18446744073709551615ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__198&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = and i64 %%60, 3689348814741910323, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_739_count);
  llvm_cbe_tmp__199 = (unsigned long long )llvm_cbe_tmp__198 & 3689348814741910323ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__199);
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = and i64 %%23, -3689348814741910324, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_740_count);
  llvm_cbe_tmp__200 = (unsigned long long )llvm_cbe_tmp__161 & 14757395258967641292ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__200);
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = or i64 %%61, %%62, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_741_count);
  llvm_cbe_tmp__201 = (unsigned long long )llvm_cbe_tmp__199 | llvm_cbe_tmp__200;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__201);
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = and i64 %%31, 3689348814741910323, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_748_count);
  llvm_cbe_tmp__202 = (unsigned long long )llvm_cbe_tmp__169 & 3689348814741910323ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__202);
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = shl i64 %%43, 2, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_749_count);
  llvm_cbe_tmp__203 = (unsigned long long )llvm_cbe_tmp__181 << 2ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__203);
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = and i64 %%65, -3689348814741910324, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_750_count);
  llvm_cbe_tmp__204 = (unsigned long long )llvm_cbe_tmp__203 & 14757395258967641292ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__204);
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = or i64 %%66, %%64, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_751_count);
  llvm_cbe_tmp__205 = (unsigned long long )llvm_cbe_tmp__204 | llvm_cbe_tmp__202;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__205);
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = lshr i64 %%31, 2, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_752_count);
  llvm_cbe_tmp__206 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_tmp__169&18446744073709551615ull)) >> ((unsigned long long )(2ull&18446744073709551615ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__206&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%69 = and i64 %%68, 3689348814741910323, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_753_count);
  llvm_cbe_tmp__207 = (unsigned long long )llvm_cbe_tmp__206 & 3689348814741910323ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__207);
if (AESL_DEBUG_TRACE)
printf("\n  %%70 = and i64 %%43, -3689348814741910324, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_754_count);
  llvm_cbe_tmp__208 = (unsigned long long )llvm_cbe_tmp__181 & 14757395258967641292ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__208);
if (AESL_DEBUG_TRACE)
printf("\n  %%71 = or i64 %%69, %%70, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_755_count);
  llvm_cbe_tmp__209 = (unsigned long long )llvm_cbe_tmp__207 | llvm_cbe_tmp__208;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__209);
if (AESL_DEBUG_TRACE)
printf("\n  %%72 = and i64 %%35, 3689348814741910323, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_762_count);
  llvm_cbe_tmp__210 = (unsigned long long )llvm_cbe_tmp__173 & 3689348814741910323ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__210);
if (AESL_DEBUG_TRACE)
printf("\n  %%73 = shl i64 %%47, 2, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_763_count);
  llvm_cbe_tmp__211 = (unsigned long long )llvm_cbe_tmp__185 << 2ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__211);
if (AESL_DEBUG_TRACE)
printf("\n  %%74 = and i64 %%73, -3689348814741910324, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_764_count);
  llvm_cbe_tmp__212 = (unsigned long long )llvm_cbe_tmp__211 & 14757395258967641292ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__212);
if (AESL_DEBUG_TRACE)
printf("\n  %%75 = or i64 %%74, %%72, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_765_count);
  llvm_cbe_tmp__213 = (unsigned long long )llvm_cbe_tmp__212 | llvm_cbe_tmp__210;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__213);
if (AESL_DEBUG_TRACE)
printf("\n  %%76 = lshr i64 %%35, 2, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_766_count);
  llvm_cbe_tmp__214 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_tmp__173&18446744073709551615ull)) >> ((unsigned long long )(2ull&18446744073709551615ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__214&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%77 = and i64 %%76, 3689348814741910323, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_767_count);
  llvm_cbe_tmp__215 = (unsigned long long )llvm_cbe_tmp__214 & 3689348814741910323ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__215);
if (AESL_DEBUG_TRACE)
printf("\n  %%78 = and i64 %%47, -3689348814741910324, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_768_count);
  llvm_cbe_tmp__216 = (unsigned long long )llvm_cbe_tmp__185 & 14757395258967641292ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__216);
if (AESL_DEBUG_TRACE)
printf("\n  %%79 = or i64 %%77, %%78, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_769_count);
  llvm_cbe_tmp__217 = (unsigned long long )llvm_cbe_tmp__215 | llvm_cbe_tmp__216;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__217);
if (AESL_DEBUG_TRACE)
printf("\n  %%80 = and i64 %%51, 1085102592571150095, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_776_count);
  llvm_cbe_tmp__218 = (unsigned long long )llvm_cbe_tmp__189 & 1085102592571150095ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__218);
if (AESL_DEBUG_TRACE)
printf("\n  %%81 = shl i64 %%67, 4, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_777_count);
  llvm_cbe_tmp__219 = (unsigned long long )llvm_cbe_tmp__205 << 4ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__219);
if (AESL_DEBUG_TRACE)
printf("\n  %%82 = and i64 %%81, -1085102592571150096, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_778_count);
  llvm_cbe_tmp__220 = (unsigned long long )llvm_cbe_tmp__219 & 17361641481138401520ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__220);
if (AESL_DEBUG_TRACE)
printf("\n  %%83 = or i64 %%82, %%80, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_779_count);
  llvm_cbe_tmp__221 = (unsigned long long )llvm_cbe_tmp__220 | llvm_cbe_tmp__218;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__221);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%83, i64* %%q, align 8, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_780_count);
  *llvm_cbe_q = llvm_cbe_tmp__221;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__221);
if (AESL_DEBUG_TRACE)
printf("\n  %%84 = lshr i64 %%51, 4, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_781_count);
  llvm_cbe_tmp__222 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_tmp__189&18446744073709551615ull)) >> ((unsigned long long )(4ull&18446744073709551615ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__222&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%85 = and i64 %%84, 1085102592571150095, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_782_count);
  llvm_cbe_tmp__223 = (unsigned long long )llvm_cbe_tmp__222 & 1085102592571150095ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__223);
if (AESL_DEBUG_TRACE)
printf("\n  %%86 = and i64 %%67, -1085102592571150096, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_783_count);
  llvm_cbe_tmp__224 = (unsigned long long )llvm_cbe_tmp__205 & 17361641481138401520ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__224);
if (AESL_DEBUG_TRACE)
printf("\n  %%87 = or i64 %%85, %%86, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_784_count);
  llvm_cbe_tmp__225 = (unsigned long long )llvm_cbe_tmp__223 | llvm_cbe_tmp__224;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__225);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%87, i64* %%24, align 8, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_785_count);
  *llvm_cbe_tmp__162 = llvm_cbe_tmp__225;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__225);
if (AESL_DEBUG_TRACE)
printf("\n  %%88 = and i64 %%59, 1085102592571150095, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_792_count);
  llvm_cbe_tmp__226 = (unsigned long long )llvm_cbe_tmp__197 & 1085102592571150095ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__226);
if (AESL_DEBUG_TRACE)
printf("\n  %%89 = shl i64 %%75, 4, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_793_count);
  llvm_cbe_tmp__227 = (unsigned long long )llvm_cbe_tmp__213 << 4ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__227);
if (AESL_DEBUG_TRACE)
printf("\n  %%90 = and i64 %%89, -1085102592571150096, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_794_count);
  llvm_cbe_tmp__228 = (unsigned long long )llvm_cbe_tmp__227 & 17361641481138401520ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__228);
if (AESL_DEBUG_TRACE)
printf("\n  %%91 = or i64 %%90, %%88, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_795_count);
  llvm_cbe_tmp__229 = (unsigned long long )llvm_cbe_tmp__228 | llvm_cbe_tmp__226;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__229);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%91, i64* %%2, align 8, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_796_count);
  *llvm_cbe_tmp__140 = llvm_cbe_tmp__229;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__229);
if (AESL_DEBUG_TRACE)
printf("\n  %%92 = lshr i64 %%59, 4, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_797_count);
  llvm_cbe_tmp__230 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_tmp__197&18446744073709551615ull)) >> ((unsigned long long )(4ull&18446744073709551615ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__230&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%93 = and i64 %%92, 1085102592571150095, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_798_count);
  llvm_cbe_tmp__231 = (unsigned long long )llvm_cbe_tmp__230 & 1085102592571150095ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__231);
if (AESL_DEBUG_TRACE)
printf("\n  %%94 = and i64 %%75, -1085102592571150096, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_799_count);
  llvm_cbe_tmp__232 = (unsigned long long )llvm_cbe_tmp__213 & 17361641481138401520ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__232);
if (AESL_DEBUG_TRACE)
printf("\n  %%95 = or i64 %%93, %%94, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_800_count);
  llvm_cbe_tmp__233 = (unsigned long long )llvm_cbe_tmp__231 | llvm_cbe_tmp__232;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__233);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%95, i64* %%26, align 8, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_801_count);
  *llvm_cbe_tmp__164 = llvm_cbe_tmp__233;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__233);
if (AESL_DEBUG_TRACE)
printf("\n  %%96 = and i64 %%55, 1085102592571150095, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_808_count);
  llvm_cbe_tmp__234 = (unsigned long long )llvm_cbe_tmp__193 & 1085102592571150095ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__234);
if (AESL_DEBUG_TRACE)
printf("\n  %%97 = shl i64 %%71, 4, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_809_count);
  llvm_cbe_tmp__235 = (unsigned long long )llvm_cbe_tmp__209 << 4ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__235);
if (AESL_DEBUG_TRACE)
printf("\n  %%98 = and i64 %%97, -1085102592571150096, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_810_count);
  llvm_cbe_tmp__236 = (unsigned long long )llvm_cbe_tmp__235 & 17361641481138401520ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__236);
if (AESL_DEBUG_TRACE)
printf("\n  %%99 = or i64 %%98, %%96, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_811_count);
  llvm_cbe_tmp__237 = (unsigned long long )llvm_cbe_tmp__236 | llvm_cbe_tmp__234;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__237);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%99, i64* %%12, align 8, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_812_count);
  *llvm_cbe_tmp__150 = llvm_cbe_tmp__237;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__237);
if (AESL_DEBUG_TRACE)
printf("\n  %%100 = lshr i64 %%55, 4, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_813_count);
  llvm_cbe_tmp__238 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_tmp__193&18446744073709551615ull)) >> ((unsigned long long )(4ull&18446744073709551615ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__238&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%101 = and i64 %%100, 1085102592571150095, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_814_count);
  llvm_cbe_tmp__239 = (unsigned long long )llvm_cbe_tmp__238 & 1085102592571150095ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__239);
if (AESL_DEBUG_TRACE)
printf("\n  %%102 = and i64 %%71, -1085102592571150096, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_815_count);
  llvm_cbe_tmp__240 = (unsigned long long )llvm_cbe_tmp__209 & 17361641481138401520ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__240);
if (AESL_DEBUG_TRACE)
printf("\n  %%103 = or i64 %%101, %%102, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_816_count);
  llvm_cbe_tmp__241 = (unsigned long long )llvm_cbe_tmp__239 | llvm_cbe_tmp__240;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__241);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%103, i64* %%36, align 8, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_817_count);
  *llvm_cbe_tmp__174 = llvm_cbe_tmp__241;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__241);
if (AESL_DEBUG_TRACE)
printf("\n  %%104 = and i64 %%63, 1085102592571150095, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_824_count);
  llvm_cbe_tmp__242 = (unsigned long long )llvm_cbe_tmp__201 & 1085102592571150095ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__242);
if (AESL_DEBUG_TRACE)
printf("\n  %%105 = shl i64 %%79, 4, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_825_count);
  llvm_cbe_tmp__243 = (unsigned long long )llvm_cbe_tmp__217 << 4ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__243);
if (AESL_DEBUG_TRACE)
printf("\n  %%106 = and i64 %%105, -1085102592571150096, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_826_count);
  llvm_cbe_tmp__244 = (unsigned long long )llvm_cbe_tmp__243 & 17361641481138401520ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__244);
if (AESL_DEBUG_TRACE)
printf("\n  %%107 = or i64 %%106, %%104, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_827_count);
  llvm_cbe_tmp__245 = (unsigned long long )llvm_cbe_tmp__244 | llvm_cbe_tmp__242;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__245);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%107, i64* %%14, align 8, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_828_count);
  *llvm_cbe_tmp__152 = llvm_cbe_tmp__245;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__245);
if (AESL_DEBUG_TRACE)
printf("\n  %%108 = lshr i64 %%63, 4, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_829_count);
  llvm_cbe_tmp__246 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_tmp__201&18446744073709551615ull)) >> ((unsigned long long )(4ull&18446744073709551615ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__246&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%109 = and i64 %%108, 1085102592571150095, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_830_count);
  llvm_cbe_tmp__247 = (unsigned long long )llvm_cbe_tmp__246 & 1085102592571150095ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__247);
if (AESL_DEBUG_TRACE)
printf("\n  %%110 = and i64 %%79, -1085102592571150096, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_831_count);
  llvm_cbe_tmp__248 = (unsigned long long )llvm_cbe_tmp__217 & 17361641481138401520ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__248);
if (AESL_DEBUG_TRACE)
printf("\n  %%111 = or i64 %%109, %%110, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_832_count);
  llvm_cbe_tmp__249 = (unsigned long long )llvm_cbe_tmp__247 | llvm_cbe_tmp__248;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__249);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%111, i64* %%38, align 8, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_ortho  --> \n", ++aesl_llvm_cbe_833_count);
  *llvm_cbe_tmp__176 = llvm_cbe_tmp__249;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__249);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @aesl_internal_br_aes_ct64_ortho}\n");
  return;
}


static void aesl_internal_add_round_key(signed long long *llvm_cbe_q, signed long long *llvm_cbe_sk) {
  static  unsigned long long aesl_llvm_cbe_835_count = 0;
  static  unsigned long long aesl_llvm_cbe_836_count = 0;
  static  unsigned long long aesl_llvm_cbe_837_count = 0;
  static  unsigned long long aesl_llvm_cbe_838_count = 0;
  static  unsigned long long aesl_llvm_cbe_839_count = 0;
  static  unsigned long long aesl_llvm_cbe_840_count = 0;
  static  unsigned long long aesl_llvm_cbe_841_count = 0;
  static  unsigned long long aesl_llvm_cbe_842_count = 0;
  static  unsigned long long aesl_llvm_cbe_843_count = 0;
  static  unsigned long long aesl_llvm_cbe_844_count = 0;
  static  unsigned long long aesl_llvm_cbe_845_count = 0;
  static  unsigned long long aesl_llvm_cbe_846_count = 0;
  static  unsigned long long aesl_llvm_cbe_847_count = 0;
  static  unsigned long long aesl_llvm_cbe_848_count = 0;
  static  unsigned long long aesl_llvm_cbe_849_count = 0;
  static  unsigned long long aesl_llvm_cbe_850_count = 0;
  static  unsigned long long aesl_llvm_cbe_851_count = 0;
  static  unsigned long long aesl_llvm_cbe_852_count = 0;
  static  unsigned long long aesl_llvm_cbe_853_count = 0;
  unsigned long long llvm_cbe_tmp__250;
  static  unsigned long long aesl_llvm_cbe_854_count = 0;
  unsigned long long llvm_cbe_tmp__251;
  static  unsigned long long aesl_llvm_cbe_855_count = 0;
  unsigned long long llvm_cbe_tmp__252;
  static  unsigned long long aesl_llvm_cbe_856_count = 0;
  static  unsigned long long aesl_llvm_cbe_857_count = 0;
  signed long long *llvm_cbe_tmp__253;
  static  unsigned long long aesl_llvm_cbe_858_count = 0;
  unsigned long long llvm_cbe_tmp__254;
  static  unsigned long long aesl_llvm_cbe_859_count = 0;
  signed long long *llvm_cbe_tmp__255;
  static  unsigned long long aesl_llvm_cbe_860_count = 0;
  unsigned long long llvm_cbe_tmp__256;
  static  unsigned long long aesl_llvm_cbe_861_count = 0;
  unsigned long long llvm_cbe_tmp__257;
  static  unsigned long long aesl_llvm_cbe_862_count = 0;
  static  unsigned long long aesl_llvm_cbe_863_count = 0;
  signed long long *llvm_cbe_tmp__258;
  static  unsigned long long aesl_llvm_cbe_864_count = 0;
  unsigned long long llvm_cbe_tmp__259;
  static  unsigned long long aesl_llvm_cbe_865_count = 0;
  signed long long *llvm_cbe_tmp__260;
  static  unsigned long long aesl_llvm_cbe_866_count = 0;
  unsigned long long llvm_cbe_tmp__261;
  static  unsigned long long aesl_llvm_cbe_867_count = 0;
  unsigned long long llvm_cbe_tmp__262;
  static  unsigned long long aesl_llvm_cbe_868_count = 0;
  static  unsigned long long aesl_llvm_cbe_869_count = 0;
  signed long long *llvm_cbe_tmp__263;
  static  unsigned long long aesl_llvm_cbe_870_count = 0;
  unsigned long long llvm_cbe_tmp__264;
  static  unsigned long long aesl_llvm_cbe_871_count = 0;
  signed long long *llvm_cbe_tmp__265;
  static  unsigned long long aesl_llvm_cbe_872_count = 0;
  unsigned long long llvm_cbe_tmp__266;
  static  unsigned long long aesl_llvm_cbe_873_count = 0;
  unsigned long long llvm_cbe_tmp__267;
  static  unsigned long long aesl_llvm_cbe_874_count = 0;
  static  unsigned long long aesl_llvm_cbe_875_count = 0;
  signed long long *llvm_cbe_tmp__268;
  static  unsigned long long aesl_llvm_cbe_876_count = 0;
  unsigned long long llvm_cbe_tmp__269;
  static  unsigned long long aesl_llvm_cbe_877_count = 0;
  signed long long *llvm_cbe_tmp__270;
  static  unsigned long long aesl_llvm_cbe_878_count = 0;
  unsigned long long llvm_cbe_tmp__271;
  static  unsigned long long aesl_llvm_cbe_879_count = 0;
  unsigned long long llvm_cbe_tmp__272;
  static  unsigned long long aesl_llvm_cbe_880_count = 0;
  static  unsigned long long aesl_llvm_cbe_881_count = 0;
  signed long long *llvm_cbe_tmp__273;
  static  unsigned long long aesl_llvm_cbe_882_count = 0;
  unsigned long long llvm_cbe_tmp__274;
  static  unsigned long long aesl_llvm_cbe_883_count = 0;
  signed long long *llvm_cbe_tmp__275;
  static  unsigned long long aesl_llvm_cbe_884_count = 0;
  unsigned long long llvm_cbe_tmp__276;
  static  unsigned long long aesl_llvm_cbe_885_count = 0;
  unsigned long long llvm_cbe_tmp__277;
  static  unsigned long long aesl_llvm_cbe_886_count = 0;
  static  unsigned long long aesl_llvm_cbe_887_count = 0;
  signed long long *llvm_cbe_tmp__278;
  static  unsigned long long aesl_llvm_cbe_888_count = 0;
  unsigned long long llvm_cbe_tmp__279;
  static  unsigned long long aesl_llvm_cbe_889_count = 0;
  signed long long *llvm_cbe_tmp__280;
  static  unsigned long long aesl_llvm_cbe_890_count = 0;
  unsigned long long llvm_cbe_tmp__281;
  static  unsigned long long aesl_llvm_cbe_891_count = 0;
  unsigned long long llvm_cbe_tmp__282;
  static  unsigned long long aesl_llvm_cbe_892_count = 0;
  static  unsigned long long aesl_llvm_cbe_893_count = 0;
  signed long long *llvm_cbe_tmp__283;
  static  unsigned long long aesl_llvm_cbe_894_count = 0;
  unsigned long long llvm_cbe_tmp__284;
  static  unsigned long long aesl_llvm_cbe_895_count = 0;
  signed long long *llvm_cbe_tmp__285;
  static  unsigned long long aesl_llvm_cbe_896_count = 0;
  unsigned long long llvm_cbe_tmp__286;
  static  unsigned long long aesl_llvm_cbe_897_count = 0;
  unsigned long long llvm_cbe_tmp__287;
  static  unsigned long long aesl_llvm_cbe_898_count = 0;
  static  unsigned long long aesl_llvm_cbe_899_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @aesl_internal_add_round_key\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = load i64* %%sk, align 8, !dbg !18 for 0x%I64xth hint within @aesl_internal_add_round_key  --> \n", ++aesl_llvm_cbe_853_count);
  llvm_cbe_tmp__250 = (unsigned long long )*llvm_cbe_sk;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__250);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = load i64* %%q, align 8, !dbg !18 for 0x%I64xth hint within @aesl_internal_add_round_key  --> \n", ++aesl_llvm_cbe_854_count);
  llvm_cbe_tmp__251 = (unsigned long long )*llvm_cbe_q;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__251);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = xor i64 %%2, %%1, !dbg !18 for 0x%I64xth hint within @aesl_internal_add_round_key  --> \n", ++aesl_llvm_cbe_855_count);
  llvm_cbe_tmp__252 = (unsigned long long )llvm_cbe_tmp__251 ^ llvm_cbe_tmp__250;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__252);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%3, i64* %%q, align 8, !dbg !18 for 0x%I64xth hint within @aesl_internal_add_round_key  --> \n", ++aesl_llvm_cbe_856_count);
  *llvm_cbe_q = llvm_cbe_tmp__252;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__252);
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds i64* %%sk, i64 1, !dbg !18 for 0x%I64xth hint within @aesl_internal_add_round_key  --> \n", ++aesl_llvm_cbe_857_count);
  llvm_cbe_tmp__253 = (signed long long *)(&llvm_cbe_sk[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = load i64* %%4, align 8, !dbg !18 for 0x%I64xth hint within @aesl_internal_add_round_key  --> \n", ++aesl_llvm_cbe_858_count);
  llvm_cbe_tmp__254 = (unsigned long long )*llvm_cbe_tmp__253;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__254);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds i64* %%q, i64 1, !dbg !18 for 0x%I64xth hint within @aesl_internal_add_round_key  --> \n", ++aesl_llvm_cbe_859_count);
  llvm_cbe_tmp__255 = (signed long long *)(&llvm_cbe_q[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = load i64* %%6, align 8, !dbg !18 for 0x%I64xth hint within @aesl_internal_add_round_key  --> \n", ++aesl_llvm_cbe_860_count);
  llvm_cbe_tmp__256 = (unsigned long long )*llvm_cbe_tmp__255;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__256);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = xor i64 %%7, %%5, !dbg !18 for 0x%I64xth hint within @aesl_internal_add_round_key  --> \n", ++aesl_llvm_cbe_861_count);
  llvm_cbe_tmp__257 = (unsigned long long )llvm_cbe_tmp__256 ^ llvm_cbe_tmp__254;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__257);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%8, i64* %%6, align 8, !dbg !18 for 0x%I64xth hint within @aesl_internal_add_round_key  --> \n", ++aesl_llvm_cbe_862_count);
  *llvm_cbe_tmp__255 = llvm_cbe_tmp__257;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__257);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds i64* %%sk, i64 2, !dbg !18 for 0x%I64xth hint within @aesl_internal_add_round_key  --> \n", ++aesl_llvm_cbe_863_count);
  llvm_cbe_tmp__258 = (signed long long *)(&llvm_cbe_sk[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = load i64* %%9, align 8, !dbg !18 for 0x%I64xth hint within @aesl_internal_add_round_key  --> \n", ++aesl_llvm_cbe_864_count);
  llvm_cbe_tmp__259 = (unsigned long long )*llvm_cbe_tmp__258;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__259);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds i64* %%q, i64 2, !dbg !18 for 0x%I64xth hint within @aesl_internal_add_round_key  --> \n", ++aesl_llvm_cbe_865_count);
  llvm_cbe_tmp__260 = (signed long long *)(&llvm_cbe_q[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = load i64* %%11, align 8, !dbg !18 for 0x%I64xth hint within @aesl_internal_add_round_key  --> \n", ++aesl_llvm_cbe_866_count);
  llvm_cbe_tmp__261 = (unsigned long long )*llvm_cbe_tmp__260;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__261);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = xor i64 %%12, %%10, !dbg !18 for 0x%I64xth hint within @aesl_internal_add_round_key  --> \n", ++aesl_llvm_cbe_867_count);
  llvm_cbe_tmp__262 = (unsigned long long )llvm_cbe_tmp__261 ^ llvm_cbe_tmp__259;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__262);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%13, i64* %%11, align 8, !dbg !18 for 0x%I64xth hint within @aesl_internal_add_round_key  --> \n", ++aesl_llvm_cbe_868_count);
  *llvm_cbe_tmp__260 = llvm_cbe_tmp__262;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__262);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = getelementptr inbounds i64* %%sk, i64 3, !dbg !18 for 0x%I64xth hint within @aesl_internal_add_round_key  --> \n", ++aesl_llvm_cbe_869_count);
  llvm_cbe_tmp__263 = (signed long long *)(&llvm_cbe_sk[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = load i64* %%14, align 8, !dbg !18 for 0x%I64xth hint within @aesl_internal_add_round_key  --> \n", ++aesl_llvm_cbe_870_count);
  llvm_cbe_tmp__264 = (unsigned long long )*llvm_cbe_tmp__263;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__264);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = getelementptr inbounds i64* %%q, i64 3, !dbg !18 for 0x%I64xth hint within @aesl_internal_add_round_key  --> \n", ++aesl_llvm_cbe_871_count);
  llvm_cbe_tmp__265 = (signed long long *)(&llvm_cbe_q[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = load i64* %%16, align 8, !dbg !18 for 0x%I64xth hint within @aesl_internal_add_round_key  --> \n", ++aesl_llvm_cbe_872_count);
  llvm_cbe_tmp__266 = (unsigned long long )*llvm_cbe_tmp__265;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__266);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = xor i64 %%17, %%15, !dbg !18 for 0x%I64xth hint within @aesl_internal_add_round_key  --> \n", ++aesl_llvm_cbe_873_count);
  llvm_cbe_tmp__267 = (unsigned long long )llvm_cbe_tmp__266 ^ llvm_cbe_tmp__264;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__267);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%18, i64* %%16, align 8, !dbg !18 for 0x%I64xth hint within @aesl_internal_add_round_key  --> \n", ++aesl_llvm_cbe_874_count);
  *llvm_cbe_tmp__265 = llvm_cbe_tmp__267;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__267);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = getelementptr inbounds i64* %%sk, i64 4, !dbg !19 for 0x%I64xth hint within @aesl_internal_add_round_key  --> \n", ++aesl_llvm_cbe_875_count);
  llvm_cbe_tmp__268 = (signed long long *)(&llvm_cbe_sk[(((signed long long )4ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = load i64* %%19, align 8, !dbg !19 for 0x%I64xth hint within @aesl_internal_add_round_key  --> \n", ++aesl_llvm_cbe_876_count);
  llvm_cbe_tmp__269 = (unsigned long long )*llvm_cbe_tmp__268;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__269);
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = getelementptr inbounds i64* %%q, i64 4, !dbg !19 for 0x%I64xth hint within @aesl_internal_add_round_key  --> \n", ++aesl_llvm_cbe_877_count);
  llvm_cbe_tmp__270 = (signed long long *)(&llvm_cbe_q[(((signed long long )4ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = load i64* %%21, align 8, !dbg !19 for 0x%I64xth hint within @aesl_internal_add_round_key  --> \n", ++aesl_llvm_cbe_878_count);
  llvm_cbe_tmp__271 = (unsigned long long )*llvm_cbe_tmp__270;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__271);
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = xor i64 %%22, %%20, !dbg !19 for 0x%I64xth hint within @aesl_internal_add_round_key  --> \n", ++aesl_llvm_cbe_879_count);
  llvm_cbe_tmp__272 = (unsigned long long )llvm_cbe_tmp__271 ^ llvm_cbe_tmp__269;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__272);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%23, i64* %%21, align 8, !dbg !19 for 0x%I64xth hint within @aesl_internal_add_round_key  --> \n", ++aesl_llvm_cbe_880_count);
  *llvm_cbe_tmp__270 = llvm_cbe_tmp__272;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__272);
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = getelementptr inbounds i64* %%sk, i64 5, !dbg !19 for 0x%I64xth hint within @aesl_internal_add_round_key  --> \n", ++aesl_llvm_cbe_881_count);
  llvm_cbe_tmp__273 = (signed long long *)(&llvm_cbe_sk[(((signed long long )5ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = load i64* %%24, align 8, !dbg !19 for 0x%I64xth hint within @aesl_internal_add_round_key  --> \n", ++aesl_llvm_cbe_882_count);
  llvm_cbe_tmp__274 = (unsigned long long )*llvm_cbe_tmp__273;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__274);
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = getelementptr inbounds i64* %%q, i64 5, !dbg !19 for 0x%I64xth hint within @aesl_internal_add_round_key  --> \n", ++aesl_llvm_cbe_883_count);
  llvm_cbe_tmp__275 = (signed long long *)(&llvm_cbe_q[(((signed long long )5ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = load i64* %%26, align 8, !dbg !19 for 0x%I64xth hint within @aesl_internal_add_round_key  --> \n", ++aesl_llvm_cbe_884_count);
  llvm_cbe_tmp__276 = (unsigned long long )*llvm_cbe_tmp__275;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__276);
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = xor i64 %%27, %%25, !dbg !19 for 0x%I64xth hint within @aesl_internal_add_round_key  --> \n", ++aesl_llvm_cbe_885_count);
  llvm_cbe_tmp__277 = (unsigned long long )llvm_cbe_tmp__276 ^ llvm_cbe_tmp__274;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__277);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%28, i64* %%26, align 8, !dbg !19 for 0x%I64xth hint within @aesl_internal_add_round_key  --> \n", ++aesl_llvm_cbe_886_count);
  *llvm_cbe_tmp__275 = llvm_cbe_tmp__277;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__277);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = getelementptr inbounds i64* %%sk, i64 6, !dbg !19 for 0x%I64xth hint within @aesl_internal_add_round_key  --> \n", ++aesl_llvm_cbe_887_count);
  llvm_cbe_tmp__278 = (signed long long *)(&llvm_cbe_sk[(((signed long long )6ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = load i64* %%29, align 8, !dbg !19 for 0x%I64xth hint within @aesl_internal_add_round_key  --> \n", ++aesl_llvm_cbe_888_count);
  llvm_cbe_tmp__279 = (unsigned long long )*llvm_cbe_tmp__278;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__279);
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = getelementptr inbounds i64* %%q, i64 6, !dbg !19 for 0x%I64xth hint within @aesl_internal_add_round_key  --> \n", ++aesl_llvm_cbe_889_count);
  llvm_cbe_tmp__280 = (signed long long *)(&llvm_cbe_q[(((signed long long )6ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = load i64* %%31, align 8, !dbg !19 for 0x%I64xth hint within @aesl_internal_add_round_key  --> \n", ++aesl_llvm_cbe_890_count);
  llvm_cbe_tmp__281 = (unsigned long long )*llvm_cbe_tmp__280;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__281);
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = xor i64 %%32, %%30, !dbg !19 for 0x%I64xth hint within @aesl_internal_add_round_key  --> \n", ++aesl_llvm_cbe_891_count);
  llvm_cbe_tmp__282 = (unsigned long long )llvm_cbe_tmp__281 ^ llvm_cbe_tmp__279;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__282);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%33, i64* %%31, align 8, !dbg !19 for 0x%I64xth hint within @aesl_internal_add_round_key  --> \n", ++aesl_llvm_cbe_892_count);
  *llvm_cbe_tmp__280 = llvm_cbe_tmp__282;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__282);
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = getelementptr inbounds i64* %%sk, i64 7, !dbg !19 for 0x%I64xth hint within @aesl_internal_add_round_key  --> \n", ++aesl_llvm_cbe_893_count);
  llvm_cbe_tmp__283 = (signed long long *)(&llvm_cbe_sk[(((signed long long )7ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = load i64* %%34, align 8, !dbg !19 for 0x%I64xth hint within @aesl_internal_add_round_key  --> \n", ++aesl_llvm_cbe_894_count);
  llvm_cbe_tmp__284 = (unsigned long long )*llvm_cbe_tmp__283;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__284);
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = getelementptr inbounds i64* %%q, i64 7, !dbg !19 for 0x%I64xth hint within @aesl_internal_add_round_key  --> \n", ++aesl_llvm_cbe_895_count);
  llvm_cbe_tmp__285 = (signed long long *)(&llvm_cbe_q[(((signed long long )7ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = load i64* %%36, align 8, !dbg !19 for 0x%I64xth hint within @aesl_internal_add_round_key  --> \n", ++aesl_llvm_cbe_896_count);
  llvm_cbe_tmp__286 = (unsigned long long )*llvm_cbe_tmp__285;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__286);
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = xor i64 %%37, %%35, !dbg !19 for 0x%I64xth hint within @aesl_internal_add_round_key  --> \n", ++aesl_llvm_cbe_897_count);
  llvm_cbe_tmp__287 = (unsigned long long )llvm_cbe_tmp__286 ^ llvm_cbe_tmp__284;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__287);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%38, i64* %%36, align 8, !dbg !19 for 0x%I64xth hint within @aesl_internal_add_round_key  --> \n", ++aesl_llvm_cbe_898_count);
  *llvm_cbe_tmp__285 = llvm_cbe_tmp__287;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__287);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @aesl_internal_add_round_key}\n");
  return;
}


static void aesl_internal_br_aes_ct64_bitslice_Sbox(signed long long *llvm_cbe_q) {
  static  unsigned long long aesl_llvm_cbe_900_count = 0;
  static  unsigned long long aesl_llvm_cbe_901_count = 0;
  static  unsigned long long aesl_llvm_cbe_902_count = 0;
  static  unsigned long long aesl_llvm_cbe_903_count = 0;
  static  unsigned long long aesl_llvm_cbe_904_count = 0;
  static  unsigned long long aesl_llvm_cbe_905_count = 0;
  static  unsigned long long aesl_llvm_cbe_906_count = 0;
  static  unsigned long long aesl_llvm_cbe_907_count = 0;
  static  unsigned long long aesl_llvm_cbe_908_count = 0;
  static  unsigned long long aesl_llvm_cbe_909_count = 0;
  static  unsigned long long aesl_llvm_cbe_910_count = 0;
  static  unsigned long long aesl_llvm_cbe_911_count = 0;
  static  unsigned long long aesl_llvm_cbe_912_count = 0;
  static  unsigned long long aesl_llvm_cbe_913_count = 0;
  static  unsigned long long aesl_llvm_cbe_914_count = 0;
  static  unsigned long long aesl_llvm_cbe_915_count = 0;
  static  unsigned long long aesl_llvm_cbe_916_count = 0;
  static  unsigned long long aesl_llvm_cbe_917_count = 0;
  signed long long *llvm_cbe_tmp__288;
  static  unsigned long long aesl_llvm_cbe_918_count = 0;
  unsigned long long llvm_cbe_tmp__289;
  static  unsigned long long aesl_llvm_cbe_919_count = 0;
  static  unsigned long long aesl_llvm_cbe_920_count = 0;
  static  unsigned long long aesl_llvm_cbe_921_count = 0;
  static  unsigned long long aesl_llvm_cbe_922_count = 0;
  static  unsigned long long aesl_llvm_cbe_923_count = 0;
  static  unsigned long long aesl_llvm_cbe_924_count = 0;
  static  unsigned long long aesl_llvm_cbe_925_count = 0;
  signed long long *llvm_cbe_tmp__290;
  static  unsigned long long aesl_llvm_cbe_926_count = 0;
  unsigned long long llvm_cbe_tmp__291;
  static  unsigned long long aesl_llvm_cbe_927_count = 0;
  static  unsigned long long aesl_llvm_cbe_928_count = 0;
  static  unsigned long long aesl_llvm_cbe_929_count = 0;
  static  unsigned long long aesl_llvm_cbe_930_count = 0;
  signed long long *llvm_cbe_tmp__292;
  static  unsigned long long aesl_llvm_cbe_931_count = 0;
  unsigned long long llvm_cbe_tmp__293;
  static  unsigned long long aesl_llvm_cbe_932_count = 0;
  static  unsigned long long aesl_llvm_cbe_933_count = 0;
  static  unsigned long long aesl_llvm_cbe_934_count = 0;
  signed long long *llvm_cbe_tmp__294;
  static  unsigned long long aesl_llvm_cbe_935_count = 0;
  unsigned long long llvm_cbe_tmp__295;
  static  unsigned long long aesl_llvm_cbe_936_count = 0;
  static  unsigned long long aesl_llvm_cbe_937_count = 0;
  static  unsigned long long aesl_llvm_cbe_938_count = 0;
  static  unsigned long long aesl_llvm_cbe_939_count = 0;
  static  unsigned long long aesl_llvm_cbe_940_count = 0;
  signed long long *llvm_cbe_tmp__296;
  static  unsigned long long aesl_llvm_cbe_941_count = 0;
  unsigned long long llvm_cbe_tmp__297;
  static  unsigned long long aesl_llvm_cbe_942_count = 0;
  static  unsigned long long aesl_llvm_cbe_943_count = 0;
  static  unsigned long long aesl_llvm_cbe_944_count = 0;
  signed long long *llvm_cbe_tmp__298;
  static  unsigned long long aesl_llvm_cbe_945_count = 0;
  unsigned long long llvm_cbe_tmp__299;
  static  unsigned long long aesl_llvm_cbe_946_count = 0;
  static  unsigned long long aesl_llvm_cbe_947_count = 0;
  static  unsigned long long aesl_llvm_cbe_948_count = 0;
  static  unsigned long long aesl_llvm_cbe_949_count = 0;
  static  unsigned long long aesl_llvm_cbe_950_count = 0;
  signed long long *llvm_cbe_tmp__300;
  static  unsigned long long aesl_llvm_cbe_951_count = 0;
  unsigned long long llvm_cbe_tmp__301;
  static  unsigned long long aesl_llvm_cbe_952_count = 0;
  static  unsigned long long aesl_llvm_cbe_953_count = 0;
  static  unsigned long long aesl_llvm_cbe_954_count = 0;
  static  unsigned long long aesl_llvm_cbe_955_count = 0;
  unsigned long long llvm_cbe_tmp__302;
  static  unsigned long long aesl_llvm_cbe_956_count = 0;
  static  unsigned long long aesl_llvm_cbe_957_count = 0;
  static  unsigned long long aesl_llvm_cbe_958_count = 0;
  static  unsigned long long aesl_llvm_cbe_959_count = 0;
  static  unsigned long long aesl_llvm_cbe_960_count = 0;
  static  unsigned long long aesl_llvm_cbe_961_count = 0;
  static  unsigned long long aesl_llvm_cbe_962_count = 0;
  unsigned long long llvm_cbe_tmp__303;
  static  unsigned long long aesl_llvm_cbe_963_count = 0;
  static  unsigned long long aesl_llvm_cbe_964_count = 0;
  static  unsigned long long aesl_llvm_cbe_965_count = 0;
  static  unsigned long long aesl_llvm_cbe_966_count = 0;
  static  unsigned long long aesl_llvm_cbe_967_count = 0;
  unsigned long long llvm_cbe_tmp__304;
  static  unsigned long long aesl_llvm_cbe_968_count = 0;
  static  unsigned long long aesl_llvm_cbe_969_count = 0;
  static  unsigned long long aesl_llvm_cbe_970_count = 0;
  static  unsigned long long aesl_llvm_cbe_971_count = 0;
  static  unsigned long long aesl_llvm_cbe_972_count = 0;
  static  unsigned long long aesl_llvm_cbe_973_count = 0;
  unsigned long long llvm_cbe_tmp__305;
  static  unsigned long long aesl_llvm_cbe_974_count = 0;
  static  unsigned long long aesl_llvm_cbe_975_count = 0;
  static  unsigned long long aesl_llvm_cbe_976_count = 0;
  static  unsigned long long aesl_llvm_cbe_977_count = 0;
  static  unsigned long long aesl_llvm_cbe_978_count = 0;
  unsigned long long llvm_cbe_tmp__306;
  static  unsigned long long aesl_llvm_cbe_979_count = 0;
  static  unsigned long long aesl_llvm_cbe_980_count = 0;
  static  unsigned long long aesl_llvm_cbe_981_count = 0;
  static  unsigned long long aesl_llvm_cbe_982_count = 0;
  static  unsigned long long aesl_llvm_cbe_983_count = 0;
  static  unsigned long long aesl_llvm_cbe_984_count = 0;
  unsigned long long llvm_cbe_tmp__307;
  static  unsigned long long aesl_llvm_cbe_985_count = 0;
  static  unsigned long long aesl_llvm_cbe_986_count = 0;
  static  unsigned long long aesl_llvm_cbe_987_count = 0;
  static  unsigned long long aesl_llvm_cbe_988_count = 0;
  static  unsigned long long aesl_llvm_cbe_989_count = 0;
  unsigned long long llvm_cbe_tmp__308;
  static  unsigned long long aesl_llvm_cbe_990_count = 0;
  static  unsigned long long aesl_llvm_cbe_991_count = 0;
  static  unsigned long long aesl_llvm_cbe_992_count = 0;
  static  unsigned long long aesl_llvm_cbe_993_count = 0;
  static  unsigned long long aesl_llvm_cbe_994_count = 0;
  static  unsigned long long aesl_llvm_cbe_995_count = 0;
  static  unsigned long long aesl_llvm_cbe_996_count = 0;
  unsigned long long llvm_cbe_tmp__309;
  static  unsigned long long aesl_llvm_cbe_997_count = 0;
  static  unsigned long long aesl_llvm_cbe_998_count = 0;
  static  unsigned long long aesl_llvm_cbe_999_count = 0;
  static  unsigned long long aesl_llvm_cbe_1000_count = 0;
  unsigned long long llvm_cbe_tmp__310;
  static  unsigned long long aesl_llvm_cbe_1001_count = 0;
  static  unsigned long long aesl_llvm_cbe_1002_count = 0;
  static  unsigned long long aesl_llvm_cbe_1003_count = 0;
  static  unsigned long long aesl_llvm_cbe_1004_count = 0;
  static  unsigned long long aesl_llvm_cbe_1005_count = 0;
  unsigned long long llvm_cbe_tmp__311;
  static  unsigned long long aesl_llvm_cbe_1006_count = 0;
  static  unsigned long long aesl_llvm_cbe_1007_count = 0;
  static  unsigned long long aesl_llvm_cbe_1008_count = 0;
  static  unsigned long long aesl_llvm_cbe_1009_count = 0;
  unsigned long long llvm_cbe_tmp__312;
  static  unsigned long long aesl_llvm_cbe_1010_count = 0;
  static  unsigned long long aesl_llvm_cbe_1011_count = 0;
  static  unsigned long long aesl_llvm_cbe_1012_count = 0;
  static  unsigned long long aesl_llvm_cbe_1013_count = 0;
  static  unsigned long long aesl_llvm_cbe_1014_count = 0;
  unsigned long long llvm_cbe_tmp__313;
  static  unsigned long long aesl_llvm_cbe_1015_count = 0;
  static  unsigned long long aesl_llvm_cbe_1016_count = 0;
  static  unsigned long long aesl_llvm_cbe_1017_count = 0;
  static  unsigned long long aesl_llvm_cbe_1018_count = 0;
  unsigned long long llvm_cbe_tmp__314;
  static  unsigned long long aesl_llvm_cbe_1019_count = 0;
  static  unsigned long long aesl_llvm_cbe_1020_count = 0;
  static  unsigned long long aesl_llvm_cbe_1021_count = 0;
  unsigned long long llvm_cbe_tmp__315;
  static  unsigned long long aesl_llvm_cbe_1022_count = 0;
  static  unsigned long long aesl_llvm_cbe_1023_count = 0;
  static  unsigned long long aesl_llvm_cbe_1024_count = 0;
  static  unsigned long long aesl_llvm_cbe_1025_count = 0;
  static  unsigned long long aesl_llvm_cbe_1026_count = 0;
  static  unsigned long long aesl_llvm_cbe_1027_count = 0;
  static  unsigned long long aesl_llvm_cbe_1028_count = 0;
  unsigned long long llvm_cbe_tmp__316;
  static  unsigned long long aesl_llvm_cbe_1029_count = 0;
  static  unsigned long long aesl_llvm_cbe_1030_count = 0;
  static  unsigned long long aesl_llvm_cbe_1031_count = 0;
  static  unsigned long long aesl_llvm_cbe_1032_count = 0;
  unsigned long long llvm_cbe_tmp__317;
  static  unsigned long long aesl_llvm_cbe_1033_count = 0;
  static  unsigned long long aesl_llvm_cbe_1034_count = 0;
  static  unsigned long long aesl_llvm_cbe_1035_count = 0;
  static  unsigned long long aesl_llvm_cbe_1036_count = 0;
  unsigned long long llvm_cbe_tmp__318;
  static  unsigned long long aesl_llvm_cbe_1037_count = 0;
  static  unsigned long long aesl_llvm_cbe_1038_count = 0;
  static  unsigned long long aesl_llvm_cbe_1039_count = 0;
  static  unsigned long long aesl_llvm_cbe_1040_count = 0;
  static  unsigned long long aesl_llvm_cbe_1041_count = 0;
  static  unsigned long long aesl_llvm_cbe_1042_count = 0;
  unsigned long long llvm_cbe_tmp__319;
  static  unsigned long long aesl_llvm_cbe_1043_count = 0;
  static  unsigned long long aesl_llvm_cbe_1044_count = 0;
  static  unsigned long long aesl_llvm_cbe_1045_count = 0;
  static  unsigned long long aesl_llvm_cbe_1046_count = 0;
  static  unsigned long long aesl_llvm_cbe_1047_count = 0;
  static  unsigned long long aesl_llvm_cbe_1048_count = 0;
  static  unsigned long long aesl_llvm_cbe_1049_count = 0;
  unsigned long long llvm_cbe_tmp__320;
  static  unsigned long long aesl_llvm_cbe_1050_count = 0;
  static  unsigned long long aesl_llvm_cbe_1051_count = 0;
  static  unsigned long long aesl_llvm_cbe_1052_count = 0;
  static  unsigned long long aesl_llvm_cbe_1053_count = 0;
  unsigned long long llvm_cbe_tmp__321;
  static  unsigned long long aesl_llvm_cbe_1054_count = 0;
  static  unsigned long long aesl_llvm_cbe_1055_count = 0;
  static  unsigned long long aesl_llvm_cbe_1056_count = 0;
  static  unsigned long long aesl_llvm_cbe_1057_count = 0;
  unsigned long long llvm_cbe_tmp__322;
  static  unsigned long long aesl_llvm_cbe_1058_count = 0;
  static  unsigned long long aesl_llvm_cbe_1059_count = 0;
  static  unsigned long long aesl_llvm_cbe_1060_count = 0;
  static  unsigned long long aesl_llvm_cbe_1061_count = 0;
  static  unsigned long long aesl_llvm_cbe_1062_count = 0;
  static  unsigned long long aesl_llvm_cbe_1063_count = 0;
  unsigned long long llvm_cbe_tmp__323;
  static  unsigned long long aesl_llvm_cbe_1064_count = 0;
  static  unsigned long long aesl_llvm_cbe_1065_count = 0;
  static  unsigned long long aesl_llvm_cbe_1066_count = 0;
  static  unsigned long long aesl_llvm_cbe_1067_count = 0;
  unsigned long long llvm_cbe_tmp__324;
  static  unsigned long long aesl_llvm_cbe_1068_count = 0;
  static  unsigned long long aesl_llvm_cbe_1069_count = 0;
  static  unsigned long long aesl_llvm_cbe_1070_count = 0;
  unsigned long long llvm_cbe_tmp__325;
  static  unsigned long long aesl_llvm_cbe_1071_count = 0;
  static  unsigned long long aesl_llvm_cbe_1072_count = 0;
  static  unsigned long long aesl_llvm_cbe_1073_count = 0;
  unsigned long long llvm_cbe_tmp__326;
  static  unsigned long long aesl_llvm_cbe_1074_count = 0;
  static  unsigned long long aesl_llvm_cbe_1075_count = 0;
  static  unsigned long long aesl_llvm_cbe_1076_count = 0;
  static  unsigned long long aesl_llvm_cbe_1077_count = 0;
  unsigned long long llvm_cbe_tmp__327;
  static  unsigned long long aesl_llvm_cbe_1078_count = 0;
  static  unsigned long long aesl_llvm_cbe_1079_count = 0;
  static  unsigned long long aesl_llvm_cbe_1080_count = 0;
  unsigned long long llvm_cbe_tmp__328;
  static  unsigned long long aesl_llvm_cbe_1081_count = 0;
  static  unsigned long long aesl_llvm_cbe_1082_count = 0;
  static  unsigned long long aesl_llvm_cbe_1083_count = 0;
  unsigned long long llvm_cbe_tmp__329;
  static  unsigned long long aesl_llvm_cbe_1084_count = 0;
  static  unsigned long long aesl_llvm_cbe_1085_count = 0;
  static  unsigned long long aesl_llvm_cbe_1086_count = 0;
  static  unsigned long long aesl_llvm_cbe_1087_count = 0;
  unsigned long long llvm_cbe_tmp__330;
  static  unsigned long long aesl_llvm_cbe_1088_count = 0;
  static  unsigned long long aesl_llvm_cbe_1089_count = 0;
  static  unsigned long long aesl_llvm_cbe_1090_count = 0;
  unsigned long long llvm_cbe_tmp__331;
  static  unsigned long long aesl_llvm_cbe_1091_count = 0;
  static  unsigned long long aesl_llvm_cbe_1092_count = 0;
  static  unsigned long long aesl_llvm_cbe_1093_count = 0;
  static  unsigned long long aesl_llvm_cbe_1094_count = 0;
  unsigned long long llvm_cbe_tmp__332;
  static  unsigned long long aesl_llvm_cbe_1095_count = 0;
  static  unsigned long long aesl_llvm_cbe_1096_count = 0;
  static  unsigned long long aesl_llvm_cbe_1097_count = 0;
  unsigned long long llvm_cbe_tmp__333;
  static  unsigned long long aesl_llvm_cbe_1098_count = 0;
  static  unsigned long long aesl_llvm_cbe_1099_count = 0;
  static  unsigned long long aesl_llvm_cbe_1100_count = 0;
  static  unsigned long long aesl_llvm_cbe_1101_count = 0;
  unsigned long long llvm_cbe_tmp__334;
  static  unsigned long long aesl_llvm_cbe_1102_count = 0;
  unsigned long long llvm_cbe_tmp__335;
  static  unsigned long long aesl_llvm_cbe_1103_count = 0;
  unsigned long long llvm_cbe_tmp__336;
  static  unsigned long long aesl_llvm_cbe_1104_count = 0;
  static  unsigned long long aesl_llvm_cbe_1105_count = 0;
  static  unsigned long long aesl_llvm_cbe_1106_count = 0;
  static  unsigned long long aesl_llvm_cbe_1107_count = 0;
  unsigned long long llvm_cbe_tmp__337;
  static  unsigned long long aesl_llvm_cbe_1108_count = 0;
  unsigned long long llvm_cbe_tmp__338;
  static  unsigned long long aesl_llvm_cbe_1109_count = 0;
  unsigned long long llvm_cbe_tmp__339;
  static  unsigned long long aesl_llvm_cbe_1110_count = 0;
  unsigned long long llvm_cbe_tmp__340;
  static  unsigned long long aesl_llvm_cbe_1111_count = 0;
  static  unsigned long long aesl_llvm_cbe_1112_count = 0;
  static  unsigned long long aesl_llvm_cbe_1113_count = 0;
  static  unsigned long long aesl_llvm_cbe_1114_count = 0;
  static  unsigned long long aesl_llvm_cbe_1115_count = 0;
  unsigned long long llvm_cbe_tmp__341;
  static  unsigned long long aesl_llvm_cbe_1116_count = 0;
  unsigned long long llvm_cbe_tmp__342;
  static  unsigned long long aesl_llvm_cbe_1117_count = 0;
  unsigned long long llvm_cbe_tmp__343;
  static  unsigned long long aesl_llvm_cbe_1118_count = 0;
  unsigned long long llvm_cbe_tmp__344;
  static  unsigned long long aesl_llvm_cbe_1119_count = 0;
  static  unsigned long long aesl_llvm_cbe_1120_count = 0;
  static  unsigned long long aesl_llvm_cbe_1121_count = 0;
  static  unsigned long long aesl_llvm_cbe_1122_count = 0;
  static  unsigned long long aesl_llvm_cbe_1123_count = 0;
  unsigned long long llvm_cbe_tmp__345;
  static  unsigned long long aesl_llvm_cbe_1124_count = 0;
  unsigned long long llvm_cbe_tmp__346;
  static  unsigned long long aesl_llvm_cbe_1125_count = 0;
  unsigned long long llvm_cbe_tmp__347;
  static  unsigned long long aesl_llvm_cbe_1126_count = 0;
  unsigned long long llvm_cbe_tmp__348;
  static  unsigned long long aesl_llvm_cbe_1127_count = 0;
  static  unsigned long long aesl_llvm_cbe_1128_count = 0;
  static  unsigned long long aesl_llvm_cbe_1129_count = 0;
  static  unsigned long long aesl_llvm_cbe_1130_count = 0;
  static  unsigned long long aesl_llvm_cbe_1131_count = 0;
  static  unsigned long long aesl_llvm_cbe_1132_count = 0;
  unsigned long long llvm_cbe_tmp__349;
  static  unsigned long long aesl_llvm_cbe_1133_count = 0;
  static  unsigned long long aesl_llvm_cbe_1134_count = 0;
  static  unsigned long long aesl_llvm_cbe_1135_count = 0;
  static  unsigned long long aesl_llvm_cbe_1136_count = 0;
  unsigned long long llvm_cbe_tmp__350;
  static  unsigned long long aesl_llvm_cbe_1137_count = 0;
  static  unsigned long long aesl_llvm_cbe_1138_count = 0;
  static  unsigned long long aesl_llvm_cbe_1139_count = 0;
  static  unsigned long long aesl_llvm_cbe_1140_count = 0;
  unsigned long long llvm_cbe_tmp__351;
  static  unsigned long long aesl_llvm_cbe_1141_count = 0;
  static  unsigned long long aesl_llvm_cbe_1142_count = 0;
  static  unsigned long long aesl_llvm_cbe_1143_count = 0;
  static  unsigned long long aesl_llvm_cbe_1144_count = 0;
  static  unsigned long long aesl_llvm_cbe_1145_count = 0;
  unsigned long long llvm_cbe_tmp__352;
  static  unsigned long long aesl_llvm_cbe_1146_count = 0;
  static  unsigned long long aesl_llvm_cbe_1147_count = 0;
  static  unsigned long long aesl_llvm_cbe_1148_count = 0;
  unsigned long long llvm_cbe_tmp__353;
  static  unsigned long long aesl_llvm_cbe_1149_count = 0;
  static  unsigned long long aesl_llvm_cbe_1150_count = 0;
  static  unsigned long long aesl_llvm_cbe_1151_count = 0;
  static  unsigned long long aesl_llvm_cbe_1152_count = 0;
  static  unsigned long long aesl_llvm_cbe_1153_count = 0;
  static  unsigned long long aesl_llvm_cbe_1154_count = 0;
  static  unsigned long long aesl_llvm_cbe_1155_count = 0;
  unsigned long long llvm_cbe_tmp__354;
  static  unsigned long long aesl_llvm_cbe_1156_count = 0;
  static  unsigned long long aesl_llvm_cbe_1157_count = 0;
  unsigned long long llvm_cbe_tmp__355;
  static  unsigned long long aesl_llvm_cbe_1158_count = 0;
  static  unsigned long long aesl_llvm_cbe_1159_count = 0;
  static  unsigned long long aesl_llvm_cbe_1160_count = 0;
  static  unsigned long long aesl_llvm_cbe_1161_count = 0;
  unsigned long long llvm_cbe_tmp__356;
  static  unsigned long long aesl_llvm_cbe_1162_count = 0;
  static  unsigned long long aesl_llvm_cbe_1163_count = 0;
  static  unsigned long long aesl_llvm_cbe_1164_count = 0;
  unsigned long long llvm_cbe_tmp__357;
  static  unsigned long long aesl_llvm_cbe_1165_count = 0;
  static  unsigned long long aesl_llvm_cbe_1166_count = 0;
  static  unsigned long long aesl_llvm_cbe_1167_count = 0;
  static  unsigned long long aesl_llvm_cbe_1168_count = 0;
  static  unsigned long long aesl_llvm_cbe_1169_count = 0;
  static  unsigned long long aesl_llvm_cbe_1170_count = 0;
  static  unsigned long long aesl_llvm_cbe_1171_count = 0;
  static  unsigned long long aesl_llvm_cbe_1172_count = 0;
  unsigned long long llvm_cbe_tmp__358;
  static  unsigned long long aesl_llvm_cbe_1173_count = 0;
  static  unsigned long long aesl_llvm_cbe_1174_count = 0;
  static  unsigned long long aesl_llvm_cbe_1175_count = 0;
  unsigned long long llvm_cbe_tmp__359;
  static  unsigned long long aesl_llvm_cbe_1176_count = 0;
  static  unsigned long long aesl_llvm_cbe_1177_count = 0;
  static  unsigned long long aesl_llvm_cbe_1178_count = 0;
  static  unsigned long long aesl_llvm_cbe_1179_count = 0;
  unsigned long long llvm_cbe_tmp__360;
  static  unsigned long long aesl_llvm_cbe_1180_count = 0;
  unsigned long long llvm_cbe_tmp__361;
  static  unsigned long long aesl_llvm_cbe_1181_count = 0;
  static  unsigned long long aesl_llvm_cbe_1182_count = 0;
  static  unsigned long long aesl_llvm_cbe_1183_count = 0;
  static  unsigned long long aesl_llvm_cbe_1184_count = 0;
  static  unsigned long long aesl_llvm_cbe_1185_count = 0;
  static  unsigned long long aesl_llvm_cbe_1186_count = 0;
  static  unsigned long long aesl_llvm_cbe_1187_count = 0;
  unsigned long long llvm_cbe_tmp__362;
  static  unsigned long long aesl_llvm_cbe_1188_count = 0;
  static  unsigned long long aesl_llvm_cbe_1189_count = 0;
  static  unsigned long long aesl_llvm_cbe_1190_count = 0;
  unsigned long long llvm_cbe_tmp__363;
  static  unsigned long long aesl_llvm_cbe_1191_count = 0;
  static  unsigned long long aesl_llvm_cbe_1192_count = 0;
  static  unsigned long long aesl_llvm_cbe_1193_count = 0;
  unsigned long long llvm_cbe_tmp__364;
  static  unsigned long long aesl_llvm_cbe_1194_count = 0;
  static  unsigned long long aesl_llvm_cbe_1195_count = 0;
  static  unsigned long long aesl_llvm_cbe_1196_count = 0;
  static  unsigned long long aesl_llvm_cbe_1197_count = 0;
  static  unsigned long long aesl_llvm_cbe_1198_count = 0;
  static  unsigned long long aesl_llvm_cbe_1199_count = 0;
  unsigned long long llvm_cbe_tmp__365;
  static  unsigned long long aesl_llvm_cbe_1200_count = 0;
  static  unsigned long long aesl_llvm_cbe_1201_count = 0;
  static  unsigned long long aesl_llvm_cbe_1202_count = 0;
  static  unsigned long long aesl_llvm_cbe_1203_count = 0;
  static  unsigned long long aesl_llvm_cbe_1204_count = 0;
  unsigned long long llvm_cbe_tmp__366;
  static  unsigned long long aesl_llvm_cbe_1205_count = 0;
  static  unsigned long long aesl_llvm_cbe_1206_count = 0;
  static  unsigned long long aesl_llvm_cbe_1207_count = 0;
  static  unsigned long long aesl_llvm_cbe_1208_count = 0;
  static  unsigned long long aesl_llvm_cbe_1209_count = 0;
  unsigned long long llvm_cbe_tmp__367;
  static  unsigned long long aesl_llvm_cbe_1210_count = 0;
  static  unsigned long long aesl_llvm_cbe_1211_count = 0;
  static  unsigned long long aesl_llvm_cbe_1212_count = 0;
  static  unsigned long long aesl_llvm_cbe_1213_count = 0;
  unsigned long long llvm_cbe_tmp__368;
  static  unsigned long long aesl_llvm_cbe_1214_count = 0;
  static  unsigned long long aesl_llvm_cbe_1215_count = 0;
  static  unsigned long long aesl_llvm_cbe_1216_count = 0;
  static  unsigned long long aesl_llvm_cbe_1217_count = 0;
  unsigned long long llvm_cbe_tmp__369;
  static  unsigned long long aesl_llvm_cbe_1218_count = 0;
  static  unsigned long long aesl_llvm_cbe_1219_count = 0;
  static  unsigned long long aesl_llvm_cbe_1220_count = 0;
  static  unsigned long long aesl_llvm_cbe_1221_count = 0;
  unsigned long long llvm_cbe_tmp__370;
  static  unsigned long long aesl_llvm_cbe_1222_count = 0;
  static  unsigned long long aesl_llvm_cbe_1223_count = 0;
  static  unsigned long long aesl_llvm_cbe_1224_count = 0;
  unsigned long long llvm_cbe_tmp__371;
  static  unsigned long long aesl_llvm_cbe_1225_count = 0;
  static  unsigned long long aesl_llvm_cbe_1226_count = 0;
  static  unsigned long long aesl_llvm_cbe_1227_count = 0;
  unsigned long long llvm_cbe_tmp__372;
  static  unsigned long long aesl_llvm_cbe_1228_count = 0;
  static  unsigned long long aesl_llvm_cbe_1229_count = 0;
  static  unsigned long long aesl_llvm_cbe_1230_count = 0;
  static  unsigned long long aesl_llvm_cbe_1231_count = 0;
  unsigned long long llvm_cbe_tmp__373;
  static  unsigned long long aesl_llvm_cbe_1232_count = 0;
  static  unsigned long long aesl_llvm_cbe_1233_count = 0;
  static  unsigned long long aesl_llvm_cbe_1234_count = 0;
  static  unsigned long long aesl_llvm_cbe_1235_count = 0;
  unsigned long long llvm_cbe_tmp__374;
  static  unsigned long long aesl_llvm_cbe_1236_count = 0;
  static  unsigned long long aesl_llvm_cbe_1237_count = 0;
  static  unsigned long long aesl_llvm_cbe_1238_count = 0;
  static  unsigned long long aesl_llvm_cbe_1239_count = 0;
  unsigned long long llvm_cbe_tmp__375;
  static  unsigned long long aesl_llvm_cbe_1240_count = 0;
  static  unsigned long long aesl_llvm_cbe_1241_count = 0;
  static  unsigned long long aesl_llvm_cbe_1242_count = 0;
  static  unsigned long long aesl_llvm_cbe_1243_count = 0;
  unsigned long long llvm_cbe_tmp__376;
  static  unsigned long long aesl_llvm_cbe_1244_count = 0;
  static  unsigned long long aesl_llvm_cbe_1245_count = 0;
  static  unsigned long long aesl_llvm_cbe_1246_count = 0;
  unsigned long long llvm_cbe_tmp__377;
  static  unsigned long long aesl_llvm_cbe_1247_count = 0;
  static  unsigned long long aesl_llvm_cbe_1248_count = 0;
  static  unsigned long long aesl_llvm_cbe_1249_count = 0;
  static  unsigned long long aesl_llvm_cbe_1250_count = 0;
  unsigned long long llvm_cbe_tmp__378;
  static  unsigned long long aesl_llvm_cbe_1251_count = 0;
  static  unsigned long long aesl_llvm_cbe_1252_count = 0;
  static  unsigned long long aesl_llvm_cbe_1253_count = 0;
  unsigned long long llvm_cbe_tmp__379;
  static  unsigned long long aesl_llvm_cbe_1254_count = 0;
  static  unsigned long long aesl_llvm_cbe_1255_count = 0;
  static  unsigned long long aesl_llvm_cbe_1256_count = 0;
  unsigned long long llvm_cbe_tmp__380;
  static  unsigned long long aesl_llvm_cbe_1257_count = 0;
  static  unsigned long long aesl_llvm_cbe_1258_count = 0;
  static  unsigned long long aesl_llvm_cbe_1259_count = 0;
  static  unsigned long long aesl_llvm_cbe_1260_count = 0;
  unsigned long long llvm_cbe_tmp__381;
  static  unsigned long long aesl_llvm_cbe_1261_count = 0;
  static  unsigned long long aesl_llvm_cbe_1262_count = 0;
  static  unsigned long long aesl_llvm_cbe_1263_count = 0;
  unsigned long long llvm_cbe_tmp__382;
  static  unsigned long long aesl_llvm_cbe_1264_count = 0;
  static  unsigned long long aesl_llvm_cbe_1265_count = 0;
  static  unsigned long long aesl_llvm_cbe_1266_count = 0;
  static  unsigned long long aesl_llvm_cbe_1267_count = 0;
  unsigned long long llvm_cbe_tmp__383;
  static  unsigned long long aesl_llvm_cbe_1268_count = 0;
  static  unsigned long long aesl_llvm_cbe_1269_count = 0;
  static  unsigned long long aesl_llvm_cbe_1270_count = 0;
  unsigned long long llvm_cbe_tmp__384;
  static  unsigned long long aesl_llvm_cbe_1271_count = 0;
  static  unsigned long long aesl_llvm_cbe_1272_count = 0;
  static  unsigned long long aesl_llvm_cbe_1273_count = 0;
  unsigned long long llvm_cbe_tmp__385;
  static  unsigned long long aesl_llvm_cbe_1274_count = 0;
  static  unsigned long long aesl_llvm_cbe_1275_count = 0;
  static  unsigned long long aesl_llvm_cbe_1276_count = 0;
  unsigned long long llvm_cbe_tmp__386;
  static  unsigned long long aesl_llvm_cbe_1277_count = 0;
  static  unsigned long long aesl_llvm_cbe_1278_count = 0;
  static  unsigned long long aesl_llvm_cbe_1279_count = 0;
  static  unsigned long long aesl_llvm_cbe_1280_count = 0;
  unsigned long long llvm_cbe_tmp__387;
  static  unsigned long long aesl_llvm_cbe_1281_count = 0;
  static  unsigned long long aesl_llvm_cbe_1282_count = 0;
  static  unsigned long long aesl_llvm_cbe_1283_count = 0;
  unsigned long long llvm_cbe_tmp__388;
  static  unsigned long long aesl_llvm_cbe_1284_count = 0;
  static  unsigned long long aesl_llvm_cbe_1285_count = 0;
  static  unsigned long long aesl_llvm_cbe_1286_count = 0;
  static  unsigned long long aesl_llvm_cbe_1287_count = 0;
  unsigned long long llvm_cbe_tmp__389;
  static  unsigned long long aesl_llvm_cbe_1288_count = 0;
  static  unsigned long long aesl_llvm_cbe_1289_count = 0;
  static  unsigned long long aesl_llvm_cbe_1290_count = 0;
  static  unsigned long long aesl_llvm_cbe_1291_count = 0;
  unsigned long long llvm_cbe_tmp__390;
  static  unsigned long long aesl_llvm_cbe_1292_count = 0;
  static  unsigned long long aesl_llvm_cbe_1293_count = 0;
  static  unsigned long long aesl_llvm_cbe_1294_count = 0;
  static  unsigned long long aesl_llvm_cbe_1295_count = 0;
  unsigned long long llvm_cbe_tmp__391;
  static  unsigned long long aesl_llvm_cbe_1296_count = 0;
  unsigned long long llvm_cbe_tmp__392;
  static  unsigned long long aesl_llvm_cbe_1297_count = 0;
  static  unsigned long long aesl_llvm_cbe_1298_count = 0;
  static  unsigned long long aesl_llvm_cbe_1299_count = 0;
  static  unsigned long long aesl_llvm_cbe_1300_count = 0;
  unsigned long long llvm_cbe_tmp__393;
  static  unsigned long long aesl_llvm_cbe_1301_count = 0;
  static  unsigned long long aesl_llvm_cbe_1302_count = 0;
  static  unsigned long long aesl_llvm_cbe_1303_count = 0;
  static  unsigned long long aesl_llvm_cbe_1304_count = 0;
  unsigned long long llvm_cbe_tmp__394;
  static  unsigned long long aesl_llvm_cbe_1305_count = 0;
  unsigned long long llvm_cbe_tmp__395;
  static  unsigned long long aesl_llvm_cbe_1306_count = 0;
  static  unsigned long long aesl_llvm_cbe_1307_count = 0;
  static  unsigned long long aesl_llvm_cbe_1308_count = 0;
  static  unsigned long long aesl_llvm_cbe_1309_count = 0;
  unsigned long long llvm_cbe_tmp__396;
  static  unsigned long long aesl_llvm_cbe_1310_count = 0;
  unsigned long long llvm_cbe_tmp__397;
  static  unsigned long long aesl_llvm_cbe_1311_count = 0;
  static  unsigned long long aesl_llvm_cbe_1312_count = 0;
  static  unsigned long long aesl_llvm_cbe_1313_count = 0;
  static  unsigned long long aesl_llvm_cbe_1314_count = 0;
  unsigned long long llvm_cbe_tmp__398;
  static  unsigned long long aesl_llvm_cbe_1315_count = 0;
  unsigned long long llvm_cbe_tmp__399;
  static  unsigned long long aesl_llvm_cbe_1316_count = 0;
  static  unsigned long long aesl_llvm_cbe_1317_count = 0;
  static  unsigned long long aesl_llvm_cbe_1318_count = 0;
  static  unsigned long long aesl_llvm_cbe_1319_count = 0;
  unsigned long long llvm_cbe_tmp__400;
  static  unsigned long long aesl_llvm_cbe_1320_count = 0;
  static  unsigned long long aesl_llvm_cbe_1321_count = 0;
  static  unsigned long long aesl_llvm_cbe_1322_count = 0;
  static  unsigned long long aesl_llvm_cbe_1323_count = 0;
  unsigned long long llvm_cbe_tmp__401;
  static  unsigned long long aesl_llvm_cbe_1324_count = 0;
  unsigned long long llvm_cbe_tmp__402;
  static  unsigned long long aesl_llvm_cbe_1325_count = 0;
  static  unsigned long long aesl_llvm_cbe_1326_count = 0;
  static  unsigned long long aesl_llvm_cbe_1327_count = 0;
  static  unsigned long long aesl_llvm_cbe_1328_count = 0;
  unsigned long long llvm_cbe_tmp__403;
  static  unsigned long long aesl_llvm_cbe_1329_count = 0;
  static  unsigned long long aesl_llvm_cbe_1330_count = 0;
  static  unsigned long long aesl_llvm_cbe_1331_count = 0;
  static  unsigned long long aesl_llvm_cbe_1332_count = 0;
  unsigned long long llvm_cbe_tmp__404;
  static  unsigned long long aesl_llvm_cbe_1333_count = 0;
  static  unsigned long long aesl_llvm_cbe_1334_count = 0;
  static  unsigned long long aesl_llvm_cbe_1335_count = 0;
  unsigned long long llvm_cbe_tmp__405;
  static  unsigned long long aesl_llvm_cbe_1336_count = 0;
  unsigned long long llvm_cbe_tmp__406;
  static  unsigned long long aesl_llvm_cbe_1337_count = 0;
  unsigned long long llvm_cbe_tmp__407;
  static  unsigned long long aesl_llvm_cbe_1338_count = 0;
  static  unsigned long long aesl_llvm_cbe_1339_count = 0;
  static  unsigned long long aesl_llvm_cbe_1340_count = 0;
  unsigned long long llvm_cbe_tmp__408;
  static  unsigned long long aesl_llvm_cbe_1341_count = 0;
  unsigned long long llvm_cbe_tmp__409;
  static  unsigned long long aesl_llvm_cbe_1342_count = 0;
  static  unsigned long long aesl_llvm_cbe_1343_count = 0;
  static  unsigned long long aesl_llvm_cbe_1344_count = 0;
  unsigned long long llvm_cbe_tmp__410;
  static  unsigned long long aesl_llvm_cbe_1345_count = 0;
  static  unsigned long long aesl_llvm_cbe_1346_count = 0;
  static  unsigned long long aesl_llvm_cbe_1347_count = 0;
  static  unsigned long long aesl_llvm_cbe_1348_count = 0;
  unsigned long long llvm_cbe_tmp__411;
  static  unsigned long long aesl_llvm_cbe_1349_count = 0;
  unsigned long long llvm_cbe_tmp__412;
  static  unsigned long long aesl_llvm_cbe_1350_count = 0;
  static  unsigned long long aesl_llvm_cbe_1351_count = 0;
  static  unsigned long long aesl_llvm_cbe_1352_count = 0;
  unsigned long long llvm_cbe_tmp__413;
  static  unsigned long long aesl_llvm_cbe_1353_count = 0;
  unsigned long long llvm_cbe_tmp__414;
  static  unsigned long long aesl_llvm_cbe_1354_count = 0;
  static  unsigned long long aesl_llvm_cbe_1355_count = 0;
  static  unsigned long long aesl_llvm_cbe_1356_count = 0;
  unsigned long long llvm_cbe_tmp__415;
  static  unsigned long long aesl_llvm_cbe_1357_count = 0;
  unsigned long long llvm_cbe_tmp__416;
  static  unsigned long long aesl_llvm_cbe_1358_count = 0;
  static  unsigned long long aesl_llvm_cbe_1359_count = 0;
  static  unsigned long long aesl_llvm_cbe_1360_count = 0;
  unsigned long long llvm_cbe_tmp__417;
  static  unsigned long long aesl_llvm_cbe_1361_count = 0;
  unsigned long long llvm_cbe_tmp__418;
  static  unsigned long long aesl_llvm_cbe_1362_count = 0;
  unsigned long long llvm_cbe_tmp__419;
  static  unsigned long long aesl_llvm_cbe_1363_count = 0;
  unsigned long long llvm_cbe_tmp__420;
  static  unsigned long long aesl_llvm_cbe_1364_count = 0;
  static  unsigned long long aesl_llvm_cbe_1365_count = 0;
  static  unsigned long long aesl_llvm_cbe_1366_count = 0;
  static  unsigned long long aesl_llvm_cbe_1367_count = 0;
  static  unsigned long long aesl_llvm_cbe_1368_count = 0;
  static  unsigned long long aesl_llvm_cbe_1369_count = 0;
  static  unsigned long long aesl_llvm_cbe_1370_count = 0;
  static  unsigned long long aesl_llvm_cbe_1371_count = 0;
  static  unsigned long long aesl_llvm_cbe_1372_count = 0;
  static  unsigned long long aesl_llvm_cbe_1373_count = 0;
  static  unsigned long long aesl_llvm_cbe_1374_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @aesl_internal_br_aes_ct64_bitslice_Sbox\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds i64* %%q, i64 7, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_917_count);
  llvm_cbe_tmp__288 = (signed long long *)(&llvm_cbe_q[(((signed long long )7ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = load i64* %%1, align 8, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_918_count);
  llvm_cbe_tmp__289 = (unsigned long long )*llvm_cbe_tmp__288;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__289);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds i64* %%q, i64 6, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_925_count);
  llvm_cbe_tmp__290 = (signed long long *)(&llvm_cbe_q[(((signed long long )6ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = load i64* %%3, align 8, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_926_count);
  llvm_cbe_tmp__291 = (unsigned long long )*llvm_cbe_tmp__290;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__291);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds i64* %%q, i64 5, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_930_count);
  llvm_cbe_tmp__292 = (signed long long *)(&llvm_cbe_q[(((signed long long )5ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = load i64* %%5, align 8, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_931_count);
  llvm_cbe_tmp__293 = (unsigned long long )*llvm_cbe_tmp__292;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__293);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds i64* %%q, i64 4, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_934_count);
  llvm_cbe_tmp__294 = (signed long long *)(&llvm_cbe_q[(((signed long long )4ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = load i64* %%7, align 8, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_935_count);
  llvm_cbe_tmp__295 = (unsigned long long )*llvm_cbe_tmp__294;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__295);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds i64* %%q, i64 3, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_940_count);
  llvm_cbe_tmp__296 = (signed long long *)(&llvm_cbe_q[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = load i64* %%9, align 8, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_941_count);
  llvm_cbe_tmp__297 = (unsigned long long )*llvm_cbe_tmp__296;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__297);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds i64* %%q, i64 2, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_944_count);
  llvm_cbe_tmp__298 = (signed long long *)(&llvm_cbe_q[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = load i64* %%11, align 8, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_945_count);
  llvm_cbe_tmp__299 = (unsigned long long )*llvm_cbe_tmp__298;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__299);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds i64* %%q, i64 1, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_950_count);
  llvm_cbe_tmp__300 = (signed long long *)(&llvm_cbe_q[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = load i64* %%13, align 8, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_951_count);
  llvm_cbe_tmp__301 = (unsigned long long )*llvm_cbe_tmp__300;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__301);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = load i64* %%q, align 8, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_955_count);
  llvm_cbe_tmp__302 = (unsigned long long )*llvm_cbe_q;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__302);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = xor i64 %%12, %%8, !dbg !21 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_962_count);
  llvm_cbe_tmp__303 = (unsigned long long )llvm_cbe_tmp__299 ^ llvm_cbe_tmp__295;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__303);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = xor i64 %%14, %%2, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_967_count);
  llvm_cbe_tmp__304 = (unsigned long long )llvm_cbe_tmp__301 ^ llvm_cbe_tmp__289;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__304);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = xor i64 %%8, %%2, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_973_count);
  llvm_cbe_tmp__305 = (unsigned long long )llvm_cbe_tmp__295 ^ llvm_cbe_tmp__289;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__305);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = xor i64 %%12, %%2, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_978_count);
  llvm_cbe_tmp__306 = (unsigned long long )llvm_cbe_tmp__299 ^ llvm_cbe_tmp__289;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__306);
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = xor i64 %%6, %%4, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_984_count);
  llvm_cbe_tmp__307 = (unsigned long long )llvm_cbe_tmp__293 ^ llvm_cbe_tmp__291;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__307);
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = xor i64 %%15, %%20, !dbg !22 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_989_count);
  llvm_cbe_tmp__308 = (unsigned long long )llvm_cbe_tmp__302 ^ llvm_cbe_tmp__307;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__308);
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = xor i64 %%21, %%8, !dbg !21 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_996_count);
  llvm_cbe_tmp__309 = (unsigned long long )llvm_cbe_tmp__308 ^ llvm_cbe_tmp__295;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__309);
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = xor i64 %%17, %%16, !dbg !22 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1000_count);
  llvm_cbe_tmp__310 = (unsigned long long )llvm_cbe_tmp__304 ^ llvm_cbe_tmp__303;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__310);
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = xor i64 %%21, %%2, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1005_count);
  llvm_cbe_tmp__311 = (unsigned long long )llvm_cbe_tmp__308 ^ llvm_cbe_tmp__289;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__311);
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = xor i64 %%21, %%14, !dbg !22 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1009_count);
  llvm_cbe_tmp__312 = (unsigned long long )llvm_cbe_tmp__308 ^ llvm_cbe_tmp__301;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__312);
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = xor i64 %%25, %%19, !dbg !24 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1014_count);
  llvm_cbe_tmp__313 = (unsigned long long )llvm_cbe_tmp__312 ^ llvm_cbe_tmp__306;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__313);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = xor i64 %%23, %%10, !dbg !21 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1018_count);
  llvm_cbe_tmp__314 = (unsigned long long )llvm_cbe_tmp__310 ^ llvm_cbe_tmp__297;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__314);
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = xor i64 %%27, %%12, !dbg !21 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1021_count);
  llvm_cbe_tmp__315 = (unsigned long long )llvm_cbe_tmp__314 ^ llvm_cbe_tmp__299;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__315);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = xor i64 %%27, %%4, !dbg !21 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1028_count);
  llvm_cbe_tmp__316 = (unsigned long long )llvm_cbe_tmp__314 ^ llvm_cbe_tmp__291;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__316);
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = xor i64 %%28, %%15, !dbg !22 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1032_count);
  llvm_cbe_tmp__317 = (unsigned long long )llvm_cbe_tmp__315 ^ llvm_cbe_tmp__302;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__317);
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = xor i64 %%28, %%20, !dbg !24 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1036_count);
  llvm_cbe_tmp__318 = (unsigned long long )llvm_cbe_tmp__315 ^ llvm_cbe_tmp__307;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__318);
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = xor i64 %%29, %%18, !dbg !23 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1042_count);
  llvm_cbe_tmp__319 = (unsigned long long )llvm_cbe_tmp__316 ^ llvm_cbe_tmp__305;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__319);
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = xor i64 %%32, %%15, !dbg !22 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1049_count);
  llvm_cbe_tmp__320 = (unsigned long long )llvm_cbe_tmp__319 ^ llvm_cbe_tmp__302;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__320);
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = xor i64 %%31, %%32, !dbg !27 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1053_count);
  llvm_cbe_tmp__321 = (unsigned long long )llvm_cbe_tmp__318 ^ llvm_cbe_tmp__319;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__321);
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = xor i64 %%32, %%20, !dbg !24 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1057_count);
  llvm_cbe_tmp__322 = (unsigned long long )llvm_cbe_tmp__319 ^ llvm_cbe_tmp__307;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__322);
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = and i64 %%28, %%23, !dbg !25 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1063_count);
  llvm_cbe_tmp__323 = (unsigned long long )llvm_cbe_tmp__315 & llvm_cbe_tmp__310;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__323);
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = and i64 %%30, %%26, !dbg !26 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1067_count);
  llvm_cbe_tmp__324 = (unsigned long long )llvm_cbe_tmp__317 & llvm_cbe_tmp__313;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__324);
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = and i64 %%22, %%15, !dbg !22 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1070_count);
  llvm_cbe_tmp__325 = (unsigned long long )llvm_cbe_tmp__309 & llvm_cbe_tmp__302;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__325);
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = and i64 %%35, %%17, !dbg !23 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1073_count);
  llvm_cbe_tmp__326 = (unsigned long long )llvm_cbe_tmp__322 & llvm_cbe_tmp__304;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__326);
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = and i64 %%25, %%21, !dbg !24 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1077_count);
  llvm_cbe_tmp__327 = (unsigned long long )llvm_cbe_tmp__312 & llvm_cbe_tmp__308;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__327);
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = and i64 %%33, %%24, !dbg !25 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1080_count);
  llvm_cbe_tmp__328 = (unsigned long long )llvm_cbe_tmp__320 & llvm_cbe_tmp__311;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__328);
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = and i64 %%32, %%18, !dbg !23 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1083_count);
  llvm_cbe_tmp__329 = (unsigned long long )llvm_cbe_tmp__319 & llvm_cbe_tmp__305;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__329);
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = and i64 %%34, %%16, !dbg !22 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1087_count);
  llvm_cbe_tmp__330 = (unsigned long long )llvm_cbe_tmp__321 & llvm_cbe_tmp__303;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__330);
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = xor i64 %%43, %%42, !dbg !29 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1090_count);
  llvm_cbe_tmp__331 = (unsigned long long )llvm_cbe_tmp__330 ^ llvm_cbe_tmp__329;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__331);
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = and i64 %%31, %%19, !dbg !24 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1094_count);
  llvm_cbe_tmp__332 = (unsigned long long )llvm_cbe_tmp__318 & llvm_cbe_tmp__306;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__332);
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = xor i64 %%45, %%42, !dbg !29 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1097_count);
  llvm_cbe_tmp__333 = (unsigned long long )llvm_cbe_tmp__332 ^ llvm_cbe_tmp__329;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__333);
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = xor i64 %%36, %%29, !dbg !28 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1101_count);
  llvm_cbe_tmp__334 = (unsigned long long )llvm_cbe_tmp__323 ^ llvm_cbe_tmp__316;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__334);
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = xor i64 %%47, %%37, !dbg !29 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1102_count);
  llvm_cbe_tmp__335 = (unsigned long long )llvm_cbe_tmp__334 ^ llvm_cbe_tmp__324;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__335);
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = xor i64 %%48, %%44, !dbg !26 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1103_count);
  llvm_cbe_tmp__336 = (unsigned long long )llvm_cbe_tmp__335 ^ llvm_cbe_tmp__331;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__336);
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = xor i64 %%38, %%19, !dbg !28 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1107_count);
  llvm_cbe_tmp__337 = (unsigned long long )llvm_cbe_tmp__325 ^ llvm_cbe_tmp__306;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__337);
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = xor i64 %%50, %%31, !dbg !30 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1108_count);
  llvm_cbe_tmp__338 = (unsigned long long )llvm_cbe_tmp__337 ^ llvm_cbe_tmp__318;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__338);
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = xor i64 %%51, %%36, !dbg !24 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1109_count);
  llvm_cbe_tmp__339 = (unsigned long long )llvm_cbe_tmp__338 ^ llvm_cbe_tmp__323;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__339);
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = xor i64 %%52, %%46, !dbg !30 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1110_count);
  llvm_cbe_tmp__340 = (unsigned long long )llvm_cbe_tmp__339 ^ llvm_cbe_tmp__333;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__340);
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = xor i64 %%40, %%17, !dbg !28 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1115_count);
  llvm_cbe_tmp__341 = (unsigned long long )llvm_cbe_tmp__327 ^ llvm_cbe_tmp__304;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__341);
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = xor i64 %%54, %%35, !dbg !29 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1116_count);
  llvm_cbe_tmp__342 = (unsigned long long )llvm_cbe_tmp__341 ^ llvm_cbe_tmp__322;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__342);
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = xor i64 %%55, %%39, !dbg !23 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1117_count);
  llvm_cbe_tmp__343 = (unsigned long long )llvm_cbe_tmp__342 ^ llvm_cbe_tmp__326;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__343);
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = xor i64 %%56, %%44, !dbg !31 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1118_count);
  llvm_cbe_tmp__344 = (unsigned long long )llvm_cbe_tmp__343 ^ llvm_cbe_tmp__331;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__344);
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = xor i64 %%35, %%2, !dbg !28 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1123_count);
  llvm_cbe_tmp__345 = (unsigned long long )llvm_cbe_tmp__322 ^ llvm_cbe_tmp__289;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__345);
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = xor i64 %%58, %%41, !dbg !30 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1124_count);
  llvm_cbe_tmp__346 = (unsigned long long )llvm_cbe_tmp__345 ^ llvm_cbe_tmp__328;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__346);
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = xor i64 %%59, %%46, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1125_count);
  llvm_cbe_tmp__347 = (unsigned long long )llvm_cbe_tmp__346 ^ llvm_cbe_tmp__333;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__347);
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = xor i64 %%60, %%39, !dbg !31 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1126_count);
  llvm_cbe_tmp__348 = (unsigned long long )llvm_cbe_tmp__347 ^ llvm_cbe_tmp__326;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__348);
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = xor i64 %%49, %%53, !dbg !30 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1132_count);
  llvm_cbe_tmp__349 = (unsigned long long )llvm_cbe_tmp__336 ^ llvm_cbe_tmp__340;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__349);
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = and i64 %%49, %%57, !dbg !30 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1136_count);
  llvm_cbe_tmp__350 = (unsigned long long )llvm_cbe_tmp__336 & llvm_cbe_tmp__344;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__350);
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = xor i64 %%61, %%63, !dbg !31 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1140_count);
  llvm_cbe_tmp__351 = (unsigned long long )llvm_cbe_tmp__348 ^ llvm_cbe_tmp__350;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__351);
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = and i64 %%64, %%62, !dbg !32 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1145_count);
  llvm_cbe_tmp__352 = (unsigned long long )llvm_cbe_tmp__351 & llvm_cbe_tmp__349;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__352);
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = xor i64 %%65, %%53, !dbg !30 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1148_count);
  llvm_cbe_tmp__353 = (unsigned long long )llvm_cbe_tmp__352 ^ llvm_cbe_tmp__340;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__353);
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = xor i64 %%61, %%57, !dbg !31 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1155_count);
  llvm_cbe_tmp__354 = (unsigned long long )llvm_cbe_tmp__348 ^ llvm_cbe_tmp__344;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__354);
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = xor i64 %%63, %%53, !dbg !30 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1157_count);
  llvm_cbe_tmp__355 = (unsigned long long )llvm_cbe_tmp__350 ^ llvm_cbe_tmp__340;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__355);
if (AESL_DEBUG_TRACE)
printf("\n  %%69 = and i64 %%68, %%67, !dbg !33 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1161_count);
  llvm_cbe_tmp__356 = (unsigned long long )llvm_cbe_tmp__355 & llvm_cbe_tmp__354;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__356);
if (AESL_DEBUG_TRACE)
printf("\n  %%70 = xor i64 %%69, %%61, !dbg !31 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1164_count);
  llvm_cbe_tmp__357 = (unsigned long long )llvm_cbe_tmp__356 ^ llvm_cbe_tmp__348;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__357);
if (AESL_DEBUG_TRACE)
printf("\n  %%71 = xor i64 %%69, %%63, !dbg !32 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1172_count);
  llvm_cbe_tmp__358 = (unsigned long long )llvm_cbe_tmp__356 ^ llvm_cbe_tmp__350;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__358);
if (AESL_DEBUG_TRACE)
printf("\n  %%72 = and i64 %%71, %%61, !dbg !31 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1175_count);
  llvm_cbe_tmp__359 = (unsigned long long )llvm_cbe_tmp__358 & llvm_cbe_tmp__348;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__359);
if (AESL_DEBUG_TRACE)
printf("\n  %%73 = xor i64 %%70, %%57, !dbg !31 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1179_count);
  llvm_cbe_tmp__360 = (unsigned long long )llvm_cbe_tmp__357 ^ llvm_cbe_tmp__344;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__360);
if (AESL_DEBUG_TRACE)
printf("\n  %%74 = xor i64 %%73, %%72, !dbg !33 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1180_count);
  llvm_cbe_tmp__361 = (unsigned long long )llvm_cbe_tmp__360 ^ llvm_cbe_tmp__359;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__361);
if (AESL_DEBUG_TRACE)
printf("\n  %%75 = xor i64 %%72, %%64, !dbg !32 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1187_count);
  llvm_cbe_tmp__362 = (unsigned long long )llvm_cbe_tmp__359 ^ llvm_cbe_tmp__351;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__362);
if (AESL_DEBUG_TRACE)
printf("\n  %%76 = and i64 %%75, %%66, !dbg !32 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1190_count);
  llvm_cbe_tmp__363 = (unsigned long long )llvm_cbe_tmp__362 & llvm_cbe_tmp__353;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__363);
if (AESL_DEBUG_TRACE)
printf("\n  %%77 = xor i64 %%76, %%62, !dbg !32 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1193_count);
  llvm_cbe_tmp__364 = (unsigned long long )llvm_cbe_tmp__363 ^ llvm_cbe_tmp__349;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__364);
if (AESL_DEBUG_TRACE)
printf("\n  %%78 = xor i64 %%77, %%74, !dbg !34 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1199_count);
  llvm_cbe_tmp__365 = (unsigned long long )llvm_cbe_tmp__364 ^ llvm_cbe_tmp__361;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__365);
if (AESL_DEBUG_TRACE)
printf("\n  %%79 = xor i64 %%66, %%70, !dbg !32 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1204_count);
  llvm_cbe_tmp__366 = (unsigned long long )llvm_cbe_tmp__353 ^ llvm_cbe_tmp__357;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__366);
if (AESL_DEBUG_TRACE)
printf("\n  %%80 = xor i64 %%77, %%66, !dbg !33 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1209_count);
  llvm_cbe_tmp__367 = (unsigned long long )llvm_cbe_tmp__364 ^ llvm_cbe_tmp__353;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__367);
if (AESL_DEBUG_TRACE)
printf("\n  %%81 = xor i64 %%72, %%57, !dbg !33 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1213_count);
  llvm_cbe_tmp__368 = (unsigned long long )llvm_cbe_tmp__359 ^ llvm_cbe_tmp__344;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__368);
if (AESL_DEBUG_TRACE)
printf("\n  %%82 = xor i64 %%78, %%79, !dbg !34 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1217_count);
  llvm_cbe_tmp__369 = (unsigned long long )llvm_cbe_tmp__365 ^ llvm_cbe_tmp__366;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__369);
if (AESL_DEBUG_TRACE)
printf("\n  %%83 = and i64 %%81, %%28, !dbg !26 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1221_count);
  llvm_cbe_tmp__370 = (unsigned long long )llvm_cbe_tmp__368 & llvm_cbe_tmp__315;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__370);
if (AESL_DEBUG_TRACE)
printf("\n  %%84 = and i64 %%74, %%30, !dbg !27 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1224_count);
  llvm_cbe_tmp__371 = (unsigned long long )llvm_cbe_tmp__361 & llvm_cbe_tmp__317;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__371);
if (AESL_DEBUG_TRACE)
printf("\n  %%85 = and i64 %%70, %%15, !dbg !22 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1227_count);
  llvm_cbe_tmp__372 = (unsigned long long )llvm_cbe_tmp__357 & llvm_cbe_tmp__302;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__372);
if (AESL_DEBUG_TRACE)
printf("\n  %%86 = and i64 %%80, %%35, !dbg !28 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1231_count);
  llvm_cbe_tmp__373 = (unsigned long long )llvm_cbe_tmp__367 & llvm_cbe_tmp__322;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__373);
if (AESL_DEBUG_TRACE)
printf("\n  %%87 = and i64 %%77, %%21, !dbg !24 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1235_count);
  llvm_cbe_tmp__374 = (unsigned long long )llvm_cbe_tmp__364 & llvm_cbe_tmp__308;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__374);
if (AESL_DEBUG_TRACE)
printf("\n  %%88 = and i64 %%66, %%33, !dbg !27 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1239_count);
  llvm_cbe_tmp__375 = (unsigned long long )llvm_cbe_tmp__353 & llvm_cbe_tmp__320;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__375);
if (AESL_DEBUG_TRACE)
printf("\n  %%89 = and i64 %%79, %%32, !dbg !27 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1243_count);
  llvm_cbe_tmp__376 = (unsigned long long )llvm_cbe_tmp__366 & llvm_cbe_tmp__319;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__376);
if (AESL_DEBUG_TRACE)
printf("\n  %%90 = and i64 %%82, %%34, !dbg !27 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1246_count);
  llvm_cbe_tmp__377 = (unsigned long long )llvm_cbe_tmp__369 & llvm_cbe_tmp__321;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__377);
if (AESL_DEBUG_TRACE)
printf("\n  %%91 = and i64 %%78, %%31, !dbg !27 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1250_count);
  llvm_cbe_tmp__378 = (unsigned long long )llvm_cbe_tmp__365 & llvm_cbe_tmp__318;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__378);
if (AESL_DEBUG_TRACE)
printf("\n  %%92 = and i64 %%81, %%23, !dbg !25 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1253_count);
  llvm_cbe_tmp__379 = (unsigned long long )llvm_cbe_tmp__368 & llvm_cbe_tmp__310;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__379);
if (AESL_DEBUG_TRACE)
printf("\n  %%93 = and i64 %%74, %%26, !dbg !26 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1256_count);
  llvm_cbe_tmp__380 = (unsigned long long )llvm_cbe_tmp__361 & llvm_cbe_tmp__313;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__380);
if (AESL_DEBUG_TRACE)
printf("\n  %%94 = and i64 %%70, %%22, !dbg !25 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1260_count);
  llvm_cbe_tmp__381 = (unsigned long long )llvm_cbe_tmp__357 & llvm_cbe_tmp__309;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__381);
if (AESL_DEBUG_TRACE)
printf("\n  %%95 = and i64 %%80, %%17, !dbg !23 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1263_count);
  llvm_cbe_tmp__382 = (unsigned long long )llvm_cbe_tmp__367 & llvm_cbe_tmp__304;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__382);
if (AESL_DEBUG_TRACE)
printf("\n  %%96 = and i64 %%77, %%25, !dbg !25 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1267_count);
  llvm_cbe_tmp__383 = (unsigned long long )llvm_cbe_tmp__364 & llvm_cbe_tmp__312;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__383);
if (AESL_DEBUG_TRACE)
printf("\n  %%97 = and i64 %%66, %%24, !dbg !25 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1270_count);
  llvm_cbe_tmp__384 = (unsigned long long )llvm_cbe_tmp__353 & llvm_cbe_tmp__311;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__384);
if (AESL_DEBUG_TRACE)
printf("\n  %%98 = and i64 %%79, %%18, !dbg !23 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1273_count);
  llvm_cbe_tmp__385 = (unsigned long long )llvm_cbe_tmp__366 & llvm_cbe_tmp__305;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__385);
if (AESL_DEBUG_TRACE)
printf("\n  %%99 = and i64 %%82, %%16, !dbg !23 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1276_count);
  llvm_cbe_tmp__386 = (unsigned long long )llvm_cbe_tmp__369 & llvm_cbe_tmp__303;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__386);
if (AESL_DEBUG_TRACE)
printf("\n  %%100 = and i64 %%78, %%19, !dbg !24 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1280_count);
  llvm_cbe_tmp__387 = (unsigned long long )llvm_cbe_tmp__365 & llvm_cbe_tmp__306;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__387);
if (AESL_DEBUG_TRACE)
printf("\n  %%101 = xor i64 %%99, %%98, !dbg !38 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1283_count);
  llvm_cbe_tmp__388 = (unsigned long long )llvm_cbe_tmp__386 ^ llvm_cbe_tmp__385;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__388);
if (AESL_DEBUG_TRACE)
printf("\n  %%102 = xor i64 %%96, %%88, !dbg !36 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1287_count);
  llvm_cbe_tmp__389 = (unsigned long long )llvm_cbe_tmp__383 ^ llvm_cbe_tmp__375;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__389);
if (AESL_DEBUG_TRACE)
printf("\n  %%103 = xor i64 %%86, %%83, !dbg !35 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1291_count);
  llvm_cbe_tmp__390 = (unsigned long long )llvm_cbe_tmp__373 ^ llvm_cbe_tmp__370;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__390);
if (AESL_DEBUG_TRACE)
printf("\n  %%104 = xor i64 %%95, %%85, !dbg !35 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1295_count);
  llvm_cbe_tmp__391 = (unsigned long long )llvm_cbe_tmp__382 ^ llvm_cbe_tmp__372;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__391);
if (AESL_DEBUG_TRACE)
printf("\n  %%105 = xor i64 %%104, %%103, !dbg !39 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1296_count);
  llvm_cbe_tmp__392 = (unsigned long long )llvm_cbe_tmp__391 ^ llvm_cbe_tmp__390;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__392);
if (AESL_DEBUG_TRACE)
printf("\n  %%106 = xor i64 %%101, %%87, !dbg !36 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1300_count);
  llvm_cbe_tmp__393 = (unsigned long long )llvm_cbe_tmp__388 ^ llvm_cbe_tmp__374;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__393);
if (AESL_DEBUG_TRACE)
printf("\n  %%107 = xor i64 %%86, %%89, !dbg !36 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1304_count);
  llvm_cbe_tmp__394 = (unsigned long long )llvm_cbe_tmp__373 ^ llvm_cbe_tmp__376;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__394);
if (AESL_DEBUG_TRACE)
printf("\n  %%108 = xor i64 %%107, %%90, !dbg !36 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1305_count);
  llvm_cbe_tmp__395 = (unsigned long long )llvm_cbe_tmp__394 ^ llvm_cbe_tmp__377;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__395);
if (AESL_DEBUG_TRACE)
printf("\n  %%109 = xor i64 %%90, %%91, !dbg !36 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1309_count);
  llvm_cbe_tmp__396 = (unsigned long long )llvm_cbe_tmp__377 ^ llvm_cbe_tmp__378;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__396);
if (AESL_DEBUG_TRACE)
printf("\n  %%110 = xor i64 %%109, %%106, !dbg !39 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1310_count);
  llvm_cbe_tmp__397 = (unsigned long long )llvm_cbe_tmp__396 ^ llvm_cbe_tmp__393;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__397);
if (AESL_DEBUG_TRACE)
printf("\n  %%111 = xor i64 %%92, %%93, !dbg !37 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1314_count);
  llvm_cbe_tmp__398 = (unsigned long long )llvm_cbe_tmp__379 ^ llvm_cbe_tmp__380;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__398);
if (AESL_DEBUG_TRACE)
printf("\n  %%112 = xor i64 %%111, %%106, !dbg !39 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1315_count);
  llvm_cbe_tmp__399 = (unsigned long long )llvm_cbe_tmp__398 ^ llvm_cbe_tmp__393;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__399);
if (AESL_DEBUG_TRACE)
printf("\n  %%113 = xor i64 %%108, %%87, !dbg !36 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1319_count);
  llvm_cbe_tmp__400 = (unsigned long long )llvm_cbe_tmp__395 ^ llvm_cbe_tmp__374;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__400);
if (AESL_DEBUG_TRACE)
printf("\n  %%114 = xor i64 %%105, %%97, !dbg !38 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1323_count);
  llvm_cbe_tmp__401 = (unsigned long long )llvm_cbe_tmp__392 ^ llvm_cbe_tmp__384;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__401);
if (AESL_DEBUG_TRACE)
printf("\n  %%115 = xor i64 %%114, %%110, !dbg !40 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1324_count);
  llvm_cbe_tmp__402 = (unsigned long long )llvm_cbe_tmp__401 ^ llvm_cbe_tmp__397;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__402);
if (AESL_DEBUG_TRACE)
printf("\n  %%116 = xor i64 %%112, %%84, !dbg !35 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1328_count);
  llvm_cbe_tmp__403 = (unsigned long long )llvm_cbe_tmp__399 ^ llvm_cbe_tmp__371;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__403);
if (AESL_DEBUG_TRACE)
printf("\n  %%117 = xor i64 %%112, %%108, !dbg !39 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1332_count);
  llvm_cbe_tmp__404 = (unsigned long long )llvm_cbe_tmp__399 ^ llvm_cbe_tmp__395;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__404);
if (AESL_DEBUG_TRACE)
printf("\n  %%118 = xor i64 %%102, -1, !dbg !37 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1335_count);
  llvm_cbe_tmp__405 = (unsigned long long )llvm_cbe_tmp__389 ^ 18446744073709551615ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__405);
if (AESL_DEBUG_TRACE)
printf("\n  %%119 = xor i64 %%95, %%118, !dbg !40 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1336_count);
  llvm_cbe_tmp__406 = (unsigned long long )llvm_cbe_tmp__382 ^ llvm_cbe_tmp__405;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__406);
if (AESL_DEBUG_TRACE)
printf("\n  %%120 = xor i64 %%119, %%110, !dbg !40 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1337_count);
  llvm_cbe_tmp__407 = (unsigned long long )llvm_cbe_tmp__406 ^ llvm_cbe_tmp__397;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__407);
if (AESL_DEBUG_TRACE)
printf("\n  %%121 = xor i64 %%105, %%118, !dbg !38 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1340_count);
  llvm_cbe_tmp__408 = (unsigned long long )llvm_cbe_tmp__392 ^ llvm_cbe_tmp__405;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__408);
if (AESL_DEBUG_TRACE)
printf("\n  %%122 = xor i64 %%121, %%101, !dbg !38 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1341_count);
  llvm_cbe_tmp__409 = (unsigned long long )llvm_cbe_tmp__408 ^ llvm_cbe_tmp__388;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__409);
if (AESL_DEBUG_TRACE)
printf("\n  %%123 = xor i64 %%116, %%103, !dbg !39 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1344_count);
  llvm_cbe_tmp__410 = (unsigned long long )llvm_cbe_tmp__403 ^ llvm_cbe_tmp__390;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__410);
if (AESL_DEBUG_TRACE)
printf("\n  %%124 = xor i64 %%85, %%88, !dbg !35 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1348_count);
  llvm_cbe_tmp__411 = (unsigned long long )llvm_cbe_tmp__372 ^ llvm_cbe_tmp__375;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__411);
if (AESL_DEBUG_TRACE)
printf("\n  %%125 = xor i64 %%124, %%116, !dbg !40 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1349_count);
  llvm_cbe_tmp__412 = (unsigned long long )llvm_cbe_tmp__411 ^ llvm_cbe_tmp__403;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__412);
if (AESL_DEBUG_TRACE)
printf("\n  %%126 = xor i64 %%93, %%94, !dbg !37 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1352_count);
  llvm_cbe_tmp__413 = (unsigned long long )llvm_cbe_tmp__380 ^ llvm_cbe_tmp__381;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__413);
if (AESL_DEBUG_TRACE)
printf("\n  %%127 = xor i64 %%126, %%115, !dbg !40 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1353_count);
  llvm_cbe_tmp__414 = (unsigned long long )llvm_cbe_tmp__413 ^ llvm_cbe_tmp__402;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__414);
if (AESL_DEBUG_TRACE)
printf("\n  %%128 = xor i64 %%113, -1, !dbg !40 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1356_count);
  llvm_cbe_tmp__415 = (unsigned long long )llvm_cbe_tmp__400 ^ 18446744073709551615ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__415);
if (AESL_DEBUG_TRACE)
printf("\n  %%129 = xor i64 %%123, %%128, !dbg !40 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1357_count);
  llvm_cbe_tmp__416 = (unsigned long long )llvm_cbe_tmp__410 ^ llvm_cbe_tmp__415;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__416);
if (AESL_DEBUG_TRACE)
printf("\n  %%130 = xor i64 %%100, -1, !dbg !38 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1360_count);
  llvm_cbe_tmp__417 = (unsigned long long )llvm_cbe_tmp__387 ^ 18446744073709551615ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__417);
if (AESL_DEBUG_TRACE)
printf("\n  %%131 = xor i64 %%99, %%130, !dbg !41 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1361_count);
  llvm_cbe_tmp__418 = (unsigned long long )llvm_cbe_tmp__386 ^ llvm_cbe_tmp__417;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__418);
if (AESL_DEBUG_TRACE)
printf("\n  %%132 = xor i64 %%131, %%113, !dbg !40 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1362_count);
  llvm_cbe_tmp__419 = (unsigned long long )llvm_cbe_tmp__418 ^ llvm_cbe_tmp__400;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__419);
if (AESL_DEBUG_TRACE)
printf("\n  %%133 = xor i64 %%132, %%115, !dbg !41 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1363_count);
  llvm_cbe_tmp__420 = (unsigned long long )llvm_cbe_tmp__419 ^ llvm_cbe_tmp__402;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__420);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%117, i64* %%1, align 8, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1366_count);
  *llvm_cbe_tmp__288 = llvm_cbe_tmp__404;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__404);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%129, i64* %%3, align 8, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1367_count);
  *llvm_cbe_tmp__290 = llvm_cbe_tmp__416;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__416);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%133, i64* %%5, align 8, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1368_count);
  *llvm_cbe_tmp__292 = llvm_cbe_tmp__420;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__420);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%123, i64* %%7, align 8, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1369_count);
  *llvm_cbe_tmp__294 = llvm_cbe_tmp__410;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__410);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%125, i64* %%9, align 8, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1370_count);
  *llvm_cbe_tmp__296 = llvm_cbe_tmp__412;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__412);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%127, i64* %%11, align 8, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1371_count);
  *llvm_cbe_tmp__298 = llvm_cbe_tmp__414;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__414);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%120, i64* %%13, align 8, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1372_count);
  *llvm_cbe_tmp__300 = llvm_cbe_tmp__407;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__407);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%122, i64* %%q, align 8, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_bitslice_Sbox  --> \n", ++aesl_llvm_cbe_1373_count);
  *llvm_cbe_q = llvm_cbe_tmp__409;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__409);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @aesl_internal_br_aes_ct64_bitslice_Sbox}\n");
  return;
}


static void aesl_internal_shift_rows(signed long long *llvm_cbe_q) {
  static  unsigned long long aesl_llvm_cbe_1375_count = 0;
  static  unsigned long long aesl_llvm_cbe_1376_count = 0;
  static  unsigned long long aesl_llvm_cbe_1377_count = 0;
  static  unsigned long long aesl_llvm_cbe_1378_count = 0;
  static  unsigned long long aesl_llvm_cbe_1379_count = 0;
  static  unsigned long long aesl_llvm_cbe_1380_count = 0;
  static  unsigned long long aesl_llvm_cbe_1381_count = 0;
  static  unsigned long long aesl_llvm_cbe_1382_count = 0;
  static  unsigned long long aesl_llvm_cbe_1383_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  unsigned int llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1384_count = 0;
  unsigned long long llvm_cbe_tmp__421;
  static  unsigned long long aesl_llvm_cbe_1385_count = 0;
  signed long long *llvm_cbe_tmp__422;
  static  unsigned long long aesl_llvm_cbe_1386_count = 0;
  unsigned long long llvm_cbe_tmp__423;
  static  unsigned long long aesl_llvm_cbe_1387_count = 0;
  static  unsigned long long aesl_llvm_cbe_1388_count = 0;
  static  unsigned long long aesl_llvm_cbe_1389_count = 0;
  static  unsigned long long aesl_llvm_cbe_1390_count = 0;
  static  unsigned long long aesl_llvm_cbe_1391_count = 0;
  static  unsigned long long aesl_llvm_cbe_1392_count = 0;
  static  unsigned long long aesl_llvm_cbe_1393_count = 0;
  static  unsigned long long aesl_llvm_cbe_1394_count = 0;
  static  unsigned long long aesl_llvm_cbe_1395_count = 0;
  unsigned long long llvm_cbe_tmp__424;
  static  unsigned long long aesl_llvm_cbe_1396_count = 0;
  unsigned long long llvm_cbe_tmp__425;
  static  unsigned long long aesl_llvm_cbe_1397_count = 0;
  unsigned long long llvm_cbe_tmp__426;
  static  unsigned long long aesl_llvm_cbe_1398_count = 0;
  unsigned long long llvm_cbe_tmp__427;
  static  unsigned long long aesl_llvm_cbe_1399_count = 0;
  unsigned long long llvm_cbe_tmp__428;
  static  unsigned long long aesl_llvm_cbe_1400_count = 0;
  unsigned long long llvm_cbe_tmp__429;
  static  unsigned long long aesl_llvm_cbe_1401_count = 0;
  unsigned long long llvm_cbe_tmp__430;
  static  unsigned long long aesl_llvm_cbe_1402_count = 0;
  unsigned long long llvm_cbe_tmp__431;
  static  unsigned long long aesl_llvm_cbe_1403_count = 0;
  unsigned long long llvm_cbe_tmp__432;
  static  unsigned long long aesl_llvm_cbe_1404_count = 0;
  unsigned long long llvm_cbe_tmp__433;
  static  unsigned long long aesl_llvm_cbe_1405_count = 0;
  unsigned long long llvm_cbe_tmp__434;
  static  unsigned long long aesl_llvm_cbe_1406_count = 0;
  unsigned long long llvm_cbe_tmp__435;
  static  unsigned long long aesl_llvm_cbe_1407_count = 0;
  unsigned long long llvm_cbe_tmp__436;
  static  unsigned long long aesl_llvm_cbe_1408_count = 0;
  unsigned long long llvm_cbe_tmp__437;
  static  unsigned long long aesl_llvm_cbe_1409_count = 0;
  unsigned long long llvm_cbe_tmp__438;
  static  unsigned long long aesl_llvm_cbe_1410_count = 0;
  unsigned long long llvm_cbe_tmp__439;
  static  unsigned long long aesl_llvm_cbe_1411_count = 0;
  unsigned long long llvm_cbe_tmp__440;
  static  unsigned long long aesl_llvm_cbe_1412_count = 0;
  unsigned long long llvm_cbe_tmp__441;
  static  unsigned long long aesl_llvm_cbe_1413_count = 0;
  unsigned long long llvm_cbe_tmp__442;
  static  unsigned long long aesl_llvm_cbe_1414_count = 0;
  static  unsigned long long aesl_llvm_cbe_1415_count = 0;
  unsigned int llvm_cbe_tmp__443;
  static  unsigned long long aesl_llvm_cbe_1416_count = 0;
  static  unsigned long long aesl_llvm_cbe_1417_count = 0;
  static  unsigned long long aesl_llvm_cbe_1418_count = 0;
  static  unsigned long long aesl_llvm_cbe_1419_count = 0;
  static  unsigned long long aesl_llvm_cbe_1420_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_1421_count = 0;
  static  unsigned long long aesl_llvm_cbe_1422_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @aesl_internal_shift_rows\n");
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__444;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__444:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i32 [ 0, %%0 ], [ %%24, %%1  for 0x%I64xth hint within @aesl_internal_shift_rows  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__443);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = sext i32 %%storemerge1 to i64, !dbg !18 for 0x%I64xth hint within @aesl_internal_shift_rows  --> \n", ++aesl_llvm_cbe_1384_count);
  llvm_cbe_tmp__421 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__421);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds i64* %%q, i64 %%2, !dbg !18 for 0x%I64xth hint within @aesl_internal_shift_rows  --> \n", ++aesl_llvm_cbe_1385_count);
  llvm_cbe_tmp__422 = (signed long long *)(&llvm_cbe_q[(((signed long long )llvm_cbe_tmp__421))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__421));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = load i64* %%3, align 8, !dbg !18 for 0x%I64xth hint within @aesl_internal_shift_rows  --> \n", ++aesl_llvm_cbe_1386_count);
  llvm_cbe_tmp__423 = (unsigned long long )*llvm_cbe_tmp__422;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__423);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = and i64 %%4, 65535, !dbg !18 for 0x%I64xth hint within @aesl_internal_shift_rows  --> \n", ++aesl_llvm_cbe_1395_count);
  llvm_cbe_tmp__424 = (unsigned long long )llvm_cbe_tmp__423 & 65535ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__424);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = lshr i64 %%4, 4, !dbg !18 for 0x%I64xth hint within @aesl_internal_shift_rows  --> \n", ++aesl_llvm_cbe_1396_count);
  llvm_cbe_tmp__425 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_tmp__423&18446744073709551615ull)) >> ((unsigned long long )(4ull&18446744073709551615ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__425&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = and i64 %%6, 268369920, !dbg !18 for 0x%I64xth hint within @aesl_internal_shift_rows  --> \n", ++aesl_llvm_cbe_1397_count);
  llvm_cbe_tmp__426 = (unsigned long long )llvm_cbe_tmp__425 & 268369920ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__426);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = shl i64 %%4, 12, !dbg !18 for 0x%I64xth hint within @aesl_internal_shift_rows  --> \n", ++aesl_llvm_cbe_1398_count);
  llvm_cbe_tmp__427 = (unsigned long long )llvm_cbe_tmp__423 << 12ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__427);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = and i64 %%8, 4026531840, !dbg !18 for 0x%I64xth hint within @aesl_internal_shift_rows  --> \n", ++aesl_llvm_cbe_1399_count);
  llvm_cbe_tmp__428 = (unsigned long long )llvm_cbe_tmp__427 & 4026531840ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__428);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = lshr i64 %%4, 8, !dbg !18 for 0x%I64xth hint within @aesl_internal_shift_rows  --> \n", ++aesl_llvm_cbe_1400_count);
  llvm_cbe_tmp__429 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_tmp__423&18446744073709551615ull)) >> ((unsigned long long )(8ull&18446744073709551615ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__429&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = and i64 %%10, 1095216660480, !dbg !18 for 0x%I64xth hint within @aesl_internal_shift_rows  --> \n", ++aesl_llvm_cbe_1401_count);
  llvm_cbe_tmp__430 = (unsigned long long )llvm_cbe_tmp__429 & 1095216660480ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__430);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = shl i64 %%4, 8, !dbg !18 for 0x%I64xth hint within @aesl_internal_shift_rows  --> \n", ++aesl_llvm_cbe_1402_count);
  llvm_cbe_tmp__431 = (unsigned long long )llvm_cbe_tmp__423 << 8ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__431);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = and i64 %%12, 280375465082880, !dbg !18 for 0x%I64xth hint within @aesl_internal_shift_rows  --> \n", ++aesl_llvm_cbe_1403_count);
  llvm_cbe_tmp__432 = (unsigned long long )llvm_cbe_tmp__431 & 280375465082880ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__432);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = lshr i64 %%4, 12, !dbg !18 for 0x%I64xth hint within @aesl_internal_shift_rows  --> \n", ++aesl_llvm_cbe_1404_count);
  llvm_cbe_tmp__433 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_tmp__423&18446744073709551615ull)) >> ((unsigned long long )(12ull&18446744073709551615ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__433&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = and i64 %%14, 4222124650659840, !dbg !18 for 0x%I64xth hint within @aesl_internal_shift_rows  --> \n", ++aesl_llvm_cbe_1405_count);
  llvm_cbe_tmp__434 = (unsigned long long )llvm_cbe_tmp__433 & 4222124650659840ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__434);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = shl i64 %%4, 4, !dbg !18 for 0x%I64xth hint within @aesl_internal_shift_rows  --> \n", ++aesl_llvm_cbe_1406_count);
  llvm_cbe_tmp__435 = (unsigned long long )llvm_cbe_tmp__423 << 4ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__435);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = and i64 %%16, -4503599627370496, !dbg !18 for 0x%I64xth hint within @aesl_internal_shift_rows  --> \n", ++aesl_llvm_cbe_1407_count);
  llvm_cbe_tmp__436 = (unsigned long long )llvm_cbe_tmp__435 & 18442240474082181120ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__436);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = or i64 %%17, %%5, !dbg !18 for 0x%I64xth hint within @aesl_internal_shift_rows  --> \n", ++aesl_llvm_cbe_1408_count);
  llvm_cbe_tmp__437 = (unsigned long long )llvm_cbe_tmp__436 | llvm_cbe_tmp__424;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__437);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = or i64 %%18, %%15, !dbg !18 for 0x%I64xth hint within @aesl_internal_shift_rows  --> \n", ++aesl_llvm_cbe_1409_count);
  llvm_cbe_tmp__438 = (unsigned long long )llvm_cbe_tmp__437 | llvm_cbe_tmp__434;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__438);
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = or i64 %%19, %%13, !dbg !18 for 0x%I64xth hint within @aesl_internal_shift_rows  --> \n", ++aesl_llvm_cbe_1410_count);
  llvm_cbe_tmp__439 = (unsigned long long )llvm_cbe_tmp__438 | llvm_cbe_tmp__432;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__439);
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = or i64 %%20, %%11, !dbg !18 for 0x%I64xth hint within @aesl_internal_shift_rows  --> \n", ++aesl_llvm_cbe_1411_count);
  llvm_cbe_tmp__440 = (unsigned long long )llvm_cbe_tmp__439 | llvm_cbe_tmp__430;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__440);
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = or i64 %%21, %%9, !dbg !18 for 0x%I64xth hint within @aesl_internal_shift_rows  --> \n", ++aesl_llvm_cbe_1412_count);
  llvm_cbe_tmp__441 = (unsigned long long )llvm_cbe_tmp__440 | llvm_cbe_tmp__428;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__441);
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = or i64 %%22, %%7, !dbg !18 for 0x%I64xth hint within @aesl_internal_shift_rows  --> \n", ++aesl_llvm_cbe_1413_count);
  llvm_cbe_tmp__442 = (unsigned long long )llvm_cbe_tmp__441 | llvm_cbe_tmp__426;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__442);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%23, i64* %%3, align 8, !dbg !18 for 0x%I64xth hint within @aesl_internal_shift_rows  --> \n", ++aesl_llvm_cbe_1414_count);
  *llvm_cbe_tmp__422 = llvm_cbe_tmp__442;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__442);
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = add nsw i32 %%storemerge1, 1, !dbg !19 for 0x%I64xth hint within @aesl_internal_shift_rows  --> \n", ++aesl_llvm_cbe_1415_count);
  llvm_cbe_tmp__443 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__443&4294967295ull)));
  if (((llvm_cbe_tmp__443&4294967295U) == (8u&4294967295U))) {
    goto llvm_cbe_tmp__445;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__443;   /* for PHI node */
    goto llvm_cbe_tmp__444;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__445:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @aesl_internal_shift_rows}\n");
  return;
}


static void aesl_internal_mix_columns(signed long long *llvm_cbe_q) {
  static  unsigned long long aesl_llvm_cbe_1423_count = 0;
  static  unsigned long long aesl_llvm_cbe_1424_count = 0;
  static  unsigned long long aesl_llvm_cbe_1425_count = 0;
  static  unsigned long long aesl_llvm_cbe_1426_count = 0;
  static  unsigned long long aesl_llvm_cbe_1427_count = 0;
  static  unsigned long long aesl_llvm_cbe_1428_count = 0;
  static  unsigned long long aesl_llvm_cbe_1429_count = 0;
  static  unsigned long long aesl_llvm_cbe_1430_count = 0;
  static  unsigned long long aesl_llvm_cbe_1431_count = 0;
  static  unsigned long long aesl_llvm_cbe_1432_count = 0;
  static  unsigned long long aesl_llvm_cbe_1433_count = 0;
  static  unsigned long long aesl_llvm_cbe_1434_count = 0;
  static  unsigned long long aesl_llvm_cbe_1435_count = 0;
  static  unsigned long long aesl_llvm_cbe_1436_count = 0;
  static  unsigned long long aesl_llvm_cbe_1437_count = 0;
  static  unsigned long long aesl_llvm_cbe_1438_count = 0;
  static  unsigned long long aesl_llvm_cbe_1439_count = 0;
  static  unsigned long long aesl_llvm_cbe_1440_count = 0;
  unsigned long long llvm_cbe_tmp__446;
  static  unsigned long long aesl_llvm_cbe_1441_count = 0;
  static  unsigned long long aesl_llvm_cbe_1442_count = 0;
  static  unsigned long long aesl_llvm_cbe_1443_count = 0;
  static  unsigned long long aesl_llvm_cbe_1444_count = 0;
  static  unsigned long long aesl_llvm_cbe_1445_count = 0;
  static  unsigned long long aesl_llvm_cbe_1446_count = 0;
  signed long long *llvm_cbe_tmp__447;
  static  unsigned long long aesl_llvm_cbe_1447_count = 0;
  unsigned long long llvm_cbe_tmp__448;
  static  unsigned long long aesl_llvm_cbe_1448_count = 0;
  static  unsigned long long aesl_llvm_cbe_1449_count = 0;
  static  unsigned long long aesl_llvm_cbe_1450_count = 0;
  static  unsigned long long aesl_llvm_cbe_1451_count = 0;
  static  unsigned long long aesl_llvm_cbe_1452_count = 0;
  static  unsigned long long aesl_llvm_cbe_1453_count = 0;
  signed long long *llvm_cbe_tmp__449;
  static  unsigned long long aesl_llvm_cbe_1454_count = 0;
  unsigned long long llvm_cbe_tmp__450;
  static  unsigned long long aesl_llvm_cbe_1455_count = 0;
  static  unsigned long long aesl_llvm_cbe_1456_count = 0;
  static  unsigned long long aesl_llvm_cbe_1457_count = 0;
  static  unsigned long long aesl_llvm_cbe_1458_count = 0;
  static  unsigned long long aesl_llvm_cbe_1459_count = 0;
  static  unsigned long long aesl_llvm_cbe_1460_count = 0;
  signed long long *llvm_cbe_tmp__451;
  static  unsigned long long aesl_llvm_cbe_1461_count = 0;
  unsigned long long llvm_cbe_tmp__452;
  static  unsigned long long aesl_llvm_cbe_1462_count = 0;
  static  unsigned long long aesl_llvm_cbe_1463_count = 0;
  static  unsigned long long aesl_llvm_cbe_1464_count = 0;
  static  unsigned long long aesl_llvm_cbe_1465_count = 0;
  static  unsigned long long aesl_llvm_cbe_1466_count = 0;
  static  unsigned long long aesl_llvm_cbe_1467_count = 0;
  signed long long *llvm_cbe_tmp__453;
  static  unsigned long long aesl_llvm_cbe_1468_count = 0;
  unsigned long long llvm_cbe_tmp__454;
  static  unsigned long long aesl_llvm_cbe_1469_count = 0;
  static  unsigned long long aesl_llvm_cbe_1470_count = 0;
  static  unsigned long long aesl_llvm_cbe_1471_count = 0;
  static  unsigned long long aesl_llvm_cbe_1472_count = 0;
  static  unsigned long long aesl_llvm_cbe_1473_count = 0;
  static  unsigned long long aesl_llvm_cbe_1474_count = 0;
  signed long long *llvm_cbe_tmp__455;
  static  unsigned long long aesl_llvm_cbe_1475_count = 0;
  unsigned long long llvm_cbe_tmp__456;
  static  unsigned long long aesl_llvm_cbe_1476_count = 0;
  static  unsigned long long aesl_llvm_cbe_1477_count = 0;
  static  unsigned long long aesl_llvm_cbe_1478_count = 0;
  static  unsigned long long aesl_llvm_cbe_1479_count = 0;
  static  unsigned long long aesl_llvm_cbe_1480_count = 0;
  static  unsigned long long aesl_llvm_cbe_1481_count = 0;
  signed long long *llvm_cbe_tmp__457;
  static  unsigned long long aesl_llvm_cbe_1482_count = 0;
  unsigned long long llvm_cbe_tmp__458;
  static  unsigned long long aesl_llvm_cbe_1483_count = 0;
  static  unsigned long long aesl_llvm_cbe_1484_count = 0;
  static  unsigned long long aesl_llvm_cbe_1485_count = 0;
  static  unsigned long long aesl_llvm_cbe_1486_count = 0;
  static  unsigned long long aesl_llvm_cbe_1487_count = 0;
  static  unsigned long long aesl_llvm_cbe_1488_count = 0;
  signed long long *llvm_cbe_tmp__459;
  static  unsigned long long aesl_llvm_cbe_1489_count = 0;
  unsigned long long llvm_cbe_tmp__460;
  static  unsigned long long aesl_llvm_cbe_1490_count = 0;
  static  unsigned long long aesl_llvm_cbe_1491_count = 0;
  static  unsigned long long aesl_llvm_cbe_1492_count = 0;
  static  unsigned long long aesl_llvm_cbe_1493_count = 0;
  static  unsigned long long aesl_llvm_cbe_1494_count = 0;
  static  unsigned long long aesl_llvm_cbe_1495_count = 0;
  static  unsigned long long aesl_llvm_cbe_1496_count = 0;
  static  unsigned long long aesl_llvm_cbe_1497_count = 0;
  static  unsigned long long aesl_llvm_cbe_1498_count = 0;
  unsigned long long llvm_cbe_tmp__461;
  static  unsigned long long aesl_llvm_cbe_1499_count = 0;
  unsigned long long llvm_cbe_tmp__462;
  static  unsigned long long aesl_llvm_cbe_1500_count = 0;
  unsigned long long llvm_cbe_tmp__463;
  static  unsigned long long aesl_llvm_cbe_1501_count = 0;
  static  unsigned long long aesl_llvm_cbe_1502_count = 0;
  static  unsigned long long aesl_llvm_cbe_1503_count = 0;
  static  unsigned long long aesl_llvm_cbe_1504_count = 0;
  static  unsigned long long aesl_llvm_cbe_1505_count = 0;
  unsigned long long llvm_cbe_tmp__464;
  static  unsigned long long aesl_llvm_cbe_1506_count = 0;
  unsigned long long llvm_cbe_tmp__465;
  static  unsigned long long aesl_llvm_cbe_1507_count = 0;
  unsigned long long llvm_cbe_tmp__466;
  static  unsigned long long aesl_llvm_cbe_1508_count = 0;
  static  unsigned long long aesl_llvm_cbe_1509_count = 0;
  static  unsigned long long aesl_llvm_cbe_1510_count = 0;
  static  unsigned long long aesl_llvm_cbe_1511_count = 0;
  static  unsigned long long aesl_llvm_cbe_1512_count = 0;
  unsigned long long llvm_cbe_tmp__467;
  static  unsigned long long aesl_llvm_cbe_1513_count = 0;
  unsigned long long llvm_cbe_tmp__468;
  static  unsigned long long aesl_llvm_cbe_1514_count = 0;
  unsigned long long llvm_cbe_tmp__469;
  static  unsigned long long aesl_llvm_cbe_1515_count = 0;
  static  unsigned long long aesl_llvm_cbe_1516_count = 0;
  static  unsigned long long aesl_llvm_cbe_1517_count = 0;
  static  unsigned long long aesl_llvm_cbe_1518_count = 0;
  static  unsigned long long aesl_llvm_cbe_1519_count = 0;
  unsigned long long llvm_cbe_tmp__470;
  static  unsigned long long aesl_llvm_cbe_1520_count = 0;
  unsigned long long llvm_cbe_tmp__471;
  static  unsigned long long aesl_llvm_cbe_1521_count = 0;
  unsigned long long llvm_cbe_tmp__472;
  static  unsigned long long aesl_llvm_cbe_1522_count = 0;
  static  unsigned long long aesl_llvm_cbe_1523_count = 0;
  static  unsigned long long aesl_llvm_cbe_1524_count = 0;
  static  unsigned long long aesl_llvm_cbe_1525_count = 0;
  static  unsigned long long aesl_llvm_cbe_1526_count = 0;
  unsigned long long llvm_cbe_tmp__473;
  static  unsigned long long aesl_llvm_cbe_1527_count = 0;
  unsigned long long llvm_cbe_tmp__474;
  static  unsigned long long aesl_llvm_cbe_1528_count = 0;
  unsigned long long llvm_cbe_tmp__475;
  static  unsigned long long aesl_llvm_cbe_1529_count = 0;
  static  unsigned long long aesl_llvm_cbe_1530_count = 0;
  static  unsigned long long aesl_llvm_cbe_1531_count = 0;
  static  unsigned long long aesl_llvm_cbe_1532_count = 0;
  static  unsigned long long aesl_llvm_cbe_1533_count = 0;
  unsigned long long llvm_cbe_tmp__476;
  static  unsigned long long aesl_llvm_cbe_1534_count = 0;
  unsigned long long llvm_cbe_tmp__477;
  static  unsigned long long aesl_llvm_cbe_1535_count = 0;
  unsigned long long llvm_cbe_tmp__478;
  static  unsigned long long aesl_llvm_cbe_1536_count = 0;
  static  unsigned long long aesl_llvm_cbe_1537_count = 0;
  static  unsigned long long aesl_llvm_cbe_1538_count = 0;
  static  unsigned long long aesl_llvm_cbe_1539_count = 0;
  static  unsigned long long aesl_llvm_cbe_1540_count = 0;
  unsigned long long llvm_cbe_tmp__479;
  static  unsigned long long aesl_llvm_cbe_1541_count = 0;
  unsigned long long llvm_cbe_tmp__480;
  static  unsigned long long aesl_llvm_cbe_1542_count = 0;
  unsigned long long llvm_cbe_tmp__481;
  static  unsigned long long aesl_llvm_cbe_1543_count = 0;
  static  unsigned long long aesl_llvm_cbe_1544_count = 0;
  static  unsigned long long aesl_llvm_cbe_1545_count = 0;
  static  unsigned long long aesl_llvm_cbe_1546_count = 0;
  static  unsigned long long aesl_llvm_cbe_1547_count = 0;
  unsigned long long llvm_cbe_tmp__482;
  static  unsigned long long aesl_llvm_cbe_1548_count = 0;
  unsigned long long llvm_cbe_tmp__483;
  static  unsigned long long aesl_llvm_cbe_1549_count = 0;
  unsigned long long llvm_cbe_tmp__484;
  static  unsigned long long aesl_llvm_cbe_1550_count = 0;
  static  unsigned long long aesl_llvm_cbe_1551_count = 0;
  static  unsigned long long aesl_llvm_cbe_1552_count = 0;
  static  unsigned long long aesl_llvm_cbe_1553_count = 0;
  static  unsigned long long aesl_llvm_cbe_1554_count = 0;
  static  unsigned long long aesl_llvm_cbe_1555_count = 0;
  static  unsigned long long aesl_llvm_cbe_1556_count = 0;
  static  unsigned long long aesl_llvm_cbe_1557_count = 0;
  unsigned long long llvm_cbe_tmp__485;
  static  unsigned long long aesl_llvm_cbe_1558_count = 0;
  unsigned long long llvm_cbe_tmp__486;
  static  unsigned long long aesl_llvm_cbe_1559_count = 0;
  unsigned long long llvm_cbe_tmp__487;
  static  unsigned long long aesl_llvm_cbe_1560_count = 0;
  unsigned long long llvm_cbe_tmp__488;
  static  unsigned long long aesl_llvm_cbe_1561_count = 0;
  unsigned long long llvm_cbe_tmp__489;
  static  unsigned long long aesl_llvm_cbe_1562_count = 0;
  static  unsigned long long aesl_llvm_cbe_1563_count = 0;
  unsigned long long llvm_cbe_tmp__490;
  static  unsigned long long aesl_llvm_cbe_1564_count = 0;
  unsigned long long llvm_cbe_tmp__491;
  static  unsigned long long aesl_llvm_cbe_1565_count = 0;
  unsigned long long llvm_cbe_tmp__492;
  static  unsigned long long aesl_llvm_cbe_1566_count = 0;
  unsigned long long llvm_cbe_tmp__493;
  static  unsigned long long aesl_llvm_cbe_1567_count = 0;
  unsigned long long llvm_cbe_tmp__494;
  static  unsigned long long aesl_llvm_cbe_1568_count = 0;
  unsigned long long llvm_cbe_tmp__495;
  static  unsigned long long aesl_llvm_cbe_1569_count = 0;
  static  unsigned long long aesl_llvm_cbe_1570_count = 0;
  unsigned long long llvm_cbe_tmp__496;
  static  unsigned long long aesl_llvm_cbe_1571_count = 0;
  unsigned long long llvm_cbe_tmp__497;
  static  unsigned long long aesl_llvm_cbe_1572_count = 0;
  unsigned long long llvm_cbe_tmp__498;
  static  unsigned long long aesl_llvm_cbe_1573_count = 0;
  unsigned long long llvm_cbe_tmp__499;
  static  unsigned long long aesl_llvm_cbe_1574_count = 0;
  static  unsigned long long aesl_llvm_cbe_1575_count = 0;
  unsigned long long llvm_cbe_tmp__500;
  static  unsigned long long aesl_llvm_cbe_1576_count = 0;
  unsigned long long llvm_cbe_tmp__501;
  static  unsigned long long aesl_llvm_cbe_1577_count = 0;
  unsigned long long llvm_cbe_tmp__502;
  static  unsigned long long aesl_llvm_cbe_1578_count = 0;
  unsigned long long llvm_cbe_tmp__503;
  static  unsigned long long aesl_llvm_cbe_1579_count = 0;
  unsigned long long llvm_cbe_tmp__504;
  static  unsigned long long aesl_llvm_cbe_1580_count = 0;
  unsigned long long llvm_cbe_tmp__505;
  static  unsigned long long aesl_llvm_cbe_1581_count = 0;
  static  unsigned long long aesl_llvm_cbe_1582_count = 0;
  unsigned long long llvm_cbe_tmp__506;
  static  unsigned long long aesl_llvm_cbe_1583_count = 0;
  unsigned long long llvm_cbe_tmp__507;
  static  unsigned long long aesl_llvm_cbe_1584_count = 0;
  unsigned long long llvm_cbe_tmp__508;
  static  unsigned long long aesl_llvm_cbe_1585_count = 0;
  unsigned long long llvm_cbe_tmp__509;
  static  unsigned long long aesl_llvm_cbe_1586_count = 0;
  unsigned long long llvm_cbe_tmp__510;
  static  unsigned long long aesl_llvm_cbe_1587_count = 0;
  unsigned long long llvm_cbe_tmp__511;
  static  unsigned long long aesl_llvm_cbe_1588_count = 0;
  static  unsigned long long aesl_llvm_cbe_1589_count = 0;
  unsigned long long llvm_cbe_tmp__512;
  static  unsigned long long aesl_llvm_cbe_1590_count = 0;
  unsigned long long llvm_cbe_tmp__513;
  static  unsigned long long aesl_llvm_cbe_1591_count = 0;
  unsigned long long llvm_cbe_tmp__514;
  static  unsigned long long aesl_llvm_cbe_1592_count = 0;
  unsigned long long llvm_cbe_tmp__515;
  static  unsigned long long aesl_llvm_cbe_1593_count = 0;
  static  unsigned long long aesl_llvm_cbe_1594_count = 0;
  unsigned long long llvm_cbe_tmp__516;
  static  unsigned long long aesl_llvm_cbe_1595_count = 0;
  unsigned long long llvm_cbe_tmp__517;
  static  unsigned long long aesl_llvm_cbe_1596_count = 0;
  unsigned long long llvm_cbe_tmp__518;
  static  unsigned long long aesl_llvm_cbe_1597_count = 0;
  unsigned long long llvm_cbe_tmp__519;
  static  unsigned long long aesl_llvm_cbe_1598_count = 0;
  static  unsigned long long aesl_llvm_cbe_1599_count = 0;
  unsigned long long llvm_cbe_tmp__520;
  static  unsigned long long aesl_llvm_cbe_1600_count = 0;
  unsigned long long llvm_cbe_tmp__521;
  static  unsigned long long aesl_llvm_cbe_1601_count = 0;
  unsigned long long llvm_cbe_tmp__522;
  static  unsigned long long aesl_llvm_cbe_1602_count = 0;
  static  unsigned long long aesl_llvm_cbe_1603_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @aesl_internal_mix_columns\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = load i64* %%q, align 8, !dbg !18 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1440_count);
  llvm_cbe_tmp__446 = (unsigned long long )*llvm_cbe_q;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__446);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds i64* %%q, i64 1, !dbg !18 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1446_count);
  llvm_cbe_tmp__447 = (signed long long *)(&llvm_cbe_q[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = load i64* %%2, align 8, !dbg !18 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1447_count);
  llvm_cbe_tmp__448 = (unsigned long long )*llvm_cbe_tmp__447;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__448);
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds i64* %%q, i64 2, !dbg !18 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1453_count);
  llvm_cbe_tmp__449 = (signed long long *)(&llvm_cbe_q[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = load i64* %%4, align 8, !dbg !18 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1454_count);
  llvm_cbe_tmp__450 = (unsigned long long )*llvm_cbe_tmp__449;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__450);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds i64* %%q, i64 3, !dbg !18 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1460_count);
  llvm_cbe_tmp__451 = (signed long long *)(&llvm_cbe_q[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = load i64* %%6, align 8, !dbg !18 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1461_count);
  llvm_cbe_tmp__452 = (unsigned long long )*llvm_cbe_tmp__451;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__452);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds i64* %%q, i64 4, !dbg !19 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1467_count);
  llvm_cbe_tmp__453 = (signed long long *)(&llvm_cbe_q[(((signed long long )4ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = load i64* %%8, align 8, !dbg !19 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1468_count);
  llvm_cbe_tmp__454 = (unsigned long long )*llvm_cbe_tmp__453;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__454);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds i64* %%q, i64 5, !dbg !19 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1474_count);
  llvm_cbe_tmp__455 = (signed long long *)(&llvm_cbe_q[(((signed long long )5ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = load i64* %%10, align 8, !dbg !19 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1475_count);
  llvm_cbe_tmp__456 = (unsigned long long )*llvm_cbe_tmp__455;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__456);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = getelementptr inbounds i64* %%q, i64 6, !dbg !19 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1481_count);
  llvm_cbe_tmp__457 = (signed long long *)(&llvm_cbe_q[(((signed long long )6ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = load i64* %%12, align 8, !dbg !19 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1482_count);
  llvm_cbe_tmp__458 = (unsigned long long )*llvm_cbe_tmp__457;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__458);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = getelementptr inbounds i64* %%q, i64 7, !dbg !19 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1488_count);
  llvm_cbe_tmp__459 = (signed long long *)(&llvm_cbe_q[(((signed long long )7ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = load i64* %%14, align 8, !dbg !19 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1489_count);
  llvm_cbe_tmp__460 = (unsigned long long )*llvm_cbe_tmp__459;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__460);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = lshr i64 %%1, 16, !dbg !20 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1498_count);
  llvm_cbe_tmp__461 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_tmp__446&18446744073709551615ull)) >> ((unsigned long long )(16ull&18446744073709551615ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__461&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = shl i64 %%1, 48, !dbg !20 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1499_count);
  llvm_cbe_tmp__462 = (unsigned long long )llvm_cbe_tmp__446 << 48ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__462);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = or i64 %%16, %%17, !dbg !20 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1500_count);
  llvm_cbe_tmp__463 = (unsigned long long )llvm_cbe_tmp__461 | llvm_cbe_tmp__462;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__463);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = lshr i64 %%3, 16, !dbg !20 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1505_count);
  llvm_cbe_tmp__464 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_tmp__448&18446744073709551615ull)) >> ((unsigned long long )(16ull&18446744073709551615ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__464&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = shl i64 %%3, 48, !dbg !20 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1506_count);
  llvm_cbe_tmp__465 = (unsigned long long )llvm_cbe_tmp__448 << 48ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__465);
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = or i64 %%19, %%20, !dbg !20 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1507_count);
  llvm_cbe_tmp__466 = (unsigned long long )llvm_cbe_tmp__464 | llvm_cbe_tmp__465;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__466);
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = lshr i64 %%5, 16, !dbg !20 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1512_count);
  llvm_cbe_tmp__467 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_tmp__450&18446744073709551615ull)) >> ((unsigned long long )(16ull&18446744073709551615ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__467&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = shl i64 %%5, 48, !dbg !20 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1513_count);
  llvm_cbe_tmp__468 = (unsigned long long )llvm_cbe_tmp__450 << 48ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__468);
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = or i64 %%22, %%23, !dbg !20 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1514_count);
  llvm_cbe_tmp__469 = (unsigned long long )llvm_cbe_tmp__467 | llvm_cbe_tmp__468;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__469);
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = lshr i64 %%7, 16, !dbg !21 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1519_count);
  llvm_cbe_tmp__470 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_tmp__452&18446744073709551615ull)) >> ((unsigned long long )(16ull&18446744073709551615ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__470&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = shl i64 %%7, 48, !dbg !21 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1520_count);
  llvm_cbe_tmp__471 = (unsigned long long )llvm_cbe_tmp__452 << 48ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__471);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = or i64 %%25, %%26, !dbg !21 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1521_count);
  llvm_cbe_tmp__472 = (unsigned long long )llvm_cbe_tmp__470 | llvm_cbe_tmp__471;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__472);
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = lshr i64 %%9, 16, !dbg !21 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1526_count);
  llvm_cbe_tmp__473 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_tmp__454&18446744073709551615ull)) >> ((unsigned long long )(16ull&18446744073709551615ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__473&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = shl i64 %%9, 48, !dbg !21 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1527_count);
  llvm_cbe_tmp__474 = (unsigned long long )llvm_cbe_tmp__454 << 48ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__474);
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = or i64 %%28, %%29, !dbg !21 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1528_count);
  llvm_cbe_tmp__475 = (unsigned long long )llvm_cbe_tmp__473 | llvm_cbe_tmp__474;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__475);
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = lshr i64 %%11, 16, !dbg !21 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1533_count);
  llvm_cbe_tmp__476 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_tmp__456&18446744073709551615ull)) >> ((unsigned long long )(16ull&18446744073709551615ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__476&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = shl i64 %%11, 48, !dbg !21 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1534_count);
  llvm_cbe_tmp__477 = (unsigned long long )llvm_cbe_tmp__456 << 48ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__477);
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = or i64 %%31, %%32, !dbg !21 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1535_count);
  llvm_cbe_tmp__478 = (unsigned long long )llvm_cbe_tmp__476 | llvm_cbe_tmp__477;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__478);
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = lshr i64 %%13, 16, !dbg !22 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1540_count);
  llvm_cbe_tmp__479 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_tmp__458&18446744073709551615ull)) >> ((unsigned long long )(16ull&18446744073709551615ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__479&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = shl i64 %%13, 48, !dbg !22 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1541_count);
  llvm_cbe_tmp__480 = (unsigned long long )llvm_cbe_tmp__458 << 48ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__480);
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = or i64 %%34, %%35, !dbg !22 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1542_count);
  llvm_cbe_tmp__481 = (unsigned long long )llvm_cbe_tmp__479 | llvm_cbe_tmp__480;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__481);
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = lshr i64 %%15, 16, !dbg !22 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1547_count);
  llvm_cbe_tmp__482 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_tmp__460&18446744073709551615ull)) >> ((unsigned long long )(16ull&18446744073709551615ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__482&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = shl i64 %%15, 48, !dbg !22 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1548_count);
  llvm_cbe_tmp__483 = (unsigned long long )llvm_cbe_tmp__460 << 48ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__483);
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = or i64 %%37, %%38, !dbg !22 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1549_count);
  llvm_cbe_tmp__484 = (unsigned long long )llvm_cbe_tmp__482 | llvm_cbe_tmp__483;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__484);
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = xor i64 %%39, %%15, !dbg !22 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1557_count);
  llvm_cbe_tmp__485 = (unsigned long long )llvm_cbe_tmp__484 ^ llvm_cbe_tmp__460;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__485);
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = xor i64 %%18, %%1, !dbg !19 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1558_count);
  llvm_cbe_tmp__486 = (unsigned long long )llvm_cbe_tmp__463 ^ llvm_cbe_tmp__446;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__486);
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = tail call fastcc i64 @aesl_internal_rotr32(i64 %%41), !dbg !19 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1559_count);
  llvm_cbe_tmp__487 = (unsigned long long ) /*tail*/ aesl_internal_rotr32(llvm_cbe_tmp__486);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__486);
printf("\nReturn  = 0x%I64X",llvm_cbe_tmp__487);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = xor i64 %%42, %%18, !dbg !22 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1560_count);
  llvm_cbe_tmp__488 = (unsigned long long )llvm_cbe_tmp__487 ^ llvm_cbe_tmp__463;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__488);
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = xor i64 %%43, %%40, !dbg !19 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1561_count);
  llvm_cbe_tmp__489 = (unsigned long long )llvm_cbe_tmp__488 ^ llvm_cbe_tmp__485;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__489);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%44, i64* %%q, align 8, !dbg !19 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1562_count);
  *llvm_cbe_q = llvm_cbe_tmp__489;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__489);
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = xor i64 %%21, %%3, !dbg !19 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1563_count);
  llvm_cbe_tmp__490 = (unsigned long long )llvm_cbe_tmp__466 ^ llvm_cbe_tmp__448;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__490);
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = tail call fastcc i64 @aesl_internal_rotr32(i64 %%45), !dbg !19 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1564_count);
  llvm_cbe_tmp__491 = (unsigned long long ) /*tail*/ aesl_internal_rotr32(llvm_cbe_tmp__490);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__490);
printf("\nReturn  = 0x%I64X",llvm_cbe_tmp__491);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = xor i64 %%41, %%21, !dbg !20 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1565_count);
  llvm_cbe_tmp__492 = (unsigned long long )llvm_cbe_tmp__486 ^ llvm_cbe_tmp__466;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__492);
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = xor i64 %%47, %%15, !dbg !20 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1566_count);
  llvm_cbe_tmp__493 = (unsigned long long )llvm_cbe_tmp__492 ^ llvm_cbe_tmp__460;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__493);
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = xor i64 %%48, %%46, !dbg !20 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1567_count);
  llvm_cbe_tmp__494 = (unsigned long long )llvm_cbe_tmp__493 ^ llvm_cbe_tmp__491;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__494);
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = xor i64 %%49, %%39, !dbg !19 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1568_count);
  llvm_cbe_tmp__495 = (unsigned long long )llvm_cbe_tmp__494 ^ llvm_cbe_tmp__484;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__495);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%50, i64* %%2, align 8, !dbg !19 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1569_count);
  *llvm_cbe_tmp__447 = llvm_cbe_tmp__495;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__495);
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = xor i64 %%24, %%5, !dbg !19 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1570_count);
  llvm_cbe_tmp__496 = (unsigned long long )llvm_cbe_tmp__469 ^ llvm_cbe_tmp__450;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__496);
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = tail call fastcc i64 @aesl_internal_rotr32(i64 %%51), !dbg !19 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1571_count);
  llvm_cbe_tmp__497 = (unsigned long long ) /*tail*/ aesl_internal_rotr32(llvm_cbe_tmp__496);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__496);
printf("\nReturn  = 0x%I64X",llvm_cbe_tmp__497);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = xor i64 %%45, %%24, !dbg !20 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1572_count);
  llvm_cbe_tmp__498 = (unsigned long long )llvm_cbe_tmp__490 ^ llvm_cbe_tmp__469;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__498);
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = xor i64 %%53, %%52, !dbg !19 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1573_count);
  llvm_cbe_tmp__499 = (unsigned long long )llvm_cbe_tmp__498 ^ llvm_cbe_tmp__497;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__499);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%54, i64* %%4, align 8, !dbg !19 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1574_count);
  *llvm_cbe_tmp__449 = llvm_cbe_tmp__499;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__499);
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = xor i64 %%27, %%7, !dbg !19 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1575_count);
  llvm_cbe_tmp__500 = (unsigned long long )llvm_cbe_tmp__472 ^ llvm_cbe_tmp__452;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__500);
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = tail call fastcc i64 @aesl_internal_rotr32(i64 %%55), !dbg !19 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1576_count);
  llvm_cbe_tmp__501 = (unsigned long long ) /*tail*/ aesl_internal_rotr32(llvm_cbe_tmp__500);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__500);
printf("\nReturn  = 0x%I64X",llvm_cbe_tmp__501);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = xor i64 %%51, %%27, !dbg !21 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1577_count);
  llvm_cbe_tmp__502 = (unsigned long long )llvm_cbe_tmp__496 ^ llvm_cbe_tmp__472;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__502);
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = xor i64 %%57, %%15, !dbg !21 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1578_count);
  llvm_cbe_tmp__503 = (unsigned long long )llvm_cbe_tmp__502 ^ llvm_cbe_tmp__460;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__503);
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = xor i64 %%58, %%39, !dbg !21 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1579_count);
  llvm_cbe_tmp__504 = (unsigned long long )llvm_cbe_tmp__503 ^ llvm_cbe_tmp__484;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__504);
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = xor i64 %%59, %%56, !dbg !19 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1580_count);
  llvm_cbe_tmp__505 = (unsigned long long )llvm_cbe_tmp__504 ^ llvm_cbe_tmp__501;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__505);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%60, i64* %%6, align 8, !dbg !19 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1581_count);
  *llvm_cbe_tmp__451 = llvm_cbe_tmp__505;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__505);
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = xor i64 %%30, %%9, !dbg !19 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1582_count);
  llvm_cbe_tmp__506 = (unsigned long long )llvm_cbe_tmp__475 ^ llvm_cbe_tmp__454;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__506);
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = tail call fastcc i64 @aesl_internal_rotr32(i64 %%61), !dbg !19 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1583_count);
  llvm_cbe_tmp__507 = (unsigned long long ) /*tail*/ aesl_internal_rotr32(llvm_cbe_tmp__506);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__506);
printf("\nReturn  = 0x%I64X",llvm_cbe_tmp__507);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = xor i64 %%55, %%30, !dbg !21 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1584_count);
  llvm_cbe_tmp__508 = (unsigned long long )llvm_cbe_tmp__500 ^ llvm_cbe_tmp__475;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__508);
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = xor i64 %%63, %%15, !dbg !21 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1585_count);
  llvm_cbe_tmp__509 = (unsigned long long )llvm_cbe_tmp__508 ^ llvm_cbe_tmp__460;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__509);
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = xor i64 %%64, %%39, !dbg !21 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1586_count);
  llvm_cbe_tmp__510 = (unsigned long long )llvm_cbe_tmp__509 ^ llvm_cbe_tmp__484;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__510);
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = xor i64 %%65, %%62, !dbg !19 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1587_count);
  llvm_cbe_tmp__511 = (unsigned long long )llvm_cbe_tmp__510 ^ llvm_cbe_tmp__507;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__511);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%66, i64* %%8, align 8, !dbg !19 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1588_count);
  *llvm_cbe_tmp__453 = llvm_cbe_tmp__511;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__511);
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = xor i64 %%33, %%11, !dbg !19 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1589_count);
  llvm_cbe_tmp__512 = (unsigned long long )llvm_cbe_tmp__478 ^ llvm_cbe_tmp__456;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__512);
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = tail call fastcc i64 @aesl_internal_rotr32(i64 %%67), !dbg !19 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1590_count);
  llvm_cbe_tmp__513 = (unsigned long long ) /*tail*/ aesl_internal_rotr32(llvm_cbe_tmp__512);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__512);
printf("\nReturn  = 0x%I64X",llvm_cbe_tmp__513);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%69 = xor i64 %%61, %%33, !dbg !21 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1591_count);
  llvm_cbe_tmp__514 = (unsigned long long )llvm_cbe_tmp__506 ^ llvm_cbe_tmp__478;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__514);
if (AESL_DEBUG_TRACE)
printf("\n  %%70 = xor i64 %%69, %%68, !dbg !19 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1592_count);
  llvm_cbe_tmp__515 = (unsigned long long )llvm_cbe_tmp__514 ^ llvm_cbe_tmp__513;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__515);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%70, i64* %%10, align 8, !dbg !19 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1593_count);
  *llvm_cbe_tmp__455 = llvm_cbe_tmp__515;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__515);
if (AESL_DEBUG_TRACE)
printf("\n  %%71 = xor i64 %%36, %%13, !dbg !20 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1594_count);
  llvm_cbe_tmp__516 = (unsigned long long )llvm_cbe_tmp__481 ^ llvm_cbe_tmp__458;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__516);
if (AESL_DEBUG_TRACE)
printf("\n  %%72 = tail call fastcc i64 @aesl_internal_rotr32(i64 %%71), !dbg !20 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1595_count);
  llvm_cbe_tmp__517 = (unsigned long long ) /*tail*/ aesl_internal_rotr32(llvm_cbe_tmp__516);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__516);
printf("\nReturn  = 0x%I64X",llvm_cbe_tmp__517);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%73 = xor i64 %%67, %%36, !dbg !21 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1596_count);
  llvm_cbe_tmp__518 = (unsigned long long )llvm_cbe_tmp__512 ^ llvm_cbe_tmp__481;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__518);
if (AESL_DEBUG_TRACE)
printf("\n  %%74 = xor i64 %%73, %%72, !dbg !20 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1597_count);
  llvm_cbe_tmp__519 = (unsigned long long )llvm_cbe_tmp__518 ^ llvm_cbe_tmp__517;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__519);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%74, i64* %%12, align 8, !dbg !20 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1598_count);
  *llvm_cbe_tmp__457 = llvm_cbe_tmp__519;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__519);
if (AESL_DEBUG_TRACE)
printf("\n  %%75 = tail call fastcc i64 @aesl_internal_rotr32(i64 %%40), !dbg !20 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1599_count);
  llvm_cbe_tmp__520 = (unsigned long long ) /*tail*/ aesl_internal_rotr32(llvm_cbe_tmp__485);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__485);
printf("\nReturn  = 0x%I64X",llvm_cbe_tmp__520);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%76 = xor i64 %%71, %%39, !dbg !22 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1600_count);
  llvm_cbe_tmp__521 = (unsigned long long )llvm_cbe_tmp__516 ^ llvm_cbe_tmp__484;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__521);
if (AESL_DEBUG_TRACE)
printf("\n  %%77 = xor i64 %%76, %%75, !dbg !20 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1601_count);
  llvm_cbe_tmp__522 = (unsigned long long )llvm_cbe_tmp__521 ^ llvm_cbe_tmp__520;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__522);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%77, i64* %%14, align 8, !dbg !20 for 0x%I64xth hint within @aesl_internal_mix_columns  --> \n", ++aesl_llvm_cbe_1602_count);
  *llvm_cbe_tmp__459 = llvm_cbe_tmp__522;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__522);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @aesl_internal_mix_columns}\n");
  return;
}


static void aesl_internal_br_aes_ct64_interleave_out(signed int *llvm_cbe_w, signed long long llvm_cbe_q0, signed long long llvm_cbe_q1) {
  static  unsigned long long aesl_llvm_cbe_1604_count = 0;
  static  unsigned long long aesl_llvm_cbe_1605_count = 0;
  static  unsigned long long aesl_llvm_cbe_1606_count = 0;
  static  unsigned long long aesl_llvm_cbe_1607_count = 0;
  static  unsigned long long aesl_llvm_cbe_1608_count = 0;
  static  unsigned long long aesl_llvm_cbe_1609_count = 0;
  static  unsigned long long aesl_llvm_cbe_1610_count = 0;
  static  unsigned long long aesl_llvm_cbe_1611_count = 0;
  static  unsigned long long aesl_llvm_cbe_1612_count = 0;
  static  unsigned long long aesl_llvm_cbe_1613_count = 0;
  static  unsigned long long aesl_llvm_cbe_1614_count = 0;
  unsigned long long llvm_cbe_tmp__523;
  static  unsigned long long aesl_llvm_cbe_1615_count = 0;
  static  unsigned long long aesl_llvm_cbe_1616_count = 0;
  static  unsigned long long aesl_llvm_cbe_1617_count = 0;
  static  unsigned long long aesl_llvm_cbe_1618_count = 0;
  static  unsigned long long aesl_llvm_cbe_1619_count = 0;
  static  unsigned long long aesl_llvm_cbe_1620_count = 0;
  static  unsigned long long aesl_llvm_cbe_1621_count = 0;
  unsigned long long llvm_cbe_tmp__524;
  static  unsigned long long aesl_llvm_cbe_1622_count = 0;
  static  unsigned long long aesl_llvm_cbe_1623_count = 0;
  static  unsigned long long aesl_llvm_cbe_1624_count = 0;
  static  unsigned long long aesl_llvm_cbe_1625_count = 0;
  static  unsigned long long aesl_llvm_cbe_1626_count = 0;
  static  unsigned long long aesl_llvm_cbe_1627_count = 0;
  static  unsigned long long aesl_llvm_cbe_1628_count = 0;
  static  unsigned long long aesl_llvm_cbe_1629_count = 0;
  unsigned long long llvm_cbe_tmp__525;
  static  unsigned long long aesl_llvm_cbe_1630_count = 0;
  unsigned long long llvm_cbe_tmp__526;
  static  unsigned long long aesl_llvm_cbe_1631_count = 0;
  static  unsigned long long aesl_llvm_cbe_1632_count = 0;
  static  unsigned long long aesl_llvm_cbe_1633_count = 0;
  static  unsigned long long aesl_llvm_cbe_1634_count = 0;
  static  unsigned long long aesl_llvm_cbe_1635_count = 0;
  static  unsigned long long aesl_llvm_cbe_1636_count = 0;
  static  unsigned long long aesl_llvm_cbe_1637_count = 0;
  unsigned long long llvm_cbe_tmp__527;
  static  unsigned long long aesl_llvm_cbe_1638_count = 0;
  unsigned long long llvm_cbe_tmp__528;
  static  unsigned long long aesl_llvm_cbe_1639_count = 0;
  static  unsigned long long aesl_llvm_cbe_1640_count = 0;
  static  unsigned long long aesl_llvm_cbe_1641_count = 0;
  static  unsigned long long aesl_llvm_cbe_1642_count = 0;
  static  unsigned long long aesl_llvm_cbe_1643_count = 0;
  static  unsigned long long aesl_llvm_cbe_1644_count = 0;
  static  unsigned long long aesl_llvm_cbe_1645_count = 0;
  unsigned long long llvm_cbe_tmp__529;
  static  unsigned long long aesl_llvm_cbe_1646_count = 0;
  unsigned long long llvm_cbe_tmp__530;
  static  unsigned long long aesl_llvm_cbe_1647_count = 0;
  static  unsigned long long aesl_llvm_cbe_1648_count = 0;
  static  unsigned long long aesl_llvm_cbe_1649_count = 0;
  static  unsigned long long aesl_llvm_cbe_1650_count = 0;
  static  unsigned long long aesl_llvm_cbe_1651_count = 0;
  static  unsigned long long aesl_llvm_cbe_1652_count = 0;
  static  unsigned long long aesl_llvm_cbe_1653_count = 0;
  unsigned long long llvm_cbe_tmp__531;
  static  unsigned long long aesl_llvm_cbe_1654_count = 0;
  unsigned long long llvm_cbe_tmp__532;
  static  unsigned long long aesl_llvm_cbe_1655_count = 0;
  static  unsigned long long aesl_llvm_cbe_1656_count = 0;
  static  unsigned long long aesl_llvm_cbe_1657_count = 0;
  static  unsigned long long aesl_llvm_cbe_1658_count = 0;
  static  unsigned long long aesl_llvm_cbe_1659_count = 0;
  static  unsigned long long aesl_llvm_cbe_1660_count = 0;
  static  unsigned long long aesl_llvm_cbe_1661_count = 0;
  unsigned long long llvm_cbe_tmp__533;
  static  unsigned long long aesl_llvm_cbe_1662_count = 0;
  unsigned long long llvm_cbe_tmp__534;
  static  unsigned long long aesl_llvm_cbe_1663_count = 0;
  static  unsigned long long aesl_llvm_cbe_1664_count = 0;
  static  unsigned long long aesl_llvm_cbe_1665_count = 0;
  static  unsigned long long aesl_llvm_cbe_1666_count = 0;
  static  unsigned long long aesl_llvm_cbe_1667_count = 0;
  static  unsigned long long aesl_llvm_cbe_1668_count = 0;
  static  unsigned long long aesl_llvm_cbe_1669_count = 0;
  unsigned long long llvm_cbe_tmp__535;
  static  unsigned long long aesl_llvm_cbe_1670_count = 0;
  unsigned long long llvm_cbe_tmp__536;
  static  unsigned long long aesl_llvm_cbe_1671_count = 0;
  static  unsigned long long aesl_llvm_cbe_1672_count = 0;
  static  unsigned long long aesl_llvm_cbe_1673_count = 0;
  static  unsigned long long aesl_llvm_cbe_1674_count = 0;
  static  unsigned long long aesl_llvm_cbe_1675_count = 0;
  static  unsigned long long aesl_llvm_cbe_1676_count = 0;
  static  unsigned long long aesl_llvm_cbe_1677_count = 0;
  unsigned long long llvm_cbe_tmp__537;
  static  unsigned long long aesl_llvm_cbe_1678_count = 0;
  static  unsigned long long aesl_llvm_cbe_1679_count = 0;
  static  unsigned long long aesl_llvm_cbe_1680_count = 0;
  static  unsigned long long aesl_llvm_cbe_1681_count = 0;
  static  unsigned long long aesl_llvm_cbe_1682_count = 0;
  static  unsigned long long aesl_llvm_cbe_1683_count = 0;
  static  unsigned long long aesl_llvm_cbe_1684_count = 0;
  unsigned long long llvm_cbe_tmp__538;
  static  unsigned long long aesl_llvm_cbe_1685_count = 0;
  static  unsigned long long aesl_llvm_cbe_1686_count = 0;
  static  unsigned long long aesl_llvm_cbe_1687_count = 0;
  static  unsigned long long aesl_llvm_cbe_1688_count = 0;
  static  unsigned long long aesl_llvm_cbe_1689_count = 0;
  static  unsigned long long aesl_llvm_cbe_1690_count = 0;
  static  unsigned long long aesl_llvm_cbe_1691_count = 0;
  unsigned long long llvm_cbe_tmp__539;
  static  unsigned long long aesl_llvm_cbe_1692_count = 0;
  static  unsigned long long aesl_llvm_cbe_1693_count = 0;
  static  unsigned long long aesl_llvm_cbe_1694_count = 0;
  static  unsigned long long aesl_llvm_cbe_1695_count = 0;
  static  unsigned long long aesl_llvm_cbe_1696_count = 0;
  static  unsigned long long aesl_llvm_cbe_1697_count = 0;
  static  unsigned long long aesl_llvm_cbe_1698_count = 0;
  unsigned long long llvm_cbe_tmp__540;
  static  unsigned long long aesl_llvm_cbe_1699_count = 0;
  static  unsigned long long aesl_llvm_cbe_1700_count = 0;
  static  unsigned long long aesl_llvm_cbe_1701_count = 0;
  static  unsigned long long aesl_llvm_cbe_1702_count = 0;
  static  unsigned long long aesl_llvm_cbe_1703_count = 0;
  static  unsigned long long aesl_llvm_cbe_1704_count = 0;
  static  unsigned long long aesl_llvm_cbe_1705_count = 0;
  unsigned int llvm_cbe_tmp__541;
  static  unsigned long long aesl_llvm_cbe_1706_count = 0;
  unsigned long long llvm_cbe_tmp__542;
  static  unsigned long long aesl_llvm_cbe_1707_count = 0;
  unsigned int llvm_cbe_tmp__543;
  static  unsigned long long aesl_llvm_cbe_1708_count = 0;
  unsigned int llvm_cbe_tmp__544;
  static  unsigned long long aesl_llvm_cbe_1709_count = 0;
  static  unsigned long long aesl_llvm_cbe_1710_count = 0;
  unsigned int llvm_cbe_tmp__545;
  static  unsigned long long aesl_llvm_cbe_1711_count = 0;
  unsigned long long llvm_cbe_tmp__546;
  static  unsigned long long aesl_llvm_cbe_1712_count = 0;
  unsigned int llvm_cbe_tmp__547;
  static  unsigned long long aesl_llvm_cbe_1713_count = 0;
  unsigned int llvm_cbe_tmp__548;
  static  unsigned long long aesl_llvm_cbe_1714_count = 0;
  signed int *llvm_cbe_tmp__549;
  static  unsigned long long aesl_llvm_cbe_1715_count = 0;
  static  unsigned long long aesl_llvm_cbe_1716_count = 0;
  unsigned int llvm_cbe_tmp__550;
  static  unsigned long long aesl_llvm_cbe_1717_count = 0;
  unsigned long long llvm_cbe_tmp__551;
  static  unsigned long long aesl_llvm_cbe_1718_count = 0;
  unsigned int llvm_cbe_tmp__552;
  static  unsigned long long aesl_llvm_cbe_1719_count = 0;
  unsigned int llvm_cbe_tmp__553;
  static  unsigned long long aesl_llvm_cbe_1720_count = 0;
  signed int *llvm_cbe_tmp__554;
  static  unsigned long long aesl_llvm_cbe_1721_count = 0;
  static  unsigned long long aesl_llvm_cbe_1722_count = 0;
  unsigned int llvm_cbe_tmp__555;
  static  unsigned long long aesl_llvm_cbe_1723_count = 0;
  unsigned long long llvm_cbe_tmp__556;
  static  unsigned long long aesl_llvm_cbe_1724_count = 0;
  unsigned int llvm_cbe_tmp__557;
  static  unsigned long long aesl_llvm_cbe_1725_count = 0;
  unsigned int llvm_cbe_tmp__558;
  static  unsigned long long aesl_llvm_cbe_1726_count = 0;
  signed int *llvm_cbe_tmp__559;
  static  unsigned long long aesl_llvm_cbe_1727_count = 0;
  static  unsigned long long aesl_llvm_cbe_1728_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @aesl_internal_br_aes_ct64_interleave_out\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = and i64 %%q0, 71777214294589695, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_out  --> \n", ++aesl_llvm_cbe_1614_count);
  llvm_cbe_tmp__523 = (unsigned long long )llvm_cbe_q0 & 71777214294589695ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__523);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = and i64 %%q1, 71777214294589695, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_out  --> \n", ++aesl_llvm_cbe_1621_count);
  llvm_cbe_tmp__524 = (unsigned long long )llvm_cbe_q1 & 71777214294589695ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__524);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = lshr i64 %%q0, 8, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_out  --> \n", ++aesl_llvm_cbe_1629_count);
  llvm_cbe_tmp__525 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_q0&18446744073709551615ull)) >> ((unsigned long long )(8ull&18446744073709551615ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__525&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = and i64 %%3, 71777214294589695, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_out  --> \n", ++aesl_llvm_cbe_1630_count);
  llvm_cbe_tmp__526 = (unsigned long long )llvm_cbe_tmp__525 & 71777214294589695ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__526);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = lshr i64 %%q1, 8, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_out  --> \n", ++aesl_llvm_cbe_1637_count);
  llvm_cbe_tmp__527 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_q1&18446744073709551615ull)) >> ((unsigned long long )(8ull&18446744073709551615ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__527&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = and i64 %%5, 71777214294589695, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_out  --> \n", ++aesl_llvm_cbe_1638_count);
  llvm_cbe_tmp__528 = (unsigned long long )llvm_cbe_tmp__527 & 71777214294589695ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__528);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = lshr i64 %%1, 8, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_out  --> \n", ++aesl_llvm_cbe_1645_count);
  llvm_cbe_tmp__529 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_tmp__523&18446744073709551615ull)) >> ((unsigned long long )(8ull&18446744073709551615ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__529&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = or i64 %%7, %%1, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_out  --> \n", ++aesl_llvm_cbe_1646_count);
  llvm_cbe_tmp__530 = (unsigned long long )llvm_cbe_tmp__529 | llvm_cbe_tmp__523;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__530);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = lshr i64 %%2, 8, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_out  --> \n", ++aesl_llvm_cbe_1653_count);
  llvm_cbe_tmp__531 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_tmp__524&18446744073709551615ull)) >> ((unsigned long long )(8ull&18446744073709551615ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__531&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = or i64 %%9, %%2, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_out  --> \n", ++aesl_llvm_cbe_1654_count);
  llvm_cbe_tmp__532 = (unsigned long long )llvm_cbe_tmp__531 | llvm_cbe_tmp__524;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__532);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = lshr i64 %%4, 8, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_out  --> \n", ++aesl_llvm_cbe_1661_count);
  llvm_cbe_tmp__533 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_tmp__526&18446744073709551615ull)) >> ((unsigned long long )(8ull&18446744073709551615ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__533&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = or i64 %%11, %%4, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_out  --> \n", ++aesl_llvm_cbe_1662_count);
  llvm_cbe_tmp__534 = (unsigned long long )llvm_cbe_tmp__533 | llvm_cbe_tmp__526;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__534);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = lshr i64 %%6, 8, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_out  --> \n", ++aesl_llvm_cbe_1669_count);
  llvm_cbe_tmp__535 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_tmp__528&18446744073709551615ull)) >> ((unsigned long long )(8ull&18446744073709551615ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__535&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = or i64 %%13, %%6, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_out  --> \n", ++aesl_llvm_cbe_1670_count);
  llvm_cbe_tmp__536 = (unsigned long long )llvm_cbe_tmp__535 | llvm_cbe_tmp__528;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__536);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = and i64 %%8, 281470681808895, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_out  --> \n", ++aesl_llvm_cbe_1677_count);
  llvm_cbe_tmp__537 = (unsigned long long )llvm_cbe_tmp__530 & 281470681808895ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__537);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = and i64 %%10, 281470681808895, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_out  --> \n", ++aesl_llvm_cbe_1684_count);
  llvm_cbe_tmp__538 = (unsigned long long )llvm_cbe_tmp__532 & 281470681808895ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__538);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = and i64 %%12, 281470681808895, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_out  --> \n", ++aesl_llvm_cbe_1691_count);
  llvm_cbe_tmp__539 = (unsigned long long )llvm_cbe_tmp__534 & 281470681808895ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__539);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = and i64 %%14, 281470681808895, !dbg !21 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_out  --> \n", ++aesl_llvm_cbe_1698_count);
  llvm_cbe_tmp__540 = (unsigned long long )llvm_cbe_tmp__536 & 281470681808895ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__540);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = trunc i64 %%15 to i32, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_out  --> \n", ++aesl_llvm_cbe_1705_count);
  llvm_cbe_tmp__541 = (unsigned int )((unsigned int )llvm_cbe_tmp__537&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__541);
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = lshr i64 %%15, 16, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_out  --> \n", ++aesl_llvm_cbe_1706_count);
  llvm_cbe_tmp__542 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_tmp__537&18446744073709551615ull)) >> ((unsigned long long )(16ull&18446744073709551615ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__542&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = trunc i64 %%20 to i32, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_out  --> \n", ++aesl_llvm_cbe_1707_count);
  llvm_cbe_tmp__543 = (unsigned int )((unsigned int )llvm_cbe_tmp__542&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__543);
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = or i32 %%21, %%19, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_out  --> \n", ++aesl_llvm_cbe_1708_count);
  llvm_cbe_tmp__544 = (unsigned int )llvm_cbe_tmp__543 | llvm_cbe_tmp__541;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__544);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%22, i32* %%w, align 4, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_out  --> \n", ++aesl_llvm_cbe_1709_count);
  *llvm_cbe_w = llvm_cbe_tmp__544;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__544);
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = trunc i64 %%16 to i32, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_out  --> \n", ++aesl_llvm_cbe_1710_count);
  llvm_cbe_tmp__545 = (unsigned int )((unsigned int )llvm_cbe_tmp__538&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__545);
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = lshr i64 %%16, 16, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_out  --> \n", ++aesl_llvm_cbe_1711_count);
  llvm_cbe_tmp__546 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_tmp__538&18446744073709551615ull)) >> ((unsigned long long )(16ull&18446744073709551615ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__546&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = trunc i64 %%24 to i32, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_out  --> \n", ++aesl_llvm_cbe_1712_count);
  llvm_cbe_tmp__547 = (unsigned int )((unsigned int )llvm_cbe_tmp__546&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__547);
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = or i32 %%25, %%23, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_out  --> \n", ++aesl_llvm_cbe_1713_count);
  llvm_cbe_tmp__548 = (unsigned int )llvm_cbe_tmp__547 | llvm_cbe_tmp__545;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__548);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = getelementptr inbounds i32* %%w, i64 1, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_out  --> \n", ++aesl_llvm_cbe_1714_count);
  llvm_cbe_tmp__549 = (signed int *)(&llvm_cbe_w[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%26, i32* %%27, align 4, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_out  --> \n", ++aesl_llvm_cbe_1715_count);
  *llvm_cbe_tmp__549 = llvm_cbe_tmp__548;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__548);
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = trunc i64 %%17 to i32, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_out  --> \n", ++aesl_llvm_cbe_1716_count);
  llvm_cbe_tmp__550 = (unsigned int )((unsigned int )llvm_cbe_tmp__539&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__550);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = lshr i64 %%17, 16, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_out  --> \n", ++aesl_llvm_cbe_1717_count);
  llvm_cbe_tmp__551 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_tmp__539&18446744073709551615ull)) >> ((unsigned long long )(16ull&18446744073709551615ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__551&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = trunc i64 %%29 to i32, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_out  --> \n", ++aesl_llvm_cbe_1718_count);
  llvm_cbe_tmp__552 = (unsigned int )((unsigned int )llvm_cbe_tmp__551&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__552);
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = or i32 %%30, %%28, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_out  --> \n", ++aesl_llvm_cbe_1719_count);
  llvm_cbe_tmp__553 = (unsigned int )llvm_cbe_tmp__552 | llvm_cbe_tmp__550;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__553);
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = getelementptr inbounds i32* %%w, i64 2, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_out  --> \n", ++aesl_llvm_cbe_1720_count);
  llvm_cbe_tmp__554 = (signed int *)(&llvm_cbe_w[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%31, i32* %%32, align 4, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_out  --> \n", ++aesl_llvm_cbe_1721_count);
  *llvm_cbe_tmp__554 = llvm_cbe_tmp__553;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__553);
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = trunc i64 %%18 to i32, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_out  --> \n", ++aesl_llvm_cbe_1722_count);
  llvm_cbe_tmp__555 = (unsigned int )((unsigned int )llvm_cbe_tmp__540&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__555);
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = lshr i64 %%18, 16, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_out  --> \n", ++aesl_llvm_cbe_1723_count);
  llvm_cbe_tmp__556 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_tmp__540&18446744073709551615ull)) >> ((unsigned long long )(16ull&18446744073709551615ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__556&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = trunc i64 %%34 to i32, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_out  --> \n", ++aesl_llvm_cbe_1724_count);
  llvm_cbe_tmp__557 = (unsigned int )((unsigned int )llvm_cbe_tmp__556&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__557);
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = or i32 %%35, %%33, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_out  --> \n", ++aesl_llvm_cbe_1725_count);
  llvm_cbe_tmp__558 = (unsigned int )llvm_cbe_tmp__557 | llvm_cbe_tmp__555;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__558);
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = getelementptr inbounds i32* %%w, i64 3, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_out  --> \n", ++aesl_llvm_cbe_1726_count);
  llvm_cbe_tmp__559 = (signed int *)(&llvm_cbe_w[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%36, i32* %%37, align 4, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_interleave_out  --> \n", ++aesl_llvm_cbe_1727_count);
  *llvm_cbe_tmp__559 = llvm_cbe_tmp__558;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__558);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @aesl_internal_br_aes_ct64_interleave_out}\n");
  return;
}


static void aesl_internal_br_range_enc32le( char *llvm_cbe_dst, signed int *llvm_cbe_v) {
  static  unsigned long long aesl_llvm_cbe_1729_count = 0;
  static  unsigned long long aesl_llvm_cbe_1730_count = 0;
  static  unsigned long long aesl_llvm_cbe_1731_count = 0;
  static  unsigned long long aesl_llvm_cbe_1732_count = 0;
  static  unsigned long long aesl_llvm_cbe_1733_count = 0;
  static  unsigned long long aesl_llvm_cbe_1734_count = 0;
  static  unsigned long long aesl_llvm_cbe_1735_count = 0;
  static  unsigned long long aesl_llvm_cbe_1736_count = 0;
  static  unsigned long long aesl_llvm_cbe_1737_count = 0;
  static  unsigned long long aesl_llvm_cbe_1738_count = 0;
  static  unsigned long long aesl_llvm_cbe_1739_count = 0;
  unsigned long long llvm_cbe_tmp__560;
  unsigned long long llvm_cbe_tmp__560__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe__2e_rec_count = 0;
  unsigned long long llvm_cbe__2e_rec;
  unsigned long long llvm_cbe__2e_rec__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe__2e_rec2_count = 0;
  unsigned long long llvm_cbe__2e_rec2;
  unsigned long long llvm_cbe__2e_rec2__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1740_count = 0;
  signed int *llvm_cbe_tmp__561;
  static  unsigned long long aesl_llvm_cbe_1741_count = 0;
   char *llvm_cbe_tmp__562;
  static  unsigned long long aesl_llvm_cbe__2e_rec3_count = 0;
  unsigned long long llvm_cbe__2e_rec3;
  static  unsigned long long aesl_llvm_cbe_1742_count = 0;
  unsigned int llvm_cbe_tmp__563;
  static  unsigned long long aesl_llvm_cbe_1743_count = 0;
  static  unsigned long long aesl_llvm_cbe__2e_rec1_count = 0;
  unsigned long long llvm_cbe__2e_rec1;
  static  unsigned long long aesl_llvm_cbe_1744_count = 0;
  unsigned long long llvm_cbe_tmp__564;
  static  unsigned long long aesl_llvm_cbe_1745_count = 0;
  static  unsigned long long aesl_llvm_cbe_1746_count = 0;
  static  unsigned long long aesl_llvm_cbe_1747_count = 0;
  static  unsigned long long aesl_llvm_cbe_1748_count = 0;
  static  unsigned long long aesl_llvm_cbe_1749_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @aesl_internal_br_range_enc32le\n");
  llvm_cbe_tmp__560__PHI_TEMPORARY = (unsigned long long )15ull;   /* for PHI node */
  llvm_cbe__2e_rec__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  llvm_cbe__2e_rec2__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  goto llvm_cbe_tmp__565;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__565:
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = phi i64 [ 15, %%0 ], [ %%6, %%1  for 0x%I64xth hint within @aesl_internal_br_range_enc32le  --> \n", ++aesl_llvm_cbe_1739_count);
  llvm_cbe_tmp__560 = (unsigned long long )llvm_cbe_tmp__560__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",llvm_cbe_tmp__560);
printf("\n = 0x%I64X",15ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__564);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%.rec = phi i64 [ 0, %%0 ], [ %%.rec1, %%1  for 0x%I64xth hint within @aesl_internal_br_range_enc32le  --> \n", ++aesl_llvm_cbe__2e_rec_count);
  llvm_cbe__2e_rec = (unsigned long long )llvm_cbe__2e_rec__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n.rec = 0x%I64X",llvm_cbe__2e_rec);
printf("\n = 0x%I64X",0ull);
printf("\n.rec1 = 0x%I64X",llvm_cbe__2e_rec1);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%.rec2 = phi i64 [ 0, %%0 ], [ %%.rec3, %%1  for 0x%I64xth hint within @aesl_internal_br_range_enc32le  --> \n", ++aesl_llvm_cbe__2e_rec2_count);
  llvm_cbe__2e_rec2 = (unsigned long long )llvm_cbe__2e_rec2__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n.rec2 = 0x%I64X",llvm_cbe__2e_rec2);
printf("\n = 0x%I64X",0ull);
printf("\n.rec3 = 0x%I64X",llvm_cbe__2e_rec3);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr i32* %%v, i64 %%.rec for 0x%I64xth hint within @aesl_internal_br_range_enc32le  --> \n", ++aesl_llvm_cbe_1740_count);
  llvm_cbe_tmp__561 = (signed int *)(&llvm_cbe_v[(((signed long long )llvm_cbe__2e_rec2))]);
if (AESL_DEBUG_TRACE) {
printf("\n.rec2 = 0x%I64X",((signed long long )llvm_cbe__2e_rec2));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr i8* %%dst, i64 %%.re for 0x%I64xth hint within @aesl_internal_br_range_enc32le  --> \n", ++aesl_llvm_cbe_1741_count);
  llvm_cbe_tmp__562 = ( char *)(&llvm_cbe_dst[(((signed long long )llvm_cbe__2e_rec))]);
if (AESL_DEBUG_TRACE) {
printf("\n.rec = 0x%I64X",((signed long long )llvm_cbe__2e_rec));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%.rec3 = add i64 %%.rec2, 1, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_range_enc32le  --> \n", ++aesl_llvm_cbe__2e_rec3_count);
  llvm_cbe__2e_rec3 = (unsigned long long )((unsigned long long )(llvm_cbe__2e_rec2&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n.rec3 = 0x%I64X\n", ((unsigned long long )(llvm_cbe__2e_rec3&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = load i32* %%3, align 4, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_range_enc32le  --> \n", ++aesl_llvm_cbe_1742_count);
  llvm_cbe_tmp__563 = (unsigned int )*llvm_cbe_tmp__561;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__563);
if (AESL_DEBUG_TRACE)
printf("\n  tail call fastcc void @aesl_internal_br_enc32le(i8* %%4, i32 %%5), !dbg !18 for 0x%I64xth hint within @aesl_internal_br_range_enc32le  --> \n", ++aesl_llvm_cbe_1743_count);
   /*tail*/ aesl_internal_br_enc32le(( char *)llvm_cbe_tmp__562, llvm_cbe_tmp__563);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__563);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%.rec1 = add i64 %%.rec, 4, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_range_enc32le  --> \n", ++aesl_llvm_cbe__2e_rec1_count);
  llvm_cbe__2e_rec1 = (unsigned long long )((unsigned long long )(llvm_cbe__2e_rec&18446744073709551615ull)) + ((unsigned long long )(4ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n.rec1 = 0x%I64X\n", ((unsigned long long )(llvm_cbe__2e_rec1&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = add i64 %%2, -1, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_range_enc32le  --> \n", ++aesl_llvm_cbe_1744_count);
  llvm_cbe_tmp__564 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__560&18446744073709551615ull)) + ((unsigned long long )(18446744073709551615ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__564&18446744073709551615ull)));
  if (((llvm_cbe_tmp__560&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe_tmp__566;
  } else {
    llvm_cbe_tmp__560__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__564;   /* for PHI node */
    llvm_cbe__2e_rec__PHI_TEMPORARY = (unsigned long long )llvm_cbe__2e_rec1;   /* for PHI node */
    llvm_cbe__2e_rec2__PHI_TEMPORARY = (unsigned long long )llvm_cbe__2e_rec3;   /* for PHI node */
    goto llvm_cbe_tmp__565;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__566:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @aesl_internal_br_range_enc32le}\n");
  return;
}


static void aesl_internal_inc4_be(signed int *llvm_cbe_x) {
  static  unsigned long long aesl_llvm_cbe_1750_count = 0;
  static  unsigned long long aesl_llvm_cbe_1751_count = 0;
  static  unsigned long long aesl_llvm_cbe_1752_count = 0;
  static  unsigned long long aesl_llvm_cbe_1753_count = 0;
  static  unsigned long long aesl_llvm_cbe_1754_count = 0;
  static  unsigned long long aesl_llvm_cbe_1755_count = 0;
  unsigned int llvm_cbe_tmp__567;
  static  unsigned long long aesl_llvm_cbe_1756_count = 0;
  unsigned int llvm_cbe_tmp__568;
  static  unsigned long long aesl_llvm_cbe_1757_count = 0;
  unsigned int llvm_cbe_tmp__569;
  static  unsigned long long aesl_llvm_cbe_1758_count = 0;
  unsigned int llvm_cbe_tmp__570;
  static  unsigned long long aesl_llvm_cbe_1759_count = 0;
  static  unsigned long long aesl_llvm_cbe_1760_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @aesl_internal_inc4_be\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = load i32* %%x, align 4, !dbg !18 for 0x%I64xth hint within @aesl_internal_inc4_be  --> \n", ++aesl_llvm_cbe_1755_count);
  llvm_cbe_tmp__567 = (unsigned int )*llvm_cbe_x;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__567);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = tail call fastcc i32 @aesl_internal_br_swap32(i32 %%1), !dbg !18 for 0x%I64xth hint within @aesl_internal_inc4_be  --> \n", ++aesl_llvm_cbe_1756_count);
  llvm_cbe_tmp__568 = (unsigned int ) /*tail*/ aesl_internal_br_swap32(llvm_cbe_tmp__567);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__567);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__568);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = add i32 %%2, 4, !dbg !18 for 0x%I64xth hint within @aesl_internal_inc4_be  --> \n", ++aesl_llvm_cbe_1757_count);
  llvm_cbe_tmp__569 = (unsigned int )((unsigned int )(llvm_cbe_tmp__568&4294967295ull)) + ((unsigned int )(4u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__569&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = tail call fastcc i32 @aesl_internal_br_swap32(i32 %%3), !dbg !18 for 0x%I64xth hint within @aesl_internal_inc4_be  --> \n", ++aesl_llvm_cbe_1758_count);
  llvm_cbe_tmp__570 = (unsigned int ) /*tail*/ aesl_internal_br_swap32(llvm_cbe_tmp__569);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__569);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__570);
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%4, i32* %%x, align 4, !dbg !18 for 0x%I64xth hint within @aesl_internal_inc4_be  --> \n", ++aesl_llvm_cbe_1759_count);
  *llvm_cbe_x = llvm_cbe_tmp__570;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__570);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @aesl_internal_inc4_be}\n");
  return;
}


static void aesl_internal_br_enc32le( char *llvm_cbe_dst, signed int llvm_cbe_x) {
  static  unsigned long long aesl_llvm_cbe_1761_count = 0;
  static  unsigned long long aesl_llvm_cbe_1762_count = 0;
  static  unsigned long long aesl_llvm_cbe_1763_count = 0;
  static  unsigned long long aesl_llvm_cbe_1764_count = 0;
  static  unsigned long long aesl_llvm_cbe_1765_count = 0;
  static  unsigned long long aesl_llvm_cbe_1766_count = 0;
  static  unsigned long long aesl_llvm_cbe_1767_count = 0;
  static  unsigned long long aesl_llvm_cbe_1768_count = 0;
  static  unsigned long long aesl_llvm_cbe_1769_count = 0;
  static  unsigned long long aesl_llvm_cbe_1770_count = 0;
  static  unsigned long long aesl_llvm_cbe_1771_count = 0;
  unsigned char llvm_cbe_tmp__571;
  static  unsigned long long aesl_llvm_cbe_1772_count = 0;
  static  unsigned long long aesl_llvm_cbe_1773_count = 0;
  unsigned int llvm_cbe_tmp__572;
  static  unsigned long long aesl_llvm_cbe_1774_count = 0;
  unsigned char llvm_cbe_tmp__573;
  static  unsigned long long aesl_llvm_cbe_1775_count = 0;
   char *llvm_cbe_tmp__574;
  static  unsigned long long aesl_llvm_cbe_1776_count = 0;
  static  unsigned long long aesl_llvm_cbe_1777_count = 0;
  unsigned int llvm_cbe_tmp__575;
  static  unsigned long long aesl_llvm_cbe_1778_count = 0;
  unsigned char llvm_cbe_tmp__576;
  static  unsigned long long aesl_llvm_cbe_1779_count = 0;
   char *llvm_cbe_tmp__577;
  static  unsigned long long aesl_llvm_cbe_1780_count = 0;
  static  unsigned long long aesl_llvm_cbe_1781_count = 0;
  unsigned int llvm_cbe_tmp__578;
  static  unsigned long long aesl_llvm_cbe_1782_count = 0;
  unsigned char llvm_cbe_tmp__579;
  static  unsigned long long aesl_llvm_cbe_1783_count = 0;
   char *llvm_cbe_tmp__580;
  static  unsigned long long aesl_llvm_cbe_1784_count = 0;
  static  unsigned long long aesl_llvm_cbe_1785_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @aesl_internal_br_enc32le\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = trunc i32 %%x to i8, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_enc32le  --> \n", ++aesl_llvm_cbe_1771_count);
  llvm_cbe_tmp__571 = (unsigned char )((unsigned char )llvm_cbe_x&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__571);
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%1, i8* %%dst, align 1, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_enc32le  --> \n", ++aesl_llvm_cbe_1772_count);
  *llvm_cbe_dst = llvm_cbe_tmp__571;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__571);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = lshr i32 %%x, 8, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_enc32le  --> \n", ++aesl_llvm_cbe_1773_count);
  llvm_cbe_tmp__572 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_x&4294967295ull)) >> ((unsigned int )(8u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__572&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = trunc i32 %%2 to i8, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_enc32le  --> \n", ++aesl_llvm_cbe_1774_count);
  llvm_cbe_tmp__573 = (unsigned char )((unsigned char )llvm_cbe_tmp__572&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__573);
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds i8* %%dst, i64 1, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_enc32le  --> \n", ++aesl_llvm_cbe_1775_count);
  llvm_cbe_tmp__574 = ( char *)(&llvm_cbe_dst[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%3, i8* %%4, align 1, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_enc32le  --> \n", ++aesl_llvm_cbe_1776_count);
  *llvm_cbe_tmp__574 = llvm_cbe_tmp__573;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__573);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = lshr i32 %%x, 16, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_enc32le  --> \n", ++aesl_llvm_cbe_1777_count);
  llvm_cbe_tmp__575 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_x&4294967295ull)) >> ((unsigned int )(16u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__575&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = trunc i32 %%5 to i8, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_enc32le  --> \n", ++aesl_llvm_cbe_1778_count);
  llvm_cbe_tmp__576 = (unsigned char )((unsigned char )llvm_cbe_tmp__575&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__576);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds i8* %%dst, i64 2, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_enc32le  --> \n", ++aesl_llvm_cbe_1779_count);
  llvm_cbe_tmp__577 = ( char *)(&llvm_cbe_dst[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%6, i8* %%7, align 1, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_enc32le  --> \n", ++aesl_llvm_cbe_1780_count);
  *llvm_cbe_tmp__577 = llvm_cbe_tmp__576;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__576);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = lshr i32 %%x, 24, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_enc32le  --> \n", ++aesl_llvm_cbe_1781_count);
  llvm_cbe_tmp__578 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_x&4294967295ull)) >> ((unsigned int )(24u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__578&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = trunc i32 %%8 to i8, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_enc32le  --> \n", ++aesl_llvm_cbe_1782_count);
  llvm_cbe_tmp__579 = (unsigned char )((unsigned char )llvm_cbe_tmp__578&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__579);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds i8* %%dst, i64 3, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_enc32le  --> \n", ++aesl_llvm_cbe_1783_count);
  llvm_cbe_tmp__580 = ( char *)(&llvm_cbe_dst[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%9, i8* %%10, align 1, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_enc32le  --> \n", ++aesl_llvm_cbe_1784_count);
  *llvm_cbe_tmp__580 = llvm_cbe_tmp__579;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__579);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @aesl_internal_br_enc32le}\n");
  return;
}


static signed long long aesl_internal_rotr32(signed long long llvm_cbe_x) {
  static  unsigned long long aesl_llvm_cbe_1786_count = 0;
  static  unsigned long long aesl_llvm_cbe_1787_count = 0;
  static  unsigned long long aesl_llvm_cbe_1788_count = 0;
  unsigned long long llvm_cbe_tmp__581;
  static  unsigned long long aesl_llvm_cbe_1789_count = 0;
  static  unsigned long long aesl_llvm_cbe_1790_count = 0;
  unsigned long long llvm_cbe_tmp__582;
  static  unsigned long long aesl_llvm_cbe_1791_count = 0;
  unsigned long long llvm_cbe_tmp__583;
  static  unsigned long long aesl_llvm_cbe_1792_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @aesl_internal_rotr32\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = shl i64 %%x, 32, !dbg !18 for 0x%I64xth hint within @aesl_internal_rotr32  --> \n", ++aesl_llvm_cbe_1788_count);
  llvm_cbe_tmp__581 = (unsigned long long )llvm_cbe_x << 32ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__581);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = lshr i64 %%x, 32, !dbg !18 for 0x%I64xth hint within @aesl_internal_rotr32  --> \n", ++aesl_llvm_cbe_1790_count);
  llvm_cbe_tmp__582 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_x&18446744073709551615ull)) >> ((unsigned long long )(32ull&18446744073709551615ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__582&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = or i64 %%1, %%2, !dbg !18 for 0x%I64xth hint within @aesl_internal_rotr32  --> \n", ++aesl_llvm_cbe_1791_count);
  llvm_cbe_tmp__583 = (unsigned long long )llvm_cbe_tmp__581 | llvm_cbe_tmp__582;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__583);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @aesl_internal_rotr32}\n");
  return llvm_cbe_tmp__583;
}


static signed int aesl_internal_br_dec32le( char *llvm_cbe_src) {
  static  unsigned long long aesl_llvm_cbe_1793_count = 0;
  static  unsigned long long aesl_llvm_cbe_1794_count = 0;
  static  unsigned long long aesl_llvm_cbe_1795_count = 0;
  static  unsigned long long aesl_llvm_cbe_1796_count = 0;
  static  unsigned long long aesl_llvm_cbe_1797_count = 0;
  static  unsigned long long aesl_llvm_cbe_1798_count = 0;
  unsigned char llvm_cbe_tmp__584;
  static  unsigned long long aesl_llvm_cbe_1799_count = 0;
  unsigned int llvm_cbe_tmp__585;
  static  unsigned long long aesl_llvm_cbe_1800_count = 0;
   char *llvm_cbe_tmp__586;
  static  unsigned long long aesl_llvm_cbe_1801_count = 0;
  unsigned char llvm_cbe_tmp__587;
  static  unsigned long long aesl_llvm_cbe_1802_count = 0;
  unsigned int llvm_cbe_tmp__588;
  static  unsigned long long aesl_llvm_cbe_1803_count = 0;
  unsigned int llvm_cbe_tmp__589;
  static  unsigned long long aesl_llvm_cbe_1804_count = 0;
   char *llvm_cbe_tmp__590;
  static  unsigned long long aesl_llvm_cbe_1805_count = 0;
  unsigned char llvm_cbe_tmp__591;
  static  unsigned long long aesl_llvm_cbe_1806_count = 0;
  unsigned int llvm_cbe_tmp__592;
  static  unsigned long long aesl_llvm_cbe_1807_count = 0;
  unsigned int llvm_cbe_tmp__593;
  static  unsigned long long aesl_llvm_cbe_1808_count = 0;
   char *llvm_cbe_tmp__594;
  static  unsigned long long aesl_llvm_cbe_1809_count = 0;
  unsigned char llvm_cbe_tmp__595;
  static  unsigned long long aesl_llvm_cbe_1810_count = 0;
  unsigned int llvm_cbe_tmp__596;
  static  unsigned long long aesl_llvm_cbe_1811_count = 0;
  unsigned int llvm_cbe_tmp__597;
  static  unsigned long long aesl_llvm_cbe_1812_count = 0;
  unsigned int llvm_cbe_tmp__598;
  static  unsigned long long aesl_llvm_cbe_1813_count = 0;
  unsigned int llvm_cbe_tmp__599;
  static  unsigned long long aesl_llvm_cbe_1814_count = 0;
  unsigned int llvm_cbe_tmp__600;
  static  unsigned long long aesl_llvm_cbe_1815_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @aesl_internal_br_dec32le\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = load i8* %%src, align 1, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_dec32le  --> \n", ++aesl_llvm_cbe_1798_count);
  llvm_cbe_tmp__584 = (unsigned char )*llvm_cbe_src;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__584);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = zext i8 %%1 to i32, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_dec32le  --> \n", ++aesl_llvm_cbe_1799_count);
  llvm_cbe_tmp__585 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__584&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__585);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds i8* %%src, i64 1, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_dec32le  --> \n", ++aesl_llvm_cbe_1800_count);
  llvm_cbe_tmp__586 = ( char *)(&llvm_cbe_src[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = load i8* %%3, align 1, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_dec32le  --> \n", ++aesl_llvm_cbe_1801_count);
  llvm_cbe_tmp__587 = (unsigned char )*llvm_cbe_tmp__586;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__587);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = zext i8 %%4 to i32, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_dec32le  --> \n", ++aesl_llvm_cbe_1802_count);
  llvm_cbe_tmp__588 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__587&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__588);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = shl nuw nsw i32 %%5, 8, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_dec32le  --> \n", ++aesl_llvm_cbe_1803_count);
  llvm_cbe_tmp__589 = (unsigned int )llvm_cbe_tmp__588 << 8u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__589);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds i8* %%src, i64 2, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_dec32le  --> \n", ++aesl_llvm_cbe_1804_count);
  llvm_cbe_tmp__590 = ( char *)(&llvm_cbe_src[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = load i8* %%7, align 1, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_dec32le  --> \n", ++aesl_llvm_cbe_1805_count);
  llvm_cbe_tmp__591 = (unsigned char )*llvm_cbe_tmp__590;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__591);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = zext i8 %%8 to i32, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_dec32le  --> \n", ++aesl_llvm_cbe_1806_count);
  llvm_cbe_tmp__592 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__591&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__592);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = shl nuw nsw i32 %%9, 16, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_dec32le  --> \n", ++aesl_llvm_cbe_1807_count);
  llvm_cbe_tmp__593 = (unsigned int )llvm_cbe_tmp__592 << 16u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__593);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds i8* %%src, i64 3, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_dec32le  --> \n", ++aesl_llvm_cbe_1808_count);
  llvm_cbe_tmp__594 = ( char *)(&llvm_cbe_src[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = load i8* %%11, align 1, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_dec32le  --> \n", ++aesl_llvm_cbe_1809_count);
  llvm_cbe_tmp__595 = (unsigned char )*llvm_cbe_tmp__594;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__595);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = zext i8 %%12 to i32, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_dec32le  --> \n", ++aesl_llvm_cbe_1810_count);
  llvm_cbe_tmp__596 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__595&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__596);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = shl nuw i32 %%13, 24, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_dec32le  --> \n", ++aesl_llvm_cbe_1811_count);
  llvm_cbe_tmp__597 = (unsigned int )llvm_cbe_tmp__596 << 24u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__597);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = or i32 %%6, %%2, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_dec32le  --> \n", ++aesl_llvm_cbe_1812_count);
  llvm_cbe_tmp__598 = (unsigned int )llvm_cbe_tmp__589 | llvm_cbe_tmp__585;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__598);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = or i32 %%15, %%10, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_dec32le  --> \n", ++aesl_llvm_cbe_1813_count);
  llvm_cbe_tmp__599 = (unsigned int )llvm_cbe_tmp__598 | llvm_cbe_tmp__593;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__599);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = or i32 %%16, %%14, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_dec32le  --> \n", ++aesl_llvm_cbe_1814_count);
  llvm_cbe_tmp__600 = (unsigned int )llvm_cbe_tmp__599 | llvm_cbe_tmp__597;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__600);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @aesl_internal_br_dec32le}\n");
  return llvm_cbe_tmp__600;
}


static void aesl_internal_br_aes_ct64_keysched(signed long long *llvm_cbe_comp_skey,  char *llvm_cbe_key) {
  static  unsigned long long aesl_llvm_cbe_skey_count = 0;
  signed int llvm_cbe_skey[60];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_q_count = 0;
  signed long long llvm_cbe_q[8];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_1816_count = 0;
  static  unsigned long long aesl_llvm_cbe_1817_count = 0;
  static  unsigned long long aesl_llvm_cbe_1818_count = 0;
  static  unsigned long long aesl_llvm_cbe_1819_count = 0;
  static  unsigned long long aesl_llvm_cbe_1820_count = 0;
  static  unsigned long long aesl_llvm_cbe_1821_count = 0;
  static  unsigned long long aesl_llvm_cbe_1822_count = 0;
  static  unsigned long long aesl_llvm_cbe_1823_count = 0;
  static  unsigned long long aesl_llvm_cbe_1824_count = 0;
  static  unsigned long long aesl_llvm_cbe_1825_count = 0;
  static  unsigned long long aesl_llvm_cbe_1826_count = 0;
  static  unsigned long long aesl_llvm_cbe_1827_count = 0;
  static  unsigned long long aesl_llvm_cbe_1828_count = 0;
  static  unsigned long long aesl_llvm_cbe_1829_count = 0;
  static  unsigned long long aesl_llvm_cbe_1830_count = 0;
  static  unsigned long long aesl_llvm_cbe_1831_count = 0;
  static  unsigned long long aesl_llvm_cbe_1832_count = 0;
  static  unsigned long long aesl_llvm_cbe_1833_count = 0;
  signed int *llvm_cbe_tmp__601;
  static  unsigned long long aesl_llvm_cbe_1834_count = 0;
  static  unsigned long long aesl_llvm_cbe_1835_count = 0;
  static  unsigned long long aesl_llvm_cbe_1836_count = 0;
  signed int *llvm_cbe_tmp__602;
  static  unsigned long long aesl_llvm_cbe_1837_count = 0;
  unsigned int llvm_cbe_tmp__603;
  static  unsigned long long aesl_llvm_cbe_1838_count = 0;
  static  unsigned long long aesl_llvm_cbe_1839_count = 0;
  static  unsigned long long aesl_llvm_cbe_1840_count = 0;
  static  unsigned long long aesl_llvm_cbe_1841_count = 0;
  static  unsigned long long aesl_llvm_cbe_1842_count = 0;
  static  unsigned long long aesl_llvm_cbe_1843_count = 0;
  static  unsigned long long aesl_llvm_cbe_1844_count = 0;
  static  unsigned long long aesl_llvm_cbe_1845_count = 0;
  static  unsigned long long aesl_llvm_cbe_1846_count = 0;
  static  unsigned long long aesl_llvm_cbe_1847_count = 0;
  static  unsigned long long aesl_llvm_cbe_1848_count = 0;
  static  unsigned long long aesl_llvm_cbe_1849_count = 0;
  static  unsigned long long aesl_llvm_cbe_1850_count = 0;
  static  unsigned long long aesl_llvm_cbe_1851_count = 0;
  static  unsigned long long aesl_llvm_cbe_1852_count = 0;
  static  unsigned long long aesl_llvm_cbe_1853_count = 0;
  static  unsigned long long aesl_llvm_cbe_1854_count = 0;
  static  unsigned long long aesl_llvm_cbe_1855_count = 0;
  static  unsigned long long aesl_llvm_cbe_1856_count = 0;
  static  unsigned long long aesl_llvm_cbe_1857_count = 0;
  static  unsigned long long aesl_llvm_cbe_1858_count = 0;
  static  unsigned long long aesl_llvm_cbe_1859_count = 0;
  static  unsigned long long aesl_llvm_cbe_1860_count = 0;
  static  unsigned long long aesl_llvm_cbe_1861_count = 0;
  static  unsigned long long aesl_llvm_cbe_1862_count = 0;
  static  unsigned long long aesl_llvm_cbe_1863_count = 0;
  static  unsigned long long aesl_llvm_cbe_1864_count = 0;
  static  unsigned long long aesl_llvm_cbe_1865_count = 0;
  static  unsigned long long aesl_llvm_cbe_1866_count = 0;
  static  unsigned long long aesl_llvm_cbe_1867_count = 0;
  static  unsigned long long aesl_llvm_cbe_1868_count = 0;
  static  unsigned long long aesl_llvm_cbe_1869_count = 0;
  static  unsigned long long aesl_llvm_cbe_1870_count = 0;
  signed long long *llvm_cbe_tmp__604;
  static  unsigned long long aesl_llvm_cbe_1871_count = 0;
  signed long long *llvm_cbe_tmp__605;
  static  unsigned long long aesl_llvm_cbe_1872_count = 0;
  signed long long *llvm_cbe_tmp__606;
  static  unsigned long long aesl_llvm_cbe_1873_count = 0;
  signed long long *llvm_cbe_tmp__607;
  static  unsigned long long aesl_llvm_cbe_1874_count = 0;
  signed long long *llvm_cbe_tmp__608;
  static  unsigned long long aesl_llvm_cbe_1875_count = 0;
  signed long long *llvm_cbe_tmp__609;
  static  unsigned long long aesl_llvm_cbe_1876_count = 0;
  signed long long *llvm_cbe_tmp__610;
  static  unsigned long long aesl_llvm_cbe_1877_count = 0;
  signed long long *llvm_cbe_tmp__611;
  static  unsigned long long aesl_llvm_cbe_1878_count = 0;
  static  unsigned long long aesl_llvm_cbe_1879_count = 0;
  unsigned int llvm_cbe_tmp__612;
  unsigned int llvm_cbe_tmp__612__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_storemerge15_count = 0;
  unsigned int llvm_cbe_storemerge15;
  unsigned int llvm_cbe_storemerge15__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1880_count = 0;
  unsigned int llvm_cbe_tmp__613;
  unsigned int llvm_cbe_tmp__613__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1881_count = 0;
  unsigned int llvm_cbe_tmp__614;
  unsigned int llvm_cbe_tmp__614__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1882_count = 0;
  static  unsigned long long aesl_llvm_cbe_1883_count = 0;
  static  unsigned long long aesl_llvm_cbe_1884_count = 0;
  unsigned int llvm_cbe_tmp__615;
  static  unsigned long long aesl_llvm_cbe_1885_count = 0;
  unsigned int llvm_cbe_tmp__616;
  static  unsigned long long aesl_llvm_cbe_1886_count = 0;
  unsigned int llvm_cbe_tmp__617;
  static  unsigned long long aesl_llvm_cbe_1887_count = 0;
  static  unsigned long long aesl_llvm_cbe_1888_count = 0;
  static  unsigned long long aesl_llvm_cbe_1889_count = 0;
  static  unsigned long long aesl_llvm_cbe_1890_count = 0;
  static  unsigned long long aesl_llvm_cbe_1891_count = 0;
  static  unsigned long long aesl_llvm_cbe_1892_count = 0;
  static  unsigned long long aesl_llvm_cbe_1893_count = 0;
  static  unsigned long long aesl_llvm_cbe_1894_count = 0;
  unsigned int llvm_cbe_tmp__618;
  static  unsigned long long aesl_llvm_cbe_1895_count = 0;
  unsigned long long llvm_cbe_tmp__619;
  static  unsigned long long aesl_llvm_cbe_1896_count = 0;
   char *llvm_cbe_tmp__620;
  static  unsigned long long aesl_llvm_cbe_1897_count = 0;
  unsigned char llvm_cbe_tmp__621;
  static  unsigned long long aesl_llvm_cbe_1898_count = 0;
  unsigned int llvm_cbe_tmp__622;
  static  unsigned long long aesl_llvm_cbe_1899_count = 0;
  unsigned int llvm_cbe_tmp__623;
  static  unsigned long long aesl_llvm_cbe_1900_count = 0;
  static  unsigned long long aesl_llvm_cbe_1901_count = 0;
  static  unsigned long long aesl_llvm_cbe_1902_count = 0;
  static  unsigned long long aesl_llvm_cbe_1903_count = 0;
  static  unsigned long long aesl_llvm_cbe_1904_count = 0;
  static  unsigned long long aesl_llvm_cbe_1905_count = 0;
  static  unsigned long long aesl_llvm_cbe_1906_count = 0;
  static  unsigned long long aesl_llvm_cbe_1907_count = 0;
  static  unsigned long long aesl_llvm_cbe_1908_count = 0;
  static  unsigned long long aesl_llvm_cbe_1909_count = 0;
  static  unsigned long long aesl_llvm_cbe_1910_count = 0;
  unsigned int llvm_cbe_tmp__624;
  static  unsigned long long aesl_llvm_cbe_1911_count = 0;
  static  unsigned long long aesl_llvm_cbe_1912_count = 0;
  static  unsigned long long aesl_llvm_cbe_1913_count = 0;
  static  unsigned long long aesl_llvm_cbe_1914_count = 0;
  static  unsigned long long aesl_llvm_cbe_1915_count = 0;
  static  unsigned long long aesl_llvm_cbe_1916_count = 0;
  static  unsigned long long aesl_llvm_cbe_1917_count = 0;
  static  unsigned long long aesl_llvm_cbe_1918_count = 0;
  static  unsigned long long aesl_llvm_cbe_1919_count = 0;
  unsigned int llvm_cbe_tmp__625;
  unsigned int llvm_cbe_tmp__625__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1920_count = 0;
  unsigned int llvm_cbe_tmp__626;
  static  unsigned long long aesl_llvm_cbe_1921_count = 0;
  unsigned long long llvm_cbe_tmp__627;
  static  unsigned long long aesl_llvm_cbe_1922_count = 0;
  signed int *llvm_cbe_tmp__628;
  static  unsigned long long aesl_llvm_cbe_1923_count = 0;
  unsigned int llvm_cbe_tmp__629;
  static  unsigned long long aesl_llvm_cbe_1924_count = 0;
  unsigned int llvm_cbe_tmp__630;
  static  unsigned long long aesl_llvm_cbe_1925_count = 0;
  static  unsigned long long aesl_llvm_cbe_1926_count = 0;
  static  unsigned long long aesl_llvm_cbe_1927_count = 0;
  static  unsigned long long aesl_llvm_cbe_1928_count = 0;
  static  unsigned long long aesl_llvm_cbe_1929_count = 0;
  static  unsigned long long aesl_llvm_cbe_1930_count = 0;
  static  unsigned long long aesl_llvm_cbe_1931_count = 0;
  static  unsigned long long aesl_llvm_cbe_1932_count = 0;
  unsigned long long llvm_cbe_tmp__631;
  static  unsigned long long aesl_llvm_cbe_1933_count = 0;
  signed int *llvm_cbe_tmp__632;
  static  unsigned long long aesl_llvm_cbe_1934_count = 0;
  static  unsigned long long aesl_llvm_cbe_1935_count = 0;
  unsigned int llvm_cbe_tmp__633;
  static  unsigned long long aesl_llvm_cbe_1936_count = 0;
  static  unsigned long long aesl_llvm_cbe_1937_count = 0;
  static  unsigned long long aesl_llvm_cbe_1938_count = 0;
  static  unsigned long long aesl_llvm_cbe_1939_count = 0;
  static  unsigned long long aesl_llvm_cbe_1940_count = 0;
  static  unsigned long long aesl_llvm_cbe_1941_count = 0;
  static  unsigned long long aesl_llvm_cbe_1942_count = 0;
  static  unsigned long long aesl_llvm_cbe_1943_count = 0;
  static  unsigned long long aesl_llvm_cbe_1944_count = 0;
  unsigned int llvm_cbe_tmp__634;
  static  unsigned long long aesl_llvm_cbe_1945_count = 0;
  static  unsigned long long aesl_llvm_cbe_1946_count = 0;
  static  unsigned long long aesl_llvm_cbe_1947_count = 0;
  static  unsigned long long aesl_llvm_cbe__2e__count = 0;
  unsigned int llvm_cbe__2e_;
  static  unsigned long long aesl_llvm_cbe__2e_3_count = 0;
  unsigned int llvm_cbe__2e_3;
  static  unsigned long long aesl_llvm_cbe_1948_count = 0;
  unsigned int llvm_cbe_tmp__635;
  static  unsigned long long aesl_llvm_cbe_1949_count = 0;
  static  unsigned long long aesl_llvm_cbe_1950_count = 0;
  static  unsigned long long aesl_llvm_cbe_1951_count = 0;
  static  unsigned long long aesl_llvm_cbe_1952_count = 0;
  static  unsigned long long aesl_llvm_cbe_1953_count = 0;
  static  unsigned long long aesl_llvm_cbe_1954_count = 0;
  static  unsigned long long aesl_llvm_cbe_1955_count = 0;
  static  unsigned long long aesl_llvm_cbe_1956_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_1957_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge4_count = 0;
  unsigned int llvm_cbe_storemerge4;
  unsigned int llvm_cbe_storemerge4__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1958_count = 0;
  unsigned int llvm_cbe_tmp__636;
  unsigned int llvm_cbe_tmp__636__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1959_count = 0;
  static  unsigned long long aesl_llvm_cbe_1960_count = 0;
  unsigned long long llvm_cbe_tmp__637;
  static  unsigned long long aesl_llvm_cbe_1961_count = 0;
  signed int *llvm_cbe_tmp__638;
  static  unsigned long long aesl_llvm_cbe_1962_count = 0;
  static  unsigned long long aesl_llvm_cbe_1963_count = 0;
  unsigned long long llvm_cbe_tmp__639;
  static  unsigned long long aesl_llvm_cbe_1964_count = 0;
  static  unsigned long long aesl_llvm_cbe_1965_count = 0;
  static  unsigned long long aesl_llvm_cbe_1966_count = 0;
  static  unsigned long long aesl_llvm_cbe_1967_count = 0;
  unsigned long long llvm_cbe_tmp__640;
  static  unsigned long long aesl_llvm_cbe_1968_count = 0;
  static  unsigned long long aesl_llvm_cbe_1969_count = 0;
  static  unsigned long long aesl_llvm_cbe_1970_count = 0;
  static  unsigned long long aesl_llvm_cbe_1971_count = 0;
  static  unsigned long long aesl_llvm_cbe_1972_count = 0;
  unsigned long long llvm_cbe_tmp__641;
  static  unsigned long long aesl_llvm_cbe_1973_count = 0;
  unsigned long long llvm_cbe_tmp__642;
  static  unsigned long long aesl_llvm_cbe_1974_count = 0;
  unsigned long long llvm_cbe_tmp__643;
  static  unsigned long long aesl_llvm_cbe_1975_count = 0;
  unsigned long long llvm_cbe_tmp__644;
  static  unsigned long long aesl_llvm_cbe_1976_count = 0;
  unsigned long long llvm_cbe_tmp__645;
  static  unsigned long long aesl_llvm_cbe_1977_count = 0;
  unsigned long long llvm_cbe_tmp__646;
  static  unsigned long long aesl_llvm_cbe_1978_count = 0;
  unsigned long long llvm_cbe_tmp__647;
  static  unsigned long long aesl_llvm_cbe_1979_count = 0;
  unsigned long long llvm_cbe_tmp__648;
  static  unsigned long long aesl_llvm_cbe_1980_count = 0;
  unsigned long long llvm_cbe_tmp__649;
  static  unsigned long long aesl_llvm_cbe_1981_count = 0;
  unsigned long long llvm_cbe_tmp__650;
  static  unsigned long long aesl_llvm_cbe_1982_count = 0;
  unsigned long long llvm_cbe_tmp__651;
  static  unsigned long long aesl_llvm_cbe_1983_count = 0;
  unsigned long long llvm_cbe_tmp__652;
  static  unsigned long long aesl_llvm_cbe_1984_count = 0;
  signed long long *llvm_cbe_tmp__653;
  static  unsigned long long aesl_llvm_cbe_1985_count = 0;
  static  unsigned long long aesl_llvm_cbe_1986_count = 0;
  unsigned long long llvm_cbe_tmp__654;
  static  unsigned long long aesl_llvm_cbe_1987_count = 0;
  unsigned long long llvm_cbe_tmp__655;
  static  unsigned long long aesl_llvm_cbe_1988_count = 0;
  unsigned long long llvm_cbe_tmp__656;
  static  unsigned long long aesl_llvm_cbe_1989_count = 0;
  unsigned long long llvm_cbe_tmp__657;
  static  unsigned long long aesl_llvm_cbe_1990_count = 0;
  unsigned long long llvm_cbe_tmp__658;
  static  unsigned long long aesl_llvm_cbe_1991_count = 0;
  unsigned long long llvm_cbe_tmp__659;
  static  unsigned long long aesl_llvm_cbe_1992_count = 0;
  unsigned long long llvm_cbe_tmp__660;
  static  unsigned long long aesl_llvm_cbe_1993_count = 0;
  unsigned long long llvm_cbe_tmp__661;
  static  unsigned long long aesl_llvm_cbe_1994_count = 0;
  unsigned long long llvm_cbe_tmp__662;
  static  unsigned long long aesl_llvm_cbe_1995_count = 0;
  unsigned long long llvm_cbe_tmp__663;
  static  unsigned long long aesl_llvm_cbe_1996_count = 0;
  unsigned long long llvm_cbe_tmp__664;
  static  unsigned long long aesl_llvm_cbe_1997_count = 0;
  unsigned int llvm_cbe_tmp__665;
  static  unsigned long long aesl_llvm_cbe_1998_count = 0;
  unsigned long long llvm_cbe_tmp__666;
  static  unsigned long long aesl_llvm_cbe_1999_count = 0;
  signed long long *llvm_cbe_tmp__667;
  static  unsigned long long aesl_llvm_cbe_2000_count = 0;
  static  unsigned long long aesl_llvm_cbe_2001_count = 0;
  unsigned int llvm_cbe_tmp__668;
  static  unsigned long long aesl_llvm_cbe_2002_count = 0;
  static  unsigned long long aesl_llvm_cbe_2003_count = 0;
  static  unsigned long long aesl_llvm_cbe_2004_count = 0;
  static  unsigned long long aesl_llvm_cbe_2005_count = 0;
  static  unsigned long long aesl_llvm_cbe_2006_count = 0;
  static  unsigned long long aesl_llvm_cbe_2007_count = 0;
  static  unsigned long long aesl_llvm_cbe_2008_count = 0;
  static  unsigned long long aesl_llvm_cbe_2009_count = 0;
  static  unsigned long long aesl_llvm_cbe_2010_count = 0;
  unsigned int llvm_cbe_tmp__669;
  static  unsigned long long aesl_llvm_cbe_2011_count = 0;
  static  unsigned long long aesl_llvm_cbe_2012_count = 0;
  static  unsigned long long aesl_llvm_cbe_2013_count = 0;
  static  unsigned long long aesl_llvm_cbe_2014_count = 0;
  static  unsigned long long aesl_llvm_cbe_2015_count = 0;
  static  unsigned long long aesl_llvm_cbe_2016_count = 0;
  static  unsigned long long aesl_llvm_cbe_2017_count = 0;
  static  unsigned long long aesl_llvm_cbe_2018_count = 0;
  static  unsigned long long aesl_llvm_cbe_2019_count = 0;
  static  unsigned long long aesl_llvm_cbe_2020_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @aesl_internal_br_aes_ct64_keysched\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds [60 x i32]* %%skey, i64 0, i64 0, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1833_count);
  llvm_cbe_tmp__601 = (signed int *)(&llvm_cbe_skey[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 60
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call fastcc void @aesl_internal_br_range_dec32le(i32* %%1, i64 8, i8* %%key), !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1835_count);
  aesl_internal_br_range_dec32le((signed int *)llvm_cbe_tmp__601, 8ull, ( char *)llvm_cbe_key);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",8ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds [60 x i32]* %%skey, i64 0, i64 7, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1836_count);
  llvm_cbe_tmp__602 = (signed int *)(&llvm_cbe_skey[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 60
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )7ull) < 60)) fprintf(stderr, "%s:%d: warning: Read access out of array 'skey' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = load i32* %%2, align 4, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1837_count);
  llvm_cbe_tmp__603 = (unsigned int )*llvm_cbe_tmp__602;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__603);
  llvm_cbe_tmp__612__PHI_TEMPORARY = (unsigned int )8u;   /* for PHI node */
  llvm_cbe_storemerge15__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  llvm_cbe_tmp__613__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  llvm_cbe_tmp__614__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__603;   /* for PHI node */
  goto llvm_cbe_tmp__670;

llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds [8 x i64]* %%q, i64 0, i64 0, !dbg !22 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1870_count);
  llvm_cbe_tmp__604 = (signed long long *)(&llvm_cbe_q[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds [8 x i64]* %%q, i64 0, i64 4, !dbg !22 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1871_count);
  llvm_cbe_tmp__605 = (signed long long *)(&llvm_cbe_q[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds [8 x i64]* %%q, i64 0, i64 1, !dbg !23 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1872_count);
  llvm_cbe_tmp__606 = (signed long long *)(&llvm_cbe_q[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds [8 x i64]* %%q, i64 0, i64 2, !dbg !23 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1873_count);
  llvm_cbe_tmp__607 = (signed long long *)(&llvm_cbe_q[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds [8 x i64]* %%q, i64 0, i64 3, !dbg !23 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1874_count);
  llvm_cbe_tmp__608 = (signed long long *)(&llvm_cbe_q[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds [8 x i64]* %%q, i64 0, i64 5, !dbg !23 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1875_count);
  llvm_cbe_tmp__609 = (signed long long *)(&llvm_cbe_q[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds [8 x i64]* %%q, i64 0, i64 6, !dbg !23 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1876_count);
  llvm_cbe_tmp__610 = (signed long long *)(&llvm_cbe_q[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds [8 x i64]* %%q, i64 0, i64 7, !dbg !23 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1877_count);
  llvm_cbe_tmp__611 = (signed long long *)(&llvm_cbe_q[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}
  llvm_cbe_storemerge4__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  llvm_cbe_tmp__636__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__671;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__670:
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = phi i32 [ 8, %%0 ], [ %%43, %%31  for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1879_count);
  llvm_cbe_tmp__612 = (unsigned int )llvm_cbe_tmp__612__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__612);
printf("\n = 0x%X",8u);
printf("\n = 0x%X",llvm_cbe_tmp__635);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge15 = phi i32 [ 0, %%0 ], [ %%.3, %%31  for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_storemerge15_count);
  llvm_cbe_storemerge15 = (unsigned int )llvm_cbe_storemerge15__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge15 = 0x%X",llvm_cbe_storemerge15);
printf("\n = 0x%X",0u);
printf("\n.3 = 0x%X",llvm_cbe__2e_3);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = phi i32 [ 0, %%0 ], [ %%., %%31  for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1880_count);
  llvm_cbe_tmp__613 = (unsigned int )llvm_cbe_tmp__613__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__613);
printf("\n = 0x%X",0u);
printf("\n. = 0x%X",llvm_cbe__2e_);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = phi i32 [ %%3, %%0 ], [ %%37, %%31  for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1881_count);
  llvm_cbe_tmp__614 = (unsigned int )llvm_cbe_tmp__614__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__614);
printf("\n = 0x%X",llvm_cbe_tmp__603);
printf("\n = 0x%X",llvm_cbe_tmp__630);
}
  if (((llvm_cbe_storemerge15&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe_tmp__672;
  } else {
    goto llvm_cbe_tmp__673;
  }

llvm_cbe_tmp__674:
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = phi i32 [ %%26, %%17 ], [ %%30, %%29 ], [ %%15, %%27 ], !dbg !21 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1919_count);
  llvm_cbe_tmp__625 = (unsigned int )llvm_cbe_tmp__625__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__625);
printf("\n = 0x%X",llvm_cbe_tmp__623);
printf("\n = 0x%X",llvm_cbe_tmp__624);
printf("\n = 0x%X",llvm_cbe_tmp__614);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = add nsw i32 %%13, -8, !dbg !21 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1920_count);
  llvm_cbe_tmp__626 = (unsigned int )((unsigned int )(llvm_cbe_tmp__612&4294967295ull)) + ((unsigned int )(4294967288u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__626&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = sext i32 %%33 to i64, !dbg !21 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1921_count);
  llvm_cbe_tmp__627 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__626);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__627);
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = getelementptr inbounds [60 x i32]* %%skey, i64 0, i64 %%34, !dbg !21 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1922_count);
  llvm_cbe_tmp__628 = (signed int *)(&llvm_cbe_skey[(((signed long long )llvm_cbe_tmp__627))
#ifdef AESL_BC_SIM
 % 60
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__627));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__627) < 60)) fprintf(stderr, "%s:%d: warning: Read access out of array 'skey' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = load i32* %%35, align 4, !dbg !21 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1923_count);
  llvm_cbe_tmp__629 = (unsigned int )*llvm_cbe_tmp__628;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__629);
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = xor i32 %%36, %%32, !dbg !21 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1924_count);
  llvm_cbe_tmp__630 = (unsigned int )llvm_cbe_tmp__629 ^ llvm_cbe_tmp__625;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__630);
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = sext i32 %%13 to i64, !dbg !22 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1932_count);
  llvm_cbe_tmp__631 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__612);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__631);
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = getelementptr inbounds [60 x i32]* %%skey, i64 0, i64 %%38, !dbg !22 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1933_count);
  llvm_cbe_tmp__632 = (signed int *)(&llvm_cbe_skey[(((signed long long )llvm_cbe_tmp__631))
#ifdef AESL_BC_SIM
 % 60
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__631));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__631) < 60 && "Write access out of array 'skey' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%37, i32* %%39, align 4, !dbg !22 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1934_count);
  *llvm_cbe_tmp__632 = llvm_cbe_tmp__630;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__630);
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = add nsw i32 %%storemerge15, 1, !dbg !21 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1935_count);
  llvm_cbe_tmp__633 = (unsigned int )((unsigned int )(llvm_cbe_storemerge15&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__633&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = add nsw i32 %%14, 1, !dbg !23 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1944_count);
  llvm_cbe_tmp__634 = (unsigned int )((unsigned int )(llvm_cbe_tmp__613&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__634&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%. = select i1 %%41, i32 %%42, i32 %%14, !dbg !21 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe__2e__count);
  llvm_cbe__2e_ = (unsigned int )((((llvm_cbe_tmp__633&4294967295U) == (8u&4294967295U))) ? ((unsigned int )llvm_cbe_tmp__634) : ((unsigned int )llvm_cbe_tmp__613));
if (AESL_DEBUG_TRACE)
printf("\n. = 0x%X\n", llvm_cbe__2e_);
if (AESL_DEBUG_TRACE)
printf("\n  %%.3 = select i1 %%41, i32 0, i32 %%40, !dbg !21 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe__2e_3_count);
  llvm_cbe__2e_3 = (unsigned int )((((llvm_cbe_tmp__633&4294967295U) == (8u&4294967295U))) ? ((unsigned int )0u) : ((unsigned int )llvm_cbe_tmp__633));
if (AESL_DEBUG_TRACE)
printf("\n.3 = 0x%X\n", llvm_cbe__2e_3);
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = add nsw i32 %%13, 1, !dbg !22 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1948_count);
  llvm_cbe_tmp__635 = (unsigned int )((unsigned int )(llvm_cbe_tmp__612&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__635&4294967295ull)));
  if (((llvm_cbe_tmp__635&4294967295U) == (60u&4294967295U))) {
    goto llvm_cbe__2e_preheader;
  } else {
    llvm_cbe_tmp__612__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__635;   /* for PHI node */
    llvm_cbe_storemerge15__PHI_TEMPORARY = (unsigned int )llvm_cbe__2e_3;   /* for PHI node */
    llvm_cbe_tmp__613__PHI_TEMPORARY = (unsigned int )llvm_cbe__2e_;   /* for PHI node */
    llvm_cbe_tmp__614__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__630;   /* for PHI node */
    goto llvm_cbe_tmp__670;
  }

llvm_cbe_tmp__672:
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = shl i32 %%15, 24, !dbg !21 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1884_count);
  llvm_cbe_tmp__615 = (unsigned int )llvm_cbe_tmp__614 << 24u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__615);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = lshr i32 %%15, 8, !dbg !21 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1885_count);
  llvm_cbe_tmp__616 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__614&4294967295ull)) >> ((unsigned int )(8u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__616&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = or i32 %%18, %%19, !dbg !21 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1886_count);
  llvm_cbe_tmp__617 = (unsigned int )llvm_cbe_tmp__615 | llvm_cbe_tmp__616;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__617);
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = call fastcc i32 @aesl_internal_sub_word(i32 %%20), !dbg !22 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1894_count);
  llvm_cbe_tmp__618 = (unsigned int )aesl_internal_sub_word(llvm_cbe_tmp__617);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__617);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__618);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = sext i32 %%14 to i64, !dbg !22 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1895_count);
  llvm_cbe_tmp__619 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__613);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__619);
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = getelementptr inbounds [10 x i8]* @aesl_internal_Rcon, i64 0, i64 %%22, !dbg !22 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1896_count);
  llvm_cbe_tmp__620 = ( char *)(&aesl_internal_Rcon[(((signed long long )llvm_cbe_tmp__619))
#ifdef AESL_BC_SIM
 % 10
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__619));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__619) < 10)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_Rcon' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = load i8* %%23, align 1, !dbg !22 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1897_count);
  llvm_cbe_tmp__621 = (unsigned char )*llvm_cbe_tmp__620;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__621);
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = zext i8 %%24 to i32, !dbg !22 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1898_count);
  llvm_cbe_tmp__622 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__621&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__622);
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = xor i32 %%25, %%21, !dbg !22 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1899_count);
  llvm_cbe_tmp__623 = (unsigned int )llvm_cbe_tmp__622 ^ llvm_cbe_tmp__618;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__623);
  llvm_cbe_tmp__625__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__623;   /* for PHI node */
  goto llvm_cbe_tmp__674;

llvm_cbe_tmp__673:
  if (((llvm_cbe_storemerge15&4294967295U) == (4u&4294967295U))) {
    goto llvm_cbe_tmp__675;
  } else {
    llvm_cbe_tmp__625__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__614;   /* for PHI node */
    goto llvm_cbe_tmp__674;
  }

llvm_cbe_tmp__675:
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = call fastcc i32 @aesl_internal_sub_word(i32 %%15), !dbg !22 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1910_count);
  llvm_cbe_tmp__624 = (unsigned int )aesl_internal_sub_word(llvm_cbe_tmp__614);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__614);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__624);
}
  llvm_cbe_tmp__625__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__624;   /* for PHI node */
  goto llvm_cbe_tmp__674;

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__671:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge4 = phi i32 [ 0, %%.preheader ], [ %%78, %%44  for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_storemerge4_count);
  llvm_cbe_storemerge4 = (unsigned int )llvm_cbe_storemerge4__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge4 = 0x%X",llvm_cbe_storemerge4);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__669);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = phi i32 [ 0, %%.preheader ], [ %%77, %%44  for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1958_count);
  llvm_cbe_tmp__636 = (unsigned int )llvm_cbe_tmp__636__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__636);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__668);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = sext i32 %%45 to i64, !dbg !22 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1960_count);
  llvm_cbe_tmp__637 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__636);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__637);
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = getelementptr inbounds [60 x i32]* %%skey, i64 0, i64 %%46, !dbg !22 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1961_count);
  llvm_cbe_tmp__638 = (signed int *)(&llvm_cbe_skey[(((signed long long )llvm_cbe_tmp__637))
#ifdef AESL_BC_SIM
 % 60
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__637));
}
if (AESL_DEBUG_TRACE)
printf("\n  call fastcc void @aesl_internal_br_aes_ct64_interleave_in(i64* %%4, i64* %%5, i32* %%47), !dbg !22 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1962_count);
  aesl_internal_br_aes_ct64_interleave_in((signed long long *)llvm_cbe_tmp__604, (signed long long *)llvm_cbe_tmp__605, (signed int *)llvm_cbe_tmp__638);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'q' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = load i64* %%4, align 16, !dbg !23 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1963_count);
  llvm_cbe_tmp__639 = (unsigned long long )*llvm_cbe_tmp__604;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__639);

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 8 && "Write access out of array 'q' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%48, i64* %%6, align 8, !dbg !23 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1964_count);
  *llvm_cbe_tmp__606 = llvm_cbe_tmp__639;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__639);

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 8 && "Write access out of array 'q' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%48, i64* %%7, align 16, !dbg !23 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1965_count);
  *llvm_cbe_tmp__607 = llvm_cbe_tmp__639;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__639);

#ifdef AESL_BC_SIM
  assert(((signed long long )3ull) < 8 && "Write access out of array 'q' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%48, i64* %%8, align 8, !dbg !23 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1966_count);
  *llvm_cbe_tmp__608 = llvm_cbe_tmp__639;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__639);

#ifdef AESL_BC_SIM
  if (!(((signed long long )4ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'q' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = load i64* %%5, align 16, !dbg !23 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1967_count);
  llvm_cbe_tmp__640 = (unsigned long long )*llvm_cbe_tmp__605;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__640);

#ifdef AESL_BC_SIM
  assert(((signed long long )5ull) < 8 && "Write access out of array 'q' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%49, i64* %%9, align 8, !dbg !23 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1968_count);
  *llvm_cbe_tmp__609 = llvm_cbe_tmp__640;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__640);

#ifdef AESL_BC_SIM
  assert(((signed long long )6ull) < 8 && "Write access out of array 'q' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%49, i64* %%10, align 16, !dbg !23 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1969_count);
  *llvm_cbe_tmp__610 = llvm_cbe_tmp__640;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__640);

#ifdef AESL_BC_SIM
  assert(((signed long long )7ull) < 8 && "Write access out of array 'q' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%49, i64* %%11, align 8, !dbg !23 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1970_count);
  *llvm_cbe_tmp__611 = llvm_cbe_tmp__640;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__640);
if (AESL_DEBUG_TRACE)
printf("\n  call fastcc void @aesl_internal_br_aes_ct64_ortho(i64* %%4), !dbg !24 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1971_count);
  aesl_internal_br_aes_ct64_ortho((signed long long *)llvm_cbe_tmp__604);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'q' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = load i64* %%4, align 16, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1972_count);
  llvm_cbe_tmp__641 = (unsigned long long )*llvm_cbe_tmp__604;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__641);
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = and i64 %%50, 1229782938247303441, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1973_count);
  llvm_cbe_tmp__642 = (unsigned long long )llvm_cbe_tmp__641 & 1229782938247303441ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__642);

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'q' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = load i64* %%6, align 8, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1974_count);
  llvm_cbe_tmp__643 = (unsigned long long )*llvm_cbe_tmp__606;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__643);
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = and i64 %%52, 2459565876494606882, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1975_count);
  llvm_cbe_tmp__644 = (unsigned long long )llvm_cbe_tmp__643 & 2459565876494606882ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__644);

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'q' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = load i64* %%7, align 16, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1976_count);
  llvm_cbe_tmp__645 = (unsigned long long )*llvm_cbe_tmp__607;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__645);
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = and i64 %%54, 4919131752989213764, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1977_count);
  llvm_cbe_tmp__646 = (unsigned long long )llvm_cbe_tmp__645 & 4919131752989213764ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__646);

#ifdef AESL_BC_SIM
  if (!(((signed long long )3ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'q' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = load i64* %%8, align 8, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1978_count);
  llvm_cbe_tmp__647 = (unsigned long long )*llvm_cbe_tmp__608;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__647);
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = and i64 %%56, -8608480567731124088, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1979_count);
  llvm_cbe_tmp__648 = (unsigned long long )llvm_cbe_tmp__647 & 9838263505978427528ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__648);
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = or i64 %%53, %%51, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1980_count);
  llvm_cbe_tmp__649 = (unsigned long long )llvm_cbe_tmp__644 | llvm_cbe_tmp__642;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__649);
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = or i64 %%58, %%55, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1981_count);
  llvm_cbe_tmp__650 = (unsigned long long )llvm_cbe_tmp__649 | llvm_cbe_tmp__646;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__650);
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = or i64 %%59, %%57, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1982_count);
  llvm_cbe_tmp__651 = (unsigned long long )llvm_cbe_tmp__650 | llvm_cbe_tmp__648;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__651);
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = sext i32 %%storemerge4 to i64, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1983_count);
  llvm_cbe_tmp__652 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge4);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__652);
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = getelementptr inbounds i64* %%comp_skey, i64 %%61, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1984_count);
  llvm_cbe_tmp__653 = (signed long long *)(&llvm_cbe_comp_skey[(((signed long long )llvm_cbe_tmp__652))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__652));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%60, i64* %%62, align 8, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1985_count);
  *llvm_cbe_tmp__653 = llvm_cbe_tmp__651;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__651);

#ifdef AESL_BC_SIM
  if (!(((signed long long )4ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'q' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = load i64* %%5, align 16, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1986_count);
  llvm_cbe_tmp__654 = (unsigned long long )*llvm_cbe_tmp__605;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__654);
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = and i64 %%63, 1229782938247303441, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1987_count);
  llvm_cbe_tmp__655 = (unsigned long long )llvm_cbe_tmp__654 & 1229782938247303441ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__655);

#ifdef AESL_BC_SIM
  if (!(((signed long long )5ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'q' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = load i64* %%9, align 8, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1988_count);
  llvm_cbe_tmp__656 = (unsigned long long )*llvm_cbe_tmp__609;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__656);
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = and i64 %%65, 2459565876494606882, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1989_count);
  llvm_cbe_tmp__657 = (unsigned long long )llvm_cbe_tmp__656 & 2459565876494606882ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__657);

#ifdef AESL_BC_SIM
  if (!(((signed long long )6ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'q' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = load i64* %%10, align 16, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1990_count);
  llvm_cbe_tmp__658 = (unsigned long long )*llvm_cbe_tmp__610;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__658);
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = and i64 %%67, 4919131752989213764, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1991_count);
  llvm_cbe_tmp__659 = (unsigned long long )llvm_cbe_tmp__658 & 4919131752989213764ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__659);

#ifdef AESL_BC_SIM
  if (!(((signed long long )7ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'q' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%69 = load i64* %%11, align 8, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1992_count);
  llvm_cbe_tmp__660 = (unsigned long long )*llvm_cbe_tmp__611;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__660);
if (AESL_DEBUG_TRACE)
printf("\n  %%70 = and i64 %%69, -8608480567731124088, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1993_count);
  llvm_cbe_tmp__661 = (unsigned long long )llvm_cbe_tmp__660 & 9838263505978427528ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__661);
if (AESL_DEBUG_TRACE)
printf("\n  %%71 = or i64 %%66, %%64, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1994_count);
  llvm_cbe_tmp__662 = (unsigned long long )llvm_cbe_tmp__657 | llvm_cbe_tmp__655;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__662);
if (AESL_DEBUG_TRACE)
printf("\n  %%72 = or i64 %%71, %%68, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1995_count);
  llvm_cbe_tmp__663 = (unsigned long long )llvm_cbe_tmp__662 | llvm_cbe_tmp__659;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__663);
if (AESL_DEBUG_TRACE)
printf("\n  %%73 = or i64 %%72, %%70, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1996_count);
  llvm_cbe_tmp__664 = (unsigned long long )llvm_cbe_tmp__663 | llvm_cbe_tmp__661;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__664);
if (AESL_DEBUG_TRACE)
printf("\n  %%74 = or i32 %%storemerge4, 1, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1997_count);
  llvm_cbe_tmp__665 = (unsigned int )llvm_cbe_storemerge4 | 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__665);
if (AESL_DEBUG_TRACE)
printf("\n  %%75 = sext i32 %%74 to i64, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1998_count);
  llvm_cbe_tmp__666 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__665);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__666);
if (AESL_DEBUG_TRACE)
printf("\n  %%76 = getelementptr inbounds i64* %%comp_skey, i64 %%75, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_1999_count);
  llvm_cbe_tmp__667 = (signed long long *)(&llvm_cbe_comp_skey[(((signed long long )llvm_cbe_tmp__666))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__666));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%73, i64* %%76, align 8, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_2000_count);
  *llvm_cbe_tmp__667 = llvm_cbe_tmp__664;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__664);
if (AESL_DEBUG_TRACE)
printf("\n  %%77 = add nsw i32 %%45, 4, !dbg !22 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_2001_count);
  llvm_cbe_tmp__668 = (unsigned int )((unsigned int )(llvm_cbe_tmp__636&4294967295ull)) + ((unsigned int )(4u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__668&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%78 = add nsw i32 %%storemerge4, 2, !dbg !22 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_keysched  --> \n", ++aesl_llvm_cbe_2010_count);
  llvm_cbe_tmp__669 = (unsigned int )((unsigned int )(llvm_cbe_storemerge4&4294967295ull)) + ((unsigned int )(2u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__669&4294967295ull)));
  if ((((signed int )llvm_cbe_tmp__668) < ((signed int )60u))) {
    llvm_cbe_storemerge4__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__669;   /* for PHI node */
    llvm_cbe_tmp__636__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__668;   /* for PHI node */
    goto llvm_cbe_tmp__671;
  } else {
    goto llvm_cbe_tmp__676;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__676:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @aesl_internal_br_aes_ct64_keysched}\n");
  return;
}


static void aesl_internal_br_aes_ct64_skey_expand(signed long long *llvm_cbe_skey, signed long long *llvm_cbe_comp_skey) {
  static  unsigned long long aesl_llvm_cbe_2021_count = 0;
  static  unsigned long long aesl_llvm_cbe_2022_count = 0;
  static  unsigned long long aesl_llvm_cbe_2023_count = 0;
  static  unsigned long long aesl_llvm_cbe_2024_count = 0;
  static  unsigned long long aesl_llvm_cbe_2025_count = 0;
  static  unsigned long long aesl_llvm_cbe_2026_count = 0;
  static  unsigned long long aesl_llvm_cbe_2027_count = 0;
  static  unsigned long long aesl_llvm_cbe_2028_count = 0;
  static  unsigned long long aesl_llvm_cbe_2029_count = 0;
  static  unsigned long long aesl_llvm_cbe_2030_count = 0;
  static  unsigned long long aesl_llvm_cbe_2031_count = 0;
  static  unsigned long long aesl_llvm_cbe_2032_count = 0;
  static  unsigned long long aesl_llvm_cbe_2033_count = 0;
  static  unsigned long long aesl_llvm_cbe_2034_count = 0;
  static  unsigned long long aesl_llvm_cbe_2035_count = 0;
  static  unsigned long long aesl_llvm_cbe_2036_count = 0;
  static  unsigned long long aesl_llvm_cbe_2037_count = 0;
  static  unsigned long long aesl_llvm_cbe_2038_count = 0;
  static  unsigned long long aesl_llvm_cbe_2039_count = 0;
  static  unsigned long long aesl_llvm_cbe_2040_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  unsigned int llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2041_count = 0;
  unsigned int llvm_cbe_tmp__677;
  unsigned int llvm_cbe_tmp__677__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2042_count = 0;
  unsigned long long llvm_cbe_tmp__678;
  static  unsigned long long aesl_llvm_cbe_2043_count = 0;
  signed long long *llvm_cbe_tmp__679;
  static  unsigned long long aesl_llvm_cbe_2044_count = 0;
  unsigned long long llvm_cbe_tmp__680;
  static  unsigned long long aesl_llvm_cbe_2045_count = 0;
  static  unsigned long long aesl_llvm_cbe_2046_count = 0;
  static  unsigned long long aesl_llvm_cbe_2047_count = 0;
  static  unsigned long long aesl_llvm_cbe_2048_count = 0;
  static  unsigned long long aesl_llvm_cbe_2049_count = 0;
  static  unsigned long long aesl_llvm_cbe_2050_count = 0;
  static  unsigned long long aesl_llvm_cbe_2051_count = 0;
  static  unsigned long long aesl_llvm_cbe_2052_count = 0;
  static  unsigned long long aesl_llvm_cbe_2053_count = 0;
  static  unsigned long long aesl_llvm_cbe_2054_count = 0;
  static  unsigned long long aesl_llvm_cbe_2055_count = 0;
  static  unsigned long long aesl_llvm_cbe_2056_count = 0;
  static  unsigned long long aesl_llvm_cbe_2057_count = 0;
  static  unsigned long long aesl_llvm_cbe_2058_count = 0;
  static  unsigned long long aesl_llvm_cbe_2059_count = 0;
  static  unsigned long long aesl_llvm_cbe_2060_count = 0;
  static  unsigned long long aesl_llvm_cbe_2061_count = 0;
  unsigned long long llvm_cbe_tmp__681;
  static  unsigned long long aesl_llvm_cbe_2062_count = 0;
  static  unsigned long long aesl_llvm_cbe_2063_count = 0;
  static  unsigned long long aesl_llvm_cbe_2064_count = 0;
  static  unsigned long long aesl_llvm_cbe_2065_count = 0;
  static  unsigned long long aesl_llvm_cbe_2066_count = 0;
  unsigned long long llvm_cbe_tmp__682;
  static  unsigned long long aesl_llvm_cbe_2067_count = 0;
  unsigned long long llvm_cbe_tmp__683;
  static  unsigned long long aesl_llvm_cbe_2068_count = 0;
  static  unsigned long long aesl_llvm_cbe_2069_count = 0;
  static  unsigned long long aesl_llvm_cbe_2070_count = 0;
  static  unsigned long long aesl_llvm_cbe_2071_count = 0;
  static  unsigned long long aesl_llvm_cbe_2072_count = 0;
  static  unsigned long long aesl_llvm_cbe_2073_count = 0;
  unsigned long long llvm_cbe_tmp__684;
  static  unsigned long long aesl_llvm_cbe_2074_count = 0;
  unsigned long long llvm_cbe_tmp__685;
  static  unsigned long long aesl_llvm_cbe_2075_count = 0;
  static  unsigned long long aesl_llvm_cbe_2076_count = 0;
  static  unsigned long long aesl_llvm_cbe_2077_count = 0;
  static  unsigned long long aesl_llvm_cbe_2078_count = 0;
  static  unsigned long long aesl_llvm_cbe_2079_count = 0;
  static  unsigned long long aesl_llvm_cbe_2080_count = 0;
  unsigned long long llvm_cbe_tmp__686;
  static  unsigned long long aesl_llvm_cbe_2081_count = 0;
  unsigned long long llvm_cbe_tmp__687;
  static  unsigned long long aesl_llvm_cbe_2082_count = 0;
  static  unsigned long long aesl_llvm_cbe_2083_count = 0;
  static  unsigned long long aesl_llvm_cbe_2084_count = 0;
  static  unsigned long long aesl_llvm_cbe_2085_count = 0;
  static  unsigned long long aesl_llvm_cbe_2086_count = 0;
  static  unsigned long long aesl_llvm_cbe_2087_count = 0;
  unsigned long long llvm_cbe_tmp__688;
  static  unsigned long long aesl_llvm_cbe_2088_count = 0;
  unsigned long long llvm_cbe_tmp__689;
  static  unsigned long long aesl_llvm_cbe_2089_count = 0;
  unsigned long long llvm_cbe_tmp__690;
  static  unsigned long long aesl_llvm_cbe_2090_count = 0;
  signed long long *llvm_cbe_tmp__691;
  static  unsigned long long aesl_llvm_cbe_2091_count = 0;
  static  unsigned long long aesl_llvm_cbe_2092_count = 0;
  unsigned long long llvm_cbe_tmp__692;
  static  unsigned long long aesl_llvm_cbe_2093_count = 0;
  unsigned long long llvm_cbe_tmp__693;
  static  unsigned long long aesl_llvm_cbe_2094_count = 0;
  unsigned int llvm_cbe_tmp__694;
  static  unsigned long long aesl_llvm_cbe_2095_count = 0;
  unsigned long long llvm_cbe_tmp__695;
  static  unsigned long long aesl_llvm_cbe_2096_count = 0;
  signed long long *llvm_cbe_tmp__696;
  static  unsigned long long aesl_llvm_cbe_2097_count = 0;
  static  unsigned long long aesl_llvm_cbe_2098_count = 0;
  unsigned long long llvm_cbe_tmp__697;
  static  unsigned long long aesl_llvm_cbe_2099_count = 0;
  unsigned long long llvm_cbe_tmp__698;
  static  unsigned long long aesl_llvm_cbe_2100_count = 0;
  unsigned int llvm_cbe_tmp__699;
  static  unsigned long long aesl_llvm_cbe_2101_count = 0;
  unsigned long long llvm_cbe_tmp__700;
  static  unsigned long long aesl_llvm_cbe_2102_count = 0;
  signed long long *llvm_cbe_tmp__701;
  static  unsigned long long aesl_llvm_cbe_2103_count = 0;
  static  unsigned long long aesl_llvm_cbe_2104_count = 0;
  unsigned long long llvm_cbe_tmp__702;
  static  unsigned long long aesl_llvm_cbe_2105_count = 0;
  unsigned long long llvm_cbe_tmp__703;
  static  unsigned long long aesl_llvm_cbe_2106_count = 0;
  unsigned int llvm_cbe_tmp__704;
  static  unsigned long long aesl_llvm_cbe_2107_count = 0;
  unsigned long long llvm_cbe_tmp__705;
  static  unsigned long long aesl_llvm_cbe_2108_count = 0;
  signed long long *llvm_cbe_tmp__706;
  static  unsigned long long aesl_llvm_cbe_2109_count = 0;
  static  unsigned long long aesl_llvm_cbe_2110_count = 0;
  unsigned int llvm_cbe_tmp__707;
  static  unsigned long long aesl_llvm_cbe_2111_count = 0;
  static  unsigned long long aesl_llvm_cbe_2112_count = 0;
  static  unsigned long long aesl_llvm_cbe_2113_count = 0;
  static  unsigned long long aesl_llvm_cbe_2114_count = 0;
  static  unsigned long long aesl_llvm_cbe_2115_count = 0;
  unsigned int llvm_cbe_tmp__708;
  static  unsigned long long aesl_llvm_cbe_2116_count = 0;
  static  unsigned long long aesl_llvm_cbe_2117_count = 0;
  static  unsigned long long aesl_llvm_cbe_2118_count = 0;
  static  unsigned long long aesl_llvm_cbe_2119_count = 0;
  static  unsigned long long aesl_llvm_cbe_2120_count = 0;
  static  unsigned long long aesl_llvm_cbe_2121_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_2122_count = 0;
  static  unsigned long long aesl_llvm_cbe_2123_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @aesl_internal_br_aes_ct64_skey_expand\n");
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  llvm_cbe_tmp__677__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__709;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__709:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i32 [ 0, %%0 ], [ %%33, %%1  for 0x%I64xth hint within @aesl_internal_br_aes_ct64_skey_expand  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__708);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = phi i32 [ 0, %%0 ], [ %%32, %%1  for 0x%I64xth hint within @aesl_internal_br_aes_ct64_skey_expand  --> \n", ++aesl_llvm_cbe_2041_count);
  llvm_cbe_tmp__677 = (unsigned int )llvm_cbe_tmp__677__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__677);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__707);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = zext i32 %%2 to i64, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_skey_expand  --> \n", ++aesl_llvm_cbe_2042_count);
  llvm_cbe_tmp__678 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__677&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__678);
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds i64* %%comp_skey, i64 %%3, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_skey_expand  --> \n", ++aesl_llvm_cbe_2043_count);
  llvm_cbe_tmp__679 = (signed long long *)(&llvm_cbe_comp_skey[(((signed long long )llvm_cbe_tmp__678))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__678));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = load i64* %%4, align 8, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_skey_expand  --> \n", ++aesl_llvm_cbe_2044_count);
  llvm_cbe_tmp__680 = (unsigned long long )*llvm_cbe_tmp__679;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__680);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = and i64 %%5, 1229782938247303441, !dbg !21 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_skey_expand  --> \n", ++aesl_llvm_cbe_2061_count);
  llvm_cbe_tmp__681 = (unsigned long long )llvm_cbe_tmp__680 & 1229782938247303441ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__681);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = lshr i64 %%5, 1, !dbg !21 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_skey_expand  --> \n", ++aesl_llvm_cbe_2066_count);
  llvm_cbe_tmp__682 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_tmp__680&18446744073709551615ull)) >> ((unsigned long long )(1ull&18446744073709551615ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__682&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = and i64 %%7, 1229782938247303441, !dbg !21 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_skey_expand  --> \n", ++aesl_llvm_cbe_2067_count);
  llvm_cbe_tmp__683 = (unsigned long long )llvm_cbe_tmp__682 & 1229782938247303441ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__683);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = lshr i64 %%5, 2, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_skey_expand  --> \n", ++aesl_llvm_cbe_2073_count);
  llvm_cbe_tmp__684 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_tmp__680&18446744073709551615ull)) >> ((unsigned long long )(2ull&18446744073709551615ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__684&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = and i64 %%9, 1229782938247303441, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_skey_expand  --> \n", ++aesl_llvm_cbe_2074_count);
  llvm_cbe_tmp__685 = (unsigned long long )llvm_cbe_tmp__684 & 1229782938247303441ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__685);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = lshr i64 %%5, 3, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_skey_expand  --> \n", ++aesl_llvm_cbe_2080_count);
  llvm_cbe_tmp__686 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_tmp__680&18446744073709551615ull)) >> ((unsigned long long )(3ull&18446744073709551615ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__686&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = and i64 %%11, 1229782938247303441, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_skey_expand  --> \n", ++aesl_llvm_cbe_2081_count);
  llvm_cbe_tmp__687 = (unsigned long long )llvm_cbe_tmp__686 & 1229782938247303441ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__687);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = shl i64 %%6, 4, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_skey_expand  --> \n", ++aesl_llvm_cbe_2087_count);
  llvm_cbe_tmp__688 = (unsigned long long )llvm_cbe_tmp__681 << 4ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__688);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = sub i64 %%13, %%6, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_skey_expand  --> \n", ++aesl_llvm_cbe_2088_count);
  llvm_cbe_tmp__689 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__688&18446744073709551615ull)) - ((unsigned long long )(llvm_cbe_tmp__681&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__689&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = zext i32 %%storemerge1 to i64, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_skey_expand  --> \n", ++aesl_llvm_cbe_2089_count);
  llvm_cbe_tmp__690 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge1&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__690);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = getelementptr inbounds i64* %%skey, i64 %%15, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_skey_expand  --> \n", ++aesl_llvm_cbe_2090_count);
  llvm_cbe_tmp__691 = (signed long long *)(&llvm_cbe_skey[(((signed long long )llvm_cbe_tmp__690))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__690));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%14, i64* %%16, align 8, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_skey_expand  --> \n", ++aesl_llvm_cbe_2091_count);
  *llvm_cbe_tmp__691 = llvm_cbe_tmp__689;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__689);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = shl i64 %%8, 4, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_skey_expand  --> \n", ++aesl_llvm_cbe_2092_count);
  llvm_cbe_tmp__692 = (unsigned long long )llvm_cbe_tmp__683 << 4ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__692);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = sub i64 %%17, %%8, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_skey_expand  --> \n", ++aesl_llvm_cbe_2093_count);
  llvm_cbe_tmp__693 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__692&18446744073709551615ull)) - ((unsigned long long )(llvm_cbe_tmp__683&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__693&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = or i32 %%storemerge1, 1, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_skey_expand  --> \n", ++aesl_llvm_cbe_2094_count);
  llvm_cbe_tmp__694 = (unsigned int )llvm_cbe_storemerge1 | 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__694);
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = zext i32 %%19 to i64, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_skey_expand  --> \n", ++aesl_llvm_cbe_2095_count);
  llvm_cbe_tmp__695 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__694&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__695);
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = getelementptr inbounds i64* %%skey, i64 %%20, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_skey_expand  --> \n", ++aesl_llvm_cbe_2096_count);
  llvm_cbe_tmp__696 = (signed long long *)(&llvm_cbe_skey[(((signed long long )llvm_cbe_tmp__695))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__695));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%18, i64* %%21, align 8, !dbg !18 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_skey_expand  --> \n", ++aesl_llvm_cbe_2097_count);
  *llvm_cbe_tmp__696 = llvm_cbe_tmp__693;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__693);
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = shl i64 %%10, 4, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_skey_expand  --> \n", ++aesl_llvm_cbe_2098_count);
  llvm_cbe_tmp__697 = (unsigned long long )llvm_cbe_tmp__685 << 4ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__697);
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = sub i64 %%22, %%10, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_skey_expand  --> \n", ++aesl_llvm_cbe_2099_count);
  llvm_cbe_tmp__698 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__697&18446744073709551615ull)) - ((unsigned long long )(llvm_cbe_tmp__685&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__698&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = or i32 %%storemerge1, 2, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_skey_expand  --> \n", ++aesl_llvm_cbe_2100_count);
  llvm_cbe_tmp__699 = (unsigned int )llvm_cbe_storemerge1 | 2u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__699);
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = zext i32 %%24 to i64, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_skey_expand  --> \n", ++aesl_llvm_cbe_2101_count);
  llvm_cbe_tmp__700 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__699&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__700);
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = getelementptr inbounds i64* %%skey, i64 %%25, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_skey_expand  --> \n", ++aesl_llvm_cbe_2102_count);
  llvm_cbe_tmp__701 = (signed long long *)(&llvm_cbe_skey[(((signed long long )llvm_cbe_tmp__700))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__700));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%23, i64* %%26, align 8, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_skey_expand  --> \n", ++aesl_llvm_cbe_2103_count);
  *llvm_cbe_tmp__701 = llvm_cbe_tmp__698;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__698);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = shl i64 %%12, 4, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_skey_expand  --> \n", ++aesl_llvm_cbe_2104_count);
  llvm_cbe_tmp__702 = (unsigned long long )llvm_cbe_tmp__687 << 4ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__702);
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = sub i64 %%27, %%12, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_skey_expand  --> \n", ++aesl_llvm_cbe_2105_count);
  llvm_cbe_tmp__703 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__702&18446744073709551615ull)) - ((unsigned long long )(llvm_cbe_tmp__687&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__703&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = or i32 %%storemerge1, 3, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_skey_expand  --> \n", ++aesl_llvm_cbe_2106_count);
  llvm_cbe_tmp__704 = (unsigned int )llvm_cbe_storemerge1 | 3u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__704);
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = zext i32 %%29 to i64, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_skey_expand  --> \n", ++aesl_llvm_cbe_2107_count);
  llvm_cbe_tmp__705 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__704&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__705);
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = getelementptr inbounds i64* %%skey, i64 %%30, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_skey_expand  --> \n", ++aesl_llvm_cbe_2108_count);
  llvm_cbe_tmp__706 = (signed long long *)(&llvm_cbe_skey[(((signed long long )llvm_cbe_tmp__705))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__705));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%28, i64* %%31, align 8, !dbg !19 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_skey_expand  --> \n", ++aesl_llvm_cbe_2109_count);
  *llvm_cbe_tmp__706 = llvm_cbe_tmp__703;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__703);
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = add i32 %%2, 1, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_skey_expand  --> \n", ++aesl_llvm_cbe_2110_count);
  llvm_cbe_tmp__707 = (unsigned int )((unsigned int )(llvm_cbe_tmp__677&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__707&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = add i32 %%storemerge1, 4, !dbg !20 for 0x%I64xth hint within @aesl_internal_br_aes_ct64_skey_expand  --> \n", ++aesl_llvm_cbe_2115_count);
  llvm_cbe_tmp__708 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) + ((unsigned int )(4u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__708&4294967295ull)));
  if (((llvm_cbe_tmp__707&4294967295U) == (30u&4294967295U))) {
    goto llvm_cbe_tmp__710;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__708;   /* for PHI node */
    llvm_cbe_tmp__677__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__707;   /* for PHI node */
    goto llvm_cbe_tmp__709;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__710:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @aesl_internal_br_aes_ct64_skey_expand}\n");
  return;
}


static signed int aesl_internal_sub_word(signed int llvm_cbe_x) {
  static  unsigned long long aesl_llvm_cbe_q_count = 0;
  signed long long llvm_cbe_q[8];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_2124_count = 0;
  static  unsigned long long aesl_llvm_cbe_2125_count = 0;
  static  unsigned long long aesl_llvm_cbe_2126_count = 0;
  static  unsigned long long aesl_llvm_cbe_2127_count = 0;
   char *llvm_cbe_tmp__711;
  static  unsigned long long aesl_llvm_cbe_2128_count = 0;
   char *llvm_cbe_tmp__712;
  static  unsigned long long aesl_llvm_cbe_2129_count = 0;
  unsigned long long llvm_cbe_tmp__713;
  static  unsigned long long aesl_llvm_cbe_2130_count = 0;
  signed long long *llvm_cbe_tmp__714;
  static  unsigned long long aesl_llvm_cbe_2131_count = 0;
  static  unsigned long long aesl_llvm_cbe_2132_count = 0;
  static  unsigned long long aesl_llvm_cbe_2133_count = 0;
  static  unsigned long long aesl_llvm_cbe_2134_count = 0;
  static  unsigned long long aesl_llvm_cbe_2135_count = 0;
  unsigned long long llvm_cbe_tmp__715;
  static  unsigned long long aesl_llvm_cbe_2136_count = 0;
  unsigned int llvm_cbe_tmp__716;
  static  unsigned long long aesl_llvm_cbe_2137_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @aesl_internal_sub_word\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = bitcast [8 x i64]* %%q to i8*, !dbg !19 for 0x%I64xth hint within @aesl_internal_sub_word  --> \n", ++aesl_llvm_cbe_2127_count);
  llvm_cbe_tmp__711 = ( char *)(( char *)(&llvm_cbe_q));
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = call i8* @memset(i8* %%1, i32 0, i64 64 for 0x%I64xth hint within @aesl_internal_sub_word  --> \n", ++aesl_llvm_cbe_2128_count);
  ( char *)memset(( char *)llvm_cbe_tmp__711, 0u, 64ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",0u);
printf("\nArgument  = 0x%I64X",64ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__712);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = zext i32 %%x to i64, !dbg !18 for 0x%I64xth hint within @aesl_internal_sub_word  --> \n", ++aesl_llvm_cbe_2129_count);
  llvm_cbe_tmp__713 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_x&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__713);
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds [8 x i64]* %%q, i64 0, i64 0, !dbg !18 for 0x%I64xth hint within @aesl_internal_sub_word  --> \n", ++aesl_llvm_cbe_2130_count);
  llvm_cbe_tmp__714 = (signed long long *)(&llvm_cbe_q[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 8 && "Write access out of array 'q' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%3, i64* %%4, align 16, !dbg !18 for 0x%I64xth hint within @aesl_internal_sub_word  --> \n", ++aesl_llvm_cbe_2131_count);
  *llvm_cbe_tmp__714 = llvm_cbe_tmp__713;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__713);
if (AESL_DEBUG_TRACE)
printf("\n  call fastcc void @aesl_internal_br_aes_ct64_ortho(i64* %%4), !dbg !19 for 0x%I64xth hint within @aesl_internal_sub_word  --> \n", ++aesl_llvm_cbe_2132_count);
  aesl_internal_br_aes_ct64_ortho((signed long long *)llvm_cbe_tmp__714);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call fastcc void @aesl_internal_br_aes_ct64_bitslice_Sbox(i64* %%4), !dbg !19 for 0x%I64xth hint within @aesl_internal_sub_word  --> \n", ++aesl_llvm_cbe_2133_count);
  aesl_internal_br_aes_ct64_bitslice_Sbox((signed long long *)llvm_cbe_tmp__714);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call fastcc void @aesl_internal_br_aes_ct64_ortho(i64* %%4), !dbg !19 for 0x%I64xth hint within @aesl_internal_sub_word  --> \n", ++aesl_llvm_cbe_2134_count);
  aesl_internal_br_aes_ct64_ortho((signed long long *)llvm_cbe_tmp__714);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'q' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = load i64* %%4, align 16, !dbg !19 for 0x%I64xth hint within @aesl_internal_sub_word  --> \n", ++aesl_llvm_cbe_2135_count);
  llvm_cbe_tmp__715 = (unsigned long long )*llvm_cbe_tmp__714;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__715);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = trunc i64 %%5 to i32, !dbg !19 for 0x%I64xth hint within @aesl_internal_sub_word  --> \n", ++aesl_llvm_cbe_2136_count);
  llvm_cbe_tmp__716 = (unsigned int )((unsigned int )llvm_cbe_tmp__715&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__716);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @aesl_internal_sub_word}\n");
  return llvm_cbe_tmp__716;
}

