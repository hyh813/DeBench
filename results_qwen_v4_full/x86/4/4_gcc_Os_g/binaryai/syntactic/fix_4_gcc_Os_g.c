// Decompiled by BinaryAI
// SHA256: d5a7af445f9c74bcde8f2587c53e4ad3f8e6f61e5362c56b92f5e018f0b8f15b

typedef unsigned int uint;
typedef long long longlong;
typedef unsigned char byte;

// Global variables
unsigned long long handle1_1;
unsigned long long handle2_0;
char DAT_00012008[];
char DAT_000120c9[];
char DAT_000120f1[];
char DAT_00012113[];
char DAT_0001213a[];
char DAT_00012162[];
char DAT_0001218e[];
char DAT_000121c7[];
char DAT_000122a3[];
char DAT_000122c1[];
char DAT_000122dd[];
char DAT_000122f9[];
char DAT_00012314[];
char DAT_00012331[];
char DAT_0001234d[];
char DAT_0001236a[];
char DAT_00012386[];
char DAT_000123a2[];
char PTR_DAT_00014008[];

// External function declarations


void __do_global_ctors_aux(void);
void FUN_00011090(unsigned int param_1);
void FUN_000110a0(void *param_1,unsigned int param_2,void *param_3,unsigned int param_4,unsigned int param_5,unsigned int param_6,void *param_7);
void FUN_000110b0(void);
void FUN_000110c0(void *param_1);
void FUN_000110e0(int param_1,const char *param_2,...);
void __stack_chk_fail_local(void);
int __x86_get_pc_thunk_di(void);
int __x86_get_pc_thunk_dx(void);
unsigned int __x86_get_pc_thunk_ax(void);
int __x86_get_pc_thunk_bx(void);
int __i686_get_pc_thunk_bx(void);
void *memcpy(void *dest,const void *src,unsigned int n);
int printf(const char *format,...);
int FUN_000110d0(int param_1);



// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 ((void (*)(void))0x0)();
 return;
}

// Function: FUN_00011090 @ 0x11090
void FUN_00011090(unsigned int param_1)
{
 (*(void (*)(void))(param_1 + 0x24))();
 return;
}

// Function: FUN_000110a0 @ 0x110a0
void FUN_000110a0(void *param_1,unsigned int param_2,void *param_3,unsigned int param_4,unsigned int param_5,unsigned int param_6,void *param_7)
{
 ((void (*)(void *,unsigned int,void *,unsigned int,unsigned int,unsigned int,void *))param_1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
 return;
}

// Function: FUN_000110b0 @ 0x110b0
void FUN_000110b0(void)
{
 ((void (*)(void))0x0)();
 return;
}

// Function: FUN_000110c0 @ 0x110c0
void FUN_000110c0(void *param_1)
{
 ((void (*)(void *))param_1)(param_1);
 return;
}

// Function: FUN_000110d0 @ 0x110d0
int FUN_000110d0(int param_1)
{
 return param_1;
}

// Function: FUN_000110e0 @ 0x110e0
void FUN_000110e0(int param_1,const char *param_2,...)
{
 return;
}

// Function: main @ 0x110f0
unsigned int main(void)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}



// Function: __i686.get_pc_thunk.bx @ 0x1113c
int __i686_get_pc_thunk_bx(void)
{
 return 0;
}

// Function: __x86.get_pc_thunk.bx @ 0x11140
int __x86_get_pc_thunk_bx(void)
{
 return 0;
}







// Function: __x86.get_pc_thunk.dx @ 0x11279
int __x86_get_pc_thunk_dx(void)
{
 return 0;
}

// Function: __x86.get_pc_thunk.di @ 0x1127d
int __x86_get_pc_thunk_di(void)
{
 return 0;
}

// Function: func_a @ 0x11281
int func_a(int param_1)
{
 return param_1 + 10;
}

// Function: func_b @ 0x11290
int func_b(int param_1)
{
 return param_1 * 2;
}

// Function: callback_func @ 0x1129e
int callback_func(int param_1)
{
 return param_1 * 2;
}

// Function: cdecl_func @ 0x112ac
int cdecl_func(int param_1,int param_2)
{
 return param_2 + param_1;
}

// Function: call_cdecl @ 0x112bb
unsigned int call_cdecl(void)
{
 return 0xf;
}

// Function: stdcall_func @ 0x112c5
int stdcall_func(int param_1,int param_2)
{
 return param_2 * param_1;
}

// Function: call_stdcall @ 0x112d7
unsigned int call_stdcall(void)
{
 return 0x32;
}

// Function: fastcall_func @ 0x112e1
int fastcall_func(unsigned int param_1_00,int param_2,int param_3,int param_1)
{
 return param_3 + param_2 + param_1;
}

// Function: call_fastcall @ 0x112f2
unsigned int call_fastcall(void)
{
 return 6;
}

// Function: call_thiscall @ 0x112fc
unsigned int call_thiscall(void)
{
 return 0xf;
}

// Function: arm_aapcs_func @ 0x11306
int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 return param_2 + param_1 + param_3 + param_4 + param_5;
}

// Function: call_arm_aapcs @ 0x1131e
unsigned int call_arm_aapcs(void)
{
 return 0xf;
}

// Function: mips_func @ 0x11328
int mips_func(int param_1,int param_2,int param_3,int param_4)
{
 return param_2 + param_1 + param_3 + param_4;
}

// Function: call_mips @ 0x1133d
unsigned int call_mips(void)
{
 return 100;
}

// Function: amd64_sysv_func @ 0x11347
int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
{
 return param_2 + param_1 + param_3 + param_4 + param_5 + param_6;
}

// Function: call_amd64_sysv @ 0x11362
unsigned int call_amd64_sysv(void)
{
 return 0x15;
}

// Function: ms_x64_func @ 0x1136c
int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 return param_2 + param_1 + param_3 + param_4 + param_5;
}

// Function: call_ms_x64 @ 0x11384
unsigned int call_ms_x64(void)
{
 return 0xf;
}

// Function: vectorcall_func @ 0x1138e
int vectorcall_func(int param_1,int param_2,int param_3,int param_4)
{
 return param_2 + param_1 + param_3 + param_4;
}

// Function: call_vectorcall @ 0x113a3
unsigned int call_vectorcall(void)
{
 return 10;
}

// Function: mixed_conventions_test @ 0x113ad
unsigned int mixed_conventions_test(void)
{
 return 0x21;
}

// Function: varargs_func @ 0x113b7
int varargs_func(int param_1, ...)
{
 int iVar1;
 int iVar2;
 int args[10];
 iVar2 = 0;
 for (iVar1 = 0; iVar1 < param_1; iVar1 = iVar1 + 1) {
 iVar2 = iVar2 + args[iVar1];
 }
 return iVar2;
}

// Function: func_no_args @ 0x113d4
unsigned int func_no_args(void)
{
 return 0x2a;
}

// Function: func_many_args @ 0x113de
int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
 int param_7,int param_8)
{
 return param_2 + param_1 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}

// Function: func_mixed_args @ 0x113ff
int func_mixed_args(int param_1,int param_2,double param_3,unsigned int param_4,unsigned int param_5)
{
 int iVar1;
 longlong local_2c;
 iVar1 = 0;
 if (param_2 != 0) {
 iVar1 = FUN_000110d0(param_2);
 }
 local_2c = ((longlong)param_5 << 32) | (param_4 & 0xFFFFFFFFU);
 return (int)((double)local_2c + param_3 + (double)(iVar1 + param_1));
}

// Function: func_struct_byval @ 0x11471
void func_struct_byval(void)
{
 int iVar1;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x10);
 return;
}

// Function: func_struct_byptr @ 0x1148e
int func_struct_byptr(int *param_1)
{
 int iVar1;
 iVar1 = -1;
 if (param_1 != (int *)0x0) {
 iVar1 = *param_1 * param_1[1];
 }
 return iVar1;
}

// Function: test_calling_conventions @ 0x114a7
void test_calling_conventions(void)
{
 unsigned int uVar1;
 uint uVar2;
 uint uVar3;
 int iVar4;
 int iVar5;
 uint uVar6;
 uint *puVar7;
 uint *puVar8;
 int in_GS_OFFSET;
 byte bVar9;
 uint auStack_128 [34];
 uint local_a0 [32];
 int local_20;
 unsigned int uStack_14;
 bVar9 = 0;
 uStack_14 = 0x114bc;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
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
 FUN_000110e0(1,&DAT_000120c9,uVar1);
 FUN_000110e0(1,&DAT_000120f1,0x2a);
 FUN_000110e0(1,&DAT_00012113,0x24);
 FUN_000110e0(1,&DAT_0001213a,0x75);
 uVar6 = 0;
 uVar2 = 1;
 do {
 auStack_128[uVar2 * 2] = uVar2;
 uVar3 = uVar2 + 1;
 auStack_128[uVar2 * 2 + 1] = uVar6;
 uVar6 = uVar6 + (0xfffffffe < uVar2);
 uVar2 = uVar3;
 } while ((uVar3 ^ 0x11 | uVar6) != 0);
 iVar4 = 0;
 puVar7 = auStack_128 + 2;
 puVar8 = local_a0;
 for (iVar5 = 0x20; iVar5 != 0; iVar5 = iVar5 + -1) {
 *puVar8 = *puVar7;
 puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
 puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
 }
 iVar5 = 0;
 do {
 iVar5 = iVar5 + local_a0[iVar4 * 2];
 iVar4 = iVar4 + 1;
 } while (iVar4 != 0x10);
 FUN_000110e0(1,&DAT_00012162,iVar5,0x10);
 FUN_000110e0(1,&DAT_0001218e,0x32);
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return;
}

// Function: param_by_value_int @ 0x11688
int param_by_value_int(int param_1)
{
 return param_1 * 2;
}

// Function: call_by_value_int @ 0x11696
unsigned int call_by_value_int(void)
{
 return 0xf;
}

// Function: param_by_value_ptr @ 0x116a0
unsigned int param_by_value_ptr(int *param_1)
{
 *param_1 = *param_1 << 1;
 return 1;
}

// Function: call_by_value_ptr @ 0x116b3
unsigned int call_by_value_ptr(void)
{
 return 0xb;
}

// Function: param_array_decay @ 0x116bd
unsigned int param_array_decay(void)
{
 return 4;
}

// Function: call_array_decay @ 0x116c7
unsigned int call_array_decay(void)
{
 return 4;
}

// Function: param_string @ 0x116d1
int param_string(char *param_1)
{
 return (int)*param_1 + (int)param_1[1];
}

// Function: call_string_param @ 0x116e6
unsigned int call_string_param(void)
{
 return 0xad;
}

// Function: param_ptr_array @ 0x116f0
int param_ptr_array(int param_1,int param_2)
{
 int iVar1;
 int iVar2;
 iVar2 = 0;
 for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
 iVar2 = iVar2 + **(char **)(param_1 + iVar1 * 4);
 }
 return iVar2;
}

// Function: call_ptr_array @ 0x11714
void call_ptr_array(void)
{
 int iVar1;
 char **ppuVar2;
 int *piVar3;
 int in_GS_OFFSET;
 int local_1c [4];
 local_1c[3] = *(int *)(in_GS_OFFSET + 0x14);
 ppuVar2 = &PTR_DAT_00014008;
 piVar3 = local_1c;
 for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
 *piVar3 = (int)*ppuVar2;
 ppuVar2 = ppuVar2 + 1;
 piVar3 = piVar3 + 1;
 }
 param_ptr_array(local_1c,3);
 if (local_1c[3] != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return;
}

// Function: param_varargs @ 0x1176c
int param_varargs(int param_1, ...)
{
 int iVar1;
 int iVar2;
 int args[10];
 iVar2 = 0;
 for (iVar1 = 0; iVar1 < param_1; iVar1 = iVar1 + 1) {
 iVar2 = iVar2 + args[iVar1];
 }
 return iVar2;
}

// Function: call_varargs_param @ 0x11789
void call_varargs_param(void)
{
 param_varargs(4,10,0x14,0x1e,0x28);
 return;
}

// Function: param_func_ptr @ 0x117a4
int param_func_ptr(void *param_1,unsigned int param_2)
{
 int iVar1;
 iVar1 = ((int (*)(unsigned int))param_1)(param_2);
 return iVar1 + 10;
}

// Function: call_func_ptr_param @ 0x117b9
void call_func_ptr_param(void)
{
 param_func_ptr(callback_func,5);
 return;
}

// Function: param_double_ptr @ 0x117dd
unsigned int param_double_ptr(int *param_1,unsigned int param_2)
{
 unsigned int uVar1;
 uVar1 = 0xffffffff;
 if ((param_1 != (int *)0x0) && ((unsigned int *)*param_1 != (unsigned int *)0x0)) {
 *(unsigned int *)*param_1 = param_2;
 uVar1 = 1;
 *param_1 = 0;
 }
 return uVar1;
}

// Function: call_double_ptr @ 0x11806
unsigned int call_double_ptr(void)
{
 return 0x15;
}

// Function: param_complex_cast @ 0x11810
int param_complex_cast(int *param_1,int param_2)
{
 int iVar1;
 if (param_2 == 0) {
 iVar1 = *param_1;
 }
 else {
 iVar1 = -1;
 if (param_2 == 1) {
 iVar1 = param_1[1] + *param_1;
 }
 }
 return iVar1;
}

// Function: call_complex_cast @ 0x11832
unsigned int call_complex_cast(void)
{
 return 0x12345678;
}

// Function: param_struct_byval @ 0x1183c
int param_struct_byval(int param_1)
{
 return 0 + param_1;
}

// Function: call_struct_byval @ 0x1184b
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
 iVar1 = local_50[15] + local_50[0];
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return iVar1;
}

// Function: param_order_dep @ 0x11883
int param_order_dep(int param_1,int param_2)
{
 return param_2 + param_1;
}

// Function: call_order_dep @ 0x11892
unsigned int call_order_dep(void)
{
 return 4;
}

// Function: test_parameter_passing @ 0x1189c
void test_parameter_passing(void)
{
 unsigned int uVar1;
 FUN_000110c0(&DAT_000121c7);
 FUN_000110e0(1,"PARAM-L1-01: %d\n",0xf);
 FUN_000110e0(1,"PARAM-L1-02: %d\n",0xb);
 FUN_000110e0(1,"PARAM-L2-01: %d\n",4);
 FUN_000110e0(1,"PARAM-L2-02: %d\n",0xad);
 call_ptr_array();
 FUN_000110e0(1,"PARAM-L2-03: %d\n",0);
 call_varargs_param();
 FUN_000110e0(1,"PARAM-L2-04: %d\n",0);
 call_func_ptr_param();
 FUN_000110e0(1,"PARAM-L3-01: %d\n",0);
 FUN_000110e0(1,"PARAM-L3-02: %d\n",0x15);
 FUN_000110e0(1,"PARAM-L3-03: %d\n",0x12345678);
 uVar1 = call_struct_byval();
 FUN_000110e0(1,"PARAM-L3-04: %d\n",uVar1);
 FUN_000110e0(1,"PARAM-L3-05: %d\n",4);
 return;
}

// Function: ret_basic_type @ 0x119ad
int ret_basic_type(int param_1)
{
 return param_1 * 2;
}

// Function: call_ret_basic @ 0x119bb
unsigned int call_ret_basic(void)
{
 return 0x2a;
}

// Function: ret_pointer @ 0x119c5
int ret_pointer(int param_1)
{
 return param_1 + 4;
}

// Function: call_ret_pointer @ 0x119d4
unsigned int call_ret_pointer(void)
{
 return 0x14;
}

// Function: ret_small_struct @ 0x119de
void ret_small_struct(unsigned int *param_1,unsigned int param_2,unsigned int param_3)
{
 *param_1 = param_2;
 param_1[1] = param_3;
 return;
}

// Function: call_ret_small_struct @ 0x119f7
unsigned int call_ret_small_struct(void)
{
 return 7;
}

// Function: ret_large_struct @ 0x11a01
void ret_large_struct(int *param_1,int param_2)
{
 int iVar1;
 int *piVar2;
 int in_GS_OFFSET;
 int local_50 [16];
 int local_10;
 iVar1 = 0;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 do {
 local_50[iVar1] = param_2 + iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x10);
 piVar2 = local_50;
 for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
 *param_1 = *piVar2;
 piVar2 = piVar2 + 1;
 param_1 = param_1 + 1;
 }
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return;
}

// Function: call_ret_large_struct @ 0x11a4d
int call_ret_large_struct(void)
{
 int in_GS_OFFSET;
 int local_50 [15];
 int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 ret_large_struct(local_50,100);
 local_14 = 100 + local_50[0];
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return local_14;
}

// Function: ret_func_ptr @ 0x11a86
void * ret_func_ptr(int param_1)
{
 void *pcVar1;
 pcVar1 = func_a;
 if (param_1 != 0) {
 pcVar1 = func_b;
 }
 return pcVar1;
}

// Function: call_ret_func_ptr @ 0x11aac
unsigned int call_ret_func_ptr(void)
{
 return 10;
}

// Function: ret_opaque_handle @ 0x11ab6
unsigned long long * ret_opaque_handle(int param_1)
{
 unsigned long long *puVar1;
 puVar1 = &handle2_0;
 if (param_1 == 0) {
 puVar1 = (unsigned long long *)&handle1_1;
 }
 return puVar1;
}

// Function: call_ret_opaque @ 0x11adc
unsigned int call_ret_opaque(void)
{
 return handle1_1;
}

// Function: ret_complex_expr @ 0x11af1
int ret_complex_expr(int param_1,int param_2,int param_3)
{
 int iVar1;
 iVar1 = param_3 + 10;
 if (param_2 < param_1) {
 iVar1 = param_3 * 2;
 }
 return iVar1;
}

// Function: call_ret_complex_expr @ 0x11b0c
unsigned int call_ret_complex_expr(void)
{
 return 0x28;
}

// Function: ret_multi_branch @ 0x11b16
int ret_multi_branch(uint param_1)
{
 int iVar1;
 iVar1 = -1;
 if (param_1 < 3) {
 iVar1 = (param_1 + 1) * 10;
 }
 return iVar1;
}

// Function: call_ret_multi_branch @ 0x11b30
unsigned int call_ret_multi_branch(void)
{
 return 0x3c;
}

// Function: ret_void @ 0x11b3a
void ret_void(int param_1,int *param_2)
{
 *param_2 = param_1 * 3;
 return;
}

// Function: call_ret_void @ 0x11b4c
unsigned int call_ret_void(void)
{
 return 0x15;
}

// Function: test_return_values @ 0x11b56
void test_return_values(void)
{
 unsigned int uVar1;
 int iVar1;
 FUN_000110c0(&DAT_000122a3);
 FUN_000110e0(1,&DAT_000122c1,0x2a);
 FUN_000110e0(1,&DAT_000122dd,0x14);
 FUN_000110e0(1,&DAT_000122f9,7);
 iVar1 = call_ret_large_struct();
 FUN_000110e0(1,&DAT_00012314,iVar1);
 FUN_000110e0(1,&DAT_00012331,10);
 FUN_000110e0(1,&DAT_0001234d,handle1_1);
 FUN_000110e0(1,&DAT_0001236a,0x28);
 FUN_000110e0(1,&DAT_00012386,0x3c);
 FUN_000110e0(1,&DAT_000123a2,0x15);
 return;
}

// Function: __x86.get_pc_thunk.ax @ 0x11c33
unsigned int __x86_get_pc_thunk_ax(void)
{
 unsigned int unaff_retaddr;
 return unaff_retaddr;
}

// Function: __stack_chk_fail_local @ 0x11c40
void __stack_chk_fail_local(void)
{
 FUN_000110b0();
 return;
}

// Function: __do_global_ctors_aux @ 0x11c60
void __do_global_ctors_aux(void)
{
 return;
}



