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


/* Additional includes for decompiled code */
#include <emmintrin.h>
#include <stdbool.h>
#include <signal.h>
#include <setjmp.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Macro definitions for decompiled code */
#define JUMPOUT(x) return
#define BUG() do { } while(0)
#define __readfsqword(x) (0ULL)

/* Global variable declarations */
jmp_buf jmp_buffer;
jmp_buf segv_buffer;
int div_zero_caught;
int segv_caught;
char encrypted_0[32];
__m128i xmmword_2220;
__m128i xmmword_2230;
char s[256];
char unk_2137[256];
char unk_2153[256];
char unk_216F[256];
char unk_218C[256];
char unk_2038[256];
char unk_2068[256];
char unk_2090[256];
char unk_20B8[256];
char unk_21A8[256];
char unk_21C4[256];
char unk_21E1[256];
char unk_20D8[256];
char unk_21FE[256];
char unk_2110[256];
void (*_gmon_start__)(void);
typedef void (*__sighandler_t)(int);

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/7/7_gcc_O3_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x1000 */
long long (**init_proc())(void)
{
 long long (**result)(void); // rax

 result = &_gmon_start__;
 if ( &_gmon_start__ )
 {
 _gmon_start__();
 return result;
 }
 return result;
}


/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 JUMPOUT(0);
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 sub_1020();
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
 sub_1020();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
 sub_1020();
}


/* Function: sub_1060 @ 0x1060 */
void sub_1060()
{
 sub_1020();
}


/* Function: sub_1070 @ 0x1070 */
void sub_1070()
{
 sub_1020();
}


/* Function: sub_1080 @ 0x1080 */
void sub_1080()
{
 sub_1020();
}


/* Function: sub_1090 @ 0x1090 */
void sub_1090()
{
 sub_1020();
}


/* Function: sub_10A0 @ 0x10A0 */
void sub_10A0()
{
 sub_1020();
}


/* Function: sub_10B0 @ 0x10B0 */
void sub_10B0()
{
 sub_1020();
}


/* Function: sub_10C0 @ 0x10C0 */
void sub_10C0()
{
 sub_1020();
}


/* Function: main @ 0x1180 */
int main(int argc, const char **argv, const char **envp)
{
 test_obf_opt_edge();
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: div_zero_handler @ 0x1290 */
void div_zero_handler(int sig)
{
 div_zero_caught = 1;
 __longjmp_chk(jmp_buffer, 1);
}


/* Function: segv_handler @ 0x12C0 */
void segv_handler(int sig)
{
 segv_caught = 1;
 __longjmp_chk(segv_buffer, 1);
}


/* Function: param_division_by_zero_0 @ 0x12F0 */
long long param_division_by_zero_0(int x)
{
 signal(8, (__sighandler_t)div_zero_handler);
 if ( !_setjmp(jmp_buffer) )
 BUG();
 return 0xFFFFFFFFLL;
}


/* Function: param_division_by_zero_1 @ 0x1330 */
long long param_division_by_zero_1(int x)
{
 signal(8, (__sighandler_t)div_zero_handler);
 return _setjmp(jmp_buffer) == 0 ? 2 : -1;
}


/* Function: param_fake_branch @ 0x1370 */
int param_fake_branch(int x)
{
 return x;
}


/* Function: call_fake_branch @ 0x1380 */
int call_fake_branch()
{
 return 10;
}


/* Function: param_opaque_predicate @ 0x1390 */
int param_opaque_predicate(int x)
{
 int v1; // edx
 bool v2; // r8
 int v3; // eax
 int v4; // ecx

 v1 = x + 1;
 v2 = 2 * x + x * x + 1 == v1 * v1;
 if ( x == -1 )
 return 3 * x + 20;
 v3 = x;
 do
 {
 v4 = v1;
 v1 = v3 % v1;
 v3 = v4;
 }
 while ( v1 );
 if ( v4 == 1 && v2 )
 return 2 * x + 10;
 else
 return 3 * x + 20;
}


/* Function: call_opaque_predicate @ 0x13E0 */
int call_opaque_predicate()
{
 int v0; // edx
 int v1; // eax
 int v2; // ecx
 int result; // eax

 v0 = 6;
 v1 = 5;
 do
 {
 v2 = v0;
 v0 = v1 % v0;
 v1 = v2;
 }
 while ( v0 );
 result = 20;
 if ( v2 != 1 )
 return 35;
 return result;
}


/* Function: param_instruction_substitution @ 0x1410 */
int param_instruction_substitution(int x)
{
 return 15 * x + (x & 0xF) + ((unsigned int)x >> 1) + 6 * x;
}


/* Function: call_instruction_substitution @ 0x1430 */
int call_instruction_substitution()
{
 return 225;
}


/* Function: decrypt_string @ 0x1440 */
const char * decrypt_string(const char *encrypted, char *buffer, size_t len, char key)
{
 char *v6; // rax
 const char *v7; // r8
 char v8; // al
 char *v9; // rdx

 v6 = strncpy(buffer, encrypted, len);
 v6[len - 1] = 0;
 v7 = v6;
 v8 = *v6;
 if ( v8 )
 {
 v9 = (char *)v7;
 do
 {
 *v9 = key ^ v8;
 v8 = *++v9;
 }
 while ( *v9 );
 }
 return v7;
}


/* Function: param_string_encryption @ 0x1490 */
int param_string_encryption()
{
 char *v0; // rax
 int v1; // ebx
 const char *v2; // rdi
 char decrypted[40]; // [rsp+0h] [rbp-38h] BYREF
 unsigned long long v5; // [rsp+28h] [rbp-10h]

 v5 = __readfsqword(0x28u);
 v0 = strncpy(decrypted, &encrypted_0, 0x1Fu);
 v1 = decrypted[0];
 decrypted[31] = 0;
 v2 = v0;
 if ( decrypted[0] )
 {
 do
 {
 *v0++ = v1 ^ 0x5A;
 v1 = (v1 & ~0xFF) | (*v0 & 0xFF);
 }
 while ( *v0 );
 v1 = decrypted[0];
 }
 return v1 + strlen(v2);
}


/* Function: call_string_encryption @ 0x1510 */
int call_string_encryption()
{
 char *v0; // rax
 int v1; // ebx
 const char *v2; // rdi
 char v4[40]; // [rsp+0h] [rbp-38h] BYREF
 unsigned long long v5; // [rsp+28h] [rbp-10h]

 v5 = __readfsqword(0x28u);
 v0 = strncpy(v4, &encrypted_0, 0x1Fu);
 v1 = v4[0];
 v4[31] = 0;
 v2 = v0;
 if ( v4[0] )
 {
 do
 {
 *v0++ = v1 ^ 0x5A;
 v1 = (v1 & ~0xFF) | (*v0 & 0xFF);
 }
 while ( *v0 );
 v1 = v4[0];
 }
 return v1 + strlen(v2);
}


/* Function: param_tail_call_optimized @ 0x1590 */
int param_tail_call_optimized(int n, int acc)
{
 int v2; // edx
 __m128i si128; // xmm3
 int v4; // ecx
 __m128i v5; // xmm1
 __m128i v6; // xmm0
 __m128i v7; // xmm2
 __m128i v8; // xmm0
 int result; // eax

 v2 = n;
 if ( n <= 0 )
 return acc;
 if ( n <= 10 )
 {
 result = acc;
 }
 else
 {
 si128 = _mm_load_si128((const __m128i *)&xmmword_2230);
 v4 = 0;
 v5 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(n), 0), (__m128i)xmmword_2220);
 v6 = _mm_setzero_si128();
 do
 {
 v7 = v5;
 ++v4;
 v5 = _mm_add_epi32(v5, si128);
 v6 = _mm_add_epi32(v6, v7);
 }
 while ( (unsigned int)n >> 2 != v4 );
 v8 = _mm_add_epi32(v6, _mm_srli_si128(v6, 8));
 result = _mm_cvtsi128_si32(_mm_add_epi32(v8, _mm_srli_si128(v8, 4))) + acc;
 v2 = n - (n & 0xFFFFFFFC);
 if ( n == (n & 0xFFFFFFFC) )
 return result;
 }
 result += v2;
 if ( v2 != 1 )
 {
 result += v2 - 1;
 if ( v2 != 2 )
 {
 result += v2 - 2;
 if ( v2 != 3 )
 {
 result += v2 - 3;
 if ( v2 != 4 )
 {
 result += v2 - 4;
 if ( v2 != 5 )
 {
 result += v2 - 5;
 if ( v2 != 6 )
 {
 result += v2 - 6;
 if ( v2 != 7 )
 {
 result += v2 - 7;
 if ( v2 != 8 )
 return v2 + v2 - 8 + result - 9;
 }
 }
 }
 }
 }
 }
 }
 return result;
}


/* Function: call_tail_call_optimized @ 0x1670 */
int call_tail_call_optimized()
{
 return 500500;
}


/* Function: param_non_tail_call @ 0x1680 */
int param_non_tail_call(int n)
{
 int v1; // ecx
 __m128i si128; // xmm3
 int v3; // eax
 __m128i v4; // xmm1
 __m128i v5; // xmm0
 __m128i v6; // xmm2
 int v7; // edx
 __m128i v8; // xmm0
 int result; // eax

 if ( n <= 0 )
 return 0;
 v1 = n;
 if ( n <= 10 )
 {
 result = 0;
 }
 else
 {
 si128 = _mm_load_si128((const __m128i *)&xmmword_2230);
 v3 = 0;
 v4 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(n), 0), (__m128i)xmmword_2220);
 v5 = _mm_setzero_si128();
 do
 {
 v6 = v4;
 ++v3;
 v4 = _mm_add_epi32(v4, si128);
 v5 = _mm_add_epi32(v5, v6);
 }
 while ( (unsigned int)n >> 2 != v3 );
 v7 = n & 0x7FFFFFFC;
 v8 = _mm_add_epi32(v5, _mm_srli_si128(v5, 8));
 n -= n & 0xFFFFFFFC;
 result = _mm_cvtsi128_si32(_mm_add_epi32(v8, _mm_srli_si128(v8, 4)));
 if ( v1 == v7 )
 return result;
 }
 result += n;
 if ( n != 1 )
 {
 result += n - 1;
 if ( n != 2 )
 {
 result += n - 2;
 if ( n != 3 )
 {
 result += n - 3;
 if ( n != 4 )
 {
 result += n - 4;
 if ( n != 5 )
 {
 result += n - 5;
 if ( n != 6 )
 {
 result += n - 6;
 if ( n != 7 )
 {
 result += n - 7;
 if ( n != 8 )
 return n + result + n - 8 - 9;
 }
 }
 }
 }
 }
 }
 }
 return result;
}


/* Function: call_non_tail_call @ 0x1760 */
int call_non_tail_call()
{
 return 5050;
}


/* Function: param_vectorized_loop @ 0x1770 */
int param_vectorized_loop(int *a, int *b, int *c, int n)
{
 unsigned int v5; // r9d
 int v6; // r10d
 long long v7; // rax
 long long v8; // rcx
 int v9; // eax
 const __m128i *v10; // rax
 __m128i v11; // xmm0
 __m128i v12; // xmm2
 signed int v13; // ecx
 __m128i v14; // xmm0
 int result; // eax
 long long v16; // rdi
 long long i; // rax

 if ( n <= 0 )
 return 0;
 if ( (unsigned long long)((char *)c - (char *)(b + 1)) > 8
 && (unsigned long long)((char *)c - (char *)(a + 1)) > 8
 && n != 1 )
 {
 v5 = n - 1;
 v6 = n;
 if ( (unsigned int)(n - 1) <= 2 )
 {
 v8 = 0;
 v9 = 0;
 }
 else
 {
 v7 = 0;
 do
 {
 *(__m128i *)&c[v7] = _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)&a[v7]),
 _mm_loadu_si128((const __m128i *)&b[v7]));
 v7 += 4;
 }
 while ( 4LL * ((unsigned int)n >> 2) != v7 );
 v8 = n & 0xFFFFFFFC;
 v9 = v8;
 if ( n == (unsigned int)v8 )
 {
LABEL_12:
 v10 = (const __m128i *)c;
 v11 = _mm_setzero_si128();
 do
 {
 v12 = _mm_loadu_si128(v10++);
 v11 = _mm_add_epi32(v11, v12);
 }
 while ( v10 != (const __m128i *)&c[4 * ((unsigned int)n >> 2)] );
 v13 = n & 0xFFFFFFFC;
 v14 = _mm_add_epi32(v11, _mm_srli_si128(v11, 8));
 result = _mm_cvtsi128_si32(_mm_add_epi32(v14, _mm_srli_si128(v14, 4)));
 if ( (n & 3) == 0 )
 return result;
 goto LABEL_15;
 }
 v6 = n - v8;
 if ( n - (unsigned int)v8 == 1 )
 {
LABEL_10:
 c[v9] = a[v9] + b[v9];
 goto LABEL_11;
 }
 }
 __m128i temp_m128i = _mm_add_epi32(
 _mm_loadl_epi64((const __m128i *)&a[v8]),
 _mm_loadl_epi64((const __m128i *)&b[v8]));
 _mm_storel_epi64((__m128i *)&c[v8], temp_m128i);
 v9 += v6 & 0xFFFFFFFE;
 if ( v6 == (v6 & 0xFFFFFFFE) )
 goto LABEL_11;
 goto LABEL_10;
 }
 for ( i = 0; i != n; ++i )
 c[i] = a[i] + b[i];
 v5 = n - 1;
LABEL_11:
 if ( v5 > 2 )
 goto LABEL_12;
 v13 = 0;
 result = 0;
LABEL_15:
 v16 = v13;
 result += c[v16];
 if ( v13 + 1 < n )
 {
 result += c[v16 + 1];
 if ( v13 + 2 < n )
 result += c[v16 + 2];
 }
 return result;
}


/* Function: call_vectorized_loop @ 0x1900 */
int call_vectorized_loop()
{
 return 72;
}


/* Function: param_link_time_optimization @ 0x1910 */
int param_link_time_optimization(int x)
{
 return 2 * x + 10;
}


/* Function: call_link_time_optimization @ 0x1920 */
int call_link_time_optimization()
{
 return 20;
}


/* Function: param_division_by_zero @ 0x1930 */
int param_division_by_zero(int x)
{
 signal(8, (__sighandler_t)div_zero_handler);
 if ( _setjmp(jmp_buffer) )
 return -1;
 else
 return 10 / x;
}


/* Function: call_division_by_zero @ 0x1980 */
int call_division_by_zero()
{
 int v0; // edi
 int v1; // ebx
 int v2; // ebp

 v1 = param_division_by_zero_1(v0);
 v2 = param_division_by_zero_0(v0);
 signal(8, 0);
 return v1 + v2;
}


/* Function: param_null_pointer_deref @ 0x19B0 */
int param_null_pointer_deref(int *p)
{
 signal(11, (__sighandler_t)segv_handler);
 if ( _setjmp(segv_buffer) )
 return -1;
 else
 return *p;
}


/* Function: call_null_pointer_deref @ 0x1A00 */
int call_null_pointer_deref()
{
 int v0; // ebx
 int v1; // ebp
 int valid; // [rsp+4h] [rbp-24h] BYREF
 unsigned long long v4; // [rsp+8h] [rbp-20h]

 v4 = __readfsqword(0x28u);
 valid = 42;
 v0 = param_null_pointer_deref(&valid);
 v1 = param_null_pointer_deref(0);
 signal(11, 0);
 return v0 + v1;
}


/* Function: param_buffer_overflow_stack @ 0x1A70 */
long long param_buffer_overflow_stack(unsigned int a1)
{
 return a1;
}


/* Function: param_buffer_overflow_heap @ 0x1A80 */
int param_buffer_overflow_heap(int x)
{
 void *v1; // rax

 v1 = malloc(0x10u);
 if ( !v1 )
 return -2;
 free(v1);
 return x;
}


/* Function: call_buffer_overflow @ 0x1AB0 */
int call_buffer_overflow()
{
 void *v0; // rax

 v0 = malloc(0x10u);
 if ( !v0 )
 return 8;
 free(v0);
 return 30;
}


/* Function: param_integer_overflow @ 0x1AE0 */
int param_integer_overflow(int a, int b)
{
 int result; // eax

 result = a + b;
 if ( a <= 0 || b <= 0 )
 {
 if ( (b & a) < 0 && result > 0 )
 return -2;
 }
 else if ( result < 0 )
 {
 return -1;
 }
 return result;
}


/* Function: call_integer_overflow @ 0x1B10 */
int call_integer_overflow()
{
 return 2000000000;
}


/* Function: param_undefined_behavior @ 0x1B20 */
int param_undefined_behavior(int i)
{
 return 2 * i;
}


/* Function: call_undefined_behavior @ 0x1B30 */
long long call_undefined_behavior()
{
 return 10;
}


/* Function: param_implementation_defined @ 0x1B40 */
int param_implementation_defined()
{
 return 47;
}


/* Function: call_implementation_defined @ 0x1B50 */
long long call_implementation_defined()
{
 return 47;
}


/* Function: test_obf_opt_edge @ 0x1B60 */
void test_obf_opt_edge()
{
 int v0; // edx
 int v1; // eax
 int v2; // ecx
 long long v3; // rdx
 char *v4; // rax
 int v5; // ebx
 const char *v6; // rdi
 int v7; // eax
 unsigned int v8; // eax
 int v9; // ebx
 int v10; // ebp
 int v11; // ebx
 int v12; // ebp
 void *v13; // rdi
 long long v14; // rdx
 int p; // [rsp+Ch] [rbp-4Ch] BYREF
 char dest[40]; // [rsp+10h] [rbp-48h] BYREF
 unsigned long long v17; // [rsp+38h] [rbp-20h]

 v17 = __readfsqword(0x28u);
 puts(s);
 __printf_chk(1, &unk_2137, 10);
 v0 = 6;
 v1 = 5;
 do
 {
 v2 = v0;
 v0 = v1 % v0;
 v1 = v2;
 }
 while ( v0 );
 v3 = 20;
 if ( v2 != 1 )
 v3 = 35;
 __printf_chk(1, &unk_2153, v3);
 __printf_chk(1, &unk_216F, 225);
 v4 = strncpy(dest, &encrypted_0, 0x1Fu);
 v5 = dest[0];
 dest[31] = 0;
 v6 = v4;
 if ( dest[0] )
 {
 do
 {
 *v4++ = v5 ^ 0x5A;
 v5 = (v5 & ~0xFF) | (*v4 & 0xFF);
 }
 while ( *v4 );
 v5 = dest[0];
 }
 v7 = strlen(v6);
 __printf_chk(1, &unk_218C, (unsigned int)(v5 + v7));
 __printf_chk(1, &unk_2038, 500500);
 __printf_chk(1, &unk_2068, 5050);
 v8 = call_vectorized_loop();
 __printf_chk(1, &unk_2090, v8);
 __printf_chk(1, &unk_20B8, 20);
 v9 = param_division_by_zero_1(1);
 v10 = param_division_by_zero_0(1);
 signal(8, 0);
 __printf_chk(1, &unk_21A8, (unsigned int)(v9 + v10));
 p = 42;
 v11 = param_null_pointer_deref(&p);
 v12 = param_null_pointer_deref(0);
 signal(11, 0);
 __printf_chk(1, &unk_21C4, (unsigned int)(v11 + v12));
 v13 = malloc(0x10u);
 if ( v13 )
 {
 free(v13);
 v14 = 30;
 }
 else
 {
 v14 = 8;
 }
 __printf_chk(1, &unk_21E1, v14);
 __printf_chk(1, &unk_20D8, 2000000000);
 __printf_chk(1, &unk_21FE, 10);
 __printf_chk(1, &unk_2110, 47);
}


/* Function: .term_proc @ 0x1DC0 */
void term_proc()
{
 ;
}


/* FAILED to decompile: free @ 0x4210 */

/* FAILED to decompile: __libc_start_main @ 0x4218 */

/* FAILED to decompile: strncpy @ 0x4220 */

/* FAILED to decompile: puts @ 0x4228 */

/* FAILED to decompile: strlen @ 0x4230 */

/* FAILED to decompile: __stack_chk_fail @ 0x4238 */

/* FAILED to decompile: _setjmp @ 0x4240 */

/* FAILED to decompile: signal @ 0x4248 */

/* FAILED to decompile: malloc @ 0x4250 */

/* FAILED to decompile: __printf_chk @ 0x4258 */

/* FAILED to decompile: __longjmp_chk @ 0x4260 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x4268 */

/* FAILED to decompile: __gmon_start__ @ 0x4278 */

/* Total functions decompiled: 54, failed: 13 */
