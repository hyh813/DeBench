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
typedef unsigned long ulong;
typedef unsigned int uint;
typedef unsigned char byte;
typedef void (*code)(void);
typedef unsigned long long undefined8;
typedef unsigned char undefined;
typedef long long longlong;
typedef int (*func_ptr_t)(int);
typedef int (*_func_int_int)(int);

#define CONCAT44(hi, lo) (((unsigned long)(hi) << 32) | (unsigned int)(lo))

typedef struct {
    int x;
    int y;
} SmallPoint;

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
    int data[16];
} LargeData;

typedef struct {
    int a;
    int b;
} TestIntPair;

int handle1_1 = 42;
int handle2_0 = 43;
char completed_0 = 0;
extern void *__dso_handle;
extern void __cxa_finalize(void *);
void deregister_tm_clones(void) { }
char DAT_00101598[] = "=== Calling Conventions Test ===";
char DAT_00101660[] = "CALL-L1-11: %d\n";
char DAT_00101688[] = "CALL-L1-12: %d\n";
char DAT_001016b0[] = "CALL-L1-13: %d\n";
char DAT_001016d8[] = "CALL-L1-14: %d\n";
char DAT_00101700[] = "CALL-L1-15: %d\n";
char DAT_00101730[] = "CALL-L1-16: %d\n";
char DAT_00101760[] = "=== Parameter Passing Test ===";
char DAT_00101890[] = "=== Return Values Test ===";
char DAT_001018b0[] = "RET-L1-01: %d\n";
char DAT_001018d0[] = "RET-L1-02: %d\n";
char DAT_001018f0[] = "RET-L1-03: %d\n";
char DAT_00101910[] = "RET-L1-04: %d\n";
char DAT_00101930[] = "RET-L1-05: %d\n";
char DAT_00101950[] = "RET-L1-06: %d\n";
char DAT_00101970[] = "RET-L1-07: %d\n";
char DAT_00101990[] = "RET-L1-08: %d\n";
char DAT_001019b0[] = "RET-L1-09: %d\n";
extern long ___stack_chk_guard;
extern void __stack_chk_fail(long, int);
extern int __printf_chk(int, const char *, ...);

#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/4/4_gcc_O3_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00100710 @ 00100710 */

void FUN_00100710(void)

{
 ((code)(undefined *)0x0)();
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





/* CRT stub function deregister_tm_clones removed by preprocessor */





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











/* Function: func_b @ 00100a40 */

int func_b(int param_1)

{
 return param_1 << 1;
}



/* Function: cdecl_func @ 00100a50 */

int cdecl_func(int a,int b)

{
 return a + b;
}



/* Function: call_cdecl @ 00100a60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_cdecl(void)

{
 return 0xf;
}



/* Function: stdcall_func @ 00100a70 */

int stdcall_func(int a,int b)

{
 return a * b;
}



/* Function: call_stdcall @ 00100a80 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stdcall(void)

{
 return 0x32;
}



/* Function: fastcall_func @ 00100a90 */

int fastcall_func(int a,int b,int c)

{
 return a + b + c;
}



/* Function: call_fastcall @ 00100aa0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fastcall(void)

{
 return 6;
}



/* Function: call_thiscall @ 00100ab0 */

undefined8 call_thiscall(void)

{
 return 0xf;
}



/* Function: arm_aapcs_func @ 00100ac0 */

int arm_aapcs_func(int a,int b,int c,int d,int e)

{
 return a + b + c + d + e;
}



/* Function: call_arm_aapcs @ 00100ad4 */

undefined8 call_arm_aapcs(void)

{
 return 0xf;
}



/* Function: mips_func @ 00100ae0 */

int mips_func(int a,int b,int c,int d)

{
 return a + b + c + d;
}



/* Function: call_mips @ 00100af0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mips(void)

{
 return 100;
}



/* Function: amd64_sysv_func @ 00100b00 */

int amd64_sysv_func(int a,int b,int c,int d,int e,int f)

{
 return a + b + c + d + e + f;
}



/* Function: call_amd64_sysv @ 00100b20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_amd64_sysv(void)

{
 return 0x15;
}



/* Function: ms_x64_func @ 00100b30 */

int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_ms_x64 @ 00100b44 */

undefined8 call_ms_x64(void)

{
 return 0xf;
}



/* Function: vectorcall_func @ 00100b50 */

int vectorcall_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_1 + param_2 + param_3 + param_4;
}



/* Function: call_vectorcall @ 00100b60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorcall(void)

{
 return 10;
}



/* Function: mixed_conventions_test @ 00100b70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mixed_conventions_test(void)

{
 /* Unresolved local var: int sum@[???] */
 return 0x21;
}



/* Function: varargs_func @ 00100b80 */

int varargs_func(int count,...)

{
 va_list args;
 int sum = 0;
 int i;
 
 va_start(args, count);
 for (i = 0; i < count; i++) {
  sum += va_arg(args, int);
 }
 va_end(args);
 return sum;
}



/* Function: func_no_args @ 00100c80 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int func_no_args(void)

{
 return 0x2a;
}



/* Function: func_many_args @ 00100c90 */

int func_many_args(int a,int b,int c,int d,int e,int f,int g,int h)

{
 return a + b + c + d + e + f + g + h;
}



/* Function: func_mixed_args @ 00100cb0 */

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



/* Function: func_struct_byval @ 00100d00 */

int func_struct_byval(LargeStruct *s)

{
 /* Unresolved local var: longlong sum@[???]
 Unresolved local var: int i@[???] */
 return (int)s->data[0xe] +
 (int)s->data[0xc] +
 (int)s->data[10] +
 (int)s->data[8] + (int)s->data[6] + (int)s->data[4] + (int)s->data[0] + (int)s->data[2] +
 (int)s->data[0xf] +
 (int)s->data[0xd] +
 (int)s->data[0xb] +
 (int)s->data[9] + (int)s->data[7] + (int)s->data[5] + (int)s->data[1] + (int)s->data[3];
}



/* Function: func_struct_byptr @ 00100d40 */

int func_struct_byptr(SmallStruct *p)

{
 if (p != (SmallStruct *)0x0) {
 return p->x * p->y;
 }
 return -1;
}



/* Function: test_calling_conventions @ 00100d60 */

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
 puts(DAT_00101598);
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
 __printf_chk(1,DAT_00101660,iVar1);
 __printf_chk(1,DAT_00101688,0x2a);
 __printf_chk(1,DAT_001016b0,0x24);
 __printf_chk(1,DAT_001016d8,0x75);
 __printf_chk(1,DAT_00101700,0x88);
 __printf_chk(1,DAT_00101730,0x32);
 return;
}



/* Function: param_by_value_int @ 00100ed4 */

int param_by_value_int(int x)

{
 return x << 1;
}



/* Function: call_by_value_int @ 00100ee0 */

undefined8 call_by_value_int(void)

{
 return 0xf;
}



/* Function: param_by_value_ptr @ 00100ef0 */

int param_by_value_ptr(int *p)

{
 *p = *p << 1;
 return 1;
}



/* Function: call_by_value_ptr @ 00100f10 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_ptr(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: int * ptr@[???]
 Unresolved local var: int result@[???] */
 return 0xb;
}



/* Function: param_array_decay @ 00100f20 */

int param_array_decay(int *arr,int n)

{
 return 8;
}



/* Function: call_array_decay @ 00100f30 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_array_decay(void)

{
 /* Unresolved local var: int[10] array@[???] */
 return 8;
}



/* Function: param_string @ 00100f40 */

int param_string(char *str)

{
 return (uint)(byte)*str + (uint)(byte)str[1];
}



/* Function: call_string_param @ 00100f50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_param(void)

{
 return 0xad;
}



/* Function: param_ptr_array @ 00100f60 */

int param_ptr_array(char **arr,int n)

{
 int sum = 0;
 int i;
 
 if (0 < n) {
  for (i = 0; i < n; i++) {
   sum += (uint)(byte)*arr[i];
  }
  return sum;
 }
 return 0;
}



/* Function: call_ptr_array @ 00100fa0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ptr_array(void)

{
 /* Unresolved local var: char *[3] strs@[???] */
 return 300;
}



/* Function: param_varargs @ 00100fb0 */

/* WARNING: Variable defined which should be unmapped: args */
/* WARNING: Removing unreachable block (ram,0x001010ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_varargs(int count,...)

{
 va_list args;
 int sum = 0;
 int i;
 
 va_start(args, count);
 for (i = 0; i < count; i++) {
  sum += va_arg(args, int);
 }
 va_end(args);
 return sum;
}



/* Function: call_varargs_param @ 001010b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_varargs_param(void)

{
 int iVar1;
 
 iVar1 = param_varargs(4,10,0x14,0x1e,0x28);
 return iVar1;
}



/* Function: param_func_ptr @ 001010d0 */

int param_func_ptr(_func_int_int *callback,int x)

{
 int iVar1;
 
 iVar1 = (*callback)(x);
 return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 001010f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_func_ptr_param(void)

{
 return 0x14;
}



/* Function: param_double_ptr @ 00101100 */

int param_double_ptr(int **pp,int new_val)

{
 if ((pp != (int **)0x0) && (*pp != (int *)0x0)) {
 **pp = new_val;
 *pp = (int *)0x0;
 return 1;
 }
 return -1;
}



/* Function: call_double_ptr @ 00101130 */

undefined8 call_double_ptr(void)

{
 return 0x15;
}



/* Function: param_complex_cast @ 00101140 */

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



/* Function: call_complex_cast @ 00101170 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_complex_cast(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: TestIntPair pair@[???] */
 return 0x12345678;
}



/* Function: param_struct_byval @ 00101180 */

int param_struct_byval(BigStruct *s)

{
 return s->data[0] + s->data[0xf];
}



/* Function: call_struct_byval @ 00101190 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_struct_byval(void)

{
 /* Unresolved local var: BigStruct s@[???] */
 return 0xf;
}



/* Function: param_order_dep @ 001011a0 */

int param_order_dep(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: call_order_dep @ 001011b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_order_dep(void)

{
 /* Unresolved local var: int i@[???] */
 return 4;
}



/* Function: test_parameter_passing @ 001011c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_parameter_passing(void)

{
 int iVar1;
 
 puts(DAT_00101760);
 __printf_chk(1,"PARAM-L1-01: %d\n",0xf);
 __printf_chk(1,"PARAM-L1-02: %d\n",0xb);
 __printf_chk(1,"PARAM-L2-01: %d\n",8);
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



/* Function: ret_basic_type @ 001012d0 */

int ret_basic_type(int param_1)

{
 return param_1 << 1;
}



/* Function: call_ret_basic @ 001012e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_basic(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: int result@[???] */
 return 0x2a;
}



/* Function: ret_pointer @ 001012f0 */

int * ret_pointer(int *p)

{
 return p + 1;
}



/* Function: call_ret_pointer @ 00101300 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_pointer(void)

{
 /* Unresolved local var: int[3] arr@[???]
 Unresolved local var: int * ptr@[???] */
 return 0x14;
}



/* Function: ret_small_struct @ 00101310 */

SmallPoint ret_small_struct(int x,int y)

{
 SmallPoint SVar1;
 
 SVar1.y = y;
 SVar1.x = x;
 /* Unresolved local var: SmallPoint p@[DW_OP_reg0(x0); DW_OP_piece: 4;
 DW_OP_reg1(x1); DW_OP_piece: 4] */
 return SVar1;
}



/* Function: call_ret_small_struct @ 00101320 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_small_struct(void)

{
 /* Unresolved local var: SmallPoint p@[???] */
 return 7;
}



/* Function: ret_large_struct @ 00101330 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ret_large_struct(LargeData *__return_storage_ptr__,int seed)

{
 long lVar1;
 LargeData d;
 
 lVar1 = ___stack_chk_guard;
 /* Unresolved local var: int i@[???] */
 *(ulong *)(__return_storage_ptr__->data + 2) = CONCAT44(seed + 3,seed + 2);
 *(ulong *)__return_storage_ptr__->data = CONCAT44(seed + 1,seed);
 *(ulong *)(__return_storage_ptr__->data + 6) = CONCAT44(seed + 7,seed + 6);
 *(ulong *)(__return_storage_ptr__->data + 4) = CONCAT44(seed + 5,seed + 4);
 *(ulong *)(__return_storage_ptr__->data + 10) = CONCAT44(seed + 0xb,seed + 10);
 *(ulong *)(__return_storage_ptr__->data + 8) = CONCAT44(seed + 9,seed + 8);
 *(ulong *)(__return_storage_ptr__->data + 0xe) = CONCAT44(seed + 0xf,seed + 0xe);
 *(ulong *)(__return_storage_ptr__->data + 0xc) = CONCAT44(seed + 0xd,seed + 0xc);
 if (lVar1 - ___stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(lVar1 - ___stack_chk_guard,0);
}



/* Function: call_ret_large_struct @ 001013c4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_large_struct(void)

{
 /* Unresolved local var: LargeData d@[???] */
 return 0xd7;
}



/* Function: ret_func_ptr @ 001013d0 */

func_ptr_t ret_func_ptr(int selector)

{
 func_ptr_t p_Var1;
 
 p_Var1 = func_b;
 if (selector == 0) {
 p_Var1 = func_a;
 }
 return p_Var1;
}



/* Function: call_ret_func_ptr @ 001013f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_func_ptr(void)

{
 /* Unresolved local var: func_ptr_t f@[???] */
 return 10;
}



/* Function: ret_opaque_handle @ 00101400 */

void * ret_opaque_handle(int type)

{
 void *puVar1;
 
 puVar1 = (void *)&handle1_1;
 if (type != 0) {
  puVar1 = (void *)&handle2_0;
 }
 return puVar1;
}



/* Function: call_ret_opaque @ 00101420 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_opaque(void)

{
 /* Unresolved local var: void * h@[???] */
 return handle1_1;
}



/* Function: ret_complex_expr @ 00101430 */

int ret_complex_expr(int x,int y,int z)

{
 int iVar1;
 
 iVar1 = z + 10;
 if (y < x) {
 iVar1 = z << 1;
 }
 return iVar1;
}



/* Function: call_ret_complex_expr @ 00101444 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_complex_expr(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 0x28;
}



/* Function: ret_multi_branch @ 00101450 */

int ret_multi_branch(int op)

{
 int iVar1;
 
 iVar1 = (op + 1) * 10;
 if (2 < (uint)op) {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_ret_multi_branch @ 00101470 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_multi_branch(void)

{
 /* Unresolved local var: int sum@[???] */
 return 0x3c;
}



/* Function: ret_void @ 00101480 */

void ret_void(int x,int *out)

{
 *out = x * 3;
 return;
}



/* Function: call_ret_void @ 00101490 */

undefined8 call_ret_void(void)

{
 return 0x15;
}



/* Function: test_return_values @ 001014a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_return_values(void)

{
 puts(DAT_00101890);
 __printf_chk(1,DAT_001018b0,0x2a);
 __printf_chk(1,DAT_001018d0,0x14);
 __printf_chk(1,DAT_001018f0,7);
 __printf_chk(1,DAT_00101910,0xd7);
 __printf_chk(1,DAT_00101930,10);
 /* Unresolved local var: void * h@[???] */
 __printf_chk(1,DAT_00101950,handle1_1);
 __printf_chk(1,DAT_00101970,0x28);
 __printf_chk(1,DAT_00101990,0x3c);
 __printf_chk(1,DAT_001019b0,0x15);
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 81 */
