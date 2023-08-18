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
typedef struct l_struct_OC_polyveck l_struct_OC_polyveck;
typedef struct l_struct_OC_poly l_struct_OC_poly;

/* Structure contents */
struct l_struct_OC_poly {
  signed int field0[256];
};

struct l_struct_OC_polyveck {
  l_struct_OC_poly field0[4];
};


/* Function Declarations */
double fmod(double, double);
float fmodf(float, float);
long double fmodl(long double, long double);
void pqcrystals_dilithium2_ref_pack_pk( char *llvm_cbe_pk,  char *llvm_cbe_rho, l_struct_OC_polyveck *llvm_cbe_t1);
void pqcrystals_dilithium2_ref_polyt1_pack( char *, l_struct_OC_poly *);
void pqcrystals_dilithium2_ref_unpack_pk( char *llvm_cbe_rho, l_struct_OC_polyveck *llvm_cbe_t1,  char *llvm_cbe_pk);
void pqcrystals_dilithium2_ref_polyt1_unpack(l_struct_OC_poly *,  char *);
void pqcrystals_dilithium2_ref_pack_sk( char *llvm_cbe_sk,  char *llvm_cbe_rho,  char *llvm_cbe_tr,  char *llvm_cbe_key, l_struct_OC_polyveck *llvm_cbe_t0, l_struct_OC_polyveck *llvm_cbe_s1, l_struct_OC_polyveck *llvm_cbe_s2);
void pqcrystals_dilithium2_ref_polyeta_pack( char *, l_struct_OC_poly *);
void pqcrystals_dilithium2_ref_polyt0_pack( char *, l_struct_OC_poly *);
void pqcrystals_dilithium2_ref_upack_sk( char *llvm_cbe_rho,  char *llvm_cbe_tr,  char *llvm_cbe_key, l_struct_OC_polyveck *llvm_cbe_t0, l_struct_OC_polyveck *llvm_cbe_s1, l_struct_OC_polyveck *llvm_cbe_s2,  char *llvm_cbe_sk);
void pqcrystals_dilithium2_ref_polyeta_unpack(l_struct_OC_poly *,  char *);
void pqcrystals_dilithium2_ref_polyt0_unpack(l_struct_OC_poly *,  char *);
void pqcrystals_dilithium2_ref_pack_sig( char *llvm_cbe_sig,  char *llvm_cbe_c, l_struct_OC_polyveck *llvm_cbe_z, l_struct_OC_polyveck *llvm_cbe_h);
void pqcrystals_dilithium2_ref_polyz_pack( char *, l_struct_OC_poly *);
signed int pqcrystals_dilithium2_ref_unpack_sig( char *llvm_cbe_c, l_struct_OC_polyveck *llvm_cbe_z, l_struct_OC_polyveck *llvm_cbe_h,  char *llvm_cbe_sig);
void pqcrystals_dilithium2_ref_polyz_unpack(l_struct_OC_poly *,  char *);


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

void pqcrystals_dilithium2_ref_pack_pk( char *llvm_cbe_pk,  char *llvm_cbe_rho, l_struct_OC_polyveck *llvm_cbe_t1) {
  static  unsigned long long aesl_llvm_cbe_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_3_count = 0;
  static  unsigned long long aesl_llvm_cbe_4_count = 0;
  static  unsigned long long aesl_llvm_cbe_5_count = 0;
  static  unsigned long long aesl_llvm_cbe_6_count = 0;
  static  unsigned long long aesl_llvm_cbe_7_count = 0;
  static  unsigned long long aesl_llvm_cbe_8_count = 0;
  static  unsigned long long aesl_llvm_cbe_9_count = 0;
  static  unsigned long long aesl_llvm_cbe_10_count = 0;
  static  unsigned long long aesl_llvm_cbe_11_count = 0;
  static  unsigned long long aesl_llvm_cbe_12_count = 0;
  static  unsigned long long aesl_llvm_cbe_13_count = 0;
  static  unsigned long long aesl_llvm_cbe_14_count = 0;
  static  unsigned long long aesl_llvm_cbe_15_count = 0;
  static  unsigned long long aesl_llvm_cbe_16_count = 0;
  static  unsigned long long aesl_llvm_cbe_17_count = 0;
  static  unsigned long long aesl_llvm_cbe_18_count = 0;
  static  unsigned long long aesl_llvm_cbe_19_count = 0;
  static  unsigned long long aesl_llvm_cbe_20_count = 0;
  static  unsigned long long aesl_llvm_cbe_21_count = 0;
  static  unsigned long long aesl_llvm_cbe_22_count = 0;
  static  unsigned long long aesl_llvm_cbe_23_count = 0;
  static  unsigned long long aesl_llvm_cbe_24_count = 0;
  static  unsigned long long aesl_llvm_cbe_25_count = 0;
  static  unsigned long long aesl_llvm_cbe_26_count = 0;
  static  unsigned long long aesl_llvm_cbe_27_count = 0;
   char *llvm_cbe_tmp__1;
  static  unsigned long long aesl_llvm_cbe_28_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__2;
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
   char *llvm_cbe_tmp__3;
  static  unsigned long long aesl_llvm_cbe_40_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_41_count = 0;
  static  unsigned long long aesl_llvm_cbe_42_count = 0;
  static  unsigned long long aesl_llvm_cbe_43_count = 0;
  static  unsigned long long aesl_llvm_cbe_44_count = 0;
  static  unsigned long long aesl_llvm_cbe_45_count = 0;
  static  unsigned long long aesl_llvm_cbe_46_count = 0;
  static  unsigned long long aesl_llvm_cbe_47_count = 0;
  static  unsigned long long aesl_llvm_cbe_48_count = 0;
  static  unsigned long long aesl_llvm_cbe_49_count = 0;
  static  unsigned long long aesl_llvm_cbe_50_count = 0;
  static  unsigned long long aesl_llvm_cbe_51_count = 0;
   char *llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_52_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__6;
  static  unsigned long long aesl_llvm_cbe_53_count = 0;
  static  unsigned long long aesl_llvm_cbe_54_count = 0;
  static  unsigned long long aesl_llvm_cbe_55_count = 0;
  static  unsigned long long aesl_llvm_cbe_56_count = 0;
  static  unsigned long long aesl_llvm_cbe_57_count = 0;
  static  unsigned long long aesl_llvm_cbe_58_count = 0;
  static  unsigned long long aesl_llvm_cbe_59_count = 0;
  static  unsigned long long aesl_llvm_cbe_60_count = 0;
  static  unsigned long long aesl_llvm_cbe_61_count = 0;
  static  unsigned long long aesl_llvm_cbe_62_count = 0;
  static  unsigned long long aesl_llvm_cbe_63_count = 0;
   char *llvm_cbe_tmp__7;
  static  unsigned long long aesl_llvm_cbe_64_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_65_count = 0;
  static  unsigned long long aesl_llvm_cbe_66_count = 0;
  static  unsigned long long aesl_llvm_cbe_67_count = 0;
  static  unsigned long long aesl_llvm_cbe_68_count = 0;
  static  unsigned long long aesl_llvm_cbe_69_count = 0;
  static  unsigned long long aesl_llvm_cbe_70_count = 0;
  static  unsigned long long aesl_llvm_cbe_71_count = 0;
  static  unsigned long long aesl_llvm_cbe_72_count = 0;
  static  unsigned long long aesl_llvm_cbe_73_count = 0;
  static  unsigned long long aesl_llvm_cbe_74_count = 0;
  static  unsigned long long aesl_llvm_cbe_75_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge4_count = 0;
  unsigned int llvm_cbe_storemerge4;
  unsigned int llvm_cbe_storemerge4__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_76_count = 0;
  unsigned long long llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_77_count = 0;
   char *llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_78_count = 0;
  unsigned char llvm_cbe_tmp__11;
  static  unsigned long long aesl_llvm_cbe_79_count = 0;
   char *llvm_cbe_tmp__12;
  static  unsigned long long aesl_llvm_cbe_80_count = 0;
  static  unsigned long long aesl_llvm_cbe_81_count = 0;
  unsigned int llvm_cbe_tmp__13;
  static  unsigned long long aesl_llvm_cbe_82_count = 0;
  static  unsigned long long aesl_llvm_cbe_83_count = 0;
  static  unsigned long long aesl_llvm_cbe_84_count = 0;
  static  unsigned long long aesl_llvm_cbe_85_count = 0;
  static  unsigned long long aesl_llvm_cbe_86_count = 0;
  static  unsigned long long aesl_llvm_cbe_87_count = 0;
  static  unsigned long long aesl_llvm_cbe_88_count = 0;
  static  unsigned long long aesl_llvm_cbe_89_count = 0;
  static  unsigned long long aesl_llvm_cbe_90_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_91_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_pack_pk\n");
  llvm_cbe_storemerge4__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__14;

llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds i8* %%pk, i64 32, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_pk  --> \n", ++aesl_llvm_cbe_27_count);
  llvm_cbe_tmp__1 = ( char *)(&llvm_cbe_pk[(((signed long long )32ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds %%struct.polyveck* %%t1, i64 0, i32 0, i64 0, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_pk  --> \n", ++aesl_llvm_cbe_28_count);
  llvm_cbe_tmp__2 = (l_struct_OC_poly *)(&llvm_cbe_t1->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_polyt1_pack(i8* %%1, %%struct.poly* %%2) nounwind, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_pk  --> \n", ++aesl_llvm_cbe_29_count);
   /*tail*/ pqcrystals_dilithium2_ref_polyt1_pack(( char *)llvm_cbe_tmp__1, (l_struct_OC_poly *)llvm_cbe_tmp__2);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds i8* %%pk, i64 352, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_pk  --> \n", ++aesl_llvm_cbe_39_count);
  llvm_cbe_tmp__3 = ( char *)(&llvm_cbe_pk[(((signed long long )352ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds %%struct.polyveck* %%t1, i64 0, i32 0, i64 1, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_pk  --> \n", ++aesl_llvm_cbe_40_count);
  llvm_cbe_tmp__4 = (l_struct_OC_poly *)(&llvm_cbe_t1->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_polyt1_pack(i8* %%3, %%struct.poly* %%4) nounwind, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_pk  --> \n", ++aesl_llvm_cbe_41_count);
   /*tail*/ pqcrystals_dilithium2_ref_polyt1_pack(( char *)llvm_cbe_tmp__3, (l_struct_OC_poly *)llvm_cbe_tmp__4);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds i8* %%pk, i64 672, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_pk  --> \n", ++aesl_llvm_cbe_51_count);
  llvm_cbe_tmp__5 = ( char *)(&llvm_cbe_pk[(((signed long long )672ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds %%struct.polyveck* %%t1, i64 0, i32 0, i64 2, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_pk  --> \n", ++aesl_llvm_cbe_52_count);
  llvm_cbe_tmp__6 = (l_struct_OC_poly *)(&llvm_cbe_t1->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_polyt1_pack(i8* %%5, %%struct.poly* %%6) nounwind, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_pk  --> \n", ++aesl_llvm_cbe_53_count);
   /*tail*/ pqcrystals_dilithium2_ref_polyt1_pack(( char *)llvm_cbe_tmp__5, (l_struct_OC_poly *)llvm_cbe_tmp__6);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds i8* %%pk, i64 992, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_pk  --> \n", ++aesl_llvm_cbe_63_count);
  llvm_cbe_tmp__7 = ( char *)(&llvm_cbe_pk[(((signed long long )992ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds %%struct.polyveck* %%t1, i64 0, i32 0, i64 3, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_pk  --> \n", ++aesl_llvm_cbe_64_count);
  llvm_cbe_tmp__8 = (l_struct_OC_poly *)(&llvm_cbe_t1->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_polyt1_pack(i8* %%7, %%struct.poly* %%8) nounwind, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_pk  --> \n", ++aesl_llvm_cbe_65_count);
   /*tail*/ pqcrystals_dilithium2_ref_polyt1_pack(( char *)llvm_cbe_tmp__7, (l_struct_OC_poly *)llvm_cbe_tmp__8);
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_pack_pk}\n");
  return;
  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__14:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge4 = phi i32 [ 0, %%0 ], [ %%14, %%9  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_pk  --> \n", ++aesl_llvm_cbe_storemerge4_count);
  llvm_cbe_storemerge4 = (unsigned int )llvm_cbe_storemerge4__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge4 = 0x%X",llvm_cbe_storemerge4);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__13);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = zext i32 %%storemerge4 to i64, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_pk  --> \n", ++aesl_llvm_cbe_76_count);
  llvm_cbe_tmp__9 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge4&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__9);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds i8* %%rho, i64 %%10, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_pk  --> \n", ++aesl_llvm_cbe_77_count);
  llvm_cbe_tmp__10 = ( char *)(&llvm_cbe_rho[(((signed long long )llvm_cbe_tmp__9))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__9));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = load i8* %%11, align 1, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_pk  --> \n", ++aesl_llvm_cbe_78_count);
  llvm_cbe_tmp__11 = (unsigned char )*llvm_cbe_tmp__10;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__11);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds i8* %%pk, i64 %%10, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_pk  --> \n", ++aesl_llvm_cbe_79_count);
  llvm_cbe_tmp__12 = ( char *)(&llvm_cbe_pk[(((signed long long )llvm_cbe_tmp__9))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__9));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%12, i8* %%13, align 1, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_pk  --> \n", ++aesl_llvm_cbe_80_count);
  *llvm_cbe_tmp__12 = llvm_cbe_tmp__11;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__11);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = add i32 %%storemerge4, 1, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_pk  --> \n", ++aesl_llvm_cbe_81_count);
  llvm_cbe_tmp__13 = (unsigned int )((unsigned int )(llvm_cbe_storemerge4&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__13&4294967295ull)));
  if (((llvm_cbe_tmp__13&4294967295U) == (32u&4294967295U))) {
    goto llvm_cbe__2e_preheader;
  } else {
    llvm_cbe_storemerge4__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__13;   /* for PHI node */
    goto llvm_cbe_tmp__14;
  }

  } while (1); /* end of syntactic loop '' */
}


void pqcrystals_dilithium2_ref_unpack_pk( char *llvm_cbe_rho, l_struct_OC_polyveck *llvm_cbe_t1,  char *llvm_cbe_pk) {
  static  unsigned long long aesl_llvm_cbe_92_count = 0;
  static  unsigned long long aesl_llvm_cbe_93_count = 0;
  static  unsigned long long aesl_llvm_cbe_94_count = 0;
  static  unsigned long long aesl_llvm_cbe_95_count = 0;
  static  unsigned long long aesl_llvm_cbe_96_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_110_count = 0;
  static  unsigned long long aesl_llvm_cbe_111_count = 0;
  static  unsigned long long aesl_llvm_cbe_112_count = 0;
  static  unsigned long long aesl_llvm_cbe_113_count = 0;
  static  unsigned long long aesl_llvm_cbe_114_count = 0;
  static  unsigned long long aesl_llvm_cbe_115_count = 0;
  static  unsigned long long aesl_llvm_cbe_116_count = 0;
  static  unsigned long long aesl_llvm_cbe_117_count = 0;
  static  unsigned long long aesl_llvm_cbe_118_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__15;
  static  unsigned long long aesl_llvm_cbe_119_count = 0;
   char *llvm_cbe_tmp__16;
  static  unsigned long long aesl_llvm_cbe_120_count = 0;
  static  unsigned long long aesl_llvm_cbe_121_count = 0;
  static  unsigned long long aesl_llvm_cbe_122_count = 0;
  static  unsigned long long aesl_llvm_cbe_123_count = 0;
  static  unsigned long long aesl_llvm_cbe_124_count = 0;
  static  unsigned long long aesl_llvm_cbe_125_count = 0;
  static  unsigned long long aesl_llvm_cbe_126_count = 0;
  static  unsigned long long aesl_llvm_cbe_127_count = 0;
  static  unsigned long long aesl_llvm_cbe_128_count = 0;
  static  unsigned long long aesl_llvm_cbe_129_count = 0;
  static  unsigned long long aesl_llvm_cbe_130_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__17;
  static  unsigned long long aesl_llvm_cbe_131_count = 0;
   char *llvm_cbe_tmp__18;
  static  unsigned long long aesl_llvm_cbe_132_count = 0;
  static  unsigned long long aesl_llvm_cbe_133_count = 0;
  static  unsigned long long aesl_llvm_cbe_134_count = 0;
  static  unsigned long long aesl_llvm_cbe_135_count = 0;
  static  unsigned long long aesl_llvm_cbe_136_count = 0;
  static  unsigned long long aesl_llvm_cbe_137_count = 0;
  static  unsigned long long aesl_llvm_cbe_138_count = 0;
  static  unsigned long long aesl_llvm_cbe_139_count = 0;
  static  unsigned long long aesl_llvm_cbe_140_count = 0;
  static  unsigned long long aesl_llvm_cbe_141_count = 0;
  static  unsigned long long aesl_llvm_cbe_142_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_143_count = 0;
   char *llvm_cbe_tmp__20;
  static  unsigned long long aesl_llvm_cbe_144_count = 0;
  static  unsigned long long aesl_llvm_cbe_145_count = 0;
  static  unsigned long long aesl_llvm_cbe_146_count = 0;
  static  unsigned long long aesl_llvm_cbe_147_count = 0;
  static  unsigned long long aesl_llvm_cbe_148_count = 0;
  static  unsigned long long aesl_llvm_cbe_149_count = 0;
  static  unsigned long long aesl_llvm_cbe_150_count = 0;
  static  unsigned long long aesl_llvm_cbe_151_count = 0;
  static  unsigned long long aesl_llvm_cbe_152_count = 0;
  static  unsigned long long aesl_llvm_cbe_153_count = 0;
  static  unsigned long long aesl_llvm_cbe_154_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__21;
  static  unsigned long long aesl_llvm_cbe_155_count = 0;
   char *llvm_cbe_tmp__22;
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
  static  unsigned long long aesl_llvm_cbe_storemerge4_count = 0;
  unsigned int llvm_cbe_storemerge4;
  unsigned int llvm_cbe_storemerge4__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_167_count = 0;
  unsigned long long llvm_cbe_tmp__23;
  static  unsigned long long aesl_llvm_cbe_168_count = 0;
   char *llvm_cbe_tmp__24;
  static  unsigned long long aesl_llvm_cbe_169_count = 0;
  unsigned char llvm_cbe_tmp__25;
  static  unsigned long long aesl_llvm_cbe_170_count = 0;
   char *llvm_cbe_tmp__26;
  static  unsigned long long aesl_llvm_cbe_171_count = 0;
  static  unsigned long long aesl_llvm_cbe_172_count = 0;
  unsigned int llvm_cbe_tmp__27;
  static  unsigned long long aesl_llvm_cbe_173_count = 0;
  static  unsigned long long aesl_llvm_cbe_174_count = 0;
  static  unsigned long long aesl_llvm_cbe_175_count = 0;
  static  unsigned long long aesl_llvm_cbe_176_count = 0;
  static  unsigned long long aesl_llvm_cbe_177_count = 0;
  static  unsigned long long aesl_llvm_cbe_178_count = 0;
  static  unsigned long long aesl_llvm_cbe_179_count = 0;
  static  unsigned long long aesl_llvm_cbe_180_count = 0;
  static  unsigned long long aesl_llvm_cbe_181_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_182_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_unpack_pk\n");
  llvm_cbe_storemerge4__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__28;

llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.polyveck* %%t1, i64 0, i32 0, i64 0, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_pk  --> \n", ++aesl_llvm_cbe_118_count);
  llvm_cbe_tmp__15 = (l_struct_OC_poly *)(&llvm_cbe_t1->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds i8* %%pk, i64 32, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_pk  --> \n", ++aesl_llvm_cbe_119_count);
  llvm_cbe_tmp__16 = ( char *)(&llvm_cbe_pk[(((signed long long )32ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_polyt1_unpack(%%struct.poly* %%1, i8* %%2) nounwind, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_pk  --> \n", ++aesl_llvm_cbe_120_count);
   /*tail*/ pqcrystals_dilithium2_ref_polyt1_unpack((l_struct_OC_poly *)llvm_cbe_tmp__15, ( char *)llvm_cbe_tmp__16);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.polyveck* %%t1, i64 0, i32 0, i64 1, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_pk  --> \n", ++aesl_llvm_cbe_130_count);
  llvm_cbe_tmp__17 = (l_struct_OC_poly *)(&llvm_cbe_t1->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds i8* %%pk, i64 352, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_pk  --> \n", ++aesl_llvm_cbe_131_count);
  llvm_cbe_tmp__18 = ( char *)(&llvm_cbe_pk[(((signed long long )352ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_polyt1_unpack(%%struct.poly* %%3, i8* %%4) nounwind, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_pk  --> \n", ++aesl_llvm_cbe_132_count);
   /*tail*/ pqcrystals_dilithium2_ref_polyt1_unpack((l_struct_OC_poly *)llvm_cbe_tmp__17, ( char *)llvm_cbe_tmp__18);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds %%struct.polyveck* %%t1, i64 0, i32 0, i64 2, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_pk  --> \n", ++aesl_llvm_cbe_142_count);
  llvm_cbe_tmp__19 = (l_struct_OC_poly *)(&llvm_cbe_t1->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds i8* %%pk, i64 672, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_pk  --> \n", ++aesl_llvm_cbe_143_count);
  llvm_cbe_tmp__20 = ( char *)(&llvm_cbe_pk[(((signed long long )672ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_polyt1_unpack(%%struct.poly* %%5, i8* %%6) nounwind, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_pk  --> \n", ++aesl_llvm_cbe_144_count);
   /*tail*/ pqcrystals_dilithium2_ref_polyt1_unpack((l_struct_OC_poly *)llvm_cbe_tmp__19, ( char *)llvm_cbe_tmp__20);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds %%struct.polyveck* %%t1, i64 0, i32 0, i64 3, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_pk  --> \n", ++aesl_llvm_cbe_154_count);
  llvm_cbe_tmp__21 = (l_struct_OC_poly *)(&llvm_cbe_t1->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds i8* %%pk, i64 992, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_pk  --> \n", ++aesl_llvm_cbe_155_count);
  llvm_cbe_tmp__22 = ( char *)(&llvm_cbe_pk[(((signed long long )992ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_polyt1_unpack(%%struct.poly* %%7, i8* %%8) nounwind, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_pk  --> \n", ++aesl_llvm_cbe_156_count);
   /*tail*/ pqcrystals_dilithium2_ref_polyt1_unpack((l_struct_OC_poly *)llvm_cbe_tmp__21, ( char *)llvm_cbe_tmp__22);
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_unpack_pk}\n");
  return;
  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__28:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge4 = phi i32 [ 0, %%0 ], [ %%14, %%9  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_pk  --> \n", ++aesl_llvm_cbe_storemerge4_count);
  llvm_cbe_storemerge4 = (unsigned int )llvm_cbe_storemerge4__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge4 = 0x%X",llvm_cbe_storemerge4);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__27);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = zext i32 %%storemerge4 to i64, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_pk  --> \n", ++aesl_llvm_cbe_167_count);
  llvm_cbe_tmp__23 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge4&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__23);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds i8* %%pk, i64 %%10, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_pk  --> \n", ++aesl_llvm_cbe_168_count);
  llvm_cbe_tmp__24 = ( char *)(&llvm_cbe_pk[(((signed long long )llvm_cbe_tmp__23))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__23));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = load i8* %%11, align 1, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_pk  --> \n", ++aesl_llvm_cbe_169_count);
  llvm_cbe_tmp__25 = (unsigned char )*llvm_cbe_tmp__24;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__25);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds i8* %%rho, i64 %%10, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_pk  --> \n", ++aesl_llvm_cbe_170_count);
  llvm_cbe_tmp__26 = ( char *)(&llvm_cbe_rho[(((signed long long )llvm_cbe_tmp__23))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__23));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%12, i8* %%13, align 1, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_pk  --> \n", ++aesl_llvm_cbe_171_count);
  *llvm_cbe_tmp__26 = llvm_cbe_tmp__25;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__25);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = add i32 %%storemerge4, 1, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_pk  --> \n", ++aesl_llvm_cbe_172_count);
  llvm_cbe_tmp__27 = (unsigned int )((unsigned int )(llvm_cbe_storemerge4&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__27&4294967295ull)));
  if (((llvm_cbe_tmp__27&4294967295U) == (32u&4294967295U))) {
    goto llvm_cbe__2e_preheader;
  } else {
    llvm_cbe_storemerge4__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__27;   /* for PHI node */
    goto llvm_cbe_tmp__28;
  }

  } while (1); /* end of syntactic loop '' */
}


void pqcrystals_dilithium2_ref_pack_sk( char *llvm_cbe_sk,  char *llvm_cbe_rho,  char *llvm_cbe_tr,  char *llvm_cbe_key, l_struct_OC_polyveck *llvm_cbe_t0, l_struct_OC_polyveck *llvm_cbe_s1, l_struct_OC_polyveck *llvm_cbe_s2) {
  static  unsigned long long aesl_llvm_cbe_183_count = 0;
  static  unsigned long long aesl_llvm_cbe_184_count = 0;
  static  unsigned long long aesl_llvm_cbe_185_count = 0;
  static  unsigned long long aesl_llvm_cbe_186_count = 0;
  static  unsigned long long aesl_llvm_cbe_187_count = 0;
  static  unsigned long long aesl_llvm_cbe_188_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_214_count = 0;
  static  unsigned long long aesl_llvm_cbe_215_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_231_count = 0;
  static  unsigned long long aesl_llvm_cbe_232_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge19_count = 0;
  unsigned int llvm_cbe_storemerge19;
  unsigned int llvm_cbe_storemerge19__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_233_count = 0;
  unsigned long long llvm_cbe_tmp__29;
  static  unsigned long long aesl_llvm_cbe_234_count = 0;
   char *llvm_cbe_tmp__30;
  static  unsigned long long aesl_llvm_cbe_235_count = 0;
  unsigned char llvm_cbe_tmp__31;
  static  unsigned long long aesl_llvm_cbe_236_count = 0;
   char *llvm_cbe_tmp__32;
  static  unsigned long long aesl_llvm_cbe_237_count = 0;
  static  unsigned long long aesl_llvm_cbe_238_count = 0;
  unsigned int llvm_cbe_tmp__33;
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
  static  unsigned long long aesl_llvm_cbe_exitcond21_count = 0;
  static  unsigned long long aesl_llvm_cbe_264_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge118_count = 0;
  unsigned int llvm_cbe_storemerge118;
  unsigned int llvm_cbe_storemerge118__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_265_count = 0;
  unsigned long long llvm_cbe_tmp__34;
  static  unsigned long long aesl_llvm_cbe_266_count = 0;
   char *llvm_cbe_tmp__35;
  static  unsigned long long aesl_llvm_cbe_267_count = 0;
  unsigned char llvm_cbe_tmp__36;
  static  unsigned long long aesl_llvm_cbe__2e_sum9_count = 0;
  unsigned long long llvm_cbe__2e_sum9;
  static  unsigned long long aesl_llvm_cbe_268_count = 0;
   char *llvm_cbe_tmp__37;
  static  unsigned long long aesl_llvm_cbe_269_count = 0;
  static  unsigned long long aesl_llvm_cbe_270_count = 0;
  unsigned int llvm_cbe_tmp__38;
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
  static  unsigned long long aesl_llvm_cbe_285_count = 0;
  static  unsigned long long aesl_llvm_cbe_286_count = 0;
  static  unsigned long long aesl_llvm_cbe_287_count = 0;
  static  unsigned long long aesl_llvm_cbe_288_count = 0;
  static  unsigned long long aesl_llvm_cbe_289_count = 0;
  static  unsigned long long aesl_llvm_cbe_290_count = 0;
  static  unsigned long long aesl_llvm_cbe_291_count = 0;
  static  unsigned long long aesl_llvm_cbe_292_count = 0;
  static  unsigned long long aesl_llvm_cbe_293_count = 0;
  static  unsigned long long aesl_llvm_cbe_294_count = 0;
  static  unsigned long long aesl_llvm_cbe_295_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond20_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_319_count = 0;
  static  unsigned long long aesl_llvm_cbe_320_count = 0;
  static  unsigned long long aesl_llvm_cbe_321_count = 0;
   char *llvm_cbe_tmp__39;
  static  unsigned long long aesl_llvm_cbe_322_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__40;
  static  unsigned long long aesl_llvm_cbe_323_count = 0;
  static  unsigned long long aesl_llvm_cbe_324_count = 0;
  static  unsigned long long aesl_llvm_cbe_325_count = 0;
  static  unsigned long long aesl_llvm_cbe_326_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_341_count = 0;
  static  unsigned long long aesl_llvm_cbe_342_count = 0;
  static  unsigned long long aesl_llvm_cbe_343_count = 0;
  static  unsigned long long aesl_llvm_cbe_344_count = 0;
  static  unsigned long long aesl_llvm_cbe_345_count = 0;
  static  unsigned long long aesl_llvm_cbe_346_count = 0;
  static  unsigned long long aesl_llvm_cbe_347_count = 0;
  static  unsigned long long aesl_llvm_cbe_348_count = 0;
  static  unsigned long long aesl_llvm_cbe_349_count = 0;
   char *llvm_cbe_tmp__41;
  static  unsigned long long aesl_llvm_cbe_350_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__42;
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
  static  unsigned long long aesl_llvm_cbe_367_count = 0;
  static  unsigned long long aesl_llvm_cbe_368_count = 0;
  static  unsigned long long aesl_llvm_cbe_369_count = 0;
  static  unsigned long long aesl_llvm_cbe_370_count = 0;
  static  unsigned long long aesl_llvm_cbe_371_count = 0;
  static  unsigned long long aesl_llvm_cbe_372_count = 0;
  static  unsigned long long aesl_llvm_cbe_373_count = 0;
  static  unsigned long long aesl_llvm_cbe_374_count = 0;
  static  unsigned long long aesl_llvm_cbe_375_count = 0;
  static  unsigned long long aesl_llvm_cbe_376_count = 0;
  static  unsigned long long aesl_llvm_cbe_377_count = 0;
   char *llvm_cbe_tmp__43;
  static  unsigned long long aesl_llvm_cbe_378_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__44;
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
  static  unsigned long long aesl_llvm_cbe_392_count = 0;
  static  unsigned long long aesl_llvm_cbe_393_count = 0;
  static  unsigned long long aesl_llvm_cbe_394_count = 0;
  static  unsigned long long aesl_llvm_cbe_395_count = 0;
  static  unsigned long long aesl_llvm_cbe_396_count = 0;
  static  unsigned long long aesl_llvm_cbe_397_count = 0;
  static  unsigned long long aesl_llvm_cbe_398_count = 0;
  static  unsigned long long aesl_llvm_cbe_399_count = 0;
  static  unsigned long long aesl_llvm_cbe_400_count = 0;
  static  unsigned long long aesl_llvm_cbe_401_count = 0;
  static  unsigned long long aesl_llvm_cbe_402_count = 0;
  static  unsigned long long aesl_llvm_cbe_403_count = 0;
  static  unsigned long long aesl_llvm_cbe_404_count = 0;
  static  unsigned long long aesl_llvm_cbe_405_count = 0;
   char *llvm_cbe_tmp__45;
  static  unsigned long long aesl_llvm_cbe_406_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__46;
  static  unsigned long long aesl_llvm_cbe_407_count = 0;
  static  unsigned long long aesl_llvm_cbe_408_count = 0;
  static  unsigned long long aesl_llvm_cbe_409_count = 0;
  static  unsigned long long aesl_llvm_cbe_410_count = 0;
  static  unsigned long long aesl_llvm_cbe_411_count = 0;
  static  unsigned long long aesl_llvm_cbe_412_count = 0;
  static  unsigned long long aesl_llvm_cbe_413_count = 0;
  static  unsigned long long aesl_llvm_cbe_414_count = 0;
  static  unsigned long long aesl_llvm_cbe_415_count = 0;
  static  unsigned long long aesl_llvm_cbe_416_count = 0;
  static  unsigned long long aesl_llvm_cbe_417_count = 0;
  static  unsigned long long aesl_llvm_cbe_418_count = 0;
  static  unsigned long long aesl_llvm_cbe_419_count = 0;
  static  unsigned long long aesl_llvm_cbe_420_count = 0;
  static  unsigned long long aesl_llvm_cbe_421_count = 0;
  static  unsigned long long aesl_llvm_cbe_422_count = 0;
  static  unsigned long long aesl_llvm_cbe_423_count = 0;
  static  unsigned long long aesl_llvm_cbe_424_count = 0;
  static  unsigned long long aesl_llvm_cbe_425_count = 0;
  static  unsigned long long aesl_llvm_cbe_426_count = 0;
  static  unsigned long long aesl_llvm_cbe_427_count = 0;
  static  unsigned long long aesl_llvm_cbe_428_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_450_count = 0;
  static  unsigned long long aesl_llvm_cbe_451_count = 0;
  static  unsigned long long aesl_llvm_cbe_452_count = 0;
  static  unsigned long long aesl_llvm_cbe_453_count = 0;
  static  unsigned long long aesl_llvm_cbe_454_count = 0;
  static  unsigned long long aesl_llvm_cbe_455_count = 0;
  static  unsigned long long aesl_llvm_cbe_456_count = 0;
  static  unsigned long long aesl_llvm_cbe_457_count = 0;
   char *llvm_cbe_tmp__47;
  static  unsigned long long aesl_llvm_cbe_458_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__48;
  static  unsigned long long aesl_llvm_cbe_459_count = 0;
  static  unsigned long long aesl_llvm_cbe_460_count = 0;
  static  unsigned long long aesl_llvm_cbe_461_count = 0;
  static  unsigned long long aesl_llvm_cbe_462_count = 0;
  static  unsigned long long aesl_llvm_cbe_463_count = 0;
  static  unsigned long long aesl_llvm_cbe_464_count = 0;
  static  unsigned long long aesl_llvm_cbe_465_count = 0;
  static  unsigned long long aesl_llvm_cbe_466_count = 0;
  static  unsigned long long aesl_llvm_cbe_467_count = 0;
  static  unsigned long long aesl_llvm_cbe_468_count = 0;
  static  unsigned long long aesl_llvm_cbe_469_count = 0;
  static  unsigned long long aesl_llvm_cbe_470_count = 0;
  static  unsigned long long aesl_llvm_cbe_471_count = 0;
  static  unsigned long long aesl_llvm_cbe_472_count = 0;
  static  unsigned long long aesl_llvm_cbe_473_count = 0;
  static  unsigned long long aesl_llvm_cbe_474_count = 0;
  static  unsigned long long aesl_llvm_cbe_475_count = 0;
  static  unsigned long long aesl_llvm_cbe_476_count = 0;
  static  unsigned long long aesl_llvm_cbe_477_count = 0;
  static  unsigned long long aesl_llvm_cbe_478_count = 0;
  static  unsigned long long aesl_llvm_cbe_479_count = 0;
  static  unsigned long long aesl_llvm_cbe_480_count = 0;
  static  unsigned long long aesl_llvm_cbe_481_count = 0;
  static  unsigned long long aesl_llvm_cbe_482_count = 0;
  static  unsigned long long aesl_llvm_cbe_483_count = 0;
  static  unsigned long long aesl_llvm_cbe_484_count = 0;
  static  unsigned long long aesl_llvm_cbe_485_count = 0;
   char *llvm_cbe_tmp__49;
  static  unsigned long long aesl_llvm_cbe_486_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__50;
  static  unsigned long long aesl_llvm_cbe_487_count = 0;
  static  unsigned long long aesl_llvm_cbe_488_count = 0;
  static  unsigned long long aesl_llvm_cbe_489_count = 0;
  static  unsigned long long aesl_llvm_cbe_490_count = 0;
  static  unsigned long long aesl_llvm_cbe_491_count = 0;
  static  unsigned long long aesl_llvm_cbe_492_count = 0;
  static  unsigned long long aesl_llvm_cbe_493_count = 0;
  static  unsigned long long aesl_llvm_cbe_494_count = 0;
  static  unsigned long long aesl_llvm_cbe_495_count = 0;
  static  unsigned long long aesl_llvm_cbe_496_count = 0;
  static  unsigned long long aesl_llvm_cbe_497_count = 0;
  static  unsigned long long aesl_llvm_cbe_498_count = 0;
  static  unsigned long long aesl_llvm_cbe_499_count = 0;
  static  unsigned long long aesl_llvm_cbe_500_count = 0;
  static  unsigned long long aesl_llvm_cbe_501_count = 0;
  static  unsigned long long aesl_llvm_cbe_502_count = 0;
  static  unsigned long long aesl_llvm_cbe_503_count = 0;
  static  unsigned long long aesl_llvm_cbe_504_count = 0;
  static  unsigned long long aesl_llvm_cbe_505_count = 0;
  static  unsigned long long aesl_llvm_cbe_506_count = 0;
  static  unsigned long long aesl_llvm_cbe_507_count = 0;
  static  unsigned long long aesl_llvm_cbe_508_count = 0;
  static  unsigned long long aesl_llvm_cbe_509_count = 0;
  static  unsigned long long aesl_llvm_cbe_510_count = 0;
  static  unsigned long long aesl_llvm_cbe_511_count = 0;
  static  unsigned long long aesl_llvm_cbe_512_count = 0;
  static  unsigned long long aesl_llvm_cbe_513_count = 0;
   char *llvm_cbe_tmp__51;
  static  unsigned long long aesl_llvm_cbe_514_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__52;
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
  static  unsigned long long aesl_llvm_cbe_527_count = 0;
  static  unsigned long long aesl_llvm_cbe_528_count = 0;
  static  unsigned long long aesl_llvm_cbe_529_count = 0;
  static  unsigned long long aesl_llvm_cbe_530_count = 0;
  static  unsigned long long aesl_llvm_cbe_531_count = 0;
  static  unsigned long long aesl_llvm_cbe_532_count = 0;
  static  unsigned long long aesl_llvm_cbe_533_count = 0;
  static  unsigned long long aesl_llvm_cbe_534_count = 0;
  static  unsigned long long aesl_llvm_cbe_535_count = 0;
  static  unsigned long long aesl_llvm_cbe_536_count = 0;
  static  unsigned long long aesl_llvm_cbe_537_count = 0;
  static  unsigned long long aesl_llvm_cbe_538_count = 0;
  static  unsigned long long aesl_llvm_cbe_539_count = 0;
  static  unsigned long long aesl_llvm_cbe_540_count = 0;
  static  unsigned long long aesl_llvm_cbe_541_count = 0;
   char *llvm_cbe_tmp__53;
  static  unsigned long long aesl_llvm_cbe_542_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__54;
  static  unsigned long long aesl_llvm_cbe_543_count = 0;
  static  unsigned long long aesl_llvm_cbe_544_count = 0;
  static  unsigned long long aesl_llvm_cbe_545_count = 0;
  static  unsigned long long aesl_llvm_cbe_546_count = 0;
  static  unsigned long long aesl_llvm_cbe_547_count = 0;
  static  unsigned long long aesl_llvm_cbe_548_count = 0;
  static  unsigned long long aesl_llvm_cbe_549_count = 0;
  static  unsigned long long aesl_llvm_cbe_550_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_574_count = 0;
  static  unsigned long long aesl_llvm_cbe_575_count = 0;
  static  unsigned long long aesl_llvm_cbe_576_count = 0;
  static  unsigned long long aesl_llvm_cbe_577_count = 0;
  static  unsigned long long aesl_llvm_cbe_578_count = 0;
  static  unsigned long long aesl_llvm_cbe_579_count = 0;
  static  unsigned long long aesl_llvm_cbe_580_count = 0;
  static  unsigned long long aesl_llvm_cbe_581_count = 0;
  static  unsigned long long aesl_llvm_cbe_582_count = 0;
  static  unsigned long long aesl_llvm_cbe_583_count = 0;
  static  unsigned long long aesl_llvm_cbe_584_count = 0;
  static  unsigned long long aesl_llvm_cbe_585_count = 0;
  static  unsigned long long aesl_llvm_cbe_586_count = 0;
  static  unsigned long long aesl_llvm_cbe_587_count = 0;
  static  unsigned long long aesl_llvm_cbe_588_count = 0;
  static  unsigned long long aesl_llvm_cbe_589_count = 0;
  static  unsigned long long aesl_llvm_cbe_590_count = 0;
  static  unsigned long long aesl_llvm_cbe_591_count = 0;
  static  unsigned long long aesl_llvm_cbe_592_count = 0;
  static  unsigned long long aesl_llvm_cbe_593_count = 0;
   char *llvm_cbe_tmp__55;
  static  unsigned long long aesl_llvm_cbe_594_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__56;
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
   char *llvm_cbe_tmp__57;
  static  unsigned long long aesl_llvm_cbe_622_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__58;
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
  static  unsigned long long aesl_llvm_cbe_644_count = 0;
  static  unsigned long long aesl_llvm_cbe_645_count = 0;
  static  unsigned long long aesl_llvm_cbe_646_count = 0;
  static  unsigned long long aesl_llvm_cbe_647_count = 0;
  static  unsigned long long aesl_llvm_cbe_648_count = 0;
  static  unsigned long long aesl_llvm_cbe_649_count = 0;
   char *llvm_cbe_tmp__59;
  static  unsigned long long aesl_llvm_cbe_650_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__60;
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
   char *llvm_cbe_tmp__61;
  static  unsigned long long aesl_llvm_cbe_678_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__62;
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
  static  unsigned long long aesl_llvm_cbe_storemerge216_count = 0;
  unsigned int llvm_cbe_storemerge216;
  unsigned int llvm_cbe_storemerge216__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_706_count = 0;
  unsigned long long llvm_cbe_tmp__63;
  static  unsigned long long aesl_llvm_cbe_707_count = 0;
   char *llvm_cbe_tmp__64;
  static  unsigned long long aesl_llvm_cbe_708_count = 0;
  unsigned char llvm_cbe_tmp__65;
  static  unsigned long long aesl_llvm_cbe__2e_sum8_count = 0;
  unsigned long long llvm_cbe__2e_sum8;
  static  unsigned long long aesl_llvm_cbe_709_count = 0;
   char *llvm_cbe_tmp__66;
  static  unsigned long long aesl_llvm_cbe_710_count = 0;
  static  unsigned long long aesl_llvm_cbe_711_count = 0;
  unsigned int llvm_cbe_tmp__67;
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
  static  unsigned long long aesl_llvm_cbe_729_count = 0;
  static  unsigned long long aesl_llvm_cbe_730_count = 0;
  static  unsigned long long aesl_llvm_cbe_731_count = 0;
  static  unsigned long long aesl_llvm_cbe_732_count = 0;
  static  unsigned long long aesl_llvm_cbe_733_count = 0;
  static  unsigned long long aesl_llvm_cbe_734_count = 0;
  static  unsigned long long aesl_llvm_cbe_735_count = 0;
  static  unsigned long long aesl_llvm_cbe_736_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_737_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_pack_sk\n");
  llvm_cbe_storemerge19__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__68;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__68:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge19 = phi i32 [ 0, %%0 ], [ %%6, %%1  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_storemerge19_count);
  llvm_cbe_storemerge19 = (unsigned int )llvm_cbe_storemerge19__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge19 = 0x%X",llvm_cbe_storemerge19);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__33);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = zext i32 %%storemerge19 to i64, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_233_count);
  llvm_cbe_tmp__29 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge19&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__29);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds i8* %%rho, i64 %%2, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_234_count);
  llvm_cbe_tmp__30 = ( char *)(&llvm_cbe_rho[(((signed long long )llvm_cbe_tmp__29))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__29));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = load i8* %%3, align 1, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_235_count);
  llvm_cbe_tmp__31 = (unsigned char )*llvm_cbe_tmp__30;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__31);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds i8* %%sk, i64 %%2, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_236_count);
  llvm_cbe_tmp__32 = ( char *)(&llvm_cbe_sk[(((signed long long )llvm_cbe_tmp__29))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__29));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%4, i8* %%5, align 1, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_237_count);
  *llvm_cbe_tmp__32 = llvm_cbe_tmp__31;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__31);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = add i32 %%storemerge19, 1, !dbg !12 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_238_count);
  llvm_cbe_tmp__33 = (unsigned int )((unsigned int )(llvm_cbe_storemerge19&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__33&4294967295ull)));
  if (((llvm_cbe_tmp__33&4294967295U) == (32u&4294967295U))) {
    llvm_cbe_storemerge118__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_preheader17;
  } else {
    llvm_cbe_storemerge19__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__33;   /* for PHI node */
    goto llvm_cbe_tmp__68;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '.preheader17' to make GCC happy */
llvm_cbe__2e_preheader17:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge118 = phi i32 [ %%11, %%.preheader17 ], [ 0, %%1  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_storemerge118_count);
  llvm_cbe_storemerge118 = (unsigned int )llvm_cbe_storemerge118__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge118 = 0x%X",llvm_cbe_storemerge118);
printf("\n = 0x%X",llvm_cbe_tmp__38);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = zext i32 %%storemerge118 to i64, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_265_count);
  llvm_cbe_tmp__34 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge118&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__34);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds i8* %%key, i64 %%7, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_266_count);
  llvm_cbe_tmp__35 = ( char *)(&llvm_cbe_key[(((signed long long )llvm_cbe_tmp__34))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__34));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = load i8* %%8, align 1, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_267_count);
  llvm_cbe_tmp__36 = (unsigned char )*llvm_cbe_tmp__35;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__36);
if (AESL_DEBUG_TRACE)
printf("\n  %%.sum9 = add i64 %%7, 32, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe__2e_sum9_count);
  llvm_cbe__2e_sum9 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__34&18446744073709551615ull)) + ((unsigned long long )(32ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n.sum9 = 0x%I64X\n", ((unsigned long long )(llvm_cbe__2e_sum9&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds i8* %%sk, i64 %%.sum9, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_268_count);
  llvm_cbe_tmp__37 = ( char *)(&llvm_cbe_sk[(((signed long long )llvm_cbe__2e_sum9))]);
if (AESL_DEBUG_TRACE) {
printf("\n.sum9 = 0x%I64X",((signed long long )llvm_cbe__2e_sum9));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%9, i8* %%10, align 1, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_269_count);
  *llvm_cbe_tmp__37 = llvm_cbe_tmp__36;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__36);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = add i32 %%storemerge118, 1, !dbg !12 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_270_count);
  llvm_cbe_tmp__38 = (unsigned int )((unsigned int )(llvm_cbe_storemerge118&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__38&4294967295ull)));
  if (((llvm_cbe_tmp__38&4294967295U) == (32u&4294967295U))) {
    llvm_cbe_storemerge216__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_preheader15;
  } else {
    llvm_cbe_storemerge118__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__38;   /* for PHI node */
    goto llvm_cbe__2e_preheader17;
  }

  } while (1); /* end of syntactic loop '.preheader17' */
llvm_cbe__2e_preheader13:
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = getelementptr inbounds i8* %%sk, i64 112, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_321_count);
  llvm_cbe_tmp__39 = ( char *)(&llvm_cbe_sk[(((signed long long )112ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds %%struct.polyveck* %%s1, i64 0, i32 0, i64 0, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_322_count);
  llvm_cbe_tmp__40 = (l_struct_OC_poly *)(&llvm_cbe_s1->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_polyeta_pack(i8* %%12, %%struct.poly* %%13) nounwind, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_323_count);
   /*tail*/ pqcrystals_dilithium2_ref_polyeta_pack(( char *)llvm_cbe_tmp__39, (l_struct_OC_poly *)llvm_cbe_tmp__40);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = getelementptr inbounds i8* %%sk, i64 208, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_349_count);
  llvm_cbe_tmp__41 = ( char *)(&llvm_cbe_sk[(((signed long long )208ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds %%struct.polyveck* %%s1, i64 0, i32 0, i64 1, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_350_count);
  llvm_cbe_tmp__42 = (l_struct_OC_poly *)(&llvm_cbe_s1->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_polyeta_pack(i8* %%14, %%struct.poly* %%15) nounwind, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_351_count);
   /*tail*/ pqcrystals_dilithium2_ref_polyeta_pack(( char *)llvm_cbe_tmp__41, (l_struct_OC_poly *)llvm_cbe_tmp__42);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = getelementptr inbounds i8* %%sk, i64 304, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_377_count);
  llvm_cbe_tmp__43 = ( char *)(&llvm_cbe_sk[(((signed long long )304ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = getelementptr inbounds %%struct.polyveck* %%s1, i64 0, i32 0, i64 2, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_378_count);
  llvm_cbe_tmp__44 = (l_struct_OC_poly *)(&llvm_cbe_s1->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_polyeta_pack(i8* %%16, %%struct.poly* %%17) nounwind, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_379_count);
   /*tail*/ pqcrystals_dilithium2_ref_polyeta_pack(( char *)llvm_cbe_tmp__43, (l_struct_OC_poly *)llvm_cbe_tmp__44);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = getelementptr inbounds i8* %%sk, i64 400, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_405_count);
  llvm_cbe_tmp__45 = ( char *)(&llvm_cbe_sk[(((signed long long )400ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = getelementptr inbounds %%struct.polyveck* %%s1, i64 0, i32 0, i64 3, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_406_count);
  llvm_cbe_tmp__46 = (l_struct_OC_poly *)(&llvm_cbe_s1->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_polyeta_pack(i8* %%18, %%struct.poly* %%19) nounwind, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_407_count);
   /*tail*/ pqcrystals_dilithium2_ref_polyeta_pack(( char *)llvm_cbe_tmp__45, (l_struct_OC_poly *)llvm_cbe_tmp__46);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = getelementptr inbounds i8* %%sk, i64 496, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_457_count);
  llvm_cbe_tmp__47 = ( char *)(&llvm_cbe_sk[(((signed long long )496ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = getelementptr inbounds %%struct.polyveck* %%s2, i64 0, i32 0, i64 0, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_458_count);
  llvm_cbe_tmp__48 = (l_struct_OC_poly *)(&llvm_cbe_s2->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_polyeta_pack(i8* %%20, %%struct.poly* %%21) nounwind, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_459_count);
   /*tail*/ pqcrystals_dilithium2_ref_polyeta_pack(( char *)llvm_cbe_tmp__47, (l_struct_OC_poly *)llvm_cbe_tmp__48);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = getelementptr inbounds i8* %%sk, i64 592, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_485_count);
  llvm_cbe_tmp__49 = ( char *)(&llvm_cbe_sk[(((signed long long )592ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = getelementptr inbounds %%struct.polyveck* %%s2, i64 0, i32 0, i64 1, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_486_count);
  llvm_cbe_tmp__50 = (l_struct_OC_poly *)(&llvm_cbe_s2->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_polyeta_pack(i8* %%22, %%struct.poly* %%23) nounwind, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_487_count);
   /*tail*/ pqcrystals_dilithium2_ref_polyeta_pack(( char *)llvm_cbe_tmp__49, (l_struct_OC_poly *)llvm_cbe_tmp__50);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = getelementptr inbounds i8* %%sk, i64 688, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_513_count);
  llvm_cbe_tmp__51 = ( char *)(&llvm_cbe_sk[(((signed long long )688ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = getelementptr inbounds %%struct.polyveck* %%s2, i64 0, i32 0, i64 2, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_514_count);
  llvm_cbe_tmp__52 = (l_struct_OC_poly *)(&llvm_cbe_s2->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_polyeta_pack(i8* %%24, %%struct.poly* %%25) nounwind, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_515_count);
   /*tail*/ pqcrystals_dilithium2_ref_polyeta_pack(( char *)llvm_cbe_tmp__51, (l_struct_OC_poly *)llvm_cbe_tmp__52);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = getelementptr inbounds i8* %%sk, i64 784, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_541_count);
  llvm_cbe_tmp__53 = ( char *)(&llvm_cbe_sk[(((signed long long )784ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = getelementptr inbounds %%struct.polyveck* %%s2, i64 0, i32 0, i64 3, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_542_count);
  llvm_cbe_tmp__54 = (l_struct_OC_poly *)(&llvm_cbe_s2->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_polyeta_pack(i8* %%26, %%struct.poly* %%27) nounwind, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_543_count);
   /*tail*/ pqcrystals_dilithium2_ref_polyeta_pack(( char *)llvm_cbe_tmp__53, (l_struct_OC_poly *)llvm_cbe_tmp__54);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = getelementptr inbounds i8* %%sk, i64 880, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_593_count);
  llvm_cbe_tmp__55 = ( char *)(&llvm_cbe_sk[(((signed long long )880ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = getelementptr inbounds %%struct.polyveck* %%t0, i64 0, i32 0, i64 0, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_594_count);
  llvm_cbe_tmp__56 = (l_struct_OC_poly *)(&llvm_cbe_t0->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_polyt0_pack(i8* %%28, %%struct.poly* %%29) nounwind, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_595_count);
   /*tail*/ pqcrystals_dilithium2_ref_polyt0_pack(( char *)llvm_cbe_tmp__55, (l_struct_OC_poly *)llvm_cbe_tmp__56);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = getelementptr inbounds i8* %%sk, i64 1296, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_621_count);
  llvm_cbe_tmp__57 = ( char *)(&llvm_cbe_sk[(((signed long long )1296ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = getelementptr inbounds %%struct.polyveck* %%t0, i64 0, i32 0, i64 1, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_622_count);
  llvm_cbe_tmp__58 = (l_struct_OC_poly *)(&llvm_cbe_t0->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_polyt0_pack(i8* %%30, %%struct.poly* %%31) nounwind, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_623_count);
   /*tail*/ pqcrystals_dilithium2_ref_polyt0_pack(( char *)llvm_cbe_tmp__57, (l_struct_OC_poly *)llvm_cbe_tmp__58);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = getelementptr inbounds i8* %%sk, i64 1712, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_649_count);
  llvm_cbe_tmp__59 = ( char *)(&llvm_cbe_sk[(((signed long long )1712ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = getelementptr inbounds %%struct.polyveck* %%t0, i64 0, i32 0, i64 2, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_650_count);
  llvm_cbe_tmp__60 = (l_struct_OC_poly *)(&llvm_cbe_t0->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_polyt0_pack(i8* %%32, %%struct.poly* %%33) nounwind, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_651_count);
   /*tail*/ pqcrystals_dilithium2_ref_polyt0_pack(( char *)llvm_cbe_tmp__59, (l_struct_OC_poly *)llvm_cbe_tmp__60);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = getelementptr inbounds i8* %%sk, i64 2128, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_677_count);
  llvm_cbe_tmp__61 = ( char *)(&llvm_cbe_sk[(((signed long long )2128ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = getelementptr inbounds %%struct.polyveck* %%t0, i64 0, i32 0, i64 3, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_678_count);
  llvm_cbe_tmp__62 = (l_struct_OC_poly *)(&llvm_cbe_t0->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_polyt0_pack(i8* %%34, %%struct.poly* %%35) nounwind, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_679_count);
   /*tail*/ pqcrystals_dilithium2_ref_polyt0_pack(( char *)llvm_cbe_tmp__61, (l_struct_OC_poly *)llvm_cbe_tmp__62);
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_pack_sk}\n");
  return;
  do {     /* Syntactic loop '.preheader15' to make GCC happy */
llvm_cbe__2e_preheader15:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge216 = phi i32 [ %%40, %%.preheader15 ], [ 0, %%.preheader17  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_storemerge216_count);
  llvm_cbe_storemerge216 = (unsigned int )llvm_cbe_storemerge216__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge216 = 0x%X",llvm_cbe_storemerge216);
printf("\n = 0x%X",llvm_cbe_tmp__67);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = zext i32 %%storemerge216 to i64, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_706_count);
  llvm_cbe_tmp__63 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge216&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__63);
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = getelementptr inbounds i8* %%tr, i64 %%36, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_707_count);
  llvm_cbe_tmp__64 = ( char *)(&llvm_cbe_tr[(((signed long long )llvm_cbe_tmp__63))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__63));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = load i8* %%37, align 1, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_708_count);
  llvm_cbe_tmp__65 = (unsigned char )*llvm_cbe_tmp__64;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__65);
if (AESL_DEBUG_TRACE)
printf("\n  %%.sum8 = add i64 %%36, 64, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe__2e_sum8_count);
  llvm_cbe__2e_sum8 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__63&18446744073709551615ull)) + ((unsigned long long )(64ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n.sum8 = 0x%I64X\n", ((unsigned long long )(llvm_cbe__2e_sum8&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = getelementptr inbounds i8* %%sk, i64 %%.sum8, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_709_count);
  llvm_cbe_tmp__66 = ( char *)(&llvm_cbe_sk[(((signed long long )llvm_cbe__2e_sum8))]);
if (AESL_DEBUG_TRACE) {
printf("\n.sum8 = 0x%I64X",((signed long long )llvm_cbe__2e_sum8));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%38, i8* %%39, align 1, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_710_count);
  *llvm_cbe_tmp__66 = llvm_cbe_tmp__65;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__65);
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = add i32 %%storemerge216, 1, !dbg !12 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sk  --> \n", ++aesl_llvm_cbe_711_count);
  llvm_cbe_tmp__67 = (unsigned int )((unsigned int )(llvm_cbe_storemerge216&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__67&4294967295ull)));
  if (((llvm_cbe_tmp__67&4294967295U) == (48u&4294967295U))) {
    goto llvm_cbe__2e_preheader13;
  } else {
    llvm_cbe_storemerge216__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__67;   /* for PHI node */
    goto llvm_cbe__2e_preheader15;
  }

  } while (1); /* end of syntactic loop '.preheader15' */
}


void pqcrystals_dilithium2_ref_upack_sk( char *llvm_cbe_rho,  char *llvm_cbe_tr,  char *llvm_cbe_key, l_struct_OC_polyveck *llvm_cbe_t0, l_struct_OC_polyveck *llvm_cbe_s1, l_struct_OC_polyveck *llvm_cbe_s2,  char *llvm_cbe_sk) {
  static  unsigned long long aesl_llvm_cbe_738_count = 0;
  static  unsigned long long aesl_llvm_cbe_739_count = 0;
  static  unsigned long long aesl_llvm_cbe_740_count = 0;
  static  unsigned long long aesl_llvm_cbe_741_count = 0;
  static  unsigned long long aesl_llvm_cbe_742_count = 0;
  static  unsigned long long aesl_llvm_cbe_743_count = 0;
  static  unsigned long long aesl_llvm_cbe_744_count = 0;
  static  unsigned long long aesl_llvm_cbe_745_count = 0;
  static  unsigned long long aesl_llvm_cbe_746_count = 0;
  static  unsigned long long aesl_llvm_cbe_747_count = 0;
  static  unsigned long long aesl_llvm_cbe_748_count = 0;
  static  unsigned long long aesl_llvm_cbe_749_count = 0;
  static  unsigned long long aesl_llvm_cbe_750_count = 0;
  static  unsigned long long aesl_llvm_cbe_751_count = 0;
  static  unsigned long long aesl_llvm_cbe_752_count = 0;
  static  unsigned long long aesl_llvm_cbe_753_count = 0;
  static  unsigned long long aesl_llvm_cbe_754_count = 0;
  static  unsigned long long aesl_llvm_cbe_755_count = 0;
  static  unsigned long long aesl_llvm_cbe_756_count = 0;
  static  unsigned long long aesl_llvm_cbe_757_count = 0;
  static  unsigned long long aesl_llvm_cbe_758_count = 0;
  static  unsigned long long aesl_llvm_cbe_759_count = 0;
  static  unsigned long long aesl_llvm_cbe_760_count = 0;
  static  unsigned long long aesl_llvm_cbe_761_count = 0;
  static  unsigned long long aesl_llvm_cbe_762_count = 0;
  static  unsigned long long aesl_llvm_cbe_763_count = 0;
  static  unsigned long long aesl_llvm_cbe_764_count = 0;
  static  unsigned long long aesl_llvm_cbe_765_count = 0;
  static  unsigned long long aesl_llvm_cbe_766_count = 0;
  static  unsigned long long aesl_llvm_cbe_767_count = 0;
  static  unsigned long long aesl_llvm_cbe_768_count = 0;
  static  unsigned long long aesl_llvm_cbe_769_count = 0;
  static  unsigned long long aesl_llvm_cbe_770_count = 0;
  static  unsigned long long aesl_llvm_cbe_771_count = 0;
  static  unsigned long long aesl_llvm_cbe_772_count = 0;
  static  unsigned long long aesl_llvm_cbe_773_count = 0;
  static  unsigned long long aesl_llvm_cbe_774_count = 0;
  static  unsigned long long aesl_llvm_cbe_775_count = 0;
  static  unsigned long long aesl_llvm_cbe_776_count = 0;
  static  unsigned long long aesl_llvm_cbe_777_count = 0;
  static  unsigned long long aesl_llvm_cbe_778_count = 0;
  static  unsigned long long aesl_llvm_cbe_779_count = 0;
  static  unsigned long long aesl_llvm_cbe_780_count = 0;
  static  unsigned long long aesl_llvm_cbe_781_count = 0;
  static  unsigned long long aesl_llvm_cbe_782_count = 0;
  static  unsigned long long aesl_llvm_cbe_783_count = 0;
  static  unsigned long long aesl_llvm_cbe_784_count = 0;
  static  unsigned long long aesl_llvm_cbe_785_count = 0;
  static  unsigned long long aesl_llvm_cbe_786_count = 0;
  static  unsigned long long aesl_llvm_cbe_787_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge19_count = 0;
  unsigned int llvm_cbe_storemerge19;
  unsigned int llvm_cbe_storemerge19__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_788_count = 0;
  unsigned long long llvm_cbe_tmp__69;
  static  unsigned long long aesl_llvm_cbe_789_count = 0;
   char *llvm_cbe_tmp__70;
  static  unsigned long long aesl_llvm_cbe_790_count = 0;
  unsigned char llvm_cbe_tmp__71;
  static  unsigned long long aesl_llvm_cbe_791_count = 0;
   char *llvm_cbe_tmp__72;
  static  unsigned long long aesl_llvm_cbe_792_count = 0;
  static  unsigned long long aesl_llvm_cbe_793_count = 0;
  unsigned int llvm_cbe_tmp__73;
  static  unsigned long long aesl_llvm_cbe_794_count = 0;
  static  unsigned long long aesl_llvm_cbe_795_count = 0;
  static  unsigned long long aesl_llvm_cbe_796_count = 0;
  static  unsigned long long aesl_llvm_cbe_797_count = 0;
  static  unsigned long long aesl_llvm_cbe_798_count = 0;
  static  unsigned long long aesl_llvm_cbe_799_count = 0;
  static  unsigned long long aesl_llvm_cbe_800_count = 0;
  static  unsigned long long aesl_llvm_cbe_801_count = 0;
  static  unsigned long long aesl_llvm_cbe_802_count = 0;
  static  unsigned long long aesl_llvm_cbe_803_count = 0;
  static  unsigned long long aesl_llvm_cbe_804_count = 0;
  static  unsigned long long aesl_llvm_cbe_805_count = 0;
  static  unsigned long long aesl_llvm_cbe_806_count = 0;
  static  unsigned long long aesl_llvm_cbe_807_count = 0;
  static  unsigned long long aesl_llvm_cbe_808_count = 0;
  static  unsigned long long aesl_llvm_cbe_809_count = 0;
  static  unsigned long long aesl_llvm_cbe_810_count = 0;
  static  unsigned long long aesl_llvm_cbe_811_count = 0;
  static  unsigned long long aesl_llvm_cbe_812_count = 0;
  static  unsigned long long aesl_llvm_cbe_813_count = 0;
  static  unsigned long long aesl_llvm_cbe_814_count = 0;
  static  unsigned long long aesl_llvm_cbe_815_count = 0;
  static  unsigned long long aesl_llvm_cbe_816_count = 0;
  static  unsigned long long aesl_llvm_cbe_817_count = 0;
  static  unsigned long long aesl_llvm_cbe_818_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond21_count = 0;
  static  unsigned long long aesl_llvm_cbe_819_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge118_count = 0;
  unsigned int llvm_cbe_storemerge118;
  unsigned int llvm_cbe_storemerge118__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_820_count = 0;
  unsigned long long llvm_cbe_tmp__74;
  static  unsigned long long aesl_llvm_cbe__2e_sum9_count = 0;
  unsigned long long llvm_cbe__2e_sum9;
  static  unsigned long long aesl_llvm_cbe_821_count = 0;
   char *llvm_cbe_tmp__75;
  static  unsigned long long aesl_llvm_cbe_822_count = 0;
  unsigned char llvm_cbe_tmp__76;
  static  unsigned long long aesl_llvm_cbe_823_count = 0;
   char *llvm_cbe_tmp__77;
  static  unsigned long long aesl_llvm_cbe_824_count = 0;
  static  unsigned long long aesl_llvm_cbe_825_count = 0;
  unsigned int llvm_cbe_tmp__78;
  static  unsigned long long aesl_llvm_cbe_826_count = 0;
  static  unsigned long long aesl_llvm_cbe_827_count = 0;
  static  unsigned long long aesl_llvm_cbe_828_count = 0;
  static  unsigned long long aesl_llvm_cbe_829_count = 0;
  static  unsigned long long aesl_llvm_cbe_830_count = 0;
  static  unsigned long long aesl_llvm_cbe_831_count = 0;
  static  unsigned long long aesl_llvm_cbe_832_count = 0;
  static  unsigned long long aesl_llvm_cbe_833_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_exitcond20_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_873_count = 0;
  static  unsigned long long aesl_llvm_cbe_874_count = 0;
  static  unsigned long long aesl_llvm_cbe_875_count = 0;
  static  unsigned long long aesl_llvm_cbe_876_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__79;
  static  unsigned long long aesl_llvm_cbe_877_count = 0;
   char *llvm_cbe_tmp__80;
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
  l_struct_OC_poly *llvm_cbe_tmp__81;
  static  unsigned long long aesl_llvm_cbe_905_count = 0;
   char *llvm_cbe_tmp__82;
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
  static  unsigned long long aesl_llvm_cbe_918_count = 0;
  static  unsigned long long aesl_llvm_cbe_919_count = 0;
  static  unsigned long long aesl_llvm_cbe_920_count = 0;
  static  unsigned long long aesl_llvm_cbe_921_count = 0;
  static  unsigned long long aesl_llvm_cbe_922_count = 0;
  static  unsigned long long aesl_llvm_cbe_923_count = 0;
  static  unsigned long long aesl_llvm_cbe_924_count = 0;
  static  unsigned long long aesl_llvm_cbe_925_count = 0;
  static  unsigned long long aesl_llvm_cbe_926_count = 0;
  static  unsigned long long aesl_llvm_cbe_927_count = 0;
  static  unsigned long long aesl_llvm_cbe_928_count = 0;
  static  unsigned long long aesl_llvm_cbe_929_count = 0;
  static  unsigned long long aesl_llvm_cbe_930_count = 0;
  static  unsigned long long aesl_llvm_cbe_931_count = 0;
  static  unsigned long long aesl_llvm_cbe_932_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__83;
  static  unsigned long long aesl_llvm_cbe_933_count = 0;
   char *llvm_cbe_tmp__84;
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
  static  unsigned long long aesl_llvm_cbe_945_count = 0;
  static  unsigned long long aesl_llvm_cbe_946_count = 0;
  static  unsigned long long aesl_llvm_cbe_947_count = 0;
  static  unsigned long long aesl_llvm_cbe_948_count = 0;
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
  l_struct_OC_poly *llvm_cbe_tmp__85;
  static  unsigned long long aesl_llvm_cbe_961_count = 0;
   char *llvm_cbe_tmp__86;
  static  unsigned long long aesl_llvm_cbe_962_count = 0;
  static  unsigned long long aesl_llvm_cbe_963_count = 0;
  static  unsigned long long aesl_llvm_cbe_964_count = 0;
  static  unsigned long long aesl_llvm_cbe_965_count = 0;
  static  unsigned long long aesl_llvm_cbe_966_count = 0;
  static  unsigned long long aesl_llvm_cbe_967_count = 0;
  static  unsigned long long aesl_llvm_cbe_968_count = 0;
  static  unsigned long long aesl_llvm_cbe_969_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_987_count = 0;
  static  unsigned long long aesl_llvm_cbe_988_count = 0;
  static  unsigned long long aesl_llvm_cbe_989_count = 0;
  static  unsigned long long aesl_llvm_cbe_990_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_1008_count = 0;
  static  unsigned long long aesl_llvm_cbe_1009_count = 0;
  static  unsigned long long aesl_llvm_cbe_1010_count = 0;
  static  unsigned long long aesl_llvm_cbe_1011_count = 0;
  static  unsigned long long aesl_llvm_cbe_1012_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__87;
  static  unsigned long long aesl_llvm_cbe_1013_count = 0;
   char *llvm_cbe_tmp__88;
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
  static  unsigned long long aesl_llvm_cbe_1029_count = 0;
  static  unsigned long long aesl_llvm_cbe_1030_count = 0;
  static  unsigned long long aesl_llvm_cbe_1031_count = 0;
  static  unsigned long long aesl_llvm_cbe_1032_count = 0;
  static  unsigned long long aesl_llvm_cbe_1033_count = 0;
  static  unsigned long long aesl_llvm_cbe_1034_count = 0;
  static  unsigned long long aesl_llvm_cbe_1035_count = 0;
  static  unsigned long long aesl_llvm_cbe_1036_count = 0;
  static  unsigned long long aesl_llvm_cbe_1037_count = 0;
  static  unsigned long long aesl_llvm_cbe_1038_count = 0;
  static  unsigned long long aesl_llvm_cbe_1039_count = 0;
  static  unsigned long long aesl_llvm_cbe_1040_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__89;
  static  unsigned long long aesl_llvm_cbe_1041_count = 0;
   char *llvm_cbe_tmp__90;
  static  unsigned long long aesl_llvm_cbe_1042_count = 0;
  static  unsigned long long aesl_llvm_cbe_1043_count = 0;
  static  unsigned long long aesl_llvm_cbe_1044_count = 0;
  static  unsigned long long aesl_llvm_cbe_1045_count = 0;
  static  unsigned long long aesl_llvm_cbe_1046_count = 0;
  static  unsigned long long aesl_llvm_cbe_1047_count = 0;
  static  unsigned long long aesl_llvm_cbe_1048_count = 0;
  static  unsigned long long aesl_llvm_cbe_1049_count = 0;
  static  unsigned long long aesl_llvm_cbe_1050_count = 0;
  static  unsigned long long aesl_llvm_cbe_1051_count = 0;
  static  unsigned long long aesl_llvm_cbe_1052_count = 0;
  static  unsigned long long aesl_llvm_cbe_1053_count = 0;
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
  l_struct_OC_poly *llvm_cbe_tmp__91;
  static  unsigned long long aesl_llvm_cbe_1069_count = 0;
   char *llvm_cbe_tmp__92;
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
  static  unsigned long long aesl_llvm_cbe_1082_count = 0;
  static  unsigned long long aesl_llvm_cbe_1083_count = 0;
  static  unsigned long long aesl_llvm_cbe_1084_count = 0;
  static  unsigned long long aesl_llvm_cbe_1085_count = 0;
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
  l_struct_OC_poly *llvm_cbe_tmp__93;
  static  unsigned long long aesl_llvm_cbe_1097_count = 0;
   char *llvm_cbe_tmp__94;
  static  unsigned long long aesl_llvm_cbe_1098_count = 0;
  static  unsigned long long aesl_llvm_cbe_1099_count = 0;
  static  unsigned long long aesl_llvm_cbe_1100_count = 0;
  static  unsigned long long aesl_llvm_cbe_1101_count = 0;
  static  unsigned long long aesl_llvm_cbe_1102_count = 0;
  static  unsigned long long aesl_llvm_cbe_1103_count = 0;
  static  unsigned long long aesl_llvm_cbe_1104_count = 0;
  static  unsigned long long aesl_llvm_cbe_1105_count = 0;
  static  unsigned long long aesl_llvm_cbe_1106_count = 0;
  static  unsigned long long aesl_llvm_cbe_1107_count = 0;
  static  unsigned long long aesl_llvm_cbe_1108_count = 0;
  static  unsigned long long aesl_llvm_cbe_1109_count = 0;
  static  unsigned long long aesl_llvm_cbe_1110_count = 0;
  static  unsigned long long aesl_llvm_cbe_1111_count = 0;
  static  unsigned long long aesl_llvm_cbe_1112_count = 0;
  static  unsigned long long aesl_llvm_cbe_1113_count = 0;
  static  unsigned long long aesl_llvm_cbe_1114_count = 0;
  static  unsigned long long aesl_llvm_cbe_1115_count = 0;
  static  unsigned long long aesl_llvm_cbe_1116_count = 0;
  static  unsigned long long aesl_llvm_cbe_1117_count = 0;
  static  unsigned long long aesl_llvm_cbe_1118_count = 0;
  static  unsigned long long aesl_llvm_cbe_1119_count = 0;
  static  unsigned long long aesl_llvm_cbe_1120_count = 0;
  static  unsigned long long aesl_llvm_cbe_1121_count = 0;
  static  unsigned long long aesl_llvm_cbe_1122_count = 0;
  static  unsigned long long aesl_llvm_cbe_1123_count = 0;
  static  unsigned long long aesl_llvm_cbe_1124_count = 0;
  static  unsigned long long aesl_llvm_cbe_1125_count = 0;
  static  unsigned long long aesl_llvm_cbe_1126_count = 0;
  static  unsigned long long aesl_llvm_cbe_1127_count = 0;
  static  unsigned long long aesl_llvm_cbe_1128_count = 0;
  static  unsigned long long aesl_llvm_cbe_1129_count = 0;
  static  unsigned long long aesl_llvm_cbe_1130_count = 0;
  static  unsigned long long aesl_llvm_cbe_1131_count = 0;
  static  unsigned long long aesl_llvm_cbe_1132_count = 0;
  static  unsigned long long aesl_llvm_cbe_1133_count = 0;
  static  unsigned long long aesl_llvm_cbe_1134_count = 0;
  static  unsigned long long aesl_llvm_cbe_1135_count = 0;
  static  unsigned long long aesl_llvm_cbe_1136_count = 0;
  static  unsigned long long aesl_llvm_cbe_1137_count = 0;
  static  unsigned long long aesl_llvm_cbe_1138_count = 0;
  static  unsigned long long aesl_llvm_cbe_1139_count = 0;
  static  unsigned long long aesl_llvm_cbe_1140_count = 0;
  static  unsigned long long aesl_llvm_cbe_1141_count = 0;
  static  unsigned long long aesl_llvm_cbe_1142_count = 0;
  static  unsigned long long aesl_llvm_cbe_1143_count = 0;
  static  unsigned long long aesl_llvm_cbe_1144_count = 0;
  static  unsigned long long aesl_llvm_cbe_1145_count = 0;
  static  unsigned long long aesl_llvm_cbe_1146_count = 0;
  static  unsigned long long aesl_llvm_cbe_1147_count = 0;
  static  unsigned long long aesl_llvm_cbe_1148_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__95;
  static  unsigned long long aesl_llvm_cbe_1149_count = 0;
   char *llvm_cbe_tmp__96;
  static  unsigned long long aesl_llvm_cbe_1150_count = 0;
  static  unsigned long long aesl_llvm_cbe_1151_count = 0;
  static  unsigned long long aesl_llvm_cbe_1152_count = 0;
  static  unsigned long long aesl_llvm_cbe_1153_count = 0;
  static  unsigned long long aesl_llvm_cbe_1154_count = 0;
  static  unsigned long long aesl_llvm_cbe_1155_count = 0;
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
  l_struct_OC_poly *llvm_cbe_tmp__97;
  static  unsigned long long aesl_llvm_cbe_1177_count = 0;
   char *llvm_cbe_tmp__98;
  static  unsigned long long aesl_llvm_cbe_1178_count = 0;
  static  unsigned long long aesl_llvm_cbe_1179_count = 0;
  static  unsigned long long aesl_llvm_cbe_1180_count = 0;
  static  unsigned long long aesl_llvm_cbe_1181_count = 0;
  static  unsigned long long aesl_llvm_cbe_1182_count = 0;
  static  unsigned long long aesl_llvm_cbe_1183_count = 0;
  static  unsigned long long aesl_llvm_cbe_1184_count = 0;
  static  unsigned long long aesl_llvm_cbe_1185_count = 0;
  static  unsigned long long aesl_llvm_cbe_1186_count = 0;
  static  unsigned long long aesl_llvm_cbe_1187_count = 0;
  static  unsigned long long aesl_llvm_cbe_1188_count = 0;
  static  unsigned long long aesl_llvm_cbe_1189_count = 0;
  static  unsigned long long aesl_llvm_cbe_1190_count = 0;
  static  unsigned long long aesl_llvm_cbe_1191_count = 0;
  static  unsigned long long aesl_llvm_cbe_1192_count = 0;
  static  unsigned long long aesl_llvm_cbe_1193_count = 0;
  static  unsigned long long aesl_llvm_cbe_1194_count = 0;
  static  unsigned long long aesl_llvm_cbe_1195_count = 0;
  static  unsigned long long aesl_llvm_cbe_1196_count = 0;
  static  unsigned long long aesl_llvm_cbe_1197_count = 0;
  static  unsigned long long aesl_llvm_cbe_1198_count = 0;
  static  unsigned long long aesl_llvm_cbe_1199_count = 0;
  static  unsigned long long aesl_llvm_cbe_1200_count = 0;
  static  unsigned long long aesl_llvm_cbe_1201_count = 0;
  static  unsigned long long aesl_llvm_cbe_1202_count = 0;
  static  unsigned long long aesl_llvm_cbe_1203_count = 0;
  static  unsigned long long aesl_llvm_cbe_1204_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__99;
  static  unsigned long long aesl_llvm_cbe_1205_count = 0;
   char *llvm_cbe_tmp__100;
  static  unsigned long long aesl_llvm_cbe_1206_count = 0;
  static  unsigned long long aesl_llvm_cbe_1207_count = 0;
  static  unsigned long long aesl_llvm_cbe_1208_count = 0;
  static  unsigned long long aesl_llvm_cbe_1209_count = 0;
  static  unsigned long long aesl_llvm_cbe_1210_count = 0;
  static  unsigned long long aesl_llvm_cbe_1211_count = 0;
  static  unsigned long long aesl_llvm_cbe_1212_count = 0;
  static  unsigned long long aesl_llvm_cbe_1213_count = 0;
  static  unsigned long long aesl_llvm_cbe_1214_count = 0;
  static  unsigned long long aesl_llvm_cbe_1215_count = 0;
  static  unsigned long long aesl_llvm_cbe_1216_count = 0;
  static  unsigned long long aesl_llvm_cbe_1217_count = 0;
  static  unsigned long long aesl_llvm_cbe_1218_count = 0;
  static  unsigned long long aesl_llvm_cbe_1219_count = 0;
  static  unsigned long long aesl_llvm_cbe_1220_count = 0;
  static  unsigned long long aesl_llvm_cbe_1221_count = 0;
  static  unsigned long long aesl_llvm_cbe_1222_count = 0;
  static  unsigned long long aesl_llvm_cbe_1223_count = 0;
  static  unsigned long long aesl_llvm_cbe_1224_count = 0;
  static  unsigned long long aesl_llvm_cbe_1225_count = 0;
  static  unsigned long long aesl_llvm_cbe_1226_count = 0;
  static  unsigned long long aesl_llvm_cbe_1227_count = 0;
  static  unsigned long long aesl_llvm_cbe_1228_count = 0;
  static  unsigned long long aesl_llvm_cbe_1229_count = 0;
  static  unsigned long long aesl_llvm_cbe_1230_count = 0;
  static  unsigned long long aesl_llvm_cbe_1231_count = 0;
  static  unsigned long long aesl_llvm_cbe_1232_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__101;
  static  unsigned long long aesl_llvm_cbe_1233_count = 0;
   char *llvm_cbe_tmp__102;
  static  unsigned long long aesl_llvm_cbe_1234_count = 0;
  static  unsigned long long aesl_llvm_cbe_1235_count = 0;
  static  unsigned long long aesl_llvm_cbe_1236_count = 0;
  static  unsigned long long aesl_llvm_cbe_1237_count = 0;
  static  unsigned long long aesl_llvm_cbe_1238_count = 0;
  static  unsigned long long aesl_llvm_cbe_1239_count = 0;
  static  unsigned long long aesl_llvm_cbe_1240_count = 0;
  static  unsigned long long aesl_llvm_cbe_1241_count = 0;
  static  unsigned long long aesl_llvm_cbe_1242_count = 0;
  static  unsigned long long aesl_llvm_cbe_1243_count = 0;
  static  unsigned long long aesl_llvm_cbe_1244_count = 0;
  static  unsigned long long aesl_llvm_cbe_1245_count = 0;
  static  unsigned long long aesl_llvm_cbe_1246_count = 0;
  static  unsigned long long aesl_llvm_cbe_1247_count = 0;
  static  unsigned long long aesl_llvm_cbe_1248_count = 0;
  static  unsigned long long aesl_llvm_cbe_1249_count = 0;
  static  unsigned long long aesl_llvm_cbe_1250_count = 0;
  static  unsigned long long aesl_llvm_cbe_1251_count = 0;
  static  unsigned long long aesl_llvm_cbe_1252_count = 0;
  static  unsigned long long aesl_llvm_cbe_1253_count = 0;
  static  unsigned long long aesl_llvm_cbe_1254_count = 0;
  static  unsigned long long aesl_llvm_cbe_1255_count = 0;
  static  unsigned long long aesl_llvm_cbe_1256_count = 0;
  static  unsigned long long aesl_llvm_cbe_1257_count = 0;
  static  unsigned long long aesl_llvm_cbe_1258_count = 0;
  static  unsigned long long aesl_llvm_cbe_1259_count = 0;
  static  unsigned long long aesl_llvm_cbe_1260_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge216_count = 0;
  unsigned int llvm_cbe_storemerge216;
  unsigned int llvm_cbe_storemerge216__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1261_count = 0;
  unsigned long long llvm_cbe_tmp__103;
  static  unsigned long long aesl_llvm_cbe__2e_sum8_count = 0;
  unsigned long long llvm_cbe__2e_sum8;
  static  unsigned long long aesl_llvm_cbe_1262_count = 0;
   char *llvm_cbe_tmp__104;
  static  unsigned long long aesl_llvm_cbe_1263_count = 0;
  unsigned char llvm_cbe_tmp__105;
  static  unsigned long long aesl_llvm_cbe_1264_count = 0;
   char *llvm_cbe_tmp__106;
  static  unsigned long long aesl_llvm_cbe_1265_count = 0;
  static  unsigned long long aesl_llvm_cbe_1266_count = 0;
  unsigned int llvm_cbe_tmp__107;
  static  unsigned long long aesl_llvm_cbe_1267_count = 0;
  static  unsigned long long aesl_llvm_cbe_1268_count = 0;
  static  unsigned long long aesl_llvm_cbe_1269_count = 0;
  static  unsigned long long aesl_llvm_cbe_1270_count = 0;
  static  unsigned long long aesl_llvm_cbe_1271_count = 0;
  static  unsigned long long aesl_llvm_cbe_1272_count = 0;
  static  unsigned long long aesl_llvm_cbe_1273_count = 0;
  static  unsigned long long aesl_llvm_cbe_1274_count = 0;
  static  unsigned long long aesl_llvm_cbe_1275_count = 0;
  static  unsigned long long aesl_llvm_cbe_1276_count = 0;
  static  unsigned long long aesl_llvm_cbe_1277_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_1292_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_upack_sk\n");
  llvm_cbe_storemerge19__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__108;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__108:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge19 = phi i32 [ 0, %%0 ], [ %%6, %%1  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_storemerge19_count);
  llvm_cbe_storemerge19 = (unsigned int )llvm_cbe_storemerge19__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge19 = 0x%X",llvm_cbe_storemerge19);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__73);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = zext i32 %%storemerge19 to i64, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_788_count);
  llvm_cbe_tmp__69 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge19&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__69);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds i8* %%sk, i64 %%2, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_789_count);
  llvm_cbe_tmp__70 = ( char *)(&llvm_cbe_sk[(((signed long long )llvm_cbe_tmp__69))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__69));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = load i8* %%3, align 1, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_790_count);
  llvm_cbe_tmp__71 = (unsigned char )*llvm_cbe_tmp__70;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__71);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds i8* %%rho, i64 %%2, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_791_count);
  llvm_cbe_tmp__72 = ( char *)(&llvm_cbe_rho[(((signed long long )llvm_cbe_tmp__69))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__69));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%4, i8* %%5, align 1, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_792_count);
  *llvm_cbe_tmp__72 = llvm_cbe_tmp__71;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__71);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = add i32 %%storemerge19, 1, !dbg !12 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_793_count);
  llvm_cbe_tmp__73 = (unsigned int )((unsigned int )(llvm_cbe_storemerge19&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__73&4294967295ull)));
  if (((llvm_cbe_tmp__73&4294967295U) == (32u&4294967295U))) {
    llvm_cbe_storemerge118__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_preheader17;
  } else {
    llvm_cbe_storemerge19__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__73;   /* for PHI node */
    goto llvm_cbe_tmp__108;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '.preheader17' to make GCC happy */
llvm_cbe__2e_preheader17:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge118 = phi i32 [ %%11, %%.preheader17 ], [ 0, %%1  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_storemerge118_count);
  llvm_cbe_storemerge118 = (unsigned int )llvm_cbe_storemerge118__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge118 = 0x%X",llvm_cbe_storemerge118);
printf("\n = 0x%X",llvm_cbe_tmp__78);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = zext i32 %%storemerge118 to i64, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_820_count);
  llvm_cbe_tmp__74 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge118&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__74);
if (AESL_DEBUG_TRACE)
printf("\n  %%.sum9 = add i64 %%7, 32, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe__2e_sum9_count);
  llvm_cbe__2e_sum9 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__74&18446744073709551615ull)) + ((unsigned long long )(32ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n.sum9 = 0x%I64X\n", ((unsigned long long )(llvm_cbe__2e_sum9&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds i8* %%sk, i64 %%.sum9, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_821_count);
  llvm_cbe_tmp__75 = ( char *)(&llvm_cbe_sk[(((signed long long )llvm_cbe__2e_sum9))]);
if (AESL_DEBUG_TRACE) {
printf("\n.sum9 = 0x%I64X",((signed long long )llvm_cbe__2e_sum9));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = load i8* %%8, align 1, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_822_count);
  llvm_cbe_tmp__76 = (unsigned char )*llvm_cbe_tmp__75;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__76);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds i8* %%key, i64 %%7, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_823_count);
  llvm_cbe_tmp__77 = ( char *)(&llvm_cbe_key[(((signed long long )llvm_cbe_tmp__74))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__74));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%9, i8* %%10, align 1, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_824_count);
  *llvm_cbe_tmp__77 = llvm_cbe_tmp__76;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__76);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = add i32 %%storemerge118, 1, !dbg !12 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_825_count);
  llvm_cbe_tmp__78 = (unsigned int )((unsigned int )(llvm_cbe_storemerge118&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__78&4294967295ull)));
  if (((llvm_cbe_tmp__78&4294967295U) == (32u&4294967295U))) {
    llvm_cbe_storemerge216__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_preheader15;
  } else {
    llvm_cbe_storemerge118__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__78;   /* for PHI node */
    goto llvm_cbe__2e_preheader17;
  }

  } while (1); /* end of syntactic loop '.preheader17' */
llvm_cbe__2e_preheader13:
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = getelementptr inbounds %%struct.polyveck* %%s1, i64 0, i32 0, i64 0, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_876_count);
  llvm_cbe_tmp__79 = (l_struct_OC_poly *)(&llvm_cbe_s1->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds i8* %%sk, i64 112, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_877_count);
  llvm_cbe_tmp__80 = ( char *)(&llvm_cbe_sk[(((signed long long )112ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_polyeta_unpack(%%struct.poly* %%12, i8* %%13) nounwind, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_878_count);
   /*tail*/ pqcrystals_dilithium2_ref_polyeta_unpack((l_struct_OC_poly *)llvm_cbe_tmp__79, ( char *)llvm_cbe_tmp__80);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = getelementptr inbounds %%struct.polyveck* %%s1, i64 0, i32 0, i64 1, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_904_count);
  llvm_cbe_tmp__81 = (l_struct_OC_poly *)(&llvm_cbe_s1->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds i8* %%sk, i64 208, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_905_count);
  llvm_cbe_tmp__82 = ( char *)(&llvm_cbe_sk[(((signed long long )208ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_polyeta_unpack(%%struct.poly* %%14, i8* %%15) nounwind, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_906_count);
   /*tail*/ pqcrystals_dilithium2_ref_polyeta_unpack((l_struct_OC_poly *)llvm_cbe_tmp__81, ( char *)llvm_cbe_tmp__82);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = getelementptr inbounds %%struct.polyveck* %%s1, i64 0, i32 0, i64 2, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_932_count);
  llvm_cbe_tmp__83 = (l_struct_OC_poly *)(&llvm_cbe_s1->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = getelementptr inbounds i8* %%sk, i64 304, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_933_count);
  llvm_cbe_tmp__84 = ( char *)(&llvm_cbe_sk[(((signed long long )304ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_polyeta_unpack(%%struct.poly* %%16, i8* %%17) nounwind, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_934_count);
   /*tail*/ pqcrystals_dilithium2_ref_polyeta_unpack((l_struct_OC_poly *)llvm_cbe_tmp__83, ( char *)llvm_cbe_tmp__84);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = getelementptr inbounds %%struct.polyveck* %%s1, i64 0, i32 0, i64 3, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_960_count);
  llvm_cbe_tmp__85 = (l_struct_OC_poly *)(&llvm_cbe_s1->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = getelementptr inbounds i8* %%sk, i64 400, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_961_count);
  llvm_cbe_tmp__86 = ( char *)(&llvm_cbe_sk[(((signed long long )400ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_polyeta_unpack(%%struct.poly* %%18, i8* %%19) nounwind, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_962_count);
   /*tail*/ pqcrystals_dilithium2_ref_polyeta_unpack((l_struct_OC_poly *)llvm_cbe_tmp__85, ( char *)llvm_cbe_tmp__86);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = getelementptr inbounds %%struct.polyveck* %%s2, i64 0, i32 0, i64 0, !dbg !11 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_1012_count);
  llvm_cbe_tmp__87 = (l_struct_OC_poly *)(&llvm_cbe_s2->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = getelementptr inbounds i8* %%sk, i64 496, !dbg !11 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_1013_count);
  llvm_cbe_tmp__88 = ( char *)(&llvm_cbe_sk[(((signed long long )496ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_polyeta_unpack(%%struct.poly* %%20, i8* %%21) nounwind, !dbg !11 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_1014_count);
   /*tail*/ pqcrystals_dilithium2_ref_polyeta_unpack((l_struct_OC_poly *)llvm_cbe_tmp__87, ( char *)llvm_cbe_tmp__88);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = getelementptr inbounds %%struct.polyveck* %%s2, i64 0, i32 0, i64 1, !dbg !11 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_1040_count);
  llvm_cbe_tmp__89 = (l_struct_OC_poly *)(&llvm_cbe_s2->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = getelementptr inbounds i8* %%sk, i64 592, !dbg !11 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_1041_count);
  llvm_cbe_tmp__90 = ( char *)(&llvm_cbe_sk[(((signed long long )592ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_polyeta_unpack(%%struct.poly* %%22, i8* %%23) nounwind, !dbg !11 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_1042_count);
   /*tail*/ pqcrystals_dilithium2_ref_polyeta_unpack((l_struct_OC_poly *)llvm_cbe_tmp__89, ( char *)llvm_cbe_tmp__90);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = getelementptr inbounds %%struct.polyveck* %%s2, i64 0, i32 0, i64 2, !dbg !11 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_1068_count);
  llvm_cbe_tmp__91 = (l_struct_OC_poly *)(&llvm_cbe_s2->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = getelementptr inbounds i8* %%sk, i64 688, !dbg !11 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_1069_count);
  llvm_cbe_tmp__92 = ( char *)(&llvm_cbe_sk[(((signed long long )688ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_polyeta_unpack(%%struct.poly* %%24, i8* %%25) nounwind, !dbg !11 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_1070_count);
   /*tail*/ pqcrystals_dilithium2_ref_polyeta_unpack((l_struct_OC_poly *)llvm_cbe_tmp__91, ( char *)llvm_cbe_tmp__92);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = getelementptr inbounds %%struct.polyveck* %%s2, i64 0, i32 0, i64 3, !dbg !11 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_1096_count);
  llvm_cbe_tmp__93 = (l_struct_OC_poly *)(&llvm_cbe_s2->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = getelementptr inbounds i8* %%sk, i64 784, !dbg !11 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_1097_count);
  llvm_cbe_tmp__94 = ( char *)(&llvm_cbe_sk[(((signed long long )784ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_polyeta_unpack(%%struct.poly* %%26, i8* %%27) nounwind, !dbg !11 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_1098_count);
   /*tail*/ pqcrystals_dilithium2_ref_polyeta_unpack((l_struct_OC_poly *)llvm_cbe_tmp__93, ( char *)llvm_cbe_tmp__94);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = getelementptr inbounds %%struct.polyveck* %%t0, i64 0, i32 0, i64 0, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_1148_count);
  llvm_cbe_tmp__95 = (l_struct_OC_poly *)(&llvm_cbe_t0->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = getelementptr inbounds i8* %%sk, i64 880, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_1149_count);
  llvm_cbe_tmp__96 = ( char *)(&llvm_cbe_sk[(((signed long long )880ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_polyt0_unpack(%%struct.poly* %%28, i8* %%29) nounwind, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_1150_count);
   /*tail*/ pqcrystals_dilithium2_ref_polyt0_unpack((l_struct_OC_poly *)llvm_cbe_tmp__95, ( char *)llvm_cbe_tmp__96);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = getelementptr inbounds %%struct.polyveck* %%t0, i64 0, i32 0, i64 1, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_1176_count);
  llvm_cbe_tmp__97 = (l_struct_OC_poly *)(&llvm_cbe_t0->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = getelementptr inbounds i8* %%sk, i64 1296, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_1177_count);
  llvm_cbe_tmp__98 = ( char *)(&llvm_cbe_sk[(((signed long long )1296ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_polyt0_unpack(%%struct.poly* %%30, i8* %%31) nounwind, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_1178_count);
   /*tail*/ pqcrystals_dilithium2_ref_polyt0_unpack((l_struct_OC_poly *)llvm_cbe_tmp__97, ( char *)llvm_cbe_tmp__98);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = getelementptr inbounds %%struct.polyveck* %%t0, i64 0, i32 0, i64 2, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_1204_count);
  llvm_cbe_tmp__99 = (l_struct_OC_poly *)(&llvm_cbe_t0->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = getelementptr inbounds i8* %%sk, i64 1712, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_1205_count);
  llvm_cbe_tmp__100 = ( char *)(&llvm_cbe_sk[(((signed long long )1712ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_polyt0_unpack(%%struct.poly* %%32, i8* %%33) nounwind, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_1206_count);
   /*tail*/ pqcrystals_dilithium2_ref_polyt0_unpack((l_struct_OC_poly *)llvm_cbe_tmp__99, ( char *)llvm_cbe_tmp__100);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = getelementptr inbounds %%struct.polyveck* %%t0, i64 0, i32 0, i64 3, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_1232_count);
  llvm_cbe_tmp__101 = (l_struct_OC_poly *)(&llvm_cbe_t0->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = getelementptr inbounds i8* %%sk, i64 2128, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_1233_count);
  llvm_cbe_tmp__102 = ( char *)(&llvm_cbe_sk[(((signed long long )2128ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_polyt0_unpack(%%struct.poly* %%34, i8* %%35) nounwind, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_1234_count);
   /*tail*/ pqcrystals_dilithium2_ref_polyt0_unpack((l_struct_OC_poly *)llvm_cbe_tmp__101, ( char *)llvm_cbe_tmp__102);
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_upack_sk}\n");
  return;
  do {     /* Syntactic loop '.preheader15' to make GCC happy */
llvm_cbe__2e_preheader15:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge216 = phi i32 [ %%40, %%.preheader15 ], [ 0, %%.preheader17  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_storemerge216_count);
  llvm_cbe_storemerge216 = (unsigned int )llvm_cbe_storemerge216__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge216 = 0x%X",llvm_cbe_storemerge216);
printf("\n = 0x%X",llvm_cbe_tmp__107);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = zext i32 %%storemerge216 to i64, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_1261_count);
  llvm_cbe_tmp__103 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge216&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__103);
if (AESL_DEBUG_TRACE)
printf("\n  %%.sum8 = add i64 %%36, 64, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe__2e_sum8_count);
  llvm_cbe__2e_sum8 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__103&18446744073709551615ull)) + ((unsigned long long )(64ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n.sum8 = 0x%I64X\n", ((unsigned long long )(llvm_cbe__2e_sum8&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = getelementptr inbounds i8* %%sk, i64 %%.sum8, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_1262_count);
  llvm_cbe_tmp__104 = ( char *)(&llvm_cbe_sk[(((signed long long )llvm_cbe__2e_sum8))]);
if (AESL_DEBUG_TRACE) {
printf("\n.sum8 = 0x%I64X",((signed long long )llvm_cbe__2e_sum8));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = load i8* %%37, align 1, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_1263_count);
  llvm_cbe_tmp__105 = (unsigned char )*llvm_cbe_tmp__104;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__105);
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = getelementptr inbounds i8* %%tr, i64 %%36, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_1264_count);
  llvm_cbe_tmp__106 = ( char *)(&llvm_cbe_tr[(((signed long long )llvm_cbe_tmp__103))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__103));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%38, i8* %%39, align 1, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_1265_count);
  *llvm_cbe_tmp__106 = llvm_cbe_tmp__105;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__105);
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = add i32 %%storemerge216, 1, !dbg !12 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_upack_sk  --> \n", ++aesl_llvm_cbe_1266_count);
  llvm_cbe_tmp__107 = (unsigned int )((unsigned int )(llvm_cbe_storemerge216&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__107&4294967295ull)));
  if (((llvm_cbe_tmp__107&4294967295U) == (48u&4294967295U))) {
    goto llvm_cbe__2e_preheader13;
  } else {
    llvm_cbe_storemerge216__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__107;   /* for PHI node */
    goto llvm_cbe__2e_preheader15;
  }

  } while (1); /* end of syntactic loop '.preheader15' */
}


void pqcrystals_dilithium2_ref_pack_sig( char *llvm_cbe_sig,  char *llvm_cbe_c, l_struct_OC_polyveck *llvm_cbe_z, l_struct_OC_polyveck *llvm_cbe_h) {
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
   char *llvm_cbe_tmp__109;
  static  unsigned long long aesl_llvm_cbe_1340_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__110;
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
  static  unsigned long long aesl_llvm_cbe_1352_count = 0;
  static  unsigned long long aesl_llvm_cbe_1353_count = 0;
  static  unsigned long long aesl_llvm_cbe_1354_count = 0;
  static  unsigned long long aesl_llvm_cbe_1355_count = 0;
  static  unsigned long long aesl_llvm_cbe_1356_count = 0;
  static  unsigned long long aesl_llvm_cbe_1357_count = 0;
  static  unsigned long long aesl_llvm_cbe_1358_count = 0;
   char *llvm_cbe_tmp__111;
  static  unsigned long long aesl_llvm_cbe_1359_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__112;
  static  unsigned long long aesl_llvm_cbe_1360_count = 0;
  static  unsigned long long aesl_llvm_cbe_1361_count = 0;
  static  unsigned long long aesl_llvm_cbe_1362_count = 0;
  static  unsigned long long aesl_llvm_cbe_1363_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_1375_count = 0;
  static  unsigned long long aesl_llvm_cbe_1376_count = 0;
  static  unsigned long long aesl_llvm_cbe_1377_count = 0;
   char *llvm_cbe_tmp__113;
  static  unsigned long long aesl_llvm_cbe_1378_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__114;
  static  unsigned long long aesl_llvm_cbe_1379_count = 0;
  static  unsigned long long aesl_llvm_cbe_1380_count = 0;
  static  unsigned long long aesl_llvm_cbe_1381_count = 0;
  static  unsigned long long aesl_llvm_cbe_1382_count = 0;
  static  unsigned long long aesl_llvm_cbe_1383_count = 0;
  static  unsigned long long aesl_llvm_cbe_1384_count = 0;
  static  unsigned long long aesl_llvm_cbe_1385_count = 0;
  static  unsigned long long aesl_llvm_cbe_1386_count = 0;
  static  unsigned long long aesl_llvm_cbe_1387_count = 0;
  static  unsigned long long aesl_llvm_cbe_1388_count = 0;
  static  unsigned long long aesl_llvm_cbe_1389_count = 0;
  static  unsigned long long aesl_llvm_cbe_1390_count = 0;
  static  unsigned long long aesl_llvm_cbe_1391_count = 0;
  static  unsigned long long aesl_llvm_cbe_1392_count = 0;
  static  unsigned long long aesl_llvm_cbe_1393_count = 0;
  static  unsigned long long aesl_llvm_cbe_1394_count = 0;
  static  unsigned long long aesl_llvm_cbe_1395_count = 0;
  static  unsigned long long aesl_llvm_cbe_1396_count = 0;
   char *llvm_cbe_tmp__115;
  static  unsigned long long aesl_llvm_cbe_1397_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__116;
  static  unsigned long long aesl_llvm_cbe_1398_count = 0;
  static  unsigned long long aesl_llvm_cbe_1399_count = 0;
  static  unsigned long long aesl_llvm_cbe_1400_count = 0;
  static  unsigned long long aesl_llvm_cbe_1401_count = 0;
  static  unsigned long long aesl_llvm_cbe_1402_count = 0;
  static  unsigned long long aesl_llvm_cbe_1403_count = 0;
  static  unsigned long long aesl_llvm_cbe_1404_count = 0;
  static  unsigned long long aesl_llvm_cbe_1405_count = 0;
  static  unsigned long long aesl_llvm_cbe_1406_count = 0;
  static  unsigned long long aesl_llvm_cbe_1407_count = 0;
  static  unsigned long long aesl_llvm_cbe_1408_count = 0;
  static  unsigned long long aesl_llvm_cbe_1409_count = 0;
  static  unsigned long long aesl_llvm_cbe_1410_count = 0;
  static  unsigned long long aesl_llvm_cbe_1411_count = 0;
  static  unsigned long long aesl_llvm_cbe_1412_count = 0;
  static  unsigned long long aesl_llvm_cbe_1413_count = 0;
  static  unsigned long long aesl_llvm_cbe_1414_count = 0;
  static  unsigned long long aesl_llvm_cbe_1415_count = 0;
  static  unsigned long long aesl_llvm_cbe_1416_count = 0;
  static  unsigned long long aesl_llvm_cbe_1417_count = 0;
  static  unsigned long long aesl_llvm_cbe_1418_count = 0;
  static  unsigned long long aesl_llvm_cbe_1419_count = 0;
  static  unsigned long long aesl_llvm_cbe_1420_count = 0;
  static  unsigned long long aesl_llvm_cbe_1421_count = 0;
  static  unsigned long long aesl_llvm_cbe_1422_count = 0;
  static  unsigned long long aesl_llvm_cbe_1423_count = 0;
  static  unsigned long long aesl_llvm_cbe_1424_count = 0;
  static  unsigned long long aesl_llvm_cbe_1425_count = 0;
  static  unsigned long long aesl_llvm_cbe_1426_count = 0;
  static  unsigned long long aesl_llvm_cbe_1427_count = 0;
  static  unsigned long long aesl_llvm_cbe_1428_count = 0;
  static  unsigned long long aesl_llvm_cbe_1429_count = 0;
  static  unsigned long long aesl_llvm_cbe_scevgep_count = 0;
   char *llvm_cbe_scevgep;
  static  unsigned long long aesl_llvm_cbe_1430_count = 0;
   char *llvm_cbe_tmp__117;
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
  static  unsigned long long aesl_llvm_cbe_1441_count = 0;
  static  unsigned long long aesl_llvm_cbe_1442_count = 0;
  static  unsigned long long aesl_llvm_cbe_1443_count = 0;
  static  unsigned long long aesl_llvm_cbe_1444_count = 0;
  static  unsigned long long aesl_llvm_cbe_1445_count = 0;
  static  unsigned long long aesl_llvm_cbe_1446_count = 0;
  static  unsigned long long aesl_llvm_cbe_1447_count = 0;
  static  unsigned long long aesl_llvm_cbe_1448_count = 0;
  static  unsigned long long aesl_llvm_cbe_1449_count = 0;
  static  unsigned long long aesl_llvm_cbe_1450_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge16_count = 0;
  unsigned int llvm_cbe_storemerge16;
  unsigned int llvm_cbe_storemerge16__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1451_count = 0;
  unsigned long long llvm_cbe_tmp__118;
  static  unsigned long long aesl_llvm_cbe_1452_count = 0;
   char *llvm_cbe_tmp__119;
  static  unsigned long long aesl_llvm_cbe_1453_count = 0;
  unsigned char llvm_cbe_tmp__120;
  static  unsigned long long aesl_llvm_cbe_1454_count = 0;
   char *llvm_cbe_tmp__121;
  static  unsigned long long aesl_llvm_cbe_1455_count = 0;
  static  unsigned long long aesl_llvm_cbe_1456_count = 0;
  unsigned int llvm_cbe_tmp__122;
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
  static  unsigned long long aesl_llvm_cbe_exitcond20_count = 0;
  static  unsigned long long aesl_llvm_cbe_1473_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge49_count = 0;
  unsigned int llvm_cbe_storemerge49;
  unsigned int llvm_cbe_storemerge49__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1474_count = 0;
  unsigned int llvm_cbe_tmp__123;
  unsigned int llvm_cbe_tmp__123__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1475_count = 0;
  unsigned long long llvm_cbe_tmp__124;
  static  unsigned long long aesl_llvm_cbe_1476_count = 0;
  signed int *llvm_cbe_tmp__125;
  static  unsigned long long aesl_llvm_cbe_1477_count = 0;
  unsigned int llvm_cbe_tmp__126;
  static  unsigned long long aesl_llvm_cbe_1478_count = 0;
  static  unsigned long long aesl_llvm_cbe_1479_count = 0;
  static  unsigned long long aesl_llvm_cbe_1480_count = 0;
  unsigned char llvm_cbe_tmp__127;
  static  unsigned long long aesl_llvm_cbe_1481_count = 0;
  unsigned int llvm_cbe_tmp__128;
  static  unsigned long long aesl_llvm_cbe_1482_count = 0;
  static  unsigned long long aesl_llvm_cbe_1483_count = 0;
  static  unsigned long long aesl_llvm_cbe_1484_count = 0;
  static  unsigned long long aesl_llvm_cbe_1485_count = 0;
  unsigned long long llvm_cbe_tmp__129;
  static  unsigned long long aesl_llvm_cbe__2e_sum5_count = 0;
  unsigned long long llvm_cbe__2e_sum5;
  static  unsigned long long aesl_llvm_cbe_1486_count = 0;
   char *llvm_cbe_tmp__130;
  static  unsigned long long aesl_llvm_cbe_1487_count = 0;
  static  unsigned long long aesl_llvm_cbe_1488_count = 0;
  static  unsigned long long aesl_llvm_cbe_1489_count = 0;
  unsigned int llvm_cbe_tmp__131;
  unsigned int llvm_cbe_tmp__131__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1490_count = 0;
  unsigned int llvm_cbe_tmp__132;
  static  unsigned long long aesl_llvm_cbe_1491_count = 0;
  static  unsigned long long aesl_llvm_cbe_1492_count = 0;
  static  unsigned long long aesl_llvm_cbe_1493_count = 0;
  static  unsigned long long aesl_llvm_cbe_1494_count = 0;
  static  unsigned long long aesl_llvm_cbe_1495_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_1496_count = 0;
  static  unsigned long long aesl_llvm_cbe_1497_count = 0;
  unsigned char llvm_cbe_tmp__133;
  static  unsigned long long aesl_llvm_cbe_1498_count = 0;
   char *llvm_cbe_tmp__134;
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
  static  unsigned long long aesl_llvm_cbe_1518_count = 0;
  static  unsigned long long aesl_llvm_cbe_1519_count = 0;
  static  unsigned long long aesl_llvm_cbe_1520_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge49_2e_1_count = 0;
  unsigned int llvm_cbe_storemerge49_2e_1;
  unsigned int llvm_cbe_storemerge49_2e_1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1521_count = 0;
  unsigned int llvm_cbe_tmp__135;
  unsigned int llvm_cbe_tmp__135__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1522_count = 0;
  unsigned long long llvm_cbe_tmp__136;
  static  unsigned long long aesl_llvm_cbe_1523_count = 0;
  signed int *llvm_cbe_tmp__137;
  static  unsigned long long aesl_llvm_cbe_1524_count = 0;
  unsigned int llvm_cbe_tmp__138;
  static  unsigned long long aesl_llvm_cbe_1525_count = 0;
  static  unsigned long long aesl_llvm_cbe_1526_count = 0;
  static  unsigned long long aesl_llvm_cbe_1527_count = 0;
  unsigned char llvm_cbe_tmp__139;
  static  unsigned long long aesl_llvm_cbe_1528_count = 0;
  unsigned int llvm_cbe_tmp__140;
  static  unsigned long long aesl_llvm_cbe_1529_count = 0;
  static  unsigned long long aesl_llvm_cbe_1530_count = 0;
  static  unsigned long long aesl_llvm_cbe_1531_count = 0;
  static  unsigned long long aesl_llvm_cbe_1532_count = 0;
  unsigned long long llvm_cbe_tmp__141;
  static  unsigned long long aesl_llvm_cbe__2e_sum5_2e_1_count = 0;
  unsigned long long llvm_cbe__2e_sum5_2e_1;
  static  unsigned long long aesl_llvm_cbe_1533_count = 0;
   char *llvm_cbe_tmp__142;
  static  unsigned long long aesl_llvm_cbe_1534_count = 0;
  static  unsigned long long aesl_llvm_cbe_1535_count = 0;
  static  unsigned long long aesl_llvm_cbe_1536_count = 0;
  unsigned int llvm_cbe_tmp__143;
  unsigned int llvm_cbe_tmp__143__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1537_count = 0;
  unsigned int llvm_cbe_tmp__144;
  static  unsigned long long aesl_llvm_cbe_1538_count = 0;
  static  unsigned long long aesl_llvm_cbe_1539_count = 0;
  static  unsigned long long aesl_llvm_cbe_1540_count = 0;
  static  unsigned long long aesl_llvm_cbe_1541_count = 0;
  static  unsigned long long aesl_llvm_cbe_1542_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_2e_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_1543_count = 0;
  static  unsigned long long aesl_llvm_cbe_1544_count = 0;
  unsigned char llvm_cbe_tmp__145;
  static  unsigned long long aesl_llvm_cbe_1545_count = 0;
   char *llvm_cbe_tmp__146;
  static  unsigned long long aesl_llvm_cbe_1546_count = 0;
  static  unsigned long long aesl_llvm_cbe_1547_count = 0;
  static  unsigned long long aesl_llvm_cbe_1548_count = 0;
  static  unsigned long long aesl_llvm_cbe_1549_count = 0;
  static  unsigned long long aesl_llvm_cbe_1550_count = 0;
  static  unsigned long long aesl_llvm_cbe_1551_count = 0;
  static  unsigned long long aesl_llvm_cbe_1552_count = 0;
  static  unsigned long long aesl_llvm_cbe_1553_count = 0;
  static  unsigned long long aesl_llvm_cbe_1554_count = 0;
  static  unsigned long long aesl_llvm_cbe_1555_count = 0;
  static  unsigned long long aesl_llvm_cbe_1556_count = 0;
  static  unsigned long long aesl_llvm_cbe_1557_count = 0;
  static  unsigned long long aesl_llvm_cbe_1558_count = 0;
  static  unsigned long long aesl_llvm_cbe_1559_count = 0;
  static  unsigned long long aesl_llvm_cbe_1560_count = 0;
  static  unsigned long long aesl_llvm_cbe_1561_count = 0;
  static  unsigned long long aesl_llvm_cbe_1562_count = 0;
  static  unsigned long long aesl_llvm_cbe_1563_count = 0;
  static  unsigned long long aesl_llvm_cbe_1564_count = 0;
  static  unsigned long long aesl_llvm_cbe_1565_count = 0;
  static  unsigned long long aesl_llvm_cbe_1566_count = 0;
  static  unsigned long long aesl_llvm_cbe_1567_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge49_2e_2_count = 0;
  unsigned int llvm_cbe_storemerge49_2e_2;
  unsigned int llvm_cbe_storemerge49_2e_2__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1568_count = 0;
  unsigned int llvm_cbe_tmp__147;
  unsigned int llvm_cbe_tmp__147__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1569_count = 0;
  unsigned long long llvm_cbe_tmp__148;
  static  unsigned long long aesl_llvm_cbe_1570_count = 0;
  signed int *llvm_cbe_tmp__149;
  static  unsigned long long aesl_llvm_cbe_1571_count = 0;
  unsigned int llvm_cbe_tmp__150;
  static  unsigned long long aesl_llvm_cbe_1572_count = 0;
  static  unsigned long long aesl_llvm_cbe_1573_count = 0;
  static  unsigned long long aesl_llvm_cbe_1574_count = 0;
  unsigned char llvm_cbe_tmp__151;
  static  unsigned long long aesl_llvm_cbe_1575_count = 0;
  unsigned int llvm_cbe_tmp__152;
  static  unsigned long long aesl_llvm_cbe_1576_count = 0;
  static  unsigned long long aesl_llvm_cbe_1577_count = 0;
  static  unsigned long long aesl_llvm_cbe_1578_count = 0;
  static  unsigned long long aesl_llvm_cbe_1579_count = 0;
  unsigned long long llvm_cbe_tmp__153;
  static  unsigned long long aesl_llvm_cbe__2e_sum5_2e_2_count = 0;
  unsigned long long llvm_cbe__2e_sum5_2e_2;
  static  unsigned long long aesl_llvm_cbe_1580_count = 0;
   char *llvm_cbe_tmp__154;
  static  unsigned long long aesl_llvm_cbe_1581_count = 0;
  static  unsigned long long aesl_llvm_cbe_1582_count = 0;
  static  unsigned long long aesl_llvm_cbe_1583_count = 0;
  unsigned int llvm_cbe_tmp__155;
  unsigned int llvm_cbe_tmp__155__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1584_count = 0;
  unsigned int llvm_cbe_tmp__156;
  static  unsigned long long aesl_llvm_cbe_1585_count = 0;
  static  unsigned long long aesl_llvm_cbe_1586_count = 0;
  static  unsigned long long aesl_llvm_cbe_1587_count = 0;
  static  unsigned long long aesl_llvm_cbe_1588_count = 0;
  static  unsigned long long aesl_llvm_cbe_1589_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_2e_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_1590_count = 0;
  static  unsigned long long aesl_llvm_cbe_1591_count = 0;
  unsigned char llvm_cbe_tmp__157;
  static  unsigned long long aesl_llvm_cbe_1592_count = 0;
   char *llvm_cbe_tmp__158;
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
  static  unsigned long long aesl_llvm_cbe_storemerge49_2e_3_count = 0;
  unsigned int llvm_cbe_storemerge49_2e_3;
  unsigned int llvm_cbe_storemerge49_2e_3__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1615_count = 0;
  unsigned int llvm_cbe_tmp__159;
  unsigned int llvm_cbe_tmp__159__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1616_count = 0;
  unsigned long long llvm_cbe_tmp__160;
  static  unsigned long long aesl_llvm_cbe_1617_count = 0;
  signed int *llvm_cbe_tmp__161;
  static  unsigned long long aesl_llvm_cbe_1618_count = 0;
  unsigned int llvm_cbe_tmp__162;
  static  unsigned long long aesl_llvm_cbe_1619_count = 0;
  static  unsigned long long aesl_llvm_cbe_1620_count = 0;
  static  unsigned long long aesl_llvm_cbe_1621_count = 0;
  unsigned char llvm_cbe_tmp__163;
  static  unsigned long long aesl_llvm_cbe_1622_count = 0;
  unsigned int llvm_cbe_tmp__164;
  static  unsigned long long aesl_llvm_cbe_1623_count = 0;
  static  unsigned long long aesl_llvm_cbe_1624_count = 0;
  static  unsigned long long aesl_llvm_cbe_1625_count = 0;
  static  unsigned long long aesl_llvm_cbe_1626_count = 0;
  unsigned long long llvm_cbe_tmp__165;
  static  unsigned long long aesl_llvm_cbe__2e_sum5_2e_3_count = 0;
  unsigned long long llvm_cbe__2e_sum5_2e_3;
  static  unsigned long long aesl_llvm_cbe_1627_count = 0;
   char *llvm_cbe_tmp__166;
  static  unsigned long long aesl_llvm_cbe_1628_count = 0;
  static  unsigned long long aesl_llvm_cbe_1629_count = 0;
  static  unsigned long long aesl_llvm_cbe_1630_count = 0;
  unsigned int llvm_cbe_tmp__167;
  unsigned int llvm_cbe_tmp__167__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1631_count = 0;
  unsigned int llvm_cbe_tmp__168;
  static  unsigned long long aesl_llvm_cbe_1632_count = 0;
  static  unsigned long long aesl_llvm_cbe_1633_count = 0;
  static  unsigned long long aesl_llvm_cbe_1634_count = 0;
  static  unsigned long long aesl_llvm_cbe_1635_count = 0;
  static  unsigned long long aesl_llvm_cbe_1636_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_2e_3_count = 0;
  static  unsigned long long aesl_llvm_cbe_1637_count = 0;
  static  unsigned long long aesl_llvm_cbe_1638_count = 0;
  unsigned char llvm_cbe_tmp__169;
  static  unsigned long long aesl_llvm_cbe_1639_count = 0;
   char *llvm_cbe_tmp__170;
  static  unsigned long long aesl_llvm_cbe_1640_count = 0;
  static  unsigned long long aesl_llvm_cbe_1641_count = 0;
  static  unsigned long long aesl_llvm_cbe_1642_count = 0;
  static  unsigned long long aesl_llvm_cbe_1643_count = 0;
  static  unsigned long long aesl_llvm_cbe_1644_count = 0;
  static  unsigned long long aesl_llvm_cbe_1645_count = 0;
  static  unsigned long long aesl_llvm_cbe_1646_count = 0;
  static  unsigned long long aesl_llvm_cbe_1647_count = 0;
  static  unsigned long long aesl_llvm_cbe_1648_count = 0;
  static  unsigned long long aesl_llvm_cbe_1649_count = 0;
  static  unsigned long long aesl_llvm_cbe_1650_count = 0;
  static  unsigned long long aesl_llvm_cbe_1651_count = 0;
  static  unsigned long long aesl_llvm_cbe_1652_count = 0;
  static  unsigned long long aesl_llvm_cbe_1653_count = 0;
  static  unsigned long long aesl_llvm_cbe_1654_count = 0;
  static  unsigned long long aesl_llvm_cbe_1655_count = 0;
  static  unsigned long long aesl_llvm_cbe_1656_count = 0;
  static  unsigned long long aesl_llvm_cbe_1657_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_pack_sig\n");
  llvm_cbe_storemerge16__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__171;

llvm_cbe__2e_preheader14:
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds i8* %%sig, i64 32, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1339_count);
  llvm_cbe_tmp__109 = ( char *)(&llvm_cbe_sig[(((signed long long )32ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds %%struct.polyveck* %%z, i64 0, i32 0, i64 0, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1340_count);
  llvm_cbe_tmp__110 = (l_struct_OC_poly *)(&llvm_cbe_z->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_polyz_pack(i8* %%1, %%struct.poly* %%2) nounwind, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1341_count);
   /*tail*/ pqcrystals_dilithium2_ref_polyz_pack(( char *)llvm_cbe_tmp__109, (l_struct_OC_poly *)llvm_cbe_tmp__110);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds i8* %%sig, i64 608, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1358_count);
  llvm_cbe_tmp__111 = ( char *)(&llvm_cbe_sig[(((signed long long )608ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds %%struct.polyveck* %%z, i64 0, i32 0, i64 1, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1359_count);
  llvm_cbe_tmp__112 = (l_struct_OC_poly *)(&llvm_cbe_z->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_polyz_pack(i8* %%3, %%struct.poly* %%4) nounwind, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1360_count);
   /*tail*/ pqcrystals_dilithium2_ref_polyz_pack(( char *)llvm_cbe_tmp__111, (l_struct_OC_poly *)llvm_cbe_tmp__112);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds i8* %%sig, i64 1184, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1377_count);
  llvm_cbe_tmp__113 = ( char *)(&llvm_cbe_sig[(((signed long long )1184ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds %%struct.polyveck* %%z, i64 0, i32 0, i64 2, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1378_count);
  llvm_cbe_tmp__114 = (l_struct_OC_poly *)(&llvm_cbe_z->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_polyz_pack(i8* %%5, %%struct.poly* %%6) nounwind, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1379_count);
   /*tail*/ pqcrystals_dilithium2_ref_polyz_pack(( char *)llvm_cbe_tmp__113, (l_struct_OC_poly *)llvm_cbe_tmp__114);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds i8* %%sig, i64 1760, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1396_count);
  llvm_cbe_tmp__115 = ( char *)(&llvm_cbe_sig[(((signed long long )1760ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds %%struct.polyveck* %%z, i64 0, i32 0, i64 3, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1397_count);
  llvm_cbe_tmp__116 = (l_struct_OC_poly *)(&llvm_cbe_z->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_polyz_pack(i8* %%7, %%struct.poly* %%8) nounwind, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1398_count);
   /*tail*/ pqcrystals_dilithium2_ref_polyz_pack(( char *)llvm_cbe_tmp__115, (l_struct_OC_poly *)llvm_cbe_tmp__116);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%scevgep = getelementptr i8* %%sig, i64 233 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_scevgep_count);
  llvm_cbe_scevgep = ( char *)(&llvm_cbe_sig[(((signed long long )2336ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = call i8* @memset(i8* %%scevgep, i32 0, i64 84 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1430_count);
  ( char *)memset(( char *)llvm_cbe_scevgep, 0u, 84ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",0u);
printf("\nArgument  = 0x%I64X",84ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__117);
}
  llvm_cbe_storemerge49__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  llvm_cbe_tmp__123__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__172;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__171:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge16 = phi i32 [ 0, %%0 ], [ %%15, %%10  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_storemerge16_count);
  llvm_cbe_storemerge16 = (unsigned int )llvm_cbe_storemerge16__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge16 = 0x%X",llvm_cbe_storemerge16);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__122);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = zext i32 %%storemerge16 to i64, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1451_count);
  llvm_cbe_tmp__118 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge16&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__118);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = getelementptr inbounds i8* %%c, i64 %%11, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1452_count);
  llvm_cbe_tmp__119 = ( char *)(&llvm_cbe_c[(((signed long long )llvm_cbe_tmp__118))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__118));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = load i8* %%12, align 1, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1453_count);
  llvm_cbe_tmp__120 = (unsigned char )*llvm_cbe_tmp__119;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__120);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = getelementptr inbounds i8* %%sig, i64 %%11, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1454_count);
  llvm_cbe_tmp__121 = ( char *)(&llvm_cbe_sig[(((signed long long )llvm_cbe_tmp__118))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__118));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%13, i8* %%14, align 1, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1455_count);
  *llvm_cbe_tmp__121 = llvm_cbe_tmp__120;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__120);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = add i32 %%storemerge16, 1, !dbg !11 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1456_count);
  llvm_cbe_tmp__122 = (unsigned int )((unsigned int )(llvm_cbe_storemerge16&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__122&4294967295ull)));
  if (((llvm_cbe_tmp__122&4294967295U) == (32u&4294967295U))) {
    goto llvm_cbe__2e_preheader14;
  } else {
    llvm_cbe_storemerge16__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__122;   /* for PHI node */
    goto llvm_cbe_tmp__171;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__172:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge49 = phi i32 [ 0, %%.preheader14 ], [ %%29, %%27  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_storemerge49_count);
  llvm_cbe_storemerge49 = (unsigned int )llvm_cbe_storemerge49__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge49 = 0x%X",llvm_cbe_storemerge49);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__132);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = phi i32 [ 0, %%.preheader14 ], [ %%28, %%27  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1474_count);
  llvm_cbe_tmp__123 = (unsigned int )llvm_cbe_tmp__123__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__123);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__131);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = zext i32 %%storemerge49 to i64, !dbg !11 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1475_count);
  llvm_cbe_tmp__124 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge49&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__124);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = getelementptr inbounds %%struct.polyveck* %%h, i64 0, i32 0, i64 0, i32 0, i64 %%18, !dbg !11 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1476_count);
  llvm_cbe_tmp__125 = (signed int *)(&llvm_cbe_h->field0[(((signed long long )0ull))].field0[(((signed long long )llvm_cbe_tmp__124))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__124));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = load i32* %%19, align 4, !dbg !11 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1477_count);
  llvm_cbe_tmp__126 = (unsigned int )*llvm_cbe_tmp__125;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__126);
  if (((llvm_cbe_tmp__126&4294967295U) == (0u&4294967295U))) {
    llvm_cbe_tmp__131__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__123;   /* for PHI node */
    goto llvm_cbe_tmp__173;
  } else {
    goto llvm_cbe_tmp__174;
  }

llvm_cbe_tmp__173:
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = phi i32 [ %%24, %%22 ], [ %%17, %%16  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1489_count);
  llvm_cbe_tmp__131 = (unsigned int )llvm_cbe_tmp__131__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__131);
printf("\n = 0x%X",llvm_cbe_tmp__128);
printf("\n = 0x%X",llvm_cbe_tmp__123);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = add i32 %%storemerge49, 1, !dbg !12 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1490_count);
  llvm_cbe_tmp__132 = (unsigned int )((unsigned int )(llvm_cbe_storemerge49&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__132&4294967295ull)));
  if (((llvm_cbe_tmp__132&4294967295U) == (256u&4294967295U))) {
    goto llvm_cbe__2e_preheader_2e_1;
  } else {
    llvm_cbe_storemerge49__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__132;   /* for PHI node */
    llvm_cbe_tmp__123__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__131;   /* for PHI node */
    goto llvm_cbe_tmp__172;
  }

llvm_cbe_tmp__174:
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = trunc i32 %%storemerge49 to i8, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1480_count);
  llvm_cbe_tmp__127 = (unsigned char )((unsigned char )llvm_cbe_storemerge49&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__127);
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = add i32 %%17, 1, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1481_count);
  llvm_cbe_tmp__128 = (unsigned int )((unsigned int )(llvm_cbe_tmp__123&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__128&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = zext i32 %%17 to i64, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1485_count);
  llvm_cbe_tmp__129 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__123&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__129);
if (AESL_DEBUG_TRACE)
printf("\n  %%.sum5 = add i64 %%25, 2336, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe__2e_sum5_count);
  llvm_cbe__2e_sum5 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__129&18446744073709551615ull)) + ((unsigned long long )(2336ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n.sum5 = 0x%I64X\n", ((unsigned long long )(llvm_cbe__2e_sum5&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = getelementptr inbounds i8* %%sig, i64 %%.sum5, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1486_count);
  llvm_cbe_tmp__130 = ( char *)(&llvm_cbe_sig[(((signed long long )llvm_cbe__2e_sum5))]);
if (AESL_DEBUG_TRACE) {
printf("\n.sum5 = 0x%I64X",((signed long long )llvm_cbe__2e_sum5));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%23, i8* %%26, align 1, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1487_count);
  *llvm_cbe_tmp__130 = llvm_cbe_tmp__127;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__127);
  llvm_cbe_tmp__131__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__128;   /* for PHI node */
  goto llvm_cbe_tmp__173;

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e_preheader_2e_1:
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = trunc i32 %%28 to i8, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1497_count);
  llvm_cbe_tmp__133 = (unsigned char )((unsigned char )llvm_cbe_tmp__131&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__133);
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = getelementptr inbounds i8* %%sig, i64 2416, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1498_count);
  llvm_cbe_tmp__134 = ( char *)(&llvm_cbe_sig[(((signed long long )2416ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%30, i8* %%31, align 1, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1499_count);
  *llvm_cbe_tmp__134 = llvm_cbe_tmp__133;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__133);
  llvm_cbe_storemerge49_2e_1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  llvm_cbe_tmp__135__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__131;   /* for PHI node */
  goto llvm_cbe_tmp__175;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__175:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge49.1 = phi i32 [ 0, %%.preheader.1 ], [ %%45, %%43  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_storemerge49_2e_1_count);
  llvm_cbe_storemerge49_2e_1 = (unsigned int )llvm_cbe_storemerge49_2e_1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge49.1 = 0x%X",llvm_cbe_storemerge49_2e_1);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__144);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = phi i32 [ %%28, %%.preheader.1 ], [ %%44, %%43  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1521_count);
  llvm_cbe_tmp__135 = (unsigned int )llvm_cbe_tmp__135__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__135);
printf("\n = 0x%X",llvm_cbe_tmp__131);
printf("\n = 0x%X",llvm_cbe_tmp__143);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = zext i32 %%storemerge49.1 to i64, !dbg !11 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1522_count);
  llvm_cbe_tmp__136 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge49_2e_1&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__136);
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = getelementptr inbounds %%struct.polyveck* %%h, i64 0, i32 0, i64 1, i32 0, i64 %%34, !dbg !11 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1523_count);
  llvm_cbe_tmp__137 = (signed int *)(&llvm_cbe_h->field0[(((signed long long )1ull))].field0[(((signed long long )llvm_cbe_tmp__136))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__136));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = load i32* %%35, align 4, !dbg !11 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1524_count);
  llvm_cbe_tmp__138 = (unsigned int )*llvm_cbe_tmp__137;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__138);
  if (((llvm_cbe_tmp__138&4294967295U) == (0u&4294967295U))) {
    llvm_cbe_tmp__143__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__135;   /* for PHI node */
    goto llvm_cbe_tmp__176;
  } else {
    goto llvm_cbe_tmp__177;
  }

llvm_cbe_tmp__176:
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = phi i32 [ %%40, %%38 ], [ %%33, %%32  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1536_count);
  llvm_cbe_tmp__143 = (unsigned int )llvm_cbe_tmp__143__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__143);
printf("\n = 0x%X",llvm_cbe_tmp__140);
printf("\n = 0x%X",llvm_cbe_tmp__135);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = add i32 %%storemerge49.1, 1, !dbg !12 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1537_count);
  llvm_cbe_tmp__144 = (unsigned int )((unsigned int )(llvm_cbe_storemerge49_2e_1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__144&4294967295ull)));
  if (((llvm_cbe_tmp__144&4294967295U) == (256u&4294967295U))) {
    goto llvm_cbe__2e_preheader_2e_2;
  } else {
    llvm_cbe_storemerge49_2e_1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__144;   /* for PHI node */
    llvm_cbe_tmp__135__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__143;   /* for PHI node */
    goto llvm_cbe_tmp__175;
  }

llvm_cbe_tmp__177:
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = trunc i32 %%storemerge49.1 to i8, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1527_count);
  llvm_cbe_tmp__139 = (unsigned char )((unsigned char )llvm_cbe_storemerge49_2e_1&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__139);
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = add i32 %%33, 1, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1528_count);
  llvm_cbe_tmp__140 = (unsigned int )((unsigned int )(llvm_cbe_tmp__135&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__140&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = zext i32 %%33 to i64, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1532_count);
  llvm_cbe_tmp__141 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__135&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__141);
if (AESL_DEBUG_TRACE)
printf("\n  %%.sum5.1 = add i64 %%41, 2336, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe__2e_sum5_2e_1_count);
  llvm_cbe__2e_sum5_2e_1 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__141&18446744073709551615ull)) + ((unsigned long long )(2336ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n.sum5.1 = 0x%I64X\n", ((unsigned long long )(llvm_cbe__2e_sum5_2e_1&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = getelementptr inbounds i8* %%sig, i64 %%.sum5.1, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1533_count);
  llvm_cbe_tmp__142 = ( char *)(&llvm_cbe_sig[(((signed long long )llvm_cbe__2e_sum5_2e_1))]);
if (AESL_DEBUG_TRACE) {
printf("\n.sum5.1 = 0x%I64X",((signed long long )llvm_cbe__2e_sum5_2e_1));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%39, i8* %%42, align 1, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1534_count);
  *llvm_cbe_tmp__142 = llvm_cbe_tmp__139;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__139);
  llvm_cbe_tmp__143__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__140;   /* for PHI node */
  goto llvm_cbe_tmp__176;

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e_preheader_2e_2:
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = trunc i32 %%44 to i8, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1544_count);
  llvm_cbe_tmp__145 = (unsigned char )((unsigned char )llvm_cbe_tmp__143&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__145);
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = getelementptr inbounds i8* %%sig, i64 2417, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1545_count);
  llvm_cbe_tmp__146 = ( char *)(&llvm_cbe_sig[(((signed long long )2417ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%46, i8* %%47, align 1, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1546_count);
  *llvm_cbe_tmp__146 = llvm_cbe_tmp__145;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__145);
  llvm_cbe_storemerge49_2e_2__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  llvm_cbe_tmp__147__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__143;   /* for PHI node */
  goto llvm_cbe_tmp__178;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__178:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge49.2 = phi i32 [ 0, %%.preheader.2 ], [ %%61, %%59  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_storemerge49_2e_2_count);
  llvm_cbe_storemerge49_2e_2 = (unsigned int )llvm_cbe_storemerge49_2e_2__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge49.2 = 0x%X",llvm_cbe_storemerge49_2e_2);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__156);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = phi i32 [ %%44, %%.preheader.2 ], [ %%60, %%59  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1568_count);
  llvm_cbe_tmp__147 = (unsigned int )llvm_cbe_tmp__147__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__147);
printf("\n = 0x%X",llvm_cbe_tmp__143);
printf("\n = 0x%X",llvm_cbe_tmp__155);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = zext i32 %%storemerge49.2 to i64, !dbg !11 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1569_count);
  llvm_cbe_tmp__148 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge49_2e_2&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__148);
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = getelementptr inbounds %%struct.polyveck* %%h, i64 0, i32 0, i64 2, i32 0, i64 %%50, !dbg !11 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1570_count);
  llvm_cbe_tmp__149 = (signed int *)(&llvm_cbe_h->field0[(((signed long long )2ull))].field0[(((signed long long )llvm_cbe_tmp__148))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__148));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = load i32* %%51, align 4, !dbg !11 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1571_count);
  llvm_cbe_tmp__150 = (unsigned int )*llvm_cbe_tmp__149;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__150);
  if (((llvm_cbe_tmp__150&4294967295U) == (0u&4294967295U))) {
    llvm_cbe_tmp__155__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__147;   /* for PHI node */
    goto llvm_cbe_tmp__179;
  } else {
    goto llvm_cbe_tmp__180;
  }

llvm_cbe_tmp__179:
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = phi i32 [ %%56, %%54 ], [ %%49, %%48  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1583_count);
  llvm_cbe_tmp__155 = (unsigned int )llvm_cbe_tmp__155__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__155);
printf("\n = 0x%X",llvm_cbe_tmp__152);
printf("\n = 0x%X",llvm_cbe_tmp__147);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = add i32 %%storemerge49.2, 1, !dbg !12 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1584_count);
  llvm_cbe_tmp__156 = (unsigned int )((unsigned int )(llvm_cbe_storemerge49_2e_2&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__156&4294967295ull)));
  if (((llvm_cbe_tmp__156&4294967295U) == (256u&4294967295U))) {
    goto llvm_cbe__2e_preheader_2e_3;
  } else {
    llvm_cbe_storemerge49_2e_2__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__156;   /* for PHI node */
    llvm_cbe_tmp__147__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__155;   /* for PHI node */
    goto llvm_cbe_tmp__178;
  }

llvm_cbe_tmp__180:
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = trunc i32 %%storemerge49.2 to i8, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1574_count);
  llvm_cbe_tmp__151 = (unsigned char )((unsigned char )llvm_cbe_storemerge49_2e_2&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__151);
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = add i32 %%49, 1, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1575_count);
  llvm_cbe_tmp__152 = (unsigned int )((unsigned int )(llvm_cbe_tmp__147&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__152&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = zext i32 %%49 to i64, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1579_count);
  llvm_cbe_tmp__153 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__147&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__153);
if (AESL_DEBUG_TRACE)
printf("\n  %%.sum5.2 = add i64 %%57, 2336, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe__2e_sum5_2e_2_count);
  llvm_cbe__2e_sum5_2e_2 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__153&18446744073709551615ull)) + ((unsigned long long )(2336ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n.sum5.2 = 0x%I64X\n", ((unsigned long long )(llvm_cbe__2e_sum5_2e_2&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = getelementptr inbounds i8* %%sig, i64 %%.sum5.2, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1580_count);
  llvm_cbe_tmp__154 = ( char *)(&llvm_cbe_sig[(((signed long long )llvm_cbe__2e_sum5_2e_2))]);
if (AESL_DEBUG_TRACE) {
printf("\n.sum5.2 = 0x%I64X",((signed long long )llvm_cbe__2e_sum5_2e_2));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%55, i8* %%58, align 1, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1581_count);
  *llvm_cbe_tmp__154 = llvm_cbe_tmp__151;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__151);
  llvm_cbe_tmp__155__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__152;   /* for PHI node */
  goto llvm_cbe_tmp__179;

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e_preheader_2e_3:
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = trunc i32 %%60 to i8, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1591_count);
  llvm_cbe_tmp__157 = (unsigned char )((unsigned char )llvm_cbe_tmp__155&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__157);
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = getelementptr inbounds i8* %%sig, i64 2418, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1592_count);
  llvm_cbe_tmp__158 = ( char *)(&llvm_cbe_sig[(((signed long long )2418ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%62, i8* %%63, align 1, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1593_count);
  *llvm_cbe_tmp__158 = llvm_cbe_tmp__157;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__157);
  llvm_cbe_storemerge49_2e_3__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  llvm_cbe_tmp__159__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__155;   /* for PHI node */
  goto llvm_cbe_tmp__181;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__181:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge49.3 = phi i32 [ 0, %%.preheader.3 ], [ %%77, %%75  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_storemerge49_2e_3_count);
  llvm_cbe_storemerge49_2e_3 = (unsigned int )llvm_cbe_storemerge49_2e_3__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge49.3 = 0x%X",llvm_cbe_storemerge49_2e_3);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__168);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = phi i32 [ %%60, %%.preheader.3 ], [ %%76, %%75  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1615_count);
  llvm_cbe_tmp__159 = (unsigned int )llvm_cbe_tmp__159__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__159);
printf("\n = 0x%X",llvm_cbe_tmp__155);
printf("\n = 0x%X",llvm_cbe_tmp__167);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = zext i32 %%storemerge49.3 to i64, !dbg !11 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1616_count);
  llvm_cbe_tmp__160 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge49_2e_3&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__160);
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = getelementptr inbounds %%struct.polyveck* %%h, i64 0, i32 0, i64 3, i32 0, i64 %%66, !dbg !11 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1617_count);
  llvm_cbe_tmp__161 = (signed int *)(&llvm_cbe_h->field0[(((signed long long )3ull))].field0[(((signed long long )llvm_cbe_tmp__160))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__160));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = load i32* %%67, align 4, !dbg !11 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1618_count);
  llvm_cbe_tmp__162 = (unsigned int )*llvm_cbe_tmp__161;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__162);
  if (((llvm_cbe_tmp__162&4294967295U) == (0u&4294967295U))) {
    llvm_cbe_tmp__167__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__159;   /* for PHI node */
    goto llvm_cbe_tmp__182;
  } else {
    goto llvm_cbe_tmp__183;
  }

llvm_cbe_tmp__182:
if (AESL_DEBUG_TRACE)
printf("\n  %%76 = phi i32 [ %%72, %%70 ], [ %%65, %%64  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1630_count);
  llvm_cbe_tmp__167 = (unsigned int )llvm_cbe_tmp__167__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__167);
printf("\n = 0x%X",llvm_cbe_tmp__164);
printf("\n = 0x%X",llvm_cbe_tmp__159);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%77 = add i32 %%storemerge49.3, 1, !dbg !12 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1631_count);
  llvm_cbe_tmp__168 = (unsigned int )((unsigned int )(llvm_cbe_storemerge49_2e_3&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__168&4294967295ull)));
  if (((llvm_cbe_tmp__168&4294967295U) == (256u&4294967295U))) {
    goto llvm_cbe_tmp__184;
  } else {
    llvm_cbe_storemerge49_2e_3__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__168;   /* for PHI node */
    llvm_cbe_tmp__159__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__167;   /* for PHI node */
    goto llvm_cbe_tmp__181;
  }

llvm_cbe_tmp__183:
if (AESL_DEBUG_TRACE)
printf("\n  %%71 = trunc i32 %%storemerge49.3 to i8, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1621_count);
  llvm_cbe_tmp__163 = (unsigned char )((unsigned char )llvm_cbe_storemerge49_2e_3&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__163);
if (AESL_DEBUG_TRACE)
printf("\n  %%72 = add i32 %%65, 1, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1622_count);
  llvm_cbe_tmp__164 = (unsigned int )((unsigned int )(llvm_cbe_tmp__159&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__164&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%73 = zext i32 %%65 to i64, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1626_count);
  llvm_cbe_tmp__165 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__159&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__165);
if (AESL_DEBUG_TRACE)
printf("\n  %%.sum5.3 = add i64 %%73, 2336, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe__2e_sum5_2e_3_count);
  llvm_cbe__2e_sum5_2e_3 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__165&18446744073709551615ull)) + ((unsigned long long )(2336ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n.sum5.3 = 0x%I64X\n", ((unsigned long long )(llvm_cbe__2e_sum5_2e_3&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%74 = getelementptr inbounds i8* %%sig, i64 %%.sum5.3, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1627_count);
  llvm_cbe_tmp__166 = ( char *)(&llvm_cbe_sig[(((signed long long )llvm_cbe__2e_sum5_2e_3))]);
if (AESL_DEBUG_TRACE) {
printf("\n.sum5.3 = 0x%I64X",((signed long long )llvm_cbe__2e_sum5_2e_3));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%71, i8* %%74, align 1, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1628_count);
  *llvm_cbe_tmp__166 = llvm_cbe_tmp__163;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__163);
  llvm_cbe_tmp__167__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__164;   /* for PHI node */
  goto llvm_cbe_tmp__182;

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__184:
if (AESL_DEBUG_TRACE)
printf("\n  %%79 = trunc i32 %%76 to i8, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1638_count);
  llvm_cbe_tmp__169 = (unsigned char )((unsigned char )llvm_cbe_tmp__167&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__169);
if (AESL_DEBUG_TRACE)
printf("\n  %%80 = getelementptr inbounds i8* %%sig, i64 2419, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1639_count);
  llvm_cbe_tmp__170 = ( char *)(&llvm_cbe_sig[(((signed long long )2419ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%79, i8* %%80, align 1, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_pack_sig  --> \n", ++aesl_llvm_cbe_1640_count);
  *llvm_cbe_tmp__170 = llvm_cbe_tmp__169;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__169);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_pack_sig}\n");
  return;
}


signed int pqcrystals_dilithium2_ref_unpack_sig( char *llvm_cbe_c, l_struct_OC_polyveck *llvm_cbe_z, l_struct_OC_polyveck *llvm_cbe_h,  char *llvm_cbe_sig) {
  static  unsigned long long aesl_llvm_cbe_1658_count = 0;
  static  unsigned long long aesl_llvm_cbe_1659_count = 0;
  static  unsigned long long aesl_llvm_cbe_1660_count = 0;
  static  unsigned long long aesl_llvm_cbe_1661_count = 0;
  static  unsigned long long aesl_llvm_cbe_1662_count = 0;
  static  unsigned long long aesl_llvm_cbe_1663_count = 0;
  static  unsigned long long aesl_llvm_cbe_1664_count = 0;
  static  unsigned long long aesl_llvm_cbe_1665_count = 0;
  static  unsigned long long aesl_llvm_cbe_1666_count = 0;
  static  unsigned long long aesl_llvm_cbe_1667_count = 0;
  static  unsigned long long aesl_llvm_cbe_1668_count = 0;
  static  unsigned long long aesl_llvm_cbe_1669_count = 0;
  static  unsigned long long aesl_llvm_cbe_1670_count = 0;
  static  unsigned long long aesl_llvm_cbe_1671_count = 0;
  static  unsigned long long aesl_llvm_cbe_1672_count = 0;
  static  unsigned long long aesl_llvm_cbe_1673_count = 0;
  static  unsigned long long aesl_llvm_cbe_1674_count = 0;
  static  unsigned long long aesl_llvm_cbe_1675_count = 0;
  static  unsigned long long aesl_llvm_cbe_1676_count = 0;
  static  unsigned long long aesl_llvm_cbe_1677_count = 0;
  static  unsigned long long aesl_llvm_cbe_1678_count = 0;
  static  unsigned long long aesl_llvm_cbe_1679_count = 0;
  static  unsigned long long aesl_llvm_cbe_1680_count = 0;
  static  unsigned long long aesl_llvm_cbe_1681_count = 0;
  static  unsigned long long aesl_llvm_cbe_1682_count = 0;
  static  unsigned long long aesl_llvm_cbe_1683_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_1699_count = 0;
  static  unsigned long long aesl_llvm_cbe_1700_count = 0;
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
  l_struct_OC_poly *llvm_cbe_tmp__185;
  static  unsigned long long aesl_llvm_cbe_1713_count = 0;
   char *llvm_cbe_tmp__186;
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
  l_struct_OC_poly *llvm_cbe_tmp__187;
  static  unsigned long long aesl_llvm_cbe_1733_count = 0;
   char *llvm_cbe_tmp__188;
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
  l_struct_OC_poly *llvm_cbe_tmp__189;
  static  unsigned long long aesl_llvm_cbe_1753_count = 0;
   char *llvm_cbe_tmp__190;
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
  static  unsigned long long aesl_llvm_cbe_1764_count = 0;
  static  unsigned long long aesl_llvm_cbe_1765_count = 0;
  static  unsigned long long aesl_llvm_cbe_1766_count = 0;
  static  unsigned long long aesl_llvm_cbe_1767_count = 0;
  static  unsigned long long aesl_llvm_cbe_1768_count = 0;
  static  unsigned long long aesl_llvm_cbe_1769_count = 0;
  static  unsigned long long aesl_llvm_cbe_1770_count = 0;
  static  unsigned long long aesl_llvm_cbe_1771_count = 0;
  static  unsigned long long aesl_llvm_cbe_1772_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__191;
  static  unsigned long long aesl_llvm_cbe_1773_count = 0;
   char *llvm_cbe_tmp__192;
  static  unsigned long long aesl_llvm_cbe_1774_count = 0;
  static  unsigned long long aesl_llvm_cbe_1775_count = 0;
  static  unsigned long long aesl_llvm_cbe_1776_count = 0;
  static  unsigned long long aesl_llvm_cbe_1777_count = 0;
  static  unsigned long long aesl_llvm_cbe_1778_count = 0;
  static  unsigned long long aesl_llvm_cbe_1779_count = 0;
  static  unsigned long long aesl_llvm_cbe_1780_count = 0;
  static  unsigned long long aesl_llvm_cbe_1781_count = 0;
  static  unsigned long long aesl_llvm_cbe_1782_count = 0;
  static  unsigned long long aesl_llvm_cbe_1783_count = 0;
  static  unsigned long long aesl_llvm_cbe_1784_count = 0;
  static  unsigned long long aesl_llvm_cbe_1785_count = 0;
  static  unsigned long long aesl_llvm_cbe_1786_count = 0;
  static  unsigned long long aesl_llvm_cbe_1787_count = 0;
  static  unsigned long long aesl_llvm_cbe_1788_count = 0;
  static  unsigned long long aesl_llvm_cbe_1789_count = 0;
  static  unsigned long long aesl_llvm_cbe_1790_count = 0;
  static  unsigned long long aesl_llvm_cbe_1791_count = 0;
  static  unsigned long long aesl_llvm_cbe_1792_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge24_count = 0;
  unsigned int llvm_cbe_storemerge24;
  unsigned int llvm_cbe_storemerge24__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1793_count = 0;
  unsigned long long llvm_cbe_tmp__193;
  static  unsigned long long aesl_llvm_cbe_1794_count = 0;
   char *llvm_cbe_tmp__194;
  static  unsigned long long aesl_llvm_cbe_1795_count = 0;
  unsigned char llvm_cbe_tmp__195;
  static  unsigned long long aesl_llvm_cbe_1796_count = 0;
   char *llvm_cbe_tmp__196;
  static  unsigned long long aesl_llvm_cbe_1797_count = 0;
  static  unsigned long long aesl_llvm_cbe_1798_count = 0;
  unsigned int llvm_cbe_tmp__197;
  static  unsigned long long aesl_llvm_cbe_1799_count = 0;
  static  unsigned long long aesl_llvm_cbe_1800_count = 0;
  static  unsigned long long aesl_llvm_cbe_1801_count = 0;
  static  unsigned long long aesl_llvm_cbe_1802_count = 0;
  static  unsigned long long aesl_llvm_cbe_1803_count = 0;
  static  unsigned long long aesl_llvm_cbe_1804_count = 0;
  static  unsigned long long aesl_llvm_cbe_1805_count = 0;
  static  unsigned long long aesl_llvm_cbe_1806_count = 0;
  static  unsigned long long aesl_llvm_cbe_1807_count = 0;
  static  unsigned long long aesl_llvm_cbe_1808_count = 0;
  static  unsigned long long aesl_llvm_cbe_1809_count = 0;
  static  unsigned long long aesl_llvm_cbe_1810_count = 0;
  static  unsigned long long aesl_llvm_cbe_1811_count = 0;
  static  unsigned long long aesl_llvm_cbe_1812_count = 0;
  static  unsigned long long aesl_llvm_cbe_1813_count = 0;
  static  unsigned long long aesl_llvm_cbe_1814_count = 0;
  static  unsigned long long aesl_llvm_cbe_1815_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond30_count = 0;
  static  unsigned long long aesl_llvm_cbe_1816_count = 0;
  static  unsigned long long aesl_llvm_cbe_1817_count = 0;
  unsigned int llvm_cbe_tmp__198;
  unsigned int llvm_cbe_tmp__198__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_storemerge2_count = 0;
  unsigned int llvm_cbe_storemerge2;
  unsigned int llvm_cbe_storemerge2__PHI_TEMPORARY;
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
  static  unsigned long long aesl_llvm_cbe_1834_count = 0;
  static  unsigned long long aesl_llvm_cbe_1835_count = 0;
  static  unsigned long long aesl_llvm_cbe_1836_count = 0;
  static  unsigned long long aesl_llvm_cbe_1837_count = 0;
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
  unsigned long long llvm_cbe_tmp__199;
  static  unsigned long long aesl_llvm_cbe_1851_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge416_count = 0;
  unsigned int llvm_cbe_storemerge416;
  unsigned int llvm_cbe_storemerge416__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1852_count = 0;
  unsigned long long llvm_cbe_tmp__200;
  static  unsigned long long aesl_llvm_cbe_1853_count = 0;
  signed int *llvm_cbe_tmp__201;
  static  unsigned long long aesl_llvm_cbe_1854_count = 0;
  static  unsigned long long aesl_llvm_cbe_1855_count = 0;
  unsigned int llvm_cbe_tmp__202;
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
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_1869_count = 0;
  static  unsigned long long aesl_llvm_cbe_1870_count = 0;
  unsigned int llvm_cbe_tmp__203;
  static  unsigned long long aesl_llvm_cbe_1871_count = 0;
  unsigned long long llvm_cbe_tmp__204;
  static  unsigned long long aesl_llvm_cbe__2e_sum6_count = 0;
  unsigned long long llvm_cbe__2e_sum6;
  static  unsigned long long aesl_llvm_cbe_1872_count = 0;
   char *llvm_cbe_tmp__205;
  static  unsigned long long aesl_llvm_cbe_1873_count = 0;
  unsigned char llvm_cbe_tmp__206;
  static  unsigned long long aesl_llvm_cbe_1874_count = 0;
  unsigned int llvm_cbe_tmp__207;
  static  unsigned long long aesl_llvm_cbe_1875_count = 0;
  static  unsigned long long aesl_llvm_cbe_1876_count = 0;
  static  unsigned long long aesl_llvm_cbe_or_2e_cond_count = 0;
  bool llvm_cbe_or_2e_cond;
  static  unsigned long long aesl_llvm_cbe_1877_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge5_count = 0;
  unsigned int llvm_cbe_storemerge5;
  unsigned int llvm_cbe_storemerge5__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1878_count = 0;
  static  unsigned long long aesl_llvm_cbe_1879_count = 0;
  static  unsigned long long aesl_llvm_cbe_1880_count = 0;
  static  unsigned long long aesl_llvm_cbe_1881_count = 0;
  static  unsigned long long aesl_llvm_cbe_1882_count = 0;
  static  unsigned long long aesl_llvm_cbe_1883_count = 0;
  static  unsigned long long aesl_llvm_cbe_1884_count = 0;
  static  unsigned long long aesl_llvm_cbe_1885_count = 0;
  static  unsigned long long aesl_llvm_cbe_1886_count = 0;
  static  unsigned long long aesl_llvm_cbe_1887_count = 0;
  static  unsigned long long aesl_llvm_cbe_1888_count = 0;
  static  unsigned long long aesl_llvm_cbe_1889_count = 0;
  static  unsigned long long aesl_llvm_cbe_1890_count = 0;
  unsigned char llvm_cbe_tmp__208;
  static  unsigned long long aesl_llvm_cbe_1891_count = 0;
  unsigned int llvm_cbe_tmp__209;
  static  unsigned long long aesl_llvm_cbe_1892_count = 0;
  static  unsigned long long aesl_llvm_cbe_1893_count = 0;
  static  unsigned long long aesl_llvm_cbe_1894_count = 0;
  static  unsigned long long aesl_llvm_cbe_1895_count = 0;
  static  unsigned long long aesl_llvm_cbe_1896_count = 0;
  unsigned long long llvm_cbe_tmp__210;
  static  unsigned long long aesl_llvm_cbe__2e_sum8_count = 0;
  unsigned long long llvm_cbe__2e_sum8;
  static  unsigned long long aesl_llvm_cbe_1897_count = 0;
   char *llvm_cbe_tmp__211;
  static  unsigned long long aesl_llvm_cbe_1898_count = 0;
  unsigned char llvm_cbe_tmp__212;
  static  unsigned long long aesl_llvm_cbe_1899_count = 0;
  unsigned int llvm_cbe_tmp__213;
  static  unsigned long long aesl_llvm_cbe_1900_count = 0;
  unsigned long long llvm_cbe_tmp__214;
  static  unsigned long long aesl_llvm_cbe__2e_sum9_count = 0;
  unsigned long long llvm_cbe__2e_sum9;
  static  unsigned long long aesl_llvm_cbe_1901_count = 0;
   char *llvm_cbe_tmp__215;
  static  unsigned long long aesl_llvm_cbe_1902_count = 0;
  unsigned char llvm_cbe_tmp__216;
  static  unsigned long long aesl_llvm_cbe_1903_count = 0;
  static  unsigned long long aesl_llvm_cbe_1904_count = 0;
  static  unsigned long long aesl_llvm_cbe_1905_count = 0;
  unsigned long long llvm_cbe_tmp__217;
  static  unsigned long long aesl_llvm_cbe__2e_sum7_count = 0;
  unsigned long long llvm_cbe__2e_sum7;
  static  unsigned long long aesl_llvm_cbe_1906_count = 0;
   char *llvm_cbe_tmp__218;
  static  unsigned long long aesl_llvm_cbe_1907_count = 0;
  unsigned char llvm_cbe_tmp__219;
  static  unsigned long long aesl_llvm_cbe_1908_count = 0;
  unsigned long long llvm_cbe_tmp__220;
  static  unsigned long long aesl_llvm_cbe_1909_count = 0;
  signed int *llvm_cbe_tmp__221;
  static  unsigned long long aesl_llvm_cbe_1910_count = 0;
  static  unsigned long long aesl_llvm_cbe_1911_count = 0;
  unsigned int llvm_cbe_tmp__222;
  static  unsigned long long aesl_llvm_cbe_1912_count = 0;
  static  unsigned long long aesl_llvm_cbe_1913_count = 0;
  static  unsigned long long aesl_llvm_cbe_1914_count = 0;
  static  unsigned long long aesl_llvm_cbe_1915_count = 0;
  static  unsigned long long aesl_llvm_cbe_1916_count = 0;
  static  unsigned long long aesl_llvm_cbe_1917_count = 0;
  static  unsigned long long aesl_llvm_cbe_1918_count = 0;
  static  unsigned long long aesl_llvm_cbe_1919_count = 0;
  unsigned int llvm_cbe_tmp__223;
  static  unsigned long long aesl_llvm_cbe_1920_count = 0;
  static  unsigned long long aesl_llvm_cbe_1921_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge3_count = 0;
  unsigned int llvm_cbe_storemerge3;
  unsigned int llvm_cbe_storemerge3__PHI_TEMPORARY;
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
  static  unsigned long long aesl_llvm_cbe_1934_count = 0;
  static  unsigned long long aesl_llvm_cbe_1935_count = 0;
  static  unsigned long long aesl_llvm_cbe_1936_count = 0;
  unsigned long long llvm_cbe_tmp__224;
  static  unsigned long long aesl_llvm_cbe__2e_sum_count = 0;
  unsigned long long llvm_cbe__2e_sum;
  static  unsigned long long aesl_llvm_cbe_1937_count = 0;
   char *llvm_cbe_tmp__225;
  static  unsigned long long aesl_llvm_cbe_1938_count = 0;
  unsigned char llvm_cbe_tmp__226;
  static  unsigned long long aesl_llvm_cbe_1939_count = 0;
  static  unsigned long long aesl_llvm_cbe_1940_count = 0;
  unsigned int llvm_cbe_tmp__227;
  static  unsigned long long aesl_llvm_cbe_1941_count = 0;
  static  unsigned long long aesl_llvm_cbe_1942_count = 0;
  static  unsigned long long aesl_llvm_cbe_1943_count = 0;
  unsigned int llvm_cbe_tmp__228;
  unsigned int llvm_cbe_tmp__228__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1944_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_unpack_sig\n");
  llvm_cbe_storemerge24__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__229;

llvm_cbe__2e_preheader22:
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.polyveck* %%z, i64 0, i32 0, i64 0, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1712_count);
  llvm_cbe_tmp__185 = (l_struct_OC_poly *)(&llvm_cbe_z->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds i8* %%sig, i64 32, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1713_count);
  llvm_cbe_tmp__186 = ( char *)(&llvm_cbe_sig[(((signed long long )32ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_polyz_unpack(%%struct.poly* %%1, i8* %%2) nounwind, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1714_count);
   /*tail*/ pqcrystals_dilithium2_ref_polyz_unpack((l_struct_OC_poly *)llvm_cbe_tmp__185, ( char *)llvm_cbe_tmp__186);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.polyveck* %%z, i64 0, i32 0, i64 1, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1732_count);
  llvm_cbe_tmp__187 = (l_struct_OC_poly *)(&llvm_cbe_z->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds i8* %%sig, i64 608, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1733_count);
  llvm_cbe_tmp__188 = ( char *)(&llvm_cbe_sig[(((signed long long )608ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_polyz_unpack(%%struct.poly* %%3, i8* %%4) nounwind, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1734_count);
   /*tail*/ pqcrystals_dilithium2_ref_polyz_unpack((l_struct_OC_poly *)llvm_cbe_tmp__187, ( char *)llvm_cbe_tmp__188);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds %%struct.polyveck* %%z, i64 0, i32 0, i64 2, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1752_count);
  llvm_cbe_tmp__189 = (l_struct_OC_poly *)(&llvm_cbe_z->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds i8* %%sig, i64 1184, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1753_count);
  llvm_cbe_tmp__190 = ( char *)(&llvm_cbe_sig[(((signed long long )1184ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_polyz_unpack(%%struct.poly* %%5, i8* %%6) nounwind, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1754_count);
   /*tail*/ pqcrystals_dilithium2_ref_polyz_unpack((l_struct_OC_poly *)llvm_cbe_tmp__189, ( char *)llvm_cbe_tmp__190);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds %%struct.polyveck* %%z, i64 0, i32 0, i64 3, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1772_count);
  llvm_cbe_tmp__191 = (l_struct_OC_poly *)(&llvm_cbe_z->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds i8* %%sig, i64 1760, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1773_count);
  llvm_cbe_tmp__192 = ( char *)(&llvm_cbe_sig[(((signed long long )1760ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_polyz_unpack(%%struct.poly* %%7, i8* %%8) nounwind, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1774_count);
   /*tail*/ pqcrystals_dilithium2_ref_polyz_unpack((l_struct_OC_poly *)llvm_cbe_tmp__191, ( char *)llvm_cbe_tmp__192);
if (AESL_DEBUG_TRACE) {
}
  llvm_cbe_tmp__198__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  llvm_cbe_storemerge2__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__230;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__229:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge24 = phi i32 [ 0, %%0 ], [ %%14, %%9  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_storemerge24_count);
  llvm_cbe_storemerge24 = (unsigned int )llvm_cbe_storemerge24__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge24 = 0x%X",llvm_cbe_storemerge24);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__197);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = zext i32 %%storemerge24 to i64, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1793_count);
  llvm_cbe_tmp__193 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge24&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__193);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds i8* %%sig, i64 %%10, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1794_count);
  llvm_cbe_tmp__194 = ( char *)(&llvm_cbe_sig[(((signed long long )llvm_cbe_tmp__193))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__193));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = load i8* %%11, align 1, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1795_count);
  llvm_cbe_tmp__195 = (unsigned char )*llvm_cbe_tmp__194;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__195);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds i8* %%c, i64 %%10, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1796_count);
  llvm_cbe_tmp__196 = ( char *)(&llvm_cbe_c[(((signed long long )llvm_cbe_tmp__193))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__193));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%12, i8* %%13, align 1, !dbg !9 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1797_count);
  *llvm_cbe_tmp__196 = llvm_cbe_tmp__195;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__195);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = add i32 %%storemerge24, 1, !dbg !12 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1798_count);
  llvm_cbe_tmp__197 = (unsigned int )((unsigned int )(llvm_cbe_storemerge24&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__197&4294967295ull)));
  if (((llvm_cbe_tmp__197&4294967295U) == (32u&4294967295U))) {
    goto llvm_cbe__2e_preheader22;
  } else {
    llvm_cbe_storemerge24__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__197;   /* for PHI node */
    goto llvm_cbe_tmp__229;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__230:
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = phi i32 [ %%32, %%52 ], [ 0, %%.preheader22  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1817_count);
  llvm_cbe_tmp__198 = (unsigned int )llvm_cbe_tmp__198__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__198);
printf("\n = 0x%X",llvm_cbe_tmp__209);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge2 = phi i32 [ %%53, %%52 ], [ 0, %%.preheader22  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_storemerge2_count);
  llvm_cbe_storemerge2 = (unsigned int )llvm_cbe_storemerge2__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge2 = 0x%X",llvm_cbe_storemerge2);
printf("\n = 0x%X",llvm_cbe_tmp__223);
printf("\n = 0x%X",0u);
}
  if ((((unsigned int )llvm_cbe_storemerge2&4294967295U) < ((unsigned int )4u&4294967295U))) {
    goto llvm_cbe__2e_preheader15;
  } else {
    llvm_cbe_storemerge3__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__198;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  }

llvm_cbe_tmp__231:
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = add i32 %%storemerge2, 1, !dbg !12 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1919_count);
  llvm_cbe_tmp__223 = (unsigned int )((unsigned int )(llvm_cbe_storemerge2&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__223&4294967295ull)));
  llvm_cbe_tmp__198__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__209;   /* for PHI node */
  llvm_cbe_storemerge2__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__223;   /* for PHI node */
  goto llvm_cbe_tmp__230;

  do {     /* Syntactic loop '.preheader12' to make GCC happy */
llvm_cbe__2e_preheader12:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge5 = phi i32 [ %%51, %%45 ], [ %%16, %%23  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_storemerge5_count);
  llvm_cbe_storemerge5 = (unsigned int )llvm_cbe_storemerge5__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge5 = 0x%X",llvm_cbe_storemerge5);
printf("\n = 0x%X",llvm_cbe_tmp__222);
printf("\n = 0x%X",llvm_cbe_tmp__198);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = load i8* %%26, align 1, !dbg !11 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1890_count);
  llvm_cbe_tmp__208 = (unsigned char )*llvm_cbe_tmp__205;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__208);
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = zext i8 %%31 to i32, !dbg !11 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1891_count);
  llvm_cbe_tmp__209 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__208&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__209);
  if ((((unsigned int )llvm_cbe_storemerge5&4294967295U) < ((unsigned int )llvm_cbe_tmp__209&4294967295U))) {
    goto llvm_cbe_tmp__232;
  } else {
    goto llvm_cbe_tmp__231;
  }

llvm_cbe_tmp__233:
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = zext i32 %%storemerge5 to i64, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1905_count);
  llvm_cbe_tmp__217 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge5&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__217);
if (AESL_DEBUG_TRACE)
printf("\n  %%.sum7 = add i64 %%46, 2336, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe__2e_sum7_count);
  llvm_cbe__2e_sum7 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__217&18446744073709551615ull)) + ((unsigned long long )(2336ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n.sum7 = 0x%I64X\n", ((unsigned long long )(llvm_cbe__2e_sum7&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = getelementptr inbounds i8* %%sig, i64 %%.sum7, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1906_count);
  llvm_cbe_tmp__218 = ( char *)(&llvm_cbe_sig[(((signed long long )llvm_cbe__2e_sum7))]);
if (AESL_DEBUG_TRACE) {
printf("\n.sum7 = 0x%I64X",((signed long long )llvm_cbe__2e_sum7));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = load i8* %%47, align 1, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1907_count);
  llvm_cbe_tmp__219 = (unsigned char )*llvm_cbe_tmp__218;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__219);
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = zext i8 %%48 to i64, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1908_count);
  llvm_cbe_tmp__220 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__219&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__220);
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = getelementptr inbounds %%struct.polyveck* %%h, i64 0, i32 0, i64 %%18, i32 0, i64 %%49, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1909_count);
  llvm_cbe_tmp__221 = (signed int *)(&llvm_cbe_h->field0[(((signed long long )llvm_cbe_tmp__199))].field0[(((signed long long )llvm_cbe_tmp__220))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__199));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__220));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 1, i32* %%50, align 4, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1910_count);
  *llvm_cbe_tmp__221 = 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 1u);
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = add i32 %%storemerge5, 1, !dbg !13 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1911_count);
  llvm_cbe_tmp__222 = (unsigned int )((unsigned int )(llvm_cbe_storemerge5&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__222&4294967295ull)));
  llvm_cbe_storemerge5__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__222;   /* for PHI node */
  goto llvm_cbe__2e_preheader12;

llvm_cbe_tmp__232:
  if ((((unsigned int )llvm_cbe_storemerge5&4294967295U) > ((unsigned int )llvm_cbe_tmp__198&4294967295U))) {
    goto llvm_cbe_tmp__234;
  } else {
    goto llvm_cbe_tmp__233;
  }

llvm_cbe_tmp__234:
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = zext i32 %%storemerge5 to i64, !dbg !11 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1896_count);
  llvm_cbe_tmp__210 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge5&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__210);
if (AESL_DEBUG_TRACE)
printf("\n  %%.sum8 = add i64 %%37, 2336, !dbg !11 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe__2e_sum8_count);
  llvm_cbe__2e_sum8 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__210&18446744073709551615ull)) + ((unsigned long long )(2336ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n.sum8 = 0x%I64X\n", ((unsigned long long )(llvm_cbe__2e_sum8&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = getelementptr inbounds i8* %%sig, i64 %%.sum8, !dbg !11 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1897_count);
  llvm_cbe_tmp__211 = ( char *)(&llvm_cbe_sig[(((signed long long )llvm_cbe__2e_sum8))]);
if (AESL_DEBUG_TRACE) {
printf("\n.sum8 = 0x%I64X",((signed long long )llvm_cbe__2e_sum8));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = load i8* %%38, align 1, !dbg !11 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1898_count);
  llvm_cbe_tmp__212 = (unsigned char )*llvm_cbe_tmp__211;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__212);
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = add i32 %%storemerge5, -1, !dbg !11 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1899_count);
  llvm_cbe_tmp__213 = (unsigned int )((unsigned int )(llvm_cbe_storemerge5&4294967295ull)) + ((unsigned int )(4294967295u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__213&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = zext i32 %%40 to i64, !dbg !11 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1900_count);
  llvm_cbe_tmp__214 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__213&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__214);
if (AESL_DEBUG_TRACE)
printf("\n  %%.sum9 = add i64 %%41, 2336, !dbg !11 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe__2e_sum9_count);
  llvm_cbe__2e_sum9 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__214&18446744073709551615ull)) + ((unsigned long long )(2336ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n.sum9 = 0x%I64X\n", ((unsigned long long )(llvm_cbe__2e_sum9&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = getelementptr inbounds i8* %%sig, i64 %%.sum9, !dbg !11 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1901_count);
  llvm_cbe_tmp__215 = ( char *)(&llvm_cbe_sig[(((signed long long )llvm_cbe__2e_sum9))]);
if (AESL_DEBUG_TRACE) {
printf("\n.sum9 = 0x%I64X",((signed long long )llvm_cbe__2e_sum9));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = load i8* %%42, align 1, !dbg !11 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1902_count);
  llvm_cbe_tmp__216 = (unsigned char )*llvm_cbe_tmp__215;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__216);
  if ((((unsigned char )llvm_cbe_tmp__212&255U) > ((unsigned char )llvm_cbe_tmp__216&255U))) {
    goto llvm_cbe_tmp__233;
  } else {
    llvm_cbe_tmp__228__PHI_TEMPORARY = (unsigned int )1u;   /* for PHI node */
    goto llvm_cbe__2e_loopexit;
  }

  } while (1); /* end of syntactic loop '.preheader12' */
llvm_cbe_tmp__235:
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = add i32 %%storemerge2, 80, !dbg !11 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1870_count);
  llvm_cbe_tmp__203 = (unsigned int )((unsigned int )(llvm_cbe_storemerge2&4294967295ull)) + ((unsigned int )(80u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__203&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = zext i32 %%24 to i64, !dbg !11 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1871_count);
  llvm_cbe_tmp__204 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__203&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__204);
if (AESL_DEBUG_TRACE)
printf("\n  %%.sum6 = add i64 %%25, 2336, !dbg !11 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe__2e_sum6_count);
  llvm_cbe__2e_sum6 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__204&18446744073709551615ull)) + ((unsigned long long )(2336ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n.sum6 = 0x%I64X\n", ((unsigned long long )(llvm_cbe__2e_sum6&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = getelementptr inbounds i8* %%sig, i64 %%.sum6, !dbg !11 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1872_count);
  llvm_cbe_tmp__205 = ( char *)(&llvm_cbe_sig[(((signed long long )llvm_cbe__2e_sum6))]);
if (AESL_DEBUG_TRACE) {
printf("\n.sum6 = 0x%I64X",((signed long long )llvm_cbe__2e_sum6));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = load i8* %%26, align 1, !dbg !11 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1873_count);
  llvm_cbe_tmp__206 = (unsigned char )*llvm_cbe_tmp__205;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__206);
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = zext i8 %%27 to i32, !dbg !11 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1874_count);
  llvm_cbe_tmp__207 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__206&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__207);
if (AESL_DEBUG_TRACE)
printf("\n  %%or.cond = or i1 %%29, %%30, !dbg !11 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_or_2e_cond_count);
  llvm_cbe_or_2e_cond = (bool )(((((unsigned int )llvm_cbe_tmp__207&4294967295U) < ((unsigned int )llvm_cbe_tmp__198&4294967295U)) | (((unsigned char )llvm_cbe_tmp__206&255U) > ((unsigned char )((unsigned char )80)&255U)))&1);
if (AESL_DEBUG_TRACE)
printf("\nor.cond = 0x%X\n", llvm_cbe_or_2e_cond);
  if (llvm_cbe_or_2e_cond) {
    llvm_cbe_tmp__228__PHI_TEMPORARY = (unsigned int )1u;   /* for PHI node */
    goto llvm_cbe__2e_loopexit;
  } else {
    llvm_cbe_storemerge5__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__198;   /* for PHI node */
    goto llvm_cbe__2e_preheader12;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__236:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge416 = phi i32 [ 0, %%.preheader15 ], [ %%22, %%19  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_storemerge416_count);
  llvm_cbe_storemerge416 = (unsigned int )llvm_cbe_storemerge416__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge416 = 0x%X",llvm_cbe_storemerge416);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__202);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = zext i32 %%storemerge416 to i64, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1852_count);
  llvm_cbe_tmp__200 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge416&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__200);
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = getelementptr inbounds %%struct.polyveck* %%h, i64 0, i32 0, i64 %%18, i32 0, i64 %%20, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1853_count);
  llvm_cbe_tmp__201 = (signed int *)(&llvm_cbe_h->field0[(((signed long long )llvm_cbe_tmp__199))].field0[(((signed long long )llvm_cbe_tmp__200))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__199));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__200));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%21, align 4, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1854_count);
  *llvm_cbe_tmp__201 = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = add i32 %%storemerge416, 1, !dbg !13 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1855_count);
  llvm_cbe_tmp__202 = (unsigned int )((unsigned int )(llvm_cbe_storemerge416&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__202&4294967295ull)));
  if (((llvm_cbe_tmp__202&4294967295U) == (256u&4294967295U))) {
    goto llvm_cbe_tmp__235;
  } else {
    llvm_cbe_storemerge416__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__202;   /* for PHI node */
    goto llvm_cbe_tmp__236;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e_preheader15:
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = zext i32 %%storemerge2 to i64, !dbg !10 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1850_count);
  llvm_cbe_tmp__199 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge2&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__199);
  llvm_cbe_storemerge416__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__236;

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '.preheader' to make GCC happy */
llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge3 = phi i32 [ %%60, %%55 ], [ %%16, %%15  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_storemerge3_count);
  llvm_cbe_storemerge3 = (unsigned int )llvm_cbe_storemerge3__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge3 = 0x%X",llvm_cbe_storemerge3);
printf("\n = 0x%X",llvm_cbe_tmp__227);
printf("\n = 0x%X",llvm_cbe_tmp__198);
}
  if ((((unsigned int )llvm_cbe_storemerge3&4294967295U) < ((unsigned int )80u&4294967295U))) {
    goto llvm_cbe_tmp__237;
  } else {
    llvm_cbe_tmp__228__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_loopexit;
  }

llvm_cbe_tmp__237:
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = zext i32 %%storemerge3 to i64, !dbg !11 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1936_count);
  llvm_cbe_tmp__224 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge3&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__224);
if (AESL_DEBUG_TRACE)
printf("\n  %%.sum = add i64 %%56, 2336, !dbg !11 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe__2e_sum_count);
  llvm_cbe__2e_sum = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__224&18446744073709551615ull)) + ((unsigned long long )(2336ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n.sum = 0x%I64X\n", ((unsigned long long )(llvm_cbe__2e_sum&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = getelementptr inbounds i8* %%sig, i64 %%.sum, !dbg !11 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1937_count);
  llvm_cbe_tmp__225 = ( char *)(&llvm_cbe_sig[(((signed long long )llvm_cbe__2e_sum))]);
if (AESL_DEBUG_TRACE) {
printf("\n.sum = 0x%I64X",((signed long long )llvm_cbe__2e_sum));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = load i8* %%57, align 1, !dbg !11 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1938_count);
  llvm_cbe_tmp__226 = (unsigned char )*llvm_cbe_tmp__225;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__226);
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = add i32 %%storemerge3, 1, !dbg !13 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1940_count);
  llvm_cbe_tmp__227 = (unsigned int )((unsigned int )(llvm_cbe_storemerge3&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__227&4294967295ull)));
  if (((llvm_cbe_tmp__226&255U) == (((unsigned char )0)&255U))) {
    llvm_cbe_storemerge3__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__227;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  } else {
    llvm_cbe_tmp__228__PHI_TEMPORARY = (unsigned int )1u;   /* for PHI node */
    goto llvm_cbe__2e_loopexit;
  }

  } while (1); /* end of syntactic loop '.preheader' */
llvm_cbe__2e_loopexit:
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = phi i32 [ 0, %%.preheader ], [ 1, %%55 ], [ 1, %%36 ], [ 1, %%23  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_unpack_sig  --> \n", ++aesl_llvm_cbe_1943_count);
  llvm_cbe_tmp__228 = (unsigned int )llvm_cbe_tmp__228__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__228);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",1u);
printf("\n = 0x%X",1u);
printf("\n = 0x%X",1u);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_unpack_sig}\n");
  return llvm_cbe_tmp__228;
}

