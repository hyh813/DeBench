/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/4/4_clang_O0_g
 * Processor: ARM
 * Compiler Spec: default
 */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/* Ghidra macros */
#define CONCAT44(hi, lo) (((ulonglong)(hi) << 32) | (lo))
#define CARRY4(a, b) (((a) + (b)) < (a))
#define SBORROW4(a, b) ((a) < 0 && (b) >= 0)
#define SCARRY4(a, b) ((a) >= 0 && (b) >= 0 && ((a) + (b)) < 0)
#define LZCOUNT(x) __builtin_clz(x)

/* Ghidra type definitions */
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef long long longlong;
typedef unsigned long long ulonglong;
typedef unsigned char undefined1;
typedef unsigned char undefined;

/* Struct definitions */
typedef struct {
 int x;
 int y;
} SmallStruct;

typedef struct {
 longlong data[16];
} LargeStruct;

typedef struct {
 int data[16];
} BigStruct;

typedef struct {
 int data[16];
} LargeData;

typedef struct {
 int x;
 int y;
} SmallPoint;

typedef struct {
 int a;
 int b;
} TestIntPair;

typedef int (*func_ptr_t)(int);
typedef int (*_func_int_int)(int);
typedef unsigned char byte;
typedef _Bool bool;

/* Global variables for ret_opaque_handle */
static double handle1 = 1.0;
static double handle2 = 2.0;

/* External function declarations */
extern int callback_func(int x);

/* Compiler runtime function declarations */
extern ulonglong __adddf3(uint param_1,uint param_2,uint param_3,uint param_4);
extern ulonglong __floatsidf(int param_1);
extern uint __fixdfsi(uint param_1,uint param_2);

/* External data declarations */
char DAT_00012180[] = "=== Calling Conventions Test ===\n";
char DAT_00012242[] = "CALL-L1-11: %d\n";
char DAT_0001226a[] = "CALL-L1-11: %d\n";
char DAT_0001228c[] = "CALL-L1-12: %d\n";
char DAT_000122b3[] = "test";
char DAT_000122b8[] = "CALL-L1-13: %d\n";
char DAT_000122e0[] = "RET-L1-05: %d\n";
char DAT_0001230c[] = "CALL-L1-14: %d\n";
char DAT_00012343[] = "def";
char DAT_00012347[] = "ghi";
char DAT_0001234b[] = "=== Parameter Passing Test ===\n";
char DAT_00012428[] = "=== Return Values Test ===\n";
char DAT_00012447[] = "RET-L1-01: %d\n";
char DAT_00012463[] = "RET-L1-02: %d\n";
char DAT_0001247f[] = "RET-L1-03: %d\n";
char DAT_0001249a[] = "RET-L1-04: %d\n";
char DAT_000124b7[] = "RET-L1-07: %d\n";
char DAT_000124d3[] = "RET-L1-06: %d\n";
char DAT_000124f0[] = "RET-L1-08: %d\n";
char DAT_0001250c[] = "RET-L1-09: %d\n";
char DAT_00012528[] = "RET-L1-10: %d\n";

/* CRT stub function _init removed by preprocessor */





/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: cdecl_func @ 000105dc */

int cdecl_func(int a,int b)

{
 return a + b;
}



/* Function: call_cdecl @ 000105fc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_cdecl(void)

{
 int iVar1;
 
 iVar1 = cdecl_func(5,10);
 return iVar1;
}



/* Function: stdcall_func @ 00010618 */

int stdcall_func(int a,int b)

{
 return a * b;
}



/* Function: call_stdcall @ 00010638 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stdcall(void)

{
 int iVar1;
 
 iVar1 = stdcall_func(5,10);
 return iVar1;
}



/* Function: fastcall_func @ 00010654 */

int fastcall_func(int a,int b,int c)

{
 return a + b + c;
}



/* Function: call_fastcall @ 00010680 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fastcall(void)

{
 int iVar1;
 
 iVar1 = fastcall_func(1,2,3);
 return iVar1;
}



/* Function: call_thiscall @ 000106a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thiscall(void)

{
 return 0xf;
}



/* Function: arm_aapcs_func @ 000106a8 */

int arm_aapcs_func(int a,int b,int c,int d,int e)

{
 return a + b + c + d + e;
}



/* Function: call_arm_aapcs @ 000106ec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_arm_aapcs(void)

{
 int iVar1;
 
 iVar1 = arm_aapcs_func(1,2,3,4,5);
 return iVar1;
}



/* Function: mips_func @ 00010724 */

int mips_func(int a,int b,int c,int d)

{
 return a + b + c + d;
}



/* Function: call_mips @ 0001075c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mips(void)

{
 int iVar1;
 
 iVar1 = mips_func(10,0x14,0x1e,0x28);
 return iVar1;
}



/* Function: amd64_sysv_func @ 00010780 */

int amd64_sysv_func(int a,int b,int c,int d,int e,int f)

{
 return a + b + c + d + e + f;
}



/* Function: call_amd64_sysv @ 000107d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_amd64_sysv(void)

{
 int iVar1;
 
 iVar1 = amd64_sysv_func(1,2,3,4,5,6);
 return iVar1;
}



/* Function: ms_x64_func @ 00010810 */

int ms_x64_func(int a,int b,int c,int d,int e)

{
 return a + b + c + d + e;
}



/* Function: call_ms_x64 @ 00010854 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ms_x64(void)

{
 int iVar1;
 
 iVar1 = ms_x64_func(1,2,3,4,5);
 return iVar1;
}



/* Function: vectorcall_func @ 0001088c */

int vectorcall_func(int a,int b,int c,int d)

{
 return a + b + c + d;
}



/* Function: call_vectorcall @ 000108c4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorcall(void)

{
 int iVar1;
 
 iVar1 = vectorcall_func(1,2,3,4);
 return iVar1;
}



/* Function: mixed_conventions_test @ 000108e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mixed_conventions_test(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 /* Unresolved local var: int sum@[DW_OP_breg13(sp): +4] */
 iVar1 = cdecl_func(1,2);
 iVar2 = stdcall_func(3,4);
 iVar3 = fastcall_func(5,6,7);
 return iVar1 + iVar2 + iVar3;
}



/* Function: varargs_func @ 00010964 */

int varargs_func(int count,...)

{
 int local_1c;
 int local_18;
 int *local_14;
 int local_c [3];
 
 /* Unresolved local var: va_list args@[DW_OP_breg13(sp): +8]
 Unresolved local var: int sum@[DW_OP_breg13(sp): +4] */
 local_18 = 0;
 local_14 = local_c;
 /* Unresolved local var: int i@[DW_OP_breg13(sp): 0] */
 for (local_1c = 0; local_1c < count; local_1c = local_1c + 1) {
 local_18 = local_18 + *local_14;
 local_14 = local_14 + 1;
 }
 return local_18;
}



/* Function: func_no_args @ 000109e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int func_no_args(void)

{
 return 0x2a;
}



/* Function: func_many_args @ 000109e8 */

int func_many_args(int a,int b,int c,int d,int e,int f,int g,int h)

{
 return a + b + c + d + e + f + g + h;
}



/* Function: func_mixed_args @ 00010a50 */

int func_mixed_args(int x,char *s,double d,longlong ll)

{
 int iVar1;
 undefined8 uVar2;
 undefined8 uVar3;
 undefined4 in_stack_00000000;
 undefined4 in_stack_00000004;
 undefined4 local_30;
 undefined4 local_20;
 undefined4 local_1c;
 
 /* Unresolved local var: int len@[DW_OP_breg13(sp): +12] */
 if (s == (char *)0x0) {
 local_30 = 0;
 }
 else {
 local_30 = strlen(s);
 }
 uVar2 = __floatsidf(x + local_30);
 local_20 = (undefined4)ll;
 local_1c = (undefined4)((ulonglong)ll >> 0x20);
 uVar2 = __adddf3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),local_20,local_1c);
 uVar3 = __floatdidf(in_stack_00000000,in_stack_00000004);
 uVar2 = __adddf3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),(int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
 iVar1 = __fixdfsi((int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
 return iVar1;
}



/* Function: func_struct_byval @ 00010b0c */

int func_struct_byval(LargeStruct s)

{
 int local_1c;
 int local_18;
 int local_10 [4];
 
 /* Unresolved local var: longlong sum@[DW_OP_breg13(sp): +8] */
 local_18 = 0;
 /* Unresolved local var: int i@[DW_OP_breg13(sp): +4] */
 local_1c = 0;
 while (local_1c < 0x10) {
 local_10[local_1c] = local_1c + 1;
 local_18 = local_18 + local_10[local_1c];
 local_1c = local_1c + 1;
 }
 return local_18;
}



/* Function: func_struct_byptr @ 00010b94 */

int func_struct_byptr(SmallStruct *p)

{
 int local_4;
 
 if (p == (SmallStruct *)0x0) {
 local_4 = -1;
 }
 else {
 local_4 = p->x * p->y;
 }
 return local_4;
}



/* Function: test_calling_conventions @ 00010bdc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_calling_conventions(void)

{
 int iVar1;
 undefined4 uVar2;
 double d;
 LargeStruct s;
 undefined1 auVar3 [116];
 undefined1 auVar4 [12];
 undefined1 in_stack_00000000 [112];
 int local_e0;
 undefined4 *local_dc;
 undefined4 *local_d8;
 SmallStruct local_b8;
 int local_b0;
 int local_ac;
 undefined1 local_a8 [12];
 undefined4 local_9c;
 undefined4 auStack_98 [29];
 int local_24;
 undefined *local_20;
 int local_1c;
 int local_18;
 int local_14;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int no_args@[???]
 Unresolved local var: int many@[???]
 Unresolved local var: char * test_str@[???]
 Unresolved local var: int mixed@[???]
 Unresolved local var: LargeStruct large@[???]
 Unresolved local var: int struct_val@[DW_OP_breg13(sp): +168]
 Unresolved local var: SmallStruct s@[DW_OP_breg13(sp): +160]
 Unresolved local var: int struct_ptr@[DW_OP_breg13(sp): +156] */
 printf(&DAT_00012180);
 iVar1 = call_cdecl();
 printf("CALL-L1-01: %d\n",iVar1);
 iVar1 = call_stdcall();
 printf("CALL-L1-02: %d\n",iVar1);
 iVar1 = call_fastcall();
 printf("CALL-L1-03: %d\n",iVar1);
 iVar1 = call_thiscall();
 printf("CALL-L1-04: %d\n",iVar1);
 iVar1 = call_arm_aapcs();
 printf("CALL-L1-05: %d\n",iVar1);
 iVar1 = call_mips();
 printf("CALL-L1-06: %d\n",iVar1);
 iVar1 = call_amd64_sysv();
 printf("CALL-L1-07: %d\n",iVar1);
 iVar1 = call_ms_x64();
 printf("CALL-L1-08: %d\n",iVar1);
 iVar1 = call_vectorcall();
 printf("CALL-L1-09: %d\n",iVar1);
 iVar1 = mixed_conventions_test();
 printf("CALL-L1-10: %d\n",iVar1);
 local_14 = varargs_func(5);
 printf(&DAT_00012242,local_14);
 local_18 = func_no_args();
 printf(&DAT_0001226a,local_18);
 local_1c = func_many_args(1,2,3,4,5,6,7,8);
 printf(&DAT_0001228c,local_1c);
 local_20 = &DAT_000122b3;
 local_24 = func_mixed_args(10,"test",d,0x40091eb851eb851f);
 printf(&DAT_000122b8,local_24);
 /* Unresolved local var: int i@[???] */
 for (local_ac = 0; local_ac < 0x10; local_ac = local_ac + 1) {
 *(int *)(local_a8 + local_ac * 8) = local_ac + 1;
 *(int *)(local_a8 + local_ac * 8 + 4) = local_ac + 1 >> 0x1f;
 }
 local_e0 = 0x70;
 local_dc = auStack_98;
 local_d8 = (undefined4 *)&local_e0;
 do {
 *local_d8 = *local_dc;
 local_e0 = local_e0 + -4;
 local_dc = local_dc + 1;
 local_d8 = local_d8 + 1;
 } while (local_e0 != 0);
 memcpy(auVar3, in_stack_00000000, sizeof(in_stack_00000000));
 memcpy(s.data, local_a8, sizeof(local_a8));
 local_b0 = func_struct_byval(s);
 printf(&DAT_000122e0,local_b0);
 local_b8.y = 10;
 local_b8.x = 5;
 iVar1 = func_struct_byptr(&local_b8);
 printf(&DAT_0001230c,iVar1);
 return;
}



/* Function: param_by_value_int @ 00010f18 */

int param_by_value_int(int x)

{
 return x << 1;
}



/* Function: call_by_value_int @ 00010f38 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_int(void)

{
 int iVar1;
 
 /* Unresolved local var: int val@[DW_OP_breg13(sp): +4]
 Unresolved local var: int result@[DW_OP_breg13(sp): 0] */
 iVar1 = param_by_value_int(5);
 return iVar1 + 5;
}



/* Function: param_by_value_ptr @ 00010f70 */

int param_by_value_ptr(int *p)

{
 *p = *p << 1;
 return 1;
}



/* Function: call_by_value_ptr @ 00010fa4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_ptr(void)

{
 int iVar1;
 int local_c;
 
 /* Unresolved local var: int val@[???]
 Unresolved local var: int * ptr@[DW_OP_breg13(sp): +8]
 Unresolved local var: int result@[DW_OP_breg13(sp): +4] */
 local_c = 5;
 iVar1 = param_by_value_ptr(&local_c);
 return local_c + iVar1;
}



/* Function: param_array_decay @ 00010fe4 */

int param_array_decay(int *arr,int n)

{
 return 4;
}



/* Function: call_array_decay @ 00010ffc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_array_decay(void)

{
 int iVar1;
 int aiStack_30 [10];
 
 /* Unresolved local var: int[10] array@[DW_OP_breg13(sp): +8] */
 memset(aiStack_30,0,0x28);
 iVar1 = param_array_decay(aiStack_30,10);
 return iVar1;
}



/* Function: param_string @ 00011034 */

int param_string(char *str)

{
 return (uint)(byte)*str + (uint)(byte)str[1];
}



/* Function: call_string_param @ 00011054 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_param(void)

{
 int iVar1;
 
 iVar1 = param_string("Hello");
 return iVar1;
}



/* Function: param_ptr_array @ 00011074 */

int param_ptr_array(char **arr,int n)

{
 int local_10;
 int local_c;
 
 /* Unresolved local var: int sum@[DW_OP_breg13(sp): +4] */
 local_c = 0;
 /* Unresolved local var: int i@[DW_OP_breg13(sp): 0] */
 for (local_10 = 0; local_10 < n; local_10 = local_10 + 1) {
 local_c = local_c + (uint)(byte)*arr[local_10];
 }
 return local_c;
}



/* Function: call_ptr_array @ 000110e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ptr_array(void)

{
 int iVar1;
 char *local_14;
 undefined *local_10;
 undefined *local_c;
 
 /* Unresolved local var: char *[3] strs@[DW_OP_breg13(sp): +4] */
 local_14 = "abc";
 local_10 = &DAT_00012343;
 local_c = &DAT_00012347;
 iVar1 = param_ptr_array(&local_14,3);
 return iVar1;
}



/* Function: param_varargs @ 00011130 */

int param_varargs(int count,...)

{
 int local_1c;
 int local_18;
 int *local_14;
 int local_c [3];
 
 /* Unresolved local var: va_list args@[DW_OP_breg13(sp): +8]
 Unresolved local var: int sum@[DW_OP_breg13(sp): +4] */
 local_18 = 0;
 local_14 = local_c;
 /* Unresolved local var: int i@[DW_OP_breg13(sp): 0] */
 for (local_1c = 0; local_1c < count; local_1c = local_1c + 1) {
 local_18 = local_18 + *local_14;
 local_14 = local_14 + 1;
 }
 return local_18;
}



/* Function: call_varargs_param @ 000111ac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_varargs_param(void)

{
 int iVar1;
 
 iVar1 = param_varargs(4,10,0x14,0x1e,0x28);
 return iVar1;
}



/* Function: param_func_ptr @ 000111e4 */

int param_func_ptr(_func_int_int *callback,int x)

{
 int iVar1;
 
 iVar1 = (*callback)(x);
 return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 00011218 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_func_ptr_param(void)

{
 int iVar1;
 
 iVar1 = param_func_ptr(callback_func,5);
 return iVar1;
}



/* Function: callback_func @ 0001123c */

int callback_func(int x)

{
 return x << 1;
}



/* Function: param_double_ptr @ 00011254 */

int param_double_ptr(int **pp,int new_val)

{
 int local_4;
 
 if ((pp == (int **)0x0) || (*pp == (int *)0x0)) {
 local_4 = -1;
 }
 else {
 **pp = new_val;
 *pp = (int *)0x0;
 local_4 = 1;
 }
 return local_4;
}



/* Function: call_double_ptr @ 000112c4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_double_ptr(void)

{
 int *local_10;
 int local_c;
 
 /* Unresolved local var: int val@[???]
 Unresolved local var: int * ptr@[DW_OP_breg13(sp): +8]
 Unresolved local var: int result@[DW_OP_breg13(sp): +4] */
 local_c = 10;
 local_10 = &local_c;
 param_double_ptr(&local_10,0x14);
 if (local_10 == (int *)0x0) {
 local_c = local_c + 1;
 }
 return local_c;
}



/* Function: param_complex_cast @ 00011310 */

int param_complex_cast(void *p,int type)

{
 undefined4 local_4;
 
 if (type == 0) {
 /* Unresolved local var: int * int_ptr@[DW_OP_breg13(sp): +12]
 Unresolved local var: char * char_ptr@[DW_OP_breg13(sp): +8]
 Unresolved local var: int * back_ptr@[DW_OP_breg13(sp): +4] */
 local_4 = *(int *)p;
 }
 else if (type == 1) {
 /* Unresolved local var: TestIntPair * s@[DW_OP_breg13(sp): 0] */
 local_4 = *(int *)p + *(int *)((int)p + 4);
 }
 else {
 local_4 = -1;
 }
 return local_4;
}



/* Function: call_complex_cast @ 000113a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_complex_cast(void)

{
 int iVar1;
 undefined4 local_14;
 undefined4 local_10;
 undefined4 local_c;
 
 /* Unresolved local var: int val@[???]
 Unresolved local var: TestIntPair pair@[DW_OP_breg13(sp): +4] */
 local_c = 0x12345678;
 local_10 = 200;
 local_14 = 100;
 param_complex_cast(&local_14,1);
 iVar1 = param_complex_cast(&local_c,0);
 return iVar1;
}



/* Function: param_struct_byval @ 00011400 */

int param_struct_byval(BigStruct s)

{
 s.data[0xf] = s.data[0xf];
 s.data[0] = s.data[0] + s.data[0xf];
 return s.data[0];
}



/* Function: call_struct_byval @ 000114b8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_struct_byval(void)

{
 int iVar1;
 int iVar3;
 int iVar4;
 int iVar5;
 undefined8 uVar6;
 undefined1 auVar7 [12];
 BigStruct s;
 undefined1 auVar8 [52];
 undefined1 in_stack_00000000 [48];
 int local_68;
 int local_64 [16];
 int iVar2;
 
 /* Unresolved local var: BigStruct s@[DW_OP_breg13(sp): +68] */
 /* Unresolved local var: int i@[DW_OP_breg13(sp): +64] */
 for (local_68 = 0; local_68 < 0x10; local_68 = local_68 + 1) {
 local_64[local_68] = local_68;
 }
 iVar3 = local_64[1];
 iVar2 = local_64[0];
 uVar6 = CONCAT44(iVar3,iVar2);
 iVar4 = local_64[2];
 memcpy(auVar7, &iVar4, 4);
 memcpy((char*)auVar7 + 4, &uVar6, 8);
 iVar5 = local_64[3];
 memcpy(s.data, local_64, sizeof(local_64));
 iVar1 = param_struct_byval(s);
 return iVar1;
}



/* Function: param_order_dep @ 000115a4 */

int param_order_dep(int a,int b)

{
 return a + b;
}



/* Function: call_order_dep @ 000115c4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_order_dep(void)

{
 int iVar1;
 
 /* Unresolved local var: int i@[DW_OP_breg13(sp): +4] */
 iVar1 = param_order_dep(1,2);
 return iVar1;
}



/* Function: test_parameter_passing @ 00011600 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_parameter_passing(void)

{
 int iVar1;
 
 printf(&DAT_0001234b);
 iVar1 = call_by_value_int();
 printf("PARAM-L1-01: %d\n",iVar1);
 iVar1 = call_by_value_ptr();
 printf("PARAM-L1-02: %d\n",iVar1);
 iVar1 = call_array_decay();
 printf("PARAM-L2-01: %d\n",iVar1);
 iVar1 = call_string_param();
 printf("PARAM-L2-02: %d\n",iVar1);
 iVar1 = call_ptr_array();
 printf("PARAM-L2-03: %d\n",iVar1);
 iVar1 = call_varargs_param();
 printf("PARAM-L2-04: %d\n",iVar1);
 iVar1 = call_func_ptr_param();
 printf("PARAM-L3-01: %d\n",iVar1);
 iVar1 = call_double_ptr();
 printf("PARAM-L3-02: %d\n",iVar1);
 iVar1 = call_complex_cast();
 printf("PARAM-L3-03: %d\n",iVar1);
 iVar1 = call_struct_byval();
 printf("PARAM-L3-04: %d\n",iVar1);
 iVar1 = call_order_dep();
 printf("PARAM-L3-05: %d\n",iVar1);
 return;
}



/* Function: ret_basic_type @ 00011728 */

int ret_basic_type(int x)

{
 return x << 1;
}



/* Function: call_ret_basic @ 00011740 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_basic(void)

{
 int iVar1;
 
 /* Unresolved local var: int val@[DW_OP_breg13(sp): +4]
 Unresolved local var: int result@[DW_OP_breg13(sp): 0] */
 iVar1 = ret_basic_type(0x15);
 return iVar1;
}



/* Function: ret_pointer @ 00011770 */

int * ret_pointer(int *p)

{
 return p + 1;
}



/* Function: call_ret_pointer @ 00011788 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_pointer(void)

{
 int *piVar1;
 int local_14;
 undefined4 local_10;
 undefined4 local_c;
 
 /* Unresolved local var: int[3] arr@[DW_OP_breg13(sp): +4]
 Unresolved local var: int * ptr@[DW_OP_breg13(sp): 0] */
 local_14 = 10;
 local_10 = 0x14;
 local_c = 0x1e;
 piVar1 = ret_pointer(&local_14);
 return *piVar1;
}



/* Function: ret_small_struct @ 000117e0 */

SmallPoint * ret_small_struct(SmallPoint *__return_storage_ptr__,int x,int y)

{
 /* Unresolved local var: SmallPoint p@[???] */
 __return_storage_ptr__->x = x;
 __return_storage_ptr__->y = y;
 return (SmallPoint *)y;
}



/* Function: call_ret_small_struct @ 00011810 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_small_struct(void)

{
 SmallPoint local_10;
 
 /* Unresolved local var: SmallPoint p@[DW_OP_breg13(sp): 0] */
 ret_small_struct(&local_10,3,4);
 return local_10.x + local_10.y;
}



/* Function: ret_large_struct @ 00011844 */

LargeData * ret_large_struct(LargeData *__return_storage_ptr__,int seed)

{
 int local_8;
 
 /* Unresolved local var: LargeData d@[???] */
 /* Unresolved local var: int i@[DW_OP_breg13(sp): +4] */
 for (local_8 = 0; local_8 < 0x10; local_8 = local_8 + 1) {
 __return_storage_ptr__->data[local_8] = local_8 + seed;
 }
 return (LargeData *)local_8;
}



/* Function: call_ret_large_struct @ 0001189c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_large_struct(void)

{
 LargeData local_48;
 
 /* Unresolved local var: LargeData d@[DW_OP_breg13(sp): 0] */
 ret_large_struct(&local_48,100);
 return local_48.data[0] + local_48.data[0xf];
}



/* Function: func_a @ 000118cc */

int func_a(int x)

{
 return x + 10;
}



/* Function: func_b @ 000118e4 */

int func_b(int x)

{
 return x << 1;
}



/* Function: ret_func_ptr @ 000118fc */

func_ptr_t ret_func_ptr(int selector)

{
 func_ptr_t p_Var1;
 
 p_Var1 = func_a;
 if (selector != 0) {
 p_Var1 = func_b;
 }
 return p_Var1;
}



/* Function: call_ret_func_ptr @ 00011930 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_func_ptr(void)

{
 func_ptr_t p_Var1;
 int iVar2;
 
 /* Unresolved local var: func_ptr_t f@[DW_OP_breg13(sp): +4] */
 p_Var1 = ret_func_ptr(1);
 iVar2 = (*p_Var1)(5);
 return iVar2;
}



/* Function: ret_opaque_handle @ 00011964 */

void * ret_opaque_handle(int type)

{
 double *pdVar1;
 
 pdVar1 = &handle2;
 if (type == 0) {
 pdVar1 = (double *)&handle1;
 }
 return pdVar1;
}



/* Function: call_ret_opaque @ 00011998 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_opaque(void)

{
 int *piVar1;
 
 /* Unresolved local var: void * h@[DW_OP_breg13(sp): +4] */
 piVar1 = ret_opaque_handle(0);
 return *piVar1;
}



/* Function: ret_complex_expr @ 000119c4 */

int ret_complex_expr(int x,int y,int z)

{
 undefined4 local_10;
 
 if (y < x) {
 local_10 = z << 1;
 }
 else {
 local_10 = z + 10;
 }
 return local_10;
}



/* Function: call_ret_complex_expr @ 00011a14 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_complex_expr(void)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 iVar1 = ret_complex_expr(5,3,10);
 iVar2 = ret_complex_expr(3,5,10);
 return iVar1 + iVar2;
}



/* Function: ret_multi_branch @ 00011a70 */

int ret_multi_branch(int op)

{
 undefined4 local_4;
 
 if (op == 0) {
 local_4 = 10;
 }
 else if (op == 1) {
 local_4 = 0x14;
 }
 else if (op == 2) {
 local_4 = 0x1e;
 }
 else {
 local_4 = -1;
 }
 return local_4;
}



/* Function: call_ret_multi_branch @ 00011ae8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_multi_branch(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 /* Unresolved local var: int sum@[DW_OP_breg13(sp): +4] */
 iVar1 = ret_multi_branch(0);
 iVar2 = ret_multi_branch(1);
 iVar3 = ret_multi_branch(2);
 return iVar1 + iVar2 + iVar3;
}



/* Function: ret_void @ 00011b50 */

void ret_void(int x,int *out)

{
 *out = x * 3;
 return;
}



/* Function: call_ret_void @ 00011b74 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_void(void)

{
 int local_c;
 
 /* Unresolved local var: int result@[DW_OP_breg13(sp): +4] */
 ret_void(7,&local_c);
 return local_c;
}



/* Function: test_return_values @ 00011b9c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_return_values(void)

{
 int iVar1;
 
 printf(&DAT_00012428);
 iVar1 = call_ret_basic();
 printf(&DAT_00012447,iVar1);
 iVar1 = call_ret_pointer();
 printf(&DAT_00012463,iVar1);
 iVar1 = call_ret_small_struct();
 printf(&DAT_0001247f,iVar1);
 iVar1 = call_ret_large_struct();
 printf(&DAT_0001249a,iVar1);
 iVar1 = call_ret_func_ptr();
 printf(&DAT_000124b7,iVar1);
 iVar1 = call_ret_opaque();
 printf(&DAT_000124d3,iVar1);
 iVar1 = call_ret_complex_expr();
 printf(&DAT_000124f0,iVar1);
 iVar1 = call_ret_multi_branch();
 printf(&DAT_0001250c,iVar1);
 iVar1 = call_ret_void();
 printf(&DAT_00012528,iVar1);
 return;
}



/* Function: main @ 00011c94 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}
































/* CRT stub function __floatdidf removed by preprocessor */




/* Function: __fixdfsi @ 00012088 */

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




/* Total functions decompiled: 87 */
