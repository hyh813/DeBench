#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdint.h>

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
typedef unsigned long uint64_t;
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
typedef long int64_t;
#endif

typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
#ifndef intmax_t
#endif
typedef unsigned long ulong;
typedef unsigned int uint;

/* Ghidra-specific type definitions */
typedef unsigned char undefined;
typedef uint32_t undefined4;
typedef uint64_t undefined8;
typedef int (*code)(void);

/* Structure definition used by struct_byval functions */
typedef struct {
    long data[16];
} struct_16_long;

/* Forward declarations and definitions for opaque handles */
extern uint64_t ret_opaque_handle_handle1;
extern uint64_t ret_opaque_handle_handle2;

/* Global variables for opaque handle test - moved before usage */
uint64_t ret_opaque_handle_handle1 = 0x12345678ULL;
uint64_t ret_opaque_handle_handle2 = 0x1234567890ULL;

/* String data definitions - moved before usage */
const char DAT_0010234e[] = "=== Testing Calling Conventions ===\n";
const char DAT_001020a4[] = "CALL-L1-11: %lu\n";
const char DAT_001020cc[] = "CALL-L2-01: %d\n";
const char DAT_001020ee[] = "CALL-L2-02: %d\n";
const char DAT_00102115[] = "CALL-L2-03: %d\n";
const char DAT_0010213d[] = "CALL-L2-04: %ld\n";
const char DAT_00102169[] = "CALL-L2-05: %d\n";
const char DAT_0010236f[] = "=== Testing Parameter Passing ===\n";
const char DAT_00102251[] = "RET-L1-01: %d\n";
const char DAT_0010226d[] = "RET-L1-02: %d\n";
const char DAT_00102289[] = "RET-L1-03: %d\n";
const char DAT_001022a4[] = "RET-L1-04: %d\n";
const char DAT_001022c1[] = "RET-L1-05: %d\n";
const char DAT_001022dd[] = "RET-L1-06: 0x%lx\n";
const char DAT_001022fa[] = "RET-L1-07: %d\n";
const char DAT_00102316[] = "RET-L1-08: %d\n";
const char DAT_00102332[] = "RET-L1-09: %d\n";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/4/4_clang_O1_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 /* Null pointer call removed - decompilation artifact */
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: cdecl_func @ 00101160 */

int cdecl_func(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: call_cdecl @ 00101170 */

undefined8 call_cdecl(void)

{
 return 0xf;
}



/* Function: stdcall_func @ 00101180 */

int stdcall_func(int param_1,int param_2)

{
 return param_1 * param_2;
}



/* Function: call_stdcall @ 00101190 */

undefined8 call_stdcall(void)

{
 return 0x32;
}



/* Function: fastcall_func @ 001011a0 */

int fastcall_func(int param_1,int param_2,int param_3)

{
 return param_1 + param_2 + param_3;
}



/* Function: call_fastcall @ 001011b0 */

undefined8 call_fastcall(void)

{
 return 6;
}



/* Function: call_thiscall @ 001011c0 */

undefined8 call_thiscall(void)

{
 return 0xf;
}



/* Function: arm_aapcs_func @ 001011d0 */

int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_arm_aapcs @ 001011e0 */

undefined8 call_arm_aapcs(void)

{
 return 0xf;
}



/* Function: mips_func @ 001011f0 */

int mips_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_1 + param_2 + param_3 + param_4;
}



/* Function: call_mips @ 00101200 */

undefined8 call_mips(void)

{
 return 100;
}



/* Function: amd64_sysv_func @ 00101210 */

int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6;
}



/* Function: call_amd64_sysv @ 00101220 */

undefined8 call_amd64_sysv(void)

{
 return 0x15;
}



/* Function: ms_x64_func @ 00101230 */

int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_ms_x64 @ 00101240 */

undefined8 call_ms_x64(void)

{
 return 0xf;
}



/* Function: vectorcall_func @ 00101250 */

int vectorcall_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_1 + param_2 + param_3 + param_4;
}



/* Function: call_vectorcall @ 00101260 */

undefined8 call_vectorcall(void)

{
 return 10;
}



/* Function: mixed_conventions_test @ 00101270 */

undefined8 mixed_conventions_test(void)

{
 return 0x21;
}



/* Function: varargs_func @ 00101280 */

int varargs_func(int param_1, ...)

{
 va_list args;
 int iVar1;
 int iVar3;
 
 va_start(args, param_1);
 iVar1 = 0;
 iVar3 = param_1;
 if (iVar3 > 0) {
 do {
 iVar1 += va_arg(args, int);
 iVar3--;
 } while (iVar3 != 0);
 }
 va_end(args);
 return iVar1;
}



/* Function: func_no_args @ 00101340 */

undefined8 func_no_args(void)

{
 return 0x2a;
}



/* Function: func_many_args @ 00101350 */

int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
 int param_7,int param_8)

{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}



/* Function: func_mixed_args @ 00101370 */

int func_mixed_args(double param_1,int param_2,char *param_3,long param_4)

{
 int iVar1;
 size_t sVar2;
 
 if (param_3 == (char *)0x0) {
 iVar1 = 0;
 }
 else {
 sVar2 = strlen(param_3);
 iVar1 = (int)sVar2;
 }
 return (int)((double)param_4 + (double)(iVar1 + param_2) + param_1);
}



/* Function: func_struct_byval @ 001013c0 */

long func_struct_byval(struct_16_long param_1)

{
 long lVar1;
 long lVar2;
 
 lVar2 = 0;
 lVar1 = 0;
 do {
 lVar1 = lVar1 + param_1.data[lVar2];
 lVar2 = lVar2 + 1;
 } while (lVar2 != 0x10);
 return lVar1;
}



/* Function: func_struct_byptr @ 001013e0 */

int func_struct_byptr(int *param_1)

{
 if (param_1 != (int *)0x0) {
 return param_1[1] * *param_1;
 }
 return -1;
}



/* Function: test_calling_conventions @ 00101400 */

void test_calling_conventions(void)

{
 uint uVar1;
 long lVar2;
 long lVar3;
 long alStack_88 [17];
 
 puts(DAT_0010234e);
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
 uVar1 = varargs_func(5,1,2,3,4,5);
 printf(DAT_001020a4,(ulong)uVar1);
 printf(DAT_001020cc,0x2a);
 printf(DAT_001020ee,0x24);
 printf(DAT_00102115,0x75);
 lVar2 = 1;
 do {
 alStack_88[lVar2] = lVar2;
 lVar2 = lVar2 + 1;
 } while (lVar2 != 0x11);
 lVar2 = 0;
 lVar3 = 0;
 do {
 lVar3 = lVar3 + alStack_88[lVar2 + 1];
 lVar2 = lVar2 + 1;
 } while (lVar2 != 0x10);
 printf(DAT_0010213d,lVar3);
 printf(DAT_00102169,0x32);
 return;
}



/* Function: param_by_value_int @ 001015b0 */

int param_by_value_int(int param_1)

{
 return param_1 * 2;
}



/* Function: call_by_value_int @ 001015c0 */

undefined8 call_by_value_int(void)

{
 return 0xf;
}



/* Function: param_by_value_ptr @ 001015d0 */

undefined8 param_by_value_ptr(int *param_1)

{
 *param_1 = *param_1 << 1;
 return 1;
}



/* Function: call_by_value_ptr @ 001015e0 */

undefined8 call_by_value_ptr(void)

{
 return 0xb;
}



/* Function: param_array_decay @ 001015f0 */

undefined8 param_array_decay(void)

{
 return 8;
}



/* Function: call_array_decay @ 00101600 */

undefined8 call_array_decay(void)

{
 return 8;
}



/* Function: param_string @ 00101610 */

int param_string(char *param_1)

{
 return (int)param_1[1] + (int)*param_1;
}



/* Function: call_string_param @ 00101620 */

undefined8 call_string_param(void)

{
 return 0xad;
}



/* Function: param_ptr_array @ 00101630 */

int param_ptr_array(long param_1,uint param_2)

{
 int iVar1;
 ulong uVar2;
 
 if (0 < (int)param_2) {
 uVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + **(char **)(param_1 + uVar2 * 8);
 uVar2 = uVar2 + 1;
 } while (param_2 != uVar2);
 return iVar1;
 }
 return 0;
}



/* Function: call_ptr_array @ 00101660 */

undefined8 call_ptr_array(void)

{
 return 300;
}



/* Function: param_varargs @ 00101670 */

int param_varargs(int param_1, ...)

{
 va_list args;
 int iVar1;
 int iVar3;
 
 va_start(args, param_1);
 iVar1 = 0;
 iVar3 = param_1;
 if (iVar3 > 0) {
 do {
 iVar1 += va_arg(args, int);
 iVar3--;
 } while (iVar3 != 0);
 }
 va_end(args);
 return iVar1;
}



/* Function: call_varargs_param @ 00101730 */

void call_varargs_param(void)

{
 param_varargs(4,10,0x14,0x1e,0x28);
}



/* Function: param_func_ptr @ 00101760 */

int param_func_ptr(code param_1,undefined4 param_2)

{
 int iVar1;
 
 iVar1 = ((int (*)(int))param_1)(param_2);
 return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 00101770 */

undefined8 call_func_ptr_param(void)

{
 return 0x14;
}



/* Function: param_double_ptr @ 00101780 */

undefined8 param_double_ptr(uintptr_t *param_1,undefined4 param_2)

{
 undefined8 uVar1;
 
 uVar1 = 0xffffffff;
 if ((param_1 != (uintptr_t *)0x0) && ((undefined4 *)*param_1 != (undefined4 *)0x0)) {
 *(undefined4 *)*param_1 = param_2;
 *param_1 = 0;
 uVar1 = 1;
 }
 return uVar1;
}



/* Function: call_double_ptr @ 001017b0 */

undefined8 call_double_ptr(void)

{
 return 0x15;
}



/* Function: param_complex_cast @ 001017c0 */

int param_complex_cast(int *param_1,int param_2)

{
 int iVar1;
 
 if (param_2 == 1) {
 iVar1 = param_1[1] + *param_1;
 }
 else {
 iVar1 = -1;
 if (param_2 == 0) {
 return *param_1;
 }
 }
 return iVar1;
}



/* Function: call_complex_cast @ 001017e0 */

undefined8 call_complex_cast(void)

{
 return 0x12345678;
}



/* Function: param_struct_byval @ 001017f0 */

int param_struct_byval(void)

{
 long in_stack_00000040;
 
 return (int)(in_stack_00000040 >> 32) + (int)in_stack_00000040;
}



/* Function: call_struct_byval @ 00101800 */

int call_struct_byval(void)

{
 long lVar1;
 int local_40 [16];
 
 lVar1 = 0;
 do {
 local_40[lVar1] = (int)lVar1;
 lVar1 = lVar1 + 1;
 } while (lVar1 != 0x10);
 return local_40[0xf] + local_40[0];
}



/* Function: param_order_dep @ 00101830 */

int param_order_dep(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: call_order_dep @ 00101840 */

undefined8 call_order_dep(void)

{
 return 3;
}



/* Function: test_parameter_passing @ 00101850 */

void test_parameter_passing(void)

{
 uint uVar1;
 long lVar2;
 int local_48 [16];
 
 puts("=== Testing Parameter Passing ===\n");
 lVar2 = 0;
 printf("PARAM-L1-01: %d\n",0xf);
 printf("PARAM-L1-02: %d\n",0xb);
 printf("PARAM-L2-01: %d\n",8);
 printf("PARAM-L2-02: %d\n",0xad);
 printf("PARAM-L2-03: %d\n",300);
 uVar1 = param_varargs(4,10,0x14,0x1e,0x28);
 printf("PARAM-L2-04: %d\n",(ulong)uVar1);
 printf("PARAM-L3-01: %d\n",0x14);
 printf("PARAM-L3-02: %d\n",0x15);
 printf("PARAM-L3-03: %d\n",0x12345678);
 do {
 local_48[lVar2] = (int)lVar2;
 lVar2 = lVar2 + 1;
 } while (lVar2 != 0x10);
 printf("PARAM-L3-04: %d\n",(ulong)(uint)(local_48[0xf] + local_48[0]));
 printf("PARAM-L3-05: %d\n",3);
 return;
}



/* Function: ret_basic_type @ 00101970 */

int ret_basic_type(int param_1)

{
 return param_1 * 2;
}



/* Function: call_ret_basic @ 00101980 */

undefined8 call_ret_basic(void)

{
 return 0x2a;
}



/* Function: ret_pointer @ 00101990 */

void *ret_pointer(long param_1)

{
 return (void *)(param_1 + 4);
}



/* Function: call_ret_pointer @ 001019a0 */

undefined8 call_ret_pointer(void)

{
 return 0x14;
}



/* Function: ret_small_struct @ 001019b0 */

long ret_small_struct(uint param_1,long param_2)

{
 return (long)param_1 | param_2 << 0x20;
}



/* Function: call_ret_small_struct @ 001019c0 */

undefined8 call_ret_small_struct(void)

{
 return 7;
}



/* Function: ret_large_struct @ 001019d0 */

long ret_large_struct(long param_1,int param_2)

{
 long lVar1;
 
 lVar1 = 0;
 do {
 *(int *)(param_1 + lVar1 * 4) = param_2 + (int)lVar1;
 lVar1 = lVar1 + 1;
 } while (lVar1 != 0x10);
 return param_1;
}



/* Function: call_ret_large_struct @ 00101a00 */

int call_ret_large_struct(void)

{
 long lVar1;
 int local_40 [16];
 
 lVar1 = 0;
 do {
 local_40[lVar1] = (int)lVar1 + 100;
 lVar1 = lVar1 + 1;
 } while (lVar1 != 0x10);
 return local_40[0xf] + local_40[0];
}



/* Function: func_a @ 00101a30 */

uintptr_t func_a(void)

{
 return 10;
}



/* Function: func_b @ 00101a40 */

uintptr_t func_b(void)

{
 return 20;
}



/* Function: ret_func_ptr @ 00101a50 */

uintptr_t ret_func_ptr(int param_1)

{
 uintptr_t puVar1;
 
 puVar1 = func_b();
 if (param_1 == 0) {
 puVar1 = func_a();
 }
 return puVar1;
}



/* Function: call_ret_func_ptr @ 00101a70 */

undefined8 call_ret_func_ptr(void)

{
 return 10;
}



/* Function: ret_opaque_handle @ 00101a80 */

uintptr_t ret_opaque_handle(int param_1)

{
 uintptr_t puVar1;
 
 puVar1 = ret_opaque_handle_handle2;
 if (param_1 == 0) {
 puVar1 = ret_opaque_handle_handle1;
 }
 return puVar1;
}



/* Function: call_ret_opaque @ 00101aa0 */

undefined8 call_ret_opaque(void)

{
 return ret_opaque_handle_handle1;
}



/* Function: ret_complex_expr @ 00101ab0 */

int ret_complex_expr(int param_1,int param_2,int param_3)

{
 int iVar1;
 
 iVar1 = param_3 + 10;
 if (param_2 < param_1) {
 iVar1 = param_3 * 2;
 }
 return iVar1;
}



/* Function: call_ret_complex_expr @ 00101ac0 */

undefined8 call_ret_complex_expr(void)

{
 return 0x28;
}



/* Function: ret_multi_branch @ 00101ad0 */

int ret_multi_branch(uint param_1)

{
 int iVar1;
 
 iVar1 = -1;
 if (param_1 < 3) {
 iVar1 = param_1 * 10 + 10;
 }
 return iVar1;
}



/* Function: call_ret_multi_branch @ 00101af0 */

undefined8 call_ret_multi_branch(void)

{
 return 0x3c;
}



/* Function: ret_void @ 00101b00 */

void ret_void(int param_1,int *param_2)

{
 *param_2 = param_1 * 3;
 return;
}



/* Function: call_ret_void @ 00101b10 */

undefined8 call_ret_void(void)

{
 return 0x15;
}



/* Function: test_return_values @ 00101b20 */

void test_return_values(void)

{
 long lVar1;
 int local_48 [16];
 
 puts("=== Testing Return Values ===\n");
 lVar1 = 0;
 printf(DAT_00102251,0x2a);
 printf(DAT_0010226d,0x14);
 printf(DAT_00102289,7);
 do {
 local_48[lVar1] = (int)lVar1 + 100;
 lVar1 = lVar1 + 1;
 } while (lVar1 != 0x10);
 printf(DAT_001022a4,(ulong)(uint)(local_48[0xf] + local_48[0]));
 printf(DAT_001022c1,10);
 printf(DAT_001022dd,(ulong)ret_opaque_handle_handle1);
 printf(DAT_001022fa,0x28);
 printf(DAT_00102316,0x3c);
 printf(DAT_00102332,0x15);
 return;
}



/* Function: main @ 00101c00 */

int main(void)

{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */


/* Total functions decompiled: 77 */
