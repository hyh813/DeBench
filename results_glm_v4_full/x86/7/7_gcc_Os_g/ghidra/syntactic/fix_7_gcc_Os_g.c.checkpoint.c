

#include <setjmp.h>
#include <signal.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/7/7_gcc_Os_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */

/* Global variables for signal handling */
int div_zero_caught = 0;
jmp_buf jmp_buffer;
int segv_caught = 0;
jmp_buf segv_buffer;

/* Data variables */
int DAT_00012020[8] = {1, 2, 3, 4, 5, 6, 7, 8};
int DAT_00012040[8] = {10, 20, 30, 40, 50, 60, 70, 80};
char DAT_00012060[] = "Test program";
char DAT_0001208d[] = "";
char DAT_000120a9[] = "";
char DAT_000120c5[] = "";
char DAT_000120e2[] = "";
char DAT_000120fe[] = "";
char DAT_00012128[] = "";
char DAT_0001214d[] = "";
char DAT_00012173[] = "";
char DAT_00012193[] = "";
char DAT_000121af[] = "";
char DAT_000121cc[] = "";
char DAT_000121e9[] = "";
char DAT_0001221a[] = "";
char DAT_00012237[] = "";

/* Encrypted string for param_string_encryption */
static char encrypted_string[] = "Encrypted test string data\x00";


/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 /* Removed invalid function pointer call to NULL */
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



/* Function: div_zero_handler @ 00011341 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

void div_zero_handler(int sig)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 __longjmp_chk(jmp_buffer,1);
}



/* Function: segv_handler @ 0001136f */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

void segv_handler(int sig)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 __longjmp_chk(segv_buffer,1);
}



/* Function: param_fake_branch @ 0001139d */

/* WARNING: Unknown calling convention */

int param_fake_branch(int x)

{
 return x;
}



/* Function: call_fake_branch @ 000113a9 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fake_branch(void)

{
 return 10;
}



/* Function: param_opaque_predicate @ 000113b3 */

int param_opaque_predicate(int x)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 
 iVar1 = x + 1;
 iVar2 = x;
 iVar4 = iVar1;
 while (iVar4 != 0) {
 /* Unresolved local var: int temp@[???] */
 iVar3 = iVar2 % iVar4;
 iVar2 = iVar4;
 iVar4 = iVar3;
 }
 if ((iVar2 != 1) || (iVar2 = x * 2 + 10, x * 2 + 1 + x * x != iVar1 * iVar1)) {
 iVar2 = x * 3 + 0x14;
 }
 return iVar2;
}



/* Function: call_opaque_predicate @ 000113fd */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_opaque_predicate(void)

{
 int iVar1;
 
 iVar1 = param_opaque_predicate(5);
 return iVar1;
}



/* Function: param_instruction_substitution @ 00011413 */

/* WARNING: Unknown calling convention */

int param_instruction_substitution(int x)

{
 return x * 0x15 + ((uint)x >> 1) + (x & 0xfU);
}



/* Function: call_instruction_substitution @ 00011434 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_instruction_substitution(void)

{
 return 0xe1;
}



/* Function: decrypt_string @ 0001143e */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

char * decrypt_string(char *encrypted,char *buffer,size_t len,char key)

{
 unsigned char *pbVar1;
 
 strncpy(buffer,encrypted,len);
 buffer[len - 1] = '\0';
 for (pbVar1 = (unsigned char *)buffer; *pbVar1 != 0; pbVar1 = pbVar1 + 1) {
 *pbVar1 = *pbVar1 ^ key;
 }
 return buffer;
}



/* Function: param_string_encryption @ 00011491 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_string_encryption(void)

{
 int iVar1;
 size_t sVar2;
 int iVar3;
 int in_GS_OFFSET;
 char decrypted [32];
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 decrypt_string(encrypted_string,decrypted,0x20,'Z');
 sVar2 = strlen(decrypted);
 iVar3 = sVar2 + (int)decrypted[0];
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar3 = __stack_chk_fail_local();
 }
 return iVar3;
}



/* Function: call_string_encryption @ 000114f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_encryption(void)

{
 int iVar1;
 
 iVar1 = param_string_encryption();
 return iVar1;
}



/* Function: param_tail_call_optimized @ 000114f6 */

/* WARNING: Unknown calling convention */

int param_tail_call_optimized(int n,int acc)

{
 for (; 0 < n; n = n + -1) {
 acc = acc + n;
 }
 return acc;
}



/* Function: call_tail_call_optimized @ 0001150e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_tail_call_optimized(void)

{
 return 0x7a314;
}



/* Function: param_non_tail_call @ 00011518 */

/* WARNING: Unknown calling convention */

int param_non_tail_call(int n)

{
 int iVar1;
 
 iVar1 = 0;
 for (; 0 < n; n = n + -1) {
 iVar1 = iVar1 + n;
 }
 return iVar1;
}



/* Function: call_non_tail_call @ 00011531 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_non_tail_call(void)

{
 int iVar1;
 
 iVar1 = param_non_tail_call(100);
 return iVar1;
}



/* Function: param_vectorized_loop @ 00011547 */

int param_vectorized_loop(int *a,int *b,int *c,int n)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int i@[???] */
 for (iVar1 = 0; iVar1 < n; iVar1 = iVar1 + 1) {
 c[iVar1] = b[iVar1] + a[iVar1];
 }
 iVar2 = 0;
 /* Unresolved local var: int i@[???] */
 for (iVar1 = 0; iVar1 < n; iVar1 = iVar1 + 1) {
 iVar2 = iVar2 + c[iVar1];
 }
 return iVar2;
}



/* Function: call_vectorized_loop @ 00011584 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorized_loop(void)

{
 int iVar1;
 int iVar2;
 int *piVar3;
 int *piVar4;
 int in_GS_OFFSET;
 int a [8];
 int b [8];
 int c [8];
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 piVar3 = &DAT_00012020;
 piVar4 = a;
 for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
 *piVar4 = *piVar3;
 piVar3 = piVar3 + 1;
 piVar4 = piVar4 + 1;
 }
 piVar3 = &DAT_00012040;
 piVar4 = b;
 for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
 *piVar4 = *piVar3;
 piVar3 = piVar3 + 1;
 piVar4 = piVar4 + 1;
 }
 piVar3 = c;
 for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
 *piVar3 = 0;
 piVar3 = piVar3 + 1;
 }
 iVar2 = param_vectorized_loop(a,b,c,8);
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar2 = __stack_chk_fail_local();
 }
 return iVar2;
}



/* Function: param_link_time_optimization @ 000115fd */

/* WARNING: Unknown calling convention */

int param_link_time_optimization(int x)

{
 return (x + 5) * 2;
}



/* Function: call_link_time_optimization @ 0001160e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_link_time_optimization(void)

{
 return 0x14;
}



/* Function: param_division_by_zero @ 00011618 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_division_by_zero(int x)

{
 int iVar1;
 int iVar2;
 
 signal(8,div_zero_handler);
 iVar1 = _setjmp(jmp_buffer);
 iVar2 = -1;
 if (iVar1 == 0) {
 /* Unresolved local var: int y@[???] */
 iVar2 = (int)(10 / (long long)x);
 }
 return iVar2;
}



/* Function: call_division_by_zero @ 00011668 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_division_by_zero(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 return iVar1 + iVar2;
}



/* Function: param_null_pointer_deref @ 000116ad */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_null_pointer_deref(int *p)

{
 int iVar1;
 int iVar2;
 
 signal(0xb,segv_handler);
 iVar1 = _setjmp(segv_buffer);
 iVar2 = -1;
 if (iVar1 == 0) {
 /* Unresolved local var: int val@[???] */
 iVar2 = *p;
 }
 return iVar2;
}



/* Function: call_null_pointer_deref @ 000116f9 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_null_pointer_deref(void)

{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 int valid;
 int local_20;
 uint32_t uStack_14;
 
 uStack_14 = 0x11708;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 valid = 0x2a;
 iVar1 = param_null_pointer_deref(&valid);
 iVar2 = param_null_pointer_deref((int *)0x0);
 signal(0xb,(__sighandler_t)0x0);
 iVar1 = iVar1 + iVar2;
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local();
 }
 return iVar1;
}



/* Function: param_buffer_overflow_stack @ 00011763 */

uint32_t param_buffer_overflow_stack(uint32_t param_1)

{
 return param_1;
}



/* Function: param_buffer_overflow_heap @ 0001176f */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_buffer_overflow_heap(int x)

{
 void *__ptr;
 int iVar1;
 
 __ptr = malloc(0x10);
 iVar1 = -2;
 if (__ptr != (void *)0x0) {
 free(__ptr);
 iVar1 = x;
 }
 return iVar1;
}



/* Function: call_buffer_overflow @ 000117ae */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_buffer_overflow(void)

{
 int iVar1;
 
 iVar1 = param_buffer_overflow_heap(0x14);
 return iVar1 + 10;
}



/* Function: param_integer_overflow @ 000117c4 */

int param_integer_overflow(int a,int b)

{
 int iVar1;
 
 iVar1 = a + b;
 if ((a < 1) || (b < 1)) {
 if (((a & b) < 0) && (0 < iVar1)) {
 iVar1 = -2;
 }
 }
 else if (iVar1 < 0) {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_integer_overflow @ 000117f8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_integer_overflow(void)

{
 return 2000000000;
}



/* Function: param_undefined_behavior @ 00011802 */

/* WARNING: Unknown calling convention */

int param_undefined_behavior(int i)

{
 return i * 2;
}



/* Function: call_undefined_behavior @ 00011810 */

uint32_t call_undefined_behavior(void)

{
 return 10;
}



/* Function: param_implementation_defined @ 0001181a */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_implementation_defined(void)

{
 return 0x2b;
}



/* Function: call_implementation_defined @ 00011824 */

uint32_t call_implementation_defined(void)

{
 return 0x2b;
}



/* Function: test_obf_opt_edge @ 0001182e */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_obf_opt_edge(void)

{
 int iVar1;
 
 puts(&DAT_00012060);
 __printf_chk(1,&DAT_0001208d,10);
 iVar1 = call_opaque_predicate();
 __printf_chk(1,&DAT_000120a9,iVar1);
 __printf_chk(1,&DAT_000120c5,0xe1);
 iVar1 = param_string_encryption();
 __printf_chk(1,&DAT_000120e2,iVar1);
 iVar1 = call_tail_call_optimized();
 __printf_chk(1,&DAT_000120fe,iVar1);
 iVar1 = call_non_tail_call();
 __printf_chk(1,&DAT_00012128,iVar1);
 iVar1 = call_vectorized_loop();
 __printf_chk(1,&DAT_0001214d,iVar1);
 __printf_chk(1,&DAT_00012173,0x14);
 iVar1 = call_division_by_zero();
 __printf_chk(1,&DAT_00012193,iVar1);
 iVar1 = call_null_pointer_deref();
 __printf_chk(1,&DAT_000121af,iVar1);
 iVar1 = call_buffer_overflow();
 __printf_chk(1,&DAT_000121cc,iVar1);
 __printf_chk(1,&DAT_000121e9,2000000000);
 __printf_chk(1,&DAT_0001221a,10);
 __printf_chk(1,&DAT_00012237,0x2b);
 return;
}



/* Function: __stack_chk_fail_local @ 00011990 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 47 */
