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
typedef struct l_struct_OC__iobuf l_struct_OC__iobuf;

/* Structure contents */
struct l_struct_OC__iobuf {
   char *field0;
  unsigned int field1;
   char *field2;
  unsigned int field3;
  unsigned int field4;
  unsigned int field5;
  unsigned int field6;
   char *field7;
};


/* External Global Variable Declarations */
extern  char AlgName[12];

/* Function Declarations */
double fmod(double, double);
float fmodf(float, float);
long double fmodl(long double, long double);
signed int isxdigit2(signed int llvm_cbe_ch);
signed int main(void);
void randombytes_init( char *,  char *, signed int );
signed int randombytes( char *, signed long long );
void fprintBstr(l_struct_OC__iobuf *llvm_cbe_fp,  char *llvm_cbe_S,  char *llvm_cbe_A, signed long long llvm_cbe_L);
signed int FindMarker(l_struct_OC__iobuf *llvm_cbe_infile,  char *llvm_cbe_marker);
signed int ReadHex(l_struct_OC__iobuf *llvm_cbe_infile,  char *llvm_cbe_A, signed int llvm_cbe_Length,  char *llvm_cbe_str);
signed int pqcrystals_dilithium2_ref_keypair( char *,  char *);
signed int pqcrystals_dilithium2_ref( char *, signed long long *,  char *, signed long long ,  char *);
signed int pqcrystals_dilithium2_ref_open( char *, signed long long *,  char *, signed long long ,  char *);


/* Global Variable Definitions and Initialization */
 char AlgName[12] = "My Alg Name";
static  char aesl_internal__OC_str[18] = "PQCsignKAT_%d.req";
static  char aesl_internal__OC_str1[2] = "w";
static  char aesl_internal__OC_str2[30] = "Couldn't open <%s> for write\n";
static  char aesl_internal__OC_str3[18] = "PQCsignKAT_%d.rsp";
static  char aesl_internal__OC_str9[6] = "sk =\n";
static  char aesl_internal__OC_str4[12] = "count = %d\n";
static  char aesl_internal__OC_str5[8] = "seed = ";
static  char aesl_internal__OC_str6[13] = "mlen = %llu\n";
static  char aesl_internal__OC_str7[7] = "msg = ";
static  char aesl_internal__OC_str8[6] = "pk =\n";
static  char aesl_internal__OC_str10[9] = "smlen =\n";
static  char aesl_internal__OC_str11[7] = "sm =\n\n";
static  char aesl_internal__OC_str12[2] = "r";
static  char aesl_internal__OC_str20[5] = "%llu";
static  char aesl_internal__OC_str26[27] = "crypto_sign returned <%d>\n";
static  char aesl_internal__OC_str22[39] = "ERROR: unable to read 'msg' from <%s>\n";
static  char aesl_internal__OC_str25[6] = "sk = ";
static  char aesl_internal__OC_str34[5] = "%02X";
static  char aesl_internal__OC_str19[8] = "mlen = ";
static  char aesl_internal__OC_str13[29] = "Couldn't open <%s> for read\n";
static  char aesl_internal__OC_str24[6] = "pk = ";
static  char aesl_internal__OC_str28[6] = "sm = ";
static  char aesl_internal__OC_str17[3] = "%d";
static  char aesl_internal__OC_str31[67] = "crypto_sign_open returned bad 'mlen': Got <%llu>, expected <%llu>\n";
static  char aesl_internal__OC_str15[11] = "Dilithium2";
static  char aesl_internal__OC_str23[35] = "crypto_sign_keypair returned <%d>\n";
static  char aesl_internal__OC_str21[40] = "ERROR: unable to read 'mlen' from <%s>\n";
static  char aesl_internal__OC_str30[32] = "crypto_sign_open returned <%d>\n";
static  char aesl_internal__OC_str27[14] = "smlen = %llu\n";
static  char aesl_internal__OC_str35[3] = "00";
static  char aesl_internal_str[40] = "crypto_sign_open returned bad 'm' value";
static  char aesl_internal__OC_str14[7] = "# %s\n\n";
static  char aesl_internal__OC_str18[40] = "ERROR: unable to read 'seed' from <%s>\n";
static  char aesl_internal__OC_str16[9] = "count = ";


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

signed int isxdigit2(signed int llvm_cbe_ch) {
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
  static  unsigned long long aesl_llvm_cbe_storemerge_count = 0;
  unsigned int llvm_cbe_storemerge;
  unsigned int llvm_cbe_storemerge__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_22_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @isxdigit2\n");
  if (((llvm_cbe_ch&4294967295U) == (48u&4294967295U))) {
    goto llvm_cbe_tmp__1;
  } else {
    goto llvm_cbe_tmp__2;
  }

llvm_cbe_tmp__2:
  switch (((unsigned int )(llvm_cbe_ch&4294967295ull))) {
  default:
    llvm_cbe_storemerge__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe_tmp__3;
;
  case ((unsigned int )(70u&4294967295ull)):
    goto llvm_cbe_tmp__1;
    break;
  case ((unsigned int )(69u&4294967295ull)):
    goto llvm_cbe_tmp__1;
    break;
  case ((unsigned int )(68u&4294967295ull)):
    goto llvm_cbe_tmp__1;
    break;
  case ((unsigned int )(67u&4294967295ull)):
    goto llvm_cbe_tmp__1;
    break;
  case ((unsigned int )(66u&4294967295ull)):
    goto llvm_cbe_tmp__1;
    break;
  case ((unsigned int )(65u&4294967295ull)):
    goto llvm_cbe_tmp__1;
    break;
  case ((unsigned int )(57u&4294967295ull)):
    goto llvm_cbe_tmp__1;
    break;
  case ((unsigned int )(56u&4294967295ull)):
    goto llvm_cbe_tmp__1;
    break;
  case ((unsigned int )(55u&4294967295ull)):
    goto llvm_cbe_tmp__1;
    break;
  case ((unsigned int )(54u&4294967295ull)):
    goto llvm_cbe_tmp__1;
    break;
  case ((unsigned int )(53u&4294967295ull)):
    goto llvm_cbe_tmp__1;
    break;
  case ((unsigned int )(52u&4294967295ull)):
    goto llvm_cbe_tmp__1;
    break;
  case ((unsigned int )(51u&4294967295ull)):
    goto llvm_cbe_tmp__1;
    break;
  case ((unsigned int )(50u&4294967295ull)):
    goto llvm_cbe_tmp__1;
    break;
  case ((unsigned int )(49u&4294967295ull)):
    goto llvm_cbe_tmp__1;
    break;
  }
llvm_cbe_tmp__1:
  llvm_cbe_storemerge__PHI_TEMPORARY = (unsigned int )1u;   /* for PHI node */
  goto llvm_cbe_tmp__3;

llvm_cbe_tmp__3:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge = phi i32 [ 1, %%3 ], [ 0, %%2  for 0x%I64xth hint within @isxdigit2  --> \n", ++aesl_llvm_cbe_storemerge_count);
  llvm_cbe_storemerge = (unsigned int )llvm_cbe_storemerge__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge = 0x%X",llvm_cbe_storemerge);
printf("\n = 0x%X",1u);
printf("\n = 0x%X",0u);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @isxdigit2}\n");
  return llvm_cbe_storemerge;
}


signed int main(void) {
  static  unsigned long long aesl_llvm_cbe_fn_req_count = 0;
   char llvm_cbe_fn_req[32];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_fn_rsp_count = 0;
   char llvm_cbe_fn_rsp[32];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_seed_count = 0;
   char llvm_cbe_seed[48];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_msg_count = 0;
   char llvm_cbe_msg[3300];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_entropy_input_count = 0;
   char llvm_cbe_entropy_input[48];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_m_count = 0;
   char llvm_cbe_m[3300];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_sm_count = 0;
   char llvm_cbe_sm[5720];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_m1_count = 0;
   char llvm_cbe_m1[5720];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_mlen_count = 0;
  signed long long llvm_cbe_mlen;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_smlen_count = 0;
  signed long long llvm_cbe_smlen;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_mlen1_count = 0;
  signed long long llvm_cbe_mlen1;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_count_count = 0;
  signed int llvm_cbe_count;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_pk_count = 0;
   char llvm_cbe_pk[1312];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_sk_count = 0;
   char llvm_cbe_sk[2544];    /* Address-exposed local */
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
   char *llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_38_count = 0;
  unsigned int llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_39_count = 0;
  l_struct_OC__iobuf *llvm_cbe_tmp__6;
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
  static  unsigned long long aesl_llvm_cbe_52_count = 0;
  static  unsigned long long aesl_llvm_cbe_53_count = 0;
  static  unsigned long long aesl_llvm_cbe_54_count = 0;
  static  unsigned long long aesl_llvm_cbe_55_count = 0;
  static  unsigned long long aesl_llvm_cbe_56_count = 0;
  static  unsigned long long aesl_llvm_cbe_57_count = 0;
  static  unsigned long long aesl_llvm_cbe_58_count = 0;
  static  unsigned long long aesl_llvm_cbe_59_count = 0;
  unsigned int llvm_cbe_tmp__7;
  static  unsigned long long aesl_llvm_cbe_60_count = 0;
  static  unsigned long long aesl_llvm_cbe_61_count = 0;
   char *llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_62_count = 0;
  unsigned int llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_63_count = 0;
  l_struct_OC__iobuf *llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_64_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_76_count = 0;
  static  unsigned long long aesl_llvm_cbe_77_count = 0;
  static  unsigned long long aesl_llvm_cbe_78_count = 0;
  unsigned int llvm_cbe_tmp__11;
  static  unsigned long long aesl_llvm_cbe_79_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge14_count = 0;
  unsigned int llvm_cbe_storemerge14;
  unsigned int llvm_cbe_storemerge14__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_80_count = 0;
  unsigned char llvm_cbe_tmp__12;
  static  unsigned long long aesl_llvm_cbe_81_count = 0;
  unsigned long long llvm_cbe_tmp__13;
  static  unsigned long long aesl_llvm_cbe_82_count = 0;
   char *llvm_cbe_tmp__14;
  static  unsigned long long aesl_llvm_cbe_83_count = 0;
  static  unsigned long long aesl_llvm_cbe_84_count = 0;
  unsigned int llvm_cbe_tmp__15;
  static  unsigned long long aesl_llvm_cbe_85_count = 0;
  static  unsigned long long aesl_llvm_cbe_86_count = 0;
  static  unsigned long long aesl_llvm_cbe_87_count = 0;
  static  unsigned long long aesl_llvm_cbe_88_count = 0;
  static  unsigned long long aesl_llvm_cbe_89_count = 0;
  static  unsigned long long aesl_llvm_cbe_90_count = 0;
  static  unsigned long long aesl_llvm_cbe_91_count = 0;
  static  unsigned long long aesl_llvm_cbe_92_count = 0;
  static  unsigned long long aesl_llvm_cbe_93_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_94_count = 0;
  static  unsigned long long aesl_llvm_cbe_95_count = 0;
   char *llvm_cbe_tmp__16;
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
   char *llvm_cbe_tmp__17;
  static  unsigned long long aesl_llvm_cbe_107_count = 0;
   char *llvm_cbe_tmp__18;
  static  unsigned long long aesl_llvm_cbe_108_count = 0;
  unsigned int llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_109_count = 0;
  unsigned int llvm_cbe_tmp__20;
  static  unsigned long long aesl_llvm_cbe_110_count = 0;
  static  unsigned long long aesl_llvm_cbe_111_count = 0;
  static  unsigned long long aesl_llvm_cbe_112_count = 0;
  static  unsigned long long aesl_llvm_cbe_113_count = 0;
  static  unsigned long long aesl_llvm_cbe_114_count = 0;
  static  unsigned long long aesl_llvm_cbe_115_count = 0;
  static  unsigned long long aesl_llvm_cbe_116_count = 0;
  unsigned int llvm_cbe_tmp__21;
  static  unsigned long long aesl_llvm_cbe_117_count = 0;
  static  unsigned long long aesl_llvm_cbe_118_count = 0;
  static  unsigned long long aesl_llvm_cbe_119_count = 0;
  static  unsigned long long aesl_llvm_cbe_120_count = 0;
  unsigned int llvm_cbe_tmp__22;
  static  unsigned long long aesl_llvm_cbe_121_count = 0;
  static  unsigned long long aesl_llvm_cbe_122_count = 0;
  static  unsigned long long aesl_llvm_cbe_123_count = 0;
  static  unsigned long long aesl_llvm_cbe_124_count = 0;
  static  unsigned long long aesl_llvm_cbe_125_count = 0;
  unsigned long long llvm_cbe_tmp__23;
  static  unsigned long long aesl_llvm_cbe_126_count = 0;
  unsigned long long llvm_cbe_tmp__24;
  static  unsigned long long aesl_llvm_cbe_127_count = 0;
  unsigned long long llvm_cbe_tmp__25;
  static  unsigned long long aesl_llvm_cbe_128_count = 0;
  unsigned long long llvm_cbe_tmp__26;
  static  unsigned long long aesl_llvm_cbe_129_count = 0;
  static  unsigned long long aesl_llvm_cbe_130_count = 0;
  static  unsigned long long aesl_llvm_cbe_131_count = 0;
  static  unsigned long long aesl_llvm_cbe_132_count = 0;
  static  unsigned long long aesl_llvm_cbe_133_count = 0;
  static  unsigned long long aesl_llvm_cbe_134_count = 0;
  static  unsigned long long aesl_llvm_cbe_135_count = 0;
  static  unsigned long long aesl_llvm_cbe_136_count = 0;
  static  unsigned long long aesl_llvm_cbe_137_count = 0;
  static  unsigned long long aesl_llvm_cbe_138_count = 0;
  unsigned int llvm_cbe_tmp__27;
  static  unsigned long long aesl_llvm_cbe_139_count = 0;
  unsigned int llvm_cbe_tmp__28;
  static  unsigned long long aesl_llvm_cbe_140_count = 0;
  static  unsigned long long aesl_llvm_cbe_141_count = 0;
  static  unsigned long long aesl_llvm_cbe_142_count = 0;
  static  unsigned long long aesl_llvm_cbe_143_count = 0;
  static  unsigned long long aesl_llvm_cbe_144_count = 0;
  static  unsigned long long aesl_llvm_cbe_145_count = 0;
  static  unsigned long long aesl_llvm_cbe_146_count = 0;
  static  unsigned long long aesl_llvm_cbe_147_count = 0;
  static  unsigned long long aesl_llvm_cbe_148_count = 0;
  static  unsigned long long aesl_llvm_cbe_149_count = 0;
  unsigned int llvm_cbe_tmp__29;
  static  unsigned long long aesl_llvm_cbe_150_count = 0;
  static  unsigned long long aesl_llvm_cbe_151_count = 0;
  static  unsigned long long aesl_llvm_cbe_152_count = 0;
  static  unsigned long long aesl_llvm_cbe_153_count = 0;
  unsigned int llvm_cbe_tmp__30;
  static  unsigned long long aesl_llvm_cbe_154_count = 0;
  static  unsigned long long aesl_llvm_cbe_155_count = 0;
  static  unsigned long long aesl_llvm_cbe_156_count = 0;
  static  unsigned long long aesl_llvm_cbe_157_count = 0;
  static  unsigned long long aesl_llvm_cbe_158_count = 0;
  unsigned long long llvm_cbe_tmp__31;
  static  unsigned long long aesl_llvm_cbe_159_count = 0;
  unsigned long long llvm_cbe_tmp__32;
  static  unsigned long long aesl_llvm_cbe_160_count = 0;
  unsigned long long llvm_cbe_tmp__33;
  static  unsigned long long aesl_llvm_cbe_161_count = 0;
  unsigned long long llvm_cbe_tmp__34;
  static  unsigned long long aesl_llvm_cbe_162_count = 0;
  static  unsigned long long aesl_llvm_cbe_163_count = 0;
  static  unsigned long long aesl_llvm_cbe_164_count = 0;
  static  unsigned long long aesl_llvm_cbe_165_count = 0;
  static  unsigned long long aesl_llvm_cbe_166_count = 0;
  static  unsigned long long aesl_llvm_cbe_167_count = 0;
  static  unsigned long long aesl_llvm_cbe_168_count = 0;
  static  unsigned long long aesl_llvm_cbe_169_count = 0;
  static  unsigned long long aesl_llvm_cbe_170_count = 0;
  static  unsigned long long aesl_llvm_cbe_171_count = 0;
  unsigned int llvm_cbe_tmp__35;
  static  unsigned long long aesl_llvm_cbe_172_count = 0;
  l_struct_OC__iobuf *llvm_cbe_tmp__36;
  static  unsigned long long aesl_llvm_cbe_173_count = 0;
  static  unsigned long long aesl_llvm_cbe_174_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_187_count = 0;
  static  unsigned long long aesl_llvm_cbe_188_count = 0;
  static  unsigned long long aesl_llvm_cbe_189_count = 0;
  static  unsigned long long aesl_llvm_cbe_190_count = 0;
  static  unsigned long long aesl_llvm_cbe_191_count = 0;
  static  unsigned long long aesl_llvm_cbe_192_count = 0;
  unsigned int llvm_cbe_tmp__37;
  static  unsigned long long aesl_llvm_cbe_193_count = 0;
  static  unsigned long long aesl_llvm_cbe_194_count = 0;
  unsigned int llvm_cbe_tmp__38;
  static  unsigned long long aesl_llvm_cbe_195_count = 0;
  static  unsigned long long aesl_llvm_cbe_196_count = 0;
  static  unsigned long long aesl_llvm_cbe_197_count = 0;
   char *llvm_cbe_tmp__39;
  static  unsigned long long aesl_llvm_cbe_198_count = 0;
   char *llvm_cbe_tmp__40;
  static  unsigned long long aesl_llvm_cbe_199_count = 0;
   char *llvm_cbe_tmp__41;
  static  unsigned long long aesl_llvm_cbe_200_count = 0;
   char *llvm_cbe_tmp__42;
  static  unsigned long long aesl_llvm_cbe_201_count = 0;
   char *llvm_cbe_tmp__43;
  static  unsigned long long aesl_llvm_cbe_202_count = 0;
  static  unsigned long long aesl_llvm_cbe_203_count = 0;
  unsigned int llvm_cbe_tmp__44;
  static  unsigned long long aesl_llvm_cbe_204_count = 0;
  static  unsigned long long aesl_llvm_cbe_205_count = 0;
  static  unsigned long long aesl_llvm_cbe_206_count = 0;
  unsigned int llvm_cbe_tmp__45;
  static  unsigned long long aesl_llvm_cbe_207_count = 0;
  static  unsigned long long aesl_llvm_cbe_208_count = 0;
  static  unsigned long long aesl_llvm_cbe_209_count = 0;
  static  unsigned long long aesl_llvm_cbe_210_count = 0;
  static  unsigned long long aesl_llvm_cbe_211_count = 0;
  static  unsigned long long aesl_llvm_cbe_212_count = 0;
  static  unsigned long long aesl_llvm_cbe_213_count = 0;
  unsigned int llvm_cbe_tmp__46;
  static  unsigned long long aesl_llvm_cbe_214_count = 0;
  unsigned int llvm_cbe_tmp__47;
  static  unsigned long long aesl_llvm_cbe_215_count = 0;
  unsigned int llvm_cbe_tmp__48;
  static  unsigned long long aesl_llvm_cbe_216_count = 0;
  static  unsigned long long aesl_llvm_cbe_217_count = 0;
  static  unsigned long long aesl_llvm_cbe_218_count = 0;
  unsigned int llvm_cbe_tmp__49;
  static  unsigned long long aesl_llvm_cbe_219_count = 0;
  static  unsigned long long aesl_llvm_cbe_220_count = 0;
  static  unsigned long long aesl_llvm_cbe_221_count = 0;
  static  unsigned long long aesl_llvm_cbe_222_count = 0;
  unsigned int llvm_cbe_tmp__50;
  static  unsigned long long aesl_llvm_cbe_223_count = 0;
  static  unsigned long long aesl_llvm_cbe_224_count = 0;
  static  unsigned long long aesl_llvm_cbe_225_count = 0;
  unsigned int llvm_cbe_tmp__51;
  static  unsigned long long aesl_llvm_cbe_226_count = 0;
  static  unsigned long long aesl_llvm_cbe_227_count = 0;
  static  unsigned long long aesl_llvm_cbe_228_count = 0;
  static  unsigned long long aesl_llvm_cbe_229_count = 0;
  static  unsigned long long aesl_llvm_cbe_230_count = 0;
  static  unsigned long long aesl_llvm_cbe_231_count = 0;
  static  unsigned long long aesl_llvm_cbe_232_count = 0;
  unsigned long long llvm_cbe_tmp__52;
  static  unsigned long long aesl_llvm_cbe_233_count = 0;
  unsigned int llvm_cbe_tmp__53;
  static  unsigned long long aesl_llvm_cbe_234_count = 0;
  static  unsigned long long aesl_llvm_cbe_235_count = 0;
  static  unsigned long long aesl_llvm_cbe_236_count = 0;
  static  unsigned long long aesl_llvm_cbe_237_count = 0;
  static  unsigned long long aesl_llvm_cbe_238_count = 0;
  static  unsigned long long aesl_llvm_cbe_239_count = 0;
  static  unsigned long long aesl_llvm_cbe_240_count = 0;
  unsigned long long llvm_cbe_tmp__54;
  static  unsigned long long aesl_llvm_cbe_241_count = 0;
  unsigned int llvm_cbe_tmp__55;
  static  unsigned long long aesl_llvm_cbe_242_count = 0;
  unsigned int llvm_cbe_tmp__56;
  static  unsigned long long aesl_llvm_cbe_243_count = 0;
  static  unsigned long long aesl_llvm_cbe_244_count = 0;
  static  unsigned long long aesl_llvm_cbe_245_count = 0;
  unsigned int llvm_cbe_tmp__57;
  static  unsigned long long aesl_llvm_cbe_246_count = 0;
  static  unsigned long long aesl_llvm_cbe_247_count = 0;
  unsigned int llvm_cbe_tmp__58;
  static  unsigned long long aesl_llvm_cbe_248_count = 0;
  static  unsigned long long aesl_llvm_cbe_249_count = 0;
  static  unsigned long long aesl_llvm_cbe_250_count = 0;
  static  unsigned long long aesl_llvm_cbe_251_count = 0;
  static  unsigned long long aesl_llvm_cbe_252_count = 0;
  static  unsigned long long aesl_llvm_cbe_253_count = 0;
  static  unsigned long long aesl_llvm_cbe_254_count = 0;
  static  unsigned long long aesl_llvm_cbe_255_count = 0;
  unsigned long long llvm_cbe_tmp__59;
  static  unsigned long long aesl_llvm_cbe_256_count = 0;
  static  unsigned long long aesl_llvm_cbe_257_count = 0;
  unsigned int llvm_cbe_tmp__60;
  static  unsigned long long aesl_llvm_cbe_258_count = 0;
  static  unsigned long long aesl_llvm_cbe_259_count = 0;
  static  unsigned long long aesl_llvm_cbe_260_count = 0;
  static  unsigned long long aesl_llvm_cbe_261_count = 0;
  static  unsigned long long aesl_llvm_cbe_262_count = 0;
  static  unsigned long long aesl_llvm_cbe_263_count = 0;
  static  unsigned long long aesl_llvm_cbe_264_count = 0;
  unsigned int llvm_cbe_tmp__61;
  static  unsigned long long aesl_llvm_cbe_265_count = 0;
  static  unsigned long long aesl_llvm_cbe_266_count = 0;
  static  unsigned long long aesl_llvm_cbe_267_count = 0;
  static  unsigned long long aesl_llvm_cbe_268_count = 0;
  static  unsigned long long aesl_llvm_cbe_269_count = 0;
  static  unsigned long long aesl_llvm_cbe_270_count = 0;
  static  unsigned long long aesl_llvm_cbe_271_count = 0;
  static  unsigned long long aesl_llvm_cbe_272_count = 0;
  static  unsigned long long aesl_llvm_cbe_273_count = 0;
  static  unsigned long long aesl_llvm_cbe_274_count = 0;
  unsigned long long llvm_cbe_tmp__62;
  static  unsigned long long aesl_llvm_cbe_275_count = 0;
  unsigned int llvm_cbe_tmp__63;
  static  unsigned long long aesl_llvm_cbe_276_count = 0;
  static  unsigned long long aesl_llvm_cbe_277_count = 0;
  static  unsigned long long aesl_llvm_cbe_278_count = 0;
  static  unsigned long long aesl_llvm_cbe_279_count = 0;
  static  unsigned long long aesl_llvm_cbe_280_count = 0;
  static  unsigned long long aesl_llvm_cbe_281_count = 0;
  static  unsigned long long aesl_llvm_cbe_282_count = 0;
  unsigned int llvm_cbe_tmp__64;
  static  unsigned long long aesl_llvm_cbe_283_count = 0;
  static  unsigned long long aesl_llvm_cbe_284_count = 0;
  static  unsigned long long aesl_llvm_cbe_285_count = 0;
  static  unsigned long long aesl_llvm_cbe_286_count = 0;
  static  unsigned long long aesl_llvm_cbe_287_count = 0;
  static  unsigned long long aesl_llvm_cbe_288_count = 0;
  static  unsigned long long aesl_llvm_cbe_289_count = 0;
  static  unsigned long long aesl_llvm_cbe_290_count = 0;
  unsigned long long llvm_cbe_tmp__65;
  static  unsigned long long aesl_llvm_cbe_291_count = 0;
  unsigned int llvm_cbe_tmp__66;
  static  unsigned long long aesl_llvm_cbe_292_count = 0;
  static  unsigned long long aesl_llvm_cbe_293_count = 0;
  static  unsigned long long aesl_llvm_cbe_294_count = 0;
  static  unsigned long long aesl_llvm_cbe_295_count = 0;
  static  unsigned long long aesl_llvm_cbe_296_count = 0;
  static  unsigned long long aesl_llvm_cbe_297_count = 0;
  static  unsigned long long aesl_llvm_cbe_298_count = 0;
  unsigned long long llvm_cbe_tmp__67;
  static  unsigned long long aesl_llvm_cbe_299_count = 0;
  static  unsigned long long aesl_llvm_cbe_fputc_count = 0;
  unsigned int llvm_cbe_fputc;
  static  unsigned long long aesl_llvm_cbe_300_count = 0;
  static  unsigned long long aesl_llvm_cbe_301_count = 0;
  static  unsigned long long aesl_llvm_cbe_302_count = 0;
  static  unsigned long long aesl_llvm_cbe_303_count = 0;
  static  unsigned long long aesl_llvm_cbe_304_count = 0;
  static  unsigned long long aesl_llvm_cbe_305_count = 0;
  static  unsigned long long aesl_llvm_cbe_306_count = 0;
  unsigned long long llvm_cbe_tmp__68;
  static  unsigned long long aesl_llvm_cbe_307_count = 0;
  unsigned int llvm_cbe_tmp__69;
  static  unsigned long long aesl_llvm_cbe_308_count = 0;
  static  unsigned long long aesl_llvm_cbe_309_count = 0;
  static  unsigned long long aesl_llvm_cbe_310_count = 0;
  static  unsigned long long aesl_llvm_cbe_311_count = 0;
  static  unsigned long long aesl_llvm_cbe_312_count = 0;
  static  unsigned long long aesl_llvm_cbe_313_count = 0;
  static  unsigned long long aesl_llvm_cbe_314_count = 0;
  unsigned int llvm_cbe_tmp__70;
  static  unsigned long long aesl_llvm_cbe_315_count = 0;
  static  unsigned long long aesl_llvm_cbe_316_count = 0;
  static  unsigned long long aesl_llvm_cbe_317_count = 0;
  static  unsigned long long aesl_llvm_cbe_318_count = 0;
  static  unsigned long long aesl_llvm_cbe_319_count = 0;
  static  unsigned long long aesl_llvm_cbe_320_count = 0;
  static  unsigned long long aesl_llvm_cbe_321_count = 0;
  static  unsigned long long aesl_llvm_cbe_322_count = 0;
  unsigned long long llvm_cbe_tmp__71;
  static  unsigned long long aesl_llvm_cbe_323_count = 0;
  static  unsigned long long aesl_llvm_cbe_324_count = 0;
  static  unsigned long long aesl_llvm_cbe_325_count = 0;
  static  unsigned long long aesl_llvm_cbe_326_count = 0;
  static  unsigned long long aesl_llvm_cbe_327_count = 0;
  static  unsigned long long aesl_llvm_cbe_328_count = 0;
  static  unsigned long long aesl_llvm_cbe_329_count = 0;
  unsigned long long llvm_cbe_tmp__72;
  static  unsigned long long aesl_llvm_cbe_330_count = 0;
  static  unsigned long long aesl_llvm_cbe_331_count = 0;
  static  unsigned long long aesl_llvm_cbe_332_count = 0;
  static  unsigned long long aesl_llvm_cbe_333_count = 0;
  static  unsigned long long aesl_llvm_cbe_334_count = 0;
  unsigned int llvm_cbe_tmp__73;
  static  unsigned long long aesl_llvm_cbe_335_count = 0;
  static  unsigned long long aesl_llvm_cbe_336_count = 0;
  static  unsigned long long aesl_llvm_cbe_337_count = 0;
  unsigned int llvm_cbe_tmp__74;
  static  unsigned long long aesl_llvm_cbe_338_count = 0;
  static  unsigned long long aesl_llvm_cbe_339_count = 0;
  static  unsigned long long aesl_llvm_cbe_puts_count = 0;
  unsigned int llvm_cbe_puts;
  static  unsigned long long aesl_llvm_cbe_340_count = 0;
  static  unsigned long long aesl_llvm_cbe_341_count = 0;
  unsigned int llvm_cbe_tmp__75;
  static  unsigned long long aesl_llvm_cbe_342_count = 0;
  unsigned int llvm_cbe_tmp__76;
  static  unsigned long long aesl_llvm_cbe_343_count = 0;
  static  unsigned long long aesl_llvm_cbe_344_count = 0;
  unsigned int llvm_cbe_tmp__77;
  unsigned int llvm_cbe_tmp__77__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_345_count = 0;

  CODE_FOR_MAIN();
const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @main\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds [32 x i8]* %%fn_req, i64 0, i64 0, !dbg !20 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_37_count);
  llvm_cbe_tmp__4 = ( char *)(&llvm_cbe_fn_req[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = call i32 (i8*, i8*, ...)* @sprintf(i8* %%1, i8* getelementptr inbounds ([18 x i8]* @aesl_internal_.str, i64 0, i64 0), i32 2544) nounwind, !dbg !20 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_38_count);
  sprintf(( char *)llvm_cbe_tmp__4, ( char *)((&aesl_internal__OC_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 18
#endif
])), 2544u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",2544u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__5);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = call %%struct._iobuf* @fopen(i8* %%1, i8* getelementptr inbounds ([2 x i8]* @aesl_internal_.str1, i64 0, i64 0)) nounwind, !dbg !20 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_39_count);
  llvm_cbe_tmp__6 = (l_struct_OC__iobuf *)aesl_fopen(( char *)llvm_cbe_tmp__4, ( char *)((&aesl_internal__OC_str1[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 2
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__6);
}
  if (((llvm_cbe_tmp__6) == (((l_struct_OC__iobuf *)/*NULL*/0)))) {
    goto llvm_cbe_tmp__78;
  } else {
    goto llvm_cbe_tmp__79;
  }

llvm_cbe_tmp__78:
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([30 x i8]* @aesl_internal_.str2, i64 0, i64 0), i8* %%1) nounwind, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_59_count);
  printf(( char *)((&aesl_internal__OC_str2[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 30
#endif
])), ( char *)llvm_cbe_tmp__4);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__7);
}
  llvm_cbe_tmp__77__PHI_TEMPORARY = (unsigned int )4294967295u;   /* for PHI node */
  goto llvm_cbe_tmp__80;

llvm_cbe_tmp__79:
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds [32 x i8]* %%fn_rsp, i64 0, i64 0, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_61_count);
  llvm_cbe_tmp__8 = ( char *)(&llvm_cbe_fn_rsp[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = call i32 (i8*, i8*, ...)* @sprintf(i8* %%8, i8* getelementptr inbounds ([18 x i8]* @aesl_internal_.str3, i64 0, i64 0), i32 2544) nounwind, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_62_count);
  sprintf(( char *)llvm_cbe_tmp__8, ( char *)((&aesl_internal__OC_str3[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 18
#endif
])), 2544u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",2544u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__9);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = call %%struct._iobuf* @fopen(i8* %%8, i8* getelementptr inbounds ([2 x i8]* @aesl_internal_.str1, i64 0, i64 0)) nounwind, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_63_count);
  llvm_cbe_tmp__10 = (l_struct_OC__iobuf *)aesl_fopen(( char *)llvm_cbe_tmp__8, ( char *)((&aesl_internal__OC_str1[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 2
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__10);
}
  if (((llvm_cbe_tmp__10) == (((l_struct_OC__iobuf *)/*NULL*/0)))) {
    goto llvm_cbe_tmp__81;
  } else {
    llvm_cbe_storemerge14__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  }

llvm_cbe_tmp__81:
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([30 x i8]* @aesl_internal_.str2, i64 0, i64 0), i8* %%8) nounwind, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_78_count);
  printf(( char *)((&aesl_internal__OC_str2[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 30
#endif
])), ( char *)llvm_cbe_tmp__8);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__11);
}
  llvm_cbe_tmp__77__PHI_TEMPORARY = (unsigned int )4294967295u;   /* for PHI node */
  goto llvm_cbe_tmp__80;

  do {     /* Syntactic loop '.preheader' to make GCC happy */
llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge14 = phi i32 [ %%17, %%.preheader ], [ 0, %%7  for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_storemerge14_count);
  llvm_cbe_storemerge14 = (unsigned int )llvm_cbe_storemerge14__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge14 = 0x%X",llvm_cbe_storemerge14);
printf("\n = 0x%X",llvm_cbe_tmp__15);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = trunc i32 %%storemerge14 to i8, !dbg !24 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_80_count);
  llvm_cbe_tmp__12 = (unsigned char )((unsigned char )llvm_cbe_storemerge14&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__12);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = sext i32 %%storemerge14 to i64, !dbg !24 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_81_count);
  llvm_cbe_tmp__13 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge14);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__13);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = getelementptr inbounds [48 x i8]* %%entropy_input, i64 0, i64 %%15, !dbg !24 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_82_count);
  llvm_cbe_tmp__14 = ( char *)(&llvm_cbe_entropy_input[(((signed long long )llvm_cbe_tmp__13))
#ifdef AESL_BC_SIM
 % 48
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__13));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__13) < 48 && "Write access out of array 'entropy_input' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%14, i8* %%16, align 1, !dbg !24 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_83_count);
  *llvm_cbe_tmp__14 = llvm_cbe_tmp__12;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__12);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = add nsw i32 %%storemerge14, 1, !dbg !24 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_84_count);
  llvm_cbe_tmp__15 = (unsigned int )((unsigned int )(llvm_cbe_storemerge14&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__15&4294967295ull)));
  if (((llvm_cbe_tmp__15&4294967295U) == (48u&4294967295U))) {
    goto llvm_cbe_tmp__82;
  } else {
    llvm_cbe_storemerge14__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__15;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  }

  } while (1); /* end of syntactic loop '.preheader' */
llvm_cbe_tmp__82:
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = getelementptr inbounds [48 x i8]* %%entropy_input, i64 0, i64 0, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_95_count);
  llvm_cbe_tmp__16 = ( char *)(&llvm_cbe_entropy_input[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 48
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @randombytes_init(i8* %%19, i8* null, i32 256) nounwind, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_96_count);
  randombytes_init(( char *)llvm_cbe_tmp__16, ( char *)(( char *)/*NULL*/0), 256u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",256u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = getelementptr inbounds [48 x i8]* %%seed, i64 0, i64 0, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_106_count);
  llvm_cbe_tmp__17 = ( char *)(&llvm_cbe_seed[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 48
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = getelementptr inbounds [3300 x i8]* %%msg, i64 0, i64 0, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_107_count);
  llvm_cbe_tmp__18 = ( char *)(&llvm_cbe_msg[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3300
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = call i32 (%%struct._iobuf*, i8*, ...)* @fprintf(%%struct._iobuf* %%3, i8* getelementptr inbounds ([12 x i8]* @aesl_internal_.str4, i64 0, i64 0), i32 0) nounwind, !dbg !20 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_108_count);
  fprintf((l_struct_OC__iobuf *)llvm_cbe_tmp__6, ( char *)((&aesl_internal__OC_str4[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 12
#endif
])), 0u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",0u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__19);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = call i32 @randombytes(i8* %%20, i64 48) nounwind, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_109_count);
  randombytes(( char *)llvm_cbe_tmp__17, 48ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",48ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__20);
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @fprintBstr(%%struct._iobuf* %%3, i8* getelementptr inbounds ([8 x i8]* @aesl_internal_.str5, i64 0, i64 0), i8* %%20, i64 48), !dbg !20 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_110_count);
  fprintBstr((l_struct_OC__iobuf *)llvm_cbe_tmp__6, ( char *)((&aesl_internal__OC_str5[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 8
#endif
])), ( char *)llvm_cbe_tmp__17, 48ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",48ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = call i32 (%%struct._iobuf*, i8*, ...)* @fprintf(%%struct._iobuf* %%3, i8* getelementptr inbounds ([13 x i8]* @aesl_internal_.str6, i64 0, i64 0), i64 33) nounwind, !dbg !20 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_116_count);
  fprintf((l_struct_OC__iobuf *)llvm_cbe_tmp__6, ( char *)((&aesl_internal__OC_str6[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 13
#endif
])), 33ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",33ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__21);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = call i32 @randombytes(i8* %%21, i64 33) nounwind, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_120_count);
  randombytes(( char *)llvm_cbe_tmp__18, 33ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",33ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__22);
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @fprintBstr(%%struct._iobuf* %%3, i8* getelementptr inbounds ([7 x i8]* @aesl_internal_.str7, i64 0, i64 0), i8* %%21, i64 33), !dbg !20 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_124_count);
  fprintBstr((l_struct_OC__iobuf *)llvm_cbe_tmp__6, ( char *)((&aesl_internal__OC_str7[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 7
#endif
])), ( char *)llvm_cbe_tmp__18, 33ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",33ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = call i64 @fwrite(i8* getelementptr inbounds ([6 x i8]* @aesl_internal_.str8, i64 0, i64 0), i64 5, i64 1, %%struct._iobuf* %%3), !dbg !20 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_125_count);
  fwrite(( char *)((&aesl_internal__OC_str8[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 6
#endif
])), 5ull, 1ull, (l_struct_OC__iobuf *)llvm_cbe_tmp__6);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",5ull);
printf("\nArgument  = 0x%I64X",1ull);
printf("\nReturn  = 0x%I64X",llvm_cbe_tmp__23);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = call i64 @fwrite(i8* getelementptr inbounds ([6 x i8]* @aesl_internal_.str9, i64 0, i64 0), i64 5, i64 1, %%struct._iobuf* %%3), !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_126_count);
  fwrite(( char *)((&aesl_internal__OC_str9[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 6
#endif
])), 5ull, 1ull, (l_struct_OC__iobuf *)llvm_cbe_tmp__6);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",5ull);
printf("\nArgument  = 0x%I64X",1ull);
printf("\nReturn  = 0x%I64X",llvm_cbe_tmp__24);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = call i64 @fwrite(i8* getelementptr inbounds ([9 x i8]* @aesl_internal_.str10, i64 0, i64 0), i64 8, i64 1, %%struct._iobuf* %%3), !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_127_count);
  fwrite(( char *)((&aesl_internal__OC_str10[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 9
#endif
])), 8ull, 1ull, (l_struct_OC__iobuf *)llvm_cbe_tmp__6);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",8ull);
printf("\nArgument  = 0x%I64X",1ull);
printf("\nReturn  = 0x%I64X",llvm_cbe_tmp__25);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = call i64 @fwrite(i8* getelementptr inbounds ([7 x i8]* @aesl_internal_.str11, i64 0, i64 0), i64 6, i64 1, %%struct._iobuf* %%3), !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_128_count);
  fwrite(( char *)((&aesl_internal__OC_str11[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 7
#endif
])), 6ull, 1ull, (l_struct_OC__iobuf *)llvm_cbe_tmp__6);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",6ull);
printf("\nArgument  = 0x%I64X",1ull);
printf("\nReturn  = 0x%I64X",llvm_cbe_tmp__26);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = call i32 (%%struct._iobuf*, i8*, ...)* @fprintf(%%struct._iobuf* %%3, i8* getelementptr inbounds ([12 x i8]* @aesl_internal_.str4, i64 0, i64 0), i32 1) nounwind, !dbg !20 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_138_count);
  fprintf((l_struct_OC__iobuf *)llvm_cbe_tmp__6, ( char *)((&aesl_internal__OC_str4[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 12
#endif
])), 1u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",1u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__27);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = call i32 @randombytes(i8* %%20, i64 48) nounwind, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_139_count);
  randombytes(( char *)llvm_cbe_tmp__17, 48ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",48ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__28);
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @fprintBstr(%%struct._iobuf* %%3, i8* getelementptr inbounds ([8 x i8]* @aesl_internal_.str5, i64 0, i64 0), i8* %%20, i64 48), !dbg !20 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_140_count);
  fprintBstr((l_struct_OC__iobuf *)llvm_cbe_tmp__6, ( char *)((&aesl_internal__OC_str5[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 8
#endif
])), ( char *)llvm_cbe_tmp__17, 48ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",48ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  store i64 66, i64* %%mlen, align 8, !dbg !24 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_147_count);
  *(&llvm_cbe_mlen) = 66ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 66ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = call i32 (%%struct._iobuf*, i8*, ...)* @fprintf(%%struct._iobuf* %%3, i8* getelementptr inbounds ([13 x i8]* @aesl_internal_.str6, i64 0, i64 0), i64 66) nounwind, !dbg !20 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_149_count);
  fprintf((l_struct_OC__iobuf *)llvm_cbe_tmp__6, ( char *)((&aesl_internal__OC_str6[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 13
#endif
])), 66ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",66ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__29);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = call i32 @randombytes(i8* %%21, i64 66) nounwind, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_153_count);
  randombytes(( char *)llvm_cbe_tmp__18, 66ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",66ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__30);
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @fprintBstr(%%struct._iobuf* %%3, i8* getelementptr inbounds ([7 x i8]* @aesl_internal_.str7, i64 0, i64 0), i8* %%21, i64 66), !dbg !20 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_157_count);
  fprintBstr((l_struct_OC__iobuf *)llvm_cbe_tmp__6, ( char *)((&aesl_internal__OC_str7[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 7
#endif
])), ( char *)llvm_cbe_tmp__18, 66ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",66ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = call i64 @fwrite(i8* getelementptr inbounds ([6 x i8]* @aesl_internal_.str8, i64 0, i64 0), i64 5, i64 1, %%struct._iobuf* %%3), !dbg !20 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_158_count);
  fwrite(( char *)((&aesl_internal__OC_str8[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 6
#endif
])), 5ull, 1ull, (l_struct_OC__iobuf *)llvm_cbe_tmp__6);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",5ull);
printf("\nArgument  = 0x%I64X",1ull);
printf("\nReturn  = 0x%I64X",llvm_cbe_tmp__31);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = call i64 @fwrite(i8* getelementptr inbounds ([6 x i8]* @aesl_internal_.str9, i64 0, i64 0), i64 5, i64 1, %%struct._iobuf* %%3), !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_159_count);
  fwrite(( char *)((&aesl_internal__OC_str9[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 6
#endif
])), 5ull, 1ull, (l_struct_OC__iobuf *)llvm_cbe_tmp__6);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",5ull);
printf("\nArgument  = 0x%I64X",1ull);
printf("\nReturn  = 0x%I64X",llvm_cbe_tmp__32);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = call i64 @fwrite(i8* getelementptr inbounds ([9 x i8]* @aesl_internal_.str10, i64 0, i64 0), i64 8, i64 1, %%struct._iobuf* %%3), !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_160_count);
  fwrite(( char *)((&aesl_internal__OC_str10[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 9
#endif
])), 8ull, 1ull, (l_struct_OC__iobuf *)llvm_cbe_tmp__6);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",8ull);
printf("\nArgument  = 0x%I64X",1ull);
printf("\nReturn  = 0x%I64X",llvm_cbe_tmp__33);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = call i64 @fwrite(i8* getelementptr inbounds ([7 x i8]* @aesl_internal_.str11, i64 0, i64 0), i64 6, i64 1, %%struct._iobuf* %%3), !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_161_count);
  fwrite(( char *)((&aesl_internal__OC_str11[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 7
#endif
])), 6ull, 1ull, (l_struct_OC__iobuf *)llvm_cbe_tmp__6);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",6ull);
printf("\nArgument  = 0x%I64X",1ull);
printf("\nReturn  = 0x%I64X",llvm_cbe_tmp__34);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = call i32 @fclose(%%struct._iobuf* %%3) nounwind, !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_171_count);
  fclose((l_struct_OC__iobuf *)llvm_cbe_tmp__6);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__35);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = call %%struct._iobuf* @fopen(i8* %%1, i8* getelementptr inbounds ([2 x i8]* @aesl_internal_.str12, i64 0, i64 0)) nounwind, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_172_count);
  llvm_cbe_tmp__36 = (l_struct_OC__iobuf *)aesl_fopen(( char *)llvm_cbe_tmp__4, ( char *)((&aesl_internal__OC_str12[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 2
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__36);
}
  if (((llvm_cbe_tmp__36) == (((l_struct_OC__iobuf *)/*NULL*/0)))) {
    goto llvm_cbe_tmp__83;
  } else {
    goto llvm_cbe_tmp__84;
  }

llvm_cbe_tmp__83:
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([29 x i8]* @aesl_internal_.str13, i64 0, i64 0), i8* %%1) nounwind, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_192_count);
  printf(( char *)((&aesl_internal__OC_str13[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 29
#endif
])), ( char *)llvm_cbe_tmp__4);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__37);
}
  llvm_cbe_tmp__77__PHI_TEMPORARY = (unsigned int )4294967295u;   /* for PHI node */
  goto llvm_cbe_tmp__80;

llvm_cbe_tmp__84:
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = call i32 (%%struct._iobuf*, i8*, ...)* @fprintf(%%struct._iobuf* %%10, i8* getelementptr inbounds ([7 x i8]* @aesl_internal_.str14, i64 0, i64 0), i8* getelementptr inbounds ([11 x i8]* @aesl_internal_.str15, i64 0, i64 0)) nounwind, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_194_count);
  fprintf((l_struct_OC__iobuf *)llvm_cbe_tmp__10, ( char *)((&aesl_internal__OC_str14[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 7
#endif
])), ( char *)((&aesl_internal__OC_str15[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 11
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__38);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = getelementptr inbounds [3300 x i8]* %%m, i64 0, i64 0, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_197_count);
  llvm_cbe_tmp__39 = ( char *)(&llvm_cbe_m[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3300
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = getelementptr inbounds [1312 x i8]* %%pk, i64 0, i64 0, !dbg !26 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_198_count);
  llvm_cbe_tmp__40 = ( char *)(&llvm_cbe_pk[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1312
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = getelementptr inbounds [2544 x i8]* %%sk, i64 0, i64 0, !dbg !26 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_199_count);
  llvm_cbe_tmp__41 = ( char *)(&llvm_cbe_sk[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 2544
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = getelementptr inbounds [5720 x i8]* %%sm, i64 0, i64 0, !dbg !26 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_200_count);
  llvm_cbe_tmp__42 = ( char *)(&llvm_cbe_sm[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5720
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = getelementptr inbounds [5720 x i8]* %%m1, i64 0, i64 0, !dbg !26 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_201_count);
  llvm_cbe_tmp__43 = ( char *)(&llvm_cbe_m1[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5720
#endif
]);
if (AESL_DEBUG_TRACE) {
}
  goto llvm_cbe_tmp__85;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__85:
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = call i32 @FindMarker(%%struct._iobuf* %%39, i8* getelementptr inbounds ([9 x i8]* @aesl_internal_.str16, i64 0, i64 0)), !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_203_count);
  llvm_cbe_tmp__44 = (unsigned int )FindMarker((l_struct_OC__iobuf *)llvm_cbe_tmp__36, ( char *)((&aesl_internal__OC_str16[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 9
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__44);
}
  if (((llvm_cbe_tmp__44&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe_tmp__86;
  } else {
    goto llvm_cbe_tmp__87;
  }

llvm_cbe_tmp__88:
if (AESL_DEBUG_TRACE)
printf("\n  %%104 = call i32 @memcmp(i8* %%45, i8* %%49, i64 %%98) nounwind, !dbg !29 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_337_count);
  llvm_cbe_tmp__74 = (unsigned int )memcmp(( char *)llvm_cbe_tmp__39, ( char *)llvm_cbe_tmp__43, llvm_cbe_tmp__71);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__71);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__74);
}
  if (((llvm_cbe_tmp__74&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe_tmp__85;
  } else {
    goto llvm_cbe_tmp__89;
  }

llvm_cbe_tmp__90:
if (AESL_DEBUG_TRACE)
printf("\n  %%98 = load i64* %%mlen, align 8, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_322_count);
  llvm_cbe_tmp__71 = (unsigned long long )*(&llvm_cbe_mlen);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__71);
if (AESL_DEBUG_TRACE)
printf("\n  %%99 = load i64* %%mlen1, align 8, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_329_count);
  llvm_cbe_tmp__72 = (unsigned long long )*(&llvm_cbe_mlen1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__72);
  if (((llvm_cbe_tmp__71&18446744073709551615ULL) == (llvm_cbe_tmp__72&18446744073709551615ULL))) {
    goto llvm_cbe_tmp__88;
  } else {
    goto llvm_cbe_tmp__91;
  }

llvm_cbe_tmp__92:
if (AESL_DEBUG_TRACE)
printf("\n  %%89 = load i64* %%smlen, align 8, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_290_count);
  llvm_cbe_tmp__65 = (unsigned long long )*(&llvm_cbe_smlen);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__65);
if (AESL_DEBUG_TRACE)
printf("\n  %%90 = call i32 (%%struct._iobuf*, i8*, ...)* @fprintf(%%struct._iobuf* %%10, i8* getelementptr inbounds ([14 x i8]* @aesl_internal_.str27, i64 0, i64 0), i64 %%89) nounwind, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_291_count);
  fprintf((l_struct_OC__iobuf *)llvm_cbe_tmp__10, ( char *)((&aesl_internal__OC_str27[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 14
#endif
])), llvm_cbe_tmp__65);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__65);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__66);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%91 = load i64* %%smlen, align 8, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_298_count);
  llvm_cbe_tmp__67 = (unsigned long long )*(&llvm_cbe_smlen);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__67);
if (AESL_DEBUG_TRACE)
printf("\n  call void @fprintBstr(%%struct._iobuf* %%10, i8* getelementptr inbounds ([6 x i8]* @aesl_internal_.str28, i64 0, i64 0), i8* %%48, i64 %%91), !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_299_count);
  fprintBstr((l_struct_OC__iobuf *)llvm_cbe_tmp__10, ( char *)((&aesl_internal__OC_str28[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 6
#endif
])), ( char *)llvm_cbe_tmp__42, llvm_cbe_tmp__67);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__67);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%fputc = call i32 @fputc(i32 10, %%struct._iobuf* %%10), !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_fputc_count);
  fputc(10u, (l_struct_OC__iobuf *)llvm_cbe_tmp__10);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",10u);
printf("\nReturn fputc = 0x%X",llvm_cbe_fputc);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%92 = load i64* %%smlen, align 8, !dbg !26 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_306_count);
  llvm_cbe_tmp__68 = (unsigned long long )*(&llvm_cbe_smlen);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__68);
if (AESL_DEBUG_TRACE)
printf("\n  %%93 = call i32 @pqcrystals_dilithium2_ref_open(i8* %%49, i64* %%mlen1, i8* %%48, i64 %%92, i8* %%46) nounwind, !dbg !26 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_307_count);
  llvm_cbe_tmp__69 = (unsigned int )pqcrystals_dilithium2_ref_open(( char *)llvm_cbe_tmp__43, (signed long long *)(&llvm_cbe_mlen1), ( char *)llvm_cbe_tmp__42, llvm_cbe_tmp__68, ( char *)llvm_cbe_tmp__40);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__68);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__69);
}
  if (((llvm_cbe_tmp__69&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe_tmp__90;
  } else {
    goto llvm_cbe_tmp__93;
  }

llvm_cbe_tmp__94:
if (AESL_DEBUG_TRACE)
printf("\n  call void @fprintBstr(%%struct._iobuf* %%10, i8* getelementptr inbounds ([6 x i8]* @aesl_internal_.str24, i64 0, i64 0), i8* %%46, i64 1312), !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_266_count);
  fprintBstr((l_struct_OC__iobuf *)llvm_cbe_tmp__10, ( char *)((&aesl_internal__OC_str24[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 6
#endif
])), ( char *)llvm_cbe_tmp__40, 1312ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",1312ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @fprintBstr(%%struct._iobuf* %%10, i8* getelementptr inbounds ([6 x i8]* @aesl_internal_.str25, i64 0, i64 0), i8* %%47, i64 2544), !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_267_count);
  fprintBstr((l_struct_OC__iobuf *)llvm_cbe_tmp__10, ( char *)((&aesl_internal__OC_str25[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 6
#endif
])), ( char *)llvm_cbe_tmp__41, 2544ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",2544ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%83 = load i64* %%mlen, align 8, !dbg !26 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_274_count);
  llvm_cbe_tmp__62 = (unsigned long long )*(&llvm_cbe_mlen);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__62);
if (AESL_DEBUG_TRACE)
printf("\n  %%84 = call i32 @pqcrystals_dilithium2_ref(i8* %%48, i64* %%smlen, i8* %%45, i64 %%83, i8* %%47) nounwind, !dbg !26 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_275_count);
  llvm_cbe_tmp__63 = (unsigned int )pqcrystals_dilithium2_ref(( char *)llvm_cbe_tmp__42, (signed long long *)(&llvm_cbe_smlen), ( char *)llvm_cbe_tmp__39, llvm_cbe_tmp__62, ( char *)llvm_cbe_tmp__41);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__62);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__63);
}
  if (((llvm_cbe_tmp__63&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe_tmp__92;
  } else {
    goto llvm_cbe_tmp__95;
  }

llvm_cbe_tmp__96:
if (AESL_DEBUG_TRACE)
printf("\n  %%77 = load i64* %%mlen, align 8, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_255_count);
  llvm_cbe_tmp__59 = (unsigned long long )*(&llvm_cbe_mlen);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__59);
if (AESL_DEBUG_TRACE)
printf("\n  call void @fprintBstr(%%struct._iobuf* %%10, i8* getelementptr inbounds ([7 x i8]* @aesl_internal_.str7, i64 0, i64 0), i8* %%45, i64 %%77), !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_256_count);
  fprintBstr((l_struct_OC__iobuf *)llvm_cbe_tmp__10, ( char *)((&aesl_internal__OC_str7[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 7
#endif
])), ( char *)llvm_cbe_tmp__39, llvm_cbe_tmp__59);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__59);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%78 = call i32 @pqcrystals_dilithium2_ref_keypair(i8* %%46, i8* %%47) nounwind, !dbg !26 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_257_count);
  llvm_cbe_tmp__60 = (unsigned int )pqcrystals_dilithium2_ref_keypair(( char *)llvm_cbe_tmp__40, ( char *)llvm_cbe_tmp__41);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__60);
}
  if (((llvm_cbe_tmp__60&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe_tmp__94;
  } else {
    goto llvm_cbe_tmp__97;
  }

llvm_cbe_tmp__98:
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = call i32 (%%struct._iobuf*, i8*, ...)* @fscanf(%%struct._iobuf* %%39, i8* getelementptr inbounds ([5 x i8]* @aesl_internal_.str20, i64 0, i64 0), i64* %%mlen) nounwind, !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_225_count);
  fscanf((l_struct_OC__iobuf *)llvm_cbe_tmp__36, ( char *)((&aesl_internal__OC_str20[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
])), (signed long long *)(&llvm_cbe_mlen));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__51);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = load i64* %%mlen, align 8, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_232_count);
  llvm_cbe_tmp__52 = (unsigned long long )*(&llvm_cbe_mlen);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__52);
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = call i32 (%%struct._iobuf*, i8*, ...)* @fprintf(%%struct._iobuf* %%10, i8* getelementptr inbounds ([13 x i8]* @aesl_internal_.str6, i64 0, i64 0), i64 %%66) nounwind, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_233_count);
  fprintf((l_struct_OC__iobuf *)llvm_cbe_tmp__10, ( char *)((&aesl_internal__OC_str6[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 13
#endif
])), llvm_cbe_tmp__52);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__52);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__53);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = load i64* %%mlen, align 8, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_240_count);
  llvm_cbe_tmp__54 = (unsigned long long )*(&llvm_cbe_mlen);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__54);
if (AESL_DEBUG_TRACE)
printf("\n  %%69 = trunc i64 %%68 to i32, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_241_count);
  llvm_cbe_tmp__55 = (unsigned int )((unsigned int )llvm_cbe_tmp__54&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__55);
if (AESL_DEBUG_TRACE)
printf("\n  %%70 = call i32 @ReadHex(%%struct._iobuf* %%39, i8* %%45, i32 %%69, i8* getelementptr inbounds ([7 x i8]* @aesl_internal_.str7, i64 0, i64 0)), !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_242_count);
  llvm_cbe_tmp__56 = (unsigned int )ReadHex((l_struct_OC__iobuf *)llvm_cbe_tmp__36, ( char *)llvm_cbe_tmp__39, llvm_cbe_tmp__55, ( char *)((&aesl_internal__OC_str7[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 7
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__55);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__56);
}
  if (((llvm_cbe_tmp__56&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe_tmp__99;
  } else {
    goto llvm_cbe_tmp__96;
  }

llvm_cbe_tmp__100:
if (AESL_DEBUG_TRACE)
printf("\n  call void @fprintBstr(%%struct._iobuf* %%10, i8* getelementptr inbounds ([8 x i8]* @aesl_internal_.str5, i64 0, i64 0), i8* %%20, i64 48), !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_220_count);
  fprintBstr((l_struct_OC__iobuf *)llvm_cbe_tmp__10, ( char *)((&aesl_internal__OC_str5[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 8
#endif
])), ( char *)llvm_cbe_tmp__17, 48ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",48ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @randombytes_init(i8* %%20, i8* null, i32 256) nounwind, !dbg !27 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_221_count);
  randombytes_init(( char *)llvm_cbe_tmp__17, ( char *)(( char *)/*NULL*/0), 256u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",256u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = call i32 @FindMarker(%%struct._iobuf* %%39, i8* getelementptr inbounds ([8 x i8]* @aesl_internal_.str19, i64 0, i64 0)), !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_222_count);
  llvm_cbe_tmp__50 = (unsigned int )FindMarker((l_struct_OC__iobuf *)llvm_cbe_tmp__36, ( char *)((&aesl_internal__OC_str19[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 8
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__50);
}
  if (((llvm_cbe_tmp__50&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe_tmp__101;
  } else {
    goto llvm_cbe_tmp__98;
  }

llvm_cbe_tmp__87:
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = call i32 (%%struct._iobuf*, i8*, ...)* @fscanf(%%struct._iobuf* %%39, i8* getelementptr inbounds ([3 x i8]* @aesl_internal_.str17, i64 0, i64 0), i32* %%count) nounwind, !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_206_count);
  fscanf((l_struct_OC__iobuf *)llvm_cbe_tmp__36, ( char *)((&aesl_internal__OC_str17[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
])), (signed int *)(&llvm_cbe_count));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__45);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = load i32* %%count, align 4, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_213_count);
  llvm_cbe_tmp__46 = (unsigned int )*(&llvm_cbe_count);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__46);
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = call i32 (%%struct._iobuf*, i8*, ...)* @fprintf(%%struct._iobuf* %%10, i8* getelementptr inbounds ([12 x i8]* @aesl_internal_.str4, i64 0, i64 0), i32 %%55) nounwind, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_214_count);
  fprintf((l_struct_OC__iobuf *)llvm_cbe_tmp__10, ( char *)((&aesl_internal__OC_str4[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 12
#endif
])), llvm_cbe_tmp__46);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__46);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__47);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = call i32 @ReadHex(%%struct._iobuf* %%39, i8* %%20, i32 48, i8* getelementptr inbounds ([8 x i8]* @aesl_internal_.str5, i64 0, i64 0)), !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_215_count);
  llvm_cbe_tmp__48 = (unsigned int )ReadHex((l_struct_OC__iobuf *)llvm_cbe_tmp__36, ( char *)llvm_cbe_tmp__17, 48u, ( char *)((&aesl_internal__OC_str5[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 8
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",48u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__48);
}
  if (((llvm_cbe_tmp__48&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe_tmp__102;
  } else {
    goto llvm_cbe_tmp__100;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__102:
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([40 x i8]* @aesl_internal_.str18, i64 0, i64 0), i8* %%1) nounwind, !dbg !26 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_218_count);
  printf(( char *)((&aesl_internal__OC_str18[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 40
#endif
])), ( char *)llvm_cbe_tmp__4);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__49);
}
  llvm_cbe_tmp__77__PHI_TEMPORARY = (unsigned int )4294967293u;   /* for PHI node */
  goto llvm_cbe_tmp__80;

llvm_cbe_tmp__101:
if (AESL_DEBUG_TRACE)
printf("\n  %%73 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([40 x i8]* @aesl_internal_.str21, i64 0, i64 0), i8* %%1) nounwind, !dbg !27 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_245_count);
  printf(( char *)((&aesl_internal__OC_str21[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 40
#endif
])), ( char *)llvm_cbe_tmp__4);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__57);
}
  llvm_cbe_tmp__77__PHI_TEMPORARY = (unsigned int )4294967293u;   /* for PHI node */
  goto llvm_cbe_tmp__80;

llvm_cbe_tmp__99:
if (AESL_DEBUG_TRACE)
printf("\n  %%75 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([39 x i8]* @aesl_internal_.str22, i64 0, i64 0), i8* %%1) nounwind, !dbg !27 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_247_count);
  printf(( char *)((&aesl_internal__OC_str22[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 39
#endif
])), ( char *)llvm_cbe_tmp__4);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__58);
}
  llvm_cbe_tmp__77__PHI_TEMPORARY = (unsigned int )4294967293u;   /* for PHI node */
  goto llvm_cbe_tmp__80;

llvm_cbe_tmp__97:
if (AESL_DEBUG_TRACE)
printf("\n  %%81 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([35 x i8]* @aesl_internal_.str23, i64 0, i64 0), i32 %%78) nounwind, !dbg !27 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_264_count);
  printf(( char *)((&aesl_internal__OC_str23[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 35
#endif
])), llvm_cbe_tmp__60);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__60);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__61);
}
  llvm_cbe_tmp__77__PHI_TEMPORARY = (unsigned int )4294967292u;   /* for PHI node */
  goto llvm_cbe_tmp__80;

llvm_cbe_tmp__95:
if (AESL_DEBUG_TRACE)
printf("\n  %%87 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([27 x i8]* @aesl_internal_.str26, i64 0, i64 0), i32 %%84) nounwind, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_282_count);
  printf(( char *)((&aesl_internal__OC_str26[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 27
#endif
])), llvm_cbe_tmp__63);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__63);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__64);
}
  llvm_cbe_tmp__77__PHI_TEMPORARY = (unsigned int )4294967292u;   /* for PHI node */
  goto llvm_cbe_tmp__80;

llvm_cbe_tmp__93:
if (AESL_DEBUG_TRACE)
printf("\n  %%96 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([32 x i8]* @aesl_internal_.str30, i64 0, i64 0), i32 %%93) nounwind, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_314_count);
  printf(( char *)((&aesl_internal__OC_str30[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 32
#endif
])), llvm_cbe_tmp__69);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__69);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__70);
}
  llvm_cbe_tmp__77__PHI_TEMPORARY = (unsigned int )4294967292u;   /* for PHI node */
  goto llvm_cbe_tmp__80;

llvm_cbe_tmp__91:
if (AESL_DEBUG_TRACE)
printf("\n  %%102 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([67 x i8]* @aesl_internal_.str31, i64 0, i64 0), i64 %%99, i64 %%98) nounwind, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_334_count);
  printf(( char *)((&aesl_internal__OC_str31[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 67
#endif
])), llvm_cbe_tmp__72, llvm_cbe_tmp__71);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__72);
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__71);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__73);
}
  llvm_cbe_tmp__77__PHI_TEMPORARY = (unsigned int )4294967292u;   /* for PHI node */
  goto llvm_cbe_tmp__80;

llvm_cbe_tmp__89:
if (AESL_DEBUG_TRACE)
printf("\n  %%puts = call i32 @puts(i8* getelementptr inbounds ([40 x i8]* @aesl_internal_str, i64 0, i64 0)), !dbg !29 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_puts_count);
  puts(( char *)((&aesl_internal_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 40
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn puts = 0x%X",llvm_cbe_puts);
}
  llvm_cbe_tmp__77__PHI_TEMPORARY = (unsigned int )4294967292u;   /* for PHI node */
  goto llvm_cbe_tmp__80;

llvm_cbe_tmp__86:
if (AESL_DEBUG_TRACE)
printf("\n  %%108 = call i32 @fclose(%%struct._iobuf* %%39) nounwind, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_341_count);
  fclose((l_struct_OC__iobuf *)llvm_cbe_tmp__36);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__75);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%109 = call i32 @fclose(%%struct._iobuf* %%10) nounwind, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_342_count);
  fclose((l_struct_OC__iobuf *)llvm_cbe_tmp__10);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__76);
}
  llvm_cbe_tmp__77__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__80;

llvm_cbe_tmp__80:
if (AESL_DEBUG_TRACE)
printf("\n  %%111 = phi i32 [ 0, %%107 ], [ -4, %%106 ], [ -4, %%101 ], [ -4, %%95 ], [ -4, %%86 ], [ -4, %%80 ], [ -3, %%74 ], [ -3, %%72 ], [ -3, %%59 ], [ -1, %%41 ], [ -1, %%12 ], [ -1, %%5  for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_344_count);
  llvm_cbe_tmp__77 = (unsigned int )llvm_cbe_tmp__77__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__77);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",4294967292u);
printf("\n = 0x%X",4294967292u);
printf("\n = 0x%X",4294967292u);
printf("\n = 0x%X",4294967292u);
printf("\n = 0x%X",4294967292u);
printf("\n = 0x%X",4294967293u);
printf("\n = 0x%X",4294967293u);
printf("\n = 0x%X",4294967293u);
printf("\n = 0x%X",4294967295u);
printf("\n = 0x%X",4294967295u);
printf("\n = 0x%X",4294967295u);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @main}\n");
  return llvm_cbe_tmp__77;
}


void fprintBstr(l_struct_OC__iobuf *llvm_cbe_fp,  char *llvm_cbe_S,  char *llvm_cbe_A, signed long long llvm_cbe_L) {
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
  static  unsigned long long aesl_llvm_cbe_fputs_count = 0;
  unsigned int llvm_cbe_fputs;
  static  unsigned long long aesl_llvm_cbe_358_count = 0;
  static  unsigned long long aesl_llvm_cbe_359_count = 0;
  static  unsigned long long aesl_llvm_cbe_360_count = 0;
  static  unsigned long long aesl_llvm_cbe_361_count = 0;
  static  unsigned long long aesl_llvm_cbe_362_count = 0;
  static  unsigned long long aesl_llvm_cbe_363_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned long long llvm_cbe_storemerge1;
  unsigned long long llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_364_count = 0;
   char *llvm_cbe_tmp__103;
  static  unsigned long long aesl_llvm_cbe_365_count = 0;
  unsigned char llvm_cbe_tmp__104;
  static  unsigned long long aesl_llvm_cbe_366_count = 0;
  unsigned int llvm_cbe_tmp__105;
  static  unsigned long long aesl_llvm_cbe_367_count = 0;
  unsigned int llvm_cbe_tmp__106;
  static  unsigned long long aesl_llvm_cbe_368_count = 0;
  unsigned long long llvm_cbe_tmp__107;
  static  unsigned long long aesl_llvm_cbe_369_count = 0;
  static  unsigned long long aesl_llvm_cbe_370_count = 0;
  static  unsigned long long aesl_llvm_cbe_371_count = 0;
  static  unsigned long long aesl_llvm_cbe_372_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_373_count = 0;
  static  unsigned long long aesl_llvm_cbe_374_count = 0;
  static  unsigned long long aesl_llvm_cbe_375_count = 0;
  unsigned long long llvm_cbe_tmp__108;
  static  unsigned long long aesl_llvm_cbe_376_count = 0;
  static  unsigned long long aesl_llvm_cbe_fputc_count = 0;
  unsigned int llvm_cbe_fputc;
  static  unsigned long long aesl_llvm_cbe_377_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @fprintBstr\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%fputs = tail call i32 @fputs(i8* %%S, %%struct._iobuf* %%fp), !dbg !15 for 0x%I64xth hint within @fprintBstr  --> \n", ++aesl_llvm_cbe_fputs_count);
   /*tail*/ fputs(( char *)llvm_cbe_S, (l_struct_OC__iobuf *)llvm_cbe_fp);
if (AESL_DEBUG_TRACE) {
printf("\nReturn fputs = 0x%X",llvm_cbe_fputs);
}
  if (((llvm_cbe_L&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge_2e_thread;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph;
  }

  do {     /* Syntactic loop '.lr.ph' to make GCC happy */
llvm_cbe__2e_lr_2e_ph:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i64 [ %%6, %%.lr.ph ], [ 0, %%0  for 0x%I64xth hint within @fprintBstr  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned long long )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%I64X",llvm_cbe_storemerge1);
printf("\n = 0x%I64X",llvm_cbe_tmp__107);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds i8* %%A, i64 %%storemerge1, !dbg !15 for 0x%I64xth hint within @fprintBstr  --> \n", ++aesl_llvm_cbe_364_count);
  llvm_cbe_tmp__103 = ( char *)(&llvm_cbe_A[(((signed long long )llvm_cbe_storemerge1))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%I64X",((signed long long )llvm_cbe_storemerge1));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = load i8* %%2, align 1, !dbg !15 for 0x%I64xth hint within @fprintBstr  --> \n", ++aesl_llvm_cbe_365_count);
  llvm_cbe_tmp__104 = (unsigned char )*llvm_cbe_tmp__103;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__104);
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = zext i8 %%3 to i32, !dbg !15 for 0x%I64xth hint within @fprintBstr  --> \n", ++aesl_llvm_cbe_366_count);
  llvm_cbe_tmp__105 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__104&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__105);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = tail call i32 (%%struct._iobuf*, i8*, ...)* @fprintf(%%struct._iobuf* %%fp, i8* getelementptr inbounds ([5 x i8]* @aesl_internal_.str34, i64 0, i64 0), i32 %%4) nounwind, !dbg !15 for 0x%I64xth hint within @fprintBstr  --> \n", ++aesl_llvm_cbe_367_count);
   /*tail*/ fprintf((l_struct_OC__iobuf *)llvm_cbe_fp, ( char *)((&aesl_internal__OC_str34[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
])), llvm_cbe_tmp__105);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__105);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__106);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = add i64 %%storemerge1, 1, !dbg !17 for 0x%I64xth hint within @fprintBstr  --> \n", ++aesl_llvm_cbe_368_count);
  llvm_cbe_tmp__107 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__107&18446744073709551615ull)));
  if (((llvm_cbe_tmp__107&18446744073709551615ULL) == (llvm_cbe_L&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__107;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph;
  }

  } while (1); /* end of syntactic loop '.lr.ph' */
llvm_cbe__2e__crit_edge:
  if (((llvm_cbe_L&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge_2e_thread;
  } else {
    goto llvm_cbe_tmp__109;
  }

llvm_cbe__2e__crit_edge_2e_thread:
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = tail call i64 @fwrite(i8* getelementptr inbounds ([3 x i8]* @aesl_internal_.str35, i64 0, i64 0), i64 2, i64 1, %%struct._iobuf* %%fp), !dbg !15 for 0x%I64xth hint within @fprintBstr  --> \n", ++aesl_llvm_cbe_375_count);
   /*tail*/ fwrite(( char *)((&aesl_internal__OC_str35[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
])), 2ull, 1ull, (l_struct_OC__iobuf *)llvm_cbe_fp);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",2ull);
printf("\nArgument  = 0x%I64X",1ull);
printf("\nReturn  = 0x%I64X",llvm_cbe_tmp__108);
}
  goto llvm_cbe_tmp__109;

llvm_cbe_tmp__109:
if (AESL_DEBUG_TRACE)
printf("\n  %%fputc = tail call i32 @fputc(i32 10, %%struct._iobuf* %%fp), !dbg !16 for 0x%I64xth hint within @fprintBstr  --> \n", ++aesl_llvm_cbe_fputc_count);
   /*tail*/ fputc(10u, (l_struct_OC__iobuf *)llvm_cbe_fp);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",10u);
printf("\nReturn fputc = 0x%X",llvm_cbe_fputc);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @fprintBstr}\n");
  return;
}


signed int FindMarker(l_struct_OC__iobuf *llvm_cbe_infile,  char *llvm_cbe_marker) {
  static  unsigned long long aesl_llvm_cbe_line_count = 0;
   char llvm_cbe_line[50];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_378_count = 0;
  static  unsigned long long aesl_llvm_cbe_379_count = 0;
  static  unsigned long long aesl_llvm_cbe_380_count = 0;
  static  unsigned long long aesl_llvm_cbe_381_count = 0;
  static  unsigned long long aesl_llvm_cbe_382_count = 0;
  static  unsigned long long aesl_llvm_cbe_383_count = 0;
  static  unsigned long long aesl_llvm_cbe_384_count = 0;
  static  unsigned long long aesl_llvm_cbe_385_count = 0;
  unsigned long long llvm_cbe_tmp__110;
  static  unsigned long long aesl_llvm_cbe_386_count = 0;
  unsigned int llvm_cbe_tmp__111;
  static  unsigned long long aesl_llvm_cbe_387_count = 0;
  static  unsigned long long aesl_llvm_cbe_388_count = 0;
  static  unsigned long long aesl_llvm_cbe__2e__count = 0;
  unsigned int llvm_cbe__2e_;
  static  unsigned long long aesl_llvm_cbe_389_count = 0;
  static  unsigned long long aesl_llvm_cbe_390_count = 0;
  static  unsigned long long aesl_llvm_cbe_391_count = 0;
  static  unsigned long long aesl_llvm_cbe_392_count = 0;
  static  unsigned long long aesl_llvm_cbe_393_count = 0;
  static  unsigned long long aesl_llvm_cbe_394_count = 0;
  static  unsigned long long aesl_llvm_cbe_395_count = 0;
  static  unsigned long long aesl_llvm_cbe_396_count = 0;
  static  unsigned long long aesl_llvm_cbe_397_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge_count = 0;
  unsigned int llvm_cbe_storemerge;
  unsigned int llvm_cbe_storemerge__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_398_count = 0;
  static  unsigned long long aesl_llvm_cbe_399_count = 0;
  static  unsigned long long aesl_llvm_cbe_400_count = 0;
  static  unsigned long long aesl_llvm_cbe_401_count = 0;
  static  unsigned long long aesl_llvm_cbe_402_count = 0;
  static  unsigned long long aesl_llvm_cbe_403_count = 0;
  static  unsigned long long aesl_llvm_cbe_404_count = 0;
  static  unsigned long long aesl_llvm_cbe_405_count = 0;
  static  unsigned long long aesl_llvm_cbe_406_count = 0;
  static  unsigned long long aesl_llvm_cbe_407_count = 0;
  unsigned int llvm_cbe_tmp__112;
  static  unsigned long long aesl_llvm_cbe_408_count = 0;
  static  unsigned long long aesl_llvm_cbe_409_count = 0;
  static  unsigned long long aesl_llvm_cbe_410_count = 0;
  static  unsigned long long aesl_llvm_cbe_411_count = 0;
  static  unsigned long long aesl_llvm_cbe_412_count = 0;
  static  unsigned long long aesl_llvm_cbe_413_count = 0;
  unsigned char llvm_cbe_tmp__113;
  static  unsigned long long aesl_llvm_cbe_414_count = 0;
  unsigned long long llvm_cbe_tmp__114;
  static  unsigned long long aesl_llvm_cbe_415_count = 0;
   char *llvm_cbe_tmp__115;
  static  unsigned long long aesl_llvm_cbe_416_count = 0;
  static  unsigned long long aesl_llvm_cbe_417_count = 0;
  static  unsigned long long aesl_llvm_cbe_418_count = 0;
  unsigned int llvm_cbe_tmp__116;
  static  unsigned long long aesl_llvm_cbe_419_count = 0;
  static  unsigned long long aesl_llvm_cbe_420_count = 0;
  static  unsigned long long aesl_llvm_cbe_421_count = 0;
  unsigned long long llvm_cbe_tmp__117;
  static  unsigned long long aesl_llvm_cbe_422_count = 0;
   char *llvm_cbe_tmp__118;
  static  unsigned long long aesl_llvm_cbe_423_count = 0;
   char *llvm_cbe_tmp__119;
  static  unsigned long long aesl_llvm_cbe_424_count = 0;
  unsigned int llvm_cbe_tmp__120;
  static  unsigned long long aesl_llvm_cbe_425_count = 0;
  static  unsigned long long aesl_llvm_cbe_426_count = 0;
  static  unsigned long long aesl_llvm_cbe_427_count = 0;
  static  unsigned long long aesl_llvm_cbe__2e_op_count = 0;
  unsigned int llvm_cbe__2e_op;
  static  unsigned long long aesl_llvm_cbe_428_count = 0;
  unsigned int llvm_cbe_tmp__121;
  static  unsigned long long aesl_llvm_cbe_429_count = 0;
  static  unsigned long long aesl_llvm_cbe_430_count = 0;
  static  unsigned long long aesl_llvm_cbe_431_count = 0;
  unsigned int llvm_cbe_tmp__122;
  static  unsigned long long aesl_llvm_cbe_432_count = 0;
  static  unsigned long long aesl_llvm_cbe_433_count = 0;
  static  unsigned long long aesl_llvm_cbe_434_count = 0;
  unsigned int llvm_cbe_tmp__123;
  static  unsigned long long aesl_llvm_cbe_435_count = 0;
  static  unsigned long long aesl_llvm_cbe_436_count = 0;
  static  unsigned long long aesl_llvm_cbe_437_count = 0;
  static  unsigned long long aesl_llvm_cbe_438_count = 0;
  static  unsigned long long aesl_llvm_cbe_439_count = 0;
  static  unsigned long long aesl_llvm_cbe_440_count = 0;
  unsigned char llvm_cbe_tmp__124;
  static  unsigned long long aesl_llvm_cbe_441_count = 0;
  unsigned long long llvm_cbe_tmp__125;
  static  unsigned long long aesl_llvm_cbe_442_count = 0;
   char *llvm_cbe_tmp__126;
  static  unsigned long long aesl_llvm_cbe_443_count = 0;
  static  unsigned long long aesl_llvm_cbe_444_count = 0;
  static  unsigned long long aesl_llvm_cbe_445_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge13_2e_us_count = 0;
  unsigned int llvm_cbe_storemerge13_2e_us;
  unsigned int llvm_cbe_storemerge13_2e_us__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_446_count = 0;
  unsigned int llvm_cbe_tmp__127;
  static  unsigned long long aesl_llvm_cbe_447_count = 0;
  unsigned long long llvm_cbe_tmp__128;
  static  unsigned long long aesl_llvm_cbe_448_count = 0;
   char *llvm_cbe_tmp__129;
  static  unsigned long long aesl_llvm_cbe_449_count = 0;
  unsigned char llvm_cbe_tmp__130;
  static  unsigned long long aesl_llvm_cbe_450_count = 0;
  unsigned long long llvm_cbe_tmp__131;
  static  unsigned long long aesl_llvm_cbe_451_count = 0;
   char *llvm_cbe_tmp__132;
  static  unsigned long long aesl_llvm_cbe_452_count = 0;
  static  unsigned long long aesl_llvm_cbe_453_count = 0;
  static  unsigned long long aesl_llvm_cbe_454_count = 0;
  static  unsigned long long aesl_llvm_cbe_455_count = 0;
  static  unsigned long long aesl_llvm_cbe_456_count = 0;
  static  unsigned long long aesl_llvm_cbe_457_count = 0;
  static  unsigned long long aesl_llvm_cbe_458_count = 0;
  static  unsigned long long aesl_llvm_cbe_459_count = 0;
  static  unsigned long long aesl_llvm_cbe_460_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_461_count = 0;
  static  unsigned long long aesl_llvm_cbe_462_count = 0;
  static  unsigned long long aesl_llvm_cbe_463_count = 0;
  unsigned int llvm_cbe_tmp__133;
  static  unsigned long long aesl_llvm_cbe_464_count = 0;
  static  unsigned long long aesl_llvm_cbe_465_count = 0;
  static  unsigned long long aesl_llvm_cbe_466_count = 0;
  unsigned int llvm_cbe_tmp__134;
  static  unsigned long long aesl_llvm_cbe_467_count = 0;
  static  unsigned long long aesl_llvm_cbe_468_count = 0;
  static  unsigned long long aesl_llvm_cbe_469_count = 0;
  static  unsigned long long aesl_llvm_cbe_470_count = 0;
  static  unsigned long long aesl_llvm_cbe_471_count = 0;
  static  unsigned long long aesl_llvm_cbe_472_count = 0;
  unsigned char llvm_cbe_tmp__135;
  static  unsigned long long aesl_llvm_cbe_473_count = 0;
  unsigned long long llvm_cbe_tmp__136;
  static  unsigned long long aesl_llvm_cbe_474_count = 0;
   char *llvm_cbe_tmp__137;
  static  unsigned long long aesl_llvm_cbe_475_count = 0;
  static  unsigned long long aesl_llvm_cbe_476_count = 0;
  static  unsigned long long aesl_llvm_cbe_477_count = 0;
  static  unsigned long long aesl_llvm_cbe_478_count = 0;
  unsigned int llvm_cbe_tmp__138;
  unsigned int llvm_cbe_tmp__138__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_479_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @FindMarker\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = call i64 @strlen(i8* %%marker) nounwind, !dbg !16 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_385_count);
  llvm_cbe_tmp__110 = (unsigned long long )strlen(( char *)llvm_cbe_marker);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%I64X",llvm_cbe_tmp__110);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = trunc i64 %%1 to i32, !dbg !16 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_386_count);
  llvm_cbe_tmp__111 = (unsigned int )((unsigned int )llvm_cbe_tmp__110&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__111);
if (AESL_DEBUG_TRACE)
printf("\n  %%. = select i1 %%3, i32 49, i32 %%2, !dbg !17 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe__2e__count);
  llvm_cbe__2e_ = (unsigned int )(((((signed int )llvm_cbe_tmp__111) > ((signed int )49u))) ? ((unsigned int )49u) : ((unsigned int )llvm_cbe_tmp__111));
if (AESL_DEBUG_TRACE)
printf("\n. = 0x%X\n", llvm_cbe__2e_);
  llvm_cbe_storemerge__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__139;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__139:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge = phi i32 [ 0, %%0 ], [ %%12, %%6  for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_storemerge_count);
  llvm_cbe_storemerge = (unsigned int )llvm_cbe_storemerge__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge = 0x%X",llvm_cbe_storemerge);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__116);
}
  if ((((signed int )llvm_cbe_storemerge) < ((signed int )llvm_cbe__2e_))) {
    goto llvm_cbe_tmp__140;
  } else {
    goto llvm_cbe_tmp__141;
  }

llvm_cbe_tmp__140:
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = call i32 @fgetc(%%struct._iobuf* %%infile) nounwind, !dbg !15 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_407_count);
  llvm_cbe_tmp__112 = (unsigned int )fgetc((l_struct_OC__iobuf *)llvm_cbe_infile);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__112);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = trunc i32 %%7 to i8, !dbg !17 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_413_count);
  llvm_cbe_tmp__113 = (unsigned char )((unsigned char )llvm_cbe_tmp__112&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__113);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = sext i32 %%storemerge to i64, !dbg !17 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_414_count);
  llvm_cbe_tmp__114 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__114);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds [50 x i8]* %%line, i64 0, i64 %%9, !dbg !17 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_415_count);
  llvm_cbe_tmp__115 = ( char *)(&llvm_cbe_line[(((signed long long )llvm_cbe_tmp__114))
#ifdef AESL_BC_SIM
 % 50
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__114));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__114) < 50 && "Write access out of array 'line' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%8, i8* %%10, align 1, !dbg !17 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_416_count);
  *llvm_cbe_tmp__115 = llvm_cbe_tmp__113;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__113);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = add nsw i32 %%storemerge, 1, !dbg !18 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_418_count);
  llvm_cbe_tmp__116 = (unsigned int )((unsigned int )(llvm_cbe_storemerge&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__116&4294967295ull)));
  if (((llvm_cbe_tmp__112&4294967295U) == (4294967295u&4294967295U))) {
    llvm_cbe_tmp__138__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_loopexit;
  } else {
    llvm_cbe_storemerge__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__116;   /* for PHI node */
    goto llvm_cbe_tmp__139;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__141:
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = sext i32 %%. to i64, !dbg !17 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_421_count);
  llvm_cbe_tmp__117 = (unsigned long long )((signed long long )(signed int )llvm_cbe__2e_);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__117);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds [50 x i8]* %%line, i64 0, i64 %%14, !dbg !17 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_422_count);
  llvm_cbe_tmp__118 = ( char *)(&llvm_cbe_line[(((signed long long )llvm_cbe_tmp__117))
#ifdef AESL_BC_SIM
 % 50
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__117));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = getelementptr inbounds [50 x i8]* %%line, i64 0, i64 0, !dbg !16 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_423_count);
  llvm_cbe_tmp__119 = ( char *)(&llvm_cbe_line[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 50
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = add nsw i32 %%., -1, !dbg !17 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_424_count);
  llvm_cbe_tmp__120 = (unsigned int )((unsigned int )(llvm_cbe__2e_&4294967295ull)) + ((unsigned int )(4294967295u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__120&4294967295ull)));
  if ((((signed int )llvm_cbe_tmp__120) > ((signed int )0u))) {
    goto llvm_cbe__2e_split_2e_us;
  } else {
    goto llvm_cbe__2e__2e_split_crit_edge;
  }

llvm_cbe__2e_split_2e_us:
if (AESL_DEBUG_TRACE)
printf("\n  %%.op = add i32 %%2, -1, !dbg !18 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe__2e_op_count);
  llvm_cbe__2e_op = (unsigned int )((unsigned int )(llvm_cbe_tmp__111&4294967295ull)) + ((unsigned int )(4294967295u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n.op = 0x%X\n", ((unsigned int )(llvm_cbe__2e_op&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = select i1 %%19, i32 %%.op, i32 48, !dbg !18 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_428_count);
  llvm_cbe_tmp__121 = (unsigned int )(((((signed int )llvm_cbe_tmp__111) < ((signed int )49u))) ? ((unsigned int )llvm_cbe__2e_op) : ((unsigned int )48u));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__121);
  goto llvm_cbe_tmp__142;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__142:

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__117) < 50 && "Write access out of array 'line' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 0, i8* %%15, align 1, !dbg !17 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_430_count);
  *llvm_cbe_tmp__118 = ((unsigned char )0);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )0));
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = call i32 @strncmp(i8* %%16, i8* %%marker, i64 %%14) nounwind, !dbg !16 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_431_count);
  llvm_cbe_tmp__122 = (unsigned int )strncmp(( char *)llvm_cbe_tmp__119, ( char *)llvm_cbe_marker, llvm_cbe_tmp__117);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__117);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__122);
}
  if (((llvm_cbe_tmp__122&4294967295U) == (0u&4294967295U))) {
    llvm_cbe_tmp__138__PHI_TEMPORARY = (unsigned int )1u;   /* for PHI node */
    goto llvm_cbe__2e_loopexit;
  } else {
    llvm_cbe_storemerge13_2e_us__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph_2e_us;
  }

llvm_cbe__2e__crit_edge_2e_us:
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = call i32 @fgetc(%%struct._iobuf* %%infile) nounwind, !dbg !15 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_434_count);
  llvm_cbe_tmp__123 = (unsigned int )fgetc((l_struct_OC__iobuf *)llvm_cbe_infile);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__123);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = trunc i32 %%24 to i8, !dbg !17 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_440_count);
  llvm_cbe_tmp__124 = (unsigned char )((unsigned char )llvm_cbe_tmp__123&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__124);
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = sext i32 %%17 to i64, !dbg !17 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_441_count);
  llvm_cbe_tmp__125 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__120);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__125);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = getelementptr inbounds [50 x i8]* %%line, i64 0, i64 %%26, !dbg !17 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_442_count);
  llvm_cbe_tmp__126 = ( char *)(&llvm_cbe_line[(((signed long long )llvm_cbe_tmp__125))
#ifdef AESL_BC_SIM
 % 50
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__125));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__125) < 50 && "Write access out of array 'line' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%25, i8* %%27, align 1, !dbg !17 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_443_count);
  *llvm_cbe_tmp__126 = llvm_cbe_tmp__124;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__124);
  if (((llvm_cbe_tmp__123&4294967295U) == (4294967295u&4294967295U))) {
    llvm_cbe_tmp__138__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_loopexit;
  } else {
    goto llvm_cbe_tmp__142;
  }

  do {     /* Syntactic loop '.lr.ph.us' to make GCC happy */
llvm_cbe__2e_lr_2e_ph_2e_us:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge13.us = phi i32 [ %%29, %%.lr.ph.us ], [ 0, %%21  for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_storemerge13_2e_us_count);
  llvm_cbe_storemerge13_2e_us = (unsigned int )llvm_cbe_storemerge13_2e_us__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge13.us = 0x%X",llvm_cbe_storemerge13_2e_us);
printf("\n = 0x%X",llvm_cbe_tmp__127);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = add nsw i32 %%storemerge13.us, 1, !dbg !18 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_446_count);
  llvm_cbe_tmp__127 = (unsigned int )((unsigned int )(llvm_cbe_storemerge13_2e_us&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__127&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = sext i32 %%29 to i64, !dbg !18 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_447_count);
  llvm_cbe_tmp__128 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__127);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__128);
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = getelementptr inbounds [50 x i8]* %%line, i64 0, i64 %%30, !dbg !18 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_448_count);
  llvm_cbe_tmp__129 = ( char *)(&llvm_cbe_line[(((signed long long )llvm_cbe_tmp__128))
#ifdef AESL_BC_SIM
 % 50
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__128));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__128) < 50)) fprintf(stderr, "%s:%d: warning: Read access out of array 'line' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = load i8* %%31, align 1, !dbg !18 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_449_count);
  llvm_cbe_tmp__130 = (unsigned char )*llvm_cbe_tmp__129;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__130);
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = sext i32 %%storemerge13.us to i64, !dbg !18 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_450_count);
  llvm_cbe_tmp__131 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge13_2e_us);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__131);
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = getelementptr inbounds [50 x i8]* %%line, i64 0, i64 %%33, !dbg !18 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_451_count);
  llvm_cbe_tmp__132 = ( char *)(&llvm_cbe_line[(((signed long long )llvm_cbe_tmp__131))
#ifdef AESL_BC_SIM
 % 50
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__131));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__131) < 50 && "Write access out of array 'line' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%32, i8* %%34, align 1, !dbg !18 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_452_count);
  *llvm_cbe_tmp__132 = llvm_cbe_tmp__130;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__130);
  if (((llvm_cbe_tmp__127&4294967295U) == (llvm_cbe_tmp__121&4294967295U))) {
    goto llvm_cbe__2e__crit_edge_2e_us;
  } else {
    llvm_cbe_storemerge13_2e_us__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__127;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph_2e_us;
  }

  } while (1); /* end of syntactic loop '.lr.ph.us' */
  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '..split_crit_edge' to make GCC happy */
llvm_cbe__2e__2e_split_crit_edge:

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__117) < 50 && "Write access out of array 'line' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 0, i8* %%15, align 1, !dbg !17 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_462_count);
  *llvm_cbe_tmp__118 = ((unsigned char )0);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )0));
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = call i32 @strncmp(i8* %%16, i8* %%marker, i64 %%14) nounwind, !dbg !16 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_463_count);
  llvm_cbe_tmp__133 = (unsigned int )strncmp(( char *)llvm_cbe_tmp__119, ( char *)llvm_cbe_marker, llvm_cbe_tmp__117);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__117);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__133);
}
  if (((llvm_cbe_tmp__133&4294967295U) == (0u&4294967295U))) {
    llvm_cbe_tmp__138__PHI_TEMPORARY = (unsigned int )1u;   /* for PHI node */
    goto llvm_cbe__2e_loopexit;
  } else {
    goto llvm_cbe__2e_preheader;
  }

llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = call i32 @fgetc(%%struct._iobuf* %%infile) nounwind, !dbg !15 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_466_count);
  llvm_cbe_tmp__134 = (unsigned int )fgetc((l_struct_OC__iobuf *)llvm_cbe_infile);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__134);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = trunc i32 %%37 to i8, !dbg !17 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_472_count);
  llvm_cbe_tmp__135 = (unsigned char )((unsigned char )llvm_cbe_tmp__134&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__135);
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = sext i32 %%17 to i64, !dbg !17 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_473_count);
  llvm_cbe_tmp__136 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__120);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__136);
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = getelementptr inbounds [50 x i8]* %%line, i64 0, i64 %%39, !dbg !17 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_474_count);
  llvm_cbe_tmp__137 = ( char *)(&llvm_cbe_line[(((signed long long )llvm_cbe_tmp__136))
#ifdef AESL_BC_SIM
 % 50
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__136));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__136) < 50 && "Write access out of array 'line' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%38, i8* %%40, align 1, !dbg !17 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_475_count);
  *llvm_cbe_tmp__137 = llvm_cbe_tmp__135;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__135);
  if (((llvm_cbe_tmp__134&4294967295U) == (4294967295u&4294967295U))) {
    llvm_cbe_tmp__138__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_loopexit;
  } else {
    goto llvm_cbe__2e__2e_split_crit_edge;
  }

  } while (1); /* end of syntactic loop '..split_crit_edge' */
llvm_cbe__2e_loopexit:
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = phi i32 [ 1, %%21 ], [ 0, %%._crit_edge.us ], [ 1, %%..split_crit_edge ], [ 0, %%.preheader ], [ 0, %%6  for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_478_count);
  llvm_cbe_tmp__138 = (unsigned int )llvm_cbe_tmp__138__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__138);
printf("\n = 0x%X",1u);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",1u);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",0u);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @FindMarker}\n");
  return llvm_cbe_tmp__138;
}


signed int ReadHex(l_struct_OC__iobuf *llvm_cbe_infile,  char *llvm_cbe_A, signed int llvm_cbe_Length,  char *llvm_cbe_str) {
  static  unsigned long long aesl_llvm_cbe_480_count = 0;
  static  unsigned long long aesl_llvm_cbe_481_count = 0;
  static  unsigned long long aesl_llvm_cbe_482_count = 0;
  static  unsigned long long aesl_llvm_cbe_483_count = 0;
  static  unsigned long long aesl_llvm_cbe_484_count = 0;
  static  unsigned long long aesl_llvm_cbe_485_count = 0;
  static  unsigned long long aesl_llvm_cbe_486_count = 0;
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
  unsigned long long llvm_cbe_tmp__143;
  static  unsigned long long aesl_llvm_cbe_504_count = 0;
   char *llvm_cbe_tmp__144;
  static  unsigned long long aesl_llvm_cbe_505_count = 0;
  static  unsigned long long aesl_llvm_cbe_506_count = 0;
  static  unsigned long long aesl_llvm_cbe_507_count = 0;
  unsigned int llvm_cbe_tmp__145;
  static  unsigned long long aesl_llvm_cbe_508_count = 0;
  static  unsigned long long aesl_llvm_cbe_509_count = 0;
  static  unsigned long long aesl_llvm_cbe_510_count = 0;
  unsigned int llvm_cbe_tmp__146;
  static  unsigned long long aesl_llvm_cbe_511_count = 0;
  static  unsigned long long aesl_llvm_cbe_512_count = 0;
  static  unsigned long long aesl_llvm_cbe_513_count = 0;
  unsigned int llvm_cbe_tmp__147;
  unsigned int llvm_cbe_tmp__147__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_514_count = 0;
  unsigned int llvm_cbe_tmp__148;
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
  unsigned long long llvm_cbe_tmp__149;
  static  unsigned long long aesl_llvm_cbe_530_count = 0;
   char *llvm_cbe_tmp__150;
  static  unsigned long long aesl_llvm_cbe_531_count = 0;
  unsigned char llvm_cbe_tmp__151;
  static  unsigned long long aesl_llvm_cbe_532_count = 0;
  unsigned char llvm_cbe_tmp__152;
  static  unsigned long long aesl_llvm_cbe_533_count = 0;
  unsigned char llvm_cbe_tmp__153;
  static  unsigned long long aesl_llvm_cbe_534_count = 0;
  static  unsigned long long aesl_llvm_cbe_535_count = 0;
  static  unsigned long long aesl_llvm_cbe_536_count = 0;
  unsigned char llvm_cbe_tmp__154;
  static  unsigned long long aesl_llvm_cbe_537_count = 0;
  unsigned char llvm_cbe_tmp__155;
  static  unsigned long long aesl_llvm_cbe_538_count = 0;
  static  unsigned long long aesl_llvm_cbe_539_count = 0;
  static  unsigned long long aesl_llvm_cbe_540_count = 0;
  static  unsigned long long aesl_llvm_cbe_541_count = 0;
  static  unsigned long long aesl_llvm_cbe_542_count = 0;
  static  unsigned long long aesl_llvm_cbe_543_count = 0;
  static  unsigned long long aesl_llvm_cbe_or_2e_cond_2e_us_count = 0;
  bool llvm_cbe_or_2e_cond_2e_us;
  static  unsigned long long aesl_llvm_cbe_544_count = 0;
  static  unsigned long long aesl_llvm_cbe_545_count = 0;
  unsigned int llvm_cbe_tmp__156;
  static  unsigned long long aesl_llvm_cbe_546_count = 0;
  static  unsigned long long aesl_llvm_cbe_547_count = 0;
  static  unsigned long long aesl_llvm_cbe_548_count = 0;
  unsigned char llvm_cbe_tmp__157;
  static  unsigned long long aesl_llvm_cbe_549_count = 0;
  unsigned char llvm_cbe_tmp__158;
  static  unsigned long long aesl_llvm_cbe_550_count = 0;
  static  unsigned long long aesl_llvm_cbe_551_count = 0;
  static  unsigned long long aesl_llvm_cbe_552_count = 0;
  static  unsigned long long aesl_llvm_cbe_553_count = 0;
  static  unsigned long long aesl_llvm_cbe_or_2e_cond8_2e_us_count = 0;
  bool llvm_cbe_or_2e_cond8_2e_us;
  static  unsigned long long aesl_llvm_cbe_554_count = 0;
  static  unsigned long long aesl_llvm_cbe_555_count = 0;
  static  unsigned long long aesl_llvm_cbe_556_count = 0;
  static  unsigned long long aesl_llvm_cbe_or_2e_cond6_2e_us_count = 0;
  bool llvm_cbe_or_2e_cond6_2e_us;
  static  unsigned long long aesl_llvm_cbe_557_count = 0;
  static  unsigned long long aesl_llvm_cbe_558_count = 0;
  unsigned char llvm_cbe_tmp__159;
  static  unsigned long long aesl_llvm_cbe_559_count = 0;
  unsigned char llvm_cbe_tmp__160;
  static  unsigned long long aesl_llvm_cbe_560_count = 0;
  static  unsigned long long aesl_llvm_cbe_561_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge310_2e_us_count = 0;
  unsigned int llvm_cbe_storemerge310_2e_us;
  unsigned int llvm_cbe_storemerge310_2e_us__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_562_count = 0;
  unsigned long long llvm_cbe_tmp__161;
  static  unsigned long long aesl_llvm_cbe_563_count = 0;
   char *llvm_cbe_tmp__162;
  static  unsigned long long aesl_llvm_cbe_564_count = 0;
  unsigned char llvm_cbe_tmp__163;
  static  unsigned long long aesl_llvm_cbe_565_count = 0;
  unsigned char llvm_cbe_tmp__164;
  static  unsigned long long aesl_llvm_cbe_566_count = 0;
  unsigned int llvm_cbe_tmp__165;
  static  unsigned long long aesl_llvm_cbe_567_count = 0;
  unsigned long long llvm_cbe_tmp__166;
  static  unsigned long long aesl_llvm_cbe_568_count = 0;
   char *llvm_cbe_tmp__167;
  static  unsigned long long aesl_llvm_cbe_569_count = 0;
  unsigned char llvm_cbe_tmp__168;
  static  unsigned long long aesl_llvm_cbe_570_count = 0;
  unsigned char llvm_cbe_tmp__169;
  static  unsigned long long aesl_llvm_cbe_571_count = 0;
  unsigned char llvm_cbe_tmp__170;
  static  unsigned long long aesl_llvm_cbe_572_count = 0;
  static  unsigned long long aesl_llvm_cbe_573_count = 0;
  static  unsigned long long aesl_llvm_cbe_574_count = 0;
  static  unsigned long long aesl_llvm_cbe_575_count = 0;
  static  unsigned long long aesl_llvm_cbe_576_count = 0;
  static  unsigned long long aesl_llvm_cbe_577_count = 0;
  static  unsigned long long aesl_llvm_cbe_578_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_579_count = 0;
  static  unsigned long long aesl_llvm_cbe_580_count = 0;
  static  unsigned long long aesl_llvm_cbe_581_count = 0;
  static  unsigned long long aesl_llvm_cbe_or_2e_cond9_2e_us_count = 0;
  bool llvm_cbe_or_2e_cond9_2e_us;
  static  unsigned long long aesl_llvm_cbe_582_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge2_2e_us_count = 0;
  unsigned char llvm_cbe_storemerge2_2e_us;
  unsigned char llvm_cbe_storemerge2_2e_us__PHI_TEMPORARY;
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
  unsigned int llvm_cbe_tmp__171;
  unsigned int llvm_cbe_tmp__171__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_593_count = 0;
  unsigned int llvm_cbe_tmp__172;
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
  unsigned int llvm_cbe_tmp__173;
  static  unsigned long long aesl_llvm_cbe_609_count = 0;
  static  unsigned long long aesl_llvm_cbe_610_count = 0;
  static  unsigned long long aesl_llvm_cbe_611_count = 0;
  static  unsigned long long aesl_llvm_cbe_612_count = 0;
  static  unsigned long long aesl_llvm_cbe_or_2e_cond9_count = 0;
  bool llvm_cbe_or_2e_cond9;
  static  unsigned long long aesl_llvm_cbe_613_count = 0;
  static  unsigned long long aesl_llvm_cbe_614_count = 0;
  static  unsigned long long aesl_llvm_cbe_615_count = 0;
  static  unsigned long long aesl_llvm_cbe_616_count = 0;
  static  unsigned long long aesl_llvm_cbe_617_count = 0;
  static  unsigned long long aesl_llvm_cbe_or_2e_cond_count = 0;
  bool llvm_cbe_or_2e_cond;
  static  unsigned long long aesl_llvm_cbe_618_count = 0;
  static  unsigned long long aesl_llvm_cbe_619_count = 0;
  unsigned char llvm_cbe_tmp__174;
  static  unsigned long long aesl_llvm_cbe_620_count = 0;
  unsigned char llvm_cbe_tmp__175;
  static  unsigned long long aesl_llvm_cbe_621_count = 0;
  static  unsigned long long aesl_llvm_cbe_622_count = 0;
  static  unsigned long long aesl_llvm_cbe_623_count = 0;
  static  unsigned long long aesl_llvm_cbe_624_count = 0;
  static  unsigned long long aesl_llvm_cbe_or_2e_cond6_count = 0;
  bool llvm_cbe_or_2e_cond6;
  static  unsigned long long aesl_llvm_cbe_625_count = 0;
  static  unsigned long long aesl_llvm_cbe_626_count = 0;
  unsigned char llvm_cbe_tmp__176;
  static  unsigned long long aesl_llvm_cbe_627_count = 0;
  unsigned char llvm_cbe_tmp__177;
  static  unsigned long long aesl_llvm_cbe_628_count = 0;
  static  unsigned long long aesl_llvm_cbe_629_count = 0;
  static  unsigned long long aesl_llvm_cbe_630_count = 0;
  static  unsigned long long aesl_llvm_cbe_631_count = 0;
  static  unsigned long long aesl_llvm_cbe_or_2e_cond8_count = 0;
  bool llvm_cbe_or_2e_cond8;
  static  unsigned long long aesl_llvm_cbe_632_count = 0;
  static  unsigned long long aesl_llvm_cbe_633_count = 0;
  unsigned char llvm_cbe_tmp__178;
  static  unsigned long long aesl_llvm_cbe_634_count = 0;
  unsigned char llvm_cbe_tmp__179;
  static  unsigned long long aesl_llvm_cbe_635_count = 0;
  static  unsigned long long aesl_llvm_cbe_636_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge2_count = 0;
  unsigned char llvm_cbe_storemerge2;
  unsigned char llvm_cbe_storemerge2__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_637_count = 0;
  static  unsigned long long aesl_llvm_cbe_638_count = 0;
  static  unsigned long long aesl_llvm_cbe_639_count = 0;
  static  unsigned long long aesl_llvm_cbe_640_count = 0;
  static  unsigned long long aesl_llvm_cbe_641_count = 0;
  static  unsigned long long aesl_llvm_cbe_642_count = 0;
  static  unsigned long long aesl_llvm_cbe_643_count = 0;
  static  unsigned long long aesl_llvm_cbe_644_count = 0;
  unsigned long long llvm_cbe_tmp__180;
  static  unsigned long long aesl_llvm_cbe_645_count = 0;
   char *llvm_cbe_tmp__181;
  static  unsigned long long aesl_llvm_cbe_646_count = 0;
  unsigned char llvm_cbe_tmp__182;
  static  unsigned long long aesl_llvm_cbe_647_count = 0;
  unsigned char llvm_cbe_tmp__183;
  static  unsigned long long aesl_llvm_cbe_648_count = 0;
  unsigned char llvm_cbe_tmp__184;
  static  unsigned long long aesl_llvm_cbe_649_count = 0;
  static  unsigned long long aesl_llvm_cbe_650_count = 0;
  static  unsigned long long aesl_llvm_cbe_651_count = 0;
  static  unsigned long long aesl_llvm_cbe_652_count = 0;
  static  unsigned long long aesl_llvm_cbe_653_count = 0;
  unsigned int llvm_cbe_tmp__185;
  unsigned int llvm_cbe_tmp__185__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_654_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @ReadHex\n");
  if (((llvm_cbe_Length&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe_tmp__186;
  } else {
    goto llvm_cbe_tmp__187;
  }

llvm_cbe_tmp__186:
if (AESL_DEBUG_TRACE)
printf("\n  store i8 0, i8* %%A, align 1, !dbg !16 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_501_count);
  *llvm_cbe_A = ((unsigned char )0);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )0));
  llvm_cbe_tmp__185__PHI_TEMPORARY = (unsigned int )1u;   /* for PHI node */
  goto llvm_cbe_tmp__188;

llvm_cbe_tmp__187:
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = sext i32 %%Length to i64, !dbg !16 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_503_count);
  llvm_cbe_tmp__143 = (unsigned long long )((signed long long )(signed int )llvm_cbe_Length);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__143);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = call i8* @memset(i8* %%A, i32 0, i64 %%4 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_504_count);
  ( char *)memset(( char *)llvm_cbe_A, 0u, llvm_cbe_tmp__143);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",0u);
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__143);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__144);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = tail call i32 @FindMarker(%%struct._iobuf* %%infile, i8* %%str), !dbg !15 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_507_count);
  llvm_cbe_tmp__145 = (unsigned int ) /*tail*/ FindMarker((l_struct_OC__iobuf *)llvm_cbe_infile, ( char *)llvm_cbe_str);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__145);
}
  if (((llvm_cbe_tmp__145&4294967295U) == (0u&4294967295U))) {
    llvm_cbe_tmp__185__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe_tmp__188;
  } else {
    goto llvm_cbe__2e_preheader;
  }

llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = add nsw i32 %%Length, -1, !dbg !17 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_510_count);
  llvm_cbe_tmp__146 = (unsigned int )((unsigned int )(llvm_cbe_Length&4294967295ull)) + ((unsigned int )(4294967295u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__146&4294967295ull)));
  if ((((signed int )llvm_cbe_tmp__146) > ((signed int )0u))) {
    llvm_cbe_tmp__147__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e_split_2e_us;
  } else {
    llvm_cbe_tmp__171__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e__2e_preheader_2e_split_crit_edge;
  }

  do {     /* Syntactic loop '.preheader.split.us' to make GCC happy */
llvm_cbe__2e_preheader_2e_split_2e_us:
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = phi i32 [ 0, %%.preheader ], [ 1, %%._crit_edge.us ], [ 0, %%50  for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_513_count);
  llvm_cbe_tmp__147 = (unsigned int )llvm_cbe_tmp__147__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__147);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",1u);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = tail call i32 @fgetc(%%struct._iobuf* %%infile) nounwind, !dbg !15 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_514_count);
  llvm_cbe_tmp__148 = (unsigned int ) /*tail*/ fgetc((l_struct_OC__iobuf *)llvm_cbe_infile);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__148);
}
  if (((llvm_cbe_tmp__148&4294967295U) == (4294967295u&4294967295U))) {
    goto llvm_cbe__2e_us_2d_lcssa_2e_us;
  } else {
    goto llvm_cbe_tmp__189;
  }

llvm_cbe__2e__crit_edge_2e_us:
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = sext i32 %%8 to i64, !dbg !16 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_529_count);
  llvm_cbe_tmp__149 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__146);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__149);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = getelementptr inbounds i8* %%A, i64 %%13, !dbg !16 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_530_count);
  llvm_cbe_tmp__150 = ( char *)(&llvm_cbe_A[(((signed long long )llvm_cbe_tmp__149))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__149));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = load i8* %%14, align 1, !dbg !16 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_531_count);
  llvm_cbe_tmp__151 = (unsigned char )*llvm_cbe_tmp__150;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__151);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = shl i8 %%15, 4, !dbg !16 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_532_count);
  llvm_cbe_tmp__152 = (unsigned char )((unsigned char )(llvm_cbe_tmp__151 << ((unsigned char )4)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__152);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = or i8 %%16, %%storemerge2.us, !dbg !16 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_533_count);
  llvm_cbe_tmp__153 = (unsigned char )((unsigned char )(llvm_cbe_tmp__152 | llvm_cbe_storemerge2_2e_us));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__153);
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%17, i8* %%14, align 1, !dbg !16 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_534_count);
  *llvm_cbe_tmp__150 = llvm_cbe_tmp__153;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__153);
  llvm_cbe_tmp__147__PHI_TEMPORARY = (unsigned int )1u;   /* for PHI node */
  goto llvm_cbe__2e_preheader_2e_split_2e_us;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__190:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge310.us = phi i32 [ 0, %%.lr.ph.us ], [ %%44, %%39  for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_storemerge310_2e_us_count);
  llvm_cbe_storemerge310_2e_us = (unsigned int )llvm_cbe_storemerge310_2e_us__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge310.us = 0x%X",llvm_cbe_storemerge310_2e_us);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__165);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = sext i32 %%storemerge310.us to i64, !dbg !16 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_562_count);
  llvm_cbe_tmp__161 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge310_2e_us);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__161);
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = getelementptr inbounds i8* %%A, i64 %%40, !dbg !16 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_563_count);
  llvm_cbe_tmp__162 = ( char *)(&llvm_cbe_A[(((signed long long )llvm_cbe_tmp__161))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__161));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = load i8* %%41, align 1, !dbg !16 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_564_count);
  llvm_cbe_tmp__163 = (unsigned char )*llvm_cbe_tmp__162;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__163);
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = shl i8 %%42, 4, !dbg !16 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_565_count);
  llvm_cbe_tmp__164 = (unsigned char )((unsigned char )(llvm_cbe_tmp__163 << ((unsigned char )4)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__164);
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = add nsw i32 %%storemerge310.us, 1, !dbg !16 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_566_count);
  llvm_cbe_tmp__165 = (unsigned int )((unsigned int )(llvm_cbe_storemerge310_2e_us&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__165&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = sext i32 %%44 to i64, !dbg !16 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_567_count);
  llvm_cbe_tmp__166 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__165);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__166);
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = getelementptr inbounds i8* %%A, i64 %%45, !dbg !16 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_568_count);
  llvm_cbe_tmp__167 = ( char *)(&llvm_cbe_A[(((signed long long )llvm_cbe_tmp__166))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__166));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = load i8* %%46, align 1, !dbg !16 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_569_count);
  llvm_cbe_tmp__168 = (unsigned char )*llvm_cbe_tmp__167;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__168);
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = lshr i8 %%47, 4, !dbg !16 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_570_count);
  llvm_cbe_tmp__169 = (unsigned char )((unsigned char )(((unsigned char )(((unsigned char )(llvm_cbe_tmp__168&255ull)) >> ((unsigned char )(((unsigned char )4)&255ull))))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )(llvm_cbe_tmp__169&255ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = or i8 %%48, %%43, !dbg !16 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_571_count);
  llvm_cbe_tmp__170 = (unsigned char )((unsigned char )(llvm_cbe_tmp__169 | llvm_cbe_tmp__164));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__170);
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%49, i8* %%41, align 1, !dbg !16 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_572_count);
  *llvm_cbe_tmp__162 = llvm_cbe_tmp__170;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__170);
  if (((llvm_cbe_tmp__165&4294967295U) == (llvm_cbe_tmp__146&4294967295U))) {
    goto llvm_cbe__2e__crit_edge_2e_us;
  } else {
    llvm_cbe_storemerge310_2e_us__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__165;   /* for PHI node */
    goto llvm_cbe_tmp__190;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e_lr_2e_ph_2e_us:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge2.us = phi i8 [ %%20, %%18 ], [ %%38, %%36 ], [ %%29, %%27 ], [ 0, %%30  for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_storemerge2_2e_us_count);
  llvm_cbe_storemerge2_2e_us = (unsigned char )llvm_cbe_storemerge2_2e_us__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge2.us = 0x%X",llvm_cbe_storemerge2_2e_us);
printf("\n = 0x%X",llvm_cbe_tmp__155);
printf("\n = 0x%X",llvm_cbe_tmp__160);
printf("\n = 0x%X",llvm_cbe_tmp__158);
printf("\n = 0x%X",((unsigned char )0));
}
  llvm_cbe_storemerge310_2e_us__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__190;

llvm_cbe_tmp__191:
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = trunc i32 %%11 to i8, !dbg !18 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_536_count);
  llvm_cbe_tmp__154 = (unsigned char )((unsigned char )llvm_cbe_tmp__148&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__154);
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = add i8 %%19, -48, !dbg !18 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_537_count);
  llvm_cbe_tmp__155 = (unsigned char )((unsigned char )(((unsigned char )(llvm_cbe_tmp__154&255ull)) + ((unsigned char )(((unsigned char )-48)&255ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )(llvm_cbe_tmp__155&255ull)));
  llvm_cbe_storemerge2_2e_us__PHI_TEMPORARY = (unsigned char )llvm_cbe_tmp__155;   /* for PHI node */
  goto llvm_cbe__2e_lr_2e_ph_2e_us;

llvm_cbe_tmp__192:
if (AESL_DEBUG_TRACE)
printf("\n  %%or.cond.us = and i1 %%22, %%23, !dbg !18 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_or_2e_cond_2e_us_count);
  llvm_cbe_or_2e_cond_2e_us = (bool )(((((signed int )llvm_cbe_tmp__148) > ((signed int )47u)) & (((signed int )llvm_cbe_tmp__148) < ((signed int )58u)))&1);
if (AESL_DEBUG_TRACE)
printf("\nor.cond.us = 0x%X\n", llvm_cbe_or_2e_cond_2e_us);
  if (llvm_cbe_or_2e_cond_2e_us) {
    goto llvm_cbe_tmp__191;
  } else {
    goto llvm_cbe_tmp__193;
  }

llvm_cbe_tmp__189:
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = tail call i32 @isxdigit2(i32 %%11), !dbg !18 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_545_count);
  llvm_cbe_tmp__156 = (unsigned int ) /*tail*/ isxdigit2(llvm_cbe_tmp__148);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__148);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__156);
}
  if (((llvm_cbe_tmp__156&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe_tmp__194;
  } else {
    goto llvm_cbe_tmp__192;
  }

llvm_cbe_tmp__195:
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = trunc i32 %%11 to i8, !dbg !18 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_548_count);
  llvm_cbe_tmp__157 = (unsigned char )((unsigned char )llvm_cbe_tmp__148&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__157);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = add i8 %%28, -87, !dbg !18 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_549_count);
  llvm_cbe_tmp__158 = (unsigned char )((unsigned char )(((unsigned char )(llvm_cbe_tmp__157&255ull)) + ((unsigned char )(((unsigned char )-87)&255ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )(llvm_cbe_tmp__158&255ull)));
  llvm_cbe_storemerge2_2e_us__PHI_TEMPORARY = (unsigned char )llvm_cbe_tmp__158;   /* for PHI node */
  goto llvm_cbe__2e_lr_2e_ph_2e_us;

llvm_cbe_tmp__196:
if (AESL_DEBUG_TRACE)
printf("\n  %%or.cond8.us = and i1 %%31, %%32, !dbg !17 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_or_2e_cond8_2e_us_count);
  llvm_cbe_or_2e_cond8_2e_us = (bool )(((((signed int )llvm_cbe_tmp__148) > ((signed int )96u)) & (((signed int )llvm_cbe_tmp__148) < ((signed int )103u)))&1);
if (AESL_DEBUG_TRACE)
printf("\nor.cond8.us = 0x%X\n", llvm_cbe_or_2e_cond8_2e_us);
  if (llvm_cbe_or_2e_cond8_2e_us) {
    goto llvm_cbe_tmp__195;
  } else {
    llvm_cbe_storemerge2_2e_us__PHI_TEMPORARY = (unsigned char )((unsigned char )0);   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph_2e_us;
  }

llvm_cbe_tmp__193:
if (AESL_DEBUG_TRACE)
printf("\n  %%or.cond6.us = and i1 %%34, %%35, !dbg !18 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_or_2e_cond6_2e_us_count);
  llvm_cbe_or_2e_cond6_2e_us = (bool )(((((signed int )llvm_cbe_tmp__148) > ((signed int )64u)) & (((signed int )llvm_cbe_tmp__148) < ((signed int )71u)))&1);
if (AESL_DEBUG_TRACE)
printf("\nor.cond6.us = 0x%X\n", llvm_cbe_or_2e_cond6_2e_us);
  if (llvm_cbe_or_2e_cond6_2e_us) {
    goto llvm_cbe_tmp__197;
  } else {
    goto llvm_cbe_tmp__196;
  }

llvm_cbe_tmp__197:
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = trunc i32 %%11 to i8, !dbg !18 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_558_count);
  llvm_cbe_tmp__159 = (unsigned char )((unsigned char )llvm_cbe_tmp__148&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__159);
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = add i8 %%37, -55, !dbg !18 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_559_count);
  llvm_cbe_tmp__160 = (unsigned char )((unsigned char )(((unsigned char )(llvm_cbe_tmp__159&255ull)) + ((unsigned char )(((unsigned char )-55)&255ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )(llvm_cbe_tmp__160&255ull)));
  llvm_cbe_storemerge2_2e_us__PHI_TEMPORARY = (unsigned char )llvm_cbe_tmp__160;   /* for PHI node */
  goto llvm_cbe__2e_lr_2e_ph_2e_us;

llvm_cbe_tmp__194:
if (AESL_DEBUG_TRACE)
printf("\n  %%or.cond9.us = or i1 %%51, %%52, !dbg !18 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_or_2e_cond9_2e_us_count);
  llvm_cbe_or_2e_cond9_2e_us = (bool )((((llvm_cbe_tmp__147&4294967295U) != (0u&4294967295U)) | ((llvm_cbe_tmp__148&4294967295U) == (10u&4294967295U)))&1);
if (AESL_DEBUG_TRACE)
printf("\nor.cond9.us = 0x%X\n", llvm_cbe_or_2e_cond9_2e_us);
  if (llvm_cbe_or_2e_cond9_2e_us) {
    goto llvm_cbe__2e_us_2d_lcssa_2e_us;
  } else {
    llvm_cbe_tmp__147__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e_split_2e_us;
  }

  } while (1); /* end of syntactic loop '.preheader.split.us' */
llvm_cbe__2e_us_2d_lcssa_2e_us:
  goto llvm_cbe_tmp__198;

  do {     /* Syntactic loop '.preheader..preheader.split_crit_edge' to make GCC happy */
llvm_cbe__2e_preheader_2e__2e_preheader_2e_split_crit_edge:
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = phi i32 [ 0, %%.preheader ], [ 1, %%80 ], [ 0, %%59  for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_592_count);
  llvm_cbe_tmp__171 = (unsigned int )llvm_cbe_tmp__171__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__171);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",1u);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = tail call i32 @fgetc(%%struct._iobuf* %%infile) nounwind, !dbg !15 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_593_count);
  llvm_cbe_tmp__172 = (unsigned int ) /*tail*/ fgetc((l_struct_OC__iobuf *)llvm_cbe_infile);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__172);
}
  if (((llvm_cbe_tmp__172&4294967295U) == (4294967295u&4294967295U))) {
    goto llvm_cbe__2e_us_2d_lcssa;
  } else {
    goto llvm_cbe_tmp__199;
  }

llvm_cbe_tmp__200:
if (AESL_DEBUG_TRACE)
printf("\n  %%or.cond9 = or i1 %%60, %%61, !dbg !18 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_or_2e_cond9_count);
  llvm_cbe_or_2e_cond9 = (bool )((((llvm_cbe_tmp__171&4294967295U) != (0u&4294967295U)) | ((llvm_cbe_tmp__172&4294967295U) == (10u&4294967295U)))&1);
if (AESL_DEBUG_TRACE)
printf("\nor.cond9 = 0x%X\n", llvm_cbe_or_2e_cond9);
  if (llvm_cbe_or_2e_cond9) {
    goto llvm_cbe__2e_us_2d_lcssa;
  } else {
    llvm_cbe_tmp__171__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e__2e_preheader_2e_split_crit_edge;
  }

llvm_cbe_tmp__199:
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = tail call i32 @isxdigit2(i32 %%54), !dbg !18 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_608_count);
  llvm_cbe_tmp__173 = (unsigned int ) /*tail*/ isxdigit2(llvm_cbe_tmp__172);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__172);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__173);
}
  if (((llvm_cbe_tmp__173&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe_tmp__200;
  } else {
    goto llvm_cbe_tmp__201;
  }

llvm_cbe_tmp__202:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge2 = phi i8 [ %%67, %%65 ], [ %%73, %%71 ], [ %%79, %%77 ], [ 0, %%74  for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_storemerge2_count);
  llvm_cbe_storemerge2 = (unsigned char )llvm_cbe_storemerge2__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge2 = 0x%X",llvm_cbe_storemerge2);
printf("\n = 0x%X",llvm_cbe_tmp__175);
printf("\n = 0x%X",llvm_cbe_tmp__177);
printf("\n = 0x%X",llvm_cbe_tmp__179);
printf("\n = 0x%X",((unsigned char )0));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%81 = sext i32 %%8 to i64, !dbg !16 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_644_count);
  llvm_cbe_tmp__180 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__146);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__180);
if (AESL_DEBUG_TRACE)
printf("\n  %%82 = getelementptr inbounds i8* %%A, i64 %%81, !dbg !16 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_645_count);
  llvm_cbe_tmp__181 = ( char *)(&llvm_cbe_A[(((signed long long )llvm_cbe_tmp__180))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__180));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%83 = load i8* %%82, align 1, !dbg !16 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_646_count);
  llvm_cbe_tmp__182 = (unsigned char )*llvm_cbe_tmp__181;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__182);
if (AESL_DEBUG_TRACE)
printf("\n  %%84 = shl i8 %%83, 4, !dbg !16 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_647_count);
  llvm_cbe_tmp__183 = (unsigned char )((unsigned char )(llvm_cbe_tmp__182 << ((unsigned char )4)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__183);
if (AESL_DEBUG_TRACE)
printf("\n  %%85 = or i8 %%84, %%storemerge2, !dbg !16 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_648_count);
  llvm_cbe_tmp__184 = (unsigned char )((unsigned char )(llvm_cbe_tmp__183 | llvm_cbe_storemerge2));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__184);
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%85, i8* %%82, align 1, !dbg !16 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_649_count);
  *llvm_cbe_tmp__181 = llvm_cbe_tmp__184;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__184);
  llvm_cbe_tmp__171__PHI_TEMPORARY = (unsigned int )1u;   /* for PHI node */
  goto llvm_cbe__2e_preheader_2e__2e_preheader_2e_split_crit_edge;

llvm_cbe_tmp__203:
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = trunc i32 %%54 to i8, !dbg !18 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_619_count);
  llvm_cbe_tmp__174 = (unsigned char )((unsigned char )llvm_cbe_tmp__172&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__174);
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = add i8 %%66, -48, !dbg !18 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_620_count);
  llvm_cbe_tmp__175 = (unsigned char )((unsigned char )(((unsigned char )(llvm_cbe_tmp__174&255ull)) + ((unsigned char )(((unsigned char )-48)&255ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )(llvm_cbe_tmp__175&255ull)));
  llvm_cbe_storemerge2__PHI_TEMPORARY = (unsigned char )llvm_cbe_tmp__175;   /* for PHI node */
  goto llvm_cbe_tmp__202;

llvm_cbe_tmp__201:
if (AESL_DEBUG_TRACE)
printf("\n  %%or.cond = and i1 %%63, %%64, !dbg !18 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_or_2e_cond_count);
  llvm_cbe_or_2e_cond = (bool )(((((signed int )llvm_cbe_tmp__172) > ((signed int )47u)) & (((signed int )llvm_cbe_tmp__172) < ((signed int )58u)))&1);
if (AESL_DEBUG_TRACE)
printf("\nor.cond = 0x%X\n", llvm_cbe_or_2e_cond);
  if (llvm_cbe_or_2e_cond) {
    goto llvm_cbe_tmp__203;
  } else {
    goto llvm_cbe_tmp__204;
  }

llvm_cbe_tmp__205:
if (AESL_DEBUG_TRACE)
printf("\n  %%72 = trunc i32 %%54 to i8, !dbg !18 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_626_count);
  llvm_cbe_tmp__176 = (unsigned char )((unsigned char )llvm_cbe_tmp__172&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__176);
if (AESL_DEBUG_TRACE)
printf("\n  %%73 = add i8 %%72, -55, !dbg !18 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_627_count);
  llvm_cbe_tmp__177 = (unsigned char )((unsigned char )(((unsigned char )(llvm_cbe_tmp__176&255ull)) + ((unsigned char )(((unsigned char )-55)&255ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )(llvm_cbe_tmp__177&255ull)));
  llvm_cbe_storemerge2__PHI_TEMPORARY = (unsigned char )llvm_cbe_tmp__177;   /* for PHI node */
  goto llvm_cbe_tmp__202;

llvm_cbe_tmp__204:
if (AESL_DEBUG_TRACE)
printf("\n  %%or.cond6 = and i1 %%69, %%70, !dbg !18 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_or_2e_cond6_count);
  llvm_cbe_or_2e_cond6 = (bool )(((((signed int )llvm_cbe_tmp__172) > ((signed int )64u)) & (((signed int )llvm_cbe_tmp__172) < ((signed int )71u)))&1);
if (AESL_DEBUG_TRACE)
printf("\nor.cond6 = 0x%X\n", llvm_cbe_or_2e_cond6);
  if (llvm_cbe_or_2e_cond6) {
    goto llvm_cbe_tmp__205;
  } else {
    goto llvm_cbe_tmp__206;
  }

llvm_cbe_tmp__206:
if (AESL_DEBUG_TRACE)
printf("\n  %%or.cond8 = and i1 %%75, %%76, !dbg !17 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_or_2e_cond8_count);
  llvm_cbe_or_2e_cond8 = (bool )(((((signed int )llvm_cbe_tmp__172) > ((signed int )96u)) & (((signed int )llvm_cbe_tmp__172) < ((signed int )103u)))&1);
if (AESL_DEBUG_TRACE)
printf("\nor.cond8 = 0x%X\n", llvm_cbe_or_2e_cond8);
  if (llvm_cbe_or_2e_cond8) {
    goto llvm_cbe_tmp__207;
  } else {
    llvm_cbe_storemerge2__PHI_TEMPORARY = (unsigned char )((unsigned char )0);   /* for PHI node */
    goto llvm_cbe_tmp__202;
  }

llvm_cbe_tmp__207:
if (AESL_DEBUG_TRACE)
printf("\n  %%78 = trunc i32 %%54 to i8, !dbg !18 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_633_count);
  llvm_cbe_tmp__178 = (unsigned char )((unsigned char )llvm_cbe_tmp__172&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__178);
if (AESL_DEBUG_TRACE)
printf("\n  %%79 = add i8 %%78, -87, !dbg !18 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_634_count);
  llvm_cbe_tmp__179 = (unsigned char )((unsigned char )(((unsigned char )(llvm_cbe_tmp__178&255ull)) + ((unsigned char )(((unsigned char )-87)&255ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )(llvm_cbe_tmp__179&255ull)));
  llvm_cbe_storemerge2__PHI_TEMPORARY = (unsigned char )llvm_cbe_tmp__179;   /* for PHI node */
  goto llvm_cbe_tmp__202;

  } while (1); /* end of syntactic loop '.preheader..preheader.split_crit_edge' */
llvm_cbe__2e_us_2d_lcssa:
  goto llvm_cbe_tmp__198;

llvm_cbe_tmp__198:
  llvm_cbe_tmp__185__PHI_TEMPORARY = (unsigned int )1u;   /* for PHI node */
  goto llvm_cbe_tmp__188;

llvm_cbe_tmp__188:
if (AESL_DEBUG_TRACE)
printf("\n  %%88 = phi i32 [ 1, %%86 ], [ 1, %%2 ], [ 0, %%3  for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_653_count);
  llvm_cbe_tmp__185 = (unsigned int )llvm_cbe_tmp__185__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__185);
printf("\n = 0x%X",1u);
printf("\n = 0x%X",1u);
printf("\n = 0x%X",0u);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @ReadHex}\n");
  return llvm_cbe_tmp__185;
}

