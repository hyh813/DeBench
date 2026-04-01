/* Auto-injected type definitions by preprocessor */
#ifndef _STDINT_TYPES_H
#define _STDINT_TYPES_H
#include <stdint.h>
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
#endif

/* IDA Pro macros */
#define JUMPOUT(addr) ((void)0)
#define HIBYTE(x) (((unsigned char*)&(x))[sizeof(x)-1])
#define LODWORD(x) ((unsigned int)(x))

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <setjmp.h>

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/7/7_clang_O1_g
 * Processor: pc
 */

/* Global variables */
int div_zero_caught = 0;
int segv_caught = 0;
jmp_buf jmp_buffer;
jmp_buf segv_buffer;

/* Missing string constants */
const char *s = "";
const char *format = "";
const char aObfL403D[] = "Obf: L403D: %d\n";
const char aObfL404D[] = "Obf: L404D: %d\n";
const char aObfL405D[] = "Obf: L405D: %u\n";
const char aOptL401[] = "Opt: L401: %d\n";
const char aOptL401_0[] = "Opt: L401_0: %d\n";
const char aOptL402[] = "Opt: L402: %lld %d %p %lld %lld %d %d\n";
const char aOptL501LtoD[] = "Opt: L501 (LtoD): %d\n";
const char aEdgeL301D[] = "Edge: L301D: %u\n";
const char aEdgeL302D[] = "Edge: L302D: %u\n";
const char aEdgeL303D[] = "Edge: L303D: %d\n";
const char aEdgeL304D[] = "Edge: L304D: %d\n";
const char aEdgeL401D[] = "Edge: L401D: %d\n";
const char aEdgeL402D[] = "Edge: L402D: %d\n";

/* Data arrays */
unsigned int unk_2010[8] = {1, 2, 3, 4, 5, 6, 7, 8};
unsigned int unk_2030[8] = {10, 20, 30, 40, 50, 60, 70, 80};

/* Encrypted string for param_string_encryption */
const char param_string_encryption_encrypted[] = "Hello, World!";

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
int param_fake_branch(int x)
{
 return x;
}


/* Function: call_fake_branch @ 0x11B0 */
int call_fake_branch()
{
 return 10;
}


/* Function: param_opaque_predicate @ 0x11C0 */
int param_opaque_predicate(int x)
{
 int v1; // r8d
 int v2; // ecx
 int v3; // eax
 int v4; // edx
 int v5; // esi
 int v6; // r8d
 int result; // eax

 v1 = 2 * x;
 v2 = x;
 if ( x != -1 )
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
 v5 = (x * x + (v1 | 1)) ^ ((x + 1) * (x + 1));
 v6 = v1 + 10;
 result = 3 * x + 20;
 if ( !(v5 | v2 ^ 1) )
 return v6;
 return result;
}


/* Function: call_opaque_predicate @ 0x1210 */
int call_opaque_predicate()
{
 int v0; // edx
 int v1; // eax
 int v2; // ecx
 int result; // eax

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
int param_instruction_substitution(int x)
{
 return (x & 0xF) + ((unsigned int)x >> 1) + 21 * x;
}


/* Function: call_instruction_substitution @ 0x1260 */
int call_instruction_substitution()
{
 return 225;
}


/* Function: decrypt_string @ 0x1270 */
const char * decrypt_string(const char *encrypted, char *buffer, size_t len, char key)
{
 char v6; // al
 char *v7; // rcx

 strncpy(buffer, encrypted, len);
 buffer[len - 1] = 0;
 v6 = *buffer;
 if ( *buffer )
 {
 v7 = buffer + 1;
 do
 {
 *(v7 - 1) = key ^ v6;
 v6 = *v7++;
 }
 while ( v6 );
 }
 return buffer;
}


/* Function: param_string_encryption @ 0x12C0 */
int param_string_encryption()
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
 return v4 + v2;
}


/* Function: call_string_encryption @ 0x1320 */
int call_string_encryption()
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
 return v4 + v2;
}


/* Function: param_tail_call_optimized @ 0x1380 */
int param_tail_call_optimized(int n, int acc)
{
 int result; // eax

 result = acc;
 if ( n > 0 )
 return param_tail_call_optimized(n - 1, n + acc);
 return result;
}


/* Function: call_tail_call_optimized @ 0x13A0 */
int call_tail_call_optimized()
{
 return param_tail_call_optimized(1000, 0);
}


/* Function: param_non_tail_call @ 0x13B0 */
int param_non_tail_call(int n)
{
 if ( n <= 0 )
 return 0;
 else
 return n + param_non_tail_call(n - 1);
}


/* Function: call_non_tail_call @ 0x13D0 */
int call_non_tail_call()
{
 return param_non_tail_call(100);
}


/* Function: param_vectorized_loop @ 0x13E0 */
int param_vectorized_loop(int *a, int *b, int *c, int n)
{
 long long v4; // r8
 long long i; // r9
 long long v6; // rcx
 int result; // eax

 v4 = (unsigned int)n;
 if ( n > 0 )
 {
 for ( i = 0; i != n; ++i )
 c[i] = a[i] + b[i];
 }
 if ( n <= 0 )
 return 0;
 v6 = 0;
 result = 0;
 do
 result += c[v6++];
 while ( v4 != v6 );
 return result;
}


/* Function: call_vectorized_loop @ 0x1420 */
int call_vectorized_loop()
{
 long long i; // rax
 long long v1; // rcx
 int result; // eax
 unsigned int v3[10]; // [rsp+0h] [rbp-28h] BYREF

 memset(v3, 0, 32);
 for ( i = 0; i != 8; ++i )
 v3[i] = *(unsigned int *)((char *)&unk_2010 + i * 4) + *(unsigned int *)((char *)&unk_2030 + i * 4);
 v1 = 0;
 result = 0;
 do
 result += v3[v1++];
 while ( v1 != 8 );
 return result;
}


/* Function: param_link_time_optimization @ 0x1470 */
int param_link_time_optimization(int x)
{
 return 2 * x + 10;
}


/* Function: call_link_time_optimization @ 0x1480 */
int call_link_time_optimization()
{
 return 20;
}


/* Function: div_zero_handler @ 0x1490 */
void div_zero_handler(int sig)
{
 div_zero_caught = 1;
 longjmp(jmp_buffer, 1);
}


/* Function: param_division_by_zero @ 0x14B0 */
int param_division_by_zero(int x)
{
 int v1; // eax
 int v2; // ecx

 signal(8, (__sighandler_t)div_zero_handler);
 v1 = _setjmp(jmp_buffer);
 v2 = -1;
 if ( !v1 )
 return 10 / x;
 return v2;
}


/* Function: call_division_by_zero @ 0x14F0 */
int call_division_by_zero()
{
 int v0; // ebx
 int v1; // ebp

 v0 = param_division_by_zero(5);
 v1 = param_division_by_zero(0);
 signal(8, 0);
 return v0 + v1;
}


/* Function: segv_handler @ 0x1520 */
void segv_handler(int sig)
{
 segv_caught = 1;
 longjmp(segv_buffer, 1);
}


/* Function: param_null_pointer_deref @ 0x1540 */
int param_null_pointer_deref(int *p)
{
 int v1; // eax
 int v2; // ecx

 signal(11, (__sighandler_t)segv_handler);
 v1 = _setjmp(segv_buffer);
 v2 = -1;
 if ( !v1 )
 return *p;
 return v2;
}


/* Function: call_null_pointer_deref @ 0x1570 */
int call_null_pointer_deref()
{
 int v0; // ebx
 int v1; // ebp
 int p[5]; // [rsp+0h] [rbp-14h] BYREF

 p[0] = 42;
 v0 = param_null_pointer_deref(p);
 v1 = param_null_pointer_deref(0);
 signal(11, 0);
 return v0 + v1;
}


/* Function: param_buffer_overflow_stack @ 0x15B0 */
int param_buffer_overflow_stack(int x)
{
 return x;
}


/* Function: param_buffer_overflow_heap @ 0x15C0 */
int param_buffer_overflow_heap(int x)
{
 return x;
}


/* Function: call_buffer_overflow @ 0x15D0 */
int call_buffer_overflow()
{
 return 30;
}


/* Function: param_integer_overflow @ 0x15E0 */
int param_integer_overflow(int a, int b)
{
 int v2; // ecx
 int result; // eax

 v2 = b + a;
 if ( a <= 0 || b <= 0 || (result = -1, v2 >= 0) )
 {
 result = -2;
 if ( v2 <= 0 )
 result = b + a;
 if ( (a & b) >= 0 )
 return b + a;
 }
 return result;
}


/* Function: call_integer_overflow @ 0x1610 */
int call_integer_overflow()
{
 return 2000000000;
}


/* Function: param_undefined_behavior @ 0x1620 */
int param_undefined_behavior(int i)
{
 return 2 * i;
}


/* Function: call_undefined_behavior @ 0x1630 */
int call_undefined_behavior()
{
 return 10;
}


/* Function: param_implementation_defined @ 0x1640 */
int param_implementation_defined()
{
 return 47;
}


/* Function: call_implementation_defined @ 0x1650 */
int call_implementation_defined()
{
 return 47;
}


/* Function: test_obf_opt_edge @ 0x1660 */
void test_obf_opt_edge()
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
 char v19[32]; // [rsp+0h] [rbp-38h] BYREF
 char v20[16]; // [rsp+10h] [rbp-28h]

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
 strncpy((char *)&v19, &param_string_encryption_encrypted, 0x20u);
 *(unsigned char *)((char *)&v20 + sizeof(v20) - 1) = 0;
 v4 = v19[0];
 if ( (unsigned char)v19 )
 {
 v5 = (char *)&v19 + 1;
 do
 {
 *(v5 - 1) = v4 ^ 0x5A;
 v4 = *v5++;
 }
 while ( v4 );
 }
 v6 = strlen((const char *)&v19);
 v7 = 0;
 printf(aObfL405D, (unsigned int)(v6 + (char)v19));
 v8 = param_tail_call_optimized(1000, 0);
 printf(aOptL401, v8);
 v9 = param_non_tail_call(100);
 printf(aOptL401_0, v9);
 memset(v20, 0, sizeof(v20));
 memset(v19, 0, sizeof(v19));
 do
 {
 v12 = (unsigned int)(*(unsigned int *)((char *)&unk_2010 + v7) + *(unsigned int *)((char *)&unk_2030 + v7));
 ((unsigned int *)v19)[v7 / 4] = v12;
 v7 += 4;
 }
 while ( v7 != 32 );
 v13 = 0;
 v14 = 0;
 do
 v14 = (unsigned int)(*((unsigned int *)&v19 + v13++) + v14);
 while ( v13 != 8 );
 printf(aOptL402, v14, v12, &unk_2030, v10, v11, (int)(unsigned char)v19[0], (int)(unsigned char)v20[0]);
 printf(aOptL501LtoD, 20);
 v15 = param_division_by_zero(5);
 v16 = param_division_by_zero(0);
 signal(8, 0);
 printf(aEdgeL301D, (unsigned int)(v15 + v16));
 v19[0] = 42;
 v17 = param_null_pointer_deref((int *)v19);
 v18 = param_null_pointer_deref(0);
 signal(11, 0);
 printf(aEdgeL302D, (unsigned int)(v17 + v18));
 printf(aEdgeL303D, 30);
 printf(aEdgeL304D, 2000000000);
 printf(aEdgeL401D, 10);
 printf(aEdgeL402D, 47);
 (void)v19;
 (void)v20;
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
