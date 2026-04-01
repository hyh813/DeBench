/* Auto-injected type definitions by preprocessor */
#include <stdint.h>
#include <setjmp.h>
#include <signal.h>
#include <stdlib.h>
#include <string.h>

/* Global variables for signal handlers */
int div_zero_caught = 0;
int segv_caught = 0;

/* Jump buffers for setjmp/longjmp */
jmp_buf jmp_buffer;
jmp_buf segv_buffer;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/7/7_gcc_O0_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* Data constants */
const char DAT_00102010[] = "Testing obfuscation techniques:\n";
const char DAT_0010203d[] = "Fake branch result: %lu\n";
const char DAT_00102059[] = "Opaque predicate result: %lu\n";
const char DAT_00102075[] = "Instruction substitution result: %lu\n";
const char DAT_00102092[] = "String encryption result: %lu\n";
const char DAT_001020b0[] = "Tail call optimization result: %lu\n";
const char DAT_001020e0[] = "Non-tail call result: %lu\n";
const char DAT_00102108[] = "Vectorized loop result: %lu\n";
const char DAT_00102130[] = "LTO result: %lu\n";
const char DAT_00102150[] = "Division by zero result: %lu\n";
const char DAT_0010216c[] = "Null pointer deref result: %lu\n";
const char DAT_00102189[] = "Buffer overflow result: %lu\n";
const char DAT_001021a8[] = "Integer overflow result: %lu\n";
const char DAT_001021d9[] = "Undefined behavior result: %lu\n";
const char DAT_001021f8[] = "Implementation-defined result: %lu\n";

/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 void (*func)(void) = (void (*)(void))0x0;
 (*func)();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_fake_branch @ 00101269 */

int param_fake_branch(int x)

{
 int x_local;
 int result;
 char *str;
 
 return x;
}



/* Function: call_fake_branch @ 0010128a */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fake_branch(void)

{
 int iVar1;
 
 iVar1 = param_fake_branch(10);
 return iVar1;
}



/* Function: param_opaque_predicate @ 0010129e */

int param_opaque_predicate(int x)

{
 int iVar1;
 int x_local;
 int a;
 int b;
 int p1;
 int p2;
 int p3;
 int temp;
 
 a = x;
 b = x + 1;
 while (b != 0) {
 iVar1 = a % b;
 a = b;
 b = iVar1;
 }
 if ((x * 2 + x * x + 1 == (x + 1) * (x + 1)) && (a == 1)) {
 iVar1 = (x + 5) * 2;
 }
 else {
 iVar1 = x * 3 + 0x14;
 }
 return iVar1;
}



/* Function: call_opaque_predicate @ 00101340 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_opaque_predicate(void)

{
 int iVar1;
 
 iVar1 = param_opaque_predicate(5);
 return iVar1;
}



/* Function: param_instruction_substitution @ 00101354 */

int param_instruction_substitution(int x)

{
 int x_local;
 int result;
 uint ux;
 int div2;
 int mod16;
 int mul15;
 
 return x * 0x15 + ((uint)x >> 1) + (x & 0xfU);
}



/* Function: call_instruction_substitution @ 001013b3 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_instruction_substitution(void)

{
 int iVar1;
 
 iVar1 = param_instruction_substitution(10);
 return iVar1;
}



/* Function: decrypt_string @ 001013c7 */

char * decrypt_string(char *encrypted,char *buffer,size_t len,char key)

{
 char key_local;
 size_t len_local;
 char *buffer_local;
 char *encrypted_local;
 char *p;
 
 strncpy(buffer,encrypted,len);
 buffer[len - 1] = '\0';
 for (p = buffer; *p != '\0'; p = p + 1) {
 *p = *p ^ key;
 }
 return buffer;
}



/* Function: param_string_encryption @ 0010143f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_string_encryption(void)

{
 long lVar1;
 size_t sVar2;
 long in_FS_OFFSET;
 char decrypted [32];
 static const char encrypted[] = "X}Lgy{qfks~y|u{qfks";
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 decrypt_string((char*)encrypted,decrypted,0x20,'Z');
 sVar2 = strlen(decrypted);
 if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return (int)decrypted[0] + (int)sVar2;
}



/* Function: call_string_encryption @ 001014a7 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_encryption(void)

{
 int iVar1;
 
 iVar1 = param_string_encryption();
 return iVar1;
}



/* Function: param_tail_call_optimized @ 001014bb */

int param_tail_call_optimized(int n,int acc)

{
 int acc_local;
 int n_local;
 
 if (0 < n) {
 acc = param_tail_call_optimized(n + -1,acc + n);
 }
 return acc;
}



/* Function: call_tail_call_optimized @ 001014f1 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_tail_call_optimized(void)

{
 int iVar1;
 
 iVar1 = param_tail_call_optimized(1000,0);
 return iVar1;
}



/* Function: param_non_tail_call @ 0010150a */

int param_non_tail_call(int n)

{
 int iVar1;
 int n_local;
 
 if (n < 1) {
 iVar1 = 0;
 }
 else {
 iVar1 = param_non_tail_call(n + -1);
 iVar1 = iVar1 + n;
 }
 return iVar1;
}



/* Function: call_non_tail_call @ 0010153a */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_non_tail_call(void)

{
 int iVar1;
 
 iVar1 = param_non_tail_call(100);
 return iVar1;
}



/* Function: param_vectorized_loop @ 0010154e */

int param_vectorized_loop(int *a,int *b,int *c,int n)

{
 int n_local;
 int *c_local;
 int *b_local;
 int *a_local;
 int i;
 int sum;
 int i_1;
 
 for (i = 0; i < n; i = i + 1) {
 c[i] = b[i] + a[i];
 }
 sum = 0;
 for (i_1 = 0; i_1 < n; i_1 = i_1 + 1) {
 sum = sum + c[i_1];
 }
 return sum;
}



/* Function: call_vectorized_loop @ 001015f8 */

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
 if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar2;
}



/* Function: lto_target_func @ 001016d2 */

int lto_target_func(int x)

{
 int x_local;
 
 return (x + 5) * 2;
}



/* Function: param_link_time_optimization @ 001016e3 */

int param_link_time_optimization(int x)

{
 int iVar1;
 int x_local;
 
 iVar1 = lto_target_func(x);
 return iVar1;
}



/* Function: call_link_time_optimization @ 001016fe */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_link_time_optimization(void)

{
 int iVar1;
 
 iVar1 = param_link_time_optimization(5);
 return iVar1;
}



/* Function: div_zero_handler @ 00101712 */

void div_zero_handler(int sig)

{
 int sig_local;
 
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(jmp_buffer,1);
}



/* Function: param_division_by_zero @ 0010173f */

int param_division_by_zero(int x)

{
 int iVar1;
 int x_local;
 int y;
 
 signal(8,div_zero_handler);
 iVar1 = _setjmp(jmp_buffer);
 if (iVar1 == 0) {
 iVar1 = (int)(10 / (long)x);
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_division_by_zero @ 00101791 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_division_by_zero(void)

{
 int iVar1;
 int iVar2;
 int r1;
 int r2;
 
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 return iVar2 + iVar1;
}



/* Function: segv_handler @ 001017d0 */

void segv_handler(int sig)

{
 int sig_local;
 
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(segv_buffer,1);
}



/* Function: param_null_pointer_deref @ 001017fd */

int param_null_pointer_deref(int *p)

{
 int iVar1;
 int *p_local;
 int val;
 
 signal(0xb,segv_handler);
 iVar1 = _setjmp(segv_buffer);
 if (iVar1 == 0) {
 iVar1 = *p;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_null_pointer_deref @ 0010184d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_null_pointer_deref(void)

{
 long in_FS_OFFSET;
 int valid;
 int r1;
 int r2;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 valid = 0x2a;
 r1 = param_null_pointer_deref(&valid);
 r2 = param_null_pointer_deref((int *)0x0);
 signal(0xb,(__sighandler_t)0x0);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return r2 + r1;
}



/* Function: param_buffer_overflow_stack @ 001018b8 */

/* WARNING: Removing unreachable block (ram,0x00101908) */

int param_buffer_overflow_stack(int x)

{
 long lVar1;
 long in_FS_OFFSET;
 int x_local;
 int i;
 int canary;
 char buffer [8];
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 for (i = 0; i < 0x11; i = i + 1) {
 buffer[i] = 'A';
 }
 if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
 return x;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_buffer_overflow_heap @ 00101923 */

int param_buffer_overflow_heap(int x)

{
 void *__ptr;
 int x_local;
 int i;
 char *heap_buffer;
 
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 x = -2;
 }
 else {
 for (i = 0; i < 0x21; i = i + 1) {
 *(char *)((long)__ptr + (long)i) = 0x42;
 }
 free(__ptr);
 }
 return x;
}



/* Function: call_buffer_overflow @ 00101982 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_buffer_overflow(void)

{
 int iVar1;
 int iVar2;
 int r1;
 int r2;
 
 iVar1 = param_buffer_overflow_stack(10);
 iVar2 = param_buffer_overflow_heap(0x14);
 return iVar2 + iVar1;
}



/* Function: param_integer_overflow @ 001019b2 */

int param_integer_overflow(int a,int b)

{
 int iVar1;
 int b_local;
 int a_local;
 int signed_sum;
 uint ua;
 uint ub;
 uint unsigned_sum;
 
 iVar1 = b + a;
 if (((a < 1) || (b < 1)) || (-1 < b + a)) {
 if (((a < 0) && (b < 0)) && (0 < b + a)) {
 iVar1 = -2;
 }
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_integer_overflow @ 00101a19 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_integer_overflow(void)

{
 int iVar1;
 int iVar2;
 int r1;
 int r2;
 
 iVar1 = param_integer_overflow(1000000000,1000000000);
 iVar2 = param_integer_overflow(-1,1);
 return iVar2 + iVar1;
}



/* Function: param_undefined_behavior @ 00101a53 */

int param_undefined_behavior(int i)

{
 int i_local;
 int local;
 
 return i * 2;
}



/* Function: call_undefined_behavior @ 00101a6c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_undefined_behavior(void)

{
 int iVar1;
 int result;
 
 iVar1 = param_undefined_behavior(5);
 return iVar1;
}



/* Function: param_implementation_defined @ 00101a8a */

/* WARNING: Removing unreachable block (ram,0x00101aaa) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_implementation_defined(void)

{
 char c;
 int result;
 int s;
 
 return 0x2f;
}



/* Function: call_implementation_defined @ 00101b0a */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_implementation_defined(void)

{
 int iVar1;
 
 iVar1 = param_implementation_defined();
 return iVar1;
}



/* Function: test_obf_opt_edge @ 00101b1e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_obf_opt_edge(void)

{
 uint uVar1;
 
 puts(&DAT_00102010);
 uVar1 = call_fake_branch();
 printf(&DAT_0010203d,(ulong)uVar1);
 uVar1 = call_opaque_predicate();
 printf(&DAT_00102059,(ulong)uVar1);
 uVar1 = call_instruction_substitution();
 printf(&DAT_00102075,(ulong)uVar1);
 uVar1 = call_string_encryption();
 printf(&DAT_00102092,(ulong)uVar1);
 uVar1 = call_tail_call_optimized();
 printf(&DAT_001020b0,(ulong)uVar1);
 uVar1 = call_non_tail_call();
 printf(&DAT_001020e0,(ulong)uVar1);
 uVar1 = call_vectorized_loop();
 printf(&DAT_00102108,(ulong)uVar1);
 uVar1 = call_link_time_optimization();
 printf(&DAT_00102130,(ulong)uVar1);
 uVar1 = call_division_by_zero();
 printf(&DAT_00102150,(ulong)uVar1);
 uVar1 = call_null_pointer_deref();
 printf(&DAT_0010216c,(ulong)uVar1);
 uVar1 = call_buffer_overflow();
 printf(&DAT_00102189,(ulong)uVar1);
 uVar1 = call_integer_overflow();
 printf(&DAT_001021a8,(ulong)uVar1);
 uVar1 = call_undefined_behavior();
 printf(&DAT_001021d9,(ulong)uVar1);
 uVar1 = call_implementation_defined();
 printf(&DAT_001021f8,(ulong)uVar1);
 return;
}



/* Function: main @ 00101cf8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_obf_opt_edge();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 42 */
