#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <setjmp.h>
#include <stdint.h>
/* Auto-injected type definitions by preprocessor */
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;

/* Additional type definitions for signal handlers and setjmp */
typedef void (*__sighandler_t)(int);

/* Macro definitions for IDA-style code */
#define LOBYTE(x) ((unsigned char)(x))
#define LODWORD(x) ((unsigned int)(x))

/* Global variables for setjmp/longjmp */
jmp_buf jmp_buffer;
jmp_buf segv_buffer;

/* Global variables for signal handlers */
int div_zero_caught;
int segv_caught;

/* Global variables for string encryption */
char encrypted_0[32] = "Hello, World!";

/* Global variables for vectorized loop */
unsigned long long xmmword_1558;
unsigned long long xmmword_1568;
unsigned long long xmmword_1578;
unsigned long long xmmword_1588;

/* Global variables for printf format strings */
const char *asc_1328 = "Starting tests...";
const char *unk_1358 = "param_opaque_predicate(6) = %d\n";
const char *unk_1378 = "call_opaque_predicate() = %d\n";
const char *unk_1398 = "call_instruction_substitution() = %d\n";
const char *unk_13B8 = "call_string_encryption() = %d\n";
const char *unk_13D8 = "call_tail_call_optimized() = %d\n";
const char *unk_1408 = "call_non_tail_call() = %d\n";
const char *unk_1430 = "call_vectorized_loop() = %d\n";
const char *unk_1458 = "call_link_time_optimization() = %d\n";
const char *unk_1478 = "call_division_by_zero() = %d\n";
const char *unk_1498 = "call_null_pointer_deref() = %d\n";
const char *unk_14B8 = "call_buffer_overflow() = %d\n";
const char *unk_14D8 = "call_integer_overflow() = %d\n";
const char *unk_1510 = "call_undefined_behavior() = %d\n";
const char *unk_1530 = "call_implementation_defined() = %d\n";

/* CRT function declarations */
long long call_weak_fn(void);
long long test_obf_opt_edge(int argc, const char **argv, const char **envp);
void longjmp(jmp_buf env, int val);
int printf(const char *format, ...);
size_t strlen(const char *s);
int _setjmp(jmp_buf env);
void *malloc(size_t size);
void free(void *ptr);
int puts(const char *s);
char *strncpy(char *dest, const char *src, size_t n);
__sighandler_t signal(int signum, __sighandler_t handler);
void *memset(void *s, int c, size_t n);

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/7/7_gcc_O2_no_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x848 */
long long init_proc()
{
 return 0;
}


/* Function: sub_860 @ 0x860 */
void sub_860()
{
 exit(0);
}


/* Function: main @ 0x980 */
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



/* Function: div_zero_handler @ 0xAE0 */
void div_zero_handler(int signum)
{
 div_zero_caught = 1;
 longjmp(jmp_buffer, 1);
}


/* Function: segv_handler @ 0xB00 */
void segv_handler(int signum)
{
 segv_caught = 1;
 longjmp(segv_buffer, 1);
}


/* Function: param_fake_branch @ 0xB20 */
void param_fake_branch()
{
 ;
}


/* Function: call_fake_branch @ 0xB24 */
long long call_fake_branch()
{
 return 10;
}


/* Function: param_opaque_predicate @ 0xB30 */
long long param_opaque_predicate(int a1)
{
 int v1; // w1
 int v2; // w6
 int v3; // w2
 int v4; // w3

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
 if ( v2 && v4 == 1 )
 return (unsigned int)(2 * a1 + 10);
 else
 return (unsigned int)(3 * a1 + 20);
}


/* Function: call_opaque_predicate @ 0xB90 */
long long call_opaque_predicate()
{
 int v0; // w0
 int v1; // w1
 int v2; // w2

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


/* Function: param_instruction_substitution @ 0xBC0 */
long long param_instruction_substitution(unsigned int a1)
{
 return 6 * a1 + (a1 >> 1) + (a1 & 0xF) + 15 * a1;
}


/* Function: call_instruction_substitution @ 0xBE4 */
long long call_instruction_substitution()
{
 return 225;
}


/* Function: decrypt_string @ 0xBF0 */
char * decrypt_string(char *src, char *dest, size_t a3, char a4)
{
 char *result; // x0
 char v7; // w2
 char *v8; // x4
 int v9; // t1

 result = strncpy(dest, src, a3);
 dest[a3 - 1] = 0;
 v7 = *result;
 if ( *result )
 {
 v8 = result;
 do
 {
 *v8 = a4 ^ v7;
 v9 = (unsigned char)*++v8;
 v7 = v9;
 }
 while ( v9 );
 }
 return result;
}


/* Function: param_string_encryption @ 0xC50 */
long long param_string_encryption()
{
 char *v0;
 int v1;
 const char *v2;
 int v3;
 char dest[32];

 strncpy(dest, encrypted_0, 0x1Fu);
 v1 = (unsigned char)dest[0];
 dest[31] = 0;
 v2 = dest;
 if ( dest[0] )
 {
 v0 = dest;
 do
 {
 *v0 = v1 ^ 0x5A;
 ++v0;
 v3 = (unsigned char)*v0;
 v1 = v3;
 }
 while ( v3 );
 v1 = (unsigned char)dest[0];
 }
 return v1 + (unsigned int)strlen(v2);
}


/* Function: call_string_encryption @ 0xCF0 */
// attributes: thunk
long long call_string_encryption()
{
 return param_string_encryption();
}


/* Function: param_tail_call_optimized @ 0xCF4 */
long long param_tail_call_optimized(int a1, unsigned int a2)
{
 long long result; // x0
 int v4; // w1

 result = a2;
 if ( a1 > 0 )
 {
 do
 {
 v4 = a1--;
 result = (unsigned int)(result + v4);
 }
 while ( a1 );
 }
 return result;
}


/* Function: call_tail_call_optimized @ 0xD20 */
long long call_tail_call_optimized()
{
 return 500500;
}


/* Function: param_non_tail_call @ 0xD30 */
long long param_non_tail_call(int a1)
{
 long long result; // x0
 int v3; // w2

 result = 0;
 if ( a1 > 0 )
 {
 do
 {
 v3 = a1--;
 result = (unsigned int)(result + v3);
 }
 while ( a1 );
 }
 return result;
}


/* Function: call_non_tail_call @ 0xD54 */
long long call_non_tail_call()
{
 return 5050;
}


/* Function: param_vectorized_loop @ 0xD60 */
long long param_vectorized_loop(long long a1, long long a2, long long a3, int a4)
{
 long long v4; // x4
 long long v5; // x1
 long long result; // x0
 int v7; // w4

 if ( a4 <= 0 )
 return 0;
 v4 = 0;
 do
 {
 *(unsigned int *)(a3 + 4 * v4) = *(unsigned int *)(a1 + 4 * v4) + *(unsigned int *)(a2 + 4 * v4);
 ++v4;
 }
 while ( a4 > (int)v4 );
 v5 = 0;
 result = 0;
 do
 {
 v7 = *(unsigned int *)(a3 + 4 * v5++);
 result = (unsigned int)(result + v7);
 }
 while ( a4 > (int)v5 );
 return result;
}


/* Function: call_vectorized_loop @ 0xDC0 */
long long call_vectorized_loop()
{
 long long v0;
 char *v1;
 char *v2;
 char *v3;
 long long v4;
 long long result;
 char *v6;
 unsigned long long *v7;
 unsigned long long *v8;
 unsigned long long *v9;
 unsigned long long v7_arr[2];
 unsigned long long v8_arr[2];
 unsigned long long v9_arr[4];

 v0 = 1;
 v7 = v7_arr;
 v8 = v8_arr;
 v9 = v9_arr;
 memset(v9, 0, sizeof(v9_arr));
 v7[0] = xmmword_1558;
 v7[1] = xmmword_1568;
 v8[0] = xmmword_1578;
 v8[1] = xmmword_1588;
 do
 {
 v1 = (char *)v7 + 4 * v0;
 v2 = (char *)v8 + 4 * v0;
 v3 = (char *)v9 + 4 * v0;
 ++v0;
 *(unsigned int *)(v3) = *(unsigned int *)(v1) + *(unsigned int *)(v2);
 }
 while ( v0 != 9 );
 v4 = 1;
 result = 0;
 do
 {
 v6 = (char *)v9 + 4 * v4;
 ++v4;
 result = (unsigned int)(result + *(unsigned int *)(v6));
 }
 while ( v4 != 9 );
 return result;
}


/* Function: param_link_time_optimization @ 0xE90 */
long long param_link_time_optimization(int a1)
{
 return (unsigned int)(2 * (a1 + 5));
}


/* Function: call_link_time_optimization @ 0xEA0 */
long long call_link_time_optimization()
{
 return 20;
}


/* Function: param_division_by_zero @ 0xEB0 */
long long param_division_by_zero(int a1)
{
 signal(8, div_zero_handler);
 if ( _setjmp(jmp_buffer) )
 return 0xFFFFFFFFLL;
 else
 return (unsigned int)(10 / a1);
}


/* Function: call_division_by_zero @ 0xF00 */
long long call_division_by_zero()
{
 int v0; // w20
 int v1; // w19

 v0 = param_division_by_zero(5);
 v1 = param_division_by_zero(0);
 signal(8, 0);
 return (unsigned int)(v0 + v1);
}


/* Function: param_null_pointer_deref @ 0xF40 */
long long param_null_pointer_deref(unsigned int *a1)
{
 signal(11, segv_handler);
 if ( _setjmp(segv_buffer) )
 return 0xFFFFFFFFLL;
 else
 return *a1;
}


/* Function: call_null_pointer_deref @ 0xF90 */
long long call_null_pointer_deref()
{
 int v0; // w19
 int v1; // w20
 unsigned int v3; // [xsp+24h] [xbp+24h] BYREF

 v3 = 42;
 v0 = param_null_pointer_deref(&v3);
 v1 = param_null_pointer_deref(0);
 signal(11, 0);
 return (unsigned int)(v0 + v1);
}


/* Function: param_buffer_overflow_stack @ 0x1010 */
void param_buffer_overflow_stack()
{
 ;
}


/* Function: param_buffer_overflow_heap @ 0x1014 */
long long param_buffer_overflow_heap(unsigned int a1)
{
 void *v2; // x0

 v2 = malloc(0x10u);
 if ( !v2 )
 return 4294967294LL;
 free(v2);
 return a1;
}


/* Function: call_buffer_overflow @ 0x1050 */
long long call_buffer_overflow()
{
 void *v0; // x0

 v0 = malloc(0x10u);
 if ( !v0 )
 return 8;
 free(v0);
 return 30;
}


/* Function: param_integer_overflow @ 0x1080 */
long long param_integer_overflow(int a1, int a2)
{
 bool v3; // zf
 bool v4; // nf
 long long result; // x0
 bool v6; // zf
 bool v7; // nf

 if ( a1 > 0 )
 {
 v3 = a2 == 0;
 v4 = a2 < 0;
 }
 else
 {
 v3 = 1;
 v4 = 0;
 }
 result = a1 + a2;
 if ( v4 || v3 )
 {
 if ( (a1 & a2) < 0 )
 {
 v6 = (unsigned int)result == 0;
 v7 = (int)result < 0;
 }
 else
 {
 v6 = 1;
 v7 = 0;
 }
 if ( v7 || v6 )
 return (unsigned int)result;
 else
 return 4294967294LL;
 }
 else if ( (int)result < 0 )
 {
 return 0xFFFFFFFFLL;
 }
 else
 {
 return (unsigned int)result;
 }
}


/* Function: call_integer_overflow @ 0x10B4 */
long long call_integer_overflow()
{
 return 2000000000;
}


/* Function: param_undefined_behavior @ 0x10C0 */
long long param_undefined_behavior(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: call_undefined_behavior @ 0x10D0 */
long long call_undefined_behavior()
{
 return 10;
}


/* Function: param_implementation_defined @ 0x10E0 */
long long param_implementation_defined()
{
 return 48;
}


/* Function: call_implementation_defined @ 0x10F0 */
long long call_implementation_defined()
{
 return 48;
}


/* Function: test_obf_opt_edge @ 0x1100 */
long long test_obf_opt_edge(int argc, const char **argv, const char **envp)
{
 int v0;
 int v1;
 int v2;
 long long v3;
 unsigned int v4;
 unsigned int v5;
 long long v6;
 long long v7;
 long long v8;
 long long v9;
 void *v10;
 long long v11;
 unsigned int v13;

  puts(asc_1328);
 printf(unk_1358, 10);
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
 v3 = 20;
 else
 v3 = 35;
 printf(unk_1378, v3);
 printf(unk_1398, 225);
 v4 = param_string_encryption();
 printf(unk_13B8, v4);
 printf(unk_13D8, 500500);
 printf(unk_1408, 5050);
 v5 = call_vectorized_loop();
 printf(unk_1430, v5);
 printf(unk_1458, 20);
 v6 = param_division_by_zero(5);
 v7 = param_division_by_zero(0);
 signal(8, 0);
 printf(unk_1478, v6 + v7);
 v13 = 42;
 v8 = param_null_pointer_deref(&v13);
 v9 = param_null_pointer_deref(0);
 signal(11, 0);
 printf(unk_1498, v8 + v9);
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
 printf(unk_14B8, v11);
 printf(unk_14D8, 2000000000);
 printf(unk_1510, 10);
 printf(unk_1530, 48);
 return 48;
}


/* Function: .term_proc @ 0x130C */
void term_proc()
{
 ;
}


/* FAILED to decompile: strlen @ 0x122F0 */

/* FAILED to decompile: _setjmp @ 0x122F8 */

/* FAILED to decompile: __libc_start_main @ 0x12300 */

/* FAILED to decompile: __cxa_finalize @ 0x12308 */

/* FAILED to decompile: signal @ 0x12310 */

/* FAILED to decompile: malloc @ 0x12318 */

/* FAILED to decompile: __printf_chk @ 0x12320 */

/* FAILED to decompile: __stack_chk_fail @ 0x12328 */

/* FAILED to decompile: abort @ 0x12338 */

/* FAILED to decompile: puts @ 0x12340 */

/* FAILED to decompile: free @ 0x12348 */

/* FAILED to decompile: __longjmp_chk @ 0x12350 */

/* FAILED to decompile: strncpy @ 0x12358 */

/* FAILED to decompile: __gmon_start__ @ 0x12368 */

/* Total functions decompiled: 43, failed: 14 */
