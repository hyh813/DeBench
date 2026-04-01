// Decompiled by BinaryAI
// SHA256: 9d2c38a3a9a9d5fe78f2e4d0ef767e1616299f9de8bac84c5a4e86c02f6f2f0f

#include <setjmp.h>
#include <stdbool.h>

typedef unsigned int uint;
typedef long long longlong;
typedef unsigned long long ulonglong;

// Forward declarations
extern unsigned int main(void);
extern int completed_0;
extern void stack0x00000004;
extern void *__dso_handle;
extern void __gmon_start__(void);
extern unsigned int __aeabi_ldiv0(unsigned int);
extern unsigned int __aeabi_idivmod(uint,uint);

extern unsigned int op_add(int,int);
extern unsigned int op_sub(int,int);
extern unsigned int op_mul(int,int);
extern unsigned int op_div(unsigned int,int);
extern unsigned int op_mod(unsigned int,int);
extern uint op_and(uint,uint);
extern uint op_or(uint,uint);
extern uint op_xor(uint,uint);
extern unsigned int op_shl(int,uint);
extern unsigned int op_shr(int,uint);
extern bool state_idle(int);
extern int state_processing(int);
extern unsigned int state_done(void);
extern int state_error(int);
#define SCARRY4(x, y) (((int)(x) ^ (int)(y)) < 0 && ((int)(x) < 0) == ((int)((x) + (y)) < 0))

// LZCOUNT - Count Leading Zeros
static inline uint LZCOUNT(uint x)
{
    uint n = 0;
    if (x == 0) return 32;
    if ((x & 0xFFFF0000) == 0) { n += 16; x <<= 16; }
    if ((x & 0xFF000000) == 0) { n += 8; x <<= 8; }
    if ((x & 0xF0000000) == 0) { n += 4; x <<= 4; }
    if ((x & 0xC0000000) == 0) { n += 2; x <<= 2; }
    if ((x & 0x80000000) == 0) { n += 1; }
    return n;
}

extern unsigned int DAT_00011988[16];
extern unsigned int DAT_00011974[5];
extern unsigned int UNK_00011f7c[4];
unsigned int UNK_00011f7c[4] = {50, 70, 20, 0xffffffff};
extern unsigned int DAT_00011f0d;
extern unsigned int DAT_00011f31;
extern unsigned int DAT_00011f55;
extern unsigned int DAT_00022ebc[4];
unsigned int DAT_00022ebc[4] = {0, 0, 0, 0};
extern unsigned int PTR_op_add_00022ec8[10];
extern unsigned int PTR_state_idle_00022ef0[4];
extern jmp_buf jump_buffer;

// Data definitions
unsigned int DAT_00011988[16] = {7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7};
unsigned int DAT_00011974[5] = {1, 2, 3, 4, 5};
unsigned int PTR_op_add_00022ec8[10] = {
    (unsigned int)op_add,
    (unsigned int)op_sub,
    (unsigned int)op_mul,
    (unsigned int)op_div,
    (unsigned int)op_mod,
    (unsigned int)op_and,
    (unsigned int)op_or,
    (unsigned int)op_xor,
    (unsigned int)op_shl,
    (unsigned int)op_shr
};
unsigned int PTR_state_idle_00022ef0[4] = {
    (unsigned int)state_idle,
    (unsigned int)state_processing,
    (unsigned int)state_done,
    (unsigned int)state_error
};

// Function: <EXTERNAL>::raise @ 0x104f0
int raise(int __sig)
{
 return raise(__sig);
}





// Function: <EXTERNAL>::printf @ 0x10514
int printf(char *__format,...)
{
 return printf(__format, (&__format)+1);
}

// Function: <EXTERNAL>::longjmp @ 0x10520
void longjmp(jmp_buf __env,int __val)
{
 longjmp(__env,__val);
}

// Function: <EXTERNAL>::_setjmp @ 0x1052c
int _setjmp(jmp_buf __env)
{
 int iVar1;
 iVar1 = _setjmp(__env);
 return iVar1;
}

// Function: <EXTERNAL>::puts @ 0x10538
int puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::abort @ 0x10550
void abort(void)
{
 __builtin_trap();
}











// Function: sequential_ops @ 0x106c4
int sequential_ops(int param_1,int param_2,int param_3)
{
 return (param_2 + param_1) * 2 - param_3;
}

// Function: single_if @ 0x106d0
int single_if(int param_1)
{
 return param_1 << (uint)(0 < param_1);
}

// Function: if_else @ 0x106e4
bool if_else(int param_1)
{
 return 0 < param_1;
}

// Function: nested_if_2 @ 0x106f8
int nested_if_2(int param_1,int param_2)
{
 int iVar1;
 iVar1 = param_1;
 if (0 < param_2) {
 iVar1 = param_1 + param_2;
 }
 if (param_1 < 1) {
 iVar1 = 0;
 }
 return iVar1;
}

// Function: nested_if_deep @ 0x10714
unsigned int nested_if_deep(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 unsigned int uVar1;
 if (param_1 < 1) {
 return 0;
 }
 if (param_2 < 1) {
 return 1;
 }
 if (param_3 < 1) {
 return 2;
 }
 if (0 < param_4) {
 uVar1 = 4;
 if (0 < param_5) {
 uVar1 = 5;
 }
 return uVar1;
 }
 return 3;
}

// Function: if_elseif_chain @ 0x10758
int if_elseif_chain(uint param_1)
{
 int iVar1;
 iVar1 = -1;
 if (param_1 < 3) {
 iVar1 = param_1 * 10 + 10;
 }
 return iVar1;
}

// Function: if_elseif_long @ 0x10774
int if_elseif_long(uint param_1)
{
 int iVar1;
 iVar1 = -1;
 if (param_1 < 5) {
 iVar1 = param_1 * 100 + 100;
 }
 return iVar1;
}

// Function: switch_small @ 0x10790
unsigned int switch_small(uint param_1)
{
 unsigned int uVar1;
 uVar1 = 0xffffffff;
 if (param_1 < 4) {
 uVar1 = *(unsigned int *)(&UNK_00011f7c + param_1 * 4);
 }
 return uVar1;
}

// Function: switch_large @ 0x107b0
int switch_large(uint param_1)
{
 int iVar1;
 iVar1 = -1;
 if (param_1 < 10) {
 iVar1 = param_1 * 10;
 }
 return iVar1;
}

// Function: switch_default @ 0x107c8
int switch_default(int param_1)
{
 int iVar1;
 iVar1 = 0;
 if (param_1 - 1U < 3) {
 iVar1 = (param_1 - 1U) * 100 + 100;
 }
 return iVar1;
}

// Function: switch_fallthrough @ 0x107e4
int switch_fallthrough(int param_1)
{
 int iVar1;
 iVar1 = 0;
 if (param_1 != 1) {
 if (param_1 != 2) {
 if (param_1 != 3) {
 return -1;
 }
 iVar1 = 0xc;
 }
 iVar1 = iVar1 + param_1 * 2;
 }
 return iVar1 + param_1;
}

// Function: loop_for_fixed @ 0x10818
int loop_for_fixed(int param_1)
{
 longlong lVar1;
 if (0 < param_1) {
 lVar1 = (ulonglong)(param_1 - 2) * (ulonglong)(param_1 - 1);
 return ((uint)((unsigned char)((ulonglong)lVar1 >> 0x20) & 1) << 0x1f | (uint)lVar1 >> 1) + param_1 + -1;
 }
 return 0;
}

// Function: loop_while @ 0x10848
int loop_while(int param_1)
{
 int iVar1;
 uint uVar2;
 if (param_1 == 0) {
 iVar1 = 0;
 }
 else {
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 uVar2 = param_1 + 9;
 param_1 = param_1 / 10;
 } while (0x12 < uVar2);
 }
 if (iVar1 == 0) {
 iVar1 = 1;
 }
 return iVar1;
}

// Function: loop_dowhile @ 0x10894
int loop_dowhile(int param_1)
{
 int iVar1;
 uint uVar2;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 uVar2 = param_1 + 9;
 param_1 = param_1 / 10;
 } while (0x12 < uVar2);
 return iVar1;
}

// Function: loop_nested @ 0x108c8
int loop_nested(int param_1,uint param_2)
{
 int iVar1;
 iVar1 = 0;
 if (0 < param_1) {
 iVar1 = (param_2 & ~((int)param_2 >> 0x1f)) * param_1;
 }
 return iVar1;
}

// Function: loop_break @ 0x108e0
int loop_break(int param_1)
{
 int iVar1;
 iVar1 = 0;
 do {
 if ((&DAT_00011974)[iVar1] == param_1) {
 return iVar1;
 }
 iVar1 = iVar1 + 1;
 } while (iVar1 != 5);
 return -1;
}

// Function: loop_continue @ 0x10914
int loop_continue(uint param_1)
{
 int iVar1;
 uint uVar2;
 if (0 < (int)param_1) {
 uVar2 = 0;
 iVar1 = 0;
 do {
 uVar2 = uVar2 + 1;
 if ((uVar2 & 1) != 0) {
 iVar1 = iVar1 + uVar2;
 }
 } while (param_1 != uVar2);
 return iVar1;
 }
 return 0;
}

// Function: goto_forward @ 0x1094c
int goto_forward(int param_1)
{
 int iVar1;
 iVar1 = param_1;
 if (param_1 < 2) {
 iVar1 = 1;
 }
 return param_1 * iVar1 * 2;
}

// Function: goto_backward @ 0x10964
int goto_backward(int param_1)
{
 int iVar1;
 int iVar2;
 if (0 < param_1) {
 iVar2 = 1;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 iVar2 = iVar1 * iVar2;
 } while (param_1 != iVar1);
 return iVar2;
 }
 return 1;
}

// Function: ternary_op @ 0x10994
int ternary_op(int param_1,int param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: test_control_flow_l1 @ 0x109a0
void test_control_flow_l1(void)
{
 puts(&DAT_00011f0d);
 printf("CF-L1-01 (sequential_ops): %d\n",0x15);
 printf("CF-L1-02 (single_if): %d\n",0x14);
 printf("CF-L1-02 (single_if): %d\n",0xfffffffb);
 printf("CF-L1-03 (if_else): %d\n",1);
 printf("CF-L1-03 (if_else): %d\n",0);
 printf("CF-L1-04 (nested_if_2): %d\n",0xf);
 printf("CF-L1-04 (nested_if_2): %d\n",10);
 printf("CF-L1-04 (nested_if_2): %d\n",0);
 printf("CF-L1-05 (nested_if_deep): %d\n",5);
 printf("CF-L1-06 (if_elseif_chain): %d\n",0x14);
 printf("CF-L1-07 (if_elseif_long): %d\n",400);
 printf("CF-L1-08 (switch_small): %d\n",0x32);
 printf("CF-L1-09 (switch_large): %d\n",0x46);
 printf("CF-L1-10 (switch_default): %d\n",0);
 printf("CF-L1-11 (switch_fallthrough): %d\n",0x15);
 printf("CF-L1-12 (loop_for_fixed): %d\n",0x2d);
 printf("CF-L1-13 (loop_while): %d\n",5);
 printf("CF-L1-14 (loop_dowhile): %d\n",4);
 printf("CF-L1-15 (loop_nested): %d\n",0xc);
 printf("CF-L1-16 (loop_break): %d\n",2);
 printf("CF-L1-16 (loop_break): %d\n",0xffffffff);
 printf("CF-L1-17 (loop_continue): %d\n",0x19);
 printf("CF-L1-18 (goto_forward): %d\n",0x32);
 printf("CF-L1-18 (goto_forward): %d\n",0xfffffffa);
 printf("CF-L1-19 (goto_backward): %d\n",0x78);
 printf("CF-L1-20 (ternary_op): %d\n",10);
 printf("CF-L1-20 (ternary_op): %d\n",8);
 return;
}

// Function: loop_multi_exit @ 0x10bb8
int loop_multi_exit(int param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 unsigned int *puVar5;
 int in_lr;
 bool bVar6;
 iVar2 = 0;
 puVar5 = &DAT_00011988;
 do {
 iVar4 = 1;
 bVar6 = true;
 iVar3 = 0;
 if ((&DAT_00011988)[iVar2 * 4] != param_1) {
 iVar1 = 1;
 do {
 iVar3 = iVar1;
 if (iVar3 == 4) goto LAB_00010c44;
 iVar1 = iVar3 + 1;
 } while (puVar5[iVar3] != param_1);
 bVar6 = iVar3 - 1U < 3;
 }
 in_lr = iVar3 + iVar2 * 10;
 if (bVar6) goto LAB_00010c58;
LAB_00010c44:
 puVar5 = puVar5 + 4;
 iVar2 = iVar2 + 1;
 } while (iVar2 != 3);
 iVar4 = 2;
LAB_00010c58:
 if (iVar4 == 2) {
 in_lr = -1;
 }
 return in_lr;
}

// Function: infinite_loop @ 0x10c70
void infinite_loop(int *param_1)
{
 int iVar1;
 iVar1 = 0;
 do {
 if (*param_1 == 1) {
 return;
 }
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x3e9);
 *param_1 = 1;
 return;
}

// Function: multi_return @ 0x10ca8
int multi_return(uint param_1)
{
 int iVar1;
 if ((int)param_1 < 0) {
 return -1;
 }
 if ((int)param_1 < 0x33) {
 iVar1 = param_1 + 1;
 if ((param_1 & 1) == 0) {
 iVar1 = param_1 << 1;
 }
 return iVar1;
 }
 return -2;
}

// Function: conditional_return @ 0x10cd4
int conditional_return(int param_1)
{
 int iVar1;
 iVar1 = -param_1;
 if (0 < param_1) {
 iVar1 = param_1 << 1;
 }
 return iVar1;
}

// Function: duffs_device @ 0x10ce8
int duffs_device(unsigned int *param_1,unsigned int *param_2,int param_3)
{
 unsigned int *puVar1;
 unsigned int *puVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 iVar3 = -1;
 if (0 < param_3) {
 iVar5 = (int)(param_3 + 7 + ((uint)(param_3 + 7 >> 0x1f) >> 0x1d)) >> 3;
 puVar1 = param_1;
 puVar2 = param_2;
 iVar3 = param_3;
 iVar4 = iVar5;
 switch(param_3 % 8) {
 case 0:
 do {
 puVar2 = param_2 + 1;
 puVar1 = param_1 + 1;
 *param_1 = *param_2;
switchD_00010d28_caseD_7:
 param_2 = puVar2 + 1;
 param_1 = puVar1 + 1;
 *puVar1 = *puVar2;
switchD_00010d28_caseD_6:
 puVar2 = param_2 + 1;
 puVar1 = param_1 + 1;
 *param_1 = *param_2;
switchD_00010d28_caseD_5:
 param_2 = puVar2 + 1;
 param_1 = puVar1 + 1;
 *puVar1 = *puVar2;
switchD_00010d28_caseD_4:
 puVar2 = param_2 + 1;
 puVar1 = param_1 + 1;
 *param_1 = *param_2;
switchD_00010d28_caseD_3:
 param_2 = puVar2 + 1;
 param_1 = puVar1 + 1;
 *puVar1 = *puVar2;
switchD_00010d28_caseD_2:
 puVar2 = param_2 + 1;
 puVar1 = param_1 + 1;
 *param_1 = *param_2;
 iVar4 = iVar5;
switchD_00010d28_caseD_1:
 param_2 = puVar2 + 1;
 param_1 = puVar1 + 1;
 *puVar1 = *puVar2;
 iVar5 = iVar4 + -1;
 } while (iVar5 != 0 && 0 < iVar4);
 break;
 case 1:
 goto switchD_00010d28_caseD_1;
 case 2:
 goto switchD_00010d28_caseD_2;
 case 3:
 goto switchD_00010d28_caseD_3;
 case 4:
 goto switchD_00010d28_caseD_4;
 case 5:
 goto switchD_00010d28_caseD_5;
 case 6:
 goto switchD_00010d28_caseD_6;
 case 7:
 goto switchD_00010d28_caseD_7;
 }
 }
 return iVar3;
}

// Function: loop_complex_cond @ 0x10da4
int loop_complex_cond(int param_1)
{
 int iVar1;
 int iVar2;
 uint uVar3;
 uint uVar4;
 bool bVar5;
 if (param_1 < 1) {
 iVar1 = 0;
 uVar4 = 0;
 }
 else {
 iVar1 = 0;
 iVar2 = param_1;
 uVar3 = 0;
 do {
 iVar1 = iVar1 + 2;
 uVar4 = uVar3 + 1;
 param_1 = iVar2 + -1;
 if ((iVar2 < 2) || (param_1 <= iVar1)) break;
 bVar5 = uVar3 < 9;
 iVar2 = param_1;
 uVar3 = uVar4;
 } while (bVar5);
 }
 return param_1 + iVar1 + uVar4;
}

// Function: loop_modify_var @ 0x10dfc
int loop_modify_var(int param_1)
{
 int iVar1;
 int iVar2;
 if (0 < param_1) {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar2 + iVar1;
 if (5 < iVar2) {
 iVar2 = iVar2 + 2;
 }
 iVar2 = iVar2 + 1;
 } while (iVar2 < param_1);
 return iVar1;
 }
 return 0;
}

// Function: loop_external_state @ 0x10e38
int loop_external_state(int *param_1)
{
 int iVar1;
 iVar1 = 0;
 do {
 if (*param_1 != 0) {
 return iVar1;
 }
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x65);
 return 0x65;
}

// Function: recursion_factorial @ 0x10e60
int recursion_factorial(int param_1)
{
 int iVar1;
 iVar1 = 1;
 if (1 < param_1) {
 iVar1 = recursion_factorial(param_1 + -1);
 iVar1 = iVar1 * param_1;
 }
 return iVar1;
}

// Function: tail_recursion @ 0x10e8c
int tail_recursion(int param_1,int param_2)
{
 if (1 < param_1) {
 param_2 = tail_recursion(param_1 + -1,param_2 * param_1);
 }
 return param_2;
}

// Function: indirect_recursion_a @ 0x10eb8
unsigned int indirect_recursion_a(uint param_1,int param_2)
{
 int iVar1;
 unsigned int uVar1;
 if (0 < param_2) {
 if ((param_1 & 1) == 0) {
 if (param_2 < 2) {
 return param_1;
 }
 iVar1 = (int)param_1 / 2 + 1;
 }
 else {
 if (param_2 < 2) {
 return param_1;
 }
 iVar1 = param_1 * 3 + 2;
 }
 uVar1 = indirect_recursion_a(iVar1,param_2 + -2);
 return uVar1;
 }
 return param_1;
}

// Function: call_func_ptr @ 0x10f08
unsigned int call_func_ptr(void *param_1,unsigned int param_2)
{
 return (*(unsigned int (*)(unsigned int))param_1)(param_2);
}

// Function: call_func_ptr_array @ 0x10f24
unsigned int call_func_ptr_array(uint param_1,unsigned int param_2)
{
 unsigned int uVar1;
 if (2 < param_1) {
 return 0xffffffff;
 }
 uVar1 = (*(unsigned int (*)(unsigned int))(&DAT_00022ebc[param_1]))(param_2);
 return uVar1;
}

// Function: double_value @ 0x10f5c
int double_value(int param_1)
{
 return param_1 << 1;
}

// Function: triple_value @ 0x10f64
int triple_value(int param_1)
{
 return param_1 * 3;
}

// Function: call_virtual_func @ 0x10f6c
int call_virtual_func(unsigned int param_1,int param_2)
{
 return param_2 << 1;
}

// Function: process_with_callback @ 0x10f74
int process_with_callback(unsigned int *param_1,int param_2,void *param_3)
{
 int iVar1;
 int iVar2;
 if (param_2 < 1) {
 iVar2 = 0;
 }
 else {
 iVar2 = 0;
 do {
 iVar1 = (*(int (*)(int))param_3)(*param_1);
 iVar2 = iVar1 + iVar2;
 param_2 = param_2 + -1;
 param_1 = param_1 + 1;
 } while (param_2 != 0);
 }
 return iVar2;
}

// Function: test_control_flow_l2 @ 0x10fbc
void test_control_flow_l2(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int *puVar3;
 int iVar4;
 uint uVar5;
 int iVar6;
 puts(&DAT_00011f31);
 puVar3 = &DAT_00011988;
 iVar4 = 0;
 do {
 iVar1 = 1;
 do {
 iVar6 = iVar1;
 if (iVar6 == 4) goto LAB_00011040;
 iVar1 = iVar6 + 1;
 } while (puVar3[iVar6] != 7);
 if (iVar6 - 1U < 3) break;
LAB_00011040:
 puVar3 = puVar3 + 4;
 iVar4 = iVar4 + 1;
 } while (iVar4 != 3);
 printf("CF-L2-01 (loop_multi_exit): %d\n");
 iVar4 = 0;
 do {
 iVar4 = iVar4 + 1;
 } while (iVar4 != 0x3e9);
 printf("CF-L2-02 (infinite_loop): %d\n",0x3e9);
 uVar5 = 0xffffffff;
 printf("CF-L2-03 (multi_return): %d\n",0xffffffff);
 printf("CF-L2-03 (multi_return): %d\n",0xfffffffe);
 printf("CF-L2-03 (multi_return): %d\n",4);
 printf("CF-L2-04 (conditional_return): %d\n",10);
 printf("CF-L2-04 (conditional_return): %d\n",5);
 printf("CF-L2-05 (duffs_device): %d\n",8);
 iVar1 = 0xb;
 iVar4 = 10;
 do {
 if (iVar1 - 2U <= iVar4 - 8U) break;
 uVar5 = uVar5 + 1;
 iVar1 = iVar1 + -1;
 iVar4 = iVar4 + 2;
 } while (uVar5 < 9);
 printf("CF-L2-06 (loop_complex_cond): %d\n");
 printf("CF-L2-07 (loop_modify_var): %d\n",0x1e);
 iVar4 = 0;
 do {
 iVar4 = iVar4 + 1;
 } while (iVar4 != 0x65);
 printf("CF-L2-08 (loop_external_state): %d\n",0x65);
 uVar2 = recursion_factorial(5);
 printf("CF-L2-09 (recursion_factorial): %d\n",uVar2);
 uVar2 = tail_recursion(5,1);
 printf("CF-L2-10 (tail_recursion): %d\n",uVar2);
 uVar2 = indirect_recursion_a(10,3);
 printf("CF-L2-11 (indirect_recursion): %d\n",uVar2);
 printf("CF-L2-12 (call_func_ptr): %d\n",10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",10);
 uVar2 = recursion_factorial(5);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",uVar2);
 printf("CF-L2-15 (process_with_callback): %d\n",0x1e);
 return;
}

// Function: non_local_jump @ 0x11270
int non_local_jump(int param_1)
{
 int iVar1;
 iVar1 = _setjmp(jump_buffer);
 if (iVar1 != 0) {
 return -1;
 }
 if (param_1 != -1 && param_1 + 1 < 0 == SCARRY4(param_1,1)) {
 if (param_1 < 0x65) {
 return param_1 << 1;
 }
 longjmp(jump_buffer,2);
 }
 longjmp(jump_buffer,1);
}

// Function: cpp_exception @ 0x112e4
int cpp_exception(int param_1)
{
 int iVar1;
 iVar1 = param_1 << 1;
 if (100 < param_1) {
 iVar1 = -2;
 }
 if (param_1 == -1 || param_1 + 1 < 0 != SCARRY4(param_1,1)) {
 iVar1 = -1;
 }
 return iVar1;
}

// Function: large_jump_table @ 0x11300
unsigned int large_jump_table(uint param_1,unsigned int param_2,unsigned int param_3)
{
 unsigned int uVar1;
 if (9 < param_1) {
 return 0xffffffff;
 }
 uVar1 = (*(unsigned int (*)(int, int))(&PTR_op_add_00022ec8[param_1]))((int)param_2, (int)param_3);
 return uVar1;
}

// Function: op_add @ 0x1133c
unsigned int op_add(int param_1,int param_2)
{
 return param_2 + param_1;
}

// Function: op_sub @ 0x11344
unsigned int op_sub(int param_1,int param_2)
{
 return param_1 - param_2;
}

// Function: op_mul @ 0x1134c
unsigned int op_mul(int param_1,int param_2)
{
 return param_2 * param_1;
}

// Function: op_div @ 0x11358
unsigned int op_div(unsigned int param_1,int param_2)
{
 if (param_2 != 0) {
 return __divsi3(param_1, (uint)param_2);
 }
 return 0;
}

// Function: op_mod @ 0x11374
unsigned int op_mod(unsigned int param_1,int param_2)
{
 if (param_2 != 0) {
 return __aeabi_idivmod(param_1, (uint)param_2);
 }
 return 0;
}

// Function: op_and @ 0x11394
uint op_and(uint param_1,uint param_2)
{
 return param_2 & param_1;
}

// Function: op_or @ 0x1139c
uint op_or(uint param_1,uint param_2)
{
 return param_2 | param_1;
}

// Function: op_xor @ 0x113a4
uint op_xor(uint param_1,uint param_2)
{
 return param_2 ^ param_1;
}

// Function: op_shl @ 0x113ac
unsigned int op_shl(int param_1,uint param_2)
{
 return param_1 << (param_2 & 0xff);
}

// Function: op_shr @ 0x113b4
unsigned int op_shr(int param_1,uint param_2)
{
 return param_1 >> (param_2 & 0xff);
}

// Function: conditional_func_ptr @ 0x113bc
void conditional_func_ptr(int param_1,unsigned int param_2)
{
 int (*pcVar1)(int);
 int (*pcVar2)(int);
 pcVar2 = recursion_factorial;
 if (param_1 == 1) {
 pcVar2 = triple_value;
 }
 pcVar1 = double_value;
 if (param_1 != 0) {
 pcVar1 = pcVar2;
 }
 (*pcVar1)(param_2);
 return;
}

// Function: state_machine @ 0x11408
uint state_machine(uint param_1,uint param_2)
{
 uint uVar1;
 switch(param_2) {
 case 0:
 return (uint)(param_1 == 1);
 case 1:
 uVar1 = 1;
 if (param_1 == 99) {
 uVar1 = 3;
 }
 if (param_1 == 2) {
 uVar1 = 2;
 }
 return uVar1;
 case 2:
 break;
 case 3:
 if (param_1 != 0) {
 param_1 = 3;
 }
 return param_1;
 default:
 param_2 = 3;
 }
 return param_2;
}

// Function: fsm_func_table @ 0x11470
unsigned int fsm_func_table(unsigned int param_1,uint param_2)
{
 unsigned int uVar1;
 uVar1 = 3;
 if (param_2 < 4) {
 uVar1 = (*(unsigned int (**)(int))(&PTR_state_idle_00022ef0)[param_2])(param_1);
 }
 return uVar1;
}

// Function: state_idle @ 0x114a8
bool state_idle(int param_1)
{
 return param_1 == 1;
}

// Function: state_processing @ 0x114b8
int state_processing(int param_1)
{
 int iVar1;
 iVar1 = 1;
 if (param_1 == 99) {
 iVar1 = 3;
 }
 if (param_1 != 2) {
 param_1 = iVar1;
 }
 return param_1;
}

// Function: state_done @ 0x114d0
unsigned int state_done(void)
{
 return 2;
}

// Function: state_error @ 0x114d8
int state_error(int param_1)
{
 if (param_1 != 0) {
 param_1 = 3;
 }
 return param_1;
}

// Function: computed_goto @ 0x114e4
unsigned int computed_goto(unsigned int param_1,unsigned int param_2)
{
 switch(param_2) {
 case 0:
 return 0;
 case 1:
 return 10;
 case 2:
 return 0x14;
 case 3:
 return 0x1e;
 default:
 return 0xffffffff;
 }
}

// Function: obfuscated_cf @ 0x11524
int obfuscated_cf(int param_1)
{
 return param_1 << 1;
}

// Function: opaque_predicate @ 0x1152c
int opaque_predicate(int param_1)
{
 return param_1 << 1;
}

// Function: overlapped_code @ 0x11534
int overlapped_code(uint param_1)
{
 int iVar1;
 iVar1 = param_1 * 3 + 1;
 if ((param_1 & 1) == 0) {
 iVar1 = (int)param_1 / 2;
 }
 return iVar1;
}

// Function: test_control_flow_l3 @ 0x11550
void test_control_flow_l3(void)
{
 unsigned int uVar1;
 int iVar2;
 puts(&DAT_00011f55);
 uVar1 = non_local_jump(5);
 printf("CF-L3-01 (non_local_jump): %d\n",uVar1);
 uVar1 = non_local_jump(0xfffffffb);
 printf("CF-L3-01 (non_local_jump): %d\n",uVar1);
 printf("CF-L3-02 (cpp_exception): %d\n",10);
 printf("CF-L3-02 (cpp_exception): %d\n",0xffffffff);
 printf("CF-L3-03 (large_jump_table): %d\n",0xf);
 printf("CF-L3-04 (conditional_func_ptr): %d\n",10);
 printf("CF-L3-05 (state_machine): %d\n",1);
 iVar2 = printf("CF-L3-06 (fsm_func_table): %d\n",2);
 uVar1 = computed_goto(iVar2,2);
 printf("CF-L3-07 (computed_goto): %d\n",uVar1);
 printf("CF-L3-08 (obfuscated_cf): %d\n",10);
 printf("CF-L3-09 (opaque_predicate): %d\n",10);
 printf("CF-L3-10 (overlapped_code): %d\n",0x10);
 return;
}

// Function: main @ 0x1166c
unsigned int main(void)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}

// Function: __divsi3 @ 0x11688
static int __divsi3_impl(int param_1,int param_2)
{
 uint uVar1;
 int iVar2;
 uint uVar3;
 uint uVar4;
 bool bVar5;
 bool bVar6;
 bool bVar7;
 bool bVar8;
 bool bVar9;
 bool bVar10;
 bool bVar11;
 bool bVar12;
 bool bVar13;
 bool bVar14;
 bool bVar15;
 bool bVar16;
 bool bVar17;
 bool bVar18;
 bool bVar19;
 bool bVar20;
 bool bVar21;
 bool bVar22;
 bool bVar23;
 bool bVar24;
 bool bVar25;
 bool bVar26;
 bool bVar27;
 bool bVar28;
 bool bVar29;
 bool bVar30;
 bool bVar31;
 bool bVar32;
 bool bVar33;
 bool bVar34;
 bool bVar35;
 if (param_2 == 0) {
 bVar5 = (int)param_1 < 0;
 if (0 < (int)param_1) {
 param_1 = 0x7fffffff;
 }
 if (bVar5) {
 param_1 = 0x80000000;
 }
 uVar1 = __aeabi_ldiv0(param_1);
 return uVar1;
 }
 uVar4 = param_1 ^ param_2;
 uVar1 = param_2;
 if ((int)param_2 < 0) {
 uVar1 = -param_2;
 }
 if (uVar1 - 1 == 0) {
 if ((int)param_2 < 0) {
 param_1 = -param_1;
 }
 return param_1;
 }
 uVar3 = param_1;
 if ((int)param_1 < 0) {
 uVar3 = -param_1;
 }
 if (uVar3 <= uVar1) {
 if (uVar3 < uVar1) {
 param_1 = 0;
 }
 if (uVar3 == uVar1) {
 param_1 = (int)uVar4 >> 0x1f | 1;
 }
 return param_1;
 }
 if ((uVar1 & uVar1 - 1) == 0) {
 uVar3 = uVar3 >> (0x1fU - LZCOUNT(uVar1) & 0xff);
 if ((int)uVar4 < 0) {
 uVar3 = -uVar3;
 }
 return uVar3;
 }
 iVar2 = 0x1f - (LZCOUNT(uVar1) - LZCOUNT(uVar3));
 if (iVar2 == 0) {
 bVar5 = uVar1 << 0x1f <= uVar3;
 if (bVar5) {
 uVar3 = uVar3 + uVar1 * -0x80000000;
 }
 bVar6 = uVar1 << 0x1e <= uVar3;
 if (bVar6) {
 uVar3 = uVar3 + uVar1 * -0x40000000;
 }
 bVar7 = uVar1 << 0x1d <= uVar3;
 if (bVar7) {
 uVar3 = uVar3 + uVar1 * -0x20000000;
 }
 bVar8 = uVar1 << 0x1c <= uVar3;
 if (bVar8) {
 uVar3 = uVar3 + uVar1 * -0x10000000;
 }
 bVar9 = uVar1 << 0x1b <= uVar3;
 if (bVar9) {
 uVar3 = uVar3 + uVar1 * -0x8000000;
 }
 bVar10 = uVar1 << 0x1a <= uVar3;
 if (bVar10) {
 uVar3 = uVar3 + uVar1 * -0x4000000;
 }
 bVar11 = uVar1 << 0x19 <= uVar3;
 if (bVar11) {
 uVar3 = uVar3 + uVar1 * -0x2000000;
 }
 bVar12 = uVar1 << 0x18 <= uVar3;
 if (bVar12) {
 uVar3 = uVar3 + uVar1 * -0x1000000;
 }
 bVar13 = uVar1 << 0x17 <= uVar3;
 if (bVar13) {
 uVar3 = uVar3 + uVar1 * -0x800000;
 }
 bVar14 = uVar1 << 0x16 <= uVar3;
 if (bVar14) {
 uVar3 = uVar3 + uVar1 * -0x400000;
 }
 bVar15 = uVar1 << 0x15 <= uVar3;
 if (bVar15) {
 uVar3 = uVar3 + uVar1 * -0x200000;
 }
 bVar16 = uVar1 << 0x14 <= uVar3;
 if (bVar16) {
 uVar3 = uVar3 + uVar1 * -0x100000;
 }
 bVar17 = uVar1 << 0x13 <= uVar3;
 if (bVar17) {
 uVar3 = uVar3 + uVar1 * -0x80000;
 }
 bVar18 = uVar1 << 0x12 <= uVar3;
 if (bVar18) {
 uVar3 = uVar3 + uVar1 * -0x40000;
 }
 bVar19 = uVar1 << 0x11 <= uVar3;
 if (bVar19) {
 uVar3 = uVar3 + uVar1 * -0x20000;
 }
 bVar20 = uVar1 << 0x10 <= uVar3;
 if (bVar20) {
 uVar3 = uVar3 + uVar1 * -0x10000;
 }
 bVar21 = uVar1 << 0xf <= uVar3;
 if (bVar21) {
 uVar3 = uVar3 + uVar1 * -0x8000;
 }
 bVar22 = uVar1 << 0xe <= uVar3;
 if (bVar22) {
 uVar3 = uVar3 + uVar1 * -0x4000;
 }
 bVar23 = uVar1 << 0xd <= uVar3;
 if (bVar23) {
 uVar3 = uVar3 + uVar1 * -0x2000;
 }
 bVar24 = uVar1 << 0xc <= uVar3;
 if (bVar24) {
 uVar3 = uVar3 + uVar1 * -0x1000;
 }
 bVar25 = uVar1 << 0xb <= uVar3;
 if (bVar25) {
 uVar3 = uVar3 + uVar1 * -0x800;
 }
 bVar26 = uVar1 << 10 <= uVar3;
 if (bVar26) {
 uVar3 = uVar3 + uVar1 * -0x400;
 }
 bVar27 = uVar1 << 9 <= uVar3;
 if (bVar27) {
 uVar3 = uVar3 + uVar1 * -0x200;
 }
 bVar28 = uVar1 << 8 <= uVar3;
 if (bVar28) {
 uVar3 = uVar3 + uVar1 * -0x100;
 }
 bVar29 = uVar1 << 7 <= uVar3;
 if (bVar29) {
 uVar3 = uVar3 + uVar1 * -0x80;
 }
 bVar30 = uVar1 << 6 <= uVar3;
 if (bVar30) {
 uVar3 = uVar3 + uVar1 * -0x40;
 }
 bVar31 = uVar1 << 5 <= uVar3;
 if (bVar31) {
 uVar3 = uVar3 + uVar1 * -0x20;
 }
 bVar32 = uVar1 << 4 <= uVar3;
 if (bVar32) {
 uVar3 = uVar3 + uVar1 * -0x10;
 }
 bVar33 = uVar1 << 3 <= uVar3;
 if (bVar33) {
 uVar3 = uVar3 + uVar1 * -8;
 }
 bVar34 = uVar1 << 2 <= uVar3;
 if (bVar34) {
 uVar3 = uVar3 + uVar1 * -4;
 }
 bVar35 = uVar1 << 1 <= uVar3;
 if (bVar35) {
 uVar3 = uVar3 + uVar1 * -2;
 }
 uVar1 = (((((((((((((((((((((((((((((((uint)bVar5 * 2 + (uint)bVar6) * 2 + (uint)bVar7) * 2 +
 (uint)bVar8) * 2 + (uint)bVar9) * 2 + (uint)bVar10) * 2 +
 (uint)bVar11) * 2 + (uint)bVar12) * 2 + (uint)bVar13) * 2 +
 (uint)bVar14) * 2 + (uint)bVar15) * 2 + (uint)bVar16) * 2 +
 (uint)bVar17) * 2 + (uint)bVar18) * 2 + (uint)bVar19) * 2 +
 (uint)bVar20) * 2 + (uint)bVar21) * 2 + (uint)bVar22) * 2 + (uint)bVar23)
 * 2 + (uint)bVar24) * 2 + (uint)bVar25) * 2 + (uint)bVar26) * 2 +
 (uint)bVar27) * 2 + (uint)bVar28) * 2 + (uint)bVar29) * 2 + (uint)bVar30) * 2 +
 (uint)bVar31) * 2 + (uint)bVar32) * 2 + (uint)bVar33) * 2 + (uint)bVar34) * 2 +
 (uint)bVar35) * 2 + (uint)(uVar1 <= uVar3);
 if ((int)uVar4 < 0) {
 uVar1 = -uVar1;
 }
 return uVar1;
 }
 uVar1 = (*(unsigned int (*)(unsigned int, unsigned int))(iVar2 * 0xc + 0x116d8))(param_1, param_2);
 return uVar1;
}



// Function: .divsi3_skip_div0_test @ 0x11690
uint _divsi3_skip_div0_test(uint param_1,uint param_2)
{
 uint uVar1;
 int iVar2;
 uint uVar3;
 uint uVar4;
 bool in_NG;
 bool bVar5;
 bool bVar6;
 bool bVar7;
 bool bVar8;
 bool bVar9;
 bool bVar10;
 bool bVar11;
 bool bVar12;
 bool bVar13;
 bool bVar14;
 bool bVar15;
 bool bVar16;
 bool bVar17;
 bool bVar18;
 bool bVar19;
 bool bVar20;
 bool bVar21;
 bool bVar22;
 bool bVar23;
 bool bVar24;
 bool bVar25;
 bool bVar26;
 bool bVar27;
 bool bVar28;
 bool bVar29;
 bool bVar30;
 bool bVar31;
 bool bVar32;
 bool bVar33;
 bool bVar34;
 bool bVar35;
 uVar4 = param_1 ^ param_2;
 uVar1 = param_2;
 if ((int)param_2 < 0) {
 uVar1 = -param_2;
 }
 if (uVar1 - 1 == 0) {
 if ((int)param_2 < 0) {
 param_1 = -param_1;
 }
 return param_1;
 }
 uVar3 = param_1;
 if ((int)param_1 < 0) {
 uVar3 = -param_1;
 }
 if (uVar3 <= uVar1) {
 if (uVar3 < uVar1) {
 param_1 = 0;
 }
 if (uVar3 == uVar1) {
 param_1 = (int)uVar4 >> 0x1f | 1;
 }
 return param_1;
 }
 if ((uVar1 & uVar1 - 1) == 0) {
 uVar3 = uVar3 >> (0x1fU - LZCOUNT(uVar1) & 0xff);
 if ((int)uVar4 < 0) {
 uVar3 = -uVar3;
 }
 return uVar3;
 }
 iVar2 = 0x1f - (LZCOUNT(uVar1) - LZCOUNT(uVar3));
 if (iVar2 == 0) {
 bVar5 = uVar1 << 0x1f <= uVar3;
 if (bVar5) {
 uVar3 = uVar3 + uVar1 * -0x80000000;
 }
 bVar6 = uVar1 << 0x1e <= uVar3;
 if (bVar6) {
 uVar3 = uVar3 + uVar1 * -0x40000000;
 }
 bVar7 = uVar1 << 0x1d <= uVar3;
 if (bVar7) {
 uVar3 = uVar3 + uVar1 * -0x20000000;
 }
 bVar8 = uVar1 << 0x1c <= uVar3;
 if (bVar8) {
 uVar3 = uVar3 + uVar1 * -0x10000000;
 }
 bVar9 = uVar1 << 0x1b <= uVar3;
 if (bVar9) {
 uVar3 = uVar3 + uVar1 * -0x8000000;
 }
 bVar10 = uVar1 << 0x1a <= uVar3;
 if (bVar10) {
 uVar3 = uVar3 + uVar1 * -0x4000000;
 }
 bVar11 = uVar1 << 0x19 <= uVar3;
 if (bVar11) {
 uVar3 = uVar3 + uVar1 * -0x2000000;
 }
 bVar12 = uVar1 << 0x18 <= uVar3;
 if (bVar12) {
 uVar3 = uVar3 + uVar1 * -0x1000000;
 }
 bVar13 = uVar1 << 0x17 <= uVar3;
 if (bVar13) {
 uVar3 = uVar3 + uVar1 * -0x800000;
 }
 bVar14 = uVar1 << 0x16 <= uVar3;
 if (bVar14) {
 uVar3 = uVar3 + uVar1 * -0x400000;
 }
 bVar15 = uVar1 << 0x15 <= uVar3;
 if (bVar15) {
 uVar3 = uVar3 + uVar1 * -0x200000;
 }
 bVar16 = uVar1 << 0x14 <= uVar3;
 if (bVar16) {
 uVar3 = uVar3 + uVar1 * -0x100000;
 }
 bVar17 = uVar1 << 0x13 <= uVar3;
 if (bVar17) {
 uVar3 = uVar3 + uVar1 * -0x80000;
 }
 bVar18 = uVar1 << 0x12 <= uVar3;
 if (bVar18) {
 uVar3 = uVar3 + uVar1 * -0x40000;
 }
 bVar19 = uVar1 << 0x11 <= uVar3;
 if (bVar19) {
 uVar3 = uVar3 + uVar1 * -0x20000;
 }
 bVar20 = uVar1 << 0x10 <= uVar3;
 if (bVar20) {
 uVar3 = uVar3 + uVar1 * -0x10000;
 }
 bVar21 = uVar1 << 0xf <= uVar3;
 if (bVar21) {
 uVar3 = uVar3 + uVar1 * -0x8000;
 }
 bVar22 = uVar1 << 0xe <= uVar3;
 if (bVar22) {
 uVar3 = uVar3 + uVar1 * -0x4000;
 }
 bVar23 = uVar1 << 0xd <= uVar3;
 if (bVar23) {
 uVar3 = uVar3 + uVar1 * -0x2000;
 }
 bVar24 = uVar1 << 0xc <= uVar3;
 if (bVar24) {
 uVar3 = uVar3 + uVar1 * -0x1000;
 }
 bVar25 = uVar1 << 0xb <= uVar3;
 if (bVar25) {
 uVar3 = uVar3 + uVar1 * -0x800;
 }
 bVar26 = uVar1 << 10 <= uVar3;
 if (bVar26) {
 uVar3 = uVar3 + uVar1 * -0x400;
 }
 bVar27 = uVar1 << 9 <= uVar3;
 if (bVar27) {
 uVar3 = uVar3 + uVar1 * -0x200;
 }
 bVar28 = uVar1 << 8 <= uVar3;
 if (bVar28) {
 uVar3 = uVar3 + uVar1 * -0x100;
 }
 bVar29 = uVar1 << 7 <= uVar3;
 if (bVar29) {
 uVar3 = uVar3 + uVar1 * -0x80;
 }
 bVar30 = uVar1 << 6 <= uVar3;
 if (bVar30) {
 uVar3 = uVar3 + uVar1 * -0x40;
 }
 bVar31 = uVar1 << 5 <= uVar3;
 if (bVar31) {
 uVar3 = uVar3 + uVar1 * -0x20;
 }
 bVar32 = uVar1 << 4 <= uVar3;
 if (bVar32) {
 uVar3 = uVar3 + uVar1 * -0x10;
 }
 bVar33 = uVar1 << 3 <= uVar3;
 if (bVar33) {
 uVar3 = uVar3 + uVar1 * -8;
 }
 bVar34 = uVar1 << 2 <= uVar3;
 if (bVar34) {
 uVar3 = uVar3 + uVar1 * -4;
 }
 bVar35 = uVar1 << 1 <= uVar3;
 if (bVar35) {
 uVar3 = uVar3 + uVar1 * -2;
 }
 uVar1 = (((((((((((((((((((((((((((((((uint)bVar5 * 2 + (uint)bVar6) * 2 + (uint)bVar7) * 2 +
 (uint)bVar8) * 2 + (uint)bVar9) * 2 + (uint)bVar10) * 2 +
 (uint)bVar11) * 2 + (uint)bVar12) * 2 + (uint)bVar13) * 2 +
 (uint)bVar14) * 2 + (uint)bVar15) * 2 + (uint)bVar16) * 2 +
 (uint)bVar17) * 2 + (uint)bVar18) * 2 + (uint)bVar19) * 2 +
 (uint)bVar20) * 2 + (uint)bVar21) * 2 + (uint)bVar22) * 2 + (uint)bVar23)
 * 2 + (uint)bVar24) * 2 + (uint)bVar25) * 2 + (uint)bVar26) * 2 +
 (uint)bVar27) * 2 + (uint)bVar28) * 2 + (uint)bVar29) * 2 + (uint)bVar30) * 2 +
 (uint)bVar31) * 2 + (uint)bVar32) * 2 + (uint)bVar33) * 2 + (uint)bVar34) * 2 +
 (uint)bVar35) * 2 + (uint)(uVar1 <= uVar3);
 if ((int)uVar4 < 0) {
 uVar1 = -uVar1;
 }
 return uVar1;
 }
 uVar1 = (*(unsigned int (*)(unsigned int, unsigned int))(iVar2 * 0xc + 0x116d8))(param_1, param_2);
 return uVar1;
}







