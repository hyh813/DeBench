// Decompiled by BinaryAI
// SHA256: db290b95783e4f3d64b2bcb1a346d75b0c2c4513a9ba0b23a29a51753adecaf6

#include <stdint.h>
#include <stdarg.h>

// Type definitions
typedef unsigned int uint;
typedef unsigned char byte;
typedef int bool;
typedef unsigned long long ulonglong;
#define true 1
#define false 0

// External data references
extern int DAT_00013008;
extern int DAT_00013110;
extern int DAT_00013294;
extern int DAT_00012588;
extern int DAT_00012578;
extern int DAT_00012568;
extern int DAT_00012548;

// Global Offset Table
extern void *_GLOBAL_OFFSET_TABLE_;

// Jump buffer for non-local jumps
extern char jump_buffer[256];

// Stack canary reference
extern int stack0x00000004;

// Switch jump table
static const unsigned int CSWTCH_56[4] = {0, 1, 2, 3};

// Function declarations
int FUN_000110f0(void *param_1, const char *param_2, ...);
void FUN_000110e0(void *param_1);
void FUN_000110a0(void *param_1);
void FUN_000110b0(void *param_1, int param_2, int param_3, int param_4, int param_5, int param_6);
void FUN_000110c0(void *param_1);
int FUN_000110d0(void *param_1);
void __stack_chk_fail_local(void);

// Function: _init @ 0x11000
int _init(void *ctx)
{
 int iVar1;
 __gmon_start__();
 frame_dummy();
 iVar1 = __do_global_ctors_aux();
 return iVar1;
}

// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 return;
}

// Function: FUN_000110a0 @ 0x110a0
void FUN_000110a0(void *param_1)
{
 (*(void (*)(void))((char *)param_1 + 0x28))();
 return;
}

// Function: FUN_000110b0 @ 0x110b0
void FUN_000110b0(void *param_1, int param_2, int param_3, int param_4, int param_5, int param_6)
{
 (*(void (*)(void))((char *)param_1 + 0xc))();
 return;
}

// Function: FUN_000110c0 @ 0x110c0
void FUN_000110c0(void *param_1)
{
 (*(void (*)(void))((char *)param_1 + 0x10))();
 return;
}

// Function: FUN_000110d0 @ 0x110d0
int FUN_000110d0(void *param_1)
{
 (*(void (*)(void))((char *)param_1 + 0x14))();
 return 0;
}

// Function: FUN_000110e0 @ 0x110e0
void FUN_000110e0(void *param_1)
{
 (*(void (*)(void))((char *)param_1 + 0x18))();
 return;
}

// Function: FUN_000110f0 @ 0x110f0
int FUN_000110f0(void *param_1, const char *param_2, ...)
{
 va_list args;
 int result;
 (*(void (*)(void))((char *)param_1 + 0x1c))();
 va_start(args, param_2);
 // Note: The actual printf-like functionality would go here
 // For now, we just return 0 as the original function appears to not use the arguments
 va_end(args);
 return 0;
}

// Function: FUN_00011100 @ 0x11100
void FUN_00011100(void)
{
 int unaff_EBX;
 (**(void **)((int)unaff_EBX + 0x20))();
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

// Function: _start @ 0x11130
void _start(unsigned int param_1, unsigned int param_2)
{
 char auStack_4 [4];
 FUN_000110b0((int)main, param_2, &stack0x00000004, 0, 0, param_1);
 do {
 } while( true );
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

// Function: deregister_tm_clones @ 0x11170
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x111b0
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x11200
void __do_global_dtors_aux(void)
{
 uint uVar1;
 int unaff_EDI;
 __x86_get_pc_thunk_di();
 if (*(char *)(unaff_EDI + 0x4e13) == '\0') {
 if (*(int *)(unaff_EDI + 0x4de3) != 0) {
 FUN_000110a0(*(unsigned int *)(unaff_EDI + 0x4df7));
 }
 uVar1 = *(uint *)(unaff_EDI + 0x4e17);
 while (uVar1 < ((unaff_EDI + 0x4cdf) - (unaff_EDI + 0x4cdb) >> 2) - 1U) {
 *(uint *)(unaff_EDI + 0x4e17) = uVar1 + 1;
 (**(void **)(unaff_EDI + 0x4cdb + (uVar1 + 1) * 4))();
 uVar1 = *(uint *)(unaff_EDI + 0x4e17);
 }
 deregister_tm_clones();
 *(char *)(unaff_EDI + 0x4e13) = 1;
 }
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

// Function: recursion_factorial @ 0x112b0
int recursion_factorial(int param_1)
{
 int iVar1;
 int iVar2;
 iVar2 = 1;
 if (1 < param_1) {
 do {
 iVar1 = param_1 + -1;
 iVar2 = iVar2 * param_1;
 param_1 = iVar1;
 } while (iVar1 != 1);
 }
 return iVar2;
}

// Function: double_value @ 0x112e0
int double_value(int param_1)
{
 return param_1 * 2;
}

// Function: triple_value @ 0x112f0
int triple_value(int param_1)
{
 return param_1 * 3;
}

// Function: op_add @ 0x11300
int op_add(int param_1,int param_2)
{
 return param_2 + param_1;
}

// Function: op_sub @ 0x11310
int op_sub(int param_1,int param_2)
{
 return param_1 - param_2;
}

// Function: op_mul @ 0x11320
int op_mul(int param_1,int param_2)
{
 return param_2 * param_1;
}

// Function: op_div @ 0x11330
int op_div(int param_1,int param_2)
{
 if (param_2 != 0) {
 param_2 = param_1 / param_2;
 }
 return param_2;
}

// Function: op_mod @ 0x11350
int op_mod(int param_1,int param_2)
{
 if (param_2 != 0) {
 param_2 = param_1 % param_2;
 }
 return param_2;
}

// Function: op_and @ 0x11370
uint op_and(uint param_1,uint param_2)
{
 return param_2 & param_1;
}

// Function: op_or @ 0x11380
uint op_or(uint param_1,uint param_2)
{
 return param_2 | param_1;
}

// Function: op_xor @ 0x11390
uint op_xor(uint param_1,uint param_2)
{
 return param_2 ^ param_1;
}

// Function: op_shl @ 0x113a0
int op_shl(int param_1,byte param_2)
{
 return param_1 << (param_2 & 0x1f);
}

// Function: op_shr @ 0x113b0
int op_shr(int param_1,byte param_2)
{
 return param_1 >> (param_2 & 0x1f);
}

// Function: state_idle @ 0x113c0
bool state_idle(int param_1)
{
 return param_1 == 1;
}

// Function: state_processing @ 0x113d0
char state_processing(int param_1)
{
 if (param_1 != 2) {
 return (param_1 == 99) * '\x02' + '\x01';
 }
 return '\x02';
}

// Function: state_done @ 0x11400
unsigned int state_done(void)
{
 return 2;
}

// Function: state_error @ 0x11410
int state_error(int param_1)
{
 if (param_1 != 0) {
 param_1 = 3;
 }
 return param_1;
}

// Function: sequential_ops @ 0x11430
int sequential_ops(int param_1,int param_2,int param_3)
{
 return (param_2 + param_1) * 2 - param_3;
}

// Function: single_if @ 0x11450
int single_if(int param_1)
{
 int iVar1;
 iVar1 = param_1 * 2;
 if (param_1 < 1) {
 iVar1 = param_1;
 }
 return iVar1;
}

// Function: if_else @ 0x11470
bool if_else(int param_1)
{
 return 0 < param_1;
}

// Function: nested_if_2 @ 0x11480
int nested_if_2(int param_1,int param_2)
{
 int iVar1;
 iVar1 = 0;
 if ((0 < param_1) && (iVar1 = param_1 + param_2, param_2 < 1)) {
 iVar1 = param_1;
 }
 return iVar1;
}

// Function: nested_if_deep @ 0x114a0
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

// Function: if_elseif_chain @ 0x11500
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

// Function: if_elseif_long @ 0x11540
int if_elseif_long(uint param_1)
{
 int iVar1;
 iVar1 = -1;
 if (param_1 < 5) {
 iVar1 = (param_1 + 1) * 100;
 }
 return iVar1;
}

// Function: switch_small @ 0x11560
unsigned int switch_small(uint param_1)
{
 unsigned int uVar1;
 uVar1 = 0xffffffff;
 if (param_1 < 4) {
 uVar1 = *(unsigned int *)(CSWTCH_56 + param_1 * 4);
 }
 return uVar1;
}

// Function: switch_large @ 0x11590
int switch_large(uint param_1)
{
 int iVar1;
 iVar1 = -1;
 if (param_1 < 10) {
 iVar1 = param_1 * 10;
 }
 return iVar1;
}

// Function: switch_default @ 0x115b0
int switch_default(int param_1)
{
 int iVar1;
 iVar1 = 0;
 if (param_1 - 1U < 3) {
 iVar1 = param_1 * 100;
 }
 return iVar1;
}

// Function: switch_fallthrough @ 0x115d0
int switch_fallthrough(int param_1)
{
 if (param_1 == 2) {
 return 6;
 }
 if (param_1 != 3) {
 return (uint)(param_1 == 1) * 2 + -1;
 }
 return 0x15;
}

// Function: loop_for_fixed @ 0x11610
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

// Function: loop_while @ 0x11640
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

// Function: loop_dowhile @ 0x11690
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

// Function: loop_nested @ 0x116d0
int loop_nested(int param_1,int param_2)
{
 int iVar1;
 int iVar2;
 iVar1 = 0;
 if (0 < param_1) {
 iVar2 = 0;
 do {
 if (0 < param_2) {
 iVar1 = param_2 + iVar1;
 }
 iVar2 = iVar2 + 1;
 } while (param_1 != iVar2);
 }
 return iVar1;
}

// Function: loop_break @ 0x11710
int loop_break(int param_1)
{
 int iVar1;
 int in_GS_OFFSET;
 int aiStack_24 [5];
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = 0;
 aiStack_24[1] = 0x14;
 aiStack_24[2] = 0x1e;
 aiStack_24[3] = 0x28;
 aiStack_24[4] = 0x32;
 if (param_1 != 10) {
 do {
 iVar1 = iVar1 + 1;
 if (iVar1 == 5) {
 iVar1 = -1;
 break;
 }
 } while (param_1 != aiStack_24[iVar1]);
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar1;
 }
 __stack_chk_fail_local();
}

// Function: loop_continue @ 0x11790
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

// Function: goto_forward @ 0x117d0
int goto_forward(int param_1)
{
 if (0 < param_1) {
 param_1 = param_1 * param_1;
 }
 return param_1 * 2;
}

// Function: goto_backward @ 0x117f0
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

// Function: ternary_op @ 0x11820
int ternary_op(int param_1,int param_2)
{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: test_control_flow_l1 @ 0x11840
void test_control_flow_l1(void)
{
 int iVar1;
 int in_GS_OFFSET;
 int local_24 [5];
 int local_10;
 unsigned int uStack_c;
 uStack_c = 0x1184b;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 FUN_000110e0(&DAT_00013008);
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
 FUN_000110f0(1,"CF-L1-12 (loop_for_fixed): %d\n",0x2d);
 FUN_000110f0(1,"CF-L1-13 (loop_while): %d\n",5);
 FUN_000110f0(1,"CF-L1-14 (loop_dowhile): %d\n",4);
 FUN_000110f0(1,"CF-L1-15 (loop_nested): %d\n",0xc);
 local_24[1] = 0x14;
 iVar1 = 0;
 local_24[2] = 0x1e;
 local_24[3] = 0x28;
 local_24[4] = 0x32;
 do {
 iVar1 = iVar1 + 1;
 if (iVar1 == 5) {
 iVar1 = -1;
 break;
 }
 } while (local_24[iVar1] != 0x1e);
 FUN_000110f0(1,"CF-L1-16 (loop_break): %d\n",iVar1);
 local_24[1] = 0x14;
 iVar1 = 0;
 local_24[2] = 0x1e;
 local_24[3] = 0x28;
 local_24[4] = 0x32;
 do {
 iVar1 = iVar1 + 1;
 if (iVar1 == 5) {
 iVar1 = -1;
 break;
 }
 } while (local_24[iVar1] != 99);
 FUN_000110f0(1,"CF-L1-16 (loop_break): %d\n",iVar1);
 FUN_000110f0(1,"CF-L1-17 (loop_continue): %d\n",0x19);
 FUN_000110f0(1,"CF-L1-18 (goto_forward): %d\n",0x32);
 FUN_000110f0(1,"CF-L1-18 (goto_forward): %d\n",0xfffffffa);
 FUN_000110f0(1,"CF-L1-19 (goto_backward): %d\n",0x78);
 FUN_000110f0(1,"CF-L1-20 (ternary_op): %d\n",10);
 FUN_000110f0(1,"CF-L1-20 (ternary_op): %d\n",8);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 __stack_chk_fail_local();
}

// Function: loop_multi_exit @ 0x11af0
int loop_multi_exit(int param_1)
{
 int *piVar1;
 int iVar2;
 int iVar3;
 int in_GS_OFFSET;
 int local_40;
 int local_3c [7];
 unsigned int local_20;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned int local_14;
 int local_10;
 iVar3 = 0;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 piVar1 = &local_40;
 local_3c[0] = 2;
 local_3c[1] = 3;
 local_3c[2] = 4;
 local_3c[3] = 5;
 local_3c[4] = 6;
 local_3c[5] = 7;
 local_3c[6] = 8;
 local_20 = 9;
 local_1c = 10;
 local_18 = 0xb;
 local_14 = 0xc;
 if (param_1 != 1) {
 do {
 if (param_1 == piVar1[1]) {
 iVar2 = 1;
 goto LAB_00011b91;
 }
 if (param_1 == piVar1[2]) {
 iVar2 = 2;
 goto LAB_00011b91;
 }
 if (param_1 == piVar1[3]) {
 iVar2 = 3;
 goto LAB_00011b91;
 }
 iVar3 = iVar3 + 1;
 piVar1 = piVar1 + 4;
 if (iVar3 == 3) {
 iVar2 = -1;
 goto LAB_00011ba5;
 }
 } while (*piVar1 != param_1);
 }
 iVar2 = 0;
LAB_00011b91:
 iVar2 = iVar2 + iVar3 * 10;
LAB_00011ba5:
 if (*(int *)(in_GS_OFFSET + 0x14) == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar2;
 }
 __stack_chk_fail_local();
}

// Function: infinite_loop @ 0x11bf0
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

// Function: multi_return @ 0x11c20
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

// Function: conditional_return @ 0x11c50
int conditional_return(int param_1)
{
 int iVar1;
 if (0 < param_1) {
 return param_1 * 2;
 }
 iVar1 = 0;
 if (param_1 != 0) {
 iVar1 = -param_1;
 }
 return iVar1;
}

// Function: duffs_device @ 0x11c70
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
 goto _L186;
 case 2:
 puVar4 = param_2;
 goto LAB_00011cf4;
 case 3:
 goto _L184;
 case 4:
 puVar4 = param_2;
 goto LAB_00011ce0;
 case 5:
 goto _L182;
 case 6:
 goto _L181;
 case 7:
 goto _L179;
 }
 while( true ) {
 param_2 = puVar4 + 1;
 param_1 = puVar2 + 1;
 *puVar2 = *puVar4;
_L179:
 uVar1 = *param_2;
 puVar2 = param_1 + 1;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
_L181:
 uVar1 = *param_2;
 param_1 = puVar2 + 1;
 param_2 = param_2 + 1;
 *puVar2 = uVar1;
_L182:
 *param_1 = *param_2;
 puVar2 = param_1 + 1;
 puVar4 = param_2 + 1;
LAB_00011ce0:
 param_2 = puVar4 + 1;
 param_1 = puVar2 + 1;
 *puVar2 = *puVar4;
_L184:
 *param_1 = *param_2;
 puVar2 = param_1 + 1;
 puVar4 = param_2 + 1;
LAB_00011cf4:
 param_2 = puVar4 + 1;
 param_1 = puVar2 + 1;
 *puVar2 = *puVar4;
_L186:
 *param_1 = *param_2;
 iVar3 = iVar3 + -1;
 if (iVar3 == 0) break;
 puVar2 = param_1 + 1;
 puVar4 = param_2 + 1;
 }
 }
 return param_3;
}

// Function: loop_complex_cond @ 0x11d40
int loop_complex_cond(int param_1)
{
 int iVar1;
 int iVar2;
 if (param_1 < 1) {
 return param_1;
 }
 iVar1 = 0;
 iVar2 = param_1;
 do {
 iVar2 = iVar2 + -1;
 iVar1 = iVar1 + 2;
 if (iVar2 <= iVar1) break;
 } while (param_1 - iVar2 < 10);
 return (param_1 - iVar2) + iVar1 + iVar2;
}

// Function: loop_modify_var @ 0x11d80
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

// Function: loop_external_state @ 0x11db0
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

// Function: tail_recursion @ 0x11dd0
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

// Function: indirect_recursion_a @ 0x11e00
uint indirect_recursion_a(uint param_1,int param_2)
{
 if (0 < param_2) {
 do {
 param_2 = param_2 + -2;
 if ((param_1 & 1) == 0) {
 if (param_2 == -1) {
 return (int)param_1 / 2;
 }
 param_1 = (int)param_1 / 2 + 1;
 }
 else {
 if (param_2 == -1) {
 return param_1 * 3 + 1;
 }
 param_1 = param_1 * 3 + 2;
 }
 } while (param_2 != 0);
 }
 return param_1;
}

// Function: call_func_ptr @ 0x11e60
void call_func_ptr(void *param_1)
{
 (*param_1)();
 return;
}

// Function: call_func_ptr_array @ 0x11e80
unsigned int call_func_ptr_array(uint param_1)
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
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 uVar1 = (*local_1c[param_1])();
 return uVar1;
 }
 }
 else if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return 0xffffffff;
 }
 __stack_chk_fail_local();
}

// Function: call_virtual_func @ 0x11f10
int call_virtual_func(unsigned int param_1,int param_2)
{
 return param_2 * 2;
}

// Function: process_with_callback @ 0x11f20
int process_with_callback(int param_1,int param_2,void *param_3)
{
 int iVar1;
 int iVar2;
 int iVar3;
 if (0 < param_2) {
 iVar3 = 0;
 iVar2 = 0;
 do {
 iVar1 = iVar3 * 4;
 iVar3 = iVar3 + 1;
 iVar1 = (*param_3)(*(unsigned int *)(param_1 + iVar1));
 iVar2 = iVar2 + iVar1;
 } while (param_2 != iVar3);
 return iVar2;
 }
 return 0;
}

// Function: test_control_flow_l2 @ 0x11f70
void test_control_flow_l2(void)
{
 int iVar1;
 unsigned int uVar2;
 int iVar3;
 uint uVar4;
 int *piVar5;
 int iVar6;
 int in_GS_OFFSET;
 int local_74;
 int local_70 [4];
 int local_60;
 unsigned int local_5c;
 unsigned int local_58;
 unsigned int local_54;
 unsigned int local_50;
 unsigned int local_4c;
 unsigned int local_48;
 unsigned int local_44;
 unsigned int local_40 [8];
 int local_20;
 unsigned int uStack_14;
 uStack_14 = 0x11f7f;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 FUN_000110e0(&DAT_00013110);
 uVar2 = loop_multi_exit(7);
 FUN_000110f0(1,"CF-L2-01 (loop_multi_exit): %d\n",uVar2);
 iVar3 = 0;
 do {
 iVar3 = iVar3 + 1;
 } while (iVar3 != 0x3e9);
 FUN_000110f0(1,"CF-L2-02 (infinite_loop): %d\n",0x3e9);
 FUN_000110f0(1,"CF-L2-03 (multi_return): %d\n",0xffffffff);
 FUN_000110f0(1,"CF-L2-03 (multi_return): %d\n",0xfffffffe);
 FUN_000110f0(1,"CF-L2-03 (multi_return): %d\n",4);
 FUN_000110f0(1,"CF-L2-04 (conditional_return): %d\n",10);
 FUN_000110f0(1,"CF-L2-04 (conditional_return): %d\n",5);
 local_60 = 1;
 uVar4 = 0;
 local_5c = 2;
 local_58 = 3;
 local_54 = 4;
 local_50 = 5;
 local_4c = 6;
 local_48 = 7;
 local_44 = 8;
 do {
 *(unsigned int *)((int)local_40 + uVar4) = 0;
 uVar4 = uVar4 + 4;
 } while (uVar4 < 0x20);
 uVar2 = duffs_device(local_40,&local_60,8);
 FUN_000110f0(1,"CF-L2-05 (duffs_device): %d\n",uVar2);
 FUN_000110f0(1,"CF-L2-06 (loop_complex_cond): %d\n",0x12);
 iVar6 = 0;
 iVar3 = 0;
 while (iVar1 = iVar3 + 1, iVar1 < 10) {
 iVar6 = iVar6 + iVar1;
 iVar3 = iVar3 + 3;
 if (iVar1 < 6) {
 iVar3 = iVar1;
 }
 }
 FUN_000110f0(1,"CF-L2-07 (loop_modify_var): %d\n",iVar6);
 iVar3 = 0;
 do {
 iVar3 = iVar3 + 1;
 } while (iVar3 != 0x65);
 FUN_000110f0(1,"CF-L2-08 (loop_external_state): %d\n",0x65);
 FUN_000110f0(1,"CF-L2-09 (recursion_factorial): %d\n",0x78);
 FUN_000110f0(1,"CF-L2-10 (tail_recursion): %d\n",0x78);
 FUN_000110f0(1,"CF-L2-11 (indirect_recursion): %d\n",3);
 FUN_000110f0(1,"CF-L2-12 (call_func_ptr): %d\n",10);
 FUN_000110f0(1,"CF-L2-13 (call_func_ptr_array): %d\n",10);
 FUN_000110f0(1,"CF-L2-13 (call_func_ptr_array): %d\n",0x78);
 local_74 = 1;
 piVar5 = &local_74;
 iVar3 = 0;
 local_70[0] = 2;
 iVar6 = 1;
 local_70[1] = 3;
 local_70[2] = 4;
 local_70[3] = 5;
 while( true ) {
 piVar5 = piVar5 + 1;
 iVar3 = iVar3 + iVar6 * 2;
 if (piVar5 == &local_60) break;
 iVar6 = *piVar5;
 }
 FUN_000110f0(1,"CF-L2-15 (process_with_callback): %d\n",iVar3);
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return;
}

// Function: non_local_jump @ 0x12220
int non_local_jump(int param_1)
{
 int iVar1;
 unsigned int extraout_EDX;
 unsigned int uVar2;
 char ***pppuVar3;
 unsigned long long uVar4;
 char **ppuStack_2c;
 unsigned int uStack_28;
 int iStack_24;
 int local_20;
 char auStack_1c [12];
 char **local_10;
 unsigned int uStack_8;
 uStack_8 = 0x1222a;
 local_10 = &_GLOBAL_OFFSET_TABLE_;
 ppuStack_2c = (char **)jump_buffer;
 uVar4 = FUN_000110c0(0);
 uVar2 = (unsigned int)((ulonglong)uVar4 >> 0x20);
 iVar1 = (int)uVar4;
 pppuVar3 = (char ***)auStack_1c;
 if (iVar1 != 0) {
 return -1;
 }
 if (-1 < param_1) {
 if (param_1 < 0x65) {
 return param_1 * 2;
 }
 uStack_28 = 2;
 ppuStack_2c = local_10 + 0x1e;
 pppuVar3 = &ppuStack_2c;
 iStack_24 = iVar1;
 local_20 = iVar1;
 FUN_00011100();
 uVar2 = extraout_EDX;
 }
 *(unsigned int *)((int)pppuVar3 + -4) = uVar2;
 *(unsigned int *)((int)pppuVar3 + -8) = uVar2;
 *(unsigned int *)((int)pppuVar3 + -0xc) = 1;
 *(int *)((int)pppuVar3 + -0x10) = *(int *)((int)pppuVar3 + 0xc) + 0x78;
 *(unsigned int *)((int)pppuVar3 + -0x14) = 0x1229f;
 FUN_00011100();
 iVar1 = *(int *)((int)pppuVar3 + -0xc);
 if (-1 < iVar1) {
 if (100 < iVar1) {
 return -2;
 }
 return iVar1 * 2;
 }
 return -1;
}

// Function: cpp_exception @ 0x122a0
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

// Function: large_jump_table @ 0x122d0
unsigned int large_jump_table(uint param_1)
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
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 uVar1 = (*local_38[param_1])();
 return uVar1;
 }
 }
 else if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return 0xffffffff;
 }
 __stack_chk_fail_local();
}

// Function: conditional_func_ptr @ 0x123b0
void conditional_func_ptr(int param_1)
{
 void *UNRECOVERED_JUMPTABLE;
 UNRECOVERED_JUMPTABLE = double_value;
 if (param_1 != 0) {
 UNRECOVERED_JUMPTABLE = triple_value;
 if (param_1 != 1) {
 UNRECOVERED_JUMPTABLE = recursion_factorial;
 }
 }
 (*UNRECOVERED_JUMPTABLE)();
 return;
}

// Function: state_machine @ 0x123f0
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

// Function: fsm_func_table @ 0x12460
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
 if (param_2 < 4) {
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 uVar1 = (*local_20[param_2])();
 return uVar1;
 }
 }
 else if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return 3;
 }
 __stack_chk_fail_local();
}

// Function: computed_goto @ 0x124f0
unsigned int computed_goto(unsigned int param_1,uint param_2)
{
 unsigned int uVar1;
 int in_GS_OFFSET;
 void *local_20 [4];
 int local_10;
 unsigned int uStack_4;
 uStack_4 = 0x124f9;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_20[0] = (void *)&DAT_00012588;
 local_20[1] = (void *)&DAT_00012578;
 local_20[2] = (void *)&DAT_00012568;
 local_20[3] = (void *)&DAT_00012548;
 if (param_2 < 4) {
 uVar1 = (*local_20[param_2])();
 return uVar1;
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return 0xffffffff;
 }
 __stack_chk_fail_local();
}

// Function: obfuscated_cf @ 0x125a0
int obfuscated_cf(int param_1)
{
 return param_1 * 2;
}

// Function: opaque_predicate @ 0x125b0
int opaque_predicate(int param_1)
{
 return param_1 * 2;
}

// Function: overlapped_code @ 0x125c0
int overlapped_code(uint param_1)
{
 if ((param_1 & 1) != 0) {
 return param_1 * 3 + 1;
 }
 return (int)param_1 / 2;
}

// Function: test_control_flow_l3 @ 0x125f0
void test_control_flow_l3(void)
{
 unsigned int uVar1;
 int in_GS_OFFSET;
 unsigned int local_20;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned int local_14;
 int local_10;
 unsigned int uStack_c;
 uStack_c = 0x125fb;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 FUN_000110e0(&DAT_00013294);
 uVar1 = non_local_jump(5);
 FUN_000110f0(1,"CF-L3-01 (non_local_jump): %d\n",uVar1);
 uVar1 = non_local_jump(0xfffffffb);
 FUN_000110f0(1,"CF-L3-01 (non_local_jump): %d\n",uVar1);
 FUN_000110f0(1,"CF-L3-02 (cpp_exception): %d\n",10);
 FUN_000110f0(1,"CF-L3-02 (cpp_exception): %d\n",0xffffffff);
 uVar1 = op_add(10,5);
 FUN_000110f0(1,"CF-L3-03 (large_jump_table): %d\n",uVar1);
 FUN_000110f0(1,"CF-L3-04 (conditional_func_ptr): %d\n",10);
 FUN_000110f0(1,"CF-L3-05 (state_machine): %d\n",1);
 FUN_000110f0(1,"CF-L3-06 (fsm_func_table): %d\n",2);
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

// Function: __x86.get_pc_thunk.ax @ 0x1275c
unsigned int __x86_get_pc_thunk_ax(void)
{
 unsigned int unaff_retaddr;
 return unaff_retaddr;
}

// Function: __x86.get_pc_thunk.cx @ 0x12760
void __x86_get_pc_thunk_cx(void)
{
 return;
}

// Function: __stack_chk_fail_local @ 0x12770
void __stack_chk_fail_local(void)
{
 (void)FUN_000110d0((void *)0);
 return;
}

// Function: __do_global_ctors_aux @ 0x12790
void __do_global_ctors_aux(void)
{
 return;
}

// Function: _fini @ 0x127dc
void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

