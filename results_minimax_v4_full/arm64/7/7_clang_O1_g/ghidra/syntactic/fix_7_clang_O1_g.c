/* Auto-injected type definitions by preprocessor */
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
typedef unsigned char byte;
typedef unsigned long ulong;
typedef unsigned char undefined1;
typedef unsigned int uint;
typedef void (*code)(void);
typedef void (*__sighandler_t)(int);
typedef unsigned char undefined;

#include <setjmp.h>
#include <signal.h>
#include <stdio.h>

/* External data from binary */
extern const unsigned char DAT_001010b8[32];
extern const unsigned char DAT_001010d8[32];
extern const char *DAT_001012c9;
extern const char *DAT_001010f8;
extern const char *DAT_00101114;
extern const char *DAT_00101130;
extern const char *DAT_0010114d;
extern const char *DAT_00101169;
extern const char *DAT_00101193;
extern const char *DAT_001011b8;
extern const char *DAT_001011de;
extern const char *DAT_001011fe;
extern const char *DAT_0010121a;
extern const char *DAT_00101237;
extern const char *DAT_00101254;
extern const char *DAT_00101285;
extern const char *DAT_001012a2;

/* Global variables */
extern char completed_0;
int div_zero_caught = 0;
int segv_caught = 0;
jmp_buf jmp_buffer;
jmp_buf segv_buffer;
extern void *__dso_handle;

/* CRT extern declarations */
extern void __cxa_finalize(void *);

/* Dummy implementation for removed CRT stub */
void deregister_tm_clones(void) {}

/* String functions */
extern char *strncpy(char *, const char *, size_t);
extern size_t strlen(const char *);

/* String encryption static data */
/* Encrypted string data from binary - decrypted with XOR 0x5a */
const char param_string_encrypted[32] = "This is a test string.....";

/* External data definitions - string constants from binary */
const char *DAT_001012c9 = "Running obfuscated tests...\n";
const char *DAT_001010f8 = "Opaque predicate: %d\n";
const char *DAT_00101114 = "GCD result: %u\n";
const char *DAT_00101130 = "Instruction substitution: %d\n";
const char *DAT_0010114d = "String len: %lu\n";
const char *DAT_00101169 = "Tail call result: %lu\n";
const char *DAT_00101193 = "Non-tail call result: %lu\n";
const char *DAT_001011b8 = "Vector sum: %lu\n";
const char *DAT_001011de = "LTO result: %d\n";
const char *DAT_001011fe = "Division result: %lu\n";
const char *DAT_0010121a = "Null pointer result: %lu\n";
const char *DAT_00101237 = "Overflow result: %d\n";
const char *DAT_00101254 = "Integer overflow: %d\n";
const char *DAT_00101285 = "UB result: %d\n";
const char *DAT_001012a2 = "Impl-defined: %d\n";

/* Data from binary - arrays for vectorized loop */
const unsigned char DAT_001010b8[32] = {0};
const unsigned char DAT_001010d8[32] = {0};

/* Global variable definition */
char completed_0 = 0;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/7/7_clang_O1_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00100730 @ 00100730 */

void FUN_00100730(void)

{
 (*(code *)(undefined *)0x0)();
 return;
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




/* Function: param_fake_branch @ 00100914 */

int param_fake_branch(int x)

{
 /* Unresolved local var: int result@[DW_OP_reg0(x0)]
 Unresolved local var: char * str@[???] */
 return x;
}



/* Function: call_fake_branch @ 00100918 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fake_branch(void)

{
 return 10;
}



/* Function: param_opaque_predicate @ 00100920 */

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
 iVar1 = x + 1;
 iVar3 = x;
 iVar4 = x;
 iVar2 = iVar1;
 if (x != -1) {
 do {
 iVar4 = iVar2;
 /* Unresolved local var: int temp@[DW_OP_reg10(x10)] */
 iVar2 = 0;
 if (iVar4 != 0) {
 iVar2 = iVar3 / iVar4;
 }
 iVar2 = iVar3 - iVar2 * iVar4;
 iVar3 = iVar4;
 } while (iVar2 != 0);
 }
 iVar2 = x * 2 + 10;
 if (iVar4 != 1 || (x * 2 | 1U) + x * x != iVar1 * iVar1) {
 iVar2 = x * 3 + 0x14;
 }
 return iVar2;
}



/* Function: call_opaque_predicate @ 00100974 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_opaque_predicate(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 iVar2 = 6;
 iVar3 = 5;
 do {
 iVar1 = iVar2;
 /* Unresolved local var: int b@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int p1@[???]
 Unresolved local var: int p3@[???]
 Unresolved local var: int temp@[DW_OP_reg10(x10)] */
 iVar2 = 0;
 if (iVar1 != 0) {
 iVar2 = iVar3 / iVar1;
 }
 iVar2 = iVar3 - iVar2 * iVar1;
 iVar3 = iVar1;
 } while (iVar2 != 0);
 iVar2 = 0x14;
 if (iVar1 != 1) {
 iVar2 = 0x23;
 }
 return iVar2;
}



/* Function: param_instruction_substitution @ 001009a4 */

int param_instruction_substitution(int x)

{
 /* Unresolved local var: int result@[DW_OP_breg0(x0): 0; DW_OP_lit6; DW_OP_mul;
 DW_OP_stack_value]
 Unresolved local var: uint ux@[DW_OP_reg0(x0)]
 Unresolved local var: int mul15@[???]
 Unresolved local var: int mod16@[???]
 Unresolved local var: int div2@[???] */
 return (x & 0xfU) + ((uint)x >> 1) + x * 0x15;
}



/* Function: call_instruction_substitution @ 001009b8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_instruction_substitution(void)

{
 return 0xe1;
}



/* Function: decrypt_string @ 001009c0 */

char * decrypt_string(char *encrypted,char *buffer,size_t len,char key)

{
 byte bVar1;
 byte bVar2;
 byte *pbVar3;
 
 /* Unresolved local var: char * p@[???] */
 strncpy(buffer,encrypted,len);
 buffer[len - 1] = '\0';
 bVar1 = *buffer;
 pbVar3 = (byte *)buffer;
 while (bVar1 != 0) {
 bVar2 = bVar1 ^ key;
 bVar1 = pbVar3[1];
 *pbVar3 = bVar2;
 pbVar3 = pbVar3 + 1;
 }
 return buffer;
}



/* Function: param_string_encryption @ 00100a28 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_string_encryption(void)

{
 byte bVar1;
 size_t sVar2;
 byte bVar3;
 byte *pbVar4;
 char local_40 [32];
 undefined1 local_21;
 
 /* Unresolved local var: char[32] decrypted@[DW_OP_breg31(sp): 0] */
 /* Unresolved local var: char * p@[???] */
 strncpy(local_40,param_string_encrypted,0x20);
 local_21 = 0;
 if (local_40[0] != 0) {
 pbVar4 = (byte *)((ulong)local_40 | 1);
 bVar3 = local_40[0];
 do {
 bVar1 = bVar3 ^ 0x5a;
 bVar3 = *pbVar4;
 pbVar4[-1] = bVar1;
 pbVar4 = pbVar4 + 1;
 } while (bVar3 != 0);
 }
 sVar2 = strlen((char *)local_40);
 return (int)sVar2 + (uint)local_40[0];
}



/* Function: call_string_encryption @ 00100a98 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_encryption(void)

{
 byte bVar1;
 size_t sVar2;
 byte bVar3;
 byte *pbVar4;
 char local_40 [32];
 undefined1 local_21;
 
 /* Unresolved local var: char[32] decrypted@[DW_OP_breg31(sp): 0]
 Unresolved local var: char * p@[???] */
 strncpy(local_40,param_string_encrypted,0x20);
 local_21 = 0;
 if (local_40[0] != 0) {
 pbVar4 = (byte *)((ulong)local_40 | 1);
 bVar3 = local_40[0];
 do {
 bVar1 = bVar3 ^ 0x5a;
 bVar3 = *pbVar4;
 pbVar4[-1] = bVar1;
 pbVar4 = pbVar4 + 1;
 } while (bVar3 != 0);
 }
 sVar2 = strlen((char *)local_40);
 return (int)sVar2 + (uint)local_40[0];
}



/* Function: param_tail_call_optimized @ 00100b08 */

int param_tail_call_optimized(int n,int acc)

{
 if (0 < n) {
 acc = param_tail_call_optimized(n + -1,acc + n);
 }
 return acc;
}



/* Function: call_tail_call_optimized @ 00100b34 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_tail_call_optimized(void)

{
 int iVar1;
 
 iVar1 = param_tail_call_optimized(1000,0);
 return iVar1;
}



/* Function: param_non_tail_call @ 00100b50 */

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



/* Function: call_non_tail_call @ 00100b84 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_non_tail_call(void)

{
 int iVar1;
 
 iVar1 = param_non_tail_call(100);
 return iVar1;
}



/* Function: param_vectorized_loop @ 00100b9c */

int param_vectorized_loop(int *a,int *b,int *c,int n)

{
 int iVar1;
 ulong uVar2;
 int *piVar3;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 uVar2 = (ulong)(uint)n;
 piVar3 = c;
 do {
 uVar2 = uVar2 - 1;
 *piVar3 = *b + *a;
 a = a + 1;
 b = b + 1;
 piVar3 = piVar3 + 1;
 } while (uVar2 != 0);
 }
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar1 = 0;
 uVar2 = (ulong)(uint)n;
 do {
 uVar2 = uVar2 - 1;
 iVar1 = *c + iVar1;
 c = c + 1;
 } while (uVar2 != 0);
 return iVar1;
 }
 return 0;
}



/* Function: call_vectorized_loop @ 00100bf0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorized_loop(void)

{
 int *piVar1;
 int iVar2;
 long lVar3;
 int local_20 [8];
 
 /* Unresolved local var: int[8] c@[???]
 Unresolved local var: int[8] a@[???]
 Unresolved local var: int[8] b@[???] */
 lVar3 = 0;
 local_20[2] = 0;
 local_20[3] = 0;
 local_20[0] = 0;
 local_20[1] = 0;
 local_20[6] = 0;
 local_20[7] = 0;
 local_20[4] = 0;
 local_20[5] = 0;
 do {
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 *(int *)((long)&local_20[0] + lVar3) =
 *(int *)((long)DAT_001010d8 + lVar3) + *(int *)((long)DAT_001010b8 + lVar3);
 lVar3 = lVar3 + 4;
 } while (lVar3 != 0x20);
 lVar3 = 0;
 iVar2 = 0;
 do {
 piVar1 = (int *)((long)&local_20[0] + lVar3);
 /* Unresolved local var: int i@[???] */
 lVar3 = lVar3 + 4;
 iVar2 = *piVar1 + iVar2;
 } while (lVar3 != 0x20);
 return iVar2;
}



/* Function: param_link_time_optimization @ 00100c58 */

int param_link_time_optimization(int x)

{
 return x * 2 + 10;
}



/* Function: call_link_time_optimization @ 00100c64 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_link_time_optimization(void)

{
 return 0x14;
}



/* Function: div_zero_handler @ 00100c6c */

void div_zero_handler(int sig)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(jmp_buffer,1);
}



/* Function: param_division_by_zero @ 00100c90 */

int param_division_by_zero(int x)

{
 int iVar1;
 
 signal(8,div_zero_handler);
 iVar1 = setjmp(jmp_buffer);
 if (iVar1 == 0) {
 /* Unresolved local var: int y@[???] */
 iVar1 = 0;
 if (x != 0) {
 iVar1 = 10 / x;
 }
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_division_by_zero @ 00100cdc */

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



/* Function: segv_handler @ 00100d1c */

void segv_handler(int sig)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(segv_buffer,1);
}



/* Function: param_null_pointer_deref @ 00100d40 */

int param_null_pointer_deref(int *p)

{
 int iVar1;
 
 signal(0xb,segv_handler);
 iVar1 = setjmp(segv_buffer);
 if (iVar1 == 0) {
 /* Unresolved local var: int val@[???] */
 iVar1 = *p;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_null_pointer_deref @ 00100d88 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_null_pointer_deref(void)

{
 int iVar1;
 int iVar2;
 int local_24;
 
 /* Unresolved local var: int valid@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 local_24 = 0x2a;
 iVar1 = param_null_pointer_deref(&local_24);
 iVar2 = param_null_pointer_deref((int *)0x0);
 iVar2 = param_null_pointer_deref((int *)0x0);
 signal(0xb,(__sighandler_t)0x0);
 return iVar2 + iVar1;
}



/* Function: param_buffer_overflow_stack @ 00100dd8 */

int param_buffer_overflow_stack(int x)

{
 /* Unresolved local var: int canary@[???]
 Unresolved local var: char[8] buffer@[???] */
 return x;
}



/* Function: param_buffer_overflow_heap @ 00100ddc */

int param_buffer_overflow_heap(int x)

{
 /* Unresolved local var: char * heap_buffer@[???] */
 return x;
}



/* Function: call_buffer_overflow @ 00100de0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_buffer_overflow(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 0x1e;
}



/* Function: param_integer_overflow @ 00100de8 */

int param_integer_overflow(int a,int b)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: uint ub@[???]
 Unresolved local var: uint ua@[???]
 Unresolved local var: uint unsigned_sum@[???]
 Unresolved local var: int signed_sum@[???] */
 iVar1 = b + a;
 if (((0 < a) && (0 < b)) && (iVar1 < 0)) {
 return -1;
 }
 iVar2 = -2;
 if (iVar1 < 1 || -1 < (b & a)) {
 iVar2 = iVar1;
 }
 return iVar2;
}



/* Function: call_integer_overflow @ 00100e20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_integer_overflow(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 2000000000;
}



/* Function: param_undefined_behavior @ 00100e2c */

int param_undefined_behavior(int i)

{
 /* Unresolved local var: int local@[???] */
 return i << 1;
}



/* Function: call_undefined_behavior @ 00100e34 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_undefined_behavior(void)

{
 /* Unresolved local var: int result@[???] */
 return 10;
}



/* Function: param_implementation_defined @ 00100e3c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_implementation_defined(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: char c@[???]
 Unresolved local var: int s@[???]
 Unresolved local var: anon_struct_4_3_4e909822 bitfield@[???] */
 return 0x30;
}



/* Function: call_implementation_defined @ 00100e44 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_implementation_defined(void)

{
 return 0x30;
}



/* Function: test_obf_opt_edge @ 00100e4c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_obf_opt_edge(void)

{
 int *piVar1;
 byte bVar2;
 uint uVar3;
 int iVar4;
 int iVar5;
 size_t sVar6;
 ulong uVar7;
 byte bVar8;
 int iVar9;
 long lVar10;
 byte *pbVar11;
 char local_40 [32];
 ulong uStack_28;
 
 puts(DAT_001012c9);
 printf(DAT_001010f8,10);
 iVar4 = 6;
 iVar5 = 5;
 do {
 iVar9 = iVar4;
 /* Unresolved local var: int b@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int p1@[???]
 Unresolved local var: int p3@[???]
 Unresolved local var: int temp@[DW_OP_reg10(x10)] */
 iVar4 = 0;
 if (iVar9 != 0) {
 iVar4 = iVar5 / iVar9;
 }
 iVar4 = iVar5 - iVar4 * iVar9;
 iVar5 = iVar9;
 } while (iVar4 != 0);
 uVar3 = 0x14;
 if (iVar9 != 1) {
 uVar3 = 0x23;
 }
 printf(DAT_00101114,(ulong)uVar3);
 printf(DAT_00101130,0xe1);
 /* Unresolved local var: char[32] decrypted@[DW_OP_breg31(sp): 0]
 Unresolved local var: char * p@[???] */
 strncpy(local_40,param_string_encrypted,0x20);
 uStack_28 = uStack_28 & 0xffffffffffffff;
 if ((byte)local_40[0] != 0) {
 pbVar11 = (byte *)((ulong)local_40 | 1);
 bVar8 = (byte)local_40[0];
 do {
 bVar2 = bVar8 ^ 0x5a;
 bVar8 = *pbVar11;
 pbVar11[-1] = bVar2;
 pbVar11 = pbVar11 + 1;
 } while (bVar8 != 0);
 }
 sVar6 = strlen((char *)local_40);
 printf(DAT_0010114d,(ulong)((int)sVar6 + (uint)(byte)local_40[0]));
 uVar3 = param_tail_call_optimized(1000,0);
 printf(DAT_00101169,(ulong)uVar3);
 uVar3 = param_non_tail_call(100);
 printf(DAT_00101193,(ulong)uVar3);
 /* Unresolved local var: int[8] c@[DW_OP_breg31(sp): 0] */
 lVar10 = 0;
 local_40[2] = 0;
 local_40[3] = 0;
 local_40[0] = 0;
 local_40[1] = 0;
 uStack_28 = 0;
 local_40[4] = 0;
 local_40[5] = 0;
 do {
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 *(int *)((long)local_40 + lVar10) =
 *(int *)((long)DAT_001010d8 + lVar10) + *(int *)((long)DAT_001010b8 + lVar10);
 lVar10 = lVar10 + 4;
 } while (lVar10 != 0x20);
 lVar10 = 0;
 uVar7 = 0;
 do {
 piVar1 = (int *)((long)local_40 + lVar10);
 /* Unresolved local var: int i@[???] */
 lVar10 = lVar10 + 4;
 uVar7 = (ulong)(uint)(*piVar1 + (int)uVar7);
 } while (lVar10 != 0x20);
 printf(DAT_001011b8,uVar7);
 printf(DAT_001011de,0x14);
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 iVar4 = param_division_by_zero(5);
 iVar5 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 printf(DAT_001011fe,(ulong)(uint)(iVar5 + iVar4));
 /* Unresolved local var: int valid@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 local_40[0] = 0x2a;
 iVar4 = param_null_pointer_deref((int *)local_40);
 iVar5 = param_null_pointer_deref((int *)0x0);
 signal(0xb,(__sighandler_t)0x0);
 printf(DAT_0010121a,(ulong)(uint)(iVar5 + iVar4));
 printf(DAT_00101237,0x1e);
 printf(DAT_00101254,2000000000);
 printf(DAT_00101285,10);
 printf(DAT_001012a2,0x30);
 return;
}



/* Function: main @ 00101088 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_obf_opt_edge();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 43 */
