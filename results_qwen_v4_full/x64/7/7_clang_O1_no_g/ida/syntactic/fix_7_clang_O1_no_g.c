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

/* Standard library includes */
#include <stdio.h>
#include <signal.h>
#include <setjmp.h>
#include <string.h>

/* Define __sighandler_t if not already defined */
#ifndef __sighandler_t
typedef void (*__sighandler_t)(int);
#endif

/* Global declarations for undeclared identifiers */
static long long div_zero_caught = 0;
static long long segv_caught = 0;
static long long jmp_buffer[10];
static long long segv_buffer[10];
static char param_string_encryption_encrypted[] = "encrypted_string_data_here";
static char s[] = "test";
static char format[] = "%d";
static char aObfL403D[] = "ObfL403D: %lld";
static char aObfL404D[] = "ObfL404D: %lld";
static char aObfL405D[] = "ObfL405D: %d";
static char aOptL401[] = "OptL401: %d";
static char aOptL401_0[] = "OptL401_0: %d";
static char aOptL402[] = "OptL402: %lld";
static char aOptL501LtoD[] = "OptL501LtoD: %lld";
static char aEdgeL301D[] = "EdgeL301D: %d";
static char aEdgeL302D[] = "EdgeL302D: %d";
static char aEdgeL303D[] = "EdgeL303D: %d";
static char aEdgeL304D[] = "EdgeL304D: %d";
static char aEdgeL401D[] = "EdgeL401D: %d";
static char aEdgeL402D[] = "EdgeL402D: %d";
static char unk_2010[32] = {0};
static char unk_2030[32] = {0};

/* Macro definitions */
#define LODWORD(x) ((x) & 0xFFFFFFFF)
#define HIDWORD(x) ((x) >> 32)
#define HIBYTE(x) (((x) >> 56) & 0xFF)
#define JUMPOUT(x) return

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/7/7_clang_O1_no_g
 * Processor: pc
 */




/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: param_fake_branch @ 0x11A0 */
long long param_fake_branch(unsigned int a1)
{
 return a1;
}


/* Function: call_fake_branch @ 0x11B0 */
long long call_fake_branch()
{
 return 10;
}


/* Function: param_opaque_predicate @ 0x11C0 */
long long param_opaque_predicate(int a1)
{
 int v1; // r8d
 int v2; // ecx
 int v3; // eax
 int v4; // edx
 int v5; // esi
 unsigned int v6; // r8d
 long long result; // rax

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
 v5 = (a1 * a1 + (v1 | 1)) ^ ((a1 + 1) * (a1 + 1));
 v6 = v1 + 10;
 result = (unsigned int)(3 * a1 + 20);
 if ( !(v5 | v2 ^ 1) )
 return v6;
 return result;
}


/* Function: call_opaque_predicate @ 0x1210 */
long long call_opaque_predicate()
{
 int v0; // edx
 int v1; // eax
 int v2; // ecx
 long long result; // rax

 v0 = 6;
 v1 = 5;
 do
 {
 v2 = v0;
 v0 = v1 % v0;
 v1 = v2;
 }
 while ( v0 );
 result = 35;
 if ( v2 == 1 )
 return 20;
 return result;
}


/* Function: param_instruction_substitution @ 0x1240 */
long long param_instruction_substitution(unsigned int a1)
{
 return (a1 & 0xF) + (a1 >> 1) + 21 * a1;
}


/* Function: call_instruction_substitution @ 0x1260 */
long long call_instruction_substitution()
{
 return 225;
}


/* Function: decrypt_string @ 0x1270 */
char * decrypt_string(char *src, char *dest, size_t a3, char a4)
{
 char v6; // al
 char *v7; // rcx

 strncpy(dest, src, a3);
 dest[a3 - 1] = 0;
 v6 = *dest;
 if ( *dest )
 {
 v7 = dest + 1;
 do
 {
 *(v7 - 1) = a4 ^ v6;
 v6 = *v7++;
 }
 while ( v6 );
 }
 return dest;
}


/* Function: param_string_encryption @ 0x12C0 */
long long param_string_encryption()
{
 char v0; // al
 char *v1; // rcx
 int v2; // eax
 char v4; // [rsp+0h] [rbp-28h] BYREF
 unsigned char v5[39]; // [rsp+1h] [rbp-27h] BYREF

 strncpy(&v4, &param_string_encryption_encrypted, 0x20u);
 v5[30] = 0;
 v0 = v4;
 if ( v4 )
 {
 v1 = v5;
 do
 {
 *(v1 - 1) = v0 ^ 0x5A;
 v0 = *v1++;
 }
 while ( v0 );
 }
 v2 = strlen(&v4);
 return (unsigned int)(v4 + v2);
}


/* Function: call_string_encryption @ 0x1320 */
long long call_string_encryption()
{
 char v0; // al
 char *v1; // rcx
 int v2; // eax
 char v4; // [rsp+0h] [rbp-28h] BYREF
 unsigned char v5[39]; // [rsp+1h] [rbp-27h] BYREF

 strncpy(&v4, &param_string_encryption_encrypted, 0x20u);
 v5[30] = 0;
 v0 = v4;
 if ( v4 )
 {
 v1 = v5;
 do
 {
 *(v1 - 1) = v0 ^ 0x5A;
 v0 = *v1++;
 }
 while ( v0 );
 }
 v2 = strlen(&v4);
 return (unsigned int)(v4 + v2);
}


/* Function: param_tail_call_optimized @ 0x1380 */
long long param_tail_call_optimized(int a1, unsigned int a2)
{
 long long result; // rax

 result = a2;
 if ( a1 > 0 )
 return param_tail_call_optimized((unsigned int)(a1 - 1), a1 + a2);
 return result;
}


/* Function: call_tail_call_optimized @ 0x13A0 */
long long call_tail_call_optimized()
{
 return param_tail_call_optimized(1000, 0);
}


/* Function: param_non_tail_call @ 0x13B0 */
long long param_non_tail_call(int a1)
{
 if ( a1 <= 0 )
 return 0;
 else
 return a1 + (unsigned int)param_non_tail_call((unsigned int)(a1 - 1));
}


/* Function: call_non_tail_call @ 0x13D0 */
long long call_non_tail_call()
{
 return param_non_tail_call(100);
}


/* Function: param_vectorized_loop @ 0x13E0 */
long long param_vectorized_loop(long long a1, long long a2, long long a3, int a4)
{
 long long v4; // r8
 long long i; // r9
 long long v6; // rcx
 long long result; // rax

 v4 = (unsigned int)a4;
 if ( a4 > 0 )
 {
 for ( i = 0; i != a4; ++i )
 *(unsigned int *)(a3 + 4 * i) = *(unsigned int *)(a1 + 4 * i) + *(unsigned int *)(a2 + 4 * i);
 }
 if ( a4 <= 0 )
 return 0;
 v6 = 0;
 result = 0;
 do
 result = (unsigned int)(*(unsigned int *)(a3 + 4 * v6++) + result);
 while ( v4 != v6 );
 return result;
}


/* Function: call_vectorized_loop @ 0x1420 */
long long call_vectorized_loop()
{
 long long i; // rax
 long long v1; // rcx
 long long result; // rax
 unsigned long long v3[2]; // [rsp+0h] [rbp-28h] BYREF

 memset(v3, 0, sizeof(v3));
 for ( i = 0; i != 32; i += 4 )
 *(unsigned int *)((char *)v3 + i) = *(unsigned int *)((char *)&unk_2010 + i) + *(unsigned int *)((char *)&unk_2030 + i);
 v1 = 0;
 result = 0;
 do
 result = (unsigned int)(*((unsigned int *)v3 + v1++) + result);
 while ( v1 != 8 );
 return result;
}


/* Function: param_link_time_optimization @ 0x1470 */
long long param_link_time_optimization(int a1)
{
 return (unsigned int)(2 * a1 + 10);
}


/* Function: call_link_time_optimization @ 0x1480 */
long long call_link_time_optimization()
{
 return 20;
}


/* Function: div_zero_handler @ 0x1490 */
void div_zero_handler()
{
 div_zero_caught = 1;
 longjmp(jmp_buffer, 1);
}


/* Function: param_division_by_zero @ 0x14B0 */
long long param_division_by_zero(int a1)
{
 int v1; // eax
 unsigned int v2; // ecx

 signal(8, (__sighandler_t)div_zero_handler);
 v1 = _setjmp(jmp_buffer);
 v2 = -1;
 if ( !v1 )
 return (unsigned int)(10 / a1);
 return v2;
}


/* Function: call_division_by_zero @ 0x14F0 */
long long call_division_by_zero()
{
 int v0; // ebx
 int v1; // ebp

 v0 = param_division_by_zero(5);
 v1 = param_division_by_zero(0);
 signal(8, 0);
 return (unsigned int)(v0 + v1);
}


/* Function: segv_handler @ 0x1520 */
void segv_handler()
{
 segv_caught = 1;
 longjmp(segv_buffer, 1);
}


/* Function: param_null_pointer_deref @ 0x1540 */
long long param_null_pointer_deref(unsigned int *a1)
{
 int v1; // eax
 unsigned int v2; // ecx

 signal(11, (__sighandler_t)segv_handler);
 v1 = _setjmp(segv_buffer);
 v2 = -1;
 if ( !v1 )
 return *a1;
 return v2;
}


/* Function: call_null_pointer_deref @ 0x1570 */
long long call_null_pointer_deref()
{
 int v0; // ebx
 int v1; // ebp
 unsigned int v3[5]; // [rsp+0h] [rbp-14h] BYREF

 v3[0] = 42;
 v0 = param_null_pointer_deref(v3);
 v1 = param_null_pointer_deref(0);
 signal(11, 0);
 return (unsigned int)(v0 + v1);
}


/* Function: param_buffer_overflow_stack @ 0x15B0 */
long long param_buffer_overflow_stack(unsigned int a1)
{
 return a1;
}


/* Function: param_buffer_overflow_heap @ 0x15C0 */
long long param_buffer_overflow_heap(unsigned int a1)
{
 return a1;
}


/* Function: call_buffer_overflow @ 0x15D0 */
long long call_buffer_overflow()
{
 return 30;
}


/* Function: param_integer_overflow @ 0x15E0 */
long long param_integer_overflow(int a1, int a2)
{
 int v2; // ecx
 long long result; // rax

 v2 = a2 + a1;
 if ( a1 <= 0 || a2 <= 0 || (result = 0xFFFFFFFFLL, v2 >= 0) )
 {
 result = 4294967294LL;
 if ( v2 <= 0 )
 result = (unsigned int)v2;
 if ( (a1 & a2) >= 0 )
 return (unsigned int)v2;
 }
 return result;
}


/* Function: call_integer_overflow @ 0x1610 */
long long call_integer_overflow()
{
 return 2000000000;
}


/* Function: param_undefined_behavior @ 0x1620 */
long long param_undefined_behavior(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: call_undefined_behavior @ 0x1630 */
long long call_undefined_behavior()
{
 return 10;
}


/* Function: param_implementation_defined @ 0x1640 */
long long param_implementation_defined()
{
 return 47;
}


/* Function: call_implementation_defined @ 0x1650 */
long long call_implementation_defined()
{
 return 47;
}


/* Function: test_obf_opt_edge @ 0x1660 */
int test_obf_opt_edge()
{
 int v0; // edx
 int v1; // eax
 int v2; // ecx
 long long v3; // rsi
 char v4; // al
 char *v5; // rcx
 int v6; // eax
 long long v7; // rbx
 unsigned int v8; // eax
 unsigned int v9; // eax
 long long v10; // r8
 long long v11; // r9
 long long v12; // rdx
 long long v13; // rax
 long long v14; // rsi
 int v15; // ebx
 int v16; // ebp
 int v17; // ebx
 int v18; // ebp
 __int128 v20; // [rsp+0h] [rbp-38h] BYREF
 __int128 v21; // [rsp+10h] [rbp-28h]

 puts(s);
 printf(format, 10);
 v0 = 6;
 v1 = 5;
 do
 {
 v2 = v0;
 v0 = v1 % v0;
 v1 = v2;
 }
 while ( v0 );
 v3 = 35;
 if ( v2 == 1 )
 v3 = 20;
 printf(aObfL403D, v3);
 printf(aObfL404D, 225);
 strncpy((char *)&v20, &param_string_encryption_encrypted, 0x20u);
 v21 = 0;
 v4 = v20;
 if ( (unsigned char)v20 )
 {
 v5 = (char *)&v20 + 1;
 do
 {
 *(v5 - 1) = v4 ^ 0x5A;
 v4 = *v5++;
 }
 while ( v4 );
 }
 v6 = strlen((const char *)&v20);
 v7 = 0;
 printf(aObfL405D, (unsigned int)(v6 + (char)v20));
 v8 = param_tail_call_optimized(1000, 0);
 printf(aOptL401, v8);
 v9 = param_non_tail_call(100);
 printf(aOptL401_0, v9);
 v21 = 0;
 v20 = 0;
 do
 {
 v12 = (unsigned int)(*(unsigned int *)((char *)&unk_2010 + v7) + *(unsigned int *)((char *)&unk_2030 + v7));
 *(unsigned int *)((char *)&v20 + v7) = v12;
 v7 += 4;
 }
 while ( v7 != 32 );
 v13 = 0;
 v14 = 0;
 do
 v14 = (unsigned int)(*((unsigned int *)&v20 + v13++) + v14);
 while ( v13 != 8 );
 printf(aOptL402, v14, v12, &unk_2030, v10, v11, v20, v21);
 printf(aOptL501LtoD, 20);
 v15 = param_division_by_zero(5);
 v16 = param_division_by_zero(0);
 signal(8, 0);
 printf(aEdgeL301D, (unsigned int)(v15 + v16));
 v20 = 42;
 v17 = param_null_pointer_deref((unsigned int *)&v20);
 v18 = param_null_pointer_deref(0);
 signal(11, 0);
 printf(aEdgeL302D, (unsigned int)(v17 + v18));
 printf(aEdgeL303D, 30);
 printf(aEdgeL304D, 2000000000);
 printf(aEdgeL401D, 10);
 v20 = 42;
 return printf(aEdgeL402D, 47);
}


/* Function: main @ 0x1890 */
int main(int argc, const char **argv, const char **envp)
{
 test_obf_opt_edge();
 return 0;
}


/* Function: .term_proc @ 0x189C */
void term_proc()
{
 ;
}


/* FAILED to decompile: __libc_start_main @ 0x4230 */

/* FAILED to decompile: strncpy @ 0x4238 */

/* FAILED to decompile: puts @ 0x4240 */

/* FAILED to decompile: strlen @ 0x4248 */

/* FAILED to decompile: printf @ 0x4250 */

/* FAILED to decompile: _setjmp @ 0x4258 */

/* FAILED to decompile: signal @ 0x4260 */

/* FAILED to decompile: longjmp @ 0x4268 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x4270 */

/* FAILED to decompile: __gmon_start__ @ 0x4280 */

/* Total functions decompiled: 42, failed: 10 */
