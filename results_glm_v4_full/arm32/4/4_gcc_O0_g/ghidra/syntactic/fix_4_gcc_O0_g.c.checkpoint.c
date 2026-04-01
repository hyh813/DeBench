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
typedef unsigned char undefined1;
typedef unsigned char bool;
typedef unsigned char byte;
typedef uint32_t undefined4;
typedef uint32_t undefined8;
typedef uint32_t uint;
typedef uint64_t ulonglong;
typedef long long longlong;
typedef char *code;
typedef struct {
    void *__ap;
} va_list;

/* String data constants */
extern const char DAT_00012400[];
extern const char DAT_000124c4[];
const char DAT_000124ec[] = "FUNC-L1-05: %d\n";
extern const char DAT_00012510[];
extern const char DAT_00012540[];
extern const char DAT_00012568[];
const char DAT_00012594[] = "CALL-L1-12: %d\n";
const char DAT_000125f4[] = "=== Testing Parameter Passing ===\n";
const char DAT_00012700[];
const char DAT_00012720[] = "RET-L1-01: %d\n";
const char DAT_0001273c[] = "RET-L1-02: %d\n";
extern const char DAT_00012758[];
extern const char DAT_00012774[];
extern const char DAT_00012794[];
extern const char DAT_000127b0[];
extern const char DAT_000127d0[];
extern const char DAT_000127ec[];
extern const char DAT_00012808[];

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
} LargeData;

typedef struct {
    int x;
    int y;
} SmallPoint;

typedef struct {
    int a;
    int b;
} TestIntPair;

typedef struct {
    int data[16];
} BigStruct;

/* Function pointer types */
typedef int (*func_ptr_t)(int);
typedef int (*_func_int_int)(int);

/* ARM EABI helper function forward declarations */
double __floatsidf(int param_1);
ulonglong __aeabi_l2d(uint param_1, uint param_2);

/* Union types for 64-bit to 32-bit splitting */
typedef union {
    uint64_t value;
    struct {
        uint32_t _0_4_;
        uint32_t _4_4_;
    };
} uint64_union;

/* Helper macros for 64-bit value construction */
#define CONCAT44(high, low) (((uint64_t)(high) << 32) | (uint32_t)(low))
#define CONCAT484(high, low) (((uint64_t)(high) << 32) | (uint32_t)(low))

/* Compiler intrinsic for counting leading zeros */
#define LZCOUNT(x) ((x) ? __builtin_clz(x) : 32)

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/4/4_gcc_O0_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */





/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: cdecl_func @ 00010580 */

int cdecl_func(int a,int b)

{
 int b_local;
 int a_local;
 
 return a + b;
}



/* Function: call_cdecl @ 000105b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_cdecl(void)

{
 int iVar1;
 
 iVar1 = cdecl_func(5,10);
 return iVar1;
}



/* Function: stdcall_func @ 000105d0 */

int stdcall_func(int a,int b)

{
 int b_local;
 int a_local;
 
 return b * a;
}



/* Function: call_stdcall @ 00010600 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stdcall(void)

{
 int iVar1;
 
 iVar1 = stdcall_func(5,10);
 return iVar1;
}



/* Function: fastcall_func @ 00010620 */

int fastcall_func(int a,int b,int c)

{
 int c_local;
 int b_local;
 int a_local;
 
 return a + b + c;
}



/* Function: call_fastcall @ 0001065c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fastcall(void)

{
 int iVar1;
 
 iVar1 = fastcall_func(1,2,3);
 return iVar1;
}



/* Function: call_thiscall @ 00010680 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thiscall(void)

{
 return 0xf;
}



/* Function: arm_aapcs_func @ 0001069c */

int arm_aapcs_func(int a,int b,int c,int d,int e)

{
 int d_local;
 int c_local;
 int b_local;
 int a_local;
 
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
 int d_local;
 int c_local;
 int b_local;
 int a_local;
 
 return a + b + c + d;
}



/* Function: call_mips @ 0001076c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mips(void)

{
 int iVar1;
 
 iVar1 = mips_func(10,0x14,0x1e,0x28);
 return iVar1;
}



/* Function: amd64_sysv_func @ 00010794 */

int amd64_sysv_func(int a,int b,int c,int d,int e,int f)

{
 int d_local;
 int c_local;
 int b_local;
 int a_local;
 
 return a + b + c + d + e + f;
}



/* Function: call_amd64_sysv @ 000107ec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_amd64_sysv(void)

{
 int iVar1;
 
 iVar1 = amd64_sysv_func(1,2,3,4,5,6);
 return iVar1;
}



/* Function: ms_x64_func @ 0001082c */

int ms_x64_func(int a,int b,int c,int d,int e)

{
 int d_local;
 int c_local;
 int b_local;
 int a_local;
 
 return a + b + c + d + e;
}



/* Function: call_ms_x64 @ 0001087c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ms_x64(void)

{
 int iVar1;
 
 iVar1 = ms_x64_func(1,2,3,4,5);
 return iVar1;
}



/* Function: vectorcall_func @ 000108b4 */

int vectorcall_func(int a,int b,int c,int d)

{
 int d_local;
 int c_local;
 int b_local;
 int a_local;
 
 return a + b + c + d;
}



/* Function: call_vectorcall @ 000108fc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorcall(void)

{
 int iVar1;
 
 iVar1 = vectorcall_func(1,2,3,4);
 return iVar1;
}



/* Function: mixed_conventions_test @ 00010924 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mixed_conventions_test(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int sum;
 
 iVar1 = cdecl_func(1,2);
 iVar2 = stdcall_func(3,4);
 iVar3 = fastcall_func(5,6,7);
 return iVar1 + iVar2 + iVar3;
}



/* Function: varargs_func @ 000109a0 */

/* WARNING: Removing unreachable block (ram,0x00010a30) */

int varargs_func(int count,...)

{
 va_list args;
 int sum;
 int i;
 int count_local;
 undefined1 local_c [12];
 
 sum = 0;
 args.__ap = local_c;
 for (i = 0; i < count; i = i + 1) {
 sum = sum + *(int *)args.__ap;
 args.__ap = args.__ap + 4;
 }
 return sum;
}



/* Function: func_no_args @ 00010a4c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int func_no_args(void)

{
 return 0x2a;
}



/* Function: func_many_args @ 00010a68 */

int func_many_args(int a,int b,int c,int d,int e,int f,int g,int h)

{
 int d_local;
 int c_local;
 int b_local;
 int a_local;
 
 return a + b + c + d + e + f + g + h;
}



/* Function: func_mixed_args @ 00010ad0 */

int func_mixed_args(int x,char *s,double d,longlong ll)

{
 size_t sVar1;
 int iVar2;
 undefined8 uVar3;
 undefined8 uVar4;
 undefined4 in_stack_00000000;
 undefined4 in_stack_00000004;
 uint64_union d_local;
 char *s_local;
 int x_local;
 int len;
 
 if (s == (char *)0x0) {
 sVar1 = 0;
 }
 else {
 sVar1 = strlen(s);
 }
 uVar3 = __floatsidf(x + sVar1);
 d_local._0_4_ = (undefined4)ll;
 d_local._4_4_ = (undefined4)((ulonglong)ll >> 0x20);
 uVar3 = __aeabi_dadd((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),d_local._0_4_,d_local._4_4_);
 uVar4 = __aeabi_l2d(in_stack_00000000,in_stack_00000004);
 uVar3 = __aeabi_dadd((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),(int)uVar4,
 (int)((ulonglong)uVar4 >> 0x20));
 iVar2 = __aeabi_d2iz((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
 return iVar2;
}



/* Function: func_struct_byval @ 00010b80 */

int func_struct_byval(LargeStruct s)

{
 int i;
 longlong sum;
 int local_10 [4];
 uint64_union sum_union;
 uint64_union data1_union;
 
 sum_union.value = 0;
 sum = sum_union.value;
 i = 0;
 while (i < 0x10) {
 data1_union.value = s.data[1];
 data1_union._4_4_ = (uint32_t)((uintptr_t)(local_10 + i * 2));
 s.data[1] = data1_union.value;
 data1_union._0_4_ = *(uint32_t *)data1_union._4_4_;
 s.data[1] = data1_union.value;
 sum_union.value = sum;
 sum_union._0_4_ = (uint32_t)((int)sum_union.value + (uint32_t)data1_union.value);
 sum = sum_union.value;
 data1_union._4_4_ = (uint32_t)(i + 1);
 s.data[1] = data1_union.value;
 i = (int)data1_union._4_4_;
 }
 data1_union.value = s.data[0];
 data1_union._0_4_ = (uint32_t)sum;
 s.data[0] = data1_union.value;
 data1_union.value = s.data[0];
 return (int)data1_union._0_4_;
}



/* Function: func_struct_byptr @ 00010c10 */

int func_struct_byptr(SmallStruct *p)

{
 int iVar1;
 SmallStruct *p_local;
 
 if (p == (SmallStruct *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = p->y * p->x;
 }
 return iVar1;
}



/* Function: test_calling_conventions @ 00010c58 */

/* WARNING: Removing unreachable block (ram,0x00010ed0) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_calling_conventions(void)

{
 int iVar1;
 undefined4 uVar2;
 double d;
 LargeStruct s_00;
 undefined1 auVar3 [116];
 undefined1 auVar4 [12];
 undefined1 in_stack_00000000 [112];
 undefined1 local_stack_buffer [112];
 int i;
 int sum;
 int no_args;
 int many;
 char *test_str;
 int mixed;
 int struct_val;
 int struct_ptr;
 SmallStruct s;
 LargeStruct large;
 
 puts(&DAT_00012400);
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
 iVar1 = varargs_func(5,1,2,3);
 printf(&DAT_000124c4,iVar1);
 iVar1 = func_no_args();
 printf(&DAT_000124ec,iVar1);
 iVar1 = func_many_args(1,2,3,4,5,6,7,8);
 printf(&DAT_00012510,iVar1);
 iVar1 = func_mixed_args(10,"test",d,0x40091eb851eb851f);
 printf(&DAT_00012540,iVar1);
 for (i = 0; i < 0x10; i = i + 1) {
 *(int *)(large.data + i) = i + 1;
 *(int *)((int)large.data + i * 8 + 4) = i + 1 >> 0x1f;
 }
 memcpy(&s_00, large.data, sizeof(s_00));
 iVar1 = func_struct_byval(s_00);
 printf(&DAT_00012568,iVar1);
 s.x = 5;
 s.y = 10;
 iVar1 = func_struct_byptr(&s);
 printf(&DAT_00012594,iVar1);
 return;
}



/* Function: param_by_value_int @ 00010f34 */

int param_by_value_int(int x)

{
 int x_local;
 
 return x << 1;
}



/* Function: call_by_value_int @ 00010f64 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_int(void)

{
 int iVar1;
 int val;
 int result;
 
 iVar1 = param_by_value_int(5);
 return iVar1 + 5;
}



/* Function: param_by_value_ptr @ 00010f9c */

/* WARNING: Removing unreachable block (ram,0x00010fd4) */

int param_by_value_ptr(int *p)

{
 int *p_local;
 
 *p = *p << 1;
 return 1;
}



/* Function: call_by_value_ptr @ 00010fec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_ptr(void)

{
 int val;
 int *ptr;
 int result;
 int local_c;
 
 local_c = 0;
 val = 5;
 ptr = &val;
 result = param_by_value_ptr(ptr);
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(result,local_c,0);
 }
 return val + result;
}



/* Function: param_array_decay @ 0001105c */

int param_array_decay(int *arr,int n)

{
 int n_local;
 int *arr_local;
 
 return 4;
}



/* Function: call_array_decay @ 00011084 */

/* WARNING: Removing unreachable block (ram,0x000110e0) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_array_decay(void)

{
 int iVar1;
 int array [10];
 
 memset(array,0,0x28);
 iVar1 = param_array_decay(array,10);
 return iVar1;
}



/* Function: param_string @ 000110f4 */

int param_string(char *str)

{
 char *str_local;
 
 return (uint)(byte)*str + (uint)(byte)str[1];
}



/* Function: call_string_param @ 00011130 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_param(void)

{
 int iVar1;
 
 iVar1 = param_string("Hello");
 return iVar1;
}



/* Function: param_ptr_array @ 00011150 */

int param_ptr_array(char **arr,int n)

{
 int n_local;
 char **arr_local;
 int sum;
 int i;
 
 sum = 0;
 for (i = 0; i < n; i = i + 1) {
 sum = sum + (uint)(byte)*arr[i];
 }
 return sum;
}



/* Function: call_ptr_array @ 000111d0 */

/* WARNING: Removing unreachable block (ram,0x00011228) */
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



/* Function: param_varargs @ 00011240 */

/* WARNING: Removing unreachable block (ram,0x000112d0) */

int param_varargs(int count,...)

{
 va_list args;
 int sum;
 int i;
 int count_local;
 undefined1 local_c [12];
 
 sum = 0;
 args.__ap = local_c;
 for (i = 0; i < count; i = i + 1) {
 sum = sum + *(int *)args.__ap;
 args.__ap = args.__ap + 4;
 }
 return sum;
}



/* Function: call_varargs_param @ 000112ec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_varargs_param(void)

{
 int iVar1;
 
 iVar1 = param_varargs(4,10,0x14,0x1e,0x28);
 return iVar1;
}



/* Function: param_func_ptr @ 00011324 */

int param_func_ptr(_func_int_int *callback,int x)

{
 int iVar1;
 int x_local;
 _func_int_int *callback_local;
 
 iVar1 = (*callback)(x);
 return iVar1 + 10;
}



/* Function: callback_func @ 00011358 */

int callback_func(int x)

{
 int x_local;
 
 return x << 1;
}



/* Function: call_func_ptr_param @ 00011380 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_func_ptr_param(void)

{
 int iVar1;
 
 iVar1 = param_func_ptr(callback_func,5);
 return iVar1;
}



/* Function: param_double_ptr @ 000113a4 */

int param_double_ptr(int **pp,int new_val)

{
 int iVar1;
 int new_val_local;
 int **pp_local;
 
 if ((pp == (int **)0x0) || (*pp == (int *)0x0)) {
 iVar1 = -1;
 }
 else {
 **pp = new_val;
 *pp = (int *)0x0;
 iVar1 = 1;
 }
 return iVar1;
}



/* Function: call_double_ptr @ 0001140c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_double_ptr(void)

{
 int val;
 int *ptr;
 int result;
 int local_c;
 
 local_c = 0;
 val = 10;
 ptr = &val;
 result = param_double_ptr(&ptr,0x14);
 if (local_c == 0) {
 return (uint)(ptr == (int *)0x0) + val;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(result,local_c,0);
}



/* Function: param_complex_cast @ 00011498 */

int param_complex_cast(void *p,int type)

{
 int iVar1;
 int type_local;
 void *p_local;
 TestIntPair *s;
 int *int_ptr;
 char *char_ptr;
 int *back_ptr;
 
 if (type == 0) {
 iVar1 = *(int *)p;
 }
 else if (type == 1) {
 iVar1 = *(int *)p + *(int *)((int)p + 4);
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_complex_cast @ 0001151c */

/* WARNING: Removing unreachable block (ram,0x0001158c) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_complex_cast(void)

{
 int iVar1;
 int val;
 TestIntPair pair;
 
 val = 0x12345678;
 pair.a = 100;
 pair.b = 200;
 param_complex_cast(&pair,1);
 iVar1 = param_complex_cast(&val,0);
 return iVar1;
}



/* Function: param_struct_byval @ 000115a8 */

int param_struct_byval(BigStruct s)

{
 s.data[0xf] = s.data[0xf];
 s.data[3] = s.data[0] + s.data[0xf];
 s.data[0] = s.data[3];
 return s.data[0];
}



/* Function: call_struct_byval @ 000115dc */

/* WARNING: Removing unreachable block (ram,0x0001167c) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_struct_byval(void)

{
 int iVar1;
 uint64_union uVar5;
 int iVar2;
 undefined1 auVar6 [12];
 BigStruct s_00;
 undefined1 auVar3 [52];
 undefined1 in_stack_00000000 [48];
 undefined4 local_reg_0x28;
 int i;
 BigStruct s;
 int iVar4;
 
 for (i = 0; i < 0x10; i = i + 1) {
 s.data[i] = i;
 }
 iVar2 = s.data[3];
 uVar5.value = CONCAT484(in_stack_00000000,iVar2);
 iVar4 = s.data[0];
 uVar5._4_4_ = s.data[1];
 local_reg_0x28 = s.data[2];
 s_00.data[0] = iVar2;
 s_00.data[1] = uVar5._4_4_;
 s_00.data[2] = local_reg_0x28;
 iVar1 = param_struct_byval(s_00);
 return iVar1;
}



/* Function: param_order_dep @ 00011690 */

int param_order_dep(int a,int b)

{
 int b_local;
 int a_local;
 
 return a + b;
}



/* Function: call_order_dep @ 000116c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_order_dep(void)

{
 int iVar1;
 int i;
 
 iVar1 = param_order_dep(2,2);
 return iVar1;
}



/* Function: test_parameter_passing @ 00011708 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_parameter_passing(void)

{
 int iVar1;
 
 puts(&DAT_000125f4);
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



/* Function: ret_basic_type @ 0001182c */

int ret_basic_type(int x)

{
 int x_local;
 
 return x << 1;
}



/* Function: call_ret_basic @ 00011854 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_basic(void)

{
 int iVar1;
 int val;
 int result;
 
 iVar1 = ret_basic_type(0x15);
 return iVar1;
}



/* Function: ret_pointer @ 00011884 */

int * ret_pointer(int *p)

{
 int *p_local;
 
 return p + 1;
}



/* Function: call_ret_pointer @ 000118ac */

/* WARNING: Removing unreachable block (ram,0x00011908) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_pointer(void)

{
 int *piVar1;
 int *ptr;
 int arr [3];
 
 arr[0] = 10;
 arr[1] = 0x14;
 arr[2] = 0x1e;
 piVar1 = ret_pointer(arr);
 return *piVar1;
}



/* Function: ret_small_struct @ 00011920 */

SmallPoint * ret_small_struct(SmallPoint *__return_storage_ptr__,int x,int y)

{
 int y_local;
 int x_local;
 SmallPoint p;
 
 __return_storage_ptr__->x = x;
 __return_storage_ptr__->y = y;
 return __return_storage_ptr__;
}



/* Function: call_ret_small_struct @ 0001196c */

/* WARNING: Removing unreachable block (ram,0x000119c0) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_small_struct(void)

{
 SmallPoint p;
 
 ret_small_struct(&p,3,4);
 return p.x + p.y;
}



/* Function: ret_large_struct @ 000119d4 */

/* WARNING: Removing unreachable block (ram,0x00011a80) */

LargeData * ret_large_struct(LargeData *__return_storage_ptr__,int seed)

{
 int seed_local;
 int i;
 LargeData d;
 
 for (i = 0; i < 0x10; i = i + 1) {
 d.data[i] = seed + i;
 }
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



/* Function: call_ret_large_struct @ 00011a94 */

/* WARNING: Removing unreachable block (ram,0x00011ae4) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_large_struct(void)

{
 LargeData d;
 
 ret_large_struct(&d,100);
 return d.data[0] + d.data[0xf];
}



/* Function: func_a @ 00011af8 */

int func_a(int x)

{
 int x_local;
 
 return x + 10;
}



/* Function: func_b @ 00011b20 */

int func_b(int x)

{
 int x_local;
 
 return x << 1;
}



/* Function: ret_func_ptr @ 00011b48 */

func_ptr_t ret_func_ptr(int selector)

{
 code *pcVar1;
 int selector_local;
 
 if (selector == 0) {
 pcVar1 = func_a;
 }
 else {
 pcVar1 = func_b;
 }
 return pcVar1;
}



/* Function: call_ret_func_ptr @ 00011b88 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_func_ptr(void)

{
 func_ptr_t p_Var1;
 int iVar2;
 func_ptr_t f;
 
 p_Var1 = ret_func_ptr(1);
 iVar2 = (*p_Var1)(5);
 return iVar2;
}



/* Function: ret_opaque_handle @ 00011bbc */

void * ret_opaque_handle(int type)

{
 static int handle1;
 static double handle2;
 int *piVar1;
 int type_local;
 
 if (type == 0) {
 piVar1 = &handle1;
 }
 else {
 piVar1 = (int *)&handle2;
 }
 return (double *)piVar1;
}



/* Function: call_ret_opaque @ 00011bfc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_opaque(void)

{
 int *piVar1;
 void *h;
 
 piVar1 = ret_opaque_handle(0);
 return *piVar1;
}



/* Function: ret_complex_expr @ 00011c28 */

int ret_complex_expr(int x,int y,int z)

{
 int iVar1;
 int z_local;
 int y_local;
 int x_local;
 
 if (y < x) {
 iVar1 = z << 1;
 }
 else {
 iVar1 = z + 10;
 }
 return iVar1;
}



/* Function: call_ret_complex_expr @ 00011c74 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_complex_expr(void)

{
 int iVar1;
 int iVar2;
 int r1;
 int r2;
 
 iVar1 = ret_complex_expr(5,3,10);
 iVar2 = ret_complex_expr(3,5,10);
 return iVar1 + iVar2;
}



/* Function: ret_multi_branch @ 00011cc0 */

int ret_multi_branch(int op)

{
 int op_local;
 
 if (op == 2) {
 return 0x1e;
 }
 if (op < 3) {
 if (op == 0) {
 return 10;
 }
 if (op == 1) {
 return 0x14;
 }
 }
 return -1;
}



/* Function: call_ret_multi_branch @ 00011d30 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_multi_branch(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int sum;
 
 iVar1 = ret_multi_branch(0);
 iVar2 = ret_multi_branch(1);
 iVar3 = ret_multi_branch(2);
 return iVar1 + iVar2 + iVar3;
}



/* Function: ret_void @ 00011d9c */

void ret_void(int x,int *out)

{
 int *out_local;
 int x_local;
 
 *out = x * 3;
 return;
}



/* Function: call_ret_void @ 00011dd8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_void(void)

{
 int result;
 int local_c;
 
 local_c = 0;
 ret_void(7,&result);
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return result;
}



/* Function: test_return_values @ 00011e34 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_return_values(void)

{
 int iVar1;
 
 puts(&DAT_00012700);
 iVar1 = call_ret_basic();
 printf(&DAT_00012720,iVar1);
 iVar1 = call_ret_pointer();
 printf(&DAT_0001273c,iVar1);
 iVar1 = call_ret_small_struct();
 printf(&DAT_00012758,iVar1);
 iVar1 = call_ret_large_struct();
 printf(&DAT_00012774,iVar1);
 iVar1 = call_ret_func_ptr();
 printf(&DAT_00012794,iVar1);
 iVar1 = call_ret_opaque();
 printf(&DAT_000127b0,iVar1);
 iVar1 = call_ret_complex_expr();
 printf(&DAT_000127d0,iVar1);
 iVar1 = call_ret_multi_branch();
 printf(&DAT_000127ec,iVar1);
 iVar1 = call_ret_void();
 printf(&DAT_00012808,iVar1);
 return;
}



/* Function: main @ 00011f28 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}



/* Function: __aeabi_drsub @ 00011f48 */

void __aeabi_drsub(undefined4 param_1,uint param_2)

{
 __aeabi_dadd(param_1,param_2 ^ 0x80000000);
 return;
}



/* Function: __subdf3 @ 00011f50 */

ulonglong __subdf3(uint param_1,uint param_2,uint param_3,uint param_4)

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
LAB_000121c4:
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
 if (0xffbfffff < uVar11 * 0x200000) goto LAB_000121c4;
 }
LAB_0001206c:
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
 if (uVar11 - 1 != 0 && 0xfffff < uVar6) goto LAB_0001206c;
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
 goto LAB_000120ec;
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
LAB_000120ec:
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




/* Function: __aeabi_ui2d @ 00012200 */

ulonglong __aeabi_ui2d(uint param_1)

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
 goto LAB_000120ec;
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
LAB_000120ec:
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



/* Function: __floatsidf @ 00012224 */

double __floatsidf(int param_1)

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
 goto LAB_000120ec;
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
LAB_000120ec:
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



/* Function: __extendsfdf2 @ 0001224c */

ulonglong __extendsfdf2(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

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
 goto LAB_000120ec;
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
LAB_000120ec:
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



/* Function: __floatundidf @ 00012294 */

ulonglong __floatundidf(uint param_1,uint param_2)

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
LAB_0001206c:
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
 if (bVar12 && 0xfffff < param_2) goto LAB_0001206c;
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
 goto LAB_000120ec;
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
LAB_000120ec:
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



/* Function: __aeabi_l2d @ 000122a8 */

ulonglong __aeabi_l2d(uint param_1,uint param_2)

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
LAB_0001206c:
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
 if (bVar13 && 0xfffff < uVar4) goto LAB_0001206c;
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
 goto LAB_000120ec;
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
LAB_000120ec:
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
