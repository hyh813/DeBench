/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* ARM NEON SIMD type definition */
typedef struct {
    uint32_t n128_u32[4];
} int32x4_t;

/* Signal handler type */
typedef void (*__sighandler_t)(int);

/* Standard library includes */
#include <stdio.h>
#include <string.h>
#include <setjmp.h>
#include <signal.h>

/* IDA decompiler helper macros */
#define LODWORD(x) ((unsigned int)((uintptr_t)(x) & 0xFFFFFFFF))

/* ARM NEON intrinsic declarations (simplified for compilation) */
static inline int32x4_t vaddq_s32(int32x4_t a, int32x4_t b) {
    int32x4_t result;
    for (int i = 0; i < 4; i++) {
        result.n128_u32[i] = a.n128_u32[i] + b.n128_u32[i];
    }
    return result;
}

static inline int vaddvq_s32(int32x4_t a) {
    return a.n128_u32[0] + a.n128_u32[1] + a.n128_u32[2] + a.n128_u32[3];
}

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/7/7_clang_O3_no_g
 * Processor: arm
 */

/* Macro definitions */
#define LOBYTE(x) ((unsigned char)(x))
#define JUMPOUT(x) ((void)0)

/* Global variables */

/* String constants */
static const char asc_12B9[] = "=== Test Obf/Opt/Edge Cases ===";
static const char aObfL402D[] = "Obf L4.02: %d\n";
static const char aObfL403D[] = "Obf L4.03: %lld\n";
static const char aObfL404D[] = "Obf L4.04: %lld\n";
static const char aObfL405D[] = "Obf L4.05: %lld\n";
static const char aOptL401[] = "Opt L4.01: %lld\n";
static const char aOptL401_0[] = "Opt L4.01: %lld\n";
static const char aOptL402[] = "Opt L4.02: %lld\n";
static const char aOptL501LtoD[] = "Opt L5.01 LtoD: %lld\n";
static const char aEdgeL301D[] = "Edge L3.01: %d\n";
static const char aEdgeL302D[] = "Edge L3.02: %d\n";
static const char aEdgeL303D[] = "Edge L3.03: %lld\n";
static const char aEdgeL304D[] = "Edge L3.04: %lld\n";
static const char aEdgeL401D[] = "Edge L4.01: %lld\n";
static const char aEdgeL402D[] = "Edge L4.02: %lld\n";
char param_string_encryption_encrypted[32] = {
    0x32, 0x3A, 0x3A, 0x0B, 0x4B, 0x4B, 0x4B, 0x0B,
    0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B,
    0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B,
    0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B
};
int div_zero_caught = 0;
int segv_caught = 0;
jmp_buf jmp_buffer;
jmp_buf segv_buffer;

/* External function declarations */
long long call_weak_fn(void);

/* Stub function definition for call_weak_fn */
long long call_weak_fn(void)
{
    return 0;
}

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
 v7 = *dest;
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
 int v15; // [xsp+Ch] [xbp-14h]
 unsigned char v5[32]; // [xsp+0h] [xbp-20h] BYREF

 strncpy((char *)v5, param_string_encryption_encrypted, 0x20u);
 v5[30] = 0;
 v0 = v5[0];
 v15 = 0;
 if ( v5[0] )
 {
 v1 = v5 + 1;
 do
 {
 v2 = v0 ^ 0x5A;
 v0 = *v1;
 v1++;
 *(v1 - 1) = v2;
 }
 while ( v0 );
 v3 = v5[0];
 }
 else
 {
 v3 = 0;
 }
 return (unsigned int)strlen((const char *)v5) + v3;
}


/* Function: call_string_encryption @ 0xAA4 */
long long call_string_encryption()
{
 int v0; // w8
 unsigned char *v1; // x9
 unsigned char v2; // w11
 int v3; // w19
 unsigned char v5[32]; // [xsp+0h] [xbp-20h] BYREF

 strncpy((char *)v5, param_string_encryption_encrypted, 0x20u);
 v5[31] = 0;
 v0 = v5[0];
 if ( v5[0] )
 {
 v1 = v5 + 1;
 do
 {
 v2 = v0 ^ 0x5A;
 v0 = *v1;
 v1++;
 *(v1 - 1) = v2;
 }
 while ( v0 );
 v3 = v5[0];
 }
 else
 {
 v3 = 0;
 }
 return (unsigned int)strlen((const char *)v5) + v3;
}


/* Function: param_tail_call_optimized @ 0xB1C */
long long param_tail_call_optimized(int a1, unsigned int a2)
{
 if ( a1 >= 1 )
 return a2 + a1 + (a1 - 1) * (a1 - 1) - (unsigned int)(((unsigned int)(a1 - 1) * (unsigned long long)(unsigned int)(a1 - 2)) >> 1);
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
 v20 = v18->n128_u32[0];
 v18 = (int32x4_t *)((char *)v18 + 4);
 v19 = v20;
 v21 = v17->n128_u32[0];
 v17 = (int32x4_t *)((char *)v17 + 4);
 --v15;
 v16->n128_u32[0] = v21 + v19;
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
 result = 0;
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
 v25.n128_u32[0] = 0u;
 v25.n128_u32[1] = 0u;
 v25.n128_u32[2] = 0u;
 v25.n128_u32[3] = 0u;
 v26 = v22;
 v27.n128_u32[0] = 0u;
 v27.n128_u32[1] = 0u;
 v27.n128_u32[2] = 0u;
 v27.n128_u32[3] = 0u;
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
void div_zero_handler(int sig)
{
 div_zero_caught = 1;
 longjmp(jmp_buffer, 1);
}


/* Function: param_division_by_zero @ 0xD0C */
long long param_division_by_zero(int a1)
{
 signal(8, div_zero_handler);
 if ( _setjmp(jmp_buffer) )
 return 0xFFFFFFFFLL;
 else
 return (unsigned int)(10 / a1);
}


/* Function: call_division_by_zero @ 0xD60 */
long long call_division_by_zero()
{
 int v0; // w19
 int v1; // w20

 v0 = param_division_by_zero(5);
 v1 = param_division_by_zero(0);
 signal(8, 0);
 return (unsigned int)(v1 + v0);
}


/* Function: segv_handler @ 0xDA0 */
void segv_handler(int sig)
{
 segv_caught = 1;
 longjmp(segv_buffer, 1);
}


/* Function: param_null_pointer_deref @ 0xDC4 */
long long param_null_pointer_deref(unsigned int *a1)
{
 signal(11, segv_handler);
 if ( _setjmp(segv_buffer) )
 return 0xFFFFFFFFLL;
 else
 return *a1;
}


/* Function: call_null_pointer_deref @ 0xE14 */
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


/* Function: param_buffer_overflow_stack @ 0xE64 */
void param_buffer_overflow_stack()
{
 ;
}


/* Function: param_buffer_overflow_heap @ 0xE68 */
void param_buffer_overflow_heap()
{
 ;
}


/* Function: call_buffer_overflow @ 0xE6C */
long long call_buffer_overflow()
{
 return 30;
}


/* Function: param_integer_overflow @ 0xE74 */
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


/* Function: call_integer_overflow @ 0xEAC */
long long call_integer_overflow()
{
 return 2000000000;
}


/* Function: param_undefined_behavior @ 0xEB8 */
long long param_undefined_behavior(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: call_undefined_behavior @ 0xEC0 */
long long call_undefined_behavior()
{
 return 10;
}


/* Function: param_implementation_defined @ 0xEC8 */
long long param_implementation_defined()
{
 return 48;
}


/* Function: call_implementation_defined @ 0xED0 */
long long call_implementation_defined()
{
 return 48;
}


/* Function: test_obf_opt_edge @ 0xED8 */
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
 int v15; // [xsp+Ch] [xbp-14h]
 unsigned char v14[32]; // [xsp+0h] [xbp-20h] BYREF

 puts(asc_12B9);
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
 v4 = v14[0];
 v15 = 0;
 if ( v14[0] )
 {
 v5 = v14 + 1;
 do
 {
 v6 = v4 ^ 0x5A;
 v4 = *v5;
 v5++;
 *(v5 - 1) = v6;
 }
 while ( v4 );
 v7 = v14[0];
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
 *(unsigned int *)v14 = 42;
 v11 = param_null_pointer_deref((unsigned int *)v14);
 v12 = param_null_pointer_deref(0);
 signal(11, 0);
 printf(aEdgeL302D, (unsigned int)(v12 + v11));
 printf(aEdgeL303D, 30);
 printf(aEdgeL304D, 2000000000);
 printf(aEdgeL401D, 10);
 return printf(aEdgeL402D, 48);
}


/* Function: main @ 0x10B8 */
int main(int argc, const char **argv, const char **envp)
{
 test_obf_opt_edge();
 return 0;
}


/* Function: .term_proc @ 0x10D0 */
void term_proc()
{
 ;
}


/* FAILED to decompile: strlen @ 0x12340 */

/* FAILED to decompile: _setjmp @ 0x12348 */

/* FAILED to decompile: __libc_start_main @ 0x12350 */

/* FAILED to decompile: __cxa_finalize @ 0x12358 */

/* FAILED to decompile: signal @ 0x12360 */

/* FAILED to decompile: abort @ 0x12368 */

/* FAILED to decompile: puts @ 0x12370 */

/* FAILED to decompile: longjmp @ 0x12378 */

/* FAILED to decompile: strncpy @ 0x12380 */

/* FAILED to decompile: printf @ 0x12388 */

/* FAILED to decompile: __gmon_start__ @ 0x12398 */

/* Total functions decompiled: 43, failed: 11 */
