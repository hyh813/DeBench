/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned int uint;
typedef unsigned char byte;
typedef unsigned char undefined1;

/* Required headers */
#include <string.h>
#include <signal.h>
#include <setjmp.h>
#include <stdlib.h>
#include <stdio.h>



/* Forward declarations for encrypted strings */
/* Encrypted string data (32 bytes) - key is 'Z' (0x5A) */
char param_string_encryption_encrypted[] = {
    0x5A ^ 'T', 0x5A ^ 'e', 0x5A ^ 's', 0x5A ^ 't',
    0x5A ^ ' ', 0x5A ^ 'S', 0x5A ^ 't', 0x5A ^ 'r',
    0x5A ^ 'i', 0x5A ^ 'n', 0x5A ^ 'g', 0x5A ^ '\0',
    0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A,
    0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A,
    0x5A, 0x5A, 0x5A, 0x5A
};

/* Forward declarations for string constants */
extern char DAT_0001172c[];
extern char DAT_0001175c[];
extern char DAT_00011778[];
extern char DAT_00011794[];
extern char DAT_000117b4[];
extern char DAT_000117d0[];
extern char DAT_000117fc[];
extern char DAT_00011824[];
extern char DAT_0001184c[];
extern char DAT_0001186c[];
extern char DAT_00011888[];
extern char DAT_000118a8[];
extern char DAT_000118c8[];
extern char DAT_000118fc[];
extern char DAT_0001191c[];

/* Global variables for signal handlers */
int div_zero_caught;
int segv_caught;
jmp_buf jmp_buffer;
jmp_buf segv_buffer;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/7/7_gcc_O0_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */





/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_fake_branch @ 000106b0 */

int param_fake_branch(int x)

{
 int x_local;
 int result;
 char *str;
 
 return x;
}



/* Function: call_fake_branch @ 000106e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fake_branch(void)

{
 int iVar1;
 
 iVar1 = param_fake_branch(10);
 return iVar1;
}



/* Function: param_opaque_predicate @ 00010704 */

int param_opaque_predicate(int x)

{
 int extraout_r1;
 int iVar1;
 int x_local;
 int a;
 int b;
 int p1;
 int p2;
 int p3;
 int temp;
 
 b = x + 1;
 a = x;
 while (b != 0) {
 __aeabi_idivmod(a,b);
 a = b;
 b = extraout_r1;
 }
 if ((x * x + x * 2 + 1 == (x + 1) * (x + 1)) && (a == 1)) {
 iVar1 = (x + 5) * 2;
 }
 else {
 iVar1 = x * 3 + 0x14;
 }
 return iVar1;
}



/* Function: call_opaque_predicate @ 00010814 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_opaque_predicate(void)

{
 int iVar1;
 
 iVar1 = param_opaque_predicate(5);
 return iVar1;
}



/* Function: param_instruction_substitution @ 00010830 */

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



/* Function: call_instruction_substitution @ 000108c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_instruction_substitution(void)

{
 int iVar1;
 
 iVar1 = param_instruction_substitution(10);
 return iVar1;
}



/* Function: decrypt_string @ 000108dc */

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
 *p = key ^ *p;
 }
 return buffer;
}



/* Function: param_string_encryption @ 00010974 */

/* WARNING: Removing unreachable block (ram,0x000109d4) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_string_encryption(void)

{
 size_t sVar1;
 char decrypted [32];
 
 decrypt_string(param_string_encryption_encrypted,decrypted,0x20,'Z');
 sVar1 = strlen(decrypted);
 return sVar1 + (byte)decrypted[0];
}



/* Function: call_string_encryption @ 000109ec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_encryption(void)

{
 int iVar1;
 
 iVar1 = param_string_encryption();
 return iVar1;
}



/* Function: param_tail_call_optimized @ 00010a04 */

int param_tail_call_optimized(int n,int acc)

{
 int acc_local;
 int n_local;
 
 if (0 < n) {
 acc = param_tail_call_optimized(n + -1,acc + n);
 }
 return acc;
}



/* Function: call_tail_call_optimized @ 00010a58 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_tail_call_optimized(void)

{
 int iVar1;
 
 iVar1 = param_tail_call_optimized(1000,0);
 return iVar1;
}



/* Function: param_non_tail_call @ 00010a78 */

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



/* Function: call_non_tail_call @ 00010ac4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_non_tail_call(void)

{
 int iVar1;
 
 iVar1 = param_non_tail_call(100);
 return iVar1;
}



/* Function: param_vectorized_loop @ 00010ae0 */

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
 c[i] = a[i] + b[i];
 }
 sum = 0;
 for (i_1 = 0; i_1 < n; i_1 = i_1 + 1) {
 sum = sum + c[i_1];
 }
 return sum;
}



/* Function: call_vectorized_loop @ 00010bc8 */

/* WARNING: Removing unreachable block (ram,0x00010c60) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorized_loop(void)

{
 int iVar1;
 int a [8];
 int b [8];
 int c [8];
 
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
 memset(c,0,0x20);
 iVar1 = param_vectorized_loop(a,b,c,8);
 return iVar1;
}



/* Function: lto_target_func @ 00010c7c */

int lto_target_func(int x)

{
 int x_local;
 
 return (x + 5) * 2;
}



/* Function: param_link_time_optimization @ 00010ca8 */

int param_link_time_optimization(int x)

{
 int iVar1;
 int x_local;
 
 iVar1 = lto_target_func(x);
 return iVar1;
}



/* Function: call_link_time_optimization @ 00010cd0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_link_time_optimization(void)

{
 int iVar1;
 
 iVar1 = param_link_time_optimization(5);
 return iVar1;
}



/* Function: div_zero_handler @ 00010cec */

void div_zero_handler(int sig)

{
 int sig_local;
 
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(jmp_buffer,1);
}



/* Function: param_division_by_zero @ 00010d1c */

int param_division_by_zero(int x)

{
 int iVar1;
 int x_local;
 int y;
 
 signal(8,div_zero_handler);
 iVar1 = _setjmp(jmp_buffer);
 if (iVar1 == 0) {
 iVar1 = __aeabi_idiv(10,x);
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_division_by_zero @ 00010d80 */

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
 return iVar1 + iVar2;
}



/* Function: segv_handler @ 00010dc8 */

void segv_handler(int sig)

{
 int sig_local;
 
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(segv_buffer,1);
}



/* Function: param_null_pointer_deref @ 00010df8 */

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



/* Function: call_null_pointer_deref @ 00010e54 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_null_pointer_deref(void)

{
 __sighandler_t p_Var1;
 int valid;
 int r1;
 int r2;
 int local_c;
 
 local_c = 0;
 valid = 0x2a;
 r1 = param_null_pointer_deref(&valid);
 r2 = param_null_pointer_deref((int *)0x0);
 p_Var1 = signal(0xb,(__sighandler_t)0x0);
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(p_Var1,local_c,0);
 }
 return r1 + r2;
}



/* Function: param_buffer_overflow_stack @ 00010ed8 */

/* WARNING: Removing unreachable block (ram,0x00010f50) */
/* WARNING: Removing unreachable block (ram,0x00010f6c) */

int param_buffer_overflow_stack(int x)

{
 int x_local;
 int i;
 int canary;
 char buffer [8];
 
 for (i = 0; i < 0x11; i = i + 1) {
 buffer[i] = 'A';
 }
 return x;
}



/* Function: param_buffer_overflow_heap @ 00010f84 */

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
 *(undefined1 *)((int)__ptr + i) = 0x42;
 }
 free(__ptr);
 }
 return x;
}



/* Function: call_buffer_overflow @ 00011008 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_buffer_overflow(void)

{
 int iVar1;
 int iVar2;
 int r1;
 int r2;
 
 iVar1 = param_buffer_overflow_stack(10);
 iVar2 = param_buffer_overflow_heap(0x14);
 return iVar1 + iVar2;
}



/* Function: param_integer_overflow @ 00011044 */

int param_integer_overflow(int a,int b)

{
 int iVar1;
 int b_local;
 int a_local;
 int signed_sum;
 uint ua;
 uint ub;
 uint unsigned_sum;
 
 iVar1 = a + b;
 if (((a < 1) || (b < 1)) || (-1 < a + b)) {
 if (((a < 0) && (b < 0)) && (0 < a + b)) {
 iVar1 = -2;
 }
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_integer_overflow @ 000110f4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_integer_overflow(void)

{
 int iVar1;
 int iVar2;
 int r1;
 int r2;
 
 iVar1 = param_integer_overflow(1000000000,1000000000);
 iVar2 = param_integer_overflow(-1,1);
 return iVar1 + iVar2;
}



/* Function: param_undefined_behavior @ 0001113c */

int param_undefined_behavior(int i)

{
 int i_local;
 int local;
 
 return i << 1;
}



/* Function: call_undefined_behavior @ 0001116c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_undefined_behavior(void)

{
 int iVar1;
 int result;
 
 iVar1 = param_undefined_behavior(5);
 return iVar1;
}



/* Function: param_implementation_defined @ 00011194 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_implementation_defined(void)

{
 
 return 0x2c;
}



/* Function: call_implementation_defined @ 0001125c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_implementation_defined(void)

{
 int iVar1;
 
 iVar1 = param_implementation_defined();
 return iVar1;
}



/* Function: test_obf_opt_edge @ 00011274 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_obf_opt_edge(void)

{
 int iVar1;
 
 puts(&DAT_0001172c);
 iVar1 = call_fake_branch();
 printf(&DAT_0001175c,iVar1);
 iVar1 = call_opaque_predicate();
 printf(&DAT_00011778,iVar1);
 iVar1 = call_instruction_substitution();
 printf(&DAT_00011794,iVar1);
 iVar1 = call_string_encryption();
 printf(&DAT_000117b4,iVar1);
 iVar1 = call_tail_call_optimized();
 printf(&DAT_000117d0,iVar1);
 iVar1 = call_non_tail_call();
 printf(&DAT_000117fc,iVar1);
 iVar1 = call_vectorized_loop();
 printf(&DAT_00011824,iVar1);
 iVar1 = call_link_time_optimization();
 printf(&DAT_0001184c,iVar1);
 iVar1 = call_division_by_zero();
 printf(&DAT_0001186c,iVar1);
 iVar1 = call_null_pointer_deref();
 printf(&DAT_00011888,iVar1);
 iVar1 = call_buffer_overflow();
 printf(&DAT_000118a8,iVar1);
 iVar1 = call_integer_overflow();
 printf(&DAT_000118c8,iVar1);
 iVar1 = call_undefined_behavior();
 printf(&DAT_000118fc,iVar1);
 iVar1 = call_implementation_defined();
 printf(&DAT_0001191c,iVar1);
 return;
}



/* Function: main @ 000113e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_obf_opt_edge();
 return 0;
}




/* CRT stub function __aeabi_idiv removed by preprocessor */





/* CRT stub function .divsi3_skip_div0_test removed by preprocessor */





 /* CRT stub function __aeabi_idivmod removed by preprocessor */




/* Forward declarations for string constants */
extern char DAT_0001172c[];
extern char DAT_0001175c[];
extern char DAT_00011778[];
extern char DAT_00011794[];
extern char DAT_000117b4[];
extern char DAT_000117d0[];
extern char DAT_000117fc[];
extern char DAT_00011824[];
extern char DAT_0001184c[];
extern char DAT_0001186c[];
extern char DAT_00011888[];
extern char DAT_000118a8[];
extern char DAT_000118c8[];
extern char DAT_000118fc[];
extern char DAT_0001191c[];

/* String constants from binary */
char DAT_0001172c[] = "Testing Obfuscated Optimizations:\n";
char DAT_0001175c[] = "  param_fake_branch(10) = %d\n";
char DAT_00011778[] = "  param_opaque_predicate(5) = %d\n";
char DAT_00011794[] = "  param_instruction_substitution(10) = %d\n";
char DAT_000117b4[] = "  param_string_encryption() = %d\n";
char DAT_000117d0[] = "  param_tail_call_optimized(1000,0) = %d\n";
char DAT_000117fc[] = "  param_non_tail_call(100) = %d\n";
char DAT_00011824[] = "  param_vectorized_loop() = %d\n";
char DAT_0001184c[] = "  param_link_time_optimization(5) = %d\n";
char DAT_0001186c[] = "  param_division_by_zero() = %d\n";
char DAT_00011888[] = "  param_null_pointer_deref() = %d\n";
char DAT_000118a8[] = "  param_buffer_overflow() = %d\n";
char DAT_000118c8[] = "  param_integer_overflow() = %d\n";
char DAT_000118fc[] = "  param_undefined_behavior() = %d\n";
char DAT_0001191c[] = "  param_implementation_defined() = %d\n";

/* Function: __aeabi_idiv0 @ 00011638 */

void __aeabi_idiv0(void)

{
 raise(8);
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 46 */
