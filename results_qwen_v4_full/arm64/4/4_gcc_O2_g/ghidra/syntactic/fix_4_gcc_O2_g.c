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
typedef long long longlong;
typedef unsigned long undefined8;
typedef void undefined;
typedef void (*code)(void);
typedef int (*func_ptr_t)(int);
typedef unsigned int uint;
typedef unsigned char byte;
typedef int (*_func_int_int)(int);
extern long ___stack_chk_guard;
extern long __stack_chk_guard;
extern char completed_0;
extern void __stack_chk_fail(void);
extern void *__dso_handle;
extern void __cxa_finalize(void *);
extern void deregister_tm_clones(void);

/* Struct definitions */
typedef struct {
 int x;
 int y;
} SmallStruct;

typedef struct {
 int x;
 int y;
} SmallPoint;

typedef struct {
 longlong data[16];
} LargeStruct;

typedef struct {
 int data[16];
} BigStruct;

typedef struct {
 longlong data[16];
} LargeData;

typedef struct {
 longlong data[16];
} TestIntPair;

/* Global variables */
extern int handle1_1;
extern int handle2_0;
extern char DAT_001015b0[];
extern char DAT_00101678[];
extern char DAT_001016a0[];
extern char DAT_001016c8[];
extern char DAT_001016f0[];
extern char DAT_00101718[];
extern char DAT_00101748[];
extern char DAT_00101778[];
extern char DAT_001018a8[];
extern char DAT_001018c8[];
extern char DAT_001018e8[];
extern char DAT_00101908[];
extern char DAT_00101928[];
extern char DAT_00101948[];
extern char DAT_00101968[];
extern char DAT_00101988[];
extern char DAT_001019a8[];
extern char DAT_001019c8[];

/* Global variable definitions */
long ___stack_chk_guard = 0;
char completed_0 = 0;
int handle1_1 = 21;
int handle2_0 = 42;
char DAT_001015b0[] = "Calling Conventions Test";
char DAT_00101678[] = "CALL-L2-01: %d\n";
char DAT_001016a0[] = "CALL-L2-02: %d\n";
char DAT_001016c8[] = "CALL-L2-03: %d\n";
char DAT_001016f0[] = "CALL-L2-04: %d\n";
char DAT_00101718[] = "CALL-L3-01: %lld\n";
char DAT_00101748[] = "CALL-L3-02: %d\n";
char DAT_00101778[] = "Parameter Passing Test";
char DAT_001018a8[] = "Return Values Test";
char DAT_001018c8[] = "RET-L1-01: %d\n";
char DAT_001018e8[] = "RET-L1-02: %d\n";
char DAT_00101908[] = "RET-L1-03: %d\n";
char DAT_00101928[] = "RET-L2-01: %d\n";
char DAT_00101948[] = "RET-L2-02: %d\n";
char DAT_00101968[] = "RET-L3-01: %d\n";
char DAT_00101988[] = "RET-L3-02: %d\n";
char DAT_001019a8[] = "RET-L3-03: %d\n";
char DAT_001019c8[] = "RET-L3-04: %d\n";

#include <stdarg.h>
#include <string.h>
#include <stdio.h>

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/4/4_gcc_O2_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00100710 @ 00100710 */

void FUN_00100710(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function declarations */
void test_calling_conventions(void);
void test_parameter_passing(void);
void test_return_values(void);

/* Function: main @ 001007c0 */

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





/* CRT stub function deregister_tm_clones */
void deregister_tm_clones(void)
{
 /* Empty stub */
 return;
}





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_001008bc @ 001008bc */

void FUN_001008bc(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: func_a @ 00100920 */

int func_a(int x)

{
 return x + 10;
}



/* Function: func_b @ 00100930 */

int func_b(int param_1)

{
 return param_1 << 1;
}



/* Function: cdecl_func @ 00100940 */

int cdecl_func(int a,int b)

{
 return a + b;
}



/* Function: call_cdecl @ 00100950 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_cdecl(void)

{
 return 0xf;
}



/* Function: stdcall_func @ 00100960 */

int stdcall_func(int a,int b)

{
 return a * b;
}



/* Function: call_stdcall @ 00100970 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stdcall(void)

{
 return 0x32;
}



/* Function: fastcall_func @ 00100980 */

int fastcall_func(int a,int b,int c)

{
 return a + b + c;
}



/* Function: call_fastcall @ 00100990 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fastcall(void)

{
 return 6;
}



/* Function: call_thiscall @ 001009a0 */

undefined8 call_thiscall(void)

{
 return 0xf;
}



/* Function: arm_aapcs_func @ 001009b0 */

int arm_aapcs_func(int a,int b,int c,int d,int e)

{
 return a + b + c + d + e;
}



/* Function: call_arm_aapcs @ 001009c4 */

undefined8 call_arm_aapcs(void)

{
 return 0xf;
}



/* Function: mips_func @ 001009d0 */

int mips_func(int a,int b,int c,int d)

{
 return a + b + c + d;
}



/* Function: call_mips @ 001009e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mips(void)

{
 return 100;
}



/* Function: amd64_sysv_func @ 001009f0 */

int amd64_sysv_func(int a,int b,int c,int d,int e,int f)

{
 return a + b + c + d + e + f;
}



/* Function: call_amd64_sysv @ 00100a10 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_amd64_sysv(void)

{
 return 0x15;
}



/* Function: ms_x64_func @ 00100a20 */

int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_ms_x64 @ 00100a34 */

undefined8 call_ms_x64(void)

{
 return 0xf;
}



/* Function: vectorcall_func @ 00100a40 */

int vectorcall_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_1 + param_2 + param_3 + param_4;
}



/* Function: call_vectorcall @ 00100a50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorcall(void)

{
 return 10;
}



/* Function: mixed_conventions_test @ 00100a60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mixed_conventions_test(void)

{
 /* Unresolved local var: int sum@[???] */
 return 0x21;
}



/* Function: varargs_func @ 00100a70 */

/* WARNING: Variable defined which should be unmapped: args */
/* WARNING: Removing unreachable block (ram,0x00100b3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int varargs_func(int count,...)

{
 int iVar1;
 int iVar2;
 int *piVar3;
 int *piVar4;
 int iVar5;
 int iVar6;
 int *piVar7;
 va_list args;
 
 /* Unresolved local var: int sum@[???] */
 iVar1 = 0;
 va_start(args, count);
 for (iVar2 = 0; iVar2 < count; iVar2++) {
 iVar1 += va_arg(args, int);
 }
 va_end(args);
 return iVar1;
}



/* Function: func_no_args @ 00100b40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int func_no_args(void)

{
 return 0x2a;
}



/* Function: func_many_args @ 00100b50 */

int func_many_args(int a,int b,int c,int d,int e,int f,int g,int h)

{
 return a + b + c + d + e + f + g + h;
}



/* Function: func_mixed_args @ 00100b70 */

int func_mixed_args(int x,char *s,double d,longlong ll)

{
 size_t sVar1;
 
 /* Unresolved local var: int len@[???] */
 if (s != (char *)0x0) {
 sVar1 = strlen(s);
 x = x + (int)sVar1;
 }
 return (int)((double)x + d + (double)ll);
}



/* Function: func_struct_byval @ 00100bc0 */

int func_struct_byval(LargeStruct *s)

{
 longlong *plVar1;
 long lVar3;
 longlong *plVar2;
 
 /* Unresolved local var: longlong sum@[???]
 Unresolved local var: int i@[???] */
 lVar3 = 0;
 plVar1 = s->data;
 do {
 plVar2 = plVar1 + 1;
 lVar3 = lVar3 + *plVar1;
 plVar1 = plVar2;
 } while ((LargeStruct *)plVar2 != s + 1);
 return (int)lVar3;
}



/* Function: func_struct_byptr @ 00100bf0 */

int func_struct_byptr(SmallStruct *p)

{
 if (p != (SmallStruct *)0x0) {
 return p->x * p->y;
 }
 return -1;
}



/* Function: test_calling_conventions @ 00100c10 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_calling_conventions(void)

{
 int iVar1;
 long lVar2;
 longlong *plVar3;
 LargeStruct large;
 longlong local_88;
 longlong lStack_80;
 longlong lStack_78;
 longlong lStack_70;
 longlong local_68;
 longlong lStack_60;
 longlong lStack_58;
 longlong lStack_50;
 longlong local_48;
 longlong lStack_40;
 longlong lStack_38;
 longlong lStack_30;
 longlong local_28;
 longlong lStack_20;
 longlong lStack_18;
 longlong lStack_10;
 long local_8;
 longlong *plVar4;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int no_args@[???]
 Unresolved local var: int many@[???]
 Unresolved local var: char * test_str@[???]
 Unresolved local var: int mixed@[???]
 Unresolved local var: int struct_val@[???]
 Unresolved local var: SmallStruct s@[???]
 Unresolved local var: int struct_ptr@[???] */
 local_8 = ___stack_chk_guard;
 puts((const char *)&DAT_001015b0);
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
 iVar1 = varargs_func(5,1,2,3,4);
 __printf_chk(1,(const char *)&DAT_00101678,iVar1);
 __printf_chk(1,(const char *)&DAT_001016a0,0x2a);
 __printf_chk(1,(const char *)&DAT_001016c8,0x24);
 __printf_chk(1,(const char *)&DAT_001016f0,0x75);
 /* Unresolved local var: int i@[???] */
 lVar2 = 1;
 do {
 large.data[lVar2 + -1] = lVar2;
 lVar2 = lVar2 + 1;
 } while (lVar2 != 0x11);
 lStack_80 = large.data[1];
 local_88 = large.data[0];
 lStack_70 = large.data[3];
 lStack_78 = large.data[2];
 /* Unresolved local var: longlong sum@[???] */
 lVar2 = 0;
 lStack_60 = large.data[5];
 local_68 = large.data[4];
 lStack_50 = large.data[7];
 lStack_58 = large.data[6];
 lStack_40 = large.data[9];
 local_48 = large.data[8];
 lStack_30 = large.data[0xb];
 lStack_38 = large.data[10];
 lStack_20 = large.data[0xd];
 local_28 = large.data[0xc];
 lStack_10 = large.data[0xf];
 lStack_18 = large.data[0xe];
 plVar3 = &local_88;
 do {
 plVar4 = plVar3 + 1;
 lVar2 = lVar2 + *plVar3;
 plVar3 = plVar4;
 } while (&local_8 != plVar4);
 __printf_chk(1,(const char *)&DAT_00101718,lVar2);
 if (local_8 - ___stack_chk_guard == 0) {
  __printf_chk(1,(const char *)&DAT_00101748,0x32);
  return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_by_value_int @ 00100e20 */

int param_by_value_int(int x)

{
 return x << 1;
}



/* Function: call_by_value_int @ 00100e30 */

undefined8 call_by_value_int(void)

{
 return 0xf;
}



/* Function: param_by_value_ptr @ 00100e40 */

int param_by_value_ptr(int *p)

{
 *p = *p << 1;
 return 1;
}



/* Function: call_by_value_ptr @ 00100e60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_ptr(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: int * ptr@[???]
 Unresolved local var: int result@[???] */
 return 0xb;
}



/* Function: param_array_decay @ 00100e70 */

int param_array_decay(int *arr,int n)

{
 return 8;
}



/* Function: call_array_decay @ 00100e80 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_array_decay(void)

{
 /* Unresolved local var: int[10] array@[???] */
 return 8;
}



/* Function: param_string @ 00100e90 */

int param_string(char *str)

{
 return (uint)(byte)*str + (uint)(byte)str[1];
}



/* Function: call_string_param @ 00100ea0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_param(void)

{
 return 0xad;
}



/* Function: param_ptr_array @ 00100eb0 */

int param_ptr_array(char **arr,int n)

{
 char **ppcVar1;
 int iVar2;
 long lVar3;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 lVar3 = 0;
 iVar2 = 0;
 do {
 ppcVar1 = arr + lVar3;
 lVar3 = lVar3 + 1;
 iVar2 = iVar2 + (uint)(byte)**ppcVar1;
 } while ((int)lVar3 < n);
 return iVar2;
 }
 return 0;
}



/* Function: call_ptr_array @ 00100ef0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ptr_array(void)

{
 /* Unresolved local var: char *[3] strs@[???] */
 return 300;
}



/* Function: param_varargs @ 00100f00 */

/* WARNING: Variable defined which should be unmapped: args */
/* WARNING: Removing unreachable block (ram,0x00100fcc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_varargs(int count,...)

{
 int iVar1;
 int iVar2;
 int *piVar3;
 int *piVar4;
 int iVar5;
 int iVar6;
 int *piVar7;
 va_list args;
 
 /* Unresolved local var: int sum@[???] */
 iVar1 = 0;
 va_start(args, count);
 for (iVar2 = 0; iVar2 < count; iVar2++) {
  iVar1 += va_arg(args, int);
 }
 va_end(args);
 return iVar1;
}



/* Function: call_varargs_param @ 00100fd0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_varargs_param(void)

{
 int iVar1;
 
 iVar1 = param_varargs(4,10,0x14,0x1e,0x28);
 return iVar1;
}



/* Function: param_func_ptr @ 00100ff0 */

int param_func_ptr(_func_int_int *callback,int x)

{
 int iVar1;
 
 iVar1 = (*callback)(x);
 return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 00101010 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_func_ptr_param(void)

{
 return 0x14;
}



/* Function: param_double_ptr @ 00101020 */

int param_double_ptr(int **pp,int new_val)

{
 if ((pp != (int **)0x0) && (*pp != (int *)0x0)) {
 **pp = new_val;
 *pp = (int *)0x0;
 return 1;
 }
 return -1;
}



/* Function: call_double_ptr @ 00101050 */

undefined8 call_double_ptr(void)

{
 return 0x15;
}



/* Function: param_complex_cast @ 00101060 */

int param_complex_cast(void *p,int type)

{
 if (type == 0) {
 /* Unresolved local var: int * int_ptr@[???]
 Unresolved local var: char * char_ptr@[???]
 Unresolved local var: int * back_ptr@[???] */
 return *(int *)p;
 }
 if (type == 1) {
 /* Unresolved local var: TestIntPair * s@[???] */
 return *(int *)p + *(int *)((long)p + 4);
 }
 return -1;
}



/* Function: call_complex_cast @ 00101090 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_complex_cast(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: TestIntPair pair@[???] */
 return 0x12345678;
}



/* Function: param_struct_byval @ 001010a0 */

int param_struct_byval(BigStruct *s)

{
 return s->data[0] + s->data[0xf];
}



/* Function: call_struct_byval @ 001010b0 */

/* WARNING: Removing unreachable block (ram,0x00101118) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_struct_byval(void)

{
 int iVar1;
 int *piVar2;
 BigStruct s;
 
 /* Unresolved local var: int i@[???] */
 iVar1 = 0;
 piVar2 = s.data;
 do {
 *piVar2 = iVar1;
 iVar1 = iVar1 + 1;
 piVar2 = piVar2 + 1;
 } while (iVar1 != 0x10);
 return s.data[0] + s.data[0xf];
}



/* Function: param_order_dep @ 00101120 */

int param_order_dep(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: call_order_dep @ 00101130 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_order_dep(void)

{
 /* Unresolved local var: int i@[???] */
 return 4;
}



/* Function: test_parameter_passing @ 00101140 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_parameter_passing(void)

{
 long lVar1;
 int iVar2;
 int *piVar3;
 BigStruct s;
 
 lVar1 = ___stack_chk_guard;
 puts((const char *)&DAT_00101778);
 __printf_chk(1,(const char *)"PARAM-L1-01: %d\n",0xf);
 __printf_chk(1,(const char *)"PARAM-L1-02: %d\n",0xb);
 __printf_chk(1,(const char *)"PARAM-L2-01: %d\n",8);
 __printf_chk(1,(const char *)"PARAM-L2-02: %d\n",0xad);
 __printf_chk(1,(const char *)"PARAM-L2-03: %d\n",300);
 iVar2 = param_varargs(4,10,0x14,0x1e,0x28);
 __printf_chk(1,(const char *)"PARAM-L2-04: %d\n",iVar2);
 __printf_chk(1,(const char *)"PARAM-L3-01: %d\n",0x14);
 __printf_chk(1,(const char *)"PARAM-L3-02: %d\n",0x15);
 __printf_chk(1,(const char *)"PARAM-L3-03: %d\n",0x12345678);
 /* Unresolved local var: int i@[???] */
 iVar2 = 0;
 piVar3 = s.data;
 do {
 *piVar3 = iVar2;
 iVar2 = iVar2 + 1;
 piVar3 = piVar3 + 1;
 } while (iVar2 != 0x10);
 __printf_chk(1,(const char *)"PARAM-L3-04: %d\n",s.data[0] + s.data[0xf]);
 if (lVar1 - ___stack_chk_guard == 0) {
  __printf_chk(1,(const char *)"PARAM-L3-05: %d\n",4);
  return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: ret_basic_type @ 001012a4 */

int ret_basic_type(int param_1)

{
 return param_1 << 1;
}



/* Function: call_ret_basic @ 001012b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_basic(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: int result@[???] */
 return 0x2a;
}



/* Function: ret_pointer @ 001012c0 */

int * ret_pointer(int *p)

{
 return p + 1;
}



/* Function: call_ret_pointer @ 001012d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_pointer(void)

{
 /* Unresolved local var: int[3] arr@[???]
 Unresolved local var: int * ptr@[???] */
 return 0x14;
}



/* Function: ret_small_struct @ 001012e0 */

SmallPoint ret_small_struct(int x,int y)

{
 SmallPoint SVar1;
 
 SVar1.y = y;
 SVar1.x = x;
 /* Unresolved local var: SmallPoint p@[DW_OP_reg0(x0); DW_OP_piece: 4;
 DW_OP_reg1(x1); DW_OP_piece: 4] */
 return SVar1;
}



/* Function: call_ret_small_struct @ 001012f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_small_struct(void)

{
 /* Unresolved local var: SmallPoint p@[???] */
 return 7;
}



/* Function: ret_large_struct @ 00101300 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ret_large_struct(LargeData *__return_storage_ptr__,int seed)

{
 long lVar1;
 long lVar2;
 long lVar3;
 LargeData d;
 
 lVar2 = ___stack_chk_guard;
 lVar3 = 1;
 do {
 /* Unresolved local var: int i@[???] */
 lVar1 = lVar3 + 1;
 d.data[lVar3 + -1] = seed + -1 + (int)lVar3;
 lVar3 = lVar1;
 } while (lVar1 != 0x11);
 *(undefined8 *)(__return_storage_ptr__->data + 2) = d.data[1];
 *(undefined8 *)__return_storage_ptr__->data = d.data[0];
 *(undefined8 *)(__return_storage_ptr__->data + 6) = d.data[3];
 *(undefined8 *)(__return_storage_ptr__->data + 4) = d.data[2];
 *(undefined8 *)(__return_storage_ptr__->data + 10) = d.data[5];
 *(undefined8 *)(__return_storage_ptr__->data + 8) = d.data[4];
 *(undefined8 *)(__return_storage_ptr__->data + 0xe) = d.data[7];
 *(undefined8 *)(__return_storage_ptr__->data + 0xc) = d.data[6];
 if (lVar2 - ___stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_ret_large_struct @ 00101380 */

/* WARNING: Removing unreachable block (ram,0x001013f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_large_struct(void)

{
 long lVar1;
 long lVar2;
 LargeData d;
 
 /* Unresolved local var: LargeData d@[???] */
 lVar2 = 1;
 do {
 lVar1 = lVar2 + 1;
 d.data[lVar2 + -1] = (int)lVar2 + 99;
 lVar2 = lVar1;
 } while (lVar1 != 0x11);
 return d.data[0xf] + d.data[0];
}



/* Function: ret_func_ptr @ 001013f4 */

func_ptr_t ret_func_ptr(int selector)

{
 func_ptr_t p_Var1;
 
 p_Var1 = func_b;
 if (selector == 0) {
 p_Var1 = func_a;
 }
 return p_Var1;
}



/* Function: call_ret_func_ptr @ 00101410 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_func_ptr(void)

{
 /* Unresolved local var: func_ptr_t f@[???] */
 return 10;
}



/* Function: ret_opaque_handle @ 00101420 */

void * ret_opaque_handle(int type)

{
 undefined8 *puVar1;
 
 puVar1 = (undefined8 *)&handle1_1;
 if (type != 0) {
 puVar1 = (undefined8 *)&handle2_0;
 }
 return puVar1;
}



/* Function: call_ret_opaque @ 00101440 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_opaque(void)

{
 /* Unresolved local var: void * h@[???] */
 return handle1_1;
}



/* Function: ret_complex_expr @ 00101450 */

int ret_complex_expr(int x,int y,int z)

{
 int iVar1;
 
 iVar1 = z + 10;
 if (y < x) {
 iVar1 = z << 1;
 }
 return iVar1;
}



/* Function: call_ret_complex_expr @ 00101464 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_complex_expr(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 0x28;
}



/* Function: ret_multi_branch @ 00101470 */

int ret_multi_branch(int op)

{
 int iVar1;
 
 iVar1 = (op + 1) * 10;
 if (2 < (uint)op) {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_ret_multi_branch @ 00101490 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_multi_branch(void)

{
 /* Unresolved local var: int sum@[???] */
 return 0x3c;
}



/* Function: ret_void @ 001014a0 */

void ret_void(int x,int *out)

{
 *out = x * 3;
 return;
}



/* Function: call_ret_void @ 001014b0 */

undefined8 call_ret_void(void)

{
 return 0x15;
}



/* Function: test_return_values @ 001014c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_return_values(void)

{
 int iVar1;
 
 puts((const char *)&DAT_001018a8);
 __printf_chk(1,(const char *)&DAT_001018c8,0x2a);
 __printf_chk(1,(const char *)&DAT_001018e8,0x14);
 __printf_chk(1,(const char *)&DAT_00101908,7);
 iVar1 = call_ret_large_struct();
 __printf_chk(1,(const char *)&DAT_00101928,iVar1);
 __printf_chk(1,(const char *)&DAT_00101948,10);
 /* Unresolved local var: void * h@[???] */
 __printf_chk(1,(const char *)&DAT_00101968,handle1_1);
 __printf_chk(1,(const char *)&DAT_00101988,0x28);
 __printf_chk(1,(const char *)&DAT_001019a8,0x3c);
 __printf_chk(1,(const char *)&DAT_001019c8,0x15);
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 79 */
