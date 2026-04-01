#include <setjmp.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

typedef unsigned int uint;
typedef unsigned long long ulonglong;
typedef long long longlong;
typedef unsigned char byte;

// Data tables
static const unsigned int UNK_00011e2c[4] = {0x32, 0x28, 0x1e, 0x14};
static const int DAT_00011e3c[12] = {0, 3, 6, 9, 12, 15, 18, 21, 24, 27, 30, 33};
static const int DAT_00011e6c[12] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

// String constants
static const char DAT_00011dbd[] = "Control Flow Test L1";
static const char DAT_00011de1[] = "Control Flow Test L2";
static const char DAT_00011e05[] = "Control Flow Test L3";

// Jump buffer for non-local jumps
static jmp_buf jump_buffer;

// ARM helper macros
#define SCARRY4(a, b) (((uint)(a) + (uint)(b)) < (uint)(a))
#define LZCOUNT(x) __builtin_clz(x)

// Function: __aeabi_ldiv0 @ 0x117bc
void __aeabi_ldiv0(void)
{
 raise(8);
}

// External declarations
extern int main(void);
void *stack0x00000004;
void *__dso_handle;
int completed_0 = 0;

// Decompiled by BinaryAI
// SHA256: 8f95872bd2c99d5d1b13cbe07cb97179e7b5eef90911ec019c868489566b3cdf

// Forward declarations
void call_weak_fn(void);
void __gmon_start__(void);

// Function: _init @ 0x104d0
int _init(void *ctx)
{
 call_weak_fn();
 return 0;
}

// Function: <EXTERNAL>::raise @ 0x104f0
extern int raise(int __sig);

// Function: <EXTERNAL>::__libc_start_main @ 0x104fc
extern void __libc_start_main(int (*main)(void), void *argc, void *argv, void (*init)(void), void (*fini)(void), void *rtld_fini, void *stack_end);

// Function: <EXTERNAL>::__cxa_finalize @ 0x10508
extern void __cxa_finalize(void *);

void __cxa_finalize_impl(void)
{
 __cxa_finalize(__dso_handle);
 return;
}

// Function: <EXTERNAL>::printf @ 0x10514
extern int printf(const char *__format,...);

// Function: <EXTERNAL>::longjmp @ 0x10520
void longjmp(jmp_buf __env, int __val);

// Function: <EXTERNAL>::_setjmp @ 0x1052c
int _setjmp(jmp_buf __env);

// Function: <EXTERNAL>::puts @ 0x10538
extern int puts(const char *__s);

// Function: <EXTERNAL>::abort @ 0x10550
extern void abort(void);

// Function: _start @ 0x1055c
void _start(unsigned int param_1,unsigned int param_2)
{
 __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,0);
}

// Function: call_weak_fn @ 0x105a0
void __gmon_start__(void);
void call_weak_fn(void)
{
 __gmon_start__();
 return;
}

// Function: __gmon_start__ @ 0x105a0
void __gmon_start__(void)
{
 return;
}

// Function: deregister_tm_clones @ 0x105c4
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x10608
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x10658
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = 1;
 return;
 }
 return;
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
 uVar1 = *(unsigned int *)(&UNK_00011e2c + param_1 * 4);
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
 return ((uint)((byte)((ulonglong)lVar1 >> 0x20) & 1) << 0x1f | (uint)lVar1 >> 1) + param_1 + -1;
 }
 return 0;
}

// Function: loop_while @ 0x10848
int loop_while(int param_1)
{
 int iVar1;
 uint uVar2;
 if (param_1 != 0) {
 iVar1 = 0;
 do {
 uVar2 = param_1 + 9;
 iVar1 = iVar1 + 1;
 param_1 = param_1 / 10;
 } while (0x12 < uVar2);
 return iVar1;
 }
 return 1;
}

// Function: loop_dowhile @ 0x10888
int loop_dowhile(int param_1)
{
 int iVar1;
 uint uVar2;
 iVar1 = 0;
 do {
 uVar2 = param_1 + 9;
 iVar1 = iVar1 + 1;
 param_1 = param_1 / 10;
 } while (0x12 < uVar2);
 return iVar1;
}

// Function: loop_nested @ 0x108bc
int loop_nested(int param_1,uint param_2)
{
 int iVar1;
 iVar1 = 0;
 if (0 < param_1) {
 iVar1 = (param_2 & ~((int)param_2 >> 0x1f)) * param_1;
 }
 return iVar1;
}

// Function: loop_break @ 0x108d4
unsigned int loop_break(unsigned int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 switch(param_1) {
 case 10:
 break;
 default:
 return 0xffffffff;
 case 0x14:
 return 1;
 case 0x1e:
 return 2;
 case 0x28:
 return 3;
 case 0x32:
 uVar1 = 4;
 }
 return uVar1;
}

// Function: loop_continue @ 0x109bc
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

// Function: goto_forward @ 0x109f4
int goto_forward(int param_1)
{
 int iVar1;
 iVar1 = param_1;
 if (param_1 < 2) {
 iVar1 = 1;
 }
 return param_1 * iVar1 * 2;
}

// Function: goto_backward @ 0x10a0c
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

// Function: ternary_op @ 0x10a3c
int ternary_op(int param_1,int param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: test_control_flow_l1 @ 0x10a48
void test_control_flow_l1(void)
{
 puts(&DAT_00011dbd);
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

// Function: loop_multi_exit @ 0x10c5c
int loop_multi_exit(int param_1)
{
 uint uVar1;
 uVar1 = param_1 - 1;
 if (0xb < uVar1) {
 return -1;
 }
 return *(int *)(&DAT_00011e6c + uVar1 * 4) + *(int *)(&DAT_00011e3c + uVar1 * 4);
}

// Function: infinite_loop @ 0x10c94
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

// Function: multi_return @ 0x10ccc
int multi_return(uint param_1)
{
 int iVar1;
 if ((int)param_1 < 0) {
 return -1;
 }
 if (param_1 < 0x33) {
 iVar1 = param_1 + 1;
 if ((param_1 & 1) == 0) {
 iVar1 = param_1 << 1;
 }
 return iVar1;
 }
 return -2;
}

// Function: conditional_return @ 0x10cf8
int conditional_return(int param_1)
{
 int iVar1;
 iVar1 = -param_1;
 if (0 < param_1) {
 iVar1 = param_1 << 1;
 }
 return iVar1;
}

// Function: duffs_device @ 0x10d0c
uint duffs_device(unsigned int *param_1,unsigned int *param_2,uint param_3)
{
 unsigned int *puVar1;
 unsigned int *puVar2;
 uint uVar3;
 uint uVar4;
 uint uVar5;
 uVar3 = 0xffffffff;
 if (0 < (int)param_3) {
 uVar5 = param_3 + 7 >> 3;
 puVar1 = param_1;
 puVar2 = param_2;
 uVar4 = uVar5;
 switch(param_3 & 7) {
 case 1:
 goto switchD_00010d30_caseD_1;
 case 2:
 goto switchD_00010d30_caseD_2;
 case 3:
 goto switchD_00010d30_caseD_3;
 case 4:
 goto switchD_00010d30_caseD_4;
 case 5:
 goto switchD_00010d30_caseD_5;
 case 6:
 goto switchD_00010d30_caseD_6;
 case 7:
 goto switchD_00010d30_caseD_7;
 }
 do {
 puVar2 = param_2 + 1;
 puVar1 = param_1 + 1;
 *param_1 = *param_2;
switchD_00010d30_caseD_7:
 param_2 = puVar2 + 1;
 param_1 = puVar1 + 1;
 *puVar1 = *puVar2;
switchD_00010d30_caseD_6:
 puVar2 = param_2 + 1;
 puVar1 = param_1 + 1;
 *param_1 = *param_2;
switchD_00010d30_caseD_5:
 param_2 = puVar2 + 1;
 param_1 = puVar1 + 1;
 *puVar1 = *puVar2;
switchD_00010d30_caseD_4:
 puVar2 = param_2 + 1;
 puVar1 = param_1 + 1;
 *param_1 = *param_2;
switchD_00010d30_caseD_3:
 param_2 = puVar2 + 1;
 param_1 = puVar1 + 1;
 *puVar1 = *puVar2;
switchD_00010d30_caseD_2:
 puVar2 = param_2 + 1;
 puVar1 = param_1 + 1;
 *param_1 = *param_2;
 uVar4 = uVar5;
switchD_00010d30_caseD_1:
 param_2 = puVar2 + 1;
 uVar5 = uVar4 - 1;
 param_1 = puVar1 + 1;
 *puVar1 = *puVar2;
 uVar3 = param_3;
 } while (uVar5 != 0 && 0 < (int)uVar4);
 }
 return uVar3;
}

// Function: loop_complex_cond @ 0x10dac
int loop_complex_cond(uint param_1)
{
 int iVar1;
 uint uVar2;
 uint uVar3;
 uint uVar4;
 bool bVar5;
 if ((int)param_1 < 1) {
 iVar1 = 0;
 uVar4 = 0;
 }
 else {
 iVar1 = 0;
 uVar2 = param_1;
 uVar3 = 0;
 do {
 iVar1 = iVar1 + 2;
 uVar4 = uVar3 + 1;
 param_1 = uVar2 - 1;
 if ((uVar2 < 2) || ((int)param_1 <= iVar1)) break;
 bVar5 = uVar3 < 9;
 uVar2 = param_1;
 uVar3 = uVar4;
 } while (bVar5);
 }
 return param_1 + iVar1 + uVar4;
}

// Function: loop_modify_var @ 0x10e04
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

// Function: loop_external_state @ 0x10e40
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

// Function: recursion_factorial @ 0x10e68
int recursion_factorial(uint param_1)
{
 bool bVar1;
 int iVar2;
 iVar2 = 1;
 if (1 < (int)param_1) {
 iVar2 = 1;
 do {
 iVar2 = param_1 * iVar2;
 bVar1 = 2 < param_1;
 param_1 = param_1 - 1;
 } while (bVar1);
 }
 return iVar2;
}

// Function: tail_recursion @ 0x10e98
int tail_recursion(uint param_1,int param_2)
{
 bool bVar1;
 if (1 < (int)param_1) {
 do {
 param_2 = param_2 * param_1;
 bVar1 = 2 < param_1;
 param_1 = param_1 - 1;
 } while (bVar1);
 return param_2;
 }
 return param_2;
}

// Function: indirect_recursion_a @ 0x10ec4
uint indirect_recursion_a(uint param_1,int param_2)
{
 if (0 < param_2) {
 param_2 = param_2 + 2;
 do {
 if ((param_1 & 1) == 0) {
 if (param_2 == 3) {
 return (int)param_1 / 2;
 }
 param_1 = (int)param_1 / 2 + 1;
 }
 else {
 if (param_2 == 3) {
 return param_1 * 3 + 1;
 }
 param_1 = param_1 * 3 + 2;
 }
 param_2 = param_2 + -2;
 } while (2 < param_2);
 }
 return param_1;
}

// Function: call_func_ptr @ 0x10f1c
void call_func_ptr(int (*fn_ptr)(unsigned int), unsigned int param_2)
{
 (*fn_ptr)(param_2);
 return;
}

// Function: call_func_ptr_array @ 0x10f28
int call_func_ptr_array(unsigned int param_1,uint param_2)
{
 bool bVar1;
 int iVar2;
 switch(param_1) {
 case 0:
 return param_2 << 1;
 case 1:
 return param_2 * 3;
 case 2:
 break;
 default:
 return -1;
 }
 iVar2 = 1;
 if (1 < (int)param_2) {
 iVar2 = 1;
 do {
 iVar2 = param_2 * iVar2;
 bVar1 = 2 < param_2;
 param_2 = param_2 - 1;
 } while (bVar1);
 }
 return iVar2;
}

// Function: double_value @ 0x10f4c
int double_value(int param_1)
{
 return param_1 << 1;
}

// Function: triple_value @ 0x10f54
int triple_value(int param_1)
{
 return param_1 * 3;
}

// Function: call_virtual_func @ 0x10f5c
int call_virtual_func(unsigned int param_1,int param_2)
{
 return param_2 << 1;
}

// Function: process_with_callback @ 0x10f64
typedef int (*callback_fn)(unsigned int);

int process_with_callback(unsigned int *param_1,int param_2,callback_fn param_3)
{
 int iVar1;
 int iVar2;
 if (param_2 < 1) {
 iVar2 = 0;
 }
 else {
 iVar2 = 0;
 do {
 iVar1 = (*param_3)(*param_1);
 iVar2 = iVar1 + iVar2;
 param_2 = param_2 + -1;
 param_1 = param_1 + 1;
 } while (param_2 != 0);
 }
 return iVar2;
}

// Function: test_control_flow_l2 @ 0x10fac
void test_control_flow_l2(void)
{
 int iVar1;
 uint uVar2;
 uint uVar3;
 int iVar4;
 puts(&DAT_00011de1);
 printf("CF-L2-01 (loop_multi_exit): %d\n",0xc);
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x3e9);
 printf("CF-L2-02 (infinite_loop): %d\n",0x3e9);
 uVar3 = 0xffffffff;
 printf("CF-L2-03 (multi_return): %d\n",0xffffffff);
 printf("CF-L2-03 (multi_return): %d\n",0xfffffffe);
 printf("CF-L2-03 (multi_return): %d\n",4);
 iVar4 = 10;
 printf("CF-L2-04 (conditional_return): %d\n",10);
 printf("CF-L2-04 (conditional_return): %d\n",5);
 printf("CF-L2-05 (duffs_device): %d\n",8);
 iVar1 = 0xb;
 do {
 uVar2 = iVar4 - 8;
 iVar4 = iVar4 + 2;
 if (iVar1 - 2U <= uVar2) break;
 uVar3 = uVar3 + 1;
 iVar1 = iVar1 + -1;
 } while (uVar3 < 9);
 printf("CF-L2-06 (loop_complex_cond): %d\n", 0);
 printf("CF-L2-07 (loop_modify_var): %d\n",0x1e);
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x65);
 printf("CF-L2-08 (loop_external_state): %d\n",0x65);
 printf("CF-L2-09 (recursion_factorial): %d\n",0x78);
 printf("CF-L2-10 (tail_recursion): %d\n",0x78);
 printf("CF-L2-11 (indirect_recursion): %d\n",3);
 printf("CF-L2-12 (call_func_ptr): %d\n",10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",0x78);
 printf("CF-L2-15 (process_with_callback): %d\n",0x1e);
 return;
}

// Function: non_local_jump @ 0x111a4
int non_local_jump(uint param_1)
{
 int iVar1;
 iVar1 = _setjmp(jump_buffer);
 if (iVar1 != 0) {
 return -1;
 }
 if (param_1 != 0xffffffff && (int)(param_1 + 1) < 0 == SCARRY4(param_1,1)) {
 if (param_1 < 0x65) {
 return param_1 << 1;
 }
 longjmp(jump_buffer,2);
 }
 longjmp(jump_buffer,1);
}

// Function: cpp_exception @ 0x11218
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

// Function: large_jump_table @ 0x11234
uint large_jump_table(unsigned int param_1,uint param_2,uint param_3)
{
 uint uVar1;
 uint extraout_r1;
 switch(param_1) {
 case 0:
 return param_3 + param_2;
 case 1:
 return param_2 - param_3;
 case 2:
 return param_3 * param_2;
 case 3:
 break;
 case 4:
 if (param_3 == 0) {
 return 0;
 }
 return __divsi3(param_2, param_3);
 case 5:
 return param_3 & param_2;
 case 6:
 return param_3 | param_2;
 case 7:
 return param_3 ^ param_2;
 case 8:
 return param_2 << (param_3 & 0xff);
 case 9:
 return (int)param_2 >> (param_3 & 0xff);
 default:
 return 0xffffffff;
 }
 if (param_3 == 0) {
 return 0;
 }
 uVar1 = __divsi3(param_2, param_3);
 return uVar1;
}

// Function: op_add @ 0x1125c
int op_add(int param_1,int param_2)
{
 return param_2 + param_1;
}

// Function: op_sub @ 0x11264
int op_sub(int param_1,int param_2)
{
 return param_1 - param_2;
}

// Function: op_mul @ 0x1126c
int op_mul(int param_1,int param_2)
{
 return param_2 * param_1;
}

// Function: op_div @ 0x11278
int op_div(unsigned int param_1,int param_2)
{
 if (param_2 != 0) {
 return __divsi3(param_1, param_2);
 }
 return 0;
}

// Function: op_mod @ 0x11294
unsigned int op_mod(unsigned int param_1,int param_2)
{
 unsigned int extraout_r1;
 if (param_2 != 0) {
 extraout_r1 = __aeabi_idivmod(param_1, param_2);
 return extraout_r1;
 }
 return 0;
}

// Function: op_and @ 0x112b4
uint op_and(uint param_1,uint param_2)
{
 return param_2 & param_1;
}

// Function: op_or @ 0x112bc
uint op_or(uint param_1,uint param_2)
{
 return param_2 | param_1;
}

// Function: op_xor @ 0x112c4
uint op_xor(uint param_1,uint param_2)
{
 return param_2 ^ param_1;
}

// Function: op_shl @ 0x112cc
int op_shl(int param_1,uint param_2)
{
 return param_1 << (param_2 & 0xff);
}

// Function: op_shr @ 0x112d4
int op_shr(int param_1,uint param_2)
{
 return param_1 >> (param_2 & 0xff);
}

// Function: conditional_func_ptr @ 0x112dc
void conditional_func_ptr(int param_1,unsigned int param_2)
{
 void *UNRECOVERED_JUMPTABLE;
 void *pcVar1;
 pcVar1 = recursion_factorial;
 if (param_1 == 1) {
 pcVar1 = triple_value;
 }
 UNRECOVERED_JUMPTABLE = double_value;
 if (param_1 != 0) {
 UNRECOVERED_JUMPTABLE = pcVar1;
 }
 (*(int (*)(unsigned int))UNRECOVERED_JUMPTABLE)(param_2);
 return;
}

// Function: state_machine @ 0x11318
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

// Function: fsm_func_table @ 0x11380
uint fsm_func_table(uint param_1,unsigned int param_2)
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
 break;
 case 2:
 return 2;
 case 3:
 if (param_1 != 0) {
 param_1 = 3;
 }
 return param_1;
 default:
 return 3;
 }
 if (param_1 != 2) {
 param_1 = uVar1;
 }
 return param_1;
}

// Function: state_idle @ 0x113a0
bool state_idle(int param_1)
{
 return param_1 == 1;
}

// Function: state_processing @ 0x113b0
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

// Function: state_done @ 0x113c8
unsigned int state_done(void)
{
 return 2;
}

// Function: state_error @ 0x113d0
int state_error(int param_1)
{
 if (param_1 != 0) {
 param_1 = 3;
 }
 return param_1;
}

// Function: computed_goto @ 0x113dc
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

// Function: obfuscated_cf @ 0x1141c
int obfuscated_cf(int param_1)
{
 return param_1 << 1;
}

// Function: opaque_predicate @ 0x11424
int opaque_predicate(int param_1)
{
 return param_1 << 1;
}

// Function: overlapped_code @ 0x1142c
int overlapped_code(uint param_1)
{
 int iVar1;
 iVar1 = param_1 * 3 + 1;
 if ((param_1 & 1) == 0) {
 iVar1 = (int)param_1 / 2;
 }
 return iVar1;
}

// Function: test_control_flow_l3 @ 0x11448
void test_control_flow_l3(void)
{
 unsigned int uVar1;
 int iVar2;
 puts(&DAT_00011e05);
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

// Function: main @ 0x11560
int main(void)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}

// Function: __divsi3 @ 0x1157c
int __divsi3(int param_1,int param_2)
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
 __aeabi_ldiv0();
 return param_1;
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
 (uint)bVar35) * 2 + (uint)(uVar1 <= uVar3));
 if ((int)uVar4 < 0) {
 uVar1 = -uVar1;
 }
 return uVar1;
 }
 return param_1 / param_2;
}

// Function: .divsi3_skip_div0_test @ 0x11584
uint _divsi3_skip_div0_test(uint param_1,uint param_2)
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
 bool bVar36;
 bool bVar37;
 bool bVar38;
 bool bVar39;
 bool bVar40;
 bool bVar41;
 bool bVar42;
 bool bVar43;
 bool bVar44;
 bool bVar45;
 bool bVar46;
 bool bVar47;
 bool bVar48;
 bool bVar49;
 bool bVar50;
 bool bVar51;
 bool bVar52;
 bool bVar53;
 bool bVar54;
 bool bVar55;
 bool bVar56;
 bool bVar57;
 bool bVar58;
 bool bVar59;
 bool bVar60;
 bool bVar61;
 bool bVar62;
 bool bVar63;
 bool bVar64;
 bool bVar65;
 bool bVar66;
 bool bVar67;
 bool bVar68;
 bool bVar69;
 bool bVar70;
 bool bVar71;
 bool bVar72;
 bool bVar73;
 bool bVar74;
 bool bVar75;
 bool bVar76;
 bool bVar77;
 bool bVar78;
 bool bVar79;
 bool bVar80;
 bool bVar81;
 bool bVar82;
 bool bVar83;
 bool bVar84;
 bool bVar85;
 bool bVar86;
 bool bVar87;
 bool bVar88;
 bool bVar89;
 bool bVar90;
 bool bVar91;
 bool bVar92;
 bool bVar93;
 bool bVar94;
 bool bVar95;
 bool bVar96;
 bool bVar97;
 bool bVar98;
 bool bVar99;
 bool bVar100;
 bool bVar101;
 bool bVar102;
 bool bVar103;
 bool bVar104;
 bool bVar105;
 bool bVar106;
 bool bVar107;
 bool bVar108;
 bool bVar109;
 bool bVar110;
 bool bVar111;
 bool bVar112;
 bool bVar113;
 bool bVar114;
 bool bVar115;
 bool bVar116;
 bool bVar117;
 bool bVar118;
 bool bVar119;
 bool bVar120;
 bool bVar121;
 bool bVar122;
 bool bVar123;
 bool bVar124;
 bool bVar125;
 bool bVar126;
 bool bVar127;
 bool bVar128;
 bool bVar129;
 bool bVar130;
 bool bVar131;
 bool bVar132;
 bool bVar133;
 bool bVar134;
 bool bVar135;
 bool bVar136;
 bool bVar137;
 bool bVar138;
 bool bVar139;
 bool bVar140;
 bool bVar141;
 bool bVar142;
 bool bVar143;
 bool bVar144;
 bool bVar145;
 bool bVar146;
 bool bVar147;
 bool bVar148;
 bool bVar149;
 bool bVar150;
 bool bVar151;
 bool bVar152;
 bool bVar153;
 bool bVar154;
 bool bVar155;
 bool bVar156;
 bool bVar157;
 bool bVar158;
 bool bVar159;
 bool bVar160;
 bool bVar161;
 bool bVar162;
 bool bVar163;
 bool bVar164;
 bool bVar165;
 bool bVar166;
 bool bVar167;
 bool bVar168;
 bool bVar169;
 bool bVar170;
 bool bVar171;
 bool bVar172;
 bool bVar173;
 bool bVar174;
 bool bVar175;
 bool bVar176;
 bool bVar177;
 bool bVar178;
 bool bVar179;
 bool bVar180;
 bool bVar181;
 bool bVar182;
 bool bVar183;
 bool bVar184;
 bool bVar185;
 bool bVar186;
 bool bVar187;
 bool bVar188;
 bool bVar189;
 bool bVar190;
 bool bVar191;
 bool bVar192;
 bool bVar193;
 bool bVar194;
 bool bVar195;
 bool bVar196;
 bool bVar197;
 bool bVar198;
 bool bVar199;
 bool bVar200;
 bool bVar201;
 bool bVar202;
 bool bVar203;
 bool bVar204;
 bool bVar205;
 bool bVar206;
 bool bVar207;
 bool bVar208;
 bool bVar209;
 bool bVar210;
 bool bVar211;
 bool bVar212;
 bool bVar213;
 bool bVar214;
 bool bVar215;
 bool bVar216;
 bool bVar217;
 bool bVar218;
 bool bVar219;
 bool bVar220;
 bool bVar221;
 bool bVar222;
 bool bVar223;
 bool bVar224;
 bool bVar225;
 bool bVar226;
 bool bVar227;
 bool bVar228;
 bool bVar229;
 bool bVar230;
 bool bVar231;
 bool bVar232;
 bool bVar233;
 bool bVar234;
 bool bVar235;
 bool bVar236;
 bool bVar237;
 bool bVar238;
 bool bVar239;
 bool bVar240;
 bool bVar241;
 bool bVar242;
 bool bVar243;
 bool bVar244;
 bool bVar245;
 bool bVar246;
 bool bVar247;
 bool bVar248;
 bool bVar249;
 bool bVar250;
 bool bVar251;
 bool bVar252;
 bool bVar253;
 bool bVar254;
 bool bVar255;
 bool bVar256;
 bool bVar257;
 bool bVar258;
 bool bVar259;
 bool bVar260;
 bool bVar261;
 bool bVar262;
 bool bVar263;
 bool bVar264;
 bool bVar265;
 bool bVar266;
 bool bVar267;
 bool bVar268;
 bool bVar269;
 bool bVar270;
 bool bVar271;
 bool bVar272;
 bool bVar273;
 bool bVar274;
 bool bVar275;
 bool bVar276;
 bool bVar277;
 bool bVar278;
 bool bVar279;
 bool bVar280;
 bool bVar281;
 bool bVar282;
 bool bVar283;
 bool bVar284;
 bool bVar285;
 bool bVar286;
 bool bVar287;
 bool bVar288;
 bool bVar289;
 bool bVar290;
 bool bVar291;
 bool bVar292;
 bool bVar293;
 bool bVar294;
 bool bVar295;
 bool bVar296;
 bool bVar297;
 bool bVar298;
 bool bVar299;
 bool bVar300;
 bool bVar301;
 bool bVar302;
 bool bVar303;
 bool bVar304;
 bool bVar305;
 bool bVar306;
 bool bVar307;
 bool bVar308;
 bool bVar309;
 bool bVar310;
 bool bVar311;
 bool bVar312;
 bool bVar313;
 bool bVar314;
 bool bVar315;
 bool bVar316;
 bool bVar317;
 bool bVar318;
 bool bVar319;
 bool bVar320;
 bool bVar321;
 bool bVar322;
 bool bVar323;
 bool bVar324;
 bool bVar325;
 bool bVar326;
 bool bVar327;
 bool bVar328;
 bool bVar329;
 bool bVar330;
 bool bVar331;
 bool bVar332;
 bool bVar333;
 bool bVar334;
 bool bVar335;
 bool bVar336;
 bool bVar337;
 bool bVar338;
 bool bVar339;
 bool bVar340;
 bool bVar341;
 bool bVar342;
 bool bVar343;
 bool bVar344;
 bool bVar345;
 bool bVar346;
 bool bVar347;
 bool bVar348;
 bool bVar349;
 bool bVar350;
 bool bVar351;
 bool bVar352;
 bool bVar353;
 bool bVar354;
 bool bVar355;
 bool bVar356;
 bool bVar357;
 bool bVar358;
 bool bVar359;
 bool bVar360;
 bool bVar361;
 bool bVar362;
 bool bVar363;
 bool bVar364;
 bool bVar365;
 bool bVar366;
 bool bVar367;
 bool bVar368;
 bool bVar369;
 bool bVar370;
 bool bVar371;
 bool bVar372;
 bool bVar373;
 bool bVar374;
 bool bVar375;
 bool bVar376;
 bool bVar377;
 bool bVar378;
 bool bVar379;
 bool bVar380;
 bool bVar381;
 bool bVar382;
 bool bVar383;
 bool bVar384;
 bool bVar385;
 bool bVar386;
 bool bVar387;
 bool bVar388;
 bool bVar389;
 bool bVar390;
 bool bVar391;
 bool bVar392;
 bool bVar393;
 bool bVar394;
 bool bVar395;
 bool bVar396;
 bool bVar397;
 bool bVar398;
 bool bVar399;
 bool bVar400;
 bool bVar401;
 bool bVar402;
 bool bVar403;
 bool bVar404;
 bool bVar405;
 bool bVar406;
 bool bVar407;
 bool bVar408;
 bool bVar409;
 bool bVar410;
 bool bVar411;
 bool bVar412;
 bool bVar413;
 bool bVar414;
 bool bVar415;
 bool bVar416;
 bool bVar417;
 bool bVar418;
 bool bVar419;
 bool bVar420;
 bool bVar421;
 bool bVar422;
 bool bVar423;
 bool bVar424;
 bool bVar425;
 bool bVar426;
 bool bVar427;
 bool bVar428;
 bool bVar429;
 bool bVar430;
 bool bVar431;
 bool bVar432;
 bool bVar433;
 bool bVar434;
 bool bVar435;
 bool bVar436;
 bool bVar437;
 bool bVar438;
 bool bVar439;
 bool bVar440;
 bool bVar441;
 bool bVar442;
 bool bVar443;
 bool bVar444;
 bool bVar445;
 bool bVar446;
 bool bVar447;
 bool bVar448;
 bool bVar449;
 bool bVar450;
 bool bVar451;
 bool bVar452;
 bool bVar453;
 bool bVar454;
 bool bVar455;
 bool bVar456;
 bool bVar457;
 bool bVar458;
 bool bVar459;
 bool bVar460;
 bool bVar461;
 bool bVar462;
 bool bVar463;
 bool bVar464;
 bool bVar465;
 bool bVar466;
 bool bVar467;
 bool bVar468;
 bool bVar469;
 bool bVar470;
 bool bVar471;
 bool bVar472;
 bool bVar473;
 bool bVar474;
 bool bVar475;
 bool bVar476;
 bool bVar477;
 bool bVar478;
 bool bVar479;
 bool bVar480;
 bool bVar481;
 bool bVar482;
 bool bVar483;
 bool bVar484;
 bool bVar485;
 bool bVar486;
 bool bVar487;
 bool bVar488;
 bool bVar489;
 bool bVar490;
 bool bVar491;
 bool bVar492;
 bool bVar493;
 bool bVar494;
 bool bVar495;
 bool bVar496;
 bool bVar497;
 bool bVar498;
 bool bVar499;
 bool bVar500;
 bool bVar501;
 bool bVar502;
 bool bVar503;
 bool bVar504;
 bool bVar505;
 bool bVar506;
 bool bVar507;
 bool bVar508;
 bool bVar509;
 bool bVar510;
 bool bVar511;
 bool bVar512;
 bool bVar513;
 bool bVar514;
 bool bVar515;
 bool bVar516;
 bool bVar517;
 bool bVar518;
 bool bVar519;
 bool bVar520;
 bool bVar521;
 bool bVar522;
 bool bVar523;
 bool bVar524;
 bool bVar525;
 bool bVar526;
 bool bVar527;
 bool bVar528;
 bool bVar529;
 bool bVar530;
 bool bVar531;
 bool bVar532;
 bool bVar533;
 bool bVar534;
 bool bVar535;
 bool bVar536;
 bool bVar537;
 bool bVar538;
 bool bVar539;
 bool bVar540;
 bool bVar541;
 bool bVar542;
 bool bVar543;
 bool bVar544;
 bool bVar545;
 bool bVar546;
 bool bVar547;
 bool bVar548;
 bool bVar549;
 bool bVar550;
 bool bVar551;
 bool bVar552;
 bool bVar553;
 bool bVar554;
 bool bVar555;
 bool bVar556;
 bool bVar557;
 bool bVar558;
 bool bVar559;
 bool bVar560;
 bool bVar561;
 bool bVar562;
 bool bVar563;
 bool bVar564;
 bool bVar565;
 bool bVar566;
 bool bVar567;
 bool bVar568;
 bool bVar569;
 bool bVar570;
 bool bVar571;
 bool bVar572;
 bool bVar573;
 bool bVar574;
 bool bVar575;
 bool bVar576;
 bool bVar577;
 bool bVar578;
 bool bVar579;
 bool bVar580;
 bool bVar581;
 bool bVar582;
 bool bVar583;
 bool bVar584;
 bool bVar585;
 bool bVar586;
 bool bVar587;
 bool bVar588;
 bool bVar589;
 bool bVar590;
 bool bVar591;
 bool bVar592;
 bool bVar593;
 bool bVar594;
 bool bVar595;
 bool bVar596;
 bool bVar597;
 bool bVar598;
 bool bVar599;
 bool bVar600;
 bool bVar601;
 bool bVar602;
 bool bVar603;
 bool bVar604;
 bool bVar605;
 bool bVar606;
 bool bVar607;
 bool bVar608;
 bool bVar609;
 bool bVar610;
 bool bVar611;
 bool bVar612;
 bool bVar613;
 bool bVar614;
 bool bVar615;
 bool bVar616;
 bool bVar617;
 bool bVar618;
 bool bVar619;
 bool bVar620;
 bool bVar621;
 bool bVar622;
 bool bVar623;
 bool bVar624;
 bool bVar625;
 bool bVar626;
 bool bVar627;
 bool bVar628;
 bool bVar629;
 bool bVar630;
 bool bVar631;
 bool bVar632;
 bool bVar633;
 bool bVar634;
 bool bVar635;
 bool bVar636;
 bool bVar637;
 bool bVar638;
 bool bVar639;
 bool bVar640;
 bool bVar641;
 bool bVar642;
 bool bVar643;
 bool bVar644;
 bool bVar645;
 bool bVar646;
 bool bVar647;
 bool bVar648;
 bool bVar649;
 bool bVar650;
 bool bVar651;
 bool bVar652;
 bool bVar653;
 bool bVar654;
 bool bVar655;
 bool bVar656;
 bool bVar657;
 bool bVar658;
 bool bVar659;
 bool bVar660;
 bool bVar661;
 bool bVar662;
 bool bVar663;
 bool bVar664;
 bool bVar665;
 bool bVar666;
 bool bVar667;
 bool bVar668;
 bool bVar669;
 bool bVar670;
 bool bVar671;
 bool bVar672;
 bool bVar673;
 bool bVar674;
 bool bVar675;
 bool bVar676;
 bool bVar677;
 bool bVar678;
 bool bVar679;
 bool bVar680;
 bool bVar681;
 bool bVar682;
 bool bVar683;
 bool bVar684;
 bool bVar685;
 bool bVar686;
 bool bVar687;
 bool bVar688;
 bool bVar689;
 bool bVar690;
 bool bVar691;
 bool bVar692;
 bool bVar693;
 bool bVar694;
 bool bVar695;
 bool bVar696;
 bool bVar697;
 bool bVar698;
 bool bVar699;
 bool bVar700;
 bool bVar701;
 bool bVar702;
 bool bVar703;
 bool bVar704;
 bool bVar705;
 bool bVar706;
 bool bVar707;
 bool bVar708;
 bool bVar709;
 bool bVar710;
 bool bVar711;
 bool bVar712;
 bool bVar713;
 bool bVar714;
 bool bVar715;
 bool bVar716;
 bool bVar717;
 bool bVar718;
 bool bVar719;
 bool bVar720;
 bool bVar721;
 bool bVar722;
 bool bVar723;
 bool bVar724;
 bool bVar725;
 bool bVar726;
 bool bVar727;
 bool bVar728;
 bool bVar729;
 bool bVar730;
 bool bVar731;
 bool bVar732;
 bool bVar733;
 bool bVar734;
 bool bVar735;
 bool bVar736;
 bool bVar737;
 bool bVar738;
 bool bVar739;
 bool bVar740;
 bool bVar741;
 bool bVar742;
 bool bVar743;
 bool bVar744;
 bool bVar745;
 bool bVar746;
 bool bVar747;
 bool bVar748;
 bool bVar749;
 bool bVar750;
 bool bVar751;
 bool bVar752;
 bool bVar753;
 bool bVar754;
 bool bVar755;
 bool bVar756;
 bool bVar757;
 bool bVar758;
 bool bVar759;
 bool bVar760;
 bool bVar761;
 bool bVar762;
 bool bVar763;
 bool bVar764;
 bool bVar765;
 bool bVar766;
 bool bVar767;
 bool bVar768;
 bool bVar769;
 bool bVar770;
 bool bVar771;
 bool bVar772;
 bool bVar773;
 bool bVar774;
 bool bVar775;
 bool bVar776;
 bool bVar777;
 bool bVar778;
 bool bVar779;
 bool bVar780;
 bool bVar781;
 bool bVar782;
 bool bVar783;
 bool bVar784;
 bool bVar785;
 bool bVar786;
 bool bVar787;
 bool bVar788;
 bool bVar789;
 bool bVar790;
 bool bVar791;
 bool bVar792;
 bool bVar793;
 bool bVar794;
 bool bVar795;
 bool bVar796;
 bool bVar797;
 bool bVar798;
 bool bVar799;
 bool bVar800;
 bool bVar801;
 bool bVar802;
 bool bVar803;
 bool bVar804;
 bool bVar805;
 bool bVar806;
 bool bVar807;
 bool bVar808;
 bool bVar809;
 bool bVar810;
 bool bVar811;
 bool bVar812;
 bool bVar813;
 bool bVar814;
 bool bVar815;
 bool bVar816;
 bool bVar817;
 bool bVar818;
 bool bVar819;
 bool bVar820;
 bool bVar821;
 bool bVar822;
 bool bVar823;
 bool bVar824;
 bool bVar825;
 bool bVar826;
 bool bVar827;
 bool bVar828;
 bool bVar829;
 bool bVar830;
 bool bVar831;
 bool bVar832;
 bool bVar833;
 bool bVar834;
 bool bVar835;
 bool bVar836;
 bool bVar837;
 bool bVar838;
 bool bVar839;
 bool bVar840;
 bool bVar841;
 bool bVar842;
 bool bVar843;
 bool bVar844;
 bool bVar845;
 bool bVar846;
 bool bVar847;
 bool bVar848;
 bool bVar849;
 bool bVar850;
 bool bVar851;
 bool bVar852;
 bool bVar853;
 bool bVar854;
 bool bVar855;
 bool bVar856;
 bool bVar857;
 bool bVar858;
 bool bVar859;
 bool bVar860;
 bool bVar861;
 bool bVar862;
 bool bVar863;
 bool bVar864;
 bool bVar865;
 bool bVar866;
 bool bVar867;
 bool bVar868;
 bool bVar869;
 bool bVar870;
 bool bVar871;
 bool bVar872;
 bool bVar873;
 bool bVar874;
 bool bVar875;
 bool bVar876;
 bool bVar877;
 bool bVar878;
 bool bVar879;
 bool bVar880;
 bool bVar881;
 bool bVar882;
 bool bVar883;
 bool bVar884;
 bool bVar885;
 bool bVar886;
 bool bVar887;
 bool bVar888;
 bool bVar889;
 bool bVar890;
 bool bVar891;
 bool bVar892;
 bool bVar893;
 bool bVar894;
 bool bVar895;
 bool bVar896;
 bool bVar897;
 bool bVar898;
 bool bVar899;
 bool bVar900;
 bool bVar901;
 bool bVar902;
 bool bVar903;
 bool bVar904;
 bool bVar905;
 bool bVar906;
 bool bVar907;
 bool bVar908;
 bool bVar909;
 bool bVar910;
 bool bVar911;
 bool bVar912;
 bool bVar913;
 bool bVar914;
 bool bVar915;
 bool bVar916;
 bool bVar917;
 bool bVar918;
 bool bVar919;
 bool bVar920;
 bool bVar921;
 bool bVar922;
 bool bVar923;
 bool bVar924;
 bool bVar925;
 bool bVar926;
 bool bVar927;
 bool bVar928;
 bool bVar929;
 bool bVar930;
 bool bVar931;
 bool bVar932;
 bool bVar933;
 bool bVar934;
 bool bVar935;
 bool bVar936;
 bool bVar937;
 bool bVar938;
 bool bVar939;
 bool bVar940;
 bool bVar941;
 bool bVar942;
 bool bVar943;
 bool bVar944;
 bool bVar945;
 bool bVar946;
 bool bVar947;
 bool bVar948;
 bool bVar949;
 bool bVar950;
 bool bVar951;
 bool bVar952;
 bool bVar953;
 bool bVar954;
 bool bVar955;
 bool bVar956;
 bool bVar957;
 bool bVar958;
 bool bVar959;
 bool bVar960;
 bool bVar961;
 bool bVar962;
 bool bVar963;
 bool bVar964;
 bool bVar965;
 bool bVar966;
 bool bVar967;
 bool bVar968;
 bool bVar969;
 bool bVar970;
 bool bVar971;
 bool bVar972;
 bool bVar973;
 bool bVar974;
 bool bVar975;
 bool bVar976;
 bool bVar977;
 bool bVar978;
 bool bVar979;
 bool bVar980;
 bool bVar981;
 bool bVar982;
 bool bVar983;
 bool bVar984;
 bool bVar985;
 bool bVar986;
 bool bVar987;
 bool bVar988;
 bool bVar989;
 bool bVar990;
 bool bVar991;
 bool bVar992;
 bool bVar993;
 bool bVar994;
 bool bVar995;
 bool bVar996;
 bool bVar997;
 bool bVar998;
 bool bVar999;
 bool bVar1000;
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
 uVar1 = ((int (*)(void))(iVar2 * 0xc + 0x115cc))();
 return uVar1;
}

// Function: __aeabi_idivmod @ 0x1179c
int __aeabi_idivmod(int param_1,int param_2)
{
 bool bVar1;
 int div_result;
 if (param_2 != 0) {
 div_result = __divsi3(param_1, param_2);
 return div_result;
 }
 bVar1 = param_1 < 0;
 if (0 < param_1) {
 param_1 = 0x7fffffff;
 }
 if (bVar1) {
 param_1 = -0x80000000;
 }
 __aeabi_ldiv0();
 return param_1;
}

// Function: _fini @ 0x117cc
void _fini(void)
{
 return;
}

