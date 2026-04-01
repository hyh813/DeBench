/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Additional includes and declarations */
#include <stdbool.h>
#include <emmintrin.h>
#include <signal.h>
#include <setjmp.h>
#include <string.h>
#include <stdio.h>

/* Macro definitions for decompiler artifacts */
#define LODWORD(x) (*(int*)&(x))
#define LOBYTE(x) ((unsigned char)((x) & 0xFF))
#define SLOBYTE(x) ((signed char)((x) & 0xFF))

/* Global variable declarations */
static char param_string_encryption_encrypted[] = "encrypted_string_data_here";
static int div_zero_caught = 0;
static int segv_caught = 0;
static jmp_buf jmp_buffer;
static jmp_buf segv_buffer;
static char *s = "test";
static char *format = "%d";
static char *aObfL403D = "ObfL403D: %lld\n";
static char *aObfL404D = "ObfL404D: %lld\n";
static char *aObfL405D = "ObfL405D: %lld\n";
static char *aOptL401 = "OptL401: %lld\n";
static char *aOptL401_0 = "OptL401_0: %lld\n";
static char *aOptL402 = "OptL402: %lld\n";
static char *aOptL501LtoD = "OptL501LtoD: %lld\n";
static char *aEdgeL301D = "EdgeL301D: %lld\n";
static char *aEdgeL302D = "EdgeL302D: %lld\n";
static char *aEdgeL303D = "EdgeL303D: %lld\n";
static char *aEdgeL304D = "EdgeL304D: %lld\n";
static char *aEdgeL401D = "EdgeL401D: %lld\n";
static char *aEdgeL402D = "EdgeL402D: %lld\n";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/7/7_clang_O2_no_g
 * Processor: pc
 */








/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: param_fake_branch @ 0x11A0 */
long long param_fake_branch(unsigned int a1)
{
 return a1;
}


/* Function: call_fake_branch @ 0x11B0 */
long long call_fake_branch()
{
 return 10;
}


/* Function: param_opaque_predicate @ 0x11C0 */
long long param_opaque_predicate(int a1)
{
 int v1; // r8d
 int v2; // ecx
 int v3; // eax
 int v4; // edx
 int v5; // esi
 unsigned int v6; // r8d
 long long result; // rax

 v1 = 2 * a1;
 v2 = -1;
 if ( a1 != -1 )
 {
 v3 = a1;
 v4 = a1 + 1;
 do
 {
 v2 = v4;
 v4 = v3 % v4;
 v3 = v2;
 }
 while ( v4 );
 }
 v5 = (a1 * a1 + (v1 | 1)) ^ ((a1 + 1) * (a1 + 1));
 v6 = v1 + 10;
 result = (unsigned int)(3 * a1 + 20);
 if ( !(v5 | v2 ^ 1) )
 return v6;
 return result;
}


/* Function: call_opaque_predicate @ 0x1220 */
long long call_opaque_predicate()
{
 int v0; // edx
 int v1; // eax
 int v2; // ecx
 long long result; // rax

 v0 = 6;
 v1 = 5;
 do
 {
 v2 = v0;
 v0 = v1 % v0;
 v1 = v2;
 }
 while ( v0 );
 result = 35;
 if ( v2 == 1 )
 return 20;
 return result;
}


/* Function: param_instruction_substitution @ 0x1250 */
long long param_instruction_substitution(unsigned int a1)
{
 return (a1 & 0xF) + (a1 >> 1) + 21 * a1;
}


/* Function: call_instruction_substitution @ 0x1270 */
long long call_instruction_substitution()
{
 return 225;
}


/* Function: decrypt_string @ 0x1280 */
char * decrypt_string(char *src, char *dest, size_t a3, char a4)
{
 char v6; // al
 char *v7; // rcx

 strncpy(dest, src, a3);
 dest[a3 - 1] = 0;
 v6 = *dest;
 if ( *dest )
 {
 v7 = dest + 1;
 do
 {
 *(v7 - 1) = a4 ^ v6;
 v6 = *v7++;
 }
 while ( v6 );
 }
 return dest;
}


/* Function: param_string_encryption @ 0x12D0 */
long long param_string_encryption()
{
 char v0; // al
 char *v1; // rcx
 int v2; // ebx
 char v4; // [rsp+0h] [rbp-28h] BYREF
 unsigned char v5[39]; // [rsp+1h] [rbp-27h] BYREF

 strncpy(&v4, &param_string_encryption_encrypted, 0x20u);
 v5[30] = 0;
 v0 = v4;
 if ( v4 )
 {
 v1 = v5;
 do
 {
 *(v1 - 1) = v0 ^ 0x5A;
 v0 = *v1++;
 }
 while ( v0 );
 v2 = v4;
 }
 else
 {
 v2 = 0;
 }
 return v2 + (unsigned int)strlen(&v4);
}


/* Function: call_string_encryption @ 0x1330 */
long long call_string_encryption()
{
 char v0; // al
 char *v1; // rcx
 int v2; // ebx
 char v4; // [rsp+0h] [rbp-28h] BYREF
 unsigned char v5[39]; // [rsp+1h] [rbp-27h] BYREF

 strncpy(&v4, &param_string_encryption_encrypted, 0x20u);
 v5[30] = 0;
 v0 = v4;
 if ( v4 )
 {
 v1 = v5;
 do
 {
 *(v1 - 1) = v0 ^ 0x5A;
 v0 = *v1++;
 }
 while ( v0 );
 v2 = v4;
 }
 else
 {
 v2 = 0;
 }
 return v2 + (unsigned int)strlen(&v4);
}


/* Function: param_tail_call_optimized @ 0x1390 */
long long param_tail_call_optimized(int a1, unsigned int a2)
{
 long long result; // rax

 result = a2;
 if ( a1 > 0 )
 return (a1 - 1) * (a1 - 1)
 + a1
 + a2
 - (unsigned int)(((unsigned int)(a1 - 1) * (unsigned long long)(unsigned int)(a1 - 2)) >> 1);
 return result;
}


/* Function: call_tail_call_optimized @ 0x13B0 */
long long call_tail_call_optimized()
{
 return 500500;
}


/* Function: param_non_tail_call @ 0x13C0 */
long long param_non_tail_call(int a1)
{
 if ( a1 <= 0 )
 return 0;
 else
 return a1
 + (a1 - 1) * (a1 - 1)
 - (unsigned int)(((unsigned int)(a1 - 1) * (unsigned long long)(unsigned int)(a1 - 2)) >> 1);
}


/* Function: call_non_tail_call @ 0x13E0 */
long long call_non_tail_call()
{
 return 5050;
}


/* Function: param_vectorized_loop @ 0x13F0 */
long long param_vectorized_loop(
 unsigned long long a1,
 unsigned long long a2,
 unsigned long long a3,
 unsigned int a4)
{
 long long v4; // r8
 long long v5; // rax
 unsigned long long v6; // r9
 long long v7; // r10
 unsigned long long v8; // r10
 bool v9; // bl
 bool v10; // r10
 unsigned long long v11; // r9
 long long v12; // r11
 long long v13; // r10
 __m128i v14; // xmm0
 __m128i v15; // xmm0
 __m128i v16; // xmm0
 long long v17; // rcx
 long long result; // rax
 __m128i v19; // xmm0
 long long v20; // rsi
 __m128i v21; // xmm1
 unsigned long long v22; // rdi
 long long v23; // rsi
 long long v24; // rdi
 __m128i v25; // xmm0
 __m128i v26; // xmm1

 if ( (int)a4 <= 0 )
 return 0;
 v4 = a4;
 if ( a4 >= 8 )
 {
 v8 = a3 + 4LL * a4;
 v9 = v8 > a1;
 v10 = v8 > a2;
 v5 = 0;
 if ( v9 && a1 + 4LL * a4 > a3 || v10 && a2 + 4LL * a4 > a3 )
 goto LABEL_4;
 v5 = a4 & 0xFFFFFFF8;
 v11 = ((unsigned long long)(v5 - 8) >> 3) + 1;
 if ( v5 == 8 )
 {
 v13 = 0;
 if ( (v11 & 1) != 0 )
 {
LABEL_15:
 v16 = _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)(a2 + 4 * v13 + 16)),
 _mm_loadu_si128((const __m128i *)(a1 + 4 * v13 + 16)));
 *(__m128i *)(a3 + 4 * v13) = _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)(a2 + 4 * v13)),
 _mm_loadu_si128((const __m128i *)(a1 + 4 * v13)));
 *(__m128i *)(a3 + 4 * v13 + 16) = v16;
 }
 }
 else
 {
 v12 = v11 & 0x3FFFFFFFFFFFFFFELL;
 v13 = 0;
 do
 {
 v14 = _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)(a2 + 4 * v13 + 16)),
 _mm_loadu_si128((const __m128i *)(a1 + 4 * v13 + 16)));
 *(__m128i *)(a3 + 4 * v13) = _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)(a2 + 4 * v13)),
 _mm_loadu_si128((const __m128i *)(a1 + 4 * v13)));
 *(__m128i *)(a3 + 4 * v13 + 16) = v14;
 v15 = _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)(a2 + 4 * v13 + 48)),
 _mm_loadu_si128((const __m128i *)(a1 + 4 * v13 + 48)));
 *(__m128i *)(a3 + 4 * v13 + 32) = _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)(a2 + 4 * v13 + 32)),
 _mm_loadu_si128((const __m128i *)(a1 + 4 * v13 + 32)));
 *(__m128i *)(a3 + 4 * v13 + 48) = v15;
 v13 += 16;
 v12 -= 2;
 }
 while ( v12 );
 if ( (v11 & 1) != 0 )
 goto LABEL_15;
 }
 if ( v5 == a4 )
 goto LABEL_17;
 goto LABEL_4;
 }
 v5 = 0;
LABEL_4:
 v6 = a4 + ~v5;
 v7 = a4 & 3;
 if ( (a4 & 3) != 0 )
 {
 do
 {
 *(unsigned int *)(a3 + 4 * v5) = *(unsigned int *)(a1 + 4 * v5) + *(unsigned int *)(a2 + 4 * v5);
 ++v5;
 --v7;
 }
 while ( v7 );
 }
 if ( v6 >= 3 )
 {
 do
 {
 *(unsigned int *)(a3 + 4 * v5) = *(unsigned int *)(a1 + 4 * v5) + *(unsigned int *)(a2 + 4 * v5);
 *(unsigned int *)(a3 + 4 * v5 + 4) = *(unsigned int *)(a1 + 4 * v5 + 4) + *(unsigned int *)(a2 + 4 * v5 + 4);
 *(unsigned int *)(a3 + 4 * v5 + 8) = *(unsigned int *)(a1 + 4 * v5 + 8) + *(unsigned int *)(a2 + 4 * v5 + 8);
 *(unsigned int *)(a3 + 4 * v5 + 12) = *(unsigned int *)(a1 + 4 * v5 + 12) + *(unsigned int *)(a2 + 4 * v5 + 12);
 v5 += 4;
 }
 while ( a4 != v5 );
 }
LABEL_17:
 if ( a4 < 8 )
 {
 v17 = 0;
 result = 0;
 do
LABEL_28:
 result = (unsigned int)(*(unsigned int *)(a3 + 4 * v17++) + result);
 while ( v4 != v17 );
 return result;
 }
 v17 = a4 & 0xFFFFFFF8;
 if ( (unsigned long long)(v17 - 8) >= 0x18 )
 {
 v22 = (((unsigned long long)(v17 - 8) >> 3) + 1) & 0xFFFFFFFFFFFFFFFCLL;
 v19 = _mm_setzero_si128();
 v20 = 0;
 v21 = _mm_setzero_si128();
 do
 {
 v19 = _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)(a3 + 4 * v20 + 96)),
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)(a3 + 4 * v20 + 64)),
 _mm_loadu_si128((const __m128i *)(a3 + 4 * v20 + 32))),
 _mm_add_epi32(_mm_loadu_si128((const __m128i *)(a3 + 4 * v20)), v19)));
 v21 = _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)(a3 + 4 * v20 + 112)),
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)(a3 + 4 * v20 + 80)),
 _mm_loadu_si128((const __m128i *)(a3 + 4 * v20 + 48))),
 _mm_add_epi32(_mm_loadu_si128((const __m128i *)(a3 + 4 * v20 + 16)), v21)));
 v20 += 32;
 v22 -= 4LL;
 }
 while ( v22 );
 }
 else
 {
 v19 = _mm_setzero_si128();
 v20 = 0;
 v21 = _mm_setzero_si128();
 }
 if ( (((unsigned char)((unsigned long long)(v17 - 8) >> 3) + 1) & 3) != 0 )
 {
 v23 = a3 + 4 * v20 + 16;
 v24 = 0;
 do
 {
 v19 = _mm_add_epi32(v19, _mm_loadu_si128((const __m128i *)(v23 + v24 - 16)));
 v21 = _mm_add_epi32(v21, _mm_loadu_si128((const __m128i *)(v23 + v24)));
 v24 += 32;
 }
 while ( 32LL * (((unsigned char)((unsigned long long)(v17 - 8) >> 3) + 1) & 3) != v24 );
 }
 v25 = _mm_add_epi32(v19, v21);
 v26 = _mm_add_epi32(_mm_shuffle_epi32(v25, 238), v25);
 result = (unsigned int)_mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v26, 85), v26));
 if ( v17 != v4 )
 goto LABEL_28;
 return result;
}


/* Function: call_vectorized_loop @ 0x16C0 */
long long call_vectorized_loop()
{
 return 72;
}


/* Function: param_link_time_optimization @ 0x16D0 */
long long param_link_time_optimization(int a1)
{
 return (unsigned int)(2 * a1 + 10);
}


/* Function: call_link_time_optimization @ 0x16E0 */
long long call_link_time_optimization()
{
 return 20;
}


/* Function: div_zero_handler @ 0x16F0 */
void div_zero_handler()
{
 div_zero_caught = 1;
 longjmp(jmp_buffer, 1);
}


/* Function: param_division_by_zero @ 0x1710 */
long long param_division_by_zero(int a1)
{
 int v1; // eax
 unsigned int v2; // ecx

 signal(8, (__sighandler_t)div_zero_handler);
 v1 = _setjmp(jmp_buffer);
 v2 = -1;
 if ( !v1 )
 return (unsigned int)(10 / a1);
 return v2;
}


/* Function: call_division_by_zero @ 0x1750 */
long long call_division_by_zero()
{
 int v0; // ebx
 int v1; // ebp

 v0 = param_division_by_zero(5);
 v1 = param_division_by_zero(0);
 signal(8, 0);
 return (unsigned int)(v0 + v1);
}


/* Function: segv_handler @ 0x1780 */
void segv_handler()
{
 segv_caught = 1;
 longjmp(segv_buffer, 1);
}


/* Function: param_null_pointer_deref @ 0x17A0 */
long long param_null_pointer_deref(unsigned int *a1)
{
 int v1; // eax
 unsigned int v2; // ecx

 signal(11, (__sighandler_t)segv_handler);
 v1 = _setjmp(segv_buffer);
 v2 = -1;
 if ( !v1 )
 return *a1;
 return v2;
}


/* Function: call_null_pointer_deref @ 0x17D0 */
long long call_null_pointer_deref()
{
 int v0; // ebx
 int v1; // ebp
 unsigned int v3[5]; // [rsp+0h] [rbp-14h] BYREF

 v3[0] = 42;
 v0 = param_null_pointer_deref(v3);
 v1 = param_null_pointer_deref(0);
 signal(11, 0);
 return (unsigned int)(v0 + v1);
}


/* Function: param_buffer_overflow_stack @ 0x1810 */
long long param_buffer_overflow_stack(unsigned int a1)
{
 return a1;
}


/* Function: param_buffer_overflow_heap @ 0x1820 */
long long param_buffer_overflow_heap(unsigned int a1)
{
 return a1;
}


/* Function: call_buffer_overflow @ 0x1830 */
long long call_buffer_overflow()
{
 return 30;
}


/* Function: param_integer_overflow @ 0x1840 */
long long param_integer_overflow(int a1, int a2)
{
 int v2; // ecx
 long long result; // rax

 v2 = a2 + a1;
 if ( a1 <= 0 || a2 <= 0 || (result = 0xFFFFFFFFLL, v2 >= 0) )
 {
 result = 4294967294LL;
 if ( v2 <= 0 )
 result = (unsigned int)v2;
 if ( (a1 & a2) >= 0 )
 return (unsigned int)v2;
 }
 return result;
}


/* Function: call_integer_overflow @ 0x1870 */
long long call_integer_overflow()
{
 return 2000000000;
}


/* Function: param_undefined_behavior @ 0x1880 */
long long param_undefined_behavior(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: call_undefined_behavior @ 0x1890 */
long long call_undefined_behavior()
{
 return 10;
}


/* Function: param_implementation_defined @ 0x18A0 */
long long param_implementation_defined()
{
 return 47;
}


/* Function: call_implementation_defined @ 0x18B0 */
long long call_implementation_defined()
{
 return 47;
}


/* Function: test_obf_opt_edge @ 0x18C0 */
int test_obf_opt_edge()
{
 int v0; // edx
 int v1; // eax
 int v2; // ecx
 long long v3; // rsi
 int v4; // ebx
 char v5; // al
 char *v6; // rcx
 int v7; // eax
 int v8; // ebx
 int v9; // ebp
 int v10; // ebx
 int v11; // ebp
 unsigned int v13[7]; // [rsp+0h] [rbp-38h] BYREF
 char v14; // [rsp+1Fh] [rbp-19h]

 puts(s);
 printf(format, 10);
 v0 = 6;
 v1 = 5;
 do
 {
 v2 = v0;
 v0 = v1 % v0;
 v1 = v2;
 }
 while ( v0 );
 v3 = 35;
 if ( v2 == 1 )
 v3 = 20;
 v4 = 0;
 printf(aObfL403D, v3);
 printf(aObfL404D, 225);
 strncpy((char *)v13, &param_string_encryption_encrypted, 0x20u);
 v14 = 0;
 v5 = v13[0];
 if ( LOBYTE(v13[0]) )
 {
 v6 = (char *)v13 + 1;
 do
 {
 *(v6 - 1) = v5 ^ 0x5A;
 v5 = *v6++;
 }
 while ( v5 );
 v4 = SLOBYTE(v13[0]);
 }
 v7 = strlen((const char *)v13);
 printf(aObfL405D, (unsigned int)(v7 + v4));
 printf(aOptL401, 500500);
 printf(aOptL401_0, 5050);
 printf(aOptL402, 72);
 printf(aOptL501LtoD, 20);
 v8 = param_division_by_zero(5);
 v9 = param_division_by_zero(0);
 signal(8, 0);
 printf(aEdgeL301D, (unsigned int)(v8 + v9));
 v13[0] = 42;
 v10 = param_null_pointer_deref(v13);
 v11 = param_null_pointer_deref(0);
 signal(11, 0);
 printf(aEdgeL302D, (unsigned int)(v10 + v11));
 printf(aEdgeL303D, 30);
 printf(aEdgeL304D, 2000000000);
 printf(aEdgeL401D, 10);
 return printf(aEdgeL402D, 47);
}


/* Function: main @ 0x1AA0 */
int main(int argc, const char **argv, const char **envp)
{
 test_obf_opt_edge();
 return 0;
}


/* Function: .term_proc @ 0x1AAC */
void term_proc()
{
 ;
}


/* FAILED to decompile: __libc_start_main @ 0x4230 */

/* FAILED to decompile: strncpy @ 0x4238 */

/* FAILED to decompile: puts @ 0x4240 */

/* FAILED to decompile: strlen @ 0x4248 */

/* FAILED to decompile: printf @ 0x4250 */

/* FAILED to decompile: _setjmp @ 0x4258 */

/* FAILED to decompile: signal @ 0x4260 */

/* FAILED to decompile: longjmp @ 0x4268 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x4270 */

/* FAILED to decompile: __gmon_start__ @ 0x4280 */

/* Total functions decompiled: 42, failed: 10 */
