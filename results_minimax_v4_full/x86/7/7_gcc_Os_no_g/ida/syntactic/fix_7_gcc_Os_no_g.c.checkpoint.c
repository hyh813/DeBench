/* Auto-injected type definitions by preprocessor */
#include <stddef.h>
#include <signal.h>

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
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef int bool;
#define true 1
#define false 0

/* Macro definitions for LODWORD/HIDWORD */
#define LODWORD(x) (*(unsigned int*)&(x))
#define HIDWORD(x) (*((unsigned int*)&(x)+1))

/* Standard library types for jmp_buf */
typedef struct __jmp_buf_tag {
    unsigned int ebx;
    unsigned int esi;
    unsigned int edi;
    unsigned int ebp;
    unsigned int esp;
    unsigned int eip;
} jmp_buf;

/* External CRT functions */
extern void _gmon_start__(void);
int _setjmp(jmp_buf *);
void _longjmp_chk(jmp_buf *, int);
void *malloc(size_t);
void free(void *);
int puts(const char *);
size_t strlen(const char *);
char *strncpy(char *, const char *, size_t);
void *memcpy(void *, const void *, size_t);
int __printf_chk(int, const char *, ...);
typedef void (*__sighandler_t)(int);
__sighandler_t signal(int, __sighandler_t);
unsigned int __readgsdword(unsigned int);
void _do_global_ctors_aux(void);
void _do_global_dtors_aux(void);
void frame_dummy(void);
void __stack_chk_fail_local(void);

/* Global variables */
jmp_buf jmp_buffer;
jmp_buf segv_buffer;
int div_zero_caught;
int segv_caught;

/* Data arrays */
unsigned char unk_2020[32];
unsigned char unk_2040[32];
char asc_2060[] = "Test_obf_opt_edge";
char unk_208D[] = "%d\n";
char unk_20A9[] = "call_opaque_predicate: %d\n";
char unk_20C5[] = "call_instruction_substitution: %d\n";
char unk_20E2[] = "param_string_encryption: %d\n";
char unk_20FE[] = "call_tail_call_optimized: %d\n";
char unk_2128[] = "call_non_tail_call: %d\n";
char unk_214D[] = "call_vectorized_loop: %d\n";
char unk_2173[] = "call_link_time_optimization: %d\n";
char unk_2193[] = "call_division_by_zero: %d\n";
char unk_21AF[] = "call_null_pointer_deref: %d\n";
char unk_21CC[] = "call_buffer_overflow: %d\n";
char unk_21E9[] = "call_integer_overflow: %d\n";
char unk_221A[] = "call_undefined_behavior: %d\n";
char unk_2237[] = "call_implementation_defined: %d\n";

/* Encrypted string */
char encrypted_0[32] = {0};

/* External CRT functions */
extern void _gmon_start__(void);
int _setjmp(jmp_buf *);
void _longjmp(jmp_buf *, int);
void *malloc(size_t);
void free(void *);
int puts(const char *);
size_t strlen(const char *);
char *strncpy(char *, const char *, size_t);
int __printf_chk(int, const char *, ...);
void __longjmp_chk(jmp_buf *, int);
typedef void (*__sighandler_t)(int);
__sighandler_t signal(int, __sighandler_t);
unsigned int __readgsdword(unsigned int);
void _do_global_ctors_aux(void);
void _do_global_dtors_aux(void);
void frame_dummy(void);
void __stack_chk_fail_local(void);

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/7/7_gcc_Os_no_g
 * Processor: pc
 */

/* Function: sub_1030 @ 0x1030 */
void __attribute__((noreturn)) sub_1030()
{
 __asm__ volatile("jmp *%%ebx" : : : "memory");
 __builtin_unreachable();
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


/* Function: div_zero_handler @ 0x1341 */
void div_zero_handler()
{
 div_zero_caught = 1;
 __longjmp_chk(&jmp_buffer, 1);
}


/* Function: segv_handler @ 0x136F */
void segv_handler()
{
 segv_caught = 1;
 __longjmp_chk(&segv_buffer, 1);
}


/* Function: param_fake_branch @ 0x139D */
int param_fake_branch(int a1)
{
 return a1;
}


/* Function: call_fake_branch @ 0x13A9 */
int call_fake_branch()
{
 return 10;
}


/* Function: param_opaque_predicate @ 0x13B3 */
int param_opaque_predicate(int a1)
{
 int v1; // esi
 int v2; // eax
 bool v3; // bl
 int v4; // edx
 int result; // eax

 v1 = a1 + 1;
 v2 = a1;
 v3 = 2 * a1 + a1 * a1 + 1 == v1 * v1;
 while ( v1 )
 {
 v4 = v2 % v1;
 v2 = v1;
 v1 = v4;
 }
 if ( v2 != 1 )
 return 3 * a1 + 20;
 result = 2 * a1 + 10;
 if ( !v3 )
 return 3 * a1 + 20;
 return result;
}


/* Function: call_opaque_predicate @ 0x13FD */
int call_opaque_predicate()
{
 return param_opaque_predicate(5);
}


/* Function: param_instruction_substitution @ 0x1413 */
int param_instruction_substitution(unsigned int a1)
{
 return 15 * a1 + (a1 & 0xF) + (a1 >> 1) + 6 * a1;
}


/* Function: call_instruction_substitution @ 0x1434 */
int call_instruction_substitution()
{
 return 225;
}


/* Function: decrypt_string @ 0x143E */
char * decrypt_string(char *src, char *dest, size_t n, char a4)
{
 char *i; // ecx
 char v5; // al

 strncpy(dest, src, n);
 dest[n - 1] = 0;
 for ( i = dest; *i; i++ )
 {
 v5 = a4 ^ *i;
 *i = v5;
 }
 return dest;
}


/* Function: param_string_encryption @ 0x1491 */
long long param_string_encryption()
{
 size_t v0; // eax
 long long result; // rax
 char s[32]; // [esp+0h] [ebp-2Ch] BYREF
 unsigned int v3; // [esp+20h] [ebp-Ch]

 v3 = __readgsdword(0x14u);
 decrypt_string(encrypted_0, s, 0x20u, 90);
 v0 = strlen(s);
 LODWORD(result) = s[0] + v0;
 HIDWORD(result) = v3 - __readgsdword(0x14u);
 return result;
}


/* Function: call_string_encryption @ 0x14F0 */
long long call_string_encryption()
{
 return param_string_encryption();
}


/* Function: param_tail_call_optimized @ 0x14F6 */
int param_tail_call_optimized(int a1, int a2)
{
 int result; // eax

 result = a2;
 while ( a1 > 0 )
 result += a1--;
 return result;
}


/* Function: call_tail_call_optimized @ 0x150E */
int call_tail_call_optimized()
{
 return 500500;
}


/* Function: param_non_tail_call @ 0x1518 */
int param_non_tail_call(int a1)
{
 int v1; // edx

 v1 = 0;
 while ( a1 > 0 )
 v1 += a1--;
 return v1;
}


/* Function: call_non_tail_call @ 0x1531 */
int call_non_tail_call()
{
 return param_non_tail_call(100);
}


/* Function: param_vectorized_loop @ 0x1547 */
int param_vectorized_loop(int a1, int a2, int a3, int a4)
{
 int i; // eax
 int v5; // eax
 int v6; // edx

 for ( i = 0; i < a4; ++i )
 *(unsigned int *)(a3 + 4 * i) = *(unsigned int *)(a1 + 4 * i) + *(unsigned int *)(a2 + 4 * i);
 v5 = 0;
 v6 = 0;
 while ( v5 < a4 )
 v6 += *(unsigned int *)(a3 + 4 * v5++);
 return v6;
}


/* Function: call_vectorized_loop @ 0x1584 */
int call_vectorized_loop()
{
 unsigned char v1[32]; // [esp-70h] [ebp-70h] BYREF
 unsigned char v2[32]; // [esp-50h] [ebp-50h] BYREF
 unsigned char v3[32]; // [esp-30h] [ebp-30h] BYREF
 unsigned int v4; // [esp-10h] [ebp-10h]

 v4 = __readgsdword(0x14u);
 memcpy(v1, unk_2020, sizeof(v1));
 memcpy(v2, unk_2040, sizeof(v2));
 memset(v3, 0, sizeof(v3));
 return param_vectorized_loop((int)v1, (int)v2, (int)v3, 8);
}


/* Function: param_link_time_optimization @ 0x15FD */
int param_link_time_optimization(int a1)
{
 return 2 * (a1 + 5);
}


/* Function: call_link_time_optimization @ 0x160E */
int call_link_time_optimization()
{
 return 20;
}


/* Function: param_division_by_zero @ 0x1618 */
int param_division_by_zero(int a1)
{
 int v1; // edx
 int result; // eax

 signal(8, (__sighandler_t)div_zero_handler);
 v1 = _setjmp(&jmp_buffer);
 result = -1;
 if ( !v1 )
 return 10 / a1;
 return result;
}


/* Function: call_division_by_zero @ 0x1668 */
int call_division_by_zero()
{
 int v0; // esi
 int v1; // edi

 v0 = param_division_by_zero(5);
 v1 = param_division_by_zero(0);
 signal(8, 0);
 return v0 + v1;
}


/* Function: param_null_pointer_deref @ 0x16AD */
int param_null_pointer_deref(int a1)
{
 int v1; // edx
 int result; // eax

 signal(11, (__sighandler_t)segv_handler);
 v1 = _setjmp(&segv_buffer);
 result = -1;
 if ( !v1 )
 return *(unsigned int *)a1;
 return result;
}


/* Function: call_null_pointer_deref @ 0x16F9 */
long long call_null_pointer_deref()
{
 int v0; // esi
 int v1; // edi
 long long result; // rax
 int v3; // [esp+0h] [ebp-20h] BYREF
 unsigned int v4; // [esp+4h] [ebp-1Ch]

 v4 = __readgsdword(0x14u);
 v3 = 42;
 v0 = param_null_pointer_deref((int)&v3);
 v1 = param_null_pointer_deref(0);
 signal(11, 0);
 LODWORD(result) = v0 + v1;
 HIDWORD(result) = v4 - __readgsdword(0x14u);
 return result;
}


/* Function: param_buffer_overflow_stack @ 0x1763 */
int param_buffer_overflow_stack(int a1)
{
 return a1;
}


/* Function: param_buffer_overflow_heap @ 0x176F */
int param_buffer_overflow_heap(int a1)
{
 void *v1; // eax
 int v2; // edx

 v1 = malloc(0x10u);
 v2 = -2;
 if ( v1 )
 {
 free(v1);
 return a1;
 }
 return v2;
}


/* Function: call_buffer_overflow @ 0x17AE */
int call_buffer_overflow()
{
 return param_buffer_overflow_heap(20) + 10;
}


/* Function: param_integer_overflow @ 0x17C4 */
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


/* Function: call_integer_overflow @ 0x17F8 */
int call_integer_overflow()
{
 return 2000000000;
}


/* Function: param_undefined_behavior @ 0x1802 */
int param_undefined_behavior(int a1)
{
 return 2 * a1;
}


/* Function: call_undefined_behavior @ 0x1810 */
int call_undefined_behavior()
{
 return 10;
}


/* Function: param_implementation_defined @ 0x181A */
int param_implementation_defined()
{
 return 43;
}


/* Function: call_implementation_defined @ 0x1824 */
int call_implementation_defined()
{
 return 43;
}


/* Function: test_obf_opt_edge @ 0x182E */
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

 puts(asc_2060);
 __printf_chk(1, &unk_208D, 10);
 v0 = call_opaque_predicate();
 __printf_chk(1, &unk_20A9, v0);
 __printf_chk(1, &unk_20C5, 225);
 v1 = param_string_encryption();
 __printf_chk(1, &unk_20E2, v1);
 v2 = call_tail_call_optimized();
 __printf_chk(1, &unk_20FE, v2);
 v3 = call_non_tail_call();
 __printf_chk(1, &unk_2128, v3);
 v4 = call_vectorized_loop();
 __printf_chk(1, &unk_214D, v4);
 __printf_chk(1, &unk_2173, 20);
 v5 = call_division_by_zero();
 __printf_chk(1, &unk_2193, v5);
 v6 = call_null_pointer_deref();
 __printf_chk(1, &unk_21AF, v6);
 v7 = call_buffer_overflow();
 __printf_chk(1, &unk_21CC, v7);
 __printf_chk(1, &unk_21E9, 2000000000);
 __printf_chk(1, &unk_221A, 10);
 return __printf_chk(1, &unk_2237, 43);
}


/* Function: _stack_chk_fail_local @ 0x1990 */
void __stack_chk_fail_local(void)
{
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



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

/* Total functions decompiled: 60, failed: 12 */
