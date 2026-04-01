/* Auto-injected type definitions by preprocessor */
#include <stdint.h>
#include <stddef.h>
typedef unsigned long size_t;

/* Ghidra macro for concatenating two 32-bit values into a 64-bit value */
#define CONCAT44(hi, lo) (((uint64_t)(hi) << 32) | (uint32_t)(lo))
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
/* ptrdiff_t is defined in stddef.h */
typedef long long antimax_t;
/* uintmax_t is defined in stdint.h */
typedef unsigned char byte;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned long long undefined8;
typedef unsigned int undefined4;
typedef unsigned char undefined;
typedef int bool;

/* Required includes */
#include <setjmp.h>
#include <signal.h>
#include <stdlib.h>
#include <string.h>

/* Global variables for signal handlers */
static jmp_buf jmp_buffer;
static jmp_buf segv_buffer;

/* External data references from binary */
extern char DAT_00102008[];
extern char DAT_00102038[];
extern char DAT_00102068[];
extern char DAT_001020b8[];
extern char DAT_001020d8[];
extern char DAT_00102110[];
extern char DAT_00102137[];
extern char DAT_00102153[];
extern char DAT_0010216f[];
extern char DAT_0010218c[];
extern char DAT_001021a8[];
extern char DAT_001021c4[];
extern char DAT_001021e1[];
extern char DAT_001021fe[];

/* Data definitions for format strings */
char DAT_00102008[] = "Testing Antigravity Compiler Optimizations\n";
char DAT_00102038[] = "%d\n";
char DAT_00102068[] = "%d\n";
char DAT_001020b8[] = "Link-time optimization result: %d\n";
char DAT_001020d8[] = "Integer overflow result: %d\n";
char DAT_00102110[] = "Implementation-defined behavior result: %d\n";
char DAT_00102137[] = "Opaque predicate result: %d\n";
char DAT_00102153[] = "Tail call optimization result: %d\n";
char DAT_0010216f[] = "Instruction substitution result: %d\n";
char DAT_0010218c[] = "String encryption result: %d\n";
char DAT_001021a8[] = "Division by zero result: %d\n";
char DAT_001021c4[] = "Null pointer dereference result: %d\n";
char DAT_001021e1[] = "Buffer overflow result: %d\n";
char DAT_001021fe[] = "Undefined behavior result: %d\n";

/* Encrypted string placeholder - actual encrypted data would be here */
char encrypted_0[] = "????????????????????????????";

static volatile int div_zero_caught = 0;
static volatile int segv_caught = 0;

/* Helper function to cause invalid instruction / division by zero */
static inline void trigger_trap(void) {
    int x = 0;
    volatile int result = 1 / x;
    (void)result;
}

/* External data - encrypted string placeholder */
extern char encrypted_0[];

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/7/7_gcc_O3_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 (*(void (*)(void))(undefined *)0x0)();
 return;
}



/* Function: main @ 00101180 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_obf_opt_edge();
 return 0;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: div_zero_handler @ 00101290 */

void div_zero_handler(int sig)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 __longjmp_chk(jmp_buffer,1);
}



/* Function: segv_handler @ 001012c0 */

void segv_handler(int sig)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 __longjmp_chk(segv_buffer,1);
}



/* Function: param_division_by_zero_trap @ 001012f0 */

int param_division_by_zero_trap(int x)

{
 int iVar2;
 
 signal(8,div_zero_handler);
 iVar2 = _setjmp(jmp_buffer);
 if (iVar2 == 0) {
 /* WARNING: Does not return */
 trigger_trap();
 }
 return -1;
}



/* Function: param_division_by_zero @ 00101330 */

int param_division_by_zero(int x)

{
 int iVar1;
 
 signal(8,div_zero_handler);
 iVar1 = _setjmp(jmp_buffer);
 /* Unresolved local var: int y@[???] */
 return (-(uint)(iVar1 == 0) & 3) - 1;
}



/* Function: param_fake_branch @ 00101370 */

int param_fake_branch(int x)

{
 return x;
}



/* Function: call_fake_branch @ 00101380 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fake_branch(void)

{
 return 10;
}



/* Function: param_opaque_predicate @ 00101390 */

int param_opaque_predicate(int x)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 
 iVar2 = x + 1;
 iVar4 = iVar2;
 iVar1 = x;
 if (iVar2 != 0) {
 do {
 /* Unresolved local var: int temp@[???] */
 iVar3 = iVar4;
 iVar4 = iVar1 % iVar3;
 iVar1 = iVar3;
 } while (iVar4 != 0);
 if ((iVar3 == 1) && (x * 2 + 1 + x * x == iVar2 * iVar2)) {
 return x * 2 + 10;
 }
 }
 return x * 3 + 0x14;
}



/* Function: call_opaque_predicate @ 001013e0 */

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
 iVar3 = 6;
 iVar1 = 5;
 do {
 /* Unresolved local var: int temp@[???] */
 iVar2 = iVar3;
 iVar3 = iVar1 % iVar2;
 iVar1 = iVar2;
 } while (iVar3 != 0);
 iVar3 = 0x14;
 if (iVar2 != 1) {
 iVar3 = 0x23;
 }
 return iVar3;
}



/* Function: param_instruction_substitution @ 00101410 */

int param_instruction_substitution(int x)

{
 return x * 0x15 + ((uint)x >> 1) + (x & 0xfU);
}



/* Function: call_instruction_substitution @ 00101430 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_instruction_substitution(void)

{
 return 0xe1;
}



/* Function: decrypt_string @ 00101440 */

char * decrypt_string(char *encrypted,char *buffer,size_t len,char key)

{
 byte bVar1;
 byte *pbVar2;
 byte *pbVar3;
 
 pbVar3 = (byte *)strncpy(buffer,encrypted,len);
 pbVar3[len - 1] = 0;
 bVar1 = *pbVar3;
 pbVar2 = pbVar3;
 while (bVar1 != 0) {
 *pbVar2 = bVar1 ^ key;
 bVar1 = pbVar2[1];
 pbVar2 = pbVar2 + 1;
 }
 return (char *)pbVar3;
}



/* Function: param_string_encryption @ 00101490 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_string_encryption(void)

{
 byte bVar1;
 long lVar2;
 byte *pbVar3;
 byte *__s;
 size_t sVar4;
 long in_FS_OFFSET;
 char decrypted [32];
 
 /* Unresolved local var: char * p@[???] */
 lVar2 = *(long *)(in_FS_OFFSET + 0x28);
 __s = (byte *)strncpy(decrypted,(char *)&encrypted_0,0x1f);
 decrypted[0x1f] = '\0';
 pbVar3 = __s;
 bVar1 = decrypted[0];
 while (bVar1 != 0) {
 *pbVar3 = bVar1 ^ 0x5a;
 bVar1 = pbVar3[1];
 pbVar3 = pbVar3 + 1;
 }
 sVar4 = strlen((char *)__s);
 if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
 return (int)sVar4 + (int)decrypted[0];
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_string_encryption @ 00101510 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_encryption(void)

{
 byte bVar1;
 long lVar2;
 byte *pbVar3;
 byte *__s;
 size_t sVar4;
 long in_FS_OFFSET;
 char decrypted [32];
 
 /* Unresolved local var: char * p@[???] */
 lVar2 = *(long *)(in_FS_OFFSET + 0x28);
 __s = (byte *)strncpy(decrypted,(char *)&encrypted_0,0x1f);
 decrypted[0x1f] = '\0';
 pbVar3 = __s;
 bVar1 = decrypted[0];
 while (bVar1 != 0) {
 *pbVar3 = bVar1 ^ 0x5a;
 bVar1 = pbVar3[1];
 pbVar3 = pbVar3 + 1;
 }
 sVar4 = strlen((char *)__s);
 if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
 return (int)sVar4 + (int)decrypted[0];
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_tail_call_optimized @ 00101590 */

int param_tail_call_optimized(int n,int acc)

{
 int iVar1;
 uint uVar2;
 bool bVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 
 if (n < 1) {
 return acc;
 }
 if (10 < n) {
 uVar2 = 0;
 iVar4 = 0;
 iVar5 = 0;
 iVar6 = 0;
 iVar7 = 0;
 iVar1 = n;
 iVar8 = n + -1;
 iVar9 = n + -2;
 iVar10 = n + -3;
 do {
 uVar2 = uVar2 + 1;
 iVar4 = iVar4 + iVar1;
 iVar5 = iVar5 + iVar8;
 iVar6 = iVar6 + iVar9;
 iVar7 = iVar7 + iVar10;
 iVar1 = iVar1 + -4;
 iVar8 = iVar8 + -4;
 iVar9 = iVar9 + -4;
 iVar10 = iVar10 + -4;
 } while ((uint)n >> 2 != uVar2);
 acc = iVar4 + iVar6 + iVar5 + iVar7 + acc;
 bVar3 = n == (n & 0xfffffffcU);
 n = n - (n & 0xfffffffcU);
 if (bVar3) {
 return acc;
 }
 }
 iVar1 = acc + n;
 if (n + -1 != 0) {
 iVar1 = iVar1 + n + -1;
 if (n + -2 != 0) {
 iVar1 = iVar1 + n + -2;
 if (n + -3 != 0) {
 iVar1 = iVar1 + n + -3;
 if (n + -4 != 0) {
 iVar1 = iVar1 + n + -4;
 if (n + -5 != 0) {
 iVar1 = iVar1 + n + -5;
 if (n + -6 != 0) {
 iVar1 = iVar1 + n + -6;
 if (n + -7 != 0) {
 iVar1 = iVar1 + n + -7;
 if (n + -8 != 0) {
 iVar1 = n + -9 + iVar1 + n + -8;
 }
 }
 }
 }
 }
 }
 }
 }
 return iVar1;
}



/* Function: call_tail_call_optimized @ 00101670 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_tail_call_optimized(void)

{
 return 0x7a314;
}



/* Function: param_non_tail_call @ 00101680 */

int param_non_tail_call(int n)

{
 uint uVar1;
 bool bVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 
 if (n < 1) {
 return 0;
 }
 if (n < 0xb) {
 iVar4 = 0;
 }
 else {
 uVar1 = 0;
 iVar3 = 0;
 iVar5 = 0;
 iVar6 = 0;
 iVar7 = 0;
 iVar4 = n;
 iVar8 = n + -1;
 iVar9 = n + -2;
 iVar10 = n + -3;
 do {
 uVar1 = uVar1 + 1;
 iVar3 = iVar3 + iVar4;
 iVar5 = iVar5 + iVar8;
 iVar6 = iVar6 + iVar9;
 iVar7 = iVar7 + iVar10;
 iVar4 = iVar4 + -4;
 iVar8 = iVar8 + -4;
 iVar9 = iVar9 + -4;
 iVar10 = iVar10 + -4;
 } while ((uint)n >> 2 != uVar1);
 iVar4 = iVar3 + iVar6 + iVar5 + iVar7;
 bVar2 = n == (n & 0xfffffffcU);
 n = n - (n & 0xfffffffcU);
 if (bVar2) {
 return iVar4;
 }
 }
 iVar4 = iVar4 + n;
 if (n + -1 != 0) {
 iVar4 = iVar4 + n + -1;
 if (n + -2 != 0) {
 iVar4 = iVar4 + n + -2;
 if (n + -3 != 0) {
 iVar4 = iVar4 + n + -3;
 if (n + -4 != 0) {
 iVar4 = iVar4 + n + -4;
 if (n + -5 != 0) {
 iVar4 = iVar4 + n + -5;
 if (n + -6 != 0) {
 iVar4 = iVar4 + n + -6;
 if (n + -7 != 0) {
 iVar4 = iVar4 + n + -7;
 if (n + -8 != 0) {
 iVar4 = n + -9 + n + -8 + iVar4;
 }
 }
 }
 }
 }
 }
 }
 }
 return iVar4;
}



/* Function: call_non_tail_call @ 00101760 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_non_tail_call(void)

{
 return 0x13ba;
}



/* Function: param_vectorized_loop @ 00101770 */

int param_vectorized_loop(int *a,int *b,int *c,int n)

{
 int *piVar1;
 int *piVar2;
 int iVar3;
 int iVar4;
 int *piVar5;
 long lVar6;
 int *piVar7;
 uint uVar8;
 uint uVar9;
 int iVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 ulong uVar10;
 
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 return 0;
 }
 if (((ulong)((long)c - (long)(a + 1)) < 9 || (ulong)((long)c - (long)(b + 1)) < 9) || (n == 1)) {
 lVar6 = 0;
 do {
 c[lVar6] = b[lVar6] + a[lVar6];
 lVar6 = lVar6 + 1;
 } while (lVar6 != n);
LAB_0010182f:
 if (n - 1U < 3) {
 uVar9 = 0;
 iVar11 = 0;
 goto LAB_00101893;
 }
 }
 else {
 if (n - 1U < 3) {
 uVar10 = 0;
 uVar8 = 0;
 uVar9 = n;
LAB_00101804:
 *(ulong *)(c + uVar10) =
 CONCAT44((int)((ulong)*(undefined8 *)(a + uVar10) >> 0x20) +
 (int)((ulong)*(undefined8 *)(b + uVar10) >> 0x20),
 (int)*(undefined8 *)(a + uVar10) + (int)*(undefined8 *)(b + uVar10));
 uVar8 = uVar8 + (uVar9 & 0xfffffffe);
 if (uVar9 != (uVar9 & 0xfffffffe)) {
LAB_00101824:
 c[(int)uVar8] = b[(int)uVar8] + a[(int)uVar8];
 }
 goto LAB_0010182f;
 }
 lVar6 = 0;
 do {
 piVar7 = (int *)((long)a + lVar6);
 iVar11 = piVar7[1];
 iVar12 = piVar7[2];
 iVar13 = piVar7[3];
 piVar1 = (int *)((long)b + lVar6);
 iVar14 = piVar1[1];
 iVar3 = piVar1[2];
 iVar4 = piVar1[3];
 piVar2 = (int *)((long)c + lVar6);
 *piVar2 = *piVar7 + *piVar1;
 piVar2[1] = iVar11 + iVar14;
 piVar2[2] = iVar12 + iVar3;
 piVar2[3] = iVar13 + iVar4;
 lVar6 = lVar6 + 0x10;
 } while ((ulong)((uint)n >> 2) << 4 != lVar6);
 uVar8 = n & 0xfffffffc;
 uVar10 = (ulong)uVar8;
 if (n != uVar8) {
 uVar9 = n - uVar8;
 if (n - uVar8 != 1) goto LAB_00101804;
 goto LAB_00101824;
 }
 }
 iVar11 = 0;
 iVar12 = 0;
 iVar13 = 0;
 iVar14 = 0;
 piVar7 = c;
 do {
 /* Unresolved local var: int i@[???] */
 iVar3 = *piVar7;
 piVar1 = piVar7 + 1;
 piVar2 = piVar7 + 2;
 piVar5 = piVar7 + 3;
 piVar7 = piVar7 + 4;
 iVar11 = iVar11 + iVar3;
 iVar12 = iVar12 + *piVar1;
 iVar13 = iVar13 + *piVar2;
 iVar14 = iVar14 + *piVar5;
 } while (piVar7 != c + (ulong)(((uint)n >> 2) - 1) * 4 + 4);
 uVar9 = n & 0xfffffffc;
 iVar11 = iVar11 + iVar13 + iVar12 + iVar14;
 if ((n & 3U) == 0) {
 return iVar11;
 }
LAB_00101893:
 iVar11 = iVar11 + c[(int)uVar9];
 if (((int)(uVar9 + 1) < n) && (iVar11 = iVar11 + c[(long)(int)uVar9 + 1], (int)(uVar9 + 2) < n)) {
 return iVar11 + c[(long)(int)uVar9 + 2];
 }
 return iVar11;
}



/* Function: call_vectorized_loop @ 00101900 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorized_loop(void)

{
 return 0x48;
}



/* Function: param_link_time_optimization @ 00101910 */

int param_link_time_optimization(int x)

{
 return x * 2 + 10;
}



/* Function: call_link_time_optimization @ 00101920 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_link_time_optimization(void)

{
 return 0x14;
}



/* Function: call_division_by_zero_impl @ 00101930 */

int call_division_by_zero_impl(int x)

{
 int iVar1;
 
 signal(8,div_zero_handler);
 iVar1 = _setjmp(jmp_buffer);
 if (iVar1 == 0) {
 /* Unresolved local var: int y@[???] */
 iVar1 = (int)(10 / (long)x);
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_division_by_zero @ 00101980 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_division_by_zero(void)

{
 int iVar1;
 int iVar2;
 int in_EDI;
 
 iVar1 = param_division_by_zero(in_EDI);
 iVar2 = param_division_by_zero(in_EDI);
 signal(8,(__sighandler_t)0x0);
 return iVar1 + iVar2;
}



/* Function: param_null_pointer_deref @ 001019b0 */

int param_null_pointer_deref(int *p)

{
 int iVar1;
 
 signal(0xb,segv_handler);
 iVar1 = _setjmp(segv_buffer);
 if (iVar1 == 0) {
 /* Unresolved local var: int val@[???] */
 iVar1 = *p;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_null_pointer_deref @ 00101a00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_null_pointer_deref(void)

{
 int iVar1;
 int iVar2;
 long in_FS_OFFSET;
 int valid;
 long local_20;
 
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 valid = 0x2a;
 iVar1 = param_null_pointer_deref(&valid);
 iVar2 = param_null_pointer_deref((int *)0x0);
 signal(0xb,(__sighandler_t)0x0);
 if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar1 + iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_buffer_overflow_stack @ 00101a70 */

undefined4 param_buffer_overflow_stack(undefined4 param_1)

{
 return param_1;
}



/* Function: param_buffer_overflow_heap @ 00101a80 */

int param_buffer_overflow_heap(int x)

{
 void *__ptr;
 
 __ptr = malloc(0x10);
 if (__ptr != (void *)0x0) {
 free(__ptr);
 return x;
 }
 return -2;
}



/* Function: call_buffer_overflow @ 00101ab0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_buffer_overflow(void)

{
 int iVar1;
 void *__ptr;
 
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



/* Function: param_integer_overflow @ 00101ae0 */

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



/* Function: call_integer_overflow @ 00101b10 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_integer_overflow(void)

{
 return 2000000000;
}



/* Function: param_undefined_behavior @ 00101b20 */

int param_undefined_behavior(int i)

{
 return i * 2;
}



/* Function: call_undefined_behavior @ 00101b30 */

undefined8 call_undefined_behavior(void)

{
 return 10;
}



/* Function: param_implementation_defined @ 00101b40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_implementation_defined(void)

{
 return 0x2f;
}



/* Function: call_implementation_defined @ 00101b50 */

undefined8 call_implementation_defined(void)

{
 return 0x2f;
}



/* Function: test_obf_opt_edge @ 00101b60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_obf_opt_edge(void)

{
 byte bVar1;
 long lVar2;
 long lVar3;
 byte *pbVar4;
 int iVar5;
 int iVar6;
 byte *__s;
 size_t sVar7;
 void *__ptr;
 ulong uVar8;
 undefined8 uVar9;
 long in_FS_OFFSET;
 int valid;
 char decrypted [32];
 
 lVar2 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_00102008);
 __printf_chk(1,&DAT_00102137,10);
 /* Unresolved local var: int p1@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int b@[???]
 Unresolved local var: int p2@[???]
 Unresolved local var: int p3@[???] */
 uVar8 = 6;
 iVar5 = 5;
 do {
 /* Unresolved local var: int temp@[???] */
 iVar6 = (int)uVar8;
 lVar3 = (long)iVar5;
 uVar8 = lVar3 % (long)iVar6 & 0xffffffff;
 iVar5 = iVar6;
 } while ((int)(lVar3 % (long)iVar6) != 0);
 uVar9 = 0x14;
 if (iVar6 != 1) {
 uVar9 = 0x23;
 }
 __printf_chk(1,&DAT_00102153,uVar9);
 __printf_chk(1,&DAT_0010216f,0xe1);
 /* Unresolved local var: char * p@[???] */
 __s = (byte *)strncpy(decrypted,(char *)&encrypted_0,0x1f);
 decrypted[0x1f] = '\0';
 pbVar4 = __s;
 bVar1 = decrypted[0];
 while (bVar1 != 0) {
 *pbVar4 = bVar1 ^ 0x5a;
 bVar1 = pbVar4[1];
 pbVar4 = pbVar4 + 1;
 }
 sVar7 = strlen((char *)__s);
 __printf_chk(1,&DAT_0010218c,(int)decrypted[0] + (int)sVar7);
 __printf_chk(1,&DAT_00102038,0x7a314);
 __printf_chk(1,&DAT_00102068,0x13ba);
 call_vectorized_loop();
 iVar6 = 1;
 __printf_chk(1,&DAT_001020b8,0x14);
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 iVar5 = param_division_by_zero(iVar6);
 iVar6 = param_division_by_zero(iVar6);
 signal(8,(__sighandler_t)0x0);
 __printf_chk(1,&DAT_001021a8,iVar5 + iVar6);
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 valid = 0x2a;
 iVar5 = param_null_pointer_deref(&valid);
 iVar6 = param_null_pointer_deref((int *)0x0);
 signal(0xb,(__sighandler_t)0x0);
 __printf_chk(1,&DAT_001021c4,iVar5 + iVar6);
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: char * heap_buffer@[???] */
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 uVar9 = 8;
 }
 else {
 free(__ptr);
 uVar9 = 0x1e;
 }
 __printf_chk(1,&DAT_001021e1,uVar9);
 __printf_chk(1,&DAT_001020d8,2000000000);
 __printf_chk(1,&DAT_001021fe,10);
 if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
 __printf_chk(1,&DAT_00102110,0x2f);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 43 */
