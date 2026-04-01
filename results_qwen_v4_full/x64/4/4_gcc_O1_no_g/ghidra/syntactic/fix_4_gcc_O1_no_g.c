/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned long undefined8;
typedef unsigned int undefined4;
typedef unsigned char undefined;
typedef unsigned long ulong;
typedef unsigned int uint;
typedef void (*code)(void);

/* Global variables referenced in decompiled code */
undefined8 handle1_1;
undefined8 handle2_0;
char DAT_00102008;
char DAT_00102030;
char DAT_00102058;
char DAT_00102080;
char DAT_001021f1;
char DAT_001020a8;
char DAT_001020d0;
char DAT_00102100;
char DAT_00102130;
char DAT_001021f6;
char DAT_001021fa;
char DAT_001021fe;
char DAT_001022bd;
char DAT_001022db;
char DAT_001022f7;
char DAT_00102313;
char DAT_0010232e;
char DAT_0010234b;
char DAT_00102367;
char DAT_00102384;
char DAT_001023a0;
char DAT_001023bc;

/* Stack references from Ghidra */
int stack0x00000008;
long stack0x00000088;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/4/4_gcc_O1_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: callback_func @ 001011a9 */

int callback_func(int param_1)

{
 return param_1 * 2;
}



/* Function: func_a @ 001011b1 */

int func_a(int param_1)

{
 return param_1 + 10;
}



/* Function: func_b @ 001011b9 */

int func_b(int param_1)

{
 return param_1 * 2;
}



/* Function: cdecl_func @ 001011c1 */

int cdecl_func(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: call_cdecl @ 001011c9 */

undefined8 call_cdecl(void)

{
 return 0xf;
}



/* Function: stdcall_func @ 001011d3 */

int stdcall_func(int param_1,int param_2)

{
 return param_1 * param_2;
}



/* Function: call_stdcall @ 001011dd */

undefined8 call_stdcall(void)

{
 return 0x32;
}



/* Function: fastcall_func @ 001011e7 */

int fastcall_func(int param_1,int param_2,int param_3)

{
 return param_1 + param_2 + param_3;
}



/* Function: call_fastcall @ 001011f1 */

undefined8 call_fastcall(void)

{
 return 6;
}



/* Function: call_thiscall @ 001011fb */

undefined8 call_thiscall(void)

{
 return 0xf;
}



/* Function: arm_aapcs_func @ 00101205 */

int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_arm_aapcs @ 00101214 */

undefined8 call_arm_aapcs(void)

{
 return 0xf;
}



/* Function: mips_func @ 0010121e */

int mips_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_1 + param_2 + param_3 + param_4;
}



/* Function: call_mips @ 0010122a */

undefined8 call_mips(void)

{
 return 100;
}



/* Function: amd64_sysv_func @ 00101234 */

int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6;
}



/* Function: call_amd64_sysv @ 00101246 */

undefined8 call_amd64_sysv(void)

{
 return 0x15;
}



/* Function: ms_x64_func @ 00101250 */

int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_ms_x64 @ 0010125f */

undefined8 call_ms_x64(void)

{
 return 0xf;
}



/* Function: vectorcall_func @ 00101269 */

int vectorcall_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_1 + param_2 + param_3 + param_4;
}



/* Function: call_vectorcall @ 00101275 */

undefined8 call_vectorcall(void)

{
 return 10;
}



/* Function: mixed_conventions_test @ 0010127f */

undefined8 mixed_conventions_test(void)

{
 return 0x21;
}



/* Function: varargs_func @ 00101289 */

int varargs_func(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
 undefined8 param_5,undefined8 param_6)

{
 int iVar1;
 int *piVar2;
 ulong uVar3;
 int iVar4;
 long in_FS_OFFSET;
 uint local_58;
 int *local_50;
 int local_38 [2];
 undefined8 local_30;
 undefined8 local_28;
 undefined8 local_20;
 undefined8 local_18;
 undefined8 local_10;
 
 local_30 = param_2;
 local_28 = param_3;
 local_20 = param_4;
 local_18 = param_5;
 local_10 = param_6;
 local_58 = 8;
 local_50 = (int *)&stack0x00000008;
 if (param_1 < 1) {
 iVar4 = 0;
 }
 else {
 iVar1 = 0;
 iVar4 = 0;
 do {
 if (local_58 < 0x30) {
 uVar3 = (ulong)local_58;
 local_58 = local_58 + 8;
 piVar2 = (int *)((long)local_38 + uVar3);
 }
 else {
 piVar2 = local_50;
 local_50 = local_50 + 2;
 }
 iVar4 = iVar4 + *piVar2;
 iVar1 = iVar1 + 1;
 } while (param_1 != iVar1);
 }
 if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar4;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: func_no_args @ 00101335 */

undefined8 func_no_args(void)

{
 return 0x2a;
}



/* Function: func_many_args @ 0010133f */

int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
 int param_7,int param_8)

{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}



/* Function: func_mixed_args @ 00101359 */

int func_mixed_args(double param_1,int param_2,char *param_3,long param_4)

{
 int iVar1;
 size_t sVar2;
 
 iVar1 = 0;
 if (param_3 != (char *)0x0) {
 sVar2 = strlen(param_3);
 iVar1 = (int)sVar2;
 }
 return (int)((double)(iVar1 + param_2) + param_1 + (double)param_4);
}



/* Function: func_struct_byval @ 001013a6 */

long func_struct_byval(void)

{
 long lVar1;
 long *plVar2;
 
 plVar2 = (long *)&stack0x00000008;
 lVar1 = 0;
 do {
 lVar1 = lVar1 + *plVar2;
 plVar2 = plVar2 + 1;
 } while (plVar2 != (long *)&stack0x00000088);
 return lVar1;
}



/* Function: func_struct_byptr @ 001013c9 */

int func_struct_byptr(int *param_1)

{
 if (param_1 != (int *)0x0) {
 return *param_1 * param_1[1];
 }
 return -1;
}



/* Function: test_calling_conventions @ 001013df */

void test_calling_conventions(void)

{
 undefined4 uVar1;
 long lVar2;
 long *plVar3;
 long in_FS_OFFSET;
 long local_118 [16];
 long local_98 [16];
 long local_18;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_00102008);
 __printf_chk(1,"CALL-L1-01: %d\n",0xf);
 __printf_chk(1,"CALL-L1-02: %d\n",0x32);
 __printf_chk(1,"CALL-L1-03: %d\n",6);
 __printf_chk(1,"CALL-L1-04: %d\n",0xf);
 __printf_chk(1,"CALL-L1-05: %d\n",0xf);
 __printf_chk(1,"CALL-L1-06: %d\n",100);
 __printf_chk(1,"CALL-L1-07: %d\n",0x15);
 __printf_chk(1,"CALL-L1-08: %d\n",0xf);
 __printf_chk(1,"CALL-L1-09: %d\n",10);
 __printf_chk(1,"CALL-L1-10: %d\n",0x21);
 uVar1 = varargs_func(5,1,2,3,4,5);
 __printf_chk(1,&DAT_00102030,uVar1);
 __printf_chk(1,&DAT_00102058,0x2a);
 __printf_chk(1,&DAT_00102080,0x24);
 uVar1 = func_mixed_args(0x40091eb851eb851f,10,&DAT_001021f1,100);
 __printf_chk(1,&DAT_001020a8,uVar1);
 lVar2 = 1;
 do {
 local_118[lVar2 + -1] = lVar2;
 lVar2 = lVar2 + 1;
 } while (lVar2 != 0x11);
 local_98[0] = local_118[0];
 local_98[1] = local_118[1];
 local_98[2] = local_118[2];
 local_98[3] = local_118[3];
 local_98[4] = local_118[4];
 local_98[5] = local_118[5];
 local_98[6] = local_118[6];
 local_98[7] = local_118[7];
 local_98[8] = local_118[8];
 local_98[9] = local_118[9];
 local_98[10] = local_118[10];
 local_98[0xb] = local_118[0xb];
 local_98[0xc] = local_118[0xc];
 local_98[0xd] = local_118[0xd];
 local_98[0xe] = local_118[0xe];
 local_98[0xf] = local_118[0xf];
 plVar3 = local_98;
 lVar2 = 0;
 do {
 lVar2 = lVar2 + *plVar3;
 plVar3 = plVar3 + 1;
 } while (&local_18 != plVar3);
 __printf_chk(1,&DAT_001020d0,lVar2);
 __printf_chk(1,&DAT_00102100,0x32);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_by_value_int @ 001016ba */

int param_by_value_int(int param_1)

{
 return param_1 * 2;
}



/* Function: call_by_value_int @ 001016c2 */

undefined8 call_by_value_int(void)

{
 return 0xf;
}



/* Function: param_by_value_ptr @ 001016cc */

undefined8 param_by_value_ptr(int *param_1)

{
 *param_1 = *param_1 << 1;
 return 1;
}



/* Function: call_by_value_ptr @ 001016d8 */

undefined8 call_by_value_ptr(void)

{
 return 0xb;
}



/* Function: param_array_decay @ 001016e2 */

undefined8 param_array_decay(void)

{
 return 8;
}



/* Function: call_array_decay @ 001016ec */

undefined8 call_array_decay(void)

{
 return 8;
}



/* Function: param_string @ 001016f6 */

int param_string(char *param_1)

{
 return (int)*param_1 + (int)param_1[1];
}



/* Function: call_string_param @ 00101704 */

undefined8 call_string_param(void)

{
 return 0xad;
}



/* Function: param_ptr_array @ 0010170e */

int param_ptr_array(undefined8 *param_1,int param_2)

{
 undefined8 *puVar1;
 int iVar2;
 
 if (param_2 < 1) {
 iVar2 = 0;
 }
 else {
 puVar1 = param_1 + (ulong)(param_2 - 1) + 1;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *(char *)*param_1;
 param_1 = param_1 + 1;
 } while (param_1 != puVar1);
 }
 return iVar2;
}



/* Function: call_ptr_array @ 00101741 */

void call_ptr_array(void)

{
 long in_FS_OFFSET;
 undefined *local_28;
 undefined *local_20;
 undefined *local_18;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_28 = &DAT_001021f6;
 local_20 = &DAT_001021fa;
 local_18 = &DAT_001021fe;
 param_ptr_array(&local_28,3);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_varargs @ 001017a3 */

int param_varargs(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
 undefined8 param_5,undefined8 param_6)

{
 int iVar1;
 int *piVar2;
 ulong uVar3;
 int iVar4;
 long in_FS_OFFSET;
 uint local_58;
 int *local_50;
 int local_38 [2];
 undefined8 local_30;
 undefined8 local_28;
 undefined8 local_20;
 undefined8 local_18;
 undefined8 local_10;
 
 local_30 = param_2;
 local_28 = param_3;
 local_20 = param_4;
 local_18 = param_5;
 local_10 = param_6;
 local_58 = 8;
 local_50 = (int *)&stack0x00000008;
 if (param_1 < 1) {
 iVar4 = 0;
 }
 else {
 iVar1 = 0;
 iVar4 = 0;
 do {
 if (local_58 < 0x30) {
 uVar3 = (ulong)local_58;
 local_58 = local_58 + 8;
 piVar2 = (int *)((long)local_38 + uVar3);
 }
 else {
 piVar2 = local_50;
 local_50 = local_50 + 2;
 }
 iVar4 = iVar4 + *piVar2;
 iVar1 = iVar1 + 1;
 } while (param_1 != iVar1);
 }
 if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar4;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_varargs_param @ 0010184f */

void call_varargs_param(void)

{
 param_varargs(4,10,0x14,0x1e,0x28,0);
 return;
}



/* Function: param_func_ptr @ 00101880 */

int param_func_ptr(code *param_1,undefined4 param_2)

{
 int iVar1;
 
 (*param_1)();
 iVar1 = param_2;
 return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 00101897 */

void call_func_ptr_param(void)

{
 param_func_ptr(callback_func,5);
 return;
}



/* Function: param_double_ptr @ 001018b5 */

undefined8 param_double_ptr(long *param_1,undefined4 param_2)

{
 if (param_1 == (long *)0x0) {
 return 0xffffffff;
 }
 if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
 *(undefined4 *)*param_1 = param_2;
 *param_1 = 0;
 return 1;
 }
 return 0xffffffff;
}



/* Function: call_double_ptr @ 001018e1 */

int call_double_ptr(void)

{
 long in_FS_OFFSET;
 int local_1c;
 int *local_18;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_1c = 10;
 local_18 = &local_1c;
 param_double_ptr(&local_18,0x14);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return (uint)(local_18 == (int *)0x0) + local_1c;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_complex_cast @ 00101944 */

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



/* Function: call_complex_cast @ 00101960 */

undefined8 call_complex_cast(void)

{
 return 0x12345678;
}



/* Function: param_struct_byval @ 0010196a */

int param_struct_byval(void)

{
 int in_stack_00000008;
 undefined8 in_stack_00000040;
 
 return (int)in_stack_00000040 + in_stack_00000008;
}



/* Function: call_struct_byval @ 00101977 */

int call_struct_byval(void)

{
 long lVar1;
 long in_FS_OFFSET;
 int local_58 [18];
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 lVar1 = 0;
 do {
 local_58[lVar1] = (int)lVar1;
 lVar1 = lVar1 + 1;
 } while (lVar1 != 0x10);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return local_58[0] + local_58[0xf];
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_order_dep @ 001019bd */

int param_order_dep(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: call_order_dep @ 001019c5 */

undefined8 call_order_dep(void)

{
 return 4;
}



/* Function: test_parameter_passing @ 001019cf */

void test_parameter_passing(void)

{
 undefined4 uVar1;
 
 puts(&DAT_00102130);
 __printf_chk(1,"PARAM-L1-01: %d\n",0xf);
 uVar1 = call_by_value_ptr();
 __printf_chk(1,"PARAM-L1-02: %d\n",uVar1);
 __printf_chk(1,"PARAM-L2-01: %d\n",8);
 __printf_chk(1,"PARAM-L2-02: %d\n",0xad);
 call_ptr_array();
 __printf_chk(1,"PARAM-L2-03: %d\n",8);
 call_varargs_param();
 __printf_chk(1,"PARAM-L2-04: %d\n",76);
 call_func_ptr_param();
 __printf_chk(1,"PARAM-L3-01: %d\n",15);
 uVar1 = call_double_ptr();
 __printf_chk(1,"PARAM-L3-02: %d\n",uVar1);
 uVar1 = call_complex_cast();
 __printf_chk(1,"PARAM-L3-03: %d\n",uVar1);
 uVar1 = call_struct_byval();
 __printf_chk(1,"PARAM-L3-04: %d\n",uVar1);
 __printf_chk(1,"PARAM-L3-05: %d\n",4);
 return;
}



/* Function: ret_basic_type @ 00101b42 */

int ret_basic_type(int param_1)

{
 return param_1 * 2;
}



/* Function: call_ret_basic @ 00101b4a */

undefined8 call_ret_basic(void)

{
 return 0x2a;
}



/* Function: ret_pointer @ 00101b54 */

long ret_pointer(long param_1)

{
 return param_1 + 4;
}



/* Function: call_ret_pointer @ 00101b5d */

undefined8 call_ret_pointer(void)

{
 return 0x14;
}



/* Function: ret_small_struct @ 00101b67 */

ulong ret_small_struct(uint param_1,long param_2)

{
 return (ulong)param_1 | param_2 << 0x20;
}



/* Function: call_ret_small_struct @ 00101b75 */

undefined8 call_ret_small_struct(void)

{
 return 7;
}



/* Function: ret_large_struct @ 00101b7f */

void ret_large_struct(undefined8 *param_1,int param_2)

{
 int *piVar1;
 long in_FS_OFFSET;
 undefined8 local_58;
 undefined8 uStack_50;
 undefined8 local_48;
 undefined8 uStack_40;
 undefined8 local_38;
 undefined8 uStack_30;
 undefined8 local_28;
 undefined8 uStack_20;
 int local_18 [2];
 long local_10;
 
 piVar1 = (int *)&local_58;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 do {
 *piVar1 = param_2;
 param_2 = param_2 + 1;
 piVar1 = piVar1 + 1;
 } while (piVar1 != local_18);
 *param_1 = local_58;
 param_1[1] = uStack_50;
 param_1[2] = local_48;
 param_1[3] = uStack_40;
 param_1[4] = local_38;
 param_1[5] = uStack_30;
 param_1[6] = local_28;
 param_1[7] = uStack_20;
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_ret_large_struct @ 00101bf0 */

int call_ret_large_struct(void)

{
 long in_FS_OFFSET;
 int local_58 [15];
 int local_1c;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 ret_large_struct(local_58,100);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return local_1c + local_58[0];
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: ret_func_ptr @ 00101c36 */

code * ret_func_ptr(int param_1)

{
 code *pcVar1;
 
 pcVar1 = func_b;
 if (param_1 == 0) {
 pcVar1 = func_a;
 }
 return pcVar1;
}



/* Function: call_ret_func_ptr @ 00101c4f */

undefined8 call_ret_func_ptr(void)

{
 return func_b(5);
}



/* Function: ret_opaque_handle @ 00101c5e */

undefined8 * ret_opaque_handle(int param_1)

{
 undefined8 *puVar1;
 
 puVar1 = (undefined8 *)&handle1_1;
 if (param_1 != 0) {
 puVar1 = &handle2_0;
 }
 return puVar1;
}



/* Function: call_ret_opaque @ 00101c77 */

undefined4 call_ret_opaque(void)

{
 return handle1_1;
}



/* Function: ret_complex_expr @ 00101c82 */

int ret_complex_expr(int param_1,int param_2,int param_3)

{
 int iVar1;
 
 iVar1 = param_3 * 2;
 if (param_1 <= param_2) {
 iVar1 = param_3 + 10;
 }
 return iVar1;
}



/* Function: call_ret_complex_expr @ 00101c92 */

undefined8 call_ret_complex_expr(void)

{
 return 0x28;
}



/* Function: ret_multi_branch @ 00101c9c */

int ret_multi_branch(int param_1)

{
 int iVar1;
 
 iVar1 = 0x14;
 if ((param_1 != 1) && (iVar1 = 0x1e, param_1 != 2)) {
 iVar1 = (-(uint)(param_1 == 0) & 0xb) - 1;
 }
 return iVar1;
}



/* Function: call_ret_multi_branch @ 00101cc0 */

undefined8 call_ret_multi_branch(void)

{
 return 0x3c;
}



/* Function: ret_void @ 00101cca */

void ret_void(int param_1,int *param_2)

{
 *param_2 = param_1 * 3;
 return;
}



/* Function: call_ret_void @ 00101cd4 */

undefined8 call_ret_void(void)

{
 return 0x15;
}



/* Function: test_return_values @ 00101cde */

void test_return_values(void)

{
 undefined4 uVar1;
 
 puts(&DAT_001022bd);
 __printf_chk(1,&DAT_001022db,0x2a);
 uVar1 = call_ret_pointer();
 __printf_chk(1,&DAT_001022f7,uVar1);
 uVar1 = call_ret_small_struct();
 __printf_chk(1,&DAT_00102313,uVar1);
 uVar1 = call_ret_large_struct();
 __printf_chk(1,&DAT_0010232e,uVar1);
 uVar1 = call_ret_func_ptr();
 __printf_chk(1,&DAT_0010234b,uVar1);
 __printf_chk(1,&DAT_00102367,handle1_1);
 __printf_chk(1,&DAT_00102384,0x28);
 __printf_chk(1,&DAT_001023a0,0x3c);
 __printf_chk(1,&DAT_001023bc,0x15);
 return;
}



/* Function: main @ 00101e07 */

undefined8 main(void)

{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 78 */
