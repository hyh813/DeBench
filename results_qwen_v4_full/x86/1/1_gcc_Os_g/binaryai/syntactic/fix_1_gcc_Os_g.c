// Decompiled by BinaryAI
// SHA256: 8768bdeeda16c159b237b176586e8b6010a8361e655ad2c81d46b22b0597369d

#include <stdbool.h>

typedef unsigned int uint;
typedef unsigned char byte;

// Global data declarations
int DAT_00013020[5];
int DAT_00013040[12];
int DAT_000130a0[8];
int DAT_000130c0[8];
int DAT_000130d4[4];
int DAT_000130e8[1];
int DAT_00013355[1];
int DAT_00013548[1];
void *PTR_op_add_00016020[10];
void *PTR_state_idle_00016048[4];
void *PTR_LAB_00016058[4];
int CSWTCH_56[4];
int jump_buffer[10];
extern int unaff_EDI;

// External function declarations
extern void test_control_flow_l1(void);
extern void test_control_flow_l2(void);
extern void test_control_flow_l3(void);



// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 return;
}

// Function: FUN_000110a0 @ 0x110a0
void FUN_000110a0(int param_1)
{
 return;
}

// Function: FUN_000110b0 @ 0x110b0
void FUN_000110b0(void *param_1, unsigned int param_2, void *param_3, int param_4, int param_5, unsigned int param_6, char *param_7)
{
 return;
}

// Function: FUN_000110c0 @ 0x110c0
unsigned long long FUN_000110c0(int *param_1)
{
 return 0;
}

// Function: FUN_000110d0 @ 0x110d0
int FUN_000110d0(void)
{
 return 0;
}

// Function: FUN_000110e0 @ 0x110e0
void FUN_000110e0(int *param_1)
{
 return;
}

// Function: FUN_000110f0 @ 0x110f0
void FUN_000110f0(int param_1, const char *param_2, unsigned int param_3)
{
 return;
}

// Function: FUN_00011100 @ 0x11100
void FUN_00011100(int *param_1, unsigned int param_2, int param_3, int param_4)
{
 return;
}

// Function: main @ 0x11110
unsigned int main(void)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}



// Function: __i686.get_pc_thunk.bx @ 0x1115c
void __i686_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.bx @ 0x11160
void __x86_get_pc_thunk_bx(void)
{
 return;
}







// Function: __x86.get_pc_thunk.dx @ 0x11299
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x1129d
void __x86_get_pc_thunk_di(void)
{
 return;
}

// Function: recursion_factorial @ 0x112a1
int recursion_factorial(int param_1)
{
 int iVar1;
 iVar1 = 1;
 for (; 1 < param_1; param_1 = param_1 + -1) {
 iVar1 = iVar1 * param_1;
 }
 return iVar1;
}

// Function: double_value @ 0x112bd
int double_value(int param_1)
{
 return param_1 * 2;
}

// Function: triple_value @ 0x112cb
int triple_value(int param_1)
{
 return param_1 * 3;
}

// Function: op_add @ 0x112d8
int op_add(int param_1,int param_2)
{
 return param_2 + param_1;
}

// Function: op_sub @ 0x112e7
int op_sub(int param_1,int param_2)
{
 return param_1 - param_2;
}

// Function: op_mul @ 0x112f6
int op_mul(int param_1,int param_2)
{
 return param_2 * param_1;
}

// Function: op_div @ 0x11306
int op_div(int param_1,int param_2)
{
 if (param_2 != 0) {
 param_2 = param_1 / param_2;
 }
 return param_2;
}

// Function: op_mod @ 0x11320
int op_mod(int param_1,int param_2)
{
 if (param_2 != 0) {
 param_2 = param_1 % param_2;
 }
 return param_2;
}

// Function: op_and @ 0x1133a
uint op_and(uint param_1,uint param_2)
{
 return param_2 & param_1;
}

// Function: op_or @ 0x11349
uint op_or(uint param_1,uint param_2)
{
 return param_2 | param_1;
}

// Function: op_xor @ 0x11358
uint op_xor(uint param_1,uint param_2)
{
 return param_2 ^ param_1;
}

// Function: op_shl @ 0x11367
int op_shl(int param_1,byte param_2)
{
 return param_1 << (param_2 & 0x1f);
}

// Function: op_shr @ 0x11378
int op_shr(int param_1,byte param_2)
{
 return param_1 >> (param_2 & 0x1f);
}

// Function: state_idle @ 0x11389
bool state_idle(int param_1)
{
 return param_1 == 1;
}

// Function: state_processing @ 0x1139b
int state_processing(int param_1)
{
 if (param_1 != 2) {
 if (param_1 == 99) {
 param_1 = 3;
 }
 else {
 param_1 = 1;
 }
 }
 return param_1;
}

// Function: state_done @ 0x113bd
unsigned int state_done(void)
{
 return 2;
}

// Function: state_error @ 0x113c7
int state_error(int param_1)
{
 if (param_1 != 0) {
 param_1 = 3;
 }
 return param_1;
}

// Function: sequential_ops @ 0x113dc
int sequential_ops(int param_1,int param_2,int param_3)
{
 return (param_2 + param_1) * 2 - param_3;
}

// Function: single_if @ 0x113f0
int single_if(int param_1)
{
 if (0 < param_1) {
 param_1 = param_1 * 2;
 }
 return param_1;
}

// Function: if_else @ 0x11402
bool if_else(int param_1)
{
 return 0 < param_1;
}

// Function: nested_if_2 @ 0x11414
int nested_if_2(int param_1,int param_2)
{
 if (param_1 < 1) {
 param_1 = 0;
 }
 else if (0 < param_2) {
 param_1 = param_1 + param_2;
 }
 return param_1;
}

// Function: nested_if_deep @ 0x11431
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

// Function: if_elseif_chain @ 0x1146f
unsigned int if_elseif_chain(int param_1)
{
 unsigned int uVar1;
 uVar1 = 10;
 if (((param_1 != 0) && (uVar1 = 0x14, param_1 != 1)) && (uVar1 = 0x1e, param_1 != 2)) {
 uVar1 = 0xffffffff;
 }
 return uVar1;
}

// Function: if_elseif_long @ 0x1149e
int if_elseif_long(uint param_1)
{
 int iVar1;
 iVar1 = -1;
 if (param_1 < 5) {
 iVar1 = (param_1 + 1) * 100;
 }
 return iVar1;
}

// Function: switch_small @ 0x114b8
int switch_small(uint param_1)
{
 int iVar1;
 iVar1 = -1;
 if (param_1 < 4) {
 iVar1 = (int)*(char *)((int)&CSWTCH_56 + param_1);
 }
 return iVar1;
}

// Function: switch_large @ 0x114df
int switch_large(uint param_1)
{
 int iVar1;
 iVar1 = param_1 * 10;
 if (9 < param_1) {
 iVar1 = -1;
 }
 return iVar1;
}

// Function: switch_default @ 0x114f6
int switch_default(int param_1)
{
 int iVar1;
 iVar1 = param_1 * 100;
 if (2 < param_1 - 1U) {
 iVar1 = 0;
 }
 return iVar1;
}

// Function: switch_fallthrough @ 0x1150f
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
 goto LAB_0001153d;
 }
 iVar1 = 0xc;
 }
 iVar1 = param_1 * 2 + iVar1;
LAB_0001153d:
 return iVar1 + param_1;
}

// Function: loop_for_fixed @ 0x11541
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

// Function: loop_while @ 0x1155a
int loop_while(int param_1)
{
 int iVar1;
 int iVar2;
 iVar2 = 0;
 for (; param_1 != 0; param_1 = param_1 / 10) {
 iVar2 = iVar2 + 1;
 }
 iVar1 = 1;
 if (0 < iVar2) {
 iVar1 = iVar2;
 }
 return iVar1;
}

// Function: loop_dowhile @ 0x11583
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

// Function: loop_nested @ 0x115a2
int loop_nested(int param_1,int param_2)
{
 int iVar1;
 int iVar2;
 iVar1 = 0;
 iVar2 = 0;
 if (param_2 < 0) {
 param_2 = 0;
 }
 for (; iVar1 < param_1; iVar1 = iVar1 + 1) {
 iVar2 = iVar2 + param_2;
 }
 return iVar2;
}

// Function: loop_break @ 0x115c7
int loop_break(int param_1)
{
 int iVar1;
 int iVar2;
 int *piVar3;
 int *piVar4;
 int in_GS_OFFSET;
 int local_24 [5];
 int local_10;
 iVar1 = 0;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 piVar3 = &DAT_00013020;
 piVar4 = local_24;
 for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
 *piVar4 = *piVar3;
 piVar3 = piVar3 + 1;
 piVar4 = piVar4 + 1;
 }
 do {
 if (local_24[iVar1] == param_1) goto LAB_0001160f;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 5);
 iVar1 = -1;
LAB_0001160f:
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local();
 }
 return iVar1;
}

// Function: loop_continue @ 0x11627
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

// Function: goto_forward @ 0x11647
int goto_forward(int param_1)
{
 if (0 < param_1) {
 param_1 = param_1 * param_1;
 }
 return param_1 * 2;
}

// Function: goto_backward @ 0x1165c
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

// Function: ternary_op @ 0x11680
int ternary_op(int param_1,int param_2)
{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: test_control_flow_l1 @ 0x11694
void test_control_flow_l1(void)
{
 unsigned int uVar1;
 FUN_000110e0(&DAT_000130e8);
 FUN_000110f0(1,"CF-L1-01 (sequential_ops): %d\n",0x15);
 FUN_000110f0(1,"CF-L1-02 (single_if): %d\n",0x14);
 FUN_000110f0(1,"CF-L1-02 (single_if): %d\n",0xfffffffb);
 FUN_000110f0(1,"CF-L1-03 (if_else): %d\n",1);
 FUN_000110f0(1,"CF-L1-03 (if_else): %d\n",0);
 FUN_000110f0(1,"CF-L1-04 (nested_if_2): %d\n",0xf);
 FUN_000110f0(1,"CF-L1-04 (nested_if_2): %d\n",10);
 FUN_000110f0(1,"CF-L1-04 (nested_if_2): %d\n",0);
 FUN_000110f0(1,"CF-L1-05 (nested_if_deep): %d\n",5);
 FUN_000110f0(1,"CF-L1-06 (if_elseif_chain): %d\n",0x14);
 FUN_000110f0(1,"CF-L1-07 (if_elseif_long): %d\n",400);
 FUN_000110f0(1,"CF-L1-08 (switch_small): %d\n",0x32);
 FUN_000110f0(1,"CF-L1-09 (switch_large): %d\n",0x46);
 FUN_000110f0(1,"CF-L1-10 (switch_default): %d\n",0);
 FUN_000110f0(1,"CF-L1-11 (switch_fallthrough): %d\n",0x15);
 uVar1 = loop_for_fixed(10);
 FUN_000110f0(1,"CF-L1-12 (loop_for_fixed): %d\n",uVar1);
 uVar1 = loop_while(0x3039);
 FUN_000110f0(1,"CF-L1-13 (loop_while): %d\n",uVar1);
 uVar1 = loop_dowhile(0x2694);
 FUN_000110f0(1,"CF-L1-14 (loop_dowhile): %d\n",uVar1);
 uVar1 = loop_nested(3,4);
 FUN_000110f0(1,"CF-L1-15 (loop_nested): %d\n",uVar1);
 uVar1 = loop_break(0x1e);
 FUN_000110f0(1,"CF-L1-16 (loop_break): %d\n",uVar1);
 uVar1 = loop_break(99);
 FUN_000110f0(1,"CF-L1-16 (loop_break): %d\n",uVar1);
 uVar1 = loop_continue(10);
 FUN_000110f0(1,"CF-L1-17 (loop_continue): %d\n",uVar1);
 FUN_000110f0(1,"CF-L1-18 (goto_forward): %d\n",0x32);
 FUN_000110f0(1,"CF-L1-18 (goto_forward): %d\n",0xfffffffa);
 FUN_000110f0(1,"CF-L1-19 (goto_backward): %d\n",0x78);
 FUN_000110f0(1,"CF-L1-20 (ternary_op): %d\n",10);
 FUN_000110f0(1,"CF-L1-20 (ternary_op): %d\n",8);
 return;
}

// Function: loop_multi_exit @ 0x118e7
int loop_multi_exit(int param_1)
{
 int iVar1;
 int iVar2;
 unsigned int *puVar3;
 unsigned int *puVar4;
 int in_GS_OFFSET;
 unsigned int local_40 [12];
 int local_10;
 iVar1 = 0;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 puVar3 = &DAT_00013040;
 puVar4 = local_40;
 for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
 *puVar4 = *puVar3;
 puVar3 = puVar3 + 1;
 puVar4 = puVar4 + 1;
 }
 puVar3 = local_40;
 do {
 iVar2 = 0;
 do {
 if (puVar3[iVar2] == param_1) {
 iVar2 = iVar1 * 10 + iVar2;
 goto LAB_00011941;
 }
 iVar2 = iVar2 + 1;
 } while (iVar2 != 4);
 iVar1 = iVar1 + 1;
 puVar3 = puVar3 + 4;
 } while (iVar1 != 3);
 iVar2 = -1;
LAB_00011941:
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar2 = __stack_chk_fail_local();
 }
 return iVar2;
}

// Function: infinite_loop @ 0x11959
unsigned int infinite_loop(int *param_1)
{
 int iVar1;
 iVar1 = 0;
 do {
 if (*param_1 == 1) {
 return 0;
 }
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x3e9);
 *param_1 = 1;
 return 0;
}

// Function: multi_return @ 0x1197a
int multi_return(uint param_1)
{
 int iVar1;
 iVar1 = -1;
 if (-1 < (int)param_1) {
 iVar1 = param_1 * 2;
 if (iVar1 < 0x65) {
 if ((param_1 & 1) != 0) {
 iVar1 = param_1 + 1;
 }
 }
 else {
 iVar1 = -2;
 }
 }
 return iVar1;
}

// Function: conditional_return @ 0x119a4
int conditional_return(int param_1)
{
 if (param_1 < 1) {
 if (param_1 != 0) {
 param_1 = -param_1;
 }
 }
 else {
 param_1 = param_1 * 2;
 }
 return param_1;
}

// Function: duffs_device @ 0x119bc
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
switchD_000119f6_caseD_7:
 uVar1 = *param_2;
 puVar2 = param_1 + 1;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
_L194:
 uVar1 = *param_2;
 puVar3 = puVar2 + 1;
 param_2 = param_2 + 1;
 *puVar2 = uVar1;
_L196:
 uVar1 = *param_2;
 param_1 = puVar3 + 1;
 param_2 = param_2 + 1;
 *puVar3 = uVar1;
_L197:
 uVar1 = *param_2;
 puVar2 = param_1 + 1;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
_L198:
 uVar1 = *param_2;
 param_1 = puVar2 + 1;
 param_2 = param_2 + 1;
 *puVar2 = uVar1;
_L199:
 uVar1 = *param_2;
 puVar2 = param_1 + 1;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
_L200:
 uVar1 = *param_2;
 param_1 = puVar2 + 1;
 param_2 = param_2 + 1;
 *puVar2 = uVar1;
 }
 break;
 case 2:
 goto _L200;
 case 3:
 goto _L199;
 case 4:
 goto _L198;
 case 5:
 goto _L197;
 case 6:
 goto _L196;
 case 7:
 goto _L194;
 default:
 goto switchD_000119f6_caseD_7;
 }
 }
 return param_3;
}

// Function: loop_complex_cond @ 0x11a5f
int loop_complex_cond(int param_1)
{
 int iVar1;
 for (iVar1 = 0; (iVar1 * 2 < param_1 - iVar1 && (iVar1 < 10)); iVar1 = iVar1 + 1) {
 }
 return iVar1 * 3 + (param_1 - iVar1);
}

// Function: loop_modify_var @ 0x11a82
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

// Function: loop_external_state @ 0x11aa3
unsigned int loop_external_state(int *param_1)
{
 int iVar1;
 iVar1 = 0;
 do {
 if (*param_1 != 0) {
 return 0;
 }
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x65);
 return 0;
}

// Function: tail_recursion @ 0x11abd
int tail_recursion(int param_1,int param_2)
{
 for (; 1 < param_1; param_1 = param_1 + -1) {
 param_2 = param_2 * param_1;
 }
 return param_2;
}

// Function: indirect_recursion_a @ 0x11ad7
uint indirect_recursion_a(uint param_1,int param_2)
{
 do {
 if (param_2 < 1) {
 return param_1;
 }
 if ((param_1 & 1) == 0) {
 if (param_2 == 1) {
 return (int)param_1 / 2;
 }
 param_1 = (int)param_1 / 2 + 1;
 }
 else {
 if (param_2 == 1) {
 return param_1 * 3 + 1;
 }
 param_1 = param_1 * 3 + 2;
 }
 param_2 = param_2 + -2;
 } while( true );
}

// Function: call_func_ptr @ 0x11b13
unsigned int call_func_ptr(void *param_1, int param_2)
{
 return ((int (*)(int))param_1)(param_2);
}

// Function: call_func_ptr_array @ 0x11b26
unsigned int call_func_ptr_array(uint param_1, int param_2)
{
 unsigned int uVar1;
 int in_GS_OFFSET;
 int (*local_1c [3])(int);
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_1c[0] = double_value;
 local_1c[1] = triple_value;
 local_1c[2] = recursion_factorial;
 if (param_1 < 3) {
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 uVar1 = local_1c[param_1](param_2);
 return uVar1;
 }
 }
 else if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return 0xffffffff;
 }
 __stack_chk_fail_local();
 return 0xffffffff;
}

// Function: call_virtual_func @ 0x11ba1
int call_virtual_func(unsigned int param_1,int param_2)
{
 return param_2 * 2;
}

// Function: process_with_callback @ 0x11baf
int process_with_callback(int param_1,int param_2,void *param_3)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar3 = 0;
 for (iVar2 = 0; iVar2 < param_2; iVar2 = iVar2 + 1) {
 iVar1 = ((int (*)(unsigned int))param_3)(*(unsigned int *)(param_1 + iVar2 * 4));
 iVar3 = iVar3 + iVar1;
 }
 return iVar3;
}

// Function: test_control_flow_l2 @ 0x11bde
void test_control_flow_l2(void)
{
 unsigned int uVar1;
 int iVar2;
 unsigned int *puVar3;
 unsigned int *puVar4;
 int in_GS_OFFSET;
 byte bVar5;
 unsigned int local_7c;
 unsigned int local_78;
 unsigned int local_74 [5];
 unsigned int local_60 [8];
 unsigned int local_40 [8];
 int local_20;
 unsigned int uStack_14;
 bVar5 = 0;
 uStack_14 = 0x11bf0;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 FUN_000110e0(&DAT_00013355);
 uVar1 = loop_multi_exit(7);
 FUN_000110f0(1,"CF-L2-01 (loop_multi_exit): %d\n",uVar1);
 local_7c = 0;
 uVar1 = infinite_loop(&local_7c);
 FUN_000110f0(1,"CF-L2-02 (infinite_loop): %d\n",uVar1);
 FUN_000110f0(1,"CF-L2-03 (multi_return): %d\n",0xffffffff);
 FUN_000110f0(1,"CF-L2-03 (multi_return): %d\n",0xfffffffe);
 FUN_000110f0(1,"CF-L2-03 (multi_return): %d\n",4);
 FUN_000110f0(1,"CF-L2-04 (conditional_return): %d\n",10);
 FUN_000110f0(1,"CF-L2-04 (conditional_return): %d\n",5);
 puVar3 = &DAT_000130a0;
 puVar4 = local_60;
 for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
 *puVar4 = *puVar3;
 puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
 puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
 }
 puVar3 = local_40;
 for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
 *puVar3 = 0;
 puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
 }
 uVar1 = duffs_device(local_40,local_60,8);
 FUN_000110f0(1,"CF-L2-05 (duffs_device): %d\n",uVar1);
 uVar1 = loop_complex_cond(10);
 FUN_000110f0(1,"CF-L2-06 (loop_complex_cond): %d\n",uVar1);
 uVar1 = loop_modify_var(10);
 FUN_000110f0(1,"CF-L2-07 (loop_modify_var): %d\n",uVar1);
 local_78 = 0;
 uVar1 = loop_external_state(&local_78);
 FUN_000110f0(1,"CF-L2-08 (loop_external_state): %d\n",uVar1);
 uVar1 = recursion_factorial(5);
 FUN_000110f0(1,"CF-L2-09 (recursion_factorial): %d\n",uVar1);
 FUN_000110f0(1,"CF-L2-10 (tail_recursion): %d\n",0x78);
 uVar1 = indirect_recursion_a(6,1);
 FUN_000110f0(1,"CF-L2-11 (indirect_recursion): %d\n",uVar1);
 uVar1 = call_func_ptr(double_value,5);
 FUN_000110f0(1,"CF-L2-12 (call_func_ptr): %d\n",uVar1);
 uVar1 = call_func_ptr_array(0,5);
 FUN_000110f0(1,"CF-L2-13 (call_func_ptr_array): %d\n",uVar1);
 uVar1 = call_func_ptr_array(2,5);
 FUN_000110f0(1,"CF-L2-13 (call_func_ptr_array): %d\n",uVar1);
 puVar3 = &DAT_000130c0;
 puVar4 = local_74;
 for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
 *puVar4 = *puVar3;
 puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
 puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
 }
 uVar1 = process_with_callback(local_74,5,double_value);
 FUN_000110f0(1,"CF-L2-15 (process_with_callback): %d\n",uVar1);
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return;
}

// Function: non_local_jump @ 0x11e36
int non_local_jump(int param_1)
{
 unsigned long long uVar1;
 unsigned int uVar2;
 int iVar3;
 uVar1 = FUN_000110c0(jump_buffer);
 iVar3 = (int)((unsigned long long)uVar1 >> 0x20);
 if ((int)uVar1 == 0) {
 if (param_1 < 0) {
 uVar2 = 1;
 }
 else {
 iVar3 = param_1 * 2;
 if (param_1 < 0x65) {
 return iVar3;
 }
 uVar2 = 2;
 }
 FUN_00011100(jump_buffer,uVar2,iVar3,iVar3);
 }
 return -1;
}

// Function: cpp_exception @ 0x11e9d
int cpp_exception(int param_1)
{
 int iVar1;
 iVar1 = -1;
 if ((-1 < param_1) && (iVar1 = param_1 * 2, 100 < param_1)) {
 iVar1 = -2;
 }
 return iVar1;
}

// Function: large_jump_table @ 0x11ebe
unsigned int large_jump_table(uint param_1, int param_2, int param_3)
{
 unsigned int uVar1;
 int iVar2;
 int (**ppcVar3)(int, int);
 int (**ppcVar4)(int, int);
 int in_GS_OFFSET;
 int (*local_48 [10])(int, int);
 int local_20;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 ppcVar3 = (int (**)(int, int))&PTR_op_add_00016020;
 ppcVar4 = local_48;
 for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
 *ppcVar4 = *ppcVar3;
 ppcVar3 = ppcVar3 + 1;
 ppcVar4 = ppcVar4 + 1;
 }
 if (param_1 < 10) {
 if (local_20 == *(int *)(in_GS_OFFSET + 0x14)) {
 uVar1 = local_48[param_1](param_2, param_3);
 return uVar1;
 }
 }
 else if (local_20 == *(int *)(in_GS_OFFSET + 0x14)) {
 return 0xffffffff;
 }
 __stack_chk_fail_local();
 return 0xffffffff;
}

// Function: conditional_func_ptr @ 0x11f3b
unsigned int conditional_func_ptr(int param_1, int param_2)
{
 int (*UNRECOVERED_JUMPTABLE)(int);
 UNRECOVERED_JUMPTABLE = double_value;
 if ((param_1 != 0) && (UNRECOVERED_JUMPTABLE = triple_value, param_1 != 1)) {
 UNRECOVERED_JUMPTABLE = recursion_factorial;
 }
 return UNRECOVERED_JUMPTABLE(param_2);
}

// Function: state_machine @ 0x11f74
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
LAB_00011fbd:
 if (!bVar2) {
 return param_2;
 }
 return uVar1;
 }
 }
 else if (param_2 == 3) {
 bVar2 = param_1 == 0;
 uVar1 = 0;
 goto LAB_00011fbd;
 }
 return 3;
}

// Function: fsm_func_table @ 0x11fc9
unsigned int fsm_func_table(unsigned int param_1,uint param_2)
{
 unsigned int uVar1;
 int iVar2;
 void **ppcVar3;
 void **ppcVar4;
 int in_GS_OFFSET;
 void *local_20 [4];
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 ppcVar3 = (void **)&PTR_state_idle_00016048;
 ppcVar4 = local_20;
 for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
 *ppcVar4 = *ppcVar3;
 ppcVar3 = ppcVar3 + 1;
 ppcVar4 = ppcVar4 + 1;
 }
 if (param_2 < 4) {
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 uVar1 = ((unsigned int (*)(void))local_20[param_2])();
 return uVar1;
 }
 }
 else if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return 3;
 }
 __stack_chk_fail_local();
 return 3;
}

// Function: computed_goto @ 0x1203f
unsigned int computed_goto(unsigned int param_1,uint param_2)
{
 unsigned int uVar1;
 int iVar2;
 void **ppcVar3;
 void **ppcVar4;
 int in_GS_OFFSET;
 void *local_20 [4];
 int local_10;
 uVar1 = 0xffffffff;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 ppcVar3 = (void **)&PTR_LAB_00016058;
 ppcVar4 = local_20;
 for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
 *ppcVar4 = *ppcVar3;
 ppcVar3 = ppcVar3 + 1;
 ppcVar4 = ppcVar4 + 1;
 }
 if (param_2 < 4) {
 uVar1 = ((unsigned int (*)(void))local_20[param_2])();
 return uVar1;
 }
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 uVar1 = __stack_chk_fail_local();
 }
 return uVar1;
}

// Function: obfuscated_cf @ 0x120bf
int obfuscated_cf(int param_1)
{
 return param_1 * 2;
}

// Function: opaque_predicate @ 0x120cd
int opaque_predicate(int param_1)
{
 return param_1 * 2;
}

// Function: overlapped_code @ 0x120db
int overlapped_code(uint param_1)
{
 int iVar1;
 if ((param_1 & 1) == 0) {
 iVar1 = (int)param_1 / 2;
 }
 else {
 iVar1 = param_1 * 3 + 1;
 }
 return iVar1;
}

// Function: test_control_flow_l3 @ 0x120f9
void test_control_flow_l3(void)
{
 unsigned int uVar1;
 int iVar2;
 unsigned int *puVar3;
 unsigned int *puVar4;
 int in_GS_OFFSET;
 byte bVar5;
 unsigned int local_30 [4];
 int local_20;
 unsigned int uStack_14;
 bVar5 = 0;
 uStack_14 = 0x1210b;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 FUN_000110e0(&DAT_00013548);
 uVar1 = non_local_jump(5);
 FUN_000110f0(1,"CF-L3-01 (non_local_jump): %d\n",uVar1);
 uVar1 = non_local_jump(0xfffffffb);
 FUN_000110f0(1,"CF-L3-01 (non_local_jump): %d\n",uVar1);
 FUN_000110f0(1,"CF-L3-02 (cpp_exception): %d\n",10);
 FUN_000110f0(1,"CF-L3-02 (cpp_exception): %d\n",0xffffffff);
 uVar1 = large_jump_table(0,10,5);
 FUN_000110f0(1,"CF-L3-03 (large_jump_table): %d\n",uVar1);
 uVar1 = conditional_func_ptr(0,5);
 FUN_000110f0(1,"CF-L3-04 (conditional_func_ptr): %d\n",uVar1);
 FUN_000110f0(1,"CF-L3-05 (state_machine): %d\n",1);
 uVar1 = fsm_func_table(2,1);
 FUN_000110f0(1,"CF-L3-06 (fsm_func_table): %d\n",uVar1);
 puVar3 = &DAT_000130d4;
 puVar4 = local_30;
 for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
 *puVar4 = *puVar3;
 puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
 puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
 }
 uVar1 = computed_goto(local_30,2);
 FUN_000110f0(1,"CF-L3-07 (computed_goto): %d\n",uVar1);
 FUN_000110f0(1,"CF-L3-08 (obfuscated_cf): %d\n",10);
 FUN_000110f0(1,"CF-L3-09 (opaque_predicate): %d\n",10);
 FUN_000110f0(1,"CF-L3-10 (overlapped_code): %d\n",0x10);
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return;
}

// Function: __x86.get_pc_thunk.ax @ 0x1226f
unsigned int __x86_get_pc_thunk_ax(void)
{
 unsigned int unaff_retaddr;
 return unaff_retaddr;
}

// Function: __x86.get_pc_thunk.cx @ 0x12273
void __x86_get_pc_thunk_cx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.si @ 0x12277
void __x86_get_pc_thunk_si(void)
{
 return;
}

// Function: __stack_chk_fail_local @ 0x12280
int __stack_chk_fail_local(void)
{
 FUN_000110d0();
 return 0;
}

// Function: __do_global_ctors_aux @ 0x122a0
void __do_global_ctors_aux(void)
{
 return;
}



