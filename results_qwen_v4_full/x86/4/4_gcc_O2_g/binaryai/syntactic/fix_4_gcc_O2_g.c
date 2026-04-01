// Decompiled by BinaryAI
// SHA256: 4d58e01e73f1e5cbfe0e33c778ebeb989fbfa7b3db9c88615439ce27206dd0ff

// Type definitions
typedef unsigned int uint;
typedef long long longlong;
typedef unsigned char byte;

// Global variables
unsigned long long handle1_1 = 0;
unsigned long long handle2_0 = 0;
extern char DAT_00012008[];

// Macros for decompiler artifacts
#define CONCAT44(a,b) (((unsigned long long)(a) << 32) | (b))
#define ROUND(x) ((int)(x))

// External function declarations
extern void FUN_00011090(unsigned int);
extern void FUN_000110a0(void *,unsigned int,void *,int,int,unsigned int,char *);
extern void FUN_000110c0(void *);
extern void FUN_000110e0(int,const char *,...);
extern void __do_global_ctors_aux(void);
extern void __stack_chk_fail_local(void);

// Stub function for frame_dummy
void frame_dummy(void) { return; }
extern char DAT_0001202c[];
extern char DAT_00012054[];
extern char DAT_00012078[];
extern char DAT_000120a0[];
extern char DAT_000120c8[];
extern char DAT_000120f4[];
extern char DAT_00012124[];
extern char DAT_000122a0[];
extern char DAT_000122be[];
extern char DAT_000122da[];
extern char DAT_000122f6[];
extern char DAT_00012311[];
extern char DAT_0001232e[];
extern char DAT_0001234a[];
extern char DAT_00012367[];
extern char DAT_00012383[];
extern char DAT_0001239f[];



// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 void (*func_ptr)(void) = (void (*)(void))0x0;
 func_ptr();
 return;
}

// Function: FUN_00011090 @ 0x11090
void FUN_00011090(unsigned int param_1)
{
 (void)param_1;
 return;
}

// Function: FUN_000110a0 @ 0x110a0
void FUN_000110a0(void *param_1,unsigned int param_2,void *param_3,int param_4,int param_5,unsigned int param_6,char *param_7)
{
 (void)param_1; (void)param_2; (void)param_3; (void)param_4; (void)param_5; (void)param_6; (void)param_7;
 return;
}

// Function: FUN_000110b0 @ 0x110b0
void FUN_000110b0(void)
{
 return;
}

// Function: FUN_000110c0 @ 0x110c0
void FUN_000110c0(void *param_1)
{
 (void)param_1;
 return;
}

// Function: FUN_000110d0 @ 0x110d0
int FUN_000110d0(int param_1)
{
 (void)param_1;
 return param_1;
}

// Function: FUN_000110e0 @ 0x110e0
void FUN_000110e0(int param_1,const char *param_2,...)
{
 (void)param_1; (void)param_2;
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
void __i686_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.bx @ 0x11140
void __x86_get_pc_thunk_bx(void)
{
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

// Function: func_a @ 0x11290
int func_a(int param_1)
{
 return param_1 + 10;
}

// Function: func_b @ 0x112a0
int func_b(int param_1)
{
 return param_1 * 2;
}

// Function: cdecl_func @ 0x112b0
int cdecl_func(int param_1,int param_2)
{
 return param_2 + param_1;
}

// Function: call_cdecl @ 0x112c0
unsigned int call_cdecl(void)
{
 return 0xf;
}

// Function: stdcall_func @ 0x112d0
int stdcall_func(int param_1,int param_2)
{
 return param_2 * param_1;
}

// Function: call_stdcall @ 0x112e0
unsigned int call_stdcall(void)
{
 return 0x32;
}

// Function: fastcall_func @ 0x112f0
int fastcall_func(unsigned int param_1_00,int param_2,int param_3,int param_1)
{
 return param_3 + param_2 + param_1;
}

// Function: call_fastcall @ 0x11300
unsigned int call_fastcall(void)
{
 return 6;
}

// Function: call_thiscall @ 0x11310
unsigned int call_thiscall(void)
{
 return 0xf;
}

// Function: arm_aapcs_func @ 0x11320
int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 return param_2 + param_1 + param_3 + param_4 + param_5;
}

// Function: call_arm_aapcs @ 0x11340
unsigned int call_arm_aapcs(void)
{
 return 0xf;
}

// Function: mips_func @ 0x11350
int mips_func(int param_1,int param_2,int param_3,int param_4)
{
 return param_2 + param_1 + param_3 + param_4;
}

// Function: call_mips @ 0x11370
unsigned int call_mips(void)
{
 return 100;
}

// Function: amd64_sysv_func @ 0x11380
int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
{
 return param_2 + param_1 + param_3 + param_4 + param_5 + param_6;
}

// Function: call_amd64_sysv @ 0x113a0
unsigned int call_amd64_sysv(void)
{
 return 0x15;
}

// Function: ms_x64_func @ 0x113b0
int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 return param_2 + param_1 + param_3 + param_4 + param_5;
}

// Function: call_ms_x64 @ 0x113d0
unsigned int call_ms_x64(void)
{
 return 0xf;
}

// Function: vectorcall_func @ 0x113e0
int vectorcall_func(int param_1,int param_2,int param_3,int param_4)
{
 return param_2 + param_1 + param_3 + param_4;
}

// Function: call_vectorcall @ 0x11400
unsigned int call_vectorcall(void)
{
 return 10;
}

// Function: mixed_conventions_test @ 0x11410
unsigned int mixed_conventions_test(void)
{
 return 0x21;
}

// Function: varargs_func @ 0x11420
int varargs_func(int param_1, ...)
{
 int iVar1;
 int iVar2;
 int *args;
 if (0 < param_1) {
 iVar1 = 0;
 iVar2 = 0;
 args = &param_1 + 1;
 do {
 iVar2 = iVar2 + args[iVar1];
 iVar1 = iVar1 + 1;
 } while (param_1 != iVar1);
 return iVar2;
 }
 return 0;
}

// Function: func_no_args @ 0x11460
unsigned int func_no_args(void)
{
 return 0x2a;
}

// Function: func_many_args @ 0x11470
int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
 int param_7,int param_8)
{
 return param_2 + param_1 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}

// Function: func_mixed_args @ 0x114a0
int func_mixed_args(int param_1,int param_2,double param_3,unsigned int param_4,unsigned int param_5)
{
 int iVar1;
 longlong local_1c;
 if (param_2 != 0) {
 iVar1 = FUN_000110d0(param_2);
 param_1 = param_1 + iVar1;
 }
 local_1c = CONCAT44(param_5,param_4);
 return (int)ROUND((double)local_1c + (double)param_1 + param_3);
}

// Function: func_struct_byval @ 0x11520
int func_struct_byval(int *param_1)
{
 int iVar1;
 int *piVar2;
 iVar1 = 0;
 piVar2 = param_1;
 do {
 iVar1 = iVar1 + *piVar2;
 piVar2 = piVar2 + 2;
 } while (piVar2 != param_1 + 0x20);
 return iVar1;
}

// Function: func_struct_byptr @ 0x11550
int func_struct_byptr(int *param_1)
{
 if (param_1 != (int *)0x0) {
 return *param_1 * param_1[1];
 }
 return -1;
}

// Function: test_calling_conventions @ 0x11570
void test_calling_conventions(void)
{
 unsigned int uVar1;
 uint uVar2;
 uint uVar3;
 uint *puVar4;
 int iVar5;
 uint uVar6;
 uint *puVar7;
 uint *puVar8;
 int in_GS_OFFSET;
 byte bVar9;
 uint auStack_118 [34];
 uint local_90 [32];
 uint local_10;
 bVar9 = 0;
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
 uVar6 = 0;
 uVar2 = 1;
 do {
 auStack_118[uVar2 * 2] = uVar2;
 uVar3 = uVar2 + 1;
 auStack_118[uVar2 * 2 + 1] = uVar6;
 uVar6 = uVar6 + (0xfffffffe < uVar2);
 uVar2 = uVar3;
 } while ((uVar6 | uVar3 ^ 0x11) != 0);
 puVar4 = local_90;
 puVar7 = auStack_118 + 2;
 puVar8 = local_90;
 for (iVar5 = 0x20; iVar5 != 0; iVar5 = iVar5 + -1) {
 *puVar8 = *puVar7;
 puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
 puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
 }
 iVar5 = 0;
 do {
 iVar5 = iVar5 + *puVar4;
 puVar4 = puVar4 + 2;
 } while (&local_10 != puVar4);
 FUN_000110e0(1,&DAT_000120c8,iVar5);
 FUN_000110e0(1,&DAT_000120f4,0x32);
 if (local_10 == *(uint *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 __stack_chk_fail_local();
}

// Function: param_by_value_int @ 0x11770
int param_by_value_int(int param_1)
{
 return param_1 * 2;
}

// Function: call_by_value_int @ 0x11780
unsigned int call_by_value_int(void)
{
 return 0xf;
}

// Function: param_by_value_ptr @ 0x11790
unsigned int param_by_value_ptr(int *param_1)
{
 *param_1 = *param_1 << 1;
 return 1;
}

// Function: call_by_value_ptr @ 0x117a0
unsigned int call_by_value_ptr(void)
{
 return 0xb;
}

// Function: param_array_decay @ 0x117b0
unsigned int param_array_decay(void)
{
 return 4;
}

// Function: call_array_decay @ 0x117c0
unsigned int call_array_decay(void)
{
 return 4;
}

// Function: param_string @ 0x117d0
int param_string(char *param_1)
{
 return (int)*param_1 + (int)param_1[1];
}

// Function: call_string_param @ 0x117f0
unsigned int call_string_param(void)
{
 return 0xad;
}

// Function: param_ptr_array @ 0x11800
int param_ptr_array(char **param_1,int param_2)
{
 char **ppcVar1;
 char *pcVar2;
 int iVar3;
 if (0 < param_2) {
 ppcVar1 = param_1 + param_2;
 iVar3 = 0;
 do {
 pcVar2 = *param_1;
 param_1 = param_1 + 1;
 iVar3 = iVar3 + *pcVar2;
 } while (ppcVar1 != param_1);
 return iVar3;
 }
 return 0;
}

// Function: call_ptr_array @ 0x11840
unsigned int call_ptr_array(void)
{
 return 300;
}

// Function: param_varargs @ 0x11850
int param_varargs(int param_1, ...)
{
 int iVar1;
 int iVar2;
 int *args;
 if (0 < param_1) {
 iVar1 = 0;
 iVar2 = 0;
 args = &param_1 + 1;
 do {
 iVar2 = iVar2 + args[iVar1];
 iVar1 = iVar1 + 1;
 } while (param_1 != iVar1);
 return iVar2;
 }
 return 0;
}

// Function: call_varargs_param @ 0x11890
void call_varargs_param(void)
{
 param_varargs(4,10,0x14,0x1e,0x28);
 return;
}

// Function: param_func_ptr @ 0x118b0
int param_func_ptr(void *param_1,unsigned int param_2)
{
 int iVar1;
 iVar1 = ((int (*)(unsigned int))param_1)(param_2);
 return iVar1 + 10;
}

// Function: call_func_ptr_param @ 0x118d0
unsigned int call_func_ptr_param(void)
{
 return 0x14;
}

// Function: param_double_ptr @ 0x118e0
unsigned int param_double_ptr(int *param_1,unsigned int param_2)
{
 if ((param_1 != (int *)0x0) && ((unsigned int *)*param_1 != (unsigned int *)0x0)) {
 *(unsigned int *)*param_1 = param_2;
 *param_1 = 0;
 return 1;
 }
 return 0xffffffff;
}

// Function: call_double_ptr @ 0x11910
unsigned int call_double_ptr(void)
{
 return 0x15;
}

// Function: param_complex_cast @ 0x11920
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

// Function: call_complex_cast @ 0x11950
unsigned int call_complex_cast(void)
{
 return 0x12345678;
}

// Function: param_struct_byval @ 0x11960
int param_struct_byval(int param_1)
{
 int param_11;
 return param_11 + param_1;
}

// Function: call_struct_byval @ 0x11970
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
 return local_50[15] + local_50[0];
 }
 __stack_chk_fail_local();
}

// Function: param_order_dep @ 0x119c0
int param_order_dep(int param_1,int param_2)
{
 return param_2 + param_1;
}

// Function: call_order_dep @ 0x119d0
unsigned int call_order_dep(void)
{
 return 4;
}

// Function: test_parameter_passing @ 0x119e0
void test_parameter_passing(void)
{
 unsigned int uVar1;
 int iVar2;
 int in_GS_OFFSET;
 int local_50 [16];
 int local_10;
 unsigned int uStack_8;
 uStack_8 = 0x119ea;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 FUN_000110c0(&DAT_00012124);
 FUN_000110e0(1,"PARAM-L1-01: %d\n",0xf);
 FUN_000110e0(1,"PARAM-L1-02: %d\n",0xb);
 FUN_000110e0(1,"PARAM-L2-01: %d\n",4);
 FUN_000110e0(1,"PARAM-L2-02: %d\n",0xad);
 FUN_000110e0(1,"PARAM-L2-03: %d\n",300);
 uVar1 = param_varargs(4,10,0x14,0x1e,0x28);
 FUN_000110e0(1,"PARAM-L2-04: %d\n",uVar1);
 FUN_000110e0(1,"PARAM-L3-01: %d\n",0x14);
 FUN_000110e0(1,"PARAM-L3-02: %d\n",0x15);
 FUN_000110e0(1,"PARAM-L3-03: %d\n",0x12345678);
 iVar2 = 0;
 do {
 local_50[iVar2] = iVar2;
 iVar2 = iVar2 + 1;
 } while (iVar2 != 0x10);
 FUN_000110e0(1,"PARAM-L3-04: %d\n",local_50[15] + local_50[0]);
 FUN_000110e0(1,"PARAM-L3-05: %d\n",4);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 __stack_chk_fail_local();
}

// Function: ret_basic_type @ 0x11b40
int ret_basic_type(int param_1)
{
 return param_1 * 2;
}

// Function: call_ret_basic @ 0x11b50
unsigned int call_ret_basic(void)
{
 return 0x2a;
}

// Function: ret_pointer @ 0x11b60
int ret_pointer(int param_1)
{
 return param_1 + 4;
}

// Function: call_ret_pointer @ 0x11b70
unsigned int call_ret_pointer(void)
{
 return 0x14;
}

// Function: ret_small_struct @ 0x11b80
void ret_small_struct(unsigned int *param_1,unsigned int param_2,unsigned int param_3)
{
 *param_1 = param_2;
 param_1[1] = param_3;
 return;
}

// Function: call_ret_small_struct @ 0x11ba0
unsigned int call_ret_small_struct(void)
{
 return 7;
}

// Function: ret_large_struct @ 0x11bb0
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

// Function: call_ret_large_struct @ 0x11c70
int call_ret_large_struct(void)
{
 int iVar1;
 int in_GS_OFFSET;
 int aiStack_1e0 [96];
 char *puStack_60;
 int local_50 [16];
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = 100;
 do {
 aiStack_1e0[iVar1] = iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x74);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return local_50[15] + local_50[0];
 }
 __stack_chk_fail_local();
}

// Function: ret_func_ptr @ 0x11cc0
void * ret_func_ptr(int param_1)
{
 void *pcVar1;
 pcVar1 = func_b;
 if (param_1 == 0) {
 pcVar1 = func_a;
 }
 return pcVar1;
}

// Function: call_ret_func_ptr @ 0x11cf0
unsigned int call_ret_func_ptr(void)
{
 return 10;
}

// Function: ret_opaque_handle @ 0x11d00
unsigned long long * ret_opaque_handle(int param_1)
{
 unsigned long long *puVar1;
 puVar1 = (unsigned long long *)&handle1_1;
 if (param_1 != 0) {
 puVar1 = &handle2_0;
 }
 return puVar1;
}

// Function: call_ret_opaque @ 0x11d30
unsigned int call_ret_opaque(void)
{
 return handle1_1;
}

// Function: ret_complex_expr @ 0x11d50
int ret_complex_expr(int param_1,int param_2,int param_3)
{
 int iVar1;
 iVar1 = param_3 + 10;
 if (param_2 < param_1) {
 iVar1 = param_3 * 2;
 }
 return iVar1;
}

// Function: call_ret_complex_expr @ 0x11d70
unsigned int call_ret_complex_expr(void)
{
 return 0x28;
}

// Function: ret_multi_branch @ 0x11d80
int ret_multi_branch(uint param_1)
{
 int iVar1;
 iVar1 = -1;
 if (param_1 < 3) {
 iVar1 = (param_1 * 5 + 5) * 2;
 }
 return iVar1;
}

// Function: call_ret_multi_branch @ 0x11da0
unsigned int call_ret_multi_branch(void)
{
 return 0x3c;
}

// Function: ret_void @ 0x11db0
void ret_void(int param_1,int *param_2)
{
 *param_2 = param_1 * 3;
 return;
}

// Function: call_ret_void @ 0x11dd0
unsigned int call_ret_void(void)
{
 return 0x15;
}

// Function: test_return_values @ 0x11de0
void test_return_values(void)
{
 unsigned int uVar1;
 FUN_000110c0(&DAT_000122a0);
 FUN_000110e0(1,&DAT_000122be,0x2a);
 FUN_000110e0(1,&DAT_000122da,0x14);
 FUN_000110e0(1,&DAT_000122f6,7);
 uVar1 = call_ret_large_struct();
 FUN_000110e0(1,&DAT_00012311,uVar1);
 FUN_000110e0(1,&DAT_0001232e,10);
 FUN_000110e0(1,&DAT_0001234a,handle1_1);
 FUN_000110e0(1,&DAT_00012367,0x28);
 FUN_000110e0(1,&DAT_00012383,0x3c);
 FUN_000110e0(1,&DAT_0001239f,0x15);
 return;
}

// Function: __x86.get_pc_thunk.ax @ 0x11eb7
unsigned int __x86_get_pc_thunk_ax(void)
{
 unsigned int unaff_retaddr;
 return unaff_retaddr;
}

// Function: __stack_chk_fail_local @ 0x11ec0
void __stack_chk_fail_local(void)
{
 FUN_000110b0();
 return;
}

// Function: __do_global_ctors_aux @ 0x11ee0
void __do_global_ctors_aux(void)
{
 return;
}



