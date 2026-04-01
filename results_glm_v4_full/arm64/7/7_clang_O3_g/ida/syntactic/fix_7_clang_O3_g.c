/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;

typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long int64_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;


#include <arm_neon.h>
#include <setjmp.h>
#include <signal.h>
#include <string.h>
#include <stdio.h>

/* IDA Pro helper macros */
#define JUMPOUT(x) do { __builtin_unreachable(); } while(0)
#define LOBYTE(x) (*((const unsigned char*)&(x)))
#define SET_LOBYTE(x, val) (*((unsigned char*)&(x)) = (val))

/* Global variables */
jmp_buf jmp_buffer;
jmp_buf segv_buffer;
volatile int div_zero_caught;
volatile int segv_caught;

/* String constants */
static const char asc_12B9[] = "Testing obfuscation and optimization:\n";
static const char aObfL402D[] = "obf_l40 = %d\n";
static const char aObfL403D[] = "obf_l40 = %d\n";
static const char aObfL404D[] = "obf_l40 = %d\n";
static const char aObfL405D[] = "obf_l40 = %u\n";
static const char aOptL401[] = "opt_l40 = %d\n";
static const char aOptL401_0[] = "opt_l40 = %d\n";
static const char aOptL402[] = "opt_l40 = %d\n";
static const char aOptL501LtoD[] = "opt_l50 = %d\n";
static const char aEdgeL301D[] = "edge_l30 = %u\n";
static const char aEdgeL302D[] = "edge_l30 = %u\n";
static const char aEdgeL303D[] = "edge_l30 = %d\n";
static const char aEdgeL304D[] = "edge_l30 = %d\n";
static const char aEdgeL401D[] = "edge_l40 = %d\n";
static const char aEdgeL402D[] = "edge_l40 = %d\n";

/* Encrypted string constant */
const char param_string_encryption_encrypted[32] = {
 0x6C, 0x6B, 0x6A, 0x69, 0x68, 0x67, 0x66, 0x65,
 0x64, 0x63, 0x62, 0x61, 0x60, 0x5F, 0x5E, 0x5D,
 0x5C, 0x5B, 0x5A, 0x59, 0x58, 0x57, 0x56, 0x55,
 0x54, 0x53, 0x52, 0x51, 0x50, 0x4F, 0x4E, 0x00
};

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/7/7_clang_O3_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x710 */
long long init_proc()
{
 return 0;
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
int param_fake_branch(int x)
{
 return x;
}


/* Function: call_fake_branch @ 0x918 */
int call_fake_branch()
{
 return 10;
}


/* Function: param_opaque_predicate @ 0x920 */
int param_opaque_predicate(int x)
{
 int v1; // w8
 int v2; // w10
 int v3; // w11
 int v4; // w12
 int v5; // w11
 int v6; // w8

 v1 = 2 * x;
 if ( x == -1 )
 {
 v2 = -1;
 }
 else
 {
 v3 = x;
 v4 = x + 1;
 do
 {
 v2 = v4;
 v4 = v3 % v4;
 v3 = v2;
 }
 while ( v4 );
 }
 v5 = (v1 | 1) + x * x;
 v6 = v1 + 10;
 if ( v2 == 1 && v5 == (x + 1) * (x + 1) )
 return v6;
 else
 return 3 * x + 20;
}


/* Function: call_opaque_predicate @ 0x978 */
int call_opaque_predicate()
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
int param_instruction_substitution(int x)
{
 return (x & 0xF) + ((unsigned int)x >> 1) + 21 * x;
}


/* Function: call_instruction_substitution @ 0x9BC */
int call_instruction_substitution()
{
 return 225;
}


/* Function: decrypt_string @ 0x9C4 */
const char * decrypt_string(const char *encrypted, char *buffer, size_t len, char key)
{
 int v7; // w8
 char *v8; // x10
 char v9; // w11

 strncpy(buffer, encrypted, len);
 buffer[len - 1] = 0;
 v7 = *buffer;
 if ( *buffer )
 {
 v8 = buffer + 1;
 do
 {
 v9 = v7 ^ key;
 v7 = (unsigned char)*v8;
 *(v8++ - 1) = v9;
 }
 while ( v7 );
 }
 return buffer;
}


/* Function: param_string_encryption @ 0xA2C */
int param_string_encryption()
{
 int v3; // w19
 char buffer[32];

 strncpy(buffer, (const char *)param_string_encryption_encrypted, 32);
 buffer[31] = 0;
 {
  char *p = buffer;
  unsigned char *v1 = (unsigned char *)buffer;
  unsigned char v2;
  unsigned char v0 = *v1;
  do
  {
   v2 = v0 ^ 0x5A;
   v0 = *++v1;
   *(v1 - 1) = v2;
  }
  while ( v0 );
  v3 = *buffer;
 }
 return strlen(buffer) + v3;
}


/* Function: call_string_encryption @ 0xAA4 */
int call_string_encryption()
{
 int v3; // w19
 char buffer[32];

 strncpy(buffer, (const char *)param_string_encryption_encrypted, 32);
 buffer[31] = 0;
 {
  char *p = buffer;
  unsigned char *v1 = (unsigned char *)buffer;
  unsigned char v2;
  unsigned char v0 = *v1;
  do
  {
   v2 = v0 ^ 0x5A;
   v0 = *++v1;
   *(v1 - 1) = v2;
  }
  while ( v0 );
  v3 = *buffer;
 }
 return strlen(buffer) + v3;
}


/* Function: param_tail_call_optimized @ 0xB1C */
int param_tail_call_optimized(int n, int acc)
{
 if ( n >= 1 )
 return acc + n + (n - 1) * (n - 1) - (((unsigned int)(n - 1) * (unsigned long long)(unsigned int)(n - 2)) >> 1);
 return acc;
}


/* Function: call_tail_call_optimized @ 0xB44 */
int call_tail_call_optimized()
{
 return 500500;
}


/* Function: param_non_tail_call @ 0xB50 */
int param_non_tail_call(int n)
{
 if ( n < 1 )
 return 0;
 else
 return n + (n - 1) * (n - 1) - (((unsigned int)(n - 1) * (unsigned long long)(unsigned int)(n - 2)) >> 1);
}


/* Function: call_non_tail_call @ 0xB78 */
int call_non_tail_call()
{
 return 5050;
}


/* Function: param_vectorized_loop @ 0xB80 */
int param_vectorized_loop(int *a, int *b, int *c, int n)
{
 long long v4; // x9
 int *v5; // x12
 int *v6; // x10
 int *v7; // x11
 int32x4_t *v8; // x12
 long long v9; // x13
 int32x4_t v10; // q0
 int32x4_t v11; // q1
 int32x4_t v12; // q2
 int32x4_t v13; // q3
 long long v14; // x12
 long long v15; // x9
 int *v16; // x10
 int *v17; // x11
 int *v18; // x12
 int v19; // w13
 int v20; // t1
 int v21; // t1
 long long v22; // x9
 int result; // w0
 int *v24; // x10
 int32x4_t v25; // q0
 long long v26; // x11
 int32x4_t v27; // q1
 int32x4_t v28; // q2
 int32x4_t v29; // q3
 int *v30; // x10
 long long v31; // x8
 int v32; // t1

 if ( n < 1 )
 return 0;
 if ( (unsigned int)n < 8 )
 {
 v4 = 0;
LABEL_9:
 v14 = v4;
 v15 = (unsigned int)n - v4;
 v16 = &c[v14];
 v17 = &b[v14];
 v18 = &a[v14];
 do
 {
 v20 = *v18++;
 v19 = v20;
 v21 = *v17++;
 --v15;
 *v16++ = v21 + v19;
 }
 while ( v15 );
 goto LABEL_11;
 }
 v4 = 0;
 v5 = &c[n];
 if ( &a[n] > c && v5 > a )
 goto LABEL_9;
 if ( &b[n] > c && v5 > b )
 goto LABEL_9;
 v4 = n & 0xFFFFFFF8;
 v6 = a + 4;
 v7 = b + 4;
 v8 = (int32x4_t *)(c + 4);
 v9 = v4;
 do
 {
 v10 = *((int32x4_t *)v6 - 1);
 v11 = *(int32x4_t *)v6;
 v6 += 8;
 v9 -= 8;
 v12 = *((int32x4_t *)v7 - 1);
 v13 = *(int32x4_t *)v7;
 v7 += 8;
 v8[-1] = vaddq_s32(v12, v10);
 *v8 = vaddq_s32(v13, v11);
 v8 += 2;
 }
 while ( v9 );
 if ( v4 != n )
 goto LABEL_9;
LABEL_11:
 if ( (unsigned int)n < 8 )
 {
 v22 = 0;
 result = 0;
LABEL_17:
 v30 = &c[v22];
 v31 = (unsigned int)n - v22;
 do
 {
 v32 = *v30++;
 --v31;
 result += v32;
 }
 while ( v31 );
 return result;
 }
 v22 = n & 0xFFFFFFF8;
 v24 = c + 4;
 v25 = vdupq_n_s32(0);
 v26 = v22;
 v27 = vdupq_n_s32(0);
 do
 {
 v28 = *((int32x4_t *)v24 - 1);
 v29 = *(int32x4_t *)v24;
 v24 += 8;
 v26 -= 8;
 v25 = vaddq_s32(v28, v25);
 v27 = vaddq_s32(v29, v27);
 }
 while ( v26 );
 result = vaddvq_s32(vaddq_s32(v27, v25));
 if ( v22 != n )
 goto LABEL_17;
 return result;
}


/* Function: call_vectorized_loop @ 0xCD0 */
int call_vectorized_loop()
{
 return 72;
}


/* Function: param_link_time_optimization @ 0xCD8 */
int param_link_time_optimization(int x)
{
 return 2 * x + 10;
}


/* Function: call_link_time_optimization @ 0xCE4 */
int call_link_time_optimization()
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
int param_division_by_zero(int x)
{
 signal(8, (__sighandler_t)div_zero_handler);
 if ( _setjmp(jmp_buffer) )
 return -1;
 else
 return 10 / x;
}


/* Function: call_division_by_zero @ 0xD60 */
int call_division_by_zero()
{
 int v0; // w19
 int v1; // w20

 v0 = param_division_by_zero(5);
 v1 = param_division_by_zero(0);
 signal(8, 0);
 return v1 + v0;
}


/* Function: segv_handler @ 0xDA0 */
void segv_handler(int sig)
{
 segv_caught = 1;
 longjmp(segv_buffer, 1);
}


/* Function: param_null_pointer_deref @ 0xDC4 */
int param_null_pointer_deref(int *p)
{
 signal(11, (__sighandler_t)segv_handler);
 if ( _setjmp(segv_buffer) )
 return -1;
 else
 return *p;
}


/* Function: call_null_pointer_deref @ 0xE14 */
int call_null_pointer_deref()
{
 int v0; // w19
 int v1; // w20
 int valid; // [xsp+Ch] [xbp-4h] BYREF

 valid = 42;
 v0 = param_null_pointer_deref(&valid);
 v1 = param_null_pointer_deref(0);
 signal(11, 0);
 return v1 + v0;
}


/* Function: param_buffer_overflow_stack @ 0xE64 */
int param_buffer_overflow_stack(int x)
{
 return x;
}


/* Function: param_buffer_overflow_heap @ 0xE68 */
int param_buffer_overflow_heap(int x)
{
 return x;
}


/* Function: call_buffer_overflow @ 0xE6C */
int call_buffer_overflow()
{
 return 30;
}


/* Function: param_integer_overflow @ 0xE74 */
int param_integer_overflow(int a, int b)
{
 int v2; // w8

 v2 = b + a;
 if ( a >= 1 && b >= 1 && v2 < 0 )
 return -1;
 if ( v2 > 0 && (b & a) < 0 )
 return -2;
 else
 return b + a;
}


/* Function: call_integer_overflow @ 0xEAC */
int call_integer_overflow()
{
 return 2000000000;
}


/* Function: param_undefined_behavior @ 0xEB8 */
int param_undefined_behavior(int i)
{
 return 2 * i;
}


/* Function: call_undefined_behavior @ 0xEC0 */
int call_undefined_behavior()
{
 return 10;
}


/* Function: param_implementation_defined @ 0xEC8 */
int param_implementation_defined()
{
 return 48;
}


/* Function: call_implementation_defined @ 0xED0 */
int call_implementation_defined()
{
 return 48;
}


/* Function: test_obf_opt_edge @ 0xED8 */
void test_obf_opt_edge()
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
 int v13[7]; // [xsp+0h] [xbp-20h] BYREF
 char v14; // [xsp+1Fh] [xbp-1h]

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
 strncpy((char *)v13, param_string_encryption_encrypted, 0x20u);
 v4 = v13[0];
 v14 = 0;
 if ( v13[0] )
 {
 v5 = (unsigned char *)v13;
 do
 {
 v6 = v4 ^ 0x5A;
 v4 = *++v5;
 *(v5 - 1) = v6;
 }
 while ( v4 );
 v7 = LOBYTE(v13[0]);
 }
 else
 {
 v7 = 0;
 }
 v8 = strlen((const char *)v13);
 printf(aObfL405D, (unsigned int)(v8 + v7));
 printf(aOptL401, 500500);
 printf(aOptL401_0, 5050);
 printf(aOptL402, 72);
 printf(aOptL501LtoD, 20);
 v9 = param_division_by_zero(5);
 v10 = param_division_by_zero(0);
 signal(8, 0);
 printf(aEdgeL301D, (unsigned int)(v10 + v9));
 v13[0] = 42;
 v11 = param_null_pointer_deref(v13);
 v12 = param_null_pointer_deref(0);
 signal(11, 0);
 printf(aEdgeL302D, (unsigned int)(v12 + v11));
 printf(aEdgeL303D, 30);
 printf(aEdgeL304D, 2000000000);
 printf(aEdgeL401D, 10);
 printf(aEdgeL402D, 48);
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
