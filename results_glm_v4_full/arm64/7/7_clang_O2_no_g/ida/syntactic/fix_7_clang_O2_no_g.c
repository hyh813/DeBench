/* Standard library includes - include first to get proper type definitions */
#include <setjmp.h>
#include <signal.h>
#include <arm_neon.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/* Auto-injected type definitions by preprocessor - only if not already defined */
#if !defined(__uint8_t_defined)
typedef unsigned char uint8_t;
#define __uint8_t_defined
#endif
#if !defined(__uint16_t_defined)
typedef unsigned short uint16_t;
#define __uint16_t_defined
#endif
#if !defined(__uint32_t_defined)
typedef unsigned int uint32_t;
#define __uint32_t_defined
#endif
/* uint64_t defined in system headers, skip here to avoid conflicts */
#if !defined(__int8_t_defined)
typedef signed char int8_t;
#define __int8_t_defined
#endif
#if !defined(__int16_t_defined)
typedef short int16_t;
#define __int16_t_defined
#endif
#if !defined(__int32_t_defined)
typedef int int32_t;
#define __int32_t_defined
#endif
/* int64_t defined in system headers, skip here to avoid conflicts */
#if !defined(_SIZE_T)
typedef unsigned long size_t;
#endif
#if !defined(_SSIZE_T)
typedef long ssize_t;
#endif
#if !defined(_UINTPTR_T)
typedef unsigned long uintptr_t;
#endif
#if !defined(_INTPTR_T)
typedef long intptr_t;
#endif
#if !defined(_PTRDIFF_T)
typedef unsigned long ptrdiff_t;
#endif
#if !defined(__INTMAX_TYPE__)
typedef long long intmax_t;
#endif
#if !defined(__UINTMAX_TYPE__)
typedef unsigned long long uintmax_t;
#endif

/* Additional type definitions for signal handling */
typedef void (*__sighandler_t)(int);

/* Decompilation helper macros */
#define LOBYTE(x) (*((unsigned char*)&(x)))
#define JUMPOUT(x) do { __builtin_unreachable(); } while(0)
#define LODWORD(x) (*((unsigned int*)&(x)))

/* CRT stub function declarations */
long long call_weak_fn(void);

/* CRT stub function implementation - weak symbol for constructors */
long long call_weak_fn(void)
{
 return 0;
}

jmp_buf jmp_buffer;
jmp_buf segv_buffer;
int div_zero_caught;
int segv_caught;

/* Encrypted string constant */
const char param_string_encryption_encrypted[33] = {
    0x5B, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A,
    0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A,
    0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A,
    0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A,
    0x00
};

/* String constants for output formatting */
const char asc_12AD[] = "Test obfuscation and optimization:";
const char aObfL402D[] = "  Fake branch: %d\n";
const char aObfL403D[] = "  Opaque predicate: %d\n";
const char aObfL404D[] = "  Instruction substitution: %d\n";
const char aObfL405D[] = "  String encryption: %d\n";
const char aOptL401[] = "  Tail call optimized: %d\n";
const char aOptL401_0[] = "  Non-tail call: %d\n";
const char aOptL402[] = "  Vectorized loop: %d\n";
const char aOptL501LtoD[] = "  Link-time optimization: %d\n";
const char aEdgeL301D[] = "  Division by zero: %d\n";
const char aEdgeL302D[] = "  Null pointer deref: %d\n";
const char aEdgeL303D[] = "  Buffer overflow: %d\n";
const char aEdgeL304D[] = "  Integer overflow: %d\n";
const char aEdgeL401D[] = "  Undefined behavior: %d\n";
const char aEdgeL402D[] = "  Implementation defined: %d\n";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/7/7_clang_O2_no_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x710 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_730 @ 0x730 */
void sub_730()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: param_fake_branch @ 0x914 */
void param_fake_branch()
{
 ;
}


/* Function: call_fake_branch @ 0x918 */
long long call_fake_branch()
{
 return 10;
}


/* Function: param_opaque_predicate @ 0x920 */
long long param_opaque_predicate(int a1)
{
 int v1; // w8
 int v2; // w10
 int v3; // w11
 int v4; // w12
 int v5; // w11
 unsigned int v6; // w8

 v1 = 2 * a1;
 if ( a1 == -1 )
 {
 v2 = -1;
 }
 else
 {
 v3 = a1;
 v4 = a1 + 1;
 do
 {
 v2 = v4;
 v4 = v3 % v4;
 v3 = v2;
 }
 while ( v4 );
 }
 v5 = (v1 | 1) + a1 * a1;
 v6 = v1 + 10;
 if ( v2 == 1 && v5 == (a1 + 1) * (a1 + 1) )
 return v6;
 else
 return (unsigned int)(3 * a1 + 20);
}


/* Function: call_opaque_predicate @ 0x978 */
long long call_opaque_predicate()
{
 int v0; // w8
 int v1; // w9
 int v2; // w10

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


/* Function: param_instruction_substitution @ 0x9A8 */
long long param_instruction_substitution(unsigned int a1)
{
 return (a1 & 0xF) + (a1 >> 1) + 21 * a1;
}


/* Function: call_instruction_substitution @ 0x9BC */
long long call_instruction_substitution()
{
 return 225;
}


/* Function: decrypt_string @ 0x9C4 */
char * decrypt_string(char *src, char *dest, size_t a3, char a4)
{
 int v7; // w8
 char *v8; // x10
 char v9; // w11

 strncpy(dest, src, a3);
 dest[a3 - 1] = 0;
 LOBYTE(v7) = *dest;
 if ( *dest )
 {
 v8 = dest + 1;
 do
 {
 v9 = v7 ^ a4;
 v7 = (unsigned char)*v8;
 *(v8++ - 1) = v9;
 }
 while ( v7 );
 }
 return dest;
}


/* Function: param_string_encryption @ 0xA2C */
long long param_string_encryption()
{
 int v0; // w8
 unsigned char *v1; // x9
 unsigned char v2; // w11
 int v3; // w19
 unsigned char v5; // [xsp+0h] [xbp-20h] BYREF
 unsigned char v6[31]; // [xsp+1h] [xbp-1Fh] BYREF

 strncpy((char *)&v5, param_string_encryption_encrypted, 0x20u);
 LOBYTE(v0) = v5;
 v6[30] = 0;
 if ( v5 )
 {
 v1 = v6;
 do
 {
 v2 = v0 ^ 0x5A;
 v0 = *v1;
 *(v1++ - 1) = v2;
 }
 while ( v0 );
 v3 = v5;
 }
 else
 {
 v3 = 0;
 }
 return (unsigned int)strlen((const char *)&v5) + v3;
}


/* Function: call_string_encryption @ 0xAA4 */
long long call_string_encryption()
{
 int v0; // w8
 unsigned char *v1; // x9
 unsigned char v2; // w11
 int v3; // w19
 unsigned char v5; // [xsp+0h] [xbp-20h] BYREF
 unsigned char v6[31]; // [xsp+1h] [xbp-1Fh] BYREF

 strncpy((char *)&v5, param_string_encryption_encrypted, 0x20u);
 LOBYTE(v0) = v5;
 v6[30] = 0;
 if ( v5 )
 {
 v1 = v6;
 do
 {
 v2 = v0 ^ 0x5A;
 v0 = *v1;
 *(v1++ - 1) = v2;
 }
 while ( v0 );
 v3 = v5;
 }
 else
 {
 v3 = 0;
 }
 return (unsigned int)strlen((const char *)&v5) + v3;
}


/* Function: param_tail_call_optimized @ 0xB1C */
long long param_tail_call_optimized(int a1, unsigned int a2)
{
 if ( a1 >= 1 )
 return a2
 + a1
 + (a1 - 1) * (a1 - 1)
 - (unsigned int)(((unsigned int)(a1 - 1) * (unsigned long long)(unsigned int)(a1 - 2)) >> 1);
 return a2;
}


/* Function: call_tail_call_optimized @ 0xB44 */
long long call_tail_call_optimized()
{
 return 500500;
}


/* Function: param_non_tail_call @ 0xB50 */
long long param_non_tail_call(int a1)
{
 if ( a1 < 1 )
 return 0;
 else
 return a1
 + (a1 - 1) * (a1 - 1)
 - (unsigned int)(((unsigned int)(a1 - 1) * (unsigned long long)(unsigned int)(a1 - 2)) >> 1);
}


/* Function: call_non_tail_call @ 0xB78 */
long long call_non_tail_call()
{
 return 5050;
}


/* Function: param_vectorized_loop @ 0xB80 */
long long param_vectorized_loop(int32x4_t *a1, int32x4_t *a2, int32x4_t *a3, unsigned int a4)
{
 long long v4; // x9
 char *v5; // x12
 int32x4_t *v6; // x10
 int32x4_t *v7; // x11
 int32x4_t *v8; // x12
 long long v9; // x13
 int32x4_t v10; // q0
 int32x4_t v11; // q1
 int32x4_t v12; // q2
 int32x4_t v13; // q3
 long long v14; // x12
 long long v15; // x9
 int32x4_t *v16; // x10
 int32x4_t *v17; // x11
 int32x4_t *v18; // x12
 unsigned int v19; // w13
 unsigned int v20; // t1
 unsigned int v21; // t1
 long long v22; // x9
 long long result; // x0
 int32x4_t *v24; // x10
 int32x4_t v25; // q0
 long long v26; // x11
 int32x4_t v27; // q1
 int32x4_t v28; // q2
 int32x4_t v29; // q3
 int *v30; // x10
 long long v31; // x8
 int v32; // t1

 if ( (int)a4 < 1 )
 return 0;
 if ( a4 < 8 )
 {
 v4 = 0;
LABEL_9:
 v14 = 4 * v4;
 v15 = a4 - v4;
 v16 = (int32x4_t *)((char *)a3 + v14);
 v17 = (int32x4_t *)((char *)a2 + v14);
 v18 = (int32x4_t *)((char *)a1 + v14);
 do
 {
 v20 = *(unsigned int *)v18;
 v18 = (int32x4_t *)((char *)v18 + 4);
 v19 = v20;
 v21 = *(unsigned int *)v17;
 v17 = (int32x4_t *)((char *)v17 + 4);
 --v15;
 *(unsigned int *)v16 = v21 + v19;
 v16 = (int32x4_t *)((char *)v16 + 4);
 }
 while ( v15 );
 goto LABEL_11;
 }
 v4 = 0;
 v5 = (char *)a3 + 4 * a4;
 if ( (int32x4_t *)((char *)a1 + 4 * a4) > a3 && v5 > (char *)a1 )
 goto LABEL_9;
 if ( (int32x4_t *)((char *)a2 + 4 * a4) > a3 && v5 > (char *)a2 )
 goto LABEL_9;
 v4 = a4 & 0xFFFFFFF8;
 v6 = a1 + 1;
 v7 = a2 + 1;
 v8 = a3 + 1;
 v9 = v4;
 do
 {
 v10 = v6[-1];
 v11 = *v6;
 v6 += 2;
 v9 -= 8;
 v12 = v7[-1];
 v13 = *v7;
 v7 += 2;
 v8[-1] = vaddq_s32(v12, v10);
 *v8 = vaddq_s32(v13, v11);
 v8 += 2;
 }
 while ( v9 );
 if ( v4 != a4 )
 goto LABEL_9;
LABEL_11:
 if ( a4 < 8 )
 {
 v22 = 0;
 LODWORD(result) = 0;
LABEL_17:
 v30 = (int *)a3 + v22;
 v31 = a4 - v22;
 do
 {
 v32 = *v30++;
 --v31;
 result = (unsigned int)(v32 + result);
 }
 while ( v31 );
 return result;
 }
 v22 = a4 & 0xFFFFFFF8;
 v24 = a3 + 1;
 v25 = vdupq_n_s32(0);
 v26 = v22;
 v27 = vdupq_n_s32(0);
 do
 {
 v28 = v24[-1];
 v29 = *v24;
 v24 += 2;
 v26 -= 8;
 v25 = vaddq_s32(v28, v25);
 v27 = vaddq_s32(v29, v27);
 }
 while ( v26 );
 result = (unsigned int)vaddvq_s32(vaddq_s32(v27, v25));
 if ( v22 != a4 )
 goto LABEL_17;
 return result;
}


/* Function: call_vectorized_loop @ 0xCD0 */
long long call_vectorized_loop()
{
 return 72;
}


/* Function: param_link_time_optimization @ 0xCD8 */
long long param_link_time_optimization(int a1)
{
 return (unsigned int)(2 * a1 + 10);
}


/* Function: call_link_time_optimization @ 0xCE4 */
long long call_link_time_optimization()
{
 return 20;
}


/* Function: div_zero_handler @ 0xCEC */
void div_zero_handler()
{
 div_zero_caught = 1;
 longjmp(jmp_buffer, 1);
}


/* Function: param_division_by_zero @ 0xD10 */
long long param_division_by_zero(int a1)
{
 signal(8, (__sighandler_t)div_zero_handler);
 if ( _setjmp(jmp_buffer) )
 return 0xFFFFFFFFLL;
 else
 return (unsigned int)(10 / a1);
}


/* Function: call_division_by_zero @ 0xD5C */
long long call_division_by_zero()
{
 int v0; // w19
 int v1; // w20

 v0 = param_division_by_zero(5);
 v1 = param_division_by_zero(0);
 signal(8, 0);
 return (unsigned int)(v1 + v0);
}


/* Function: segv_handler @ 0xD9C */
void segv_handler()
{
 segv_caught = 1;
 longjmp(segv_buffer, 1);
}


/* Function: param_null_pointer_deref @ 0xDC0 */
long long param_null_pointer_deref(unsigned int *a1)
{
 signal(11, (__sighandler_t)segv_handler);
 if ( _setjmp(segv_buffer) )
 return 0xFFFFFFFFLL;
 else
 return *a1;
}


/* Function: call_null_pointer_deref @ 0xE08 */
long long call_null_pointer_deref()
{
 int v0; // w19
 int v1; // w20
 unsigned int v3; // [xsp+Ch] [xbp-4h] BYREF

 v3 = 42;
 v0 = param_null_pointer_deref(&v3);
 v1 = param_null_pointer_deref(0);
 signal(11, 0);
 return (unsigned int)(v1 + v0);
}


/* Function: param_buffer_overflow_stack @ 0xE58 */
void param_buffer_overflow_stack()
{
 ;
}


/* Function: param_buffer_overflow_heap @ 0xE5C */
void param_buffer_overflow_heap()
{
 ;
}


/* Function: call_buffer_overflow @ 0xE60 */
long long call_buffer_overflow()
{
 return 30;
}


/* Function: param_integer_overflow @ 0xE68 */
long long param_integer_overflow(int a1, int a2)
{
 int v2; // w8

 v2 = a2 + a1;
 if ( a1 >= 1 && a2 >= 1 && v2 < 0 )
 return 0xFFFFFFFFLL;
 if ( v2 > 0 && (a2 & a1) < 0 )
 return 4294967294LL;
 else
 return (unsigned int)v2;
}


/* Function: call_integer_overflow @ 0xEA0 */
long long call_integer_overflow()
{
 return 2000000000;
}


/* Function: param_undefined_behavior @ 0xEAC */
long long param_undefined_behavior(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: call_undefined_behavior @ 0xEB4 */
long long call_undefined_behavior()
{
 return 10;
}


/* Function: param_implementation_defined @ 0xEBC */
long long param_implementation_defined()
{
 return 48;
}


/* Function: call_implementation_defined @ 0xEC4 */
long long call_implementation_defined()
{
 return 48;
}


/* Function: test_obf_opt_edge @ 0xECC */
long long test_obf_opt_edge()
{
 int v0; // w8
 int v1; // w9
 int v2; // w10
 long long v3; // x1
 int v4; // w8
 unsigned char *v5; // x9
 unsigned char v6; // w11
 int v7; // w19
 int v8; // w0
 int v9; // w19
 int v10; // w20
 int v11; // w19
 int v12; // w20
 unsigned int v14[7]; // [xsp+0h] [xbp-20h] BYREF
 char v15; // [xsp+1Fh] [xbp-1h]

 puts(asc_12AD);
 printf(aObfL402D, 10);
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
 printf(aObfL403D, v3);
 printf(aObfL404D, 225);
 strncpy((char *)v14, param_string_encryption_encrypted, 0x20u);
 LOBYTE(v4) = v14[0];
 v15 = 0;
 if ( LOBYTE(v14[0]) )
 {
 v5 = (unsigned char *)v14 + 1;
 do
 {
 v6 = v4 ^ 0x5A;
 v4 = *v5;
 *(v5++ - 1) = v6;
 }
 while ( v4 );
 v7 = LOBYTE(v14[0]);
 }
 else
 {
 v7 = 0;
 }
 v8 = strlen((const char *)v14);
 printf(aObfL405D, (unsigned int)(v8 + v7));
 printf(aOptL401, 500500);
 printf(aOptL401_0, 5050);
 printf(aOptL402, 72);
 printf(aOptL501LtoD, 20);
 v9 = param_division_by_zero(5);
 v10 = param_division_by_zero(0);
 signal(8, 0);
 printf(aEdgeL301D, (unsigned int)(v10 + v9));
 v14[0] = 42;
 v11 = param_null_pointer_deref(v14);
 v12 = param_null_pointer_deref(0);
 signal(11, 0);
 printf(aEdgeL302D, (unsigned int)(v12 + v11));
 printf(aEdgeL303D, 30);
 printf(aEdgeL304D, 2000000000);
 printf(aEdgeL401D, 10);
 return printf(aEdgeL402D, 48);
}


/* Function: main @ 0x10AC */
int main(int argc, const char **argv, const char **envp)
{
 test_obf_opt_edge();
 return 0;
}


/* Function: .term_proc @ 0x10C4 */
void term_proc()
{
 ;
}


/* External function declarations for CRT stubs */
#if !defined(_SETJMP_H)
int _setjmp(jmp_buf);
#endif
#if !defined(_SETJMP_H)
void longjmp(jmp_buf *, int);
#endif

/* Standard library declarations */
#include <stdio.h>
#include <stdlib.h>

/* FAILED to decompile: strlen @ 0x12348 */

/* FAILED to decompile: _setjmp @ 0x12350 */

/* FAILED to decompile: __libc_start_main @ 0x12358 */

/* FAILED to decompile: __cxa_finalize @ 0x12360 */

/* FAILED to decompile: signal @ 0x12368 */

/* FAILED to decompile: abort @ 0x12370 */

/* FAILED to decompile: puts @ 0x12378 */

/* FAILED to decompile: longjmp @ 0x12380 */

/* FAILED to decompile: strncpy @ 0x12388 */

/* FAILED to decompile: printf @ 0x12390 */

/* FAILED to decompile: __gmon_start__ @ 0x123A0 */

/* Total functions decompiled: 43, failed: 11 */
