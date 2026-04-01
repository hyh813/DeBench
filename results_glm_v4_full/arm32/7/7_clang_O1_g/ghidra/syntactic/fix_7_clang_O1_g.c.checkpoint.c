#include <setjmp.h>
#include <signal.h>
#include <string.h>
#include <stdio.h>

/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
#ifndef __SIZE_TYPE__
typedef unsigned long size_t;
#endif

typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned char byte;
typedef unsigned char undefined1;
typedef unsigned int undefined4;
typedef unsigned int uint;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/7/7_clang_O1_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* Global variables */
jmp_buf jmp_buffer;
jmp_buf segv_buffer;
int div_zero_caught;
int segv_caught;
int DAT_00011190[8] = {1, 2, 3, 4, 5, 6, 7, 8};
int DAT_00011170[8] = {1, 2, 3, 4, 5, 6, 7, 8};
char param_string_encryption_encrypted[32] = "Test string for encryption";
char DAT_00011381[] = "Testing obfuscation and optimization edge cases:\n";
char DAT_000111b0[] = "Fake branch: %d\n";
char DAT_000111cc[] = "Opaque predicate: %d\n";
char DAT_000111e8[] = "Instruction substitution: %d\n";
char DAT_00011205[] = "String encryption: %d\n";
char DAT_00011221[] = "Tail call optimized: %d\n";
char DAT_0001124b[] = "Non-tail call: %d\n";
char DAT_00011270[] = "Vectorized loop: %d\n";
char DAT_00011296[] = "Link time optimization: %d\n";
char DAT_000112b6[] = "Division by zero: %d\n";
char DAT_000112d2[] = "Null pointer deref: %d\n";
char DAT_000112ef[] = "Buffer overflow: %d\n";
char DAT_0001130c[] = "Integer overflow: %d\n";
char DAT_0001133d[] = "Undefined behavior: %d\n";
char DAT_0001135a[] = "Implementation defined: %d\n";


/* CRT stub function _init removed by preprocessor */





/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_fake_branch @ 000106a4 */

int param_fake_branch(int x)

{
 /* Unresolved local var: int result@[DW_OP_reg0(r0)]
 Unresolved local var: char * str@[???] */
 return x;
}



/* Function: call_fake_branch @ 000106a8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fake_branch(void)

{
 return 10;
}



/* Function: param_opaque_predicate @ 000106b0 */

int param_opaque_predicate(int x)

{
 int iVar1;
 int iVar2;
 int extraout_r1;
 int iVar3;
 int iVar4;
 
 /* Unresolved local var: int b@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int p3@[???]
 Unresolved local var: int p1@[???]
 Unresolved local var: int p2@[???] */
 iVar4 = x + 1;
 iVar2 = x;
 iVar1 = iVar4;
 iVar3 = x;
 if (x != -1) {
 do {
 iVar3 = iVar1;
 /* Unresolved local var: int temp@[DW_OP_reg5(r5)] */
 __aeabi_idivmod(iVar2);
 iVar2 = iVar3;
 iVar1 = extraout_r1;
 } while (extraout_r1 != 0);
 }
 iVar2 = x * 3 + 0x14;
 if (x * x + (x * 2 | 1U) == iVar4 * iVar4 && iVar3 == 1) {
 iVar2 = x * 2 + 10;
 }
 return iVar2;
}



/* Function: call_opaque_predicate @ 00010710 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_opaque_predicate(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int extraout_r1;
 
 iVar2 = 5;
 iVar1 = 6;
 do {
 iVar3 = iVar1;
 /* Unresolved local var: int b@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int p1@[???]
 Unresolved local var: int p3@[???]
 Unresolved local var: int temp@[DW_OP_reg4(r4)] */
 __aeabi_idivmod(iVar2);
 iVar2 = iVar3;
 iVar1 = extraout_r1;
 } while (extraout_r1 != 0);
 iVar2 = 0x23;
 if (iVar3 == 1) {
 iVar2 = 0x14;
 }
 return iVar2;
}



/* Function: param_instruction_substitution @ 00010744 */

int param_instruction_substitution(int x)

{
 /* Unresolved local var: int result@[DW_OP_breg0(r0): 0; DW_OP_lit6; DW_OP_mul;
 DW_OP_stack_value]
 Unresolved local var: uint ux@[DW_OP_reg0(r0)]
 Unresolved local var: int mul15@[???]
 Unresolved local var: int mod16@[???]
 Unresolved local var: int div2@[???] */
 return x * 0x15 + (x & 0xfU) + ((unsigned int)x >> 1);
}



/* Function: call_instruction_substitution @ 0001075c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_instruction_substitution(void)

{
 return 0xe1;
}



/* Function: decrypt_string @ 00010764 */

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



/* Function: param_string_encryption @ 000107c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_string_encryption(void)

{
 byte bVar1;
 byte *pbVar2;
 size_t sVar3;
 byte local_28 [31];
 undefined1 local_9;
 
 /* Unresolved local var: char[32] decrypted@[???] */
 /* Unresolved local var: char * p@[???] */
 pbVar2 = (byte *)strncpy((char *)local_28,param_string_encryption_encrypted,0x20);
 local_9 = 0;
 bVar1 = local_28[0];
 while (bVar1 != 0) {
 *pbVar2 = bVar1 ^ 0x5a;
 bVar1 = pbVar2[1];
 pbVar2 = pbVar2 + 1;
 }
 sVar3 = strlen((char *)local_28);
 return sVar3 + local_28[0];
}



/* Function: call_string_encryption @ 0001082c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_encryption(void)

{
 byte bVar1;
 byte *pbVar2;
 size_t sVar3;
 byte local_28 [31];
 undefined1 local_9;
 
 /* Unresolved local var: char[32] decrypted@[???]
 Unresolved local var: char * p@[???] */
 pbVar2 = (byte *)strncpy((char *)local_28,param_string_encryption_encrypted,0x20);
 local_9 = 0;
 bVar1 = local_28[0];
 while (bVar1 != 0) {
 *pbVar2 = bVar1 ^ 0x5a;
 bVar1 = pbVar2[1];
 pbVar2 = pbVar2 + 1;
 }
 sVar3 = strlen((char *)local_28);
 return sVar3 + local_28[0];
}



/* Function: param_tail_call_optimized @ 00010898 */

int param_tail_call_optimized(int n,int acc)

{
 if (0 < n) {
 acc = param_tail_call_optimized(n + -1,acc + n);
 }
 return acc;
}



/* Function: call_tail_call_optimized @ 000108c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_tail_call_optimized(void)

{
 int iVar1;
 
 iVar1 = param_tail_call_optimized(1000,0);
 return iVar1;
}



/* Function: param_non_tail_call @ 000108d8 */

int param_non_tail_call(int n)

{
 int iVar1;
 
 if (0 < n) {
 iVar1 = param_non_tail_call(n + -1);
 return iVar1 + n;
 }
 return 0;
}



/* Function: call_non_tail_call @ 00010900 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_non_tail_call(void)

{
 int iVar1;
 
 iVar1 = param_non_tail_call(100);
 return iVar1;
}



/* Function: param_vectorized_loop @ 00010914 */

int param_vectorized_loop(int *a,int *b,int *c,int n)

{
 int *piVar1;
 int iVar2;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 piVar1 = c;
 iVar2 = n;
 if (0 < n) {
 do {
 *piVar1 = *b + *a;
 iVar2 = iVar2 + -1;
 a = a + 1;
 b = b + 1;
 piVar1 = piVar1 + 1;
 } while (iVar2 != 0);
 }
 iVar2 = 0;
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 do {
 iVar2 = *c + iVar2;
 n = n + -1;
 c = c + 1;
 } while (n != 0);
 }
 return iVar2;
}



/* Function: call_vectorized_loop @ 00010964 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorized_loop(void)

{
 int iVar1;
 int iVar2;
 int local_28 [8];
 
 /* Unresolved local var: int[8] c@[???]
 Unresolved local var: int[8] a@[???]
 Unresolved local var: int[8] b@[???] */
 iVar1 = 0;
 local_28[7] = 0;
 local_28[6] = 0;
 local_28[5] = 0;
 local_28[4] = 0;
 local_28[3] = 0;
 local_28[2] = 0;
 local_28[1] = 0;
 local_28[0] = 0;
 do {
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[DW_OP_reg0(r0)] */
 local_28[iVar1] = DAT_00011190[iVar1] + DAT_00011170[iVar1];
 iVar1 = iVar1 + 1;
 } while (iVar1 != 8);
 iVar2 = 0;
 iVar1 = 0;
 do {
 /* Unresolved local var: int i@[DW_OP_reg2(r2)] */
 iVar1 = local_28[iVar2] + iVar1;
 iVar2 = iVar2 + 1;
 } while (iVar2 != 8);
 return iVar1;
}



/* Function: param_link_time_optimization @ 000109f0 */

int param_link_time_optimization(int x)

{
 return x * 2 + 10;
}



/* Function: call_link_time_optimization @ 000109fc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_link_time_optimization(void)

{
 return 0x14;
}



/* Function: div_zero_handler @ 00010a04 */

void div_zero_handler(int sig)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(jmp_buffer,1);
}



/* Function: param_division_by_zero @ 00010a2c */

int param_division_by_zero(int x)

{
 int iVar1;
 
 signal(8,div_zero_handler);
 iVar1 = _setjmp(jmp_buffer);
 if (iVar1 != 0) {
 return -1;
 }
 /* Unresolved local var: int y@[???] */
 iVar1 = __divsi3(10,x);
 return iVar1;
}



/* Function: call_division_by_zero @ 00010a84 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_division_by_zero(void)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 return iVar2 + iVar1;
}



/* Function: segv_handler @ 00010ab8 */

void segv_handler(int sig)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(segv_buffer,1);
}



/* Function: param_null_pointer_deref @ 00010ae0 */

int param_null_pointer_deref(int *p)

{
 int iVar1;
 int iVar2;
 
 signal(0xb,segv_handler);
 iVar1 = _setjmp(segv_buffer);
 iVar2 = -1;
 /* Unresolved local var: int val@[???] */
 if (iVar1 == 0) {
 iVar2 = *p;
 }
 return iVar2;
}



/* Function: call_null_pointer_deref @ 00010b24 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_null_pointer_deref(void)

{
 int iVar1;
 int iVar2;
 int local_14;
 
 /* Unresolved local var: int valid@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 local_14 = 0x2a;
 iVar1 = param_null_pointer_deref(&local_14);
 iVar2 = param_null_pointer_deref((int *)0x0);
 signal(0xb,(__sighandler_t)0x0);
 return iVar2 + iVar1;
}



/* Function: param_buffer_overflow_stack @ 00010b68 */

int param_buffer_overflow_stack(int x)

{
 /* Unresolved local var: int canary@[???]
 Unresolved local var: char[8] buffer@[???] */
 return x;
}



/* Function: param_buffer_overflow_heap @ 00010b6c */

int param_buffer_overflow_heap(int x)

{
 /* Unresolved local var: char * heap_buffer@[???] */
 return x;
}



/* Function: call_buffer_overflow @ 00010b70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_buffer_overflow(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 0x1e;
}



/* Function: param_integer_overflow @ 00010b78 */

int param_integer_overflow(int a,int b)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: uint ub@[???]
 Unresolved local var: uint ua@[???]
 Unresolved local var: uint unsigned_sum@[???]
 Unresolved local var: int signed_sum@[???] */
 iVar2 = b + a;
 iVar1 = a;
 if (0 < a) {
 iVar1 = b;
 }
 if ((iVar1 < 1) || (iVar1 = -1, -1 < iVar2)) {
 iVar1 = iVar2;
 if (0 < iVar2) {
 iVar1 = -2;
 }
 if (-1 < (b & a)) {
 iVar1 = iVar2;
 }
 }
 return iVar1;
}



/* Function: call_integer_overflow @ 00010bb8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_integer_overflow(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 2000000000;
}



/* Function: param_undefined_behavior @ 00010bc4 */

int param_undefined_behavior(int i)

{
 /* Unresolved local var: int local@[???] */
 return i << 1;
}



/* Function: call_undefined_behavior @ 00010bcc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_undefined_behavior(void)

{
 /* Unresolved local var: int result@[???] */
 return 10;
}



/* Function: param_implementation_defined @ 00010bd4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_implementation_defined(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: char c@[???]
 Unresolved local var: int s@[???]
 Unresolved local var: anon_struct_4_3_4e909822 bitfield@[???] */
 return 0x2c;
}



/* Function: call_implementation_defined @ 00010bdc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_implementation_defined(void)

{
 return 0x2c;
}



/* Function: test_obf_opt_edge @ 00010be4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_obf_opt_edge(void)

{
 byte *pbVar1;
 uint uVar2;
 size_t sVar3;
 int iVar4;
 int iVar5;
 int extraout_r1;
 undefined4 uVar6;
 int iVar7;
 undefined4 local_30;
 undefined4 local_2c;
 undefined4 local_28;
 undefined4 local_24;
 undefined4 local_20;
 undefined4 local_1c;
 undefined4 local_18;
 uint local_14;
 
 puts(&DAT_00011381);
 printf(&DAT_000111b0,10);
 iVar7 = 5;
 iVar4 = 6;
 do {
 iVar5 = iVar4;
 /* Unresolved local var: int b@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int p1@[???]
 Unresolved local var: int p3@[???]
 Unresolved local var: int temp@[DW_OP_reg4(r4)] */
 __aeabi_idivmod(iVar7);
 iVar7 = iVar5;
 iVar4 = extraout_r1;
 } while (extraout_r1 != 0);
 uVar6 = 0x23;
 if (iVar5 == 1) {
 uVar6 = 0x14;
 }
 printf(&DAT_000111cc,uVar6);
 printf(&DAT_000111e8,0xe1);
 /* Unresolved local var: char[32] decrypted@[???]
 Unresolved local var: char * p@[???] */
 strncpy((char *)&local_30,param_string_encryption_encrypted,0x20);
 iVar7 = 0;
 local_14 = local_14 & 0xffffff;
 uVar2 = local_30 & 0xff;
 pbVar1 = (byte *)&local_30;
 while (uVar2 != 0) {
 *pbVar1 = (byte)uVar2 ^ 0x5a;
 uVar2 = (uint)pbVar1[1];
 pbVar1 = pbVar1 + 1;
 }
 sVar3 = strlen((char *)&local_30);
 printf(&DAT_00011205,sVar3 + (local_30 & 0xff));
 iVar4 = param_tail_call_optimized(1000,0);
 printf(&DAT_00011221,iVar4);
 iVar4 = param_non_tail_call(100);
 printf(&DAT_0001124b,iVar4);
 /* Unresolved local var: int[8] c@[???] */
 local_14 = 0;
 local_18 = 0;
 local_1c = 0;
 local_20 = 0;
 local_24 = 0;
 local_28 = 0;
 local_2c = 0;
 local_30 = 0;
 do {
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[DW_OP_reg5(r5)] */
 (&local_30)[iVar7] = DAT_00011190[iVar7] + DAT_00011170[iVar7];
 iVar7 = iVar7 + 1;
 } while (iVar7 != 8);
 iVar7 = 0;
 iVar4 = 0;
 do {
 /* Unresolved local var: int i@[DW_OP_reg0(r0)] */
 iVar4 = ((int *)&local_30)[iVar7] + iVar4;
 iVar7 = iVar7 + 1;
 } while (iVar7 != 8);
 printf(&DAT_00011270,iVar4);
 printf(&DAT_00011296,0x14);
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 iVar7 = param_division_by_zero(5);
 iVar4 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 printf(&DAT_000112b6,iVar4 + iVar7);
 /* Unresolved local var: int valid@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 local_30 = 0x2a;
 iVar7 = param_null_pointer_deref(&local_30);
 iVar4 = param_null_pointer_deref((int *)0x0);
 signal(0xb,(__sighandler_t)0x0);
 printf(&DAT_000112d2,iVar4 + iVar7);
 printf(&DAT_000112ef,0x1e);
 printf(&DAT_0001130c,2000000000);
 printf(&DAT_0001133d,10);
 printf(&DAT_0001135a,0x2c);
 return;
}



/* Function: main @ 00010e70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_obf_opt_edge();
 return 0;
}




/* CRT stub function __divsi3 removed by preprocessor */





/* CRT stub function .divsi3_skip_div0_test removed by preprocessor */





/* CRT stub function __aeabi_idivmod removed by preprocessor */





/* CRT stub function __aeabi_ldiv0 removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 45 */
