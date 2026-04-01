// Angr Decompilation of 1_clang_O1_no_g
// Platform: X86

#include <stdio.h>
#include <setjmp.h>
#include <stdlib.h>
#include <stdbool.h>

#define CONCAT(a, b) (((unsigned long long)(a) << 32) | (unsigned long long)(b))

/* Forward declarations */
unsigned int frame_dummy(void);
unsigned int deregister_tm_clones(void);
unsigned int register_tm_clones(void);
unsigned int __do_global_ctors_aux(void);
unsigned int * __do_global_dtors_aux(void);
void x86_get_pc_thunk_dx(void);
void x86_get_pc_thunk_bx(void);
void sub_4010cb(void);
void sub_4010cc(void);
void sub_4010d4(void);
void sub_401113(void);
void sub_401119(void);
void sub_401167(void);
void sub_4011fa(void);
void sub_401211(unsigned int a0, unsigned int a1, unsigned int a2);
void sub_40122f(unsigned int a0);
void sub_40123c(unsigned int a0);
void sub_40124b(unsigned int a0, unsigned int a1);
void sub_401267(unsigned int a0);
void sub_4012af(unsigned int a0);
void sub_4012e6(unsigned int a0);
void sub_401312(unsigned int a0);
void sub_401336(unsigned int a0);
void sub_401356(unsigned int a0);
void sub_401385(unsigned int a0);
void sub_4013ae(unsigned int a0);
void sub_4013f8(unsigned int a0);
void sub_401448(unsigned int a0);
void sub_401485(unsigned int a0);
void sub_4014cf(unsigned int a0);
void sub_4014e4(unsigned int a0);
void sub_40152a(unsigned int a0, unsigned int a1);
int sub_40153e(void);
int sub_40178d(void);
void sub_401803(void);
void sub_401848(unsigned int a0);
void sub_40187d(unsigned int a0);
void sub_4018a7(unsigned int a0);
int sub_4018c1(void);
void sub_401982(unsigned int a0);
void sub_4019c8(unsigned int a0);
void sub_4019fa(unsigned int a0);
int sub_401a23(void);
int sub_401a61(void);
int sub_401aa5(void);
int sub_401b0b(void);
void sub_401b61(unsigned int a0);
void sub_401b77(unsigned int a0);
void sub_401b88(unsigned int a0, unsigned int a1);
int sub_401b97(void);
int sub_401be5(void);
void sub_401c58(void);
int sub_401eb6(void);
void sub_401f22(unsigned int a0);
int sub_401f4d(void);
void sub_401f88(unsigned int a0, unsigned int a1);
void sub_401f99(unsigned int a0, unsigned int a1);
void sub_401fa9(unsigned int a0, unsigned int a1);
void sub_401fba(unsigned int a0, unsigned int a1);
void sub_401fd3(unsigned int a0, unsigned int a1);
void sub_401ff5(unsigned int a0, unsigned int a1);
void sub_402009(unsigned int a0, unsigned int a1);
void sub_402019(unsigned int a0, unsigned int a1);
void sub_402029(unsigned int a0, char a1);
void sub_40203b(unsigned int a0, char a1);
int sub_40204b(void);
void sub_40208f(unsigned int a0, unsigned int a1);
void sub_402111(unsigned int a0);
void sub_40212b(unsigned int a0);
void sub_402148(void);
void sub_402156(unsigned int a0);
void sub_40216e(unsigned int a0, unsigned int a1);
void sub_4021a7(unsigned int a0);
void sub_4021b7(unsigned int a0);
void sub_4021c7(unsigned int a0);
int sub_4021ea(void);
int sub_40232a(void);
void sub_402356(void);
void sub_4023a2(void);
int x86_get_pc_thunk_di(int a0, void *a1);
unsigned int recursion_factorial(unsigned int a0);
unsigned int triple_value(unsigned int a0);
unsigned int double_value(unsigned int a0);
int sequential_ops(unsigned int a0, unsigned int a1, unsigned int a2);
int single_if(unsigned int a0);
int if_else(unsigned int a0);
unsigned int nested_if_2(unsigned int a0, unsigned int a1);
unsigned int nested_if_deep(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4);
unsigned int if_elseif_chain(unsigned int a0);
unsigned int if_elseif_long(unsigned int a0);
unsigned int switch_small(unsigned int a0);
unsigned int switch_large(unsigned int a0);
unsigned int switch_default(unsigned int a0);
unsigned int switch_fallthrough(unsigned int a0);
unsigned int loop_for_fixed(unsigned int a0);
unsigned int loop_while(unsigned int a0);
unsigned int loop_dowhile(unsigned int a0);
unsigned int loop_break(unsigned int i);
unsigned int loop_continue(unsigned int a0);
unsigned int goto_forward(unsigned int a0);
unsigned int goto_backward(unsigned int a0);
int ternary_op(unsigned int a0, unsigned int a1);
int test_control_flow_l1(void);
unsigned int loop_multi_exit(unsigned int a0);
unsigned int infinite_loop(unsigned int *ptr);
unsigned int multi_return(unsigned int a0);
unsigned int conditional_return(unsigned int a0);
unsigned int duffs_device(unsigned int a0, unsigned int a1, unsigned int a2);
int loop_complex_cond(unsigned int a0);
unsigned int loop_modify_var(unsigned int a0);
unsigned int loop_external_state(unsigned int *a0);
int tail_recursion(unsigned int a0, unsigned int a1);
unsigned int indirect_recursion_a(unsigned int a0, unsigned int a1);
int call_func_ptr(unsigned int (*a0)(unsigned int), unsigned int a1);
unsigned int call_virtual_func(unsigned int a0, unsigned int a1);
unsigned int process_with_callback(unsigned int a0, unsigned int i, unsigned int (*a2)(unsigned int));
int test_control_flow_l2(void);
unsigned int non_local_jump(unsigned int a0);
unsigned int cpp_exception(unsigned int a0);
unsigned int large_jump_table(unsigned int a0, unsigned int a1, unsigned int a2);
int op_add(unsigned int a0, unsigned int a1);
int op_sub(unsigned int a0, unsigned int a1);
int op_mul(unsigned int a0, unsigned int a1);
unsigned int op_div(unsigned int a0, unsigned int a1);
unsigned int op_mod(unsigned int a0, unsigned int a1);
unsigned int op_and(unsigned int a0, unsigned int a1);
unsigned int op_or(unsigned int a0, unsigned int a1);
int op_xor(unsigned int a0, unsigned int a1);
int op_shl(unsigned int a0, char a1);
int op_shr(unsigned int a0, char a1);
int conditional_func_ptr(unsigned int a0, unsigned int a1);
unsigned int state_machine(unsigned int a0, unsigned int a1);
unsigned int fsm_func_table(unsigned int a0, unsigned int a1);
int state_idle(void);
unsigned int state_processing(void);
unsigned int state_done(void);
unsigned int state_error(void);
unsigned int computed_goto(unsigned int a0, unsigned int a1);
unsigned int obfuscated_cf(unsigned int a0);
unsigned int opaque_predicate(unsigned int a0);
unsigned int overlapped_code(unsigned int a0);
int test_control_flow_l3(void);
unsigned int main(void);

/* Stub for _ccall - decompiler artifact */
static int _ccall(int a, int b, int c, int d, int e) {
    return c;
}

/* Forward declarations */
typedef struct struct_0 {
    unsigned int padding_0[400];
} struct_0;

/* CRT stub function _init removed by preprocessor */

extern struct_0 *g_405ff4;

/* Define missing global variables */
char _GLOBAL_OFFSET_TABLE_[16384];
jmp_buf jump_buffer;
unsigned int g_403050 = 0;
char g_4035d1[1] = {0};
char g_4035f5[1] = {0};
char g_403619[1] = {0};
struct_0 *g_405ff4 = NULL;

/* CRT stub function _init removed by preprocessor */


// Function: sub_401030 at 0x401030
int sub_401030(void)
{
 unsigned int ptr[3] = {0}; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 (void)v0;  // Suppress unused variable warning
 return 0;
}


// Function: sub_401090 at 0x401090
int sub_401090(void)
{
 void* v1; // ebx

 return 0;
}


// Function: sub_401096 at 0x401096
void sub_401096(void)
{
}



/* CRT stub function _start removed by preprocessor */



/* CRT stub function deregister_tm_clones removed by preprocessor */

unsigned int deregister_tm_clones()
{
 return 0;
}


/* CRT stub function frame_dummy removed by preprocessor */

unsigned int frame_dummy()
{
 return 0;
}


// Function: sub_4010cb at 0x4010cb
void sub_4010cb(void)
{
 return;
}


// Function: sub_4010cc at 0x4010cc
void sub_4010cc(void)
{
 return;
}


// Function: __x86.get_pc_thunk_bx at 0x4010d0
void x86_get_pc_thunk_bx(void)
{
 return;
}


// Function: sub_4010d4 at 0x4010d4
void sub_4010d4(void)
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_401113 at 0x401113
void sub_401113(void)
{
}


// Function: sub_401119 at 0x401119
void sub_401119(void)
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */

unsigned int register_tm_clones()
{
 struct_0 *v2; // edx
 struct_0 *v3; // edx
 unsigned int v4; // ebx
 unsigned int v0; // [bp-0x8]

 x86_get_pc_thunk_dx();
 v2 = g_405ff4;
 v3 = (struct_0 *)((char *)v2 + 3);
 v0 = v4;
 if (!(&v3->padding_0[40] - &v3->padding_0[40] >> 31) + (&v3->padding_0[40] - &v3->padding_0[40] >> 2) >> 1)
 {
 return (&v3->padding_0[40] - &v3->padding_0[40] >> 31) + (&v3->padding_0[40] - &v3->padding_0[40] >> 2) >> 1;
 }
 else if (*((int *)&v3->padding_0[4]))
 {
 typedef int (*func_ptr_t)(void*, int);
 func_ptr_t fp = (func_ptr_t)(*(unsigned int*)&v3->padding_0[4]);
 return fp(&v3->padding_0[40], (&v3->padding_0[40] - &v3->padding_0[40] >> 31) + (&v3->padding_0[40] - &v3->padding_0[40] >> 2) >> 1);
 }
 else
 {
 return (&v3->padding_0[40] - &v3->padding_0[40] >> 31) + (&v3->padding_0[40] - &v3->padding_0[40] >> 2) >> 1;
 }
}


// Function: sub_401167 at 0x401167
void sub_401167(void)
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

unsigned int * __do_global_dtors_aux()
{
 unsigned int *v5; // eax
 struct_0 *v6; // edi
 struct_0 *ptr; // edi
 unsigned int v8; // esi
 unsigned int v9; // ebx
 struct_0 *v10; // esi
 unsigned int v11; // eax
 unsigned int i; // ebx
 unsigned int v13; // eax
 unsigned int *v14; // eax
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 char v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v5 = 0;
 v6 = 0;
 v8 = 0;
 v9 = 0;
 v0 = 0;
 v1 = 0;
 v2 = 0;
 v3 = 0;
 ptr = v6;
 v10 = v6;
 v11 = 0;
 i = 0;
 v14 = deregister_tm_clones();
 return v14;
}


// Function: sub_4011fa at 0x4011fa
void sub_4011fa(void)
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86.get_pc_thunk_dx at 0x401209
void x86_get_pc_thunk_dx(void)
{
 return;
}


// Function: __x86.get_pc_thunk_di at 0x40120d
int x86_get_pc_thunk_di(int a0, void *a1)
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_401211 at 0x401211
void sub_401211(unsigned int a0, unsigned int a1, unsigned int a2)
{
 sequential_ops(a0, a1, a2);
 return;
}


// Function: sequential_ops at 0x401220
int sequential_ops(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return (a1 + a0) * 2 - a2;
}


// Function: sub_40122f at 0x40122f
void sub_40122f(unsigned int a0)
{
 single_if(a0);
 return;
}


// Function: single_if at 0x401230
int single_if(unsigned int a0)
{
 return a0 << ((char)_ccall(15, 15, a0, 0, 0) & 31);
}


// Function: sub_40123c at 0x40123c
void sub_40123c(unsigned int a0)
{
 if_else(a0);
 return;
}


// Function: if_else at 0x401240
int if_else(unsigned int a0)
{
 return a0 > 0;
}


// Function: sub_40124b at 0x40124b
void sub_40124b(unsigned int a0, unsigned int a1)
{
 nested_if_2(a0, a1);
 return;
}


// Function: nested_if_2 at 0x401250
unsigned int nested_if_2(unsigned int a0, unsigned int a1)
{
 if (a1 < 0)
 a1 = 0;
 if (a0 > 0)
 return a1 + a0;
 return 0;
}


// Function: sub_401267 at 0x401267
void sub_401267(unsigned int a0)
{
 nested_if_deep(a0, 0, 0, 0, 0);
 return;
}


// Function: nested_if_deep at 0x401270
unsigned int nested_if_deep(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
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
 return a4 > 0 | 4;
 }
 else
 {
 return 3;
 }
}


// Function: sub_4012af at 0x4012af
void sub_4012af(unsigned int a0)
{
 if_elseif_chain(a0);
 return;
}


// Function: if_elseif_chain at 0x4012b0
unsigned int if_elseif_chain(unsigned int a0)
{
 if (a0 >= 3)
 return 4294967295;
 return a0 * 10 + 10;
}





// Function: if_elseif_long at 0x4012d0
unsigned int if_elseif_long(unsigned int a0)
{
 if (a0 >= 5)
 return 4294967295;
 return a0 * 100 + 100;
}


// Function: sub_4012e6 at 0x4012e6
void sub_4012e6(unsigned int a0)
{
 switch_small(a0);
 return;
}


// Function: switch_small at 0x4012f0
unsigned int switch_small(unsigned int a0)
{
 unsigned int v0; // eax

 v0 = 4294967295;
 if (a0 <= 3)
 v0 = *((int *)&(&_GLOBAL_OFFSET_TABLE_)[10688 + 4 * a0]);
 return v0;
}


// Function: sub_401312 at 0x401312
void sub_401312(unsigned int a0)
{
 switch_large(a0);
 return;
}


// Function: switch_large at 0x401320
unsigned int switch_large(unsigned int a0)
{
 if (a0 >= 10)
 return 4294967295;
 return a0 * 10;
}


// Function: sub_401336 at 0x401336
void sub_401336(unsigned int a0)
{
 switch_default(a0);
 return;
}


// Function: switch_default at 0x401340
unsigned int switch_default(unsigned int a0)
{
 if (a0 - 1 >= 3)
 return 0;
 return (a0 - 1) * 100 + 100;
}


// Function: sub_401356 at 0x401356
void sub_401356(unsigned int a0)
{
 switch_fallthrough(a0);
 return;
}


// Function: switch_fallthrough at 0x401360
unsigned int switch_fallthrough(unsigned int a0)
{
 unsigned int v0; // eax

 v0 = 0;
 if (a0 != 1)
 {
 if (a0 != 2)
 {
 if (a0 == 3)
 v0 = 12;
 else
 return 4294967295;
 }
 v0 += a0 * 2;
 }
 return v0 + a0;
}


// Function: sub_401385 at 0x401385
void sub_401385(unsigned int a0)
{
 loop_for_fixed(a0);
 return;
}


// Function: loop_for_fixed at 0x401390
unsigned int loop_for_fixed(unsigned int a0)
{
 if (a0 <= 0)
 return 0;
 return (unsigned int)(((unsigned long long)(a0 - 1) * (a0 - 2) * 0x80000000ULL >> 32) + a0 - 1);
}


// Function: sub_4013ae at 0x4013ae
void sub_4013ae(unsigned int a0)
{
 loop_while(a0);
 return;
}


// Function: loop_while at 0x4013b0
unsigned int loop_while(unsigned int a0)
{
 unsigned int v2; // edi
 unsigned int v3; // esi
 unsigned int result; // esi
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = v3;
 result = 0;
 if (a0)
 {
 do
 {
 result += 1;
 a0 = (a0 * 1717986919 >> 34) + (a0 * 1717986919 >> 63);
 } while (a0 + 9 > 18);
 }
 if (!result)
 return 1;
 return result;
}


// Function: sub_4013f8 at 0x4013f8
void sub_4013f8(unsigned int a0)
{
 loop_dowhile(a0);
 return;
}


// Function: loop_dowhile at 0x401400
unsigned int loop_dowhile(unsigned int a0)
{
 unsigned int v0; // ecx
 unsigned int v1; // ecx
 unsigned int v3; // ecx

 v0 = 0;
 do
 {
 v3 = v0 + 1;
 a0 = (a0 * 1717986919 >> 34) + (a0 * 1717986919 >> 63);
 v0 = v3;
 } while (a0 + 9 > 18);
 return v1 + 1;
}


// Function: loop_nested at 0x401430
unsigned int loop_nested(unsigned int a0, unsigned int a1)
{
 if (a1 <= 0)
 a1 = 0;
 if (a0 > 0)
 return a0 * a1;
 return 0;
}


// Function: sub_401448 at 0x401448
void sub_401448(unsigned int a0)
{
 loop_break(a0);
 return;
}


// Function: loop_break at 0x401450
unsigned int loop_break(unsigned int i)
{
 unsigned int v0; // eax
 unsigned int *v1; // ecx

 v0 = 0;
 v1 = "\n";
 while (*(v1) != i)
 {
 v0 += 1;
 v1 += 1;
 if (v0 == 5)
 return 4294967295;
 }
 return v0;
}


// Function: sub_401485 at 0x401485
void sub_401485(unsigned int a0)
{
 loop_continue(a0);
 return;
}


// Function: loop_continue at 0x401490
unsigned int loop_continue(unsigned int a0)
{
 unsigned int v0; // eax
 unsigned int v1; // edx
 unsigned int v2; // edx
 unsigned int v3; // eax
 unsigned int v4; // eax

 if (a0 <= 0)
 return 0;
 v0 = 0;
 v1 = 1;
 do
 {
 v2 = v1;
 v4 = v0 + (-(v2 & 1) & v2);
 v0 = v4;
 v1 = v2 + 1;
 } while (!(a0) + v2 + 1 != 1);
 return v3 + (-(v2 & 1) & v2);
}


// Function: sub_4014cf at 0x4014cf
void sub_4014cf(unsigned int a0)
{
 goto_forward(a0);
 return;
}


// Function: goto_forward at 0x4014d0
unsigned int goto_forward(unsigned int a0)
{
 unsigned int v0; // ecx
 unsigned int v1; // eax

 v0 = a0;
 if ((char)_ccall(15, 15, v0, 0, 0))
 v1 = v0;
 else
 v1 = 1;
 return v0 * v1 * 2;
}


// Function: sub_4014e4 at 0x4014e4
void sub_4014e4(unsigned int a0)
{
 goto_backward(a0);
 return;
}


// Function: goto_backward at 0x4014f0
unsigned int goto_backward(unsigned int a0)
{
 unsigned int v0; // edx
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // edx
 unsigned int v4; // eax

 if (a0 <= 0)
 return 1;
 v0 = 1;
 v1 = 1;
 do
 {
 v3 = v0;
 v4 = v3 * v1;
 v0 = v3 + 1;
 v1 = v4;
 } while (!(a0) + v3 + 1 != 1);
 return v3 * v2;
}


// Function: sub_40152a at 0x40152a
void sub_40152a(unsigned int a0, unsigned int a1)
{
 ternary_op(a0, a1);
 return;
}


// Function: ternary_op at 0x401530
int ternary_op(unsigned int a0, unsigned int a1)
{
 if (a0 <= a1)
 return a1;
 return a0;
}


// Function: sub_40153e at 0x40153e
int sub_40153e(void)
{
 test_control_flow_l1();
 return 0;
}


// Function: test_control_flow_l1 at 0x401540

int test_control_flow_l1()
{
 unsigned int v0; // [bp-0x18]

 puts(&g_4035d1);
 v0 = 21;
 printf("CF-L1-01 (sequential_ops): %d\n", v0);
 v0 = 20;
 printf("CF-L1-02 (single_if): %d\n", v0);
 v0 = 4294967291;
 printf("CF-L1-02 (single_if): %d\n", v0);
 v0 = 1;
 printf("CF-L1-03 (if_else): %d\n", v0);

 printf("CF-L1-04 (nested_if_2): %d\n", v0);
 v0 = 10;
 printf("CF-L1-04 (nested_if_2): %d\n", v0);
 v0 = 0;
 printf("CF-L1-04 (nested_if_2): %d\n", v0);
 v0 = 5;
 printf("CF-L1-05 (nested_if_deep): %d\n", v0);
 v0 = 20;
 printf("CF-L1-06 (if_elseif_chain): %d\n", v0);
 v0 = 400;
 printf("CF-L1-07 (if_elseif_long): %d\n", v0);
 v0 = 50;
 printf("CF-L1-08 (switch_small): %d\n", v0);
 v0 = 70;
 printf("CF-L1-09 (switch_large): %d\n", v0);
 v0 = 0;
 printf("CF-L1-10 (switch_default): %d\n", v0);
 v0 = 21;
 printf("CF-L1-11 (switch_fallthrough): %d\n", v0);
 v0 = 45;
 printf("CF-L1-12 (loop_for_fixed): %d\n", v0);
 v0 = 5;
 printf("CF-L1-13 (loop_while): %d\n", v0);
 v0 = 4;
 printf("CF-L1-14 (loop_dowhile): %d\n", v0);
 v0 = 12;
 printf("CF-L1-15 (loop_nested): %d\n", v0);
 v0 = 2;
 printf("CF-L1-16 (loop_break): %d\n", v0);
 v0 = 4294967295;
 printf("CF-L1-16 (loop_break): %d\n", v0);
 v0 = 25;
 printf("CF-L1-17 (loop_continue): %d\n", v0);
 v0 = 50;
 printf("CF-L1-18 (goto_forward): %d\n", v0);
 v0 = 4294967290;
 printf("CF-L1-18 (goto_forward): %d\n", v0);
 v0 = 120;
 printf("CF-L1-19 (goto_backward): %d\n", v0);
 v0 = 10;
 printf("CF-L1-20 (ternary_op): %d\n", v0);
 v0 = 8;
 return printf("CF-L1-20 (ternary_op): %d\n", v0);
}


// Function: sub_40178d at 0x40178d
int sub_40178d(void)
{
 return loop_multi_exit(0);
}


// Function: loop_multi_exit at 0x401790
extern unsigned int g_403050;

unsigned int loop_multi_exit(unsigned int a0)
{
 unsigned int v4; // ebx
 unsigned int v5; // edi
 unsigned int v14; // ebp
 unsigned int v15; // ebp
 unsigned int v6; // esi
 unsigned int v7; // eax
 unsigned int v8; // ecx
 unsigned int v9; // esi
 char result; // bl
 unsigned int v11; // ebp
 unsigned int v12; // ebx
 unsigned int v13; // ebx
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]
 unsigned int v2; // [bp-0xc]
 unsigned int v3; // [bp-0x8]

 v3 = v4;
 v2 = v5;
 v1 = v6;
 v0 = v7;
 v8 = 0;
 v9 = &g_403050;
 do
 {
 result = 1;
 v11 = 0;
 if (*((int *)&(&_GLOBAL_OFFSET_TABLE_)[12212 + 16 * v8]) != a0)
 {
 v12 = 4294967295;
 do
 {
 if (v12 == 2)
 {
 v15 = 5;
 if (!(1))
 goto LABEL_401832;
 }
 } while ((v14 = v13 + 1, v12 = v14, *((int *)(v9 + v13 * 4 + 4)) != a0));
 result = v14 < 3;
 v11 = v14 + 1;
 }
 v0 = v8 * 10 + v11;
 v15 = 1;
 if (result)
 goto LABEL_401832;
 } while ((v8 += 1, v9 += 16, v8 != 3));
 v15 = 2;
LABEL_401832:
 if (v15 != 2)
 return v0;
 return 4294967295;
}


// Function: sub_401803 at 0x401803
void sub_401803(void)
{
}


// Function: sub_401848 at 0x401848
void sub_401848(unsigned int a0)
{
 infinite_loop(&a0);
 return;
}


// Function: infinite_loop at 0x401850
unsigned int infinite_loop(unsigned int *ptr)
{
 unsigned int v0; // eax

 v0 = 0;
 while (*(ptr) != 1)
 {
 v0 += 1;
 if (v0 == 1001)
 {
 *(ptr) = 1;
 return 1001;
 }
 }
 return v0;
}


// Function: sub_40187d at 0x40187d
void sub_40187d(unsigned int a0)
{
 multi_return(a0);
 return;
}


// Function: multi_return at 0x401880
unsigned int multi_return(unsigned int a0)
{
 if (a0 < 0)
 {
 return 4294967295;
 }
 else if (a0 > 50)
 {
 return 4294967294;
 }
 else if (!((char)a0 & 1))
 {
 return a0 * 2;
 }
 else
 {
 return a0 + 1;
 }
}


// Function: sub_4018a7 at 0x4018a7
void sub_4018a7(unsigned int a0)
{
 conditional_return(a0);
 return;
}


// Function: conditional_return at 0x4018b0
unsigned int conditional_return(unsigned int a0)
{
 if (!((char)_ccall(15, 15, a0, 0, 0)))
 return -(a0);
 return a0 * 2;
}


// Function: sub_4018c1 at 0x4018c1
int sub_4018c1(void)
{
 return duffs_device(0, 0, 0);
}


// Function: duffs_device at 0x4018d0
unsigned int duffs_device(unsigned int a0, unsigned int a1, unsigned int a2)
{
 if (a2 <= 0)
 {
 return 4294967295;
 }
 else if (a2 - ((!((char)(a2 >> 31)) ? a2 : a2 + 7) & 0xfffffff8) <= 7)
 {
 return a2;
 }
 else
 {
 return a2;
 }
}


// Function: sub_401982 at 0x401982
void sub_401982(unsigned int a0)
{
 loop_complex_cond(a0);
 return;
}


// Function: loop_complex_cond at 0x401990
int loop_complex_cond(unsigned int a0)
{
 unsigned int v0; // ecx
 unsigned int v1; // esi
 unsigned int v2; // eax
 unsigned int v3; // esi
 unsigned int v4; // edx

 v0 = a0;
 if (v0 > 0)
 {
 v1 = 0;
 v2 = 0;
 do
 {
 v2 += 2;
 v0 -= 1;
 v4 = v1 + 1;
 } while (v0 >= 2 && v2 < v0 && (v1 = v4, v0 = v0, v3 < 9));
 }
 else
 {
 v2 = 0;
 v4 = 0;
 }
 return v2 + v0 + v4;
}


// Function: sub_4019c8 at 0x4019c8
void sub_4019c8(unsigned int a0)
{
 loop_modify_var(a0);
 return;
}


// Function: loop_modify_var at 0x4019d0
unsigned int loop_modify_var(unsigned int a0)
{
 unsigned int v0; // edx
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // edx
 unsigned int v4; // eax
 unsigned int v5; // esi
 unsigned int v6; // esi
 unsigned int v7; // esi

 if (a0 <= 0)
 return 0;
 v0 = 0;
 v1 = 0;
 do
 {
 v3 = v0;
 v4 = v1 + v3;
 v5 = v3 + 2;
 if (v3 < 6)
 v6 = v3;
 else
 v6 = v5;
 } while ((v7 = v6 + 1, v0 = v6 + 1, v1 = v4, v0 < a0));
 return v2 + v3;
}


// Function: sub_4019fa at 0x4019fa
void sub_4019fa(unsigned int a0)
{
 loop_external_state(&a0);
 return;
}


// Function: loop_external_state at 0x401a00
unsigned int loop_external_state(unsigned int *a0)
{
 unsigned int v0; // eax

 v0 = 0;
 while (!*(a0))
 {
 v0 += 1;
 if (v0 == 101)
 return 101;
 }
 return v0;
}


// Function: sub_401a23 at 0x401a23
int sub_401a23(void)
{
 return recursion_factorial(5);
}


// Function: recursion_factorial at 0x401a30
unsigned int recursion_factorial(unsigned int a0)
{
 if (a0 < 2)
 return 1;
 return a0 * recursion_factorial(a0 - 1);
}


// Function: sub_401a61 at 0x401a61
int sub_401a61(void)
{
 tail_recursion(5, 1);
 return 0;
}


// Function: tail_recursion at 0x401a70
int tail_recursion(unsigned int a0, unsigned int a1)
{
 if (a0 < 2)
 return a1;
 return tail_recursion(a0 - 1, a0 * a1);
}


// Function: sub_401aa5 at 0x401aa5
int sub_401aa5(void)
{
 return indirect_recursion_a(10, 3);
}


// Function: indirect_recursion_a at 0x401ab0
unsigned int indirect_recursion_a(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // eax

 if (a1 <= 0)
 return a0;
 if (((char)a0 & 1))
 {
 if (a1 < 2)
 return a0 * 3 + 1;
 v0 = a0 * 3 + 2;
 }
 else if (a1 >= 2)
 {
 v0 = (a0 + (a0 >> 31) >> 1) + 1;
 }
 else
 {
 return a0 + (a0 >> 31) >> 1;
 }
 return indirect_recursion_a(v0, a1 - 2);
}


// Function: sub_401b0b at 0x401b0b
int sub_401b0b(void)
{
 return call_func_ptr(double_value, 5);
}


// Function: call_func_ptr at 0x401b10
int call_func_ptr(unsigned int (*a0)(unsigned int), unsigned int a1)
{
 return a0(a1);
}


// Function: call_func_ptr_array at 0x401b30

unsigned int call_func_ptr_array(unsigned int a0)
{
 unsigned int v1; // eax

 v1 = 4294967295;
 return v1;
}


// Function: sub_401b61 at 0x401b61
void sub_401b61(unsigned int a0)
{
 double_value(a0);
 return;
}


// Function: double_value at 0x401b70
unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_401b77 at 0x401b77
void sub_401b77(unsigned int a0)
{
 triple_value(a0);
 return;
}


// Function: triple_value at 0x401b80
unsigned int triple_value(unsigned int a0)
{
 return a0 * 3;
}


// Function: sub_401b88 at 0x401b88
void sub_401b88(unsigned int a0, unsigned int a1)
{
 call_virtual_func(a0, a1);
 return;
}


// Function: call_virtual_func at 0x401b90
unsigned int call_virtual_func(unsigned int a0, unsigned int a1)
{
 return a1 * 2;
}


// Function: sub_401b97 at 0x401b97
int sub_401b97(void)
{
 process_with_callback(0, 0, double_value);
 return 0;
}


// Function: process_with_callback at 0x401ba0
unsigned int process_with_callback(unsigned int a0, unsigned int i, unsigned int (*a2)(unsigned int))
{
 unsigned int v0; // ebp
 unsigned int v1; // esi

 if (i <= 0)
 return 0;
 v0 = 0;
 v1 = 0;
 do
 {
 v1 += a2(*((int *)(a0 + v0 * 4)));
 v0 += 1;
 } while (i != v0);
 return v1;
}


// Function: sub_401be5 at 0x401be5
int sub_401be5(void)
{
 test_control_flow_l2();
 return 0;
}


// Function: test_control_flow_l2 at 0x401bf0

int test_control_flow_l2()
{
 unsigned int v4; // edx
 unsigned int v5; // esi
 unsigned int v14; // ecx
 unsigned int v15; // edx
 unsigned int v16; // eax
 unsigned int v17; // eax
 unsigned int v18; // eax
 char *v19; // esi
 unsigned int v6; // eax
 unsigned int v7; // eax
 unsigned int v8; // ebp
 unsigned int v9; // edi
 unsigned int v10; // eax
 char *v11; // ebx
 char *v12; // esi
 char *v13; // esi
 char *v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 unsigned int result; // [bp-0x14]

 puts(&g_4035f5);
 v0 = &_GLOBAL_OFFSET_TABLE_;
 v4 = &g_403050;
 v5 = 0;
 while (true)
 {
 v6 = 0;
 do
 {
 v7 = v6;
 if (v7 == 3)
 {
 v9 = 5;
 if ((v7 < 3 & 255))
 goto LABEL_401c7f;
 goto LABEL_401c6c;
 }
 } while ((v8 = v7 + 1, v6 = v8, *((int *)(v4 + v7 * 4)) != 7));
 v9 = 1;
 if (v8 - 1 < 3)
 goto LABEL_401c7f;
LABEL_401c6c:
 v5 += 1;
 v4 += 16;
 if (v5 == 3)
 {
 v9 = 2;
LABEL_401c7f:
 printf(v0 + 11579);
 v1 = 0;
 v10 = 0;
 do
 {
 if (v1 == 1)
 goto LABEL_401cd0;
 } while ((v10 += 1, v10 != 1001));
 v1 = 1;
LABEL_401cd0:
 v11 = v0;
 printf(v11 + 11547);
 v12 = v11 + 11517;
 printf(v12);
 printf(v12);
 printf(v12);
 v13 = v11 + 11488;
 printf(v13);
 printf(v13);
 printf(v11 + 11453);
 v14 = 4294967295;
 v15 = 11;
 v16 = 10;
 do
 {
 v17 = v16 + 2;
 } while (v16 - 8 < v15 - 2 && (v14 += 1, v15 -= 1, v16 = v17, v14 < 9));
 printf(v0 + 11424);
 printf(v0 + 11390);
 result = 0;
 v18 = 0;
 do
 {
 if (result)
 goto LABEL_401dd4;
 } while ((v18 += 1, v18 != 101));
LABEL_401dd4:
 printf(v0 + 11358);
 recursion_factorial(5);
 printf(v0 + 11322);
 tail_recursion(5, 1);
 printf(v0 + 11286);
 indirect_recursion_a(10, 3);
 printf(v0 + 11255);
 printf(v0 + 11220);
 v19 = v0 + 11190;
 printf(v19);
 recursion_factorial(5);
 printf(v19);
 return printf(v0 + 11154);
 }
 }
}


// Function: sub_401c58 at 0x401c58
void sub_401c58(void)
{
}


// Function: sub_401eb6 at 0x401eb6
int sub_401eb6(void)
{
 non_local_jump(0);
 return 0;
}


// Function: non_local_jump at 0x401ec0
extern jmp_buf jump_buffer;

unsigned int non_local_jump(unsigned int a0)
{
 a0 = a0;
 if (_setjmp(jump_buffer))
 {
 return 4294967295;
 }
 else if (a0 < 0)
 {
 longjmp(jump_buffer, 1); /* do not return */
 }
 else if (a0 < 101)
 {
 return a0 * 2;
 }
 else
 {
 longjmp(jump_buffer, 2); /* do not return */
 }
}


// Function: sub_401f22 at 0x401f22
void sub_401f22(unsigned int a0)
{
 cpp_exception(a0);
 return;
}


// Function: cpp_exception at 0x401f30
unsigned int cpp_exception(unsigned int a0)
{
 unsigned int v0; // ecx

 v0 = a0 * 2;
 if (a0 >= 101)
 v0 = 4294967294;
 if (a0 < 0)
 return 4294967295;
 return v0;
}


// Function: sub_401f4d at 0x401f4d
int sub_401f4d(void)
{
 return large_jump_table(0, 0, 0);
}


// Function: large_jump_table at 0x401f50

unsigned int large_jump_table(unsigned int a0, unsigned int a1, unsigned int a2)
{
 switch (a0)
 {
 case 0:
 return 0;
 default:
 return 4294967295;
 }
 return 0;
}


// Function: sub_401f88 at 0x401f88
void sub_401f88(unsigned int a0, unsigned int a1)
{
 op_add(a0, a1);
 return;
}


// Function: op_add at 0x401f90
int op_add(unsigned int a0, unsigned int a1)
{
 return a1 + a0;
}


// Function: sub_401f99 at 0x401f99
void sub_401f99(unsigned int a0, unsigned int a1)
{
 op_sub(a0, a1);
 return;
}


// Function: op_sub at 0x401fa0
int op_sub(unsigned int a0, unsigned int a1)
{
 return a0 - a1;
}


// Function: sub_401fa9 at 0x401fa9
void sub_401fa9(unsigned int a0, unsigned int a1)
{
 op_mul(a0, a1);
 return;
}


// Function: op_mul at 0x401fb0
int op_mul(unsigned int a0, unsigned int a1)
{
 return a0 * a1;
}


// Function: sub_401fba at 0x401fba
void sub_401fba(unsigned int a0, unsigned int a1)
{
 op_div(a0, a1);
 return;
}


// Function: op_div at 0x401fc0
unsigned int op_div(unsigned int a0, unsigned int a1)
{
 if (!a1)
 return 0;
 return (unsigned int)((unsigned long long)a0 / a1);
}


// Function: sub_401fd3 at 0x401fd3
void sub_401fd3(unsigned int a0, unsigned int a1)
{
 op_mod(a0, a1);
 return;
}


// Function: op_mod at 0x401fe0
unsigned int op_mod(unsigned int a0, unsigned int a1)
{
 if (!a1)
 return 0;
 return (unsigned int)((unsigned long long)a0 % a1);
}


// Function: sub_401ff5 at 0x401ff5
void sub_401ff5(unsigned int a0, unsigned int a1)
{
 op_and(a0, a1);
 return;
}


// Function: op_and at 0x402000
unsigned int op_and(unsigned int a0, unsigned int a1)
{
 return a1 & a0;
}


// Function: sub_402009 at 0x402009
void sub_402009(unsigned int a0, unsigned int a1)
{
 op_or(a0, a1);
 return;
}


// Function: op_or at 0x402010
unsigned int op_or(unsigned int a0, unsigned int a1)
{
 return a1 | a0;
}


// Function: sub_402019 at 0x402019
void sub_402019(unsigned int a0, unsigned int a1)
{
 op_xor(a0, a1);
 return;
}


// Function: op_xor at 0x402020
int op_xor(unsigned int a0, unsigned int a1)
{
 return a1 ^ a0;
}


// Function: sub_402029 at 0x402029
void sub_402029(unsigned int a0, char a1)
{
 op_shl(a0, a1);
 return;
}


// Function: op_shl at 0x402030
int op_shl(unsigned int a0, char a1)
{
 return a0 << (a1 & 31);
}


// Function: sub_40203b at 0x40203b
void sub_40203b(unsigned int a0, char a1)
{
 op_shr(a0, a1);
 return;
}


// Function: op_shr at 0x402040
int op_shr(unsigned int a0, char a1)
{
 return a0 >> (a1 & 31);
}


// Function: sub_40204b at 0x40204b
int sub_40204b(void)
{
 conditional_func_ptr(0, 0);
 return 0;
}


// Function: conditional_func_ptr at 0x402050
int conditional_func_ptr(unsigned int a0, unsigned int a1)
{
 unsigned int v1; // eax
 unsigned int (*v2)(unsigned int); // esi
 unsigned int (*v3)(unsigned int); // ecx
 unsigned int (*v4)(unsigned int); // ecx
 unsigned int v0; // [bp-0xc]

 v0 = v1;
 v2 = recursion_factorial;
 if (a0 == 1)
 v2 = triple_value;
 v3 = double_value;
 if (a0)
 v4 = v2;
 else
 v4 = v3;
 v0 = a1;
 return v4(v0);
}


// Function: sub_40208f at 0x40208f
void sub_40208f(unsigned int a0, unsigned int a1)
{
 state_machine(a0, a1);
 return;
}


// Function: state_machine at 0x402090

unsigned int state_machine(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // eax

 v0 = a1;
 switch (v0)
 {
 case 0:
 return a0 == 1;
 case 1:
 if (a0 == 2)
 return 2;
 return (a0 == 99) * 2 + 1;
 case 2:
 return v0;
 case 3:
 return (a0) * 3;
 default:
 v0 = 3;
 break;
 }
}


// Function: fsm_func_table at 0x4020e0

unsigned int fsm_func_table(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // eax

 v0 = 3;
 return v0;
}


// Function: sub_402111 at 0x402111
void sub_402111(unsigned int a0)
{
 state_idle();
 return;
}


// Function: state_idle at 0x402120
int state_idle(void)
{
 return 1;
}


// Function: sub_40212b at 0x40212b
void sub_40212b(unsigned int a0)
{
 state_processing();
 return;
}


// Function: state_processing at 0x402130
unsigned int state_processing()
{
 return 2;
}


// Function: sub_402148 at 0x402148
void sub_402148()
{
 state_done();
 return;
}


// Function: state_done at 0x402150
unsigned int state_done()
{
 return 2;
}


// Function: sub_402156 at 0x402156
void sub_402156(unsigned int a0)
{
 state_error();
 return;
}


// Function: state_error at 0x402160
unsigned int state_error()
{
 return 0;
}


// Function: sub_40216e at 0x40216e
void sub_40216e(unsigned int a0, unsigned int a1)
{
 computed_goto(a0, a1);
 return;
}


// Function: computed_goto at 0x402170

unsigned int computed_goto(unsigned int a0, unsigned int a1)
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


// Function: sub_4021a7 at 0x4021a7
void sub_4021a7(unsigned int a0)
{
 obfuscated_cf(a0);
 return;
}


// Function: obfuscated_cf at 0x4021b0
unsigned int obfuscated_cf(unsigned int a0)
{
 return 4;
}


// Function: sub_4021b7 at 0x4021b7
void sub_4021b7(unsigned int a0)
{
 opaque_predicate(a0);
 return;
}


// Function: opaque_predicate at 0x4021c0
unsigned int opaque_predicate(unsigned int a0)
{
 return 4;
}


// Function: sub_4021c7 at 0x4021c7
void sub_4021c7(unsigned int a0)
{
 overlapped_code(a0);
 return;
}


// Function: overlapped_code at 0x4021d0
unsigned int overlapped_code(unsigned int a0)
{
 if (((char)a0 & 1))
 return a0 * 3 + 1;
 return (a0 >> 31) + a0 >> 1;
}


// Function: sub_4021ea at 0x4021ea
int sub_4021ea(void)
{
 test_control_flow_l3();
 return 0;
}


// Function: test_control_flow_l3 at 0x4021f0

int test_control_flow_l3()
{
 puts(&g_403619);
 printf("CF-L3-01 (non_local_jump): %d\n", non_local_jump(5));
 non_local_jump(4294967291);
 printf("CF-L3-01 (non_local_jump): %d\n", 0);
 printf("CF-L3-02 (cpp_exception): %d\n", cpp_exception(5));
 printf("CF-L3-02 (cpp_exception): %d\n", cpp_exception(102));
 printf("CF-L3-03 (large_jump_table): %d\n", large_jump_table(0, 0, 0));
 printf("CF-L3-04 (conditional_func_ptr): %d\n", conditional_func_ptr(1, 5));
 printf("CF-L3-05 (state_machine): %d\n", state_machine(1, 0));
 printf("CF-L3-06 (fsm_func_table): %d\n", fsm_func_table(1, 0));
 printf("CF-L3-07 (computed_goto): %d\n", computed_goto(0, 2));
 printf("CF-L3-08 (obfuscated_cf): %d\n", obfuscated_cf(1));
 printf("CF-L3-09 (opaque_predicate): %d\n", opaque_predicate(1));
 return printf("CF-L3-10 (overlapped_code): %d\n", overlapped_code(5));
}


// Function: sub_40232a at 0x40232a
int sub_40232a(void)
{
 main();
 return 0;
}


// Function: main at 0x402330
unsigned int main()
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}


// Function: sub_402356 at 0x402356
void sub_402356(void)
{
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

unsigned int __do_global_ctors_aux()
{
 x86_get_pc_thunk_dx();
 return 4294967295;
}


// Function: sub_4023a2 at 0x4023a2
void sub_4023a2(void)
{
}



/* CRT stub function _fini removed by preprocessor */


