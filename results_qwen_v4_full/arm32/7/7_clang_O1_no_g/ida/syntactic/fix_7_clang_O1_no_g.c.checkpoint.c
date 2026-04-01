/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;

/* Macro definitions for byte access */
#define LOBYTE(x) (*((unsigned char*)&(x)))
#define HIBYTE(x) (*((unsigned char*)&(x) + 1))

/* Define jmp_buf structure */
struct __jmp_buf_tag {
    char __jmpbuf[128];
};
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

/* Global variables */
char param_string_encryption_encrypted[32];
struct __jmp_buf_tag jmp_buffer;
struct __jmp_buf_tag segv_buffer;
int div_zero_caught;
int segv_caught;
int dword_1190[10];
int dword_1170[10];
char *asc_1381;
char *aObfL402D;
char *aObfL403D;
char *aObfL404D;
char *aObfL405D;
char *aOptL401;
char *aOptL401_0;
char *aOptL402;
char *aOptL501LtoD;
char *aEdgeL301D;
char *aEdgeL302D;
char *aEdgeL303D;
char *aEdgeL304D;
char *aEdgeL401D;
char *aEdgeL402D;

/* Type definitions */
typedef int bool;
typedef void (*__sighandler_t)(int);

/* Macro for JUMPOUT */
#define JUMPOUT(x) ((void)0)

/* Weak function stub */
int call_weak_fn() { return 0; }

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/7/7_clang_O1_no_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x48C */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_498 @ 0x498 */
void sub_498()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: param_fake_branch @ 0x6A4 */
void param_fake_branch()
{
 ;
}


/* Function: call_fake_branch @ 0x6A8 */
int call_fake_branch()
{
 return 10;
}


/* Function: param_opaque_predicate @ 0x6B0 */
int param_opaque_predicate(int a1)
{
 int v1; // r4
 int v2; // r7
 int v3; // r6
 int v4; // r5
 int v5; // r1
 int result; // r0

 v1 = a1;
 v2 = a1 + 1;
 v3 = 2 * a1;
 v4 = a1;
 if ( a1 != -1 )
 {
 v5 = a1 + 1;
 do
 {
 v4 = v5;
 v5 = a1 % v5;
 a1 = v4;
 }
 while ( v5 );
 }
 result = 3 * v1 + 20;
 if ( !(((v3 | 1) + v1 * v1) ^ (v2 * v2) | v4 ^ 1) )
 return v3 + 10;
 return result;
}


/* Function: call_opaque_predicate @ 0x710 */
int call_opaque_predicate()
{
 int v0; // r1
 int v1; // r0
 int v2; // r4
 int result; // r0

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


/* Function: param_instruction_substitution @ 0x744 */
int param_instruction_substitution(unsigned int a1)
{
 return (a1 & 0xF) + (a1 >> 1) + 21 * a1;
}


/* Function: call_instruction_substitution @ 0x75C */
int call_instruction_substitution()
{
 return 225;
}


/* Function: decrypt_string @ 0x764 */
char * decrypt_string(char *src, char *dest, size_t a3, char a4)
{
 int v7; // r0
 char *v8; // r1

 strncpy(dest, src, a3);
 dest[a3 - 1] = 0;
 LOBYTE(v7) = *dest;
 if ( *dest )
 {
 v8 = dest + 1;
 do
 {
 *(v8 - 1) = v7 ^ a4;
 v7 = (unsigned char)*v8++;
 }
 while ( v7 );
 }
 return dest;
}


/* Function: param_string_encryption @ 0x7C0 */
size_t param_string_encryption()
{
 char *v0; // r0
 int v1; // r1
 unsigned char *v2; // r0
 char v4[40]; // [sp+0h] [bp-28h] BYREF

 v0 = strncpy(v4, param_string_encryption_encrypted, 0x20u);
 v4[31] = 0;
 LOBYTE(v1) = v4[0];
 if ( v4[0] )
 {
 v2 = (unsigned char *)(v0 + 1);
 do
 {
 *(v2 - 1) = v1 ^ 0x5A;
 v1 = *v2++;
 }
 while ( v1 );
 }
 return strlen(v4) + (unsigned char)v4[0];
}


/* Function: call_string_encryption @ 0x82C */
size_t call_string_encryption()
{
 char *v0; // r0
 int v1; // r1
 unsigned char *v2; // r0
 char v4[40]; // [sp+0h] [bp-28h] BYREF

 v0 = strncpy(v4, param_string_encryption_encrypted, 0x20u);
 v4[31] = 0;
 LOBYTE(v1) = v4[0];
 if ( v4[0] )
 {
 v2 = (unsigned char *)(v0 + 1);
 do
 {
 *(v2 - 1) = v1 ^ 0x5A;
 v1 = *v2++;
 }
 while ( v1 );
 }
 return strlen(v4) + (unsigned char)v4[0];
}


/* Function: param_tail_call_optimized @ 0x898 */
int param_tail_call_optimized(int a1, int a2)
{
 if ( a1 >= 1 )
 return param_tail_call_optimized(a1 - 1, a2 + a1);
 return a2;
}


/* Function: call_tail_call_optimized @ 0x8C0 */
int call_tail_call_optimized()
{
 return param_tail_call_optimized(1000, 0);
}


/* Function: param_non_tail_call @ 0x8D8 */
int param_non_tail_call(int a1)
{
 if ( a1 >= 1 )
 return param_non_tail_call(a1 - 1) + a1;
 else
 return 0;
}


/* Function: call_non_tail_call @ 0x900 */
int call_non_tail_call()
{
 return param_non_tail_call(100);
}


/* Function: param_vectorized_loop @ 0x914 */
int param_vectorized_loop(int *a1, int *a2, int *a3, int a4)
{
 int *v4; // r12
 int v5; // lr
 int v6; // r4
 int v7; // t1
 int v8; // t1
 int result; // r0
 int v10; // t1

 if ( a4 >= 1 )
 {
 v4 = a3;
 v5 = a4;
 do
 {
 v7 = *a1++;
 v6 = v7;
 v8 = *a2++;
 *v4++ = v8 + v6;
 --v5;
 }
 while ( v5 );
 }
 result = 0;
 if ( a4 >= 1 )
 {
 do
 {
 v10 = *a3++;
 result += v10;
 --a4;
 }
 while ( a4 );
 }
 return result;
}


/* Function: call_vectorized_loop @ 0x964 */
int call_vectorized_loop()
{
 int v0; // r0
 int v1; // r2
 int result; // r0
 unsigned int v3[10]; // [sp+0h] [bp-28h] BYREF

 v0 = 0;
 memset(v3, 0, 32);
 do
 {
 v3[v0] = dword_1190[v0] + dword_1170[v0];
 ++v0;
 }
 while ( v0 != 8 );
 v1 = 0;
 result = 0;
 do
 result += v3[v1++];
 while ( v1 != 8 );
 return result;
}


/* Function: param_link_time_optimization @ 0x9F0 */
int param_link_time_optimization(int a1)
{
 return 2 * a1 + 10;
}


/* Function: call_link_time_optimization @ 0x9FC */
int call_link_time_optimization()
{
 return 20;
}


/* Function: div_zero_handler @ 0xA04 */
void div_zero_handler()
{
 div_zero_caught = 1;
 longjmp((struct __jmp_buf_tag *)&jmp_buffer, 1);
}


/* Function: param_division_by_zero @ 0xA2C */
int param_division_by_zero(int a1)
{
 bool v2; // zf
 int result; // r0

 signal(8, (__sighandler_t)div_zero_handler);
 v2 = setjmp((struct __jmp_buf_tag *)&jmp_buffer) == 0;
 result = -1;
 if ( v2 )
 return 10 / a1;
 return result;
}


/* Function: call_division_by_zero @ 0xA84 */
int call_division_by_zero()
{
 int v0; // r4
 int v1; // r5
 int v2; // 

 v0 = param_division_by_zero(5);
 v1 = param_division_by_zero(0);
 signal(8, 0);
 v2 = v1 + v0;
 return v2;
}


/* Function: segv_handler @ 0xAB8 */
void segv_handler()
{
 segv_caught = 1;
 longjmp((struct __jmp_buf_tag *)&segv_buffer, 1);
}


/* Function: param_null_pointer_deref @ 0xAE0 */
int param_null_pointer_deref(int a1)
{
 bool v2; // zf
 int result; // r0

 signal(11, (__sighandler_t)segv_handler);
 v2 = setjmp((struct __jmp_buf_tag *)&segv_buffer) == 0;
 result = -1;
 if ( v2 )
 return *(unsigned int *)a1;
 return result;
}


/* Function: call_null_pointer_deref @ 0xB24 */
int call_null_pointer_deref()
{
 int v0; // r4
 int v1; // r5
 int v3; // [sp+4h] [bp-14h] BYREF

 v3 = 42;
 v0 = param_null_pointer_deref((int)&v3);
 v1 = param_null_pointer_deref(0);
 signal(11, 0);
 return v1 + v0;
}


/* Function: param_buffer_overflow_stack @ 0xB68 */
void param_buffer_overflow_stack()
{
 ;
}


/* Function: param_buffer_overflow_heap @ 0xB6C */
void param_buffer_overflow_heap()
{
 ;
}


/* Function: call_buffer_overflow @ 0xB70 */
int call_buffer_overflow()
{
 return 30;
}


/* Function: param_integer_overflow @ 0xB78 */
int param_integer_overflow(int a1, int a2)
{
 int v2; // r3
 bool v3; // cc
 int v4; // r0
 int v5; // r2

 v2 = a2 + a1;
 v3 = a1 < 1;
 if ( a1 >= 1 )
 v3 = a2 < 1;
 if ( v3 || (v5 = -1, v2 >= 0) )
 {
 v4 = a2 & a1;
 v5 = v2;
 if ( v2 > 0 )
 v5 = -2;
 if ( v4 >= 0 )
 return v2;
 }
 return v5;
}


/* Function: call_integer_overflow @ 0xBB8 */
int call_integer_overflow()
{
 return 2000000000;
}


/* Function: param_undefined_behavior @ 0xBC4 */
int param_undefined_behavior(int a1)
{
 return 2 * a1;
}


/* Function: call_undefined_behavior @ 0xBCC */
int call_undefined_behavior()
{
 return 10;
}


/* Function: param_implementation_defined @ 0xBD4 */
int param_implementation_defined()
{
 return 44;
}


/* Function: call_implementation_defined @ 0xBDC */
int call_implementation_defined()
{
 return 44;
}


/* Function: test_obf_opt_edge @ 0xBE4 */
int test_obf_opt_edge()
{
 int v0; // r1
 int v1; // r0
 int v2; // r4
 int v3; // r1
 int v4; // r5
 int v5; // r0
 unsigned char *v6; // r1
 size_t v7; // r0
 int v8; // r0
 int v9; // r0
 int v10; // r0
 int v11; // r1
 int v12; // r4
 int v13; // r5
 int v14; // r4
 int v15; // r5
 unsigned int v17[7]; // [sp+0h] [bp-30h] BYREF
 int v18; // [sp+1Ch] [bp-14h]

 puts(asc_1381);
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
 v3 = 35;
 if ( v2 == 1 )
 v3 = 20;
 printf(aObfL403D, v3);
 printf(aObfL404D, 225);
 strncpy((char *)v17, param_string_encryption_encrypted, 0x20u);
 v4 = 0;
 HIBYTE(v18) = 0;
 LOBYTE(v5) = v17[0];
 if ( LOBYTE(v17[0]) )
 {
 v6 = (unsigned char *)v17 + 1;
 do
 {
 *(v6 - 1) = v5 ^ 0x5A;
 v5 = *v6++;
 }
 while ( v5 );
 }
 v7 = strlen((const char *)v17);
 printf(aObfL405D, v7 + LOBYTE(v17[0]));
 v8 = param_tail_call_optimized(1000, 0);
 printf(aOptL401, v8);
 v9 = param_non_tail_call(100);
 printf(aOptL401_0, v9);
 v18 = 0;
 memset(v17, 0, sizeof(v17));
 do
 {
 v17[v4] = dword_1190[v4] + dword_1170[v4];
 ++v4;
 }
 while ( v4 != 8 );
 v10 = 0;
 v11 = 0;
 do
 v11 += v17[v10++];
 while ( v10 != 8 );
 printf(aOptL402, v11);
 printf(aOptL501LtoD, 20);
 v12 = param_division_by_zero(5);
 v13 = param_division_by_zero(0);
 signal(8, 0);
 printf(aEdgeL301D, v13 + v12);
 v17[0] = 42;
 v14 = param_null_pointer_deref((int)v17);
 v15 = param_null_pointer_deref(0);
 signal(11, 0);
 printf(aEdgeL302D, v15 + v14);
 printf(aEdgeL303D, 30);
 printf(aEdgeL304D, 2000000000);
 printf(aEdgeL401D, 10);
 return printf(aEdgeL402D, 44);
}


/* Function: main @ 0xE70 */
int main(int argc, const char **argv, const char **envp)
{
 test_obf_opt_edge();
 return 0;
}



/* CRT stub function __divsi3 removed by preprocessor */




/* CRT stub function .divsi3_skip_div0_test removed by preprocessor */




/* CRT stub function __aeabi_idivmod removed by preprocessor */




/* CRT stub function __aeabi_ldiv0 removed by preprocessor */



/* Function: .term_proc @ 0x10D4 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp_raise @ 0x123BC */

/* FAILED to decompile: __imp___libc_start_main @ 0x123C0 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x123C4 */

/* FAILED to decompile: __imp_printf @ 0x123C8 */

/* FAILED to decompile: __imp_longjmp @ 0x123CC */

/* FAILED to decompile: __imp__setjmp @ 0x123D0 */

/* FAILED to decompile: __imp_signal @ 0x123D4 */

/* FAILED to decompile: __imp_puts @ 0x123D8 */

/* FAILED to decompile: __imp_strlen @ 0x123DC */

/* FAILED to decompile: __imp_strncpy @ 0x123E0 */

/* FAILED to decompile: __imp_abort @ 0x123E4 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x123EC */

/* Total functions decompiled: 47, failed: 12 */
