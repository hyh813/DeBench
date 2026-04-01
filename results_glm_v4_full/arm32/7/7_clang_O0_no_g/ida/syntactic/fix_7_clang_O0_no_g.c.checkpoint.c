#include <setjmp.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
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
typedef void (*__sighandler_t)(int);

/* Global variables for exception handling */
int div_zero_caught = 0;
int segv_caught = 0;
jmp_buf jmp_buffer;
jmp_buf segv_buffer;

/* Function: call_weak_fn @ 0x4B0 */
int call_weak_fn()
{
 return 0;
}

/* Encrypted string data */
const char param_string_encryption_encrypted[32] = "encrypted_test_data_here!!!";

/* String constants for printf output */
const char asc_16A5[] = "Testing obfuscation and optimizations:\n";
const char aObfL402D[] = "Obf L4.02: %d\n";
const char aObfL403D[] = "Obf L4.03: %d\n";
const char aObfL404D[] = "Obf L4.04: %d\n";
const char aObfL405D[] = "Obf L4.05: %d\n";
const char aOptL401[] = "Opt L4.01: %d\n";
const char aOptL401_0[] = "Opt L4.01: %d\n";
const char aOptL402[] = "Opt L4.02: %d\n";
const char aOptL501LtoD[] = "Opt L5.01 (LTO): %d\n";
const char aEdgeL301D[] = "Edge L3.01: %d\n";
const char aEdgeL302D[] = "Edge L3.02: %d\n";
const char aEdgeL303D[] = "Edge L3.03: %d\n";
const char aEdgeL304D[] = "Edge L3.04: %d\n";
const char aEdgeL401D[] = "Edge L4.01: %d\n";
const char aEdgeL402D[] = "Edge L4.02: %d\n";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/7/7_clang_O0_no_g
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
 return;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: param_fake_branch @ 0x6D0 */
int param_fake_branch(int a1)
{
 int v2; // [sp+8h] [bp-8h]

 v2 = a1;
 if ( a1 * a1 <= -1 )
 v2 = 2 * a1 - 559038737;
 strlen("test");
 return v2;
}


/* Function: call_fake_branch @ 0x758 */
int call_fake_branch()
{
 return param_fake_branch(10);
}


/* Function: param_opaque_predicate @ 0x770 */
int param_opaque_predicate(int a1)
{
 int v2; // [sp+8h] [bp-18h]
 int v3; // [sp+Ch] [bp-14h]
 int v4; // [sp+10h] [bp-10h]

 v4 = a1;
 v3 = a1 + 1;
 while ( v3 )
 {
 v2 = v3;
 v3 = v4 % v3;
 v4 = v2;
 }
 if ( a1 * a1 + 2 * a1 - (a1 + 1) * (a1 + 1) == -1 && v4 == 1 )
 return 2 * a1 + 10;
 else
 return 3 * a1 + 20;
}


/* Function: call_opaque_predicate @ 0x878 */
int call_opaque_predicate()
{
 return param_opaque_predicate(5);
}


/* Function: param_instruction_substitution @ 0x890 */
int param_instruction_substitution(unsigned int a1)
{
 return 6 * a1 + (a1 >> 1) + (a1 & 0xF) + 15 * a1;
}


/* Function: call_instruction_substitution @ 0x900 */
int call_instruction_substitution()
{
 return param_instruction_substitution(0xAu);
}


/* Function: decrypt_string @ 0x918 */
char * decrypt_string(const char *a1, char *a2, size_t a3, char a4)
{
 char *i; // [sp+4h] [bp-14h]

 strncpy(a2, a1, a3);
 a2[a3 - 1] = 0;
 for ( i = a2; *i; ++i )
 *i ^= a4;
 return a2;
}


/* Function: param_string_encryption @ 0x9AC */
size_t param_string_encryption()
{
 char v1[32]; // [sp+8h] [bp-20h] BYREF

 decrypt_string(param_string_encryption_encrypted, v1, 0x20u, 90);
 return strlen(v1) + (unsigned char)v1[0];
}


/* Function: call_string_encryption @ 0x9F4 */
size_t call_string_encryption()
{
 return param_string_encryption();
}


/* Function: param_tail_call_optimized @ 0xA08 */
int param_tail_call_optimized(int a1, int a2)
{
 if ( a1 > 0 )
 return param_tail_call_optimized(a1 - 1, a2 + a1);
 else
 return a2;
}


/* Function: call_tail_call_optimized @ 0xA64 */
int call_tail_call_optimized()
{
 return param_tail_call_optimized(1000, 0);
}


/* Function: param_non_tail_call @ 0xA80 */
int param_non_tail_call(int a1)
{
 if ( a1 > 0 )
 return a1 + param_non_tail_call(a1 - 1);
 else
 return 0;
}


/* Function: call_non_tail_call @ 0xAE0 */
int call_non_tail_call()
{
 return param_non_tail_call(100);
}


/* Function: param_vectorized_loop @ 0xAF8 */
int param_vectorized_loop(int a1, int a2, int a3, int a4)
{
 int j; // [sp+0h] [bp-1Ch]
 int v6; // [sp+4h] [bp-18h]
 int i; // [sp+8h] [bp-14h]

 for ( i = 0; i < a4; ++i )
 *(unsigned int *)(a3 + 4 * i) = *(unsigned int *)(a1 + 4 * i) + *(unsigned int *)(a2 + 4 * i);
 v6 = 0;
 for ( j = 0; j < a4; ++j )
 v6 += *(unsigned int *)(a3 + 4 * j);
 return v6;
}


/* Function: call_vectorized_loop @ 0xBBC */
int call_vectorized_loop()
{
 unsigned int v1[8]; // [sp+0h] [bp-68h] BYREF
 unsigned int v2[8]; // [sp+20h] [bp-48h] BYREF
 unsigned int v3[10]; // [sp+40h] [bp-28h] BYREF

 v3[0] = 1;
 v3[1] = 2;
 v3[2] = 3;
 v3[3] = 4;
 v3[4] = 5;
 v3[5] = 6;
 v3[6] = 7;
 v3[7] = 8;
 v2[0] = 8;
 v2[1] = 7;
 v2[2] = 6;
 v2[3] = 5;
 v2[4] = 4;
 v2[5] = 3;
 v2[6] = 2;
 v2[7] = 1;
 memset(v1, 0, sizeof(v1));
 return param_vectorized_loop((int)v3, (int)v2, (int)v1, 8);
}


/* Function: param_link_time_optimization @ 0xC4C */
int param_link_time_optimization(int a1)
{
 return lto_target_func(a1);
}


/* Function: lto_target_func @ 0xC70 */
int lto_target_func(int a1)
{
 return 2 * a1 + 10;
}


/* Function: call_link_time_optimization @ 0xC8C */
int call_link_time_optimization()
{
 return param_link_time_optimization(5);
}


/* Function: div_zero_handler @ 0xCA4 */
void div_zero_handler()
{
 div_zero_caught = 1;
 longjmp(jmp_buffer, 1);
}


/* Function: param_division_by_zero @ 0xCD8 */
int param_division_by_zero(int a1)
{
 signal(8, (void (*)(int))div_zero_handler);
 if ( setjmp(jmp_buffer) )
 return -1;
 else
 return 10 / a1;
}


/* Function: call_division_by_zero @ 0xD50 */
int call_division_by_zero()
{
 int v1; // [sp+8h] [bp-8h]
 int v2; // [sp+Ch] [bp-4h]

 v2 = param_division_by_zero(5);
 v1 = param_division_by_zero(0);
 signal(8, 0);
 return v2 + v1;
}


/* Function: segv_handler @ 0xD9C */
void segv_handler()
{
 segv_caught = 1;
 longjmp(segv_buffer, 1);
}


/* Function: param_null_pointer_deref @ 0xDD0 */
int param_null_pointer_deref(int a1)
{
 signal(11, (void (*)(int))segv_handler);
 if ( setjmp(segv_buffer) )
 return -1;
 else
 return *(unsigned int *)a1;
}


/* Function: call_null_pointer_deref @ 0xE44 */
int call_null_pointer_deref()
{
 int v1; // [sp+4h] [bp-Ch]
 int v2; // [sp+8h] [bp-8h]
 int v3; // [sp+Ch] [bp-4h] BYREF

 v3 = 42;
 v2 = param_null_pointer_deref((int)&v3);
 v1 = param_null_pointer_deref(0);
 signal(11, 0);
 return v2 + v1;
}


/* Function: param_buffer_overflow_stack @ 0xE98 */
int param_buffer_overflow_stack(int a1)
{
 int i; // [sp+4h] [bp-14h]
 unsigned char v3[8]; // [sp+Ch] [bp-Ch]
 int v4; // [sp+14h] [bp-4h]

 v4 = a1;
 for ( i = 0; i <= 16; ++i )
 v3[i] = 65;
 return v4;
}


/* Function: param_buffer_overflow_heap @ 0xF24 */
int param_buffer_overflow_heap(int a1)
{
 int i; // [sp+0h] [bp-10h]
 unsigned char *ptr; // [sp+4h] [bp-Ch]

 ptr = malloc(0x10u);
 if ( !ptr )
 return -2;
 for ( i = 0; i <= 32; ++i )
 ptr[i] = 66;
 free(ptr);
 return a1;
}


/* Function: call_buffer_overflow @ 0xFC0 */
int call_buffer_overflow()
{
 int v1; // [sp+4h] [bp-4h]

 v1 = param_buffer_overflow_stack(10);
 return v1 + param_buffer_overflow_heap(20);
}


/* Function: param_integer_overflow @ 0xFFC */
int param_integer_overflow(int a1, int a2)
{
 int v3; // [sp+Ch] [bp-10h]

 v3 = a1 + a2;
 if ( a1 >= 1 && a2 >= 1 && v3 <= -1 )
 return -1;
 if ( a1 > -1 || a2 > -1 || v3 < 1 )
 return a1 + a2;
 return -2;
}


/* Function: call_integer_overflow @ 0x10C8 */
int call_integer_overflow()
{
 int v1; // [sp+4h] [bp-4h]

 v1 = param_integer_overflow(1000000000, 1000000000);
 return v1 + param_integer_overflow(-1, 1);
}


/* Function: param_undefined_behavior @ 0x1110 */
int param_undefined_behavior(int a1)
{
 return 2 * a1;
}


/* Function: call_undefined_behavior @ 0x1130 */
int call_undefined_behavior()
{
 return param_undefined_behavior(5);
}


/* Function: param_implementation_defined @ 0x1158 */
int param_implementation_defined()
{
 return 44;
}


/* Function: call_implementation_defined @ 0x1204 */
int call_implementation_defined()
{
 return param_implementation_defined();
}


/* Function: test_obf_opt_edge @ 0x1218 */
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

 printf(asc_16A5);
 v0 = call_fake_branch();
 printf(aObfL402D, v0);
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


/* Function: main @ 0x1388 */
int main(int argc, const char **argv, const char **envp)
{
 test_obf_opt_edge();
 return 0;
}



/* CRT stub function __divsi3 removed by preprocessor */




/* CRT stub function .divsi3_skip_div0_test removed by preprocessor */




/* CRT stub function __aeabi_idivmod removed by preprocessor */




/* CRT stub function __aeabi_ldiv0 removed by preprocessor */



/* Function: .term_proc @ 0x1604 */
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

/* FAILED to decompile: __imp_free @ 0x123DC */

/* FAILED to decompile: __imp_signal @ 0x123E0 */

/* FAILED to decompile: __imp_malloc @ 0x123E4 */

/* FAILED to decompile: __imp_strlen @ 0x123E8 */

/* FAILED to decompile: __imp_strncpy @ 0x123EC */

/* FAILED to decompile: __imp_abort @ 0x123F0 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x123F8 */

/* Total functions decompiled: 48, failed: 13 */
