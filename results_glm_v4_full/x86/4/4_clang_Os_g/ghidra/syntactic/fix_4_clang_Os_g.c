#include <stdio.h>
#include <string.h>
#include <math.h>

/* Auto-injected type definitions by preprocessor */
#ifndef uint8_t
typedef unsigned char uint8_t;
#endif
#ifndef uint16_t
typedef unsigned short uint16_t;
#endif
#ifndef uint32_t
typedef unsigned int uint32_t;
#endif
#ifndef uint64_t
typedef unsigned long long uint64_t;
#endif
#ifndef int8_t
typedef signed char int8_t;
#endif
#ifndef int16_t
typedef short int16_t;
#endif
#ifndef int32_t
typedef int int32_t;
#endif
#ifndef int64_t
typedef long long int64_t;
#endif

#ifndef _SIZE_T_DEFINED
typedef unsigned int size_t;
#define _SIZE_T_DEFINED
#endif

typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

#define ROUND(x) ((x) >= 0 ? (int)((x) + 0.5) : (int)((x) - 0.5))

/* Type definitions for structs */
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
typedef int (*func_ptr_t)(int);
typedef int (*_func_int_int)(int);

/* External data references - now defined */
extern const char DAT_000120d0[];
extern const char DAT_00012119[];
extern const char DAT_00012141[];
extern const char DAT_0001216d[];
extern const char DAT_00012255[];
extern const char DAT_00012271[];
extern const char DAT_0001228d[];
extern const char DAT_000122a8[];
extern const char DAT_000122c5[];
extern const char DAT_000122e1[];
extern const char DAT_000122fe[];
extern const char DAT_0001231a[];
extern const char DAT_00012373[];
extern const char DAT_00012394[];

/* Data definitions for undefined symbols */
const char DAT_000120a8[] = "VARARGS-01: %d\n";
const char DAT_000120d0[] = "VARARGS-02: %d\n";
const char DAT_000120f2[] = "VARARGS-02: %d\n";
const char DAT_00012119[] = "CALL-L1-11: %d\n";
const char DAT_00012141[] = "CALL-L2-11: %d\n";
const char DAT_0001216d[] = "CALL-L3-01: %d\n";
const char DAT_00012255[] = "RETURN-L1-01\n";
const char DAT_00012271[] = "RETURN-L1-02\n";
const char DAT_0001228d[] = "RETURN-L2-01\n";
const char DAT_000122a8[] = "RETURN-L2-02\n";
const char DAT_000122c5[] = "RETURN-L2-03\n";
const char DAT_000122e1[] = "RETURN-L2-04\n";
const char DAT_000122fe[] = "RETURN-L3-00\n";
const char DAT_0001231a[] = "RETURN-L3-01\n";
const char DAT_00012336[] = "RETURN-L4-08\n";
const char DAT_00012352[] = "TEST: Calling Conventions\n";
const char DAT_00012373[] = "TEST: Parameter Passing\n";
const char DAT_00012394[] = "TEST: Return Values\n";

/* Stack reference */
int stack0x00000008 = 0;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/4/4_clang_Os_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 /* Invalid function call removed - was calling function pointer at NULL */
 return;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 000110bc */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 000110c0 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 000111f9 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 000111fd */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: cdecl_func @ 00011204 */

int cdecl_func(int a,int b)

{
 return b + a;
}



/* Function: call_cdecl @ 0001120d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_cdecl(void)

{
 return 0xf;
}



/* Function: stdcall_func @ 00011213 */

int stdcall_func(int a,int b)

{
 return b * a;
}



/* Function: call_stdcall @ 0001121f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stdcall(void)

{
 return 0x32;
}



/* Function: fastcall_func @ 00011225 */

int fastcall_func(int a,int b,int c)

{
 int in_stack_00000004;
 
 return c + b + in_stack_00000004;
}



/* Function: call_fastcall @ 0001122f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fastcall(void)

{
 return 6;
}



/* Function: call_thiscall @ 00011235 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thiscall(void)

{
 return 0xf;
}



/* Function: arm_aapcs_func @ 0001123b */

int arm_aapcs_func(int a,int b,int c,int d,int e)

{
 return b + a + c + d + e;
}



/* Function: call_arm_aapcs @ 00011250 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_arm_aapcs(void)

{
 return 0xf;
}



/* Function: mips_func @ 00011256 */

int mips_func(int a,int b,int c,int d)

{
 return b + a + c + d;
}



/* Function: call_mips @ 00011267 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mips(void)

{
 return 100;
}



/* Function: amd64_sysv_func @ 0001126d */

int amd64_sysv_func(int a,int b,int c,int d,int e,int f)

{
 return b + a + c + d + e + f;
}



/* Function: call_amd64_sysv @ 00011286 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_amd64_sysv(void)

{
 return 0x15;
}



/* Function: ms_x64_func @ 0001128c */

int ms_x64_func(int a,int b,int c,int d,int e)

{
 return b + a + c + d + e;
}



/* Function: call_ms_x64 @ 000112a1 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ms_x64(void)

{
 return 0xf;
}



/* Function: vectorcall_func @ 000112a7 */

int vectorcall_func(int a,int b,int c,int d)

{
 return b + a + c + d;
}



/* Function: call_vectorcall @ 000112b8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorcall(void)

{
 return 10;
}



/* Function: mixed_conventions_test @ 000112be */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mixed_conventions_test(void)

{
 /* Unresolved local var: int sum@[???] */
 return 0x21;
}



/* Function: varargs_func @ 000112c4 */

int varargs_func(int count,...)

{
 int *piVar1;
 int iVar2;
 
 /* Unresolved local var: va_list args@[???]
 Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (count < 1) {
 iVar2 = 0;
 }
 else {
 iVar2 = 0;
 piVar1 = (int *)&stack0x00000008;
 do {
 iVar2 = iVar2 + *piVar1;
 count = count + -1;
 piVar1 = piVar1 + 1;
 } while (count != 0);
 }
 return iVar2;
}



/* Function: func_no_args @ 000112ee */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int func_no_args(void)

{
 return 0x2a;
}



/* Function: func_many_args @ 000112f4 */

int func_many_args(int a,int b,int c,int d,int e,int f,int g,int h)

{
 return b + a + c + d + e + f + g + h;
}



/* Function: func_mixed_args @ 00011315 */

int func_mixed_args(int x,char *s,double d,long long ll);

int func_mixed_args(int x,char *s,double d,long long ll)

{
 size_t sVar1;
 
 /* Unresolved local var: int len@[???] */
 if (s == (char *)0x0) {
 sVar1 = 0;
 }
 else {
 sVar1 = strlen(s);
 }
 return (int)ROUND((double)ll + d + (double)(int)(sVar1 + x));
}



/* Function: func_struct_byval @ 00011397 */

int func_struct_byval(LargeStruct s)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: longlong sum@[???] */
 iVar2 = 0;
 iVar1 = 0;
 do {
 /* Unresolved local var: int i@[DW_OP_reg1(ECX)] */
 iVar1 = iVar1 + (int)s.data[iVar2];
 iVar2 = iVar2 + 1;
 } while (iVar2 != 0x10);
 return iVar1;
}



/* Function: func_struct_byptr @ 000113b1 */

int func_struct_byptr(SmallStruct *p)

{
 if (p != (SmallStruct *)0x0) {
 return p->y * p->x;
 }
 return -1;
}



/* Function: test_calling_conventions @ 000113c4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_calling_conventions(void)

{
 int iVar1;
 int iVar2;
 int aiStack_94 [35];
 
 /* Unresolved local var: LargeStruct large@[???]
 Unresolved local var: int sum@[???]
 Unresolved local var: int no_args@[???]
 Unresolved local var: int many@[???]
 Unresolved local var: int mixed@[???]
 Unresolved local var: int struct_val@[???]
 Unresolved local var: int struct_ptr@[???]
 Unresolved local var: SmallStruct s@[???]
 Unresolved local var: char * test_str@[???] */
 aiStack_94[1] = 0x113d1;
 puts(&DAT_00012352);
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
 iVar1 = varargs_func(5,1,2,3,4,5);
 printf(&DAT_000120a8,iVar1);
 printf(&DAT_000120d0,0x2a);
 printf(&DAT_000120f2,0x24);
 printf(&DAT_00012119,0x75);
 iVar1 = 1;
 do {
 /* Unresolved local var: int i@[???] */
 aiStack_94[iVar1 * 2 + 1] = 0;
 aiStack_94[iVar1 * 2] = iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x11);
 iVar2 = 0;
 iVar1 = 0;
 do {
 /* Unresolved local var: longlong sum@[???]
 Unresolved local var: int i@[DW_OP_reg1(ECX)] */
 iVar1 = iVar1 + aiStack_94[iVar2 * 2 + 2];
 iVar2 = iVar2 + 1;
 } while (iVar2 != 0x10);
 printf(&DAT_00012141,iVar1);
 printf(&DAT_0001216d,0x32);
 return;
}



/* Function: param_by_value_int @ 00011541 */

int param_by_value_int(int x)

{
 return x * 2;
}



/* Function: call_by_value_int @ 00011548 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_int(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: int result@[???] */
 return 0xf;
}



/* Function: param_by_value_ptr @ 0001154e */

int param_by_value_ptr(int *p)

{
 *p = *p << 1;
 return 1;
}



/* Function: call_by_value_ptr @ 00011558 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_ptr(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: int result@[???]
 Unresolved local var: int * ptr@[???] */
 return 0xb;
}



/* Function: param_array_decay @ 0001155e */

int param_array_decay(int *arr,int n)

{
 return 4;
}



/* Function: call_array_decay @ 00011564 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_array_decay(void)

{
 /* Unresolved local var: int[10] array@[???] */
 return 4;
}



/* Function: param_string @ 0001156a */

int param_string(char *str)

{
 return (int)str[1] + (int)*str;
}



/* Function: call_string_param @ 00011578 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_param(void)

{
 return 0xad;
}



/* Function: param_ptr_array @ 0001157e */

int param_ptr_array(char **arr,int n)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar1 = 0;
 }
 else {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *arr[iVar2];
 iVar2 = iVar2 + 1;
 } while (n != iVar2);
 }
 return iVar1;
}



/* Function: call_ptr_array @ 000115a4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ptr_array(void)

{
 /* Unresolved local var: char *[3] strs@[???] */
 return 300;
}



/* Function: param_varargs @ 000115aa */

int param_varargs(int count,...)

{
 int *piVar1;
 int iVar2;
 
 /* Unresolved local var: va_list args@[???]
 Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (count < 1) {
 iVar2 = 0;
 }
 else {
 iVar2 = 0;
 piVar1 = (int *)&stack0x00000008;
 do {
 iVar2 = iVar2 + *piVar1;
 count = count + -1;
 piVar1 = piVar1 + 1;
 } while (count != 0);
 }
 return iVar2;
}



/* Function: call_varargs_param @ 000115d4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_varargs_param(void)

{
 int iVar1;
 
 iVar1 = param_varargs(4,10,0x14,0x1e,0x28);
 return iVar1;
}



/* Function: param_func_ptr @ 000115fb */

int param_func_ptr(_func_int_int *callback,int x)

{
 int iVar1;
 
 iVar1 = (*callback)(x);
 return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 0001161e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_func_ptr_param(void)

{
 return 0x14;
}



/* Function: param_double_ptr @ 00011624 */

int param_double_ptr(int **pp,int new_val)

{
 int iVar1;
 
 iVar1 = -1;
 if ((pp != (int **)0x0) && (*pp != (int *)0x0)) {
 **pp = new_val;
 *pp = (int *)0x0;
 iVar1 = 1;
 }
 return iVar1;
}



/* Function: call_double_ptr @ 00011645 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_double_ptr(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: int * ptr@[???]
 Unresolved local var: int result@[???] */
 return 0x15;
}



/* Function: param_complex_cast @ 0001164b */

int param_complex_cast(void *p,int type)

{
 if (type == 1) {
 /* Unresolved local var: TestIntPair * s@[DW_OP_reg1(ECX)] */
 return *(int *)((int)p + 4) + *(int *)p;
 }
 if (type == 0) {
 /* Unresolved local var: int * int_ptr@[DW_OP_reg1(ECX)]
 Unresolved local var: int * back_ptr@[DW_OP_reg1(ECX)]
 Unresolved local var: char * char_ptr@[DW_OP_reg1(ECX)] */
 return *(int *)p;
 }
 return -1;
}



/* Function: call_complex_cast @ 00011669 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_complex_cast(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: TestIntPair pair@[???] */
 return 0x12345678;
}



/* Function: param_struct_byval @ 0001166f */

int param_struct_byval(BigStruct s)

{
 return s.data[0xf] + s.data[0];
}



/* Function: call_struct_byval @ 00011678 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_struct_byval(void)

{
 int iVar1;
 int local_44 [17];
 
 /* Unresolved local var: BigStruct s@[???] */
 iVar1 = 0;
 do {
 /* Unresolved local var: int i@[DW_OP_reg0(EAX)] */
 local_44[iVar1] = iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x10);
 return local_44[0xf] + local_44[0];
}



/* Function: param_order_dep @ 00011691 */

int param_order_dep(int a,int b)

{
 return b + a;
}



/* Function: call_order_dep @ 0001169a */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_order_dep(void)

{
 /* Unresolved local var: int i@[???] */
 return 3;
}



/* Function: test_parameter_passing @ 000116a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_parameter_passing(void)

{
 int iVar1;
 int local_4c [16];
 
 puts(&DAT_00012373);
 printf("PARAM-L1-01: %d\n",0xf);
 printf("PARAM-L1-02: %d\n",0xb);
 printf("PARAM-L2-01: %d\n",4);
 printf("PARAM-L2-02: %d\n",0xad);
 printf("PARAM-L2-03: %d\n",300);
 iVar1 = param_varargs(4,10,0x14,0x1e,0x28);
 printf("PARAM-L2-04: %d\n",iVar1);
 printf("PARAM-L3-01: %d\n",0x14);
 printf("PARAM-L3-02: %d\n",0x15);
 printf("PARAM-L3-03: %d\n",0x12345678);
 iVar1 = 0;
 do {
 /* Unresolved local var: BigStruct s@[???]
 Unresolved local var: int i@[DW_OP_reg0(EAX)] */
 local_4c[iVar1] = iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x10);
 printf("PARAM-L3-04: %d\n",local_4c[0xf] + local_4c[0]);
 printf("PARAM-L3-05: %d\n",3);
 return;
}



/* Function: ret_basic_type @ 000117b7 */

int ret_basic_type(int x)

{
 return x * 2;
}



/* Function: call_ret_basic @ 000117be */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_basic(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: int result@[???] */
 return 0x2a;
}



/* Function: ret_pointer @ 000117c4 */

int * ret_pointer(int *p)

{
 return p + 1;
}



/* Function: call_ret_pointer @ 000117cc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_pointer(void)

{
 /* Unresolved local var: int[3] arr@[???]
 Unresolved local var: int * ptr@[???] */
 return 0x14;
}



/* Function: ret_small_struct @ 000117d2 */

SmallPoint * ret_small_struct(SmallPoint *__return_storage_ptr__,int x,int y)

{
 /* Unresolved local var: SmallPoint p@[???] */
 __return_storage_ptr__->x = x;
 __return_storage_ptr__->y = y;
 return __return_storage_ptr__;
}



/* Function: call_ret_small_struct @ 000117e6 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_small_struct(void)

{
 /* Unresolved local var: SmallPoint p@[???] */
 return 7;
}



/* Function: ret_large_struct @ 000117ec */

LargeData * ret_large_struct(LargeData *__return_storage_ptr__,int seed)

{
 int iVar1;
 
 /* Unresolved local var: LargeData d@[???] */
 iVar1 = 0;
 do {
 /* Unresolved local var: int i@[DW_OP_reg1(ECX)] */
 __return_storage_ptr__->data[iVar1] = seed + iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x10);
 return __return_storage_ptr__;
}



/* Function: call_ret_large_struct @ 00011807 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_large_struct(void)

{
 int iVar1;
 int local_44 [17];
 
 /* Unresolved local var: LargeData d@[???] */
 iVar1 = 100;
 do {
 /* Unresolved local var: int i@[???] */
 local_44[iVar1 + -100] = iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x74);
 return local_44[0xf] + local_44[0];
}



/* Function: func_a @ 00011827 */

int func_a(int x)

{
 return x + 10;
}



/* Function: func_b @ 0001182f */

int func_b(int x)

{
 return x * 2;
}



/* Function: ret_func_ptr @ 00011836 */

func_ptr_t ret_func_ptr(int selector)

{
 func_ptr_t p_Var1;
 
 p_Var1 = func_b;
 if (selector == 0) {
 p_Var1 = func_a;
 }
 return p_Var1;
}



/* Function: call_ret_func_ptr @ 00011857 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_func_ptr(void)

{
 /* Unresolved local var: func_ptr_t f@[???] */
 return 10;
}



/* Static handle storage for ret_opaque_handle */
static int opaque_handle1 = 0;
static int opaque_handle2 = 0;

/* Function: ret_opaque_handle @ 0001185d */

void * ret_opaque_handle(int type)

{
 double *pdVar1;
 
 pdVar1 = (double *)&opaque_handle2;
 if (type == 0) {
 pdVar1 = (double *)&opaque_handle1;
 }
 return pdVar1;
}



/* Function: call_ret_opaque @ 0001187e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_opaque(void)

{
 /* Unresolved local var: void * h@[???] */
 return opaque_handle1;
}



/* Function: ret_complex_expr @ 00011891 */

int ret_complex_expr(int x,int y,int z)

{
 int iVar1;
 
 iVar1 = z + 10;
 if (y < x) {
 iVar1 = z * 2;
 }
 return iVar1;
}



/* Function: call_ret_complex_expr @ 000118a7 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_complex_expr(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 0x28;
}



/* Function: ret_multi_branch @ 000118ad */

int ret_multi_branch(int op)

{
 int iVar1;
 
 iVar1 = op * 10 + 10;
	if (2 < (unsigned int)op) {
		iVar1 = -1;
	}
 return iVar1;
}



/* Function: call_ret_multi_branch @ 000118c2 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_multi_branch(void)

{
 /* Unresolved local var: int sum@[???] */
 return 0x3c;
}



/* Function: ret_void @ 000118c8 */

void ret_void(int x,int *out)

{
 *out = x * 3;
 return;
}



/* Function: call_ret_void @ 000118d6 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_void(void)

{
 /* Unresolved local var: int result@[???] */
 return 0x15;
}



/* Function: test_return_values @ 000118dc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_return_values(void)

{
 int iVar1;
 int aiStackY_1d4 [97];
 uint32_t uStackY_50;
 int local_44 [16];
 
 uStackY_50 = 0x118fa;
 puts(&DAT_00012394);
 uStackY_50 = 0x11910;
 printf(&DAT_00012255);
 uStackY_50 = 0x11926;
 printf(&DAT_00012271);
 uStackY_50 = 0x1193c;
 printf(&DAT_0001228d);
 iVar1 = 100;
 do {
 /* Unresolved local var: LargeData d@[???]
 Unresolved local var: int i@[???] */
 aiStackY_1d4[iVar1] = iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x74);
 uStackY_50 = 0x11968;
 printf(&DAT_000122a8);
 uStackY_50 = 0x1197e;
 printf(&DAT_000122c5);
 uStackY_50 = 0x11996;
 printf(&DAT_000122e1);
 uStackY_50 = 0x119ac;
 printf(&DAT_000122fe);
 uStackY_50 = 0x119c2;
 printf(&DAT_0001231a);
 uStackY_50 = 0x119d8;
 printf(&DAT_00012336);
 return;
}



/* Function: main @ 000119dd */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 82 */
