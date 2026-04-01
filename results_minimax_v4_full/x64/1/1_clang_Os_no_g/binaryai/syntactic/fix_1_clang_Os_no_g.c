// Decompiled by BinaryAI
// SHA256: 4b8590cb47f9bd7124062db60e9df6d50bfc51ad841cff7332a3a031c91353bd

#include <stdint.h>
#include <setjmp.h>
#include <stdbool.h>

typedef unsigned int uint;
typedef unsigned char byte;

// Union for accessing char[16] as different types
typedef union {
    unsigned int _0_4;
    unsigned int _4_4;
    unsigned int _8_4;
    unsigned int _12_4;
    unsigned long long _0_8;
    unsigned long long _8_8;
    unsigned int arr[4];
    char c[16];
} u16;

// External function declarations
extern void __gmon_start__(void);
extern void *__dso_handle;
extern int __libc_start_main(int (*main)(void), void *argc, void *argv, void (*init)(void), void (*fini)(void), void *stack_end, unsigned long rtld_fini, void *unreached);
extern int main(void);

// Data references
unsigned int DAT_00102090[] = {0, 10, 20, 30};
jmp_buf jump_buffer;
unsigned int DAT_001020d0[] = {10, 20, 30, 40, 50};
unsigned int _DAT_00102010[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
unsigned int DAT_001020f0[] = {1, 2, 3, 4};

// String data
char DAT_00102675[] = "Control Flow Test Level 1";
char DAT_00102699[] = "Control Flow Test Level 2";
char DAT_001026bd[] = "Control Flow Test Level 3";

char completed_0 = 0;

// Function: _init @ 0x101000
int _init(void *ctx)
{
 __gmon_start__();
 return 0;
}

// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 // Null function pointer call - removed as it's undefined behavior
 return;
}

// Function: <EXTERNAL>::puts @ 0x101030
// Stub implementation - actual puts would be linked from libc
int puts(char *__s)
{
 return 0;
}

// Function: <EXTERNAL>::printf @ 0x101040
// Stub implementation - actual printf would be linked from libc
int printf(char *__format,...)
{
 return 0;
}

// Function: <EXTERNAL>::_setjmp @ 0x101050
// Stub implementation - actual _setjmp would be linked from libc
int _setjmp(jmp_buf __env)
{
 return 0;
}

// Function: <EXTERNAL>::longjmp @ 0x101060
// Actual longjmp would be linked from libc - using noreturn attribute
void __attribute__((noreturn)) longjmp(jmp_buf __env, int __val)
{
 while(1) {} // Infinite loop as placeholder
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x101070
// Stub implementation - actual __cxa_finalize would be linked from libc
void __cxa_finalize(void *d)
{
 (void)d;
 return;
}

// Function: _start @ 0x101080
void _start(unsigned long long param_1,unsigned long long param_2)
{
 char auStack_8 [8];
 __libc_start_main(main,(void *)param_2,&auStack_8,0,0,(void *)param_1,(unsigned long)&auStack_8,0);
 // Infinite loop - _start never returns
 while(1) {}
}

// Function: deregister_tm_clones @ 0x1010b0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1010e0
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x101120
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

// Function: sequential_ops @ 0x10116c
int sequential_ops(int param_1,int param_2,int param_3)
{
 return (param_1 + param_2) * 2 - param_3;
}

// Function: single_if @ 0x101174
int single_if(int param_1)
{
 return param_1 << (0 < param_1);
}

// Function: if_else @ 0x10117e
bool if_else(int param_1)
{
 return 0 < param_1;
}

// Function: nested_if_2 @ 0x101186
int nested_if_2(int param_1,int param_2)
{
 int iVar1;
 if (param_2 < 0) {
 param_2 = 0;
 }
 iVar1 = param_2 + param_1;
 if (param_1 < 1) {
 iVar1 = 0;
 }
 return iVar1;
}

// Function: nested_if_deep @ 0x101196
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
 return 0 < param_5 | 4;
 }
 return 3;
}

// Function: if_elseif_chain @ 0x1011c7
int if_elseif_chain(uint param_1)
{
 int iVar1;
 iVar1 = -1;
 if (param_1 < 3) {
 iVar1 = param_1 * 10 + 10;
 }
 return iVar1;
}

// Function: if_elseif_long @ 0x1011da
int if_elseif_long(uint param_1)
{
 int iVar1;
 iVar1 = -1;
 if (param_1 < 5) {
 iVar1 = param_1 * 100 + 100;
 }
 return iVar1;
}

// Function: switch_small @ 0x1011ec
unsigned int switch_small(uint param_1)
{
 unsigned int uVar1;
 uVar1 = 0xffffffff;
 if (param_1 < 4) {
 uVar1 = *(unsigned int *)(&DAT_00102090 + (long)(int)param_1 * 4);
 }
 return uVar1;
}

// Function: switch_large @ 0x101204
int switch_large(uint param_1)
{
 int iVar1;
 iVar1 = -1;
 if (param_1 < 10) {
 iVar1 = param_1 * 10;
 }
 return iVar1;
}

// Function: switch_default @ 0x101216
int switch_default(int param_1)
{
 int iVar1;
 iVar1 = 0;
 if (param_1 - 1U < 3) {
 iVar1 = (param_1 - 1U) * 100 + 100;
 }
 return iVar1;
}

// Function: switch_fallthrough @ 0x101227
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

// Function: loop_for_fixed @ 0x101248
int loop_for_fixed(int param_1)
{
 if (0 < param_1) {
 return (int)((unsigned long)(param_1 - 2) * (unsigned long)(param_1 - 1) >> 1) + param_1 + -1;
 }
 return 0;
}

// Function: loop_while @ 0x101262
int loop_while(int param_1)
{
 int iVar1;
 uint uVar2;
 if (param_1 != 0) {
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 uVar2 = param_1 + 9;
 param_1 = param_1 / 10;
 } while (0x12 < uVar2);
 return iVar1;
 }
 return 1;
}

// Function: loop_dowhile @ 0x101290
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

// Function: loop_nested @ 0x1012b4
int loop_nested(int param_1,int param_2)
{
 int iVar1;
 if (param_2 < 1) {
 param_2 = 0;
 }
 iVar1 = 0;
 if (0 < param_1) {
 iVar1 = param_2 * param_1;
 }
 return iVar1;
}

// Function: loop_break @ 0x1012c4
long loop_break(int param_1)
{
 long lVar1;
 int *piVar2;
 piVar2 = &DAT_001020d0;
 lVar1 = 0;
 do {
 if (*piVar2 == param_1) {
 return lVar1;
 }
 lVar1 = lVar1 + 1;
 piVar2 = piVar2 + 1;
 } while (lVar1 != 5);
 return 0xffffffff;
}

// Function: loop_continue @ 0x1012e4
int loop_continue(int param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 uint uVar4;
 uint uVar5;
 uint uVar6;
 uint uVar7;
 uint uVar8;
 uint uVar9;
 if (0 < param_1) {
 uVar8 = 1;
 uVar9 = 3;
 iVar1 = 4;
 uVar5 = 0;
 uVar7 = 0;
 do {
 uVar6 = uVar7;
 uVar4 = uVar5;
 uVar5 = ((int)(uVar8 << 0x1f) >> 0x1f & uVar8) + uVar4;
 uVar7 = ((int)(uVar9 << 0x1f) >> 0x1f & uVar9) + uVar6;
 uVar8 = uVar8 + 4;
 uVar9 = uVar9 + 4;
 iVar2 = iVar1 + -4;
 iVar3 = iVar1 + (param_1 + 3U & 0xfffffffc);
 iVar1 = iVar2;
 } while (iVar3 != 8);
 uVar8 = -iVar2;
 uVar9 = -(uint)((int)(param_1 - 1U ^ 0x80000000) < (int)(uVar8 ^ 0x80000000));
 uVar8 = -(uint)((int)(param_1 - 1U ^ 0x80000000) < (int)((uVar8 | 2) ^ 0x80000000));
 return (~uVar8 & uVar7 | uVar6 & uVar8) + (~uVar9 & uVar5 | uVar4 & uVar9);
 }
 return 0;
}

// Function: goto_forward @ 0x101390
int goto_forward(int param_1)
{
 int iVar1;
 iVar1 = 1;
 if (0 < param_1) {
 iVar1 = param_1;
 }
 return iVar1 * param_1 * 2;
}

// Function: goto_backward @ 0x1013a0
int goto_backward(int param_1)
{
 int iVar1;
 int iVar2;
 uint uVar3;
 int iVar4;
 uint uVar5;
 uint uVar6;
 uint uVar7;
 uint uVar8;
 uint uVar9;
 uint uVar10;
 uint uVar11;
 uint uVar12;
 uint uVar15;
 uint uVar16;
 u16 auVar13;
 u16 auVar14;
 uint uVar17;
 uint uVar18;
 if (0 < param_1) {
 uVar5 = param_1 - 1;
 auVar13.arr[0] = _DAT_00102010[0];
 auVar13.arr[1] = _DAT_00102010[1];
 auVar13.arr[2] = _DAT_00102010[2];
 auVar13.arr[3] = _DAT_00102010[3];
 iVar1 = 4;
 uVar7 = 1;
 uVar17 = 1;
 uVar10 = 1;
 uVar18 = 1;
 do {
 uVar11 = uVar18;
 uVar9 = uVar10;
 uVar8 = uVar17;
 uVar6 = uVar7;
 uVar7 = auVar13._0_4 * uVar6;
 uVar10 = (uint)((auVar13._8_8 & 0xffffffff) * (unsigned long)uVar9);
 uVar17 = auVar13._4_4 * uVar8;
 uVar18 = auVar13._12_4 * uVar11;
 auVar14._0_4 = auVar13._0_4 + 4;
 auVar14._4_4 = auVar13._4_4 + 4;
 auVar14._8_4 = auVar13._8_4 + 4;
 auVar14._12_4 = auVar13._12_4 + 4;
 iVar2 = iVar1 + -4;
 iVar4 = iVar1 + (param_1 + 3U & 0xfffffffc);
 auVar13 = auVar14;
 iVar1 = iVar2;
 } while (iVar4 != 8);
 uVar3 = -iVar2;
 uVar12 = -(uint)((int)(uVar5 ^ 0x80000000) < (int)(uVar3 ^ 0x80000000));
 uVar15 = -(uint)((int)(uVar5 ^ 0x80000000) < (int)((uVar3 | 1) ^ 0x80000000));
 uVar16 = -(uint)((int)(uVar5 ^ 0x80000000) < (int)((uVar3 | 2) ^ 0x80000000));
 uVar5 = -(uint)((int)(uVar5 ^ 0x80000000) < (int)((uVar3 | 3) ^ 0x80000000));
 return (~uVar16 & uVar10 | uVar9 & uVar16) * (~uVar12 & uVar7 | uVar6 & uVar12) *
 (~uVar15 & uVar17 | uVar8 & uVar15) * (~uVar5 & uVar18 | uVar11 & uVar5);
 }
 return 1;
}

// Function: ternary_op @ 0x10146a
int ternary_op(int param_1,int param_2)
{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: test_control_flow_l1 @ 0x101472
void test_control_flow_l1(void)
{
 puts(&DAT_00102675);
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

// Function: loop_multi_exit @ 0x10166e
int loop_multi_exit(int param_1)
{
 long lVar1;
 int iVar2;
 unsigned int *puVar3;
 long lVar4;
 puVar3 = &DAT_001020f0;
 iVar2 = 0;
 lVar4 = 0;
 do {
 lVar1 = 0;
 do {
 if (puVar3[lVar1] == param_1) {
 return (int)lVar1 - iVar2;
 }
 lVar1 = lVar1 + 1;
 } while (lVar1 != 4);
 lVar4 = lVar4 + 1;
 iVar2 = iVar2 + -10;
 puVar3 = puVar3 + 4;
 } while (lVar4 != 3);
 return -1;
}

// Function: infinite_loop @ 0x1016a3
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

// Function: multi_return @ 0x1016c1
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

// Function: conditional_return @ 0x1016e4
int conditional_return(int param_1)
{
 int iVar1;
 iVar1 = -param_1;
 if (0 < param_1) {
 iVar1 = param_1 * 2;
 }
 return iVar1;
}

// Function: duffs_device @ 0x1016f1
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
 goto switchD_00101717_caseD_1;
 case 2:
 goto switchD_00101717_caseD_2;
 case 3:
 goto switchD_00101717_caseD_3;
 case 4:
 goto switchD_00101717_caseD_4;
 case 5:
 goto switchD_00101717_caseD_5;
 case 6:
 goto switchD_00101717_caseD_6;
 case 7:
 goto switchD_00101717_caseD_7;
 }
 do {
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
 uVar3 = uVar2;
switchD_00101717_caseD_7:
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
switchD_00101717_caseD_6:
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
switchD_00101717_caseD_5:
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
switchD_00101717_caseD_4:
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
switchD_00101717_caseD_3:
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
switchD_00101717_caseD_2:
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
switchD_00101717_caseD_1:
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

// Function: loop_complex_cond @ 0x101786
int loop_complex_cond(uint param_1)
{
 int iVar1;
 uint uVar2;
 uint uVar3;
 uint uVar4;
 bool bVar5;
 if ((int)param_1 < 1) {
 iVar1 = 0;
 uVar2 = 0;
 }
 else {
 iVar1 = 0;
 uVar4 = param_1;
 uVar3 = 0;
 do {
 iVar1 = iVar1 + 2;
 param_1 = uVar4 - 1;
 uVar2 = uVar3 + 1;
 if ((uVar4 < 2) || ((int)param_1 <= iVar1)) break;
 bVar5 = uVar3 < 9;
 uVar4 = param_1;
 uVar3 = uVar2;
 } while (bVar5);
 }
 return iVar1 + param_1 + uVar2;
}

// Function: loop_modify_var @ 0x1017b4
int loop_modify_var(int param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 if (0 < param_1) {
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
 return iVar1;
 }
 return 0;
}

// Function: loop_external_state @ 0x1017d3
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

// Function: recursion_factorial @ 0x1017e7
int recursion_factorial(uint param_1)
{
 int iVar1;
 int iVar2;
 uint uVar3;
 int iVar4;
 uint uVar5;
 uint uVar6;
 uint uVar7;
 uint uVar8;
 uint uVar9;
 uint uVar10;
 uint uVar11;
 uint uVar12;
 uint uVar15;
 uint uVar16;
 u16 auVar13;
 u16 auVar14;
 uint uVar17;
 uint uVar18;
 iVar1 = 1;
 if (1 < (int)param_1) {
 uVar5 = param_1 - 2;
 if (param_1 < 2) {
 uVar5 = 0;
 }
 auVar13._4_4 = param_1 - 1;
 auVar13._0_4 = param_1;
 auVar13._8_4 = param_1 - 2;
 auVar13._12_4 = param_1 - 3;
 iVar1 = 4;
 uVar7 = 1;
 uVar17 = 1;
 uVar10 = 1;
 uVar18 = 1;
 do {
 uVar11 = uVar18;
 uVar9 = uVar10;
 uVar8 = uVar17;
 uVar6 = uVar7;
 uVar7 = auVar13._0_4 * uVar6;
 uVar10 = (uint)((auVar13._8_8 & 0xffffffff) * (unsigned long)uVar9);
 uVar17 = auVar13._4_4 * uVar8;
 uVar18 = auVar13._12_4 * uVar11;
 auVar14._0_4 = auVar13._0_4 + -4;
 auVar14._4_4 = auVar13._4_4 + -4;
 auVar14._8_4 = auVar13._8_4 + -4;
 auVar14._12_4 = auVar13._12_4 + -4;
 iVar2 = iVar1 + -4;
 iVar4 = iVar1 + (uVar5 + 4 & 0xfffffffc);
 auVar13 = auVar14;
 iVar1 = iVar2;
 } while (iVar4 != 8);
 uVar3 = -iVar2;
 uVar12 = -(uint)((int)(uVar5 ^ 0x80000000) < (int)(uVar3 ^ 0x80000000));
 uVar15 = -(uint)((int)(uVar5 ^ 0x80000000) < (int)((uVar3 | 1) ^ 0x80000000));
 uVar16 = -(uint)((int)(uVar5 ^ 0x80000000) < (int)((uVar3 | 2) ^ 0x80000000));
 uVar5 = -(uint)((int)(uVar5 ^ 0x80000000) < (int)((uVar3 | 3) ^ 0x80000000));
 iVar1 = (~uVar16 & uVar10 | uVar9 & uVar16) * (~uVar12 & uVar7 | uVar6 & uVar12) *
 (~uVar15 & uVar17 | uVar8 & uVar15) * (~uVar5 & uVar18 | uVar11 & uVar5);
 }
 return iVar1;
}

// Function: tail_recursion @ 0x1018c0
uint tail_recursion(uint param_1,uint param_2)
{
 uint uVar1;
 int iVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 uint uVar6;
 uint uVar7;
 uint uVar8;
 uint uVar9;
 uint uVar10;
 uint uVar11;
 int iVar12;
 uint uVar13;
 int iVar14;
 uint uVar15;
 int iVar16;
 uint uVar17;
 uint uVar18;
 if (1 < (int)param_1) {
 uVar6 = param_1 - 2;
 if (param_1 < 2) {
 uVar6 = 0;
 }
 iVar12 = param_1 - 1;
 iVar14 = param_1 - 2;
 iVar16 = param_1 - 3;
 uVar17 = 1;
 uVar1 = 1;
 uVar18 = 1;
 iVar2 = 4;
 do {
 uVar10 = uVar18;
 uVar9 = uVar1;
 uVar8 = uVar17;
 uVar7 = param_2;
 param_2 = uVar7 * param_1;
 uVar1 = uVar9 * iVar14;
 uVar17 = uVar8 * iVar12;
 uVar18 = uVar10 * iVar16;
 param_1 = param_1 - 4;
 iVar12 = iVar12 + -4;
 iVar14 = iVar14 + -4;
 iVar16 = iVar16 + -4;
 iVar3 = iVar2 + -4;
 iVar5 = iVar2 + (uVar6 + 4 & 0xfffffffc);
 iVar2 = iVar3;
 } while (iVar5 != 8);
 uVar4 = -iVar3;
 uVar11 = -(uint)((int)(uVar6 ^ 0x80000000) < (int)(uVar4 ^ 0x80000000));
 uVar13 = -(uint)((int)(uVar6 ^ 0x80000000) < (int)((uVar4 | 1) ^ 0x80000000));
 uVar15 = -(uint)((int)(uVar6 ^ 0x80000000) < (int)((uVar4 | 2) ^ 0x80000000));
 uVar6 = -(uint)((int)(uVar6 ^ 0x80000000) < (int)((uVar4 | 3) ^ 0x80000000));
 param_2 = (~uVar15 & uVar1 | uVar9 & uVar15) * (~uVar11 & param_2 | uVar7 & uVar11) *
 (~uVar13 & uVar17 | uVar8 & uVar13) * (~uVar6 & uVar18 | uVar10 & uVar6);
 }
 return param_2;
}

// Function: indirect_recursion_a @ 0x101998
unsigned long indirect_recursion_a(uint param_1,int param_2)
{
 int iVar1;
 unsigned long uVar2;
 uint uVar3;
 uVar2 = (unsigned long)param_1;
 if (0 < param_2) {
 param_2 = param_2 + 2;
 do {
 if ((uVar2 & 1) == 0) {
 uVar3 = (int)(uVar2 >> 0x1f) + (int)uVar2 >> 1;
 if (param_2 == 3) {
 return (unsigned long)uVar3;
 }
 uVar3 = uVar3 + 1;
 }
 else {
 iVar1 = (int)uVar2 * 3;
 if (param_2 == 3) {
 return (unsigned long)(iVar1 + 1);
 }
 uVar3 = iVar1 + 2;
 }
 uVar2 = (unsigned long)uVar3;
 param_2 = param_2 + -2;
 } while (2 < param_2);
 }
 return uVar2;
}

// Function: call_func_ptr @ 0x1019d3
void call_func_ptr(int (*func_ptr)(int),unsigned int param_2)
{
 func_ptr((int)param_2);
 return;
}

// Function: call_func_ptr_array @ 0x1019da
int call_func_ptr_array(unsigned int param_1,uint param_2)
{
 int iVar1;
 int iVar2;
 uint uVar3;
 int iVar4;
 uint uVar5;
 uint uVar6;
 uint uVar7;
 uint uVar8;
 uint uVar9;
 uint uVar10;
 uint uVar11;
 uint uVar12;
 uint uVar15;
 uint uVar16;
 u16 auVar13;
 u16 auVar14;
 uint uVar17;
 uint uVar18;
 switch(param_1) {
 case 0:
 return param_2 * 2;
 case 1:
 return param_2 * 3;
 case 2:
 break;
 default:
 return -1;
 }
 iVar1 = 1;
 if (1 < (int)param_2) {
 uVar5 = param_2 - 2;
 if (param_2 < 2) {
 uVar5 = 0;
 }
 auVar13._4_4 = param_2 - 1;
 auVar13._0_4 = param_2;
 auVar13._8_4 = param_2 - 2;
 auVar13._12_4 = param_2 - 3;
 iVar1 = 4;
 uVar7 = 1;
 uVar17 = 1;
 uVar10 = 1;
 uVar18 = 1;
 do {
 uVar11 = uVar18;
 uVar9 = uVar10;
 uVar8 = uVar17;
 uVar6 = uVar7;
 uVar7 = auVar13._0_4 * uVar6;
 uVar10 = (uint)((auVar13._8_8 & 0xffffffff) * (unsigned long)uVar9);
 uVar17 = auVar13._4_4 * uVar8;
 uVar18 = auVar13._12_4 * uVar11;
 auVar14._0_4 = auVar13._0_4 + -4;
 auVar14._4_4 = auVar13._4_4 + -4;
 auVar14._8_4 = auVar13._8_4 + -4;
 auVar14._12_4 = auVar13._12_4 + -4;
 iVar2 = iVar1 + -4;
 iVar4 = iVar1 + (uVar5 + 4 & 0xfffffffc);
 auVar13 = auVar14;
 iVar1 = iVar2;
 } while (iVar4 != 8);
 uVar3 = -iVar2;
 uVar12 = -(uint)((int)(uVar5 ^ 0x80000000) < (int)(uVar3 ^ 0x80000000));
 uVar15 = -(uint)((int)(uVar5 ^ 0x80000000) < (int)((uVar3 | 1) ^ 0x80000000));
 uVar16 = -(uint)((int)(uVar5 ^ 0x80000000) < (int)((uVar3 | 2) ^ 0x80000000));
 uVar5 = -(uint)((int)(uVar5 ^ 0x80000000) < (int)((uVar3 | 3) ^ 0x80000000));
 iVar1 = (~uVar16 & uVar10 | uVar9 & uVar16) * (~uVar12 & uVar7 | uVar6 & uVar12) *
 (~uVar15 & uVar17 | uVar8 & uVar15) * (~uVar5 & uVar18 | uVar11 & uVar5);
 }
 return iVar1;
}

// Function: double_value @ 0x1019f3
int double_value(uint param_1)
{
 return param_1 * 2;
}

// Function: triple_value @ 0x1019f7
int triple_value(uint param_1)
{
 return param_1 * 3;
}

// Function: call_virtual_func @ 0x1019fb
int call_virtual_func(unsigned long long param_1,int param_2)
{
 return param_2 * 2;
}

// Function: process_with_callback @ 0x1019ff
int process_with_callback(long param_1,uint param_2,void *param_3)
{
 int iVar1;
 unsigned long uVar2;
 int iVar3;
 if ((int)param_2 < 1) {
 iVar3 = 0;
 }
 else {
 uVar2 = 0;
 iVar3 = 0;
 do {
 iVar1 = (*param_3)(*(unsigned int *)(param_1 + uVar2 * 4));
 iVar3 = iVar3 + iVar1;
 uVar2 = uVar2 + 1;
 } while (param_2 != uVar2);
 }
 return iVar3;
}

// Function: test_control_flow_l2 @ 0x101a38
void test_control_flow_l2(void)
{
 int iVar1;
 uint uVar2;
 unsigned int *puVar3;
 long lVar4;
 uint uVar5;
 uint uVar6;
 long lVar7;
 unsigned long uVar8;
 char local_58 [32];
 unsigned int local_38;
 unsigned int uStack_34;
 unsigned int uStack_30;
 unsigned int uStack_2c;
 unsigned int local_28;
 unsigned int uStack_24;
 unsigned int uStack_20;
 unsigned int uStack_1c;
 puts(&DAT_00102699);
 puVar3 = &DAT_001020f0;
 iVar1 = 0;
 lVar4 = 0;
 do {
 lVar7 = 0;
 do {
 if (puVar3[lVar7] == 7) {
 uVar8 = (unsigned long)(uint)((int)lVar7 - iVar1);
 goto LAB_00101a82;
 }
 lVar7 = lVar7 + 1;
 } while (lVar7 != 4);
 lVar4 = lVar4 + 1;
 iVar1 = iVar1 + -10;
 puVar3 = puVar3 + 4;
 } while (lVar4 != 3);
 uVar8 = 0xffffffff;
LAB_00101a82:
 iVar1 = 0;
 printf("CF-L2-01 (loop_multi_exit): %d\n",uVar8);
 do {
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x3e9);
 printf("CF-L2-02 (infinite_loop): %d\n",0x3e9);
 uVar6 = 0xffffffff;
 printf("CF-L2-03 (multi_return): %d\n",0xffffffff);
 printf("CF-L2-03 (multi_return): %d\n",0xfffffffe);
 printf("CF-L2-03 (multi_return): %d\n",4);
 uVar5 = 10;
 printf("CF-L2-04 (conditional_return): %d\n",10);
 printf("CF-L2-04 (conditional_return): %d\n",5);
 local_28 = 5;
 uStack_24 = 6;
 uStack_20 = 7;
 uStack_1c = 8;
 local_38 = 1;
 uStack_34 = 2;
 uStack_30 = 3;
 uStack_2c = 4;
 uVar2 = duffs_device(local_58,&local_38,8);
 printf("CF-L2-05 (duffs_device): %d\n",(unsigned long)uVar2);
 iVar1 = 0xb;
 do {
 uVar2 = uVar5 - 8;
 uVar5 = uVar5 + 2;
 if (iVar1 - 2U <= uVar2) break;
 uVar6 = uVar6 + 1;
 iVar1 = iVar1 + -1;
 } while (uVar6 < 9);
 iVar1 = 0;
 printf("CF-L2-06 (loop_complex_cond): %d\n",(unsigned long)uVar5);
 printf("CF-L2-07 (loop_modify_var): %d\n",0x1e);
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

// Function: non_local_jump @ 0x101c5d
int non_local_jump(uint param_1)
{
 int iVar1;
 int iVar2;
 iVar1 = _setjmp(jump_buffer);
 iVar2 = -1;
 if (iVar1 == 0) {
 if ((int)param_1 < 0) {
 longjmp(jump_buffer,1);
 }
 if (100 < param_1) {
 longjmp(jump_buffer,2);
 }
 iVar2 = param_1 * 2;
 }
 return iVar2;
}

// Function: cpp_exception @ 0x101ca8
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

// Function: large_jump_table @ 0x101cc1
typedef union {
    unsigned int _0_4;
    unsigned int _4_4;
    unsigned int _8_4;
    unsigned int _12_4;
    unsigned long long _0_8;
    unsigned long long _8_8;
    unsigned long long lo;
    unsigned long long hi;
} large_jump_table_ret;

large_jump_table_ret large_jump_table(uint param_1,uint param_2,unsigned long param_3)
{
 large_jump_table_ret auVar1;
 large_jump_table_ret auVar2;
 byte bVar3;
 uint uVar4;
 large_jump_table_ret auVar5;
 large_jump_table_ret auVar6;
 large_jump_table_ret auVar7;
 large_jump_table_ret auVar8;
 large_jump_table_ret auVar9;
 large_jump_table_ret auVar10;
 large_jump_table_ret auVar11;
 large_jump_table_ret auVar12;
 large_jump_table_ret auVar13;
 large_jump_table_ret auVar14;
 large_jump_table_ret auVar15;
 if (9 < param_1) {
 auVar5.hi = param_3;
 auVar5.lo = 0xffffffff;
 return auVar5;
 }
 uVar4 = (uint)(param_3 & 0xffffffff);
 bVar3 = (byte)(param_3 & 0xffffffff);
 switch(param_1) {
 case 0:
 auVar6._0_4 = param_2 + uVar4;
 auVar6._4_4 = 0;
 auVar6._8_8 = param_3;
 return auVar6;
 case 1:
 auVar7._0_4 = param_2 - uVar4;
 auVar7._4_4 = 0;
 auVar7._8_8 = param_3;
 return auVar7;
 case 2:
 auVar8._0_4 = param_2 * uVar4;
 auVar8._4_4 = 0;
 auVar8._8_8 = param_3;
 return auVar8;
 case 4:
 if (uVar4 != 0) {
 auVar10._8_8 = (long)(int)param_2 % (long)(int)uVar4 & 0xffffffff;
 auVar10._0_8 = auVar10._8_8;
 return auVar10;
 }
 auVar2._8_8 = 0;
 auVar2._0_8 = param_3;
 auVar2._4_4 = 0;
 auVar2._12_4 = 0;
 return auVar2;
 case 5:
 auVar11._0_4 = param_2 & uVar4;
 auVar11._4_4 = 0;
 auVar11._8_8 = param_3;
 return auVar11;
 case 6:
 auVar12._0_4 = param_2 | uVar4;
 auVar12._4_4 = 0;
 auVar12._8_8 = param_3;
 return auVar12;
 case 7:
 auVar13._0_4 = param_2 ^ uVar4;
 auVar13._4_4 = 0;
 auVar13._8_8 = param_3;
 return auVar13;
 case 8:
 auVar14._0_4 = param_2 << (bVar3 & 0x1f);
 auVar14._4_4 = 0;
 auVar14._8_8 = param_3;
 return auVar14;
 case 9:
 auVar15._0_4 = (int)param_2 >> (bVar3 & 0x1f);
 auVar15._4_4 = 0;
 auVar15._8_8 = param_3;
 return auVar15;
 }
 if (uVar4 != 0) {
 auVar9._0_8 = (long)(int)param_2 / (long)(int)uVar4 & 0xffffffff;
 auVar9._8_8 = (long)(int)param_2 % (long)(int)uVar4 & 0xffffffff;
 return auVar9;
 }
 auVar1._8_8 = 0;
 auVar1._0_8 = param_3;
 auVar1._4_4 = 0;
 auVar1._12_4 = 0;
 return auVar1;
}

// Function: op_add @ 0x101cdc
int op_add(int param_1,int param_2)
{
 return param_1 + param_2;
}

// Function: op_sub @ 0x101ce0
int op_sub(int param_1,int param_2)
{
 return param_1 - param_2;
}

// Function: op_mul @ 0x101ce5
int op_mul(int param_1,int param_2)
{
 return param_1 * param_2;
}

// Function: op_div @ 0x101ceb
u16 op_div(int param_1,int param_2,unsigned long param_3)
{
 u16 auVar1;
 u16 auVar2;
 if (param_2 != 0) {
 auVar2._0_8 = (unsigned long long)((long)param_1 / (long)param_2 & 0xffffffff);
 auVar2._8_8 = (unsigned long long)((long)param_1 % (long)param_2 & 0xffffffff);
 return auVar2;
 }
 auVar1._8_8 = 0;
 auVar1._0_8 = param_3;
 // Return 128-bit zero by setting both halves
 auVar1._4_4 = 0;
 auVar1._12_4 = 0;
 return auVar1;
}

// Function: op_mod @ 0x101cf8
unsigned long op_mod(int param_1,int param_2)
{
 if (param_2 != 0) {
 return (long)param_1 % (long)param_2 & 0xffffffff;
 }
 return 0;
}

// Function: op_and @ 0x101d07
uint op_and(uint param_1,uint param_2)
{
 return param_1 & param_2;
}

// Function: op_or @ 0x101d0c
uint op_or(uint param_1,uint param_2)
{
 return param_1 | param_2;
}

// Function: op_xor @ 0x101d11
uint op_xor(uint param_1,uint param_2)
{
 return param_1 ^ param_2;
}

// Function: op_shl @ 0x101d16
int op_shl(int param_1,byte param_2)
{
 return param_1 << (param_2 & 0x1f);
}

// Function: op_shr @ 0x101d1d
int op_shr(int param_1,byte param_2)
{
 return param_1 >> (param_2 & 0x1f);
}

// Forward declarations for function pointers
int recursion_factorial(uint param_1);
int double_value(uint param_1);
int triple_value(uint param_1);
void conditional_func_ptr(int param_1, uint param_2);
int call_func_ptr(int (*func_ptr)(uint), uint param_2);

// Function: conditional_func_ptr @ 0x101d24
void conditional_func_ptr(int param_1,unsigned int param_2)
{
 int (*func_ptr)(uint);
 int (*pcVar1)(uint);
 pcVar1 = recursion_factorial;
 if (param_1 == 1) {
 pcVar1 = triple_value;
 }
 func_ptr = double_value;
 if (param_1 != 0) {
 func_ptr = pcVar1;
 }
 (void)func_ptr(param_2);
 return;
}

// Function: state_machine @ 0x101d4a
uint state_machine(int param_1,uint param_2)
{
 uint uVar1;
 switch(param_2) {
 case 0:
 return (uint)(param_1 == 1);
 case 1:
 uVar1 = (uint)(param_1 == 99) * 2 + 1;
 if (param_1 == 2) {
 uVar1 = 2;
 }
 return uVar1;
 case 2:
 break;
 case 3:
 return (uint)(param_1 != 0) * 3;
 default:
 param_2 = 3;
 }
 return param_2;
}

// Function: fsm_func_table @ 0x101d90
char fsm_func_table(int param_1,unsigned int param_2)
{
 char cVar1;
 switch(param_2) {
 case 0:
 return param_1 == 1;
 case 1:
 break;
 case 2:
 return 2;
 case 3:
 return (param_1 != 0) * '\x03';
 default:
 return 3;
 }
 cVar1 = (param_1 == 99) * '\x02' + '\x01';
 if (param_1 == 2) {
 cVar1 = '\x02';
 }
 return cVar1;
}

// Function: state_idle @ 0x101da7
bool state_idle(int param_1)
{
 return param_1 == 1;
}

// Function: state_processing @ 0x101db0
char state_processing(int param_1)
{
 char cVar1;
 cVar1 = (param_1 == 99) * '\x02' + '\x01';
 if (param_1 == 2) {
 cVar1 = '\x02';
 }
 return cVar1;
}

// Function: state_done @ 0x101dc3
unsigned long long state_done(void)
{
 return 2;
}

// Function: state_error @ 0x101dc9
char state_error(int param_1)
{
 return (param_1 != 0) * '\x03';
}

// Function: computed_goto @ 0x101dd4
unsigned long long computed_goto(unsigned long long param_1,unsigned int param_2)
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

// Function: obfuscated_cf @ 0x101e00
int obfuscated_cf(int param_1)
{
 return param_1 * 2;
}

// Function: opaque_predicate @ 0x101e04
int opaque_predicate(int param_1)
{
 return param_1 * 2;
}

// Function: overlapped_code @ 0x101e08
int overlapped_code(uint param_1)
{
 if ((param_1 & 1) == 0) {
 return (int)param_1 / 2;
 }
 return param_1 * 3 + 1;
}

// Function: test_control_flow_l3 @ 0x101e1e
void test_control_flow_l3(void)
{
 uint uVar1;
 puts(&DAT_001026bd);
 uVar1 = non_local_jump(5);
 printf("CF-L3-01 (non_local_jump): %d\n",(unsigned long)uVar1);
 uVar1 = non_local_jump(0xfffffffb);
 printf("CF-L3-01 (non_local_jump): %d\n",(unsigned long)uVar1);
 printf("CF-L3-02 (cpp_exception): %d\n",10);
 printf("CF-L3-02 (cpp_exception): %d\n",0xffffffff);
 printf("CF-L3-03 (large_jump_table): %d\n",0xf);
 printf("CF-L3-04 (conditional_func_ptr): %d\n",10);
 printf("CF-L3-05 (state_machine): %d\n",1);
 printf("CF-L3-06 (fsm_func_table): %d\n",2);
 uVar1 = computed_goto(0, 0);
 printf("CF-L3-07 (computed_goto): %d\n",(unsigned long)uVar1);
 printf("CF-L3-08 (obfuscated_cf): %d\n",10);
 printf("CF-L3-09 (opaque_predicate): %d\n",10);
 printf("CF-L3-10 (overlapped_code): %d\n",0x10);
 return;
}

// Function: main @ 0x101f23
int main(void)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}

// Function: _fini @ 0x101f38
void _fini(void)
{
 return;
}

