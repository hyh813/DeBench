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
typedef unsigned long long undefined8;
typedef unsigned int undefined4;
typedef long long longlong;
typedef unsigned int uint;
typedef unsigned long long ulonglong;
typedef int bool;
typedef unsigned char byte;

typedef struct {
    int _0_4_;
    int _4_4_;
} LargeStructData;

typedef struct {
    LargeStructData data[16];
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
    int x;
    int y;
} TestIntPair;

typedef int (*func_ptr_t)(int);

typedef int (*_func_int_int)(int);

/* Compiler helper macros for decompiled code */
#define CARRY4(x,y) (((x) + (y)) < (x))
#define SBORROW4(x,y) ((int)((x) - (y)) > (int)(x))
#define SCARRY4(x,y) (((int)(x) < 0) && ((int)(y) < 0) && ((int)((x) + (y)) >= 0))
#define LZCOUNT(x) (__builtin_clz(x))

/* Forward declarations for helper functions */
ulonglong __adddf3(uint param_1,uint param_2,uint param_3,uint param_4);
ulonglong __floatsidf(uint param_1);
uint __fixdfsi(uint param_1,uint param_2);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/4/4_clang_Os_g
 * Processor: ARM
 * Compiler Spec: default
 */

/* External data declarations */
extern char DAT_0001157a[];
extern char DAT_000115a6[];
extern char DAT_000117ac[];
extern char DAT_000117cd[];
extern char DAT_0001168e[];
extern char DAT_000116aa[];
extern char DAT_000116c6[];
extern char DAT_000116e1[];
extern char DAT_000116fe[];
extern char DAT_0001171a[];
extern char DAT_00011737[];
extern char DAT_00011753[];
extern char DAT_0001176f[];
extern char DAT_00011526[];
extern char DAT_0001178b[];
extern double ret_opaque_handle_handle1;
extern double ret_opaque_handle_handle2;

/* Data definitions */
char DAT_0001157a[] = "SUM-L1-01: %u, %u, %d\n";
char DAT_000115a6[] = "STRUCT-L1-01: %d\n";
char DAT_000117ac[] = "=== Parameter Passing Tests ===";
char DAT_000117cd[] = "=== Return Value Tests ===";
char DAT_0001168e[] = "RET-L1-01: %d\n";
char DAT_000116aa[] = "RET-L2-01: %d\n";
char DAT_000116c6[] = "RET-L2-02: %d\n";
char DAT_000116e1[] = "RET-L2-03: %d\n";
char DAT_000116fe[] = "RET-L3-01: %d\n";
char DAT_0001171a[] = "RET-L3-02: %d\n";
char DAT_00011737[] = "RET-L3-03: %d\n";
char DAT_00011753[] = "RET-L3-04: %d\n";
char DAT_0001176f[] = "RET-L3-05: %d\n";
char DAT_00011526[] = "PARAM-L1-03: %d\n";
char DAT_0001178b[] = "=== Calling Convention Tests ===";
char DAT_000114dc[] = "VARARGS-L1-01: %d\n";
char DAT_00011504[] = "PARAM-L1-04: %d\n";
char DAT_00011552[] = "PARAM-L2-05: %d\n";
double ret_opaque_handle_handle1 = 1.0;
double ret_opaque_handle_handle2 = 2.0;


/* CRT stub function _init removed by preprocessor */





/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: cdecl_func @ 000105c0 */

int cdecl_func(int a,int b)

{
 return b + a;
}



/* Function: call_cdecl @ 000105c8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_cdecl(void)

{
 return 0xf;
}



/* Function: stdcall_func @ 000105d0 */

int stdcall_func(int a,int b)

{
 return b * a;
}



/* Function: call_stdcall @ 000105dc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stdcall(void)

{
 return 0x32;
}



/* Function: fastcall_func @ 000105e4 */

int fastcall_func(int a,int b,int c)

{
 return b + a + c;
}



/* Function: call_fastcall @ 000105f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fastcall(void)

{
 return 6;
}



/* Function: call_thiscall @ 000105f8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thiscall(void)

{
 return 0xf;
}



/* Function: arm_aapcs_func @ 00010600 */

int arm_aapcs_func(int a,int b,int c,int d,int e)

{
 return b + a + c + d + e;
}



/* Function: call_arm_aapcs @ 00010618 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_arm_aapcs(void)

{
 return 0xf;
}



/* Function: mips_func @ 00010620 */

int mips_func(int a,int b,int c,int d)

{
 return b + a + c + d;
}



/* Function: call_mips @ 00010630 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mips(void)

{
 return 100;
}



/* Function: amd64_sysv_func @ 00010638 */

int amd64_sysv_func(int a,int b,int c,int d,int e,int f)

{
 return b + a + c + d + e + f;
}



/* Function: call_amd64_sysv @ 00010658 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_amd64_sysv(void)

{
 return 0x15;
}



/* Function: ms_x64_func @ 00010660 */

int ms_x64_func(int a,int b,int c,int d,int e)

{
 return b + a + c + d + e;
}



/* Function: call_ms_x64 @ 00010678 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ms_x64(void)

{
 return 0xf;
}



/* Function: vectorcall_func @ 00010680 */

int vectorcall_func(int a,int b,int c,int d)

{
 return b + a + c + d;
}



/* Function: call_vectorcall @ 00010690 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorcall(void)

{
 return 10;
}



/* Function: mixed_conventions_test @ 00010698 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mixed_conventions_test(void)

{
 /* Unresolved local var: int sum@[???] */
 return 0x21;
}



/* Function: varargs_func @ 000106a0 */

int varargs_func(int count,...)

{
 int *piVar1;
 int iVar2;
 int local_c [3];
 
 /* Unresolved local var: va_list args@[???]
 Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (count < 1) {
 iVar2 = 0;
 }
 else {
 iVar2 = 0;
 piVar1 = local_c;
 do {
 count = count + -1;
 iVar2 = *piVar1 + iVar2;
 piVar1 = piVar1 + 1;
 } while (count != 0);
 }
 return iVar2;
}



/* Function: func_no_args @ 000106f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int func_no_args(void)

{
 return 0x2a;
}



/* Function: func_many_args @ 000106f8 */

int func_many_args(int a,int b,int c,int d,int e,int f,int g,int h)

{
 return b + a + c + d + e + f + g + h;
}



/* Function: func_mixed_args @ 00010728 */

int func_mixed_args(int x,char *s,double d,long long ll)

{
 size_t sVar1;
 int iVar2;
 undefined8 uVar3;
 undefined8 uVar4;
 undefined4 in_stack_00000000;
 undefined4 in_stack_00000004;
 
 /* Unresolved local var: int len@[???] */
 if (s == (char *)0x0) {
 sVar1 = 0;
 }
 else {
 sVar1 = strlen(s);
 }
 uVar3 = __floatsidf(sVar1 + x);
 uVar3 = __adddf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),(int)ll,(int)((ulonglong)ll >> 0x20));
 uVar4 = __floatdidf(in_stack_00000000,in_stack_00000004);
 uVar3 = __adddf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),(int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
 iVar2 = __fixdfsi((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
 return iVar2;
}



/* Function: func_struct_byval @ 000107a0 */

int func_struct_byval(LargeStruct s)

{
 int local_10 [4];
 
 /* Unresolved local var: longlong sum@[???] */
 s.data[0]._4_4_ = 0;
 s.data[0]._0_4_ = 0;
 do {
 /* Unresolved local var: int i@[???] */
 s.data[1]._0_4_ = (int)((int)local_10 + s.data[0]._4_4_);
 s.data[0]._4_4_ = s.data[0]._4_4_ + 8;
 s.data[0]._0_4_ = *(int *)((int)s.data + s.data[0]._4_4_) + s.data[0]._0_4_;
 } while (s.data[0]._4_4_ != 0x80);
 return s.data[0]._0_4_;
}



/* Function: func_struct_byptr @ 000107ec */

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



/* Function: test_calling_conventions @ 00010800 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_calling_conventions(void)

{
 int iVar1;
 uint *puVar2;
 int iVar3;
 int iVar4;
 uint uVar5;
 uint uVar6;
 bool bVar7;
 double d;
 uint local_90 [32];
 
 /* Unresolved local var: LargeStruct large@[???]
 Unresolved local var: int sum@[???]
 Unresolved local var: int no_args@[???]
 Unresolved local var: int many@[???]
 Unresolved local var: char * test_str@[???]
 Unresolved local var: int mixed@[???]
 Unresolved local var: int struct_val@[???]
 Unresolved local var: int struct_ptr@[???]
 Unresolved local var: SmallStruct s@[???] */
 extern char DAT_0001178b[];
 extern char DAT_000114dc[];
 extern char DAT_00011504[];
 extern char DAT_00011526[];
 extern char DAT_00011552[];
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
 uVar5 = 1;
 iVar1 = varargs_func(5,1,2,3,4,5);
 printf(&DAT_000114dc,iVar1);
 printf(&DAT_00011504,0x2a);
 printf(&DAT_00011526,0x24);
 iVar1 = func_mixed_args(10,"test",d,0x40091eb851eb851f);
 printf(&DAT_00011552,iVar1);
 puVar2 = local_90;
 do {
 /* Unresolved local var: int i@[???] */
 *puVar2 = uVar5;
 puVar2[1] = 0;
 puVar2 = puVar2 + 2;
 uVar5 = uVar5 + 1;
 } while (uVar5 != 0x11);
 uVar5 = 0;
 iVar4 = 0;
 iVar1 = 0;
 do {
 /* Unresolved local var: longlong sum@[???]
 Unresolved local var: int i@[???] */
 uVar6 = *(uint *)((int)local_90 + iVar1);
 iVar3 = iVar1 + 8;
 bVar7 = CARRY4(uVar6,uVar5);
 uVar5 = uVar6 + uVar5;
 iVar4 = *(int *)((int)local_90 + iVar1 + 4) + iVar4 + (uint)bVar7;
 iVar1 = iVar3;
 } while (iVar3 != 0x80);
 printf(&DAT_0001157a,uVar5,local_90,iVar4);
 printf(&DAT_000115a6,0x32);
 return;
}



/* Function: param_by_value_int @ 000109f8 */

int param_by_value_int(int x)

{
 return x << 1;
}



/* Function: call_by_value_int @ 00010a00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_int(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: int result@[???] */
 return 0xf;
}



/* Function: param_by_value_ptr @ 00010a08 */

int param_by_value_ptr(int *p)

{
 *p = *p << 1;
 return 1;
}



/* Function: call_by_value_ptr @ 00010a1c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_ptr(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: int result@[???]
 Unresolved local var: int * ptr@[???] */
 return 0xb;
}



/* Function: param_array_decay @ 00010a24 */

int param_array_decay(int *arr,int n)

{
 return 4;
}



/* Function: call_array_decay @ 00010a2c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_array_decay(void)

{
 /* Unresolved local var: int[10] array@[???] */
 return 4;
}



/* Function: param_string @ 00010a34 */

int param_string(char *str)

{
 return (uint)(byte)str[1] + (uint)(byte)*str;
}



/* Function: call_string_param @ 00010a44 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_param(void)

{
 return 0xad;
}



/* Function: param_ptr_array @ 00010a4c */

int param_ptr_array(char **arr,int n)

{
 int iVar1;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar1 = 0;
 do {
 n = n + -1;
 iVar1 = iVar1 + (uint)(byte)**arr;
 arr = arr + 1;
 } while (n != 0);
 return iVar1;
 }
 return 0;
}



/* Function: call_ptr_array @ 00010a7c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ptr_array(void)

{
 /* Unresolved local var: char *[3] strs@[???] */
 return 300;
}



/* Function: param_varargs @ 00010a84 */

int param_varargs(int count,...)

{
 int *piVar1;
 int iVar2;
 int local_c [3];
 
 /* Unresolved local var: va_list args@[???]
 Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (count < 1) {
 iVar2 = 0;
 }
 else {
 iVar2 = 0;
 piVar1 = local_c;
 do {
 count = count + -1;
 iVar2 = *piVar1 + iVar2;
 piVar1 = piVar1 + 1;
 } while (count != 0);
 }
 return iVar2;
}



/* Function: call_varargs_param @ 00010ad4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_varargs_param(void)

{
 int iVar1;
 
 iVar1 = param_varargs(4,10,0x14,0x1e,0x28);
 return iVar1;
}



/* Function: param_func_ptr @ 00010b04 */

int param_func_ptr(_func_int_int *callback,int x)

{
 int iVar1;
 
 iVar1 = (*callback)(x);
 return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 00010b24 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_func_ptr_param(void)

{
 return 0x14;
}



/* Function: param_double_ptr @ 00010b2c */

int param_double_ptr(int **pp,int new_val)

{
 int iVar1;
 int *in_r3;
 
 iVar1 = -1;
 if (pp != (int **)0x0) {
 in_r3 = *pp;
 }
 if (pp != (int **)0x0 && in_r3 != (int *)0x0) {
 *in_r3 = new_val;
 *pp = (int *)0x0;
 iVar1 = 1;
 }
 return iVar1;
}



/* Function: call_double_ptr @ 00010b54 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_double_ptr(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: int * ptr@[???]
 Unresolved local var: int result@[???] */
 return 0x15;
}



/* Function: param_complex_cast @ 00010b5c */

int param_complex_cast(void *p,int type)

{
 int iVar1;
 
 if (type == 1) {
 /* Unresolved local var: TestIntPair * s@[???] */
 iVar1 = *(int *)((int)p + 4) + *(int *)p;
 }
 else {
 iVar1 = -1;
 /* Unresolved local var: int * int_ptr@[DW_OP_reg0(r0)]
 Unresolved local var: int * back_ptr@[DW_OP_reg0(r0)]
 Unresolved local var: char * char_ptr@[DW_OP_reg0(r0)] */
 if (type == 0) {
 iVar1 = *(int *)p;
 }
 }
 return iVar1;
}



/* Function: call_complex_cast @ 00010b88 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_complex_cast(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: TestIntPair pair@[???] */
 return 0x12345678;
}



/* Function: param_struct_byval @ 00010b94 */

int param_struct_byval(BigStruct s)

{
 s.data[0xf] = s.data[0xf];
 s.data[0] = s.data[0] + s.data[0xf];
 return s.data[0];
}



/* Function: call_struct_byval @ 00010ba0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_struct_byval(void)

{
 int iVar1;
 int local_40 [16];
 
 /* Unresolved local var: BigStruct s@[???] */
 iVar1 = 0;
 do {
 /* Unresolved local var: int i@[DW_OP_reg0(r0)] */
 local_40[iVar1] = iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x10);
 return local_40[0xf] + local_40[0];
}



/* Function: param_order_dep @ 00010bd0 */

int param_order_dep(int a,int b)

{
 return b + a;
}



/* Function: call_order_dep @ 00010bd8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_order_dep(void)

{
 /* Unresolved local var: int i@[???] */
 return 3;
}



/* Function: test_parameter_passing @ 00010be0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_parameter_passing(void)

{
 int iVar1;
 int local_48 [16];
 
 puts(&DAT_000117ac);
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
 Unresolved local var: int i@[DW_OP_reg0(r0)] */
 local_48[iVar1] = iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x10);
 printf("PARAM-L3-04: %d\n",local_48[0xf] + local_48[0]);
 printf("PARAM-L3-05: %d\n",3);
 return;
}



/* Function: ret_basic_type @ 00010d1c */

int ret_basic_type(int x)

{
 return x << 1;
}



/* Function: call_ret_basic @ 00010d24 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_basic(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: int result@[???] */
 return 0x2a;
}



/* Function: ret_pointer @ 00010d2c */

int * ret_pointer(int *p)

{
 return p + 1;
}



/* Function: call_ret_pointer @ 00010d34 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_pointer(void)

{
 /* Unresolved local var: int[3] arr@[???]
 Unresolved local var: int * ptr@[???] */
 return 0x14;
}



/* Function: ret_small_struct @ 00010d3c */

SmallPoint * ret_small_struct(SmallPoint *__return_storage_ptr__,int x,int y)

{
 /* Unresolved local var: SmallPoint p@[DW_OP_breg0(r0): 0] */
 __return_storage_ptr__->x = x;
 __return_storage_ptr__->y = y;
 return __return_storage_ptr__;
}



/* Function: call_ret_small_struct @ 00010d44 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_small_struct(void)

{
 /* Unresolved local var: SmallPoint p@[???] */
 return 7;
}



/* Function: ret_large_struct @ 00010d4c */

LargeData * ret_large_struct(LargeData *__return_storage_ptr__,int seed)

{
 int iVar1;
 
 /* Unresolved local var: LargeData d@[DW_OP_breg0(r0): 0] */
 iVar1 = 0;
 do {
 /* Unresolved local var: int i@[DW_OP_reg2(r2)] */
 __return_storage_ptr__->data[iVar1] = seed + iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x10);
 return __return_storage_ptr__;
}



/* Function: call_ret_large_struct @ 00010d68 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_large_struct(void)

{
 int iVar1;
 int local_40 [16];
 
 /* Unresolved local var: LargeData d@[???] */
 iVar1 = 0;
 do {
 /* Unresolved local var: LargeData d@[???]
 Unresolved local var: int i@[DW_OP_reg0(r0)] */
 local_40[iVar1] = iVar1 + 100;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x10);
 return local_40[0xf] + local_40[0];
}



/* Function: func_a @ 00010d9c */

int func_a(int x)

{
 return x + 10;
}



/* Function: func_b @ 00010da4 */

int func_b(int x)

{
 return x << 1;
}



/* Function: ret_func_ptr @ 00010dac */

func_ptr_t ret_func_ptr(int selector)

{
 func_ptr_t p_Var1;
 
 p_Var1 = func_b;
 if (selector == 0) {
 p_Var1 = func_a;
 }
 return p_Var1;
}



/* Function: call_ret_func_ptr @ 00010dd4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_func_ptr(void)

{
 /* Unresolved local var: func_ptr_t f@[???] */
 return 10;
}



/* Function: ret_opaque_handle @ 00010ddc */

void * ret_opaque_handle(int type)

{
 double *pdVar1;
 
 pdVar1 = &ret_opaque_handle_handle2;
 if (type == 0) {
 pdVar1 = (double *)&ret_opaque_handle_handle1;
 }
 return pdVar1;
}



/* Function: call_ret_opaque @ 00010e04 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_opaque(void)

{
 /* Unresolved local var: void * h@[???] */
 return (int)ret_opaque_handle_handle1;
}



/* Function: ret_complex_expr @ 00010e14 */

int ret_complex_expr(int x,int y,int z)

{
 int iVar1;
 
 iVar1 = z + 10;
 if (y < x) {
 iVar1 = z << 1;
 }
 return iVar1;
}



/* Function: call_ret_complex_expr @ 00010e28 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_complex_expr(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 0x28;
}



/* Function: ret_multi_branch @ 00010e30 */

int ret_multi_branch(int op)

{
 int iVar1;
 
 iVar1 = -1;
 if ((uint)op < 3) {
 iVar1 = op * 10 + 10;
 }
 return iVar1;
}



/* Function: call_ret_multi_branch @ 00010e4c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_multi_branch(void)

{
 /* Unresolved local var: int sum@[???] */
 return 0x3c;
}



/* Function: ret_void @ 00010e54 */

void ret_void(int x,int *out)

{
 *out = x * 3;
 return;
}



/* Function: call_ret_void @ 00010e60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_void(void)

{
 /* Unresolved local var: int result@[???] */
 return 0x15;
}



/* Function: test_return_values @ 00010e68 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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
 /* Unresolved local var: LargeData d@[???]
 Unresolved local var: int i@[DW_OP_reg0(r0)] */
 local_48[iVar1] = iVar1 + 100;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x10);
 printf(&DAT_000116e1,local_48[0xf] + local_48[0]);
 printf(&DAT_000116fe,10);
 printf(&DAT_0001171a,(int)ret_opaque_handle_handle1);
 printf(&DAT_00011737,0x28);
 printf(&DAT_00011753,0x3c);
 printf(&DAT_0001176f,0x15);
 return;
}



/* Function: main @ 00010f68 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}
































/* CRT stub function __floatdidf removed by preprocessor */









/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 86 */
