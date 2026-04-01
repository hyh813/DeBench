#include <setjmp.h>
#include <signal.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <x86intrin.h>

/* Define LODWORD and HIDWORD macros for accessing 64-bit low/high parts */
/* Note: Using different names to avoid potential conflicts */
#ifdef __GNUC__
#define LODWORD(x) (*(unsigned int*)&(x))
#define HIDWORD(x) (*((unsigned int*)&(x) + 1))
#else
#define LODWORD(x) ((unsigned int*)&(x))[0]
#define HIDWORD(x) ((unsigned int*)&(x))[1]
#endif

/* Define __readgsdword if not available (GCC intrinsic for reading GS segment) */
#ifndef __readgsdword
#ifdef __x86_64__
#define __readgsdword(offset) ({ \
    unsigned int __ret; \
    __asm__ volatile("movl %%gs:%1, %0" : "=r"(__ret) : "m"(*(const void *)(unsigned long)(offset))); \
    __ret; \
})
#elif defined __i386__
#define __readgsdword(offset) ({ \
    unsigned int __ret; \
    __asm__ volatile("movl %%fs:%1, %0" : "=r"(__ret) : "m"(*(const void *)(unsigned long)(offset))); \
    __ret; \
})
#else
/* Fallback for other architectures - may not work correctly */
#define __readgsdword(offset) (*(unsigned int const *)(offset))
#endif
#endif

/* Forward declarations */
void div_zero_handler();
void segv_handler();
extern char encrypted_0[];
extern char asc_2008[];
extern char unk_212F[];
extern char unk_214B[];
extern char unk_2167[];
extern char unk_2184[];
extern char unk_2038[];
extern char unk_2064[];
extern char unk_208C[];
extern char unk_20B4[];
extern char unk_21A0[];
extern char unk_21BC[];
extern char unk_21D9[];
extern char unk_20D4[];
extern char unk_21F6[];
extern char unk_2108[];
extern void _gmon_start__(void);
extern void frame_dummy(void);
extern int _do_global_ctors_aux(void);
extern void _do_global_dtors_aux(void);
unsigned int test_obf_opt_edge(void);

/* Global variables */
int div_zero_caught;
int segv_caught;
sigjmp_buf jmp_buffer;
sigjmp_buf segv_buffer;

/* Encrypted string data (placeholder - original was in binary data section) */
char encrypted_0[32] = {0};

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/7/7_gcc_O3_no_g
 * Processor: pc
 */




/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile("jmp *%%ebx" : : "b"(8));
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


/* Function: test_obf_opt_edge @ (missing) */
unsigned int test_obf_opt_edge(void)
{
 /* Stub implementation - original was likely optimized out or inline */
 return 0;
}

/* Function: main @ 0x11B0 */
int main(int argc, const char **argv, const char **envp)
{
 test_obf_opt_edge();
 return 0;
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_11FC @ 0x11FC */
void sub_11FC()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1200 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1339 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x133D */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: div_zero_handler @ 0x1350 */
void div_zero_handler()
{
 div_zero_caught = 1;
 __longjmp_chk(&jmp_buffer, 1);
}


/* Function: segv_handler @ 0x1380 */
void segv_handler()
{
 segv_caught = 1;
 __longjmp_chk(&segv_buffer, 1);
}


/* Function: param_division_by_zero.constprop.0 @ 0x13B0 */
int param_division_by_zero_constprop_0()
{
 signal(8, (__sighandler_t)div_zero_handler);
 if ( !_setjmp(&jmp_buffer) )
 {
 /* Trigger division by zero to test signal handling */
 int x = 1/0;
 }
 return -1;
}


/* Function: param_division_by_zero.constprop.1 @ 0x1400 */
int param_division_by_zero_constprop_1()
{
 signal(8, (__sighandler_t)div_zero_handler);
 return _setjmp(&jmp_buffer) == 0 ? 2 : -1;
}


/* Function: param_fake_branch @ 0x1440 */
int param_fake_branch(int a1)
{
 return a1;
}


/* Function: call_fake_branch @ 0x1450 */
int call_fake_branch()
{
 return 10;
}


/* Function: param_opaque_predicate @ 0x1460 */
int param_opaque_predicate(int a1)
{
 int v1; // edx
 bool v2; // di
 int v3; // eax
 int v4; // ecx

 v1 = a1 + 1;
 if ( a1 == -1 )
 return 3 * a1 + 20;
 v2 = 2 * a1 + a1 * a1 + 1 == v1 * v1;
 v3 = a1;
 do
 {
 v4 = v1;
 v1 = v3 % v1;
 v3 = v4;
 }
 while ( v1 );
 if ( v4 == 1 && v2 )
 return 2 * a1 + 10;
 else
 return 3 * a1 + 20;
}


/* Function: call_opaque_predicate @ 0x14C0 */
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
 result = 20;
 if ( v2 != 1 )
 return 35;
 return result;
}


/* Function: param_instruction_substitution @ 0x14F0 */
int param_instruction_substitution(unsigned int a1)
{
 return 15 * a1 + (a1 & 0xF) + (a1 >> 1) + 6 * a1;
}


/* Function: call_instruction_substitution @ 0x1520 */
int call_instruction_substitution()
{
 return 225;
}


/* Function: decrypt_string @ 0x1530 */
char * decrypt_string(char *src, char *dest, size_t n, char a4)
{
 char v4; // al
 char *v5; // edx

 strncpy(dest, src, n);
 dest[n - 1] = 0;
 v4 = *dest;
 if ( *dest )
 {
 v5 = dest;
 do
 {
 *v5++ = a4 ^ v4;
 v4 = *v5;
 }
 while ( *v5 );
 }
 return dest;
}


/* Function: param_string_encryption @ 0x1590 */
long long param_string_encryption()
{
 char v0; // dl
 char *v1; // eax
 long long result; // rax
 char dest[32]; // [esp+Eh] [ebp-30h] BYREF
 unsigned int v4; // [esp+2Eh] [ebp-10h]

 v4 = __readgsdword(0x14u);
 strncpy(dest, encrypted_0, 0x1Fu);
 v0 = dest[0];
 dest[31] = 0;
 if ( dest[0] )
 {
 v1 = dest;
 do
 {
 *v1++ = v0 ^ 0x5A;
 v0 = *v1;
 }
 while ( *v1 );
 v0 = dest[0];
 }
 LODWORD(result) = v0 + strlen(dest);
 HIDWORD(result) = v4 - __readgsdword(0x14u);
 return result;
}


/* Function: call_string_encryption @ 0x1630 */
long long call_string_encryption()
{
 char v0; // dl
 char *v1; // eax
 long long result; // rax
 char dest[32]; // [esp+Eh] [ebp-30h] BYREF
 unsigned int v4; // [esp+2Eh] [ebp-10h]

 v4 = __readgsdword(0x14u);
 strncpy(dest, encrypted_0, 0x1Fu);
 v0 = dest[0];
 dest[31] = 0;
 if ( dest[0] )
 {
 v1 = dest;
 do
 {
 *v1++ = v0 ^ 0x5A;
 v0 = *v1;
 }
 while ( *v1 );
 v0 = dest[0];
 }
 LODWORD(result) = v0 + strlen(dest);
 HIDWORD(result) = v4 - __readgsdword(0x14u);
 return result;
}


/* Function: param_tail_call_optimized @ 0x16D0 */
int param_tail_call_optimized(int a1, int a2)
{
 int v2; // eax

 v2 = a1;
 if ( a1 > 0 )
 {
 do
 a2 += v2--;
 while ( v2 );
 }
 return a2;
}


/* Function: call_tail_call_optimized @ 0x16F0 */
int call_tail_call_optimized()
{
 return 500500;
}


/* Function: param_non_tail_call @ 0x1700 */
int param_non_tail_call(int a1)
{
 int v1; // eax
 int v2; // edx

 v1 = a1;
 v2 = 0;
 if ( a1 > 0 )
 {
 do
 v2 += v1--;
 while ( v1 );
 }
 return v2;
}


/* Function: call_non_tail_call @ 0x1720 */
int call_non_tail_call()
{
 return 5050;
}


/* Function: param_vectorized_loop @ 0x1730 */
int param_vectorized_loop(int a1, int a2, unsigned int *a3, int a4)
{
 int i; // eax
 unsigned int *v5; // eax
 int v6; // edx

 if ( a4 <= 0 )
 return 0;
 for ( i = 0; i != a4; ++i )
 a3[i] = *(unsigned int *)(a1 + 4 * i) + *(unsigned int *)(a2 + 4 * i);
 v5 = a3;
 v6 = 0;
 do
 v6 += *v5++;
 while ( &a3[a4] != v5 );
 return v6;
}


/* Function: call_vectorized_loop @ 0x1790 */
int call_vectorized_loop()
{
 return 72;
}


/* Function: param_link_time_optimization @ 0x17A0 */
int param_link_time_optimization(int a1)
{
 return 2 * a1 + 10;
}


/* Function: call_link_time_optimization @ 0x17B0 */
int call_link_time_optimization()
{
 return 20;
}


/* Function: param_division_by_zero @ 0x17C0 */
int param_division_by_zero(int a1)
{
 signal(8, (__sighandler_t)div_zero_handler);
 if ( _setjmp(&jmp_buffer) )
 return -1;
 else
 return 10 / a1;
}


/* Function: call_division_by_zero @ 0x1820 */
int call_division_by_zero()
{
 int v0; // esi
 int v1; // edi

 v0 = param_division_by_zero_constprop_1();
 v1 = param_division_by_zero_constprop_0();
 signal(8, 0);
 return v0 + v1;
}


/* Function: param_null_pointer_deref @ 0x1860 */
int param_null_pointer_deref(int a1)
{
 signal(11, (__sighandler_t)segv_handler);
 if ( _setjmp(&segv_buffer) )
 return -1;
 else
 return *(unsigned int *)a1;
}


/* Function: call_null_pointer_deref @ 0x18B0 */
long long call_null_pointer_deref()
{
 int v0; // esi
 int v1; // edi
 long long result; // rax
 int v3; // [esp+18h] [ebp-14h] BYREF
 unsigned int v4; // [esp+1Ch] [ebp-10h]

 v4 = __readgsdword(0x14u);
 v3 = 42;
 v0 = param_null_pointer_deref((int)&v3);
 v1 = param_null_pointer_deref(0);
 signal(11, 0);
 LODWORD(result) = v0 + v1;
 HIDWORD(result) = v4 - __readgsdword(0x14u);
 return result;
}


/* Function: param_buffer_overflow_stack @ 0x1920 */
int param_buffer_overflow_stack(int a1)
{
 return a1;
}


/* Function: param_buffer_overflow_heap @ 0x1930 */
int param_buffer_overflow_heap(int a1)
{
 void *v1; // eax

 v1 = malloc(0x10u);
 if ( !v1 )
 return -2;
 free(v1);
 return a1;
}


/* Function: call_buffer_overflow @ 0x1970 */
int call_buffer_overflow()
{
 void *v0; // eax

 v0 = malloc(0x10u);
 if ( !v0 )
 return 8;
 free(v0);
 return 30;
}


/* Function: param_integer_overflow @ 0x19B0 */
int param_integer_overflow(int a1, int a2)
{
 int result; // eax

 result = a1 + a2;
 if ( a1 <= 0 || a2 <= 0 )
 {
 if ( (a2 & a1) < 0 && result > 0 )
 return -2;
 }
 else if ( result < 0 )
 {
 return -1;
 }
 return result;
}


/* Function: call_integer_overflow @ 0x19F0 */
int call_integer_overflow()
{
 return 2000000000;
}


/* Function: param_undefined_behavior @ 0x1A00 */
int param_undefined_behavior(int a1)
{
 return 2 * a1;
}


/* Function: call_undefined_behavior @ 0x1A10 */
int call_undefined_behavior()
{
 return 10;
}


/* Function: param_implementation_defined @ 0x1A20 */
int param_implementation_defined()
{
 return 43;
}


/* Function: call_implementation_defined @ 0x1A30 */
int call_implementation_defined()
{
 return 43;
}





/* Function: __stack_chk_fail_local @ 0x1CA0 */
void _stack_chk_fail_local()
{
 /* Empty stub - original had inline assembly */
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x1D0C */
void term_proc()
{
 /* Stub - was calling _do_global_dtors_aux() */
}


/* FAILED to decompile: __libc_start_main @ 0x41A0 */

/* FAILED to decompile: _setjmp @ 0x41A4 */

/* FAILED to decompile: free @ 0x41A8 */

/* FAILED to decompile: signal @ 0x41AC */

/* FAILED to decompile: __stack_chk_fail @ 0x41B0 */

/* FAILED to decompile: __cxa_finalize @ 0x41B4 */

/* FAILED to decompile: malloc @ 0x41B8 */

/* FAILED to decompile: puts @ 0x41BC */

/* FAILED to decompile: strlen @ 0x41C0 */

/* FAILED to decompile: strncpy @ 0x41C4 */

/* FAILED to decompile: __printf_chk @ 0x41C8 */

/* FAILED to decompile: __longjmp_chk @ 0x41CC */

/* Total functions decompiled: 62, failed: 12 */
