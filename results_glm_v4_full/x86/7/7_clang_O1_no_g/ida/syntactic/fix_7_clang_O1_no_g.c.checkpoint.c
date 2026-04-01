/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
/* size_t and ssize_t defined by system headers */
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Standard library includes */
#include <stdio.h>
#include <string.h>
#include <setjmp.h>
#include <signal.h>
#include <stdbool.h>

/* External declarations for compiler-generated symbols */
extern void _gmon_start__(void);

/* CRT function declarations */
void frame_dummy(void);
int _do_global_ctors_aux(void);
void _do_global_dtors_aux(void);

/* Global variables for exception handling */
jmp_buf jmp_buffer;
jmp_buf segv_buffer;
int div_zero_caught;
int segv_caught;

/* Data arrays */
static unsigned int unk_2028[8] = {1, 2, 3, 4, 5, 6, 7, 8};
static unsigned int unk_2008[8] = {1, 1, 1, 1, 1, 1, 1, 1};
static const char param_string_encryption_encrypted[] = "EncryptedString\0";

/* String constants for printf/puts */
static const char asc_2219[] = "=== Test Obfuscation, Optimization, and Edge Cases ===\n";
static const char aObfL402D[] = "Opaque Predicate: %d\n";
static const char aObfL403D[] = "Opaque Predicate Result: %d\n";
static const char aObfL404D[] = "Instruction Substitution: %d\n";
static const char aObfL405D[] = "String Encryption: %s\n";
static const char aOptL401[] = "Tail Call Optimization: %d\n";
static const char aOptL401_0[] = "Non-Tail Call: %d\n";
static const char aOptL402[] = "Vectorized Loop Sum: %d\n";
static const char aOptL501LtoD[] = "Link Time Optimization: %d\n";
static const char aEdgeL301D[] = "Division by Zero: %d\n";
static const char aEdgeL302D[] = "Null Pointer Dereference: %d\n";
static const char aEdgeL303D[] = "Buffer Overflow: %d\n";
static const char aEdgeL304D[] = "Integer Overflow: %d\n";
static const char aEdgeL401D[] = "Undefined Behavior: %d\n";
static const char aEdgeL402D[] = "Implementation Defined: %d\n";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/7/7_clang_O1_no_g
 * Processor: pc
 */




/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile ("jmp *8(%%ebx)" :::);
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

/* Function: __do_global_dtors_aux @ implementation */
void _do_global_dtors_aux(void)
{
}


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


/* Function: param_fake_branch @ 0x1250 */
int param_fake_branch(int a1)
{
 return a1;
}


/* Function: call_fake_branch @ 0x1260 */
int call_fake_branch()
{
 return 10;
}


/* Function: param_opaque_predicate @ 0x1270 */
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
 v5 = a1 * a1 + (v1 | 1);
 v6 = v1 + 10;
 result = 3 * a1 + 20;
 if ( !(v5 ^ ((a1 + 1) * (a1 + 1)) | v2 ^ 1) )
 return v6;
 return result;
}


/* Function: call_opaque_predicate @ 0x12D0 */
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


/* Function: param_instruction_substitution @ 0x1300 */
int param_instruction_substitution(unsigned int a1)
{
 return (a1 >> 1) + (a1 & 0xF) + 21 * a1;
}


/* Function: call_instruction_substitution @ 0x1320 */
int call_instruction_substitution()
{
 return 225;
}


/* Function: decrypt_string @ 0x1330 */
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


/* Function: param_string_encryption @ 0x1390 */
size_t param_string_encryption()
{
 char v0; // al
 char *v1; // ecx
 size_t v2; // eax
 char dest; // [esp+4h] [ebp-28h] BYREF
 unsigned char v5[39]; // [esp+5h] [ebp-27h] BYREF

 strncpy(&dest, param_string_encryption_encrypted, 0x20u);
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
 }
 v2 = strlen(&dest);
 return dest + v2;
}


/* Function: call_string_encryption @ 0x1400 */
size_t call_string_encryption()
{
 char v0; // al
 char *v1; // ecx
 size_t v2; // eax
 char dest; // [esp+4h] [ebp-28h] BYREF
 unsigned char v5[39]; // [esp+5h] [ebp-27h] BYREF

 strncpy(&dest, param_string_encryption_encrypted, 0x20u);
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
 }
 v2 = strlen(&dest);
 return dest + v2;
}


/* Function: param_tail_call_optimized @ 0x1470 */
int param_tail_call_optimized(int a1, int a2)
{
 int result; // eax

 result = a2;
 if ( a1 > 0 )
 return param_tail_call_optimized(a1 - 1, a1 + a2);
 return result;
}


/* Function: call_tail_call_optimized @ 0x14B0 */
int call_tail_call_optimized()
{
 return param_tail_call_optimized(1000, 0);
}


/* Function: param_non_tail_call @ 0x14E0 */
int param_non_tail_call(int a1)
{
 if ( a1 <= 0 )
 return 0;
 else
 return a1 + param_non_tail_call(a1 - 1);
}


/* Function: call_non_tail_call @ 0x1510 */
int call_non_tail_call()
{
 return param_non_tail_call(100);
}


/* Function: param_vectorized_loop @ 0x1540 */
int param_vectorized_loop(int a1, int a2, int a3, int a4)
{
 int i; // edi
 int v5; // esi
 int result; // eax

 if ( a4 > 0 )
 {
 for ( i = 0; i != a4; ++i )
 *(unsigned int *)(a3 + 4 * i) = *(unsigned int *)(a1 + 4 * i) + *(unsigned int *)(a2 + 4 * i);
 }
 if ( a4 <= 0 )
 return 0;
 v5 = 0;
 result = 0;
 do
 result += *(unsigned int *)(a3 + 4 * v5++);
 while ( a4 != v5 );
 return result;
}


/* Function: call_vectorized_loop @ 0x15A0 */
int call_vectorized_loop()
{
 int v0; // eax
 unsigned int *v1; // ecx
 unsigned int *v2; // edx
 int v3; // ecx
 int result; // eax
 unsigned int v5[9]; // [esp+0h] [ebp-24h] BYREF

 memset(v5, 0, 32);
 v0 = 0;
 v1 = &unk_2028;
 v2 = &unk_2008;
 do
 v5[v0++] = *v2++ + *v1++;
 while ( v0 != 8 );
 v3 = 0;
 result = 0;
 do
 result += v5[v3++];
 while ( v3 != 8 );
 return result;
}


/* Function: param_link_time_optimization @ 0x1630 */
int param_link_time_optimization(int a1)
{
 return 2 * a1 + 10;
}


/* Function: call_link_time_optimization @ 0x1640 */
int call_link_time_optimization()
{
 return 20;
}


/* Function: div_zero_handler @ 0x1650 */
void div_zero_handler()
{
 div_zero_caught = 1;
 longjmp(&jmp_buffer, 1);
}


/* Function: param_division_by_zero @ 0x1680 */
int param_division_by_zero(int a1)
{
 int v1; // eax
 int v2; // ecx

 signal(8, (__sighandler_t)div_zero_handler);
 v1 = _setjmp(&jmp_buffer);
 v2 = -1;
 if ( !v1 )
 return 10 / a1;
 return v2;
}


/* Function: call_division_by_zero @ 0x16E0 */
int call_division_by_zero()
{
 int v0; // esi
 int v1; // edi

 v0 = param_division_by_zero(5);
 v1 = param_division_by_zero(0);
 signal(8, 0);
 return v0 + v1;
}


/* Function: segv_handler @ 0x1730 */
void segv_handler()
{
 segv_caught = 1;
 longjmp(&segv_buffer, 1);
}


/* Function: param_null_pointer_deref @ 0x1760 */
int param_null_pointer_deref(int a1)
{
 int v1; // eax
 int v2; // ecx

 signal(11, (__sighandler_t)segv_handler);
 v1 = _setjmp(&segv_buffer);
 v2 = -1;
 if ( !v1 )
 return *(unsigned int *)a1;
 return v2;
}


/* Function: call_null_pointer_deref @ 0x17B0 */
int call_null_pointer_deref()
{
 int v0; // esi
 int v1; // edi
 int v3[4]; // [esp+Ch] [ebp-10h] BYREF

 v3[0] = 42;
 v0 = param_null_pointer_deref((int)v3);
 v1 = param_null_pointer_deref(0);
 signal(11, 0);
 return v0 + v1;
}


/* Function: param_buffer_overflow_stack @ 0x1810 */
int param_buffer_overflow_stack(int a1)
{
 return a1;
}


/* Function: param_buffer_overflow_heap @ 0x1820 */
int param_buffer_overflow_heap(int a1)
{
 return a1;
}


/* Function: call_buffer_overflow @ 0x1830 */
int call_buffer_overflow()
{
 return 30;
}


/* Function: param_integer_overflow @ 0x1840 */
int param_integer_overflow(int a1, int a2)
{
 int v2; // ecx
 int result; // eax

 v2 = a2 + a1;
 if ( a1 <= 0 || a2 <= 0 || (result = -1, v2 >= 0) )
 {
 result = -2;
 if ( v2 <= 0 )
 result = a2 + a1;
 if ( (a1 & a2) >= 0 )
 return a2 + a1;
 }
 return result;
}


/* Function: call_integer_overflow @ 0x1870 */
int call_integer_overflow()
{
 return 2000000000;
}


/* Function: param_undefined_behavior @ 0x1880 */
int param_undefined_behavior(int a1)
{
 return 2 * a1;
}


/* Function: call_undefined_behavior @ 0x1890 */
int call_undefined_behavior()
{
 return 10;
}


/* Function: param_implementation_defined @ 0x18A0 */
int param_implementation_defined()
{
 return 43;
}


/* Function: call_implementation_defined @ 0x18B0 */
int call_implementation_defined()
{
 return 43;
}


/* Function: test_obf_opt_edge @ 0x18C0 */
int test_obf_opt_edge()
{
 int v0; // edx
 int v1; // eax
 int v2; // ecx
 bool v3; // zf
 int v4; // ecx
 char v5; // al
 char *v6; // ecx
 size_t v7; // eax
 int v8; // eax
 int v9; // eax
 int v10; // eax
 unsigned int *v11; // ecx
 unsigned int *v12; // edx
 int v13; // ecx
 int v14; // eax
 int v15; // esi
 int v16; // edi
 int v17; // esi
 int v18; // edi
 char dest[4]; // [esp+Ch] [ebp-30h] BYREF
 int v21; // [esp+10h] [ebp-2Ch]
 int v22; // [esp+14h] [ebp-28h]
 int v23; // [esp+18h] [ebp-24h]
 int v24; // [esp+1Ch] [ebp-20h]
 int v25; // [esp+20h] [ebp-1Ch]
 int v26; // [esp+24h] [ebp-18h]
 int v27; // [esp+28h] [ebp-14h]

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
 strncpy(dest, param_string_encryption_encrypted, 0x20u);
 v27 = 0;
 v5 = dest[0];
 if ( dest[0] )
 {
 v6 = &dest[1];
 do
 {
 *(v6 - 1) = v5 ^ 0x5A;
 v5 = *v6++;
 }
 while ( v5 );
 }
 v7 = strlen(dest);
 printf(aObfL405D, v7 + dest[0]);
 v8 = param_tail_call_optimized(1000, 0);
 printf(aOptL401, v8);
 v9 = param_non_tail_call(100);
 printf(aOptL401_0, v9);
 v27 = 0;
 v26 = 0;
 v25 = 0;
 v24 = 0;
 v23 = 0;
 v22 = 0;
 v21 = 0;
 *(unsigned int *)dest = 0;
 v10 = 0;
 v11 = &unk_2028;
 v12 = &unk_2008;
 do
 *(unsigned int *)&dest[4 * v10++] = *v12++ + *v11++;
 while ( v10 != 8 );
 v13 = 0;
 v14 = 0;
 do
 v14 += *(unsigned int *)&dest[4 * v13++];
 while ( v13 != 8 );
 printf(aOptL402, v14);
 printf(aOptL501LtoD, 20);
 v15 = param_division_by_zero(5);
 v16 = param_division_by_zero(0);
 signal(8, 0);
 printf(aEdgeL301D, v15 + v16);
 *(unsigned int *)dest = 42;
 v17 = param_null_pointer_deref((int)dest);
 v18 = param_null_pointer_deref(0);
 signal(11, 0);
 printf(aEdgeL302D, v17 + v18);
 printf(aEdgeL303D, 30);
 printf(aEdgeL304D, 2000000000);
 printf(aEdgeL401D, 10);
 return printf(aEdgeL402D, 43);
}


/* Function: main @ 0x1BA0 */
int main(int argc, const char **argv, const char **envp)
{
 test_obf_opt_edge();
 return 0;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x1C0C */
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
