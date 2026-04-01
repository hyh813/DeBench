// Decompiled by BinaryAI
// SHA256: b78e30b4068b10bce4fe5455897c4a8683f2a6ddda3a071acfe0dfe2e0f244a1

#include <setjmp.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef unsigned int uint;
typedef unsigned char byte;
typedef __jmp_buf __jmp_buf_tag;

static int completed_0 = 0;
static __jmp_buf_tag jump_buffer;
extern void *__dso_handle;
extern int puts(const char *s);



// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x101080
extern void __cxa_finalize(void *);



// Function: <EXTERNAL>::__stack_chk_fail @ 0x1010a0
extern void __stack_chk_fail(void);





// Function: <EXTERNAL>::__longjmp_chk @ 0x1010d0
extern void __longjmp_chk(__jmp_buf_tag *env, int val);

// Function: main @ 0x1010e0
unsigned long long main(void)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}



// Function: deregister_tm_clones @ 0x101140
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x101170
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x1011b0
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

// Function: recursion_factorial @ 0x101200
int recursion_factorial(int param_1)
{
 int iVar1;
 int iVar2;
 iVar1 = 1;
 if (1 < param_1) {
 do {
 iVar2 = param_1 + -1;
 iVar1 = iVar1 * param_1;
 param_1 = iVar2;
 } while (iVar2 != 1);
 }
 return iVar1;
}

// Function: double_value @ 0x101220
int double_value(int param_1)
{
 return param_1 * 2;
}

// Function: triple_value @ 0x101230
int triple_value(int param_1)
{
 return param_1 * 3;
}

// Function: op_add @ 0x101240
int op_add(int param_1,int param_2)
{
 return param_1 + param_2;
}

// Function: op_sub @ 0x101250
int op_sub(int param_1,int param_2)
{
 return param_1 - param_2;
}

// Function: op_mul @ 0x101260
int op_mul(int param_1,int param_2)
{
 return param_1 * param_2;
}

// Function: op_div @ 0x101270
int op_div(int param_1,uint param_2,unsigned long param_3)
{
 long lVar1;
 int iVar1;
 if (param_2 != 0) {
 lVar1 = (long)(int)param_2;
 iVar1 = param_1 / (int)param_2;
 return iVar1;
 }
 return 0;
}

// Function: op_mod @ 0x101290
int op_mod(int param_1,int param_2)
{
 if (param_2 != 0) {
 param_2 = param_1 % param_2;
 }
 return param_2;
}

// Function: op_and @ 0x1012b0
uint op_and(uint param_1,uint param_2)
{
 return param_1 & param_2;
}

// Function: op_or @ 0x1012c0
uint op_or(uint param_1,uint param_2)
{
 return param_1 | param_2;
}

// Function: op_xor @ 0x1012d0
uint op_xor(uint param_1,uint param_2)
{
 return param_1 ^ param_2;
}

// Function: op_shl @ 0x1012e0
int op_shl(int param_1,byte param_2)
{
 return param_1 << (param_2 & 0x1f);
}

// Function: op_shr @ 0x1012f0
int op_shr(int param_1,byte param_2)
{
 return param_1 >> (param_2 & 0x1f);
}

// Function: state_idle @ 0x101300
bool state_idle(int param_1)
{
 return param_1 == 1;
}

// Function: state_processing @ 0x101310
char state_processing(int param_1)
{
 if (param_1 != 2) {
 return (param_1 == 99) * '\x02' + '\x01';
 }
 return '\x02';
}

// Function: state_done @ 0x101340
unsigned long long state_done(void)
{
 return 2;
}

// Function: state_error @ 0x101350
int state_error(int param_1)
{
 if (param_1 != 0) {
 param_1 = 3;
 }
 return param_1;
}

// Function: sequential_ops @ 0x101370
int sequential_ops(int param_1,int param_2,int param_3)
{
 return (param_1 + param_2) * 2 - param_3;
}

// Function: single_if @ 0x101380
int single_if(int param_1)
{
 int iVar1;
 iVar1 = param_1 * 2;
 if (param_1 < 1) {
 iVar1 = param_1;
 }
 return iVar1;
}

// Function: if_else @ 0x101390
bool if_else(int param_1)
{
 return 0 < param_1;
}

// Function: nested_if_2 @ 0x1013a0
int nested_if_2(int param_1,int param_2)
{
 int iVar1;
 iVar1 = 0;
 if ((0 < param_1) && (iVar1 = param_1 + param_2, param_2 < 1)) {
 iVar1 = param_1;
 }
 return iVar1;
}

// Function: nested_if_deep @ 0x1013c0
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

// Function: if_elseif_chain @ 0x101410
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

// Function: if_elseif_long @ 0x101440
int if_elseif_long(uint param_1)
{
 int iVar1;
 iVar1 = -1;
 if (param_1 < 5) {
 iVar1 = (param_1 + 1) * 100;
 }
 return iVar1;
}

// Function: switch_small @ 0x101460
static unsigned int CSWTCH_55_data[4] = {0, 50, 100, 150};
unsigned int switch_small(uint param_1)
{
 unsigned int uVar1;
 uVar1 = 0xffffffff;
 if (param_1 < 4) {
 uVar1 = CSWTCH_55_data[param_1];
 }
 return uVar1;
}

// Function: switch_large @ 0x101480
int switch_large(uint param_1)
{
 int iVar1;
 iVar1 = -1;
 if (param_1 < 10) {
 iVar1 = param_1 * 10;
 }
 return iVar1;
}

// Function: switch_default @ 0x1014a0
int switch_default(int param_1)
{
 int iVar1;
 iVar1 = 0;
 if (param_1 - 1U < 3) {
 iVar1 = param_1 * 100;
 }
 return iVar1;
}

// Function: switch_fallthrough @ 0x1014c0
int switch_fallthrough(int param_1)
{
 if (param_1 == 2) {
 return 6;
 }
 if (param_1 != 3) {
 return ((param_1 == 1) - 1) + (uint)(param_1 == 1);
 }
 return 0x15;
}

// Function: loop_for_fixed @ 0x101500
int loop_for_fixed(int param_1)
{
 int iVar1;
 int iVar2;
 if (0 < param_1) {
 iVar1 = 0;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + iVar1;
 iVar1 = iVar1 + 1;
 } while (param_1 != iVar1);
 return iVar2;
 }
 return 0;
}

// Function: loop_while @ 0x101530
int loop_while(int param_1)
{
 int iVar1;
 if (param_1 != 0) {
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 param_1 = param_1 / 10;
 } while (param_1 != 0);
 return iVar1;
 }
 return 1;
}

// Function: loop_dowhile @ 0x101580
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

// Function: loop_nested @ 0x1015c0
int loop_nested(int param_1,int param_2)
{
 int iVar1;
 int iVar2;
 iVar2 = 0;
 iVar1 = 0;
 if (0 < param_1) {
 do {
 if (0 < param_2) {
 iVar1 = param_2 + iVar1;
 }
 iVar2 = iVar2 + 1;
 } while (param_1 != iVar2);
 }
 return iVar1;
}

// Function: loop_break @ 0x1015e0
unsigned long loop_break(int param_1)
{
 unsigned long uVar1;
 unsigned long uVar2;
 long in_FS_OFFSET;
 int iStack_28;
 unsigned long long local_24;
 unsigned long long local_1c;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_24 = 0x1e00000014;
 local_1c = 0x3200000028;
 uVar1 = 0;
 uVar2 = uVar1;
 if (param_1 != 10) {
 do {
 uVar1 = uVar1 + 1;
 if (uVar1 == 5) {
 uVar2 = 0xffffffff;
 break;
 }
 uVar2 = uVar1 & 0xffffffff;
 } while (param_1 != (&iStack_28)[uVar1]);
 }
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return uVar2;
}

// Function: loop_continue @ 0x101670
int loop_continue(int param_1)
{
 uint uVar1;
 int iVar2;
 if (0 < param_1) {
 uVar1 = 1;
 iVar2 = 0;
 do {
 if ((uVar1 & 1) != 0) {
 iVar2 = iVar2 + uVar1;
 }
 uVar1 = uVar1 + 1;
 } while (uVar1 != param_1 + 1U);
 return iVar2;
 }
 return 0;
}

// Function: goto_forward @ 0x1016b0
int goto_forward(int param_1)
{
 if (0 < param_1) {
 param_1 = param_1 * param_1;
 }
 return param_1 * 2;
}

// Function: goto_backward @ 0x1016c0
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
 } while (param_1 + 1 != iVar1);
 }
 return iVar2;
}

// Function: ternary_op @ 0x1016f0
int ternary_op(int param_1,int param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: test_control_flow_l1 @ 0x101700
static char DAT_00103008[] = "Control Flow Level 1 Tests";
static char DAT_00103118[] = "Control Flow Level 2 Tests";
static char DAT_001032b8[] = "Control Flow Level 3 Tests";
void test_control_flow_l1(void)
{
 unsigned long uVar1;
 unsigned long uVar2;
 long in_FS_OFFSET;
 unsigned long long uStack_30;
 unsigned long long local_24;
 unsigned long long local_1c;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 uStack_30 = (char *)0x10172c;
 puts(DAT_00103008);
 uStack_30 = (char *)0x101744;
 __printf_chk(1,"CF-L1-01 (sequential_ops): %d\n",0x15);
 uStack_30 = (char *)0x101758;
 __printf_chk(1,"CF-L1-02 (single_if): %d\n",0x14);
 uStack_30 = (char *)0x101773;
 __printf_chk(1,"CF-L1-02 (single_if): %d\n",0xfffffffb);
 uStack_30 = (char *)0x101787;
 __printf_chk(1,"CF-L1-03 (if_else): %d\n",1);
 uStack_30 = (char *)0x10179f;
 __printf_chk(1,"CF-L1-03 (if_else): %d\n",0);
 uStack_30 = (char *)0x1017b3;
 __printf_chk(1,"CF-L1-04 (nested_if_2): %d\n",0xf);
 uStack_30 = (char *)0x1017c7;
 __printf_chk(1,"CF-L1-04 (nested_if_2): %d\n",10);
 uStack_30 = (char *)0x1017d8;
 __printf_chk(1,"CF-L1-04 (nested_if_2): %d\n",0);
 uStack_30 = (char *)0x1017f0;
 __printf_chk(1,"CF-L1-05 (nested_if_deep): %d\n",5);
 uStack_30 = (char *)0x101808;
 __printf_chk(1,"CF-L1-06 (if_elseif_chain): %d\n",0x14);
 uStack_30 = (char *)0x101820;
 __printf_chk(1,"CF-L1-07 (if_elseif_long): %d\n",400);
 uStack_30 = (char *)0x101838;
 __printf_chk(1,"CF-L1-08 (switch_small): %d\n",0x32);
 uStack_30 = (char *)0x101850;
 __printf_chk(1,"CF-L1-09 (switch_large): %d\n",0x46);
 uStack_30 = (char *)0x101865;
 __printf_chk(1,"CF-L1-10 (switch_default): %d\n",0);
 uStack_30 = (char *)0x10187d;
 __printf_chk(1,"CF-L1-11 (switch_fallthrough): %d\n",0x15);
 uStack_30 = (char *)0x101895;
 __printf_chk(1,"CF-L1-12 (loop_for_fixed): %d\n",0x2d);
 uStack_30 = (char *)0x1018ad;
 __printf_chk(1,"CF-L1-13 (loop_while): %d\n",5);
 uStack_30 = (char *)0x1018c5;
 __printf_chk(1,"CF-L1-14 (loop_dowhile): %d\n",4);
 uStack_30 = (char *)0x1018dd;
 __printf_chk(1,"CF-L1-15 (loop_nested): %d\n",0xc);
 local_24 = 0x1e00000014;
 local_1c = 0x3200000028;
 uVar1 = 1;
 do {
 uVar2 = uVar1 & 0xffffffff;
 if (uVar1 == 5) {
 uVar2 = 0xffffffff;
 break;
 }
 uVar1 = uVar1 + 1;
 } while (*(int *)((long)&uStack_30 + uVar1 * 4 + 4) != 0x1e);
 uStack_30 = (char *)0x101930;
 __printf_chk(1,"CF-L1-16 (loop_break): %d\n",uVar2);
 local_24 = 0x1e00000014;
 local_1c = 0x3200000028;
 uVar1 = 1;
 do {
 uVar2 = uVar1 & 0xffffffff;
 if (uVar1 == 5) {
 uVar2 = 0xffffffff;
 break;
 }
 uVar1 = uVar1 + 1;
 } while (*(int *)((long)&uStack_30 + uVar1 * 4 + 4) != 99);
 uStack_30 = (char *)0x10197c;
 __printf_chk(1,"CF-L1-16 (loop_break): %d\n",uVar2);
 uStack_30 = (char *)0x10199b;
 __printf_chk(1,"CF-L1-17 (loop_continue): %d\n",0x19);
 uStack_30 = (char *)0x1019af;
 __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0x32);
 uStack_30 = (char *)0x1019ca;
 __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0xfffffffa);
 uStack_30 = (char *)0x1019e2;
 __printf_chk(1,"CF-L1-19 (goto_backward): %d\n",0x78);
 uStack_30 = (char *)0x1019f6;
 __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",10);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",8);
 return;
 }
 __stack_chk_fail();
 return;
}

// Function: loop_multi_exit @ 0x101a40
int loop_multi_exit(int param_1)
{
 int iVar1;
 int *piVar2;
 int iVar3;
 long in_FS_OFFSET;
 int iStack_48;
 int local_44;
 unsigned long long local_40;
 unsigned long long local_38;
 unsigned long long local_30;
 unsigned long long local_28;
 unsigned long long local_20;
 long local_10;
 piVar2 = &iStack_48;
 iVar3 = 0;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_44 = 2;
 local_40 = 0x400000003;
 local_38 = 0x600000005;
 local_30 = 0x800000007;
 local_28 = 0xa00000009;
 local_20 = 0xc0000000b;
 if (param_1 != 1) {
 do {
 if (param_1 == piVar2[1]) {
 iVar1 = 1;
 goto LAB_00101adc;
 }
 if (param_1 == piVar2[2]) {
 iVar1 = 2;
 goto LAB_00101adc;
 }
 if (param_1 == piVar2[3]) {
 iVar1 = 3;
 goto LAB_00101adc;
 }
 iVar3 = iVar3 + 1;
 piVar2 = piVar2 + 4;
 if (iVar3 == 3) {
 iVar1 = -1;
 goto LAB_00101aed;
 }
 } while (*piVar2 != param_1);
 }
 iVar1 = 0;
LAB_00101adc:
 iVar1 = iVar1 + iVar3 * 10;
LAB_00101aed:
 if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar1;
 }
 __stack_chk_fail();
}

// Function: infinite_loop @ 0x101b30
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

// Function: multi_return @ 0x101b60
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

// Function: conditional_return @ 0x101b90
int conditional_return(int param_1)
{
 int iVar1;
 if (0 < param_1) {
 return param_1 * 2;
 }
 iVar1 = -param_1;
 if (param_1 == 0) {
 iVar1 = 0;
 }
 return iVar1;
}

// Function: duffs_device @ 0x101bb0
uint duffs_device(unsigned int *param_1,unsigned int *param_2,uint param_3)
{
 unsigned int uVar1;
 unsigned int *puVar2;
 int iVar3;
 unsigned int *puVar4;
 if ((int)param_3 < 1) {
 param_3 = 0xffffffff;
 }
 else {
 iVar3 = (int)(param_3 + 7) >> 3;
 puVar2 = param_1;
 switch(param_3 & 7) {
 case 0:
 puVar4 = param_2;
 break;
 case 1:
 goto switchD_00101bdf_caseD_1;
 case 2:
 puVar4 = param_2;
 goto LAB_00101c3a;
 case 3:
 goto switchD_00101bdf_caseD_3;
 case 4:
 puVar4 = param_2;
 goto LAB_00101c22;
 case 5:
 goto switchD_00101bdf_caseD_5;
 case 6:
 goto switchD_00101bdf_caseD_6;
 case 7:
 goto switchD_00101bdf_caseD_7;
 }
 while( true ) {
 param_2 = puVar4 + 1;
 param_1 = puVar2 + 1;
 *puVar2 = *puVar4;
switchD_00101bdf_caseD_7:
 uVar1 = *param_2;
 puVar2 = param_1 + 1;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
switchD_00101bdf_caseD_6:
 uVar1 = *param_2;
 param_1 = puVar2 + 1;
 param_2 = param_2 + 1;
 *puVar2 = uVar1;
switchD_00101bdf_caseD_5:
 *param_1 = *param_2;
 puVar2 = param_1 + 1;
 puVar4 = param_2 + 1;
LAB_00101c22:
 param_2 = puVar4 + 1;
 param_1 = puVar2 + 1;
 *puVar2 = *puVar4;
switchD_00101bdf_caseD_3:
 *param_1 = *param_2;
 puVar2 = param_1 + 1;
 puVar4 = param_2 + 1;
LAB_00101c3a:
 param_2 = puVar4 + 1;
 param_1 = puVar2 + 1;
 *puVar2 = *puVar4;
switchD_00101bdf_caseD_1:
 *param_1 = *param_2;
 iVar3 = iVar3 + -1;
 if (iVar3 == 0) break;
 puVar2 = param_1 + 1;
 puVar4 = param_2 + 1;
 }
 }
 return param_3;
}

// Function: loop_complex_cond @ 0x101c80
int loop_complex_cond(int param_1)
{
 int iVar1;
 int iVar2;
 if (param_1 < 1) {
 return param_1;
 }
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 2;
 param_1 = param_1 + -1;
 iVar2 = iVar2 + 1;
 if (param_1 <= iVar1) break;
 } while (iVar2 < 10);
 return iVar1 + param_1 + iVar2;
}

// Function: loop_modify_var @ 0x101cc0
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

// Function: loop_external_state @ 0x101cf0
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

// Function: tail_recursion @ 0x101d10
int tail_recursion(int param_1,int param_2)
{
 if (1 < param_1) {
 do {
 param_2 = param_2 * param_1;
 param_1 = param_1 + -1;
 } while (param_1 != 1);
 }
 return param_2;
}

// Function: indirect_recursion_a @ 0x101d30
uint indirect_recursion_a(uint param_1,int param_2)
{
 int iVar1;
 bool bVar2;
 iVar1 = param_2 + -2;
 if (0 < param_2) {
 do {
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
 bVar2 = iVar1 != 0;
 iVar1 = iVar1 + -2;
 } while (bVar2);
 }
 return param_1;
}

// Function: call_func_ptr @ 0x101d80
void call_func_ptr(void *UNRECOVERED_JUMPTABLE,unsigned int param_2)
{
 ((void (*)(unsigned int))UNRECOVERED_JUMPTABLE)(param_2);
 return;
}

// Function: call_func_ptr_array @ 0x101d90
unsigned long long call_func_ptr_array(uint param_1,unsigned int param_2)
{
 unsigned long long uVar1;
 long in_FS_OFFSET;
 void *local_28 [3];
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_28[0] = double_value;
 local_28[1] = triple_value;
 local_28[2] = recursion_factorial;
 if (param_1 < 3) {
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 uVar1 = ((unsigned long long (*)(unsigned int))(local_28[(int)param_1]))(param_2);
 return uVar1;
 }
 }
 else if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return 0xffffffff;
 }
 __stack_chk_fail();
}

// Function: call_virtual_func @ 0x101e10
int call_virtual_func(unsigned long long param_1,int param_2)
{
 return param_2 * 2;
}

// Function: process_with_callback @ 0x101e20
int process_with_callback(unsigned int *param_1,int param_2,int (*param_3)(unsigned int))
{
 unsigned int *puVar1;
 unsigned int uVar2;
 int iVar3;
 int iVar4;
 if (0 < param_2) {
 iVar4 = 0;
 puVar1 = param_1 + (unsigned long)(param_2 - 1) + 1;
 do {
 uVar2 = *param_1;
 param_1 = param_1 + 1;
 iVar3 = param_3(uVar2);
 iVar4 = iVar4 + iVar3;
 } while (param_1 != puVar1);
 return iVar4;
 }
 return 0;
}

// Function: test_control_flow_l2 @ 0x101e90
void test_control_flow_l2(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned long long *puVar3;
 int iVar4;
 int iVar5;
 long in_FS_OFFSET;
 unsigned long long local_78;
 unsigned long long local_70;
 unsigned int local_68;
 unsigned long long local_64;
 unsigned long long local_58;
 unsigned long long local_50;
 unsigned long long local_48;
 unsigned long long local_40;
 char local_38 [16];
 char local_28 [16];
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(DAT_00103118);
 uVar2 = loop_multi_exit(7);
 __printf_chk(1,"CF-L2-01 (loop_multi_exit): %d\n",uVar2);
 iVar4 = 0;
 do {
 iVar4 = iVar4 + 1;
 } while (iVar4 != 0x3e9);
 __printf_chk(1,"CF-L2-02 (infinite_loop): done\n");
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xffffffff);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xfffffffe);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",4);
 __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",10);
 __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",5);
 local_58 = 0x200000001;
 local_50 = 0x400000003;
 local_48 = 0x600000005;
 local_38[0] = 0;
 local_28[0] = 0;
 local_40 = 0x800000007;
 uVar2 = duffs_device(local_38,&local_58,8);
 __printf_chk(1,"CF-L2-05 (duffs_device): %d\n",uVar2);
 __printf_chk(1,"CF-L2-06 (loop_complex_cond): %d\n",0x12);
 iVar5 = 0;
 iVar4 = 0;
 while (iVar1 = iVar4 + 1, iVar1 < 10) {
 iVar5 = iVar5 + iVar1;
 iVar4 = iVar4 + 3;
 if (iVar1 < 6) {
 iVar4 = iVar1;
 }
 }
 __printf_chk(1,"CF-L2-07 (loop_modify_var): %d\n",iVar5);
 iVar4 = 0;
 do {
 iVar4 = iVar4 + 1;
 } while (iVar4 != 0x65);
 __printf_chk(1,"CF-L2-08 (loop_external_state): done\n");
 __printf_chk(1,"CF-L2-09 (recursion_factorial): %d\n",0x78);
 __printf_chk(1,"CF-L2-10 (tail_recursion): %d\n",0x78);
 __printf_chk(1,"CF-L2-11 (indirect_recursion): %d\n",3);
 __printf_chk(1,"CF-L2-12 (call_func_ptr): %d\n",10);
 __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",10);
 __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",0x78);
 local_68 = 5;
 iVar5 = 0;
 iVar4 = 1;
 local_78 = 0x200000001;
 local_70 = 0x400000003;
 puVar3 = &local_78;
 while( true ) {
 puVar3 = (unsigned long long *)((long)puVar3 + 4);
 iVar5 = iVar5 + iVar4 * 2;
 if (puVar3 == &local_64) break;
 iVar4 = *(int *)puVar3;
 }
 __printf_chk(1,"CF-L2-15 (process_with_callback): %d\n",iVar5);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return;
}

// Function: non_local_jump @ 0x102190
int non_local_jump(int param_1)
{
 int iVar1;
 iVar1 = _setjmp((__jmp_buf_tag *)jump_buffer);
 if (iVar1 == 0) {
 if (param_1 < 0) {
 __longjmp_chk((__jmp_buf_tag *)jump_buffer,1);
 }
 if (100 < param_1) {
 __longjmp_chk((__jmp_buf_tag *)jump_buffer,2);
 }
 param_1 = param_1 * 2;
 }
 else {
 param_1 = -1;
 }
 return param_1;
}

// Function: cpp_exception @ 0x102200
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

// Function: large_jump_table @ 0x102230
unsigned long long large_jump_table(uint param_1,unsigned int param_2,unsigned int param_3)
{
 unsigned long long uVar1;
 long in_FS_OFFSET;
 void *local_68 [4];
 void *local_48;
 void *local_40;
 void *local_38;
 void *local_30;
 void *local_28;
 void *local_20;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_68[0] = op_add;
 local_68[1] = op_sub;
 local_68[2] = op_mul;
 local_68[3] = op_div;
 local_48 = op_mod;
 local_40 = op_and;
 local_38 = op_or;
 local_30 = op_xor;
 local_28 = op_shl;
 local_20 = op_shr;
 if (param_1 < 10) {
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 uVar1 = ((unsigned long long (*)(uint, unsigned int))local_68[(int)param_1])(param_2, param_3);
 return uVar1;
 }
 }
 else if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return 0xffffffff;
 }
 __stack_chk_fail();
}

// Function: conditional_func_ptr @ 0x102310
void conditional_func_ptr(int param_1,unsigned int param_2)
{
 int (*func_ptr)(int);
 func_ptr = double_value;
 if ((param_1 != 0) && (func_ptr = triple_value, param_1 != 1)) {
 func_ptr = recursion_factorial;
 }
 func_ptr(param_2);
 return;
}

// Function: state_machine @ 0x102340
char state_machine(int param_1,int param_2)
{
 if (param_2 == 2) {
 return 2;
 }
 if (param_2 < 3) {
 if (param_2 == 0) {
 return param_1 == 1;
 }
 if (param_2 == 1) {
 if (param_1 == 2) {
 return 2;
 }
 return (param_1 == 99) * '\x02' + '\x01';
 }
 }
 else if (param_2 == 3) {
 return -(param_1 != 0) & 3;
 }
 return 3;
}

// Function: fsm_func_table @ 0x1023b0
unsigned long long fsm_func_table(unsigned long long param_1,uint param_2)
{
 unsigned long long uVar1;
 long in_FS_OFFSET;
 void *local_38 [5];
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_38[0] = state_idle;
 local_38[1] = state_processing;
 local_38[2] = state_done;
 local_38[3] = state_error;
 if (param_2 < 4) {
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 uVar1 = ((unsigned long long (*)(unsigned long long))(local_38[(int)param_2]))(param_1);
 return uVar1;
 }
 }
 else if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return 3;
 }
 __stack_chk_fail();
}

// Function: computed_goto @ 0x102440
unsigned long long DAT_001024d0(void) { return 0; }
unsigned long long DAT_001024c0(void) { return 0; }
unsigned long long DAT_001024b0(void) { return 0; }
unsigned long long DAT_00102490(void) { return 0; }
unsigned long long computed_goto(unsigned long long param_1,uint param_2)
{
 unsigned long long uVar1;
 long in_FS_OFFSET;
 unsigned long long (*local_38 [5])(void);
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_38[0] = DAT_001024d0;
 local_38[1] = DAT_001024c0;
 local_38[2] = DAT_001024b0;
 local_38[3] = DAT_00102490;
 if (param_2 < 4) {
 uVar1 = (*local_38[(int)param_2])();
 return uVar1;
 }
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return 0xffffffff;
 }
 __stack_chk_fail();
}

// Function: obfuscated_cf @ 0x1024f0
int obfuscated_cf(int param_1)
{
 return param_1 * 2;
}

// Function: opaque_predicate @ 0x102500
int opaque_predicate(int param_1)
{
 return param_1 * 2;
}

// Function: overlapped_code @ 0x102510
int overlapped_code(uint param_1)
{
 if ((param_1 & 1) != 0) {
 return param_1 * 3 + 1;
 }
 return (int)param_1 / 2;
}

// Function: test_control_flow_l3 @ 0x102530
void test_control_flow_l3(void)
{
 unsigned int uVar1;
 long in_FS_OFFSET;
 unsigned long long local_28;
 unsigned long long local_20;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(DAT_001032b8);
 uVar1 = non_local_jump(5);
 __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",uVar1);
 uVar1 = non_local_jump(0xfffffffb);
 __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",uVar1);
 __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",10);
 __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",0xffffffff);
 uVar1 = op_add(10,5);
 __printf_chk(1,"CF-L3-03 (large_jump_table): %d\n",uVar1);
 __printf_chk(1,"CF-L3-04 (conditional_func_ptr): %d\n",10);
 __printf_chk(1,"CF-L3-05 (state_machine): %d\n",1);
 __printf_chk(1,"CF-L3-06 (fsm_func_table): %d\n",2);
 local_28 = 0x100000000;
 local_20 = 0x300000002;
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



