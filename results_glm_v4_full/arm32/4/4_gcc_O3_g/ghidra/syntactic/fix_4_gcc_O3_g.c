/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;

typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Additional type definitions for decompiled code */
typedef unsigned int uint;
typedef unsigned long long ulonglong;
typedef long long longlong;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned char byte;
typedef _Bool bool;

/* Function pointer types */
typedef int (*_func_int_int)(int);
typedef int (*func_ptr_t)(int);
typedef void (*code)(void);

/* Include stdarg.h for va_list */
#include <stdarg.h>
#include <string.h>

/* Compiler builtin macros */
#define SCARRY4(a, b) (((int)(a) < 0) != ((int)(b) < 0) && ((int)((a) + (b)) >= 0))
#define SBORROW4(a, b) (((int)(a) < 0) != ((int)(b) < 0) && ((int)((a) - (b)) < 0))
#define CARRY4(a, b) (((a) + (b)) < (a))
#define LZCOUNT(x) ((x) ? __builtin_clz(x) : 32)
#define CONCAT44(high, low) (((ulonglong)(high) << 32) | (low))

/* Global variable declarations */
int handle1_1;
int handle2_0;

/* Data references - string constants */
char DAT_0001143c[] = "Calling Conventions Tests";
char DAT_00011500[] = "VARARGS: %d\n";
char DAT_00011528[] = "NO ARGS: %d\n";
char DAT_0001154c[] = "MANY ARGS: %d\n";
char DAT_00011574[] = "MIXED ARGS: %d\n";
char DAT_0001159c[] = "STRUCT BY VALUE: %d\n";
char DAT_000115c8[] = "STRUCT BY PTR: %d\n";
char DAT_000115f8[] = "Parameter Passing Tests";
char DAT_000116f8[] = "Return Value Tests";
char DAT_00011718[] = "BASIC: %d\n";
char DAT_00011734[] = "POINTER: %d\n";
char DAT_00011750[] = "SMALL STRUCT: %d\n";
char DAT_0001176c[] = "LARGE STRUCT: %d\n";
char DAT_0001178c[] = "FUNC PTR: %d\n";
char DAT_000117a8[] = "OPAQUE HANDLE: %d\n";
char DAT_000117c8[] = "COMPLEX EXPR: %d\n";
char DAT_000117e4[] = "MULTI BRANCH: %d\n";
char DAT_00011800[] = "VOID: %d\n";

/* Forward declarations for struct types */
struct SmallStruct { int x; int y; };
struct SmallPoint { int x; int y; };
struct LargeStruct { union { struct { int _0_4_; int _4_4_; } data[16]; int data_int[16]; } u; };
struct LargeData { int data[16]; };
struct BigStruct { int data[16]; };
struct TestIntPair { int a; int b; };

/* Forward declarations for static inline functions */
static inline void __floatsidf(uint param_1, uint *result_high, uint *result_low);
static inline void __aeabi_l2d(uint param_1, uint param_2, uint *result_high, uint *result_low);

typedef struct SmallStruct SmallStruct;
typedef struct SmallPoint SmallPoint;
typedef struct LargeStruct LargeStruct;
typedef struct LargeData LargeData;
typedef struct BigStruct BigStruct;
typedef struct TestIntPair TestIntPair;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/4/4_gcc_O3_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: main @ 0001042c */

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




/* Function: func_a @ 0001053c */

int func_a(int x)

{
 return x + 10;
}



/* Function: param_varargs @ 00010544 */

/* WARNING: Removing unreachable block (ram,0x000105ac) */
/* DWARF original prototype: int param_varargs(int count, int count, ...) */

int param_varargs(int count,int count_1,...)

{
 int in_r2;
 int in_r3;
 int in_stack_00000000;
 va_list args;
 int count_local;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 return count_1 + in_r2 + in_r3 + in_stack_00000000;
}



/* Function: varargs_func @ 000105b4 */

/* WARNING: Removing unreachable block (ram,0x00010620) */
/* DWARF original prototype: int varargs_func(int count, int count, ...) */

int varargs_func(int count,int count_1,...)

{
 int in_r2;
 int in_r3;
 int in_stack_00000000;
 int in_stack_00000004;
 va_list args;
 int count_local;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 return count_1 + in_r2 + in_r3 + in_stack_00000000 + in_stack_00000004;
}



/* Function: func_b @ 00010628 */

int func_b(int param_1)

{
 return param_1 << 1;
}



/* Function: cdecl_func @ 00010630 */

int cdecl_func(int a,int b)

{
 return a + b;
}



/* Function: call_cdecl @ 00010638 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_cdecl(void)

{
 return 0xf;
}



/* Function: stdcall_func @ 00010640 */

int stdcall_func(int a,int b)

{
 return b * a;
}



/* Function: call_stdcall @ 00010648 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stdcall(void)

{
 return 0x32;
}



/* Function: fastcall_func @ 00010650 */

int fastcall_func(int a,int b,int c)

{
 return a + b + c;
}



/* Function: call_fastcall @ 0001065c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fastcall(void)

{
 return 6;
}



/* Function: call_thiscall @ 00010664 */

undefined4 call_thiscall(void)

{
 return 0xf;
}



/* Function: arm_aapcs_func @ 0001066c */

int arm_aapcs_func(int a,int b,int c,int d,int e)

{
 return a + b + c + d + e;
}



/* Function: call_arm_aapcs @ 00010684 */

undefined4 call_arm_aapcs(void)

{
 return 0xf;
}



/* Function: mips_func @ 0001068c */

int mips_func(int a,int b,int c,int d)

{
 return a + b + c + d;
}



/* Function: call_mips @ 0001069c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mips(void)

{
 return 100;
}



/* Function: amd64_sysv_func @ 000106a4 */

int amd64_sysv_func(int a,int b,int c,int d,int e,int f)

{
 return a + b + c + d + e + f;
}



/* Function: call_amd64_sysv @ 000106c4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_amd64_sysv(void)

{
 return 0x15;
}



/* Function: ms_x64_func @ 000106cc */

int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_ms_x64 @ 000106e4 */

undefined4 call_ms_x64(void)

{
 return 0xf;
}



/* Function: vectorcall_func @ 000106ec */

int vectorcall_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_1 + param_2 + param_3 + param_4;
}



/* Function: call_vectorcall @ 000106fc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorcall(void)

{
 return 10;
}



/* Function: mixed_conventions_test @ 00010704 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mixed_conventions_test(void)

{
 /* Unresolved local var: int sum@[???] */
 return 0x21;
}



/* Function: varargs_func @ 0001070c */

/* WARNING: Removing unreachable block (ram,0x00010788) */

int varargs_func_2(int count,...)

{
 int iVar1;
 int in_r1;
 undefined4 in_r2;
 int *piVar2;
 undefined4 in_r3;
 int iVar3;
 va_list args;
 int count_local;
 int aiStack_c [3];
 
 /* Unresolved local var: int sum@[???] */
 aiStack_c[2] = in_r3;
 aiStack_c[1] = in_r2;
 aiStack_c[0] = in_r1;
 /* Unresolved local var: int i@[???] */
 if (count < 1) {
 iVar1 = 0;
 }
 else {
 iVar3 = 0;
 iVar1 = 0;
 piVar2 = aiStack_c;
 do {
 iVar3 = iVar3 + 1;
 iVar1 = iVar1 + *piVar2;
 piVar2 = piVar2 + 1;
 } while (count != iVar3);
 }
 return iVar1;
}



/* Function: func_no_args @ 00010790 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int func_no_args(void)

{
 return 0x2a;
}



/* Function: func_many_args @ 00010798 */

int func_many_args(int a,int b,int c,int d,int e,int f,int g,int h)

{
 return a + b + c + d + e + f + g + h;
}



/* Function: func_mixed_args @ 000107c0 */

int func_mixed_args(int x,char *s,double d,longlong ll)

{
 size_t sVar1;
 int iVar2;
 undefined8 uVar3;
 undefined8 uVar4;
 undefined4 in_stack_00000000;
 undefined4 in_stack_00000004;
 
 /* Unresolved local var: int len@[???] */
 if (s != (char *)0x0) {
 sVar1 = strlen(s);
 x = x + sVar1;
 }
 __floatsidf(x, &uVar4, &uVar3);
 uVar3 = __aeabi_dadd((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),(int)ll,
 (int)((ulonglong)ll >> 0x20));
 __aeabi_l2d(in_stack_00000000, in_stack_00000004, &uVar4, &uVar3);
 __aeabi_dadd((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),(int)uVar4,(int)((ulonglong)uVar4 >> 0x20)
 );
 iVar2 = __aeabi_d2iz();
 return iVar2;
}



/* Function: func_struct_byval @ 00010824 */

int func_struct_byval(LargeStruct s)

{
 /* Unresolved local var: longlong sum@[???]
 Unresolved local var: int i@[???] */
 s.u.data[2]._0_4_ = s.u.data_int[2];
 s.u.data[3]._0_4_ = s.u.data_int[3];
 s.u.data[1]._4_4_ = s.u.data_int[0] + s.u.data_int[1];
 s.u.data[4]._0_4_ = s.u.data_int[4];
 s.u.data[1]._4_4_ = s.u.data[1]._4_4_ + s.u.data_int[2];
 s.u.data[5]._0_4_ = s.u.data_int[5];
 s.u.data[1]._4_4_ = s.u.data[1]._4_4_ + s.u.data_int[3];
 s.u.data[1]._4_4_ = s.u.data[1]._4_4_ + s.u.data_int[4];
 s.u.data[6]._0_4_ = s.u.data_int[6];
 s.u.data[7]._0_4_ = s.u.data_int[7];
 s.u.data[1]._4_4_ = s.u.data[1]._4_4_ + s.u.data_int[5];
 s.u.data[1]._4_4_ = s.u.data[1]._4_4_ + s.u.data_int[6];
 s.u.data[8]._0_4_ = s.u.data_int[8];
 s.u.data[9]._0_4_ = s.u.data_int[9];
 s.u.data[1]._4_4_ = s.u.data[1]._4_4_ + s.u.data_int[7];
 s.u.data[1]._4_4_ = s.u.data[1]._4_4_ + s.u.data_int[8];
 s.u.data[10]._0_4_ = s.u.data_int[10];
 s.u.data[0xb]._0_4_ = s.u.data_int[0xb];
 s.u.data[1]._4_4_ = s.u.data[1]._4_4_ + s.u.data_int[9];
 s.u.data[1]._4_4_ = s.u.data[1]._4_4_ + s.u.data_int[10];
 s.u.data[0xc]._0_4_ = s.u.data_int[0xc];
 s.u.data[0xd]._0_4_ = s.u.data_int[0xd];
 s.u.data[1]._4_4_ = s.u.data[1]._4_4_ + s.u.data_int[0xb];
 s.u.data[1]._4_4_ = s.u.data[1]._4_4_ + s.u.data_int[0xc];
 s.u.data[0xe]._0_4_ = s.u.data_int[0xe];
 s.u.data[0xf]._0_4_ = s.u.data_int[0xf];
 s.u.data[1]._4_4_ = s.u.data[1]._4_4_ + s.u.data_int[0xd];
 s.u.data[1]._4_4_ = s.u.data[1]._4_4_ + s.u.data_int[0xe];
 s.u.data[0]._0_4_ = s.u.data[1]._4_4_ + s.u.data_int[0xf];
 return s.u.data_int[0];
}



/* Function: func_struct_byptr @ 000108b8 */

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



/* Function: test_calling_conventions @ 000108d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_calling_conventions(void)

{
 int iVar1;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int no_args@[???]
 Unresolved local var: int many@[???]
 Unresolved local var: char * test_str@[???]
 Unresolved local var: int mixed@[???]
 Unresolved local var: LargeStruct large@[???]
 Unresolved local var: int struct_val@[???]
 Unresolved local var: SmallStruct s@[???]
 Unresolved local var: int struct_ptr@[???] */
 puts(&DAT_0001143c);
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
 iVar1 = varargs_func_2(5,1,2,3,4,5);
 __printf_chk(1,&DAT_00011500,iVar1);
 __printf_chk(1,&DAT_00011528,0x2a);
 __printf_chk(1,&DAT_0001154c,0x24);
 __printf_chk(1,&DAT_00011574,0x75);
 __printf_chk(1,&DAT_0001159c,0x88);
 __printf_chk(1,&DAT_000115c8,0x32);
 return;
}



/* Function: param_by_value_int @ 00010a4c */

int param_by_value_int(int x)

{
 return x << 1;
}



/* Function: call_by_value_int @ 00010a54 */

undefined4 call_by_value_int(void)

{
 return 0xf;
}



/* Function: param_by_value_ptr @ 00010a5c */

int param_by_value_ptr(int *p)

{
 *p = *p << 1;
 return 1;
}



/* Function: call_by_value_ptr @ 00010a74 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_ptr(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: int * ptr@[???]
 Unresolved local var: int result@[???] */
 return 0xb;
}



/* Function: param_array_decay @ 00010a7c */

int param_array_decay(int *arr,int n)

{
 return 4;
}



/* Function: call_array_decay @ 00010a84 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_array_decay(void)

{
 /* Unresolved local var: int[10] array@[???] */
 return 4;
}



/* Function: param_string @ 00010a8c */

int param_string(char *str)

{
 return (uint)(byte)*str + (uint)(byte)str[1];
}



/* Function: call_string_param @ 00010a9c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_param(void)

{
 return 0xad;
}



/* Function: param_ptr_array @ 00010aa4 */

int param_ptr_array(char **arr,int n)

{
 int iVar1;
 char **ppcVar2;
 char **ppcVar3;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 iVar1 = 0;
 if (n < 1) {
 return 0;
 }
 ppcVar3 = arr + -1;
 ppcVar2 = ppcVar3 + n;
 do {
 ppcVar3 = ppcVar3 + 1;
 iVar1 = iVar1 + (uint)(byte)**ppcVar3;
 } while (ppcVar2 != ppcVar3);
 return iVar1;
}



/* Function: call_ptr_array @ 00010ad4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ptr_array(void)

{
 /* Unresolved local var: char *[3] strs@[???] */
 return 300;
}



/* Function: param_varargs @ 00010adc */

/* WARNING: Removing unreachable block (ram,0x00010b58) */

int param_varargs_2(int count,...)

{
 int iVar1;
 int in_r1;
 undefined4 in_r2;
 int *piVar2;
 undefined4 in_r3;
 int iVar3;
 va_list args;
 int count_local;
 int aiStack_c [3];
 
 /* Unresolved local var: int sum@[???] */
 aiStack_c[2] = in_r3;
 aiStack_c[1] = in_r2;
 aiStack_c[0] = in_r1;
 /* Unresolved local var: int i@[???] */
 if (count < 1) {
 iVar1 = 0;
 }
 else {
 iVar3 = 0;
 iVar1 = 0;
 piVar2 = aiStack_c;
 do {
 iVar3 = iVar3 + 1;
 iVar1 = iVar1 + *piVar2;
 piVar2 = piVar2 + 1;
 } while (count != iVar3);
 }
 return iVar1;
}



/* Function: call_varargs_param @ 00010b60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_varargs_param(void)

{
 int iVar1;
 
 iVar1 = param_varargs_2(4,10,0x14,0x1e,0x28);
 return iVar1;
}



/* Function: param_func_ptr @ 00010b8c */

int param_func_ptr(_func_int_int *callback,int x)

{
 int iVar1;
 
 iVar1 = (*callback)(x);
 return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 00010ba4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_func_ptr_param(void)

{
 return 0x14;
}



/* Function: param_double_ptr @ 00010bac */

int param_double_ptr(int **pp,int new_val)

{
 if ((pp != (int **)0x0) && (*pp != (int *)0x0)) {
 **pp = new_val;
 *pp = (int *)0x0;
 return 1;
 }
 return -1;
}



/* Function: call_double_ptr @ 00010bdc */

undefined4 call_double_ptr(void)

{
 return 0x15;
}



/* Function: param_complex_cast @ 00010be4 */

int param_complex_cast(void *p,int type)

{
 int iVar1;
 
 if (type == 0) {
 /* Unresolved local var: int * int_ptr@[???]
 Unresolved local var: char * char_ptr@[???]
 Unresolved local var: int * back_ptr@[???] */
 return *(int *)p;
 }
 /* Unresolved local var: TestIntPair * s@[???] */
 if (type == 1) {
 iVar1 = *(int *)((int)p + 4) + *(int *)p;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_complex_cast @ 00010c08 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_complex_cast(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: TestIntPair pair@[???] */
 return 0x12345678;
}



/* Function: param_struct_byval @ 00010c14 */

int param_struct_byval(BigStruct s)

{
 s.data[0xf] = s.data[0xf];
 s.data[0] = s.data[0] + s.data[0xf];
 return s.data[0];
}



/* Function: call_struct_byval @ 00010c30 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_struct_byval(void)

{
 /* Unresolved local var: BigStruct s@[???] */
 return 0xf;
}



/* Function: param_order_dep @ 00010c38 */

int param_order_dep(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: call_order_dep @ 00010c40 */

undefined4 call_order_dep(void)

{
 return 4;
}



/* Function: test_parameter_passing @ 00010c48 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_parameter_passing(void)

{
 int iVar1;
 
 puts(&DAT_000115f8);
 __printf_chk(1,"PARAM-L1-01: %d\n",0xf);
 __printf_chk(1,"PARAM-L1-02: %d\n",0xb);
 __printf_chk(1,"PARAM-L2-01: %d\n",4);
 __printf_chk(1,"PARAM-L2-02: %d\n",0xad);
 __printf_chk(1,"PARAM-L2-03: %d\n",300);
 iVar1 = param_varargs(4,10,0x14,0x1e,0x28);
 __printf_chk(1,"PARAM-L2-04: %d\n",iVar1);
 __printf_chk(1,"PARAM-L3-01: %d\n",0x14);
 __printf_chk(1,"PARAM-L3-02: %d\n",0x15);
 __printf_chk(1,"PARAM-L3-03: %d\n",0x12345678);
 __printf_chk(1,"PARAM-L3-04: %d\n",0xf);
 __printf_chk(1,"PARAM-L3-05: %d\n",4);
 return;
}



/* Function: ret_basic_type @ 00010d60 */

int ret_basic_type(int param_1)

{
 return param_1 << 1;
}



/* Function: call_ret_basic @ 00010d68 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_basic(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: int result@[???] */
 return 0x2a;
}



/* Function: ret_pointer @ 00010d70 */

int * ret_pointer(int *p)

{
 return p + 1;
}



/* Function: call_ret_pointer @ 00010d78 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_pointer(void)

{
 /* Unresolved local var: int[3] arr@[???]
 Unresolved local var: int * ptr@[???] */
 return 0x14;
}



/* Function: ret_small_struct @ 00010d80 */

SmallPoint * ret_small_struct(SmallPoint *__return_storage_ptr__,int x,int y)

{
 /* Unresolved local var: SmallPoint p@[DW_OP_reg1(r1); DW_OP_piece: 4;
 DW_OP_reg2(r2); DW_OP_piece: 4] */
 __return_storage_ptr__->x = x;
 __return_storage_ptr__->y = y;
 return __return_storage_ptr__;
}



/* Function: call_ret_small_struct @ 00010d88 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_small_struct(void)

{
 /* Unresolved local var: SmallPoint p@[???] */
 return 7;
}



/* Function: ret_large_struct @ 00010d90 */

LargeData * ret_large_struct(LargeData *__return_storage_ptr__,int seed)

{
 /* Unresolved local var: LargeData d@[DW_OP_breg0(r0): 0]
 Unresolved local var: int i@[???] */
 __return_storage_ptr__->data[0] = seed;
 __return_storage_ptr__->data[1] = seed + 1;
 __return_storage_ptr__->data[2] = seed + 2;
 __return_storage_ptr__->data[3] = seed + 3;
 __return_storage_ptr__->data[4] = seed + 4;
 __return_storage_ptr__->data[5] = seed + 5;
 __return_storage_ptr__->data[6] = seed + 6;
 __return_storage_ptr__->data[7] = seed + 7;
 __return_storage_ptr__->data[8] = seed + 8;
 __return_storage_ptr__->data[9] = seed + 9;
 __return_storage_ptr__->data[10] = seed + 10;
 __return_storage_ptr__->data[0xb] = seed + 0xb;
 __return_storage_ptr__->data[0xc] = seed + 0xc;
 __return_storage_ptr__->data[0xd] = seed + 0xd;
 __return_storage_ptr__->data[0xe] = seed + 0xe;
 __return_storage_ptr__->data[0xf] = seed + 0xf;
 return __return_storage_ptr__;
}



/* Function: call_ret_large_struct @ 00010e0c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_large_struct(void)

{
 /* Unresolved local var: LargeData d@[???] */
 return 0xd7;
}



/* Function: ret_func_ptr @ 00010e14 */

func_ptr_t ret_func_ptr(int selector)

{
 code *pcVar1;
 
 pcVar1 = func_b;
 if (selector == 0) {
 pcVar1 = func_a;
 }
 return pcVar1;
}



/* Function: call_ret_func_ptr @ 00010e34 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_func_ptr(void)

{
 /* Unresolved local var: func_ptr_t f@[???] */
 return 10;
}



/* Function: ret_opaque_handle @ 00010e3c */

void * ret_opaque_handle(int type)

{
 undefined8 *puVar1;
 
 puVar1 = (undefined8 *)&handle1_1;
 if (type != 0) {
 puVar1 = &handle2_0;
 }
 return puVar1;
}



/* Function: call_ret_opaque @ 00010e58 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_opaque(void)

{
 /* Unresolved local var: void * h@[???] */
 return handle1_1;
}



/* Function: ret_complex_expr @ 00010e68 */

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



/* Function: call_ret_complex_expr @ 00010e78 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_complex_expr(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 0x28;
}



/* Function: ret_multi_branch @ 00010e80 */

int ret_multi_branch(int op)

{
 int iVar1;
 
 if ((uint)op < 3) {
 iVar1 = (op + 1) * 10;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_ret_multi_branch @ 00010e98 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_multi_branch(void)

{
 /* Unresolved local var: int sum@[???] */
 return 0x3c;
}



/* Function: ret_void @ 00010ea0 */

void ret_void(int x,int *out)

{
 *out = x * 3;
 return;
}



/* Function: call_ret_void @ 00010eac */

undefined4 call_ret_void(void)

{
 return 0x15;
}



/* Function: test_return_values @ 00010eb4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_return_values(void)

{
 puts(&DAT_000116f8);
 __printf_chk(1,&DAT_00011718,0x2a);
 __printf_chk(1,&DAT_00011734,0x14);
 __printf_chk(1,&DAT_00011750,7);
 __printf_chk(1,&DAT_0001176c,0xd7);
 __printf_chk(1,&DAT_0001178c,10);
 /* Unresolved local var: void * h@[???] */
 __printf_chk(1,&DAT_000117a8,handle1_1);
 __printf_chk(1,&DAT_000117c8,0x28);
 __printf_chk(1,&DAT_000117e4,0x3c);
 __printf_chk(1,&DAT_00011800,0x15);
 return;
}



/* Function: __aeabi_drsub @ 00010f84 */

static void __aeabi_drsub(undefined4 param_1,uint param_2)

{
 __aeabi_dadd(param_1,param_2 ^ 0x80000000);
 return;
}



/* Function: __subdf3 @ 00010f8c */

static ulonglong __subdf3(uint param_1,uint param_2,uint param_3,uint param_4)

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
LAB_00011200:
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
 if (0xffbfffff < uVar11 * 0x200000) goto LAB_00011200;
 }
LAB_000110a8:
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
 if (uVar11 - 1 != 0 && 0xfffff < uVar6) goto LAB_000110a8;
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
 goto LAB_00011128;
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
LAB_00011128:
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




/* CRT stub function __aeabi_dadd removed by preprocessor */




/* Function: __aeabi_ui2d @ 0001123c */

static ulonglong __aeabi_ui2d(uint param_1)

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
 goto LAB_00011128;
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
LAB_00011128:
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



/* Function: __floatsidf @ 00011260 */

static inline void __floatsidf(uint param_1, uint *result_high, uint *result_low)

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
 return;
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
 goto LAB_00011128;
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
LAB_00011128:
 if (uVar6 < 0x433) {
 *result_high = uVar2 + (0x432 - uVar6) * 0x100000 | uVar8;
 *result_low = uVar1;
 return;
 }
 uVar7 = ~(0x432 - uVar6);
 if (0x1e < (int)uVar7) {
 *result_high = param_1;
 *result_low = uVar2 >> (uVar7 - 0x1f & 0xff);
 *result_high &= 0x80000000;
 return;
 }
 if (uVar7 - 0x13 == 0 || (int)(uVar7 - 0x1f) < -0xc) {
 uVar7 = uVar7 + 1;
 *result_high = uVar8 | uVar2 >> (uVar7 & 0xff);
 *result_low = uVar1 >> (uVar7 & 0xff) | uVar2 << (0x20 - uVar7 & 0xff);
 return;
 }
 uVar8 = 0xc - (uVar7 - 0x13);
 *result_high = param_1;
 *result_low = uVar1 >> (0x20 - uVar8 & 0xff) | uVar2 << (uVar8 & 0xff);
 *result_high &= 0x80000000;
 return;
}



/* Function: __extendsfdf2 @ 00011288 */

static ulonglong __extendsfdf2(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

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
 goto LAB_00011128;
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
LAB_00011128:
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



/* Function: __floatundidf @ 000112d0 */

static ulonglong __floatundidf(uint param_1,uint param_2)

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
LAB_000110a8:
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
 if (bVar12 && 0xfffff < param_2) goto LAB_000110a8;
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
 goto LAB_00011128;
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
LAB_00011128:
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



/* Function: __aeabi_l2d @ 000112e4 */

static inline void __aeabi_l2d(uint param_1, uint param_2, uint *result_high, uint *result_low)

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
 int iVar10;
 uint uVar11;
 uint uVar12;
 bool bVar13;
 bool bVar14;
 
 if (param_1 == 0 && param_2 == 0) {
 *result_high = 0;
 *result_low = 0;
 return;
 }
 uVar11 = param_2 & 0x80000000;
 uVar4 = param_2;
 if ((int)uVar11 < 0) {
 bVar13 = param_1 != 0;
 param_1 = -param_1;
 uVar4 = -(param_2 + bVar13);
 }
 iVar10 = 0x432;
 uVar12 = 0;
 if (uVar4 >> 0x16 != 0) {
 iVar10 = 3;
 if (uVar4 >> 0x19 != 0) {
 iVar10 = 6;
 }
 if (uVar4 >> 0x1c != 0) {
 iVar10 = iVar10 + 3;
 }
 iVar10 = iVar10 - ((int)uVar4 >> 0x1f);
 uVar12 = param_1 << (0x20U - iVar10 & 0xff);
 param_1 = param_1 >> iVar10 | uVar4 << (0x20U - iVar10 & 0xff);
 uVar4 = uVar4 >> iVar10;
 iVar10 = iVar10 + 0x432;
 }
 if (0xfffff < uVar4) {
 if (0x1fffff < uVar4) {
 bVar1 = (byte)uVar4;
 uVar4 = uVar4 >> 1;
 bVar2 = (byte)param_1;
 param_1 = (uint)(bVar1 & 1) << 0x1f | param_1 >> 1;
 uVar12 = (uint)(bVar2 & 1) << 0x1f | uVar12 >> 1;
 iVar10 = iVar10 + 1;
 if (0xffbfffff < (uint)(iVar10 * 0x200000)) {
 *result_high = uVar11 | 0x7ff00000;
 *result_low = 0;
 return;
 }
 }
LAB_000110a8:
 bVar13 = 0x7fffffff < uVar12;
 if (uVar12 == 0x80000000) {
 bVar13 = (bool)((byte)param_1 & 1);
 }
 *result_high = uVar4 + iVar10 * 0x100000 + (uint)CARRY4(param_1,(uint)bVar13) | uVar11;
 *result_low = param_1 + bVar13;
 return;
 }
 bVar1 = (byte)(uVar12 >> 0x1f);
 uVar12 = uVar12 << 1;
 uVar3 = param_1 * 2;
 bVar13 = CARRY4(param_1,param_1);
 param_1 = param_1 * 2 + (uint)bVar1;
 uVar4 = uVar4 * 2 + (uint)(bVar13 || CARRY4(uVar3,(uint)bVar1));
 bVar13 = iVar10 != 0;
 iVar10 = iVar10 + -1;
 if (bVar13 && 0xfffff < uVar4) goto LAB_000110a8;
 uVar3 = param_1;
 uVar5 = uVar4;
 if (uVar4 == 0) {
 uVar3 = 0;
 uVar5 = param_1;
 }
 iVar8 = LZCOUNT(uVar5);
 if (uVar4 == 0) {
 iVar8 = iVar8 + 0x20;
 }
 uVar9 = iVar8 - 0xb;
 bVar14 = SBORROW4(uVar9,0x20);
 uVar6 = iVar8 - 0x2b;
 bVar13 = uVar6 == 0;
 uVar4 = uVar6;
 uVar7 = uVar6;
 if ((int)uVar9 < 0x20) {
 bVar14 = SCARRY4(uVar6,0xc);
 uVar7 = iVar8 - 0x1f;
 bVar13 = uVar7 == 0;
 uVar4 = uVar9;
 if (!bVar13 && -0xd < (int)uVar6) {
 uVar3 = uVar5 << (uVar9 & 0xff);
 uVar5 = uVar5 >> (0xc - uVar7 & 0xff);
 goto LAB_00011128;
 }
 }
 if (bVar13 || (int)uVar7 < 0 != bVar14) {
 uVar12 = 0x20 - uVar4;
 }
 uVar5 = uVar5 << (uVar4 & 0xff);
 if (bVar13 || (int)uVar7 < 0 != bVar14) {
 uVar5 = uVar5 | uVar3 >> (uVar12 & 0xff);
 uVar3 = uVar3 << (uVar4 & 0xff);
 }
LAB_00011128:
 if ((int)uVar9 <= iVar10) {
 *result_high = uVar5 + (iVar10 - uVar9) * 0x100000 | uVar11;
 *result_low = uVar3;
 return;
 }
 uVar4 = ~(iVar10 - uVar9);
 if ((int)uVar4 < 0x1f) {
 if (uVar4 - 0x13 != 0 && -0xd < (int)(uVar4 - 0x1f)) {
 uVar4 = 0xc - (uVar4 - 0x13);
 *result_high = param_2;
 *result_low = uVar3 >> (0x20 - uVar4 & 0xff) | uVar5 << (uVar4 & 0xff);
 *result_high &= 0x80000000;
 return;
 }
 uVar4 = uVar4 + 1;
 *result_high = uVar11 | uVar5 >> (uVar4 & 0xff);
 *result_low = uVar3 >> (uVar4 & 0xff) | uVar5 << (0x20 - uVar4 & 0xff);
 return;
 }
 *result_high = param_2;
 *result_low = uVar5 >> (uVar4 - 0x1f & 0xff);
 *result_high &= 0x80000000;
 return;
}




/* Function: __aeabi_d2iz - convert double to integer */

int __aeabi_d2iz(void)
{
    /* This function converts the double value in the return register to an integer
     * The actual double value would be passed in r0/r1 (ARM EABI)
     * For now, return 0 as a stub implementation */
    return 0;
}





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 88 */
