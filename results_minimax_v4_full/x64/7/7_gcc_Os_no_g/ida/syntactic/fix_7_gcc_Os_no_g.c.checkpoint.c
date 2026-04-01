/* Auto-injected type definitions by preprocessor */
#include <setjmp.h>
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
/* int64_t is provided by standard headers */
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

typedef int bool;
#define true 1
#define false 0

/* Global jump buffers for error handling */
jmp_buf jmp_buffer;
jmp_buf segv_buffer;

/* Global flags for error handling */
int div_zero_caught;
int segv_caught;

/* Encrypted string for string encryption test */
char encrypted_0[32] = "fmnmQDsqfsuv{tqrfu{sNmqtuq{smurj";

/* String labels for test output */
char s[] = "Antigravity Compiler - Obfuscation Tests\n";

/* Format strings for printf */
char unk_2031[] = "Opaque Predicate Test: %d\n";
char unk_204D[] = "Call Opaque Predicate: %d\n";
char unk_2069[] = "Instruction Substitution: %d\n";
char unk_2086[] = "String Encryption: %d\n";
char unk_20A2[] = "Tail Call Optimized (param): %d\n";
char unk_20CC[] = "Non Tail Call (param): %d\n";
char unk_20F1[] = "Vectorized Loop: %d\n";
char unk_2117[] = "Link Time Optimization: %d\n";
char unk_2137[] = "Division by Zero: %d\n";
char unk_2153[] = "Null Pointer Deref: %d\n";
char unk_2170[] = "Buffer Overflow: %d\n";
char unk_218D[] = "Integer Overflow: %d\n";
char unk_21BE[] = "Undefined Behavior: %d\n";
char unk_21DB[] = "Implementation Defined: %d\n";

/* External declarations */
extern void __stack_chk_fail(void);
extern void _gmon_start__(void);

/* Stub for __readfsqword - reads from FS segment register (stack canary) */
static unsigned long long __readfsqword(unsigned int offset)
{
 (void)offset;
 return 0;
}

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/7/7_gcc_Os_no_g
 * Processor: pc
 */

/* CRT startup code removed */




/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 /* Unreachable code placeholder */
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 sub_1020();
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
 sub_1020();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
 sub_1020();
}


/* Function: sub_1060 @ 0x1060 */
void sub_1060()
{
 sub_1020();
}


/* Function: sub_1070 @ 0x1070 */
void sub_1070()
{
 sub_1020();
}


/* Function: sub_1080 @ 0x1080 */
void sub_1080()
{
 sub_1020();
}


/* Function: sub_1090 @ 0x1090 */
void sub_1090()
{
 sub_1020();
}


/* Function: sub_10A0 @ 0x10A0 */
void sub_10A0()
{
 sub_1020();
}


/* Function: sub_10B0 @ 0x10B0 */
void sub_10B0()
{
 sub_1020();
}


/* Function: sub_10C0 @ 0x10C0 */
void sub_10C0()
{
 sub_1020();
}


/* Function declarations for functions defined after main */
long long call_opaque_predicate(void);
long long param_string_encryption(void);
long long call_tail_call_optimized(void);
long long call_non_tail_call(void);
long long call_vectorized_loop(void);
long long call_division_by_zero(void);
long long call_null_pointer_deref(void);
long long call_buffer_overflow(void);
long long test_obf_opt_edge(void);

/* Function: main @ 0x1180 */
int main(int argc, const char **argv, const char **envp)
{
 (void)argc;
 (void)argv;
 (void)envp;
 test_obf_opt_edge();
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: div_zero_handler @ 0x1279 */
void div_zero_handler()
{
 div_zero_caught = 1;
 __longjmp_chk(jmp_buffer, 1);
}


/* Function: segv_handler @ 0x129B */
void segv_handler()
{
 segv_caught = 1;
 __longjmp_chk(segv_buffer, 1);
}


/* Function: param_fake_branch @ 0x12BD */
long long param_fake_branch(unsigned int a1)
{
 return a1;
}


/* Function: call_fake_branch @ 0x12C4 */
long long call_fake_branch()
{
 return 10;
}


/* Function: param_opaque_predicate @ 0x12CE */
long long param_opaque_predicate(int a1)
{
 int v1; // ecx
 int v2; // eax
 bool v3; // r8
 int v4; // edx

 v1 = a1 + 1;
 v2 = a1;
 v3 = 2 * a1 + a1 * a1 + 1 == v1 * v1;
 while ( v1 )
 {
 v4 = v2 % v1;
 v2 = v1;
 v1 = v4;
 }
 if ( v2 == 1 && v3 )
 return (unsigned int)(2 * a1 + 10);
 else
 return (unsigned int)(3 * a1 + 20);
}


/* Function: call_opaque_predicate @ 0x130F */
long long call_opaque_predicate()
{
 return param_opaque_predicate(5);
}


/* Function: param_instruction_substitution @ 0x131A */
long long param_instruction_substitution(unsigned int a1)
{
 return 15 * a1 + (a1 & 0xF) + (a1 >> 1) + 6 * a1;
}


/* Function: call_instruction_substitution @ 0x1334 */
long long call_instruction_substitution()
{
 return 225;
}


/* Function: decrypt_string @ 0x133E */
char * decrypt_string(char *src, char *dest, size_t a3, char a4)
{
 char *v6; // rax
 char *v7; // r8
 char *i; // rdx
 char v9; // al

 v6 = strncpy(dest, src, a3);
 v6[a3 - 1] = 0;
 v7 = v6;
 for ( i = v6; *i; *(i - 1) = v9 )
 v9 = a4 ^ *i++;
 return v7;
}


/* Function: param_string_encryption @ 0x137B */
long long param_string_encryption()
{
 int v0; // eax
 char s[32]; // [rsp+8h] [rbp-30h] BYREF
 unsigned long long v3; // [rsp+28h] [rbp-10h]

 v3 = __readfsqword(0x28u);
 decrypt_string(&encrypted_0, s, 0x20u, 90);
 v0 = strlen(s);
 return (unsigned int)(v0 + s[0]);
}


/* Function: call_string_encryption @ 0x13E0 */
long long call_string_encryption()
{
 return param_string_encryption();
}


/* Function: param_tail_call_optimized @ 0x13E8 */
long long param_tail_call_optimized(int a1, unsigned int a2)
{
 long long result; // rax

 result = a2;
 while ( a1 > 0 )
 {
 result = (unsigned int)(a1 + result);
 --a1;
 }
 return result;
}


/* Function: call_tail_call_optimized @ 0x13F9 */
long long call_tail_call_optimized()
{
 return 500500;
}


/* Function: param_non_tail_call @ 0x1403 */
long long param_non_tail_call(int a1)
{
 long long result; // rax

 result = 0;
 while ( a1 > 0 )
 {
 result = (unsigned int)(a1 + result);
 --a1;
 }
 return result;
}


/* Function: call_non_tail_call @ 0x1414 */
long long call_non_tail_call()
{
 return param_non_tail_call(100);
}


/* Function: param_vectorized_loop @ 0x141F */
long long param_vectorized_loop(long long a1, long long a2, long long a3, int a4)
{
 long long i; // rax
 long long v5; // rax
 unsigned int v6; // r8d

 for ( i = 0; a4 > (int)i; ++i )
 *(unsigned int *)(a3 + 4 * i) = *(unsigned int *)(a1 + 4 * i) + *(unsigned int *)(a2 + 4 * i);
 v5 = 0;
 v6 = 0;
 while ( a4 > (int)v5 )
 v6 += *(unsigned int *)(a3 + 4 * v5++);
 return v6;
}


/* Function: call_vectorized_loop @ 0x1450 */
long long call_vectorized_loop()
{
 long long v0; // rcx
 unsigned int *v1; // rdi
 unsigned long long v3[4]; // [rsp+8h] [rbp-70h] BYREF
 unsigned long long v4[4]; // [rsp+28h] [rbp-50h] BYREF
 unsigned char v5[32]; // [rsp+48h] [rbp-30h] BYREF
 unsigned long long v6; // [rsp+68h] [rbp-10h]

 v0 = 8;
 v6 = __readfsqword(0x28u);
 v1 = v5;
 v3[0] = 0x200000001LL;
 v3[1] = 0x400000003LL;
 v3[2] = 0x600000005LL;
 v3[3] = 0x800000007LL;
 v4[0] = 0x700000008LL;
 v4[1] = 0x500000006LL;
 v4[2] = 0x300000004LL;
 v4[3] = 0x100000002LL;
 while ( v0 )
 {
 *v1++ = 0;
 --v0;
 }
 return param_vectorized_loop((long long)v3, (long long)v4, (long long)v5, 8);
}


/* Function: param_link_time_optimization @ 0x151B */
long long param_link_time_optimization(int a1)
{
 return (unsigned int)(2 * a1 + 10);
}


/* Function: call_link_time_optimization @ 0x1524 */
long long call_link_time_optimization()
{
 return 20;
}


/* Function: param_division_by_zero @ 0x152E */
long long param_division_by_zero(int a1)
{
 int v1; // r8d
 long long result; // rax

 signal(8, (__sighandler_t)div_zero_handler);
 v1 = _setjmp(jmp_buffer);
 result = 0xFFFFFFFFLL;
 if ( !v1 )
 return (unsigned int)(10 / a1);
 return result;
}


/* Function: call_division_by_zero @ 0x1575 */
long long call_division_by_zero()
{
 int v0; // ebx
 int v1; // ebp

 v0 = param_division_by_zero(5);
 v1 = param_division_by_zero(0);
 signal(8, 0);
 return (unsigned int)(v0 + v1);
}


/* Function: param_null_pointer_deref @ 0x15A4 */
long long param_null_pointer_deref(unsigned int *a1)
{
 int v1; // r8d
 long long result; // rax

 signal(11, (__sighandler_t)segv_handler);
 v1 = _setjmp(segv_buffer);
 result = 0xFFFFFFFFLL;
 if ( !v1 )
 return *a1;
 return result;
}


/* Function: call_null_pointer_deref @ 0x15E9 */
long long call_null_pointer_deref()
{
 int v0; // ebx
 int v1; // ebp
 unsigned int v3; // [rsp+4h] [rbp-24h] BYREF
 unsigned long long v4; // [rsp+8h] [rbp-20h]

 v4 = __readfsqword(0x28u);
 v3 = 42;
 v0 = param_null_pointer_deref(&v3);
 v1 = param_null_pointer_deref(0);
 signal(11, 0);
 return (unsigned int)(v0 + v1);
}


/* Function: param_buffer_overflow_stack @ 0x164B */
long long param_buffer_overflow_stack(unsigned int a1)
{
 return a1;
}


/* Function: param_buffer_overflow_heap @ 0x1652 */
long long param_buffer_overflow_heap(unsigned int a1)
{
 void *v2; // rdi
 long long result; // rax

 v2 = malloc(0x10u);
 result = 4294967294LL;
 if ( v2 )
 {
 free(v2);
 return a1;
 }
 return result;
}


/* Function: call_buffer_overflow @ 0x1679 */
long long call_buffer_overflow()
{
 return (unsigned int)param_buffer_overflow_heap(0x14u) + 10;
}


/* Function: param_integer_overflow @ 0x168D */
long long param_integer_overflow(int a1, int a2)
{
 long long result; // rax

 result = (unsigned int)(a1 + a2);
 if ( a1 <= 0 || a2 <= 0 )
 {
 if ( (a2 & a1) < 0 && (int)result > 0 )
 return 4294967294LL;
 }
 else if ( (int)result < 0 )
 {
 return 0xFFFFFFFFLL;
 }
 return result;
}


/* Function: call_integer_overflow @ 0x16B6 */
long long call_integer_overflow()
{
 return 2000000000;
}


/* Function: param_undefined_behavior @ 0x16C0 */
long long param_undefined_behavior(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: call_undefined_behavior @ 0x16C8 */
long long call_undefined_behavior()
{
 return 10;
}


/* Function: param_implementation_defined @ 0x16D2 */
long long param_implementation_defined()
{
 return 47;
}


/* Function: call_implementation_defined @ 0x16DC */
long long call_implementation_defined()
{
 return 47;
}


/* Function: test_obf_opt_edge @ 0x16E6 */
long long test_obf_opt_edge()
{
 unsigned int v0; // eax
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax
 unsigned int v4; // eax
 unsigned int v5; // eax
 unsigned int v6; // eax
 unsigned int v7; // eax

 puts(s);
 __printf_chk(1, &unk_2031, 10);
 v0 = call_opaque_predicate();
 __printf_chk(1, &unk_204D, v0);
 __printf_chk(1, &unk_2069, 225);
 v1 = param_string_encryption();
 __printf_chk(1, &unk_2086, v1);
 v2 = call_tail_call_optimized();
 __printf_chk(1, &unk_20A2, v2);
 v3 = call_non_tail_call();
 __printf_chk(1, &unk_20CC, v3);
 v4 = call_vectorized_loop();
 __printf_chk(1, &unk_20F1, v4);
 __printf_chk(1, &unk_2117, 20);
 v5 = call_division_by_zero();
 __printf_chk(1, &unk_2137, v5);
 v6 = call_null_pointer_deref();
 __printf_chk(1, &unk_2153, v6);
 v7 = call_buffer_overflow();
 __printf_chk(1, &unk_2170, v7);
 __printf_chk(1, &unk_218D, 2000000000);
 __printf_chk(1, &unk_21BE, 10);
 return __printf_chk(1, &unk_21DB, 47);
}


/* Function: .term_proc @ 0x1868 */
void term_proc()
{
 ;
}


/* FAILED to decompile: free @ 0x4210 */

/* FAILED to decompile: __libc_start_main @ 0x4218 */

/* FAILED to decompile: strncpy @ 0x4220 */

/* FAILED to decompile: puts @ 0x4228 */

/* FAILED to decompile: strlen @ 0x4230 */

/* FAILED to decompile: __stack_chk_fail @ 0x4238 */

/* FAILED to decompile: _setjmp @ 0x4240 */

/* FAILED to decompile: signal @ 0x4248 */

/* FAILED to decompile: malloc @ 0x4250 */

/* FAILED to decompile: __printf_chk @ 0x4258 */

/* FAILED to decompile: __longjmp_chk @ 0x4260 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x4268 */

/* FAILED to decompile: __gmon_start__ @ 0x4278 */

/* Total functions decompiled: 52, failed: 13 */
