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
typedef int bool;
#define true 1
#define false 0

#include <setjmp.h>
#include <signal.h>

/* Global variables */
int div_zero_caught = 0;
int segv_caught = 0;

/* String constants from data section */
const char *encrypted_0 = "CTF{b1n4ry_0bfusc4t10n_1s_c00l}";
const char *s = "Antigravity - Binary Obfuscation Demo";
const char *unk_2137 = "param_opaque_predicate: %lld\n";
const char *unk_2153 = "call_opaque_predicate: %lld\n";
const char *unk_216F = "param_instruction_substitution: %lld\n";
const char *unk_218C = "call_instruction_substitution: %lld\n";
const char *unk_2038 = "param_tail_call_optimized: %lld\n";
const char *unk_2068 = "call_tail_call_optimized: %lld\n";
const char *unk_2090 = "param_vectorized_loop: %lld\n";
const char *unk_20B8 = "call_vectorized_loop: %lld\n";
const char *unk_21A8 = "param_division_by_zero: %lld\n";
const char *unk_21C4 = "call_division_by_zero: %lld\n";
const char *unk_21E1 = "param_null_pointer_deref: %lld\n";
const char *unk_20D8 = "call_null_pointer_deref: %lld\n";
const char *unk_21FE = "param_integer_overflow: %lld\n";
const char *unk_2110 = "call_implementation_defined: %lld\n";

/* Jump buffers for setjmp/longjmp */
jmp_buf jmp_buffer;
jmp_buf segv_buffer;

/* __readfsqword - read from FS segment register (for stack canary) */
unsigned long long __readfsqword(unsigned long offset)
{
    /* In user-space, FS segment is not typically used for stack canaries
       in this standalone demo. Return 0 as a dummy value. */
    return 0;
}

/* Forward declarations */
long long test_obf_opt_edge(int argc, const char **argv, const char **envp);

/* gmon_start external declaration */
long long (*_gmon_start__)(void);

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/7/7_gcc_O2_no_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x1000 */
long long (**init_proc())(void)
{
 long long (**result)(void); // rax

 result = &_gmon_start__;
 if ( &_gmon_start__ )
 return (long long (**)(void))_gmon_start__();
 return result;
}


/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
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


/* Function: main @ 0x1180 */
int main(int argc, const char **argv, const char **envp)
{
 test_obf_opt_edge(argc, argv, envp);
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: div_zero_handler @ 0x1290 */
void div_zero_handler()
{
 div_zero_caught = 1;
 __longjmp_chk(jmp_buffer, 1);
}


/* Function: segv_handler @ 0x12C0 */
void segv_handler()
{
 segv_caught = 1;
 __longjmp_chk(segv_buffer, 1);
}


/* Function: param_fake_branch @ 0x12F0 */
long long param_fake_branch(unsigned int a1)
{
 return a1;
}


/* Function: call_fake_branch @ 0x1300 */
long long call_fake_branch()
{
 return 10;
}


/* Function: param_opaque_predicate @ 0x1310 */
long long param_opaque_predicate(int a1)
{
 int v1; // edx
 bool v2; // r8
 int v3; // eax
 int v4; // ecx

 v1 = a1 + 1;
 v2 = 2 * a1 + a1 * a1 + 1 == v1 * v1;
 if ( a1 == -1 )
 return (unsigned int)(3 * a1 + 20);
 v3 = a1;
 do
 {
 v4 = v1;
 v1 = v3 % v1;
 v3 = v4;
 }
 while ( v1 );
 if ( v4 == 1 && v2 )
 return (unsigned int)(2 * a1 + 10);
 else
 return (unsigned int)(3 * a1 + 20);
}


/* Function: call_opaque_predicate @ 0x1360 */
long long call_opaque_predicate()
{
 int v0; // edx
 int v1; // eax
 int v2; // ecx
 long long result; // rax

 v0 = 6;
 v1 = 5;
 do
 {
 v2 = v0;
 v0 = v1 % v0;
 v1 = v2;
 }
 while ( v0 );
 result = 20;
 if ( v2 != 1 )
 return 35;
 return result;
}


/* Function: param_instruction_substitution @ 0x1390 */
long long param_instruction_substitution(unsigned int a1)
{
 return 15 * a1 + (a1 & 0xF) + (a1 >> 1) + 6 * a1;
}


/* Function: call_instruction_substitution @ 0x13B0 */
long long call_instruction_substitution()
{
 return 225;
}


/* Function: decrypt_string @ 0x13C0 */
char * decrypt_string(const char *src, char *dest, int a3, char a4)
{
 char *v6; // rax
 char *v7; // r8
 char v8; // al
 char *v9; // rdx

 v6 = (char *)strncpy(dest, src, a3);
 v6[a3 - 1] = 0;
 v7 = v6;
 v8 = *v6;
 if ( v8 )
 {
 v9 = v7;
 do
 {
 *v9 = v8 ^ a4;
 v9++;
 v8 = *v9;
 }
 while ( v8 );
 }
 return v7;
}


/* Function: param_string_encryption @ 0x1410 */
long long param_string_encryption()
{
 char *v0; // rax
 unsigned char v1; // ebx
 char *v2; // rdi
 char v4[40]; // [rsp+0h] [rbp-38h] BYREF
 unsigned long long v5; // [rsp+28h] [rbp-10h]

 v5 = __readfsqword(0x28u);
 v0 = (char *)strncpy(v4, encrypted_0, 0x1Fu);
 v4[31] = '\0';
 v2 = v0;
 v1 = *(unsigned char *)v0;
 if ( v1 )
 {
 do
 {
 *v0 = v1 ^ 0x5A;
 ++v0;
 v1 = *(unsigned char *)v0;
 }
 while ( v1 );
 }
 v1 = *(unsigned char *)v4;
 return v1 + (unsigned int)strlen(v2);
}


/* Function: call_string_encryption @ 0x1490 */
long long call_string_encryption()
{
 return param_string_encryption();
}


/* Function: param_tail_call_optimized @ 0x14A0 */
long long param_tail_call_optimized(int a1, unsigned int a2)
{
 long long result; // rax

 result = a2;
 if ( a1 > 0 )
 {
 do
 {
 result = (long long)(a1 + (int)result);
 --a1;
 }
 while ( a1 );
 }
 return result;
}


/* Function: call_tail_call_optimized @ 0x14C0 */
long long call_tail_call_optimized()
{
 return 500500;
}


/* Function: param_non_tail_call @ 0x14D0 */
long long param_non_tail_call(int a1)
{
 long long result; // rax

 result = 0;
 if ( a1 > 0 )
 {
 do
 {
 result = (unsigned int)(a1 + result);
 --a1;
 }
 while ( a1 );
 }
 return result;
}


/* Function: call_non_tail_call @ 0x14F0 */
long long call_non_tail_call()
{
 return 5050;
}


/* Function: param_vectorized_loop @ 0x1500 */
long long param_vectorized_loop(long long a1, long long a2, unsigned int *a3, int a4)
{
 long long i; // rax
 long long v5; // rcx
 long long result; // rax

 if ( a4 <= 0 )
 return 0;
 for ( i = 0; i != a4; ++i )
 a3[i] = *(unsigned int *)(a1 + 4 * i) + *(unsigned int *)(a2 + 4 * i);
 v5 = (long long)&a3[a4 - 1 + 1];
 result = (long long)(unsigned int)result;
 do
 result = (unsigned int)(*a3++ + result);
 while ( (unsigned int *)v5 != a3 );
 return result;
}


/* Function: call_vectorized_loop @ 0x1550 */
long long call_vectorized_loop()
{
 int v0; // esi
 int v1; // ecx
 long long i; // rax
 char *v3; // rax
 unsigned int v4; // r8d
 unsigned long long v6[4]; // [rsp+0h] [rbp-78h]
 unsigned long long v7[4]; // [rsp+20h] [rbp-58h]
 unsigned long long v8[2]; // [rsp+40h] [rbp-38h] BYREF
 char v9; // [rsp+60h] [rbp-18h] BYREF
 unsigned long long v10; // [rsp+68h] [rbp-10h]

 v0 = 8;
 v1 = 1;
 v10 = __readfsqword(0x28u);
 memset(v8, 0, sizeof(v8));
 v6[0] = 0x200000001LL;
 v6[1] = 0x400000003LL;
 v6[2] = 0x600000005LL;
 v6[3] = 0x800000007LL;
 v7[0] = 0x700000008LL;
 v7[1] = 0x500000006LL;
 v7[2] = 0x300000004LL;
 v7[3] = 0x100000002LL;
 for ( i = 0; i != 32; i += 4 )
 {
 v0 = *(unsigned int *)((char *)v6 + i);
 *(unsigned int *)((char *)v8 + i) = v0 + v1;
 v1 = *(unsigned int *)((char *)v7 + i);
 }
 v3 = (char *)v8;
 v4 = 0;
 do
 {
 v4 += *(unsigned int *)v3;
 v3 = v3 + 4;
 }
 while ( &v9 != v3 );
 return v4;
}


/* Function: param_link_time_optimization @ 0x1660 */
long long param_link_time_optimization(int a1)
{
 return (unsigned int)(2 * a1 + 10);
}


/* Function: call_link_time_optimization @ 0x1670 */
long long call_link_time_optimization()
{
 return 20;
}


/* Function: param_division_by_zero @ 0x1680 */
long long param_division_by_zero(int a1)
{
 signal(8, (__sighandler_t)div_zero_handler);
 if ( _setjmp(jmp_buffer) )
 return 0xFFFFFFFFLL;
 else
 return (unsigned int)(10 / a1);
}


/* Function: call_division_by_zero @ 0x16D0 */
long long call_division_by_zero()
{
 int v0; // ebx
 int v1; // ebp

 v0 = param_division_by_zero(5);
 v1 = param_division_by_zero(0);
 signal(8, 0);
 return (unsigned int)(v0 + v1);
}


/* Function: param_null_pointer_deref @ 0x1710 */
long long param_null_pointer_deref(unsigned int *a1)
{
 signal(11, (__sighandler_t)segv_handler);
 if ( _setjmp(segv_buffer) )
 return 0xFFFFFFFFLL;
 else
 return *a1;
}


/* Function: call_null_pointer_deref @ 0x1760 */
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


/* Function: param_buffer_overflow_stack @ 0x17D0 */
long long param_buffer_overflow_stack(unsigned int a1)
{
 return a1;
}


/* Function: param_buffer_overflow_heap @ 0x17E0 */
long long param_buffer_overflow_heap(unsigned int a1)
{
 void *v1; // rax

 v1 = malloc(0x10u);
 if ( !v1 )
 return 4294967294LL;
 free(v1);
 return a1;
}


/* Function: call_buffer_overflow @ 0x1810 */
long long call_buffer_overflow()
{
 void *v0; // rax

 v0 = malloc(0x10u);
 if ( !v0 )
 return 8;
 free(v0);
 return 30;
}


/* Function: param_integer_overflow @ 0x1840 */
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


/* Function: call_integer_overflow @ 0x1870 */
long long call_integer_overflow()
{
 return 2000000000;
}


/* Function: param_undefined_behavior @ 0x1880 */
long long param_undefined_behavior(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: call_undefined_behavior @ 0x1890 */
long long call_undefined_behavior()
{
 return 10;
}


/* Function: param_implementation_defined @ 0x18A0 */
long long param_implementation_defined()
{
 return 47;
}


/* Function: call_implementation_defined @ 0x18B0 */
long long call_implementation_defined()
{
 return 47;
}


/* Function: test_obf_opt_edge @ 0x18C0 */
long long test_obf_opt_edge(int argc, const char **argv, const char **envp)
{
 int v0; // edx
 int v1; // eax
 int v2; // ecx
 long long v3; // rdx
 unsigned int v4; // eax
 unsigned int v5; // eax
 int v6; // ebx
 int v7; // ebp
 int v8; // ebx
 int v9; // ebp
 void *v10; // rdi
 long long v11; // rdx
 unsigned int v13; // [rsp+4h] [rbp-24h] BYREF
 unsigned long long v14; // [rsp+8h] [rbp-20h]

 v14 = __readfsqword(0x28u);
 puts(s);
 __printf_chk(1, &unk_2137, 10);
 v0 = 6;
 v1 = 5;
 do
 {
 v2 = v0;
 v0 = v1 % v0;
 v1 = v2;
 }
 while ( v0 );
 v3 = 20;
 if ( v2 != 1 )
 v3 = 35;
 __printf_chk(1, &unk_2153, v3);
 __printf_chk(1, &unk_216F, 225);
 v4 = param_string_encryption();
 __printf_chk(1, &unk_218C, v4);
 __printf_chk(1, &unk_2038, 500500);
 __printf_chk(1, &unk_2068, 5050);
 v5 = call_vectorized_loop();
 __printf_chk(1, &unk_2090, v5);
 __printf_chk(1, &unk_20B8, 20);
 v6 = param_division_by_zero(5);
 v7 = param_division_by_zero(0);
 signal(8, 0);
 __printf_chk(1, &unk_21A8, (unsigned int)(v6 + v7));
 v13 = 42;
 v8 = param_null_pointer_deref(&v13);
 v9 = param_null_pointer_deref(0);
 signal(11, 0);
 __printf_chk(1, &unk_21C4, (unsigned int)(v8 + v9));
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
 __printf_chk(1, &unk_21E1, v11);
 __printf_chk(1, &unk_20D8, 2000000000);
 __printf_chk(1, &unk_21FE, 10);
 return __printf_chk(1, &unk_2110, 47);
}


/* Function: .term_proc @ 0x1AE8 */
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
