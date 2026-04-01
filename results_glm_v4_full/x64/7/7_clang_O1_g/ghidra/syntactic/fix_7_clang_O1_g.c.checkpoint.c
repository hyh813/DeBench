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

/* Standard library headers */
#include <stdio.h>
#include <string.h>
#include <signal.h>
#include <setjmp.h>

/* Ghidra-specific type definitions */
typedef unsigned char byte;
typedef unsigned char undefined1;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef void (*code)(void);
typedef void (*__sighandler_t)(int);

/* Macro for Ghidra CONCAT44 */
#define CONCAT44(high, low) (((uint64_t)(high) << 32) | ((uint32_t)(low)))

/* Global variable declarations */
int div_zero_caught;
jmp_buf jmp_buffer;
int segv_caught;
jmp_buf segv_buffer;
char DAT_00102050[] = "%d\n";
char DAT_0010206c[] = "%d\n";
char DAT_00102088[] = "%d\n";
char DAT_001020a5[] = "String: \n";
char DAT_001020c1[] = "%lu\n";
char DAT_001020eb[] = "%lu\n";
char DAT_00102110[] = "%lu\n";
char DAT_00102136[] = "Null pointer dereference test:\n";
char DAT_00102156[] = "Done\n";
char DAT_00102172[] = "%d\n";
char DAT_0010218f[] = "%d\n";
char DAT_001021ac[] = "%d\n";
char DAT_001021dd[] = "%d\n";
char DAT_001021fa[] = "%d\n";
char DAT_00102221[] = "Obfuscation and Optimization Edge Cases\n";
int DAT_00102010[] = {1, 2, 3, 4, 5, 6, 7, 8};
int DAT_00102030[] = {10, 20, 30, 40, 50, 60, 70, 80};
char param_string_encryption_encrypted[] = "EncryptedStringForTest\0";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/7/7_clang_O1_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 (*(code *)(uintptr_t)0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_fake_branch @ 001011a0 */

int param_fake_branch(int x)

{
 /* Unresolved local var: int result@[DW_OP_reg5(RDI)]
 Unresolved local var: char * str@[???] */
 return x;
}



/* Function: call_fake_branch @ 001011b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fake_branch(void)

{
 return 10;
}



/* Function: param_opaque_predicate @ 001011c0 */

int param_opaque_predicate(int x)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 
 /* Unresolved local var: int a@[???]
 Unresolved local var: int b@[???]
 Unresolved local var: int p3@[???]
 Unresolved local var: int p1@[???]
 Unresolved local var: int p2@[???] */
 iVar4 = x + 1;
 iVar3 = iVar4;
 iVar2 = x;
 while (iVar1 = iVar3, iVar1 != 0) {
 /* Unresolved local var: int temp@[DW_OP_reg2(RCX)] */
 iVar3 = iVar2 % iVar1;
 iVar2 = iVar1;
 }
 iVar3 = x * 3 + 0x14;
 if (iVar2 == 1 && iVar4 * iVar4 == (x * 2 | 1U) + x * x) {
 iVar3 = x * 2 + 10;
 }
 return iVar3;
}



/* Function: call_opaque_predicate @ 00101210 */

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



/* Function: param_instruction_substitution @ 00101240 */

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



/* Function: call_instruction_substitution @ 00101260 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_instruction_substitution(void)

{
 return 0xe1;
}



/* Function: decrypt_string @ 00101270 */

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



/* Function: param_string_encryption @ 001012c0 */

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
 strncpy((char *)local_28,param_string_encryption_encrypted,0x20);
 local_9 = 0;
 bVar1 = local_28[0];
 pbVar2 = local_28;
 while (bVar1 != 0) {
 *pbVar2 = bVar1 ^ 0x5a;
 bVar1 = pbVar2[1];
 pbVar2 = pbVar2 + 1;
 }
 sVar3 = strlen((char *)local_28);
 return (int)sVar3 + (int)(char)local_28[0];
}



/* Function: call_string_encryption @ 00101320 */

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
 strncpy((char *)local_28,param_string_encryption_encrypted,0x20);
 local_9 = 0;
 bVar1 = local_28[0];
 pbVar2 = local_28;
 while (bVar1 != 0) {
 *pbVar2 = bVar1 ^ 0x5a;
 bVar1 = pbVar2[1];
 pbVar2 = pbVar2 + 1;
 }
 sVar3 = strlen((char *)local_28);
 return (int)sVar3 + (int)(char)local_28[0];
}



/* Function: param_tail_call_optimized @ 00101380 */

int param_tail_call_optimized(int n,int acc)

{
 if (0 < n) {
 acc = param_tail_call_optimized(n + -1,acc + n);
 }
 return acc;
}



/* Function: call_tail_call_optimized @ 001013a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_tail_call_optimized(void)

{
 int iVar1;
 
 iVar1 = param_tail_call_optimized(1000,0);
 return iVar1;
}



/* Function: param_non_tail_call @ 001013b0 */

int param_non_tail_call(int n)

{
 int iVar1;
 
 if (0 < n) {
 iVar1 = param_non_tail_call(n + -1);
 return iVar1 + n;
 }
 return 0;
}



/* Function: call_non_tail_call @ 001013d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_non_tail_call(void)

{
 int iVar1;
 
 iVar1 = param_non_tail_call(100);
 return iVar1;
}



/* Function: param_vectorized_loop @ 001013e0 */

int param_vectorized_loop(int *a,int *b,int *c,int n)

{
 int iVar1;
 ulong uVar2;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 uVar2 = 0;
 do {
 c[uVar2] = b[uVar2] + a[uVar2];
 uVar2 = uVar2 + 1;
 } while ((uint)n != uVar2);
 }
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
 return 0;
}



/* Function: call_vectorized_loop @ 00101420 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorized_loop(void)

{
 int iVar1;
 long lVar2;
 int local_28 [10];
 
 /* Unresolved local var: int[8] c@[???]
 Unresolved local var: int[8] a@[???]
 Unresolved local var: int[8] b@[???] */
 local_28[4] = 0;
 local_28[5] = 0;
 local_28[6] = 0;
 local_28[7] = 0;
 local_28[0] = 0;
 local_28[1] = 0;
 local_28[2] = 0;
 local_28[3] = 0;
 lVar2 = 0;
 do {
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 *(int *)((long)local_28 + lVar2) =
 *(int *)((long)&DAT_00102030 + lVar2) + *(int *)((long)&DAT_00102010 + lVar2);
 lVar2 = lVar2 + 4;
 } while (lVar2 != 0x20);
 lVar2 = 0;
 iVar1 = 0;
 /* Unresolved local var: int i@[DW_OP_reg2(RCX)] */
 do {
 iVar1 = iVar1 + local_28[lVar2];
 lVar2 = lVar2 + 1;
 } while (lVar2 != 8);
 return iVar1;
}



/* Function: param_link_time_optimization @ 00101470 */

int param_link_time_optimization(int x)

{
 return x * 2 + 10;
}



/* Function: call_link_time_optimization @ 00101480 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_link_time_optimization(void)

{
 return 0x14;
}



/* Function: div_zero_handler @ 00101490 */

void div_zero_handler(int sig)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(jmp_buffer,1);
}



/* Function: param_division_by_zero @ 001014b0 */

int param_division_by_zero(int x)

{
 int iVar1;
 int iVar2;
 
 signal(8,div_zero_handler);
 iVar1 = _setjmp(jmp_buffer);
 iVar2 = -1;
 if (iVar1 == 0) {
 /* Unresolved local var: int y@[???] */
 iVar2 = (int)(10 / (long)x);
 }
 return iVar2;
}



/* Function: call_division_by_zero @ 001014f0 */

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



/* Function: segv_handler @ 00101520 */

void segv_handler(int sig)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(segv_buffer,1);
}



/* Function: param_null_pointer_deref @ 00101540 */

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



/* Function: call_null_pointer_deref @ 00101570 */

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



/* Function: param_buffer_overflow_stack @ 001015b0 */

int param_buffer_overflow_stack(int x)

{
 /* Unresolved local var: int canary@[???]
 Unresolved local var: char[8] buffer@[???] */
 return x;
}



/* Function: param_buffer_overflow_heap @ 001015c0 */

int param_buffer_overflow_heap(int x)

{
 /* Unresolved local var: char * heap_buffer@[???] */
 return x;
}



/* Function: call_buffer_overflow @ 001015d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_buffer_overflow(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 0x1e;
}



/* Function: param_integer_overflow @ 001015e0 */

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



/* Function: call_integer_overflow @ 00101610 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_integer_overflow(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 2000000000;
}



/* Function: param_undefined_behavior @ 00101620 */

int param_undefined_behavior(int i)

{
 /* Unresolved local var: int local@[???] */
 return i * 2;
}



/* Function: call_undefined_behavior @ 00101630 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_undefined_behavior(void)

{
 /* Unresolved local var: int result@[???] */
 return 10;
}



/* Function: param_implementation_defined @ 00101640 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_implementation_defined(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: char c@[???]
 Unresolved local var: int s@[???]
 Unresolved local var: anon_struct_4_3_4e909822 bitfield@[???] */
 return 0x2f;
}



/* Function: call_implementation_defined @ 00101650 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_implementation_defined(void)

{
 return 0x2f;
}



/* Function: test_obf_opt_edge @ 00101660 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_obf_opt_edge(void)

{
 byte *pbVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 ulong uVar5;
 long lVar6;
 undefined8 uVar7;
 undefined4 local_38;
 undefined4 uStack_34;
 undefined8 uStack_30;
 undefined8 local_28;
 ulong uStack_20;
 
 puts(&DAT_00102221);
 printf(&DAT_00102050,10);
 uVar5 = 6;
 iVar3 = 5;
 do {
 iVar4 = (int)uVar5;
 /* Unresolved local var: int p1@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int b@[???]
 Unresolved local var: int p3@[???]
 Unresolved local var: int temp@[???] */
 lVar6 = (long)iVar3;
 uVar5 = lVar6 % (long)iVar4 & 0xffffffff;
 iVar3 = iVar4;
 } while ((int)(lVar6 % (long)iVar4) != 0);
 uVar7 = 0x23;
 if (iVar4 == 1) {
 uVar7 = 0x14;
 }
 printf(&DAT_0010206c,uVar7);
 printf(&DAT_00102088,0xe1);
 /* Unresolved local var: char[32] decrypted@[???]
 Unresolved local var: char * p@[???] */
 strncpy((char *)&local_38,param_string_encryption_encrypted,0x20);
 uStack_20 = uStack_20 & 0xffffffffffffff;
 pbVar1 = (byte *)&local_38;
 while ((byte)local_38 != 0) {
 *pbVar1 = (byte)local_38 ^ 0x5a;
 *(byte *)(&local_38 + 1) = pbVar1[1];
 pbVar1 = pbVar1 + 1;
 }
 strlen((char *)&local_38);
 lVar6 = 0;
 printf(&DAT_001020a5);
 uVar2 = param_tail_call_optimized(1000,0);
 printf(&DAT_001020c1,(ulong)uVar2);
 uVar2 = param_non_tail_call(100);
 printf(&DAT_001020eb,(ulong)uVar2);
 /* Unresolved local var: int[8] c@[???] */
 local_28 = 0;
 uStack_20 = 0;
 uStack_30 = 0;
 do {
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 *(int *)((long)&local_38 + lVar6) =
 *(int *)((long)&DAT_00102030 + lVar6) + *(int *)((long)&DAT_00102010 + lVar6);
 lVar6 = lVar6 + 4;
 } while (lVar6 != 0x20);
 lVar6 = 0;
 uVar5 = 0;
 /* Unresolved local var: int i@[DW_OP_reg0(RAX)] */
 do {
 uVar5 = (ulong)((uint)((int)uVar5 + ((int *)&local_38)[lVar6]));
 lVar6 = lVar6 + 1;
 } while (lVar6 != 8);
 printf(&DAT_00102110,uVar5);
 printf(&DAT_00102136);
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 param_division_by_zero(5);
 param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 printf(&DAT_00102156);
 /* Unresolved local var: int valid@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 *(undefined8 *)&local_38 = CONCAT44(uStack_34,0x2a);
 iVar3 = param_null_pointer_deref(&local_38);
 iVar4 = param_null_pointer_deref((int *)0x0);
 signal(0xb,(__sighandler_t)0x0);
 printf(&DAT_00102172,(ulong)((uint)(iVar4 + iVar3)));
 printf(&DAT_0010218f,0x1e);
 printf(&DAT_001021ac,2000000000);
 printf(&DAT_001021dd,10);
 printf(&DAT_001021fa,0x2f);
 return;
}



/* Function: main @ 00101890 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_obf_opt_edge();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 41 */
