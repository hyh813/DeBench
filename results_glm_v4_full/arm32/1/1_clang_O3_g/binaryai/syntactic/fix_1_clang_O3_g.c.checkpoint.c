// Decompiled by BinaryAI
// SHA256: 3608b9dafa99d55d2c5d73fd68da1ed2f62077050e217dfa4af8bc202568cd3f

#include <setjmp.h>
#include <stdbool.h>
#include <stdint.h>

/* Type definitions */
typedef unsigned int uint;
typedef long long longlong;
typedef unsigned long long ulonglong;
typedef unsigned char byte;

/* Global data references */
extern unsigned int stack0x00000004;
unsigned int UNK_00011e5c[] = {50, 80, 100, 120};
int DAT_00011e9c[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
int DAT_00011e6c[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
char completed_0 = 0;
extern void *__dso_handle;
struct __jmp_buf_tag jump_buffer;

/* String data definitions */
char DAT_00011ded[] = "=== Testing Control Flow Level 1 ===\n";
char DAT_00011e11[] = "=== Testing Control Flow Level 2 ===\n";
char DAT_00011e35[] = "=== Testing Control Flow Level 3 ===\n";

/* Helper function implementations */
uint LZCOUNT(uint x)
{
 uint count = 0;
 if (x == 0) return 32;
 if ((x & 0xffff0000) == 0) { count += 16; x <<= 16; }
 if ((x & 0xff000000) == 0) { count += 8; x <<= 8; }
 if ((x & 0xf0000000) == 0) { count += 4; x <<= 4; }
 if ((x & 0xc0000000) == 0) { count += 2; x <<= 2; }
 if ((x & 0x80000000) == 0) { count += 1; }
 return count;
}

int SCARRY4(int a, int b)
{
 return ((unsigned int)a + (unsigned int)b) < (unsigned int)a;
}

/* External function declarations */
extern int __gmon_start__(void);
extern int SCARRY4(int a, int b);
extern uint LZCOUNT(uint x);
extern void __aeabi_ldiv0(void);
extern uint __divsi3(uint param_1, uint param_2);
extern unsigned int __aeabi_idivmod(int param_1, int param_2);

/* Helper function for __do_global_dtors_aux */
void deregister_tm_clones(void)
{
    return;
}

/* Proper function declarations */
extern int __libc_start_main(int (*main)(int, char **, char **), int argc, char **ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
extern int main(int argc, char **argv, char **envp);
extern void abort(void);
extern int puts(const char *s);
extern int printf(const char *format, ...);
extern void longjmp(struct __jmp_buf_tag *env, int val);
extern int _setjmp(struct __jmp_buf_tag *env);
extern int raise(int sig);
extern void __cxa_finalize(void *d);



// Function: <EXTERNAL>::raise @ 0x104f0
// (External function - wrapper removed)

// Function: <EXTERNAL>::__libc_start_main @ 0x104fc
// (External function - wrapper removed)

// Function: <EXTERNAL>::__cxa_finalize @ 0x10508
// (External function - wrapper removed)

// Function: <EXTERNAL>::printf @ 0x10514
// (External function - wrapper removed)

// Function: <EXTERNAL>::longjmp @ 0x10520
// (External function - wrapper removed)

// Function: <EXTERNAL>::_setjmp @ 0x1052c
// (External function - wrapper removed)

// Function: <EXTERNAL>::puts @ 0x10538
// (External function - wrapper removed)

// Function: <EXTERNAL>::abort @ 0x10550
// (External function - wrapper removed)









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
 uVar1 = ((unsigned int *)UNK_00011e5c)[param_1];
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
int loop_nested(int param_1,int param_2)
{
 int iVar1;
 iVar1 = 0;
 if (0 < param_2) {
 iVar1 = param_2 * param_1;
 }
 if (param_1 < 1) {
 iVar1 = 0;
 }
 return iVar1;
}

// Function: loop_break @ 0x108dc
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

// Function: loop_continue @ 0x109c4
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

// Function: goto_forward @ 0x109fc
int goto_forward(int param_1)
{
 int iVar1;
 iVar1 = param_1;
 if (param_1 < 2) {
 iVar1 = 1;
 }
 return param_1 * iVar1 * 2;
}

// Function: goto_backward @ 0x10a14
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

// Function: ternary_op @ 0x10a44
int ternary_op(int param_1,int param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: test_control_flow_l1 @ 0x10a50
void test_control_flow_l1(void)
{
 puts(&DAT_00011ded);
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

// Function: loop_multi_exit @ 0x10c64
int loop_multi_exit(int param_1)
{
 uint uVar1;
 uVar1 = param_1 - 1;
 if (0xb < uVar1) {
 return -1;
 }
 return ((int *)DAT_00011e9c)[(int)uVar1] + ((int *)DAT_00011e6c)[(int)uVar1];
}

// Function: infinite_loop @ 0x10c9c
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

// Function: multi_return @ 0x10cd4
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

// Function: conditional_return @ 0x10d00
int conditional_return(int param_1)
{
 int iVar1;
 iVar1 = -param_1;
 if (0 < param_1) {
 iVar1 = param_1 << 1;
 }
 return iVar1;
}

// Function: duffs_device @ 0x10d14
uint duffs_device(unsigned int *param_1,unsigned int *param_2,uint param_3)
{
 unsigned int *puVar1;
 unsigned int *puVar2;
 unsigned int *puVar3;
 unsigned int *puVar4;
 uint uVar5;
 uint uVar6;
 uint uVar7;
 uVar5 = 0xffffffff;
 if (0 < (int)param_3) {
 uVar6 = param_3 + 7 >> 3;
 puVar1 = param_1;
 puVar2 = param_1;
 puVar3 = param_2;
 puVar4 = param_2;
 uVar7 = uVar6;
 switch(param_3 & 7) {
 case 1:
 puVar3 = param_2 + 1;
 uVar7 = uVar6 - 1;
 puVar1 = param_1 + 1;
 *param_1 = *param_2;
 if (uVar7 == 0 || uVar6 == 0) {
 return param_3;
 }
 break;
 case 2:
 goto switchD_00010d38_caseD_2;
 case 3:
 goto switchD_00010d38_caseD_3;
 case 4:
 goto switchD_00010d38_caseD_4;
 case 5:
 goto switchD_00010d38_caseD_5;
 case 6:
 goto switchD_00010d38_caseD_6;
 case 7:
 goto switchD_00010d38_caseD_7;
 }
 do {
 puVar4 = puVar3 + 1;
 puVar2 = puVar1 + 1;
 *puVar1 = *puVar3;
switchD_00010d38_caseD_7:
 param_2 = puVar4 + 1;
 param_1 = puVar2 + 1;
 *puVar2 = *puVar4;
switchD_00010d38_caseD_6:
 puVar3 = param_2 + 1;
 puVar1 = param_1 + 1;
 *param_1 = *param_2;
switchD_00010d38_caseD_5:
 param_2 = puVar3 + 1;
 param_1 = puVar1 + 1;
 *puVar1 = *puVar3;
switchD_00010d38_caseD_4:
 puVar3 = param_2 + 1;
 puVar1 = param_1 + 1;
 *param_1 = *param_2;
switchD_00010d38_caseD_3:
 param_2 = puVar3 + 1;
 param_1 = puVar1 + 1;
 *puVar1 = *puVar3;
 uVar6 = uVar7;
switchD_00010d38_caseD_2:
 *param_1 = *param_2;
 puVar3 = param_2 + 2;
 uVar7 = uVar6 - 1;
 puVar1 = param_1 + 2;
 param_1[1] = param_2[1];
 uVar5 = param_3;
 } while (uVar7 != 0 && 0 < (int)uVar6);
 }
 return uVar5;
}

// Function: loop_complex_cond @ 0x10dc4
uint loop_complex_cond(uint param_1)
{
 uint uVar1;
 int iVar2;
 uint uVar3;
 uint uVar4;
 bool bVar5;
 if ((int)param_1 < 1) {
 return param_1;
 }
 iVar2 = 0;
 uVar3 = 0;
 do {
 iVar2 = iVar2 + 2;
 uVar4 = uVar3 + 1;
 uVar1 = param_1 - 1;
 if ((param_1 < 2) || ((int)uVar1 <= iVar2)) break;
 bVar5 = uVar3 < 9;
 param_1 = uVar1;
 uVar3 = uVar4;
 } while (bVar5);
 return uVar1 + iVar2 + uVar4;
}

// Function: loop_modify_var @ 0x10e24
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

// Function: loop_external_state @ 0x10e60
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

// Function: recursion_factorial @ 0x10e88
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

// Function: tail_recursion @ 0x10eb8
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

// Function: indirect_recursion_a @ 0x10ee4
uint indirect_recursion_a(uint param_1,int param_2)
{
 if (0 < param_2) {
 param_2 = param_2 + 2;
 do {
 while ((param_1 & 1) != 0) {
 if (param_2 == 3) {
 return param_1 * 3 + 1;
 }
 param_1 = param_1 * 3 + 2;
 param_2 = param_2 + -2;
 if (param_2 < 3) {
 return param_1;
 }
 }
 if (param_2 == 3) {
 return (int)param_1 / 2;
 }
 param_1 = (int)param_1 / 2 + 1;
 param_2 = param_2 + -2;
 } while (2 < param_2);
 }
 return param_1;
}

// Function: call_func_ptr @ 0x10f44
void call_func_ptr(void (*UNRECOVERED_JUMPTABLE)(unsigned int),unsigned int param_2)
{
 (*UNRECOVERED_JUMPTABLE)(param_2);
 return;
}

// Function: call_func_ptr_array @ 0x10f50
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

// Function: double_value @ 0x10f74
int double_value(int param_1)
{
 return param_1 << 1;
}

// Function: triple_value @ 0x10f7c
int triple_value(int param_1)
{
 return param_1 * 3;
}

// Function: call_virtual_func @ 0x10f84
int call_virtual_func(unsigned int param_1,int param_2)
{
 return param_2 << 1;
}

// Function: process_with_callback @ 0x10f8c
int process_with_callback(unsigned int *param_1,int param_2,void *param_3)
{
 int iVar1;
 int iVar2;
 if (0 < param_2) {
 iVar2 = 0;
 do {
 iVar1 = ((int (*)(int))param_3)(*param_1);
 iVar2 = iVar1 + iVar2;
 param_2 = param_2 + -1;
 param_1 = param_1 + 1;
 } while (param_2 != 0);
 return iVar2;
 }
 return 0;
}

// Function: test_control_flow_l2 @ 0x10fdc
void test_control_flow_l2(void)
{
 int iVar1;
 uint uVar2;
 uint uVar3;
 int iVar4;
 puts(&DAT_00011e11);
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
 printf("CF-L2-06 (loop_complex_cond): %d\n");
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

// Function: non_local_jump @ 0x111d4
int non_local_jump(uint param_1)
{
 int iVar1;
 iVar1 = _setjmp(&jump_buffer);
 if (iVar1 != 0) {
 return -1;
 }
 if (param_1 != 0xffffffff && (int)(param_1 + 1) < 0 == SCARRY4(param_1,1)) {
 if (param_1 < 0x65) {
 return param_1 << 1;
 }
 longjmp(&jump_buffer,2);
 }
 longjmp(&jump_buffer,1);
}

// Function: cpp_exception @ 0x11248
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

// Function: large_jump_table @ 0x11264
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
 return __aeabi_idivmod(param_2, param_3);
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

// Function: op_add @ 0x1128c
int op_add(int param_1,int param_2)
{
 return param_2 + param_1;
}

// Function: op_sub @ 0x11294
int op_sub(int param_1,int param_2)
{
 return param_1 - param_2;
}

// Function: op_mul @ 0x1129c
int op_mul(int param_1,int param_2)
{
 return param_2 * param_1;
}

// Function: op_div @ 0x112a8
uint op_div(unsigned int param_1,int param_2)
{
 if (param_2 != 0) {
 return __divsi3(param_1, (uint)param_2);
 }
 return 0;
}

// Function: op_mod @ 0x112c4
unsigned int op_mod(unsigned int param_1,int param_2)
{
 unsigned int extraout_r1;
 if (param_2 != 0) {
 extraout_r1 = __aeabi_idivmod(param_1, param_2);
 return extraout_r1;
 }
 return 0;
}

// Function: op_and @ 0x112e4
uint op_and(uint param_1,uint param_2)
{
 return param_2 & param_1;
}

// Function: op_or @ 0x112ec
uint op_or(uint param_1,uint param_2)
{
 return param_2 | param_1;
}

// Function: op_xor @ 0x112f4
uint op_xor(uint param_1,uint param_2)
{
 return param_2 ^ param_1;
}

// Function: op_shl @ 0x112fc
int op_shl(int param_1,uint param_2)
{
 return param_1 << (param_2 & 0xff);
}

// Function: op_shr @ 0x11304
int op_shr(int param_1,uint param_2)
{
 return param_1 >> (param_2 & 0xff);
}

// Function: conditional_func_ptr @ 0x1130c
void conditional_func_ptr(int param_1,unsigned int param_2)
{
 int (*UNRECOVERED_JUMPTABLE)(int);
 int (*pcVar1)(int);
 pcVar1 = recursion_factorial;
 if (param_1 == 1) {
 pcVar1 = triple_value;
 }
 UNRECOVERED_JUMPTABLE = double_value;
 if (param_1 != 0) {
 UNRECOVERED_JUMPTABLE = pcVar1;
 }
 (*UNRECOVERED_JUMPTABLE)(param_2);
 return;
}

// Function: state_machine @ 0x11348
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

// Function: fsm_func_table @ 0x113b0
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

// Function: state_idle @ 0x113d0
bool state_idle(int param_1)
{
 return param_1 == 1;
}

// Function: state_processing @ 0x113e0
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

// Function: state_done @ 0x113f8
unsigned int state_done(void)
{
 return 2;
}

// Function: state_error @ 0x11400
int state_error(int param_1)
{
 if (param_1 != 0) {
 param_1 = 3;
 }
 return param_1;
}

// Function: computed_goto @ 0x1140c
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

// Function: obfuscated_cf @ 0x1144c
int obfuscated_cf(int param_1)
{
 return param_1 << 1;
}

// Function: opaque_predicate @ 0x11454
int opaque_predicate(int param_1)
{
 return param_1 << 1;
}

// Function: overlapped_code @ 0x1145c
int overlapped_code(uint param_1)
{
 int iVar1;
 iVar1 = param_1 * 3 + 1;
 if ((param_1 & 1) == 0) {
 iVar1 = (int)param_1 / 2;
 }
 return iVar1;
}

// Function: test_control_flow_l3 @ 0x11478
void test_control_flow_l3(void)
{
 unsigned int uVar1;
 int iVar2;
 puts(&DAT_00011e35);
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

// Function: main @ 0x11590
int main(int argc, char **argv, char **envp)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}







// Function: __aeabi_ldiv0 @ 0x117ec
void __aeabi_ldiv0(void)
{
 raise(8);
 return;
}



