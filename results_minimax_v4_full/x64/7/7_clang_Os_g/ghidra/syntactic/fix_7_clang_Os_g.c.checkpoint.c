#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <setjmp.h>

#include <stdint.h>

typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef unsigned char byte;
typedef void undefined;
typedef char undefined1;
typedef void (*code)(void);

/* External data references */
extern char DAT_00102050[];
extern char DAT_0010206c[];
extern char DAT_00102088[];
extern char DAT_001020a5[];
extern char DAT_001020c1[];
extern char DAT_001020eb[];
extern char DAT_00102110[];
extern char DAT_00102136[];
extern char DAT_00102156[];
extern char DAT_00102172[];
extern char DAT_0010218f[];
extern char DAT_001021ac[];
extern char DAT_001021dd[];
extern char DAT_001021fa[];
/* Data definitions */
char DAT_00102010[] = {0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
                       0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00};
int DAT_00102030[] = {1, 2, 3, 4};
int UNK_00102014[] = {1, 2, 3, 4};
int UNK_00102018[] = {2, 3, 4, 5};
int UNK_0010201c[] = {3, 4, 5, 6};
int UNK_00102034[] = {4, 5, 6, 7};
int UNK_00102038[] = {5, 6, 7, 8};
int UNK_0010203c[] = {6, 7, 8, 9};

char DAT_00102050[] = "Result: %d\n";
char DAT_0010206c[] = "Opaque predicate result: %lu\n";
char DAT_00102088[] = "Instruction substitution: %u\n";
char DAT_001020a5[] = "String encryption: %lu\n";
char DAT_001020c1[] = "Tail call optimized: %u\n";
char DAT_001020eb[] = "Non-tail call: %u\n";
char DAT_00102110[] = "Vectorized loop: %lu\n";
char DAT_00102136[] = "LTO result: %u\n";
char DAT_00102156[] = "Division by zero: %lu\n";
char DAT_00102172[] = "Null pointer deref: %lu\n";
char DAT_0010218f[] = "Buffer overflow: %u\n";
char DAT_001021ac[] = "Integer overflow: %u\n";
char DAT_001021dd[] = "Undefined behavior: %u\n";
char DAT_001021fa[] = "Implementation defined: %u\n";
char DAT_00102221[] = "=== Antigravity Compiler Test Suite ===\n";

char param_string_encryption_encrypted[] = "encrypted_string_data";


/* Global variables */
int div_zero_caught;
int segv_caught;
jmp_buf jmp_buffer;
jmp_buf segv_buffer;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/7/7_clang_Os_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 ((void (*)(void))0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_fake_branch @ 0010119c */

int param_fake_branch(int x)

{
 /* Unresolved local var: int result@[DW_OP_reg5(RDI)]
 Unresolved local var: char * str@[???] */
 return x;
}



/* Function: call_fake_branch @ 0010119f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fake_branch(void)

{
 return 10;
}



/* Function: param_opaque_predicate @ 001011a5 */

int param_opaque_predicate(int x)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 
 /* Unresolved local var: int a@[???]
 Unresolved local var: int b@[???]
 Unresolved local var: int p3@[???]
 Unresolved local var: int p1@[???]
 Unresolved local var: int p2@[???] */
 iVar5 = x + 1;
 iVar3 = iVar5;
 iVar4 = x;
 iVar2 = -1;
 while (iVar1 = iVar3, iVar1 != 0) {
 /* Unresolved local var: int temp@[DW_OP_reg2(RCX)] */
 iVar3 = iVar4 % iVar1;
 iVar4 = iVar1;
 iVar2 = iVar1;
 }
 iVar4 = x * 3 + 0x14;
 if (iVar2 == 1 && iVar5 * iVar5 == (x * 2 | 1U) + x * x) {
 iVar4 = x * 2 + 10;
 }
 return iVar4;
}



/* Function: call_opaque_predicate @ 001011e9 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_opaque_predicate(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 iVar3 = 6;
 iVar1 = 5;
 do {
 iVar2 = iVar3;
 /* Unresolved local var: int p1@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int b@[???]
 Unresolved local var: int p3@[???]
 Unresolved local var: int temp@[???] */
 iVar3 = iVar1 % iVar2;
 iVar1 = iVar2;
 } while (iVar3 != 0);
 iVar3 = 0x23;
 if (iVar2 == 1) {
 iVar3 = 0x14;
 }
 return iVar3;
}



/* Function: param_instruction_substitution @ 0010120f */

int param_instruction_substitution(int x)

{
 /* Unresolved local var: int result@[DW_OP_breg5(RDI): 0; DW_OP_constu:
 4294967295; DW_OP_and; DW_OP_lit6; DW_OP_mul; DW_OP_stack_value]
 Unresolved local var: uint ux@[DW_OP_reg5(RDI)]
 Unresolved local var: int div2@[???]
 Unresolved local var: int mod16@[???]
 Unresolved local var: int mul15@[???] */
 return x * 0x15 + ((uint)x >> 1) + (x & 0xfU);
}



/* Function: call_instruction_substitution @ 00101223 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_instruction_substitution(void)

{
 return 0xe1;
}



/* Function: decrypt_string @ 00101229 */

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



/* Function: param_string_encryption @ 00101269 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_string_encryption(void)

{
 byte bVar1;
 size_t sVar2;
 int iVar3;
 byte *pbVar4;
 byte local_28 [31];
 undefined1 local_9;
 
 /* Unresolved local var: char[32] decrypted@[???]
 Unresolved local var: char * p@[???] */
 pbVar4 = local_28;
 strncpy((char *)local_28,param_string_encryption_encrypted,0x20);
 local_9 = 0;
 bVar1 = local_28[0];
 if (local_28[0] == 0) {
 iVar3 = 0;
 }
 else {
 do {
 *pbVar4 = bVar1 ^ 0x5a;
 bVar1 = pbVar4[1];
 pbVar4 = pbVar4 + 1;
 } while (bVar1 != 0);
 iVar3 = (int)(char)local_28[0];
 }
 sVar2 = strlen((char *)local_28);
 return (int)sVar2 + iVar3;
}



/* Function: call_string_encryption @ 001012bb */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_encryption(void)

{
 byte bVar1;
 size_t sVar2;
 int iVar3;
 byte *pbVar4;
 byte abStack_28 [31];
 undefined1 uStack_9;
 
 pbVar4 = abStack_28;
 strncpy((char *)abStack_28,param_string_encryption_encrypted,0x20);
 uStack_9 = 0;
 bVar1 = abStack_28[0];
 if (abStack_28[0] == 0) {
 iVar3 = 0;
 }
 else {
 do {
 *pbVar4 = bVar1 ^ 0x5a;
 bVar1 = pbVar4[1];
 pbVar4 = pbVar4 + 1;
 } while (bVar1 != 0);
 iVar3 = (int)(char)abStack_28[0];
 }
 sVar2 = strlen((char *)abStack_28);
 return (int)sVar2 + iVar3;
}



/* Function: param_tail_call_optimized @ 001012c0 */

int param_tail_call_optimized(int n,int acc)

{
 uint uVar1;
 
 if (0 < n) {
 uVar1 = n - 1;
 acc = (acc + n + uVar1 * uVar1) - (int)((ulong)(n - 2) * (ulong)uVar1 >> 1);
 }
 return acc;
}



/* Function: call_tail_call_optimized @ 001012dd */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_tail_call_optimized(void)

{
 return 0x7a314;
}



/* Function: param_non_tail_call @ 001012e3 */

int param_non_tail_call(int n)

{
 uint uVar1;
 
 if (0 < n) {
 uVar1 = n - 1;
 return (uVar1 * uVar1 + n) - (int)((ulong)(n - 2) * (ulong)uVar1 >> 1);
 }
 return 0;
}



/* Function: call_non_tail_call @ 001012ff */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_non_tail_call(void)

{
 return 0x13ba;
}



/* Function: param_vectorized_loop @ 00101305 */

int param_vectorized_loop(int *a,int *b,int *c,int n)

{
 int iVar1;
 ulong uVar2;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 uVar2 = 0;
 do {
 c[uVar2] = b[uVar2] + a[uVar2];
 uVar2 = uVar2 + 1;
 } while ((uint)n != uVar2);
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 uVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + c[uVar2];
 uVar2 = uVar2 + 1;
 } while ((uint)n != uVar2);
 return iVar1;
 }
 }
 return 0;
}



/* Function: call_vectorized_loop @ 0010133a */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorized_loop(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 long lVar7;
 undefined1 local_28 [16];
 undefined1 local_18 [16];
 
 /* Unresolved local var: int[8] c@[???]
 Unresolved local var: int[8] a@[???]
 Unresolved local var: int[8] b@[???] */
 local_18[0] = 0;
 local_28[0] = 0;
 lVar7 = 0;
 do {
 /* Unresolved local var: int i@[???] */
 iVar1 = *(int *)(&UNK_00102034 + lVar7);
 iVar2 = *(int *)(&UNK_00102038 + lVar7);
 iVar3 = *(int *)(&UNK_0010203c + lVar7);
 iVar4 = *(int *)(&UNK_00102014 + lVar7);
 iVar5 = *(int *)(&UNK_00102018 + lVar7);
 iVar6 = *(int *)(&UNK_0010201c + lVar7);
 *(int *)(local_28 + lVar7) = *(int *)(&DAT_00102030 + lVar7) + *(int *)(&DAT_00102010 + lVar7);
 *(int *)(local_28 + lVar7 + 4) = iVar1 + iVar4;
 *(int *)(local_28 + lVar7 + 8) = iVar2 + iVar5;
 *(int *)(local_28 + lVar7 + 0xc) = iVar3 + iVar6;
 lVar7 = lVar7 + 0x10;
 } while (lVar7 != 0x20);
 // Sum all elements of local_28 (local_18 is all zeros)
 return local_28[0] + local_28[4] + local_28[8] + local_28[12];
}



/* Function: param_link_time_optimization @ 00101397 */

int param_link_time_optimization(int x)

{
 return x * 2 + 10;
}



/* Function: call_link_time_optimization @ 0010139e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_link_time_optimization(void)

{
 return 0x14;
}



/* Function: div_zero_handler @ 001013a4 */

void div_zero_handler(int sig)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(jmp_buffer,1);
}



/* Function: param_division_by_zero @ 001013c0 */

int param_division_by_zero(int x)

{
 int iVar1;
 int iVar2;
 
 signal(8,div_zero_handler);
 iVar1 = setjmp(jmp_buffer);
 iVar2 = -1;
 if (iVar1 == 0) {
 /* Unresolved local var: int y@[???] */
 iVar2 = (int)(10 / (long)x);
 }
 return iVar2;
}



/* Function: call_division_by_zero @ 001013f8 */

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



/* Function: segv_handler @ 00101427 */

void segv_handler(int sig)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(segv_buffer,1);
}



/* Function: param_null_pointer_deref @ 00101443 */

int param_null_pointer_deref(int *p)

{
 int iVar1;
 int iVar2;
 
 signal(0xb,segv_handler);
 iVar1 = setjmp(segv_buffer);
 iVar2 = -1;
 if (iVar1 == 0) {
 /* Unresolved local var: int val@[???] */
 iVar2 = *p;
 }
 return iVar2;
}



/* Function: call_null_pointer_deref @ 00101473 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_null_pointer_deref(void)

{
 int iVar1;
 int iVar2;
 int local_14;
 
 /* Unresolved local var: int valid@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 iVar1 = param_null_pointer_deref(&local_14);
 iVar2 = param_null_pointer_deref((int *)0x0);
 signal(0xb,(__sighandler_t)0x0);
 return iVar2 + iVar1;
}



/* Function: param_buffer_overflow_stack @ 001014a8 */

int param_buffer_overflow_stack(int x)

{
 /* Unresolved local var: int canary@[???]
 Unresolved local var: char[8] buffer@[???] */
 return x;
}



/* Function: param_buffer_overflow_heap @ 001014ab */

int param_buffer_overflow_heap(int x)

{
 /* Unresolved local var: char * heap_buffer@[???] */
 return x;
}



/* Function: call_buffer_overflow @ 001014ae */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_buffer_overflow(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 0x1e;
}



/* Function: param_integer_overflow @ 001014b4 */

int param_integer_overflow(int a,int b)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int signed_sum@[???]
 Unresolved local var: uint unsigned_sum@[???]
 Unresolved local var: uint ua@[???]
 Unresolved local var: uint ub@[???] */
 iVar2 = b + a;
 if (((0 < a) && (0 < b)) && (iVar2 < 0)) {
 return -1;
 }
 iVar1 = -2;
 if (iVar2 < 1) {
 iVar1 = iVar2;
 }
 if (-1 < (b & a)) {
 iVar1 = iVar2;
 }
 return iVar1;
}



/* Function: call_integer_overflow @ 001014d9 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_integer_overflow(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 2000000000;
}



/* Function: param_undefined_behavior @ 001014df */

int param_undefined_behavior(int i)

{
 /* Unresolved local var: int local@[???] */
 return i * 2;
}



/* Function: call_undefined_behavior @ 001014e3 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_undefined_behavior(void)

{
 /* Unresolved local var: int result@[???] */
 return 10;
}



/* Function: param_implementation_defined @ 001014e9 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_implementation_defined(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: char c@[???]
 Unresolved local var: int s@[???]
 Unresolved local var: anon_struct_4_3_4e909822 bitfield@[???] */
 return 0x2f;
}



/* Function: call_implementation_defined @ 001014ef */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_implementation_defined(void)

{
 return 0x2f;
}



/* Function: test_obf_opt_edge @ 001014f5 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_obf_opt_edge(void)

{
 long lVar1;
 int iVar2;
 uint uVar3;
 int iVar4;
 ulong uVar5;
 uint64_t uVar6;
 
 puts(&DAT_00102221);
 printf(&DAT_00102050,10);
 uVar5 = 6;
 iVar2 = 5;
 do {
 iVar4 = (int)uVar5;
 /* Unresolved local var: int p1@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int b@[???]
 Unresolved local var: int p3@[???]
 Unresolved local var: int temp@[???] */
 lVar1 = (long)iVar2;
 uVar5 = lVar1 % (long)iVar4 & 0xffffffff;
 iVar2 = iVar4;
 } while ((int)(lVar1 % (long)iVar4) != 0);
 uVar6 = 0x23;
 if (iVar4 == 1) {
 uVar6 = 0x14;
 }
 printf(&DAT_0010206c,uVar6);
 printf(&DAT_00102088,0xe1);
 uVar3 = param_string_encryption();
 printf(&DAT_001020a5,(ulong)uVar3);
 printf(&DAT_001020c1,0x7a314);
 printf(&DAT_001020eb,0x13ba);
 uVar3 = call_vectorized_loop();
 printf(&DAT_00102110,(ulong)uVar3);
 printf(&DAT_00102136,0x14);
 uVar3 = call_division_by_zero();
 printf(&DAT_00102156,(ulong)uVar3);
 uVar3 = call_null_pointer_deref();
 printf(&DAT_00102172,(ulong)uVar3);
 printf(&DAT_0010218f,0x1e);
 printf(&DAT_001021ac,2000000000);
 printf(&DAT_001021dd,10);
 printf(&DAT_001021fa,0x2f);
 return;
}



/* Function: main @ 00101635 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_obf_opt_edge();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 41 */
