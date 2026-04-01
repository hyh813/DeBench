/* Auto-injected type definitions by preprocessor */
#include <stdint.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <setjmp.h>

/* External declarations for standard library functions */
long long lto_target_func(int a1);

/* External function pointer for gmon profiling */
long long (*_gmon_start__)(void);

/* Global variables */
static int div_zero_caught = 0;
static int segv_caught = 0;
static jmp_buf jmp_buffer;
static jmp_buf segv_buffer;

/* Encrypted string for string encryption test */
static const char param_string_encryption_encrypted[32] = {
  'H', 'Z', 'Q', 'V', 'Q', 'V', '[', 'Q', 'V', 'Q', 'V', '[', 'Q', 'V', 'Q', 'V',
  '[', 'Q', 'V', 'Q', 'V', '[', 'Q', 'V', 'Q', 'V', '[', 'Q', 'V', 'Q', 'V', '['
};

/* Format strings */
static const char format[] = "";
static const char aObfL402D[] = "Fake branch: %d\n";
static const char aObfL403D[] = "Opaque predicate: %d\n";
static const char aObfL404D[] = "Instruction substitution: %d\n";
static const char aObfL405D[] = "String encryption: %zu\n";
static const char aOptL401[] = "Tail call optimized: %d\n";
static const char aOptL401_0[] = "Non-tail call: %d\n";
static const char aOptL402[] = "Vectorized loop: %d\n";
static const char aOptL501LtoD[] = "LTO: %d\n";
static const char aEdgeL301D[] = "Division by zero: %d\n";
static const char aEdgeL302D[] = "Null pointer deref: %d\n";
static const char aEdgeL303D[] = "Buffer overflow: %d\n";
static const char aEdgeL304D[] = "Integer overflow: %d\n";
static const char aEdgeL401D[] = "Undefined behavior: %d\n";
static const char aEdgeL402D[] = "Implementation defined: %d\n";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/7/7_clang_O0_no_g
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



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: param_fake_branch @ 0x11C0 */
long long param_fake_branch(unsigned int a1)
{
 unsigned int v2; // [rsp+8h] [rbp-8h]

 v2 = a1;
 if ( ((a1 * a1) & 0x80000000) != 0 )
 v2 = 2 * a1 - 559038737;
 strlen("test");
 return v2;
}


/* Function: call_fake_branch @ 0x1230 */
long long call_fake_branch()
{
 return param_fake_branch(0xAu);
}


/* Function: param_opaque_predicate @ 0x1240 */
long long param_opaque_predicate(int a1)
{
 int v2; // [rsp+8h] [rbp-18h]
 int v3; // [rsp+Ch] [rbp-14h]
 int v4; // [rsp+10h] [rbp-10h]

 v4 = a1;
 v3 = a1 + 1;
 while ( v3 )
 {
 v2 = v3;
 v3 = v4 % v3;
 v4 = v2;
 }
 if ( 2 * a1 + a1 * a1 + 1 == (a1 + 1) * (a1 + 1) && v4 == 1 )
 return (unsigned int)(2 * a1 + 10);
 else
 return (unsigned int)(3 * a1 + 20);
}


/* Function: call_opaque_predicate @ 0x1320 */
long long call_opaque_predicate()
{
 return param_opaque_predicate(5);
}


/* Function: param_instruction_substitution @ 0x1330 */
long long param_instruction_substitution(unsigned int a1)
{
 return 15 * a1 + (a1 & 0xF) + (a1 >> 1) + 6 * a1;
}


/* Function: call_instruction_substitution @ 0x1380 */
long long call_instruction_substitution()
{
 return param_instruction_substitution(0xAu);
}


/* Function: decrypt_string @ 0x1390 */
char * decrypt_string(const char *a1, char *a2, size_t a3, char a4)
{
 char *i; // [rsp+8h] [rbp-28h]

 strncpy(a2, a1, a3);
 a2[a3 - 1] = 0;
 for ( i = a2; *i; ++i )
 *i ^= a4;
 return a2;
}


/* Function: param_string_encryption @ 0x1410 */
size_t param_string_encryption()
{
 size_t v0; // rax
 char s[32]; // [rsp+0h] [rbp-20h] BYREF

 decrypt_string(param_string_encryption_encrypted, s, 0x20u, 90);
 v0 = strlen(s);
 return s[0] + v0;
}


/* Function: call_string_encryption @ 0x1450 */
size_t call_string_encryption()
{
 return param_string_encryption();
}


/* Function: param_tail_call_optimized @ 0x1460 */
long long param_tail_call_optimized(int a1, unsigned int a2)
{
 if ( a1 > 0 )
 return (unsigned int)param_tail_call_optimized((unsigned int)(a1 - 1), a1 + a2);
 else
 return a2;
}


/* Function: call_tail_call_optimized @ 0x14A0 */
long long call_tail_call_optimized()
{
 return param_tail_call_optimized(1000, 0);
}


/* Function: param_non_tail_call @ 0x14C0 */
long long param_non_tail_call(int a1)
{
 if ( a1 > 0 )
 return (unsigned int)(param_non_tail_call((unsigned int)(a1 - 1)) + a1);
 else
 return 0;
}


/* Function: call_non_tail_call @ 0x1510 */
long long call_non_tail_call()
{
 return param_non_tail_call(100);
}


/* Function: param_vectorized_loop @ 0x1520 */
long long param_vectorized_loop(long long a1, long long a2, long long a3, int a4)
{
 int j; // [rsp+0h] [rbp-28h]
 unsigned int v6; // [rsp+4h] [rbp-24h]
 int i; // [rsp+8h] [rbp-20h]

 for ( i = 0; i < a4; ++i )
 *(unsigned int *)(a3 + 4LL * i) = *(unsigned int *)(a2 + 4LL * i) + *(unsigned int *)(a1 + 4LL * i);
 v6 = 0;
 for ( j = 0; j < a4; ++j )
 v6 += *(unsigned int *)(a3 + 4LL * j);
 return v6;
}


/* Function: call_vectorized_loop @ 0x15C0 */
long long call_vectorized_loop()
{
 unsigned char s[32]; // [rsp+0h] [rbp-60h] BYREF
 unsigned long long v2[4]; // [rsp+20h] [rbp-40h] BYREF
 unsigned long long v3[4]; // [rsp+40h] [rbp-20h] BYREF

 v3[0] = 0x200000001LL;
 v3[1] = 0x400000003LL;
 v3[2] = 0x600000005LL;
 v3[3] = 0x800000007LL;
 v2[0] = 0x700000008LL;
 v2[1] = 0x500000006LL;
 v2[2] = 0x300000004LL;
 v2[3] = 0x100000002LL;
 memset(s, 0, sizeof(s));
 return param_vectorized_loop((long long)v3, (long long)v2, (long long)s, 8);
}


/* Function: param_link_time_optimization @ 0x1650 */
long long param_link_time_optimization(unsigned int a1)
{
 return lto_target_func(a1);
}


/* Function: lto_target_func @ 0x1670 */
long long lto_target_func(int a1)
{
 return (unsigned int)(2 * a1 + 10);
}


/* Function: call_link_time_optimization @ 0x1690 */
long long call_link_time_optimization()
{
 return param_link_time_optimization(5u);
}


/* Function: div_zero_handler @ 0x16A0 */
void div_zero_handler()
{
 div_zero_caught = 1;
 longjmp(jmp_buffer, 1);
}


/* Function: param_division_by_zero @ 0x16D0 */
long long param_division_by_zero(int a1)
{
 signal(8, (__sighandler_t)div_zero_handler);
 if ( _setjmp(jmp_buffer) )
 return (unsigned int)-1;
 else
 return (unsigned int)(10 / a1);
}


/* Function: call_division_by_zero @ 0x1730 */
long long call_division_by_zero()
{
 int v1; // [rsp+8h] [rbp-8h]
 int v2; // [rsp+Ch] [rbp-4h]

 v2 = param_division_by_zero(5);
 v1 = param_division_by_zero(0);
 signal(8, 0);
 return (unsigned int)(v1 + v2);
}


/* Function: segv_handler @ 0x1770 */
void segv_handler()
{
 segv_caught = 1;
 longjmp(segv_buffer, 1);
}


/* Function: param_null_pointer_deref @ 0x17A0 */
long long param_null_pointer_deref(unsigned int *a1)
{
 signal(11, (__sighandler_t)segv_handler);
 if ( _setjmp(segv_buffer) )
 return (unsigned int)-1;
 else
 return *a1;
}


/* Function: call_null_pointer_deref @ 0x1800 */
long long call_null_pointer_deref()
{
 int v1; // [rsp+4h] [rbp-Ch]
 int v2; // [rsp+8h] [rbp-8h]
 unsigned int v3; // [rsp+Ch] [rbp-4h] BYREF

 v3 = 42;
 v2 = param_null_pointer_deref(&v3);
 v1 = param_null_pointer_deref(0);
 signal(11, 0);
 return (unsigned int)(v1 + v2);
}


/* Function: param_buffer_overflow_stack @ 0x1850 */
long long param_buffer_overflow_stack(unsigned int a1)
{
 int i; // [rsp+4h] [rbp-14h]
 unsigned char v3[8]; // [rsp+Ch] [rbp-Ch]
 unsigned int v4; // [rsp+14h] [rbp-4h]

 v4 = a1;
 for ( i = 0; i <= 16; ++i )
 v3[i] = 65;
 return v4;
}


/* Function: param_buffer_overflow_heap @ 0x18B0 */
long long param_buffer_overflow_heap(unsigned int a1)
{
 int i; // [rsp+Ch] [rbp-14h]
 unsigned char *ptr; // [rsp+10h] [rbp-10h]

 ptr = malloc(0x10u);
 if ( ptr )
 {
 for ( i = 0; i <= 32; ++i )
 ptr[i] = 66;
 free(ptr);
 return a1;
 }
 else
 {
 return (unsigned int)-2;
 }
}


/* Function: call_buffer_overflow @ 0x1930 */
long long call_buffer_overflow()
{
 int v1; // [rsp+Ch] [rbp-4h]

 v1 = param_buffer_overflow_stack(0xAu);
 return (unsigned int)param_buffer_overflow_heap(0x14u) + v1;
}


/* Function: param_integer_overflow @ 0x1960 */
long long param_integer_overflow(int a1, int a2)
{
 int v3; // [rsp+Ch] [rbp-10h]

 v3 = a2 + a1;
 if ( a1 <= 0 || a2 <= 0 || v3 >= 0 )
 {
 if ( a1 >= 0 || a2 >= 0 || v3 <= 0 )
 return (unsigned int)(a2 + a1);
 else
 return (unsigned int)-2;
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: call_integer_overflow @ 0x19F0 */
long long call_integer_overflow()
{
 int v1; // [rsp+Ch] [rbp-4h]

 v1 = param_integer_overflow(1000000000, 1000000000);
 return (unsigned int)param_integer_overflow(-1, 1) + v1;
}


/* Function: param_undefined_behavior @ 0x1A30 */
long long param_undefined_behavior(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: call_undefined_behavior @ 0x1A50 */
long long call_undefined_behavior()
{
 return (unsigned int)param_undefined_behavior(5);
}


/* Function: param_implementation_defined @ 0x1A70 */
long long param_implementation_defined()
{
 return 47;
}


/* Function: call_implementation_defined @ 0x1B00 */
long long call_implementation_defined()
{
 return param_implementation_defined();
}


/* Function: test_obf_opt_edge @ 0x1B10 */
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

 printf(format);
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


/* Function: main @ 0x1C50 */
int main(int argc, const char **argv, const char **envp)
{
 test_obf_opt_edge();
 return 0;
}


/* Function: .term_proc @ 0x1C6C */
void term_proc()
{
 ;
}


/* FAILED to decompile: free @ 0x4240 */

/* FAILED to decompile: __libc_start_main @ 0x4248 */

/* FAILED to decompile: strncpy @ 0x4250 */

/* FAILED to decompile: strlen @ 0x4258 */

/* FAILED to decompile: printf @ 0x4260 */

/* FAILED to decompile: memset @ 0x4268 */

/* FAILED to decompile: _setjmp @ 0x4270 */

/* FAILED to decompile: signal @ 0x4278 */

/* FAILED to decompile: malloc @ 0x4280 */

/* FAILED to decompile: longjmp @ 0x4288 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x4290 */

/* FAILED to decompile: __gmon_start__ @ 0x42A0 */

/* Total functions decompiled: 43, failed: 12 */
