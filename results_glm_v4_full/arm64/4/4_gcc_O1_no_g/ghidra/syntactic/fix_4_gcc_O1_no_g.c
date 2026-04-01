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
typedef unsigned int uint;
typedef unsigned long ulong;

/* Ghidra decompiler type definitions */
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef int (*code)(int);

/* Global variable declarations */
extern unsigned long __stack_chk_guard;
extern unsigned long ___stack_chk_guard;
char completed_0 = 0;
undefined4 handle1_1 = 0;
extern void *__dso_handle;
undefined4 handle2_0 = 0;
char DAT_00101570[] = "";
char DAT_00101638[] = "";
char DAT_00101660[] = "";
char DAT_00101688[] = "";
char DAT_001016b0[] = "";
char DAT_001016b8[] = "";
char DAT_001016e0[] = "";
char DAT_00101710[] = "";
char DAT_00101740[] = "";
char DAT_00101870[] = "";
char DAT_00101890[] = "";
char DAT_001018b0[] = "";
char DAT_001018d0[] = "";
char DAT_001018f0[] = "";
char DAT_00101910[] = "";
char DAT_00101930[] = "";
char DAT_00101950[] = "";
char DAT_00101970[] = "";
char DAT_00101990[] = "";
void *PTR_DAT_00113010 = 0;
void *PTR_DAT_00113018 = 0;
void *PTR_DAT_00113020 = 0;

/* Function declarations */
void __cxa_finalize(void *);
size_t strlen(const char *);
int puts(const char *);
void __stack_chk_fail(void);
int __printf_chk(int, const char *, ...);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/4/4_gcc_O1_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00100750 @ 00100750 */

void FUN_00100750(void)

{
 (*(code (*)(int))(undefined *)0x0)(0);
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_001008bc @ 001008bc */

void FUN_001008bc(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: callback_func @ 00100914 */

int callback_func(int param_1)

{
 return param_1 << 1;
}



/* Function: func_a @ 0010091c */

int func_a(int param_1)

{
 return param_1 + 10;
}



/* Function: func_b @ 00100924 */

int func_b(int param_1)

{
 return param_1 << 1;
}



/* Function: cdecl_func @ 0010092c */

int cdecl_func(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: call_cdecl @ 00100934 */

undefined8 call_cdecl(void)

{
 return 0xf;
}



/* Function: stdcall_func @ 0010093c */

int stdcall_func(int param_1,int param_2)

{
 return param_1 * param_2;
}



/* Function: call_stdcall @ 00100944 */

undefined8 call_stdcall(void)

{
 return 0x32;
}



/* Function: fastcall_func @ 0010094c */

int fastcall_func(int param_1,int param_2,int param_3)

{
 return param_1 + param_2 + param_3;
}



/* Function: call_fastcall @ 00100958 */

undefined8 call_fastcall(void)

{
 return 6;
}



/* Function: call_thiscall @ 00100960 */

undefined8 call_thiscall(void)

{
 return 0xf;
}



/* Function: arm_aapcs_func @ 00100968 */

int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_arm_aapcs @ 0010097c */

undefined8 call_arm_aapcs(void)

{
 return 0xf;
}



/* Function: mips_func @ 00100984 */

int mips_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_1 + param_2 + param_3 + param_4;
}



/* Function: call_mips @ 00100994 */

undefined8 call_mips(void)

{
 return 100;
}



/* Function: amd64_sysv_func @ 0010099c */

int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6;
}



/* Function: call_amd64_sysv @ 001009b4 */

undefined8 call_amd64_sysv(void)

{
 return 0x15;
}



/* Function: ms_x64_func @ 001009bc */

int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_ms_x64 @ 001009d0 */

undefined8 call_ms_x64(void)

{
 return 0xf;
}



/* Function: vectorcall_func @ 001009d8 */

int vectorcall_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_1 + param_2 + param_3 + param_4;
}



/* Function: call_vectorcall @ 001009e8 */

undefined8 call_vectorcall(void)

{
 return 10;
}



/* Function: mixed_conventions_test @ 001009f0 */

undefined8 mixed_conventions_test(void)

{
 return 0x21;
}



/* Function: varargs_func @ 001009f8 */

void varargs_func(int param_1, ...)

{
 return;
}



/* Function: func_no_args @ 00100ae8 */

undefined8 func_no_args(void)

{
 return 0x2a;
}



/* Function: func_many_args @ 00100af0 */

int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
 int param_7,int param_8)

{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}



/* Function: func_mixed_args @ 00100b10 */

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



/* Function: func_struct_byval @ 00100b64 */

long func_struct_byval(long *param_1)

{
 long lVar1;
 long *plVar2;
 long *plVar3;
 
 lVar1 = 0;
 plVar2 = param_1;
 do {
 plVar3 = plVar2 + 1;
 lVar1 = lVar1 + *plVar2;
 plVar2 = plVar3;
 } while (plVar3 != param_1 + 0x10);
 return lVar1;
}



/* Function: func_struct_byptr @ 00100b84 */

int func_struct_byptr(int *param_1)

{
 int iVar1;
 
 if (param_1 == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = *param_1 * param_1[1];
 }
 return iVar1;
}



/* Function: test_calling_conventions @ 00100ba0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_calling_conventions(void)

{
 undefined4 uVar1;
 long lVar2;
 long *plVar3;
 long alStack_110 [17];
 long local_88;
 undefined8 uStack_80;
 undefined8 uStack_78;
 undefined8 uStack_70;
 undefined8 local_68;
 undefined8 uStack_60;
 undefined8 uStack_58;
 undefined8 uStack_50;
 undefined8 local_48;
 undefined8 uStack_40;
 undefined8 uStack_38;
 undefined8 uStack_30;
 undefined8 local_28;
 undefined8 uStack_20;
 undefined8 uStack_18;
 undefined8 uStack_10;
 long local_8;
 long *plVar4;
 
 local_8 = ___stack_chk_guard;
 puts((const char *)&DAT_00101570);
 __printf_chk(1,(const char *)"CALL-L1-01: %d\n",0xf);
 __printf_chk(1,(const char *)"CALL-L1-02: %d\n",0x32);
 __printf_chk(1,(const char *)"CALL-L1-03: %d\n",6);
 __printf_chk(1,(const char *)"CALL-L1-04: %d\n",0xf);
 __printf_chk(1,(const char *)"CALL-L1-05: %d\n",0xf);
 __printf_chk(1,(const char *)"CALL-L1-06: %d\n",100);
 __printf_chk(1,(const char *)"CALL-L1-07: %d\n",0x15);
 __printf_chk(1,(const char *)"CALL-L1-08: %d\n",0xf);
 __printf_chk(1,(const char *)"CALL-L1-09: %d\n",10);
 __printf_chk(1,(const char *)"CALL-L1-10: %d\n",0x21);
 varargs_func(5,1,2,3,4);
 uVar1 = 0;
 __printf_chk(1,(const char *)&DAT_00101638,uVar1);
 __printf_chk(1,(const char *)&DAT_00101660,0x2a);
 __printf_chk(1,(const char *)&DAT_00101688,0x24);
 varargs_func(5,1,2,3,4);
 uVar1 = 0;
 __printf_chk(1,(const char *)&DAT_00101638,uVar1);
 __printf_chk(1,(const char *)&DAT_00101660,0x2a);
 __printf_chk(1,(const char *)&DAT_00101688,0x24);
 uVar1 = func_mixed_args(0x40091eb851eb851f,10,(char *)&DAT_001016b0,100);
 __printf_chk(1,(const char *)&DAT_001016b8,uVar1);
 lVar2 = 1;
 do {
 alStack_110[lVar2] = lVar2;
 lVar2 = lVar2 + 1;
 } while (lVar2 != 0x11);
 uStack_80 = alStack_110[2];
 local_88 = alStack_110[1];
 uStack_70 = alStack_110[4];
 uStack_78 = alStack_110[3];
 uStack_60 = alStack_110[6];
 local_68 = alStack_110[5];
 uStack_50 = alStack_110[8];
 uStack_58 = alStack_110[7];
 uStack_40 = alStack_110[10];
 local_48 = alStack_110[9];
 uStack_30 = alStack_110[0xc];
 uStack_38 = alStack_110[0xb];
 uStack_20 = alStack_110[0xe];
 local_28 = alStack_110[0xd];
 uStack_10 = alStack_110[0x10];
 uStack_18 = alStack_110[0xf];
 lVar2 = 0;
 plVar3 = &local_88;
 do {
 plVar4 = plVar3 + 1;
 lVar2 = lVar2 + *plVar3;
 plVar3 = plVar4;
 } while (&local_8 != plVar4);
 __printf_chk(1,(const char *)&DAT_001016e0,lVar2);
 __printf_chk(1,(const char *)&DAT_00101710,0x32);
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_by_value_int @ 00100dc0 */

int param_by_value_int(int param_1)

{
 return param_1 << 1;
}



/* Function: call_by_value_int @ 00100dc8 */

undefined8 call_by_value_int(void)

{
 return 0xf;
}



/* Function: param_by_value_ptr @ 00100dd0 */

undefined8 param_by_value_ptr(int *param_1)

{
 *param_1 = *param_1 << 1;
 return 1;
}



/* Function: call_by_value_ptr @ 00100de4 */

undefined8 call_by_value_ptr(void)

{
 return 0xb;
}



/* Function: param_array_decay @ 00100dec */

undefined8 param_array_decay(void)

{
 return 8;
}



/* Function: call_array_decay @ 00100df4 */

undefined8 call_array_decay(void)

{
 return 8;
}



/* Function: param_string @ 00100dfc */

int param_string(byte *param_1)

{
 return (uint)*param_1 + (uint)param_1[1];
}



/* Function: call_string_param @ 00100e0c */

undefined8 call_string_param(void)

{
 return 0xad;
}



/* Function: param_ptr_array @ 00100e14 */

int param_ptr_array(long param_1,int param_2)

{
 int iVar1;
 long lVar2;
 
 if (param_2 < 1) {
 iVar1 = 0;
 }
 else {
 lVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + (uint)**(byte **)(param_1 + lVar2 * 8);
 lVar2 = lVar2 + 1;
 } while ((int)lVar2 < param_2);
 }
 return iVar1;
}



/* Function: call_ptr_array @ 00100e4c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 call_ptr_array(void)

{
 undefined8 uVar1;
 undefined *local_20;
 undefined *puStack_18;
 undefined *local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_20 = PTR_DAT_00113010;
 puStack_18 = PTR_DAT_00113018;
 local_10 = PTR_DAT_00113020;
 uVar1 = param_ptr_array((long)&local_20,3);
 if (local_8 - ___stack_chk_guard == 0) {
 return uVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_varargs @ 00100eb4 */

void param_varargs(int param_1, ...)

{
 return;
}



/* Function: call_varargs_param @ 00100fa4 */

void call_varargs_param(void)

{
 param_varargs(4,10,0x14,0x1e,0x28);
 return;
}



/* Function: param_func_ptr @ 00100fcc */

int param_func_ptr(code *param_1,undefined4 param_2)

{
 int iVar1;
 
 iVar1 = (*param_1)(param_2);
 return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 00100fec */

void call_func_ptr_param(void)

{
 param_func_ptr((code *)callback_func,5);
 return;
}



/* Function: param_double_ptr @ 0010100c */

undefined8 param_double_ptr(undefined8 **param_1,undefined4 param_2)

{
 undefined8 uVar1;
 
 if (param_1 == (undefined8 **)0x0) {
 uVar1 = 0xffffffff;
 }
 else if ((undefined4 *)*param_1 == (undefined4 *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 *(undefined4 *)*param_1 = param_2;
 *param_1 = (undefined8 *)0;
 uVar1 = 1;
 }
 return uVar1;
}



/* Function: call_double_ptr @ 00101038 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_double_ptr(void)

{
 int iVar1;
 int local_14;
 int *local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_14 = 10;
 local_10 = &local_14;
 param_double_ptr((undefined8 **)(void *)&local_10,0x14);
 iVar1 = local_14;
 if (local_10 == (int *)0x0) {
 iVar1 = local_14 + 1;
 }
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_complex_cast @ 001010a8 */

int param_complex_cast(int *param_1,int param_2)

{
 int iVar1;
 
 if (param_2 == 0) {
 iVar1 = *param_1;
 }
 else if (param_2 == 1) {
 iVar1 = *param_1 + param_1[1];
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_complex_cast @ 001010d4 */

undefined8 call_complex_cast(void)

{
 return 0x12345678;
}



/* Function: param_struct_byval @ 001010e0 */

int param_struct_byval(int *param_1)

{
 return *param_1 + param_1[0xf];
}



/* Function: call_struct_byval @ 001010f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_struct_byval(void)

{
 int iVar1;
 int *piVar2;
 int local_48 [15];
 int local_c;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 iVar1 = 0;
 piVar2 = local_48;
 do {
 *piVar2 = iVar1;
 iVar1 = iVar1 + 1;
 piVar2 = piVar2 + 1;
 } while (iVar1 != 0x10);
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_order_dep @ 00101158 */

int param_order_dep(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: call_order_dep @ 00101160 */

undefined8 call_order_dep(void)

{
 return 4;
}



/* Function: test_parameter_passing @ 00101168 */

void test_parameter_passing(void)

{
 undefined4 uVar1;
 
 puts((const char *)&DAT_00101740);
 __printf_chk(1,(const char *)"PARAM-L1-01: %d\n",0xf);
 call_by_value_ptr();
 uVar1 = 0xb;
 __printf_chk(1,(const char *)"PARAM-L1-02: %d\n",uVar1);
 __printf_chk(1,(const char *)"PARAM-L2-01: %d\n",8);
 __printf_chk(1,(const char *)"PARAM-L2-02: %d\n",0xad);
 uVar1 = call_ptr_array();
 __printf_chk(1,(const char *)"PARAM-L2-03: %d\n",uVar1);
 call_varargs_param();
 uVar1 = 0;
 __printf_chk(1,(const char *)"PARAM-L2-04: %d\n",uVar1);
 call_func_ptr_param();
 uVar1 = 0;
 __printf_chk(1,(const char *)"PARAM-L3-01: %d\n",uVar1);
 call_double_ptr();
 uVar1 = 0;
 __printf_chk(1,(const char *)"PARAM-L3-02: %d\n",uVar1);
 uVar1 = call_complex_cast();
 __printf_chk(1,(const char *)"PARAM-L3-03: %d\n",uVar1);
 call_struct_byval();
 uVar1 = 0;
 __printf_chk(1,(const char *)"PARAM-L3-04: %d\n",uVar1);
 __printf_chk(1,(const char *)"PARAM-L3-05: %d\n",4);
 return;
}



/* Function: ret_basic_type @ 0010127c */

int ret_basic_type(int param_1)

{
 return param_1 << 1;
}



/* Function: call_ret_basic @ 00101284 */

undefined8 call_ret_basic(void)

{
 return 0x2a;
}



/* Function: ret_pointer @ 0010128c */

long ret_pointer(long param_1)

{
 return param_1 + 4;
}



/* Function: call_ret_pointer @ 00101294 */

undefined8 call_ret_pointer(void)

{
 return 0x14;
}



/* Function: ret_small_struct @ 0010129c */

ulong ret_small_struct(ulong param_1,long param_2)

{
 return param_1 & 0xffffffff | param_2 << 0x20;
}



/* Function: call_ret_small_struct @ 001012a8 */

undefined8 call_ret_small_struct(void)

{
 return 7;
}



/* Function: ret_large_struct @ 001012b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ret_large_struct(void *param_1,int param_2)

{
 long lVar1;
 long lVar2;
 int iStack_4c;
 undefined8 local_48;
 undefined8 uStack_40;
 undefined8 uStack_38;
 undefined8 uStack_30;
 undefined8 local_28;
 undefined8 uStack_20;
 undefined8 uStack_18;
 undefined8 uStack_10;
 long local_8;
 
 lVar1 = ___stack_chk_guard;
 local_8 = (long)___stack_chk_guard;
 lVar2 = 1;
do {
    ((undefined4 *)(&iStack_4c))[lVar2] = (int)(param_2 + -1 + lVar2);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x11);
 if (lVar1 - ___stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_ret_large_struct @ 0010132c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_ret_large_struct(void)

{
 int local_48 [15];
 int local_c;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 ret_large_struct((undefined8 *)local_48,100);
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: ret_func_ptr @ 00101388 */

code * ret_func_ptr(int param_1)

{
 code *pcVar1;
 
 pcVar1 = (code *)func_b;
 if (param_1 == 0) {
 pcVar1 = (code *)func_a;
 }
 return pcVar1;
}



/* Function: call_ret_func_ptr @ 001013a4 */

undefined8 call_ret_func_ptr(void)

{
 return 10;
}



/* Function: ret_opaque_handle @ 001013bc */

undefined8 * ret_opaque_handle(int param_1)

{
 undefined8 *puVar1;
 
 puVar1 = (undefined8 *)&handle1_1;
 if (param_1 != 0) {
 puVar1 = (undefined8 *)&handle2_0;
 }
 return puVar1;
}



/* Function: call_ret_opaque @ 001013e0 */

undefined4 call_ret_opaque(void)

{
 return handle1_1;
}



/* Function: ret_complex_expr @ 001013ec */

int ret_complex_expr(int param_1,int param_2,int param_3)

{
 int iVar1;
 
 iVar1 = param_3 + 10;
 if (param_2 < param_1) {
 iVar1 = param_3 << 1;
 }
 return iVar1;
}



/* Function: call_ret_complex_expr @ 00101400 */

undefined8 call_ret_complex_expr(void)

{
 return 0x28;
}



/* Function: ret_multi_branch @ 00101408 */

undefined4 ret_multi_branch(int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0x14;
 if (((param_1 != 1) && (uVar1 = 0x1e, param_1 != 2)) && (uVar1 = 10, param_1 != 0)) {
 uVar1 = 0xffffffff;
 }
 return uVar1;
}



/* Function: call_ret_multi_branch @ 00101434 */

undefined8 call_ret_multi_branch(void)

{
 return 0x3c;
}



/* Function: ret_void @ 0010143c */

void ret_void(int param_1,int *param_2)

{
 *param_2 = param_1 * 3;
 return;
}



/* Function: call_ret_void @ 00101448 */

undefined8 call_ret_void(void)

{
 return 0x15;
}



/* Function: test_return_values @ 00101450 */

void test_return_values(void)

{
 undefined4 uVar1;
 
 puts((const char *)&DAT_00101870);
 __printf_chk(1,(const char *)&DAT_00101890,0x2a);
 uVar1 = call_ret_pointer();
 __printf_chk(1,(const char *)&DAT_001018b0,uVar1);
 uVar1 = call_ret_small_struct();
 __printf_chk(1,(const char *)&DAT_001018d0,uVar1);
 call_ret_large_struct();
 uVar1 = 0;
 __printf_chk(1,(const char *)&DAT_001018f0,uVar1);
 call_ret_func_ptr();
 uVar1 = 0;
 __printf_chk(1,(const char *)&DAT_00101910,uVar1);
 __printf_chk(1,(const char *)&DAT_00101930,handle1_1);
 __printf_chk(1,(const char *)&DAT_00101950,0x28);
 __printf_chk(1,(const char *)&DAT_00101970,0x3c);
 __printf_chk(1,(const char *)&DAT_00101990,0x15);
 return;
}



/* Function: main @ 00101534 */

undefined8 main(void)

{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 80 */
