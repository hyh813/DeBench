/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Global declarations for undeclared identifiers */
#include <setjmp.h>
#include <signal.h>
extern void *_gmon_start__;
jmp_buf jmp_buffer;
jmp_buf segv_buffer;
int div_zero_caught = 0;
int segv_caught = 0;
const char *encrypted_0 = "encrypted_string";
const char *asc_2010 = "Test Output";
const char *aObfL402D = "ObfL402: %d\n";
const char *aObfL403D = "ObfL403: %d\n";
const char *aObfL404D = "ObfL404: %d\n";
const char *aObfL405D = "ObfL405: %d\n";
const char *aOptL401 = "OptL401: %d\n";
const char *aOptL401_0 = "OptL401: %d\n";
const char *aOptL402 = "OptL402: %d\n";
const char *aOptL501LtoD = "OptL501Lto: %d\n";
const char *aEdgeL301D = "EdgeL301: %d\n";
const char *aEdgeL302D = "EdgeL302: %d\n";
const char *aEdgeL303D = "EdgeL303: %d\n";
const char *aEdgeL304D = "EdgeL304: %d\n";
const char *aEdgeL401D = "EdgeL401: %d\n";
const char *aEdgeL402D = "EdgeL402: %d\n";
typedef void (*__sighandler_t)(int);
unsigned int __readgsdword(unsigned int offset) { return 0; }
int _setjmp(jmp_buf env) { return 0; }
void longjmp(jmp_buf env, int val) { }
void *malloc(size_t size) { return (void*)0; }
void free(void *ptr) { }

size_t strlen(const char *s) { return 0; }
char *strncpy(char *dest, const char *src, size_t n) { return dest; }
int puts(const char *s) { return 0; }
int printf(const char *format, ...) { return 0; }

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/7/7_gcc_O0_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x1000 */
int init_proc()
{
 if ( &_gmon_start__ )
 ((void (*)(void))_gmon_start__)();
 frame_dummy();
 return _do_global_ctors_aux();
}

void *_gmon_start__ = 0;
void frame_dummy(void) { }
int _do_global_ctors_aux(void) { return 0; }
void _do_global_dtors_aux(void) { }


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile("");
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
 sub_1030();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
 sub_1030();
}


/* Function: sub_1060 @ 0x1060 */
void sub_1060()
{
 sub_1030();
}


/* Function: sub_1070 @ 0x1070 */
void sub_1070()
{
 sub_1030();
}


/* Function: sub_1080 @ 0x1080 */
void sub_1080()
{
 sub_1030();
}


/* Function: sub_1090 @ 0x1090 */
void sub_1090()
{
 sub_1030();
}


/* Function: sub_10A0 @ 0x10A0 */
void sub_10A0()
{
 sub_1030();
}


/* Function: sub_10B0 @ 0x10B0 */
void sub_10B0()
{
 sub_1030();
}


/* Function: sub_10C0 @ 0x10C0 */
void sub_10C0()
{
 sub_1030();
}


/* Function: sub_10D0 @ 0x10D0 */
void sub_10D0()
{
 sub_1030();
}


/* Function: sub_10E0 @ 0x10E0 */
void sub_10E0()
{
 sub_1030();
}


/* Function: sub_10F0 @ 0x10F0 */
int sub_10F0(int a1)
{
 return (*(int (**)(void))(a1 + 60))();
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_11DC @ 0x11DC */
void sub_11DC()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x11E0 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1319 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x131D */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: param_fake_branch @ 0x1321 */
int param_fake_branch(int x)
{
 return x;
}


/* Function: call_fake_branch @ 0x1349 */
int call_fake_branch()
{
 return param_fake_branch(10);
}


/* Function: param_opaque_predicate @ 0x1366 */
int param_opaque_predicate(int x)
{
 int a; // [esp+8h] [ebp-18h]
 int b; // [esp+Ch] [ebp-14h]
 int temp; // [esp+1Ch] [ebp-4h]

 a = x;
 b = x + 1;
 while ( b )
 {
 temp = b;
 b = a % b;
 a = temp;
 }
 if ( x * x + 2 * x + 1 == (x + 1) * (x + 1) && a == 1 )
 return 2 * (x + 5);
 else
 return 3 * x + 20;
}


/* Function: call_opaque_predicate @ 0x1411 */
int call_opaque_predicate()
{
 return param_opaque_predicate(5);
}


/* Function: param_instruction_substitution @ 0x142E */
int param_instruction_substitution(int x)
{
 return (x & 0xF) + ((unsigned int)x >> 1) + 6 * x + 15 * x;
}


/* Function: call_instruction_substitution @ 0x1496 */
int call_instruction_substitution()
{
 return param_instruction_substitution(10);
}


/* Function: decrypt_string @ 0x14B3 */
const char * decrypt_string(const char *encrypted, char *buffer, size_t len, char key)
{
 char *p; // [esp+1Ch] [ebp-Ch]

 strncpy(buffer, encrypted, len);
 buffer[len - 1] = 0;
 for ( p = buffer; *p; ++p )
 *p ^= key;
 return buffer;
}


/* Function: param_string_encryption @ 0x1520 */
long long param_string_encryption()
{
 size_t v0; // eax
 long long result; // rax
 char decrypted[32]; // [esp+Ch] [ebp-2Ch] BYREF
 unsigned int v3; // [esp+2Ch] [ebp-Ch]

 v3 = __readgsdword(0x14u);
 decrypt_string(encrypted_0, decrypted, 0x20u, 90);
 v0 = strlen(decrypted);
 result = (long long)(v0 + decrypted[0]);
 return result;
}


/* Function: call_string_encryption @ 0x1588 */
long long call_string_encryption()
{
 return param_string_encryption();
}


/* Function: param_tail_call_optimized @ 0x15A3 */
int param_tail_call_optimized(int n, int acc)
{
 if ( n > 0 )
 return param_tail_call_optimized(n - 1, n + acc);
 else
 return acc;
}


/* Function: call_tail_call_optimized @ 0x15DF */
int call_tail_call_optimized()
{
 return param_tail_call_optimized(1000, 0);
}


/* Function: param_non_tail_call @ 0x1607 */
int param_non_tail_call(int n)
{
 if ( n > 0 )
 return n + param_non_tail_call(n - 1);
 else
 return 0;
}


/* Function: call_non_tail_call @ 0x1641 */
int call_non_tail_call()
{
 return param_non_tail_call(100);
}


/* Function: param_vectorized_loop @ 0x1664 */
int param_vectorized_loop(int *a, int *b, int *c, int n)
{
 int i; // [esp+4h] [ebp-10h]
 int sum; // [esp+8h] [ebp-Ch]
 int i_0; // [esp+Ch] [ebp-8h]

 for ( i = 0; i < n; ++i )
 c[i] = a[i] + b[i];
 sum = 0;
 for ( i_0 = 0; i_0 < n; ++i_0 )
 sum += c[i_0];
 return sum;
}


/* Function: call_vectorized_loop @ 0x16FB */
int call_vectorized_loop()
{
 unsigned int i; // eax
 int a[8]; // [esp+Ch] [ebp-6Ch] BYREF
 int b[8]; // [esp+2Ch] [ebp-4Ch] BYREF
 int c[8]; // [esp+4Ch] [ebp-2Ch] BYREF
 unsigned int v5; // [esp+6Ch] [ebp-Ch]

 v5 = __readgsdword(0x14u);
 a[0] = 1;
 a[1] = 2;
 a[2] = 3;
 a[3] = 4;
 a[4] = 5;
 a[5] = 6;
 a[6] = 7;
 a[7] = 8;
 b[0] = 8;
 b[1] = 7;
 b[2] = 6;
 b[3] = 5;
 b[4] = 4;
 b[5] = 3;
 b[6] = 2;
 b[7] = 1;
 for ( i = 0; i < 8; ++i )
 c[i] = 0;
 return param_vectorized_loop(a, b, c, 8);
}


/* Function: lto_target_func @ 0x17D2 */
int lto_target_func(int x)
{
 return 2 * (x + 5);
}


/* Function: param_link_time_optimization @ 0x17E9 */
int param_link_time_optimization(int x)
{
 return lto_target_func(x);
}


/* Function: call_link_time_optimization @ 0x1807 */
int call_link_time_optimization()
{
 return param_link_time_optimization(5);
}


/* Function: div_zero_handler @ 0x1824 */
void div_zero_handler(int sig)
{
 div_zero_caught = 1;
 longjmp(jmp_buffer, 1);
}


/* Function: param_division_by_zero @ 0x1856 */
int param_division_by_zero(int x)
{
 signal(8, (__sighandler_t)div_zero_handler);
 if ( _setjmp(jmp_buffer) )
 return -1;
 else
 return 10 / x;
}


/* Function: call_division_by_zero @ 0x18B5 */
int call_division_by_zero()
{
 int r1; // [esp+8h] [ebp-10h]
 int r2; // [esp+Ch] [ebp-Ch]

 r1 = param_division_by_zero(5);
 r2 = param_division_by_zero(0);
 signal(8, 0);
 return r1 + r2;
}


/* Function: segv_handler @ 0x1907 */
void segv_handler(int sig)
{
 segv_caught = 1;
 longjmp(segv_buffer, 1);
}


/* Function: param_null_pointer_deref @ 0x1939 */
int param_null_pointer_deref(int *p)
{
 signal(11, (__sighandler_t)segv_handler);
 if ( _setjmp(segv_buffer) )
 return -1;
 else
 return *p;
}


/* Function: call_null_pointer_deref @ 0x1994 */
long long call_null_pointer_deref()
{
 long long result; // rax
 int valid; // [esp+0h] [ebp-18h] BYREF
 int r1; // [esp+4h] [ebp-14h]
 int r2; // [esp+8h] [ebp-10h]
 unsigned int v4; // [esp+Ch] [ebp-Ch]

 v4 = __readgsdword(0x14u);
 valid = 42;
 r1 = param_null_pointer_deref(&valid);
 r2 = param_null_pointer_deref(0);
 result = (long long)(r1 + r2);
 return result;
}


/* Function: param_buffer_overflow_stack @ 0x1A0B */
int param_buffer_overflow_stack(int x)
{
 int i; // [esp+Ch] [ebp-1Ch]
 char buffer[8]; // [esp+14h] [ebp-14h]
 unsigned int v4; // [esp+1Ch] [ebp-Ch]

 v4 = __readgsdword(0x14u);
 for ( i = 0; i <= 16; ++i )
 buffer[i] = 65;
 return x;
}


/* Function: param_buffer_overflow_heap @ 0x1A75 */
int param_buffer_overflow_heap(int x)
{
 int i; // [esp+8h] [ebp-10h]
 char *heap_buffer; // [esp+Ch] [ebp-Ch]

 heap_buffer = (char *)malloc(0x10u);
 if ( !heap_buffer )
 return -2;
 for ( i = 0; i <= 32; ++i )
 heap_buffer[i] = 66;
 free(heap_buffer);
 return x;
}


/* Function: call_buffer_overflow @ 0x1ADC */
int call_buffer_overflow()
{
 int r1; // [esp+8h] [ebp-10h]

 r1 = param_buffer_overflow_stack(10);
 return r1 + param_buffer_overflow_heap(20);
}


/* Function: param_integer_overflow @ 0x1B1A */
int param_integer_overflow(int a, int b)
{
 int signed_sum; // [esp+0h] [ebp-10h]

 signed_sum = a + b;
 if ( a > 0 && b > 0 && signed_sum < 0 )
 return -1;
 if ( a >= 0 || b >= 0 || signed_sum <= 0 )
 return a + b;
 return -2;
}


/* Function: call_integer_overflow @ 0x1B87 */
int call_integer_overflow()
{
 int r1; // [esp+8h] [ebp-8h]

 r1 = param_integer_overflow(1000000000, 1000000000);
 return r1 + param_integer_overflow(-1, 1);
}


/* Function: param_undefined_behavior @ 0x1BC9 */
int param_undefined_behavior(int i)
{
 return 2 * i;
}


/* Function: call_undefined_behavior @ 0x1BEB */
int call_undefined_behavior()
{
 return param_undefined_behavior(5);
}


/* Function: param_implementation_defined @ 0x1C11 */
int param_implementation_defined()
{
 return 43;
}


/* Function: call_implementation_defined @ 0x1C9D */
int call_implementation_defined()
{
 return param_implementation_defined();
}


/* Function: test_obf_opt_edge @ 0x1CB5 */
void test_obf_opt_edge()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax
 int v8; // eax
 int v9; // eax
 int v10; // eax
 int v11; // eax
 int v12; // eax
 int v13; // eax

 puts(asc_2010);
 v0 = call_fake_branch();
 printf(aObfL402D, v0);
 v1 = call_opaque_predicate();
 printf(aObfL403D, v1);
 v2 = call_instruction_substitution();
 printf(aObfL404D, v2);
 v3 = call_string_encryption();
 printf(aObfL405D, v3);
 v4 = call_tail_call_optimized();
 printf(aOptL401, v4);
 v5 = call_non_tail_call();
 printf(aOptL401_0, v5);
 v6 = call_vectorized_loop();
 printf(aOptL402, v6);
 v7 = call_link_time_optimization();
 printf(aOptL501LtoD, v7);
 v8 = call_division_by_zero();
 printf(aEdgeL301D, v8);
 v9 = call_null_pointer_deref();
 printf(aEdgeL302D, v9);
 v10 = call_buffer_overflow();
 printf(aEdgeL303D, v10);
 v11 = call_integer_overflow();
 printf(aEdgeL304D, v11);
 v12 = call_undefined_behavior();
 printf(aEdgeL401D, v12);
 v13 = call_implementation_defined();
 printf(aEdgeL402D, v13);
}


/* Function: main @ 0x1E33 */
int main(int argc, const char **argv, const char **envp)
{
 test_obf_opt_edge();
 return 0;
}


/* Function: __x86.get_pc_thunk.ax @ 0x1E53 */
void *_x86_get_pc_thunk_ax()
{
 void *retaddr; // [esp+0h] [ebp+0h]

 return retaddr;
}


/* Function: __stack_chk_fail_local @ 0x1E60 */
void _stack_chk_fail_local()
{
 __asm__ volatile("");
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x1ECC */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: __libc_start_main @ 0x4184 */

/* FAILED to decompile: printf @ 0x4188 */

/* FAILED to decompile: longjmp @ 0x418C */

/* FAILED to decompile: _setjmp @ 0x4190 */

/* FAILED to decompile: free @ 0x4194 */

/* FAILED to decompile: signal @ 0x4198 */

/* FAILED to decompile: __stack_chk_fail @ 0x419C */

/* FAILED to decompile: __cxa_finalize @ 0x41A0 */

/* FAILED to decompile: malloc @ 0x41A4 */

/* FAILED to decompile: puts @ 0x41A8 */

/* FAILED to decompile: strlen @ 0x41AC */

/* FAILED to decompile: strncpy @ 0x41B0 */

/* Total functions decompiled: 62, failed: 12 */
