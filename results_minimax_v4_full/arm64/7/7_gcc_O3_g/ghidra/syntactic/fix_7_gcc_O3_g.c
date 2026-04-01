/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
/* int64_t defined by stdint.h */
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Standard library includes */
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <signal.h>

/* Missing type definitions */
typedef void (*__sighandler_t)(int);
typedef struct __jmp_buf_tag {
    long __fl;
    long __gs;
    long __fs;
    long __es;
    long __ds;
    long __edi;
    long __esi;
    long __ebp;
    long __ebx;
    long __edx;
    long __ecx;
    long __eax;
    long __eip;
    long __cs;
    long __eflags;
    long __esp;
    long __ss;
    long __savesgs;
    long __savesp;
    long __saveds;
    long __savees;
    long __savefs;
} __jmp_buf_tag[1];

/* Stack protection canary - only ___stack_chk_guard needed for this binary */
unsigned long ___stack_chk_guard = 0;

/* Encrypted string (placeholder - 31 bytes as indicated by 0x1f copy) */
static char encrypted_0[31] = {0};

/* String data references from binary (placeholders) */
static char DAT_00101638[] = "Test\n";
static char DAT_00101668[] = "Value: %d\n";
static char DAT_00101688[] = "Opaque predicate result: %d\n";
static char DAT_001016a8[] = "Instruction sub result: %d\n";
static char DAT_001016c8[] = "String encrypt result: %d\n";
static char DAT_001016e8[] = "Tail call result: %d\n";
static char DAT_00101718[] = "Non-tail call result: %d\n";
static char DAT_00101740[] = "Vectorized loop result: %d\n";
static char DAT_00101768[] = "LTO result: %d\n";
static char DAT_00101788[] = "Division result: %d\n";
static char DAT_001017a8[] = "Null pointer result: %d\n";
static char DAT_001017c8[] = "Buffer overflow result: %lu\n";
static char DAT_001017e8[] = "Integer overflow result: %d\n";
static char DAT_00101820[] = "Undefined behavior result: %d\n";
static char DAT_00101840[] = "Implementation defined result: %d\n";

/* Missing global variables */
__jmp_buf_tag jmp_buffer[1];
__jmp_buf_tag segv_buffer[1];
char completed_0 = 0;
unsigned long segv_caught = 0;
unsigned long div_zero_caught = 0;

/* __dso_handle is provided by CRT, declare it extern */
extern void * __dso_handle;

/* Forward declarations */
void test_obf_opt_edge(void);

/* Additional types from decompiler */
typedef uint8_t byte;
typedef uint32_t undefined4;
typedef uint64_t undefined8;
typedef unsigned char undefined1;
typedef unsigned long ulong;
typedef uint32_t uint;
typedef void (*code)(void);
typedef unsigned char undefined;

/* Missing function declarations */
void __cxa_finalize(void *);
/* signal declaration via signal.h */
int _setjmp(__jmp_buf_tag *);
void longjmp(__jmp_buf_tag *, int);
void __stack_chk_fail(void);
void *SoftwareBreakpoint(int a, int b);
#define CONCAT44(hi, lo) (((uint64_t)(hi) << 32) | (uint32_t)(lo))

/* Stub implementation for SoftwareBreakpoint - called but never returns */
void *SoftwareBreakpoint(int a, int b)
{
    /* Software breakpoint - infinite loop to simulate breakpoint */
    while(1) { }
    return 0;
}

/* Stub implementations for missing CRT functions */
void deregister_tm_clones(void)
{
 /* Empty stub - original was removed by preprocessor */
}

/* Stub for __longjmp_chk */
void __longjmp_chk(__jmp_buf_tag *buf)
{
 /* Stub implementation - should use regular longjmp */
 longjmp((__jmp_buf_tag *)buf, 1);
}

/* Data references from binary - declarations already above */

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/7/7_gcc_O3_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00100860 @ 00100860 */

void FUN_00100860(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: main @ 00100980 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_obf_opt_edge();
 return 0;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_00100a7c @ 00100a7c */

void FUN_00100a7c(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: div_zero_handler @ 00100ae0 */

void div_zero_handler(int sig)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 __longjmp_chk(jmp_buffer);
}



/* Function: segv_handler @ 00100b00 */

void segv_handler(int sig)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 __longjmp_chk(segv_buffer);
}



/* Function: param_division_by_zero @ 00100b20 */

int param_division_by_zero(int x)

{
 code *pcVar1;
 int iVar2;
 
 signal(8,div_zero_handler);
 iVar2 = _setjmp((__jmp_buf_tag *)jmp_buffer);
 if (iVar2 == 0) {
 /* WARNING: Does not return */
 pcVar1 = (code *)SoftwareBreakpoint(1000,0x100b50);
 (*pcVar1)();
 }
 return -1;
}



/* Function: FUN_00100b5c @ 00100b5c */

undefined4 FUN_00100b5c(void)

{
 int iVar1;
 undefined4 uVar2;
 
 signal(8,div_zero_handler);
 iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
 uVar2 = 2;
 if (iVar1 != 0) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}



/* Function: param_division_by_zero_variant @ 00100b60 */

int param_division_by_zero_variant(int x)

{
 int iVar1;
 int iVar2;
 
 signal(8,div_zero_handler);
 iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
 /* Unresolved local var: int y@[???] */
 iVar2 = 2;
 if (iVar1 != 0) {
 iVar2 = -1;
 }
 return iVar2;
}



/* Function: param_fake_branch @ 00100ba0 */

int param_fake_branch(int x)

{
 /* Unresolved local var: int result@[DW_OP_reg0(x0)]
 Unresolved local var: char * str@[???] */
 return x;
}



/* Function: call_fake_branch @ 00100ba4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fake_branch(void)

{
 return 10;
}



/* Function: param_opaque_predicate @ 00100bb0 */

int param_opaque_predicate(int x)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 
 /* Unresolved local var: int p1@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int b@[???]
 Unresolved local var: int p2@[???]
 Unresolved local var: int p3@[???] */
 iVar1 = x + 1;
 iVar2 = iVar1;
 iVar3 = x;
 if (iVar1 != 0) {
 do {
 iVar4 = iVar2;
 /* Unresolved local var: int temp@[???] */
 iVar2 = 0;
 if (iVar4 != 0) {
 iVar2 = iVar3 / iVar4;
 }
 iVar2 = iVar3 - iVar2 * iVar4;
 iVar3 = iVar4;
 } while (iVar2 != 0);
 if (x * 2 + x * x + 1 == iVar1 * iVar1 && iVar4 == 1) {
 return x * 2 + 10;
 }
 }
 return x * 3 + 0x14;
}



/* Function: call_opaque_predicate @ 00100c10 */

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
 iVar2 = 6;
 iVar3 = 5;
 do {
 iVar1 = iVar2;
 /* Unresolved local var: int temp@[???] */
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



/* Function: param_instruction_substitution @ 00100c40 */

int param_instruction_substitution(int x)

{
 /* Unresolved local var: int result@[DW_OP_breg0(x0): 0; DW_OP_lit3; DW_OP_shl;
 DW_OP_breg0(x0): 0; DW_OP_lit1; DW_OP_shl; DW_OP_minus; DW_OP_stack_value]
 Unresolved local var: uint ux@[DW_OP_reg0(x0)]
 Unresolved local var: int div2@[DW_OP_breg0(x0): 0; DW_OP_lit1; DW_OP_shr;
 DW_OP_stack_value]
 Unresolved local var: int mod16@[DW_OP_breg0(x0): 0; DW_OP_lit15; DW_OP_and;
 DW_OP_stack_value]
 Unresolved local var: int mul15@[DW_OP_breg0(x0): 0; DW_OP_lit4; DW_OP_shl;
 DW_OP_breg0(x0): 0; DW_OP_minus; DW_OP_stack_value] */
 return x * 0x15 + ((uint)x >> 1) + (x & 0xfU);
}



/* Function: call_instruction_substitution @ 00100c64 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_instruction_substitution(void)

{
 return 0xe1;
}



/* Function: FUN_00100c6c @ 00100c6c */

byte * FUN_00100c6c(char *param_1,char *param_2,size_t param_3,byte param_4)

{
 byte bVar1;
 byte *pbVar2;
 byte *pbVar3;
 
 pbVar2 = (byte *)strncpy(param_2,param_1,param_3);
 pbVar2[param_3 - 1] = 0;
 bVar1 = *pbVar2;
 pbVar3 = pbVar2;
 while (bVar1 != 0) {
 *pbVar3 = param_4 ^ bVar1;
 pbVar3 = pbVar3 + 1;
 bVar1 = *pbVar3;
 }
 return pbVar2;
}



/* Function: decrypt_string @ 00100c70 */

char * decrypt_string(char *encrypted,char *buffer,size_t len,char key)

{
 byte bVar1;
 byte *pbVar2;
 byte *pbVar3;
 
 /* Unresolved local var: char * p@[???] */
 pbVar2 = (byte *)strncpy(buffer,encrypted,len);
 pbVar2[len - 1] = 0;
 bVar1 = *pbVar2;
 pbVar3 = pbVar2;
 while (bVar1 != 0) {
 *pbVar3 = key ^ bVar1;
 pbVar3 = pbVar3 + 1;
 bVar1 = *pbVar3;
 }
 return (char *)pbVar2;
}



/* Function: param_string_encryption @ 00100cd0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_string_encryption(void)

{
 int iVar1;
 byte bVar2;
 long lVar3;
 byte *__s;
 byte *pbVar4;
 size_t sVar5;
 char decrypted [32];
 
 lVar3 = ___stack_chk_guard;
 /* Unresolved local var: char * p@[???] */
 __s = (byte *)strncpy(decrypted, encrypted_0, 0x1f);
 decrypted[0x1f] = '\0';
 pbVar4 = __s;
 bVar2 = decrypted[0];
 while (bVar2 != 0) {
 *pbVar4 = bVar2 ^ 0x5a;
 pbVar4 = pbVar4 + 1;
 bVar2 = *pbVar4;
 }
 sVar5 = strlen((char *)__s);
 iVar1 = (uint)(byte)decrypted[0] + (int)sVar5;
 if (lVar3 - ___stack_chk_guard == 0) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: FUN_00100d6c @ 00100d6c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00100d6c(void)

{
 byte bVar1;
 byte *__s;
 byte *pbVar2;
 size_t sVar3;
 byte abStack_28 [31];
 undefined1 uStack_9;
 long lStack_8;
 
 lStack_8 = ___stack_chk_guard;
 __s = (byte *)strncpy((char *)abStack_28, encrypted_0, 0x1f);
 uStack_9 = 0;
 pbVar2 = __s;
 bVar1 = abStack_28[0];
 while (bVar1 != 0) {
 *pbVar2 = bVar1 ^ 0x5a;
 pbVar2 = pbVar2 + 1;
 bVar1 = *pbVar2;
 }
 sVar3 = strlen((char *)__s);
 if (lStack_8 - ___stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_string_encryption @ 00100d70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_encryption(void)

{
 int iVar1;
 byte bVar2;
 long lVar3;
 byte *__s;
 byte *pbVar4;
 size_t sVar5;
 char decrypted [32];
 
 lVar3 = ___stack_chk_guard;
 /* Unresolved local var: char * p@[???] */
 __s = (byte *)strncpy(decrypted, encrypted_0, 0x1f);
 decrypted[0x1f] = '\0';
 pbVar4 = __s;
 bVar2 = decrypted[0];
 while (bVar2 != 0) {
 *pbVar4 = bVar2 ^ 0x5a;
 pbVar4 = pbVar4 + 1;
 bVar2 = *pbVar4;
 }
 sVar5 = strlen((char *)__s);
 iVar1 = (uint)(byte)decrypted[0] + (int)sVar5;
 if (lVar3 - ___stack_chk_guard == 0) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_tail_call_optimized @ 00100e10 */

int param_tail_call_optimized(int n,int acc)

{
 uint uVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 int iVar8;
 int iVar9;
 
 iVar2 = acc;
 if (0 < n) {
 iVar3 = n;
 if (8 < n) {
 iVar6 = 0;
 iVar7 = 0;
 iVar8 = 0;
 iVar9 = 0;
 uVar1 = 0;
 iVar2 = n;
 iVar3 = n + -1;
 iVar4 = n + -2;
 iVar5 = n + -3;
 do {
 uVar1 = uVar1 + 1;
 iVar6 = iVar6 + iVar2;
 iVar7 = iVar7 + iVar3;
 iVar8 = iVar8 + iVar4;
 iVar9 = iVar9 + iVar5;
 iVar2 = iVar2 + -4;
 iVar3 = iVar3 + -4;
 iVar4 = iVar4 + -4;
 iVar5 = iVar5 + -4;
 } while ((uint)n >> 2 != uVar1);
 iVar3 = n - (n & 0xfffffffcU);
 acc = acc + iVar6 + iVar7 + iVar8 + iVar9;
 if (n == (n & 0xfffffffcU)) {
 return acc;
 }
 }
 iVar2 = acc + iVar3;
 if (iVar3 + -1 != 0) {
 iVar2 = acc + iVar3 + iVar3 + -1;
 if (iVar3 + -2 != 0) {
 iVar2 = iVar2 + iVar3 + -2;
 if (iVar3 + -3 != 0) {
 iVar2 = iVar2 + iVar3 + -3;
 if (iVar3 + -4 != 0) {
 iVar2 = iVar2 + iVar3 + -4;
 if (iVar3 + -5 != 0) {
 iVar4 = iVar2 + iVar3 + -5;
 iVar2 = iVar3 + -7 + iVar3 + -6 + iVar4;
 if (iVar3 + -6 == 0) {
 iVar2 = iVar4;
 }
 }
 }
 }
 }
 }
 }
 return iVar2;
}



/* Function: call_tail_call_optimized @ 00100ee0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_tail_call_optimized(void)

{
 return 0x7a314;
}



/* Function: param_non_tail_call @ 00100ef0 */

int param_non_tail_call(int n)

{
 bool bVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 
 iVar8 = 0;
 if (0 < n) {
 if (n < 9) {
 iVar4 = 0;
 }
 else {
 iVar3 = 0;
 iVar5 = 0;
 iVar6 = 0;
 iVar7 = 0;
 uVar2 = 0;
 iVar8 = n;
 iVar4 = n + -1;
 iVar9 = n + -2;
 iVar10 = n + -3;
 do {
 uVar2 = uVar2 + 1;
 iVar3 = iVar3 + iVar8;
 iVar5 = iVar5 + iVar4;
 iVar6 = iVar6 + iVar9;
 iVar7 = iVar7 + iVar10;
 iVar8 = iVar8 + -4;
 iVar4 = iVar4 + -4;
 iVar9 = iVar9 + -4;
 iVar10 = iVar10 + -4;
 } while ((uint)n >> 2 != uVar2);
 iVar4 = iVar3 + iVar5 + iVar6 + iVar7;
 bVar1 = n == (n & 0xfffffffcU);
 n = n - (n & 0xfffffffcU);
 if (bVar1) {
 return iVar4;
 }
 }
 iVar8 = iVar4 + n;
 if (n + -1 != 0) {
 iVar8 = iVar4 + n + n + -1;
 if (n + -2 != 0) {
 iVar8 = iVar8 + n + -2;
 if (n + -3 != 0) {
 iVar8 = iVar8 + n + -3;
 if (n + -4 != 0) {
 iVar8 = iVar8 + n + -4;
 if (n + -5 != 0) {
 iVar4 = iVar8 + n + -5;
 iVar8 = n + -7 + n + -6 + iVar4;
 if (n + -6 == 0) {
 iVar8 = iVar4;
 }
 }
 }
 }
 }
 }
 }
 return iVar8;
}



/* Function: call_non_tail_call @ 00100fc0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_non_tail_call(void)

{
 return 0x13ba;
}



/* Function: param_vectorized_loop @ 00100fd0 */

int param_vectorized_loop(int *a,int *b,int *c,int n)

{
 bool bVar1;
 uint uVar2;
 int *piVar3;
 ulong uVar5;
 long lVar6;
 int iVar7;
 undefined8 uVar8;
 int iVar9;
 int iVar10;
 undefined8 uVar11;
 int iVar12;
 undefined8 uVar13;
 undefined8 uVar14;
 int *piVar4;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (n < 1) {
 return 0;
 }
 uVar5 = (long)c - (long)(b + 1);
 uVar2 = n - 1;
 bVar1 = (ulong)((long)c - (long)(a + 1)) < 9;
 if (((bVar1 || uVar5 < 9) || uVar2 < 3) ||
 ((!bVar1 && 7 < uVar5) && (bVar1 || uVar5 != 8)) && uVar2 == 3) {
 lVar6 = 0;
 do {
 c[lVar6] = a[lVar6] + b[lVar6];
 lVar6 = lVar6 + 1;
 } while ((int)lVar6 < n);
 if (uVar2 < 3) {
 uVar5 = 0;
 iVar7 = 0;
 goto LAB_001010cc;
 }
 }
 else {
 lVar6 = 0;
 do {
 uVar11 = ((undefined8 *)((long)a + lVar6))[1];
 uVar8 = *(undefined8 *)((long)a + lVar6);
 uVar14 = ((undefined8 *)((long)b + lVar6))[1];
 uVar13 = *(undefined8 *)((long)b + lVar6);
 ((undefined8 *)((long)c + lVar6))[1] =
 CONCAT44((int)((ulong)uVar11 >> 0x20) + (int)((ulong)uVar14 >> 0x20),
 (int)uVar11 + (int)uVar14);
 *(undefined8 *)((long)c + lVar6) =
 CONCAT44((int)((ulong)uVar8 >> 0x20) + (int)((ulong)uVar13 >> 0x20),
 (int)uVar8 + (int)uVar13);
 lVar6 = lVar6 + 0x10;
 } while (lVar6 != (ulong)((uint)n >> 2) * 0x10);
 uVar2 = n & 0xfffffffc;
 if ((n & 3U) != 0) {
 c[uVar2] = b[uVar2] + a[uVar2];
 if (((int)(uVar2 + 1) < n) &&
 (c[(ulong)uVar2 + 1] = a[(ulong)uVar2 + 1] + b[(ulong)uVar2 + 1], (int)(uVar2 + 2) < n)) {
 c[(ulong)uVar2 + 2] = a[(ulong)uVar2 + 2] + b[(ulong)uVar2 + 2];
 }
 }
 }
 iVar7 = 0;
 iVar9 = 0;
 iVar10 = 0;
 iVar12 = 0;
 piVar3 = c;
 do {
 piVar4 = piVar3 + 4;
 /* Unresolved local var: int i@[???] */
 iVar7 = iVar7 + (int)*(undefined8 *)piVar3;
 iVar9 = iVar9 + (int)((ulong)*(undefined8 *)piVar3 >> 0x20);
 iVar10 = iVar10 + (int)*(undefined8 *)(piVar3 + 2);
 iVar12 = iVar12 + (int)((ulong)*(undefined8 *)(piVar3 + 2) >> 0x20);
 piVar3 = piVar4;
 } while (piVar4 != c + (ulong)(((uint)n >> 2) - 1) * 4 + 4);
 iVar7 = iVar7 + iVar9 + iVar10 + iVar12;
 uVar5 = (ulong)(n & 0xfffffffcU);
 if ((n & 0xfffffffcU) == n) {
 return iVar7;
 }
LAB_001010cc:
 iVar9 = (int)uVar5;
 uVar5 = -(uVar5 >> 0x1f) & 0xfffffffc00000000 | uVar5 << 2;
 iVar7 = iVar7 + c[iVar9];
 if ((iVar9 + 1 < n) && (iVar7 = iVar7 + *(int *)((long)c + uVar5 + 4), iVar9 + 2 < n)) {
 iVar7 = iVar7 + *(int *)((long)c + uVar5 + 8);
 }
 return iVar7;
}



/* Function: call_vectorized_loop @ 00101154 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorized_loop(void)

{
 /* Unresolved local var: int[8] a@[???]
 Unresolved local var: int[8] b@[???]
 Unresolved local var: int[8] c@[???] */
 return 0x48;
}



/* Function: param_link_time_optimization @ 00101160 */

int param_link_time_optimization(int x)

{
 return (x + 5) * 2;
}



/* Function: call_link_time_optimization @ 00101170 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_link_time_optimization(void)

{
 return 0x14;
}



/* Function: param_division_by_zero_safe @ 00101180 */

int param_division_by_zero_safe(int x)

{
 int iVar1;
 
 signal(8,div_zero_handler);
 iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
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



/* Function: FUN_001011cc @ 001011cc */

int FUN_001011cc(int param_1)

{
 int x;
 int iVar1;
 
 x = param_division_by_zero(param_1);
 iVar1 = param_division_by_zero(x);
 signal(8,(__sighandler_t)0x0);
 return x + iVar1;
}



/* Function: call_division_by_zero @ 001011d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_division_by_zero(void)

{
 int in_w0;
 int x;
 int iVar1;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 x = param_division_by_zero(in_w0);
 iVar1 = param_division_by_zero(x);
 signal(8,(__sighandler_t)0x0);
 return x + iVar1;
}



/* Function: param_null_pointer_deref @ 00101210 */

int param_null_pointer_deref(int *p)

{
 int iVar1;
 
 signal(0xb,segv_handler);
 iVar1 = _setjmp((__jmp_buf_tag *)segv_buffer);
 if (iVar1 == 0) {
 /* Unresolved local var: int val@[???] */
 iVar1 = *p;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_null_pointer_deref @ 00101260 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_null_pointer_deref(void)

{
 int iVar1;
 int iVar2;
 int valid;
 long local_8;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 local_8 = ___stack_chk_guard;
 valid = 0x2a;
 iVar1 = param_null_pointer_deref(&valid);
 iVar2 = param_null_pointer_deref((int *)0x0);
 signal(0xb,(__sighandler_t)0x0);
 if (local_8 - ___stack_chk_guard == 0) {
 return iVar1 + iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_buffer_overflow_stack @ 001012e0 */

void param_buffer_overflow_stack(void)

{
 return;
}



/* Function: param_buffer_overflow_heap @ 001012e4 */

int param_buffer_overflow_heap(int x)

{
 void *__ptr;
 
 /* Unresolved local var: char * heap_buffer@[???] */
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 x = -2;
 }
 else {
 free(__ptr);
 }
 return x;
}



/* Function: FUN_0010131c @ 0010131c */

undefined8 FUN_0010131c(void)

{
 void *__ptr;
 undefined8 uVar1;
 
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 uVar1 = 8;
 }
 else {
 free(__ptr);
 uVar1 = 0x1e;
 }
 return uVar1;
}



/* Function: call_buffer_overflow @ 00101320 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_buffer_overflow(void)

{
 int iVar1;
 void *__ptr;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: char * heap_buffer@[???] */
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



/* Function: param_integer_overflow @ 00101350 */

int param_integer_overflow(int a,int b)

{
 int iVar1;
 
 /* Unresolved local var: int signed_sum@[???]
 Unresolved local var: uint ua@[???]
 Unresolved local var: uint ub@[???]
 Unresolved local var: uint unsigned_sum@[???] */
 iVar1 = a + b;
 if (0 < a && 0 < b) {
 if (iVar1 < 0) {
 iVar1 = -1;
 }
 return iVar1;
 }
 if ((a & b) < 0 && 0 < iVar1) {
 iVar1 = -2;
 }
 return iVar1;
}



/* Function: call_integer_overflow @ 00101384 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_integer_overflow(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 2000000000;
}



/* Function: param_undefined_behavior @ 00101390 */

int param_undefined_behavior(int i)

{
 /* Unresolved local var: int local@[???] */
 return i << 1;
}



/* Function: call_undefined_behavior @ 001013a0 */

undefined8 call_undefined_behavior(void)

{
 return 10;
}



/* Function: param_implementation_defined @ 001013b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_implementation_defined(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: char c@[???]
 Unresolved local var: int s@[???]
 Unresolved local var: anon_struct_4_3_4e909822 bitfield@[???] */
 return 0x30;
}



/* Function: call_implementation_defined @ 001013c0 */

undefined8 call_implementation_defined(void)

{
 return 0x30;
}



/* Function: test_obf_opt_edge @ 001013d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_obf_opt_edge(void)

{
 long lVar1;
 int iVar2;
 undefined4 uVar3;
 int iVar4;
 int iVar5;
 byte *pbVar6;
 size_t sVar7;
 void *__ptr;
 undefined8 uVar8;
 uint uVar9;
 int valid;
 char decrypted [32];
 
 lVar1 = ___stack_chk_guard;
 puts(DAT_00101638);
 __printf_chk(1,DAT_00101668,10);
 /* Unresolved local var: int p1@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int b@[???]
 Unresolved local var: int p2@[???]
 Unresolved local var: int p3@[???] */
 iVar4 = 6;
 iVar5 = 5;
 do {
 iVar2 = iVar4;
 /* Unresolved local var: int temp@[???] */
 iVar4 = 0;
 if (iVar2 != 0) {
 iVar4 = iVar5 / iVar2;
 }
 iVar4 = iVar5 - iVar4 * iVar2;
 iVar5 = iVar2;
 } while (iVar4 != 0);
 uVar3 = 0x14;
 if (iVar2 != 1) {
 uVar3 = 0x23;
 }
 __printf_chk(1,DAT_00101688,uVar3);
 /* Unresolved local var: char * p@[???] */
 __printf_chk(1,DAT_001016a8,0xe1);
 strncpy(decrypted,encrypted_0,0x1f);
 uVar9 = (uint)(byte)decrypted[0];
 decrypted[0x1f] = '\0';
 pbVar6 = (byte *)decrypted;
 if (decrypted[0] != '\0') {
 do {
 *pbVar6 = (byte)uVar9 ^ 0x5a;
 uVar9 = (uint)pbVar6[1];
 pbVar6 = pbVar6 + 1;
 } while (uVar9 != 0);
 uVar9 = (uint)(byte)decrypted[0];
 }
 sVar7 = strlen(decrypted);
 __printf_chk(1,DAT_001016c8,uVar9 + (int)sVar7);
 __printf_chk(1,DAT_001016e8,0x7a314);
 __printf_chk(1,DAT_00101718,0x13ba);
 __printf_chk(1,DAT_00101740,0x48);
 iVar4 = __printf_chk(1,DAT_00101768,0x14);
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 iVar4 = param_division_by_zero(iVar4);
 iVar5 = param_division_by_zero(iVar4);
 signal(8,(__sighandler_t)0x0);
 __printf_chk(1,DAT_00101788,iVar4 + iVar5);
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 valid = 0x2a;
 iVar4 = param_null_pointer_deref(&valid);
 iVar5 = param_null_pointer_deref((int *)0x0);
 signal(0xb,(__sighandler_t)0x0);
 __printf_chk(1,DAT_001017a8,iVar4 + iVar5);
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: char * heap_buffer@[???] */
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 uVar8 = 8;
 }
 else {
 free(__ptr);
 uVar8 = 0x1e;
 }
 __printf_chk(1,DAT_001017c8,uVar8);
 __printf_chk(1,DAT_001017e8,2000000000);
 __printf_chk(1,DAT_00101820,10);
 if (lVar1 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 __printf_chk(1,DAT_00101840,0x30);
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 50 */
