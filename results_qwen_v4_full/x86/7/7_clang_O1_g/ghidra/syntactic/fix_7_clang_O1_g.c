/* Auto-injected type definitions by preprocessor */
/* Custom type definitions removed - system headers provide these */

#define _POSIX_C_SOURCE 200809L

/* Define undefined type for Ghidra decompilation compatibility */
typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned char byte;
typedef unsigned int uint;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <setjmp.h>
#include <stdint.h>
#include <stddef.h>
#include <unistd.h>

/* sighandler_t is typically defined in signal.h on some systems */
/* We use explicit casts (void (*)(int)) for portability */

/* Define signal constants if not already defined */
#ifndef SIG_DFL
#define SIG_DFL (void (*)(int))0
#endif
#ifndef SIG_IGN
#define SIG_IGN (void (*)(int))1
#endif
#ifndef SIG_ERR
#define SIG_ERR (void (*)(int))-1
#endif
#ifndef SIGFPE
#define SIGFPE 8
#endif
#ifndef SIGSEGV
#define SIGSEGV 11
#endif

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/7/7_clang_O1_g
 * Processor: x86
 * Compiler Spec: gcc
 */

/* Global variable declarations */
int div_zero_caught = 0;
int segv_caught = 0;
jmp_buf jmp_buffer;
jmp_buf segv_buffer;
const char encrypted[] = "encrypted_string_data_here";
int DAT_00012028[8] = {1, 2, 3, 4, 5, 6, 7, 8};
int DAT_00012008[8] = {1, 2, 3, 4, 5, 6, 7, 8};
char DAT_00012219[] = "Test Output";
char DAT_00012048[] = "%d\n";
char DAT_00012064[] = "%d\n";
char DAT_00012080[] = "%d\n";
char DAT_0001209d[] = "%d\n";
char DAT_000120b9[] = "%d\n";
char DAT_000120e3[] = "%d\n";
char DAT_00012108[] = "%d\n";
char DAT_0001212e[] = "%d\n";
char DAT_0001214e[] = "%d\n";
char DAT_0001216a[] = "%d\n";
char DAT_00012187[] = "%d\n";
char DAT_000121a4[] = "%d\n";
char DAT_000121d5[] = "%d\n";
char DAT_000121f2[] = "%d\n";

/* Forward declarations for signal handlers */
void div_zero_handler(int sig);
void segv_handler(int sig);

/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 /* Removed null function pointer call - was: (*(code *)(undefined *)0x0)(); */
 return;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 000110fc */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011100 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 00011239 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 0001123d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: param_fake_branch @ 00011250 */

int param_fake_branch(int x)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: char * str@[???] */
 return x;
}



/* Function: call_fake_branch @ 00011260 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fake_branch(void)

{
 return 10;
}



/* Function: param_opaque_predicate @ 00011270 */

int param_opaque_predicate(int x)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 
 /* Unresolved local var: int b@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int p3@[???]
 Unresolved local var: int p1@[???]
 Unresolved local var: int p2@[???] */
 iVar4 = x + 1;
 iVar3 = iVar4;
 iVar2 = x;
 while (iVar1 = iVar3, iVar1 != 0) {
 /* Unresolved local var: int temp@[DW_OP_reg3(EBX)] */
 iVar3 = iVar2 % iVar1;
 iVar2 = iVar1;
 }
 iVar3 = x * 3 + 0x14;
 if (iVar2 == 1 && iVar4 * iVar4 == (x * 2 | 1U) + x * x) {
 iVar3 = x * 2 + 10;
 }
 return iVar3;
}



/* Function: call_opaque_predicate @ 000112d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_opaque_predicate(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 iVar1 = 5;
 iVar3 = 6;
 do {
 iVar2 = iVar3;
 /* Unresolved local var: int b@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int p1@[???]
 Unresolved local var: int p3@[???]
 Unresolved local var: int temp@[DW_OP_reg1(ECX)] */
 iVar3 = iVar1 % iVar2;
 iVar1 = iVar2;
 } while (iVar3 != 0);
 iVar1 = 0x23;
 if (iVar2 == 1) {
 iVar1 = 0x14;
 }
 return iVar1;
}



/* Function: param_instruction_substitution @ 00011300 */

int param_instruction_substitution(int x)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: uint ux@[???]
 Unresolved local var: int div2@[???]
 Unresolved local var: int mod16@[???]
 Unresolved local var: int mul15@[???] */
 return x * 0x15 + (x & 0xfU) + ((unsigned int)x >> 1);
}



/* Function: call_instruction_substitution @ 00011320 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_instruction_substitution(void)

{
 return 0xe1;
}



/* Function: decrypt_string @ 00011330 */

char * decrypt_string(char *encrypted,char *buffer,size_t len,char key)

{
 byte bVar1;
 byte *pbVar2;
 
 /* Unresolved local var: char * p@[???] */
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



/* Function: param_string_encryption @ 00011390 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_string_encryption(void)

{
 byte bVar1;
 size_t sVar2;
 byte *pbVar3;
 byte local_28 [31];
 undefined1 local_9;
 
 /* Unresolved local var: char[32] decrypted@[???] */
 /* Unresolved local var: char * p@[???] */
 strncpy((char *)local_28,encrypted,0x20);
 local_9 = 0;
 if (local_28[0] != 0) {
 pbVar3 = local_28;
 bVar1 = local_28[0];
 do {
 pbVar3 = pbVar3 + 1;
 pbVar3[-1] = bVar1 ^ 0x5a;
 bVar1 = *pbVar3;
 } while (bVar1 != 0);
 }
 sVar2 = strlen((char *)local_28);
 return sVar2 + (int)(char)local_28[0];
}



/* Function: call_string_encryption @ 00011400 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_encryption(void)

{
 byte bVar1;
 size_t sVar2;
 byte *pbVar3;
 byte local_28 [31];
 undefined1 local_9;
 
 /* Unresolved local var: char[32] decrypted@[???] */
 /* Unresolved local var: char * p@[???] */
 strncpy((char *)local_28,encrypted,0x20);
 local_9 = 0;
 if (local_28[0] != 0) {
 pbVar3 = local_28;
 bVar1 = local_28[0];
 do {
 pbVar3 = pbVar3 + 1;
 pbVar3[-1] = bVar1 ^ 0x5a;
 bVar1 = *pbVar3;
 } while (bVar1 != 0);
 }
 sVar2 = strlen((char *)local_28);
 return sVar2 + (int)(char)local_28[0];
}



/* Function: param_tail_call_optimized @ 00011470 */

int param_tail_call_optimized(int n,int acc)

{
 if (0 < n) {
 acc = param_tail_call_optimized(n + -1,acc + n);
 }
 return acc;
}



/* Function: call_tail_call_optimized @ 000114b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_tail_call_optimized(void)

{
 int iVar1;
 
 iVar1 = param_tail_call_optimized(1000,0);
 return iVar1;
}



/* Function: param_non_tail_call @ 000114e0 */

int param_non_tail_call(int n)

{
 int iVar1;
 
 if (n < 1) {
 iVar1 = 0;
 }
 else {
 iVar1 = param_non_tail_call(n + -1);
 iVar1 = iVar1 + n;
 }
 return iVar1;
}



/* Function: call_non_tail_call @ 00011510 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_non_tail_call(void)

{
 int iVar1;
 
 iVar1 = param_non_tail_call(100);
 return iVar1;
}



/* Function: param_vectorized_loop @ 00011540 */

int param_vectorized_loop(int *a,int *b,int *c,int n)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar2 = 0;
 do {
 c[iVar2] = b[iVar2] + a[iVar2];
 iVar2 = iVar2 + 1;
 } while (n != iVar2);
 }
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar2 = 0;
 }
 else {
 iVar1 = 0;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + c[iVar1];
 iVar1 = iVar1 + 1;
 } while (n != iVar1);
 }
 return iVar2;
}



/* Function: call_vectorized_loop @ 000115a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorized_loop(void)

{
 int iVar1;
 int *piVar2;
 int iVar3;
 int *piVar4;
 int local_24 [8];
 
 /* Unresolved local var: int[8] c@[???]
 Unresolved local var: int[8] a@[???]
 Unresolved local var: int[8] b@[???] */
 local_24[7] = 0;
 local_24[6] = 0;
 local_24[5] = 0;
 local_24[4] = 0;
 local_24[3] = 0;
 local_24[2] = 0;
 local_24[1] = 0;
 local_24[0] = 0;
 iVar1 = 0;
 piVar2 = &DAT_00012028;
 piVar4 = &DAT_00012008;
 do {
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[DW_OP_reg0(EAX)] */
 local_24[iVar1] = *piVar2 + *piVar4;
 iVar1 = iVar1 + 1;
 piVar2 = piVar2 + 1;
 piVar4 = piVar4 + 1;
 } while (iVar1 != 8);
 iVar3 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + local_24[iVar3];
 iVar3 = iVar3 + 1;
 } while (iVar3 != 8);
 return iVar1;
}



/* Function: param_link_time_optimization @ 00011630 */

int param_link_time_optimization(int x)

{
 return x * 2 + 10;
}



/* Function: call_link_time_optimization @ 00011640 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_link_time_optimization(void)

{
 return 0x14;
}



/* Function: div_zero_handler @ 00011650 */

void div_zero_handler(int sig)

{
 (void)sig; /* Suppress unused parameter warning */
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(jmp_buffer,1);
}



/* Function: param_division_by_zero @ 00011680 */

int param_division_by_zero(int x)

{
 int iVar1;
 int iVar2;
 
 signal(SIGFPE,(void (*)(int))div_zero_handler);
 iVar1 = setjmp(jmp_buffer);
 iVar2 = -1;
 if (iVar1 == 0) {
 /* Unresolved local var: int y@[???] */
 iVar2 = (int)(10 / (long long)x);
 }
 return iVar2;
}



/* Function: call_division_by_zero @ 000116e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_division_by_zero(void)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(SIGFPE,SIG_DFL);
 return iVar2 + iVar1;
}



/* Function: segv_handler @ 00011730 */

void segv_handler(int sig)

{
 (void)sig; /* Suppress unused parameter warning */
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(segv_buffer,1);
}



/* Function: param_null_pointer_deref @ 00011760 */

int param_null_pointer_deref(int *p)

{
 int iVar1;
 int iVar2;
 
 signal(SIGSEGV,(void (*)(int))segv_handler);
 iVar1 = setjmp(segv_buffer);
 iVar2 = -1;
 if (iVar1 == 0) {
 /* Unresolved local var: int val@[???] */
 iVar2 = *p;
 }
 return iVar2;
}



/* Function: call_null_pointer_deref @ 000117b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_null_pointer_deref(void)

{
 int iVar1;
 int iVar2;
 int local_10;
 
 /* Unresolved local var: int valid@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 local_10 = 0x2a;
 iVar1 = param_null_pointer_deref(&local_10);
 iVar2 = param_null_pointer_deref((int *)0x0);
 signal(SIGSEGV,SIG_DFL);
 return iVar2 + iVar1;
}



/* Function: param_buffer_overflow_stack @ 00011810 */

int param_buffer_overflow_stack(int x)

{
 /* Unresolved local var: int canary@[???]
 Unresolved local var: char[8] buffer@[???] */
 return x;
}



/* Function: param_buffer_overflow_heap @ 00011820 */

int param_buffer_overflow_heap(int x)

{
 /* Unresolved local var: char * heap_buffer@[???] */
 return x;
}



/* Function: call_buffer_overflow @ 00011830 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_buffer_overflow(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 0x1e;
}



/* Function: param_integer_overflow @ 00011840 */

int param_integer_overflow(int a,int b)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: uint ua@[???]
 Unresolved local var: uint ub@[???]
 Unresolved local var: uint unsigned_sum@[???]
 Unresolved local var: int signed_sum@[???] */
 iVar1 = b + a;
 if (((0 < a) && (0 < b)) && (iVar1 < 0)) {
 return -1;
 }
 iVar2 = -2;
 if (iVar1 < 1) {
 iVar2 = iVar1;
 }
 if (-1 < (b & a)) {
 iVar2 = iVar1;
 }
 return iVar2;
}



/* Function: call_integer_overflow @ 00011870 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_integer_overflow(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 2000000000;
}



/* Function: param_undefined_behavior @ 00011880 */

int param_undefined_behavior(int i)

{
 /* Unresolved local var: int local@[???] */
 return i * 2;
}



/* Function: call_undefined_behavior @ 00011890 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_undefined_behavior(void)

{
 /* Unresolved local var: int result@[???] */
 return 10;
}



/* Function: param_implementation_defined @ 000118a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_implementation_defined(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: char c@[???]
 Unresolved local var: int s@[???]
 Unresolved local var: anon_struct_4_3_4e909822 bitfield@[???] */
 return 0x2b;
}



/* Function: call_implementation_defined @ 000118b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_implementation_defined(void)

{
 return 0x2b;
}



/* Function: test_obf_opt_edge @ 000118c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_obf_opt_edge(void)

{
 byte bVar1;
 size_t sVar2;
 int iVar3;
 undefined4 uVar4;
 byte *pbVar5;
 int *piVar6;
 int iVar7;
 int iVar8;
 int *piVar9;
 byte local_30 [28];
 uint local_14;
 
 puts(&DAT_00012219);
 printf(&DAT_00012048,10);
 iVar3 = 5;
 iVar8 = 6;
 do {
 iVar7 = iVar8;
 /* Unresolved local var: int b@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int p1@[???]
 Unresolved local var: int p3@[???]
 Unresolved local var: int temp@[DW_OP_reg1(ECX)] */
 iVar8 = iVar3 % iVar7;
 iVar3 = iVar7;
 } while (iVar8 != 0);
 uVar4 = 0x23;
 if (iVar7 == 1) {
 uVar4 = 0x14;
 }
 printf(&DAT_00012064,uVar4);
 printf(&DAT_00012080,0xe1);
 /* Unresolved local var: char[32] decrypted@[???]
 Unresolved local var: char * p@[???] */
 strncpy((char *)local_30,encrypted,0x20);
 local_14 = 0;
 local_14 = local_14 & 0xffffff;
 if (local_30[0] != 0) {
 pbVar5 = local_30;
 bVar1 = local_30[0];
 do {
 pbVar5 = pbVar5 + 1;
 pbVar5[-1] = bVar1 ^ 0x5a;
 bVar1 = *pbVar5;
 } while (bVar1 != 0);
 }
 sVar2 = strlen((char *)local_30);
 printf(&DAT_0001209d,(int)(char)local_30[0] + sVar2);
 iVar3 = param_tail_call_optimized(1000,0);
 printf(&DAT_000120b9,iVar3);
 iVar3 = param_non_tail_call(100);
 printf(&DAT_000120e3,iVar3);
 /* Unresolved local var: int[8] c@[???] */
 local_14 = 0;
 local_30[0x18] = 0;
 local_30[0x19] = 0;
 local_30[0x1a] = 0;
 local_30[0x1b] = 0;
 local_30[0x14] = 0;
 local_30[0x15] = 0;
 local_30[0x16] = 0;
 local_30[0x17] = 0;
 local_30[0x10] = 0;
 local_30[0x11] = 0;
 local_30[0x12] = 0;
 local_30[0x13] = 0;
 local_30[0xc] = 0;
 local_30[0xd] = 0;
 local_30[0xe] = 0;
 local_30[0xf] = 0;
 local_30[8] = 0;
 local_30[9] = 0;
 local_30[10] = 0;
 local_30[0xb] = 0;
 local_30[4] = 0;
 local_30[5] = 0;
 local_30[6] = 0;
 local_30[7] = 0;
 local_30[0] = 0;
 local_30[1] = 0;
 local_30[2] = 0;
 local_30[3] = 0;
 iVar3 = 0;
 piVar6 = &DAT_00012028;
 piVar9 = &DAT_00012008;
 do {
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[DW_OP_reg0(EAX)] */
 *(int *)(local_30 + iVar3 * 4) = *piVar6 + *piVar9;
 iVar3 = iVar3 + 1;
 piVar6 = piVar6 + 1;
 piVar9 = piVar9 + 1;
 } while (iVar3 != 8);
 iVar8 = 0;
 iVar3 = 0;
 do {
 iVar3 = iVar3 + *(int *)(local_30 + iVar8 * 4);
 iVar8 = iVar8 + 1;
 } while (iVar8 != 8);
 printf(&DAT_00012108,iVar3);
 printf(&DAT_0001212e,0x14);
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 iVar3 = param_division_by_zero(5);
 iVar8 = param_division_by_zero(0);
 signal(SIGFPE,SIG_DFL);
 printf(&DAT_0001214e,iVar8 + iVar3);
 local_30[0] = 0x2a;
 local_30[1] = 0;
 local_30[2] = 0;
 local_30[3] = 0;
 /* Unresolved local var: int valid@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 iVar3 = param_null_pointer_deref((int *)local_30);
 iVar8 = param_null_pointer_deref((int *)0x0);
 signal(SIGSEGV,SIG_DFL);
 printf(&DAT_0001216a,iVar8 + iVar3);
 printf(&DAT_00012187,0x1e);
 printf(&DAT_000121a4,2000000000);
 printf(&DAT_000121d5,10);
 printf(&DAT_000121f2,0x2b);
 return;
}



/* Function: main @ 00011ba0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_obf_opt_edge();
 return 0;
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 46 */
