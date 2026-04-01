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

/* Hex-Rays/Compiler macros */
#define LOBYTE(x) ((unsigned char)(x))
#define HIBYTE(x) (((unsigned char)(x)) >> 8)
#define LODWORD(x) (*(unsigned int*)&(x))
#define __OFSUB__(a, b) 0
#define JUMPOUT(x) return

#include <stdio.h>
#include <signal.h>
#include <setjmp.h>
#include <string.h>

/* Global variables */
jmp_buf jmp_buffer;
jmp_buf segv_buffer;
int div_zero_caught;
int segv_caught;

/* String constants */
const char asc_12C9[] = "Testing obfuscation and optimization edge cases";
const char aObfL402D[] = "Obf: L402 %d";
const char aObfL403D[] = "Obf: L403 %lld";
const char aObfL404D[] = "Obf: L404 %d";
const char aObfL405D[] = "Obf: L405 %d";
const char aOptL401[] = "Opt: L401 %d";
const char aOptL401_0[] = "Opt: L401.0 %d";
const char aOptL402[] = "Opt: L402 %lld";
const char aOptL501LtoD[] = "Opt: L501 LtoD %d";
const char aEdgeL301D[] = "Edge: L301 %d";
const char aEdgeL302D[] = "Edge: L302 %d";
const char aEdgeL303D[] = "Edge: L303 %d";
const char aEdgeL304D[] = "Edge: L304 %d";
const char aEdgeL401D[] = "Edge: L401 %d";
const char aEdgeL402D[] = "Edge: L402 %d";

/* CRT stub function declarations */
long long call_weak_fn(void);

/* Data arrays */
unsigned char unk_10B8[32];
unsigned char unk_10D8[32];

/* Encrypted string constant */
const char param_string_encryption_encrypted[32] = {
  0x32, 0x3B, 0x33, 0x33, 0x2D, 0x1C, 0x4F, 0x29, 
  0x3D, 0x0C, 0x35, 0x0C, 0x2A, 0x25, 0x0C, 0x00,
  0x45, 0x64, 0x67, 0x65, 0x3A, 0x40, 0x6F, 0x2F,
  0x33, 0x33, 0x28, 0x2C, 0x0C, 0x35, 0x0C, 0x00
};

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/7/7_clang_O1_no_g
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
 v2 = a1;
 if ( a1 != -1 )
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


/* Function: call_opaque_predicate @ 0x974 */
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


/* Function: param_instruction_substitution @ 0x9A4 */
long long param_instruction_substitution(unsigned int a1)
{
 return (a1 & 0xF) + (a1 >> 1) + 21 * a1;
}


/* Function: call_instruction_substitution @ 0x9B8 */
long long call_instruction_substitution()
{
 return 225;
}


/* Function: decrypt_string @ 0x9C0 */
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


/* Function: param_string_encryption @ 0xA28 */
long long param_string_encryption()
{
 int v0; // w8
 unsigned char *v1; // x9
 unsigned char v2; // w11
 int v3; // w0
 unsigned char v5; // [xsp+0h] [xbp-20h] BYREF
 unsigned char v6[31]; // [xsp+1h] [xbp-1Fh] BYREF

 strncpy((char *)&v5, param_string_encryption_encrypted, 0x20u);
 v0 = v5;
 v6[30] = 0;
 if ( v5 )
 {
 v1 = v6;
 do
 {
 v2 = v0 ^ 0x5A;
 v0 = *v1;
 v1++;
 *v1 = v2;
 }
 while ( v0 );
 }
 v3 = strlen((const char *)&v5);
 return v3 + (unsigned int)v5;
}


/* Function: call_string_encryption @ 0xA98 */
long long call_string_encryption()
{
 int v0; // w8
 unsigned char *v1; // x9
 unsigned char v2; // w11
 int v3; // w0
 unsigned char v5; // [xsp+0h] [xbp-20h] BYREF
 unsigned char v6[31]; // [xsp+1h] [xbp-1Fh] BYREF

 strncpy((char *)&v5, param_string_encryption_encrypted, 0x20u);
 v0 = v5;
 v6[30] = 0;
 if ( v5 )
 {
 v1 = v6;
 do
 {
 v2 = v0 ^ 0x5A;
 v0 = *v1;
 v1++;
 *v1 = v2;
 }
 while ( v0 );
 }
 v3 = strlen((const char *)&v5);
 return v3 + (unsigned int)v5;
}


/* Function: param_tail_call_optimized @ 0xB08 */
long long param_tail_call_optimized(int a1, unsigned int a2)
{
 bool v3; // vf
 long long v4; // x0

 v3 = __OFSUB__(a1, 1);
 v4 = (unsigned int)(a1 - 1);
 if ( (int)v4 < 0 == v3 )
 return (unsigned int)param_tail_call_optimized(v4, a2 + a1);
 return a2;
}


/* Function: call_tail_call_optimized @ 0xB34 */
long long call_tail_call_optimized()
{
 return param_tail_call_optimized(1000, 0);
}


/* Function: param_non_tail_call @ 0xB50 */
long long param_non_tail_call(int a1)
{
 if ( a1 < 1 )
 return 0;
 else
 return (unsigned int)param_non_tail_call(a1 - 1) + a1;
}


/* Function: call_non_tail_call @ 0xB84 */
long long call_non_tail_call()
{
 return param_non_tail_call(100);
}


/* Function: param_vectorized_loop @ 0xB9C */
long long param_vectorized_loop(int *a1, int *a2, int *a3, int a4)
{
 long long v4; // x8
 int *v5; // x9
 int v6; // w10
 int v7; // t1
 int v8; // t1
 long long result; // x0
 long long v10; // x8
 int v11; // t1

 if ( a4 >= 1 )
 {
 v4 = (unsigned int)a4;
 v5 = a3;
 do
 {
 v7 = *a1++;
 v6 = v7;
 v8 = *a2++;
 --v4;
 *v5++ = v8 + v6;
 }
 while ( v4 );
 }
 if ( a4 < 1 )
 return 0;
 LODWORD(result) = 0;
 v10 = (unsigned int)a4;
 do
 {
 v11 = *a3++;
 --v10;
 result = (unsigned int)(v11 + result);
 }
 while ( v10 );
 return result;
}


/* Function: call_vectorized_loop @ 0xBF0 */
long long call_vectorized_loop()
{
 long long v0; // x8
 long long v1; // x8
 long long result; // x0
 int v3; // w10
 unsigned long long v4[2]; // [xsp+0h] [xbp-20h] BYREF

 v0 = 0;
 memset(v4, 0, sizeof(v4));
 do
 {
 *(unsigned int *)((char *)v4 + v0) = *(unsigned int *)((char *)&unk_10D8 + v0) + *(unsigned int *)((char *)&unk_10B8 + v0);
 v0 += 4;
 }
 while ( v0 != 32 );
 v1 = 0;
 LODWORD(result) = 0;
 do
 {
 v3 = *(unsigned int *)((char *)v4 + v1);
 v1 += 4;
 result = (unsigned int)(v3 + result);
 }
 while ( v1 != 32 );
 return result;
}


/* Function: param_link_time_optimization @ 0xC58 */
long long param_link_time_optimization(int a1)
{
 return (unsigned int)(2 * a1 + 10);
}


/* Function: call_link_time_optimization @ 0xC64 */
long long call_link_time_optimization()
{
 return 20;
}


/* Function: div_zero_handler @ 0xC6C */
void div_zero_handler()
{
 div_zero_caught = 1;
 longjmp(jmp_buffer, 1);
}


/* Function: param_division_by_zero @ 0xC90 */
long long param_division_by_zero(int a1)
{
 signal(8, (__sighandler_t)div_zero_handler);
 if ( _setjmp(jmp_buffer) )
 return 0xFFFFFFFFLL;
 else
 return (unsigned int)(10 / a1);
}


/* Function: call_division_by_zero @ 0xCDC */
long long call_division_by_zero()
{
 int v0; // w19
 int v1; // w20

 v0 = param_division_by_zero(5);
 v1 = param_division_by_zero(0);
 signal(8, 0);
 return (unsigned int)(v1 + v0);
}


/* Function: segv_handler @ 0xD1C */
void segv_handler()
{
 segv_caught = 1;
 longjmp(segv_buffer, 1);
}


/* Function: param_null_pointer_deref @ 0xD40 */
long long param_null_pointer_deref(unsigned int *a1)
{
 signal(11, (__sighandler_t)segv_handler);
 if ( _setjmp(segv_buffer) )
 return 0xFFFFFFFFLL;
 else
 return *a1;
}


/* Function: call_null_pointer_deref @ 0xD88 */
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


/* Function: param_buffer_overflow_stack @ 0xDD8 */
void param_buffer_overflow_stack()
{
 ;
}


/* Function: param_buffer_overflow_heap @ 0xDDC */
void param_buffer_overflow_heap()
{
 ;
}


/* Function: call_buffer_overflow @ 0xDE0 */
long long call_buffer_overflow()
{
 return 30;
}


/* Function: param_integer_overflow @ 0xDE8 */
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


/* Function: call_integer_overflow @ 0xE20 */
long long call_integer_overflow()
{
 return 2000000000;
}


/* Function: param_undefined_behavior @ 0xE2C */
long long param_undefined_behavior(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: call_undefined_behavior @ 0xE34 */
long long call_undefined_behavior()
{
 return 10;
}


/* Function: param_implementation_defined @ 0xE3C */
long long param_implementation_defined()
{
 return 48;
}


/* Function: call_implementation_defined @ 0xE44 */
long long call_implementation_defined()
{
 return 48;
}


/* Function: test_obf_opt_edge @ 0xE4C */
long long test_obf_opt_edge()
{
 int v0; // w8
 int v1; // w9
 int v2; // w10
 long long v3; // x1
 int v4; // w8
 unsigned char *v5; // x9
 unsigned char v6; // w11
 int v7; // w0
 unsigned int v8; // w0
 unsigned int v9; // w0
 long long v10; // x8
 long long v11; // x8
 long long v12; // x1
 int v13; // w10
 int v14; // w19
 int v15; // w20
 int v16; // w19
 int v17; // w20
 __int128 v19; // [xsp+0h] [xbp-20h] BYREF
 __int128 v20; // [xsp+10h] [xbp-10h]

 puts(asc_12C9);
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
 strncpy((char *)&v19, param_string_encryption_encrypted, 0x20u);
 v4 = v19;
 if ( (unsigned char)v19 )
 {
 v5 = (unsigned char *)&v19 + 1;
 do
 {
 v6 = v4 ^ 0x5A;
 v4 = *v5;
 v5++;
 *v5 = v6;
 }
 while ( v4 );
 }
 v7 = strlen((const char *)&v19);
 printf(aObfL405D, v7 + (unsigned int)(unsigned char)v19);
 v8 = param_tail_call_optimized(1000, 0);
 printf(aOptL401, v8);
 v9 = param_non_tail_call(100);
 printf(aOptL401_0, v9);
 v10 = 0;
 v19 = 0u;
 v20 = 0u;
 do
 {
 *(unsigned int *)((char *)&v19 + v10) = *(unsigned int *)((char *)&unk_10D8 + v10) + *(unsigned int *)((char *)&unk_10B8 + v10);
 v10 += 4;
 }
 while ( v10 != 32 );
 v11 = 0;
 LODWORD(v12) = 0;
 do
 {
 v13 = *(unsigned int *)((char *)&v19 + v11);
 v11 += 4;
 LODWORD(v12) = v13 + v12;
 }
 while ( v11 != 32 );
 printf(aOptL402, v12);
 printf(aOptL501LtoD, 20);
 v14 = param_division_by_zero(5);
 v15 = param_division_by_zero(0);
 signal(8, 0);
 printf(aEdgeL301D, (unsigned int)(v15 + v14));
 LODWORD(v19) = 42;
 v16 = param_null_pointer_deref((unsigned int *)&v19);
 v17 = param_null_pointer_deref(0);
 signal(11, 0);
 printf(aEdgeL302D, (unsigned int)(v17 + v16));
 printf(aEdgeL303D, 30);
 printf(aEdgeL304D, 2000000000);
 printf(aEdgeL401D, 10);
 return printf(aEdgeL402D, 48);
}


/* Function: main @ 0x1088 */
int main(int argc, const char **argv, const char **envp)
{
 test_obf_opt_edge();
 return 0;
}


/* Function: .term_proc @ 0x10A0 */
void term_proc()
{
 ;
}


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
