#include <signal.h>
#include <setjmp.h>
#include <string.h>
#include <stdio.h>

/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
/* size_t and ssize_t are defined in standard headers */
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

typedef int bool;
#define true 1
#define false 0

typedef void (*__sighandler_t)(int);

/* Global variables for exception handling */
jmp_buf jmp_buffer;
jmp_buf segv_buffer;
int div_zero_caught = 0;
int segv_caught = 0;

/* CRT stub function that was removed */
int call_weak_fn()
{
 return 0;
}

/* Decompiler macro JUMPOUT */
#define JUMPOUT(x) return

/* Data section items from decompiled binary */
const char param_string_encryption_encrypted[32] = {0};
const unsigned int dword_1030[8] = {0};
const unsigned int dword_1010[8] = {0};
const char asc_1221[] = "Test String";
const char aObfL402D[] = "Value: %d\n";
const char aObfL403D[] = "Obf L4.02: %d\n";
const char aObfL404D[] = "Obf L4.03: %d\n";
const char aObfL405D[] = "Obf L4.04: %d\n";
const char aOptL401[] = "Opt L4.01: %d\n";
const char aOptL401_0[] = "Opt L4.02: %d\n";
const char aOptL402[] = "Opt L4.03: %d\n";
const char aOptL501LtoD[] = "Opt L5.01 LtoD: %d\n";
const char aEdgeL301D[] = "Edge L3.01: %d\n";
const char aEdgeL302D[] = "Edge L3.02: %d\n";
const char aEdgeL303D[] = "Edge L3.03: %d\n";
const char aEdgeL304D[] = "Edge L3.04: %d\n";
const char aEdgeL401D[] = "Edge L4.01: %d\n";
const char aEdgeL402D[] = "Edge L4.02: %d\n";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/7/7_clang_Os_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x4AC */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_4B8 @ 0x4B8 */
void sub_4B8()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: param_fake_branch @ 0x6D0 */
int param_fake_branch(int x)
{
 return x;
}


/* Function: call_fake_branch @ 0x6D4 */
int call_fake_branch()
{
 return 10;
}


/* Function: param_opaque_predicate @ 0x6DC */
int param_opaque_predicate(int x)
{
 int v1; // r4
 int v2; // r7
 int v3; // r6
 int v4; // r5
 int v5; // r1
 int result; // r0

 v1 = x;
 v2 = x + 1;
 v3 = 2 * x;
 v4 = -1;
 if ( x != -1 )
 {
 v5 = x + 1;
 do
 {
 v4 = v5;
 v5 = x % v5;
 x = v4;
 }
 while ( v5 );
 }
 result = 3 * v1 + 20;
 if ( !(((v3 | 1) + v1 * v1) ^ (v2 * v2) | v4 ^ 1) )
 return v3 + 10;
 return result;
}


/* Function: call_opaque_predicate @ 0x73C */
int call_opaque_predicate()
{
 int v0; // r1
 int v1; // r0
 int v2; // r4
 int result; // r0

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


/* Function: param_instruction_substitution @ 0x770 */
int param_instruction_substitution(int x)
{
 return (x & 0xF) + ((unsigned int)x >> 1) + 21 * x;
}


/* Function: call_instruction_substitution @ 0x788 */
int call_instruction_substitution()
{
 return 225;
}


/* Function: decrypt_string @ 0x790 */
const char * decrypt_string(const char *encrypted, char *buffer, size_t len, char key)
{
 char v7; // r0
 char *v8; // r1

 strncpy(buffer, encrypted, len);
 buffer[len - 1] = 0;
 v7 = *buffer;
 if ( *buffer )
 {
 v8 = buffer + 1;
 do
 {
 *(v8 - 1) = v7 ^ key;
 v7 = (unsigned char)*v8++;
 }
 while ( v7 );
 }
 return buffer;
}


/* Function: param_string_encryption @ 0x7EC */
int param_string_encryption()
{
 char *v0; // r0
 int v1; // r1
 int v2; // r4
 unsigned char *v3; // r0
 char v5[40]; // [sp+0h] [bp-28h] BYREF

 v0 = strncpy(v5, param_string_encryption_encrypted, 0x20u);
 v1 = v5[0];
 v2 = 0;
 v5[31] = 0;
 if ( v5[0] )
 {
 v3 = (unsigned char *)(v0 + 1);
 do
 {
 *(v3 - 1) = v1 ^ 0x5A;
 v1 = *v3++;
 }
 while ( v1 );
 v2 = (unsigned char)v5[0];
 }
 return strlen(v5) + v2;
}


/* Function: call_string_encryption @ 0x858 */
// attributes: thunk
int call_string_encryption()
{
 return param_string_encryption();
}


/* Function: param_tail_call_optimized @ 0x85C */
int param_tail_call_optimized(int n, int acc)
{
 if ( n >= 1 )
 return acc + n + (n - 1) * (n - 1) - ((long long)((unsigned int)(n - 1) * (unsigned long long)(unsigned int)(n - 2)) >> 1);
 return acc;
}


/* Function: call_tail_call_optimized @ 0x898 */
int call_tail_call_optimized()
{
 return 500500;
}


/* Function: param_non_tail_call @ 0x8A4 */
int param_non_tail_call(int n)
{
 if ( n >= 1 )
 return n + (n - 1) * (n - 1) - ((long long)((unsigned int)(n - 1) * (unsigned long long)(unsigned int)(n - 2)) >> 1);
 else
 return 0;
}


/* Function: call_non_tail_call @ 0x8D4 */
int call_non_tail_call()
{
 return 5050;
}


/* Function: param_vectorized_loop @ 0x8E0 */
int param_vectorized_loop(int *a, int *b, int *c, int n)
{
 int result; // r0
 int *v6; // lr
 int v7; // r4
 int v8; // r5
 int v9; // t1
 int v10; // t1
 int v11; // t1

 result = 0;
 if ( n >= 1 )
 {
 v6 = c;
 v7 = n;
 do
 {
 v9 = *a++;
 v8 = v9;
 v10 = *b++;
 --v7;
 *v6++ = v10 + v8;
 }
 while ( v7 );
 result = 0;
 do
 {
 v11 = *c++;
 --n;
 result += v11;
 }
 while ( n );
 }
 return result;
}


/* Function: call_vectorized_loop @ 0x938 */
int call_vectorized_loop()
{
 int v0; // r5
 int v1; // r1
 int result; // r0
 int v3; // r2
 unsigned int v4[12]; // [sp+0h] [bp-30h] BYREF

 v0 = 0;
 memset(v4, 0, 0x20u);
 do
 {
 v4[v0] = dword_1030[v0] + dword_1010[v0];
 ++v0;
 }
 while ( v0 != 8 );
 v1 = 0;
 result = 0;
 do
 {
 v3 = v4[v1++];
 result += v3;
 }
 while ( v1 != 8 );
 return result;
}


/* Function: param_link_time_optimization @ 0x9B4 */
int param_link_time_optimization(int x)
{
 return 2 * x + 10;
}


/* Function: call_link_time_optimization @ 0x9C0 */
int call_link_time_optimization()
{
 return 20;
}


/* Function: div_zero_handler @ 0x9C8 */
void div_zero_handler(int sig)
{
 div_zero_caught = 1;
 longjmp(jmp_buffer, 1);
}


/* Function: param_division_by_zero @ 0x9F0 */
int param_division_by_zero(int x)
{
 bool v2; // zf
 int result; // r0

 signal(8, (__sighandler_t)div_zero_handler);
 v2 = setjmp(jmp_buffer) == 0;
 result = -1;
 if ( v2 )
 return 10 / x;
 return result;
}


/* Function: call_division_by_zero @ 0xA40 */
int call_division_by_zero()
{
 int v0; // r4
 int v1; // r5

 v0 = param_division_by_zero(5);
 v1 = param_division_by_zero(0);
 signal(8, 0);
 return v1 + v0;
}


/* Function: segv_handler @ 0xA74 */
void segv_handler(int sig)
{
 segv_caught = 1;
 longjmp(segv_buffer, 1);
}


/* Function: param_null_pointer_deref @ 0xA9C */
int param_null_pointer_deref(int *p)
{
 bool v2; // zf
 int result; // r0

 signal(11, (__sighandler_t)segv_handler);
 v2 = setjmp(segv_buffer) == 0;
 result = -1;
 if ( v2 )
 return *p;
 return result;
}


/* Function: call_null_pointer_deref @ 0xAE0 */
int call_null_pointer_deref()
{
 int v0; // r4
 int v1; // r5
 int p; // [sp+4h] [bp-14h] BYREF

 p = 42;
 v0 = param_null_pointer_deref(&p);
 v1 = param_null_pointer_deref(0);
 signal(11, 0);
 return v1 + v0;
}


/* Function: param_buffer_overflow_stack @ 0xB24 */
int param_buffer_overflow_stack(int x)
{
 return x;
}


/* Function: param_buffer_overflow_heap @ 0xB28 */
int param_buffer_overflow_heap(int x)
{
 return x;
}


/* Function: call_buffer_overflow @ 0xB2C */
int call_buffer_overflow()
{
 return 30;
}


/* Function: param_integer_overflow @ 0xB34 */
int param_integer_overflow(int a, int b)
{
 bool v2; // cc
 int v3; // r3
 int v4; // r0
 int v5; // r2

 v2 = a < 1;
 v3 = b + a;
 if ( a >= 1 )
 v2 = b < 1;
 if ( v2 || (v5 = -1, v3 >= 0) )
 {
 v4 = b & a;
 v5 = v3;
 if ( v3 > 0 )
 v5 = -2;
 if ( v4 >= 0 )
 return v3;
 }
 return v5;
}


/* Function: call_integer_overflow @ 0xB74 */
int call_integer_overflow()
{
 return 2000000000;
}


/* Function: param_undefined_behavior @ 0xB80 */
int param_undefined_behavior(int i)
{
 return 2 * i;
}


/* Function: call_undefined_behavior @ 0xB88 */
int call_undefined_behavior()
{
 return 10;
}


/* Function: param_implementation_defined @ 0xB90 */
int param_implementation_defined()
{
 return 44;
}


/* Function: call_implementation_defined @ 0xB98 */
int call_implementation_defined()
{
 return 44;
}


/* Function: test_obf_opt_edge @ 0xBA0 */
void test_obf_opt_edge()
{
 int v0; // r1
 int v1; // r0
 int v2; // r4
 int v3; // r1
 int v4; // r0
 int v5; // r0
 int v6; // r0
 int v7; // r0

 puts(asc_1221);
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
 printf(aEdgeL402D, 44);
}


/* Function: main @ 0xD10 */
int main(int argc, const char **argv, const char **envp)
{
 test_obf_opt_edge();
 return 0;
}



/* CRT stub function __divsi3 removed by preprocessor */




/* CRT stub function .divsi3_skip_div0_test removed by preprocessor */




/* CRT stub function __aeabi_idivmod removed by preprocessor */




/* CRT stub function __aeabi_ldiv0 removed by preprocessor */



/* Function: .term_proc @ 0xF74 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp_raise @ 0x123C4 */

/* FAILED to decompile: __imp___libc_start_main @ 0x123C8 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x123CC */

/* FAILED to decompile: __imp_printf @ 0x123D0 */

/* FAILED to decompile: __imp_longjmp @ 0x123D4 */

/* FAILED to decompile: __imp__setjmp @ 0x123D8 */

/* FAILED to decompile: __imp_signal @ 0x123DC */

/* FAILED to decompile: __imp_puts @ 0x123E0 */

/* FAILED to decompile: __imp_strlen @ 0x123E4 */

/* FAILED to decompile: __imp_memset @ 0x123E8 */

/* FAILED to decompile: __imp_strncpy @ 0x123EC */

/* FAILED to decompile: __imp_abort @ 0x123F0 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x123F8 */

/* Total functions decompiled: 47, failed: 13 */
