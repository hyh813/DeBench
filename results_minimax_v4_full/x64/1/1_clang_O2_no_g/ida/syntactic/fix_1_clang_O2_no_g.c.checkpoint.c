/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/1/1_clang_O2_no_g
 * Processor: pc
 */

#include <emmintrin.h>
#include <stdio.h>
#include <setjmp.h>

/* LODWORD macro to get/set low 32 bits of a 64-bit value */
#define LODWORD(x) (*(unsigned int*)&(x))
#define SETLODWORD(x, val) do { *(unsigned int*)&(x) = (unsigned int)(val); } while(0)

/* JUMPOUT macro for unconditional jumps (infinite loop) */
#define JUMPOUT(addr) while(1) {}

/* Data arrays (constant data from binary) */
static const unsigned int dword_3280[4] = {0, 10, 20, 30};  /* switch_small jump table */
static const unsigned int dword_30D8[12] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};  /* loop_multi_exit */
static const unsigned int dword_3108[12] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};  /* loop_multi_exit */

/* SIMD constant arrays (128-bit) */
static const __m128i xmmword_3140 = {1, 1, 1, 1};
static const __m128i xmmword_3150 = {2, 2, 2, 2};
static const __m128i xmmword_3160 = {3, 3, 3, 3};
static const __m128i xmmword_3170 = {4, 4, 4, 4};
static const __m128i xmmword_3180 = {5, 5, 5, 5};
static const __m128i xmmword_3190 = {6, 6, 6, 6};
static const __m128i xmmword_31A0 = {7, 7, 7, 7};
static const __m128i xmmword_31B0 = {8, 8, 8, 8};
static const __m128i xmmword_31C0 = {9, 9, 9, 9};
static const __m128i xmmword_31D0 = {10, 10, 10, 10};
static const __m128i xmmword_31E0 = {1, 1, 1, 1};
static const __m128i xmmword_31F0 = {2, 2, 2, 2};
static const __m128i xmmword_3200 = {3, 3, 3, 3};
static const __m128i xmmword_3210 = {4, 4, 4, 4};
static const __m128i xmmword_3220 = {5, 5, 5, 5};
static const __m128i xmmword_3230 = {6, 6, 6, 6};
static const __m128i xmmword_3240 = {7, 7, 7, 7};
static const __m128i xmmword_3250 = {8, 8, 8, 8};
static const __m128i xmmword_3260 = {9, 9, 9, 9};
static const __m128i xmmword_3270 = {10, 10, 10, 10};

/* String constants */
static const char s[] = "Control Flow Test Suite\n";
static const char asc_3809[] = "Control Flow L2 Tests\n";
static const char asc_382D[] = "Control Flow L3 Tests\n";

/* Jump buffer for non-local jumps */
static jmp_buf jump_buffer;

/* Function prototypes */
long long recursion_factorial(unsigned long long n);
long long triple_value(unsigned long long n);
long long double_value(unsigned long long n);

/* recursion_factorial implementation */
long long recursion_factorial(unsigned long long n)
{
 if (n <= 1)
 return 1;
 return n * recursion_factorial(n - 1);
}

/* triple_value implementation */
long long triple_value(unsigned long long n)
{
 return 3 * (long long)n;
}

/* double_value implementation */
long long double_value(unsigned long long n)
{
 return 2 * (long long)n;
}




/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 /* Infinite loop - original jumped to 0x1020 */
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: sequential_ops @ 0x1170 */
long long sequential_ops(int a1, int a2, int a3)
{
 return (unsigned int)(2 * (a1 + a2) - a3);
}


/* Function: single_if @ 0x1180 */
long long single_if(int a1)
{
 return (unsigned int)(a1 << (a1 > 0));
}


/* Function: if_else @ 0x1190 */
int if_else(int a1)
{
 return a1 > 0;
}


/* Function: nested_if_2 @ 0x11A0 */
long long nested_if_2(int a1, int a2)
{
 long long result; // rax

 if ( a2 < 0 )
 a2 = 0;
 result = (unsigned int)(a2 + a1);
 if ( a1 <= 0 )
 return 0;
 return result;
}


/* Function: nested_if_deep @ 0x11B0 */
long long nested_if_deep(int a1, int a2, int a3, int a4, int a5)
{
 if ( a1 <= 0 )
 return 0;
 if ( a2 <= 0 )
 return 1;
 if ( a3 <= 0 )
 return 2;
 if ( a4 <= 0 )
 return 3;
 return (a5 > 0) | 4u;
}


/* Function: if_elseif_chain @ 0x11F0 */
long long if_elseif_chain(unsigned int a1)
{
 long long result; // rax

 result = 0xFFFFFFFFLL;
 if ( a1 < 3 )
 return 10 * a1 + 10;
 return result;
}


/* Function: if_elseif_long @ 0x1210 */
long long if_elseif_long(unsigned int a1)
{
 long long result; // rax

 result = 0xFFFFFFFFLL;
 if ( a1 < 5 )
 return 100 * a1 + 100;
 return result;
}


/* Function: switch_small @ 0x1230 */
long long switch_small(unsigned int a1)
{
 long long result; // rax

 result = 0xFFFFFFFFLL;
 if ( a1 <= 3 )
 return dword_3280[a1];
 return result;
}


/* Function: switch_large @ 0x1250 */
long long switch_large(unsigned int a1)
{
 long long result; // rax

 result = 0xFFFFFFFFLL;
 if ( a1 < 0xA )
 return 10 * a1;
 return result;
}


/* Function: switch_default @ 0x1270 */
long long switch_default(int a1)
{
 unsigned int v1; // edi
 long long result; // rax

 v1 = a1 - 1;
 result = 0;
 if ( v1 < 3 )
 return 100 * v1 + 100;
 return result;
}


/* Function: switch_fallthrough @ 0x1290 */
long long switch_fallthrough(int a1)
{
 int v1; // eax
 long long result; // rax

 v1 = 0;
 if ( a1 != 1 )
 {
 if ( a1 != 2 )
 {
 result = 0xFFFFFFFFLL;
 if ( a1 != 3 )
 return result;
 v1 = 12;
 }
 v1 += 2 * a1;
 }
 return (unsigned int)(a1 + v1);
}


/* Function: loop_for_fixed @ 0x12C0 */
long long loop_for_fixed(int a1)
{
 if ( a1 <= 0 )
 return 0;
 else
 return (unsigned int)(((unsigned int)(a1 - 1) * (unsigned long long)(unsigned int)(a1 - 2)) >> 1) + a1 - 1;
}


/* Function: loop_while @ 0x12E0 */
long long loop_while(int a1)
{
 long long result; // rax
 int v2; // ecx

 if ( !a1 )
 return 1;
 LODWORD(result) = 0;
 do
 {
 v2 = a1;
 a1 /= 10;
 result = (unsigned int)(result + 1);
 }
 while ( (unsigned int)(v2 + 9) > 0x12 );
 return result;
}


/* Function: loop_dowhile @ 0x1320 */
long long loop_dowhile(int a1)
{
 long long result; // rax
 int v2; // ecx

 LODWORD(result) = 0;
 do
 {
 v2 = a1;
 a1 /= 10;
 result = (unsigned int)(result + 1);
 }
 while ( (unsigned int)(v2 + 9) > 0x12 );
 return result;
}


/* Function: loop_nested @ 0x1360 */
long long loop_nested(int a1, int a2)
{
 long long result; // rax
 unsigned int v3; // esi

 result = 0;
 if ( a2 <= 0 )
 a2 = 0;
 v3 = a1 * a2;
 if ( a1 > 0 )
 return v3;
 return result;
}


/* Function: loop_break @ 0x1370 */
long long loop_break(int a1)
{
 long long result; // rax

 result = 0;
 switch ( a1 )
 {
 case 10:
 return result;
 case 20:
 result = 1;
 break;
 case 30:
 result = 2;
 break;
 case 40:
 result = 3;
 break;
 case 50:
 result = 4;
 break;
 default:
 result = 0xFFFFFFFFLL;
 break;
 }
 return result;
}


/* Function: loop_continue @ 0x13B0 */
long long loop_continue(int a1)
{
 long long result; // rax
 int v2; // ecx
 int v3; // ecx
 unsigned int v4; // eax
 unsigned int v5; // edx
 __m128i si128; // xmm5
 __m128i v7; // xmm9
 __m128i v8; // xmm10
 __m128i v9; // xmm11
 __m128i v10; // xmm12
 __m128i v11; // xmm3
 __m128i v12; // xmm0
 __m128i v13; // xmm4
 __m128i v14; // xmm2
 __m128i v15; // xmm2
 __m128i v16; // xmm4
 __m128i v17; // xmm0
 __m128i v18; // xmm1
 int v19; // edi

 if ( a1 <= 0 )
 return 0;
 if ( (unsigned int)a1 < 8 )
 {
 LODWORD(result) = 0;
 v2 = 1;
 goto LABEL_12;
 }
 v3 = a1 & 0x7FFFFFF8;
 v4 = (((a1 & 0xFFFFFFF8) - 8) >> 3) + 1;
 if ( (a1 & 0xFFFFFFF8) == 8 )
 {
 v12 = _mm_setzero_si128();
 si128 = _mm_load_si128((const __m128i *)&xmmword_3140);
 v15 = _mm_setzero_si128();
 if ( (v4 & 1) == 0 )
 goto LABEL_10;
 }
 else
 {
 v5 = v4 & 0xFFFFFFFE;
 si128 = _mm_load_si128((const __m128i *)&xmmword_3140);
 v7 = _mm_load_si128((const __m128i *)&xmmword_3150);
 v8 = _mm_load_si128((const __m128i *)&xmmword_3160);
 v9 = _mm_load_si128((const __m128i *)&xmmword_3170);
 v10 = _mm_load_si128((const __m128i *)&xmmword_3180);
 v11 = _mm_load_si128((const __m128i *)&xmmword_3190);
 v12 = _mm_setzero_si128();
 v13 = _mm_setzero_si128();
 do
 {
 v14 = _mm_cmpeq_epi32(_mm_and_si128(si128, v8), _mm_setzero_si128());
 v12 = _mm_add_epi32(
 _mm_andnot_si128(v14, _mm_add_epi32(si128, v9)),
 _mm_add_epi32(_mm_andnot_si128(v14, si128), v12));
 v15 = _mm_add_epi32(
 _mm_andnot_si128(v14, _mm_add_epi32(si128, v10)),
 _mm_add_epi32(_mm_andnot_si128(v14, _mm_add_epi32(si128, v7)), v13));
 si128 = _mm_add_epi32(si128, v11);
 v13 = v15;
 v5 -= 2;
 }
 while ( v5 );
 if ( (v4 & 1) == 0 )
 goto LABEL_10;
 }
 v16 = _mm_cmpeq_epi32(_mm_setzero_si128(), _mm_and_si128(_mm_load_si128((const __m128i *)&xmmword_3160), si128));
 v12 = _mm_add_epi32(v12, _mm_andnot_si128(v16, si128));
 v15 = _mm_add_epi32(v15, _mm_andnot_si128(v16, _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_3150), si128)));
LABEL_10:
 v17 = _mm_add_epi32(v12, v15);
 v18 = _mm_add_epi32(_mm_shuffle_epi32(v17, 238), v17);
 result = (unsigned int)_mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v18, 85), v18));
 if ( v3 == a1 )
 return result;
 v2 = v3 | 1;
LABEL_12:
 v19 = a1 + 1;
 do
 {
 result = (v2 & -(v2 & 1)) + (int)result;
 ++v2;
 }
 while ( v19 != v2 );
 return result;
}


/* Function: goto_forward @ 0x1520 */
long long goto_forward(int a1)
{
 int v1; // eax

 v1 = 1;
 if ( a1 > 0 )
 v1 = a1;
 return (unsigned int)(2 * a1 * v1);
}


/* Function: goto_backward @ 0x1530 */
long long goto_backward(int a1)
{
 int v1; // ecx
 long long result; // rax
 int v3; // ecx
 int v4; // eax
 __m128i si128; // xmm1
 __m128i v6; // xmm0
 __m128i v7; // xmm4
 unsigned int v8; // edx
 __m128i v9; // xmm9
 __m128i v10; // xmm10
 __m128i v11; // xmm11
 __m128i v12; // xmm12
 __m128i v13; // xmm13
 __m128i v14; // xmm14
 __m128i v15; // xmm15
 __m128i v16; // xmm5
 __m128i v17; // xmm7
 __m128i v18; // xmm2
 __m128i v19; // xmm5
 __m128i v20; // xmm4
 __m128i v21; // xmm6
 __m128i v22; // xmm1
 __m128i v23; // xmm4
 __m128i v24; // xmm5
 __m128i v25; // xmm6
 __m128i v26; // xmm2
 __m128i v27; // xmm7
 __m128i v28; // xmm3
 __m128i v29; // xmm8
 __m128i v30; // xmm7
 __m128i v31; // xmm4
 __m128i v32; // xmm5
 __m128i v33; // xmm5
 __m128i v34; // xmm6
 __m128i v35; // xmm2
 __m128i v36; // xmm3
 __m128i v37; // xmm6
 __m128i v38; // xmm1
 __m128i v39; // xmm6
 int v40; // edi

 if ( a1 <= 0 )
 return 1;
 v1 = 1;
 LODWORD(result) = 1;
 if ( (unsigned int)a1 < 8 )
 goto LABEL_13;
 v3 = a1 & 0x7FFFFFF8;
 v4 = ((unsigned char)(((a1 & 0xFFFFFFF8) - 8) >> 3) + 1) & 3;
 if ( (a1 & 0xFFFFFFF8) - 8 >= 0x18 )
 {
 v8 = ((((a1 & 0xFFFFFFF8) - 8) >> 3) + 1) & 0xFFFFFFFC;
 si128 = _mm_load_si128((const __m128i *)&xmmword_3160);
 v6 = _mm_load_si128((const __m128i *)&xmmword_3140);
 v9 = _mm_load_si128((const __m128i *)&xmmword_3170);
 v10 = _mm_load_si128((const __m128i *)&xmmword_3180);
 v11 = _mm_load_si128((const __m128i *)&xmmword_3190);
 v12 = _mm_load_si128((const __m128i *)&xmmword_31A0);
 v13 = _mm_load_si128((const __m128i *)&xmmword_31B0);
 v14 = _mm_load_si128((const __m128i *)&xmmword_31C0);
 v15 = _mm_load_si128((const __m128i *)&xmmword_31D0);
 v7 = si128;
 do
 {
 v16 = _mm_add_epi32(v6, (__m128i)xmmword_3150);
 v17 = _mm_mul_epu32(_mm_shuffle_epi32(v6, 245), _mm_shuffle_epi32(si128, 245));
 v18 = _mm_mul_epu32(_mm_shuffle_epi32(v16, 245), _mm_shuffle_epi32(v7, 245));
 v19 = _mm_mul_epu32(v16, v7);
 v20 = _mm_add_epi32(v6, v9);
 v21 = _mm_add_epi32(v6, v10);
 v22 = _mm_mul_epu32(_mm_mul_epu32(si128, v6), v20);
 v23 = _mm_mul_epu32(_mm_shuffle_epi32(v20, 245), v17);
 v24 = _mm_mul_epu32(v19, v21);
 v25 = _mm_mul_epu32(_mm_shuffle_epi32(v21, 245), v18);
 v26 = _mm_add_epi32(v6, v11);
 v27 = _mm_add_epi32(v6, v12);
 v28 = _mm_mul_epu32(_mm_shuffle_epi32(v26, 245), v23);
 v29 = _mm_mul_epu32(_mm_shuffle_epi32(v27, 245), v25);
 v30 = _mm_mul_epu32(v27, v24);
 v31 = _mm_add_epi32(v6, v13);
 v32 = _mm_add_epi32(v6, v14);
 si128 = _mm_unpacklo_epi32(
 _mm_shuffle_epi32(_mm_mul_epu32(_mm_mul_epu32(v26, v22), v31), 232),
 _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(v31, 245), v28), 232));
 v7 = _mm_unpacklo_epi32(
 _mm_shuffle_epi32(_mm_mul_epu32(v30, v32), 232),
 _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(v32, 245), v29), 232));
 v6 = _mm_add_epi32(v6, v15);
 v8 -= 4;
 }
 while ( v8 );
 }
 else
 {
 si128 = _mm_load_si128((const __m128i *)&xmmword_3160);
 v6 = _mm_load_si128((const __m128i *)&xmmword_3140);
 v7 = si128;
 }
 v33 = si128;
 v34 = v7;
 if ( (((unsigned char)(((a1 & 0xFFFFFFF8) - 8) >> 3) + 1) & 3) != 0 )
 {
 v35 = _mm_load_si128((const __m128i *)&xmmword_3150);
 v36 = _mm_load_si128((const __m128i *)&xmmword_3170);
 do
 {
 v37 = _mm_add_epi32(v6, v35);
 v33 = _mm_unpacklo_epi32(
 _mm_shuffle_epi32(_mm_mul_epu32(v6, si128), 232),
 _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(v6, 245), _mm_shuffle_epi32(si128, 245)), 232));
 v34 = _mm_unpacklo_epi32(
 _mm_shuffle_epi32(_mm_mul_epu32(v37, v7), 232),
 _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(v7, 245), _mm_shuffle_epi32(v37, 245)), 232));
 v6 = _mm_add_epi32(v6, v36);
 si128 = v33;
 v7 = v34;
 --v4;
 }
 while ( v4 );
 }
 v38 = _mm_mul_epu32(_mm_shuffle_epi32(v34, 245), _mm_shuffle_epi32(v33, 245));
 v39 = _mm_mul_epu32(v34, v33);
 result = (unsigned int)_mm_cvtsi128_si32(
 _mm_mul_epu32(
 _mm_mul_epu32(_mm_shuffle_epi32(v38, 170), v38),
 _mm_mul_epu32(_mm_shuffle_epi32(v39, 238), v39)));
 if ( v3 != a1 )
 {
 v1 = v3 | 1;
LABEL_13:
 v40 = a1 + 1;
 do
 {
 result = (unsigned int)(v1 * result);
 ++v1;
 }
 while ( v40 != v1 );
 }
 return result;
}


/* Function: ternary_op @ 0x1790 */
long long ternary_op(unsigned int a1, unsigned int a2)
{
 long long result; // rax

 result = a2;
 if ( (int)a1 > (int)a2 )
 return a1;
 return result;
}


/* Function: test_control_flow_l1 @ 0x17A0 */
int test_control_flow_l1()
{
 puts(s);
 printf("CF-L1-01 (sequential_ops): %d\n", 21);
 printf("CF-L1-02 (single_if): %d\n", 20);
 printf("CF-L1-02 (single_if): %d\n", -5);
 printf("CF-L1-03 (if_else): %d\n", 1);
 printf("CF-L1-03 (if_else): %d\n", 0);
 printf("CF-L1-04 (nested_if_2): %d\n", 15);
 printf("CF-L1-04 (nested_if_2): %d\n", 10);
 printf("CF-L1-04 (nested_if_2): %d\n", 0);
 printf("CF-L1-05 (nested_if_deep): %d\n", 5);
 printf("CF-L1-06 (if_elseif_chain): %d\n", 20);
 printf("CF-L1-07 (if_elseif_long): %d\n", 400);
 printf("CF-L1-08 (switch_small): %d\n", 50);
 printf("CF-L1-09 (switch_large): %d\n", 70);
 printf("CF-L1-10 (switch_default): %d\n", 0);
 printf("CF-L1-11 (switch_fallthrough): %d\n", 21);
 printf("CF-L1-12 (loop_for_fixed): %d\n", 45);
 printf("CF-L1-13 (loop_while): %d\n", 5);
 printf("CF-L1-14 (loop_dowhile): %d\n", 4);
 printf("CF-L1-15 (loop_nested): %d\n", 12);
 printf("CF-L1-16 (loop_break): %d\n", 2);
 printf("CF-L1-16 (loop_break): %d\n", -1);
 printf("CF-L1-17 (loop_continue): %d\n", 25);
 printf("CF-L1-18 (goto_forward): %d\n", 50);
 printf("CF-L1-18 (goto_forward): %d\n", -6);
 printf("CF-L1-19 (goto_backward): %d\n", 120);
 printf("CF-L1-20 (ternary_op): %d\n", 10);
 return printf("CF-L1-20 (ternary_op): %d\n", 8);
}


/* Function: loop_multi_exit @ 0x19A0 */
long long loop_multi_exit(int a1)
{
 signed int v1; // edi
 long long result; // rax

 v1 = a1 - 1;
 result = 0xFFFFFFFFLL;
 if ( (unsigned int)v1 <= 0xB )
 return (unsigned int)(dword_30D8[v1] + dword_3108[v1]);
 return result;
}


/* Function: infinite_loop @ 0x19D0 */
long long infinite_loop(unsigned int *a1)
{
 long long result; // rax

 result = 0;
 while ( *a1 != 1 )
 {
 if ( (unsigned int)result == 1000 )
 {
 *a1 = 1;
 return 1001;
 }
 if ( *a1 == 1 )
 return (unsigned int)(result + 1);
 result = (unsigned int)(result + 4);
 }
 return result;
}


/* Function: multi_return @ 0x1A20 */
long long multi_return(int a1)
{
 long long result; // rax

 if ( a1 < 0 )
 return 0xFFFFFFFFLL;
 result = 4294967294LL;
 if ( (unsigned int)a1 <= 0x32 )
 {
 result = (unsigned int)(a1 + 1);
 if ( (a1 & 1) == 0 )
 return (unsigned int)(2 * a1);
 }
 return result;
}


/* Function: conditional_return @ 0x1A50 */
long long conditional_return(int a1)
{
 long long result; // rax

 result = (unsigned int)-a1;
 if ( a1 > 0 )
 return (unsigned int)(2 * a1);
 return result;
}


/* Function: duffs_device @ 0x1A60 */
long long duffs_device(unsigned int *a1, int *a2, int a3)
{
 long long result; // rax
 signed int v4; // eax
 int v5; // ecx
 int v6; // ecx
 int v7; // ecx
 int v8; // ecx
 int v9; // ecx
 int v10; // ecx
 int v11; // ecx
 int v12; // ecx

 result = 0xFFFFFFFFLL;
 if ( a3 > 0 )
 {
 v4 = (unsigned int)(a3 + 7) >> 3;
 switch ( a3 & 7 )
 {
 case 0:
 goto LABEL_3;
 case 1:
 goto LABEL_10;
 case 2:
 goto LABEL_9;
 case 3:
 goto LABEL_8;
 case 4:
 goto LABEL_7;
 case 5:
 goto LABEL_6;
 case 6:
 goto LABEL_5;
 case 7:
 while ( 1 )
 {
 v6 = *a2++;
 *a1++ = v6;
LABEL_5:
 v7 = *a2++;
 *a1++ = v7;
LABEL_6:
 v8 = *a2++;
 *a1++ = v8;
LABEL_7:
 v9 = *a2++;
 *a1++ = v9;
LABEL_8:
 v10 = *a2++;
 *a1++ = v10;
LABEL_9:
 v11 = *a2++;
 *a1++ = v11;
LABEL_10:
 v12 = *a2++;
 *a1++ = v12;
 if ( v4-- <= 1 )
 break;
LABEL_3:
 v5 = *a2++;
 *a1++ = v5;
 }
 result = (unsigned int)a3;
 break;
 }
 }
 return result;
}


/* Function: loop_complex_cond @ 0x1B00 */
long long loop_complex_cond(int a1)
{
 unsigned int v1; // edx
 int v2; // eax
 unsigned int v3; // esi
 unsigned int v4; // ecx

 if ( a1 <= 0 )
 {
 v2 = 0;
 v4 = 0;
 }
 else
 {
 v1 = 0;
 v2 = 0;
 do
 {
 v3 = a1;
 v2 += 2;
 --a1;
 v4 = v1 + 1;
 if ( v3 < 2 )
 break;
 if ( v2 >= a1 )
 break;
 }
 while ( v1++ < 9 );
 }
 return v4 + a1 + v2;
}


/* Function: loop_modify_var @ 0x1B40 */
long long loop_modify_var(int a1)
{
 int v1; // ecx
 long long result; // rax
 int v3; // edx

 if ( a1 <= 0 )
 return 0;
 v1 = 0;
 LODWORD(result) = 0;
 do
 {
 result = (unsigned int)(v1 + result);
 v3 = v1 + 2;
 if ( v1 < 6 )
 v3 = v1;
 v1 = v3 + 1;
 }
 while ( v3 + 1 < a1 );
 return result;
}


/* Function: loop_external_state @ 0x1B70 */
long long loop_external_state(unsigned int *a1)
{
 long long result; // rax

 result = 0;
 if ( !*a1 )
 {
 while ( 1 )
 {
 if ( (unsigned int)result == 100 )
 return 101;
 if ( *a1 )
 break;
 LODWORD(result) = result + 4;
 }
 return (unsigned int)(result + 1);
 }
 return result;
}


/* Function: tail_recursion @ 0x1E20 */
long long tail_recursion(signed int a1, unsigned int a2)
{
 long long result; // rax
 unsigned int v3; // ecx
 unsigned int v4; // r8d
 __m128i v5; // xmm0
 __m128i v6; // xmm6
 int v7; // eax
 __m128i si128; // xmm2
 unsigned int v9; // esi
 __m128i v10; // xmm9
 __m128i v11; // xmm10
 __m128i v12; // xmm11
 __m128i v13; // xmm12
 __m128i v14; // xmm13
 __m128i v15; // xmm14
 __m128i v16; // xmm15
 __m128i v17; // xmm1
 __m128i v18; // xmm3
 __m128i v19; // xmm4
 __m128i v20; // xmm1
 __m128i v21; // xmm2
 __m128i v22; // xmm7
 __m128i v23; // xmm0
 __m128i v24; // xmm2
 __m128i v25; // xmm1
 __m128i v26; // xmm3
 __m128i v27; // xmm4
 __m128i v28; // xmm7
 __m128i v29; // xmm8
 __m128i v30; // xmm7
 __m128i v31; // xmm1
 __m128i v32; // xmm3
 __m128i v33; // xmm3
 __m128i v34; // xmm4
 __m128i v35; // xmm1
 __m128i v36; // xmm3
 __m128i v37; // xmm2

 result = a2;
 if ( a1 >= 2 )
 {
 v3 = a1 - 2 + 1;
 if ( v3 < 8 )
 goto LABEL_12;
 v4 = v3 & 0xFFFFFFF8;
 v5 = _mm_set1_epi32((int)a2);
 v6 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(a1), 0), (__m128i)xmmword_31E0);
 v7 = ((unsigned char)(((v3 & 0xFFFFFFF8) - 8) >> 3) + 1) & 3;
 if ( (v3 & 0xFFFFFFF8) - 8 >= 0x18 )
 {
 v9 = ((((v3 & 0xFFFFFFF8) - 8) >> 3) + 1) & 0xFFFFFFFC;
 si128 = _mm_load_si128((const __m128i *)&xmmword_3160);
 v10 = _mm_load_si128((const __m128i *)&xmmword_3200);
 v11 = _mm_load_si128((const __m128i *)&xmmword_3210);
 v12 = _mm_load_si128((const __m128i *)&xmmword_3220);
 v13 = _mm_load_si128((const __m128i *)&xmmword_3230);
 v14 = _mm_load_si128((const __m128i *)&xmmword_3240);
 v15 = _mm_load_si128((const __m128i *)&xmmword_3250);
 v16 = _mm_load_si128((const __m128i *)&xmmword_3260);
 do
 {
 v17 = _mm_add_epi32(v6, (__m128i)xmmword_31F0);
 v18 = _mm_mul_epu32(_mm_shuffle_epi32(v5, 245), _mm_shuffle_epi32(v6, 245));
 v19 = _mm_mul_epu32(_mm_shuffle_epi32(v17, 245), _mm_shuffle_epi32(si128, 245));
 v20 = _mm_mul_epu32(v17, si128);
 v21 = _mm_add_epi32(v6, v10);
 v22 = _mm_add_epi32(v6, v11);
 v23 = _mm_mul_epu32(_mm_mul_epu32(v5, v6), v21);
 v24 = _mm_mul_epu32(_mm_shuffle_epi32(v21, 245), v18);
 v25 = _mm_mul_epu32(v20, v22);
 v26 = _mm_mul_epu32(_mm_shuffle_epi32(v22, 245), v19);
 v27 = _mm_add_epi32(v6, v12);
 v28 = _mm_add_epi32(v6, v13);
 v29 = _mm_mul_epu32(_mm_shuffle_epi32(v28, 245), v26);
 v30 = _mm_mul_epu32(v28, v25);
 v31 = _mm_add_epi32(v6, v14);
 v32 = _mm_add_epi32(v6, v15);
 v5 = _mm_unpacklo_epi32(
 _mm_shuffle_epi32(_mm_mul_epu32(_mm_mul_epu32(v27, v23), v31), 232),
 _mm_shuffle_epi32(
 _mm_mul_epu32(_mm_shuffle_epi32(v31, 245), _mm_mul_epu32(_mm_shuffle_epi32(v27, 245), v24)),
 232));
 si128 = _mm_unpacklo_epi32(
 _mm_shuffle_epi32(_mm_mul_epu32(v30, v32), 232),
 _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(v32, 245), v29), 232));
 v6 = _mm_add_epi32(v6, v16);
 v9 -= 4;
 }
 while ( v9 );
 }
 else
 {
 si128 = _mm_load_si128((const __m128i *)&xmmword_3160);
 }
 if ( (((unsigned char)(((v3 & 0xFFFFFFF8) - 8) >> 3) + 1) & 3) != 0 )
 {
 v33 = _mm_load_si128((const __m128i *)&xmmword_31F0);
 v34 = _mm_load_si128((const __m128i *)&xmmword_3200);
 do
 {
 v35 = _mm_add_epi32(v6, v33);
 v5 = _mm_unpacklo_epi32(
 _mm_shuffle_epi32(_mm_mul_epu32(v5, v6), 232),
 _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(v6, 245), _mm_shuffle_epi32(v5, 245)), 232));
 si128 = _mm_unpacklo_epi32(
 _mm_shuffle_epi32(_mm_mul_epu32(si128, v35), 232),
 _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(v35, 245), _mm_shuffle_epi32(si128, 245)), 232));
 v6 = _mm_add_epi32(v6, v34);
 --v7;
 }
 while ( v7 );
 }
 v36 = _mm_mul_epu32(_mm_shuffle_epi32(si128, 245), _mm_shuffle_epi32(v5, 245));
 v37 = _mm_mul_epu32(si128, v5);
 result = (unsigned int)_mm_cvtsi128_si32(
 _mm_mul_epu32(
 _mm_mul_epu32(_mm_shuffle_epi32(v36, 170), v36),
 _mm_mul_epu32(_mm_shuffle_epi32(v37, 238), v37)));
 if ( v3 != v4 )
 {
 a1 -= v4;
 do
LABEL_12:
 result = (unsigned int)(a1 * result);
 while ( (unsigned int)a1-- > 2 );
 }
 }
 return result;
}


/* Function: indirect_recursion_a @ 0x2080 */
long long indirect_recursion_a(unsigned int a1, int a2)
{
 long long result; // rax
 int i; // esi
 unsigned int v4; // ecx
 int v5; // eax

 result = a1;
 if ( a2 > 0 )
 {
 for ( i = a2 + 2; i >= 3; i -= 2 )
 {
 if ( (result & 1) != 0 )
 {
 v5 = 3 * result;
 if ( i == 3 )
 return (unsigned int)(v5 + 1);
 result = (unsigned int)(v5 + 2);
 }
 else
 {
 v4 = (int)result / 2;
 if ( i == 3 )
 return v4;
 result = v4 + 1;
 }
 }
 }
 return result;
}


/* Function: call_func_ptr @ 0x20E0 */
long long call_func_ptr(long long ( *a1)(unsigned long long), unsigned int a2)
{
 return a1(a2);
}


/* Function: call_func_ptr_array @ 0x20F0 */
long long call_func_ptr_array(long long a1, signed int a2)
{
 unsigned int v2; // ecx
 unsigned int v3; // r8d
 __m128i v4; // xmm6
 int v5; // eax
 __m128i si128; // xmm1
 __m128i v7; // xmm4
 unsigned int v8; // esi
 __m128i v9; // xmm9
 __m128i v10; // xmm10
 __m128i v11; // xmm11
 __m128i v12; // xmm12
 __m128i v13; // xmm13
 __m128i v14; // xmm14
 __m128i v15; // xmm15
 __m128i v16; // xmm0
 __m128i v17; // xmm7
 __m128i v18; // xmm2
 __m128i v19; // xmm0
 __m128i v20; // xmm4
 __m128i v21; // xmm5
 __m128i v22; // xmm1
 __m128i v23; // xmm4
 __m128i v24; // xmm0
 __m128i v25; // xmm5
 __m128i v26; // xmm2
 __m128i v27; // xmm7
 __m128i v28; // xmm8
 __m128i v29; // xmm7
 __m128i v30; // xmm0
 __m128i v31; // xmm5
 __m128i v32; // xmm5
 __m128i v33; // xmm0
 __m128i v34; // xmm2
 __m128i v35; // xmm3
 __m128i v36; // xmm0
 __m128i v37; // xmm2
 __m128i v38; // xmm0
 long long result; // rax
 unsigned int v41; // edi

 v41 = a2;
 switch ( a2 )
 {
 case 0:
 return (unsigned int)(2 * a2);
 case 1:
 return (unsigned int)(3 * a2);
 case 2:
 result = 1;
 if ( a2 < 2 )
 return result;
 v2 = a2 - 2 + 1;
 LODWORD(result) = 1;
 if ( v2 < 8 )
 goto LABEL_15;
 v3 = v2 & 0xFFFFFFF8;
 v4 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(a2), 0), (__m128i)xmmword_31E0);
 v5 = ((unsigned char)(((v2 & 0xFFFFFFF8) - 8) >> 3) + 1) & 3;
 if ( (v2 & 0xFFFFFFF8) - 8 >= 0x18 )
 {
 v8 = ((((v2 & 0xFFFFFFF8) - 8) >> 3) + 1) & 0xFFFFFFFC;
 si128 = _mm_load_si128((const __m128i *)&xmmword_3160);
 v9 = _mm_load_si128((const __m128i *)&xmmword_3200);
 v10 = _mm_load_si128((const __m128i *)&xmmword_3210);
 v11 = _mm_load_si128((const __m128i *)&xmmword_3220);
 v12 = _mm_load_si128((const __m128i *)&xmmword_3230);
 v13 = _mm_load_si128((const __m128i *)&xmmword_3240);
 v14 = _mm_load_si128((const __m128i *)&xmmword_3250);
 v15 = _mm_load_si128((const __m128i *)&xmmword_3260);
 v7 = si128;
 do
 {
 v16 = _mm_add_epi32(v4, (__m128i)xmmword_31F0);
 v17 = _mm_mul_epu32(_mm_shuffle_epi32(v4, 245), _mm_shuffle_epi32(si128, 245));
 v18 = _mm_mul_epu32(_mm_shuffle_epi32(v16, 245), _mm_shuffle_epi32(v7, 245));
 v19 = _mm_mul_epu32(v16, v7);
 v20 = _mm_add_epi32(v4, v9);
 v21 = _mm_add_epi32(v4, v10);
 v22 = _mm_mul_epu32(_mm_mul_epu32(si128, v4), v20);
 v23 = _mm_mul_epu32(_mm_shuffle_epi32(v20, 245), v17);
 v24 = _mm_mul_epu32(v19, v21);
 v25 = _mm_mul_epu32(_mm_shuffle_epi32(v21, 245), v18);
 v26 = _mm_add_epi32(v4, v11);
 v27 = _mm_add_epi32(v4, v12);
 v28 = _mm_mul_epu32(_mm_shuffle_epi32(v27, 245), v25);
 v29 = _mm_mul_epu32(v27, v24);
 v30 = _mm_add_epi32(v4, v13);
 v31 = _mm_add_epi32(v4, v14);
 si128 = _mm_unpacklo_epi32(
 _mm_shuffle_epi32(_mm_mul_epu32(_mm_mul_epu32(v26, v22), v30), 232),
 _mm_shuffle_epi32(
 _mm_mul_epu32(_mm_shuffle_epi32(v30, 245), _mm_mul_epu32(_mm_shuffle_epi32(v26, 245), v23)),
 232));
 v7 = _mm_unpacklo_epi32(
 _mm_shuffle_epi32(_mm_mul_epu32(v29, v31), 232),
 _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(v31, 245), v28), 232));
 v4 = _mm_add_epi32(v4, v15);
 v8 -= 4;
 }
 while ( v8 );
 }
 else
 {
 si128 = _mm_load_si128((const __m128i *)&xmmword_3160);
 v7 = si128;
 }
 v32 = si128;
 v33 = v7;
 if ( (((unsigned char)(((v2 & 0xFFFFFFF8) - 8) >> 3) + 1) & 3) != 0 )
 {
 v34 = _mm_load_si128((const __m128i *)&xmmword_31F0);
 v35 = _mm_load_si128((const __m128i *)&xmmword_3200);
 do
 {
 v36 = _mm_add_epi32(v4, v34);
 v32 = _mm_unpacklo_epi32(
 _mm_shuffle_epi32(_mm_mul_epu32(v4, si128), 232),
 _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(v4, 245), _mm_shuffle_epi32(si128, 245)), 232));
 v33 = _mm_unpacklo_epi32(
 _mm_shuffle_epi32(_mm_mul_epu32(v36, v7), 232),
 _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(v7, 245), _mm_shuffle_epi32(v36, 245)), 232));
 v4 = _mm_add_epi32(v4, v35);
 si128 = v32;
 v7 = v33;
 --v5;
 }
 while ( v5 );
 }
 v37 = _mm_mul_epu32(_mm_shuffle_epi32(v33, 245), _mm_shuffle_epi32(v32, 245));
 v38 = _mm_mul_epu32(v33, v32);
 result = (unsigned int)_mm_cvtsi128_si32(
 _mm_mul_epu32(
 _mm_mul_epu32(_mm_shuffle_epi32(v37, 170), v37),
 _mm_mul_epu32(_mm_shuffle_epi32(v38, 238), v38)));
 if ( v2 != v3 )
 {
 v41 -= v3;
 do
LABEL_15:
 result = v41 * (unsigned int)result;
 while ( v41-- > 2 );
 }
 return result;
 default:
 return 0xFFFFFFFFLL;
 }
}


/* Function: call_virtual_func @ 0x2130 */
long long call_virtual_func(long long a1, int a2)
{
 return (unsigned int)(2 * a2);
}


/* Function: process_with_callback @ 0x2140 */
long long process_with_callback(long long a1, int a2, long long ( *a3)(unsigned long long))
{
 long long v4; // rbx
 unsigned int v5; // ebp

 if ( a2 <= 0 )
 {
 return 0;
 }
 else
 {
 v4 = 0;
 v5 = 0;
 do
 v5 += a3(*(unsigned int *)(a1 + 4 * v4++));
 while ( a2 != v4 );
 }
 return v5;
}


/* Function: test_control_flow_l2 @ 0x2190 */
int test_control_flow_l2()
{
 int v0; // ebx
 unsigned int v1; // ebp
 int v2; // ebx
 int v3; // eax
 unsigned int v4; // ecx
 int v5; // ebp

 puts(asc_3809);
 v0 = 0;
 printf("CF-L2-01 (loop_multi_exit): %d\n", 12);
 while ( v0 != 1000 )
 v0 += 4;
 printf("CF-L2-02 (infinite_loop): %d\n", 1001);
 v1 = -1;
 printf("CF-L2-03 (multi_return): %d\n", -1);
 printf("CF-L2-03 (multi_return): %d\n", -2);
 printf("CF-L2-03 (multi_return): %d\n", 4);
 v2 = 10;
 printf("CF-L2-04 (conditional_return): %d\n", 10);
 printf("CF-L2-04 (conditional_return): %d\n", 5);
 printf("CF-L2-05 (duffs_device): %d\n", 8);
 v3 = 11;
 do
 {
 v4 = v2 - 8;
 v2 += 2;
 if ( v4 >= v3 - 2 )
 break;
 ++v1;
 --v3;
 }
 while ( v1 < 9 );
 v5 = 0;
 printf("CF-L2-06 (loop_complex_cond): %d\n", v2);
 printf("CF-L2-07 (loop_modify_var): %d\n", 30);
 while ( v5 != 100 )
 v5 += 4;
 printf("CF-L2-08 (loop_external_state): %d\n", 101);
 printf("CF-L2-09 (recursion_factorial): %d\n", 120);
 printf("CF-L2-10 (tail_recursion): %d\n", 120);
 printf("CF-L2-11 (indirect_recursion): %d\n", 3);
 printf("CF-L2-12 (call_func_ptr): %d\n", 10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n", 10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n", 120);
 return printf("CF-L2-15 (process_with_callback): %d\n", 30);
}


/* Function: non_local_jump @ 0x23E0 */
long long non_local_jump(int a1)
{
 int v1; // eax
 unsigned int v2; // ecx

 v1 = _setjmp(jump_buffer);
 v2 = -1;
 if ( !v1 )
 {
 if ( a1 < 0 )
 longjmp(jump_buffer, 1);
 if ( (unsigned int)a1 >= 0x65 )
 longjmp(jump_buffer, 2);
 return (unsigned int)(2 * a1);
 }
 return v2;
}


/* Function: cpp_exception @ 0x2430 */
long long cpp_exception(int a1)
{
 unsigned int v1; // ecx
 long long result; // rax

 v1 = -2;
 if ( a1 < 101 )
 v1 = 2 * a1;
 result = 0xFFFFFFFFLL;
 if ( a1 >= 0 )
 return v1;
 return result;
}


/* Function: large_jump_table @ 0x2450 */
long long large_jump_table(long long a1, int a2, int a3)
{
 long long result; // rax

 switch ( a2 )
 {
 case 0:
 result = (unsigned int)(a2 + a3);
 break;
 case 1:
 result = (unsigned int)(a2 - a3);
 break;
 case 2:
 result = (unsigned int)(a3 * a2);
 break;
 case 3:
 if ( a3 )
 result = (unsigned int)(a2 / a3);
 else
 result = 0;
 break;
 case 4:
 if ( a3 )
 result = (unsigned int)(a2 % a3);
 else
 result = 0;
 break;
 case 5:
 result = a3 & (unsigned int)a2;
 break;
 case 6:
 result = a3 | (unsigned int)a2;
 break;
 case 7:
 result = a3 ^ (unsigned int)a2;
 break;
 case 8:
 result = (unsigned int)(a2 << a3);
 break;
 case 9:
 result = (unsigned int)(a2 >> a3);
 break;
 default:
 result = 0xFFFFFFFFLL;
 break;
 }
 return result;
}


/* Function: conditional_func_ptr @ 0x2510 */
long long conditional_func_ptr(int a1, unsigned int a2)
{
 long long ( *v2)(unsigned long long); // rcx
 long long ( *v3)(unsigned long long); // rax

 v2 = (long long ( *)(unsigned long long))&recursion_factorial;
 if ( a1 == 1 )
 v2 = (long long ( *)(unsigned long long))&triple_value;
 v3 = (long long ( *)(unsigned long long))&double_value;
 if ( a1 )
 v3 = v2;
 return v3(a2);
}


/* Function: state_machine @ 0x2540 */
long long state_machine(int a1, unsigned int a2)
{
 long long result; // rax

 result = a2;
 switch ( a2 )
 {
 case 0u:
 result = a1 == 1;
 break;
 case 1u:
 result = 2 * (unsigned int)(a1 == 99) + 1;
 if ( a1 == 2 )
 result = 2;
 break;
 case 2u:
 return result;
 case 3u:
 result = 3 * (unsigned int)(a1 != 0);
 break;
 default:
 result = 3;
 break;
 }
 return result;
}


/* Function: fsm_func_table @ 0x2590 */
long long fsm_func_table(int a1, int a2)
{
 long long result; // rax

 switch ( a2 )
 {
 case 0:
 result = a1 == 1;
 break;
 case 1:
 result = 2 * (unsigned int)(a1 == 99) + 1;
 if ( a1 == 2 )
 result = 2;
 break;
 case 2:
 result = 2;
 break;
 case 3:
 result = 3 * (unsigned int)(a1 != 0);
 break;
 default:
 result = 3;
 break;
 }
 return result;
}


/* Function: computed_goto @ 0x2600 */
long long computed_goto(long long a1, int a2)
{
 long long result; // rax

 switch ( a2 )
 {
 case 0:
 result = 0;
 break;
 case 1:
 result = 10;
 break;
 case 2:
 result = 20;
 break;
 case 3:
 result = 30;
 break;
 default:
 result = 0xFFFFFFFFLL;
 break;
 }
 return result;
}


/* Function: obfuscated_cf @ 0x2630 */
long long obfuscated_cf(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: opaque_predicate @ 0x2640 */
long long opaque_predicate(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: overlapped_code @ 0x2650 */
long long overlapped_code(int a1)
{
 if ( (a1 & 1) != 0 )
 return (unsigned int)(3 * a1 + 1);
 else
 return (unsigned int)(a1 / 2);
}


/* Function: test_control_flow_l3 @ 0x2670 */
int test_control_flow_l3()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax

 puts(asc_382D);
 v0 = non_local_jump(5);
 printf("CF-L3-01 (non_local_jump): %d\n", v0);
 v1 = non_local_jump(-5);
 printf("CF-L3-01 (non_local_jump): %d\n", v1);
 printf("CF-L3-02 (cpp_exception): %d\n", 10);
 printf("CF-L3-02 (cpp_exception): %d\n", -1);
 printf("CF-L3-03 (large_jump_table): %d\n", 15);
 printf("CF-L3-04 (conditional_func_ptr): %d\n", 10);
 printf("CF-L3-05 (state_machine): %d\n", 1);
 printf("CF-L3-06 (fsm_func_table): %d\n", 2);
 v2 = computed_goto((long long)"CF-L3-06 (fsm_func_table): %d\n", 2);
 printf("CF-L3-07 (computed_goto): %d\n", v2);
 printf("CF-L3-08 (obfuscated_cf): %d\n", 10);
 printf("CF-L3-09 (opaque_predicate): %d\n", 10);
 return printf("CF-L3-10 (overlapped_code): %d\n", 16);
}


/* Function: main @ 0x2780 */
int main(int argc, const char **argv, const char **envp)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}


/* Function: .term_proc @ 0x2794 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __libc_start_main @ 0x6130 */

/* FAILED to decompile: puts @ 0x6138 */

/* FAILED to decompile: printf @ 0x6140 */

/* FAILED to decompile: _setjmp @ 0x6148 */

/* FAILED to decompile: longjmp @ 0x6150 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x6158 */

/* FAILED to decompile: __gmon_start__ @ 0x6168 */

/* Total functions decompiled: 56, failed: 7 */
