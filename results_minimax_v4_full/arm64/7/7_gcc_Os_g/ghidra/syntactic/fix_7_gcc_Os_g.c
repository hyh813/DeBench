/* Auto-injected type definitions by preprocessor */
#include <setjmp.h>
#include <signal.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
/* int64_t defined via int32_t */
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Additional types needed for decompiled code */
typedef unsigned char byte;
typedef unsigned int uint;
typedef unsigned long long undefined8;
typedef void (*code)(void);
typedef void undefined;

/* Stack guard variables */
extern uintptr_t __stack_chk_guard;
uintptr_t ___stack_chk_guard;

/* External symbols from CRT */
extern void __cxa_finalize(void *);
extern void *__dso_handle;
extern int __stack_chk_fail(int, ...);

/* CRT stub functions */
extern void deregister_tm_clones(void);

/* Stub implementation for deregister_tm_clones */
void deregister_tm_clones(void)
{
}

/* Global variables for signal handling */
int div_zero_caught = 0;
int segv_caught = 0;
jmp_buf jmp_buffer;
jmp_buf segv_buffer;

/* longjmp_chk - use regular longjmp for compatibility */
#define __longjmp_chk(buf,val,...) longjmp(buf,val == 0 ? 1 : val)

/* Standard library includes */
#include <stdio.h>

/* Global variables */
char completed_0 = 0;

/* Encrypted string for string encryption test */
char param_string_encryption_encrypted[] = "\x2d\x16\x0e\x19\x08\x1a\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e";

/* Forward declarations */
void test_obf_opt_edge(void);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/7/7_gcc_Os_g
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




/* Function: div_zero_handler @ 00100ad4 */

void div_zero_handler(int sig)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(jmp_buffer, 1);
}



/* Function: segv_handler @ 00100af4 */

void segv_handler(int sig)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(segv_buffer, 1);
}



/* Function: param_fake_branch @ 00100b14 */

int param_fake_branch(int x)

{
 /* Unresolved local var: int result@[DW_OP_reg0(x0)]
 Unresolved local var: char * str@[???] */
 return x;
}



/* Function: call_fake_branch @ 00100b18 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fake_branch(void)

{
 return 10;
}



/* Function: param_opaque_predicate @ 00100b20 */

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
 while (iVar4 = iVar2, iVar4 != 0) {
 /* Unresolved local var: int temp@[???] */
 iVar2 = 0;
 if (iVar4 != 0) {
 iVar2 = iVar3 / iVar4;
 }
 iVar2 = iVar3 - iVar2 * iVar4;
 iVar3 = iVar4;
 }
 iVar2 = x * 3 + 0x14;
 if (x * x + x * 2 + 1 == iVar1 * iVar1 && iVar3 == 1) {
 iVar2 = x * 2 + 10;
 }
 return iVar2;
}



/* Function: call_opaque_predicate @ 00100b78 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_opaque_predicate(void)

{
 int iVar1;
 
 iVar1 = param_opaque_predicate(5);
 return iVar1;
}



/* Function: param_instruction_substitution @ 00100b80 */

int param_instruction_substitution(int x)

{
 /* Unresolved local var: int result@[DW_OP_breg0(x0): 0; DW_OP_lit6; DW_OP_mul;
 DW_OP_stack_value]
 Unresolved local var: uint ux@[DW_OP_reg0(x0)]
 Unresolved local var: int div2@[DW_OP_breg0(x0): 0; DW_OP_lit1; DW_OP_shr;
 DW_OP_stack_value]
 Unresolved local var: int mod16@[DW_OP_breg0(x0): 0; DW_OP_lit15; DW_OP_and;
 DW_OP_stack_value]
 Unresolved local var: int mul15@[DW_OP_breg0(x0): 0; DW_OP_lit15; DW_OP_mul;
 DW_OP_stack_value] */
 return x * 0x15 + ((uint)x >> 1) + (x & 0xfU);
}



/* Function: call_instruction_substitution @ 00100ba4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_instruction_substitution(void)

{
 return 0xe1;
}



/* Function: decrypt_string @ 00100bac */

char * decrypt_string(char *encrypted,char *buffer,size_t len,char key)

{
 byte *pbVar1;
 byte *pbVar2;
 
 /* Unresolved local var: char * p@[???] */
 pbVar1 = (byte *)strncpy(buffer,encrypted,len);
 pbVar1[len - 1] = 0;
 for (pbVar2 = pbVar1; *pbVar2 != 0; pbVar2 = pbVar2 + 1) {
 *pbVar2 = *pbVar2 ^ key;
 }
 return (char *)pbVar1;
}



/* Function: param_string_encryption @ 00100c04 */

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
 if (lVar2 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(iVar1,&__stack_chk_guard,0,lVar2 - ___stack_chk_guard);
 }
 return iVar1;
}



/* Function: call_string_encryption @ 00100c7c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_encryption(void)

{
 int iVar1;
 size_t sVar2;
 byte abStack_28 [32];
 long lStack_8;
 
 lStack_8 = ___stack_chk_guard;
 decrypt_string(param_string_encryption_encrypted,(char *)abStack_28,0x20,'Z');
 sVar2 = strlen((char *)abStack_28);
 iVar1 = (uint)abStack_28[0] + (int)sVar2;
 if (lStack_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(iVar1,&__stack_chk_guard,0,lStack_8 - ___stack_chk_guard);
 }
 return iVar1;
}



/* Function: param_tail_call_optimized @ 00100c80 */

int param_tail_call_optimized(int n,int acc)

{
 for (; 0 < n; n = n + -1) {
 acc = acc + n;
 }
 return acc;
}



/* Function: call_tail_call_optimized @ 00100ca0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_tail_call_optimized(void)

{
 return 0x7a314;
}



/* Function: param_non_tail_call @ 00100cac */

int param_non_tail_call(int n)

{
 int iVar1;
 
 iVar1 = 0;
 for (; 0 < n; n = n + -1) {
 iVar1 = iVar1 + n;
 }
 return iVar1;
}



/* Function: call_non_tail_call @ 00100ccc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_non_tail_call(void)

{
 int iVar1;
 
 iVar1 = param_non_tail_call(100);
 return iVar1;
}



/* Function: param_vectorized_loop @ 00100cd4 */

int param_vectorized_loop(int *a,int *b,int *c,int n)

{
 int iVar1;
 long lVar2;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 for (lVar2 = 0; (int)lVar2 < n; lVar2 = lVar2 + 1) {
 c[lVar2] = a[lVar2] + b[lVar2];
 }
 iVar1 = 0;
 /* Unresolved local var: int i@[???] */
 for (lVar2 = 0; (int)lVar2 < n; lVar2 = lVar2 + 1) {
 iVar1 = iVar1 + c[lVar2];
 }
 return iVar1;
}



/* Function: call_vectorized_loop @ 00100d1c */

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
 c[0] = 0;
 c[1] = 0;
 c[2] = 0;
 c[3] = 0;
 a[2] = 3;
 a[3] = 4;
 a[0] = 1;
 a[1] = 2;
 a[6] = 7;
 a[7] = 8;
 a[4] = 5;
 a[5] = 6;
 c[4] = 0;
 c[5] = 0;
 c[6] = 0;
 c[7] = 0;
 b[2] = 6;
 b[3] = 5;
 b[0] = 8;
 b[1] = 7;
 b[6] = 2;
 b[7] = 1;
 b[4] = 4;
 b[5] = 3;
 iVar2 = param_vectorized_loop(a,b,c,8);
 if (lVar1 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(iVar2,&__stack_chk_guard,0,lVar1 - ___stack_chk_guard);
 }
 return iVar2;
}



/* Function: param_link_time_optimization @ 00100d94 */

int param_link_time_optimization(int x)

{
 return (x + 5) * 2;
}



/* Function: call_link_time_optimization @ 00100da0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_link_time_optimization(void)

{
 return 0x14;
}



/* Function: param_division_by_zero @ 00100da8 */

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



/* Function: call_division_by_zero @ 00100df4 */

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



/* Function: param_null_pointer_deref @ 00100e34 */

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



/* Function: call_null_pointer_deref @ 00100e7c */

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
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(iVar1 + iVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return iVar1 + iVar2;
}



/* Function: param_buffer_overflow_stack @ 00100ef8 */

void param_buffer_overflow_stack(void)

{
 return;
}



/* Function: param_buffer_overflow_heap @ 00100efc */

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



/* Function: call_buffer_overflow @ 00100f34 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_buffer_overflow(void)

{
 int iVar1;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 iVar1 = param_buffer_overflow_heap(0x14);
 return iVar1 + 10;
}



/* Function: param_integer_overflow @ 00100f50 */

int param_integer_overflow(int a,int b)

{
 int iVar1;
 
 /* Unresolved local var: int signed_sum@[???]
 Unresolved local var: uint ua@[???]
 Unresolved local var: uint ub@[???]
 Unresolved local var: uint unsigned_sum@[???] */
 iVar1 = a + b;
 if (a < 1 || b < 1) {
 if (((a & b) < 0) && (0 < iVar1)) {
 iVar1 = -2;
 }
 }
 else if (iVar1 < 0) {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_integer_overflow @ 00100f88 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_integer_overflow(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 2000000000;
}



/* Function: param_undefined_behavior @ 00100f94 */

int param_undefined_behavior(int i)

{
 /* Unresolved local var: int local@[???] */
 return i << 1;
}



/* Function: call_undefined_behavior @ 00100f9c */

undefined8 call_undefined_behavior(void)

{
 return 10;
}



/* Function: param_implementation_defined @ 00100fa4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_implementation_defined(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: char c@[???]
 Unresolved local var: int s@[???]
 Unresolved local var: anon_struct_4_3_4e909822 bitfield@[???] */
 return 0x30;
}



/* Function: call_implementation_defined @ 00100fac */

undefined8 call_implementation_defined(void)

{
 return 0x30;
}



/* Function: test_obf_opt_edge @ 00100fb4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_obf_opt_edge(void)

{
 int iVar1;
 
 /* String literals - use string literals for printf format strings */
 puts("Testing obfuscated optimizations edge cases...\n");
 __printf_chk(1,"opaque_predicate(5) = %d\n",10);
 iVar1 = call_opaque_predicate();
 __printf_chk(1,"call_opaque_predicate() = %d\n",iVar1);
 __printf_chk(1,"instruction_substitution(x) = %d\n",0xe1);
 iVar1 = param_string_encryption();
 __printf_chk(1,"string_encryption() = %d\n",iVar1);
 call_tail_call_optimized();
 __printf_chk(1,"call_tail_call_optimized() = %d\n",0x7a314);
 iVar1 = call_non_tail_call();
 __printf_chk(1,"non_tail_call() = %d\n",iVar1);
 iVar1 = call_vectorized_loop();
 __printf_chk(1,"vectorized_loop() = %d\n",iVar1);
 __printf_chk(1,"link_time_optimization() = %d\n",0x14);
 iVar1 = call_division_by_zero();
 __printf_chk(1,"division_by_zero() = %d\n",iVar1);
 iVar1 = call_null_pointer_deref();
 __printf_chk(1,"null_pointer_deref() = %d\n",iVar1);
 iVar1 = call_buffer_overflow();
 __printf_chk(1,"buffer_overflow() = %d\n",iVar1);
 __printf_chk(1,"integer_overflow() = %d\n",2000000000);
 __printf_chk(1,"undefined_behavior() = %d\n",10);
 __printf_chk(1,"implementation_defined() = %d\n",0x30);
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 43 */
