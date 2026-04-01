// Angr Decompilation of 7_gcc_O3_no_g
// Platform: ARMEL


/* CRT stub function _init removed by preprocessor */

#include <stddef.h>
#include <signal.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#ifndef NULL
#define NULL ((void*)0)
#endif

// External variable definitions
extern unsigned int div_zero_caught;
extern unsigned int segv_caught;
unsigned int g_22008 = 0;

// Global variable definitions for linker
unsigned int div_zero_caught = 0;
unsigned int segv_caught = 0;

// Function definitions for undefined references
unsigned int Clz(unsigned int x)
{
    // Count leading zeros
    unsigned int count = 0;
    if (x == 0) return 32;
    if ((x & 0xFFFF0000) == 0) { count += 16; x <<= 16; }
    if ((x & 0xFF000000) == 0) { count += 8; x <<= 8; }
    if ((x & 0xF0000000) == 0) { count += 4; x <<= 4; }
    if ((x & 0xC0000000) == 0) { count += 2; x <<= 2; }
    if ((x & 0x80000000) == 0) { count += 1; }
    return count;
}

unsigned int armg_calculate_condition(unsigned int op, unsigned int a, unsigned int b, unsigned int c)
{
    // ARM condition calculation - returns based on condition code
    // This is a stub implementation
    switch (op)
    {
        case 2:  // EQ/NE type
            return (a == b) ? 1 : 0;
        case 18: // Greater than
            return (a > b) ? 1 : 0;
        case 194: // Signed comparison
            return ((int)a > (int)b) ? 1 : 0;
        case 210:
            return ((int)a > 0) ? 1 : 0;
        default:
            return 0;
    }
}

// Function declarations for undefined references
extern unsigned int armg_calculate_condition(unsigned int, unsigned int, unsigned int, unsigned int);
extern unsigned int Clz(unsigned int);


// Function: sub_104f0 at 0x104f0
extern unsigned int sub_1070c(void);
extern void test_obf_opt_edge(void);

int sub_104f0()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 ((void (*)(void))g_22008)();
 return 0;
}


// Function: main at 0x105ac
unsigned int main()
{
 test_obf_opt_edge();
 return 0;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_105f4 at 0x105f4
void sub_105f4()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: div_zero_handler at 0x106b4
extern unsigned int div_zero_caught;
extern unsigned int jmp_buffer;

int div_zero_handler()
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = v3;
 div_zero_caught = 1;
 __longjmp_chk(0x22070, 1); /* do not return */
}


// Function: segv_handler at 0x106cc
extern unsigned int segv_buffer;
extern unsigned int segv_caught;

int segv_handler()
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = v3;
 segv_caught = 1;
 __longjmp_chk(0x22200, 1); /* do not return */
}


// Function: param_division_by_zero_constprop_0 at 0x106e8
extern unsigned int jmp_buffer;

int param_division_by_zero_constprop_0()
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 unsigned int v4; // r0
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = v3;
 signal(8, div_zero_handler);
 if (_setjmp(0x22070))
 {
 v4 = sub_1070c();
 return sub_1070c();
 }
}


// Function: sub_1070c at 0x1070c
unsigned int sub_1070c(void)
{
 return 4294967295;
}


// Function: param_division_by_zero_constprop_1 at 0x1071c
extern unsigned int jmp_buffer;

unsigned int param_division_by_zero_constprop_1()
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 unsigned int result; // r0
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = v3;
 signal(8, div_zero_handler);
 result = _setjmp(0x22070);
 if (result)
 {
 if (!armg_calculate_condition(2, result, 0, 0))
 return 4294967295;
 else
 ;
 }
 else
 {
 if (!armg_calculate_condition(2, result, 0, 0))
 return 0;
 }
 return 2;
}


// Function: param_fake_branch at 0x1074c
int param_fake_branch()
{
 unsigned int v0; // r0

 return v0;
}


// Function: call_fake_branch at 0x10750
unsigned int call_fake_branch()
{
 return 10;
}


// Function: param_opaque_predicate at 0x10758
int param_opaque_predicate(unsigned int a0)
{
 unsigned int v0; // r1
 unsigned int v1; // r7
 unsigned int result; // r1
 unsigned int flag2; // r4
 unsigned int v4; // r1
 unsigned int flag1; // r3

 v0 = a0 + 1;
 v1 = a0 * a0 + a0 * 2 + 1 - v0 * v0;
 result = v0;
 if (!result)
 return a0 * 3 + 20;
 do
 {
 result = __aeabi_idivmod(result, flag2);
 } while (result);
 if (flag2 != 1)
 {
 flag1 = 0;
 if (!armg_calculate_condition(2, flag2, 1, 0))
 goto LABEL_107aa;
LABEL_107a9:
 flag1 = (!v1 ? 32 : Clz(v1)) >> 5 & 1;
 }
 else
 {
 if (armg_calculate_condition(2, flag2, 1, 0))
 goto LABEL_107a9;
LABEL_107aa:
 (void)0;
 }
 if (flag1)
 return a0 * 2 + 10;
 return a0 * 3 + 20;
}


// Function: call_opaque_predicate at 0x107c8
unsigned int call_opaque_predicate()
{
 unsigned int flag1; // r0
 unsigned int v4; // lr
 unsigned int v5; // r4
 unsigned int result; // r1
 unsigned int v7; // r1
 unsigned int v8; // r1
 unsigned int v10; // r0
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 flag1 = 5;
 v1 = v4;
 v0 = v5;
 result = 6;
 do
 {
 v7 = result;
 __aeabi_idivmod(flag1, v7);
 flag1 = v7;
 result = v8;
 } while (result);
 if (flag1 == 1)
 {
 v10 = 20;
 if (!armg_calculate_condition(18, flag1, 1, 0))
 return v10;
 }
 else
 {
 v10 = flag1;
 if (!armg_calculate_condition(18, v10, 1, 0))
 return v10;
 }
 return 35;
}


// Function: param_instruction_substitution at 0x107f8
int param_instruction_substitution(unsigned int a0)
{
 return a0 * 6 + (a0 >> 1) + (a0 & 15) + a0 * 15;
}


// Function: call_instruction_substitution at 0x10818
unsigned int call_instruction_substitution()
{
 return 225;
}


// Function: decrypt_string at 0x10820
char* decrypt_string(char *a0, char *a1, unsigned int n, char a3)
{
 char *p; // r5
 unsigned int result; // r2
 char *ptr; // r12
 char buf[256];

 p = buf;
 strncpy(p, a0, n);
 p[n] = 0;
 result = p[0];
 if (!result)
 return p;
 ptr = p;
 do
 {
 ptr[0] = (char)result ^ a3;
 result = ptr[1];
 ptr = &ptr[1];
 } while (result);
 return p;
}


// Function: param_string_encryption at 0x10874
extern unsigned int __glibc___stack_chk_guard;
extern char encrypted_0;

int param_string_encryption()
{
 unsigned int result; // r4
 char *cur; // r3
 unsigned int len; // r0
 char v0[31]; // [bp-0x2c]
 char flag1; // [bp-0xd]
 unsigned int v2; // [bp-0xc]

 v2 = __glibc___stack_chk_guard;
 strncpy(&v0, 0x22054, 31);
 result = (unsigned int)v0;
 flag1 = 0;
 if (result)
 {
 cur = &v0;
 do
 {
 cur[0] = (char)result ^ 90;
 result = cur[1];
 cur = &cur[1];
 } while (result);
 result = (unsigned int)v0;
 }
 len = strlen(&v0);
 if ((v2 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return result + len;
}


// Function: call_string_encryption at 0x10904
extern unsigned int __glibc___stack_chk_guard;
extern char encrypted_0;

int call_string_encryption()
{
 unsigned int result; // r4
 char *cur; // r3
 unsigned int len; // r0
 char v0[31]; // [bp-0x2c]
 char flag1; // [bp-0xd]
 unsigned int v2; // [bp-0xc]

 v2 = __glibc___stack_chk_guard;
 strncpy(&v0, 0x22054, 31);
 result = (unsigned int)v0;
 flag1 = 0;
 if (result)
 {
 cur = &v0;
 do
 {
 cur[0] = (char)result ^ 90;
 result = cur[1];
 cur = &cur[1];
 } while (result);
 result = (unsigned int)v0;
 }
 len = strlen(&v0);
 if ((v2 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return result + len;
}


// Function: param_tail_call_optimized at 0x10994
unsigned int param_tail_call_optimized(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r0
 unsigned int result; // r3
 unsigned int v3; // r0

 if (a0 > 0)
 goto LABEL_109a0;
 return a1;
 do
 {
LABEL_109a0:
 result = a0;
 v3 = a1 + result;
 a0 = result - 1;
 a1 = v3;
 } while (result != 1);
 return v0 + result;
}


// Function: call_tail_call_optimized at 0x109b4
unsigned int call_tail_call_optimized()
{
 return 500500;
}


// Function: param_non_tail_call at 0x109c0
unsigned int param_non_tail_call(unsigned int a0)
{
 unsigned int v0; // r0
 unsigned int v1; // r0
 unsigned int result; // r3
 unsigned int v4; // r0

 v0 = 0;
 if (a0 > 0)
 goto LABEL_109cc;
 return 0;
 do
 {
LABEL_109cc:
 result = a0;
 v4 = v0 + result;
 a0 = result - 1;
 v0 = v4;
 } while (result != 1);
 return v1 + result;
}


// Function: call_non_tail_call at 0x109e0
unsigned int call_non_tail_call()
{
 return 5050;
}


// Function: param_vectorized_loop at 0x109ec
unsigned int param_vectorized_loop(unsigned int *a0, unsigned int *a1, unsigned int *a2, unsigned int a3)
{
 unsigned int *v0; // r3
 unsigned int *v1; // r0
 unsigned int v10; // r0
 unsigned int *pos; // r1
 unsigned int *ptr; // r2
 unsigned int *index; // r0
 unsigned int *v5; // r0
 unsigned int *v6; // r1
 unsigned int *v7; // r2
 unsigned int v8; // r0
 unsigned int v9; // r0
 unsigned int *vvar_69; // r4
 unsigned int *vvar_52; // r5
 unsigned int *vvar_14; // r6

 if (a3 <= 0)
 return 0;
 v0 = a2 + 1;
 vvar_69 = v0;
 v1 = a0 + 1;
 pos = a1 + 1;
 ptr = v0;
 index = v1;
 do
 {
 v5 = index + 1;
 v6 = pos + 1;
 v7 = ptr + 1;
 ptr[1] = index[1] + pos[1];
 ptr = v7;
 index = v5;
 pos = v6;
 } while (index != &v1[a3]);
 v8 = 0;
 do
 {
 v9 = v8;
 vvar_52 = vvar_69 + 4;
 v10 = v9 + *((int *)(vvar_69 + 4));
 vvar_69 = vvar_52;
 v8 = v10;
 } while (&v0[a3] != vvar_69);
 return v9 + *((int *)(vvar_14 + 4));
}


// Function: call_vectorized_loop at 0x10a50
unsigned int call_vectorized_loop()
{
 return 72;
}


// Function: param_link_time_optimization at 0x10a58
unsigned int param_link_time_optimization(unsigned int a0)
{
 return (a0 + 5) * 2;
}


// Function: call_link_time_optimization at 0x10a64
unsigned int call_link_time_optimization()
{
 return 20;
}


// Function: param_division_by_zero at 0x10a6c
extern unsigned int jmp_buffer;

unsigned int param_division_by_zero(unsigned int a0)
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 signal(8, div_zero_handler);
 return (_setjmp(0x22070) ? 4294967295 : __aeabi_idiv(10, a0));
}


// Function: call_division_by_zero at 0x10abc
int call_division_by_zero()
{
 unsigned int v0; // r0
 unsigned int v1; // r0

 v0 = param_division_by_zero_constprop_1();
 v1 = param_division_by_zero_constprop_0();
 signal(8, NULL);
 return v0 + v1;
}


// Function: param_null_pointer_deref at 0x10ae4

int param_null_pointer_deref(unsigned int *a0)
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 signal(11, segv_handler);
 return *(a0);
}


// Function: call_null_pointer_deref at 0x10b28
extern unsigned int __glibc___stack_chk_guard;

int call_null_pointer_deref()
{
 unsigned int v2; // r0
 unsigned int v3; // r0
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]

 v1 = __glibc___stack_chk_guard;
 v0 = 42;
 v2 = param_null_pointer_deref(&v0);
 v3 = param_null_pointer_deref(NULL);
 signal(11, NULL);
 if ((v1 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v2 + v3;
}


// Function: param_buffer_overflow_stack at 0x10b98
int param_buffer_overflow_stack()
{
 unsigned int v0; // r0

 return v0;
}


// Function: param_buffer_overflow_heap at 0x10b9c
unsigned int param_buffer_overflow_heap(unsigned int a0)
{
 void* ptr; // r0

 ptr = malloc(16);
 if (!ptr)
 return 4294967294;
 free(ptr);
 return a0;
}


// Function: call_buffer_overflow at 0x10bc8
unsigned int call_buffer_overflow()
{
 void* ptr; // r0

 ptr = malloc(16);
 if (!ptr)
 return 8;
 free(ptr);
 return 30;
}


// Function: param_integer_overflow at 0x10bf0
unsigned int param_integer_overflow(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v0; // cc_dep1
 unsigned int v1; // cc_dep2
 unsigned int v12; // r0
 unsigned int v2; // cc_ndep
 unsigned int v3; // cc_dep1
 unsigned int v4; // cc_dep2
 unsigned int v5; // cc_ndep
 unsigned int v6; // cc_dep1
 unsigned int v7; // cc_dep2
 unsigned int v8; // cc_ndep

 if (0 < a0)
 {
 v3 = (armg_calculate_condition(194, v0, v1, v2) ? a1 : v0);
 v4 = (armg_calculate_condition(194, v0, v1, v2) ? 0 : v1);
 v5 = (armg_calculate_condition(194, v0, v1, v2) ? 0 : v2);
 }
 else
 {
 v3 = (armg_calculate_condition(194, v6, v7, v8) ? a1 : v6);
 v4 = (armg_calculate_condition(194, v6, v7, v8) ? 0 : v7);
 v5 = (armg_calculate_condition(194, v6, v7, v8) ? 0 : v8);
 }
 v12 = a0 + a1;
 if (!((char)armg_calculate_condition(210, v3, v4, v5)))
 return v12 | v12 >> 31;
 if (v12 <= 0)
 {
 a2 = 0;
 if (!armg_calculate_condition(194, v12, 0, 0))
 goto LABEL_10c16;
LABEL_10c15:
 a2 = 1;
 }
 else
 {
 if (armg_calculate_condition(194, v12, 0, 0))
 goto LABEL_10c15;
LABEL_10c16:
 (void)0;
 }
 if (!(a2 & (a1 & a0) >> 31))
 return v12;
 return 4294967294;
}


// Function: call_integer_overflow at 0x10c28
unsigned int call_integer_overflow()
{
 return 0x77359400;
}


// Function: param_undefined_behavior at 0x10c34
unsigned int param_undefined_behavior(unsigned int a0)
{
 return a0 * 2;
}


// Function: call_undefined_behavior at 0x10c3c
unsigned int call_undefined_behavior()
{
 return 10;
}


// Function: param_implementation_defined at 0x10c44
unsigned int param_implementation_defined()
{
 return 44;
}


// Function: call_implementation_defined at 0x10c4c
unsigned int call_implementation_defined()
{
 return 44;
}


// Function: test_obf_opt_edge at 0x10c54
extern unsigned int __glibc___stack_chk_guard;
extern char encrypted_0;
extern char g_11188;
extern char g_111b8;
extern char g_111d4;
extern char g_111f0;
extern char g_11210;
extern char g_1122c;
extern char g_11258;
extern char g_11280;
extern char g_112a8;
extern char g_112c8;
extern char g_112e4;
extern char g_11304;
extern char g_11324;
extern char g_11358;
extern char g_11378;

void test_obf_opt_edge()
{
 unsigned int v4; // r5
 unsigned int flag2; // r0
 unsigned int v14; // r0
 unsigned int v15; // r0
 void* ptr; // r0
 unsigned int v17; // r2
 unsigned int v18; // r0
 unsigned int flag1; // r1
 unsigned int v7; // r2
 unsigned int result; // r4
 unsigned int v12; // r0
 unsigned int v13; // r0
 unsigned int v0; // [bp-0x38]
 char v1[1][15][2]; // [bp-0x34]
 char v2; // [bp-0x15]
 unsigned int v3; // [bp-0x14]
 char *cur; // r3

 v3 = __glibc___stack_chk_guard;
 puts(0x11188);
 __printf_chk(1, 0x111b8, 10);
 v4 = 6;
 flag2 = 5;
 do
 {
 __aeabi_idivmod(flag2, v4);
 flag2 = v4;
 v4 = flag1;
 } while (flag1);
 if (flag2 == 1)
 {
 v7 = 20;
 if (!armg_calculate_condition(18, flag2, 1, 0))
 goto LABEL_10caa;
LABEL_10ca9:
 v7 = 35;
 }
 else
 {
 if (armg_calculate_condition(18, flag2, 1, 0))
 goto LABEL_10ca9;
LABEL_10caa:
 (void)0;
 }
 __printf_chk(1, 0x111d4, v7);
 __printf_chk(1, 0x111f0, 225);
 strncpy(&v1, 0x22054, 31);
 result = (unsigned int)v1;
 v2 = v4;
 if (result)
 {
 cur = &v1;
 do
 {
 cur[0] = (char)result ^ 90;
 result = cur[1];
 cur = &cur[1];
 } while (result);
 result = (unsigned int)v1;
 }
 __printf_chk(1, 0x11210, result + strlen(&v1));
 __printf_chk(1, 0x1122c, 500500);
 __printf_chk(1, 0x11258, 5050);
 __printf_chk(1, 0x11280, call_vectorized_loop());
 __printf_chk(1, 0x112a8, 20);
 v12 = param_division_by_zero_constprop_1();
 v13 = param_division_by_zero_constprop_0();
 signal(8, NULL);
 __printf_chk(1, 0x112c8, v12 + v13);
 v0 = 42;
 v14 = param_null_pointer_deref(&v0);
 v15 = param_null_pointer_deref(NULL);
 signal(11, NULL);
 __printf_chk(1, 0x112e4, v14 + v15);
 ptr = malloc(16);
 if (ptr)
 {
 free(ptr);
 v17 = 30;
 }
 else
 {
 v17 = 8;
 }
 __printf_chk(1, 0x11304, v17);
 __printf_chk(1, 0x11324, 0x77359400);
 __printf_chk(1, 0x11358, 10);
 if ((v3 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 v18 = __printf_chk(1, 0x11378, 44);
 return __printf_chk(1, 0x11378, 44);
}



/* CRT stub function __aeabi_idiv removed by preprocessor */




/* CRT stub function _divsi3_skip_div0_test removed by preprocessor */




/* CRT stub function __aeabi_idivmod removed by preprocessor */



// Function: __aeabi_idiv0 at 0x110dc
int __aeabi_idiv0(unsigned int a0, unsigned int a1)
{
 unsigned int v2; // lr
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = a1;
}



/* CRT stub function _fini removed by preprocessor */



// Function: sub_110f0 at 0x110f0
int sub_110f0(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 return a0;
}

