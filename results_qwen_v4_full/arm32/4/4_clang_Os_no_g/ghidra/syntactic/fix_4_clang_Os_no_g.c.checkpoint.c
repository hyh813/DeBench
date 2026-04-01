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
typedef unsigned int uint;
typedef unsigned long long ulonglong;
typedef _Bool bool;
typedef unsigned char byte;
typedef int (*code)(int);

/* Helper macros for arithmetic operations */
#define CARRY4(a,b) (((a) + (b)) < (a))
#define SCARRY4(a,b) (((a) < 0) == ((b) < 0) && (((a) + (b)) < 0) != ((a) < 0))
#define SBORROW4(a,b) (((a) < 0) != ((b) < 0) && ((a) - (b)) < 0)
#define LZCOUNT(x) (__builtin_clz(x))
#define CONCAT44(hi,lo) (((ulonglong)(hi) << 32) | (lo))

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/4/4_clang_Os_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */


/* External data declarations */
extern char DAT_0001178b[];

/* Forward declarations for compiler runtime functions */
ulonglong __adddf3(uint param_1,uint param_2,uint param_3,uint param_4);
ulonglong __floatsidf(uint param_1);
uint __fixdfsi(uint param_1,uint param_2);
ulonglong __floatdidf(uint param_1,uint param_2);
extern char DAT_000114dc[];
extern char DAT_00011504[];
extern char DAT_00011526[];
extern char DAT_0001154d[];
extern char DAT_00011552[];
extern char DAT_0001157a[];
extern char DAT_000115a6[];
extern char DAT_000117ac[];
extern char DAT_0001168e[];
extern char DAT_000116aa[];
extern char DAT_000116c6[];
extern char DAT_000116e1[];
extern char DAT_000116fe[];
extern char DAT_0001171a[];
extern char DAT_00011737[];
extern char DAT_00011753[];
extern char DAT_0001176f[];
extern char DAT_000117cd[];
extern undefined4 ret_opaque_handle_handle1;
extern undefined4 ret_opaque_handle_handle2;

/* Global variable definitions */
undefined4 ret_opaque_handle_handle1 = 0x12345678;
undefined4 ret_opaque_handle_handle2 = 0x87654321;

/* Data array definitions */
char DAT_0001168e[] = "RET-L1-01: %d\n";
char DAT_000116aa[] = "RET-L1-02: %d\n";
char DAT_000116c6[] = "RET-L1-03: %d\n";
char DAT_000116e1[] = "RET-L1-04: %d\n";
char DAT_000116fe[] = "RET-L2-01: %d\n";
char DAT_0001171a[] = "RET-L2-02: %d\n";
char DAT_00011737[] = "RET-L2-03: %d\n";
char DAT_00011753[] = "RET-L2-04: %d\n";
char DAT_0001176f[] = "RET-L2-05: %d\n";
char DAT_0001178b[] = "=== Calling Conventions Test ===\n";
char DAT_000114dc[] = "VAR-L1-01: %d\n";
char DAT_00011504[] = "VAR-L1-02: %d\n";
char DAT_00011526[] = "VAR-L1-03: %d\n";
char DAT_0001154d[] = "test_string";
char DAT_00011552[] = "VAR-L1-04: %d\n";
char DAT_0001157a[] = "VAR-L1-05: %d\n";
char DAT_000115a6[] = "VAR-L1-06: %d\n";
char DAT_000117ac[] = "=== Parameter Passing Test ===\n";
char DAT_000117cd[] = "=== Return Values Test ===\n";


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
 uVar3 = __adddf3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),(int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
 return;
}



/* Function: func_struct_byval @ 000107a0 */

int func_struct_byval(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
 int iVar1;
 int iVar2;
 int *piVar3;
 int local_10 [4];
 
 local_10[0] = param_1;
 local_10[1] = param_2;
 local_10[2] = param_3;
 local_10[3] = param_4;
 iVar2 = 0;
 iVar1 = 0;
 do {
 piVar3 = (int *)((int)local_10 + iVar2);
 iVar2 = iVar2 + 8;
 iVar1 = *piVar3 + iVar1;
 } while (iVar2 != 0x80);
 return iVar1;
}



/* Function: func_struct_byptr @ 000107ec */

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



/* Function: test_calling_conventions @ 00010800 */

void test_calling_conventions(void)

{
 undefined4 uVar1;
 uint *puVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 uint uVar6;
 uint uVar7;
 bool bVar8;
 uint local_90 [32];
 
 puts(&DAT_0001178b);
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
 uVar6 = 1;
 uVar1 = varargs_func(5,1,2,3,4,5);
 printf(&DAT_000114dc,uVar1);
 printf(&DAT_00011504,0x2a);
 printf(&DAT_00011526,0x24);
 func_mixed_args(10,&DAT_0001154d,0x51eb851f,0x40091eb8,100,0);
 printf(&DAT_00011552,0);
 puVar2 = local_90;
 do {
 *puVar2 = uVar6;
 puVar2[1] = 0;
 puVar2 = puVar2 + 2;
 uVar6 = uVar6 + 1;
 } while (uVar6 != 0x11);
 uVar6 = 0;
 iVar5 = 0;
 iVar3 = 0;
 do {
 uVar7 = *(uint *)((int)local_90 + iVar3);
 iVar4 = iVar3 + 8;
 bVar8 = CARRY4(uVar7,uVar6);
 uVar6 = uVar7 + uVar6;
 iVar5 = *(int *)((int)local_90 + iVar3 + 4) + iVar5 + (uint)bVar8;
 iVar3 = iVar4;
 } while (iVar4 != 0x80);
 printf(&DAT_0001157a,uVar6,local_90,iVar5);
 printf(&DAT_000115a6,0x32);
 return;
}



/* Function: param_by_value_int @ 000109f8 */

int param_by_value_int(int param_1)

{
 return param_1 << 1;
}



/* Function: call_by_value_int @ 00010a00 */

undefined4 call_by_value_int(void)

{
 return 0xf;
}



/* Function: param_by_value_ptr @ 00010a08 */

undefined4 param_by_value_ptr(int *param_1)

{
 *param_1 = *param_1 << 1;
 return 1;
}



/* Function: call_by_value_ptr @ 00010a1c */

undefined4 call_by_value_ptr(void)

{
 return 0xb;
}



/* Function: param_array_decay @ 00010a24 */

undefined4 param_array_decay(void)

{
 return 4;
}



/* Function: call_array_decay @ 00010a2c */

undefined4 call_array_decay(void)

{
 return 4;
}



/* Function: param_string @ 00010a34 */

int param_string(byte *param_1)

{
 return (uint)param_1[1] + (uint)*param_1;
}



/* Function: call_string_param @ 00010a44 */

undefined4 call_string_param(void)

{
 return 0xad;
}



/* Function: param_ptr_array @ 00010a4c */

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



/* Function: call_ptr_array @ 00010a7c */

undefined4 call_ptr_array(void)

{
 return 300;
}



/* Function: param_varargs @ 00010a84 */

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



/* Function: call_varargs_param @ 00010ad4 */

void call_varargs_param(void)

{
 param_varargs(4,10,0x14,0x1e,0x28);
 return;
}



/* Function: param_func_ptr @ 00010b04 */

int param_func_ptr(code *param_1,undefined4 param_2)

{
 int iVar1;
 
 iVar1 = (*param_1)(param_2);
 return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 00010b24 */

undefined4 call_func_ptr_param(void)

{
 return 0x14;
}



/* Function: param_double_ptr @ 00010b2c */

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



/* Function: call_double_ptr @ 00010b54 */

undefined4 call_double_ptr(void)

{
 return 0x15;
}



/* Function: param_complex_cast @ 00010b5c */

int param_complex_cast(int *param_1,int param_2)

{
 int iVar1;
 
 if (param_2 == 1) {
 iVar1 = param_1[1] + *param_1;
 }
 else {
 iVar1 = -1;
 if (param_2 == 0) {
 iVar1 = *param_1;
 }
 }
 return iVar1;
}



/* Function: call_complex_cast @ 00010b88 */

undefined4 call_complex_cast(void)

{
 return 0x12345678;
}



/* Function: param_struct_byval @ 00010b94 */

int param_struct_byval(int param_1)

{
 int in_stack_0000002c;
 
 return param_1 + in_stack_0000002c;
}



/* Function: call_struct_byval @ 00010ba0 */

int call_struct_byval(void)

{
 int iVar1;
 int local_40 [16];
 
 iVar1 = 0;
 do {
 local_40[iVar1] = iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x10);
 return local_40[0xf] + local_40[0];
}



/* Function: param_order_dep @ 00010bd0 */

int param_order_dep(int param_1,int param_2)

{
 return param_2 + param_1;
}



/* Function: call_order_dep @ 00010bd8 */

undefined4 call_order_dep(void)

{
 return 3;
}



/* Function: test_parameter_passing @ 00010be0 */

void test_parameter_passing(void)

{
 undefined4 uVar1;
 int iVar2;
 int local_48 [16];
 
 puts(&DAT_000117ac);
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
 iVar2 = 0;
 do {
 local_48[iVar2] = iVar2;
 iVar2 = iVar2 + 1;
 } while (iVar2 != 0x10);
 printf("PARAM-L3-04: %d\n",local_48[0xf] + local_48[0]);
 printf("PARAM-L3-05: %d\n",3);
 return;
}



/* Function: ret_basic_type @ 00010d1c */

int ret_basic_type(int param_1)

{
 return param_1 << 1;
}



/* Function: call_ret_basic @ 00010d24 */

undefined4 call_ret_basic(void)

{
 return 0x2a;
}



/* Function: ret_pointer @ 00010d2c */

int ret_pointer(int param_1)

{
 return param_1 + 4;
}



/* Function: call_ret_pointer @ 00010d34 */

undefined4 call_ret_pointer(void)

{
 return 0x14;
}



/* Function: ret_small_struct @ 00010d3c */

void ret_small_struct(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
 *param_1 = param_2;
 param_1[1] = param_3;
 return;
}



/* Function: call_ret_small_struct @ 00010d44 */

undefined4 call_ret_small_struct(void)

{
 return 7;
}



/* Function: ret_large_struct @ 00010d4c */

void ret_large_struct(int param_1,int param_2)

{
 int iVar1;
 
 iVar1 = 0;
 do {
 *(int *)(param_1 + iVar1 * 4) = param_2 + iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x10);
 return;
}



/* Function: call_ret_large_struct @ 00010d68 */

int call_ret_large_struct(void)

{
 int iVar1;
 int local_40 [16];
 
 iVar1 = 0;
 do {
 local_40[iVar1] = iVar1 + 100;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x10);
 return local_40[0xf] + local_40[0];
}



/* Function: func_a @ 00010d9c */

int func_a(int param_1)

{
 return param_1 + 10;
}



/* Function: func_b @ 00010da4 */

int func_b(int param_1)

{
 return param_1 << 1;
}



/* Function: ret_func_ptr @ 00010dac */

code * ret_func_ptr(int param_1)

{
 code *pcVar1;
 
 pcVar1 = func_b;
 if (param_1 == 0) {
 pcVar1 = func_a;
 }
 return pcVar1;
}



/* Function: call_ret_func_ptr @ 00010dd4 */

undefined4 call_ret_func_ptr(void)

{
 return 10;
}



/* Function: ret_opaque_handle @ 00010ddc */

undefined8 * ret_opaque_handle(int param_1)

{
 undefined8 *puVar1;
 
 puVar1 = &ret_opaque_handle_handle2;
 if (param_1 == 0) {
 puVar1 = (undefined8 *)&ret_opaque_handle_handle1;
 }
 return puVar1;
}



/* Function: call_ret_opaque @ 00010e04 */

undefined4 call_ret_opaque(void)

{
 return ret_opaque_handle_handle1;
}



/* Function: ret_complex_expr @ 00010e14 */

int ret_complex_expr(int param_1,int param_2,int param_3)

{
 int iVar1;
 
 iVar1 = param_3 + 10;
 if (param_2 < param_1) {
 iVar1 = param_3 << 1;
 }
 return iVar1;
}



/* Function: call_ret_complex_expr @ 00010e28 */

undefined4 call_ret_complex_expr(void)

{
 return 0x28;
}



/* Function: ret_multi_branch @ 00010e30 */

int ret_multi_branch(uint param_1)

{
 int iVar1;
 
 iVar1 = -1;
 if (param_1 < 3) {
 iVar1 = param_1 * 10 + 10;
 }
 return iVar1;
}



/* Function: call_ret_multi_branch @ 00010e4c */

undefined4 call_ret_multi_branch(void)

{
 return 0x3c;
}



/* Function: ret_void @ 00010e54 */

void ret_void(int param_1,int *param_2)

{
 *param_2 = param_1 * 3;
 return;
}



/* Function: call_ret_void @ 00010e60 */

undefined4 call_ret_void(void)

{
 return 0x15;
}



/* Function: test_return_values @ 00010e68 */

void test_return_values(void)

{
 int iVar1;
 int local_48 [16];
 
 puts(&DAT_000117cd);
 printf(&DAT_0001168e,0x2a);
 printf(&DAT_000116aa,0x14);
 printf(&DAT_000116c6,7);
 iVar1 = 0;
 do {
 local_48[iVar1] = iVar1 + 100;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x10);
 printf(&DAT_000116e1,local_48[0xf] + local_48[0]);
 printf(&DAT_000116fe,10);
 printf(&DAT_0001171a,ret_opaque_handle_handle1);
 printf(&DAT_00011737,0x28);
 printf(&DAT_00011753,0x3c);
 printf(&DAT_0001176f,0x15);
 return;
}



/* Function: main @ 00010f68 */

undefined4 main(void)

{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}



/* Function: __aeabi_drsub - removed, provided by compiler runtime */



/* Function: __subdf3 - removed, provided by compiler runtime */



/* Function: __adddf3 - removed, provided by compiler runtime */



/* Function: __aeabi_ui2d - removed, provided by compiler runtime */



/* Function: __floatsidf - removed, provided by compiler runtime */



/* Function: __extendsfdf2 - removed, provided by compiler runtime */



/* Function: __floatundidf - removed, provided by compiler runtime */




/* CRT stub function __floatdidf removed by preprocessor */




/* Function: __fixdfsi - removed, provided by compiler runtime */




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 86 */
