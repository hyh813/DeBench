#include <signal.h>
#include <setjmp.h>
#include <arm_neon.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stddef.h>

/* Global declarations */
jmp_buf jmp_buffer;
jmp_buf segv_buffer;
int div_zero_caught;
int segv_caught;

/* External declarations */
extern char asc_1121[];
extern char aObfL402D[];
extern char aObfL403D[];
extern char aObfL404D[];
extern char aObfL405D[];
extern char aOptL401[];
extern char aOptL401_0[];
extern char aOptL402[];
extern char aOptL501LtoD[];
extern char aEdgeL301D[];
extern char aEdgeL302D[];
extern char aEdgeL303D[];
extern char aEdgeL304D[];
extern char aEdgeL401D[];
extern char aEdgeL402D[];

/* Define missing string constants */
char asc_1121[] = "Test Output";
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

/* Define missing data */
char param_string_encryption_encrypted[32] = "encrypted_string_data_here";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/7/7_clang_Os_no_g
 * Processor: arm
 */




/* Function: sub_730 @ 0x730 */
void sub_730()
{
 /* JUMPOUT(0); */
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
 v7 = (unsigned char)*dest;
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
 unsigned char v5; // [xsp+0h] [xbp-20h] BYREF
 unsigned char v6[31]; // [xsp+1h] [xbp-1Fh] BYREF

 strncpy((char *)&v5, param_string_encryption_encrypted, 0x20u);
 v0 = (unsigned char)v5;
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
 v3 = v5;
 }
 else
 {
 v3 = 0;
 }
 return (unsigned int)strlen((const char *)&v5) + v3;
}


/* Function: call_string_encryption @ 0xAA4 */
// attributes: thunk
long long call_string_encryption()
{
 return param_string_encryption();
}


/* Function: param_tail_call_optimized @ 0xAA8 */
long long param_tail_call_optimized(int a1, unsigned int a2)
{
 if ( a1 >= 1 )
 return a2
 + a1
 + (a1 - 1) * (a1 - 1)
 - (unsigned int)(((unsigned int)(a1 - 1) * (unsigned long long)(unsigned int)(a1 - 2)) >> 1);
 return a2;
}


/* Function: call_tail_call_optimized @ 0xAD0 */
long long call_tail_call_optimized()
{
 return 500500;
}


/* Function: param_non_tail_call @ 0xADC */
long long param_non_tail_call(int a1)
{
 if ( a1 < 1 )
 return 0;
 else
 return a1
 + (a1 - 1) * (a1 - 1)
 - (unsigned int)(((unsigned int)(a1 - 1) * (unsigned long long)(unsigned int)(a1 - 2)) >> 1);
}


/* Function: call_non_tail_call @ 0xB04 */
long long call_non_tail_call()
{
 return 5050;
}


/* Function: param_vectorized_loop @ 0xB0C */
long long param_vectorized_loop(int *a1, int *a2, int *a3, int a4)
{
 long long v4; // x8
 int *v5; // x10
 long long v6; // x9
 int v7; // w11
 int v8; // t1
 int v9; // t1
 long long result; // x0
 int v11; // t1

 if ( a4 < 1 )
 return 0;
 v4 = (unsigned int)a4;
 v5 = a3;
 v6 = (unsigned int)a4;
 do
 {
 v8 = *a1++;
 v7 = v8;
 v9 = *a2++;
 --v6;
 *v5++ = v9 + v7;
 }
 while ( v6 );
 result = 0;
 do
 {
 v11 = *a3++;
 --v4;
 result = (unsigned int)(v11 + result);
 }
 while ( v4 );
 return result;
}





/* Function: param_link_time_optimization @ 0xBB4 */
long long param_link_time_optimization(int a1)
{
 return (unsigned int)(2 * a1 + 10);
}


/* Function: call_link_time_optimization @ 0xBC0 */
long long call_link_time_optimization()
{
 return 20;
}


/* Function: div_zero_handler @ 0xBC8 */
void div_zero_handler()
{
 div_zero_caught = 1;
 longjmp(jmp_buffer, 1);
}


/* Function: param_division_by_zero @ 0xBEC */
long long param_division_by_zero(int a1)
{
 signal(8, (__sighandler_t)div_zero_handler);
 if ( _setjmp(jmp_buffer) )
 return 0xFFFFFFFFLL;
 else
 return (unsigned int)(10 / a1);
}


/* Function: call_division_by_zero @ 0xC38 */
long long call_division_by_zero()
{
 int v0; // w19
 int v1; // w20

 v0 = param_division_by_zero(5);
 v1 = param_division_by_zero(0);
 signal(8, 0);
 return (unsigned int)(v1 + v0);
}


/* Function: segv_handler @ 0xC78 */
void segv_handler()
{
 segv_caught = 1;
 longjmp(segv_buffer, 1);
}


/* Function: param_null_pointer_deref @ 0xC9C */
long long param_null_pointer_deref(unsigned int *a1)
{
 signal(11, (__sighandler_t)segv_handler);
 if ( _setjmp(segv_buffer) )
 return 0xFFFFFFFFLL;
 else
 return *a1;
}


/* Function: call_null_pointer_deref @ 0xCE4 */
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


/* Function: param_buffer_overflow_stack @ 0xD34 */
void param_buffer_overflow_stack()
{
 ;
}


/* Function: param_buffer_overflow_heap @ 0xD38 */
void param_buffer_overflow_heap()
{
 ;
}


/* Function: call_buffer_overflow @ 0xD3C */
long long call_buffer_overflow()
{
 return 30;
}


/* Function: param_integer_overflow @ 0xD44 */
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


/* Function: call_integer_overflow @ 0xD7C */
long long call_integer_overflow()
{
 return 2000000000;
}


/* Function: param_undefined_behavior @ 0xD88 */
long long param_undefined_behavior(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: call_undefined_behavior @ 0xD90 */
long long call_undefined_behavior()
{
 return 10;
}


/* Function: param_implementation_defined @ 0xD98 */
long long param_implementation_defined()
{
 return 48;
}


/* Function: call_implementation_defined @ 0xDA0 */
long long call_implementation_defined()
{
 return 48;
}


/* Function: test_obf_opt_edge @ 0xDA8 */
long long test_obf_opt_edge()
{
 int v0; // w8
 int v1; // w9
 int v2; // w10
 long long v3; // x1
 unsigned int v4; // w0
 unsigned int v5; // w0
 unsigned int v6; // w0
 unsigned int v7; // w0

 puts(asc_1121);
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
 v4 = param_string_encryption();
 printf(aObfL405D, v4);
 printf(aOptL401, 500500);
 printf(aOptL401_0, 5050);
 printf(aOptL402, 0);
 printf(aOptL501LtoD, 20);
 v6 = call_division_by_zero();
 printf(aEdgeL301D, v6);
 v7 = call_null_pointer_deref();
 printf(aEdgeL302D, v7);
 printf(aEdgeL303D, 30);
 printf(aEdgeL304D, 2000000000);
 printf(aEdgeL401D, 10);
 return printf(aEdgeL402D, 48);
}


/* Function: main @ 0xEE0 */
int main(int argc, const char **argv, const char **envp)
{
 test_obf_opt_edge();
 return 0;
}


/* Function: .term_proc @ 0xEF8 */
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
