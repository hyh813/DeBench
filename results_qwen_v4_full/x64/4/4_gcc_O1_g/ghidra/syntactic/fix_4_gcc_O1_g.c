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
typedef unsigned long ulong;
typedef long long longlong;
typedef unsigned long undefined8;
typedef unsigned int uint;
typedef unsigned char undefined;
typedef void code;
typedef int (*func_ptr_t)(int);
typedef int (*_func_int_int)(int);

/* Struct definitions */
typedef struct {
    longlong data[16];
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

/* Global variables */
int handle1_1 = 42;
int handle2_0 = 43;

/* Data section strings */
char DAT_00102008[] = "=== Calling Conventions Test ===";
char DAT_00102030[] = "CALL-L2-01: %d\n";
char DAT_00102058[] = "CALL-L2-02: %d\n";
char DAT_00102080[] = "CALL-L2-03: %d\n";
char DAT_001020a8[] = "CALL-L2-04: %d\n";
char DAT_001020d0[] = "CALL-L3-01: %lld\n";
char DAT_00102100[] = "CALL-L3-02: %d\n";
char DAT_00102130[] = "=== Parameter Passing Test ===";
char DAT_001022bd[] = "=== Return Values Test ===";
char DAT_001022db[] = "RET-L1-01: %d\n";
char DAT_001022f7[] = "RET-L1-02: %d\n";
char DAT_00102313[] = "RET-L1-03: %d\n";
char DAT_0010232e[] = "RET-L1-04: %d\n";
char DAT_0010234b[] = "RET-L1-05: %d\n";
char DAT_00102367[] = "RET-L1-06: %d\n";
char DAT_00102384[] = "RET-L1-07: %d\n";
char DAT_001023a0[] = "RET-L1-08: %d\n";
char DAT_001023bc[] = "RET-L1-09: %d\n";

/* External function declarations */
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

extern void __stack_chk_fail(void);
extern int __printf_chk(int flag, const char *format, ...);
extern int puts(const char *s);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/4/4_gcc_O1_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 ((void (*)(void))0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: callback_func @ 001011a9 */

int callback_func(int x)

{
 return x * 2;
}



/* Function: func_a @ 001011b1 */

int func_a(int x)

{
 return x + 10;
}



/* Function: func_b @ 001011b9 */

int func_b(int x)

{
 return x * 2;
}



/* Function: cdecl_func @ 001011c1 */

int cdecl_func(int a,int b)

{
 return a + b;
}



/* Function: call_cdecl @ 001011c9 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_cdecl(void)

{
 return 0xf;
}



/* Function: stdcall_func @ 001011d3 */

int stdcall_func(int a,int b)

{
 return a * b;
}



/* Function: call_stdcall @ 001011dd */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stdcall(void)

{
 return 0x32;
}



/* Function: fastcall_func @ 001011e7 */

int fastcall_func(int a,int b,int c)

{
 return a + b + c;
}



/* Function: call_fastcall @ 001011f1 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fastcall(void)

{
 return 6;
}



/* Function: call_thiscall @ 001011fb */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thiscall(void)

{
 return 0xf;
}



/* Function: arm_aapcs_func @ 00101205 */

int arm_aapcs_func(int a,int b,int c,int d,int e)

{
 return a + b + c + d + e;
}



/* Function: call_arm_aapcs @ 00101214 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_arm_aapcs(void)

{
 return 0xf;
}



/* Function: mips_func @ 0010121e */

int mips_func(int a,int b,int c,int d)

{
 return a + b + c + d;
}



/* Function: call_mips @ 0010122a */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mips(void)

{
 return 100;
}



/* Function: amd64_sysv_func @ 00101234 */

int amd64_sysv_func(int a,int b,int c,int d,int e,int f)

{
 return a + b + c + d + e + f;
}



/* Function: call_amd64_sysv @ 00101246 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_amd64_sysv(void)

{
 return 0x15;
}



/* Function: ms_x64_func @ 00101250 */

int ms_x64_func(int a,int b,int c,int d,int e)

{
 return a + b + c + d + e;
}



/* Function: call_ms_x64 @ 0010125f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ms_x64(void)

{
 return 0xf;
}



/* Function: vectorcall_func @ 00101269 */

int vectorcall_func(int a,int b,int c,int d)

{
 return a + b + c + d;
}



/* Function: call_vectorcall @ 00101275 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorcall(void)

{
 return 10;
}



/* Function: mixed_conventions_test @ 0010127f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mixed_conventions_test(void)

{
 return 0x21;
}



/* Function: varargs_func @ 00101289 */

int varargs_func(int count,...)

{
 int iVar1;
 undefined8 in_RCX;
 undefined8 in_RDX;
 int *piVar2;
 ulong uVar3;
 int iVar4;
 undefined8 in_RSI;
 undefined8 in_R8;
 undefined8 in_R9;
 long in_FS_OFFSET;
 va_list args;
 int local_38 [2];
 undefined8 local_30;
 undefined8 local_28;
 undefined8 local_20;
 undefined8 local_18;
 undefined8 local_10;
 
 local_30 = in_RSI;
 local_28 = in_RDX;
 local_20 = in_RCX;
 local_18 = in_R8;
 local_10 = in_R9;
 args[0].gp_offset = 8;
 args[0].overflow_arg_area = (int **)&local_38;
 /* Unresolved local var: int i@[???] */
 if (count < 1) {
 iVar4 = 0;
 }
 else {
 iVar1 = 0;
 iVar4 = 0;
 do {
 if (args[0].gp_offset < 0x30) {
 uVar3 = (ulong)args[0].gp_offset;
 args[0].gp_offset = args[0].gp_offset + 8;
 piVar2 = (int *)((long)local_38 + uVar3);
 }
 else {
 piVar2 = args[0].overflow_arg_area;
 args[0].overflow_arg_area = (void *)((long)args[0].overflow_arg_area + 8);
 }
 iVar4 = iVar4 + *piVar2;
 iVar1 = iVar1 + 1;
 } while (count != iVar1);
 }
 if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar4;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: func_no_args @ 00101335 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int func_no_args(void)

{
 return 0x2a;
}



/* Function: func_many_args @ 0010133f */

int func_many_args(int a,int b,int c,int d,int e,int f,int g,int h)

{
 return a + b + c + d + e + f + g + h;
}



/* Function: func_mixed_args @ 00101359 */

int func_mixed_args(int x,char *s,double d,longlong ll)

{
 int iVar1;
 size_t sVar2;
 
 iVar1 = 0;
 if (s != (char *)0x0) {
 sVar2 = strlen(s);
 iVar1 = (int)sVar2;
 }
 return (int)((double)(iVar1 + x) + d + (double)ll);
}



/* Function: func_struct_byval @ 001013a6 */

/* WARNING: Unknown calling convention */

int func_struct_byval(LargeStruct s)

{
 long lVar1;
 longlong *plVar2;
 int i;
 
 plVar2 = s.data;
 lVar1 = 0;
 for (i = 0; i < 16; i++) {
 lVar1 = lVar1 + *plVar2;
 plVar2 = plVar2 + 1;
 }
 return (int)lVar1;
}



/* Function: func_struct_byptr @ 001013c9 */

int func_struct_byptr(SmallStruct *p)

{
 if (p != (SmallStruct *)0x0) {
 return p->x * p->y;
 }
 return -1;
}



/* Function: test_calling_conventions @ 001013df */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_calling_conventions(void)

{
 int iVar1;
 long lVar2;
 long *plVar3;
 long in_FS_OFFSET;
 LargeStruct large;
 longlong local_98 [16];
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
 iVar1 = varargs_func(5,1,2,3,4,5);
 __printf_chk(1,&DAT_00102030,iVar1);
 __printf_chk(1,&DAT_00102058,0x2a);
 __printf_chk(1,&DAT_00102080,0x24);
 iVar1 = func_mixed_args(10,"test",3.14,100);
 __printf_chk(1,&DAT_001020a8,iVar1);
 /* Unresolved local var: int i@[???] */
 lVar2 = 1;
 do {
 large.data[lVar2 + -1] = lVar2;
 lVar2 = lVar2 + 1;
 } while (lVar2 != 0x11);
 local_98[0] = large.data[0];
 local_98[1] = large.data[1];
 local_98[2] = large.data[2];
 local_98[3] = large.data[3];
 local_98[4] = large.data[4];
 local_98[5] = large.data[5];
 local_98[6] = large.data[6];
 local_98[7] = large.data[7];
 local_98[8] = large.data[8];
 local_98[9] = large.data[9];
 local_98[10] = large.data[10];
 local_98[0xb] = large.data[0xb];
 local_98[0xc] = large.data[0xc];
 local_98[0xd] = large.data[0xd];
 local_98[0xe] = large.data[0xe];
 local_98[0xf] = large.data[0xf];
 /* Unresolved local var: longlong sum@[???]
 Unresolved local var: int i@[???] */
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

int param_by_value_int(int x)

{
 return x * 2;
}



/* Function: call_by_value_int @ 001016c2 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_int(void)

{
 return 0xf;
}



/* Function: param_by_value_ptr @ 001016cc */

int param_by_value_ptr(int *p)

{
 *p = *p << 1;
 return 1;
}



/* Function: call_by_value_ptr @ 001016d8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_ptr(void)

{
 return 0xb;
}



/* Function: param_array_decay @ 001016e2 */

int param_array_decay(int *arr,int n)

{
 return 8;
}



/* Function: call_array_decay @ 001016ec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_array_decay(void)

{
 return 8;
}



/* Function: param_string @ 001016f6 */

int param_string(char *str)

{
 return (int)*str + (int)str[1];
}



/* Function: call_string_param @ 00101704 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_param(void)

{
 return 0xad;
}



/* Function: param_ptr_array @ 0010170e */

int param_ptr_array(char **arr,int n)

{
 char **ppcVar1;
 int iVar2;
 
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar2 = 0;
 }
 else {
 ppcVar1 = arr + (ulong)(n - 1) + 1;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + **arr;
 arr = arr + 1;
 } while (arr != ppcVar1);
 }
 return iVar2;
}



/* Function: call_ptr_array @ 00101741 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ptr_array(void)

{
 long lVar1;
 int iVar2;
 long in_FS_OFFSET;
 char *strs [3];
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 strs[0] = "abc";
 strs[1] = "def";
 strs[2] = "ghi";
 iVar2 = param_ptr_array(strs,3);
 if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_varargs @ 001017a3 */

int param_varargs(int count,...)

{
 int iVar1;
 undefined8 in_RCX;
 undefined8 in_RDX;
 int *piVar2;
 ulong uVar3;
 int iVar4;
 undefined8 in_RSI;
 undefined8 in_R8;
 undefined8 in_R9;
 long in_FS_OFFSET;
 va_list args;
 int local_38 [2];
 undefined8 local_30;
 undefined8 local_28;
 undefined8 local_20;
 undefined8 local_18;
 undefined8 local_10;
 
 local_30 = in_RSI;
 local_28 = in_RDX;
 local_20 = in_RCX;
 local_18 = in_R8;
 local_10 = in_R9;
 args[0].gp_offset = 8;
 args[0].overflow_arg_area = (int **)&local_38;
 /* Unresolved local var: int i@[???] */
 if (count < 1) {
 iVar4 = 0;
 }
 else {
 iVar1 = 0;
 iVar4 = 0;
 do {
 if (args[0].gp_offset < 0x30) {
 uVar3 = (ulong)args[0].gp_offset;
 args[0].gp_offset = args[0].gp_offset + 8;
 piVar2 = (int *)((long)local_38 + uVar3);
 }
 else {
 piVar2 = args[0].overflow_arg_area;
 args[0].overflow_arg_area = (void *)((long)args[0].overflow_arg_area + 8);
 }
 iVar4 = iVar4 + *piVar2;
 iVar1 = iVar1 + 1;
 } while (count != iVar1);
 }
 if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar4;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_varargs_param @ 0010184f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_varargs_param(void)

{
 int iVar1;
 
 iVar1 = param_varargs(4,10,0x14,0x1e,0x28);
 return iVar1;
}



/* Function: param_func_ptr @ 00101880 */

int param_func_ptr(_func_int_int *callback,int x)

{
 int iVar1;
 
 iVar1 = (*callback)(x);
 return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 00101897 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_func_ptr_param(void)

{
 int iVar1;
 
 iVar1 = param_func_ptr(callback_func,5);
 return iVar1;
}



/* Function: param_double_ptr @ 001018b5 */

int param_double_ptr(int **pp,int new_val)

{
 if (pp == (int **)0x0) {
 return -1;
 }
 if (*pp != (int *)0x0) {
 **pp = new_val;
 *pp = (int *)0x0;
 return 1;
 }
 return -1;
}



/* Function: call_double_ptr @ 001018e1 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_double_ptr(void)

{
 long in_FS_OFFSET;
 int val;
 int *ptr;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 val = 10;
 ptr = &val;
 param_double_ptr(&ptr,0x14);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return (int)(ptr == (int *)0x0) + val;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_complex_cast @ 00101944 */

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
 return *(int *)((long)p + 4) + *(int *)p;
 }
 return -1;
}



/* Function: call_complex_cast @ 00101960 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_complex_cast(void)

{
 return 0x12345678;
}



/* Function: param_struct_byval @ 0010196a */

/* WARNING: Unknown calling convention */

int param_struct_byval(BigStruct s)

{
 return s.data[0xf] + s.data[0];
}



/* Function: call_struct_byval @ 00101977 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_struct_byval(void)

{
 long lVar1;
 long lVar2;
 long in_FS_OFFSET;
 BigStruct s;
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 lVar2 = 0;
 do {
 /* Unresolved local var: int i@[???] */
 s.data[lVar2] = (int)lVar2;
 lVar2 = lVar2 + 1;
 } while (lVar2 != 0x10);
 if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
 return s.data[0] + s.data[0xf];
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_order_dep @ 001019bd */

int param_order_dep(int a,int b)

{
 return a + b;
}



/* Function: call_order_dep @ 001019c5 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_order_dep(void)

{
 return 4;
}



/* Function: test_parameter_passing @ 001019cf */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_parameter_passing(void)

{
 int iVar1;
 
 puts(&DAT_00102130);
 __printf_chk(1,"PARAM-L1-01: %d\n",0xf);
 iVar1 = call_by_value_ptr();
 __printf_chk(1,"PARAM-L1-02: %d\n",iVar1);
 __printf_chk(1,"PARAM-L2-01: %d\n",8);
 __printf_chk(1,"PARAM-L2-02: %d\n",0xad);
 iVar1 = call_ptr_array();
 __printf_chk(1,"PARAM-L2-03: %d\n",iVar1);
 iVar1 = call_varargs_param();
 __printf_chk(1,"PARAM-L2-04: %d\n",iVar1);
 iVar1 = call_func_ptr_param();
 __printf_chk(1,"PARAM-L3-01: %d\n",iVar1);
 iVar1 = call_double_ptr();
 __printf_chk(1,"PARAM-L3-02: %d\n",iVar1);
 iVar1 = call_complex_cast();
 __printf_chk(1,"PARAM-L3-03: %d\n",iVar1);
 iVar1 = call_struct_byval();
 __printf_chk(1,"PARAM-L3-04: %d\n",iVar1);
 __printf_chk(1,"PARAM-L3-05: %d\n",4);
 return;
}



/* Function: ret_basic_type @ 00101b42 */

int ret_basic_type(int x)

{
 return x * 2;
}



/* Function: call_ret_basic @ 00101b4a */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_basic(void)

{
 return 0x2a;
}



/* Function: ret_pointer @ 00101b54 */

int * ret_pointer(int *p)

{
 return p + 1;
}



/* Function: call_ret_pointer @ 00101b5d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_pointer(void)

{
 return 0x14;
}



/* Function: ret_small_struct @ 00101b67 */

SmallPoint ret_small_struct(int x,int y)

{
 SmallPoint SVar1;
 
 SVar1.y = y;
 SVar1.x = x;
 return SVar1;
}



/* Function: call_ret_small_struct @ 00101b75 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_small_struct(void)

{
 return 7;
}



/* Function: ret_large_struct @ 00101b7f */

LargeData * ret_large_struct(LargeData *__return_storage_ptr__,int seed)

{
 LargeData *pLVar1;
 long in_FS_OFFSET;
 LargeData d;
 int local_18 [2];
 long local_10;
 
 pLVar1 = &d;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 /* Unresolved local var: int i@[???] */
 do {
 pLVar1->data[0] = seed;
 seed = seed + 1;
 pLVar1 = (LargeData *)((long)pLVar1 + 4);
 } while (pLVar1 != (LargeData *)local_18);
*(undefined8 *)__return_storage_ptr__->data = *(undefined8 *)&d.data[0];
*(undefined8 *)(__return_storage_ptr__->data + 2) = *(undefined8 *)&d.data[2];
*(undefined8 *)(__return_storage_ptr__->data + 4) = *(undefined8 *)&d.data[4];
*(undefined8 *)(__return_storage_ptr__->data + 6) = *(undefined8 *)&d.data[6];
*(undefined8 *)(__return_storage_ptr__->data + 8) = *(undefined8 *)&d.data[8];
 *(undefined8 *)(__return_storage_ptr__->data + 10) = *(undefined8 *)&d.data[10];
 *(undefined8 *)(__return_storage_ptr__->data + 0xc) = *(undefined8 *)&d.data[12];
 *(undefined8 *)(__return_storage_ptr__->data + 0xe) = *(undefined8 *)&d.data[14];
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return __return_storage_ptr__;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_ret_large_struct @ 00101bf0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_large_struct(void)

{
 long lVar1;
 long in_FS_OFFSET;
 LargeData d;
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 ret_large_struct(&d,100);
 if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
 return d.data[0xf] + d.data[0];
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: ret_func_ptr @ 00101c36 */

func_ptr_t ret_func_ptr(int selector)

{
 func_ptr_t pcVar1;
 
 pcVar1 = func_b;
 if (selector == 0) {
 pcVar1 = func_a;
 }
 return pcVar1;
}



/* Function: call_ret_func_ptr @ 00101c4f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_func_ptr(void)

{
 int iVar1;
 
 iVar1 = func_b(5);
 return iVar1;
}



/* Function: ret_opaque_handle @ 00101c5e */

void * ret_opaque_handle(int type)

{
 undefined8 *puVar1;
 
 puVar1 = (undefined8 *)&handle1_1;
 if (type != 0) {
 puVar1 = &handle2_0;
 }
 return puVar1;
}



/* Function: call_ret_opaque @ 00101c77 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_opaque(void)

{
 return handle1_1;
}



/* Function: ret_complex_expr @ 00101c82 */

int ret_complex_expr(int x,int y,int z)

{
 int iVar1;
 
 iVar1 = z * 2;
 if (x <= y) {
 iVar1 = z + 10;
 }
 return iVar1;
}



/* Function: call_ret_complex_expr @ 00101c92 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_complex_expr(void)

{
 return 0x28;
}



/* Function: ret_multi_branch @ 00101c9c */

int ret_multi_branch(int op)

{
 int iVar1;
 
 iVar1 = 0x14;
 if ((op != 1) && (iVar1 = 0x1e, op != 2)) {
 iVar1 = (-(uint)(op == 0) & 0xb) - 1;
 }
 return iVar1;
}



/* Function: call_ret_multi_branch @ 00101cc0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_multi_branch(void)

{
 return 0x3c;
}



/* Function: ret_void @ 00101cca */

void ret_void(int x,int *out)

{
 *out = x * 3;
 return;
}



/* Function: call_ret_void @ 00101cd4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_void(void)

{
 return 0x15;
}



/* Function: test_return_values @ 00101cde */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_return_values(void)

{
 int iVar1;
 
 puts(&DAT_001022bd);
 __printf_chk(1,&DAT_001022db,0x2a);
 iVar1 = call_ret_pointer();
 __printf_chk(1,&DAT_001022f7,iVar1);
 iVar1 = call_ret_small_struct();
 __printf_chk(1,&DAT_00102313,iVar1);
 iVar1 = call_ret_large_struct();
 __printf_chk(1,&DAT_0010232e,iVar1);
 iVar1 = call_ret_func_ptr();
 __printf_chk(1,&DAT_0010234b,iVar1);
 __printf_chk(1,&DAT_00102367,handle1_1);
 __printf_chk(1,&DAT_00102384,0x28);
 __printf_chk(1,&DAT_001023a0,0x3c);
 __printf_chk(1,&DAT_001023bc,0x15);
 return;
}



/* Function: main @ 00101e07 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 78 */
