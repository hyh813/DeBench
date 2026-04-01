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
typedef unsigned int uint;
typedef unsigned long long ulonglong;
typedef long long longlong;
typedef unsigned char byte;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef int bool;
typedef struct {
    char *__ap;
} va_list;
typedef unsigned char undefined1;
typedef unsigned long long undefined8;

/* Struct definitions needed by the code */
typedef struct {
    int x;
    int y;
} SmallPoint;

typedef struct {
    int x;
    int y;
} SmallStruct;

typedef struct {
    int data[16];
} BigStruct;

typedef struct {
    int data[16];
} LargeData;

typedef struct {
    LargeData data[2];
} LargeStruct;

/* Function pointer type */
typedef int (*func_ptr_t)(int);

/* Helper macros for floating point operations */
#define CARRY4(a,b) ((unsigned int)((unsigned int)(a) + (unsigned int)(b)) < (unsigned int)(a))
#define SBORROW4(a,b) ((int)((int)(a) - (int)(b)) < 0)
#define SCARRY4(a,b) ((int)((int)(a) + (int)(b)) < 0)
#define LZCOUNT(x) __builtin_clz(x)
#define CONCAT44(high,low) ((uint64_t)(high) << 32 | (uint32_t)(low))

/* External function declarations - these are provided by libgcc/libstdc++ */
int puts(const char *s);
int __printf_chk(int flag, const char *format, ...);
void *memcpy(void *dest, const void *src, unsigned long n);
void __stack_chk_fail(void);
int strlen(const char *s);
static ulonglong __floatsidf(int param_1);
static ulonglong __aeabi_l2d(uint param_1, uint param_2);
int __aeabi_d2iz(void);
ulonglong __aeabi_dadd(int param_1, uint param_2, int param_3, uint param_4);
static ulonglong __aeabi_ui2d(uint param_1);
static ulonglong __extendsfdf2(uint param_1, undefined4 param_2, undefined4 param_3, uint param_4);
static ulonglong __floatundidf(uint param_1, uint param_2);
void __aeabi_drsub(undefined4 param_1, uint param_2);

/* Data constants */
int handle1_1 = 1;
int handle2_0 = 2;

/* String constants */
char DAT_00011594[] = "Calling Conventions Test\n";
char DAT_00011658[] = "VARARGS: %d\n";
char DAT_00011680[] = "FUNC_NO_ARGS: %d\n";
char DAT_000116a4[] = "FUNC_MANY_ARGS: %d\n";
char DAT_000116cc[] = "FUNC_MIXED_ARGS: %d\n";
char DAT_000116f4[] = "STRUCT_BYVAL: %d\n";
char DAT_00011720[] = "STRUCT_BYPTR: %d\n";
char DAT_00011750[] = "Parameter Passing Test\n";
char DAT_00011850[] = "Return Values Test\n";
char DAT_00011870[] = "RET-BASIC: %d\n";
char DAT_0001188c[] = "RET-POINTER: %d\n";
char DAT_000118a8[] = "RET-SMALL-STRUCT: %d\n";
char DAT_000118c4[] = "RET-LARGE-STRUCT: %d\n";
char DAT_000118e4[] = "RET-FUNC-PTR: %d\n";
char DAT_00011900[] = "RET-OPAQUE: %d\n";
char DAT_00011920[] = "RET-COMPLEX: %d\n";
char DAT_0001193c[] = "RET-MULTI: %d\n";
char DAT_00011958[] = "RET-VOID: %d\n";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/4/4_gcc_O1_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */





/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: callback_func @ 00010554 */

int callback_func(int x)

{
 return x << 1;
}



/* Function: func_a @ 0001055c */

int func_a(int x)

{
 return x + 10;
}



/* Function: func_b @ 00010564 */

int func_b(int x)

{
 return x << 1;
}



/* Function: cdecl_func @ 0001056c */

int cdecl_func(int a,int b)

{
 return a + b;
}



/* Function: call_cdecl @ 00010574 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_cdecl(void)

{
 return 0xf;
}



/* Function: stdcall_func @ 0001057c */

int stdcall_func(int a,int b)

{
 return b * a;
}



/* Function: call_stdcall @ 00010584 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stdcall(void)

{
 return 0x32;
}



/* Function: fastcall_func @ 0001058c */

int fastcall_func(int a,int b,int c)

{
 return a + b + c;
}



/* Function: call_fastcall @ 00010598 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fastcall(void)

{
 return 6;
}



/* Function: call_thiscall @ 000105a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thiscall(void)

{
 return 0xf;
}



/* Function: arm_aapcs_func @ 000105a8 */

int arm_aapcs_func(int a,int b,int c,int d,int e)

{
 return a + b + c + d + e;
}



/* Function: call_arm_aapcs @ 000105c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_arm_aapcs(void)

{
 return 0xf;
}



/* Function: mips_func @ 000105c8 */

int mips_func(int a,int b,int c,int d)

{
 return a + b + c + d;
}



/* Function: call_mips @ 000105d8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mips(void)

{
 return 100;
}



/* Function: amd64_sysv_func @ 000105e0 */

int amd64_sysv_func(int a,int b,int c,int d,int e,int f)

{
 return a + b + c + d + e + f;
}



/* Function: call_amd64_sysv @ 00010600 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_amd64_sysv(void)

{
 return 0x15;
}



/* Function: ms_x64_func @ 00010608 */

int ms_x64_func(int a,int b,int c,int d,int e)

{
 return a + b + c + d + e;
}



/* Function: call_ms_x64 @ 00010620 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ms_x64(void)

{
 return 0xf;
}



/* Function: vectorcall_func @ 00010628 */

int vectorcall_func(int a,int b,int c,int d)

{
 return a + b + c + d;
}



/* Function: call_vectorcall @ 00010638 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorcall(void)

{
 return 10;
}



/* Function: mixed_conventions_test @ 00010640 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mixed_conventions_test(void)

{
 /* Unresolved local var: int sum@[???] */
 return 0x21;
}



/* Function: varargs_func @ 00010648 */

/* WARNING: Removing unreachable block (ram,0x000106d0) */

int varargs_func(int count,...)

{
 int iVar1;
 int iVar2;
 va_list args;
 int count_local;
 undefined1 local_c [12];
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (count < 1) {
 iVar1 = 0;
 }
 else {
 iVar2 = 0;
 iVar1 = 0;
 args.__ap = local_c;
 do {
 iVar1 = iVar1 + *(int *)args.__ap;
 iVar2 = iVar2 + 1;
 args.__ap = args.__ap + 4;
 } while (count != iVar2);
 }
 return iVar1;
}



/* Function: func_no_args @ 000106d8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int func_no_args(void)

{
 return 0x2a;
}



/* Function: func_many_args @ 000106e0 */

int func_many_args(int a,int b,int c,int d,int e,int f,int g,int h)

{
 return a + b + c + d + e + f + g + h;
}



/* Function: func_mixed_args @ 00010710 */

int func_mixed_args(int x,char *s,double d,longlong ll)

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
 uVar3 = __aeabi_dadd((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),(int)ll,
 (int)((ulonglong)ll >> 0x20));
 uVar4 = __aeabi_l2d(in_stack_00000000,in_stack_00000004);
 uVar3 = __aeabi_dadd((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),(int)uVar4,(int)((ulonglong)uVar4 >> 0x20)
 );
 iVar2 = __aeabi_d2iz();
 return iVar2;
}



/* Function: func_struct_byval @ 00010774 */

int func_struct_byval(LargeStruct s)

{
 int local_10 [4];
 int *ptr1;
 int *ptr2;
 int sum;
 int i;
 
 /* Unresolved local var: longlong sum@[???] */
 ptr1 = s.data[1].data + 4;
 /* Unresolved local var: int i@[???] */
 ptr2 = s.data[0].data;
 *ptr2 = 0;
 sum = 0;
 i = 0;
 do {
 sum = sum + *ptr1;
 ptr1 = ptr1 + 2;
 i = i + 1;
 } while (i < 16);
 return sum;
}



/* Function: func_struct_byptr @ 000107a8 */

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



/* Function: test_calling_conventions @ 000107c0 */

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
 int local_90 [32];
 int iStack_10;
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
 puts(&DAT_00011594);
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
 __printf_chk(1,&DAT_00011658,iVar1);
 __printf_chk(1,&DAT_00011680,0x2a);
 __printf_chk(1,&DAT_000116a4,0x24);
 __printf_chk(1,&DAT_000116cc,0x75);
 /* Unresolved local var: int i@[???] */
 plVar3 = large.data;
 uVar5 = 1;
 uVar2 = 0;
 do {
 *(uint *)plVar3 = uVar5;
 *(uint *)((int)plVar3 + 4) = uVar2;
 plVar3 = plVar3 + 1;
 bVar7 = 0xfffffffe < uVar5;
 uVar5 = uVar5 + 1;
 uVar2 = uVar2 + bVar7;
 } while (uVar5 != 0x11 || uVar2 != 0);
 memcpy(local_90,&large,0x80);
 /* Unresolved local var: longlong sum@[???]
 Unresolved local var: int i@[???] */
 piVar6 = local_90;
 iVar1 = 0;
 do {
 iVar4 = *piVar6;
 piVar6 = piVar6 + 2;
 iVar1 = iVar4 + iVar1;
 } while (&iStack_10 != piVar6);
 __printf_chk(1,&DAT_000116f4,iVar1);
 __printf_chk(1,&DAT_00011720,0x32);
 if (local_c == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_by_value_int @ 000109cc */

int param_by_value_int(int x)

{
 return x << 1;
}



/* Function: call_by_value_int @ 000109d4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_int(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: int result@[???] */
 return 0xf;
}



/* Function: param_by_value_ptr @ 000109dc */

int param_by_value_ptr(int *p)

{
 *p = *p << 1;
 return 1;
}



/* Function: call_by_value_ptr @ 000109f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_ptr(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: int * ptr@[???]
 Unresolved local var: int result@[???] */
 return 0xb;
}



/* Function: param_array_decay @ 000109f8 */

int param_array_decay(int *arr,int n)

{
 return 4;
}



/* Function: call_array_decay @ 00010a00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_array_decay(void)

{
 /* Unresolved local var: int[10] array@[???] */
 return 4;
}



/* Function: param_string @ 00010a08 */

int param_string(char *str)

{
 return (uint)(byte)*str + (uint)(byte)str[1];
}



/* Function: call_string_param @ 00010a18 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_param(void)

{
 return 0xad;
}



/* Function: param_ptr_array @ 00010a20 */

int param_ptr_array(char **arr,int n)

{
 int iVar1;
 char **ppcVar2;
 char **ppcVar3;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 ppcVar3 = arr + -1;
 ppcVar2 = ppcVar3 + n;
 iVar1 = 0;
 do {
 ppcVar3 = ppcVar3 + 1;
 iVar1 = iVar1 + (uint)(byte)**ppcVar3;
 } while (ppcVar3 != ppcVar2);
 return iVar1;
 }
 return 0;
}



/* Function: call_ptr_array @ 00010a54 */

/* WARNING: Removing unreachable block (ram,0x00010aa8) */
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



/* Function: param_varargs @ 00010ab4 */

/* WARNING: Removing unreachable block (ram,0x00010b3c) */

int param_varargs(int count,...)

{
 int iVar1;
 int iVar2;
 va_list args;
 int count_local;
 undefined1 local_c [12];
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (count < 1) {
 iVar1 = 0;
 }
 else {
 iVar2 = 0;
 iVar1 = 0;
 args.__ap = local_c;
 do {
 iVar1 = iVar1 + *(int *)args.__ap;
 iVar2 = iVar2 + 1;
 args.__ap = args.__ap + 4;
 } while (count != iVar2);
 }
 return iVar1;
}



/* Function: call_varargs_param @ 00010b44 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_varargs_param(void)

{
 int iVar1;
 
 iVar1 = param_varargs(4,10,0x14,0x1e,0x28);
 return iVar1;
}



/* Function: param_func_ptr @ 00010b70 */

int param_func_ptr(func_ptr_t *callback,int x)

{
 int iVar1;
 
 iVar1 = (*callback)(x);
 return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 00010b88 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_func_ptr_param(void)

{
 int iVar1;
 
 iVar1 = param_func_ptr(callback_func,5);
 return iVar1;
}



/* Function: param_double_ptr @ 00010ba0 */

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



/* Function: call_double_ptr @ 00010bd8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_double_ptr(void)

{
 int iVar1;
 int val;
 int *ptr;
 int local_c;
 
 /* Unresolved local var: int result@[???] */
 local_c = 0;
 val = 10;
 ptr = &val;
 param_double_ptr(&ptr,0x14);
 iVar1 = val;
 if (ptr == (int *)0x0) {
 iVar1 = val + 1;
 }
 if (local_c == 0) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_complex_cast @ 00010c44 */

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
 iVar1 = *(int *)p + *(int *)((int)p + 4);
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_complex_cast @ 00010c6c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_complex_cast(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: TestIntPair pair@[???] */
 return 0x12345678;
}



/* Function: param_struct_byval @ 00010c78 */

int param_struct_byval(BigStruct s)

{
 s.data[0xf] = s.data[0xf];
 s.data[0] = s.data[0] + s.data[0xf];
 return s.data[0];
}



/* Function: call_struct_byval @ 00010c94 */

/* WARNING: Removing unreachable block (ram,0x00010cf0) */
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
 return s.data[0xf] + s.data[0];
}



/* Function: param_order_dep @ 00010cf8 */

int param_order_dep(int a,int b)

{
 return a + b;
}



/* Function: call_order_dep @ 00010d00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_order_dep(void)

{
 /* Unresolved local var: int i@[???] */
 return 4;
}



/* Function: test_parameter_passing @ 00010d08 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_parameter_passing(void)

{
 int iVar1;
 
 puts(&DAT_00011750);
 __printf_chk(1,"PARAM-L1-01: %d\n",0xf);
 iVar1 = call_by_value_ptr();
 __printf_chk(1,"PARAM-L1-02: %d\n",iVar1);
 __printf_chk(1,"PARAM-L2-01: %d\n",4);
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



/* Function: ret_basic_type @ 00010e14 */

int ret_basic_type(int x)

{
 return x << 1;
}



/* Function: call_ret_basic @ 00010e1c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_basic(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: int result@[???] */
 return 0x2a;
}



/* Function: ret_pointer @ 00010e24 */

int * ret_pointer(int *p)

{
 return p + 1;
}



/* Function: call_ret_pointer @ 00010e2c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_pointer(void)

{
 /* Unresolved local var: int[3] arr@[???]
 Unresolved local var: int * ptr@[???] */
 return 0x14;
}



/* Function: ret_small_struct @ 00010e34 */

SmallPoint * ret_small_struct(SmallPoint *__return_storage_ptr__,int x,int y)

{
 /* Unresolved local var: SmallPoint p@[DW_OP_reg1(r1); DW_OP_piece: 4;
 DW_OP_reg2(r2); DW_OP_piece: 4] */
 __return_storage_ptr__->x = x;
 __return_storage_ptr__->y = y;
 return __return_storage_ptr__;
}



/* Function: call_ret_small_struct @ 00010e40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_small_struct(void)

{
 /* Unresolved local var: SmallPoint p@[???] */
 return 7;
}



/* Function: ret_large_struct @ 00010e48 */

/* WARNING: Removing unreachable block (ram,0x00010ec8) */

LargeData * ret_large_struct(LargeData *__return_storage_ptr__,int seed)

{
 int *piVar1;
 LargeData d;
 int local_c;
 int *piVar2;
 
 /* Unresolved local var: int i@[???] */
 piVar1 = d.data;
 do {
 piVar2 = piVar1 + 1;
 *piVar1 = seed;
 seed = seed + 1;
 piVar1 = piVar2;
 } while (piVar2 != &local_c);
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



/* Function: call_ret_large_struct @ 00010ed0 */

/* WARNING: Removing unreachable block (ram,0x00010f20) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_large_struct(void)

{
 LargeData d;
 
 ret_large_struct(&d,100);
 return d.data[0] + d.data[0xf];
}



/* Function: ret_func_ptr @ 00010f28 */

func_ptr_t ret_func_ptr(int selector)

{
 func_ptr_t pcVar1;
 
 pcVar1 = func_b;
 if (selector == 0) {
 pcVar1 = func_a;
 }
 return pcVar1;
}



/* Function: call_ret_func_ptr @ 00010f48 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_func_ptr(void)

{
 int iVar1;
 
 /* Unresolved local var: func_ptr_t f@[???] */
 iVar1 = func_b(5);
 return iVar1;
}



/* Function: ret_opaque_handle @ 00010f58 */

void * ret_opaque_handle(int type)

{
 undefined8 *puVar1;
 
 puVar1 = (undefined8 *)&handle1_1;
 if (type != 0) {
 puVar1 = &handle2_0;
 }
 return puVar1;
}



/* Function: call_ret_opaque @ 00010f70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_opaque(void)

{
 /* Unresolved local var: void * h@[???] */
 return handle1_1;
}



/* Function: ret_complex_expr @ 00010f80 */

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



/* Function: call_ret_complex_expr @ 00010f90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_complex_expr(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 0x28;
}



/* Function: ret_multi_branch @ 00010f98 */

int ret_multi_branch(int op)

{
 int iVar1;
 
 if (op == 1) {
 return 0x14;
 }
 if (op == 2) {
 return 0x1e;
 }
 if (op == 0) {
 iVar1 = 10;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_ret_multi_branch @ 00010fc8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_multi_branch(void)

{
 /* Unresolved local var: int sum@[???] */
 return 0x3c;
}



/* Function: ret_void @ 00010fd0 */

void ret_void(int x,int *out)

{
 *out = x * 3;
 return;
}



/* Function: call_ret_void @ 00010fdc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_void(void)

{
 /* Unresolved local var: int result@[???] */
 return 0x15;
}



/* Function: test_return_values @ 00010fe4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_return_values(void)

{
 int iVar1;
 
 puts(&DAT_00011850);
 __printf_chk(1,&DAT_00011870,0x2a);
 iVar1 = call_ret_pointer();
 __printf_chk(1,&DAT_0001188c,iVar1);
 iVar1 = call_ret_small_struct();
 __printf_chk(1,&DAT_000118a8,iVar1);
 iVar1 = call_ret_large_struct();
 __printf_chk(1,&DAT_000118c4,iVar1);
 iVar1 = call_ret_func_ptr();
 __printf_chk(1,&DAT_000118e4,iVar1);
 __printf_chk(1,&DAT_00011900,handle1_1);
 __printf_chk(1,&DAT_00011920,0x28);
 __printf_chk(1,&DAT_0001193c,0x3c);
 __printf_chk(1,&DAT_00011958,0x15);
 return;
}



/* Function: main @ 000110c4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}



/* Function: __subdf3 @ 000110e4 - made static to avoid multiple definition */

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
LAB_00011358:
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
 if (0xffbfffff < uVar11 * 0x200000) goto LAB_00011358;
 }
LAB_00011200:
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
 if (uVar11 - 1 != 0 && 0xfffff < uVar6) goto LAB_00011200;
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
 goto LAB_00011280;
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
LAB_00011280:
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




/* Function: __aeabi_ui2d @ 00011394 */

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
 goto LAB_00011280;
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
LAB_00011280:
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



/* Function: __floatsidf @ 000113b8 */

static ulonglong __floatsidf(int param_1)

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
 return 0;
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
 goto LAB_00011280;
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
LAB_00011280:
 if (uVar6 < 0x433) {
 return CONCAT44(uVar2 + (0x432 - uVar6) * 0x100000 | uVar8,uVar1);
 }
 uVar7 = ~(0x432 - uVar6);
 if (0x1e < (int)uVar7) {
 return CONCAT44(param_1,uVar2 >> (uVar7 - 0x1f & 0xff)) & 0x80000000ffffffff;
 }
 if (uVar7 - 0x13 == 0 || (int)(uVar7 - 0x1f) < -0xc) {
 uVar7 = uVar7 + 1;
 return CONCAT44(uVar8 | uVar2 >> (uVar7 & 0xff),
 uVar1 >> (uVar7 & 0xff) | uVar2 << (0x20 - uVar7 & 0xff));
 }
 uVar8 = 0xc - (uVar7 - 0x13);
 return CONCAT44(param_1,uVar1 >> (0x20 - uVar8 & 0xff) | uVar2 << (uVar8 & 0xff)) &
 0x80000000ffffffff;
}



/* Function: __extendsfdf2 @ 000113e0 */

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
 goto LAB_00011280;
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
LAB_00011280:
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



/* Function: __floatundidf @ 00011428 */

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
LAB_00011200:
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
 if (bVar12 && 0xfffff < param_2) goto LAB_00011200;
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
 goto LAB_00011280;
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
LAB_00011280:
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



/* Function: __aeabi_l2d @ 0001143c */

static ulonglong __aeabi_l2d(uint param_1,uint param_2)

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
 return CONCAT44(param_2,param_1);
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
 return (ulonglong)(uVar11 | 0x7ff00000) << 0x20;
 }
 }
LAB_00011200:
 bVar13 = 0x7fffffff < uVar12;
 if (uVar12 == 0x80000000) {
 bVar13 = (bool)((byte)param_1 & 1);
 }
 return CONCAT44(uVar4 + iVar10 * 0x100000 + (uint)CARRY4(param_1,(uint)bVar13) | uVar11,
 param_1 + bVar13);
 }
 bVar1 = (byte)(uVar12 >> 0x1f);
 uVar12 = uVar12 << 1;
 uVar3 = param_1 * 2;
 bVar13 = CARRY4(param_1,param_1);
 param_1 = param_1 * 2 + (uint)bVar1;
 uVar4 = uVar4 * 2 + (uint)(bVar13 || CARRY4(uVar3,(uint)bVar1));
 bVar13 = iVar10 != 0;
 iVar10 = iVar10 + -1;
 if (bVar13 && 0xfffff < uVar4) goto LAB_00011200;
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
 goto LAB_00011280;
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
LAB_00011280:
 if ((int)uVar9 <= iVar10) {
 return CONCAT44(uVar5 + (iVar10 - uVar9) * 0x100000 | uVar11,uVar3);
 }
 uVar4 = ~(iVar10 - uVar9);
 if ((int)uVar4 < 0x1f) {
 if (uVar4 - 0x13 != 0 && -0xd < (int)(uVar4 - 0x1f)) {
 uVar4 = 0xc - (uVar4 - 0x13);
 return CONCAT44(param_2,uVar3 >> (0x20 - uVar4 & 0xff) | uVar5 << (uVar4 & 0xff)) &
 0x80000000ffffffff;
 }
 uVar4 = uVar4 + 1;
 return CONCAT44(uVar11 | uVar5 >> (uVar4 & 0xff),
 uVar3 >> (uVar4 & 0xff) | uVar5 << (0x20 - uVar4 & 0xff));
 }
 return CONCAT44(param_2,uVar5 >> (uVar4 - 0x1f & 0xff)) & 0x80000000ffffffff;
}




/* CRT stub function __aeabi_d2iz removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 87 */
