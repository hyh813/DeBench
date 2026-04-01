// Angr Decompilation of 7_gcc_O0_no_g
// Platform: ARMEL

#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <signal.h>
#include <setjmp.h>

/* CRT stub function _init removed by preprocessor */

// Global variable definitions for undefined references
unsigned int __glibc___stack_chk_guard = 0;
unsigned int segv_caught = 0;
unsigned int div_zero_caught = 0;

// Stub function for armg_calculate_condition
int armg_calculate_condition(unsigned int cond, unsigned int arg1, unsigned int arg2, unsigned int arg3)
{
 return 1;
}

// Function: sub_104f0 at 0x104f0
extern unsigned int g_22008;

int sub_104f0()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return 0;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_105f0 at 0x105f0
void sub_105f0()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: param_fake_branch at 0x106b0
int param_fake_branch(unsigned int a0)
{
 return a0;
}


// Function: call_fake_branch at 0x106e8
unsigned int call_fake_branch()
{
 unsigned int v0; // r0

 v0 = param_fake_branch(10);
 return param_fake_branch(10);
}


// Function: param_opaque_predicate at 0x10704
unsigned int param_opaque_predicate(unsigned int a0)
{
 unsigned int v6; // r2
 unsigned int v7; // r3
 unsigned int v9; // r3
 unsigned int v10; // r1
 unsigned int flag6; // r3
 unsigned int v13; // r3
 unsigned int i; // [bp-0x20]
 unsigned int flag5; // [bp-0x1c]
 unsigned int flag4; // [bp-0x18]
 unsigned int flag3; // [bp-0x14]
 unsigned int result; // [bp-0x10]
 unsigned int v5; // [bp-0xc]

 v6 = a0 * a0 + a0 * 2 + 1;
 v7 = (a0 + 1) * (a0 + 1);
 if (v6 == v7)
 {
 v9 = 1;
 if (!armg_calculate_condition(18, v6, v7, 0))
 goto LABEL_1074a;
LABEL_10749:
 v9 = 0;
 }
 else
 {
 v9 = v7;
 if (armg_calculate_condition(18, v6, v9, 0))
 goto LABEL_10749;
LABEL_1074a:
 ;
 }
 flag4 = v9 & 255;
 i = a0;
 for (flag5 = a0 + 1; flag5; i = v5)
 {
 v5 = flag5;
 __aeabi_idivmod(i, flag5);
 flag5 = v10;
 }
 flag6 = i;
 if (flag6 == 1)
 {
 v13 = 1;
 if (!armg_calculate_condition(18, flag6, 1, 0))
 goto LABEL_107ae;
LABEL_107ad:
 v13 = 0;
 }
 else
 {
 v13 = flag6;
 if (armg_calculate_condition(18, v13, 1, 0))
 goto LABEL_107ad;
LABEL_107ae:
 ;
 }
 flag3 = v13 & 255;
 result = 1;
 if (flag4 && flag3 && result)
 return (a0 + 5) * 2;
 return a0 * 3 + 20;
}


// Function: call_opaque_predicate at 0x10814
unsigned int call_opaque_predicate()
{
 unsigned int v0; // r0

 v0 = param_opaque_predicate(5);
 return param_opaque_predicate(5);
}


// Function: param_instruction_substitution at 0x10830
int param_instruction_substitution(unsigned int a0)
{
 unsigned int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]

 v0 = a0 * 6;
 v1 = a0 >> 1;
 v2 = a0 & 15;
 v3 = a0 * 15;
 return v0 + v1 + v2 + v3;
}


// Function: call_instruction_substitution at 0x108c0
unsigned int call_instruction_substitution()
{
 unsigned int v0; // r0

 v0 = param_instruction_substitution(10);
 return param_instruction_substitution(10);
}


// Function: decrypt_string at 0x108dc
char * decrypt_string(char *a0, char *a1, unsigned int n, char a3)
{
 char *cur; // [bp-0xc]

 strncpy(a1, a0, n);
 a1[1 + n] = 0;
 for (cur = a1; *(cur); cur += 1)
 {
 *(cur) = a3 ^ *(cur);
 }
 return a1;
}


// Function: param_string_encryption at 0x10974
extern unsigned int __glibc___stack_chk_guard;
extern char encrypted_0;

int param_string_encryption()
{
 unsigned int len; // r0
 char v0[32]; // [bp-0x2c]
 unsigned int v1; // [bp-0xc]

 v1 = __glibc___stack_chk_guard;
 decrypt_string(0x22058, &v0, 32, 90);
 len = strlen(&v0);
 if (!(v1 ^ __glibc___stack_chk_guard))
 return len + (unsigned int)v0;
 __stack_chk_fail(); /* do not return */
}


// Function: call_string_encryption at 0x109ec
unsigned int call_string_encryption()
{
 unsigned int v0; // r0

 v0 = param_string_encryption();
 return param_string_encryption();
}


// Function: param_tail_call_optimized at 0x10a04
int param_tail_call_optimized(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r0

 if (0 < a0)
 {
 v0 = param_tail_call_optimized(a0 - 1, a1 + a0);
 return param_tail_call_optimized(a0 - 1, a1 + a0);
 }
 return a1;
}


// Function: call_tail_call_optimized at 0x10a58
unsigned int call_tail_call_optimized()
{
 unsigned int v0; // r0

 v0 = param_tail_call_optimized(1000, 0);
 return param_tail_call_optimized(1000, 0);
}


// Function: param_non_tail_call at 0x10a78
unsigned int param_non_tail_call(unsigned int a0)
{
 return (0 < a0 ? param_non_tail_call(a0 - 1) + a0 : 0);
}


// Function: call_non_tail_call at 0x10ac4
unsigned int call_non_tail_call()
{
 unsigned int v0; // r0

 v0 = param_non_tail_call(100);
 return param_non_tail_call(100);
}


// Function: param_vectorized_loop at 0x10ae0
unsigned int param_vectorized_loop(unsigned int a0, unsigned int a1)
{
 unsigned int v3; // r3
 unsigned int ptr; // r2
 unsigned int idx; // [bp-0x14]
 unsigned int v1; // [bp-0x10]
 unsigned int index; // [bp-0xc]

 for (idx = 0; idx < v3; idx += 1)
 {
 *((int *)(ptr + idx * 4)) = *((int *)(a0 + idx * 4)) + *((int *)(a1 + idx * 4));
 }
 v1 = 0;
 for (index = 0; index < v3; index += 1)
 {
 v1 += *((int *)(ptr + index * 4));
 }
 return v1;
}


// Function: call_vectorized_loop at 0x10bc8
extern unsigned int __glibc___stack_chk_guard;

unsigned int call_vectorized_loop()
{
 unsigned int v18; // r0
 unsigned int result; // [bp-0x6c]
 unsigned int v1; // [bp-0x68]
 unsigned int v2; // [bp-0x64]
 unsigned int v3; // [bp-0x60]
 unsigned int v4; // [bp-0x5c]
 unsigned int v5; // [bp-0x58]
 unsigned int v6; // [bp-0x54]
 unsigned int v7; // [bp-0x50]
 unsigned int v8; // [bp-0x4c]
 unsigned int v9; // [bp-0x48]
 unsigned int v10; // [bp-0x44]
 unsigned int v11; // [bp-0x40]
 unsigned int v12; // [bp-0x3c]
 unsigned int v13; // [bp-0x38]
 unsigned int v14; // [bp-0x34]
 unsigned int flag1; // [bp-0x30]
 char v16; // [bp-0x2c]
 unsigned int v17; // [bp-0xc]

 v17 = __glibc___stack_chk_guard;
 result = 1;
 v1 = 2;
 v2 = 3;
 v3 = 4;
 v4 = 5;
 v5 = 6;
 v6 = 7;
 v7 = 8;
 v8 = 8;
 v9 = 7;
 v10 = 6;
 v11 = 5;
 v12 = 4;
 v13 = 3;
 v14 = 2;
 flag1 = 1;
 memset(&v16, 0, 32);
 v18 = param_vectorized_loop(&result, &v8);
 if (!(v17 ^ __glibc___stack_chk_guard))
 return v18;
 __stack_chk_fail(); /* do not return */
}


// Function: lto_target_func at 0x10c7c
unsigned int lto_target_func(unsigned int a0)
{
 return (a0 + 5) * 2;
}


// Function: param_link_time_optimization at 0x10ca8
unsigned int param_link_time_optimization(unsigned int a0)
{
 unsigned int v0; // r0

 v0 = lto_target_func(a0);
 return lto_target_func(a0);
}


// Function: call_link_time_optimization at 0x10cd0
unsigned int call_link_time_optimization()
{
 unsigned int t; // r0

 t = param_link_time_optimization(5);
 return param_link_time_optimization(5);
}


// Function: div_zero_handler at 0x10cec
extern unsigned int div_zero_caught;
extern unsigned int jmp_buffer;

int div_zero_handler(unsigned int a0)
{
 unsigned int v2; // lr
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = a0;
 div_zero_caught = 1;
 longjmp((jmp_buf*)0x22068, 1); /* do not return */
}


// Function: param_division_by_zero at 0x10d1c
extern unsigned int jmp_buffer;

unsigned int param_division_by_zero(unsigned int a0)
{
 signal(8, div_zero_handler);
 return (_setjmp(0x22068) ? 4294967295 : __aeabi_idiv(10, a0));
}


// Function: call_division_by_zero at 0x10d80
int call_division_by_zero()
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v0 = param_division_by_zero(5);
 v1 = param_division_by_zero(0);
 signal(8, NULL);
 return v0 + v1;
}


// Function: segv_handler at 0x10dc8
extern unsigned int segv_buffer;
extern unsigned int segv_caught;

int segv_handler(unsigned int a0)
{
 unsigned int v2; // lr
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = a0;
 segv_caught = 1;
 longjmp((jmp_buf*)0x221f8, 1); /* do not return */
}


// Function: param_null_pointer_deref at 0x10df8
extern unsigned int segv_buffer;

unsigned int param_null_pointer_deref(unsigned int *a0)
{
 signal(11, segv_handler);
 return (_setjmp(0x221f8) ? 4294967295 : *(a0));
}


// Function: call_null_pointer_deref at 0x10e54
extern unsigned int __glibc___stack_chk_guard;

int call_null_pointer_deref()
{
 unsigned int v0[1]; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]

 v3 = __glibc___stack_chk_guard;
 v0[0] = 42;
 v1 = param_null_pointer_deref(&v0);
 v2 = param_null_pointer_deref(NULL);
 signal(11, NULL);
 if (!(v3 ^ __glibc___stack_chk_guard))
 return v1 + v2;
 __stack_chk_fail(); /* do not return */
}


// Function: param_buffer_overflow_stack at 0x10ed8
extern unsigned int __glibc___stack_chk_guard;

unsigned int param_buffer_overflow_stack(unsigned int a0)
{
 unsigned int i; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 unsigned long v3; // [bp-0x14]
 unsigned int v2; // [bp-0xc]

 v2 = __glibc___stack_chk_guard;
 v1 = 305419896;
 for (i = 0; i <= 16; i += 1)
 {
 *((char *)&v3 + i) = 65;
 }
 if (!(v2 ^ __glibc___stack_chk_guard))
 return (v1 != 305419896 ? 4294967295 : a0);
 __stack_chk_fail(); /* do not return */
}


// Function: param_buffer_overflow_heap at 0x10f84
unsigned int param_buffer_overflow_heap(unsigned int a0)
{
 unsigned int i; // [bp-0x10]
 void* ptr; // [bp-0xc]

 ptr = malloc(16);
 if (!ptr)
 return 4294967294;
 for (i = 0; i <= 32; i += 1)
 {
 *((char *)ptr + i) = 66;
 }
 free(ptr);
 return a0;
}


// Function: call_buffer_overflow at 0x11008
int call_buffer_overflow()
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v0 = param_buffer_overflow_stack(10);
 v1 = param_buffer_overflow_heap(20);
 return v0 + v1;
}


// Function: param_integer_overflow at 0x11044
unsigned int param_integer_overflow(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0xc]

 v0 = a0 + a1;
 v1 = a0 + a1;
 if (a0 > 0 && a1 > 0 && 0 > v0)
 return 4294967295;
 if (0 > a0 && 0 > a1 && v0 > 0)
 return 4294967294;
 return v1;
}


// Function: call_integer_overflow at 0x110f4
int call_integer_overflow()
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v0 = param_integer_overflow(0x3b9aca00, 0x3b9aca00);
 v1 = param_integer_overflow(4294967295, 1);
 return v0 + v1;
}


// Function: param_undefined_behavior at 0x1113c
unsigned int param_undefined_behavior(unsigned int a0)
{
 return a0 * 2;
}


// Function: call_undefined_behavior at 0x1116c
unsigned int call_undefined_behavior()
{
 unsigned int v0; // [bp-0xc]

 v0 = param_undefined_behavior(5);
 return v0;
}


// Function: param_implementation_defined at 0x11194
int param_implementation_defined()
{
 char v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]
 unsigned int v2; // [bp-0xc]

 v1 = 0;
 v1 += 2;
 v2 = 0xfffffff8;
 v1 += v2 >> 1;
 v0 |= 7;
 v0 |= 248;
 v1 += (v0 & 7) + (v0 >> 3);
 v1 += 8;
 return v1;
}


// Function: call_implementation_defined at 0x1125c
unsigned int call_implementation_defined()
{
 unsigned int v0; // r0

 v0 = param_implementation_defined();
 return param_implementation_defined();
}


// Function: test_obf_opt_edge at 0x11274
extern char g_1172c;
extern char g_1175c;
extern char g_11778;
extern char g_11794;
extern char g_117b4;
extern char g_117d0;
extern char g_117fc;
extern char g_11824;
extern char g_1184c;
extern char g_1186c;
extern char g_11888;
extern char g_118a8;
extern char g_118c8;
extern char g_118fc;
extern char g_1191c;

int test_obf_opt_edge()
{
 unsigned int v13; // r0
 unsigned int v14; // r0

 puts(0x1172c);
 printf(0x1175c, call_fake_branch());
 printf(0x11778, call_opaque_predicate());
 printf(0x11794, call_instruction_substitution());
 printf(0x117b4, call_string_encryption());
 printf(0x117d0, call_tail_call_optimized());
 printf(0x117fc, call_non_tail_call());
 printf(0x11824, call_vectorized_loop());
 printf(0x1184c, call_link_time_optimization());
 printf(0x1186c, call_division_by_zero());
 printf(0x11888, call_null_pointer_deref());
 printf(0x118a8, call_buffer_overflow());
 printf(0x118c8, call_integer_overflow());
 printf(0x118fc, call_undefined_behavior());
 v13 = call_implementation_defined();
 v14 = printf(0x1191c, v13);
 return printf(0x1191c, v13);
}


// Function: main at 0x113e0
unsigned int main()
{
 test_obf_opt_edge();
 return 0;
}



/* CRT stub function __aeabi_idiv removed by preprocessor */




/* CRT stub function _divsi3_skip_div0_test removed by preprocessor */




/* CRT stub function __aeabi_idivmod removed by preprocessor */



// Function: __aeabi_idiv0 at 0x11638
int __aeabi_idiv0(unsigned int a0, unsigned int a1)
{
 unsigned int v2; // lr
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = a1;
}



/* CRT stub function _fini removed by preprocessor */



// Function: sub_1164c at 0x1164c
int sub_1164c(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 return a0;
}

