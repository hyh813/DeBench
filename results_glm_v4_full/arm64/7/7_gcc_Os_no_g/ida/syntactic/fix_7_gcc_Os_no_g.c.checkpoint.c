/* Auto-injected type definitions by preprocessor */
/* Standard types are now provided by <stdint.h> */

/* Standard library headers */
#include <stdio.h>
#include <setjmp.h>
#include <signal.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

/* Global variable declarations */
jmp_buf jmp_buffer;
jmp_buf segv_buffer;
int div_zero_caught;
int segv_caught;
extern const char encrypted_0[];
extern const char asc_1120[];
extern const char unk_114D[];
extern const char unk_1169[];
extern const char unk_1185[];
extern const char unk_11A2[];
extern const char unk_11E8[];
extern const char unk_120D[];
extern const char unk_1233[];
extern const char unk_1253[];
extern const char unk_126F[];
extern const char unk_128C[];
extern const char unk_12A9[];
extern const char unk_12DA[];
extern const char unk_12F7[];
extern unsigned long long xmmword_1320[2];
extern unsigned long long xmmword_1330[2];
extern unsigned long long xmmword_1340[2];
extern unsigned long long xmmword_1350[2];

/* Function forward declarations */
extern long long call_weak_fn(void);
long long test_obf_opt_edge(int argc, const char **argv, const char **envp);
void __longjmp_chk(jmp_buf *);

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/7/7_gcc_Os_no_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x848 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_860 @ 0x860 */
void sub_860()
{
 /* JUMPOUT(0); - removed decompilation artifact */
}


/* Function: main @ 0x980 */
int main(int argc, const char **argv, const char **envp)
{
 test_obf_opt_edge(argc, argv, envp);
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */
extern long long call_weak_fn(void);




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: div_zero_handler @ 0xAD4 */
void div_zero_handler()
{
 div_zero_caught = 1;
 __longjmp_chk(&jmp_buffer);
}


/* Function: segv_handler @ 0xAF4 */
void segv_handler()
{
 segv_caught = 1;
 __longjmp_chk(&segv_buffer);
}


/* Function: param_fake_branch @ 0xB14 */
void param_fake_branch()
{
 ;
}


/* Function: call_fake_branch @ 0xB18 */
long long call_fake_branch()
{
 return 10;
}


/* Function: param_opaque_predicate @ 0xB20 */
long long param_opaque_predicate(int a1)
{
 int v1; // w1
 int v2; // w3
 int v3; // w5
 int v6; // w4

 v1 = a1 + 1;
 v2 = a1;
 v3 = a1 * a1 + 2 * a1 + 1 == v1 * v1;
 while ( v1 )
 {
 v6 = v2 % v1;
 v2 = v1;
 v1 = v6;
 }
 if ( v3 && v2 == 1 )
 return (unsigned int)(2 * a1 + 10);
 else
 return (unsigned int)(3 * a1 + 20);
}


/* Function: call_opaque_predicate @ 0xB78 */
long long call_opaque_predicate()
{
 return param_opaque_predicate(5);
}


/* Function: param_instruction_substitution @ 0xB80 */
long long param_instruction_substitution(unsigned int a1)
{
 return 6 * a1 + (a1 >> 1) + (a1 & 0xF) + 15 * a1;
}


/* Function: call_instruction_substitution @ 0xBA4 */
long long call_instruction_substitution()
{
 return 225;
}


/* Function: decrypt_string @ 0xBAC */
char * decrypt_string(char *src, char *dest, size_t a3, char a4)
{
 char *v6; // x4
 char *v7; // x1

 v6 = strncpy(dest, src, a3);
 v7 = v6;
 v6[a3 - 1] = 0;
 while ( *v7 )
 *v7++ ^= a4;
 return v6;
}


/* Function: param_string_encryption @ 0xC04 */
long long param_string_encryption()
{
 int v0; // w0
 char dest[32]; // [xsp+28h] [xbp+28h] BYREF

 decrypt_string(encrypted_0, dest, 0x20u, 90);
 v0 = strlen(dest);
 return (unsigned int)(unsigned char)dest[0] + v0;
}


/* Function: call_string_encryption @ 0xC7C */
// attributes: thunk
long long call_string_encryption()
{
 return param_string_encryption();
}


/* Function: param_tail_call_optimized @ 0xC80 */
long long param_tail_call_optimized(int a1, unsigned int a2)
{
 long long result; // x0

 result = a2;
 while ( a1 > 0 )
 result = (unsigned int)(result + a1--);
 return result;
}


/* Function: call_tail_call_optimized @ 0xCA0 */
long long call_tail_call_optimized()
{
 return 500500;
}


/* Function: param_non_tail_call @ 0xCAC */
long long param_non_tail_call(int a1)
{
 long long result; // x0

 result = 0;
 while ( a1 > 0 )
 result = (unsigned int)(result + a1--);
 return result;
}


/* Function: call_non_tail_call @ 0xCCC */
long long call_non_tail_call()
{
 return param_non_tail_call(100);
}


/* Function: param_vectorized_loop @ 0xCD4 */
long long param_vectorized_loop(long long a1, long long a2, long long a3, int a4)
{
 long long i; // x4
 long long v5; // x1
 long long result; // x0
 int v7; // w4

 for ( i = 0; a4 > (int)i; ++i )
 *(unsigned int *)(a3 + 4 * i) = *(unsigned int *)(a1 + 4 * i) + *(unsigned int *)(a2 + 4 * i);
 v5 = 0;
 result = 0;
 while ( a4 > (int)v5 )
 {
 v7 = *(unsigned int *)(a3 + 4 * v5++);
 result = (unsigned int)(result + v7);
 }
 return result;
}


/* Function: call_vectorized_loop @ 0xD1C */
long long call_vectorized_loop()
{
 unsigned long long v1[2]; // [xsp+18h] [xbp+18h] BYREF
 unsigned long long v2[2]; // [xsp+38h] [xbp+38h] BYREF
 unsigned long long v3[4]; // [xsp+58h] [xbp+58h] BYREF

 memset(v3, 0, sizeof(v3));
 v1[0] = xmmword_1320[0];
 v1[1] = xmmword_1330[0];
 v2[0] = xmmword_1340[0];
 v2[1] = xmmword_1350[0];
 return param_vectorized_loop((long long)v1, (long long)v2, (long long)v3, 8);
}


/* Function: param_link_time_optimization @ 0xD94 */
long long param_link_time_optimization(int a1)
{
 return (unsigned int)(2 * (a1 + 5));
}


/* Function: call_link_time_optimization @ 0xDA0 */
long long call_link_time_optimization()
{
 return 20;
}


/* Function: param_division_by_zero @ 0xDA8 */
long long param_division_by_zero(int a1)
{
 signal(8, (__sighandler_t)div_zero_handler);
 if ( _setjmp(jmp_buffer) )
 return 0xFFFFFFFFLL;
 else
 return (unsigned int)(10 / a1);
}


/* Function: call_division_by_zero @ 0xDF4 */
long long call_division_by_zero()
{
 int v0; // w20
 int v1; // w19

 v0 = param_division_by_zero(5);
 v1 = param_division_by_zero(0);
 signal(8, 0);
 return (unsigned int)(v0 + v1);
}


/* Function: param_null_pointer_deref @ 0xE34 */
long long param_null_pointer_deref(unsigned int *a1)
{
 signal(11, (__sighandler_t)segv_handler);
 if ( _setjmp(segv_buffer) )
 return 0xFFFFFFFFLL;
 else
 return *a1;
}


/* Function: call_null_pointer_deref @ 0xE7C */
long long call_null_pointer_deref()
{
 int v0; // w19
 int v1; // w20
 unsigned int v3; // [xsp+24h] [xbp+24h] BYREF

 v3 = 42;
 v0 = param_null_pointer_deref(&v3);
 v1 = param_null_pointer_deref(0);
 signal(11, 0);
 return (unsigned int)(v0 + v1);
}


/* Function: param_buffer_overflow_stack @ 0xEF8 */
void param_buffer_overflow_stack()
{
 ;
}


/* Function: param_buffer_overflow_heap @ 0xEFC */
long long param_buffer_overflow_heap(unsigned int a1)
{
 void *v2; // x0

 v2 = malloc(0x10u);
 if ( !v2 )
 return 4294967294LL;
 free(v2);
 return a1;
}


/* Function: call_buffer_overflow @ 0xF34 */
long long call_buffer_overflow()
{
 return (unsigned int)param_buffer_overflow_heap(0x14u) + 10;
}


/* Function: param_integer_overflow @ 0xF50 */
long long param_integer_overflow(int a1, int a2)
{
 long long result; // x0

 result = (unsigned int)(a1 + a2);
 if ( a1 <= 0 || a2 <= 0 )
 {
 if ( (a1 & a2) < 0 )
 {
 if ( (int)result > 0 )
 return 4294967294LL;
 else
 return (unsigned int)result;
 }
 }
 else if ( (int)result < 0 )
 {
 return 0xFFFFFFFFLL;
 }
 else
 {
 return (unsigned int)result;
 }
 return result;
}


/* Function: call_integer_overflow @ 0xF88 */
long long call_integer_overflow()
{
 return 2000000000;
}


/* Function: param_undefined_behavior @ 0xF94 */
long long param_undefined_behavior(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: call_undefined_behavior @ 0xF9C */
long long call_undefined_behavior()
{
 return 10;
}


/* Function: param_implementation_defined @ 0xFA4 */
long long param_implementation_defined()
{
 return 48;
}


/* Function: call_implementation_defined @ 0xFAC */
long long call_implementation_defined()
{
 return 48;
}


/* Function: test_obf_opt_edge @ 0xFB4 */
long long test_obf_opt_edge(int argc, const char **argv, const char **envp)
{
 (void)argc;
 (void)argv;
 (void)envp;
 unsigned int v0; // w0
 unsigned int v1; // w0
 unsigned int v2; // w0
 long long v3; // x1
 unsigned int v4; // w0
 unsigned int v5; // w0
 unsigned int v6; // w0
 unsigned int v7; // w0
 unsigned int v8; // w0

 puts(asc_1120);
 __printf_chk(1, unk_114D, 10);
 v0 = call_opaque_predicate();
 __printf_chk(1, unk_1169, v0);
 __printf_chk(1, unk_1185, 225);
 v1 = param_string_encryption();
 __printf_chk(1, unk_11A2, v1);
 v2 = call_tail_call_optimized();
 __printf_chk(1, unk_1185, v2);
 v4 = call_non_tail_call();
 __printf_chk(1, unk_11E8, v4);
 v5 = call_vectorized_loop();
 __printf_chk(1, unk_120D, v5);
 __printf_chk(1, unk_1233, 20);
 v6 = call_division_by_zero();
 __printf_chk(1, unk_1253, v6);
 v7 = call_null_pointer_deref();
 __printf_chk(1, unk_126F, v7);
 v8 = call_buffer_overflow();
 __printf_chk(1, unk_128C, v8);
 __printf_chk(1, unk_12A9, 2000000000);
 __printf_chk(1, unk_12DA, 10);
 return __printf_chk(1, unk_12F7, 48);
}


/* Function: .term_proc @ 0x1108 */
void term_proc()
{
 ;
}


/* FAILED to decompile: strlen @ 0x122F0 */

/* FAILED to decompile: _setjmp @ 0x122F8 */

/* FAILED to decompile: __libc_start_main @ 0x12300 */

/* FAILED to decompile: __cxa_finalize @ 0x12308 */

/* FAILED to decompile: signal @ 0x12310 */

/* FAILED to decompile: malloc @ 0x12318 */

/* FAILED to decompile: __printf_chk @ 0x12320 */

/* FAILED to decompile: __stack_chk_fail @ 0x12328 */

/* FAILED to decompile: abort @ 0x12338 */

/* FAILED to decompile: puts @ 0x12340 */

/* FAILED to decompile: free @ 0x12348 */

/* FAILED to decompile: __longjmp_chk @ 0x12350 */

/* FAILED to decompile: strncpy @ 0x12358 */

/* FAILED to decompile: __gmon_start__ @ 0x12368 */

/* Total functions decompiled: 43, failed: 14 */
