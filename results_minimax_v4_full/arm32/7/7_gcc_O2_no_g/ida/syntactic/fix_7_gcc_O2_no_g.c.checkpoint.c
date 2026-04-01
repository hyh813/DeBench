/* Auto-injected type definitions by preprocessor */
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

/* Additional types needed */
typedef char bool;
#define true 1
#define false 0

/* Forward declarations for string variables */
extern char encrypted_0[32];
extern char s[];
extern char unk_11184[];
extern char unk_111A0[];
extern char unk_111BC[];
extern char unk_111DC[];
extern char unk_111F8[];
extern char unk_11224[];
extern char unk_1124C[];
extern char unk_11274[];
extern char unk_11294[];
extern char unk_112B0[];
extern char unk_112D0[];
extern char unk_112F0[];
extern char unk_11324[];
extern char unk_11344[];

/* Signal handler type */
typedef void (*__sighandler_t)(int);

/* Jump buffers for exception handling */
typedef int jmp_buf[16];

/* Global flags for signal handlers */
int div_zero_caught = 0;
int segv_caught = 0;

/* Jump buffers */
jmp_buf jmp_buffer;
jmp_buf segv_buffer;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/7/7_gcc_O2_no_g
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
 while(1) { } // Infinite loop (unreachable)
}


/* Function: main @ 0x105DC */
int main(int argc, const char **argv, const char **envp)
{
 test_obf_opt_edge(argc, argv, envp);
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */
int call_weak_fn()
{
 return 0;
}




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
int param_opaque_predicate(int a1)
{
 int v1; // r1
 int v2; // r5
 int v3; // r6
 bool v4; // r7
 int v5; // r4

 v1 = a1 + 1;
 v2 = a1;
 v3 = 2 * a1;
 v4 = a1 * a1 + 2 * a1 + 1 == (a1 + 1) * (a1 + 1);
 if ( a1 == -1 )
 return v3 + v2 + 20;
 do
 {
 v5 = v1;
 v1 = a1 % v1;
 a1 = v5;
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
int param_instruction_substitution(unsigned int a1)
{
 return 6 * a1 + (a1 >> 1) + (a1 & 0xF) + 15 * a1;
}


/* Function: call_instruction_substitution @ 0x107E4 */
int call_instruction_substitution()
{
 return 225;
}


/* Function: decrypt_string @ 0x107EC */
char * decrypt_string(char *src, char *dest, size_t a3, char a4)
{
 char v7; // r2
 char *v8; // r12
 int v9; // t1

 strncpy(dest, src, a3);
 dest[a3 - 1] = 0;
 v7 = *dest;
 if ( *dest )
 {
 v8 = dest;
 do
 {
 *v8 = v7 ^ a4;
 v9 = (unsigned char)*++v8;
 v7 = v9;
 }
 while ( v9 );
 }
 return dest;
}


/* Function: param_string_encryption @ 0x10840 */
size_t param_string_encryption()
{
 int v0; // r4
 char *v1; // r3
 int v2; // t1
 char dest[32]; // [sp+4h] [bp-2Ch] BYREF

 strncpy(dest, &encrypted_0, 0x1Fu);
 v0 = (unsigned char)dest[0];
 dest[31] = 0;
 if ( dest[0] )
 {
 v1 = dest;
 do
 {
 *v1 = v0 ^ 0x5A;
 v2 = (unsigned char)*++v1;
 v0 = v2;
 }
 while ( v2 );
 v0 = (unsigned char)dest[0];
 }
 return v0 + strlen(dest);
}


/* Function: call_string_encryption @ 0x108D0 */
// attributes: thunk
size_t call_string_encryption()
{
 return param_string_encryption();
}


/* Function: param_tail_call_optimized @ 0x108D4 */
int param_tail_call_optimized(int a1, int a2)
{
 bool v2; // cc
 int v3; // r3
 int result; // r0
 int v5; // r2

 v3 = a1;
 v2 = a1 <= 0;
 result = a2;
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
int param_non_tail_call(int a1)
{
 bool v1; // cc
 int v2; // r3
 int result; // r0
 int v4; // r2

 v2 = a1;
 v1 = a1 <= 0;
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
int param_vectorized_loop(int a1, int a2, int a3, int a4)
{
 int v5; // r3
 int v6; // lr
 int v7; // r2
 int v8; // r0
 int v9; // r6
 int v10; // r1
 int v11; // r5
 int v12; // r12
 int v13; // t1
 int v14; // t1
 int result; // r0
 int v16; // r3
 int v17; // t1

 if ( a4 <= 0 )
 return 0;
 v5 = a3 - 4;
 v6 = a3 - 4;
 v7 = a3 - 4;
 v8 = a1 - 4;
 v9 = 4 * a4;
 v10 = a2 - 4;
 v11 = v8 + 4 * a4;
 do
 {
 v13 = *(unsigned int *)(v8 + 4);
 v8 += 4;
 v12 = v13;
 v14 = *(unsigned int *)(v10 + 4);
 v10 += 4;
 *(unsigned int *)(v7 + 4) = v12 + v14;
 v7 += 4;
 }
 while ( v8 != v11 );
 result = 0;
 v16 = v5 + v9;
 do
 {
 v17 = *(unsigned int *)(v6 + 4);
 v6 += 4;
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
 unsigned int *v2; // r12
 int *v3; // r1
 int v4; // r3
 int v5; // t1
 int v6; // t1
 int result; // r0
 int v8; // t1
 unsigned int v9[8]; // [sp+4h] [bp-6Ch] BYREF
 unsigned int v10[8]; // [sp+24h] [bp-4Ch] BYREF
 unsigned char s[32]; // [sp+44h] [bp-2Ch] BYREF
 int v12; // [sp+64h] [bp-Ch] BYREF

 v9[0] = 1;
 v9[1] = 2;
 v9[2] = 3;
 v9[3] = 4;
 v9[4] = 5;
 v9[5] = 6;
 v9[6] = 7;
 v9[7] = 8;
 v10[0] = 8;
 v10[1] = 7;
 v10[2] = 6;
 v10[3] = 5;
 v10[4] = 4;
 v10[5] = 3;
 v10[6] = 2;
 v10[7] = 1;
 memset(s, 0, sizeof(s));
 v0 = v10;
 v1 = (int *)s;
 v2 = s;
 v3 = v9;
 do
 {
 v5 = *v3++;
 v4 = v5;
 v6 = *v0++;
 *v2++ = v4 + v6;
 }
 while ( v3 != v10 );
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
int param_link_time_optimization(int a1)
{
 return 2 * (a1 + 5);
}


/* Function: call_link_time_optimization @ 0x10A64 */
int call_link_time_optimization()
{
 return 20;
}


/* Function: param_division_by_zero @ 0x10A6C */
int param_division_by_zero(int a1)
{
 signal(8, (__sighandler_t)div_zero_handler);
 if ( setjmp(jmp_buffer) )
 return -1;
 else
 return 10 / a1;
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
int param_null_pointer_deref(int a1)
{
 signal(11, (__sighandler_t)segv_handler);
 if ( setjmp(segv_buffer) )
 return -1;
 else
 return *(unsigned int *)a1;
}


/* Function: call_null_pointer_deref @ 0x10B30 */
int call_null_pointer_deref()
{
 int v0; // r4
 int v1; // r5
 int v3; // [sp+0h] [bp-18h] BYREF

 v3 = 42;
 v0 = param_null_pointer_deref((int)&v3);
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
int param_buffer_overflow_heap(int a1)
{
 void *v2; // r0

 v2 = malloc(0x10u);
 if ( !v2 )
 return -2;
 free(v2);
 return a1;
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
int param_integer_overflow(int a1, int a2)
{
 bool v2; // cc
 int result; // r0

 v2 = a1 <= 0;
 if ( a1 > 0 )
 v2 = a2 <= 0;
 result = a1 + a2;
 if ( !v2 )
 return result | (result >> 31);
 if ( ((result > 0) & ((a2 & (unsigned int)a1) >> 31)) != 0 )
 return -2;
 return result;
}


/* Function: call_integer_overflow @ 0x10C30 */
int call_integer_overflow()
{
 return 2000000000;
}


/* Function: param_undefined_behavior @ 0x10C3C */
int param_undefined_behavior(int a1)
{
 return 2 * a1;
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


/* Forward declarations for string variables */
extern char encrypted_0[32];
extern char s[];
extern char unk_11184[];
extern char unk_111A0[];
extern char unk_111BC[];
extern char unk_111DC[];
extern char unk_111F8[];
extern char unk_11224[];
extern char unk_1124C[];
extern char unk_11274[];
extern char unk_11294[];
extern char unk_112B0[];
extern char unk_112D0[];
extern char unk_112F0[];
extern char unk_11324[];
extern char unk_11344[];

/* Forward declarations for string variables */
extern char encrypted_0[32];
extern char s[];
extern char unk_11184[];
extern char unk_111A0[];
extern char unk_111BC[];
extern char unk_111DC[];
extern char unk_111F8[];
extern char unk_11224[];
extern char unk_1124C[];
extern char unk_11274[];
extern char unk_11294[];
extern char unk_112B0[];
extern char unk_112D0[];
extern char unk_112F0[];
extern char unk_11324[];
extern char unk_11344[];

/* Function: test_obf_opt_edge @ 0x10C5C */
int test_obf_opt_edge()
{
 int v0; // r4
 int v1; // r0
 int v2; // r1
 int v3; // r2
 size_t v4; // r0
 int v5; // r0
 int v6; // r6
 int v7; // r5
 int v8; // r5
 int v9; // r4
 void *v10; // r0
 int v11; // r2
 int v13; // [sp+0h] [bp-18h] BYREF

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
 v13 = 42;
 v8 = param_null_pointer_deref((int)&v13);
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
 return printf(&unk_11344, 44);
}



/* CRT stub function __divsi3 removed by preprocessor */




/* CRT stub function .divsi3_skip_div0_test removed by preprocessor */




/* CRT stub function __aeabi_idivmod removed by preprocessor */




/* CRT stub function __aeabi_ldiv0 removed by preprocessor */

/* String constants from .rodata section */
char encrypted_0[32] = "encrypted_string_placeholder";
char s[] = "Test: Obf Opt Edge\n";
char unk_11184[] = "GCD(%d) = %d\n";
char unk_111A0[] = "Opaque predicate result: %d\n";
char unk_111BC[] = "Instruction substitution result: %d\n";
char unk_111DC[] = "String encryption result: %zu\n";
char unk_111F8[] = "Tail call optimized result: %d\n";
char unk_11224[] = "Non-tail call result: %d\n";
char unk_1124C[] = "Vectorized loop result: %d\n";
char unk_11274[] = "LTO result: %d\n";
char unk_11294[] = "Division by zero result: %d\n";
char unk_112B0[] = "Null pointer deref result: %d\n";
char unk_112D0[] = "Buffer overflow result: %d\n";
char unk_112F0[] = "Integer overflow result: %u\n";
char unk_11324[] = "Undefined behavior result: %d\n";
char unk_11344[] = "Implementation defined result: %d\n";

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
