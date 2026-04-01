// Decompiled by BinaryAI
// SHA256: e45caa7b7eb44d583edb5a741e5be252d61cd261cb8adb8e2944a098c7d657ce

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <setjmp.h>

// Type definitions
typedef unsigned char byte;
typedef unsigned char uchar;
typedef long long longlong;
typedef unsigned int uint;

// Forward declarations
void __do_global_ctors_aux(void);
void __do_global_dtors_aux(void);
void __x86_get_pc_thunk_di(void);
int main(void);

// External function declarations
extern void __gmon_start__(void);
void frame_dummy(void);
extern int __libc_start_main(int (*main)(void), void *arg, void (*exit)(int), void (*rtld_fini)(void), void *stack_end);
extern int printf(const char *format, ...);
extern int puts(const char *s);
extern void longjmp(jmp_buf env, int val);
extern int _setjmp(jmp_buf env);
extern jmp_buf jump_buffer;

// Data declarations - arrays for indexed access
extern int DAT_00012038[];
extern int DAT_0001204c[];
// Note: DAT_00012640 is declared as char[] (string) below

// Data declarations - single values (used in pointer arithmetic)
extern int DAT_00012050;
extern int DAT_00012054;
extern int DAT_00012058;
extern int DAT_0001205c;
extern int DAT_00012060;
extern int DAT_00012064;
extern int DAT_00012068;
extern int DAT_0001206c;
extern int DAT_00012070;
extern int DAT_00012074;
extern int DAT_00012078;
extern int DAT_0001207c;
extern int DAT_00012080;
extern int DAT_00012084;
extern int DAT_00012088;
extern int DAT_0001208c;
extern int DAT_00012090;
extern int DAT_00012094;
extern int DAT_00012098;
extern int DAT_0001209c;
extern int DAT_000120a0;
extern int DAT_000120a4;
extern int DAT_000120a8;
extern int DAT_000120ac;
extern int DAT_000120b0;
extern int DAT_000120b4;
extern int DAT_000120b8;
extern int DAT_000120bc;
extern int DAT_000120c0;
extern int DAT_000120c4;
extern int DAT_000120c8;
extern int DAT_000120cc;
extern int DAT_000120d0;
extern int DAT_000120d4;
extern int DAT_000120d8;
extern int DAT_000120dc;
extern int DAT_000120e0;
extern int DAT_000120e4;
extern int DAT_000120e8;
extern int DAT_000120ec;
extern int DAT_000120f0;
extern int DAT_000120f4;
extern int DAT_000120f8;
extern int DAT_000120fc;
extern int DAT_00012100;
extern int DAT_00012104;
extern int DAT_00012108;
extern int DAT_0001210c;
extern int DAT_00012110;
extern int DAT_00012114;
extern int DAT_00012118;
extern int DAT_0001211c;
extern int DAT_00012120;
extern int DAT_00012124;
extern int DAT_00012128;
extern int DAT_0001212c;
extern int DAT_00012130;
extern int DAT_00012134;
extern int DAT_00012138;
extern int DAT_0001213c;
extern int DAT_00012140;
extern int DAT_00012144;
extern int DAT_00012148;
extern int DAT_0001214c;
extern int DAT_00012150;
extern int DAT_00012154;
extern int DAT_00012158;
extern int DAT_0001215c;
extern int DAT_00012160;
extern int DAT_00012164;
extern int DAT_00012168;
extern int DAT_0001216c;
extern int DAT_00012170;
extern int DAT_00012174;
extern int DAT_00012178;
extern int DAT_0001217c;
extern int DAT_00012180;
extern int DAT_00012184;
extern int DAT_00012188;
extern int DAT_0001218c;
extern int DAT_00012190;
extern int DAT_00012194;
extern int DAT_00012198;
extern int DAT_0001219c;
extern int DAT_000121a0;
extern int DAT_000121a4;
extern int DAT_000121a8;
extern int DAT_000121ac;
extern int DAT_000121b0;
extern int DAT_000121b4;
extern int DAT_000121b8;
extern int DAT_000121bc;
extern int DAT_000121c0;
extern int DAT_000121c4;
extern int DAT_000121c8;
extern int DAT_000121cc;
extern int DAT_000121d0;
extern int DAT_000121d4;
extern int DAT_000121d8;
extern int DAT_000121dc;
extern int DAT_000121e0;
extern int DAT_000121e4;
extern int DAT_000121e8;
extern int DAT_000121ec;
extern int DAT_000121f0;
extern int DAT_000121f4;
extern int DAT_000121f8;
extern int DAT_000121fc;
extern int DAT_00012200;
extern int DAT_00012204;
extern int DAT_00012208;
extern int DAT_0001220c;
extern int DAT_00012210;
extern int DAT_00012214;
extern int DAT_00012218;
extern int DAT_0001221c;
extern int DAT_00012220;
extern int DAT_00012224;
extern int DAT_00012228;
extern int DAT_0001222c;
extern int DAT_00012230;
extern int DAT_00012234;
extern int DAT_00012238;
extern int DAT_0001223c;
extern int DAT_00012240;
extern int DAT_00012244;
extern int DAT_00012248;
extern int DAT_0001224c;
extern int DAT_00012250;
extern int DAT_00012254;
extern int DAT_00012258;
extern int DAT_0001225c;
extern int DAT_00012260;
extern int DAT_00012264;
extern int DAT_00012268;
extern int DAT_0001226c;
extern int DAT_00012270;
extern int DAT_00012274;
extern int DAT_00012278;
extern int DAT_0001227c;
extern int DAT_00012280;
extern int DAT_00012284;
extern int DAT_00012288;
extern int DAT_0001228c;
extern int DAT_00012290;
extern int DAT_00012294;
extern int DAT_00012298;
extern int DAT_0001229c;
extern int DAT_000122a0;
extern int DAT_000122a4;
extern int DAT_000122a8;
extern int DAT_000122ac;
extern int DAT_000122b0;
extern int DAT_000122b4;
extern int DAT_000122b8;
extern int DAT_000122bc;
extern int DAT_000122c0;
extern int DAT_000122c4;
extern int DAT_000122c8;
extern int DAT_000122cc;
extern int DAT_000122d0;
extern int DAT_000122d4;
extern int DAT_000122d8;
extern int DAT_000122dc;
extern int DAT_000122e0;
extern int DAT_000122e4;
extern int DAT_000122e8;
extern int DAT_000122ec;
extern int DAT_000122f0;
extern int DAT_000122f4;
extern int DAT_000122f8;
extern int DAT_000122fc;
extern int DAT_00012300;
extern int DAT_00012304;
extern int DAT_00012308;
extern int DAT_0001230c;
extern int DAT_00012310;
extern int DAT_00012314;
extern int DAT_00012318;
extern int DAT_0001231c;
extern int DAT_00012320;
extern int DAT_00012324;
extern int DAT_00012328;
extern int DAT_0001232c;
extern int DAT_00012330;
extern int DAT_00012334;
extern int DAT_00012338;
extern int DAT_0001233c;
extern int DAT_00012340;
extern int DAT_00012344;
extern int DAT_00012348;
extern int DAT_0001234c;
extern int DAT_00012350;
extern int DAT_00012354;
extern int DAT_00012358;
extern int DAT_0001235c;
extern int DAT_00012360;
extern int DAT_00012364;
extern int DAT_00012368;
extern int DAT_0001236c;
extern int DAT_00012370;
extern int DAT_00012374;
extern int DAT_00012378;
extern int DAT_0001237c;
extern int DAT_00012380;
extern int DAT_00012384;
extern int DAT_00012388;
extern int DAT_0001238c;
extern int DAT_00012390;
extern int DAT_00012394;
extern int DAT_00012398;
extern int DAT_0001239c;
extern int DAT_000123a0;
extern int DAT_000123a4;
extern int DAT_000123a8;
extern int DAT_000123ac;
extern int DAT_000123b0;
extern int DAT_000123b4;
extern int DAT_000123b8;
extern int DAT_000123bc;
extern int DAT_000123c0;
extern int DAT_000123c4;
extern int DAT_000123c8;
extern int DAT_000123cc;
extern int DAT_000123d0;
extern int DAT_000123d4;
extern int DAT_000123d8;
extern int DAT_000123dc;
extern int DAT_000123e0;
extern int DAT_000123e4;
extern int DAT_000123e8;
extern int DAT_000123ec;
extern int DAT_000123f0;
extern int DAT_000123f4;
extern int DAT_000123f8;
extern int DAT_000123fc;
extern int DAT_00012400;
extern int DAT_00012404;
extern int DAT_00012408;
extern int DAT_0001240c;
extern int DAT_00012410;
extern int DAT_00012414;
extern int DAT_00012418;
extern int DAT_0001241c;
extern int DAT_00012420;
extern int DAT_00012424;
extern int DAT_00012428;
extern int DAT_0001242c;
extern int DAT_00012430;
extern int DAT_00012434;
extern int DAT_00012438;
extern int DAT_0001243c;
extern int DAT_00012440;
extern int DAT_00012444;
extern int DAT_00012448;
extern int DAT_0001244c;
extern int DAT_00012450;
extern int DAT_00012454;
extern int DAT_00012458;
extern int DAT_0001245c;
extern int DAT_00012460;
extern int DAT_00012464;
extern int DAT_00012468;
extern int DAT_0001246c;
extern int DAT_00012470;
extern int DAT_00012474;
extern int DAT_00012478;
extern int DAT_0001247c;
extern int DAT_00012480;
extern int DAT_00012484;
extern int DAT_00012488;
extern int DAT_0001248c;
extern int DAT_00012490;
extern int DAT_00012494;
extern int DAT_00012498;
extern int DAT_0001249c;
extern int DAT_000124a0;
extern int DAT_000124a4;
extern int DAT_000124a8;
extern int DAT_000124ac;
extern int DAT_000124b0;
extern int DAT_000124b4;
extern int DAT_000124b8;
extern int DAT_000124bc;
extern int DAT_000124c0;
extern int DAT_000124c4;
extern int DAT_000124c8;
extern int DAT_000124cc;
extern int DAT_000124d0;
extern int DAT_000124d4;
extern int DAT_000124d8;
extern int DAT_000124dc;
extern int DAT_000124e0;
extern int DAT_000124e4;
extern int DAT_000124e8;
extern int DAT_000124ec;
extern int DAT_000124f0;
extern int DAT_000124f4;
extern int DAT_000124f8;
extern int DAT_000124fc;
extern int DAT_00012500;
extern int DAT_00012504;
extern int DAT_00012508;
extern int DAT_0001250c;
extern int DAT_00012510;
extern int DAT_00012514;
extern int DAT_00012518;
extern int DAT_0001251c;
extern int DAT_00012520;
extern int DAT_00012524;
extern int DAT_00012528;
extern int DAT_0001252c;
extern int DAT_00012530;
extern int DAT_00012534;
extern int DAT_00012538;
extern int DAT_0001253c;
extern int DAT_00012540;
extern int DAT_00012544;
extern int DAT_00012548;
extern int DAT_0001254c;
extern int DAT_00012550;
extern int DAT_00012554;
extern int DAT_00012558;
extern int DAT_0001255c;
extern int DAT_00012560;
extern int DAT_00012564;
extern int DAT_00012568;
extern int DAT_0001256c;
extern int DAT_00012570;
extern int DAT_00012574;
extern int DAT_00012578;
extern int DAT_0001257c;
extern int DAT_00012580;
extern int DAT_00012584;
extern int DAT_00012588;
extern int DAT_0001258c;
extern int DAT_00012590;
extern int DAT_00012594;
extern int DAT_00012598;
extern int DAT_0001259c;
extern int DAT_000125a0;
extern int DAT_000125a4;
extern int DAT_000125a8;
extern int DAT_000125ac;
extern int DAT_000125b0;
extern int DAT_000125b4;
extern int DAT_000125b8;
extern int DAT_000125bc;
extern int DAT_000125c0;
extern int DAT_000125c4;
extern int DAT_000125c8;
extern int DAT_000125cc;

// String data
extern char DAT_000125d1[];
extern char DAT_000125f5[];
extern char DAT_00012619[];
extern char DAT_00012640[];

// Function pointers - arrays for indexed access
// These point to function tables in the .data section
typedef int (*double_value_fn)(int);
typedef int (*op_add_fn)(int, int);
typedef unsigned int (*state_fn)(int);

// Forward declarations for functions used in function pointer tables
int double_value(int param_1);
int triple_value(int param_1);
int call_virtual_func(unsigned int param_1, int param_2);
int op_add(int param_1, int param_2);
int op_sub(int param_1, int param_2);
int op_mul(int param_1, int param_2);
int op_div(int param_1, int param_2);
int op_mod(int param_1, int param_2);
unsigned int op_and(uint param_1, uint param_2);
unsigned int op_or(uint param_1, uint param_2);
unsigned int op_xor(uint param_1, uint param_2);
int op_shl(int param_1, byte param_2);
int op_shr(int param_1, byte param_2);
bool state_idle(int param_1);
char state_processing(int param_1);
unsigned int state_done(void);
char state_error(int param_1);

// Define the function pointer tables
double_value_fn PTR_double_value_00014ec8[] = { double_value, triple_value, call_virtual_func };
op_add_fn PTR_op_add_00014ed4[] = { op_add, op_sub, op_mul, op_div, op_mod, op_and, op_or, op_xor, op_shl, op_shr };
state_fn PTR_state_idle_00014efc[] = { state_idle, state_processing, state_done, state_error };

// Jump buffer for non-local jumps
extern jmp_buf jump_buffer;

// Computed goto function implementation - returns the value
unsigned int computed_goto(unsigned int label, unsigned int value)
{
    // Label parameter is unused in this implementation
    // Just return the value as a simple passthrough
    return value;
}

// Undeclared variables from decompilation
int unaff_EDI;
int unaff_retaddr;



// Function: frame_dummy @ 0x11020
void frame_dummy(void)
{
 // Minimal implementation - nothing to do in this binary
 return;
}

// Function: _init @ 0x11000
void _init(void *ctx)
{
 __gmon_start__();
 frame_dummy();
 __do_global_ctors_aux();
 return;
}

// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x11040
// Declaration only - implementation provided by libc

// Function: <EXTERNAL>::printf @ 0x11050
// Implemented in libc - declaration only above

// Function: <EXTERNAL>::longjmp @ 0x11060
// Implemented in libc - declaration only

// Function: <EXTERNAL>::_setjmp @ 0x11070
// Implemented in libc - declaration only above

// Function: <EXTERNAL>::puts @ 0x11080
// Implemented in libc - declaration only above

// Function: FUN_00011090 @ 0x11090
void FUN_00011090(int unaff_EBX)
{
 return;
}

// Function: _start @ 0x110a0
void _start(void)
{
 // Standard _start - no parameters in raw binary
 // Call libc startup (only 4 args needed)
 __libc_start_main(main, 0, 0, 0);
 while(1) { }
}

// Function: __i686.get_pc_thunk.bx @ 0x110cc
void __i686_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.bx @ 0x110d0
void __x86_get_pc_thunk_bx(void)
{
 return;
}

// Function: deregister_tm_clones @ 0x110e0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x11120
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x11170
void __do_global_dtors_aux(void)
{
 uint uVar1;
 int unaff_EDI;
 __x86_get_pc_thunk_di();
 if (*(char *)(unaff_EDI + 0x3eab) == '\0') {
 if (*(int *)(unaff_EDI + 0x3e73) != 0) {
 FUN_00011090(*(unsigned int *)(unaff_EDI + 0x3ea7));
 }
 uVar1 = *(uint *)(unaff_EDI + 0x3eaf);
 while (uVar1 < ((unaff_EDI + 0x3d47) - (unaff_EDI + 0x3d43) >> 2) - 1U) {
 *(uint *)(unaff_EDI + 0x3eaf) = uVar1 + 1;
 (**(void **)(unaff_EDI + 0x3d43 + (uVar1 + 1) * 4))();
 uVar1 = *(uint *)(unaff_EDI + 0x3eaf);
 }
 deregister_tm_clones();
 *(char *)(unaff_EDI + 0x3eab) = 1;
 }
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x11209
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x1120d
void __x86_get_pc_thunk_di(void)
{
 return;
}

// Function: sequential_ops @ 0x11214
int sequential_ops(int param_1,int param_2,int param_3)
{
 return (param_2 + param_1) * 2 - param_3;
}

// Function: single_if @ 0x11223
int single_if(int param_1)
{
 return param_1 << (0 < param_1);
}

// Function: if_else @ 0x1122f
bool if_else(int param_1)
{
 return 0 < param_1;
}

// Function: nested_if_2 @ 0x1123a
int nested_if_2(int param_1,int param_2)
{
 if (param_2 < 0) {
 param_2 = 0;
 }
 param_2 = param_2 + param_1;
 if (param_1 < 1) {
 param_2 = 0;
 }
 return param_2;
}

// Function: nested_if_deep @ 0x11251
byte nested_if_deep(int param_1,int param_2,int param_3,int param_4,int param_5)
{
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
 return (0 < param_5) | 4;
 }
 return 3;
}

// Function: if_elseif_chain @ 0x1128e
int if_elseif_chain(uint param_1)
{
 int iVar1;
 iVar1 = param_1 * 10 + 10;
 if (2 < param_1) {
 iVar1 = -1;
 }
 return iVar1;
}

// Function: if_elseif_long @ 0x112a3
int if_elseif_long(uint param_1)
{
 int iVar1;
 iVar1 = -1;
 if (param_1 < 5) {
 iVar1 = param_1 * 100 + 100;
 }
 return iVar1;
}

// Function: FUN_000112bc @ 0x112bc
unsigned int FUN_000112bc(unsigned int param_1,uint param_2)
{
 int unaff_retaddr;
 if (param_2 < 4) {
 return *(unsigned int *)(unaff_retaddr + 0x13a4 + param_2 * 4);
 }
 return 0xffffffff;
}

// Function: switch_large @ 0x112d8
int switch_large(uint param_1)
{
 int iVar1;
 iVar1 = param_1 * 10;
 if (9 < param_1) {
 iVar1 = -1;
 }
 return iVar1;
}

// Function: switch_default @ 0x112ec
int switch_default(int param_1)
{
 int iVar1;
 iVar1 = 0;
 if (param_1 - 1U < 3) {
 iVar1 = (param_1 - 1U) * 100 + 100;
 }
 return iVar1;
}

// Function: switch_fallthrough @ 0x11300
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

// Function: loop_for_fixed @ 0x11324
int loop_for_fixed(int param_1)
{
 longlong lVar1;
 if (0 < param_1) {
 lVar1 = (ulonglong)(param_1 - 1) * (ulonglong)(param_1 - 2);
 return ((int)((ulonglong)lVar1 >> 0x20) << 0x1f | (uint)lVar1 >> 1) + param_1 + -1;
 }
 return 0;
}

// Function: loop_while @ 0x11340
int loop_while(int param_1)
{
 int iVar1;
 uint uVar2;
 if (param_1 == 0) {
 iVar1 = 1;
 }
 else {
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 uVar2 = param_1 + 9;
 param_1 = param_1 / 10;
 } while (0x12 < uVar2);
 }
 return iVar1;
}

// Function: loop_dowhile @ 0x11374
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

// Function: loop_nested @ 0x1139f
int loop_nested(int param_1,int param_2)
{
 if (param_2 < 1) {
 param_2 = 0;
 }
 param_2 = param_2 * param_1;
 if (param_1 < 1) {
 param_2 = 0;
 }
 return param_2;
}

// Function: loop_break @ 0x113b7
int loop_break(int param_1)
{
 int iVar1;
 int *piVar2;
 iVar1 = 0;
 piVar2 = &DAT_00012038;
 do {
 if (*piVar2 == param_1) {
 return iVar1;
 }
 iVar1 = iVar1 + 1;
 piVar2 = piVar2 + 1;
 } while (iVar1 != 5);
 return -1;
}

// Function: loop_continue @ 0x113e4
int loop_continue(uint param_1)
{
 int iVar1;
 uint uVar2;
 bool bVar3;
 if ((int)param_1 < 1) {
 iVar1 = 0;
 }
 else {
 iVar1 = 0;
 uVar2 = 1;
 do {
 iVar1 = iVar1 + (-(uVar2 & 1) & uVar2);
 bVar3 = uVar2 != param_1;
 uVar2 = uVar2 + 1;
 } while (bVar3);
 }
 return iVar1;
}

// Function: goto_forward @ 0x1140f
int goto_forward(int param_1)
{
 int iVar1;
 iVar1 = 1;
 if (0 < param_1) {
 iVar1 = param_1;
 }
 return iVar1 * param_1 * 2;
}

// Function: goto_backward @ 0x11421
int goto_backward(int param_1)
{
 int iVar1;
 int iVar2;
 bool bVar3;
 if (param_1 < 1) {
 iVar1 = 1;
 }
 else {
 iVar1 = 1;
 iVar2 = iVar1;
 do {
 iVar1 = iVar1 * iVar2;
 bVar3 = iVar2 != param_1;
 iVar2 = iVar2 + 1;
 } while (bVar3);
 }
 return iVar1;
}

// Function: ternary_op @ 0x11445
int ternary_op(int param_1,int param_2)
{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: test_control_flow_l1 @ 0x11453
void test_control_flow_l1(void)
{
 puts(&DAT_000125d1);
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

// Function: loop_multi_exit @ 0x11695
int loop_multi_exit(int param_1)
{
 int iVar1;
 unsigned int *puVar2;
 int iVar3;
 int iVar4;
 iVar1 = 0;
 puVar2 = &DAT_0001204c;
 iVar4 = 0;
 do {
 iVar3 = 0;
 do {
 if (puVar2[iVar3] == param_1) {
 return iVar3 - iVar1;
 }
 iVar3 = iVar3 + 1;
 } while (iVar3 != 4);
 iVar4 = iVar4 + 1;
 iVar1 = iVar1 + -10;
 puVar2 = puVar2 + 4;
 } while (iVar4 != 3);
 return -1;
}

// Function: infinite_loop @ 0x116d8
int infinite_loop(int *param_1)
{
 int iVar1;
 iVar1 = 0;
 do {
 if (*param_1 == 1) {
 return iVar1;
 }
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x3e9);
 *param_1 = 1;
 return 0x3e9;
}

// Function: multi_return @ 0x116f9
int multi_return(uint param_1)
{
 int iVar1;
 if (-1 < (int)param_1) {
 iVar1 = -2;
 if (param_1 < 0x33) {
 iVar1 = param_1 + 1;
 if ((param_1 & 1) == 0) {
 iVar1 = param_1 * 2;
 }
 }
 return iVar1;
 }
 return -1;
}

// Function: conditional_return @ 0x1171c
int conditional_return(int param_1)
{
 int iVar1;
 iVar1 = -param_1;
 if (0 < param_1) {
 iVar1 = param_1 * 2;
 }
 return iVar1;
}

// Function: duffs_device @ 0x1172d
uint duffs_device(unsigned int *param_1,unsigned int *param_2,uint param_3)
{
 unsigned int uVar1;
 uint uVar2;
 uint uVar3;
 uint uVar4;
 uVar4 = 0xffffffff;
 if (0 < (int)param_3) {
 uVar2 = param_3 + 7 >> 3;
 uVar3 = uVar2;
 switch(param_3 & 7) {
 case 1:
 goto switchD_00011761_caseD_1;
 case 2:
 goto switchD_00011761_caseD_2;
 case 3:
 goto switchD_00011761_caseD_3;
 case 4:
 goto switchD_00011761_caseD_4;
 case 5:
 goto switchD_00011761_caseD_5;
 case 6:
 goto switchD_00011761_caseD_6;
 case 7:
 goto switchD_00011761_caseD_7;
 }
 do {
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
switchD_00011761_caseD_7:
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
switchD_00011761_caseD_6:
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
switchD_00011761_caseD_5:
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
switchD_00011761_caseD_4:
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
switchD_00011761_caseD_3:
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
switchD_00011761_caseD_2:
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
 uVar3 = uVar2;
switchD_00011761_caseD_1:
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
 uVar2 = uVar3 - 1;
 uVar4 = param_3;
 } while (1 < (int)uVar3);
 }
 return uVar4;
}

// Function: loop_complex_cond @ 0x117c3
int loop_complex_cond(uint param_1)
{
 int iVar1;
 uint uVar2;
 uint uVar3;
 uint uVar4;
 bool bVar5;
 if ((int)param_1 < 1) {
 iVar1 = 0;
 uVar3 = 0;
 }
 else {
 iVar1 = 0;
 uVar2 = param_1;
 uVar4 = 0;
 do {
 iVar1 = iVar1 + 2;
 param_1 = uVar2 - 1;
 uVar3 = uVar4 + 1;
 if ((uVar2 < 2) || ((int)param_1 <= iVar1)) break;
 bVar5 = uVar4 < 9;
 uVar2 = param_1;
 uVar4 = uVar3;
 } while (bVar5);
 }
 return iVar1 + param_1 + uVar3;
}

// Function: loop_modify_var @ 0x117f7
int loop_modify_var(int param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 if (param_1 < 1) {
 iVar1 = 0;
 }
 else {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + iVar2;
 iVar3 = iVar2 + 2;
 if (iVar2 < 6) {
 iVar3 = iVar2;
 }
 iVar2 = iVar3 + 1;
 } while (iVar2 < param_1);
 }
 return iVar1;
}

// Function: loop_external_state @ 0x1181c
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

// Function: recursion_factorial @ 0x11833
int recursion_factorial(uint param_1)
{
 bool bVar1;
 int iVar2;
 iVar2 = 1;
 if (1 < (int)param_1) {
 do {
 iVar2 = iVar2 * param_1;
 bVar1 = 2 < param_1;
 param_1 = param_1 - 1;
 } while (bVar1);
 }
 return iVar2;
}

// Function: tail_recursion @ 0x1184d
int tail_recursion(uint param_1,int param_2)
{
 bool bVar1;
 if (1 < (int)param_1) {
 do {
 param_2 = param_2 * param_1;
 bVar1 = 2 < param_1;
 param_1 = param_1 - 1;
 } while (bVar1);
 }
 return param_2;
}

// Function: indirect_recursion_a @ 0x11868
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

// Function: call_func_ptr @ 0x118a7
void call_func_ptr(int (*param_1)(int), int param_2)
{
 (*param_1)(param_2);
 return;
}

// Function: call_func_ptr_array @ 0x118c7
unsigned int call_func_ptr_array(uint param_1,unsigned int param_2)
{
 unsigned int uVar1;
 if (param_1 < 3) {
 uVar1 = (*(void *)(&PTR_double_value_00014ec8)[param_1])(param_2);
 }
 else {
 uVar1 = 0xffffffff;
 }
 return uVar1;
}

// Function: double_value @ 0x118f8
int double_value(int param_1)
{
 return param_1 * 2;
}

// Function: triple_value @ 0x118ff
int triple_value(int param_1)
{
 return param_1 * 3;
}

// Function: call_virtual_func @ 0x11907
int call_virtual_func(unsigned int param_1,int param_2)
{
 return param_2 * 2;
}

// Function: process_with_callback @ 0x1190e
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
 iVar1 = (*param_3)(*(unsigned int *)(param_1 + iVar2 * 4));
 iVar3 = iVar3 + iVar1;
 iVar2 = iVar2 + 1;
 } while (param_2 != iVar2);
 }
 return iVar3;
}

// Function: test_control_flow_l2 @ 0x11950
void test_control_flow_l2(void)
{
 uint uVar1;
 int iVar2;
 unsigned int uVar3;
 int iVar4;
 uint uVar5;
 unsigned int *puVar6;
 int iVar7;
 int iVar8;
 unsigned int *puVar9;
 byte bVar10;
 char local_50 [32];
 unsigned int local_30 [8];
 bVar10 = 0;
 puts(&DAT_000125f5);
 iVar4 = 0;
 puVar6 = &DAT_0001204c;
 iVar2 = -1;
 iVar7 = 0;
 do {
 iVar8 = 0;
 do {
 if (puVar6[iVar8] == 7) {
 iVar2 = iVar8 - iVar4;
 goto LAB_000119a2;
 }
 iVar8 = iVar8 + 1;
 } while (iVar8 != 4);
 iVar7 = iVar7 + 1;
 iVar4 = iVar4 + -10;
 puVar6 = puVar6 + 4;
 } while (iVar7 != 3);
LAB_000119a2:
 printf("CF-L2-01 (loop_multi_exit): %d\n",iVar2);
 iVar2 = 0;
 do {
 iVar2 = iVar2 + 1;
 } while (iVar2 != 0x3e9);
 printf("CF-L2-02 (infinite_loop): %d\n",0x3e9);
 printf("CF-L2-03 (multi_return): %d\n",0xffffffff);
 printf("CF-L2-03 (multi_return): %d\n",0xfffffffe);
 printf("CF-L2-03 (multi_return): %d\n",4);
 printf("CF-L2-04 (conditional_return): %d\n",10);
 printf("CF-L2-04 (conditional_return): %d\n",5);
 puVar6 = &DAT_00012640;
 puVar9 = local_30;
 for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
 *puVar9 = *puVar6;
 puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
 puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
 }
 uVar3 = duffs_device(local_50,local_30,8);
 printf("CF-L2-05 (duffs_device): %d\n",uVar3);
 uVar5 = 0xffffffff;
 iVar4 = 0xb;
 iVar2 = 10;
 do {
 uVar1 = iVar2 - 8;
 iVar2 = iVar2 + 2;
 if (iVar4 - 2U <= uVar1) break;
 uVar5 = uVar5 + 1;
 iVar4 = iVar4 + -1;
 } while (uVar5 < 9);
 printf("CF-L2-06 (loop_complex_cond): %d\n",iVar2);
 printf("CF-L2-07 (loop_modify_var): %d\n",0x1e);
 iVar2 = 0;
 do {
 iVar2 = iVar2 + 1;
 } while (iVar2 != 0x65);
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

// Function: non_local_jump @ 0x11b58
int non_local_jump(uint param_1)
{
 int iVar1;
 iVar1 = _setjmp((__jmp_buf_tag *)jump_buffer);
 if (iVar1 == 0) {
 if ((int)param_1 < 0) {
 longjmp((__jmp_buf_tag *)jump_buffer,1);
 }
 if (100 < param_1) {
 longjmp((__jmp_buf_tag *)jump_buffer,2);
 }
 iVar1 = param_1 * 2;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}

// Function: cpp_exception @ 0x11bb6
int cpp_exception(int param_1)
{
 int iVar1;
 int iVar2;
 iVar2 = -2;
 if (param_1 < 0x65) {
 iVar2 = param_1 * 2;
 }
 iVar1 = -1;
 if (-1 < param_1) {
 iVar1 = iVar2;
 }
 return iVar1;
}

// Function: large_jump_table @ 0x11bd1
unsigned int large_jump_table(uint param_1,unsigned int param_2,unsigned int param_3)
{
 unsigned int uVar1;
 if (9 < param_1) {
 return 0xffffffff;
 }
 uVar1 = (*(void *)(&PTR_op_add_00014ed4)[param_1])(param_2,param_3);
 return uVar1;
}

// Function: op_add @ 0x11c09
int op_add(int param_1,int param_2)
{
 return param_2 + param_1;
}

// Function: op_sub @ 0x11c12
int op_sub(int param_1,int param_2)
{
 return param_1 - param_2;
}

// Function: op_mul @ 0x11c1b
int op_mul(int param_1,int param_2)
{
 return param_2 * param_1;
}

// Function: op_div @ 0x11c25
int op_div(int param_1,int param_2)
{
 if (param_2 != 0) {
 return param_1 / param_2;
 }
 return 0;
}

// Function: op_mod @ 0x11c38
int op_mod(int param_1,int param_2)
{
 if (param_2 != 0) {
 return param_1 % param_2;
 }
 return 0;
}

// Function: op_and @ 0x11c4d
uint op_and(uint param_1,uint param_2)
{
 return param_2 & param_1;
}

// Function: op_or @ 0x11c56
uint op_or(uint param_1,uint param_2)
{
 return param_2 | param_1;
}

// Function: op_xor @ 0x11c5f
uint op_xor(uint param_1,uint param_2)
{
 return param_2 ^ param_1;
}

// Function: op_shl @ 0x11c68
int op_shl(int param_1,byte param_2)
{
 return param_1 << (param_2 & 0x1f);
}

// Function: op_shr @ 0x11c73
int op_shr(int param_1,byte param_2)
{
 return param_1 >> (param_2 & 0x1f);
}

// Function: conditional_func_ptr @ 0x11c7e
void conditional_func_ptr(int param_1,unsigned int param_2)
{
 void *pcVar1;
 void *pcVar2;
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

// Function: FUN_00011cc2 @ 0x11cc2
unsigned int FUN_00011cc2(unsigned int param_1,unsigned int param_2,uint param_3)
{
 unsigned int uVar1;
 int unaff_retaddr;
 if (param_3 < 4) {
 uVar1 = (*(void *)(unaff_retaddr + 0x333e + *(int *)(unaff_retaddr + 0x366 + param_3 * 4)))();
 return uVar1;
 }
 return 3;
}

// Function: fsm_func_table @ 0x11d0b
unsigned int fsm_func_table(unsigned int param_1,uint param_2)
{
 unsigned int uVar1;
 if (param_2 < 4) {
 uVar1 = (*(void *)(&PTR_state_idle_00014efc)[param_2])(param_1);
 }
 else {
 uVar1 = 3;
 }
 return uVar1;
}

// Function: state_idle @ 0x11d3e
bool state_idle(int param_1)
{
 return param_1 == 1;
}

// Function: state_processing @ 0x11d49
char state_processing(int param_1)
{
 char cVar1;
 cVar1 = (param_1 == 99) * '\x02' + '\x01';
 if (param_1 == 2) {
 cVar1 = '\x02';
 }
 return cVar1;
}

// Function: state_done @ 0x11d5f
unsigned int state_done(void)
{
 return 2;
}

// Function: state_error @ 0x11d65
char state_error(int param_1)
{
 return (param_1 != 0) * '\x03';
}

// Function: FUN_00011d78 @ 0x11d78
unsigned int FUN_00011d78(unsigned int param_1,unsigned int param_2,uint param_3)
{
 unsigned int uVar1;
 int unaff_retaddr;
 if (3 < param_3) {
 return 0xffffffff;
 }
 uVar1 = (**(void **)(unaff_retaddr + 0x3194 + param_3 * 4))();
 return uVar1;
}

// Function: obfuscated_cf @ 0x11da8
int obfuscated_cf(int param_1)
{
 return param_1 * 2;
}

// Function: opaque_predicate @ 0x11daf
int opaque_predicate(int param_1)
{
 return param_1 * 2;
}

// Function: overlapped_code @ 0x11db6
int overlapped_code(uint param_1)
{
 if ((param_1 & 1) == 0) {
 return (int)param_1 / 2;
 }
 return param_1 * 3 + 1;
}

// Function: test_control_flow_l3 @ 0x11dce
void test_control_flow_l3(void)
{
 unsigned int uVar1;
 char *pcVar2;
 puts(&DAT_00012619);
 uVar1 = non_local_jump(5);
 printf("CF-L3-01 (non_local_jump): %d\n",uVar1);
 uVar1 = non_local_jump(0xfffffffb);
 printf("CF-L3-01 (non_local_jump): %d\n",uVar1);
 printf("CF-L3-02 (cpp_exception): %d\n",10);
 printf("CF-L3-02 (cpp_exception): %d\n",0xffffffff);
 printf("CF-L3-03 (large_jump_table): %d\n",0xf);
 printf("CF-L3-04 (conditional_func_ptr): %d\n",10);
 printf("CF-L3-05 (state_machine): %d\n",1);
 pcVar2 = "CF-L3-06 (fsm_func_table): %d\n";
 printf("CF-L3-06 (fsm_func_table): %d\n",2);
 uVar1 = computed_goto(pcVar2,2);
 printf("CF-L3-07 (computed_goto): %d\n",uVar1);
 printf("CF-L3-08 (obfuscated_cf): %d\n",10);
 printf("CF-L3-09 (opaque_predicate): %d\n",10);
 printf("CF-L3-10 (overlapped_code): %d\n",0x10);
 return;
}

// Function: main @ 0x11efc
unsigned int main(void)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}

// Function: __do_global_ctors_aux @ 0x11f30
void __do_global_ctors_aux(void)
{
 return;
}

// Function: _fini @ 0x11f7c
void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

