// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2022.2 (64-bit)
// Tool Version Limit: 2019.12
// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// ==============================================================
# 1 "/home/shikha/Final_Assignment/dilithium2/poly.c"
# 1 "/home/shikha/Final_Assignment/dilithium2/poly.c" 1
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 149 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "/home/shikha/Final_Assignment/dilithium2/poly.c" 2
# 1 "/home/shikha/Vivado/Vitis_HLS/2022.2/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdint.h" 1 3
# 34 "/home/shikha/Vivado/Vitis_HLS/2022.2/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdint.h" 3
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
# 35 "/home/shikha/Vivado/Vitis_HLS/2022.2/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdint.h" 2 3
# 2 "/home/shikha/Final_Assignment/dilithium2/poly.c" 2
# 1 "/home/shikha/Final_Assignment/dilithium2/params.h" 1



# 1 "/home/shikha/Final_Assignment/dilithium2/config.h" 1
# 5 "/home/shikha/Final_Assignment/dilithium2/params.h" 2
# 3 "/home/shikha/Final_Assignment/dilithium2/poly.c" 2
# 1 "/home/shikha/Final_Assignment/dilithium2/poly.h" 1






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
# 4 "/home/shikha/Final_Assignment/dilithium2/poly.c" 2
# 1 "/home/shikha/Final_Assignment/dilithium2/ntt.h" 1







void pqcrystals_dilithium2_ref_ntt(int32_t a[256]);


void pqcrystals_dilithium2_ref_invntt_tomont(int32_t a[256]);
# 5 "/home/shikha/Final_Assignment/dilithium2/poly.c" 2
# 1 "/home/shikha/Final_Assignment/dilithium2/reduce.h" 1
# 11 "/home/shikha/Final_Assignment/dilithium2/reduce.h"
int32_t pqcrystals_dilithium2_ref_montgomery_reduce(int64_t a);


int32_t pqcrystals_dilithium2_ref_reduce32(int32_t a);


int32_t pqcrystals_dilithium2_ref_caddq(int32_t a);


int32_t pqcrystals_dilithium2_ref_freeze(int32_t a);
# 6 "/home/shikha/Final_Assignment/dilithium2/poly.c" 2
# 1 "/home/shikha/Final_Assignment/dilithium2/rounding.h" 1







int32_t pqcrystals_dilithium2_ref_power2round(int32_t *a0, int32_t a);


int32_t pqcrystals_dilithium2_ref_decompose(int32_t *a0, int32_t a);


unsigned int pqcrystals_dilithium2_ref_make_hint(int32_t a0, int32_t a1);


int32_t pqcrystals_dilithium2_ref_use_hint(int32_t a, unsigned int hint);
# 7 "/home/shikha/Final_Assignment/dilithium2/poly.c" 2
# 1 "/home/shikha/Final_Assignment/dilithium2/symmetric.h" 1
# 35 "/home/shikha/Final_Assignment/dilithium2/symmetric.h"
# 1 "/home/shikha/Final_Assignment/dilithium2/fips202.h" 1



# 1 "/home/shikha/Vivado/Vitis_HLS/2022.2/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 1 3
# 32 "/home/shikha/Vivado/Vitis_HLS/2022.2/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 3
typedef __typeof__(((int*)0)-((int*)0)) ptrdiff_t;



typedef __typeof__(sizeof(int)) size_t;




typedef int wchar_t;
# 5 "/home/shikha/Final_Assignment/dilithium2/fips202.h" 2
# 15 "/home/shikha/Final_Assignment/dilithium2/fips202.h"
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
# 36 "/home/shikha/Final_Assignment/dilithium2/symmetric.h" 2

typedef keccak_state stream128_state;
typedef keccak_state stream256_state;


void pqcrystals_dilithium2_ref_dilithium_shake128_stream_init(keccak_state *state,
                                    const uint8_t seed[32],
                                    uint16_t nonce);


void pqcrystals_dilithium2_ref_dilithium_shake256_stream_init(keccak_state *state,
                                    const uint8_t seed[48],
                                    uint16_t nonce);
# 8 "/home/shikha/Final_Assignment/dilithium2/poly.c" 2
# 28 "/home/shikha/Final_Assignment/dilithium2/poly.c"
void pqcrystals_dilithium2_ref_poly_reduce(poly *a) {
  unsigned int i;
                ;

  for(i = 0; i < 256; ++i)
    a->coeffs[i] = pqcrystals_dilithium2_ref_reduce32(a->coeffs[i]);

                    ;
}
# 46 "/home/shikha/Final_Assignment/dilithium2/poly.c"
void pqcrystals_dilithium2_ref_poly_caddq(poly *a) {
  unsigned int i;
                ;

  for(i = 0; i < 256; ++i)
    a->coeffs[i] = pqcrystals_dilithium2_ref_caddq(a->coeffs[i]);

                    ;
}
# 64 "/home/shikha/Final_Assignment/dilithium2/poly.c"
void pqcrystals_dilithium2_ref_poly_freeze(poly *a) {
  unsigned int i;
                ;

  for(i = 0; i < 256; ++i)
    a->coeffs[i] = pqcrystals_dilithium2_ref_freeze(a->coeffs[i]);

                    ;
}
# 83 "/home/shikha/Final_Assignment/dilithium2/poly.c"
void pqcrystals_dilithium2_ref_poly_add(poly *c, const poly *a, const poly *b) {
  unsigned int i;
                ;

  for(i = 0; i < 256; ++i)
    c->coeffs[i] = a->coeffs[i] + b->coeffs[i];

                    ;
}
# 104 "/home/shikha/Final_Assignment/dilithium2/poly.c"
void pqcrystals_dilithium2_ref_poly_sub(poly *c, const poly *a, const poly *b) {
  unsigned int i;
                ;

  for(i = 0; i < 256; ++i)
    c->coeffs[i] = a->coeffs[i] - b->coeffs[i];

                    ;
}
# 122 "/home/shikha/Final_Assignment/dilithium2/poly.c"
void pqcrystals_dilithium2_ref_poly_shiftl(poly *a) {
  unsigned int i;
                ;

  for(i = 0; i < 256; ++i)
    a->coeffs[i] <<= 13;

                    ;
}
# 140 "/home/shikha/Final_Assignment/dilithium2/poly.c"
void pqcrystals_dilithium2_ref_poly_ntt(poly *a) {
                ;

  pqcrystals_dilithium2_ref_ntt(a->coeffs);

                    ;
}
# 157 "/home/shikha/Final_Assignment/dilithium2/poly.c"
void pqcrystals_dilithium2_ref_poly_invntt_tomont(poly *a) {
                ;

  pqcrystals_dilithium2_ref_invntt_tomont(a->coeffs);

                    ;
}
# 176 "/home/shikha/Final_Assignment/dilithium2/poly.c"
void pqcrystals_dilithium2_ref_poly_pointwise_montgomery(poly *c, const poly *a, const poly *b) {
  unsigned int i;
                ;

  for(i = 0; i < 256; ++i)
    c->coeffs[i] = pqcrystals_dilithium2_ref_montgomery_reduce((int64_t)a->coeffs[i] * b->coeffs[i]);

                    ;
}
# 198 "/home/shikha/Final_Assignment/dilithium2/poly.c"
void pqcrystals_dilithium2_ref_poly_power2round(poly *a1, poly *a0, const poly *a) {
  unsigned int i;
                ;

  for(i = 0; i < 256; ++i)
    a1->coeffs[i] = pqcrystals_dilithium2_ref_power2round(&a0->coeffs[i], a->coeffs[i]);

                      ;
}
# 221 "/home/shikha/Final_Assignment/dilithium2/poly.c"
void pqcrystals_dilithium2_ref_poly_decompose(poly *a1, poly *a0, const poly *a) {
  unsigned int i;
                ;

  for(i = 0; i < 256; ++i)
    a1->coeffs[i] = pqcrystals_dilithium2_ref_decompose(&a0->coeffs[i], a->coeffs[i]);

                      ;
}
# 244 "/home/shikha/Final_Assignment/dilithium2/poly.c"
unsigned int pqcrystals_dilithium2_ref_poly_make_hint(poly *h, const poly *a0, const poly *a1) {
  unsigned int i, s = 0;
                ;

  for(i = 0; i < 256; ++i) {
    h->coeffs[i] = pqcrystals_dilithium2_ref_make_hint(a0->coeffs[i], a1->coeffs[i]);
    s += h->coeffs[i];
  }

                      ;
  return s;
}
# 266 "/home/shikha/Final_Assignment/dilithium2/poly.c"
void pqcrystals_dilithium2_ref_poly_use_hint(poly *b, const poly *a, const poly *h) {
  unsigned int i;
                ;

  for(i = 0; i < 256; ++i)
    b->coeffs[i] = pqcrystals_dilithium2_ref_use_hint(a->coeffs[i], h->coeffs[i]);

                      ;
}
# 287 "/home/shikha/Final_Assignment/dilithium2/poly.c"
int pqcrystals_dilithium2_ref_poly_chknorm(const poly *a, int32_t B) {
  unsigned int i;
  int32_t t;
                ;

  if(B > (8380417 -1)/8)
    return 1;




  for(i = 0; i < 256; ++i) {

    t = a->coeffs[i] >> 31;
    t = a->coeffs[i] - (t & 2*a->coeffs[i]);

    if(t >= B) {
                           ;
      return 1;
    }
  }

                       ;
  return 0;
}
# 327 "/home/shikha/Final_Assignment/dilithium2/poly.c"
static unsigned int rej_uniform(int32_t *a,
                                unsigned int len,
                                const uint8_t *buf,
                                unsigned int buflen)
{
  unsigned int ctr, pos;
  uint32_t t;
                ;

  ctr = pos = 0;
  while(ctr < len && pos + 3 <= buflen) {
    t = buf[pos++];
    t |= (uint32_t)buf[pos++] << 8;
    t |= (uint32_t)buf[pos++] << 16;
    t &= 0x7FFFFF;

    if(t < 8380417)
      a[ctr++] = t;
  }

                       ;
  return ctr;
}
# 363 "/home/shikha/Final_Assignment/dilithium2/poly.c"
void pqcrystals_dilithium2_ref_poly_uniform(poly *a,
                  const uint8_t seed[32],
                  uint16_t nonce)
{
  unsigned int i, ctr, off;
  unsigned int buflen = ((768 + 168 - 1)/168)*168;
  uint8_t buf[((768 + 168 - 1)/168)*168 + 2];
  stream128_state state;

  pqcrystals_dilithium2_ref_dilithium_shake128_stream_init(&state, seed, nonce);
  shake128_squeezeblocks(buf, ((768 + 168 - 1)/168), &state);

  ctr = rej_uniform(a->coeffs, 256, buf, buflen);

  while(ctr < 256) {
    off = buflen % 3;
    for(i = 0; i < off; ++i)
      buf[i] = buf[buflen - off + i];

    shake128_squeezeblocks(buf + off, 1, &state);
    buflen = 168 + off;
    ctr += rej_uniform(a->coeffs + ctr, 256 - ctr, buf, buflen);
  }
}
# 402 "/home/shikha/Final_Assignment/dilithium2/poly.c"
static unsigned int rej_eta(int32_t *a,
                            unsigned int len,
                            const uint8_t *buf,
                            unsigned int buflen)
{
  unsigned int ctr, pos;
  uint32_t t0, t1;
                ;

  ctr = pos = 0;
  while(ctr < len && pos < buflen) {
    t0 = buf[pos] & 0x0F;
    t1 = buf[pos++] >> 4;


    if(t0 < 15) {
      t0 = t0 - (205*t0 >> 10)*5;
      a[ctr++] = 2 - t0;
    }
    if(t1 < 15 && ctr < len) {
      t1 = t1 - (205*t1 >> 10)*5;
      a[ctr++] = 2 - t1;
    }






  }

                       ;
  return ctr;
}
# 453 "/home/shikha/Final_Assignment/dilithium2/poly.c"
void pqcrystals_dilithium2_ref_poly_uniform_eta(poly *a,
                      const uint8_t seed[32],
                      uint16_t nonce)
{
  unsigned int ctr;
  unsigned int buflen = ((136 + 168 - 1)/168)*168;
  uint8_t buf[((136 + 168 - 1)/168)*168];
  stream128_state state;

  pqcrystals_dilithium2_ref_dilithium_shake128_stream_init(&state, seed, nonce);
  shake128_squeezeblocks(buf, ((136 + 168 - 1)/168), &state);

  ctr = rej_eta(a->coeffs, 256, buf, buflen);

  while(ctr < 256) {
    shake128_squeezeblocks(buf, 1, &state);
    ctr += rej_eta(a->coeffs + ctr, 256 - ctr, buf, 168);
  }
}
# 489 "/home/shikha/Final_Assignment/dilithium2/poly.c"
void pqcrystals_dilithium2_ref_poly_uniform_gamma1(poly *a,
                         const uint8_t seed[48],
                         uint16_t nonce)
{
  uint8_t buf[((576 + 136 - 1)/136)*136];
  stream256_state state;

  pqcrystals_dilithium2_ref_dilithium_shake256_stream_init(&state, seed, nonce);
  shake256_squeezeblocks(buf, ((576 + 136 - 1)/136), &state);
  pqcrystals_dilithium2_ref_polyz_unpack(a, buf);
}
# 511 "/home/shikha/Final_Assignment/dilithium2/poly.c"
void pqcrystals_dilithium2_ref_poly_challenge(poly *c, const uint8_t seed[32]) {
  unsigned int i, b, pos;
  uint64_t signs;
  uint8_t buf[136];
  keccak_state state;

  shake256_init(&state);
  shake256_absorb(&state, seed, 32);
  shake256_finalize(&state);
  shake256_squeezeblocks(buf, 1, &state);

  signs = 0;
  for(i = 0; i < 8; ++i)
    signs |= (uint64_t)buf[i] << 8*i;
  pos = 8;

  for(i = 0; i < 256; ++i)
    c->coeffs[i] = 0;
  for(i = 256 -39; i < 256; ++i) {
    do {
      if(pos >= 136) {
        shake256_squeezeblocks(buf, 1, &state);
        pos = 0;
      }

      b = buf[pos++];
    } while(b > i);

    c->coeffs[i] = c->coeffs[b];
    c->coeffs[b] = 1 - 2*(signs & 1);
    signs >>= 1;
  }
}
# 554 "/home/shikha/Final_Assignment/dilithium2/poly.c"
void pqcrystals_dilithium2_ref_polyeta_pack(uint8_t *r, const poly *a) {
  unsigned int i;
  uint8_t t[8];
                ;


  for(i = 0; i < 256/8; ++i) {
    t[0] = 2 - a->coeffs[8*i+0];
    t[1] = 2 - a->coeffs[8*i+1];
    t[2] = 2 - a->coeffs[8*i+2];
    t[3] = 2 - a->coeffs[8*i+3];
    t[4] = 2 - a->coeffs[8*i+4];
    t[5] = 2 - a->coeffs[8*i+5];
    t[6] = 2 - a->coeffs[8*i+6];
    t[7] = 2 - a->coeffs[8*i+7];

    r[3*i+0] = (t[0] >> 0) | (t[1] << 3) | (t[2] << 6);
    r[3*i+1] = (t[2] >> 2) | (t[3] << 1) | (t[4] << 4) | (t[5] << 7);
    r[3*i+2] = (t[5] >> 1) | (t[6] << 2) | (t[7] << 5);
  }
# 582 "/home/shikha/Final_Assignment/dilithium2/poly.c"
                     ;
}
# 593 "/home/shikha/Final_Assignment/dilithium2/poly.c"
void pqcrystals_dilithium2_ref_polyeta_unpack(poly *r, const uint8_t *a) {
  unsigned int i;
                ;


  for(i = 0; i < 256/8; ++i) {
    r->coeffs[8*i+0] = (a[3*i+0] >> 0) & 7;
    r->coeffs[8*i+1] = (a[3*i+0] >> 3) & 7;
    r->coeffs[8*i+2] = ((a[3*i+0] >> 6) | (a[3*i+1] << 2)) & 7;
    r->coeffs[8*i+3] = (a[3*i+1] >> 1) & 7;
    r->coeffs[8*i+4] = (a[3*i+1] >> 4) & 7;
    r->coeffs[8*i+5] = ((a[3*i+1] >> 7) | (a[3*i+2] << 1)) & 7;
    r->coeffs[8*i+6] = (a[3*i+2] >> 2) & 7;
    r->coeffs[8*i+7] = (a[3*i+2] >> 5) & 7;

    r->coeffs[8*i+0] = 2 - r->coeffs[8*i+0];
    r->coeffs[8*i+1] = 2 - r->coeffs[8*i+1];
    r->coeffs[8*i+2] = 2 - r->coeffs[8*i+2];
    r->coeffs[8*i+3] = 2 - r->coeffs[8*i+3];
    r->coeffs[8*i+4] = 2 - r->coeffs[8*i+4];
    r->coeffs[8*i+5] = 2 - r->coeffs[8*i+5];
    r->coeffs[8*i+6] = 2 - r->coeffs[8*i+6];
    r->coeffs[8*i+7] = 2 - r->coeffs[8*i+7];
  }
# 626 "/home/shikha/Final_Assignment/dilithium2/poly.c"
                     ;
}
# 639 "/home/shikha/Final_Assignment/dilithium2/poly.c"
void pqcrystals_dilithium2_ref_polyt1_pack(uint8_t *r, const poly *a) {
  unsigned int i;
                ;

  for(i = 0; i < 256/4; ++i) {
    r[5*i+0] = (a->coeffs[4*i+0] >> 0);
    r[5*i+1] = (a->coeffs[4*i+0] >> 8) | (a->coeffs[4*i+1] << 2);
    r[5*i+2] = (a->coeffs[4*i+1] >> 6) | (a->coeffs[4*i+2] << 4);
    r[5*i+3] = (a->coeffs[4*i+2] >> 4) | (a->coeffs[4*i+3] << 6);
    r[5*i+4] = (a->coeffs[4*i+3] >> 2);
  }

                     ;
}
# 663 "/home/shikha/Final_Assignment/dilithium2/poly.c"
void pqcrystals_dilithium2_ref_polyt1_unpack(poly *r, const uint8_t *a) {
  unsigned int i;
                ;

  for(i = 0; i < 256/4; ++i) {
    r->coeffs[4*i+0] = ((a[5*i+0] >> 0) | ((uint32_t)a[5*i+1] << 8)) & 0x3FF;
    r->coeffs[4*i+1] = ((a[5*i+1] >> 2) | ((uint32_t)a[5*i+2] << 6)) & 0x3FF;
    r->coeffs[4*i+2] = ((a[5*i+2] >> 4) | ((uint32_t)a[5*i+3] << 4)) & 0x3FF;
    r->coeffs[4*i+3] = ((a[5*i+3] >> 6) | ((uint32_t)a[5*i+4] << 2)) & 0x3FF;
  }

                     ;
}
# 686 "/home/shikha/Final_Assignment/dilithium2/poly.c"
void pqcrystals_dilithium2_ref_polyt0_pack(uint8_t *r, const poly *a) {
  unsigned int i;
  uint32_t t[8];
                ;

  for(i = 0; i < 256/8; ++i) {
    t[0] = (1 << (13 -1)) - a->coeffs[8*i+0];
    t[1] = (1 << (13 -1)) - a->coeffs[8*i+1];
    t[2] = (1 << (13 -1)) - a->coeffs[8*i+2];
    t[3] = (1 << (13 -1)) - a->coeffs[8*i+3];
    t[4] = (1 << (13 -1)) - a->coeffs[8*i+4];
    t[5] = (1 << (13 -1)) - a->coeffs[8*i+5];
    t[6] = (1 << (13 -1)) - a->coeffs[8*i+6];
    t[7] = (1 << (13 -1)) - a->coeffs[8*i+7];

    r[13*i+ 0] = t[0];
    r[13*i+ 1] = t[0] >> 8;
    r[13*i+ 1] |= t[1] << 5;
    r[13*i+ 2] = t[1] >> 3;
    r[13*i+ 3] = t[1] >> 11;
    r[13*i+ 3] |= t[2] << 2;
    r[13*i+ 4] = t[2] >> 6;
    r[13*i+ 4] |= t[3] << 7;
    r[13*i+ 5] = t[3] >> 1;
    r[13*i+ 6] = t[3] >> 9;
    r[13*i+ 6] |= t[4] << 4;
    r[13*i+ 7] = t[4] >> 4;
    r[13*i+ 8] = t[4] >> 12;
    r[13*i+ 8] |= t[5] << 1;
    r[13*i+ 9] = t[5] >> 7;
    r[13*i+ 9] |= t[6] << 6;
    r[13*i+10] = t[6] >> 2;
    r[13*i+11] = t[6] >> 10;
    r[13*i+11] |= t[7] << 3;
    r[13*i+12] = t[7] >> 5;
  }

                     ;
}
# 734 "/home/shikha/Final_Assignment/dilithium2/poly.c"
void pqcrystals_dilithium2_ref_polyt0_unpack(poly *r, const uint8_t *a) {
  unsigned int i;
                ;

  for(i = 0; i < 256/8; ++i) {
    r->coeffs[8*i+0] = a[13*i+0];
    r->coeffs[8*i+0] |= (uint32_t)a[13*i+1] << 8;
    r->coeffs[8*i+0] &= 0x1FFF;

    r->coeffs[8*i+1] = a[13*i+1] >> 5;
    r->coeffs[8*i+1] |= (uint32_t)a[13*i+2] << 3;
    r->coeffs[8*i+1] |= (uint32_t)a[13*i+3] << 11;
    r->coeffs[8*i+1] &= 0x1FFF;

    r->coeffs[8*i+2] = a[13*i+3] >> 2;
    r->coeffs[8*i+2] |= (uint32_t)a[13*i+4] << 6;
    r->coeffs[8*i+2] &= 0x1FFF;

    r->coeffs[8*i+3] = a[13*i+4] >> 7;
    r->coeffs[8*i+3] |= (uint32_t)a[13*i+5] << 1;
    r->coeffs[8*i+3] |= (uint32_t)a[13*i+6] << 9;
    r->coeffs[8*i+3] &= 0x1FFF;

    r->coeffs[8*i+4] = a[13*i+6] >> 4;
    r->coeffs[8*i+4] |= (uint32_t)a[13*i+7] << 4;
    r->coeffs[8*i+4] |= (uint32_t)a[13*i+8] << 12;
    r->coeffs[8*i+4] &= 0x1FFF;

    r->coeffs[8*i+5] = a[13*i+8] >> 1;
    r->coeffs[8*i+5] |= (uint32_t)a[13*i+9] << 7;
    r->coeffs[8*i+5] &= 0x1FFF;

    r->coeffs[8*i+6] = a[13*i+9] >> 6;
    r->coeffs[8*i+6] |= (uint32_t)a[13*i+10] << 2;
    r->coeffs[8*i+6] |= (uint32_t)a[13*i+11] << 10;
    r->coeffs[8*i+6] &= 0x1FFF;

    r->coeffs[8*i+7] = a[13*i+11] >> 3;
    r->coeffs[8*i+7] |= (uint32_t)a[13*i+12] << 5;
    r->coeffs[8*i+7] &= 0x1FFF;

    r->coeffs[8*i+0] = (1 << (13 -1)) - r->coeffs[8*i+0];
    r->coeffs[8*i+1] = (1 << (13 -1)) - r->coeffs[8*i+1];
    r->coeffs[8*i+2] = (1 << (13 -1)) - r->coeffs[8*i+2];
    r->coeffs[8*i+3] = (1 << (13 -1)) - r->coeffs[8*i+3];
    r->coeffs[8*i+4] = (1 << (13 -1)) - r->coeffs[8*i+4];
    r->coeffs[8*i+5] = (1 << (13 -1)) - r->coeffs[8*i+5];
    r->coeffs[8*i+6] = (1 << (13 -1)) - r->coeffs[8*i+6];
    r->coeffs[8*i+7] = (1 << (13 -1)) - r->coeffs[8*i+7];
  }

                     ;
}
# 798 "/home/shikha/Final_Assignment/dilithium2/poly.c"
void pqcrystals_dilithium2_ref_polyz_pack(uint8_t *r, const poly *a) {
  unsigned int i;
  uint32_t t[4];
                ;


  for(i = 0; i < 256/4; ++i) {
    t[0] = (1 << 17) - a->coeffs[4*i+0];
    t[1] = (1 << 17) - a->coeffs[4*i+1];
    t[2] = (1 << 17) - a->coeffs[4*i+2];
    t[3] = (1 << 17) - a->coeffs[4*i+3];

    r[9*i+0] = t[0];
    r[9*i+1] = t[0] >> 8;
    r[9*i+2] = t[0] >> 16;
    r[9*i+2] |= t[1] << 2;
    r[9*i+3] = t[1] >> 6;
    r[9*i+4] = t[1] >> 14;
    r[9*i+4] |= t[2] << 4;
    r[9*i+5] = t[2] >> 4;
    r[9*i+6] = t[2] >> 12;
    r[9*i+6] |= t[3] << 6;
    r[9*i+7] = t[3] >> 2;
    r[9*i+8] = t[3] >> 10;
  }
# 837 "/home/shikha/Final_Assignment/dilithium2/poly.c"
                     ;
}
# 849 "/home/shikha/Final_Assignment/dilithium2/poly.c"
void pqcrystals_dilithium2_ref_polyz_unpack(poly *r, const uint8_t *a) {
  unsigned int i;
                ;


  for(i = 0; i < 256/4; ++i) {
    r->coeffs[4*i+0] = a[9*i+0];
    r->coeffs[4*i+0] |= (uint32_t)a[9*i+1] << 8;
    r->coeffs[4*i+0] |= (uint32_t)a[9*i+2] << 16;
    r->coeffs[4*i+0] &= 0x3FFFF;

    r->coeffs[4*i+1] = a[9*i+2] >> 2;
    r->coeffs[4*i+1] |= (uint32_t)a[9*i+3] << 6;
    r->coeffs[4*i+1] |= (uint32_t)a[9*i+4] << 14;
    r->coeffs[4*i+1] &= 0x3FFFF;

    r->coeffs[4*i+2] = a[9*i+4] >> 4;
    r->coeffs[4*i+2] |= (uint32_t)a[9*i+5] << 4;
    r->coeffs[4*i+2] |= (uint32_t)a[9*i+6] << 12;
    r->coeffs[4*i+2] &= 0x3FFFF;

    r->coeffs[4*i+3] = a[9*i+6] >> 6;
    r->coeffs[4*i+3] |= (uint32_t)a[9*i+7] << 2;
    r->coeffs[4*i+3] |= (uint32_t)a[9*i+8] << 10;
    r->coeffs[4*i+3] &= 0x3FFFF;

    r->coeffs[4*i+0] = (1 << 17) - r->coeffs[4*i+0];
    r->coeffs[4*i+1] = (1 << 17) - r->coeffs[4*i+1];
    r->coeffs[4*i+2] = (1 << 17) - r->coeffs[4*i+2];
    r->coeffs[4*i+3] = (1 << 17) - r->coeffs[4*i+3];
  }
# 897 "/home/shikha/Final_Assignment/dilithium2/poly.c"
                     ;
}
# 910 "/home/shikha/Final_Assignment/dilithium2/poly.c"
void pqcrystals_dilithium2_ref_polyw1_pack(uint8_t *r, const poly *a) {
  unsigned int i;
                ;


  for(i = 0; i < 256/4; ++i) {
    r[3*i+0] = a->coeffs[4*i+0];
    r[3*i+0] |= a->coeffs[4*i+1] << 6;
    r[3*i+1] = a->coeffs[4*i+1] >> 2;
    r[3*i+1] |= a->coeffs[4*i+2] << 4;
    r[3*i+2] = a->coeffs[4*i+2] >> 4;
    r[3*i+2] |= a->coeffs[4*i+3] << 2;
  }





                     ;
}
