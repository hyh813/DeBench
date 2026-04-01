/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;

typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Required headers for signal handling and setjmp/longjmp */
#include <signal.h>
#include <setjmp.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/* Global variables for signal handling */
jmp_buf jmp_buffer;
jmp_buf segv_buffer;
int div_zero_caught;
int segv_caught;

/* Encrypted string data */
const char *encrypted_0 = "Zntgvivgl";

/* Format strings for printf */
const char *s = "Starting tests...\n";
const char *format = "Fake branch result: %d\n";
const char *aObfL403D = "Opaque predicate result: %d\n";
const char *aObfL404D = "Instruction substitution result: %d\n";
const char *aObfL405D = "String encryption result: %lu\n";
const char *aOptL401 = "Tail call optimized result: %d\n";
const char *aOptL401_0 = "Non-tail call result: %d\n";
const char *aOptL402 = "Vectorized loop result: %d\n";
const char *aOptL501LtoD = "LTO result: %d\n";
const char *aEdgeL301D = "Division by zero result: %d\n";
const char *aEdgeL302D = "Null pointer deref result: %d\n";
const char *aEdgeL303D = "Buffer overflow result: %d\n";
const char *aEdgeL304D = "Integer overflow result: %d\n";
const char *aEdgeL401D = "Undefined behavior result: %d\n";
const char *aEdgeL402D = "Implementation defined result: %d\n";

/* Signal handler type */
typedef void (*__sighandler_t)(int);

/* Macro for JUMPOUT - used in decompiled code */
#define JUMPOUT(x) return

/* Weak function stub */
int call_weak_fn()
{
 return 0;
}

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/7/7_gcc_O0_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x104E4 */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_104F0 @ 0x104F0 */
void sub_104F0()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: param_fake_branch @ 0x106B0 */
int param_fake_branch(int x)
{
 return x;
}


/* Function: call_fake_branch @ 0x106E8 */
int call_fake_branch()
{
 return param_fake_branch(10);
}


/* Function: param_opaque_predicate @ 0x10704 */
int param_opaque_predicate(int x)
{
 int a; // [sp+8h] [bp-1Ch]
 int b; // [sp+Ch] [bp-18h]
 int temp; // [sp+1Ch] [bp-8h]

 a = x;
 b = x + 1;
 while ( b )
 {
 temp = b;
 b = a % b;
 a = temp;
 }
 if ( x * x + 2 * x + 1 == (x + 1) * (x + 1) && a == 1 )
 return 2 * (x + 5);
 else
 return 3 * x + 20;
}


/* Function: call_opaque_predicate @ 0x10814 */
int call_opaque_predicate()
{
 return param_opaque_predicate(5);
}


/* Function: param_instruction_substitution @ 0x10830 */
int param_instruction_substitution(int x)
{
 return 6 * x + ((unsigned int)x >> 1) + (x & 0xF) + 15 * x;
}


/* Function: call_instruction_substitution @ 0x108C0 */
int call_instruction_substitution()
{
 return param_instruction_substitution(10);
}


/* Function: decrypt_string @ 0x108DC */
const char * decrypt_string(const char *encrypted, char *buffer, size_t len, char key)
{
 char *p; // [sp+14h] [bp-8h]

 strncpy(buffer, encrypted, len);
 buffer[len - 1] = 0;
 for ( p = buffer; *p; ++p )
 *p ^= key;
 return buffer;
}


/* Function: param_string_encryption @ 0x10974 */
size_t param_string_encryption()
{
 char decrypted[32]; // [sp+4h] [bp-28h] BYREF

 decrypt_string(encrypted_0, decrypted, 0x20u, 90);
 return strlen(decrypted) + (unsigned char)decrypted[0];
}


/* Function: call_string_encryption @ 0x109EC */
size_t call_string_encryption()
{
 return param_string_encryption();
}


/* Function: param_tail_call_optimized @ 0x10A04 */
int param_tail_call_optimized(int n, int acc)
{
 if ( n > 0 )
 return param_tail_call_optimized(n - 1, acc + n);
 else
 return acc;
}


/* Function: call_tail_call_optimized @ 0x10A58 */
int call_tail_call_optimized()
{
 return param_tail_call_optimized(1000, 0);
}


/* Function: param_non_tail_call @ 0x10A78 */
int param_non_tail_call(int n)
{
 if ( n > 0 )
 return param_non_tail_call(n - 1) + n;
 else
 return 0;
}


/* Function: call_non_tail_call @ 0x10AC4 */
int call_non_tail_call()
{
 return param_non_tail_call(100);
}


/* Function: param_vectorized_loop @ 0x10AE0 */
int param_vectorized_loop(int *a, int *b, int *c, int n)
{
 int i; // [sp+14h] [bp-10h]
 int sum; // [sp+18h] [bp-Ch]
 int i_0; // [sp+1Ch] [bp-8h]

 for ( i = 0; i < n; ++i )
 c[i] = a[i] + b[i];
 sum = 0;
 for ( i_0 = 0; i_0 < n; ++i_0 )
 sum += c[i_0];
 return sum;
}


/* Function: call_vectorized_loop @ 0x10BC8 */
int call_vectorized_loop()
{
 int a[8]; // [sp+4h] [bp-68h] BYREF
 int b[8]; // [sp+24h] [bp-48h] BYREF
 int c[8]; // [sp+44h] [bp-28h] BYREF

 a[0] = 1;
 a[1] = 2;
 a[2] = 3;
 a[3] = 4;
 a[4] = 5;
 a[5] = 6;
 a[6] = 7;
 a[7] = 8;
 b[0] = 8;
 b[1] = 7;
 b[2] = 6;
 b[3] = 5;
 b[4] = 4;
 b[5] = 3;
 b[6] = 2;
 b[7] = 1;
 memset(c, 0, sizeof(c));
 return param_vectorized_loop(a, b, c, 8);
}


/* Function: lto_target_func @ 0x10C7C */
int lto_target_func(int x)
{
 return 2 * (x + 5);
}


/* Function: param_link_time_optimization @ 0x10CA8 */
int param_link_time_optimization(int x)
{
 return lto_target_func(x);
}


/* Function: call_link_time_optimization @ 0x10CD0 */
int call_link_time_optimization()
{
 return param_link_time_optimization(5);
}


/* Function: div_zero_handler @ 0x10CEC */
void div_zero_handler(int sig)
{
 div_zero_caught = 1;
 longjmp(jmp_buffer, 1);
}


/* Function: param_division_by_zero @ 0x10D1C */
int param_division_by_zero(int x)
{
 signal(8, (__sighandler_t)div_zero_handler);
 if ( setjmp(jmp_buffer) )
 return -1;
 else
 return 10 / x;
}


/* Function: call_division_by_zero @ 0x10D80 */
int call_division_by_zero()
{
 int r1; // [sp+0h] [bp-Ch]
 int r2; // [sp+4h] [bp-8h]

 r1 = param_division_by_zero(5);
 r2 = param_division_by_zero(0);
 signal(8, 0);
 return r1 + r2;
}


/* Function: segv_handler @ 0x10DC8 */
void segv_handler(int sig)
{
 segv_caught = 1;
 longjmp(segv_buffer, 1);
}


/* Function: param_null_pointer_deref @ 0x10DF8 */
int param_null_pointer_deref(int *p)
{
 signal(11, (__sighandler_t)segv_handler);
 if ( setjmp(segv_buffer) )
 return -1;
 else
 return *p;
}


/* Function: call_null_pointer_deref @ 0x10E54 */
int call_null_pointer_deref()
{
 int valid; // [sp+0h] [bp-14h] BYREF
 int r1; // [sp+4h] [bp-10h]
 int r2; // [sp+8h] [bp-Ch]

 valid = 42;
 r1 = param_null_pointer_deref(&valid);
 r2 = param_null_pointer_deref(0);
 signal(11, 0);
 return r1 + r2;
}


/* Function: param_buffer_overflow_stack @ 0x10ED8 */
int param_buffer_overflow_stack(int x)
{
 int i; // [sp+Ch] [bp-18h]
 char buffer[8]; // [sp+14h] [bp-10h]

 for ( i = 0; i <= 16; ++i )
 buffer[i] = 65;
 return x;
}


/* Function: param_buffer_overflow_heap @ 0x10F84 */
int param_buffer_overflow_heap(int x)
{
 int i; // [sp+8h] [bp-Ch]
 char *heap_buffer; // [sp+Ch] [bp-8h]

 heap_buffer = (char *)malloc(0x10u);
 if ( !heap_buffer )
 return -2;
 for ( i = 0; i <= 32; ++i )
 heap_buffer[i] = 66;
 free(heap_buffer);
 return x;
}


/* Function: call_buffer_overflow @ 0x11008 */
int call_buffer_overflow()
{
 int r1; // [sp+0h] [bp-Ch]

 r1 = param_buffer_overflow_stack(10);
 return r1 + param_buffer_overflow_heap(20);
}


/* Function: param_integer_overflow @ 0x11044 */
int param_integer_overflow(int a, int b)
{
 int signed_sum; // [sp+8h] [bp-14h]

 signed_sum = a + b;
 if ( a > 0 && b > 0 && signed_sum < 0 )
 return -1;
 if ( a >= 0 || b >= 0 || signed_sum <= 0 )
 return a + b;
 return -2;
}


/* Function: call_integer_overflow @ 0x110F4 */
int call_integer_overflow()
{
 int r1; // [sp+0h] [bp-Ch]

 r1 = param_integer_overflow(1000000000, 1000000000);
 return r1 + param_integer_overflow(-1, 1);
}


/* Function: param_undefined_behavior @ 0x1113C */
int param_undefined_behavior(int i)
{
 return 2 * i;
}


/* Function: call_undefined_behavior @ 0x1116C */
int call_undefined_behavior()
{
 return param_undefined_behavior(5);
}


/* Function: param_implementation_defined @ 0x11194 */
int param_implementation_defined()
{
 return 44;
}


/* Function: call_implementation_defined @ 0x1125C */
int call_implementation_defined()
{
 return param_implementation_defined();
}


/* Function: test_obf_opt_edge @ 0x11274 */
void test_obf_opt_edge()
{
 int v0; // r0
 int v1; // r0
 int v2; // r0
 size_t v3; // r0
 int v4; // r0
 int v5; // r0
 int v6; // r0
 int v7; // r0
 int v8; // r0
 int v9; // r0
 int v10; // r0
 int v11; // r0
 int v12; // r0
 int v13; // r0

 puts(s);
 v0 = call_fake_branch();
 printf(format, v0);
 v1 = call_opaque_predicate();
 printf(aObfL403D, v1);
 v2 = call_instruction_substitution();
 printf(aObfL404D, v2);
 v3 = call_string_encryption();
 printf(aObfL405D, v3);
 v4 = call_tail_call_optimized();
 printf(aOptL401, v4);
 v5 = call_non_tail_call();
 printf(aOptL401_0, v5);
 v6 = call_vectorized_loop();
 printf(aOptL402, v6);
 v7 = call_link_time_optimization();
 printf(aOptL501LtoD, v7);
 v8 = call_division_by_zero();
 printf(aEdgeL301D, v8);
 v9 = call_null_pointer_deref();
 printf(aEdgeL302D, v9);
 v10 = call_buffer_overflow();
 printf(aEdgeL303D, v10);
 v11 = call_integer_overflow();
 printf(aEdgeL304D, v11);
 v12 = call_undefined_behavior();
 printf(aEdgeL401D, v12);
 v13 = call_implementation_defined();
 printf(aEdgeL402D, v13);
}


/* Function: main @ 0x113E0 */
int main(int argc, const char **argv, const char **envp)
{
 test_obf_opt_edge();
 return 0;
}



/* CRT stub function __divsi3 removed by preprocessor */




/* CRT stub function .divsi3_skip_div0_test removed by preprocessor */




/* CRT stub function __aeabi_idivmod removed by preprocessor */




/* CRT stub function __aeabi_ldiv0 removed by preprocessor */



/* Function: .term_proc @ 0x11648 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp_longjmp @ 0x22388 */

/* FAILED to decompile: __imp_puts @ 0x2238C */

/* FAILED to decompile: __imp_strlen @ 0x22390 */

/* FAILED to decompile: __imp_memset @ 0x22394 */

/* FAILED to decompile: __imp_raise @ 0x22398 */

/* FAILED to decompile: __imp_printf @ 0x2239C */

/* FAILED to decompile: __imp__setjmp @ 0x223A0 */

/* FAILED to decompile: __imp_free @ 0x223A4 */

/* FAILED to decompile: __imp_signal @ 0x223A8 */

/* FAILED to decompile: __imp_malloc @ 0x223AC */

/* FAILED to decompile: __imp_strncpy @ 0x223B0 */

/* FAILED to decompile: __imp_abort @ 0x223B4 */

/* FAILED to decompile: __imp___libc_start_main @ 0x223B8 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x223BC */

/* FAILED to decompile: __imp___gmon_start__ @ 0x223C0 */

/* Total functions decompiled: 48, failed: 15 */
