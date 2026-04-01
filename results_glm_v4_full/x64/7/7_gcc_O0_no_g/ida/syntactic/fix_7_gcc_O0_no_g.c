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

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/7/7_gcc_O0_no_g
 * Processor: pc
 */

#include <setjmp.h>
#include <signal.h>
#include <string.h>

/* Compiler intrinsic for stack canary access */
static inline unsigned long long __readfsqword(unsigned long offset) {
    unsigned long long val;
    __asm__ volatile ("movq %%fs:%1,%0" : "=r" (val) : "m" (*(const unsigned long long *)(offset)));
    return val;
}

/* Global variables for exception handling */
jmp_buf jmp_buffer;
jmp_buf segv_buffer;
int div_zero_caught;
int segv_caught;



/* Encrypted string constants */
const char encrypted_0[] = {0x1A, 0x1F, 0x13, 0x19, 0x16, 0x0D, 0x18, 0x13, 0x14, 0x1B, 0x15, 0x14, 0x1C, 0x10, 0x19, 0x17, 0x14, 0x1B, 0x0E, 0x19, 0x18, 0x1B, 0x11, 0x19, 0x18, 0x16, 0x13, 0x19, 0x17, 0x15, 0x14, 0x00};

/* Format strings for test output */
const char s[] = "Testing obfuscation and optimization features:\n";
const char format[] = "call_fake_branch: %lld\n";
const char aObfL403D[] = "call_opaque_predicate: %lld\n";
const char aObfL404D[] = "call_instruction_substitution: %lld\n";
const char aObfL405D[] = "call_string_encryption: %lld\n";
const char aOptL401[] = "call_tail_call_optimized: %lld\n";
const char aOptL401_0[] = "call_non_tail_call: %lld\n";
const char aOptL402[] = "call_vectorized_loop: %lld\n";
const char aOptL501LtoD[] = "call_link_time_optimization: %lld\n";
const char aEdgeL301D[] = "call_division_by_zero: %lld\n";
const char aEdgeL302D[] = "call_null_pointer_deref: %lld\n";
const char aEdgeL303D[] = "call_buffer_overflow: %lld\n";
const char aEdgeL304D[] = "call_integer_overflow: %lld\n";
const char aEdgeL401D[] = "call_undefined_behavior: %lld\n";
const char aEdgeL402D[] = "call_implementation_defined: %lld\n";








/* Function: param_fake_branch @ 0x1269 */
long long param_fake_branch(unsigned int a1)
{
 return a1;
}


/* Function: call_fake_branch @ 0x128A */
long long call_fake_branch()
{
 return param_fake_branch(0xAu);
}


/* Function: param_opaque_predicate @ 0x129E */
long long param_opaque_predicate(int a1)
{
 int v2; // [rsp+Ch] [rbp-18h]
 int v3; // [rsp+10h] [rbp-14h]
 int v4; // [rsp+20h] [rbp-4h]

 v2 = a1;
 v3 = a1 + 1;
 while ( v3 )
 {
 v4 = v3;
 v3 = v2 % v3;
 v2 = v4;
 }
 if ( a1 * a1 + 2 * a1 + 1 == (a1 + 1) * (a1 + 1) && v2 == 1 )
 return (unsigned int)(2 * (a1 + 5));
 else
 return (unsigned int)(3 * a1 + 20);
}


/* Function: call_opaque_predicate @ 0x1340 */
long long call_opaque_predicate()
{
 return param_opaque_predicate(5);
}


/* Function: param_instruction_substitution @ 0x1354 */
long long param_instruction_substitution(unsigned int a1)
{
 return (a1 & 0xF) + (a1 >> 1) + 6 * a1 + 15 * a1;
}


/* Function: call_instruction_substitution @ 0x13B3 */
long long call_instruction_substitution()
{
 return param_instruction_substitution(0xAu);
}


/* Function: decrypt_string @ 0x13C7 */
char * decrypt_string(const char *a1, char *a2, size_t a3, char a4)
{
 char *i; // [rsp+28h] [rbp-8h]

 strncpy(a2, a1, a3);
 a2[a3 - 1] = 0;
 for ( i = a2; *i; ++i )
 *i ^= a4;
 return a2;
}


/* Function: param_string_encryption @ 0x143F */
long long param_string_encryption()
{
 int v0; // eax
 char s[40]; // [rsp+0h] [rbp-30h] BYREF
 unsigned long long v3; // [rsp+28h] [rbp-8h]

 v3 = __readfsqword(0x28u);
 decrypt_string(encrypted_0, s, 0x20u, 90);
 v0 = strlen(s);
 return (unsigned int)(v0 + s[0]);
}


/* Function: call_string_encryption @ 0x14A7 */
long long call_string_encryption()
{
 return param_string_encryption();
}


/* Function: param_tail_call_optimized @ 0x14BB */
long long param_tail_call_optimized(int a1, unsigned int a2)
{
 if ( a1 > 0 )
 return param_tail_call_optimized((unsigned int)(a1 - 1), a1 + a2);
 else
 return a2;
}


/* Function: call_tail_call_optimized @ 0x14F1 */
long long call_tail_call_optimized()
{
 return param_tail_call_optimized(1000, 0);
}


/* Function: param_non_tail_call @ 0x150A */
long long param_non_tail_call(int a1)
{
 if ( a1 > 0 )
 return a1 + (unsigned int)param_non_tail_call((unsigned int)(a1 - 1));
 else
 return 0;
}


/* Function: call_non_tail_call @ 0x153A */
long long call_non_tail_call()
{
 return param_non_tail_call(100);
}


/* Function: param_vectorized_loop @ 0x154E */
long long param_vectorized_loop(long long a1, long long a2, long long a3, int a4)
{
 int i; // [rsp+20h] [rbp-Ch]
 unsigned int v6; // [rsp+24h] [rbp-8h]
 int j; // [rsp+28h] [rbp-4h]

 for ( i = 0; i < a4; ++i )
 *(unsigned int *)(4LL * i + a3) = *(unsigned int *)(4LL * i + a1) + *(unsigned int *)(4LL * i + a2);
 v6 = 0;
 for ( j = 0; j < a4; ++j )
 v6 += *(unsigned int *)(4LL * j + a3);
 return v6;
}


/* Function: call_vectorized_loop @ 0x15F8 */
long long call_vectorized_loop()
{
 unsigned int v1[8]; // [rsp+0h] [rbp-70h] BYREF
 unsigned int v2[8]; // [rsp+20h] [rbp-50h] BYREF
 unsigned long long v3[6]; // [rsp+40h] [rbp-30h] BYREF

 v3[5] = __readfsqword(0x28u);
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
 memset(v3, 0, 32);
 return param_vectorized_loop((long long)v1, (long long)v2, (long long)v3, 8);
}


/* Function: lto_target_func @ 0x16D2 */
long long lto_target_func(int a1)
{
 return (unsigned int)(2 * (a1 + 5));
}


/* Function: param_link_time_optimization @ 0x16E3 */
long long param_link_time_optimization(int a1)
{
 return lto_target_func(a1);
}


/* Function: call_link_time_optimization @ 0x16FE */
long long call_link_time_optimization()
{
 return param_link_time_optimization(5);
}


/* Function: div_zero_handler @ 0x1712 */
void div_zero_handler()
{
 div_zero_caught = 1;
 longjmp(jmp_buffer, 1);
}


/* Function: param_division_by_zero @ 0x173F */
long long param_division_by_zero(int a1)
{
 signal(8, (__sighandler_t)div_zero_handler);
 if ( _setjmp(jmp_buffer) )
 return 0xFFFFFFFFLL;
 else
 return (unsigned int)(10 / a1);
}


/* Function: call_division_by_zero @ 0x1791 */
long long call_division_by_zero()
{
 int v1; // [rsp+8h] [rbp-8h]
 int v2; // [rsp+Ch] [rbp-4h]

 v1 = param_division_by_zero(5);
 v2 = param_division_by_zero(0);
 signal(8, 0);
 return (unsigned int)(v1 + v2);
}


/* Function: segv_handler @ 0x17D0 */
void segv_handler()
{
 segv_caught = 1;
 longjmp(segv_buffer, 1);
}


/* Function: param_null_pointer_deref @ 0x17FD */
long long param_null_pointer_deref(unsigned int *a1)
{
 signal(11, (__sighandler_t)segv_handler);
 if ( _setjmp(segv_buffer) )
 return 0xFFFFFFFFLL;
 else
 return *a1;
}


/* Function: call_null_pointer_deref @ 0x184D */
long long call_null_pointer_deref()
{
 unsigned int v1; // [rsp+Ch] [rbp-14h] BYREF
 int v2; // [rsp+10h] [rbp-10h]
 int v3; // [rsp+14h] [rbp-Ch]
 unsigned long long v4; // [rsp+18h] [rbp-8h]

 v4 = __readfsqword(0x28u);
 v1 = 42;
 v2 = param_null_pointer_deref(&v1);
 v3 = param_null_pointer_deref(0);
 signal(11, 0);
 return (unsigned int)(v2 + v3);
}


/* Function: param_buffer_overflow_stack @ 0x18B8 */
long long param_buffer_overflow_stack(unsigned int a1)
{
 int i; // [rsp+18h] [rbp-18h]
 unsigned char v3[8]; // [rsp+20h] [rbp-10h]
 unsigned long long v4; // [rsp+28h] [rbp-8h]

 v4 = __readfsqword(0x28u);
 for ( i = 0; i <= 16; ++i )
 v3[i] = 65;
 return a1;
}


/* Function: param_buffer_overflow_heap @ 0x1923 */
long long param_buffer_overflow_heap(unsigned int a1)
{
 int i; // [rsp+14h] [rbp-Ch]
 unsigned char *ptr; // [rsp+18h] [rbp-8h]

 ptr = malloc(0x10u);
 if ( !ptr )
 return 4294967294LL;
 for ( i = 0; i <= 32; ++i )
 ptr[i] = 66;
 free(ptr);
 return a1;
}


/* Function: call_buffer_overflow @ 0x1982 */
long long call_buffer_overflow()
{
 int v1; // [rsp+8h] [rbp-8h]

 v1 = param_buffer_overflow_stack(0xAu);
 return v1 + (unsigned int)param_buffer_overflow_heap(0x14u);
}


/* Function: param_integer_overflow @ 0x19B2 */
long long param_integer_overflow(int a1, int a2)
{
 int v3; // [rsp+8h] [rbp-10h]

 v3 = a1 + a2;
 if ( a1 > 0 && a2 > 0 && v3 < 0 )
 return 0xFFFFFFFFLL;
 if ( a1 >= 0 || a2 >= 0 || v3 <= 0 )
 return (unsigned int)(a1 + a2);
 return 4294967294LL;
}


/* Function: call_integer_overflow @ 0x1A19 */
long long call_integer_overflow()
{
 int v1; // [rsp+8h] [rbp-8h]

 v1 = param_integer_overflow(1000000000, 1000000000);
 return v1 + (unsigned int)param_integer_overflow(-1, 1);
}


/* Function: param_undefined_behavior @ 0x1A53 */
long long param_undefined_behavior(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: call_undefined_behavior @ 0x1A6C */
long long call_undefined_behavior()
{
 return (unsigned int)param_undefined_behavior(5);
}


/* Function: param_implementation_defined @ 0x1A8A */
long long param_implementation_defined()
{
 return 47;
}


/* Function: call_implementation_defined @ 0x1B0A */
long long call_implementation_defined()
{
 return param_implementation_defined();
}


/* Function: test_obf_opt_edge @ 0x1B1E */
int test_obf_opt_edge()
{
 unsigned int v0; // eax
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax
 unsigned int v4; // eax
 unsigned int v5; // eax
 unsigned int v6; // eax
 unsigned int v7; // eax
 unsigned int v8; // eax
 unsigned int v9; // eax
 unsigned int v10; // eax
 unsigned int v11; // eax
 unsigned int v12; // eax
 unsigned int v13; // eax

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
 return printf(aEdgeL402D, v13);
}


/* Function: main @ 0x1CF8 */
int main(int argc, const char **argv, const char **envp)
{
 test_obf_opt_edge();
 return 0;
}


/* Function: .term_proc @ 0x1D14 */
void term_proc()
{
 ;
}


/* FAILED to decompile: free @ 0x41F8 */

/* FAILED to decompile: __libc_start_main @ 0x4200 */

/* FAILED to decompile: strncpy @ 0x4208 */

/* FAILED to decompile: puts @ 0x4210 */

/* FAILED to decompile: strlen @ 0x4218 */

/* FAILED to decompile: __stack_chk_fail @ 0x4220 */

/* FAILED to decompile: printf @ 0x4228 */

/* FAILED to decompile: _setjmp @ 0x4230 */

/* FAILED to decompile: signal @ 0x4238 */

/* FAILED to decompile: malloc @ 0x4240 */

/* FAILED to decompile: longjmp @ 0x4248 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x4250 */

/* FAILED to decompile: __gmon_start__ @ 0x4260 */

/* Total functions decompiled: 53, failed: 13 */
