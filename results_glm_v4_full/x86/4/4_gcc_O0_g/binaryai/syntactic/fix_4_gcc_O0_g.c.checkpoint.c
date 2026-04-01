// Decompiled by BinaryAI
// SHA256: ed41ead92aed2a375823533513b31cb096366490abdc8d651162fcc8b702f719

#include <stdint.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>

typedef unsigned int uint;
typedef unsigned char byte;

#define ROUND(x) ((int)((x) + 0.5))
#define CONCAT44(high, low) (((unsigned long long)(high) << 32) | ((unsigned long long)(low) & 0xFFFFFFFF))

// Define missing data symbols
char DAT_000131d8[] = "RET-VALUES:\n";
char DAT_0001337b[] = "RET-L5-03: %d\n";
char DAT_00013198[] = "PARAM-L3-04: %d\n";
char DAT_000131d3[] = "X";
char DAT_0001316c[] = "";
char DAT_000132b4[] = "";
char DAT_000132d2[] = "";
char DAT_00013342[] = "RET-L4-05: %d\n";
char DAT_0001335e[] = "";
char DAT_00013397[] = "RET-L5-04: %d\n";
char DAT_000130f4[] = "CALL-L2-04: %d\n";
char DAT_000131cb[] = "A";
char DAT_00013144[] = "CALL-L3-03: %d\n";
char DAT_000130cc[] = "CALL-L2-03: %d\n";
char DAT_00013325[] = "RET-L4-04: %d\n";
char DAT_00013008[] = "";
char DAT_000132ee[] = "RET-L2-02: %d\n";
char DAT_0001330a[] = "RET-L3-03: %d\n";
char DAT_000133b3[] = "RET-L6-01: %d\n";
char DAT_00013118[] = "CALL-L4-01: %d\n";
char DAT_0001313f[] = "CALL-L4-02: %d\n";
char DAT_000131cf[] = "B";

// Define handle variables
unsigned long long handle1_1;
unsigned long long handle2_0;

// Declare decompiler stack location references
extern int stack0x00000004;
extern int stack0x00000008;

// Define stack variables
int stack0x00000004;
int stack0x00000008;

// Declare decompiler data symbols
extern char DAT_00013008[];
extern char DAT_000130cc[];
extern char DAT_000130f4[];
extern char DAT_00013118[];
extern char DAT_0001313f[];
extern char DAT_00013144[];
extern char DAT_0001316c[];
extern char DAT_00013198[];
extern char DAT_000131cb[];
extern char DAT_000131cf[];
extern char DAT_000131d3[];
extern char DAT_000131d8[];
extern char DAT_000132b4[];
extern char DAT_000132d2[];
extern char DAT_000132ee[];
extern char DAT_0001330a[];
extern char DAT_00013325[];
extern char DAT_00013342[];
extern char DAT_0001335e[];
extern char DAT_0001337b[];
extern char DAT_00013397[];
extern char DAT_000133b3[];

// Declare handle variables
extern unsigned long long handle1_1;
extern unsigned long long handle2_0;

// Forward declarations
unsigned int main(void);

// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 void (*func)(void) = (void (*)(void))0x0;
 if (func != NULL) {
 func();
 }
 return;
}

// Function: FUN_00011090 @ 0x11090
void FUN_00011090(const char *format, ...)
{
 int unaff_EBX;
 void (*func)(const char *, ...);
 func = (void (*)(const char *, ...))(((void **)(unaff_EBX + 0x24))[0]);
 func(format, ((void *)0));
 return;
}

// Function: FUN_000110a0 @ 0x110a0
void FUN_000110a0(void *func_ptr, ...)
{
 int unaff_EBX;
 void (*func)(void *, ...);
 va_list args;
 va_start(args, func_ptr);
 func = (void (*)(void *, ...))(((void **)(unaff_EBX + 0xc))[0]);
 func(func_ptr, args);
 va_end(args);
 return;
}

// Function: FUN_000110b0 @ 0x110b0
void FUN_000110b0(const char *format, ...)
{
 int unaff_EBX;
 void (*func)(const char *, ...);
 va_list args;
 va_start(args, format);
 func = (void (*)(const char *, ...))(((void **)(unaff_EBX + 0x10))[0]);
 func(format, args);
 va_end(args);
 return;
}

// Function: FUN_000110c0 @ 0x110c0
void FUN_000110c0(void)
{
 int unaff_EBX;
 void (*func)(void);
 func = (void (*)(void))(((void **)(unaff_EBX + 0x14))[0]);
 func();
 return;
}

// Function: FUN_000110d0 @ 0x110d0
void FUN_000110d0(const char *format, ...)
{
 int unaff_EBX;
 void (*func)(const char *, ...);
 va_list args;
 va_start(args, format);
 func = (void (*)(const char *, ...))(((void **)(unaff_EBX + 0x18))[0]);
 func(format, args);
 va_end(args);
 return;
}

// Function: FUN_000110e0 @ 0x110e0
int FUN_000110e0(int param_1)
{
 int unaff_EBX;
 int (*func)(int);
 func = (int (*)(int))(((void **)(unaff_EBX + 0x1c))[0]);
 return func(param_1);
}

// Function: __i686.get_pc_thunk.bx @ 0x1111c
void __i686_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.bx @ 0x11120
void __x86_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x11259
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x1125d
void __x86_get_pc_thunk_di(void)
{
 return;
}

// Function: cdecl_func @ 0x11261
int cdecl_func(int param_1,int param_2)
{
 return param_2 + param_1;
}

// Function: call_cdecl @ 0x1127c
void call_cdecl(void)
{
 cdecl_func(5,10);
 return;
}

// Function: stdcall_func @ 0x1129b
int stdcall_func(int param_1,int param_2)
{
 return param_1 * param_2;
}

// Function: call_stdcall @ 0x112b7
void call_stdcall(void)
{
 stdcall_func(5,10);
 return;
}

// Function: fastcall_func @ 0x112d3
int __attribute__((regparm(3))) fastcall_func(unsigned int param_1,int param_2,int param_3)
{
 return param_1 + param_3 + param_2;
}

// Function: call_fastcall @ 0x112fe
void call_fastcall(void)
{
 fastcall_func(1,2,3);
 return;
}

// Function: call_thiscall @ 0x11322
unsigned int call_thiscall(void)
{
 return 0xf;
}

// Function: arm_aapcs_func @ 0x1133a
int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 return param_5 + param_1 + param_2 + param_3 + param_4;
}

// Function: call_arm_aapcs @ 0x11364
void call_arm_aapcs(void)
{
 arm_aapcs_func(1,2,3,4,5);
 return;
}

// Function: mips_func @ 0x11389
int mips_func(int param_1,int param_2,int param_3,int param_4)
{
 return param_4 + param_1 + param_2 + param_3;
}

// Function: call_mips @ 0x113ae
void call_mips(void)
{
 mips_func(10,0x14,0x1e,0x28);
 return;
}

// Function: amd64_sysv_func @ 0x113d1
int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
{
 return param_6 + param_1 + param_2 + param_3 + param_4 + param_5;
}

// Function: call_amd64_sysv @ 0x11400
void call_amd64_sysv(void)
{
 amd64_sysv_func(1,2,3,4,5,6);
 return;
}

// Function: ms_x64_func @ 0x11427
int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 return param_5 + param_1 + param_2 + param_3 + param_4;
}

// Function: call_ms_x64 @ 0x11451
void call_ms_x64(void)
{
 ms_x64_func(1,2,3,4,5);
 return;
}

// Function: vectorcall_func @ 0x11476
int vectorcall_func(int param_1,int param_2,int param_3,int param_4)
{
 return param_4 + param_1 + param_2 + param_3;
}

// Function: call_vectorcall @ 0x1149b
void call_vectorcall(void)
{
 vectorcall_func(1,2,3,4);
 return;
}

// Function: mixed_conventions_test @ 0x114be
int mixed_conventions_test(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar1 = cdecl_func(1,2);
 iVar2 = stdcall_func(3,4);
 iVar3 = fastcall_func(5,6,7);
 return iVar1 + iVar2 + iVar3;
}

// Function: varargs_func @ 0x1150d
int varargs_func(int param_1, ...)
{
 int in_GS_OFFSET;
 int *local_1c;
 int local_18;
 int local_14;
 local_18 = 0;
 local_1c = (int *)&stack0x00000008;
 for (local_14 = 0; local_14 < param_1; local_14 = local_14 + 1) {
 local_18 = local_18 + *local_1c;
 local_1c = local_1c + 1;
 }
 if (*(int *)(in_GS_OFFSET + 0x14) != *(int *)(in_GS_OFFSET + 0x14)) {
 local_18 = __stack_chk_fail_local();
 }
 return local_18;
}

// Function: func_no_args @ 0x11572
unsigned int func_no_args(void)
{
 return 0x2a;
}

// Function: func_many_args @ 0x1158a
int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
 int param_7,int param_8)
{
 return param_8 + param_1 + param_2 + param_3 + param_4 + param_5 + param_6 + param_7;
}

// Function: func_mixed_args @ 0x115c3
int func_mixed_args(int param_1,int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5
 ,unsigned int param_6)
{
 int iVar1;
 if (param_2 == 0) {
 iVar1 = 0;
 }
 else {
 iVar1 = FUN_000110e0(param_2);
 }
 return (int)ROUND((double)CONCAT44(param_6,param_5) +
 (double)(iVar1 + param_1) + (double)CONCAT44(param_4,param_3));
}

// Function: func_struct_byval @ 0x11645
int func_struct_byval(void)
{
 int local_10;
 int local_c;
 local_c = 0;
 for (local_10 = 0; local_10 < 0x10; local_10 = local_10 + 1) {
 local_c = local_c + *(int *)(&stack0x00000004 + local_10 * 8);
 }
 return local_c;
}

// Function: func_struct_byptr @ 0x11690
int func_struct_byptr(int *param_1)
{
 int iVar1;
 if (param_1 == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = param_1[1] * *param_1;
 }
 return iVar1;
}

// Function: test_calling_conventions @ 0x116be
void test_calling_conventions(void)
{
 int iVar1;
 int *piVar2;
 int *piVar3;
 int in_GS_OFFSET;
 byte bVar4;
 int aiStack_14c [23];
 unsigned int uStack_f0;
 unsigned int uStack_ec;
 char *puStack_e8;
 unsigned long long local_e4;
 char *pcStack_dc;
 unsigned int uStack_d8;
 unsigned int uStack_d4;
 unsigned int uStack_d0;
 int local_c8;
 unsigned int local_c4;
 unsigned int local_c0;
 unsigned int local_bc;
 char *local_b8;
 unsigned int local_b4;
 unsigned int local_b0;
 unsigned int local_ac;
 unsigned int local_a8;
 unsigned int local_a4;
 int local_a0 [36];
 bVar4 = 0;
 uStack_d0 = 0x116d3;
 local_a0[32] = *(int *)(in_GS_OFFSET + 0x14);
 pcStack_dc = &DAT_00013008;
 local_e4 = CONCAT44(0x116f3,(unsigned int)local_e4);
 FUN_000110d0("");
 uStack_d0 = 0x116fb;
 call_cdecl();
 uStack_d8 = 0;
 pcStack_dc = "CALL-L1-01: %d\n";
 local_e4 = CONCAT44(0x1170b,(unsigned int)local_e4);
 FUN_000110b0(pcStack_dc, uStack_d8);
 uStack_d0 = 0x11713;
 call_stdcall();
 uStack_d8 = 0;
 pcStack_dc = "CALL-L1-02: %d\n";
 local_e4 = CONCAT44(0x11723,(unsigned int)local_e4);
 FUN_000110b0(pcStack_dc, uStack_d8);
 uStack_d0 = 0x1172b;
 call_fastcall();
 uStack_d8 = 0;
 pcStack_dc = "CALL-L1-03: %d\n";
 local_e4 = CONCAT44(0x1173b,(unsigned int)local_e4);
 FUN_000110b0(pcStack_dc, uStack_d8);
 uStack_d0 = 0x11743;
 call_thiscall();
 uStack_d8 = 0;
 pcStack_dc = "CALL-L1-04: %d\n";
 local_e4 = CONCAT44(0x11753,(unsigned int)local_e4);
 FUN_000110b0(pcStack_dc, uStack_d8);
 uStack_d0 = 0x1175b;
 call_arm_aapcs();
 uStack_d8 = 0;
 pcStack_dc = "CALL-L1-05: %d\n";
 local_e4 = CONCAT44(0x1176b,(unsigned int)local_e4);
 FUN_000110b0(pcStack_dc, uStack_d8);
 uStack_d0 = 0x11773;
 call_mips();
 uStack_d8 = 0;
 pcStack_dc = "CALL-L1-06: %d\n";
 local_e4 = CONCAT44(0x11783,(unsigned int)local_e4);
 FUN_000110b0(pcStack_dc, uStack_d8);
 uStack_d0 = 0x1178b;
 call_amd64_sysv();
 uStack_d8 = 0;
 pcStack_dc = "CALL-L1-07: %d\n";
 local_e4 = CONCAT44(0x1179b,(unsigned int)local_e4);
 FUN_000110b0(pcStack_dc, uStack_d8);
 uStack_d0 = 0x117a3;
 call_ms_x64();
 uStack_d8 = 0;
 pcStack_dc = "CALL-L1-08: %d\n";
 local_e4 = CONCAT44(0x117b3,(unsigned int)local_e4);
 FUN_000110b0(pcStack_dc, uStack_d8);
 uStack_d0 = 0x117bb;
 call_vectorcall();
 uStack_d8 = 0;
 pcStack_dc = "CALL-L1-09: %d\n";
 local_e4 = CONCAT44(0x117cb,(unsigned int)local_e4);
 FUN_000110b0(pcStack_dc, uStack_d8);
 uStack_d0 = 0x117d3;
 uStack_d8 = mixed_conventions_test();
 pcStack_dc = "CALL-L1-10: %d\n";
 local_e4 = CONCAT44(0x117e3,(unsigned int)local_e4);
 FUN_000110b0(pcStack_dc, uStack_d8);
 uStack_d8 = 5;
 pcStack_dc = (char *)0x4;
 local_e4 = 0x300000002;
 puStack_e8 = (char *)0x1;
 uStack_ec = 5;
 uStack_f0 = 0x117fa;
 uStack_d8 = varargs_func(5,10,0x14,0x1e,0x28);
 pcStack_dc = &DAT_000130cc;
 local_e4 = CONCAT44(0x11818,(unsigned int)local_e4);
 local_c4 = uStack_d8;
 FUN_000110b0(pcStack_dc, uStack_d8);
 uStack_d0 = 0x11820;
 uStack_d8 = func_no_args();
 pcStack_dc = &DAT_000130f4;
 local_e4 = CONCAT44(0x1183b,(unsigned int)local_e4);
 local_c0 = uStack_d8;
 FUN_000110b0(pcStack_dc, uStack_d8);
 uStack_d0 = 8;
 uStack_d4 = 7;
 uStack_d8 = 6;
 pcStack_dc = (char *)0x5;
 local_e4 = 0x400000003;
 puStack_e8 = (char *)0x2;
 uStack_ec = 1;
 uStack_f0 = 0x11853;
 uStack_d8 = func_many_args(1,2,3,4,5,6,7,8);
 pcStack_dc = &DAT_00013118;
 local_e4 = CONCAT44(0x11871,(unsigned int)local_e4);
 local_bc = uStack_d8;
 FUN_000110b0(pcStack_dc, uStack_d8);
 puStack_e8 = &DAT_0001313f;
 uStack_d8 = 0;
 pcStack_dc = (char *)0x64;
 local_e4 = 0x40091eb851eb851f;
 uStack_ec = 10;
 uStack_f0 = 0x118a1;
 local_b8 = puStack_e8;
 uStack_d8 = func_mixed_args(0,100,0,0,0,0);
 pcStack_dc = &DAT_00013144;
 local_e4 = CONCAT44(0x118bf,(unsigned int)local_e4);
 local_b4 = uStack_d8;
 FUN_000110b0(pcStack_dc, uStack_d8);
 for (local_c8 = 0; local_c8 < 0x10; local_c8 = local_c8 + 1) {
 local_a0[local_c8 * 2] = local_c8 + 1;
 local_a0[local_c8 * 2 + 1] = local_c8 + 1 >> 0x1f;
 }
 piVar2 = local_a0;
 piVar3 = aiStack_14c;
 for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
 *piVar3 = *piVar2;
 piVar2 = piVar2 + (uint)bVar4 * -2 + 1;
 piVar3 = piVar3 + (uint)bVar4 * -2 + 1;
 }
 uStack_d8 = func_struct_byval();
 pcStack_dc = &DAT_0001316c;
 local_e4 = CONCAT44(0x11937,(unsigned int)local_e4);
 local_b0 = uStack_d8;
 FUN_000110b0(pcStack_dc, uStack_d8);
 local_a8 = 5;
 local_a4 = 10;
 pcStack_dc = (char *)&local_a8;
 local_e4 = CONCAT44(0x1195d,(unsigned int)local_e4);
 uStack_d8 = func_struct_byptr((int *)&local_a8);
 pcStack_dc = &DAT_00013198;
 local_e4 = CONCAT44(0x1197b,(unsigned int)local_e4);
 local_ac = uStack_d8;
 FUN_000110b0(pcStack_dc, uStack_d8);
 if (local_a0[32] != *(int *)(in_GS_OFFSET + 0x14)) {
 uStack_d0 = 0x11990;
 __stack_chk_fail_local();
 }
 return;
}

// Function: param_by_value_int @ 0x11998
int param_by_value_int(int param_1)
{
 return param_1 << 1;
}

// Function: call_by_value_int @ 0x119b1
int call_by_value_int(void)
{
 int iVar1;
 iVar1 = param_by_value_int(5);
 return iVar1 + 5;
}

// Function: param_by_value_ptr @ 0x119e4
char param_by_value_ptr(int *param_1)
{
 *param_1 = *param_1 * 2;
 return 1;
}

// Function: call_by_value_ptr @ 0x11a15
int call_by_value_ptr(void)
{
 int iVar1;
 int in_GS_OFFSET;
 int local_1c;
 int *local_18;
 int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_1c = 5;
 local_18 = &local_1c;
 local_14 = param_by_value_ptr(local_18);
 iVar1 = local_14 + local_1c;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local();
 }
 return iVar1;
}

// Function: param_array_decay @ 0x11a6a
unsigned int param_array_decay(unsigned int *arr, int size)
{
 return 4;
}

// Function: call_array_decay @ 0x11a82
unsigned int call_array_decay(void)
{
 int iVar1;
 unsigned int *puVar2;
 int in_GS_OFFSET;
 unsigned int local_38 [10];
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 puVar2 = local_38;
 for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
 *puVar2 = 0;
 puVar2 = puVar2 + 1;
 }
 unsigned int ret = param_array_decay(local_38,10);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return ret;
}

// Function: param_string @ 0x11ad7
int param_string(char *param_1)
{
 return (int)param_1[1] + (int)*param_1;
}

// Function: call_string_param @ 0x11b01
int call_string_param(void)
{
 return param_string("Hello");
}

// Function: param_ptr_array @ 0x11b23
int param_ptr_array(int param_1,int param_2)
{
 int local_c;
 int local_8;
 local_c = 0;
 for (local_8 = 0; local_8 < param_2; local_8 = local_8 + 1) {
 local_c = local_c + **(char **)(param_1 + local_8 * 4);
 }
 return local_c;
}

// Function: call_ptr_array @ 0x11b72
int call_ptr_array(void)
{
 int in_GS_OFFSET;
 char *local_1c;
 char *local_18;
 char *local_14;
 int local_10;
 int ret;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_1c = &DAT_000131cb;
 local_18 = &DAT_000131cf;
 local_14 = &DAT_000131d3;
 ret = param_ptr_array((int)&local_1c,3);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return ret;
}

// Function: param_varargs @ 0x11bce
int param_varargs(int param_1, ...)
{
 int in_GS_OFFSET;
 int *local_1c;
 int local_18;
 int local_14;
 local_18 = 0;
 local_1c = (int *)&stack0x00000008;
 for (local_14 = 0; local_14 < param_1; local_14 = local_14 + 1) {
 local_18 = local_18 + *local_1c;
 local_1c = local_1c + 1;
 }
 if (*(int *)(in_GS_OFFSET + 0x14) != *(int *)(in_GS_OFFSET + 0x14)) {
 local_18 = __stack_chk_fail_local();
 }
 return local_18;
}

// Function: call_varargs_param @ 0x11c33
int call_varargs_param(void)
{
 return param_varargs(4,10,0x14,0x1e,0x28);
}

// Function: param_func_ptr @ 0x11c5e
int param_func_ptr(int (*param_1)(int),unsigned int param_2)
{
 int iVar1;
 iVar1 = param_1(param_2);
 return iVar1 + 10;
}

// Function: callback_func @ 0x11c85
int callback_func(int param_1)
{
 return param_1 * 2;
}

// Function: call_func_ptr_param @ 0x11c9d
int call_func_ptr_param(void)
{
 return param_func_ptr(callback_func,5);
}

// Function: param_double_ptr @ 0x11cc7
unsigned int param_double_ptr(int *param_1,unsigned int param_2)
{
 unsigned int uVar1;
 if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
 uVar1 = 0xffffffff;
 }
 else {
 *(unsigned int *)*param_1 = param_2;
 *param_1 = 0;
 uVar1 = 1;
 }
 return uVar1;
}

// Function: call_double_ptr @ 0x11d08
int call_double_ptr(void)
{
 int iVar1;
 int in_GS_OFFSET;
 int local_1c;
 int *local_18;
 unsigned int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_1c = 10;
 local_18 = &local_1c;
 local_14 = param_double_ptr(&local_18,0x14);
 iVar1 = local_1c + (uint)(local_18 == (int *)0x0);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local();
 }
 return iVar1;
}

// Function: param_complex_cast @ 0x11d68
int param_complex_cast(int *param_1,int param_2)
{
 int iVar1;
 if (param_2 == 0) {
 iVar1 = *param_1;
 }
 else if (param_2 == 1) {
 iVar1 = param_1[1] + *param_1;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}

// Function: call_complex_cast @ 0x11dbd
int call_complex_cast(void)
{
 int in_GS_OFFSET;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned int local_14;
 int local_10;
 int ret1, ret2;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_1c = 0x12345678;
 local_18 = 100;
 local_14 = 200;
 ret1 = param_complex_cast((int *)&local_18,1);
 ret2 = param_complex_cast((int *)&local_1c,0);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return ret1 + ret2;
}

// Function: param_struct_byval @ 0x11e20
int param_struct_byval(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
 int param_7, int param_8, int param_9, int param_10, int param_11, int param_12,
 int param_13, int param_14, int param_15, int param_16)
{
 return param_11 + param_1;
}

// Function: call_struct_byval @ 0x11e3b
void call_struct_byval(void)
{
 int in_GS_OFFSET;
 int local_54;
 int local_50 [16];
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 for (local_54 = 0; local_54 < 0x10; local_54 = local_54 + 1) {
 local_50[local_54] = local_54;
 }
 param_struct_byval(local_50[0],local_50[1],local_50[2],local_50[3],local_50[4],local_50[5],
 local_50[6],local_50[7],local_50[8],local_50[9],local_50[10],local_50[11],
 local_50[12],local_50[13],local_50[14],local_50[15]);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return;
}

// Function: param_order_dep @ 0x11ec2
int param_order_dep(int param_1,int param_2)
{
 return param_2 + param_1;
}

// Function: call_order_dep @ 0x11edd
int call_order_dep(void)
{
 return param_order_dep(2,2);
}

// Function: test_parameter_passing @ 0x11f10
void test_parameter_passing(void)
{
 unsigned int uVar1;
 FUN_000110d0("%s", &DAT_000131d8);
 uVar1 = call_by_value_int();
 FUN_000110b0("PARAM-L1-01: %d\n", uVar1);
 uVar1 = call_by_value_ptr();
 FUN_000110b0("PARAM-L1-02: %d\n", uVar1);
 uVar1 = call_array_decay();
 FUN_000110b0("PARAM-L2-01: %d\n", uVar1);
 uVar1 = call_string_param();
 FUN_000110b0("PARAM-L2-02: %d\n", uVar1);
 uVar1 = call_ptr_array();
 FUN_000110b0("PARAM-L2-03: %d\n", uVar1);
 uVar1 = call_varargs_param();
 FUN_000110b0("PARAM-L2-04: %d\n", uVar1);
 uVar1 = call_func_ptr_param();
 FUN_000110b0("PARAM-L3-01: %d\n", uVar1);
 uVar1 = call_double_ptr();
 FUN_000110b0("PARAM-L3-02: %d\n", uVar1);
 uVar1 = call_complex_cast();
 FUN_000110b0("PARAM-L3-03: %d\n", uVar1);
 call_struct_byval();
 FUN_000110b0("PARAM-L3-04: %d\n", 0);
 uVar1 = call_order_dep();
 FUN_000110b0("PARAM-L3-05: %d\n", uVar1);
 return;
}

// Function: ret_basic_type @ 0x12046
int ret_basic_type(int param_1)
{
 return param_1 * 2;
}

// Function: call_ret_basic @ 0x1205e
unsigned int call_ret_basic(void)
{
 unsigned int uVar1;
 uVar1 = ret_basic_type(0x15);
 return uVar1;
}

// Function: ret_pointer @ 0x1208c
int ret_pointer(int param_1)
{
 return param_1 + 4;
}

// Function: call_ret_pointer @ 0x120a5
unsigned int call_ret_pointer(void)
{
 unsigned int *puVar1;
 unsigned int uVar2;
 int in_GS_OFFSET;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_1c = 10;
 local_18 = 0x14;
 local_14 = 0x1e;
 puVar1 = (unsigned int *)ret_pointer(&local_1c);
 uVar2 = *puVar1;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 uVar2 = __stack_chk_fail_local();
 }
 return uVar2;
}

// Function: ret_small_struct @ 0x12100
unsigned int * ret_small_struct(unsigned int *param_1,unsigned int param_2,unsigned int param_3)
{
 *param_1 = param_2;
 param_1[1] = param_3;
 return param_1;
}

// Function: call_ret_small_struct @ 0x12135
int call_ret_small_struct(void)
{
 int in_GS_OFFSET;
 int local_18;
 int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_14 = 0;
 ret_small_struct(&local_18,3,4);
 local_14 = local_14 + local_18;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 local_14 = __stack_chk_fail_local();
 }
 return local_14;
}

// Function: ret_large_struct @ 0x1217f
int * ret_large_struct(int *param_1,int param_2)
{
 int in_GS_OFFSET;
 int local_54;
 int local_50 [16];
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 for (local_54 = 0; local_54 < 0x10; local_54 = local_54 + 1) {
 local_50[local_54] = param_2 + local_54;
 }
 *param_1 = local_50[0];
 param_1[1] = local_50[1];
 param_1[2] = local_50[2];
 param_1[3] = local_50[3];
 param_1[4] = local_50[4];
 param_1[5] = local_50[5];
 param_1[6] = local_50[6];
 param_1[7] = local_50[7];
 param_1[8] = local_50[8];
 param_1[9] = local_50[9];
 param_1[10] = local_50[10];
 param_1[0xb] = local_50[11];
 param_1[0xc] = local_50[12];
 param_1[0xd] = local_50[13];
 param_1[0xe] = local_50[14];
 param_1[0xf] = local_50[15];
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return param_1;
}

// Function: call_ret_large_struct @ 0x12240
int call_ret_large_struct(void)
{
 int in_GS_OFFSET;
 unsigned int uVar1;
 int local_50 [15];
 int local_14;
 int local_10;
 uVar1 = 0x1224f;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 ret_large_struct(local_50,100);
 local_14 = local_14 + local_50[0];
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return local_14;
}

// Function: func_a @ 0x1228b
int func_a(int param_1)
{
 return param_1 + 10;
}

// Function: func_b @ 0x122a4
int func_b(int param_1)
{
 return param_1 * 2;
}

// Function: ret_func_ptr @ 0x122bc
void * ret_func_ptr(int param_1)
{
 void *pcVar1;
 if (param_1 == 0) {
 pcVar1 = func_a;
 }
 else {
 pcVar1 = func_b;
 }
 return pcVar1;
}

// Function: call_ret_func_ptr @ 0x122e3
int call_ret_func_ptr(void)
{
 int (*pcVar1)(int);
 pcVar1 = ret_func_ptr(1);
 return pcVar1(5);
}

// Function: ret_opaque_handle @ 0x12313
unsigned long long * ret_opaque_handle(int param_1)
{
 unsigned long long *puVar1;
 if (param_1 == 0) {
 puVar1 = (unsigned long long *)&handle1_1;
 }
 else {
 puVar1 = &handle2_0;
 }
 return puVar1;
}

// Function: call_ret_opaque @ 0x1233a
unsigned int call_ret_opaque(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)ret_opaque_handle(0);
 return *puVar1;
}

// Function: ret_complex_expr @ 0x12362
int ret_complex_expr(int param_1,int param_2,int param_3)
{
 if (param_2 < param_1) {
 param_3 = param_3 * 2;
 }
 else {
 param_3 = param_3 + 10;
 }
 return param_3;
}

// Function: call_ret_complex_expr @ 0x1238a
int call_ret_complex_expr(void)
{
 int iVar1;
 int iVar2;
 iVar1 = ret_complex_expr(5,3,10);
 iVar2 = ret_complex_expr(3,5,10);
 return iVar2 + iVar1;
}

// Function: ret_multi_branch @ 0x123ca
unsigned int ret_multi_branch(int param_1)
{
 if (param_1 == 2) {
 return 0x1e;
 }
 if (param_1 < 3) {
 if (param_1 == 0) {
 return 10;
 }
 if (param_1 == 1) {
 return 0x14;
 }
 }
 return 0xffffffff;
}

// Function: call_ret_multi_branch @ 0x12411
int call_ret_multi_branch(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar1 = ret_multi_branch(0);
 iVar2 = ret_multi_branch(1);
 iVar3 = ret_multi_branch(2);
 return iVar1 + iVar2 + iVar3;
}

// Function: ret_void @ 0x12458
void ret_void(int param_1,int *param_2)
{
 *param_2 = param_1 * 3;
 return;
}

// Function: call_ret_void @ 0x1247a
unsigned int call_ret_void(void)
{
 int in_GS_OFFSET;
 unsigned int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 ret_void(7,&local_14);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 local_14 = __stack_chk_fail_local();
 }
 return local_14;
}

// Function: test_return_values @ 0x124bd
void test_return_values(void)
{
 unsigned int uVar1;
 FUN_000110d0(&DAT_000132b4);
 uVar1 = call_ret_basic();
 FUN_000110b0(&DAT_000132d2, uVar1);
 uVar1 = call_ret_pointer();
 FUN_000110b0(&DAT_000132ee, uVar1);
 uVar1 = call_ret_small_struct();
 FUN_000110b0(&DAT_0001330a, uVar1);
 uVar1 = call_ret_large_struct();
 FUN_000110b0(&DAT_00013325, uVar1);
 uVar1 = call_ret_func_ptr();
 FUN_000110b0(&DAT_00013342, uVar1);
 uVar1 = call_ret_opaque();
 FUN_000110b0(&DAT_0001335e, uVar1);
 uVar1 = call_ret_complex_expr();
 FUN_000110b0(&DAT_0001337b, uVar1);
 uVar1 = call_ret_multi_branch();
 FUN_000110b0(&DAT_00013397, uVar1);
 uVar1 = call_ret_void();
 FUN_000110b0(&DAT_000133b3, uVar1);
 return;
}

// Function: main @ 0x125c3
unsigned int main(void)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}

// Function: __x86.get_pc_thunk.ax @ 0x125ed
unsigned int __x86_get_pc_thunk_ax(void)
{
 unsigned int unaff_retaddr;
 return unaff_retaddr;
}

// Function: __stack_chk_fail_local @ 0x12600
void __stack_chk_fail_local(void)
{
 FUN_000110c0();
 return;
}

// Function: __do_global_ctors_aux @ 0x12620
void __do_global_ctors_aux(void)
{
 return;
}



