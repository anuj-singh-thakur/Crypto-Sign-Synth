// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2022.2 (64-bit)
// Tool Version Limit: 2019.12
// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// ==============================================================
# 1 "/home/shikha/Final_Assignment/dilithium2/aes256ctr.c"
# 1 "/home/shikha/Final_Assignment/dilithium2/aes256ctr.c" 1
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 149 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "/home/shikha/Final_Assignment/dilithium2/aes256ctr.c" 2
# 25 "/home/shikha/Final_Assignment/dilithium2/aes256ctr.c"
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
# 26 "/home/shikha/Final_Assignment/dilithium2/aes256ctr.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 26 "/usr/include/string.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/string.h" 2 3 4






# 1 "/home/shikha/Vivado/Vitis_HLS/2022.2/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 1 3 4
# 32 "/home/shikha/Vivado/Vitis_HLS/2022.2/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 3 4
typedef __typeof__(((int*)0)-((int*)0)) ptrdiff_t;



typedef __typeof__(sizeof(int)) size_t;




typedef int wchar_t;
# 34 "/usr/include/string.h" 2 3 4
# 43 "/usr/include/string.h" 3 4
extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));





extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
    __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2))) ;




extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 80 "/usr/include/string.h" 3 4
extern int __memcmpeq (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 107 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 141 "/usr/include/string.h" 3 4
extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
    __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2))) ;




# 1 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__locale_t.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types/__locale_t.h" 3 4
struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
};

typedef struct __locale_struct *__locale_t;
# 23 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 2 3 4

typedef __locale_t locale_t;
# 173 "/usr/include/string.h" 2 3 4


extern int strcoll_l (const char *__s1, const char *__s2, locale_t __l)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));


extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    locale_t __l) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 4)))
                                           ;





extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 246 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 273 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 293 "/usr/include/string.h" 3 4
extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 323 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 350 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));



extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));
# 407 "/usr/include/string.h" 3 4
extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern char *strerror (int __errnum) __attribute__ ((__nothrow__ ));
# 432 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)))


                                          ;
# 458 "/usr/include/string.h" 3 4
extern char *strerror_l (int __errnum, locale_t __l) __attribute__ ((__nothrow__ ));




# 1 "/usr/include/strings.h" 1 3 4
# 23 "/usr/include/strings.h" 3 4
# 1 "/home/shikha/Vivado/Vitis_HLS/2022.2/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 1 3 4
# 24 "/usr/include/strings.h" 2 3 4
# 34 "/usr/include/strings.h" 3 4
extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bcopy (const void *__src, void *__dest, size_t __n)
  __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
# 68 "/usr/include/strings.h" 3 4
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 96 "/usr/include/strings.h" 3 4
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));






extern int ffs (int __i) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));





extern int ffsl (long int __l) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
__extension__ extern int ffsll (long long int __ll)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));



extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));






extern int strcasecmp_l (const char *__s1, const char *__s2, locale_t __loc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));



extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, locale_t __loc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));
# 463 "/usr/include/string.h" 2 3 4



extern void explicit_bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)))
                                                  ;



extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ ));
# 489 "/usr/include/string.h" 3 4
extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
# 27 "/home/shikha/Final_Assignment/dilithium2/aes256ctr.c" 2
# 1 "/home/shikha/Final_Assignment/dilithium2/aes256ctr.h" 1



# 1 "/home/shikha/Vivado/Vitis_HLS/2022.2/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 1 3
# 5 "/home/shikha/Final_Assignment/dilithium2/aes256ctr.h" 2






typedef struct {
  uint64_t sk_exp[120];
  uint32_t ivw[16];
} aes256ctr_ctx;


void pqcrystals_aes256ctr_ref_prf(uint8_t *out,
                   size_t outlen,
                   const uint8_t key[32],
                   const uint8_t nonce[12]);


void pqcrystals_aes256ctr_ref_init(aes256ctr_ctx *state,
                    const uint8_t key[32],
                    const uint8_t nonce[12]);


void pqcrystals_aes256ctr_ref_squeezeblocks(uint8_t *out,
                             size_t nblocks,
                             aes256ctr_ctx *state);
# 28 "/home/shikha/Final_Assignment/dilithium2/aes256ctr.c" 2

static inline uint32_t br_dec32le(const uint8_t *src)
{
 return (uint32_t)src[0]
  | ((uint32_t)src[1] << 8)
  | ((uint32_t)src[2] << 16)
  | ((uint32_t)src[3] << 24);
}

static void br_range_dec32le(uint32_t *v, size_t num, const uint8_t *src)
{
 while (num-- > 0) {
  *v ++ = br_dec32le(src);
  src += 4;
 }
}

static inline uint32_t br_swap32(uint32_t x)
{
 x = ((x & (uint32_t)0x00FF00FF) << 8)
  | ((x >> 8) & (uint32_t)0x00FF00FF);
 return (x << 16) | (x >> 16);
}

static inline void br_enc32le(uint8_t *dst, uint32_t x)
{
 dst[0] = (uint8_t)x;
 dst[1] = (uint8_t)(x >> 8);
 dst[2] = (uint8_t)(x >> 16);
 dst[3] = (uint8_t)(x >> 24);
}

static void br_range_enc32le(uint8_t *dst, const uint32_t *v, size_t num)
{
 while (num-- > 0) {
  br_enc32le(dst, *v ++);
  dst += 4;
 }
}

static void br_aes_ct64_bitslice_Sbox(uint64_t *q)
{
# 80 "/home/shikha/Final_Assignment/dilithium2/aes256ctr.c"
 uint64_t x0, x1, x2, x3, x4, x5, x6, x7;
 uint64_t y1, y2, y3, y4, y5, y6, y7, y8, y9;
 uint64_t y10, y11, y12, y13, y14, y15, y16, y17, y18, y19;
 uint64_t y20, y21;
 uint64_t z0, z1, z2, z3, z4, z5, z6, z7, z8, z9;
 uint64_t z10, z11, z12, z13, z14, z15, z16, z17;
 uint64_t t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
 uint64_t t10, t11, t12, t13, t14, t15, t16, t17, t18, t19;
 uint64_t t20, t21, t22, t23, t24, t25, t26, t27, t28, t29;
 uint64_t t30, t31, t32, t33, t34, t35, t36, t37, t38, t39;
 uint64_t t40, t41, t42, t43, t44, t45, t46, t47, t48, t49;
 uint64_t t50, t51, t52, t53, t54, t55, t56, t57, t58, t59;
 uint64_t t60, t61, t62, t63, t64, t65, t66, t67;
 uint64_t s0, s1, s2, s3, s4, s5, s6, s7;

 x0 = q[7];
 x1 = q[6];
 x2 = q[5];
 x3 = q[4];
 x4 = q[3];
 x5 = q[2];
 x6 = q[1];
 x7 = q[0];




 y14 = x3 ^ x5;
 y13 = x0 ^ x6;
 y9 = x0 ^ x3;
 y8 = x0 ^ x5;
 t0 = x1 ^ x2;
 y1 = t0 ^ x7;
 y4 = y1 ^ x3;
 y12 = y13 ^ y14;
 y2 = y1 ^ x0;
 y5 = y1 ^ x6;
 y3 = y5 ^ y8;
 t1 = x4 ^ y12;
 y15 = t1 ^ x5;
 y20 = t1 ^ x1;
 y6 = y15 ^ x7;
 y10 = y15 ^ t0;
 y11 = y20 ^ y9;
 y7 = x7 ^ y11;
 y17 = y10 ^ y11;
 y19 = y10 ^ y8;
 y16 = t0 ^ y11;
 y21 = y13 ^ y16;
 y18 = x0 ^ y16;




 t2 = y12 & y15;
 t3 = y3 & y6;
 t4 = t3 ^ t2;
 t5 = y4 & x7;
 t6 = t5 ^ t2;
 t7 = y13 & y16;
 t8 = y5 & y1;
 t9 = t8 ^ t7;
 t10 = y2 & y7;
 t11 = t10 ^ t7;
 t12 = y9 & y11;
 t13 = y14 & y17;
 t14 = t13 ^ t12;
 t15 = y8 & y10;
 t16 = t15 ^ t12;
 t17 = t4 ^ t14;
 t18 = t6 ^ t16;
 t19 = t9 ^ t14;
 t20 = t11 ^ t16;
 t21 = t17 ^ y20;
 t22 = t18 ^ y19;
 t23 = t19 ^ y21;
 t24 = t20 ^ y18;

 t25 = t21 ^ t22;
 t26 = t21 & t23;
 t27 = t24 ^ t26;
 t28 = t25 & t27;
 t29 = t28 ^ t22;
 t30 = t23 ^ t24;
 t31 = t22 ^ t26;
 t32 = t31 & t30;
 t33 = t32 ^ t24;
 t34 = t23 ^ t33;
 t35 = t27 ^ t33;
 t36 = t24 & t35;
 t37 = t36 ^ t34;
 t38 = t27 ^ t36;
 t39 = t29 & t38;
 t40 = t25 ^ t39;

 t41 = t40 ^ t37;
 t42 = t29 ^ t33;
 t43 = t29 ^ t40;
 t44 = t33 ^ t37;
 t45 = t42 ^ t41;
 z0 = t44 & y15;
 z1 = t37 & y6;
 z2 = t33 & x7;
 z3 = t43 & y16;
 z4 = t40 & y1;
 z5 = t29 & y7;
 z6 = t42 & y11;
 z7 = t45 & y17;
 z8 = t41 & y10;
 z9 = t44 & y12;
 z10 = t37 & y3;
 z11 = t33 & y4;
 z12 = t43 & y13;
 z13 = t40 & y5;
 z14 = t29 & y2;
 z15 = t42 & y9;
 z16 = t45 & y14;
 z17 = t41 & y8;




 t46 = z15 ^ z16;
 t47 = z10 ^ z11;
 t48 = z5 ^ z13;
 t49 = z9 ^ z10;
 t50 = z2 ^ z12;
 t51 = z2 ^ z5;
 t52 = z7 ^ z8;
 t53 = z0 ^ z3;
 t54 = z6 ^ z7;
 t55 = z16 ^ z17;
 t56 = z12 ^ t48;
 t57 = t50 ^ t53;
 t58 = z4 ^ t46;
 t59 = z3 ^ t54;
 t60 = t46 ^ t57;
 t61 = z14 ^ t57;
 t62 = t52 ^ t58;
 t63 = t49 ^ t58;
 t64 = z4 ^ t59;
 t65 = t61 ^ t62;
 t66 = z1 ^ t63;
 s0 = t59 ^ t63;
 s6 = t56 ^ ~t62;
 s7 = t48 ^ ~t60;
 t67 = t64 ^ t65;
 s3 = t53 ^ t66;
 s4 = t51 ^ t66;
 s5 = t47 ^ t65;
 s1 = t64 ^ ~s3;
 s2 = t55 ^ ~t67;

 q[7] = s0;
 q[6] = s1;
 q[5] = s2;
 q[4] = s3;
 q[3] = s4;
 q[2] = s5;
 q[1] = s6;
 q[0] = s7;
}

static void br_aes_ct64_ortho(uint64_t *q)
{
# 257 "/home/shikha/Final_Assignment/dilithium2/aes256ctr.c"
 do { uint64_t a, b; a = (q[0]); b = (q[1]); (q[0]) = (a & (uint64_t)0x5555555555555555) | ((b & (uint64_t)0x5555555555555555) << (1)); (q[1]) = ((a & (uint64_t)0xAAAAAAAAAAAAAAAA) >> (1)) | (b & (uint64_t)0xAAAAAAAAAAAAAAAA); } while (0);
 do { uint64_t a, b; a = (q[2]); b = (q[3]); (q[2]) = (a & (uint64_t)0x5555555555555555) | ((b & (uint64_t)0x5555555555555555) << (1)); (q[3]) = ((a & (uint64_t)0xAAAAAAAAAAAAAAAA) >> (1)) | (b & (uint64_t)0xAAAAAAAAAAAAAAAA); } while (0);
 do { uint64_t a, b; a = (q[4]); b = (q[5]); (q[4]) = (a & (uint64_t)0x5555555555555555) | ((b & (uint64_t)0x5555555555555555) << (1)); (q[5]) = ((a & (uint64_t)0xAAAAAAAAAAAAAAAA) >> (1)) | (b & (uint64_t)0xAAAAAAAAAAAAAAAA); } while (0);
 do { uint64_t a, b; a = (q[6]); b = (q[7]); (q[6]) = (a & (uint64_t)0x5555555555555555) | ((b & (uint64_t)0x5555555555555555) << (1)); (q[7]) = ((a & (uint64_t)0xAAAAAAAAAAAAAAAA) >> (1)) | (b & (uint64_t)0xAAAAAAAAAAAAAAAA); } while (0);

 do { uint64_t a, b; a = (q[0]); b = (q[2]); (q[0]) = (a & (uint64_t)0x3333333333333333) | ((b & (uint64_t)0x3333333333333333) << (2)); (q[2]) = ((a & (uint64_t)0xCCCCCCCCCCCCCCCC) >> (2)) | (b & (uint64_t)0xCCCCCCCCCCCCCCCC); } while (0);
 do { uint64_t a, b; a = (q[1]); b = (q[3]); (q[1]) = (a & (uint64_t)0x3333333333333333) | ((b & (uint64_t)0x3333333333333333) << (2)); (q[3]) = ((a & (uint64_t)0xCCCCCCCCCCCCCCCC) >> (2)) | (b & (uint64_t)0xCCCCCCCCCCCCCCCC); } while (0);
 do { uint64_t a, b; a = (q[4]); b = (q[6]); (q[4]) = (a & (uint64_t)0x3333333333333333) | ((b & (uint64_t)0x3333333333333333) << (2)); (q[6]) = ((a & (uint64_t)0xCCCCCCCCCCCCCCCC) >> (2)) | (b & (uint64_t)0xCCCCCCCCCCCCCCCC); } while (0);
 do { uint64_t a, b; a = (q[5]); b = (q[7]); (q[5]) = (a & (uint64_t)0x3333333333333333) | ((b & (uint64_t)0x3333333333333333) << (2)); (q[7]) = ((a & (uint64_t)0xCCCCCCCCCCCCCCCC) >> (2)) | (b & (uint64_t)0xCCCCCCCCCCCCCCCC); } while (0);

 do { uint64_t a, b; a = (q[0]); b = (q[4]); (q[0]) = (a & (uint64_t)0x0F0F0F0F0F0F0F0F) | ((b & (uint64_t)0x0F0F0F0F0F0F0F0F) << (4)); (q[4]) = ((a & (uint64_t)0xF0F0F0F0F0F0F0F0) >> (4)) | (b & (uint64_t)0xF0F0F0F0F0F0F0F0); } while (0);
 do { uint64_t a, b; a = (q[1]); b = (q[5]); (q[1]) = (a & (uint64_t)0x0F0F0F0F0F0F0F0F) | ((b & (uint64_t)0x0F0F0F0F0F0F0F0F) << (4)); (q[5]) = ((a & (uint64_t)0xF0F0F0F0F0F0F0F0) >> (4)) | (b & (uint64_t)0xF0F0F0F0F0F0F0F0); } while (0);
 do { uint64_t a, b; a = (q[2]); b = (q[6]); (q[2]) = (a & (uint64_t)0x0F0F0F0F0F0F0F0F) | ((b & (uint64_t)0x0F0F0F0F0F0F0F0F) << (4)); (q[6]) = ((a & (uint64_t)0xF0F0F0F0F0F0F0F0) >> (4)) | (b & (uint64_t)0xF0F0F0F0F0F0F0F0); } while (0);
 do { uint64_t a, b; a = (q[3]); b = (q[7]); (q[3]) = (a & (uint64_t)0x0F0F0F0F0F0F0F0F) | ((b & (uint64_t)0x0F0F0F0F0F0F0F0F) << (4)); (q[7]) = ((a & (uint64_t)0xF0F0F0F0F0F0F0F0) >> (4)) | (b & (uint64_t)0xF0F0F0F0F0F0F0F0); } while (0);
}

static void br_aes_ct64_interleave_in(uint64_t *q0, uint64_t *q1, const uint32_t *w)
{
 uint64_t x0, x1, x2, x3;

 x0 = w[0];
 x1 = w[1];
 x2 = w[2];
 x3 = w[3];
 x0 |= (x0 << 16);
 x1 |= (x1 << 16);
 x2 |= (x2 << 16);
 x3 |= (x3 << 16);
 x0 &= (uint64_t)0x0000FFFF0000FFFF;
 x1 &= (uint64_t)0x0000FFFF0000FFFF;
 x2 &= (uint64_t)0x0000FFFF0000FFFF;
 x3 &= (uint64_t)0x0000FFFF0000FFFF;
 x0 |= (x0 << 8);
 x1 |= (x1 << 8);
 x2 |= (x2 << 8);
 x3 |= (x3 << 8);
 x0 &= (uint64_t)0x00FF00FF00FF00FF;
 x1 &= (uint64_t)0x00FF00FF00FF00FF;
 x2 &= (uint64_t)0x00FF00FF00FF00FF;
 x3 &= (uint64_t)0x00FF00FF00FF00FF;
 *q0 = x0 | (x2 << 8);
 *q1 = x1 | (x3 << 8);
}

static void br_aes_ct64_interleave_out(uint32_t *w, uint64_t q0, uint64_t q1)
{
 uint64_t x0, x1, x2, x3;

 x0 = q0 & (uint64_t)0x00FF00FF00FF00FF;
 x1 = q1 & (uint64_t)0x00FF00FF00FF00FF;
 x2 = (q0 >> 8) & (uint64_t)0x00FF00FF00FF00FF;
 x3 = (q1 >> 8) & (uint64_t)0x00FF00FF00FF00FF;
 x0 |= (x0 >> 8);
 x1 |= (x1 >> 8);
 x2 |= (x2 >> 8);
 x3 |= (x3 >> 8);
 x0 &= (uint64_t)0x0000FFFF0000FFFF;
 x1 &= (uint64_t)0x0000FFFF0000FFFF;
 x2 &= (uint64_t)0x0000FFFF0000FFFF;
 x3 &= (uint64_t)0x0000FFFF0000FFFF;
 w[0] = (uint32_t)x0 | (uint32_t)(x0 >> 16);
 w[1] = (uint32_t)x1 | (uint32_t)(x1 >> 16);
 w[2] = (uint32_t)x2 | (uint32_t)(x2 >> 16);
 w[3] = (uint32_t)x3 | (uint32_t)(x3 >> 16);
}

static const uint8_t Rcon[] = {
 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x1B, 0x36
};

static uint32_t sub_word(uint32_t x)
{
 uint64_t q[8];

 memset(q, 0, sizeof q);
 q[0] = x;
 br_aes_ct64_ortho(q);
 br_aes_ct64_bitslice_Sbox(q);
 br_aes_ct64_ortho(q);
 return (uint32_t)q[0];
}

static void br_aes_ct64_keysched(uint64_t *comp_skey, const uint8_t *key)
{
 int i, j, k, nk, nkf;
 uint32_t tmp;
 uint32_t skey[60];

 int key_len = 32;

 nk = (int)(key_len >> 2);
 nkf = (int)((14 + 1) << 2);
 br_range_dec32le(skey, (key_len >> 2), key);
 tmp = skey[(key_len >> 2) - 1];
 for (i = nk, j = 0, k = 0; i < nkf; i ++) {
  if (j == 0) {
   tmp = (tmp << 24) | (tmp >> 8);
   tmp = sub_word(tmp) ^ Rcon[k];
  } else if (nk > 6 && j == 4) {
   tmp = sub_word(tmp);
  }
  tmp ^= skey[i - nk];
  skey[i] = tmp;
  if (++ j == nk) {
   j = 0;
   k ++;
  }
 }

 for (i = 0, j = 0; i < nkf; i += 4, j += 2) {
  uint64_t q[8];

  br_aes_ct64_interleave_in(&q[0], &q[4], skey + i);
  q[1] = q[0];
  q[2] = q[0];
  q[3] = q[0];
  q[5] = q[4];
  q[6] = q[4];
  q[7] = q[4];
  br_aes_ct64_ortho(q);
  comp_skey[j + 0] =
     (q[0] & (uint64_t)0x1111111111111111)
   | (q[1] & (uint64_t)0x2222222222222222)
   | (q[2] & (uint64_t)0x4444444444444444)
   | (q[3] & (uint64_t)0x8888888888888888);
  comp_skey[j + 1] =
     (q[4] & (uint64_t)0x1111111111111111)
   | (q[5] & (uint64_t)0x2222222222222222)
   | (q[6] & (uint64_t)0x4444444444444444)
   | (q[7] & (uint64_t)0x8888888888888888);
 }
}

static void br_aes_ct64_skey_expand(uint64_t *skey, const uint64_t *comp_skey)
{
 unsigned u, v, n;

 n = (14 + 1) << 1;
 for (u = 0, v = 0; u < n; u ++, v += 4) {
  uint64_t x0, x1, x2, x3;

  x0 = x1 = x2 = x3 = comp_skey[u];
  x0 &= (uint64_t)0x1111111111111111;
  x1 &= (uint64_t)0x2222222222222222;
  x2 &= (uint64_t)0x4444444444444444;
  x3 &= (uint64_t)0x8888888888888888;
  x1 >>= 1;
  x2 >>= 2;
  x3 >>= 3;
  skey[v + 0] = (x0 << 4) - x0;
  skey[v + 1] = (x1 << 4) - x1;
  skey[v + 2] = (x2 << 4) - x2;
  skey[v + 3] = (x3 << 4) - x3;
 }
}

static inline void add_round_key(uint64_t *q, const uint64_t *sk)
{
 q[0] ^= sk[0];
 q[1] ^= sk[1];
 q[2] ^= sk[2];
 q[3] ^= sk[3];
 q[4] ^= sk[4];
 q[5] ^= sk[5];
 q[6] ^= sk[6];
 q[7] ^= sk[7];
}

static inline void shift_rows(uint64_t *q)
{
 int i;

 for (i = 0; i < 8; i ++) {
  uint64_t x;

  x = q[i];
  q[i] = (x & (uint64_t)0x000000000000FFFF)
   | ((x & (uint64_t)0x00000000FFF00000) >> 4)
   | ((x & (uint64_t)0x00000000000F0000) << 12)
   | ((x & (uint64_t)0x0000FF0000000000) >> 8)
   | ((x & (uint64_t)0x000000FF00000000) << 8)
   | ((x & (uint64_t)0xF000000000000000) >> 12)
   | ((x & (uint64_t)0x0FFF000000000000) << 4);
 }
}

static inline uint64_t rotr32(uint64_t x)
{
 return (x << 32) | (x >> 32);
}

static inline void mix_columns(uint64_t *q)
{
 uint64_t q0, q1, q2, q3, q4, q5, q6, q7;
 uint64_t r0, r1, r2, r3, r4, r5, r6, r7;

 q0 = q[0];
 q1 = q[1];
 q2 = q[2];
 q3 = q[3];
 q4 = q[4];
 q5 = q[5];
 q6 = q[6];
 q7 = q[7];
 r0 = (q0 >> 16) | (q0 << 48);
 r1 = (q1 >> 16) | (q1 << 48);
 r2 = (q2 >> 16) | (q2 << 48);
 r3 = (q3 >> 16) | (q3 << 48);
 r4 = (q4 >> 16) | (q4 << 48);
 r5 = (q5 >> 16) | (q5 << 48);
 r6 = (q6 >> 16) | (q6 << 48);
 r7 = (q7 >> 16) | (q7 << 48);

 q[0] = q7 ^ r7 ^ r0 ^ rotr32(q0 ^ r0);
 q[1] = q0 ^ r0 ^ q7 ^ r7 ^ r1 ^ rotr32(q1 ^ r1);
 q[2] = q1 ^ r1 ^ r2 ^ rotr32(q2 ^ r2);
 q[3] = q2 ^ r2 ^ q7 ^ r7 ^ r3 ^ rotr32(q3 ^ r3);
 q[4] = q3 ^ r3 ^ q7 ^ r7 ^ r4 ^ rotr32(q4 ^ r4);
 q[5] = q4 ^ r4 ^ r5 ^ rotr32(q5 ^ r5);
 q[6] = q5 ^ r5 ^ r6 ^ rotr32(q6 ^ r6);
 q[7] = q6 ^ r6 ^ r7 ^ rotr32(q7 ^ r7);
}

static void inc4_be(uint32_t *x)
{
  *x = br_swap32(*x)+4;
  *x = br_swap32(*x);
}

static void aes_ctr4x(uint8_t out[64], uint32_t ivw[16], uint64_t sk_exp[64])
{
  uint32_t w[16];
  uint64_t q[8];
  int i;

  memcpy(w, ivw, sizeof(w));
  for (i = 0; i < 4; i++) {
    br_aes_ct64_interleave_in(&q[i], &q[i + 4], w + (i << 2));
  }
  br_aes_ct64_ortho(q);

  add_round_key(q, sk_exp);
  for (i = 1; i < 14; i++) {
    br_aes_ct64_bitslice_Sbox(q);
    shift_rows(q);
    mix_columns(q);
    add_round_key(q, sk_exp + (i << 3));
  }
  br_aes_ct64_bitslice_Sbox(q);
  shift_rows(q);
  add_round_key(q, sk_exp + 112);

  br_aes_ct64_ortho(q);
  for (i = 0; i < 4; i ++) {
    br_aes_ct64_interleave_out(w + (i << 2), q[i], q[i + 4]);
  }
  br_range_enc32le(out, w, 16);


  inc4_be(ivw+3);
  inc4_be(ivw+7);
  inc4_be(ivw+11);
  inc4_be(ivw+15);
}

static void br_aes_ct64_ctr_init(uint64_t sk_exp[120], const uint8_t *key)
{
 uint64_t skey[30];

 br_aes_ct64_keysched(skey, key);
 br_aes_ct64_skey_expand(sk_exp, skey);
}

static void br_aes_ct64_ctr_run(uint64_t sk_exp[120], const uint8_t *iv, uint32_t cc, uint8_t *data, size_t len)
{
 uint32_t ivw[16];
 size_t i;

 br_range_dec32le(ivw, 3, iv);
 memcpy(ivw + 4, ivw, 3 * sizeof(uint32_t));
 memcpy(ivw + 8, ivw, 3 * sizeof(uint32_t));
 memcpy(ivw + 12, ivw, 3 * sizeof(uint32_t));
 ivw[ 3] = br_swap32(cc);
 ivw[ 7] = br_swap32(cc + 1);
 ivw[11] = br_swap32(cc + 2);
 ivw[15] = br_swap32(cc + 3);

 while (len > 64) {
  aes_ctr4x(data, ivw, sk_exp);
  data += 64;
  len -= 64;
 }
 if(len > 0) {
  uint8_t tmp[64];
  aes_ctr4x(tmp, ivw, sk_exp);
  for(i=0;i<len;i++)
   data[i] = tmp[i];
 }
}

void pqcrystals_aes256ctr_ref_prf(uint8_t *out, size_t outlen, const uint8_t *key, const uint8_t *nonce)
{
  uint64_t sk_exp[120];

  br_aes_ct64_ctr_init(sk_exp, key);
  br_aes_ct64_ctr_run(sk_exp, nonce, 0, out, outlen);
}

void pqcrystals_aes256ctr_ref_init(aes256ctr_ctx *s, const uint8_t *key, const uint8_t *nonce)
{
  br_aes_ct64_ctr_init(s->sk_exp, key);

  br_range_dec32le(s->ivw, 3, nonce);
  memcpy(s->ivw + 4, s->ivw, 3 * sizeof(uint32_t));
  memcpy(s->ivw + 8, s->ivw, 3 * sizeof(uint32_t));
  memcpy(s->ivw + 12, s->ivw, 3 * sizeof(uint32_t));
  s->ivw[ 3] = br_swap32(0);
  s->ivw[ 7] = br_swap32(1);
  s->ivw[11] = br_swap32(2);
  s->ivw[15] = br_swap32(3);
}

void pqcrystals_aes256ctr_ref_squeezeblocks(uint8_t *out, size_t nblocks, aes256ctr_ctx *s)
{
  while (nblocks > 0) {
    aes_ctr4x(out, s->ivw, s->sk_exp);
    out += 64;
    nblocks--;
  }
}
