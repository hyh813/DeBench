/* Auto-injected type definitions by preprocessor */
#include <setjmp.h>
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Global variables */
typedef void (*__sighandler_t)(int);
#define JUMPOUT(x) return
int call_weak_fn() { return 0; }
jmp_buf jmp_buffer;
jmp_buf segv_buffer;
int div_zero_caught;
int segv_caught;
const char *encrypted_0 = "Hello, World!";
const char *s = "test";
const char *format = "%d";
const char *aObfL403D = "ObfL403: %d\n";
const char *aObfL404D = "ObfL404: %d\n";
const char *aObfL405D = "ObfL405: %zu\n";
const char *aOptL401 = "OptL401: %d\n";
const char *aOptL401_0 = "OptL401_0: %d\n";
const char *aOptL402 = "OptL402: %d\n";
const char *aOptL501LtoD = "OptL501Lto: %d\n";
const char *aEdgeL301D = "EdgeL301: %d\n";
const char *aEdgeL302D = "EdgeL302: %d\n";
const char *aEdgeL303D = "EdgeL303: %d\n";
const char *aEdgeL304D = "EdgeL304: %d\n";
const char *aEdgeL401D = "EdgeL401: %d\n";
const char *aEdgeL402D = "EdgeL402: %d\n";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/7/7_gcc_O0_no_g
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
void param_fake_branch()
{
 ;
}


/* Function: call_fake_branch @ 0x106E8 */
void call_fake_branch()
{
 param_fake_branch();
}


/* Function: param_opaque_predicate @ 0x10704 */
int param_opaque_predicate(int a1)
{
 int v3; // [sp+8h] [bp-1Ch]
 int v4; // [sp+Ch] [bp-18h]
 int v5; // [sp+1Ch] [bp-8h]

 v3 = a1;
 v4 = a1 + 1;
 while ( v4 )
 {
 v5 = v4;
 v4 = v3 % v4;
 v3 = v5;
 }
 if ( a1 * a1 + 2 * a1 + 1 == (a1 + 1) * (a1 + 1) && v3 == 1 )
 return 2 * (a1 + 5);
 else
 return 3 * a1 + 20;
}


/* Function: call_opaque_predicate @ 0x10814 */
int call_opaque_predicate()
{
 return param_opaque_predicate(5);
}


/* Function: param_instruction_substitution @ 0x10830 */
int param_instruction_substitution(unsigned int a1)
{
 return 6 * a1 + (a1 >> 1) + (a1 & 0xF) + 15 * a1;
}


/* Function: call_instruction_substitution @ 0x108C0 */
int call_instruction_substitution()
{
 return param_instruction_substitution(0xAu);
}


/* Function: decrypt_string @ 0x108DC */
char * decrypt_string(const char *a1, char *a2, size_t a3, char a4)
{
 char *i; // [sp+14h] [bp-8h]

 strncpy(a2, a1, a3);
 a2[a3 - 1] = 0;
 for ( i = a2; *i; ++i )
 *i ^= a4;
 return a2;
}


/* Function: param_string_encryption @ 0x10974 */
size_t param_string_encryption()
{
 char s[32]; // [sp+4h] [bp-28h] BYREF

 decrypt_string(encrypted_0, s, 0x20u, 90);
 return strlen(s) + (unsigned char)s[0];
}


/* Function: call_string_encryption @ 0x109EC */
size_t call_string_encryption()
{
 return param_string_encryption();
}


/* Function: param_tail_call_optimized @ 0x10A04 */
int param_tail_call_optimized(int a1, int a2)
{
 if ( a1 > 0 )
 return param_tail_call_optimized(a1 - 1, a2 + a1);
 else
 return a2;
}


/* Function: call_tail_call_optimized @ 0x10A58 */
int call_tail_call_optimized()
{
 return param_tail_call_optimized(1000, 0);
}


/* Function: param_non_tail_call @ 0x10A78 */
int param_non_tail_call(int a1)
{
 if ( a1 > 0 )
 return param_non_tail_call(a1 - 1) + a1;
 else
 return 0;
}


/* Function: call_non_tail_call @ 0x10AC4 */
int call_non_tail_call()
{
 return param_non_tail_call(100);
}


/* Function: param_vectorized_loop @ 0x10AE0 */
int param_vectorized_loop(int a1, int a2, int a3, int a4)
{
 int i; // [sp+14h] [bp-10h]
 int v6; // [sp+18h] [bp-Ch]
 int j; // [sp+1Ch] [bp-8h]

 for ( i = 0; i < a4; ++i )
 *(unsigned int *)(a3 + 4 * i) = *(unsigned int *)(a1 + 4 * i) + *(unsigned int *)(a2 + 4 * i);
 v6 = 0;
 for ( j = 0; j < a4; ++j )
 v6 += *(unsigned int *)(a3 + 4 * j);
 return v6;
}


/* Function: call_vectorized_loop @ 0x10BC8 */
int call_vectorized_loop()
{
 unsigned int v1[8]; // [sp+4h] [bp-68h] BYREF
 unsigned int v2[8]; // [sp+24h] [bp-48h] BYREF
 unsigned char s[32]; // [sp+44h] [bp-28h] BYREF

 v1[0] = 1;
 v1[1] = 2;
 v1[2] = 3;
 v1[3] = 4;
 v1[4] = 5;
 v1[5] = 6;
 v1[6] = 7;
 v1[7] = 8;
 v2[0] = 8;
 v2[1] = 7;
 v2[2] = 6;
 v2[3] = 5;
 v2[4] = 4;
 v2[5] = 3;
 v2[6] = 2;
 v2[7] = 1;
 memset(s, 0, sizeof(s));
 return param_vectorized_loop((int)v1, (int)v2, (int)s, 8);
}


/* Function: lto_target_func @ 0x10C7C */
int lto_target_func(int a1)
{
 return 2 * (a1 + 5);
}


/* Function: param_link_time_optimization @ 0x10CA8 */
int param_link_time_optimization(int a1)
{
 return lto_target_func(a1);
}


/* Function: call_link_time_optimization @ 0x10CD0 */
int call_link_time_optimization()
{
 return param_link_time_optimization(5);
}


/* Function: div_zero_handler @ 0x10CEC */
void div_zero_handler(int a1)
{
 div_zero_caught = 1;
 longjmp(jmp_buffer, 1);
}


/* Function: param_division_by_zero @ 0x10D1C */
int param_division_by_zero(int a1)
{
 signal(8, (__sighandler_t)div_zero_handler);
 if ( setjmp(jmp_buffer) )
 return -1;
 else
 return 10 / a1;
}


/* Function: call_division_by_zero @ 0x10D80 */
int call_division_by_zero()
{
 int v1; // [sp+0h] [bp-Ch]
 int v2; // [sp+4h] [bp-8h]

 v1 = param_division_by_zero(5);
 v2 = param_division_by_zero(0);
 signal(8, 0);
 return v1 + v2;
}


/* Function: segv_handler @ 0x10DC8 */
void segv_handler(int a1)
{
 segv_caught = 1;
 longjmp(segv_buffer, 1);
}


/* Function: param_null_pointer_deref @ 0x10DF8 */
int param_null_pointer_deref(int a1)
{
 signal(11, (__sighandler_t)segv_handler);
 if ( setjmp(segv_buffer) )
 return -1;
 else
 return *(unsigned int *)a1;
}


/* Function: call_null_pointer_deref @ 0x10E54 */
int call_null_pointer_deref()
{
 int v1; // [sp+0h] [bp-14h] BYREF
 int v2; // [sp+4h] [bp-10h]
 int v3; // [sp+8h] [bp-Ch]

 v1 = 42;
 v2 = param_null_pointer_deref((int)&v1);
 v3 = param_null_pointer_deref(0);
 signal(11, 0);
 return v2 + v3;
}


/* Function: param_buffer_overflow_stack @ 0x10ED8 */
void param_buffer_overflow_stack()
{
 int i; // [sp+Ch] [bp-18h]
 unsigned char v1[8]; // [sp+14h] [bp-10h]

 for ( i = 0; i <= 16; ++i )
 v1[i] = 65;
}


/* Function: param_buffer_overflow_heap @ 0x10F84 */
int param_buffer_overflow_heap(int a1)
{
 int i; // [sp+8h] [bp-Ch]
 unsigned char *ptr; // [sp+Ch] [bp-8h]

 ptr = malloc(0x10u);
 if ( !ptr )
 return -2;
 for ( i = 0; i <= 32; ++i )
 ptr[i] = 66;
 free(ptr);
 return a1;
}


/* Function: call_buffer_overflow @ 0x11008 */
int call_buffer_overflow()
{
 int v0; // r0

 param_buffer_overflow_stack();
 return v0 + param_buffer_overflow_heap(20);
}


/* Function: param_integer_overflow @ 0x11044 */
int param_integer_overflow(int a1, int a2)
{
 int v4; // [sp+8h] [bp-14h]

 v4 = a1 + a2;
 if ( a1 > 0 && a2 > 0 && v4 < 0 )
 return -1;
 if ( a1 >= 0 || a2 >= 0 || v4 <= 0 )
 return a1 + a2;
 return -2;
}


/* Function: call_integer_overflow @ 0x110F4 */
int call_integer_overflow()
{
 int v1; // [sp+0h] [bp-Ch]

 v1 = param_integer_overflow(1000000000, 1000000000);
 return v1 + param_integer_overflow(-1, 1);
}


/* Function: param_undefined_behavior @ 0x1113C */
int param_undefined_behavior(int a1)
{
 return 2 * a1;
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
int test_obf_opt_edge()
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
 call_fake_branch();
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
 return printf(aEdgeL402D, v13);
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
