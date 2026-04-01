// Decompiled by BinaryAI
// SHA256: 61aa2a22f8c2a2cf997d644c9c889c34ae7b709128f59dbea0d3b5594592dbde

#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>
#include <stdbool.h>
#include <stdint.h>

typedef unsigned int uint;
typedef unsigned char byte;

static int completed_0 = 0;
static jmp_buf jump_buffer;
extern void *__dso_handle;
static char DAT_00103060[] = "=== Control Flow Level 1 ===\n";
static char DAT_00103170[] = "=== Control Flow Level 2 ===\n";
static char DAT_00103310[] = "=== Control Flow Level 3 ===\n";
extern char DAT_001022bf[];
extern char DAT_001022dd[];
extern char DAT_001022e8[];
extern char DAT_001022f3[];

// Function: _init @ 0x101000
static int _init(void *ctx)
{
 (void)ctx;
 return 0;
}

// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x101080
void __cxa_finalize(void *param_1)
{
 (void)param_1;
 return;
}



// Function: <EXTERNAL>::__stack_chk_fail @ 0x1010a0
void __stack_chk_fail(void)
{
 __stack_chk_fail();
}



// Function: <EXTERNAL>::__printf_chk @ 0x1010c0
int __printf_chk(int __flag, const char *__format, ...)
{
 int iVar1;
 iVar1 = __printf_chk(__flag, __format);
 return iVar1;
}

// Function: <EXTERNAL>::__longjmp_chk @ 0x1010d0
void __longjmp_chk(jmp_buf *__env, int __val)
{
 __longjmp_chk(__env, __val);
}

// Function: _start @ 0x1010e0
static void _start(unsigned long long param_1,unsigned long long param_2)
{
 (void)param_1;
 (void)param_2;
}

// Function: deregister_tm_clones @ 0x101110
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x101140
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x101180
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: recursion_factorial @ 0x1011c9
int recursion_factorial(int param_1)
{
 int iVar1;
 if (1 < param_1) {
 iVar1 = recursion_factorial(param_1 + -1);
 return iVar1 * param_1;
 }
 return 1;
}

// Function: double_value @ 0x1011e8
int double_value(int param_1)
{
 return param_1 * 2;
}

// Function: triple_value @ 0x1011f0
int triple_value(int param_1)
{
 return param_1 * 3;
}

// Function: op_add @ 0x1011f8
int op_add(int param_1,int param_2)
{
 return param_1 + param_2;
}

// Function: op_sub @ 0x101200
int op_sub(int param_1,int param_2)
{
 return param_1 - param_2;
}

// Function: op_mul @ 0x101209
int op_mul(int param_1,int param_2)
{
 return param_1 * param_2;
}

// Function: op_div @ 0x101213
unsigned long long op_div(int param_1,uint param_2)
{
 unsigned long long uVar1;
 if (param_2 != 0) {
 uVar1 = (unsigned long long)(param_1 / (int)param_2);
 }
 else {
 uVar1 = 0;
 }
 return uVar1;
}

// Function: op_mod @ 0x101225
int op_mod(int param_1,int param_2)
{
 if (param_2 != 0) {
 param_2 = param_1 % param_2;
 }
 return param_2;
}

// Function: op_and @ 0x101237
uint op_and(uint param_1,uint param_2)
{
 return param_1 & param_2;
}

// Function: op_or @ 0x101240
uint op_or(uint param_1,uint param_2)
{
 return param_1 | param_2;
}

// Function: op_xor @ 0x101249
uint op_xor(uint param_1,uint param_2)
{
 return param_1 ^ param_2;
}

// Function: op_shl @ 0x101252
int op_shl(int param_1,byte param_2)
{
 return param_1 << (param_2 & 0x1f);
}

// Function: op_shr @ 0x10125d
int op_shr(int param_1,byte param_2)
{
 return param_1 >> (param_2 & 0x1f);
}

// Function: state_idle @ 0x101268
bool state_idle(int param_1)
{
 return param_1 == 1;
}

// Function: state_processing @ 0x101276
char state_processing(int param_1)
{
 if (param_1 != 2) {
 return (param_1 == 99) * '\x02' + '\x01';
 }
 return '\x02';
}

// Function: state_done @ 0x101290
unsigned long long state_done(void)
{
 return 2;
}

// Function: state_error @ 0x10129a
int state_error(int param_1)
{
 if (param_1 != 0) {
 param_1 = 3;
 }
 return param_1;
}

// Function: sequential_ops @ 0x1012ab
int sequential_ops(int param_1,int param_2,int param_3)
{
 return (param_1 + param_2) * 2 - param_3;
}

// Function: single_if @ 0x1012b7
int single_if(int param_1)
{
 int iVar1;
 iVar1 = param_1 * 2;
 if (param_1 < 1) {
 iVar1 = param_1;
 }
 return iVar1;
}

// Function: if_else @ 0x1012c4
bool if_else(int param_1)
{
 return 0 < param_1;
}

// Function: nested_if_2 @ 0x1012d1
int nested_if_2(int param_1,int param_2)
{
 int iVar1;
 iVar1 = 0;
 if ((0 < param_1) && (iVar1 = param_1 + param_2, param_2 < 1)) {
 iVar1 = param_1;
 }
 return iVar1;
}

// Function: nested_if_deep @ 0x1012e7
char nested_if_deep(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 char cVar1;
 cVar1 = '\0';
 if ((0 < param_1) && (cVar1 = '\x01', 0 < param_2)) {
 if (param_3 < 1) {
 return '\x02';
 }
 if (0 < param_4) {
 return (0 < param_5) + '\x04';
 }
 cVar1 = '\x03';
 }
 return cVar1;
}

// Function: if_elseif_chain @ 0x10131e
unsigned long long if_elseif_chain(int param_1)
{
 unsigned long long uVar1;
 uVar1 = 10;
 if (param_1 != 0) {
 if (param_1 != 1) {
 uVar1 = 0x1e;
 if (param_1 != 2) {
 uVar1 = 0xffffffff;
 }
 return uVar1;
 }
 uVar1 = 0x14;
 }
 return uVar1;
}

// Function: if_elseif_long @ 0x101347
unsigned long long if_elseif_long(unsigned int param_1)
{
 switch(param_1) {
 case 0:
 return 100;
 case 1:
 return 200;
 case 2:
 return 300;
 case 3:
 return 400;
 case 4:
 return 500;
 default:
 return 0xffffffff;
 }
}

// Function: switch_small @ 0x101387
int switch_small(int param_1)
{
 int iVar1;
 if (param_1 == 2) {
 iVar1 = 0x32;
 }
 else {
 if (2 < param_1) {
 return (uint)(param_1 == 3) * 3 + -1;
 }
 iVar1 = 0xf;
 if (param_1 != 0) {
 iVar1 = -1;
 if (param_1 == 1) {
 iVar1 = 5;
 }
 return iVar1;
 }
 }
 return iVar1;
}

// Function: switch_large @ 0x1013c0
unsigned int switch_large(unsigned int param_1)
{
 switch(param_1) {
 case 0:
 return param_1;
 case 1:
 return 10;
 case 2:
 return 0x14;
 case 3:
 return 0x1e;
 case 4:
 return 0x28;
 case 5:
 return 0x32;
 case 6:
 return 0x3c;
 case 7:
 return 0x46;
 case 8:
 return 0x50;
 case 9:
 return 0x5a;
 default:
 return 0xffffffff;
 }
}

// Function: switch_default @ 0x10141b
unsigned long long switch_default(int param_1)
{
 unsigned long long uVar1;
 uVar1 = 200;
 if (((param_1 != 2) && (uVar1 = 300, param_1 != 3)) && (uVar1 = 0, param_1 == 1)) {
 uVar1 = 100;
 }
 return uVar1;
}

// Function: switch_fallthrough @ 0x101444
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
 goto LAB_0010146c;
 }
 iVar1 = 0xc;
 }
 iVar1 = iVar1 + param_1 * 2;
LAB_0010146c:
 return iVar1 + param_1;
}

// Function: loop_for_fixed @ 0x101476
int loop_for_fixed(int param_1)
{
 int iVar1;
 int iVar2;
 if (param_1 < 1) {
 iVar2 = 0;
 }
 else {
 iVar1 = 0;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + iVar1;
 iVar1 = iVar1 + 1;
 } while (param_1 != iVar1);
 }
 return iVar2;
}

// Function: loop_while @ 0x10149b
int loop_while(int param_1)
{
 int iVar1;
 if (param_1 == 0) {
 iVar1 = 0;
 }
 else {
 iVar1 = 0;
 do {
 param_1 = param_1 / 10;
 iVar1 = iVar1 + 1;
 } while (param_1 != 0);
 }
 if (iVar1 < 1) {
 iVar1 = 1;
 }
 return iVar1;
}

// Function: loop_dowhile @ 0x1014d3
int loop_dowhile(int param_1)
{
 int iVar1;
 iVar1 = 0;
 do {
 param_1 = param_1 / 10;
 iVar1 = iVar1 + 1;
 } while (param_1 != 0);
 return iVar1;
}

// Function: loop_nested @ 0x1014fb
int loop_nested(int param_1,int param_2)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar3 = 0;
 iVar2 = 0;
 if (0 < param_1) {
 do {
 iVar1 = 0;
 if (0 < param_2) {
 do {
 iVar1 = iVar1 + 1;
 } while (param_2 != iVar1);
 iVar2 = iVar2 + iVar1;
 }
 iVar3 = iVar3 + 1;
 } while (param_1 != iVar3);
 }
 return iVar2;
}

// Function: loop_break @ 0x10152b
unsigned long loop_break(int param_1)
{
 unsigned long uVar1;
 unsigned long uVar2;
 long in_FS_OFFSET;
 int local_28 [6];
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 uVar1 = 0;
 local_28[0] = 10;
 local_28[1] = 0x14;
 local_28[2] = 0x1e;
 local_28[3] = 0x28;
 local_28[4] = 0x32;
 do {
 uVar2 = uVar1 & 0xffffffff;
 if (local_28[uVar1] == param_1) goto LAB_00101583;
 uVar1 = uVar1 + 1;
 } while (uVar1 != 5);
 uVar2 = 0xffffffff;
LAB_00101583:
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar2;
 }
 __stack_chk_fail();
}

// Function: loop_continue @ 0x10159f
int loop_continue(int param_1)
{
 uint uVar1;
 int iVar2;
 if (param_1 < 1) {
 iVar2 = 0;
 }
 else {
 uVar1 = 1;
 iVar2 = 0;
 do {
 if ((uVar1 & 1) != 0) {
 iVar2 = iVar2 + uVar1;
 }
 uVar1 = uVar1 + 1;
 } while (uVar1 != param_1 + 1U);
 }
 return iVar2;
}

// Function: goto_forward @ 0x1015cd
int goto_forward(int param_1)
{
 if (0 < param_1) {
 param_1 = param_1 * param_1;
 }
 return param_1 * 2;
}

// Function: goto_backward @ 0x1015de
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
 } while (iVar1 != param_1 + 1);
 }
 return iVar2;
}

// Function: ternary_op @ 0x101600
int ternary_op(int param_1,int param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: test_control_flow_l1 @ 0x10160c
void test_control_flow_l1(void)
{
 unsigned int uVar1;
 puts(&DAT_00103060);
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
 uVar1 = goto_backward(5);
 __printf_chk(1,"CF-L1-19 (goto_backward): %d\n",uVar1);
 __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",10);
 __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",8);
 return;
}

// Function: loop_multi_exit @ 0x10192b
int loop_multi_exit(int param_1)
{
 long lVar1;
 unsigned int *puVar2;
 int iVar3;
 long in_FS_OFFSET;
 unsigned int local_48;
 unsigned int local_44;
 unsigned int local_40;
 unsigned int local_3c;
 unsigned int local_38;
 unsigned int local_34;
 unsigned int local_30;
 unsigned int local_2c;
 unsigned int local_28;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int local_1c;
 long local_10;
 puVar2 = &local_48;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_48 = 1;
 local_44 = 2;
 local_40 = 3;
 local_3c = 4;
 local_38 = 5;
 local_34 = 6;
 local_30 = 7;
 local_2c = 8;
 local_28 = 9;
 local_24 = 10;
 local_20 = 0xb;
 local_1c = 0xc;
 iVar3 = 0;
 do {
 lVar1 = 0;
 do {
 if (*(int *)((long)puVar2 + lVar1 * 4) == param_1) {
 iVar3 = (int)lVar1 + iVar3 * 10;
 goto LAB_001019d1;
 }
 lVar1 = lVar1 + 1;
 } while (lVar1 != 4);
 iVar3 = iVar3 + 1;
 puVar2 = (unsigned int *)((long)puVar2 + 0x10);
 } while (iVar3 != 3);
 iVar3 = -1;
LAB_001019d1:
 if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar3;
 }
 __stack_chk_fail();
}

// Function: infinite_loop @ 0x1019f3
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

// Function: multi_return @ 0x101a14
int multi_return(uint param_1)
{
 int iVar1;
 if ((int)param_1 < 0) {
 return -1;
 }
 if ((int)(param_1 * 2) < 0x65) {
 iVar1 = param_1 * 2;
 if ((param_1 & 1) != 0) {
 iVar1 = param_1 + 1;
 }
 return iVar1;
 }
 return -2;
}

// Function: conditional_return @ 0x101a3b
int conditional_return(int param_1)
{
 int iVar1;
 if (0 < param_1) {
 return param_1 * 2;
 }
 iVar1 = -param_1;
 if (-1 < param_1) {
 iVar1 = 0;
 }
 return iVar1;
}

// Function: duffs_device @ 0x101a56
int duffs_device(unsigned int *param_1,unsigned int *param_2,int param_3)
{
 unsigned int *puVar1;
 int iVar2;
 unsigned int *puVar3;
 if (param_3 < 1) {
 param_3 = -1;
 }
 else {
 iVar2 = param_3 + 0xe;
 if (-1 < param_3 + 7) {
 iVar2 = param_3 + 7;
 }
 iVar2 = iVar2 >> 3;
 switch(param_3 % 8) {
 case 0:
 while( true ) {
 *param_1 = *param_2;
 param_2 = param_2 + 1;
 param_1 = param_1 + 1;
switchD_00101aa1_caseD_7:
 *param_1 = *param_2;
 param_2 = param_2 + 1;
 param_1 = param_1 + 1;
switchD_00101aa1_caseD_6:
 *param_1 = *param_2;
 puVar1 = param_1 + 1;
 puVar3 = param_2 + 1;
LAB_00101abc:
 param_2 = puVar3 + 1;
 param_1 = puVar1 + 1;
 *puVar1 = *puVar3;
switchD_00101aa1_caseD_4:
 *param_1 = *param_2;
 puVar1 = param_1 + 1;
 puVar3 = param_2 + 1;
LAB_00101ad6:
 param_2 = puVar3 + 1;
 param_1 = puVar1 + 1;
 *puVar1 = *puVar3;
switchD_00101aa1_caseD_2:
 *param_1 = *param_2;
 param_1 = param_1 + 1;
 param_2 = param_2 + 1;
LAB_00101af0:
 *param_1 = *param_2;
 iVar2 = iVar2 + -1;
 if (iVar2 < 1) break;
 param_2 = param_2 + 1;
 param_1 = param_1 + 1;
 }
 break;
 case 1:
 goto LAB_00101af0;
 case 2:
 goto switchD_00101aa1_caseD_2;
 case 3:
 puVar1 = param_1;
 puVar3 = param_2;
 goto LAB_00101ad6;
 case 4:
 goto switchD_00101aa1_caseD_4;
 case 5:
 puVar1 = param_1;
 puVar3 = param_2;
 goto LAB_00101abc;
 case 6:
 goto switchD_00101aa1_caseD_6;
 case 7:
 goto switchD_00101aa1_caseD_7;
 }
 }
 return param_3;
}

// Function: loop_complex_cond @ 0x101b30
int loop_complex_cond(int param_1)
{
 int iVar1;
 int iVar2;
 if (param_1 < 1) {
 iVar2 = 0;
 iVar1 = 0;
 }
 else {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 2;
 param_1 = param_1 + -1;
 iVar2 = iVar2 + 1;
 if (param_1 <= iVar1 || 9 < iVar2) break;
 } while (0 < param_1);
 }
 return iVar1 + param_1 + iVar2;
}

// Function: loop_modify_var @ 0x101b71
int loop_modify_var(int param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar3 = 0;
 iVar2 = 0;
 if (0 < param_1) {
 while (iVar1 = iVar2 + 1, iVar1 < param_1) {
 iVar3 = iVar3 + iVar1;
 iVar2 = iVar2 + 3;
 if (iVar1 < 6) {
 iVar2 = iVar1;
 }
 }
 }
 return iVar3;
}

// Function: loop_external_state @ 0x101b9a
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

// Function: tail_recursion @ 0x101bb2
unsigned long tail_recursion(int param_1,uint param_2)
{
 unsigned long uVar1;
 if (1 < param_1) {
 uVar1 = tail_recursion(param_1 + -1,param_2 * param_1);
 return uVar1;
 }
 return (unsigned long)param_2;
}

// Function: indirect_recursion_a @ 0x101bd2
unsigned long indirect_recursion_a(uint param_1,int param_2)
{
 unsigned long uVar1;
 if (0 < param_2) {
 if ((param_1 & 1) == 0) {
 uVar1 = (unsigned long)(uint)((int)param_1 / 2);
 if (1 < param_2) {
 uVar1 = indirect_recursion_a((int)param_1 / 2 + 1,param_2 + -2);
 }
 }
 else if (param_2 < 2) {
 uVar1 = (unsigned long)(param_1 * 3 + 1);
 }
 else {
 uVar1 = indirect_recursion_a(param_1 * 3 + 2,param_2 + -2);
 }
 return uVar1;
 }
 return (unsigned long)param_1;
}

// Function: call_func_ptr @ 0x101c1f
void call_func_ptr(void *param_1,unsigned int param_2)
{
 ((void (*)(unsigned int))param_1)(param_2);
 return;
}

// Function: call_func_ptr_array @ 0x101c33
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
 uVar1 = (unsigned long long)(*local_28[(int)param_1])(param_2);
 }
 else {
 uVar1 = 0xffffffff;
 }
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar1;
 }
 __stack_chk_fail();
}

// Function: call_virtual_func @ 0x101c9d
int call_virtual_func(unsigned long long param_1,int param_2)
{
 return param_2 * 2;
}

// Function: process_with_callback @ 0x101ca5
int process_with_callback(unsigned int *param_1,int param_2,void *param_3)
{
 unsigned int *puVar1;
 int iVar2;
 int iVar3;
 if (param_2 < 1) {
 iVar3 = 0;
 }
 else {
 puVar1 = param_1 + (unsigned long)(param_2 - 1) + 1;
 iVar3 = 0;
 do {
 iVar2 = ((int (*)(unsigned int))param_3)(*param_1);
 iVar3 = iVar3 + iVar2;
 param_1 = param_1 + 1;
 } while (param_1 != puVar1);
 }
 return iVar3;
}

// Function: test_control_flow_l2 @ 0x101cee
void test_control_flow_l2(void)
{
 unsigned int uVar1;
 long in_FS_OFFSET;
 unsigned int local_90;
 unsigned int local_8c;
 unsigned int local_88;
 unsigned int local_84;
 unsigned int local_80;
 unsigned int local_7c;
 unsigned int local_78;
 unsigned int local_68;
 unsigned int local_64;
 unsigned int local_60;
 unsigned int local_5c;
 unsigned int local_58;
 unsigned int local_54;
 unsigned int local_50;
 unsigned int local_4c;
 unsigned long long local_48;
 unsigned long long local_40;
 unsigned long long local_38;
 unsigned long long local_30;
 long local_20;
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_00103170);
 uVar1 = loop_multi_exit(7);
 __printf_chk(1,"CF-L2-01 (loop_multi_exit): %d\n",uVar1);
 local_90 = 0;
 infinite_loop(&local_90);
 __printf_chk(1,"CF-L2-02 (infinite_loop): %d\n",local_90);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xffffffff);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xfffffffe);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",4);
 __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",10);
 __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",5);
 local_68 = 1;
 local_64 = 2;
 local_60 = 3;
 local_5c = 4;
 local_58 = 5;
 local_54 = 6;
 local_50 = 7;
 local_4c = 8;
 local_48 = 0;
 local_40 = 0;
 local_38 = 0;
 local_30 = 0;
 uVar1 = duffs_device(&local_48,&local_68,8);
 __printf_chk(1,"CF-L2-05 (duffs_device): %d\n",uVar1);
 uVar1 = loop_complex_cond(10);
 __printf_chk(1,"CF-L2-06 (loop_complex_cond): %d\n",uVar1);
 uVar1 = loop_modify_var(10);
 __printf_chk(1,"CF-L2-07 (loop_modify_var): %d\n",uVar1);
 local_8c = 0;
 loop_external_state(&local_8c);
 __printf_chk(1,"CF-L2-08 (loop_external_state): %d\n",local_8c);
 uVar1 = recursion_factorial(5);
 __printf_chk(1,"CF-L2-09 (recursion_factorial): %d\n",uVar1);
 uVar1 = tail_recursion(5,1);
 __printf_chk(1,"CF-L2-10 (tail_recursion): %d\n",uVar1);
 uVar1 = indirect_recursion_a(10,3);
 __printf_chk(1,"CF-L2-11 (indirect_recursion): %d\n",uVar1);
 call_func_ptr(double_value,5);
 __printf_chk(1,"CF-L2-12 (call_func_ptr): %d\n",10);
 uVar1 = call_func_ptr_array(0,5);
 __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",uVar1);
 uVar1 = call_func_ptr_array(2,5);
 __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",uVar1);
 local_88 = 1;
 local_84 = 2;
 local_80 = 3;
 local_7c = 4;
 local_78 = 5;
 uVar1 = process_with_callback(&local_88,5,double_value);
 __printf_chk(1,"CF-L2-15 (process_with_callback): %d\n",uVar1);
 if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
 return;
 }
 __stack_chk_fail();
}

// Function: non_local_jump @ 0x10203c
int non_local_jump(int param_1)
{
 int iVar1;
 iVar1 = _setjmp((jmp_buf *)jump_buffer);
 if (iVar1 == 0) {
 if (param_1 < 0) {
 __longjmp_chk(jump_buffer,1);
 }
 if (100 < param_1) {
 __longjmp_chk(jump_buffer,2);
 }
 param_1 = param_1 * 2;
 }
 else {
 param_1 = -1;
 }
 return param_1;
}

// Function: cpp_exception @ 0x10209e
int cpp_exception(int param_1)
{
 if (param_1 < 0) {
 return -1;
 }
 if (param_1 < 0x65) {
 return param_1 * 2;
 }
 return -2;
}

// Function: large_jump_table @ 0x1020bb
unsigned long long large_jump_table(uint param_1,unsigned int param_2,unsigned int param_3)
{
 unsigned long long uVar1;
 long in_FS_OFFSET;
 int (*local_68 [11])(int, unsigned int);
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_68[0] = op_add;
 local_68[1] = op_sub;
 local_68[2] = op_mul;
 local_68[3] = op_div;
 local_68[4] = op_mod;
 local_68[5] = op_and;
 local_68[6] = op_or;
 local_68[7] = op_xor;
 local_68[8] = op_shl;
 local_68[9] = op_shr;
 if (param_1 < 10) {
 uVar1 = (unsigned long long)(*local_68[(int)param_1])(param_2,param_3);
 }
 else {
 uVar1 = 0xffffffff;
 }
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar1;
 }
 __stack_chk_fail();
}

// Function: conditional_func_ptr @ 0x10217b
void conditional_func_ptr(int param_1,unsigned int param_2)
{
 int (*pcVar1)(int);
 pcVar1 = double_value;
 if ((param_1 != 0) && (pcVar1 = triple_value, param_1 != 1)) {
 pcVar1 = recursion_factorial;
 }
 (*pcVar1)(param_2);
 return;
}

// Function: state_machine @ 0x1021ae
uint state_machine(uint param_1,int param_2)
{
 uint uVar1;
 if (param_2 == 2) {
 return 2;
 }
 if (2 < param_2) {
 if (param_2 == 3) {
 if (param_1 != 0) {
 param_1 = 3;
 }
 return param_1;
 }
 return 3;
 }
 if (param_2 == 0) {
 return (uint)(param_1 == 1);
 }
 if (param_2 == 1) {
 if (param_1 != 2) {
 uVar1 = 3;
 if (param_1 != 99) {
 uVar1 = 1;
 }
 return uVar1;
 }
 return 2;
 }
 return 3;
}

// Function: fsm_func_table @ 0x1021fc
unsigned long long fsm_func_table(unsigned long long param_1,uint param_2)
{
 unsigned long long uVar1;
 long in_FS_OFFSET;
 unsigned long long (*local_38 [5])(void);
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_38[0] = (unsigned long long (*)(void))state_idle;
 local_38[1] = (unsigned long long (*)(void))state_processing;
 local_38[2] = state_done;
 local_38[3] = (unsigned long long (*)(void))state_error;
 uVar1 = 3;
 if (param_2 < 4) {
 uVar1 = (*local_38[(int)param_2])();
 }
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar1;
 }
 __stack_chk_fail();
}

// Function: computed_goto @ 0x10226d
unsigned long long computed_goto(unsigned long long param_1,uint param_2)
{
 unsigned long long uVar1;
 long in_FS_OFFSET;
 unsigned long long (*local_38 [5])(void);
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_38[0] = state_done;
 local_38[1] = state_done;
 local_38[2] = state_done;
 local_38[3] = state_done;
 if (param_2 < 4) {
 uVar1 = (*local_38[(int)param_2])();
 return uVar1;
 }
 return 0xffffffff;
}

// Function: obfuscated_cf @ 0x10230a
int obfuscated_cf(int param_1)
{
 return param_1 * 2;
}

// Function: opaque_predicate @ 0x102312
int opaque_predicate(int param_1)
{
 return param_1 * 2;
}

// Function: overlapped_code @ 0x10231a
int overlapped_code(uint param_1)
{
 if ((param_1 & 1) != 0) {
 return param_1 * 3 + 1;
 }
 return (int)param_1 / 2;
}

// Function: test_control_flow_l3 @ 0x102333
void test_control_flow_l3(void)
{
 unsigned int uVar1;
 long in_FS_OFFSET;
 unsigned int local_28;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int local_1c;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_00103310);
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
 local_28 = 0;
 local_24 = 1;
 local_20 = 2;
 local_1c = 3;
 uVar1 = computed_goto(&local_28,2);
 __printf_chk(1,"CF-L3-07 (computed_goto): %d\n",uVar1);
 __printf_chk(1,"CF-L3-08 (obfuscated_cf): %d\n",10);
 __printf_chk(1,"CF-L3-09 (opaque_predicate): %d\n",10);
 __printf_chk(1,"CF-L3-10 (overlapped_code): %d\n",0x10);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return;
 }
 __stack_chk_fail();
}

// Function: main @ 0x102515
unsigned long long main(void)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}

// Function: _fini @ 0x102548
static void _fini(void)
{
 return;
}

