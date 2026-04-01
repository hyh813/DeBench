/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long int64_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Include headers for system types and functions */
#include <setjmp.h>
#include <signal.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/* GNU libc longjmp checker function declaration */
void __longjmp_chk(jmp_buf env) __attribute__((noreturn));

/* Global jump buffers for signal handling */
jmp_buf jmp_buffer;
jmp_buf segv_buffer;

/* Signal handler flags */
volatile int div_zero_caught;
volatile int segv_caught;

/* Encrypted string data */
const char encrypted_0[] = {0x5A, 0x5B, 0x58, 0x1F, 0x11, 0x5F, 0x1C, 0x5D, 0x13, 0x5F, 0x15, 0x1A, 0x58, 0x13, 0x16, 0x5D, 0x1E, 0x58, 0x00};

/* Vector data constants for initialization */
const unsigned long long xmmword_13B0 = 0x0201000000000000ULL;
const unsigned long long xmmword_13C0 = 0x0605040300000000ULL;
const unsigned long long xmmword_13D0 = 0x0201000000000000ULL;
const unsigned long long xmmword_13E0 = 0x0605040300000000ULL;

/* String constants for test output */
const char *asc_1180 = "=== Test Results ===\n";
const char *unk_11B0 = "call_opaque_predicate() = %d\n";
const char *unk_11D0 = "param_opaque_predicate(%d) = %d\n";
const char *unk_11F0 = "call_instruction_substitution() = %d\n";
const char *unk_1210 = "param_string_encryption() = %d\n";
const char *unk_1230 = "call_tail_call_optimized() = %d\n";
const char *unk_1260 = "call_non_tail_call() = %d\n";
const char *unk_1288 = "call_vectorized_loop() = %d\n";
const char *unk_12B0 = "call_link_time_optimization() = %d\n";
const char *unk_12D0 = "call_division_by_zero() = %d\n";
const char *unk_12F0 = "call_null_pointer_deref() = %d\n";
const char *unk_1310 = "call_buffer_overflow() = %d\n";
const char *unk_1330 = "call_integer_overflow() = %d\n";
const char *unk_1368 = "call_undefined_behavior() = %d\n";
const char *unk_1388 = "call_implementation_defined() = %d\n";

/* CRT stub function declarations */
long long call_weak_fn(void);
void JUMPOUT(int);

/* CRT stub function implementations */
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
 * Binary: build/arm64/7/7_gcc_O1_g
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



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: div_zero_handler @ 0xA94 */
void div_zero_handler(int sig)
{
 div_zero_caught = 1;
 __longjmp_chk(jmp_buffer);
}


/* Function: segv_handler @ 0xAB4 */
void segv_handler(int sig)
{
 segv_caught = 1;
 __longjmp_chk(segv_buffer);
}


/* Function: param_fake_branch @ 0xAD4 */
int param_fake_branch(int x)
{
 return x;
}


/* Function: call_fake_branch @ 0xAD8 */
int call_fake_branch()
{
 return 10;
}


/* Function: param_opaque_predicate @ 0xAE0 */
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


/* Function: call_opaque_predicate @ 0xB38 */
int call_opaque_predicate()
{
 return param_opaque_predicate(5);
}


/* Function: param_instruction_substitution @ 0xB50 */
int param_instruction_substitution(int x)
{
 return 6 * x + ((unsigned int)x >> 1) + (x & 0xF) + 15 * x;
}


/* Function: call_instruction_substitution @ 0xB74 */
int call_instruction_substitution()
{
 return 225;
}


/* Function: decrypt_string @ 0xB7C */
const char * decrypt_string(const char *encrypted, char *buffer, size_t len, char key)
{
 char v7; // w2
 char *v8; // x3
 int v9; // t1

 strncpy(buffer, encrypted, len);
 buffer[len - 1] = 0;
 v7 = *buffer;
 if ( *buffer )
 {
 v8 = buffer;
 do
 {
 *v8 = key ^ v7;
 v9 = (unsigned char)*++v8;
 v7 = v9;
 }
 while ( v9 );
 }
 return buffer;
}


/* Function: param_string_encryption @ 0xBDC */
int param_string_encryption()
{
 int v0; // w0
 char decrypted[32]; // [xsp+28h] [xbp+28h] BYREF

 decrypt_string(encrypted_0, decrypted, 0x20u, 90);
 v0 = strlen(decrypted);
 return (unsigned char)decrypted[0] + v0;
}


/* Function: call_string_encryption @ 0xC54 */
int call_string_encryption()
{
 return param_string_encryption();
}


/* Function: param_tail_call_optimized @ 0xC68 */
int param_tail_call_optimized(int n, int acc)
{
 if ( n <= 0 )
 return acc;
 else
 return param_tail_call_optimized(n - 1, n + acc);
}


/* Function: call_tail_call_optimized @ 0xC94 */
int call_tail_call_optimized()
{
 return param_tail_call_optimized(1000, 0);
}


/* Function: param_non_tail_call @ 0xCB0 */
int param_non_tail_call(int n)
{
 if ( n <= 0 )
 return 0;
 else
 return param_non_tail_call(n - 1) + n;
}


/* Function: call_non_tail_call @ 0xCE8 */
int call_non_tail_call()
{
 return param_non_tail_call(100);
}


/* Function: param_vectorized_loop @ 0xD00 */
int param_vectorized_loop(int *a, int *b, int *c, int n)
{
 long long v4; // x4
 long long v5; // x1
 int result; // w0

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
 result += c[v5++];
 while ( n > (int)v5 );
 return result;
}


/* Function: call_vectorized_loop @ 0xD50 */
int call_vectorized_loop()
{
 int a[8]; // [xsp+18h] [xbp+18h] BYREF
 int b[8]; // [xsp+38h] [xbp+38h] BYREF
 int c[8]; // [xsp+58h] [xbp+58h] BYREF

 *(unsigned long long *)a = xmmword_13B0;
 *(unsigned long long *)&a[4] = xmmword_13C0;
 *(unsigned long long *)b = xmmword_13D0;
 *(unsigned long long *)&b[4] = xmmword_13E0;
 memset(c, 0, sizeof(c));
 return param_vectorized_loop(a, b, c, 8);
}


/* Function: param_link_time_optimization @ 0xDC8 */
int param_link_time_optimization(int x)
{
 return 2 * (x + 5);
}


/* Function: call_link_time_optimization @ 0xDD4 */
int call_link_time_optimization()
{
 return 20;
}


/* Function: param_division_by_zero @ 0xDDC */
int param_division_by_zero(int x)
{
 signal(8, (__sighandler_t)div_zero_handler);
 if ( _setjmp(jmp_buffer) )
 return -1;
 else
 return 10 / x;
}


/* Function: call_division_by_zero @ 0xE28 */
int call_division_by_zero()
{
 int v0; // w20
 int v1; // w19

 v0 = param_division_by_zero(5);
 v1 = param_division_by_zero(0);
 signal(8, 0);
 return v0 + v1;
}


/* Function: param_null_pointer_deref @ 0xE68 */
int param_null_pointer_deref(int *p)
{
 signal(11, (__sighandler_t)segv_handler);
 if ( _setjmp(segv_buffer) )
 return -1;
 else
 return *p;
}


/* Function: call_null_pointer_deref @ 0xEB0 */
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


/* Function: param_buffer_overflow_stack @ 0xF2C */
int param_buffer_overflow_stack(int x)
{
 return x;
}


/* Function: param_buffer_overflow_heap @ 0xF30 */
int param_buffer_overflow_heap(int x)
{
 void *v2; // x0
 int v3; // w1

 v2 = malloc(0x10u);
 if ( !v2 )
 return -2;
 v3 = 33;
 do
 --v3;
 while ( v3 );
 free(v2);
 return x;
}


/* Function: call_buffer_overflow @ 0xF74 */
int call_buffer_overflow()
{
 return param_buffer_overflow_heap(20) + 10;
}


/* Function: param_integer_overflow @ 0xF90 */
int param_integer_overflow(int a, int b)
{
 int result; // w0
 bool v4; // zf
 bool v5; // nf
 bool v7; // zf
 bool v8; // nf

 result = a + b;
 if ( a > 0 )
 {
 v4 = b == 0;
 v5 = b < 0;
 }
 else
 {
 v4 = 1;
 v5 = 0;
 }
 if ( !v5 && !v4 && result < 0 )
 return -1;
 if ( (a & b) < 0 )
 {
 v7 = result == 0;
 v8 = result < 0;
 }
 else
 {
 v7 = 1;
 v8 = 0;
 }
 if ( !v8 && !v7 )
 return -2;
 return result;
}


/* Function: call_integer_overflow @ 0xFC4 */
int call_integer_overflow()
{
 return 2000000000;
}


/* Function: param_undefined_behavior @ 0xFD0 */
int param_undefined_behavior(int i)
{
 return 2 * i;
}


/* Function: call_undefined_behavior @ 0xFD8 */
int call_undefined_behavior()
{
 return 10;
}


/* Function: param_implementation_defined @ 0xFE0 */
int param_implementation_defined()
{
 return 48;
}


/* Function: call_implementation_defined @ 0xFE8 */
int call_implementation_defined()
{
 return 48;
}


/* Function: test_obf_opt_edge @ 0xFF0 */
void test_obf_opt_edge()
{
 unsigned int v0; // w0
 unsigned int v1; // w0
 unsigned int v2; // w0
 unsigned int v3; // w0
 unsigned int v4; // w0
 unsigned int v5; // w0
 unsigned int v6; // w0
 unsigned int v7; // w0

 puts(asc_1180);
 __printf_chk(1, unk_11B0, 10);
 v0 = call_opaque_predicate();
 __printf_chk(1, unk_11D0, v0);
 __printf_chk(1, unk_11F0, 225);
 v1 = param_string_encryption();
 __printf_chk(1, unk_1210, v1);
 v2 = call_tail_call_optimized();
 __printf_chk(1, unk_1230, v2);
 v3 = call_non_tail_call();
 __printf_chk(1, unk_1260, v3);
 v4 = call_vectorized_loop();
 __printf_chk(1, unk_1288, v4);
 __printf_chk(1, unk_12B0, 20);
 v5 = call_division_by_zero();
 __printf_chk(1, unk_12D0, v5);
 v6 = call_null_pointer_deref();
 __printf_chk(1, unk_12F0, v6);
 v7 = call_buffer_overflow();
 __printf_chk(1, unk_1310, v7);
 __printf_chk(1, unk_1330, 2000000000);
 __printf_chk(1, unk_1368, 10);
 __printf_chk(1, unk_1388, 48);
}


/* Function: main @ 0x1148 */
int main(int argc, const char **argv, const char **envp)
{
 test_obf_opt_edge();
 return 0;
}


/* Function: .term_proc @ 0x1160 */
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
