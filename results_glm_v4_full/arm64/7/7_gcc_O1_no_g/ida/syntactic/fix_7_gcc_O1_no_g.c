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
#include <stdbool.h>

/* Decompiler macros */
#define LODWORD(x) (*((unsigned int*)&(x)))

/* Type for signal handler */
typedef void (*__sighandler_t)(int);

/* Type for jump buffer */
typedef struct {
    long long __buf[16];
} jmp_buf;

/* Function declarations for library calls */
void __longjmp_chk(void *);
char *strncpy(char *, const char *, size_t);
size_t strlen(const char *);
void *memset(void *, int, size_t);
__sighandler_t signal(int, __sighandler_t);
int _setjmp(jmp_buf *);
void *malloc(size_t);
void free(void *);
int puts(const char *);
int __printf_chk(int, const char *, ...);

/* Global jump buffers for exception handling */
jmp_buf jmp_buffer;
jmp_buf segv_buffer;

/* Global exception flags */
int div_zero_caught;
int segv_caught;

/* CRT weak function implementation */
long long call_weak_fn(void)
{
    return 0;
}

/* Encrypted string data */
/* XMM word constants (128-bit data) */
static unsigned long long xmmword_13B0 = 1;
static unsigned long long xmmword_13C0 = 2;
static unsigned long long xmmword_13D0 = 3;
static unsigned long long xmmword_13E0 = 4;

/* Encrypted string data */
static const char encrypted_0[] = "This is a test encrypted string\x00";

/* String constants */
static const char asc_1180[] = "Running tests\n";

/* Decompiler macro */
#define JUMPOUT(x) __builtin_unreachable()

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/7/7_gcc_O1_no_g
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
void div_zero_handler()
{
 div_zero_caught = 1;
 __longjmp_chk(&jmp_buffer);
}


/* Function: segv_handler @ 0xAB4 */
void segv_handler()
{
 segv_caught = 1;
 __longjmp_chk(&segv_buffer);
}


/* Function: param_fake_branch @ 0xAD4 */
void param_fake_branch()
{
 ;
}


/* Function: call_fake_branch @ 0xAD8 */
long long call_fake_branch()
{
 return 10;
}


/* Function: param_opaque_predicate @ 0xAE0 */
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


/* Function: call_opaque_predicate @ 0xB38 */
long long call_opaque_predicate()
{
 return param_opaque_predicate(5);
}


/* Function: param_instruction_substitution @ 0xB50 */
long long param_instruction_substitution(unsigned int a1)
{
 return 6 * a1 + (a1 >> 1) + (a1 & 0xF) + 15 * a1;
}


/* Function: call_instruction_substitution @ 0xB74 */
long long call_instruction_substitution()
{
 return 225;
}


/* Function: decrypt_string @ 0xB7C */
char * decrypt_string(char *src, char *dest, size_t a3, char a4)
{
 char v7; // w2
 char *v8; // x3
 int v9; // t1

 strncpy(dest, src, a3);
 dest[a3 - 1] = 0;
 v7 = *dest;
 if ( *dest )
 {
 v8 = dest;
 do
 {
 *v8 = a4 ^ v7;
 v9 = (unsigned char)*++v8;
 v7 = v9;
 }
 while ( v9 );
 }
 return dest;
}


/* Function: param_string_encryption @ 0xBDC */
long long param_string_encryption()
{
 int v0; // w0
 char dest[32]; // [xsp+28h] [xbp+28h] BYREF

 decrypt_string(encrypted_0, dest, 0x20u, 90);
 v0 = strlen(dest);
 return (unsigned int)(unsigned char)dest[0] + v0;
}


/* Function: call_string_encryption @ 0xC54 */
long long call_string_encryption()
{
 return param_string_encryption();
}


/* Function: param_tail_call_optimized @ 0xC68 */
long long param_tail_call_optimized(int a1, unsigned int a2)
{
 if ( a1 <= 0 )
 return a2;
 else
 return param_tail_call_optimized((unsigned int)(a1 - 1), a1 + a2);
}


/* Function: call_tail_call_optimized @ 0xC94 */
long long call_tail_call_optimized()
{
 return param_tail_call_optimized(1000, 0);
}


/* Function: param_non_tail_call @ 0xCB0 */
long long param_non_tail_call(int a1)
{
 if ( a1 <= 0 )
 return 0;
 else
 return (unsigned int)param_non_tail_call((unsigned int)(a1 - 1)) + a1;
}


/* Function: call_non_tail_call @ 0xCE8 */
long long call_non_tail_call()
{
 return param_non_tail_call(100);
}


/* Function: param_vectorized_loop @ 0xD00 */
long long param_vectorized_loop(long long a1, long long a2, long long a3, int a4)
{
 long long v4; // x4
 long long v5; // x1
 long long result; // x0

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
 result = (unsigned int)(result + *(unsigned int *)(a3 + 4 * v5++));
 while ( a4 > (int)v5 );
 return result;
}


/* Function: call_vectorized_loop @ 0xD50 */
long long call_vectorized_loop()
{
 unsigned long long v1[2]; // [xsp+18h] [xbp+18h] BYREF
 unsigned long long v2[2]; // [xsp+38h] [xbp+38h] BYREF
 unsigned long long v3[4]; // [xsp+58h] [xbp+58h] BYREF

 v1[0] = xmmword_13B0;
 v1[1] = xmmword_13C0;
 v2[0] = xmmword_13D0;
 v2[1] = xmmword_13E0;
 memset(v3, 0, sizeof(v3));
 return param_vectorized_loop((long long)v1, (long long)v2, (long long)v3, 8);
}


/* Function: param_link_time_optimization @ 0xDC8 */
long long param_link_time_optimization(int a1)
{
 return (unsigned int)(2 * (a1 + 5));
}


/* Function: call_link_time_optimization @ 0xDD4 */
long long call_link_time_optimization()
{
 return 20;
}


/* Function: param_division_by_zero @ 0xDDC */
long long param_division_by_zero(int a1)
{
 signal(8, (__sighandler_t)div_zero_handler);
 if ( _setjmp(&jmp_buffer) )
 return 0xFFFFFFFFLL;
 else
 return (unsigned int)(10 / a1);
}


/* Function: call_division_by_zero @ 0xE28 */
long long call_division_by_zero()
{
 int v0; // w20
 int v1; // w19

 v0 = param_division_by_zero(5);
 v1 = param_division_by_zero(0);
 signal(8, 0);
 return (unsigned int)(v0 + v1);
}


/* Function: param_null_pointer_deref @ 0xE68 */
long long param_null_pointer_deref(unsigned int *a1)
{
 signal(11, (__sighandler_t)segv_handler);
 if ( _setjmp(&segv_buffer) )
 return 0xFFFFFFFFLL;
 else
 return *a1;
}


/* Function: call_null_pointer_deref @ 0xEB0 */
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


/* Function: param_buffer_overflow_stack @ 0xF2C */
void param_buffer_overflow_stack()
{
 ;
}


/* Function: param_buffer_overflow_heap @ 0xF30 */
long long param_buffer_overflow_heap(unsigned int a1)
{
 void *v2; // x0
 int v3; // w1

 v2 = malloc(0x10u);
 if ( v2 )
 {
 v3 = 33;
 do
 --v3;
 while ( v3 );
 free(v2);
 }
 else
 {
 return (unsigned int)-2;
 }
 return a1;
}


/* Function: call_buffer_overflow @ 0xF74 */
long long call_buffer_overflow()
{
 return (unsigned int)param_buffer_overflow_heap(0x14u) + 10;
}


/* Function: param_integer_overflow @ 0xF90 */
long long param_integer_overflow(int a1, int a2)
{
 long long result; // x0
 bool v4; // zf
 bool v5; // nf
 bool v7; // zf
 bool v8; // nf

 LODWORD(result) = a1 + a2;
 if ( a1 > 0 )
 {
 v4 = a2 == 0;
 v5 = a2 < 0;
 }
 else
 {
 v4 = 1;
 v5 = 0;
 }
 if ( !v5 && !v4 && (int)result < 0 )
 return 0xFFFFFFFFLL;
 if ( (a1 & a2) < 0 )
 {
 v7 = (unsigned int)result == 0;
 v8 = (int)result < 0;
 }
 else
 {
 v7 = 1;
 v8 = 0;
 }
 if ( v8 || v7 )
 return (unsigned int)result;
 else
 return 4294967294LL;
}


/* Function: call_integer_overflow @ 0xFC4 */
long long call_integer_overflow()
{
 return 2000000000;
}


/* Function: param_undefined_behavior @ 0xFD0 */
long long param_undefined_behavior(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: call_undefined_behavior @ 0xFD8 */
long long call_undefined_behavior()
{
 return 10;
}


/* Function: param_implementation_defined @ 0xFE0 */
long long param_implementation_defined()
{
 return 48;
}


/* Function: call_implementation_defined @ 0xFE8 */
long long call_implementation_defined()
{
 return 48;
}


/* Function: main @ 0x1148 */
int main(int argc, const char **argv, const char **envp)
{
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
