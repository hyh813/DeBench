/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <string.h>
#include <signal.h>
#include <setjmp.h>
#include <stdbool.h>

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/7/7_clang_O2_no_g
 * Processor: pc
 */

extern void _gmon_start__(void);
extern void frame_dummy(void);
extern int _do_global_ctors_aux(void);
int _do_global_dtors_aux(void) { return 0; }



/* Global variables */
int div_zero_caught = 0;
jmp_buf jmp_buffer;
int segv_caught = 0;
jmp_buf segv_buffer;
char param_string_encryption_encrypted[] = "encrypted_string_data_here";
char asc_21D9[] = "Test Output";
char aObfL402D[] = "ObfL402D: %d\n";
char aObfL403D[] = "ObfL403D: %d\n";
char aObfL404D[] = "ObfL404D: %d\n";
char aObfL405D[] = "ObfL405D: %d\n";
char aOptL401[] = "OptL401: %d\n";
char aOptL401_0[] = "OptL401_0: %d\n";
char aOptL402[] = "OptL402: %d\n";
char aOptL501LtoD[] = "OptL501LtoD: %d\n";
char aEdgeL301D[] = "EdgeL301D: %d\n";
char aEdgeL302D[] = "EdgeL302D: %d\n";
char aEdgeL303D[] = "EdgeL303D: %d\n";
char aEdgeL304D[] = "EdgeL304D: %d\n";
char aEdgeL401D[] = "EdgeL401D: %d\n";
char aEdgeL402D[] = "EdgeL402D: %d\n";


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 ;
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
 v2 = -1;
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
 int v2; // edi
 char dest; // [esp+0h] [ebp-2Ch] BYREF
 unsigned char v5[43]; // [esp+1h] [ebp-2Bh] BYREF

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
 v2 = dest;
 }
 else
 {
 v2 = 0;
 }
 return v2 + strlen(&dest);
}


/* Function: call_string_encryption @ 0x1400 */
size_t call_string_encryption()
{
 char v0; // al
 char *v1; // ecx
 int v2; // edi
 char dest; // [esp+0h] [ebp-2Ch] BYREF
 unsigned char v5[43]; // [esp+1h] [ebp-2Bh] BYREF

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
 v2 = dest;
 }
 else
 {
 v2 = 0;
 }
 return v2 + strlen(&dest);
}


/* Function: param_tail_call_optimized @ 0x1470 */
int param_tail_call_optimized(int a1, int a2)
{
 int v2; // ecx

 v2 = a2;
 if ( a1 > 0 )
 return (a1 - 1) * (a1 - 1) + a1 + a2 - (((unsigned int)(a1 - 2) * (unsigned long long)(unsigned int)(a1 - 1)) >> 1);
 return v2;
}


/* Function: call_tail_call_optimized @ 0x14A0 */
int call_tail_call_optimized()
{
 return 500500;
}


/* Function: param_non_tail_call @ 0x14B0 */
int param_non_tail_call(int a1)
{
 if ( a1 <= 0 )
 return 0;
 else
 return a1 + (a1 - 1) * (a1 - 1) - (((unsigned int)(a1 - 2) * (unsigned long long)(unsigned int)(a1 - 1)) >> 1);
}


/* Function: call_non_tail_call @ 0x14E0 */
int call_non_tail_call()
{
 return 5050;
}


/* Function: param_vectorized_loop @ 0x14F0 */
int param_vectorized_loop(int a1, int a2, int a3, int a4)
{
 int v4; // ebp
 int v5; // edx
 int v6; // ebx
 int v7; // edi
 int v8; // ebp
 int v9; // edi
 int result; // eax
 int v11; // edx

 if ( a4 <= 0 )
 return 0;
 v4 = 0;
 if ( (unsigned int)(a4 - 1) >= 3 )
 {
 v4 = 0;
 do
 {
 *(unsigned int *)(a3 + 4 * v4) = *(unsigned int *)(a1 + 4 * v4) + *(unsigned int *)(a2 + 4 * v4);
 *(unsigned int *)(a3 + 4 * v4 + 4) = *(unsigned int *)(a1 + 4 * v4 + 4) + *(unsigned int *)(a2 + 4 * v4 + 4);
 *(unsigned int *)(a3 + 4 * v4 + 8) = *(unsigned int *)(a1 + 4 * v4 + 8) + *(unsigned int *)(a2 + 4 * v4 + 8);
 *(unsigned int *)(a3 + 4 * v4 + 12) = *(unsigned int *)(a1 + 4 * v4 + 12) + *(unsigned int *)(a2 + 4 * v4 + 12);
 v4 += 4;
 }
 while ( (a4 & 0x7FFFFFFC) != v4 );
 }
 if ( (a4 & 3) != 0 )
 {
 v5 = a3 + 4 * v4;
 v6 = a2 + 4 * v4;
 v7 = a1 + 4 * v4;
 v8 = 0;
 do
 {
 *(unsigned int *)(v5 + 4 * v8) = *(unsigned int *)(v7 + 4 * v8) + *(unsigned int *)(v6 + 4 * v8);
 ++v8;
 }
 while ( (a4 & 3) != v8 );
 }
 if ( (unsigned int)(a4 - 1) >= 7 )
 {
 v9 = 0;
 result = 0;
 do
 {
 result += *(unsigned int *)(a3 + 4 * v9 + 28)
 + *(unsigned int *)(a3 + 4 * v9 + 24)
 + *(unsigned int *)(a3 + 4 * v9 + 20)
 + *(unsigned int *)(a3 + 4 * v9 + 16)
 + *(unsigned int *)(a3 + 4 * v9 + 12)
 + *(unsigned int *)(a3 + 4 * v9 + 8)
 + *(unsigned int *)(a3 + 4 * v9 + 4)
 + *(unsigned int *)(a3 + 4 * v9);
 v9 += 8;
 }
 while ( (a4 & 0x7FFFFFF8) != v9 );
 }
 else
 {
 v9 = 0;
 result = 0;
 }
 if ( (a4 & 7) != 0 )
 {
 v11 = 0;
 do
 result += *(unsigned int *)(a3 + 4 * v9 + 4 * v11++);
 while ( (a4 & 7) != v11 );
 }
 return result;
}


/* Function: call_vectorized_loop @ 0x1610 */
int call_vectorized_loop()
{
 return 72;
}


/* Function: param_link_time_optimization @ 0x1620 */
int param_link_time_optimization(int a1)
{
 return 2 * a1 + 10;
}


/* Function: call_link_time_optimization @ 0x1630 */
int call_link_time_optimization()
{
 return 20;
}


/* Function: div_zero_handler @ 0x1640 */
void div_zero_handler()
{
 div_zero_caught = 1;
 longjmp(&jmp_buffer, 1);
}


/* Function: param_division_by_zero @ 0x1670 */
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


/* Function: call_division_by_zero @ 0x16D0 */
int call_division_by_zero()
{
 int v0; // esi
 int v1; // edi

 v0 = param_division_by_zero(5);
 v1 = param_division_by_zero(0);
 signal(8, 0);
 return v0 + v1;
}


/* Function: segv_handler @ 0x1720 */
void segv_handler()
{
 segv_caught = 1;
 longjmp(&segv_buffer, 1);
}


/* Function: param_null_pointer_deref @ 0x1750 */
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


/* Function: call_null_pointer_deref @ 0x17A0 */
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


/* Function: param_buffer_overflow_stack @ 0x1800 */
int param_buffer_overflow_stack(int a1)
{
 return a1;
}


/* Function: param_buffer_overflow_heap @ 0x1810 */
int param_buffer_overflow_heap(int a1)
{
 return a1;
}


/* Function: call_buffer_overflow @ 0x1820 */
int call_buffer_overflow()
{
 return 30;
}


/* Function: param_integer_overflow @ 0x1830 */
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


/* Function: call_integer_overflow @ 0x1860 */
int call_integer_overflow()
{
 return 2000000000;
}


/* Function: param_undefined_behavior @ 0x1870 */
int param_undefined_behavior(int a1)
{
 return 2 * a1;
}


/* Function: call_undefined_behavior @ 0x1880 */
int call_undefined_behavior()
{
 return 10;
}


/* Function: param_implementation_defined @ 0x1890 */
int param_implementation_defined()
{
 return 43;
}


/* Function: call_implementation_defined @ 0x18A0 */
int call_implementation_defined()
{
 return 43;
}


/* Function: test_obf_opt_edge @ 0x18B0 */
int test_obf_opt_edge()
{
 int v0; // edx
 int v1; // eax
 int v2; // ecx
 bool v3; // zf
 int v4; // ecx
 char v5; // al
 char *v6; // ecx
 int v7; // esi
 size_t v8; // eax
 int v9; // esi
 int v10; // edi
 int v11; // esi
 int v12; // edi
 char dest[31]; // [esp+Ch] [ebp-30h] BYREF
 char v15; // [esp+2Bh] [ebp-11h]

 puts(asc_21D9);
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
 v15 = 0;
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
 v7 = dest[0];
 }
 else
 {
 v7 = 0;
 }
 v8 = strlen(dest);
 printf(aObfL405D, v7 + v8);
 printf(aOptL401, 500500);
 printf(aOptL401_0, 5050);
 printf(aOptL402, 72);
 printf(aOptL501LtoD, 20);
 v9 = param_division_by_zero(5);
 v10 = param_division_by_zero(0);
 signal(8, 0);
 printf(aEdgeL301D, v9 + v10);
 *(unsigned int *)dest = 42;
 v11 = param_null_pointer_deref((int)dest);
 v12 = param_null_pointer_deref(0);
 signal(11, 0);
 printf(aEdgeL302D, v11 + v12);
 printf(aEdgeL303D, 30);
 printf(aEdgeL304D, 2000000000);
 printf(aEdgeL401D, 10);
 return printf(aEdgeL402D, 43);
}


/* Function: main @ 0x1B00 */
int main(int argc, const char **argv, const char **envp)
{
 test_obf_opt_edge();
 return 0;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x1B6C */
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
