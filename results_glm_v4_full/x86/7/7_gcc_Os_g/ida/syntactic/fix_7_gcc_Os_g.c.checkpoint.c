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

/* Windows-compatible macros for low/high dword access */
#define LODWORD(x) (*(unsigned int*)&(x))
#define HIDWORD(x) (*((unsigned int*)&(x) + 1))
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef _Bool bool;

#include <setjmp.h>
#include <signal.h>
#include <string.h>

/* Global declarations */
extern char _gmon_start__[];
jmp_buf jmp_buffer;
jmp_buf segv_buffer;
typedef void (*__sighandler_t)(int);
int div_zero_caught;
int segv_caught;
static const char encrypted_0[] = {0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A,
                                   0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0};
static const char asc_2060[] = "Testing obfuscation and optimization edge cases:";
static const char unk_208D[] = "call_opaque_predicate() returned: %d\n";
static const char unk_20A9[] = "Opaque predicate result: %d\n";
static const char unk_20C5[] = "Instruction substitution: %d\n";
static const char unk_20E2[] = "String encryption: %d\n";
static const char unk_20FE[] = "Tail call optimized: %d\n";
static const char unk_2128[] = "Non-tail call: %d\n";
static const char unk_214D[] = "Vectorized loop: %d\n";
static const char unk_2173[] = "Link time optimization: %d\n";
static const char unk_2193[] = "Division by zero test: %d\n";
static const char unk_21AF[] = "Null pointer deref: %d\n";
static const char unk_21CC[] = "Buffer overflow: %d\n";
static const char unk_21E9[] = "Integer overflow: %d\n";
static const char unk_221A[] = "Undefined behavior: %d\n";
static const char unk_2237[] = "Implementation defined: %d\n";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/7/7_gcc_Os_g
 * Processor: pc
 */




/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm volatile("jmp *8(%ebx)");
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
void div_zero_handler(int sig)
{
 div_zero_caught = 1;
 __longjmp_chk(jmp_buffer, 1);
}


/* Function: segv_handler @ 0x136F */
void segv_handler(int sig)
{
 segv_caught = 1;
 __longjmp_chk(segv_buffer, 1);
}


/* Function: param_fake_branch @ 0x139D */
int param_fake_branch(int x)
{
 return x;
}


/* Function: call_fake_branch @ 0x13A9 */
int call_fake_branch()
{
 return 10;
}


/* Function: param_opaque_predicate @ 0x13B3 */
int param_opaque_predicate(int x)
{
 int v1; // esi
 int v2; // eax
 bool v3; // bl
 int v4; // edx
 int result; // eax

 v1 = x + 1;
 v2 = x;
 v3 = 2 * x + x * x + 1 == v1 * v1;
 while ( v1 )
 {
 v4 = v2 % v1;
 v2 = v1;
 v1 = v4;
 }
 if ( v2 != 1 )
 return 3 * x + 20;
 result = 2 * x + 10;
 if ( !v3 )
 return 3 * x + 20;
 return result;
}


/* Function: call_opaque_predicate @ 0x13FD */
int call_opaque_predicate()
{
 return param_opaque_predicate(5);
}


/* Function: param_instruction_substitution @ 0x1413 */
int param_instruction_substitution(int x)
{
 return 15 * x + (x & 0xF) + ((unsigned int)x >> 1) + 6 * x;
}


/* Function: call_instruction_substitution @ 0x1434 */
int call_instruction_substitution()
{
 return 225;
}


/* Function: decrypt_string @ 0x143E */
const char * decrypt_string(const char *encrypted, char *buffer, size_t len, char key)
{
 char *i; // ecx
 char v5; // al

 strncpy(buffer, encrypted, len);
 buffer[len - 1] = 0;
 for ( i = buffer; *i; *(i - 1) = v5 )
 v5 = key ^ *i++;
 return buffer;
}


/* Function: param_string_encryption @ 0x1491 */
long long param_string_encryption()
{
 size_t v0; // eax
 long long result; // rax
 char decrypted[32]; // [esp+0h] [ebp-2Ch] BYREF

 decrypt_string(encrypted_0, decrypted, 0x20u, 90);
 v0 = strlen(decrypted);
 LODWORD(result) = decrypted[0] + v0;
 return result;
}


/* Function: call_string_encryption @ 0x14F0 */
long long call_string_encryption()
{
 return param_string_encryption();
}


/* Function: param_tail_call_optimized @ 0x14F6 */
int param_tail_call_optimized(int n, int acc)
{
 int result; // eax

 result = acc;
 while ( n > 0 )
 result += n--;
 return result;
}


/* Function: call_tail_call_optimized @ 0x150E */
int call_tail_call_optimized()
{
 return 500500;
}


/* Function: param_non_tail_call @ 0x1518 */
int param_non_tail_call(int n)
{
 int v1; // edx

 v1 = 0;
 while ( n > 0 )
 v1 += n--;
 return v1;
}


/* Function: call_non_tail_call @ 0x1531 */
int call_non_tail_call()
{
 return param_non_tail_call(100);
}


/* Function: param_vectorized_loop @ 0x1547 */
int param_vectorized_loop(int *a, int *b, int *c, int n)
{
 int i; // eax
 int v5; // eax
 int v6; // edx

 for ( i = 0; i < n; ++i )
 c[i] = a[i] + b[i];
 v5 = 0;
 v6 = 0;
 while ( v5 < n )
 v6 += c[v5++];
 return v6;
}


/* Function: call_vectorized_loop @ 0x1584 */
int call_vectorized_loop()
{
 int a[8]; // [esp+0h] [ebp-70h] BYREF
 int b[8]; // [esp+20h] [ebp-50h] BYREF
 int c[8]; // [esp+40h] [ebp-30h] BYREF
 int i;

 for (i = 0; i < 8; i++)
 {
  a[i] = i * 2;
  b[i] = i * 3 + 1;
 }
 memset(c, 0, sizeof(c));
 return param_vectorized_loop(a, b, c, 8);
}


/* Function: param_link_time_optimization @ 0x15FD */
int param_link_time_optimization(int x)
{
 return 2 * (x + 5);
}


/* Function: call_link_time_optimization @ 0x160E */
int call_link_time_optimization()
{
 return 20;
}


/* Function: param_division_by_zero @ 0x1618 */
int param_division_by_zero(int x)
{
 int v1; // edx
 int result; // eax

 signal(8, (__sighandler_t)div_zero_handler);
 v1 = _setjmp(jmp_buffer);
 result = -1;
 if ( !v1 )
 return 10 / x;
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
int param_null_pointer_deref(int *p)
{
 int v1; // edx
 int result; // eax

 signal(11, (__sighandler_t)segv_handler);
 v1 = _setjmp(segv_buffer);
 result = -1;
 if ( !v1 )
 return *p;
 return result;
}


/* Function: call_null_pointer_deref @ 0x16F9 */
long long call_null_pointer_deref()
{
 int v0; // esi
 int v1; // edi
 long long result; // rax
 int valid; // [esp+0h] [ebp-20h] BYREF

 valid = 42;
 v0 = param_null_pointer_deref(&valid);
 v1 = param_null_pointer_deref(0);
 signal(11, 0);
 LODWORD(result) = v0 + v1;
 return result;
}


/* Function: param_buffer_overflow_stack @ 0x1763 */
int param_buffer_overflow_stack(int a1)
{
 return a1;
}


/* Function: param_buffer_overflow_heap @ 0x176F */
int param_buffer_overflow_heap(int x)
{
 void *v1; // eax
 int v2; // edx

 v1 = malloc(0x10u);
 v2 = -2;
 if ( v1 )
 {
 free(v1);
 return x;
 }
 return v2;
}


/* Function: call_buffer_overflow @ 0x17AE */
int call_buffer_overflow()
{
 return param_buffer_overflow_heap(20) + 10;
}


/* Function: param_integer_overflow @ 0x17C4 */
int param_integer_overflow(int a, int b)
{
 int result; // eax

 result = a + b;
 if ( a <= 0 || b <= 0 )
 {
 if ( (b & a) < 0 && result > 0 )
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
int param_undefined_behavior(int i)
{
 return 2 * i;
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

 puts(asc_2060);
 __printf_chk(1, unk_208D, 10);
 v0 = call_opaque_predicate();
 __printf_chk(1, unk_20A9, v0);
 __printf_chk(1, unk_20C5, 225);
 v1 = param_string_encryption();
 __printf_chk(1, unk_20E2, v1);
 v2 = call_tail_call_optimized();
 __printf_chk(1, unk_20FE, v2);
 v3 = call_non_tail_call();
 __printf_chk(1, unk_2128, v3);
 v4 = call_vectorized_loop();
 __printf_chk(1, unk_214D, v4);
 __printf_chk(1, unk_2173, 20);
 v5 = call_division_by_zero();
 __printf_chk(1, unk_2193, v5);
 v6 = call_null_pointer_deref();
 __printf_chk(1, unk_21AF, v6);
 v7 = call_buffer_overflow();
 __printf_chk(1, unk_21CC, v7);
 __printf_chk(1, unk_21E9, 2000000000);
 __printf_chk(1, unk_221A, 10);
 __printf_chk(1, unk_2237, 43);
}


/* Function: __stack_chk_fail_local @ 0x1990 */
void _stack_chk_fail_local()
{
 __asm volatile("nop");
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x19FC */
void term_proc()
{
 ;
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

/* Total functions decompiled: 60, failed: 12 */
