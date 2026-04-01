#include <setjmp.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

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
typedef _Bool bool;

/* Global variable declarations */
jmp_buf jmp_buffer;
jmp_buf segv_buffer;
int div_zero_caught;
int segv_caught;

/* String constants from data section */
const char s[] = "Testing obfuscation and optimization edge cases\n";
const char encrypted_0[] = "Hello World";
const char unk_11184[] = "Fake branch result: %d\n";
const char unk_111A0[] = "Opaque predicate result: %d\n";
const char unk_111BC[] = "Instruction substitution: %d\n";
const char unk_111DC[] = "String encryption result: %d\n";
const char unk_111F8[] = "Tail call optimized: %d\n";
const char unk_11224[] = "Non-tail call: %d\n";
const char unk_1124C[] = "Vectorized loop: %d\n";
const char unk_11274[] = "LTO result: %d\n";
const char unk_11294[] = "Division by zero: %d\n";
const char unk_112B0[] = "Null pointer deref: %d\n";
const char unk_112D0[] = "Buffer overflow: %d\n";
const char unk_112F0[] = "Integer overflow: %d\n";
const char unk_11324[] = "Undefined behavior: %d\n";
const char unk_11344[] = "Implementation defined: %d\n";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/7/7_gcc_O2_g
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
 return;
}


/* Function: main @ 0x105DC */
int main(int argc, const char **argv, const char **envp)
{
 test_obf_opt_edge();
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: div_zero_handler @ 0x106E4 */
void div_zero_handler(int sig)
{
 div_zero_caught = 1;
 longjmp(jmp_buffer, 1);
}


/* Function: segv_handler @ 0x106FC */
void segv_handler(int sig)
{
 segv_caught = 1;
 longjmp(segv_buffer, 1);
}


/* Function: param_fake_branch @ 0x10718 */
int param_fake_branch(int x)
{
 return x;
}


/* Function: call_fake_branch @ 0x1071C */
int call_fake_branch()
{
 return 10;
}


/* Function: param_opaque_predicate @ 0x10724 */
int param_opaque_predicate(int x)
{
 int v1; // r1
 int v2; // r5
 int v3; // r6
 bool v4; // r7
 int v5; // r4

 v1 = x + 1;
 v2 = x;
 v3 = 2 * x;
 v4 = x * x + 2 * x + 1 == (x + 1) * (x + 1);
 if ( x == -1 )
 return v3 + v2 + 20;
 do
 {
 v5 = v1;
 v1 = x % v1;
 x = v5;
 }
 while ( v1 );
 if ( v5 != 1 || !v4 )
 return v3 + v2 + 20;
 else
 return v3 + 10;
}


/* Function: call_opaque_predicate @ 0x10794 */
int call_opaque_predicate()
{
 int v0; // r1
 int v1; // r0
 int v2; // r4

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


/* Function: param_instruction_substitution @ 0x107C4 */
int param_instruction_substitution(int x)
{
 return 6 * x + ((unsigned int)x >> 1) + (x & 0xF) + 15 * x;
}


/* Function: call_instruction_substitution @ 0x107E4 */
int call_instruction_substitution()
{
 return 225;
}


/* Function: decrypt_string @ 0x107EC */
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


/* Function: param_string_encryption @ 0x10840 */
int param_string_encryption()
{
 int v0; // r4
 char *v1; // r3
 int v2; // t1
 char decrypted[32]; // [sp+4h] [bp-2Ch] BYREF

 strncpy(decrypted, encrypted_0, 0x1Fu);
 v0 = (unsigned char)decrypted[0];
 decrypted[31] = 0;
 if ( decrypted[0] )
 {
 v1 = decrypted;
 do
 {
 *v1 = v0 ^ 0x5A;
 v2 = (unsigned char)*++v1;
 v0 = (v0 & 0xFFFFFF00) | ((unsigned char)v2);
 }
 while ( v2 );
 v0 = (unsigned char)decrypted[0];
 }
 return v0 + strlen(decrypted);
}


/* Function: call_string_encryption @ 0x108D0 */
// attributes: thunk
int call_string_encryption()
{
 return param_string_encryption();
}


/* Function: param_tail_call_optimized @ 0x108D4 */
int param_tail_call_optimized(int n, int acc)
{
 bool v2; // cc
 int v3; // r3
 int result; // r0
 int v5; // r2

 v3 = n;
 v2 = n <= 0;
 result = acc;
 if ( !v2 )
 {
 do
 {
 v5 = v3--;
 result += v5;
 }
 while ( v3 );
 }
 return result;
}


/* Function: call_tail_call_optimized @ 0x108F4 */
int call_tail_call_optimized()
{
 return 500500;
}


/* Function: param_non_tail_call @ 0x10900 */
int param_non_tail_call(int n)
{
 bool v1; // cc
 int v2; // r3
 int result; // r0
 int v4; // r2

 v2 = n;
 v1 = n <= 0;
 result = 0;
 if ( !v1 )
 {
 do
 {
 v4 = v2--;
 result += v4;
 }
 while ( v2 );
 }
 return result;
}


/* Function: call_non_tail_call @ 0x10920 */
int call_non_tail_call()
{
 return 5050;
}


/* Function: param_vectorized_loop @ 0x1092C */
int param_vectorized_loop(int *a, int *b, int *c, int n)
{
 int *v5; // r3
 int *v6; // lr
 int *v7; // r2
 int *v8; // r0
 int v9; // r6
 int *v10; // r1
 int *v11; // r5
 int v12; // r12
 int v13; // t1
 int v14; // t1
 int result; // r0
 int *v16; // r3
 int v17; // t1

 if ( n <= 0 )
 return 0;
 v5 = c - 1;
 v6 = c - 1;
 v7 = c - 1;
 v8 = a - 1;
 v9 = n;
 v10 = b - 1;
 v11 = &v8[n];
 do
 {
 v13 = v8[1];
 ++v8;
 v12 = v13;
 v14 = v10[1];
 ++v10;
 v7[1] = v12 + v14;
 ++v7;
 }
 while ( v8 != v11 );
 result = 0;
 v16 = &v5[v9];
 do
 {
 v17 = v6[1];
 ++v6;
 result += v17;
 }
 while ( v16 != v6 );
 return result;
}


/* Function: call_vectorized_loop @ 0x10990 */
int call_vectorized_loop()
{
 int *v0; // r0
 int *v1; // r2
 int *v2; // r12
 int *v3; // r1
 int v4; // r3
 int v5; // t1
 int v6; // t1
 int result; // r0
 int v8; // t1
 int a[8]; // [sp+4h] [bp-6Ch] BYREF
 int b[8]; // [sp+24h] [bp-4Ch] BYREF
 int c[8]; // [sp+44h] [bp-2Ch] BYREF
 int v12; // [sp+64h] [bp-Ch] BYREF

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
 v0 = b;
 v1 = c;
 v2 = c;
 v3 = a;
 do
 {
 v5 = *v3++;
 v4 = v5;
 v6 = *v0++;
 *v2++ = v4 + v6;
 }
 while ( v3 != b );
 result = 0;
 do
 {
 v8 = *v1++;
 result += v8;
 }
 while ( &v12 != v1 );
 return result;
}


/* Function: param_link_time_optimization @ 0x10A58 */
int param_link_time_optimization(int x)
{
 return 2 * (x + 5);
}


/* Function: call_link_time_optimization @ 0x10A64 */
int call_link_time_optimization()
{
 return 20;
}


/* Function: param_division_by_zero @ 0x10A6C */
int param_division_by_zero(int x)
{
 signal(8, div_zero_handler);
 if ( setjmp(jmp_buffer) )
 return -1;
 else
 return 10 / x;
}


/* Function: call_division_by_zero @ 0x10ABC */
int call_division_by_zero()
{
 int v0; // r5
 int v1; // r4

 v0 = param_division_by_zero(5);
 v1 = param_division_by_zero(0);
 signal(8, 0);
 return v0 + v1;
}


/* Function: param_null_pointer_deref @ 0x10AEC */
int param_null_pointer_deref(int *p)
{
 signal(11, segv_handler);
 if ( setjmp(segv_buffer) )
 return -1;
 else
 return *p;
}


/* Function: call_null_pointer_deref @ 0x10B30 */
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


/* Function: param_buffer_overflow_stack @ 0x10BA0 */
void param_buffer_overflow_stack()
{
 ;
}


/* Function: param_buffer_overflow_heap @ 0x10BA4 */
int param_buffer_overflow_heap(int x)
{
 void *v2; // r0

 v2 = malloc(0x10u);
 if ( !v2 )
 return -2;
 free(v2);
 return x;
}


/* Function: call_buffer_overflow @ 0x10BD0 */
int call_buffer_overflow()
{
 void *v0; // r0

 v0 = malloc(0x10u);
 if ( !v0 )
 return 8;
 free(v0);
 return 30;
}


/* Function: param_integer_overflow @ 0x10BF8 */
int param_integer_overflow(int a, int b)
{
 bool v2; // cc
 int result; // r0

 v2 = a <= 0;
 if ( a > 0 )
 v2 = b <= 0;
 result = a + b;
 if ( !v2 )
 return result | (result >> 31);
 if ( ((result > 0) & ((b & (unsigned int)a) >> 31)) != 0 )
 return -2;
 return result;
}


/* Function: call_integer_overflow @ 0x10C30 */
int call_integer_overflow()
{
 return 2000000000;
}


/* Function: param_undefined_behavior @ 0x10C3C */
int param_undefined_behavior(int i)
{
 return 2 * i;
}


/* Function: call_undefined_behavior @ 0x10C44 */
int call_undefined_behavior()
{
 return 10;
}


/* Function: param_implementation_defined @ 0x10C4C */
int param_implementation_defined()
{
 return 44;
}


/* Function: call_implementation_defined @ 0x10C54 */
int call_implementation_defined()
{
 return 44;
}


/* Function: test_obf_opt_edge @ 0x10C5C */
void test_obf_opt_edge()
{
 int v0; // r4
 int v1; // r0
 int v2; // r1
 int v3; // r2
 int v4; // r0
 int v5; // r0
 int v6; // r6
 int v7; // r5
 int v8; // r5
 int v9; // r4
 void *v10; // r0
 int v11; // r2
 int v12; // [sp+0h] [bp-18h] BYREF

 puts(s);
 printf(&unk_11184, 10);
 v0 = 6;
 v1 = 5;
 do
 {
 v2 = v1 % v0;
 v1 = v0;
 v0 = v2;
 }
 while ( v2 );
 if ( v1 == 1 )
 v3 = 20;
 else
 v3 = 35;
 printf(&unk_111A0, v3);
 printf(&unk_111BC, 225);
 v4 = param_string_encryption();
 printf(&unk_111DC, v4);
 printf(&unk_111F8, 500500);
 printf(&unk_11224, 5050);
 v5 = call_vectorized_loop();
 printf(&unk_1124C, v5);
 printf(&unk_11274, 20);
 v6 = param_division_by_zero(5);
 v7 = param_division_by_zero(0);
 signal(8, 0);
 printf(&unk_11294, v6 + v7);
 v12 = 42;
 v8 = param_null_pointer_deref(&v12);
 v9 = param_null_pointer_deref(0);
 signal(11, 0);
 printf(&unk_112B0, v8 + v9);
 v10 = malloc(0x10u);
 if ( v10 )
 {
 free(v10);
 v11 = 30;
 }
 else
 {
 v11 = 8;
 }
 printf(&unk_112D0, v11);
 printf(&unk_112F0, 2000000000);
 printf(&unk_11324, 10);
 printf(&unk_11344, 44);
}



/* CRT stub function __divsi3 removed by preprocessor */




/* CRT stub function .divsi3_skip_div0_test removed by preprocessor */




/* CRT stub function __aeabi_idivmod removed by preprocessor */




/* CRT stub function __aeabi_ldiv0 removed by preprocessor */



/* Function: .term_proc @ 0x110B8 */
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
