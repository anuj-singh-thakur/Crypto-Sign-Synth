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
typedef struct l_struct_OC_poly l_struct_OC_poly;
typedef struct l_struct_OC_keccak_state l_struct_OC_keccak_state;

/* Structure contents */
struct l_struct_OC_poly {
  signed int field0[256];
};

struct l_struct_OC_keccak_state {
  signed long long field0[25];
  unsigned int field1;
};


/* Function Declarations */
double fmod(double, double);
float fmodf(float, float);
long double fmodl(long double, long double);
void pqcrystals_dilithium2_ref_poly_reduce(l_struct_OC_poly *llvm_cbe_a);
signed int pqcrystals_dilithium2_ref_reduce32(signed int );
void pqcrystals_dilithium2_ref_poly_caddq(l_struct_OC_poly *llvm_cbe_a);
signed int pqcrystals_dilithium2_ref_caddq(signed int );
void pqcrystals_dilithium2_ref_poly_freeze(l_struct_OC_poly *llvm_cbe_a);
signed int pqcrystals_dilithium2_ref_freeze(signed int );
void pqcrystals_dilithium2_ref_poly_add(l_struct_OC_poly *llvm_cbe_c, l_struct_OC_poly *llvm_cbe_a, l_struct_OC_poly *llvm_cbe_b);
void pqcrystals_dilithium2_ref_poly_sub(l_struct_OC_poly *llvm_cbe_c, l_struct_OC_poly *llvm_cbe_a, l_struct_OC_poly *llvm_cbe_b);
void pqcrystals_dilithium2_ref_poly_shiftl(l_struct_OC_poly *llvm_cbe_a);
void pqcrystals_dilithium2_ref_poly_ntt(l_struct_OC_poly *llvm_cbe_a);
void pqcrystals_dilithium2_ref_ntt(signed int *);
void pqcrystals_dilithium2_ref_poly_invntt_tomont(l_struct_OC_poly *llvm_cbe_a);
void pqcrystals_dilithium2_ref_invntt_tomont(signed int *);
void pqcrystals_dilithium2_ref_poly_pointwise_montgomery(l_struct_OC_poly *llvm_cbe_c, l_struct_OC_poly *llvm_cbe_a, l_struct_OC_poly *llvm_cbe_b);
signed int pqcrystals_dilithium2_ref_montgomery_reduce(signed long long );
void pqcrystals_dilithium2_ref_poly_power2round(l_struct_OC_poly *llvm_cbe_a1, l_struct_OC_poly *llvm_cbe_a0, l_struct_OC_poly *llvm_cbe_a);
signed int pqcrystals_dilithium2_ref_power2round(signed int *, signed int );
void pqcrystals_dilithium2_ref_poly_decompose(l_struct_OC_poly *llvm_cbe_a1, l_struct_OC_poly *llvm_cbe_a0, l_struct_OC_poly *llvm_cbe_a);
signed int pqcrystals_dilithium2_ref_decompose(signed int *, signed int );
signed int pqcrystals_dilithium2_ref_poly_make_hint(l_struct_OC_poly *llvm_cbe_h, l_struct_OC_poly *llvm_cbe_a0, l_struct_OC_poly *llvm_cbe_a1);
signed int pqcrystals_dilithium2_ref_make_hint(signed int , signed int );
void pqcrystals_dilithium2_ref_poly_use_hint(l_struct_OC_poly *llvm_cbe_b, l_struct_OC_poly *llvm_cbe_a, l_struct_OC_poly *llvm_cbe_h);
signed int pqcrystals_dilithium2_ref_use_hint(signed int , signed int );
signed int pqcrystals_dilithium2_ref_poly_chknorm(l_struct_OC_poly *llvm_cbe_a, signed int llvm_cbe_B);
void pqcrystals_dilithium2_ref_poly_uniform(l_struct_OC_poly *llvm_cbe_a,  char *llvm_cbe_seed, signed short llvm_cbe_nonce);
void pqcrystals_dilithium2_ref_dilithium_shake128_stream_init(l_struct_OC_keccak_state *,  char *, signed short );
void shake128_squeezeblocks( char *, signed long long , l_struct_OC_keccak_state *);
static signed int aesl_internal_rej_uniform(signed int *llvm_cbe_a, signed int llvm_cbe_len,  char *llvm_cbe_buf, signed int llvm_cbe_buflen);
void pqcrystals_dilithium2_ref_poly_uniform_eta(l_struct_OC_poly *llvm_cbe_a,  char *llvm_cbe_seed, signed short llvm_cbe_nonce);
static signed int aesl_internal_rej_eta(signed int *llvm_cbe_a, signed int llvm_cbe_len,  char *llvm_cbe_buf, signed int llvm_cbe_buflen);
void pqcrystals_dilithium2_ref_poly_uniform_gamma1(l_struct_OC_poly *llvm_cbe_a,  char *llvm_cbe_seed, signed short llvm_cbe_nonce);
void pqcrystals_dilithium2_ref_dilithium_shake256_stream_init(l_struct_OC_keccak_state *,  char *, signed short );
void shake256_squeezeblocks( char *, signed long long , l_struct_OC_keccak_state *);
void pqcrystals_dilithium2_ref_polyz_unpack(l_struct_OC_poly *llvm_cbe_r,  char *llvm_cbe_a);
void pqcrystals_dilithium2_ref_poly_challenge(l_struct_OC_poly *llvm_cbe_c,  char *llvm_cbe_seed);
void shake256_init(l_struct_OC_keccak_state *);
void shake256_absorb(l_struct_OC_keccak_state *,  char *, signed long long );
void shake256_finalize(l_struct_OC_keccak_state *);
void pqcrystals_dilithium2_ref_polyeta_pack( char *llvm_cbe_r, l_struct_OC_poly *llvm_cbe_a);
void pqcrystals_dilithium2_ref_polyeta_unpack(l_struct_OC_poly *llvm_cbe_r,  char *llvm_cbe_a);
void pqcrystals_dilithium2_ref_polyt1_pack( char *llvm_cbe_r, l_struct_OC_poly *llvm_cbe_a);
void pqcrystals_dilithium2_ref_polyt1_unpack(l_struct_OC_poly *llvm_cbe_r,  char *llvm_cbe_a);
void pqcrystals_dilithium2_ref_polyt0_pack( char *llvm_cbe_r, l_struct_OC_poly *llvm_cbe_a);
void pqcrystals_dilithium2_ref_polyt0_unpack(l_struct_OC_poly *llvm_cbe_r,  char *llvm_cbe_a);
void pqcrystals_dilithium2_ref_polyz_pack( char *llvm_cbe_r, l_struct_OC_poly *llvm_cbe_a);
void pqcrystals_dilithium2_ref_polyw1_pack( char *llvm_cbe_r, l_struct_OC_poly *llvm_cbe_a);


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

void pqcrystals_dilithium2_ref_poly_reduce(l_struct_OC_poly *llvm_cbe_a) {
  static  unsigned long long aesl_llvm_cbe_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_3_count = 0;
  static  unsigned long long aesl_llvm_cbe_4_count = 0;
  static  unsigned long long aesl_llvm_cbe_5_count = 0;
  static  unsigned long long aesl_llvm_cbe_6_count = 0;
  static  unsigned long long aesl_llvm_cbe_7_count = 0;
  static  unsigned long long aesl_llvm_cbe_8_count = 0;
  static  unsigned long long aesl_llvm_cbe_9_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  unsigned int llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_10_count = 0;
  unsigned long long llvm_cbe_tmp__1;
  static  unsigned long long aesl_llvm_cbe_11_count = 0;
  signed int *llvm_cbe_tmp__2;
  static  unsigned long long aesl_llvm_cbe_12_count = 0;
  unsigned int llvm_cbe_tmp__3;
  static  unsigned long long aesl_llvm_cbe_13_count = 0;
  unsigned int llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_14_count = 0;
  static  unsigned long long aesl_llvm_cbe_15_count = 0;
  unsigned int llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_16_count = 0;
  static  unsigned long long aesl_llvm_cbe_17_count = 0;
  static  unsigned long long aesl_llvm_cbe_18_count = 0;
  static  unsigned long long aesl_llvm_cbe_19_count = 0;
  static  unsigned long long aesl_llvm_cbe_20_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_21_count = 0;
  static  unsigned long long aesl_llvm_cbe_22_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_poly_reduce\n");
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__6;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__6:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i32 [ 0, %%0 ], [ %%6, %%1  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_reduce  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__5);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = zext i32 %%storemerge1 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_reduce  --> \n", ++aesl_llvm_cbe_10_count);
  llvm_cbe_tmp__1 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge1&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__1);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%2, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_reduce  --> \n", ++aesl_llvm_cbe_11_count);
  llvm_cbe_tmp__2 = (signed int *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__1))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__1));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = load i32* %%3, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_reduce  --> \n", ++aesl_llvm_cbe_12_count);
  llvm_cbe_tmp__3 = (unsigned int )*llvm_cbe_tmp__2;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__3);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = tail call i32 @pqcrystals_dilithium2_ref_reduce32(i32 %%4) nounwind, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_reduce  --> \n", ++aesl_llvm_cbe_13_count);
  llvm_cbe_tmp__4 = (unsigned int ) /*tail*/ pqcrystals_dilithium2_ref_reduce32(llvm_cbe_tmp__3);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__3);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__4);
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%5, i32* %%3, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_reduce  --> \n", ++aesl_llvm_cbe_14_count);
  *llvm_cbe_tmp__2 = llvm_cbe_tmp__4;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__4);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = add i32 %%storemerge1, 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_reduce  --> \n", ++aesl_llvm_cbe_15_count);
  llvm_cbe_tmp__5 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__5&4294967295ull)));
  if (((llvm_cbe_tmp__5&4294967295U) == (256u&4294967295U))) {
    goto llvm_cbe_tmp__7;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__5;   /* for PHI node */
    goto llvm_cbe_tmp__6;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__7:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_poly_reduce}\n");
  return;
}


void pqcrystals_dilithium2_ref_poly_caddq(l_struct_OC_poly *llvm_cbe_a) {
  static  unsigned long long aesl_llvm_cbe_23_count = 0;
  static  unsigned long long aesl_llvm_cbe_24_count = 0;
  static  unsigned long long aesl_llvm_cbe_25_count = 0;
  static  unsigned long long aesl_llvm_cbe_26_count = 0;
  static  unsigned long long aesl_llvm_cbe_27_count = 0;
  static  unsigned long long aesl_llvm_cbe_28_count = 0;
  static  unsigned long long aesl_llvm_cbe_29_count = 0;
  static  unsigned long long aesl_llvm_cbe_30_count = 0;
  static  unsigned long long aesl_llvm_cbe_31_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  unsigned int llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_32_count = 0;
  unsigned long long llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_33_count = 0;
  signed int *llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_34_count = 0;
  unsigned int llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_35_count = 0;
  unsigned int llvm_cbe_tmp__11;
  static  unsigned long long aesl_llvm_cbe_36_count = 0;
  static  unsigned long long aesl_llvm_cbe_37_count = 0;
  unsigned int llvm_cbe_tmp__12;
  static  unsigned long long aesl_llvm_cbe_38_count = 0;
  static  unsigned long long aesl_llvm_cbe_39_count = 0;
  static  unsigned long long aesl_llvm_cbe_40_count = 0;
  static  unsigned long long aesl_llvm_cbe_41_count = 0;
  static  unsigned long long aesl_llvm_cbe_42_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_43_count = 0;
  static  unsigned long long aesl_llvm_cbe_44_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_poly_caddq\n");
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__13;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__13:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i32 [ 0, %%0 ], [ %%6, %%1  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_caddq  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__12);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = zext i32 %%storemerge1 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_caddq  --> \n", ++aesl_llvm_cbe_32_count);
  llvm_cbe_tmp__8 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge1&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__8);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%2, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_caddq  --> \n", ++aesl_llvm_cbe_33_count);
  llvm_cbe_tmp__9 = (signed int *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__8))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = load i32* %%3, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_caddq  --> \n", ++aesl_llvm_cbe_34_count);
  llvm_cbe_tmp__10 = (unsigned int )*llvm_cbe_tmp__9;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__10);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = tail call i32 @pqcrystals_dilithium2_ref_caddq(i32 %%4) nounwind, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_caddq  --> \n", ++aesl_llvm_cbe_35_count);
  llvm_cbe_tmp__11 = (unsigned int ) /*tail*/ pqcrystals_dilithium2_ref_caddq(llvm_cbe_tmp__10);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__10);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__11);
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%5, i32* %%3, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_caddq  --> \n", ++aesl_llvm_cbe_36_count);
  *llvm_cbe_tmp__9 = llvm_cbe_tmp__11;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__11);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = add i32 %%storemerge1, 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_caddq  --> \n", ++aesl_llvm_cbe_37_count);
  llvm_cbe_tmp__12 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__12&4294967295ull)));
  if (((llvm_cbe_tmp__12&4294967295U) == (256u&4294967295U))) {
    goto llvm_cbe_tmp__14;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__12;   /* for PHI node */
    goto llvm_cbe_tmp__13;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__14:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_poly_caddq}\n");
  return;
}


void pqcrystals_dilithium2_ref_poly_freeze(l_struct_OC_poly *llvm_cbe_a) {
  static  unsigned long long aesl_llvm_cbe_45_count = 0;
  static  unsigned long long aesl_llvm_cbe_46_count = 0;
  static  unsigned long long aesl_llvm_cbe_47_count = 0;
  static  unsigned long long aesl_llvm_cbe_48_count = 0;
  static  unsigned long long aesl_llvm_cbe_49_count = 0;
  static  unsigned long long aesl_llvm_cbe_50_count = 0;
  static  unsigned long long aesl_llvm_cbe_51_count = 0;
  static  unsigned long long aesl_llvm_cbe_52_count = 0;
  static  unsigned long long aesl_llvm_cbe_53_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  unsigned int llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_54_count = 0;
  unsigned long long llvm_cbe_tmp__15;
  static  unsigned long long aesl_llvm_cbe_55_count = 0;
  signed int *llvm_cbe_tmp__16;
  static  unsigned long long aesl_llvm_cbe_56_count = 0;
  unsigned int llvm_cbe_tmp__17;
  static  unsigned long long aesl_llvm_cbe_57_count = 0;
  unsigned int llvm_cbe_tmp__18;
  static  unsigned long long aesl_llvm_cbe_58_count = 0;
  static  unsigned long long aesl_llvm_cbe_59_count = 0;
  unsigned int llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_60_count = 0;
  static  unsigned long long aesl_llvm_cbe_61_count = 0;
  static  unsigned long long aesl_llvm_cbe_62_count = 0;
  static  unsigned long long aesl_llvm_cbe_63_count = 0;
  static  unsigned long long aesl_llvm_cbe_64_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_65_count = 0;
  static  unsigned long long aesl_llvm_cbe_66_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_poly_freeze\n");
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__20;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__20:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i32 [ 0, %%0 ], [ %%6, %%1  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_freeze  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__19);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = zext i32 %%storemerge1 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_freeze  --> \n", ++aesl_llvm_cbe_54_count);
  llvm_cbe_tmp__15 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge1&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__15);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%2, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_freeze  --> \n", ++aesl_llvm_cbe_55_count);
  llvm_cbe_tmp__16 = (signed int *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__15))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__15));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = load i32* %%3, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_freeze  --> \n", ++aesl_llvm_cbe_56_count);
  llvm_cbe_tmp__17 = (unsigned int )*llvm_cbe_tmp__16;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__17);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = tail call i32 @pqcrystals_dilithium2_ref_freeze(i32 %%4) nounwind, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_freeze  --> \n", ++aesl_llvm_cbe_57_count);
  llvm_cbe_tmp__18 = (unsigned int ) /*tail*/ pqcrystals_dilithium2_ref_freeze(llvm_cbe_tmp__17);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__17);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__18);
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%5, i32* %%3, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_freeze  --> \n", ++aesl_llvm_cbe_58_count);
  *llvm_cbe_tmp__16 = llvm_cbe_tmp__18;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__18);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = add i32 %%storemerge1, 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_freeze  --> \n", ++aesl_llvm_cbe_59_count);
  llvm_cbe_tmp__19 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__19&4294967295ull)));
  if (((llvm_cbe_tmp__19&4294967295U) == (256u&4294967295U))) {
    goto llvm_cbe_tmp__21;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__19;   /* for PHI node */
    goto llvm_cbe_tmp__20;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__21:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_poly_freeze}\n");
  return;
}


void pqcrystals_dilithium2_ref_poly_add(l_struct_OC_poly *llvm_cbe_c, l_struct_OC_poly *llvm_cbe_a, l_struct_OC_poly *llvm_cbe_b) {
  static  unsigned long long aesl_llvm_cbe_67_count = 0;
  static  unsigned long long aesl_llvm_cbe_68_count = 0;
  static  unsigned long long aesl_llvm_cbe_69_count = 0;
  static  unsigned long long aesl_llvm_cbe_70_count = 0;
  static  unsigned long long aesl_llvm_cbe_71_count = 0;
  static  unsigned long long aesl_llvm_cbe_72_count = 0;
  static  unsigned long long aesl_llvm_cbe_73_count = 0;
  static  unsigned long long aesl_llvm_cbe_74_count = 0;
  static  unsigned long long aesl_llvm_cbe_75_count = 0;
  static  unsigned long long aesl_llvm_cbe_76_count = 0;
  static  unsigned long long aesl_llvm_cbe_77_count = 0;
  static  unsigned long long aesl_llvm_cbe_78_count = 0;
  static  unsigned long long aesl_llvm_cbe_79_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  unsigned int llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_80_count = 0;
  unsigned long long llvm_cbe_tmp__22;
  static  unsigned long long aesl_llvm_cbe_81_count = 0;
  signed int *llvm_cbe_tmp__23;
  static  unsigned long long aesl_llvm_cbe_82_count = 0;
  unsigned int llvm_cbe_tmp__24;
  static  unsigned long long aesl_llvm_cbe_83_count = 0;
  signed int *llvm_cbe_tmp__25;
  static  unsigned long long aesl_llvm_cbe_84_count = 0;
  unsigned int llvm_cbe_tmp__26;
  static  unsigned long long aesl_llvm_cbe_85_count = 0;
  unsigned int llvm_cbe_tmp__27;
  static  unsigned long long aesl_llvm_cbe_86_count = 0;
  signed int *llvm_cbe_tmp__28;
  static  unsigned long long aesl_llvm_cbe_87_count = 0;
  static  unsigned long long aesl_llvm_cbe_88_count = 0;
  unsigned int llvm_cbe_tmp__29;
  static  unsigned long long aesl_llvm_cbe_89_count = 0;
  static  unsigned long long aesl_llvm_cbe_90_count = 0;
  static  unsigned long long aesl_llvm_cbe_91_count = 0;
  static  unsigned long long aesl_llvm_cbe_92_count = 0;
  static  unsigned long long aesl_llvm_cbe_93_count = 0;
  static  unsigned long long aesl_llvm_cbe_94_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_95_count = 0;
  static  unsigned long long aesl_llvm_cbe_96_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_poly_add\n");
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__30;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__30:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i32 [ 0, %%0 ], [ %%9, %%1  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_add  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__29);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = zext i32 %%storemerge1 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_add  --> \n", ++aesl_llvm_cbe_80_count);
  llvm_cbe_tmp__22 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge1&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__22);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%2, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_add  --> \n", ++aesl_llvm_cbe_81_count);
  llvm_cbe_tmp__23 = (signed int *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__22))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__22));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = load i32* %%3, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_add  --> \n", ++aesl_llvm_cbe_82_count);
  llvm_cbe_tmp__24 = (unsigned int )*llvm_cbe_tmp__23;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__24);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds %%struct.poly* %%b, i64 0, i32 0, i64 %%2, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_add  --> \n", ++aesl_llvm_cbe_83_count);
  llvm_cbe_tmp__25 = (signed int *)(&llvm_cbe_b->field0[(((signed long long )llvm_cbe_tmp__22))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__22));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = load i32* %%5, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_add  --> \n", ++aesl_llvm_cbe_84_count);
  llvm_cbe_tmp__26 = (unsigned int )*llvm_cbe_tmp__25;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__26);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = add nsw i32 %%6, %%4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_add  --> \n", ++aesl_llvm_cbe_85_count);
  llvm_cbe_tmp__27 = (unsigned int )((unsigned int )(llvm_cbe_tmp__26&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__24&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__27&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds %%struct.poly* %%c, i64 0, i32 0, i64 %%2, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_add  --> \n", ++aesl_llvm_cbe_86_count);
  llvm_cbe_tmp__28 = (signed int *)(&llvm_cbe_c->field0[(((signed long long )llvm_cbe_tmp__22))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__22));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%7, i32* %%8, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_add  --> \n", ++aesl_llvm_cbe_87_count);
  *llvm_cbe_tmp__28 = llvm_cbe_tmp__27;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__27);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = add i32 %%storemerge1, 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_add  --> \n", ++aesl_llvm_cbe_88_count);
  llvm_cbe_tmp__29 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__29&4294967295ull)));
  if (((llvm_cbe_tmp__29&4294967295U) == (256u&4294967295U))) {
    goto llvm_cbe_tmp__31;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__29;   /* for PHI node */
    goto llvm_cbe_tmp__30;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__31:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_poly_add}\n");
  return;
}


void pqcrystals_dilithium2_ref_poly_sub(l_struct_OC_poly *llvm_cbe_c, l_struct_OC_poly *llvm_cbe_a, l_struct_OC_poly *llvm_cbe_b) {
  static  unsigned long long aesl_llvm_cbe_97_count = 0;
  static  unsigned long long aesl_llvm_cbe_98_count = 0;
  static  unsigned long long aesl_llvm_cbe_99_count = 0;
  static  unsigned long long aesl_llvm_cbe_100_count = 0;
  static  unsigned long long aesl_llvm_cbe_101_count = 0;
  static  unsigned long long aesl_llvm_cbe_102_count = 0;
  static  unsigned long long aesl_llvm_cbe_103_count = 0;
  static  unsigned long long aesl_llvm_cbe_104_count = 0;
  static  unsigned long long aesl_llvm_cbe_105_count = 0;
  static  unsigned long long aesl_llvm_cbe_106_count = 0;
  static  unsigned long long aesl_llvm_cbe_107_count = 0;
  static  unsigned long long aesl_llvm_cbe_108_count = 0;
  static  unsigned long long aesl_llvm_cbe_109_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  unsigned int llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_110_count = 0;
  unsigned long long llvm_cbe_tmp__32;
  static  unsigned long long aesl_llvm_cbe_111_count = 0;
  signed int *llvm_cbe_tmp__33;
  static  unsigned long long aesl_llvm_cbe_112_count = 0;
  unsigned int llvm_cbe_tmp__34;
  static  unsigned long long aesl_llvm_cbe_113_count = 0;
  signed int *llvm_cbe_tmp__35;
  static  unsigned long long aesl_llvm_cbe_114_count = 0;
  unsigned int llvm_cbe_tmp__36;
  static  unsigned long long aesl_llvm_cbe_115_count = 0;
  unsigned int llvm_cbe_tmp__37;
  static  unsigned long long aesl_llvm_cbe_116_count = 0;
  signed int *llvm_cbe_tmp__38;
  static  unsigned long long aesl_llvm_cbe_117_count = 0;
  static  unsigned long long aesl_llvm_cbe_118_count = 0;
  unsigned int llvm_cbe_tmp__39;
  static  unsigned long long aesl_llvm_cbe_119_count = 0;
  static  unsigned long long aesl_llvm_cbe_120_count = 0;
  static  unsigned long long aesl_llvm_cbe_121_count = 0;
  static  unsigned long long aesl_llvm_cbe_122_count = 0;
  static  unsigned long long aesl_llvm_cbe_123_count = 0;
  static  unsigned long long aesl_llvm_cbe_124_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_125_count = 0;
  static  unsigned long long aesl_llvm_cbe_126_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_poly_sub\n");
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__40;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__40:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i32 [ 0, %%0 ], [ %%9, %%1  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_sub  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__39);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = zext i32 %%storemerge1 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_sub  --> \n", ++aesl_llvm_cbe_110_count);
  llvm_cbe_tmp__32 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge1&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__32);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%2, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_sub  --> \n", ++aesl_llvm_cbe_111_count);
  llvm_cbe_tmp__33 = (signed int *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__32))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__32));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = load i32* %%3, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_sub  --> \n", ++aesl_llvm_cbe_112_count);
  llvm_cbe_tmp__34 = (unsigned int )*llvm_cbe_tmp__33;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__34);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds %%struct.poly* %%b, i64 0, i32 0, i64 %%2, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_sub  --> \n", ++aesl_llvm_cbe_113_count);
  llvm_cbe_tmp__35 = (signed int *)(&llvm_cbe_b->field0[(((signed long long )llvm_cbe_tmp__32))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__32));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = load i32* %%5, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_sub  --> \n", ++aesl_llvm_cbe_114_count);
  llvm_cbe_tmp__36 = (unsigned int )*llvm_cbe_tmp__35;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__36);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = sub nsw i32 %%4, %%6, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_sub  --> \n", ++aesl_llvm_cbe_115_count);
  llvm_cbe_tmp__37 = (unsigned int )((unsigned int )(llvm_cbe_tmp__34&4294967295ull)) - ((unsigned int )(llvm_cbe_tmp__36&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__37&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds %%struct.poly* %%c, i64 0, i32 0, i64 %%2, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_sub  --> \n", ++aesl_llvm_cbe_116_count);
  llvm_cbe_tmp__38 = (signed int *)(&llvm_cbe_c->field0[(((signed long long )llvm_cbe_tmp__32))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__32));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%7, i32* %%8, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_sub  --> \n", ++aesl_llvm_cbe_117_count);
  *llvm_cbe_tmp__38 = llvm_cbe_tmp__37;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__37);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = add i32 %%storemerge1, 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_sub  --> \n", ++aesl_llvm_cbe_118_count);
  llvm_cbe_tmp__39 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__39&4294967295ull)));
  if (((llvm_cbe_tmp__39&4294967295U) == (256u&4294967295U))) {
    goto llvm_cbe_tmp__41;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__39;   /* for PHI node */
    goto llvm_cbe_tmp__40;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__41:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_poly_sub}\n");
  return;
}


void pqcrystals_dilithium2_ref_poly_shiftl(l_struct_OC_poly *llvm_cbe_a) {
  static  unsigned long long aesl_llvm_cbe_127_count = 0;
  static  unsigned long long aesl_llvm_cbe_128_count = 0;
  static  unsigned long long aesl_llvm_cbe_129_count = 0;
  static  unsigned long long aesl_llvm_cbe_130_count = 0;
  static  unsigned long long aesl_llvm_cbe_131_count = 0;
  static  unsigned long long aesl_llvm_cbe_132_count = 0;
  static  unsigned long long aesl_llvm_cbe_133_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  unsigned int llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_134_count = 0;
  unsigned long long llvm_cbe_tmp__42;
  static  unsigned long long aesl_llvm_cbe_135_count = 0;
  signed int *llvm_cbe_tmp__43;
  static  unsigned long long aesl_llvm_cbe_136_count = 0;
  unsigned int llvm_cbe_tmp__44;
  static  unsigned long long aesl_llvm_cbe_137_count = 0;
  unsigned int llvm_cbe_tmp__45;
  static  unsigned long long aesl_llvm_cbe_138_count = 0;
  static  unsigned long long aesl_llvm_cbe_139_count = 0;
  unsigned int llvm_cbe_tmp__46;
  static  unsigned long long aesl_llvm_cbe_140_count = 0;
  static  unsigned long long aesl_llvm_cbe_141_count = 0;
  static  unsigned long long aesl_llvm_cbe_142_count = 0;
  static  unsigned long long aesl_llvm_cbe_143_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_144_count = 0;
  static  unsigned long long aesl_llvm_cbe_145_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_poly_shiftl\n");
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__47;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__47:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i32 [ 0, %%0 ], [ %%6, %%1  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_shiftl  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__46);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = zext i32 %%storemerge1 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_shiftl  --> \n", ++aesl_llvm_cbe_134_count);
  llvm_cbe_tmp__42 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge1&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__42);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%2, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_shiftl  --> \n", ++aesl_llvm_cbe_135_count);
  llvm_cbe_tmp__43 = (signed int *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__42))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__42));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = load i32* %%3, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_shiftl  --> \n", ++aesl_llvm_cbe_136_count);
  llvm_cbe_tmp__44 = (unsigned int )*llvm_cbe_tmp__43;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__44);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = shl i32 %%4, 13, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_shiftl  --> \n", ++aesl_llvm_cbe_137_count);
  llvm_cbe_tmp__45 = (unsigned int )llvm_cbe_tmp__44 << 13u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__45);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%5, i32* %%3, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_shiftl  --> \n", ++aesl_llvm_cbe_138_count);
  *llvm_cbe_tmp__43 = llvm_cbe_tmp__45;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__45);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = add i32 %%storemerge1, 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_shiftl  --> \n", ++aesl_llvm_cbe_139_count);
  llvm_cbe_tmp__46 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__46&4294967295ull)));
  if (((llvm_cbe_tmp__46&4294967295U) == (256u&4294967295U))) {
    goto llvm_cbe_tmp__48;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__46;   /* for PHI node */
    goto llvm_cbe_tmp__47;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__48:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_poly_shiftl}\n");
  return;
}


void pqcrystals_dilithium2_ref_poly_ntt(l_struct_OC_poly *llvm_cbe_a) {
  static  unsigned long long aesl_llvm_cbe_146_count = 0;
  static  unsigned long long aesl_llvm_cbe_147_count = 0;
  static  unsigned long long aesl_llvm_cbe_148_count = 0;
  signed int *llvm_cbe_tmp__49;
  static  unsigned long long aesl_llvm_cbe_149_count = 0;
  static  unsigned long long aesl_llvm_cbe_150_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_poly_ntt\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 0, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_ntt  --> \n", ++aesl_llvm_cbe_148_count);
  llvm_cbe_tmp__49 = (signed int *)(&llvm_cbe_a->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_ntt(i32* %%1) nounwind, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_ntt  --> \n", ++aesl_llvm_cbe_149_count);
   /*tail*/ pqcrystals_dilithium2_ref_ntt((signed int *)llvm_cbe_tmp__49);
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_poly_ntt}\n");
  return;
}


void pqcrystals_dilithium2_ref_poly_invntt_tomont(l_struct_OC_poly *llvm_cbe_a) {
  static  unsigned long long aesl_llvm_cbe_151_count = 0;
  static  unsigned long long aesl_llvm_cbe_152_count = 0;
  static  unsigned long long aesl_llvm_cbe_153_count = 0;
  signed int *llvm_cbe_tmp__50;
  static  unsigned long long aesl_llvm_cbe_154_count = 0;
  static  unsigned long long aesl_llvm_cbe_155_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_poly_invntt_tomont\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 0, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_invntt_tomont  --> \n", ++aesl_llvm_cbe_153_count);
  llvm_cbe_tmp__50 = (signed int *)(&llvm_cbe_a->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_invntt_tomont(i32* %%1) nounwind, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_invntt_tomont  --> \n", ++aesl_llvm_cbe_154_count);
   /*tail*/ pqcrystals_dilithium2_ref_invntt_tomont((signed int *)llvm_cbe_tmp__50);
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_poly_invntt_tomont}\n");
  return;
}


void pqcrystals_dilithium2_ref_poly_pointwise_montgomery(l_struct_OC_poly *llvm_cbe_c, l_struct_OC_poly *llvm_cbe_a, l_struct_OC_poly *llvm_cbe_b) {
  static  unsigned long long aesl_llvm_cbe_156_count = 0;
  static  unsigned long long aesl_llvm_cbe_157_count = 0;
  static  unsigned long long aesl_llvm_cbe_158_count = 0;
  static  unsigned long long aesl_llvm_cbe_159_count = 0;
  static  unsigned long long aesl_llvm_cbe_160_count = 0;
  static  unsigned long long aesl_llvm_cbe_161_count = 0;
  static  unsigned long long aesl_llvm_cbe_162_count = 0;
  static  unsigned long long aesl_llvm_cbe_163_count = 0;
  static  unsigned long long aesl_llvm_cbe_164_count = 0;
  static  unsigned long long aesl_llvm_cbe_165_count = 0;
  static  unsigned long long aesl_llvm_cbe_166_count = 0;
  static  unsigned long long aesl_llvm_cbe_167_count = 0;
  static  unsigned long long aesl_llvm_cbe_168_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  unsigned int llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_169_count = 0;
  unsigned long long llvm_cbe_tmp__51;
  static  unsigned long long aesl_llvm_cbe_170_count = 0;
  signed int *llvm_cbe_tmp__52;
  static  unsigned long long aesl_llvm_cbe_171_count = 0;
  unsigned int llvm_cbe_tmp__53;
  static  unsigned long long aesl_llvm_cbe_172_count = 0;
  unsigned long long llvm_cbe_tmp__54;
  static  unsigned long long aesl_llvm_cbe_173_count = 0;
  signed int *llvm_cbe_tmp__55;
  static  unsigned long long aesl_llvm_cbe_174_count = 0;
  unsigned int llvm_cbe_tmp__56;
  static  unsigned long long aesl_llvm_cbe_175_count = 0;
  unsigned long long llvm_cbe_tmp__57;
  static  unsigned long long aesl_llvm_cbe_176_count = 0;
  unsigned long long llvm_cbe_tmp__58;
  static  unsigned long long aesl_llvm_cbe_177_count = 0;
  unsigned int llvm_cbe_tmp__59;
  static  unsigned long long aesl_llvm_cbe_178_count = 0;
  signed int *llvm_cbe_tmp__60;
  static  unsigned long long aesl_llvm_cbe_179_count = 0;
  static  unsigned long long aesl_llvm_cbe_180_count = 0;
  unsigned int llvm_cbe_tmp__61;
  static  unsigned long long aesl_llvm_cbe_181_count = 0;
  static  unsigned long long aesl_llvm_cbe_182_count = 0;
  static  unsigned long long aesl_llvm_cbe_183_count = 0;
  static  unsigned long long aesl_llvm_cbe_184_count = 0;
  static  unsigned long long aesl_llvm_cbe_185_count = 0;
  static  unsigned long long aesl_llvm_cbe_186_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_187_count = 0;
  static  unsigned long long aesl_llvm_cbe_188_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_poly_pointwise_montgomery\n");
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__62;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__62:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i32 [ 0, %%0 ], [ %%12, %%1  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_pointwise_montgomery  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__61);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = zext i32 %%storemerge1 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_pointwise_montgomery  --> \n", ++aesl_llvm_cbe_169_count);
  llvm_cbe_tmp__51 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge1&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__51);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%2, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_pointwise_montgomery  --> \n", ++aesl_llvm_cbe_170_count);
  llvm_cbe_tmp__52 = (signed int *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__51))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__51));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = load i32* %%3, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_pointwise_montgomery  --> \n", ++aesl_llvm_cbe_171_count);
  llvm_cbe_tmp__53 = (unsigned int )*llvm_cbe_tmp__52;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__53);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = sext i32 %%4 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_pointwise_montgomery  --> \n", ++aesl_llvm_cbe_172_count);
  llvm_cbe_tmp__54 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__53);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__54);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds %%struct.poly* %%b, i64 0, i32 0, i64 %%2, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_pointwise_montgomery  --> \n", ++aesl_llvm_cbe_173_count);
  llvm_cbe_tmp__55 = (signed int *)(&llvm_cbe_b->field0[(((signed long long )llvm_cbe_tmp__51))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__51));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = load i32* %%6, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_pointwise_montgomery  --> \n", ++aesl_llvm_cbe_174_count);
  llvm_cbe_tmp__56 = (unsigned int )*llvm_cbe_tmp__55;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__56);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = sext i32 %%7 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_pointwise_montgomery  --> \n", ++aesl_llvm_cbe_175_count);
  llvm_cbe_tmp__57 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__56);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__57);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = mul nsw i64 %%8, %%5, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_pointwise_montgomery  --> \n", ++aesl_llvm_cbe_176_count);
  llvm_cbe_tmp__58 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__57&18446744073709551615ull)) * ((unsigned long long )(llvm_cbe_tmp__54&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__58&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = tail call i32 @pqcrystals_dilithium2_ref_montgomery_reduce(i64 %%9) nounwind, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_pointwise_montgomery  --> \n", ++aesl_llvm_cbe_177_count);
  llvm_cbe_tmp__59 = (unsigned int ) /*tail*/ pqcrystals_dilithium2_ref_montgomery_reduce(llvm_cbe_tmp__58);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__58);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__59);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds %%struct.poly* %%c, i64 0, i32 0, i64 %%2, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_pointwise_montgomery  --> \n", ++aesl_llvm_cbe_178_count);
  llvm_cbe_tmp__60 = (signed int *)(&llvm_cbe_c->field0[(((signed long long )llvm_cbe_tmp__51))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__51));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%10, i32* %%11, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_pointwise_montgomery  --> \n", ++aesl_llvm_cbe_179_count);
  *llvm_cbe_tmp__60 = llvm_cbe_tmp__59;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__59);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = add i32 %%storemerge1, 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_pointwise_montgomery  --> \n", ++aesl_llvm_cbe_180_count);
  llvm_cbe_tmp__61 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__61&4294967295ull)));
  if (((llvm_cbe_tmp__61&4294967295U) == (256u&4294967295U))) {
    goto llvm_cbe_tmp__63;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__61;   /* for PHI node */
    goto llvm_cbe_tmp__62;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__63:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_poly_pointwise_montgomery}\n");
  return;
}


void pqcrystals_dilithium2_ref_poly_power2round(l_struct_OC_poly *llvm_cbe_a1, l_struct_OC_poly *llvm_cbe_a0, l_struct_OC_poly *llvm_cbe_a) {
  static  unsigned long long aesl_llvm_cbe_189_count = 0;
  static  unsigned long long aesl_llvm_cbe_190_count = 0;
  static  unsigned long long aesl_llvm_cbe_191_count = 0;
  static  unsigned long long aesl_llvm_cbe_192_count = 0;
  static  unsigned long long aesl_llvm_cbe_193_count = 0;
  static  unsigned long long aesl_llvm_cbe_194_count = 0;
  static  unsigned long long aesl_llvm_cbe_195_count = 0;
  static  unsigned long long aesl_llvm_cbe_196_count = 0;
  static  unsigned long long aesl_llvm_cbe_197_count = 0;
  static  unsigned long long aesl_llvm_cbe_198_count = 0;
  static  unsigned long long aesl_llvm_cbe_199_count = 0;
  static  unsigned long long aesl_llvm_cbe_200_count = 0;
  static  unsigned long long aesl_llvm_cbe_201_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  unsigned int llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_202_count = 0;
  unsigned long long llvm_cbe_tmp__64;
  static  unsigned long long aesl_llvm_cbe_203_count = 0;
  signed int *llvm_cbe_tmp__65;
  static  unsigned long long aesl_llvm_cbe_204_count = 0;
  signed int *llvm_cbe_tmp__66;
  static  unsigned long long aesl_llvm_cbe_205_count = 0;
  unsigned int llvm_cbe_tmp__67;
  static  unsigned long long aesl_llvm_cbe_206_count = 0;
  unsigned int llvm_cbe_tmp__68;
  static  unsigned long long aesl_llvm_cbe_207_count = 0;
  signed int *llvm_cbe_tmp__69;
  static  unsigned long long aesl_llvm_cbe_208_count = 0;
  static  unsigned long long aesl_llvm_cbe_209_count = 0;
  unsigned int llvm_cbe_tmp__70;
  static  unsigned long long aesl_llvm_cbe_210_count = 0;
  static  unsigned long long aesl_llvm_cbe_211_count = 0;
  static  unsigned long long aesl_llvm_cbe_212_count = 0;
  static  unsigned long long aesl_llvm_cbe_213_count = 0;
  static  unsigned long long aesl_llvm_cbe_214_count = 0;
  static  unsigned long long aesl_llvm_cbe_215_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_216_count = 0;
  static  unsigned long long aesl_llvm_cbe_217_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_poly_power2round\n");
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__71;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__71:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i32 [ 0, %%0 ], [ %%8, %%1  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_power2round  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__70);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = zext i32 %%storemerge1 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_power2round  --> \n", ++aesl_llvm_cbe_202_count);
  llvm_cbe_tmp__64 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge1&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__64);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.poly* %%a0, i64 0, i32 0, i64 %%2, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_power2round  --> \n", ++aesl_llvm_cbe_203_count);
  llvm_cbe_tmp__65 = (signed int *)(&llvm_cbe_a0->field0[(((signed long long )llvm_cbe_tmp__64))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__64));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%2, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_power2round  --> \n", ++aesl_llvm_cbe_204_count);
  llvm_cbe_tmp__66 = (signed int *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__64))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__64));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = load i32* %%4, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_power2round  --> \n", ++aesl_llvm_cbe_205_count);
  llvm_cbe_tmp__67 = (unsigned int )*llvm_cbe_tmp__66;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__67);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = tail call i32 @pqcrystals_dilithium2_ref_power2round(i32* %%3, i32 %%5) nounwind, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_power2round  --> \n", ++aesl_llvm_cbe_206_count);
  llvm_cbe_tmp__68 = (unsigned int ) /*tail*/ pqcrystals_dilithium2_ref_power2round((signed int *)llvm_cbe_tmp__65, llvm_cbe_tmp__67);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__67);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__68);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds %%struct.poly* %%a1, i64 0, i32 0, i64 %%2, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_power2round  --> \n", ++aesl_llvm_cbe_207_count);
  llvm_cbe_tmp__69 = (signed int *)(&llvm_cbe_a1->field0[(((signed long long )llvm_cbe_tmp__64))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__64));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%6, i32* %%7, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_power2round  --> \n", ++aesl_llvm_cbe_208_count);
  *llvm_cbe_tmp__69 = llvm_cbe_tmp__68;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__68);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = add i32 %%storemerge1, 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_power2round  --> \n", ++aesl_llvm_cbe_209_count);
  llvm_cbe_tmp__70 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__70&4294967295ull)));
  if (((llvm_cbe_tmp__70&4294967295U) == (256u&4294967295U))) {
    goto llvm_cbe_tmp__72;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__70;   /* for PHI node */
    goto llvm_cbe_tmp__71;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__72:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_poly_power2round}\n");
  return;
}


void pqcrystals_dilithium2_ref_poly_decompose(l_struct_OC_poly *llvm_cbe_a1, l_struct_OC_poly *llvm_cbe_a0, l_struct_OC_poly *llvm_cbe_a) {
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
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  unsigned int llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_231_count = 0;
  unsigned long long llvm_cbe_tmp__73;
  static  unsigned long long aesl_llvm_cbe_232_count = 0;
  signed int *llvm_cbe_tmp__74;
  static  unsigned long long aesl_llvm_cbe_233_count = 0;
  signed int *llvm_cbe_tmp__75;
  static  unsigned long long aesl_llvm_cbe_234_count = 0;
  unsigned int llvm_cbe_tmp__76;
  static  unsigned long long aesl_llvm_cbe_235_count = 0;
  unsigned int llvm_cbe_tmp__77;
  static  unsigned long long aesl_llvm_cbe_236_count = 0;
  signed int *llvm_cbe_tmp__78;
  static  unsigned long long aesl_llvm_cbe_237_count = 0;
  static  unsigned long long aesl_llvm_cbe_238_count = 0;
  unsigned int llvm_cbe_tmp__79;
  static  unsigned long long aesl_llvm_cbe_239_count = 0;
  static  unsigned long long aesl_llvm_cbe_240_count = 0;
  static  unsigned long long aesl_llvm_cbe_241_count = 0;
  static  unsigned long long aesl_llvm_cbe_242_count = 0;
  static  unsigned long long aesl_llvm_cbe_243_count = 0;
  static  unsigned long long aesl_llvm_cbe_244_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_245_count = 0;
  static  unsigned long long aesl_llvm_cbe_246_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_poly_decompose\n");
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__80;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__80:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i32 [ 0, %%0 ], [ %%8, %%1  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_decompose  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__79);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = zext i32 %%storemerge1 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_decompose  --> \n", ++aesl_llvm_cbe_231_count);
  llvm_cbe_tmp__73 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge1&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__73);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.poly* %%a0, i64 0, i32 0, i64 %%2, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_decompose  --> \n", ++aesl_llvm_cbe_232_count);
  llvm_cbe_tmp__74 = (signed int *)(&llvm_cbe_a0->field0[(((signed long long )llvm_cbe_tmp__73))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__73));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%2, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_decompose  --> \n", ++aesl_llvm_cbe_233_count);
  llvm_cbe_tmp__75 = (signed int *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__73))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__73));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = load i32* %%4, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_decompose  --> \n", ++aesl_llvm_cbe_234_count);
  llvm_cbe_tmp__76 = (unsigned int )*llvm_cbe_tmp__75;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__76);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = tail call i32 @pqcrystals_dilithium2_ref_decompose(i32* %%3, i32 %%5) nounwind, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_decompose  --> \n", ++aesl_llvm_cbe_235_count);
  llvm_cbe_tmp__77 = (unsigned int ) /*tail*/ pqcrystals_dilithium2_ref_decompose((signed int *)llvm_cbe_tmp__74, llvm_cbe_tmp__76);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__76);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__77);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds %%struct.poly* %%a1, i64 0, i32 0, i64 %%2, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_decompose  --> \n", ++aesl_llvm_cbe_236_count);
  llvm_cbe_tmp__78 = (signed int *)(&llvm_cbe_a1->field0[(((signed long long )llvm_cbe_tmp__73))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__73));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%6, i32* %%7, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_decompose  --> \n", ++aesl_llvm_cbe_237_count);
  *llvm_cbe_tmp__78 = llvm_cbe_tmp__77;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__77);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = add i32 %%storemerge1, 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_decompose  --> \n", ++aesl_llvm_cbe_238_count);
  llvm_cbe_tmp__79 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__79&4294967295ull)));
  if (((llvm_cbe_tmp__79&4294967295U) == (256u&4294967295U))) {
    goto llvm_cbe_tmp__81;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__79;   /* for PHI node */
    goto llvm_cbe_tmp__80;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__81:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_poly_decompose}\n");
  return;
}


signed int pqcrystals_dilithium2_ref_poly_make_hint(l_struct_OC_poly *llvm_cbe_h, l_struct_OC_poly *llvm_cbe_a0, l_struct_OC_poly *llvm_cbe_a1) {
  static  unsigned long long aesl_llvm_cbe_247_count = 0;
  static  unsigned long long aesl_llvm_cbe_248_count = 0;
  static  unsigned long long aesl_llvm_cbe_249_count = 0;
  static  unsigned long long aesl_llvm_cbe_250_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  unsigned int llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_265_count = 0;
  unsigned int llvm_cbe_tmp__82;
  unsigned int llvm_cbe_tmp__82__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_266_count = 0;
  unsigned long long llvm_cbe_tmp__83;
  static  unsigned long long aesl_llvm_cbe_267_count = 0;
  signed int *llvm_cbe_tmp__84;
  static  unsigned long long aesl_llvm_cbe_268_count = 0;
  unsigned int llvm_cbe_tmp__85;
  static  unsigned long long aesl_llvm_cbe_269_count = 0;
  signed int *llvm_cbe_tmp__86;
  static  unsigned long long aesl_llvm_cbe_270_count = 0;
  unsigned int llvm_cbe_tmp__87;
  static  unsigned long long aesl_llvm_cbe_271_count = 0;
  unsigned int llvm_cbe_tmp__88;
  static  unsigned long long aesl_llvm_cbe_272_count = 0;
  signed int *llvm_cbe_tmp__89;
  static  unsigned long long aesl_llvm_cbe_273_count = 0;
  static  unsigned long long aesl_llvm_cbe_274_count = 0;
  unsigned int llvm_cbe_tmp__90;
  static  unsigned long long aesl_llvm_cbe_275_count = 0;
  static  unsigned long long aesl_llvm_cbe_276_count = 0;
  static  unsigned long long aesl_llvm_cbe_277_count = 0;
  static  unsigned long long aesl_llvm_cbe_278_count = 0;
  unsigned int llvm_cbe_tmp__91;
  static  unsigned long long aesl_llvm_cbe_279_count = 0;
  static  unsigned long long aesl_llvm_cbe_280_count = 0;
  static  unsigned long long aesl_llvm_cbe_281_count = 0;
  static  unsigned long long aesl_llvm_cbe_282_count = 0;
  static  unsigned long long aesl_llvm_cbe_283_count = 0;
  static  unsigned long long aesl_llvm_cbe_284_count = 0;
  static  unsigned long long aesl_llvm_cbe_285_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_286_count = 0;
  static  unsigned long long aesl_llvm_cbe_287_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_poly_make_hint\n");
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  llvm_cbe_tmp__82__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__92;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__92:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i32 [ 0, %%0 ], [ %%11, %%1  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_make_hint  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__91);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = phi i32 [ 0, %%0 ], [ %%10, %%1  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_make_hint  --> \n", ++aesl_llvm_cbe_265_count);
  llvm_cbe_tmp__82 = (unsigned int )llvm_cbe_tmp__82__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__82);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__90);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = zext i32 %%storemerge1 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_make_hint  --> \n", ++aesl_llvm_cbe_266_count);
  llvm_cbe_tmp__83 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge1&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__83);
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds %%struct.poly* %%a0, i64 0, i32 0, i64 %%3, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_make_hint  --> \n", ++aesl_llvm_cbe_267_count);
  llvm_cbe_tmp__84 = (signed int *)(&llvm_cbe_a0->field0[(((signed long long )llvm_cbe_tmp__83))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__83));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = load i32* %%4, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_make_hint  --> \n", ++aesl_llvm_cbe_268_count);
  llvm_cbe_tmp__85 = (unsigned int )*llvm_cbe_tmp__84;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__85);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds %%struct.poly* %%a1, i64 0, i32 0, i64 %%3, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_make_hint  --> \n", ++aesl_llvm_cbe_269_count);
  llvm_cbe_tmp__86 = (signed int *)(&llvm_cbe_a1->field0[(((signed long long )llvm_cbe_tmp__83))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__83));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = load i32* %%6, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_make_hint  --> \n", ++aesl_llvm_cbe_270_count);
  llvm_cbe_tmp__87 = (unsigned int )*llvm_cbe_tmp__86;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__87);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = tail call i32 @pqcrystals_dilithium2_ref_make_hint(i32 %%5, i32 %%7) nounwind, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_make_hint  --> \n", ++aesl_llvm_cbe_271_count);
  llvm_cbe_tmp__88 = (unsigned int ) /*tail*/ pqcrystals_dilithium2_ref_make_hint(llvm_cbe_tmp__85, llvm_cbe_tmp__87);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__85);
printf("\nArgument  = 0x%X",llvm_cbe_tmp__87);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__88);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds %%struct.poly* %%h, i64 0, i32 0, i64 %%3, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_make_hint  --> \n", ++aesl_llvm_cbe_272_count);
  llvm_cbe_tmp__89 = (signed int *)(&llvm_cbe_h->field0[(((signed long long )llvm_cbe_tmp__83))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__83));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%8, i32* %%9, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_make_hint  --> \n", ++aesl_llvm_cbe_273_count);
  *llvm_cbe_tmp__89 = llvm_cbe_tmp__88;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__88);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = add i32 %%8, %%2, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_make_hint  --> \n", ++aesl_llvm_cbe_274_count);
  llvm_cbe_tmp__90 = (unsigned int )((unsigned int )(llvm_cbe_tmp__88&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__82&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__90&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = add i32 %%storemerge1, 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_make_hint  --> \n", ++aesl_llvm_cbe_278_count);
  llvm_cbe_tmp__91 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__91&4294967295ull)));
  if (((llvm_cbe_tmp__91&4294967295U) == (256u&4294967295U))) {
    goto llvm_cbe_tmp__93;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__91;   /* for PHI node */
    llvm_cbe_tmp__82__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__90;   /* for PHI node */
    goto llvm_cbe_tmp__92;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__93:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_poly_make_hint}\n");
  return llvm_cbe_tmp__90;
}


void pqcrystals_dilithium2_ref_poly_use_hint(l_struct_OC_poly *llvm_cbe_b, l_struct_OC_poly *llvm_cbe_a, l_struct_OC_poly *llvm_cbe_h) {
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
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  unsigned int llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_301_count = 0;
  unsigned long long llvm_cbe_tmp__94;
  static  unsigned long long aesl_llvm_cbe_302_count = 0;
  signed int *llvm_cbe_tmp__95;
  static  unsigned long long aesl_llvm_cbe_303_count = 0;
  unsigned int llvm_cbe_tmp__96;
  static  unsigned long long aesl_llvm_cbe_304_count = 0;
  signed int *llvm_cbe_tmp__97;
  static  unsigned long long aesl_llvm_cbe_305_count = 0;
  unsigned int llvm_cbe_tmp__98;
  static  unsigned long long aesl_llvm_cbe_306_count = 0;
  unsigned int llvm_cbe_tmp__99;
  static  unsigned long long aesl_llvm_cbe_307_count = 0;
  signed int *llvm_cbe_tmp__100;
  static  unsigned long long aesl_llvm_cbe_308_count = 0;
  static  unsigned long long aesl_llvm_cbe_309_count = 0;
  unsigned int llvm_cbe_tmp__101;
  static  unsigned long long aesl_llvm_cbe_310_count = 0;
  static  unsigned long long aesl_llvm_cbe_311_count = 0;
  static  unsigned long long aesl_llvm_cbe_312_count = 0;
  static  unsigned long long aesl_llvm_cbe_313_count = 0;
  static  unsigned long long aesl_llvm_cbe_314_count = 0;
  static  unsigned long long aesl_llvm_cbe_315_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_316_count = 0;
  static  unsigned long long aesl_llvm_cbe_317_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_poly_use_hint\n");
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__102;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__102:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i32 [ 0, %%0 ], [ %%9, %%1  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_use_hint  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__101);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = zext i32 %%storemerge1 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_use_hint  --> \n", ++aesl_llvm_cbe_301_count);
  llvm_cbe_tmp__94 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge1&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__94);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%2, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_use_hint  --> \n", ++aesl_llvm_cbe_302_count);
  llvm_cbe_tmp__95 = (signed int *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__94))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__94));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = load i32* %%3, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_use_hint  --> \n", ++aesl_llvm_cbe_303_count);
  llvm_cbe_tmp__96 = (unsigned int )*llvm_cbe_tmp__95;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__96);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds %%struct.poly* %%h, i64 0, i32 0, i64 %%2, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_use_hint  --> \n", ++aesl_llvm_cbe_304_count);
  llvm_cbe_tmp__97 = (signed int *)(&llvm_cbe_h->field0[(((signed long long )llvm_cbe_tmp__94))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__94));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = load i32* %%5, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_use_hint  --> \n", ++aesl_llvm_cbe_305_count);
  llvm_cbe_tmp__98 = (unsigned int )*llvm_cbe_tmp__97;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__98);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = tail call i32 @pqcrystals_dilithium2_ref_use_hint(i32 %%4, i32 %%6) nounwind, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_use_hint  --> \n", ++aesl_llvm_cbe_306_count);
  llvm_cbe_tmp__99 = (unsigned int ) /*tail*/ pqcrystals_dilithium2_ref_use_hint(llvm_cbe_tmp__96, llvm_cbe_tmp__98);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__96);
printf("\nArgument  = 0x%X",llvm_cbe_tmp__98);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__99);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds %%struct.poly* %%b, i64 0, i32 0, i64 %%2, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_use_hint  --> \n", ++aesl_llvm_cbe_307_count);
  llvm_cbe_tmp__100 = (signed int *)(&llvm_cbe_b->field0[(((signed long long )llvm_cbe_tmp__94))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__94));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%7, i32* %%8, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_use_hint  --> \n", ++aesl_llvm_cbe_308_count);
  *llvm_cbe_tmp__100 = llvm_cbe_tmp__99;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__99);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = add i32 %%storemerge1, 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_use_hint  --> \n", ++aesl_llvm_cbe_309_count);
  llvm_cbe_tmp__101 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__101&4294967295ull)));
  if (((llvm_cbe_tmp__101&4294967295U) == (256u&4294967295U))) {
    goto llvm_cbe_tmp__103;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__101;   /* for PHI node */
    goto llvm_cbe_tmp__102;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__103:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_poly_use_hint}\n");
  return;
}


signed int pqcrystals_dilithium2_ref_poly_chknorm(l_struct_OC_poly *llvm_cbe_a, signed int llvm_cbe_B) {
  static  unsigned long long aesl_llvm_cbe_318_count = 0;
  static  unsigned long long aesl_llvm_cbe_319_count = 0;
  static  unsigned long long aesl_llvm_cbe_320_count = 0;
  static  unsigned long long aesl_llvm_cbe_321_count = 0;
  static  unsigned long long aesl_llvm_cbe_322_count = 0;
  static  unsigned long long aesl_llvm_cbe_323_count = 0;
  static  unsigned long long aesl_llvm_cbe_324_count = 0;
  static  unsigned long long aesl_llvm_cbe_325_count = 0;
  static  unsigned long long aesl_llvm_cbe_326_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge_count = 0;
  unsigned int llvm_cbe_storemerge;
  unsigned int llvm_cbe_storemerge__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_327_count = 0;
  static  unsigned long long aesl_llvm_cbe_328_count = 0;
  static  unsigned long long aesl_llvm_cbe_329_count = 0;
  static  unsigned long long aesl_llvm_cbe_330_count = 0;
  static  unsigned long long aesl_llvm_cbe_331_count = 0;
  static  unsigned long long aesl_llvm_cbe_332_count = 0;
  static  unsigned long long aesl_llvm_cbe_333_count = 0;
  static  unsigned long long aesl_llvm_cbe_334_count = 0;
  unsigned long long llvm_cbe_tmp__104;
  static  unsigned long long aesl_llvm_cbe_335_count = 0;
  signed int *llvm_cbe_tmp__105;
  static  unsigned long long aesl_llvm_cbe_336_count = 0;
  unsigned int llvm_cbe_tmp__106;
  static  unsigned long long aesl_llvm_cbe_337_count = 0;
  unsigned int llvm_cbe_tmp__107;
  static  unsigned long long aesl_llvm_cbe_338_count = 0;
  static  unsigned long long aesl_llvm_cbe_339_count = 0;
  static  unsigned long long aesl_llvm_cbe_340_count = 0;
  unsigned int llvm_cbe_tmp__108;
  static  unsigned long long aesl_llvm_cbe_341_count = 0;
  unsigned int llvm_cbe_tmp__109;
  static  unsigned long long aesl_llvm_cbe_342_count = 0;
  unsigned int llvm_cbe_tmp__110;
  static  unsigned long long aesl_llvm_cbe_343_count = 0;
  static  unsigned long long aesl_llvm_cbe_344_count = 0;
  static  unsigned long long aesl_llvm_cbe_345_count = 0;
  static  unsigned long long aesl_llvm_cbe_346_count = 0;
  unsigned int llvm_cbe_tmp__111;
  static  unsigned long long aesl_llvm_cbe_347_count = 0;
  static  unsigned long long aesl_llvm_cbe_348_count = 0;
  static  unsigned long long aesl_llvm_cbe_349_count = 0;
  unsigned int llvm_cbe_tmp__112;
  unsigned int llvm_cbe_tmp__112__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_350_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_poly_chknorm\n");
  if ((((signed int )llvm_cbe_B) > ((signed int )1047552u))) {
    llvm_cbe_tmp__112__PHI_TEMPORARY = (unsigned int )1u;   /* for PHI node */
    goto llvm_cbe__2e_loopexit;
  } else {
    llvm_cbe_storemerge__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  }

  do {     /* Syntactic loop '.preheader' to make GCC happy */
llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge = phi i32 [ %%12, %%3 ], [ 0, %%0  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_chknorm  --> \n", ++aesl_llvm_cbe_storemerge_count);
  llvm_cbe_storemerge = (unsigned int )llvm_cbe_storemerge__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge = 0x%X",llvm_cbe_storemerge);
printf("\n = 0x%X",llvm_cbe_tmp__111);
printf("\n = 0x%X",0u);
}
  if ((((unsigned int )llvm_cbe_storemerge&4294967295U) < ((unsigned int )256u&4294967295U))) {
    goto llvm_cbe_tmp__113;
  } else {
    llvm_cbe_tmp__112__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_loopexit;
  }

llvm_cbe_tmp__113:
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = zext i32 %%storemerge to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_chknorm  --> \n", ++aesl_llvm_cbe_334_count);
  llvm_cbe_tmp__104 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__104);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_chknorm  --> \n", ++aesl_llvm_cbe_335_count);
  llvm_cbe_tmp__105 = (signed int *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__104))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__104));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = load i32* %%5, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_chknorm  --> \n", ++aesl_llvm_cbe_336_count);
  llvm_cbe_tmp__106 = (unsigned int )*llvm_cbe_tmp__105;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__106);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = ashr i32 %%6, 31, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_chknorm  --> \n", ++aesl_llvm_cbe_337_count);
  llvm_cbe_tmp__107 = (unsigned int )((signed int )(((signed int )llvm_cbe_tmp__106) >> ((signed int )31u)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((signed int )llvm_cbe_tmp__107));
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = shl nsw i32 %%6, 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_chknorm  --> \n", ++aesl_llvm_cbe_340_count);
  llvm_cbe_tmp__108 = (unsigned int )llvm_cbe_tmp__106 << 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__108);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = and i32 %%7, %%8, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_chknorm  --> \n", ++aesl_llvm_cbe_341_count);
  llvm_cbe_tmp__109 = (unsigned int )llvm_cbe_tmp__107 & llvm_cbe_tmp__108;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__109);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = sub nsw i32 %%6, %%9, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_chknorm  --> \n", ++aesl_llvm_cbe_342_count);
  llvm_cbe_tmp__110 = (unsigned int )((unsigned int )(llvm_cbe_tmp__106&4294967295ull)) - ((unsigned int )(llvm_cbe_tmp__109&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__110&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = add i32 %%storemerge, 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_chknorm  --> \n", ++aesl_llvm_cbe_346_count);
  llvm_cbe_tmp__111 = (unsigned int )((unsigned int )(llvm_cbe_storemerge&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__111&4294967295ull)));
  if ((((signed int )llvm_cbe_tmp__110) < ((signed int )llvm_cbe_B))) {
    llvm_cbe_storemerge__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__111;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  } else {
    llvm_cbe_tmp__112__PHI_TEMPORARY = (unsigned int )1u;   /* for PHI node */
    goto llvm_cbe__2e_loopexit;
  }

  } while (1); /* end of syntactic loop '.preheader' */
llvm_cbe__2e_loopexit:
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = phi i32 [ 1, %%0 ], [ 0, %%.preheader ], [ 1, %%3  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_chknorm  --> \n", ++aesl_llvm_cbe_349_count);
  llvm_cbe_tmp__112 = (unsigned int )llvm_cbe_tmp__112__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__112);
printf("\n = 0x%X",1u);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",1u);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_poly_chknorm}\n");
  return llvm_cbe_tmp__112;
}


void pqcrystals_dilithium2_ref_poly_uniform(l_struct_OC_poly *llvm_cbe_a,  char *llvm_cbe_seed, signed short llvm_cbe_nonce) {
  static  unsigned long long aesl_llvm_cbe_buf_count = 0;
   char llvm_cbe_buf[842];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_state_count = 0;
  l_struct_OC_keccak_state llvm_cbe_state;    /* Address-exposed local */
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
  static  unsigned long long aesl_llvm_cbe_362_count = 0;
  static  unsigned long long aesl_llvm_cbe_363_count = 0;
  static  unsigned long long aesl_llvm_cbe_364_count = 0;
  static  unsigned long long aesl_llvm_cbe_365_count = 0;
  static  unsigned long long aesl_llvm_cbe_366_count = 0;
   char *llvm_cbe_tmp__114;
  static  unsigned long long aesl_llvm_cbe_367_count = 0;
  static  unsigned long long aesl_llvm_cbe_368_count = 0;
  signed int *llvm_cbe_tmp__115;
  static  unsigned long long aesl_llvm_cbe_369_count = 0;
  unsigned int llvm_cbe_tmp__116;
  static  unsigned long long aesl_llvm_cbe_370_count = 0;
  static  unsigned long long aesl_llvm_cbe_371_count = 0;
  static  unsigned long long aesl_llvm_cbe_372_count = 0;
  static  unsigned long long aesl_llvm_cbe_373_count = 0;
  static  unsigned long long aesl_llvm_cbe_374_count = 0;
  static  unsigned long long aesl_llvm_cbe_375_count = 0;
  static  unsigned long long aesl_llvm_cbe_376_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge3_count = 0;
  unsigned int llvm_cbe_storemerge3;
  unsigned int llvm_cbe_storemerge3__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_377_count = 0;
  unsigned int llvm_cbe_tmp__117;
  unsigned int llvm_cbe_tmp__117__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_378_count = 0;
  unsigned int llvm_cbe_tmp__118;
  static  unsigned long long aesl_llvm_cbe_379_count = 0;
  static  unsigned long long aesl_llvm_cbe_380_count = 0;
  static  unsigned long long aesl_llvm_cbe_381_count = 0;
  static  unsigned long long aesl_llvm_cbe_382_count = 0;
  static  unsigned long long aesl_llvm_cbe_383_count = 0;
  static  unsigned long long aesl_llvm_cbe_384_count = 0;
  static  unsigned long long aesl_llvm_cbe_385_count = 0;
  static  unsigned long long aesl_llvm_cbe_386_count = 0;
  static  unsigned long long aesl_llvm_cbe_387_count = 0;
  static  unsigned long long aesl_llvm_cbe_388_count = 0;
  static  unsigned long long aesl_llvm_cbe_389_count = 0;
  static  unsigned long long aesl_llvm_cbe_390_count = 0;
  static  unsigned long long aesl_llvm_cbe_391_count = 0;
  unsigned int llvm_cbe_tmp__119;
  static  unsigned long long aesl_llvm_cbe_392_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge12_count = 0;
  unsigned int llvm_cbe_storemerge12;
  unsigned int llvm_cbe_storemerge12__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_393_count = 0;
  unsigned int llvm_cbe_tmp__120;
  static  unsigned long long aesl_llvm_cbe_394_count = 0;
  unsigned long long llvm_cbe_tmp__121;
  static  unsigned long long aesl_llvm_cbe_395_count = 0;
   char *llvm_cbe_tmp__122;
  static  unsigned long long aesl_llvm_cbe_396_count = 0;
  unsigned char llvm_cbe_tmp__123;
  static  unsigned long long aesl_llvm_cbe_397_count = 0;
  unsigned long long llvm_cbe_tmp__124;
  static  unsigned long long aesl_llvm_cbe_398_count = 0;
   char *llvm_cbe_tmp__125;
  static  unsigned long long aesl_llvm_cbe_399_count = 0;
  static  unsigned long long aesl_llvm_cbe_400_count = 0;
  unsigned int llvm_cbe_tmp__126;
  static  unsigned long long aesl_llvm_cbe_401_count = 0;
  static  unsigned long long aesl_llvm_cbe_402_count = 0;
  static  unsigned long long aesl_llvm_cbe_403_count = 0;
  static  unsigned long long aesl_llvm_cbe_404_count = 0;
  static  unsigned long long aesl_llvm_cbe_405_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_406_count = 0;
  static  unsigned long long aesl_llvm_cbe_407_count = 0;
  unsigned long long llvm_cbe_tmp__127;
  static  unsigned long long aesl_llvm_cbe_408_count = 0;
   char *llvm_cbe_tmp__128;
  static  unsigned long long aesl_llvm_cbe_409_count = 0;
  static  unsigned long long aesl_llvm_cbe_410_count = 0;
  unsigned int llvm_cbe_tmp__129;
  static  unsigned long long aesl_llvm_cbe_411_count = 0;
  static  unsigned long long aesl_llvm_cbe_412_count = 0;
  static  unsigned long long aesl_llvm_cbe_413_count = 0;
  static  unsigned long long aesl_llvm_cbe_414_count = 0;
  static  unsigned long long aesl_llvm_cbe_415_count = 0;
  static  unsigned long long aesl_llvm_cbe_416_count = 0;
  unsigned long long llvm_cbe_tmp__130;
  static  unsigned long long aesl_llvm_cbe_417_count = 0;
  signed int *llvm_cbe_tmp__131;
  static  unsigned long long aesl_llvm_cbe_418_count = 0;
  unsigned int llvm_cbe_tmp__132;
  static  unsigned long long aesl_llvm_cbe_419_count = 0;
  unsigned int llvm_cbe_tmp__133;
  static  unsigned long long aesl_llvm_cbe_420_count = 0;
  unsigned int llvm_cbe_tmp__134;
  static  unsigned long long aesl_llvm_cbe_421_count = 0;
  static  unsigned long long aesl_llvm_cbe_422_count = 0;
  static  unsigned long long aesl_llvm_cbe_423_count = 0;
  static  unsigned long long aesl_llvm_cbe_424_count = 0;
  static  unsigned long long aesl_llvm_cbe_425_count = 0;
  static  unsigned long long aesl_llvm_cbe_426_count = 0;
  static  unsigned long long aesl_llvm_cbe_427_count = 0;
  static  unsigned long long aesl_llvm_cbe_428_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_poly_uniform\n");
if (AESL_DEBUG_TRACE)
printf("\n  call void @pqcrystals_dilithium2_ref_dilithium_shake128_stream_init(%%struct.keccak_state* %%state, i8* %%seed, i16 zeroext %%nonce) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_uniform  --> \n", ++aesl_llvm_cbe_365_count);
  pqcrystals_dilithium2_ref_dilithium_shake128_stream_init((l_struct_OC_keccak_state *)(&llvm_cbe_state), ( char *)llvm_cbe_seed, llvm_cbe_nonce);
if (AESL_DEBUG_TRACE) {
printf("\nArgument nonce = 0x%X",llvm_cbe_nonce);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds [842 x i8]* %%buf, i64 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_uniform  --> \n", ++aesl_llvm_cbe_366_count);
  llvm_cbe_tmp__114 = ( char *)(&llvm_cbe_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 842
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @shake128_squeezeblocks(i8* %%1, i64 5, %%struct.keccak_state* %%state) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_uniform  --> \n", ++aesl_llvm_cbe_367_count);
  shake128_squeezeblocks(( char *)llvm_cbe_tmp__114, 5ull, (l_struct_OC_keccak_state *)(&llvm_cbe_state));
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",5ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 0, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_uniform  --> \n", ++aesl_llvm_cbe_368_count);
  llvm_cbe_tmp__115 = (signed int *)(&llvm_cbe_a->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = call fastcc i32 @aesl_internal_rej_uniform(i32* %%2, i32 256, i8* %%1, i32 840), !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_uniform  --> \n", ++aesl_llvm_cbe_369_count);
  llvm_cbe_tmp__116 = (unsigned int )aesl_internal_rej_uniform((signed int *)llvm_cbe_tmp__115, 256u, ( char *)llvm_cbe_tmp__114, 840u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",256u);
printf("\nArgument  = 0x%X",840u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__116);
}
  if ((((unsigned int )llvm_cbe_tmp__116&4294967295U) < ((unsigned int )256u&4294967295U))) {
    llvm_cbe_storemerge3__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__116;   /* for PHI node */
    llvm_cbe_tmp__117__PHI_TEMPORARY = (unsigned int )840u;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph5;
  } else {
    goto llvm_cbe__2e__crit_edge6;
  }

  do {     /* Syntactic loop '.lr.ph5' to make GCC happy */
llvm_cbe__2e_lr_2e_ph5:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge3 = phi i32 [ %%24, %%._crit_edge ], [ %%3, %%0  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_uniform  --> \n", ++aesl_llvm_cbe_storemerge3_count);
  llvm_cbe_storemerge3 = (unsigned int )llvm_cbe_storemerge3__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge3 = 0x%X",llvm_cbe_storemerge3);
printf("\n = 0x%X",llvm_cbe_tmp__134);
printf("\n = 0x%X",llvm_cbe_tmp__116);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = phi i32 [ %%19, %%._crit_edge ], [ 840, %%0  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_uniform  --> \n", ++aesl_llvm_cbe_377_count);
  llvm_cbe_tmp__117 = (unsigned int )llvm_cbe_tmp__117__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__117);
printf("\n = 0x%X",llvm_cbe_tmp__129);
printf("\n = 0x%X",840u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = urem i32 %%5, 3, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_uniform  --> \n", ++aesl_llvm_cbe_378_count);
  llvm_cbe_tmp__118 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__117&4294967295ull)) % ((unsigned int )(3u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__118&4294967295ull)));
  if (((llvm_cbe_tmp__118&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe__2e__crit_edge;
  } else {
    goto llvm_cbe__2e_lr_2e_ph;
  }

llvm_cbe__2e__crit_edge:
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = zext i32 %%6 to i64, !dbg !18 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_uniform  --> \n", ++aesl_llvm_cbe_407_count);
  llvm_cbe_tmp__127 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__118&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__127);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = getelementptr inbounds [842 x i8]* %%buf, i64 0, i64 %%17, !dbg !18 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_uniform  --> \n", ++aesl_llvm_cbe_408_count);
  llvm_cbe_tmp__128 = ( char *)(&llvm_cbe_buf[(((signed long long )llvm_cbe_tmp__127))
#ifdef AESL_BC_SIM
 % 842
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__127));
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @shake128_squeezeblocks(i8* %%18, i64 1, %%struct.keccak_state* %%state) nounwind, !dbg !18 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_uniform  --> \n", ++aesl_llvm_cbe_409_count);
  shake128_squeezeblocks(( char *)llvm_cbe_tmp__128, 1ull, (l_struct_OC_keccak_state *)(&llvm_cbe_state));
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",1ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = or i32 %%6, 168, !dbg !18 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_uniform  --> \n", ++aesl_llvm_cbe_410_count);
  llvm_cbe_tmp__129 = (unsigned int )llvm_cbe_tmp__118 | 168u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__129);
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = zext i32 %%storemerge3 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_uniform  --> \n", ++aesl_llvm_cbe_416_count);
  llvm_cbe_tmp__130 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge3&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__130);
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%20, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_uniform  --> \n", ++aesl_llvm_cbe_417_count);
  llvm_cbe_tmp__131 = (signed int *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__130))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__130));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = sub i32 256, %%storemerge3, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_uniform  --> \n", ++aesl_llvm_cbe_418_count);
  llvm_cbe_tmp__132 = (unsigned int )((unsigned int )(256u&4294967295ull)) - ((unsigned int )(llvm_cbe_storemerge3&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__132&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = call fastcc i32 @aesl_internal_rej_uniform(i32* %%21, i32 %%22, i8* %%1, i32 %%19), !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_uniform  --> \n", ++aesl_llvm_cbe_419_count);
  llvm_cbe_tmp__133 = (unsigned int )aesl_internal_rej_uniform((signed int *)llvm_cbe_tmp__131, llvm_cbe_tmp__132, ( char *)llvm_cbe_tmp__114, llvm_cbe_tmp__129);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__132);
printf("\nArgument  = 0x%X",llvm_cbe_tmp__129);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__133);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = add i32 %%23, %%storemerge3, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_uniform  --> \n", ++aesl_llvm_cbe_420_count);
  llvm_cbe_tmp__134 = (unsigned int )((unsigned int )(llvm_cbe_tmp__133&4294967295ull)) + ((unsigned int )(llvm_cbe_storemerge3&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__134&4294967295ull)));
  if ((((unsigned int )llvm_cbe_tmp__134&4294967295U) < ((unsigned int )256u&4294967295U))) {
    llvm_cbe_storemerge3__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__134;   /* for PHI node */
    llvm_cbe_tmp__117__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__129;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph5;
  } else {
    goto llvm_cbe__2e__crit_edge6;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__135:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge12 = phi i32 [ 0, %%.lr.ph ], [ %%16, %%9  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_uniform  --> \n", ++aesl_llvm_cbe_storemerge12_count);
  llvm_cbe_storemerge12 = (unsigned int )llvm_cbe_storemerge12__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge12 = 0x%X",llvm_cbe_storemerge12);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__126);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = add i32 %%8, %%storemerge12, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_uniform  --> \n", ++aesl_llvm_cbe_393_count);
  llvm_cbe_tmp__120 = (unsigned int )((unsigned int )(llvm_cbe_tmp__119&4294967295ull)) + ((unsigned int )(llvm_cbe_storemerge12&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__120&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = zext i32 %%10 to i64, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_uniform  --> \n", ++aesl_llvm_cbe_394_count);
  llvm_cbe_tmp__121 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__120&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__121);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = getelementptr inbounds [842 x i8]* %%buf, i64 0, i64 %%11, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_uniform  --> \n", ++aesl_llvm_cbe_395_count);
  llvm_cbe_tmp__122 = ( char *)(&llvm_cbe_buf[(((signed long long )llvm_cbe_tmp__121))
#ifdef AESL_BC_SIM
 % 842
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__121));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__121) < 842)) fprintf(stderr, "%s:%d: warning: Read access out of array 'buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = load i8* %%12, align 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_uniform  --> \n", ++aesl_llvm_cbe_396_count);
  llvm_cbe_tmp__123 = (unsigned char )*llvm_cbe_tmp__122;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__123);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = zext i32 %%storemerge12 to i64, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_uniform  --> \n", ++aesl_llvm_cbe_397_count);
  llvm_cbe_tmp__124 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge12&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__124);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds [842 x i8]* %%buf, i64 0, i64 %%14, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_uniform  --> \n", ++aesl_llvm_cbe_398_count);
  llvm_cbe_tmp__125 = ( char *)(&llvm_cbe_buf[(((signed long long )llvm_cbe_tmp__124))
#ifdef AESL_BC_SIM
 % 842
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__124));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__124) < 842 && "Write access out of array 'buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%13, i8* %%15, align 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_uniform  --> \n", ++aesl_llvm_cbe_399_count);
  *llvm_cbe_tmp__125 = llvm_cbe_tmp__123;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__123);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = add i32 %%storemerge12, 1, !dbg !18 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_uniform  --> \n", ++aesl_llvm_cbe_400_count);
  llvm_cbe_tmp__126 = (unsigned int )((unsigned int )(llvm_cbe_storemerge12&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__126&4294967295ull)));
  if (((llvm_cbe_tmp__126&4294967295U) == (llvm_cbe_tmp__118&4294967295U))) {
    goto llvm_cbe__2e__crit_edge;
  } else {
    llvm_cbe_storemerge12__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__126;   /* for PHI node */
    goto llvm_cbe_tmp__135;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e_lr_2e_ph:
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = sub i32 %%5, %%6, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_uniform  --> \n", ++aesl_llvm_cbe_391_count);
  llvm_cbe_tmp__119 = (unsigned int )((unsigned int )(llvm_cbe_tmp__117&4294967295ull)) - ((unsigned int )(llvm_cbe_tmp__118&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__119&4294967295ull)));
  llvm_cbe_storemerge12__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__135;

  } while (1); /* end of syntactic loop '.lr.ph5' */
llvm_cbe__2e__crit_edge6:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_poly_uniform}\n");
  return;
}


static signed int aesl_internal_rej_uniform(signed int *llvm_cbe_a, signed int llvm_cbe_len,  char *llvm_cbe_buf, signed int llvm_cbe_buflen) {
  static  unsigned long long aesl_llvm_cbe_429_count = 0;
  static  unsigned long long aesl_llvm_cbe_430_count = 0;
  static  unsigned long long aesl_llvm_cbe_431_count = 0;
  static  unsigned long long aesl_llvm_cbe_432_count = 0;
  static  unsigned long long aesl_llvm_cbe_433_count = 0;
  static  unsigned long long aesl_llvm_cbe_434_count = 0;
  static  unsigned long long aesl_llvm_cbe_435_count = 0;
  static  unsigned long long aesl_llvm_cbe_436_count = 0;
  static  unsigned long long aesl_llvm_cbe_437_count = 0;
  static  unsigned long long aesl_llvm_cbe_438_count = 0;
  static  unsigned long long aesl_llvm_cbe_439_count = 0;
  static  unsigned long long aesl_llvm_cbe_440_count = 0;
  static  unsigned long long aesl_llvm_cbe_441_count = 0;
  static  unsigned long long aesl_llvm_cbe_442_count = 0;
  static  unsigned long long aesl_llvm_cbe_443_count = 0;
  static  unsigned long long aesl_llvm_cbe_444_count = 0;
  static  unsigned long long aesl_llvm_cbe_445_count = 0;
  static  unsigned long long aesl_llvm_cbe_446_count = 0;
  static  unsigned long long aesl_llvm_cbe_447_count = 0;
  static  unsigned long long aesl_llvm_cbe_448_count = 0;
  static  unsigned long long aesl_llvm_cbe_449_count = 0;
  unsigned int llvm_cbe_tmp__136;
  unsigned int llvm_cbe_tmp__136__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_450_count = 0;
  unsigned int llvm_cbe_tmp__137;
  unsigned int llvm_cbe_tmp__137__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_451_count = 0;
  static  unsigned long long aesl_llvm_cbe_452_count = 0;
  static  unsigned long long aesl_llvm_cbe_453_count = 0;
  unsigned int llvm_cbe_tmp__138;
  static  unsigned long long aesl_llvm_cbe_454_count = 0;
  static  unsigned long long aesl_llvm_cbe_455_count = 0;
  static  unsigned long long aesl_llvm_cbe_456_count = 0;
  unsigned int llvm_cbe_tmp__139;
  static  unsigned long long aesl_llvm_cbe_457_count = 0;
  static  unsigned long long aesl_llvm_cbe_458_count = 0;
  static  unsigned long long aesl_llvm_cbe_459_count = 0;
  static  unsigned long long aesl_llvm_cbe_460_count = 0;
  static  unsigned long long aesl_llvm_cbe_461_count = 0;
  static  unsigned long long aesl_llvm_cbe_462_count = 0;
  unsigned long long llvm_cbe_tmp__140;
  static  unsigned long long aesl_llvm_cbe_463_count = 0;
   char *llvm_cbe_tmp__141;
  static  unsigned long long aesl_llvm_cbe_464_count = 0;
  unsigned char llvm_cbe_tmp__142;
  static  unsigned long long aesl_llvm_cbe_465_count = 0;
  unsigned int llvm_cbe_tmp__143;
  static  unsigned long long aesl_llvm_cbe_466_count = 0;
  static  unsigned long long aesl_llvm_cbe_467_count = 0;
  static  unsigned long long aesl_llvm_cbe_468_count = 0;
  static  unsigned long long aesl_llvm_cbe_469_count = 0;
  static  unsigned long long aesl_llvm_cbe_470_count = 0;
  static  unsigned long long aesl_llvm_cbe_471_count = 0;
  static  unsigned long long aesl_llvm_cbe_472_count = 0;
  unsigned int llvm_cbe_tmp__144;
  static  unsigned long long aesl_llvm_cbe_473_count = 0;
  static  unsigned long long aesl_llvm_cbe_474_count = 0;
  static  unsigned long long aesl_llvm_cbe_475_count = 0;
  static  unsigned long long aesl_llvm_cbe_476_count = 0;
  static  unsigned long long aesl_llvm_cbe_477_count = 0;
  static  unsigned long long aesl_llvm_cbe_478_count = 0;
  unsigned long long llvm_cbe_tmp__145;
  static  unsigned long long aesl_llvm_cbe_479_count = 0;
   char *llvm_cbe_tmp__146;
  static  unsigned long long aesl_llvm_cbe_480_count = 0;
  unsigned char llvm_cbe_tmp__147;
  static  unsigned long long aesl_llvm_cbe_481_count = 0;
  unsigned int llvm_cbe_tmp__148;
  static  unsigned long long aesl_llvm_cbe_482_count = 0;
  unsigned int llvm_cbe_tmp__149;
  static  unsigned long long aesl_llvm_cbe_483_count = 0;
  static  unsigned long long aesl_llvm_cbe_484_count = 0;
  static  unsigned long long aesl_llvm_cbe_485_count = 0;
  static  unsigned long long aesl_llvm_cbe_486_count = 0;
  static  unsigned long long aesl_llvm_cbe_487_count = 0;
  static  unsigned long long aesl_llvm_cbe_488_count = 0;
  unsigned long long llvm_cbe_tmp__150;
  static  unsigned long long aesl_llvm_cbe_489_count = 0;
   char *llvm_cbe_tmp__151;
  static  unsigned long long aesl_llvm_cbe_490_count = 0;
  unsigned char llvm_cbe_tmp__152;
  static  unsigned long long aesl_llvm_cbe_491_count = 0;
  unsigned int llvm_cbe_tmp__153;
  static  unsigned long long aesl_llvm_cbe_492_count = 0;
  unsigned int llvm_cbe_tmp__154;
  static  unsigned long long aesl_llvm_cbe_493_count = 0;
  unsigned int llvm_cbe_tmp__155;
  static  unsigned long long aesl_llvm_cbe_494_count = 0;
  unsigned int llvm_cbe_tmp__156;
  static  unsigned long long aesl_llvm_cbe_495_count = 0;
  unsigned int llvm_cbe_tmp__157;
  static  unsigned long long aesl_llvm_cbe_496_count = 0;
  static  unsigned long long aesl_llvm_cbe_497_count = 0;
  static  unsigned long long aesl_llvm_cbe_498_count = 0;
  static  unsigned long long aesl_llvm_cbe_499_count = 0;
  static  unsigned long long aesl_llvm_cbe_500_count = 0;
  static  unsigned long long aesl_llvm_cbe_501_count = 0;
  static  unsigned long long aesl_llvm_cbe_502_count = 0;
  static  unsigned long long aesl_llvm_cbe_503_count = 0;
  static  unsigned long long aesl_llvm_cbe_504_count = 0;
  unsigned int llvm_cbe_tmp__158;
  static  unsigned long long aesl_llvm_cbe_505_count = 0;
  static  unsigned long long aesl_llvm_cbe_506_count = 0;
  static  unsigned long long aesl_llvm_cbe_507_count = 0;
  static  unsigned long long aesl_llvm_cbe_508_count = 0;
  static  unsigned long long aesl_llvm_cbe_509_count = 0;
  unsigned long long llvm_cbe_tmp__159;
  static  unsigned long long aesl_llvm_cbe_510_count = 0;
  signed int *llvm_cbe_tmp__160;
  static  unsigned long long aesl_llvm_cbe_511_count = 0;
  static  unsigned long long aesl_llvm_cbe_512_count = 0;
  static  unsigned long long aesl_llvm_cbe_513_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @aesl_internal_rej_uniform\n");
  llvm_cbe_tmp__136__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  llvm_cbe_tmp__137__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_backedge;

  do {     /* Syntactic loop '.backedge' to make GCC happy */
llvm_cbe__2e_backedge:
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = phi i32 [ 0, %%0 ], [ %%5, %%28 ], [ %%5, %%7  for 0x%I64xth hint within @aesl_internal_rej_uniform  --> \n", ++aesl_llvm_cbe_449_count);
  llvm_cbe_tmp__136 = (unsigned int )llvm_cbe_tmp__136__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__136);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__138);
printf("\n = 0x%X",llvm_cbe_tmp__138);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = phi i32 [ 0, %%0 ], [ %%29, %%28 ], [ %%2, %%7  for 0x%I64xth hint within @aesl_internal_rej_uniform  --> \n", ++aesl_llvm_cbe_450_count);
  llvm_cbe_tmp__137 = (unsigned int )llvm_cbe_tmp__137__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__137);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__158);
printf("\n = 0x%X",llvm_cbe_tmp__137);
}
  if ((((unsigned int )llvm_cbe_tmp__137&4294967295U) < ((unsigned int )llvm_cbe_len&4294967295U))) {
    goto llvm_cbe_tmp__161;
  } else {
    goto llvm_cbe__2e_critedge;
  }

llvm_cbe_tmp__162:
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = add i32 %%1, 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_rej_uniform  --> \n", ++aesl_llvm_cbe_456_count);
  llvm_cbe_tmp__139 = (unsigned int )((unsigned int )(llvm_cbe_tmp__136&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__139&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = zext i32 %%1 to i64, !dbg !15 for 0x%I64xth hint within @aesl_internal_rej_uniform  --> \n", ++aesl_llvm_cbe_462_count);
  llvm_cbe_tmp__140 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__136&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__140);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds i8* %%buf, i64 %%9, !dbg !15 for 0x%I64xth hint within @aesl_internal_rej_uniform  --> \n", ++aesl_llvm_cbe_463_count);
  llvm_cbe_tmp__141 = ( char *)(&llvm_cbe_buf[(((signed long long )llvm_cbe_tmp__140))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__140));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = load i8* %%10, align 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_rej_uniform  --> \n", ++aesl_llvm_cbe_464_count);
  llvm_cbe_tmp__142 = (unsigned char )*llvm_cbe_tmp__141;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__142);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = zext i8 %%11 to i32, !dbg !15 for 0x%I64xth hint within @aesl_internal_rej_uniform  --> \n", ++aesl_llvm_cbe_465_count);
  llvm_cbe_tmp__143 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__142&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__143);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = add i32 %%1, 2, !dbg !15 for 0x%I64xth hint within @aesl_internal_rej_uniform  --> \n", ++aesl_llvm_cbe_472_count);
  llvm_cbe_tmp__144 = (unsigned int )((unsigned int )(llvm_cbe_tmp__136&4294967295ull)) + ((unsigned int )(2u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__144&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = zext i32 %%8 to i64, !dbg !15 for 0x%I64xth hint within @aesl_internal_rej_uniform  --> \n", ++aesl_llvm_cbe_478_count);
  llvm_cbe_tmp__145 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__139&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__145);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds i8* %%buf, i64 %%14, !dbg !15 for 0x%I64xth hint within @aesl_internal_rej_uniform  --> \n", ++aesl_llvm_cbe_479_count);
  llvm_cbe_tmp__146 = ( char *)(&llvm_cbe_buf[(((signed long long )llvm_cbe_tmp__145))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__145));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = load i8* %%15, align 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_rej_uniform  --> \n", ++aesl_llvm_cbe_480_count);
  llvm_cbe_tmp__147 = (unsigned char )*llvm_cbe_tmp__146;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__147);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = zext i8 %%16 to i32, !dbg !15 for 0x%I64xth hint within @aesl_internal_rej_uniform  --> \n", ++aesl_llvm_cbe_481_count);
  llvm_cbe_tmp__148 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__147&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__148);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = shl nuw nsw i32 %%17, 8, !dbg !15 for 0x%I64xth hint within @aesl_internal_rej_uniform  --> \n", ++aesl_llvm_cbe_482_count);
  llvm_cbe_tmp__149 = (unsigned int )llvm_cbe_tmp__148 << 8u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__149);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = zext i32 %%13 to i64, !dbg !15 for 0x%I64xth hint within @aesl_internal_rej_uniform  --> \n", ++aesl_llvm_cbe_488_count);
  llvm_cbe_tmp__150 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__144&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__150);
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = getelementptr inbounds i8* %%buf, i64 %%19, !dbg !15 for 0x%I64xth hint within @aesl_internal_rej_uniform  --> \n", ++aesl_llvm_cbe_489_count);
  llvm_cbe_tmp__151 = ( char *)(&llvm_cbe_buf[(((signed long long )llvm_cbe_tmp__150))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__150));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = load i8* %%20, align 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_rej_uniform  --> \n", ++aesl_llvm_cbe_490_count);
  llvm_cbe_tmp__152 = (unsigned char )*llvm_cbe_tmp__151;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__152);
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = zext i8 %%21 to i32, !dbg !15 for 0x%I64xth hint within @aesl_internal_rej_uniform  --> \n", ++aesl_llvm_cbe_491_count);
  llvm_cbe_tmp__153 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__152&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__153);
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = shl nuw nsw i32 %%22, 16, !dbg !15 for 0x%I64xth hint within @aesl_internal_rej_uniform  --> \n", ++aesl_llvm_cbe_492_count);
  llvm_cbe_tmp__154 = (unsigned int )llvm_cbe_tmp__153 << 16u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__154);
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = and i32 %%23, 8323072, !dbg !16 for 0x%I64xth hint within @aesl_internal_rej_uniform  --> \n", ++aesl_llvm_cbe_493_count);
  llvm_cbe_tmp__155 = (unsigned int )llvm_cbe_tmp__154 & 8323072u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__155);
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = or i32 %%18, %%12, !dbg !15 for 0x%I64xth hint within @aesl_internal_rej_uniform  --> \n", ++aesl_llvm_cbe_494_count);
  llvm_cbe_tmp__156 = (unsigned int )llvm_cbe_tmp__149 | llvm_cbe_tmp__143;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__156);
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = or i32 %%25, %%24, !dbg !16 for 0x%I64xth hint within @aesl_internal_rej_uniform  --> \n", ++aesl_llvm_cbe_495_count);
  llvm_cbe_tmp__157 = (unsigned int )llvm_cbe_tmp__156 | llvm_cbe_tmp__155;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__157);
  if ((((unsigned int )llvm_cbe_tmp__157&4294967295U) < ((unsigned int )8380417u&4294967295U))) {
    goto llvm_cbe_tmp__163;
  } else {
    llvm_cbe_tmp__136__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__138;   /* for PHI node */
    llvm_cbe_tmp__137__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__137;   /* for PHI node */
    goto llvm_cbe__2e_backedge;
  }

llvm_cbe_tmp__161:
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = add i32 %%1, 3, !dbg !14 for 0x%I64xth hint within @aesl_internal_rej_uniform  --> \n", ++aesl_llvm_cbe_453_count);
  llvm_cbe_tmp__138 = (unsigned int )((unsigned int )(llvm_cbe_tmp__136&4294967295ull)) + ((unsigned int )(3u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__138&4294967295ull)));
  if ((((unsigned int )llvm_cbe_tmp__138&4294967295U) > ((unsigned int )llvm_cbe_buflen&4294967295U))) {
    goto llvm_cbe__2e_critedge;
  } else {
    goto llvm_cbe_tmp__162;
  }

llvm_cbe_tmp__163:
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = add i32 %%2, 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_rej_uniform  --> \n", ++aesl_llvm_cbe_504_count);
  llvm_cbe_tmp__158 = (unsigned int )((unsigned int )(llvm_cbe_tmp__137&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__158&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = zext i32 %%2 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_rej_uniform  --> \n", ++aesl_llvm_cbe_509_count);
  llvm_cbe_tmp__159 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__137&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__159);
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = getelementptr inbounds i32* %%a, i64 %%30, !dbg !14 for 0x%I64xth hint within @aesl_internal_rej_uniform  --> \n", ++aesl_llvm_cbe_510_count);
  llvm_cbe_tmp__160 = (signed int *)(&llvm_cbe_a[(((signed long long )llvm_cbe_tmp__159))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__159));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%26, i32* %%31, align 4, !dbg !14 for 0x%I64xth hint within @aesl_internal_rej_uniform  --> \n", ++aesl_llvm_cbe_511_count);
  *llvm_cbe_tmp__160 = llvm_cbe_tmp__157;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__157);
  llvm_cbe_tmp__136__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__138;   /* for PHI node */
  llvm_cbe_tmp__137__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__158;   /* for PHI node */
  goto llvm_cbe__2e_backedge;

  } while (1); /* end of syntactic loop '.backedge' */
llvm_cbe__2e_critedge:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @aesl_internal_rej_uniform}\n");
  return llvm_cbe_tmp__137;
}


void pqcrystals_dilithium2_ref_poly_uniform_eta(l_struct_OC_poly *llvm_cbe_a,  char *llvm_cbe_seed, signed short llvm_cbe_nonce) {
  static  unsigned long long aesl_llvm_cbe_buf_count = 0;
   char llvm_cbe_buf[168];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_state_count = 0;
  l_struct_OC_keccak_state llvm_cbe_state;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_514_count = 0;
  static  unsigned long long aesl_llvm_cbe_515_count = 0;
  static  unsigned long long aesl_llvm_cbe_516_count = 0;
  static  unsigned long long aesl_llvm_cbe_517_count = 0;
  static  unsigned long long aesl_llvm_cbe_518_count = 0;
  static  unsigned long long aesl_llvm_cbe_519_count = 0;
  static  unsigned long long aesl_llvm_cbe_520_count = 0;
  static  unsigned long long aesl_llvm_cbe_521_count = 0;
  static  unsigned long long aesl_llvm_cbe_522_count = 0;
  static  unsigned long long aesl_llvm_cbe_523_count = 0;
  static  unsigned long long aesl_llvm_cbe_524_count = 0;
  static  unsigned long long aesl_llvm_cbe_525_count = 0;
  static  unsigned long long aesl_llvm_cbe_526_count = 0;
   char *llvm_cbe_tmp__164;
  static  unsigned long long aesl_llvm_cbe_527_count = 0;
  static  unsigned long long aesl_llvm_cbe_528_count = 0;
  signed int *llvm_cbe_tmp__165;
  static  unsigned long long aesl_llvm_cbe_529_count = 0;
  unsigned int llvm_cbe_tmp__166;
  static  unsigned long long aesl_llvm_cbe_530_count = 0;
  static  unsigned long long aesl_llvm_cbe_531_count = 0;
  static  unsigned long long aesl_llvm_cbe_532_count = 0;
  static  unsigned long long aesl_llvm_cbe_533_count = 0;
  static  unsigned long long aesl_llvm_cbe_534_count = 0;
  static  unsigned long long aesl_llvm_cbe_535_count = 0;
  static  unsigned long long aesl_llvm_cbe_536_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  unsigned int llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_537_count = 0;
  static  unsigned long long aesl_llvm_cbe_538_count = 0;
  unsigned long long llvm_cbe_tmp__167;
  static  unsigned long long aesl_llvm_cbe_539_count = 0;
  signed int *llvm_cbe_tmp__168;
  static  unsigned long long aesl_llvm_cbe_540_count = 0;
  unsigned int llvm_cbe_tmp__169;
  static  unsigned long long aesl_llvm_cbe_541_count = 0;
  unsigned int llvm_cbe_tmp__170;
  static  unsigned long long aesl_llvm_cbe_542_count = 0;
  unsigned int llvm_cbe_tmp__171;
  static  unsigned long long aesl_llvm_cbe_543_count = 0;
  static  unsigned long long aesl_llvm_cbe_544_count = 0;
  static  unsigned long long aesl_llvm_cbe_545_count = 0;
  static  unsigned long long aesl_llvm_cbe_546_count = 0;
  static  unsigned long long aesl_llvm_cbe_547_count = 0;
  static  unsigned long long aesl_llvm_cbe_548_count = 0;
  static  unsigned long long aesl_llvm_cbe_549_count = 0;
  static  unsigned long long aesl_llvm_cbe_550_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_poly_uniform_eta\n");
if (AESL_DEBUG_TRACE)
printf("\n  call void @pqcrystals_dilithium2_ref_dilithium_shake128_stream_init(%%struct.keccak_state* %%state, i8* %%seed, i16 zeroext %%nonce) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_uniform_eta  --> \n", ++aesl_llvm_cbe_525_count);
  pqcrystals_dilithium2_ref_dilithium_shake128_stream_init((l_struct_OC_keccak_state *)(&llvm_cbe_state), ( char *)llvm_cbe_seed, llvm_cbe_nonce);
if (AESL_DEBUG_TRACE) {
printf("\nArgument nonce = 0x%X",llvm_cbe_nonce);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds [168 x i8]* %%buf, i64 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_uniform_eta  --> \n", ++aesl_llvm_cbe_526_count);
  llvm_cbe_tmp__164 = ( char *)(&llvm_cbe_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 168
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @shake128_squeezeblocks(i8* %%1, i64 1, %%struct.keccak_state* %%state) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_uniform_eta  --> \n", ++aesl_llvm_cbe_527_count);
  shake128_squeezeblocks(( char *)llvm_cbe_tmp__164, 1ull, (l_struct_OC_keccak_state *)(&llvm_cbe_state));
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",1ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 0, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_uniform_eta  --> \n", ++aesl_llvm_cbe_528_count);
  llvm_cbe_tmp__165 = (signed int *)(&llvm_cbe_a->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = call fastcc i32 @aesl_internal_rej_eta(i32* %%2, i32 256, i8* %%1, i32 168), !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_uniform_eta  --> \n", ++aesl_llvm_cbe_529_count);
  llvm_cbe_tmp__166 = (unsigned int )aesl_internal_rej_eta((signed int *)llvm_cbe_tmp__165, 256u, ( char *)llvm_cbe_tmp__164, 168u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",256u);
printf("\nArgument  = 0x%X",168u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__166);
}
  if ((((unsigned int )llvm_cbe_tmp__166&4294967295U) < ((unsigned int )256u&4294967295U))) {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__166;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph;
  } else {
    goto llvm_cbe__2e__crit_edge;
  }

  do {     /* Syntactic loop '.lr.ph' to make GCC happy */
llvm_cbe__2e_lr_2e_ph:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i32 [ %%9, %%.lr.ph ], [ %%3, %%0  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_uniform_eta  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",llvm_cbe_tmp__171);
printf("\n = 0x%X",llvm_cbe_tmp__166);
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @shake128_squeezeblocks(i8* %%1, i64 1, %%struct.keccak_state* %%state) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_uniform_eta  --> \n", ++aesl_llvm_cbe_537_count);
  shake128_squeezeblocks(( char *)llvm_cbe_tmp__164, 1ull, (l_struct_OC_keccak_state *)(&llvm_cbe_state));
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",1ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = zext i32 %%storemerge1 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_uniform_eta  --> \n", ++aesl_llvm_cbe_538_count);
  llvm_cbe_tmp__167 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge1&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__167);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%5, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_uniform_eta  --> \n", ++aesl_llvm_cbe_539_count);
  llvm_cbe_tmp__168 = (signed int *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__167))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__167));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = sub i32 256, %%storemerge1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_uniform_eta  --> \n", ++aesl_llvm_cbe_540_count);
  llvm_cbe_tmp__169 = (unsigned int )((unsigned int )(256u&4294967295ull)) - ((unsigned int )(llvm_cbe_storemerge1&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__169&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = call fastcc i32 @aesl_internal_rej_eta(i32* %%6, i32 %%7, i8* %%1, i32 168), !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_uniform_eta  --> \n", ++aesl_llvm_cbe_541_count);
  llvm_cbe_tmp__170 = (unsigned int )aesl_internal_rej_eta((signed int *)llvm_cbe_tmp__168, llvm_cbe_tmp__169, ( char *)llvm_cbe_tmp__164, 168u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__169);
printf("\nArgument  = 0x%X",168u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__170);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = add i32 %%8, %%storemerge1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_uniform_eta  --> \n", ++aesl_llvm_cbe_542_count);
  llvm_cbe_tmp__171 = (unsigned int )((unsigned int )(llvm_cbe_tmp__170&4294967295ull)) + ((unsigned int )(llvm_cbe_storemerge1&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__171&4294967295ull)));
  if ((((unsigned int )llvm_cbe_tmp__171&4294967295U) < ((unsigned int )256u&4294967295U))) {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__171;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph;
  } else {
    goto llvm_cbe__2e__crit_edge;
  }

  } while (1); /* end of syntactic loop '.lr.ph' */
llvm_cbe__2e__crit_edge:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_poly_uniform_eta}\n");
  return;
}


static signed int aesl_internal_rej_eta(signed int *llvm_cbe_a, signed int llvm_cbe_len,  char *llvm_cbe_buf, signed int llvm_cbe_buflen) {
  static  unsigned long long aesl_llvm_cbe_551_count = 0;
  static  unsigned long long aesl_llvm_cbe_552_count = 0;
  static  unsigned long long aesl_llvm_cbe_553_count = 0;
  static  unsigned long long aesl_llvm_cbe_554_count = 0;
  static  unsigned long long aesl_llvm_cbe_555_count = 0;
  static  unsigned long long aesl_llvm_cbe_556_count = 0;
  static  unsigned long long aesl_llvm_cbe_557_count = 0;
  static  unsigned long long aesl_llvm_cbe_558_count = 0;
  static  unsigned long long aesl_llvm_cbe_559_count = 0;
  static  unsigned long long aesl_llvm_cbe_560_count = 0;
  static  unsigned long long aesl_llvm_cbe_561_count = 0;
  static  unsigned long long aesl_llvm_cbe_562_count = 0;
  static  unsigned long long aesl_llvm_cbe_563_count = 0;
  static  unsigned long long aesl_llvm_cbe_564_count = 0;
  static  unsigned long long aesl_llvm_cbe_565_count = 0;
  static  unsigned long long aesl_llvm_cbe_566_count = 0;
  static  unsigned long long aesl_llvm_cbe_567_count = 0;
  static  unsigned long long aesl_llvm_cbe_568_count = 0;
  static  unsigned long long aesl_llvm_cbe_569_count = 0;
  static  unsigned long long aesl_llvm_cbe_570_count = 0;
  static  unsigned long long aesl_llvm_cbe_571_count = 0;
  static  unsigned long long aesl_llvm_cbe_572_count = 0;
  static  unsigned long long aesl_llvm_cbe_573_count = 0;
  static  unsigned long long aesl_llvm_cbe_or_2e_cond7_count = 0;
  bool llvm_cbe_or_2e_cond7;
  static  unsigned long long aesl_llvm_cbe_574_count = 0;
  static  unsigned long long aesl_llvm_cbe_575_count = 0;
  unsigned int llvm_cbe_tmp__172;
  unsigned int llvm_cbe_tmp__172__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_576_count = 0;
  unsigned int llvm_cbe_tmp__173;
  unsigned int llvm_cbe_tmp__173__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_577_count = 0;
  unsigned long long llvm_cbe_tmp__174;
  static  unsigned long long aesl_llvm_cbe_578_count = 0;
   char *llvm_cbe_tmp__175;
  static  unsigned long long aesl_llvm_cbe_579_count = 0;
  unsigned char llvm_cbe_tmp__176;
  static  unsigned long long aesl_llvm_cbe_580_count = 0;
  unsigned int llvm_cbe_tmp__177;
  static  unsigned long long aesl_llvm_cbe_581_count = 0;
  unsigned int llvm_cbe_tmp__178;
  static  unsigned long long aesl_llvm_cbe_582_count = 0;
  static  unsigned long long aesl_llvm_cbe_583_count = 0;
  static  unsigned long long aesl_llvm_cbe_584_count = 0;
  static  unsigned long long aesl_llvm_cbe_585_count = 0;
  static  unsigned long long aesl_llvm_cbe_586_count = 0;
  static  unsigned long long aesl_llvm_cbe_587_count = 0;
  unsigned int llvm_cbe_tmp__179;
  static  unsigned long long aesl_llvm_cbe_588_count = 0;
  static  unsigned long long aesl_llvm_cbe_589_count = 0;
  static  unsigned long long aesl_llvm_cbe_590_count = 0;
  static  unsigned long long aesl_llvm_cbe_591_count = 0;
  static  unsigned long long aesl_llvm_cbe_592_count = 0;
  unsigned int llvm_cbe_tmp__180;
  static  unsigned long long aesl_llvm_cbe_593_count = 0;
  static  unsigned long long aesl_llvm_cbe_594_count = 0;
  static  unsigned long long aesl_llvm_cbe_595_count = 0;
  static  unsigned long long aesl_llvm_cbe_596_count = 0;
  static  unsigned long long aesl_llvm_cbe_597_count = 0;
  static  unsigned long long aesl_llvm_cbe_598_count = 0;
  static  unsigned long long aesl_llvm_cbe_599_count = 0;
  static  unsigned long long aesl_llvm_cbe_600_count = 0;
  unsigned int llvm_cbe_tmp__181;
  static  unsigned long long aesl_llvm_cbe_601_count = 0;
  unsigned int llvm_cbe_tmp__182;
  static  unsigned long long aesl_llvm_cbe_602_count = 0;
  unsigned int llvm_cbe_tmp__183;
  static  unsigned long long aesl_llvm_cbe__2e_neg3_count = 0;
  unsigned int llvm_cbe__2e_neg3;
  static  unsigned long long aesl_llvm_cbe_603_count = 0;
  unsigned int llvm_cbe_tmp__184;
  static  unsigned long long aesl_llvm_cbe_604_count = 0;
  unsigned int llvm_cbe_tmp__185;
  static  unsigned long long aesl_llvm_cbe_605_count = 0;
  static  unsigned long long aesl_llvm_cbe_606_count = 0;
  static  unsigned long long aesl_llvm_cbe_607_count = 0;
  static  unsigned long long aesl_llvm_cbe_608_count = 0;
  static  unsigned long long aesl_llvm_cbe_609_count = 0;
  static  unsigned long long aesl_llvm_cbe_610_count = 0;
  static  unsigned long long aesl_llvm_cbe_611_count = 0;
  unsigned long long llvm_cbe_tmp__186;
  static  unsigned long long aesl_llvm_cbe_612_count = 0;
  signed int *llvm_cbe_tmp__187;
  static  unsigned long long aesl_llvm_cbe_613_count = 0;
  static  unsigned long long aesl_llvm_cbe_614_count = 0;
  static  unsigned long long aesl_llvm_cbe_615_count = 0;
  unsigned int llvm_cbe_tmp__188;
  unsigned int llvm_cbe_tmp__188__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_616_count = 0;
  static  unsigned long long aesl_llvm_cbe_617_count = 0;
  static  unsigned long long aesl_llvm_cbe_or_2e_cond1_count = 0;
  bool llvm_cbe_or_2e_cond1;
  static  unsigned long long aesl_llvm_cbe_618_count = 0;
  static  unsigned long long aesl_llvm_cbe_619_count = 0;
  unsigned int llvm_cbe_tmp__189;
  static  unsigned long long aesl_llvm_cbe_620_count = 0;
  unsigned int llvm_cbe_tmp__190;
  static  unsigned long long aesl_llvm_cbe_621_count = 0;
  unsigned int llvm_cbe_tmp__191;
  static  unsigned long long aesl_llvm_cbe__2e_neg6_count = 0;
  unsigned int llvm_cbe__2e_neg6;
  static  unsigned long long aesl_llvm_cbe_622_count = 0;
  unsigned int llvm_cbe_tmp__192;
  static  unsigned long long aesl_llvm_cbe_623_count = 0;
  unsigned int llvm_cbe_tmp__193;
  static  unsigned long long aesl_llvm_cbe_624_count = 0;
  static  unsigned long long aesl_llvm_cbe_625_count = 0;
  static  unsigned long long aesl_llvm_cbe_626_count = 0;
  static  unsigned long long aesl_llvm_cbe_627_count = 0;
  static  unsigned long long aesl_llvm_cbe_628_count = 0;
  static  unsigned long long aesl_llvm_cbe_629_count = 0;
  static  unsigned long long aesl_llvm_cbe_630_count = 0;
  unsigned long long llvm_cbe_tmp__194;
  static  unsigned long long aesl_llvm_cbe_631_count = 0;
  signed int *llvm_cbe_tmp__195;
  static  unsigned long long aesl_llvm_cbe_632_count = 0;
  static  unsigned long long aesl_llvm_cbe_633_count = 0;
  static  unsigned long long aesl_llvm_cbe__2e_be_count = 0;
  unsigned int llvm_cbe__2e_be;
  unsigned int llvm_cbe__2e_be__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_634_count = 0;
  static  unsigned long long aesl_llvm_cbe_635_count = 0;
  static  unsigned long long aesl_llvm_cbe_or_2e_cond_count = 0;
  bool llvm_cbe_or_2e_cond;
  static  unsigned long long aesl_llvm_cbe_636_count = 0;
  static  unsigned long long aesl_llvm_cbe__2e_lcssa_count = 0;
  unsigned int llvm_cbe__2e_lcssa;
  unsigned int llvm_cbe__2e_lcssa__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_637_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @aesl_internal_rej_eta\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%or.cond7 = and i1 %%1, %% for 0x%I64xth hint within @aesl_internal_rej_eta  --> \n", ++aesl_llvm_cbe_or_2e_cond7_count);
  llvm_cbe_or_2e_cond7 = (bool )((((llvm_cbe_len&4294967295U) != (0u&4294967295U)) & ((llvm_cbe_buflen&4294967295U) != (0u&4294967295U)))&1);
if (AESL_DEBUG_TRACE)
printf("\nor.cond7 = 0x%X\n", llvm_cbe_or_2e_cond7);
  if (llvm_cbe_or_2e_cond7) {
    llvm_cbe_tmp__172__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    llvm_cbe_tmp__173__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph;
  } else {
    llvm_cbe__2e_lcssa__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_critedge;
  }

  do {     /* Syntactic loop '.lr.ph' to make GCC happy */
llvm_cbe__2e_lr_2e_ph:
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = phi i32 [ %%.be, %%.backedge ], [ 0, %%0  for 0x%I64xth hint within @aesl_internal_rej_eta  --> \n", ++aesl_llvm_cbe_575_count);
  llvm_cbe_tmp__172 = (unsigned int )llvm_cbe_tmp__172__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__172);
printf("\n.be = 0x%X",llvm_cbe__2e_be);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = phi i32 [ %%10, %%.backedge ], [ 0, %%0  for 0x%I64xth hint within @aesl_internal_rej_eta  --> \n", ++aesl_llvm_cbe_576_count);
  llvm_cbe_tmp__173 = (unsigned int )llvm_cbe_tmp__173__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__173);
printf("\n = 0x%X",llvm_cbe_tmp__179);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = zext i32 %%4 to i64, !dbg !15 for 0x%I64xth hint within @aesl_internal_rej_eta  --> \n", ++aesl_llvm_cbe_577_count);
  llvm_cbe_tmp__174 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__173&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__174);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds i8* %%buf, i64 %%5, !dbg !15 for 0x%I64xth hint within @aesl_internal_rej_eta  --> \n", ++aesl_llvm_cbe_578_count);
  llvm_cbe_tmp__175 = ( char *)(&llvm_cbe_buf[(((signed long long )llvm_cbe_tmp__174))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__174));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = load i8* %%6, align 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_rej_eta  --> \n", ++aesl_llvm_cbe_579_count);
  llvm_cbe_tmp__176 = (unsigned char )*llvm_cbe_tmp__175;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__176);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = zext i8 %%7 to i32, !dbg !15 for 0x%I64xth hint within @aesl_internal_rej_eta  --> \n", ++aesl_llvm_cbe_580_count);
  llvm_cbe_tmp__177 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__176&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__177);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = and i32 %%8, 15, !dbg !15 for 0x%I64xth hint within @aesl_internal_rej_eta  --> \n", ++aesl_llvm_cbe_581_count);
  llvm_cbe_tmp__178 = (unsigned int )llvm_cbe_tmp__177 & 15u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__178);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = add i32 %%4, 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_rej_eta  --> \n", ++aesl_llvm_cbe_587_count);
  llvm_cbe_tmp__179 = (unsigned int )((unsigned int )(llvm_cbe_tmp__173&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__179&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = lshr i32 %%8, 4, !dbg !15 for 0x%I64xth hint within @aesl_internal_rej_eta  --> \n", ++aesl_llvm_cbe_592_count);
  llvm_cbe_tmp__180 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__177&4294967295ull)) >> ((unsigned int )(4u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__180&4294967295ull)));
  if (((llvm_cbe_tmp__178&4294967295U) == (15u&4294967295U))) {
    llvm_cbe_tmp__188__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__172;   /* for PHI node */
    goto llvm_cbe_tmp__196;
  } else {
    goto llvm_cbe_tmp__197;
  }

llvm_cbe__2e_backedge:
if (AESL_DEBUG_TRACE)
printf("\n  %%.be = phi i32 [ %%30, %%25 ], [ %%22, %%21  for 0x%I64xth hint within @aesl_internal_rej_eta  --> \n", ++aesl_llvm_cbe__2e_be_count);
  llvm_cbe__2e_be = (unsigned int )llvm_cbe__2e_be__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n.be = 0x%X",llvm_cbe__2e_be);
printf("\n = 0x%X",llvm_cbe_tmp__193);
printf("\n = 0x%X",llvm_cbe_tmp__188);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%or.cond = and i1 %%33, %%3 for 0x%I64xth hint within @aesl_internal_rej_eta  --> \n", ++aesl_llvm_cbe_or_2e_cond_count);
  llvm_cbe_or_2e_cond = (bool )(((((unsigned int )llvm_cbe__2e_be&4294967295U) < ((unsigned int )llvm_cbe_len&4294967295U)) & (((unsigned int )llvm_cbe_tmp__179&4294967295U) < ((unsigned int )llvm_cbe_buflen&4294967295U)))&1);
if (AESL_DEBUG_TRACE)
printf("\nor.cond = 0x%X\n", llvm_cbe_or_2e_cond);
  if (llvm_cbe_or_2e_cond) {
    llvm_cbe_tmp__172__PHI_TEMPORARY = (unsigned int )llvm_cbe__2e_be;   /* for PHI node */
    llvm_cbe_tmp__173__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__179;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph;
  } else {
    llvm_cbe__2e_lcssa__PHI_TEMPORARY = (unsigned int )llvm_cbe__2e_be;   /* for PHI node */
    goto llvm_cbe__2e_critedge;
  }

llvm_cbe_tmp__196:
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = phi i32 [ %%18, %%13 ], [ %%3, %%.lr.ph  for 0x%I64xth hint within @aesl_internal_rej_eta  --> \n", ++aesl_llvm_cbe_615_count);
  llvm_cbe_tmp__188 = (unsigned int )llvm_cbe_tmp__188__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__188);
printf("\n = 0x%X",llvm_cbe_tmp__185);
printf("\n = 0x%X",llvm_cbe_tmp__172);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%or.cond1 = and i1 %%23, %%24, !dbg !15 for 0x%I64xth hint within @aesl_internal_rej_eta  --> \n", ++aesl_llvm_cbe_or_2e_cond1_count);
  llvm_cbe_or_2e_cond1 = (bool )((((llvm_cbe_tmp__180&4294967295U) != (15u&4294967295U)) & (((unsigned int )llvm_cbe_tmp__188&4294967295U) < ((unsigned int )llvm_cbe_len&4294967295U)))&1);
if (AESL_DEBUG_TRACE)
printf("\nor.cond1 = 0x%X\n", llvm_cbe_or_2e_cond1);
  if (llvm_cbe_or_2e_cond1) {
    goto llvm_cbe_tmp__198;
  } else {
    llvm_cbe__2e_be__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__188;   /* for PHI node */
    goto llvm_cbe__2e_backedge;
  }

llvm_cbe_tmp__197:
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = mul i32 %%9, 205, !dbg !16 for 0x%I64xth hint within @aesl_internal_rej_eta  --> \n", ++aesl_llvm_cbe_600_count);
  llvm_cbe_tmp__181 = (unsigned int )((unsigned int )(llvm_cbe_tmp__178&4294967295ull)) * ((unsigned int )(205u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__181&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = lshr i32 %%14, 10, !dbg !16 for 0x%I64xth hint within @aesl_internal_rej_eta  --> \n", ++aesl_llvm_cbe_601_count);
  llvm_cbe_tmp__182 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__181&4294967295ull)) >> ((unsigned int )(10u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__182&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = mul i32 %%15,  for 0x%I64xth hint within @aesl_internal_rej_eta  --> \n", ++aesl_llvm_cbe_602_count);
  llvm_cbe_tmp__183 = (unsigned int )((unsigned int )(llvm_cbe_tmp__182&4294967295ull)) * ((unsigned int )(5u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__183&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%.neg3 = sub i32 2, %%9, !dbg !16 for 0x%I64xth hint within @aesl_internal_rej_eta  --> \n", ++aesl_llvm_cbe__2e_neg3_count);
  llvm_cbe__2e_neg3 = (unsigned int )((unsigned int )(2u&4294967295ull)) - ((unsigned int )(llvm_cbe_tmp__178&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n.neg3 = 0x%X\n", ((unsigned int )(llvm_cbe__2e_neg3&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = add i32 %%.neg3, %%16, !dbg !14 for 0x%I64xth hint within @aesl_internal_rej_eta  --> \n", ++aesl_llvm_cbe_603_count);
  llvm_cbe_tmp__184 = (unsigned int )((unsigned int )(llvm_cbe__2e_neg3&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__183&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__184&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = add i32 %%3, 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_rej_eta  --> \n", ++aesl_llvm_cbe_604_count);
  llvm_cbe_tmp__185 = (unsigned int )((unsigned int )(llvm_cbe_tmp__172&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__185&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = zext i32 %%3 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_rej_eta  --> \n", ++aesl_llvm_cbe_611_count);
  llvm_cbe_tmp__186 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__172&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__186);
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = getelementptr inbounds i32* %%a, i64 %%19, !dbg !14 for 0x%I64xth hint within @aesl_internal_rej_eta  --> \n", ++aesl_llvm_cbe_612_count);
  llvm_cbe_tmp__187 = (signed int *)(&llvm_cbe_a[(((signed long long )llvm_cbe_tmp__186))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__186));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%17, i32* %%20, align 4, !dbg !14 for 0x%I64xth hint within @aesl_internal_rej_eta  --> \n", ++aesl_llvm_cbe_613_count);
  *llvm_cbe_tmp__187 = llvm_cbe_tmp__184;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__184);
  llvm_cbe_tmp__188__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__185;   /* for PHI node */
  goto llvm_cbe_tmp__196;

llvm_cbe_tmp__198:
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = mul i32 %%11, 205, !dbg !16 for 0x%I64xth hint within @aesl_internal_rej_eta  --> \n", ++aesl_llvm_cbe_619_count);
  llvm_cbe_tmp__189 = (unsigned int )((unsigned int )(llvm_cbe_tmp__180&4294967295ull)) * ((unsigned int )(205u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__189&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = lshr i32 %%26, 10, !dbg !16 for 0x%I64xth hint within @aesl_internal_rej_eta  --> \n", ++aesl_llvm_cbe_620_count);
  llvm_cbe_tmp__190 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__189&4294967295ull)) >> ((unsigned int )(10u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__190&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = mul i32 %%27,  for 0x%I64xth hint within @aesl_internal_rej_eta  --> \n", ++aesl_llvm_cbe_621_count);
  llvm_cbe_tmp__191 = (unsigned int )((unsigned int )(llvm_cbe_tmp__190&4294967295ull)) * ((unsigned int )(5u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__191&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%.neg6 = sub i32 2, %%11, !dbg !16 for 0x%I64xth hint within @aesl_internal_rej_eta  --> \n", ++aesl_llvm_cbe__2e_neg6_count);
  llvm_cbe__2e_neg6 = (unsigned int )((unsigned int )(2u&4294967295ull)) - ((unsigned int )(llvm_cbe_tmp__180&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n.neg6 = 0x%X\n", ((unsigned int )(llvm_cbe__2e_neg6&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = add i32 %%.neg6, %%28, !dbg !14 for 0x%I64xth hint within @aesl_internal_rej_eta  --> \n", ++aesl_llvm_cbe_622_count);
  llvm_cbe_tmp__192 = (unsigned int )((unsigned int )(llvm_cbe__2e_neg6&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__191&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__192&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = add i32 %%22, 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_rej_eta  --> \n", ++aesl_llvm_cbe_623_count);
  llvm_cbe_tmp__193 = (unsigned int )((unsigned int )(llvm_cbe_tmp__188&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__193&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = zext i32 %%22 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_rej_eta  --> \n", ++aesl_llvm_cbe_630_count);
  llvm_cbe_tmp__194 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__188&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__194);
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = getelementptr inbounds i32* %%a, i64 %%31, !dbg !14 for 0x%I64xth hint within @aesl_internal_rej_eta  --> \n", ++aesl_llvm_cbe_631_count);
  llvm_cbe_tmp__195 = (signed int *)(&llvm_cbe_a[(((signed long long )llvm_cbe_tmp__194))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__194));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%29, i32* %%32, align 4, !dbg !14 for 0x%I64xth hint within @aesl_internal_rej_eta  --> \n", ++aesl_llvm_cbe_632_count);
  *llvm_cbe_tmp__195 = llvm_cbe_tmp__192;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__192);
  llvm_cbe__2e_be__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__193;   /* for PHI node */
  goto llvm_cbe__2e_backedge;

  } while (1); /* end of syntactic loop '.lr.ph' */
llvm_cbe__2e_critedge:
if (AESL_DEBUG_TRACE)
printf("\n  %%.lcssa = phi i32 [ 0, %%0 ], [ %%.be, %%.backedge  for 0x%I64xth hint within @aesl_internal_rej_eta  --> \n", ++aesl_llvm_cbe__2e_lcssa_count);
  llvm_cbe__2e_lcssa = (unsigned int )llvm_cbe__2e_lcssa__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n.lcssa = 0x%X",llvm_cbe__2e_lcssa);
printf("\n = 0x%X",0u);
printf("\n.be = 0x%X",llvm_cbe__2e_be);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @aesl_internal_rej_eta}\n");
  return llvm_cbe__2e_lcssa;
}


void pqcrystals_dilithium2_ref_poly_uniform_gamma1(l_struct_OC_poly *llvm_cbe_a,  char *llvm_cbe_seed, signed short llvm_cbe_nonce) {
  static  unsigned long long aesl_llvm_cbe_buf_count = 0;
   char llvm_cbe_buf[680];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_state_count = 0;
  l_struct_OC_keccak_state llvm_cbe_state;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_638_count = 0;
  static  unsigned long long aesl_llvm_cbe_639_count = 0;
  static  unsigned long long aesl_llvm_cbe_640_count = 0;
  static  unsigned long long aesl_llvm_cbe_641_count = 0;
  static  unsigned long long aesl_llvm_cbe_642_count = 0;
  static  unsigned long long aesl_llvm_cbe_643_count = 0;
  static  unsigned long long aesl_llvm_cbe_644_count = 0;
  static  unsigned long long aesl_llvm_cbe_645_count = 0;
  static  unsigned long long aesl_llvm_cbe_646_count = 0;
  static  unsigned long long aesl_llvm_cbe_647_count = 0;
   char *llvm_cbe_tmp__199;
  static  unsigned long long aesl_llvm_cbe_648_count = 0;
  static  unsigned long long aesl_llvm_cbe_649_count = 0;
  static  unsigned long long aesl_llvm_cbe_650_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_poly_uniform_gamma1\n");
if (AESL_DEBUG_TRACE)
printf("\n  call void @pqcrystals_dilithium2_ref_dilithium_shake256_stream_init(%%struct.keccak_state* %%state, i8* %%seed, i16 zeroext %%nonce) nounwind, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_uniform_gamma1  --> \n", ++aesl_llvm_cbe_646_count);
  pqcrystals_dilithium2_ref_dilithium_shake256_stream_init((l_struct_OC_keccak_state *)(&llvm_cbe_state), ( char *)llvm_cbe_seed, llvm_cbe_nonce);
if (AESL_DEBUG_TRACE) {
printf("\nArgument nonce = 0x%X",llvm_cbe_nonce);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds [680 x i8]* %%buf, i64 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_uniform_gamma1  --> \n", ++aesl_llvm_cbe_647_count);
  llvm_cbe_tmp__199 = ( char *)(&llvm_cbe_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 680
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @shake256_squeezeblocks(i8* %%1, i64 5, %%struct.keccak_state* %%state) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_uniform_gamma1  --> \n", ++aesl_llvm_cbe_648_count);
  shake256_squeezeblocks(( char *)llvm_cbe_tmp__199, 5ull, (l_struct_OC_keccak_state *)(&llvm_cbe_state));
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",5ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @pqcrystals_dilithium2_ref_polyz_unpack(%%struct.poly* %%a, i8* %%1), !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_uniform_gamma1  --> \n", ++aesl_llvm_cbe_649_count);
  pqcrystals_dilithium2_ref_polyz_unpack((l_struct_OC_poly *)llvm_cbe_a, ( char *)llvm_cbe_tmp__199);
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_poly_uniform_gamma1}\n");
  return;
}


void pqcrystals_dilithium2_ref_polyz_unpack(l_struct_OC_poly *llvm_cbe_r,  char *llvm_cbe_a) {
  static  unsigned long long aesl_llvm_cbe_651_count = 0;
  static  unsigned long long aesl_llvm_cbe_652_count = 0;
  static  unsigned long long aesl_llvm_cbe_653_count = 0;
  static  unsigned long long aesl_llvm_cbe_654_count = 0;
  static  unsigned long long aesl_llvm_cbe_655_count = 0;
  static  unsigned long long aesl_llvm_cbe_656_count = 0;
  static  unsigned long long aesl_llvm_cbe_657_count = 0;
  static  unsigned long long aesl_llvm_cbe_658_count = 0;
  static  unsigned long long aesl_llvm_cbe_659_count = 0;
  static  unsigned long long aesl_llvm_cbe_660_count = 0;
  static  unsigned long long aesl_llvm_cbe_661_count = 0;
  static  unsigned long long aesl_llvm_cbe_662_count = 0;
  static  unsigned long long aesl_llvm_cbe_663_count = 0;
  static  unsigned long long aesl_llvm_cbe_664_count = 0;
  static  unsigned long long aesl_llvm_cbe_665_count = 0;
  static  unsigned long long aesl_llvm_cbe_666_count = 0;
  static  unsigned long long aesl_llvm_cbe_667_count = 0;
  static  unsigned long long aesl_llvm_cbe_668_count = 0;
  static  unsigned long long aesl_llvm_cbe_669_count = 0;
  static  unsigned long long aesl_llvm_cbe_670_count = 0;
  static  unsigned long long aesl_llvm_cbe_671_count = 0;
  static  unsigned long long aesl_llvm_cbe_672_count = 0;
  static  unsigned long long aesl_llvm_cbe_673_count = 0;
  static  unsigned long long aesl_llvm_cbe_674_count = 0;
  static  unsigned long long aesl_llvm_cbe_675_count = 0;
  static  unsigned long long aesl_llvm_cbe_676_count = 0;
  static  unsigned long long aesl_llvm_cbe_677_count = 0;
  static  unsigned long long aesl_llvm_cbe_678_count = 0;
  static  unsigned long long aesl_llvm_cbe_679_count = 0;
  static  unsigned long long aesl_llvm_cbe_680_count = 0;
  static  unsigned long long aesl_llvm_cbe_681_count = 0;
  static  unsigned long long aesl_llvm_cbe_682_count = 0;
  static  unsigned long long aesl_llvm_cbe_683_count = 0;
  static  unsigned long long aesl_llvm_cbe_684_count = 0;
  static  unsigned long long aesl_llvm_cbe_685_count = 0;
  static  unsigned long long aesl_llvm_cbe_686_count = 0;
  static  unsigned long long aesl_llvm_cbe_687_count = 0;
  static  unsigned long long aesl_llvm_cbe_688_count = 0;
  static  unsigned long long aesl_llvm_cbe_689_count = 0;
  static  unsigned long long aesl_llvm_cbe_690_count = 0;
  static  unsigned long long aesl_llvm_cbe_691_count = 0;
  static  unsigned long long aesl_llvm_cbe_692_count = 0;
  static  unsigned long long aesl_llvm_cbe_693_count = 0;
  static  unsigned long long aesl_llvm_cbe_694_count = 0;
  static  unsigned long long aesl_llvm_cbe_695_count = 0;
  static  unsigned long long aesl_llvm_cbe_696_count = 0;
  static  unsigned long long aesl_llvm_cbe_697_count = 0;
  static  unsigned long long aesl_llvm_cbe_698_count = 0;
  static  unsigned long long aesl_llvm_cbe_699_count = 0;
  static  unsigned long long aesl_llvm_cbe_700_count = 0;
  static  unsigned long long aesl_llvm_cbe_701_count = 0;
  static  unsigned long long aesl_llvm_cbe_702_count = 0;
  static  unsigned long long aesl_llvm_cbe_703_count = 0;
  static  unsigned long long aesl_llvm_cbe_704_count = 0;
  static  unsigned long long aesl_llvm_cbe_705_count = 0;
  static  unsigned long long aesl_llvm_cbe_706_count = 0;
  static  unsigned long long aesl_llvm_cbe_707_count = 0;
  static  unsigned long long aesl_llvm_cbe_708_count = 0;
  static  unsigned long long aesl_llvm_cbe_709_count = 0;
  static  unsigned long long aesl_llvm_cbe_710_count = 0;
  static  unsigned long long aesl_llvm_cbe_711_count = 0;
  static  unsigned long long aesl_llvm_cbe_712_count = 0;
  static  unsigned long long aesl_llvm_cbe_713_count = 0;
  static  unsigned long long aesl_llvm_cbe_714_count = 0;
  static  unsigned long long aesl_llvm_cbe_715_count = 0;
  static  unsigned long long aesl_llvm_cbe_716_count = 0;
  static  unsigned long long aesl_llvm_cbe_717_count = 0;
  static  unsigned long long aesl_llvm_cbe_718_count = 0;
  static  unsigned long long aesl_llvm_cbe_719_count = 0;
  static  unsigned long long aesl_llvm_cbe_720_count = 0;
  static  unsigned long long aesl_llvm_cbe_721_count = 0;
  static  unsigned long long aesl_llvm_cbe_722_count = 0;
  static  unsigned long long aesl_llvm_cbe_723_count = 0;
  static  unsigned long long aesl_llvm_cbe_724_count = 0;
  static  unsigned long long aesl_llvm_cbe_725_count = 0;
  static  unsigned long long aesl_llvm_cbe_726_count = 0;
  static  unsigned long long aesl_llvm_cbe_727_count = 0;
  static  unsigned long long aesl_llvm_cbe_728_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  unsigned int llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_729_count = 0;
  unsigned int llvm_cbe_tmp__200;
  static  unsigned long long aesl_llvm_cbe_730_count = 0;
  unsigned long long llvm_cbe_tmp__201;
  static  unsigned long long aesl_llvm_cbe_731_count = 0;
   char *llvm_cbe_tmp__202;
  static  unsigned long long aesl_llvm_cbe_732_count = 0;
  unsigned char llvm_cbe_tmp__203;
  static  unsigned long long aesl_llvm_cbe_733_count = 0;
  unsigned int llvm_cbe_tmp__204;
  static  unsigned long long aesl_llvm_cbe_734_count = 0;
  unsigned int llvm_cbe_tmp__205;
  static  unsigned long long aesl_llvm_cbe_735_count = 0;
  unsigned long long llvm_cbe_tmp__206;
  static  unsigned long long aesl_llvm_cbe_736_count = 0;
  signed int *llvm_cbe_tmp__207;
  static  unsigned long long aesl_llvm_cbe_737_count = 0;
  static  unsigned long long aesl_llvm_cbe_738_count = 0;
  unsigned int llvm_cbe_tmp__208;
  static  unsigned long long aesl_llvm_cbe_739_count = 0;
  unsigned long long llvm_cbe_tmp__209;
  static  unsigned long long aesl_llvm_cbe_740_count = 0;
   char *llvm_cbe_tmp__210;
  static  unsigned long long aesl_llvm_cbe_741_count = 0;
  unsigned char llvm_cbe_tmp__211;
  static  unsigned long long aesl_llvm_cbe_742_count = 0;
  unsigned int llvm_cbe_tmp__212;
  static  unsigned long long aesl_llvm_cbe_743_count = 0;
  unsigned int llvm_cbe_tmp__213;
  static  unsigned long long aesl_llvm_cbe_744_count = 0;
  unsigned int llvm_cbe_tmp__214;
  static  unsigned long long aesl_llvm_cbe_745_count = 0;
  static  unsigned long long aesl_llvm_cbe_746_count = 0;
  unsigned int llvm_cbe_tmp__215;
  static  unsigned long long aesl_llvm_cbe_747_count = 0;
  unsigned long long llvm_cbe_tmp__216;
  static  unsigned long long aesl_llvm_cbe_748_count = 0;
   char *llvm_cbe_tmp__217;
  static  unsigned long long aesl_llvm_cbe_749_count = 0;
  unsigned char llvm_cbe_tmp__218;
  static  unsigned long long aesl_llvm_cbe_750_count = 0;
  unsigned int llvm_cbe_tmp__219;
  static  unsigned long long aesl_llvm_cbe_751_count = 0;
  unsigned int llvm_cbe_tmp__220;
  static  unsigned long long aesl_llvm_cbe_752_count = 0;
  unsigned int llvm_cbe_tmp__221;
  static  unsigned long long aesl_llvm_cbe_753_count = 0;
  unsigned int llvm_cbe_tmp__222;
  static  unsigned long long aesl_llvm_cbe_754_count = 0;
  static  unsigned long long aesl_llvm_cbe_755_count = 0;
  unsigned char llvm_cbe_tmp__223;
  static  unsigned long long aesl_llvm_cbe_756_count = 0;
  unsigned int llvm_cbe_tmp__224;
  static  unsigned long long aesl_llvm_cbe_757_count = 0;
  unsigned int llvm_cbe_tmp__225;
  static  unsigned long long aesl_llvm_cbe_758_count = 0;
  unsigned int llvm_cbe_tmp__226;
  static  unsigned long long aesl_llvm_cbe_759_count = 0;
  unsigned long long llvm_cbe_tmp__227;
  static  unsigned long long aesl_llvm_cbe_760_count = 0;
  signed int *llvm_cbe_tmp__228;
  static  unsigned long long aesl_llvm_cbe_761_count = 0;
  static  unsigned long long aesl_llvm_cbe_762_count = 0;
  unsigned int llvm_cbe_tmp__229;
  static  unsigned long long aesl_llvm_cbe_763_count = 0;
  unsigned long long llvm_cbe_tmp__230;
  static  unsigned long long aesl_llvm_cbe_764_count = 0;
   char *llvm_cbe_tmp__231;
  static  unsigned long long aesl_llvm_cbe_765_count = 0;
  unsigned char llvm_cbe_tmp__232;
  static  unsigned long long aesl_llvm_cbe_766_count = 0;
  unsigned int llvm_cbe_tmp__233;
  static  unsigned long long aesl_llvm_cbe_767_count = 0;
  unsigned int llvm_cbe_tmp__234;
  static  unsigned long long aesl_llvm_cbe_768_count = 0;
  unsigned int llvm_cbe_tmp__235;
  static  unsigned long long aesl_llvm_cbe_769_count = 0;
  static  unsigned long long aesl_llvm_cbe_770_count = 0;
  unsigned int llvm_cbe_tmp__236;
  static  unsigned long long aesl_llvm_cbe_771_count = 0;
  unsigned long long llvm_cbe_tmp__237;
  static  unsigned long long aesl_llvm_cbe_772_count = 0;
   char *llvm_cbe_tmp__238;
  static  unsigned long long aesl_llvm_cbe_773_count = 0;
  unsigned char llvm_cbe_tmp__239;
  static  unsigned long long aesl_llvm_cbe_774_count = 0;
  unsigned int llvm_cbe_tmp__240;
  static  unsigned long long aesl_llvm_cbe_775_count = 0;
  unsigned int llvm_cbe_tmp__241;
  static  unsigned long long aesl_llvm_cbe_776_count = 0;
  unsigned int llvm_cbe_tmp__242;
  static  unsigned long long aesl_llvm_cbe_777_count = 0;
  unsigned int llvm_cbe_tmp__243;
  static  unsigned long long aesl_llvm_cbe_778_count = 0;
  static  unsigned long long aesl_llvm_cbe_779_count = 0;
  unsigned char llvm_cbe_tmp__244;
  static  unsigned long long aesl_llvm_cbe_780_count = 0;
  unsigned int llvm_cbe_tmp__245;
  static  unsigned long long aesl_llvm_cbe_781_count = 0;
  unsigned int llvm_cbe_tmp__246;
  static  unsigned long long aesl_llvm_cbe_782_count = 0;
  unsigned int llvm_cbe_tmp__247;
  static  unsigned long long aesl_llvm_cbe_783_count = 0;
  unsigned long long llvm_cbe_tmp__248;
  static  unsigned long long aesl_llvm_cbe_784_count = 0;
  signed int *llvm_cbe_tmp__249;
  static  unsigned long long aesl_llvm_cbe_785_count = 0;
  static  unsigned long long aesl_llvm_cbe_786_count = 0;
  unsigned int llvm_cbe_tmp__250;
  static  unsigned long long aesl_llvm_cbe_787_count = 0;
  unsigned long long llvm_cbe_tmp__251;
  static  unsigned long long aesl_llvm_cbe_788_count = 0;
   char *llvm_cbe_tmp__252;
  static  unsigned long long aesl_llvm_cbe_789_count = 0;
  unsigned char llvm_cbe_tmp__253;
  static  unsigned long long aesl_llvm_cbe_790_count = 0;
  unsigned int llvm_cbe_tmp__254;
  static  unsigned long long aesl_llvm_cbe_791_count = 0;
  unsigned int llvm_cbe_tmp__255;
  static  unsigned long long aesl_llvm_cbe_792_count = 0;
  unsigned int llvm_cbe_tmp__256;
  static  unsigned long long aesl_llvm_cbe_793_count = 0;
  static  unsigned long long aesl_llvm_cbe_794_count = 0;
  unsigned int llvm_cbe_tmp__257;
  static  unsigned long long aesl_llvm_cbe_795_count = 0;
  unsigned long long llvm_cbe_tmp__258;
  static  unsigned long long aesl_llvm_cbe_796_count = 0;
   char *llvm_cbe_tmp__259;
  static  unsigned long long aesl_llvm_cbe_797_count = 0;
  unsigned char llvm_cbe_tmp__260;
  static  unsigned long long aesl_llvm_cbe_798_count = 0;
  unsigned int llvm_cbe_tmp__261;
  static  unsigned long long aesl_llvm_cbe_799_count = 0;
  unsigned int llvm_cbe_tmp__262;
  static  unsigned long long aesl_llvm_cbe_800_count = 0;
  unsigned int llvm_cbe_tmp__263;
  static  unsigned long long aesl_llvm_cbe_801_count = 0;
  unsigned int llvm_cbe_tmp__264;
  static  unsigned long long aesl_llvm_cbe_802_count = 0;
  static  unsigned long long aesl_llvm_cbe_803_count = 0;
  unsigned char llvm_cbe_tmp__265;
  static  unsigned long long aesl_llvm_cbe_804_count = 0;
  unsigned int llvm_cbe_tmp__266;
  static  unsigned long long aesl_llvm_cbe_805_count = 0;
  unsigned int llvm_cbe_tmp__267;
  static  unsigned long long aesl_llvm_cbe_806_count = 0;
  unsigned int llvm_cbe_tmp__268;
  static  unsigned long long aesl_llvm_cbe_807_count = 0;
  unsigned long long llvm_cbe_tmp__269;
  static  unsigned long long aesl_llvm_cbe_808_count = 0;
  signed int *llvm_cbe_tmp__270;
  static  unsigned long long aesl_llvm_cbe_809_count = 0;
  static  unsigned long long aesl_llvm_cbe_810_count = 0;
  unsigned int llvm_cbe_tmp__271;
  static  unsigned long long aesl_llvm_cbe_811_count = 0;
  unsigned long long llvm_cbe_tmp__272;
  static  unsigned long long aesl_llvm_cbe_812_count = 0;
   char *llvm_cbe_tmp__273;
  static  unsigned long long aesl_llvm_cbe_813_count = 0;
  unsigned char llvm_cbe_tmp__274;
  static  unsigned long long aesl_llvm_cbe_814_count = 0;
  unsigned int llvm_cbe_tmp__275;
  static  unsigned long long aesl_llvm_cbe_815_count = 0;
  unsigned int llvm_cbe_tmp__276;
  static  unsigned long long aesl_llvm_cbe_816_count = 0;
  unsigned int llvm_cbe_tmp__277;
  static  unsigned long long aesl_llvm_cbe_817_count = 0;
  static  unsigned long long aesl_llvm_cbe_818_count = 0;
  unsigned int llvm_cbe_tmp__278;
  static  unsigned long long aesl_llvm_cbe_819_count = 0;
  unsigned long long llvm_cbe_tmp__279;
  static  unsigned long long aesl_llvm_cbe_820_count = 0;
   char *llvm_cbe_tmp__280;
  static  unsigned long long aesl_llvm_cbe_821_count = 0;
  unsigned char llvm_cbe_tmp__281;
  static  unsigned long long aesl_llvm_cbe_822_count = 0;
  unsigned int llvm_cbe_tmp__282;
  static  unsigned long long aesl_llvm_cbe_823_count = 0;
  unsigned int llvm_cbe_tmp__283;
  static  unsigned long long aesl_llvm_cbe_824_count = 0;
  unsigned int llvm_cbe_tmp__284;
  static  unsigned long long aesl_llvm_cbe_825_count = 0;
  unsigned int llvm_cbe_tmp__285;
  static  unsigned long long aesl_llvm_cbe_826_count = 0;
  static  unsigned long long aesl_llvm_cbe_827_count = 0;
  unsigned int llvm_cbe_tmp__286;
  static  unsigned long long aesl_llvm_cbe_828_count = 0;
  static  unsigned long long aesl_llvm_cbe_829_count = 0;
  unsigned int llvm_cbe_tmp__287;
  static  unsigned long long aesl_llvm_cbe_830_count = 0;
  static  unsigned long long aesl_llvm_cbe_831_count = 0;
  unsigned int llvm_cbe_tmp__288;
  static  unsigned long long aesl_llvm_cbe_832_count = 0;
  static  unsigned long long aesl_llvm_cbe_833_count = 0;
  unsigned int llvm_cbe_tmp__289;
  static  unsigned long long aesl_llvm_cbe_834_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_854_count = 0;
  static  unsigned long long aesl_llvm_cbe_855_count = 0;
  static  unsigned long long aesl_llvm_cbe_856_count = 0;
  static  unsigned long long aesl_llvm_cbe_857_count = 0;
  static  unsigned long long aesl_llvm_cbe_858_count = 0;
  static  unsigned long long aesl_llvm_cbe_859_count = 0;
  static  unsigned long long aesl_llvm_cbe_860_count = 0;
  static  unsigned long long aesl_llvm_cbe_861_count = 0;
  static  unsigned long long aesl_llvm_cbe_862_count = 0;
  static  unsigned long long aesl_llvm_cbe_863_count = 0;
  static  unsigned long long aesl_llvm_cbe_864_count = 0;
  static  unsigned long long aesl_llvm_cbe_865_count = 0;
  static  unsigned long long aesl_llvm_cbe_866_count = 0;
  static  unsigned long long aesl_llvm_cbe_867_count = 0;
  static  unsigned long long aesl_llvm_cbe_868_count = 0;
  static  unsigned long long aesl_llvm_cbe_869_count = 0;
  static  unsigned long long aesl_llvm_cbe_870_count = 0;
  static  unsigned long long aesl_llvm_cbe_871_count = 0;
  static  unsigned long long aesl_llvm_cbe_872_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_873_count = 0;
  static  unsigned long long aesl_llvm_cbe_874_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_polyz_unpack\n");
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__290;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__290:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i32 [ 0, %%0 ], [ %%91, %%1  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__289);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = mul i32 %%storemerge1, 9, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_729_count);
  llvm_cbe_tmp__200 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) * ((unsigned int )(9u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__200&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = zext i32 %%2 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_730_count);
  llvm_cbe_tmp__201 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__200&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__201);
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds i8* %%a, i64 %%3, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_731_count);
  llvm_cbe_tmp__202 = ( char *)(&llvm_cbe_a[(((signed long long )llvm_cbe_tmp__201))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__201));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = load i8* %%4, align 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_732_count);
  llvm_cbe_tmp__203 = (unsigned char )*llvm_cbe_tmp__202;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__203);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = zext i8 %%5 to i32, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_733_count);
  llvm_cbe_tmp__204 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__203&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__204);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = shl i32 %%storemerge1, 2, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_734_count);
  llvm_cbe_tmp__205 = (unsigned int )llvm_cbe_storemerge1 << 2u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__205);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = zext i32 %%7 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_735_count);
  llvm_cbe_tmp__206 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__205&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__206);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%8, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_736_count);
  llvm_cbe_tmp__207 = (signed int *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__206))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__206));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%6, i32* %%9, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_737_count);
  *llvm_cbe_tmp__207 = llvm_cbe_tmp__204;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__204);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = add i32 %%2, 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_738_count);
  llvm_cbe_tmp__208 = (unsigned int )((unsigned int )(llvm_cbe_tmp__200&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__208&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = zext i32 %%10 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_739_count);
  llvm_cbe_tmp__209 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__208&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__209);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = getelementptr inbounds i8* %%a, i64 %%11, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_740_count);
  llvm_cbe_tmp__210 = ( char *)(&llvm_cbe_a[(((signed long long )llvm_cbe_tmp__209))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__209));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = load i8* %%12, align 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_741_count);
  llvm_cbe_tmp__211 = (unsigned char )*llvm_cbe_tmp__210;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__211);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = zext i8 %%13 to i32, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_742_count);
  llvm_cbe_tmp__212 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__211&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__212);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = shl nuw nsw i32 %%14, 8, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_743_count);
  llvm_cbe_tmp__213 = (unsigned int )llvm_cbe_tmp__212 << 8u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__213);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = or i32 %%15, %%6, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_744_count);
  llvm_cbe_tmp__214 = (unsigned int )llvm_cbe_tmp__213 | llvm_cbe_tmp__204;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__214);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%16, i32* %%9, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_745_count);
  *llvm_cbe_tmp__207 = llvm_cbe_tmp__214;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__214);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = add i32 %%2, 2, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_746_count);
  llvm_cbe_tmp__215 = (unsigned int )((unsigned int )(llvm_cbe_tmp__200&4294967295ull)) + ((unsigned int )(2u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__215&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = zext i32 %%17 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_747_count);
  llvm_cbe_tmp__216 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__215&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__216);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = getelementptr inbounds i8* %%a, i64 %%18, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_748_count);
  llvm_cbe_tmp__217 = ( char *)(&llvm_cbe_a[(((signed long long )llvm_cbe_tmp__216))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__216));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = load i8* %%19, align 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_749_count);
  llvm_cbe_tmp__218 = (unsigned char )*llvm_cbe_tmp__217;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__218);
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = zext i8 %%20 to i32, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_750_count);
  llvm_cbe_tmp__219 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__218&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__219);
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = shl nuw nsw i32 %%21, 16, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_751_count);
  llvm_cbe_tmp__220 = (unsigned int )llvm_cbe_tmp__219 << 16u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__220);
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = and i32 %%22, 196608, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_752_count);
  llvm_cbe_tmp__221 = (unsigned int )llvm_cbe_tmp__220 & 196608u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__221);
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = or i32 %%23, %%16, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_753_count);
  llvm_cbe_tmp__222 = (unsigned int )llvm_cbe_tmp__221 | llvm_cbe_tmp__214;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__222);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%24, i32* %%9, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_754_count);
  *llvm_cbe_tmp__207 = llvm_cbe_tmp__222;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__222);
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = load i8* %%19, align 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_755_count);
  llvm_cbe_tmp__223 = (unsigned char )*llvm_cbe_tmp__217;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__223);
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = zext i8 %%25 to i32, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_756_count);
  llvm_cbe_tmp__224 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__223&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__224);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = lshr i32 %%26, 2, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_757_count);
  llvm_cbe_tmp__225 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__224&4294967295ull)) >> ((unsigned int )(2u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__225&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = or i32 %%7, 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_758_count);
  llvm_cbe_tmp__226 = (unsigned int )llvm_cbe_tmp__205 | 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__226);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = zext i32 %%28 to i64, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_759_count);
  llvm_cbe_tmp__227 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__226&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__227);
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%29, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_760_count);
  llvm_cbe_tmp__228 = (signed int *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__227))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__227));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%27, i32* %%30, align 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_761_count);
  *llvm_cbe_tmp__228 = llvm_cbe_tmp__225;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__225);
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = add i32 %%2, 3, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_762_count);
  llvm_cbe_tmp__229 = (unsigned int )((unsigned int )(llvm_cbe_tmp__200&4294967295ull)) + ((unsigned int )(3u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__229&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = zext i32 %%31 to i64, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_763_count);
  llvm_cbe_tmp__230 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__229&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__230);
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = getelementptr inbounds i8* %%a, i64 %%32, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_764_count);
  llvm_cbe_tmp__231 = ( char *)(&llvm_cbe_a[(((signed long long )llvm_cbe_tmp__230))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__230));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = load i8* %%33, align 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_765_count);
  llvm_cbe_tmp__232 = (unsigned char )*llvm_cbe_tmp__231;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__232);
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = zext i8 %%34 to i32, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_766_count);
  llvm_cbe_tmp__233 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__232&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__233);
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = shl nuw nsw i32 %%35, 6, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_767_count);
  llvm_cbe_tmp__234 = (unsigned int )llvm_cbe_tmp__233 << 6u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__234);
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = or i32 %%36, %%27, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_768_count);
  llvm_cbe_tmp__235 = (unsigned int )llvm_cbe_tmp__234 | llvm_cbe_tmp__225;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__235);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%37, i32* %%30, align 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_769_count);
  *llvm_cbe_tmp__228 = llvm_cbe_tmp__235;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__235);
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = add i32 %%2, 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_770_count);
  llvm_cbe_tmp__236 = (unsigned int )((unsigned int )(llvm_cbe_tmp__200&4294967295ull)) + ((unsigned int )(4u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__236&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = zext i32 %%38 to i64, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_771_count);
  llvm_cbe_tmp__237 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__236&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__237);
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = getelementptr inbounds i8* %%a, i64 %%39, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_772_count);
  llvm_cbe_tmp__238 = ( char *)(&llvm_cbe_a[(((signed long long )llvm_cbe_tmp__237))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__237));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = load i8* %%40, align 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_773_count);
  llvm_cbe_tmp__239 = (unsigned char )*llvm_cbe_tmp__238;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__239);
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = zext i8 %%41 to i32, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_774_count);
  llvm_cbe_tmp__240 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__239&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__240);
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = shl nuw nsw i32 %%42, 14, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_775_count);
  llvm_cbe_tmp__241 = (unsigned int )llvm_cbe_tmp__240 << 14u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__241);
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = and i32 %%43, 245760, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_776_count);
  llvm_cbe_tmp__242 = (unsigned int )llvm_cbe_tmp__241 & 245760u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__242);
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = or i32 %%44, %%37, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_777_count);
  llvm_cbe_tmp__243 = (unsigned int )llvm_cbe_tmp__242 | llvm_cbe_tmp__235;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__243);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%45, i32* %%30, align 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_778_count);
  *llvm_cbe_tmp__228 = llvm_cbe_tmp__243;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__243);
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = load i8* %%40, align 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_779_count);
  llvm_cbe_tmp__244 = (unsigned char )*llvm_cbe_tmp__238;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__244);
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = zext i8 %%46 to i32, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_780_count);
  llvm_cbe_tmp__245 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__244&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__245);
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = lshr i32 %%47, 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_781_count);
  llvm_cbe_tmp__246 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__245&4294967295ull)) >> ((unsigned int )(4u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__246&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = or i32 %%7, 2, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_782_count);
  llvm_cbe_tmp__247 = (unsigned int )llvm_cbe_tmp__205 | 2u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__247);
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = zext i32 %%49 to i64, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_783_count);
  llvm_cbe_tmp__248 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__247&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__248);
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%50, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_784_count);
  llvm_cbe_tmp__249 = (signed int *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__248))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__248));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%48, i32* %%51, align 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_785_count);
  *llvm_cbe_tmp__249 = llvm_cbe_tmp__246;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__246);
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = add i32 %%2, 5, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_786_count);
  llvm_cbe_tmp__250 = (unsigned int )((unsigned int )(llvm_cbe_tmp__200&4294967295ull)) + ((unsigned int )(5u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__250&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = zext i32 %%52 to i64, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_787_count);
  llvm_cbe_tmp__251 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__250&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__251);
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = getelementptr inbounds i8* %%a, i64 %%53, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_788_count);
  llvm_cbe_tmp__252 = ( char *)(&llvm_cbe_a[(((signed long long )llvm_cbe_tmp__251))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__251));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = load i8* %%54, align 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_789_count);
  llvm_cbe_tmp__253 = (unsigned char )*llvm_cbe_tmp__252;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__253);
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = zext i8 %%55 to i32, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_790_count);
  llvm_cbe_tmp__254 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__253&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__254);
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = shl nuw nsw i32 %%56, 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_791_count);
  llvm_cbe_tmp__255 = (unsigned int )llvm_cbe_tmp__254 << 4u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__255);
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = or i32 %%57, %%48, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_792_count);
  llvm_cbe_tmp__256 = (unsigned int )llvm_cbe_tmp__255 | llvm_cbe_tmp__246;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__256);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%58, i32* %%51, align 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_793_count);
  *llvm_cbe_tmp__249 = llvm_cbe_tmp__256;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__256);
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = add i32 %%2, 6, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_794_count);
  llvm_cbe_tmp__257 = (unsigned int )((unsigned int )(llvm_cbe_tmp__200&4294967295ull)) + ((unsigned int )(6u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__257&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = zext i32 %%59 to i64, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_795_count);
  llvm_cbe_tmp__258 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__257&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__258);
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = getelementptr inbounds i8* %%a, i64 %%60, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_796_count);
  llvm_cbe_tmp__259 = ( char *)(&llvm_cbe_a[(((signed long long )llvm_cbe_tmp__258))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__258));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = load i8* %%61, align 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_797_count);
  llvm_cbe_tmp__260 = (unsigned char )*llvm_cbe_tmp__259;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__260);
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = zext i8 %%62 to i32, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_798_count);
  llvm_cbe_tmp__261 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__260&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__261);
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = shl nuw nsw i32 %%63, 12, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_799_count);
  llvm_cbe_tmp__262 = (unsigned int )llvm_cbe_tmp__261 << 12u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__262);
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = and i32 %%64, 258048, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_800_count);
  llvm_cbe_tmp__263 = (unsigned int )llvm_cbe_tmp__262 & 258048u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__263);
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = or i32 %%65, %%58, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_801_count);
  llvm_cbe_tmp__264 = (unsigned int )llvm_cbe_tmp__263 | llvm_cbe_tmp__256;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__264);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%66, i32* %%51, align 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_802_count);
  *llvm_cbe_tmp__249 = llvm_cbe_tmp__264;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__264);
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = load i8* %%61, align 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_803_count);
  llvm_cbe_tmp__265 = (unsigned char )*llvm_cbe_tmp__259;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__265);
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = zext i8 %%67 to i32, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_804_count);
  llvm_cbe_tmp__266 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__265&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__266);
if (AESL_DEBUG_TRACE)
printf("\n  %%69 = lshr i32 %%68, 6, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_805_count);
  llvm_cbe_tmp__267 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__266&4294967295ull)) >> ((unsigned int )(6u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__267&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%70 = or i32 %%7, 3, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_806_count);
  llvm_cbe_tmp__268 = (unsigned int )llvm_cbe_tmp__205 | 3u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__268);
if (AESL_DEBUG_TRACE)
printf("\n  %%71 = zext i32 %%70 to i64, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_807_count);
  llvm_cbe_tmp__269 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__268&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__269);
if (AESL_DEBUG_TRACE)
printf("\n  %%72 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%71, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_808_count);
  llvm_cbe_tmp__270 = (signed int *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__269))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__269));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%69, i32* %%72, align 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_809_count);
  *llvm_cbe_tmp__270 = llvm_cbe_tmp__267;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__267);
if (AESL_DEBUG_TRACE)
printf("\n  %%73 = add i32 %%2, 7, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_810_count);
  llvm_cbe_tmp__271 = (unsigned int )((unsigned int )(llvm_cbe_tmp__200&4294967295ull)) + ((unsigned int )(7u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__271&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%74 = zext i32 %%73 to i64, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_811_count);
  llvm_cbe_tmp__272 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__271&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__272);
if (AESL_DEBUG_TRACE)
printf("\n  %%75 = getelementptr inbounds i8* %%a, i64 %%74, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_812_count);
  llvm_cbe_tmp__273 = ( char *)(&llvm_cbe_a[(((signed long long )llvm_cbe_tmp__272))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__272));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%76 = load i8* %%75, align 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_813_count);
  llvm_cbe_tmp__274 = (unsigned char )*llvm_cbe_tmp__273;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__274);
if (AESL_DEBUG_TRACE)
printf("\n  %%77 = zext i8 %%76 to i32, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_814_count);
  llvm_cbe_tmp__275 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__274&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__275);
if (AESL_DEBUG_TRACE)
printf("\n  %%78 = shl nuw nsw i32 %%77, 2, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_815_count);
  llvm_cbe_tmp__276 = (unsigned int )llvm_cbe_tmp__275 << 2u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__276);
if (AESL_DEBUG_TRACE)
printf("\n  %%79 = or i32 %%78, %%69, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_816_count);
  llvm_cbe_tmp__277 = (unsigned int )llvm_cbe_tmp__276 | llvm_cbe_tmp__267;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__277);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%79, i32* %%72, align 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_817_count);
  *llvm_cbe_tmp__270 = llvm_cbe_tmp__277;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__277);
if (AESL_DEBUG_TRACE)
printf("\n  %%80 = add i32 %%2, 8, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_818_count);
  llvm_cbe_tmp__278 = (unsigned int )((unsigned int )(llvm_cbe_tmp__200&4294967295ull)) + ((unsigned int )(8u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__278&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%81 = zext i32 %%80 to i64, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_819_count);
  llvm_cbe_tmp__279 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__278&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__279);
if (AESL_DEBUG_TRACE)
printf("\n  %%82 = getelementptr inbounds i8* %%a, i64 %%81, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_820_count);
  llvm_cbe_tmp__280 = ( char *)(&llvm_cbe_a[(((signed long long )llvm_cbe_tmp__279))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__279));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%83 = load i8* %%82, align 1, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_821_count);
  llvm_cbe_tmp__281 = (unsigned char )*llvm_cbe_tmp__280;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__281);
if (AESL_DEBUG_TRACE)
printf("\n  %%84 = zext i8 %%83 to i32, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_822_count);
  llvm_cbe_tmp__282 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__281&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__282);
if (AESL_DEBUG_TRACE)
printf("\n  %%85 = shl nuw nsw i32 %%84, 10, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_823_count);
  llvm_cbe_tmp__283 = (unsigned int )llvm_cbe_tmp__282 << 10u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__283);
if (AESL_DEBUG_TRACE)
printf("\n  %%86 = or i32 %%79, %%85, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_824_count);
  llvm_cbe_tmp__284 = (unsigned int )llvm_cbe_tmp__277 | llvm_cbe_tmp__283;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__284);
if (AESL_DEBUG_TRACE)
printf("\n  %%87 = sub nsw i32 131072, %%24, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_825_count);
  llvm_cbe_tmp__285 = (unsigned int )((unsigned int )(131072u&4294967295ull)) - ((unsigned int )(llvm_cbe_tmp__222&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__285&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%87, i32* %%9, align 4, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_826_count);
  *llvm_cbe_tmp__207 = llvm_cbe_tmp__285;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__285);
if (AESL_DEBUG_TRACE)
printf("\n  %%88 = sub nsw i32 131072, %%45, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_827_count);
  llvm_cbe_tmp__286 = (unsigned int )((unsigned int )(131072u&4294967295ull)) - ((unsigned int )(llvm_cbe_tmp__243&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__286&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%88, i32* %%30, align 4, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_828_count);
  *llvm_cbe_tmp__228 = llvm_cbe_tmp__286;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__286);
if (AESL_DEBUG_TRACE)
printf("\n  %%89 = sub nsw i32 131072, %%66, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_829_count);
  llvm_cbe_tmp__287 = (unsigned int )((unsigned int )(131072u&4294967295ull)) - ((unsigned int )(llvm_cbe_tmp__264&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__287&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%89, i32* %%51, align 4, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_830_count);
  *llvm_cbe_tmp__249 = llvm_cbe_tmp__287;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__287);
if (AESL_DEBUG_TRACE)
printf("\n  %%90 = sub nsw i32 131072, %%86, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_831_count);
  llvm_cbe_tmp__288 = (unsigned int )((unsigned int )(131072u&4294967295ull)) - ((unsigned int )(llvm_cbe_tmp__284&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__288&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%90, i32* %%72, align 4, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_832_count);
  *llvm_cbe_tmp__270 = llvm_cbe_tmp__288;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__288);
if (AESL_DEBUG_TRACE)
printf("\n  %%91 = add i32 %%storemerge1, 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_unpack  --> \n", ++aesl_llvm_cbe_833_count);
  llvm_cbe_tmp__289 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__289&4294967295ull)));
  if (((llvm_cbe_tmp__289&4294967295U) == (64u&4294967295U))) {
    goto llvm_cbe_tmp__291;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__289;   /* for PHI node */
    goto llvm_cbe_tmp__290;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__291:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_polyz_unpack}\n");
  return;
}


void pqcrystals_dilithium2_ref_poly_challenge(l_struct_OC_poly *llvm_cbe_c,  char *llvm_cbe_seed) {
  static  unsigned long long aesl_llvm_cbe_buf_count = 0;
   char llvm_cbe_buf[136];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_state_count = 0;
  l_struct_OC_keccak_state llvm_cbe_state;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_875_count = 0;
  static  unsigned long long aesl_llvm_cbe_876_count = 0;
  static  unsigned long long aesl_llvm_cbe_877_count = 0;
  static  unsigned long long aesl_llvm_cbe_878_count = 0;
  static  unsigned long long aesl_llvm_cbe_879_count = 0;
  static  unsigned long long aesl_llvm_cbe_880_count = 0;
  static  unsigned long long aesl_llvm_cbe_881_count = 0;
  static  unsigned long long aesl_llvm_cbe_882_count = 0;
  static  unsigned long long aesl_llvm_cbe_883_count = 0;
  static  unsigned long long aesl_llvm_cbe_884_count = 0;
  static  unsigned long long aesl_llvm_cbe_885_count = 0;
  static  unsigned long long aesl_llvm_cbe_886_count = 0;
  static  unsigned long long aesl_llvm_cbe_887_count = 0;
   char *llvm_cbe_tmp__292;
  static  unsigned long long aesl_llvm_cbe_888_count = 0;
  static  unsigned long long aesl_llvm_cbe_889_count = 0;
  static  unsigned long long aesl_llvm_cbe_890_count = 0;
  static  unsigned long long aesl_llvm_cbe_891_count = 0;
  static  unsigned long long aesl_llvm_cbe_892_count = 0;
  static  unsigned long long aesl_llvm_cbe_893_count = 0;
  static  unsigned long long aesl_llvm_cbe_894_count = 0;
  static  unsigned long long aesl_llvm_cbe_895_count = 0;
  static  unsigned long long aesl_llvm_cbe_896_count = 0;
  static  unsigned long long aesl_llvm_cbe_897_count = 0;
  static  unsigned long long aesl_llvm_cbe_898_count = 0;
  static  unsigned long long aesl_llvm_cbe_899_count = 0;
  static  unsigned long long aesl_llvm_cbe_900_count = 0;
  static  unsigned long long aesl_llvm_cbe_901_count = 0;
  static  unsigned long long aesl_llvm_cbe_902_count = 0;
  static  unsigned long long aesl_llvm_cbe_903_count = 0;
  static  unsigned long long aesl_llvm_cbe_904_count = 0;
  static  unsigned long long aesl_llvm_cbe_905_count = 0;
  unsigned char llvm_cbe_tmp__293;
  static  unsigned long long aesl_llvm_cbe_906_count = 0;
  unsigned long long llvm_cbe_tmp__294;
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
  static  unsigned long long aesl_llvm_cbe_918_count = 0;
  static  unsigned long long aesl_llvm_cbe_919_count = 0;
  static  unsigned long long aesl_llvm_cbe_920_count = 0;
  static  unsigned long long aesl_llvm_cbe_921_count = 0;
  static  unsigned long long aesl_llvm_cbe_922_count = 0;
  static  unsigned long long aesl_llvm_cbe_923_count = 0;
   char *llvm_cbe_tmp__295;
  static  unsigned long long aesl_llvm_cbe_924_count = 0;
  unsigned char llvm_cbe_tmp__296;
  static  unsigned long long aesl_llvm_cbe_925_count = 0;
  unsigned long long llvm_cbe_tmp__297;
  static  unsigned long long aesl_llvm_cbe_926_count = 0;
  unsigned long long llvm_cbe_tmp__298;
  static  unsigned long long aesl_llvm_cbe_927_count = 0;
  unsigned long long llvm_cbe_tmp__299;
  static  unsigned long long aesl_llvm_cbe_928_count = 0;
  static  unsigned long long aesl_llvm_cbe_929_count = 0;
  static  unsigned long long aesl_llvm_cbe_930_count = 0;
  static  unsigned long long aesl_llvm_cbe_931_count = 0;
  static  unsigned long long aesl_llvm_cbe_932_count = 0;
  static  unsigned long long aesl_llvm_cbe_933_count = 0;
  static  unsigned long long aesl_llvm_cbe_934_count = 0;
  static  unsigned long long aesl_llvm_cbe_935_count = 0;
  static  unsigned long long aesl_llvm_cbe_936_count = 0;
  static  unsigned long long aesl_llvm_cbe_937_count = 0;
  static  unsigned long long aesl_llvm_cbe_938_count = 0;
  static  unsigned long long aesl_llvm_cbe_939_count = 0;
  static  unsigned long long aesl_llvm_cbe_940_count = 0;
  static  unsigned long long aesl_llvm_cbe_941_count = 0;
  static  unsigned long long aesl_llvm_cbe_942_count = 0;
  static  unsigned long long aesl_llvm_cbe_943_count = 0;
  static  unsigned long long aesl_llvm_cbe_944_count = 0;
   char *llvm_cbe_tmp__300;
  static  unsigned long long aesl_llvm_cbe_945_count = 0;
  unsigned char llvm_cbe_tmp__301;
  static  unsigned long long aesl_llvm_cbe_946_count = 0;
  unsigned long long llvm_cbe_tmp__302;
  static  unsigned long long aesl_llvm_cbe_947_count = 0;
  unsigned long long llvm_cbe_tmp__303;
  static  unsigned long long aesl_llvm_cbe_948_count = 0;
  unsigned long long llvm_cbe_tmp__304;
  static  unsigned long long aesl_llvm_cbe_949_count = 0;
  static  unsigned long long aesl_llvm_cbe_950_count = 0;
  static  unsigned long long aesl_llvm_cbe_951_count = 0;
  static  unsigned long long aesl_llvm_cbe_952_count = 0;
  static  unsigned long long aesl_llvm_cbe_953_count = 0;
  static  unsigned long long aesl_llvm_cbe_954_count = 0;
  static  unsigned long long aesl_llvm_cbe_955_count = 0;
  static  unsigned long long aesl_llvm_cbe_956_count = 0;
  static  unsigned long long aesl_llvm_cbe_957_count = 0;
  static  unsigned long long aesl_llvm_cbe_958_count = 0;
  static  unsigned long long aesl_llvm_cbe_959_count = 0;
  static  unsigned long long aesl_llvm_cbe_960_count = 0;
  static  unsigned long long aesl_llvm_cbe_961_count = 0;
  static  unsigned long long aesl_llvm_cbe_962_count = 0;
  static  unsigned long long aesl_llvm_cbe_963_count = 0;
  static  unsigned long long aesl_llvm_cbe_964_count = 0;
  static  unsigned long long aesl_llvm_cbe_965_count = 0;
   char *llvm_cbe_tmp__305;
  static  unsigned long long aesl_llvm_cbe_966_count = 0;
  unsigned char llvm_cbe_tmp__306;
  static  unsigned long long aesl_llvm_cbe_967_count = 0;
  unsigned long long llvm_cbe_tmp__307;
  static  unsigned long long aesl_llvm_cbe_968_count = 0;
  unsigned long long llvm_cbe_tmp__308;
  static  unsigned long long aesl_llvm_cbe_969_count = 0;
  unsigned long long llvm_cbe_tmp__309;
  static  unsigned long long aesl_llvm_cbe_970_count = 0;
  static  unsigned long long aesl_llvm_cbe_971_count = 0;
  static  unsigned long long aesl_llvm_cbe_972_count = 0;
  static  unsigned long long aesl_llvm_cbe_973_count = 0;
  static  unsigned long long aesl_llvm_cbe_974_count = 0;
  static  unsigned long long aesl_llvm_cbe_975_count = 0;
  static  unsigned long long aesl_llvm_cbe_976_count = 0;
  static  unsigned long long aesl_llvm_cbe_977_count = 0;
  static  unsigned long long aesl_llvm_cbe_978_count = 0;
  static  unsigned long long aesl_llvm_cbe_979_count = 0;
  static  unsigned long long aesl_llvm_cbe_980_count = 0;
  static  unsigned long long aesl_llvm_cbe_981_count = 0;
  static  unsigned long long aesl_llvm_cbe_982_count = 0;
  static  unsigned long long aesl_llvm_cbe_983_count = 0;
  static  unsigned long long aesl_llvm_cbe_984_count = 0;
  static  unsigned long long aesl_llvm_cbe_985_count = 0;
  static  unsigned long long aesl_llvm_cbe_986_count = 0;
   char *llvm_cbe_tmp__310;
  static  unsigned long long aesl_llvm_cbe_987_count = 0;
  unsigned char llvm_cbe_tmp__311;
  static  unsigned long long aesl_llvm_cbe_988_count = 0;
  unsigned long long llvm_cbe_tmp__312;
  static  unsigned long long aesl_llvm_cbe_989_count = 0;
  unsigned long long llvm_cbe_tmp__313;
  static  unsigned long long aesl_llvm_cbe_990_count = 0;
  unsigned long long llvm_cbe_tmp__314;
  static  unsigned long long aesl_llvm_cbe_991_count = 0;
  static  unsigned long long aesl_llvm_cbe_992_count = 0;
  static  unsigned long long aesl_llvm_cbe_993_count = 0;
  static  unsigned long long aesl_llvm_cbe_994_count = 0;
  static  unsigned long long aesl_llvm_cbe_995_count = 0;
  static  unsigned long long aesl_llvm_cbe_996_count = 0;
  static  unsigned long long aesl_llvm_cbe_997_count = 0;
  static  unsigned long long aesl_llvm_cbe_998_count = 0;
  static  unsigned long long aesl_llvm_cbe_999_count = 0;
  static  unsigned long long aesl_llvm_cbe_1000_count = 0;
  static  unsigned long long aesl_llvm_cbe_1001_count = 0;
  static  unsigned long long aesl_llvm_cbe_1002_count = 0;
  static  unsigned long long aesl_llvm_cbe_1003_count = 0;
  static  unsigned long long aesl_llvm_cbe_1004_count = 0;
  static  unsigned long long aesl_llvm_cbe_1005_count = 0;
  static  unsigned long long aesl_llvm_cbe_1006_count = 0;
  static  unsigned long long aesl_llvm_cbe_1007_count = 0;
   char *llvm_cbe_tmp__315;
  static  unsigned long long aesl_llvm_cbe_1008_count = 0;
  unsigned char llvm_cbe_tmp__316;
  static  unsigned long long aesl_llvm_cbe_1009_count = 0;
  unsigned long long llvm_cbe_tmp__317;
  static  unsigned long long aesl_llvm_cbe_1010_count = 0;
  unsigned long long llvm_cbe_tmp__318;
  static  unsigned long long aesl_llvm_cbe_1011_count = 0;
  unsigned long long llvm_cbe_tmp__319;
  static  unsigned long long aesl_llvm_cbe_1012_count = 0;
  static  unsigned long long aesl_llvm_cbe_1013_count = 0;
  static  unsigned long long aesl_llvm_cbe_1014_count = 0;
  static  unsigned long long aesl_llvm_cbe_1015_count = 0;
  static  unsigned long long aesl_llvm_cbe_1016_count = 0;
  static  unsigned long long aesl_llvm_cbe_1017_count = 0;
  static  unsigned long long aesl_llvm_cbe_1018_count = 0;
  static  unsigned long long aesl_llvm_cbe_1019_count = 0;
  static  unsigned long long aesl_llvm_cbe_1020_count = 0;
  static  unsigned long long aesl_llvm_cbe_1021_count = 0;
  static  unsigned long long aesl_llvm_cbe_1022_count = 0;
  static  unsigned long long aesl_llvm_cbe_1023_count = 0;
  static  unsigned long long aesl_llvm_cbe_1024_count = 0;
  static  unsigned long long aesl_llvm_cbe_1025_count = 0;
  static  unsigned long long aesl_llvm_cbe_1026_count = 0;
  static  unsigned long long aesl_llvm_cbe_1027_count = 0;
  static  unsigned long long aesl_llvm_cbe_1028_count = 0;
   char *llvm_cbe_tmp__320;
  static  unsigned long long aesl_llvm_cbe_1029_count = 0;
  unsigned char llvm_cbe_tmp__321;
  static  unsigned long long aesl_llvm_cbe_1030_count = 0;
  unsigned long long llvm_cbe_tmp__322;
  static  unsigned long long aesl_llvm_cbe_1031_count = 0;
  unsigned long long llvm_cbe_tmp__323;
  static  unsigned long long aesl_llvm_cbe_1032_count = 0;
  unsigned long long llvm_cbe_tmp__324;
  static  unsigned long long aesl_llvm_cbe_1033_count = 0;
  static  unsigned long long aesl_llvm_cbe_1034_count = 0;
  static  unsigned long long aesl_llvm_cbe_1035_count = 0;
  static  unsigned long long aesl_llvm_cbe_1036_count = 0;
  static  unsigned long long aesl_llvm_cbe_1037_count = 0;
  static  unsigned long long aesl_llvm_cbe_1038_count = 0;
  static  unsigned long long aesl_llvm_cbe_1039_count = 0;
  static  unsigned long long aesl_llvm_cbe_1040_count = 0;
  static  unsigned long long aesl_llvm_cbe_1041_count = 0;
  static  unsigned long long aesl_llvm_cbe_1042_count = 0;
  static  unsigned long long aesl_llvm_cbe_1043_count = 0;
  static  unsigned long long aesl_llvm_cbe_1044_count = 0;
  static  unsigned long long aesl_llvm_cbe_1045_count = 0;
  static  unsigned long long aesl_llvm_cbe_1046_count = 0;
  static  unsigned long long aesl_llvm_cbe_1047_count = 0;
  static  unsigned long long aesl_llvm_cbe_1048_count = 0;
  static  unsigned long long aesl_llvm_cbe_1049_count = 0;
   char *llvm_cbe_tmp__325;
  static  unsigned long long aesl_llvm_cbe_1050_count = 0;
  unsigned char llvm_cbe_tmp__326;
  static  unsigned long long aesl_llvm_cbe_1051_count = 0;
  unsigned long long llvm_cbe_tmp__327;
  static  unsigned long long aesl_llvm_cbe_1052_count = 0;
  unsigned long long llvm_cbe_tmp__328;
  static  unsigned long long aesl_llvm_cbe_1053_count = 0;
  unsigned long long llvm_cbe_tmp__329;
  static  unsigned long long aesl_llvm_cbe_1054_count = 0;
  static  unsigned long long aesl_llvm_cbe_1055_count = 0;
  static  unsigned long long aesl_llvm_cbe_1056_count = 0;
  static  unsigned long long aesl_llvm_cbe_1057_count = 0;
  static  unsigned long long aesl_llvm_cbe_1058_count = 0;
  static  unsigned long long aesl_llvm_cbe_1059_count = 0;
  static  unsigned long long aesl_llvm_cbe_1060_count = 0;
  static  unsigned long long aesl_llvm_cbe_1061_count = 0;
  static  unsigned long long aesl_llvm_cbe_1062_count = 0;
  static  unsigned long long aesl_llvm_cbe_1063_count = 0;
  static  unsigned long long aesl_llvm_cbe_1064_count = 0;
  static  unsigned long long aesl_llvm_cbe_1065_count = 0;
  static  unsigned long long aesl_llvm_cbe_1066_count = 0;
  static  unsigned long long aesl_llvm_cbe_1067_count = 0;
  static  unsigned long long aesl_llvm_cbe_1068_count = 0;
  static  unsigned long long aesl_llvm_cbe_1069_count = 0;
  static  unsigned long long aesl_llvm_cbe_1070_count = 0;
  static  unsigned long long aesl_llvm_cbe_1071_count = 0;
  static  unsigned long long aesl_llvm_cbe_1072_count = 0;
  static  unsigned long long aesl_llvm_cbe_1073_count = 0;
  static  unsigned long long aesl_llvm_cbe_1074_count = 0;
  static  unsigned long long aesl_llvm_cbe_1075_count = 0;
  static  unsigned long long aesl_llvm_cbe_1076_count = 0;
  static  unsigned long long aesl_llvm_cbe_1077_count = 0;
  static  unsigned long long aesl_llvm_cbe_1078_count = 0;
  static  unsigned long long aesl_llvm_cbe_1079_count = 0;
  static  unsigned long long aesl_llvm_cbe_1080_count = 0;
  static  unsigned long long aesl_llvm_cbe_1081_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge17_count = 0;
  unsigned int llvm_cbe_storemerge17;
  unsigned int llvm_cbe_storemerge17__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1082_count = 0;
  unsigned long long llvm_cbe_tmp__330;
  static  unsigned long long aesl_llvm_cbe_1083_count = 0;
  signed int *llvm_cbe_tmp__331;
  static  unsigned long long aesl_llvm_cbe_1084_count = 0;
  static  unsigned long long aesl_llvm_cbe_1085_count = 0;
  unsigned int llvm_cbe_tmp__332;
  static  unsigned long long aesl_llvm_cbe_1086_count = 0;
  static  unsigned long long aesl_llvm_cbe_1087_count = 0;
  static  unsigned long long aesl_llvm_cbe_1088_count = 0;
  static  unsigned long long aesl_llvm_cbe_1089_count = 0;
  static  unsigned long long aesl_llvm_cbe_1090_count = 0;
  static  unsigned long long aesl_llvm_cbe_1091_count = 0;
  static  unsigned long long aesl_llvm_cbe_1092_count = 0;
  static  unsigned long long aesl_llvm_cbe_1093_count = 0;
  static  unsigned long long aesl_llvm_cbe_1094_count = 0;
  static  unsigned long long aesl_llvm_cbe_1095_count = 0;
  static  unsigned long long aesl_llvm_cbe_1096_count = 0;
  static  unsigned long long aesl_llvm_cbe_1097_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond11_count = 0;
  static  unsigned long long aesl_llvm_cbe_1098_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge25_count = 0;
  unsigned int llvm_cbe_storemerge25;
  unsigned int llvm_cbe_storemerge25__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1099_count = 0;
  unsigned int llvm_cbe_tmp__333;
  unsigned int llvm_cbe_tmp__333__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1100_count = 0;
  unsigned long long llvm_cbe_tmp__334;
  unsigned long long llvm_cbe_tmp__334__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1101_count = 0;
  static  unsigned long long aesl_llvm_cbe_1102_count = 0;
  unsigned int llvm_cbe_tmp__335;
  unsigned int llvm_cbe_tmp__335__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1103_count = 0;
  static  unsigned long long aesl_llvm_cbe_1104_count = 0;
  static  unsigned long long aesl_llvm_cbe_1105_count = 0;
  static  unsigned long long aesl_llvm_cbe_1106_count = 0;
  static  unsigned long long aesl_llvm_cbe_1107_count = 0;
  static  unsigned long long aesl_llvm_cbe_1108_count = 0;
  static  unsigned long long aesl_llvm_cbe_1109_count = 0;
  static  unsigned long long aesl_llvm_cbe_1110_count = 0;
  unsigned int llvm_cbe_tmp__336;
  unsigned int llvm_cbe_tmp__336__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1111_count = 0;
  unsigned int llvm_cbe_tmp__337;
  static  unsigned long long aesl_llvm_cbe_1112_count = 0;
  static  unsigned long long aesl_llvm_cbe_1113_count = 0;
  static  unsigned long long aesl_llvm_cbe_1114_count = 0;
  static  unsigned long long aesl_llvm_cbe_1115_count = 0;
  unsigned long long llvm_cbe_tmp__338;
  static  unsigned long long aesl_llvm_cbe_1116_count = 0;
   char *llvm_cbe_tmp__339;
  static  unsigned long long aesl_llvm_cbe_1117_count = 0;
  unsigned char llvm_cbe_tmp__340;
  static  unsigned long long aesl_llvm_cbe_1118_count = 0;
  unsigned int llvm_cbe_tmp__341;
  static  unsigned long long aesl_llvm_cbe_1119_count = 0;
  static  unsigned long long aesl_llvm_cbe_1120_count = 0;
  static  unsigned long long aesl_llvm_cbe_1121_count = 0;
  static  unsigned long long aesl_llvm_cbe_1122_count = 0;
  static  unsigned long long aesl_llvm_cbe_1123_count = 0;
  static  unsigned long long aesl_llvm_cbe_1124_count = 0;
  static  unsigned long long aesl_llvm_cbe_1125_count = 0;
  unsigned long long llvm_cbe_tmp__342;
  static  unsigned long long aesl_llvm_cbe_1126_count = 0;
  signed int *llvm_cbe_tmp__343;
  static  unsigned long long aesl_llvm_cbe_1127_count = 0;
  unsigned int llvm_cbe_tmp__344;
  static  unsigned long long aesl_llvm_cbe_1128_count = 0;
  unsigned long long llvm_cbe_tmp__345;
  static  unsigned long long aesl_llvm_cbe_1129_count = 0;
  signed int *llvm_cbe_tmp__346;
  static  unsigned long long aesl_llvm_cbe_1130_count = 0;
  static  unsigned long long aesl_llvm_cbe_1131_count = 0;
  unsigned int llvm_cbe_tmp__347;
  static  unsigned long long aesl_llvm_cbe_1132_count = 0;
  unsigned int llvm_cbe_tmp__348;
  static  unsigned long long aesl_llvm_cbe_1133_count = 0;
  unsigned int llvm_cbe_tmp__349;
  static  unsigned long long aesl_llvm_cbe_1134_count = 0;
  unsigned int llvm_cbe_tmp__350;
  static  unsigned long long aesl_llvm_cbe_1135_count = 0;
  static  unsigned long long aesl_llvm_cbe_1136_count = 0;
  unsigned long long llvm_cbe_tmp__351;
  static  unsigned long long aesl_llvm_cbe_1137_count = 0;
  static  unsigned long long aesl_llvm_cbe_1138_count = 0;
  static  unsigned long long aesl_llvm_cbe_1139_count = 0;
  static  unsigned long long aesl_llvm_cbe_1140_count = 0;
  static  unsigned long long aesl_llvm_cbe_1141_count = 0;
  unsigned int llvm_cbe_tmp__352;
  static  unsigned long long aesl_llvm_cbe_1142_count = 0;
  static  unsigned long long aesl_llvm_cbe_1143_count = 0;
  static  unsigned long long aesl_llvm_cbe_1144_count = 0;
  static  unsigned long long aesl_llvm_cbe_1145_count = 0;
  static  unsigned long long aesl_llvm_cbe_1146_count = 0;
  static  unsigned long long aesl_llvm_cbe_1147_count = 0;
  static  unsigned long long aesl_llvm_cbe_1148_count = 0;
  static  unsigned long long aesl_llvm_cbe_1149_count = 0;
  static  unsigned long long aesl_llvm_cbe_1150_count = 0;
  static  unsigned long long aesl_llvm_cbe_1151_count = 0;
  static  unsigned long long aesl_llvm_cbe_1152_count = 0;
  static  unsigned long long aesl_llvm_cbe_1153_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_1154_count = 0;
  static  unsigned long long aesl_llvm_cbe_1155_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_poly_challenge\n");
if (AESL_DEBUG_TRACE)
printf("\n  call void @shake256_init(%%struct.keccak_state* %%state) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_884_count);
  shake256_init((l_struct_OC_keccak_state *)(&llvm_cbe_state));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @shake256_absorb(%%struct.keccak_state* %%state, i8* %%seed, i64 32) nounwind, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_885_count);
  shake256_absorb((l_struct_OC_keccak_state *)(&llvm_cbe_state), ( char *)llvm_cbe_seed, 32ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",32ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @shake256_finalize(%%struct.keccak_state* %%state) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_886_count);
  shake256_finalize((l_struct_OC_keccak_state *)(&llvm_cbe_state));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%0 = getelementptr inbounds [136 x i8]* %%buf, i64 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_887_count);
  llvm_cbe_tmp__292 = ( char *)(&llvm_cbe_buf[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 136
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @shake256_squeezeblocks(i8* %%0, i64 1, %%struct.keccak_state* %%state) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_888_count);
  shake256_squeezeblocks(( char *)llvm_cbe_tmp__292, 1ull, (l_struct_OC_keccak_state *)(&llvm_cbe_state));
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",1ull);
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 136)) fprintf(stderr, "%s:%d: warning: Read access out of array 'buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = load i8* %%0, align 16, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_905_count);
  llvm_cbe_tmp__293 = (unsigned char )*llvm_cbe_tmp__292;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__293);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = zext i8 %%1 to i64, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_906_count);
  llvm_cbe_tmp__294 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__293&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__294);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds [136 x i8]* %%buf, i64 0, i64 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_923_count);
  llvm_cbe_tmp__295 = ( char *)(&llvm_cbe_buf[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 136
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 136)) fprintf(stderr, "%s:%d: warning: Read access out of array 'buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = load i8* %%3, align 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_924_count);
  llvm_cbe_tmp__296 = (unsigned char )*llvm_cbe_tmp__295;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__296);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = zext i8 %%4 to i64, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_925_count);
  llvm_cbe_tmp__297 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__296&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__297);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = shl nuw nsw i64 %%5, 8, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_926_count);
  llvm_cbe_tmp__298 = (unsigned long long )llvm_cbe_tmp__297 << 8ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__298);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = or i64 %%6, %%2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_927_count);
  llvm_cbe_tmp__299 = (unsigned long long )llvm_cbe_tmp__298 | llvm_cbe_tmp__294;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__299);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds [136 x i8]* %%buf, i64 0, i64 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_944_count);
  llvm_cbe_tmp__300 = ( char *)(&llvm_cbe_buf[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 136
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 136)) fprintf(stderr, "%s:%d: warning: Read access out of array 'buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = load i8* %%8, align 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_945_count);
  llvm_cbe_tmp__301 = (unsigned char )*llvm_cbe_tmp__300;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__301);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = zext i8 %%9 to i64, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_946_count);
  llvm_cbe_tmp__302 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__301&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__302);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = shl nuw nsw i64 %%10, 16, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_947_count);
  llvm_cbe_tmp__303 = (unsigned long long )llvm_cbe_tmp__302 << 16ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__303);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = or i64 %%11, %%7, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_948_count);
  llvm_cbe_tmp__304 = (unsigned long long )llvm_cbe_tmp__303 | llvm_cbe_tmp__299;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__304);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds [136 x i8]* %%buf, i64 0, i64 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_965_count);
  llvm_cbe_tmp__305 = ( char *)(&llvm_cbe_buf[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 136
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )3ull) < 136)) fprintf(stderr, "%s:%d: warning: Read access out of array 'buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = load i8* %%13, align 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_966_count);
  llvm_cbe_tmp__306 = (unsigned char )*llvm_cbe_tmp__305;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__306);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = zext i8 %%14 to i64, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_967_count);
  llvm_cbe_tmp__307 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__306&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__307);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = shl nuw nsw i64 %%15, 24, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_968_count);
  llvm_cbe_tmp__308 = (unsigned long long )llvm_cbe_tmp__307 << 24ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__308);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = or i64 %%16, %%12, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_969_count);
  llvm_cbe_tmp__309 = (unsigned long long )llvm_cbe_tmp__308 | llvm_cbe_tmp__304;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__309);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = getelementptr inbounds [136 x i8]* %%buf, i64 0, i64 4, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_986_count);
  llvm_cbe_tmp__310 = ( char *)(&llvm_cbe_buf[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 136
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )4ull) < 136)) fprintf(stderr, "%s:%d: warning: Read access out of array 'buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = load i8* %%18, align 4, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_987_count);
  llvm_cbe_tmp__311 = (unsigned char )*llvm_cbe_tmp__310;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__311);
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = zext i8 %%19 to i64, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_988_count);
  llvm_cbe_tmp__312 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__311&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__312);
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = shl nuw nsw i64 %%20, 32, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_989_count);
  llvm_cbe_tmp__313 = (unsigned long long )llvm_cbe_tmp__312 << 32ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__313);
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = or i64 %%21, %%17, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_990_count);
  llvm_cbe_tmp__314 = (unsigned long long )llvm_cbe_tmp__313 | llvm_cbe_tmp__309;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__314);
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = getelementptr inbounds [136 x i8]* %%buf, i64 0, i64 5, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_1007_count);
  llvm_cbe_tmp__315 = ( char *)(&llvm_cbe_buf[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 136
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )5ull) < 136)) fprintf(stderr, "%s:%d: warning: Read access out of array 'buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = load i8* %%23, align 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_1008_count);
  llvm_cbe_tmp__316 = (unsigned char )*llvm_cbe_tmp__315;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__316);
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = zext i8 %%24 to i64, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_1009_count);
  llvm_cbe_tmp__317 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__316&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__317);
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = shl nuw nsw i64 %%25, 40, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_1010_count);
  llvm_cbe_tmp__318 = (unsigned long long )llvm_cbe_tmp__317 << 40ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__318);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = or i64 %%26, %%22, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_1011_count);
  llvm_cbe_tmp__319 = (unsigned long long )llvm_cbe_tmp__318 | llvm_cbe_tmp__314;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__319);
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = getelementptr inbounds [136 x i8]* %%buf, i64 0, i64 6, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_1028_count);
  llvm_cbe_tmp__320 = ( char *)(&llvm_cbe_buf[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 136
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )6ull) < 136)) fprintf(stderr, "%s:%d: warning: Read access out of array 'buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = load i8* %%28, align 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_1029_count);
  llvm_cbe_tmp__321 = (unsigned char )*llvm_cbe_tmp__320;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__321);
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = zext i8 %%29 to i64, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_1030_count);
  llvm_cbe_tmp__322 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__321&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__322);
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = shl nuw nsw i64 %%30, 48, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_1031_count);
  llvm_cbe_tmp__323 = (unsigned long long )llvm_cbe_tmp__322 << 48ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__323);
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = or i64 %%31, %%27, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_1032_count);
  llvm_cbe_tmp__324 = (unsigned long long )llvm_cbe_tmp__323 | llvm_cbe_tmp__319;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__324);
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = getelementptr inbounds [136 x i8]* %%buf, i64 0, i64 7, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_1049_count);
  llvm_cbe_tmp__325 = ( char *)(&llvm_cbe_buf[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 136
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )7ull) < 136)) fprintf(stderr, "%s:%d: warning: Read access out of array 'buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = load i8* %%33, align 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_1050_count);
  llvm_cbe_tmp__326 = (unsigned char )*llvm_cbe_tmp__325;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__326);
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = zext i8 %%34 to i64, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_1051_count);
  llvm_cbe_tmp__327 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__326&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__327);
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = shl nuw i64 %%35, 56, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_1052_count);
  llvm_cbe_tmp__328 = (unsigned long long )llvm_cbe_tmp__327 << 56ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__328);
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = or i64 %%36, %%32, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_1053_count);
  llvm_cbe_tmp__329 = (unsigned long long )llvm_cbe_tmp__328 | llvm_cbe_tmp__324;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__329);
  llvm_cbe_storemerge17__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__353;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__353:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge17 = phi i32 [ 0, %%.preheader6 ], [ %%41, %%38  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_storemerge17_count);
  llvm_cbe_storemerge17 = (unsigned int )llvm_cbe_storemerge17__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge17 = 0x%X",llvm_cbe_storemerge17);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__332);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = zext i32 %%storemerge17 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_1082_count);
  llvm_cbe_tmp__330 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge17&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__330);
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = getelementptr inbounds %%struct.poly* %%c, i64 0, i32 0, i64 %%39, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_1083_count);
  llvm_cbe_tmp__331 = (signed int *)(&llvm_cbe_c->field0[(((signed long long )llvm_cbe_tmp__330))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__330));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%40, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_1084_count);
  *llvm_cbe_tmp__331 = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = add i32 %%storemerge17, 1, !dbg !18 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_1085_count);
  llvm_cbe_tmp__332 = (unsigned int )((unsigned int )(llvm_cbe_storemerge17&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__332&4294967295ull)));
  if (((llvm_cbe_tmp__332&4294967295U) == (256u&4294967295U))) {
    llvm_cbe_storemerge25__PHI_TEMPORARY = (unsigned int )217u;   /* for PHI node */
    llvm_cbe_tmp__333__PHI_TEMPORARY = (unsigned int )8u;   /* for PHI node */
    llvm_cbe_tmp__334__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__329;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  } else {
    llvm_cbe_storemerge17__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__332;   /* for PHI node */
    goto llvm_cbe_tmp__353;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '.preheader' to make GCC happy */
llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge25 = phi i32 [ %%67, %%56 ], [ 217, %%38  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_storemerge25_count);
  llvm_cbe_storemerge25 = (unsigned int )llvm_cbe_storemerge25__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge25 = 0x%X",llvm_cbe_storemerge25);
printf("\n = 0x%X",llvm_cbe_tmp__352);
printf("\n = 0x%X",217u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = phi i32 [ %%50, %%56 ], [ 8, %%38  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_1099_count);
  llvm_cbe_tmp__333 = (unsigned int )llvm_cbe_tmp__333__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__333);
printf("\n = 0x%X",llvm_cbe_tmp__337);
printf("\n = 0x%X",8u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = phi i64 [ %%66, %%56 ], [ %%37, %%38  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_1100_count);
  llvm_cbe_tmp__334 = (unsigned long long )llvm_cbe_tmp__334__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",llvm_cbe_tmp__334);
printf("\n = 0x%I64X",llvm_cbe_tmp__351);
printf("\n = 0x%I64X",llvm_cbe_tmp__329);
}
  llvm_cbe_tmp__335__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__333;   /* for PHI node */
  goto llvm_cbe_tmp__354;

llvm_cbe_tmp__355:
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = zext i8 %%53 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_1125_count);
  llvm_cbe_tmp__342 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__340&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__342);
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = getelementptr inbounds %%struct.poly* %%c, i64 0, i32 0, i64 %%57, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_1126_count);
  llvm_cbe_tmp__343 = (signed int *)(&llvm_cbe_c->field0[(((signed long long )llvm_cbe_tmp__342))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__342));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = load i32* %%58, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_1127_count);
  llvm_cbe_tmp__344 = (unsigned int )*llvm_cbe_tmp__343;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__344);
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = zext i32 %%storemerge25 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_1128_count);
  llvm_cbe_tmp__345 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge25&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__345);
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = getelementptr inbounds %%struct.poly* %%c, i64 0, i32 0, i64 %%60, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_1129_count);
  llvm_cbe_tmp__346 = (signed int *)(&llvm_cbe_c->field0[(((signed long long )llvm_cbe_tmp__345))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__345));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%59, i32* %%61, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_1130_count);
  *llvm_cbe_tmp__346 = llvm_cbe_tmp__344;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__344);
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = trunc i64 %%43 to i32, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_1131_count);
  llvm_cbe_tmp__347 = (unsigned int )((unsigned int )llvm_cbe_tmp__334&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__347);
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = shl i32 %%62, 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_1132_count);
  llvm_cbe_tmp__348 = (unsigned int )llvm_cbe_tmp__347 << 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__348);
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = and i32 %%63, 2, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_1133_count);
  llvm_cbe_tmp__349 = (unsigned int )llvm_cbe_tmp__348 & 2u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__349);
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = sub i32 1, %%64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_1134_count);
  llvm_cbe_tmp__350 = (unsigned int )((unsigned int )(1u&4294967295ull)) - ((unsigned int )(llvm_cbe_tmp__349&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__350&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%65, i32* %%58, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_1135_count);
  *llvm_cbe_tmp__343 = llvm_cbe_tmp__350;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__350);
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = lshr i64 %%43, 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_1136_count);
  llvm_cbe_tmp__351 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_tmp__334&18446744073709551615ull)) >> ((unsigned long long )(1ull&18446744073709551615ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__351&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = add i32 %%storemerge25, 1, !dbg !18 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_1141_count);
  llvm_cbe_tmp__352 = (unsigned int )((unsigned int )(llvm_cbe_storemerge25&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__352&4294967295ull)));
  if (((llvm_cbe_tmp__352&4294967295U) == (256u&4294967295U))) {
    goto llvm_cbe_tmp__356;
  } else {
    llvm_cbe_storemerge25__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__352;   /* for PHI node */
    llvm_cbe_tmp__333__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__337;   /* for PHI node */
    llvm_cbe_tmp__334__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__351;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__354:
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = phi i32 [ %%50, %%48 ], [ %%42, %%.preheader  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_1102_count);
  llvm_cbe_tmp__335 = (unsigned int )llvm_cbe_tmp__335__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__335);
printf("\n = 0x%X",llvm_cbe_tmp__337);
printf("\n = 0x%X",llvm_cbe_tmp__333);
}
  if ((((unsigned int )llvm_cbe_tmp__335&4294967295U) > ((unsigned int )135u&4294967295U))) {
    goto llvm_cbe_tmp__357;
  } else {
    llvm_cbe_tmp__336__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__335;   /* for PHI node */
    goto llvm_cbe_tmp__358;
  }

llvm_cbe_tmp__358:
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = phi i32 [ 0, %%47 ], [ %%45, %%44 ], !dbg !19 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_1110_count);
  llvm_cbe_tmp__336 = (unsigned int )llvm_cbe_tmp__336__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__336);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__335);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = add i32 %%49, 1, !dbg !19 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_1111_count);
  llvm_cbe_tmp__337 = (unsigned int )((unsigned int )(llvm_cbe_tmp__336&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__337&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = zext i32 %%49 to i64, !dbg !19 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_1115_count);
  llvm_cbe_tmp__338 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__336&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__338);
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = getelementptr inbounds [136 x i8]* %%buf, i64 0, i64 %%51, !dbg !19 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_1116_count);
  llvm_cbe_tmp__339 = ( char *)(&llvm_cbe_buf[(((signed long long )llvm_cbe_tmp__338))
#ifdef AESL_BC_SIM
 % 136
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__338));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__338) < 136)) fprintf(stderr, "%s:%d: warning: Read access out of array 'buf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = load i8* %%52, align 1, !dbg !19 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_1117_count);
  llvm_cbe_tmp__340 = (unsigned char )*llvm_cbe_tmp__339;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__340);
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = zext i8 %%53 to i32, !dbg !19 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_1118_count);
  llvm_cbe_tmp__341 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__340&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__341);
  if ((((unsigned int )llvm_cbe_tmp__341&4294967295U) > ((unsigned int )llvm_cbe_storemerge25&4294967295U))) {
    llvm_cbe_tmp__335__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__337;   /* for PHI node */
    goto llvm_cbe_tmp__354;
  } else {
    goto llvm_cbe_tmp__355;
  }

llvm_cbe_tmp__357:
if (AESL_DEBUG_TRACE)
printf("\n  call void @shake256_squeezeblocks(i8* %%0, i64 1, %%struct.keccak_state* %%state) nounwind, !dbg !19 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_poly_challenge  --> \n", ++aesl_llvm_cbe_1105_count);
  shake256_squeezeblocks(( char *)llvm_cbe_tmp__292, 1ull, (l_struct_OC_keccak_state *)(&llvm_cbe_state));
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",1ull);
}
  llvm_cbe_tmp__336__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__358;

  } while (1); /* end of syntactic loop '' */
  } while (1); /* end of syntactic loop '.preheader' */
llvm_cbe_tmp__356:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_poly_challenge}\n");
  return;
}


void pqcrystals_dilithium2_ref_polyeta_pack( char *llvm_cbe_r, l_struct_OC_poly *llvm_cbe_a) {
  static  unsigned long long aesl_llvm_cbe_1156_count = 0;
  static  unsigned long long aesl_llvm_cbe_1157_count = 0;
  static  unsigned long long aesl_llvm_cbe_1158_count = 0;
  static  unsigned long long aesl_llvm_cbe_1159_count = 0;
  static  unsigned long long aesl_llvm_cbe_1160_count = 0;
  static  unsigned long long aesl_llvm_cbe_1161_count = 0;
  static  unsigned long long aesl_llvm_cbe_1162_count = 0;
  static  unsigned long long aesl_llvm_cbe_1163_count = 0;
  static  unsigned long long aesl_llvm_cbe_1164_count = 0;
  static  unsigned long long aesl_llvm_cbe_1165_count = 0;
  static  unsigned long long aesl_llvm_cbe_1166_count = 0;
  static  unsigned long long aesl_llvm_cbe_1167_count = 0;
  static  unsigned long long aesl_llvm_cbe_1168_count = 0;
  static  unsigned long long aesl_llvm_cbe_1169_count = 0;
  static  unsigned long long aesl_llvm_cbe_1170_count = 0;
  static  unsigned long long aesl_llvm_cbe_1171_count = 0;
  static  unsigned long long aesl_llvm_cbe_1172_count = 0;
  static  unsigned long long aesl_llvm_cbe_1173_count = 0;
  static  unsigned long long aesl_llvm_cbe_1174_count = 0;
  static  unsigned long long aesl_llvm_cbe_1175_count = 0;
  static  unsigned long long aesl_llvm_cbe_1176_count = 0;
  static  unsigned long long aesl_llvm_cbe_1177_count = 0;
  static  unsigned long long aesl_llvm_cbe_1178_count = 0;
  static  unsigned long long aesl_llvm_cbe_1179_count = 0;
  static  unsigned long long aesl_llvm_cbe_1180_count = 0;
  static  unsigned long long aesl_llvm_cbe_1181_count = 0;
  static  unsigned long long aesl_llvm_cbe_1182_count = 0;
  static  unsigned long long aesl_llvm_cbe_1183_count = 0;
  static  unsigned long long aesl_llvm_cbe_1184_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  unsigned int llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1185_count = 0;
  unsigned int llvm_cbe_tmp__359;
  static  unsigned long long aesl_llvm_cbe_1186_count = 0;
  unsigned long long llvm_cbe_tmp__360;
  static  unsigned long long aesl_llvm_cbe_1187_count = 0;
  signed int *llvm_cbe_tmp__361;
  static  unsigned long long aesl_llvm_cbe_1188_count = 0;
  unsigned int llvm_cbe_tmp__362;
  static  unsigned long long aesl_llvm_cbe_1189_count = 0;
  unsigned char llvm_cbe_tmp__363;
  static  unsigned long long aesl_llvm_cbe_1190_count = 0;
  unsigned char llvm_cbe_tmp__364;
  static  unsigned long long aesl_llvm_cbe_1191_count = 0;
  unsigned int llvm_cbe_tmp__365;
  static  unsigned long long aesl_llvm_cbe_1192_count = 0;
  unsigned long long llvm_cbe_tmp__366;
  static  unsigned long long aesl_llvm_cbe_1193_count = 0;
  signed int *llvm_cbe_tmp__367;
  static  unsigned long long aesl_llvm_cbe_1194_count = 0;
  unsigned int llvm_cbe_tmp__368;
  static  unsigned long long aesl_llvm_cbe_1195_count = 0;
  unsigned char llvm_cbe_tmp__369;
  static  unsigned long long aesl_llvm_cbe_1196_count = 0;
  unsigned char llvm_cbe_tmp__370;
  static  unsigned long long aesl_llvm_cbe_1197_count = 0;
  unsigned int llvm_cbe_tmp__371;
  static  unsigned long long aesl_llvm_cbe_1198_count = 0;
  unsigned long long llvm_cbe_tmp__372;
  static  unsigned long long aesl_llvm_cbe_1199_count = 0;
  signed int *llvm_cbe_tmp__373;
  static  unsigned long long aesl_llvm_cbe_1200_count = 0;
  unsigned int llvm_cbe_tmp__374;
  static  unsigned long long aesl_llvm_cbe_1201_count = 0;
  unsigned char llvm_cbe_tmp__375;
  static  unsigned long long aesl_llvm_cbe_1202_count = 0;
  unsigned char llvm_cbe_tmp__376;
  static  unsigned long long aesl_llvm_cbe_1203_count = 0;
  unsigned int llvm_cbe_tmp__377;
  static  unsigned long long aesl_llvm_cbe_1204_count = 0;
  unsigned long long llvm_cbe_tmp__378;
  static  unsigned long long aesl_llvm_cbe_1205_count = 0;
  signed int *llvm_cbe_tmp__379;
  static  unsigned long long aesl_llvm_cbe_1206_count = 0;
  unsigned int llvm_cbe_tmp__380;
  static  unsigned long long aesl_llvm_cbe_1207_count = 0;
  unsigned char llvm_cbe_tmp__381;
  static  unsigned long long aesl_llvm_cbe_1208_count = 0;
  unsigned char llvm_cbe_tmp__382;
  static  unsigned long long aesl_llvm_cbe_1209_count = 0;
  unsigned int llvm_cbe_tmp__383;
  static  unsigned long long aesl_llvm_cbe_1210_count = 0;
  unsigned long long llvm_cbe_tmp__384;
  static  unsigned long long aesl_llvm_cbe_1211_count = 0;
  signed int *llvm_cbe_tmp__385;
  static  unsigned long long aesl_llvm_cbe_1212_count = 0;
  unsigned int llvm_cbe_tmp__386;
  static  unsigned long long aesl_llvm_cbe_1213_count = 0;
  unsigned char llvm_cbe_tmp__387;
  static  unsigned long long aesl_llvm_cbe_1214_count = 0;
  unsigned char llvm_cbe_tmp__388;
  static  unsigned long long aesl_llvm_cbe_1215_count = 0;
  unsigned int llvm_cbe_tmp__389;
  static  unsigned long long aesl_llvm_cbe_1216_count = 0;
  unsigned long long llvm_cbe_tmp__390;
  static  unsigned long long aesl_llvm_cbe_1217_count = 0;
  signed int *llvm_cbe_tmp__391;
  static  unsigned long long aesl_llvm_cbe_1218_count = 0;
  unsigned int llvm_cbe_tmp__392;
  static  unsigned long long aesl_llvm_cbe_1219_count = 0;
  unsigned char llvm_cbe_tmp__393;
  static  unsigned long long aesl_llvm_cbe_1220_count = 0;
  unsigned char llvm_cbe_tmp__394;
  static  unsigned long long aesl_llvm_cbe_1221_count = 0;
  unsigned int llvm_cbe_tmp__395;
  static  unsigned long long aesl_llvm_cbe_1222_count = 0;
  unsigned long long llvm_cbe_tmp__396;
  static  unsigned long long aesl_llvm_cbe_1223_count = 0;
  signed int *llvm_cbe_tmp__397;
  static  unsigned long long aesl_llvm_cbe_1224_count = 0;
  unsigned int llvm_cbe_tmp__398;
  static  unsigned long long aesl_llvm_cbe_1225_count = 0;
  unsigned char llvm_cbe_tmp__399;
  static  unsigned long long aesl_llvm_cbe_1226_count = 0;
  unsigned char llvm_cbe_tmp__400;
  static  unsigned long long aesl_llvm_cbe_1227_count = 0;
  unsigned int llvm_cbe_tmp__401;
  static  unsigned long long aesl_llvm_cbe_1228_count = 0;
  unsigned long long llvm_cbe_tmp__402;
  static  unsigned long long aesl_llvm_cbe_1229_count = 0;
  signed int *llvm_cbe_tmp__403;
  static  unsigned long long aesl_llvm_cbe_1230_count = 0;
  unsigned int llvm_cbe_tmp__404;
  static  unsigned long long aesl_llvm_cbe_1231_count = 0;
  unsigned char llvm_cbe_tmp__405;
  static  unsigned long long aesl_llvm_cbe_1232_count = 0;
  unsigned char llvm_cbe_tmp__406;
  static  unsigned long long aesl_llvm_cbe_1233_count = 0;
  unsigned char llvm_cbe_tmp__407;
  static  unsigned long long aesl_llvm_cbe_1234_count = 0;
  unsigned char llvm_cbe_tmp__408;
  static  unsigned long long aesl_llvm_cbe_1235_count = 0;
  unsigned char llvm_cbe_tmp__409;
  static  unsigned long long aesl_llvm_cbe_1236_count = 0;
  unsigned char llvm_cbe_tmp__410;
  static  unsigned long long aesl_llvm_cbe_1237_count = 0;
  unsigned int llvm_cbe_tmp__411;
  static  unsigned long long aesl_llvm_cbe_1238_count = 0;
  unsigned long long llvm_cbe_tmp__412;
  static  unsigned long long aesl_llvm_cbe_1239_count = 0;
   char *llvm_cbe_tmp__413;
  static  unsigned long long aesl_llvm_cbe_1240_count = 0;
  static  unsigned long long aesl_llvm_cbe_1241_count = 0;
  unsigned char llvm_cbe_tmp__414;
  static  unsigned long long aesl_llvm_cbe_1242_count = 0;
  unsigned char llvm_cbe_tmp__415;
  static  unsigned long long aesl_llvm_cbe_1243_count = 0;
  unsigned char llvm_cbe_tmp__416;
  static  unsigned long long aesl_llvm_cbe_1244_count = 0;
  unsigned char llvm_cbe_tmp__417;
  static  unsigned long long aesl_llvm_cbe_1245_count = 0;
  unsigned char llvm_cbe_tmp__418;
  static  unsigned long long aesl_llvm_cbe_1246_count = 0;
  unsigned char llvm_cbe_tmp__419;
  static  unsigned long long aesl_llvm_cbe_1247_count = 0;
  unsigned char llvm_cbe_tmp__420;
  static  unsigned long long aesl_llvm_cbe_1248_count = 0;
  unsigned int llvm_cbe_tmp__421;
  static  unsigned long long aesl_llvm_cbe_1249_count = 0;
  unsigned long long llvm_cbe_tmp__422;
  static  unsigned long long aesl_llvm_cbe_1250_count = 0;
   char *llvm_cbe_tmp__423;
  static  unsigned long long aesl_llvm_cbe_1251_count = 0;
  static  unsigned long long aesl_llvm_cbe_1252_count = 0;
  unsigned char llvm_cbe_tmp__424;
  static  unsigned long long aesl_llvm_cbe_1253_count = 0;
  unsigned char llvm_cbe_tmp__425;
  static  unsigned long long aesl_llvm_cbe_1254_count = 0;
  unsigned char llvm_cbe_tmp__426;
  static  unsigned long long aesl_llvm_cbe_1255_count = 0;
  unsigned char llvm_cbe_tmp__427;
  static  unsigned long long aesl_llvm_cbe_1256_count = 0;
  unsigned char llvm_cbe_tmp__428;
  static  unsigned long long aesl_llvm_cbe_1257_count = 0;
  unsigned int llvm_cbe_tmp__429;
  static  unsigned long long aesl_llvm_cbe_1258_count = 0;
  unsigned long long llvm_cbe_tmp__430;
  static  unsigned long long aesl_llvm_cbe_1259_count = 0;
   char *llvm_cbe_tmp__431;
  static  unsigned long long aesl_llvm_cbe_1260_count = 0;
  static  unsigned long long aesl_llvm_cbe_1261_count = 0;
  unsigned int llvm_cbe_tmp__432;
  static  unsigned long long aesl_llvm_cbe_1262_count = 0;
  static  unsigned long long aesl_llvm_cbe_1263_count = 0;
  static  unsigned long long aesl_llvm_cbe_1264_count = 0;
  static  unsigned long long aesl_llvm_cbe_1265_count = 0;
  static  unsigned long long aesl_llvm_cbe_1266_count = 0;
  static  unsigned long long aesl_llvm_cbe_1267_count = 0;
  static  unsigned long long aesl_llvm_cbe_1268_count = 0;
  static  unsigned long long aesl_llvm_cbe_1269_count = 0;
  static  unsigned long long aesl_llvm_cbe_1270_count = 0;
  static  unsigned long long aesl_llvm_cbe_1271_count = 0;
  static  unsigned long long aesl_llvm_cbe_1272_count = 0;
  static  unsigned long long aesl_llvm_cbe_1273_count = 0;
  static  unsigned long long aesl_llvm_cbe_1274_count = 0;
  static  unsigned long long aesl_llvm_cbe_1275_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_1276_count = 0;
  static  unsigned long long aesl_llvm_cbe_1277_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_polyeta_pack\n");
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__433;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__433:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i32 [ 0, %%0 ], [ %%75, %%1  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__432);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = shl i32 %%storemerge1, 3, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1185_count);
  llvm_cbe_tmp__359 = (unsigned int )llvm_cbe_storemerge1 << 3u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__359);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = zext i32 %%2 to i64, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1186_count);
  llvm_cbe_tmp__360 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__359&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__360);
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%3, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1187_count);
  llvm_cbe_tmp__361 = (signed int *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__360))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__360));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = load i32* %%4, align 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1188_count);
  llvm_cbe_tmp__362 = (unsigned int )*llvm_cbe_tmp__361;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__362);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = trunc i32 %%5 to i8, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1189_count);
  llvm_cbe_tmp__363 = (unsigned char )((unsigned char )llvm_cbe_tmp__362&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__363);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = sub i8 2, %%6, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1190_count);
  llvm_cbe_tmp__364 = (unsigned char )((unsigned char )(((unsigned char )(((unsigned char )2)&255ull)) - ((unsigned char )(llvm_cbe_tmp__363&255ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )(llvm_cbe_tmp__364&255ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = or i32 %%2, 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1191_count);
  llvm_cbe_tmp__365 = (unsigned int )llvm_cbe_tmp__359 | 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__365);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = zext i32 %%8 to i64, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1192_count);
  llvm_cbe_tmp__366 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__365&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__366);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%9, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1193_count);
  llvm_cbe_tmp__367 = (signed int *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__366))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__366));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = load i32* %%10, align 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1194_count);
  llvm_cbe_tmp__368 = (unsigned int )*llvm_cbe_tmp__367;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__368);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = trunc i32 %%11 to i8, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1195_count);
  llvm_cbe_tmp__369 = (unsigned char )((unsigned char )llvm_cbe_tmp__368&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__369);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = sub i8 2, %%12, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1196_count);
  llvm_cbe_tmp__370 = (unsigned char )((unsigned char )(((unsigned char )(((unsigned char )2)&255ull)) - ((unsigned char )(llvm_cbe_tmp__369&255ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )(llvm_cbe_tmp__370&255ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = or i32 %%2, 2, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1197_count);
  llvm_cbe_tmp__371 = (unsigned int )llvm_cbe_tmp__359 | 2u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__371);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = zext i32 %%14 to i64, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1198_count);
  llvm_cbe_tmp__372 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__371&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__372);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%15, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1199_count);
  llvm_cbe_tmp__373 = (signed int *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__372))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__372));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = load i32* %%16, align 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1200_count);
  llvm_cbe_tmp__374 = (unsigned int )*llvm_cbe_tmp__373;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__374);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = trunc i32 %%17 to i8, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1201_count);
  llvm_cbe_tmp__375 = (unsigned char )((unsigned char )llvm_cbe_tmp__374&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__375);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = sub i8 2, %%18, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1202_count);
  llvm_cbe_tmp__376 = (unsigned char )((unsigned char )(((unsigned char )(((unsigned char )2)&255ull)) - ((unsigned char )(llvm_cbe_tmp__375&255ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )(llvm_cbe_tmp__376&255ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = or i32 %%2, 3, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1203_count);
  llvm_cbe_tmp__377 = (unsigned int )llvm_cbe_tmp__359 | 3u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__377);
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = zext i32 %%20 to i64, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1204_count);
  llvm_cbe_tmp__378 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__377&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__378);
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%21, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1205_count);
  llvm_cbe_tmp__379 = (signed int *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__378))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__378));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = load i32* %%22, align 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1206_count);
  llvm_cbe_tmp__380 = (unsigned int )*llvm_cbe_tmp__379;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__380);
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = trunc i32 %%23 to i8, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1207_count);
  llvm_cbe_tmp__381 = (unsigned char )((unsigned char )llvm_cbe_tmp__380&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__381);
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = sub i8 2, %%24, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1208_count);
  llvm_cbe_tmp__382 = (unsigned char )((unsigned char )(((unsigned char )(((unsigned char )2)&255ull)) - ((unsigned char )(llvm_cbe_tmp__381&255ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )(llvm_cbe_tmp__382&255ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = or i32 %%2, 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1209_count);
  llvm_cbe_tmp__383 = (unsigned int )llvm_cbe_tmp__359 | 4u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__383);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = zext i32 %%26 to i64, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1210_count);
  llvm_cbe_tmp__384 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__383&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__384);
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%27, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1211_count);
  llvm_cbe_tmp__385 = (signed int *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__384))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__384));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = load i32* %%28, align 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1212_count);
  llvm_cbe_tmp__386 = (unsigned int )*llvm_cbe_tmp__385;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__386);
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = trunc i32 %%29 to i8, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1213_count);
  llvm_cbe_tmp__387 = (unsigned char )((unsigned char )llvm_cbe_tmp__386&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__387);
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = sub i8 2, %%30, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1214_count);
  llvm_cbe_tmp__388 = (unsigned char )((unsigned char )(((unsigned char )(((unsigned char )2)&255ull)) - ((unsigned char )(llvm_cbe_tmp__387&255ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )(llvm_cbe_tmp__388&255ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = or i32 %%2, 5, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1215_count);
  llvm_cbe_tmp__389 = (unsigned int )llvm_cbe_tmp__359 | 5u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__389);
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = zext i32 %%32 to i64, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1216_count);
  llvm_cbe_tmp__390 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__389&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__390);
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%33, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1217_count);
  llvm_cbe_tmp__391 = (signed int *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__390))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__390));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = load i32* %%34, align 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1218_count);
  llvm_cbe_tmp__392 = (unsigned int )*llvm_cbe_tmp__391;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__392);
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = trunc i32 %%35 to i8, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1219_count);
  llvm_cbe_tmp__393 = (unsigned char )((unsigned char )llvm_cbe_tmp__392&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__393);
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = sub i8 2, %%36, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1220_count);
  llvm_cbe_tmp__394 = (unsigned char )((unsigned char )(((unsigned char )(((unsigned char )2)&255ull)) - ((unsigned char )(llvm_cbe_tmp__393&255ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )(llvm_cbe_tmp__394&255ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = or i32 %%2, 6, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1221_count);
  llvm_cbe_tmp__395 = (unsigned int )llvm_cbe_tmp__359 | 6u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__395);
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = zext i32 %%38 to i64, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1222_count);
  llvm_cbe_tmp__396 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__395&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__396);
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%39, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1223_count);
  llvm_cbe_tmp__397 = (signed int *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__396))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__396));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = load i32* %%40, align 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1224_count);
  llvm_cbe_tmp__398 = (unsigned int )*llvm_cbe_tmp__397;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__398);
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = trunc i32 %%41 to i8, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1225_count);
  llvm_cbe_tmp__399 = (unsigned char )((unsigned char )llvm_cbe_tmp__398&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__399);
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = sub i8 2, %%42, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1226_count);
  llvm_cbe_tmp__400 = (unsigned char )((unsigned char )(((unsigned char )(((unsigned char )2)&255ull)) - ((unsigned char )(llvm_cbe_tmp__399&255ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )(llvm_cbe_tmp__400&255ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = or i32 %%2, 7, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1227_count);
  llvm_cbe_tmp__401 = (unsigned int )llvm_cbe_tmp__359 | 7u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__401);
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = zext i32 %%44 to i64, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1228_count);
  llvm_cbe_tmp__402 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__401&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__402);
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%45, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1229_count);
  llvm_cbe_tmp__403 = (signed int *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__402))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__402));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = load i32* %%46, align 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1230_count);
  llvm_cbe_tmp__404 = (unsigned int )*llvm_cbe_tmp__403;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__404);
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = trunc i32 %%47 to i8, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1231_count);
  llvm_cbe_tmp__405 = (unsigned char )((unsigned char )llvm_cbe_tmp__404&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__405);
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = sub i8 2, %%48, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1232_count);
  llvm_cbe_tmp__406 = (unsigned char )((unsigned char )(((unsigned char )(((unsigned char )2)&255ull)) - ((unsigned char )(llvm_cbe_tmp__405&255ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )(llvm_cbe_tmp__406&255ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = shl i8 %%13, 3, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1233_count);
  llvm_cbe_tmp__407 = (unsigned char )((unsigned char )(llvm_cbe_tmp__370 << ((unsigned char )3)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__407);
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = shl i8 %%19, 6, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1234_count);
  llvm_cbe_tmp__408 = (unsigned char )((unsigned char )(llvm_cbe_tmp__376 << ((unsigned char )6)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__408);
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = or i8 %%50, %%7, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1235_count);
  llvm_cbe_tmp__409 = (unsigned char )((unsigned char )(llvm_cbe_tmp__407 | llvm_cbe_tmp__364));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__409);
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = or i8 %%52, %%51, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1236_count);
  llvm_cbe_tmp__410 = (unsigned char )((unsigned char )(llvm_cbe_tmp__409 | llvm_cbe_tmp__408));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__410);
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = mul i32 %%storemerge1, 3, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1237_count);
  llvm_cbe_tmp__411 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) * ((unsigned int )(3u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__411&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = zext i32 %%54 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1238_count);
  llvm_cbe_tmp__412 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__411&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__412);
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = getelementptr inbounds i8* %%r, i64 %%55, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1239_count);
  llvm_cbe_tmp__413 = ( char *)(&llvm_cbe_r[(((signed long long )llvm_cbe_tmp__412))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__412));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%53, i8* %%56, align 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1240_count);
  *llvm_cbe_tmp__413 = llvm_cbe_tmp__410;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__410);
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = lshr i8 %%19, 2, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1241_count);
  llvm_cbe_tmp__414 = (unsigned char )((unsigned char )(((unsigned char )(((unsigned char )(llvm_cbe_tmp__376&255ull)) >> ((unsigned char )(((unsigned char )2)&255ull))))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )(llvm_cbe_tmp__414&255ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = shl i8 %%25, 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1242_count);
  llvm_cbe_tmp__415 = (unsigned char )((unsigned char )(llvm_cbe_tmp__382 << ((unsigned char )1)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__415);
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = shl i8 %%31, 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1243_count);
  llvm_cbe_tmp__416 = (unsigned char )((unsigned char )(llvm_cbe_tmp__388 << ((unsigned char )4)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__416);
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = shl i8 %%37, 7, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1244_count);
  llvm_cbe_tmp__417 = (unsigned char )((unsigned char )(llvm_cbe_tmp__394 << ((unsigned char )7)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__417);
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = or i8 %%58, %%57, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1245_count);
  llvm_cbe_tmp__418 = (unsigned char )((unsigned char )(llvm_cbe_tmp__415 | llvm_cbe_tmp__414));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__418);
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = or i8 %%61, %%59, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1246_count);
  llvm_cbe_tmp__419 = (unsigned char )((unsigned char )(llvm_cbe_tmp__418 | llvm_cbe_tmp__416));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__419);
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = or i8 %%62, %%60, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1247_count);
  llvm_cbe_tmp__420 = (unsigned char )((unsigned char )(llvm_cbe_tmp__419 | llvm_cbe_tmp__417));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__420);
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = add i32 %%54, 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1248_count);
  llvm_cbe_tmp__421 = (unsigned int )((unsigned int )(llvm_cbe_tmp__411&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__421&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = zext i32 %%64 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1249_count);
  llvm_cbe_tmp__422 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__421&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__422);
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = getelementptr inbounds i8* %%r, i64 %%65, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1250_count);
  llvm_cbe_tmp__423 = ( char *)(&llvm_cbe_r[(((signed long long )llvm_cbe_tmp__422))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__422));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%63, i8* %%66, align 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1251_count);
  *llvm_cbe_tmp__423 = llvm_cbe_tmp__420;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__420);
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = lshr i8 %%37, 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1252_count);
  llvm_cbe_tmp__424 = (unsigned char )((unsigned char )(((unsigned char )(((unsigned char )(llvm_cbe_tmp__394&255ull)) >> ((unsigned char )(((unsigned char )1)&255ull))))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )(llvm_cbe_tmp__424&255ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = shl i8 %%43, 2, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1253_count);
  llvm_cbe_tmp__425 = (unsigned char )((unsigned char )(llvm_cbe_tmp__400 << ((unsigned char )2)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__425);
if (AESL_DEBUG_TRACE)
printf("\n  %%69 = shl i8 %%49, 5, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1254_count);
  llvm_cbe_tmp__426 = (unsigned char )((unsigned char )(llvm_cbe_tmp__406 << ((unsigned char )5)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__426);
if (AESL_DEBUG_TRACE)
printf("\n  %%70 = or i8 %%68, %%67, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1255_count);
  llvm_cbe_tmp__427 = (unsigned char )((unsigned char )(llvm_cbe_tmp__425 | llvm_cbe_tmp__424));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__427);
if (AESL_DEBUG_TRACE)
printf("\n  %%71 = or i8 %%70, %%69, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1256_count);
  llvm_cbe_tmp__428 = (unsigned char )((unsigned char )(llvm_cbe_tmp__427 | llvm_cbe_tmp__426));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__428);
if (AESL_DEBUG_TRACE)
printf("\n  %%72 = add i32 %%54, 2, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1257_count);
  llvm_cbe_tmp__429 = (unsigned int )((unsigned int )(llvm_cbe_tmp__411&4294967295ull)) + ((unsigned int )(2u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__429&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%73 = zext i32 %%72 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1258_count);
  llvm_cbe_tmp__430 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__429&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__430);
if (AESL_DEBUG_TRACE)
printf("\n  %%74 = getelementptr inbounds i8* %%r, i64 %%73, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1259_count);
  llvm_cbe_tmp__431 = ( char *)(&llvm_cbe_r[(((signed long long )llvm_cbe_tmp__430))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__430));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%71, i8* %%74, align 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1260_count);
  *llvm_cbe_tmp__431 = llvm_cbe_tmp__428;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__428);
if (AESL_DEBUG_TRACE)
printf("\n  %%75 = add i32 %%storemerge1, 1, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_pack  --> \n", ++aesl_llvm_cbe_1261_count);
  llvm_cbe_tmp__432 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__432&4294967295ull)));
  if (((llvm_cbe_tmp__432&4294967295U) == (32u&4294967295U))) {
    goto llvm_cbe_tmp__434;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__432;   /* for PHI node */
    goto llvm_cbe_tmp__433;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__434:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_polyeta_pack}\n");
  return;
}


void pqcrystals_dilithium2_ref_polyeta_unpack(l_struct_OC_poly *llvm_cbe_r,  char *llvm_cbe_a) {
  static  unsigned long long aesl_llvm_cbe_1278_count = 0;
  static  unsigned long long aesl_llvm_cbe_1279_count = 0;
  static  unsigned long long aesl_llvm_cbe_1280_count = 0;
  static  unsigned long long aesl_llvm_cbe_1281_count = 0;
  static  unsigned long long aesl_llvm_cbe_1282_count = 0;
  static  unsigned long long aesl_llvm_cbe_1283_count = 0;
  static  unsigned long long aesl_llvm_cbe_1284_count = 0;
  static  unsigned long long aesl_llvm_cbe_1285_count = 0;
  static  unsigned long long aesl_llvm_cbe_1286_count = 0;
  static  unsigned long long aesl_llvm_cbe_1287_count = 0;
  static  unsigned long long aesl_llvm_cbe_1288_count = 0;
  static  unsigned long long aesl_llvm_cbe_1289_count = 0;
  static  unsigned long long aesl_llvm_cbe_1290_count = 0;
  static  unsigned long long aesl_llvm_cbe_1291_count = 0;
  static  unsigned long long aesl_llvm_cbe_1292_count = 0;
  static  unsigned long long aesl_llvm_cbe_1293_count = 0;
  static  unsigned long long aesl_llvm_cbe_1294_count = 0;
  static  unsigned long long aesl_llvm_cbe_1295_count = 0;
  static  unsigned long long aesl_llvm_cbe_1296_count = 0;
  static  unsigned long long aesl_llvm_cbe_1297_count = 0;
  static  unsigned long long aesl_llvm_cbe_1298_count = 0;
  static  unsigned long long aesl_llvm_cbe_1299_count = 0;
  static  unsigned long long aesl_llvm_cbe_1300_count = 0;
  static  unsigned long long aesl_llvm_cbe_1301_count = 0;
  static  unsigned long long aesl_llvm_cbe_1302_count = 0;
  static  unsigned long long aesl_llvm_cbe_1303_count = 0;
  static  unsigned long long aesl_llvm_cbe_1304_count = 0;
  static  unsigned long long aesl_llvm_cbe_1305_count = 0;
  static  unsigned long long aesl_llvm_cbe_1306_count = 0;
  static  unsigned long long aesl_llvm_cbe_1307_count = 0;
  static  unsigned long long aesl_llvm_cbe_1308_count = 0;
  static  unsigned long long aesl_llvm_cbe_1309_count = 0;
  static  unsigned long long aesl_llvm_cbe_1310_count = 0;
  static  unsigned long long aesl_llvm_cbe_1311_count = 0;
  static  unsigned long long aesl_llvm_cbe_1312_count = 0;
  static  unsigned long long aesl_llvm_cbe_1313_count = 0;
  static  unsigned long long aesl_llvm_cbe_1314_count = 0;
  static  unsigned long long aesl_llvm_cbe_1315_count = 0;
  static  unsigned long long aesl_llvm_cbe_1316_count = 0;
  static  unsigned long long aesl_llvm_cbe_1317_count = 0;
  static  unsigned long long aesl_llvm_cbe_1318_count = 0;
  static  unsigned long long aesl_llvm_cbe_1319_count = 0;
  static  unsigned long long aesl_llvm_cbe_1320_count = 0;
  static  unsigned long long aesl_llvm_cbe_1321_count = 0;
  static  unsigned long long aesl_llvm_cbe_1322_count = 0;
  static  unsigned long long aesl_llvm_cbe_1323_count = 0;
  static  unsigned long long aesl_llvm_cbe_1324_count = 0;
  static  unsigned long long aesl_llvm_cbe_1325_count = 0;
  static  unsigned long long aesl_llvm_cbe_1326_count = 0;
  static  unsigned long long aesl_llvm_cbe_1327_count = 0;
  static  unsigned long long aesl_llvm_cbe_1328_count = 0;
  static  unsigned long long aesl_llvm_cbe_1329_count = 0;
  static  unsigned long long aesl_llvm_cbe_1330_count = 0;
  static  unsigned long long aesl_llvm_cbe_1331_count = 0;
  static  unsigned long long aesl_llvm_cbe_1332_count = 0;
  static  unsigned long long aesl_llvm_cbe_1333_count = 0;
  static  unsigned long long aesl_llvm_cbe_1334_count = 0;
  static  unsigned long long aesl_llvm_cbe_1335_count = 0;
  static  unsigned long long aesl_llvm_cbe_1336_count = 0;
  static  unsigned long long aesl_llvm_cbe_1337_count = 0;
  static  unsigned long long aesl_llvm_cbe_1338_count = 0;
  static  unsigned long long aesl_llvm_cbe_1339_count = 0;
  static  unsigned long long aesl_llvm_cbe_1340_count = 0;
  static  unsigned long long aesl_llvm_cbe_1341_count = 0;
  static  unsigned long long aesl_llvm_cbe_1342_count = 0;
  static  unsigned long long aesl_llvm_cbe_1343_count = 0;
  static  unsigned long long aesl_llvm_cbe_1344_count = 0;
  static  unsigned long long aesl_llvm_cbe_1345_count = 0;
  static  unsigned long long aesl_llvm_cbe_1346_count = 0;
  static  unsigned long long aesl_llvm_cbe_1347_count = 0;
  static  unsigned long long aesl_llvm_cbe_1348_count = 0;
  static  unsigned long long aesl_llvm_cbe_1349_count = 0;
  static  unsigned long long aesl_llvm_cbe_1350_count = 0;
  static  unsigned long long aesl_llvm_cbe_1351_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  unsigned int llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1352_count = 0;
  unsigned int llvm_cbe_tmp__435;
  static  unsigned long long aesl_llvm_cbe_1353_count = 0;
  unsigned long long llvm_cbe_tmp__436;
  static  unsigned long long aesl_llvm_cbe_1354_count = 0;
   char *llvm_cbe_tmp__437;
  static  unsigned long long aesl_llvm_cbe_1355_count = 0;
  unsigned char llvm_cbe_tmp__438;
  static  unsigned long long aesl_llvm_cbe_1356_count = 0;
  unsigned int llvm_cbe_tmp__439;
  static  unsigned long long aesl_llvm_cbe_1357_count = 0;
  unsigned int llvm_cbe_tmp__440;
  static  unsigned long long aesl_llvm_cbe_1358_count = 0;
  unsigned int llvm_cbe_tmp__441;
  static  unsigned long long aesl_llvm_cbe_1359_count = 0;
  unsigned long long llvm_cbe_tmp__442;
  static  unsigned long long aesl_llvm_cbe_1360_count = 0;
  signed int *llvm_cbe_tmp__443;
  static  unsigned long long aesl_llvm_cbe_1361_count = 0;
  static  unsigned long long aesl_llvm_cbe_1362_count = 0;
  unsigned char llvm_cbe_tmp__444;
  static  unsigned long long aesl_llvm_cbe_1363_count = 0;
  unsigned int llvm_cbe_tmp__445;
  static  unsigned long long aesl_llvm_cbe_1364_count = 0;
  unsigned int llvm_cbe_tmp__446;
  static  unsigned long long aesl_llvm_cbe_1365_count = 0;
  unsigned int llvm_cbe_tmp__447;
  static  unsigned long long aesl_llvm_cbe_1366_count = 0;
  unsigned int llvm_cbe_tmp__448;
  static  unsigned long long aesl_llvm_cbe_1367_count = 0;
  unsigned long long llvm_cbe_tmp__449;
  static  unsigned long long aesl_llvm_cbe_1368_count = 0;
  signed int *llvm_cbe_tmp__450;
  static  unsigned long long aesl_llvm_cbe_1369_count = 0;
  static  unsigned long long aesl_llvm_cbe_1370_count = 0;
  unsigned char llvm_cbe_tmp__451;
  static  unsigned long long aesl_llvm_cbe_1371_count = 0;
  unsigned int llvm_cbe_tmp__452;
  static  unsigned long long aesl_llvm_cbe_1372_count = 0;
  unsigned int llvm_cbe_tmp__453;
  static  unsigned long long aesl_llvm_cbe_1373_count = 0;
  unsigned int llvm_cbe_tmp__454;
  static  unsigned long long aesl_llvm_cbe_1374_count = 0;
  unsigned long long llvm_cbe_tmp__455;
  static  unsigned long long aesl_llvm_cbe_1375_count = 0;
   char *llvm_cbe_tmp__456;
  static  unsigned long long aesl_llvm_cbe_1376_count = 0;
  unsigned char llvm_cbe_tmp__457;
  static  unsigned long long aesl_llvm_cbe_1377_count = 0;
  unsigned int llvm_cbe_tmp__458;
  static  unsigned long long aesl_llvm_cbe_1378_count = 0;
  unsigned int llvm_cbe_tmp__459;
  static  unsigned long long aesl_llvm_cbe_1379_count = 0;
  unsigned int llvm_cbe_tmp__460;
  static  unsigned long long aesl_llvm_cbe_1380_count = 0;
  unsigned int llvm_cbe_tmp__461;
  static  unsigned long long aesl_llvm_cbe_1381_count = 0;
  unsigned int llvm_cbe_tmp__462;
  static  unsigned long long aesl_llvm_cbe_1382_count = 0;
  unsigned long long llvm_cbe_tmp__463;
  static  unsigned long long aesl_llvm_cbe_1383_count = 0;
  signed int *llvm_cbe_tmp__464;
  static  unsigned long long aesl_llvm_cbe_1384_count = 0;
  static  unsigned long long aesl_llvm_cbe_1385_count = 0;
  unsigned char llvm_cbe_tmp__465;
  static  unsigned long long aesl_llvm_cbe_1386_count = 0;
  unsigned int llvm_cbe_tmp__466;
  static  unsigned long long aesl_llvm_cbe_1387_count = 0;
  unsigned int llvm_cbe_tmp__467;
  static  unsigned long long aesl_llvm_cbe_1388_count = 0;
  unsigned int llvm_cbe_tmp__468;
  static  unsigned long long aesl_llvm_cbe_1389_count = 0;
  unsigned int llvm_cbe_tmp__469;
  static  unsigned long long aesl_llvm_cbe_1390_count = 0;
  unsigned long long llvm_cbe_tmp__470;
  static  unsigned long long aesl_llvm_cbe_1391_count = 0;
  signed int *llvm_cbe_tmp__471;
  static  unsigned long long aesl_llvm_cbe_1392_count = 0;
  static  unsigned long long aesl_llvm_cbe_1393_count = 0;
  unsigned char llvm_cbe_tmp__472;
  static  unsigned long long aesl_llvm_cbe_1394_count = 0;
  unsigned int llvm_cbe_tmp__473;
  static  unsigned long long aesl_llvm_cbe_1395_count = 0;
  unsigned int llvm_cbe_tmp__474;
  static  unsigned long long aesl_llvm_cbe_1396_count = 0;
  unsigned int llvm_cbe_tmp__475;
  static  unsigned long long aesl_llvm_cbe_1397_count = 0;
  unsigned int llvm_cbe_tmp__476;
  static  unsigned long long aesl_llvm_cbe_1398_count = 0;
  unsigned long long llvm_cbe_tmp__477;
  static  unsigned long long aesl_llvm_cbe_1399_count = 0;
  signed int *llvm_cbe_tmp__478;
  static  unsigned long long aesl_llvm_cbe_1400_count = 0;
  static  unsigned long long aesl_llvm_cbe_1401_count = 0;
  unsigned char llvm_cbe_tmp__479;
  static  unsigned long long aesl_llvm_cbe_1402_count = 0;
  unsigned int llvm_cbe_tmp__480;
  static  unsigned long long aesl_llvm_cbe_1403_count = 0;
  unsigned int llvm_cbe_tmp__481;
  static  unsigned long long aesl_llvm_cbe_1404_count = 0;
  unsigned int llvm_cbe_tmp__482;
  static  unsigned long long aesl_llvm_cbe_1405_count = 0;
  unsigned long long llvm_cbe_tmp__483;
  static  unsigned long long aesl_llvm_cbe_1406_count = 0;
   char *llvm_cbe_tmp__484;
  static  unsigned long long aesl_llvm_cbe_1407_count = 0;
  unsigned char llvm_cbe_tmp__485;
  static  unsigned long long aesl_llvm_cbe_1408_count = 0;
  unsigned int llvm_cbe_tmp__486;
  static  unsigned long long aesl_llvm_cbe_1409_count = 0;
  unsigned int llvm_cbe_tmp__487;
  static  unsigned long long aesl_llvm_cbe_1410_count = 0;
  unsigned int llvm_cbe_tmp__488;
  static  unsigned long long aesl_llvm_cbe_1411_count = 0;
  unsigned int llvm_cbe_tmp__489;
  static  unsigned long long aesl_llvm_cbe_1412_count = 0;
  unsigned int llvm_cbe_tmp__490;
  static  unsigned long long aesl_llvm_cbe_1413_count = 0;
  unsigned long long llvm_cbe_tmp__491;
  static  unsigned long long aesl_llvm_cbe_1414_count = 0;
  signed int *llvm_cbe_tmp__492;
  static  unsigned long long aesl_llvm_cbe_1415_count = 0;
  static  unsigned long long aesl_llvm_cbe_1416_count = 0;
  unsigned char llvm_cbe_tmp__493;
  static  unsigned long long aesl_llvm_cbe_1417_count = 0;
  unsigned int llvm_cbe_tmp__494;
  static  unsigned long long aesl_llvm_cbe_1418_count = 0;
  unsigned int llvm_cbe_tmp__495;
  static  unsigned long long aesl_llvm_cbe_1419_count = 0;
  unsigned int llvm_cbe_tmp__496;
  static  unsigned long long aesl_llvm_cbe_1420_count = 0;
  unsigned int llvm_cbe_tmp__497;
  static  unsigned long long aesl_llvm_cbe_1421_count = 0;
  unsigned long long llvm_cbe_tmp__498;
  static  unsigned long long aesl_llvm_cbe_1422_count = 0;
  signed int *llvm_cbe_tmp__499;
  static  unsigned long long aesl_llvm_cbe_1423_count = 0;
  static  unsigned long long aesl_llvm_cbe_1424_count = 0;
  unsigned char llvm_cbe_tmp__500;
  static  unsigned long long aesl_llvm_cbe_1425_count = 0;
  unsigned int llvm_cbe_tmp__501;
  static  unsigned long long aesl_llvm_cbe_1426_count = 0;
  unsigned int llvm_cbe_tmp__502;
  static  unsigned long long aesl_llvm_cbe_1427_count = 0;
  unsigned int llvm_cbe_tmp__503;
  static  unsigned long long aesl_llvm_cbe_1428_count = 0;
  unsigned long long llvm_cbe_tmp__504;
  static  unsigned long long aesl_llvm_cbe_1429_count = 0;
  signed int *llvm_cbe_tmp__505;
  static  unsigned long long aesl_llvm_cbe_1430_count = 0;
  unsigned int llvm_cbe_tmp__506;
  static  unsigned long long aesl_llvm_cbe_1431_count = 0;
  static  unsigned long long aesl_llvm_cbe_1432_count = 0;
  unsigned int llvm_cbe_tmp__507;
  static  unsigned long long aesl_llvm_cbe_1433_count = 0;
  static  unsigned long long aesl_llvm_cbe_1434_count = 0;
  unsigned int llvm_cbe_tmp__508;
  static  unsigned long long aesl_llvm_cbe_1435_count = 0;
  static  unsigned long long aesl_llvm_cbe_1436_count = 0;
  unsigned int llvm_cbe_tmp__509;
  static  unsigned long long aesl_llvm_cbe_1437_count = 0;
  static  unsigned long long aesl_llvm_cbe_1438_count = 0;
  unsigned int llvm_cbe_tmp__510;
  static  unsigned long long aesl_llvm_cbe_1439_count = 0;
  static  unsigned long long aesl_llvm_cbe_1440_count = 0;
  unsigned int llvm_cbe_tmp__511;
  static  unsigned long long aesl_llvm_cbe_1441_count = 0;
  static  unsigned long long aesl_llvm_cbe_1442_count = 0;
  unsigned int llvm_cbe_tmp__512;
  static  unsigned long long aesl_llvm_cbe_1443_count = 0;
  static  unsigned long long aesl_llvm_cbe_1444_count = 0;
  unsigned int llvm_cbe_tmp__513;
  static  unsigned long long aesl_llvm_cbe_1445_count = 0;
  static  unsigned long long aesl_llvm_cbe_1446_count = 0;
  unsigned int llvm_cbe_tmp__514;
  static  unsigned long long aesl_llvm_cbe_1447_count = 0;
  static  unsigned long long aesl_llvm_cbe_1448_count = 0;
  static  unsigned long long aesl_llvm_cbe_1449_count = 0;
  static  unsigned long long aesl_llvm_cbe_1450_count = 0;
  static  unsigned long long aesl_llvm_cbe_1451_count = 0;
  static  unsigned long long aesl_llvm_cbe_1452_count = 0;
  static  unsigned long long aesl_llvm_cbe_1453_count = 0;
  static  unsigned long long aesl_llvm_cbe_1454_count = 0;
  static  unsigned long long aesl_llvm_cbe_1455_count = 0;
  static  unsigned long long aesl_llvm_cbe_1456_count = 0;
  static  unsigned long long aesl_llvm_cbe_1457_count = 0;
  static  unsigned long long aesl_llvm_cbe_1458_count = 0;
  static  unsigned long long aesl_llvm_cbe_1459_count = 0;
  static  unsigned long long aesl_llvm_cbe_1460_count = 0;
  static  unsigned long long aesl_llvm_cbe_1461_count = 0;
  static  unsigned long long aesl_llvm_cbe_1462_count = 0;
  static  unsigned long long aesl_llvm_cbe_1463_count = 0;
  static  unsigned long long aesl_llvm_cbe_1464_count = 0;
  static  unsigned long long aesl_llvm_cbe_1465_count = 0;
  static  unsigned long long aesl_llvm_cbe_1466_count = 0;
  static  unsigned long long aesl_llvm_cbe_1467_count = 0;
  static  unsigned long long aesl_llvm_cbe_1468_count = 0;
  static  unsigned long long aesl_llvm_cbe_1469_count = 0;
  static  unsigned long long aesl_llvm_cbe_1470_count = 0;
  static  unsigned long long aesl_llvm_cbe_1471_count = 0;
  static  unsigned long long aesl_llvm_cbe_1472_count = 0;
  static  unsigned long long aesl_llvm_cbe_1473_count = 0;
  static  unsigned long long aesl_llvm_cbe_1474_count = 0;
  static  unsigned long long aesl_llvm_cbe_1475_count = 0;
  static  unsigned long long aesl_llvm_cbe_1476_count = 0;
  static  unsigned long long aesl_llvm_cbe_1477_count = 0;
  static  unsigned long long aesl_llvm_cbe_1478_count = 0;
  static  unsigned long long aesl_llvm_cbe_1479_count = 0;
  static  unsigned long long aesl_llvm_cbe_1480_count = 0;
  static  unsigned long long aesl_llvm_cbe_1481_count = 0;
  static  unsigned long long aesl_llvm_cbe_1482_count = 0;
  static  unsigned long long aesl_llvm_cbe_1483_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_1484_count = 0;
  static  unsigned long long aesl_llvm_cbe_1485_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_polyeta_unpack\n");
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__515;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__515:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i32 [ 0, %%0 ], [ %%81, %%1  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__514);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = mul i32 %%storemerge1, 3, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1352_count);
  llvm_cbe_tmp__435 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) * ((unsigned int )(3u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__435&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = zext i32 %%2 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1353_count);
  llvm_cbe_tmp__436 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__435&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__436);
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds i8* %%a, i64 %%3, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1354_count);
  llvm_cbe_tmp__437 = ( char *)(&llvm_cbe_a[(((signed long long )llvm_cbe_tmp__436))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__436));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = load i8* %%4, align 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1355_count);
  llvm_cbe_tmp__438 = (unsigned char )*llvm_cbe_tmp__437;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__438);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = zext i8 %%5 to i32, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1356_count);
  llvm_cbe_tmp__439 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__438&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__439);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = and i32 %%6, 7, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1357_count);
  llvm_cbe_tmp__440 = (unsigned int )llvm_cbe_tmp__439 & 7u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__440);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = shl i32 %%storemerge1, 3, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1358_count);
  llvm_cbe_tmp__441 = (unsigned int )llvm_cbe_storemerge1 << 3u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__441);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = zext i32 %%8 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1359_count);
  llvm_cbe_tmp__442 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__441&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__442);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%9, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1360_count);
  llvm_cbe_tmp__443 = (signed int *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__442))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__442));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%7, i32* %%10, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1361_count);
  *llvm_cbe_tmp__443 = llvm_cbe_tmp__440;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__440);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = load i8* %%4, align 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1362_count);
  llvm_cbe_tmp__444 = (unsigned char )*llvm_cbe_tmp__437;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__444);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = zext i8 %%11 to i32, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1363_count);
  llvm_cbe_tmp__445 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__444&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__445);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = lshr i32 %%12, 3, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1364_count);
  llvm_cbe_tmp__446 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__445&4294967295ull)) >> ((unsigned int )(3u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__446&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = and i32 %%13, 7, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1365_count);
  llvm_cbe_tmp__447 = (unsigned int )llvm_cbe_tmp__446 & 7u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__447);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = or i32 %%8, 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1366_count);
  llvm_cbe_tmp__448 = (unsigned int )llvm_cbe_tmp__441 | 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__448);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = zext i32 %%15 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1367_count);
  llvm_cbe_tmp__449 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__448&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__449);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%16, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1368_count);
  llvm_cbe_tmp__450 = (signed int *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__449))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__449));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%14, i32* %%17, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1369_count);
  *llvm_cbe_tmp__450 = llvm_cbe_tmp__447;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__447);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = load i8* %%4, align 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1370_count);
  llvm_cbe_tmp__451 = (unsigned char )*llvm_cbe_tmp__437;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__451);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = zext i8 %%18 to i32, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1371_count);
  llvm_cbe_tmp__452 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__451&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__452);
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = lshr i32 %%19, 6, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1372_count);
  llvm_cbe_tmp__453 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__452&4294967295ull)) >> ((unsigned int )(6u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__453&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = add i32 %%2, 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1373_count);
  llvm_cbe_tmp__454 = (unsigned int )((unsigned int )(llvm_cbe_tmp__435&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__454&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = zext i32 %%21 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1374_count);
  llvm_cbe_tmp__455 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__454&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__455);
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = getelementptr inbounds i8* %%a, i64 %%22, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1375_count);
  llvm_cbe_tmp__456 = ( char *)(&llvm_cbe_a[(((signed long long )llvm_cbe_tmp__455))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__455));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = load i8* %%23, align 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1376_count);
  llvm_cbe_tmp__457 = (unsigned char )*llvm_cbe_tmp__456;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__457);
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = zext i8 %%24 to i32, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1377_count);
  llvm_cbe_tmp__458 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__457&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__458);
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = shl nuw nsw i32 %%25, 2, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1378_count);
  llvm_cbe_tmp__459 = (unsigned int )llvm_cbe_tmp__458 << 2u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__459);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = and i32 %%26, 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1379_count);
  llvm_cbe_tmp__460 = (unsigned int )llvm_cbe_tmp__459 & 4u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__460);
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = or i32 %%27, %%20, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1380_count);
  llvm_cbe_tmp__461 = (unsigned int )llvm_cbe_tmp__460 | llvm_cbe_tmp__453;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__461);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = or i32 %%8, 2, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1381_count);
  llvm_cbe_tmp__462 = (unsigned int )llvm_cbe_tmp__441 | 2u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__462);
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = zext i32 %%29 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1382_count);
  llvm_cbe_tmp__463 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__462&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__463);
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%30, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1383_count);
  llvm_cbe_tmp__464 = (signed int *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__463))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__463));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%28, i32* %%31, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1384_count);
  *llvm_cbe_tmp__464 = llvm_cbe_tmp__461;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__461);
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = load i8* %%23, align 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1385_count);
  llvm_cbe_tmp__465 = (unsigned char )*llvm_cbe_tmp__456;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__465);
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = zext i8 %%32 to i32, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1386_count);
  llvm_cbe_tmp__466 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__465&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__466);
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = lshr i32 %%33, 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1387_count);
  llvm_cbe_tmp__467 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__466&4294967295ull)) >> ((unsigned int )(1u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__467&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = and i32 %%34, 7, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1388_count);
  llvm_cbe_tmp__468 = (unsigned int )llvm_cbe_tmp__467 & 7u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__468);
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = or i32 %%8, 3, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1389_count);
  llvm_cbe_tmp__469 = (unsigned int )llvm_cbe_tmp__441 | 3u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__469);
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = zext i32 %%36 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1390_count);
  llvm_cbe_tmp__470 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__469&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__470);
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%37, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1391_count);
  llvm_cbe_tmp__471 = (signed int *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__470))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__470));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%35, i32* %%38, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1392_count);
  *llvm_cbe_tmp__471 = llvm_cbe_tmp__468;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__468);
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = load i8* %%23, align 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1393_count);
  llvm_cbe_tmp__472 = (unsigned char )*llvm_cbe_tmp__456;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__472);
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = zext i8 %%39 to i32, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1394_count);
  llvm_cbe_tmp__473 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__472&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__473);
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = lshr i32 %%40, 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1395_count);
  llvm_cbe_tmp__474 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__473&4294967295ull)) >> ((unsigned int )(4u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__474&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = and i32 %%41, 7, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1396_count);
  llvm_cbe_tmp__475 = (unsigned int )llvm_cbe_tmp__474 & 7u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__475);
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = or i32 %%8, 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1397_count);
  llvm_cbe_tmp__476 = (unsigned int )llvm_cbe_tmp__441 | 4u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__476);
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = zext i32 %%43 to i64, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1398_count);
  llvm_cbe_tmp__477 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__476&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__477);
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%44, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1399_count);
  llvm_cbe_tmp__478 = (signed int *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__477))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__477));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%42, i32* %%45, align 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1400_count);
  *llvm_cbe_tmp__478 = llvm_cbe_tmp__475;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__475);
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = load i8* %%23, align 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1401_count);
  llvm_cbe_tmp__479 = (unsigned char )*llvm_cbe_tmp__456;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__479);
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = zext i8 %%46 to i32, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1402_count);
  llvm_cbe_tmp__480 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__479&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__480);
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = lshr i32 %%47, 7, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1403_count);
  llvm_cbe_tmp__481 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__480&4294967295ull)) >> ((unsigned int )(7u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__481&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = add i32 %%2, 2, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1404_count);
  llvm_cbe_tmp__482 = (unsigned int )((unsigned int )(llvm_cbe_tmp__435&4294967295ull)) + ((unsigned int )(2u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__482&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = zext i32 %%49 to i64, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1405_count);
  llvm_cbe_tmp__483 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__482&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__483);
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = getelementptr inbounds i8* %%a, i64 %%50, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1406_count);
  llvm_cbe_tmp__484 = ( char *)(&llvm_cbe_a[(((signed long long )llvm_cbe_tmp__483))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__483));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = load i8* %%51, align 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1407_count);
  llvm_cbe_tmp__485 = (unsigned char )*llvm_cbe_tmp__484;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__485);
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = zext i8 %%52 to i32, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1408_count);
  llvm_cbe_tmp__486 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__485&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__486);
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = shl nuw nsw i32 %%53, 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1409_count);
  llvm_cbe_tmp__487 = (unsigned int )llvm_cbe_tmp__486 << 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__487);
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = and i32 %%54, 6, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1410_count);
  llvm_cbe_tmp__488 = (unsigned int )llvm_cbe_tmp__487 & 6u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__488);
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = or i32 %%55, %%48, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1411_count);
  llvm_cbe_tmp__489 = (unsigned int )llvm_cbe_tmp__488 | llvm_cbe_tmp__481;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__489);
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = or i32 %%8, 5, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1412_count);
  llvm_cbe_tmp__490 = (unsigned int )llvm_cbe_tmp__441 | 5u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__490);
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = zext i32 %%57 to i64, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1413_count);
  llvm_cbe_tmp__491 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__490&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__491);
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%58, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1414_count);
  llvm_cbe_tmp__492 = (signed int *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__491))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__491));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%56, i32* %%59, align 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1415_count);
  *llvm_cbe_tmp__492 = llvm_cbe_tmp__489;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__489);
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = load i8* %%51, align 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1416_count);
  llvm_cbe_tmp__493 = (unsigned char )*llvm_cbe_tmp__484;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__493);
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = zext i8 %%60 to i32, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1417_count);
  llvm_cbe_tmp__494 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__493&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__494);
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = lshr i32 %%61, 2, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1418_count);
  llvm_cbe_tmp__495 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__494&4294967295ull)) >> ((unsigned int )(2u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__495&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = and i32 %%62, 7, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1419_count);
  llvm_cbe_tmp__496 = (unsigned int )llvm_cbe_tmp__495 & 7u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__496);
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = or i32 %%8, 6, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1420_count);
  llvm_cbe_tmp__497 = (unsigned int )llvm_cbe_tmp__441 | 6u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__497);
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = zext i32 %%64 to i64, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1421_count);
  llvm_cbe_tmp__498 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__497&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__498);
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%65, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1422_count);
  llvm_cbe_tmp__499 = (signed int *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__498))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__498));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%63, i32* %%66, align 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1423_count);
  *llvm_cbe_tmp__499 = llvm_cbe_tmp__496;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__496);
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = load i8* %%51, align 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1424_count);
  llvm_cbe_tmp__500 = (unsigned char )*llvm_cbe_tmp__484;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__500);
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = zext i8 %%67 to i32, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1425_count);
  llvm_cbe_tmp__501 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__500&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__501);
if (AESL_DEBUG_TRACE)
printf("\n  %%69 = lshr i32 %%68, 5, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1426_count);
  llvm_cbe_tmp__502 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__501&4294967295ull)) >> ((unsigned int )(5u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__502&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%70 = or i32 %%8, 7, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1427_count);
  llvm_cbe_tmp__503 = (unsigned int )llvm_cbe_tmp__441 | 7u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__503);
if (AESL_DEBUG_TRACE)
printf("\n  %%71 = zext i32 %%70 to i64, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1428_count);
  llvm_cbe_tmp__504 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__503&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__504);
if (AESL_DEBUG_TRACE)
printf("\n  %%72 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%71, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1429_count);
  llvm_cbe_tmp__505 = (signed int *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__504))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__504));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%73 = sub nsw i32 2, %%7, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1430_count);
  llvm_cbe_tmp__506 = (unsigned int )((unsigned int )(2u&4294967295ull)) - ((unsigned int )(llvm_cbe_tmp__440&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__506&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%73, i32* %%10, align 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1431_count);
  *llvm_cbe_tmp__443 = llvm_cbe_tmp__506;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__506);
if (AESL_DEBUG_TRACE)
printf("\n  %%74 = sub nsw i32 2, %%14, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1432_count);
  llvm_cbe_tmp__507 = (unsigned int )((unsigned int )(2u&4294967295ull)) - ((unsigned int )(llvm_cbe_tmp__447&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__507&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%74, i32* %%17, align 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1433_count);
  *llvm_cbe_tmp__450 = llvm_cbe_tmp__507;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__507);
if (AESL_DEBUG_TRACE)
printf("\n  %%75 = sub nsw i32 2, %%28, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1434_count);
  llvm_cbe_tmp__508 = (unsigned int )((unsigned int )(2u&4294967295ull)) - ((unsigned int )(llvm_cbe_tmp__461&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__508&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%75, i32* %%31, align 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1435_count);
  *llvm_cbe_tmp__464 = llvm_cbe_tmp__508;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__508);
if (AESL_DEBUG_TRACE)
printf("\n  %%76 = sub nsw i32 2, %%35, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1436_count);
  llvm_cbe_tmp__509 = (unsigned int )((unsigned int )(2u&4294967295ull)) - ((unsigned int )(llvm_cbe_tmp__468&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__509&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%76, i32* %%38, align 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1437_count);
  *llvm_cbe_tmp__471 = llvm_cbe_tmp__509;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__509);
if (AESL_DEBUG_TRACE)
printf("\n  %%77 = sub nsw i32 2, %%42, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1438_count);
  llvm_cbe_tmp__510 = (unsigned int )((unsigned int )(2u&4294967295ull)) - ((unsigned int )(llvm_cbe_tmp__475&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__510&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%77, i32* %%45, align 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1439_count);
  *llvm_cbe_tmp__478 = llvm_cbe_tmp__510;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__510);
if (AESL_DEBUG_TRACE)
printf("\n  %%78 = sub nsw i32 2, %%56, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1440_count);
  llvm_cbe_tmp__511 = (unsigned int )((unsigned int )(2u&4294967295ull)) - ((unsigned int )(llvm_cbe_tmp__489&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__511&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%78, i32* %%59, align 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1441_count);
  *llvm_cbe_tmp__492 = llvm_cbe_tmp__511;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__511);
if (AESL_DEBUG_TRACE)
printf("\n  %%79 = sub nsw i32 2, %%63, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1442_count);
  llvm_cbe_tmp__512 = (unsigned int )((unsigned int )(2u&4294967295ull)) - ((unsigned int )(llvm_cbe_tmp__496&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__512&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%79, i32* %%66, align 4, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1443_count);
  *llvm_cbe_tmp__499 = llvm_cbe_tmp__512;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__512);
if (AESL_DEBUG_TRACE)
printf("\n  %%80 = sub nsw i32 2, %%69, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1444_count);
  llvm_cbe_tmp__513 = (unsigned int )((unsigned int )(2u&4294967295ull)) - ((unsigned int )(llvm_cbe_tmp__502&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__513&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%80, i32* %%72, align 4, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1445_count);
  *llvm_cbe_tmp__505 = llvm_cbe_tmp__513;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__513);
if (AESL_DEBUG_TRACE)
printf("\n  %%81 = add i32 %%storemerge1, 1, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyeta_unpack  --> \n", ++aesl_llvm_cbe_1446_count);
  llvm_cbe_tmp__514 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__514&4294967295ull)));
  if (((llvm_cbe_tmp__514&4294967295U) == (32u&4294967295U))) {
    goto llvm_cbe_tmp__516;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__514;   /* for PHI node */
    goto llvm_cbe_tmp__515;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__516:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_polyeta_unpack}\n");
  return;
}


void pqcrystals_dilithium2_ref_polyt1_pack( char *llvm_cbe_r, l_struct_OC_poly *llvm_cbe_a) {
  static  unsigned long long aesl_llvm_cbe_1486_count = 0;
  static  unsigned long long aesl_llvm_cbe_1487_count = 0;
  static  unsigned long long aesl_llvm_cbe_1488_count = 0;
  static  unsigned long long aesl_llvm_cbe_1489_count = 0;
  static  unsigned long long aesl_llvm_cbe_1490_count = 0;
  static  unsigned long long aesl_llvm_cbe_1491_count = 0;
  static  unsigned long long aesl_llvm_cbe_1492_count = 0;
  static  unsigned long long aesl_llvm_cbe_1493_count = 0;
  static  unsigned long long aesl_llvm_cbe_1494_count = 0;
  static  unsigned long long aesl_llvm_cbe_1495_count = 0;
  static  unsigned long long aesl_llvm_cbe_1496_count = 0;
  static  unsigned long long aesl_llvm_cbe_1497_count = 0;
  static  unsigned long long aesl_llvm_cbe_1498_count = 0;
  static  unsigned long long aesl_llvm_cbe_1499_count = 0;
  static  unsigned long long aesl_llvm_cbe_1500_count = 0;
  static  unsigned long long aesl_llvm_cbe_1501_count = 0;
  static  unsigned long long aesl_llvm_cbe_1502_count = 0;
  static  unsigned long long aesl_llvm_cbe_1503_count = 0;
  static  unsigned long long aesl_llvm_cbe_1504_count = 0;
  static  unsigned long long aesl_llvm_cbe_1505_count = 0;
  static  unsigned long long aesl_llvm_cbe_1506_count = 0;
  static  unsigned long long aesl_llvm_cbe_1507_count = 0;
  static  unsigned long long aesl_llvm_cbe_1508_count = 0;
  static  unsigned long long aesl_llvm_cbe_1509_count = 0;
  static  unsigned long long aesl_llvm_cbe_1510_count = 0;
  static  unsigned long long aesl_llvm_cbe_1511_count = 0;
  static  unsigned long long aesl_llvm_cbe_1512_count = 0;
  static  unsigned long long aesl_llvm_cbe_1513_count = 0;
  static  unsigned long long aesl_llvm_cbe_1514_count = 0;
  static  unsigned long long aesl_llvm_cbe_1515_count = 0;
  static  unsigned long long aesl_llvm_cbe_1516_count = 0;
  static  unsigned long long aesl_llvm_cbe_1517_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  unsigned int llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1518_count = 0;
  unsigned int llvm_cbe_tmp__517;
  static  unsigned long long aesl_llvm_cbe_1519_count = 0;
  unsigned long long llvm_cbe_tmp__518;
  static  unsigned long long aesl_llvm_cbe_1520_count = 0;
  signed int *llvm_cbe_tmp__519;
  static  unsigned long long aesl_llvm_cbe_1521_count = 0;
  unsigned int llvm_cbe_tmp__520;
  static  unsigned long long aesl_llvm_cbe_1522_count = 0;
  unsigned char llvm_cbe_tmp__521;
  static  unsigned long long aesl_llvm_cbe_1523_count = 0;
  unsigned int llvm_cbe_tmp__522;
  static  unsigned long long aesl_llvm_cbe_1524_count = 0;
  unsigned long long llvm_cbe_tmp__523;
  static  unsigned long long aesl_llvm_cbe_1525_count = 0;
   char *llvm_cbe_tmp__524;
  static  unsigned long long aesl_llvm_cbe_1526_count = 0;
  static  unsigned long long aesl_llvm_cbe_1527_count = 0;
  unsigned int llvm_cbe_tmp__525;
  static  unsigned long long aesl_llvm_cbe_1528_count = 0;
  unsigned int llvm_cbe_tmp__526;
  static  unsigned long long aesl_llvm_cbe_1529_count = 0;
  unsigned int llvm_cbe_tmp__527;
  static  unsigned long long aesl_llvm_cbe_1530_count = 0;
  unsigned long long llvm_cbe_tmp__528;
  static  unsigned long long aesl_llvm_cbe_1531_count = 0;
  signed int *llvm_cbe_tmp__529;
  static  unsigned long long aesl_llvm_cbe_1532_count = 0;
  unsigned int llvm_cbe_tmp__530;
  static  unsigned long long aesl_llvm_cbe_1533_count = 0;
  unsigned int llvm_cbe_tmp__531;
  static  unsigned long long aesl_llvm_cbe_1534_count = 0;
  unsigned int llvm_cbe_tmp__532;
  static  unsigned long long aesl_llvm_cbe_1535_count = 0;
  unsigned char llvm_cbe_tmp__533;
  static  unsigned long long aesl_llvm_cbe_1536_count = 0;
  unsigned int llvm_cbe_tmp__534;
  static  unsigned long long aesl_llvm_cbe_1537_count = 0;
  unsigned long long llvm_cbe_tmp__535;
  static  unsigned long long aesl_llvm_cbe_1538_count = 0;
   char *llvm_cbe_tmp__536;
  static  unsigned long long aesl_llvm_cbe_1539_count = 0;
  static  unsigned long long aesl_llvm_cbe_1540_count = 0;
  unsigned int llvm_cbe_tmp__537;
  static  unsigned long long aesl_llvm_cbe_1541_count = 0;
  unsigned int llvm_cbe_tmp__538;
  static  unsigned long long aesl_llvm_cbe_1542_count = 0;
  unsigned int llvm_cbe_tmp__539;
  static  unsigned long long aesl_llvm_cbe_1543_count = 0;
  unsigned long long llvm_cbe_tmp__540;
  static  unsigned long long aesl_llvm_cbe_1544_count = 0;
  signed int *llvm_cbe_tmp__541;
  static  unsigned long long aesl_llvm_cbe_1545_count = 0;
  unsigned int llvm_cbe_tmp__542;
  static  unsigned long long aesl_llvm_cbe_1546_count = 0;
  unsigned int llvm_cbe_tmp__543;
  static  unsigned long long aesl_llvm_cbe_1547_count = 0;
  unsigned int llvm_cbe_tmp__544;
  static  unsigned long long aesl_llvm_cbe_1548_count = 0;
  unsigned char llvm_cbe_tmp__545;
  static  unsigned long long aesl_llvm_cbe_1549_count = 0;
  unsigned int llvm_cbe_tmp__546;
  static  unsigned long long aesl_llvm_cbe_1550_count = 0;
  unsigned long long llvm_cbe_tmp__547;
  static  unsigned long long aesl_llvm_cbe_1551_count = 0;
   char *llvm_cbe_tmp__548;
  static  unsigned long long aesl_llvm_cbe_1552_count = 0;
  static  unsigned long long aesl_llvm_cbe_1553_count = 0;
  unsigned int llvm_cbe_tmp__549;
  static  unsigned long long aesl_llvm_cbe_1554_count = 0;
  unsigned int llvm_cbe_tmp__550;
  static  unsigned long long aesl_llvm_cbe_1555_count = 0;
  unsigned int llvm_cbe_tmp__551;
  static  unsigned long long aesl_llvm_cbe_1556_count = 0;
  unsigned long long llvm_cbe_tmp__552;
  static  unsigned long long aesl_llvm_cbe_1557_count = 0;
  signed int *llvm_cbe_tmp__553;
  static  unsigned long long aesl_llvm_cbe_1558_count = 0;
  unsigned int llvm_cbe_tmp__554;
  static  unsigned long long aesl_llvm_cbe_1559_count = 0;
  unsigned int llvm_cbe_tmp__555;
  static  unsigned long long aesl_llvm_cbe_1560_count = 0;
  unsigned int llvm_cbe_tmp__556;
  static  unsigned long long aesl_llvm_cbe_1561_count = 0;
  unsigned char llvm_cbe_tmp__557;
  static  unsigned long long aesl_llvm_cbe_1562_count = 0;
  unsigned int llvm_cbe_tmp__558;
  static  unsigned long long aesl_llvm_cbe_1563_count = 0;
  unsigned long long llvm_cbe_tmp__559;
  static  unsigned long long aesl_llvm_cbe_1564_count = 0;
   char *llvm_cbe_tmp__560;
  static  unsigned long long aesl_llvm_cbe_1565_count = 0;
  static  unsigned long long aesl_llvm_cbe_1566_count = 0;
  unsigned int llvm_cbe_tmp__561;
  static  unsigned long long aesl_llvm_cbe_1567_count = 0;
  unsigned int llvm_cbe_tmp__562;
  static  unsigned long long aesl_llvm_cbe_1568_count = 0;
  unsigned char llvm_cbe_tmp__563;
  static  unsigned long long aesl_llvm_cbe_1569_count = 0;
  unsigned int llvm_cbe_tmp__564;
  static  unsigned long long aesl_llvm_cbe_1570_count = 0;
  unsigned long long llvm_cbe_tmp__565;
  static  unsigned long long aesl_llvm_cbe_1571_count = 0;
   char *llvm_cbe_tmp__566;
  static  unsigned long long aesl_llvm_cbe_1572_count = 0;
  static  unsigned long long aesl_llvm_cbe_1573_count = 0;
  unsigned int llvm_cbe_tmp__567;
  static  unsigned long long aesl_llvm_cbe_1574_count = 0;
  static  unsigned long long aesl_llvm_cbe_1575_count = 0;
  static  unsigned long long aesl_llvm_cbe_1576_count = 0;
  static  unsigned long long aesl_llvm_cbe_1577_count = 0;
  static  unsigned long long aesl_llvm_cbe_1578_count = 0;
  static  unsigned long long aesl_llvm_cbe_1579_count = 0;
  static  unsigned long long aesl_llvm_cbe_1580_count = 0;
  static  unsigned long long aesl_llvm_cbe_1581_count = 0;
  static  unsigned long long aesl_llvm_cbe_1582_count = 0;
  static  unsigned long long aesl_llvm_cbe_1583_count = 0;
  static  unsigned long long aesl_llvm_cbe_1584_count = 0;
  static  unsigned long long aesl_llvm_cbe_1585_count = 0;
  static  unsigned long long aesl_llvm_cbe_1586_count = 0;
  static  unsigned long long aesl_llvm_cbe_1587_count = 0;
  static  unsigned long long aesl_llvm_cbe_1588_count = 0;
  static  unsigned long long aesl_llvm_cbe_1589_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_1590_count = 0;
  static  unsigned long long aesl_llvm_cbe_1591_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_polyt1_pack\n");
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__568;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__568:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i32 [ 0, %%0 ], [ %%52, %%1  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__567);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = shl i32 %%storemerge1, 2, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1518_count);
  llvm_cbe_tmp__517 = (unsigned int )llvm_cbe_storemerge1 << 2u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__517);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = zext i32 %%2 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1519_count);
  llvm_cbe_tmp__518 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__517&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__518);
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%3, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1520_count);
  llvm_cbe_tmp__519 = (signed int *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__518))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__518));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = load i32* %%4, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1521_count);
  llvm_cbe_tmp__520 = (unsigned int )*llvm_cbe_tmp__519;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__520);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = trunc i32 %%5 to i8, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1522_count);
  llvm_cbe_tmp__521 = (unsigned char )((unsigned char )llvm_cbe_tmp__520&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__521);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = mul i32 %%storemerge1, 5, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1523_count);
  llvm_cbe_tmp__522 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) * ((unsigned int )(5u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__522&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = zext i32 %%7 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1524_count);
  llvm_cbe_tmp__523 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__522&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__523);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds i8* %%r, i64 %%8, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1525_count);
  llvm_cbe_tmp__524 = ( char *)(&llvm_cbe_r[(((signed long long )llvm_cbe_tmp__523))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__523));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%6, i8* %%9, align 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1526_count);
  *llvm_cbe_tmp__524 = llvm_cbe_tmp__521;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__521);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = load i32* %%4, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1527_count);
  llvm_cbe_tmp__525 = (unsigned int )*llvm_cbe_tmp__519;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__525);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = lshr i32 %%10, 8, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1528_count);
  llvm_cbe_tmp__526 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__525&4294967295ull)) >> ((unsigned int )(8u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__526&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = or i32 %%2, 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1529_count);
  llvm_cbe_tmp__527 = (unsigned int )llvm_cbe_tmp__517 | 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__527);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = zext i32 %%12 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1530_count);
  llvm_cbe_tmp__528 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__527&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__528);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%13, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1531_count);
  llvm_cbe_tmp__529 = (signed int *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__528))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__528));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = load i32* %%14, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1532_count);
  llvm_cbe_tmp__530 = (unsigned int )*llvm_cbe_tmp__529;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__530);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = shl i32 %%15, 2, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1533_count);
  llvm_cbe_tmp__531 = (unsigned int )llvm_cbe_tmp__530 << 2u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__531);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = or i32 %%16, %%11, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1534_count);
  llvm_cbe_tmp__532 = (unsigned int )llvm_cbe_tmp__531 | llvm_cbe_tmp__526;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__532);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = trunc i32 %%17 to i8, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1535_count);
  llvm_cbe_tmp__533 = (unsigned char )((unsigned char )llvm_cbe_tmp__532&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__533);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = add i32 %%7, 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1536_count);
  llvm_cbe_tmp__534 = (unsigned int )((unsigned int )(llvm_cbe_tmp__522&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__534&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = zext i32 %%19 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1537_count);
  llvm_cbe_tmp__535 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__534&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__535);
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = getelementptr inbounds i8* %%r, i64 %%20, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1538_count);
  llvm_cbe_tmp__536 = ( char *)(&llvm_cbe_r[(((signed long long )llvm_cbe_tmp__535))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__535));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%18, i8* %%21, align 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1539_count);
  *llvm_cbe_tmp__536 = llvm_cbe_tmp__533;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__533);
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = load i32* %%14, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1540_count);
  llvm_cbe_tmp__537 = (unsigned int )*llvm_cbe_tmp__529;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__537);
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = lshr i32 %%22, 6, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1541_count);
  llvm_cbe_tmp__538 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__537&4294967295ull)) >> ((unsigned int )(6u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__538&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = or i32 %%2, 2, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1542_count);
  llvm_cbe_tmp__539 = (unsigned int )llvm_cbe_tmp__517 | 2u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__539);
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = zext i32 %%24 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1543_count);
  llvm_cbe_tmp__540 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__539&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__540);
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%25, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1544_count);
  llvm_cbe_tmp__541 = (signed int *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__540))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__540));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = load i32* %%26, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1545_count);
  llvm_cbe_tmp__542 = (unsigned int )*llvm_cbe_tmp__541;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__542);
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = shl i32 %%27, 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1546_count);
  llvm_cbe_tmp__543 = (unsigned int )llvm_cbe_tmp__542 << 4u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__543);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = or i32 %%28, %%23, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1547_count);
  llvm_cbe_tmp__544 = (unsigned int )llvm_cbe_tmp__543 | llvm_cbe_tmp__538;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__544);
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = trunc i32 %%29 to i8, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1548_count);
  llvm_cbe_tmp__545 = (unsigned char )((unsigned char )llvm_cbe_tmp__544&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__545);
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = add i32 %%7, 2, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1549_count);
  llvm_cbe_tmp__546 = (unsigned int )((unsigned int )(llvm_cbe_tmp__522&4294967295ull)) + ((unsigned int )(2u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__546&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = zext i32 %%31 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1550_count);
  llvm_cbe_tmp__547 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__546&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__547);
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = getelementptr inbounds i8* %%r, i64 %%32, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1551_count);
  llvm_cbe_tmp__548 = ( char *)(&llvm_cbe_r[(((signed long long )llvm_cbe_tmp__547))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__547));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%30, i8* %%33, align 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1552_count);
  *llvm_cbe_tmp__548 = llvm_cbe_tmp__545;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__545);
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = load i32* %%26, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1553_count);
  llvm_cbe_tmp__549 = (unsigned int )*llvm_cbe_tmp__541;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__549);
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = lshr i32 %%34, 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1554_count);
  llvm_cbe_tmp__550 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__549&4294967295ull)) >> ((unsigned int )(4u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__550&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = or i32 %%2, 3, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1555_count);
  llvm_cbe_tmp__551 = (unsigned int )llvm_cbe_tmp__517 | 3u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__551);
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = zext i32 %%36 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1556_count);
  llvm_cbe_tmp__552 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__551&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__552);
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%37, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1557_count);
  llvm_cbe_tmp__553 = (signed int *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__552))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__552));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = load i32* %%38, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1558_count);
  llvm_cbe_tmp__554 = (unsigned int )*llvm_cbe_tmp__553;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__554);
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = shl i32 %%39, 6, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1559_count);
  llvm_cbe_tmp__555 = (unsigned int )llvm_cbe_tmp__554 << 6u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__555);
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = or i32 %%40, %%35, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1560_count);
  llvm_cbe_tmp__556 = (unsigned int )llvm_cbe_tmp__555 | llvm_cbe_tmp__550;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__556);
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = trunc i32 %%41 to i8, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1561_count);
  llvm_cbe_tmp__557 = (unsigned char )((unsigned char )llvm_cbe_tmp__556&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__557);
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = add i32 %%7, 3, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1562_count);
  llvm_cbe_tmp__558 = (unsigned int )((unsigned int )(llvm_cbe_tmp__522&4294967295ull)) + ((unsigned int )(3u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__558&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = zext i32 %%43 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1563_count);
  llvm_cbe_tmp__559 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__558&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__559);
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = getelementptr inbounds i8* %%r, i64 %%44, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1564_count);
  llvm_cbe_tmp__560 = ( char *)(&llvm_cbe_r[(((signed long long )llvm_cbe_tmp__559))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__559));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%42, i8* %%45, align 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1565_count);
  *llvm_cbe_tmp__560 = llvm_cbe_tmp__557;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__557);
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = load i32* %%38, align 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1566_count);
  llvm_cbe_tmp__561 = (unsigned int )*llvm_cbe_tmp__553;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__561);
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = lshr i32 %%46, 2, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1567_count);
  llvm_cbe_tmp__562 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__561&4294967295ull)) >> ((unsigned int )(2u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__562&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = trunc i32 %%47 to i8, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1568_count);
  llvm_cbe_tmp__563 = (unsigned char )((unsigned char )llvm_cbe_tmp__562&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__563);
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = add i32 %%7, 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1569_count);
  llvm_cbe_tmp__564 = (unsigned int )((unsigned int )(llvm_cbe_tmp__522&4294967295ull)) + ((unsigned int )(4u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__564&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = zext i32 %%49 to i64, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1570_count);
  llvm_cbe_tmp__565 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__564&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__565);
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = getelementptr inbounds i8* %%r, i64 %%50, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1571_count);
  llvm_cbe_tmp__566 = ( char *)(&llvm_cbe_r[(((signed long long )llvm_cbe_tmp__565))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__565));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%48, i8* %%51, align 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1572_count);
  *llvm_cbe_tmp__566 = llvm_cbe_tmp__563;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__563);
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = add i32 %%storemerge1, 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_pack  --> \n", ++aesl_llvm_cbe_1573_count);
  llvm_cbe_tmp__567 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__567&4294967295ull)));
  if (((llvm_cbe_tmp__567&4294967295U) == (64u&4294967295U))) {
    goto llvm_cbe_tmp__569;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__567;   /* for PHI node */
    goto llvm_cbe_tmp__568;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__569:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_polyt1_pack}\n");
  return;
}


void pqcrystals_dilithium2_ref_polyt1_unpack(l_struct_OC_poly *llvm_cbe_r,  char *llvm_cbe_a) {
  static  unsigned long long aesl_llvm_cbe_1592_count = 0;
  static  unsigned long long aesl_llvm_cbe_1593_count = 0;
  static  unsigned long long aesl_llvm_cbe_1594_count = 0;
  static  unsigned long long aesl_llvm_cbe_1595_count = 0;
  static  unsigned long long aesl_llvm_cbe_1596_count = 0;
  static  unsigned long long aesl_llvm_cbe_1597_count = 0;
  static  unsigned long long aesl_llvm_cbe_1598_count = 0;
  static  unsigned long long aesl_llvm_cbe_1599_count = 0;
  static  unsigned long long aesl_llvm_cbe_1600_count = 0;
  static  unsigned long long aesl_llvm_cbe_1601_count = 0;
  static  unsigned long long aesl_llvm_cbe_1602_count = 0;
  static  unsigned long long aesl_llvm_cbe_1603_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_1615_count = 0;
  static  unsigned long long aesl_llvm_cbe_1616_count = 0;
  static  unsigned long long aesl_llvm_cbe_1617_count = 0;
  static  unsigned long long aesl_llvm_cbe_1618_count = 0;
  static  unsigned long long aesl_llvm_cbe_1619_count = 0;
  static  unsigned long long aesl_llvm_cbe_1620_count = 0;
  static  unsigned long long aesl_llvm_cbe_1621_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  unsigned int llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1622_count = 0;
  unsigned int llvm_cbe_tmp__570;
  static  unsigned long long aesl_llvm_cbe_1623_count = 0;
  unsigned long long llvm_cbe_tmp__571;
  static  unsigned long long aesl_llvm_cbe_1624_count = 0;
   char *llvm_cbe_tmp__572;
  static  unsigned long long aesl_llvm_cbe_1625_count = 0;
  unsigned char llvm_cbe_tmp__573;
  static  unsigned long long aesl_llvm_cbe_1626_count = 0;
  unsigned int llvm_cbe_tmp__574;
  static  unsigned long long aesl_llvm_cbe_1627_count = 0;
  unsigned int llvm_cbe_tmp__575;
  static  unsigned long long aesl_llvm_cbe_1628_count = 0;
  unsigned long long llvm_cbe_tmp__576;
  static  unsigned long long aesl_llvm_cbe_1629_count = 0;
   char *llvm_cbe_tmp__577;
  static  unsigned long long aesl_llvm_cbe_1630_count = 0;
  unsigned char llvm_cbe_tmp__578;
  static  unsigned long long aesl_llvm_cbe_1631_count = 0;
  unsigned int llvm_cbe_tmp__579;
  static  unsigned long long aesl_llvm_cbe_1632_count = 0;
  unsigned int llvm_cbe_tmp__580;
  static  unsigned long long aesl_llvm_cbe_1633_count = 0;
  unsigned int llvm_cbe_tmp__581;
  static  unsigned long long aesl_llvm_cbe_1634_count = 0;
  unsigned int llvm_cbe_tmp__582;
  static  unsigned long long aesl_llvm_cbe_1635_count = 0;
  unsigned int llvm_cbe_tmp__583;
  static  unsigned long long aesl_llvm_cbe_1636_count = 0;
  unsigned long long llvm_cbe_tmp__584;
  static  unsigned long long aesl_llvm_cbe_1637_count = 0;
  signed int *llvm_cbe_tmp__585;
  static  unsigned long long aesl_llvm_cbe_1638_count = 0;
  static  unsigned long long aesl_llvm_cbe_1639_count = 0;
  unsigned char llvm_cbe_tmp__586;
  static  unsigned long long aesl_llvm_cbe_1640_count = 0;
  unsigned int llvm_cbe_tmp__587;
  static  unsigned long long aesl_llvm_cbe_1641_count = 0;
  unsigned int llvm_cbe_tmp__588;
  static  unsigned long long aesl_llvm_cbe_1642_count = 0;
  unsigned int llvm_cbe_tmp__589;
  static  unsigned long long aesl_llvm_cbe_1643_count = 0;
  unsigned long long llvm_cbe_tmp__590;
  static  unsigned long long aesl_llvm_cbe_1644_count = 0;
   char *llvm_cbe_tmp__591;
  static  unsigned long long aesl_llvm_cbe_1645_count = 0;
  unsigned char llvm_cbe_tmp__592;
  static  unsigned long long aesl_llvm_cbe_1646_count = 0;
  unsigned int llvm_cbe_tmp__593;
  static  unsigned long long aesl_llvm_cbe_1647_count = 0;
  unsigned int llvm_cbe_tmp__594;
  static  unsigned long long aesl_llvm_cbe_1648_count = 0;
  unsigned int llvm_cbe_tmp__595;
  static  unsigned long long aesl_llvm_cbe_1649_count = 0;
  unsigned int llvm_cbe_tmp__596;
  static  unsigned long long aesl_llvm_cbe_1650_count = 0;
  unsigned int llvm_cbe_tmp__597;
  static  unsigned long long aesl_llvm_cbe_1651_count = 0;
  unsigned long long llvm_cbe_tmp__598;
  static  unsigned long long aesl_llvm_cbe_1652_count = 0;
  signed int *llvm_cbe_tmp__599;
  static  unsigned long long aesl_llvm_cbe_1653_count = 0;
  static  unsigned long long aesl_llvm_cbe_1654_count = 0;
  unsigned char llvm_cbe_tmp__600;
  static  unsigned long long aesl_llvm_cbe_1655_count = 0;
  unsigned int llvm_cbe_tmp__601;
  static  unsigned long long aesl_llvm_cbe_1656_count = 0;
  unsigned int llvm_cbe_tmp__602;
  static  unsigned long long aesl_llvm_cbe_1657_count = 0;
  unsigned int llvm_cbe_tmp__603;
  static  unsigned long long aesl_llvm_cbe_1658_count = 0;
  unsigned long long llvm_cbe_tmp__604;
  static  unsigned long long aesl_llvm_cbe_1659_count = 0;
   char *llvm_cbe_tmp__605;
  static  unsigned long long aesl_llvm_cbe_1660_count = 0;
  unsigned char llvm_cbe_tmp__606;
  static  unsigned long long aesl_llvm_cbe_1661_count = 0;
  unsigned int llvm_cbe_tmp__607;
  static  unsigned long long aesl_llvm_cbe_1662_count = 0;
  unsigned int llvm_cbe_tmp__608;
  static  unsigned long long aesl_llvm_cbe_1663_count = 0;
  unsigned int llvm_cbe_tmp__609;
  static  unsigned long long aesl_llvm_cbe_1664_count = 0;
  unsigned int llvm_cbe_tmp__610;
  static  unsigned long long aesl_llvm_cbe_1665_count = 0;
  unsigned int llvm_cbe_tmp__611;
  static  unsigned long long aesl_llvm_cbe_1666_count = 0;
  unsigned long long llvm_cbe_tmp__612;
  static  unsigned long long aesl_llvm_cbe_1667_count = 0;
  signed int *llvm_cbe_tmp__613;
  static  unsigned long long aesl_llvm_cbe_1668_count = 0;
  static  unsigned long long aesl_llvm_cbe_1669_count = 0;
  unsigned char llvm_cbe_tmp__614;
  static  unsigned long long aesl_llvm_cbe_1670_count = 0;
  unsigned int llvm_cbe_tmp__615;
  static  unsigned long long aesl_llvm_cbe_1671_count = 0;
  unsigned int llvm_cbe_tmp__616;
  static  unsigned long long aesl_llvm_cbe_1672_count = 0;
  unsigned int llvm_cbe_tmp__617;
  static  unsigned long long aesl_llvm_cbe_1673_count = 0;
  unsigned long long llvm_cbe_tmp__618;
  static  unsigned long long aesl_llvm_cbe_1674_count = 0;
   char *llvm_cbe_tmp__619;
  static  unsigned long long aesl_llvm_cbe_1675_count = 0;
  unsigned char llvm_cbe_tmp__620;
  static  unsigned long long aesl_llvm_cbe_1676_count = 0;
  unsigned int llvm_cbe_tmp__621;
  static  unsigned long long aesl_llvm_cbe_1677_count = 0;
  unsigned int llvm_cbe_tmp__622;
  static  unsigned long long aesl_llvm_cbe_1678_count = 0;
  unsigned int llvm_cbe_tmp__623;
  static  unsigned long long aesl_llvm_cbe_1679_count = 0;
  unsigned int llvm_cbe_tmp__624;
  static  unsigned long long aesl_llvm_cbe_1680_count = 0;
  unsigned long long llvm_cbe_tmp__625;
  static  unsigned long long aesl_llvm_cbe_1681_count = 0;
  signed int *llvm_cbe_tmp__626;
  static  unsigned long long aesl_llvm_cbe_1682_count = 0;
  static  unsigned long long aesl_llvm_cbe_1683_count = 0;
  unsigned int llvm_cbe_tmp__627;
  static  unsigned long long aesl_llvm_cbe_1684_count = 0;
  static  unsigned long long aesl_llvm_cbe_1685_count = 0;
  static  unsigned long long aesl_llvm_cbe_1686_count = 0;
  static  unsigned long long aesl_llvm_cbe_1687_count = 0;
  static  unsigned long long aesl_llvm_cbe_1688_count = 0;
  static  unsigned long long aesl_llvm_cbe_1689_count = 0;
  static  unsigned long long aesl_llvm_cbe_1690_count = 0;
  static  unsigned long long aesl_llvm_cbe_1691_count = 0;
  static  unsigned long long aesl_llvm_cbe_1692_count = 0;
  static  unsigned long long aesl_llvm_cbe_1693_count = 0;
  static  unsigned long long aesl_llvm_cbe_1694_count = 0;
  static  unsigned long long aesl_llvm_cbe_1695_count = 0;
  static  unsigned long long aesl_llvm_cbe_1696_count = 0;
  static  unsigned long long aesl_llvm_cbe_1697_count = 0;
  static  unsigned long long aesl_llvm_cbe_1698_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_1699_count = 0;
  static  unsigned long long aesl_llvm_cbe_1700_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_polyt1_unpack\n");
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__628;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__628:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i32 [ 0, %%0 ], [ %%59, %%1  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__627);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = mul i32 %%storemerge1, 5, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1622_count);
  llvm_cbe_tmp__570 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) * ((unsigned int )(5u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__570&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = zext i32 %%2 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1623_count);
  llvm_cbe_tmp__571 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__570&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__571);
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds i8* %%a, i64 %%3, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1624_count);
  llvm_cbe_tmp__572 = ( char *)(&llvm_cbe_a[(((signed long long )llvm_cbe_tmp__571))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__571));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = load i8* %%4, align 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1625_count);
  llvm_cbe_tmp__573 = (unsigned char )*llvm_cbe_tmp__572;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__573);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = zext i8 %%5 to i32, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1626_count);
  llvm_cbe_tmp__574 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__573&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__574);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = add i32 %%2, 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1627_count);
  llvm_cbe_tmp__575 = (unsigned int )((unsigned int )(llvm_cbe_tmp__570&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__575&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = zext i32 %%7 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1628_count);
  llvm_cbe_tmp__576 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__575&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__576);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds i8* %%a, i64 %%8, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1629_count);
  llvm_cbe_tmp__577 = ( char *)(&llvm_cbe_a[(((signed long long )llvm_cbe_tmp__576))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__576));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = load i8* %%9, align 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1630_count);
  llvm_cbe_tmp__578 = (unsigned char )*llvm_cbe_tmp__577;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__578);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = zext i8 %%10 to i32, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1631_count);
  llvm_cbe_tmp__579 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__578&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__579);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = shl nuw nsw i32 %%11, 8, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1632_count);
  llvm_cbe_tmp__580 = (unsigned int )llvm_cbe_tmp__579 << 8u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__580);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = and i32 %%12, 768, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1633_count);
  llvm_cbe_tmp__581 = (unsigned int )llvm_cbe_tmp__580 & 768u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__581);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = or i32 %%13, %%6, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1634_count);
  llvm_cbe_tmp__582 = (unsigned int )llvm_cbe_tmp__581 | llvm_cbe_tmp__574;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__582);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = shl i32 %%storemerge1, 2, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1635_count);
  llvm_cbe_tmp__583 = (unsigned int )llvm_cbe_storemerge1 << 2u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__583);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = zext i32 %%15 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1636_count);
  llvm_cbe_tmp__584 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__583&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__584);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%16, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1637_count);
  llvm_cbe_tmp__585 = (signed int *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__584))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__584));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%14, i32* %%17, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1638_count);
  *llvm_cbe_tmp__585 = llvm_cbe_tmp__582;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__582);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = load i8* %%9, align 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1639_count);
  llvm_cbe_tmp__586 = (unsigned char )*llvm_cbe_tmp__577;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__586);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = zext i8 %%18 to i32, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1640_count);
  llvm_cbe_tmp__587 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__586&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__587);
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = lshr i32 %%19, 2, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1641_count);
  llvm_cbe_tmp__588 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__587&4294967295ull)) >> ((unsigned int )(2u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__588&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = add i32 %%2, 2, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1642_count);
  llvm_cbe_tmp__589 = (unsigned int )((unsigned int )(llvm_cbe_tmp__570&4294967295ull)) + ((unsigned int )(2u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__589&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = zext i32 %%21 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1643_count);
  llvm_cbe_tmp__590 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__589&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__590);
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = getelementptr inbounds i8* %%a, i64 %%22, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1644_count);
  llvm_cbe_tmp__591 = ( char *)(&llvm_cbe_a[(((signed long long )llvm_cbe_tmp__590))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__590));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = load i8* %%23, align 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1645_count);
  llvm_cbe_tmp__592 = (unsigned char )*llvm_cbe_tmp__591;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__592);
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = zext i8 %%24 to i32, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1646_count);
  llvm_cbe_tmp__593 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__592&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__593);
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = shl nuw nsw i32 %%25, 6, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1647_count);
  llvm_cbe_tmp__594 = (unsigned int )llvm_cbe_tmp__593 << 6u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__594);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = and i32 %%26, 960, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1648_count);
  llvm_cbe_tmp__595 = (unsigned int )llvm_cbe_tmp__594 & 960u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__595);
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = or i32 %%27, %%20, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1649_count);
  llvm_cbe_tmp__596 = (unsigned int )llvm_cbe_tmp__595 | llvm_cbe_tmp__588;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__596);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = or i32 %%15, 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1650_count);
  llvm_cbe_tmp__597 = (unsigned int )llvm_cbe_tmp__583 | 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__597);
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = zext i32 %%29 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1651_count);
  llvm_cbe_tmp__598 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__597&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__598);
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%30, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1652_count);
  llvm_cbe_tmp__599 = (signed int *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__598))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__598));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%28, i32* %%31, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1653_count);
  *llvm_cbe_tmp__599 = llvm_cbe_tmp__596;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__596);
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = load i8* %%23, align 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1654_count);
  llvm_cbe_tmp__600 = (unsigned char )*llvm_cbe_tmp__591;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__600);
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = zext i8 %%32 to i32, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1655_count);
  llvm_cbe_tmp__601 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__600&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__601);
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = lshr i32 %%33, 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1656_count);
  llvm_cbe_tmp__602 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__601&4294967295ull)) >> ((unsigned int )(4u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__602&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = add i32 %%2, 3, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1657_count);
  llvm_cbe_tmp__603 = (unsigned int )((unsigned int )(llvm_cbe_tmp__570&4294967295ull)) + ((unsigned int )(3u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__603&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = zext i32 %%35 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1658_count);
  llvm_cbe_tmp__604 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__603&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__604);
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = getelementptr inbounds i8* %%a, i64 %%36, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1659_count);
  llvm_cbe_tmp__605 = ( char *)(&llvm_cbe_a[(((signed long long )llvm_cbe_tmp__604))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__604));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = load i8* %%37, align 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1660_count);
  llvm_cbe_tmp__606 = (unsigned char )*llvm_cbe_tmp__605;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__606);
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = zext i8 %%38 to i32, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1661_count);
  llvm_cbe_tmp__607 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__606&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__607);
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = shl nuw nsw i32 %%39, 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1662_count);
  llvm_cbe_tmp__608 = (unsigned int )llvm_cbe_tmp__607 << 4u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__608);
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = and i32 %%40, 1008, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1663_count);
  llvm_cbe_tmp__609 = (unsigned int )llvm_cbe_tmp__608 & 1008u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__609);
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = or i32 %%41, %%34, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1664_count);
  llvm_cbe_tmp__610 = (unsigned int )llvm_cbe_tmp__609 | llvm_cbe_tmp__602;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__610);
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = or i32 %%15, 2, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1665_count);
  llvm_cbe_tmp__611 = (unsigned int )llvm_cbe_tmp__583 | 2u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__611);
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = zext i32 %%43 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1666_count);
  llvm_cbe_tmp__612 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__611&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__612);
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%44, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1667_count);
  llvm_cbe_tmp__613 = (signed int *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__612))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__612));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%42, i32* %%45, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1668_count);
  *llvm_cbe_tmp__613 = llvm_cbe_tmp__610;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__610);
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = load i8* %%37, align 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1669_count);
  llvm_cbe_tmp__614 = (unsigned char )*llvm_cbe_tmp__605;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__614);
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = zext i8 %%46 to i32, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1670_count);
  llvm_cbe_tmp__615 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__614&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__615);
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = lshr i32 %%47, 6, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1671_count);
  llvm_cbe_tmp__616 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__615&4294967295ull)) >> ((unsigned int )(6u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__616&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = add i32 %%2, 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1672_count);
  llvm_cbe_tmp__617 = (unsigned int )((unsigned int )(llvm_cbe_tmp__570&4294967295ull)) + ((unsigned int )(4u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__617&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = zext i32 %%49 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1673_count);
  llvm_cbe_tmp__618 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__617&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__618);
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = getelementptr inbounds i8* %%a, i64 %%50, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1674_count);
  llvm_cbe_tmp__619 = ( char *)(&llvm_cbe_a[(((signed long long )llvm_cbe_tmp__618))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__618));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = load i8* %%51, align 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1675_count);
  llvm_cbe_tmp__620 = (unsigned char )*llvm_cbe_tmp__619;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__620);
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = zext i8 %%52 to i32, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1676_count);
  llvm_cbe_tmp__621 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__620&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__621);
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = shl nuw nsw i32 %%53, 2, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1677_count);
  llvm_cbe_tmp__622 = (unsigned int )llvm_cbe_tmp__621 << 2u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__622);
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = or i32 %%54, %%48, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1678_count);
  llvm_cbe_tmp__623 = (unsigned int )llvm_cbe_tmp__622 | llvm_cbe_tmp__616;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__623);
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = or i32 %%15, 3, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1679_count);
  llvm_cbe_tmp__624 = (unsigned int )llvm_cbe_tmp__583 | 3u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__624);
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = zext i32 %%56 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1680_count);
  llvm_cbe_tmp__625 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__624&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__625);
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%57, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1681_count);
  llvm_cbe_tmp__626 = (signed int *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__625))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__625));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%55, i32* %%58, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1682_count);
  *llvm_cbe_tmp__626 = llvm_cbe_tmp__623;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__623);
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = add i32 %%storemerge1, 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt1_unpack  --> \n", ++aesl_llvm_cbe_1683_count);
  llvm_cbe_tmp__627 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__627&4294967295ull)));
  if (((llvm_cbe_tmp__627&4294967295U) == (64u&4294967295U))) {
    goto llvm_cbe_tmp__629;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__627;   /* for PHI node */
    goto llvm_cbe_tmp__628;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__629:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_polyt1_unpack}\n");
  return;
}


void pqcrystals_dilithium2_ref_polyt0_pack( char *llvm_cbe_r, l_struct_OC_poly *llvm_cbe_a) {
  static  unsigned long long aesl_llvm_cbe_1701_count = 0;
  static  unsigned long long aesl_llvm_cbe_1702_count = 0;
  static  unsigned long long aesl_llvm_cbe_1703_count = 0;
  static  unsigned long long aesl_llvm_cbe_1704_count = 0;
  static  unsigned long long aesl_llvm_cbe_1705_count = 0;
  static  unsigned long long aesl_llvm_cbe_1706_count = 0;
  static  unsigned long long aesl_llvm_cbe_1707_count = 0;
  static  unsigned long long aesl_llvm_cbe_1708_count = 0;
  static  unsigned long long aesl_llvm_cbe_1709_count = 0;
  static  unsigned long long aesl_llvm_cbe_1710_count = 0;
  static  unsigned long long aesl_llvm_cbe_1711_count = 0;
  static  unsigned long long aesl_llvm_cbe_1712_count = 0;
  static  unsigned long long aesl_llvm_cbe_1713_count = 0;
  static  unsigned long long aesl_llvm_cbe_1714_count = 0;
  static  unsigned long long aesl_llvm_cbe_1715_count = 0;
  static  unsigned long long aesl_llvm_cbe_1716_count = 0;
  static  unsigned long long aesl_llvm_cbe_1717_count = 0;
  static  unsigned long long aesl_llvm_cbe_1718_count = 0;
  static  unsigned long long aesl_llvm_cbe_1719_count = 0;
  static  unsigned long long aesl_llvm_cbe_1720_count = 0;
  static  unsigned long long aesl_llvm_cbe_1721_count = 0;
  static  unsigned long long aesl_llvm_cbe_1722_count = 0;
  static  unsigned long long aesl_llvm_cbe_1723_count = 0;
  static  unsigned long long aesl_llvm_cbe_1724_count = 0;
  static  unsigned long long aesl_llvm_cbe_1725_count = 0;
  static  unsigned long long aesl_llvm_cbe_1726_count = 0;
  static  unsigned long long aesl_llvm_cbe_1727_count = 0;
  static  unsigned long long aesl_llvm_cbe_1728_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_1740_count = 0;
  static  unsigned long long aesl_llvm_cbe_1741_count = 0;
  static  unsigned long long aesl_llvm_cbe_1742_count = 0;
  static  unsigned long long aesl_llvm_cbe_1743_count = 0;
  static  unsigned long long aesl_llvm_cbe_1744_count = 0;
  static  unsigned long long aesl_llvm_cbe_1745_count = 0;
  static  unsigned long long aesl_llvm_cbe_1746_count = 0;
  static  unsigned long long aesl_llvm_cbe_1747_count = 0;
  static  unsigned long long aesl_llvm_cbe_1748_count = 0;
  static  unsigned long long aesl_llvm_cbe_1749_count = 0;
  static  unsigned long long aesl_llvm_cbe_1750_count = 0;
  static  unsigned long long aesl_llvm_cbe_1751_count = 0;
  static  unsigned long long aesl_llvm_cbe_1752_count = 0;
  static  unsigned long long aesl_llvm_cbe_1753_count = 0;
  static  unsigned long long aesl_llvm_cbe_1754_count = 0;
  static  unsigned long long aesl_llvm_cbe_1755_count = 0;
  static  unsigned long long aesl_llvm_cbe_1756_count = 0;
  static  unsigned long long aesl_llvm_cbe_1757_count = 0;
  static  unsigned long long aesl_llvm_cbe_1758_count = 0;
  static  unsigned long long aesl_llvm_cbe_1759_count = 0;
  static  unsigned long long aesl_llvm_cbe_1760_count = 0;
  static  unsigned long long aesl_llvm_cbe_1761_count = 0;
  static  unsigned long long aesl_llvm_cbe_1762_count = 0;
  static  unsigned long long aesl_llvm_cbe_1763_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  unsigned int llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1764_count = 0;
  unsigned int llvm_cbe_tmp__630;
  static  unsigned long long aesl_llvm_cbe_1765_count = 0;
  unsigned long long llvm_cbe_tmp__631;
  static  unsigned long long aesl_llvm_cbe_1766_count = 0;
  signed int *llvm_cbe_tmp__632;
  static  unsigned long long aesl_llvm_cbe_1767_count = 0;
  unsigned int llvm_cbe_tmp__633;
  static  unsigned long long aesl_llvm_cbe_1768_count = 0;
  unsigned int llvm_cbe_tmp__634;
  static  unsigned long long aesl_llvm_cbe_1769_count = 0;
  unsigned int llvm_cbe_tmp__635;
  static  unsigned long long aesl_llvm_cbe_1770_count = 0;
  unsigned long long llvm_cbe_tmp__636;
  static  unsigned long long aesl_llvm_cbe_1771_count = 0;
  signed int *llvm_cbe_tmp__637;
  static  unsigned long long aesl_llvm_cbe_1772_count = 0;
  unsigned int llvm_cbe_tmp__638;
  static  unsigned long long aesl_llvm_cbe_1773_count = 0;
  unsigned int llvm_cbe_tmp__639;
  static  unsigned long long aesl_llvm_cbe_1774_count = 0;
  unsigned int llvm_cbe_tmp__640;
  static  unsigned long long aesl_llvm_cbe_1775_count = 0;
  unsigned long long llvm_cbe_tmp__641;
  static  unsigned long long aesl_llvm_cbe_1776_count = 0;
  signed int *llvm_cbe_tmp__642;
  static  unsigned long long aesl_llvm_cbe_1777_count = 0;
  unsigned int llvm_cbe_tmp__643;
  static  unsigned long long aesl_llvm_cbe_1778_count = 0;
  unsigned int llvm_cbe_tmp__644;
  static  unsigned long long aesl_llvm_cbe_1779_count = 0;
  unsigned int llvm_cbe_tmp__645;
  static  unsigned long long aesl_llvm_cbe_1780_count = 0;
  unsigned long long llvm_cbe_tmp__646;
  static  unsigned long long aesl_llvm_cbe_1781_count = 0;
  signed int *llvm_cbe_tmp__647;
  static  unsigned long long aesl_llvm_cbe_1782_count = 0;
  unsigned int llvm_cbe_tmp__648;
  static  unsigned long long aesl_llvm_cbe_1783_count = 0;
  unsigned int llvm_cbe_tmp__649;
  static  unsigned long long aesl_llvm_cbe_1784_count = 0;
  unsigned int llvm_cbe_tmp__650;
  static  unsigned long long aesl_llvm_cbe_1785_count = 0;
  unsigned long long llvm_cbe_tmp__651;
  static  unsigned long long aesl_llvm_cbe_1786_count = 0;
  signed int *llvm_cbe_tmp__652;
  static  unsigned long long aesl_llvm_cbe_1787_count = 0;
  unsigned int llvm_cbe_tmp__653;
  static  unsigned long long aesl_llvm_cbe_1788_count = 0;
  unsigned int llvm_cbe_tmp__654;
  static  unsigned long long aesl_llvm_cbe_1789_count = 0;
  unsigned int llvm_cbe_tmp__655;
  static  unsigned long long aesl_llvm_cbe_1790_count = 0;
  unsigned long long llvm_cbe_tmp__656;
  static  unsigned long long aesl_llvm_cbe_1791_count = 0;
  signed int *llvm_cbe_tmp__657;
  static  unsigned long long aesl_llvm_cbe_1792_count = 0;
  unsigned int llvm_cbe_tmp__658;
  static  unsigned long long aesl_llvm_cbe_1793_count = 0;
  unsigned int llvm_cbe_tmp__659;
  static  unsigned long long aesl_llvm_cbe_1794_count = 0;
  unsigned int llvm_cbe_tmp__660;
  static  unsigned long long aesl_llvm_cbe_1795_count = 0;
  unsigned long long llvm_cbe_tmp__661;
  static  unsigned long long aesl_llvm_cbe_1796_count = 0;
  signed int *llvm_cbe_tmp__662;
  static  unsigned long long aesl_llvm_cbe_1797_count = 0;
  unsigned int llvm_cbe_tmp__663;
  static  unsigned long long aesl_llvm_cbe_1798_count = 0;
  unsigned int llvm_cbe_tmp__664;
  static  unsigned long long aesl_llvm_cbe_1799_count = 0;
  unsigned int llvm_cbe_tmp__665;
  static  unsigned long long aesl_llvm_cbe_1800_count = 0;
  unsigned long long llvm_cbe_tmp__666;
  static  unsigned long long aesl_llvm_cbe_1801_count = 0;
  signed int *llvm_cbe_tmp__667;
  static  unsigned long long aesl_llvm_cbe_1802_count = 0;
  unsigned int llvm_cbe_tmp__668;
  static  unsigned long long aesl_llvm_cbe_1803_count = 0;
  unsigned int llvm_cbe_tmp__669;
  static  unsigned long long aesl_llvm_cbe_1804_count = 0;
  unsigned char llvm_cbe_tmp__670;
  static  unsigned long long aesl_llvm_cbe_1805_count = 0;
  unsigned int llvm_cbe_tmp__671;
  static  unsigned long long aesl_llvm_cbe_1806_count = 0;
  unsigned long long llvm_cbe_tmp__672;
  static  unsigned long long aesl_llvm_cbe_1807_count = 0;
   char *llvm_cbe_tmp__673;
  static  unsigned long long aesl_llvm_cbe_1808_count = 0;
  static  unsigned long long aesl_llvm_cbe_1809_count = 0;
  unsigned int llvm_cbe_tmp__674;
  static  unsigned long long aesl_llvm_cbe_1810_count = 0;
  unsigned char llvm_cbe_tmp__675;
  static  unsigned long long aesl_llvm_cbe_1811_count = 0;
  unsigned int llvm_cbe_tmp__676;
  static  unsigned long long aesl_llvm_cbe_1812_count = 0;
  unsigned long long llvm_cbe_tmp__677;
  static  unsigned long long aesl_llvm_cbe_1813_count = 0;
   char *llvm_cbe_tmp__678;
  static  unsigned long long aesl_llvm_cbe_1814_count = 0;
  unsigned char llvm_cbe_tmp__679;
  static  unsigned long long aesl_llvm_cbe_1815_count = 0;
  unsigned char llvm_cbe_tmp__680;
  static  unsigned long long aesl_llvm_cbe_1816_count = 0;
  unsigned char llvm_cbe_tmp__681;
  static  unsigned long long aesl_llvm_cbe_1817_count = 0;
  static  unsigned long long aesl_llvm_cbe_1818_count = 0;
  unsigned int llvm_cbe_tmp__682;
  static  unsigned long long aesl_llvm_cbe_1819_count = 0;
  unsigned char llvm_cbe_tmp__683;
  static  unsigned long long aesl_llvm_cbe_1820_count = 0;
  unsigned int llvm_cbe_tmp__684;
  static  unsigned long long aesl_llvm_cbe_1821_count = 0;
  unsigned long long llvm_cbe_tmp__685;
  static  unsigned long long aesl_llvm_cbe_1822_count = 0;
   char *llvm_cbe_tmp__686;
  static  unsigned long long aesl_llvm_cbe_1823_count = 0;
  static  unsigned long long aesl_llvm_cbe_1824_count = 0;
  unsigned int llvm_cbe_tmp__687;
  static  unsigned long long aesl_llvm_cbe_1825_count = 0;
  unsigned char llvm_cbe_tmp__688;
  static  unsigned long long aesl_llvm_cbe_1826_count = 0;
  unsigned int llvm_cbe_tmp__689;
  static  unsigned long long aesl_llvm_cbe_1827_count = 0;
  unsigned long long llvm_cbe_tmp__690;
  static  unsigned long long aesl_llvm_cbe_1828_count = 0;
   char *llvm_cbe_tmp__691;
  static  unsigned long long aesl_llvm_cbe_1829_count = 0;
  unsigned char llvm_cbe_tmp__692;
  static  unsigned long long aesl_llvm_cbe_1830_count = 0;
  unsigned char llvm_cbe_tmp__693;
  static  unsigned long long aesl_llvm_cbe_1831_count = 0;
  unsigned char llvm_cbe_tmp__694;
  static  unsigned long long aesl_llvm_cbe_1832_count = 0;
  static  unsigned long long aesl_llvm_cbe_1833_count = 0;
  unsigned int llvm_cbe_tmp__695;
  static  unsigned long long aesl_llvm_cbe_1834_count = 0;
  unsigned char llvm_cbe_tmp__696;
  static  unsigned long long aesl_llvm_cbe_1835_count = 0;
  unsigned int llvm_cbe_tmp__697;
  static  unsigned long long aesl_llvm_cbe_1836_count = 0;
  unsigned long long llvm_cbe_tmp__698;
  static  unsigned long long aesl_llvm_cbe_1837_count = 0;
   char *llvm_cbe_tmp__699;
  static  unsigned long long aesl_llvm_cbe_1838_count = 0;
  unsigned char llvm_cbe_tmp__700;
  static  unsigned long long aesl_llvm_cbe_1839_count = 0;
  unsigned char llvm_cbe_tmp__701;
  static  unsigned long long aesl_llvm_cbe_1840_count = 0;
  unsigned char llvm_cbe_tmp__702;
  static  unsigned long long aesl_llvm_cbe_1841_count = 0;
  static  unsigned long long aesl_llvm_cbe_1842_count = 0;
  unsigned int llvm_cbe_tmp__703;
  static  unsigned long long aesl_llvm_cbe_1843_count = 0;
  unsigned char llvm_cbe_tmp__704;
  static  unsigned long long aesl_llvm_cbe_1844_count = 0;
  unsigned int llvm_cbe_tmp__705;
  static  unsigned long long aesl_llvm_cbe_1845_count = 0;
  unsigned long long llvm_cbe_tmp__706;
  static  unsigned long long aesl_llvm_cbe_1846_count = 0;
   char *llvm_cbe_tmp__707;
  static  unsigned long long aesl_llvm_cbe_1847_count = 0;
  static  unsigned long long aesl_llvm_cbe_1848_count = 0;
  unsigned int llvm_cbe_tmp__708;
  static  unsigned long long aesl_llvm_cbe_1849_count = 0;
  unsigned char llvm_cbe_tmp__709;
  static  unsigned long long aesl_llvm_cbe_1850_count = 0;
  unsigned int llvm_cbe_tmp__710;
  static  unsigned long long aesl_llvm_cbe_1851_count = 0;
  unsigned long long llvm_cbe_tmp__711;
  static  unsigned long long aesl_llvm_cbe_1852_count = 0;
   char *llvm_cbe_tmp__712;
  static  unsigned long long aesl_llvm_cbe_1853_count = 0;
  unsigned char llvm_cbe_tmp__713;
  static  unsigned long long aesl_llvm_cbe_1854_count = 0;
  unsigned char llvm_cbe_tmp__714;
  static  unsigned long long aesl_llvm_cbe_1855_count = 0;
  unsigned char llvm_cbe_tmp__715;
  static  unsigned long long aesl_llvm_cbe_1856_count = 0;
  static  unsigned long long aesl_llvm_cbe_1857_count = 0;
  unsigned int llvm_cbe_tmp__716;
  static  unsigned long long aesl_llvm_cbe_1858_count = 0;
  unsigned char llvm_cbe_tmp__717;
  static  unsigned long long aesl_llvm_cbe_1859_count = 0;
  unsigned int llvm_cbe_tmp__718;
  static  unsigned long long aesl_llvm_cbe_1860_count = 0;
  unsigned long long llvm_cbe_tmp__719;
  static  unsigned long long aesl_llvm_cbe_1861_count = 0;
   char *llvm_cbe_tmp__720;
  static  unsigned long long aesl_llvm_cbe_1862_count = 0;
  static  unsigned long long aesl_llvm_cbe_1863_count = 0;
  unsigned int llvm_cbe_tmp__721;
  static  unsigned long long aesl_llvm_cbe_1864_count = 0;
  unsigned char llvm_cbe_tmp__722;
  static  unsigned long long aesl_llvm_cbe_1865_count = 0;
  unsigned int llvm_cbe_tmp__723;
  static  unsigned long long aesl_llvm_cbe_1866_count = 0;
  unsigned long long llvm_cbe_tmp__724;
  static  unsigned long long aesl_llvm_cbe_1867_count = 0;
   char *llvm_cbe_tmp__725;
  static  unsigned long long aesl_llvm_cbe_1868_count = 0;
  unsigned char llvm_cbe_tmp__726;
  static  unsigned long long aesl_llvm_cbe_1869_count = 0;
  unsigned char llvm_cbe_tmp__727;
  static  unsigned long long aesl_llvm_cbe_1870_count = 0;
  unsigned char llvm_cbe_tmp__728;
  static  unsigned long long aesl_llvm_cbe_1871_count = 0;
  static  unsigned long long aesl_llvm_cbe_1872_count = 0;
  unsigned int llvm_cbe_tmp__729;
  static  unsigned long long aesl_llvm_cbe_1873_count = 0;
  unsigned char llvm_cbe_tmp__730;
  static  unsigned long long aesl_llvm_cbe_1874_count = 0;
  unsigned int llvm_cbe_tmp__731;
  static  unsigned long long aesl_llvm_cbe_1875_count = 0;
  unsigned long long llvm_cbe_tmp__732;
  static  unsigned long long aesl_llvm_cbe_1876_count = 0;
   char *llvm_cbe_tmp__733;
  static  unsigned long long aesl_llvm_cbe_1877_count = 0;
  unsigned char llvm_cbe_tmp__734;
  static  unsigned long long aesl_llvm_cbe_1878_count = 0;
  unsigned char llvm_cbe_tmp__735;
  static  unsigned long long aesl_llvm_cbe_1879_count = 0;
  unsigned char llvm_cbe_tmp__736;
  static  unsigned long long aesl_llvm_cbe_1880_count = 0;
  static  unsigned long long aesl_llvm_cbe_1881_count = 0;
  unsigned int llvm_cbe_tmp__737;
  static  unsigned long long aesl_llvm_cbe_1882_count = 0;
  unsigned char llvm_cbe_tmp__738;
  static  unsigned long long aesl_llvm_cbe_1883_count = 0;
  unsigned int llvm_cbe_tmp__739;
  static  unsigned long long aesl_llvm_cbe_1884_count = 0;
  unsigned long long llvm_cbe_tmp__740;
  static  unsigned long long aesl_llvm_cbe_1885_count = 0;
   char *llvm_cbe_tmp__741;
  static  unsigned long long aesl_llvm_cbe_1886_count = 0;
  static  unsigned long long aesl_llvm_cbe_1887_count = 0;
  unsigned int llvm_cbe_tmp__742;
  static  unsigned long long aesl_llvm_cbe_1888_count = 0;
  unsigned char llvm_cbe_tmp__743;
  static  unsigned long long aesl_llvm_cbe_1889_count = 0;
  unsigned int llvm_cbe_tmp__744;
  static  unsigned long long aesl_llvm_cbe_1890_count = 0;
  unsigned long long llvm_cbe_tmp__745;
  static  unsigned long long aesl_llvm_cbe_1891_count = 0;
   char *llvm_cbe_tmp__746;
  static  unsigned long long aesl_llvm_cbe_1892_count = 0;
  unsigned char llvm_cbe_tmp__747;
  static  unsigned long long aesl_llvm_cbe_1893_count = 0;
  unsigned char llvm_cbe_tmp__748;
  static  unsigned long long aesl_llvm_cbe_1894_count = 0;
  unsigned char llvm_cbe_tmp__749;
  static  unsigned long long aesl_llvm_cbe_1895_count = 0;
  static  unsigned long long aesl_llvm_cbe_1896_count = 0;
  unsigned int llvm_cbe_tmp__750;
  static  unsigned long long aesl_llvm_cbe_1897_count = 0;
  unsigned char llvm_cbe_tmp__751;
  static  unsigned long long aesl_llvm_cbe_1898_count = 0;
  unsigned int llvm_cbe_tmp__752;
  static  unsigned long long aesl_llvm_cbe_1899_count = 0;
  unsigned long long llvm_cbe_tmp__753;
  static  unsigned long long aesl_llvm_cbe_1900_count = 0;
   char *llvm_cbe_tmp__754;
  static  unsigned long long aesl_llvm_cbe_1901_count = 0;
  static  unsigned long long aesl_llvm_cbe_1902_count = 0;
  unsigned int llvm_cbe_tmp__755;
  static  unsigned long long aesl_llvm_cbe_1903_count = 0;
  static  unsigned long long aesl_llvm_cbe_1904_count = 0;
  static  unsigned long long aesl_llvm_cbe_1905_count = 0;
  static  unsigned long long aesl_llvm_cbe_1906_count = 0;
  static  unsigned long long aesl_llvm_cbe_1907_count = 0;
  static  unsigned long long aesl_llvm_cbe_1908_count = 0;
  static  unsigned long long aesl_llvm_cbe_1909_count = 0;
  static  unsigned long long aesl_llvm_cbe_1910_count = 0;
  static  unsigned long long aesl_llvm_cbe_1911_count = 0;
  static  unsigned long long aesl_llvm_cbe_1912_count = 0;
  static  unsigned long long aesl_llvm_cbe_1913_count = 0;
  static  unsigned long long aesl_llvm_cbe_1914_count = 0;
  static  unsigned long long aesl_llvm_cbe_1915_count = 0;
  static  unsigned long long aesl_llvm_cbe_1916_count = 0;
  static  unsigned long long aesl_llvm_cbe_1917_count = 0;
  static  unsigned long long aesl_llvm_cbe_1918_count = 0;
  static  unsigned long long aesl_llvm_cbe_1919_count = 0;
  static  unsigned long long aesl_llvm_cbe_1920_count = 0;
  static  unsigned long long aesl_llvm_cbe_1921_count = 0;
  static  unsigned long long aesl_llvm_cbe_1922_count = 0;
  static  unsigned long long aesl_llvm_cbe_1923_count = 0;
  static  unsigned long long aesl_llvm_cbe_1924_count = 0;
  static  unsigned long long aesl_llvm_cbe_1925_count = 0;
  static  unsigned long long aesl_llvm_cbe_1926_count = 0;
  static  unsigned long long aesl_llvm_cbe_1927_count = 0;
  static  unsigned long long aesl_llvm_cbe_1928_count = 0;
  static  unsigned long long aesl_llvm_cbe_1929_count = 0;
  static  unsigned long long aesl_llvm_cbe_1930_count = 0;
  static  unsigned long long aesl_llvm_cbe_1931_count = 0;
  static  unsigned long long aesl_llvm_cbe_1932_count = 0;
  static  unsigned long long aesl_llvm_cbe_1933_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_1934_count = 0;
  static  unsigned long long aesl_llvm_cbe_1935_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_polyt0_pack\n");
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__756;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__756:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i32 [ 0, %%0 ], [ %%127, %%1  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__755);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = shl i32 %%storemerge1, 3, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1764_count);
  llvm_cbe_tmp__630 = (unsigned int )llvm_cbe_storemerge1 << 3u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__630);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = zext i32 %%2 to i64, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1765_count);
  llvm_cbe_tmp__631 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__630&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__631);
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%3, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1766_count);
  llvm_cbe_tmp__632 = (signed int *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__631))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__631));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = load i32* %%4, align 4, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1767_count);
  llvm_cbe_tmp__633 = (unsigned int )*llvm_cbe_tmp__632;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__633);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = sub nsw i32 4096, %%5, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1768_count);
  llvm_cbe_tmp__634 = (unsigned int )((unsigned int )(4096u&4294967295ull)) - ((unsigned int )(llvm_cbe_tmp__633&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__634&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = or i32 %%2, 1, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1769_count);
  llvm_cbe_tmp__635 = (unsigned int )llvm_cbe_tmp__630 | 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__635);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = zext i32 %%7 to i64, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1770_count);
  llvm_cbe_tmp__636 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__635&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__636);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%8, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1771_count);
  llvm_cbe_tmp__637 = (signed int *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__636))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__636));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = load i32* %%9, align 4, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1772_count);
  llvm_cbe_tmp__638 = (unsigned int )*llvm_cbe_tmp__637;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__638);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = sub nsw i32 4096, %%10, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1773_count);
  llvm_cbe_tmp__639 = (unsigned int )((unsigned int )(4096u&4294967295ull)) - ((unsigned int )(llvm_cbe_tmp__638&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__639&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = or i32 %%2, 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1774_count);
  llvm_cbe_tmp__640 = (unsigned int )llvm_cbe_tmp__630 | 2u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__640);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = zext i32 %%12 to i64, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1775_count);
  llvm_cbe_tmp__641 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__640&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__641);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%13, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1776_count);
  llvm_cbe_tmp__642 = (signed int *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__641))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__641));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = load i32* %%14, align 4, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1777_count);
  llvm_cbe_tmp__643 = (unsigned int )*llvm_cbe_tmp__642;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__643);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = sub nsw i32 4096, %%15, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1778_count);
  llvm_cbe_tmp__644 = (unsigned int )((unsigned int )(4096u&4294967295ull)) - ((unsigned int )(llvm_cbe_tmp__643&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__644&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = or i32 %%2, 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1779_count);
  llvm_cbe_tmp__645 = (unsigned int )llvm_cbe_tmp__630 | 3u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__645);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = zext i32 %%17 to i64, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1780_count);
  llvm_cbe_tmp__646 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__645&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__646);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%18, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1781_count);
  llvm_cbe_tmp__647 = (signed int *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__646))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__646));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = load i32* %%19, align 4, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1782_count);
  llvm_cbe_tmp__648 = (unsigned int )*llvm_cbe_tmp__647;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__648);
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = sub nsw i32 4096, %%20, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1783_count);
  llvm_cbe_tmp__649 = (unsigned int )((unsigned int )(4096u&4294967295ull)) - ((unsigned int )(llvm_cbe_tmp__648&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__649&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = or i32 %%2, 4, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1784_count);
  llvm_cbe_tmp__650 = (unsigned int )llvm_cbe_tmp__630 | 4u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__650);
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = zext i32 %%22 to i64, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1785_count);
  llvm_cbe_tmp__651 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__650&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__651);
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%23, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1786_count);
  llvm_cbe_tmp__652 = (signed int *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__651))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__651));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = load i32* %%24, align 4, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1787_count);
  llvm_cbe_tmp__653 = (unsigned int )*llvm_cbe_tmp__652;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__653);
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = sub nsw i32 4096, %%25, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1788_count);
  llvm_cbe_tmp__654 = (unsigned int )((unsigned int )(4096u&4294967295ull)) - ((unsigned int )(llvm_cbe_tmp__653&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__654&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = or i32 %%2, 5, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1789_count);
  llvm_cbe_tmp__655 = (unsigned int )llvm_cbe_tmp__630 | 5u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__655);
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = zext i32 %%27 to i64, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1790_count);
  llvm_cbe_tmp__656 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__655&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__656);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%28, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1791_count);
  llvm_cbe_tmp__657 = (signed int *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__656))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__656));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = load i32* %%29, align 4, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1792_count);
  llvm_cbe_tmp__658 = (unsigned int )*llvm_cbe_tmp__657;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__658);
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = sub nsw i32 4096, %%30, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1793_count);
  llvm_cbe_tmp__659 = (unsigned int )((unsigned int )(4096u&4294967295ull)) - ((unsigned int )(llvm_cbe_tmp__658&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__659&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = or i32 %%2, 6, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1794_count);
  llvm_cbe_tmp__660 = (unsigned int )llvm_cbe_tmp__630 | 6u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__660);
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = zext i32 %%32 to i64, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1795_count);
  llvm_cbe_tmp__661 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__660&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__661);
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%33, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1796_count);
  llvm_cbe_tmp__662 = (signed int *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__661))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__661));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = load i32* %%34, align 4, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1797_count);
  llvm_cbe_tmp__663 = (unsigned int )*llvm_cbe_tmp__662;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__663);
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = sub nsw i32 4096, %%35, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1798_count);
  llvm_cbe_tmp__664 = (unsigned int )((unsigned int )(4096u&4294967295ull)) - ((unsigned int )(llvm_cbe_tmp__663&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__664&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = or i32 %%2, 7, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1799_count);
  llvm_cbe_tmp__665 = (unsigned int )llvm_cbe_tmp__630 | 7u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__665);
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = zext i32 %%37 to i64, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1800_count);
  llvm_cbe_tmp__666 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__665&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__666);
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%38, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1801_count);
  llvm_cbe_tmp__667 = (signed int *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__666))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__666));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = load i32* %%39, align 4, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1802_count);
  llvm_cbe_tmp__668 = (unsigned int )*llvm_cbe_tmp__667;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__668);
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = sub nsw i32 4096, %%40, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1803_count);
  llvm_cbe_tmp__669 = (unsigned int )((unsigned int )(4096u&4294967295ull)) - ((unsigned int )(llvm_cbe_tmp__668&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__669&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = trunc i32 %%6 to i8, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1804_count);
  llvm_cbe_tmp__670 = (unsigned char )((unsigned char )llvm_cbe_tmp__634&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__670);
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = mul i32 %%storemerge1, 13, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1805_count);
  llvm_cbe_tmp__671 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) * ((unsigned int )(13u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__671&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = zext i32 %%43 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1806_count);
  llvm_cbe_tmp__672 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__671&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__672);
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = getelementptr inbounds i8* %%r, i64 %%44, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1807_count);
  llvm_cbe_tmp__673 = ( char *)(&llvm_cbe_r[(((signed long long )llvm_cbe_tmp__672))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__672));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%42, i8* %%45, align 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1808_count);
  *llvm_cbe_tmp__673 = llvm_cbe_tmp__670;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__670);
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = lshr i32 %%6, 8, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1809_count);
  llvm_cbe_tmp__674 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__634&4294967295ull)) >> ((unsigned int )(8u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__674&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = trunc i32 %%46 to i8, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1810_count);
  llvm_cbe_tmp__675 = (unsigned char )((unsigned char )llvm_cbe_tmp__674&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__675);
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = add i32 %%43, 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1811_count);
  llvm_cbe_tmp__676 = (unsigned int )((unsigned int )(llvm_cbe_tmp__671&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__676&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = zext i32 %%48 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1812_count);
  llvm_cbe_tmp__677 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__676&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__677);
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = getelementptr inbounds i8* %%r, i64 %%49, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1813_count);
  llvm_cbe_tmp__678 = ( char *)(&llvm_cbe_r[(((signed long long )llvm_cbe_tmp__677))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__677));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = trunc i32 %%11 to i8, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1814_count);
  llvm_cbe_tmp__679 = (unsigned char )((unsigned char )llvm_cbe_tmp__639&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__679);
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = shl i8 %%51, 5, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1815_count);
  llvm_cbe_tmp__680 = (unsigned char )((unsigned char )(llvm_cbe_tmp__679 << ((unsigned char )5)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__680);
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = or i8 %%52, %%47, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1816_count);
  llvm_cbe_tmp__681 = (unsigned char )((unsigned char )(llvm_cbe_tmp__680 | llvm_cbe_tmp__675));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__681);
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%53, i8* %%50, align 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1817_count);
  *llvm_cbe_tmp__678 = llvm_cbe_tmp__681;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__681);
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = lshr i32 %%11, 3, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1818_count);
  llvm_cbe_tmp__682 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__639&4294967295ull)) >> ((unsigned int )(3u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__682&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = trunc i32 %%54 to i8, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1819_count);
  llvm_cbe_tmp__683 = (unsigned char )((unsigned char )llvm_cbe_tmp__682&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__683);
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = add i32 %%43, 2, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1820_count);
  llvm_cbe_tmp__684 = (unsigned int )((unsigned int )(llvm_cbe_tmp__671&4294967295ull)) + ((unsigned int )(2u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__684&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = zext i32 %%56 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1821_count);
  llvm_cbe_tmp__685 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__684&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__685);
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = getelementptr inbounds i8* %%r, i64 %%57, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1822_count);
  llvm_cbe_tmp__686 = ( char *)(&llvm_cbe_r[(((signed long long )llvm_cbe_tmp__685))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__685));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%55, i8* %%58, align 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1823_count);
  *llvm_cbe_tmp__686 = llvm_cbe_tmp__683;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__683);
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = lshr i32 %%11, 11, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1824_count);
  llvm_cbe_tmp__687 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__639&4294967295ull)) >> ((unsigned int )(11u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__687&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = trunc i32 %%59 to i8, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1825_count);
  llvm_cbe_tmp__688 = (unsigned char )((unsigned char )llvm_cbe_tmp__687&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__688);
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = add i32 %%43, 3, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1826_count);
  llvm_cbe_tmp__689 = (unsigned int )((unsigned int )(llvm_cbe_tmp__671&4294967295ull)) + ((unsigned int )(3u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__689&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = zext i32 %%61 to i64, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1827_count);
  llvm_cbe_tmp__690 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__689&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__690);
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = getelementptr inbounds i8* %%r, i64 %%62, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1828_count);
  llvm_cbe_tmp__691 = ( char *)(&llvm_cbe_r[(((signed long long )llvm_cbe_tmp__690))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__690));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = trunc i32 %%16 to i8, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1829_count);
  llvm_cbe_tmp__692 = (unsigned char )((unsigned char )llvm_cbe_tmp__644&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__692);
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = shl i8 %%64, 2, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1830_count);
  llvm_cbe_tmp__693 = (unsigned char )((unsigned char )(llvm_cbe_tmp__692 << ((unsigned char )2)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__693);
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = or i8 %%65, %%60, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1831_count);
  llvm_cbe_tmp__694 = (unsigned char )((unsigned char )(llvm_cbe_tmp__693 | llvm_cbe_tmp__688));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__694);
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%66, i8* %%63, align 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1832_count);
  *llvm_cbe_tmp__691 = llvm_cbe_tmp__694;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__694);
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = lshr i32 %%16, 6, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1833_count);
  llvm_cbe_tmp__695 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__644&4294967295ull)) >> ((unsigned int )(6u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__695&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = trunc i32 %%67 to i8, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1834_count);
  llvm_cbe_tmp__696 = (unsigned char )((unsigned char )llvm_cbe_tmp__695&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__696);
if (AESL_DEBUG_TRACE)
printf("\n  %%69 = add i32 %%43, 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1835_count);
  llvm_cbe_tmp__697 = (unsigned int )((unsigned int )(llvm_cbe_tmp__671&4294967295ull)) + ((unsigned int )(4u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__697&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%70 = zext i32 %%69 to i64, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1836_count);
  llvm_cbe_tmp__698 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__697&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__698);
if (AESL_DEBUG_TRACE)
printf("\n  %%71 = getelementptr inbounds i8* %%r, i64 %%70, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1837_count);
  llvm_cbe_tmp__699 = ( char *)(&llvm_cbe_r[(((signed long long )llvm_cbe_tmp__698))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__698));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%72 = trunc i32 %%21 to i8, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1838_count);
  llvm_cbe_tmp__700 = (unsigned char )((unsigned char )llvm_cbe_tmp__649&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__700);
if (AESL_DEBUG_TRACE)
printf("\n  %%73 = shl i8 %%72, 7, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1839_count);
  llvm_cbe_tmp__701 = (unsigned char )((unsigned char )(llvm_cbe_tmp__700 << ((unsigned char )7)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__701);
if (AESL_DEBUG_TRACE)
printf("\n  %%74 = or i8 %%73, %%68, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1840_count);
  llvm_cbe_tmp__702 = (unsigned char )((unsigned char )(llvm_cbe_tmp__701 | llvm_cbe_tmp__696));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__702);
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%74, i8* %%71, align 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1841_count);
  *llvm_cbe_tmp__699 = llvm_cbe_tmp__702;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__702);
if (AESL_DEBUG_TRACE)
printf("\n  %%75 = lshr i32 %%21, 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1842_count);
  llvm_cbe_tmp__703 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__649&4294967295ull)) >> ((unsigned int )(1u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__703&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%76 = trunc i32 %%75 to i8, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1843_count);
  llvm_cbe_tmp__704 = (unsigned char )((unsigned char )llvm_cbe_tmp__703&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__704);
if (AESL_DEBUG_TRACE)
printf("\n  %%77 = add i32 %%43, 5, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1844_count);
  llvm_cbe_tmp__705 = (unsigned int )((unsigned int )(llvm_cbe_tmp__671&4294967295ull)) + ((unsigned int )(5u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__705&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%78 = zext i32 %%77 to i64, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1845_count);
  llvm_cbe_tmp__706 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__705&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__706);
if (AESL_DEBUG_TRACE)
printf("\n  %%79 = getelementptr inbounds i8* %%r, i64 %%78, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1846_count);
  llvm_cbe_tmp__707 = ( char *)(&llvm_cbe_r[(((signed long long )llvm_cbe_tmp__706))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__706));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%76, i8* %%79, align 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1847_count);
  *llvm_cbe_tmp__707 = llvm_cbe_tmp__704;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__704);
if (AESL_DEBUG_TRACE)
printf("\n  %%80 = lshr i32 %%21, 9, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1848_count);
  llvm_cbe_tmp__708 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__649&4294967295ull)) >> ((unsigned int )(9u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__708&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%81 = trunc i32 %%80 to i8, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1849_count);
  llvm_cbe_tmp__709 = (unsigned char )((unsigned char )llvm_cbe_tmp__708&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__709);
if (AESL_DEBUG_TRACE)
printf("\n  %%82 = add i32 %%43, 6, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1850_count);
  llvm_cbe_tmp__710 = (unsigned int )((unsigned int )(llvm_cbe_tmp__671&4294967295ull)) + ((unsigned int )(6u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__710&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%83 = zext i32 %%82 to i64, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1851_count);
  llvm_cbe_tmp__711 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__710&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__711);
if (AESL_DEBUG_TRACE)
printf("\n  %%84 = getelementptr inbounds i8* %%r, i64 %%83, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1852_count);
  llvm_cbe_tmp__712 = ( char *)(&llvm_cbe_r[(((signed long long )llvm_cbe_tmp__711))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__711));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%85 = trunc i32 %%26 to i8, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1853_count);
  llvm_cbe_tmp__713 = (unsigned char )((unsigned char )llvm_cbe_tmp__654&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__713);
if (AESL_DEBUG_TRACE)
printf("\n  %%86 = shl i8 %%85, 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1854_count);
  llvm_cbe_tmp__714 = (unsigned char )((unsigned char )(llvm_cbe_tmp__713 << ((unsigned char )4)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__714);
if (AESL_DEBUG_TRACE)
printf("\n  %%87 = or i8 %%86, %%81, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1855_count);
  llvm_cbe_tmp__715 = (unsigned char )((unsigned char )(llvm_cbe_tmp__714 | llvm_cbe_tmp__709));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__715);
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%87, i8* %%84, align 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1856_count);
  *llvm_cbe_tmp__712 = llvm_cbe_tmp__715;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__715);
if (AESL_DEBUG_TRACE)
printf("\n  %%88 = lshr i32 %%26, 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1857_count);
  llvm_cbe_tmp__716 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__654&4294967295ull)) >> ((unsigned int )(4u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__716&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%89 = trunc i32 %%88 to i8, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1858_count);
  llvm_cbe_tmp__717 = (unsigned char )((unsigned char )llvm_cbe_tmp__716&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__717);
if (AESL_DEBUG_TRACE)
printf("\n  %%90 = add i32 %%43, 7, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1859_count);
  llvm_cbe_tmp__718 = (unsigned int )((unsigned int )(llvm_cbe_tmp__671&4294967295ull)) + ((unsigned int )(7u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__718&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%91 = zext i32 %%90 to i64, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1860_count);
  llvm_cbe_tmp__719 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__718&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__719);
if (AESL_DEBUG_TRACE)
printf("\n  %%92 = getelementptr inbounds i8* %%r, i64 %%91, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1861_count);
  llvm_cbe_tmp__720 = ( char *)(&llvm_cbe_r[(((signed long long )llvm_cbe_tmp__719))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__719));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%89, i8* %%92, align 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1862_count);
  *llvm_cbe_tmp__720 = llvm_cbe_tmp__717;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__717);
if (AESL_DEBUG_TRACE)
printf("\n  %%93 = lshr i32 %%26, 12, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1863_count);
  llvm_cbe_tmp__721 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__654&4294967295ull)) >> ((unsigned int )(12u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__721&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%94 = trunc i32 %%93 to i8, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1864_count);
  llvm_cbe_tmp__722 = (unsigned char )((unsigned char )llvm_cbe_tmp__721&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__722);
if (AESL_DEBUG_TRACE)
printf("\n  %%95 = add i32 %%43, 8, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1865_count);
  llvm_cbe_tmp__723 = (unsigned int )((unsigned int )(llvm_cbe_tmp__671&4294967295ull)) + ((unsigned int )(8u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__723&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%96 = zext i32 %%95 to i64, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1866_count);
  llvm_cbe_tmp__724 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__723&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__724);
if (AESL_DEBUG_TRACE)
printf("\n  %%97 = getelementptr inbounds i8* %%r, i64 %%96, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1867_count);
  llvm_cbe_tmp__725 = ( char *)(&llvm_cbe_r[(((signed long long )llvm_cbe_tmp__724))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__724));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%98 = trunc i32 %%31 to i8, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1868_count);
  llvm_cbe_tmp__726 = (unsigned char )((unsigned char )llvm_cbe_tmp__659&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__726);
if (AESL_DEBUG_TRACE)
printf("\n  %%99 = shl i8 %%98, 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1869_count);
  llvm_cbe_tmp__727 = (unsigned char )((unsigned char )(llvm_cbe_tmp__726 << ((unsigned char )1)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__727);
if (AESL_DEBUG_TRACE)
printf("\n  %%100 = or i8 %%99, %%94, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1870_count);
  llvm_cbe_tmp__728 = (unsigned char )((unsigned char )(llvm_cbe_tmp__727 | llvm_cbe_tmp__722));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__728);
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%100, i8* %%97, align 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1871_count);
  *llvm_cbe_tmp__725 = llvm_cbe_tmp__728;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__728);
if (AESL_DEBUG_TRACE)
printf("\n  %%101 = lshr i32 %%31, 7, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1872_count);
  llvm_cbe_tmp__729 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__659&4294967295ull)) >> ((unsigned int )(7u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__729&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%102 = trunc i32 %%101 to i8, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1873_count);
  llvm_cbe_tmp__730 = (unsigned char )((unsigned char )llvm_cbe_tmp__729&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__730);
if (AESL_DEBUG_TRACE)
printf("\n  %%103 = add i32 %%43, 9, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1874_count);
  llvm_cbe_tmp__731 = (unsigned int )((unsigned int )(llvm_cbe_tmp__671&4294967295ull)) + ((unsigned int )(9u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__731&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%104 = zext i32 %%103 to i64, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1875_count);
  llvm_cbe_tmp__732 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__731&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__732);
if (AESL_DEBUG_TRACE)
printf("\n  %%105 = getelementptr inbounds i8* %%r, i64 %%104, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1876_count);
  llvm_cbe_tmp__733 = ( char *)(&llvm_cbe_r[(((signed long long )llvm_cbe_tmp__732))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__732));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%106 = trunc i32 %%36 to i8, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1877_count);
  llvm_cbe_tmp__734 = (unsigned char )((unsigned char )llvm_cbe_tmp__664&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__734);
if (AESL_DEBUG_TRACE)
printf("\n  %%107 = shl i8 %%106, 6, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1878_count);
  llvm_cbe_tmp__735 = (unsigned char )((unsigned char )(llvm_cbe_tmp__734 << ((unsigned char )6)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__735);
if (AESL_DEBUG_TRACE)
printf("\n  %%108 = or i8 %%107, %%102, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1879_count);
  llvm_cbe_tmp__736 = (unsigned char )((unsigned char )(llvm_cbe_tmp__735 | llvm_cbe_tmp__730));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__736);
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%108, i8* %%105, align 1, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1880_count);
  *llvm_cbe_tmp__733 = llvm_cbe_tmp__736;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__736);
if (AESL_DEBUG_TRACE)
printf("\n  %%109 = lshr i32 %%36, 2, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1881_count);
  llvm_cbe_tmp__737 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__664&4294967295ull)) >> ((unsigned int )(2u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__737&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%110 = trunc i32 %%109 to i8, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1882_count);
  llvm_cbe_tmp__738 = (unsigned char )((unsigned char )llvm_cbe_tmp__737&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__738);
if (AESL_DEBUG_TRACE)
printf("\n  %%111 = add i32 %%43, 10, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1883_count);
  llvm_cbe_tmp__739 = (unsigned int )((unsigned int )(llvm_cbe_tmp__671&4294967295ull)) + ((unsigned int )(10u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__739&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%112 = zext i32 %%111 to i64, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1884_count);
  llvm_cbe_tmp__740 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__739&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__740);
if (AESL_DEBUG_TRACE)
printf("\n  %%113 = getelementptr inbounds i8* %%r, i64 %%112, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1885_count);
  llvm_cbe_tmp__741 = ( char *)(&llvm_cbe_r[(((signed long long )llvm_cbe_tmp__740))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__740));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%110, i8* %%113, align 1, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1886_count);
  *llvm_cbe_tmp__741 = llvm_cbe_tmp__738;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__738);
if (AESL_DEBUG_TRACE)
printf("\n  %%114 = lshr i32 %%36, 10, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1887_count);
  llvm_cbe_tmp__742 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__664&4294967295ull)) >> ((unsigned int )(10u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__742&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%115 = trunc i32 %%114 to i8, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1888_count);
  llvm_cbe_tmp__743 = (unsigned char )((unsigned char )llvm_cbe_tmp__742&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__743);
if (AESL_DEBUG_TRACE)
printf("\n  %%116 = add i32 %%43, 11, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1889_count);
  llvm_cbe_tmp__744 = (unsigned int )((unsigned int )(llvm_cbe_tmp__671&4294967295ull)) + ((unsigned int )(11u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__744&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%117 = zext i32 %%116 to i64, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1890_count);
  llvm_cbe_tmp__745 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__744&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__745);
if (AESL_DEBUG_TRACE)
printf("\n  %%118 = getelementptr inbounds i8* %%r, i64 %%117, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1891_count);
  llvm_cbe_tmp__746 = ( char *)(&llvm_cbe_r[(((signed long long )llvm_cbe_tmp__745))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__745));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%119 = trunc i32 %%41 to i8, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1892_count);
  llvm_cbe_tmp__747 = (unsigned char )((unsigned char )llvm_cbe_tmp__669&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__747);
if (AESL_DEBUG_TRACE)
printf("\n  %%120 = shl i8 %%119, 3, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1893_count);
  llvm_cbe_tmp__748 = (unsigned char )((unsigned char )(llvm_cbe_tmp__747 << ((unsigned char )3)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__748);
if (AESL_DEBUG_TRACE)
printf("\n  %%121 = or i8 %%120, %%115, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1894_count);
  llvm_cbe_tmp__749 = (unsigned char )((unsigned char )(llvm_cbe_tmp__748 | llvm_cbe_tmp__743));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__749);
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%121, i8* %%118, align 1, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1895_count);
  *llvm_cbe_tmp__746 = llvm_cbe_tmp__749;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__749);
if (AESL_DEBUG_TRACE)
printf("\n  %%122 = lshr i32 %%41, 5, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1896_count);
  llvm_cbe_tmp__750 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__669&4294967295ull)) >> ((unsigned int )(5u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__750&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%123 = trunc i32 %%122 to i8, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1897_count);
  llvm_cbe_tmp__751 = (unsigned char )((unsigned char )llvm_cbe_tmp__750&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__751);
if (AESL_DEBUG_TRACE)
printf("\n  %%124 = add i32 %%43, 12, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1898_count);
  llvm_cbe_tmp__752 = (unsigned int )((unsigned int )(llvm_cbe_tmp__671&4294967295ull)) + ((unsigned int )(12u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__752&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%125 = zext i32 %%124 to i64, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1899_count);
  llvm_cbe_tmp__753 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__752&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__753);
if (AESL_DEBUG_TRACE)
printf("\n  %%126 = getelementptr inbounds i8* %%r, i64 %%125, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1900_count);
  llvm_cbe_tmp__754 = ( char *)(&llvm_cbe_r[(((signed long long )llvm_cbe_tmp__753))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__753));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%123, i8* %%126, align 1, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1901_count);
  *llvm_cbe_tmp__754 = llvm_cbe_tmp__751;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__751);
if (AESL_DEBUG_TRACE)
printf("\n  %%127 = add i32 %%storemerge1, 1, !dbg !18 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_pack  --> \n", ++aesl_llvm_cbe_1902_count);
  llvm_cbe_tmp__755 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__755&4294967295ull)));
  if (((llvm_cbe_tmp__755&4294967295U) == (32u&4294967295U))) {
    goto llvm_cbe_tmp__757;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__755;   /* for PHI node */
    goto llvm_cbe_tmp__756;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__757:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_polyt0_pack}\n");
  return;
}


void pqcrystals_dilithium2_ref_polyt0_unpack(l_struct_OC_poly *llvm_cbe_r,  char *llvm_cbe_a) {
  static  unsigned long long aesl_llvm_cbe_1936_count = 0;
  static  unsigned long long aesl_llvm_cbe_1937_count = 0;
  static  unsigned long long aesl_llvm_cbe_1938_count = 0;
  static  unsigned long long aesl_llvm_cbe_1939_count = 0;
  static  unsigned long long aesl_llvm_cbe_1940_count = 0;
  static  unsigned long long aesl_llvm_cbe_1941_count = 0;
  static  unsigned long long aesl_llvm_cbe_1942_count = 0;
  static  unsigned long long aesl_llvm_cbe_1943_count = 0;
  static  unsigned long long aesl_llvm_cbe_1944_count = 0;
  static  unsigned long long aesl_llvm_cbe_1945_count = 0;
  static  unsigned long long aesl_llvm_cbe_1946_count = 0;
  static  unsigned long long aesl_llvm_cbe_1947_count = 0;
  static  unsigned long long aesl_llvm_cbe_1948_count = 0;
  static  unsigned long long aesl_llvm_cbe_1949_count = 0;
  static  unsigned long long aesl_llvm_cbe_1950_count = 0;
  static  unsigned long long aesl_llvm_cbe_1951_count = 0;
  static  unsigned long long aesl_llvm_cbe_1952_count = 0;
  static  unsigned long long aesl_llvm_cbe_1953_count = 0;
  static  unsigned long long aesl_llvm_cbe_1954_count = 0;
  static  unsigned long long aesl_llvm_cbe_1955_count = 0;
  static  unsigned long long aesl_llvm_cbe_1956_count = 0;
  static  unsigned long long aesl_llvm_cbe_1957_count = 0;
  static  unsigned long long aesl_llvm_cbe_1958_count = 0;
  static  unsigned long long aesl_llvm_cbe_1959_count = 0;
  static  unsigned long long aesl_llvm_cbe_1960_count = 0;
  static  unsigned long long aesl_llvm_cbe_1961_count = 0;
  static  unsigned long long aesl_llvm_cbe_1962_count = 0;
  static  unsigned long long aesl_llvm_cbe_1963_count = 0;
  static  unsigned long long aesl_llvm_cbe_1964_count = 0;
  static  unsigned long long aesl_llvm_cbe_1965_count = 0;
  static  unsigned long long aesl_llvm_cbe_1966_count = 0;
  static  unsigned long long aesl_llvm_cbe_1967_count = 0;
  static  unsigned long long aesl_llvm_cbe_1968_count = 0;
  static  unsigned long long aesl_llvm_cbe_1969_count = 0;
  static  unsigned long long aesl_llvm_cbe_1970_count = 0;
  static  unsigned long long aesl_llvm_cbe_1971_count = 0;
  static  unsigned long long aesl_llvm_cbe_1972_count = 0;
  static  unsigned long long aesl_llvm_cbe_1973_count = 0;
  static  unsigned long long aesl_llvm_cbe_1974_count = 0;
  static  unsigned long long aesl_llvm_cbe_1975_count = 0;
  static  unsigned long long aesl_llvm_cbe_1976_count = 0;
  static  unsigned long long aesl_llvm_cbe_1977_count = 0;
  static  unsigned long long aesl_llvm_cbe_1978_count = 0;
  static  unsigned long long aesl_llvm_cbe_1979_count = 0;
  static  unsigned long long aesl_llvm_cbe_1980_count = 0;
  static  unsigned long long aesl_llvm_cbe_1981_count = 0;
  static  unsigned long long aesl_llvm_cbe_1982_count = 0;
  static  unsigned long long aesl_llvm_cbe_1983_count = 0;
  static  unsigned long long aesl_llvm_cbe_1984_count = 0;
  static  unsigned long long aesl_llvm_cbe_1985_count = 0;
  static  unsigned long long aesl_llvm_cbe_1986_count = 0;
  static  unsigned long long aesl_llvm_cbe_1987_count = 0;
  static  unsigned long long aesl_llvm_cbe_1988_count = 0;
  static  unsigned long long aesl_llvm_cbe_1989_count = 0;
  static  unsigned long long aesl_llvm_cbe_1990_count = 0;
  static  unsigned long long aesl_llvm_cbe_1991_count = 0;
  static  unsigned long long aesl_llvm_cbe_1992_count = 0;
  static  unsigned long long aesl_llvm_cbe_1993_count = 0;
  static  unsigned long long aesl_llvm_cbe_1994_count = 0;
  static  unsigned long long aesl_llvm_cbe_1995_count = 0;
  static  unsigned long long aesl_llvm_cbe_1996_count = 0;
  static  unsigned long long aesl_llvm_cbe_1997_count = 0;
  static  unsigned long long aesl_llvm_cbe_1998_count = 0;
  static  unsigned long long aesl_llvm_cbe_1999_count = 0;
  static  unsigned long long aesl_llvm_cbe_2000_count = 0;
  static  unsigned long long aesl_llvm_cbe_2001_count = 0;
  static  unsigned long long aesl_llvm_cbe_2002_count = 0;
  static  unsigned long long aesl_llvm_cbe_2003_count = 0;
  static  unsigned long long aesl_llvm_cbe_2004_count = 0;
  static  unsigned long long aesl_llvm_cbe_2005_count = 0;
  static  unsigned long long aesl_llvm_cbe_2006_count = 0;
  static  unsigned long long aesl_llvm_cbe_2007_count = 0;
  static  unsigned long long aesl_llvm_cbe_2008_count = 0;
  static  unsigned long long aesl_llvm_cbe_2009_count = 0;
  static  unsigned long long aesl_llvm_cbe_2010_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_2041_count = 0;
  static  unsigned long long aesl_llvm_cbe_2042_count = 0;
  static  unsigned long long aesl_llvm_cbe_2043_count = 0;
  static  unsigned long long aesl_llvm_cbe_2044_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_2062_count = 0;
  static  unsigned long long aesl_llvm_cbe_2063_count = 0;
  static  unsigned long long aesl_llvm_cbe_2064_count = 0;
  static  unsigned long long aesl_llvm_cbe_2065_count = 0;
  static  unsigned long long aesl_llvm_cbe_2066_count = 0;
  static  unsigned long long aesl_llvm_cbe_2067_count = 0;
  static  unsigned long long aesl_llvm_cbe_2068_count = 0;
  static  unsigned long long aesl_llvm_cbe_2069_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  unsigned int llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2070_count = 0;
  unsigned int llvm_cbe_tmp__758;
  static  unsigned long long aesl_llvm_cbe_2071_count = 0;
  unsigned long long llvm_cbe_tmp__759;
  static  unsigned long long aesl_llvm_cbe_2072_count = 0;
   char *llvm_cbe_tmp__760;
  static  unsigned long long aesl_llvm_cbe_2073_count = 0;
  unsigned char llvm_cbe_tmp__761;
  static  unsigned long long aesl_llvm_cbe_2074_count = 0;
  unsigned int llvm_cbe_tmp__762;
  static  unsigned long long aesl_llvm_cbe_2075_count = 0;
  unsigned int llvm_cbe_tmp__763;
  static  unsigned long long aesl_llvm_cbe_2076_count = 0;
  unsigned long long llvm_cbe_tmp__764;
  static  unsigned long long aesl_llvm_cbe_2077_count = 0;
  signed int *llvm_cbe_tmp__765;
  static  unsigned long long aesl_llvm_cbe_2078_count = 0;
  static  unsigned long long aesl_llvm_cbe_2079_count = 0;
  unsigned int llvm_cbe_tmp__766;
  static  unsigned long long aesl_llvm_cbe_2080_count = 0;
  unsigned long long llvm_cbe_tmp__767;
  static  unsigned long long aesl_llvm_cbe_2081_count = 0;
   char *llvm_cbe_tmp__768;
  static  unsigned long long aesl_llvm_cbe_2082_count = 0;
  unsigned char llvm_cbe_tmp__769;
  static  unsigned long long aesl_llvm_cbe_2083_count = 0;
  unsigned int llvm_cbe_tmp__770;
  static  unsigned long long aesl_llvm_cbe_2084_count = 0;
  unsigned int llvm_cbe_tmp__771;
  static  unsigned long long aesl_llvm_cbe_2085_count = 0;
  unsigned int llvm_cbe_tmp__772;
  static  unsigned long long aesl_llvm_cbe_2086_count = 0;
  unsigned int llvm_cbe_tmp__773;
  static  unsigned long long aesl_llvm_cbe_2087_count = 0;
  static  unsigned long long aesl_llvm_cbe_2088_count = 0;
  unsigned char llvm_cbe_tmp__774;
  static  unsigned long long aesl_llvm_cbe_2089_count = 0;
  unsigned int llvm_cbe_tmp__775;
  static  unsigned long long aesl_llvm_cbe_2090_count = 0;
  unsigned int llvm_cbe_tmp__776;
  static  unsigned long long aesl_llvm_cbe_2091_count = 0;
  unsigned int llvm_cbe_tmp__777;
  static  unsigned long long aesl_llvm_cbe_2092_count = 0;
  unsigned long long llvm_cbe_tmp__778;
  static  unsigned long long aesl_llvm_cbe_2093_count = 0;
  signed int *llvm_cbe_tmp__779;
  static  unsigned long long aesl_llvm_cbe_2094_count = 0;
  static  unsigned long long aesl_llvm_cbe_2095_count = 0;
  unsigned int llvm_cbe_tmp__780;
  static  unsigned long long aesl_llvm_cbe_2096_count = 0;
  unsigned long long llvm_cbe_tmp__781;
  static  unsigned long long aesl_llvm_cbe_2097_count = 0;
   char *llvm_cbe_tmp__782;
  static  unsigned long long aesl_llvm_cbe_2098_count = 0;
  unsigned char llvm_cbe_tmp__783;
  static  unsigned long long aesl_llvm_cbe_2099_count = 0;
  unsigned int llvm_cbe_tmp__784;
  static  unsigned long long aesl_llvm_cbe_2100_count = 0;
  unsigned int llvm_cbe_tmp__785;
  static  unsigned long long aesl_llvm_cbe_2101_count = 0;
  unsigned int llvm_cbe_tmp__786;
  static  unsigned long long aesl_llvm_cbe_2102_count = 0;
  static  unsigned long long aesl_llvm_cbe_2103_count = 0;
  unsigned int llvm_cbe_tmp__787;
  static  unsigned long long aesl_llvm_cbe_2104_count = 0;
  unsigned long long llvm_cbe_tmp__788;
  static  unsigned long long aesl_llvm_cbe_2105_count = 0;
   char *llvm_cbe_tmp__789;
  static  unsigned long long aesl_llvm_cbe_2106_count = 0;
  unsigned char llvm_cbe_tmp__790;
  static  unsigned long long aesl_llvm_cbe_2107_count = 0;
  unsigned int llvm_cbe_tmp__791;
  static  unsigned long long aesl_llvm_cbe_2108_count = 0;
  unsigned int llvm_cbe_tmp__792;
  static  unsigned long long aesl_llvm_cbe_2109_count = 0;
  unsigned int llvm_cbe_tmp__793;
  static  unsigned long long aesl_llvm_cbe_2110_count = 0;
  unsigned int llvm_cbe_tmp__794;
  static  unsigned long long aesl_llvm_cbe_2111_count = 0;
  static  unsigned long long aesl_llvm_cbe_2112_count = 0;
  unsigned char llvm_cbe_tmp__795;
  static  unsigned long long aesl_llvm_cbe_2113_count = 0;
  unsigned int llvm_cbe_tmp__796;
  static  unsigned long long aesl_llvm_cbe_2114_count = 0;
  unsigned int llvm_cbe_tmp__797;
  static  unsigned long long aesl_llvm_cbe_2115_count = 0;
  unsigned int llvm_cbe_tmp__798;
  static  unsigned long long aesl_llvm_cbe_2116_count = 0;
  unsigned long long llvm_cbe_tmp__799;
  static  unsigned long long aesl_llvm_cbe_2117_count = 0;
  signed int *llvm_cbe_tmp__800;
  static  unsigned long long aesl_llvm_cbe_2118_count = 0;
  static  unsigned long long aesl_llvm_cbe_2119_count = 0;
  unsigned int llvm_cbe_tmp__801;
  static  unsigned long long aesl_llvm_cbe_2120_count = 0;
  unsigned long long llvm_cbe_tmp__802;
  static  unsigned long long aesl_llvm_cbe_2121_count = 0;
   char *llvm_cbe_tmp__803;
  static  unsigned long long aesl_llvm_cbe_2122_count = 0;
  unsigned char llvm_cbe_tmp__804;
  static  unsigned long long aesl_llvm_cbe_2123_count = 0;
  unsigned int llvm_cbe_tmp__805;
  static  unsigned long long aesl_llvm_cbe_2124_count = 0;
  unsigned int llvm_cbe_tmp__806;
  static  unsigned long long aesl_llvm_cbe_2125_count = 0;
  unsigned int llvm_cbe_tmp__807;
  static  unsigned long long aesl_llvm_cbe_2126_count = 0;
  unsigned int llvm_cbe_tmp__808;
  static  unsigned long long aesl_llvm_cbe_2127_count = 0;
  static  unsigned long long aesl_llvm_cbe_2128_count = 0;
  unsigned char llvm_cbe_tmp__809;
  static  unsigned long long aesl_llvm_cbe_2129_count = 0;
  unsigned int llvm_cbe_tmp__810;
  static  unsigned long long aesl_llvm_cbe_2130_count = 0;
  unsigned int llvm_cbe_tmp__811;
  static  unsigned long long aesl_llvm_cbe_2131_count = 0;
  unsigned int llvm_cbe_tmp__812;
  static  unsigned long long aesl_llvm_cbe_2132_count = 0;
  unsigned long long llvm_cbe_tmp__813;
  static  unsigned long long aesl_llvm_cbe_2133_count = 0;
  signed int *llvm_cbe_tmp__814;
  static  unsigned long long aesl_llvm_cbe_2134_count = 0;
  static  unsigned long long aesl_llvm_cbe_2135_count = 0;
  unsigned int llvm_cbe_tmp__815;
  static  unsigned long long aesl_llvm_cbe_2136_count = 0;
  unsigned long long llvm_cbe_tmp__816;
  static  unsigned long long aesl_llvm_cbe_2137_count = 0;
   char *llvm_cbe_tmp__817;
  static  unsigned long long aesl_llvm_cbe_2138_count = 0;
  unsigned char llvm_cbe_tmp__818;
  static  unsigned long long aesl_llvm_cbe_2139_count = 0;
  unsigned int llvm_cbe_tmp__819;
  static  unsigned long long aesl_llvm_cbe_2140_count = 0;
  unsigned int llvm_cbe_tmp__820;
  static  unsigned long long aesl_llvm_cbe_2141_count = 0;
  unsigned int llvm_cbe_tmp__821;
  static  unsigned long long aesl_llvm_cbe_2142_count = 0;
  static  unsigned long long aesl_llvm_cbe_2143_count = 0;
  unsigned int llvm_cbe_tmp__822;
  static  unsigned long long aesl_llvm_cbe_2144_count = 0;
  unsigned long long llvm_cbe_tmp__823;
  static  unsigned long long aesl_llvm_cbe_2145_count = 0;
   char *llvm_cbe_tmp__824;
  static  unsigned long long aesl_llvm_cbe_2146_count = 0;
  unsigned char llvm_cbe_tmp__825;
  static  unsigned long long aesl_llvm_cbe_2147_count = 0;
  unsigned int llvm_cbe_tmp__826;
  static  unsigned long long aesl_llvm_cbe_2148_count = 0;
  unsigned int llvm_cbe_tmp__827;
  static  unsigned long long aesl_llvm_cbe_2149_count = 0;
  unsigned int llvm_cbe_tmp__828;
  static  unsigned long long aesl_llvm_cbe_2150_count = 0;
  unsigned int llvm_cbe_tmp__829;
  static  unsigned long long aesl_llvm_cbe_2151_count = 0;
  static  unsigned long long aesl_llvm_cbe_2152_count = 0;
  unsigned char llvm_cbe_tmp__830;
  static  unsigned long long aesl_llvm_cbe_2153_count = 0;
  unsigned int llvm_cbe_tmp__831;
  static  unsigned long long aesl_llvm_cbe_2154_count = 0;
  unsigned int llvm_cbe_tmp__832;
  static  unsigned long long aesl_llvm_cbe_2155_count = 0;
  unsigned int llvm_cbe_tmp__833;
  static  unsigned long long aesl_llvm_cbe_2156_count = 0;
  unsigned long long llvm_cbe_tmp__834;
  static  unsigned long long aesl_llvm_cbe_2157_count = 0;
  signed int *llvm_cbe_tmp__835;
  static  unsigned long long aesl_llvm_cbe_2158_count = 0;
  static  unsigned long long aesl_llvm_cbe_2159_count = 0;
  unsigned int llvm_cbe_tmp__836;
  static  unsigned long long aesl_llvm_cbe_2160_count = 0;
  unsigned long long llvm_cbe_tmp__837;
  static  unsigned long long aesl_llvm_cbe_2161_count = 0;
   char *llvm_cbe_tmp__838;
  static  unsigned long long aesl_llvm_cbe_2162_count = 0;
  unsigned char llvm_cbe_tmp__839;
  static  unsigned long long aesl_llvm_cbe_2163_count = 0;
  unsigned int llvm_cbe_tmp__840;
  static  unsigned long long aesl_llvm_cbe_2164_count = 0;
  unsigned int llvm_cbe_tmp__841;
  static  unsigned long long aesl_llvm_cbe_2165_count = 0;
  unsigned int llvm_cbe_tmp__842;
  static  unsigned long long aesl_llvm_cbe_2166_count = 0;
  static  unsigned long long aesl_llvm_cbe_2167_count = 0;
  unsigned int llvm_cbe_tmp__843;
  static  unsigned long long aesl_llvm_cbe_2168_count = 0;
  unsigned long long llvm_cbe_tmp__844;
  static  unsigned long long aesl_llvm_cbe_2169_count = 0;
   char *llvm_cbe_tmp__845;
  static  unsigned long long aesl_llvm_cbe_2170_count = 0;
  unsigned char llvm_cbe_tmp__846;
  static  unsigned long long aesl_llvm_cbe_2171_count = 0;
  unsigned int llvm_cbe_tmp__847;
  static  unsigned long long aesl_llvm_cbe_2172_count = 0;
  unsigned int llvm_cbe_tmp__848;
  static  unsigned long long aesl_llvm_cbe_2173_count = 0;
  unsigned int llvm_cbe_tmp__849;
  static  unsigned long long aesl_llvm_cbe_2174_count = 0;
  unsigned int llvm_cbe_tmp__850;
  static  unsigned long long aesl_llvm_cbe_2175_count = 0;
  static  unsigned long long aesl_llvm_cbe_2176_count = 0;
  unsigned char llvm_cbe_tmp__851;
  static  unsigned long long aesl_llvm_cbe_2177_count = 0;
  unsigned int llvm_cbe_tmp__852;
  static  unsigned long long aesl_llvm_cbe_2178_count = 0;
  unsigned int llvm_cbe_tmp__853;
  static  unsigned long long aesl_llvm_cbe_2179_count = 0;
  unsigned int llvm_cbe_tmp__854;
  static  unsigned long long aesl_llvm_cbe_2180_count = 0;
  unsigned long long llvm_cbe_tmp__855;
  static  unsigned long long aesl_llvm_cbe_2181_count = 0;
  signed int *llvm_cbe_tmp__856;
  static  unsigned long long aesl_llvm_cbe_2182_count = 0;
  static  unsigned long long aesl_llvm_cbe_2183_count = 0;
  unsigned int llvm_cbe_tmp__857;
  static  unsigned long long aesl_llvm_cbe_2184_count = 0;
  unsigned long long llvm_cbe_tmp__858;
  static  unsigned long long aesl_llvm_cbe_2185_count = 0;
   char *llvm_cbe_tmp__859;
  static  unsigned long long aesl_llvm_cbe_2186_count = 0;
  unsigned char llvm_cbe_tmp__860;
  static  unsigned long long aesl_llvm_cbe_2187_count = 0;
  unsigned int llvm_cbe_tmp__861;
  static  unsigned long long aesl_llvm_cbe_2188_count = 0;
  unsigned int llvm_cbe_tmp__862;
  static  unsigned long long aesl_llvm_cbe_2189_count = 0;
  unsigned int llvm_cbe_tmp__863;
  static  unsigned long long aesl_llvm_cbe_2190_count = 0;
  unsigned int llvm_cbe_tmp__864;
  static  unsigned long long aesl_llvm_cbe_2191_count = 0;
  static  unsigned long long aesl_llvm_cbe_2192_count = 0;
  unsigned char llvm_cbe_tmp__865;
  static  unsigned long long aesl_llvm_cbe_2193_count = 0;
  unsigned int llvm_cbe_tmp__866;
  static  unsigned long long aesl_llvm_cbe_2194_count = 0;
  unsigned int llvm_cbe_tmp__867;
  static  unsigned long long aesl_llvm_cbe_2195_count = 0;
  unsigned int llvm_cbe_tmp__868;
  static  unsigned long long aesl_llvm_cbe_2196_count = 0;
  unsigned long long llvm_cbe_tmp__869;
  static  unsigned long long aesl_llvm_cbe_2197_count = 0;
  signed int *llvm_cbe_tmp__870;
  static  unsigned long long aesl_llvm_cbe_2198_count = 0;
  static  unsigned long long aesl_llvm_cbe_2199_count = 0;
  unsigned int llvm_cbe_tmp__871;
  static  unsigned long long aesl_llvm_cbe_2200_count = 0;
  unsigned long long llvm_cbe_tmp__872;
  static  unsigned long long aesl_llvm_cbe_2201_count = 0;
   char *llvm_cbe_tmp__873;
  static  unsigned long long aesl_llvm_cbe_2202_count = 0;
  unsigned char llvm_cbe_tmp__874;
  static  unsigned long long aesl_llvm_cbe_2203_count = 0;
  unsigned int llvm_cbe_tmp__875;
  static  unsigned long long aesl_llvm_cbe_2204_count = 0;
  unsigned int llvm_cbe_tmp__876;
  static  unsigned long long aesl_llvm_cbe_2205_count = 0;
  unsigned int llvm_cbe_tmp__877;
  static  unsigned long long aesl_llvm_cbe_2206_count = 0;
  static  unsigned long long aesl_llvm_cbe_2207_count = 0;
  unsigned int llvm_cbe_tmp__878;
  static  unsigned long long aesl_llvm_cbe_2208_count = 0;
  unsigned long long llvm_cbe_tmp__879;
  static  unsigned long long aesl_llvm_cbe_2209_count = 0;
   char *llvm_cbe_tmp__880;
  static  unsigned long long aesl_llvm_cbe_2210_count = 0;
  unsigned char llvm_cbe_tmp__881;
  static  unsigned long long aesl_llvm_cbe_2211_count = 0;
  unsigned int llvm_cbe_tmp__882;
  static  unsigned long long aesl_llvm_cbe_2212_count = 0;
  unsigned int llvm_cbe_tmp__883;
  static  unsigned long long aesl_llvm_cbe_2213_count = 0;
  unsigned int llvm_cbe_tmp__884;
  static  unsigned long long aesl_llvm_cbe_2214_count = 0;
  unsigned int llvm_cbe_tmp__885;
  static  unsigned long long aesl_llvm_cbe_2215_count = 0;
  static  unsigned long long aesl_llvm_cbe_2216_count = 0;
  unsigned char llvm_cbe_tmp__886;
  static  unsigned long long aesl_llvm_cbe_2217_count = 0;
  unsigned int llvm_cbe_tmp__887;
  static  unsigned long long aesl_llvm_cbe_2218_count = 0;
  unsigned int llvm_cbe_tmp__888;
  static  unsigned long long aesl_llvm_cbe_2219_count = 0;
  unsigned int llvm_cbe_tmp__889;
  static  unsigned long long aesl_llvm_cbe_2220_count = 0;
  unsigned long long llvm_cbe_tmp__890;
  static  unsigned long long aesl_llvm_cbe_2221_count = 0;
  signed int *llvm_cbe_tmp__891;
  static  unsigned long long aesl_llvm_cbe_2222_count = 0;
  static  unsigned long long aesl_llvm_cbe_2223_count = 0;
  unsigned int llvm_cbe_tmp__892;
  static  unsigned long long aesl_llvm_cbe_2224_count = 0;
  unsigned long long llvm_cbe_tmp__893;
  static  unsigned long long aesl_llvm_cbe_2225_count = 0;
   char *llvm_cbe_tmp__894;
  static  unsigned long long aesl_llvm_cbe_2226_count = 0;
  unsigned char llvm_cbe_tmp__895;
  static  unsigned long long aesl_llvm_cbe_2227_count = 0;
  unsigned int llvm_cbe_tmp__896;
  static  unsigned long long aesl_llvm_cbe_2228_count = 0;
  unsigned int llvm_cbe_tmp__897;
  static  unsigned long long aesl_llvm_cbe_2229_count = 0;
  unsigned int llvm_cbe_tmp__898;
  static  unsigned long long aesl_llvm_cbe_2230_count = 0;
  unsigned int llvm_cbe_tmp__899;
  static  unsigned long long aesl_llvm_cbe_2231_count = 0;
  static  unsigned long long aesl_llvm_cbe_2232_count = 0;
  unsigned int llvm_cbe_tmp__900;
  static  unsigned long long aesl_llvm_cbe_2233_count = 0;
  static  unsigned long long aesl_llvm_cbe_2234_count = 0;
  unsigned int llvm_cbe_tmp__901;
  static  unsigned long long aesl_llvm_cbe_2235_count = 0;
  static  unsigned long long aesl_llvm_cbe_2236_count = 0;
  unsigned int llvm_cbe_tmp__902;
  static  unsigned long long aesl_llvm_cbe_2237_count = 0;
  static  unsigned long long aesl_llvm_cbe_2238_count = 0;
  unsigned int llvm_cbe_tmp__903;
  static  unsigned long long aesl_llvm_cbe_2239_count = 0;
  static  unsigned long long aesl_llvm_cbe_2240_count = 0;
  unsigned int llvm_cbe_tmp__904;
  static  unsigned long long aesl_llvm_cbe_2241_count = 0;
  static  unsigned long long aesl_llvm_cbe_2242_count = 0;
  unsigned int llvm_cbe_tmp__905;
  static  unsigned long long aesl_llvm_cbe_2243_count = 0;
  static  unsigned long long aesl_llvm_cbe_2244_count = 0;
  unsigned int llvm_cbe_tmp__906;
  static  unsigned long long aesl_llvm_cbe_2245_count = 0;
  static  unsigned long long aesl_llvm_cbe_2246_count = 0;
  unsigned int llvm_cbe_tmp__907;
  static  unsigned long long aesl_llvm_cbe_2247_count = 0;
  static  unsigned long long aesl_llvm_cbe_2248_count = 0;
  static  unsigned long long aesl_llvm_cbe_2249_count = 0;
  static  unsigned long long aesl_llvm_cbe_2250_count = 0;
  static  unsigned long long aesl_llvm_cbe_2251_count = 0;
  static  unsigned long long aesl_llvm_cbe_2252_count = 0;
  static  unsigned long long aesl_llvm_cbe_2253_count = 0;
  static  unsigned long long aesl_llvm_cbe_2254_count = 0;
  static  unsigned long long aesl_llvm_cbe_2255_count = 0;
  static  unsigned long long aesl_llvm_cbe_2256_count = 0;
  static  unsigned long long aesl_llvm_cbe_2257_count = 0;
  static  unsigned long long aesl_llvm_cbe_2258_count = 0;
  static  unsigned long long aesl_llvm_cbe_2259_count = 0;
  static  unsigned long long aesl_llvm_cbe_2260_count = 0;
  static  unsigned long long aesl_llvm_cbe_2261_count = 0;
  static  unsigned long long aesl_llvm_cbe_2262_count = 0;
  static  unsigned long long aesl_llvm_cbe_2263_count = 0;
  static  unsigned long long aesl_llvm_cbe_2264_count = 0;
  static  unsigned long long aesl_llvm_cbe_2265_count = 0;
  static  unsigned long long aesl_llvm_cbe_2266_count = 0;
  static  unsigned long long aesl_llvm_cbe_2267_count = 0;
  static  unsigned long long aesl_llvm_cbe_2268_count = 0;
  static  unsigned long long aesl_llvm_cbe_2269_count = 0;
  static  unsigned long long aesl_llvm_cbe_2270_count = 0;
  static  unsigned long long aesl_llvm_cbe_2271_count = 0;
  static  unsigned long long aesl_llvm_cbe_2272_count = 0;
  static  unsigned long long aesl_llvm_cbe_2273_count = 0;
  static  unsigned long long aesl_llvm_cbe_2274_count = 0;
  static  unsigned long long aesl_llvm_cbe_2275_count = 0;
  static  unsigned long long aesl_llvm_cbe_2276_count = 0;
  static  unsigned long long aesl_llvm_cbe_2277_count = 0;
  static  unsigned long long aesl_llvm_cbe_2278_count = 0;
  static  unsigned long long aesl_llvm_cbe_2279_count = 0;
  static  unsigned long long aesl_llvm_cbe_2280_count = 0;
  static  unsigned long long aesl_llvm_cbe_2281_count = 0;
  static  unsigned long long aesl_llvm_cbe_2282_count = 0;
  static  unsigned long long aesl_llvm_cbe_2283_count = 0;
  static  unsigned long long aesl_llvm_cbe_2284_count = 0;
  static  unsigned long long aesl_llvm_cbe_2285_count = 0;
  static  unsigned long long aesl_llvm_cbe_2286_count = 0;
  static  unsigned long long aesl_llvm_cbe_2287_count = 0;
  static  unsigned long long aesl_llvm_cbe_2288_count = 0;
  static  unsigned long long aesl_llvm_cbe_2289_count = 0;
  static  unsigned long long aesl_llvm_cbe_2290_count = 0;
  static  unsigned long long aesl_llvm_cbe_2291_count = 0;
  static  unsigned long long aesl_llvm_cbe_2292_count = 0;
  static  unsigned long long aesl_llvm_cbe_2293_count = 0;
  static  unsigned long long aesl_llvm_cbe_2294_count = 0;
  static  unsigned long long aesl_llvm_cbe_2295_count = 0;
  static  unsigned long long aesl_llvm_cbe_2296_count = 0;
  static  unsigned long long aesl_llvm_cbe_2297_count = 0;
  static  unsigned long long aesl_llvm_cbe_2298_count = 0;
  static  unsigned long long aesl_llvm_cbe_2299_count = 0;
  static  unsigned long long aesl_llvm_cbe_2300_count = 0;
  static  unsigned long long aesl_llvm_cbe_2301_count = 0;
  static  unsigned long long aesl_llvm_cbe_2302_count = 0;
  static  unsigned long long aesl_llvm_cbe_2303_count = 0;
  static  unsigned long long aesl_llvm_cbe_2304_count = 0;
  static  unsigned long long aesl_llvm_cbe_2305_count = 0;
  static  unsigned long long aesl_llvm_cbe_2306_count = 0;
  static  unsigned long long aesl_llvm_cbe_2307_count = 0;
  static  unsigned long long aesl_llvm_cbe_2308_count = 0;
  static  unsigned long long aesl_llvm_cbe_2309_count = 0;
  static  unsigned long long aesl_llvm_cbe_2310_count = 0;
  static  unsigned long long aesl_llvm_cbe_2311_count = 0;
  static  unsigned long long aesl_llvm_cbe_2312_count = 0;
  static  unsigned long long aesl_llvm_cbe_2313_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_2314_count = 0;
  static  unsigned long long aesl_llvm_cbe_2315_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_polyt0_unpack\n");
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__908;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__908:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i32 [ 0, %%0 ], [ %%151, %%1  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__907);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = mul i32 %%storemerge1, 13, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2070_count);
  llvm_cbe_tmp__758 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) * ((unsigned int )(13u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__758&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = zext i32 %%2 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2071_count);
  llvm_cbe_tmp__759 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__758&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__759);
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds i8* %%a, i64 %%3, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2072_count);
  llvm_cbe_tmp__760 = ( char *)(&llvm_cbe_a[(((signed long long )llvm_cbe_tmp__759))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__759));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = load i8* %%4, align 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2073_count);
  llvm_cbe_tmp__761 = (unsigned char )*llvm_cbe_tmp__760;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__761);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = zext i8 %%5 to i32, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2074_count);
  llvm_cbe_tmp__762 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__761&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__762);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = shl i32 %%storemerge1, 3, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2075_count);
  llvm_cbe_tmp__763 = (unsigned int )llvm_cbe_storemerge1 << 3u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__763);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = zext i32 %%7 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2076_count);
  llvm_cbe_tmp__764 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__763&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__764);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%8, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2077_count);
  llvm_cbe_tmp__765 = (signed int *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__764))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__764));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%6, i32* %%9, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2078_count);
  *llvm_cbe_tmp__765 = llvm_cbe_tmp__762;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__762);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = add i32 %%2, 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2079_count);
  llvm_cbe_tmp__766 = (unsigned int )((unsigned int )(llvm_cbe_tmp__758&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__766&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = zext i32 %%10 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2080_count);
  llvm_cbe_tmp__767 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__766&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__767);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = getelementptr inbounds i8* %%a, i64 %%11, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2081_count);
  llvm_cbe_tmp__768 = ( char *)(&llvm_cbe_a[(((signed long long )llvm_cbe_tmp__767))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__767));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = load i8* %%12, align 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2082_count);
  llvm_cbe_tmp__769 = (unsigned char )*llvm_cbe_tmp__768;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__769);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = zext i8 %%13 to i32, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2083_count);
  llvm_cbe_tmp__770 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__769&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__770);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = shl nuw nsw i32 %%14, 8, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2084_count);
  llvm_cbe_tmp__771 = (unsigned int )llvm_cbe_tmp__770 << 8u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__771);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = and i32 %%15, 7936, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2085_count);
  llvm_cbe_tmp__772 = (unsigned int )llvm_cbe_tmp__771 & 7936u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__772);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = or i32 %%16, %%6, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2086_count);
  llvm_cbe_tmp__773 = (unsigned int )llvm_cbe_tmp__772 | llvm_cbe_tmp__762;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__773);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%17, i32* %%9, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2087_count);
  *llvm_cbe_tmp__765 = llvm_cbe_tmp__773;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__773);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = load i8* %%12, align 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2088_count);
  llvm_cbe_tmp__774 = (unsigned char )*llvm_cbe_tmp__768;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__774);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = zext i8 %%18 to i32, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2089_count);
  llvm_cbe_tmp__775 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__774&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__775);
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = lshr i32 %%19, 5, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2090_count);
  llvm_cbe_tmp__776 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__775&4294967295ull)) >> ((unsigned int )(5u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__776&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = or i32 %%7, 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2091_count);
  llvm_cbe_tmp__777 = (unsigned int )llvm_cbe_tmp__763 | 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__777);
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = zext i32 %%21 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2092_count);
  llvm_cbe_tmp__778 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__777&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__778);
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%22, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2093_count);
  llvm_cbe_tmp__779 = (signed int *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__778))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__778));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%20, i32* %%23, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2094_count);
  *llvm_cbe_tmp__779 = llvm_cbe_tmp__776;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__776);
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = add i32 %%2, 2, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2095_count);
  llvm_cbe_tmp__780 = (unsigned int )((unsigned int )(llvm_cbe_tmp__758&4294967295ull)) + ((unsigned int )(2u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__780&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = zext i32 %%24 to i64, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2096_count);
  llvm_cbe_tmp__781 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__780&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__781);
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = getelementptr inbounds i8* %%a, i64 %%25, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2097_count);
  llvm_cbe_tmp__782 = ( char *)(&llvm_cbe_a[(((signed long long )llvm_cbe_tmp__781))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__781));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = load i8* %%26, align 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2098_count);
  llvm_cbe_tmp__783 = (unsigned char )*llvm_cbe_tmp__782;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__783);
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = zext i8 %%27 to i32, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2099_count);
  llvm_cbe_tmp__784 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__783&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__784);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = shl nuw nsw i32 %%28, 3, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2100_count);
  llvm_cbe_tmp__785 = (unsigned int )llvm_cbe_tmp__784 << 3u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__785);
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = or i32 %%29, %%20, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2101_count);
  llvm_cbe_tmp__786 = (unsigned int )llvm_cbe_tmp__785 | llvm_cbe_tmp__776;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__786);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%30, i32* %%23, align 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2102_count);
  *llvm_cbe_tmp__779 = llvm_cbe_tmp__786;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__786);
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = add i32 %%2, 3, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2103_count);
  llvm_cbe_tmp__787 = (unsigned int )((unsigned int )(llvm_cbe_tmp__758&4294967295ull)) + ((unsigned int )(3u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__787&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = zext i32 %%31 to i64, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2104_count);
  llvm_cbe_tmp__788 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__787&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__788);
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = getelementptr inbounds i8* %%a, i64 %%32, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2105_count);
  llvm_cbe_tmp__789 = ( char *)(&llvm_cbe_a[(((signed long long )llvm_cbe_tmp__788))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__788));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = load i8* %%33, align 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2106_count);
  llvm_cbe_tmp__790 = (unsigned char )*llvm_cbe_tmp__789;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__790);
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = zext i8 %%34 to i32, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2107_count);
  llvm_cbe_tmp__791 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__790&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__791);
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = shl nuw nsw i32 %%35, 11, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2108_count);
  llvm_cbe_tmp__792 = (unsigned int )llvm_cbe_tmp__791 << 11u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__792);
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = and i32 %%36, 6144, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2109_count);
  llvm_cbe_tmp__793 = (unsigned int )llvm_cbe_tmp__792 & 6144u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__793);
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = or i32 %%37, %%30, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2110_count);
  llvm_cbe_tmp__794 = (unsigned int )llvm_cbe_tmp__793 | llvm_cbe_tmp__786;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__794);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%38, i32* %%23, align 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2111_count);
  *llvm_cbe_tmp__779 = llvm_cbe_tmp__794;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__794);
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = load i8* %%33, align 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2112_count);
  llvm_cbe_tmp__795 = (unsigned char )*llvm_cbe_tmp__789;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__795);
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = zext i8 %%39 to i32, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2113_count);
  llvm_cbe_tmp__796 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__795&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__796);
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = lshr i32 %%40, 2, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2114_count);
  llvm_cbe_tmp__797 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__796&4294967295ull)) >> ((unsigned int )(2u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__797&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = or i32 %%7, 2, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2115_count);
  llvm_cbe_tmp__798 = (unsigned int )llvm_cbe_tmp__763 | 2u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__798);
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = zext i32 %%42 to i64, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2116_count);
  llvm_cbe_tmp__799 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__798&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__799);
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%43, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2117_count);
  llvm_cbe_tmp__800 = (signed int *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__799))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__799));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%41, i32* %%44, align 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2118_count);
  *llvm_cbe_tmp__800 = llvm_cbe_tmp__797;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__797);
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = add i32 %%2, 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2119_count);
  llvm_cbe_tmp__801 = (unsigned int )((unsigned int )(llvm_cbe_tmp__758&4294967295ull)) + ((unsigned int )(4u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__801&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = zext i32 %%45 to i64, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2120_count);
  llvm_cbe_tmp__802 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__801&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__802);
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = getelementptr inbounds i8* %%a, i64 %%46, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2121_count);
  llvm_cbe_tmp__803 = ( char *)(&llvm_cbe_a[(((signed long long )llvm_cbe_tmp__802))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__802));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = load i8* %%47, align 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2122_count);
  llvm_cbe_tmp__804 = (unsigned char )*llvm_cbe_tmp__803;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__804);
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = zext i8 %%48 to i32, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2123_count);
  llvm_cbe_tmp__805 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__804&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__805);
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = shl nuw nsw i32 %%49, 6, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2124_count);
  llvm_cbe_tmp__806 = (unsigned int )llvm_cbe_tmp__805 << 6u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__806);
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = and i32 %%50, 8128, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2125_count);
  llvm_cbe_tmp__807 = (unsigned int )llvm_cbe_tmp__806 & 8128u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__807);
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = or i32 %%51, %%41, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2126_count);
  llvm_cbe_tmp__808 = (unsigned int )llvm_cbe_tmp__807 | llvm_cbe_tmp__797;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__808);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%52, i32* %%44, align 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2127_count);
  *llvm_cbe_tmp__800 = llvm_cbe_tmp__808;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__808);
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = load i8* %%47, align 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2128_count);
  llvm_cbe_tmp__809 = (unsigned char )*llvm_cbe_tmp__803;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__809);
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = zext i8 %%53 to i32, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2129_count);
  llvm_cbe_tmp__810 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__809&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__810);
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = lshr i32 %%54, 7, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2130_count);
  llvm_cbe_tmp__811 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__810&4294967295ull)) >> ((unsigned int )(7u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__811&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = or i32 %%7, 3, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2131_count);
  llvm_cbe_tmp__812 = (unsigned int )llvm_cbe_tmp__763 | 3u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__812);
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = zext i32 %%56 to i64, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2132_count);
  llvm_cbe_tmp__813 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__812&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__813);
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%57, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2133_count);
  llvm_cbe_tmp__814 = (signed int *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__813))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__813));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%55, i32* %%58, align 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2134_count);
  *llvm_cbe_tmp__814 = llvm_cbe_tmp__811;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__811);
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = add i32 %%2, 5, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2135_count);
  llvm_cbe_tmp__815 = (unsigned int )((unsigned int )(llvm_cbe_tmp__758&4294967295ull)) + ((unsigned int )(5u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__815&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = zext i32 %%59 to i64, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2136_count);
  llvm_cbe_tmp__816 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__815&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__816);
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = getelementptr inbounds i8* %%a, i64 %%60, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2137_count);
  llvm_cbe_tmp__817 = ( char *)(&llvm_cbe_a[(((signed long long )llvm_cbe_tmp__816))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__816));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = load i8* %%61, align 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2138_count);
  llvm_cbe_tmp__818 = (unsigned char )*llvm_cbe_tmp__817;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__818);
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = zext i8 %%62 to i32, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2139_count);
  llvm_cbe_tmp__819 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__818&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__819);
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = shl nuw nsw i32 %%63, 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2140_count);
  llvm_cbe_tmp__820 = (unsigned int )llvm_cbe_tmp__819 << 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__820);
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = or i32 %%64, %%55, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2141_count);
  llvm_cbe_tmp__821 = (unsigned int )llvm_cbe_tmp__820 | llvm_cbe_tmp__811;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__821);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%65, i32* %%58, align 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2142_count);
  *llvm_cbe_tmp__814 = llvm_cbe_tmp__821;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__821);
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = add i32 %%2, 6, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2143_count);
  llvm_cbe_tmp__822 = (unsigned int )((unsigned int )(llvm_cbe_tmp__758&4294967295ull)) + ((unsigned int )(6u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__822&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = zext i32 %%66 to i64, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2144_count);
  llvm_cbe_tmp__823 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__822&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__823);
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = getelementptr inbounds i8* %%a, i64 %%67, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2145_count);
  llvm_cbe_tmp__824 = ( char *)(&llvm_cbe_a[(((signed long long )llvm_cbe_tmp__823))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__823));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%69 = load i8* %%68, align 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2146_count);
  llvm_cbe_tmp__825 = (unsigned char )*llvm_cbe_tmp__824;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__825);
if (AESL_DEBUG_TRACE)
printf("\n  %%70 = zext i8 %%69 to i32, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2147_count);
  llvm_cbe_tmp__826 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__825&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__826);
if (AESL_DEBUG_TRACE)
printf("\n  %%71 = shl nuw nsw i32 %%70, 9, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2148_count);
  llvm_cbe_tmp__827 = (unsigned int )llvm_cbe_tmp__826 << 9u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__827);
if (AESL_DEBUG_TRACE)
printf("\n  %%72 = and i32 %%71, 7680, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2149_count);
  llvm_cbe_tmp__828 = (unsigned int )llvm_cbe_tmp__827 & 7680u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__828);
if (AESL_DEBUG_TRACE)
printf("\n  %%73 = or i32 %%72, %%65, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2150_count);
  llvm_cbe_tmp__829 = (unsigned int )llvm_cbe_tmp__828 | llvm_cbe_tmp__821;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__829);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%73, i32* %%58, align 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2151_count);
  *llvm_cbe_tmp__814 = llvm_cbe_tmp__829;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__829);
if (AESL_DEBUG_TRACE)
printf("\n  %%74 = load i8* %%68, align 1, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2152_count);
  llvm_cbe_tmp__830 = (unsigned char )*llvm_cbe_tmp__824;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__830);
if (AESL_DEBUG_TRACE)
printf("\n  %%75 = zext i8 %%74 to i32, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2153_count);
  llvm_cbe_tmp__831 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__830&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__831);
if (AESL_DEBUG_TRACE)
printf("\n  %%76 = lshr i32 %%75, 4, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2154_count);
  llvm_cbe_tmp__832 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__831&4294967295ull)) >> ((unsigned int )(4u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__832&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%77 = or i32 %%7, 4, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2155_count);
  llvm_cbe_tmp__833 = (unsigned int )llvm_cbe_tmp__763 | 4u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__833);
if (AESL_DEBUG_TRACE)
printf("\n  %%78 = zext i32 %%77 to i64, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2156_count);
  llvm_cbe_tmp__834 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__833&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__834);
if (AESL_DEBUG_TRACE)
printf("\n  %%79 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%78, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2157_count);
  llvm_cbe_tmp__835 = (signed int *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__834))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__834));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%76, i32* %%79, align 4, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2158_count);
  *llvm_cbe_tmp__835 = llvm_cbe_tmp__832;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__832);
if (AESL_DEBUG_TRACE)
printf("\n  %%80 = add i32 %%2, 7, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2159_count);
  llvm_cbe_tmp__836 = (unsigned int )((unsigned int )(llvm_cbe_tmp__758&4294967295ull)) + ((unsigned int )(7u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__836&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%81 = zext i32 %%80 to i64, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2160_count);
  llvm_cbe_tmp__837 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__836&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__837);
if (AESL_DEBUG_TRACE)
printf("\n  %%82 = getelementptr inbounds i8* %%a, i64 %%81, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2161_count);
  llvm_cbe_tmp__838 = ( char *)(&llvm_cbe_a[(((signed long long )llvm_cbe_tmp__837))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__837));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%83 = load i8* %%82, align 1, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2162_count);
  llvm_cbe_tmp__839 = (unsigned char )*llvm_cbe_tmp__838;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__839);
if (AESL_DEBUG_TRACE)
printf("\n  %%84 = zext i8 %%83 to i32, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2163_count);
  llvm_cbe_tmp__840 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__839&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__840);
if (AESL_DEBUG_TRACE)
printf("\n  %%85 = shl nuw nsw i32 %%84, 4, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2164_count);
  llvm_cbe_tmp__841 = (unsigned int )llvm_cbe_tmp__840 << 4u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__841);
if (AESL_DEBUG_TRACE)
printf("\n  %%86 = or i32 %%85, %%76, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2165_count);
  llvm_cbe_tmp__842 = (unsigned int )llvm_cbe_tmp__841 | llvm_cbe_tmp__832;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__842);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%86, i32* %%79, align 4, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2166_count);
  *llvm_cbe_tmp__835 = llvm_cbe_tmp__842;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__842);
if (AESL_DEBUG_TRACE)
printf("\n  %%87 = add i32 %%2, 8, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2167_count);
  llvm_cbe_tmp__843 = (unsigned int )((unsigned int )(llvm_cbe_tmp__758&4294967295ull)) + ((unsigned int )(8u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__843&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%88 = zext i32 %%87 to i64, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2168_count);
  llvm_cbe_tmp__844 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__843&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__844);
if (AESL_DEBUG_TRACE)
printf("\n  %%89 = getelementptr inbounds i8* %%a, i64 %%88, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2169_count);
  llvm_cbe_tmp__845 = ( char *)(&llvm_cbe_a[(((signed long long )llvm_cbe_tmp__844))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__844));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%90 = load i8* %%89, align 1, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2170_count);
  llvm_cbe_tmp__846 = (unsigned char )*llvm_cbe_tmp__845;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__846);
if (AESL_DEBUG_TRACE)
printf("\n  %%91 = zext i8 %%90 to i32, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2171_count);
  llvm_cbe_tmp__847 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__846&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__847);
if (AESL_DEBUG_TRACE)
printf("\n  %%92 = shl nuw nsw i32 %%91, 12, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2172_count);
  llvm_cbe_tmp__848 = (unsigned int )llvm_cbe_tmp__847 << 12u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__848);
if (AESL_DEBUG_TRACE)
printf("\n  %%93 = and i32 %%92, 4096, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2173_count);
  llvm_cbe_tmp__849 = (unsigned int )llvm_cbe_tmp__848 & 4096u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__849);
if (AESL_DEBUG_TRACE)
printf("\n  %%94 = or i32 %%93, %%86, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2174_count);
  llvm_cbe_tmp__850 = (unsigned int )llvm_cbe_tmp__849 | llvm_cbe_tmp__842;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__850);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%94, i32* %%79, align 4, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2175_count);
  *llvm_cbe_tmp__835 = llvm_cbe_tmp__850;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__850);
if (AESL_DEBUG_TRACE)
printf("\n  %%95 = load i8* %%89, align 1, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2176_count);
  llvm_cbe_tmp__851 = (unsigned char )*llvm_cbe_tmp__845;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__851);
if (AESL_DEBUG_TRACE)
printf("\n  %%96 = zext i8 %%95 to i32, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2177_count);
  llvm_cbe_tmp__852 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__851&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__852);
if (AESL_DEBUG_TRACE)
printf("\n  %%97 = lshr i32 %%96, 1, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2178_count);
  llvm_cbe_tmp__853 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__852&4294967295ull)) >> ((unsigned int )(1u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__853&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%98 = or i32 %%7, 5, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2179_count);
  llvm_cbe_tmp__854 = (unsigned int )llvm_cbe_tmp__763 | 5u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__854);
if (AESL_DEBUG_TRACE)
printf("\n  %%99 = zext i32 %%98 to i64, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2180_count);
  llvm_cbe_tmp__855 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__854&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__855);
if (AESL_DEBUG_TRACE)
printf("\n  %%100 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%99, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2181_count);
  llvm_cbe_tmp__856 = (signed int *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__855))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__855));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%97, i32* %%100, align 4, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2182_count);
  *llvm_cbe_tmp__856 = llvm_cbe_tmp__853;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__853);
if (AESL_DEBUG_TRACE)
printf("\n  %%101 = add i32 %%2, 9, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2183_count);
  llvm_cbe_tmp__857 = (unsigned int )((unsigned int )(llvm_cbe_tmp__758&4294967295ull)) + ((unsigned int )(9u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__857&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%102 = zext i32 %%101 to i64, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2184_count);
  llvm_cbe_tmp__858 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__857&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__858);
if (AESL_DEBUG_TRACE)
printf("\n  %%103 = getelementptr inbounds i8* %%a, i64 %%102, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2185_count);
  llvm_cbe_tmp__859 = ( char *)(&llvm_cbe_a[(((signed long long )llvm_cbe_tmp__858))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__858));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%104 = load i8* %%103, align 1, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2186_count);
  llvm_cbe_tmp__860 = (unsigned char )*llvm_cbe_tmp__859;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__860);
if (AESL_DEBUG_TRACE)
printf("\n  %%105 = zext i8 %%104 to i32, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2187_count);
  llvm_cbe_tmp__861 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__860&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__861);
if (AESL_DEBUG_TRACE)
printf("\n  %%106 = shl nuw nsw i32 %%105, 7, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2188_count);
  llvm_cbe_tmp__862 = (unsigned int )llvm_cbe_tmp__861 << 7u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__862);
if (AESL_DEBUG_TRACE)
printf("\n  %%107 = and i32 %%106, 8064, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2189_count);
  llvm_cbe_tmp__863 = (unsigned int )llvm_cbe_tmp__862 & 8064u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__863);
if (AESL_DEBUG_TRACE)
printf("\n  %%108 = or i32 %%107, %%97, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2190_count);
  llvm_cbe_tmp__864 = (unsigned int )llvm_cbe_tmp__863 | llvm_cbe_tmp__853;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__864);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%108, i32* %%100, align 4, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2191_count);
  *llvm_cbe_tmp__856 = llvm_cbe_tmp__864;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__864);
if (AESL_DEBUG_TRACE)
printf("\n  %%109 = load i8* %%103, align 1, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2192_count);
  llvm_cbe_tmp__865 = (unsigned char )*llvm_cbe_tmp__859;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__865);
if (AESL_DEBUG_TRACE)
printf("\n  %%110 = zext i8 %%109 to i32, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2193_count);
  llvm_cbe_tmp__866 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__865&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__866);
if (AESL_DEBUG_TRACE)
printf("\n  %%111 = lshr i32 %%110, 6, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2194_count);
  llvm_cbe_tmp__867 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__866&4294967295ull)) >> ((unsigned int )(6u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__867&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%112 = or i32 %%7, 6, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2195_count);
  llvm_cbe_tmp__868 = (unsigned int )llvm_cbe_tmp__763 | 6u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__868);
if (AESL_DEBUG_TRACE)
printf("\n  %%113 = zext i32 %%112 to i64, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2196_count);
  llvm_cbe_tmp__869 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__868&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__869);
if (AESL_DEBUG_TRACE)
printf("\n  %%114 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%113, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2197_count);
  llvm_cbe_tmp__870 = (signed int *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__869))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__869));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%111, i32* %%114, align 4, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2198_count);
  *llvm_cbe_tmp__870 = llvm_cbe_tmp__867;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__867);
if (AESL_DEBUG_TRACE)
printf("\n  %%115 = add i32 %%2, 10, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2199_count);
  llvm_cbe_tmp__871 = (unsigned int )((unsigned int )(llvm_cbe_tmp__758&4294967295ull)) + ((unsigned int )(10u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__871&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%116 = zext i32 %%115 to i64, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2200_count);
  llvm_cbe_tmp__872 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__871&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__872);
if (AESL_DEBUG_TRACE)
printf("\n  %%117 = getelementptr inbounds i8* %%a, i64 %%116, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2201_count);
  llvm_cbe_tmp__873 = ( char *)(&llvm_cbe_a[(((signed long long )llvm_cbe_tmp__872))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__872));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%118 = load i8* %%117, align 1, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2202_count);
  llvm_cbe_tmp__874 = (unsigned char )*llvm_cbe_tmp__873;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__874);
if (AESL_DEBUG_TRACE)
printf("\n  %%119 = zext i8 %%118 to i32, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2203_count);
  llvm_cbe_tmp__875 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__874&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__875);
if (AESL_DEBUG_TRACE)
printf("\n  %%120 = shl nuw nsw i32 %%119, 2, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2204_count);
  llvm_cbe_tmp__876 = (unsigned int )llvm_cbe_tmp__875 << 2u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__876);
if (AESL_DEBUG_TRACE)
printf("\n  %%121 = or i32 %%120, %%111, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2205_count);
  llvm_cbe_tmp__877 = (unsigned int )llvm_cbe_tmp__876 | llvm_cbe_tmp__867;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__877);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%121, i32* %%114, align 4, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2206_count);
  *llvm_cbe_tmp__870 = llvm_cbe_tmp__877;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__877);
if (AESL_DEBUG_TRACE)
printf("\n  %%122 = add i32 %%2, 11, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2207_count);
  llvm_cbe_tmp__878 = (unsigned int )((unsigned int )(llvm_cbe_tmp__758&4294967295ull)) + ((unsigned int )(11u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__878&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%123 = zext i32 %%122 to i64, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2208_count);
  llvm_cbe_tmp__879 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__878&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__879);
if (AESL_DEBUG_TRACE)
printf("\n  %%124 = getelementptr inbounds i8* %%a, i64 %%123, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2209_count);
  llvm_cbe_tmp__880 = ( char *)(&llvm_cbe_a[(((signed long long )llvm_cbe_tmp__879))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__879));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%125 = load i8* %%124, align 1, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2210_count);
  llvm_cbe_tmp__881 = (unsigned char )*llvm_cbe_tmp__880;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__881);
if (AESL_DEBUG_TRACE)
printf("\n  %%126 = zext i8 %%125 to i32, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2211_count);
  llvm_cbe_tmp__882 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__881&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__882);
if (AESL_DEBUG_TRACE)
printf("\n  %%127 = shl nuw nsw i32 %%126, 10, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2212_count);
  llvm_cbe_tmp__883 = (unsigned int )llvm_cbe_tmp__882 << 10u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__883);
if (AESL_DEBUG_TRACE)
printf("\n  %%128 = and i32 %%127, 7168, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2213_count);
  llvm_cbe_tmp__884 = (unsigned int )llvm_cbe_tmp__883 & 7168u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__884);
if (AESL_DEBUG_TRACE)
printf("\n  %%129 = or i32 %%128, %%121, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2214_count);
  llvm_cbe_tmp__885 = (unsigned int )llvm_cbe_tmp__884 | llvm_cbe_tmp__877;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__885);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%129, i32* %%114, align 4, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2215_count);
  *llvm_cbe_tmp__870 = llvm_cbe_tmp__885;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__885);
if (AESL_DEBUG_TRACE)
printf("\n  %%130 = load i8* %%124, align 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2216_count);
  llvm_cbe_tmp__886 = (unsigned char )*llvm_cbe_tmp__880;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__886);
if (AESL_DEBUG_TRACE)
printf("\n  %%131 = zext i8 %%130 to i32, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2217_count);
  llvm_cbe_tmp__887 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__886&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__887);
if (AESL_DEBUG_TRACE)
printf("\n  %%132 = lshr i32 %%131, 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2218_count);
  llvm_cbe_tmp__888 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__887&4294967295ull)) >> ((unsigned int )(3u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__888&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%133 = or i32 %%7, 7, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2219_count);
  llvm_cbe_tmp__889 = (unsigned int )llvm_cbe_tmp__763 | 7u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__889);
if (AESL_DEBUG_TRACE)
printf("\n  %%134 = zext i32 %%133 to i64, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2220_count);
  llvm_cbe_tmp__890 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__889&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__890);
if (AESL_DEBUG_TRACE)
printf("\n  %%135 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%134, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2221_count);
  llvm_cbe_tmp__891 = (signed int *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__890))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__890));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%132, i32* %%135, align 4, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2222_count);
  *llvm_cbe_tmp__891 = llvm_cbe_tmp__888;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__888);
if (AESL_DEBUG_TRACE)
printf("\n  %%136 = add i32 %%2, 12, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2223_count);
  llvm_cbe_tmp__892 = (unsigned int )((unsigned int )(llvm_cbe_tmp__758&4294967295ull)) + ((unsigned int )(12u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__892&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%137 = zext i32 %%136 to i64, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2224_count);
  llvm_cbe_tmp__893 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__892&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__893);
if (AESL_DEBUG_TRACE)
printf("\n  %%138 = getelementptr inbounds i8* %%a, i64 %%137, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2225_count);
  llvm_cbe_tmp__894 = ( char *)(&llvm_cbe_a[(((signed long long )llvm_cbe_tmp__893))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__893));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%139 = load i8* %%138, align 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2226_count);
  llvm_cbe_tmp__895 = (unsigned char )*llvm_cbe_tmp__894;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__895);
if (AESL_DEBUG_TRACE)
printf("\n  %%140 = zext i8 %%139 to i32, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2227_count);
  llvm_cbe_tmp__896 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__895&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__896);
if (AESL_DEBUG_TRACE)
printf("\n  %%141 = shl nuw nsw i32 %%140, 5, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2228_count);
  llvm_cbe_tmp__897 = (unsigned int )llvm_cbe_tmp__896 << 5u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__897);
if (AESL_DEBUG_TRACE)
printf("\n  %%142 = or i32 %%141, %%132, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2229_count);
  llvm_cbe_tmp__898 = (unsigned int )llvm_cbe_tmp__897 | llvm_cbe_tmp__888;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__898);
if (AESL_DEBUG_TRACE)
printf("\n  %%143 = sub nsw i32 4096, %%17, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2230_count);
  llvm_cbe_tmp__899 = (unsigned int )((unsigned int )(4096u&4294967295ull)) - ((unsigned int )(llvm_cbe_tmp__773&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__899&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%143, i32* %%9, align 4, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2231_count);
  *llvm_cbe_tmp__765 = llvm_cbe_tmp__899;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__899);
if (AESL_DEBUG_TRACE)
printf("\n  %%144 = sub nsw i32 4096, %%38, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2232_count);
  llvm_cbe_tmp__900 = (unsigned int )((unsigned int )(4096u&4294967295ull)) - ((unsigned int )(llvm_cbe_tmp__794&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__900&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%144, i32* %%23, align 4, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2233_count);
  *llvm_cbe_tmp__779 = llvm_cbe_tmp__900;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__900);
if (AESL_DEBUG_TRACE)
printf("\n  %%145 = sub nsw i32 4096, %%52, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2234_count);
  llvm_cbe_tmp__901 = (unsigned int )((unsigned int )(4096u&4294967295ull)) - ((unsigned int )(llvm_cbe_tmp__808&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__901&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%145, i32* %%44, align 4, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2235_count);
  *llvm_cbe_tmp__800 = llvm_cbe_tmp__901;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__901);
if (AESL_DEBUG_TRACE)
printf("\n  %%146 = sub nsw i32 4096, %%73, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2236_count);
  llvm_cbe_tmp__902 = (unsigned int )((unsigned int )(4096u&4294967295ull)) - ((unsigned int )(llvm_cbe_tmp__829&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__902&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%146, i32* %%58, align 4, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2237_count);
  *llvm_cbe_tmp__814 = llvm_cbe_tmp__902;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__902);
if (AESL_DEBUG_TRACE)
printf("\n  %%147 = sub nsw i32 4096, %%94, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2238_count);
  llvm_cbe_tmp__903 = (unsigned int )((unsigned int )(4096u&4294967295ull)) - ((unsigned int )(llvm_cbe_tmp__850&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__903&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%147, i32* %%79, align 4, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2239_count);
  *llvm_cbe_tmp__835 = llvm_cbe_tmp__903;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__903);
if (AESL_DEBUG_TRACE)
printf("\n  %%148 = sub nsw i32 4096, %%108, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2240_count);
  llvm_cbe_tmp__904 = (unsigned int )((unsigned int )(4096u&4294967295ull)) - ((unsigned int )(llvm_cbe_tmp__864&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__904&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%148, i32* %%100, align 4, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2241_count);
  *llvm_cbe_tmp__856 = llvm_cbe_tmp__904;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__904);
if (AESL_DEBUG_TRACE)
printf("\n  %%149 = sub nsw i32 4096, %%129, !dbg !18 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2242_count);
  llvm_cbe_tmp__905 = (unsigned int )((unsigned int )(4096u&4294967295ull)) - ((unsigned int )(llvm_cbe_tmp__885&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__905&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%149, i32* %%114, align 4, !dbg !18 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2243_count);
  *llvm_cbe_tmp__870 = llvm_cbe_tmp__905;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__905);
if (AESL_DEBUG_TRACE)
printf("\n  %%150 = sub nsw i32 4096, %%142, !dbg !18 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2244_count);
  llvm_cbe_tmp__906 = (unsigned int )((unsigned int )(4096u&4294967295ull)) - ((unsigned int )(llvm_cbe_tmp__898&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__906&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%150, i32* %%135, align 4, !dbg !18 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2245_count);
  *llvm_cbe_tmp__891 = llvm_cbe_tmp__906;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__906);
if (AESL_DEBUG_TRACE)
printf("\n  %%151 = add i32 %%storemerge1, 1, !dbg !18 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyt0_unpack  --> \n", ++aesl_llvm_cbe_2246_count);
  llvm_cbe_tmp__907 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__907&4294967295ull)));
  if (((llvm_cbe_tmp__907&4294967295U) == (32u&4294967295U))) {
    goto llvm_cbe_tmp__909;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__907;   /* for PHI node */
    goto llvm_cbe_tmp__908;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__909:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_polyt0_unpack}\n");
  return;
}


void pqcrystals_dilithium2_ref_polyz_pack( char *llvm_cbe_r, l_struct_OC_poly *llvm_cbe_a) {
  static  unsigned long long aesl_llvm_cbe_2316_count = 0;
  static  unsigned long long aesl_llvm_cbe_2317_count = 0;
  static  unsigned long long aesl_llvm_cbe_2318_count = 0;
  static  unsigned long long aesl_llvm_cbe_2319_count = 0;
  static  unsigned long long aesl_llvm_cbe_2320_count = 0;
  static  unsigned long long aesl_llvm_cbe_2321_count = 0;
  static  unsigned long long aesl_llvm_cbe_2322_count = 0;
  static  unsigned long long aesl_llvm_cbe_2323_count = 0;
  static  unsigned long long aesl_llvm_cbe_2324_count = 0;
  static  unsigned long long aesl_llvm_cbe_2325_count = 0;
  static  unsigned long long aesl_llvm_cbe_2326_count = 0;
  static  unsigned long long aesl_llvm_cbe_2327_count = 0;
  static  unsigned long long aesl_llvm_cbe_2328_count = 0;
  static  unsigned long long aesl_llvm_cbe_2329_count = 0;
  static  unsigned long long aesl_llvm_cbe_2330_count = 0;
  static  unsigned long long aesl_llvm_cbe_2331_count = 0;
  static  unsigned long long aesl_llvm_cbe_2332_count = 0;
  static  unsigned long long aesl_llvm_cbe_2333_count = 0;
  static  unsigned long long aesl_llvm_cbe_2334_count = 0;
  static  unsigned long long aesl_llvm_cbe_2335_count = 0;
  static  unsigned long long aesl_llvm_cbe_2336_count = 0;
  static  unsigned long long aesl_llvm_cbe_2337_count = 0;
  static  unsigned long long aesl_llvm_cbe_2338_count = 0;
  static  unsigned long long aesl_llvm_cbe_2339_count = 0;
  static  unsigned long long aesl_llvm_cbe_2340_count = 0;
  static  unsigned long long aesl_llvm_cbe_2341_count = 0;
  static  unsigned long long aesl_llvm_cbe_2342_count = 0;
  static  unsigned long long aesl_llvm_cbe_2343_count = 0;
  static  unsigned long long aesl_llvm_cbe_2344_count = 0;
  static  unsigned long long aesl_llvm_cbe_2345_count = 0;
  static  unsigned long long aesl_llvm_cbe_2346_count = 0;
  static  unsigned long long aesl_llvm_cbe_2347_count = 0;
  static  unsigned long long aesl_llvm_cbe_2348_count = 0;
  static  unsigned long long aesl_llvm_cbe_2349_count = 0;
  static  unsigned long long aesl_llvm_cbe_2350_count = 0;
  static  unsigned long long aesl_llvm_cbe_2351_count = 0;
  static  unsigned long long aesl_llvm_cbe_2352_count = 0;
  static  unsigned long long aesl_llvm_cbe_2353_count = 0;
  static  unsigned long long aesl_llvm_cbe_2354_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  unsigned int llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2355_count = 0;
  unsigned int llvm_cbe_tmp__910;
  static  unsigned long long aesl_llvm_cbe_2356_count = 0;
  unsigned long long llvm_cbe_tmp__911;
  static  unsigned long long aesl_llvm_cbe_2357_count = 0;
  signed int *llvm_cbe_tmp__912;
  static  unsigned long long aesl_llvm_cbe_2358_count = 0;
  unsigned int llvm_cbe_tmp__913;
  static  unsigned long long aesl_llvm_cbe_2359_count = 0;
  unsigned int llvm_cbe_tmp__914;
  static  unsigned long long aesl_llvm_cbe_2360_count = 0;
  unsigned int llvm_cbe_tmp__915;
  static  unsigned long long aesl_llvm_cbe_2361_count = 0;
  unsigned long long llvm_cbe_tmp__916;
  static  unsigned long long aesl_llvm_cbe_2362_count = 0;
  signed int *llvm_cbe_tmp__917;
  static  unsigned long long aesl_llvm_cbe_2363_count = 0;
  unsigned int llvm_cbe_tmp__918;
  static  unsigned long long aesl_llvm_cbe_2364_count = 0;
  unsigned int llvm_cbe_tmp__919;
  static  unsigned long long aesl_llvm_cbe_2365_count = 0;
  unsigned int llvm_cbe_tmp__920;
  static  unsigned long long aesl_llvm_cbe_2366_count = 0;
  unsigned long long llvm_cbe_tmp__921;
  static  unsigned long long aesl_llvm_cbe_2367_count = 0;
  signed int *llvm_cbe_tmp__922;
  static  unsigned long long aesl_llvm_cbe_2368_count = 0;
  unsigned int llvm_cbe_tmp__923;
  static  unsigned long long aesl_llvm_cbe_2369_count = 0;
  unsigned int llvm_cbe_tmp__924;
  static  unsigned long long aesl_llvm_cbe_2370_count = 0;
  unsigned int llvm_cbe_tmp__925;
  static  unsigned long long aesl_llvm_cbe_2371_count = 0;
  unsigned long long llvm_cbe_tmp__926;
  static  unsigned long long aesl_llvm_cbe_2372_count = 0;
  signed int *llvm_cbe_tmp__927;
  static  unsigned long long aesl_llvm_cbe_2373_count = 0;
  unsigned int llvm_cbe_tmp__928;
  static  unsigned long long aesl_llvm_cbe_2374_count = 0;
  unsigned int llvm_cbe_tmp__929;
  static  unsigned long long aesl_llvm_cbe_2375_count = 0;
  unsigned char llvm_cbe_tmp__930;
  static  unsigned long long aesl_llvm_cbe_2376_count = 0;
  unsigned int llvm_cbe_tmp__931;
  static  unsigned long long aesl_llvm_cbe_2377_count = 0;
  unsigned long long llvm_cbe_tmp__932;
  static  unsigned long long aesl_llvm_cbe_2378_count = 0;
   char *llvm_cbe_tmp__933;
  static  unsigned long long aesl_llvm_cbe_2379_count = 0;
  static  unsigned long long aesl_llvm_cbe_2380_count = 0;
  unsigned int llvm_cbe_tmp__934;
  static  unsigned long long aesl_llvm_cbe_2381_count = 0;
  unsigned char llvm_cbe_tmp__935;
  static  unsigned long long aesl_llvm_cbe_2382_count = 0;
  unsigned int llvm_cbe_tmp__936;
  static  unsigned long long aesl_llvm_cbe_2383_count = 0;
  unsigned long long llvm_cbe_tmp__937;
  static  unsigned long long aesl_llvm_cbe_2384_count = 0;
   char *llvm_cbe_tmp__938;
  static  unsigned long long aesl_llvm_cbe_2385_count = 0;
  static  unsigned long long aesl_llvm_cbe_2386_count = 0;
  unsigned int llvm_cbe_tmp__939;
  static  unsigned long long aesl_llvm_cbe_2387_count = 0;
  unsigned char llvm_cbe_tmp__940;
  static  unsigned long long aesl_llvm_cbe_2388_count = 0;
  unsigned int llvm_cbe_tmp__941;
  static  unsigned long long aesl_llvm_cbe_2389_count = 0;
  unsigned long long llvm_cbe_tmp__942;
  static  unsigned long long aesl_llvm_cbe_2390_count = 0;
   char *llvm_cbe_tmp__943;
  static  unsigned long long aesl_llvm_cbe_2391_count = 0;
  unsigned char llvm_cbe_tmp__944;
  static  unsigned long long aesl_llvm_cbe_2392_count = 0;
  unsigned char llvm_cbe_tmp__945;
  static  unsigned long long aesl_llvm_cbe_2393_count = 0;
  unsigned char llvm_cbe_tmp__946;
  static  unsigned long long aesl_llvm_cbe_2394_count = 0;
  static  unsigned long long aesl_llvm_cbe_2395_count = 0;
  unsigned int llvm_cbe_tmp__947;
  static  unsigned long long aesl_llvm_cbe_2396_count = 0;
  unsigned char llvm_cbe_tmp__948;
  static  unsigned long long aesl_llvm_cbe_2397_count = 0;
  unsigned int llvm_cbe_tmp__949;
  static  unsigned long long aesl_llvm_cbe_2398_count = 0;
  unsigned long long llvm_cbe_tmp__950;
  static  unsigned long long aesl_llvm_cbe_2399_count = 0;
   char *llvm_cbe_tmp__951;
  static  unsigned long long aesl_llvm_cbe_2400_count = 0;
  static  unsigned long long aesl_llvm_cbe_2401_count = 0;
  unsigned int llvm_cbe_tmp__952;
  static  unsigned long long aesl_llvm_cbe_2402_count = 0;
  unsigned char llvm_cbe_tmp__953;
  static  unsigned long long aesl_llvm_cbe_2403_count = 0;
  unsigned int llvm_cbe_tmp__954;
  static  unsigned long long aesl_llvm_cbe_2404_count = 0;
  unsigned long long llvm_cbe_tmp__955;
  static  unsigned long long aesl_llvm_cbe_2405_count = 0;
   char *llvm_cbe_tmp__956;
  static  unsigned long long aesl_llvm_cbe_2406_count = 0;
  unsigned char llvm_cbe_tmp__957;
  static  unsigned long long aesl_llvm_cbe_2407_count = 0;
  unsigned char llvm_cbe_tmp__958;
  static  unsigned long long aesl_llvm_cbe_2408_count = 0;
  unsigned char llvm_cbe_tmp__959;
  static  unsigned long long aesl_llvm_cbe_2409_count = 0;
  static  unsigned long long aesl_llvm_cbe_2410_count = 0;
  unsigned int llvm_cbe_tmp__960;
  static  unsigned long long aesl_llvm_cbe_2411_count = 0;
  unsigned char llvm_cbe_tmp__961;
  static  unsigned long long aesl_llvm_cbe_2412_count = 0;
  unsigned int llvm_cbe_tmp__962;
  static  unsigned long long aesl_llvm_cbe_2413_count = 0;
  unsigned long long llvm_cbe_tmp__963;
  static  unsigned long long aesl_llvm_cbe_2414_count = 0;
   char *llvm_cbe_tmp__964;
  static  unsigned long long aesl_llvm_cbe_2415_count = 0;
  static  unsigned long long aesl_llvm_cbe_2416_count = 0;
  unsigned int llvm_cbe_tmp__965;
  static  unsigned long long aesl_llvm_cbe_2417_count = 0;
  unsigned char llvm_cbe_tmp__966;
  static  unsigned long long aesl_llvm_cbe_2418_count = 0;
  unsigned int llvm_cbe_tmp__967;
  static  unsigned long long aesl_llvm_cbe_2419_count = 0;
  unsigned long long llvm_cbe_tmp__968;
  static  unsigned long long aesl_llvm_cbe_2420_count = 0;
   char *llvm_cbe_tmp__969;
  static  unsigned long long aesl_llvm_cbe_2421_count = 0;
  unsigned char llvm_cbe_tmp__970;
  static  unsigned long long aesl_llvm_cbe_2422_count = 0;
  unsigned char llvm_cbe_tmp__971;
  static  unsigned long long aesl_llvm_cbe_2423_count = 0;
  unsigned char llvm_cbe_tmp__972;
  static  unsigned long long aesl_llvm_cbe_2424_count = 0;
  static  unsigned long long aesl_llvm_cbe_2425_count = 0;
  unsigned int llvm_cbe_tmp__973;
  static  unsigned long long aesl_llvm_cbe_2426_count = 0;
  unsigned char llvm_cbe_tmp__974;
  static  unsigned long long aesl_llvm_cbe_2427_count = 0;
  unsigned int llvm_cbe_tmp__975;
  static  unsigned long long aesl_llvm_cbe_2428_count = 0;
  unsigned long long llvm_cbe_tmp__976;
  static  unsigned long long aesl_llvm_cbe_2429_count = 0;
   char *llvm_cbe_tmp__977;
  static  unsigned long long aesl_llvm_cbe_2430_count = 0;
  static  unsigned long long aesl_llvm_cbe_2431_count = 0;
  unsigned int llvm_cbe_tmp__978;
  static  unsigned long long aesl_llvm_cbe_2432_count = 0;
  unsigned char llvm_cbe_tmp__979;
  static  unsigned long long aesl_llvm_cbe_2433_count = 0;
  unsigned int llvm_cbe_tmp__980;
  static  unsigned long long aesl_llvm_cbe_2434_count = 0;
  unsigned long long llvm_cbe_tmp__981;
  static  unsigned long long aesl_llvm_cbe_2435_count = 0;
   char *llvm_cbe_tmp__982;
  static  unsigned long long aesl_llvm_cbe_2436_count = 0;
  static  unsigned long long aesl_llvm_cbe_2437_count = 0;
  unsigned int llvm_cbe_tmp__983;
  static  unsigned long long aesl_llvm_cbe_2438_count = 0;
  static  unsigned long long aesl_llvm_cbe_2439_count = 0;
  static  unsigned long long aesl_llvm_cbe_2440_count = 0;
  static  unsigned long long aesl_llvm_cbe_2441_count = 0;
  static  unsigned long long aesl_llvm_cbe_2442_count = 0;
  static  unsigned long long aesl_llvm_cbe_2443_count = 0;
  static  unsigned long long aesl_llvm_cbe_2444_count = 0;
  static  unsigned long long aesl_llvm_cbe_2445_count = 0;
  static  unsigned long long aesl_llvm_cbe_2446_count = 0;
  static  unsigned long long aesl_llvm_cbe_2447_count = 0;
  static  unsigned long long aesl_llvm_cbe_2448_count = 0;
  static  unsigned long long aesl_llvm_cbe_2449_count = 0;
  static  unsigned long long aesl_llvm_cbe_2450_count = 0;
  static  unsigned long long aesl_llvm_cbe_2451_count = 0;
  static  unsigned long long aesl_llvm_cbe_2452_count = 0;
  static  unsigned long long aesl_llvm_cbe_2453_count = 0;
  static  unsigned long long aesl_llvm_cbe_2454_count = 0;
  static  unsigned long long aesl_llvm_cbe_2455_count = 0;
  static  unsigned long long aesl_llvm_cbe_2456_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_2457_count = 0;
  static  unsigned long long aesl_llvm_cbe_2458_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_polyz_pack\n");
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__984;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__984:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i32 [ 0, %%0 ], [ %%75, %%1  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__983);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = shl i32 %%storemerge1, 2, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2355_count);
  llvm_cbe_tmp__910 = (unsigned int )llvm_cbe_storemerge1 << 2u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__910);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = zext i32 %%2 to i64, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2356_count);
  llvm_cbe_tmp__911 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__910&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__911);
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%3, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2357_count);
  llvm_cbe_tmp__912 = (signed int *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__911))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__911));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = load i32* %%4, align 4, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2358_count);
  llvm_cbe_tmp__913 = (unsigned int )*llvm_cbe_tmp__912;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__913);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = sub nsw i32 131072, %%5, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2359_count);
  llvm_cbe_tmp__914 = (unsigned int )((unsigned int )(131072u&4294967295ull)) - ((unsigned int )(llvm_cbe_tmp__913&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__914&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = or i32 %%2, 1, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2360_count);
  llvm_cbe_tmp__915 = (unsigned int )llvm_cbe_tmp__910 | 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__915);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = zext i32 %%7 to i64, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2361_count);
  llvm_cbe_tmp__916 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__915&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__916);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%8, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2362_count);
  llvm_cbe_tmp__917 = (signed int *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__916))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__916));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = load i32* %%9, align 4, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2363_count);
  llvm_cbe_tmp__918 = (unsigned int )*llvm_cbe_tmp__917;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__918);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = sub nsw i32 131072, %%10, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2364_count);
  llvm_cbe_tmp__919 = (unsigned int )((unsigned int )(131072u&4294967295ull)) - ((unsigned int )(llvm_cbe_tmp__918&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__919&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = or i32 %%2, 2, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2365_count);
  llvm_cbe_tmp__920 = (unsigned int )llvm_cbe_tmp__910 | 2u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__920);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = zext i32 %%12 to i64, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2366_count);
  llvm_cbe_tmp__921 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__920&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__921);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%13, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2367_count);
  llvm_cbe_tmp__922 = (signed int *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__921))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__921));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = load i32* %%14, align 4, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2368_count);
  llvm_cbe_tmp__923 = (unsigned int )*llvm_cbe_tmp__922;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__923);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = sub nsw i32 131072, %%15, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2369_count);
  llvm_cbe_tmp__924 = (unsigned int )((unsigned int )(131072u&4294967295ull)) - ((unsigned int )(llvm_cbe_tmp__923&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__924&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = or i32 %%2, 3, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2370_count);
  llvm_cbe_tmp__925 = (unsigned int )llvm_cbe_tmp__910 | 3u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__925);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = zext i32 %%17 to i64, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2371_count);
  llvm_cbe_tmp__926 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__925&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__926);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%18, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2372_count);
  llvm_cbe_tmp__927 = (signed int *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__926))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__926));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = load i32* %%19, align 4, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2373_count);
  llvm_cbe_tmp__928 = (unsigned int )*llvm_cbe_tmp__927;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__928);
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = sub nsw i32 131072, %%20, !dbg !16 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2374_count);
  llvm_cbe_tmp__929 = (unsigned int )((unsigned int )(131072u&4294967295ull)) - ((unsigned int )(llvm_cbe_tmp__928&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__929&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = trunc i32 %%6 to i8, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2375_count);
  llvm_cbe_tmp__930 = (unsigned char )((unsigned char )llvm_cbe_tmp__914&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__930);
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = mul i32 %%storemerge1, 9, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2376_count);
  llvm_cbe_tmp__931 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) * ((unsigned int )(9u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__931&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = zext i32 %%23 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2377_count);
  llvm_cbe_tmp__932 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__931&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__932);
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = getelementptr inbounds i8* %%r, i64 %%24, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2378_count);
  llvm_cbe_tmp__933 = ( char *)(&llvm_cbe_r[(((signed long long )llvm_cbe_tmp__932))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__932));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%22, i8* %%25, align 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2379_count);
  *llvm_cbe_tmp__933 = llvm_cbe_tmp__930;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__930);
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = lshr i32 %%6, 8, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2380_count);
  llvm_cbe_tmp__934 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__914&4294967295ull)) >> ((unsigned int )(8u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__934&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = trunc i32 %%26 to i8, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2381_count);
  llvm_cbe_tmp__935 = (unsigned char )((unsigned char )llvm_cbe_tmp__934&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__935);
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = add i32 %%23, 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2382_count);
  llvm_cbe_tmp__936 = (unsigned int )((unsigned int )(llvm_cbe_tmp__931&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__936&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = zext i32 %%28 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2383_count);
  llvm_cbe_tmp__937 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__936&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__937);
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = getelementptr inbounds i8* %%r, i64 %%29, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2384_count);
  llvm_cbe_tmp__938 = ( char *)(&llvm_cbe_r[(((signed long long )llvm_cbe_tmp__937))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__937));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%27, i8* %%30, align 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2385_count);
  *llvm_cbe_tmp__938 = llvm_cbe_tmp__935;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__935);
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = lshr i32 %%6, 16, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2386_count);
  llvm_cbe_tmp__939 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__914&4294967295ull)) >> ((unsigned int )(16u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__939&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = trunc i32 %%31 to i8, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2387_count);
  llvm_cbe_tmp__940 = (unsigned char )((unsigned char )llvm_cbe_tmp__939&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__940);
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = add i32 %%23, 2, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2388_count);
  llvm_cbe_tmp__941 = (unsigned int )((unsigned int )(llvm_cbe_tmp__931&4294967295ull)) + ((unsigned int )(2u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__941&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = zext i32 %%33 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2389_count);
  llvm_cbe_tmp__942 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__941&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__942);
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = getelementptr inbounds i8* %%r, i64 %%34, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2390_count);
  llvm_cbe_tmp__943 = ( char *)(&llvm_cbe_r[(((signed long long )llvm_cbe_tmp__942))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__942));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = trunc i32 %%11 to i8, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2391_count);
  llvm_cbe_tmp__944 = (unsigned char )((unsigned char )llvm_cbe_tmp__919&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__944);
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = shl i8 %%36, 2, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2392_count);
  llvm_cbe_tmp__945 = (unsigned char )((unsigned char )(llvm_cbe_tmp__944 << ((unsigned char )2)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__945);
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = or i8 %%37, %%32, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2393_count);
  llvm_cbe_tmp__946 = (unsigned char )((unsigned char )(llvm_cbe_tmp__945 | llvm_cbe_tmp__940));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__946);
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%38, i8* %%35, align 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2394_count);
  *llvm_cbe_tmp__943 = llvm_cbe_tmp__946;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__946);
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = lshr i32 %%11, 6, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2395_count);
  llvm_cbe_tmp__947 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__919&4294967295ull)) >> ((unsigned int )(6u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__947&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = trunc i32 %%39 to i8, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2396_count);
  llvm_cbe_tmp__948 = (unsigned char )((unsigned char )llvm_cbe_tmp__947&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__948);
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = add i32 %%23, 3, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2397_count);
  llvm_cbe_tmp__949 = (unsigned int )((unsigned int )(llvm_cbe_tmp__931&4294967295ull)) + ((unsigned int )(3u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__949&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = zext i32 %%41 to i64, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2398_count);
  llvm_cbe_tmp__950 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__949&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__950);
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = getelementptr inbounds i8* %%r, i64 %%42, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2399_count);
  llvm_cbe_tmp__951 = ( char *)(&llvm_cbe_r[(((signed long long )llvm_cbe_tmp__950))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__950));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%40, i8* %%43, align 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2400_count);
  *llvm_cbe_tmp__951 = llvm_cbe_tmp__948;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__948);
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = lshr i32 %%11, 14, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2401_count);
  llvm_cbe_tmp__952 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__919&4294967295ull)) >> ((unsigned int )(14u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__952&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = trunc i32 %%44 to i8, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2402_count);
  llvm_cbe_tmp__953 = (unsigned char )((unsigned char )llvm_cbe_tmp__952&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__953);
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = add i32 %%23, 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2403_count);
  llvm_cbe_tmp__954 = (unsigned int )((unsigned int )(llvm_cbe_tmp__931&4294967295ull)) + ((unsigned int )(4u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__954&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = zext i32 %%46 to i64, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2404_count);
  llvm_cbe_tmp__955 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__954&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__955);
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = getelementptr inbounds i8* %%r, i64 %%47, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2405_count);
  llvm_cbe_tmp__956 = ( char *)(&llvm_cbe_r[(((signed long long )llvm_cbe_tmp__955))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__955));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = trunc i32 %%16 to i8, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2406_count);
  llvm_cbe_tmp__957 = (unsigned char )((unsigned char )llvm_cbe_tmp__924&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__957);
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = shl i8 %%49, 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2407_count);
  llvm_cbe_tmp__958 = (unsigned char )((unsigned char )(llvm_cbe_tmp__957 << ((unsigned char )4)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__958);
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = or i8 %%50, %%45, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2408_count);
  llvm_cbe_tmp__959 = (unsigned char )((unsigned char )(llvm_cbe_tmp__958 | llvm_cbe_tmp__953));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__959);
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%51, i8* %%48, align 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2409_count);
  *llvm_cbe_tmp__956 = llvm_cbe_tmp__959;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__959);
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = lshr i32 %%16, 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2410_count);
  llvm_cbe_tmp__960 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__924&4294967295ull)) >> ((unsigned int )(4u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__960&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = trunc i32 %%52 to i8, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2411_count);
  llvm_cbe_tmp__961 = (unsigned char )((unsigned char )llvm_cbe_tmp__960&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__961);
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = add i32 %%23, 5, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2412_count);
  llvm_cbe_tmp__962 = (unsigned int )((unsigned int )(llvm_cbe_tmp__931&4294967295ull)) + ((unsigned int )(5u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__962&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = zext i32 %%54 to i64, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2413_count);
  llvm_cbe_tmp__963 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__962&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__963);
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = getelementptr inbounds i8* %%r, i64 %%55, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2414_count);
  llvm_cbe_tmp__964 = ( char *)(&llvm_cbe_r[(((signed long long )llvm_cbe_tmp__963))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__963));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%53, i8* %%56, align 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2415_count);
  *llvm_cbe_tmp__964 = llvm_cbe_tmp__961;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__961);
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = lshr i32 %%16, 12, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2416_count);
  llvm_cbe_tmp__965 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__924&4294967295ull)) >> ((unsigned int )(12u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__965&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = trunc i32 %%57 to i8, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2417_count);
  llvm_cbe_tmp__966 = (unsigned char )((unsigned char )llvm_cbe_tmp__965&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__966);
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = add i32 %%23, 6, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2418_count);
  llvm_cbe_tmp__967 = (unsigned int )((unsigned int )(llvm_cbe_tmp__931&4294967295ull)) + ((unsigned int )(6u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__967&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = zext i32 %%59 to i64, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2419_count);
  llvm_cbe_tmp__968 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__967&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__968);
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = getelementptr inbounds i8* %%r, i64 %%60, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2420_count);
  llvm_cbe_tmp__969 = ( char *)(&llvm_cbe_r[(((signed long long )llvm_cbe_tmp__968))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__968));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = trunc i32 %%21 to i8, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2421_count);
  llvm_cbe_tmp__970 = (unsigned char )((unsigned char )llvm_cbe_tmp__929&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__970);
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = shl i8 %%62, 6, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2422_count);
  llvm_cbe_tmp__971 = (unsigned char )((unsigned char )(llvm_cbe_tmp__970 << ((unsigned char )6)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__971);
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = or i8 %%63, %%58, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2423_count);
  llvm_cbe_tmp__972 = (unsigned char )((unsigned char )(llvm_cbe_tmp__971 | llvm_cbe_tmp__966));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__972);
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%64, i8* %%61, align 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2424_count);
  *llvm_cbe_tmp__969 = llvm_cbe_tmp__972;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__972);
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = lshr i32 %%21, 2, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2425_count);
  llvm_cbe_tmp__973 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__929&4294967295ull)) >> ((unsigned int )(2u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__973&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = trunc i32 %%65 to i8, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2426_count);
  llvm_cbe_tmp__974 = (unsigned char )((unsigned char )llvm_cbe_tmp__973&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__974);
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = add i32 %%23, 7, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2427_count);
  llvm_cbe_tmp__975 = (unsigned int )((unsigned int )(llvm_cbe_tmp__931&4294967295ull)) + ((unsigned int )(7u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__975&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = zext i32 %%67 to i64, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2428_count);
  llvm_cbe_tmp__976 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__975&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__976);
if (AESL_DEBUG_TRACE)
printf("\n  %%69 = getelementptr inbounds i8* %%r, i64 %%68, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2429_count);
  llvm_cbe_tmp__977 = ( char *)(&llvm_cbe_r[(((signed long long )llvm_cbe_tmp__976))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__976));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%66, i8* %%69, align 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2430_count);
  *llvm_cbe_tmp__977 = llvm_cbe_tmp__974;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__974);
if (AESL_DEBUG_TRACE)
printf("\n  %%70 = lshr i32 %%21, 10, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2431_count);
  llvm_cbe_tmp__978 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__929&4294967295ull)) >> ((unsigned int )(10u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__978&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%71 = trunc i32 %%70 to i8, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2432_count);
  llvm_cbe_tmp__979 = (unsigned char )((unsigned char )llvm_cbe_tmp__978&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__979);
if (AESL_DEBUG_TRACE)
printf("\n  %%72 = add i32 %%23, 8, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2433_count);
  llvm_cbe_tmp__980 = (unsigned int )((unsigned int )(llvm_cbe_tmp__931&4294967295ull)) + ((unsigned int )(8u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__980&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%73 = zext i32 %%72 to i64, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2434_count);
  llvm_cbe_tmp__981 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__980&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__981);
if (AESL_DEBUG_TRACE)
printf("\n  %%74 = getelementptr inbounds i8* %%r, i64 %%73, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2435_count);
  llvm_cbe_tmp__982 = ( char *)(&llvm_cbe_r[(((signed long long )llvm_cbe_tmp__981))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__981));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%71, i8* %%74, align 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2436_count);
  *llvm_cbe_tmp__982 = llvm_cbe_tmp__979;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__979);
if (AESL_DEBUG_TRACE)
printf("\n  %%75 = add i32 %%storemerge1, 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyz_pack  --> \n", ++aesl_llvm_cbe_2437_count);
  llvm_cbe_tmp__983 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__983&4294967295ull)));
  if (((llvm_cbe_tmp__983&4294967295U) == (64u&4294967295U))) {
    goto llvm_cbe_tmp__985;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__983;   /* for PHI node */
    goto llvm_cbe_tmp__984;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__985:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_polyz_pack}\n");
  return;
}


void pqcrystals_dilithium2_ref_polyw1_pack( char *llvm_cbe_r, l_struct_OC_poly *llvm_cbe_a) {
  static  unsigned long long aesl_llvm_cbe_2459_count = 0;
  static  unsigned long long aesl_llvm_cbe_2460_count = 0;
  static  unsigned long long aesl_llvm_cbe_2461_count = 0;
  static  unsigned long long aesl_llvm_cbe_2462_count = 0;
  static  unsigned long long aesl_llvm_cbe_2463_count = 0;
  static  unsigned long long aesl_llvm_cbe_2464_count = 0;
  static  unsigned long long aesl_llvm_cbe_2465_count = 0;
  static  unsigned long long aesl_llvm_cbe_2466_count = 0;
  static  unsigned long long aesl_llvm_cbe_2467_count = 0;
  static  unsigned long long aesl_llvm_cbe_2468_count = 0;
  static  unsigned long long aesl_llvm_cbe_2469_count = 0;
  static  unsigned long long aesl_llvm_cbe_2470_count = 0;
  static  unsigned long long aesl_llvm_cbe_2471_count = 0;
  static  unsigned long long aesl_llvm_cbe_2472_count = 0;
  static  unsigned long long aesl_llvm_cbe_2473_count = 0;
  static  unsigned long long aesl_llvm_cbe_2474_count = 0;
  static  unsigned long long aesl_llvm_cbe_2475_count = 0;
  static  unsigned long long aesl_llvm_cbe_2476_count = 0;
  static  unsigned long long aesl_llvm_cbe_2477_count = 0;
  static  unsigned long long aesl_llvm_cbe_2478_count = 0;
  static  unsigned long long aesl_llvm_cbe_2479_count = 0;
  static  unsigned long long aesl_llvm_cbe_2480_count = 0;
  static  unsigned long long aesl_llvm_cbe_2481_count = 0;
  static  unsigned long long aesl_llvm_cbe_2482_count = 0;
  static  unsigned long long aesl_llvm_cbe_2483_count = 0;
  static  unsigned long long aesl_llvm_cbe_2484_count = 0;
  static  unsigned long long aesl_llvm_cbe_2485_count = 0;
  static  unsigned long long aesl_llvm_cbe_2486_count = 0;
  static  unsigned long long aesl_llvm_cbe_2487_count = 0;
  static  unsigned long long aesl_llvm_cbe_2488_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  unsigned int llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2489_count = 0;
  unsigned int llvm_cbe_tmp__986;
  static  unsigned long long aesl_llvm_cbe_2490_count = 0;
  unsigned long long llvm_cbe_tmp__987;
  static  unsigned long long aesl_llvm_cbe_2491_count = 0;
  signed int *llvm_cbe_tmp__988;
  static  unsigned long long aesl_llvm_cbe_2492_count = 0;
  unsigned int llvm_cbe_tmp__989;
  static  unsigned long long aesl_llvm_cbe_2493_count = 0;
  unsigned char llvm_cbe_tmp__990;
  static  unsigned long long aesl_llvm_cbe_2494_count = 0;
  unsigned int llvm_cbe_tmp__991;
  static  unsigned long long aesl_llvm_cbe_2495_count = 0;
  unsigned long long llvm_cbe_tmp__992;
  static  unsigned long long aesl_llvm_cbe_2496_count = 0;
   char *llvm_cbe_tmp__993;
  static  unsigned long long aesl_llvm_cbe_2497_count = 0;
  static  unsigned long long aesl_llvm_cbe_2498_count = 0;
  unsigned int llvm_cbe_tmp__994;
  static  unsigned long long aesl_llvm_cbe_2499_count = 0;
  unsigned long long llvm_cbe_tmp__995;
  static  unsigned long long aesl_llvm_cbe_2500_count = 0;
  signed int *llvm_cbe_tmp__996;
  static  unsigned long long aesl_llvm_cbe_2501_count = 0;
  unsigned int llvm_cbe_tmp__997;
  static  unsigned long long aesl_llvm_cbe_2502_count = 0;
  unsigned char llvm_cbe_tmp__998;
  static  unsigned long long aesl_llvm_cbe_2503_count = 0;
  unsigned char llvm_cbe_tmp__999;
  static  unsigned long long aesl_llvm_cbe_2504_count = 0;
  unsigned char llvm_cbe_tmp__1000;
  static  unsigned long long aesl_llvm_cbe_2505_count = 0;
  static  unsigned long long aesl_llvm_cbe_2506_count = 0;
  unsigned int llvm_cbe_tmp__1001;
  static  unsigned long long aesl_llvm_cbe_2507_count = 0;
  unsigned int llvm_cbe_tmp__1002;
  static  unsigned long long aesl_llvm_cbe_2508_count = 0;
  unsigned char llvm_cbe_tmp__1003;
  static  unsigned long long aesl_llvm_cbe_2509_count = 0;
  unsigned int llvm_cbe_tmp__1004;
  static  unsigned long long aesl_llvm_cbe_2510_count = 0;
  unsigned long long llvm_cbe_tmp__1005;
  static  unsigned long long aesl_llvm_cbe_2511_count = 0;
   char *llvm_cbe_tmp__1006;
  static  unsigned long long aesl_llvm_cbe_2512_count = 0;
  static  unsigned long long aesl_llvm_cbe_2513_count = 0;
  unsigned int llvm_cbe_tmp__1007;
  static  unsigned long long aesl_llvm_cbe_2514_count = 0;
  unsigned long long llvm_cbe_tmp__1008;
  static  unsigned long long aesl_llvm_cbe_2515_count = 0;
  signed int *llvm_cbe_tmp__1009;
  static  unsigned long long aesl_llvm_cbe_2516_count = 0;
  unsigned int llvm_cbe_tmp__1010;
  static  unsigned long long aesl_llvm_cbe_2517_count = 0;
  unsigned char llvm_cbe_tmp__1011;
  static  unsigned long long aesl_llvm_cbe_2518_count = 0;
  unsigned char llvm_cbe_tmp__1012;
  static  unsigned long long aesl_llvm_cbe_2519_count = 0;
  unsigned char llvm_cbe_tmp__1013;
  static  unsigned long long aesl_llvm_cbe_2520_count = 0;
  static  unsigned long long aesl_llvm_cbe_2521_count = 0;
  unsigned int llvm_cbe_tmp__1014;
  static  unsigned long long aesl_llvm_cbe_2522_count = 0;
  unsigned int llvm_cbe_tmp__1015;
  static  unsigned long long aesl_llvm_cbe_2523_count = 0;
  unsigned char llvm_cbe_tmp__1016;
  static  unsigned long long aesl_llvm_cbe_2524_count = 0;
  unsigned int llvm_cbe_tmp__1017;
  static  unsigned long long aesl_llvm_cbe_2525_count = 0;
  unsigned long long llvm_cbe_tmp__1018;
  static  unsigned long long aesl_llvm_cbe_2526_count = 0;
   char *llvm_cbe_tmp__1019;
  static  unsigned long long aesl_llvm_cbe_2527_count = 0;
  static  unsigned long long aesl_llvm_cbe_2528_count = 0;
  unsigned int llvm_cbe_tmp__1020;
  static  unsigned long long aesl_llvm_cbe_2529_count = 0;
  unsigned long long llvm_cbe_tmp__1021;
  static  unsigned long long aesl_llvm_cbe_2530_count = 0;
  signed int *llvm_cbe_tmp__1022;
  static  unsigned long long aesl_llvm_cbe_2531_count = 0;
  unsigned int llvm_cbe_tmp__1023;
  static  unsigned long long aesl_llvm_cbe_2532_count = 0;
  unsigned char llvm_cbe_tmp__1024;
  static  unsigned long long aesl_llvm_cbe_2533_count = 0;
  unsigned char llvm_cbe_tmp__1025;
  static  unsigned long long aesl_llvm_cbe_2534_count = 0;
  unsigned char llvm_cbe_tmp__1026;
  static  unsigned long long aesl_llvm_cbe_2535_count = 0;
  static  unsigned long long aesl_llvm_cbe_2536_count = 0;
  unsigned int llvm_cbe_tmp__1027;
  static  unsigned long long aesl_llvm_cbe_2537_count = 0;
  static  unsigned long long aesl_llvm_cbe_2538_count = 0;
  static  unsigned long long aesl_llvm_cbe_2539_count = 0;
  static  unsigned long long aesl_llvm_cbe_2540_count = 0;
  static  unsigned long long aesl_llvm_cbe_2541_count = 0;
  static  unsigned long long aesl_llvm_cbe_2542_count = 0;
  static  unsigned long long aesl_llvm_cbe_2543_count = 0;
  static  unsigned long long aesl_llvm_cbe_2544_count = 0;
  static  unsigned long long aesl_llvm_cbe_2545_count = 0;
  static  unsigned long long aesl_llvm_cbe_2546_count = 0;
  static  unsigned long long aesl_llvm_cbe_2547_count = 0;
  static  unsigned long long aesl_llvm_cbe_2548_count = 0;
  static  unsigned long long aesl_llvm_cbe_2549_count = 0;
  static  unsigned long long aesl_llvm_cbe_2550_count = 0;
  static  unsigned long long aesl_llvm_cbe_2551_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_2552_count = 0;
  static  unsigned long long aesl_llvm_cbe_2553_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_polyw1_pack\n");
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__1028;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__1028:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i32 [ 0, %%0 ], [ %%43, %%1  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__1027);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = shl i32 %%storemerge1, 2, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_2489_count);
  llvm_cbe_tmp__986 = (unsigned int )llvm_cbe_storemerge1 << 2u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__986);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = zext i32 %%2 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_2490_count);
  llvm_cbe_tmp__987 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__986&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__987);
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%3, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_2491_count);
  llvm_cbe_tmp__988 = (signed int *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__987))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__987));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = load i32* %%4, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_2492_count);
  llvm_cbe_tmp__989 = (unsigned int )*llvm_cbe_tmp__988;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__989);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = trunc i32 %%5 to i8, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_2493_count);
  llvm_cbe_tmp__990 = (unsigned char )((unsigned char )llvm_cbe_tmp__989&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__990);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = mul i32 %%storemerge1, 3, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_2494_count);
  llvm_cbe_tmp__991 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) * ((unsigned int )(3u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__991&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = zext i32 %%7 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_2495_count);
  llvm_cbe_tmp__992 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__991&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__992);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds i8* %%r, i64 %%8, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_2496_count);
  llvm_cbe_tmp__993 = ( char *)(&llvm_cbe_r[(((signed long long )llvm_cbe_tmp__992))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__992));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%6, i8* %%9, align 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_2497_count);
  *llvm_cbe_tmp__993 = llvm_cbe_tmp__990;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__990);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = or i32 %%2, 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_2498_count);
  llvm_cbe_tmp__994 = (unsigned int )llvm_cbe_tmp__986 | 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__994);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = zext i32 %%10 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_2499_count);
  llvm_cbe_tmp__995 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__994&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__995);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%11, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_2500_count);
  llvm_cbe_tmp__996 = (signed int *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__995))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__995));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = load i32* %%12, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_2501_count);
  llvm_cbe_tmp__997 = (unsigned int )*llvm_cbe_tmp__996;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__997);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = trunc i32 %%13 to i8, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_2502_count);
  llvm_cbe_tmp__998 = (unsigned char )((unsigned char )llvm_cbe_tmp__997&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__998);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = shl i8 %%14, 6, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_2503_count);
  llvm_cbe_tmp__999 = (unsigned char )((unsigned char )(llvm_cbe_tmp__998 << ((unsigned char )6)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__999);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = or i8 %%15, %%6, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_2504_count);
  llvm_cbe_tmp__1000 = (unsigned char )((unsigned char )(llvm_cbe_tmp__999 | llvm_cbe_tmp__990));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__1000);
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%16, i8* %%9, align 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_2505_count);
  *llvm_cbe_tmp__993 = llvm_cbe_tmp__1000;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__1000);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = load i32* %%12, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_2506_count);
  llvm_cbe_tmp__1001 = (unsigned int )*llvm_cbe_tmp__996;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__1001);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = lshr i32 %%17, 2, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_2507_count);
  llvm_cbe_tmp__1002 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__1001&4294967295ull)) >> ((unsigned int )(2u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__1002&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = trunc i32 %%18 to i8, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_2508_count);
  llvm_cbe_tmp__1003 = (unsigned char )((unsigned char )llvm_cbe_tmp__1002&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__1003);
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = add i32 %%7, 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_2509_count);
  llvm_cbe_tmp__1004 = (unsigned int )((unsigned int )(llvm_cbe_tmp__991&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__1004&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = zext i32 %%20 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_2510_count);
  llvm_cbe_tmp__1005 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__1004&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__1005);
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = getelementptr inbounds i8* %%r, i64 %%21, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_2511_count);
  llvm_cbe_tmp__1006 = ( char *)(&llvm_cbe_r[(((signed long long )llvm_cbe_tmp__1005))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__1005));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%19, i8* %%22, align 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_2512_count);
  *llvm_cbe_tmp__1006 = llvm_cbe_tmp__1003;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__1003);
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = or i32 %%2, 2, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_2513_count);
  llvm_cbe_tmp__1007 = (unsigned int )llvm_cbe_tmp__986 | 2u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__1007);
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = zext i32 %%23 to i64, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_2514_count);
  llvm_cbe_tmp__1008 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__1007&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__1008);
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%24, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_2515_count);
  llvm_cbe_tmp__1009 = (signed int *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__1008))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__1008));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = load i32* %%25, align 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_2516_count);
  llvm_cbe_tmp__1010 = (unsigned int )*llvm_cbe_tmp__1009;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__1010);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = trunc i32 %%26 to i8, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_2517_count);
  llvm_cbe_tmp__1011 = (unsigned char )((unsigned char )llvm_cbe_tmp__1010&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__1011);
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = shl i8 %%27, 4, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_2518_count);
  llvm_cbe_tmp__1012 = (unsigned char )((unsigned char )(llvm_cbe_tmp__1011 << ((unsigned char )4)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__1012);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = or i8 %%28, %%19, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_2519_count);
  llvm_cbe_tmp__1013 = (unsigned char )((unsigned char )(llvm_cbe_tmp__1012 | llvm_cbe_tmp__1003));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__1013);
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%29, i8* %%22, align 1, !dbg !14 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_2520_count);
  *llvm_cbe_tmp__1006 = llvm_cbe_tmp__1013;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__1013);
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = load i32* %%25, align 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_2521_count);
  llvm_cbe_tmp__1014 = (unsigned int )*llvm_cbe_tmp__1009;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__1014);
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = lshr i32 %%30, 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_2522_count);
  llvm_cbe_tmp__1015 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__1014&4294967295ull)) >> ((unsigned int )(4u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__1015&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = trunc i32 %%31 to i8, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_2523_count);
  llvm_cbe_tmp__1016 = (unsigned char )((unsigned char )llvm_cbe_tmp__1015&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__1016);
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = add i32 %%7, 2, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_2524_count);
  llvm_cbe_tmp__1017 = (unsigned int )((unsigned int )(llvm_cbe_tmp__991&4294967295ull)) + ((unsigned int )(2u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__1017&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = zext i32 %%33 to i64, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_2525_count);
  llvm_cbe_tmp__1018 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__1017&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__1018);
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = getelementptr inbounds i8* %%r, i64 %%34, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_2526_count);
  llvm_cbe_tmp__1019 = ( char *)(&llvm_cbe_r[(((signed long long )llvm_cbe_tmp__1018))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__1018));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%32, i8* %%35, align 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_2527_count);
  *llvm_cbe_tmp__1019 = llvm_cbe_tmp__1016;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__1016);
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = or i32 %%2, 3, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_2528_count);
  llvm_cbe_tmp__1020 = (unsigned int )llvm_cbe_tmp__986 | 3u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__1020);
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = zext i32 %%36 to i64, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_2529_count);
  llvm_cbe_tmp__1021 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__1020&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__1021);
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%37, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_2530_count);
  llvm_cbe_tmp__1022 = (signed int *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__1021))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__1021));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = load i32* %%38, align 4, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_2531_count);
  llvm_cbe_tmp__1023 = (unsigned int )*llvm_cbe_tmp__1022;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__1023);
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = trunc i32 %%39 to i8, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_2532_count);
  llvm_cbe_tmp__1024 = (unsigned char )((unsigned char )llvm_cbe_tmp__1023&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__1024);
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = shl i8 %%40, 2, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_2533_count);
  llvm_cbe_tmp__1025 = (unsigned char )((unsigned char )(llvm_cbe_tmp__1024 << ((unsigned char )2)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__1025);
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = or i8 %%41, %%32, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_2534_count);
  llvm_cbe_tmp__1026 = (unsigned char )((unsigned char )(llvm_cbe_tmp__1025 | llvm_cbe_tmp__1016));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__1026);
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%42, i8* %%35, align 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_2535_count);
  *llvm_cbe_tmp__1019 = llvm_cbe_tmp__1026;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__1026);
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = add i32 %%storemerge1, 1, !dbg !15 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyw1_pack  --> \n", ++aesl_llvm_cbe_2536_count);
  llvm_cbe_tmp__1027 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__1027&4294967295ull)));
  if (((llvm_cbe_tmp__1027&4294967295U) == (64u&4294967295U))) {
    goto llvm_cbe_tmp__1029;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__1027;   /* for PHI node */
    goto llvm_cbe_tmp__1028;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__1029:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_polyw1_pack}\n");
  return;
}

