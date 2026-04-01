/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
/* int64_t, uint64_t, intmax_t, uintmax_t, size_t, ssize_t, uintptr_t, intptr_t, ptrdiff_t are defined by system headers */

/* Required standard library headers */
#include <setjmp.h>
#include <signal.h>
#include <string.h>
#include <stdio.h>
#include <stdint.h>
#include <stdint.h>

/* LOBYTE macro for getting low byte */
#define LOBYTE(x) ((unsigned char)((x) & 0xFF))

/* ARM NEON SIMD types */
#include <arm_neon.h>

/* Global jump buffers for signal handling */
jmp_buf jmp_buffer;
jmp_buf segv_buffer;

/* Variable to track division by zero */
int div_zero_caught;

/* Variable to track segmentation fault */
int segv_caught;

/* Global jump buffers for signal handling - use pointer for compatibility */
jmp_buf jmp_buffer;
jmp_buf segv_buffer;

/* Weak function declaration (CRT stub) */
int call_weak_fn(void)
{
    return 0;
}

/* JUMPOUT macro - jumps to address 0 (ARM invalid address) */
#define JUMPOUT(addr) ((void (*)(void))0)()

/* Data arrays and strings from binary */
static const unsigned char param_string_encryption_encrypted[32] = {0};

/* ARM NEON data for vectorized loop */
static int32x4_t unk_F10[2] = {0};
static int32x4_t unk_F30[2] = {0};

/* String constants */
static const char asc_1121[] = "test";
static const char aObfL402D[] = "Obf/L4_02: %d\n";
static const char aObfL403D[] = "Obf/L4_03: %lld\n";
static const char aObfL404D[] = "Obf/L4_04: %d\n";
static const char aObfL405D[] = "Obf/L4_05: %u\n";
static const char aOptL401[] = "Opt/L4_01: %d\n";
static const char aOptL401_0[] = "Opt/L4_01: %d\n";
static const char aOptL402[] = "Opt/L4_02: %d\n";
static const char aOptL501LtoD[] = "Opt/L5_01: %d\n";
static const char aEdgeL301D[] = "Edge/L3_01: %d\n";
static const char aEdgeL302D[] = "Edge/L3_02: %d\n";
static const char aEdgeL303D[] = "Edge/L3_03: %d\n";
static const char aEdgeL304D[] = "Edge/L3_04: %d\n";
static const char aEdgeL401D[] = "Edge/L4_01: %d\n";
static const char aEdgeL402D[] = "Edge/L4_02: %d\n";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/7/7_clang_Os_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x710 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_730 @ 0x730 */
void sub_730()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: param_fake_branch @ 0x914 */
int param_fake_branch(int x)
{
 return x;
}


/* Function: call_fake_branch @ 0x918 */
int call_fake_branch()
{
 return 10;
}


/* Function: param_opaque_predicate @ 0x920 */
int param_opaque_predicate(int x)
{
 int v1; // w8
 int v2; // w10
 int v3; // w11
 int v4; // w12
 int v5; // w11
 int v6; // w8

 v1 = 2 * x;
 if ( x == -1 )
 {
 v2 = -1;
 }
 else
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
 v5 = (v1 | 1) + x * x;
 v6 = v1 + 10;
 if ( v2 == 1 && v5 == (x + 1) * (x + 1) )
 return v6;
 else
 return 3 * x + 20;
}


/* Function: call_opaque_predicate @ 0x978 */
int call_opaque_predicate()
{
 int v0; // w8
 int v1; // w9
 int v2; // w10

 v0 = 6;
 v1 = 5;
 do
 {
 v2 = v0;
 v0 = v1 % v0;
 v1 = v2;
 }
 while ( v0 );
 if ( v2 == 1 )
 return 20;
 else
 return 35;
}


/* Function: param_instruction_substitution @ 0x9A8 */
int param_instruction_substitution(int x)
{
 return (x & 0xF) + ((unsigned int)x >> 1) + 21 * x;
}


/* Function: call_instruction_substitution @ 0x9BC */
int call_instruction_substitution()
{
 return 225;
}


/* Function: decrypt_string @ 0x9C4 */
const char * decrypt_string(const char *encrypted, char *buffer, size_t len, char key)
{
 unsigned char v7; // w8
 char *v8; // x10
 char v9; // w11

 strncpy(buffer, encrypted, len);
 buffer[len - 1] = 0;
 v7 = *buffer;
 if ( *buffer )
 {
 v8 = buffer + 1;
 do
 {
 v9 = v7 ^ key;
 v7 = (unsigned char)*v8;
 *(v8++ - 1) = v9;
 }
 while ( v7 );
 }
 return buffer;
}


/* Function: param_string_encryption @ 0xA2C */
int param_string_encryption()
{
 int v0; // w8
 unsigned char *v1; // x9
 unsigned char v2; // w11
 int v3; // w19
 unsigned char v5; // [xsp+0h] [xbp-20h] BYREF
 unsigned char v6[31]; // [xsp+1h] [xbp-1Fh] BYREF

 strncpy((char *)&v5, param_string_encryption_encrypted, 0x20u);
 v0 = v5;
 v6[30] = 0;
 if ( v5 )
 {
 v1 = v6;
 do
 {
 v2 = v0 ^ 0x5A;
 v0 = *v1;
 *(v1 - 1) = v2;
 v1++;
 }
 while ( v0 );
 v3 = v5;
 }
 else
 {
 v3 = 0;
 }
 return strlen((const char *)&v5) + v3;
}


/* Function: call_string_encryption @ 0xAA4 */
// attributes: thunk
int call_string_encryption()
{
 return param_string_encryption();
}


/* Function: param_tail_call_optimized @ 0xAA8 */
int param_tail_call_optimized(int n, int acc)
{
 if ( n >= 1 )
 return acc + n + (n - 1) * (n - 1) - (((unsigned int)(n - 1) * (unsigned long long)(unsigned int)(n - 2)) >> 1);
 return acc;
}


/* Function: call_tail_call_optimized @ 0xAD0 */
int call_tail_call_optimized()
{
 return 500500;
}


/* Function: param_non_tail_call @ 0xADC */
int param_non_tail_call(int n)
{
 if ( n < 1 )
 return 0;
 else
 return n + (n - 1) * (n - 1) - (((unsigned int)(n - 1) * (unsigned long long)(unsigned int)(n - 2)) >> 1);
}


/* Function: call_non_tail_call @ 0xB04 */
int call_non_tail_call()
{
 return 5050;
}


/* Function: param_vectorized_loop @ 0xB0C */
int param_vectorized_loop(int *a, int *b, int *c, int n)
{
 long long v4; // x8
 int *v5; // x10
 long long v6; // x9
 int v7; // w11
 int v8; // t1
 int v9; // t1
 int result; // w0
 int v11; // t1

 if ( n < 1 )
 return 0;
 v4 = (unsigned int)n;
 v5 = c;
 v6 = (unsigned int)n;
 do
 {
 v8 = *a++;
 v7 = v8;
 v9 = *b++;
 --v6;
 *v5++ = v9 + v7;
 }
 while ( v6 );
 result = 0;
 do
 {
 v11 = *c++;
 --v4;
 result += v11;
 }
 while ( v4 );
 return result;
}


/* Function: call_vectorized_loop @ 0xB60 */
int call_vectorized_loop()
{
 long long v0; // x8
 int32x4_t v2; // [xsp+0h] [xbp-20h]
 int32x4_t v3; // [xsp+10h] [xbp-10h]

 v0 = 0;
 v2 = vdupq_n_s32(0);
 v3 = vdupq_n_s32(0);
 do
 {
 *(int32x4_t *)((char *)&v2 + v0) = vaddq_s32(
 *(int32x4_t *)((char *)&unk_F30 + v0),
 *(int32x4_t *)((char *)&unk_F10 + v0));
 v0 += 16;
 }
 while ( v0 != 32 );
 return vaddvq_s32(vaddq_s32(v3, v2));
}


/* Function: param_link_time_optimization @ 0xBB4 */
int param_link_time_optimization(int x)
{
 return 2 * x + 10;
}


/* Function: call_link_time_optimization @ 0xBC0 */
int call_link_time_optimization()
{
 return 20;
}


/* Function: div_zero_handler @ 0xBC8 */
void div_zero_handler(int sig)
{
 div_zero_caught = 1;
 longjmp(jmp_buffer, 1);
}


/* Function: param_division_by_zero @ 0xBEC */
int param_division_by_zero(int x)
{
 signal(8, (__sighandler_t)div_zero_handler);
 if ( _setjmp(jmp_buffer) )
 return -1;
 else
 return 10 / x;
}


/* Function: call_division_by_zero @ 0xC38 */
int call_division_by_zero()
{
 int v0; // w19
 int v1; // w20

 v0 = param_division_by_zero(5);
 v1 = param_division_by_zero(0);
 signal(8, 0);
 return v1 + v0;
}


/* Function: segv_handler @ 0xC78 */
void segv_handler(int sig)
{
 segv_caught = 1;
 longjmp(segv_buffer, 1);
}


/* Function: param_null_pointer_deref @ 0xC9C */
int param_null_pointer_deref(int *p)
{
 signal(11, (__sighandler_t)segv_handler);
 if ( _setjmp(segv_buffer) )
 return -1;
 else
 return *p;
}


/* Function: call_null_pointer_deref @ 0xCE4 */
int call_null_pointer_deref()
{
 int v0; // w19
 int v1; // w20
 int valid; // [xsp+Ch] [xbp-4h] BYREF

 valid = 42;
 v0 = param_null_pointer_deref(&valid);
 v1 = param_null_pointer_deref(0);
 signal(11, 0);
 return v1 + v0;
}


/* Function: param_buffer_overflow_stack @ 0xD34 */
int param_buffer_overflow_stack(int x)
{
 return x;
}


/* Function: param_buffer_overflow_heap @ 0xD38 */
int param_buffer_overflow_heap(int x)
{
 return x;
}


/* Function: call_buffer_overflow @ 0xD3C */
int call_buffer_overflow()
{
 return 30;
}


/* Function: param_integer_overflow @ 0xD44 */
int param_integer_overflow(int a, int b)
{
 int v2; // w8

 v2 = b + a;
 if ( a >= 1 && b >= 1 && v2 < 0 )
 return -1;
 if ( v2 > 0 && (b & a) < 0 )
 return -2;
 else
 return b + a;
}


/* Function: call_integer_overflow @ 0xD7C */
int call_integer_overflow()
{
 return 2000000000;
}


/* Function: param_undefined_behavior @ 0xD88 */
int param_undefined_behavior(int i)
{
 return 2 * i;
}


/* Function: call_undefined_behavior @ 0xD90 */
int call_undefined_behavior()
{
 return 10;
}


/* Function: param_implementation_defined @ 0xD98 */
int param_implementation_defined()
{
 return 48;
}


/* Function: call_implementation_defined @ 0xDA0 */
int call_implementation_defined()
{
 return 48;
}


/* Function: test_obf_opt_edge @ 0xDA8 */
void test_obf_opt_edge()
{
 int v0; // w8
 int v1; // w9
 int v2; // w10
 long long v3; // x1
 unsigned int v4; // w0
 unsigned int v5; // w0
 unsigned int v6; // w0
 unsigned int v7; // w0

 puts(asc_1121);
 printf(aObfL402D, 10);
 v0 = 6;
 v1 = 5;
 do
 {
 v2 = v0;
 v0 = v1 % v0;
 v1 = v2;
 }
 while ( v0 );
 if ( v2 == 1 )
 v3 = 20;
 else
 v3 = 35;
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
 printf(aEdgeL402D, 48);
}


/* Function: main @ 0xEE0 */
int main(int argc, const char **argv, const char **envp)
{
 test_obf_opt_edge();
 return 0;
}


/* Function: .term_proc @ 0xEF8 */
void term_proc()
{
 ;
}


/* FAILED to decompile: strlen @ 0x12348 */

/* FAILED to decompile: _setjmp @ 0x12350 */

/* FAILED to decompile: __libc_start_main @ 0x12358 */

/* FAILED to decompile: __cxa_finalize @ 0x12360 */

/* FAILED to decompile: signal @ 0x12368 */

/* FAILED to decompile: abort @ 0x12370 */

/* FAILED to decompile: puts @ 0x12378 */

/* FAILED to decompile: longjmp @ 0x12380 */

/* FAILED to decompile: strncpy @ 0x12388 */

/* FAILED to decompile: printf @ 0x12390 */

/* FAILED to decompile: __gmon_start__ @ 0x123A0 */

/* Total functions decompiled: 43, failed: 11 */
