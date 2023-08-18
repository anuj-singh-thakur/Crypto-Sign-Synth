# 1 "dilithium2/sign.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 338 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "/home/shikha/Vivado/Vitis_HLS/2022.2/common/technology/autopilot/etc/autopilot_ssdm_op.h" 1
# 269 "/home/shikha/Vivado/Vitis_HLS/2022.2/common/technology/autopilot/etc/autopilot_ssdm_op.h"
    void _ssdm_op_IfRead() __attribute__ ((nothrow));
    void _ssdm_op_IfWrite() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfNbRead() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfNbWrite() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfCanRead() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfCanWrite() __attribute__ ((nothrow));


    void _ssdm_StreamRead() __attribute__ ((nothrow));
    void _ssdm_StreamWrite() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamNbRead() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamNbWrite() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamCanRead() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamCanWrite() __attribute__ ((nothrow));
    void _ssdm_op_ReadReq() __attribute__ ((nothrow));
    void _ssdm_op_Read() __attribute__ ((nothrow));
    void _ssdm_op_WriteReq() __attribute__ ((nothrow));
    void _ssdm_op_Write() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_NbReadReq() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_CanReadReq() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_NbWriteReq() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_CanWriteReq() __attribute__ ((nothrow));




    void _ssdm_op_MemShiftRead() __attribute__ ((nothrow));

    void _ssdm_op_PrintNone() __attribute__ ((nothrow));
    void _ssdm_op_PrintInt() __attribute__ ((nothrow));
    void _ssdm_op_PrintDouble() __attribute__ ((nothrow));

    void _ssdm_op_Wait() __attribute__ ((nothrow));
    void _ssdm_op_Poll() __attribute__ ((nothrow));

    void _ssdm_op_Return() __attribute__ ((nothrow));


    void _ssdm_op_SpecSynModule() __attribute__ ((nothrow));
    void _ssdm_op_SpecTopModule() __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDecl() __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDef() __attribute__ ((nothrow));
    void _ssdm_op_SpecPort() __attribute__ ((nothrow));
    void _ssdm_op_SpecConnection() __attribute__ ((nothrow));
    void _ssdm_op_SpecChannel() __attribute__ ((nothrow));
    void _ssdm_op_SpecSensitive() __attribute__ ((nothrow));
    void _ssdm_op_SpecModuleInst() __attribute__ ((nothrow));
    void _ssdm_op_SpecPortMap() __attribute__ ((nothrow));

    void _ssdm_op_SpecReset() __attribute__ ((nothrow));

    void _ssdm_op_SpecPlatform() __attribute__ ((nothrow));
    void _ssdm_op_SpecClockDomain() __attribute__ ((nothrow));
    void _ssdm_op_SpecPowerDomain() __attribute__ ((nothrow));

    int _ssdm_op_SpecRegionBegin() __attribute__ ((nothrow));
    int _ssdm_op_SpecRegionEnd() __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopName() __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopTripCount() __attribute__ ((nothrow));

    int _ssdm_op_SpecStateBegin() __attribute__ ((nothrow));
    int _ssdm_op_SpecStateEnd() __attribute__ ((nothrow));

    void _ssdm_op_SpecInterface() __attribute__ ((nothrow));

    void _ssdm_op_SpecPipeline() __attribute__ ((nothrow));
    void _ssdm_op_SpecDataflowPipeline() __attribute__ ((nothrow));


    void _ssdm_op_SpecLatency() __attribute__ ((nothrow));
    void _ssdm_op_SpecParallel() __attribute__ ((nothrow));
    void _ssdm_op_SpecProtocol() __attribute__ ((nothrow));
    void _ssdm_op_SpecOccurrence() __attribute__ ((nothrow));

    void _ssdm_op_SpecResource() __attribute__ ((nothrow));
    void _ssdm_op_SpecResourceLimit() __attribute__ ((nothrow));
    void _ssdm_op_SpecCHCore() __attribute__ ((nothrow));
    void _ssdm_op_SpecFUCore() __attribute__ ((nothrow));
    void _ssdm_op_SpecIFCore() __attribute__ ((nothrow));
    void _ssdm_op_SpecIPCore() __attribute__ ((nothrow));
    void _ssdm_op_SpecMemCore() __attribute__ ((nothrow));

    void _ssdm_op_SpecExt() __attribute__ ((nothrow));




    void _ssdm_SpecArrayDimSize() __attribute__ ((nothrow));

    void _ssdm_RegionBegin() __attribute__ ((nothrow));
    void _ssdm_RegionEnd() __attribute__ ((nothrow));

    void _ssdm_Unroll() __attribute__ ((nothrow));
    void _ssdm_UnrollRegion() __attribute__ ((nothrow));

    void _ssdm_InlineAll() __attribute__ ((nothrow));
    void _ssdm_InlineLoop() __attribute__ ((nothrow));
    void _ssdm_Inline() __attribute__ ((nothrow));
    void _ssdm_InlineSelf() __attribute__ ((nothrow));
    void _ssdm_InlineRegion() __attribute__ ((nothrow));

    void _ssdm_SpecArrayMap() __attribute__ ((nothrow));
    void _ssdm_SpecArrayPartition() __attribute__ ((nothrow));
    void _ssdm_SpecArrayReshape() __attribute__ ((nothrow));

    void _ssdm_SpecStream() __attribute__ ((nothrow));

    void _ssdm_op_SpecStable() __attribute__ ((nothrow));
    void _ssdm_op_SpecStableContent() __attribute__ ((nothrow));

    void _ssdm_op_SpecBindPort() __attribute__ ((nothrow));

    void _ssdm_op_SpecPipoDepth() __attribute__ ((nothrow));

    void _ssdm_SpecExpr() __attribute__ ((nothrow));
    void _ssdm_SpecExprBalance() __attribute__ ((nothrow));

    void _ssdm_SpecDependence() __attribute__ ((nothrow));

    void _ssdm_SpecLoopMerge() __attribute__ ((nothrow));
    void _ssdm_SpecLoopFlatten() __attribute__ ((nothrow));
    void _ssdm_SpecLoopRewind() __attribute__ ((nothrow));

    void _ssdm_SpecFuncInstantiation() __attribute__ ((nothrow));
    void _ssdm_SpecFuncBuffer() __attribute__ ((nothrow));
    void _ssdm_SpecFuncExtract() __attribute__ ((nothrow));
    void _ssdm_SpecConstant() __attribute__ ((nothrow));

    void _ssdm_DataPack() __attribute__ ((nothrow));
    void _ssdm_SpecDataPack() __attribute__ ((nothrow));

    void _ssdm_op_SpecBitsMap() __attribute__ ((nothrow));
    void _ssdm_op_SpecLicense() __attribute__ ((nothrow));
# 2 "<built-in>" 2
# 1 "dilithium2/sign.c" 2
# 1 "/home/shikha/Vivado/Vitis_HLS/2022.2/lnx64/tools/clang-3.9-csynth/lib/clang/7.0.0/include/stdint.h" 1 3
# 63 "/home/shikha/Vivado/Vitis_HLS/2022.2/lnx64/tools/clang-3.9-csynth/lib/clang/7.0.0/include/stdint.h" 3
# 1 "/usr/include/stdint.h" 1 3 4
# 26 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 392 "/usr/include/features.h" 3 4
# 1 "/usr/include/features-time64.h" 1 3 4
# 20 "/usr/include/features-time64.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 21 "/usr/include/features-time64.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/timesize.h" 1 3 4
# 19 "/usr/include/x86_64-linux-gnu/bits/timesize.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 20 "/usr/include/x86_64-linux-gnu/bits/timesize.h" 2 3 4
# 22 "/usr/include/features-time64.h" 2 3 4
# 393 "/usr/include/features.h" 2 3 4
# 464 "/usr/include/features.h" 3 4
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 465 "/usr/include/features.h" 2 3 4
# 486 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 559 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 560 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
# 561 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 487 "/usr/include/features.h" 2 3 4
# 510 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 511 "/usr/include/features.h" 2 3 4
# 34 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 2 3 4
# 27 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/timesize.h" 1 3 4
# 19 "/usr/include/x86_64-linux-gnu/bits/timesize.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 20 "/usr/include/x86_64-linux-gnu/bits/timesize.h" 2 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;






typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;



typedef long int __quad_t;
typedef unsigned long int __u_quad_t;







typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
# 141 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 142 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/time64.h" 1 3 4
# 143 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
typedef long int __suseconds64_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;




typedef int __sig_atomic_t;
# 28 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wchar.h" 1 3 4
# 29 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 30 "/usr/include/stdint.h" 2 3 4




# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 3 4
typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
# 35 "/usr/include/stdint.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h" 3 4
typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
# 38 "/usr/include/stdint.h" 2 3 4





typedef __int_least8_t int_least8_t;
typedef __int_least16_t int_least16_t;
typedef __int_least32_t int_least32_t;
typedef __int_least64_t int_least64_t;


typedef __uint_least8_t uint_least8_t;
typedef __uint_least16_t uint_least16_t;
typedef __uint_least32_t uint_least32_t;
typedef __uint_least64_t uint_least64_t;





typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 71 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 87 "/usr/include/stdint.h" 3 4
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
# 101 "/usr/include/stdint.h" 3 4
typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;
# 64 "/home/shikha/Vivado/Vitis_HLS/2022.2/lnx64/tools/clang-3.9-csynth/lib/clang/7.0.0/include/stdint.h" 2 3
# 2 "dilithium2/sign.c" 2
# 1 "dilithium2/params.h" 1



# 1 "dilithium2/config.h" 1
# 5 "dilithium2/params.h" 2
# 3 "dilithium2/sign.c" 2
# 1 "dilithium2/sign.h" 1



# 1 "/home/shikha/Vivado/Vitis_HLS/2022.2/lnx64/tools/clang-3.9-csynth/lib/clang/7.0.0/include/stddef.h" 1 3
# 51 "/home/shikha/Vivado/Vitis_HLS/2022.2/lnx64/tools/clang-3.9-csynth/lib/clang/7.0.0/include/stddef.h" 3
typedef long int ptrdiff_t;
# 62 "/home/shikha/Vivado/Vitis_HLS/2022.2/lnx64/tools/clang-3.9-csynth/lib/clang/7.0.0/include/stddef.h" 3
typedef long unsigned int size_t;
# 90 "/home/shikha/Vivado/Vitis_HLS/2022.2/lnx64/tools/clang-3.9-csynth/lib/clang/7.0.0/include/stddef.h" 3
typedef int wchar_t;
# 5 "dilithium2/sign.h" 2


# 1 "dilithium2/polyvec.h" 1





# 1 "dilithium2/poly.h" 1






typedef struct {
  int32_t coeffs[256];
} poly;


void pqcrystals_dilithium2_ref_poly_reduce(poly *a);

void pqcrystals_dilithium2_ref_poly_caddq(poly *a);

void pqcrystals_dilithium2_ref_poly_freeze(poly *a);


void pqcrystals_dilithium2_ref_poly_add(poly *c, const poly *a, const poly *b);

void pqcrystals_dilithium2_ref_poly_sub(poly *c, const poly *a, const poly *b);

void pqcrystals_dilithium2_ref_poly_shiftl(poly *a);


void pqcrystals_dilithium2_ref_poly_ntt(poly *a);

void pqcrystals_dilithium2_ref_poly_invntt_tomont(poly *a);

void pqcrystals_dilithium2_ref_poly_pointwise_montgomery(poly *c, const poly *a, const poly *b);


void pqcrystals_dilithium2_ref_poly_power2round(poly *a1, poly *a0, const poly *a);

void pqcrystals_dilithium2_ref_poly_decompose(poly *a1, poly *a0, const poly *a);

unsigned int pqcrystals_dilithium2_ref_poly_make_hint(poly *h, const poly *a0, const poly *a1);

void pqcrystals_dilithium2_ref_poly_use_hint(poly *b, const poly *a, const poly *h);


int pqcrystals_dilithium2_ref_poly_chknorm(const poly *a, int32_t B);

void pqcrystals_dilithium2_ref_poly_uniform(poly *a,
                  const uint8_t seed[32],
                  uint16_t nonce);

void pqcrystals_dilithium2_ref_poly_uniform_eta(poly *a,
                      const uint8_t seed[32],
                      uint16_t nonce);

void pqcrystals_dilithium2_ref_poly_uniform_gamma1(poly *a,
                         const uint8_t seed[48],
                         uint16_t nonce);

void pqcrystals_dilithium2_ref_poly_challenge(poly *c, const uint8_t seed[32]);


void pqcrystals_dilithium2_ref_polyeta_pack(uint8_t *r, const poly *a);

void pqcrystals_dilithium2_ref_polyeta_unpack(poly *r, const uint8_t *a);


void pqcrystals_dilithium2_ref_polyt1_pack(uint8_t *r, const poly *a);

void pqcrystals_dilithium2_ref_polyt1_unpack(poly *r, const uint8_t *a);


void pqcrystals_dilithium2_ref_polyt0_pack(uint8_t *r, const poly *a);

void pqcrystals_dilithium2_ref_polyt0_unpack(poly *r, const uint8_t *a);


void pqcrystals_dilithium2_ref_polyz_pack(uint8_t *r, const poly *a);

void pqcrystals_dilithium2_ref_polyz_unpack(poly *r, const uint8_t *a);


void pqcrystals_dilithium2_ref_polyw1_pack(uint8_t *r, const poly *a);
# 7 "dilithium2/polyvec.h" 2


typedef struct {
  poly vec[4];
} polyvecl;


void pqcrystals_dilithium2_ref_polyvecl_uniform_eta(polyvecl *v, const uint8_t seed[32], uint16_t nonce);


void pqcrystals_dilithium2_ref_polyvecl_uniform_gamma1(polyvecl *v, const uint8_t seed[32], uint16_t nonce);


void pqcrystals_dilithium2_ref_polyvecl_reduce(polyvecl *v);


void pqcrystals_dilithium2_ref_polyvecl_freeze(polyvecl *v);


void pqcrystals_dilithium2_ref_polyvecl_add(polyvecl *w, const polyvecl *u, const polyvecl *v);


void pqcrystals_dilithium2_ref_polyvecl_ntt(polyvecl *v);

void pqcrystals_dilithium2_ref_polyvecl_invntt_tomont(polyvecl *v);

void pqcrystals_dilithium2_ref_polyvecl_pointwise_poly_montgomery(polyvecl *r, const poly *a, const polyvecl *v);


void pqcrystals_dilithium2_ref_polyvecl_pointwise_acc_montgomery(poly *w,
                                       const polyvecl *u,
                                       const polyvecl *v);



int pqcrystals_dilithium2_ref_polyvecl_chknorm(const polyvecl *v, int32_t B);




typedef struct {
  poly vec[4];
} polyveck;


void pqcrystals_dilithium2_ref_polyveck_uniform_eta(polyveck *v, const uint8_t seed[32], uint16_t nonce);


void pqcrystals_dilithium2_ref_polyveck_reduce(polyveck *v);

void pqcrystals_dilithium2_ref_polyveck_caddq(polyveck *v);

void pqcrystals_dilithium2_ref_polyveck_freeze(polyveck *v);


void pqcrystals_dilithium2_ref_polyveck_add(polyveck *w, const polyveck *u, const polyveck *v);

void pqcrystals_dilithium2_ref_polyveck_sub(polyveck *w, const polyveck *u, const polyveck *v);

void pqcrystals_dilithium2_ref_polyveck_shiftl(polyveck *v);


void pqcrystals_dilithium2_ref_polyveck_ntt(polyveck *v);

void pqcrystals_dilithium2_ref_polyveck_invntt_tomont(polyveck *v);

void pqcrystals_dilithium2_ref_polyveck_pointwise_poly_montgomery(polyveck *r, const poly *a, const polyveck *v);


int pqcrystals_dilithium2_ref_polyveck_chknorm(const polyveck *v, int32_t B);


void pqcrystals_dilithium2_ref_polyveck_power2round(polyveck *v1, polyveck *v0, const polyveck *v);

void pqcrystals_dilithium2_ref_polyveck_decompose(polyveck *v1, polyveck *v0, const polyveck *v);

unsigned int pqcrystals_dilithium2_ref_polyveck_make_hint(polyveck *h,
                                const polyveck *v0,
                                const polyveck *v1);

void pqcrystals_dilithium2_ref_polyveck_use_hint(polyveck *w, const polyveck *v, const polyveck *h);


void pqcrystals_dilithium2_ref_polyveck_pack_w1(uint8_t r[4*192], const polyveck *w1);


void pqcrystals_dilithium2_ref_polyvec_matrix_expand(polyvecl mat[4], const uint8_t rho[32]);


void pqcrystals_dilithium2_ref_polyvec_matrix_pointwise_montgomery(polyveck *t, const polyvecl mat[4], const polyvecl *v);
# 8 "dilithium2/sign.h" 2



void pqcrystals_dilithium2_ref_challenge(poly *c, const uint8_t seed[32]);


int pqcrystals_dilithium2_ref_keypair(uint8_t *pk, uint8_t *sk);


int pqcrystals_dilithium2_ref_signature(uint8_t *sig, size_t *siglen,
                          const uint8_t *m, size_t mlen,
                          const uint8_t *sk);


__attribute__((sdx_kernel("pqcrystals_dilithium2_ref", 0))) int pqcrystals_dilithium2_ref(uint8_t *sm, size_t *smlen,
                const uint8_t *m, size_t mlen,
                const uint8_t *sk);


int pqcrystals_dilithium2_ref_verify(const uint8_t *sig, size_t siglen,
                       const uint8_t *m, size_t mlen,
                       const uint8_t *pk);


int pqcrystals_dilithium2_ref_open(uint8_t *m, size_t *mlen,
                     const uint8_t *sm, size_t smlen,
                     const uint8_t *pk);
# 4 "dilithium2/sign.c" 2
# 1 "dilithium2/packing.h" 1








void pqcrystals_dilithium2_ref_pack_pk(uint8_t pk[(32 + 4*320)],
             const uint8_t rho[32], const polyveck *t1);


void pqcrystals_dilithium2_ref_pack_sk(uint8_t sk[(2*32 + 48 + 4*96 + 4*96 + 4*416)],
             const uint8_t rho[32],
             const uint8_t tr[48],
             const uint8_t key[32],
             const polyveck *t0,
             const polyvecl *s1,
             const polyveck *s2);


void pqcrystals_dilithium2_ref_pack_sig(uint8_t sig[(32 + 4*576 + (80 + 4))],
              const uint8_t c[32], const polyvecl *z, const polyveck *h);


void pqcrystals_dilithium2_ref_unpack_pk(uint8_t rho[32], polyveck *t1,
               const uint8_t pk[(32 + 4*320)]);


void pqcrystals_dilithium2_ref_upack_sk(uint8_t rho[32],
               uint8_t tr[48],
               uint8_t key[32],
               polyveck *t0,
               polyvecl *s1,
               polyveck *s2,
               const uint8_t sk[(2*32 + 48 + 4*96 + 4*96 + 4*416)]);


int pqcrystals_dilithium2_ref_unpack_sig(uint8_t c[32], polyvecl *z, polyveck *h,
               const uint8_t sig[(32 + 4*576 + (80 + 4))]);
# 5 "dilithium2/sign.c" 2


# 1 "dilithium2/randombytes.h" 1



# 1 "/home/shikha/Vivado/Vitis_HLS/2022.2/lnx64/tools/clang-3.9-csynth/lib/clang/7.0.0/include/stddef.h" 1 3
# 5 "dilithium2/randombytes.h" 2


void randombytes(uint8_t *out, size_t outlen);
# 8 "dilithium2/sign.c" 2
# 1 "dilithium2/symmetric.h" 1
# 35 "dilithium2/symmetric.h"
# 1 "dilithium2/fips202.h" 1



# 1 "/home/shikha/Vivado/Vitis_HLS/2022.2/lnx64/tools/clang-3.9-csynth/lib/clang/7.0.0/include/stddef.h" 1 3
# 5 "dilithium2/fips202.h" 2
# 15 "dilithium2/fips202.h"
typedef struct {
  uint64_t s[25];
  unsigned int pos;
} keccak_state;


void shake128_init(keccak_state *state);

void shake128_absorb(keccak_state *state, const uint8_t *in, size_t inlen);

void shake128_finalize(keccak_state *state);

void shake128_squeezeblocks(uint8_t *out, size_t nblocks, keccak_state *state);

void shake128_squeeze(uint8_t *out, size_t outlen, keccak_state *state);


void shake256_init(keccak_state state[1]);

void shake256_absorb(keccak_state state[1], const uint8_t *in, size_t inlen);

void shake256_finalize(keccak_state state[1]);

void shake256_squeezeblocks(uint8_t *out, size_t nblocks, keccak_state state[1]);

void shake256_squeeze(uint8_t *out, size_t outlen, keccak_state state[1]);


void shake128(uint8_t *out, size_t outlen, const uint8_t *in, size_t inlen);

void shake256(uint8_t out[3*32], size_t outlen, const uint8_t in[32], size_t inlen);

void sha3_256(uint8_t h[32], const uint8_t *in, size_t inlen);

void sha3_512(uint8_t h[64], const uint8_t *in, size_t inlen);
# 36 "dilithium2/symmetric.h" 2

typedef keccak_state stream128_state;
typedef keccak_state stream256_state;


void pqcrystals_dilithium2_ref_dilithium_shake128_stream_init(keccak_state *state,
                                    const uint8_t seed[32],
                                    uint16_t nonce);


void pqcrystals_dilithium2_ref_dilithium_shake256_stream_init(keccak_state *state,
                                    const uint8_t seed[48],
                                    uint16_t nonce);
# 9 "dilithium2/sign.c" 2
# 23 "dilithium2/sign.c"
int pqcrystals_dilithium2_ref_keypair(uint8_t *pk, uint8_t *sk) {
  uint8_t seedbuf[3*32];
  uint8_t tr[48];
  const uint8_t *rho, *rhoprime, *key;
  polyvecl mat[4];
  polyvecl s1, s1hat;
  polyveck s2, t1, t0;


  randombytes(seedbuf, 32);
  shake256(seedbuf, 3*32, seedbuf, 32);
  rho = seedbuf;
  rhoprime = seedbuf + 32;
  key = seedbuf + 2*32;


  pqcrystals_dilithium2_ref_polyvec_matrix_expand(mat, rho);


  pqcrystals_dilithium2_ref_polyvecl_uniform_eta(&s1, rhoprime, 0);
  pqcrystals_dilithium2_ref_polyveck_uniform_eta(&s2, rhoprime, 4);


  s1hat = s1;
  pqcrystals_dilithium2_ref_polyvecl_ntt(&s1hat);
  pqcrystals_dilithium2_ref_polyvec_matrix_pointwise_montgomery(&t1, mat, &s1hat);
  pqcrystals_dilithium2_ref_polyveck_reduce(&t1);
  pqcrystals_dilithium2_ref_polyveck_invntt_tomont(&t1);


  pqcrystals_dilithium2_ref_polyveck_add(&t1, &t1, &s2);


  pqcrystals_dilithium2_ref_polyveck_caddq(&t1);
  pqcrystals_dilithium2_ref_polyveck_power2round(&t1, &t0, &t1);
  pqcrystals_dilithium2_ref_pack_pk(pk, rho, &t1);


  shake256(tr, 48, pk, (32 + 4*320));
  pqcrystals_dilithium2_ref_pack_sk(sk, rho, tr, key, &t0, &s1, &s2);

  return 0;
}
# 80 "dilithium2/sign.c"
int pqcrystals_dilithium2_ref_signature(uint8_t *sig,
                          size_t *siglen,
                          const uint8_t *m,
                          size_t mlen,
                          const uint8_t *sk)
{
  unsigned int n;
  uint8_t seedbuf[2*32 + 3*48];
  uint8_t *rho, *tr, *key, *mu, *rhoprime;
  uint16_t nonce = 0;
  polyvecl mat[4], s1, y, z;
  polyveck t0, s2, w1, w0, h;
  poly cp;
  keccak_state state;

  rho = seedbuf;
  tr = rho + 32;
  key = tr + 48;
  mu = key + 32;
  rhoprime = mu + 48;
  pqcrystals_dilithium2_ref_upack_sk(rho, tr, key, &t0, &s1, &s2, sk);


  shake256_init(&state);
  shake256_absorb(&state, tr, 48);
  shake256_absorb(&state, m, mlen);
  shake256_finalize(&state);
  shake256_squeeze(mu, 48, &state);




  shake256(rhoprime, 48, key, 32 + 48);



  pqcrystals_dilithium2_ref_polyvec_matrix_expand(mat, rho);
  pqcrystals_dilithium2_ref_polyvecl_ntt(&s1);
  pqcrystals_dilithium2_ref_polyveck_ntt(&s2);
  pqcrystals_dilithium2_ref_polyveck_ntt(&t0);

rej:

  pqcrystals_dilithium2_ref_polyvecl_uniform_gamma1(&y, rhoprime, nonce++);
  z = y;
  pqcrystals_dilithium2_ref_polyvecl_ntt(&z);


  pqcrystals_dilithium2_ref_polyvec_matrix_pointwise_montgomery(&w1, mat, &z);
  pqcrystals_dilithium2_ref_polyveck_reduce(&w1);
  pqcrystals_dilithium2_ref_polyveck_invntt_tomont(&w1);


  pqcrystals_dilithium2_ref_polyveck_caddq(&w1);
  pqcrystals_dilithium2_ref_polyveck_decompose(&w1, &w0, &w1);
  pqcrystals_dilithium2_ref_polyveck_pack_w1(sig, &w1);

  shake256_init(&state);
  shake256_absorb(&state, mu, 48);
  shake256_absorb(&state, sig, 4*192);
  shake256_finalize(&state);
  shake256_squeeze(sig, 32, &state);
  pqcrystals_dilithium2_ref_poly_challenge(&cp, sig);
  pqcrystals_dilithium2_ref_poly_ntt(&cp);


  pqcrystals_dilithium2_ref_polyvecl_pointwise_poly_montgomery(&z, &cp, &s1);
  pqcrystals_dilithium2_ref_polyvecl_invntt_tomont(&z);
  pqcrystals_dilithium2_ref_polyvecl_add(&z, &z, &y);
  pqcrystals_dilithium2_ref_polyvecl_reduce(&z);
  if(pqcrystals_dilithium2_ref_polyvecl_chknorm(&z, (1 << 17) - 78))
    goto rej;



  pqcrystals_dilithium2_ref_polyveck_pointwise_poly_montgomery(&h, &cp, &s2);
  pqcrystals_dilithium2_ref_polyveck_invntt_tomont(&h);
  pqcrystals_dilithium2_ref_polyveck_sub(&w0, &w0, &h);
  pqcrystals_dilithium2_ref_polyveck_reduce(&w0);
  if(pqcrystals_dilithium2_ref_polyveck_chknorm(&w0, ((8380417 -1)/88) - 78))
    goto rej;


  pqcrystals_dilithium2_ref_polyveck_pointwise_poly_montgomery(&h, &cp, &t0);
  pqcrystals_dilithium2_ref_polyveck_invntt_tomont(&h);
  pqcrystals_dilithium2_ref_polyveck_reduce(&h);
  if(pqcrystals_dilithium2_ref_polyveck_chknorm(&h, ((8380417 -1)/88)))
    goto rej;

  pqcrystals_dilithium2_ref_polyveck_add(&w0, &w0, &h);
  pqcrystals_dilithium2_ref_polyveck_caddq(&w0);
  n = pqcrystals_dilithium2_ref_polyveck_make_hint(&h, &w0, &w1);
  if(n > 80)
    goto rej;


  pqcrystals_dilithium2_ref_pack_sig(sig, sig, &z, &h);
  *siglen = (32 + 4*576 + (80 + 4));
  return 0;
}
# 197 "dilithium2/sign.c"
__attribute__((sdx_kernel("pqcrystals_dilithium2_ref", 0))) int pqcrystals_dilithium2_ref(uint8_t sm[3300+(32 + 4*576 + (80 + 4))],
                size_t *smlen,
                const uint8_t m[3300],
                size_t mlen,
                const uint8_t sk[(2*32 + 48 + 4*96 + 4*96 + 4*416)])
{
#line 43 "/home/shikha/Final_Assignment/crypto_sign/solution1/csynth.tcl"
#pragma HLSDIRECTIVE TOP name=pqcrystals_dilithium2_ref
# 202 "dilithium2/sign.c"

  size_t i;

  VITIS_LOOP_205_1: for(i = 0; i < mlen; ++i)
    sm[(32 + 4*576 + (80 + 4)) + mlen - 1 - i] = m[mlen - 1 - i];
  pqcrystals_dilithium2_ref_signature(sm, smlen, sm + (32 + 4*576 + (80 + 4)), mlen, sk);
  *smlen += mlen;
  return 0;
}
# 225 "dilithium2/sign.c"
int pqcrystals_dilithium2_ref_verify(const uint8_t *sig,
                       size_t siglen,
                       const uint8_t *m,
                       size_t mlen,
                       const uint8_t *pk)
{
  unsigned int i;
  uint8_t buf[4*192];
  uint8_t rho[32];
  uint8_t mu[48];
  uint8_t c[32];
  uint8_t c2[32];
  poly cp;
  polyvecl mat[4], z;
  polyveck t1, w1, h;
  keccak_state state;

  if(siglen != (32 + 4*576 + (80 + 4)))
    return -1;

  pqcrystals_dilithium2_ref_unpack_pk(rho, &t1, pk);
  if(pqcrystals_dilithium2_ref_unpack_sig(c, &z, &h, sig))
    return -1;
  if(pqcrystals_dilithium2_ref_polyvecl_chknorm(&z, (1 << 17) - 78))
    return -1;


  shake256(mu, 48, pk, (32 + 4*320));
  shake256_init(&state);
  shake256_absorb(&state, mu, 48);
  shake256_absorb(&state, m, mlen);
  shake256_finalize(&state);
  shake256_squeeze(mu, 48, &state);


  pqcrystals_dilithium2_ref_poly_challenge(&cp, c);
  pqcrystals_dilithium2_ref_polyvec_matrix_expand(mat, rho);

  pqcrystals_dilithium2_ref_polyvecl_ntt(&z);
  pqcrystals_dilithium2_ref_polyvec_matrix_pointwise_montgomery(&w1, mat, &z);

  pqcrystals_dilithium2_ref_poly_ntt(&cp);
  pqcrystals_dilithium2_ref_polyveck_shiftl(&t1);
  pqcrystals_dilithium2_ref_polyveck_ntt(&t1);
  pqcrystals_dilithium2_ref_polyveck_pointwise_poly_montgomery(&t1, &cp, &t1);

  pqcrystals_dilithium2_ref_polyveck_sub(&w1, &w1, &t1);
  pqcrystals_dilithium2_ref_polyveck_reduce(&w1);
  pqcrystals_dilithium2_ref_polyveck_invntt_tomont(&w1);


  pqcrystals_dilithium2_ref_polyveck_caddq(&w1);
  pqcrystals_dilithium2_ref_polyveck_use_hint(&w1, &w1, &h);
  pqcrystals_dilithium2_ref_polyveck_pack_w1(buf, &w1);


  shake256_init(&state);
  shake256_absorb(&state, mu, 48);
  shake256_absorb(&state, buf, 4*192);
  shake256_finalize(&state);
  shake256_squeeze(c2, 32, &state);
  VITIS_LOOP_286_1: for(i = 0; i < 32; ++i)
    if(c[i] != c2[i])
      return -1;

  return 0;
}
# 307 "dilithium2/sign.c"
int pqcrystals_dilithium2_ref_open(uint8_t *m,
                     size_t *mlen,
                     const uint8_t *sm,
                     size_t smlen,
                     const uint8_t *pk)
{
  size_t i;

  if(smlen < (32 + 4*576 + (80 + 4)))
    goto badsig;

  *mlen = smlen - (32 + 4*576 + (80 + 4));
  if(pqcrystals_dilithium2_ref_verify(sm, (32 + 4*576 + (80 + 4)), sm + (32 + 4*576 + (80 + 4)), *mlen, pk))
    goto badsig;
  else {

    VITIS_LOOP_323_1: for(i = 0; i < *mlen; ++i)
      m[i] = sm[(32 + 4*576 + (80 + 4)) + i];
    return 0;
  }

badsig:

  *mlen = -1;
  VITIS_LOOP_331_2: for(i = 0; i < smlen; ++i)
    m[i] = 0;

  return -1;
}
