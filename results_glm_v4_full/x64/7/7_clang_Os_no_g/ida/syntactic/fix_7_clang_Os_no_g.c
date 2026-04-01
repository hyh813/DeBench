/* Auto-injected type definitions by preprocessor */
#ifndef uint8_t
typedef unsigned char uint8_t;
#endif
#ifndef uint16_t
typedef unsigned short uint16_t;
#endif
#ifndef uint32_t
typedef unsigned int uint32_t;
#endif
#ifndef uint64_t
typedef unsigned long long uint64_t;
#endif
#ifndef int8_t
typedef signed char int8_t;
#endif
#ifndef int16_t
typedef short int16_t;
#endif
#ifndef int32_t
typedef int int32_t;
#endif
/* int64_t is handled by system headers */
#ifndef size_t
typedef unsigned long size_t;
#endif
#ifndef ssize_t
typedef long ssize_t;
#endif
#ifndef uintptr_t
typedef unsigned long uintptr_t;
#endif
#ifndef intptr_t
typedef long intptr_t;
#endif
#ifndef ptrdiff_t
typedef unsigned long ptrdiff_t;
#endif
#ifndef intmax_t
typedef long long intmax_t;
#endif
#ifndef uintmax_t
typedef unsigned long long uintmax_t;
#endif

#ifndef LODWORD
#define LODWORD(l) ((unsigned int)(((uintptr_t)(l)) & 0xffffffff))
#endif

#include <setjmp.h>
#include <signal.h>
#include <stdio.h>
#include <string.h>
#include <emmintrin.h>

#define JUMPOUT(x) return

/* Global variables */
extern long long (*_gmon_start__)(void);
extern int div_zero_caught;
extern jmp_buf jmp_buffer;
extern int segv_caught;
extern jmp_buf segv_buffer;
extern unsigned int unk_2030[];
extern unsigned int unk_2010[];
extern char param_string_encryption_encrypted[];
extern char *s;
extern char *format;
extern char *aObfL403D;
extern char *aObfL404D;
extern char *aObfL405D;
extern char *aOptL401;
extern char *aOptL401_0;
extern char *aOptL402;
extern char *aOptL501LtoD;
extern char *aEdgeL301D;
extern char *aEdgeL302D;
extern char *aEdgeL303D;
extern char *aEdgeL304D;
extern char *aEdgeL401D;
extern char *aEdgeL402D;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/7/7_clang_Os_no_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x1000 */
long long (**init_proc())(void)
{
 long long (**result)(void); // rax

 result = &_gmon_start__;
 if ( &_gmon_start__ )
 return (long long (**)(void))_gmon_start__();
 return result;
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



/* Function: param_fake_branch @ 0x119C */
long long param_fake_branch(unsigned int a1)
{
 return a1;
}


/* Function: call_fake_branch @ 0x119F */
long long call_fake_branch()
{
 return 10;
}


/* Function: param_opaque_predicate @ 0x11A5 */
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


/* Function: call_opaque_predicate @ 0x11E9 */
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


/* Function: param_instruction_substitution @ 0x120F */
long long param_instruction_substitution(unsigned int a1)
{
 return (a1 & 0xF) + (a1 >> 1) + 21 * a1;
}


/* Function: call_instruction_substitution @ 0x1223 */
long long call_instruction_substitution()
{
 return 225;
}


/* Function: decrypt_string @ 0x1229 */
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


/* Function: param_string_encryption @ 0x1269 */
long long param_string_encryption(int unused)
{
 char v0; // al
 char *v1; // rcx
 int v2; // ebx
 char v4[40]; // Combined buffer for v4 and v5

 strncpy(v4, param_string_encryption_encrypted, 0x20u);
 v4[0x1F] = 0;
 v0 = v4[0];
 if ( v4[0] )
 {
 v1 = (char *)(v4 + 1);
 do
 {
 *(v1 - 1) = v0 ^ 0x5A;
 v0 = *v1++;
 }
 while ( v0 );
 v2 = v4[0];
 }
 else
 {
 v2 = 0;
 }
 return v2 + strlen((const char *)v4);
}


/* Function: call_string_encryption @ 0x12BB */
// attributes: thunk
long long call_string_encryption()
{
 return param_string_encryption(0);
}


/* Function: param_tail_call_optimized @ 0x12C0 */
long long param_tail_call_optimized(int a1, unsigned int a2)
{
 long long result; // rax

 result = a2;
 if ( a1 > 0 )
 {
 int a1_minus_1 = a1 - 1;
 int a1_minus_2 = a1 - 2;
 unsigned int temp = (unsigned int)a1_minus_1 * (unsigned int)a1_minus_2;
 result = (long long)(a1_minus_1 * a1_minus_1) + a1 + (long long)a2 - (temp >> 1);
 return result;
 }
 return result;
}


/* Function: call_tail_call_optimized @ 0x12DD */
long long call_tail_call_optimized()
{
 return 500500;
}


/* Function: param_non_tail_call @ 0x12E3 */
long long param_non_tail_call(int a1)
{
 if ( a1 <= 0 )
 return 0;
 else
 {
 unsigned int v1 = (unsigned int)(a1 - 1);
 unsigned int v2 = (unsigned int)(a1 - 2);
 unsigned long long temp = (unsigned long long)v1 * v2;
 return a1 + (a1 - 1) * (a1 - 1) - (unsigned int)(temp >> 1);
 }
}


/* Function: call_non_tail_call @ 0x12FF */
long long call_non_tail_call()
{
 return 5050;
}


/* Function: param_vectorized_loop @ 0x1305 */
long long param_vectorized_loop(long long a1, long long a2, long long a3, int a4)
{
 long long v4; // r8
 long long i; // r9
 long long v6; // rcx
 long long result; // rax

 if ( a4 <= 0 )
 return 0;
 v4 = (unsigned int)a4;
 for ( i = 0; i != a4; ++i )
 *(unsigned int *)(a3 + 4 * i) = *(unsigned int *)(a1 + 4 * i) + *(unsigned int *)(a2 + 4 * i);
 v6 = 0;
 result = 0;
 do
 result = (unsigned int)(*(unsigned int *)(a3 + 4 * v6++) + result);
 while ( v4 != v6 );
 return result;
}


/* Function: call_vectorized_loop @ 0x133A */
long long call_vectorized_loop()
{
 long long i; // rax
 __m128i v1; // xmm0
 __m128i v2; // xmm1
 __m128i v4;
 __m128i v5;

 _mm_storeu_si128(&v5, _mm_set1_epi32(0));
 _mm_storeu_si128(&v4, _mm_set1_epi32(0));
 for ( i = 0; i != 32; i += 16 )
 _mm_store_si128((__m128i *)((char *)&v4 + i), _mm_add_epi32(
 _mm_load_si128((const __m128i *)((char *)&unk_2030 + i)),
 _mm_load_si128((const __m128i *)((char *)&unk_2010 + i)));
 v1 = _mm_add_epi32(_mm_load_si128(&v5), _mm_load_si128(&v4));
 v2 = _mm_add_epi32(_mm_shuffle_epi32(v1, 238), v1);
 v2 = _mm_add_epi32(_mm_shuffle_epi32(v2, 85), v2);
 return _mm_cvtsi128_si32(v2);
}


/* Function: param_link_time_optimization @ 0x1397 */
long long param_link_time_optimization(int a1)
{
 return (unsigned int)(2 * a1 + 10);
}


/* Function: call_link_time_optimization @ 0x139E */
long long call_link_time_optimization()
{
 return 20;
}


/* Function: div_zero_handler @ 0x13A4 */
void div_zero_handler()
{
 div_zero_caught = 1;
 longjmp(jmp_buffer, 1);
}


/* Function: param_division_by_zero @ 0x13C0 */
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


/* Function: call_division_by_zero @ 0x13F8 */
long long call_division_by_zero()
{
 int v0; // ebx
 int v1; // ebp

 v0 = param_division_by_zero(5);
 v1 = param_division_by_zero(0);
 signal(8, 0);
 return (unsigned int)(v0 + v1);
}


/* Function: segv_handler @ 0x1427 */
void segv_handler()
{
 segv_caught = 1;
 longjmp(segv_buffer, 1);
}


/* Function: param_null_pointer_deref @ 0x1443 */
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


/* Function: call_null_pointer_deref @ 0x1473 */
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


/* Function: param_buffer_overflow_stack @ 0x14A8 */
long long param_buffer_overflow_stack(unsigned int a1)
{
 return a1;
}


/* Function: param_buffer_overflow_heap @ 0x14AB */
long long param_buffer_overflow_heap(unsigned int a1)
{
 return a1;
}


/* Function: call_buffer_overflow @ 0x14AE */
long long call_buffer_overflow()
{
 return 30;
}


/* Function: param_integer_overflow @ 0x14B4 */
long long param_integer_overflow(int a1, int a2)
{
 int v2; // ecx
 long long result; // rax

 v2 = a2 + a1;
 result = 0xFFFFFFFFLL;
 if ( a1 <= 0 || a2 <= 0 || v2 >= 0 )
 {
 result = 4294967294LL;
 if ( v2 <= 0 )
 return (long long)v2;
 return result;
 }
 return result;
}


/* Function: call_integer_overflow @ 0x14D9 */
long long call_integer_overflow()
{
 return 2000000000;
}


/* Function: param_undefined_behavior @ 0x14DF */
long long param_undefined_behavior(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: call_undefined_behavior @ 0x14E3 */
long long call_undefined_behavior()
{
 return 10;
}


/* Function: param_implementation_defined @ 0x14E9 */
long long param_implementation_defined()
{
 return 47;
}


/* Function: call_implementation_defined @ 0x14EF */
long long call_implementation_defined()
{
 return 47;
}


/* Function: test_obf_opt_edge @ 0x14F5 */
int test_obf_opt_edge()
{
 int v0; // edx
 int v1; // eax
 int v2; // ecx
 long long v3; // rsi
 unsigned int v4; // eax
 unsigned int v5; // eax
 unsigned int v6; // eax
 unsigned int v7; // eax

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
 printf(aObfL403D, v3);
 printf(aObfL404D, 225);
 v4 = param_string_encryption(0);
 printf(aObfL405D, v4);
 printf(aOptL401, 500500);
 printf(aOptL401_0, 5050);
 v5 = call_vectorized_loop();
 v6 = (unsigned int)v5;
 printf(aOptL402, v6);
 printf(aOptL501LtoD, 20);
 v6 = call_division_by_zero();
 printf(aEdgeL301D, v6);
 v7 = call_null_pointer_deref();
 printf(aEdgeL302D, v7);
 printf(aEdgeL303D, 30);
 call_buffer_overflow();
 printf(aEdgeL304D, 2000000000);
 printf(aEdgeL401D, 10);
 return printf(aEdgeL402D, 47);
}


/* Function: main @ 0x1635 */
int main(int argc, const char **argv, const char **envp)
{
 test_obf_opt_edge();
 return 0;
}


/* Function: .term_proc @ 0x1640 */
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
