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
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned char byte;
typedef unsigned long long ulonglong;
typedef unsigned int uint;
typedef unsigned char bool;
typedef void (*code)(void);

/* LZCOUNT macro for counting leading zeros */
#define LZCOUNT(x) ((x) == 0 ? 32 : __builtin_clz(x))

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/4/4_clang_O2_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */


/* External data declarations */
extern char DAT_0001170a[];
extern char DAT_00011460[];
extern char DAT_00011488[];
extern char DAT_000114aa[];
extern char DAT_000114d1[];
extern char DAT_000114f9[];
extern char DAT_00011525[];
extern char DAT_0001172b[];
extern char DAT_0001160d[];
extern char DAT_00011629[];
extern char DAT_00011645[];
extern char DAT_00011660[];
extern char DAT_0001167d[];
extern char DAT_00011699[];
extern char DAT_000116b6[];
extern char DAT_000116d2[];
extern char DAT_000116ee[];
extern undefined4 ret_opaque_handle_handle1;
extern undefined4 ret_opaque_handle_handle2;
extern undefined8 ret_opaque_handle_handle1_storage;
extern undefined8 ret_opaque_handle_handle2_storage;

/* Global variable definitions */
char DAT_0001174c[] = "Return values test";
undefined4 ret_opaque_handle_handle1_value = 0xdeadbeef;

/* Forward declarations for compiler runtime functions */
extern ulonglong __adddf3(uint param_1,uint param_2,uint param_3,uint param_4);
extern ulonglong __floatsidf(uint param_1);
extern ulonglong __floatdidf(uint param_1,uint param_2);
extern ulonglong __floatundidf(uint param_1,uint param_2);
extern ulonglong __extendsfdf2(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4);
extern uint __fixdfsi(uint param_1,uint param_2);
extern void __aeabi_drsub(undefined4 param_1,uint param_2,uint param_3,uint param_4);
extern ulonglong __subdf3(uint param_1,uint param_2,uint param_3,uint param_4);

/* Forward declarations for user functions */
extern undefined8 * ret_opaque_handle(void);

/* Standard library function declarations */
extern int printf(const char *format, ...);
extern int puts(const char *s);
extern size_t strlen(const char *s);

/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: cdecl_func @ 000105c0 */

int cdecl_func(int param_1,int param_2)

{
 return param_2 + param_1;
}



/* Function: call_cdecl @ 000105c8 */

undefined4 call_cdecl(void)

{
 return 0xf;
}



/* Function: stdcall_func @ 000105d0 */

int stdcall_func(int param_1,int param_2)

{
 return param_2 * param_1;
}



/* Function: call_stdcall @ 000105dc */

undefined4 call_stdcall(void)

{
 return 0x32;
}



/* Function: fastcall_func @ 000105e4 */

int fastcall_func(int param_1,int param_2,int param_3)

{
 return param_2 + param_1 + param_3;
}



/* Function: call_fastcall @ 000105f0 */

undefined4 call_fastcall(void)

{
 return 6;
}



/* Function: call_thiscall @ 000105f8 */

undefined4 call_thiscall(void)

{
 return 0xf;
}



/* Function: arm_aapcs_func @ 00010600 */

int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_2 + param_1 + param_3 + param_4 + param_5;
}



/* Function: call_arm_aapcs @ 00010618 */

undefined4 call_arm_aapcs(void)

{
 return 0xf;
}



/* Function: mips_func @ 00010620 */

int mips_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_2 + param_1 + param_3 + param_4;
}



/* Function: call_mips @ 00010630 */

undefined4 call_mips(void)

{
 return 100;
}



/* Function: amd64_sysv_func @ 00010638 */

int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
 return param_2 + param_1 + param_3 + param_4 + param_5 + param_6;
}



/* Function: call_amd64_sysv @ 00010658 */

undefined4 call_amd64_sysv(void)

{
 return 0x15;
}



/* Function: ms_x64_func @ 00010660 */

int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_2 + param_1 + param_3 + param_4 + param_5;
}



/* Function: call_ms_x64 @ 00010678 */

undefined4 call_ms_x64(void)

{
 return 0xf;
}



/* Function: vectorcall_func @ 00010680 */

int vectorcall_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_2 + param_1 + param_3 + param_4;
}



/* Function: call_vectorcall @ 00010690 */

undefined4 call_vectorcall(void)

{
 return 10;
}



/* Function: mixed_conventions_test @ 00010698 */

undefined4 mixed_conventions_test(void)

{
 return 0x21;
}



/* Function: varargs_func @ 000106a0 */

int varargs_func(int param_1, ...)

{
 int *piVar1;
 int iVar2;
 int local_c [3];
 
 if (param_1 < 1) {
 iVar2 = 0;
 }
 else {
 iVar2 = 0;
 piVar1 = local_c;
 do {
 param_1 = param_1 + -1;
 iVar2 = *piVar1 + iVar2;
 piVar1 = piVar1 + 1;
 } while (param_1 != 0);
 }
 return iVar2;
}



/* Function: func_no_args @ 000106f0 */

undefined4 func_no_args(void)

{
 return 0x2a;
}



/* Function: func_many_args @ 000106f8 */

int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
 int param_7,int param_8)

{
 return param_2 + param_1 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}



/* Function: func_mixed_args @ 00010728 */

void func_mixed_args(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,
 undefined4 param_5,undefined4 param_6)

{
 size_t sVar1;
 undefined8 uVar2;
 undefined8 uVar3;
 
 if (param_2 == (char *)0x0) {
 sVar1 = 0;
 }
 else {
 sVar1 = strlen(param_2);
 }
 uVar2 = __floatsidf(sVar1 + param_1);
 uVar2 = __adddf3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),param_3,param_4);
 uVar3 = __floatdidf(param_5,param_6);
 uVar2 = __adddf3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),(int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
 return;
}



/* Function: func_struct_byval @ 000107a0 */

int func_struct_byval(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
 undefined4 param_6,int param_7,undefined4 param_8,int param_9,
 undefined4 param_10,int param_11,undefined4 param_12,int param_13,
 undefined4 param_14,int param_15,undefined4 param_16,int param_17,
 undefined4 param_18,int param_19,undefined4 param_20,int param_21,
 undefined4 param_22,int param_23,undefined4 param_24,int param_25,
 undefined4 param_26,int param_27,undefined4 param_28,int param_29,
 undefined4 param_30,int param_31)

{
 return param_31 +
 param_29 +
 param_27 +
 param_25 +
 param_23 +
 param_21 +
 param_19 +
 param_17 + param_15 + param_13 + param_11 + param_9 + param_7 + param_5 + param_3 + param_1
 ;
}



/* Function: func_struct_byptr @ 00010824 */

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



/* Function: test_calling_conventions @ 00010838 */

void test_calling_conventions(void)

{
 undefined4 uVar1;
 
 puts(&DAT_0001170a);
 printf("CALL-L1-01: %d\n",0xf);
 printf("CALL-L1-02: %d\n",0x32);
 printf("CALL-L1-03: %d\n",6);
 printf("CALL-L1-04: %d\n",0xf);
 printf("CALL-L1-05: %d\n",0xf);
 printf("CALL-L1-06: %d\n",100);
 printf("CALL-L1-07: %d\n",0x15);
 printf("CALL-L1-08: %d\n",0xf);
 printf("CALL-L1-09: %d\n",10);
 printf("CALL-L1-10: %d\n",0x21);
 uVar1 = varargs_func(5,1,2,3,4,5);
 printf(&DAT_00011460,uVar1);
 printf(&DAT_00011488,0x2a);
 printf(&DAT_000114aa,0x24);
 printf(&DAT_000114d1,0x75);
 printf(&DAT_000114f9,0x88);
 printf(&DAT_00011525,0x32);
 return;
}



/* Function: param_by_value_int @ 000109bc */

int param_by_value_int(int param_1)

{
 return param_1 << 1;
}



/* Function: call_by_value_int @ 000109c4 */

undefined4 call_by_value_int(void)

{
 return 0xf;
}



/* Function: param_by_value_ptr @ 000109cc */

undefined4 param_by_value_ptr(int *param_1)

{
 *param_1 = *param_1 << 1;
 return 1;
}



/* Function: call_by_value_ptr @ 000109e0 */

undefined4 call_by_value_ptr(void)

{
 return 0xb;
}



/* Function: param_array_decay @ 000109e8 */

undefined4 param_array_decay(void)

{
 return 4;
}



/* Function: call_array_decay @ 000109f0 */

undefined4 call_array_decay(void)

{
 return 4;
}



/* Function: param_string @ 000109f8 */

int param_string(byte *param_1)

{
 return (uint)param_1[1] + (uint)*param_1;
}



/* Function: call_string_param @ 00010a08 */

undefined4 call_string_param(void)

{
 return 0xad;
}



/* Function: param_ptr_array @ 00010a10 */

int param_ptr_array(undefined4 *param_1,int param_2)

{
 int iVar1;
 
 if (0 < param_2) {
 iVar1 = 0;
 do {
 param_2 = param_2 + -1;
 iVar1 = iVar1 + (uint)*(byte *)*param_1;
 param_1 = param_1 + 1;
 } while (param_2 != 0);
 return iVar1;
 }
 return 0;
}



/* Function: call_ptr_array @ 00010a40 */

undefined4 call_ptr_array(void)

{
 return 300;
}



/* Function: param_varargs @ 00010a48 */

int param_varargs(int param_1, ...)

{
 int *piVar1;
 int iVar2;
 int local_c [3];
 
 if (param_1 < 1) {
 iVar2 = 0;
 }
 else {
 iVar2 = 0;
 piVar1 = local_c;
 do {
 param_1 = param_1 + -1;
 iVar2 = *piVar1 + iVar2;
 piVar1 = piVar1 + 1;
 } while (param_1 != 0);
 }
 return iVar2;
}



/* Function: call_varargs_param @ 00010a98 */

void call_varargs_param(void)

{
 param_varargs(4,10,0x14,0x1e,0x28);
 return;
}



/* Function: param_func_ptr @ 00010ac8 */

int param_func_ptr(code *param_1,undefined4 param_2)

{
 int iVar1;
 
 iVar1 = (*param_1)(param_2);
 return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 00010ae8 */

undefined4 call_func_ptr_param(void)

{
 return 0x14;
}



/* Function: param_double_ptr @ 00010af0 */

undefined4 param_double_ptr(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
 undefined4 uVar1;
 
 uVar1 = 0xffffffff;
 if (param_1 != (int *)0x0) {
 param_4 = (undefined4 *)*param_1;
 }
 if (param_1 != (int *)0x0 && param_4 != (undefined4 *)0x0) {
 *param_4 = param_2;
 *param_1 = 0;
 uVar1 = 1;
 }
 return uVar1;
}



/* Function: call_double_ptr @ 00010b18 */

undefined4 call_double_ptr(void)

{
 return 0x15;
}



/* Function: param_complex_cast @ 00010b20 */

int param_complex_cast(int *param_1,int param_2)

{
 if (param_2 == 1) {
 return param_1[1] + *param_1;
 }
 if (param_2 != 0) {
 return -1;
 }
 return *param_1;
}



/* Function: call_complex_cast @ 00010b54 */

undefined4 call_complex_cast(void)

{
 return 0x12345678;
}



/* Function: param_struct_byval @ 00010b60 */

int param_struct_byval(int param_1)

{
 int in_stack_0000002c;
 
 return param_1 + in_stack_0000002c;
}



/* Function: call_struct_byval @ 00010b6c */

undefined4 call_struct_byval(void)

{
 return 0xf;
}



/* Function: param_order_dep @ 00010b74 */

int param_order_dep(int param_1,int param_2)

{
 return param_2 + param_1;
}



/* Function: call_order_dep @ 00010b7c */

undefined4 call_order_dep(void)

{
 return 3;
}



/* Function: test_parameter_passing @ 00010b84 */

void test_parameter_passing(void)

{
 undefined4 uVar1;
 
 puts(&DAT_0001172b);
 printf("PARAM-L1-01: %d\n",0xf);
 printf("PARAM-L1-02: %d\n",0xb);
 printf("PARAM-L2-01: %d\n",4);
 printf("PARAM-L2-02: %d\n",0xad);
 printf("PARAM-L2-03: %d\n",300);
 uVar1 = param_varargs(4,10,0x14,0x1e,0x28);
 printf("PARAM-L2-04: %d\n",uVar1);
 printf("PARAM-L3-01: %d\n",0x14);
 printf("PARAM-L3-02: %d\n",0x15);
 printf("PARAM-L3-03: %d\n",0x12345678);
 printf("PARAM-L3-04: %d\n",0xf);
 printf("PARAM-L3-05: %d\n",3);
 return;
}



/* Function: ret_basic_type @ 00010ca0 */

int ret_basic_type(int param_1)

{
 return param_1 << 1;
}



/* Function: call_ret_basic @ 00010ca8 */

undefined4 call_ret_basic(void)

{
 return 0x2a;
}



/* Function: ret_pointer @ 00010cb0 */

int ret_pointer(int param_1)

{
 return param_1 + 4;
}



/* Function: call_ret_pointer @ 00010cb8 */

undefined4 call_ret_pointer(void)

{
 return 0x14;
}



/* Function: ret_small_struct @ 00010cc0 */

void ret_small_struct(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
 *param_1 = param_2;
 param_1[1] = param_3;
 return;
}



/* Function: call_ret_small_struct @ 00010cc8 */

undefined4 call_ret_small_struct(void)

{
 return 7;
}



/* Function: ret_large_struct @ 00010cd0 */

void ret_large_struct(int *param_1,int param_2)

{
 param_1[0xc] = param_2 + 0xc;
 param_1[0xf] = param_2 + 0xf;
 param_1[8] = param_2 + 8;
 param_1[9] = param_2 + 9;
 param_1[10] = param_2 + 10;
 param_1[0xb] = param_2 + 0xb;
 param_1[0xd] = param_2 + 0xd;
 param_1[0xe] = param_2 + 0xe;
 *param_1 = param_2;
 param_1[1] = param_2 + 1;
 param_1[2] = param_2 + 2;
 param_1[3] = param_2 + 3;
 param_1[4] = param_2 + 4;
 param_1[5] = param_2 + 5;
 param_1[6] = param_2 + 6;
 param_1[7] = param_2 + 7;
 return;
}



/* Function: call_ret_large_struct @ 00010d44 */

undefined4 call_ret_large_struct(void)

{
 return 0xd7;
}



/* Function: func_a @ 00010d4c */

int func_a(int param_1)

{
 return param_1 + 10;
}



/* Function: func_b @ 00010d54 */

int func_b(int param_1)

{
 return param_1 << 1;
}



/* Function: ret_func_ptr @ 00010d5c */

code * ret_func_ptr(int param_1)

{
 code *pcVar1;
 
 pcVar1 = (code *)func_b;
 if (param_1 == 0) {
 pcVar1 = (code *)func_a;
 }
 return pcVar1;
}



/* Function: call_ret_func_ptr @ 00010d84 */

undefined4 call_ret_func_ptr(void)

{
 return 10;
}



/* Function: ret_opaque_handle @ 00010d8c */

undefined8 * ret_opaque_handle(void)

{
 undefined8 *puVar1;
 
 puVar1 = &ret_opaque_handle_handle2;
 return puVar1;
}



/* Function: call_ret_opaque @ 00010db4 */

undefined4 call_ret_opaque(void)

{
 undefined8 *puVar1;
 puVar1 = ret_opaque_handle();
 return (undefined4)*puVar1;
}



/* Function: ret_complex_expr @ 00010dc4 */

int ret_complex_expr(int param_1,int param_2,int param_3)

{
 int iVar1;
 
 iVar1 = param_3 + 10;
 if (param_2 < param_1) {
 iVar1 = param_3 << 1;
 }
 return iVar1;
}



/* Function: call_ret_complex_expr @ 00010dd8 */

undefined4 call_ret_complex_expr(void)

{
 return 0x28;
}



/* Function: ret_multi_branch @ 00010de0 */

int ret_multi_branch(uint param_1)

{
 int iVar1;
 
 iVar1 = -1;
 if (param_1 < 3) {
 iVar1 = param_1 * 10 + 10;
 }
 return iVar1;
}



/* Function: call_ret_multi_branch @ 00010dfc */

undefined4 call_ret_multi_branch(void)

{
 return 0x3c;
}



/* Function: ret_void @ 00010e04 */

void ret_void(int param_1,int *param_2)

{
 *param_2 = param_1 * 3;
 return;
}



/* Function: call_ret_void @ 00010e10 */

undefined4 call_ret_void(void)

{
 return 0x15;
}



/* Function: test_return_values @ 00010e18 */

void test_return_values(void)

{
 printf("%s\n", DAT_0001174c);
 printf("%d\n", 0x2a);
 printf("%d\n", 0x14);
 printf("%d\n", 7);
 printf("%d\n", 0xd7);
 printf("%d\n", 10);
 printf("%d\n", (int)*ret_opaque_handle());
 printf("%d\n", 0x28);
 printf("%d\n", 0x3c);
 printf("%d\n", 0x15);
 return;
}



/* Function: main @ 00010eec */

undefined4 main(void)

{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}





/* Function: __aeabi_drsub @ 00010f08 */

void __aeabi_drsub(undefined4 param_1,uint param_2,uint param_3,uint param_4)

{
 __adddf3((uint)param_1,param_2 ^ 0x80000000,param_3,param_4);
 return;
}



/* Function: __subdf3 @ 00010f10 */

ulonglong __subdf3(uint param_1,uint param_2,uint param_3,uint param_4)

{
 int iVar1;
 byte bVar2;
 byte bVar3;
 uint uVar4;
 uint uVar5;
 uint uVar6;
 uint uVar7;
 uint uVar8;
 uint uVar9;
 int iVar10;
 uint uVar11;
 uint uVar12;
 uint uVar13;
 bool bVar14;
 bool bVar15;
 
 uVar8 = param_4 ^ 0x80000000;
 uVar11 = param_2 << 1;
 param_4 = param_4 << 1;
 iVar10 = (int)uVar11 >> 0x15;
 iVar1 = (int)param_4 >> 0x15;
 if ((((uVar11 == param_4 && param_1 == param_3 || uVar11 == 0 && param_1 == 0) ||
 param_4 == 0 && param_3 == 0) || iVar10 == -1) || iVar1 == -1) {
 if (iVar10 == -1 || iVar1 == -1) {
 uVar11 = param_3;
 uVar12 = uVar8;
 if (iVar10 == -1) {
 uVar11 = param_1;
 uVar12 = param_2;
 }
 if (iVar10 != -1 || iVar1 != -1) {
 param_3 = uVar11;
 uVar8 = uVar12;
 }
 bVar14 = (uVar12 & 0xfffff) == 0;
 bVar15 = uVar11 == 0 && bVar14;
 if (uVar11 == 0 && bVar14) {
 bVar15 = param_3 == 0 && (uVar8 & 0xfffff) == 0;
 }
 if (!bVar15 || uVar12 != uVar8) {
 uVar12 = uVar12 | 0x80000;
 }
 return CONCAT44(uVar12,uVar11);
 }
 if (uVar11 != param_4 || param_1 != param_3) {
 if (uVar11 == 0 && param_1 == 0) {
 param_1 = param_3;
 param_2 = uVar8;
 }
 return CONCAT44(param_2,param_1);
 }
 if (param_2 != uVar8) {
 return 0;
 }
 if (uVar11 >> 0x15 == 0) {
 bVar2 = (byte)(param_1 >> 0x1f);
 uVar11 = param_2 * 2 + (uint)bVar2;
 if (CARRY4(param_2,param_2) || CARRY4(param_2 * 2,(uint)bVar2)) {
 uVar11 = uVar11 | 0x80000000;
 }
 return CONCAT44(uVar11,param_1 << 1);
 }
 if (uVar11 < 0xffc00000) {
 return CONCAT44(param_2 + 0x100000,param_1);
 }
 param_2 = param_2 & 0x80000000;
LAB_00011184:
 return (ulonglong)(param_2 | 0x7ff00000) << 0x20;
 }
 uVar11 = uVar11 >> 0x15;
 param_4 = param_4 >> 0x15;
 uVar12 = param_4 - uVar11;
 bVar14 = uVar12 != 0;
 if (param_4 < uVar11) {
 uVar12 = -uVar12;
 }
 uVar6 = param_1;
 uVar9 = param_2;
 if (bVar14 && uVar11 <= param_4) {
 uVar11 = uVar11 + uVar12;
 uVar6 = param_3;
 uVar9 = uVar8;
 param_3 = param_1;
 uVar8 = param_2;
 }
 if (0x36 < uVar12) {
 return CONCAT44(uVar9,uVar6);
 }
 uVar5 = uVar9 & 0xfffff | 0x100000;
 if ((uVar9 & 0x80000000) != 0) {
 bVar14 = uVar6 != 0;
 uVar6 = -uVar6;
 uVar5 = -(uVar5 + bVar14);
 }
 uVar9 = uVar8 & 0xfffff | 0x100000;
 if ((uVar8 & 0x80000000) != 0) {
 bVar14 = param_3 != 0;
 param_3 = -param_3;
 uVar9 = -(uVar9 + bVar14);
 }
 if (uVar11 == uVar12) {
 uVar9 = uVar9 ^ 0x100000;
 if (uVar11 == 0) {
 uVar5 = uVar5 ^ 0x100000;
 uVar11 = 1;
 }
 else {
 uVar12 = uVar12 - 1;
 }
 }
 uVar8 = -uVar12 + 0x20;
 if ((int)uVar12 < 0x21) {
 uVar13 = param_3 << (uVar8 & 0xff);
 param_3 = param_3 >> (uVar12 & 0xff);
 uVar4 = uVar6 + param_3;
 uVar7 = uVar9 << (uVar8 & 0xff);
 uVar8 = uVar4 + uVar7;
 uVar12 = uVar5 + CARRY4(uVar6,param_3) + ((int)uVar9 >> (uVar12 & 0xff)) +
 (uint)CARRY4(uVar4,uVar7);
 }
 else {
 uVar13 = uVar9 << (-uVar12 + 0x40 & 0xff);
 if (param_3 != 0) {
 uVar13 = uVar13 | 2;
 }
 uVar12 = (int)uVar9 >> (uVar12 - 0x20 & 0xff);
 uVar8 = uVar6 + uVar12;
 uVar12 = uVar5 + ((int)uVar9 >> 0x1f) + (uint)CARRY4(uVar6,uVar12);
 }
 param_2 = uVar12 & 0x80000000;
 uVar6 = uVar12;
 if ((int)uVar12 < 0) {
 bVar14 = uVar13 == 0;
 uVar13 = -uVar13;
 uVar6 = -uVar8;
 uVar8 = -(uVar8 + !bVar14);
 uVar6 = -(uVar12 + (bVar14 <= uVar6));
 }
 if (0xfffff < uVar6) {
 uVar9 = uVar11 - 1;
 if (0x1fffff < uVar6) {
 bVar2 = (byte)uVar6;
 uVar6 = uVar6 >> 1;
 bVar3 = (byte)uVar8;
 uVar8 = (uint)(bVar2 & 1) << 0x1f | uVar8 >> 1;
 uVar13 = (uint)(bVar3 & 1) << 0x1f | uVar13 >> 1;
 uVar9 = uVar11;
 if (0xffbfffff < uVar11 * 0x200000) goto LAB_00011184;
 }
LAB_0001102c:
 bVar14 = 0x7fffffff < uVar13;
 if (uVar13 == 0x80000000) {
 bVar14 = (bool)((byte)uVar8 & 1);
 }
 return CONCAT44(uVar6 + uVar9 * 0x100000 + (uint)CARRY4(uVar8,(uint)bVar14) | param_2,
 uVar8 + bVar14);
 }
 bVar2 = (byte)(uVar13 >> 0x1f);
 uVar13 = uVar13 << 1;
 uVar9 = uVar8 * 2;
 bVar14 = CARRY4(uVar8,uVar8);
 uVar8 = uVar8 * 2 + (uint)bVar2;
 uVar6 = uVar6 * 2 + (uint)(bVar14 || CARRY4(uVar9,(uint)bVar2));
 uVar9 = uVar11 - 2;
 if (uVar11 - 1 != 0 && 0xfffff < uVar6) goto LAB_0001102c;
 uVar11 = uVar8;
 uVar5 = uVar6;
 if (uVar6 == 0) {
 uVar11 = 0;
 uVar5 = uVar8;
 }
 iVar10 = LZCOUNT(uVar5);
 if (uVar6 == 0) {
 iVar10 = iVar10 + 0x20;
 }
 uVar4 = iVar10 - 0xb;
 bVar15 = SBORROW4(uVar4,0x20);
 uVar7 = iVar10 - 0x2b;
 bVar14 = uVar7 == 0;
 uVar8 = uVar7;
 uVar6 = uVar7;
 if ((int)uVar4 < 0x20) {
 bVar15 = SCARRY4(uVar7,0xc);
 uVar6 = iVar10 - 0x1f;
 bVar14 = uVar6 == 0;
 uVar8 = uVar4;
 if (!bVar14 && -0xd < (int)uVar7) {
 uVar11 = uVar5 << (uVar4 & 0xff);
 uVar5 = uVar5 >> (0xc - uVar6 & 0xff);
 goto LAB_000110ac;
 }
 }
 if (bVar14 || (int)uVar6 < 0 != bVar15) {
 uVar13 = 0x20 - uVar8;
 }
 uVar5 = uVar5 << (uVar8 & 0xff);
 if (bVar14 || (int)uVar6 < 0 != bVar15) {
 uVar5 = uVar5 | uVar11 >> (uVar13 & 0xff);
 uVar11 = uVar11 << (uVar8 & 0xff);
 }
LAB_000110ac:
 if ((int)uVar4 <= (int)uVar9) {
 return CONCAT44(uVar5 + (uVar9 - uVar4) * 0x100000 | param_2,uVar11);
 }
 uVar8 = ~(uVar9 - uVar4);
 if ((int)uVar8 < 0x1f) {
 if (uVar8 - 0x13 != 0 && -0xd < (int)(uVar8 - 0x1f)) {
 uVar8 = 0xc - (uVar8 - 0x13);
 return CONCAT44(uVar12,uVar11 >> (0x20 - uVar8 & 0xff) | uVar5 << (uVar8 & 0xff)) &
 0x80000000ffffffff;
 }
 uVar8 = uVar8 + 1;
 return CONCAT44(param_2 | uVar5 >> (uVar8 & 0xff),
 uVar11 >> (uVar8 & 0xff) | uVar5 << (0x20 - uVar8 & 0xff));
 }
 return CONCAT44(uVar12,uVar5 >> (uVar8 - 0x1f & 0xff)) & 0x80000000ffffffff;
}



/* Function: __adddf3 @ 00010f14 */

ulonglong __adddf3(uint param_1,uint param_2,uint param_3,uint param_4)

{
 int iVar1;
 byte bVar2;
 byte bVar3;
 uint uVar4;
 uint uVar5;
 uint uVar6;
 uint uVar7;
 int iVar8;
 uint uVar9;
 uint uVar10;
 uint uVar11;
 uint uVar12;
 uint uVar13;
 bool bVar14;
 bool bVar15;
 
 uVar9 = param_2 << 1;
 uVar5 = param_4 << 1;
 iVar8 = (int)uVar9 >> 0x15;
 iVar1 = (int)uVar5 >> 0x15;
 if ((((uVar9 == uVar5 && param_1 == param_3 || uVar9 == 0 && param_1 == 0) ||
 uVar5 == 0 && param_3 == 0) || iVar8 == -1) || iVar1 == -1) {
 if (iVar8 == -1 || iVar1 == -1) {
 uVar9 = param_3;
 uVar5 = param_4;
 if (iVar8 == -1) {
 uVar9 = param_1;
 uVar5 = param_2;
 }
 if (iVar8 != -1 || iVar1 != -1) {
 param_3 = uVar9;
 param_4 = uVar5;
 }
 bVar14 = (uVar5 & 0xfffff) == 0;
 bVar15 = uVar9 == 0 && bVar14;
 if (uVar9 == 0 && bVar14) {
 bVar15 = param_3 == 0 && (param_4 & 0xfffff) == 0;
 }
 if (!bVar15 || uVar5 != param_4) {
 uVar5 = uVar5 | 0x80000;
 }
 return CONCAT44(uVar5,uVar9);
 }
 if (uVar9 != uVar5 || param_1 != param_3) {
 if (uVar9 == 0 && param_1 == 0) {
 param_1 = param_3;
 param_2 = param_4;
 }
 return CONCAT44(param_2,param_1);
 }
 if (param_2 != param_4) {
 return 0;
 }
 if (uVar9 >> 0x15 == 0) {
 bVar2 = (byte)(param_1 >> 0x1f);
 uVar9 = param_2 * 2 + (uint)bVar2;
 if (CARRY4(param_2,param_2) || CARRY4(param_2 * 2,(uint)bVar2)) {
 uVar9 = uVar9 | 0x80000000;
 }
 return CONCAT44(uVar9,param_1 << 1);
 }
 if (uVar9 < 0xffc00000) {
 return CONCAT44(param_2 + 0x100000,param_1);
 }
 param_2 = param_2 & 0x80000000;
LAB_00011184:
 return (ulonglong)(param_2 | 0x7ff00000) << 0x20;
 }
 uVar9 = uVar9 >> 0x15;
 uVar5 = uVar5 >> 0x15;
 uVar11 = uVar5 - uVar9;
 bVar14 = uVar11 != 0;
 if (uVar5 < uVar9) {
 uVar11 = -uVar11;
 }
 uVar10 = param_1;
 uVar7 = param_2;
 if (bVar14 && uVar9 <= uVar5) {
 uVar9 = uVar9 + uVar11;
 uVar10 = param_3;
 uVar7 = param_4;
 param_3 = param_1;
 param_4 = param_2;
 }
 if (0x36 < uVar11) {
 return CONCAT44(uVar7,uVar10);
 }
 uVar5 = uVar7 & 0xfffff | 0x100000;
 if ((uVar7 & 0x80000000) != 0) {
 bVar14 = uVar10 != 0;
 uVar10 = -uVar10;
 uVar5 = -(uVar5 + bVar14);
 }
 uVar7 = param_4 & 0xfffff | 0x100000;
 if ((param_4 & 0x80000000) != 0) {
 bVar14 = param_3 != 0;
 param_3 = -param_3;
 uVar7 = -(uVar7 + bVar14);
 }
 if (uVar9 == uVar11) {
 uVar7 = uVar7 ^ 0x100000;
 if (uVar9 == 0) {
 uVar5 = uVar5 ^ 0x100000;
 uVar9 = 1;
 }
 else {
 uVar11 = uVar11 - 1;
 }
 }
 uVar13 = -uVar11 + 0x20;
 if ((int)uVar11 < 0x21) {
 uVar12 = param_3 << (uVar13 & 0xff);
 param_3 = param_3 >> (uVar11 & 0xff);
 uVar4 = uVar10 + param_3;
 uVar6 = uVar7 << (uVar13 & 0xff);
 uVar13 = uVar4 + uVar6;
 uVar5 = uVar5 + CARRY4(uVar10,param_3) + ((int)uVar7 >> (uVar11 & 0xff)) +
 (uint)CARRY4(uVar4,uVar6);
 }
 else {
 uVar12 = uVar7 << (-uVar11 + 0x40 & 0xff);
 if (param_3 != 0) {
 uVar12 = uVar12 | 2;
 }
 uVar11 = (int)uVar7 >> (uVar11 - 0x20 & 0xff);
 uVar13 = uVar10 + uVar11;
 uVar5 = uVar5 + ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar10,uVar11);
 }
 param_2 = uVar5 & 0x80000000;
 uVar11 = uVar5;
 if ((int)uVar5 < 0) {
 bVar14 = uVar12 == 0;
 uVar12 = -uVar12;
 uVar11 = -uVar13;
 uVar13 = -(uVar13 + !bVar14);
 uVar11 = -(uVar5 + (bVar14 <= uVar11));
 }
 if (0xfffff < uVar11) {
 uVar10 = uVar9 - 1;
 if (0x1fffff < uVar11) {
 bVar2 = (byte)uVar11;
 uVar11 = uVar11 >> 1;
 bVar3 = (byte)uVar13;
 uVar13 = (uint)(bVar2 & 1) << 0x1f | uVar13 >> 1;
 uVar12 = (uint)(bVar3 & 1) << 0x1f | uVar12 >> 1;
 uVar10 = uVar9;
 if (0xffbfffff < uVar9 * 0x200000) goto LAB_00011184;
 }
LAB_0001102c:
 bVar14 = 0x7fffffff < uVar12;
 if (uVar12 == 0x80000000) {
 bVar14 = (bool)((byte)uVar13 & 1);
 }
 return CONCAT44(uVar11 + uVar10 * 0x100000 + (uint)CARRY4(uVar13,(uint)bVar14) | param_2,
 uVar13 + bVar14);
 }
 bVar2 = (byte)(uVar12 >> 0x1f);
 uVar12 = uVar12 << 1;
 uVar10 = uVar13 * 2;
 bVar14 = CARRY4(uVar13,uVar13);
 uVar13 = uVar13 * 2 + (uint)bVar2;
 uVar11 = uVar11 * 2 + (uint)(bVar14 || CARRY4(uVar10,(uint)bVar2));
 uVar10 = uVar9 - 2;
 if (uVar9 - 1 != 0 && 0xfffff < uVar11) goto LAB_0001102c;
 uVar9 = uVar13;
 uVar7 = uVar11;
 if (uVar11 == 0) {
 uVar9 = 0;
 uVar7 = uVar13;
 }
 iVar8 = LZCOUNT(uVar7);
 if (uVar11 == 0) {
 iVar8 = iVar8 + 0x20;
 }
 uVar4 = iVar8 - 0xb;
 bVar15 = SBORROW4(uVar4,0x20);
 uVar6 = iVar8 - 0x2b;
 bVar14 = uVar6 == 0;
 uVar11 = uVar6;
 uVar13 = uVar6;
 if ((int)uVar4 < 0x20) {
 bVar15 = SCARRY4(uVar6,0xc);
 uVar13 = iVar8 - 0x1f;
 bVar14 = uVar13 == 0;
 uVar11 = uVar4;
 if (!bVar14 && -0xd < (int)uVar6) {
 uVar9 = uVar7 << (uVar4 & 0xff);
 uVar7 = uVar7 >> (0xc - uVar13 & 0xff);
 goto LAB_000110ac;
 }
 }
 if (bVar14 || (int)uVar13 < 0 != bVar15) {
 uVar12 = 0x20 - uVar11;
 }
 uVar7 = uVar7 << (uVar11 & 0xff);
 if (bVar14 || (int)uVar13 < 0 != bVar15) {
 uVar7 = uVar7 | uVar9 >> (uVar12 & 0xff);
 uVar9 = uVar9 << (uVar11 & 0xff);
 }
LAB_000110ac:
 if ((int)uVar4 <= (int)uVar10) {
 return CONCAT44(uVar7 + (uVar10 - uVar4) * 0x100000 | param_2,uVar9);
 }
 uVar11 = ~(uVar10 - uVar4);
 if ((int)uVar11 < 0x1f) {
 if (uVar11 - 0x13 != 0 && -0xd < (int)(uVar11 - 0x1f)) {
 uVar11 = 0xc - (uVar11 - 0x13);
 return CONCAT44(uVar5,uVar9 >> (0x20 - uVar11 & 0xff) | uVar7 << (uVar11 & 0xff)) &
 0x80000000ffffffff;
 }
 uVar11 = uVar11 + 1;
 return CONCAT44(param_2 | uVar7 >> (uVar11 & 0xff),
 uVar9 >> (uVar11 & 0xff) | uVar7 << (0x20 - uVar11 & 0xff));
 }
 return CONCAT44(uVar5,uVar7 >> (uVar11 - 0x1f & 0xff)) & 0x80000000ffffffff;
}



/* Function: __aeabi_ui2d @ 000111c0 */

ulonglong __aeabi_ui2d(uint param_1)

{
 uint uVar1;
 uint uVar2;
 uint uVar3;
 int iVar4;
 uint uVar5;
 uint uVar6;
 uint in_r12;
 bool bVar7;
 bool bVar8;
 
 if (param_1 == 0) {
 return 0;
 }
 uVar1 = 0;
 iVar4 = LZCOUNT(param_1);
 uVar5 = iVar4 + 0x15;
 bVar8 = SBORROW4(uVar5,0x20);
 uVar2 = iVar4 - 0xb;
 bVar7 = uVar2 == 0;
 uVar6 = uVar2;
 uVar3 = uVar2;
 if (uVar5 < 0x20) {
 bVar8 = SCARRY4(uVar2,0xc);
 uVar3 = iVar4 + 1;
 bVar7 = uVar3 == 0;
 uVar6 = uVar5;
 if (!bVar7 && -0xd < (int)uVar2) {
 uVar1 = param_1 << uVar5;
 param_1 = param_1 >> (0xc - uVar3 & 0xff);
 goto LAB_000110ac;
 }
 }
 if (bVar7 || (int)uVar3 < 0 != bVar8) {
 in_r12 = 0x20 - uVar6;
 }
 param_1 = param_1 << (uVar6 & 0xff);
 if (bVar7 || (int)uVar3 < 0 != bVar8) {
 param_1 = param_1 | 0U >> (in_r12 & 0xff);
 uVar1 = 0 << (uVar6 & 0xff);
 }
LAB_000110ac:
 if (uVar5 < 0x433) {
 return CONCAT44(param_1 + (0x432 - uVar5) * 0x100000,uVar1);
 }
 uVar6 = ~(0x432 - uVar5);
 if (0x1e < (int)uVar6) {
 return (ulonglong)(param_1 >> (uVar6 - 0x1f & 0xff));
 }
 if (uVar6 - 0x13 == 0 || (int)(uVar6 - 0x1f) < -0xc) {
 uVar6 = uVar6 + 1;
 return CONCAT44(param_1 >> (uVar6 & 0xff),
 uVar1 >> (uVar6 & 0xff) | param_1 << (0x20 - uVar6 & 0xff));
 }
 uVar6 = 0xc - (uVar6 - 0x13);
 return (ulonglong)(uVar1 >> (0x20 - uVar6 & 0xff) | param_1 << (uVar6 & 0xff));
}



/* Function: __floatsidf @ 000111e4 */

ulonglong __floatsidf(uint param_1)

{
 uint uVar1;
 uint uVar2;
 uint uVar3;
 uint uVar4;
 int iVar5;
 uint uVar6;
 uint uVar7;
 uint uVar8;
 uint in_r12;
 bool bVar9;
 bool bVar10;
 
 if (param_1 == 0) {
 return 0;
 }
 uVar8 = param_1 & 0x80000000;
 uVar2 = param_1;
 if ((int)uVar8 < 0) {
 uVar2 = -param_1;
 }
 uVar1 = 0;
 iVar5 = LZCOUNT(uVar2);
 uVar6 = iVar5 + 0x15;
 bVar10 = SBORROW4(uVar6,0x20);
 uVar3 = iVar5 - 0xb;
 bVar9 = uVar3 == 0;
 uVar7 = uVar3;
 uVar4 = uVar3;
 if (uVar6 < 0x20) {
 bVar10 = SCARRY4(uVar3,0xc);
 uVar4 = iVar5 + 1;
 bVar9 = uVar4 == 0;
 uVar7 = uVar6;
 if (!bVar9 && -0xd < (int)uVar3) {
 uVar1 = uVar2 << uVar6;
 uVar2 = uVar2 >> (0xc - uVar4 & 0xff);
 goto LAB_000110ac;
 }
 }
 if (bVar9 || (int)uVar4 < 0 != bVar10) {
 in_r12 = 0x20 - uVar7;
 }
 uVar2 = uVar2 << (uVar7 & 0xff);
 if (bVar9 || (int)uVar4 < 0 != bVar10) {
 uVar2 = uVar2 | 0U >> (in_r12 & 0xff);
 uVar1 = 0 << (uVar7 & 0xff);
 }
LAB_000110ac:
 if (uVar6 < 0x433) {
 return CONCAT44(uVar2 + (0x432 - uVar6) * 0x100000 | uVar8,uVar1);
 }
 uVar7 = ~(0x432 - uVar6);
 if (0x1e < (int)uVar7) {
 return CONCAT44(param_1,uVar2 >> (uVar7 - 0x1f & 0xff)) & 0x80000000ffffffff;
 }
 if (uVar7 - 0x13 == 0 || (int)(uVar7 - 0x1f) < -0xc) {
 uVar7 = uVar7 + 1;
 return CONCAT44(uVar8 | uVar2 >> (uVar7 & 0xff),
 uVar1 >> (uVar7 & 0xff) | uVar2 << (0x20 - uVar7 & 0xff));
 }
 uVar8 = 0xc - (uVar7 - 0x13);
 return CONCAT44(param_1,uVar1 >> (0x20 - uVar8 & 0xff) | uVar2 << (uVar8 & 0xff)) &
 0x80000000ffffffff;
}



/* Function: __extendsfdf2 @ 0001120c */

ulonglong __extendsfdf2(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
 uint uVar1;
 uint uVar2;
 uint uVar3;
 uint uVar4;
 uint uVar5;
 int iVar6;
 uint uVar7;
 uint uVar8;
 uint uVar9;
 uint in_r12;
 bool bVar10;
 bool bVar11;
 
 uVar2 = param_1 << 1;
 bVar10 = uVar2 == 0;
 uVar9 = param_1 & 0x80000000;
 uVar8 = (uint)((int)uVar2 >> 3) >> 1;
 uVar1 = uVar9 | uVar8;
 param_1 = param_1 << 0x1d;
 if (!bVar10) {
 param_4 = uVar2 & 0xff000000;
 bVar10 = param_4 == 0;
 }
 if (!bVar10) {
 bVar10 = param_4 == 0xff000000;
 }
 if (!bVar10) {
 return CONCAT44(uVar1,param_1) ^ 0x3800000000000000;
 }
 if ((uVar2 & 0xffffff) == 0) {
 return CONCAT44(uVar1,param_1);
 }
 if (param_4 == 0xff000000) {
 return CONCAT44(uVar1,param_1) | 0x8000000000000;
 }
 uVar2 = param_1;
 uVar3 = uVar8;
 if (uVar8 == 0) {
 uVar2 = 0;
 uVar3 = param_1;
 }
 iVar6 = LZCOUNT(uVar3);
 if (uVar8 == 0) {
 iVar6 = iVar6 + 0x20;
 }
 uVar7 = iVar6 - 0xb;
 bVar11 = SBORROW4(uVar7,0x20);
 uVar4 = iVar6 - 0x2b;
 bVar10 = uVar4 == 0;
 uVar8 = uVar4;
 uVar5 = uVar4;
 if ((int)uVar7 < 0x20) {
 bVar11 = SCARRY4(uVar4,0xc);
 uVar5 = iVar6 - 0x1f;
 bVar10 = uVar5 == 0;
 uVar8 = uVar7;
 if (!bVar10 && -0xd < (int)uVar4) {
 uVar2 = uVar3 << (uVar7 & 0xff);
 uVar3 = uVar3 >> (0xc - uVar5 & 0xff);
 goto LAB_000110ac;
 }
 }
 if (bVar10 || (int)uVar5 < 0 != bVar11) {
 in_r12 = 0x20 - uVar8;
 }
 uVar3 = uVar3 << (uVar8 & 0xff);
 if (bVar10 || (int)uVar5 < 0 != bVar11) {
 uVar3 = uVar3 | uVar2 >> (in_r12 & 0xff);
 uVar2 = uVar2 << (uVar8 & 0xff);
 }
LAB_000110ac:
 if ((int)uVar7 < 0x381) {
 return CONCAT44(uVar3 + (0x380 - uVar7) * 0x100000 | uVar9,uVar2);
 }
 uVar8 = ~(0x380 - uVar7);
 if (0x1e < (int)uVar8) {
 return CONCAT44(uVar1,uVar3 >> (uVar8 - 0x1f & 0xff)) & 0x80000000ffffffff;
 }
 if (uVar8 - 0x13 == 0 || (int)(uVar8 - 0x1f) < -0xc) {
 uVar8 = uVar8 + 1;
 return CONCAT44(uVar9 | uVar3 >> (uVar8 & 0xff),
 uVar2 >> (uVar8 & 0xff) | uVar3 << (0x20 - uVar8 & 0xff));
 }
 uVar9 = 0xc - (uVar8 - 0x13);
 return CONCAT44(uVar1,uVar2 >> (0x20 - uVar9 & 0xff) | uVar3 << (uVar9 & 0xff)) &
 0x80000000ffffffff;
}



/* Function: __floatundidf @ 00011254 */

ulonglong __floatundidf(uint param_1,uint param_2)

{
 byte bVar1;
 byte bVar2;
 uint uVar3;
 uint uVar4;
 uint uVar5;
 uint uVar6;
 uint uVar7;
 int iVar8;
 uint uVar9;
 uint uVar10;
 int iVar11;
 bool bVar12;
 bool bVar13;
 bool bVar14;
 bool bVar15;
 
 if (param_1 == 0 && param_2 == 0) {
 return CONCAT44(param_2,param_1);
 }
 iVar11 = 0x432;
 uVar10 = 0;
 if (param_2 >> 0x16 != 0) {
 iVar11 = 3;
 if (param_2 >> 0x19 != 0) {
 iVar11 = 6;
 }
 if (param_2 >> 0x1c != 0) {
 iVar11 = iVar11 + 3;
 }
 iVar11 = iVar11 - ((int)param_2 >> 0x1f);
 uVar10 = param_1 << (0x20U - iVar11 & 0xff);
 param_1 = param_1 >> iVar11 | param_2 << (0x20U - iVar11 & 0xff);
 param_2 = param_2 >> iVar11;
 iVar11 = iVar11 + 0x432;
 }
 if (0xfffff < param_2) {
 if (0x1fffff < param_2) {
 bVar1 = (byte)param_2;
 param_2 = param_2 >> 1;
 bVar2 = (byte)param_1;
 param_1 = (uint)(bVar1 & 1) << 0x1f | param_1 >> 1;
 uVar10 = (uint)(bVar2 & 1) << 0x1f | uVar10 >> 1;
 iVar11 = iVar11 + 1;
 if (0xffbfffff < (uint)(iVar11 * 0x200000)) {
 return 0x7ff0000000000000;
 }
 }
LAB_0001102c:
 bVar12 = 0x7fffffff < uVar10;
 if (uVar10 == 0x80000000) {
 bVar12 = (bool)((byte)param_1 & 1);
 }
 return CONCAT44(param_2 + iVar11 * 0x100000 + (uint)CARRY4(param_1,(uint)bVar12),
 param_1 + bVar12);
 }
 bVar1 = (byte)(uVar10 >> 0x1f);
 uVar10 = uVar10 << 1;
 uVar3 = param_1 * 2;
 bVar12 = CARRY4(param_1,param_1);
 param_1 = param_1 * 2 + (uint)bVar1;
 param_2 = param_2 * 2 + (uint)(bVar12 || CARRY4(uVar3,(uint)bVar1));
 bVar12 = iVar11 != 0;
 iVar11 = iVar11 + -1;
 if (bVar12 && 0xfffff < param_2) goto LAB_0001102c;
 uVar3 = param_1;
 uVar4 = param_2;
 if (param_2 == 0) {
 uVar3 = 0;
 uVar4 = param_1;
 }
 iVar8 = LZCOUNT(uVar4);
 if (param_2 == 0) {
 iVar8 = iVar8 + 0x20;
 }
 uVar9 = iVar8 - 0xb;
 bVar13 = SBORROW4(uVar9,0x20);
 uVar5 = iVar8 - 0x2b;
 bVar12 = uVar5 == 0;
 uVar7 = uVar5;
 uVar6 = uVar5;
 if ((int)uVar9 < 0x20) {
 bVar13 = SCARRY4(uVar5,0xc);
 uVar6 = iVar8 - 0x1f;
 bVar12 = uVar6 == 0;
 uVar7 = uVar9;
 if (!bVar12 && -0xd < (int)uVar5) {
 uVar3 = uVar4 << (uVar9 & 0xff);
 uVar4 = uVar4 >> (0xc - uVar6 & 0xff);
 goto LAB_000110ac;
 }
 }
 if (bVar12 || (int)uVar6 < 0 != bVar13) {
 uVar10 = 0x20 - uVar7;
 }
 uVar4 = uVar4 << (uVar7 & 0xff);
 if (bVar12 || (int)uVar6 < 0 != bVar13) {
 uVar4 = uVar4 | uVar3 >> (uVar10 & 0xff);
 uVar3 = uVar3 << (uVar7 & 0xff);
 }
LAB_000110ac:
 if ((int)uVar9 <= iVar11) {
 return CONCAT44(uVar4 + (iVar11 - uVar9) * 0x100000,uVar3);
 }
 uVar10 = ~(iVar11 - uVar9);
 if ((int)uVar10 < 0x1f) {
 if (uVar10 - 0x13 != 0 && -0xd < (int)(uVar10 - 0x1f)) {
 uVar10 = 0xc - (uVar10 - 0x13);
 return (ulonglong)(uVar3 >> (0x20 - uVar10 & 0xff) | uVar4 << (uVar10 & 0xff));
 }
 uVar10 = uVar10 + 1;
 return CONCAT44(uVar4 >> (uVar10 & 0xff),
 uVar3 >> (uVar10 & 0xff) | uVar4 << (0x20 - uVar10 & 0xff));
 }
 return (ulonglong)(uVar4 >> (uVar10 - 0x1f & 0xff));
}




/* CRT stub function __floatdidf removed by preprocessor */




/* Function: __fixdfsi @ 000112c8 */

uint __fixdfsi(uint param_1,uint param_2)

{
 uint uVar1;
 int iVar2;
 uint uVar3;
 
 iVar2 = param_2 * 2 + 0x200000;
 if (param_2 * 2 < 0xffe00000) {
 if (-1 < iVar2) {
 return 0;
 }
 uVar1 = iVar2 >> 0x15;
 uVar3 = -uVar1 - 0x3e1;
 if (uVar1 < 0xfffffc20 && uVar3 != 0) {
 uVar1 = (param_2 << 0xb | 0x80000000 | param_1 >> 0x15) >> (uVar3 & 0xff);
 if ((param_2 & 0x80000000) != 0) {
 uVar1 = -uVar1;
 }
 return uVar1;
 }
 }
 else if (param_1 != 0 || (param_2 & 0xfffff) != 0) {
 return 0;
 }
 param_2 = param_2 & 0x80000000;
 if (param_2 == 0) {
 param_2 = 0x7fffffff;
 }
 return param_2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 86 */
