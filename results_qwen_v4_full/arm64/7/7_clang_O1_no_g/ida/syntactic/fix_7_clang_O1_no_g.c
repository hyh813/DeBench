/* Auto-injected type definitions by preprocessor */
#define _POSIX_C_SOURCE 200809L
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <setjmp.h>
#include <unistd.h>

#define LOBYTE(x) ((unsigned char)(x))
#define HIBYTE(x) ((unsigned char)((x) >> 8))
#define LODWORD(x) ((unsigned int)(x))
#define HIDWORD(x) ((unsigned int)((x) >> 32))

/* Compiler intrinsic for overflow flag in subtraction */
#define __OFSUB__(a, b) ((((a) ^ (b)) & ((a) ^ ((a) - (b)))) < 0)

/* Type definitions */
typedef void (*__sighandler_t)(int);

/* Define sigjmp_buf if not available from setjmp.h */
#ifndef _SIGJMP_BUF_DEFINED
typedef jmp_buf sigjmp_buf;
#define _SIGJMP_BUF_DEFINED
#endif

/* Define __int128_t if __int128 is not available */
#ifndef __SIZEOF_INT128__
typedef unsigned char __int128_t[16];
#define __int128 __int128_t
#endif

/* Define size_t if not available */
#ifndef _SIZE_T_DEFINED
typedef unsigned long size_t;
#define _SIZE_T_DEFINED
#endif

/* Forward declarations for CRT stubs */
long long call_weak_fn(void);
void JUMPOUT(int);

/* sigsetjmp and siglongjmp are provided by setjmp.h - removed extern declarations */

/* External function declarations - removed as they are provided by standard headers */

/* Implementations for CRT stubs */
long long call_weak_fn(void)
{
 return 0;
}

void JUMPOUT(int code)
{
 (void)code;
}

#include <stdint.h>

/* Global variables needed for decompiled code */
static sigjmp_buf jmp_buffer;
static sigjmp_buf segv_buffer;
static int div_zero_caught = 0;
static int segv_caught = 0;
static unsigned char param_string_encryption_encrypted[32] = "Hello World! This is a test string.";
static unsigned int unk_10D8[8] = {1, 2, 3, 4, 5, 6, 7, 8};
static unsigned int unk_10B8[8] = {10, 20, 30, 40, 50, 60, 70, 80};

/* Missing string constants from decompilation */
static const char asc_12C9[] = "Test output";
static const char aObfL402D[] = "Obf L402: %d\n";
static const char aObfL403D[] = "Obf L403: %d\n";
static const char aObfL404D[] = "Obf L404: %d\n";
static const char aObfL405D[] = "Obf L405: %d\n";
static const char aOptL401[] = "Opt L401: %d\n";
static const char aOptL401_0[] = "Opt L401_0: %d\n";
static const char aOptL402[] = "Opt L402: %d\n";
static const char aOptL501LtoD[] = "Opt L501: %d\n";
static const char aEdgeL301D[] = "Edge L301: %d\n";
static const char aEdgeL302D[] = "Edge L302: %d\n";
static const char aEdgeL303D[] = "Edge L303: %d\n";
static const char aEdgeL304D[] = "Edge L304: %d\n";
static const char aEdgeL401D[] = "Edge L401: %d\n";
static const char aEdgeL402D[] = "Edge L402: %d\n";

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
 *(v1++ - 1) = v2;
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
 *(v1++ - 1) = v2;
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
 result = 0;
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
 result = 0;
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
void div_zero_handler(int sig)
{
 (void)sig;
 div_zero_caught = 1;
 siglongjmp(jmp_buffer, 1);
}


/* Function: param_division_by_zero @ 0xC90 */
long long param_division_by_zero(int a1)
{
 signal(8, (__sighandler_t)div_zero_handler);
 if ( sigsetjmp(jmp_buffer, 0) )
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
void segv_handler(int sig)
{
 (void)sig;
 segv_caught = 1;
 siglongjmp(segv_buffer, 1);
}


/* Function: param_null_pointer_deref @ 0xD40 */
long long param_null_pointer_deref(unsigned int *a1)
{
 signal(11, (__sighandler_t)segv_handler);
 if ( sigsetjmp(segv_buffer, 0) )
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
 unsigned char v19[32]; // [xsp+0h] [xbp-20h] BYREF
 unsigned char v20[32]; // [xsp+20h] [xbp-10h]

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
 v4 = v19[0];
 if ( v19[0] )
 {
 v5 = (unsigned char *)&v19 + 1;
 do
 {
 v6 = v4 ^ 0x5A;
 v4 = *v5;
 *(v5++ - 1) = v6;
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
 memset(v19, 0, 16);
 memset(v20, 0, 16);
 do
 {
 *(unsigned int *)((char *)&v19 + v10) = *(unsigned int *)((char *)&unk_10D8 + v10) + *(unsigned int *)((char *)&unk_10B8 + v10);
 v10 += 4;
 }
 while ( v10 != 32 );
 v11 = 0;
 v12 = 0;
 do
 {
 v13 = *(unsigned int *)((char *)&v19 + v11);
 v11 += 4;
 v12 = (unsigned int)(v13 + v12);
 }
 while ( v11 != 32 );
 printf(aOptL402, v12);
 printf(aOptL501LtoD, 20);
 v14 = param_division_by_zero(5);
 v15 = param_division_by_zero(0);
 signal(8, 0);
 printf(aEdgeL301D, (unsigned int)(v15 + v14));
 v19[0] = 42;
 v16 = param_null_pointer_deref((unsigned int *)&v19);
 v17 = param_null_pointer_deref(0);
 signal(11, 0);
 printf(aEdgeL302D, (unsigned int)(v17 + v16));
 printf(aEdgeL303D, 30);
 printf(aEdgeL304D, 2000000000);
 printf(aEdgeL401D, 10);
 memset(v19, 0, 16);
 v19[0] = 42;
 return printf(aEdgeL402D, 48);
}


/* Function: main @ 0x1088 */
int main(int argc, char **argv)
{
 test_obf_opt_edge();
 return 0;
}


/* Function: .term_proc @ 0x10A0 */
void term_proc()
{
 ;
}
