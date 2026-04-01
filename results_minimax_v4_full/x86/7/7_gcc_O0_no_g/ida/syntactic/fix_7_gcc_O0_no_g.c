/* Auto-injected type definitions by preprocessor */
#include <setjmp.h>
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

/* Signal handler type */
typedef void (*__sighandler_t)(int);

/* LODWORD/HIDWORD macros for accessing 64-bit low/high dwords */
#define LODWORD(x) (*(unsigned int*)&(x))
#define HIDWORD(x) (*((unsigned int*)&(x) + 1))


jmp_buf jmp_buffer;
jmp_buf segv_buffer;
int div_zero_caught;
int segv_caught;
char encrypted_0[32];
char asc_2010[256];

/* Format strings */
char aObfL402D[] = "Obf/L4_02: %d\n";
char aObfL403D[] = "Obf/L4_03: %d\n";
char aObfL404D[] = "Obf/L4_04: %d\n";
char aObfL405D[] = "Obf/L4_05: %d\n";
char aOptL401[] = "Opt/L4_01: %d\n";
char aOptL401_0[] = "Opt/L4_01: %d\n";
char aOptL402[] = "Opt/L4_02: %d\n";
char aOptL501LtoD[] = "Opt/L5_01 (Lto): %d\n";
char aEdgeL301D[] = "Edge/L3_01: %d\n";
char aEdgeL302D[] = "Edge/L3_02: %d\n";
char aEdgeL303D[] = "Edge/L3_03: %d\n";
char aEdgeL304D[] = "Edge/L3_04: %d\n";
char aEdgeL401D[] = "Edge/L4_01: %d\n";
char aEdgeL402D[] = "Edge/L4_02: %d\n";

/* Function declarations - using empty stubs for CRT functions */
void _do_global_dtors_aux(void) {}
void frame_dummy(void) {}

/* Function: __readgsdword - compiler intrinsic for reading GS segment register */
static inline unsigned int __readgsdword(unsigned int offset)
{
 unsigned int value;
 __asm__ __volatile__("movl %%gs:%1, %0" : "=r"(value) : "m"(*(const unsigned int *)offset));
 return value;
}

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/7/7_gcc_O0_no_g
 * Processor: pc
 */


void sub_1030()
{
 __asm__("jmp *%0" : : "r"(*(void **)(((char *)0) + 8)));
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
int param_fake_branch(int a1)
{
 return a1;
}


/* Function: call_fake_branch @ 0x1349 */
int call_fake_branch()
{
 return param_fake_branch(10);
}


/* Function: param_opaque_predicate @ 0x1366 */
int param_opaque_predicate(int a1)
{
 int v2; // [esp+8h] [ebp-18h]
 int v3; // [esp+Ch] [ebp-14h]
 int v4; // [esp+1Ch] [ebp-4h]

 v2 = a1;
 v3 = a1 + 1;
 while ( v3 )
 {
 v4 = v3;
 v3 = v2 % v3;
 v2 = v4;
 }
 if ( a1 * a1 + 2 * a1 + 1 == (a1 + 1) * (a1 + 1) && v2 == 1 )
 return 2 * (a1 + 5);
 else
 return 3 * a1 + 20;
}


/* Function: call_opaque_predicate @ 0x1411 */
int call_opaque_predicate()
{
 return param_opaque_predicate(5);
}


/* Function: param_instruction_substitution @ 0x142E */
int param_instruction_substitution(unsigned int a1)
{
 return (a1 & 0xF) + (a1 >> 1) + 6 * a1 + 15 * a1;
}


/* Function: call_instruction_substitution @ 0x1496 */
int call_instruction_substitution()
{
 return param_instruction_substitution(0xAu);
}


/* Function: decrypt_string @ 0x14B3 */
char * decrypt_string(char *src, char *dest, size_t n, char a4)
{
 char *i; // [esp+1Ch] [ebp-Ch]

 strncpy(dest, src, n);
 dest[n - 1] = 0;
 for ( i = dest; *i; ++i )
 *i ^= a4;
 return dest;
}


/* Function: param_string_encryption @ 0x1520 */
long long param_string_encryption()
{
 size_t v0; // eax
 long long result; // rax
 char s[32]; // [esp+Ch] [ebp-2Ch] BYREF
 unsigned int v3; // [esp+2Ch] [ebp-Ch]

 v3 = __readgsdword(0x14u);
 decrypt_string(encrypted_0, s, 0x20u, 90);
 v0 = strlen(s);
 LODWORD(result) = v0 + s[0];
 HIDWORD(result) = v3 - __readgsdword(0x14u);
 return result;
}


/* Function: call_string_encryption @ 0x1588 */
long long call_string_encryption()
{
 return param_string_encryption();
}


/* Function: param_tail_call_optimized @ 0x15A3 */
int param_tail_call_optimized(int a1, int a2)
{
 if ( a1 > 0 )
 return param_tail_call_optimized(a1 - 1, a1 + a2);
 else
 return a2;
}


/* Function: call_tail_call_optimized @ 0x15DF */
int call_tail_call_optimized()
{
 return param_tail_call_optimized(1000, 0);
}


/* Function: param_non_tail_call @ 0x1607 */
int param_non_tail_call(int a1)
{
 if ( a1 > 0 )
 return a1 + param_non_tail_call(a1 - 1);
 else
 return 0;
}


/* Function: call_non_tail_call @ 0x1641 */
int call_non_tail_call()
{
 return param_non_tail_call(100);
}


/* Function: param_vectorized_loop @ 0x1664 */
int param_vectorized_loop(int a1, int a2, int a3, int a4)
{
 int i; // [esp+4h] [ebp-10h]
 int v6; // [esp+8h] [ebp-Ch]
 int j; // [esp+Ch] [ebp-8h]

 for ( i = 0; i < a4; ++i )
 *(unsigned int *)(4 * i + a3) = *(unsigned int *)(4 * i + a1) + *(unsigned int *)(4 * i + a2);
 v6 = 0;
 for ( j = 0; j < a4; ++j )
 v6 += *(unsigned int *)(4 * j + a3);
 return v6;
}


/* Function: call_vectorized_loop @ 0x16FB */
int call_vectorized_loop()
{
 unsigned int i; // eax
 unsigned int v2[8]; // [esp+Ch] [ebp-6Ch] BYREF
 unsigned int v3[8]; // [esp+2Ch] [ebp-4Ch] BYREF
 unsigned int v4[11]; // [esp+4Ch] [ebp-2Ch] BYREF

 v4[8] = __readgsdword(0x14u);
 v2[0] = 1;
 v2[1] = 2;
 v2[2] = 3;
 v2[3] = 4;
 v2[4] = 5;
 v2[5] = 6;
 v2[6] = 7;
 v2[7] = 8;
 v3[0] = 8;
 v3[1] = 7;
 v3[2] = 6;
 v3[3] = 5;
 v3[4] = 4;
 v3[5] = 3;
 v3[6] = 2;
 v3[7] = 1;
 for ( i = 0; i < 8; ++i )
 v4[i] = 0;
 return param_vectorized_loop((int)v2, (int)v3, (int)v4, 8);
}


/* Function: lto_target_func @ 0x17D2 */
int lto_target_func(int a1)
{
 return 2 * (a1 + 5);
}


/* Function: param_link_time_optimization @ 0x17E9 */
int param_link_time_optimization(int a1)
{
 return lto_target_func(a1);
}


/* Function: call_link_time_optimization @ 0x1807 */
int call_link_time_optimization()
{
 return param_link_time_optimization(5);
}


/* Function: div_zero_handler @ 0x1824 */
void div_zero_handler()
{
 div_zero_caught = 1;
 longjmp(&jmp_buffer, 1);
}


/* Function: param_division_by_zero @ 0x1856 */
int param_division_by_zero(int a1)
{
 signal(8, (__sighandler_t)div_zero_handler);
 if ( _setjmp(&jmp_buffer) )
 return -1;
 else
 return 10 / a1;
}


/* Function: call_division_by_zero @ 0x18B5 */
int call_division_by_zero()
{
 int v1; // [esp+8h] [ebp-10h]
 int v2; // [esp+Ch] [ebp-Ch]

 v1 = param_division_by_zero(5);
 v2 = param_division_by_zero(0);
 signal(8, 0);
 return v1 + v2;
}


/* Function: segv_handler @ 0x1907 */
void segv_handler()
{
 segv_caught = 1;
 longjmp(&segv_buffer, 1);
}


/* Function: param_null_pointer_deref @ 0x1939 */
int param_null_pointer_deref(int a1)
{
 signal(11, (__sighandler_t)segv_handler);
 if ( _setjmp(&segv_buffer) )
 return -1;
 else
 return *(unsigned int *)a1;
}


/* Function: call_null_pointer_deref @ 0x1994 */
long long call_null_pointer_deref()
{
 long long result; // rax
 int v1; // [esp+0h] [ebp-18h] BYREF
 int v2; // [esp+4h] [ebp-14h]
 int v3; // [esp+8h] [ebp-10h]
 unsigned int v4; // [esp+Ch] [ebp-Ch]

 v4 = __readgsdword(0x14u);
 v1 = 42;
 v2 = param_null_pointer_deref((int)&v1);
 v3 = param_null_pointer_deref(0);
 signal(11, 0);
 LODWORD(result) = v2 + v3;
 HIDWORD(result) = v4 - __readgsdword(0x14u);
 return result;
}


/* Function: param_buffer_overflow_stack @ 0x1A0B */
int param_buffer_overflow_stack(int a1)
{
 int i; // [esp+Ch] [ebp-1Ch]
 unsigned char v3[8]; // [esp+14h] [ebp-14h]
 unsigned int v4; // [esp+1Ch] [ebp-Ch]

 v4 = __readgsdword(0x14u);
 for ( i = 0; i <= 16; ++i )
 v3[i] = 65;
 return a1;
}


/* Function: param_buffer_overflow_heap @ 0x1A75 */
int param_buffer_overflow_heap(int a1)
{
 int i; // [esp+8h] [ebp-10h]
 unsigned char *ptr; // [esp+Ch] [ebp-Ch]

 ptr = malloc(0x10u);
 if ( !ptr )
 return -2;
 for ( i = 0; i <= 32; ++i )
 ptr[i] = 66;
 free(ptr);
 return a1;
}


/* Function: call_buffer_overflow @ 0x1ADC */
int call_buffer_overflow()
{
 int v1; // [esp+8h] [ebp-10h]

 v1 = param_buffer_overflow_stack(10);
 return v1 + param_buffer_overflow_heap(20);
}


/* Function: param_integer_overflow @ 0x1B1A */
int param_integer_overflow(int a1, int a2)
{
 int v3; // [esp+0h] [ebp-10h]

 v3 = a1 + a2;
 if ( a1 > 0 && a2 > 0 && v3 < 0 )
 return -1;
 if ( a1 >= 0 || a2 >= 0 || v3 <= 0 )
 return a1 + a2;
 return -2;
}


/* Function: call_integer_overflow @ 0x1B87 */
int call_integer_overflow()
{
 int v1; // [esp+8h] [ebp-8h]

 v1 = param_integer_overflow(1000000000, 1000000000);
 return v1 + param_integer_overflow(-1, 1);
}


/* Function: param_undefined_behavior @ 0x1BC9 */
int param_undefined_behavior(int a1)
{
 return 2 * a1;
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
int test_obf_opt_edge()
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
 return printf(aEdgeL402D, v13);
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
 /* Empty stub - actual __stack_chk_fail should be called */
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
