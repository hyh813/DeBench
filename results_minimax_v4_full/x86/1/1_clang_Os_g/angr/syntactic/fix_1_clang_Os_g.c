// Angr Decompilation of 1_clang_Os_g
// Platform: X86

#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>
#include <stdint.h>
#include <stdbool.h>

/* Forward declarations */

/* Function prototypes */
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
unsigned int loop_break(unsigned int i);
unsigned int loop_continue(unsigned int a0);
unsigned int goto_forward(unsigned int a0);
unsigned int goto_backward(unsigned int a0);
int ternary_op(unsigned int a0, unsigned int a1);
int test_control_flow_l1();
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
unsigned int call_func_ptr_array(unsigned int a0);
unsigned int double_value(unsigned int a0);
unsigned int triple_value(unsigned int a0);
unsigned int call_virtual_func(unsigned int a0, unsigned int a1);
unsigned int process_with_callback(unsigned int a0, unsigned int i, unsigned int *a2);
int test_control_flow_l2();
unsigned int non_local_jump(unsigned int a0);
unsigned int cpp_exception(unsigned int a0);
unsigned int large_jump_table(unsigned int a0, unsigned int a1, unsigned int a2);
int conditional_func_ptr(unsigned int a0, unsigned int a1);
unsigned int state_machine(unsigned int a0, unsigned int a1);
unsigned int fsm_func_table(unsigned int a0, unsigned int a1);
int state_idle(unsigned int a0);
unsigned int state_processing(unsigned int a0);
unsigned int state_done();
unsigned int state_error(unsigned int a0);
unsigned int computed_goto(unsigned int a0, unsigned int a1);
unsigned int obfuscated_cf(unsigned int a0);
unsigned int opaque_predicate(unsigned int a0);
unsigned int overlapped_code(unsigned int a0);
int test_control_flow_l3();
unsigned int main();

struct struct_0 {
 char padding_0[512];  // Minimal definition for pointer arithmetic
 char padding_3e77[512];  // Additional padding for field access
 char field_3ed7;  // Additional field
};
typedef struct struct_0 struct_0;
typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

extern struct struct_0 *g_404ff4;
extern unsigned int g_40204c;
extern unsigned int g_402640;
extern char g_4025d1[];
extern char g_4025f5[];
extern char g_402619[];

/* External function - appears to be a flag/comparison operation */
int _ccall(int a0, int a1, int a2, int a3, int a4);
int _setjmp(jmp_buf);
void longjmp(jmp_buf, int) __attribute__((noreturn));

/* Jump buffer for non-local jumps */
extern unsigned int jump_buffer;

/* CRT stub function _init removed by preprocessor */

void frame_dummy(void);
unsigned int __do_global_ctors_aux(void);

int _init(void)
{
 if (g_404ff4)
 ((void (*)(void))g_404ff4)();
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
 return 0;
}


// Function: sub_401090 at 0x401090
int sub_401090()
{
 return 0;
}


// Function: sub_401096 at 0x401096
void sub_401096()
{
}



/* CRT stub function _start removed by preprocessor */
void frame_dummy(void);

/* External symbol for PIC code */
extern char _GLOBAL_OFFSET_TABLE_[];


// Function: sub_4010cb at 0x4010cb
void sub_4010cb()
{
 // Unsupported operation - placeholder
}


// Function: sub_4010cc at 0x4010cc
void sub_4010cc()
{
 return;
}


// Function: __x86.get_pc_thunk_bx at 0x4010d0
void __x86.get_pc_thunk_bx()
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

void deregister_tm_clones(void) { return; }

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

unsigned int register_tm_clones()
{
 struct_0 *v2; // edx
 struct_0 *v3; // edx
 unsigned int v4; // ebx
 unsigned int v0; // [bp-0x8]

 __x86.get_pc_thunk_dx();
 v3 = (char *)&v2->field_3ed7 + 3;
 v0 = v4;
 if (!(&v3->padding_0[40] - &v3->padding_0[40] >> 31) + (&v3->padding_0[40] - &v3->padding_0[40] >> 2) >> 1)
 {
 return (&v3->padding_0[40] - &v3->padding_0[40] >> 31) + (&v3->padding_0[40] - &v3->padding_0[40] >> 2) >> 1;
 }
 else if (*((int *)&v3->padding_0[4]))
 {
 return (*((int *)&v3->padding_0[4]))(&v3->padding_0[40], (&v3->padding_0[40] - &v3->padding_0[40] >> 31) + (&v3->padding_0[40] - &v3->padding_0[40] >> 2) >> 1);
 }
 else
 {
 return (&v3->padding_0[40] - &v3->padding_0[40] >> 31) + (&v3->padding_0[40] - &v3->padding_0[40] >> 2) >> 1;
 }
}


// Function: sub_401167 at 0x401167
void sub_401167()
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

 v5 = __x86.get_pc_thunk_di(*((int *)&v2), &v3);
 ptr = &v6->padding_3e77[11];
 v1 = v8;
 v0 = v9;
 if (ptr->padding_0[40])
 return v5;
 if (*((int *)&ptr->padding_0[16]))
 sub_401090(*((int *)&ptr->padding_0[36]));
 v10 = &ptr->padding_0[320];
 v11 = *((int *)&ptr->padding_0[44]);
 i = (&ptr->padding_0[316] - v10 >> 2) - 1;
 if (*((int *)&ptr->padding_0[44]) < i)
 {
 do
 {
 v13 = v11 + 1;
 *((unsigned int *)&ptr->padding_0[44]) = v13;
 (*((int *)&v10->padding_0[4 * v13]))();
 v11 = *((int *)&ptr->padding_0[44]);
 } while (*((int *)&ptr->padding_0[44]) < i);
 }
 v14 = deregister_tm_clones();
 ptr->padding_0[40] = 1;
 return v14;
}


// Function: sub_4011fa at 0x4011fa
void sub_4011fa()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86.get_pc_thunk_dx at 0x401209
void __x86.get_pc_thunk_dx(void)
{
 return;
}


// Function: __x86.get_pc_thunk_di at 0x40120d
unsigned int __x86.get_pc_thunk_di(unsigned int a0)
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_401211 at 0x401211
void sub_401211(unsigned int a0, unsigned int a1, unsigned int a2)
{
 sequential_ops();
 return;
}


// Function: sequential_ops at 0x401214
int sequential_ops(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return (a1 + a0) * 2 - a2;
}


// Function: single_if at 0x401223
int single_if(unsigned int a0)
{
 return a0 << ((char)_ccall(15, 15, a0, 0, 0) & 31);
}


// Function: if_else at 0x40122f
int if_else(unsigned int a0)
{
 return a0 > 0;
}


// Function: nested_if_2 at 0x40123a
unsigned int nested_if_2(unsigned int a0, unsigned int a1)
{
 if (a1 < 0)
 a1 = 0;
 if (a0 > 0)
 return a1 + a0;
 return 0;
}


// Function: nested_if_deep at 0x401251
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


// Function: if_elseif_chain at 0x40128e
unsigned int if_elseif_chain(unsigned int a0)
{
 if (a0 < 3)
 return a0 * 10 + 10;
 return 4294967295;
}


// Function: if_elseif_long at 0x4012a3
unsigned int if_elseif_long(unsigned int a0)
{
 if (a0 >= 5)
 return 4294967295;
 return a0 * 100 + 100;
}


// Function: switch_small at 0x4012b7
unsigned int switch_small(unsigned int a0)
{
 unsigned int (*func)(void);
 if (a0 > 3)
 return 4294967295;
 func = *(unsigned int (**)(void))(&_GLOBAL_OFFSET_TABLE_[10656 + 4 * a0]);
 return func();
}


// Function: switch_large at 0x4012d8
unsigned int switch_large(unsigned int a0)
{
 if (a0 < 10)
 return a0 * 10;
 return 4294967295;
}


// Function: switch_default at 0x4012ec
unsigned int switch_default(unsigned int a0)
{
 if (a0 - 1 >= 3)
 return 0;
 return (a0 - 1) * 100 + 100;
}


// Function: switch_fallthrough at 0x401300
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


// Function: loop_for_fixed at 0x401324
unsigned int loop_for_fixed(unsigned int a0)
{
 if (a0 <= 0)
 return 0;
 return (unsigned int)((((uint64_t)(a0 - 1) * (a0 - 2)) * 0x80000000ULL >> 32) + a0 - 1);
}


// Function: loop_while at 0x401340
unsigned int loop_while(unsigned int a0)
{
 unsigned int result; // esi
 unsigned int v1; // ecx
 unsigned int v2; // ecx
 unsigned int v3; // ecx

 result = a0;
 if (!result)
 return 1;
 v1 = 0;
 do
 {
 v3 = v1 + 1;
 result = (result * 1717986919 >> 34) + (result * 1717986919 >> 63);
 v1 = v3;
 } while (result + 9 > 18);
 return v2 + 1;
}


// Function: loop_dowhile at 0x401374
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


// Function: loop_nested at 0x40139f
unsigned int loop_nested(unsigned int a0, unsigned int a1)
{
 if (a1 <= 0)
 a1 = 0;
 if (a0 > 0)
 return a0 * a1;
 return 0;
}


// Function: loop_break at 0x4013b7
unsigned int loop_break(unsigned int i)
{
 unsigned int v0; // eax
 unsigned int v1; // ecx

 v0 = 0;
 v1 = 0;
 while (v1 != i)
 {
 v0 += 1;
 v1 += 1;
 if (v0 == 5)
 return 4294967295;
 }
 return v0;
}


// Function: loop_continue at 0x4013e4
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


// Function: goto_forward at 0x40140f
unsigned int goto_forward(unsigned int a0)
{
 unsigned int v0; // ecx
 unsigned int result; // eax
 unsigned int v2; // eax

 v0 = a0;
 result = 1;
 if ((char)_ccall(15, 15, v0, 0, 0))
 v2 = v0;
 else
 v2 = result;
 return v0 * v2 * 2;
}


// Function: goto_backward at 0x401421
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


// Function: ternary_op at 0x401445
int ternary_op(unsigned int a0, unsigned int a1)
{
 if (a0 <= a1)
 return a1;
 return a0;
}


// Function: test_control_flow_l1 at 0x401453
extern char g_4025d1;

int test_control_flow_l1()
{
 unsigned int v0; // [bp-0x18]

 puts(g_4025d1);
 v0 = 21;
 printf("CF-L1-01 (sequential_ops): %d\n", sequential_ops(10, 11, 1));
 v0 = 20;
 printf("CF-L1-02 (single_if): %d\n", single_if(20));
 v0 = 4294967291;
 printf("CF-L1-02 (single_if): %d\n", single_if(4294967291U));
 v0 = 1;
 printf("CF-L1-03 (if_else): %d\n", if_else(1));
 v0 = 0;
 printf("CF-L1-03 (if_else): %d\n", if_else(0));
 v0 = 15;
 printf("CF-L1-04 (nested_if_2): %d\n", nested_if_2(15, 10));
 v0 = 10;
 printf("CF-L1-04 (nested_if_2): %d\n", nested_if_2(10, 5));
 v0 = 0;
 printf("CF-L1-04 (nested_if_2): %d\n", nested_if_2(0, 0));
 v0 = 5;
 printf("CF-L1-05 (nested_if_deep): %d\n", nested_if_deep(1, 2, 3, 4, 5));
 v0 = 20;
 printf("CF-L1-06 (if_elseif_chain): %d\n", if_elseif_chain(20));
 v0 = 400;
 printf("CF-L1-07 (if_elseif_long): %d\n", if_elseif_long(400));
 v0 = 50;
 printf("CF-L1-08 (switch_small): %d\n", switch_small(2));
 v0 = 70;
 printf("CF-L1-09 (switch_large): %d\n", switch_large(12));
 v0 = 0;
 printf("CF-L1-10 (switch_default): %d\n", switch_default(0));
 v0 = 21;
 printf("CF-L1-11 (switch_fallthrough): %d\n", switch_fallthrough(1));
 v0 = 45;
 printf("CF-L1-12 (loop_for_fixed): %d\n", loop_for_fixed(10));
 v0 = 5;
 printf("CF-L1-13 (loop_while): %d\n", loop_while(5));
 v0 = 4;
 printf("CF-L1-14 (loop_dowhile): %d\n", loop_dowhile(4));
 v0 = 12;
 printf("CF-L1-15 (loop_nested): %d\n", loop_nested(3, 4));
 v0 = 2;
 printf("CF-L1-16 (loop_break): %d\n", loop_break(2));
 v0 = 4294967295;
 printf("CF-L1-16 (loop_break): %d\n", loop_break(10));
 v0 = 25;
 printf("CF-L1-17 (loop_continue): %d\n", loop_continue(25));
 v0 = 50;
 printf("CF-L1-18 (goto_forward): %d\n", goto_forward(50));
 v0 = 4294967290;
 printf("CF-L1-18 (goto_forward): %d\n", goto_forward(6));
 v0 = 120;
 printf("CF-L1-19 (goto_backward): %d\n", goto_backward(5));
 v0 = 10;
 printf("CF-L1-20 (ternary_op): %d\n", ternary_op(10, 5));
 v0 = 8;
 return printf("CF-L1-20 (ternary_op): %d\n", ternary_op(8, 12));
}


// Function: loop_multi_exit at 0x401695
extern unsigned int g_40204c;

unsigned int loop_multi_exit(unsigned int a0)
{
 unsigned int v0; // ecx
 unsigned int v1; // edx
 unsigned int i; // edi
 unsigned int v3; // ebx

 v0 = 0;
 v1 = &g_40204c;
 i = 0;
 do
 {
 v3 = 0;
 do
 {
 if (*((int *)(v1 + v3 * 4)) == a0)
 return v3 - v0;
 } while ((v3 += 1, v3 != 4));
 i += 1;
 v0 -= 10;
 v1 += 16;
 } while (i != 3);
 return 4294967295;
}


// Function: infinite_loop at 0x4016d8
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


// Function: multi_return at 0x4016f9
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


// Function: conditional_return at 0x40171c
unsigned int conditional_return(unsigned int a0)
{
 if (!((char)_ccall(15, 15, a0, 0, 0)))
 return -(a0);
 return a0 * 2;
}


// Function: duffs_device at 0x40172d

unsigned int duffs_device(unsigned int *a0, unsigned int *a1, unsigned int a2)
{
 unsigned int *iter; // edx
 unsigned int *cur; // esi
 unsigned int v2; // eax

 iter = a1;
 cur = a0;
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
LABEL_401777:
 iter += 1;
 *(cur) = *(iter);
 cur += 1;
LABEL_401781:
 iter += 1;
 *(cur) = *(iter);
 cur += 1;
LABEL_40178b:
 iter += 1;
 *(cur) = *(iter);
 cur += 1;
LABEL_401795:
 iter += 1;
 *(cur) = *(iter);
 cur += 1;
LABEL_40179f:
 iter += 1;
 *(cur) = *(iter);
 cur += 1;
LABEL_4017a9:
 iter += 1;
 *(cur) = *(iter);
 cur += 1;
 v2 -= 1;
 } while (v2 > 1);
 return a2;
 case 1:
 goto LABEL_4017a9;
 case 2:
 goto LABEL_40179f;
 case 3:
 goto LABEL_401795;
 case 4:
 goto LABEL_40178b;
 case 5:
 goto LABEL_401781;
 case 6:
 goto LABEL_401777;
 case 7:
 break;
 default:
 return 4294967295;
 }
}


// Function: loop_complex_cond at 0x4017c3
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


// Function: loop_modify_var at 0x4017f7
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


// Function: loop_external_state at 0x40181c
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


// Function: recursion_factorial at 0x401833
unsigned int recursion_factorial(unsigned int a0)
{
 unsigned int i; // ecx
 unsigned int v1; // eax

 i = a0;
 v1 = 1;
 if (i >= 2)
 {
 do
 {
 v1 *= i;
 i -= 1;
 } while (i > 2);
 }
 return v1;
}


// Function: tail_recursion at 0x40184d
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


// Function: indirect_recursion_a at 0x401868
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


// Function: call_func_ptr at 0x4018a7
int call_func_ptr(unsigned int (*a0)(unsigned int), unsigned int a1)
{
 return a0(a1);
}


// Function: call_func_ptr_array at 0x4018c7

unsigned int call_func_ptr_array(unsigned int a0)
{
 unsigned int v0 = 0; // [bp+0x8]

 return (a0 <= 2 ? (*(unsigned int (*)(unsigned int))(&_GLOBAL_OFFSET_TABLE_[312 + 4 * a0]))(v0) : 4294967295);
}


// Function: double_value at 0x4018f8
unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: triple_value at 0x4018ff
unsigned int triple_value(unsigned int a0)
{
 return a0 * 3;
}


// Function: call_virtual_func at 0x401907
unsigned int call_virtual_func(unsigned int a0, unsigned int a1)
{
 return a1 * 2;
}


// Function: process_with_callback at 0x40190e
unsigned int process_with_callback(unsigned int a0, unsigned int i, unsigned int *a2)
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


// Function: test_control_flow_l2 at 0x401950
extern unsigned int g_40204c;
extern unsigned int g_402640;

int test_control_flow_l2()
{
 unsigned int v5; // edx
 unsigned int v6; // esi
 unsigned int v15; // eax
 unsigned int v16; // eax
 unsigned int v7; // edi
 unsigned int v8; // eax
 unsigned int *i; // esi
 unsigned int flag1; // ecx
 char *cur; // edi
 unsigned int v12; // ecx
 unsigned int v13; // edx
 unsigned int v14; // eax
 unsigned int v0; // [bp-0x58]
 unsigned int result; // [bp-0x54]
 unsigned int v2[8]; // [bp-0x50]
 unsigned int v3[8]; // [bp-0x30]

 puts(g_4025f5);
 v5 = &g_40204c;
 v6 = 0;
 while (true)
 {
 v7 = 0;
 do
 {
 if (*((int *)(v5 + v7 * 4)) == 7)
 goto LABEL_4019a2;
 } while ((v7 += 1, v7 != 4));
 v6 += 1;
 v5 += 16;
 if (v6 == 3)
 {
LABEL_4019a2:
 printf("CF-L2-01 (loop_multi_exit): %d\n");
 v0 = 0;
 v8 = 0;
 do
 {
 if (v0 == 1)
 goto LABEL_4019dd;
 } while ((v8 += 1, v8 != 1001));
 v0 = 1;
LABEL_4019dd:
 printf("CF-L2-02 (infinite_loop): %d\n");
 printf("CF-L2-03 (multi_return): %d\n");
 printf("CF-L2-03 (multi_return): %d\n");
 printf("CF-L2-03 (multi_return): %d\n");
 printf("CF-L2-04 (conditional_return): %d\n");
 printf("CF-L2-04 (conditional_return): %d\n");
 i = &g_402640;
 flag1 = 8;
 cur = (char *)v3;
 for (; flag1; i += 1)
 {
 flag1 -= 1;
 *((unsigned int *)cur) = *(i);
 cur += 1;
 }
 duffs_device(&v2, &v3, 8);
 printf("CF-L2-05 (duffs_device): %d\n");
 v12 = 4294967295;
 v13 = 11;
 v14 = 10;
 do
 {
 v15 = v14 + 2;
 } while (v14 - 8 < v13 - 2 && (v12 += 1, v13 -= 1, v14 = v15, v12 < 9));
 printf("CF-L2-06 (loop_complex_cond): %d\n");
 printf("CF-L2-07 (loop_modify_var): %d\n");
 result = 0;
 v16 = 0;
 do
 {
 if (result)
 goto LABEL_401aca;
 } while ((v16 += 1, v16 != 101));
LABEL_401aca:
 printf("CF-L2-08 (loop_external_state): %d\n");
 printf("CF-L2-09 (recursion_factorial): %d\n");
 printf("CF-L2-10 (tail_recursion): %d\n");
 printf("CF-L2-11 (indirect_recursion): %d\n");
 printf("CF-L2-12 (call_func_ptr): %d\n");
 printf("CF-L2-13 (call_func_ptr_array): %d\n");
 printf("CF-L2-13 (call_func_ptr_array): %d\n");
 return printf("CF-L2-15 (process_with_callback): %d\n");
 }
 }
}


// Function: non_local_jump at 0x401b58
extern unsigned int jump_buffer;

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


// Function: cpp_exception at 0x401bb6
unsigned int cpp_exception(unsigned int a0)
{
 unsigned int v0; // eax

 v0 = a0 * 2;
 if (a0 >= 101)
 v0 = 4294967294;
 if (a0 < 0)
 return 4294967295;
 return v0;
}


// Function: large_jump_table at 0x401bd1

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


// Function: op_add at 0x401c09
int op_add(unsigned int a0, unsigned int a1)
{
 return a1 + a0;
}


// Function: op_sub at 0x401c12
int op_sub(unsigned int a0, unsigned int a1)
{
 return a0 - a1;
}


// Function: op_mul at 0x401c1b
int op_mul(unsigned int a0, unsigned int a1)
{
 return a0 * a1;
}


// Function: op_div at 0x401c25
unsigned int op_div(unsigned int a0, unsigned int a1)
{
 if (!a1)
 return 0;
 return a0 / a1;
}


// Function: op_mod at 0x401c38
unsigned int op_mod(unsigned int a0, unsigned int a1)
{
 if (!a1)
 return 0;
 return a0 % a1;
}


// Function: op_and at 0x401c4d
unsigned int op_and(unsigned int a0, unsigned int a1)
{
 return a1 & a0;
}


// Function: op_or at 0x401c56
unsigned int op_or(unsigned int a0, unsigned int a1)
{
 return a1 | a0;
}


// Function: op_xor at 0x401c5f
int op_xor(unsigned int a0, unsigned int a1)
{
 return a1 ^ a0;
}


// Function: op_shl at 0x401c68
int op_shl(unsigned int a0, char a1)
{
 return a0 << (a1 & 31);
}


// Function: op_shr at 0x401c73
int op_shr(unsigned int a0, char a1)
{
 return a0 >> (a1 & 31);
}


// Function: conditional_func_ptr at 0x401c7e
int conditional_func_ptr(unsigned int a0, unsigned int a1)
{
 unsigned int v1; // eax
 unsigned int *v2; // esi
 unsigned int *v3; // ecx
 unsigned int *v4; // ecx
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
 return v4();
}


// Function: state_machine at 0x401cbd

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


// Function: fsm_func_table at 0x401d0b

unsigned int fsm_func_table(unsigned int a0, unsigned int a1)
{
 return (a1 <= 3 ? (*(unsigned int (*)(unsigned int))(&_GLOBAL_OFFSET_TABLE_[260 + 4 * a1]))(a0) : 3);
}


// Function: state_idle at 0x401d3e
int state_idle(unsigned int a0)
{
 return a0 == 1;
}


// Function: state_processing at 0x401d49
unsigned int state_processing(unsigned int a0)
{
 if (a0 != 2)
 return (a0 == 99) * 2 + 1;
 return 2;
}


// Function: state_done at 0x401d5f
unsigned int state_done()
{
 return 2;
}


// Function: state_error at 0x401d65
unsigned int state_error(unsigned int a0)
{
 return (a0) * 3;
}


// Function: computed_goto at 0x401d73

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


// Function: obfuscated_cf at 0x401da8
unsigned int obfuscated_cf(unsigned int a0)
{
 return a0 * 2;
}


// Function: opaque_predicate at 0x401daf
unsigned int opaque_predicate(unsigned int a0)
{
 return a0 * 2;
}


// Function: overlapped_code at 0x401db6
unsigned int overlapped_code(unsigned int a0)
{
 if (((char)a0 & 1))
 return a0 * 3 + 1;
 return (a0 >> 31) + a0 >> 1;
}


// Function: test_control_flow_l3 at 0x401dce
extern char g_402619;

int test_control_flow_l3()
{
 puts(g_402619);
 non_local_jump(5);
 printf("CF-L3-01 (non_local_jump): %d\n");
 non_local_jump(4294967291);
 printf("CF-L3-01 (non_local_jump): %d\n");
 printf("CF-L3-02 (cpp_exception): %d\n");
 printf("CF-L3-02 (cpp_exception): %d\n");
 printf("CF-L3-03 (large_jump_table): %d\n");
 printf("CF-L3-04 (conditional_func_ptr): %d\n");
 printf("CF-L3-05 (state_machine): %d\n");
 printf("CF-L3-06 (fsm_func_table): %d\n");
 computed_goto("CF-L3-06 (fsm_func_table): %d\n", 2);
 printf("CF-L3-07 (computed_goto): %d\n");
 printf("CF-L3-08 (obfuscated_cf): %d\n");
 printf("CF-L3-09 (opaque_predicate): %d\n");
 return printf("CF-L3-10 (overlapped_code): %d\n");
}


// Function: main at 0x401efc
unsigned int main()
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}


// Function: sub_401f22 at 0x401f22
void sub_401f22()
{
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

 __x86.get_pc_thunk_dx();
 ptr = (struct_0 *)((char *)v2 + 324);
 v4 = *((int *)&ptr->padding_0[4]);
 if (*((int *)&ptr->padding_0[4]) == 0xffffffff)
 return 4294967295;
 v0 = v5;
 v6 = &ptr->padding_0[4];
 do
 {
 p = v6;
 v4();
 v4 = *((int *)&p->padding_0[4]);
 v6 = &p->padding_0[4];
 } while (*((int *)&p->padding_0[4]) != 0xffffffff);
 return 4294967295;
}


// Function: sub_401f72 at 0x401f72
void sub_401f72()
{
}



/* CRT stub function _fini removed by preprocessor */


