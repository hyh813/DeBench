/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
#ifndef size_t

typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
#endif

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/7/7_clang_Os_no_g
 * Processor: pc
 */

#include <stdio.h>
#include <string.h>
#include <signal.h>
#include <setjmp.h>
#include <stdbool.h>

/* Global variable declarations */
int div_zero_caught;
int segv_caught;
jmp_buf jmp_buffer;
jmp_buf segv_buffer;

/* Global data arrays */
/* CRT stubs removed */
extern const char param_string_encryption_encrypted[];

/* String constants */
static const char asc_2219[] = "Testing obfuscation and optimization options:\n";
static const char aObfL402D[] = "Fake branch: %d\n";
static const char aObfL403D[] = "Opaque predicate: %d\n";
static const char aObfL404D[] = "Instruction substitution: %d\n";
static const char aObfL405D[] = "String encryption: %zu\n";
static const char aOptL401[] = "Tail call optimized: %d\n";
static const char aOptL401_0[] = "Non-tail call optimized: %d\n";
static const char aOptL402[] = "Vectorized loop: %d\n";
static const char aOptL501LtoD[] = "Link time optimization: %d\n";
static const char aEdgeL301D[] = "Division by zero: %d\n";
static const char aEdgeL302D[] = "Null pointer dereference: %d\n";
static const char aEdgeL303D[] = "Buffer overflow: %d\n";
static const char aEdgeL304D[] = "Integer overflow: %d\n";
static const char aEdgeL401D[] = "Undefined behavior: %d\n";
static const char aEdgeL402D[] = "Implementation defined: %d\n";

/* CRT function stubs */
/* void frame_dummy(void); - CRT stub removed */
int _do_global_ctors_aux(void) { return 0; }
void _do_global_dtors_aux(void) {}

/* Function: .init_proc @ 0x1000 */
int init_proc()
{
 /* frame_dummy(); - CRT stub removed */
 return _do_global_ctors_aux();
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile("jmp *8(%%ebx)" :::);
}


/* Function: sub_10C0 @ 0x10C0 */
int sub_10C0(int a1)
{
 return (*(int (**)(void))(a1 - 16))();
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_10FC @ 0x10FC */
void sub_10FC()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1100 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1239 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x123D */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: param_fake_branch @ 0x1244 */
int param_fake_branch(int a1)
{
 return a1;
}


/* Function: call_fake_branch @ 0x1249 */
int call_fake_branch()
{
 return 10;
}


/* Function: param_opaque_predicate @ 0x124F */
int param_opaque_predicate(int a1)
{
 int v1; // ecx
 int v2; // ebx
 int v3; // eax
 int v4; // edx
 int v5; // edx
 int v6; // ecx
 int result; // eax

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
 v5 = a1 * a1 + (v1 | 1);
 v6 = v1 + 10;
 result = 3 * a1 + 20;
 if ( !(v5 ^ ((a1 + 1) * (a1 + 1)) | v2 ^ 1) )
 return v6;
 return result;
}


/* Function: call_opaque_predicate @ 0x1298 */
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


/* Function: param_instruction_substitution @ 0x12BE */
int param_instruction_substitution(unsigned int a1)
{
 return (a1 >> 1) + (a1 & 0xF) + 21 * a1;
}


/* Function: call_instruction_substitution @ 0x12D4 */
int call_instruction_substitution()
{
 return 225;
}


/* Function: decrypt_string @ 0x12DA */
char * decrypt_string(char *src, char *dest, size_t n, char a4)
{
 char v4; // al
 char *v5; // edx

 strncpy(dest, src, n);
 dest[n - 1] = 0;
 v4 = *dest;
 if ( *dest )
 {
 v5 = dest + 1;
 do
 {
 *(v5 - 1) = a4 ^ v4;
 v4 = *v5++;
 }
 while ( v4 );
 }
 return dest;
}


/* Function: param_string_encryption @ 0x1326 */
size_t param_string_encryption()
{
 char v0; // al
 char *v1; // ecx
 int v2; // edi
 char dest; // [esp+0h] [ebp-2Ch] BYREF
 unsigned char v5[43]; // [esp+1h] [ebp-2Bh] BYREF
 static const char encrypted[] = "\x3A\x1B\x5C\x5D\x0D\x5E\x0F\x1E\x5B\x1A\x5C\x58\x0E\x1F\x5E\x0D\x1A\x5C\x5E\x0F\x5B\x1D\x5C\x59\x0E\x1E\x5D\x1C\x5B\x59\x1D\x5E";

 strncpy(&dest, encrypted, 0x20u);
 v5[30] = 0;
 v0 = dest;
 if ( dest )
 {
 v1 = v5;
 do
 {
 *(v1 - 1) = v0 ^ 0x5A;
 v0 = *v1++;
 }
 while ( v0 );
 v2 = dest;
 }
 else
 {
 v2 = 0;
 }
 return v2 + strlen(&dest);
}


/* Function: call_string_encryption @ 0x1388 */
size_t call_string_encryption()
{
 return param_string_encryption();
}


/* Function: param_tail_call_optimized @ 0x13A2 */
int param_tail_call_optimized(int a1, int a2)
{
 int v2; // ecx

 v2 = a2;
 if ( a1 > 0 )
 return (a1 - 1) * (a1 - 1) + a1 + a2 - (((unsigned int)(a1 - 2) * (unsigned long long)(unsigned int)(a1 - 1)) >> 1);
 return v2;
}


/* Function: call_tail_call_optimized @ 0x13CC */
int call_tail_call_optimized()
{
 return 500500;
}


/* Function: param_non_tail_call @ 0x13D2 */
int param_non_tail_call(int a1)
{
 if ( a1 <= 0 )
 return 0;
 else
 return a1 + (a1 - 1) * (a1 - 1) - (((unsigned int)(a1 - 2) * (unsigned long long)(unsigned int)(a1 - 1)) >> 1);
}


/* Function: call_non_tail_call @ 0x13F8 */
int call_non_tail_call()
{
 return 5050;
}


/* Function: param_vectorized_loop @ 0x13FE */
int param_vectorized_loop(int a1, int a2, int a3, int a4)
{
 int i; // edi
 int v5; // esi
 int result; // eax

 if ( a4 <= 0 )
 return 0;
 for ( i = 0; i != a4; ++i )
 *(unsigned int *)(a3 + 4 * i) = *(unsigned int *)(a1 + 4 * i) + *(unsigned int *)(a2 + 4 * i);
 v5 = 0;
 result = 0;
 do
 result += *(unsigned int *)(a3 + 4 * v5++);
 while ( a4 != v5 );
 return result;
}


/* Function: call_vectorized_loop @ 0x143D */
int call_vectorized_loop()
{
 int v0; // eax
 unsigned int v5[9]; // [esp+0h] [ebp-24h] BYREF
 int v3; // ecx
 int result; // eax
 unsigned int data1[] = {1, 2, 3, 4, 5, 6, 7, 8};
 unsigned int data2[] = {10, 20, 30, 40, 50, 60, 70, 80};

 v0 = 0;
 memset(v5, 0, 32);
 do
 v5[v0++] = data2[v0] + data1[v0];
 while ( v0 != 8 );
 v3 = 0;
 result = 0;
 do
 result += v5[v3++];
 while ( v3 != 8 );
 return result;
}


/* Function: param_link_time_optimization @ 0x149F */
int param_link_time_optimization(int a1)
{
 return 2 * a1 + 10;
}


/* Function: call_link_time_optimization @ 0x14A9 */
int call_link_time_optimization()
{
 return 20;
}


/* Function: div_zero_handler @ 0x14AF */
void div_zero_handler()
{
 div_zero_caught = 1;
 longjmp(&jmp_buffer, 1);
}


/* Function: param_division_by_zero @ 0x14D8 */
int param_division_by_zero(int a1)
{
 signal(8, (__sighandler_t)div_zero_handler);
 if ( _setjmp(&jmp_buffer) )
 return -1;
 else
 return 10 / a1;
}


/* Function: call_division_by_zero @ 0x1526 */
int call_division_by_zero()
{
 int v0; // esi
 int v1; // edi

 v0 = param_division_by_zero(5);
 v1 = param_division_by_zero(0);
 signal(8, 0);
 return v0 + v1;
}


/* Function: segv_handler @ 0x156F */
void segv_handler()
{
 segv_caught = 1;
 longjmp(&segv_buffer, 1);
}


/* Function: param_null_pointer_deref @ 0x1598 */
int param_null_pointer_deref(int a1)
{
 signal(11, (__sighandler_t)segv_handler);
 if ( _setjmp(&segv_buffer) )
 return -1;
 else
 return *(unsigned int *)a1;
}


/* Function: call_null_pointer_deref @ 0x15E1 */
int call_null_pointer_deref()
{
 int v0; // esi
 int v1; // edi
 int v3[5]; // [esp+8h] [ebp-14h] BYREF

 v3[0] = 42;
 v0 = param_null_pointer_deref((int)v3);
 v1 = param_null_pointer_deref(0);
 signal(11, 0);
 return v0 + v1;
}


/* Function: param_buffer_overflow_stack @ 0x1630 */
int param_buffer_overflow_stack(int a1)
{
 return a1;
}


/* Function: param_buffer_overflow_heap @ 0x1635 */
int param_buffer_overflow_heap(int a1)
{
 return a1;
}


/* Function: call_buffer_overflow @ 0x163A */
int call_buffer_overflow()
{
 return 30;
}


/* Function: param_integer_overflow @ 0x1640 */
int param_integer_overflow(int a1, int a2)
{
 int v2; // ecx
 int result; // eax

 v2 = a2 + a1;
 if ( a1 > 0 && a2 > 0 && v2 < 0 )
 return -1;
 result = -2;
 if ( v2 <= 0 )
 result = a2 + a1;
 if ( (a1 & a2) >= 0 )
 return a2 + a1;
 return result;
}


/* Function: call_integer_overflow @ 0x166E */
int call_integer_overflow()
{
 return 2000000000;
}


/* Function: param_undefined_behavior @ 0x1674 */
int param_undefined_behavior(int a1)
{
 return 2 * a1;
}


/* Function: call_undefined_behavior @ 0x167B */
int call_undefined_behavior()
{
 return 10;
}


/* Function: param_implementation_defined @ 0x1681 */
int param_implementation_defined()
{
 return 43;
}


/* Function: call_implementation_defined @ 0x1687 */
int call_implementation_defined()
{
 return 43;
}


/* Function: test_obf_opt_edge @ 0x168D */
int test_obf_opt_edge()
{
 int v0; // edx
 int v1; // eax
 int v2; // ecx
 bool v3; // zf
 int v4; // ecx
 size_t v5; // eax
 int v6; // eax
 unsigned int *v7; // ecx
 unsigned int *v8; // edx
 int v9; // ecx
 int v10; // eax
 int v11; // eax
 int v12; // eax
 unsigned int v14[10]; // [esp+14h] [ebp-28h] BYREF

 puts(asc_2219);
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
 v3 = v2 == 1;
 v4 = 35;
 if ( v3 )
 v4 = 20;
 printf(aObfL403D, v4);
 printf(aObfL404D, 225);
 v5 = param_string_encryption();
 printf(aObfL405D, v5);
 printf(aOptL401, 500500);
 printf(aOptL401_0, 5050);
 v10 = call_vectorized_loop();
 printf(aOptL402, v10);
 printf(aOptL501LtoD, 20);
 v11 = call_division_by_zero();
 printf(aEdgeL301D, v11);
 v12 = call_null_pointer_deref();
 printf(aEdgeL302D, v12);
 printf(aEdgeL303D, 30);
 printf(aEdgeL304D, 2000000000);
 printf(aEdgeL401D, 10);
 return printf(aEdgeL402D, 43);
}


/* Function: main @ 0x1856 */
int main(int argc, const char **argv, const char **envp)
{
 test_obf_opt_edge();
 return 0;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x18CC */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: __libc_start_main @ 0x4188 */

/* FAILED to decompile: printf @ 0x418C */

/* FAILED to decompile: longjmp @ 0x4190 */

/* FAILED to decompile: _setjmp @ 0x4194 */

/* FAILED to decompile: signal @ 0x4198 */

/* FAILED to decompile: __cxa_finalize @ 0x419C */

/* FAILED to decompile: puts @ 0x41A0 */

/* FAILED to decompile: strlen @ 0x41A4 */

/* FAILED to decompile: strncpy @ 0x41A8 */

/* Total functions decompiled: 48, failed: 9 */
