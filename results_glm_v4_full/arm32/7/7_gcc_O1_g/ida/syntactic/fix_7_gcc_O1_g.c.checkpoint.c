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

#include <setjmp.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

jmp_buf jmp_buffer;
jmp_buf segv_buffer;
int div_zero_caught;
int segv_caught;

/* Encrypted string constant */
const char encrypted_0[32] = {0};

/* String constants */
const char *s = "Testing obfuscation and optimization edge cases\n";
const char unk_1106C[] = "%d\n";
const char unk_11088[] = "Opaque predicate result: %d\n";
const char unk_110A4[] = "Instruction substitution: %d\n";
const char unk_110C4[] = "String encryption result: %zu\n";
const char unk_110E0[] = "Tail call optimization: %d\n";
const char unk_1110C[] = "Non-tail call: %d\n";
const char unk_11134[] = "Vectorized loop result: %d\n";
const char unk_1115C[] = "Link time optimization: %d\n";
const char unk_1117C[] = "Division by zero result: %d\n";
const char unk_11198[] = "Null pointer deref result: %d\n";
const char unk_111B8[] = "Buffer overflow result: %d\n";
const char unk_111D8[] = "Integer overflow result: %d\n";
const char unk_1120C[] = "Undefined behavior: %d\n";
const char unk_1122C[] = "Implementation defined: %d\n";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/7/7_gcc_O1_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x10508 */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_10514 @ 0x10514 */
void sub_10514()
{
 /* stub */
}


/* Function: call_weak_fn @ 0x105xx */
int call_weak_fn()
{
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: div_zero_handler @ 0x106D4 */
void div_zero_handler(int sig)
{
 div_zero_caught = 1;
 longjmp(jmp_buffer, 1);
}


/* Function: segv_handler @ 0x106EC */
void segv_handler(int sig)
{
 segv_caught = 1;
 longjmp(segv_buffer, 1);
}


/* Function: param_fake_branch @ 0x10708 */
int param_fake_branch(int x)
{
 return x;
}


/* Function: call_fake_branch @ 0x1070C */
int call_fake_branch()
{
 return 10;
}


/* Function: param_opaque_predicate @ 0x10714 */
int param_opaque_predicate(int x)
{
 int v1; // r5
 int v2; // r1
 bool v3; // r7
 int v4; // r6
 int v5; // r4

 v1 = x;
 v2 = x + 1;
 v3 = x * x + 2 * x + 1 == v2 * v2;
 if ( x == -1 )
 return 3 * v1 + 20;
 v4 = 2 * x;
 do
 {
 v5 = v2;
 v2 = x % v2;
 x = v5;
 }
 while ( v2 );
 if ( v5 != 1 || !v3 )
 return 3 * v1 + 20;
 else
 return v4 + 10;
}


/* Function: call_opaque_predicate @ 0x10784 */
int call_opaque_predicate()
{
 return param_opaque_predicate(5);
}


/* Function: param_instruction_substitution @ 0x10794 */
int param_instruction_substitution(int x)
{
 return 6 * x + ((unsigned int)x >> 1) + (x & 0xF) + 15 * x;
}


/* Function: call_instruction_substitution @ 0x107B4 */
int call_instruction_substitution()
{
 return 225;
}


/* Function: decrypt_string @ 0x107BC */
const char * decrypt_string(const char *encrypted, char *buffer, size_t len, char key)
{
 char v7; // r2
 char *v8; // r12
 int v9; // t1

 strncpy(buffer, encrypted, len);
 buffer[len - 1] = 0;
 v7 = *buffer;
 if ( *buffer )
 {
 v8 = buffer;
 do
 {
 *v8 = v7 ^ key;
 v9 = (unsigned char)*++v8;
 v7 = v9;
 }
 while ( v9 );
 }
 return buffer;
}


/* Function: param_string_encryption @ 0x10810 */
size_t param_string_encryption()
{
 char decrypted[32]; // [sp+4h] [bp-2Ch] BYREF

 decrypt_string(encrypted_0, decrypted, 0x20u, 90);
 return (unsigned char)decrypted[0] + strlen(decrypted);
}


/* Function: call_string_encryption @ 0x10878 */
size_t call_string_encryption()
{
 return param_string_encryption();
}


/* Function: param_tail_call_optimized @ 0x10884 */
int param_tail_call_optimized(int n, int acc)
{
 if ( n <= 0 )
 return acc;
 else
 return param_tail_call_optimized(n - 1, n + acc);
}


/* Function: call_tail_call_optimized @ 0x108A8 */
int call_tail_call_optimized()
{
 return param_tail_call_optimized(1000, 0);
}


/* Function: param_non_tail_call @ 0x108BC */
int param_non_tail_call(int n)
{
 if ( n <= 0 )
 return 0;
 else
 return param_non_tail_call(n - 1) + n;
}


/* Function: call_non_tail_call @ 0x108E0 */
int call_non_tail_call()
{
 return param_non_tail_call(100);
}


/* Function: param_vectorized_loop @ 0x108F0 */
int param_vectorized_loop(int *a, int *b, int *c, int n)
{
 int *v4; // r0
 int *v5; // r1
 int *v6; // lr
 int v7; // r6
 int *v8; // r5
 int *v9; // r3
 int v10; // r12
 int v11; // t1
 int v12; // t1
 int *v13; // r2
 int result; // r0
 int v15; // t1

 if ( n <= 0 )
 return 0;
 v4 = a - 1;
 v5 = b - 1;
 v6 = c - 1;
 v7 = n;
 v8 = &v4[n];
 v9 = c - 1;
 do
 {
 v11 = v4[1];
 ++v4;
 v10 = v11;
 v12 = v5[1];
 ++v5;
 v9[1] = v10 + v12;
 ++v9;
 }
 while ( v4 != v8 );
 v13 = &c[v7 - 1];
 result = 0;
 do
 {
 v15 = v6[1];
 ++v6;
 result += v15;
 }
 while ( v6 != v13 );
 return result;
}


/* Function: call_vectorized_loop @ 0x10954 */
int call_vectorized_loop()
{
 int a[8]; // [sp+4h] [bp-6Ch] BYREF
 int b[8]; // [sp+24h] [bp-4Ch] BYREF
 int c[8]; // [sp+44h] [bp-2Ch] BYREF

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


/* Function: param_link_time_optimization @ 0x109F0 */
int param_link_time_optimization(int x)
{
 return 2 * (x + 5);
}


/* Function: call_link_time_optimization @ 0x109FC */
int call_link_time_optimization()
{
 return 20;
}


/* Function: param_division_by_zero @ 0x10A04 */
int param_division_by_zero(int x)
{
 signal(8, div_zero_handler);
 if ( setjmp(jmp_buffer) )
 return -1;
 else
 return 10 / x;
}


/* Function: call_division_by_zero @ 0x10A50 */
int call_division_by_zero()
{
 int v0; // r5
 int v1; // r4

 v0 = param_division_by_zero(5);
 v1 = param_division_by_zero(0);
 signal(8, 0);
 return v0 + v1;
}


/* Function: param_null_pointer_deref @ 0x10A80 */
int param_null_pointer_deref(int *p)
{
 signal(11, segv_handler);
 if ( setjmp(segv_buffer) )
 return -1;
 else
 return *p;
}


/* Function: call_null_pointer_deref @ 0x10AC0 */
int call_null_pointer_deref()
{
 int v0; // r4
 int v1; // r5
 int valid; // [sp+0h] [bp-18h] BYREF

 valid = 42;
 v0 = param_null_pointer_deref(&valid);
 v1 = param_null_pointer_deref(0);
 signal(11, 0);
 return v0 + v1;
}


/* Function: param_buffer_overflow_stack @ 0x10B30 */
int param_buffer_overflow_stack(int x)
{
 return x;
}


/* Function: param_buffer_overflow_heap @ 0x10B34 */
int param_buffer_overflow_heap(int x)
{
 void *v2; // r0
 int v3; // r3

 v2 = malloc(0x10u);
 if ( !v2 )
 return -2;
 v3 = 33;
 do
 --v3;
 while ( v3 );
 free(v2);
 return x;
}


/* Function: call_buffer_overflow @ 0x10B6C */
int call_buffer_overflow()
{
 return param_buffer_overflow_heap(20) + 10;
}


/* Function: param_integer_overflow @ 0x10B80 */
int param_integer_overflow(int a, int b)
{
 int result; // r0
 bool v4; // cc
 char v5; // r2

 result = a + b;
 v4 = a <= 0;
 if ( a > 0 )
 v4 = b <= 0;
 v5 = !v4;
 if ( (*(unsigned int *)&v5 & ((unsigned int)result >> 31)) != 0 )
 return -1;
 if ( ((result > 0) & ((a & (unsigned int)b) >> 31)) != 0 )
 return -2;
 return result;
}


/* Function: call_integer_overflow @ 0x10BC4 */
int call_integer_overflow()
{
 return 2000000000;
}


/* Function: param_undefined_behavior @ 0x10BD0 */
int param_undefined_behavior(int i)
{
 return 2 * i;
}


/* Function: call_undefined_behavior @ 0x10BD8 */
int call_undefined_behavior()
{
 return 10;
}


/* Function: param_implementation_defined @ 0x10BE0 */
int param_implementation_defined()
{
 return 44;
}


/* Function: call_implementation_defined @ 0x10BE8 */
int call_implementation_defined()
{
 return 44;
}


/* Function: test_obf_opt_edge @ 0x10BF0 */
void test_obf_opt_edge()
{
 int v0; // r0
 size_t v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r0
 int v5; // r0
 int v6; // r0
 int v7; // r0

 puts(s);
 printf(unk_1106C, 10);
 v0 = call_opaque_predicate();
 printf(unk_11088, v0);
 printf(unk_110A4, 225);
 v1 = param_string_encryption();
 printf(unk_110C4, v1);
 v2 = call_tail_call_optimized();
 printf(unk_110E0, v2);
 v3 = call_non_tail_call();
 printf(unk_1110C, v3);
 v4 = call_vectorized_loop();
 printf(unk_11134, v4);
 printf(unk_1115C, 20);
 v5 = call_division_by_zero();
 printf(unk_1117C, v5);
 v6 = call_null_pointer_deref();
 printf(unk_11198, v6);
 v7 = call_buffer_overflow();
 printf(unk_111B8, v7);
 printf(unk_111D8, 2000000000);
 printf(unk_1120C, 10);
 printf(unk_1122C, 44);
}


/* Function: main @ 0x10D40 */
int main(int argc, const char **argv, const char **envp)
{
 test_obf_opt_edge();
 return 0;
}



/* CRT stub function __divsi3 removed by preprocessor */




/* CRT stub function .divsi3_skip_div0_test removed by preprocessor */




/* CRT stub function __aeabi_idivmod removed by preprocessor */




/* CRT stub function __aeabi_ldiv0 removed by preprocessor */



/* Function: .term_proc @ 0x10FA0 */
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

/* FAILED to decompile: __imp___printf_chk @ 0x223B4 */

/* FAILED to decompile: __imp_abort @ 0x223B8 */

/* FAILED to decompile: __imp___libc_start_main @ 0x223BC */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x223C0 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x223C4 */

/* Total functions decompiled: 47, failed: 15 */
