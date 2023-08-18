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
typedef struct l_struct_OC_polyvecl l_struct_OC_polyvecl;
typedef struct l_struct_OC_poly l_struct_OC_poly;

/* Structure contents */
struct l_struct_OC_poly {
  signed int field0[256];
};

struct l_struct_OC_polyvecl {
  l_struct_OC_poly field0[4];
};


/* Function Declarations */
double fmod(double, double);
float fmodf(float, float);
long double fmodl(long double, long double);
void pqcrystals_dilithium2_ref_polyvec_matrix_expand(l_struct_OC_polyvecl *llvm_cbe_mat,  char *llvm_cbe_rho);
void pqcrystals_dilithium2_ref_poly_uniform(l_struct_OC_poly *,  char *, signed short );
void pqcrystals_dilithium2_ref_polyvec_matrix_pointwise_montgomery(l_struct_OC_polyvecl *llvm_cbe_t, l_struct_OC_polyvecl *llvm_cbe_mat, l_struct_OC_polyvecl *llvm_cbe_v);
void pqcrystals_dilithium2_ref_polyvecl_pointwise_acc_montgomery(l_struct_OC_poly *llvm_cbe_w, l_struct_OC_polyvecl *llvm_cbe_u, l_struct_OC_polyvecl *llvm_cbe_v);
void pqcrystals_dilithium2_ref_polyvecl_uniform_eta(l_struct_OC_polyvecl *llvm_cbe_v,  char *llvm_cbe_seed, signed short llvm_cbe_nonce);
void pqcrystals_dilithium2_ref_poly_uniform_eta(l_struct_OC_poly *,  char *, signed short );
void pqcrystals_dilithium2_ref_polyvecl_uniform_gamma1(l_struct_OC_polyvecl *llvm_cbe_v,  char *llvm_cbe_seed, signed short llvm_cbe_nonce);
void pqcrystals_dilithium2_ref_poly_uniform_gamma1(l_struct_OC_poly *,  char *, signed short );
void pqcrystals_dilithium2_ref_polyvecl_reduce(l_struct_OC_polyvecl *llvm_cbe_v);
void pqcrystals_dilithium2_ref_poly_reduce(l_struct_OC_poly *);
void pqcrystals_dilithium2_ref_polyvecl_freeze(l_struct_OC_polyvecl *llvm_cbe_v);
void pqcrystals_dilithium2_ref_poly_freeze(l_struct_OC_poly *);
void pqcrystals_dilithium2_ref_polyvecl_add(l_struct_OC_polyvecl *llvm_cbe_w, l_struct_OC_polyvecl *llvm_cbe_u, l_struct_OC_polyvecl *llvm_cbe_v);
void pqcrystals_dilithium2_ref_poly_add(l_struct_OC_poly *, l_struct_OC_poly *, l_struct_OC_poly *);
void pqcrystals_dilithium2_ref_polyvecl_ntt(l_struct_OC_polyvecl *llvm_cbe_v);
void pqcrystals_dilithium2_ref_poly_ntt(l_struct_OC_poly *);
void pqcrystals_dilithium2_ref_polyvecl_invntt_tomont(l_struct_OC_polyvecl *llvm_cbe_v);
void pqcrystals_dilithium2_ref_poly_invntt_tomont(l_struct_OC_poly *);
void pqcrystals_dilithium2_ref_polyvecl_pointwise_poly_montgomery(l_struct_OC_polyvecl *llvm_cbe_r, l_struct_OC_poly *llvm_cbe_a, l_struct_OC_polyvecl *llvm_cbe_v);
void pqcrystals_dilithium2_ref_poly_pointwise_montgomery(l_struct_OC_poly *, l_struct_OC_poly *, l_struct_OC_poly *);
signed int pqcrystals_dilithium2_ref_polyvecl_chknorm(l_struct_OC_polyvecl *llvm_cbe_v, signed int llvm_cbe_bound);
signed int pqcrystals_dilithium2_ref_poly_chknorm(l_struct_OC_poly *, signed int );
void pqcrystals_dilithium2_ref_polyveck_uniform_eta(l_struct_OC_polyvecl *llvm_cbe_v,  char *llvm_cbe_seed, signed short llvm_cbe_nonce);
void pqcrystals_dilithium2_ref_polyveck_reduce(l_struct_OC_polyvecl *llvm_cbe_v);
void pqcrystals_dilithium2_ref_polyveck_caddq(l_struct_OC_polyvecl *llvm_cbe_v);
void pqcrystals_dilithium2_ref_poly_caddq(l_struct_OC_poly *);
void pqcrystals_dilithium2_ref_polyveck_freeze(l_struct_OC_polyvecl *llvm_cbe_v);
void pqcrystals_dilithium2_ref_polyveck_add(l_struct_OC_polyvecl *llvm_cbe_w, l_struct_OC_polyvecl *llvm_cbe_u, l_struct_OC_polyvecl *llvm_cbe_v);
void pqcrystals_dilithium2_ref_polyveck_sub(l_struct_OC_polyvecl *llvm_cbe_w, l_struct_OC_polyvecl *llvm_cbe_u, l_struct_OC_polyvecl *llvm_cbe_v);
void pqcrystals_dilithium2_ref_poly_sub(l_struct_OC_poly *, l_struct_OC_poly *, l_struct_OC_poly *);
void pqcrystals_dilithium2_ref_polyveck_shiftl(l_struct_OC_polyvecl *llvm_cbe_v);
void pqcrystals_dilithium2_ref_poly_shiftl(l_struct_OC_poly *);
void pqcrystals_dilithium2_ref_polyveck_ntt(l_struct_OC_polyvecl *llvm_cbe_v);
void pqcrystals_dilithium2_ref_polyveck_invntt_tomont(l_struct_OC_polyvecl *llvm_cbe_v);
void pqcrystals_dilithium2_ref_polyveck_pointwise_poly_montgomery(l_struct_OC_polyvecl *llvm_cbe_r, l_struct_OC_poly *llvm_cbe_a, l_struct_OC_polyvecl *llvm_cbe_v);
signed int pqcrystals_dilithium2_ref_polyveck_chknorm(l_struct_OC_polyvecl *llvm_cbe_v, signed int llvm_cbe_bound);
void pqcrystals_dilithium2_ref_polyveck_power2round(l_struct_OC_polyvecl *llvm_cbe_v1, l_struct_OC_polyvecl *llvm_cbe_v0, l_struct_OC_polyvecl *llvm_cbe_v);
void pqcrystals_dilithium2_ref_poly_power2round(l_struct_OC_poly *, l_struct_OC_poly *, l_struct_OC_poly *);
void pqcrystals_dilithium2_ref_polyveck_decompose(l_struct_OC_polyvecl *llvm_cbe_v1, l_struct_OC_polyvecl *llvm_cbe_v0, l_struct_OC_polyvecl *llvm_cbe_v);
void pqcrystals_dilithium2_ref_poly_decompose(l_struct_OC_poly *, l_struct_OC_poly *, l_struct_OC_poly *);
signed int pqcrystals_dilithium2_ref_polyveck_make_hint(l_struct_OC_polyvecl *llvm_cbe_h, l_struct_OC_polyvecl *llvm_cbe_v0, l_struct_OC_polyvecl *llvm_cbe_v1);
signed int pqcrystals_dilithium2_ref_poly_make_hint(l_struct_OC_poly *, l_struct_OC_poly *, l_struct_OC_poly *);
void pqcrystals_dilithium2_ref_polyveck_use_hint(l_struct_OC_polyvecl *llvm_cbe_w, l_struct_OC_polyvecl *llvm_cbe_u, l_struct_OC_polyvecl *llvm_cbe_h);
void pqcrystals_dilithium2_ref_poly_use_hint(l_struct_OC_poly *, l_struct_OC_poly *, l_struct_OC_poly *);
void pqcrystals_dilithium2_ref_polyveck_pack_w1( char *llvm_cbe_r, l_struct_OC_polyvecl *llvm_cbe_w1);
void pqcrystals_dilithium2_ref_polyw1_pack( char *, l_struct_OC_poly *);


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

void pqcrystals_dilithium2_ref_polyvec_matrix_expand(l_struct_OC_polyvecl *llvm_cbe_mat,  char *llvm_cbe_rho) {
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
  l_struct_OC_poly *llvm_cbe_tmp__1;
  static  unsigned long long aesl_llvm_cbe_15_count = 0;
  static  unsigned long long aesl_llvm_cbe_16_count = 0;
  static  unsigned long long aesl_llvm_cbe_17_count = 0;
  static  unsigned long long aesl_llvm_cbe_18_count = 0;
  static  unsigned long long aesl_llvm_cbe_19_count = 0;
  static  unsigned long long aesl_llvm_cbe_20_count = 0;
  static  unsigned long long aesl_llvm_cbe_21_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__2;
  static  unsigned long long aesl_llvm_cbe_22_count = 0;
  static  unsigned long long aesl_llvm_cbe_23_count = 0;
  static  unsigned long long aesl_llvm_cbe_24_count = 0;
  static  unsigned long long aesl_llvm_cbe_25_count = 0;
  static  unsigned long long aesl_llvm_cbe_26_count = 0;
  static  unsigned long long aesl_llvm_cbe_27_count = 0;
  static  unsigned long long aesl_llvm_cbe_28_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__3;
  static  unsigned long long aesl_llvm_cbe_29_count = 0;
  static  unsigned long long aesl_llvm_cbe_30_count = 0;
  static  unsigned long long aesl_llvm_cbe_31_count = 0;
  static  unsigned long long aesl_llvm_cbe_32_count = 0;
  static  unsigned long long aesl_llvm_cbe_33_count = 0;
  static  unsigned long long aesl_llvm_cbe_34_count = 0;
  static  unsigned long long aesl_llvm_cbe_35_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_36_count = 0;
  static  unsigned long long aesl_llvm_cbe_37_count = 0;
  static  unsigned long long aesl_llvm_cbe_38_count = 0;
  static  unsigned long long aesl_llvm_cbe_39_count = 0;
  static  unsigned long long aesl_llvm_cbe_40_count = 0;
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
  l_struct_OC_poly *llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_52_count = 0;
  static  unsigned long long aesl_llvm_cbe_53_count = 0;
  static  unsigned long long aesl_llvm_cbe_54_count = 0;
  static  unsigned long long aesl_llvm_cbe_55_count = 0;
  static  unsigned long long aesl_llvm_cbe_56_count = 0;
  static  unsigned long long aesl_llvm_cbe_57_count = 0;
  static  unsigned long long aesl_llvm_cbe_58_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__6;
  static  unsigned long long aesl_llvm_cbe_59_count = 0;
  static  unsigned long long aesl_llvm_cbe_60_count = 0;
  static  unsigned long long aesl_llvm_cbe_61_count = 0;
  static  unsigned long long aesl_llvm_cbe_62_count = 0;
  static  unsigned long long aesl_llvm_cbe_63_count = 0;
  static  unsigned long long aesl_llvm_cbe_64_count = 0;
  static  unsigned long long aesl_llvm_cbe_65_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__7;
  static  unsigned long long aesl_llvm_cbe_66_count = 0;
  static  unsigned long long aesl_llvm_cbe_67_count = 0;
  static  unsigned long long aesl_llvm_cbe_68_count = 0;
  static  unsigned long long aesl_llvm_cbe_69_count = 0;
  static  unsigned long long aesl_llvm_cbe_70_count = 0;
  static  unsigned long long aesl_llvm_cbe_71_count = 0;
  static  unsigned long long aesl_llvm_cbe_72_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_73_count = 0;
  static  unsigned long long aesl_llvm_cbe_74_count = 0;
  static  unsigned long long aesl_llvm_cbe_75_count = 0;
  static  unsigned long long aesl_llvm_cbe_76_count = 0;
  static  unsigned long long aesl_llvm_cbe_77_count = 0;
  static  unsigned long long aesl_llvm_cbe_78_count = 0;
  static  unsigned long long aesl_llvm_cbe_79_count = 0;
  static  unsigned long long aesl_llvm_cbe_80_count = 0;
  static  unsigned long long aesl_llvm_cbe_81_count = 0;
  static  unsigned long long aesl_llvm_cbe_82_count = 0;
  static  unsigned long long aesl_llvm_cbe_83_count = 0;
  static  unsigned long long aesl_llvm_cbe_84_count = 0;
  static  unsigned long long aesl_llvm_cbe_85_count = 0;
  static  unsigned long long aesl_llvm_cbe_86_count = 0;
  static  unsigned long long aesl_llvm_cbe_87_count = 0;
  static  unsigned long long aesl_llvm_cbe_88_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_89_count = 0;
  static  unsigned long long aesl_llvm_cbe_90_count = 0;
  static  unsigned long long aesl_llvm_cbe_91_count = 0;
  static  unsigned long long aesl_llvm_cbe_92_count = 0;
  static  unsigned long long aesl_llvm_cbe_93_count = 0;
  static  unsigned long long aesl_llvm_cbe_94_count = 0;
  static  unsigned long long aesl_llvm_cbe_95_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_96_count = 0;
  static  unsigned long long aesl_llvm_cbe_97_count = 0;
  static  unsigned long long aesl_llvm_cbe_98_count = 0;
  static  unsigned long long aesl_llvm_cbe_99_count = 0;
  static  unsigned long long aesl_llvm_cbe_100_count = 0;
  static  unsigned long long aesl_llvm_cbe_101_count = 0;
  static  unsigned long long aesl_llvm_cbe_102_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__11;
  static  unsigned long long aesl_llvm_cbe_103_count = 0;
  static  unsigned long long aesl_llvm_cbe_104_count = 0;
  static  unsigned long long aesl_llvm_cbe_105_count = 0;
  static  unsigned long long aesl_llvm_cbe_106_count = 0;
  static  unsigned long long aesl_llvm_cbe_107_count = 0;
  static  unsigned long long aesl_llvm_cbe_108_count = 0;
  static  unsigned long long aesl_llvm_cbe_109_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__12;
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
  static  unsigned long long aesl_llvm_cbe_125_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__13;
  static  unsigned long long aesl_llvm_cbe_126_count = 0;
  static  unsigned long long aesl_llvm_cbe_127_count = 0;
  static  unsigned long long aesl_llvm_cbe_128_count = 0;
  static  unsigned long long aesl_llvm_cbe_129_count = 0;
  static  unsigned long long aesl_llvm_cbe_130_count = 0;
  static  unsigned long long aesl_llvm_cbe_131_count = 0;
  static  unsigned long long aesl_llvm_cbe_132_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__14;
  static  unsigned long long aesl_llvm_cbe_133_count = 0;
  static  unsigned long long aesl_llvm_cbe_134_count = 0;
  static  unsigned long long aesl_llvm_cbe_135_count = 0;
  static  unsigned long long aesl_llvm_cbe_136_count = 0;
  static  unsigned long long aesl_llvm_cbe_137_count = 0;
  static  unsigned long long aesl_llvm_cbe_138_count = 0;
  static  unsigned long long aesl_llvm_cbe_139_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__15;
  static  unsigned long long aesl_llvm_cbe_140_count = 0;
  static  unsigned long long aesl_llvm_cbe_141_count = 0;
  static  unsigned long long aesl_llvm_cbe_142_count = 0;
  static  unsigned long long aesl_llvm_cbe_143_count = 0;
  static  unsigned long long aesl_llvm_cbe_144_count = 0;
  static  unsigned long long aesl_llvm_cbe_145_count = 0;
  static  unsigned long long aesl_llvm_cbe_146_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__16;
  static  unsigned long long aesl_llvm_cbe_147_count = 0;
  static  unsigned long long aesl_llvm_cbe_148_count = 0;
  static  unsigned long long aesl_llvm_cbe_149_count = 0;
  static  unsigned long long aesl_llvm_cbe_150_count = 0;
  static  unsigned long long aesl_llvm_cbe_151_count = 0;
  static  unsigned long long aesl_llvm_cbe_152_count = 0;
  static  unsigned long long aesl_llvm_cbe_153_count = 0;
  static  unsigned long long aesl_llvm_cbe_154_count = 0;
  static  unsigned long long aesl_llvm_cbe_155_count = 0;
  static  unsigned long long aesl_llvm_cbe_156_count = 0;
  static  unsigned long long aesl_llvm_cbe_157_count = 0;
  static  unsigned long long aesl_llvm_cbe_158_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_polyvec_matrix_expand\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%0 = getelementptr inbounds %%struct.polyvecl* %%mat, i64 0, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvec_matrix_expand  --> \n", ++aesl_llvm_cbe_14_count);
  llvm_cbe_tmp__1 = (l_struct_OC_poly *)(&llvm_cbe_mat->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_uniform(%%struct.poly* %%0, i8* %%rho, i16 zeroext 0) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvec_matrix_expand  --> \n", ++aesl_llvm_cbe_15_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_uniform((l_struct_OC_poly *)llvm_cbe_tmp__1, ( char *)llvm_cbe_rho, ((unsigned short )0));
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",((unsigned short )0));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.polyvecl* %%mat, i64 0, i32 0, i64 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvec_matrix_expand  --> \n", ++aesl_llvm_cbe_21_count);
  llvm_cbe_tmp__2 = (l_struct_OC_poly *)(&llvm_cbe_mat->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_uniform(%%struct.poly* %%1, i8* %%rho, i16 zeroext 1) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvec_matrix_expand  --> \n", ++aesl_llvm_cbe_22_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_uniform((l_struct_OC_poly *)llvm_cbe_tmp__2, ( char *)llvm_cbe_rho, ((unsigned short )1));
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",((unsigned short )1));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds %%struct.polyvecl* %%mat, i64 0, i32 0, i64 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvec_matrix_expand  --> \n", ++aesl_llvm_cbe_28_count);
  llvm_cbe_tmp__3 = (l_struct_OC_poly *)(&llvm_cbe_mat->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_uniform(%%struct.poly* %%2, i8* %%rho, i16 zeroext 2) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvec_matrix_expand  --> \n", ++aesl_llvm_cbe_29_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_uniform((l_struct_OC_poly *)llvm_cbe_tmp__3, ( char *)llvm_cbe_rho, ((unsigned short )2));
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",((unsigned short )2));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.polyvecl* %%mat, i64 0, i32 0, i64 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvec_matrix_expand  --> \n", ++aesl_llvm_cbe_35_count);
  llvm_cbe_tmp__4 = (l_struct_OC_poly *)(&llvm_cbe_mat->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_uniform(%%struct.poly* %%3, i8* %%rho, i16 zeroext 3) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvec_matrix_expand  --> \n", ++aesl_llvm_cbe_36_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_uniform((l_struct_OC_poly *)llvm_cbe_tmp__4, ( char *)llvm_cbe_rho, ((unsigned short )3));
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",((unsigned short )3));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds %%struct.polyvecl* %%mat, i64 1, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvec_matrix_expand  --> \n", ++aesl_llvm_cbe_51_count);
  llvm_cbe_tmp__5 = (l_struct_OC_poly *)(&llvm_cbe_mat[(((signed long long )1ull))].field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_uniform(%%struct.poly* %%4, i8* %%rho, i16 zeroext 256) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvec_matrix_expand  --> \n", ++aesl_llvm_cbe_52_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_uniform((l_struct_OC_poly *)llvm_cbe_tmp__5, ( char *)llvm_cbe_rho, ((unsigned short )256));
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",((unsigned short )256));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds %%struct.polyvecl* %%mat, i64 1, i32 0, i64 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvec_matrix_expand  --> \n", ++aesl_llvm_cbe_58_count);
  llvm_cbe_tmp__6 = (l_struct_OC_poly *)(&llvm_cbe_mat[(((signed long long )1ull))].field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_uniform(%%struct.poly* %%5, i8* %%rho, i16 zeroext 257) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvec_matrix_expand  --> \n", ++aesl_llvm_cbe_59_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_uniform((l_struct_OC_poly *)llvm_cbe_tmp__6, ( char *)llvm_cbe_rho, ((unsigned short )257));
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",((unsigned short )257));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds %%struct.polyvecl* %%mat, i64 1, i32 0, i64 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvec_matrix_expand  --> \n", ++aesl_llvm_cbe_65_count);
  llvm_cbe_tmp__7 = (l_struct_OC_poly *)(&llvm_cbe_mat[(((signed long long )1ull))].field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_uniform(%%struct.poly* %%6, i8* %%rho, i16 zeroext 258) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvec_matrix_expand  --> \n", ++aesl_llvm_cbe_66_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_uniform((l_struct_OC_poly *)llvm_cbe_tmp__7, ( char *)llvm_cbe_rho, ((unsigned short )258));
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",((unsigned short )258));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds %%struct.polyvecl* %%mat, i64 1, i32 0, i64 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvec_matrix_expand  --> \n", ++aesl_llvm_cbe_72_count);
  llvm_cbe_tmp__8 = (l_struct_OC_poly *)(&llvm_cbe_mat[(((signed long long )1ull))].field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_uniform(%%struct.poly* %%7, i8* %%rho, i16 zeroext 259) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvec_matrix_expand  --> \n", ++aesl_llvm_cbe_73_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_uniform((l_struct_OC_poly *)llvm_cbe_tmp__8, ( char *)llvm_cbe_rho, ((unsigned short )259));
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",((unsigned short )259));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds %%struct.polyvecl* %%mat, i64 2, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvec_matrix_expand  --> \n", ++aesl_llvm_cbe_88_count);
  llvm_cbe_tmp__9 = (l_struct_OC_poly *)(&llvm_cbe_mat[(((signed long long )2ull))].field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_uniform(%%struct.poly* %%8, i8* %%rho, i16 zeroext 512) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvec_matrix_expand  --> \n", ++aesl_llvm_cbe_89_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_uniform((l_struct_OC_poly *)llvm_cbe_tmp__9, ( char *)llvm_cbe_rho, ((unsigned short )512));
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",((unsigned short )512));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds %%struct.polyvecl* %%mat, i64 2, i32 0, i64 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvec_matrix_expand  --> \n", ++aesl_llvm_cbe_95_count);
  llvm_cbe_tmp__10 = (l_struct_OC_poly *)(&llvm_cbe_mat[(((signed long long )2ull))].field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_uniform(%%struct.poly* %%9, i8* %%rho, i16 zeroext 513) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvec_matrix_expand  --> \n", ++aesl_llvm_cbe_96_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_uniform((l_struct_OC_poly *)llvm_cbe_tmp__10, ( char *)llvm_cbe_rho, ((unsigned short )513));
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",((unsigned short )513));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds %%struct.polyvecl* %%mat, i64 2, i32 0, i64 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvec_matrix_expand  --> \n", ++aesl_llvm_cbe_102_count);
  llvm_cbe_tmp__11 = (l_struct_OC_poly *)(&llvm_cbe_mat[(((signed long long )2ull))].field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_uniform(%%struct.poly* %%10, i8* %%rho, i16 zeroext 514) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvec_matrix_expand  --> \n", ++aesl_llvm_cbe_103_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_uniform((l_struct_OC_poly *)llvm_cbe_tmp__11, ( char *)llvm_cbe_rho, ((unsigned short )514));
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",((unsigned short )514));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds %%struct.polyvecl* %%mat, i64 2, i32 0, i64 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvec_matrix_expand  --> \n", ++aesl_llvm_cbe_109_count);
  llvm_cbe_tmp__12 = (l_struct_OC_poly *)(&llvm_cbe_mat[(((signed long long )2ull))].field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_uniform(%%struct.poly* %%11, i8* %%rho, i16 zeroext 515) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvec_matrix_expand  --> \n", ++aesl_llvm_cbe_110_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_uniform((l_struct_OC_poly *)llvm_cbe_tmp__12, ( char *)llvm_cbe_rho, ((unsigned short )515));
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",((unsigned short )515));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = getelementptr inbounds %%struct.polyvecl* %%mat, i64 3, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvec_matrix_expand  --> \n", ++aesl_llvm_cbe_125_count);
  llvm_cbe_tmp__13 = (l_struct_OC_poly *)(&llvm_cbe_mat[(((signed long long )3ull))].field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_uniform(%%struct.poly* %%12, i8* %%rho, i16 zeroext 768) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvec_matrix_expand  --> \n", ++aesl_llvm_cbe_126_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_uniform((l_struct_OC_poly *)llvm_cbe_tmp__13, ( char *)llvm_cbe_rho, ((unsigned short )768));
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",((unsigned short )768));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds %%struct.polyvecl* %%mat, i64 3, i32 0, i64 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvec_matrix_expand  --> \n", ++aesl_llvm_cbe_132_count);
  llvm_cbe_tmp__14 = (l_struct_OC_poly *)(&llvm_cbe_mat[(((signed long long )3ull))].field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_uniform(%%struct.poly* %%13, i8* %%rho, i16 zeroext 769) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvec_matrix_expand  --> \n", ++aesl_llvm_cbe_133_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_uniform((l_struct_OC_poly *)llvm_cbe_tmp__14, ( char *)llvm_cbe_rho, ((unsigned short )769));
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",((unsigned short )769));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = getelementptr inbounds %%struct.polyvecl* %%mat, i64 3, i32 0, i64 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvec_matrix_expand  --> \n", ++aesl_llvm_cbe_139_count);
  llvm_cbe_tmp__15 = (l_struct_OC_poly *)(&llvm_cbe_mat[(((signed long long )3ull))].field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_uniform(%%struct.poly* %%14, i8* %%rho, i16 zeroext 770) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvec_matrix_expand  --> \n", ++aesl_llvm_cbe_140_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_uniform((l_struct_OC_poly *)llvm_cbe_tmp__15, ( char *)llvm_cbe_rho, ((unsigned short )770));
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",((unsigned short )770));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds %%struct.polyvecl* %%mat, i64 3, i32 0, i64 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvec_matrix_expand  --> \n", ++aesl_llvm_cbe_146_count);
  llvm_cbe_tmp__16 = (l_struct_OC_poly *)(&llvm_cbe_mat[(((signed long long )3ull))].field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_uniform(%%struct.poly* %%15, i8* %%rho, i16 zeroext 771) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvec_matrix_expand  --> \n", ++aesl_llvm_cbe_147_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_uniform((l_struct_OC_poly *)llvm_cbe_tmp__16, ( char *)llvm_cbe_rho, ((unsigned short )771));
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",((unsigned short )771));
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_polyvec_matrix_expand}\n");
  return;
}


void pqcrystals_dilithium2_ref_polyvec_matrix_pointwise_montgomery(l_struct_OC_polyvecl *llvm_cbe_t, l_struct_OC_polyvecl *llvm_cbe_mat, l_struct_OC_polyvecl *llvm_cbe_v) {
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
  static  unsigned long long aesl_llvm_cbe_169_count = 0;
  static  unsigned long long aesl_llvm_cbe_170_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__17;
  static  unsigned long long aesl_llvm_cbe_171_count = 0;
  static  unsigned long long aesl_llvm_cbe_172_count = 0;
  static  unsigned long long aesl_llvm_cbe_173_count = 0;
  static  unsigned long long aesl_llvm_cbe_174_count = 0;
  static  unsigned long long aesl_llvm_cbe_175_count = 0;
  static  unsigned long long aesl_llvm_cbe_176_count = 0;
  static  unsigned long long aesl_llvm_cbe_177_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__18;
  static  unsigned long long aesl_llvm_cbe_178_count = 0;
  l_struct_OC_polyvecl *llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_179_count = 0;
  static  unsigned long long aesl_llvm_cbe_180_count = 0;
  static  unsigned long long aesl_llvm_cbe_181_count = 0;
  static  unsigned long long aesl_llvm_cbe_182_count = 0;
  static  unsigned long long aesl_llvm_cbe_183_count = 0;
  static  unsigned long long aesl_llvm_cbe_184_count = 0;
  static  unsigned long long aesl_llvm_cbe_185_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__20;
  static  unsigned long long aesl_llvm_cbe_186_count = 0;
  l_struct_OC_polyvecl *llvm_cbe_tmp__21;
  static  unsigned long long aesl_llvm_cbe_187_count = 0;
  static  unsigned long long aesl_llvm_cbe_188_count = 0;
  static  unsigned long long aesl_llvm_cbe_189_count = 0;
  static  unsigned long long aesl_llvm_cbe_190_count = 0;
  static  unsigned long long aesl_llvm_cbe_191_count = 0;
  static  unsigned long long aesl_llvm_cbe_192_count = 0;
  static  unsigned long long aesl_llvm_cbe_193_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__22;
  static  unsigned long long aesl_llvm_cbe_194_count = 0;
  l_struct_OC_polyvecl *llvm_cbe_tmp__23;
  static  unsigned long long aesl_llvm_cbe_195_count = 0;
  static  unsigned long long aesl_llvm_cbe_196_count = 0;
  static  unsigned long long aesl_llvm_cbe_197_count = 0;
  static  unsigned long long aesl_llvm_cbe_198_count = 0;
  static  unsigned long long aesl_llvm_cbe_199_count = 0;
  static  unsigned long long aesl_llvm_cbe_200_count = 0;
  static  unsigned long long aesl_llvm_cbe_201_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_polyvec_matrix_pointwise_montgomery\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.polyvecl* %%t, i64 0, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvec_matrix_pointwise_montgomery  --> \n", ++aesl_llvm_cbe_170_count);
  llvm_cbe_tmp__17 = (l_struct_OC_poly *)(&llvm_cbe_t->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_polyvecl_pointwise_acc_montgomery(%%struct.poly* %%1, %%struct.polyvecl* %%mat, %%struct.polyvecl* %%v), !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvec_matrix_pointwise_montgomery  --> \n", ++aesl_llvm_cbe_171_count);
   /*tail*/ pqcrystals_dilithium2_ref_polyvecl_pointwise_acc_montgomery((l_struct_OC_poly *)llvm_cbe_tmp__17, (l_struct_OC_polyvecl *)llvm_cbe_mat, (l_struct_OC_polyvecl *)llvm_cbe_v);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds %%struct.polyvecl* %%t, i64 0, i32 0, i64 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvec_matrix_pointwise_montgomery  --> \n", ++aesl_llvm_cbe_177_count);
  llvm_cbe_tmp__18 = (l_struct_OC_poly *)(&llvm_cbe_t->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.polyvecl* %%mat, i64 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvec_matrix_pointwise_montgomery  --> \n", ++aesl_llvm_cbe_178_count);
  llvm_cbe_tmp__19 = (l_struct_OC_polyvecl *)(&llvm_cbe_mat[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_polyvecl_pointwise_acc_montgomery(%%struct.poly* %%2, %%struct.polyvecl* %%3, %%struct.polyvecl* %%v), !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvec_matrix_pointwise_montgomery  --> \n", ++aesl_llvm_cbe_179_count);
   /*tail*/ pqcrystals_dilithium2_ref_polyvecl_pointwise_acc_montgomery((l_struct_OC_poly *)llvm_cbe_tmp__18, (l_struct_OC_polyvecl *)llvm_cbe_tmp__19, (l_struct_OC_polyvecl *)llvm_cbe_v);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds %%struct.polyvecl* %%t, i64 0, i32 0, i64 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvec_matrix_pointwise_montgomery  --> \n", ++aesl_llvm_cbe_185_count);
  llvm_cbe_tmp__20 = (l_struct_OC_poly *)(&llvm_cbe_t->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds %%struct.polyvecl* %%mat, i64 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvec_matrix_pointwise_montgomery  --> \n", ++aesl_llvm_cbe_186_count);
  llvm_cbe_tmp__21 = (l_struct_OC_polyvecl *)(&llvm_cbe_mat[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_polyvecl_pointwise_acc_montgomery(%%struct.poly* %%4, %%struct.polyvecl* %%5, %%struct.polyvecl* %%v), !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvec_matrix_pointwise_montgomery  --> \n", ++aesl_llvm_cbe_187_count);
   /*tail*/ pqcrystals_dilithium2_ref_polyvecl_pointwise_acc_montgomery((l_struct_OC_poly *)llvm_cbe_tmp__20, (l_struct_OC_polyvecl *)llvm_cbe_tmp__21, (l_struct_OC_polyvecl *)llvm_cbe_v);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds %%struct.polyvecl* %%t, i64 0, i32 0, i64 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvec_matrix_pointwise_montgomery  --> \n", ++aesl_llvm_cbe_193_count);
  llvm_cbe_tmp__22 = (l_struct_OC_poly *)(&llvm_cbe_t->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds %%struct.polyvecl* %%mat, i64 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvec_matrix_pointwise_montgomery  --> \n", ++aesl_llvm_cbe_194_count);
  llvm_cbe_tmp__23 = (l_struct_OC_polyvecl *)(&llvm_cbe_mat[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_polyvecl_pointwise_acc_montgomery(%%struct.poly* %%6, %%struct.polyvecl* %%7, %%struct.polyvecl* %%v), !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvec_matrix_pointwise_montgomery  --> \n", ++aesl_llvm_cbe_195_count);
   /*tail*/ pqcrystals_dilithium2_ref_polyvecl_pointwise_acc_montgomery((l_struct_OC_poly *)llvm_cbe_tmp__22, (l_struct_OC_polyvecl *)llvm_cbe_tmp__23, (l_struct_OC_polyvecl *)llvm_cbe_v);
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_polyvec_matrix_pointwise_montgomery}\n");
  return;
}


void pqcrystals_dilithium2_ref_polyvecl_pointwise_acc_montgomery(l_struct_OC_poly *llvm_cbe_w, l_struct_OC_polyvecl *llvm_cbe_u, l_struct_OC_polyvecl *llvm_cbe_v) {
  static  unsigned long long aesl_llvm_cbe_t_count = 0;
  l_struct_OC_poly llvm_cbe_t;    /* Address-exposed local */
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
  l_struct_OC_poly *llvm_cbe_tmp__24;
  static  unsigned long long aesl_llvm_cbe_214_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__25;
  static  unsigned long long aesl_llvm_cbe_215_count = 0;
  static  unsigned long long aesl_llvm_cbe_216_count = 0;
  static  unsigned long long aesl_llvm_cbe_217_count = 0;
  static  unsigned long long aesl_llvm_cbe_218_count = 0;
  static  unsigned long long aesl_llvm_cbe_219_count = 0;
  static  unsigned long long aesl_llvm_cbe_220_count = 0;
  static  unsigned long long aesl_llvm_cbe_221_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__26;
  static  unsigned long long aesl_llvm_cbe_222_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__27;
  static  unsigned long long aesl_llvm_cbe_223_count = 0;
  static  unsigned long long aesl_llvm_cbe_224_count = 0;
  static  unsigned long long aesl_llvm_cbe_225_count = 0;
  static  unsigned long long aesl_llvm_cbe_226_count = 0;
  static  unsigned long long aesl_llvm_cbe_227_count = 0;
  static  unsigned long long aesl_llvm_cbe_228_count = 0;
  static  unsigned long long aesl_llvm_cbe_229_count = 0;
  static  unsigned long long aesl_llvm_cbe_230_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__28;
  static  unsigned long long aesl_llvm_cbe_231_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__29;
  static  unsigned long long aesl_llvm_cbe_232_count = 0;
  static  unsigned long long aesl_llvm_cbe_233_count = 0;
  static  unsigned long long aesl_llvm_cbe_234_count = 0;
  static  unsigned long long aesl_llvm_cbe_235_count = 0;
  static  unsigned long long aesl_llvm_cbe_236_count = 0;
  static  unsigned long long aesl_llvm_cbe_237_count = 0;
  static  unsigned long long aesl_llvm_cbe_238_count = 0;
  static  unsigned long long aesl_llvm_cbe_239_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__30;
  static  unsigned long long aesl_llvm_cbe_240_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__31;
  static  unsigned long long aesl_llvm_cbe_241_count = 0;
  static  unsigned long long aesl_llvm_cbe_242_count = 0;
  static  unsigned long long aesl_llvm_cbe_243_count = 0;
  static  unsigned long long aesl_llvm_cbe_244_count = 0;
  static  unsigned long long aesl_llvm_cbe_245_count = 0;
  static  unsigned long long aesl_llvm_cbe_246_count = 0;
  static  unsigned long long aesl_llvm_cbe_247_count = 0;
  static  unsigned long long aesl_llvm_cbe_248_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_polyvecl_pointwise_acc_montgomery\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.polyvecl* %%u, i64 0, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_pointwise_acc_montgomery  --> \n", ++aesl_llvm_cbe_213_count);
  llvm_cbe_tmp__24 = (l_struct_OC_poly *)(&llvm_cbe_u->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_pointwise_acc_montgomery  --> \n", ++aesl_llvm_cbe_214_count);
  llvm_cbe_tmp__25 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @pqcrystals_dilithium2_ref_poly_pointwise_montgomery(%%struct.poly* %%w, %%struct.poly* %%1, %%struct.poly* %%2) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_pointwise_acc_montgomery  --> \n", ++aesl_llvm_cbe_215_count);
  pqcrystals_dilithium2_ref_poly_pointwise_montgomery((l_struct_OC_poly *)llvm_cbe_w, (l_struct_OC_poly *)llvm_cbe_tmp__24, (l_struct_OC_poly *)llvm_cbe_tmp__25);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.polyvecl* %%u, i64 0, i32 0, i64 1, !dbg !18 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_pointwise_acc_montgomery  --> \n", ++aesl_llvm_cbe_221_count);
  llvm_cbe_tmp__26 = (l_struct_OC_poly *)(&llvm_cbe_u->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 1, !dbg !18 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_pointwise_acc_montgomery  --> \n", ++aesl_llvm_cbe_222_count);
  llvm_cbe_tmp__27 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @pqcrystals_dilithium2_ref_poly_pointwise_montgomery(%%struct.poly* %%t, %%struct.poly* %%3, %%struct.poly* %%4) nounwind, !dbg !18 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_pointwise_acc_montgomery  --> \n", ++aesl_llvm_cbe_223_count);
  pqcrystals_dilithium2_ref_poly_pointwise_montgomery((l_struct_OC_poly *)(&llvm_cbe_t), (l_struct_OC_poly *)llvm_cbe_tmp__26, (l_struct_OC_poly *)llvm_cbe_tmp__27);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @pqcrystals_dilithium2_ref_poly_add(%%struct.poly* %%w, %%struct.poly* %%w, %%struct.poly* %%t) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_pointwise_acc_montgomery  --> \n", ++aesl_llvm_cbe_224_count);
  pqcrystals_dilithium2_ref_poly_add((l_struct_OC_poly *)llvm_cbe_w, (l_struct_OC_poly *)llvm_cbe_w, (l_struct_OC_poly *)(&llvm_cbe_t));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds %%struct.polyvecl* %%u, i64 0, i32 0, i64 2, !dbg !18 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_pointwise_acc_montgomery  --> \n", ++aesl_llvm_cbe_230_count);
  llvm_cbe_tmp__28 = (l_struct_OC_poly *)(&llvm_cbe_u->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 2, !dbg !18 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_pointwise_acc_montgomery  --> \n", ++aesl_llvm_cbe_231_count);
  llvm_cbe_tmp__29 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @pqcrystals_dilithium2_ref_poly_pointwise_montgomery(%%struct.poly* %%t, %%struct.poly* %%5, %%struct.poly* %%6) nounwind, !dbg !18 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_pointwise_acc_montgomery  --> \n", ++aesl_llvm_cbe_232_count);
  pqcrystals_dilithium2_ref_poly_pointwise_montgomery((l_struct_OC_poly *)(&llvm_cbe_t), (l_struct_OC_poly *)llvm_cbe_tmp__28, (l_struct_OC_poly *)llvm_cbe_tmp__29);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @pqcrystals_dilithium2_ref_poly_add(%%struct.poly* %%w, %%struct.poly* %%w, %%struct.poly* %%t) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_pointwise_acc_montgomery  --> \n", ++aesl_llvm_cbe_233_count);
  pqcrystals_dilithium2_ref_poly_add((l_struct_OC_poly *)llvm_cbe_w, (l_struct_OC_poly *)llvm_cbe_w, (l_struct_OC_poly *)(&llvm_cbe_t));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds %%struct.polyvecl* %%u, i64 0, i32 0, i64 3, !dbg !18 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_pointwise_acc_montgomery  --> \n", ++aesl_llvm_cbe_239_count);
  llvm_cbe_tmp__30 = (l_struct_OC_poly *)(&llvm_cbe_u->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 3, !dbg !18 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_pointwise_acc_montgomery  --> \n", ++aesl_llvm_cbe_240_count);
  llvm_cbe_tmp__31 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @pqcrystals_dilithium2_ref_poly_pointwise_montgomery(%%struct.poly* %%t, %%struct.poly* %%7, %%struct.poly* %%8) nounwind, !dbg !18 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_pointwise_acc_montgomery  --> \n", ++aesl_llvm_cbe_241_count);
  pqcrystals_dilithium2_ref_poly_pointwise_montgomery((l_struct_OC_poly *)(&llvm_cbe_t), (l_struct_OC_poly *)llvm_cbe_tmp__30, (l_struct_OC_poly *)llvm_cbe_tmp__31);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @pqcrystals_dilithium2_ref_poly_add(%%struct.poly* %%w, %%struct.poly* %%w, %%struct.poly* %%t) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_pointwise_acc_montgomery  --> \n", ++aesl_llvm_cbe_242_count);
  pqcrystals_dilithium2_ref_poly_add((l_struct_OC_poly *)llvm_cbe_w, (l_struct_OC_poly *)llvm_cbe_w, (l_struct_OC_poly *)(&llvm_cbe_t));
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_polyvecl_pointwise_acc_montgomery}\n");
  return;
}


void pqcrystals_dilithium2_ref_polyvecl_uniform_eta(l_struct_OC_polyvecl *llvm_cbe_v,  char *llvm_cbe_seed, signed short llvm_cbe_nonce) {
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
  l_struct_OC_poly *llvm_cbe_tmp__32;
  static  unsigned long long aesl_llvm_cbe_260_count = 0;
  unsigned short llvm_cbe_tmp__33;
  static  unsigned long long aesl_llvm_cbe_261_count = 0;
  static  unsigned long long aesl_llvm_cbe_262_count = 0;
  static  unsigned long long aesl_llvm_cbe_263_count = 0;
  static  unsigned long long aesl_llvm_cbe_264_count = 0;
  static  unsigned long long aesl_llvm_cbe_265_count = 0;
  static  unsigned long long aesl_llvm_cbe_266_count = 0;
  static  unsigned long long aesl_llvm_cbe_267_count = 0;
  static  unsigned long long aesl_llvm_cbe_268_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__34;
  static  unsigned long long aesl_llvm_cbe_269_count = 0;
  unsigned short llvm_cbe_tmp__35;
  static  unsigned long long aesl_llvm_cbe_270_count = 0;
  static  unsigned long long aesl_llvm_cbe_271_count = 0;
  static  unsigned long long aesl_llvm_cbe_272_count = 0;
  static  unsigned long long aesl_llvm_cbe_273_count = 0;
  static  unsigned long long aesl_llvm_cbe_274_count = 0;
  static  unsigned long long aesl_llvm_cbe_275_count = 0;
  static  unsigned long long aesl_llvm_cbe_276_count = 0;
  static  unsigned long long aesl_llvm_cbe_277_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__36;
  static  unsigned long long aesl_llvm_cbe_278_count = 0;
  unsigned short llvm_cbe_tmp__37;
  static  unsigned long long aesl_llvm_cbe_279_count = 0;
  static  unsigned long long aesl_llvm_cbe_280_count = 0;
  static  unsigned long long aesl_llvm_cbe_281_count = 0;
  static  unsigned long long aesl_llvm_cbe_282_count = 0;
  static  unsigned long long aesl_llvm_cbe_283_count = 0;
  static  unsigned long long aesl_llvm_cbe_284_count = 0;
  static  unsigned long long aesl_llvm_cbe_285_count = 0;
  static  unsigned long long aesl_llvm_cbe_286_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__38;
  static  unsigned long long aesl_llvm_cbe_287_count = 0;
  static  unsigned long long aesl_llvm_cbe_288_count = 0;
  static  unsigned long long aesl_llvm_cbe_289_count = 0;
  static  unsigned long long aesl_llvm_cbe_290_count = 0;
  static  unsigned long long aesl_llvm_cbe_291_count = 0;
  static  unsigned long long aesl_llvm_cbe_292_count = 0;
  static  unsigned long long aesl_llvm_cbe_293_count = 0;
  static  unsigned long long aesl_llvm_cbe_294_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_polyvecl_uniform_eta\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_uniform_eta  --> \n", ++aesl_llvm_cbe_259_count);
  llvm_cbe_tmp__32 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = add i16 %%nonce, 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_uniform_eta  --> \n", ++aesl_llvm_cbe_260_count);
  llvm_cbe_tmp__33 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_nonce&65535ull)) + ((unsigned short )(((unsigned short )1)&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__33&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_uniform_eta(%%struct.poly* %%1, i8* %%seed, i16 zeroext %%nonce) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_uniform_eta  --> \n", ++aesl_llvm_cbe_263_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_uniform_eta((l_struct_OC_poly *)llvm_cbe_tmp__32, ( char *)llvm_cbe_seed, llvm_cbe_nonce);
if (AESL_DEBUG_TRACE) {
printf("\nArgument nonce = 0x%X",llvm_cbe_nonce);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_uniform_eta  --> \n", ++aesl_llvm_cbe_268_count);
  llvm_cbe_tmp__34 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = add i16 %%nonce, 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_uniform_eta  --> \n", ++aesl_llvm_cbe_269_count);
  llvm_cbe_tmp__35 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_nonce&65535ull)) + ((unsigned short )(((unsigned short )2)&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__35&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_uniform_eta(%%struct.poly* %%3, i8* %%seed, i16 zeroext %%2) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_uniform_eta  --> \n", ++aesl_llvm_cbe_272_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_uniform_eta((l_struct_OC_poly *)llvm_cbe_tmp__34, ( char *)llvm_cbe_seed, llvm_cbe_tmp__33);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__33);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_uniform_eta  --> \n", ++aesl_llvm_cbe_277_count);
  llvm_cbe_tmp__36 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = add i16 %%nonce, 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_uniform_eta  --> \n", ++aesl_llvm_cbe_278_count);
  llvm_cbe_tmp__37 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_nonce&65535ull)) + ((unsigned short )(((unsigned short )3)&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__37&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_uniform_eta(%%struct.poly* %%5, i8* %%seed, i16 zeroext %%4) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_uniform_eta  --> \n", ++aesl_llvm_cbe_281_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_uniform_eta((l_struct_OC_poly *)llvm_cbe_tmp__36, ( char *)llvm_cbe_seed, llvm_cbe_tmp__35);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__35);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_uniform_eta  --> \n", ++aesl_llvm_cbe_286_count);
  llvm_cbe_tmp__38 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_uniform_eta(%%struct.poly* %%7, i8* %%seed, i16 zeroext %%6) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_uniform_eta  --> \n", ++aesl_llvm_cbe_289_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_uniform_eta((l_struct_OC_poly *)llvm_cbe_tmp__38, ( char *)llvm_cbe_seed, llvm_cbe_tmp__37);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__37);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_polyvecl_uniform_eta}\n");
  return;
}


void pqcrystals_dilithium2_ref_polyvecl_uniform_gamma1(l_struct_OC_polyvecl *llvm_cbe_v,  char *llvm_cbe_seed, signed short llvm_cbe_nonce) {
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
  unsigned int llvm_cbe_tmp__39;
  static  unsigned long long aesl_llvm_cbe_307_count = 0;
  unsigned int llvm_cbe_tmp__40;
  static  unsigned long long aesl_llvm_cbe_308_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__41;
  static  unsigned long long aesl_llvm_cbe_309_count = 0;
  unsigned short llvm_cbe_tmp__42;
  static  unsigned long long aesl_llvm_cbe_310_count = 0;
  static  unsigned long long aesl_llvm_cbe_311_count = 0;
  static  unsigned long long aesl_llvm_cbe_312_count = 0;
  static  unsigned long long aesl_llvm_cbe_313_count = 0;
  static  unsigned long long aesl_llvm_cbe_314_count = 0;
  static  unsigned long long aesl_llvm_cbe_315_count = 0;
  static  unsigned long long aesl_llvm_cbe_316_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__43;
  static  unsigned long long aesl_llvm_cbe_317_count = 0;
  unsigned short llvm_cbe_tmp__44;
  static  unsigned long long aesl_llvm_cbe_318_count = 0;
  unsigned short llvm_cbe_tmp__45;
  static  unsigned long long aesl_llvm_cbe_319_count = 0;
  static  unsigned long long aesl_llvm_cbe_320_count = 0;
  static  unsigned long long aesl_llvm_cbe_321_count = 0;
  static  unsigned long long aesl_llvm_cbe_322_count = 0;
  static  unsigned long long aesl_llvm_cbe_323_count = 0;
  static  unsigned long long aesl_llvm_cbe_324_count = 0;
  static  unsigned long long aesl_llvm_cbe_325_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__46;
  static  unsigned long long aesl_llvm_cbe_326_count = 0;
  unsigned short llvm_cbe_tmp__47;
  static  unsigned long long aesl_llvm_cbe_327_count = 0;
  unsigned short llvm_cbe_tmp__48;
  static  unsigned long long aesl_llvm_cbe_328_count = 0;
  static  unsigned long long aesl_llvm_cbe_329_count = 0;
  static  unsigned long long aesl_llvm_cbe_330_count = 0;
  static  unsigned long long aesl_llvm_cbe_331_count = 0;
  static  unsigned long long aesl_llvm_cbe_332_count = 0;
  static  unsigned long long aesl_llvm_cbe_333_count = 0;
  static  unsigned long long aesl_llvm_cbe_334_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__49;
  static  unsigned long long aesl_llvm_cbe_335_count = 0;
  unsigned short llvm_cbe_tmp__50;
  static  unsigned long long aesl_llvm_cbe_336_count = 0;
  unsigned short llvm_cbe_tmp__51;
  static  unsigned long long aesl_llvm_cbe_337_count = 0;
  static  unsigned long long aesl_llvm_cbe_338_count = 0;
  static  unsigned long long aesl_llvm_cbe_339_count = 0;
  static  unsigned long long aesl_llvm_cbe_340_count = 0;
  static  unsigned long long aesl_llvm_cbe_341_count = 0;
  static  unsigned long long aesl_llvm_cbe_342_count = 0;
  static  unsigned long long aesl_llvm_cbe_343_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_polyvecl_uniform_gamma1\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = zext i16 %%nonce to i32, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_uniform_gamma1  --> \n", ++aesl_llvm_cbe_306_count);
  llvm_cbe_tmp__39 = (unsigned int )((unsigned int )(unsigned short )llvm_cbe_nonce&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__39);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = shl nuw nsw i32 %%1, 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_uniform_gamma1  --> \n", ++aesl_llvm_cbe_307_count);
  llvm_cbe_tmp__40 = (unsigned int )llvm_cbe_tmp__39 << 2u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__40);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_uniform_gamma1  --> \n", ++aesl_llvm_cbe_308_count);
  llvm_cbe_tmp__41 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = trunc i32 %%2 to i16, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_uniform_gamma1  --> \n", ++aesl_llvm_cbe_309_count);
  llvm_cbe_tmp__42 = (unsigned short )((unsigned short )llvm_cbe_tmp__40&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__42);
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_uniform_gamma1(%%struct.poly* %%3, i8* %%seed, i16 zeroext %%4) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_uniform_gamma1  --> \n", ++aesl_llvm_cbe_310_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_uniform_gamma1((l_struct_OC_poly *)llvm_cbe_tmp__41, ( char *)llvm_cbe_seed, llvm_cbe_tmp__42);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__42);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_uniform_gamma1  --> \n", ++aesl_llvm_cbe_316_count);
  llvm_cbe_tmp__43 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = trunc i32 %%2 to i16, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_uniform_gamma1  --> \n", ++aesl_llvm_cbe_317_count);
  llvm_cbe_tmp__44 = (unsigned short )((unsigned short )llvm_cbe_tmp__40&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__44);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = or i16 %%6, 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_uniform_gamma1  --> \n", ++aesl_llvm_cbe_318_count);
  llvm_cbe_tmp__45 = (unsigned short )((unsigned short )(llvm_cbe_tmp__44 | ((unsigned short )1)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__45);
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_uniform_gamma1(%%struct.poly* %%5, i8* %%seed, i16 zeroext %%7) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_uniform_gamma1  --> \n", ++aesl_llvm_cbe_319_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_uniform_gamma1((l_struct_OC_poly *)llvm_cbe_tmp__43, ( char *)llvm_cbe_seed, llvm_cbe_tmp__45);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__45);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_uniform_gamma1  --> \n", ++aesl_llvm_cbe_325_count);
  llvm_cbe_tmp__46 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = trunc i32 %%2 to i16, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_uniform_gamma1  --> \n", ++aesl_llvm_cbe_326_count);
  llvm_cbe_tmp__47 = (unsigned short )((unsigned short )llvm_cbe_tmp__40&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__47);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = or i16 %%9, 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_uniform_gamma1  --> \n", ++aesl_llvm_cbe_327_count);
  llvm_cbe_tmp__48 = (unsigned short )((unsigned short )(llvm_cbe_tmp__47 | ((unsigned short )2)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__48);
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_uniform_gamma1(%%struct.poly* %%8, i8* %%seed, i16 zeroext %%10) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_uniform_gamma1  --> \n", ++aesl_llvm_cbe_328_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_uniform_gamma1((l_struct_OC_poly *)llvm_cbe_tmp__46, ( char *)llvm_cbe_seed, llvm_cbe_tmp__48);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__48);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_uniform_gamma1  --> \n", ++aesl_llvm_cbe_334_count);
  llvm_cbe_tmp__49 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = trunc i32 %%2 to i16, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_uniform_gamma1  --> \n", ++aesl_llvm_cbe_335_count);
  llvm_cbe_tmp__50 = (unsigned short )((unsigned short )llvm_cbe_tmp__40&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__50);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = or i16 %%12, 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_uniform_gamma1  --> \n", ++aesl_llvm_cbe_336_count);
  llvm_cbe_tmp__51 = (unsigned short )((unsigned short )(llvm_cbe_tmp__50 | ((unsigned short )3)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__51);
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_uniform_gamma1(%%struct.poly* %%11, i8* %%seed, i16 zeroext %%13) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_uniform_gamma1  --> \n", ++aesl_llvm_cbe_337_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_uniform_gamma1((l_struct_OC_poly *)llvm_cbe_tmp__49, ( char *)llvm_cbe_seed, llvm_cbe_tmp__51);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__51);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_polyvecl_uniform_gamma1}\n");
  return;
}


void pqcrystals_dilithium2_ref_polyvecl_reduce(l_struct_OC_polyvecl *llvm_cbe_v) {
  static  unsigned long long aesl_llvm_cbe_344_count = 0;
  static  unsigned long long aesl_llvm_cbe_345_count = 0;
  static  unsigned long long aesl_llvm_cbe_346_count = 0;
  static  unsigned long long aesl_llvm_cbe_347_count = 0;
  static  unsigned long long aesl_llvm_cbe_348_count = 0;
  static  unsigned long long aesl_llvm_cbe_349_count = 0;
  static  unsigned long long aesl_llvm_cbe_350_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__52;
  static  unsigned long long aesl_llvm_cbe_351_count = 0;
  static  unsigned long long aesl_llvm_cbe_352_count = 0;
  static  unsigned long long aesl_llvm_cbe_353_count = 0;
  static  unsigned long long aesl_llvm_cbe_354_count = 0;
  static  unsigned long long aesl_llvm_cbe_355_count = 0;
  static  unsigned long long aesl_llvm_cbe_356_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__53;
  static  unsigned long long aesl_llvm_cbe_357_count = 0;
  static  unsigned long long aesl_llvm_cbe_358_count = 0;
  static  unsigned long long aesl_llvm_cbe_359_count = 0;
  static  unsigned long long aesl_llvm_cbe_360_count = 0;
  static  unsigned long long aesl_llvm_cbe_361_count = 0;
  static  unsigned long long aesl_llvm_cbe_362_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__54;
  static  unsigned long long aesl_llvm_cbe_363_count = 0;
  static  unsigned long long aesl_llvm_cbe_364_count = 0;
  static  unsigned long long aesl_llvm_cbe_365_count = 0;
  static  unsigned long long aesl_llvm_cbe_366_count = 0;
  static  unsigned long long aesl_llvm_cbe_367_count = 0;
  static  unsigned long long aesl_llvm_cbe_368_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__55;
  static  unsigned long long aesl_llvm_cbe_369_count = 0;
  static  unsigned long long aesl_llvm_cbe_370_count = 0;
  static  unsigned long long aesl_llvm_cbe_371_count = 0;
  static  unsigned long long aesl_llvm_cbe_372_count = 0;
  static  unsigned long long aesl_llvm_cbe_373_count = 0;
  static  unsigned long long aesl_llvm_cbe_374_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_polyvecl_reduce\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_reduce  --> \n", ++aesl_llvm_cbe_350_count);
  llvm_cbe_tmp__52 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_reduce(%%struct.poly* %%1) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_reduce  --> \n", ++aesl_llvm_cbe_351_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_reduce((l_struct_OC_poly *)llvm_cbe_tmp__52);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_reduce  --> \n", ++aesl_llvm_cbe_356_count);
  llvm_cbe_tmp__53 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_reduce(%%struct.poly* %%2) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_reduce  --> \n", ++aesl_llvm_cbe_357_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_reduce((l_struct_OC_poly *)llvm_cbe_tmp__53);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_reduce  --> \n", ++aesl_llvm_cbe_362_count);
  llvm_cbe_tmp__54 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_reduce(%%struct.poly* %%3) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_reduce  --> \n", ++aesl_llvm_cbe_363_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_reduce((l_struct_OC_poly *)llvm_cbe_tmp__54);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_reduce  --> \n", ++aesl_llvm_cbe_368_count);
  llvm_cbe_tmp__55 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_reduce(%%struct.poly* %%4) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_reduce  --> \n", ++aesl_llvm_cbe_369_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_reduce((l_struct_OC_poly *)llvm_cbe_tmp__55);
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_polyvecl_reduce}\n");
  return;
}


void pqcrystals_dilithium2_ref_polyvecl_freeze(l_struct_OC_polyvecl *llvm_cbe_v) {
  static  unsigned long long aesl_llvm_cbe_375_count = 0;
  static  unsigned long long aesl_llvm_cbe_376_count = 0;
  static  unsigned long long aesl_llvm_cbe_377_count = 0;
  static  unsigned long long aesl_llvm_cbe_378_count = 0;
  static  unsigned long long aesl_llvm_cbe_379_count = 0;
  static  unsigned long long aesl_llvm_cbe_380_count = 0;
  static  unsigned long long aesl_llvm_cbe_381_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__56;
  static  unsigned long long aesl_llvm_cbe_382_count = 0;
  static  unsigned long long aesl_llvm_cbe_383_count = 0;
  static  unsigned long long aesl_llvm_cbe_384_count = 0;
  static  unsigned long long aesl_llvm_cbe_385_count = 0;
  static  unsigned long long aesl_llvm_cbe_386_count = 0;
  static  unsigned long long aesl_llvm_cbe_387_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__57;
  static  unsigned long long aesl_llvm_cbe_388_count = 0;
  static  unsigned long long aesl_llvm_cbe_389_count = 0;
  static  unsigned long long aesl_llvm_cbe_390_count = 0;
  static  unsigned long long aesl_llvm_cbe_391_count = 0;
  static  unsigned long long aesl_llvm_cbe_392_count = 0;
  static  unsigned long long aesl_llvm_cbe_393_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__58;
  static  unsigned long long aesl_llvm_cbe_394_count = 0;
  static  unsigned long long aesl_llvm_cbe_395_count = 0;
  static  unsigned long long aesl_llvm_cbe_396_count = 0;
  static  unsigned long long aesl_llvm_cbe_397_count = 0;
  static  unsigned long long aesl_llvm_cbe_398_count = 0;
  static  unsigned long long aesl_llvm_cbe_399_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__59;
  static  unsigned long long aesl_llvm_cbe_400_count = 0;
  static  unsigned long long aesl_llvm_cbe_401_count = 0;
  static  unsigned long long aesl_llvm_cbe_402_count = 0;
  static  unsigned long long aesl_llvm_cbe_403_count = 0;
  static  unsigned long long aesl_llvm_cbe_404_count = 0;
  static  unsigned long long aesl_llvm_cbe_405_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_polyvecl_freeze\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_freeze  --> \n", ++aesl_llvm_cbe_381_count);
  llvm_cbe_tmp__56 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_freeze(%%struct.poly* %%1) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_freeze  --> \n", ++aesl_llvm_cbe_382_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_freeze((l_struct_OC_poly *)llvm_cbe_tmp__56);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_freeze  --> \n", ++aesl_llvm_cbe_387_count);
  llvm_cbe_tmp__57 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_freeze(%%struct.poly* %%2) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_freeze  --> \n", ++aesl_llvm_cbe_388_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_freeze((l_struct_OC_poly *)llvm_cbe_tmp__57);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_freeze  --> \n", ++aesl_llvm_cbe_393_count);
  llvm_cbe_tmp__58 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_freeze(%%struct.poly* %%3) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_freeze  --> \n", ++aesl_llvm_cbe_394_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_freeze((l_struct_OC_poly *)llvm_cbe_tmp__58);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_freeze  --> \n", ++aesl_llvm_cbe_399_count);
  llvm_cbe_tmp__59 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_freeze(%%struct.poly* %%4) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_freeze  --> \n", ++aesl_llvm_cbe_400_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_freeze((l_struct_OC_poly *)llvm_cbe_tmp__59);
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_polyvecl_freeze}\n");
  return;
}


void pqcrystals_dilithium2_ref_polyvecl_add(l_struct_OC_polyvecl *llvm_cbe_w, l_struct_OC_polyvecl *llvm_cbe_u, l_struct_OC_polyvecl *llvm_cbe_v) {
  static  unsigned long long aesl_llvm_cbe_406_count = 0;
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
  l_struct_OC_poly *llvm_cbe_tmp__60;
  static  unsigned long long aesl_llvm_cbe_419_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__61;
  static  unsigned long long aesl_llvm_cbe_420_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__62;
  static  unsigned long long aesl_llvm_cbe_421_count = 0;
  static  unsigned long long aesl_llvm_cbe_422_count = 0;
  static  unsigned long long aesl_llvm_cbe_423_count = 0;
  static  unsigned long long aesl_llvm_cbe_424_count = 0;
  static  unsigned long long aesl_llvm_cbe_425_count = 0;
  static  unsigned long long aesl_llvm_cbe_426_count = 0;
  static  unsigned long long aesl_llvm_cbe_427_count = 0;
  static  unsigned long long aesl_llvm_cbe_428_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__63;
  static  unsigned long long aesl_llvm_cbe_429_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__64;
  static  unsigned long long aesl_llvm_cbe_430_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__65;
  static  unsigned long long aesl_llvm_cbe_431_count = 0;
  static  unsigned long long aesl_llvm_cbe_432_count = 0;
  static  unsigned long long aesl_llvm_cbe_433_count = 0;
  static  unsigned long long aesl_llvm_cbe_434_count = 0;
  static  unsigned long long aesl_llvm_cbe_435_count = 0;
  static  unsigned long long aesl_llvm_cbe_436_count = 0;
  static  unsigned long long aesl_llvm_cbe_437_count = 0;
  static  unsigned long long aesl_llvm_cbe_438_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__66;
  static  unsigned long long aesl_llvm_cbe_439_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__67;
  static  unsigned long long aesl_llvm_cbe_440_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__68;
  static  unsigned long long aesl_llvm_cbe_441_count = 0;
  static  unsigned long long aesl_llvm_cbe_442_count = 0;
  static  unsigned long long aesl_llvm_cbe_443_count = 0;
  static  unsigned long long aesl_llvm_cbe_444_count = 0;
  static  unsigned long long aesl_llvm_cbe_445_count = 0;
  static  unsigned long long aesl_llvm_cbe_446_count = 0;
  static  unsigned long long aesl_llvm_cbe_447_count = 0;
  static  unsigned long long aesl_llvm_cbe_448_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__69;
  static  unsigned long long aesl_llvm_cbe_449_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__70;
  static  unsigned long long aesl_llvm_cbe_450_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__71;
  static  unsigned long long aesl_llvm_cbe_451_count = 0;
  static  unsigned long long aesl_llvm_cbe_452_count = 0;
  static  unsigned long long aesl_llvm_cbe_453_count = 0;
  static  unsigned long long aesl_llvm_cbe_454_count = 0;
  static  unsigned long long aesl_llvm_cbe_455_count = 0;
  static  unsigned long long aesl_llvm_cbe_456_count = 0;
  static  unsigned long long aesl_llvm_cbe_457_count = 0;
  static  unsigned long long aesl_llvm_cbe_458_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_polyvecl_add\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.polyvecl* %%w, i64 0, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_add  --> \n", ++aesl_llvm_cbe_418_count);
  llvm_cbe_tmp__60 = (l_struct_OC_poly *)(&llvm_cbe_w->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds %%struct.polyvecl* %%u, i64 0, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_add  --> \n", ++aesl_llvm_cbe_419_count);
  llvm_cbe_tmp__61 = (l_struct_OC_poly *)(&llvm_cbe_u->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_add  --> \n", ++aesl_llvm_cbe_420_count);
  llvm_cbe_tmp__62 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_add(%%struct.poly* %%1, %%struct.poly* %%2, %%struct.poly* %%3) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_add  --> \n", ++aesl_llvm_cbe_421_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_add((l_struct_OC_poly *)llvm_cbe_tmp__60, (l_struct_OC_poly *)llvm_cbe_tmp__61, (l_struct_OC_poly *)llvm_cbe_tmp__62);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds %%struct.polyvecl* %%w, i64 0, i32 0, i64 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_add  --> \n", ++aesl_llvm_cbe_428_count);
  llvm_cbe_tmp__63 = (l_struct_OC_poly *)(&llvm_cbe_w->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds %%struct.polyvecl* %%u, i64 0, i32 0, i64 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_add  --> \n", ++aesl_llvm_cbe_429_count);
  llvm_cbe_tmp__64 = (l_struct_OC_poly *)(&llvm_cbe_u->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_add  --> \n", ++aesl_llvm_cbe_430_count);
  llvm_cbe_tmp__65 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_add(%%struct.poly* %%4, %%struct.poly* %%5, %%struct.poly* %%6) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_add  --> \n", ++aesl_llvm_cbe_431_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_add((l_struct_OC_poly *)llvm_cbe_tmp__63, (l_struct_OC_poly *)llvm_cbe_tmp__64, (l_struct_OC_poly *)llvm_cbe_tmp__65);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds %%struct.polyvecl* %%w, i64 0, i32 0, i64 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_add  --> \n", ++aesl_llvm_cbe_438_count);
  llvm_cbe_tmp__66 = (l_struct_OC_poly *)(&llvm_cbe_w->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds %%struct.polyvecl* %%u, i64 0, i32 0, i64 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_add  --> \n", ++aesl_llvm_cbe_439_count);
  llvm_cbe_tmp__67 = (l_struct_OC_poly *)(&llvm_cbe_u->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_add  --> \n", ++aesl_llvm_cbe_440_count);
  llvm_cbe_tmp__68 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_add(%%struct.poly* %%7, %%struct.poly* %%8, %%struct.poly* %%9) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_add  --> \n", ++aesl_llvm_cbe_441_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_add((l_struct_OC_poly *)llvm_cbe_tmp__66, (l_struct_OC_poly *)llvm_cbe_tmp__67, (l_struct_OC_poly *)llvm_cbe_tmp__68);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds %%struct.polyvecl* %%w, i64 0, i32 0, i64 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_add  --> \n", ++aesl_llvm_cbe_448_count);
  llvm_cbe_tmp__69 = (l_struct_OC_poly *)(&llvm_cbe_w->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds %%struct.polyvecl* %%u, i64 0, i32 0, i64 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_add  --> \n", ++aesl_llvm_cbe_449_count);
  llvm_cbe_tmp__70 = (l_struct_OC_poly *)(&llvm_cbe_u->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_add  --> \n", ++aesl_llvm_cbe_450_count);
  llvm_cbe_tmp__71 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_add(%%struct.poly* %%10, %%struct.poly* %%11, %%struct.poly* %%12) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_add  --> \n", ++aesl_llvm_cbe_451_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_add((l_struct_OC_poly *)llvm_cbe_tmp__69, (l_struct_OC_poly *)llvm_cbe_tmp__70, (l_struct_OC_poly *)llvm_cbe_tmp__71);
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_polyvecl_add}\n");
  return;
}


void pqcrystals_dilithium2_ref_polyvecl_ntt(l_struct_OC_polyvecl *llvm_cbe_v) {
  static  unsigned long long aesl_llvm_cbe_459_count = 0;
  static  unsigned long long aesl_llvm_cbe_460_count = 0;
  static  unsigned long long aesl_llvm_cbe_461_count = 0;
  static  unsigned long long aesl_llvm_cbe_462_count = 0;
  static  unsigned long long aesl_llvm_cbe_463_count = 0;
  static  unsigned long long aesl_llvm_cbe_464_count = 0;
  static  unsigned long long aesl_llvm_cbe_465_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__72;
  static  unsigned long long aesl_llvm_cbe_466_count = 0;
  static  unsigned long long aesl_llvm_cbe_467_count = 0;
  static  unsigned long long aesl_llvm_cbe_468_count = 0;
  static  unsigned long long aesl_llvm_cbe_469_count = 0;
  static  unsigned long long aesl_llvm_cbe_470_count = 0;
  static  unsigned long long aesl_llvm_cbe_471_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__73;
  static  unsigned long long aesl_llvm_cbe_472_count = 0;
  static  unsigned long long aesl_llvm_cbe_473_count = 0;
  static  unsigned long long aesl_llvm_cbe_474_count = 0;
  static  unsigned long long aesl_llvm_cbe_475_count = 0;
  static  unsigned long long aesl_llvm_cbe_476_count = 0;
  static  unsigned long long aesl_llvm_cbe_477_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__74;
  static  unsigned long long aesl_llvm_cbe_478_count = 0;
  static  unsigned long long aesl_llvm_cbe_479_count = 0;
  static  unsigned long long aesl_llvm_cbe_480_count = 0;
  static  unsigned long long aesl_llvm_cbe_481_count = 0;
  static  unsigned long long aesl_llvm_cbe_482_count = 0;
  static  unsigned long long aesl_llvm_cbe_483_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__75;
  static  unsigned long long aesl_llvm_cbe_484_count = 0;
  static  unsigned long long aesl_llvm_cbe_485_count = 0;
  static  unsigned long long aesl_llvm_cbe_486_count = 0;
  static  unsigned long long aesl_llvm_cbe_487_count = 0;
  static  unsigned long long aesl_llvm_cbe_488_count = 0;
  static  unsigned long long aesl_llvm_cbe_489_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_polyvecl_ntt\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_ntt  --> \n", ++aesl_llvm_cbe_465_count);
  llvm_cbe_tmp__72 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_ntt(%%struct.poly* %%1) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_ntt  --> \n", ++aesl_llvm_cbe_466_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_ntt((l_struct_OC_poly *)llvm_cbe_tmp__72);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_ntt  --> \n", ++aesl_llvm_cbe_471_count);
  llvm_cbe_tmp__73 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_ntt(%%struct.poly* %%2) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_ntt  --> \n", ++aesl_llvm_cbe_472_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_ntt((l_struct_OC_poly *)llvm_cbe_tmp__73);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_ntt  --> \n", ++aesl_llvm_cbe_477_count);
  llvm_cbe_tmp__74 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_ntt(%%struct.poly* %%3) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_ntt  --> \n", ++aesl_llvm_cbe_478_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_ntt((l_struct_OC_poly *)llvm_cbe_tmp__74);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_ntt  --> \n", ++aesl_llvm_cbe_483_count);
  llvm_cbe_tmp__75 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_ntt(%%struct.poly* %%4) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_ntt  --> \n", ++aesl_llvm_cbe_484_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_ntt((l_struct_OC_poly *)llvm_cbe_tmp__75);
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_polyvecl_ntt}\n");
  return;
}


void pqcrystals_dilithium2_ref_polyvecl_invntt_tomont(l_struct_OC_polyvecl *llvm_cbe_v) {
  static  unsigned long long aesl_llvm_cbe_490_count = 0;
  static  unsigned long long aesl_llvm_cbe_491_count = 0;
  static  unsigned long long aesl_llvm_cbe_492_count = 0;
  static  unsigned long long aesl_llvm_cbe_493_count = 0;
  static  unsigned long long aesl_llvm_cbe_494_count = 0;
  static  unsigned long long aesl_llvm_cbe_495_count = 0;
  static  unsigned long long aesl_llvm_cbe_496_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__76;
  static  unsigned long long aesl_llvm_cbe_497_count = 0;
  static  unsigned long long aesl_llvm_cbe_498_count = 0;
  static  unsigned long long aesl_llvm_cbe_499_count = 0;
  static  unsigned long long aesl_llvm_cbe_500_count = 0;
  static  unsigned long long aesl_llvm_cbe_501_count = 0;
  static  unsigned long long aesl_llvm_cbe_502_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__77;
  static  unsigned long long aesl_llvm_cbe_503_count = 0;
  static  unsigned long long aesl_llvm_cbe_504_count = 0;
  static  unsigned long long aesl_llvm_cbe_505_count = 0;
  static  unsigned long long aesl_llvm_cbe_506_count = 0;
  static  unsigned long long aesl_llvm_cbe_507_count = 0;
  static  unsigned long long aesl_llvm_cbe_508_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__78;
  static  unsigned long long aesl_llvm_cbe_509_count = 0;
  static  unsigned long long aesl_llvm_cbe_510_count = 0;
  static  unsigned long long aesl_llvm_cbe_511_count = 0;
  static  unsigned long long aesl_llvm_cbe_512_count = 0;
  static  unsigned long long aesl_llvm_cbe_513_count = 0;
  static  unsigned long long aesl_llvm_cbe_514_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__79;
  static  unsigned long long aesl_llvm_cbe_515_count = 0;
  static  unsigned long long aesl_llvm_cbe_516_count = 0;
  static  unsigned long long aesl_llvm_cbe_517_count = 0;
  static  unsigned long long aesl_llvm_cbe_518_count = 0;
  static  unsigned long long aesl_llvm_cbe_519_count = 0;
  static  unsigned long long aesl_llvm_cbe_520_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_polyvecl_invntt_tomont\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_invntt_tomont  --> \n", ++aesl_llvm_cbe_496_count);
  llvm_cbe_tmp__76 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_invntt_tomont(%%struct.poly* %%1) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_invntt_tomont  --> \n", ++aesl_llvm_cbe_497_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_invntt_tomont((l_struct_OC_poly *)llvm_cbe_tmp__76);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_invntt_tomont  --> \n", ++aesl_llvm_cbe_502_count);
  llvm_cbe_tmp__77 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_invntt_tomont(%%struct.poly* %%2) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_invntt_tomont  --> \n", ++aesl_llvm_cbe_503_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_invntt_tomont((l_struct_OC_poly *)llvm_cbe_tmp__77);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_invntt_tomont  --> \n", ++aesl_llvm_cbe_508_count);
  llvm_cbe_tmp__78 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_invntt_tomont(%%struct.poly* %%3) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_invntt_tomont  --> \n", ++aesl_llvm_cbe_509_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_invntt_tomont((l_struct_OC_poly *)llvm_cbe_tmp__78);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_invntt_tomont  --> \n", ++aesl_llvm_cbe_514_count);
  llvm_cbe_tmp__79 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_invntt_tomont(%%struct.poly* %%4) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_invntt_tomont  --> \n", ++aesl_llvm_cbe_515_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_invntt_tomont((l_struct_OC_poly *)llvm_cbe_tmp__79);
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_polyvecl_invntt_tomont}\n");
  return;
}


void pqcrystals_dilithium2_ref_polyvecl_pointwise_poly_montgomery(l_struct_OC_polyvecl *llvm_cbe_r, l_struct_OC_poly *llvm_cbe_a, l_struct_OC_polyvecl *llvm_cbe_v) {
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
  l_struct_OC_poly *llvm_cbe_tmp__80;
  static  unsigned long long aesl_llvm_cbe_533_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__81;
  static  unsigned long long aesl_llvm_cbe_534_count = 0;
  static  unsigned long long aesl_llvm_cbe_535_count = 0;
  static  unsigned long long aesl_llvm_cbe_536_count = 0;
  static  unsigned long long aesl_llvm_cbe_537_count = 0;
  static  unsigned long long aesl_llvm_cbe_538_count = 0;
  static  unsigned long long aesl_llvm_cbe_539_count = 0;
  static  unsigned long long aesl_llvm_cbe_540_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__82;
  static  unsigned long long aesl_llvm_cbe_541_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__83;
  static  unsigned long long aesl_llvm_cbe_542_count = 0;
  static  unsigned long long aesl_llvm_cbe_543_count = 0;
  static  unsigned long long aesl_llvm_cbe_544_count = 0;
  static  unsigned long long aesl_llvm_cbe_545_count = 0;
  static  unsigned long long aesl_llvm_cbe_546_count = 0;
  static  unsigned long long aesl_llvm_cbe_547_count = 0;
  static  unsigned long long aesl_llvm_cbe_548_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__84;
  static  unsigned long long aesl_llvm_cbe_549_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__85;
  static  unsigned long long aesl_llvm_cbe_550_count = 0;
  static  unsigned long long aesl_llvm_cbe_551_count = 0;
  static  unsigned long long aesl_llvm_cbe_552_count = 0;
  static  unsigned long long aesl_llvm_cbe_553_count = 0;
  static  unsigned long long aesl_llvm_cbe_554_count = 0;
  static  unsigned long long aesl_llvm_cbe_555_count = 0;
  static  unsigned long long aesl_llvm_cbe_556_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__86;
  static  unsigned long long aesl_llvm_cbe_557_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__87;
  static  unsigned long long aesl_llvm_cbe_558_count = 0;
  static  unsigned long long aesl_llvm_cbe_559_count = 0;
  static  unsigned long long aesl_llvm_cbe_560_count = 0;
  static  unsigned long long aesl_llvm_cbe_561_count = 0;
  static  unsigned long long aesl_llvm_cbe_562_count = 0;
  static  unsigned long long aesl_llvm_cbe_563_count = 0;
  static  unsigned long long aesl_llvm_cbe_564_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_polyvecl_pointwise_poly_montgomery\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.polyvecl* %%r, i64 0, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_pointwise_poly_montgomery  --> \n", ++aesl_llvm_cbe_532_count);
  llvm_cbe_tmp__80 = (l_struct_OC_poly *)(&llvm_cbe_r->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_pointwise_poly_montgomery  --> \n", ++aesl_llvm_cbe_533_count);
  llvm_cbe_tmp__81 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_pointwise_montgomery(%%struct.poly* %%1, %%struct.poly* %%a, %%struct.poly* %%2) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_pointwise_poly_montgomery  --> \n", ++aesl_llvm_cbe_534_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_pointwise_montgomery((l_struct_OC_poly *)llvm_cbe_tmp__80, (l_struct_OC_poly *)llvm_cbe_a, (l_struct_OC_poly *)llvm_cbe_tmp__81);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.polyvecl* %%r, i64 0, i32 0, i64 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_pointwise_poly_montgomery  --> \n", ++aesl_llvm_cbe_540_count);
  llvm_cbe_tmp__82 = (l_struct_OC_poly *)(&llvm_cbe_r->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_pointwise_poly_montgomery  --> \n", ++aesl_llvm_cbe_541_count);
  llvm_cbe_tmp__83 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_pointwise_montgomery(%%struct.poly* %%3, %%struct.poly* %%a, %%struct.poly* %%4) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_pointwise_poly_montgomery  --> \n", ++aesl_llvm_cbe_542_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_pointwise_montgomery((l_struct_OC_poly *)llvm_cbe_tmp__82, (l_struct_OC_poly *)llvm_cbe_a, (l_struct_OC_poly *)llvm_cbe_tmp__83);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds %%struct.polyvecl* %%r, i64 0, i32 0, i64 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_pointwise_poly_montgomery  --> \n", ++aesl_llvm_cbe_548_count);
  llvm_cbe_tmp__84 = (l_struct_OC_poly *)(&llvm_cbe_r->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_pointwise_poly_montgomery  --> \n", ++aesl_llvm_cbe_549_count);
  llvm_cbe_tmp__85 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_pointwise_montgomery(%%struct.poly* %%5, %%struct.poly* %%a, %%struct.poly* %%6) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_pointwise_poly_montgomery  --> \n", ++aesl_llvm_cbe_550_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_pointwise_montgomery((l_struct_OC_poly *)llvm_cbe_tmp__84, (l_struct_OC_poly *)llvm_cbe_a, (l_struct_OC_poly *)llvm_cbe_tmp__85);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds %%struct.polyvecl* %%r, i64 0, i32 0, i64 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_pointwise_poly_montgomery  --> \n", ++aesl_llvm_cbe_556_count);
  llvm_cbe_tmp__86 = (l_struct_OC_poly *)(&llvm_cbe_r->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_pointwise_poly_montgomery  --> \n", ++aesl_llvm_cbe_557_count);
  llvm_cbe_tmp__87 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_pointwise_montgomery(%%struct.poly* %%7, %%struct.poly* %%a, %%struct.poly* %%8) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_pointwise_poly_montgomery  --> \n", ++aesl_llvm_cbe_558_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_pointwise_montgomery((l_struct_OC_poly *)llvm_cbe_tmp__86, (l_struct_OC_poly *)llvm_cbe_a, (l_struct_OC_poly *)llvm_cbe_tmp__87);
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_polyvecl_pointwise_poly_montgomery}\n");
  return;
}


signed int pqcrystals_dilithium2_ref_polyvecl_chknorm(l_struct_OC_polyvecl *llvm_cbe_v, signed int llvm_cbe_bound) {
  static  unsigned long long aesl_llvm_cbe_565_count = 0;
  static  unsigned long long aesl_llvm_cbe_566_count = 0;
  static  unsigned long long aesl_llvm_cbe_567_count = 0;
  static  unsigned long long aesl_llvm_cbe_568_count = 0;
  static  unsigned long long aesl_llvm_cbe_569_count = 0;
  static  unsigned long long aesl_llvm_cbe_570_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge_count = 0;
  unsigned int llvm_cbe_storemerge;
  unsigned int llvm_cbe_storemerge__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_571_count = 0;
  static  unsigned long long aesl_llvm_cbe_572_count = 0;
  static  unsigned long long aesl_llvm_cbe_573_count = 0;
  static  unsigned long long aesl_llvm_cbe_574_count = 0;
  static  unsigned long long aesl_llvm_cbe_575_count = 0;
  static  unsigned long long aesl_llvm_cbe_576_count = 0;
  unsigned long long llvm_cbe_tmp__88;
  static  unsigned long long aesl_llvm_cbe_577_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__89;
  static  unsigned long long aesl_llvm_cbe_578_count = 0;
  unsigned int llvm_cbe_tmp__90;
  static  unsigned long long aesl_llvm_cbe_579_count = 0;
  static  unsigned long long aesl_llvm_cbe_580_count = 0;
  unsigned int llvm_cbe_tmp__91;
  static  unsigned long long aesl_llvm_cbe_581_count = 0;
  static  unsigned long long aesl_llvm_cbe_582_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  unsigned int llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_583_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_polyvecl_chknorm\n");
  llvm_cbe_storemerge__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__92;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__92:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge = phi i32 [ 0, %%0 ], [ %%8, %%3  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_chknorm  --> \n", ++aesl_llvm_cbe_storemerge_count);
  llvm_cbe_storemerge = (unsigned int )llvm_cbe_storemerge__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge = 0x%X",llvm_cbe_storemerge);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__91);
}
  if ((((unsigned int )llvm_cbe_storemerge&4294967295U) < ((unsigned int )4u&4294967295U))) {
    goto llvm_cbe_tmp__93;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe_tmp__94;
  }

llvm_cbe_tmp__93:
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = zext i32 %%storemerge to i64, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_chknorm  --> \n", ++aesl_llvm_cbe_576_count);
  llvm_cbe_tmp__88 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__88);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 %%4, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_chknorm  --> \n", ++aesl_llvm_cbe_577_count);
  llvm_cbe_tmp__89 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )llvm_cbe_tmp__88))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__88));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = tail call i32 @pqcrystals_dilithium2_ref_poly_chknorm(%%struct.poly* %%5, i32 %%bound) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_chknorm  --> \n", ++aesl_llvm_cbe_578_count);
  llvm_cbe_tmp__90 = (unsigned int ) /*tail*/ pqcrystals_dilithium2_ref_poly_chknorm((l_struct_OC_poly *)llvm_cbe_tmp__89, llvm_cbe_bound);
if (AESL_DEBUG_TRACE) {
printf("\nArgument bound = 0x%X",llvm_cbe_bound);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__90);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = add i32 %%storemerge, 1, !dbg !18 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_chknorm  --> \n", ++aesl_llvm_cbe_580_count);
  llvm_cbe_tmp__91 = (unsigned int )((unsigned int )(llvm_cbe_storemerge&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__91&4294967295ull)));
  if (((llvm_cbe_tmp__90&4294967295U) == (0u&4294967295U))) {
    llvm_cbe_storemerge__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__91;   /* for PHI node */
    goto llvm_cbe_tmp__92;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )1u;   /* for PHI node */
    goto llvm_cbe_tmp__94;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__94:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i32 [ 1, %%3 ], [ 0, %%1  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyvecl_chknorm  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",1u);
printf("\n = 0x%X",0u);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_polyvecl_chknorm}\n");
  return llvm_cbe_storemerge1;
}


void pqcrystals_dilithium2_ref_polyveck_uniform_eta(l_struct_OC_polyvecl *llvm_cbe_v,  char *llvm_cbe_seed, signed short llvm_cbe_nonce) {
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
  static  unsigned long long aesl_llvm_cbe_594_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__95;
  static  unsigned long long aesl_llvm_cbe_595_count = 0;
  unsigned short llvm_cbe_tmp__96;
  static  unsigned long long aesl_llvm_cbe_596_count = 0;
  static  unsigned long long aesl_llvm_cbe_597_count = 0;
  static  unsigned long long aesl_llvm_cbe_598_count = 0;
  static  unsigned long long aesl_llvm_cbe_599_count = 0;
  static  unsigned long long aesl_llvm_cbe_600_count = 0;
  static  unsigned long long aesl_llvm_cbe_601_count = 0;
  static  unsigned long long aesl_llvm_cbe_602_count = 0;
  static  unsigned long long aesl_llvm_cbe_603_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__97;
  static  unsigned long long aesl_llvm_cbe_604_count = 0;
  unsigned short llvm_cbe_tmp__98;
  static  unsigned long long aesl_llvm_cbe_605_count = 0;
  static  unsigned long long aesl_llvm_cbe_606_count = 0;
  static  unsigned long long aesl_llvm_cbe_607_count = 0;
  static  unsigned long long aesl_llvm_cbe_608_count = 0;
  static  unsigned long long aesl_llvm_cbe_609_count = 0;
  static  unsigned long long aesl_llvm_cbe_610_count = 0;
  static  unsigned long long aesl_llvm_cbe_611_count = 0;
  static  unsigned long long aesl_llvm_cbe_612_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__99;
  static  unsigned long long aesl_llvm_cbe_613_count = 0;
  unsigned short llvm_cbe_tmp__100;
  static  unsigned long long aesl_llvm_cbe_614_count = 0;
  static  unsigned long long aesl_llvm_cbe_615_count = 0;
  static  unsigned long long aesl_llvm_cbe_616_count = 0;
  static  unsigned long long aesl_llvm_cbe_617_count = 0;
  static  unsigned long long aesl_llvm_cbe_618_count = 0;
  static  unsigned long long aesl_llvm_cbe_619_count = 0;
  static  unsigned long long aesl_llvm_cbe_620_count = 0;
  static  unsigned long long aesl_llvm_cbe_621_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__101;
  static  unsigned long long aesl_llvm_cbe_622_count = 0;
  static  unsigned long long aesl_llvm_cbe_623_count = 0;
  static  unsigned long long aesl_llvm_cbe_624_count = 0;
  static  unsigned long long aesl_llvm_cbe_625_count = 0;
  static  unsigned long long aesl_llvm_cbe_626_count = 0;
  static  unsigned long long aesl_llvm_cbe_627_count = 0;
  static  unsigned long long aesl_llvm_cbe_628_count = 0;
  static  unsigned long long aesl_llvm_cbe_629_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_polyveck_uniform_eta\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_uniform_eta  --> \n", ++aesl_llvm_cbe_594_count);
  llvm_cbe_tmp__95 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = add i16 %%nonce, 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_uniform_eta  --> \n", ++aesl_llvm_cbe_595_count);
  llvm_cbe_tmp__96 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_nonce&65535ull)) + ((unsigned short )(((unsigned short )1)&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__96&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_uniform_eta(%%struct.poly* %%1, i8* %%seed, i16 zeroext %%nonce) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_uniform_eta  --> \n", ++aesl_llvm_cbe_598_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_uniform_eta((l_struct_OC_poly *)llvm_cbe_tmp__95, ( char *)llvm_cbe_seed, llvm_cbe_nonce);
if (AESL_DEBUG_TRACE) {
printf("\nArgument nonce = 0x%X",llvm_cbe_nonce);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_uniform_eta  --> \n", ++aesl_llvm_cbe_603_count);
  llvm_cbe_tmp__97 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = add i16 %%nonce, 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_uniform_eta  --> \n", ++aesl_llvm_cbe_604_count);
  llvm_cbe_tmp__98 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_nonce&65535ull)) + ((unsigned short )(((unsigned short )2)&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__98&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_uniform_eta(%%struct.poly* %%3, i8* %%seed, i16 zeroext %%2) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_uniform_eta  --> \n", ++aesl_llvm_cbe_607_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_uniform_eta((l_struct_OC_poly *)llvm_cbe_tmp__97, ( char *)llvm_cbe_seed, llvm_cbe_tmp__96);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__96);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_uniform_eta  --> \n", ++aesl_llvm_cbe_612_count);
  llvm_cbe_tmp__99 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = add i16 %%nonce, 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_uniform_eta  --> \n", ++aesl_llvm_cbe_613_count);
  llvm_cbe_tmp__100 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_nonce&65535ull)) + ((unsigned short )(((unsigned short )3)&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__100&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_uniform_eta(%%struct.poly* %%5, i8* %%seed, i16 zeroext %%4) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_uniform_eta  --> \n", ++aesl_llvm_cbe_616_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_uniform_eta((l_struct_OC_poly *)llvm_cbe_tmp__99, ( char *)llvm_cbe_seed, llvm_cbe_tmp__98);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__98);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_uniform_eta  --> \n", ++aesl_llvm_cbe_621_count);
  llvm_cbe_tmp__101 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_uniform_eta(%%struct.poly* %%7, i8* %%seed, i16 zeroext %%6) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_uniform_eta  --> \n", ++aesl_llvm_cbe_624_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_uniform_eta((l_struct_OC_poly *)llvm_cbe_tmp__101, ( char *)llvm_cbe_seed, llvm_cbe_tmp__100);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__100);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_polyveck_uniform_eta}\n");
  return;
}


void pqcrystals_dilithium2_ref_polyveck_reduce(l_struct_OC_polyvecl *llvm_cbe_v) {
  static  unsigned long long aesl_llvm_cbe_630_count = 0;
  static  unsigned long long aesl_llvm_cbe_631_count = 0;
  static  unsigned long long aesl_llvm_cbe_632_count = 0;
  static  unsigned long long aesl_llvm_cbe_633_count = 0;
  static  unsigned long long aesl_llvm_cbe_634_count = 0;
  static  unsigned long long aesl_llvm_cbe_635_count = 0;
  static  unsigned long long aesl_llvm_cbe_636_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__102;
  static  unsigned long long aesl_llvm_cbe_637_count = 0;
  static  unsigned long long aesl_llvm_cbe_638_count = 0;
  static  unsigned long long aesl_llvm_cbe_639_count = 0;
  static  unsigned long long aesl_llvm_cbe_640_count = 0;
  static  unsigned long long aesl_llvm_cbe_641_count = 0;
  static  unsigned long long aesl_llvm_cbe_642_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__103;
  static  unsigned long long aesl_llvm_cbe_643_count = 0;
  static  unsigned long long aesl_llvm_cbe_644_count = 0;
  static  unsigned long long aesl_llvm_cbe_645_count = 0;
  static  unsigned long long aesl_llvm_cbe_646_count = 0;
  static  unsigned long long aesl_llvm_cbe_647_count = 0;
  static  unsigned long long aesl_llvm_cbe_648_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__104;
  static  unsigned long long aesl_llvm_cbe_649_count = 0;
  static  unsigned long long aesl_llvm_cbe_650_count = 0;
  static  unsigned long long aesl_llvm_cbe_651_count = 0;
  static  unsigned long long aesl_llvm_cbe_652_count = 0;
  static  unsigned long long aesl_llvm_cbe_653_count = 0;
  static  unsigned long long aesl_llvm_cbe_654_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__105;
  static  unsigned long long aesl_llvm_cbe_655_count = 0;
  static  unsigned long long aesl_llvm_cbe_656_count = 0;
  static  unsigned long long aesl_llvm_cbe_657_count = 0;
  static  unsigned long long aesl_llvm_cbe_658_count = 0;
  static  unsigned long long aesl_llvm_cbe_659_count = 0;
  static  unsigned long long aesl_llvm_cbe_660_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_polyveck_reduce\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_reduce  --> \n", ++aesl_llvm_cbe_636_count);
  llvm_cbe_tmp__102 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_reduce(%%struct.poly* %%1) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_reduce  --> \n", ++aesl_llvm_cbe_637_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_reduce((l_struct_OC_poly *)llvm_cbe_tmp__102);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_reduce  --> \n", ++aesl_llvm_cbe_642_count);
  llvm_cbe_tmp__103 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_reduce(%%struct.poly* %%2) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_reduce  --> \n", ++aesl_llvm_cbe_643_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_reduce((l_struct_OC_poly *)llvm_cbe_tmp__103);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_reduce  --> \n", ++aesl_llvm_cbe_648_count);
  llvm_cbe_tmp__104 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_reduce(%%struct.poly* %%3) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_reduce  --> \n", ++aesl_llvm_cbe_649_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_reduce((l_struct_OC_poly *)llvm_cbe_tmp__104);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_reduce  --> \n", ++aesl_llvm_cbe_654_count);
  llvm_cbe_tmp__105 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_reduce(%%struct.poly* %%4) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_reduce  --> \n", ++aesl_llvm_cbe_655_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_reduce((l_struct_OC_poly *)llvm_cbe_tmp__105);
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_polyveck_reduce}\n");
  return;
}


void pqcrystals_dilithium2_ref_polyveck_caddq(l_struct_OC_polyvecl *llvm_cbe_v) {
  static  unsigned long long aesl_llvm_cbe_661_count = 0;
  static  unsigned long long aesl_llvm_cbe_662_count = 0;
  static  unsigned long long aesl_llvm_cbe_663_count = 0;
  static  unsigned long long aesl_llvm_cbe_664_count = 0;
  static  unsigned long long aesl_llvm_cbe_665_count = 0;
  static  unsigned long long aesl_llvm_cbe_666_count = 0;
  static  unsigned long long aesl_llvm_cbe_667_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__106;
  static  unsigned long long aesl_llvm_cbe_668_count = 0;
  static  unsigned long long aesl_llvm_cbe_669_count = 0;
  static  unsigned long long aesl_llvm_cbe_670_count = 0;
  static  unsigned long long aesl_llvm_cbe_671_count = 0;
  static  unsigned long long aesl_llvm_cbe_672_count = 0;
  static  unsigned long long aesl_llvm_cbe_673_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__107;
  static  unsigned long long aesl_llvm_cbe_674_count = 0;
  static  unsigned long long aesl_llvm_cbe_675_count = 0;
  static  unsigned long long aesl_llvm_cbe_676_count = 0;
  static  unsigned long long aesl_llvm_cbe_677_count = 0;
  static  unsigned long long aesl_llvm_cbe_678_count = 0;
  static  unsigned long long aesl_llvm_cbe_679_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__108;
  static  unsigned long long aesl_llvm_cbe_680_count = 0;
  static  unsigned long long aesl_llvm_cbe_681_count = 0;
  static  unsigned long long aesl_llvm_cbe_682_count = 0;
  static  unsigned long long aesl_llvm_cbe_683_count = 0;
  static  unsigned long long aesl_llvm_cbe_684_count = 0;
  static  unsigned long long aesl_llvm_cbe_685_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__109;
  static  unsigned long long aesl_llvm_cbe_686_count = 0;
  static  unsigned long long aesl_llvm_cbe_687_count = 0;
  static  unsigned long long aesl_llvm_cbe_688_count = 0;
  static  unsigned long long aesl_llvm_cbe_689_count = 0;
  static  unsigned long long aesl_llvm_cbe_690_count = 0;
  static  unsigned long long aesl_llvm_cbe_691_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_polyveck_caddq\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_caddq  --> \n", ++aesl_llvm_cbe_667_count);
  llvm_cbe_tmp__106 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_caddq(%%struct.poly* %%1) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_caddq  --> \n", ++aesl_llvm_cbe_668_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_caddq((l_struct_OC_poly *)llvm_cbe_tmp__106);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_caddq  --> \n", ++aesl_llvm_cbe_673_count);
  llvm_cbe_tmp__107 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_caddq(%%struct.poly* %%2) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_caddq  --> \n", ++aesl_llvm_cbe_674_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_caddq((l_struct_OC_poly *)llvm_cbe_tmp__107);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_caddq  --> \n", ++aesl_llvm_cbe_679_count);
  llvm_cbe_tmp__108 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_caddq(%%struct.poly* %%3) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_caddq  --> \n", ++aesl_llvm_cbe_680_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_caddq((l_struct_OC_poly *)llvm_cbe_tmp__108);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_caddq  --> \n", ++aesl_llvm_cbe_685_count);
  llvm_cbe_tmp__109 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_caddq(%%struct.poly* %%4) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_caddq  --> \n", ++aesl_llvm_cbe_686_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_caddq((l_struct_OC_poly *)llvm_cbe_tmp__109);
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_polyveck_caddq}\n");
  return;
}


void pqcrystals_dilithium2_ref_polyveck_freeze(l_struct_OC_polyvecl *llvm_cbe_v) {
  static  unsigned long long aesl_llvm_cbe_692_count = 0;
  static  unsigned long long aesl_llvm_cbe_693_count = 0;
  static  unsigned long long aesl_llvm_cbe_694_count = 0;
  static  unsigned long long aesl_llvm_cbe_695_count = 0;
  static  unsigned long long aesl_llvm_cbe_696_count = 0;
  static  unsigned long long aesl_llvm_cbe_697_count = 0;
  static  unsigned long long aesl_llvm_cbe_698_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__110;
  static  unsigned long long aesl_llvm_cbe_699_count = 0;
  static  unsigned long long aesl_llvm_cbe_700_count = 0;
  static  unsigned long long aesl_llvm_cbe_701_count = 0;
  static  unsigned long long aesl_llvm_cbe_702_count = 0;
  static  unsigned long long aesl_llvm_cbe_703_count = 0;
  static  unsigned long long aesl_llvm_cbe_704_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__111;
  static  unsigned long long aesl_llvm_cbe_705_count = 0;
  static  unsigned long long aesl_llvm_cbe_706_count = 0;
  static  unsigned long long aesl_llvm_cbe_707_count = 0;
  static  unsigned long long aesl_llvm_cbe_708_count = 0;
  static  unsigned long long aesl_llvm_cbe_709_count = 0;
  static  unsigned long long aesl_llvm_cbe_710_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__112;
  static  unsigned long long aesl_llvm_cbe_711_count = 0;
  static  unsigned long long aesl_llvm_cbe_712_count = 0;
  static  unsigned long long aesl_llvm_cbe_713_count = 0;
  static  unsigned long long aesl_llvm_cbe_714_count = 0;
  static  unsigned long long aesl_llvm_cbe_715_count = 0;
  static  unsigned long long aesl_llvm_cbe_716_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__113;
  static  unsigned long long aesl_llvm_cbe_717_count = 0;
  static  unsigned long long aesl_llvm_cbe_718_count = 0;
  static  unsigned long long aesl_llvm_cbe_719_count = 0;
  static  unsigned long long aesl_llvm_cbe_720_count = 0;
  static  unsigned long long aesl_llvm_cbe_721_count = 0;
  static  unsigned long long aesl_llvm_cbe_722_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_polyveck_freeze\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_freeze  --> \n", ++aesl_llvm_cbe_698_count);
  llvm_cbe_tmp__110 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_freeze(%%struct.poly* %%1) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_freeze  --> \n", ++aesl_llvm_cbe_699_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_freeze((l_struct_OC_poly *)llvm_cbe_tmp__110);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_freeze  --> \n", ++aesl_llvm_cbe_704_count);
  llvm_cbe_tmp__111 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_freeze(%%struct.poly* %%2) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_freeze  --> \n", ++aesl_llvm_cbe_705_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_freeze((l_struct_OC_poly *)llvm_cbe_tmp__111);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_freeze  --> \n", ++aesl_llvm_cbe_710_count);
  llvm_cbe_tmp__112 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_freeze(%%struct.poly* %%3) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_freeze  --> \n", ++aesl_llvm_cbe_711_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_freeze((l_struct_OC_poly *)llvm_cbe_tmp__112);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_freeze  --> \n", ++aesl_llvm_cbe_716_count);
  llvm_cbe_tmp__113 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_freeze(%%struct.poly* %%4) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_freeze  --> \n", ++aesl_llvm_cbe_717_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_freeze((l_struct_OC_poly *)llvm_cbe_tmp__113);
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_polyveck_freeze}\n");
  return;
}


void pqcrystals_dilithium2_ref_polyveck_add(l_struct_OC_polyvecl *llvm_cbe_w, l_struct_OC_polyvecl *llvm_cbe_u, l_struct_OC_polyvecl *llvm_cbe_v) {
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
  l_struct_OC_poly *llvm_cbe_tmp__114;
  static  unsigned long long aesl_llvm_cbe_736_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__115;
  static  unsigned long long aesl_llvm_cbe_737_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__116;
  static  unsigned long long aesl_llvm_cbe_738_count = 0;
  static  unsigned long long aesl_llvm_cbe_739_count = 0;
  static  unsigned long long aesl_llvm_cbe_740_count = 0;
  static  unsigned long long aesl_llvm_cbe_741_count = 0;
  static  unsigned long long aesl_llvm_cbe_742_count = 0;
  static  unsigned long long aesl_llvm_cbe_743_count = 0;
  static  unsigned long long aesl_llvm_cbe_744_count = 0;
  static  unsigned long long aesl_llvm_cbe_745_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__117;
  static  unsigned long long aesl_llvm_cbe_746_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__118;
  static  unsigned long long aesl_llvm_cbe_747_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__119;
  static  unsigned long long aesl_llvm_cbe_748_count = 0;
  static  unsigned long long aesl_llvm_cbe_749_count = 0;
  static  unsigned long long aesl_llvm_cbe_750_count = 0;
  static  unsigned long long aesl_llvm_cbe_751_count = 0;
  static  unsigned long long aesl_llvm_cbe_752_count = 0;
  static  unsigned long long aesl_llvm_cbe_753_count = 0;
  static  unsigned long long aesl_llvm_cbe_754_count = 0;
  static  unsigned long long aesl_llvm_cbe_755_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__120;
  static  unsigned long long aesl_llvm_cbe_756_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__121;
  static  unsigned long long aesl_llvm_cbe_757_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__122;
  static  unsigned long long aesl_llvm_cbe_758_count = 0;
  static  unsigned long long aesl_llvm_cbe_759_count = 0;
  static  unsigned long long aesl_llvm_cbe_760_count = 0;
  static  unsigned long long aesl_llvm_cbe_761_count = 0;
  static  unsigned long long aesl_llvm_cbe_762_count = 0;
  static  unsigned long long aesl_llvm_cbe_763_count = 0;
  static  unsigned long long aesl_llvm_cbe_764_count = 0;
  static  unsigned long long aesl_llvm_cbe_765_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__123;
  static  unsigned long long aesl_llvm_cbe_766_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__124;
  static  unsigned long long aesl_llvm_cbe_767_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__125;
  static  unsigned long long aesl_llvm_cbe_768_count = 0;
  static  unsigned long long aesl_llvm_cbe_769_count = 0;
  static  unsigned long long aesl_llvm_cbe_770_count = 0;
  static  unsigned long long aesl_llvm_cbe_771_count = 0;
  static  unsigned long long aesl_llvm_cbe_772_count = 0;
  static  unsigned long long aesl_llvm_cbe_773_count = 0;
  static  unsigned long long aesl_llvm_cbe_774_count = 0;
  static  unsigned long long aesl_llvm_cbe_775_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_polyveck_add\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.polyvecl* %%w, i64 0, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_add  --> \n", ++aesl_llvm_cbe_735_count);
  llvm_cbe_tmp__114 = (l_struct_OC_poly *)(&llvm_cbe_w->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds %%struct.polyvecl* %%u, i64 0, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_add  --> \n", ++aesl_llvm_cbe_736_count);
  llvm_cbe_tmp__115 = (l_struct_OC_poly *)(&llvm_cbe_u->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_add  --> \n", ++aesl_llvm_cbe_737_count);
  llvm_cbe_tmp__116 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_add(%%struct.poly* %%1, %%struct.poly* %%2, %%struct.poly* %%3) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_add  --> \n", ++aesl_llvm_cbe_738_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_add((l_struct_OC_poly *)llvm_cbe_tmp__114, (l_struct_OC_poly *)llvm_cbe_tmp__115, (l_struct_OC_poly *)llvm_cbe_tmp__116);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds %%struct.polyvecl* %%w, i64 0, i32 0, i64 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_add  --> \n", ++aesl_llvm_cbe_745_count);
  llvm_cbe_tmp__117 = (l_struct_OC_poly *)(&llvm_cbe_w->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds %%struct.polyvecl* %%u, i64 0, i32 0, i64 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_add  --> \n", ++aesl_llvm_cbe_746_count);
  llvm_cbe_tmp__118 = (l_struct_OC_poly *)(&llvm_cbe_u->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_add  --> \n", ++aesl_llvm_cbe_747_count);
  llvm_cbe_tmp__119 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_add(%%struct.poly* %%4, %%struct.poly* %%5, %%struct.poly* %%6) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_add  --> \n", ++aesl_llvm_cbe_748_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_add((l_struct_OC_poly *)llvm_cbe_tmp__117, (l_struct_OC_poly *)llvm_cbe_tmp__118, (l_struct_OC_poly *)llvm_cbe_tmp__119);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds %%struct.polyvecl* %%w, i64 0, i32 0, i64 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_add  --> \n", ++aesl_llvm_cbe_755_count);
  llvm_cbe_tmp__120 = (l_struct_OC_poly *)(&llvm_cbe_w->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds %%struct.polyvecl* %%u, i64 0, i32 0, i64 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_add  --> \n", ++aesl_llvm_cbe_756_count);
  llvm_cbe_tmp__121 = (l_struct_OC_poly *)(&llvm_cbe_u->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_add  --> \n", ++aesl_llvm_cbe_757_count);
  llvm_cbe_tmp__122 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_add(%%struct.poly* %%7, %%struct.poly* %%8, %%struct.poly* %%9) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_add  --> \n", ++aesl_llvm_cbe_758_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_add((l_struct_OC_poly *)llvm_cbe_tmp__120, (l_struct_OC_poly *)llvm_cbe_tmp__121, (l_struct_OC_poly *)llvm_cbe_tmp__122);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds %%struct.polyvecl* %%w, i64 0, i32 0, i64 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_add  --> \n", ++aesl_llvm_cbe_765_count);
  llvm_cbe_tmp__123 = (l_struct_OC_poly *)(&llvm_cbe_w->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds %%struct.polyvecl* %%u, i64 0, i32 0, i64 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_add  --> \n", ++aesl_llvm_cbe_766_count);
  llvm_cbe_tmp__124 = (l_struct_OC_poly *)(&llvm_cbe_u->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_add  --> \n", ++aesl_llvm_cbe_767_count);
  llvm_cbe_tmp__125 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_add(%%struct.poly* %%10, %%struct.poly* %%11, %%struct.poly* %%12) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_add  --> \n", ++aesl_llvm_cbe_768_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_add((l_struct_OC_poly *)llvm_cbe_tmp__123, (l_struct_OC_poly *)llvm_cbe_tmp__124, (l_struct_OC_poly *)llvm_cbe_tmp__125);
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_polyveck_add}\n");
  return;
}


void pqcrystals_dilithium2_ref_polyveck_sub(l_struct_OC_polyvecl *llvm_cbe_w, l_struct_OC_polyvecl *llvm_cbe_u, l_struct_OC_polyvecl *llvm_cbe_v) {
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
  static  unsigned long long aesl_llvm_cbe_788_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__126;
  static  unsigned long long aesl_llvm_cbe_789_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__127;
  static  unsigned long long aesl_llvm_cbe_790_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__128;
  static  unsigned long long aesl_llvm_cbe_791_count = 0;
  static  unsigned long long aesl_llvm_cbe_792_count = 0;
  static  unsigned long long aesl_llvm_cbe_793_count = 0;
  static  unsigned long long aesl_llvm_cbe_794_count = 0;
  static  unsigned long long aesl_llvm_cbe_795_count = 0;
  static  unsigned long long aesl_llvm_cbe_796_count = 0;
  static  unsigned long long aesl_llvm_cbe_797_count = 0;
  static  unsigned long long aesl_llvm_cbe_798_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__129;
  static  unsigned long long aesl_llvm_cbe_799_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__130;
  static  unsigned long long aesl_llvm_cbe_800_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__131;
  static  unsigned long long aesl_llvm_cbe_801_count = 0;
  static  unsigned long long aesl_llvm_cbe_802_count = 0;
  static  unsigned long long aesl_llvm_cbe_803_count = 0;
  static  unsigned long long aesl_llvm_cbe_804_count = 0;
  static  unsigned long long aesl_llvm_cbe_805_count = 0;
  static  unsigned long long aesl_llvm_cbe_806_count = 0;
  static  unsigned long long aesl_llvm_cbe_807_count = 0;
  static  unsigned long long aesl_llvm_cbe_808_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__132;
  static  unsigned long long aesl_llvm_cbe_809_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__133;
  static  unsigned long long aesl_llvm_cbe_810_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__134;
  static  unsigned long long aesl_llvm_cbe_811_count = 0;
  static  unsigned long long aesl_llvm_cbe_812_count = 0;
  static  unsigned long long aesl_llvm_cbe_813_count = 0;
  static  unsigned long long aesl_llvm_cbe_814_count = 0;
  static  unsigned long long aesl_llvm_cbe_815_count = 0;
  static  unsigned long long aesl_llvm_cbe_816_count = 0;
  static  unsigned long long aesl_llvm_cbe_817_count = 0;
  static  unsigned long long aesl_llvm_cbe_818_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__135;
  static  unsigned long long aesl_llvm_cbe_819_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__136;
  static  unsigned long long aesl_llvm_cbe_820_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__137;
  static  unsigned long long aesl_llvm_cbe_821_count = 0;
  static  unsigned long long aesl_llvm_cbe_822_count = 0;
  static  unsigned long long aesl_llvm_cbe_823_count = 0;
  static  unsigned long long aesl_llvm_cbe_824_count = 0;
  static  unsigned long long aesl_llvm_cbe_825_count = 0;
  static  unsigned long long aesl_llvm_cbe_826_count = 0;
  static  unsigned long long aesl_llvm_cbe_827_count = 0;
  static  unsigned long long aesl_llvm_cbe_828_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_polyveck_sub\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.polyvecl* %%w, i64 0, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_sub  --> \n", ++aesl_llvm_cbe_788_count);
  llvm_cbe_tmp__126 = (l_struct_OC_poly *)(&llvm_cbe_w->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds %%struct.polyvecl* %%u, i64 0, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_sub  --> \n", ++aesl_llvm_cbe_789_count);
  llvm_cbe_tmp__127 = (l_struct_OC_poly *)(&llvm_cbe_u->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_sub  --> \n", ++aesl_llvm_cbe_790_count);
  llvm_cbe_tmp__128 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_sub(%%struct.poly* %%1, %%struct.poly* %%2, %%struct.poly* %%3) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_sub  --> \n", ++aesl_llvm_cbe_791_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_sub((l_struct_OC_poly *)llvm_cbe_tmp__126, (l_struct_OC_poly *)llvm_cbe_tmp__127, (l_struct_OC_poly *)llvm_cbe_tmp__128);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds %%struct.polyvecl* %%w, i64 0, i32 0, i64 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_sub  --> \n", ++aesl_llvm_cbe_798_count);
  llvm_cbe_tmp__129 = (l_struct_OC_poly *)(&llvm_cbe_w->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds %%struct.polyvecl* %%u, i64 0, i32 0, i64 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_sub  --> \n", ++aesl_llvm_cbe_799_count);
  llvm_cbe_tmp__130 = (l_struct_OC_poly *)(&llvm_cbe_u->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_sub  --> \n", ++aesl_llvm_cbe_800_count);
  llvm_cbe_tmp__131 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_sub(%%struct.poly* %%4, %%struct.poly* %%5, %%struct.poly* %%6) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_sub  --> \n", ++aesl_llvm_cbe_801_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_sub((l_struct_OC_poly *)llvm_cbe_tmp__129, (l_struct_OC_poly *)llvm_cbe_tmp__130, (l_struct_OC_poly *)llvm_cbe_tmp__131);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds %%struct.polyvecl* %%w, i64 0, i32 0, i64 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_sub  --> \n", ++aesl_llvm_cbe_808_count);
  llvm_cbe_tmp__132 = (l_struct_OC_poly *)(&llvm_cbe_w->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds %%struct.polyvecl* %%u, i64 0, i32 0, i64 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_sub  --> \n", ++aesl_llvm_cbe_809_count);
  llvm_cbe_tmp__133 = (l_struct_OC_poly *)(&llvm_cbe_u->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_sub  --> \n", ++aesl_llvm_cbe_810_count);
  llvm_cbe_tmp__134 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_sub(%%struct.poly* %%7, %%struct.poly* %%8, %%struct.poly* %%9) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_sub  --> \n", ++aesl_llvm_cbe_811_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_sub((l_struct_OC_poly *)llvm_cbe_tmp__132, (l_struct_OC_poly *)llvm_cbe_tmp__133, (l_struct_OC_poly *)llvm_cbe_tmp__134);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds %%struct.polyvecl* %%w, i64 0, i32 0, i64 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_sub  --> \n", ++aesl_llvm_cbe_818_count);
  llvm_cbe_tmp__135 = (l_struct_OC_poly *)(&llvm_cbe_w->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds %%struct.polyvecl* %%u, i64 0, i32 0, i64 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_sub  --> \n", ++aesl_llvm_cbe_819_count);
  llvm_cbe_tmp__136 = (l_struct_OC_poly *)(&llvm_cbe_u->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_sub  --> \n", ++aesl_llvm_cbe_820_count);
  llvm_cbe_tmp__137 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_sub(%%struct.poly* %%10, %%struct.poly* %%11, %%struct.poly* %%12) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_sub  --> \n", ++aesl_llvm_cbe_821_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_sub((l_struct_OC_poly *)llvm_cbe_tmp__135, (l_struct_OC_poly *)llvm_cbe_tmp__136, (l_struct_OC_poly *)llvm_cbe_tmp__137);
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_polyveck_sub}\n");
  return;
}


void pqcrystals_dilithium2_ref_polyveck_shiftl(l_struct_OC_polyvecl *llvm_cbe_v) {
  static  unsigned long long aesl_llvm_cbe_829_count = 0;
  static  unsigned long long aesl_llvm_cbe_830_count = 0;
  static  unsigned long long aesl_llvm_cbe_831_count = 0;
  static  unsigned long long aesl_llvm_cbe_832_count = 0;
  static  unsigned long long aesl_llvm_cbe_833_count = 0;
  static  unsigned long long aesl_llvm_cbe_834_count = 0;
  static  unsigned long long aesl_llvm_cbe_835_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__138;
  static  unsigned long long aesl_llvm_cbe_836_count = 0;
  static  unsigned long long aesl_llvm_cbe_837_count = 0;
  static  unsigned long long aesl_llvm_cbe_838_count = 0;
  static  unsigned long long aesl_llvm_cbe_839_count = 0;
  static  unsigned long long aesl_llvm_cbe_840_count = 0;
  static  unsigned long long aesl_llvm_cbe_841_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__139;
  static  unsigned long long aesl_llvm_cbe_842_count = 0;
  static  unsigned long long aesl_llvm_cbe_843_count = 0;
  static  unsigned long long aesl_llvm_cbe_844_count = 0;
  static  unsigned long long aesl_llvm_cbe_845_count = 0;
  static  unsigned long long aesl_llvm_cbe_846_count = 0;
  static  unsigned long long aesl_llvm_cbe_847_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__140;
  static  unsigned long long aesl_llvm_cbe_848_count = 0;
  static  unsigned long long aesl_llvm_cbe_849_count = 0;
  static  unsigned long long aesl_llvm_cbe_850_count = 0;
  static  unsigned long long aesl_llvm_cbe_851_count = 0;
  static  unsigned long long aesl_llvm_cbe_852_count = 0;
  static  unsigned long long aesl_llvm_cbe_853_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__141;
  static  unsigned long long aesl_llvm_cbe_854_count = 0;
  static  unsigned long long aesl_llvm_cbe_855_count = 0;
  static  unsigned long long aesl_llvm_cbe_856_count = 0;
  static  unsigned long long aesl_llvm_cbe_857_count = 0;
  static  unsigned long long aesl_llvm_cbe_858_count = 0;
  static  unsigned long long aesl_llvm_cbe_859_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_polyveck_shiftl\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_shiftl  --> \n", ++aesl_llvm_cbe_835_count);
  llvm_cbe_tmp__138 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_shiftl(%%struct.poly* %%1) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_shiftl  --> \n", ++aesl_llvm_cbe_836_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_shiftl((l_struct_OC_poly *)llvm_cbe_tmp__138);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_shiftl  --> \n", ++aesl_llvm_cbe_841_count);
  llvm_cbe_tmp__139 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_shiftl(%%struct.poly* %%2) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_shiftl  --> \n", ++aesl_llvm_cbe_842_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_shiftl((l_struct_OC_poly *)llvm_cbe_tmp__139);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_shiftl  --> \n", ++aesl_llvm_cbe_847_count);
  llvm_cbe_tmp__140 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_shiftl(%%struct.poly* %%3) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_shiftl  --> \n", ++aesl_llvm_cbe_848_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_shiftl((l_struct_OC_poly *)llvm_cbe_tmp__140);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_shiftl  --> \n", ++aesl_llvm_cbe_853_count);
  llvm_cbe_tmp__141 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_shiftl(%%struct.poly* %%4) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_shiftl  --> \n", ++aesl_llvm_cbe_854_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_shiftl((l_struct_OC_poly *)llvm_cbe_tmp__141);
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_polyveck_shiftl}\n");
  return;
}


void pqcrystals_dilithium2_ref_polyveck_ntt(l_struct_OC_polyvecl *llvm_cbe_v) {
  static  unsigned long long aesl_llvm_cbe_860_count = 0;
  static  unsigned long long aesl_llvm_cbe_861_count = 0;
  static  unsigned long long aesl_llvm_cbe_862_count = 0;
  static  unsigned long long aesl_llvm_cbe_863_count = 0;
  static  unsigned long long aesl_llvm_cbe_864_count = 0;
  static  unsigned long long aesl_llvm_cbe_865_count = 0;
  static  unsigned long long aesl_llvm_cbe_866_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__142;
  static  unsigned long long aesl_llvm_cbe_867_count = 0;
  static  unsigned long long aesl_llvm_cbe_868_count = 0;
  static  unsigned long long aesl_llvm_cbe_869_count = 0;
  static  unsigned long long aesl_llvm_cbe_870_count = 0;
  static  unsigned long long aesl_llvm_cbe_871_count = 0;
  static  unsigned long long aesl_llvm_cbe_872_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__143;
  static  unsigned long long aesl_llvm_cbe_873_count = 0;
  static  unsigned long long aesl_llvm_cbe_874_count = 0;
  static  unsigned long long aesl_llvm_cbe_875_count = 0;
  static  unsigned long long aesl_llvm_cbe_876_count = 0;
  static  unsigned long long aesl_llvm_cbe_877_count = 0;
  static  unsigned long long aesl_llvm_cbe_878_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__144;
  static  unsigned long long aesl_llvm_cbe_879_count = 0;
  static  unsigned long long aesl_llvm_cbe_880_count = 0;
  static  unsigned long long aesl_llvm_cbe_881_count = 0;
  static  unsigned long long aesl_llvm_cbe_882_count = 0;
  static  unsigned long long aesl_llvm_cbe_883_count = 0;
  static  unsigned long long aesl_llvm_cbe_884_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__145;
  static  unsigned long long aesl_llvm_cbe_885_count = 0;
  static  unsigned long long aesl_llvm_cbe_886_count = 0;
  static  unsigned long long aesl_llvm_cbe_887_count = 0;
  static  unsigned long long aesl_llvm_cbe_888_count = 0;
  static  unsigned long long aesl_llvm_cbe_889_count = 0;
  static  unsigned long long aesl_llvm_cbe_890_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_polyveck_ntt\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_ntt  --> \n", ++aesl_llvm_cbe_866_count);
  llvm_cbe_tmp__142 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_ntt(%%struct.poly* %%1) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_ntt  --> \n", ++aesl_llvm_cbe_867_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_ntt((l_struct_OC_poly *)llvm_cbe_tmp__142);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_ntt  --> \n", ++aesl_llvm_cbe_872_count);
  llvm_cbe_tmp__143 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_ntt(%%struct.poly* %%2) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_ntt  --> \n", ++aesl_llvm_cbe_873_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_ntt((l_struct_OC_poly *)llvm_cbe_tmp__143);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_ntt  --> \n", ++aesl_llvm_cbe_878_count);
  llvm_cbe_tmp__144 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_ntt(%%struct.poly* %%3) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_ntt  --> \n", ++aesl_llvm_cbe_879_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_ntt((l_struct_OC_poly *)llvm_cbe_tmp__144);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_ntt  --> \n", ++aesl_llvm_cbe_884_count);
  llvm_cbe_tmp__145 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_ntt(%%struct.poly* %%4) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_ntt  --> \n", ++aesl_llvm_cbe_885_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_ntt((l_struct_OC_poly *)llvm_cbe_tmp__145);
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_polyveck_ntt}\n");
  return;
}


void pqcrystals_dilithium2_ref_polyveck_invntt_tomont(l_struct_OC_polyvecl *llvm_cbe_v) {
  static  unsigned long long aesl_llvm_cbe_891_count = 0;
  static  unsigned long long aesl_llvm_cbe_892_count = 0;
  static  unsigned long long aesl_llvm_cbe_893_count = 0;
  static  unsigned long long aesl_llvm_cbe_894_count = 0;
  static  unsigned long long aesl_llvm_cbe_895_count = 0;
  static  unsigned long long aesl_llvm_cbe_896_count = 0;
  static  unsigned long long aesl_llvm_cbe_897_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__146;
  static  unsigned long long aesl_llvm_cbe_898_count = 0;
  static  unsigned long long aesl_llvm_cbe_899_count = 0;
  static  unsigned long long aesl_llvm_cbe_900_count = 0;
  static  unsigned long long aesl_llvm_cbe_901_count = 0;
  static  unsigned long long aesl_llvm_cbe_902_count = 0;
  static  unsigned long long aesl_llvm_cbe_903_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__147;
  static  unsigned long long aesl_llvm_cbe_904_count = 0;
  static  unsigned long long aesl_llvm_cbe_905_count = 0;
  static  unsigned long long aesl_llvm_cbe_906_count = 0;
  static  unsigned long long aesl_llvm_cbe_907_count = 0;
  static  unsigned long long aesl_llvm_cbe_908_count = 0;
  static  unsigned long long aesl_llvm_cbe_909_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__148;
  static  unsigned long long aesl_llvm_cbe_910_count = 0;
  static  unsigned long long aesl_llvm_cbe_911_count = 0;
  static  unsigned long long aesl_llvm_cbe_912_count = 0;
  static  unsigned long long aesl_llvm_cbe_913_count = 0;
  static  unsigned long long aesl_llvm_cbe_914_count = 0;
  static  unsigned long long aesl_llvm_cbe_915_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__149;
  static  unsigned long long aesl_llvm_cbe_916_count = 0;
  static  unsigned long long aesl_llvm_cbe_917_count = 0;
  static  unsigned long long aesl_llvm_cbe_918_count = 0;
  static  unsigned long long aesl_llvm_cbe_919_count = 0;
  static  unsigned long long aesl_llvm_cbe_920_count = 0;
  static  unsigned long long aesl_llvm_cbe_921_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_polyveck_invntt_tomont\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_invntt_tomont  --> \n", ++aesl_llvm_cbe_897_count);
  llvm_cbe_tmp__146 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_invntt_tomont(%%struct.poly* %%1) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_invntt_tomont  --> \n", ++aesl_llvm_cbe_898_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_invntt_tomont((l_struct_OC_poly *)llvm_cbe_tmp__146);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_invntt_tomont  --> \n", ++aesl_llvm_cbe_903_count);
  llvm_cbe_tmp__147 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_invntt_tomont(%%struct.poly* %%2) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_invntt_tomont  --> \n", ++aesl_llvm_cbe_904_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_invntt_tomont((l_struct_OC_poly *)llvm_cbe_tmp__147);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_invntt_tomont  --> \n", ++aesl_llvm_cbe_909_count);
  llvm_cbe_tmp__148 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_invntt_tomont(%%struct.poly* %%3) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_invntt_tomont  --> \n", ++aesl_llvm_cbe_910_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_invntt_tomont((l_struct_OC_poly *)llvm_cbe_tmp__148);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_invntt_tomont  --> \n", ++aesl_llvm_cbe_915_count);
  llvm_cbe_tmp__149 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_invntt_tomont(%%struct.poly* %%4) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_invntt_tomont  --> \n", ++aesl_llvm_cbe_916_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_invntt_tomont((l_struct_OC_poly *)llvm_cbe_tmp__149);
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_polyveck_invntt_tomont}\n");
  return;
}


void pqcrystals_dilithium2_ref_polyveck_pointwise_poly_montgomery(l_struct_OC_polyvecl *llvm_cbe_r, l_struct_OC_poly *llvm_cbe_a, l_struct_OC_polyvecl *llvm_cbe_v) {
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
  static  unsigned long long aesl_llvm_cbe_933_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__150;
  static  unsigned long long aesl_llvm_cbe_934_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__151;
  static  unsigned long long aesl_llvm_cbe_935_count = 0;
  static  unsigned long long aesl_llvm_cbe_936_count = 0;
  static  unsigned long long aesl_llvm_cbe_937_count = 0;
  static  unsigned long long aesl_llvm_cbe_938_count = 0;
  static  unsigned long long aesl_llvm_cbe_939_count = 0;
  static  unsigned long long aesl_llvm_cbe_940_count = 0;
  static  unsigned long long aesl_llvm_cbe_941_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__152;
  static  unsigned long long aesl_llvm_cbe_942_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__153;
  static  unsigned long long aesl_llvm_cbe_943_count = 0;
  static  unsigned long long aesl_llvm_cbe_944_count = 0;
  static  unsigned long long aesl_llvm_cbe_945_count = 0;
  static  unsigned long long aesl_llvm_cbe_946_count = 0;
  static  unsigned long long aesl_llvm_cbe_947_count = 0;
  static  unsigned long long aesl_llvm_cbe_948_count = 0;
  static  unsigned long long aesl_llvm_cbe_949_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__154;
  static  unsigned long long aesl_llvm_cbe_950_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__155;
  static  unsigned long long aesl_llvm_cbe_951_count = 0;
  static  unsigned long long aesl_llvm_cbe_952_count = 0;
  static  unsigned long long aesl_llvm_cbe_953_count = 0;
  static  unsigned long long aesl_llvm_cbe_954_count = 0;
  static  unsigned long long aesl_llvm_cbe_955_count = 0;
  static  unsigned long long aesl_llvm_cbe_956_count = 0;
  static  unsigned long long aesl_llvm_cbe_957_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__156;
  static  unsigned long long aesl_llvm_cbe_958_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__157;
  static  unsigned long long aesl_llvm_cbe_959_count = 0;
  static  unsigned long long aesl_llvm_cbe_960_count = 0;
  static  unsigned long long aesl_llvm_cbe_961_count = 0;
  static  unsigned long long aesl_llvm_cbe_962_count = 0;
  static  unsigned long long aesl_llvm_cbe_963_count = 0;
  static  unsigned long long aesl_llvm_cbe_964_count = 0;
  static  unsigned long long aesl_llvm_cbe_965_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_polyveck_pointwise_poly_montgomery\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.polyvecl* %%r, i64 0, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_pointwise_poly_montgomery  --> \n", ++aesl_llvm_cbe_933_count);
  llvm_cbe_tmp__150 = (l_struct_OC_poly *)(&llvm_cbe_r->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_pointwise_poly_montgomery  --> \n", ++aesl_llvm_cbe_934_count);
  llvm_cbe_tmp__151 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_pointwise_montgomery(%%struct.poly* %%1, %%struct.poly* %%a, %%struct.poly* %%2) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_pointwise_poly_montgomery  --> \n", ++aesl_llvm_cbe_935_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_pointwise_montgomery((l_struct_OC_poly *)llvm_cbe_tmp__150, (l_struct_OC_poly *)llvm_cbe_a, (l_struct_OC_poly *)llvm_cbe_tmp__151);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.polyvecl* %%r, i64 0, i32 0, i64 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_pointwise_poly_montgomery  --> \n", ++aesl_llvm_cbe_941_count);
  llvm_cbe_tmp__152 = (l_struct_OC_poly *)(&llvm_cbe_r->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_pointwise_poly_montgomery  --> \n", ++aesl_llvm_cbe_942_count);
  llvm_cbe_tmp__153 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_pointwise_montgomery(%%struct.poly* %%3, %%struct.poly* %%a, %%struct.poly* %%4) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_pointwise_poly_montgomery  --> \n", ++aesl_llvm_cbe_943_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_pointwise_montgomery((l_struct_OC_poly *)llvm_cbe_tmp__152, (l_struct_OC_poly *)llvm_cbe_a, (l_struct_OC_poly *)llvm_cbe_tmp__153);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds %%struct.polyvecl* %%r, i64 0, i32 0, i64 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_pointwise_poly_montgomery  --> \n", ++aesl_llvm_cbe_949_count);
  llvm_cbe_tmp__154 = (l_struct_OC_poly *)(&llvm_cbe_r->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_pointwise_poly_montgomery  --> \n", ++aesl_llvm_cbe_950_count);
  llvm_cbe_tmp__155 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_pointwise_montgomery(%%struct.poly* %%5, %%struct.poly* %%a, %%struct.poly* %%6) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_pointwise_poly_montgomery  --> \n", ++aesl_llvm_cbe_951_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_pointwise_montgomery((l_struct_OC_poly *)llvm_cbe_tmp__154, (l_struct_OC_poly *)llvm_cbe_a, (l_struct_OC_poly *)llvm_cbe_tmp__155);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds %%struct.polyvecl* %%r, i64 0, i32 0, i64 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_pointwise_poly_montgomery  --> \n", ++aesl_llvm_cbe_957_count);
  llvm_cbe_tmp__156 = (l_struct_OC_poly *)(&llvm_cbe_r->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_pointwise_poly_montgomery  --> \n", ++aesl_llvm_cbe_958_count);
  llvm_cbe_tmp__157 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_pointwise_montgomery(%%struct.poly* %%7, %%struct.poly* %%a, %%struct.poly* %%8) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_pointwise_poly_montgomery  --> \n", ++aesl_llvm_cbe_959_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_pointwise_montgomery((l_struct_OC_poly *)llvm_cbe_tmp__156, (l_struct_OC_poly *)llvm_cbe_a, (l_struct_OC_poly *)llvm_cbe_tmp__157);
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_polyveck_pointwise_poly_montgomery}\n");
  return;
}


signed int pqcrystals_dilithium2_ref_polyveck_chknorm(l_struct_OC_polyvecl *llvm_cbe_v, signed int llvm_cbe_bound) {
  static  unsigned long long aesl_llvm_cbe_966_count = 0;
  static  unsigned long long aesl_llvm_cbe_967_count = 0;
  static  unsigned long long aesl_llvm_cbe_968_count = 0;
  static  unsigned long long aesl_llvm_cbe_969_count = 0;
  static  unsigned long long aesl_llvm_cbe_970_count = 0;
  static  unsigned long long aesl_llvm_cbe_971_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge_count = 0;
  unsigned int llvm_cbe_storemerge;
  unsigned int llvm_cbe_storemerge__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_972_count = 0;
  static  unsigned long long aesl_llvm_cbe_973_count = 0;
  static  unsigned long long aesl_llvm_cbe_974_count = 0;
  static  unsigned long long aesl_llvm_cbe_975_count = 0;
  static  unsigned long long aesl_llvm_cbe_976_count = 0;
  static  unsigned long long aesl_llvm_cbe_977_count = 0;
  unsigned long long llvm_cbe_tmp__158;
  static  unsigned long long aesl_llvm_cbe_978_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__159;
  static  unsigned long long aesl_llvm_cbe_979_count = 0;
  unsigned int llvm_cbe_tmp__160;
  static  unsigned long long aesl_llvm_cbe_980_count = 0;
  static  unsigned long long aesl_llvm_cbe_981_count = 0;
  unsigned int llvm_cbe_tmp__161;
  static  unsigned long long aesl_llvm_cbe_982_count = 0;
  static  unsigned long long aesl_llvm_cbe_983_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  unsigned int llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_984_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_polyveck_chknorm\n");
  llvm_cbe_storemerge__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__162;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__162:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge = phi i32 [ 0, %%0 ], [ %%8, %%3  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_chknorm  --> \n", ++aesl_llvm_cbe_storemerge_count);
  llvm_cbe_storemerge = (unsigned int )llvm_cbe_storemerge__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge = 0x%X",llvm_cbe_storemerge);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__161);
}
  if ((((unsigned int )llvm_cbe_storemerge&4294967295U) < ((unsigned int )4u&4294967295U))) {
    goto llvm_cbe_tmp__163;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe_tmp__164;
  }

llvm_cbe_tmp__163:
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = zext i32 %%storemerge to i64, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_chknorm  --> \n", ++aesl_llvm_cbe_977_count);
  llvm_cbe_tmp__158 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__158);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 %%4, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_chknorm  --> \n", ++aesl_llvm_cbe_978_count);
  llvm_cbe_tmp__159 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )llvm_cbe_tmp__158))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__158));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = tail call i32 @pqcrystals_dilithium2_ref_poly_chknorm(%%struct.poly* %%5, i32 %%bound) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_chknorm  --> \n", ++aesl_llvm_cbe_979_count);
  llvm_cbe_tmp__160 = (unsigned int ) /*tail*/ pqcrystals_dilithium2_ref_poly_chknorm((l_struct_OC_poly *)llvm_cbe_tmp__159, llvm_cbe_bound);
if (AESL_DEBUG_TRACE) {
printf("\nArgument bound = 0x%X",llvm_cbe_bound);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__160);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = add i32 %%storemerge, 1, !dbg !18 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_chknorm  --> \n", ++aesl_llvm_cbe_981_count);
  llvm_cbe_tmp__161 = (unsigned int )((unsigned int )(llvm_cbe_storemerge&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__161&4294967295ull)));
  if (((llvm_cbe_tmp__160&4294967295U) == (0u&4294967295U))) {
    llvm_cbe_storemerge__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__161;   /* for PHI node */
    goto llvm_cbe_tmp__162;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )1u;   /* for PHI node */
    goto llvm_cbe_tmp__164;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__164:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i32 [ 1, %%3 ], [ 0, %%1  for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_chknorm  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",1u);
printf("\n = 0x%X",0u);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_polyveck_chknorm}\n");
  return llvm_cbe_storemerge1;
}


void pqcrystals_dilithium2_ref_polyveck_power2round(l_struct_OC_polyvecl *llvm_cbe_v1, l_struct_OC_polyvecl *llvm_cbe_v0, l_struct_OC_polyvecl *llvm_cbe_v) {
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
  l_struct_OC_poly *llvm_cbe_tmp__165;
  static  unsigned long long aesl_llvm_cbe_998_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__166;
  static  unsigned long long aesl_llvm_cbe_999_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__167;
  static  unsigned long long aesl_llvm_cbe_1000_count = 0;
  static  unsigned long long aesl_llvm_cbe_1001_count = 0;
  static  unsigned long long aesl_llvm_cbe_1002_count = 0;
  static  unsigned long long aesl_llvm_cbe_1003_count = 0;
  static  unsigned long long aesl_llvm_cbe_1004_count = 0;
  static  unsigned long long aesl_llvm_cbe_1005_count = 0;
  static  unsigned long long aesl_llvm_cbe_1006_count = 0;
  static  unsigned long long aesl_llvm_cbe_1007_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__168;
  static  unsigned long long aesl_llvm_cbe_1008_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__169;
  static  unsigned long long aesl_llvm_cbe_1009_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__170;
  static  unsigned long long aesl_llvm_cbe_1010_count = 0;
  static  unsigned long long aesl_llvm_cbe_1011_count = 0;
  static  unsigned long long aesl_llvm_cbe_1012_count = 0;
  static  unsigned long long aesl_llvm_cbe_1013_count = 0;
  static  unsigned long long aesl_llvm_cbe_1014_count = 0;
  static  unsigned long long aesl_llvm_cbe_1015_count = 0;
  static  unsigned long long aesl_llvm_cbe_1016_count = 0;
  static  unsigned long long aesl_llvm_cbe_1017_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__171;
  static  unsigned long long aesl_llvm_cbe_1018_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__172;
  static  unsigned long long aesl_llvm_cbe_1019_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__173;
  static  unsigned long long aesl_llvm_cbe_1020_count = 0;
  static  unsigned long long aesl_llvm_cbe_1021_count = 0;
  static  unsigned long long aesl_llvm_cbe_1022_count = 0;
  static  unsigned long long aesl_llvm_cbe_1023_count = 0;
  static  unsigned long long aesl_llvm_cbe_1024_count = 0;
  static  unsigned long long aesl_llvm_cbe_1025_count = 0;
  static  unsigned long long aesl_llvm_cbe_1026_count = 0;
  static  unsigned long long aesl_llvm_cbe_1027_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__174;
  static  unsigned long long aesl_llvm_cbe_1028_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__175;
  static  unsigned long long aesl_llvm_cbe_1029_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__176;
  static  unsigned long long aesl_llvm_cbe_1030_count = 0;
  static  unsigned long long aesl_llvm_cbe_1031_count = 0;
  static  unsigned long long aesl_llvm_cbe_1032_count = 0;
  static  unsigned long long aesl_llvm_cbe_1033_count = 0;
  static  unsigned long long aesl_llvm_cbe_1034_count = 0;
  static  unsigned long long aesl_llvm_cbe_1035_count = 0;
  static  unsigned long long aesl_llvm_cbe_1036_count = 0;
  static  unsigned long long aesl_llvm_cbe_1037_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_polyveck_power2round\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.polyvecl* %%v1, i64 0, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_power2round  --> \n", ++aesl_llvm_cbe_997_count);
  llvm_cbe_tmp__165 = (l_struct_OC_poly *)(&llvm_cbe_v1->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds %%struct.polyvecl* %%v0, i64 0, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_power2round  --> \n", ++aesl_llvm_cbe_998_count);
  llvm_cbe_tmp__166 = (l_struct_OC_poly *)(&llvm_cbe_v0->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_power2round  --> \n", ++aesl_llvm_cbe_999_count);
  llvm_cbe_tmp__167 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_power2round(%%struct.poly* %%1, %%struct.poly* %%2, %%struct.poly* %%3) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_power2round  --> \n", ++aesl_llvm_cbe_1000_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_power2round((l_struct_OC_poly *)llvm_cbe_tmp__165, (l_struct_OC_poly *)llvm_cbe_tmp__166, (l_struct_OC_poly *)llvm_cbe_tmp__167);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds %%struct.polyvecl* %%v1, i64 0, i32 0, i64 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_power2round  --> \n", ++aesl_llvm_cbe_1007_count);
  llvm_cbe_tmp__168 = (l_struct_OC_poly *)(&llvm_cbe_v1->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds %%struct.polyvecl* %%v0, i64 0, i32 0, i64 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_power2round  --> \n", ++aesl_llvm_cbe_1008_count);
  llvm_cbe_tmp__169 = (l_struct_OC_poly *)(&llvm_cbe_v0->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_power2round  --> \n", ++aesl_llvm_cbe_1009_count);
  llvm_cbe_tmp__170 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_power2round(%%struct.poly* %%4, %%struct.poly* %%5, %%struct.poly* %%6) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_power2round  --> \n", ++aesl_llvm_cbe_1010_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_power2round((l_struct_OC_poly *)llvm_cbe_tmp__168, (l_struct_OC_poly *)llvm_cbe_tmp__169, (l_struct_OC_poly *)llvm_cbe_tmp__170);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds %%struct.polyvecl* %%v1, i64 0, i32 0, i64 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_power2round  --> \n", ++aesl_llvm_cbe_1017_count);
  llvm_cbe_tmp__171 = (l_struct_OC_poly *)(&llvm_cbe_v1->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds %%struct.polyvecl* %%v0, i64 0, i32 0, i64 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_power2round  --> \n", ++aesl_llvm_cbe_1018_count);
  llvm_cbe_tmp__172 = (l_struct_OC_poly *)(&llvm_cbe_v0->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_power2round  --> \n", ++aesl_llvm_cbe_1019_count);
  llvm_cbe_tmp__173 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_power2round(%%struct.poly* %%7, %%struct.poly* %%8, %%struct.poly* %%9) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_power2round  --> \n", ++aesl_llvm_cbe_1020_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_power2round((l_struct_OC_poly *)llvm_cbe_tmp__171, (l_struct_OC_poly *)llvm_cbe_tmp__172, (l_struct_OC_poly *)llvm_cbe_tmp__173);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds %%struct.polyvecl* %%v1, i64 0, i32 0, i64 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_power2round  --> \n", ++aesl_llvm_cbe_1027_count);
  llvm_cbe_tmp__174 = (l_struct_OC_poly *)(&llvm_cbe_v1->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds %%struct.polyvecl* %%v0, i64 0, i32 0, i64 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_power2round  --> \n", ++aesl_llvm_cbe_1028_count);
  llvm_cbe_tmp__175 = (l_struct_OC_poly *)(&llvm_cbe_v0->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_power2round  --> \n", ++aesl_llvm_cbe_1029_count);
  llvm_cbe_tmp__176 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_power2round(%%struct.poly* %%10, %%struct.poly* %%11, %%struct.poly* %%12) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_power2round  --> \n", ++aesl_llvm_cbe_1030_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_power2round((l_struct_OC_poly *)llvm_cbe_tmp__174, (l_struct_OC_poly *)llvm_cbe_tmp__175, (l_struct_OC_poly *)llvm_cbe_tmp__176);
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_polyveck_power2round}\n");
  return;
}


void pqcrystals_dilithium2_ref_polyveck_decompose(l_struct_OC_polyvecl *llvm_cbe_v1, l_struct_OC_polyvecl *llvm_cbe_v0, l_struct_OC_polyvecl *llvm_cbe_v) {
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
  static  unsigned long long aesl_llvm_cbe_1050_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__177;
  static  unsigned long long aesl_llvm_cbe_1051_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__178;
  static  unsigned long long aesl_llvm_cbe_1052_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__179;
  static  unsigned long long aesl_llvm_cbe_1053_count = 0;
  static  unsigned long long aesl_llvm_cbe_1054_count = 0;
  static  unsigned long long aesl_llvm_cbe_1055_count = 0;
  static  unsigned long long aesl_llvm_cbe_1056_count = 0;
  static  unsigned long long aesl_llvm_cbe_1057_count = 0;
  static  unsigned long long aesl_llvm_cbe_1058_count = 0;
  static  unsigned long long aesl_llvm_cbe_1059_count = 0;
  static  unsigned long long aesl_llvm_cbe_1060_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__180;
  static  unsigned long long aesl_llvm_cbe_1061_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__181;
  static  unsigned long long aesl_llvm_cbe_1062_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__182;
  static  unsigned long long aesl_llvm_cbe_1063_count = 0;
  static  unsigned long long aesl_llvm_cbe_1064_count = 0;
  static  unsigned long long aesl_llvm_cbe_1065_count = 0;
  static  unsigned long long aesl_llvm_cbe_1066_count = 0;
  static  unsigned long long aesl_llvm_cbe_1067_count = 0;
  static  unsigned long long aesl_llvm_cbe_1068_count = 0;
  static  unsigned long long aesl_llvm_cbe_1069_count = 0;
  static  unsigned long long aesl_llvm_cbe_1070_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__183;
  static  unsigned long long aesl_llvm_cbe_1071_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__184;
  static  unsigned long long aesl_llvm_cbe_1072_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__185;
  static  unsigned long long aesl_llvm_cbe_1073_count = 0;
  static  unsigned long long aesl_llvm_cbe_1074_count = 0;
  static  unsigned long long aesl_llvm_cbe_1075_count = 0;
  static  unsigned long long aesl_llvm_cbe_1076_count = 0;
  static  unsigned long long aesl_llvm_cbe_1077_count = 0;
  static  unsigned long long aesl_llvm_cbe_1078_count = 0;
  static  unsigned long long aesl_llvm_cbe_1079_count = 0;
  static  unsigned long long aesl_llvm_cbe_1080_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__186;
  static  unsigned long long aesl_llvm_cbe_1081_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__187;
  static  unsigned long long aesl_llvm_cbe_1082_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__188;
  static  unsigned long long aesl_llvm_cbe_1083_count = 0;
  static  unsigned long long aesl_llvm_cbe_1084_count = 0;
  static  unsigned long long aesl_llvm_cbe_1085_count = 0;
  static  unsigned long long aesl_llvm_cbe_1086_count = 0;
  static  unsigned long long aesl_llvm_cbe_1087_count = 0;
  static  unsigned long long aesl_llvm_cbe_1088_count = 0;
  static  unsigned long long aesl_llvm_cbe_1089_count = 0;
  static  unsigned long long aesl_llvm_cbe_1090_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_polyveck_decompose\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.polyvecl* %%v1, i64 0, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_decompose  --> \n", ++aesl_llvm_cbe_1050_count);
  llvm_cbe_tmp__177 = (l_struct_OC_poly *)(&llvm_cbe_v1->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds %%struct.polyvecl* %%v0, i64 0, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_decompose  --> \n", ++aesl_llvm_cbe_1051_count);
  llvm_cbe_tmp__178 = (l_struct_OC_poly *)(&llvm_cbe_v0->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_decompose  --> \n", ++aesl_llvm_cbe_1052_count);
  llvm_cbe_tmp__179 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_decompose(%%struct.poly* %%1, %%struct.poly* %%2, %%struct.poly* %%3) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_decompose  --> \n", ++aesl_llvm_cbe_1053_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_decompose((l_struct_OC_poly *)llvm_cbe_tmp__177, (l_struct_OC_poly *)llvm_cbe_tmp__178, (l_struct_OC_poly *)llvm_cbe_tmp__179);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds %%struct.polyvecl* %%v1, i64 0, i32 0, i64 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_decompose  --> \n", ++aesl_llvm_cbe_1060_count);
  llvm_cbe_tmp__180 = (l_struct_OC_poly *)(&llvm_cbe_v1->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds %%struct.polyvecl* %%v0, i64 0, i32 0, i64 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_decompose  --> \n", ++aesl_llvm_cbe_1061_count);
  llvm_cbe_tmp__181 = (l_struct_OC_poly *)(&llvm_cbe_v0->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_decompose  --> \n", ++aesl_llvm_cbe_1062_count);
  llvm_cbe_tmp__182 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_decompose(%%struct.poly* %%4, %%struct.poly* %%5, %%struct.poly* %%6) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_decompose  --> \n", ++aesl_llvm_cbe_1063_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_decompose((l_struct_OC_poly *)llvm_cbe_tmp__180, (l_struct_OC_poly *)llvm_cbe_tmp__181, (l_struct_OC_poly *)llvm_cbe_tmp__182);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds %%struct.polyvecl* %%v1, i64 0, i32 0, i64 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_decompose  --> \n", ++aesl_llvm_cbe_1070_count);
  llvm_cbe_tmp__183 = (l_struct_OC_poly *)(&llvm_cbe_v1->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds %%struct.polyvecl* %%v0, i64 0, i32 0, i64 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_decompose  --> \n", ++aesl_llvm_cbe_1071_count);
  llvm_cbe_tmp__184 = (l_struct_OC_poly *)(&llvm_cbe_v0->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_decompose  --> \n", ++aesl_llvm_cbe_1072_count);
  llvm_cbe_tmp__185 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_decompose(%%struct.poly* %%7, %%struct.poly* %%8, %%struct.poly* %%9) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_decompose  --> \n", ++aesl_llvm_cbe_1073_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_decompose((l_struct_OC_poly *)llvm_cbe_tmp__183, (l_struct_OC_poly *)llvm_cbe_tmp__184, (l_struct_OC_poly *)llvm_cbe_tmp__185);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds %%struct.polyvecl* %%v1, i64 0, i32 0, i64 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_decompose  --> \n", ++aesl_llvm_cbe_1080_count);
  llvm_cbe_tmp__186 = (l_struct_OC_poly *)(&llvm_cbe_v1->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds %%struct.polyvecl* %%v0, i64 0, i32 0, i64 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_decompose  --> \n", ++aesl_llvm_cbe_1081_count);
  llvm_cbe_tmp__187 = (l_struct_OC_poly *)(&llvm_cbe_v0->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = getelementptr inbounds %%struct.polyvecl* %%v, i64 0, i32 0, i64 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_decompose  --> \n", ++aesl_llvm_cbe_1082_count);
  llvm_cbe_tmp__188 = (l_struct_OC_poly *)(&llvm_cbe_v->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_decompose(%%struct.poly* %%10, %%struct.poly* %%11, %%struct.poly* %%12) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_decompose  --> \n", ++aesl_llvm_cbe_1083_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_decompose((l_struct_OC_poly *)llvm_cbe_tmp__186, (l_struct_OC_poly *)llvm_cbe_tmp__187, (l_struct_OC_poly *)llvm_cbe_tmp__188);
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_polyveck_decompose}\n");
  return;
}


signed int pqcrystals_dilithium2_ref_polyveck_make_hint(l_struct_OC_polyvecl *llvm_cbe_h, l_struct_OC_polyvecl *llvm_cbe_v0, l_struct_OC_polyvecl *llvm_cbe_v1) {
  static  unsigned long long aesl_llvm_cbe_1091_count = 0;
  static  unsigned long long aesl_llvm_cbe_1092_count = 0;
  static  unsigned long long aesl_llvm_cbe_1093_count = 0;
  static  unsigned long long aesl_llvm_cbe_1094_count = 0;
  static  unsigned long long aesl_llvm_cbe_1095_count = 0;
  static  unsigned long long aesl_llvm_cbe_1096_count = 0;
  static  unsigned long long aesl_llvm_cbe_1097_count = 0;
  static  unsigned long long aesl_llvm_cbe_1098_count = 0;
  static  unsigned long long aesl_llvm_cbe_1099_count = 0;
  static  unsigned long long aesl_llvm_cbe_1100_count = 0;
  static  unsigned long long aesl_llvm_cbe_1101_count = 0;
  static  unsigned long long aesl_llvm_cbe_1102_count = 0;
  static  unsigned long long aesl_llvm_cbe_1103_count = 0;
  static  unsigned long long aesl_llvm_cbe_1104_count = 0;
  static  unsigned long long aesl_llvm_cbe_1105_count = 0;
  static  unsigned long long aesl_llvm_cbe_1106_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__189;
  static  unsigned long long aesl_llvm_cbe_1107_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__190;
  static  unsigned long long aesl_llvm_cbe_1108_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__191;
  static  unsigned long long aesl_llvm_cbe_1109_count = 0;
  unsigned int llvm_cbe_tmp__192;
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
  l_struct_OC_poly *llvm_cbe_tmp__193;
  static  unsigned long long aesl_llvm_cbe_1120_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__194;
  static  unsigned long long aesl_llvm_cbe_1121_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__195;
  static  unsigned long long aesl_llvm_cbe_1122_count = 0;
  unsigned int llvm_cbe_tmp__196;
  static  unsigned long long aesl_llvm_cbe_1123_count = 0;
  unsigned int llvm_cbe_tmp__197;
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
  l_struct_OC_poly *llvm_cbe_tmp__198;
  static  unsigned long long aesl_llvm_cbe_1134_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__199;
  static  unsigned long long aesl_llvm_cbe_1135_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__200;
  static  unsigned long long aesl_llvm_cbe_1136_count = 0;
  unsigned int llvm_cbe_tmp__201;
  static  unsigned long long aesl_llvm_cbe_1137_count = 0;
  unsigned int llvm_cbe_tmp__202;
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
  l_struct_OC_poly *llvm_cbe_tmp__203;
  static  unsigned long long aesl_llvm_cbe_1148_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__204;
  static  unsigned long long aesl_llvm_cbe_1149_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__205;
  static  unsigned long long aesl_llvm_cbe_1150_count = 0;
  unsigned int llvm_cbe_tmp__206;
  static  unsigned long long aesl_llvm_cbe_1151_count = 0;
  unsigned int llvm_cbe_tmp__207;
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

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_polyveck_make_hint\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.polyvecl* %%h, i64 0, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_make_hint  --> \n", ++aesl_llvm_cbe_1106_count);
  llvm_cbe_tmp__189 = (l_struct_OC_poly *)(&llvm_cbe_h->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds %%struct.polyvecl* %%v0, i64 0, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_make_hint  --> \n", ++aesl_llvm_cbe_1107_count);
  llvm_cbe_tmp__190 = (l_struct_OC_poly *)(&llvm_cbe_v0->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.polyvecl* %%v1, i64 0, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_make_hint  --> \n", ++aesl_llvm_cbe_1108_count);
  llvm_cbe_tmp__191 = (l_struct_OC_poly *)(&llvm_cbe_v1->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = tail call i32 @pqcrystals_dilithium2_ref_poly_make_hint(%%struct.poly* %%1, %%struct.poly* %%2, %%struct.poly* %%3) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_make_hint  --> \n", ++aesl_llvm_cbe_1109_count);
  llvm_cbe_tmp__192 = (unsigned int ) /*tail*/ pqcrystals_dilithium2_ref_poly_make_hint((l_struct_OC_poly *)llvm_cbe_tmp__189, (l_struct_OC_poly *)llvm_cbe_tmp__190, (l_struct_OC_poly *)llvm_cbe_tmp__191);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__192);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds %%struct.polyvecl* %%h, i64 0, i32 0, i64 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_make_hint  --> \n", ++aesl_llvm_cbe_1119_count);
  llvm_cbe_tmp__193 = (l_struct_OC_poly *)(&llvm_cbe_h->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds %%struct.polyvecl* %%v0, i64 0, i32 0, i64 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_make_hint  --> \n", ++aesl_llvm_cbe_1120_count);
  llvm_cbe_tmp__194 = (l_struct_OC_poly *)(&llvm_cbe_v0->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds %%struct.polyvecl* %%v1, i64 0, i32 0, i64 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_make_hint  --> \n", ++aesl_llvm_cbe_1121_count);
  llvm_cbe_tmp__195 = (l_struct_OC_poly *)(&llvm_cbe_v1->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = tail call i32 @pqcrystals_dilithium2_ref_poly_make_hint(%%struct.poly* %%5, %%struct.poly* %%6, %%struct.poly* %%7) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_make_hint  --> \n", ++aesl_llvm_cbe_1122_count);
  llvm_cbe_tmp__196 = (unsigned int ) /*tail*/ pqcrystals_dilithium2_ref_poly_make_hint((l_struct_OC_poly *)llvm_cbe_tmp__193, (l_struct_OC_poly *)llvm_cbe_tmp__194, (l_struct_OC_poly *)llvm_cbe_tmp__195);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__196);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = add i32 %%8, %%4, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_make_hint  --> \n", ++aesl_llvm_cbe_1123_count);
  llvm_cbe_tmp__197 = (unsigned int )((unsigned int )(llvm_cbe_tmp__196&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__192&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__197&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds %%struct.polyvecl* %%h, i64 0, i32 0, i64 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_make_hint  --> \n", ++aesl_llvm_cbe_1133_count);
  llvm_cbe_tmp__198 = (l_struct_OC_poly *)(&llvm_cbe_h->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds %%struct.polyvecl* %%v0, i64 0, i32 0, i64 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_make_hint  --> \n", ++aesl_llvm_cbe_1134_count);
  llvm_cbe_tmp__199 = (l_struct_OC_poly *)(&llvm_cbe_v0->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = getelementptr inbounds %%struct.polyvecl* %%v1, i64 0, i32 0, i64 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_make_hint  --> \n", ++aesl_llvm_cbe_1135_count);
  llvm_cbe_tmp__200 = (l_struct_OC_poly *)(&llvm_cbe_v1->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = tail call i32 @pqcrystals_dilithium2_ref_poly_make_hint(%%struct.poly* %%10, %%struct.poly* %%11, %%struct.poly* %%12) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_make_hint  --> \n", ++aesl_llvm_cbe_1136_count);
  llvm_cbe_tmp__201 = (unsigned int ) /*tail*/ pqcrystals_dilithium2_ref_poly_make_hint((l_struct_OC_poly *)llvm_cbe_tmp__198, (l_struct_OC_poly *)llvm_cbe_tmp__199, (l_struct_OC_poly *)llvm_cbe_tmp__200);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__201);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = add i32 %%13, %%9, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_make_hint  --> \n", ++aesl_llvm_cbe_1137_count);
  llvm_cbe_tmp__202 = (unsigned int )((unsigned int )(llvm_cbe_tmp__201&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__197&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__202&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds %%struct.polyvecl* %%h, i64 0, i32 0, i64 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_make_hint  --> \n", ++aesl_llvm_cbe_1147_count);
  llvm_cbe_tmp__203 = (l_struct_OC_poly *)(&llvm_cbe_h->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = getelementptr inbounds %%struct.polyvecl* %%v0, i64 0, i32 0, i64 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_make_hint  --> \n", ++aesl_llvm_cbe_1148_count);
  llvm_cbe_tmp__204 = (l_struct_OC_poly *)(&llvm_cbe_v0->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = getelementptr inbounds %%struct.polyvecl* %%v1, i64 0, i32 0, i64 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_make_hint  --> \n", ++aesl_llvm_cbe_1149_count);
  llvm_cbe_tmp__205 = (l_struct_OC_poly *)(&llvm_cbe_v1->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = tail call i32 @pqcrystals_dilithium2_ref_poly_make_hint(%%struct.poly* %%15, %%struct.poly* %%16, %%struct.poly* %%17) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_make_hint  --> \n", ++aesl_llvm_cbe_1150_count);
  llvm_cbe_tmp__206 = (unsigned int ) /*tail*/ pqcrystals_dilithium2_ref_poly_make_hint((l_struct_OC_poly *)llvm_cbe_tmp__203, (l_struct_OC_poly *)llvm_cbe_tmp__204, (l_struct_OC_poly *)llvm_cbe_tmp__205);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__206);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = add i32 %%18, %%14, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_make_hint  --> \n", ++aesl_llvm_cbe_1151_count);
  llvm_cbe_tmp__207 = (unsigned int )((unsigned int )(llvm_cbe_tmp__206&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__202&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__207&4294967295ull)));
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_polyveck_make_hint}\n");
  return llvm_cbe_tmp__207;
}


void pqcrystals_dilithium2_ref_polyveck_use_hint(l_struct_OC_polyvecl *llvm_cbe_w, l_struct_OC_polyvecl *llvm_cbe_u, l_struct_OC_polyvecl *llvm_cbe_h) {
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
  l_struct_OC_poly *llvm_cbe_tmp__208;
  static  unsigned long long aesl_llvm_cbe_1175_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__209;
  static  unsigned long long aesl_llvm_cbe_1176_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__210;
  static  unsigned long long aesl_llvm_cbe_1177_count = 0;
  static  unsigned long long aesl_llvm_cbe_1178_count = 0;
  static  unsigned long long aesl_llvm_cbe_1179_count = 0;
  static  unsigned long long aesl_llvm_cbe_1180_count = 0;
  static  unsigned long long aesl_llvm_cbe_1181_count = 0;
  static  unsigned long long aesl_llvm_cbe_1182_count = 0;
  static  unsigned long long aesl_llvm_cbe_1183_count = 0;
  static  unsigned long long aesl_llvm_cbe_1184_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__211;
  static  unsigned long long aesl_llvm_cbe_1185_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__212;
  static  unsigned long long aesl_llvm_cbe_1186_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__213;
  static  unsigned long long aesl_llvm_cbe_1187_count = 0;
  static  unsigned long long aesl_llvm_cbe_1188_count = 0;
  static  unsigned long long aesl_llvm_cbe_1189_count = 0;
  static  unsigned long long aesl_llvm_cbe_1190_count = 0;
  static  unsigned long long aesl_llvm_cbe_1191_count = 0;
  static  unsigned long long aesl_llvm_cbe_1192_count = 0;
  static  unsigned long long aesl_llvm_cbe_1193_count = 0;
  static  unsigned long long aesl_llvm_cbe_1194_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__214;
  static  unsigned long long aesl_llvm_cbe_1195_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__215;
  static  unsigned long long aesl_llvm_cbe_1196_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__216;
  static  unsigned long long aesl_llvm_cbe_1197_count = 0;
  static  unsigned long long aesl_llvm_cbe_1198_count = 0;
  static  unsigned long long aesl_llvm_cbe_1199_count = 0;
  static  unsigned long long aesl_llvm_cbe_1200_count = 0;
  static  unsigned long long aesl_llvm_cbe_1201_count = 0;
  static  unsigned long long aesl_llvm_cbe_1202_count = 0;
  static  unsigned long long aesl_llvm_cbe_1203_count = 0;
  static  unsigned long long aesl_llvm_cbe_1204_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__217;
  static  unsigned long long aesl_llvm_cbe_1205_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__218;
  static  unsigned long long aesl_llvm_cbe_1206_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__219;
  static  unsigned long long aesl_llvm_cbe_1207_count = 0;
  static  unsigned long long aesl_llvm_cbe_1208_count = 0;
  static  unsigned long long aesl_llvm_cbe_1209_count = 0;
  static  unsigned long long aesl_llvm_cbe_1210_count = 0;
  static  unsigned long long aesl_llvm_cbe_1211_count = 0;
  static  unsigned long long aesl_llvm_cbe_1212_count = 0;
  static  unsigned long long aesl_llvm_cbe_1213_count = 0;
  static  unsigned long long aesl_llvm_cbe_1214_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_polyveck_use_hint\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.polyvecl* %%w, i64 0, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_use_hint  --> \n", ++aesl_llvm_cbe_1174_count);
  llvm_cbe_tmp__208 = (l_struct_OC_poly *)(&llvm_cbe_w->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds %%struct.polyvecl* %%u, i64 0, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_use_hint  --> \n", ++aesl_llvm_cbe_1175_count);
  llvm_cbe_tmp__209 = (l_struct_OC_poly *)(&llvm_cbe_u->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.polyvecl* %%h, i64 0, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_use_hint  --> \n", ++aesl_llvm_cbe_1176_count);
  llvm_cbe_tmp__210 = (l_struct_OC_poly *)(&llvm_cbe_h->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_use_hint(%%struct.poly* %%1, %%struct.poly* %%2, %%struct.poly* %%3) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_use_hint  --> \n", ++aesl_llvm_cbe_1177_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_use_hint((l_struct_OC_poly *)llvm_cbe_tmp__208, (l_struct_OC_poly *)llvm_cbe_tmp__209, (l_struct_OC_poly *)llvm_cbe_tmp__210);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds %%struct.polyvecl* %%w, i64 0, i32 0, i64 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_use_hint  --> \n", ++aesl_llvm_cbe_1184_count);
  llvm_cbe_tmp__211 = (l_struct_OC_poly *)(&llvm_cbe_w->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds %%struct.polyvecl* %%u, i64 0, i32 0, i64 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_use_hint  --> \n", ++aesl_llvm_cbe_1185_count);
  llvm_cbe_tmp__212 = (l_struct_OC_poly *)(&llvm_cbe_u->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds %%struct.polyvecl* %%h, i64 0, i32 0, i64 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_use_hint  --> \n", ++aesl_llvm_cbe_1186_count);
  llvm_cbe_tmp__213 = (l_struct_OC_poly *)(&llvm_cbe_h->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_use_hint(%%struct.poly* %%4, %%struct.poly* %%5, %%struct.poly* %%6) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_use_hint  --> \n", ++aesl_llvm_cbe_1187_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_use_hint((l_struct_OC_poly *)llvm_cbe_tmp__211, (l_struct_OC_poly *)llvm_cbe_tmp__212, (l_struct_OC_poly *)llvm_cbe_tmp__213);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds %%struct.polyvecl* %%w, i64 0, i32 0, i64 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_use_hint  --> \n", ++aesl_llvm_cbe_1194_count);
  llvm_cbe_tmp__214 = (l_struct_OC_poly *)(&llvm_cbe_w->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds %%struct.polyvecl* %%u, i64 0, i32 0, i64 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_use_hint  --> \n", ++aesl_llvm_cbe_1195_count);
  llvm_cbe_tmp__215 = (l_struct_OC_poly *)(&llvm_cbe_u->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds %%struct.polyvecl* %%h, i64 0, i32 0, i64 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_use_hint  --> \n", ++aesl_llvm_cbe_1196_count);
  llvm_cbe_tmp__216 = (l_struct_OC_poly *)(&llvm_cbe_h->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_use_hint(%%struct.poly* %%7, %%struct.poly* %%8, %%struct.poly* %%9) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_use_hint  --> \n", ++aesl_llvm_cbe_1197_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_use_hint((l_struct_OC_poly *)llvm_cbe_tmp__214, (l_struct_OC_poly *)llvm_cbe_tmp__215, (l_struct_OC_poly *)llvm_cbe_tmp__216);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds %%struct.polyvecl* %%w, i64 0, i32 0, i64 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_use_hint  --> \n", ++aesl_llvm_cbe_1204_count);
  llvm_cbe_tmp__217 = (l_struct_OC_poly *)(&llvm_cbe_w->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds %%struct.polyvecl* %%u, i64 0, i32 0, i64 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_use_hint  --> \n", ++aesl_llvm_cbe_1205_count);
  llvm_cbe_tmp__218 = (l_struct_OC_poly *)(&llvm_cbe_u->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = getelementptr inbounds %%struct.polyvecl* %%h, i64 0, i32 0, i64 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_use_hint  --> \n", ++aesl_llvm_cbe_1206_count);
  llvm_cbe_tmp__219 = (l_struct_OC_poly *)(&llvm_cbe_h->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_poly_use_hint(%%struct.poly* %%10, %%struct.poly* %%11, %%struct.poly* %%12) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_use_hint  --> \n", ++aesl_llvm_cbe_1207_count);
   /*tail*/ pqcrystals_dilithium2_ref_poly_use_hint((l_struct_OC_poly *)llvm_cbe_tmp__217, (l_struct_OC_poly *)llvm_cbe_tmp__218, (l_struct_OC_poly *)llvm_cbe_tmp__219);
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_polyveck_use_hint}\n");
  return;
}


void pqcrystals_dilithium2_ref_polyveck_pack_w1( char *llvm_cbe_r, l_struct_OC_polyvecl *llvm_cbe_w1) {
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
  l_struct_OC_poly *llvm_cbe_tmp__220;
  static  unsigned long long aesl_llvm_cbe_1225_count = 0;
  static  unsigned long long aesl_llvm_cbe_1226_count = 0;
  static  unsigned long long aesl_llvm_cbe_1227_count = 0;
  static  unsigned long long aesl_llvm_cbe_1228_count = 0;
  static  unsigned long long aesl_llvm_cbe_1229_count = 0;
  static  unsigned long long aesl_llvm_cbe_1230_count = 0;
  static  unsigned long long aesl_llvm_cbe_1231_count = 0;
   char *llvm_cbe_tmp__221;
  static  unsigned long long aesl_llvm_cbe_1232_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__222;
  static  unsigned long long aesl_llvm_cbe_1233_count = 0;
  static  unsigned long long aesl_llvm_cbe_1234_count = 0;
  static  unsigned long long aesl_llvm_cbe_1235_count = 0;
  static  unsigned long long aesl_llvm_cbe_1236_count = 0;
  static  unsigned long long aesl_llvm_cbe_1237_count = 0;
  static  unsigned long long aesl_llvm_cbe_1238_count = 0;
  static  unsigned long long aesl_llvm_cbe_1239_count = 0;
   char *llvm_cbe_tmp__223;
  static  unsigned long long aesl_llvm_cbe_1240_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__224;
  static  unsigned long long aesl_llvm_cbe_1241_count = 0;
  static  unsigned long long aesl_llvm_cbe_1242_count = 0;
  static  unsigned long long aesl_llvm_cbe_1243_count = 0;
  static  unsigned long long aesl_llvm_cbe_1244_count = 0;
  static  unsigned long long aesl_llvm_cbe_1245_count = 0;
  static  unsigned long long aesl_llvm_cbe_1246_count = 0;
  static  unsigned long long aesl_llvm_cbe_1247_count = 0;
   char *llvm_cbe_tmp__225;
  static  unsigned long long aesl_llvm_cbe_1248_count = 0;
  l_struct_OC_poly *llvm_cbe_tmp__226;
  static  unsigned long long aesl_llvm_cbe_1249_count = 0;
  static  unsigned long long aesl_llvm_cbe_1250_count = 0;
  static  unsigned long long aesl_llvm_cbe_1251_count = 0;
  static  unsigned long long aesl_llvm_cbe_1252_count = 0;
  static  unsigned long long aesl_llvm_cbe_1253_count = 0;
  static  unsigned long long aesl_llvm_cbe_1254_count = 0;
  static  unsigned long long aesl_llvm_cbe_1255_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @pqcrystals_dilithium2_ref_polyveck_pack_w1\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.polyvecl* %%w1, i64 0, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_pack_w1  --> \n", ++aesl_llvm_cbe_1224_count);
  llvm_cbe_tmp__220 = (l_struct_OC_poly *)(&llvm_cbe_w1->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_polyw1_pack(i8* %%r, %%struct.poly* %%1) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_pack_w1  --> \n", ++aesl_llvm_cbe_1225_count);
   /*tail*/ pqcrystals_dilithium2_ref_polyw1_pack(( char *)llvm_cbe_r, (l_struct_OC_poly *)llvm_cbe_tmp__220);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds i8* %%r, i64 192, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_pack_w1  --> \n", ++aesl_llvm_cbe_1231_count);
  llvm_cbe_tmp__221 = ( char *)(&llvm_cbe_r[(((signed long long )192ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.polyvecl* %%w1, i64 0, i32 0, i64 1, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_pack_w1  --> \n", ++aesl_llvm_cbe_1232_count);
  llvm_cbe_tmp__222 = (l_struct_OC_poly *)(&llvm_cbe_w1->field0[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_polyw1_pack(i8* %%2, %%struct.poly* %%3) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_pack_w1  --> \n", ++aesl_llvm_cbe_1233_count);
   /*tail*/ pqcrystals_dilithium2_ref_polyw1_pack(( char *)llvm_cbe_tmp__221, (l_struct_OC_poly *)llvm_cbe_tmp__222);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds i8* %%r, i64 384, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_pack_w1  --> \n", ++aesl_llvm_cbe_1239_count);
  llvm_cbe_tmp__223 = ( char *)(&llvm_cbe_r[(((signed long long )384ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds %%struct.polyvecl* %%w1, i64 0, i32 0, i64 2, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_pack_w1  --> \n", ++aesl_llvm_cbe_1240_count);
  llvm_cbe_tmp__224 = (l_struct_OC_poly *)(&llvm_cbe_w1->field0[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_polyw1_pack(i8* %%4, %%struct.poly* %%5) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_pack_w1  --> \n", ++aesl_llvm_cbe_1241_count);
   /*tail*/ pqcrystals_dilithium2_ref_polyw1_pack(( char *)llvm_cbe_tmp__223, (l_struct_OC_poly *)llvm_cbe_tmp__224);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds i8* %%r, i64 576, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_pack_w1  --> \n", ++aesl_llvm_cbe_1247_count);
  llvm_cbe_tmp__225 = ( char *)(&llvm_cbe_r[(((signed long long )576ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds %%struct.polyvecl* %%w1, i64 0, i32 0, i64 3, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_pack_w1  --> \n", ++aesl_llvm_cbe_1248_count);
  llvm_cbe_tmp__226 = (l_struct_OC_poly *)(&llvm_cbe_w1->field0[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @pqcrystals_dilithium2_ref_polyw1_pack(i8* %%6, %%struct.poly* %%7) nounwind, !dbg !17 for 0x%I64xth hint within @pqcrystals_dilithium2_ref_polyveck_pack_w1  --> \n", ++aesl_llvm_cbe_1249_count);
   /*tail*/ pqcrystals_dilithium2_ref_polyw1_pack(( char *)llvm_cbe_tmp__225, (l_struct_OC_poly *)llvm_cbe_tmp__226);
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @pqcrystals_dilithium2_ref_polyveck_pack_w1}\n");
  return;
}

