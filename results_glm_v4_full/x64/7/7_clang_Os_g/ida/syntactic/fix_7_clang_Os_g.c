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

#include <setjmp.h>
#include <signal.h>
#include <string.h>
#include <stdio.h>
#include <emmintrin.h>

/* External declarations */
extern void _gmon_start__(void);

/* Global variables */
static int div_zero_caught;
static int segv_caught;
jmp_buf jmp_buffer;
jmp_buf segv_buffer;

/* External data references */
static const uint32_t unk_2030[4] = {1, 2, 3, 4};
static const uint32_t unk_2010[4] = {5, 6, 7, 8};
static const char s[] = "Testing obfuscation options and edge cases\n";
static const char format[] = "Result: %d\n";
static const char aObfL403D[] = "Opaque predicate: %d\n";
static const char aObfL404D[] = "Instruction substitution: %d\n";
static const char aObfL405D[] = "String encryption: %d\n";
static const char aOptL401[] = "Tail call optimized: %d\n";
static const char aOptL401_0[] = "Non tail call: %d\n";
static const char aOptL402[] = "Vectorized loop: %d\n";
static const char aOptL501LtoD[] = "LTO: %d\n";
static const char aEdgeL301D[] = "Division by zero: %d\n";
static const char aEdgeL302D[] = "Null pointer deref: %d\n";
static const char aEdgeL303D[] = "Buffer overflow: %d\n";
static const char aEdgeL304D[] = "Integer overflow: %d\n";
static const char aEdgeL401D[] = "Undefined behavior: %d\n";
static const char aEdgeL402D[] = "Implementation defined: %d\n";
static const char param_string_encryption_encrypted[] = "\x7a\x7b\x7c\x7d\x7e\x7f";

#define JUMPOUT(x) return




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
int param_fake_branch(int x)
{
 return x;
}


/* Function: call_fake_branch @ 0x119F */
int call_fake_branch()
{
 return 10;
}


/* Function: param_opaque_predicate @ 0x11A5 */
int param_opaque_predicate(int x)
{
 int v1; // r8d
 int v2; // ecx
 int v3; // eax
 int v4; // edx
 int v5; // esi
 int v6; // r8d
 int result; // eax

 v1 = 2 * x;
 v2 = -1;
 if ( x != -1 )
 {
 v3 = x;
 v4 = x + 1;
 do
 {
 v2 = v4;
 v4 = v3 % v4;
 v3 = v2;
 }
 while ( v4 );
 }
 v5 = (x * x + (v1 | 1)) ^ ((x + 1) * (x + 1));
 v6 = v1 + 10;
 result = 3 * x + 20;
 if ( !(v5 | v2 ^ 1) )
 return v6;
 return result;
}


/* Function: call_opaque_predicate @ 0x11E9 */
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
 result = 35;
 if ( v2 == 1 )
 return 20;
 return result;
}


/* Function: param_instruction_substitution @ 0x120F */
int param_instruction_substitution(int x)
{
 return (x & 0xF) + ((unsigned int)x >> 1) + 21 * x;
}


/* Function: call_instruction_substitution @ 0x1223 */
int call_instruction_substitution()
{
 return 225;
}


/* Function: decrypt_string @ 0x1229 */
const char * decrypt_string(const char *encrypted, char *buffer, size_t len, char key)
{
 char v6; // al
 char *v7; // rcx

 strncpy(buffer, encrypted, len);
 buffer[len - 1] = 0;
 v6 = *buffer;
 if ( *buffer )
 {
 v7 = buffer + 1;
 do
 {
 *(v7 - 1) = key ^ v6;
 v6 = *v7++;
 }
 while ( v6 );
 }
 return buffer;
}


/* Function: param_string_encryption @ 0x1269 */
int param_string_encryption()
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
 return v2 + strlen(&v4);
}


/* Function: call_string_encryption @ 0x12BB */
// attributes: thunk
int call_string_encryption()
{
 return param_string_encryption();
}


/* Function: param_tail_call_optimized @ 0x12C0 */
int param_tail_call_optimized(int n, int acc)
{
 int result; // eax

 result = acc;
 if ( n > 0 )
 return (n - 1) * (n - 1) + n + acc - (((unsigned int)(n - 1) * (unsigned long long)(unsigned int)(n - 2)) >> 1);
 return result;
}


/* Function: call_tail_call_optimized @ 0x12DD */
int call_tail_call_optimized()
{
 return 500500;
}


/* Function: param_non_tail_call @ 0x12E3 */
int param_non_tail_call(int n)
{
 if ( n <= 0 )
 return 0;
 else
 return n + (n - 1) * (n - 1) - (((unsigned int)(n - 1) * (unsigned long long)(unsigned int)(n - 2)) >> 1);
}


/* Function: call_non_tail_call @ 0x12FF */
int call_non_tail_call()
{
 return 5050;
}


/* Function: param_vectorized_loop @ 0x1305 */
int param_vectorized_loop(int *a, int *b, int *c, int n)
{
 long long v4; // r8
 long long i; // r9
 long long v6; // rcx
 int result; // eax

 if ( n <= 0 )
 return 0;
 v4 = (unsigned int)n;
 for ( i = 0; i != n; ++i )
 c[i] = a[i] + b[i];
 v6 = 0;
 result = 0;
 do
 result += c[v6++];
 while ( v4 != v6 );
 return result;
}


/* Function: call_vectorized_loop @ 0x133A */
// local variable allocation has failed, the output may be wrong!
int call_vectorized_loop()
{
 long long i; // rax
 __m128i v1; // xmm0
 __m128i v2; // xmm1
 unsigned char v4[32]; // [rsp+0h] [rbp-28h] OVERLAPPED BYREF

 memset(v4, 0, sizeof(v4));
 for ( i = 0; i != 32; i += 16 )
 *(__m128i *)&v4[i] = _mm_add_epi32(
 _mm_load_si128((const __m128i *)((char *)&unk_2030 + i)),
 *(__m128i *)((char *)&unk_2010 + i));
 v1 = _mm_add_epi32(_mm_load_si128((const __m128i *)&v4[16]), *(__m128i *)v4);
 v2 = _mm_add_epi32(_mm_shuffle_epi32(v1, 238), v1);
 return _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v2, 85), v2));
}


/* Function: param_link_time_optimization @ 0x1397 */
int param_link_time_optimization(int x)
{
 return 2 * x + 10;
}


/* Function: call_link_time_optimization @ 0x139E */
int call_link_time_optimization()
{
 return 20;
}


/* Function: div_zero_handler @ 0x13A4 */
void div_zero_handler(int sig)
{
 div_zero_caught = 1;
 longjmp(jmp_buffer, 1);
}


/* Function: param_division_by_zero @ 0x13C0 */
int param_division_by_zero(int x)
{
 int v1; // eax
 int v2; // ecx

 signal(8, (__sighandler_t)div_zero_handler);
 v1 = _setjmp(jmp_buffer);
 v2 = -1;
 if ( !v1 )
 return 10 / x;
 return v2;
}


/* Function: call_division_by_zero @ 0x13F8 */
int call_division_by_zero()
{
 int v0; // ebx
 int v1; // ebp

 v0 = param_division_by_zero(5);
 v1 = param_division_by_zero(0);
 signal(8, 0);
 return v0 + v1;
}


/* Function: segv_handler @ 0x1427 */
void segv_handler(int sig)
{
 segv_caught = 1;
 longjmp(segv_buffer, 1);
}


/* Function: param_null_pointer_deref @ 0x1443 */
int param_null_pointer_deref(int *p)
{
 int v1; // eax
 int v2; // ecx

 signal(11, (__sighandler_t)segv_handler);
 v1 = _setjmp(segv_buffer);
 v2 = -1;
 if ( !v1 )
 return *p;
 return v2;
}


/* Function: call_null_pointer_deref @ 0x1473 */
int call_null_pointer_deref()
{
 int v0; // ebx
 int v1; // ebp
 int p[5]; // [rsp+0h] [rbp-14h] BYREF

 p[0] = 42;
 v0 = param_null_pointer_deref(p);
 v1 = param_null_pointer_deref(0);
 signal(11, 0);
 return v0 + v1;
}


/* Function: param_buffer_overflow_stack @ 0x14A8 */
int param_buffer_overflow_stack(int x)
{
 return x;
}


/* Function: param_buffer_overflow_heap @ 0x14AB */
int param_buffer_overflow_heap(int x)
{
 return x;
}


/* Function: call_buffer_overflow @ 0x14AE */
int call_buffer_overflow()
{
 return 30;
}


/* Function: param_integer_overflow @ 0x14B4 */
int param_integer_overflow(int a, int b)
{
 int v2; // ecx
 int result; // eax

 v2 = b + a;
 if ( a <= 0 || b <= 0 || (result = -1, v2 >= 0) )
 {
 result = -2;
 if ( v2 <= 0 )
 result = b + a;
 if ( (a & b) >= 0 )
 return b + a;
 }
 return result;
}


/* Function: call_integer_overflow @ 0x14D9 */
int call_integer_overflow()
{
 return 2000000000;
}


/* Function: param_undefined_behavior @ 0x14DF */
int param_undefined_behavior(int i)
{
 return 2 * i;
}


/* Function: call_undefined_behavior @ 0x14E3 */
int call_undefined_behavior()
{
 return 10;
}


/* Function: param_implementation_defined @ 0x14E9 */
int param_implementation_defined()
{
 return 47;
}


/* Function: call_implementation_defined @ 0x14EF */
int call_implementation_defined()
{
 return 47;
}


/* Function: test_obf_opt_edge @ 0x14F5 */
void test_obf_opt_edge()
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
 v4 = param_string_encryption();
 printf(aObfL405D, v4);
 printf(aOptL401, 500500);
 printf(aOptL401_0, 5050);
 v5 = call_vectorized_loop();
 printf(aOptL402, v5);
 printf(aOptL501LtoD, 20);
 v6 = call_division_by_zero();
 printf(aEdgeL301D, v6);
 v7 = call_null_pointer_deref();
 printf(aEdgeL302D, v7);
 printf(aEdgeL303D, 30);
 printf(aEdgeL304D, 2000000000);
 printf(aEdgeL401D, 10);
 printf(aEdgeL402D, 47);
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
