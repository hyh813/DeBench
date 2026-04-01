/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;

typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Additional type definitions for decompiled code */
typedef unsigned char byte;
typedef unsigned int undefined4;
typedef void (*code)(void);

/* Required headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <setjmp.h>

/* Global variables for signal handlers */
static int div_zero_caught = 0;
static int segv_caught = 0;
static jmp_buf jmp_buffer;
static jmp_buf segv_buffer;

/* Global variable for encrypted string */
static char encrypted_0[32] = "Hello, World!";

/* Data references */
static char DAT_00012008[] = "Test Output";
static char DAT_0001212f[] = "%d\n";
static char DAT_0001214b[] = "%d\n";
static char DAT_00012167[] = "%d\n";
static char DAT_00012184[] = "%d\n";
static char DAT_00012038[] = "%d\n";
static char DAT_00012064[] = "%d\n";
static char DAT_0001208c[] = "%d\n";
static char DAT_000120b4[] = "%d\n";
static char DAT_000121a0[] = "%d\n";
static char DAT_000121bc[] = "%d\n";
static char DAT_000121d9[] = "%d\n";
static char DAT_000120d4[] = "%d\n";
static char DAT_000121f6[] = "%d\n";
static char DAT_00012108[] = "%d\n";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/7/7_gcc_O3_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 (*(code *)(void *)0x0)();
 return;
}



/* Function: main @ 000111b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_obf_opt_edge();
 return 0;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 000111fc */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011200 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 00011339 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 0001133d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: div_zero_handler @ 00011350 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

void div_zero_handler(int sig)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 __longjmp_chk((jmp_buf *)jmp_buffer,1);
}



/* Function: segv_handler @ 00011380 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

void segv_handler(int sig)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 __longjmp_chk((jmp_buf *)segv_buffer,1);
}



/* Stub function for invalidInstructionException */

code * invalidInstructionException(void)

{
 return (code *)0;
}



/* Function: param_division_by_zero @ 000113b0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_division_by_zero(int x)

{
 code *pcVar1;
 int iVar2;
 
 signal(8,div_zero_handler);
 iVar2 = _setjmp((jmp_buf *)jmp_buffer);
 if (iVar2 == 0) {
 /* WARNING: Does not return */
 pcVar1 = (code *)invalidInstructionException();
 (*pcVar1)();
 }
 return -1;
}



/* Function: param_division_by_zero_3 @ 00011400 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_division_by_zero_3(int x)

{
 int iVar1;
 
 signal(8,div_zero_handler);
 iVar1 = _setjmp((jmp_buf *)jmp_buffer);
 /* Unresolved local var: int y@[???] */
 return (-(uint)(iVar1 == 0) & 3) - 1;
}



/* Function: param_fake_branch @ 00011440 */

/* WARNING: Unknown calling convention */

int param_fake_branch(int x)

{
 return x;
}



/* Function: call_fake_branch @ 00011450 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fake_branch(void)

{
 return 10;
}



/* Function: param_opaque_predicate @ 00011460 */

int param_opaque_predicate(int x)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 
 iVar1 = x + 1;
 iVar2 = x;
 iVar4 = iVar1;
 if (iVar1 != 0) {
 do {
 /* Unresolved local var: int temp@[???] */
 iVar3 = iVar4;
 iVar4 = iVar2 % iVar3;
 iVar2 = iVar3;
 } while (iVar4 != 0);
 if ((iVar3 == 1) && (x * 2 + 1 + x * x == iVar1 * iVar1)) {
 return x * 2 + 10;
 }
 }
 return x * 3 + 0x14;
}



/* Function: call_opaque_predicate @ 000114c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_opaque_predicate(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 /* Unresolved local var: int p1@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int b@[???]
 Unresolved local var: int p2@[???]
 Unresolved local var: int p3@[???] */
 iVar1 = 5;
 iVar3 = 6;
 do {
 /* Unresolved local var: int temp@[???] */
 iVar2 = iVar3;
 iVar3 = iVar1 % iVar2;
 iVar1 = iVar2;
 } while (iVar3 != 0);
 iVar1 = 0x14;
 if (iVar2 != 1) {
 iVar1 = 0x23;
 }
 return iVar1;
}



/* Function: param_instruction_substitution @ 000114f0 */

/* WARNING: Unknown calling convention */

int param_instruction_substitution(int x)

{
 return x * 0x15 + ((uint)x >> 1) + (x & 0xfU);
}



/* Function: call_instruction_substitution @ 00011520 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_instruction_substitution(void)

{
 return 0xe1;
}



/* Function: decrypt_string @ 00011530 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

char * decrypt_string(char *encrypted,char *buffer,size_t len,char key)

{
 byte bVar1;
 byte *pbVar2;
 
 strncpy(buffer,encrypted,len);
 buffer[len - 1] = '\0';
 bVar1 = *buffer;
 pbVar2 = (byte *)buffer;
 while (bVar1 != 0) {
 *pbVar2 = bVar1 ^ key;
 bVar1 = pbVar2[1];
 pbVar2 = pbVar2 + 1;
 }
 return buffer;
}



/* Function: param_string_encryption @ 00011590 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_string_encryption(void)

{
 int iVar1;
 byte bVar2;
 byte *pbVar3;
 size_t sVar4;
 int in_GS_OFFSET;
 char decrypted [32];
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 /* Unresolved local var: char * p@[???] */
 strncpy(decrypted,(char *)encrypted_0,0x1f);
 decrypted[0x1f] = '\0';
 pbVar3 = (byte *)decrypted;
 bVar2 = decrypted[0];
 while (bVar2 != 0) {
 *pbVar3 = bVar2 ^ 0x5a;
 bVar2 = pbVar3[1];
 pbVar3 = pbVar3 + 1;
 }
 sVar4 = strlen(decrypted);
 if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
 return sVar4 + (int)decrypted[0];
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: call_string_encryption @ 00011630 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_encryption(void)

{
 int iVar1;
 byte bVar2;
 byte *pbVar3;
 size_t sVar4;
 int in_GS_OFFSET;
 char decrypted [32];
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 /* Unresolved local var: char * p@[???] */
 strncpy(decrypted,(char *)&encrypted_0,0x1f);
 decrypted[0x1f] = '\0';
 pbVar3 = (byte *)decrypted;
 bVar2 = decrypted[0];
 while (bVar2 != 0) {
 *pbVar3 = bVar2 ^ 0x5a;
 bVar2 = pbVar3[1];
 pbVar3 = pbVar3 + 1;
 }
 sVar4 = strlen(decrypted);
 if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
 return sVar4 + (int)decrypted[0];
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: param_tail_call_optimized @ 000116d0 */

/* WARNING: Unknown calling convention */

int param_tail_call_optimized(int n,int acc)

{
 if (0 < n) {
 do {
 acc = acc + n;
 n = n + -1;
 } while (n != 0);
 }
 return acc;
}



/* Function: call_tail_call_optimized @ 000116f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_tail_call_optimized(void)

{
 return 0x7a314;
}



/* Function: param_non_tail_call @ 00011700 */

/* WARNING: Unknown calling convention */

int param_non_tail_call(int n)

{
 int iVar1;
 
 iVar1 = 0;
 if (0 < n) {
 do {
 iVar1 = iVar1 + n;
 n = n + -1;
 } while (n != 0);
 }
 return iVar1;
}



/* Function: call_non_tail_call @ 00011720 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_non_tail_call(void)

{
 return 0x13ba;
}



/* Function: param_vectorized_loop @ 00011730 */

int param_vectorized_loop(int *a,int *b,int *c,int n)

{
 int *piVar1;
 int iVar2;
 
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar2 = 0;
 do {
 c[iVar2] = b[iVar2] + a[iVar2];
 iVar2 = iVar2 + 1;
 } while (n != iVar2);
 piVar1 = c + n;
 iVar2 = 0;
 do {
 /* Unresolved local var: int i@[???] */
 iVar2 = iVar2 + *c;
 c = c + 1;
 } while (piVar1 != c);
 return iVar2;
 }
 return 0;
}



/* Function: call_vectorized_loop @ 00011790 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorized_loop(void)

{
 return 0x48;
}



/* Function: param_link_time_optimization @ 000117a0 */

/* WARNING: Unknown calling convention */

int param_link_time_optimization(int x)

{
 return x * 2 + 10;
}



/* Function: call_link_time_optimization @ 000117b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_link_time_optimization(void)

{
 return 0x14;
}



/* Function: param_division_by_zero_2 @ 000117c0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_division_by_zero_2(int x)

{
 int iVar1;
 
 signal(8,div_zero_handler);
 iVar1 = _setjmp((jmp_buf *)jmp_buffer);
 if (iVar1 == 0) {
 /* Unresolved local var: int y@[???] */
 iVar1 = (int)(10 / (long long)x);
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_division_by_zero @ 00011820 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_division_by_zero(void)

{
 int iVar1;
 int iVar2;
 int unaff_EBX;
 
 iVar1 = param_division_by_zero_2(unaff_EBX);
 iVar2 = param_division_by_zero_2(unaff_EBX);
 signal(8,(__sighandler_t)0x0);
 return iVar1 + iVar2;
}



/* Function: param_null_pointer_deref @ 00011860 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_null_pointer_deref(int *p)

{
 int iVar1;
 
 signal(0xb,segv_handler);
 iVar1 = _setjmp((jmp_buf *)segv_buffer);
 if (iVar1 == 0) {
 /* Unresolved local var: int val@[???] */
 iVar1 = *p;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_null_pointer_deref @ 000118b0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_null_pointer_deref(void)

{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 int valid;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 valid = 0x2a;
 iVar1 = param_null_pointer_deref(&valid);
 iVar2 = param_null_pointer_deref((int *)0x0);
 signal(0xb,(__sighandler_t)0x0);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar1 + iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: param_buffer_overflow_stack @ 00011920 */

undefined4 param_buffer_overflow_stack(undefined4 param_1)

{
 return param_1;
}



/* Function: param_buffer_overflow_heap @ 00011930 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_buffer_overflow_heap(int x)

{
 void *__ptr;
 
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 x = -2;
 }
 else {
 free(__ptr);
 }
 return x;
}



/* Function: call_buffer_overflow @ 00011970 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_buffer_overflow(void)

{
 void *__ptr;
 int iVar1;
 
 /* Unresolved local var: char * heap_buffer@[???] */
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 iVar1 = 8;
 }
 else {
 free(__ptr);
 iVar1 = 0x1e;
 }
 return iVar1;
}



/* Function: param_integer_overflow @ 000119b0 */

int param_integer_overflow(int a,int b)

{
 int iVar1;
 
 iVar1 = a + b;
 if ((0 < a) && (0 < b)) {
 if (iVar1 < 0) {
 iVar1 = -1;
 }
 return iVar1;
 }
 if (((a & b) < 0) && (0 < iVar1)) {
 iVar1 = -2;
 }
 return iVar1;
}



/* Function: call_integer_overflow @ 000119f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_integer_overflow(void)

{
 return 2000000000;
}



/* Function: param_undefined_behavior @ 00011a00 */

/* WARNING: Unknown calling convention */

int param_undefined_behavior(int i)

{
 return i * 2;
}



/* Function: call_undefined_behavior @ 00011a10 */

undefined4 call_undefined_behavior(void)

{
 return 10;
}



/* Function: param_implementation_defined @ 00011a20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_implementation_defined(void)

{
 return 0x2b;
}



/* Function: call_implementation_defined @ 00011a30 */

undefined4 call_implementation_defined(void)

{
 return 0x2b;
}



/* Function: test_obf_opt_edge @ 00011a40 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_obf_opt_edge(void)

{
 int iVar1;
 byte bVar2;
 byte *pbVar3;
 undefined4 uVar4;
 size_t sVar5;
 int iVar6;
 void *__ptr;
 int iVar7;
 int iVar8;
 int in_GS_OFFSET;
 int valid;
 char decrypted [32];
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_00012008);
 __printf_chk(1,&DAT_0001212f,10);
 /* Unresolved local var: int p1@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int b@[???]
 Unresolved local var: int p2@[???]
 Unresolved local var: int p3@[???] */
 iVar6 = 5;
 iVar8 = 6;
 do {
 /* Unresolved local var: int temp@[???] */
 iVar7 = iVar8;
 iVar8 = iVar6 % iVar7;
 iVar6 = iVar7;
 } while (iVar8 != 0);
 uVar4 = 0x14;
 if (iVar7 != 1) {
 uVar4 = 0x23;
 }
 __printf_chk(1,&DAT_0001214b,uVar4);
 __printf_chk(1,&DAT_00012167,0xe1);
 /* Unresolved local var: char * p@[???] */
 strncpy(decrypted,(char *)encrypted_0,0x1f);
 decrypted[0x1f] = '\0';
 pbVar3 = (byte *)decrypted;
 bVar2 = decrypted[0];
 while (bVar2 != 0) {
 *pbVar3 = bVar2 ^ 0x5a;
 bVar2 = pbVar3[1];
 pbVar3 = pbVar3 + 1;
 }
 sVar5 = strlen(decrypted);
 __printf_chk(1,&DAT_00012184,(int)decrypted[0] + sVar5);
 __printf_chk(1,&DAT_00012038,0x7a314);
 __printf_chk(1,&DAT_00012064,0x13ba);
 iVar6 = call_vectorized_loop();
 __printf_chk(1,&DAT_0001208c,iVar6);
 iVar8 = 1;
 __printf_chk(1,&DAT_000120b4,0x14);
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 iVar6 = param_division_by_zero(iVar8);
 iVar8 = param_division_by_zero(iVar8);
 signal(8,(__sighandler_t)0x0);
 __printf_chk(1,&DAT_000121a0,iVar6 + iVar8);
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 valid = 0x2a;
 iVar6 = param_null_pointer_deref(&valid);
 iVar8 = param_null_pointer_deref((int *)0x0);
 signal(0xb,(__sighandler_t)0x0);
 __printf_chk(1,&DAT_000121bc,iVar6 + iVar8);
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: char * heap_buffer@[???] */
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 uVar4 = 8;
 }
 else {
 free(__ptr);
 uVar4 = 0x1e;
 }
 __printf_chk(1,&DAT_000121d9,uVar4);
 __printf_chk(1,&DAT_000120d4,2000000000);
 __printf_chk(1,&DAT_000121f6,10);
 __printf_chk(1,&DAT_00012108,0x2b);
 if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: __stack_chk_fail_local @ 00011ca0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 49 */
