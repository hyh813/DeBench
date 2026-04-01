/* Auto-injected type definitions by preprocessor */
#include <signal.h>
#include <setjmp.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
typedef unsigned int uint;

/* Additional type definitions */
typedef void (*code)(void);
typedef void undefined;

/* Global variables */
static char completed_0 = 0;
static int div_zero_caught = 0;
static int segv_caught = 0;
static jmp_buf jmp_buffer;
static jmp_buf segv_buffer;
static void *__dso_handle = 0;
static char DAT_00101180[] = "Test Results:\n";
static char DAT_001011b0[] = "Opaque predicate: %d\n";
static char DAT_001011d0[] = "Instruction substitution: %d\n";
static char DAT_001011f0[] = "String encryption: %d\n";
static char DAT_00101210[] = "Tail call optimized: %d\n";
static char DAT_00101230[] = "Non-tail call: %d\n";
static char DAT_00101260[] = "Vectorized loop: %d\n";
static char DAT_00101288[] = "Link time optimization: %d\n";
static char DAT_001012b0[] = "Division by zero: %d\n";
static char DAT_001012d0[] = "Null pointer deref: %d\n";
static char DAT_001012f0[] = "Buffer overflow: %d\n";
static char DAT_00101310[] = "Integer overflow: %d\n";
static char DAT_00101330[] = "Undefined behavior: %d\n";
static char DAT_00101368[] = "Implementation defined: %d\n";
static char DAT_00101388[] = "Final result: %d\n";
static char param_string_encryption_encrypted[] = "Znbafgnag_fgevat";

/* Forward declarations for missing functions */
extern void __cxa_finalize(void *);
extern void deregister_tm_clones(void);
extern void __longjmp_chk(jmp_buf, int);
extern void __stack_chk_fail(void);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/7/7_gcc_O1_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */

/* Stack canary guards */
uintptr_t ___stack_chk_guard = 0;
uintptr_t __stack_chk_guard = 0;

/* Function: FUN_00100860 @ 00100860 */

void FUN_00100860(void)

{
 /* Null function pointer call - no-op */
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* Function: deregister_tm_clones */

void deregister_tm_clones(void)

{
 /* No-op stub */
 return;
}





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_00100a3c @ 00100a3c */

void FUN_00100a3c(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: div_zero_handler @ 00100a94 */

void div_zero_handler(int sig)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 __longjmp_chk(jmp_buffer, 1);
}



/* Function: segv_handler @ 00100ab4 */

void segv_handler(int sig)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 __longjmp_chk(segv_buffer, 1);
}



/* Function: param_fake_branch @ 00100ad4 */

int param_fake_branch(int x)

{
 /* Unresolved local var: int result@[DW_OP_reg0(x0)]
 Unresolved local var: char * str@[???] */
 return x;
}



/* Function: call_fake_branch @ 00100ad8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fake_branch(void)

{
 return 10;
}



/* Function: param_opaque_predicate @ 00100ae0 */

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
 /* Unresolved local var: int temp@[???] */
 iVar4 = iVar2;
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



/* Function: call_opaque_predicate @ 00100b38 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_opaque_predicate(void)

{
 int iVar1;
 
 iVar1 = param_opaque_predicate(5);
 return iVar1;
}



/* Function: param_instruction_substitution @ 00100b50 */

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



/* Function: call_instruction_substitution @ 00100b74 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_instruction_substitution(void)

{
 return 0xe1;
}



/* Function: decrypt_string @ 00100b7c */

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
 *pbVar2 = key ^ bVar1;
 pbVar2 = pbVar2 + 1;
 bVar1 = *pbVar2;
 }
 return buffer;
}



/* Function: param_string_encryption @ 00100bdc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_string_encryption(void)

{
 int iVar1;
 long lVar2;
 size_t sVar3;
 char decrypted [32];
 
 lVar2 = ___stack_chk_guard;
 decrypt_string(param_string_encryption_encrypted,decrypted,0x20,'Z');
 sVar3 = strlen(decrypted);
 iVar1 = (uint)(byte)decrypted[0] + (int)sVar3;
 if (lVar2 - ___stack_chk_guard == 0) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_string_encryption @ 00100c54 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_encryption(void)

{
 int iVar1;
 
 iVar1 = param_string_encryption();
 return iVar1;
}



/* Function: param_tail_call_optimized @ 00100c68 */

int param_tail_call_optimized(int n,int acc)

{
 int iVar1;
 
 if (0 < n) {
 iVar1 = param_tail_call_optimized(n + -1,n + acc);
 return iVar1;
 }
 return acc;
}



/* Function: call_tail_call_optimized @ 00100c94 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_tail_call_optimized(void)

{
 int iVar1;
 
 iVar1 = param_tail_call_optimized(1000,0);
 return iVar1;
}



/* Function: param_non_tail_call @ 00100cb0 */

int param_non_tail_call(int n)

{
 int iVar1;
 
 if (0 < n) {
 iVar1 = param_non_tail_call(n + -1);
 return iVar1 + n;
 }
 return 0;
}



/* Function: call_non_tail_call @ 00100ce8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_non_tail_call(void)

{
 int iVar1;
 
 iVar1 = param_non_tail_call(100);
 return iVar1;
}



/* Function: param_vectorized_loop @ 00100d00 */

int param_vectorized_loop(int *a,int *b,int *c,int n)

{
 int iVar1;
 long lVar2;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar1 = 0;
 }
 else {
 lVar2 = 0;
 do {
 c[lVar2] = a[lVar2] + b[lVar2];
 lVar2 = lVar2 + 1;
 } while ((int)lVar2 < n);
 lVar2 = 0;
 iVar1 = 0;
 do {
 /* Unresolved local var: int i@[???] */
 iVar1 = iVar1 + c[lVar2];
 lVar2 = lVar2 + 1;
 } while ((int)lVar2 < n);
 }
 return iVar1;
}



/* Function: call_vectorized_loop @ 00100d50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorized_loop(void)

{
 long lVar1;
 int iVar2;
 int a [8];
 int b [8];
 int c [8];
 
 lVar1 = ___stack_chk_guard;
 a[2] = 3;
 a[3] = 4;
 a[0] = 1;
 a[1] = 2;
 a[6] = 7;
 a[7] = 8;
 a[4] = 5;
 a[5] = 6;
 b[2] = 6;
 b[3] = 5;
 b[0] = 8;
 b[1] = 7;
 b[6] = 2;
 b[7] = 1;
 b[4] = 4;
 b[5] = 3;
 c[0] = 0;
 c[1] = 0;
 c[2] = 0;
 c[3] = 0;
 c[4] = 0;
 c[5] = 0;
 c[6] = 0;
 c[7] = 0;
 iVar2 = param_vectorized_loop(a,b,c,8);
 if (lVar1 - ___stack_chk_guard == 0) {
 return iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_link_time_optimization @ 00100dc8 */

int param_link_time_optimization(int x)

{
 return (x + 5) * 2;
}



/* Function: call_link_time_optimization @ 00100dd4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_link_time_optimization(void)

{
 return 0x14;
}



/* Function: param_division_by_zero @ 00100ddc */

int param_division_by_zero(int x)

{
 int iVar1;
 
 signal(8,div_zero_handler);
 iVar1 = _setjmp(jmp_buffer);
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



/* Function: call_division_by_zero @ 00100e28 */

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
 return iVar1 + iVar2;
}



/* Function: param_null_pointer_deref @ 00100e68 */

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



/* Function: call_null_pointer_deref @ 00100eb0 */

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



/* Function: param_buffer_overflow_stack @ 00100f2c */

int param_buffer_overflow_stack(int x)

{
 /* Unresolved local var: char[8] buffer@[???]
 Unresolved local var: int canary@[???] */
 return x;
}



/* Function: param_buffer_overflow_heap @ 00100f30 */

int param_buffer_overflow_heap(int x)

{
 void *__ptr;
 int iVar1;
 
 /* Unresolved local var: char * heap_buffer@[???] */
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 x = -2;
 }
 else {
 iVar1 = 0x21;
 do {
 /* Unresolved local var: int i@[???] */
 iVar1 = iVar1 + -1;
 } while (iVar1 != 0);
 free(__ptr);
 }
 return x;
}



/* Function: call_buffer_overflow @ 00100f74 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_buffer_overflow(void)

{
 int iVar1;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 iVar1 = param_buffer_overflow_heap(0x14);
 return iVar1 + 10;
}



/* Function: param_integer_overflow @ 00100f90 */

int param_integer_overflow(int a,int b)

{
 int iVar1;
 
 /* Unresolved local var: int signed_sum@[???]
 Unresolved local var: uint ua@[???]
 Unresolved local var: uint ub@[???]
 Unresolved local var: uint unsigned_sum@[???] */
 iVar1 = a + b;
 if (((a < 1 || b == 0) || 0 < a && b < 0) || -1 < iVar1) {
 if ((a & b) < 0 && 0 < iVar1) {
 iVar1 = -2;
 }
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_integer_overflow @ 00100fc4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_integer_overflow(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 2000000000;
}



/* Function: param_undefined_behavior @ 00100fd0 */

int param_undefined_behavior(int i)

{
 /* Unresolved local var: int local@[???] */
 return i << 1;
}



/* Function: call_undefined_behavior @ 00100fd8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_undefined_behavior(void)

{
 /* Unresolved local var: int result@[???] */
 return 10;
}



/* Function: param_implementation_defined @ 00100fe0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_implementation_defined(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: char c@[???]
 Unresolved local var: int s@[???]
 Unresolved local var: anon_struct_4_3_4e909822 bitfield@[???] */
 return 0x30;
}



/* Function: call_implementation_defined @ 00100fe8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_implementation_defined(void)

{
 return 0x30;
}



/* Function: test_obf_opt_edge @ 00100ff0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_obf_opt_edge(void)

{
 int iVar1;
 
 puts(DAT_00101180);
 __printf_chk(1,DAT_001011b0,10);
 iVar1 = call_opaque_predicate();
 __printf_chk(1,DAT_001011d0,iVar1);
 __printf_chk(1,DAT_001011f0,0xe1);
 iVar1 = param_string_encryption();
 __printf_chk(1,DAT_00101210,iVar1);
 iVar1 = call_tail_call_optimized();
 __printf_chk(1,DAT_00101230,iVar1);
 iVar1 = call_non_tail_call();
 __printf_chk(1,DAT_00101260,iVar1);
 iVar1 = call_vectorized_loop();
 __printf_chk(1,DAT_00101288,iVar1);
 __printf_chk(1,DAT_001012b0,0x14);
 iVar1 = call_division_by_zero();
 __printf_chk(1,DAT_001012d0,iVar1);
 iVar1 = call_null_pointer_deref();
 __printf_chk(1,DAT_001012f0,iVar1);
 iVar1 = call_buffer_overflow();
 __printf_chk(1,DAT_00101310,iVar1);
 __printf_chk(1,DAT_00101330,2000000000);
 __printf_chk(1,DAT_00101368,10);
 __printf_chk(1,DAT_00101388,0x30);
 return;
}



/* Function: main @ 00101148 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_obf_opt_edge();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 43 */
