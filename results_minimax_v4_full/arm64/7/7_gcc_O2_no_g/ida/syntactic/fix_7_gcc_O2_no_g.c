/* Auto-injected type definitions by preprocessor */
#ifndef _STDINT_TYPES_H
#ifndef __int64_t_defined
typedef unsigned long long uint64_t;
#define __int64_t_defined
#endif
#ifndef _UINT8_T_DECLARED
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
#endif
#endif

/* Standard library includes */
#include <setjmp.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/* Global variables for exception handling */
jmp_buf jmp_buffer;
jmp_buf segv_buffer;
int div_zero_caught;
int segv_caught;

/* Function declarations for stdlib functions */
int __printf_chk(int flag, const char *format, ...);

/* Macros for common operations */
#define LODWORD(x) (*(uint32_t*)&(x))
#define LOBYTE(x) (*(uint8_t*)&(x))
#define SET_LOBYTE(x, v) ((x) = ((x) & ~0xFF) | ((uint8_t)(v) & 0xFF))

/* Global data for string encryption and vectorized loops */
static const char encrypted_0[32] = "??????????????????????????????";
static const unsigned long long xmmword_1558 = 0;
static const unsigned long long xmmword_1568 = 0;
static const unsigned long long xmmword_1578 = 0;
static const unsigned long long xmmword_1588 = 0;

/* String constants for test_obf_opt_edge */
static const char asc_1328[] = "Obfuscated Testing Suite\n";
static const char unk_1358[] = "opaque predicate (call): %d\n";
static const char unk_1378[] = "opaque predicate (param): %lld\n";
static const char unk_1398[] = "instruction substitution: %d\n";
static const char unk_13B8[] = "string encryption: %d\n";
static const char unk_13D8[] = "tail call optimization: %lld\n";
static const char unk_1408[] = "non-tail call: %d\n";
static const char unk_1430[] = "vectorized loop: %lld\n";
static const char unk_1458[] = "link-time optimization: %d\n";
static const char unk_1478[] = "division by zero: %d\n";
static const char unk_1498[] = "null pointer dereference: %d\n";
static const char unk_14B8[] = "buffer overflow: %lld\n";
static const char unk_14D8[] = "integer overflow: %u\n";
static const char unk_1510[] = "undefined behavior: %d\n";
static const char unk_1530[] = "implementation-defined: %d\n";

/* Function declarations */
long long call_weak_fn(void);
void div_zero_handler(void);
void segv_handler(void);
long long test_obf_opt_edge(void);
void JUMPOUT(int);
int __longjmp_chk(jmp_buf, int);

/* Function definitions for linker */
long long call_weak_fn(void)
{
 return 0;
}

void JUMPOUT(int code)
{
 (void)code;
}

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/7/7_gcc_O2_no_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x848 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_860 @ 0x860 */
void sub_860()
{
 JUMPOUT(0);
}


/* Function: main @ 0x980 */
int main(int argc, const char **argv, const char **envp)
{
 (void)argc;
 (void)argv;
 (void)envp;
 test_obf_opt_edge();
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: div_zero_handler @ 0xAE0 */
void div_zero_handler()
{
 div_zero_caught = 1;
 longjmp(jmp_buffer, 1);
}


/* Function: segv_handler @ 0xB00 */
void segv_handler()
{
 segv_caught = 1;
 __longjmp_chk(segv_buffer, 1);
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
 result[a3 - 1] = 0;
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
 char *v0; // x0
 int v1; // w19
 const char *v2; // x4
 int v3; // t1
 char dest[32]; // [xsp+28h] [xbp+28h] BYREF

 v0 = strncpy(dest, encrypted_0, 0x1Fu);
 v1 = (unsigned char)dest[0];
 dest[31] = 0;
 v2 = v0;
 if ( dest[0] )
 {
 do
 {
 *v0 = v1 ^ 0x5A;
 v3 = (unsigned char)*++v0;
 LOBYTE(v1) = v3;
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
 LODWORD(result) = 0;
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
 long long v0; // x1
 char *v1; // x2
 char *v2; // x4
 char *v3; // x0
 long long v4; // x1
 long long result; // x0
 char *v6; // x2
 unsigned long long v7[2]; // [xsp+18h] [xbp+18h] BYREF
 unsigned long long v8[2]; // [xsp+38h] [xbp+38h] BYREF
 unsigned long long v9[4]; // [xsp+58h] [xbp+58h] BYREF

 v0 = 1;
 memset(v9, 0, sizeof(v9));
 v7[0] = xmmword_1558;
 v7[1] = xmmword_1568;
 v8[0] = xmmword_1578;
 v8[1] = xmmword_1588;
 do
 {
 v1 = (char *)v7 + 4 * v0;
 v2 = (char *)v8 + 4 * v0;
 v3 = (char *)v9 + 4 * v0++;
 *((unsigned int *)v3 - 1) = *((unsigned int *)v1 - 1) + *((unsigned int *)v2 - 1);
 }
 while ( v0 != 9 );
 v4 = 1;
 LODWORD(result) = 0;
 do
 {
 v6 = (char *)v9 + 4 * v4++;
 result = (unsigned int)(result + *((unsigned int *)v6 - 1));
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
 signal(8, (__sighandler_t)div_zero_handler);
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
 signal(11, (__sighandler_t)segv_handler);
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
 LODWORD(result) = a1 + a2;
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
long long test_obf_opt_edge()
{
 int v0; // w0
 int v1; // w1
 int v2; // w2
 long long v3; // x2
 unsigned int v4; // w0
 unsigned int v5; // w0
 int v6; // w20
 int v7; // w19
 int v8; // w20
 int v9; // w19
 void *v10; // x0
 long long v11; // x2
 unsigned int v13; // [xsp+24h] [xbp+24h] BYREF

 puts(asc_1328);
 __printf_chk(1, unk_1358, 10);
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
 __printf_chk(1, unk_1378, v3);
 __printf_chk(1, unk_1398, 225);
 v4 = param_string_encryption();
 __printf_chk(1, unk_13B8, v4);
 __printf_chk(1, unk_13D8, 500500);
 __printf_chk(1, unk_1408, 5050);
 v5 = call_vectorized_loop();
 __printf_chk(1, unk_1430, v5);
 __printf_chk(1, unk_1458, 20);
 v6 = param_division_by_zero(5);
 v7 = param_division_by_zero(0);
 signal(8, 0);
 __printf_chk(1, unk_1478, (unsigned int)(v6 + v7));
 v13 = 42;
 v8 = param_null_pointer_deref(&v13);
 v9 = param_null_pointer_deref(0);
 signal(11, 0);
 __printf_chk(1, unk_1498, (unsigned int)(v8 + v9));
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
 __printf_chk(1, unk_14B8, v11);
 __printf_chk(1, unk_14D8, 2000000000);
 __printf_chk(1, unk_1510, 10);
 return __printf_chk(1, unk_1530, 48);
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
