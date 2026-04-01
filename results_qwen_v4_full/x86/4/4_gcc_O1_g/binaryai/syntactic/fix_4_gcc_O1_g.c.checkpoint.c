// Decompiled by BinaryAI
// SHA256: a06e9b09618546b00b2b0a89e5afb5415a56aaa54a4bebb797adaadabcf3b774

#include <stdbool.h>

typedef unsigned int uint;
typedef unsigned char byte;
typedef long long longlong;

#define ROUND(x) ((int)(x))
#define CONCAT44(hi, lo) (((longlong)(hi) << 32) | (lo))

unsigned int handle1_1 = 0;
unsigned int handle2_0 = 0;

// External declarations for decompiled code artifacts
int stack0x00000004 = 0;
int stack0x00000008 = 0;
int stack0x00000084 = 0;

// Forward declaration for main
unsigned int main(void);
extern char DAT_00012008[];
extern char DAT_0001202c[];
extern char DAT_00012054[];
extern char DAT_00012078[];
extern char DAT_000120a0[];
extern char DAT_000120c8[];
extern char DAT_000120f4[];
extern char DAT_00012124[];
extern char DAT_000121e5[];
extern char DAT_000121e9[];
extern char DAT_000121ed[];
extern char DAT_000122ac[];
extern char DAT_000122ca[];
extern char DAT_000122e6[];
extern char DAT_00012302[];
extern char DAT_0001231d[];
extern char DAT_0001233a[];
extern char DAT_00012356[];
extern char DAT_00012373[];
extern char DAT_0001238f[];
extern char DAT_000123ab[];



// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 return;
}

// Function: FUN_00011090 @ 0x11090
void FUN_00011090(unsigned int param_1)
{
 return;
}

// Function: FUN_000110a0 @ 0x110a0
void FUN_000110a0(void *param_1, unsigned int param_2, void *param_3, unsigned int param_4, unsigned int param_5, unsigned int param_6, void *param_7)
{
 return;
}

// Function: FUN_000110b0 @ 0x110b0
void FUN_000110b0(void)
{
 return;
}

// Function: FUN_000110c0 @ 0x110c0
void FUN_000110c0(char *param_1)
{
 return;
}

// Function: FUN_000110d0 @ 0x110d0
int FUN_000110d0(unsigned int param_1)
{
 return param_1;
}

// Function: FUN_000110e0 @ 0x110e0
int FUN_000110e0(int param_1, char *param_2, ...)
{
 return 0;
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

// Function: callback_func @ 0x11261
int callback_func(int param_1)
{
 return param_1 * 2;
}

// Function: func_a @ 0x1126c
int func_a(int param_1)
{
 return param_1 + 10;
}

// Function: func_b @ 0x11278
int func_b(int param_1)
{
 return param_1 * 2;
}

// Function: cdecl_func @ 0x11283
int cdecl_func(int param_1,int param_2)
{
 return param_2 + param_1;
}

// Function: call_cdecl @ 0x11290
unsigned int call_cdecl(void)
{
 return 0xf;
}

// Function: stdcall_func @ 0x1129a
int stdcall_func(int param_1,int param_2)
{
 return param_2 * param_1;
}

// Function: call_stdcall @ 0x112aa
unsigned int call_stdcall(void)
{
 return 0x32;
}

// Function: fastcall_func @ 0x112b4
int __attribute__((regparm(3))) fastcall_func(unsigned int param_1_00,int param_2,int param_3,int param_1)
{
 return param_3 + param_2 + param_1;
}

// Function: call_fastcall @ 0x112c2
unsigned int call_fastcall(void)
{
 return 6;
}

// Function: call_thiscall @ 0x112cc
unsigned int call_thiscall(void)
{
 return 0xf;
}

// Function: arm_aapcs_func @ 0x112d6
int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 return param_2 + param_1 + param_3 + param_4 + param_5;
}

// Function: call_arm_aapcs @ 0x112ef
unsigned int call_arm_aapcs(void)
{
 return 0xf;
}

// Function: mips_func @ 0x112f9
int mips_func(int param_1,int param_2,int param_3,int param_4)
{
 return param_2 + param_1 + param_3 + param_4;
}

// Function: call_mips @ 0x1130e
unsigned int call_mips(void)
{
 return 100;
}

// Function: amd64_sysv_func @ 0x11318
int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
{
 return param_2 + param_1 + param_3 + param_4 + param_5 + param_6;
}

// Function: call_amd64_sysv @ 0x11335
unsigned int call_amd64_sysv(void)
{
 return 0x15;
}

// Function: ms_x64_func @ 0x1133f
int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 return param_2 + param_1 + param_3 + param_4 + param_5;
}

// Function: call_ms_x64 @ 0x11358
unsigned int call_ms_x64(void)
{
 return 0xf;
}

// Function: vectorcall_func @ 0x11362
int vectorcall_func(int param_1,int param_2,int param_3,int param_4)
{
 return param_2 + param_1 + param_3 + param_4;
}

// Function: call_vectorcall @ 0x11377
unsigned int call_vectorcall(void)
{
 return 10;
}

// Function: mixed_conventions_test @ 0x11381
unsigned int mixed_conventions_test(void)
{
 return 0x21;
}

// Function: varargs_func @ 0x1138b
int varargs_func(int param_1, ...)
{
 int *piVar1;
 int iVar2;
 int iVar3;
 if (param_1 < 1) {
 iVar2 = 0;
 }
 else {
 iVar3 = 0;
 iVar2 = 0;
 piVar1 = (int *)&stack0x00000008;
 do {
 iVar2 = iVar2 + *piVar1;
 iVar3 = iVar3 + 1;
 piVar1 = piVar1 + 1;
 } while (param_1 != iVar3);
 }
 return iVar2;
}

// Function: func_no_args @ 0x113c1
unsigned int func_no_args(void)
{
 return 0x2a;
}

// Function: func_many_args @ 0x113cb
int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
 int param_7,int param_8)
{
 return param_2 + param_1 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}

// Function: func_mixed_args @ 0x113f0
int func_mixed_args(int param_1,int param_2,double param_3,unsigned int param_4,unsigned int param_5)
{
 int iVar1;
 longlong local_1c;
 iVar1 = 0;
 if (param_2 != 0) {
 iVar1 = FUN_000110d0(param_2);
 }
 local_1c = CONCAT44(param_5,param_4);
 return (int)ROUND((double)local_1c + (double)(iVar1 + param_1) + param_3);
}

// Function: func_struct_byval @ 0x1146e
int func_struct_byval(void)
{
 int iVar1;
 int *piVar2;
 piVar2 = (int *)&stack0x00000004;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *piVar2;
 piVar2 = piVar2 + 2;
 } while (piVar2 != (int *)&stack0x00000084);
 return iVar1;
}

// Function: func_struct_byptr @ 0x11498
int func_struct_byptr(int *param_1)
{
 if (param_1 != (int *)0x0) {
 return *param_1 * param_1[1];
 }
 return -1;
}

// Function: test_calling_conventions @ 0x114b1
void test_calling_conventions(void)
{
 unsigned int uVar1;
 uint uVar2;
 uint *puVar3;
 int iVar4;
 uint uVar5;
 uint *puVar6;
 int in_GS_OFFSET;
 bool bVar7;
 byte bVar8;
 uint auStack_118 [34];
 uint local_90 [32];
 uint local_10;
 bVar8 = 0;
 local_10 = *(uint *)(in_GS_OFFSET + 0x14);
 FUN_000110c0(&DAT_00012008);
 FUN_000110e0(1,"CALL-L1-01: %d\n",0xf);
 FUN_000110e0(1,"CALL-L1-02: %d\n",0x32);
 FUN_000110e0(1,"CALL-L1-03: %d\n",6);
 FUN_000110e0(1,"CALL-L1-04: %d\n",0xf);
 FUN_000110e0(1,"CALL-L1-05: %d\n",0xf);
 FUN_000110e0(1,"CALL-L1-06: %d\n",100);
 FUN_000110e0(1,"CALL-L1-07: %d\n",0x15);
 FUN_000110e0(1,"CALL-L1-08: %d\n",0xf);
 FUN_000110e0(1,"CALL-L1-09: %d\n",10);
 FUN_000110e0(1,"CALL-L1-10: %d\n",0x21);
 uVar1 = varargs_func(5,1,2,3,4,5);
 FUN_000110e0(1,&DAT_0001202c,uVar1);
 FUN_000110e0(1,&DAT_00012054,0x2a);
 FUN_000110e0(1,&DAT_00012078,0x24);
 FUN_000110e0(1,&DAT_000120a0,0x75);
 uVar2 = 1;
 uVar5 = 0;
 do {
 auStack_118[uVar2 * 2] = uVar2;
 auStack_118[uVar2 * 2 + 1] = uVar5;
 bVar7 = 0xfffffffe < uVar2;
 uVar2 = uVar2 + 1;
 uVar5 = uVar5 + bVar7;
 } while ((uVar5 | uVar2 ^ 0x11) != 0);
 puVar3 = auStack_118 + 2;
 puVar6 = local_90;
 for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
 *puVar6 = *puVar3;
 puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
 puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
 }
 puVar3 = local_90;
 iVar4 = 0;
 do {
 iVar4 = iVar4 + *puVar3;
 puVar3 = puVar3 + 2;
 } while (&local_10 != puVar3);
 FUN_000110e0(1,&DAT_000120c8,iVar4);
 FUN_000110e0(1,&DAT_000120f4,0x32);
 if (local_10 == *(uint *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 __stack_chk_fail_local();
}

// Function: param_by_value_int @ 0x116af
int param_by_value_int(int param_1)
{
 return param_1 * 2;
}

// Function: call_by_value_int @ 0x116ba
unsigned int call_by_value_int(void)
{
 return 0xf;
}

// Function: param_by_value_ptr @ 0x116c4
unsigned int param_by_value_ptr(int *param_1)
{
 *param_1 = *param_1 << 1;
 return 1;
}

// Function: call_by_value_ptr @ 0x116d4
unsigned int call_by_value_ptr(void)
{
 return 0xb;
}

// Function: param_array_decay @ 0x116de
unsigned int param_array_decay(void)
{
 return 4;
}

// Function: call_array_decay @ 0x116e8
unsigned int call_array_decay(void)
{
 return 4;
}

// Function: param_string @ 0x116f2
int param_string(char *param_1)
{
 return (int)*param_1 + (int)param_1[1];
}

// Function: call_string_param @ 0x11704
unsigned int call_string_param(void)
{
 return 0xad;
}

// Function: param_ptr_array @ 0x1170e
int param_ptr_array(char **param_1,int param_2)
{
 char **ppcVar1;
 int iVar2;
 if (param_2 < 1) {
 iVar2 = 0;
 }
 else {
 ppcVar1 = param_1 + param_2;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + **param_1;
 param_1 = param_1 + 1;
 } while (param_1 != ppcVar1);
 }
 return iVar2;
}

// Function: call_ptr_array @ 0x11742
unsigned int call_ptr_array(void)
{
 int in_GS_OFFSET;
 char *local_1c;
 char *local_18;
 char *local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_1c = &DAT_000121e5;
 local_18 = &DAT_000121e9;
 local_14 = &DAT_000121ed;
 param_ptr_array(&local_1c,3);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return 0;
 }
 __stack_chk_fail_local();
}

// Function: param_varargs @ 0x117a2
int param_varargs(int param_1)
{
 int *piVar1;
 int iVar2;
 int iVar3;
 if (param_1 < 1) {
 iVar2 = 0;
 }
 else {
 iVar3 = 0;
 iVar2 = 0;
 piVar1 = (int *)&stack0x00000008;
 do {
 iVar2 = iVar2 + *piVar1;
 iVar3 = iVar3 + 1;
 piVar1 = piVar1 + 1;
 } while (param_1 != iVar3);
 }
 return iVar2;
}

// Function: call_varargs_param @ 0x117d8
unsigned int call_varargs_param(void)
{
 param_varargs(4);
 return 0;
}

// Function: param_func_ptr @ 0x117ef
int param_func_ptr(int (*param_1)(unsigned int),unsigned int param_2)
{
 int iVar1;
 iVar1 = param_1(param_2);
 return iVar1 + 10;
}

// Function: call_func_ptr_param @ 0x11805
unsigned int call_func_ptr_param(void)
{
 param_func_ptr(&callback_func,5);
 return 0;
}

// Function: param_double_ptr @ 0x11828
unsigned int param_double_ptr(int *param_1,unsigned int param_2)
{
 if (param_1 == (int *)0x0) {
 return 0xffffffff;
 }
 if ((unsigned int *)*param_1 != (unsigned int *)0x0) {
 *(unsigned int *)*param_1 = param_2;
 *param_1 = 0;
 return 1;
 }
 return 0xffffffff;
}

// Function: call_double_ptr @ 0x11858
int call_double_ptr(void)
{
 int in_GS_OFFSET;
 int local_18;
 int *local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_18 = 10;
 local_14 = &local_18;
 param_double_ptr(&local_14,0x14);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return (uint)(local_14 == (int *)0x0) + local_18;
 }
 __stack_chk_fail_local();
}

// Function: param_complex_cast @ 0x118af
int param_complex_cast(int *param_1,int param_2)
{
 if (param_2 == 0) {
 return *param_1;
 }
 if (param_2 == 1) {
 return param_1[1] + *param_1;
 }
 return -1;
}

// Function: call_complex_cast @ 0x118d3
unsigned int call_complex_cast(void)
{
 return 0x12345678;
}

// Function: param_struct_byval @ 0x118dd
int param_struct_byval(int param_1)
{
 int param_11;
 return param_11 + param_1;
}

// Function: call_struct_byval @ 0x118ea
int call_struct_byval(void)
{
 int iVar1;
 int in_GS_OFFSET;
 int local_50 [16];
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = 0;
 do {
 local_50[iVar1] = iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x10);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return local_50[0] + local_50[15];
 }
 __stack_chk_fail_local();
}

// Function: param_order_dep @ 0x11927
int param_order_dep(int param_1,int param_2)
{
 return param_2 + param_1;
}

// Function: call_order_dep @ 0x11934
unsigned int call_order_dep(void)
{
 return 4;
}

// Function: test_parameter_passing @ 0x1193e
void test_parameter_passing(void)
{
 unsigned int uVar1;
 FUN_000110c0(&DAT_00012124);
 FUN_000110e0(1,"PARAM-L1-01: %d\n",0xf);
 uVar1 = call_by_value_ptr();
 FUN_000110e0(1,"PARAM-L1-02: %d\n",uVar1);
 FUN_000110e0(1,"PARAM-L2-01: %d\n",4);
 FUN_000110e0(1,"PARAM-L2-02: %d\n",0xad);
 uVar1 = call_ptr_array();
 FUN_000110e0(1,"PARAM-L2-03: %d\n",uVar1);
 uVar1 = call_varargs_param();
 FUN_000110e0(1,"PARAM-L2-04: %d\n",uVar1);
 uVar1 = call_func_ptr_param();
 FUN_000110e0(1,"PARAM-L3-01: %d\n",uVar1);
 uVar1 = call_double_ptr();
 FUN_000110e0(1,"PARAM-L3-02: %d\n",uVar1);
 uVar1 = call_complex_cast();
 FUN_000110e0(1,"PARAM-L3-03: %d\n",uVar1);
 uVar1 = call_struct_byval();
 FUN_000110e0(1,"PARAM-L3-04: %d\n",uVar1);
 FUN_000110e0(1,"PARAM-L3-05: %d\n",4);
 return;
}

// Function: ret_basic_type @ 0x11a52
int ret_basic_type(int param_1)
{
 return param_1 * 2;
}

// Function: call_ret_basic @ 0x11a5d
unsigned int call_ret_basic(void)
{
 return 0x2a;
}

// Function: ret_pointer @ 0x11a67
int ret_pointer(int param_1)
{
 return param_1 + 4;
}

// Function: call_ret_pointer @ 0x11a73
unsigned int call_ret_pointer(void)
{
 return 0x14;
}

// Function: ret_small_struct @ 0x11a7d
void ret_small_struct(unsigned int *param_1,unsigned int param_2,unsigned int param_3)
{
 *param_1 = param_2;
 param_1[1] = param_3;
 return;
}

// Function: call_ret_small_struct @ 0x11a95
unsigned int call_ret_small_struct(void)
{
 return 7;
}

// Function: ret_large_struct @ 0x11a9f
int * ret_large_struct(int *param_1,int param_2)
{
 int iVar1;
 int in_GS_OFFSET;
 int local_50 [4];
 int local_40;
 int local_3c;
 int local_38;
 int local_34;
 int local_30;
 int local_2c;
 int local_28;
 int local_24;
 int local_20;
 int local_1c;
 int local_18;
 int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = param_2;
 do {
 local_50[iVar1 - param_2] = iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != param_2 + 0x10);
 *param_1 = local_50[0];
 param_1[1] = local_50[1];
 param_1[2] = local_50[2];
 param_1[3] = local_50[3];
 param_1[4] = local_40;
 param_1[5] = local_3c;
 param_1[6] = local_38;
 param_1[7] = local_34;
 param_1[8] = local_30;
 param_1[9] = local_2c;
 param_1[10] = local_28;
 param_1[0xb] = local_24;
 param_1[0xc] = local_20;
 param_1[0xd] = local_1c;
 param_1[0xe] = local_18;
 param_1[0xf] = local_14;
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return param_1;
 }
 __stack_chk_fail_local();
}

// Function: call_ret_large_struct @ 0x11b5a
int call_ret_large_struct(void)
{
 int in_GS_OFFSET;
 int local_54;
 char local_50 [56];
 int local_18;
 int local_14;
 unsigned int local_10;
 local_10 = *(unsigned int *)(in_GS_OFFSET + 0x14);
 ret_large_struct(local_50,100);
 if (local_14 == *(int *)(in_GS_OFFSET + 0x14)) {
 return local_18 + local_54;
 }
 __stack_chk_fail_local();
}

// Function: ret_func_ptr @ 0x11b9d
void * ret_func_ptr(int param_1)
{
 void *pcVar1;
 pcVar1 = func_b;
 if (param_1 == 0) {
 pcVar1 = func_a;
 }
 return pcVar1;
}

// Function: call_ret_func_ptr @ 0x11bc0
unsigned int call_ret_func_ptr(void)
{
 int (*fp)(int) = ret_func_ptr(0);
 if (fp) fp(5);
 return 0;
}

// Function: ret_opaque_handle @ 0x11bcf
unsigned long long * ret_opaque_handle(int param_1)
{
 unsigned long long *puVar1;
 puVar1 = (unsigned long long *)&handle1_1;
 if (param_1 != 0) {
 puVar1 = &handle2_0;
 }
 return puVar1;
}

// Function: call_ret_opaque @ 0x11bf2
unsigned int call_ret_opaque(void)
{
 return handle1_1;
}

// Function: ret_complex_expr @ 0x11c07
int ret_complex_expr(int param_1,int param_2,int param_3)
{
 int iVar1;
 iVar1 = param_3 + 10;
 if (param_2 < param_1) {
 iVar1 = param_3 * 2;
 }
 return iVar1;
}

// Function: call_ret_complex_expr @ 0x11c21
unsigned int call_ret_complex_expr(void)
{
 return 0x28;
}

// Function: ret_multi_branch @ 0x11c2b
int ret_multi_branch(int param_1)
{
 int iVar1;
 iVar1 = 0x14;
 if ((param_1 != 1) && (iVar1 = 0x1e, param_1 != 2)) {
 iVar1 = (-(uint)(param_1 == 0) & 0xb) - 1;
 }
 return iVar1;
}

// Function: call_ret_multi_branch @ 0x11c53
unsigned int call_ret_multi_branch(void)
{
 return 0x3c;
}

// Function: ret_void @ 0x11c5d
void ret_void(int param_1,int *param_2)
{
 *param_2 = param_1 * 3;
 return;
}

// Function: call_ret_void @ 0x11c6f
unsigned int call_ret_void(void)
{
 return 0x15;
}

// Function: test_return_values @ 0x11c79
void test_return_values(void)
{
 unsigned int uVar1;
 FUN_000110c0(&DAT_000122ac);
 FUN_000110e0(1,&DAT_000122ca,0x2a);
 uVar1 = call_ret_pointer();
 FUN_000110e0(1,&DAT_000122e6,uVar1);
 uVar1 = call_ret_small_struct();
 FUN_000110e0(1,&DAT_00012302,uVar1);
 uVar1 = call_ret_large_struct();
 FUN_000110e0(1,&DAT_0001231d,uVar1);
 uVar1 = call_ret_func_ptr();
 FUN_000110e0(1,&DAT_0001233a,uVar1);
 FUN_000110e0(1,&DAT_00012356,handle1_1);
 FUN_000110e0(1,&DAT_00012373,0x28);
 FUN_000110e0(1,&DAT_0001238f,0x3c);
 FUN_000110e0(1,&DAT_000123ab,0x15);
 return;
}

// Function: main @ 0x11d5c
unsigned int main(void)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}

// Function: __x86.get_pc_thunk.ax @ 0x11d7c
unsigned int __x86_get_pc_thunk_ax(void)
{
 unsigned int unaff_retaddr;
 return unaff_retaddr;
}

// Function: __stack_chk_fail_local @ 0x11d80
void __stack_chk_fail_local(void)
{
 return;
}

// Function: __do_global_ctors_aux @ 0x11da0
void __do_global_ctors_aux(void)
{
 return;
}



