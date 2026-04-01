/* Auto-injected type definitions by preprocessor */
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <setjmp.h>
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;

typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned char byte;
typedef unsigned int undefined;
typedef void (*code)(void);

typedef void (*__sighandler_t)(int);

/* Global variables */
int div_zero_caught = 0;
int segv_caught = 0;
jmp_buf jmp_buffer;
jmp_buf segv_buffer;
char encrypted_0[40];
char DAT_00102008[];
char DAT_00102137[];
char DAT_00102153[];
char DAT_0010216f[];
char DAT_0010218c[];
char DAT_00102038[];
char DAT_00102068[];
char DAT_00102090[];
char DAT_001020b8[];
char DAT_001021a8[];
char DAT_001021c4[];
char DAT_001021e1[];
char DAT_001020d8[];
char DAT_001021fe[];
char DAT_00102110[];

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/7/7_gcc_O1_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: div_zero_handler @ 00101269 */

void div_zero_handler(int param_1)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 __longjmp_chk(jmp_buffer,1);
}



/* Function: segv_handler @ 0010128e */

void segv_handler(int param_1)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 __longjmp_chk(segv_buffer,1);
}



/* Function: param_fake_branch @ 001012b3 */

undefined4 param_fake_branch(undefined4 param_1)

{
 return param_1;
}



/* Function: call_fake_branch @ 001012ba */

undefined8 call_fake_branch(void)

{
 return 10;
}



/* Function: param_opaque_predicate @ 001012c4 */

int param_opaque_predicate(int param_1)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 
 iVar2 = param_1 + 1;
 iVar4 = iVar2;
 iVar1 = param_1;
 if (iVar2 != 0) {
 do {
 iVar3 = iVar4;
 iVar4 = iVar1 % iVar3;
 iVar1 = iVar3;
 } while (iVar4 != 0);
 if ((iVar3 == 1) && (param_1 * 2 + 1 + param_1 * param_1 == iVar2 * iVar2)) {
 return param_1 * 2 + 10;
 }
 }
 return param_1 * 3 + 0x14;
}



/* Function: call_opaque_predicate @ 0010130b */

undefined4 call_opaque_predicate(void)

{
 return param_opaque_predicate(5);
}



/* Function: param_instruction_substitution @ 0010131a */

int param_instruction_substitution(uint param_1)

{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}



/* Function: call_instruction_substitution @ 00101338 */

undefined8 call_instruction_substitution(void)

{
 return 0xe1;
}



/* Function: decrypt_string @ 00101342 */

byte * decrypt_string(char *param_1,byte *param_2,size_t param_3,byte param_4)

{
 byte bVar1;
 byte *pbVar2;
 
 strncpy((char *)param_2,param_1,param_3);
 param_2[param_3 - 1] = 0;
 bVar1 = *param_2;
 pbVar2 = param_2;
 while (bVar1 != 0) {
 *pbVar2 = bVar1 ^ param_4;
 pbVar2 = pbVar2 + 1;
 bVar1 = *pbVar2;
 }
 return param_2;
}



/* Function: param_string_encryption @ 00101385 */

int param_string_encryption(void)

{
 size_t sVar1;
 long in_FS_OFFSET;
 char local_38 [40];
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 decrypt_string(&encrypted_0,local_38,0x20,0x5a);
 sVar1 = strlen(local_38);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return (int)local_38[0] + (int)sVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_string_encryption @ 001013e6 */

void call_string_encryption(void)

{
 param_string_encryption();
 return;
}



/* Function: param_tail_call_optimized @ 001013fd */

ulong param_tail_call_optimized(int param_1,uint param_2)

{
 ulong uVar1;
 
 if (0 < param_1) {
 uVar1 = param_tail_call_optimized(param_1 + -1,param_2 + param_1);
 return uVar1;
 }
 return (ulong)param_2;
}



/* Function: call_tail_call_optimized @ 0010141b */

ulong call_tail_call_optimized(void)

{
 return param_tail_call_optimized(1000,0);
}



/* Function: param_non_tail_call @ 00101437 */

int param_non_tail_call(int param_1)

{
 int iVar1;
 
 if (0 < param_1) {
 iVar1 = param_non_tail_call(param_1 + -1);
 return iVar1 + param_1;
 }
 return 0;
}



/* Function: call_non_tail_call @ 00101454 */

int call_non_tail_call(void)

{
 return param_non_tail_call(100);
}



/* Function: param_vectorized_loop @ 0010146b */

int param_vectorized_loop(long param_1,long param_2,int *param_3,uint param_4)

{
 int *piVar1;
 ulong uVar2;
 int iVar3;
 
 if ((int)param_4 < 1) {
 iVar3 = 0;
 }
 else {
 uVar2 = 0;
 do {
 param_3[uVar2] = *(int *)(param_2 + uVar2 * 4) + *(int *)(param_1 + uVar2 * 4);
 uVar2 = uVar2 + 1;
 } while (uVar2 != param_4);
 piVar1 = param_3 + (ulong)(param_4 - 1) + 1;
 iVar3 = 0;
 do {
 iVar3 = iVar3 + *param_3;
 param_3 = param_3 + 1;
 } while (param_3 != piVar1);
 }
 return iVar3;
}



/* Function: call_vectorized_loop @ 001014b5 */

int call_vectorized_loop(void)

{
 long in_FS_OFFSET;
 undefined4 local_78;
 undefined4 local_74;
 undefined4 local_70;
 undefined4 local_6c;
 undefined4 local_68;
 undefined4 local_64;
 undefined4 local_60;
 undefined4 local_5c;
 undefined4 local_58;
 undefined4 local_54;
 undefined4 local_50;
 undefined4 local_4c;
 undefined4 local_48;
 undefined4 local_44;
 undefined4 local_40;
 undefined4 local_3c;
 undefined8 local_38;
 undefined8 local_30;
 undefined8 local_28;
 undefined8 local_20;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_78 = 1;
 local_74 = 2;
 local_70 = 3;
 local_6c = 4;
 local_68 = 5;
 local_64 = 6;
 local_60 = 7;
 local_5c = 8;
 local_58 = 8;
 local_54 = 7;
 local_50 = 6;
 local_4c = 5;
 local_48 = 4;
 local_44 = 3;
 local_40 = 2;
 local_3c = 1;
 local_38 = 0;
 local_30 = 0;
 local_28 = 0;
 local_20 = 0;
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return param_vectorized_loop(&local_78,&local_58,&local_38,8);
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_link_time_optimization @ 001015a1 */

int param_link_time_optimization(int param_1)

{
 return param_1 * 2 + 10;
}



/* Function: call_link_time_optimization @ 001015aa */

undefined8 call_link_time_optimization(void)

{
 return 0x14;
}



/* Function: param_division_by_zero @ 001015b4 */

ulong param_division_by_zero(int param_1)

{
 int iVar1;
 ulong uVar2;
 
 signal(8,(__sighandler_t)div_zero_handler);
 iVar1 = _setjmp((jmp_buf *)jmp_buffer);
 if (iVar1 == 0) {
 uVar2 = 10 / (ulong)param_1 & 0xffffffff;
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}



/* Function: call_division_by_zero @ 001015fb */

int call_division_by_zero(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 return iVar1 + iVar2;
}



/* Function: param_null_pointer_deref @ 00101636 */

undefined4 param_null_pointer_deref(undefined4 *param_1)

{
 int iVar1;
 undefined4 uVar2;
 
 signal(0xb,(__sighandler_t)segv_handler);
 iVar1 = _setjmp((jmp_buf *)segv_buffer);
 if (iVar1 == 0) {
 uVar2 = *(undefined4 *)param_1;
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}



/* Function: call_null_pointer_deref @ 0010167b */

int call_null_pointer_deref(void)

{
 int iVar1;
 int iVar2;
 long in_FS_OFFSET;
 undefined4 local_24;
 long local_20;
 
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 local_24 = 0x2a;
 iVar1 = param_null_pointer_deref(&local_24);
 iVar2 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0x0);
 if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar1 + iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_buffer_overflow_stack @ 001016e3 */

undefined4 param_buffer_overflow_stack(undefined4 param_1)

{
 return param_1;
}



/* Function: param_buffer_overflow_heap @ 001016ea */

undefined4 param_buffer_overflow_heap(undefined4 param_1)

{
 void *__ptr;
 int iVar1;
 
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 param_1 = 0xfffffffe;
 }
 else {
 iVar1 = 0x21;
 do {
 iVar1 = iVar1 + -1;
 } while (iVar1 != 0);
 free(__ptr);
 }
 return param_1;
}



/* Function: call_buffer_overflow @ 0010171d */

int call_buffer_overflow(void)

{
 int iVar1;
 
 iVar1 = param_buffer_overflow_heap(0x14);
 return iVar1 + 10;
}



/* Function: param_integer_overflow @ 00101737 */

int param_integer_overflow(uint param_1,uint param_2)

{
 int iVar1;
 
 iVar1 = param_1 + param_2;
 if (((int)param_1 < 1 || (int)param_2 < 1) || (-1 < iVar1)) {
 if ((int)(param_1 & param_2) < 0) {
 if (0 < iVar1) {
 iVar1 = -2;
 }
 return iVar1;
 }
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_integer_overflow @ 00101765 */

undefined8 call_integer_overflow(void)

{
 return 2000000000;
}



/* Function: param_undefined_behavior @ 0010176f */

int param_undefined_behavior(int param_1)

{
 return param_1 * 2;
}



/* Function: call_undefined_behavior @ 00101777 */

undefined8 call_undefined_behavior(void)

{
 return 10;
}



/* Function: param_implementation_defined @ 00101781 */

undefined8 param_implementation_defined(void)

{
 return 0x2f;
}



/* Function: call_implementation_defined @ 0010178b */

undefined8 call_implementation_defined(void)

{
 return 0x2f;
}



/* Function: test_obf_opt_edge @ 00101795 */

void test_obf_opt_edge(void)

{
 undefined4 uVar1;
 
 puts(&DAT_00102008);
 __printf_chk(1,&DAT_00102137,10);
 uVar1 = call_opaque_predicate();
 __printf_chk(1,&DAT_00102153,uVar1);
 __printf_chk(1,&DAT_0010216f,0xe1);
 uVar1 = param_string_encryption();
 __printf_chk(1,&DAT_0010218c,uVar1);
 uVar1 = call_tail_call_optimized();
 __printf_chk(1,&DAT_00102038,uVar1);
 uVar1 = call_non_tail_call();
 __printf_chk(1,&DAT_00102068,uVar1);
 uVar1 = call_vectorized_loop();
 __printf_chk(1,&DAT_00102090,uVar1);
 __printf_chk(1,&DAT_001020b8,0x14);
 uVar1 = call_division_by_zero();
 __printf_chk(1,&DAT_001021a8,uVar1);
 uVar1 = call_null_pointer_deref();
 __printf_chk(1,&DAT_001021c4,uVar1);
 uVar1 = call_buffer_overflow();
 __printf_chk(1,&DAT_001021e1,uVar1);
 __printf_chk(1,&DAT_001020d8,2000000000);
 __printf_chk(1,&DAT_001021fe,10);
 __printf_chk(1,&DAT_00102110,0x2f);
 return;
}



/* Function: main @ 00101960 */

undefined8 main(void)

{
 test_obf_opt_edge();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 41 */
