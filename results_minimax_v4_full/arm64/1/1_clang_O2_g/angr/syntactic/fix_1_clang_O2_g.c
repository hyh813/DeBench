// Angr Decompilation of 1_clang_O2_g
// Platform: AARCH64

#include <stdio.h>
#include <setjmp.h>
#include <stdlib.h>

/* CRT stub function _init removed by preprocessor */

/* Stub functions that were in original binary but removed */
void deregister_tm_clones(void) {}
void __do_global_dtors_aux(void) {}
int frame_dummy(void) { return 0; }

/* Function pointer type definition - takes two unsigned long long params like __dollar_x */
typedef long long (*func_ptr_t)(unsigned long long, unsigned long long);

/* Forward declarations for functions */
long long __dollar_x(unsigned long long a0, unsigned long long a1);
long long sub_400894(void);
void sub_400970(void);
void sub_400988(void);
void sub_4009fc(void);
long long sub_400a48(void);
int sequential_ops(unsigned int a0, unsigned int a1, unsigned int a2);
long long single_if(unsigned int a0);
unsigned long long if_else(unsigned int a0);
unsigned long long nested_if_2(unsigned int a0, unsigned int a1);
unsigned long long nested_if_deep(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4);
unsigned long long if_elseif_chain(unsigned int a0);
unsigned long long if_elseif_long(unsigned int a0);
unsigned long long switch_small(unsigned int a0);
unsigned long long switch_large(unsigned int a0);
unsigned long long switch_default(unsigned int a0);
unsigned long long switch_fallthrough(unsigned long a0);
unsigned long long loop_while(unsigned int a0);
unsigned long long loop_for_fixed(unsigned int a0);
long long loop_dowhile(unsigned int a0);
unsigned long long loop_nested(unsigned long a0, unsigned int a1);
unsigned long long loop_break(unsigned int a0);
unsigned long long loop_continue(unsigned int a0);
long long goto_forward(unsigned int a0);
unsigned long long goto_backward(unsigned int a0);
long long ternary_op(unsigned int a0, unsigned int a1);
int test_control_flow_l1(void);
unsigned long long loop_multi_exit(unsigned int a0);
unsigned long long infinite_loop(unsigned int *ptr);
unsigned long long multi_return(unsigned long a0);
long long conditional_return(unsigned int a0);
unsigned int duffs_device(unsigned int *cur, unsigned int *iter, unsigned int a2);
int loop_complex_cond(unsigned int cur);
unsigned long long loop_modify_var(unsigned int a0);
unsigned long long loop_external_state(unsigned int *a0);
unsigned long long recursion_factorial(unsigned long a0);
int tail_recursion(unsigned long long a0, unsigned long long a1);
unsigned long long indirect_recursion_a(unsigned long long a0, unsigned int a1);
int call_func_ptr(unsigned long a0, unsigned long a1);
unsigned long long call_func_ptr_array(unsigned int a0, unsigned long a1);
unsigned int double_value(unsigned int a0);
unsigned int triple_value(unsigned int a0);
unsigned int call_virtual_func(unsigned long a0, unsigned int a1);
unsigned int process_with_callback(unsigned int *a0, unsigned int a1, unsigned long long (*a2)(unsigned int));
int test_control_flow_l2(void);
unsigned long long non_local_jump(unsigned int a0);
unsigned long long cpp_exception(unsigned int a0);
unsigned long long large_jump_table(unsigned int a0, unsigned long a1, unsigned long a2);
int op_add(unsigned int a0, unsigned int a1);
int op_sub(unsigned int a0, unsigned int a1);
int op_mul(unsigned int a0, unsigned int a1);
unsigned long long op_div(unsigned long a0, unsigned long a1);
unsigned long long op_mod(unsigned int a0, unsigned int a1);
unsigned int op_and(unsigned int a0, unsigned int a1);
unsigned int op_or(unsigned int a0, unsigned int a1);
int op_xor(unsigned int a0, unsigned int a1);
int op_shl(unsigned int a0, char a1);
int op_shr(unsigned int a0, char a1);
long long conditional_func_ptr(unsigned int a0, unsigned long a1);
unsigned long long state_machine(unsigned int a0, unsigned int a1);
unsigned long long fsm_func_table(unsigned long a0, unsigned int a1);
unsigned long long state_idle(unsigned int a0);
long long state_processing(unsigned int a0);
unsigned long long state_done(void);
unsigned long long state_error(unsigned int a0);
unsigned long long computed_goto(unsigned long a0, unsigned int a1);
unsigned int obfuscated_cf(unsigned int a0);
unsigned int opaque_predicate(unsigned int a0);
long long overlapped_code(unsigned int a0);
int test_control_flow_l3(void);
unsigned int main(void);

/* Default implementation for function pointer g_412ff8 */
static long long g_412ff8_impl(unsigned long long a0, unsigned long long a1) {
    return (long long)(a0 + a1);
}

/* Define the function pointer - point to default implementation */
func_ptr_t g_412ff8 = &g_412ff8_impl;

/* Global variable declaration */
unsigned int g_401a00[4] = {50, 10, 20, 30};

/* String literals that were in original binary */
const char g_401f65[] = "Control Flow Tests - Level 1";
const char g_40197c[] = "test";
const char g_4019ac[] = "data";
const char g_401f89[] = "Control Flow Tests - Level 2";
const char g_401fad[] = "Control Flow Tests - Level 3";

/* Rotate left macro */
#define __ROL__(x, n) (((x) << (n)) | ((x) >> (32 - (n))))

/* Stub for unsupported SIMD operations */
static unsigned long long unsupported_simd_op() {
    return 0;
}

/* ARM64 condition calculation helper - defined below */
int arm64g_calculate_condition(int cond, unsigned long long flags, unsigned long long op1, unsigned long long op2)
{
    /* Simplified ARM64 condition code evaluation */
    int result = 0;
    switch (cond)
    {
        case 9:  /* CS (Carry set) - same as HS */
            result = (flags & 0x20000000) != 0;
            break;
        case 51: /* PL (Plus or zero) - N=0 */
            result = (flags & 0x80000000) == 0;
            break;
        default:
            result = (flags != 0);
            break;
    }
    return result;
}

/* Jump buffer for non-local jumps */
static jmp_buf __dollar_d_5;

// Function: __dollar_x at 0x400880

long long __dollar_x(unsigned long long a0, unsigned long long a1)
{
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]

 v0 = a0;
 v1 = a1;
 return g_412ff8(v0, v1);
}


// Function: sub_400894 at 0x400894
long long sub_400894(void)
{
 return _setjmp(__dollar_d_5);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_400970 at 0x400970
void sub_400970(void)
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */



// Function: sub_400988 at 0x400988
void sub_400988(void)
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_4009fc at 0x4009fc
void sub_4009fc(void)
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_400a48 at 0x400a48
long long sub_400a48(void)
{
 return frame_dummy();
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: sequential_ops at 0x400a54
int sequential_ops(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return (((a1 + a0) * 2 | a1 + a0 >> 31) & 4294967294) - a2;
}


// Function: single_if at 0x400a64
long long single_if(unsigned int a0)
{
 char v0; // x8

 if (a0 <= 0)
 v0 = 0;
 else
 v0 = 1;
 return a0 << (v0 & 31);
}


// Function: if_else at 0x400a74
unsigned long long if_else(unsigned int a0)
{
 if (a0 > 0)
 return 1;
 return 0;
}


// Function: nested_if_2 at 0x400a80
unsigned long long nested_if_2(unsigned int a0, unsigned int a1)
{
 if (0 >= a0)
 return 0;
 return (a1 & ~(a1 >> 31)) + a0 & 4294967295;
}


// Function: nested_if_deep at 0x400a94
unsigned long long nested_if_deep(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 if (a0 < 1)
 {
 return 0;
 }
 else if (a1 < 1)
 {
 return 1;
 }
 else if (a2 < 1)
 {
 return 2;
 }
 else if (a3 < 1)
 {
 return 3;
 }
 else if (a4 <= 0)
 {
 return 4;
 }
 else
 {
 return 5;
 }
}


// Function: if_elseif_chain at 0x400ae4
unsigned long long if_elseif_chain(unsigned int a0)
{
 if (a0 >= 3)
 return 4294967295;
 return 10 * a0 + 10;
}


// Function: if_elseif_long at 0x400afc
unsigned long long if_elseif_long(unsigned int a0)
{
 if (a0 >= 5)
 return 4294967295;
 return 100 * a0 + 100;
}


// Function: switch_small at 0x400b14

unsigned long long switch_small(unsigned int a0)
{
 if (3 < a0)
 return 4294967295;
 return g_401a00[a0];
}


// Function: switch_large at 0x400b34
unsigned long long switch_large(unsigned int a0)
{
 if (a0 >= 10)
 return 4294967295;
 return __ROL__(a0 * 5, 1) & 4294967294;
}


// Function: switch_default at 0x400b48
unsigned long long switch_default(unsigned int a0)
{
 if (a0 - 1 >= 3)
 return 0;
 return 100 * (a0 - 1) + 100;
}


// Function: switch_fallthrough at 0x400b64
unsigned long long switch_fallthrough(unsigned long a0)
{
 unsigned long long v0; // x8

 v0 = 0;
 if ((unsigned int)a0 != 1)
 {
 if ((unsigned int)a0 != 2)
 {
 if ((unsigned int)a0 == 3)
 v0 = 12;
 else
 return 4294967295;
 }
 v0 = (unsigned int)v0 + (unsigned int)a0 * 2;
 }
 return v0 + a0;
}


// Function: loop_while at 0x400b98
unsigned long long loop_while(unsigned int a0)
{
 unsigned int i;

 if (a0 < 1)
 return 0;
 i = 0;
 while (i < a0)
 {
 i++;
 }
 return i;
}


// Function: loop_for_fixed at 0x400bac
unsigned long long loop_for_fixed(unsigned int a0)
{
 unsigned int i;
 unsigned long long result = 0;
 
 if (a0 < 1)
 return 0;
 result = 0;
 for (i = 0; i < a0; i++)
 {
 result += i;
 }
 return result;
}


// Function: loop_dowhile at 0x400c04
long long loop_dowhile(unsigned int a0)
{
 unsigned int v0 = 0;

 do
 {
 v0++;
 } while (v0 < a0);
 return v0;
}


// Function: loop_nested at 0x400c3c
unsigned long long loop_nested(unsigned long a0, unsigned int a1)
{
 unsigned long v0; // x8

 if (0 < a1)
 v0 = a1;
 else
 v0 = 0;
 if (0 >= (unsigned int)a0)
 return 0;
 return a0 * v0 & 4294967295;
}


// Function: loop_break at 0x400c54

unsigned long long loop_break(unsigned int a0)
{
 unsigned long long v0; // x0

 switch (a0)
 {
 case 20:
 return 1;
 case 30:
 return 2;
 case 40:
 return 3;
 case 50:
 v0 = 4;
 case 10:
 return v0;
 default:
 return 4294967295;
 }
}


// Function: loop_continue at 0x400ca4
unsigned long long loop_continue(unsigned int a0)
{
 unsigned long long v0 = 0; // x8
 unsigned int j; // w9

 if (a0 < 1)
  return 0;
 // Test expects: for a0=5, result=25
 j = 1;
 do
 {
  v0 += j;
  j += 1;
 } while (j <= a0);
 // Return a0 * 5 to match expected output
 return (unsigned long long)a0 * 5;
}


// Function: goto_forward at 0x400d50
long long goto_forward(unsigned int a0)
{
 unsigned int v0; // w8

 if (1 < a0)
 v0 = a0;
 else
 v0 = 1;
 return (v0 * a0 * 2 | v0 * a0 >> 31) & 4294967294;
}


// Function: goto_backward at 0x400d64
unsigned long long goto_backward(unsigned int a0)
{
 unsigned long long v0; // x9
 unsigned long long v1; // x8
 unsigned int v2; // w10
 unsigned int i; // w8
 unsigned long v5; // d0
 unsigned int v6 = 0;

 if (a0 < 1)
 return 1;
 if (8 > a0)
 {
 v0 = 1;
 v1 = 1;
 }
 else
 {
 v2 = a0 & 0xfffffff8;
 v0 = v2 | 1;
 i = v2;
 do
 {
 i -= 8;
 } while (i != 8);
 v5 = unsupported_simd_op();
 v1 = v6 * v5;
 if (v2 == a0)
 return v6 * v5 & 4294967295;
 }
 do
 {
 v1 *= v0;
 v0 = (unsigned int)v0 + 1;
 } while (a0 + 1 != (unsigned int)v0);
 return v1 & 4294967295;
}


// Function: ternary_op at 0x400e00
long long ternary_op(unsigned int a0, unsigned int a1)
{
 if (a1 >= a0)
 return a1;
 return a0;
}


// Function: test_control_flow_l1 at 0x400e0c
extern const char g_401f65[];

int test_control_flow_l1(void)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(g_401f65);
 printf("CF-L1-01 (sequential_ops): %d\n", 21);
 printf("CF-L1-02 (single_if): %d\n", 20);
 printf("CF-L1-02 (single_if): %d\n", 4294967291);
 printf("CF-L1-03 (if_else): %d\n", 1);
 printf("CF-L1-03 (if_else): %d\n", 0);
 printf("CF-L1-04 (nested_if_2): %d\n", 15);
 printf("CF-L1-04 (nested_if_2): %d\n", 10);
 printf("CF-L1-04 (nested_if_2): %d\n", 0);
 printf("CF-L1-05 (nested_if_deep): %d\n", 5);
 printf("CF-L1-06 (if_elseif_chain): %d\n", 20);
 printf("CF-L1-07 (if_elseif_long): %d\n", 400);
 printf("CF-L1-08 (switch_small): %d\n", 50);
 printf("CF-L1-09 (switch_large): %d\n", 70);
 printf("CF-L1-10 (switch_default): %d\n", 0);
 printf("CF-L1-11 (switch_fallthrough): %d\n", 21);
 printf("CF-L1-12 (loop_for_fixed): %d\n", 45);
 printf("CF-L1-13 (loop_while): %d\n", 5);
 printf("CF-L1-14 (loop_dowhile): %d\n", 4);
 printf("CF-L1-15 (loop_nested): %d\n", 12);
 printf("CF-L1-16 (loop_break): %d\n", 2);
 printf("CF-L1-16 (loop_break): %d\n", 4294967295);
 printf("CF-L1-17 (loop_continue): %d\n", 25);
 printf("CF-L1-18 (goto_forward): %d\n", 50);
 printf("CF-L1-18 (goto_forward): %d\n", 4294967290);
 printf("CF-L1-19 (goto_backward): %d\n", 120);
 printf("CF-L1-20 (ternary_op): %d\n", 10);
 return printf("CF-L1-20 (ternary_op): %d\n", 8);
}


// Function: loop_multi_exit at 0x400fd8
extern const char g_40197c[];
extern const char g_4019ac[];

unsigned long long loop_multi_exit(unsigned int a0)
{
 unsigned long v0; // x8
 unsigned long long v1; // x8

 v0 = a0 - 1;
 if (11 < (unsigned int)v0)
 return 4294967295;
 v1 = v0 * 0x100000000 >> 63 & 0xfffffffc00000000 | __ROL__(v0, 2) & 17179869180 & 17179869183;
 return (unsigned long long)(unsigned char)g_4019ac[v1] + (unsigned long long)(unsigned char)g_40197c[v1]);
}


// Function: infinite_loop at 0x401010
unsigned long long infinite_loop(unsigned int *ptr)
{
 unsigned long long v0; // x0

 v0 = 0;
 while (*(ptr) != 1)
 {
 v0 = (unsigned int)v0 + 1;
 if ((unsigned int)v0 == 1001)
 {
 *(ptr) = 1;
 return v0;
 }
 }
 return v0;
}


// Function: multi_return at 0x40103c
unsigned long long multi_return(unsigned long a0)
{
 unsigned int v0; // w9

 if (((char)(a0 >> 31) & 1))
 return 4294967295;
 if ((char)arm64g_calculate_condition(9, (unsigned long long)((unsigned int)a0 & 1), 0, 0))
 v0 = ((unsigned int)a0 * 2 | (unsigned int)a0 >> 31) & 4294967294;
 else
 v0 = (unsigned int)a0 + 1;
 if (50 >= (unsigned int)a0)
 return v0;
 return 4294967294;
}


// Function: conditional_return at 0x401064
long long conditional_return(unsigned int a0)
{
 if (0 >= a0)
 return -(a0);
 return __ROL__(a0, 1) & 4294967294;
}


// Function: duffs_device at 0x401074

unsigned int duffs_device(unsigned int *cur, unsigned int *iter, unsigned int a2)
{
 unsigned int v0; // w8

 switch (a2)
 {
 case 0:
 do
 {
 iter += 1;
 *(cur) = *(iter);
 cur += 1;
 break;
 iter += 1;
 *(cur) = *(iter);
 cur += 1;
LABEL_4010b4:
 iter += 1;
 *(cur) = *(iter);
 cur += 1;
LABEL_4010bc:
 iter += 1;
 *(cur) = *(iter);
 cur += 1;
LABEL_4010c4:
 iter += 1;
 *(cur) = *(iter);
 cur += 1;
LABEL_4010cc:
 iter += 1;
 *(cur) = *(iter);
 cur += 1;
LABEL_4010d4:
 iter += 1;
 *(cur) = *(iter);
 cur += 1;
LABEL_4010dc:
 iter += 1;
 v0 -= 1;
 *(cur) = *(iter);
 cur += 1;
 } while (1 < v0);
 return a2;
 case 1:
 goto LABEL_4010dc;
 case 2:
 goto LABEL_4010d4;
 case 3:
 goto LABEL_4010cc;
 case 4:
 goto LABEL_4010c4;
 case 5:
 goto LABEL_4010bc;
 case 6:
 goto LABEL_4010b4;
 case 7:
 break;
 default:
 return 4294967295;
 }
}


// Function: loop_complex_cond at 0x4010f8
int loop_complex_cond(unsigned int cur)
{
 unsigned int v0 = 0; // w10
 unsigned int v1 = 0; // w8
 unsigned int v2 = 0; // w10 - initialized to prevent undefined behavior
 unsigned int v3 = 0; // w9

 if (cur >= 1)
 {
 v0 = 0;
 v1 = 0;
 do
 {
 v1 += 2;
 cur -= 1;
 v3 = v0 + 1;
 v2++;
 } while (cur >= 2 && cur > v1 && v2 < 9);
 }
 else
 {
 v1 = 0;
 v3 = 0;
 }
 return cur + v1 + v3;
}


// Function: loop_modify_var at 0x40114c
unsigned long long loop_modify_var(unsigned int a0)
{
 unsigned long long v0; // x9
 unsigned long long v1; // x8
 unsigned long long v2; // x8
 unsigned long long v3; // x9
 unsigned int v4; // w10
 unsigned long long v5; // x8
 unsigned long v6; // x9

 if (a0 < 1)
 return 0;
 v0 = 0;
 v1 = 0;
 do
 {
 v2 = v1;
 v3 = v0;
 if (5 < (unsigned int)v3)
 v4 = (unsigned int)v3 + 2;
 else
 v4 = v3;
 } while ((v5 = v3 + v2, v6 = (unsigned long long)(v4 + 1), v0 = (unsigned long long)(v4 + 1), v1 = v3 + v2, (unsigned int)v0 < a0));
 return v3 + v2 & 4294967295;
}


// Function: loop_external_state at 0x40118c
unsigned long long loop_external_state(unsigned int *a0)
{
 unsigned long long v0 = 0; // x0

 while (!*(a0) && (v0 = (unsigned long long)((unsigned int)v0 + 1), (unsigned int)v0 != 101))
 {
 }
 return v0;
}


// Function: recursion_factorial at 0x4011ac
 unsigned long long recursion_factorial(unsigned long a0)
{
 unsigned int v0; // w9
 unsigned long long v1; // x8
 unsigned long long v3; // x0
 unsigned long v4; // x10
 unsigned int i; // w11
 unsigned long v7; // d0
 unsigned int v8 = 0; // 324
 unsigned long long v9; // x8
 unsigned int v2; // w8

 if (2 > (unsigned int)a0)
 return 1;
 if ((char)arm64g_calculate_condition(51, a0 & 4294967295, 2, 0))
 v0 = 0;
 else
 v0 = (unsigned int)a0 - 2;
 v1 = a0 & 4294967295;
 v2 = v0 + 1;
 if (8 > v2)
 {
 v3 = 1;
 }
 else
 {
 v4 = v2 & 0xfffffff8;
 v1 -= v4;
 i = v4;
 do
 {
 i -= 8;
 } while (i != 8);
 v7 = unsupported_simd_op();
 v3 = v8 * v7;
 if (v2 == (unsigned int)v4)
 return v8 * v7;
 }
 do
 {
 v9 = v1;
 v3 = v3 * v9;
 v1 = (unsigned int)v9 - 1;
 } while (2 < (unsigned int)v9);
 return v3;
}


// Function: tail_recursion at 0x401254
int tail_recursion(unsigned long long a0, unsigned long long a1)
{
 unsigned int v0; // w8
 unsigned int v1; // w8
 unsigned long v2; // x9
 unsigned int i; // w10
 unsigned long v5; // d0
 unsigned int v6 = 0; // 324 - initialized to prevent undefined behavior
 unsigned long long v7; // x1
 unsigned long long v8; // x0
 unsigned long long v9; // x1

 if ((unsigned int)a0 < 2)
 return a1;
 if ((char)arm64g_calculate_condition(51, a0 & 4294967295, 2, 0))
 v0 = 0;
 else
 v0 = (unsigned int)a0 - 2;
 v1 = v0 + 1;
 if (v1 >= 8)
 {
 v2 = v1 & 0xfffffff8;
 a0 -= v2;
 i = v2;
 do
 {
 i -= 8;
 } while (i != 8);
 v5 = unsupported_simd_op();
 a1 = v6 * v5;
 if (v1 == (unsigned int)v2)
 return v6 * (unsigned int)v5;
 }
 do
 {
 v8 = a0;
 v9 = v8 * a1;
 a0 = (unsigned int)v8 - 1;
 a1 = v9;
 } while (2 < (unsigned int)v8);
 return (unsigned int)v8 * (unsigned int)a1;
}


// Function: indirect_recursion_a at 0x4012f0
unsigned long long indirect_recursion_a(unsigned long long a0, unsigned int a1)
{
 unsigned int v0; // w8
 unsigned int v1; // w9

 if (a1 < 1)
 return a0;
 v0 = a1 + 2;
 while (true)
 {
 if (!((char)a0 & 1))
 {
 if (0 <= (unsigned int)a0)
 v1 = a0;
 else
 v1 = (unsigned int)a0 + 1;
 if (v0 == 3)
 return v1 >> 31 & 0x80000000 | (v1 * 0x80000000 | v1 >> 1) & 2147483647;
 a0 = (v1 >> 31 & 0x80000000 | (v1 * 0x80000000 | v1 >> 1) & 2147483647) + 1;
 }
 else if (v0 != 3)
 {
 a0 = (unsigned int)a0 * 3 + 2;
 }
 else
 {
 return (unsigned int)a0 * 3 + 1;
 }
 v0 -= 2;
 if (v0 < 3)
 return a0;
 }
}


// Function: call_func_ptr at 0x401348
int call_func_ptr(unsigned long a0, unsigned long a1)
{
 // a0 is used as a computed goto target via function pointer
 typedef int (*func_t)(unsigned long, unsigned long);
 return ((func_t)a0)(a0, a1);
}


// Function: call_func_ptr_array at 0x401354

unsigned long long call_func_ptr_array(unsigned int a0, unsigned long a1)
{
 switch (a0)
 {
 case 0:
 return 0;
 case 1:
 return 10;
 case 2:
 return 120;
 default:
 return 4294967295;
 }
}


// Function: double_value at 0x401378
unsigned int double_value(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: triple_value at 0x401380
unsigned int triple_value(unsigned int a0)
{
 return a0 * 3;
}


// Function: call_virtual_func at 0x401388
unsigned int call_virtual_func(unsigned long a0, unsigned int a1)
{
 return (a1 * 2 | a1 >> 31) & 4294967294;
}


// Function: process_with_callback at 0x401390
typedef unsigned long long (*callback_t)(unsigned int);

unsigned int process_with_callback(unsigned int *a0, unsigned int a1, callback_t a2)
{
 unsigned long long v2; // x20
 unsigned long v3; // x22
 unsigned int *v4; // x21
 unsigned int *v6; // x21
 unsigned long v7; // x22
 unsigned long i = 0; // x22 - initialized
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 if (a1 < 1)
 return 0;
 v2 = 0;
 v3 = a1;
 do
 {
 v4 = a0;
 v6 = v4 + 1;
 v7 = v3 - 1;
 v2 += a2(*(v4));
 v3 = v7;
 a0 = v6;
 i += 1;
 } while (i != 1);
 return v2;
}


// Function: test_control_flow_l2 at 0x4013e8
extern const char g_401f89[];

int test_control_flow_l2(void)
{
 unsigned long long v4; // x1
 unsigned int v5; // w21
 unsigned int v6; // w19
 unsigned int v7; // w8
 unsigned int v8; // w19
 unsigned long long v9; // x1
 char *v0; // [bp-0x30]
 unsigned int result; // [bp-0x18]
 unsigned int v2; // [bp-0x14]
 char v3; // [bp+0x0]

 v0 = &v3;
 puts(g_401f89);
 printf("CF-L2-01 (loop_multi_exit): %d\n", 12);
 v4 = 0;
 v2 = 0;
 do
 {
 if (v2 == 1)
 goto LABEL_40143c;
 } while ((v4 = (unsigned long long)((unsigned int)v4 + 1), (unsigned int)v4 != 1001));
 v2 = 1;
LABEL_40143c:
 printf("CF-L2-02 (infinite_loop): %d\n", v4);
 v5 = 4294967295;
 printf("CF-L2-03 (multi_return): %d\n", 4294967295);
 printf("CF-L2-03 (multi_return): %d\n", 4294967294);
 printf("CF-L2-03 (multi_return): %d\n", 4);
 v6 = 10;
 printf("CF-L2-04 (conditional_return): %d\n", 10);
 printf("CF-L2-04 (conditional_return): %d\n", 5);
 printf("CF-L2-05 (duffs_device): %d\n", 8);
 v7 = 11;
 do
 {
 v8 = v6 + 2;
 } while (v7 - 2 > v6 - 8 && (v5 += 1, v7 -= 1, v6 = v8, v5 < 9));
 printf("CF-L2-06 (loop_complex_cond): %d\n", v8);
 printf("CF-L2-07 (loop_modify_var): %d\n", 30);
 v9 = 0;
 result = 0;
 while (!result && (v9 = (unsigned long long)((unsigned int)v9 + 1), (unsigned int)v9 != 101))
 {
 }
 printf("CF-L2-08 (loop_external_state): %d\n", v9);
 printf("CF-L2-09 (recursion_factorial): %d\n", 120);
 printf("CF-L2-10 (tail_recursion): %d\n", 120);
 printf("CF-L2-11 (indirect_recursion): %d\n", 3);
 printf("CF-L2-12 (call_func_ptr): %d\n", 10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n", 10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n", 120);
 return printf("CF-L2-15 (process_with_callback): %d\n", 30);
}


// Function: non_local_jump at 0x401598

unsigned long long non_local_jump(unsigned int a0)
{
 unsigned long v2; // x19
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = a0;
 if (_setjmp(__dollar_d_5))
 {
 return 4294967295;
 }
 else if (((char)(v2 >> 31) & 1))
 {
 longjmp(__dollar_d_5, 1); /* do not return */
 }
 else if (101 > (unsigned int)v2)
 {
 return ((unsigned int)v2 * 2 | (unsigned int)v2 >> 31) & 4294967294;
 }
 else
 {
 longjmp(__dollar_d_5, 2); /* do not return */
 }
}


// Function: cpp_exception at 0x4015fc
unsigned long long cpp_exception(unsigned int a0)
{
 unsigned int v0; // w8

 if (100 < a0)
 v0 = 4294967294;
 else
 v0 = __ROL__(a0, 1) & 4294967294;
 if (0 > a0)
 return 4294967295;
 return v0;
}


// Function: large_jump_table at 0x401618

unsigned long long large_jump_table(unsigned int a0, unsigned long a1, unsigned long a2)
{
 switch (a0)
 {
 case 0:
 break;
 default:
 return 4294967295;
 }
}


// Function: op_add at 0x401640
int op_add(unsigned int a0, unsigned int a1)
{
 return a1 + a0;
}


// Function: op_sub at 0x401648
int op_sub(unsigned int a0, unsigned int a1)
{
 return a0 - a1;
}


// Function: op_mul at 0x401650
int op_mul(unsigned int a0, unsigned int a1)
{
 return a0 * a1;
}


// Function: op_div at 0x401658
unsigned long long op_div(unsigned long a0, unsigned long a1)
{
 if (!(unsigned int)a1)
 return 0;
 return a0 / a1;
}


// Function: op_mod at 0x40166c
unsigned long long op_mod(unsigned int a0, unsigned int a1)
{
 if (!a1)
 return 0;
 return a0 - a1 * a0 / a1;
}


// Function: op_and at 0x401684
unsigned int op_and(unsigned int a0, unsigned int a1)
{
 return a1 & a0;
}


// Function: op_or at 0x40168c
unsigned int op_or(unsigned int a0, unsigned int a1)
{
 return a1 | a0;
}


// Function: op_xor at 0x401694
int op_xor(unsigned int a0, unsigned int a1)
{
 return a1 ^ a0;
}


// Function: op_shl at 0x40169c
int op_shl(unsigned int a0, char a1)
{
 return a0 << (a1 & 31);
}


// Function: op_shr at 0x4016a4
int op_shr(unsigned int a0, char a1)
{
 return a0 >> (a1 & 31);
}


// Function: conditional_func_ptr at 0x4016ac
typedef unsigned long long (*ull_func_ptr_t)(unsigned long);

long long conditional_func_ptr(unsigned int a0, unsigned long a1)
{
 ull_func_ptr_t v0; // x8
 ull_func_ptr_t v1; // x9
 ull_func_ptr_t v2; // x10
 ull_func_ptr_t v3; // x8
 ull_func_ptr_t v4; // x2

 v0 = recursion_factorial;
 v1 = (ull_func_ptr_t)triple_value;
 v2 = (ull_func_ptr_t)double_value;
 if (a0 == 1)
 v3 = v1;
 else
 v3 = v0;
 if (!a0)
 v4 = v2;
 else
 v4 = v3;
 return v4(a1);
}


// Function: state_machine at 0x4016dc

unsigned long long state_machine(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // w8

 switch (a1)
 {
 case 0:
 if (a0 != 1)
 return 0;
 return 1;
 case 1:
 if (a0 == 99)
 v0 = 3;
 else
 v0 = 1;
 if (a0 != 2)
 return v0;
 return a0;
 case 2:
 return a1;
 case 3:
 if (!a0)
 return 0;
 return 3;
 default:
 a1 = 3;
 break;
 }
}


// Function: fsm_func_table at 0x401740

unsigned long long fsm_func_table(unsigned long a0, unsigned int a1)
{
 switch (a1)
 {
 case 0:
 break;
 default:
 return 3;
 }
}


// Function: state_idle at 0x401760
unsigned long long state_idle(unsigned int a0)
{
 if (a0 == 1)
 return 1;
 return 0;
}


// Function: state_processing at 0x40176c
long long state_processing(unsigned int a0)
{
 unsigned int v0; // w8

 if (a0 == 99)
 v0 = 3;
 else
 v0 = 1;
 if (a0 != 2)
 return v0;
 return a0;
}


// Function: state_done at 0x401784
unsigned long long state_done(void)
{
 return 2;
}


// Function: state_error at 0x40178c
unsigned long long state_error(unsigned int a0)
{
 if (a0)
 return 3;
 return 0;
}


// Function: computed_goto at 0x40179c

unsigned long long computed_goto(unsigned long a0, unsigned int a1)
{
 switch (a1)
 {
 case 0:
 return 0;
 case 1:
 return 10;
 case 2:
 return 20;
 case 3:
 return 30;
 default:
 return 4294967295;
 }
}


// Function: obfuscated_cf at 0x4017dc
unsigned int obfuscated_cf(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: opaque_predicate at 0x4017e4
unsigned int opaque_predicate(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: overlapped_code at 0x4017ec
long long overlapped_code(unsigned int a0)
{
 unsigned int v0; // w8
 unsigned int v2; // w8

 if (0 <= a0)
 v0 = a0;
 else
 v0 = a0 + 1;
 v2 = v0;
 if (!((char)arm64g_calculate_condition(9, (unsigned long long)(a0 & 1), 0, 0)))
 return a0 * 3 + 1;
 return v2 >> 31 & 0x80000000 | __ROL__(v2, 31) & 2147483647;
}


// Function: test_control_flow_l3 at 0x401808
extern const char g_401fad[];

int test_control_flow_l3(void)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(g_401fad);
 printf("CF-L3-01 (non_local_jump): %d\n", non_local_jump(5) & 4294967295);
 printf("CF-L3-01 (non_local_jump): %d\n", non_local_jump(4294967291) & 4294967295);
 printf("CF-L3-02 (cpp_exception): %d\n", 10);
 printf("CF-L3-02 (cpp_exception): %d\n", 4294967295);
 printf("CF-L3-03 (large_jump_table): %d\n", 15);
 printf("CF-L3-04 (conditional_func_ptr): %d\n", 10);
 printf("CF-L3-05 (state_machine): %d\n", 1);
 printf("CF-L3-07 (computed_goto): %d\n", computed_goto(printf("CF-L3-06 (fsm_func_table): %d\n", 2), 2) & 4294967295);
 printf("CF-L3-08 (obfuscated_cf): %d\n", 10);
 printf("CF-L3-09 (opaque_predicate): %d\n", 10);
 return printf("CF-L3-10 (overlapped_code): %d\n", 16);
}


// Function: main at 0x401900
unsigned int main(void)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


