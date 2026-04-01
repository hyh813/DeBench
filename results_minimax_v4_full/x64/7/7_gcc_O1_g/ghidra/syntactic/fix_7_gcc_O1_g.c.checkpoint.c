/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
/* int64_t is defined by system headers */
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
typedef unsigned long ulong;

/* Ghidra types */
typedef void *code;
typedef void *undefined;

/* Standard library includes */
#include <setjmp.h>
#include <signal.h>
#include <stdlib.h>
#include <string.h>

/* Global variables */
volatile int div_zero_caught = 0;
volatile int segv_caught = 0;
jmp_buf jmp_buffer;
jmp_buf segv_buffer;

/* String constants from binary data section */
char DAT_00102008[] = "=== Testing Obfuscated Optimizations ===\n";
char DAT_00102137[] = "call_opaque_predicate(5) = %d\n";
char DAT_00102153[] = "param_opaque_predicate(5) = %d\n";
char DAT_0010216f[] = "instruction_substitution(5) = %d\n";
char DAT_0010218c[] = "param_string_encryption() = %d\n";
char DAT_00102038[] = "call_tail_call_optimized(1000) = %d\n";
char DAT_00102068[] = "call_non_tail_call(100) = %d\n";
char DAT_00102090[] = "call_vectorized_loop() = %d\n";
char DAT_001020b8[] = "call_link_time_optimization() = %d\n";
char DAT_001021a8[] = "call_division_by_zero() = %d\n";
char DAT_001021c4[] = "call_null_pointer_deref() = %d\n";
char DAT_001021e1[] = "call_buffer_overflow() = %d\n";
char DAT_001020d8[] = "call_integer_overflow() = %d\n";
char DAT_001021fe[] = "call_undefined_behavior() = %d\n";
char DAT_00102110[] = "call_implementation_defined() = %d\n";

/* Encrypted string for param_string_encryption */
char param_string_encryption_encrypted[] = "\x2d\x26\x34\x3c\x22\x28\x23\x26\x34\x20\x2e\x28\x33\x3c\x26\x20\x34\x2e\x3c\x26\x34\x2e\x28\x23\x26\x34\x20\x3c\x28\x34\x2a\x22\x20\x3c\x26\x34";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/7/7_gcc_O1_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 /* Stub function - originally CRT initialization */
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: div_zero_handler @ 00101269 */

void div_zero_handler(int sig)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 __longjmp_chk(jmp_buffer,1);
}



/* Function: segv_handler @ 0010128e */

void segv_handler(int sig)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 __longjmp_chk(segv_buffer,1);
}



/* Function: param_fake_branch @ 001012b3 */

int param_fake_branch(int x)

{
 return x;
}



/* Function: call_fake_branch @ 001012ba */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fake_branch(void)

{
 return 10;
}



/* Function: param_opaque_predicate @ 001012c4 */

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



/* Function: call_opaque_predicate @ 0010130b */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_opaque_predicate(void)

{
 int iVar1;
 
 iVar1 = param_opaque_predicate(5);
 return iVar1;
}



/* Function: param_instruction_substitution @ 0010131a */

int param_instruction_substitution(int x)

{
 return x * 0x15 + ((uint)x >> 1) + (x & 0xfU);
}



/* Function: call_instruction_substitution @ 00101338 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_instruction_substitution(void)

{
 return 0xe1;
}



/* Function: decrypt_string @ 00101342 */

char * decrypt_string(char *encrypted,char *buffer,size_t len,char key)

{
 byte bVar1;
 byte *pbVar2;
 
 strncpy(buffer,encrypted,len);
 buffer[len - 1] = '\0';
 bVar1 = *buffer;
 pbVar2 = (byte *)buffer;
 while (bVar1 != 0) {
 *pbVar2 = bVar1 ^ key;
 pbVar2 = pbVar2 + 1;
 bVar1 = *pbVar2;
 }
 return buffer;
}



/* Function: param_string_encryption @ 00101385 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_string_encryption(void)

{
 long lVar1;
 size_t sVar2;
 long in_FS_OFFSET;
 char decrypted [32];
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 decrypt_string(param_string_encryption_encrypted,decrypted,0x20,'Z');
 sVar2 = strlen(decrypted);
 if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
 return (int)decrypted[0] + (int)sVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_string_encryption @ 001013e6 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_encryption(void)

{
 int iVar1;
 
 iVar1 = param_string_encryption();
 return iVar1;
}



/* Function: param_tail_call_optimized @ 001013fd */

int param_tail_call_optimized(int n,int acc)

{
 int iVar1;
 
 if (0 < n) {
 iVar1 = param_tail_call_optimized(n + -1,acc + n);
 return iVar1;
 }
 return acc;
}



/* Function: call_tail_call_optimized @ 0010141b */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_tail_call_optimized(void)

{
 int iVar1;
 
 iVar1 = param_tail_call_optimized(1000,0);
 return iVar1;
}



/* Function: param_non_tail_call @ 00101437 */

int param_non_tail_call(int n)

{
 int iVar1;
 
 if (0 < n) {
 iVar1 = param_non_tail_call(n + -1);
 return iVar1 + n;
 }
 return 0;
}



/* Function: call_non_tail_call @ 00101454 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_non_tail_call(void)

{
 int iVar1;
 
 iVar1 = param_non_tail_call(100);
 return iVar1;
}



/* Function: param_vectorized_loop @ 0010146b */

int param_vectorized_loop(int *a,int *b,int *c,int n)

{
 int *piVar1;
 ulong uVar2;
 int iVar3;
 
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar3 = 0;
 }
 else {
 uVar2 = 0;
 do {
 c[uVar2] = b[uVar2] + a[uVar2];
 uVar2 = uVar2 + 1;
 } while (uVar2 != (uint)n);
 piVar1 = c + (ulong)(n - 1) + 1;
 iVar3 = 0;
 do {
 /* Unresolved local var: int i@[???] */
 iVar3 = iVar3 + *c;
 c = c + 1;
 } while (c != piVar1);
 }
 return iVar3;
}



/* Function: call_vectorized_loop @ 001014b5 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorized_loop(void)

{
 long lVar1;
 int iVar2;
 long in_FS_OFFSET;
 int a [8];
 int b [8];
 int c [8];
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 a[0] = 1;
 a[1] = 2;
 a[2] = 3;
 a[3] = 4;
 a[4] = 5;
 a[5] = 6;
 a[6] = 7;
 a[7] = 8;
 b[0] = 8;
 b[1] = 7;
 b[2] = 6;
 b[3] = 5;
 b[4] = 4;
 b[5] = 3;
 b[6] = 2;
 b[7] = 1;
 c[0] = 0;
 c[1] = 0;
 c[2] = 0;
 c[3] = 0;
 c[4] = 0;
 c[5] = 0;
 c[6] = 0;
 c[7] = 0;
 iVar2 = param_vectorized_loop(a,b,c,8);
 if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_link_time_optimization @ 001015a1 */

int param_link_time_optimization(int x)

{
 return x * 2 + 10;
}



/* Function: call_link_time_optimization @ 001015aa */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_link_time_optimization(void)

{
 return 0x14;
}



/* Function: param_division_by_zero @ 001015b4 */

int param_division_by_zero(int x)

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



/* Function: call_division_by_zero @ 001015fb */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_division_by_zero(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 return iVar1 + iVar2;
}



/* Function: param_null_pointer_deref @ 00101636 */

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



/* Function: call_null_pointer_deref @ 0010167b */

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



/* Function: param_buffer_overflow_stack @ 001016e3 */

int param_buffer_overflow_stack(int x)

{
 return x;
}



/* Function: param_buffer_overflow_heap @ 001016ea */

int param_buffer_overflow_heap(int x)

{
 void *__ptr;
 int iVar1;
 
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



/* Function: call_buffer_overflow @ 0010171d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_buffer_overflow(void)

{
 int iVar1;
 
 iVar1 = param_buffer_overflow_heap(0x14);
 return iVar1 + 10;
}



/* Function: param_integer_overflow @ 00101737 */

int param_integer_overflow(int a,int b)

{
 int iVar1;
 
 iVar1 = a + b;
 if ((a < 1 || b < 1) || (-1 < iVar1)) {
 if ((a & b) < 0) {
 if (0 < iVar1) {
 iVar1 = -2;
 }
 return iVar1;
 }
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_integer_overflow @ 00101765 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_integer_overflow(void)

{
 return 2000000000;
}



/* Function: param_undefined_behavior @ 0010176f */

int param_undefined_behavior(int i)

{
 return i * 2;
}



/* Function: call_undefined_behavior @ 00101777 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_undefined_behavior(void)

{
 return 10;
}



/* Function: param_implementation_defined @ 00101781 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_implementation_defined(void)

{
 return 0x2f;
}



/* Function: call_implementation_defined @ 0010178b */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_implementation_defined(void)

{
 return 0x2f;
}



/* Function: test_obf_opt_edge @ 00101795 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_obf_opt_edge(void)

{
 int iVar1;
 
 puts(&DAT_00102008);
 __printf_chk(1,&DAT_00102137,10);
 iVar1 = call_opaque_predicate();
 __printf_chk(1,&DAT_00102153,iVar1);
 __printf_chk(1,&DAT_0010216f,0xe1);
 iVar1 = param_string_encryption();
 __printf_chk(1,&DAT_0010218c,iVar1);
 iVar1 = call_tail_call_optimized();
 __printf_chk(1,&DAT_00102038,iVar1);
 iVar1 = call_non_tail_call();
 __printf_chk(1,&DAT_00102068,iVar1);
 iVar1 = call_vectorized_loop();
 __printf_chk(1,&DAT_00102090,iVar1);
 __printf_chk(1,&DAT_001020b8,0x14);
 iVar1 = call_division_by_zero();
 __printf_chk(1,&DAT_001021a8,iVar1);
 iVar1 = call_null_pointer_deref();
 __printf_chk(1,&DAT_001021c4,iVar1);
 iVar1 = call_buffer_overflow();
 __printf_chk(1,&DAT_001021e1,iVar1);
 __printf_chk(1,&DAT_001020d8,2000000000);
 __printf_chk(1,&DAT_001021fe,10);
 __printf_chk(1,&DAT_00102110,0x2f);
 return;
}



/* Function: main @ 00101960 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_obf_opt_edge();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 41 */
