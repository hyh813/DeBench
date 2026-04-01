// Decompiled by BinaryAI
// SHA256: 9e5921ac2d40748dc1f2c52d8f656c5cafcd53fb75593660ff718ef5ad7c9d75

#include <stdint.h>
#include <stdbool.h>
#include <setjmp.h>

typedef unsigned char byte;
typedef unsigned int uint;

// Global variables
int completed_0 = 0;
jmp_buf jump_buffer;

// External data declarations
extern char DAT_00103004[];
extern char DAT_00103271[];
extern char DAT_00103464[];
extern unsigned int DAT_001035e0[];
extern char CSWTCH_55[];

extern char DAT_00101fa3[];
extern char DAT_00101fab[];
extern char DAT_00101fb6[];
extern char DAT_00101fc1[];

// Forward declarations for functions used in global arrays
int op_add(int, int);
int op_sub(int, int);
int op_mul(int, int);
unsigned long long op_div(int, uint);
int op_mod(int, int);
uint op_and(uint, uint);
uint op_or(uint, uint);
uint op_xor(uint, uint);
int op_shl(int, byte);
int op_shr(int, byte);
bool state_idle(int);
int state_processing(int);
unsigned long long state_done(void);
int state_error(int);
int sequential_ops(int, int, int);
int single_if(int);
bool if_else(int);
int nested_if_2(int, int);
char nested_if_deep(int, int, int, int, int);
unsigned long long if_elseif_chain(int);
int double_value(int);
int triple_value(int);
int recursion_factorial(int);

// Test function declarations
void test_control_flow_l1(void);
void test_control_flow_l2(void);
void test_control_flow_l3(void);

// Additional function declarations
int if_elseif_long(uint);
int switch_small(uint);
int switch_large(uint);
int switch_default(int);
int switch_fallthrough(int);
int loop_for_fixed(int);
unsigned long long loop_while(int);
int loop_dowhile(int);
int loop_nested(int, int);
unsigned long loop_break(int);
int loop_continue(int);
int goto_forward(int);
int goto_backward(int);
int ternary_op(int, int);
int loop_multi_exit(int);
void infinite_loop(int *);
int multi_return(uint);
int conditional_return(int);
uint duffs_device(unsigned int *, unsigned int *, uint);
int loop_complex_cond(int);
int loop_modify_var(int);
void loop_external_state(int *);
int tail_recursion(int, int);
unsigned long long indirect_recursion_a(uint, int);
void call_func_ptr(int (*)(int), unsigned int);
unsigned long long call_func_ptr_array(uint, unsigned int);
int call_virtual_func(unsigned long long, int);
int process_with_callback(long, int, int (*)(int));
int non_local_jump(int);
int cpp_exception(int);
unsigned long long large_jump_table(uint, unsigned int, unsigned int);
void conditional_func_ptr(int, unsigned int);
uint state_machine(int, uint);
unsigned long long fsm_func_table(unsigned long long, uint);
unsigned long long computed_goto(unsigned long long, uint);
int obfuscated_cf(int);
int opaque_predicate(int);
unsigned long long overlapped_code(uint);

// Define missing data symbols
char DAT_00103004[] = "Control Flow L1 Tests";
char DAT_00103271[] = "Control Flow L2 Tests";
char DAT_00103464[] = "Control Flow L3 Tests";
char DAT_00101fa3[] = "label_0";
char DAT_00101fab[] = "label_1";
char DAT_00101fb6[] = "label_2";
char DAT_00101fc1[] = "label_3";
unsigned int DAT_001035e0[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120};
char CSWTCH_55[] = {0, 10, 20, 30};
static void *PTR_op_add_00106020[] = {(void *)op_add, (void *)op_sub, (void *)op_mul, (void *)op_div, (void *)op_mod, (void *)op_and, (void *)op_or, (void *)op_xor, (void *)op_shl, (void *)op_shr, (void *)state_idle, (void *)state_processing, (void *)state_done, (void *)state_error, (void *)sequential_ops, (void *)single_if, (void *)if_else, (void *)nested_if_2, (void *)nested_if_deep, (void *)if_elseif_chain};





// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 return;
}

// External function: __cxa_finalize
// void __cxa_finalize(void *);

// External function: puts
// int puts(const char *);

// External function: __stack_chk_fail
// void __stack_chk_fail(void);

// External function: _setjmp
extern int _setjmp(jmp_buf env);

// External function: __printf_chk
extern int __printf_chk(int flag, const char *format, ...);

// External function: __longjmp_chk
extern void __longjmp_chk(void *env, int val);

// Function: main @ 0x1010e0
int main(void)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}









// Function: recursion_factorial @ 0x1011e9
int recursion_factorial(int param_1)
{
 int iVar1;
 iVar1 = 1;
 for (; 1 < param_1; param_1 = param_1 + -1) {
 iVar1 = iVar1 * param_1;
 }
 return iVar1;
}

// Function: double_value @ 0x1011ff
int double_value(int param_1)
{
 return param_1 * 2;
}

// Function: triple_value @ 0x101207
int triple_value(int param_1)
{
 return param_1 * 3;
}

// Function: op_add @ 0x10120f
int op_add(int param_1,int param_2)
{
 return param_1 + param_2;
}

// Function: op_sub @ 0x101217
int op_sub(int param_1,int param_2)
{
 return param_1 - param_2;
}

// Function: op_mul @ 0x101220
int op_mul(int param_1,int param_2)
{
 return param_1 * param_2;
}

// Function: op_div @ 0x10122a
unsigned long long op_div(int param_1,uint param_2)
{
 unsigned long long result;
 if (param_2 != 0) {
 result = ((unsigned long long)(param_1 / (int)param_2) << 32) | ((unsigned long)(param_1 % (int)param_2) & 0xffffffff);
 } else {
 result = 0;
 }
 return result;
}

// Function: op_mod @ 0x101241
int op_mod(int param_1,int param_2)
{
 if (param_2 != 0) {
 param_2 = param_1 % param_2;
 }
 return param_2;
}

// Function: op_and @ 0x101253
uint op_and(uint param_1,uint param_2)
{
 return param_1 & param_2;
}

// Function: op_or @ 0x10125c
uint op_or(uint param_1,uint param_2)
{
 return param_1 | param_2;
}

// Function: op_xor @ 0x101265
uint op_xor(uint param_1,uint param_2)
{
 return param_1 ^ param_2;
}

// Function: op_shl @ 0x10126e
int op_shl(int param_1,byte param_2)
{
 return param_1 << (param_2 & 0x1f);
}

// Function: op_shr @ 0x101279
int op_shr(int param_1,byte param_2)
{
 return param_1 >> (param_2 & 0x1f);
}

// Function: state_idle @ 0x101284
bool state_idle(int param_1)
{
 return param_1 == 1;
}

// Function: state_processing @ 0x101290
int state_processing(int param_1)
{
 if (param_1 != 2) {
 if (param_1 == 99) {
 return 3;
 }
 param_1 = 1;
 }
 return param_1;
}

// Function: state_done @ 0x1012ac
unsigned long long state_done(void)
{
 return 2;
}

// Function: state_error @ 0x1012b6
int state_error(int param_1)
{
 if (param_1 != 0) {
 param_1 = 3;
 }
 return param_1;
}

// Function: sequential_ops @ 0x1012c6
int sequential_ops(int param_1,int param_2,int param_3)
{
 return (param_1 + param_2) * 2 - param_3;
}

// Function: single_if @ 0x1012d2
int single_if(int param_1)
{
 if (0 < param_1) {
 param_1 = param_1 * 2;
 }
 return param_1;
}

// Function: if_else @ 0x1012df
bool if_else(int param_1)
{
 return 0 < param_1;
}

// Function: nested_if_2 @ 0x1012eb
int nested_if_2(int param_1,int param_2)
{
 if (param_1 < 1) {
 param_1 = 0;
 }
 else if (0 < param_2) {
 return param_1 + param_2;
 }
 return param_1;
}

// Function: nested_if_deep @ 0x1012ff
char nested_if_deep(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 char cVar1;
 cVar1 = '\0';
 if ((((0 < param_1) && (cVar1 = '\x01', 0 < param_2)) && (cVar1 = '\x02', 0 < param_3)) &&
 (cVar1 = '\x03', 0 < param_4)) {
 cVar1 = (0 < param_5) + '\x04';
 }
 return cVar1;
}

// Function: if_elseif_chain @ 0x101330
unsigned long long if_elseif_chain(int param_1)
{
 unsigned long long uVar1;
 uVar1 = 10;
 if (((param_1 != 0) && (uVar1 = 0x14, param_1 != 1)) && (uVar1 = 0x1e, param_1 != 2)) {
 uVar1 = 0xffffffff;
 }
 return uVar1;
}

// Function: if_elseif_long @ 0x101358
int if_elseif_long(uint param_1)
{
 int iVar1;
 iVar1 = -1;
 if (param_1 < 5) {
 iVar1 = (param_1 + 1) * 100;
 }
 return iVar1;
}

// Function: switch_small @ 0x10136a
int switch_small(uint param_1)
{
 int iVar1;
 iVar1 = -1;
 if (param_1 < 4) {
 iVar1 = (int)*(char *)((long)&CSWTCH_55 + (unsigned long)param_1);
 }
 return iVar1;
}

// Function: switch_large @ 0x101384
int switch_large(uint param_1)
{
 int iVar1;
 iVar1 = -1;
 if (param_1 < 10) {
 iVar1 = param_1 * 10;
 }
 return iVar1;
}

// Function: switch_default @ 0x101394
int switch_default(int param_1)
{
 int iVar1;
 iVar1 = 0;
 if (param_1 - 1U < 3) {
 iVar1 = param_1 * 100;
 }
 return iVar1;
}

// Function: switch_fallthrough @ 0x1013a6
int switch_fallthrough(int param_1)
{
 int iVar1;
 if (param_1 == 2) {
 iVar1 = 0;
 }
 else {
 if (param_1 != 3) {
 if (param_1 != 1) {
 return -1;
 }
 iVar1 = 0;
 goto LAB_001013cd;
 }
 iVar1 = 0xc;
 }
 iVar1 = iVar1 + param_1 * 2;
LAB_001013cd:
 return iVar1 + param_1;
}

// Function: loop_for_fixed @ 0x1013d0
int loop_for_fixed(int param_1)
{
 int iVar1;
 int iVar2;
 iVar2 = 0;
 for (iVar1 = 0; iVar1 < param_1; iVar1 = iVar1 + 1) {
 iVar2 = iVar2 + iVar1;
 }
 return iVar2;
}

// Function: loop_while @ 0x1013e8
unsigned long long loop_while(int param_1)
{
 unsigned long uVar1;
 uint uVar2;
 unsigned long param_3;
 uVar2 = 0;
 for (; param_1 != 0; param_1 = param_1 / 10) {
 uVar2 = uVar2 + 1;
 param_3 = (unsigned long)(uint)(param_1 % 10);
 }
 uVar1 = 1;
 if (0 < (int)uVar2) {
 uVar1 = (unsigned long)uVar2;
 }
 return (uVar1 << 32) | (param_3 & 0xffffffff);
}

// Function: loop_dowhile @ 0x10140b
int loop_dowhile(int param_1)
{
 int iVar1;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 param_1 = param_1 / 10;
 } while (param_1 != 0);
 return iVar1;
}

// Function: loop_nested @ 0x101427
int loop_nested(int param_1,int param_2)
{
 int iVar1;
 int iVar2;
 iVar1 = 0;
 iVar2 = 0;
 if (param_2 < 0) {
 param_2 = 0;
 iVar2 = 0;
 }
 for (; iVar2 < param_1; iVar2 = iVar2 + 1) {
 iVar1 = iVar1 + param_2;
 }
 return iVar1;
}

// Function: loop_break @ 0x101441
unsigned long loop_break(int param_1)
{
 unsigned long uVar1;
 unsigned long uVar2;
 long in_FS_OFFSET;
 unsigned long long local_24;
 unsigned long long local_1c;
 unsigned int local_14;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_14 = 0x32;
 local_24 = 0x140000000a;
 local_1c = 0x280000001e;
 uVar1 = 0;
 do {
 uVar2 = uVar1 & 0xffffffff;
 if (*(int *)((long)&local_24 + uVar1 * 4) == param_1) goto LAB_00101499;
 uVar1 = uVar1 + 1;
 } while (uVar1 != 5);
 uVar2 = 0xffffffff;
LAB_00101499:
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return uVar2;
}

// Function: loop_continue @ 0x1014b6
int loop_continue(int param_1)
{
 uint uVar1;
 int iVar2;
 iVar2 = 0;
 for (uVar1 = 1; (int)uVar1 <= param_1; uVar1 = uVar1 + 1) {
 if ((uVar1 & 1) != 0) {
 iVar2 = iVar2 + uVar1;
 }
 }
 return iVar2;
}

// Function: goto_forward @ 0x1014d5
int goto_forward(int param_1)
{
 if (0 < param_1) {
 param_1 = param_1 * param_1;
 }
 return param_1 * 2;
}

// Function: goto_backward @ 0x1014e4
int goto_backward(int param_1)
{
 int iVar1;
 int iVar2;
 iVar2 = 1;
 if (0 < param_1) {
 iVar1 = 1;
 do {
 iVar2 = iVar2 * iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 <= param_1);
 }
 return iVar2;
}

// Function: ternary_op @ 0x101505
int ternary_op(int param_1,int param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: test_control_flow_l1 @ 0x101511
void test_control_flow_l1(void)
{
 unsigned int uVar1;
 puts(&DAT_00103004);
 __printf_chk(1,"CF-L1-01 (sequential_ops): %d\n",0x15);
 __printf_chk(1,"CF-L1-02 (single_if): %d\n",0x14);
 __printf_chk(1,"CF-L1-02 (single_if): %d\n",0xfffffffb);
 __printf_chk(1,"CF-L1-03 (if_else): %d\n",1);
 __printf_chk(1,"CF-L1-03 (if_else): %d\n",0);
 __printf_chk(1,"CF-L1-04 (nested_if_2): %d\n",0xf);
 __printf_chk(1,"CF-L1-04 (nested_if_2): %d\n",10);
 __printf_chk(1,"CF-L1-04 (nested_if_2): %d\n",0);
 __printf_chk(1,"CF-L1-05 (nested_if_deep): %d\n",5);
 __printf_chk(1,"CF-L1-06 (if_elseif_chain): %d\n",0x14);
 __printf_chk(1,"CF-L1-07 (if_elseif_long): %d\n",400);
 __printf_chk(1,"CF-L1-08 (switch_small): %d\n",0x32);
 __printf_chk(1,"CF-L1-09 (switch_large): %d\n",0x46);
 __printf_chk(1,"CF-L1-10 (switch_default): %d\n",0);
 __printf_chk(1,"CF-L1-11 (switch_fallthrough): %d\n",0x15);
 uVar1 = loop_for_fixed(10);
 __printf_chk(1,"CF-L1-12 (loop_for_fixed): %d\n",uVar1);
 uVar1 = loop_while(0x3039);
 __printf_chk(1,"CF-L1-13 (loop_while): %d\n",uVar1);
 uVar1 = loop_dowhile(0x2694);
 __printf_chk(1,"CF-L1-14 (loop_dowhile): %d\n",uVar1);
 uVar1 = loop_nested(3,4);
 __printf_chk(1,"CF-L1-15 (loop_nested): %d\n",uVar1);
 uVar1 = loop_break(0x1e);
 __printf_chk(1,"CF-L1-16 (loop_break): %d\n",uVar1);
 uVar1 = loop_break(99);
 __printf_chk(1,"CF-L1-16 (loop_break): %d\n",uVar1);
 uVar1 = loop_continue(10);
 __printf_chk(1,"CF-L1-17 (loop_continue): %d\n",uVar1);
 __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0x32);
 __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0xfffffffa);
 __printf_chk(1,"CF-L1-19 (goto_backward): %d\n",0x78);
 __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",10);
 __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",8);
 return;
}

// Function: loop_multi_exit @ 0x1017ce
int loop_multi_exit(int param_1)
{
 int iVar1;
 long lVar2;
 unsigned int *puVar3;
 unsigned int *puVar4;
 unsigned int *puVar5;
 long in_FS_OFFSET;
 unsigned int local_48 [14];
 long local_10;
 puVar3 = local_48;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 iVar1 = 0;
 puVar4 = &DAT_001035e0;
 puVar5 = local_48;
 for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
 *puVar5 = *puVar4;
 puVar4 = puVar4 + 1;
 puVar5 = puVar5 + 1;
 }
 do {
 lVar2 = 0;
 do {
 if (*(int *)((long)puVar3 + lVar2 * 4) == param_1) {
 iVar1 = iVar1 * 10 + (int)lVar2;
 goto LAB_00101823;
 }
 lVar2 = lVar2 + 1;
 } while (lVar2 != 4);
 iVar1 = iVar1 + 1;
 puVar3 = (unsigned int *)((long)puVar3 + 0x10);
 } while (iVar1 != 3);
 iVar1 = -1;
LAB_00101823:
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar1;
 }
 __stack_chk_fail();
}

// Function: infinite_loop @ 0x10183d
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

// Function: multi_return @ 0x101859
int multi_return(uint param_1)
{
 int iVar1;
 iVar1 = -1;
 if (-1 < (int)param_1) {
 iVar1 = param_1 * 2;
 if (iVar1 < 0x65) {
 if ((param_1 & 1) != 0) {
 return param_1 + 1;
 }
 }
 else {
 iVar1 = -2;
 }
 }
 return iVar1;
}

// Function: conditional_return @ 0x10187c
int conditional_return(int param_1)
{
 if (0 < param_1) {
 return param_1 * 2;
 }
 if (param_1 != 0) {
 param_1 = -param_1;
 }
 return param_1;
}

// Function: duffs_device @ 0x10188e
uint duffs_device(unsigned int *param_1,unsigned int *param_2,uint param_3)
{
 unsigned int uVar1;
 unsigned int *puVar2;
 unsigned int *puVar3;
 int iVar4;
 if ((int)param_3 < 1) {
 param_3 = 0xffffffff;
 }
 else {
 iVar4 = (int)(param_3 + 7) >> 3;
 puVar2 = param_1;
 puVar3 = param_1;
 switch(param_3 & 7) {
 case 1:
 while( true ) {
 *param_1 = *param_2;
 iVar4 = iVar4 + -1;
 if (iVar4 == 0) break;
 param_2 = param_2 + 1;
 param_1 = param_1 + 1;
switchD_001018c1_caseD_7:
 uVar1 = *param_2;
 puVar2 = param_1 + 1;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
switchD_001018c1_caseD_6:
 uVar1 = *param_2;
 puVar3 = puVar2 + 1;
 param_2 = param_2 + 1;
 *puVar2 = uVar1;
switchD_001018c1_caseD_5:
 uVar1 = *param_2;
 param_1 = puVar3 + 1;
 param_2 = param_2 + 1;
 *puVar3 = uVar1;
switchD_001018c1_caseD_4:
 uVar1 = *param_2;
 puVar2 = param_1 + 1;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
switchD_001018c1_caseD_3:
 uVar1 = *param_2;
 param_1 = puVar2 + 1;
 param_2 = param_2 + 1;
 *puVar2 = uVar1;
switchD_001018c1_caseD_2:
 uVar1 = *param_2;
 puVar2 = param_1 + 1;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
switchD_001018c1_caseD_1:
 uVar1 = *param_2;
 param_1 = puVar2 + 1;
 param_2 = param_2 + 1;
 *puVar2 = uVar1;
 }
 break;
 case 2:
 goto switchD_001018c1_caseD_2;
 case 3:
 goto switchD_001018c1_caseD_3;
 case 4:
 goto switchD_001018c1_caseD_4;
 case 5:
 goto switchD_001018c1_caseD_5;
 case 6:
 goto switchD_001018c1_caseD_6;
 case 7:
 goto switchD_001018c1_caseD_7;
 default:
 goto switchD_001018c1_caseD_7;
 }
 }
 return param_3;
}

// Function: loop_complex_cond @ 0x101939
int loop_complex_cond(int param_1)
{
 int iVar1;
 for (iVar1 = 0; (iVar1 * 2 < param_1 - iVar1 && (iVar1 < 10)); iVar1 = iVar1 + 1) {
 }
 return iVar1 * 3 + (param_1 - iVar1);
}

// Function: loop_modify_var @ 0x101958
int loop_modify_var(int param_1)
{
 int iVar1;
 int iVar2;
 iVar2 = 0;
 for (iVar1 = 0; iVar1 < param_1; iVar1 = iVar1 + 1) {
 iVar2 = iVar2 + iVar1;
 if (5 < iVar1) {
 iVar1 = iVar1 + 2;
 }
 }
 return iVar2;
}

// Function: loop_external_state @ 0x101978
void loop_external_state(int *param_1)
{
 int iVar1;
 iVar1 = 0;
 do {
 if (*param_1 != 0) {
 return;
 }
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x65);
 return;
}

// Function: tail_recursion @ 0x10198c
int tail_recursion(int param_1,int param_2)
{
 for (; 1 < param_1; param_1 = param_1 + -1) {
 param_2 = param_2 * param_1;
 }
 return param_2;
}

// Function: indirect_recursion_a @ 0x10199f
unsigned long long indirect_recursion_a(uint param_1,int param_2)
{
 int iVar1;
 uint uVar2;
 unsigned long uVar3;
 unsigned long param_3 = 0;
 uVar3 = (unsigned long)param_1;
 for (; 0 < param_2; param_2 = param_2 + -2) {
 iVar1 = (int)uVar3;
 if ((uVar3 & 1) == 0) {
 uVar3 = (long)iVar1 / 2 & 0xffffffff;
 param_3 = (long)iVar1 % 2 & 0xffffffff;
 if (param_2 == 1) break;
 uVar2 = (int)uVar3 + 1;
 }
 else {
 if (param_2 == 1) {
 return ((unsigned long long)(iVar1 * 3 + 1) << 32) | param_3;
 }
 uVar2 = iVar1 * 3 + 2;
 }
 uVar3 = (unsigned long)uVar2;
 }
 return (uVar3 << 32) | param_3;
}

// Function: call_func_ptr @ 0x1019d2
void call_func_ptr(int (*func)(int),unsigned int param_2)
{
 (*func)(param_2);
 return;
}

// Function: call_func_ptr_array @ 0x1019dd
unsigned long long call_func_ptr_array(uint param_1,unsigned int param_2)
{
 unsigned long long uVar1;
 long in_FS_OFFSET;
 int (*local_28 [3])(int);
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_28[0] = double_value;
 local_28[1] = triple_value;
 local_28[2] = recursion_factorial;
 if (param_1 < 3) {
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 uVar1 = (*local_28[(int)param_1])(param_2);
 return uVar1;
 }
 }
 else if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return 0xffffffff;
 }
 __stack_chk_fail();
}

// Function: call_virtual_func @ 0x101a59
int call_virtual_func(unsigned long long param_1,int param_2)
{
 return param_2 * 2;
}

// Function: process_with_callback @ 0x101a61
int process_with_callback(long param_1,int param_2,int (*param_3)(int))
{
 int iVar1;
 long lVar2;
 int iVar3;
 iVar3 = 0;
 for (lVar2 = 0; (int)lVar2 < param_2; lVar2 = lVar2 + 1) {
 iVar1 = (*param_3)(*(unsigned int *)(param_1 + lVar2 * 4));
 iVar3 = iVar3 + iVar1;
 }
 return iVar3;
}

// Function: test_control_flow_l2 @ 0x101a9a
void test_control_flow_l2(void)
{
 unsigned int uVar1;
 long lVar2;
 unsigned int *puVar3;
 long in_FS_OFFSET;
 byte bVar4;
 unsigned int local_8c;
 unsigned int local_88;
 unsigned long long local_84;
 unsigned long long local_7c;
 unsigned int local_74;
 unsigned long long local_70;
 unsigned long long local_68;
 unsigned long long local_60;
 unsigned long long local_58;
 unsigned int local_50 [8];
 long local_30;
 bVar4 = 0;
 local_30 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_00103271);
 uVar1 = loop_multi_exit(7);
 __printf_chk(1,"CF-L2-01 (loop_multi_exit): %d\n",uVar1);
 local_8c = 0;
 infinite_loop(&local_8c);
 __printf_chk(1,"CF-L2-02 (infinite_loop): %d\n",local_8c);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xffffffff);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xfffffffe);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",4);
 __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",10);
 __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",5);
 local_60 = 0x600000005;
 local_58 = 0x800000007;
 puVar3 = local_50;
 for (lVar2 = 8; lVar2 != 0; lVar2 = lVar2 + -1) {
 *puVar3 = 0;
 puVar3 = puVar3 + (unsigned long)bVar4 * -2 + 1;
 }
 local_70 = 0x200000001;
 local_68 = 0x400000003;
 uVar1 = duffs_device(local_50,&local_70,8);
 __printf_chk(1,"CF-L2-05 (duffs_device): %d\n",uVar1);
 uVar1 = loop_complex_cond(10);
 __printf_chk(1,"CF-L2-06 (loop_complex_cond): %d\n",uVar1);
 uVar1 = loop_modify_var(10);
 __printf_chk(1,"CF-L2-07 (loop_modify_var): %d\n",uVar1);
 local_88 = 0;
 loop_external_state(&local_88);
 __printf_chk(1,"CF-L2-08 (loop_external_state): %d\n",local_88);
 uVar1 = recursion_factorial(5);
 __printf_chk(1,"CF-L2-09 (recursion_factorial): %d\n",uVar1);
 __printf_chk(1,"CF-L2-10 (tail_recursion): %d\n",0x78);
 uVar1 = indirect_recursion_a(6,1);
 __printf_chk(1,"CF-L2-11 (indirect_recursion): %d\n",uVar1);
 call_func_ptr(double_value,5);
 __printf_chk(1,"CF-L2-12 (call_func_ptr): %d\n",10);
 uVar1 = call_func_ptr_array(0,5);
 __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",uVar1);
 uVar1 = call_func_ptr_array(2,5);
 __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",uVar1);
 local_84 = 0x200000001;
 local_7c = 0x400000003;
 local_74 = 5;
 uVar1 = process_with_callback(&local_84,5,double_value);
 __printf_chk(1,"CF-L2-15 (process_with_callback): %d\n",uVar1);
 if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return;
}

// Function: non_local_jump @ 0x101d73
int non_local_jump(int param_1)
{
 int iVar1;
 unsigned long long uVar2;
 iVar1 = _setjmp(jump_buffer);
 if (iVar1 != 0) {
 return -1;
 }
 uVar2 = 1;
 if (-1 < param_1) {
 if (param_1 < 0x65) {
 return param_1 * 2;
 }
 uVar2 = 2;
 }
 __longjmp_chk(jump_buffer,(int)uVar2);
 return 0;
}

// Function: cpp_exception @ 0x101dc5
int cpp_exception(int param_1)
{
 int iVar1;
 iVar1 = -1;
 if ((-1 < param_1) && (iVar1 = -2, param_1 < 0x65)) {
 iVar1 = param_1 * 2;
 }
 return iVar1;
}

// Function: large_jump_table @ 0x101dde
unsigned long long large_jump_table(uint param_1,unsigned int param_2,unsigned int param_3)
{
 unsigned long long uVar1;
 long lVar2;
 long lVar3;
 char **ppuVar4;
 void **ppcVar5;
 long in_FS_OFFSET;
 int (*local_60 [10])(int,int);
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 lVar3 = 0;
 ppuVar4 = &PTR_op_add_00106020;
 ppcVar5 = (void **)local_60;
 for (lVar2 = 0x14; lVar2 != 0; lVar2 = lVar2 + -1) {
 *(unsigned int *)ppcVar5 = *(unsigned int *)ppuVar4;
 ppuVar4 = (char **)((long)ppuVar4 + 4);
 ppcVar5 = (void **)((long)ppcVar5 + 4);
 }
 if (param_1 < 10) {
 lVar3 = local_10 - *(long *)(in_FS_OFFSET + 0x28);
 if (lVar3 == 0) {
 uVar1 = (*local_60[(int)param_1])(param_2,param_3);
 return uVar1;
 }
 }
 else if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return 0xffffffff;
 }
 __stack_chk_fail();
}

// Function: conditional_func_ptr @ 0x101e55
void conditional_func_ptr(int param_1,unsigned int param_2)
{
 int (*UNRECOVERED_JUMPTABLE)(int);
 UNRECOVERED_JUMPTABLE = double_value;
 if (param_1 != 0) {
 UNRECOVERED_JUMPTABLE = triple_value;
 if (param_1 != 1) {
 UNRECOVERED_JUMPTABLE = recursion_factorial;
 }
 }
 (*UNRECOVERED_JUMPTABLE)(param_2);
 return;
}

// Function: state_machine @ 0x101e7e
uint state_machine(int param_1,uint param_2)
{
 uint uVar1;
 bool bVar2;
 if (param_2 == 2) {
 return 2;
 }
 if ((int)param_2 < 3) {
 if (param_2 == 0) {
 return (uint)(param_1 == 1);
 }
 if (param_2 == 1) {
 if (param_1 == 2) {
 return 2;
 }
 bVar2 = param_1 == 99;
 uVar1 = 3;
LAB_00101ebc:
 if (bVar2) {
 param_2 = uVar1;
 }
 return param_2;
 }
 }
 else if (param_2 == 3) {
 uVar1 = 0;
 bVar2 = param_1 == 0;
 goto LAB_00101ebc;
 }
 return 3;
}

// Function: fsm_func_table @ 0x101ec6
unsigned long long fsm_func_table(unsigned long long param_1,uint param_2)
{
 unsigned long long uVar1;
 long in_FS_OFFSET;
 unsigned long long (*local_30 [4])(void);
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_30[0] = (unsigned long long (*)(void))state_idle;
 local_30[1] = (unsigned long long (*)(void))state_processing;
 local_30[2] = state_done;
 local_30[3] = (unsigned long long (*)(void))state_error;
 if (param_2 < 4) {
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 uVar1 = (*local_30[(int)param_2])();
 return uVar1;
 }
 }
 else if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return 3;
 }
 __stack_chk_fail();
}

// Function: computed_goto @ 0x101f4e
unsigned long long computed_goto(unsigned long long param_1,uint param_2)
{
 unsigned long long uVar1;
 if (param_2 < 4) {
 uVar1 = param_2 + 1;
 return uVar1;
 }
 return 0xffffffff;
}

// Function: obfuscated_cf @ 0x101fe4
int obfuscated_cf(int param_1)
{
 return param_1 * 2;
}

// Function: opaque_predicate @ 0x101fec
int opaque_predicate(int param_1)
{
 return param_1 * 2;
}

// Function: overlapped_code @ 0x101ff4
unsigned long long overlapped_code(uint param_1)
{
 if ((param_1 & 1) != 0) {
 return ((unsigned long long)(param_1 * 3 + 1) << 32);
 }
 return ((unsigned long long)((long)(int)param_1 / 2 & 0xffffffff) << 32) | ((long)(int)param_1 % 2 & 0xffffffff);
}

// Function: test_control_flow_l3 @ 0x10200d
void test_control_flow_l3(void)
{
 unsigned int uVar1;
 long in_FS_OFFSET;
 unsigned long long local_20;
 unsigned long long local_18;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_00103464);
 uVar1 = non_local_jump(5);
 __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",uVar1);
 uVar1 = non_local_jump(0xfffffffb);
 __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",uVar1);
 __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",10);
 __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",0xffffffff);
 uVar1 = large_jump_table(0,10,5);
 __printf_chk(1,"CF-L3-03 (large_jump_table): %d\n",uVar1);
 conditional_func_ptr(0,5);
 __printf_chk(1,"CF-L3-04 (conditional_func_ptr): %d\n",10);
 __printf_chk(1,"CF-L3-05 (state_machine): %d\n",1);
 uVar1 = fsm_func_table(2,1);
 __printf_chk(1,"CF-L3-06 (fsm_func_table): %d\n",uVar1);
 local_20 = 0x100000000;
 local_18 = 0x300000002;
 uVar1 = computed_goto(&local_20,2);
 __printf_chk(1,"CF-L3-07 (computed_goto): %d\n",uVar1);
 __printf_chk(1,"CF-L3-08 (obfuscated_cf): %d\n",10);
 __printf_chk(1,"CF-L3-09 (opaque_predicate): %d\n",10);
 __printf_chk(1,"CF-L3-10 (overlapped_code): %d\n",0x10);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return;
}



