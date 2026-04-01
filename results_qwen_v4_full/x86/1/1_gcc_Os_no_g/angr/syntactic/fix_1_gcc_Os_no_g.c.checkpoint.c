// Angr Decompilation of 1_gcc_Os_no_g
// Platform: X86

#include <stdbool.h>
#include <stdint.h>

/* CRT stub function _init removed by preprocessor */
typedef struct struct_0 {
 char padding_0[40];
 unsigned int field_28;
} struct_0;

struct_0 *g_405ff4;
unsigned int g_4030e8;
unsigned int g_4030a0;
unsigned int g_4030c0;
unsigned int g_403355;
unsigned int g_4030d4;
unsigned int g_403548;

// Forward declarations for thunk functions
unsigned int __x86_get_pc_thunk_bx();
unsigned int __x86_get_pc_thunk_dx();
unsigned int __x86_get_pc_thunk_di();
unsigned int __x86_get_pc_thunk_ax();
void __x86_get_pc_thunk_cx();
int __x86_get_pc_thunk_si(int a0, int a1);

// Forward declarations for other functions
int frame_dummy();
int __do_global_ctors_aux();
void _start();
void deregister_tm_clones();
void register_tm_clones();
void __do_global_dtors_aux();
int __stack_chk_fail_local();
int _ccall(unsigned long v9, unsigned long v10, unsigned int v11, int a3);
int main();
int test_control_flow_l1();
int test_control_flow_l2();
int test_control_flow_l3();
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
int sequential_ops(unsigned int a0, unsigned int a1, unsigned int a2);
unsigned int single_if(unsigned int a0);
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
unsigned int loop_while(unsigned int i);
unsigned int loop_dowhile(unsigned int i);
unsigned int loop_nested(unsigned int a0, unsigned int a1);
unsigned int loop_break(unsigned int a0);
unsigned int loop_continue(unsigned int a0);
unsigned int goto_forward(unsigned int a0);
unsigned int goto_backward(unsigned int i);
int ternary_op(unsigned int a0, unsigned int a1);
unsigned int loop_multi_exit();
unsigned int infinite_loop(unsigned int *ptr);
unsigned int multi_return(unsigned int a0);
unsigned int conditional_return(unsigned int a0);
unsigned int duffs_device(unsigned int a0, unsigned int *a1, unsigned int a2);
int loop_complex_cond(unsigned int a0);
unsigned int loop_modify_var(unsigned int a0);
unsigned int loop_external_state(unsigned int *a0);
unsigned int tail_recursion(unsigned int i, unsigned int a1);
unsigned int indirect_recursion_a(unsigned int a0, unsigned int i);
int call_func_ptr(unsigned int a0, unsigned int a1);
unsigned int call_func_ptr_array(unsigned int a0, unsigned int a1);
unsigned int call_virtual_func(unsigned int a0, unsigned int a1);
unsigned int process_with_callback(unsigned int a0, unsigned int a1, unsigned int *a2);
unsigned int non_local_jump();
unsigned int cpp_exception(unsigned int a0);
unsigned int large_jump_table(unsigned int a0, unsigned int a1, unsigned int a2);
int conditional_func_ptr(unsigned int a0, unsigned int a1);
unsigned int state_machine(unsigned int a0, unsigned int a1);
unsigned int fsm_func_table(unsigned int a0, unsigned int a1);
unsigned int computed_goto(unsigned int a0, unsigned int a1);
unsigned int obfuscated_cf(unsigned int a0);
unsigned int opaque_predicate(unsigned int a0);
int overlapped_code(char a0);
int sub_401030();
int sub_401040();
void sub_40104e();
int sub_401050();
void sub_40105e();
int sub_401060();
void sub_40106e();
int sub_401070();
void sub_40107e();
int sub_401080();
void sub_40108e();
int sub_401090();
int sub_40109e();
int sub_4010a0();
int sub_4010aa();
int sub_4010b0();
int sub_4010ba();
int sub_4010c0();
int sub_4010ca();
int sub_4010d0();
int sub_4010da();
int sub_4010e0();
int sub_4010ea();
int sub_4010f0();
int sub_4010fa();
int sub_401100();
void sub_40110a();
void sub_40112d();
void sub_40115c();
void sub_401164();
void sub_4011a3();
void sub_4011a9();
void sub_4011f7();
void sub_40128a();
unsigned int recursion_factorial(unsigned int i);
unsigned int double_value(unsigned int a0);
unsigned int triple_value(unsigned int a0);




// Function: sub_401030 at 0x401030
int sub_401030()
{
 unsigned int ptr[3]; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 return 0;
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

 v1 = g_405ff4;
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

 v1 = g_405ff4;
 return v1->field_28;
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

 v1 = g_405ff4;
 return v1->field_28;
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

 v1 = g_405ff4;
 return v1->field_28;
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

 v1 = g_405ff4;
 return v1->field_28;
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

 v1 = g_405ff4;
 return v1->field_28;
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

 v1 = g_405ff4;
 return v1->field_28;
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

// Stub implementation for _ccall
int _ccall(unsigned long v9, unsigned long v10, unsigned int v11, int a3)
{
 return 0;
}

// Stub implementation for frame_dummy
int frame_dummy()
{
 return 0;
}



// Function: sub_40115c at 0x40115c
void sub_40115c()
{
 return;
}


// Function: __x86_get_pc_thunk_bx at 0x401160
unsigned int __x86_get_pc_thunk_bx()
{
 return 0;
}


// Function: sub_401164 at 0x401164
void sub_401164()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */

void deregister_tm_clones()
{
 unsigned int *ptr; // edx

 __x86_get_pc_thunk_dx();
 return;
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

void register_tm_clones()
{
 struct_0 *v2; // edx
 struct_0 *v3; // edx
 unsigned int v4; // ebx
 unsigned int v0; // [bp-0x8]

 v4 = __x86_get_pc_thunk_dx();
 return;
}


// Function: sub_4011f7 at 0x4011f7
void sub_4011f7()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

void __do_global_dtors_aux()
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
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 char v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v5 = __x86_get_pc_thunk_di();
 ptr = &v6->padding_0[19899];
 v1 = v8;
 v0 = v9;
 if (ptr->padding_0[184])
 return;
 if (*((int *)&ptr->padding_0[40]))
 sub_4010a0(*((int *)&ptr->padding_0[60]));
 v10 = &ptr->padding_0[224];
 v11 = *((int *)&ptr->padding_0[188]);
 i = (((char *)&ptr->padding_0[220] - (char *)v10) >> 2) - 1;
 if (*((int *)&ptr->padding_0[188]) < i)
 {
 do
 {
 v13 = v11 + 1;
 *((unsigned int *)&ptr->padding_0[188]) = v13;
 ((void (*)(void))(*((int *)&v10->padding_0[4 * v13])))();
 v11 = *((int *)&ptr->padding_0[188]);
 } while (*((int *)&ptr->padding_0[188]) < i);
 }
 deregister_tm_clones();
 ptr->padding_0[184] = 1;
 return;
}


// Function: sub_40128a at 0x40128a
void sub_40128a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86_get_pc_thunk_dx at 0x401299
unsigned int __x86_get_pc_thunk_dx()
{
 return 0;
}


// Function: __x86_get_pc_thunk_di at 0x40129d
unsigned int __x86_get_pc_thunk_di()
{
 return 0;
}


// Function: recursion_factorial at 0x4012a1
unsigned int recursion_factorial(unsigned int i)
{
 unsigned int v0; // eax

 for (v0 = 1; i > 1; i -= 1)
 {
 v0 *= i;
 }
 return v0;
}


// Function: double_value at 0x4012bd
unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: triple_value at 0x4012cb
unsigned int triple_value(unsigned int a0)
{
 return a0 * 3;
}


// Function: op_add at 0x4012d8
int op_add(unsigned int a0, unsigned int a1)
{
 return a1 + a0;
}


// Function: op_sub at 0x4012e7
int op_sub(unsigned int a0, unsigned int a1)
{
 return a0 - a1;
}


// Function: op_mul at 0x4012f6
int op_mul(unsigned int a0, unsigned int a1)
{
 return a0 * a1;
}


// Function: op_div at 0x401306
unsigned int op_div(unsigned int a0, unsigned int a1)
{
 unsigned int result; // ecx

 result = a1;
 if (result)
 result = a0 / result;
 return result;
}


// Function: op_mod at 0x401320
unsigned int op_mod(unsigned int a0, unsigned int a1)
{
 unsigned int result; // edx

 result = a1;
 if (result)
 result = a0 % result;
 return result;
}


// Function: op_and at 0x40133a
unsigned int op_and(unsigned int a0, unsigned int a1)
{
 return a1 & a0;
}


// Function: op_or at 0x401349
unsigned int op_or(unsigned int a0, unsigned int a1)
{
 return a1 | a0;
}


// Function: op_xor at 0x401358
int op_xor(unsigned int a0, unsigned int a1)
{
 return a1 ^ a0;
}


// Function: op_shl at 0x401367
int op_shl(unsigned int a0, char a1)
{
 return a0 << (a1 & 31);
}


// Function: op_shr at 0x401378
int op_shr(unsigned int a0, char a1)
{
 return a0 >> (a1 & 31);
}


// Function: state_idle at 0x401389
int state_idle(unsigned int a0)
{
 return a0 == 1;
}


// Function: state_processing at 0x40139b
unsigned int state_processing(unsigned int a0)
{
 unsigned int v0; // eax

 v0 = a0;
 if (v0 != 2)
 v0 = (v0 == 99 ? 3 : 1);
 return v0;
}


// Function: state_done at 0x4013bd
unsigned int state_done()
{
 return 2;
}


// Function: state_error at 0x4013c7
unsigned int state_error(unsigned int a0)
{
 unsigned int result; // eax

 result = a0;
 if (result)
 result = 3;
 return result;
}


// Function: sequential_ops at 0x4013dc
int sequential_ops(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return (a1 + a0) * 2 - a2;
}


// Function: single_if at 0x4013f0
unsigned int single_if(unsigned int a0)
{
 unsigned int v0; // eax

 v0 = a0;
 if (v0 > 0)
 v0 *= 2;
 return v0;
}


// Function: if_else at 0x401402
int if_else(unsigned int a0)
{
 char v0; // [bp+0x8]

 return *((int *)&v0) > 0;
}


// Function: nested_if_2 at 0x401414
unsigned int nested_if_2(unsigned int a0, unsigned int a1)
{
 if (a0 <= 0)
 return 0;
 return a0;
}


// Function: nested_if_deep at 0x401431
unsigned int nested_if_deep(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 unsigned int v0; // eax

 v0 = 0;
 if (a0 > 0)
 {
 v0 = 1;
 if (a1 > 0)
 {
 v0 = 2;
 if (a2 > 0)
 {
 v0 = 3;
 if (a3 > 0)
 v0 = (unsigned int)((a4 > 0) + 4);
 }
 }
 }
 return v0;
}


// Function: if_elseif_chain at 0x40146f
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


// Function: if_elseif_long at 0x40149e
unsigned int if_elseif_long(unsigned int a0)
{
 unsigned int v0; // eax

 v0 = 4294967295;
 if (a0 <= 4)
 v0 = (a0 + 1) * 100;
 return v0;
}


// Function: switch_small at 0x4014b8
unsigned int switch_small(unsigned int a0)
{
 unsigned int v0; // ecx

 __x86_get_pc_thunk_cx();
 if (a0 > 3)
 return 4294967295;
 return *((char *)(v0 + 19207 + a0 - 12004));
}


// Function: switch_large at 0x4014df
unsigned int switch_large(unsigned int a0)
{
 unsigned int v0; // eax

 v0 = a0 * 10;
 if (a0 > 9)
 v0 = 4294967295;
 return v0;
}


// Function: switch_default at 0x4014f6
unsigned int switch_default(unsigned int a0)
{
 unsigned int v0; // eax

 v0 = a0 * 100;
 if (a0 - 1 > 2)
 v0 = 0;
 return v0;
}


// Function: switch_fallthrough at 0x40150f
unsigned int switch_fallthrough(unsigned int a0)
{
 unsigned int v0; // eax
 unsigned int v1; // ecx

 if (a0 != 2)
 {
 if (a0 == 3)
 {
 v1 = 12;
LABEL_401538:
 v0 = a0 * 2 + v1;
 return v0 + a0;
 }
 else if (a0 == 1)
 {
 v0 = 0;
 return v0 + a0;
 }
 else
 {
 return 4294967295;
 }
 }
 v1 = 0;
 goto LABEL_401538;
}


// Function: loop_for_fixed at 0x401541
unsigned int loop_for_fixed(unsigned int a0)
{
 unsigned int i; // eax
 unsigned int v1; // edx

 i = 0;
 for (v1 = 0; i < a0; i += 1)
 {
 v1 += i;
 }
 return v1;
}


// Function: loop_while at 0x40155a
unsigned int loop_while(unsigned int i)
{
 unsigned int v0; // ecx

 for (v0 = 0; i; i = i / 10)
 {
 v0 += 1;
 }
 if (!((char)_ccall(15, 15, v0, 0)))
 return 1;
 return v0;
}


// Function: loop_dowhile at 0x401583
unsigned int loop_dowhile(unsigned int i)
{
 unsigned int v0; // ecx
 unsigned int v1; // ecx
 unsigned int v2; // ecx

 v0 = 0;
 do
 {
 v2 = v0 + 1;
 i = i / 10;
 v0 = v2;
 } while (i);
 return v0;
}


// Function: loop_nested at 0x4015a2
unsigned int loop_nested(unsigned int a0, unsigned int a1)
{
 unsigned int i; // ecx
 unsigned int v1; // edx

 i = 0;
 v1 = 0;
 if (a1 < 0)
 a1 = 0;
 for (; i < a0; i += 1)
 {
 v1 += a1;
 }
 return v1;
}


// Function: loop_break at 0x4015c7
unsigned int loop_break(unsigned int a0)
{
 unsigned int v4; // edi
 unsigned int v5; // esi
 char cur[4]; // edi
 void* i; // esi
 unsigned int v8; // eax
 unsigned long v9; // ldt
 unsigned long v10; // gdt
 unsigned short v11; // gs
 unsigned int result; // ecx
 char v0; // [bp-0x24]
 unsigned int v1; // [bp-0x10]
 unsigned int v2; // [bp-0xc]
 unsigned int v3; // [bp-0x8]

 v3 = v4;
 v2 = v5;
 memcpy(cur, &v0, 4);
 i = __x86_get_pc_thunk_ax() - -6736;
 v8 = 0;
 v1 = *((int *)_ccall(v9, v10, (unsigned int)v11, 20));
 for (result = 5; result; i += 4)
 {
 result -= 1;
 *((int *)&cur[0]) = *((int *)i);
 }
 do
 {
 if (*((int *)&(&v0)[4 * v8]) == a0)
 goto LABEL_40160f;
 } while ((v8 += 1, v8 != 5));
 v8 = 4294967295;
LABEL_40160f:
 if (v1 != *((int *)_ccall(v9, v10, (unsigned int)v11, 20)))
 v8 = __stack_chk_fail_local();
 return v8;
}


// Function: loop_continue at 0x401627
unsigned int loop_continue(unsigned int a0)
{
 unsigned int i; // eax
 unsigned int v1; // edx

 i = 1;
 for (v1 = 0; i <= a0; i += 1)
 {
 if (((char)i & 1))
 v1 += i;
 }
 return v1;
}


// Function: goto_forward at 0x401647
unsigned int goto_forward(unsigned int a0)
{
 unsigned int v0; // eax

 v0 = a0;
 if (v0 > 0)
 v0 *= v0;
 return v0 * 2;
}


// Function: goto_backward at 0x40165c
unsigned int goto_backward(unsigned int i)
{
 unsigned int v0; // edx
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // edx
 unsigned int v4; // edx

 v0 = 1;
 if (i <= 0)
 return 1;
 v1 = 1;
 do
 {
 v2 = v1;
 v4 = v2 * v0;
 v0 = v4;
 v1 = v2 + 1;
 } while (i >= v1);
 return v2 * v3;
}


// Function: ternary_op at 0x401680
int ternary_op(unsigned int a0, unsigned int a1)
{
 if (a1 >= a0)
 return a1;
 return a0;
}


// Function: test_control_flow_l1 at 0x401694
extern unsigned int g_4030e8;

int test_control_flow_l1()
{
 sub_4010e0(&g_4030e8);
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
 sub_4010f0(1, "CF-L1-12 (loop_for_fixed): %d\n", loop_for_fixed(10));
 sub_4010f0(1, "CF-L1-13 (loop_while): %d\n", loop_while(12345));
 sub_4010f0(1, "CF-L1-14 (loop_dowhile): %d\n", loop_dowhile(9876));
 sub_4010f0(1, "CF-L1-15 (loop_nested): %d\n", loop_nested(3, 4));
 sub_4010f0(1, "CF-L1-16 (loop_break): %d\n", loop_break(30));
 sub_4010f0(1, "CF-L1-16 (loop_break): %d\n", loop_break(99));
 sub_4010f0(1, "CF-L1-17 (loop_continue): %d\n", loop_continue(10));
 sub_4010f0(1, "CF-L1-18 (goto_forward): %d\n", 50);
 sub_4010f0(1, "CF-L1-18 (goto_forward): %d\n", 4294967290);
 sub_4010f0(1, "CF-L1-19 (goto_backward): %d\n", 120);
 sub_4010f0(1, "CF-L1-20 (ternary_op): %d\n", 10);
 return sub_4010f0(1, "CF-L1-20 (ternary_op): %d\n", 8);
}


// Function: loop_multi_exit at 0x4018e7
unsigned int loop_multi_exit()
{
 unsigned int result; // ecx
 unsigned int v6; // edi
 unsigned int v15; // edx
 unsigned int v16; // eax
 unsigned int v7; // esi
 char cur[4]; // edi
 void* i; // esi
 unsigned int v10; // eax
 unsigned long v11; // ldt
 unsigned long v12; // gdt
 unsigned short v13; // gs
 char *v14; // ecx
 char v0; // [bp-0x40]
 unsigned int v1; // [bp-0x10]
 unsigned int v2; // [bp-0xc]
 unsigned int v3; // [bp-0x8]
 unsigned int v4; // [bp+0x4]

 result = 12;
 v3 = v6;
 v2 = v7;
 memcpy(cur, &v0, 4);
 i = __x86_get_pc_thunk_ax() - -5968;
 v10 = 0;
 for (v1 = *((int *)_ccall(v11, v12, (unsigned int)v13, 20)); result; i += 4)
 {
 result -= 1;
 *((int *)&cur[0]) = *((int *)i);
 }
 v14 = &v0;
 while (true)
 {
 v15 = 0;
 do
 {
 if (*((int *)&v14[4 * v15]) == v4)
 {
 v16 = v10 * 10 + v15;
 goto LABEL_401941;
 }
 } while ((v15 += 1, v15 != 4));
 v10 += 1;
 v14 += 16;
 if (v10 == 3)
 {
 v16 = 4294967295;
LABEL_401941:
 if (v1 != *((int *)_ccall(v11, v12, (unsigned int)v13, 20)))
 v16 = __stack_chk_fail_local();
 return v16;
 }
 }
}


// Function: infinite_loop at 0x401959
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
 return v0;
 }
 }
 return v0;
}


// Function: multi_return at 0x40197a
unsigned int multi_return(unsigned int a0)
{
 if (a0 < 0)
 {
 return 4294967295;
 }
 else if (a0 <= 50)
 {
 return a0 * 2;
 }
 else
 {
 return 4294967294;
 }
}


// Function: conditional_return at 0x4019a4
unsigned int conditional_return(unsigned int a0)
{
 if (a0 <= 0)
 return -(a0);
 return a0 * 2;
}


// Function: duffs_device at 0x4019bc
unsigned int duffs_device(unsigned int a0, unsigned int *a1, unsigned int a2)
{
 unsigned int *v4; // eax
 unsigned int v5; // ebx
 unsigned int *v14; // edx
 unsigned int *ptr3; // eax
 unsigned int *v16; // edx
 unsigned int *ptr4; // eax
 unsigned int *v18; // edx
 unsigned int *ptr5; // eax
 unsigned int *v20; // edx
 unsigned int *ptr6; // eax
 unsigned int *v22; // edx
 unsigned int *ptr; // eax
 unsigned int *v6; // edx
 unsigned int *v24; // edx
 unsigned int v25; // ebx
 unsigned int v7; // ecx
 unsigned int v8; // ebx
 unsigned int v9; // esi
 unsigned int v10; // ebx
 unsigned int *p; // eax
 unsigned int *v12; // edx
 unsigned int *addr; // eax
 unsigned int v0; // [bp-0x10]
 char v1; // [bp-0xc]
 char v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v4 = (unsigned int *)__x86_get_pc_thunk_si(0, 0);
 v0 = v5;
 memcpy(&v6, &a1, sizeof(v6));
 if (v7 <= 0)
 return 4294967295;
 v8 = v7 + 7 >> 3;
 if ((v7 & 7) - 1 <= 6)
 {
 return v7;
 }
 else
 {
 while (true)
 {
 v10 = v8;
 p = &v4[1];
 v12 = &v6[1];
 p[1] = v6[0];
 addr = &p[1];
 v14 = &v12[1];
 addr[1] = v12[0];
 ptr3 = &addr[1];
 v16 = &v14[1];
 ptr3[1] = v14[0];
 ptr4 = &ptr3[1];
 v18 = &v16[1];
 ptr4[1] = v16[0];
 ptr5 = &ptr4[1];
 v20 = &v18[1];
 ptr5[1] = v18[0];
 ptr6 = &ptr5[1];
 v22 = &v20[1];
 ptr6[1] = v20[0];
 ptr = &ptr6[1];
 v24 = &v22[1];
 ptr[1] = v22[0];
 ptr[0] = v24[0];
 v25 = v10 - 1;
 if (v10 == 1)
 break;
 v6 = &v24[1];
 v4 = &ptr[1];
 v8 = v25;
 }
 return v7;
 }
}


// Function: loop_complex_cond at 0x401a5f
int loop_complex_cond(unsigned int a0)
{
 unsigned int i; // edx

 for (i = 0; i * 2 < a0 - i && i <= 9; i += 1);
 return i * 2 + a0 - i + i;
}


// Function: loop_modify_var at 0x401a82
unsigned int loop_modify_var(unsigned int a0)
{
 unsigned int cur; // eax
 unsigned int v1; // edx

 cur = 0;
 for (v1 = 0; cur < a0; cur += 1)
 {
 v1 += cur;
 if (cur > 5)
 cur += 2;
 }
 return v1;
}


// Function: loop_external_state at 0x401aa3
unsigned int loop_external_state(unsigned int *a0)
{
 unsigned int v0; // eax

 v0 = 0;
 do
 {
 } while (!*(a0) && (v0 += 1, v0 != 101));
 return v0;
}


// Function: tail_recursion at 0x401abd
unsigned int tail_recursion(unsigned int i, unsigned int a1)
{
 for (; i > 1; i -= 1)
 {
 a1 *= i;
 }
 return a1;
}


// Function: indirect_recursion_a at 0x401ad7
unsigned int indirect_recursion_a(unsigned int a0, unsigned int i)
{
 for (; i > 0; i -= 2)
 {
 if (((char)a0 & 1))
 {
 if (i == 1)
 return a0 * 3 + 1;
 a0 = a0 * 3 + 2;
 }
 else if (i != 1)
 {
 a0 = (a0 / 2) + 1;
 }
 else
 {
 return a0 / 2;
 }
 }
 return a0;
}


// Function: call_func_ptr at 0x401b13
int call_func_ptr(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp+0x4]

 v0 = a1;
 return ((int (*)(unsigned int))a0)(a1);
}


// Function: call_func_ptr_array at 0x401b26
unsigned int call_func_ptr_array(unsigned int a0, unsigned int a1)
{
 unsigned int v6; // eax
 unsigned int v7; // ebx
 unsigned long v8; // ldt
 unsigned long v9; // gdt
 unsigned short v10; // gs
 unsigned int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 unsigned int v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]
 unsigned int v4; // [bp-0x8]
 unsigned int v5; // [bp+0x4]

 v6 = __x86_get_pc_thunk_ax() + 17561;
 v4 = v7;
 v3 = *((int *)_ccall(v8, v9, (unsigned int)v10, 20));
 v0 = v6 - 19723;
 v1 = v6 - 19709;
 v2 = v6 - 19751;
 if (a0 <= 2)
 {
 if (v3 == *((int *)_ccall(v8, v9, (unsigned int)v10, 20)))
 {
 v5 = a1;
 goto *(&v0)[a0];
 }
 }
 else
 {
 if (v3 == *((int *)_ccall(v8, v9, (unsigned int)v10, 20)))
 return 4294967295;
 }
 __stack_chk_fail_local();
 return 4294967295;
}


// Function: call_virtual_func at 0x401ba1
unsigned int call_virtual_func(unsigned int a0, unsigned int a1)
{
 return a1 * 2;
}


// Function: process_with_callback at 0x401baf
unsigned int process_with_callback(unsigned int a0, unsigned int a1, unsigned int *a2)
{
 unsigned int v0; // esi
 unsigned int v1; // ebx
 unsigned int v2; // ebx
 unsigned int v3; // ebx

 v0 = 0;
 v1 = 0;
 while (true)
 {
 v2 = v1;
 if (v2 >= a1)
 break;
 v3 = v2 + 1;
 v0 += ((unsigned int (*)(unsigned int))a2)(*((int *)(a0 + v2 * 4)));
 v1 = v3;
 }
 return v0;
}


// Function: test_control_flow_l2 at 0x401bde
extern unsigned int g_4030a0;
extern unsigned int g_4030c0;
extern unsigned int g_403355;

int test_control_flow_l2()
{
 char cur[4]; // edi
 unsigned long v9; // ldt
 char iter[4]; // edi
 unsigned long v10; // gdt
 unsigned int *k; // esi
 unsigned int flag3; // ecx
 unsigned short v11; // gs
 unsigned int *i; // esi
 unsigned int flag2; // ecx
 unsigned int *node; // edi
 unsigned int flag4; // ecx
 unsigned int *v0; // [bp-0x80]
 unsigned int result[1]; // [bp-0x7c]
 unsigned int flag1[1]; // [bp-0x78]
 char v3; // [bp-0x74]
 unsigned int v4[8]; // [bp-0x60]
 char v5; // [bp-0x40]
 unsigned int v6; // [bp-0x20]

 memcpy(cur, &v4, 4);
 v6 = *((int *)_ccall(v9, v10, (unsigned int)v11, 20));
 sub_4010e0(&g_403355);
 sub_4010f0(1, "CF-L2-01 (loop_multi_exit): %d\n", loop_multi_exit());
 *result = 0;
 sub_4010f0(1, "CF-L2-02 (infinite_loop): %d\n", infinite_loop(&result));
 sub_4010f0(1, "CF-L2-03 (multi_return): %d\n", 4294967295);
 sub_4010f0(1, "CF-L2-03 (multi_return): %d\n", 4294967294);
 sub_4010f0(1, "CF-L2-03 (multi_return): %d\n", 4);
 sub_4010f0(1, "CF-L2-04 (conditional_return): %d\n", 10);
 i = &g_4030a0;
 sub_4010f0(1, "CF-L2-04 (conditional_return): %d\n", 5);
 for (flag2 = 8; flag2; i += 1)
 {
 flag2 -= 1;
 *((unsigned int *)&cur[0]) = *(i);
 }
 for (flag4 = 8; flag4; flag4 -= 1)
 {
 v5 = 0;
 }
 sub_4010f0(1, "CF-L2-05 (duffs_device): %d\n", duffs_device(&v5, &v4, 8));
 sub_4010f0(1, "CF-L2-06 (loop_complex_cond): %d\n", loop_complex_cond(10));
 sub_4010f0(1, "CF-L2-07 (loop_modify_var): %d\n", loop_modify_var(10));
 flag1[0] = 0;
 sub_4010f0(1, "CF-L2-08 (loop_external_state): %d\n", loop_external_state(flag1));
 sub_4010f0(1, "CF-L2-09 (recursion_factorial): %d\n", recursion_factorial(5));
 sub_4010f0(1, "CF-L2-10 (tail_recursion): %d\n", 120);
 sub_4010f0(1, "CF-L2-11 (indirect_recursion): %d\n", indirect_recursion_a(6, 1));
 v0 = double_value;
 sub_4010f0(1, "CF-L2-12 (call_func_ptr): %d\n", call_func_ptr(double_value, 5));
 sub_4010f0(1, "CF-L2-13 (call_func_ptr_array): %d\n", call_func_ptr_array(0, 5));
 k = &g_4030c0;
 sub_4010f0(1, "CF-L2-13 (call_func_ptr_array): %d\n", call_func_ptr_array(2, 5));
 for (flag3 = 5; flag3; k += 1)
 {
 flag3 -= 1;
 v3 = *(k);
 }
 sub_4010f0(1, "CF-L2-15 (process_with_callback): %d\n", process_with_callback(&v3, 5, v0));
 if (v6 == *((int *)_ccall(v9, v10, (unsigned int)v11, 20)))
 return v6 - *((int *)_ccall(v9, v10, (unsigned int)v11, 20));
 return __stack_chk_fail_local();
}


// Function: non_local_jump at 0x401e36
unsigned int non_local_jump()
{
 unsigned int v7; // ebx
 unsigned int v8; // edx
 unsigned int v0; // [bp-0x28]
 unsigned int v1; // [sp-0x24]
 unsigned int v2; // [sp-0x20]
 unsigned int v3; // [bp-0x10]
 unsigned int v4; // [bp-0x8]
 unsigned int v5; // [bp+0x4]

 v4 = v7;
 v3 = __x86_get_pc_thunk_ax() + 16777;
 if (!sub_4010c0(v3 + 216))
 {
 if (v5 < 0)
 {
 v2 = v8;
 v1 = v8;
 v0 = 1;
 }
 else if (v5 > 100)
 {
 v2 = v5 * 2;
 v1 = v2;
 v0 = 2;
 }
 else
 {
 return v2;
 }
 sub_401100(v3 + 216);
 }
 return 4294967295;
}


// Function: cpp_exception at 0x401e9d
unsigned int cpp_exception(unsigned int a0)
{
 if (a0 < 0)
 {
 return 4294967295;
 }
 else if (a0 >= 101)
 {
 return 4294967294;
 }
 else
 {
 return a0 * 2;
 }
}


// Function: large_jump_table at 0x401ebe
unsigned int large_jump_table(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v6; // edi
 unsigned int v7; // esi
 char cur[4]; // edi
 unsigned int v9; // ebx
 unsigned long v10; // ldt
 unsigned long v11; // gdt
 unsigned short v12; // gs
 struct_0 *v13; // ecx
 struct_0 *i; // esi
 unsigned int result; // ecx
 char v0; // [bp-0x48]
 unsigned int v1; // [bp-0x20]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]
 unsigned int v4; // [bp-0x8]
 unsigned int v5; // [bp+0x4]

 __x86_get_pc_thunk_cx();
 v4 = v6;
 v3 = v7;
 memcpy(cur, &v0, 4);
 v2 = v9;
 v1 = *((int *)_ccall(v10, v11, (unsigned int)v12, 20));
 for (result = 10; result; result -= 1)
 {
 }
 if (a0 <= 9)
 {
 if (v1 == *((int *)_ccall(v10, v11, (unsigned int)v12, 20)))
 {
 v5 = a1;
 a1 = a2;
 goto *(&v0)[a0];
 }
 }
 else
 {
 if (v1 == *((int *)_ccall(v10, v11, (unsigned int)v12, 20)))
 return 4294967295;
 }
 __stack_chk_fail_local();
 return 4294967295;
}


// Function: conditional_func_ptr at 0x401f3b
int conditional_func_ptr(unsigned int a0, unsigned int a1)
{
 unsigned int v1; // edx
 unsigned int v2; // edx
 unsigned int v3; // ebx
 unsigned int v4; // eax
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_dx();
 v2 = v1 + 16516;
 v0 = v3;
 v4 = v2 - 19723;
 if (a0)
 {
 v4 = v2 - 19709;
 if (a0 != 1)
 v4 = v2 - 19751;
 }
 a0 = a1;
 return ((int (*)(unsigned int))v4)(a1);
}


// Function: state_machine at 0x401f74
unsigned int state_machine(unsigned int a0, unsigned int a1)
{
 unsigned int result; // eax

 result = a1;
 if (result == 2)
 return result;
 if (result <= 2)
 {
 if (!result)
 return !a0 - 1;
 if (result != 1)
 return 3;
 if (a0 == 2)
 return 2;
 result = 3;
 if (a0 != 99)
 goto LABEL_401fbf;
LABEL_401fbe:
 return result;
 }
 else
 {
 if (result != 3)
 return 3;
 result = 0;
 if (!a0)
 goto LABEL_401fbe;
LABEL_401fbf:
 return result;
 }
}


// Function: fsm_func_table at 0x401fc9
unsigned int fsm_func_table(unsigned int a0, unsigned int a1)
{
 unsigned int v4; // edi
 unsigned int v5; // esi
 char cur[4]; // edi
 unsigned long v7; // ldt
 unsigned long v8; // gdt
 unsigned short v9; // gs
 struct_0 *v10; // ecx
 struct_0 *i; // esi
 unsigned int result; // ecx
 char v0; // [bp-0x20]
 unsigned int v1; // [bp-0x10]
 unsigned int v2; // [bp-0xc]
 unsigned int v3; // [bp-0x8]

 __x86_get_pc_thunk_cx();
 v3 = v4;
 v2 = v5;
 memcpy(cur, &v0, 4);
 v1 = *((int *)_ccall(v7, v8, (unsigned int)v9, 20));
 for (result = 4; result; result -= 1)
 {
 }
 if (a1 <= 3)
 {
 if (v1 == *((int *)_ccall(v7, v8, (unsigned int)v9, 20)))
 goto *(&v0)[a1];
 }
 else
 {
 if (v1 == *((int *)_ccall(v7, v8, (unsigned int)v9, 20)))
 return 3;
 }
 __stack_chk_fail_local();
 return 3;
}


// Function: computed_goto at 0x40203f
unsigned int computed_goto(unsigned int a0, unsigned int a1)
{
 unsigned int v4; // edi
 unsigned int v5; // esi
 char cur[4]; // edi
 struct_0 *i; // esi
 unsigned int v8; // eax
 unsigned long v9; // ldt
 unsigned long v10; // gdt
 unsigned short v11; // gs
 unsigned int result; // ecx
 char v0; // [bp-0x20]
 unsigned int v1; // [bp-0x10]
 unsigned int v2; // [bp-0xc]
 unsigned int v3; // [bp-0x8]

 v3 = v4;
 v2 = v5;
 memcpy(cur, &v0, 4);
 v8 = 4294967295;
 v1 = *((int *)_ccall(v9, v10, (unsigned int)v11, 20));
 for (result = 4; result; result -= 1)
 {
 }
 if (a1 <= 3)
 {
 goto *(&v0)[a1];
 }
 else
 {
 if (v1 != *((int *)_ccall(v9, v10, (unsigned int)v11, 20)))
 v8 = __stack_chk_fail_local();
 return v8;
 }
}


// Function: obfuscated_cf at 0x4020bf
unsigned int obfuscated_cf(unsigned int a0)
{
 return a0 * 2;
}


// Function: opaque_predicate at 0x4020cd
unsigned int opaque_predicate(unsigned int a0)
{
 return a0 * 2;
}


// Function: overlapped_code at 0x4020db
int overlapped_code(char a0)
{
 return (!(a0 & 1) ? (a0 / 2) : a0 * 3 + 1);
}


// Function: test_control_flow_l3 at 0x4020f9
extern unsigned int g_4030d4;
extern unsigned int g_403548;

int test_control_flow_l3()
{
 char cur[4]; // edi
 unsigned long v4; // ldt
 unsigned int result; // ecx
 unsigned long v5; // gdt
 unsigned short v6; // gs
 unsigned int *i; // esi
 char v0; // [bp-0x30]
 unsigned int v1; // [bp-0x20]

 memcpy(cur, &v0, 4);
 v1 = *((int *)_ccall(v4, v5, (unsigned int)v6, 20));
 sub_4010e0(&g_403548);
 sub_4010f0(1, "CF-L3-01 (non_local_jump): %d\n", non_local_jump());
 sub_4010f0(1, "CF-L3-01 (non_local_jump): %d\n", non_local_jump());
 sub_4010f0(1, "CF-L3-02 (cpp_exception): %d\n", 10);
 sub_4010f0(1, "CF-L3-02 (cpp_exception): %d\n", 4294967295);
 sub_4010f0(1, "CF-L3-03 (large_jump_table): %d\n", large_jump_table(0, 10, 5));
 sub_4010f0(1, "CF-L3-04 (conditional_func_ptr): %d\n", conditional_func_ptr(0, 5));
 sub_4010f0(1, "CF-L3-05 (state_machine): %d\n", 1);
 i = &g_4030d4;
 sub_4010f0(1, "CF-L3-06 (fsm_func_table): %d\n", fsm_func_table(2, 1));
 for (result = 4; result; i += 1)
 {
 result -= 1;
 v0 = *(i);
 }
 sub_4010f0(1, "CF-L3-07 (computed_goto): %d\n", computed_goto(&v0, 2));
 sub_4010f0(1, "CF-L3-08 (obfuscated_cf): %d\n", 10);
 sub_4010f0(1, "CF-L3-09 (opaque_predicate): %d\n", 10);
 sub_4010f0(1, "CF-L3-10 (overlapped_code): %d\n", 16);
 if (v1 == *((int *)_ccall(v4, v5, (unsigned int)v6, 20)))
 return v1 - *((int *)_ccall(v4, v5, (unsigned int)v6, 20));
 return __stack_chk_fail_local();
}


// Function: __x86_get_pc_thunk_ax at 0x40226f
unsigned int __x86_get_pc_thunk_ax()
{
 char v0; // [bp+0x0]

 return *((int *)&v0);
}


// Function: __x86_get_pc_thunk_cx at 0x402273
void __x86_get_pc_thunk_cx()
{
 return;
}


// Function: __x86_get_pc_thunk_si at 0x402277
int __x86_get_pc_thunk_si(int a0, int a1)
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_40227b at 0x40227b
int sub_40227b()
{
 __stack_chk_fail_local();
 return;
}


// Function: __stack_chk_fail_local at 0x402280
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

int __do_global_ctors_aux()
{
 struct_0 *v2; // edx
 struct_0 *ptr; // edx
 unsigned int *v4; // eax
 unsigned int v5; // ebx
 struct_0 *v6; // ebx
 struct_0 *p; // ebx
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_dx();
 ptr = &v2->padding_0[227];
 v4 = *((int *)&ptr->padding_0[232]);
 if (*((int *)&ptr->padding_0[232]) == 0xffffffff)
 return 0;
 v0 = v5;
 v6 = &ptr->padding_0[232];
 do
 {
 p = v6;
 ((void (*)(void))v4)();
 v4 = *((int *)&p->padding_0[4]);
 v6 = &p->padding_0[4];
 } while (*((int *)&p->padding_0[4]) != 0xffffffff);
 return 0;
}


// Function: sub_4022e2 at 0x4022e2
void sub_4022e2()
{
}



/* CRT stub function _fini removed by preprocessor */


