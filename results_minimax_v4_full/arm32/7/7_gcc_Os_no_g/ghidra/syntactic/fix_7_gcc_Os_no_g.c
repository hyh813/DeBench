/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
/* size_t and ssize_t defined in stddef.h/stdlib.h */
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Ghidra type aliases */
typedef unsigned int undefined4;
typedef unsigned char undefined1;
typedef unsigned int uint;
typedef unsigned char byte;

/* Signal handler type */
typedef void (*sighandler_t)(int);
#include <signal.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* GNU extension printf_chk */
int __printf_chk(int flag, const char *format, ...);

/* Stack protection functions */
void __attribute__((noreturn)) __stack_chk_fail(void);

#include <setjmp.h>

/* String constants from binary */
char DAT_00010fd8[] = "=== Testing Obfuscation Optimizations ===\n";
char DAT_00011005[] = "Opaque Predicate Test: %d\n";
char DAT_00011021[] = "Opaque Predicate Result: %d\n";
char DAT_0001103d[] = "Instruction Substitution: %d\n";
char DAT_0001105a[] = "String Encryption: %d\n";
char DAT_00011076[] = "Tail Call Optimized: %d\n";
char DAT_000110a0[] = "Non-tail Call: %d\n";
char DAT_000110c5[] = "Vectorized Loop: %d\n";
char DAT_000110eb[] = "LTO Result: %d\n";
char DAT_0001110b[] = "Division by Zero: %d\n";
char DAT_00011127[] = "Null Pointer Deref: %d\n";
char DAT_00011144[] = "Buffer Overflow: %d\n";
char DAT_00011161[] = "Integer Overflow: %u\n";
char DAT_00011192[] = "Undefined Behavior: %d\n";
char DAT_000111af[] = "Implementation Defined: %d\n";

/* Global variables for signal handlers */
int div_zero_caught = 0;
int segv_caught = 0;

/* Global jump buffer for exception handling */
jmp_buf jmp_buffer;
jmp_buf segv_buffer;

/* Encrypted string for string encryption test */
char encrypted_0[] = "\x3c\x20\x3a\x28\x24\x20\x3a\x28\x24\x20\x3a\x28\x24\x20\x3a\x28\x24\x20\x3a\x28\x24\x20\x3a\x28\x24\x20\x3a\x28\x24\x20\x3a\x28\x24\x20\x3a\x28\x24\x20\x3a\x28\x24\x20\x3a\x28";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/7/7_gcc_Os_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: main @ 000105dc */

undefined4 main(void)

{
 test_obf_opt_edge();
 return 0;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: div_zero_handler @ 000106e4 */

void div_zero_handler(void)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(jmp_buffer, 1);
}



/* Function: segv_handler @ 000106fc */

void segv_handler(void)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(jmp_buffer, 1);
}



/* Function: param_fake_branch @ 00010718 */

void param_fake_branch(void)

{
 return;
}



/* Function: call_fake_branch @ 0001071c */

undefined4 call_fake_branch(void)

{
 return 10;
}



/* Function: param_opaque_predicate @ 00010724 */

int param_opaque_predicate(int param_1)

{
 int iVar1;
 int extraout_r1;
 int iVar2;
 int iVar3;
 
 iVar3 = param_1 + 1;
 iVar2 = iVar3 * iVar3;
 iVar1 = param_1;
 while (iVar3 != 0) {
 __aeabi_idivmod(iVar1,iVar3);
 iVar1 = iVar3;
 iVar3 = extraout_r1;
 }
 if (iVar1 == 1 && param_1 * param_1 + param_1 * 2 + 1 == iVar2) {
 iVar1 = param_1 * 2 + 10;
 }
 else {
 iVar1 = param_1 * 3 + 0x14;
 }
 return iVar1;
}



/* Function: call_opaque_predicate @ 0001078c */

void call_opaque_predicate(void)

{
 param_opaque_predicate(5);
 return;
}



/* Function: param_instruction_substitution @ 00010794 */

int param_instruction_substitution(uint param_1)

{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}



/* Function: call_instruction_substitution @ 000107b4 */

undefined4 call_instruction_substitution(void)

{
 return 0xe1;
}



/* Function: decrypt_string @ 000107bc */

char * decrypt_string(char *param_1,char *param_2,size_t param_3,byte param_4)

{
 byte *pbVar1;
 
 strncpy(param_2,param_1,param_3);
 param_2[param_3 - 1] = '\0';
 pbVar1 = (byte *)(param_2 + -1);
 while( true ) {
 pbVar1 = pbVar1 + 1;
 if (*pbVar1 == 0) break;
 *pbVar1 = *pbVar1 ^ param_4;
 }
 return param_2;
}



/* Function: param_string_encryption @ 00010808 */

int param_string_encryption(void)

{
 size_t sVar1;
 byte local_2c [32];
 int local_c;
 
 local_c = 0;
 decrypt_string(&encrypted_0,local_2c,0x20,0x5a);
 sVar1 = strlen((char *)local_2c);
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 while(1) {}  /* Ensure we never return */
 }
 return (int)sVar1;
}

/* Function: param_tail_call_optimized @ 00010874 */

int param_tail_call_optimized(int param_1,int param_2)

{
 for (; 0 < param_1; param_1 = param_1 + -1) {
 param_2 = param_2 + param_1;
 }
 return param_2;
}



/* Function: call_tail_call_optimized @ 00010890 */

undefined4 call_tail_call_optimized(void)

{
 return 0x7a314;
}



/* Function: param_non_tail_call @ 0001089c */

int param_non_tail_call(int param_1)

{
 int iVar1;
 
 iVar1 = 0;
 for (; 0 < param_1; param_1 = param_1 + -1) {
 iVar1 = iVar1 + param_1;
 }
 return iVar1;
}



/* Function: call_non_tail_call @ 000108b8 */

int call_non_tail_call(void)

{
 return param_non_tail_call(100);
}



/* Function: param_vectorized_loop @ 000108c0 */

int param_vectorized_loop(int param_1,int param_2,int param_3,int param_4)

{
 int iVar1;
 int iVar2;
 
 iVar2 = 0;
 if (param_4 < 1) {
 iVar1 = 0;
 for (iVar2 = iVar1; iVar2 < param_4; iVar2 = iVar2 + 1) {
 iVar1 = iVar1 + *(int *)(param_3 + iVar2 * 4);
 }
 return iVar1;
 }
 do {
 *(int *)(param_3 + iVar2 * 4) = *(int *)(param_1 + iVar2 * 4) + *(int *)(param_2 + iVar2 * 4);
 iVar2 = iVar2 + 1;
 } while (iVar2 < param_4);
 iVar2 = 0;
 for (iVar1 = 0; iVar1 < param_4; iVar1 = iVar1 + 1) {
 iVar2 = iVar2 + *(int *)(param_3 + iVar1 * 4);
 }
 return iVar2;
}



/* Function: call_vectorized_loop @ 0001092c */

void call_vectorized_loop(void)

{
 undefined4 local_6c;
 undefined4 uStack_68;
 undefined4 uStack_64;
 undefined4 uStack_60;
 undefined4 local_5c;
 undefined4 uStack_58;
 undefined4 uStack_54;
 undefined4 uStack_50;
 undefined4 local_4c;
 undefined4 uStack_48;
 undefined4 uStack_44;
 undefined4 uStack_40;
 undefined4 local_3c;
 undefined4 uStack_38;
 undefined4 uStack_34;
 undefined4 uStack_30;
 undefined1 auStack_2c [32];
 int local_c;
 
 local_c = 0;
 local_6c = 1;
 uStack_68 = 2;
 uStack_64 = 3;
 uStack_60 = 4;
 local_5c = 5;
 uStack_58 = 6;
 uStack_54 = 7;
 uStack_50 = 8;
 local_4c = 8;
 uStack_48 = 7;
 uStack_44 = 6;
 uStack_40 = 5;
 local_3c = 4;
 uStack_38 = 3;
 uStack_34 = 2;
 uStack_30 = 1;
 memset(auStack_2c,0,0x20);
 param_vectorized_loop(&local_6c,&local_4c,auStack_2c,8);
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}



/* Function: param_link_time_optimization @ 000109c4 */

int param_link_time_optimization(int param_1)

{
 return (param_1 + 5) * 2;
}



/* Function: call_link_time_optimization @ 000109d0 */

undefined4 call_link_time_optimization(void)

{
 return 0x14;
}



/* Function: param_division_by_zero @ 000109d8 */

undefined4 param_division_by_zero(undefined4 param_1)

{
 int iVar1;
 undefined4 uVar2;
 
 signal(8,div_zero_handler);
 iVar1 = setjmp(jmp_buffer);
 if (iVar1 == 0) {
 uVar2 = __aeabi_idiv(10,param_1);
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}



/* Function: call_division_by_zero @ 00010a1c */

int call_division_by_zero(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8, (sighandler_t)NULL);
 return iVar1 + iVar2;
}



/* Function: param_null_pointer_deref @ 00010a4c */

undefined4 param_null_pointer_deref(undefined4 *param_1)

{
 int iVar1;
 undefined4 uVar2;
 
 signal(0xb,segv_handler);
 iVar1 = setjmp(segv_buffer);
 if (iVar1 == 0) {
 uVar2 = *param_1;
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}



/* Function: call_null_pointer_deref @ 00010a88 */

void call_null_pointer_deref(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
 int iVar1;
 int iVar2;
 undefined4 local_18;
 int local_14;
 undefined4 uStack_10;
 
 local_14 = 0;
 local_18 = 0x2a;
 uStack_10 = param_3;
 iVar1 = param_null_pointer_deref(&local_18);
 (void)param_null_pointer_deref(0);
 signal(0xb, (sighandler_t)NULL);
 if (local_14 != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}



/* Function: param_buffer_overflow_stack @ 00010af4 */

void param_buffer_overflow_stack(void)

{
 return;
}



/* Function: param_buffer_overflow_heap @ 00010af8 */

undefined4 param_buffer_overflow_heap(undefined4 param_1)

{
 void *__ptr;
 
 __ptr = malloc(0x10);
 if (__ptr != (void *)0x0) {
 free(__ptr);
 return param_1;
 }
 return 0xfffffffe;
}



/* Function: call_buffer_overflow @ 00010b24 */

int call_buffer_overflow(void)

{
 int iVar1;
 
 iVar1 = param_buffer_overflow_heap(0x14);
 return iVar1 + 10;
}



/* Function: param_integer_overflow @ 00010b38 */

uint param_integer_overflow(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 
 uVar1 = param_1;
 if (0 < (int)param_1) {
 uVar1 = param_2;
 }
 uVar2 = param_1 + param_2;
 if ((int)uVar1 < 1) {
 if (((uint)(0 < (int)uVar2) & (param_1 & param_2) >> 0x1f) != 0) {
 uVar2 = 0xfffffffe;
 }
 return uVar2;
 }
 return uVar2 | (int)uVar2 >> 0x1f;
}



/* Function: call_integer_overflow @ 00010b70 */

undefined4 call_integer_overflow(void)

{
 return 2000000000;
}



/* Function: param_undefined_behavior @ 00010b7c */

int param_undefined_behavior(int param_1)

{
 return param_1 << 1;
}



/* Function: call_undefined_behavior @ 00010b84 */

undefined4 call_undefined_behavior(void)

{
 return 10;
}



/* Function: param_implementation_defined @ 00010b8c */

undefined4 param_implementation_defined(void)

{
 return 0x2c;
}



/* Function: call_implementation_defined @ 00010b94 */

undefined4 call_implementation_defined(void)

{
 return 0x2c;
}



/* Function: test_obf_opt_edge @ 00010b9c */

void test_obf_opt_edge(void)

{
 undefined4 uVar1;
 
 puts(&DAT_00010fd8);
 __printf_chk(1,&DAT_00011005,10);
 uVar1 = call_opaque_predicate();
 __printf_chk(1,&DAT_00011021,uVar1);
 __printf_chk(1,&DAT_0001103d,0xe1);
 uVar1 = param_string_encryption();
 __printf_chk(1,&DAT_0001105a,uVar1);
 uVar1 = call_tail_call_optimized();
 __printf_chk(1,&DAT_00011076,uVar1);
 call_non_tail_call();
 (void)param_non_tail_call(100);
 __printf_chk(1,&DAT_000110a0,0);
 call_vectorized_loop();
 uVar1 = call_division_by_zero();
 __printf_chk(1,&DAT_0001110b,uVar1);
 call_null_pointer_deref(0, 0, 0);
 __printf_chk(1,&DAT_00011127,0xffffffff);
 call_buffer_overflow();
 __printf_chk(1,&DAT_00011144,10);
 __printf_chk(1,&DAT_00011161,2000000000);
 __printf_chk(1,&DAT_00011192,10);
 __printf_chk(1,&DAT_000111af,0x2c);
 return;
}




/* CRT stub function __aeabi_idiv removed by preprocessor */





/* CRT stub function .divsi3_skip_div0_test removed by preprocessor */





/* CRT stub function __aeabi_idivmod removed by preprocessor */




/* Function: __aeabi_idiv0 @ 00010f2c */

void __aeabi_idiv0(void)

{
 raise(8);
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 44 */
