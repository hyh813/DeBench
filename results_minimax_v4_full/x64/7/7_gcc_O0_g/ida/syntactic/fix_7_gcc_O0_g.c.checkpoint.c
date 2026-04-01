/* Standard library headers */
#include <signal.h>
#include <setjmp.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <sys/types.h>

/* External declarations for CRT/library functions */
/* Compiler intrinsic for reading FS segment register (stack canary) */
static inline unsigned long long __readfsqword(unsigned long long offset)
{
 unsigned long long val;
 __asm__ __volatile__("movq %%fs:%1, %0" : "=r"(val) : "m"(*(const char *)offset));
 return val;
}
extern int puts(const char *s);
extern int printf(const char *format, ...);
extern void *malloc(size_t size);
extern void free(void *ptr);
extern size_t strlen(const char *s);
extern char *strncpy(char *dest, const char *src, size_t n);
extern void (*signal(int sig, void (*handler)(int)))(int);
extern int _setjmp(jmp_buf env);
extern void longjmp(jmp_buf env, int val);

/* Global variables */
jmp_buf jmp_buffer;
jmp_buf segv_buffer;
int div_zero_caught;
int segv_caught;
const char *encrypted_0 = "\x1f\x0e\x13\x1c\x0e\x1b\x12\x0f\x0c\x19\x13\x1c\x0c\x1b\x0e\x19\x0c\x12\x15\x19\x0e\x1b\x0c\x15\x1a\x0c\x1c\x0e\x1a\x15\x1c\x0c"; /* Encrypted string */
const char *s = "Test: Fake Branch";
const char *format = "Result: %d\n";
const char *aObfL403D = "Obf: opaque predicate: %d\n";
const char *aObfL404D = "Obf: instruction substitution: %d\n";
const char *aObfL405D = "Obf: string encryption: %d\n";
const char *aOptL401 = "Opt: tail call: %d\n";
const char *aOptL401_0 = "Opt: non-tail call: %d\n";
const char *aOptL402 = "Opt: vectorized: %d\n";
const char *aOptL501LtoD = "Opt: LTO: %d\n";
const char *aEdgeL301D = "Edge: division by zero: %d\n";
const char *aEdgeL302D = "Edge: null pointer: %d\n";
const char *aEdgeL303D = "Edge: buffer overflow: %d\n";
const char *aEdgeL304D = "Edge: integer overflow: %d\n";
const char *aEdgeL401D = "Edge: undefined behavior: %d\n";
const char *aEdgeL402D = "Edge: implementation defined: %d\n";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/7/7_gcc_O0_g
 * Processor: pc
 */




/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 return;
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



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: param_fake_branch @ 0x1269 */
int param_fake_branch(int x)
{
 return x;
}


/* Function: call_fake_branch @ 0x128A */
int call_fake_branch()
{
 return param_fake_branch(10);
}


/* Function: param_opaque_predicate @ 0x129E */
int param_opaque_predicate(int x)
{
 int a; // [rsp+Ch] [rbp-18h]
 int b; // [rsp+10h] [rbp-14h]
 int temp; // [rsp+20h] [rbp-4h]

 a = x;
 b = x + 1;
 while ( b )
 {
 temp = b;
 b = a % b;
 a = temp;
 }
 if ( x * x + 2 * x + 1 == (x + 1) * (x + 1) && a == 1 )
 return 2 * (x + 5);
 else
 return 3 * x + 20;
}


/* Function: call_opaque_predicate @ 0x1340 */
int call_opaque_predicate()
{
 return param_opaque_predicate(5);
}


/* Function: param_instruction_substitution @ 0x1354 */
int param_instruction_substitution(int x)
{
 return (x & 0xF) + ((unsigned int)x >> 1) + 6 * x + 15 * x;
}


/* Function: call_instruction_substitution @ 0x13B3 */
int call_instruction_substitution()
{
 return param_instruction_substitution(10);
}


/* Function: decrypt_string @ 0x13C7 */
const char * decrypt_string(const char *encrypted, char *buffer, size_t len, char key)
{
 char *p; // [rsp+28h] [rbp-8h]

 strncpy(buffer, encrypted, len);
 buffer[len - 1] = 0;
 for ( p = buffer; *p; ++p )
 *p ^= key;
 return buffer;
}


/* Function: param_string_encryption @ 0x143F */
int param_string_encryption()
{
 int v0; // eax
 char decrypted[40]; // [rsp+0h] [rbp-30h] BYREF
 unsigned long long v3; // [rsp+28h] [rbp-8h]

 v3 = __readfsqword(0x28u);
 decrypt_string(encrypted_0, decrypted, 0x20u, 90);
 v0 = strlen(decrypted);
 return v0 + decrypted[0];
}


/* Function: call_string_encryption @ 0x14A7 */
int call_string_encryption()
{
 return param_string_encryption();
}


/* Function: param_tail_call_optimized @ 0x14BB */
int param_tail_call_optimized(int n, int acc)
{
 if ( n > 0 )
 return param_tail_call_optimized(n - 1, n + acc);
 else
 return acc;
}


/* Function: call_tail_call_optimized @ 0x14F1 */
int call_tail_call_optimized()
{
 return param_tail_call_optimized(1000, 0);
}


/* Function: param_non_tail_call @ 0x150A */
int param_non_tail_call(int n)
{
 if ( n > 0 )
 return n + param_non_tail_call(n - 1);
 else
 return 0;
}


/* Function: call_non_tail_call @ 0x153A */
int call_non_tail_call()
{
 return param_non_tail_call(100);
}


/* Function: param_vectorized_loop @ 0x154E */
int param_vectorized_loop(int *a, int *b, int *c, int n)
{
 int i; // [rsp+20h] [rbp-Ch]
 int sum; // [rsp+24h] [rbp-8h]
 int i_0; // [rsp+28h] [rbp-4h]

 for ( i = 0; i < n; ++i )
 c[i] = a[i] + b[i];
 sum = 0;
 for ( i_0 = 0; i_0 < n; ++i_0 )
 sum += c[i_0];
 return sum;
}


/* Function: call_vectorized_loop @ 0x15F8 */
int call_vectorized_loop()
{
 int a[8]; // [rsp+0h] [rbp-70h] BYREF
 int b[8]; // [rsp+20h] [rbp-50h] BYREF
 int c[10]; // [rsp+40h] [rbp-30h] BYREF
 unsigned long long v4; // [rsp+68h] [rbp-8h]

 v4 = __readfsqword(0x28u);
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
 memset(c, 0, 32);
 return param_vectorized_loop(a, b, c, 8);
}


/* Function: lto_target_func @ 0x16D2 */
int lto_target_func(int x)
{
 return 2 * (x + 5);
}


/* Function: param_link_time_optimization @ 0x16E3 */
int param_link_time_optimization(int x)
{
 return lto_target_func(x);
}


/* Function: call_link_time_optimization @ 0x16FE */
int call_link_time_optimization()
{
 return param_link_time_optimization(5);
}


/* Function: div_zero_handler @ 0x1712 */
void div_zero_handler(int sig)
{
 div_zero_caught = 1;
 longjmp(jmp_buffer, 1);
}


/* Function: param_division_by_zero @ 0x173F */
int param_division_by_zero(int x)
{
 signal(8, (__sighandler_t)div_zero_handler);
 if ( _setjmp(jmp_buffer) )
 return -1;
 else
 return 10 / x;
}


/* Function: call_division_by_zero @ 0x1791 */
int call_division_by_zero()
{
 int r1; // [rsp+8h] [rbp-8h]
 int r2; // [rsp+Ch] [rbp-4h]

 r1 = param_division_by_zero(5);
 r2 = param_division_by_zero(0);
 signal(8, 0);
 return r1 + r2;
}


/* Function: segv_handler @ 0x17D0 */
void segv_handler(int sig)
{
 segv_caught = 1;
 longjmp(segv_buffer, 1);
}


/* Function: param_null_pointer_deref @ 0x17FD */
int param_null_pointer_deref(int *p)
{
 signal(11, (__sighandler_t)segv_handler);
 if ( _setjmp(segv_buffer) )
 return -1;
 else
 return *p;
}


/* Function: call_null_pointer_deref @ 0x184D */
int call_null_pointer_deref()
{
 int valid; // [rsp+Ch] [rbp-14h] BYREF
 int r1; // [rsp+10h] [rbp-10h]
 int r2; // [rsp+14h] [rbp-Ch]
 unsigned long long v4; // [rsp+18h] [rbp-8h]

 v4 = __readfsqword(0x28u);
 valid = 42;
 r1 = param_null_pointer_deref(&valid);
 r2 = param_null_pointer_deref(0);
 signal(11, 0);
 return r1 + r2;
}


/* Function: param_buffer_overflow_stack @ 0x18B8 */
int param_buffer_overflow_stack(int x)
{
 int i; // [rsp+18h] [rbp-18h]
 char buffer[8]; // [rsp+20h] [rbp-10h]
 unsigned long long v4; // [rsp+28h] [rbp-8h]

 v4 = __readfsqword(0x28u);
 for ( i = 0; i <= 16; ++i )
 buffer[i] = 65;
 return x;
}


/* Function: param_buffer_overflow_heap @ 0x1923 */
int param_buffer_overflow_heap(int x)
{
 int i; // [rsp+14h] [rbp-Ch]
 char *heap_buffer; // [rsp+18h] [rbp-8h]

 heap_buffer = (char *)malloc(0x10u);
 if ( !heap_buffer )
 return -2;
 for ( i = 0; i <= 32; ++i )
 heap_buffer[i] = 66;
 free(heap_buffer);
 return x;
}


/* Function: call_buffer_overflow @ 0x1982 */
int call_buffer_overflow()
{
 int r1; // [rsp+8h] [rbp-8h]

 r1 = param_buffer_overflow_stack(10);
 return r1 + param_buffer_overflow_heap(20);
}


/* Function: param_integer_overflow @ 0x19B2 */
int param_integer_overflow(int a, int b)
{
 int signed_sum; // [rsp+8h] [rbp-10h]

 signed_sum = a + b;
 if ( a > 0 && b > 0 && signed_sum < 0 )
 return -1;
 if ( a >= 0 || b >= 0 || signed_sum <= 0 )
 return a + b;
 return -2;
}


/* Function: call_integer_overflow @ 0x1A19 */
int call_integer_overflow()
{
 int r1; // [rsp+8h] [rbp-8h]

 r1 = param_integer_overflow(1000000000, 1000000000);
 return r1 + param_integer_overflow(-1, 1);
}


/* Function: param_undefined_behavior @ 0x1A53 */
int param_undefined_behavior(int i)
{
 return 2 * i;
}


/* Function: call_undefined_behavior @ 0x1A6C */
int call_undefined_behavior()
{
 return param_undefined_behavior(5);
}


/* Function: param_implementation_defined @ 0x1A8A */
int param_implementation_defined()
{
 return 47;
}


/* Function: call_implementation_defined @ 0x1B0A */
int call_implementation_defined()
{
 return param_implementation_defined();
}


/* Function: test_obf_opt_edge @ 0x1B1E */
void test_obf_opt_edge()
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
 printf(aEdgeL402D, v13);
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
