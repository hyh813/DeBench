// Angr Decompilation of 1_clang_O3_no_g
// Platform: X86

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <setjmp.h>
#include <stdbool.h>

typedef struct struct_0 {
 unsigned int field_0;
 char padding_0[1];
 char padding_4e77[1];
 char padding_4ed7[1];
} struct_0;

/* CRT stub function _init removed by preprocessor */

extern void (*g_405ff4)(void);
extern char g_403691;
extern char g_4036b5;
extern char g_4036d9;
static jmp_buf jump_buffer;

int _init(void)
{
 if (g_405ff4)
 g_405ff4();
 frame_dummy();
 return __do_global_ctors_aux();
}


// Forward declarations
int frame_dummy(void);
int __do_global_ctors_aux(void);
unsigned int deregister_tm_clones(void);
void register_tm_clones(void);
void __do_global_dtors_aux(void);
extern int _GLOBAL_OFFSET_TABLE_[256];
void __x86_get_pc_thunk_dx(void);
struct_0 *__x86_get_pc_thunk_di(int a0, struct_0 *a1);
int sub_401090(void);
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
unsigned int loop_nested(unsigned int a0, unsigned int a1);
unsigned int loop_break(unsigned int a0);
unsigned int loop_continue(unsigned int a0);
unsigned int goto_forward(unsigned int a0);
unsigned int goto_backward(unsigned int a0);
int ternary_op(unsigned int a0, unsigned int a1);
int test_control_flow_l1(void);
unsigned int loop_multi_exit(unsigned int a0);
unsigned int infinite_loop(unsigned int *ptr);
unsigned int multi_return(unsigned int a0);
unsigned int conditional_return(unsigned int a0);
unsigned int duffs_device(unsigned int *a0, unsigned int *a1, unsigned int a2);
int loop_complex_cond(unsigned int a0);
unsigned int loop_modify_var(unsigned int a0);
unsigned int loop_external_state(unsigned int *a0);
unsigned int recursion_factorial(unsigned int a0);
unsigned int tail_recursion(unsigned int a0, unsigned int a1);
unsigned int indirect_recursion_a(unsigned int a0, unsigned int a1);
int call_func_ptr(unsigned int (*a0)(unsigned int), unsigned int a1);
unsigned int call_func_ptr_array(unsigned int a0, unsigned int a1);
unsigned int double_value(unsigned int a0);
unsigned int triple_value(unsigned int a0);
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
int state_idle(unsigned int a0);
unsigned int state_processing(unsigned int a0);
unsigned int state_done(void);
unsigned int state_error(unsigned int a0);
unsigned int computed_goto(unsigned int a0, unsigned int a1);
unsigned int obfuscated_cf(unsigned int a0);
unsigned int opaque_predicate(unsigned int a0);
unsigned int overlapped_code(unsigned int a0);
int test_control_flow_l3(void);
unsigned int main(void);

// Function: sub_401030 at 0x401030
int sub_401030(void)
{
 unsigned int ptr[3]; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
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



// Function: sub_4010cb at 0x4010cb
void sub_4010cb(void)
{
}


// Function: sub_4010cc at 0x4010cc
void sub_4010cc(void)
{
}


// Function: __x86_get_pc_thunk_bx at 0x4010d0
void __x86_get_pc_thunk_bx(void)
{
}


// Function: sub_4010d4 at 0x4010d4
void sub_4010d4(void)
{
 deregister_tm_clones();
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
}



/* CRT stub function register_tm_clones removed by preprocessor */


// Function: sub_401167 at 0x401167
void sub_401167(void)
{
 __do_global_dtors_aux();
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */
void __do_global_dtors_aux(void)
{
 struct_0 *v5; // eax
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

 v5 = __x86_get_pc_thunk_di(*((int *)&v2), &v3);
 v6 = (struct_0 *)v5;
 ptr = (struct_0 *)&v6->padding_4e77[11];
 v1 = v8;
 v0 = v9;
 if (ptr->padding_0[40])
 return;
 if (*((int *)&ptr->padding_0[16]))
 sub_401090();
 v10 = (struct_0 *)&ptr->padding_0[320];
 v11 = *((int *)&ptr->padding_0[44]);
 i = (((char *)&ptr->padding_0[316] - (char *)v10) >> 2) - 1;
 if (*((int *)&ptr->padding_0[44]) < i)
 {
 do
 {
 v13 = v11 + 1;
 *((unsigned int *)&ptr->padding_0[44]) = v13;
 ((void (*)(void))(*((int *)&v10->padding_0[4 * v13])))();
 v11 = *((int *)&ptr->padding_0[44]);
 } while (*((int *)&ptr->padding_0[44]) < i);
 }
 deregister_tm_clones();
 ptr->padding_0[40] = 1;
 return;
}


// Function: sub_4011fa at 0x4011fa
void sub_4011fa(void)
{
 frame_dummy();
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86.get_pc_thunk_dx at 0x401209
void __x86_get_pc_thunk_dx(void)
{
}


// Function: __x86_get_pc_thunk_di at 0x40120d
struct_0 *__x86_get_pc_thunk_di(int a0, struct_0 *a1)
{
 struct_0 *v0; // eax

 return v0;
}


// Function: sub_401211 at 0x401211
void sub_401211(unsigned int a0, unsigned int a1, unsigned int a2)
{
 sequential_ops(a0, a1, a2);
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
}


// Function: single_if at 0x401230
int single_if(unsigned int a0)
{
 return a0 << (a0 & 31);
}


// Function: sub_40123c at 0x40123c
void sub_40123c(unsigned int a0)
{
 if_else(a0);
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
}


// Function: if_elseif_chain at 0x4012b0
unsigned int if_elseif_chain(unsigned int a0)
{
 if (a0 >= 3)
 return 4294967295;
 return a0 * 10 + 10;
}


// Function: sub_4012c7 at 0x4012c7
void sub_4012c7(unsigned int a0)
{
 if_elseif_long(a0);
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
}


// Function: switch_small at 0x4012f0
unsigned int switch_small(unsigned int a0)
{
 unsigned int v0; // eax

 v0 = 4294967295;
 if (a0 <= 3)
 v0 = _GLOBAL_OFFSET_TABLE_[0x2900 / 4 + a0];
 return v0;
}


// Function: sub_401312 at 0x401312
void sub_401312(unsigned int a0)
{
 switch_large(a0);
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
}


// Function: loop_for_fixed at 0x401390
unsigned int loop_for_fixed(unsigned int a0)
{
 if (a0 <= 0)
 return 0;
 return (a0 - 1) * (a0 - 2) / 2 + a0 - 1;
}


// Function: sub_4013ae at 0x4013ae
void sub_4013ae(unsigned int a0)
{
 loop_while(a0);
}


// Function: loop_while at 0x4013b0
unsigned int loop_while(unsigned int a0)
{
 unsigned int v0; // ecx
 unsigned int v1; // ecx
 unsigned int v3; // ecx

 if (!a0)
 return 1;
 v0 = 0;
 v1 = 0;
 do
 {
 v3 = v0 + 1;
 a0 = (a0 * 1717986919 >> 34) + (a0 * 1717986919 >> 63);
 v0 = v3;
 } while (a0 + 9 > 18);
 return v1 + 1;
}


// Function: sub_4013fa at 0x4013fa
void sub_4013fa(unsigned int a0)
{
 loop_dowhile(a0);
}


// Function: loop_dowhile at 0x401400
unsigned int loop_dowhile(unsigned int a0)
{
 unsigned int v0; // ecx
 unsigned int v1; // ecx
 unsigned int v3; // ecx

 v0 = 0;
 v1 = 0;
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
 unsigned int v1; // esi
 unsigned int v2; // eax
 unsigned int v0; // [bp-0x4]

 v1 = 0;
 v0 = v1;
 v2 = a0 * a1;
 if (a1 <= 0)
 v2 = 0;
 if (a0 > 0)
 return v2;
 return 0;
}


// Function: sub_40144c at 0x40144c
void sub_40144c(unsigned int a0)
{
 loop_break(a0);
}


// Function: loop_break at 0x401450

unsigned int loop_break(unsigned int a0)
{
 unsigned int v0; // eax

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


// Function: sub_401491 at 0x401491
void sub_401491(unsigned int a0)
{
 loop_continue(a0);
}


// Function: loop_continue at 0x4014a0
unsigned int loop_continue(unsigned int a0)
{
 unsigned int result; // ecx
 unsigned int v1; // eax
 unsigned int v2; // edx

 if (a0 <= 0)
 return 0;
 result = a0 & 3;
 if (a0 - 1 < 3)
 {
 v1 = 0;
 }
 else
 {
 v1 = 0;
 v2 = 1;
 do
 {
 v1 = v1 + v2 + v2 + 2;
 v2 += 4;
 } while (!(a0 & 0xfffffffc) + v2 + 4 != 1);
 }
 if (!result)
 return v1;
 do
 {
 result -= 1;
 } while (result != 1);
 return v1;
}


// Function: sub_401506 at 0x401506
void sub_401506(unsigned int a0)
{
 goto_forward(a0);
}


// Function: goto_forward at 0x401510
unsigned int goto_forward(unsigned int a0)
{
 unsigned int v0; // ecx
 unsigned int v1; // eax

 v0 = a0;
 if (v0)
 v1 = v0;
 else
 v1 = 1;
 return v0 * v1 * 2;
}


// Function: sub_401524 at 0x401524
int sub_401524(void)
{
 goto_backward(0);
 return 0;
}


// Function: goto_backward at 0x401530
unsigned int goto_backward(unsigned int a0)
{
 unsigned int result; // ecx
 unsigned int v1; // edx
 unsigned int v2; // eax
 unsigned int v3; // edx
 unsigned int v4; // edx
 unsigned int v5; // edx
 unsigned int v6; // eax
 unsigned int v7; // eax

 if (a0 <= 0)
 return 1;
 result = a0 & 7;
 v4 = 0;
 v6 = 0;
 if (a0 - 1 < 7)
 {
 v1 = 1;
 v2 = 1;
 if (!result)
 return 1;
 }
 else
 {
 v2 = 1;
 v3 = 8;
 do
 {
 v2 = v2 * (v3 - 7) * (v3 - 5) * (v3 - 6) * (v3 - 3) * (v3 - 4) * (v3 - 2) * v3 * (v3 - 1);
 v3 += 8;
 } while (!(a0 & 0xfffffff8) + v3 + 8 != 8);
 v1 = v4 - 7;
 if (!result)
 return v2;
 }
 do
 {
 v5 = v1;
 v7 = v5 * v2;
 v2 = v7;
 result -= 1;
 v1 = v5 + 1;
 } while (result != 1);
 return v5 * v6;
}


// Function: ternary_op at 0x4015e0
int ternary_op(unsigned int a0, unsigned int a1)
{
 if (a0 <= a1)
 return a1;
 return a0;
}


// Function: sub_4015ee at 0x4015ee
int sub_4015ee(void)
{
 test_control_flow_l1();
 return 0;
}


// Function: test_control_flow_l1 at 0x4015f0
int test_control_flow_l1()
{
 unsigned int v0; // [bp-0x18]

 puts(&g_403691);
 v0 = 21;
 printf("CF-L1-01 (sequential_ops): %d\n", v0);
 v0 = 20;
 printf("CF-L1-02 (single_if): %d\n", v0);
 v0 = 4294967291;
 printf("CF-L1-02 (single_if): %d\n", v0);
 v0 = 1;
 printf("CF-L1-03 (if_else): %d\n", v0);
 v0 = 0;
 printf("CF-L1-03 (if_else): %d\n", v0);
 v0 = 15;
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


// Function: sub_40183d at 0x40183d
void sub_40183d(unsigned int a0)
{
 loop_multi_exit(a0);
}


// Function: loop_multi_exit at 0x401840

unsigned int loop_multi_exit(unsigned int a0)
{
 unsigned int v0; // eax

 v0 = 4294967295;
 if (a0 - 1 <= 11)
 v0 = _GLOBAL_OFFSET_TABLE_[12024 / 4 + a0] + _GLOBAL_OFFSET_TABLE_[12072 / 4 + a0];
 return v0;
}


// Function: sub_40186e at 0x40186e
void sub_40186e(unsigned int a0)
{
 infinite_loop((unsigned int *)a0);
}


// Function: infinite_loop at 0x401870
unsigned int infinite_loop(unsigned int *ptr)
{
 unsigned int v0; // eax
 unsigned int v1; // eax

 v0 = 0;
 if (*(ptr) == 1)
 return 0;
 while (true)
 {
 v1 = v0;
 if (v1 == 1000)
 {
 *(ptr) = 1;
 return 1001;
 }
 else if (*(ptr) == 1)
 {
 return v1 + 1;
 }
 else if (*(ptr) == 1)
 {
 return v1 + 2;
 }
 else if (*(ptr) != 1)
 {
 v0 = v1 + 4;
 if (*(ptr) == 1)
 return v1 + 4;
 }
 else
 {
 return v1 + 3;
 }
 }
}


// Function: sub_4018bf at 0x4018bf
void sub_4018bf(unsigned int a0)
{
 multi_return(a0);
}


// Function: multi_return at 0x4018c0
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


// Function: sub_4018e7 at 0x4018e7
void sub_4018e7(unsigned int a0)
{
 conditional_return(a0);
}


// Function: conditional_return at 0x4018f0
unsigned int conditional_return(unsigned int a0)
{
 if (!a0)
 return -(a0);
 return a0 * 2;
}


// Function: sub_401901 at 0x401901
int sub_401901(void)
{
 duffs_device(0, 0, 0);
 return 0;
}


// Function: duffs_device at 0x401910

unsigned int duffs_device(unsigned int *a0, unsigned int *a1, unsigned int a2)
{
 unsigned int *iter; // edx
 unsigned int *cur; // esi
 unsigned int v2; // eax

 iter = a1;
 cur = a0;
 v2 = a2;
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
LABEL_40195c:
 iter += 1;
 *(cur) = *(iter);
 cur += 1;
LABEL_401966:
 iter += 1;
 *(cur) = *(iter);
 cur += 1;
LABEL_401970:
 iter += 1;
 *(cur) = *(iter);
 cur += 1;
LABEL_40197a:
 iter += 1;
 *(cur) = *(iter);
 cur += 1;
LABEL_401984:
 iter += 1;
 *(cur) = *(iter);
 cur += 1;
LABEL_40198e:
 iter += 1;
 *(cur) = *(iter);
 cur += 1;
 v2 -= 1;
 } while (v2 > 1);
 return a2;
 case 1:
 goto LABEL_40198e;
 case 2:
 goto LABEL_401984;
 case 3:
 goto LABEL_40197a;
 case 4:
 goto LABEL_401970;
 case 5:
 goto LABEL_401966;
 case 6:
 goto LABEL_40195c;
 case 7:
 break;
 default:
 return 4294967295;
 }
}


// Function: sub_4019a8 at 0x4019a8
void sub_4019a8(unsigned int a0)
{
 loop_complex_cond(a0);
}


// Function: loop_complex_cond at 0x4019b0
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


// Function: sub_4019e8 at 0x4019e8
void sub_4019e8(unsigned int a0)
{
 loop_modify_var(a0);
}


// Function: loop_modify_var at 0x4019f0
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
 v2 = 0;
 v3 = 0;
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


// Function: sub_401a1a at 0x401a1a
void sub_401a1a(unsigned int a0)
{
 loop_external_state((unsigned int *)a0);
}


// Function: loop_external_state at 0x401a20
unsigned int loop_external_state(unsigned int *a0)
{
 unsigned int v0; // eax
 unsigned int v1; // eax

 v0 = 0;
 if (*(a0))
 return 0;
 while (true)
 {
 v1 = v0;
 if (v1 == 100)
 {
 return 101;
 }
 else if (*(a0))
 {
 return v1 + 1;
 }
 else if (*(a0))
 {
 return v1 + 2;
 }
 else if (!*(a0))
 {
 v0 = v1 + 4;
 if (*(a0))
 return v1 + 4;
 }
 else
 {
 return v1 + 3;
 }
 }
}


// Function: sub_401a5f at 0x401a5f
void sub_401a5f(unsigned int a0)
{
 recursion_factorial(a0);
}


// Function: recursion_factorial at 0x401a60
unsigned int recursion_factorial(unsigned int a0)
{
 unsigned int v0; // ecx
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int i; // ecx
 unsigned int v4; // eax

 v0 = a0;
 if (v0 < 2)
 return 1;
 v1 = 1;
 v2 = 1;
 do
 {
 i = v0;
 v4 = i * v1;
 v0 = i - 1;
 v1 = v4;
 } while (i > 2);
 return i * v2;
}


// Function: sub_401a8e at 0x401a8e
void sub_401a8e(unsigned int a0, unsigned int a1)
{
 tail_recursion(a0, a1);
}


// Function: tail_recursion at 0x401a90
unsigned int tail_recursion(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // eax
 unsigned int i; // ecx

 v0 = a1;
 i = a0;
 if (i >= 2)
 {
 do
 {
 v0 *= i;
 i -= 1;
 } while (i > 2);
 }
 return v0;
}


// Function: sub_401aae at 0x401aae
void sub_401aae(unsigned int a0, unsigned int a1)
{
 indirect_recursion_a(a0, a1);
}


// Function: indirect_recursion_a at 0x401ab0
unsigned int indirect_recursion_a(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // ecx

 if (a1 <= 0)
 return a0;
 v0 = a1 + 2;
 while (true)
 {
 if (!((char)a0 & 1))
 {
 if (v0 != 3)
 a0 = ((a0 >> 31) + a0 >> 1) + 1;
 else
 return (a0 >> 31) + a0 >> 1;
 }
 else
 {
 if (v0 != 3)
 a0 = a0 * 3 + 2;
 else
 return a0 * 3 + 1;
 }
 v0 -= 2;
 if (v0 < 3)
 return a0;
 }
}


// Function: sub_401ac1 at 0x401ac1
void sub_401ac1(void)
{
}


// Function: sub_401af1 at 0x401af1
void sub_401af1(void)
{
}


// Function: sub_401b14 at 0x401b14
int sub_401b14(void)
{
 call_func_ptr(0, 0);
 return 0;
}


// Function: call_func_ptr at 0x401b20
int call_func_ptr(unsigned int (*a0)(unsigned int), unsigned int a1)
{
 return a0(a1);
}


// Function: call_func_ptr_array at 0x401b40

unsigned int call_func_ptr_array(unsigned int a0, unsigned int a1)
{
 switch (a0)
 {
 case 0:
 return a1;
 default:
 return 4294967295;
 }
}


// Function: sub_401b76 at 0x401b76
void sub_401b76(unsigned int a0)
{
 double_value(a0);
}


// Function: double_value at 0x401b80
unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_401b87 at 0x401b87
void sub_401b87(unsigned int a0)
{
 triple_value(a0);
}


// Function: triple_value at 0x401b90
unsigned int triple_value(unsigned int a0)
{
 return a0 * 3;
}


// Function: sub_401b98 at 0x401b98
void sub_401b98(unsigned int a0, unsigned int a1)
{
 call_virtual_func(a0, a1);
}


// Function: call_virtual_func at 0x401ba0
unsigned int call_virtual_func(unsigned int a0, unsigned int a1)
{
 return a1 * 2;
}


// Function: sub_401ba7 at 0x401ba7
int sub_401ba7(void)
{
 process_with_callback(0, 0, 0);
 return 0;
}


// Function: process_with_callback at 0x401bb0
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


// Function: sub_401bf5 at 0x401bf5
int sub_401bf5(void)
{
 test_control_flow_l2();
 return 0;
}


// Function: test_control_flow_l2 at 0x401c00
int test_control_flow_l2()
{
 unsigned int cur; // eax
 unsigned int v5; // ecx
 unsigned int v6; // edx
 unsigned int v7; // eax
 unsigned int v8; // eax
 unsigned int iter; // eax
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int result; // [bp-0x10]

 puts(&g_4036b5);
 v0 = 12;
 printf("CF-L2-01 (loop_multi_exit): %d\n", v0);
 v1 = 0;
 cur = 0;
 if (v1 != 1)
 {
 do
 {
 if (cur == 1000)
 {
 v1 = 1;
 cur = 1001;
 break;
 }
 else if (v1 == 1)
 {
 cur += 1;
 break;
 }
 else if (v1 == 1)
 {
 cur += 2;
 break;
 }
 else if (v1 == 1)
 {
 cur += 3;
 break;
 }
 } while ((cur += 4, v1 != 1));
 }
 v0 = cur;
 printf("CF-L2-02 (infinite_loop): %d\n", v0);
 v0 = 4294967295;
 printf("CF-L2-03 (multi_return): %d\n", v0);
 v0 = 4294967294;
 printf("CF-L2-03 (multi_return): %d\n", v0);
 v0 = 4;
 printf("CF-L2-03 (multi_return): %d\n", v0);
 v0 = 10;
 printf("CF-L2-04 (conditional_return): %d\n", v0);
 v0 = 5;
 printf("CF-L2-04 (conditional_return): %d\n", v0);
 v0 = 8;
 printf("CF-L2-05 (duffs_device): %d\n", v0);
 v5 = 4294967295;
 v6 = 11;
 v7 = 10;
 do
 {
 v8 = v7 + 2;
 } while (v7 - 8 < v6 - 2 && (v5 += 1, v6 -= 1, v7 = v8, v5 < 9));
 v0 = v8;
 printf("CF-L2-06 (loop_complex_cond): %d\n", v0);
 v0 = 30;
 printf("CF-L2-07 (loop_modify_var): %d\n", v0);
 result = 0;
 iter = 0;
 if (!result)
 {
 do
 {
 if (iter == 100)
 {
 iter = 101;
 break;
 }
 else if (result)
 {
 iter += 1;
 break;
 }
 else if (result)
 {
 iter += 2;
 break;
 }
 else if (result)
 {
 iter += 3;
 break;
 }
 } while ((iter += 4, !result));
 }
 v0 = iter;
 printf("CF-L2-08 (loop_external_state): %d\n", v0);
 v0 = 120;
 printf("CF-L2-09 (recursion_factorial): %d\n", v0);
 v0 = 120;
 printf("CF-L2-10 (tail_recursion): %d\n", v0);
 v0 = 3;
 printf("CF-L2-11 (indirect_recursion): %d\n", v0);
 v0 = 10;
 printf("CF-L2-12 (call_func_ptr): %d\n", v0);
 v0 = 10;
 printf("CF-L2-13 (call_func_ptr_array): %d\n", v0);
 v0 = 120;
 printf("CF-L2-13 (call_func_ptr_array): %d\n", v0);
 v0 = 30;
 return printf("CF-L2-15 (process_with_callback): %d\n", v0);
}


// Function: sub_401e77 at 0x401e77
int sub_401e77(void)
{
 non_local_jump(0);
 return 0;
}


// Function: non_local_jump at 0x401e80
unsigned int non_local_jump(unsigned int a0)
{
 if (_setjmp(jump_buffer))
 {
 return 4294967295;
 }
 else if (a0 < 0)
 {
 longjmp(&jump_buffer, 1); /* do not return */
 }
 else if (a0 < 101)
 {
 return a0 * 2;
 }
 else
 {
 longjmp(&jump_buffer, 2); /* do not return */
 }
}


// Function: sub_401ee2 at 0x401ee2
void sub_401ee2(unsigned int a0)
{
 cpp_exception(a0);
}


// Function: cpp_exception at 0x401ef0
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


// Function: sub_401f0d at 0x401f0d
int sub_401f0d(void)
{
 large_jump_table(0, 0, 0);
 return 0;
}


// Function: large_jump_table at 0x401f10

unsigned int large_jump_table(unsigned int a0, unsigned int a1, unsigned int a2)
{
 switch (a0)
 {
 case 0:
 return a1;
 default:
 return 4294967295;
 }
}


// Function: sub_401f4a at 0x401f4a
void sub_401f4a(unsigned int a0, unsigned int a1)
{
 op_add(a0, a1);
}


// Function: op_add at 0x401f50
int op_add(unsigned int a0, unsigned int a1)
{
 return a1 + a0;
}


// Function: sub_401f59 at 0x401f59
void sub_401f59(unsigned int a0, unsigned int a1)
{
 op_sub(a0, a1);
}


// Function: op_sub at 0x401f60
int op_sub(unsigned int a0, unsigned int a1)
{
 return a0 - a1;
}


// Function: sub_401f69 at 0x401f69
void sub_401f69(unsigned int a0, unsigned int a1)
{
 op_mul(a0, a1);
}


// Function: op_mul at 0x401f70
int op_mul(unsigned int a0, unsigned int a1)
{
 return a0 * a1;
}


// Function: sub_401f7a at 0x401f7a
void sub_401f7a(unsigned int a0, unsigned int a1)
{
 op_div(a0, a1);
}


// Function: op_div at 0x401f80
unsigned int op_div(unsigned int a0, unsigned int a1)
{
 if (!a1)
 return 0;
 return a0 / a1;
}


// Function: sub_401f93 at 0x401f93
void sub_401f93(unsigned int a0, unsigned int a1)
{
 op_mod(a0, a1);
}


// Function: op_mod at 0x401fa0
unsigned int op_mod(unsigned int a0, unsigned int a1)
{
 if (!a1)
 return 0;
 return a0 % a1;
}


// Function: sub_401fb5 at 0x401fb5
void sub_401fb5(unsigned int a0, unsigned int a1)
{
 op_and(a0, a1);
}


// Function: op_and at 0x401fc0
unsigned int op_and(unsigned int a0, unsigned int a1)
{
 return a1 & a0;
}


// Function: sub_401fc9 at 0x401fc9
void sub_401fc9(unsigned int a0, unsigned int a1)
{
 op_or(a0, a1);
}


// Function: op_or at 0x401fd0
unsigned int op_or(unsigned int a0, unsigned int a1)
{
 return a1 | a0;
}


// Function: sub_401fd9 at 0x401fd9
void sub_401fd9(unsigned int a0, unsigned int a1)
{
 op_xor(a0, a1);
}


// Function: op_xor at 0x401fe0
int op_xor(unsigned int a0, unsigned int a1)
{
 return a1 ^ a0;
}


// Function: sub_401fe9 at 0x401fe9
void sub_401fe9(unsigned int a0, char a1)
{
 op_shl(a0, a1);
}


// Function: op_shl at 0x401ff0
int op_shl(unsigned int a0, char a1)
{
 return a0 << (a1 & 31);
}


// Function: sub_401ffb at 0x401ffb
void sub_401ffb(unsigned int a0, char a1)
{
 op_shr(a0, a1);
}


// Function: op_shr at 0x402000
int op_shr(unsigned int a0, char a1)
{
 return a0 >> (a1 & 31);
}


// Function: sub_40200b at 0x40200b
int sub_40200b(void)
{
 conditional_func_ptr(0, 0);
 return 0;
}


// Function: conditional_func_ptr at 0x402010
int conditional_func_ptr(unsigned int a0, unsigned int a1)
{
 unsigned int (*v2)(unsigned int); // esi
 unsigned int (*v4)(unsigned int); // ecx
 unsigned int v0; // [bp-0xc]

 v2 = recursion_factorial;
 if (a0 == 1)
 v2 = triple_value;
 if (a0)
 v4 = v2;
 else
 v4 = double_value;
 v0 = a1;
 return v4(a1);
}


// Function: sub_40204f at 0x40204f
void sub_40204f(unsigned int a0, unsigned int a1)
{
 state_machine(a0, a1);
}


// Function: state_machine at 0x402050

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


// Function: fsm_func_table at 0x4020a0

unsigned int fsm_func_table(unsigned int a0, unsigned int a1)
{
 switch (a1)
 {
 case 0:
 break;
 default:
 return 3;
 }
}


// Function: sub_4020d6 at 0x4020d6
void sub_4020d6(unsigned int a0)
{
 state_idle(a0);
}


// Function: state_idle at 0x4020e0
int state_idle(unsigned int a0)
{
 return a0 == 1;
}


// Function: sub_4020eb at 0x4020eb
void sub_4020eb(unsigned int a0)
{
 state_processing(a0);
}


// Function: state_processing at 0x4020f0
unsigned int state_processing(unsigned int a0)
{
 if (a0 != 2)
 return (a0 == 99) * 2 + 1;
 return 2;
}


// Function: sub_402108 at 0x402108
void sub_402108(void)
{
 state_done();
}


// Function: state_done at 0x402110
unsigned int state_done()
{
 return 2;
}


// Function: sub_402116 at 0x402116
void sub_402116(unsigned int a0)
{
 state_error(a0);
}


// Function: state_error at 0x402120
unsigned int state_error(unsigned int a0)
{
 return (a0) * 3;
}


// Function: sub_40212e at 0x40212e
void sub_40212e(unsigned int a0, unsigned int a1)
{
 computed_goto(a0, a1);
}


// Function: computed_goto at 0x402130

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


// Function: sub_402167 at 0x402167
void sub_402167(unsigned int a0)
{
 obfuscated_cf(a0);
}


// Function: obfuscated_cf at 0x402170
unsigned int obfuscated_cf(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_402177 at 0x402177
void sub_402177(unsigned int a0)
{
 opaque_predicate(a0);
}


// Function: opaque_predicate at 0x402180
unsigned int opaque_predicate(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_402187 at 0x402187
void sub_402187(unsigned int a0)
{
 overlapped_code(a0);
}


// Function: overlapped_code at 0x402190
unsigned int overlapped_code(unsigned int a0)
{
 if (((char)a0 & 1))
 return a0 * 3 + 1;
 return (a0 >> 31) + a0 >> 1;
}


// Function: sub_4021aa at 0x4021aa
int sub_4021aa(void)
{
 test_control_flow_l3();
 return 0;
}


// Function: test_control_flow_l3 at 0x4021b0
int test_control_flow_l3()
{
 unsigned int v0; // [bp-0x18]

 puts(&g_4036d9);
 v0 = non_local_jump(5);
 printf("CF-L3-01 (non_local_jump): %d\n", v0);
 v0 = non_local_jump(4294967291);
 printf("CF-L3-01 (non_local_jump): %d\n", v0);
 v0 = cpp_exception(0);
 printf("CF-L3-02 (cpp_exception): %d\n", v0);
 v0 = cpp_exception(200);
 printf("CF-L3-02 (cpp_exception): %d\n", v0);
 v0 = large_jump_table(0, 0, 0);
 printf("CF-L3-03 (large_jump_table): %d\n", v0);
 v0 = conditional_func_ptr(0, 10);
 printf("CF-L3-04 (conditional_func_ptr): %d\n", v0);
 v0 = state_machine(1, 0);
 printf("CF-L3-05 (state_machine): %d\n", v0);
 v0 = fsm_func_table(0, 0);
 printf("CF-L3-06 (fsm_func_table): %d\n", v0);
 v0 = computed_goto(0, 2);
 printf("CF-L3-07 (computed_goto): %d\n", v0);
 v0 = obfuscated_cf(5);
 printf("CF-L3-08 (obfuscated_cf): %d\n", v0);
 v0 = opaque_predicate(5);
 printf("CF-L3-09 (opaque_predicate): %d\n", v0);
 v0 = overlapped_code(5);
 return printf("CF-L3-10 (overlapped_code): %d\n", v0);
}


// Function: sub_4022ea at 0x4022ea
int sub_4022ea(void)
{
 main();
 return 0;
}


// Function: main at 0x4022f0
char g_403691 = 'A';
char g_4036b5 = 'B';
char g_4036d9 = 'C';

unsigned int main()
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}


// Function: sub_402316 at 0x402316
void sub_402316(void)
{
 __do_global_ctors_aux();
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */
int __do_global_ctors_aux(void)
{
 struct_0 *v2; // edx
 struct_0 *ptr; // edx
 void (*v4)(void); // eax
 unsigned int v5; // ebx
 struct_0 *v6; // ebx
 struct_0 *p; // ebx
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_dx();
 v2 = (struct_0 *)0;
 if (v2)
 ptr = (struct_0 *)&v2->padding_0[323];
 else
 ptr = (struct_0 *)0;
 v4 = (void (*)(void))*((int *)&ptr->padding_0[328]);
 if (*((int *)&ptr->padding_0[328]) == 0xffffffff)
 return 0;
 v0 = v5;
 v6 = (struct_0 *)&ptr->padding_0[328];
 do
 {
 p = v6;
 v4();
 v4 = (void (*)(void))*((int *)&p->padding_0[4]);
 v6 = (struct_0 *)&p->padding_0[4];
 } while (*((int *)&p->padding_0[4]) != 0xffffffff);
 return 0;
}


// Function: sub_402362 at 0x402362
void sub_402362(void)
{
}



/* CRT stub function _fini removed by preprocessor */


