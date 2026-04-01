/* Standard library declarations */
#include <signal.h>
#include <setjmp.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdint.h>

/* Auto-injected type definitions by preprocessor (only if not already defined) */
/* Note: uint64_t and int64_t removed as they conflict with stdint.h */
#ifndef uint8_t
typedef unsigned char uint8_t;
#endif
#ifndef uint16_t
typedef unsigned short uint16_t;
#endif
#ifndef uint32_t
typedef unsigned int uint32_t;
#endif
#ifndef int8_t
typedef signed char int8_t;
#endif
#ifndef int16_t
typedef short int16_t;
#endif
#ifndef int32_t
typedef int int32_t;
#endif
#ifndef size_t
typedef unsigned long size_t;
#endif
#ifndef ssize_t
typedef long ssize_t;
#endif
#ifndef uintptr_t
typedef unsigned long uintptr_t;
#endif
#ifndef intptr_t
typedef long intptr_t;
#endif
#ifndef ptrdiff_t
typedef unsigned long ptrdiff_t;
#endif

/* Handler function pointer type */
typedef void (*__sighandler_t)(int);

/* Jump buffers for exception handling */
jmp_buf jmp_buffer;
jmp_buf segv_buffer;

/* Helper macros */
#define LOBYTE(x) (*(unsigned char*)&(x))
#define HIBYTE(x) (*((unsigned char*)&(x) + 1))
#define JUMPOUT(addr) ((void)(addr))

/* Function declarations for missing libc functions */
int __printf_chk(int flag, const char *format, ...);
void __longjmp_chk(jmp_buf env, int val);

/* String constants for test_obf_opt_edge */
static const char asc_1328[] = "Opaque Predicate:\n";
static const char unk_1358[] = "Instruction Substitution: %d\n";
static const char unk_1378[] = "Call Opaque Predicate: %d\n";
static const char unk_1398[] = "Call Instruction Substitution: %d\n";
static const char unk_13B8[] = "String Encryption: %d\n";
static const char unk_13D8[] = "Tail Call: %d\n";
static const char unk_1408[] = "Non Tail Call: %d\n";
static const char unk_1430[] = "Vectorized Loop: %d\n";
static const char unk_1458[] = "LTO: %d\n";
static const char unk_1478[] = "Division by Zero: %d\n";
static const char unk_1498[] = "Null Pointer: %d\n";
static const char unk_14B8[] = "Buffer Overflow: %d\n";
static const char unk_14D8[] = "Integer Overflow: %d\n";
static const char unk_1510[] = "Undefined Behavior: %lld\n";
static const char unk_1530[] = "Implementation Defined: %lld\n";

/* SIMD constants for vectorized loop */
static const int xmmword_1558[4] = {1, 2, 3, 4};
static const int xmmword_1568[4] = {5, 6, 7, 8};
static const int xmmword_1578[4] = {10, 20, 30, 40};
static const int xmmword_1588[4] = {50, 60, 70, 80};

/* Encrypted string */
static char encrypted_0[] = "TestString";

/* Global flags for exception handling */
int div_zero_caught;
int segv_caught;

/* Forward declaration for test_obf_opt_edge */
void test_obf_opt_edge(void);

/* Weak function declaration */
void call_weak_fn(void) __attribute__((weak));
void call_weak_fn() {}

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/7/7_gcc_O2_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x848 */
void init_proc()
{
 call_weak_fn();
}


/* Function: sub_860 @ 0x860 */
void sub_860()
{
 JUMPOUT(0);
}


/* Function: main @ 0x980 */
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



/* Function: div_zero_handler @ 0xAE0 */
void div_zero_handler(int sig)
{
 div_zero_caught = 1;
 __longjmp_chk(jmp_buffer, 1);
}


/* Function: segv_handler @ 0xB00 */
void segv_handler(int sig)
{
 segv_caught = 1;
 __longjmp_chk(segv_buffer, 1);
}


/* Function: param_fake_branch @ 0xB20 */
int param_fake_branch(int x)
{
 return x;
}


/* Function: call_fake_branch @ 0xB24 */
int call_fake_branch()
{
 return 10;
}


/* Function: param_opaque_predicate @ 0xB30 */
int param_opaque_predicate(int x)
{
 int v1; // w1
 int v2; // w6
 int v3; // w2
 int v4; // w3

 v1 = x + 1;
 v2 = 2 * x + x * x + 1 == v1 * v1;
 if ( x == -1 )
 return 3 * x + 20;
 v3 = x;
 do
 {
 v4 = v1;
 v1 = v3 % v1;
 v3 = v4;
 }
 while ( v1 );
 if ( v2 && v4 == 1 )
 return 2 * x + 10;
 else
 return 3 * x + 20;
}


/* Function: call_opaque_predicate @ 0xB90 */
int call_opaque_predicate()
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
int param_instruction_substitution(int x)
{
 return 6 * x + ((unsigned int)x >> 1) + (x & 0xF) + 15 * x;
}


/* Function: call_instruction_substitution @ 0xBE4 */
int call_instruction_substitution()
{
 return 225;
}


/* Function: decrypt_string @ 0xBF0 */
const char * decrypt_string(const char *encrypted, char *buffer, size_t len, char key)
{
 char *result; // x0
 char v7; // w2
 char *v8; // x4
 int v9; // t1

 result = strncpy(buffer, encrypted, len);
 result[len - 1] = 0;
 v7 = *result;
 if ( *result )
 {
 v8 = (char *)result;
 do
 {
 *v8 = key ^ v7;
 v9 = (unsigned char)*++v8;
 v7 = v9;
 }
 while ( v9 );
 }
 return result;
}


/* Function: param_string_encryption @ 0xC50 */
int param_string_encryption()
{
 char *v0; // x0
 int v1; // w19
 const char *v2; // x4
 int v3; // t1
 char decrypted[32]; // [xsp+28h] [xbp+28h] BYREF

 v0 = (char *)strncpy(decrypted, encrypted_0, 0x1Fu);
 v1 = (unsigned char)decrypted[0];
 decrypted[31] = 0;
 v2 = v0;
 if ( decrypted[0] )
 {
 do
 {
 *v0 = v1 ^ 0x5A;
 v3 = (unsigned char)*++v0;
 LOBYTE(v1) = v3;
 }
 while ( v3 );
 v1 = (unsigned char)decrypted[0];
 }
 return v1 + strlen(v2);
}


/* Function: call_string_encryption @ 0xCF0 */
// attributes: thunk
int call_string_encryption()
{
 return param_string_encryption();
}


/* Function: param_tail_call_optimized @ 0xCF4 */
int param_tail_call_optimized(int n, int acc)
{
 int result; // w0
 int v4; // w1

 result = acc;
 if ( n > 0 )
 {
 do
 {
 v4 = n--;
 result += v4;
 }
 while ( n );
 }
 return result;
}


/* Function: call_tail_call_optimized @ 0xD20 */
int call_tail_call_optimized()
{
 return 500500;
}


/* Function: param_non_tail_call @ 0xD30 */
int param_non_tail_call(int n)
{
 int result; // w0
 int v3; // w2

 result = 0;
 if ( n > 0 )
 {
 do
 {
 v3 = n--;
 result += v3;
 }
 while ( n );
 }
 return result;
}


/* Function: call_non_tail_call @ 0xD54 */
int call_non_tail_call()
{
 return 5050;
}


/* Function: param_vectorized_loop @ 0xD60 */
int param_vectorized_loop(int *a, int *b, int *c, int n)
{
 long long v4; // x4
 long long v5; // x1
 int result; // w0
 int v7; // w4

 if ( n <= 0 )
 return 0;
 v4 = 0;
 do
 {
 c[v4] = a[v4] + b[v4];
 ++v4;
 }
 while ( n > (int)v4 );
 v5 = 0;
 result = 0;
 do
 {
 v7 = c[v5++];
 result += v7;
 }
 while ( n > (int)v5 );
 return result;
}


/* Function: call_vectorized_loop @ 0xDC0 */
int call_vectorized_loop()
{
 long long v0; // x1
 int *v1; // x2
 int *v2; // x4
 int *v3; // x0
 long long v4; // x1
 int result; // w0
 int *v6; // x2
 int a[8]; // [xsp+18h] [xbp+18h] BYREF
 int b[8]; // [xsp+38h] [xbp+38h] BYREF
 int c[8]; // [xsp+58h] [xbp+58h] BYREF

 v0 = 1;
 memset(c, 0, sizeof(c));
 *(unsigned long long *)a = *(unsigned long long *)xmmword_1558;
 *(unsigned long long *)&a[4] = *(unsigned long long *)xmmword_1568;
 *(unsigned long long *)b = *(unsigned long long *)xmmword_1578;
 *(unsigned long long *)&b[4] = *(unsigned long long *)xmmword_1588;
 do
 {
 v1 = &a[v0];
 v2 = &b[v0];
 v3 = &c[v0++];
 *(v3 - 1) = *(v1 - 1) + *(v2 - 1);
 }
 while ( v0 != 9 );
 v4 = 1;
 result = 0;
 do
 {
 v6 = &c[v4++];
 result += *(v6 - 1);
 }
 while ( v4 != 9 );
 return result;
}


/* Function: param_link_time_optimization @ 0xE90 */
int param_link_time_optimization(int x)
{
 return 2 * (x + 5);
}


/* Function: call_link_time_optimization @ 0xEA0 */
int call_link_time_optimization()
{
 return 20;
}


/* Function: param_division_by_zero @ 0xEB0 */
int param_division_by_zero(int x)
{
 signal(8, (__sighandler_t)div_zero_handler);
 if ( _setjmp(jmp_buffer) )
 return -1;
 else
 return 10 / x;
}


/* Function: call_division_by_zero @ 0xF00 */
int call_division_by_zero()
{
 int v0; // w20
 int v1; // w19

 v0 = param_division_by_zero(5);
 v1 = param_division_by_zero(0);
 signal(8, 0);
 return v0 + v1;
}


/* Function: param_null_pointer_deref @ 0xF40 */
int param_null_pointer_deref(int *p)
{
 signal(11, (__sighandler_t)segv_handler);
 if ( _setjmp(segv_buffer) )
 return -1;
 else
 return *p;
}


/* Function: call_null_pointer_deref @ 0xF90 */
int call_null_pointer_deref()
{
 int v0; // w19
 int v1; // w20
 int valid; // [xsp+24h] [xbp+24h] BYREF

 valid = 42;
 v0 = param_null_pointer_deref(&valid);
 v1 = param_null_pointer_deref(0);
 signal(11, 0);
 return v0 + v1;
}


/* Function: param_buffer_overflow_stack @ 0x1010 */
void param_buffer_overflow_stack()
{
 ;
}


/* Function: param_buffer_overflow_heap @ 0x1014 */
int param_buffer_overflow_heap(int x)
{
 void *v2; // x0

 v2 = malloc(0x10u);
 if ( !v2 )
 return -2;
 free(v2);
 return x;
}


/* Function: call_buffer_overflow @ 0x1050 */
int call_buffer_overflow()
{
 void *v0; // x0

 v0 = malloc(0x10u);
 if ( !v0 )
 return 8;
 free(v0);
 return 30;
}


/* Function: param_integer_overflow @ 0x1080 */
int param_integer_overflow(int a, int b)
{
 bool v3; // zf
 bool v4; // nf
 int result; // w0
 bool v6; // zf
 bool v7; // nf

 if ( a > 0 )
 {
 v3 = b == 0;
 v4 = b < 0;
 }
 else
 {
 v3 = 1;
 v4 = 0;
 }
 result = a + b;
 if ( v4 || v3 )
 {
 if ( (a & b) < 0 )
 {
 v6 = result == 0;
 v7 = result < 0;
 }
 else
 {
 v6 = 1;
 v7 = 0;
 }
 if ( !v7 && !v6 )
 return -2;
 }
 else if ( result < 0 )
 {
 return -1;
 }
 return result;
}


/* Function: call_integer_overflow @ 0x10B4 */
int call_integer_overflow()
{
 return 2000000000;
}


/* Function: param_undefined_behavior @ 0x10C0 */
int param_undefined_behavior(int i)
{
 return 2 * i;
}


/* Function: call_undefined_behavior @ 0x10D0 */
long long call_undefined_behavior()
{
 return 10;
}


/* Function: param_implementation_defined @ 0x10E0 */
int param_implementation_defined()
{
 return 48;
}


/* Function: call_implementation_defined @ 0x10F0 */
long long call_implementation_defined()
{
 return 48;
}


/* Function: test_obf_opt_edge @ 0x1100 */
void test_obf_opt_edge()
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
 int p; // [xsp+24h] [xbp+24h] BYREF

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
 p = 42;
 v8 = param_null_pointer_deref(&p);
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
 __printf_chk(1, unk_1530, 48);
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
