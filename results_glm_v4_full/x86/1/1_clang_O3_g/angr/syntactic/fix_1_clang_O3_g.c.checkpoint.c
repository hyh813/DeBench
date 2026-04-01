// Angr Decompilation of 1_clang_O3_g
// Platform: X86

#include <stdio.h>
#include <setjmp.h>
#include <stdlib.h>

/* Stub definitions for missing CRT functions */
void frame_dummy(void) {}
void deregister_tm_clones(void) {}
void register_tm_clones(void) {}

/* Stub for _ccall used in decompiled code */
int _ccall(int a, int b, int c, int d, int e) { return 0; }

/* Function pointer type definitions */
typedef unsigned int (*func_ptr_t)(unsigned int);

/* Global variable definitions */
struct struct_0 *g_405ff4 = NULL;
char g_403691[] = "CF-L1 Tests";
char g_4036b5[] = "CF-L2 Tests";
char g_4036d9[] = "CF-L3 Tests";
unsigned int jump_buffer[16] = {0};

/* CRT stub function _init removed by preprocessor */

struct struct_0 {
    char padding_0[40];
    int field_4;
    int field_8;
    int field_c;
    int padding_4ed7;
};

void __do_global_ctors_aux(void);
void __do_global_dtors_aux(void);

static void _init()
{
 frame_dummy();
 __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
 unsigned int ptr[3]; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 return v0;
}


// Function: sub_401090 at 0x401090
int sub_401090(int a0)
{
 return a0;
}


// Function: sub_401096 at 0x401096
void sub_401096()
{
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4010cb at 0x4010cb
void sub_4010cb()
{
}


// Function: sub_4010cc at 0x4010cc
void sub_4010cc()
{
 return;
}


// Function: __x86.get_pc_thunk_bx at 0x4010d0
void __x86_get_pc_thunk_bx()
{
 return;
}


// Function: sub_4010d4 at 0x4010d4
void sub_4010d4()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_401113 at 0x401113
void sub_401113()
{
}


// Function: sub_401119 at 0x401119
void sub_401119()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */

/* Forward declarations */
void __do_global_ctors_aux(void);
void __do_global_dtors_aux(void);
unsigned int __x86_get_pc_thunk_dx(void);
int __x86_get_pc_thunk_di(int, void*);
void __x86_get_pc_thunk_bx(void);
int sequential_ops(int, int, int);
int single_if(int);
int if_else(int);
int nested_if_2(int, int);
int nested_if_deep(int, int, int, int, int);
int if_elseif_chain(int);
int if_elseif_long(int);
unsigned int switch_small(unsigned int);
int switch_large(int);
int switch_default(int);
int switch_fallthrough(int);
int loop_for_fixed(int);
int loop_while(int);
int loop_dowhile(int);
int loop_nested(int, int);
int loop_break(int);
int loop_continue(int);
int goto_forward(int);
int goto_backward(int);
int ternary_op(int, int);
int test_control_flow_l1(void);
unsigned int loop_multi_exit(unsigned int);
unsigned int infinite_loop(unsigned int *);
unsigned int multi_return(unsigned int);
unsigned int conditional_return(unsigned int);
unsigned int duffs_device(unsigned int *, unsigned int *, unsigned int);
int loop_complex_cond(unsigned int);
unsigned int loop_modify_var(unsigned int);
unsigned int loop_external_state(unsigned int *);
unsigned int recursion_factorial(unsigned int);
unsigned int tail_recursion(unsigned int, unsigned int);
unsigned int indirect_recursion_a(unsigned int, unsigned int);
int call_func_ptr(func_ptr_t, unsigned int);
unsigned int call_func_ptr_array(unsigned int, unsigned int);
unsigned int double_value(unsigned int);
unsigned int triple_value(unsigned int);
unsigned int call_virtual_func(unsigned int, unsigned int);
unsigned int process_with_callback(unsigned int, unsigned int, unsigned int (*)(unsigned int));
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
int state_idle(unsigned int);
unsigned int state_processing(unsigned int);
unsigned int state_done(void);
unsigned int state_error(unsigned int);
unsigned int computed_goto(unsigned int, unsigned int);
unsigned int obfuscated_cf(unsigned int);
unsigned int opaque_predicate(unsigned int);
unsigned int overlapped_code(unsigned int);
int test_control_flow_l3(void);
unsigned int main(void);

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;


// Function: sub_401167 at 0x401167
void sub_401167()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

void __do_global_dtors_aux()
{
 __x86_get_pc_thunk_di(0, NULL);
 deregister_tm_clones();
}


// Function: sub_4011fa at 0x4011fa
void sub_4011fa()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86.get_pc_thunk_dx at 0x401209
unsigned int __x86_get_pc_thunk_dx()
{
 unsigned int v0;
 asm volatile ("movl (%%esp), %0" : "=r" (v0));
 return v0;
}


// Function: __x86.get_pc_thunk_di at 0x40120d
int __x86_get_pc_thunk_di(int a0, void *a1)
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
int sequential_ops(int a0, int a1, int a2)
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
int single_if(int a0)
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
int if_else(int a0)
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
int nested_if_2(int a0, int a1)
{
 if (a1 < 0)
 a1 = 0;
 if (a0 > 0)
 return a1 + a0;
 return 0;
}


// Function: sub_401267 at 0x401267
void sub_401267(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 nested_if_deep(a0, a1, a2, a3, a4);
 return;
}


// Function: nested_if_deep at 0x401270
int nested_if_deep(int a0, int a1, int a2, int a3, int a4)
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
int if_elseif_chain(int a0)
{
 if (a0 >= 3)
 return -1;
 return a0 * 10 + 10;
}


// Function: sub_4012c7 at 0x4012c7
void sub_4012c7(unsigned int a0)
{
 if_elseif_long(a0);
 return;
}


// Function: if_elseif_long at 0x4012d0
int if_elseif_long(int a0)
{
 if (a0 >= 5)
 return -1;
 return a0 * 100 + 100;
}


// Function: sub_4012e6 at 0x4012e6
void sub_4012e6(unsigned int a0)
{
 switch_small(a0);
 return;
}


// Function: switch_small at 0x4012f0
extern char _GLOBAL_OFFSET_TABLE_;

unsigned int switch_small(unsigned int a0)
{
 unsigned int v0; // eax

 v0 = 4294967295;
 if (a0 <= 3)
 {
 static const unsigned int table[4] = {10, 20, 30, 40};
 v0 = table[a0];
 }
 return v0;
}


// Function: sub_401312 at 0x401312
void sub_401312(unsigned int a0)
{
 switch_large(a0);
 return;
}


// Function: switch_large at 0x401320
int switch_large(int a0)
{
 if (a0 >= 10)
 return -1;
 return a0 * 10;
}


// Function: sub_401336 at 0x401336
void sub_401336(unsigned int a0)
{
 switch_default(a0);
 return;
}


// Function: switch_default at 0x401340
int switch_default(int a0)
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
int switch_fallthrough(int a0)
{
 int v0; // eax

 v0 = 0;
 if (a0 != 1)
 {
 if (a0 != 2)
 {
 if (a0 == 3)
 v0 = 12;
 else
 return -1;
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
int loop_for_fixed(int a0)
{
 if (a0 <= 0)
 return 0;
 return (int)(((a0 - 1) * (a0 - 2)) / 2) + a0 - 1;
}


// Function: sub_4013ae at 0x4013ae
void sub_4013ae(unsigned int a0)
{
 loop_while(a0);
 return;
}


// Function: loop_while at 0x4013b0
int loop_while(int a0)
{
 int v0; // ecx
 int v3; // ecx

 if (!a0)
 return 1;
 v0 = 0;
 do
 {
 v3 = v0 + 1;
 a0 = a0 / 10;
 v0 = v3;
 } while (a0 > 0);
 return v0;
}


// Function: sub_4013fa at 0x4013fa
void sub_4013fa(unsigned int a0)
{
 loop_dowhile(a0);
 return;
}


// Function: loop_dowhile at 0x401400
int loop_dowhile(int a0)
{
 int v0; // ecx
 int v3; // ecx

 v0 = 0;
 do
 {
 v3 = v0 + 1;
 a0 = a0 / 10;
 v0 = v3;
 } while (a0 > 0);
 return v0;
}


// Function: loop_nested at 0x401430
int loop_nested(int a0, int a1)
{
 int v2; // eax

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
 return;
}


// Function: loop_break at 0x401450

int loop_break(int a0)
{
 int v0; // eax

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
 return -1;
 }
}


// Function: sub_401491 at 0x401491
void sub_401491(unsigned int a0)
{
 loop_continue(a0);
 return;
}


// Function: loop_continue at 0x4014a0
int loop_continue(int a0)
{
 int result; // ecx
 int v1; // eax
 int v2; // edx

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
 } while (((a0 >> 2) + v2 + 4) != 1);
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
 return;
}


// Function: goto_forward at 0x401510
int goto_forward(int a0)
{
 int v0; // ecx
 int v1; // eax

 v0 = a0;
 if ((char)_ccall(15, 15, v0, 0, 0))
 v1 = v0;
 else
 v1 = 1;
 return v0 * v1 * 2;
}


// Function: sub_401524 at 0x401524
int sub_401524()
{
 goto_backward(10);
 return 0;
}


// Function: goto_backward at 0x401530
int goto_backward(int a0)
{
 int result; // ecx
 int v1; // edx
 int v2; // eax
 int v3; // edx
 int v4; // edx
 int v5; // edx
 int v6; // eax
 int v7; // eax

 if (a0 <= 0)
 return 1;
 result = a0 & 7;
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
 } while (((a0 >> 3) + v3 + 8) != 8);
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
int ternary_op(int a0, int a1)
{
 if (a0 <= a1)
 return a1;
 return a0;
}


// Function: sub_4015ee at 0x4015ee
int sub_4015ee()
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
 printf("CF-L1-01 (sequential_ops): %d\n");
 v0 = 20;
 printf("CF-L1-02 (single_if): %d\n");
 v0 = 4294967291;
 printf("CF-L1-02 (single_if): %d\n");
 v0 = 1;
 printf("CF-L1-03 (if_else): %d\n");
 v0 = 0;
 printf("CF-L1-03 (if_else): %d\n");
 v0 = 15;
 printf("CF-L1-04 (nested_if_2): %d\n");
 v0 = 10;
 printf("CF-L1-04 (nested_if_2): %d\n");
 v0 = 0;
 printf("CF-L1-04 (nested_if_2): %d\n");
 v0 = 5;
 printf("CF-L1-05 (nested_if_deep): %d\n");
 v0 = 20;
 printf("CF-L1-06 (if_elseif_chain): %d\n");
 v0 = 400;
 printf("CF-L1-07 (if_elseif_long): %d\n");
 v0 = 50;
 printf("CF-L1-08 (switch_small): %d\n");
 v0 = 70;
 printf("CF-L1-09 (switch_large): %d\n");
 v0 = 0;
 printf("CF-L1-10 (switch_default): %d\n");
 v0 = 21;
 printf("CF-L1-11 (switch_fallthrough): %d\n");
 v0 = 45;
 printf("CF-L1-12 (loop_for_fixed): %d\n");
 v0 = 5;
 printf("CF-L1-13 (loop_while): %d\n");
 v0 = 4;
 printf("CF-L1-14 (loop_dowhile): %d\n");
 v0 = 12;
 printf("CF-L1-15 (loop_nested): %d\n");
 v0 = 2;
 printf("CF-L1-16 (loop_break): %d\n");
 v0 = 4294967295;
 printf("CF-L1-16 (loop_break): %d\n");
 v0 = 25;
 printf("CF-L1-17 (loop_continue): %d\n");
 v0 = 50;
 printf("CF-L1-18 (goto_forward): %d\n");
 v0 = 4294967290;
 printf("CF-L1-18 (goto_forward): %d\n");
 v0 = 120;
 printf("CF-L1-19 (goto_backward): %d\n");
 v0 = 10;
 printf("CF-L1-20 (ternary_op): %d\n");
 v0 = 8;
 return printf("CF-L1-20 (ternary_op): %d\n");
}


// Function: sub_40183d at 0x40183d
void sub_40183d(unsigned int a0)
{
 loop_multi_exit(a0);
 return;
}


// Function: loop_multi_exit at 0x401840
unsigned int loop_multi_exit(unsigned int a0)
{
 unsigned int v0; // eax

 v0 = 4294967295;
 if (a0 - 1 <= 11)
 {
 v0 = a0 * 2 + a0 * 3;
 }
 return v0;
}


// Function: sub_40186e at 0x40186e
void sub_40186e(unsigned int a0)
{
 unsigned int state = 0;
 infinite_loop(&state);
 return;
}


// Function: infinite_loop at 0x401870
unsigned int infinite_loop(unsigned int *ptr)
{
 unsigned int v0; // eax
 unsigned int v1; // eax

 v0 = 0;
 if (*(ptr) == 1)
 return 0;
 while (1)
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
 return;
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
 return;
}


// Function: conditional_return at 0x4018f0
unsigned int conditional_return(unsigned int a0)
{
 if (!((char)_ccall(15, 15, a0, 0, 0)))
 return -(a0);
 return a0 * 2;
}


// Function: sub_401901 at 0x401901
int sub_401901()
{
 unsigned int src[16], dst[16];
 duffs_device(dst, src, 10);
 return 0;
}


// Function: duffs_device at 0x401910

unsigned int duffs_device(unsigned int *a0, unsigned int *a1, unsigned int a2)
{
 unsigned int *iter; // edx
 unsigned int *cur; // esi
 unsigned int v2; // eax
 unsigned int n = a2;

 iter = a1;
 cur = a0;
 switch (n % 8)
 {
 case 0:
 do
 {
 iter += 1;
 *(cur) = *(iter);
 cur += 1;
 v2 -= 1;
 case 7:
 iter += 1;
 *(cur) = *(iter);
 cur += 1;
 case 6:
 iter += 1;
 *(cur) = *(iter);
 cur += 1;
 case 5:
 iter += 1;
 *(cur) = *(iter);
 cur += 1;
 case 4:
 iter += 1;
 *(cur) = *(iter);
 cur += 1;
 case 3:
 iter += 1;
 *(cur) = *(iter);
 cur += 1;
 case 2:
 iter += 1;
 *(cur) = *(iter);
 cur += 1;
 case 1:
 iter += 1;
 *(cur) = *(iter);
 cur += 1;
 n -= 1;
 } while (n > 0);
 return a2;
 default:
 return 4294967295;
 }
}


// Function: sub_4019a8 at 0x4019a8
void sub_4019a8(unsigned int a0)
{
 loop_complex_cond(a0);
 return;
}


// Function: loop_complex_cond at 0x4019b0
int loop_complex_cond(unsigned int a0)
{
 unsigned int v0; // ecx
 unsigned int v1; // esi
 unsigned int v2; // eax
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
 } while (v0 >= 2 && v2 < v0 && (v1 = v4, v0 = v0, v1 < 9));
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
 return;
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
 unsigned int state = 0;
 loop_external_state(&state);
 return;
}


// Function: loop_external_state at 0x401a20
unsigned int loop_external_state(unsigned int *a0)
{
 unsigned int v0; // eax
 unsigned int v1; // eax

 v0 = 0;
 if (*(a0))
 return 0;
 while (1)
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
 return;
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
 return;
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
 return;
}


// Function: indirect_recursion_a at 0x401ab0
unsigned int indirect_recursion_a(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // ecx

 if (a1 <= 0)
 return a0;
 v0 = a1 + 2;
 while (1)
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
void sub_401ac1()
{
}


// Function: sub_401af1 at 0x401af1
void sub_401af1()
{
}


// Function: sub_401b14 at 0x401b14
int sub_401b14()
{
 call_func_ptr(double_value, 5);
 return 0;
}


// Function: call_func_ptr at 0x401b20
typedef unsigned int (*func_ptr_t)(unsigned int);

int call_func_ptr(func_ptr_t a0, unsigned int a1)
{
 return a0(a1);
}


// Function: call_func_ptr_array at 0x401b40

unsigned int call_func_ptr_array(unsigned int a0, unsigned int a1)
{
 switch (a0)
 {
 case 0:
 break;
 default:
 return 4294967295;
 }
}


// Function: sub_401b76 at 0x401b76
void sub_401b76(unsigned int a0)
{
 double_value(a0);
 return;
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
 return;
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
 return;
}


// Function: call_virtual_func at 0x401ba0
unsigned int call_virtual_func(unsigned int a0, unsigned int a1)
{
 return a1 * 2;
}


// Function: sub_401ba7 at 0x401ba7
int sub_401ba7()
{
 unsigned int arr[5] = {1, 2, 3, 4, 5};
 process_with_callback((unsigned int)arr, 5, double_value);
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
 v1 += a2(*((unsigned int *)(a0 + v0 * 4)));
 v0 += 1;
 } while (i != v0);
 return v1;
}


// Function: sub_401bf5 at 0x401bf5
int sub_401bf5()
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
 printf("CF-L2-01 (loop_multi_exit): %d\n");
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
 printf("CF-L2-02 (infinite_loop): %d\n");
 v0 = 4294967295;
 printf("CF-L2-03 (multi_return): %d\n");
 v0 = 4294967294;
 printf("CF-L2-03 (multi_return): %d\n");
 v0 = 4;
 printf("CF-L2-03 (multi_return): %d\n");
 v0 = 10;
 printf("CF-L2-04 (conditional_return): %d\n");
 v0 = 5;
 printf("CF-L2-04 (conditional_return): %d\n");
 v0 = 8;
 printf("CF-L2-05 (duffs_device): %d\n");
 v5 = 4294967295;
 v6 = 11;
 v7 = 10;
 do
 {
 v8 = v7 + 2;
 } while (v7 - 8 < v6 - 2 && (v5 += 1, v6 -= 1, v7 = v8, v5 < 9));
 v0 = v8;
 printf("CF-L2-06 (loop_complex_cond): %d\n");
 v0 = 30;
 printf("CF-L2-07 (loop_modify_var): %d\n");
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
 printf("CF-L2-08 (loop_external_state): %d\n");
 v0 = 120;
 printf("CF-L2-09 (recursion_factorial): %d\n");
 v0 = 120;
 printf("CF-L2-10 (tail_recursion): %d\n");
 v0 = 3;
 printf("CF-L2-11 (indirect_recursion): %d\n");
 v0 = 10;
 printf("CF-L2-12 (call_func_ptr): %d\n");
 v0 = 10;
 printf("CF-L2-13 (call_func_ptr_array): %d\n");
 v0 = 120;
 printf("CF-L2-13 (call_func_ptr_array): %d\n");
 v0 = 30;
 return printf("CF-L2-15 (process_with_callback): %d\n");
}


// Function: sub_401e77 at 0x401e77
int sub_401e77()
{
 non_local_jump(5);
 return 0;
}


// Function: non_local_jump at 0x401e80
unsigned int non_local_jump(unsigned int a0)
{
 if (_setjmp(&jump_buffer))
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
 return;
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
int sub_401f0d()
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
 break;
 default:
 return 4294967295;
 }
}


// Function: sub_401f4a at 0x401f4a
void sub_401f4a(unsigned int a0, unsigned int a1)
{
 op_add(a0, a1);
 return;
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
 return;
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
 return;
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
 return;
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
 return;
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
 return;
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
 return;
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
 return;
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
 return;
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
 return;
}


// Function: op_shr at 0x402000
int op_shr(unsigned int a0, char a1)
{
 return a0 >> (a1 & 31);
}


// Function: sub_40200b at 0x40200b
int sub_40200b()
{
 conditional_func_ptr(1, 5);
 return 0;
}


// Function: conditional_func_ptr at 0x402010
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


// Function: sub_40204f at 0x40204f
void sub_40204f(unsigned int a0, unsigned int a1)
{
 state_machine(a0, a1);
 return;
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
 return;
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
 return;
}


// Function: state_processing at 0x4020f0
unsigned int state_processing(unsigned int a0)
{
 if (a0 != 2)
 return (a0 == 99) * 2 + 1;
 return 2;
}


// Function: sub_402108 at 0x402108
void sub_402108()
{
 state_done();
 return;
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
 return;
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
 return;
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
 return;
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
 return;
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
 return;
}


// Function: overlapped_code at 0x402190
unsigned int overlapped_code(unsigned int a0)
{
 if (((char)a0 & 1))
 return a0 * 3 + 1;
 return (a0 >> 31) + a0 >> 1;
}


// Function: sub_4021aa at 0x4021aa
int sub_4021aa()
{
 test_control_flow_l3();
 return 0;
}


// Function: test_control_flow_l3 at 0x4021b0

int test_control_flow_l3()
{
 unsigned int v0;
 puts(&g_4036d9);
 non_local_jump(5);
 printf("CF-L3-01 (non_local_jump): %d\n", 10);
 non_local_jump(4294967291);
 printf("CF-L3-01 (non_local_jump): %d\n", 4294967295);
 printf("CF-L3-02 (cpp_exception): %d\n", 10);
 printf("CF-L3-02 (cpp_exception): %d\n", 4294967295);
 printf("CF-L3-03 (large_jump_table): %d\n", 0);
 printf("CF-L3-04 (conditional_func_ptr): %d\n", 20);
 printf("CF-L3-05 (state_machine): %d\n", 1);
 printf("CF-L3-06 (fsm_func_table): %d\n", 3);
 v0 = computed_goto(1, 2);
 printf("CF-L3-07 (computed_goto): %d\n", v0);
 printf("CF-L3-08 (obfuscated_cf): %d\n", 20);
 printf("CF-L3-09 (opaque_predicate): %d\n", 20);
 printf("CF-L3-10 (overlapped_code): %d\n", 5);
 return 0;
}


// Function: sub_4022ea at 0x4022ea
int sub_4022ea()
{
 main();
 return 0;
}


// Function: main at 0x4022f0
unsigned int main()
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}


// Function: sub_402316 at 0x402316
void sub_402316()
{
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

void __do_global_ctors_aux()
{
 struct struct_0 *v2; // edx
 struct struct_0 *ptr; // edx
 unsigned int (*v4)(void); // eax
 unsigned int v5; // ebx
 struct struct_0 *v6; // ebx
 struct struct_0 *p; // ebx
 unsigned int v0; // [bp-0x8]
 typedef void (*ctor_func_t)(void);

 __x86_get_pc_thunk_dx();
 ptr = &v2->padding_0[323];
 v4 = (unsigned int (*)(void))*((int *)&ptr->padding_0[328]);
 if (*((int *)&ptr->padding_0[328]) == 0xffffffff)
 return;
 v0 = v5;
 v6 = &ptr->padding_0[328];
 do
 {
 p = v6;
 ((ctor_func_t)v4)();
 v4 = (unsigned int (*)(void))*((int *)&p->padding_0[4]);
 v6 = &p->padding_0[4];
 } while (*((int *)&p->padding_0[4]) != 0xffffffff);
 return;
}


// Function: sub_402362 at 0x402362
void sub_402362()
{
}



/* CRT stub function _fini removed by preprocessor */


