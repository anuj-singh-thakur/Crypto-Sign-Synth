// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
# 1 "C:/Users/Hp/Desktop/IITG/MTech_Course_2_Sem/C_BASED_VLSI/AssignmentPhase_2_Latency/dilithium2/packing.c"
# 1 "C:/Users/Hp/Desktop/IITG/MTech_Course_2_Sem/C_BASED_VLSI/AssignmentPhase_2_Latency/dilithium2/packing.c" 1
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 147 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "C:/Users/Hp/Desktop/IITG/MTech_Course_2_Sem/C_BASED_VLSI/AssignmentPhase_2_Latency/dilithium2/packing.c" 2
# 1 "C:/Users/Hp/Desktop/IITG/MTech_Course_2_Sem/C_BASED_VLSI/AssignmentPhase_2_Latency/dilithium2/params.h" 1



# 1 "C:/Users/Hp/Desktop/IITG/MTech_Course_2_Sem/C_BASED_VLSI/AssignmentPhase_2_Latency/dilithium2/config.h" 1
# 5 "C:/Users/Hp/Desktop/IITG/MTech_Course_2_Sem/C_BASED_VLSI/AssignmentPhase_2_Latency/dilithium2/params.h" 2
# 2 "C:/Users/Hp/Desktop/IITG/MTech_Course_2_Sem/C_BASED_VLSI/AssignmentPhase_2_Latency/dilithium2/packing.c" 2
# 1 "C:/Users/Hp/Desktop/IITG/MTech_Course_2_Sem/C_BASED_VLSI/AssignmentPhase_2_Latency/dilithium2/packing.h" 1



# 1 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/include\\stdint.h" 1 3 4
# 33 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/include\\stdint.h" 3 4
# 1 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdint.h" 1 3 4
# 28 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdint.h" 3 4
# 1 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3 4
# 10 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3 4
# 1 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/_mingw_mac.h" 1 3 4
# 10 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3 4
# 277 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3 4
# 1 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 1 3 4
# 13 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 3 4
# 1 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3 4
# 674 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3 4
# 1 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/sdks/_mingw_directx.h" 1 3 4
# 674 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3 4

# 1 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/sdks/_mingw_ddk.h" 1 3 4
# 675 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3 4
# 13 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 2 3 4


#pragma pack(push,_CRT_PACKING)








 typedef __builtin_va_list __gnuc_va_list;






  typedef __gnuc_va_list va_list;
# 102 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 3 4
#pragma pack(pop)
# 277 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3 4


#pragma pack(push,_CRT_PACKING)
# 370 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3 4
__extension__ typedef unsigned long long size_t;
# 380 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3 4
__extension__ typedef long long ssize_t;
# 392 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3 4
__extension__ typedef long long intptr_t;
# 405 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3 4
__extension__ typedef unsigned long long uintptr_t;
# 418 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3 4
__extension__ typedef long long ptrdiff_t;
# 428 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3 4
typedef unsigned short wchar_t;







typedef unsigned short wint_t;
typedef unsigned short wctype_t;
# 456 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3 4
typedef int errno_t;




typedef long __time32_t;




__extension__ typedef long long __time64_t;







typedef __time64_t time_t;
# 607 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3 4
struct threadlocaleinfostruct;
struct threadmbcinfostruct;
typedef struct threadlocaleinfostruct *pthreadlocinfo;
typedef struct threadmbcinfostruct *pthreadmbcinfo;
struct __lc_time_data;

typedef struct localeinfo_struct {
  pthreadlocinfo locinfo;
  pthreadmbcinfo mbcinfo;
} _locale_tstruct,*_locale_t;



typedef struct tagLC_ID {
  unsigned short wLanguage;
  unsigned short wCountry;
  unsigned short wCodePage;
} LC_ID,*LPLC_ID;




typedef struct threadlocaleinfostruct {
  int refcount;
  unsigned int lc_codepage;
  unsigned int lc_collate_cp;
  unsigned long lc_handle[6];
  LC_ID lc_id[6];
  struct {
    char *locale;
    wchar_t *wlocale;
    int *refcount;
    int *wrefcount;
  } lc_category[6];
  int lc_clike;
  int mb_cur_max;
  int *lconv_intl_refcount;
  int *lconv_num_refcount;
  int *lconv_mon_refcount;
  struct lconv *lconv;
  int *ctype1_refcount;
  unsigned short *ctype1;
  const unsigned short *pctype;
  const unsigned char *pclmap;
  const unsigned char *pcumap;
  struct __lc_time_data *lc_time_curr;
} threadlocinfo;







const char *__mingw_get_crt_info (void);





#pragma pack(pop)
# 28 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdint.h" 2 3 4




# 1 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
# 31 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 3 4
typedef __typeof__(((int*)0)-((int*)0)) ptrdiff_t;



typedef __typeof__(sizeof(int)) size_t;




typedef unsigned short wchar_t;
# 32 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdint.h" 2 3 4



typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef short int16_t;
typedef unsigned short uint16_t;
typedef int int32_t;
typedef unsigned uint32_t;
__extension__ typedef long long int64_t;
__extension__ typedef unsigned long long uint64_t;


typedef signed char int_least8_t;
typedef unsigned char uint_least8_t;
typedef short int_least16_t;
typedef unsigned short uint_least16_t;
typedef int int_least32_t;
typedef unsigned uint_least32_t;
__extension__ typedef long long int_least64_t;
__extension__ typedef unsigned long long uint_least64_t;





typedef signed char int_fast8_t;
typedef unsigned char uint_fast8_t;
typedef short int_fast16_t;
typedef unsigned short uint_fast16_t;
typedef int int_fast32_t;
typedef unsigned int uint_fast32_t;
__extension__ typedef long long int_fast64_t;
__extension__ typedef unsigned long long uint_fast64_t;


__extension__ typedef long long intmax_t;
__extension__ typedef unsigned long long uintmax_t;
# 33 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/include\\stdint.h" 2 3 4
# 5 "C:/Users/Hp/Desktop/IITG/MTech_Course_2_Sem/C_BASED_VLSI/AssignmentPhase_2_Latency/dilithium2/packing.h" 2

# 1 "C:/Users/Hp/Desktop/IITG/MTech_Course_2_Sem/C_BASED_VLSI/AssignmentPhase_2_Latency/dilithium2/polyvec.h" 1





# 1 "C:/Users/Hp/Desktop/IITG/MTech_Course_2_Sem/C_BASED_VLSI/AssignmentPhase_2_Latency/dilithium2/poly.h" 1






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
# 7 "C:/Users/Hp/Desktop/IITG/MTech_Course_2_Sem/C_BASED_VLSI/AssignmentPhase_2_Latency/dilithium2/polyvec.h" 2


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
# 7 "C:/Users/Hp/Desktop/IITG/MTech_Course_2_Sem/C_BASED_VLSI/AssignmentPhase_2_Latency/dilithium2/packing.h" 2


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
# 3 "C:/Users/Hp/Desktop/IITG/MTech_Course_2_Sem/C_BASED_VLSI/AssignmentPhase_2_Latency/dilithium2/packing.c" 2
# 15 "C:/Users/Hp/Desktop/IITG/MTech_Course_2_Sem/C_BASED_VLSI/AssignmentPhase_2_Latency/dilithium2/packing.c"
void pqcrystals_dilithium2_ref_pack_pk(uint8_t pk[(32 + 4*320)],
             const uint8_t rho[32],
             const polyveck *t1)
{
  unsigned int i;

  for(i = 0; i < 32; ++i)
    pk[i] = rho[i];
  pk += 32;

  for(i = 0; i < 4; ++i)
    pqcrystals_dilithium2_ref_polyt1_pack(pk + i*320, &t1->vec[i]);
}
# 38 "C:/Users/Hp/Desktop/IITG/MTech_Course_2_Sem/C_BASED_VLSI/AssignmentPhase_2_Latency/dilithium2/packing.c"
void pqcrystals_dilithium2_ref_unpack_pk(uint8_t rho[32],
               polyveck *t1,
               const uint8_t pk[(32 + 4*320)])
{
  unsigned int i;

  for(i = 0; i < 32; ++i)
    rho[i] = pk[i];
  pk += 32;

  for(i = 0; i < 4; ++i)
    pqcrystals_dilithium2_ref_polyt1_unpack(&t1->vec[i], pk + i*320);
}
# 65 "C:/Users/Hp/Desktop/IITG/MTech_Course_2_Sem/C_BASED_VLSI/AssignmentPhase_2_Latency/dilithium2/packing.c"
void pqcrystals_dilithium2_ref_pack_sk(uint8_t sk[(2*32 + 48 + 4*96 + 4*96 + 4*416)],
             const uint8_t rho[32],
             const uint8_t tr[48],
             const uint8_t key[32],
             const polyveck *t0,
             const polyvecl *s1,
             const polyveck *s2)
{
  unsigned int i;

  for(i = 0; i < 32; ++i)
    sk[i] = rho[i];
  sk += 32;

  for(i = 0; i < 32; ++i)
    sk[i] = key[i];
  sk += 32;

  for(i = 0; i < 48; ++i)
    sk[i] = tr[i];
  sk += 48;

  for(i = 0; i < 4; ++i)
    pqcrystals_dilithium2_ref_polyeta_pack(sk + i*96, &s1->vec[i]);
  sk += 4*96;

  for(i = 0; i < 4; ++i)
    pqcrystals_dilithium2_ref_polyeta_pack(sk + i*96, &s2->vec[i]);
  sk += 4*96;

  for(i = 0; i < 4; ++i)
    pqcrystals_dilithium2_ref_polyt0_pack(sk + i*416, &t0->vec[i]);
}
# 112 "C:/Users/Hp/Desktop/IITG/MTech_Course_2_Sem/C_BASED_VLSI/AssignmentPhase_2_Latency/dilithium2/packing.c"
void pqcrystals_dilithium2_ref_upack_sk(uint8_t rho[32],
               uint8_t tr[48],
               uint8_t key[32],
               polyveck *t0,
               polyvecl *s1,
               polyveck *s2,
               const uint8_t sk[(2*32 + 48 + 4*96 + 4*96 + 4*416)])
{
  unsigned int i;

  for(i = 0; i < 32; ++i)
    rho[i] = sk[i];
  sk += 32;

  for(i = 0; i < 32; ++i)
    key[i] = sk[i];
  sk += 32;

  for(i = 0; i < 48; ++i)
    tr[i] = sk[i];
  sk += 48;

  for(i=0; i < 4; ++i)
    pqcrystals_dilithium2_ref_polyeta_unpack(&s1->vec[i], sk + i*96);
  sk += 4*96;

  for(i=0; i < 4; ++i)
    pqcrystals_dilithium2_ref_polyeta_unpack(&s2->vec[i], sk + i*96);
  sk += 4*96;

  for(i=0; i < 4; ++i)
    pqcrystals_dilithium2_ref_polyt0_unpack(&t0->vec[i], sk + i*416);
}
# 156 "C:/Users/Hp/Desktop/IITG/MTech_Course_2_Sem/C_BASED_VLSI/AssignmentPhase_2_Latency/dilithium2/packing.c"
void pqcrystals_dilithium2_ref_pack_sig(uint8_t sig[(32 + 4*576 + (80 + 4))],
              const uint8_t c[32],
              const polyvecl *z,
              const polyveck *h)
{
  unsigned int i, j, k;

  for(i=0; i < 32; ++i)
    sig[i] = c[i];
  sig += 32;

  for(i = 0; i < 4; ++i)
    pqcrystals_dilithium2_ref_polyz_pack(sig + i*576, &z->vec[i]);
  sig += 4*576;


  for(i = 0; i < 80 + 4; ++i)
    sig[i] = 0;

  k = 0;
  for(i = 0; i < 4; ++i) {
    for(j = 0; j < 256; ++j)
      if(h->vec[i].coeffs[j] != 0)
        sig[k++] = j;

    sig[80 + i] = k;
  }
}
# 198 "C:/Users/Hp/Desktop/IITG/MTech_Course_2_Sem/C_BASED_VLSI/AssignmentPhase_2_Latency/dilithium2/packing.c"
int pqcrystals_dilithium2_ref_unpack_sig(uint8_t c[32],
               polyvecl *z,
               polyveck *h,
               const uint8_t sig[(32 + 4*576 + (80 + 4))])
{
  unsigned int i, j, k;

  for(i = 0; i < 32; ++i)
    c[i] = sig[i];
  sig += 32;

  for(i = 0; i < 4; ++i)
    pqcrystals_dilithium2_ref_polyz_unpack(&z->vec[i], sig + i*576);
  sig += 4*576;


  k = 0;
  for(i = 0; i < 4; ++i) {
    for(j = 0; j < 256; ++j)
      h->vec[i].coeffs[j] = 0;

    if(sig[80 + i] < k || sig[80 + i] > 80)
      return 1;

    for(j = k; j < sig[80 + i]; ++j) {

      if(j > k && sig[j] <= sig[j-1]) return 1;
      h->vec[i].coeffs[sig[j]] = 1;
    }

    k = sig[80 + i];
  }


  for(j = k; j < 80; ++j)
    if(sig[j])
      return 1;

  return 0;
}
