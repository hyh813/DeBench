// Angr Decompilation of 1_gcc_O3_g
// Platform: AARCH64

#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>
#include <string.h>

/* Function declarations */
int test_control_flow_l1();
int test_control_flow_l2();
int test_control_flow_l3();
unsigned long long recursion_factorial(unsigned int a0);
unsigned int double_value(unsigned int a0);
unsigned int triple_value(unsigned int a0);
int op_add(unsigned int a0, unsigned int a1);
int op_sub(unsigned int a0, unsigned int a1);
int op_mul(unsigned int a0, unsigned int a1);
unsigned int op_div(unsigned long a0, unsigned int a1);
unsigned int op_mod(unsigned int a0, unsigned int a1);
unsigned int op_and(unsigned int a0, unsigned int a1);
unsigned int op_or(unsigned int a0, unsigned int a1);
int op_xor(unsigned int a0, unsigned int a1);
int op_shl(unsigned int a0, char a1);
int op_shr(unsigned int a0, char a1);
unsigned long long state_idle(unsigned int a0);
unsigned long long state_processing(unsigned long long a0);
unsigned long long state_done();
unsigned long long state_error(unsigned int a0);
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
unsigned long long loop_for_fixed(unsigned int a0);
unsigned long long loop_while(unsigned int a0);
long long loop_dowhile(unsigned int a0);
unsigned long long loop_nested(unsigned int i, unsigned int a1);
unsigned long long loop_break(unsigned int a0);
unsigned long long loop_continue(unsigned int a0);
long long goto_forward(unsigned int a0);
unsigned long long goto_backward(unsigned int a0);
long long ternary_op(unsigned int a0, unsigned int a1);
unsigned long long loop_multi_exit(unsigned int a0);
unsigned int infinite_loop(unsigned int *ptr);
unsigned long long multi_return(unsigned long a0);
long long conditional_return(unsigned long a0);
unsigned int duffs_device(unsigned int *a0, unsigned int *iter, unsigned int a2);
unsigned int loop_complex_cond(unsigned int a0);
unsigned long long loop_modify_var(unsigned int a0);
unsigned int loop_external_state(unsigned int *a0);
unsigned long long tail_recursion(unsigned int a0, unsigned long long a1);
unsigned long long indirect_recursion_a(unsigned long long a0, unsigned int a1);
int call_func_ptr(unsigned long a0, unsigned long a1);
unsigned long long call_func_ptr_array(unsigned int a0, unsigned long a1);
unsigned int call_virtual_func(unsigned long a0, unsigned int a1);
unsigned long long process_with_callback(unsigned int *a0, unsigned int a1, unsigned long long *a2);
unsigned long long non_local_jump(unsigned int a0);
unsigned long long cpp_exception(unsigned long a0);
unsigned long long large_jump_table(unsigned int a0, unsigned long a1, unsigned long a2);
int conditional_func_ptr(unsigned int a0, unsigned int a1);
unsigned long long state_machine(unsigned long long a0, unsigned long a1);
unsigned long long fsm_func_table(unsigned long a0, unsigned int a1);
unsigned long long computed_goto(unsigned long a0, unsigned int a1);
unsigned int obfuscated_cf(unsigned int a0);
unsigned int opaque_predicate(unsigned int a0);
unsigned int overlapped_code(unsigned long a0);

/* SIMD operation placeholders */
static unsigned long long AddV(unsigned long long a0, unsigned long long a1) { return 0; }
static unsigned long long MulV(unsigned long long a0, unsigned long long a1) { return 0; }

/* Unsupported SIMD operations - placeholder implementations */
static unsigned long long unsupported_Iop_SliceV128(void) { return 0; }
static unsigned long long unsupported_Iop_ZeroHI96ofV128(void) { return 0; }

/* Rotate left macro */
#define __ROL__(x, n) (((x) << (n)) | ((x) >> (32 - (n))))

/* External function declarations */
extern int arm64g_calculate_condition(int cond, unsigned int op1, unsigned int op2, unsigned int op3);
extern void __stack_chk_fail(void);
extern void __longjmp_chk(unsigned long *env, int val);

/* CRT stub function _init removed by preprocessor */

/* External function declarations for CRT stubs */
extern void _start(void);
extern void deregister_tm_clones(void);
extern void __do_global_dtors_aux(void);
extern void frame_dummy(void);

/* Unsupported SIMD operations - placeholder implementations */
static unsigned long long unsupported_simd_op_1(void) { return 0; }
static unsigned long long unsupported_simd_op_2(void) { return 0; }


// Function: __dollar_x at 0x400940
extern unsigned long long g_413f78;

long long __dollar_x()
{
 unsigned long long v2; // x16
 unsigned long long v3; // x30
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]

 v0 = v2;
 v1 = v3;
 return ((long long (*)(unsigned long long, unsigned long long))g_413f78)(v0, v1);
}


// Function: sub_400954 at 0x400954
int sub_400954()
{
 jmp_buf jump_buffer_local;

 return _setjmp(jump_buffer_local);
}


// Function: main at 0x400a00
unsigned int main()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}


// Function: sub_400a20 at 0x400a20
void sub_400a20(unsigned long a0)
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_400a70 at 0x400a70
void sub_400a70()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */



// Function: sub_400a88 at 0x400a88
void sub_400a88()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_400afc at 0x400afc
void sub_400afc()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_400b48 at 0x400b48
long long sub_400b48()
{
 unsigned long long v0; // x0

 v0 = frame_dummy();
 return frame_dummy();
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_400b54 at 0x400b54
void sub_400b54(unsigned long a0)
{
 (void)recursion_factorial(a0);
 return;
}


// Function: recursion_factorial at 0x400b60
unsigned long long recursion_factorial(unsigned int a0)
{
 unsigned long long v0; // x1
 unsigned int result; // w3
 unsigned long long v2; // q1
 unsigned int i; // w0
 unsigned long long v4; // q0
 unsigned long v6; // x2
 int v7; // q2
 unsigned long v8; // d0
 unsigned long long v9; // x0

 v0 = a0;
 if ((unsigned int)v0 <= 1)
 return 1;
 result = (unsigned int)v0 - 1;
 if ((unsigned int)v0 - 2 > 13)
 {
 v2 = 0x10000000100000001ULL;
 i = 0;
 v4 = AddV((unsigned long long)((unsigned __int128)(v0 & 0xFFFFFFFF) * 0x100000000ULL + (v0 & 0xFFFFFFFF)), 0xFFFFFFFFFFFFFFFE00000000ULL);
 do
 {
 i += 1;
 v2 = MulV(v2, v4);
 v4 = AddV(v4, 0xFFFFFFFFFFFFFFFEFFFFFFFFFFFFFFFEULL);
 } while (((result * 0x40000000 | result >> 2) & 1073741823) != i);
 v6 = result & 0xfffffffc;
 v0 -= v6;
 v7 = unsupported_Iop_SliceV128();
 v8 = unsupported_Iop_SliceV128();
 v9 = (unsigned long long)(MulV(v8, MulV(v7, v2)));
 if (result == (unsigned int)v6)
 return (unsigned long long)(MulV(v8, MulV(v7, v2)));
 result = (unsigned int)v0 - 1;
 }
 else
 {
 v9 = 1;
 }
 return v0 * v9;
}


// Function: sub_400cb8 at 0x400cb8
void sub_400cb8(unsigned long a0)
{
 double_value(a0);
 return;
}


// Function: double_value at 0x400cc0
unsigned int double_value(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: sub_400cc8 at 0x400cc8
void sub_400cc8(unsigned long a0)
{
 triple_value(a0);
 return;
}


// Function: triple_value at 0x400cd0
unsigned int triple_value(unsigned int a0)
{
 return a0 * 3;
}


// Function: sub_400cd8 at 0x400cd8
void sub_400cd8(unsigned long a0, unsigned long a1)
{
 op_add((unsigned int)a0, (unsigned int)a1);
 return;
}


// Function: op_add at 0x400ce0
int op_add(unsigned int a0, unsigned int a1)
{
 return a0 + a1;
}


// Function: sub_400ce8 at 0x400ce8
void sub_400ce8(unsigned long a0, unsigned long a1)
{
 op_sub((unsigned int)a0, (unsigned int)a1);
 return;
}


// Function: op_sub at 0x400cf0
int op_sub(unsigned int a0, unsigned int a1)
{
 return a0 - a1;
}


// Function: sub_400cf8 at 0x400cf8
void sub_400cf8(unsigned long a0, unsigned long a1)
{
 op_mul((unsigned int)a0, (unsigned int)a1);
 return;
}


// Function: op_mul at 0x400d00
int op_mul(unsigned int a0, unsigned int a1)
{
 return a1 * a0;
}


// Function: sub_400d08 at 0x400d08
void sub_400d08(unsigned long a0, unsigned long a1)
{
 op_div(a0, (unsigned int)a1);
 return;
}


// Function: op_div at 0x400d10
unsigned int op_div(unsigned long a0, unsigned int a1)
{
 if (a1)
 a1 = (a0 & 4294967295) / a1;
 return a1;
}


// Function: op_mod at 0x400d24
unsigned int op_mod(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // w0

 v0 = a1;
 if (a1)
 v0 = a0 - v0 * a0 / a1;
 return v0;
}


// Function: sub_400d3c at 0x400d3c
void sub_400d3c(unsigned long a0, unsigned long a1)
{
 op_and((unsigned int)a0, (unsigned int)a1);
 return;
}


// Function: op_and at 0x400d40
unsigned int op_and(unsigned int a0, unsigned int a1)
{
 return a0 & a1;
}


// Function: sub_400d48 at 0x400d48
void sub_400d48(unsigned long a0, unsigned long a1)
{
 op_or();
 return;
}


// Function: op_or at 0x400d50
unsigned int op_or(unsigned int a0, unsigned int a1)
{
 return a0 | a1;
}


// Function: sub_400d58 at 0x400d58
void sub_400d58(unsigned long a0, unsigned long a1)
{
 op_xor();
 return;
}


// Function: op_xor at 0x400d60
int op_xor(unsigned int a0, unsigned int a1)
{
 return a0 ^ a1;
}


// Function: sub_400d68 at 0x400d68
void sub_400d68(unsigned long a0, unsigned long a1)
{
 op_shl();
 return;
}


// Function: op_shl at 0x400d70
int op_shl(unsigned int a0, char a1)
{
 return a0 << (a1 & 31);
}


// Function: sub_400d78 at 0x400d78
void sub_400d78(unsigned long a0, unsigned long a1)
{
 op_shr();
 return;
}


// Function: op_shr at 0x400d80
int op_shr(unsigned int a0, char a1)
{
 return a0 >> (a1 & 31);
}


// Function: sub_400d88 at 0x400d88
void sub_400d88(unsigned long a0)
{
 state_idle();
 return;
}


// Function: state_idle at 0x400d90
unsigned long long state_idle(unsigned int a0)
{
 if (a0 == 1)
 return 1;
 return 0;
}


// Function: sub_400d9c at 0x400d9c
long long sub_400d9c(unsigned long a0)
{
 unsigned long long v0; // x0

 v0 = state_processing(a0);
 return state_processing(a0);
}


// Function: state_processing at 0x400da0
unsigned long long state_processing(unsigned long long a0)
{
 if ((unsigned int)a0 == 2)
 {
 return a0;
 }
 else if ((unsigned int)a0 == 99)
 {
 return 3;
 }
 else
 {
 return 1;
 }
}


// Function: sub_400db8 at 0x400db8
void sub_400db8()
{
 state_done();
 return;
}


// Function: state_done at 0x400dc0
unsigned long long state_done()
{
 return 2;
}


// Function: sub_400dc8 at 0x400dc8
void sub_400dc8(unsigned long a0)
{
 state_error();
 return;
}


// Function: state_error at 0x400dd0
unsigned long long state_error(unsigned int a0)
{
 if (a0)
 return 3;
 return a0;
}


// Function: non_local_jump_constprop_0 at 0x400de0
extern jmp_buf jump_buffer;

unsigned long long non_local_jump_constprop_0()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 if (_setjmp(jump_buffer))
 return 4294967295;
 return 10;
}


// Function: sub_400e08 at 0x400e08
void sub_400e08(unsigned long a0, unsigned long a1, unsigned long a2)
{
 sequential_ops();
 return;
}


// Function: sequential_ops at 0x400e10
int sequential_ops(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return (((a0 + a1) * 2 | a0 + a1 >> 31) & 4294967294) - a2;
}


// Function: single_if at 0x400e20
long long single_if(unsigned int a0)
{
 if (0 >= a0)
 return a0;
 return __ROL__(a0, 1) & 4294967294;
}


// Function: if_else at 0x400e30
unsigned long long if_else(unsigned int a0)
{
 if (a0 > 0)
 return 1;
 return 0;
}


// Function: sub_400e3c at 0x400e3c
long long sub_400e3c(unsigned long a0)
{
 unsigned long long v0; // x0

 v0 = nested_if_2(a0, 0);
 return nested_if_2(a0, 0);
}


// Function: nested_if_2 at 0x400e40
unsigned long long nested_if_2(unsigned int a0, unsigned int a1)
{
 if (a0 <= 0)
 {
 return 0;
 }
 else if (0 < a1)
 {
 return a0 + a1 & 4294967295;
 }
 else
 {
 return a0;
 }
}


// Function: nested_if_deep at 0x400e60
unsigned long long nested_if_deep(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 unsigned int v0; // w0

 if (a0 <= 0)
 {
 return 0;
 }
 else if (a1 <= 0)
 {
 return 1;
 }
 else if (a2 <= 0)
 {
 return 2;
 }
 else if (a3 > 0)
 {
 if (a4 <= 0)
 v0 = 0;
 else
 v0 = 1;
 return v0 + 4;
 }
 else
 {
 return 3;
 }
}


// Function: sub_400eac at 0x400eac
long long sub_400eac(unsigned long a0)
{
 unsigned long long v0; // x0

 v0 = if_elseif_chain((unsigned int)a0);
 return if_elseif_chain((unsigned int)a0);
}


// Function: if_elseif_chain at 0x400eb0
unsigned long long if_elseif_chain(unsigned int a0)
{
 if (!a0)
 {
 return 10;
 }
 else if (a0 == 1)
 {
 return 20;
 }
 else if (a0 == 2)
 {
 return 30;
 }
 else
 {
 return 4294967295;
 }
}


// Function: sub_400edc at 0x400edc
long long sub_400edc(unsigned long a0)
{
 unsigned long long v0; // x0

 v0 = if_elseif_long((unsigned int)a0);
 return if_elseif_long((unsigned int)a0);
}


// Function: if_elseif_long at 0x400ee0
unsigned long long if_elseif_long(unsigned int a0)
{
 if (!a0)
 {
 return 100;
 }
 else if (a0 == 1)
 {
 return 200;
 }
 else if (a0 == 2)
 {
 return 300;
 }
 else if (a0 == 3)
 {
 return 400;
 }
 else if (a0 == 4)
 {
 return 500;
 }
 else
 {
 return 4294967295;
 }
}


// Function: sub_400f2c at 0x400f2c
long long sub_400f2c(unsigned long a0)
{
 unsigned long long v0; // x0

 v0 = switch_small((unsigned int)a0);
 return switch_small((unsigned int)a0);
}


// Function: switch_small at 0x400f30
extern unsigned int CSWTCH_55[4];

unsigned long long switch_small(unsigned int a0)
{
 if (3 < a0)
 return 4294967295;
 return CSWTCH_55[a0];
}


// Function: switch_large at 0x400f50
unsigned long long switch_large(unsigned int a0)
{
 if (a0 >= 10)
 return 4294967295;
 return __ROL__(a0 * 5, 1) & 4294967294;
}


// Function: switch_default at 0x400f64
unsigned long long switch_default(unsigned int a0)
{
 if (a0 - 1 >= 3)
 return 0;
 return 100 * a0;
}


// Function: sub_400f7c at 0x400f7c
long long sub_400f7c(unsigned long a0)
{
 unsigned long long v0; // x0

 v0 = switch_fallthrough(a0);
 return switch_fallthrough(a0);
}


// Function: switch_fallthrough at 0x400f80
unsigned long long switch_fallthrough(unsigned long a0)
{
 unsigned int v0; // w1

 if ((unsigned int)a0 != 2)
 {
 if ((unsigned int)a0 != 3)
 {
 if ((unsigned int)a0 != 1)
 return 4294967295;
 return 0;
 }
 v0 = 12;
 }
 else
 {
 v0 = 0;
 }
 return v0 + (unsigned int)a0 * 2 + a0;
}


// Function: sub_400fb8 at 0x400fb8
long long sub_400fb8(unsigned long a0)
{
 unsigned long long v0; // x0

 v0 = loop_for_fixed((unsigned int)a0);
 return loop_for_fixed((unsigned int)a0);
}


// Function: loop_for_fixed at 0x400fc0
unsigned long long loop_for_fixed(unsigned int a0)
{
 unsigned long v0; // x2
 unsigned int i; // w1
 unsigned int v10; // w0
 unsigned long long v2; // d0
 unsigned long long v3; // x1
 unsigned long v4; // x3
 unsigned long v5; // x4
 unsigned long v6; // x3
 unsigned long v7; // x4
 unsigned long v8; // x3
 unsigned int v9; // w4

 v0 = a0;
 if (a0 <= 0)
 return 0;
 if (a0 - 1 > 7)
 {
 i = 0;
 do
 {
 i += 1;
 } while ((((unsigned int)v0 * 0x40000000 | (unsigned int)v0 >> 2) & 1073741823) != i);
 v2 = unsupported_Iop_ZeroHI96ofV128();
 v3 = (unsigned int)v0 & 0xfffffffc;
 if ((char)arm64g_calculate_condition(10, v0 & 3, 0, 0))
 return v2;
 }
 else
 {
 v3 = 0;
 v2 = 0;
 }
 v4 = (unsigned int)v3 + 1;
 if ((unsigned int)v0 <= (unsigned int)v4)
 return v2 + v3;
 v5 = (unsigned int)v3 + 2;
 if ((unsigned int)v0 <= (unsigned int)v5)
 return v2 + v3 + v4;
 v6 = (unsigned int)v3 + 3;
 if ((unsigned int)v0 <= (unsigned int)v6)
 return v2 + v3 + v4 + v5;
 v7 = (unsigned int)v3 + 4;
 if ((unsigned int)v0 <= (unsigned int)v7)
 return v2 + v3 + v4 + v5 + v6;
 v8 = (unsigned int)v3 + 5;
 if ((unsigned int)v0 <= (unsigned int)v8)
 return v2 + v3 + v4 + v5 + v6 + v7;
 v9 = (unsigned int)v3 + 6;
 if ((unsigned int)v0 <= v9)
 return v2 + v3 + v4 + v5 + v6 + v7 + v8;
 v10 = (unsigned int)v2 + (unsigned int)v3 + (unsigned int)v4 + (unsigned int)v5 + (unsigned int)v6 + (unsigned int)v7 + (unsigned int)v8 + v9;
 if ((unsigned int)v3 + 7 >= (unsigned int)v0)
 return v10;
 return v10 + (unsigned int)v3 + 7 & 4294967295;
}


// Function: sub_4010a8 at 0x4010a8
long long sub_4010a8(unsigned long a0)
{
 unsigned long long v0; // x0

 v0 = loop_while((unsigned int)a0);
 return loop_while((unsigned int)a0);
}


// Function: loop_while at 0x4010b0
unsigned long long loop_while(unsigned int a0)
{
 unsigned int v0; // w0
 unsigned int v1; // w0
 unsigned int v2; // w0
 unsigned int i; // w1
 unsigned int v4; // w2

 if (!a0)
 return 1;
 v0 = 0;
 do
 {
 v2 = v0 + 1;
 v4 = (a0 * 1717986919 >> 63 & 0xc0000000 | (a0 * 1717986919 * 0x40000000 | a0 * 1717986919 >> 34) & 1073741823) - (a0 >> 31);
 a0 = v4;
 v0 = v2;
 } while (i != a0 >> 31);
 return v1 + 1;
}


// Function: sub_4010e8 at 0x4010e8
void sub_4010e8(unsigned long a0)
{
 loop_dowhile();
 return;
}


// Function: loop_dowhile at 0x4010f0
long long loop_dowhile(unsigned int a0)
{
 unsigned int v0; // w0
 unsigned int v1; // w0
 unsigned int v2; // w0
 unsigned int i; // w1
 unsigned int v4; // w2

 v0 = 0;
 do
 {
 v2 = v0 + 1;
 v4 = (a0 * 1717986919 >> 63 & 0xc0000000 | (a0 * 1717986919 * 0x40000000 | a0 * 1717986919 >> 34) & 1073741823) - (a0 >> 31);
 a0 = v4;
 v0 = v2;
 } while (i != a0 >> 31);
 return v1 + 1;
}


// Function: sub_401118 at 0x401118
long long sub_401118(unsigned long a0)
{
 unsigned long long v0; // x0

 v0 = loop_nested((unsigned int)a0, 0);
 return loop_nested((unsigned int)a0, 0);
}


// Function: loop_nested at 0x401120
unsigned long long loop_nested(unsigned int i, unsigned int a1)
{
 unsigned int v0; // w2
 unsigned long long v1; // x0

 if (i <= 0)
 return 0;
 v0 = 0;
 v1 = 0;
 do
 {
 v0 += 1;
 if (0 < a1)
 v1 = a1 + v1 & 4294967295;
 else
 v1 &= 4294967295;
 } while (i != v0);
 return v1;
}


// Function: sub_40115c at 0x40115c
long long sub_40115c(unsigned long a0)
{
 unsigned long long v0; // x0

 v0 = loop_break((unsigned int)a0);
 return loop_break((unsigned int)a0);
}


// Function: loop_break at 0x401160
unsigned long long loop_break(unsigned int a0)
{
 switch (a0)
 {
 case 10:
 return 0;
 case 20:
 return 1;
 case 30:
 return 2;
 case 40:
 return 3;
 case 50:
 return 4;
 default:
 return 4294967295;
 }
}


// Function: loop_continue at 0x4011b0
unsigned long long loop_continue(unsigned int a0)
{
 unsigned int i; // w1
 unsigned long v10; // x1
 unsigned long long v11; // x0
 unsigned int v2; // w3
 unsigned long v3; // x1
 unsigned long long v4; // x0
 unsigned long v5; // x3
 unsigned long v6; // x4
 unsigned long long v7; // x0
 unsigned long v8; // x3
 unsigned long long v9; // x0

 if (a0 <= 0)
 return 0;
 if (a0 - 1 > 4)
 {
 i = 0;
 do
 {
 i += 1;
 } while (((a0 * 0x40000000 | a0 >> 2) & 1073741823) != i);
 v2 = a0 & 0xfffffffc;
 v3 = v2 + 1;
 v4 = unsupported_Iop_ZeroHI96ofV128();
 if (a0 == v2)
 {
 return v4;
 }
 else if (((char)v3 & 1))
 {
 v4 += v3;
 }
 }
 else
 {
 v3 = 1;
 v4 = 1;
 }
 v5 = (unsigned int)v3 + 1;
 if (a0 < (unsigned int)v5)
 return v4;
 v6 = (unsigned int)v3 + 2;
 if ((char)arm64g_calculate_condition(26, v5 & 1, 0, 0))
 v7 = v4 + v5 & 4294967295;
 else
 v7 = v4 & 4294967295;
 if (a0 < (unsigned int)v6)
 return v7;
 v8 = (unsigned int)v3 + 3;
 if ((char)arm64g_calculate_condition(26, v6 & 1, 0, 0))
 v9 = v7 + v6 & 4294967295;
 else
 v9 = v7 & 4294967295;
 if (a0 < (unsigned int)v8)
 return v9;
 v10 = (unsigned int)v3 + 4;
 if ((char)arm64g_calculate_condition(26, v8 & 1, 0, 0))
 v11 = v9 + v8 & 4294967295;
 else
 v11 = v9 & 4294967295;
 if (a0 < (unsigned int)v10)
 {
 return v11;
 }
 else if ((char)arm64g_calculate_condition(26, v10 & 1, 0, 0))
 {
 return v11 + v10 & 4294967295;
 }
 else
 {
 return v11 & 4294967295;
 }
}


// Function: sub_4012a8 at 0x4012a8
void sub_4012a8(unsigned long a0)
{
 goto_forward();
 return;
}


// Function: goto_forward at 0x4012b0
long long goto_forward(unsigned int a0)
{
 if (0 < a0)
 a0 *= a0;
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: goto_backward at 0x4012c4
unsigned long long goto_backward(unsigned int a0)
{
 unsigned long long v0; // q1
 unsigned long long v1; // q0
 unsigned int i; // w1
 unsigned int v4; // w3
 unsigned long v5; // x1
 int v6; // q2
 unsigned long v7; // d0
 unsigned long long v8; // x0

 if (a0 <= 0)
 return 1;
 if (a0 - 1 > 13)
 {
 v0 = 0x10000000100000001ULL;
 v1 = 316912650112397582603894390785ULL;
 i = 0;
 do
 {
 i += 1;
 v0 = MulV(v0, v1);
 v1 = AddV(v1, 0x40000000400000004ULL);
 } while (((a0 * 0x40000000 | a0 >> 2) & 1073741823) != i);
 v4 = a0 & 0xfffffffc;
 v5 = v4 + 1;
 v6 = unsupported_Iop_SliceV128();
 v7 = unsupported_Iop_SliceV128();
 v8 = (unsigned long long)(MulV(v7, MulV(v6, v0)));
 if (a0 == v4)
 return (unsigned long long)(MulV(v7, MulV(v6, v0)));
 }
 else
 {
 v8 = 1;
 v5 = 1;
 }
 if (a0 < (unsigned int)v5 + 1)
 {
 return v5 * v8;
 }
 else if (a0 < (unsigned int)v5 + 2)
 {
 return ((unsigned int)v5 + 1) * v5 * v8;
 }
 else if (a0 < (unsigned int)v5 + 3)
 {
 return ((unsigned int)v5 + 2) * ((unsigned int)v5 + 1) * v5 * v8;
 }
 else if (a0 < (unsigned int)v5 + 4)
 {
 return ((unsigned int)v5 + 3) * ((unsigned int)v5 + 2) * ((unsigned int)v5 + 1) * v5 * v8;
 }
 else if (a0 < (unsigned int)v5 + 5)
 {
 return ((unsigned int)v5 + 4) * ((unsigned int)v5 + 3) * ((unsigned int)v5 + 2) * ((unsigned int)v5 + 1) * v5 * v8;
 }
 else if (a0 < (unsigned int)v5 + 6)
 {
 return ((unsigned int)v5 + 5) * ((unsigned int)v5 + 4) * ((unsigned int)v5 + 3) * ((unsigned int)v5 + 2) * ((unsigned int)v5 + 1) * v5 * v8;
 }
 else if (a0 < (unsigned int)v5 + 7)
 {
 return ((unsigned int)v5 + 6) * ((unsigned int)v5 + 5) * ((unsigned int)v5 + 4) * ((unsigned int)v5 + 3) * ((unsigned int)v5 + 2) * ((unsigned int)v5 + 1) * v5 * v8;
 }
 else if (a0 < (unsigned int)v5 + 8)
 {
 return ((unsigned int)v5 + 7) * ((unsigned int)v5 + 6) * ((unsigned int)v5 + 5) * ((unsigned int)v5 + 4) * ((unsigned int)v5 + 3) * ((unsigned int)v5 + 2) * ((unsigned int)v5 + 1) * v5 * v8;
 }
 else if (a0 < (unsigned int)v5 + 9)
 {
 return ((unsigned int)v5 + 8) * ((unsigned int)v5 + 7) * ((unsigned int)v5 + 6) * ((unsigned int)v5 + 5) * ((unsigned int)v5 + 4) * ((unsigned int)v5 + 3) * ((unsigned int)v5 + 2) * ((unsigned int)v5 + 1) * v5 * v8;
 }
 else if (a0 < (unsigned int)v5 + 10)
 {
 return ((unsigned int)v5 + 9) * ((unsigned int)v5 + 8) * ((unsigned int)v5 + 7) * ((unsigned int)v5 + 6) * ((unsigned int)v5 + 5) * ((unsigned int)v5 + 4) * ((unsigned int)v5 + 3) * ((unsigned int)v5 + 2) * ((unsigned int)v5 + 1) * v5 * v8;
 }
 else if (a0 < (unsigned int)v5 + 11)
 {
 return ((unsigned int)v5 + 10) * ((unsigned int)v5 + 9) * ((unsigned int)v5 + 8) * ((unsigned int)v5 + 7) * ((unsigned int)v5 + 6) * ((unsigned int)v5 + 5) * ((unsigned int)v5 + 4) * ((unsigned int)v5 + 3) * ((unsigned int)v5 + 2) * ((unsigned int)v5 + 1) * v5 * v8;
 }
 else if (a0 < (unsigned int)v5 + 12)
 {
 return ((unsigned int)v5 + 11) * ((unsigned int)v5 + 10) * ((unsigned int)v5 + 9) * ((unsigned int)v5 + 8) * ((unsigned int)v5 + 7) * ((unsigned int)v5 + 6) * ((unsigned int)v5 + 5) * ((unsigned int)v5 + 4) * ((unsigned int)v5 + 3) * ((unsigned int)v5 + 2) * ((unsigned int)v5 + 1) * v5 * v8 & 4294967295;
 }
 else
 {
 return 2147483647;
 }
}


// Function: sub_40140c at 0x40140c
void sub_40140c(unsigned long a0, unsigned long a1)
{
 ternary_op();
 return;
}


// Function: ternary_op at 0x401410
long long ternary_op(unsigned int a0, unsigned int a1)
{
 if (a0 > a1)
 return a0;
 return a1;
}


// Function: sub_40141c at 0x40141c
void sub_40141c()
{
 test_control_flow_l1();
 return;
}


// Function: test_control_flow_l1 at 0x401420
extern char __dollar_d;

int test_control_flow_l1()
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(&__dollar_d);
 __printf_chk(1, "CF-L1-01 (sequential_ops): %d\n", 21);
 __printf_chk(1, "CF-L1-02 (single_if): %d\n", 20);
 __printf_chk(1, "CF-L1-02 (single_if): %d\n", 4294967291);
 __printf_chk(1, "CF-L1-03 (if_else): %d\n", 1);
 __printf_chk(1, "CF-L1-03 (if_else): %d\n", 0);
 __printf_chk(1, "CF-L1-04 (nested_if_2): %d\n", 15);
 __printf_chk(1, "CF-L1-04 (nested_if_2): %d\n", 10);
 __printf_chk(1, "CF-L1-04 (nested_if_2): %d\n", 0);
 __printf_chk(1, "CF-L1-05 (nested_if_deep): %d\n", 5);
 __printf_chk(1, "CF-L1-06 (if_elseif_chain): %d\n", 20);
 __printf_chk(1, "CF-L1-07 (if_elseif_long): %d\n", 400);
 __printf_chk(1, "CF-L1-08 (switch_small): %d\n", 50);
 __printf_chk(1, "CF-L1-09 (switch_large): %d\n", 70);
 __printf_chk(1, "CF-L1-10 (switch_default): %d\n", 0);
 __printf_chk(1, "CF-L1-11 (switch_fallthrough): %d\n", 21);
 __printf_chk(1, "CF-L1-12 (loop_for_fixed): %d\n", 45);
 __printf_chk(1, "CF-L1-13 (loop_while): %d\n", 5);
 __printf_chk(1, "CF-L1-14 (loop_dowhile): %d\n", 4);
 __printf_chk(1, "CF-L1-15 (loop_nested): %d\n", 12);
 __printf_chk(1, "CF-L1-16 (loop_break): %d\n", 2);
 __printf_chk(1, "CF-L1-16 (loop_break): %d\n", 4294967295);
 __printf_chk(1, "CF-L1-17 (loop_continue): %d\n", 25);
 __printf_chk(1, "CF-L1-18 (goto_forward): %d\n", 50);
 __printf_chk(1, "CF-L1-18 (goto_forward): %d\n", 4294967290);
 __printf_chk(1, "CF-L1-19 (goto_backward): %d\n", 120);
 __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 10);
 return __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 8);
}


// Function: sub_401658 at 0x401658
long long sub_401658(unsigned long a0)
{
 unsigned long long v0; // x0

 v0 = loop_multi_exit((unsigned int)a0);
 return loop_multi_exit((unsigned int)a0);
}


// Function: loop_multi_exit at 0x401660
unsigned long long loop_multi_exit(unsigned int a0)
{
 unsigned int v0; // w0
 unsigned int v1; // w1

 if (a0 != 1)
 {
 if (a0 == 2)
 {
 v0 = 0;
LABEL_4016f0:
 v1 = 1;
 }
 else if (a0 == 3)
 {
 v0 = 0;
LABEL_4016fc:
 v1 = 2;
 }
 else if (a0 == 4)
 {
 v0 = 0;
 v1 = 3;
 }
 else if (a0 == 5)
 {
 v0 = 1;
LABEL_4016dc:
 v1 = 0;
 }
 else if (a0 == 6)
 {
 v0 = 1;
 v1 = 1;
 }
 else if (a0 == 7)
 {
 v0 = 1;
 v1 = 2;
 }
 else if (a0 != 8)
 {
 v0 = 2;
 if (a0 == 9)
 goto LABEL_4016dc;
 v0 = 2;
 if (a0 == 10)
 goto LABEL_4016f0;
 v0 = 2;
 if (a0 == 11)
 goto LABEL_4016fc;
 if (a0 != 12)
 return 4294967295;
 v0 = 2;
 v1 = 3;
 }
 else
 {
 v0 = 1;
 v1 = 3;
 }
 return v1 + v0 * 10;
 }
 v0 = 0;
 goto LABEL_4016dc;
}


// Function: sub_401748 at 0x401748
long long sub_401748()
{
 unsigned long long v0; // x0
 unsigned int local_ptr = 0;

 v0 = infinite_loop(&local_ptr);
 return infinite_loop(&local_ptr);
}


// Function: infinite_loop at 0x401750
unsigned int infinite_loop(unsigned int *ptr)
{
 unsigned int v0; // w1

 v0 = 0;
 while (*(ptr) != 1)
 {
 v0 += 1;
 if (v0 == 1001)
 {
 *(ptr) = 1;
 return v0;
 }
 }
 return v0;
}


// Function: sub_401788 at 0x401788
long long sub_401788(unsigned long a0)
{
 unsigned long long v0; // x0

 v0 = multi_return(a0);
 return multi_return(a0);
}


// Function: multi_return at 0x401790
unsigned long long multi_return(unsigned long a0)
{
 if (((char)(a0 >> 31) & 1))
 {
 return 4294967295;
 }
 else if (100 < (__ROL__((unsigned int)a0, 1) & 4294967294))
 {
 return 4294967294;
 }
 else if ((char)arm64g_calculate_condition(10, a0 & 4294967295 & 1, 0, 0))
 {
 return __ROL__((unsigned int)a0, 1) & 4294967294;
 }
 else
 {
 return (unsigned int)a0 + 1;
 }
}


// Function: conditional_return at 0x4017c0
long long conditional_return(unsigned long a0)
{
 unsigned int v0; // w1

 if (!(unsigned int)a0)
 v0 = 0;
 else
 v0 = -((unsigned int)a0);
 if (!((char)arm64g_calculate_condition(211, a0 & 4294967295, 0, 0)))
 return ((unsigned int)a0 * 2 | (unsigned int)a0 >> 31) & 4294967294;
 return v0;
}


// Function: duffs_device at 0x4017d4
unsigned int duffs_device(unsigned int *a0, unsigned int *iter, unsigned int a2)
{
 unsigned int *cur; // x3
 unsigned long v1; // x4
 unsigned int *p; // x3
 unsigned int node; // w5
 unsigned int *v3; // x1
 unsigned int *v4; // x1
 unsigned int *v5; // x1
 unsigned int *ptr; // x3
 unsigned int *v7; // x1
 unsigned int *addr; // x3
 unsigned int *v9; // x1

 cur = a0;
 if (a2 <= 0)
 return 4294967295;
 v1 = a2 & 7;
 node = a2 + 7 >> 31 & 0xe0000000 | ((a2 + 7) * 0x20000000 | a2 + 7 >> 3) & 536870911;
 if ((unsigned int)v1 != 4)
 {
 if ((char)arm64g_calculate_condition(195, v1 & 4294967295, 4, 0))
 {
 v3 = iter;
 if ((unsigned int)v1 != 6)
 {
 if ((unsigned int)v1 == 7)
 {
 v4 = iter + 1;
 cur[0] = *(iter);
 cur = &cur[1];
 v3 = v4;
 goto LABEL_401840;
 }
 else
 {
 if ((unsigned int)v1 == 5)
 {
 v5 = iter + 1;
 cur[0] = *(iter);
 ptr = &cur[1];
 iter = &v5[1];
 ptr[0] = v5[0];
 cur = &ptr[1];
 }
 }
 }
 }
 else if ((unsigned int)v1 != 2 && (unsigned int)v1 != 3 && (unsigned int)v1 == 1)
 {
 node -= 1;
 cur[0] = *(iter);
 if (node == 1)
 return a2;
 }
 }
 while (true)
 {
 iter += 1;
 cur[0] = *(iter);
 cur = &cur[1];
 iter += 1;
 node -= 1;
 cur[0] = *(iter);
 cur = &cur[1];
 cur[0] = *(iter);
 if (node == 1)
 break;
 iter += 1;
 cur = &cur[1];
 v7 = iter + 1;
 cur[0] = *(iter);
 addr = &cur[1];
 v3 = &v7[1];
 addr[0] = v7[0];
 cur = &addr[1];
LABEL_401840:
 v9 = &v3[1];
 cur[0] = v3[0];
 p = &cur[1];
 iter = &v9[1];
 p[0] = v9[0];
 cur = &p[1];
 iter += 1;
 cur[0] = *(iter);
 cur = &cur[1];
 }
 return a2;
}


// Function: sub_4018bc at 0x4018bc
long long sub_4018bc(unsigned long a0)
{
 unsigned long long v0; // x0

 v0 = loop_complex_cond(0);
 return loop_complex_cond(0);
}


// Function: loop_complex_cond at 0x4018c0
unsigned int loop_complex_cond(unsigned int a0)
{
 unsigned int v0; // w1
 unsigned int v1; // w2
 unsigned int v2; // w0

 if (a0 <= 0)
 return a0;
 v0 = a0 - 1;
 if (v0 > 2)
 {
 v0 = a0 - 2;
 if (v0 > 4)
 {
 v0 = a0 - 3;
 if (v0 > 6)
 {
 v0 = a0 - 4;
 if (v0 > 8)
 {
 v0 = a0 - 5;
 if (v0 > 10)
 {
 v0 = a0 - 6;
 if (v0 > 12)
 {
 v0 = a0 - 7;
 if (v0 > 14)
 {
 v0 = a0 - 8;
 if (v0 > 16)
 {
 v0 = a0 - 9;
 if (v0 > 18)
 {
 v0 = a0 - 10;
 v1 = 20;
 v2 = 10;
 }
 else
 {
 v2 = 9;
 v1 = 18;
 }
 }
 else
 {
 v2 = 8;
 v1 = 16;
 }
 }
 else
 {
 v2 = 7;
 v1 = 14;
 }
 }
 else
 {
 v2 = 6;
 v1 = 12;
 }
 }
 else
 {
 v2 = 5;
 v1 = 10;
 }
 }
 else
 {
 v2 = 4;
 v1 = 8;
 }
 }
 else
 {
 v2 = 3;
 v1 = 6;
 }
 }
 else
 {
 v2 = 2;
 v1 = 4;
 }
 }
 else
 {
 v2 = 1;
 v1 = 2;
 }
 return v0 + v1 + v2;
}


// Function: sub_4019b8 at 0x4019b8
void sub_4019b8(unsigned long a0)
{
 loop_modify_var();
 return;
}


// Function: loop_modify_var at 0x4019c0
unsigned long long loop_modify_var(unsigned int a0)
{
 unsigned long long v0; // x0
 unsigned long long v1; // x1
 unsigned int v2; // w2
 unsigned long long v3; // x1
 unsigned long long v4; // x0
 unsigned int v5; // w3
 unsigned long long v6; // x0

 v0 = 0;
 if (a0 <= 0)
 return 0;
 v1 = 1;
 v2 = 0;
 if (a0 == 1)
 return 0;
 while (true)
 {
 v3 = v1;
 v4 = v0;
 v5 = (unsigned int)v3 + 1;
 v6 = v4 + v3;
 if ((unsigned int)v3 > 5)
 {
 v2 += 3;
 v0 = v6;
 v1 = v2 + 4;
 if ((unsigned int)v1 >= a0)
 return v4 + v3;
 }
 else
 {
 v2 = v3;
 v0 = v6;
 v1 = v5;
 if (v5 >= a0)
 return v4 + v3;
 }
 }
}


// Function: sub_401a18 at 0x401a18
long long sub_401a18()
{
 unsigned long long v0; // x0
 unsigned int local_state = 0;

 v0 = loop_external_state(&local_state);
 return loop_external_state(&local_state);
}


// Function: loop_external_state at 0x401a20
unsigned int loop_external_state(unsigned int *a0)
{
 unsigned int v0; // w1

 v0 = 0;
 do
 {
 } while (!*(a0) && (v0 += 1, v0 != 101));
 return v0;
}


// Function: tail_recursion at 0x401a44
unsigned long long tail_recursion(unsigned int a0, unsigned long long a1)
{
 unsigned long v0; // x2
 unsigned long v1; // x4
 unsigned long long v2; // q1
 unsigned int i; // w0
 unsigned long long v4; // q0
 unsigned long v6; // x3
 int v7; // q2
 unsigned long v8; // d0
 unsigned long long v9; // x0

 v0 = a0;
 if ((unsigned int)v0 <= 1)
 return a1 & 4294967295;
 v1 = (unsigned int)v0 - 1;
 if ((unsigned int)v0 - 2 > 13)
 {
 v2 = 0x10000000100000001ULL;
 i = 0;
 v4 = AddV(v0 & 4294967295 | (v0 & 4294967295) * 0x100000000, 0xfffffffdfffffffeffffffff00000000ULL);
 do
 {
 i += 1;
 v2 = MulV(v2, v4);
 v4 = AddV(v4, 0xFFFFFFFFFFFFFFFEULL);
 } while ((((unsigned int)v1 * 0x40000000 | (unsigned int)v1 >> 2) & 1073741823) != i);
 v6 = (unsigned int)v1 & 0xfffffffc;
 v0 -= v6;
 v7 = unsupported_Iop_SliceV128();
 v8 = unsupported_Iop_SliceV128();
 v9 = a1 * (unsigned long long)(MulV(v8, MulV(v7, v2)));
 if ((unsigned int)v1 == (unsigned int)v6)
 return a1 * (unsigned long long)(MulV(v8, MulV(v7, v2)));
 v1 = (unsigned int)v0 - 1;
 }
 else
 {
 v9 = a1 & 4294967295;
 }
 return ((unsigned int)v0 - 6) * ((unsigned int)v0 - 5) * ((unsigned int)v0 - 4) * ((unsigned int)v0 - 3) * ((unsigned int)v0 - 2) * v1 * v0 * v9;
}


// Function: indirect_recursion_a at 0x401ba4
unsigned long long indirect_recursion_a(unsigned long long a0, unsigned int a1)
{
 unsigned int v0; // w2
 unsigned int v1; // w0
 unsigned long v2; // x0
 unsigned int ptr; // w3

 v0 = a1 - 4;
 if (a1 <= 0)
 return a0;
 while (true)
 {
 if (((char)a0 & 1))
 {
 if (a1 == 1)
 return (unsigned int)a0 * 3 + 1;
 v2 = (unsigned int)a0 * 3 + 2;
 if (a1 <= 2)
 return v2;
 if (!(v2 & 1))
 goto LABEL_401c1c;
 goto LABEL_401bd0;
 }
 else
 {
 if (a1 == 1 || !((v2 = (unsigned long long)(((unsigned int)a0 + ((unsigned int)a0 >> 31) >> 31 & 0x80000000 | (((unsigned int)a0 + ((unsigned int)a0 >> 31)) * 0x80000000 | (unsigned int)a0 + ((unsigned int)a0 >> 31) >> 1) & 2147483647) + 1), a1 > 2)))
 break;
 if (((char)v2 & 1))
 {
LABEL_401bd0:
 v1 = (unsigned int)v2 * 3;
 if (a1 == 3)
 return v1 + 1;
 a0 = v1 + 2;
 ptr = v0;
 goto LABEL_401be4;
 }
 else
 {
LABEL_401c1c:
 if (a1 == 3)
 return (unsigned int)v2 + ((unsigned int)v2 >> 31) >> 31 & 0x80000000 | (((unsigned int)v2 + ((unsigned int)v2 >> 31)) * 0x80000000 | (unsigned int)v2 + ((unsigned int)v2 >> 31) >> 1) & 2147483647;
 a0 = ((unsigned int)v2 + ((unsigned int)v2 >> 31) >> 31 & 0x80000000 | (((unsigned int)v2 + ((unsigned int)v2 >> 31)) * 0x80000000 | (unsigned int)v2 + ((unsigned int)v2 >> 31) >> 1) & 2147483647) + 1;
 ptr = v0;
LABEL_401be4:
 v0 -= 4;
 a1 -= 4;
 if (!ptr)
 return a0;
 }
 }
 }
 return (unsigned int)a0 + ((unsigned int)a0 >> 31) >> 31 & 0x80000000 | (((unsigned int)a0 + ((unsigned int)a0 >> 31)) * 0x80000000 | (unsigned int)a0 + ((unsigned int)a0 >> 31) >> 1) & 2147483647;
}


// Function: sub_401c38 at 0x401c38
void sub_401c38(unsigned long a0, unsigned long a1)
{
 call_func_ptr();
 return;
}


// Function: call_func_ptr at 0x401c40
int call_func_ptr(unsigned long a0, unsigned long a1)
{
 goto a0;
}


// Function: sub_401c4c at 0x401c4c
void sub_401c4c(unsigned long a0)
{
 call_func_ptr_array();
 return;
}


// Function: call_func_ptr_array at 0x401c50
extern unsigned long long __dollar_d;
extern char __stack_chk_guard;
extern unsigned long long g_414018;
extern unsigned long long g_414020;

unsigned long long call_func_ptr_array(unsigned int a0, unsigned long a1)
{
 char *v0; // [bp-0x30]
 unsigned long v1; // [bp-0x20]
 unsigned long v2; // [bp-0x18]
 unsigned long v3; // [bp-0x10]
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v4 = *((long long *)&__stack_chk_guard);
 v1 = __dollar_d;
 v2 = g_414018;
 v3 = g_414020;
 if (2 >= a0)
 {
 if (v4 == *((long long *)&__stack_chk_guard))
 goto (&v1)[a0];
 }
 else
 {
 if (v4 == *((long long *)&__stack_chk_guard))
 return 4294967295;
 }
 __stack_chk_fail(); /* do not return */
}


// Function: call_virtual_func at 0x401cf0
unsigned int call_virtual_func(unsigned long a0, unsigned int a1)
{
 return (a1 * 2 | a1 >> 31) & 4294967294;
}


// Function: sub_401cf8 at 0x401cf8
long long sub_401cf8(unsigned long a0, unsigned long a1)
{
 unsigned long long v0; // x0

 v0 = 0;
 return 0;
}


// Function: process_with_callback at 0x401d00
unsigned long long process_with_callback(unsigned int *a0, unsigned int a1, unsigned long long *a2)
{
 unsigned long long v4; // x21
 unsigned long long v5; // x22
 unsigned long long v6; // x20
 unsigned int *i; // x19
 unsigned long long v8; // x20
 unsigned int *v9; // x19
 unsigned long long v10; // x0
 unsigned long long v11; // x20
 char *v0; // [bp-0x30]
 unsigned long long v1; // [bp-0x10]
 unsigned long long v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v0 = &v3;
 if (a1 <= 0)
 return 0;
 v1 = v4;
 v2 = v5;
 v6 = 0;
 i = a0;
 do
 {
 v8 = v6;
 v9 = i + 1;
 v11 = v8 + a2(*(i));
 i = v9;
 v6 = v11;
 } while (i != (char *)&a0[a1] + 3);
 return v8 + v10 & 4294967295;
}


// Function: sub_401d6c at 0x401d6c
void sub_401d6c()
{
 test_control_flow_l2();
 return;
}


// Function: test_control_flow_l2 at 0x401d70
extern char __stack_chk_guard;
extern char g_402760;

unsigned long long test_control_flow_l2()
{
 unsigned long long v11; // x2
 unsigned long long v13; // x0
 unsigned int i; // w1
 unsigned long long v15; // x2
 unsigned long long v16; // x2
 char *v0; // [bp-0x70]
 unsigned int v1; // [bp-0x50]
 unsigned int result; // [bp-0x4c]
 unsigned long long v3; // [bp-0x48]
 unsigned long long v4; // [bp-0x38]
 unsigned long long flag1; // [bp-0x28]
 unsigned long long flag2; // [bp-0x20]
 unsigned long long flag3; // [bp-0x18]
 unsigned long long flag4; // [bp-0x10]
 unsigned long v9; // [bp-0x8]
 char v10; // [bp+0x0]

 v0 = &v10;
 v9 = *((long long *)&__stack_chk_guard);
 puts(&g_402760);
 __printf_chk(1, "CF-L2-01 (loop_multi_exit): %d\n", 12);
 v1 = 0;
 v11 = 0;
 do
 {
 if (v1 == 1)
 goto LABEL_401dd4;
 } while ((v11 = (unsigned long long)((unsigned int)v11 + 1), (unsigned int)v11 != 1001));
 v1 = 1;
LABEL_401dd4:
 __printf_chk(1, "CF-L2-02 (infinite_loop): %d\n", v11);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4294967295);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4294967294);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4);
 __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 10);
 __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 5);
 flag1 = 0;
 flag2 = 0;
 flag3 = 0;
 flag4 = 0;
 v3 = 316912650112397582603894390785;
 v4 = 633825300243241909290088267781;
 __printf_chk(1, "CF-L2-05 (duffs_device): %d\n", duffs_device(&flag1, &v3, 8) & 4294967295);
 __printf_chk(1, "CF-L2-06 (loop_complex_cond): %d\n", 18);
 v13 = 1;
 i = 0;
 v15 = 1;
 if (1)
 goto LABEL_401ed0;
 while (i == 5)
 {
 i += 3;
 v13 = 9;
 while (true)
 {
 v15 += v13;
 if (5 < (unsigned int)v13)
 break;
LABEL_401ed0:
 v13 = (unsigned int)v13 + 1;
 i = v13;
 }
 }
 __printf_chk(1, "CF-L2-07 (loop_modify_var): %d\n", v15);
 v16 = 0;
 result = 0;
 do
 {
 } while (!result && (v16 = (unsigned long long)((unsigned int)v16 + 1), (unsigned int)v16 != 101));
 __printf_chk(1, "CF-L2-08 (loop_external_state): %d\n", v16);
 __printf_chk(1, "CF-L2-09 (recursion_factorial): %d\n", 120);
 __printf_chk(1, "CF-L2-10 (tail_recursion): %d\n", 120);
 __printf_chk(1, "CF-L2-11 (indirect_recursion): %d\n", 3);
 __printf_chk(1, "CF-L2-12 (call_func_ptr): %d\n", 10);
 __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", 10);
 __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", 120);
 __printf_chk(1, "CF-L2-15 (process_with_callback): %d\n", 30);
 if (v9 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return (unsigned long long)&__stack_chk_guard;
}


// Function: non_local_jump at 0x401fe4
extern unsigned long long __data_start;
extern unsigned long long jump_buffer;

unsigned long long non_local_jump(unsigned int a0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 if (_setjmp(&jump_buffer, &__data_start))
 {
 return 4294967295;
 }
 else if (((char)(a0 >> 31) & 1))
 {
 __longjmp_chk(&jump_buffer, 1); /* do not return */
 }
 else if (100 >= a0)
 {
 return __ROL__(a0, 1) & 4294967294;
 }
 else
 {
 __longjmp_chk(&jump_buffer, 2); /* do not return */
 }
}


// Function: sub_402048 at 0x402048
long long sub_402048(unsigned long a0)
{
 unsigned long long v0; // x0

 v0 = cpp_exception(a0);
 return cpp_exception(a0);
}


// Function: cpp_exception at 0x402050
unsigned long long cpp_exception(unsigned long a0)
{
 if (((char)(a0 >> 31) & 1))
 {
 return 4294967295;
 }
 else if (100 >= (unsigned int)a0)
 {
 return ((unsigned int)a0 * 2 | (unsigned int)a0 >> 31) & 4294967294;
 }
 else
 {
 return 4294967294;
 }
}


// Function: large_jump_table at 0x402074
extern char __stack_chk_guard;
extern unsigned long long g_414028;
extern unsigned long long g_414038;
extern unsigned long long g_414048;
extern unsigned long long g_414058;
extern unsigned long long g_414068;

unsigned long long large_jump_table(unsigned int a0, unsigned long a1, unsigned long a2)
{
 char *v0; // [bp-0x70]
 int v1; // [bp-0x58]
 int v2; // [bp-0x48]
 int v3; // [bp-0x38]
 int v4; // [bp-0x28]
 int v5; // [bp-0x18]
 unsigned long v6; // [bp-0x8]
 char v7; // [bp+0x0]

 v0 = &v7;
 v6 = *((long long *)&__stack_chk_guard);
 *((unsigned long long *)&v1) = g_414028;
 *((unsigned long long *)&v2) = g_414038;
 *((unsigned long long *)&v3) = g_414048;
 *((unsigned long long *)&v4) = g_414058;
 *((unsigned long long *)&v5) = g_414068;
 if (9 >= a0)
 {
 if (v6 == *((long long *)&__stack_chk_guard))
 goto *((long long *)((char *)&v1 + 8 * a0));
 }
 else
 {
 if (v6 == *((long long *)&__stack_chk_guard))
 return 4294967295;
 }
 __stack_chk_fail(); /* do not return */
}


// Function: conditional_func_ptr at 0x402124
int conditional_func_ptr(unsigned int a0, unsigned int a1)
{
 unsigned long long v0; // x1
 unsigned long long v1; // x2
 unsigned long long v2; // x2

 if (!a0)
 return double_value(a1);
 v0 = recursion_factorial;
 v1 = triple_value;
 if (a0 == 1)
 v2 = v1;
 else
 v2 = v0;
 goto v2;
}


// Function: state_machine at 0x402160
unsigned long long state_machine(unsigned long long a0, unsigned long a1)
{
 unsigned int v0; // w0

 if ((unsigned int)a1 == 2)
 {
 return a1 & 4294967295;
 }
 else if ((char)arm64g_calculate_condition(195, a1 & 4294967295, 2, 0))
 {
 if ((unsigned int)a0)
 v0 = a1;
 else
 v0 = 0;
 if ((unsigned int)a1 != 3)
 return 3;
 return v0;
 }
 else if ((unsigned int)a1)
 {
 if ((unsigned int)a1 != 1)
 {
 return 3;
 }
 else if ((unsigned int)a0 == 2)
 {
 return a0;
 }
 else if ((unsigned int)a0 == 99)
 {
 return 3;
 }
 else
 {
 return a1 & 4294967295;
 }
 }
 else
 {
 if ((unsigned int)a0 != 1)
 return 0;
 return 1;
 }
}


// Function: fsm_func_table at 0x4021c4
extern char __stack_chk_guard;
extern unsigned long long g_414078;
extern unsigned long long g_414088;

unsigned long long fsm_func_table(unsigned long a0, unsigned int a1)
{
 char *v0; // [bp-0x40]
 int v1; // [bp-0x28]
 int v2; // [bp-0x18]
 unsigned long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v3 = *((long long *)&__stack_chk_guard);
 *((unsigned long long *)&v2) = g_414088;
 *((unsigned long long *)&v1) = g_414078;
 if (3 >= a1)
 {
 if (v3 == *((long long *)&__stack_chk_guard))
 goto *((long long *)((char *)&v1 + 8 * a1));
 }
 else
 {
 if (v3 == *((long long *)&__stack_chk_guard))
 return 3;
 }
 __stack_chk_fail(); /* do not return */
}


// Function: sub_402258 at 0x402258
void sub_402258(unsigned long a0, unsigned long a1)
{
 computed_goto();
 return;
}


// Function: computed_goto at 0x402260
extern char __stack_chk_guard;
extern unsigned long long g_414098;
extern unsigned long long g_4140a8;

unsigned long long computed_goto(unsigned long a0, unsigned int a1)
{
 char *v0; // [bp-0x40]
 int v1; // [bp-0x28]
 int v2; // [bp-0x18]
 unsigned long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v3 = *((long long *)&__stack_chk_guard);
 *((unsigned long long *)&v2) = g_4140a8;
 *((unsigned long long *)&v1) = g_414098;
 if (3 >= a1)
 {
 goto *((long long *)((char *)&v1 + 8 * a1));
 }
 else if (v3 == *((long long *)&__stack_chk_guard))
 {
 return 4294967295;
 }
 else
 {
 __stack_chk_fail(); /* do not return */
 }
}


// Function: obfuscated_cf at 0x4022f0
unsigned int obfuscated_cf(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: sub_4022f8 at 0x4022f8
void sub_4022f8(unsigned long a0)
{
 opaque_predicate();
 return;
}


// Function: opaque_predicate at 0x402300
unsigned int opaque_predicate(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: sub_402308 at 0x402308
void sub_402308(unsigned long a0)
{
 overlapped_code();
 return;
}


// Function: overlapped_code at 0x402310
unsigned int overlapped_code(unsigned long a0)
{
 if (!((char)arm64g_calculate_condition(10, a0 & 1, 0, 0)))
 return (unsigned int)a0 * 3 + 1;
 return (unsigned int)a0 + ((unsigned int)a0 >> 31) >> 31 & 0x80000000 | __ROL__((unsigned int)a0 + ((unsigned int)a0 >> 31), 31) & 2147483647;
}


// Function: sub_402328 at 0x402328
void sub_402328()
{
 test_control_flow_l3();
 return;
}


// Function: test_control_flow_l3 at 0x402330
extern char __stack_chk_guard;
extern char g_402980;

unsigned long long test_control_flow_l3()
{
 char *v0; // [bp-0x40]
 unsigned long long v1; // [bp-0x20]
 unsigned long v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v0 = &v3;
 v2 = *((long long *)&__stack_chk_guard);
 puts(&g_402980);
 __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", non_local_jump_constprop_0() & 4294967295);
 __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", non_local_jump(4294967291) & 4294967295);
 __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", 10);
 __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", 4294967295);
 __printf_chk(1, "CF-L3-03 (large_jump_table): %d\n", 15);
 __printf_chk(1, "CF-L3-04 (conditional_func_ptr): %d\n", 10);
 __printf_chk(1, "CF-L3-05 (state_machine): %d\n", 1);
 __printf_chk(1, "CF-L3-06 (fsm_func_table): %d\n", 2);
 v1 = 0x3000000020000000100000000;
 __printf_chk(1, "CF-L3-07 (computed_goto): %d\n", computed_goto(&v1, 2) & 4294967295);
 __printf_chk(1, "CF-L3-08 (obfuscated_cf): %d\n", 10);
 __printf_chk(1, "CF-L3-09 (opaque_predicate): %d\n", 10);
 __printf_chk(1, "CF-L3-10 (overlapped_code): %d\n", 16);
 if (v2 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return &__stack_chk_guard;
}



/* CRT stub function _fini removed by preprocessor */


