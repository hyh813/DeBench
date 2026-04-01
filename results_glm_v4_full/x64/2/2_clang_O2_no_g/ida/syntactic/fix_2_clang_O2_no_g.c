/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/2/2_clang_O2_no_g
 * Processor: pc
 */

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <immintrin.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/* Define __int128_compat for compatibility across all systems */
#if defined(__SIZEOF_INT128__)
typedef __int128 __int128_compat;
#else
typedef struct { unsigned long long lo, hi; } __int128_compat;
#endif

#define JUMPOUT(x) return
#define LODWORD(x) (*((uint32_t*)&(x)))

/* External symbols: Non-standard library function declarations */
extern void _gmon_start__(void);

/* Global data definitions */
static char s[] = "Data Types Level 1 Tests:";
static char asc_3600[] = "Array Types Level 1 Tests:";
static char asc_361B[] = "Pointer Types Level 2 Tests:";
static char asc_3636[] = "Composite Types Level 2 Tests:";
static unsigned long long xmmword_3030[8] = {0};
static unsigned long long xmmword_3658[2] = {0};
static __m128i xmm_zero = _mm_setzero_si128();
static unsigned int dword_3040[4] = {50, 100, 150, 200};
static unsigned long long off_4DE0[4] = {0, 0, 0, 0};

/* Function: .init_proc @ 0x1000 */
void *init_proc()
{
 _gmon_start__();
 return (void *)0;
}


/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: process_char @ 0x1150 */
long long process_char(unsigned int a1)
{
 long long result; // rax

 result = (unsigned char)(a1 + 32);
 if ( (unsigned char)(a1 - 65) >= 0x1Au )
 return a1;
 return result;
}


/* Function: process_short @ 0x1160 */
long long process_short(int a1, int a2)
{
 return (unsigned int)(a1 + a2);
}


/* Function: process_int @ 0x1170 */
long long process_int(int a1)
{
 return (unsigned int)(2 * a1 + 1);
}


/* Function: process_long @ 0x1180 */
long long process_long(long long a1)
{
 return 2 * a1;
}


/* Function: process_ll @ 0x1190 */
long long process_ll(long long a1)
{
 return a1 * a1;
}


/* Function: process_float @ 0x11A0 */
float process_float(float a1)
{
 return (float)(a1 * 1.5) + 0.5;
}


/* Function: process_double @ 0x11C0 */
double process_double(double a1)
{
 return a1 * 0.5 + 0.1;
}


/* Function: process_ld @ 0x11E0 */
long double process_ld(long double a1)
{
 return a1 * a1 + 1.0;
}


/* Function: process_bool @ 0x11F0 */
bool process_bool(int a1)
{
 return a1 > 0 && (a1 & 1) == 0;
}


/* Function: const_param @ 0x1200 */
long long const_param(unsigned int *a1)
{
 return (unsigned int)(*a1 + 10);
}


/* Function: volatile_access @ 0x1210 */
long long volatile_access(unsigned int *a1)
{
 return (unsigned int)(2 * *a1);
}


/* Function: test_data_types_l1 @ 0x1220 */
int test_data_types_l1()
{
 puts(s);
 printf("DT-L1-01 (process_char): %c\n", 97);
 printf("DT-L1-01 (process_char): %c\n", 98);
 printf("DT-L1-02 (process_short): %d\n", 300);
 printf("DT-L1-03 (process_int): %d\n", 11);
 printf("DT-L1-04 (process_long): %lld\n", 200);
 printf("DT-L1-05 (process_ll): %lld\n", 10000);
 printf("DT-L1-06 (process_float): %.2f\n", 3.5);
 printf("DT-L1-07 (process_double): %.2f\n", 2.1);
 printf("DT-L1-08 (process_ld): %.2Lf\n", 10.0);
 printf("DT-L1-09 (process_bool): %d\n", 1);
 printf("DT-L1-09 (process_bool): %d\n", 0);
 printf("DT-L1-09 (process_bool): %d\n", 0);
 printf("DT-L1-10 (const_param): %d\n", 15);
 return printf("DT-L1-11 (volatile_access): %d\n", 20);
}


/* Function: array_1d_stack @ 0x1350 */
long long array_1d_stack(long long a1, int a2)
{
 long long v2; // rcx
 long long v3; // rdx
 long long result; // rax
 __m128i v5; // xmm0
 long long v6; // rsi
 __m128i v7; // xmm1
 unsigned long long v8; // rax
 long long v9; // rax
 long long v10; // rsi
 __m128i v11; // xmm0
 __m128i v12; // xmm1

 if ( a2 <= 0 )
 return 0;
 v2 = (unsigned int)a2;
 if ( (unsigned int)a2 < 8 )
 {
 v3 = 0;
 LODWORD(result) = 0;
 do
LABEL_13:
 result = (unsigned int)(*(unsigned int *)(a1 + 4 * v3++) + result);
 while ( v2 != v3 );
 return result;
 }
 v3 = a2 & 0xFFFFFFF8;
 if ( (unsigned long long)(v3 - 8) >= 0x18 )
 {
 v8 = (((unsigned long long)(v3 - 8) >> 3) + 1) & 0xFFFFFFFFFFFFFFFCLL;
 v5 = 0;
 v6 = 0;
 v7 = 0;
 do
 {
 v5 = _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)(a1 + 4 * v6 + 96)),
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)(a1 + 4 * v6 + 64)),
 _mm_loadu_si128((const __m128i *)(a1 + 4 * v6 + 32))),
 _mm_add_epi32(_mm_loadu_si128((const __m128i *)(a1 + 4 * v6)), v5)));
 v7 = _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)(a1 + 4 * v6 + 112)),
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)(a1 + 4 * v6 + 80)),
 _mm_loadu_si128((const __m128i *)(a1 + 4 * v6 + 48))),
 _mm_add_epi32(_mm_loadu_si128((const __m128i *)(a1 + 4 * v6 + 16)), v7)));
 v6 += 32;
 v8 -= 4LL;
 }
 while ( v8 );
 }
 else
 {
 v5 = 0;
 v6 = 0;
 v7 = 0;
 }
 if ( (((unsigned char)((unsigned long long)(v3 - 8) >> 3) + 1) & 3) != 0 )
 {
 v9 = a1 + 4 * v6 + 16;
 v10 = 0;
 do
 {
 v5 = _mm_add_epi32(v5, _mm_loadu_si128((const __m128i *)(v9 + v10 - 16)));
 v7 = _mm_add_epi32(v7, _mm_loadu_si128((const __m128i *)(v9 + v10)));
 v10 += 32;
 }
 while ( 32LL * (((unsigned char)((unsigned long long)(v3 - 8) >> 3) + 1) & 3) != v10 );
 }
 v11 = _mm_add_epi32(v5, v7);
 v12 = _mm_add_epi32(_mm_shuffle_epi32(v11, 238), v11);
 result = (unsigned int)_mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v12, 85), v12));
 if ( v3 != v2 )
 goto LABEL_13;
 return result;
}


/* Function: array_string @ 0x1470 */
long long array_string(unsigned char *a1)
{
 long long result; // rax

 LODWORD(result) = -1;
 do
 result = (unsigned int)(result + 1);
 while ( *a1++ != 0 );
 return result;
}


/* Function: array_2d_stack @ 0x1490 */
long long array_2d_stack(unsigned int *a1)
{
 return (unsigned int)(a1[99] + a1[88] + a1[77] + a1[66] + a1[55] + a1[44] + a1[33] + a1[22] + *a1 + a1[11]);
}


/* Function: array_3d @ 0x14D0 */
long long array_3d(long long a1)
{
 __m128i v1; // xmm3
 __m128i v2; // xmm0
 __m128i v3; // xmm1
 __m128i v4; // xmm0
 int v5; // ecx
 __m128i v6; // xmm1
 __m128i v7; // xmm3
 __m128i v8; // xmm0
 int v9; // edx
 __m128i v10; // xmm0
 int v11; // eax
 __m128i v12; // xmm1
 __m128i v13; // xmm3
 __m128i v14; // xmm0
 int v15; // edx
 __m128i v16; // xmm0
 int v17; // ecx
 __m128i v18; // xmm1
 __m128i v19; // xmm3
 __m128i v20; // xmm0
 int v21; // eax
 __m128i v22; // xmm0
 int v23; // edx
 __m128i v24; // xmm1
 __m128i v25; // xmm3
 __m128i v26; // xmm0
 int v27; // ecx
 __m128i v28; // xmm0

 v1 = _mm_add_epi32(_mm_loadu_si128((const __m128i *)(a1 + 20)), _mm_loadu_si128((const __m128i *)(a1 + 4)));
 v2 = _mm_add_epi32(
 _mm_add_epi32(_mm_loadu_si128((const __m128i *)(a1 + 52)), _mm_loadu_si128((const __m128i *)(a1 + 84))),
 _mm_add_epi32(_mm_loadu_si128((const __m128i *)(a1 + 36)), _mm_loadu_si128((const __m128i *)(a1 + 68))));
 v3 = _mm_add_epi32(_mm_shuffle_epi32(v2, 238), v2);
 v4 = _mm_add_epi32(_mm_shuffle_epi32(v1, 238), v1);
 v5 = *(unsigned int *)a1
 + _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v3, 85), v3))
 + _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v4, 85), v4));
 v6 = _mm_add_epi32(_mm_loadu_si128((const __m128i *)(a1 + 104)), _mm_loadu_si128((const __m128i *)(a1 + 120)));
 v7 = _mm_add_epi32(
 _mm_add_epi32(_mm_loadu_si128((const __m128i *)(a1 + 152)), _mm_loadu_si128((const __m128i *)(a1 + 184))),
 _mm_add_epi32(_mm_loadu_si128((const __m128i *)(a1 + 136)), _mm_loadu_si128((const __m128i *)(a1 + 168))));
 v8 = _mm_add_epi32(_mm_shuffle_epi32(v7, 238), v7);
 v9 = _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v8, 85), v8));
 v10 = _mm_add_epi32(_mm_shuffle_epi32(v6, 238), v6);
 v11 = v5 + *(unsigned int *)(a1 + 100) + v9 + _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v10, 85), v10));
 v12 = _mm_add_epi32(_mm_loadu_si128((const __m128i *)(a1 + 204)), _mm_loadu_si128((const __m128i *)(a1 + 220)));
 v13 = _mm_add_epi32(
 _mm_add_epi32(_mm_loadu_si128((const __m128i *)(a1 + 252)), _mm_loadu_si128((const __m128i *)(a1 + 284))),
 _mm_add_epi32(_mm_loadu_si128((const __m128i *)(a1 + 236)), _mm_loadu_si128((const __m128i *)(a1 + 268))));
 v14 = _mm_add_epi32(_mm_shuffle_epi32(v13, 238), v13);
 v15 = _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v14, 85), v14));
 v16 = _mm_add_epi32(_mm_shuffle_epi32(v12, 238), v12);
 v17 = v11 + *(unsigned int *)(a1 + 200) + v15 + _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v16, 85), v16));
 v18 = _mm_add_epi32(_mm_loadu_si128((const __m128i *)(a1 + 304)), _mm_loadu_si128((const __m128i *)(a1 + 320)));
 v19 = _mm_add_epi32(
 _mm_add_epi32(_mm_loadu_si128((const __m128i *)(a1 + 352)), _mm_loadu_si128((const __m128i *)(a1 + 384))),
 _mm_add_epi32(_mm_loadu_si128((const __m128i *)(a1 + 336)), _mm_loadu_si128((const __m128i *)(a1 + 368))));
 v20 = _mm_add_epi32(_mm_shuffle_epi32(v19, 238), v19);
 v21 = _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v20, 85), v20));
 v22 = _mm_add_epi32(_mm_shuffle_epi32(v18, 238), v18);
 v23 = v17 + *(unsigned int *)(a1 + 300) + v21 + _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v22, 85), v22));
 v24 = _mm_add_epi32(_mm_loadu_si128((const __m128i *)(a1 + 404)), _mm_loadu_si128((const __m128i *)(a1 + 420)));
 v25 = _mm_add_epi32(
 _mm_add_epi32(_mm_loadu_si128((const __m128i *)(a1 + 452)), _mm_loadu_si128((const __m128i *)(a1 + 484))),
 _mm_add_epi32(_mm_loadu_si128((const __m128i *)(a1 + 436)), _mm_loadu_si128((const __m128i *)(a1 + 468))));
 v26 = _mm_add_epi32(_mm_shuffle_epi32(v25, 238), v25);
 v27 = _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v26, 85), v26));
 v28 = _mm_add_epi32(_mm_shuffle_epi32(v24, 238), v24);
 return (unsigned int)(v23
 + *(unsigned int *)(a1 + 400)
 + v27
 + _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v28, 85), v28)));
}


/* Function: array_vla @ 0x1700 */
long long array_vla(int a1, long long a2)
{
 long long v2; // rcx
 long long v3; // rdx
 long long result; // rax
 __m128i v5; // xmm0
 long long v6; // rdi
 __m128i v7; // xmm1
 unsigned long long v8; // rax
 long long v9; // rax
 long long v10; // rdi
 __m128i v11; // xmm0
 __m128i v12; // xmm1

 if ( a1 <= 0 )
 return 0;
 v2 = (unsigned int)a1;
 if ( (unsigned int)a1 < 8 )
 {
 v3 = 0;
 LODWORD(result) = 0;
 do
LABEL_13:
 result = (unsigned int)(*(unsigned int *)(a2 + 4 * v3++) + result);
 while ( v2 != v3 );
 return result;
 }
 v3 = a1 & 0xFFFFFFF8;
 if ( (unsigned long long)(v3 - 8) >= 0x18 )
 {
 v8 = (((unsigned long long)(v3 - 8) >> 3) + 1) & 0xFFFFFFFFFFFFFFFCLL;
 v5 = 0;
 v6 = 0;
 v7 = 0;
 do
 {
 v5 = _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)(a2 + 4 * v6 + 96)),
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)(a2 + 4 * v6 + 64)),
 _mm_loadu_si128((const __m128i *)(a2 + 4 * v6 + 32))),
 _mm_add_epi32(_mm_loadu_si128((const __m128i *)(a2 + 4 * v6)), v5)));
 v7 = _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)(a2 + 4 * v6 + 112)),
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)(a2 + 4 * v6 + 80)),
 _mm_loadu_si128((const __m128i *)(a2 + 4 * v6 + 48))),
 _mm_add_epi32(_mm_loadu_si128((const __m128i *)(a2 + 4 * v6 + 16)), v7)));
 v6 += 32;
 v8 -= 4LL;
 }
 while ( v8 );
 }
 else
 {
 v5 = 0;
 v6 = 0;
 v7 = 0;
 }
 if ( (((unsigned char)((unsigned long long)(v3 - 8) >> 3) + 1) & 3) != 0 )
 {
 v9 = a2 + 4 * v6 + 16;
 v10 = 0;
 do
 {
 v5 = _mm_add_epi32(v5, _mm_loadu_si128((const __m128i *)(v9 + v10 - 16)));
 v7 = _mm_add_epi32(v7, _mm_loadu_si128((const __m128i *)(v9 + v10)));
 v10 += 32;
 }
 while ( 32LL * (((unsigned char)((unsigned long long)(v3 - 8) >> 3) + 1) & 3) != v10 );
 }
 v11 = _mm_add_epi32(v5, v7);
 v12 = _mm_add_epi32(_mm_shuffle_epi32(v11, 238), v11);
 result = (unsigned int)_mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v12, 85), v12));
 if ( v3 != v2 )
 goto LABEL_13;
 return result;
}


/* Function: array_pointer @ 0x1820 */
long long array_pointer(long long a1, unsigned int a2)
{
 long long v2; // rcx
 long long v3; // rdx
 long long result; // rax
 unsigned long long v5; // rax
 __m128i v6; // xmm0
 long long v7; // rsi
 __m128i v8; // xmm1
 __m128i v9; // xmm1
 __m128i v10; // xmm0
 unsigned int *v11; // rsi
 long long v12; // rcx

 if ( (int)a2 <= 0 )
 return 0;
 v2 = a2;
 if ( a2 < 8 )
 {
 v3 = 0;
 LODWORD(result) = 0;
LABEL_8:
 v11 = (unsigned int *)(a1 + 40 * v3);
 v12 = v2 - v3;
 do
 {
 result = (unsigned int)(*v11 + result);
 v11 += 10;
 --v12;
 }
 while ( v12 );
 return result;
 }
 v3 = a2 & 0xFFFFFFF8;
 v5 = 5 * ((8LL * a2) & 0xFFFFFFFFFFFFFFC0LL);
 v6 = 0;
 v7 = 0;
 v8 = 0;
 do
 {
 v6 = _mm_add_epi32(
 v6,
 _mm_unpacklo_epi64(
 _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(unsigned int *)(a1 + v7)), _mm_cvtsi32_si128(*(unsigned int *)(a1 + v7 + 40))),
 _mm_unpacklo_epi32(
 _mm_cvtsi32_si128(*(unsigned int *)(a1 + v7 + 80)),
 _mm_cvtsi32_si128(*(unsigned int *)(a1 + v7 + 120)))));
 v8 = _mm_add_epi32(
 v8,
 _mm_unpacklo_epi64(
 _mm_unpacklo_epi32(
 _mm_cvtsi32_si128(*(unsigned int *)(a1 + v7 + 160)),
 _mm_cvtsi32_si128(*(unsigned int *)(a1 + v7 + 200))),
 _mm_unpacklo_epi32(
 _mm_cvtsi32_si128(*(unsigned int *)(a1 + v7 + 240)),
 _mm_cvtsi32_si128(*(unsigned int *)(a1 + v7 + 280)))));
 v7 += 320;
 }
 while ( v5 != v7 );
 v9 = _mm_add_epi32(v8, v6);
 v10 = _mm_add_epi32(_mm_shuffle_epi32(v9, 238), v9);
 result = (unsigned int)_mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v10, 85), v10));
 if ( v3 != v2 )
 goto LABEL_8;
 return result;
}


/* Function: pointer_array @ 0x1910 */
long long pointer_array(long long a1, int a2)
{
 int v2; // r8d
 long long v3; // rdx
 long long result; // rax
 unsigned int *v5; // rcx
 unsigned int *v6; // rcx
 unsigned int *v7; // rcx

 if ( a2 <= 0 )
 return 0;
 v2 = 10;
 if ( (unsigned int)a2 < 0xA )
 v2 = a2;
 if ( v2 == 1 )
 {
 v3 = 0;
 result = 0;
 }
 else
 {
 v3 = 0;
 result = 0;
 do
 {
 v6 = *(unsigned int **)(a1 + 8 * v3);
 if ( v6 )
 result = (unsigned int)(*v6 + result);
 v7 = *(unsigned int **)(a1 + 8 * v3 + 8);
 if ( v7 )
 result = (unsigned int)(*v7 + result);
 v3 += 2;
 }
 while ( (v2 & 0xE) != v3 );
 }
 if ( (v2 & 1) != 0 )
 {
 v5 = *(unsigned int **)(a1 + 8 * v3);
 if ( v5 )
 return (unsigned int)(*v5 + result);
 }
 return result;
}


/* Function: array_complex_index @ 0x1980 */
long long array_complex_index(long long a1, int a2, int a3, int a4, int a5)
{
 long long result; // rax

 result = 0xFFFFFFFFLL;
 if ( a4 >= 0 && a5 < a3 && a4 < a2 && a5 >= 0 )
 return *(unsigned int *)(a1 + 4LL * (a4 + a2 * a5));
 return result;
}


/* Function: array_oob @ 0x19B0 */
long long array_oob(long long a1, int a2)
{
 long long v2; // rcx
 long long v3; // rdx
 long long result; // rax
 __m128i v5; // xmm0
 long long v6; // rsi
 __m128i v7; // xmm1
 unsigned long long v8; // rax
 long long v9; // rax
 long long v10; // rsi
 __m128i v11; // xmm0
 __m128i v12; // xmm1

 if ( a2 < 0 )
 return 0;
 v2 = (unsigned int)(a2 + 1);
 if ( (unsigned int)a2 < 7 )
 {
 v3 = 0;
 LODWORD(result) = 0;
 do
LABEL_13:
 result = (unsigned int)(*(unsigned int *)(a1 + 4 * v3++) + result);
 while ( v2 != v3 );
 return result;
 }
 v3 = (unsigned int)v2 & 0xFFFFFFF8;
 if ( (unsigned long long)(v3 - 8) >= 0x18 )
 {
 v8 = (((unsigned long long)(v3 - 8) >> 3) + 1) & 0xFFFFFFFFFFFFFFFCLL;
 v5 = 0;
 v6 = 0;
 v7 = 0;
 do
 {
 v5 = _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)(a1 + 4 * v6 + 96)),
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)(a1 + 4 * v6 + 64)),
 _mm_loadu_si128((const __m128i *)(a1 + 4 * v6 + 32))),
 _mm_add_epi32(_mm_loadu_si128((const __m128i *)(a1 + 4 * v6)), v5)));
 v7 = _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)(a1 + 4 * v6 + 112)),
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)(a1 + 4 * v6 + 80)),
 _mm_loadu_si128((const __m128i *)(a1 + 4 * v6 + 48))),
 _mm_add_epi32(_mm_loadu_si128((const __m128i *)(a1 + 4 * v6 + 16)), v7)));
 v6 += 32;
 v8 -= 4LL;
 }
 while ( v8 );
 }
 else
 {
 v5 = 0;
 v6 = 0;
 v7 = 0;
 }
 if ( (((unsigned char)((unsigned long long)(v3 - 8) >> 3) + 1) & 3) != 0 )
 {
 v9 = a1 + 4 * v6 + 16;
 v10 = 0;
 do
 {
 v5 = _mm_add_epi32(v5, _mm_loadu_si128((const __m128i *)(v9 + v10 - 16)));
 v7 = _mm_add_epi32(v7, _mm_loadu_si128((const __m128i *)(v9 + v10)));
 v10 += 32;
 }
 while ( 32LL * (((unsigned char)((unsigned long long)(v3 - 8) >> 3) + 1) & 3) != v10 );
 }
 v11 = _mm_add_epi32(v5, v7);
 v12 = _mm_add_epi32(_mm_shuffle_epi32(v11, 238), v11);
 result = (unsigned int)_mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v12, 85), v12));
 if ( v3 != v2 )
 goto LABEL_13;
 return result;
}


/* Function: test_array_types @ 0x1AD0 */
int test_array_types()
{
 long long v0; // rbx
 int v1; // edx
 int v2; // edx
 int v3; // eax
 unsigned long long v5[6]; // [rsp+0h] [rbp-398h] BYREF
 int v6; // [rsp+60h] [rbp-338h]
 unsigned long long v7[2]; // [rsp+64h] [rbp-334h]
 unsigned long long v8[2]; // [rsp+74h] [rbp-324h]
 unsigned long long v9[2]; // [rsp+84h] [rbp-314h]
 unsigned long long v10[2]; // [rsp+94h] [rbp-304h]
 unsigned long long v11[2]; // [rsp+A4h] [rbp-2F4h]
 unsigned long long v12[2]; // [rsp+B4h] [rbp-2E4h]
 int v13; // [rsp+C4h] [rbp-2D4h]
 unsigned long long v14[2]; // [rsp+C8h] [rbp-2D0h]
 unsigned long long v15[2]; // [rsp+D8h] [rbp-2C0h]
 unsigned long long v16[2]; // [rsp+E8h] [rbp-2B0h]
 unsigned long long v17[2]; // [rsp+F8h] [rbp-2A0h]
 unsigned long long v18[2]; // [rsp+108h] [rbp-290h]
 unsigned long long v19[2]; // [rsp+118h] [rbp-280h]
 int v20; // [rsp+128h] [rbp-270h]
 unsigned long long v21[2]; // [rsp+12Ch] [rbp-26Ch]
 unsigned long long v22[2]; // [rsp+13Ch] [rbp-25Ch]
 unsigned long long v23[2]; // [rsp+14Ch] [rbp-24Ch]
 unsigned long long v24[2]; // [rsp+15Ch] [rbp-23Ch]
 unsigned long long v25[2]; // [rsp+16Ch] [rbp-22Ch]
 unsigned long long v26[2]; // [rsp+17Ch] [rbp-21Ch]
 int v27; // [rsp+18Ch] [rbp-20Ch]
 unsigned long long v28[2]; // [rsp+190h] [rbp-208h]
 unsigned long long v29[2]; // [rsp+1A0h] [rbp-1F8h]
 unsigned long long v30[2]; // [rsp+1B0h] [rbp-1E8h]
 unsigned long long v31[2]; // [rsp+1C0h] [rbp-1D8h]
 unsigned long long v32[2]; // [rsp+1D0h] [rbp-1C8h]
 unsigned long long v33[2]; // [rsp+1E0h] [rbp-1B8h]
 int v34; // [rsp+1F0h] [rbp-1A8h]
 unsigned int v35[102]; // [rsp+200h] [rbp-198h]

 puts(asc_3600);
 v0 = 0;
 printf("ARR-L1-01 (array_1d_stack): %d\n", 15);
 printf("ARR-L1-02 (array_string): %d\n", 5);
 do
 {
 v35[v0] = 0;
 v35[v0 + 1] = v0 == 10;
 v35[v0 + 2] = 2 * (v0 == 20);
 v35[v0 + 3] = 3 * (v0 == 30);
 v35[v0 + 4] = 4 * (v0 == 40);
 v35[v0 + 5] = 5 * (v0 == 50);
 v1 = 0;
 if ( v0 == 60 )
 v1 = 6;
 v35[v0 + 6] = v1;
 v2 = 0;
 if ( v0 == 70 )
 v2 = 7;
 v35[v0 + 7] = v2;
 v35[v0 + 8] = 8 * (v0 == 80);
 v35[v0 + 9] = 9 * (v0 == 90);
 v0 += 10;
 }
 while ( v0 != 100 );
 printf(
 "ARR-L1-03 (array_2d_stack): %d\n",
 v35[99] + v35[88] + v35[77] + v35[66] + v35[55] + v35[44] + v35[33] + v35[22] + v35[0] + v35[11]);
 v5[0] = xmmword_3030[0];
 v5[1] = xmmword_3030[1];
 v5[2] = xmmword_3030[2];
 v5[3] = xmmword_3030[3];
 v5[4] = xmmword_3030[4];
 v5[5] = xmmword_3030[5];
 v6 = 1;
 v7[0] = xmmword_3030[0]; v7[1] = xmmword_3030[1];
 v8[0] = xmmword_3030[0]; v8[1] = xmmword_3030[1];
 v9[0] = xmmword_3030[0]; v9[1] = xmmword_3030[1];
 v10[0] = xmmword_3030[0]; v10[1] = xmmword_3030[1];
 v11[0] = xmmword_3030[0]; v11[1] = xmmword_3030[1];
 v12[0] = xmmword_3030[0]; v12[1] = xmmword_3030[1];
 v13 = 1;
 v14[0] = xmmword_3030[0]; v14[1] = xmmword_3030[1];
 v15[0] = xmmword_3030[0]; v15[1] = xmmword_3030[1];
 v16[0] = xmmword_3030[0]; v16[1] = xmmword_3030[1];
 v17[0] = xmmword_3030[0]; v17[1] = xmmword_3030[1];
 v18[0] = xmmword_3030[0]; v18[1] = xmmword_3030[1];
 v19[0] = xmmword_3030[0]; v19[1] = xmmword_3030[1];
 v20 = 1;
 v21[0] = xmmword_3030[0]; v21[1] = xmmword_3030[1];
 v22[0] = xmmword_3030[0]; v22[1] = xmmword_3030[1];
 v23[0] = xmmword_3030[0]; v23[1] = xmmword_3030[1];
 v24[0] = xmmword_3030[0]; v24[1] = xmmword_3030[1];
 v25[0] = xmmword_3030[0]; v25[1] = xmmword_3030[1];
 v26[0] = xmmword_3030[0]; v26[1] = xmmword_3030[1];
 v27 = 1;
 v28[0] = xmmword_3030[0]; v28[1] = xmmword_3030[1];
 v29[0] = xmmword_3030[0]; v29[1] = xmmword_3030[1];
 v30[0] = xmmword_3030[0]; v30[1] = xmmword_3030[1];
 v31[0] = xmmword_3030[0]; v31[1] = xmmword_3030[1];
 v32[0] = xmmword_3030[0]; v32[1] = xmmword_3030[1];
 v33[0] = xmmword_3030[0]; v33[1] = xmmword_3030[1];
 v34 = 1;
 v3 = array_3d((long long)v5);
 printf("ARR-L1-04 (array_3d): %d\n", v3);
 printf("ARR-L2-01 (array_vla): %d\n", 60);
 printf("ARR-L2-02 (array_pointer): %d\n", 100);
 printf("ARR-L2-03 (pointer_array): %d\n", 60);
 return printf("ARR-L2-04 (array_complex_index): %d\n", 17);
}


/* Function: ptr_single @ 0x1DD0 */
long long ptr_single(unsigned int *a1)
{
 return (unsigned int)(*a1 + 10);
}


/* Function: ptr_double @ 0x1DE0 */
long long ptr_double(unsigned int **a1)
{
 return (unsigned int)(**a1 + 5);
}


/* Function: ptr_triple @ 0x1DF0 */
long long ptr_triple(unsigned int ***a1)
{
 return (unsigned int)(***a1 + 1);
}


/* Function: ptr_increment @ 0x1E00 */
long long ptr_increment(long long a1, int a2)
{
 long long v2; // r8
 unsigned long long v3; // r9
 long long result; // rax
 long long v5; // r8
 __m128i v6; // xmm0
 long long v7; // rdx
 __m128i v8; // xmm1
 unsigned long long v9; // rax
 long long v10; // rax
 long long v11; // rdx
 __m128i v12; // xmm0
 __m128i v13; // xmm1
 int v14; // esi
 long long v15; // rcx

 if ( a2 <= 0 )
 return 0;
 v2 = (unsigned int)(a2 - 1);
 LODWORD(v3) = 0;
 if ( (unsigned int)v2 < 7 )
 {
 LODWORD(result) = 0;
 goto LABEL_14;
 }
 v5 = v2 + 1;
 v3 = v5 & 0xFFFFFFFFFFFFFFF8LL;
 if ( (v5 & 0xFFFFFFFFFFFFFFF8LL) - 8 >= 0x18 )
 {
 v9 = ((((v5 & 0xFFFFFFFFFFFFFFF8LL) - 8) >> 3) + 1) & 0xFFFFFFFFFFFFFFFCLL;
 v6 = 0;
 v7 = 0;
 v8 = 0;
 do
 {
 v6 = _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)(a1 + 4 * v7 + 96)),
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)(a1 + 4 * v7 + 64)),
 _mm_loadu_si128((const __m128i *)(a1 + 4 * v7 + 32))),
 _mm_add_epi32(_mm_loadu_si128((const __m128i *)(a1 + 4 * v7)), v6)));
 v8 = _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)(a1 + 4 * v7 + 112)),
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)(a1 + 4 * v7 + 80)),
 _mm_loadu_si128((const __m128i *)(a1 + 4 * v7 + 48))),
 _mm_add_epi32(_mm_loadu_si128((const __m128i *)(a1 + 4 * v7 + 16)), v8)));
 v7 += 32;
 v9 -= 4LL;
 }
 while ( v9 );
 }
 else
 {
 v6 = 0;
 v7 = 0;
 v8 = 0;
 }
 if ( (((unsigned char)(((v5 & 0xFFFFFFFFFFFFFFF8LL) - 8) >> 3) + 1) & 3) != 0 )
 {
 v10 = a1 + 4 * v7 + 16;
 v11 = 0;
 do
 {
 v6 = _mm_add_epi32(v6, _mm_loadu_si128((const __m128i *)(v10 + v11 - 16)));
 v8 = _mm_add_epi32(v8, _mm_loadu_si128((const __m128i *)(v10 + v11)));
 v11 += 32;
 }
 while ( 32LL * (((unsigned char)(((v5 & 0xFFFFFFFFFFFFFFF8LL) - 8) >> 3) + 1) & 3) != v11 );
 }
 v12 = _mm_add_epi32(v6, v8);
 v13 = _mm_add_epi32(_mm_shuffle_epi32(v12, 238), v12);
 result = (unsigned int)_mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v13, 85), v13));
 if ( v5 != v3 )
 {
 a1 += 4 * v3;
LABEL_14:
 v14 = a2 - v3;
 v15 = 0;
 do
 result = (unsigned int)(*(unsigned int *)(a1 + 4 * v15++) + result);
 while ( v14 != (unsigned int)v15 );
 }
 return result;
}


/* Function: ptr_offset @ 0x1F30 */
long long ptr_offset(long long a1, int a2)
{
 return *(unsigned int *)(a1 + 4LL * a2);
}


/* Function: ptr_diff @ 0x1F40 */
unsigned long long ptr_diff(long long a1, long long a2)
{
 return (unsigned long long)(a1 - a2) >> 2;
}


/* Function: ptr_void @ 0x1F50 */
long long ptr_void(char *a1, int a2)
{
 long long result; // rax

 if ( a2 == 1 )
 return (unsigned int)*a1;
 result = 0xFFFFFFFFLL;
 if ( !a2 )
 return *(unsigned int *)a1;
 return result;
}


/* Function: ptr_const @ 0x1F70 */
long long ptr_const(unsigned int *a1)
{
 return (unsigned int)(2 * *a1);
}


/* Function: ptr_const_ptr @ 0x1F80 */
long long ptr_const_ptr(unsigned int *a1)
{
 long long result; // rax

 result = (unsigned int)(*a1 + 5);
 *a1 = result;
 return result;
}


/* Function: ptr_func_simple @ 0x1F90 */
long long ptr_func_simple(long long ( *a1)(unsigned long long), unsigned int a2)
{
 return a1(a2);
}


/* Function: ptr_func_complex @ 0x1FA0 */
long long ptr_func_complex(long long ( *a1)(long long, void *), long long a2)
{
 char v3[16] = {0};
 return a1(a2, v3);
}


/* Function: ptr_cast @ 0x1FD0 */
long long ptr_cast(unsigned int *a1)
{
 return *a1;
}


/* Function: opaque_handle_create @ 0x1FE0 */
long long opaque_handle_create(int a1)
{
 return a1;
}


/* Function: opaque_handle_op @ 0x1FF0 */
long long opaque_handle_op(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: test_pointer_types @ 0x2000 */
int test_pointer_types()
{
 puts(asc_361B);
 printf("PTR-L2-01 (ptr_single): %d\n", 15);
 printf("PTR-L2-02 (ptr_double): %d\n", 15);
 printf("PTR-L2-03 (ptr_triple): %d\n", 6);
 printf("PTR-L2-04 (ptr_increment): %d\n", 15);
 printf("PTR-L2-05 (ptr_offset): %d\n", 30);
 printf("PTR-L2-06 (ptr_diff): %d\n", 4);
 printf("PTR-L2-07 (ptr_void): %d\n", 42);
 printf("PTR-L2-07 (ptr_void): %d\n", 65);
 printf("PTR-L2-08 (ptr_const): %d\n", 20);
 printf("PTR-L2-09 (ptr_const_ptr): %d\n", 15);
 printf("PTR-L2-10 (ptr_func_simple): %d\n", 10);
 printf("PTR-L2-11 (ptr_func_complex): %d\n", 1);
 printf("PTR-L2-12 (ptr_cast): 0x%lx\n", 305419896L);
 return printf("PTR-L2-13 (opaque_handle_op): %d\n", 20);
}


/* Function: struct_simple @ 0x2120 */
long long struct_simple(unsigned int *a1)
{
 return (unsigned int)(a1[2] + *a1 + a1[1]);
}


/* Function: struct_array @ 0x2130 */
long long struct_array(long long a1, int a2)
{
 char v2; // r8
 long long v3; // rdx
 long long result; // rax
 long long v5; // rsi
 unsigned int *v6; // rcx

 if ( a2 <= 0 )
 return 0;
 v2 = a2;
 if ( a2 == 1 )
 {
 v3 = 0;
 result = 0;
 }
 else
 {
 v5 = a2 & 0xFFFFFFFE;
 v6 = (unsigned int *)(a1 + 20);
 v3 = 0;
 LODWORD(result) = 0;
 do
 {
 result = (unsigned int)(*v6 + *(v6 - 1) + *(v6 - 2) + *(v6 - 3) + *(v6 - 4) + *(v6 - 5) + result);
 v3 += 2;
 v6 += 6;
 }
 while ( v5 != v3 );
 }
 if ( (v2 & 1) != 0 )
 return (unsigned int)(*(unsigned int *)(a1 + 12 * v3 + 8)
 + *(unsigned int *)(a1 + 12 * v3 + 4)
 + *(unsigned int *)(a1 + 12 * v3)
 + result);
 return result;
}


/* Function: struct_nested @ 0x21A0 */
long long struct_nested(unsigned int *a1)
{
 return (unsigned int)(*a1 + a1[3]);
}


/* Function: struct_deep @ 0x21B0 */
long long struct_deep(long long a1)
{
 return (unsigned int)(*(unsigned int *)(a1 + 8) + *(unsigned int *)(a1 + 20));
}


/* Function: struct_with_ptr @ 0x21C0 */
long long struct_with_ptr(unsigned int *a1)
{
 unsigned int v1; // ecx
 unsigned int *v2; // rax

 v1 = *a1;
 v2 = (unsigned int *)*((unsigned long long *)a1 + 1);
 if ( v2 )
 return v1 + *v2;
 else
 return v1;
}


/* Function: struct_bitfields @ 0x21E0 */
long long struct_bitfields(unsigned short *a1)
{
 return (((unsigned short)*a1 >> 3) & 7)
 + (((unsigned short)*a1 >> 1) & 3)
 + (*a1 & 1)
 + ((unsigned short)*a1 >> 6);
}


/* Function: union_type @ 0x2210 */
long long union_type(char *a1, int a2)
{
 if ( a2 == 1 )
 return (unsigned int)(*(float *)a1);
 if ( a2 )
 return (unsigned int)*a1;
 return *(unsigned int *)a1;
}


/* Function: union_array @ 0x2230 */
long long union_array(long long a1, int a2)
{
 long long v2; // rcx
 long long v3; // rdx
 long long result; // rax
 __m128i v5; // xmm0
 long long v6; // rsi
 __m128i v7; // xmm1
 unsigned long long v8; // rax
 long long v9; // rax
 long long v10; // rsi
 __m128i v11; // xmm0
 __m128i v12; // xmm1

 if ( a2 <= 0 )
 return 0;
 v2 = (unsigned int)a2;
 if ( (unsigned int)a2 < 8 )
 {
 v3 = 0;
 LODWORD(result) = 0;
 do
LABEL_13:
 result = (unsigned int)(*(unsigned int *)(a1 + 4 * v3++) + result);
 while ( v2 != v3 );
 return result;
 }
 v3 = a2 & 0xFFFFFFF8;
 if ( (unsigned long long)(v3 - 8) >= 0x18 )
 {
 v8 = (((unsigned long long)(v3 - 8) >> 3) + 1) & 0xFFFFFFFFFFFFFFFCLL;
 v5 = 0;
 v6 = 0;
 v7 = 0;
 do
 {
 v5 = _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)(a1 + 4 * v6 + 96)),
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)(a1 + 4 * v6 + 64)),
 _mm_loadu_si128((const __m128i *)(a1 + 4 * v6 + 32))),
 _mm_add_epi32(_mm_loadu_si128((const __m128i *)(a1 + 4 * v6)), v5)));
 v7 = _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)(a1 + 4 * v6 + 112)),
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)(a1 + 4 * v6 + 80)),
 _mm_loadu_si128((const __m128i *)(a1 + 4 * v6 + 48))),
 _mm_add_epi32(_mm_loadu_si128((const __m128i *)(a1 + 4 * v6 + 16)), v7)));
 v6 += 32;
 v8 -= 4LL;
 }
 while ( v8 );
 }
 else
 {
 v5 = 0;
 v6 = 0;
 v7 = 0;
 }
 if ( (((unsigned char)((unsigned long long)(v3 - 8) >> 3) + 1) & 3) != 0 )
 {
 v9 = a1 + 4 * v6 + 16;
 v10 = 0;
 do
 {
 v5 = _mm_add_epi32(v5, _mm_loadu_si128((const __m128i *)(v9 + v10 - 16)));
 v7 = _mm_add_epi32(v7, _mm_loadu_si128((const __m128i *)(v9 + v10)));
 v10 += 32;
 }
 while ( 32LL * (((unsigned char)((unsigned long long)(v3 - 8) >> 3) + 1) & 3) != v10 );
 }
 v11 = _mm_add_epi32(v5, v7);
 v12 = _mm_add_epi32(_mm_shuffle_epi32(v11, 238), v11);
 result = (unsigned int)_mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v12, 85), v12));
 if ( v3 != v2 )
 goto LABEL_13;
 return result;
}


/* Function: enum_type @ 0x2350 */
long long enum_type(int a1)
{
 return (unsigned int)(10 * a1);
}


/* Function: enum_switch @ 0x2360 */
long long enum_switch(unsigned int a1)
{
 long long result; // rax

 result = 4294967197LL;
 if ( a1 <= 3 )
 return dword_3040[a1];
 return result;
}


typedef long long (*long_func_ptr_t)(long long);

/* Function: struct_func_ptr @ 0x2380 */
long long struct_func_ptr(unsigned int *a1)
{
 unsigned char *bytes = (unsigned char *)a1;
 long_func_ptr_t func_ptr;
 memcpy(&func_ptr, bytes + 8, sizeof(func_ptr));
 return func_ptr((long long)*a1);
}


/* Function: linked_list @ 0x2390 */
long long linked_list(long long a1)
{
 long long result; // rax

 for ( result = 0; a1; a1 = *(unsigned long long *)(a1 + 8) )
 result = (unsigned int)(*(unsigned int *)a1 + result);
 return result;
}


/* Function: doubly_linked_list @ 0x23B0 */
long long doubly_linked_list(long long a1)
{
 long long result; // rax

 for ( result = 0; a1; a1 = *(unsigned long long *)(a1 + 8) )
 result = (unsigned int)(*(unsigned int *)a1 + result);
 return result;
}


/* Function: binary_tree_sum @ 0x23D0 */
long long binary_tree_sum(long long a1)
{
 long long v1; // r14
 unsigned int v2; // ebx
 unsigned int v3; // ebx
 int v4; // eax

 if ( a1 )
 {
 v1 = a1;
 v2 = 0;
 do
 {
 v3 = *(unsigned int *)v1 + v2;
 v4 = binary_tree_sum(*(unsigned long long *)(v1 + 8));
 v1 = *(unsigned long long *)(v1 + 16);
 v2 = v4 + v3;
 }
 while ( v1 );
 }
 else
 {
 return 0;
 }
 return v2;
}


/* Function: binary_tree @ 0x2410 */
// attributes: thunk
long long binary_tree(long long a1)
{
 return binary_tree_sum(a1);
}


/* Function: graph_traverse @ 0x2420 */
long long graph_traverse(long long a1)
{
 int v1; // r8d
 long long v2; // rdx
 long long result; // rax
 long long i; // rcx
 long long j; // rcx
 long long k; // rcx

 v1 = *(unsigned int *)(a1 + 80);
 if ( v1 <= 0 )
 return 0;
 if ( v1 == 1 )
 {
 v2 = 0;
 result = 0;
 }
 else
 {
 v2 = 0;
 result = 0;
 do
 {
 for ( i = *(unsigned long long *)(a1 + 8 * v2); i; i = *(unsigned long long *)(i + 8) )
 result = (unsigned int)(*(unsigned int *)i + result);
 for ( j = *(unsigned long long *)(a1 + ((8 * v2) | 8)); j; j = *(unsigned long long *)(j + 8) )
 result = (unsigned int)(*(unsigned int *)j + result);
 v2 += 2;
 }
 while ( v2 != (v1 & 0xFFFFFFFE) );
 }
 if ( (v1 & 1) != 0 )
 {
 for ( k = *(unsigned long long *)(a1 + 8 * v2); k; k = *(unsigned long long *)(k + 8) )
 result = (unsigned int)(*(unsigned int *)k + result);
 }
 return result;
}


/* Function: test_composite_types @ 0x24C0 */
int test_composite_types()
{
 int v0;
 int *v1;
 int v2;
 int *v3;
 int v4;
 int v6;
 int *v7;
 int v8;
 int *v9;
 int v10;
 long long v11;
 int v12;
 int *v13;
 long long v14;
 int v15;
 long long v16;
 int *v17;
 unsigned long long v18[2];
 long long v19;

 puts(asc_3636);
 v0 = 0;
 printf("CMP-L2-01 (struct_simple): %d\n", 6);
 printf("CMP-L2-02 (struct_array): %d\n", 9);
 printf("CMP-L2-03 (struct_nested): %d\n", 105);
 printf("CMP-L2-04 (struct_deep): %d\n", 258);
 printf("CMP-L2-05 (struct_with_ptr): %d\n", 30);
 printf("CMP-L2-06 (struct_bitfields): %d\n", 106);
 printf("CMP-L2-07 (union_type): %d\n", 305419896);
 printf("CMP-L2-08 (union_array): %d\n", 60);
 printf("CMP-L2-09 (enum_type): %d\n", 10);
 printf("CMP-L2-10 (enum_switch): %d\n", 50);
 printf("CMP-L2-11 (struct_func_ptr): %d\n", 21);
 v1 = &v6;
 v6 = 10;
 v7 = &v8;
 v8 = 20;
 v9 = &v10;
 v10 = 30;
 v11 = 0;
 do
 {
 v0 += *v1;
 v1 = (int *)*((unsigned long long *)v1 + 1);
 }
 while ( v1 );
 v2 = 0;
 printf("CMP-L2-12 (linked_list): %d\n", v0);
 v3 = &v12;
 v12 = 10;
 v14 = 0;
 v15 = 20;
 v16 = 0;
 v17 = &v12;
 v13 = &v15;
 do
 {
 v2 += *v3;
 v3 = (int *)*((unsigned long long *)v3 + 1);
 }
 while ( v3 );
 printf("CMP-L2-13 (doubly_linked_list): %d\n", v2);
 v19 = 0;
 v18[0] = xmmword_3658[0];
 v18[1] = xmmword_3658[1];
 v4 = binary_tree_sum((long long)&v18);
 printf("CMP-L2-14 (binary_tree): %d\n", v4);
 return printf("CMP-L2-15 (graph_traverse): %d\n", 1);
}


/* Function: main @ 0x26B0 */
int main(int argc, const char **argv, const char **envp)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}


/* Function: .term_proc @ 0x26CC */
void term_proc()
{
 ;
}


/* FAILED to decompile: __libc_start_main @ 0x5048 */

/* FAILED to decompile: puts @ 0x5050 */

/* FAILED to decompile: printf @ 0x5058 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x5060 */

/* FAILED to decompile: __gmon_start__ @ 0x5070 */

/* Total functions decompiled: 63, failed: 5 */
