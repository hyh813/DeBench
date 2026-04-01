// Decompiled by BinaryAI
// SHA256: c205da246fd0abdbdc593c09a36450804818bfc79e56f23c1df658eb73d744ac

#include <stdbool.h>
#include <stddef.h>

typedef unsigned int uint;
typedef unsigned char byte;

// External data declarations
extern void *DAT_00013064;
extern void *DAT_0001316c;
extern void *DAT_000132f0;
extern int DAT_00012314;
extern int DAT_0001232e;
extern int DAT_00012339;
extern int DAT_00012344;
extern void *jump_buffer;
extern void *_GLOBAL_OFFSET_TABLE_;

// External data definitions
void *DAT_00013064;
void *DAT_0001316c;
void *DAT_000132f0;
int DAT_00012314;
int DAT_0001232e;
int DAT_00012339;
int DAT_00012344;
void *jump_buffer;

// Function declarations
void __gmon_start__(void);
void frame_dummy(void);
void __do_global_ctors_aux(void);
void __stack_chk_fail(void);
unsigned int main(void);



// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 ((void (*)(void))0)();
 return;
}

// Function: FUN_000110a0 @ 0x110a0
void FUN_000110a0(int unaff_EBX)
{
 ((void (*)(void))(unaff_EBX + 0x28))();
 return;
}

// Function: FUN_000110b0 @ 0x110b0
void FUN_000110b0(int unaff_EBX, ...)
{
 ((void (*)(int, ...))(unaff_EBX + 0xc))(unaff_EBX);
 return;
}

// Function: FUN_000110c0 @ 0x110c0
int FUN_000110c0(int unaff_EBX)
{
 return ((int (*)(void))(unaff_EBX + 0x10))();
}

// Function: FUN_000110d0 @ 0x110d0
void FUN_000110d0(int unaff_EBX)
{
 ((void (*)(void))(unaff_EBX + 0x14))();
 return;
}

// Function: FUN_000110e0 @ 0x110e0
void FUN_000110e0(int unaff_EBX, ...)
{
 ((void (*)(void *, ...))(unaff_EBX + 0x18))((void *)unaff_EBX);
 return;
}

// Function: FUN_000110f0 @ 0x110f0
void FUN_000110f0(int param_1, const char *format, ...)
{
 int unaff_EBX;
 ((void (*)(int, const char *, ...))(unaff_EBX + 0x1c))(param_1, format);
 return;
}

// Function: FUN_00011100 @ 0x11100
void FUN_00011100(void)
{
 return;
}



// Function: __i686.get_pc_thunk.bx @ 0x1113c
void __i686_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.bx @ 0x11140
void __x86_get_pc_thunk_bx(void)
{
 return;
}

// Function: deregister_tm_clones @ 0x11150
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x11190
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x111e0
void __do_global_dtors_aux(void)
{
 uint uVar1;
 int unaff_EDI;
 __x86_get_pc_thunk_di();
 if (*(char *)(unaff_EDI + 0x4e33) == '\0') {
 if (*(int *)(unaff_EDI + 0x4e03) != 0) {
 FUN_000110a0(*(unsigned int *)(unaff_EDI + 0x4e17));
 }
 uVar1 = *(uint *)(unaff_EDI + 0x4e37);
 while (uVar1 < ((unaff_EDI + 0x4cff) - (unaff_EDI + 0x4cfb) >> 2) - 1U) {
 *(uint *)(unaff_EDI + 0x4e37) = uVar1 + 1;
 ((void (*)(void))(unaff_EDI + 0x4cfb + (uVar1 + 1) * 4))();
 uVar1 = *(uint *)(unaff_EDI + 0x4e37);
 }
 deregister_tm_clones();
 *(char *)(unaff_EDI + 0x4e33) = 1;
 }
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x11279
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x1127d
void __x86_get_pc_thunk_di(void)
{
 return;
}

// Function: recursion_factorial @ 0x11281
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

// Function: double_value @ 0x112ae
int double_value(int param_1)
{
 return param_1 * 2;
}

// Function: triple_value @ 0x112b9
int triple_value(int param_1)
{
 return param_1 * 3;
}

// Function: op_add @ 0x112c5
int op_add(int param_1,int param_2)
{
 return param_2 + param_1;
}

// Function: op_sub @ 0x112d2
int op_sub(int param_1,int param_2)
{
 return param_1 - param_2;
}

// Function: op_mul @ 0x112df
int op_mul(int param_1,int param_2)
{
 return param_2 * param_1;
}

// Function: op_div @ 0x112ed
int op_div(int param_1,int param_2)
{
 if (param_2 != 0) {
 param_2 = param_1 / param_2;
 }
 return param_2;
}

// Function: op_mod @ 0x11305
int op_mod(int param_1,int param_2)
{
 if (param_2 != 0) {
 param_2 = param_1 % param_2;
 }
 return param_2;
}

// Function: op_and @ 0x1131d
uint op_and(uint param_1,uint param_2)
{
 return param_2 & param_1;
}

// Function: op_or @ 0x1132a
uint op_or(uint param_1,uint param_2)
{
 return param_2 | param_1;
}

// Function: op_xor @ 0x11337
uint op_xor(uint param_1,uint param_2)
{
 return param_2 ^ param_1;
}

// Function: op_shl @ 0x11344
int op_shl(int param_1,byte param_2)
{
 return param_1 << (param_2 & 0x1f);
}

// Function: op_shr @ 0x11353
int op_shr(int param_1,byte param_2)
{
 return param_1 >> (param_2 & 0x1f);
}

// Function: state_idle @ 0x11362
bool state_idle(int param_1)
{
 return param_1 == 1;
}

// Function: state_processing @ 0x11372
int state_processing(int param_1)
{
 if (param_1 != 2) {
 param_1 = (uint)(param_1 == 99) * 2 + 1;
 }
 return param_1;
}

// Function: state_done @ 0x1138d
unsigned int state_done(void)
{
 return 2;
}

// Function: state_error @ 0x11397
int state_error(int param_1)
{
 if (param_1 != 0) {
 param_1 = 3;
 }
 return param_1;
}

// Function: sequential_ops @ 0x113aa
int sequential_ops(int param_1,int param_2,int param_3)
{
 return (param_2 + param_1) * 2 - param_3;
}

// Function: single_if @ 0x113bd
int single_if(int param_1)
{
 int iVar1;
 iVar1 = param_1 * 2;
 if (param_1 < 1) {
 iVar1 = param_1;
 }
 return iVar1;
}

// Function: if_else @ 0x113ce
bool if_else(int param_1)
{
 return 0 < param_1;
}

// Function: nested_if_2 @ 0x113de
int nested_if_2(int param_1,int param_2)
{
 int iVar1;
 iVar1 = 0;
 if ((0 < param_1) && (iVar1 = param_1 + param_2, param_2 < 1)) {
 iVar1 = param_1;
 }
 return iVar1;
}

// Function: nested_if_deep @ 0x113fc
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

// Function: if_elseif_chain @ 0x11441
unsigned int if_elseif_chain(int param_1)
{
 unsigned int uVar1;
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

// Function: if_elseif_long @ 0x1146e
unsigned int if_elseif_long(unsigned int param_1)
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

// Function: switch_small @ 0x114b3
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

// Function: switch_large @ 0x114f0
unsigned int switch_large(unsigned int param_1)
{
 switch(param_1) {
 case 0:
 break;
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
 param_1 = 0xffffffff;
 }
 return param_1;
}

// Function: switch_default @ 0x1154e
unsigned int switch_default(int param_1)
{
 unsigned int uVar1;
 uVar1 = 200;
 if (((param_1 != 2) && (uVar1 = 300, param_1 != 3)) && (uVar1 = 0, param_1 == 1)) {
 uVar1 = 100;
 }
 return uVar1;
}

// Function: switch_fallthrough @ 0x1157b
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
 goto LAB_000115a7;
 }
 iVar1 = 0xc;
 }
 iVar1 = iVar1 + param_1 * 2;
LAB_000115a7:
 return iVar1 + param_1;
}

// Function: loop_for_fixed @ 0x115b1
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

// Function: loop_while @ 0x115da
int loop_while(int param_1)
{
 int iVar1;
 int iVar2;
 if (param_1 == 0) {
 iVar2 = 0;
 }
 else {
 iVar2 = 0;
 do {
 param_1 = param_1 / 10;
 iVar2 = iVar2 + 1;
 } while (param_1 != 0);
 }
 iVar1 = 1;
 if (0 < iVar2) {
 iVar1 = iVar2;
 }
 return iVar1;
}

// Function: loop_dowhile @ 0x11618
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

// Function: loop_nested @ 0x11646
int loop_nested(int param_1,int param_2)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar2 = 0;
 iVar3 = 0;
 if (0 < param_1) {
 do {
 iVar1 = 0;
 if (0 < param_2) {
 do {
 iVar1 = iVar1 + 1;
 } while (param_2 != iVar1);
 iVar3 = iVar3 + iVar1;
 }
 iVar2 = iVar2 + 1;
 } while (param_1 != iVar2);
 }
 return iVar3;
}

// Function: loop_break @ 0x11682
int loop_break(int param_1)
{
 int iVar1;
 int in_GS_OFFSET;
 int local_24 [5];
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = 0;
 local_24[0] = 10;
 local_24[1] = 0x14;
 local_24[2] = 0x1e;
 local_24[3] = 0x28;
 local_24[4] = 0x32;
 do {
 if (local_24[iVar1] == param_1) goto LAB_000116d7;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 5);
 iVar1 = -1;
LAB_000116d7:
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar1;
 }
 __stack_chk_fail_local();
}

// Function: loop_continue @ 0x116ed
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

// Function: goto_forward @ 0x11721
int goto_forward(int param_1)
{
 if (0 < param_1) {
 param_1 = param_1 * param_1;
 }
 return param_1 * 2;
}

// Function: goto_backward @ 0x11735
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

// Function: ternary_op @ 0x1175b
int ternary_op(int param_1,int param_2)
{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: test_control_flow_l1 @ 0x1176d
void test_control_flow_l1(void)
{
 unsigned int uVar1;
 FUN_000110e0(&DAT_00013064);
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
 uVar1 = goto_backward(5);
 FUN_000110f0(1,"CF-L1-19 (goto_backward): %d\n",uVar1);
 FUN_000110f0(1,"CF-L1-20 (ternary_op): %d\n",10);
 FUN_000110f0(1,"CF-L1-20 (ternary_op): %d\n",8);
 return;
}

// Function: loop_multi_exit @ 0x119c5
int loop_multi_exit(int param_1)
{
 int iVar1;
 unsigned int *puVar2;
 int iVar3;
 int in_GS_OFFSET;
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
 unsigned int local_18;
 unsigned int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_40 = 1;
 local_3c = 2;
 local_38 = 3;
 local_34 = 4;
 local_30 = 5;
 local_2c = 6;
 local_28 = 7;
 local_24 = 8;
 local_20 = 9;
 local_1c = 10;
 local_18 = 0xb;
 local_14 = 0xc;
 puVar2 = &local_40;
 iVar3 = 0;
 do {
 iVar1 = 0;
 do {
 if (puVar2[iVar1] == param_1) {
 iVar1 = iVar1 + iVar3 * 10;
 goto LAB_00011a68;
 }
 iVar1 = iVar1 + 1;
 } while (iVar1 != 4);
 iVar3 = iVar3 + 1;
 puVar2 = puVar2 + 4;
 } while (iVar3 != 3);
 iVar1 = -1;
LAB_00011a68:
 if (*(int *)(in_GS_OFFSET + 0x14) == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar1;
 }
 __stack_chk_fail_local();
}

// Function: infinite_loop @ 0x11a87
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

// Function: multi_return @ 0x11aac
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

// Function: conditional_return @ 0x11ad6
int conditional_return(int param_1)
{
 int iVar1;
 if (0 < param_1) {
 return param_1 * 2;
 }
 iVar1 = 0;
 if (param_1 < 0) {
 iVar1 = -param_1;
 }
 return iVar1;
}

// Function: duffs_device @ 0x11af4
int duffs_device(unsigned int param_1,unsigned int param_2,int param_3)
{
 int iVar1;
 int unaff_EDI;
 __x86_get_pc_thunk_di();
 if (param_3 < 1) {
 param_3 = -1;
 }
 else if ((uint)(param_3 % 8) < 8) {
 iVar1 = (*(int (**)(void))(unaff_EDI + 0x44c7 + *(int *)(unaff_EDI + 0x1543 + (param_3 % 8) * 4)))();
 return iVar1;
 }
 return param_3;
}

// Function: loop_complex_cond @ 0x11bbf
int loop_complex_cond(int param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 iVar3 = param_1;
 if (param_1 < 1) {
 iVar4 = 0;
 iVar1 = 0;
 }
 else {
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 2;
 iVar3 = iVar3 + -1;
 iVar4 = param_1 - iVar3;
 iVar2 = 0;
 if (-1 < iVar1) {
 iVar2 = iVar1;
 }
 } while ((iVar2 < iVar3) && (iVar4 < 10));
 }
 return iVar1 + iVar3 + iVar4;
}

// Function: loop_modify_var @ 0x11c06
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

// Function: loop_external_state @ 0x11c35
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

// Function: tail_recursion @ 0x11c51
int tail_recursion(int param_1,int param_2)
{
 if (1 < param_1) {
 param_2 = tail_recursion(param_1 + -1,param_2 * param_1);
 }
 return param_2;
}

// Function: indirect_recursion_a @ 0x11c7e
uint indirect_recursion_a(uint param_1,int param_2)
{
 if (0 < param_2) {
 if ((param_1 & 1) == 0) {
 param_1 = (int)param_1 / 2;
 if (1 < param_2) {
 param_1 = indirect_recursion_a(param_1 + 1,param_2 + -2);
 }
 }
 else if (param_2 < 2) {
 param_1 = param_1 * 3 + 1;
 }
 else {
 param_1 = indirect_recursion_a(param_1 * 3 + 2,param_2 + -2);
 }
 }
 return param_1;
}

// Function: call_func_ptr @ 0x11cdf
void call_func_ptr(void *param_1,unsigned int param_2)
{
 ((void (*)(unsigned int))param_1)(param_2);
 return;
}

// Function: call_func_ptr_array @ 0x11cf2
unsigned int call_func_ptr_array(uint param_1,unsigned int param_2)
{
 unsigned int uVar1;
 int in_GS_OFFSET;
 void *local_1c [3];
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_1c[0] = double_value;
 local_1c[1] = triple_value;
 local_1c[2] = recursion_factorial;
 if (param_1 < 3) {
 uVar1 = ((int (*)(unsigned int))local_1c[param_1])(param_2);
 }
 else {
 uVar1 = 0xffffffff;
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar1;
 }
 __stack_chk_fail_local();
}

// Function: call_virtual_func @ 0x11d61
int call_virtual_func(unsigned int param_1,int param_2)
{
 return param_2 * 2;
}

// Function: process_with_callback @ 0x11d6c
int process_with_callback(int param_1,int param_2,void *param_3)
{
 int iVar1;
 int iVar2;
 int iVar3;
 if (param_2 < 1) {
 iVar3 = 0;
 }
 else {
 iVar2 = 0;
 iVar3 = 0;
 do {
 iVar1 = ((int (*)(unsigned int))param_3)(*(unsigned int *)(param_1 + iVar2 * 4));
 iVar3 = iVar3 + iVar1;
 iVar2 = iVar2 + 1;
 } while (param_2 != iVar2);
 }
 return iVar3;
}

// Function: test_control_flow_l2 @ 0x11db7
void test_control_flow_l2(void)
{
 unsigned int uVar1;
 uint uVar2;
 int in_GS_OFFSET;
 unsigned int local_7c;
 unsigned int local_78;
 unsigned int local_74;
 unsigned int local_70;
 unsigned int local_6c;
 unsigned int local_68;
 unsigned int local_64;
 unsigned int local_60;
 unsigned int local_5c;
 unsigned int local_58;
 unsigned int local_54;
 unsigned int local_50;
 unsigned int local_4c;
 unsigned int local_48;
 unsigned int local_44;
 unsigned int local_40 [8];
 int local_20;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 uVar1 = loop_multi_exit(7);
 FUN_000110f0(1,"CF-L2-01 (loop_multi_exit): %d\n",uVar1);
 local_7c = 0;
 infinite_loop(&local_7c);
 FUN_000110f0(1,"CF-L2-02 (infinite_loop): %d\n",local_7c);
 FUN_000110f0(1,"CF-L2-03 (multi_return): %d\n",0xffffffff);
 FUN_000110f0(1,"CF-L2-03 (multi_return): %d\n",0xfffffffe);
 FUN_000110f0(1,"CF-L2-03 (multi_return): %d\n",4);
 FUN_000110f0(1,"CF-L2-04 (conditional_return): %d\n",10);
 FUN_000110f0(1,"CF-L2-04 (conditional_return): %d\n",5);
 local_60 = 1;
 local_5c = 2;
 local_58 = 3;
 local_54 = 4;
 local_50 = 5;
 local_4c = 6;
 local_48 = 7;
 local_44 = 8;
 uVar2 = 0;
 do {
 *(unsigned int *)((int)local_40 + uVar2) = 0;
 uVar2 = uVar2 + 4;
 } while (uVar2 < 0x20);
 uVar1 = duffs_device(local_40,&local_60,8);
 FUN_000110f0(1,"CF-L2-05 (duffs_device): %d\n",uVar1);
 uVar1 = loop_complex_cond(10);
 FUN_000110f0(1,"CF-L2-06 (loop_complex_cond): %d\n",uVar1);
 uVar1 = loop_modify_var(10);
 FUN_000110f0(1,"CF-L2-07 (loop_modify_var): %d\n",uVar1);
 local_78 = 0;
 loop_external_state(&local_78);
 FUN_000110f0(1,"CF-L2-08 (loop_external_state): %d\n",local_78);
 uVar1 = recursion_factorial(5);
 FUN_000110f0(1,"CF-L2-09 (recursion_factorial): %d\n",uVar1);
 uVar1 = tail_recursion(5,1);
 FUN_000110f0(1,"CF-L2-10 (tail_recursion): %d\n",uVar1);
 uVar1 = indirect_recursion_a(10,3);
 FUN_000110f0(1,"CF-L2-11 (indirect_recursion): %d\n",uVar1);
 call_func_ptr(double_value,5);
 FUN_000110f0(1,"CF-L2-12 (call_func_ptr): %d\n",uVar1);
 uVar1 = call_func_ptr_array(0,5);
 FUN_000110f0(1,"CF-L2-13 (call_func_ptr_array): %d\n",uVar1);
 uVar1 = call_func_ptr_array(2,5);
 FUN_000110f0(1,"CF-L2-13 (call_func_ptr_array): %d\n",uVar1);
 local_74 = 1;
 local_70 = 2;
 local_6c = 3;
 local_68 = 4;
 local_64 = 5;
 uVar1 = process_with_callback(&local_74,5,double_value);
 FUN_000110f0(1,"CF-L2-15 (process_with_callback): %d\n",uVar1);
 if (local_20 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 __stack_chk_fail_local();
}



// Function: cpp_exception @ 0x120d6
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

// Function: large_jump_table @ 0x120f6
unsigned int large_jump_table(uint param_1,unsigned int param_2,unsigned int param_3)
{
 unsigned int uVar1;
 int in_GS_OFFSET;
 void *local_38 [10];
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_38[0] = op_add;
 local_38[1] = op_sub;
 local_38[2] = op_mul;
 local_38[3] = op_div;
 local_38[4] = op_mod;
 local_38[5] = op_and;
 local_38[6] = op_or;
 local_38[7] = op_xor;
 local_38[8] = op_shl;
 local_38[9] = op_shr;
 if (param_1 < 10) {
 uVar1 = ((unsigned int (*)(unsigned int, unsigned int))local_38[param_1])(param_2,param_3);
 }
 else {
 uVar1 = 0xffffffff;
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar1;
 }
 __stack_chk_fail_local();
}

// Function: conditional_func_ptr @ 0x121b0
void conditional_func_ptr(int param_1,unsigned int param_2)
{
 void *pcVar1;
 pcVar1 = double_value;
 if (param_1 != 0) {
 pcVar1 = triple_value;
 if (param_1 != 1) {
 pcVar1 = recursion_factorial;
 }
 }
 ((void (*)(unsigned int))pcVar1)(param_2);
 return;
}

// Function: state_machine @ 0x121ef
uint state_machine(int param_1,uint param_2)
{
 uint uVar1;
 if (param_2 != 2) {
 if (2 < (int)param_2) {
 if (param_2 == 3) {
 uVar1 = 3;
 if (param_1 == 0) {
 uVar1 = 0;
 }
 return uVar1;
 }
 return 3;
 }
 if (param_2 == 0) {
 return (uint)(param_1 == 1);
 }
 if (param_2 != 1) {
 return 3;
 }
 if (param_1 != 2) {
 uVar1 = 1;
 if (param_1 == 99) {
 uVar1 = 3;
 }
 return uVar1;
 }
 param_2 = 2;
 }
 return param_2;
}

// Function: fsm_func_table @ 0x12249
unsigned int fsm_func_table(unsigned int param_1,uint param_2)
{
 unsigned int uVar1;
 int in_GS_OFFSET;
 void *local_20 [4];
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_20[0] = state_idle;
 local_20[1] = state_processing;
 local_20[2] = state_done;
 local_20[3] = state_error;
 uVar1 = 3;
 if (param_2 < 4) {
 uVar1 = ((unsigned int (*)(int))local_20[param_2])(param_1);
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar1;
 }
 __stack_chk_fail_local();
}

// Function: computed_goto @ 0x122c1
unsigned int computed_goto(unsigned int param_1,uint param_2)
{
 unsigned int uVar1;
 int in_GS_OFFSET;
 void *local_20 [4];
 unsigned int (*func_table[4])(void);
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 func_table[0] = (unsigned int (*)(void))0;
 func_table[1] = (unsigned int (*)(void))0;
 func_table[2] = (unsigned int (*)(void))0;
 func_table[3] = (unsigned int (*)(void))0;
 local_20[0] = (void *)func_table[0];
 local_20[1] = (void *)func_table[1];
 local_20[2] = (void *)func_table[2];
 local_20[3] = (void *)func_table[3];
 if (param_2 < 4) {
 if (func_table[param_2] != NULL) {
 uVar1 = func_table[param_2]();
 return uVar1;
 }
 return 0xffffffff;
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return 0xffffffff;
 }
 __stack_chk_fail_local();
}

// Function: obfuscated_cf @ 0x1235b
int obfuscated_cf(int param_1)
{
 return param_1 * 2;
}

// Function: opaque_predicate @ 0x12366
int opaque_predicate(int param_1)
{
 return param_1 * 2;
}

// Function: overlapped_code @ 0x12371
int overlapped_code(uint param_1)
{
 if ((param_1 & 1) != 0) {
 return param_1 * 3 + 1;
 }
 return (int)param_1 / 2;
}

// Function: test_control_flow_l3 @ 0x1238d
void test_control_flow_l3(void)
{
 unsigned int uVar1;
 int in_GS_OFFSET;
 unsigned int local_20;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 uVar1 = 10;
 FUN_000110f0(1,"CF-L3-01 (non_local_jump): %d\n",uVar1);
 uVar1 = -2;
 FUN_000110f0(1,"CF-L3-01 (non_local_jump): %d\n",uVar1);
 FUN_000110f0(1,"CF-L3-02 (cpp_exception): %d\n",10);
 FUN_000110f0(1,"CF-L3-02 (cpp_exception): %d\n",0xffffffff);
 uVar1 = large_jump_table(0,10,5);
 FUN_000110f0(1,"CF-L3-03 (large_jump_table): %d\n",uVar1);
 conditional_func_ptr(0,5);
 FUN_000110f0(1,"CF-L3-04 (conditional_func_ptr): %d\n",uVar1);
 FUN_000110f0(1,"CF-L3-05 (state_machine): %d\n",1);
 uVar1 = fsm_func_table(2,1);
 FUN_000110f0(1,"CF-L3-06 (fsm_func_table): %d\n",uVar1);
 local_20 = 0;
 local_1c = 1;
 local_18 = 2;
 local_14 = 3;
 uVar1 = computed_goto(&local_20,2);
 FUN_000110f0(1,"CF-L3-07 (computed_goto): %d\n",uVar1);
 FUN_000110f0(1,"CF-L3-08 (obfuscated_cf): %d\n",10);
 FUN_000110f0(1,"CF-L3-09 (opaque_predicate): %d\n",10);
 FUN_000110f0(1,"CF-L3-10 (overlapped_code): %d\n",0x10);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 __stack_chk_fail_local();
}

// Function: main @ 0x12513
unsigned int main(void)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}

// Function: __x86.get_pc_thunk.ax @ 0x12533
unsigned int __x86_get_pc_thunk_ax(void)
{
 unsigned int unaff_retaddr;
 return unaff_retaddr;
}

// Function: __stack_chk_fail_local @ 0x12540
void __stack_chk_fail_local(void)
{
 FUN_000110d0(0);
 return;
}

// Function: __do_global_ctors_aux @ 0x12560
void __do_global_ctors_aux(void)
{
 return;
}



