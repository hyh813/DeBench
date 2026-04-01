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

/* Helper macros for bit manipulation */
#define CARRY4(a,b) (((a) + (b)) < (a))
#define SCARRY4(a,b) (((a) + (b)) < (a))
#define SBORROW4(a,b) ((a) < (b))
#define LZCOUNT(x) ((x) == 0 ? 32 : __builtin_clz(x))
#define CONCAT44(hi,lo) (((ulonglong)(hi) << 32) | (lo))

/* External data forward declarations */
extern char DAT_0001175e[];

/* Math helper function forward declarations */
extern ulonglong __adddf3(uint param_1, uint param_2, uint param_3, uint param_4);
extern ulonglong __floatsidf(uint param_1);
extern uint __fixdfsi(uint param_1, uint param_2);
extern char DAT_000114b4[];
extern char DAT_000114dc[];
extern char DAT_000114fe[];
extern char DAT_00011525[];
extern char DAT_0001154d[];
extern char DAT_00011579[];
extern char DAT_0001177f[];
extern char DAT_000117a0[];
extern char DAT_00011661[];
extern char DAT_0001167d[];
extern char DAT_00011699[];
extern char DAT_000116b4[];
extern char DAT_000116d1[];
extern char DAT_000116ed[];
extern char DAT_0001170a[];
extern char DAT_00011726[];
extern char DAT_00011742[];
extern undefined4 ret_opaque_handle_handle1;
extern undefined4 ret_opaque_handle_handle2;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/4/4_clang_O1_no_g
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
 int iVar1;
 int *local_10;
 int local_c [3];
 
 iVar1 = 0;
 local_10 = local_c;
 if (0 < param_1) {
 do {
 iVar1 = *local_10 + iVar1;
 param_1 = param_1 + -1;
 local_10 = local_10 + 1;
 } while (param_1 != 0);
 }
 return iVar1;
}



/* Function: func_no_args @ 000106e4 */

undefined4 func_no_args(void)

{
 return 0x2a;
}



/* Function: func_many_args @ 000106ec */

int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
 int param_7,int param_8)

{
 return param_2 + param_1 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}



/* Function: func_mixed_args @ 0001071c */

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
 __fixdfsi((int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
 return;
}



/* Function: func_struct_byval @ 00010794 */

int func_struct_byval(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
 int iVar1;
 int iVar2;
 int local_10 [4];
 
 local_10[0] = param_1;
 local_10[1] = param_2;
 local_10[2] = param_3;
 local_10[3] = param_4;
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = *(int *)((int)local_10 + iVar2) + iVar1;
 iVar2 = iVar2 + 8;
 } while (iVar2 != 0x80);
 return iVar1;
}



/* Function: func_struct_byptr @ 000107e0 */

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



/* Function: test_calling_conventions @ 000107f4 */

void test_calling_conventions(void)

{
 int *piVar1;
 undefined4 uVar2;
 uint uVar3;
 uint uVar4;
 int iVar5;
 int iVar6;
 bool bVar7;
 int local_90 [34];
 
 puts(&DAT_0001175e);
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
 local_90[0] = 4;
 local_90[1] = 5;
 iVar6 = 1;
 uVar2 = varargs_func(5,1,2,3);
 printf(&DAT_000114b4,uVar2);
 printf(&DAT_000114dc,0x2a);
 printf(&DAT_000114fe,0x24);
 printf(&DAT_00011525,0x75);
 piVar1 = local_90;
 do {
 piVar1[2] = iVar6;
 piVar1[3] = 0;
 iVar6 = iVar6 + 1;
 piVar1 = piVar1 + 2;
 } while (iVar6 != 0x11);
 iVar6 = 0;
 uVar3 = 0;
 iVar5 = 0;
 do {
 uVar4 = *(uint *)((int)local_90 + iVar6 + 8);
 bVar7 = CARRY4(uVar4,uVar3);
 uVar3 = uVar4 + uVar3;
 iVar5 = *(int *)((int)local_90 + iVar6 + 0xc) + iVar5 + (uint)bVar7;
 iVar6 = iVar6 + 8;
 } while (iVar6 != 0x80);
 printf(&DAT_0001154d,uVar3,uVar4,iVar5);
 printf(&DAT_00011579,0x32);
 return;
}



/* Function: param_by_value_int @ 000109cc */

int param_by_value_int(int param_1)

{
 return param_1 << 1;
}



/* Function: call_by_value_int @ 000109d4 */

undefined4 call_by_value_int(void)

{
 return 0xf;
}



/* Function: param_by_value_ptr @ 000109dc */

undefined4 param_by_value_ptr(int *param_1)

{
 *param_1 = *param_1 << 1;
 return 1;
}



/* Function: call_by_value_ptr @ 000109f0 */

undefined4 call_by_value_ptr(void)

{
 return 0xb;
}



/* Function: param_array_decay @ 000109f8 */

undefined4 param_array_decay(void)

{
 return 4;
}



/* Function: call_array_decay @ 00010a00 */

undefined4 call_array_decay(void)

{
 return 4;
}



/* Function: param_string @ 00010a08 */

int param_string(byte *param_1)

{
 return (uint)param_1[1] + (uint)*param_1;
}



/* Function: call_string_param @ 00010a18 */

undefined4 call_string_param(void)

{
 return 0xad;
}



/* Function: param_ptr_array @ 00010a20 */

int param_ptr_array(undefined4 *param_1,int param_2)

{
 int iVar1;
 
 if (0 < param_2) {
 iVar1 = 0;
 do {
 iVar1 = iVar1 + (uint)*(byte *)*param_1;
 param_2 = param_2 + -1;
 param_1 = param_1 + 1;
 } while (param_2 != 0);
 return iVar1;
 }
 return 0;
}



/* Function: call_ptr_array @ 00010a50 */

undefined4 call_ptr_array(void)

{
 return 300;
}



/* Function: param_varargs @ 00010a58 */

int param_varargs(int param_1, ...)

{
 int iVar1;
 int *local_10;
 int local_c [3];
 
 iVar1 = 0;
 local_10 = local_c;
 if (0 < param_1) {
 do {
 iVar1 = *local_10 + iVar1;
 param_1 = param_1 + -1;
 local_10 = local_10 + 1;
 } while (param_1 != 0);
 }
 return iVar1;
}



/* Function: call_varargs_param @ 00010a9c */

void call_varargs_param(void)

{
 param_varargs(4,10,0x14,0x1e,0x28);
 return;
}



/* Function: param_func_ptr @ 00010acc */

int param_func_ptr(code *param_1,undefined4 param_2)

{
 int iVar1;
 
 iVar1 = (*param_1)(param_2);
 return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 00010aec */

undefined4 call_func_ptr_param(void)

{
 return 0x14;
}



/* Function: param_double_ptr @ 00010af4 */

undefined4 param_double_ptr(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
 undefined4 uVar1;
 
 uVar1 = 0xffffffff;
 if (param_1 != (int *)0x0) {
 param_4 = (undefined4 *)*param_1;
 }
 if (param_1 != (int *)0x0 && param_4 != (undefined4 *)0x0) {
 *param_1 = 0;
 *param_4 = param_2;
 uVar1 = 1;
 }
 return uVar1;
}



/* Function: call_double_ptr @ 00010b1c */

undefined4 call_double_ptr(void)

{
 return 0x15;
}



/* Function: param_complex_cast @ 00010b24 */

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



/* Function: call_complex_cast @ 00010b58 */

undefined4 call_complex_cast(void)

{
 return 0x12345678;
}



/* Function: param_struct_byval @ 00010b64 */

int param_struct_byval(int param_1)

{
 int in_stack_0000002c;
 
 return param_1 + in_stack_0000002c;
}



/* Function: call_struct_byval @ 00010b70 */

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



/* Function: param_order_dep @ 00010ba0 */

int param_order_dep(int param_1,int param_2)

{
 return param_2 + param_1;
}



/* Function: call_order_dep @ 00010ba8 */

undefined4 call_order_dep(void)

{
 return 3;
}



/* Function: test_parameter_passing @ 00010bb0 */

void test_parameter_passing(void)

{
 undefined4 uVar1;
 int iVar2;
 int local_48 [16];
 
 puts(&DAT_0001177f);
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



/* Function: ret_basic_type @ 00010cf0 */

int ret_basic_type(int param_1)

{
 return param_1 << 1;
}



/* Function: call_ret_basic @ 00010cf8 */

undefined4 call_ret_basic(void)

{
 return 0x2a;
}



/* Function: ret_pointer @ 00010d00 */

int ret_pointer(int param_1)

{
 return param_1 + 4;
}



/* Function: call_ret_pointer @ 00010d08 */

undefined4 call_ret_pointer(void)

{
 return 0x14;
}



/* Function: ret_small_struct @ 00010d10 */

void ret_small_struct(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
 *param_1 = param_2;
 param_1[1] = param_3;
 return;
}



/* Function: call_ret_small_struct @ 00010d18 */

undefined4 call_ret_small_struct(void)

{
 return 7;
}



/* Function: ret_large_struct @ 00010d20 */

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



/* Function: call_ret_large_struct @ 00010d3c */

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



/* Function: func_a @ 00010d70 */

int func_a(int param_1)

{
 return param_1 + 10;
}



/* Function: func_b @ 00010d78 */

int func_b(int param_1)

{
 return param_1 << 1;
}



/* Function: ret_func_ptr @ 00010d80 */

code * ret_func_ptr(int param_1)

{
 code *pcVar1;
 
 pcVar1 = func_b;
 if (param_1 == 0) {
 pcVar1 = func_a;
 }
 return pcVar1;
}



/* Function: call_ret_func_ptr @ 00010da8 */

undefined4 call_ret_func_ptr(void)

{
 return 10;
}



/* Function: ret_opaque_handle @ 00010db0 */

undefined8 * ret_opaque_handle(int param_1)

{
 undefined8 *puVar1;
 
 puVar1 = &ret_opaque_handle_handle2;
 if (param_1 == 0) {
 puVar1 = (undefined8 *)&ret_opaque_handle_handle1;
 }
 return puVar1;
}



/* Function: call_ret_opaque @ 00010dd8 */

undefined4 call_ret_opaque(void)

{
 return ret_opaque_handle_handle1;
}



/* Function: ret_complex_expr @ 00010de8 */

int ret_complex_expr(int param_1,int param_2,int param_3)

{
 int iVar1;
 
 iVar1 = param_3 + 10;
 if (param_2 < param_1) {
 iVar1 = param_3 << 1;
 }
 return iVar1;
}



/* Function: call_ret_complex_expr @ 00010dfc */

undefined4 call_ret_complex_expr(void)

{
 return 0x28;
}



/* Function: ret_multi_branch @ 00010e04 */

int ret_multi_branch(uint param_1)

{
 int iVar1;
 
 iVar1 = -1;
 if (param_1 < 3) {
 iVar1 = param_1 * 10 + 10;
 }
 return iVar1;
}



/* Function: call_ret_multi_branch @ 00010e20 */

undefined4 call_ret_multi_branch(void)

{
 return 0x3c;
}



/* Function: ret_void @ 00010e28 */

void ret_void(int param_1,int *param_2)

{
 *param_2 = param_1 * 3;
 return;
}



/* Function: call_ret_void @ 00010e34 */

undefined4 call_ret_void(void)

{
 return 0x15;
}



/* Function: test_return_values @ 00010e3c */

void test_return_values(void)

{
 int iVar1;
 int local_48 [16];
 
 puts(&DAT_000117a0);
 printf(&DAT_00011661,0x2a);
 printf(&DAT_0001167d,0x14);
 printf(&DAT_00011699,7);
 iVar1 = 0;
 do {
 local_48[iVar1] = iVar1 + 100;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x10);
 printf(&DAT_000116b4,local_48[0xf] + local_48[0]);
 printf(&DAT_000116d1,10);
 printf(&DAT_000116ed,ret_opaque_handle_handle1);
 printf(&DAT_0001170a,0x28);
 printf(&DAT_00011726,0x3c);
 printf(&DAT_00011742,0x15);
 return;
}



/* Function: main @ 00010f40 */

undefined4 main(void)

{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}







/* CRT stub function __floatdidf removed by preprocessor */









/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 86 */

/* External data declarations */
char DAT_0001175e[] = "Calling Conventions Test";
char DAT_000114b4[] = "VARARGS-L1-01: %d\n";
char DAT_000114dc[] = "PARAM-L1-03: %d\n";
char DAT_000114fe[] = "PARAM-L1-04: %d\n";
char DAT_00011525[] = "PARAM-L1-05: %d\n";
char DAT_0001154d[] = "PARAM-L1-06: %d\n";
char DAT_00011579[] = "PARAM-L1-07: %d\n";
char DAT_0001177f[] = "Parameter Passing Test";
char DAT_000117a0[] = "Return Values Test";
char DAT_00011661[] = "RET-L1-01: %d\n";
char DAT_0001167d[] = "RET-L1-02: %d\n";
char DAT_00011699[] = "RET-L1-03: %d\n";
char DAT_000116b4[] = "RET-L1-04: %d\n";
char DAT_000116d1[] = "RET-L2-01: %d\n";
char DAT_000116ed[] = "RET-L2-02: %d\n";
char DAT_0001170a[] = "RET-L3-01: %d\n";
char DAT_00011726[] = "RET-L3-02: %d\n";
char DAT_00011742[] = "RET-L3-03: %d\n";
undefined4 ret_opaque_handle_handle1 = 0x12345678;
undefined4 ret_opaque_handle_handle2 = 0x87654321;
