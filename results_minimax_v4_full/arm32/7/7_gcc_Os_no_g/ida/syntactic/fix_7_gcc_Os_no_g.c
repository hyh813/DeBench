/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
#include <stddef.h>
#include <sys/types.h>

typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

#include <stdbool.h>
#include <setjmp.h>
#include <signal.h>
#include <stdlib.h>
#include <string.h>

/* Global variables */
int div_zero_caught;
int segv_caught;
jmp_buf jmp_buffer;
jmp_buf segv_buffer;

/* Decrypted string data */
char encrypted_0[32] = {0};  /* Placeholder - encrypted string placeholder */
char s[256] = {0};  /* String buffer for puts */

/* Format strings (from .rodata section) */
const char unk_11005[] = "Opaque predicate result: %d\n";
const char unk_11021[] = "Opaque predicate call: %d\n";
const char unk_1103D[] = "Instruction substitution: %d\n";
const char unk_1105A[] = "String encryption: %zu\n";
const char unk_11076[] = "Tail call optimized: %d\n";
const char unk_110A0[] = "Non-tail call: %d\n";
const char unk_110C5[] = "Vectorized loop: %d\n";
const char unk_110EB[] = "LTO result: %d\n";
const char unk_1110B[] = "Division by zero: %d\n";
const char unk_11127[] = "Null pointer deref: %d\n";
const char unk_11144[] = "Buffer overflow: %d\n";
const char unk_11161[] = "Integer overflow: %u\n";
const char unk_11192[] = "Undefined behavior: %d\n";
const char unk_111AF[] = "Implementation defined: %d\n";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/7/7_gcc_Os_no_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x10508 */
int init_proc()
{
 return 0;
}


/* Function: sub_10514 @ 0x10514 */
void sub_10514()
{
}


/* Function: main @ 0x105DC */
int main(int argc, const char **argv, const char **envp)
{
 test_obf_opt_edge(argc, argv, envp);
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: div_zero_handler @ 0x106E4 */
void div_zero_handler(int a1)
{
 div_zero_caught = 1;
 longjmp(jmp_buffer, 1);
}


/* Function: segv_handler @ 0x106FC */
void segv_handler(int a1)
{
 segv_caught = 1;
 longjmp(segv_buffer, 1);
}


/* Function: param_fake_branch @ 0x10718 */
void param_fake_branch()
{
 ;
}


/* Function: call_fake_branch @ 0x1071C */
int call_fake_branch()
{
 return 10;
}


/* Function: param_opaque_predicate @ 0x10724 */
int param_opaque_predicate(int result)
{
 int v1; // r7
 int v2; // r4
 int v3; // r6
 bool v4; // r5
 int v5; // r5
 int v6; // r1

 v1 = result + 1;
 v2 = result;
 v3 = 2 * result;
 v4 = result * result + 2 * result + 1 == (result + 1) * (result + 1);
 while ( v1 )
 {
 v6 = result % v1;
 result = v1;
 v1 = v6;
 }
 v5 = result == 1 && v4;
 if ( v5 )
 result = v3 + 10;
 else
 v3 += v2;
 if ( !v5 )
 return v3 + 20;
 return result;
}


/* Function: call_opaque_predicate @ 0x1078C */
int call_opaque_predicate()
{
 return param_opaque_predicate(5);
}


/* Function: param_instruction_substitution @ 0x10794 */
int param_instruction_substitution(unsigned int a1)
{
 return 6 * a1 + (a1 >> 1) + (a1 & 0xF) + 15 * a1;
}


/* Function: call_instruction_substitution @ 0x107B4 */
int call_instruction_substitution()
{
 return 225;
}


/* Function: decrypt_string @ 0x107BC */
char * decrypt_string(char *src, char *dest, size_t a3, char a4)
{
 char *i; // r1
 char v8; // r2
 int v9; // t1

 strncpy(dest, src, a3);
 dest[a3 - 1] = 0;
 for ( i = dest - 1; ; *i = v8 ^ a4 )
 {
 v9 = (unsigned char)*++i;
 v8 = v9;
 if ( !v9 )
 break;
 }
 return dest;
}


/* Function: param_string_encryption @ 0x10808 */
size_t param_string_encryption()
{
 char s[32]; // [sp+4h] [bp-2Ch] BYREF

 decrypt_string(&encrypted_0, s, 0x20u, 90);
 return (unsigned char)s[0] + strlen(s);
}


/* Function: call_string_encryption @ 0x10870 */
// attributes: thunk
size_t call_string_encryption()
{
 return param_string_encryption();
}


/* Function: param_tail_call_optimized @ 0x10874 */
int param_tail_call_optimized(int a1, int a2)
{
 int result; // r0

 result = a2;
 while ( a1 > 0 )
 result += a1--;
 return result;
}


/* Function: call_tail_call_optimized @ 0x10890 */
int call_tail_call_optimized()
{
 return 500500;
}


/* Function: param_non_tail_call @ 0x1089C */
int param_non_tail_call(int a1)
{
 int result; // r0

 result = 0;
 while ( a1 > 0 )
 result += a1--;
 return result;
}


/* Function: call_non_tail_call @ 0x108B8 */
int call_non_tail_call()
{
 return param_non_tail_call(100);
}


/* Function: param_vectorized_loop @ 0x108C0 */
int param_vectorized_loop(int a1, int a2, int a3, int a4)
{
 int v4; // r12
 int v5; // r1
 int result; // r0
 int v7; // r1
 int v8; // r12
 int v9; // r12

 v4 = 0;
 if ( a4 > 0 )
 {
 do
 {
 *(unsigned int *)(a3 + 4 * v4) = *(unsigned int *)(a1 + 4 * v4) + *(unsigned int *)(a2 + 4 * v4);
 ++v4;
 }
 while ( v4 < a4 );
 v7 = 0;
 result = 0;
 while ( v7 < a4 )
 {
 v8 = *(unsigned int *)(a3 + 4 * v7++);
 result += v8;
 }
 }
 else
 {
 v5 = 0;
 result = 0;
 while ( v5 < a4 )
 {
 v9 = *(unsigned int *)(a3 + 4 * v5++);
 result += v9;
 }
 }
 return result;
}


/* Function: call_vectorized_loop @ 0x1092C */
int call_vectorized_loop()
{
 unsigned int v1[8]; // [sp+4h] [bp-6Ch] BYREF
 unsigned int v2[8]; // [sp+24h] [bp-4Ch] BYREF
 unsigned char s[32]; // [sp+44h] [bp-2Ch] BYREF

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


/* Function: param_link_time_optimization @ 0x109C4 */
int param_link_time_optimization(int a1)
{
 return 2 * (a1 + 5);
}


/* Function: call_link_time_optimization @ 0x109D0 */
int call_link_time_optimization()
{
 return 20;
}


/* Function: param_division_by_zero @ 0x109D8 */
int param_division_by_zero(int a1)
{
 signal(8, (__sighandler_t)div_zero_handler);
 if ( setjmp(jmp_buffer) )
 return -1;
 else
 return 10 / a1;
}


/* Function: call_division_by_zero @ 0x10A1C */
int call_division_by_zero()
{
 int v0; // r5
 int v1; // r4

 v0 = param_division_by_zero(5);
 v1 = param_division_by_zero(0);
 signal(8, 0);
 return v0 + v1;
}


/* Function: param_null_pointer_deref @ 0x10A4C */
int param_null_pointer_deref(int a1)
{
 signal(11, (__sighandler_t)segv_handler);
 if ( setjmp(segv_buffer) )
 return -1;
 else
 return *(unsigned int *)a1;
}


/* Function: call_null_pointer_deref @ 0x10A88 */
int call_null_pointer_deref(int a1, int a2, int a3)
{
 int v3; // r4
 int v4; // r5
 unsigned int v6[6]; // [sp+0h] [bp-18h] BYREF

 v6[1] = a2;
 v6[2] = a3;
 v6[0] = 42;
 v3 = param_null_pointer_deref((int)v6);
 v4 = param_null_pointer_deref(0);
 signal(11, 0);
 return v3 + v4;
}


/* Function: param_buffer_overflow_stack @ 0x10AF4 */
void param_buffer_overflow_stack()
{
 ;
}


/* Function: param_buffer_overflow_heap @ 0x10AF8 */
int param_buffer_overflow_heap(int a1)
{
 void *v2; // r0

 v2 = malloc(0x10u);
 if ( !v2 )
 return -2;
 free(v2);
 return a1;
}


/* Function: call_buffer_overflow @ 0x10B24 */
int call_buffer_overflow()
{
 return param_buffer_overflow_heap(20) + 10;
}


/* Function: param_integer_overflow @ 0x10B38 */
int param_integer_overflow(int a1, signed int a2)
{
 bool v3; // cc
 int result; // r0

 v3 = a1 <= 0;
 if ( a1 > 0 )
 v3 = a2 <= 0;
 result = a1 + a2;
 if ( !v3 )
 return result | (result >> 31);
 if ( ((result > 0) & ((a1 & (unsigned int)a2) >> 31)) != 0 )
 return -2;
 return result;
}


/* Function: call_integer_overflow @ 0x10B70 */
int call_integer_overflow()
{
 return 2000000000;
}


/* Function: param_undefined_behavior @ 0x10B7C */
int param_undefined_behavior(int a1)
{
 return 2 * a1;
}


/* Function: call_undefined_behavior @ 0x10B84 */
int call_undefined_behavior()
{
 return 10;
}


/* Function: param_implementation_defined @ 0x10B8C */
int param_implementation_defined()
{
 return 44;
}


/* Function: call_implementation_defined @ 0x10B94 */
int call_implementation_defined()
{
 return 44;
}


/* Function: test_obf_opt_edge @ 0x10B9C */
int test_obf_opt_edge(int argc, const char **argv, const char **envp)
{
 int v0; // r0
 size_t v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r0
 int v5; // r0
 long long v6; // r0
 int v7; // r2
 int v8; // r0
 int v9; // r0

 puts(s);
 printf(1, &unk_11005, 10);
 v0 = call_opaque_predicate();
 printf(1, &unk_11021, v0);
 printf(1, &unk_1103D, 225);
 v1 = param_string_encryption();
 printf(1, &unk_1105A, v1);
 v2 = call_tail_call_optimized();
 printf(1, &unk_11076, v2);
 v3 = call_non_tail_call();
 printf(1, &unk_110A0, v3);
 v4 = call_vectorized_loop();
 printf(1, &unk_110C5, v4);
 printf(1, &unk_110EB, 20);
 v5 = call_division_by_zero();
 v6 = printf(1, &unk_1110B, v5);
 v8 = call_null_pointer_deref((int)v6, 0, v7);
 printf(1, &unk_11127, v8);
 v9 = call_buffer_overflow();
 printf(1, &unk_11144, v9);
 printf(1, &unk_11161, 2000000000);
 printf(1, &unk_11192, 10);
 return printf(1, &unk_111AF, 44);
}



/* CRT stub function __divsi3 removed by preprocessor */




/* CRT stub function .divsi3_skip_div0_test removed by preprocessor */




/* CRT stub function __aeabi_idivmod removed by preprocessor */




/* CRT stub function __aeabi_ldiv0 removed by preprocessor */



/* Function: .term_proc @ 0x10F3C */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp_puts @ 0x2238C */

/* FAILED to decompile: __imp_strlen @ 0x22390 */

/* FAILED to decompile: __imp_memset @ 0x22394 */

/* FAILED to decompile: __imp___longjmp_chk @ 0x22398 */

/* FAILED to decompile: __imp_raise @ 0x2239C */

/* FAILED to decompile: __imp__setjmp @ 0x223A0 */

/* FAILED to decompile: __imp_free @ 0x223A4 */

/* FAILED to decompile: __imp_signal @ 0x223A8 */

/* FAILED to decompile: __imp_malloc @ 0x223AC */

/* FAILED to decompile: __imp_strncpy @ 0x223B0 */

/* FAILED to decompile: __imp__printf @ 0x223B4 */

/* FAILED to decompile: __imp_abort @ 0x223B8 */

/* FAILED to decompile: __imp___libc_start_main @ 0x223BC */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x223C0 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x223C4 */

/* Total functions decompiled: 47, failed: 15 */
