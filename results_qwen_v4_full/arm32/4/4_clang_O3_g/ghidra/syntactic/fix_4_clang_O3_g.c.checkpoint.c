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
typedef unsigned long long ulonglong;
typedef unsigned int uint;
typedef unsigned char byte;
typedef int bool;

/* Compiler intrinsics/macros */
#define LZCOUNT(x) __builtin_clz(x)
#define SBORROW4(a,b) ((a) < 0 && (b) >= 0)
#define SCARRY4(a,b) ((a) >= 0 && (b) < 0)
#define CARRY4(a,b) (((a) + (b)) < (a))
#define CONCAT44(hi,lo) (((ulonglong)(hi) << 32) | (lo))

/* User-defined types */
typedef struct {
    int x;
    int y;
} SmallStruct;

typedef struct {
    int x;
    int y;
} SmallPoint;

typedef union {
    uint64_t _full;
    struct {
        uint32_t _0_4_;
        uint32_t _4_4_;
    };
} LargeDataElement;

typedef struct {
    LargeDataElement data[16];
} LargeStruct;

typedef struct {
    int data[16];
} BigStruct;

typedef struct {
    int data[16];
} LargeData;

typedef struct {
    int field1;
    int field2;
} TestIntPair;

typedef int (*_func_int_int)(int);

typedef int (*func_ptr_t)(int);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/4/4_clang_O3_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* External data declarations */
extern char DAT_000117d6[];
extern char DAT_0001152c[];
extern char DAT_00011554[];
extern char DAT_00011576[];
extern char DAT_0001159d[];
extern char DAT_000115c5[];
extern char DAT_000115f1[];
extern char DAT_000117f7[];
extern char DAT_000116d9[];
extern char DAT_000116f5[];
extern char DAT_00011711[];
extern char DAT_0001172c[];
extern char DAT_00011749[];
extern char DAT_00011765[];
extern char DAT_00011782[];
extern char DAT_0001179e[];
extern char DAT_000117ba[];
extern char DAT_00011818[];

/* Define missing data arrays */
char DAT_000117d6[] = "Calling Conventions Test";
char DAT_0001152c[] = "VARARGS-L1-01: %d\n";
char DAT_00011554[] = "PARAM-L1-01: %d\n";
char DAT_00011576[] = "PARAM-L1-02: %d\n";
char DAT_0001159d[] = "PARAM-L2-01: %d\n";
char DAT_000115c5[] = "PARAM-L2-02: %d\n";
char DAT_000115f1[] = "PARAM-L2-03: %d\n";
char DAT_000117f7[] = "Parameter Passing Test";
char DAT_000116d9[] = "RET-L1-01: %d\n";
char DAT_000116f5[] = "RET-L1-02: %d\n";
char DAT_00011711[] = "RET-L1-03: %d\n";
char DAT_0001172c[] = "RET-L1-04: %d\n";
char DAT_00011749[] = "RET-L1-05: %d\n";
char DAT_00011765[] = "RET-L1-06: %d\n";
char DAT_00011782[] = "RET-L1-07: %d\n";
char DAT_0001179e[] = "RET-L1-08: %d\n";
char DAT_000117ba[] = "RET-L1-09: %d\n";
char DAT_00011818[] = "Return Values Test";

/* Compiler runtime function declarations */
extern ulonglong __adddf3(uint param_1,uint param_2,uint param_3,uint param_4);
extern ulonglong __floatsidf(uint param_1);
extern uint __fixdfsi(uint param_1,uint param_2);

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
 if (0 < count) {
 iVar2 = 0;
 piVar1 = local_c;
 do {
 count = count + -1;
 iVar2 = *piVar1 + iVar2;
 piVar1 = piVar1 + 1;
 } while (count != 0);
 return iVar2;
 }
 return 0;
}



/* Function: func_no_args @ 000106f8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int func_no_args(void)

{
 return 0x2a;
}



/* Function: func_many_args @ 00010700 */

int func_many_args(int a,int b,int c,int d,int e,int f,int g,int h)

{
 return b + a + c + d + e + f + g + h;
}



/* Function: func_mixed_args @ 00010730 */

int func_mixed_args(int x,char *s,double d,long long ll)

{
 size_t sVar1;
 int iVar2;
 uint64_t uVar3;
 uint64_t uVar4;
 undefined4 in_stack_00000000;
 undefined4 in_stack_00000004;
 
 in_stack_00000000 = (undefined4)ll;
 in_stack_00000004 = (undefined4)((ulonglong)ll >> 0x20);
 
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



/* Function: func_struct_byval @ 000107a8 */

int func_struct_byval(LargeStruct s)

{
 /* Unresolved local var: longlong sum@[???] */
 /* Unresolved local var: int i@[???] */
 s.data[0]._4_4_ = s.data[2]._0_4_ + s.data[1]._0_4_ + s.data[0]._0_4_;
 s.data[0]._4_4_ = s.data[3]._0_4_ + s.data[0]._4_4_;
 s.data[0]._4_4_ = s.data[4]._0_4_ + s.data[0]._4_4_;
 s.data[0]._0_4_ = s.data[5]._0_4_ + s.data[0]._4_4_;
 s.data[0]._0_4_ = s.data[6]._0_4_ + s.data[0]._0_4_;
 s.data[0]._0_4_ = s.data[7]._0_4_ + s.data[0]._0_4_;
 s.data[0]._0_4_ = s.data[8]._0_4_ + s.data[0]._0_4_;
 s.data[0]._0_4_ = s.data[9]._0_4_ + s.data[0]._0_4_;
 s.data[0]._0_4_ = s.data[10]._0_4_ + s.data[0]._0_4_;
 s.data[0]._0_4_ = s.data[0xb]._0_4_ + s.data[0]._0_4_;
 s.data[0]._0_4_ = s.data[0xc]._0_4_ + s.data[0]._0_4_;
 s.data[0]._0_4_ = s.data[0xd]._0_4_ + s.data[0]._0_4_;
 s.data[0]._0_4_ = s.data[0xe]._0_4_ + s.data[0]._0_4_;
 s.data[0]._0_4_ = s.data[0xf]._0_4_ + s.data[0]._0_4_;
 return (int)s.data[0]._0_4_;
}



/* Function: func_struct_byptr @ 0001082c */

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



/* Function: test_calling_conventions @ 00010840 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_calling_conventions(void)

{
 int iVar1;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int no_args@[???]
 Unresolved local var: int many@[???]
 Unresolved local var: int mixed@[???]
 Unresolved local var: int struct_val@[???]
 Unresolved local var: LargeStruct large@[???]
 Unresolved local var: int struct_ptr@[???]
 Unresolved local var: char * test_str@[???]
 Unresolved local var: SmallStruct s@[???] */
 puts(&DAT_000117d6);
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
 printf(&DAT_0001152c,iVar1);
 printf(&DAT_00011554,0x2a);
 printf(&DAT_00011576,0x24);
 printf(&DAT_0001159d,0x75);
 printf(&DAT_000115c5,0x88);
 printf(&DAT_000115f1,0x32);
 return;
}



/* Function: param_by_value_int @ 000109c4 */

int param_by_value_int(int x)

{
 return x << 1;
}



/* Function: call_by_value_int @ 000109cc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_int(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: int result@[???] */
 return 0xf;
}



/* Function: param_by_value_ptr @ 000109d4 */

int param_by_value_ptr(int *p)

{
 *p = *p << 1;
 return 1;
}



/* Function: call_by_value_ptr @ 000109e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_ptr(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: int result@[???]
 Unresolved local var: int * ptr@[???] */
 return 0xb;
}



/* Function: param_array_decay @ 000109f0 */

int param_array_decay(int *arr,int n)

{
 return 4;
}



/* Function: call_array_decay @ 000109f8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_array_decay(void)

{
 /* Unresolved local var: int[10] array@[???] */
 return 4;
}



/* Function: param_string @ 00010a00 */

int param_string(char *str)

{
 return (uint)(byte)str[1] + (uint)(byte)*str;
}



/* Function: call_string_param @ 00010a10 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_param(void)

{
 return 0xad;
}



/* Function: param_ptr_array @ 00010a18 */

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



/* Function: call_ptr_array @ 00010a48 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ptr_array(void)

{
 /* Unresolved local var: char *[3] strs@[???] */
 return 300;
}



/* Function: param_varargs @ 00010a50 */

int param_varargs(int count,...)

{
 int *piVar1;
 int iVar2;
 int local_c [3];
 
 /* Unresolved local var: va_list args@[???]
 Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (0 < count) {
 iVar2 = 0;
 piVar1 = local_c;
 do {
 count = count + -1;
 iVar2 = *piVar1 + iVar2;
 piVar1 = piVar1 + 1;
 } while (count != 0);
 return iVar2;
 }
 return 0;
}



/* Function: call_varargs_param @ 00010aa8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_varargs_param(void)

{
 int iVar1;
 
 iVar1 = param_varargs(4,10,0x14,0x1e,0x28);
 return iVar1;
}



/* Function: param_func_ptr @ 00010ad8 */

int param_func_ptr(_func_int_int *callback,int x)

{
 int iVar1;
 
 iVar1 = (*callback)(x);
 return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 00010af8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_func_ptr_param(void)

{
 return 0x14;
}



/* Function: param_double_ptr @ 00010b00 */

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



/* Function: call_double_ptr @ 00010b28 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_double_ptr(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: int * ptr@[???]
 Unresolved local var: int result@[???] */
 return 0x15;
}



/* Function: param_complex_cast @ 00010b30 */

int param_complex_cast(void *p,int type)

{
 if (type == 1) {
 /* Unresolved local var: TestIntPair * s@[???] */
 return *(int *)((int)p + 4) + *(int *)p;
 }
 /* Unresolved local var: int * int_ptr@[DW_OP_reg0(r0)]
 Unresolved local var: int * back_ptr@[DW_OP_reg0(r0)]
 Unresolved local var: char * char_ptr@[DW_OP_reg0(r0)] */
 if (type != 0) {
 return -1;
 }
 return *(int *)p;
}



/* Function: call_complex_cast @ 00010b64 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_complex_cast(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: TestIntPair pair@[???] */
 return 0x12345678;
}



/* Function: param_struct_byval @ 00010b70 */

int param_struct_byval(BigStruct s)

{
 s.data[0xf] = s.data[0xf];
 s.data[0] = s.data[0] + s.data[0xf];
 return s.data[0];
}



/* Function: call_struct_byval @ 00010b7c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_struct_byval(void)

{
 /* Unresolved local var: BigStruct s@[???] */
 return 0xf;
}



/* Function: param_order_dep @ 00010b84 */

int param_order_dep(int a,int b)

{
 return b + a;
}



/* Function: call_order_dep @ 00010b8c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_order_dep(void)

{
 /* Unresolved local var: int i@[???] */
 return 3;
}



/* Function: test_parameter_passing @ 00010b94 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_parameter_passing(void)

{
 int iVar1;
 
 puts(&DAT_000117f7);
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
 printf("PARAM-L3-04: %d\n",0xf);
 printf("PARAM-L3-05: %d\n",3);
 return;
}



/* Function: ret_basic_type @ 00010cb0 */

int ret_basic_type(int x)

{
 return x << 1;
}



/* Function: call_ret_basic @ 00010cb8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_basic(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: int result@[???] */
 return 0x2a;
}



/* Function: ret_pointer @ 00010cc0 */

int * ret_pointer(int *p)

{
 return p + 1;
}



/* Function: call_ret_pointer @ 00010cc8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_pointer(void)

{
 /* Unresolved local var: int[3] arr@[???]
 Unresolved local var: int * ptr@[???] */
 return 0x14;
}



/* Function: ret_small_struct @ 00010cd0 */

SmallPoint * ret_small_struct(SmallPoint *__return_storage_ptr__,int x,int y)

{
 /* Unresolved local var: SmallPoint p@[DW_OP_breg0(r0): 0] */
 __return_storage_ptr__->x = x;
 __return_storage_ptr__->y = y;
 return __return_storage_ptr__;
}



/* Function: call_ret_small_struct @ 00010cd8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_small_struct(void)

{
 /* Unresolved local var: SmallPoint p@[???] */
 return 7;
}



/* Function: ret_large_struct @ 00010ce0 */

LargeData * ret_large_struct(LargeData *__return_storage_ptr__,int seed)

{
 /* Unresolved local var: LargeData d@[DW_OP_breg0(r0): 0] */
 /* Unresolved local var: int i@[???] */
 __return_storage_ptr__->data[0xc] = seed + 0xc;
 __return_storage_ptr__->data[0xf] = seed + 0xf;
 __return_storage_ptr__->data[8] = seed + 8;
 __return_storage_ptr__->data[9] = seed + 9;
 __return_storage_ptr__->data[10] = seed + 10;
 __return_storage_ptr__->data[0xb] = seed + 0xb;
 __return_storage_ptr__->data[0xd] = seed + 0xd;
 __return_storage_ptr__->data[0xe] = seed + 0xe;
 __return_storage_ptr__->data[0] = seed;
 __return_storage_ptr__->data[1] = seed + 1;
 __return_storage_ptr__->data[2] = seed + 2;
 __return_storage_ptr__->data[3] = seed + 3;
 __return_storage_ptr__->data[4] = seed + 4;
 __return_storage_ptr__->data[5] = seed + 5;
 __return_storage_ptr__->data[6] = seed + 6;
 __return_storage_ptr__->data[7] = seed + 7;
 return __return_storage_ptr__;
}



/* Function: call_ret_large_struct @ 00010d54 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_large_struct(void)

{
 /* Unresolved local var: LargeData d@[???] */
 return 0xd7;
}



/* Function: func_a @ 00010d5c */

int func_a(int x)

{
 return x + 10;
}



/* Function: func_b @ 00010d64 */

int func_b(int x)

{
 return x << 1;
}



/* Function: ret_func_ptr @ 00010d6c */

func_ptr_t ret_func_ptr(int selector)

{
 func_ptr_t p_Var1;
 
 p_Var1 = func_b;
 if (selector == 0) {
 p_Var1 = func_a;
 }
 return p_Var1;
}



/* Function: call_ret_func_ptr @ 00010d94 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_func_ptr(void)

{
 /* Unresolved local var: func_ptr_t f@[???] */
 return 10;
}



/* External data for ret_opaque_handle */
int ret_opaque_handle_handle1 = 100;
int ret_opaque_handle_handle2 = 200;

/* Function: ret_opaque_handle @ 00010d9c */

void * ret_opaque_handle(int type)

{
 int *piVar1;
 
 piVar1 = &ret_opaque_handle_handle1;
 if (type != 0) {
 piVar1 = (int *)&ret_opaque_handle_handle2;
 }
 return (double *)piVar1;
}



/* Function: call_ret_opaque @ 00010db8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_opaque(void)

{
 /* Unresolved local var: void * h@[???] */
 return ret_opaque_handle_handle1;
}



/* Function: ret_complex_expr @ 00010dc8 */

int ret_complex_expr(int x,int y,int z)

{
 int iVar1;
 
 iVar1 = z + 10;
 if (y < x) {
 iVar1 = z << 1;
 }
 return iVar1;
}



/* Function: call_ret_complex_expr @ 00010ddc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_complex_expr(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 0x28;
}



/* Function: ret_multi_branch @ 00010de4 */

int ret_multi_branch(int op)

{
 int iVar1;
 
 iVar1 = -1;
 if ((uint)op < 3) {
 iVar1 = op * 10 + 10;
 }
 return iVar1;
}



/* Function: call_ret_multi_branch @ 00010e00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_multi_branch(void)

{
 /* Unresolved local var: int sum@[???] */
 return 0x3c;
}



/* Function: ret_void @ 00010e08 */

void ret_void(int x,int *out)

{
 *out = x * 3;
 return;
}



/* Function: call_ret_void @ 00010e14 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_void(void)

{
 /* Unresolved local var: int result@[???] */
 return 0x15;
}



/* Function: test_return_values @ 00010e1c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_return_values(void)

{
 puts(&DAT_00011818);
 printf(&DAT_000116d9,0x2a);
 printf(&DAT_000116f5,0x14);
 printf(&DAT_00011711,7);
 printf(&DAT_0001172c,0xd7);
 printf(&DAT_00011749,10);
 printf(&DAT_00011765,ret_opaque_handle_handle1);
 printf(&DAT_00011782,0x28);
 printf(&DAT_0001179e,0x3c);
 printf(&DAT_000117ba,0x15);
 return;
}



/* Function: main @ 00010ef0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_calling_conventions();
 test_parameter_passing();
 puts(&DAT_00011818);
 printf(&DAT_000116d9,0x2a);
 printf(&DAT_000116f5,0x14);
 printf(&DAT_00011711,7);
 printf(&DAT_0001172c,0xd7);
 printf(&DAT_00011749,10);
 printf(&DAT_00011765,ret_opaque_handle_handle1);
 printf(&DAT_00011782,0x28);
 printf(&DAT_0001179e,0x3c);
 printf(&DAT_000117ba,0x15);
 return 0;
}
































/* CRT stub function __floatdidf removed by preprocessor */









/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 86 */
