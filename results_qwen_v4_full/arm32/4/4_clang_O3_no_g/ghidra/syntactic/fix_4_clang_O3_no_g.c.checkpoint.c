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
typedef unsigned long long ulonglong;
typedef unsigned int uint;
typedef unsigned char byte;
typedef int (*code)(int);
typedef int bool;

/* Compiler intrinsic macros */
#define LZCOUNT(x) __builtin_clz(x)
#define SBORROW4(a,b) ((a) < 0 && (b) >= 0)
#define SCARRY4(a,b) ((a) >= 0 && (b) >= 0 && ((a)+(b)) < 0)
#define CARRY4(a,b) (((a)+(b)) < (a))
#define CONCAT44(hi,lo) (((ulonglong)(hi) << 32) | (lo))

/* External data declarations */
char DAT_000117d6[] = "=== Calling Conventions Test ===\n";
char DAT_0001152c[] = "CALL-L2-01: %d\n";
char DAT_00011554[] = "CALL-L2-02: %d\n";
char DAT_00011576[] = "CALL-L2-03: %d\n";
char DAT_0001159d[] = "CALL-L1-04: %d\n";
char DAT_000115c5[] = "CALL-L1-05: %d\n";
char DAT_000115f1[] = "CALL-L1-06: %d\n";
char DAT_000117f7[] = "=== Parameter Passing Test ===\n";
char DAT_00011818[] = "=== Return Values Test ===\n";
char DAT_000116d9[] = "RET-L3-01: %d\n";
char DAT_000116f5[] = "RET-L3-02: %d\n";
char DAT_00011711[] = "RET-L3-02: %d\n";
char DAT_0001172c[] = "RET-L3-03: %d\n";
char DAT_00011749[] = "RET-L3-04: %d\n";
char DAT_00011765[] = "RET-L3-03: %d\n";
char DAT_00011782[] = "RET-L3-04: %d\n";
char DAT_0001179e[] = "PARAM-L3-05: %d\n";
char DAT_000117ba[] = "RET-L3-05: %d\n";
int ret_opaque_handle_handle1 = 0x12345678;
int ret_opaque_handle_handle2 = 0x87654321;

/* Compiler runtime function declarations */
extern ulonglong __adddf3(uint param_1,uint param_2,uint param_3,uint param_4);
extern ulonglong __floatsidf(uint param_1);
extern ulonglong __floatdidf(uint param_1,uint param_2);
extern uint __fixdfsi(uint param_1,uint param_2);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/4/4_clang_O3_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */





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
 
 if (0 < param_1) {
 iVar2 = 0;
 piVar1 = local_c;
 do {
 param_1 = param_1 + -1;
 iVar2 = *piVar1 + iVar2;
 piVar1 = piVar1 + 1;
 } while (param_1 != 0);
 return iVar2;
 }
 return 0;
}



/* Function: func_no_args @ 000106f8 */

undefined4 func_no_args(void)

{
 return 0x2a;
}



/* Function: func_many_args @ 00010700 */

int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
 int param_7,int param_8)

{
 return param_2 + param_1 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}



/* Function: func_mixed_args @ 00010730 */

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
 uVar2 = __adddf3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),(int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
 uVar3 = __floatdidf(param_5,param_6);
 __adddf3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),(int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
 __fixdfsi(0,0);
 return;
}



/* Function: func_struct_byval @ 000107a8 */

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



/* Function: func_struct_byptr @ 0001082c */

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



/* Function: test_calling_conventions @ 00010840 */

void test_calling_conventions(void)

{
 undefined4 uVar1;
 
 puts(&DAT_000117d6);
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
 printf(&DAT_0001152c,uVar1);
 printf(&DAT_00011554,0x2a);
 printf(&DAT_00011576,0x24);
 printf(&DAT_0001159d,0x75);
 printf(&DAT_000115c5,0x88);
 printf(&DAT_000115f1,0x32);
 return;
}



/* Function: param_by_value_int @ 000109c4 */

int param_by_value_int(int param_1)

{
 return param_1 << 1;
}



/* Function: call_by_value_int @ 000109cc */

undefined4 call_by_value_int(void)

{
 return 0xf;
}



/* Function: param_by_value_ptr @ 000109d4 */

undefined4 param_by_value_ptr(int *param_1)

{
 *param_1 = *param_1 << 1;
 return 1;
}



/* Function: call_by_value_ptr @ 000109e8 */

undefined4 call_by_value_ptr(void)

{
 return 0xb;
}



/* Function: param_array_decay @ 000109f0 */

undefined4 param_array_decay(void)

{
 return 4;
}



/* Function: call_array_decay @ 000109f8 */

undefined4 call_array_decay(void)

{
 return 4;
}



/* Function: param_string @ 00010a00 */

int param_string(byte *param_1)

{
 return (uint)param_1[1] + (uint)*param_1;
}



/* Function: call_string_param @ 00010a10 */

undefined4 call_string_param(void)

{
 return 0xad;
}



/* Function: param_ptr_array @ 00010a18 */

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



/* Function: call_ptr_array @ 00010a48 */

undefined4 call_ptr_array(void)

{
 return 300;
}



/* Function: param_varargs @ 00010a50 */

int param_varargs(int param_1, ...)

{
 int *piVar1;
 int iVar2;
 int local_c [3];
 
 if (0 < param_1) {
 iVar2 = 0;
 piVar1 = local_c;
 do {
 param_1 = param_1 + -1;
 iVar2 = *piVar1 + iVar2;
 piVar1 = piVar1 + 1;
 } while (param_1 != 0);
 return iVar2;
 }
 return 0;
}



/* Function: call_varargs_param @ 00010aa8 */

void call_varargs_param(void)

{
 param_varargs(4,10,0x14,0x1e,0x28);
 return;
}



/* Function: param_func_ptr @ 00010ad8 */

int param_func_ptr(code *param_1,undefined4 param_2)

{
 int iVar1;
 
 iVar1 = (*param_1)(param_2);
 return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 00010af8 */

undefined4 call_func_ptr_param(void)

{
 return 0x14;
}



/* Function: param_double_ptr @ 00010b00 */

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



/* Function: call_double_ptr @ 00010b28 */

undefined4 call_double_ptr(void)

{
 return 0x15;
}



/* Function: param_complex_cast @ 00010b30 */

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



/* Function: call_complex_cast @ 00010b64 */

undefined4 call_complex_cast(void)

{
 return 0x12345678;
}



/* Function: param_struct_byval @ 00010b70 */

int param_struct_byval(int param_1)

{
 int in_stack_0000002c;
 
 return param_1 + in_stack_0000002c;
}



/* Function: call_struct_byval @ 00010b7c */

undefined4 call_struct_byval(void)

{
 return 0xf;
}



/* Function: param_order_dep @ 00010b84 */

int param_order_dep(int param_1,int param_2)

{
 return param_2 + param_1;
}



/* Function: call_order_dep @ 00010b8c */

undefined4 call_order_dep(void)

{
 return 3;
}



/* Function: test_parameter_passing @ 00010b94 */

void test_parameter_passing(void)

{
 undefined4 uVar1;
 
 puts(&DAT_000117f7);
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



/* Function: ret_basic_type @ 00010cb0 */

int ret_basic_type(int param_1)

{
 return param_1 << 1;
}



/* Function: call_ret_basic @ 00010cb8 */

undefined4 call_ret_basic(void)

{
 return 0x2a;
}



/* Function: ret_pointer @ 00010cc0 */

int ret_pointer(int param_1)

{
 return param_1 + 4;
}



/* Function: call_ret_pointer @ 00010cc8 */

undefined4 call_ret_pointer(void)

{
 return 0x14;
}



/* Function: ret_small_struct @ 00010cd0 */

void ret_small_struct(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
 *param_1 = param_2;
 param_1[1] = param_3;
 return;
}



/* Function: call_ret_small_struct @ 00010cd8 */

undefined4 call_ret_small_struct(void)

{
 return 7;
}



/* Function: ret_large_struct @ 00010ce0 */

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



/* Function: call_ret_large_struct @ 00010d54 */

undefined4 call_ret_large_struct(void)

{
 return 0xd7;
}



/* Function: func_a @ 00010d5c */

int func_a(int param_1)

{
 return param_1 + 10;
}



/* Function: func_b @ 00010d64 */

int func_b(int param_1)

{
 return param_1 << 1;
}



/* Function: ret_func_ptr @ 00010d6c */

code * ret_func_ptr(int param_1)

{
 code *pcVar1;
 
 pcVar1 = func_b;
 if (param_1 == 0) {
 pcVar1 = func_a;
 }
 return pcVar1;
}



/* Function: call_ret_func_ptr @ 00010d94 */

undefined4 call_ret_func_ptr(void)

{
 return 10;
}



/* Function: ret_opaque_handle @ 00010d9c */

undefined8 * ret_opaque_handle(int param_1)

{
 undefined8 *puVar1;
 
 puVar1 = (undefined8 *)&ret_opaque_handle_handle1;
 if (param_1 != 0) {
 puVar1 = &ret_opaque_handle_handle2;
 }
 return puVar1;
}



/* Function: call_ret_opaque @ 00010db8 */

undefined4 call_ret_opaque(void)

{
 return ret_opaque_handle_handle1;
}



/* Function: ret_complex_expr @ 00010dc8 */

int ret_complex_expr(int param_1,int param_2,int param_3)

{
 int iVar1;
 
 iVar1 = param_3 + 10;
 if (param_2 < param_1) {
 iVar1 = param_3 << 1;
 }
 return iVar1;
}



/* Function: call_ret_complex_expr @ 00010ddc */

undefined4 call_ret_complex_expr(void)

{
 return 0x28;
}



/* Function: ret_multi_branch @ 00010de4 */

int ret_multi_branch(uint param_1)

{
 int iVar1;
 
 iVar1 = -1;
 if (param_1 < 3) {
 iVar1 = param_1 * 10 + 10;
 }
 return iVar1;
}



/* Function: call_ret_multi_branch @ 00010e00 */

undefined4 call_ret_multi_branch(void)

{
 return 0x3c;
}



/* Function: ret_void @ 00010e08 */

void ret_void(int param_1,int *param_2)

{
 *param_2 = param_1 * 3;
 return;
}



/* Function: call_ret_void @ 00010e14 */

undefined4 call_ret_void(void)

{
 return 0x15;
}



/* Function: test_return_values @ 00010e1c */

void test_return_values(void)

{
 puts(&DAT_00011818);
 printf(&DAT_000116d9,0x2a);
 printf(&DAT_000116f5,0x14);
 printf(&DAT_00011711,7);
 printf(&DAT_0001172c,0xd7);
 printf(&DAT_00011749,10);
 printf(&DAT_00011765,ret_opaque_handle_handle1);
 printf(&DAT_00011782,0x28);
 printf(&DAT_0001179e,0x3c);
 printf(&DAT_000117ba,0x15);
 return;
}



/* Function: main @ 00010ef0 */

undefined4 main(void)

{
 test_calling_conventions();
 test_parameter_passing();
 puts(&DAT_00011818);
 printf(&DAT_000116d9,0x2a);
 printf(&DAT_000116f5,0x14);
 printf(&DAT_00011711,7);
 printf(&DAT_0001172c,0xd7);
 printf(&DAT_00011749,10);
 printf(&DAT_00011765,ret_opaque_handle_handle1);
 printf(&DAT_00011782,0x28);
 printf(&DAT_0001179e,0x3c);
 printf(&DAT_000117ba,0x15);
 return 0;
}
































/* CRT stub function __floatdidf removed by preprocessor */




/* Function: __fixdfsi @ 00011394 */

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
