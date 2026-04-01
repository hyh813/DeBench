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

/* Additional type definitions for decompiled code */
#include <stdarg.h>
#include <stdbool.h>
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned int uint;
typedef unsigned long long ulonglong;
typedef long long longlong;
typedef unsigned char byte;
typedef void (*code)(void);

/* Struct definitions */
typedef struct {
    int data[16];
} LargeStruct;

typedef struct {
    int x;
    int y;
} SmallStruct;

typedef struct {
    int data[16];
} BigStruct;

typedef struct {
    int x;
    int y;
} SmallPoint;

typedef struct {
    int data[16];
} LargeData;

typedef struct {
    int a;
    int b;
} TestIntPair;

/* Function pointer types */
typedef int (*_func_int_int)(int);
typedef int (*func_ptr_t)(int);

/* Global variables */
int handle1_1 = 0x2a;
int handle2_0 = 0x32;
char DAT_0001148c[] = "=== Calling Conventions Test ===\n";
char DAT_0001154d[] = "CALL-L2-01: %d\n";
char DAT_00011575[] = "CALL-L2-02: %d\n";
char DAT_00011597[] = "CALL-L2-03: %d\n";
char DAT_000115be[] = "CALL-L2-04: %d\n";
char DAT_000115e6[] = "CALL-L3-01: %d\n";
char DAT_00011612[] = "CALL-L3-02: %d\n";
char DAT_0001163f[] = "=== Parameter Passing Test ===\n";
char DAT_0001171b[] = "=== Return Values Test ===\n";
char DAT_00011739[] = "RET-L1-01: %d\n";
char DAT_00011755[] = "RET-L2-01: %d\n";
char DAT_00011771[] = "RET-L2-02: %d\n";
char DAT_0001178c[] = "RET-L3-04: %d\n";
char DAT_000117a9[] = "RET-L3-05: %d\n";
char DAT_000117c5[] = "RET-L3-06: %d\n";
char DAT_000117e2[] = "RET-L3-06: %d\n";
char DAT_000117fe[] = "RET-L3-07: %d\n";
char DAT_0001181a[] = "RET-L3-08: %d\n";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/4/4_gcc_Os_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: main @ 0001045c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: func_a @ 0001056c */

int func_a(int x)

{
 return x + 10;
}



/* Function: func_b @ 00010574 */

int func_b(int param_1)

{
 return param_1 << 1;
}



/* Function: callback_func @ 0001057c */

int callback_func(int param_1)

{
 return param_1 << 1;
}



/* Function: cdecl_func @ 00010584 */

int cdecl_func(int a,int b)

{
 return a + b;
}



/* Function: call_cdecl @ 0001058c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_cdecl(void)

{
 return 0xf;
}



/* Function: stdcall_func @ 00010594 */

int stdcall_func(int a,int b)

{
 return b * a;
}



/* Function: call_stdcall @ 0001059c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stdcall(void)

{
 return 0x32;
}



/* Function: fastcall_func @ 000105a4 */

int fastcall_func(int a,int b,int c)

{
 return a + b + c;
}



/* Function: call_fastcall @ 000105b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fastcall(void)

{
 return 6;
}



/* Function: call_thiscall @ 000105b8 */

undefined4 call_thiscall(void)

{
 return 0xf;
}



/* Function: arm_aapcs_func @ 000105c0 */

int arm_aapcs_func(int a,int b,int c,int d,int e)

{
 return a + b + c + d + e;
}



/* Function: call_arm_aapcs @ 000105d8 */

undefined4 call_arm_aapcs(void)

{
 return 0xf;
}



/* Function: mips_func @ 000105e0 */

int mips_func(int a,int b,int c,int d)

{
 return a + b + c + d;
}



/* Function: call_mips @ 000105f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mips(void)

{
 return 100;
}



/* Function: amd64_sysv_func @ 000105f8 */

int amd64_sysv_func(int a,int b,int c,int d,int e,int f)

{
 return a + b + c + d + e + f;
}



/* Function: call_amd64_sysv @ 00010618 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_amd64_sysv(void)

{
 return 0x15;
}



/* Function: ms_x64_func @ 00010620 */

int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_ms_x64 @ 00010638 */

undefined4 call_ms_x64(void)

{
 return 0xf;
}



/* Function: vectorcall_func @ 00010640 */

int vectorcall_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_1 + param_2 + param_3 + param_4;
}



/* Function: call_vectorcall @ 00010650 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorcall(void)

{
 return 10;
}



/* Function: mixed_conventions_test @ 00010658 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mixed_conventions_test(void)

{
 /* Unresolved local var: int sum@[???] */
 return 0x21;
}



/* Function: varargs_func @ 00010660 */

/* WARNING: Removing unreachable block (ram,0x000106ac) */

int varargs_func(int count,...)

{
 int iVar1;
 int in_r1;
 undefined4 in_r2;
 undefined4 in_r3;
 int iVar2;
 va_list args;
 int count_local;
 int local_c [3];
 
 /* Unresolved local var: int sum@[???] */
 local_c[2] = in_r3;
 local_c[1] = in_r2;
 local_c[0] = in_r1;
 iVar1 = 0;
 /* Unresolved local var: int i@[???] */
 for (iVar2 = 0; iVar2 < count; iVar2 = iVar2 + 1) {
 iVar1 = iVar1 + local_c[iVar2];
 }
 return iVar1;
}



/* Function: func_no_args @ 000106d4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int func_no_args(void)

{
 return 0x2a;
}



/* Function: func_many_args @ 000106dc */

int func_many_args(int a,int b,int c,int d,int e,int f,int g,int h)

{
 return a + b + c + d + e + f + g + h;
}



/* Function: func_mixed_args @ 0001070c */

int func_mixed_args(int x,char *s,double d,longlong ll)

{
 size_t sVar1;
 int iVar2;
 undefined8 uVar3;
 undefined8 uVar4;
 undefined4 in_stack_00000000;
 undefined4 in_stack_00000004;
 
 /* Unresolved local var: int len@[???] */
 sVar1 = 0;
 if (s != (char *)0x0) {
 sVar1 = strlen(s);
 }
 uVar3 = __floatsidf(sVar1 + x);
 uVar3 = __aeabi_dadd((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),(int)ll,
 (int)((ulonglong)ll >> 0x20));
 uVar4 = __aeabi_l2d(in_stack_00000000,in_stack_00000004);
 __aeabi_dadd((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),(int)uVar4,(int)((ulonglong)uVar4 >> 0x20)
 );
 iVar2 = __aeabi_d2iz();
 return iVar2;
}



/* Function: func_struct_byval @ 0001076c */

int func_struct_byval(LargeStruct s)

{
 int *piVar1;
 int local_10 [4];
 int counter;
 int sum;
 
 piVar1 = local_10;
 counter = 0x10;
 sum = 0;
 do {
 sum = *piVar1 + sum;
 piVar1 = piVar1 + 2;
 counter = counter + -1;
 } while (counter != 0);
 return sum;
}



/* Function: func_struct_byptr @ 0001079c */

int func_struct_byptr(SmallStruct *p)

{
 int iVar1;
 
 if (p == (SmallStruct *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = p->y * p->x;
 }
 return iVar1;
}



/* Function: test_calling_conventions @ 000107b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_calling_conventions(void)

{
 int iVar1;
 uint uVar2;
 longlong *plVar3;
 int iVar4;
 uint uVar5;
 int *piVar6;
 bool bVar7;
 LargeStruct large;
 int local_90 [33];
 int local_c;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int no_args@[???]
 Unresolved local var: int many@[???]
 Unresolved local var: char * test_str@[???]
 Unresolved local var: int mixed@[???]
 Unresolved local var: int struct_val@[???]
 Unresolved local var: SmallStruct s@[???]
 Unresolved local var: int struct_ptr@[???] */
 local_c = 0;
 puts(&DAT_0001148c);
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
 iVar1 = varargs_func(5,1,2,3,4,5);
 __printf_chk(1,&DAT_0001154d,iVar1);
 __printf_chk(1,&DAT_00011575,0x2a);
 __printf_chk(1,&DAT_00011597,0x24);
 __printf_chk(1,&DAT_000115be,0x75);
 /* Unresolved local var: int i@[???] */
 uVar5 = 1;
 uVar2 = 0;
 plVar3 = large.data;
 do {
 *(uint *)plVar3 = uVar5;
 bVar7 = 0xfffffffe < uVar5;
 uVar5 = uVar5 + 1;
 *(uint *)((int)plVar3 + 4) = uVar2;
 uVar2 = uVar2 + bVar7;
 plVar3 = plVar3 + 1;
 } while (uVar5 != 0x11 || uVar2 != 0);
 memcpy(local_90,&large,0x80);
 /* Unresolved local var: longlong sum@[???]
 Unresolved local var: int i@[???] */
 iVar4 = 0;
 iVar1 = 0;
 piVar6 = local_90;
 do {
 iVar1 = iVar1 + 1;
 iVar4 = *piVar6 + iVar4;
 piVar6 = piVar6 + 2;
 } while (iVar1 != 0x10);
 __printf_chk(1,&DAT_000115e6,iVar4);
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 __printf_chk(1,&DAT_00011612,0x32,0);
 return;
}



/* Function: param_by_value_int @ 000109b8 */

int param_by_value_int(int x)

{
 return x << 1;
}



/* Function: call_by_value_int @ 000109c0 */

undefined4 call_by_value_int(void)

{
 return 0xf;
}



/* Function: param_by_value_ptr @ 000109c8 */

int param_by_value_ptr(int *p)

{
 *p = *p << 1;
 return 1;
}



/* Function: call_by_value_ptr @ 000109dc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_ptr(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: int * ptr@[???]
 Unresolved local var: int result@[???] */
 return 0xb;
}



/* Function: param_array_decay @ 000109e4 */

int param_array_decay(int *arr,int n)

{
 return 4;
}



/* Function: call_array_decay @ 000109ec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_array_decay(void)

{
 /* Unresolved local var: int[10] array@[???] */
 return 4;
}



/* Function: param_string @ 000109f4 */

int param_string(char *str)

{
 return (uint)(byte)*str + (uint)(byte)str[1];
}



/* Function: call_string_param @ 00010a04 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_param(void)

{
 return 0xad;
}



/* Function: param_ptr_array @ 00010a0c */

int param_ptr_array(char **arr,int n)

{
 int iVar1;
 int iVar2;
 
 iVar1 = 0;
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 for (iVar2 = 0; iVar2 < n; iVar2 = iVar2 + 1) {
 iVar1 = iVar1 + (uint)(byte)*arr[iVar2];
 }
 return iVar1;
}



/* Function: call_ptr_array @ 00010a34 */

/* WARNING: Removing unreachable block (ram,0x00010a7c) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ptr_array(void)

{
 int iVar1;
 char *strs [3];
 
 strs[0] = "abc";
 strs[1] = "def";
 strs[2] = "ghi";
 iVar1 = param_ptr_array(strs,3);
 return iVar1;
}



/* Function: param_varargs @ 00010a90 */

/* WARNING: Removing unreachable block (ram,0x00010adc) */

int param_varargs(int count,...)

{
 int iVar1;
 int in_r1;
 undefined4 in_r2;
 undefined4 in_r3;
 int iVar2;
 va_list args;
 int count_local;
 int local_c [3];
 
 /* Unresolved local var: int sum@[???] */
 local_c[2] = in_r3;
 local_c[1] = in_r2;
 local_c[0] = in_r1;
 iVar1 = 0;
 /* Unresolved local var: int i@[???] */
 for (iVar2 = 0; iVar2 < count; iVar2 = iVar2 + 1) {
 iVar1 = iVar1 + local_c[iVar2];
 }
 return iVar1;
}



/* Function: call_varargs_param @ 00010b04 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_varargs_param(void)

{
 int iVar1;
 
 iVar1 = param_varargs(4,10,0x14,0x1e,0x28);
 return iVar1;
}



/* Function: param_func_ptr @ 00010b2c */

int param_func_ptr(_func_int_int *callback,int x)

{
 int iVar1;
 
 iVar1 = (*callback)(x);
 return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 00010b44 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_func_ptr_param(void)

{
 int iVar1;
 
 iVar1 = param_func_ptr(callback_func,5);
 return iVar1;
}



/* Function: param_double_ptr @ 00010b54 */

int param_double_ptr(int **pp,int new_val)

{
 if ((pp != (int **)0x0) && (*pp != (int *)0x0)) {
 **pp = new_val;
 *pp = (int *)0x0;
 return 1;
 }
 return -1;
}



/* Function: call_double_ptr @ 00010b84 */

undefined4 call_double_ptr(void)

{
 return 0x15;
}



/* Function: param_complex_cast @ 00010b8c */

int param_complex_cast(void *p,int type)

{
 int iVar1;
 
 if (type != 0) {
 /* Unresolved local var: TestIntPair * s@[???] */
 if (type == 1) {
 iVar1 = *(int *)p + *(int *)((int)p + 4);
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
 }
 /* Unresolved local var: int * int_ptr@[???]
 Unresolved local var: char * char_ptr@[???]
 Unresolved local var: int * back_ptr@[???] */
 return *(int *)p;
}



/* Function: call_complex_cast @ 00010bb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_complex_cast(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: TestIntPair pair@[???] */
 return 0x12345678;
}



/* Function: param_struct_byval @ 00010bbc */

int param_struct_byval(BigStruct s)

{
 s.data[0xf] = s.data[0xf];
 s.data[0] = s.data[0] + s.data[0xf];
 return s.data[0];
}



/* Function: call_struct_byval @ 00010bd8 */

/* WARNING: Removing unreachable block (ram,0x00010c2c) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_struct_byval(void)

{
 int *piVar1;
 int iVar2;
 BigStruct s;
 
 /* Unresolved local var: int i@[???] */
 iVar2 = 0;
 piVar1 = s.data;
 do {
 *piVar1 = iVar2;
 iVar2 = iVar2 + 1;
 piVar1 = piVar1 + 1;
 } while (iVar2 != 0x10);
 return s.data[0] + s.data[0xf];
}



/* Function: param_order_dep @ 00010c3c */

int param_order_dep(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: call_order_dep @ 00010c44 */

undefined4 call_order_dep(void)

{
 return 4;
}



/* Function: test_parameter_passing @ 00010c4c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_parameter_passing(void)

{
 int iVar1;
 
 puts(&DAT_0001163f);
 __printf_chk(1,"PARAM-L1-01: %d\n",0xf);
 __printf_chk(1,"PARAM-L1-02: %d\n",0xb);
 __printf_chk(1,"PARAM-L2-01: %d\n",4);
 __printf_chk(1,"PARAM-L2-02: %d\n",0xad);
 iVar1 = call_ptr_array();
 __printf_chk(1,"PARAM-L2-03: %d\n",iVar1);
 iVar1 = call_varargs_param();
 __printf_chk(1,"PARAM-L2-04: %d\n",iVar1);
 iVar1 = call_func_ptr_param();
 __printf_chk(1,"PARAM-L3-01: %d\n",iVar1);
 __printf_chk(1,"PARAM-L3-02: %d\n",0x15);
 __printf_chk(1,"PARAM-L3-03: %d\n",0x12345678);
 iVar1 = call_struct_byval();
 __printf_chk(1,"PARAM-L3-04: %d\n",iVar1);
 __printf_chk(1,"PARAM-L3-05: %d\n",4);
 return;
}



/* Function: ret_basic_type @ 00010d50 */

int ret_basic_type(int param_1)

{
 return param_1 << 1;
}



/* Function: call_ret_basic @ 00010d58 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_basic(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: int result@[???] */
 return 0x2a;
}



/* Function: ret_pointer @ 00010d60 */

int * ret_pointer(int *p)

{
 return p + 1;
}



/* Function: call_ret_pointer @ 00010d68 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_pointer(void)

{
 /* Unresolved local var: int[3] arr@[???]
 Unresolved local var: int * ptr@[???] */
 return 0x14;
}



/* Function: ret_small_struct @ 00010d70 */

SmallPoint * ret_small_struct(SmallPoint *__return_storage_ptr__,int x,int y)

{
 /* Unresolved local var: SmallPoint p@[DW_OP_reg1(r1); DW_OP_piece: 4;
 DW_OP_reg2(r2); DW_OP_piece: 4] */
 __return_storage_ptr__->x = x;
 __return_storage_ptr__->y = y;
 return __return_storage_ptr__;
}



/* Function: call_ret_small_struct @ 00010d78 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_small_struct(void)

{
 /* Unresolved local var: SmallPoint p@[???] */
 return 7;
}



/* Function: ret_large_struct @ 00010d80 */

/* WARNING: Removing unreachable block (ram,0x00010df8) */

LargeData * ret_large_struct(LargeData *__return_storage_ptr__,int seed)

{
 int iVar1;
 int *piVar2;
 int iVar3;
 LargeData d;
 
 /* Unresolved local var: int i@[???] */
 iVar3 = 0;
 piVar2 = d.data;
 do {
 iVar1 = seed + iVar3;
 iVar3 = iVar3 + 1;
 *piVar2 = iVar1;
 piVar2 = piVar2 + 1;
 } while (iVar3 != 0x10);
 __return_storage_ptr__->data[0] = d.data[0];
 __return_storage_ptr__->data[1] = d.data[1];
 __return_storage_ptr__->data[2] = d.data[2];
 __return_storage_ptr__->data[3] = d.data[3];
 __return_storage_ptr__->data[4] = d.data[4];
 __return_storage_ptr__->data[5] = d.data[5];
 __return_storage_ptr__->data[6] = d.data[6];
 __return_storage_ptr__->data[7] = d.data[7];
 __return_storage_ptr__->data[8] = d.data[8];
 __return_storage_ptr__->data[9] = d.data[9];
 __return_storage_ptr__->data[10] = d.data[10];
 __return_storage_ptr__->data[0xb] = d.data[0xb];
 __return_storage_ptr__->data[0xc] = d.data[0xc];
 __return_storage_ptr__->data[0xd] = d.data[0xd];
 __return_storage_ptr__->data[0xe] = d.data[0xe];
 __return_storage_ptr__->data[0xf] = d.data[0xf];
 return __return_storage_ptr__;
}



/* Function: call_ret_large_struct @ 00010e0c */

/* WARNING: Removing unreachable block (ram,0x00010e54) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_large_struct(void)

{
 LargeData d;
 
 ret_large_struct(&d,100);
 return d.data[0] + d.data[0xf];
}



/* Function: ret_func_ptr @ 00010e64 */

func_ptr_t ret_func_ptr(int selector)

{
 code *pcVar1;
 
 pcVar1 = func_b;
 if (selector == 0) {
 pcVar1 = func_a;
 }
 return pcVar1;
}



/* Function: call_ret_func_ptr @ 00010e84 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_func_ptr(void)

{
 /* Unresolved local var: func_ptr_t f@[???] */
 return 10;
}



/* Function: ret_opaque_handle @ 00010e8c */

void * ret_opaque_handle(int type)

{
 undefined8 *puVar1;
 
 puVar1 = (undefined8 *)&handle1_1;
 if (type != 0) {
 puVar1 = &handle2_0;
 }
 return puVar1;
}



/* Function: call_ret_opaque @ 00010ea8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_opaque(void)

{
 /* Unresolved local var: void * h@[???] */
 return handle1_1;
}



/* Function: ret_complex_expr @ 00010eb8 */

int ret_complex_expr(int x,int y,int z)

{
 int iVar1;
 
 if (y < x) {
 iVar1 = z << 1;
 }
 else {
 iVar1 = z + 10;
 }
 return iVar1;
}



/* Function: call_ret_complex_expr @ 00010ec8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_complex_expr(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 0x28;
}



/* Function: ret_multi_branch @ 00010ed0 */

int ret_multi_branch(int op)

{
 int iVar1;
 
 if ((uint)op < 3) {
 iVar1 = op * 10 + 10;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_ret_multi_branch @ 00010ee4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_multi_branch(void)

{
 /* Unresolved local var: int sum@[???] */
 return 0x3c;
}



/* Function: ret_void @ 00010eec */

void ret_void(int x,int *out)

{
 *out = x * 3;
 return;
}



/* Function: call_ret_void @ 00010ef8 */

undefined4 call_ret_void(void)

{
 return 0x15;
}



/* Function: test_return_values @ 00010f00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_return_values(void)

{
 int iVar1;
 
 puts(&DAT_0001171b);
 __printf_chk(1,&DAT_00011739,0x2a);
 __printf_chk(1,&DAT_00011755,0x14);
 __printf_chk(1,&DAT_00011771,7);
 iVar1 = call_ret_large_struct();
 __printf_chk(1,&DAT_0001178c,iVar1);
 __printf_chk(1,&DAT_000117a9,10);
 __printf_chk(1,&DAT_000117c5,handle1_1);
 __printf_chk(1,&DAT_000117e2,0x28);
 __printf_chk(1,&DAT_000117fe,0x3c);
 __printf_chk(1,&DAT_0001181a,0x15);
 return;
}



/* CRT stub function __aeabi_drsub removed by preprocessor */



/* CRT stub function __subdf3 removed by preprocessor */




/* CRT stub function __aeabi_dadd removed by preprocessor */




/* CRT stub function __aeabi_ui2d removed by preprocessor */



/* CRT stub function __floatsidf removed by preprocessor */



/* CRT stub function __extendsfdf2 removed by preprocessor */



/* CRT stub function __floatundidf removed by preprocessor */



/* CRT stub function __aeabi_l2d removed by preprocessor */




/* CRT stub function __aeabi_d2iz removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 87 */
