// Angr Decompilation of 1_gcc_O3_no_g
// Platform: X86


/* CRT stub function _init removed by preprocessor */
#include <stdbool.h>

typedef struct struct_0 {
 char padding_0[40];
 unsigned int field_c;
 unsigned int field_10;
 unsigned int field_14;
 unsigned int field_18;
 unsigned int field_1c;
 unsigned int field_20;
 unsigned int field_28;
} struct_0;

void (*g_405ff4)(void) = 0;

/* Helper macro for accessing global data */
#define _ccall(a, b, c, d, e) (*((int *)0))

/* Forward declarations for CRT stub functions */
void * deregister_tm_clones();
void * register_tm_clones();
void * __do_global_dtors_aux();
unsigned int __do_global_ctors_aux();
void frame_dummy()
{
 return;
}
int __stack_chk_fail_local();

/* Forward declarations for other functions */
int test_control_flow_l1();
int test_control_flow_l2();
int test_control_flow_l3();
unsigned int recursion_factorial(unsigned int i);
unsigned int double_value(unsigned int a0);
unsigned int triple_value(unsigned int a0);
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
int state_idle(unsigned int a0);
unsigned int state_processing(unsigned int a0);
unsigned int state_done();
unsigned int state_error(unsigned int a0);
unsigned int computed_goto_constprop_0();
int non_local_jump_constprop_0();
int sequential_ops(unsigned int a0, unsigned int a1, unsigned int a2);
unsigned int single_if(unsigned int a0);
unsigned int if_else(unsigned int a0);
unsigned int nested_if_2(unsigned int a0, unsigned int a1);
unsigned int nested_if_deep(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4);
unsigned int if_elseif_chain(unsigned int a0);
unsigned int if_elseif_long(unsigned int a0);
unsigned int switch_small(unsigned int a0);
unsigned int switch_large(unsigned int a0);
unsigned int switch_default(unsigned int a0);
unsigned int switch_fallthrough(unsigned int a0);
unsigned int loop_for_fixed(unsigned int i);
unsigned int loop_while(unsigned int a0);
unsigned int loop_dowhile(unsigned int a0);
unsigned int loop_nested(unsigned int a0, unsigned int a1);
unsigned int loop_break(unsigned int a0);
unsigned int loop_continue(unsigned int a0);
unsigned int goto_forward(unsigned int a0);
unsigned int goto_backward(unsigned int a0);
int ternary_op(unsigned int a0, unsigned int a1);
unsigned int loop_multi_exit(unsigned int a0);
unsigned int infinite_loop(unsigned int *ptr);
unsigned int multi_return(unsigned int a0);
unsigned int conditional_return(unsigned int a0);
unsigned int duffs_device(unsigned int a0, unsigned int a1, unsigned int a2);
unsigned int loop_complex_cond(unsigned int a0);
unsigned int loop_modify_var(unsigned int a0);
unsigned int loop_external_state(unsigned int *a0);
unsigned int tail_recursion(unsigned int i, unsigned int a1);
unsigned int indirect_recursion_a(unsigned int a0, unsigned int cur);
int call_func_ptr(unsigned int a0, unsigned int a1);
unsigned int call_func_ptr_array(unsigned int a0, unsigned int a1);
unsigned int call_virtual_func(unsigned int a0, unsigned int a1);
unsigned int process_with_callback(unsigned int a0, unsigned int i, unsigned int (*a2)(unsigned int));
unsigned int non_local_jump(unsigned int a0);
unsigned int cpp_exception(unsigned int a0);
unsigned int large_jump_table(unsigned int a0, unsigned int a1, unsigned int a2);
int conditional_func_ptr(unsigned int a0, unsigned int a1);
unsigned int state_machine(unsigned int a0, unsigned int a1);
unsigned int fsm_func_table(unsigned int a0, unsigned int a1);
unsigned int computed_goto(unsigned int a0, unsigned int a1);
unsigned int obfuscated_cf(unsigned int a0);
unsigned int opaque_predicate(unsigned int a0);
unsigned int overlapped_code(unsigned int a0);

static int _init()
{
 if (g_405ff4)
 g_405ff4();
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
 unsigned int ptr[3]; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 return ptr[2];
}


// Function: sub_401040 at 0x401040
int sub_401040()
{
 sub_401030(0);
 return;
}


// Function: sub_40104e at 0x40104e
void sub_40104e()
{
 sub_401050();
 return;
}


// Function: sub_401050 at 0x401050
int sub_401050()
{
 sub_401030(8);
 return;
}


// Function: sub_40105e at 0x40105e
void sub_40105e()
{
 sub_401060();
 return;
}


// Function: sub_401060 at 0x401060
int sub_401060()
{
 sub_401030(16);
 return;
}


// Function: sub_40106e at 0x40106e
void sub_40106e()
{
 sub_401070();
 return;
}


// Function: sub_401070 at 0x401070
int sub_401070()
{
 sub_401030(24);
 return;
}


// Function: sub_40107e at 0x40107e
void sub_40107e()
{
 sub_401080();
 return;
}


// Function: sub_401080 at 0x401080
int sub_401080()
{
 sub_401030(32);
 return;
}


// Function: sub_40108e at 0x40108e
void sub_40108e()
{
 sub_401090();
 return;
}


// Function: sub_401090 at 0x401090
int sub_401090()
{
 sub_401030(40);
 return;
}


// Function: sub_40109e at 0x40109e
int sub_40109e()
{
 sub_4010a0();
 return;
}


// Function: sub_4010a0 at 0x4010a0
int sub_4010a0()
{
 struct_0 *v1; // ebx

 return v1->field_28;
}


// Function: sub_4010aa at 0x4010aa
int sub_4010aa()
{
 sub_4010b0();
 return;
}


// Function: sub_4010b0 at 0x4010b0
int sub_4010b0()
{
 struct_0 *v1; // ebx

 return v1->field_c;
}


// Function: sub_4010ba at 0x4010ba
int sub_4010ba()
{
 sub_4010c0();
 return;
}


// Function: sub_4010c0 at 0x4010c0
int sub_4010c0()
{
 struct_0 *v1; // ebx

 return v1->field_10;
}


// Function: sub_4010ca at 0x4010ca
int sub_4010ca()
{
 sub_4010d0();
 return;
}


// Function: sub_4010d0 at 0x4010d0
int sub_4010d0()
{
 struct_0 *v1; // ebx

 return v1->field_14;
}


// Function: sub_4010da at 0x4010da
int sub_4010da()
{
 sub_4010e0();
 return;
}


// Function: sub_4010e0 at 0x4010e0
int sub_4010e0()
{
 struct_0 *v1; // ebx

 return v1->field_18;
}


// Function: sub_4010ea at 0x4010ea
int sub_4010ea()
{
 sub_4010f0();
 return;
}


// Function: sub_4010f0 at 0x4010f0
int sub_4010f0()
{
 struct_0 *v1; // ebx

 return v1->field_1c;
}


// Function: sub_4010fa at 0x4010fa
int sub_4010fa()
{
 sub_401100();
 return;
}


// Function: sub_401100 at 0x401100
int sub_401100()
{
 struct_0 *v1; // ebx

 return v1->field_20;
}


// Function: sub_40110a at 0x40110a
void sub_40110a()
{
 main();
 return;
}


// Function: main at 0x401110
int main()
{
 char v0; // [bp+0x0]

 test_control_flow_l1(&v0);
 test_control_flow_l2(&v0);
 test_control_flow_l3();
 return 0;
}


// Function: sub_40112d at 0x40112d
void sub_40112d()
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_40115c at 0x40115c
void sub_40115c()
{
 return;
}


// Function: __x86.get_pc_thunk_bx at 0x401160
void __x86_get_pc_thunk_bx()
{
 return;
}


// Function: sub_401164 at 0x401164
void sub_401164()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */

void * deregister_tm_clones()
{
 unsigned int *ptr; // edx

 __x86_get_pc_thunk_dx();
 return (char *)&ptr[5028] + 3;
}


// Function: sub_4011a3 at 0x4011a3
void sub_4011a3()
{
}


// Function: sub_4011a9 at 0x4011a9
void sub_4011a9()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */

void * register_tm_clones()
{
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_dx();
 return (void *)0;
}


// Function: sub_4011f7 at 0x4011f7
void sub_4011f7()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

void * __do_global_dtors_aux()
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

 v5 = (unsigned int *)__x86_get_pc_thunk_di();
 ptr = &v6->padding_0[19899];
 v1 = v8;
 v0 = v9;
 if (ptr->padding_0[88])
 return v5;
 if (*((int *)&ptr->padding_0[40]))
 sub_4010a0(*((int *)&ptr->padding_0[60]));
  v10 = &ptr->padding_0[224];
  v11 = *((int *)&ptr->padding_0[92]);
  i = ((char *)&ptr->padding_0[220] - (char *)v10 >> 2) - 1;
  if (*((int *)&ptr->padding_0[92]) < i)
  {
 do
 {
 v13 = v11 + 1;
 *((unsigned int *)&ptr->padding_0[92]) = v13;
 ((void (*)(void))((char *)&v10->padding_0[4 * v13]))();
 v11 = *((int *)&ptr->padding_0[92]);
 } while (*((int *)&ptr->padding_0[92]) < i);
 }
 v14 = (unsigned int *)deregister_tm_clones();
 ptr->padding_0[88] = 1;
 return v14;
}


// Function: sub_40128a at 0x40128a
void sub_40128a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86.get_pc_thunk_dx at 0x401299
void __x86_get_pc_thunk_dx()
{
 return;
}


// Function: __x86.get_pc_thunk_di at 0x40129d
int __x86_get_pc_thunk_di()
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_4012a1 at 0x4012a1
void sub_4012a1(unsigned int a0)
{
 recursion_factorial(a0);
 return;
}


// Function: recursion_factorial at 0x4012b0
unsigned int recursion_factorial(unsigned int i)
{
 unsigned int v0; // edx
 unsigned int v1; // edx
 unsigned int v2; // eax
 unsigned int v4; // edx

 v0 = 1;
 if (i <= 1)
 return 1;
 do
 {
 v2 = i;
 v4 = v2 * v0;
 i = v2 - 1;
 v0 = v4;
 } while (i != 1);
 return v2 * v1;
}


// Function: sub_4012d8 at 0x4012d8
void sub_4012d8(unsigned int a0)
{
 double_value(a0);
 return;
}


// Function: double_value at 0x4012e0
unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_4012eb at 0x4012eb
void sub_4012eb(unsigned int a0)
{
 triple_value(a0);
 return;
}


// Function: triple_value at 0x4012f0
unsigned int triple_value(unsigned int a0)
{
 return a0 * 3;
}


// Function: sub_4012fc at 0x4012fc
void sub_4012fc(unsigned int a0, unsigned int a1)
{
 op_add(a0, a1);
 return;
}


// Function: op_add at 0x401300
int op_add(unsigned int a0, unsigned int a1)
{
 return a1 + a0;
}


// Function: sub_40130d at 0x40130d
void sub_40130d(unsigned int a0, unsigned int a1)
{
 op_sub(a0, a1);
 return;
}


// Function: op_sub at 0x401310
int op_sub(unsigned int a0, unsigned int a1)
{
 return a0 - a1;
}


// Function: sub_40131d at 0x40131d
void sub_40131d(unsigned int a0, unsigned int a1)
{
 op_mul(a0, a1);
 return;
}


// Function: op_mul at 0x401320
int op_mul(unsigned int a0, unsigned int a1)
{
 return a0 * a1;
}


// Function: sub_40132e at 0x40132e
void sub_40132e(unsigned int a0, unsigned int a1)
{
 op_div(a0, a1);
 return;
}


// Function: op_div at 0x401330
unsigned int op_div(unsigned int a0, unsigned int a1)
{
 unsigned int result; // ecx

 result = a1;
 if (result)
 result = a0 / result;
 return result;
}


// Function: sub_401348 at 0x401348
void sub_401348(unsigned int a0, unsigned int a1)
{
 op_mod(a0, a1);
 return;
}


// Function: op_mod at 0x401350
unsigned int op_mod(unsigned int a0, unsigned int a1)
{
 unsigned int result; // edx

 result = a1;
 if (result)
 result = a0 % result;
 return result;
}


// Function: sub_401368 at 0x401368
void sub_401368(unsigned int a0, unsigned int a1)
{
 op_and(a0, a1);
 return;
}


// Function: op_and at 0x401370
unsigned int op_and(unsigned int a0, unsigned int a1)
{
 return a1 & a0;
}


// Function: sub_40137d at 0x40137d
void sub_40137d(unsigned int a0, unsigned int a1)
{
 op_or(a0, a1);
 return;
}


// Function: op_or at 0x401380
unsigned int op_or(unsigned int a0, unsigned int a1)
{
 return a1 | a0;
}


// Function: sub_40138d at 0x40138d
void sub_40138d(unsigned int a0, unsigned int a1)
{
 op_xor(a0, a1);
 return;
}


// Function: op_xor at 0x401390
int op_xor(unsigned int a0, unsigned int a1)
{
 return a1 ^ a0;
}


// Function: sub_40139d at 0x40139d
void sub_40139d(unsigned int a0, unsigned int a1)
{
 op_shl(a0, a1);
 return;
}


// Function: op_shl at 0x4013a0
int op_shl(unsigned int a0, char a1)
{
 return a0 << (a1 & 31);
}


// Function: sub_4013af at 0x4013af
void sub_4013af(unsigned int a0, unsigned int a1)
{
 op_shr(a0, a1);
 return;
}


// Function: op_shr at 0x4013b0
int op_shr(unsigned int a0, char a1)
{
 return a0 >> (a1 & 31);
}


// Function: sub_4013bf at 0x4013bf
void sub_4013bf(unsigned int a0)
{
 state_idle(a0);
 return;
}


// Function: state_idle at 0x4013c0
int state_idle(unsigned int a0)
{
 return a0 == 1;
}


// Function: sub_4013cf at 0x4013cf
void sub_4013cf(unsigned int a0)
{
 state_processing(a0);
 return;
}


// Function: state_processing at 0x4013d0
unsigned int state_processing(unsigned int a0)
{
 if (a0 == 2)
 return 2;
 return (a0 == 99) * 2 + 1;
}


// Function: sub_4013eb at 0x4013eb
void sub_4013eb()
{
}


// Function: sub_4013f6 at 0x4013f6
void sub_4013f6()
{
 state_done();
 return;
}


// Function: state_done at 0x401400
unsigned int state_done()
{
 return 2;
}


// Function: sub_40140a at 0x40140a
void sub_40140a(unsigned int a0)
{
 state_error(a0);
 return;
}


// Function: state_error at 0x401410
unsigned int state_error(unsigned int a0)
{
 if (!a0)
 return 0;
 return 3;
}


// Function: sub_401423 at 0x401423
void sub_401423()
{
 computed_goto_constprop_0();
 return;
}


// Function: computed_goto_constprop_0 at 0x401430
unsigned int computed_goto_constprop_0()
{
 return 20;
}


// Function: sub_401436 at 0x401436
int sub_401436()
{
 non_local_jump_constprop_0();
 return;
}

// Function: non_local_jump_constprop_0 at 0x401440
int non_local_jump_constprop_0()
{
 return 0;
}

// Function: non_local_jump at 0x401450
unsigned int non_local_jump(unsigned int a0)
{
 if (a0 == 0)
 return 0;
 return a0 + 5;
}


// Function: sub_40146f at 0x40146f
void sub_40146f(unsigned int a0, unsigned int a1, unsigned int a2)
{
 sequential_ops(a0, a1, a2);
 return;
}


// Function: sequential_ops at 0x401470
int sequential_ops(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return (a1 + a0) * 2 - a2;
}


// Function: sub_401483 at 0x401483
void sub_401483(unsigned int a0)
{
 single_if(a0);
 return;
}


// Function: single_if at 0x401490
unsigned int single_if(unsigned int a0)
{
 if (a0 > 0)
 return a0 * 2;
 return a0;
}


// Function: sub_4014a1 at 0x4014a1
void sub_4014a1(unsigned int a0)
{
 if_else(a0);
 return;
}


// Function: if_else at 0x4014b0
unsigned int if_else(unsigned int a0)
{
 return _ccall(15, 15, a0, 0, 0) & 255;
}


// Function: nested_if_2 at 0x4014c0
unsigned int nested_if_2(unsigned int a0, unsigned int a1)
{
 if (a0 <= 0)
 {
 return 0;
 }
 else if (a1 <= 0)
 {
 return a0;
 }
 else
 {
 return a0 + a1;
 }
}


// Function: sub_4014db at 0x4014db
void sub_4014db(unsigned int a0)
{
 nested_if_deep(a0, 0, 0, 0, 0);
 return;
}


// Function: nested_if_deep at 0x4014e0
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
 return (char)_ccall(15, 15, a4, 0, 0) + 4;
 }
 else
 {
 return 3;
 }
}


// Function: sub_40151a at 0x40151a
void sub_40151a()
{
}


// Function: sub_401526 at 0x401526
void sub_401526()
{
}


// Function: sub_401536 at 0x401536
void sub_401536(unsigned int a0)
{
 if_elseif_chain(a0);
 return;
}


// Function: if_elseif_chain at 0x401540
unsigned int if_elseif_chain(unsigned int a0)
{
 if (!a0)
 {
 return 10;
 }
 else if (a0 == 1)
 {
 return 20;
 }
 else if (a0 != 2)
 {
 return 4294967295;
 }
 else
 {
 return 30;
 }
}


// Function: sub_401567 at 0x401567
void sub_401567()
{
}


// Function: sub_401576 at 0x401576
void sub_401576(unsigned int a0)
{
 if_elseif_long(a0);
 return;
}


// Function: if_elseif_long at 0x401580
unsigned int if_elseif_long(unsigned int a0)
{
 unsigned int v0; // eax

 v0 = 4294967295;
 if (a0 <= 4)
 v0 = (a0 + 1) * 100;
 return v0;
}


// Function: sub_401599 at 0x401599
void sub_401599(unsigned int a0)
{
 switch_small(a0);
 return;
}


// Function: switch_small at 0x4015a0
unsigned int switch_small(unsigned int a0)
{
 unsigned int v0; // ecx

 __x86_get_pc_thunk_cx();
 if (a0 > 3)
 return 4294967295;
 return *((int *)(v0 + 18975 + a0 * 4 - 10692));
}


// Function: sub_4015c5 at 0x4015c5
void sub_4015c5(unsigned int a0)
{
 switch_large(a0);
 return;
}


// Function: switch_large at 0x4015d0
unsigned int switch_large(unsigned int a0)
{
 unsigned int v0; // eax

 v0 = 4294967295;
 if (a0 <= 9)
 v0 = a0 * 10;
 return v0;
}


// Function: sub_4015e8 at 0x4015e8
void sub_4015e8(unsigned int a0)
{
 switch_default(a0);
 return;
}


// Function: switch_default at 0x4015f0
unsigned int switch_default(unsigned int a0)
{
 unsigned int v0; // eax

 v0 = 0;
 if (a0 - 1 <= 2)
 v0 = a0 * 100;
 return v0;
}


// Function: sub_401606 at 0x401606
void sub_401606(unsigned int a0)
{
 switch_fallthrough(a0);
 return;
}


// Function: switch_fallthrough at 0x401610
unsigned int switch_fallthrough(unsigned int a0)
{
 if (a0 == 2)
 {
 return 6;
 }
 else if (a0 != 3)
 {
 return (a0 == 1) * 2 - 1;
 }
 else
 {
 return 21;
 }
}


// Function: sub_40162f at 0x40162f
void sub_40162f()
{
}


// Function: sub_40163b at 0x40163b
void sub_40163b()
{
}


// Function: sub_401648 at 0x401648
void sub_401648(unsigned int a0)
{
 loop_for_fixed(a0);
 return;
}


// Function: loop_for_fixed at 0x401650
unsigned int loop_for_fixed(unsigned int i)
{
 unsigned int v0; // eax
 unsigned int v1; // edx
 unsigned int v2; // edx
 unsigned int v3; // eax
 unsigned int v4; // edx

 if (i <= 0)
 return 0;
 v0 = 0;
 v1 = 0;
 do
 {
 v3 = v0;
 v4 = v1 + v3;
 v0 = v3 + 1;
 v1 = v4;
 } while (i != v0);
 return v2 + v3;
}


// Function: sub_40166c at 0x40166c
void sub_40166c()
{
}


// Function: sub_401675 at 0x401675
int sub_401675(unsigned int a0)
{
 loop_while(a0);
 return 0;
}


// Function: loop_while at 0x401680
unsigned int loop_while(unsigned int a0)
{
 unsigned int v0; // ebx
 unsigned int v1; // ebx
 unsigned int v2; // ebx
 unsigned int v3; // eax
 unsigned int i; // ecx

 if (!a0)
 return 1;
 v0 = 0;
 do
 {
 v2 = v0 + 1;
 a0 = (a0 * 1717986919 >> 34) - (a0 >> 31);
 v0 = v2;
 } while (i != v3);
 return v1 + 1;
}


// Function: sub_4016b2 at 0x4016b2
void sub_4016b2()
{
}


// Function: sub_4016c2 at 0x4016c2
int sub_4016c2(unsigned int a0)
{
 loop_dowhile(a0);
 return 0;
}


// Function: loop_dowhile at 0x4016d0
unsigned int loop_dowhile(unsigned int a0)
{
 unsigned int v0; // ebx
 unsigned int v1; // ebx
 unsigned int v2; // ebx
 unsigned int v3; // eax
 unsigned int i; // ecx

 v0 = 0;
 do
 {
 v2 = v0 + 1;
 a0 = (a0 * 1717986919 >> 34) - (a0 >> 31);
 v0 = v2;
 } while (i != v3);
 return v1 + 1;
}


// Function: sub_401702 at 0x401702
int sub_401702(unsigned int a0, unsigned int a1)
{
 loop_nested(a0, a1);
 return 0;
}


// Function: loop_nested at 0x401710
unsigned int loop_nested(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // edx
 unsigned int v1; // eax
 unsigned int v2; // ebx

 if (a0 <= 0)
 return 0;
 v0 = 0;
 v1 = 0;
 do
 {
 v2 = a1 + v1;
 if ((char)_ccall(15, 15, a1, 0, 0))
 v1 = v2;
 else
 v1 = v1;
 } while ((v0 += 1, a0 != v0));
 return v1;
}


// Function: sub_401747 at 0x401747
void sub_401747(unsigned int a0)
{
 loop_break(a0);
 return;
}


// Function: loop_break at 0x401750
unsigned int loop_break(unsigned int a0)
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
 default:
 return (a0 == 50) * 5 - 1;
 }
}


// Function: sub_40177a at 0x40177a
void sub_40177a()
{
}


// Function: sub_401783 at 0x401783
void sub_401783()
{
}


// Function: sub_40178e at 0x40178e
void sub_40178e()
{
}


// Function: sub_40179c at 0x40179c
int sub_40179c(unsigned int a0)
{
 loop_continue(a0);
 return 0;
}


// Function: loop_continue at 0x4017a0
unsigned int loop_continue(unsigned int a0)
{
 unsigned int v0; // eax
 unsigned int v1; // edx
 unsigned int v2; // ecx

 if (a0 <= 0)
 return 0;
 v0 = 1;
 v1 = 0;
 do
 {
 v2 = v1 + v0;
 if (((char)v0 & 1))
 v1 = v2;
 else
 v1 = v1;
 } while ((v0 += 1, a0 + 1 != v0));
 return v1;
}


// Function: sub_4017d3 at 0x4017d3
void sub_4017d3()
{
}


// Function: sub_4017de at 0x4017de
void sub_4017de(unsigned int a0)
{
 goto_forward(a0);
 return;
}


// Function: goto_forward at 0x4017e0
unsigned int goto_forward(unsigned int a0)
{
 unsigned int v0; // eax

 v0 = a0;
 if (v0 > 0)
 v0 *= v0;
 return v0 * 2;
}


// Function: sub_4017f2 at 0x4017f2
void sub_4017f2(unsigned int a0)
{
 goto_backward(a0);
 return;
}


// Function: goto_backward at 0x401800
unsigned int goto_backward(unsigned int a0)
{
 unsigned int v0; // edx
 unsigned int i; // eax
 unsigned int v2; // eax
 unsigned int v3; // edx
 unsigned int v4; // edx

 v0 = 1;
 if (a0 <= 0)
 return 1;
 i = 1;
 do
 {
 v2 = i;
 v4 = v2 * v0;
 v0 = v4;
 i = v2 + 1;
 } while (a0 + 1 != i);
 return v2 * v3;
}


// Function: sub_40182d at 0x40182d
void sub_40182d(unsigned int a0, unsigned int a1)
{
 ternary_op(a0, a1);
 return;
}


// Function: ternary_op at 0x401830
int ternary_op(unsigned int a0, unsigned int a1)
{
 if (a1 >= a0)
 return a1;
 return a0;
}


// Function: sub_401842 at 0x401842
int sub_401842(unsigned int a0)
{
 test_control_flow_l1(a0);
 return 0;
}


// Function: test_control_flow_l1 at 0x401850
extern unsigned int g_403008;

int test_control_flow_l1()
{
 sub_4010e0(&g_403008);
 sub_4010f0(1, "CF-L1-01 (sequential_ops): %d\n", 21);
 sub_4010f0(1, "CF-L1-02 (single_if): %d\n", 20);
 sub_4010f0(1, "CF-L1-02 (single_if): %d\n", 4294967291);
 sub_4010f0(1, "CF-L1-03 (if_else): %d\n", 1);
 sub_4010f0(1, "CF-L1-03 (if_else): %d\n", 0);
 sub_4010f0(1, "CF-L1-04 (nested_if_2): %d\n", 15);
 sub_4010f0(1, "CF-L1-04 (nested_if_2): %d\n", 10);
 sub_4010f0(1, "CF-L1-04 (nested_if_2): %d\n", 0);
 sub_4010f0(1, "CF-L1-05 (nested_if_deep): %d\n", 5);
 sub_4010f0(1, "CF-L1-06 (if_elseif_chain): %d\n", 20);
 sub_4010f0(1, "CF-L1-07 (if_elseif_long): %d\n", 400);
 sub_4010f0(1, "CF-L1-08 (switch_small): %d\n", 50);
 sub_4010f0(1, "CF-L1-09 (switch_large): %d\n", 70);
 sub_4010f0(1, "CF-L1-10 (switch_default): %d\n", 0);
 sub_4010f0(1, "CF-L1-11 (switch_fallthrough): %d\n", 21);
 sub_4010f0(1, "CF-L1-12 (loop_for_fixed): %d\n", 45);
 sub_4010f0(1, "CF-L1-13 (loop_while): %d\n", 5);
 sub_4010f0(1, "CF-L1-14 (loop_dowhile): %d\n", 4);
 sub_4010f0(1, "CF-L1-15 (loop_nested): %d\n", 12);
 sub_4010f0(1, "CF-L1-16 (loop_break): %d\n", 2);
 sub_4010f0(1, "CF-L1-16 (loop_break): %d\n", 4294967295);
 sub_4010f0(1, "CF-L1-17 (loop_continue): %d\n", 25);
 sub_4010f0(1, "CF-L1-18 (goto_forward): %d\n", 50);
 sub_4010f0(1, "CF-L1-18 (goto_forward): %d\n", 4294967290);
 sub_4010f0(1, "CF-L1-19 (goto_backward): %d\n", 120);
 sub_4010f0(1, "CF-L1-20 (ternary_op): %d\n", 10);
 return sub_4010f0(1, "CF-L1-20 (ternary_op): %d\n", 8);
}


// Function: loop_multi_exit at 0x401a50
unsigned int loop_multi_exit(unsigned int a0)
{
 unsigned int v0; // eax
 unsigned int v1; // edx

 if (a0 == 1)
 {
 v0 = 0;
 goto LABEL_401a9e;
 }
 if (a0 == 2)
 {
 v0 = 0;
 goto LABEL_401aab;
 }
 if (a0 == 3)
 {
 v0 = 0;
 goto LABEL_401ab4;
 }
 if (a0 == 4)
 {
 v0 = 0;
 goto LABEL_401abd;
 }
 if (a0 == 5)
 {
 v0 = 1;
 goto LABEL_401a9e;
 }
 if (a0 == 6)
 {
 v0 = 1;
 goto LABEL_401aab;
 }
 if (a0 == 7)
 {
 v0 = 1;
 goto LABEL_401ab4;
 }
 if (a0 != 8)
 {
 if (a0 == 9)
 {
 v0 = 2;
LABEL_401a9e:
 v1 = 0;
 }
 else if (a0 == 10)
 {
 v0 = 2;
LABEL_401aab:
 v1 = 1;
 }
 else if (a0 != 11)
 {
 if (a0 != 12)
 return 4294967295;
 v0 = 2;
LABEL_401abd:
 v1 = 3;
 }
 else
 {
 v0 = 2;
LABEL_401ab4:
 v1 = 2;
 }
 return v1 + v0 * 10;
 }
 v0 = 1;
 goto LABEL_401abd;
}


// Function: sub_401afc at 0x401afc
void sub_401afc(unsigned int a0)
{
 infinite_loop((unsigned int *)a0);
 return;
}


// Function: infinite_loop at 0x401b00
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


// Function: sub_401b0c at 0x401b0c
void sub_401b0c()
{
}


// Function: sub_401b29 at 0x401b29
void sub_401b29(unsigned int a0)
{
 multi_return(a0);
 return;
}


// Function: multi_return at 0x401b30
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
 else if (((char)a0 & 1))
 {
 return a0 + 1;
 }
 else
 {
 return a0 * 2;
 }
}


// Function: sub_401b4e at 0x401b4e
void sub_401b4e()
{
}


// Function: sub_401b5c at 0x401b5c
void sub_401b5c(unsigned int a0)
{
 conditional_return(a0);
 return;
}


// Function: conditional_return at 0x401b60
unsigned int conditional_return(unsigned int a0)
{
 if (a0 > 0)
 {
 return a0 * 2;
 }
 else if (a0)
 {
 return -(a0);
 }
 else
 {
 return 0;
 }
}


// Function: sub_401b6f at 0x401b6f
void sub_401b6f()
{
}


// Function: sub_401b7f at 0x401b7f
int sub_401b7f(unsigned int a0, unsigned int a1, unsigned int a2)
{
 duffs_device(a0, a1, a2);
 return 0;
}


// Function: duffs_device at 0x401b80
extern char _GLOBAL_OFFSET_TABLE_;

unsigned int duffs_device(unsigned int a0, unsigned int a1, unsigned int a2)
{
 if (a2 <= 0)
 return 4294967295;
 return 0;
}


// Function: _L194 at 0x401c3d
void _L194()
{
}


// Function: sub_401c43 at 0x401c43
void sub_401c43(unsigned int a0)
{
 loop_complex_cond(a0);
 return;
}


// Function: loop_complex_cond at 0x401c50
unsigned int loop_complex_cond(unsigned int a0)
{
 unsigned int v0; // edx
 unsigned int v1; // ecx
 unsigned int v2; // eax

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
 return v2 + v0 + v1;
}


// Function: sub_401cc2 at 0x401cc2
void sub_401cc2()
{
}


// Function: sub_401d28 at 0x401d28
int sub_401d28(unsigned int a0)
{
 loop_modify_var(a0);
 return 0;
}


// Function: loop_modify_var at 0x401d30
unsigned int loop_modify_var(unsigned int a0)
{
 unsigned int flag1; // esi
 unsigned int v1; // eax
 unsigned int v2; // ecx
 unsigned int v3; // edx
 unsigned int v4; // eax

 flag1 = a0;
 if (flag1 <= 0)
 return 0;
 v1 = 1;
 v2 = 0;
 if (flag1 == 1)
 return 0;
 v3 = 1;
 v4 = v1 + 1;
 if (flag1 <= v4)
 return v3;
}


// Function: sub_401d7a at 0x401d7a
void sub_401d7a()
{
}


// Function: sub_401d85 at 0x401d85
void sub_401d85(unsigned int a0)
{
 loop_external_state((unsigned int *)a0);
 return;
}


// Function: loop_external_state at 0x401d90
unsigned int loop_external_state(unsigned int *a0)
{
 unsigned int v0; // eax

 v0 = 0;
 do
 {
 } while (!*(a0) && (v0 += 1, v0 != 101));
 return v0;
}


// Function: sub_401d9c at 0x401d9c
void sub_401d9c()
{
}


// Function: sub_401daf at 0x401daf
void sub_401daf(unsigned int a0, unsigned int a1)
{
 tail_recursion(a0, a1);
 return;
}


// Function: tail_recursion at 0x401db0
unsigned int tail_recursion(unsigned int i, unsigned int a1)
{
 unsigned int v0; // edx
 unsigned int v1; // eax
 unsigned int v2; // edx

 if (i <= 1)
 return a1;
 do
 {
 v1 = i;
 v2 = v1 * a1;
 i = v1 - 1;
 a1 = v2;
 } while (i != 1);
 return v1 * v0;
}


// Function: sub_401dd6 at 0x401dd6
void sub_401dd6(unsigned int a0, unsigned int a1)
{
 indirect_recursion_a(a0, a1);
 return;
}


// Function: indirect_recursion_a at 0x401de0
unsigned int indirect_recursion_a(unsigned int a0, unsigned int cur)
{
 unsigned int v0; // ecx

 if (cur <= 0)
 return a0;
 while (1)
 {
 if (((char)a0 & 1))
 {
 if (cur == 1)
 return a0 * 3 + 1;
 v0 = a0 * 3 + 2;
 if (cur <= 2)
 return v0;
 if (!((char)v0 & 1))
 goto LABEL_401e4d;
 goto LABEL_401e0c;
 }
 else
 {
 if (cur == 1 || !((v0 = (a0 + (a0 >> 31) >> 1) + 1, cur > 2)))
 break;
 if (((char)v0 & 1))
 {
LABEL_401e0c:
 if (cur == 3)
 return v0 * 3 + 1;
 cur -= 4;
 a0 = v0 * 3 + 2;
 goto LABEL_401e1a;
 }
 else
 {
LABEL_401e4d:
 if (cur == 3)
 return (v0 >> 31) + v0 >> 1;
 cur -= 4;
 a0 = ((v0 >> 31) + v0 >> 1) + 1;
LABEL_401e1a:
 if (!cur)
 return a0;
 }
 }
 }
 return a0 + (a0 >> 31) >> 1;
}


// Function: sub_401e23 at 0x401e23
void sub_401e23()
{
}


// Function: sub_401e2e at 0x401e2e
void sub_401e2e()
{
}


// Function: sub_401e65 at 0x401e65
void sub_401e65()
{
}


// Function: sub_401e6e at 0x401e6e
void sub_401e6e(unsigned int a0, unsigned int a1)
{
 call_func_ptr(a0, a1);
 return;
}


// Function: call_func_ptr at 0x401e70
int call_func_ptr(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp+0x4]
 void (*func_ptr)(void);

 v0 = a1;
 func_ptr = (void (*)(void))a0;
 func_ptr();
 return 0;
}


// Function: sub_401e82 at 0x401e82
void sub_401e82(unsigned int a0, unsigned int a1)
{
 call_func_ptr_array(a0, a1);
 return;
}


// Function: call_func_ptr_array at 0x401e90
unsigned int call_func_ptr_array(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 unsigned int v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]
 unsigned int v4; // [bp-0x4]
 unsigned int v5; // [bp+0x4]

 v3 = 0;
 v0 = 0;
 v1 = 0;
 v2 = 0;
 if (a0 <= 2)
 {
 if (v3 == 0)
 {
 v5 = a1;
 return a0;
 }
 }
 else
 {
 if (v3 == 0)
 return 4294967295;
 }
 __stack_chk_fail_local();
 return call_virtual_func(0, 0);
}


// Function: call_virtual_func at 0x401f20
unsigned int call_virtual_func(unsigned int a0, unsigned int a1)
{
 return a1 * 2;
}


// Function: sub_401f2b at 0x401f2b
int sub_401f2b(unsigned int a0, unsigned int i, unsigned int (*a2)(unsigned int))
{
 process_with_callback(a0, i, a2);
 return 0;
}


// Function: process_with_callback at 0x401f30
unsigned int process_with_callback(unsigned int a0, unsigned int i, unsigned int (*a2)(unsigned int))
{
 unsigned int v0; // esi
 unsigned int v1; // ebx
 unsigned int v2; // ebx
 unsigned int v3; // esi
 unsigned int v4; // eax
 unsigned int v5; // ebx

 if (i <= 0)
 return 0;
 v0 = 0;
 v1 = 0;
 do
 {
 v2 = v1;
 v3 = v0 + 1;
 v5 = v2 + a2(*((int *)(a0 + v0 * 4)));
 v0 = v3;
 v1 = v5;
 } while (i != v0);
 return v2 + v4;
}


// Function: sub_401f7c at 0x401f7c
int sub_401f7c(unsigned int a0)
{
 test_control_flow_l2(a0);
 return 0;
}


// Function: test_control_flow_l2 at 0x401f80
extern unsigned int g_403110;

int test_control_flow_l2()
{
 unsigned long v13; // ldt
 unsigned long v14; // gdt
 unsigned short v15; // gs
 unsigned int v16; // eax
 unsigned int i; // eax
 unsigned int v19; // eax
 unsigned int cur; // ecx
 unsigned int v21; // edx
 unsigned int v0; // [bp-0x58]
 unsigned int flag1; // [bp-0x50]
 unsigned int v3; // [bp-0x4c]
 unsigned int v4; // [bp-0x48]
 unsigned int v5; // [bp-0x44]
 unsigned int v6; // [bp-0x40]
 unsigned int v7; // [bp-0x3c]
 unsigned int v8; // [bp-0x38]
 unsigned int v9; // [bp-0x34]
 unsigned long v10; // [bp-0x30]
 unsigned int v11; // [bp-0x10]

 v11 = *((int *)_ccall(v13, v14, (unsigned int)v15, 20, 0));
 sub_4010e0(&g_403110);
 sub_4010f0(1, "CF-L2-01 (loop_multi_exit): %d\n", 12);
 v0 = 0;
 v16 = 0;
 do
 {
 if (v0 == 1)
 goto LABEL_401fe6;
 } while ((v16 += 1, v16 != 1001));
 v0 = 1;
LABEL_401fe6:
 sub_4010f0(1, "CF-L2-02 (infinite_loop): %d\n", v16);
 sub_4010f0(1, "CF-L2-03 (multi_return): %d\n", 4294967295);
 sub_4010f0(1, "CF-L2-03 (multi_return): %d\n", 4294967294);
 sub_4010f0(1, "CF-L2-03 (multi_return): %d\n", 4);
 sub_4010f0(1, "CF-L2-04 (conditional_return): %d\n", 10);
 sub_4010f0(1, "CF-L2-04 (conditional_return): %d\n", 5);
 flag1 = 1;
 i = 0;
 v3 = 2;
 v4 = 3;
 v5 = 4;
 v6 = 5;
 v7 = 6;
 v8 = 7;
 v9 = 8;
 do
 {
 *((unsigned int *)((char *)&v10 + i)) = 0;
 i += 4;
 } while (i < 32);
 sub_4010f0(1, "CF-L2-05 (duffs_device): %d\n", duffs_device(&v10, &flag1, 8));
 sub_4010f0(1, "CF-L2-06 (loop_complex_cond): %d\n", 18);
 v19 = 1;
 cur = 0;
 v21 = 1;
 v19 += 1;
 cur = v19;
}


// Function: sub_401fcf at 0x401fcf
void sub_401fcf()
{
}


// Function: sub_4020ff at 0x4020ff
void sub_4020ff()
{
}





// Function: sub_402238 at 0x402238
void sub_402238()
{
}


// Function: cpp_exception at 0x402270
unsigned int cpp_exception(unsigned int a0)
{
 if (a0 < 0)
 {
 return 4294967295;
 }
 else if (a0 <= 100)
 {
 return a0 * 2;
 }
 else
 {
 return 4294967294;
 }
}


// Function: sub_402284 at 0x402284
void sub_402284()
{
}


// Function: sub_402294 at 0x402294
void sub_402294(unsigned int a0, unsigned int a1, unsigned int a2)
{
 large_jump_table(a0, a1, a2);
 return;
}


// Function: large_jump_table at 0x4022a0
unsigned int large_jump_table(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v0; // [bp-0x38]
 unsigned int v1; // [bp-0x34]
 unsigned int v2; // [bp-0x30]
 unsigned int v3; // [bp-0x2c]
 unsigned int v4; // [bp-0x28]
 unsigned int v5; // [bp-0x24]
 unsigned int v6; // [bp-0x20]
 unsigned int v7; // [bp-0x1c]
 unsigned int v8; // [bp-0x18]
 unsigned int v9; // [bp-0x14]
 unsigned int v10; // [bp-0x10]

 v10 = 0;
 v0 = 0;
 v1 = 0;
 v2 = 0;
 v3 = 0;
 v4 = 0;
 v5 = 0;
 v6 = 0;
 v7 = 0;
 v8 = 0;
 v9 = 0;
 if (a0 <= 9)
 {
 if (v10 == 0)
 {
 return a0;
 }
 }
 else
 {
 if (v10 == 0)
 return 4294967295;
 }
 __stack_chk_fail_local();
 return conditional_func_ptr(a0, a1);
}


// Function: conditional_func_ptr at 0x402380
int conditional_func_ptr(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x4]

 __x86_get_pc_thunk_dx();
 v0 = 0;
 if (a0)
 {
 if (a0 != 1)
 v0 = 1;
 }
 return a1;
}


// Function: sub_4023bb at 0x4023bb
void sub_4023bb(unsigned int a0, unsigned int a1)
{
 state_machine(a0, a1);
 return;
}


// Function: state_machine at 0x4023c0
unsigned int state_machine(unsigned int a0, unsigned int a1)
{
 if (a1 == 2)
 {
 return 2;
 }
 else if (a1 <= 2)
 {
 if (!a1)
 {
 return a0 == 1;
 }
 else if (a1 != 1)
 {
 return 3;
 }
 else if (a0 != 2)
 {
 return (a0 == 99) * 2 + 1;
 }
 else
 {
 return 2;
 }
 }
 else
 {
 if (a1 == 3)
 return -(0 < a0) & 3;
 return 3;
 }
}


// Function: sub_4023ee at 0x4023ee
void sub_4023ee()
{
}


// Function: sub_402401 at 0x402401
void sub_402401()
{
}


// Function: sub_40240e at 0x40240e
void sub_40240e()
{
}


// Function: sub_402416 at 0x402416
void sub_402416()
{
}


// Function: sub_40242b at 0x40242b
void sub_40242b(unsigned int a0, unsigned int a1)
{
 fsm_func_table(a0, a1);
 return;
}


// Function: fsm_func_table at 0x402430
unsigned int fsm_func_table(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]
 unsigned int v2; // [bp-0x18]
 unsigned int v3; // [bp-0x14]
 unsigned int v4; // [bp-0x10]
 unsigned int v5; // [bp-0x4]

 v5 = 0;
 v4 = 0;
 v0 = 0;
 v1 = 0;
 v2 = 0;
 v3 = 0;
 if (a1 <= 3)
 {
 if (v4 == 0)
 return a1;
 }
 else
 {
 if (v4 == 0)
 return 3;
 }
 __stack_chk_fail_local();
 return computed_goto(a0, a1);
}


// Function: computed_goto at 0x4024c0
unsigned int computed_goto(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]
 unsigned int v2; // [bp-0x18]
 unsigned int v3; // [bp-0x14]
 unsigned int v4; // [bp-0x10]

 v4 = 0;
 v0 = 0;
 v1 = 0;
 v2 = 0;
 v3 = 0;
 if (a1 <= 3)
 {
 return a1;
 }
 else if (v4 == 0)
 {
 return 4294967295;
 }
 else
 {
 __stack_chk_fail_local();
 return obfuscated_cf(a0);
 }
}


// Function: obfuscated_cf at 0x402570
unsigned int obfuscated_cf(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_40257b at 0x40257b
void sub_40257b(unsigned int a0)
{
 opaque_predicate(a0);
 return;
}


// Function: opaque_predicate at 0x402580
unsigned int opaque_predicate(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_40258b at 0x40258b
void sub_40258b(unsigned int a0)
{
 overlapped_code(a0);
 return;
}


// Function: overlapped_code at 0x402590
unsigned int overlapped_code(unsigned int a0)
{
 if (!((char)a0 & 1))
 return (a0 >> 31) + a0 >> 1;
 return a0 * 3 + 1;
}


// Function: sub_4025a2 at 0x4025a2
void sub_4025a2()
{
}


// Function: sub_4025b2 at 0x4025b2
int sub_4025b2(unsigned int a0)
{
 test_control_flow_l3(a0);
 return 0;
}


// Function: test_control_flow_l3 at 0x4025c0
extern unsigned int g_403294;

int test_control_flow_l3()
{
 sub_4010e0(&g_403294);
 sub_4010f0(1, "CF-L3-01 (non_local_jump): %d\n", non_local_jump_constprop_0());
 sub_4010f0(1, "CF-L3-01 (non_local_jump): %d\n", non_local_jump(4294967291));
 sub_4010f0(1, "CF-L3-02 (cpp_exception): %d\n", 10);
 sub_4010f0(1, "CF-L3-02 (cpp_exception): %d\n", 4294967295);
 sub_4010f0(1, "CF-L3-03 (large_jump_table): %d\n", 15);
 sub_4010f0(1, "CF-L3-04 (conditional_func_ptr): %d\n", 10);
 sub_4010f0(1, "CF-L3-05 (state_machine): %d\n", 1);
 sub_4010f0(1, "CF-L3-06 (fsm_func_table): %d\n", 2);
 sub_4010f0(1, "CF-L3-07 (computed_goto): %d\n", computed_goto_constprop_0());
 sub_4010f0(1, "CF-L3-08 (obfuscated_cf): %d\n", 10);
 sub_4010f0(1, "CF-L3-09 (opaque_predicate): %d\n", 10);
 return sub_4010f0(1, "CF-L3-10 (overlapped_code): %d\n", 16);
}


// Function: __x86.get_pc_thunk_ax at 0x4026d1
unsigned int __x86_get_pc_thunk_ax()
{
 char v0; // [bp+0x0]

 return *((int *)&v0);
}


// Function: __x86.get_pc_thunk_cx at 0x4026d5
void __x86_get_pc_thunk_cx()
{
 return;
}


// Function: sub_4026d9 at 0x4026d9
int sub_4026d9()
{
 __stack_chk_fail_local();
 return;
}


// Function: __stack_chk_fail_local at 0x4026e0
int __stack_chk_fail_local()
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = v2;
 sub_4010d0();
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

unsigned int __do_global_ctors_aux()
{
 struct_0 *v2; // edx
 struct_0 *ptr; // edx
 unsigned int *v4; // eax
 unsigned int v5; // ebx
 struct_0 *v6; // ebx
 struct_0 *p; // ebx
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_dx();
 ptr = (struct_0 *)((char *)&v2[1] + 227);
 v4 = (unsigned int *)&ptr->padding_0[232];
 if (*((int *)&ptr->padding_0[232]) == 0xffffffff)
 return 4294967295;
 v0 = v5;
 v6 = &ptr->padding_0[232];
 do
 {
 p = v6;
 ((void (*)(void))v4)();
 v4 = *((int *)&p->padding_0[4]);
 v6 = &p->padding_0[4];
 } while (*((int *)&p->padding_0[4]) != 0xffffffff);
 return 4294967295;
}


// Function: sub_402742 at 0x402742
void sub_402742()
{
}



/* CRT stub function _fini removed by preprocessor */


