// Angr Decompilation of 1_clang_O0_g
// Platform: X86

#include <stdio.h>
#include <string.h>
#include <setjmp.h>
#include <stdbool.h>

/* CRT stub function _init removed by preprocessor */

struct struct_0 {
    unsigned int field_5ec7;
    char padding_0[500];
    char padding_5e67[50];
};

extern struct struct_0 *g_406ff4;
extern void *_GLOBAL_OFFSET_TABLE_;

// Forward declarations for stub functions
void frame_dummy(void);
unsigned int *deregister_tm_clones(void);
unsigned int __do_global_ctors_aux(void);
void __x86_get_pc_thunk_dx(void);
int __x86_get_pc_thunk_di(int);
int sub_4010a0(void);
unsigned int sequential_ops(unsigned int, unsigned int, unsigned int);
unsigned int single_if(unsigned int);
unsigned int if_else(unsigned int);
unsigned int nested_if_2(unsigned int, unsigned int);
unsigned int nested_if_deep(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
unsigned int if_elseif_chain(unsigned int);
unsigned int if_elseif_long(unsigned int);
unsigned int switch_small(unsigned int);
unsigned int switch_large(unsigned int);
unsigned int switch_default(unsigned int);
unsigned int switch_fallthrough(unsigned int);
unsigned int loop_for_fixed(unsigned int);
unsigned int loop_while(unsigned int);
unsigned int loop_dowhile(unsigned int);
unsigned int loop_nested(unsigned int, unsigned int);
unsigned int loop_break(unsigned int);
unsigned int loop_continue(unsigned int);
unsigned int goto_forward(unsigned int);
unsigned int goto_backward(unsigned int);
unsigned int ternary_op(unsigned int, unsigned int);
int test_control_flow_l1(void);
unsigned int loop_multi_exit(unsigned int);
unsigned int infinite_loop(unsigned int *);
unsigned int multi_return(unsigned int);
unsigned int conditional_return(unsigned int);
unsigned int duffs_device(unsigned int, unsigned int, unsigned int);
int loop_complex_cond(unsigned int);
unsigned int loop_modify_var(unsigned int);
unsigned int loop_external_state(unsigned int *);
unsigned int recursion_factorial(unsigned int);
unsigned int tail_recursion(unsigned int, unsigned int);
unsigned int indirect_recursion_a(unsigned int, unsigned int);
unsigned int indirect_recursion_b(unsigned int, unsigned int);
int call_func_ptr(int (*)(int, int, char*), unsigned int);
void call_func_ptr_void(void);
unsigned int call_func_ptr_array(unsigned int, unsigned int);
unsigned int double_value(unsigned int);
unsigned int triple_value(unsigned int);
unsigned int call_virtual_func(unsigned int, unsigned int);
unsigned int process_with_callback(unsigned int, unsigned int, unsigned int *);
int test_control_flow_l2(void);
unsigned int non_local_jump(unsigned int);
unsigned int cpp_exception(unsigned int);
unsigned int large_jump_table(unsigned int, unsigned int, unsigned int);
int op_add(unsigned int, unsigned int);
int op_sub(unsigned int, unsigned int);
int op_mul(unsigned int, unsigned int);
unsigned int op_div(unsigned int, unsigned int);
unsigned int op_mod(unsigned int, unsigned int);
unsigned int op_and(unsigned int, unsigned int);
unsigned int op_or(unsigned int, unsigned int);
int op_xor(unsigned int, unsigned int);
int op_shl(unsigned int, char);
int op_shr(unsigned int, char);
int conditional_func_ptr(unsigned int, unsigned int);
unsigned int state_machine(unsigned int, unsigned int);
unsigned int fsm_func_table(unsigned int, unsigned int);
unsigned int state_idle(unsigned int a0);
unsigned int state_processing(unsigned int, unsigned int);
unsigned int state_done(unsigned int a0);
unsigned int state_error(unsigned int, unsigned int);
unsigned int computed_goto(unsigned int, unsigned int);
unsigned int obfuscated_cf(unsigned int);
unsigned int opaque_predicate(unsigned int);
unsigned int overlapped_code(unsigned int);
int test_control_flow_l3(void);
unsigned int main(void);
void __do_global_dtors_aux(void);
unsigned int register_tm_clones(void);

int _init()
{
 if (g_406ff4)
 {
 /* g_406ff4 called as function pointer - actual implementation missing */
 }
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
 unsigned int ptr[3]; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 /* Computed goto removed - not valid C */
 return 0;
}


// Function: sub_4010a0 at 0x4010a0
int sub_4010a0()
{
 void* v1; // ebx

 /* Computed goto removed - not valid C */
 return 0;
}


// Function: sub_4010a6 at 0x4010a6
void sub_4010a6()
{
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4010db at 0x4010db
void sub_4010db()
{
 /* Unsupported jumpkind Ijk_SigTRAP at address 4198619 */
}


// Function: sub_4010dc at 0x4010dc
void sub_4010dc()
{
 return;
}


// Function: __x86.get_pc_thunk_bx at 0x4010e0
void __x86_get_pc_thunk_bx()
{
 return;
}


// Function: sub_4010e4 at 0x4010e4
void sub_4010e4()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_401123 at 0x401123
void sub_401123()
{
}


// Function: sub_401129 at 0x401129
void sub_401129()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */

unsigned int register_tm_clones()
{
 return 0;
}


// Function: sub_401177 at 0x401177
void sub_401177()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

void __do_global_dtors_aux()
{
 /* Stub function - body contains invalid decompiler output */
}


// Function: sub_40120a at 0x40120a
void sub_40120a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86.get_pc_thunk_dx at 0x401219
void __x86_get_pc_thunk_dx()
{
 return;
}


// Function: __x86.get_pc_thunk_di at 0x40121d
int __x86_get_pc_thunk_di(int a0)
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_401221 at 0x401221
void sub_401221(unsigned int a0, unsigned int a1, unsigned int a2)
{
 sequential_ops(a0, a1, a2);
 return;
}


// Function: sequential_ops at 0x401230
unsigned int sequential_ops(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x8]

 v2 = a0 + a1;
 v1 = v2 * 2;
 v0 = v1 - a2;
 return v0;
}


// Function: sub_401262 at 0x401262
void sub_401262(unsigned int a0)
{
 single_if(a0);
 return;
}


// Function: single_if at 0x401270
unsigned int single_if(unsigned int a0)
{
 if (a0 > 0)
 a0 *= 2;
 return a0;
}


// Function: sub_40128e at 0x40128e
void sub_40128e(unsigned int a0)
{
 if_else(a0);
 return;
}


// Function: if_else at 0x401290
unsigned int if_else(unsigned int a0)
{
 unsigned int v0; // [bp-0x8]

 v0 = (a0 <= 0 ? 0 : 1);
 return v0;
}


// Function: sub_4012bc at 0x4012bc
void sub_4012bc(unsigned int a0)
{
 nested_if_2(a0, a0);
 return;
}


// Function: nested_if_2 at 0x4012c0
unsigned int nested_if_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x8]

 v0 = (a0 <= 0 ? 0 : (a1 <= 0 ? a0 : a0 + a1));
 return v0;
}


// Function: sub_401306 at 0x401306
void sub_401306(unsigned int a0)
{
 nested_if_deep(a0, a0, a0, a0, a0);
 return;
}


// Function: nested_if_deep at 0x401310
unsigned int nested_if_deep(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 unsigned int v0; // [bp-0x8]

 v0 = (a0 <= 0 ? 0 : (a1 <= 0 ? 1 : (a2 <= 0 ? 2 : (a3 <= 0 ? 3 : (a4 <= 0 ? 4 : 5)))));
 return v0;
}


// Function: if_elseif_chain at 0x4013a0
unsigned int if_elseif_chain(unsigned int a0)
{
 unsigned int v0; // [bp-0x8]

 v0 = (!a0 ? 10 : (a0 == 1 ? 20 : (a0 == 2 ? 30 : 4294967295)));
 return v0;
}


// Function: sub_4013f8 at 0x4013f8
void sub_4013f8(unsigned int a0)
{
 if_elseif_long(a0);
 return;
}


// Function: if_elseif_long at 0x401400
unsigned int if_elseif_long(unsigned int a0)
{
 unsigned int v0; // [bp-0x8]

 v0 = (!a0 ? 100 : (a0 == 1 ? 200 : (a0 == 2 ? 300 : (a0 == 3 ? 400 : (a0 == 4 ? 500 : 4294967295)))));
 return v0;
}


// Function: sub_401484 at 0x401484
void sub_401484(unsigned int a0)
{
 switch_small(a0);
 return;
}


// Function: switch_small at 0x401490

unsigned int switch_small(unsigned int a0)
{
 switch(a0) {
 case 0: return 10;
 case 1: return 5;
 case 2: return 20;
 case 3: return 15;
 default: return 4294967295;
 }
}


// Function: sub_40151f at 0x40151f
void sub_40151f(unsigned int a0)
{
 switch_large(a0);
 return;
}


// Function: switch_large at 0x401520

unsigned int switch_large(unsigned int a0)
{
 if (a0 > 9)
 return 4294967295;
 return a0 * 10;
}


// Function: sub_4015df at 0x4015df
void sub_4015df(unsigned int a0)
{
 switch_default(a0);
 return;
}


// Function: switch_default at 0x4015e0
unsigned int switch_default(unsigned int a0)
{
 unsigned int v0; // [bp-0x8]

 v0 = (a0 == 1 ? 100 : (a0 == 2 ? 200 : (a0 == 3 ? 300 : 0)));
 return v0;
}


// Function: sub_401652 at 0x401652
void sub_401652(unsigned int a0)
{
 switch_fallthrough(a0);
 return;
}


// Function: switch_fallthrough at 0x401660
unsigned int switch_fallthrough(unsigned int a0)
{
 unsigned int v0; // [bp-0x8]

 v0 = 0;
 if (a0 != 1)
 {
 if (a0 != 2)
 {
 if (a0 == 3)
 {
 v0 += a0 * 4;
 }
 else
 {
 v0 = 4294967295;
 return v0;
 }
 }
 v0 += a0 * 2;
 }
 v0 += a0;
 return v0;
}


// Function: sub_4016db at 0x4016db
void sub_4016db(unsigned int a0)
{
 loop_for_fixed(a0);
 return;
}


// Function: loop_for_fixed at 0x4016e0
unsigned int loop_for_fixed(unsigned int a0)
{
 unsigned int i; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 v1 = 0;
 for (i = 0; i < a0; i += 1)
 {
 v1 += i;
 }
 return v1;
}


// Function: sub_401722 at 0x401722
void sub_401722(unsigned int a0)
{
 loop_while(a0);
 return;
}


// Function: loop_while at 0x401730
unsigned int loop_while(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]
 unsigned int i; // [bp-0x8]

 for (i = 0; a0; i += 1)
 {
 a0 = a0 / 10;
 }
 v0 = (i <= 0 ? 1 : i);
 return v0;
}


// Function: loop_dowhile at 0x401790
unsigned int loop_dowhile(unsigned int i)
{
 unsigned int v0; // [bp-0x8]

 v0 = 0;
 do
 {
 i = i / 10;
 v0 += 1;
 } while (i);
 return v0;
}


// Function: sub_4017c7 at 0x4017c7
void sub_4017c7(unsigned int a0)
{
 loop_nested(a0, a0);
 return;
}


// Function: loop_nested at 0x4017d0
unsigned int loop_nested(unsigned int a0, unsigned int a1)
{
 unsigned int j; // [bp-0x10]
 unsigned int i; // [bp-0xc]
 unsigned int v2; // [bp-0x8]

 v2 = 0;
 for (i = 0; i < a0; i += 1)
 {
 for (j = 0; j < a1; j += 1)
 {
 v2 += 1;
 }
 }
 return v2;
}


// Function: sub_40183b at 0x40183b
void sub_40183b(unsigned int a0)
{
 loop_break(a0);
 return;
}


// Function: loop_break at 0x401840
unsigned int loop_break(unsigned int a0)
{
 unsigned int i; // [bp-0x28]
 unsigned int v1; // [bp-0x24]
 char v2; // [bp-0x20]
 unsigned int v3; // [bp-0xc]

 memcpy(&v2, "\n", 20);
 v1 = 5;
 for (i = 0; i < v1; i += 1)
 {
 if (*((int *)&(&v2)[4 * i]) == a0)
 {
 v3 = i;
 return v3;
 }
 }
 v3 = 4294967295;
 return v3;
}


// Function: sub_4018cb at 0x4018cb
void sub_4018cb(unsigned int a0)
{
 loop_continue(a0);
 return;
}


// Function: loop_continue at 0x4018d0
unsigned int loop_continue(unsigned int a0)
{
 unsigned int i; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 v1 = 0;
 for (i = 1; i <= a0; i += 1)
 {
 if ((i / 2) != 0)
 v1 += i;
 }
 return v1;
}


// Function: sub_40192b at 0x40192b
void sub_40192b(void)
{
 goto_forward(5);
 return;
}


// Function: goto_forward at 0x401930
unsigned int goto_forward(unsigned int a0)
{
 unsigned int v0; // [bp-0x8]

 v0 = (a0 <= 0 ? a0 : a0 * a0);
 v0 *= 2;
 return v0;
}


// Function: sub_40196c at 0x40196c
void sub_40196c(unsigned int a0)
{
 goto_backward(a0);
 return;
}


// Function: goto_backward at 0x401970
unsigned int goto_backward(unsigned int a0)
{
 unsigned int i; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x8]

 if (a0 <= 0)
 {
 v2 = 1;
 return v2;
 }
 v1 = 1;
 for (i = 1; i <= a0; i += 1)
 {
 v1 *= i;
 }
 v2 = v1;
 return v2;
}


// Function: sub_4019d4 at 0x4019d4
void sub_4019d4(unsigned int a0, unsigned int a1)
{
 ternary_op(a0, a1);
 return;
}


// Function: ternary_op at 0x4019e0
unsigned int ternary_op(unsigned int a0, unsigned int a1)
{
 unsigned int v1; // eax
 unsigned int v0; // [bp-0x8]

 v0 = v1;
 v0 = (a0 <= a1 ? a1 : a0);
 return v0;
}


// Function: sub_401a0f at 0x401a0f
void sub_401a0f()
{
 test_control_flow_l1();
 return;
}


// Function: test_control_flow_l1 at 0x401a10
extern char g_4040c8;

int test_control_flow_l1()
{
 char *v0; // [bp-0xc]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 printf(&g_4040c8);
 sequential_ops(5, 7, 3);
 printf(v0 + 12051);
 single_if(10);
 printf(v0 + 12020);
 single_if(4294967291);
 printf(v0 + 12020);
 if_else(5);
 printf(v0 + 11994);
 if_else(4294967293);
 printf(v0 + 11994);
 nested_if_2(10);
 printf(v0 + 11970);
 nested_if_2(10);
 printf(v0 + 11970);
 nested_if_2(4294967286);
 printf(v0 + 11970);
 nested_if_deep(1, 1, 1, 1, 1);
 printf(v0 + 11942);
 if_elseif_chain(1);
 printf(v0 + 11911);
 if_elseif_long(3);
 printf(v0 + 11879);
 switch_small(2);
 printf(v0 + 11848);
 switch_large(7);
 printf(v0 + 11819);
 switch_default(5);
 printf(v0 + 11790);
 switch_fallthrough(3);
 printf(v0 + 11759);
 loop_for_fixed(10);
 printf(v0 + 11724);
 loop_while(12345);
 printf(v0 + 11693);
 loop_dowhile(9876);
 printf(v0 + 11666);
 loop_nested(3, 4);
 printf(v0 + 11637);
 loop_break(30);
 printf(v0 + 11609);
 loop_break(99);
 printf(v0 + 11609);
 loop_continue(10);
 printf(v0 + 11582);
 goto_forward(5);
 printf(v0 + 11552);
 goto_forward(4294967293);
 printf(v0 + 11552);
 goto_backward(5);
 printf(v0 + 11523);
 ternary_op(10, 5);
 printf(v0 + 11493);
 ternary_op(3, 8);
 return printf(v0 + 11493);
}


// Function: sub_401e66 at 0x401e66
void sub_401e66()
{
 loop_multi_exit(7);
 return;
}


// Function: loop_multi_exit at 0x401e70
extern void g_404084;

unsigned int loop_multi_exit(unsigned int a0)
{
 unsigned int j; // [bp-0x44]
 unsigned int i; // [bp-0x40]
 char v2[48]; // [bp-0x3c]
 unsigned int v3; // [bp-0xc]

 memcpy(&v2, &g_404084, 48);
 for (i = 0; i < 3; i += 1)
 {
 for (j = 0; j < 4; j += 1)
 {
 if (*((int *)&v2[16 * i + 4 * j]) == a0)
 {
 v3 = i * 10 + j;
 return v3;
 }
 }
 }
 v3 = 4294967295;
 return v3;
}


// Function: sub_401f24 at 0x401f24
void sub_401f24(unsigned int *ptr)
{
 infinite_loop(ptr);
 return;
}


// Function: infinite_loop at 0x401f30
unsigned int infinite_loop(unsigned int *ptr)
{
 unsigned int v0; // [bp-0x8]

 v0 = 0;
 while (*ptr != 1)
 {
 v0 += 1;
 if (v0 > 1000)
 {
 *ptr = 1;
 return v0;
 }
 }
 return v0;
}


// Function: sub_401f82 at 0x401f82
void sub_401f82(unsigned int a0)
{
 multi_return(a0);
 return;
}


// Function: multi_return at 0x401f90
unsigned int multi_return(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 if (a0 >= 0)
 {
 v0 = a0 * 2;
 v1 = (v0 <= 100 ? ((a0 / 2) != 0 ? v0 : a0 + 1) : 4294967294);
 return v1;
 }
 v1 = 4294967295;
 return v1;
}


// Function: sub_401ffe at 0x401ffe
void sub_401ffe(unsigned int a0)
{
 conditional_return(a0);
 return;
}


// Function: conditional_return at 0x402000
unsigned int conditional_return(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 if (a0 <= 0)
 {
 v0 = (a0 < 0 ? a0 * 4294967295 : 0);
 v1 = v0;
 return v1;
 }
 v1 = a0 * 2;
 return v1;
}


// Function: sub_40204f at 0x40204f
void sub_40204f(unsigned int a0, unsigned int a1, unsigned int a2)
{
 duffs_device(a0, a1, a2);
 return;
}


// Function: duffs_device at 0x402050

unsigned int duffs_device(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v3; // eax
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x8]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 if (a2 <= 0)
 {
 v2 = 4294967295;
 return v2;
 }
 v3 = a2 + 7;
 v1 = (v3 < 0 ? a2 + 14 : v3) >> 3;
 if (a2 - ((a2 < 0 ? a2 + 7 : a2) & 0xfffffff8) > 7)
 {
 v2 = a2;
 return v2;
 }
 /* Computed goto replaced - not valid C */
 v2 = a2;
 return v2;
}


// Function: sub_4021c5 at 0x4021c5
void sub_4021c5(unsigned int a0)
{
 loop_complex_cond(a0);
 return;
}


// Function: loop_complex_cond at 0x4021d0
int loop_complex_cond(unsigned int a0)
{
 char v0; // [bp-0x11]
 unsigned int v1; // [bp-0x10]
 unsigned int v2; // [bp-0xc]
 unsigned int v3; // [bp-0x8]

 v3 = 0;
 v2 = a0;
 v1 = 0;
 while (true)
 {
 v0 = 0;
 if (v3 < v2)
 {
 v0 = 0;
 if (v1 < 10)
 v0 = v2 > 0;
 }
 if (!(v0 & 1))
 break;
 v3 += 2;
 v2 -= 1;
 v1 += 1;
 }
 return v3 + v2 + v1;
}


// Function: sub_402255 at 0x402255
void sub_402255(unsigned int a0)
{
 loop_modify_var(a0);
 return;
}


// Function: loop_modify_var at 0x402260
unsigned int loop_modify_var(unsigned int a0)
{
 unsigned int cur; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 v1 = 0;
 for (cur = 0; cur < a0; cur += 1)
 {
 v1 += cur;
 if (cur > 5)
 cur += 2;
 }
 return v1;
}


// Function: sub_4022ba at 0x4022ba
void sub_4022ba(unsigned int *ptr)
{
 loop_external_state(ptr);
 return;
}


// Function: loop_external_state at 0x4022c0
unsigned int loop_external_state(unsigned int *a0)
{
 unsigned int v0; // [bp-0x8]

 v0 = 0;
 do
 {
 } while (!*a0 && (v0 += 1, v0 <= 100));
 return v0;
}


// Function: sub_402301 at 0x402301
void sub_402301(unsigned int a0)
{
 recursion_factorial(a0);
 return;
}


// Function: recursion_factorial at 0x402310

unsigned int recursion_factorial(unsigned int a0)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 v1 = (a0 <= 1 ? 1 : recursion_factorial(a0 - 1) * a0);
 return v1;
}


// Function: sub_40236a at 0x40236a
void sub_40236a(void)
{
 tail_recursion(5, 1);
 return;
}


// Function: tail_recursion at 0x402370

unsigned int tail_recursion(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 v1 = (a0 <= 1 ? a1 : tail_recursion(a0 - 1, a1 * a0));
 return v1;
}


// Function: sub_4023c9 at 0x4023c9
void sub_4023c9(void)
{
 indirect_recursion_a(10, 3);
 return;
}


// Function: indirect_recursion_a at 0x4023d0

unsigned int indirect_recursion_a(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 v1 = (a1 <= 0 ? a0 : ((a0 / 2) != 0 ? indirect_recursion_b(a0 / 2, a1 - 1) : indirect_recursion_b(a0 * 3 + 1, a1 - 1)));
 return v1;
}


// Function: sub_402467 at 0x402467
void sub_402467()
{
 indirect_recursion_b(10, 3);
 return;
}


// Function: indirect_recursion_b at 0x402470

unsigned int indirect_recursion_b(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 v1 = (a1 <= 0 ? a0 : indirect_recursion_a(a0 + 1, a1 - 1));
 return v1;
}


// Function: sub_4024c8 at 0x4024c8
void sub_4024c8()
{
 call_func_ptr((int (*)(int, int, char*))0, 0);
 return;
}


// Function: call_func_ptr at 0x4024d0
int call_func_ptr(int (*a0)(int, int, char*), unsigned int a1)
{
 char v0; // [bp-0x8]
 char v1; // [bp+0x0]

 return a0(a1, *((int *)&v0), &v1);
}

void call_func_ptr_void(void)
{
 return;
}


// Function: sub_4024f8 at 0x4024f8
void sub_4024f8()
{
 call_func_ptr_array(0, 0);
 return;
}


// Function: call_func_ptr_array at 0x402500
extern unsigned int (*g_406ec8)(unsigned int);
extern unsigned int (*g_406ecc)(unsigned int);
extern unsigned int (*g_406ed0)(unsigned int);

unsigned int call_func_ptr_array(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x1c]
 typedef unsigned int (*func_t)(unsigned int);
 func_t funcs[3];
 unsigned int v4; // [bp-0xc]

 v0 = (unsigned int)_GLOBAL_OFFSET_TABLE_;
 funcs[0] = g_406ec8;
 funcs[1] = g_406ecc;
 funcs[2] = g_406ed0;
 if (a0 >= 0 && a0 < 3)
 {
 v4 = funcs[a0](a1);
 return v4;
 }
 v4 = 4294967295;
 return v4;
}


// Function: sub_402575 at 0x402575
void sub_402575(unsigned int a0)
{
 double_value(a0);
 return;
}


// Function: double_value at 0x402580
unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_40258e at 0x40258e
void sub_40258e(unsigned int a0)
{
 triple_value(a0);
 return;
}


// Function: triple_value at 0x402590
unsigned int triple_value(unsigned int a0)
{
 return a0 * 3;
}


// Function: sub_40259c at 0x40259c
void sub_40259c(unsigned int a0, unsigned int a1)
{
 call_virtual_func(a0, a1);
 return;
}


// Function: call_virtual_func at 0x4025a0
unsigned int call_virtual_func(unsigned int a0, unsigned int a1)
{
 return a1 * 2;
}


// Function: sub_4025b1 at 0x4025b1
void sub_4025b1()
{
 process_with_callback(0, 0, 0);
 return;
}


// Function: process_with_callback at 0x4025c0

unsigned int process_with_callback(unsigned int a0, unsigned int a1, unsigned int *a2)
{
 unsigned int v0; // [bp-0x14]
 unsigned int i; // [bp-0x10]
 unsigned int v2; // [bp-0xc]
 unsigned int *arr;

 v0 = &_GLOBAL_OFFSET_TABLE_;
 arr = (unsigned int *)a0;
 v2 = 0;
 for (i = 0; i < a1; i += 1)
 {
 v2 += arr[i];
 }
 return v2;
}


// Function: sub_40262a at 0x40262a
void sub_40262a()
{
 test_control_flow_l2();
 return;
}


// Function: test_control_flow_l2 at 0x402630
extern char g_404336;

int test_control_flow_l2()
{
 void* v0; // [bp-0x68]
 char v1[20]; // [bp-0x64]
 unsigned int flag1; // [bp-0x50]
 char v3; // [bp-0x4c]
 char v4[32]; // [bp-0x2c]
 unsigned int result; // [bp-0xc]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 printf(&g_404336);
 loop_multi_exit(7);
 printf(v0 - 11429);
 result = 0;
 infinite_loop(&result);
 printf(v0 - 11397);
 multi_return(4294967291);
 printf(v0 - 11367);
 multi_return(100);
 printf(v0 - 11367);
 multi_return(3);
 printf(v0 - 11367);
 conditional_return(5);
 printf(v0 - 11338);
 conditional_return(4294967291);
 printf(v0 - 11338);
 duffs_device((unsigned int)&v3, (unsigned int)&v4, 8);
 printf(v0 - 11303);
 loop_complex_cond(10);
 printf(v0 - 11274);
 loop_modify_var(10);
 printf(v0 - 11240);
 flag1 = 0;
 loop_external_state(&flag1);
 printf(v0 - 11208);
 recursion_factorial(5);
 printf(v0 - 11172);
 tail_recursion(5, 1);
 printf(v0 - 11136);
 indirect_recursion_a(10, 3);
 printf(v0 - 11105);
 call_func_ptr(v0 - 19072, 5);
 printf(v0 - 11070);
 call_func_ptr_array(0, 5);
 printf(v0 - 11040);
 call_func_ptr_array(2, 5);
 printf(v0 - 11040);
 memcpy(&v1, v0 - 12108, 20);
 process_with_callback(&v1, 5, v0 - 19072);
 return printf(v0 - 11004);
}


// Function: sub_402999 at 0x402999
void sub_402999()
{
 non_local_jump(0);
 return;
}


// Function: non_local_jump at 0x4029a0
extern jmp_buf jump_buffer;

unsigned int non_local_jump(unsigned int a0)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 if (_setjmp(&jump_buffer))
 {
 v1 = 4294967295;
 return v1;
 }
 else if (a0 < 0)
 {
 longjmp(&jump_buffer, 1); /* do not return */
 }
 else if (a0 > 100)
 {
 longjmp(&jump_buffer, 2); /* do not return */
 }
 else
 {
 v1 = a0 * 2;
 return v1;
 }
}


// Function: sub_402a34 at 0x402a34
void sub_402a34(unsigned int a0)
{
 cpp_exception(a0);
 return;
}


// Function: cpp_exception at 0x402a40
unsigned int cpp_exception(unsigned int a0)
{
 unsigned int v0; // [bp-0x8]

 v0 = (a0 < 0 ? 4294967295 : (a0 <= 100 ? a0 * 2 : 4294967294));
 return v0;
}


// Function: sub_402a84 at 0x402a84
void sub_402a84()
{
 large_jump_table(0, 0, 0);
 return;
}


// Function: large_jump_table at 0x402a90
extern void g_406ed4;

unsigned int large_jump_table(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v0; // [bp-0x38]
 char v1[40]; // [bp-0x34]
 unsigned int v2; // [bp-0xc]
 typedef unsigned int (*func_t)(unsigned int, unsigned int);
 func_t funcs[10];

 v0 = &_GLOBAL_OFFSET_TABLE_;
 memcpy(&funcs, &g_406ed4, 40);
 if (a0 >= 0 && a0 < 10)
 {
 v2 = funcs[a0](a1, a2);
 return v2;
 }
 v2 = 4294967295;
 return v2;
}


// Function: sub_402b11 at 0x402b11
void sub_402b11(unsigned int a0, unsigned int a1)
{
 op_add(a0, a1);
 return;
}


// Function: op_add at 0x402b20
int op_add(unsigned int a0, unsigned int a1)
{
 return a0 + a1;
}


// Function: sub_402b31 at 0x402b31
void sub_402b31(unsigned int a0, unsigned int a1)
{
 op_sub(a0, a1);
 return;
}


// Function: op_sub at 0x402b40
int op_sub(unsigned int a0, unsigned int a1)
{
 return a0 - a1;
}


// Function: sub_402b51 at 0x402b51
void sub_402b51(unsigned int a0, unsigned int a1)
{
 op_mul(a0, a1);
 return;
}


// Function: op_mul at 0x402b60
int op_mul(unsigned int a0, unsigned int a1)
{
 return a1 * a0;
}


// Function: sub_402b72 at 0x402b72
void sub_402b72(unsigned int a0, unsigned int a1)
{
 op_div(a0, a1);
 return;
}


// Function: op_div at 0x402b80
unsigned int op_div(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x8]

 v0 = (!a1 ? 0 : a0 / a1);
 return v0;
}


// Function: sub_402bb5 at 0x402bb5
void sub_402bb5(unsigned int a0, unsigned int a1)
{
 op_mod(a0, a1);
 return;
}


// Function: op_mod at 0x402bc0
unsigned int op_mod(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x8]

 v0 = (!a1 ? 0 : a0 % a1);
 return v0;
}


// Function: sub_402bf5 at 0x402bf5
void sub_402bf5(unsigned int a0, unsigned int a1)
{
 op_and(a0, a1);
 return;
}


// Function: op_and at 0x402c00
unsigned int op_and(unsigned int a0, unsigned int a1)
{
 return a0 & a1;
}


// Function: sub_402c11 at 0x402c11
void sub_402c11(unsigned int a0, unsigned int a1)
{
 op_or(a0, a1);
 return;
}


// Function: op_or at 0x402c20
unsigned int op_or(unsigned int a0, unsigned int a1)
{
 return a0 | a1;
}


// Function: sub_402c31 at 0x402c31
void sub_402c31(unsigned int a0, unsigned int a1)
{
 op_xor(a0, a1);
 return;
}


// Function: op_xor at 0x402c40
int op_xor(unsigned int a0, unsigned int a1)
{
 return a0 ^ a1;
}


// Function: sub_402c51 at 0x402c51
void sub_402c51(unsigned int a0, unsigned int a1)
{
 op_shl(a0, (char)a1);
 return;
}


// Function: op_shl at 0x402c60
int op_shl(unsigned int a0, char a1)
{
 return a0 << (a1 & 31);
}


// Function: sub_402c73 at 0x402c73
void sub_402c73(unsigned int a0, unsigned int a1)
{
 op_shr(a0, (char)a1);
 return;
}


// Function: op_shr at 0x402c80
int op_shr(unsigned int a0, char a1)
{
 return a0 >> (a1 & 31);
}


// Function: sub_402c93 at 0x402c93
int sub_402c93()
{
 return conditional_func_ptr(0, 0);
}


// Function: conditional_func_ptr at 0x402ca0

typedef int (*func_ptr_t)(unsigned int);

int conditional_func_ptr(unsigned int a0, unsigned int a1)
{
 void* v0; // [bp-0x10]
 func_ptr_t v1; // [bp-0xc]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 if (!a0)
 v1 = (func_ptr_t)(v0 - 19072);
 else
 v1 = (func_ptr_t)(a0 == 1 ? v0 - 19056 : v0 - 19696);
 return v1(a1);
}


// Function: sub_402d17 at 0x402d17
void sub_402d17(unsigned int a0, unsigned int a1)
{
 state_machine(a0, a1);
 return;
}


// Function: state_machine at 0x402d20

unsigned int state_machine(unsigned int a0, unsigned int a1)
{
 if (a1 > 3)
 return 3;
 switch(a1) {
 case 0: return 0;
 case 1: return 1;
 case 2: return 2;
 case 3: return 3;
 default: return 3;
 }
}


// Function: sub_402df2 at 0x402df2
int sub_402df2()
{
 return fsm_func_table(0, 0);
}


// Function: fsm_func_table at 0x402e00
extern unsigned int (*g_406efc)(unsigned int);
extern unsigned int (*g_406f00)(unsigned int);
extern unsigned int (*g_406f04)(unsigned int);
extern unsigned int (*g_406f08)(unsigned int);

unsigned int fsm_func_table(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x20]
 unsigned int v5; // [bp-0xc]
 typedef unsigned int (*func_t)(unsigned int);
 func_t funcs[4];

 v0 = (unsigned int)_GLOBAL_OFFSET_TABLE_;
 funcs[0] = g_406efc;
 funcs[1] = g_406f00;
 funcs[2] = g_406f04;
 funcs[3] = g_406f08;
 if (a1 >= 0 && a1 < 4)
 {
 v5 = funcs[a1](a0);
 return v5;
 }
 v5 = 3;
 return v5;
}


// Function: sub_402e7e at 0x402e7e
void sub_402e7e(unsigned int a0)
{
 state_idle(a0);
 return;
}


// Function: state_idle at 0x402e80
unsigned int state_idle(unsigned int a0)
{
 if (a0 != 1)
 return 0;
 return 1;
}


// Function: sub_402e98 at 0x402e98
void sub_402e98(unsigned int a0)
{
 state_processing(a0);
 return;
}


// Function: state_processing at 0x402ea0
unsigned int state_processing(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x8]

 v0 = (a0 == 2 ? 2 : (a0 == 99 ? 3 : 1));
 return v0;
}


// Function: sub_402ee2 at 0x402ee2
void sub_402ee2()
{
 state_done();
 return;
}


// Function: state_done at 0x402ef0
unsigned int state_done(unsigned int a0, unsigned int a1)
{
 return 2;
}


// Function: sub_402efd at 0x402efd
void sub_402efd(unsigned int a0)
{
 state_error(a0);
 return;
}


// Function: state_error at 0x402f00
unsigned int state_error(unsigned int a0, unsigned int a1)
{
 if (a0)
 return 3;
 return 0;
}


// Function: sub_402f18 at 0x402f18
void sub_402f18(unsigned int a0, unsigned int a1)
{
 computed_goto(a0, a1);
 return;
}


// Function: computed_goto at 0x402f20
extern unsigned int (*g_406f0c)(unsigned int, unsigned int);
extern unsigned int (*g_406f10)(unsigned int, unsigned int);
extern unsigned int (*g_406f14)(unsigned int, unsigned int);
extern unsigned int (*g_406f18)(unsigned int, unsigned int);

unsigned int computed_goto(unsigned int a0, unsigned int idx)
{
 unsigned int v0; // [bp-0xc]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 if (idx >= 0 && idx < 4)
 {
 switch(idx) {
 case 0: return g_406f0c(a0, idx);
 case 1: return g_406f10(a0, idx);
 case 2: return g_406f14(a0, idx);
 case 3: return g_406f18(a0, idx);
 }
 }
 return 4294967295;
}


// Function: sub_402f8b at 0x402f8b
void sub_402f8b()
{
 unsigned int v1; // [bp+0x100000]

 v1 = 0;
}


// Function: sub_402f97 at 0x402f97
void sub_402f97()
{
 unsigned int v1; // [bp+0x100000]

 v1 = 10;
}


// Function: sub_402fa3 at 0x402fa3
void sub_402fa3()
{
 unsigned int v1; // [bp+0x100000]

 v1 = 20;
}


// Function: sub_402faf at 0x402faf
void sub_402faf()
{
 unsigned int v1; // [bp+0x100000]

 v1 = 30;
}


// Function: sub_402fc3 at 0x402fc3
void sub_402fc3(unsigned int a0)
{
 obfuscated_cf(a0);
 return;
}


// Function: obfuscated_cf at 0x402fd0
unsigned int obfuscated_cf(unsigned int a0)
{
 unsigned int v1; // eax
 unsigned int v0; // [bp-0x8]

 v0 = v1;
 v0 = a0;
 if (a0 * a0 + 1 < 0)
 v0 = v0 * 2 + 1;
 v0 *= 2;
 return v0;
}


// Function: sub_40300d at 0x40300d
void sub_40300d(unsigned int a0)
{
 opaque_predicate(a0);
 return;
}


// Function: opaque_predicate at 0x403010
unsigned int opaque_predicate(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 v0 = a0 * 305419896 & 1;
 v1 = (!v0 ? a0 * 2 : a0 * 3);
 return v1;
}


// Function: overlapped_code at 0x403050
unsigned int overlapped_code(unsigned int a0)
{
 unsigned int v0; // [bp-0x8]

 v0 = (!(a0 & 1) ? a0 / 2 : a0 * 3 + 1);
 return v0;
}


// Function: sub_40308b at 0x40308b
void sub_40308b()
{
 test_control_flow_l3();
 return;
}


// Function: test_control_flow_l3 at 0x403090
extern char g_40452a;

int test_control_flow_l3()
{
 void* ptr; // ebx
 void* v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 unsigned int v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]
 unsigned int v4; // [bp-0xc]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 printf(&g_40452a);
 non_local_jump(5);
 printf(v0 - 10929);
 non_local_jump(4294967291);
 printf(v0 - 10929);
 cpp_exception(5);
 printf(v0 - 10898);
 cpp_exception(4294967291);
 printf(v0 - 10898);
 large_jump_table(0, 10, 5);
 printf(v0 - 10868);
 conditional_func_ptr(0, 5);
 printf(v0 - 10835);
 state_machine(1, 0);
 printf(v0 - 10798);
 fsm_func_table(2, 1);
 printf(v0 - 10768);
 v1 = *((int*)((char*)v0 + 10580));
 v2 = *((int*)((char*)v0 + 10576));
 v3 = *((int*)((char*)v0 + 10572));
 v4 = *((int*)((char*)v0 + 10568));
 computed_goto(v1, 0);
 computed_goto(v2, 1);
 computed_goto(v3, 2);
 computed_goto(v4, 3);
 (void)v1; (void)v2; (void)v3; (void)v4;
 printf(v0 - 10737);
 obfuscated_cf(5);
 printf(v0 - 10707);
 opaque_predicate(5);
 printf(v0 - 10677);
 overlapped_code(5);
 return printf(v0 - 10644);
}


// Function: sub_4032c3 at 0x4032c3
void sub_4032c3()
{
 main();
 return;
}


// Function: main at 0x4032d0

unsigned int main()
{
 unsigned int v0; // [bp-0x10]
 unsigned int result; // [bp-0xc]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 result = 0;
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}


// Function: sub_40330a at 0x40330a
void sub_40330a()
{
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

unsigned int __do_global_ctors_aux()
{
 return 0;
}


// Function: sub_403352 at 0x403352
void sub_403352()
{
}



/* CRT stub function _fini removed by preprocessor */


