#include <string.h>
#include <stdio.h>
#include <signal.h>
#include <setjmp.h>
#include <stdint.h>

/* Auto-injected type definitions by preprocessor */
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long ptrdiff_t;

/* Additional type definitions for decompiled code */
typedef unsigned char byte;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef uint64_t undefined8;
typedef uint8_t undefined1;
typedef void (*code)(void);
typedef void (*__sighandler_t)(int);

/* Macro definitions */
#define CONCAT44(high, low) (((unsigned long long)(high) << 32) | (unsigned int)(low))

/* Global variable declarations */
static int div_zero_caught = 0;
static int segv_caught = 0;
static jmp_buf jmp_buffer;
static jmp_buf segv_buffer;
static char completed_0 = 0;
static void *__dso_handle = 0;
static undefined8 DAT_00100f10 = 0;
static undefined8 DAT_00100f30 = 0;
static undefined8 UNK_00100f38 = 0;
static undefined8 UNK_00100f18 = 0;
static char DAT_00101121 = 0;
static char DAT_00100f50 = 0;
static char DAT_00100f6c = 0;
static char DAT_00100f88 = 0;
static char DAT_00100fa5 = 0;
static char DAT_00100fc1 = 0;
static char DAT_00100feb = 0;
static char DAT_00101010 = 0;
static char DAT_00101036 = 0;
static char DAT_00101056 = 0;
static char DAT_00101072 = 0;
static char DAT_0010108f = 0;
static char DAT_001010ac = 0;
static char DAT_001010dd = 0;
static char DAT_001010fa = 0;
static char encrypted[32] = {0};

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/7/7_clang_Os_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

/* Stub implementations for CRT functions - removed to avoid multiple definition */

/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00100730 @ 00100730 */

static void FUN_00100730(void)

{
 (*(code *)(undefined1 *)0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones - stub implementation */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_001008bc @ 001008bc */

static void FUN_001008bc(void)

{
 if (completed_0 == '\0') {
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
 iVar2 = iVar1;
 if (x == -1) {
 iVar4 = -1;
 }
 else {
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



/* Function: call_opaque_predicate @ 00100978 */

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



/* Function: param_instruction_substitution @ 001009a8 */

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



/* Function: call_instruction_substitution @ 001009bc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_instruction_substitution(void)

{
 return 0xe1;
}



/* Function: decrypt_string @ 001009c4 */

static char * decrypt_string(char *encrypted,char *buffer,size_t len,char key)

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



/* Function: param_string_encryption @ 00100a2c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_string_encryption(void)

{
 byte bVar1;
 size_t sVar2;
 byte bVar3;
 byte *pbVar4;
 uint uVar5;
 byte local_40 [31];
 undefined1 local_21;
 
 /* Unresolved local var: char[32] decrypted@[DW_OP_breg31(sp): 0] */
 /* Unresolved local var: char * p@[???] */
 strncpy((char *)local_40,encrypted,0x20);
 local_21 = 0;
 if (local_40[0] == 0) {
 uVar5 = 0;
 }
 else {
 pbVar4 = (byte *)((ulong)local_40 | 1);
 bVar3 = local_40[0];
 do {
 bVar1 = bVar3 ^ 0x5a;
 bVar3 = *pbVar4;
 pbVar4[-1] = bVar1;
 pbVar4 = pbVar4 + 1;
 } while (bVar3 != 0);
 uVar5 = (uint)local_40[0];
 }
 sVar2 = strlen((char *)local_40);
 return (int)sVar2 + uVar5;
}



/* Function: call_string_encryption @ 00100aa4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_encryption(void)

{
 byte bVar1;
 size_t sVar2;
 byte bVar3;
 byte *pbVar4;
 uint uVar5;
 byte abStack_40 [31];
 undefined1 uStack_21;
 
 strncpy((char *)abStack_40,encrypted,0x20);
 uStack_21 = 0;
 if (abStack_40[0] == 0) {
 uVar5 = 0;
 }
 else {
 pbVar4 = (byte *)((ulong)abStack_40 | 1);
 bVar3 = abStack_40[0];
 do {
 bVar1 = bVar3 ^ 0x5a;
 bVar3 = *pbVar4;
 pbVar4[-1] = bVar1;
 pbVar4 = pbVar4 + 1;
 } while (bVar3 != 0);
 uVar5 = (uint)abStack_40[0];
 }
 sVar2 = strlen((char *)abStack_40);
 return (int)sVar2 + uVar5;
}



/* Function: param_tail_call_optimized @ 00100aa8 */

int param_tail_call_optimized(int n,int acc)

{
 uint uVar1;
 
 uVar1 = n - 1;
 if (0 < n) {
 acc = (acc + n + uVar1 * uVar1) - (int)((ulong)uVar1 * (ulong)(n - 2) >> 1);
 }
 return acc;
}



/* Function: call_tail_call_optimized @ 00100ad0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_tail_call_optimized(void)

{
 return 0x7a314;
}



/* Function: param_non_tail_call @ 00100adc */

int param_non_tail_call(int n)

{
 uint uVar1;
 
 uVar1 = n - 1;
 if (0 < n) {
 return (n + uVar1 * uVar1) - (int)((ulong)uVar1 * (ulong)(n - 2) >> 1);
 }
 return 0;
}



/* Function: call_non_tail_call @ 00100b04 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_non_tail_call(void)

{
 return 0x13ba;
}



/* Function: param_vectorized_loop @ 00100b0c */

int param_vectorized_loop(int *a,int *b,int *c,int n)

{
 int iVar1;
 ulong uVar2;
 ulong uVar3;
 int *piVar4;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 uVar2 = (ulong)(uint)n;
 uVar3 = uVar2;
 piVar4 = c;
 do {
 uVar3 = uVar3 - 1;
 *piVar4 = *b + *a;
 a = a + 1;
 b = b + 1;
 piVar4 = piVar4 + 1;
 } while (uVar3 != 0);
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar1 = 0;
 do {
 uVar2 = uVar2 - 1;
 iVar1 = *c + iVar1;
 c = c + 1;
 } while (uVar2 != 0);
 return iVar1;
 }
 }
 return 0;
}



/* Function: call_vectorized_loop @ 00100b60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorized_loop(void)

{
 long lVar1;
 undefined8 uVar2;
 undefined8 uVar3;
 undefined8 local_20 [4];
 
 /* Unresolved local var: int[8] c@[???]
 Unresolved local var: int[8] a@[???]
 Unresolved local var: int[8] b@[???] */
 lVar1 = 0;
 local_20[1] = 0;
 local_20[0] = 0;
 local_20[3] = 0;
 local_20[2] = 0;
 do {
 /* Unresolved local var: int i@[???] */
 uVar2 = *(undefined8 *)(&DAT_00100f10 + lVar1);
 uVar3 = *(undefined8 *)(&DAT_00100f30 + lVar1);
 *(ulong *)((long)local_20 + lVar1 + 8) =
 CONCAT44((int)((ulong)*(undefined8 *)(&UNK_00100f38 + lVar1) >> 0x20) +
 (int)((ulong)*(undefined8 *)(&UNK_00100f18 + lVar1) >> 0x20),
 (int)*(undefined8 *)(&UNK_00100f38 + lVar1) +
 (int)*(undefined8 *)(&UNK_00100f18 + lVar1));
 *(ulong *)((long)local_20 + lVar1) =
 CONCAT44((int)((ulong)uVar3 >> 0x20) + (int)((ulong)uVar2 >> 0x20),(int)uVar3 + (int)uVar2)
 ;
 lVar1 = lVar1 + 0x10;
 } while (lVar1 != 0x20);
 return (int)local_20[2] + (int)local_20[0] +
 (int)((ulong)local_20[2] >> 0x20) + (int)((ulong)local_20[0] >> 0x20) +
 (int)local_20[3] + (int)local_20[1] +
 (int)((ulong)local_20[3] >> 0x20) + (int)((ulong)local_20[1] >> 0x20);
}



/* Function: param_link_time_optimization @ 00100bb4 */

int param_link_time_optimization(int x)

{
 return x * 2 + 10;
}



/* Function: call_link_time_optimization @ 00100bc0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_link_time_optimization(void)

{
 return 0x14;
}



/* Function: div_zero_handler @ 00100bc8 */

static void div_zero_handler(int sig)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(jmp_buffer,1);
}



/* Function: param_division_by_zero @ 00100bec */

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



/* Function: call_division_by_zero @ 00100c38 */

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



/* Function: segv_handler @ 00100c78 */

static void segv_handler(int sig)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(segv_buffer,1);
}



/* Function: param_null_pointer_deref @ 00100c9c */

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



/* Function: call_null_pointer_deref @ 00100ce4 */

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
 signal(0xb,(__sighandler_t)0x0);
 return iVar2 + iVar1;
}



/* Function: param_buffer_overflow_stack @ 00100d34 */

int param_buffer_overflow_stack(int x)

{
 /* Unresolved local var: int canary@[???]
 Unresolved local var: char[8] buffer@[???] */
 return x;
}



/* Function: param_buffer_overflow_heap @ 00100d38 */

int param_buffer_overflow_heap(int x)

{
 /* Unresolved local var: char * heap_buffer@[???] */
 return x;
}



/* Function: call_buffer_overflow @ 00100d3c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_buffer_overflow(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 0x1e;
}



/* Function: param_integer_overflow @ 00100d44 */

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



/* Function: call_integer_overflow @ 00100d7c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_integer_overflow(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 2000000000;
}



/* Function: param_undefined_behavior @ 00100d88 */

int param_undefined_behavior(int i)

{
 /* Unresolved local var: int local@[???] */
 return i << 1;
}



/* Function: call_undefined_behavior @ 00100d90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_undefined_behavior(void)

{
 /* Unresolved local var: int result@[???] */
 return 10;
}



/* Function: param_implementation_defined @ 00100d98 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_implementation_defined(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: char c@[???]
 Unresolved local var: int s@[???]
 Unresolved local var: anon_struct_4_3_4e909822 bitfield@[???] */
 return 0x30;
}



/* Function: call_implementation_defined @ 00100da0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_implementation_defined(void)

{
 return 0x30;
}



/* Function: test_obf_opt_edge @ 00100da8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_obf_opt_edge(void)

{
 int iVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 puts(&DAT_00101121);
 printf(&DAT_00100f50,10);
 iVar1 = 6;
 iVar4 = 5;
 do {
 iVar3 = iVar1;
 /* Unresolved local var: int b@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int p1@[???]
 Unresolved local var: int p3@[???]
 Unresolved local var: int temp@[DW_OP_reg10(x10)] */
 iVar1 = 0;
 if (iVar3 != 0) {
 iVar1 = iVar4 / iVar3;
 }
 iVar1 = iVar4 - iVar1 * iVar3;
 iVar4 = iVar3;
 } while (iVar1 != 0);
 uVar2 = 0x14;
 if (iVar3 != 1) {
 uVar2 = 0x23;
 }
 printf(&DAT_00100f6c,(ulong)uVar2);
 printf(&DAT_00100f88,0xe1);
 uVar2 = param_string_encryption();
 printf(&DAT_00100fa5,(ulong)uVar2);
 printf(&DAT_00100fc1,0x7a314);
 printf(&DAT_00100feb,0x13ba);
 uVar2 = call_vectorized_loop();
 printf(&DAT_00101010,(ulong)uVar2);
 printf(&DAT_00101036,0x14);
 uVar2 = call_division_by_zero();
 printf(&DAT_00101056,(ulong)uVar2);
 uVar2 = call_null_pointer_deref();
 printf(&DAT_00101072,(ulong)uVar2);
 printf(&DAT_0010108f,0x1e);
 printf(&DAT_001010ac,2000000000);
 printf(&DAT_001010dd,10);
 printf(&DAT_001010fa,0x30);
 return;
}



/* Function: main @ 00100ee0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_obf_opt_edge();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 43 */
