/* Standard library headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <setjmp.h>

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
typedef uint32_t undefined4;
typedef uint8_t undefined;
typedef uint8_t undefined1;
typedef void (*code)(void);

/* Global variables */
int div_zero_caught;
jmp_buf jmp_buffer;
int segv_caught;
jmp_buf segv_buffer;

/* External data constants */
extern unsigned char DAT_0001320c[];
extern unsigned char DAT_0001322c[];

/* Data arrays for vectorized loop */
uint8_t DAT_0001320c_data[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32};
uint8_t DAT_0001322c_data[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200, 210, 220, 230, 240, 250, 252, 254, 255, 128, 64, 32, 16};

/* Re-define the extern symbols to point to the data */
#undef DAT_0001320c
#undef DAT_0001322c
#define DAT_0001320c DAT_0001320c_data
#define DAT_0001322c DAT_0001322c_data

/* Format strings - these would be in the .rodata section of the original binary */
char DAT_0001300d[] = "=== Testing Obfuscation Optimizations ===\\n\\0";
char DAT_0001303b[] = "Fake branch result: %d\\n\\0";
char DAT_00013057[] = "Opaque predicate result: %d\\n\\0";
char DAT_00013073[] = "Instruction substitution result: %d\\n\\0";
char DAT_00013090[] = "String encryption result: %d\\n\\0";
char DAT_000130ac[] = "Tail call optimized result: %d\\n\\0";
char DAT_000130d6[] = "Non-tail call result: %d\\n\\0";
char DAT_000130fb[] = "Vectorized loop result: %d\\n\\0";
char DAT_00013121[] = "Link time optimization result: %d\\n\\0";
char DAT_00013141[] = "Division by zero handled: %d\\n\\0";
char DAT_0001315d[] = "Null pointer deref handled: %d\\n\\0";
char DAT_0001317a[] = "Buffer overflow detected: %d\\n\\0";
char DAT_00013197[] = "Integer overflow handled: %d\\n\\0";
char DAT_000131c8[] = "Undefined behavior result: %d\\n\\0";
char DAT_000131e5[] = "Implementation defined result: %d\\n\\0";
char param_string_encryption_encrypted[];

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/7/7_clang_O0_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 0001112c */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011130 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 00011269 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 0001126d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: param_fake_branch @ 00011280 */

/* WARNING: Removing unreachable block (ram,0x000112de) */
/* WARNING: Unknown calling convention */

int param_fake_branch(int x)

{
 char *str;
 int result;
 
 result = x;
 if (x * x < 0) {
 result = x * 2 + -0x21524111;
 }
 strlen("test");
 return result;
}



/* Function: call_fake_branch @ 00011300 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fake_branch(void)

{
 int iVar1;
 
 iVar1 = param_fake_branch(10);
 return iVar1;
}



/* Function: param_opaque_predicate @ 00011330 */

/* WARNING: Unknown calling convention */

int param_opaque_predicate(int x)

{
 int iVar1;
 int p3;
 int p2;
 int temp;
 int b;
 int a;
 int p1;
 undefined4 local_8;
 
 a = x;
 b = x + 1;
 while (b != 0) {
 iVar1 = b;
 b = a % b;
 a = iVar1;
 }
 if ((x * x + x * 2 + 1 == (x + 1) * (x + 1)) && (a == 1)) {
 local_8 = x * 2 + 10;
 }
 else {
 local_8 = x * 3 + 0x14;
 }
 return local_8;
}



/* Function: call_opaque_predicate @ 00011410 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_opaque_predicate(void)

{
 int iVar1;
 
 iVar1 = param_opaque_predicate(5);
 return iVar1;
}



/* Function: param_instruction_substitution @ 00011440 */

/* WARNING: Unknown calling convention */

int param_instruction_substitution(int x)

{
 int mul15;
 int mod16;
 int div2;
 uint ux;
 int result;
 
 return x * 0x15 + ((uint)x >> 1) + (x & 0xfU);
}



/* Function: call_instruction_substitution @ 000114a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_instruction_substitution(void)

{
 int iVar1;
 
 iVar1 = param_instruction_substitution(10);
 return iVar1;
}



/* Function: decrypt_string @ 000114d0 */

/* WARNING: Unknown calling convention */

char * decrypt_string(char *encrypted,char *buffer,size_t len,char key)

{
 char *p;
 
 strncpy(buffer,encrypted,len);
 buffer[len - 1] = '\0';
 for (p = buffer; *p != '\0'; p = p + 1) {
 *p = *p ^ key;
 }
 return buffer;
}



/* Function: param_string_encryption @ 00011550 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_string_encryption(void)

{
 size_t sVar1;
 char decrypted [32];
 
 decrypt_string(param_string_encryption_encrypted,decrypted,0x20,'Z');
 sVar1 = strlen(decrypted);
 return sVar1 + (int)decrypted[0];
}



/* Function: call_string_encryption @ 000115b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_encryption(void)

{
 int iVar1;
 
 iVar1 = param_string_encryption();
 return iVar1;
}



/* Function: param_tail_call_optimized @ 000115d0 */

/* WARNING: Unknown calling convention */

int param_tail_call_optimized(int n,int acc)

{
 undefined4 local_c;
 
 if (n < 1) {
 local_c = acc;
 }
 else {
 local_c = param_tail_call_optimized(n + -1,acc + n);
 }
 return local_c;
}



/* Function: call_tail_call_optimized @ 00011630 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_tail_call_optimized(void)

{
 int iVar1;
 
 iVar1 = param_tail_call_optimized(1000,0);
 return iVar1;
}



/* Function: param_non_tail_call @ 00011660 */

/* WARNING: Unknown calling convention */

int param_non_tail_call(int n)

{
 undefined4 local_c;
 
 if (n < 1) {
 local_c = 0;
 }
 else {
 local_c = param_non_tail_call(n + -1);
 local_c = n + local_c;
 }
 return local_c;
}



/* Function: call_non_tail_call @ 000116c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_non_tail_call(void)

{
 int iVar1;
 
 iVar1 = param_non_tail_call(100);
 return iVar1;
}



/* Function: param_vectorized_loop @ 000116f0 */

/* WARNING: Unknown calling convention */

int param_vectorized_loop(int *a,int *b,int *c,int n)

{
 int i_1;
 int sum;
 int i;
 
 for (i = 0; i < n; i = i + 1) {
 c[i] = a[i] + b[i];
 }
 sum = 0;
 for (i_1 = 0; i_1 < n; i_1 = i_1 + 1) {
 sum = c[i_1] + sum;
 }
 return sum;
}



/* Function: call_vectorized_loop @ 00011780 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorized_loop(void)

{
 int iVar1;
 int c [8];
 int b [8];
 int a [8];
 
 memcpy(a,&DAT_0001320c,0x20);
 memcpy(b,&DAT_0001322c,0x20);
 memset(c,0,0x20);
 iVar1 = param_vectorized_loop(a,b,c,8);
 return iVar1;
}



/* Function: param_link_time_optimization @ 00011820 */

/* WARNING: Unknown calling convention */

int param_link_time_optimization(int x)

{
 int iVar1;
 
 iVar1 = lto_target_func(x);
 return iVar1;
}



/* Function: lto_target_func @ 00011850 */

/* WARNING: Unknown calling convention */

int lto_target_func(int x)

{
 return x * 2 + 10;
}



/* Function: call_link_time_optimization @ 00011870 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_link_time_optimization(void)

{
 int iVar1;
 
 iVar1 = param_link_time_optimization(5);
 return iVar1;
}



/* Function: div_zero_handler @ 000118a0 */

/* WARNING: Unknown calling convention */

void div_zero_handler(int sig)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(jmp_buffer,1);
}



/* Function: param_division_by_zero @ 000118e0 */

/* WARNING: Unknown calling convention */

int param_division_by_zero(int x)

{
 int iVar1;
 int y;
 int local_c;
 
 signal(8,div_zero_handler);
 iVar1 = _setjmp(jmp_buffer);
 if (iVar1 == 0) {
 local_c = (int)(10 / (long long)x);
 }
 else {
 local_c = -1;
 }
 return local_c;
}



/* Function: call_division_by_zero @ 00011950 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_division_by_zero(void)

{
 int iVar1;
 int iVar2;
 int r2;
 int r1;
 
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 return iVar1 + iVar2;
}



/* Function: segv_handler @ 000119b0 */

/* WARNING: Unknown calling convention */

void segv_handler(int sig)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(segv_buffer,1);
}



/* Function: param_null_pointer_deref @ 000119f0 */

/* WARNING: Unknown calling convention */

int param_null_pointer_deref(int *p)

{
 int iVar1;
 int val;
 int local_c;
 
 signal(0xb,segv_handler);
 iVar1 = _setjmp(segv_buffer);
 if (iVar1 == 0) {
 local_c = *p;
 }
 else {
 local_c = -1;
 }
 return local_c;
}



/* Function: call_null_pointer_deref @ 00011a60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_null_pointer_deref(void)

{
 int iVar1;
 int iVar2;
 int r2;
 int r1;
 int valid;
 
 valid = 0x2a;
 iVar1 = param_null_pointer_deref(&valid);
 iVar2 = param_null_pointer_deref((int *)0x0);
 signal(0xb,(__sighandler_t)0x0);
 return iVar1 + iVar2;
}



/* Function: param_buffer_overflow_stack @ 00011ad0 */

/* WARNING: Removing unreachable block (ram,0x00011b1f) */
/* WARNING: Unknown calling convention */

int param_buffer_overflow_stack(int x)

{
 int i;
 int canary;
 char buffer [8];
 
 for (i = 0; i < 0x11; i = i + 1) {
 buffer[i] = 'A';
 }
 return x;
}



/* Function: param_buffer_overflow_heap @ 00011b40 */

/* WARNING: Unknown calling convention */

int param_buffer_overflow_heap(int x)

{
 void *__ptr;
 int i;
 char *heap_buffer;
 undefined4 local_c;
 
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 local_c = -2;
 }
 else {
 for (i = 0; i < 0x21; i = i + 1) {
 *(undefined1 *)((int)__ptr + i) = 0x42;
 }
 free(__ptr);
 local_c = x;
 }
 return local_c;
}



/* Function: call_buffer_overflow @ 00011bd0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_buffer_overflow(void)

{
 int iVar1;
 int iVar2;
 int r2;
 int r1;
 
 iVar1 = param_buffer_overflow_stack(10);
 iVar2 = param_buffer_overflow_heap(0x14);
 return iVar1 + iVar2;
}



/* Function: param_integer_overflow @ 00011c20 */

/* WARNING: Unknown calling convention */

int param_integer_overflow(int a,int b)

{
 uint unsigned_sum;
 uint ub;
 uint ua;
 int signed_sum;
 int local_8;
 
 local_8 = a + b;
 if (((a < 1) || (b < 1)) || (-1 < a + b)) {
 if (((a < 0) && (b < 0)) && (0 < a + b)) {
 local_8 = -2;
 }
 }
 else {
 local_8 = -1;
 }
 return local_8;
}



/* Function: call_integer_overflow @ 00011cb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_integer_overflow(void)

{
 int iVar1;
 int iVar2;
 int r2;
 int r1;
 
 iVar1 = param_integer_overflow(1000000000,1000000000);
 iVar2 = param_integer_overflow(-1,1);
 return iVar1 + iVar2;
}



/* Function: param_undefined_behavior @ 00011d10 */

/* WARNING: Unknown calling convention */

int param_undefined_behavior(int i)

{
 int local;
 
 return i << 1;
}



/* Function: call_undefined_behavior @ 00011d30 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_undefined_behavior(void)

{
 int iVar1;
 int result;
 
 iVar1 = param_undefined_behavior(5);
 return iVar1;
}



/* Function: param_implementation_defined @ 00011d60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_implementation_defined(void)

{
 
 return 0x2b;
}



/* Function: call_implementation_defined @ 00011e00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_implementation_defined(void)

{
 int iVar1;
 
 iVar1 = param_implementation_defined();
 return iVar1;
}



/* Function: test_obf_opt_edge @ 00011e20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_obf_opt_edge(void)

{
 int iVar1;
 
 printf(&DAT_0001300d);
 iVar1 = call_fake_branch();
 printf(&DAT_0001303b,iVar1);
 iVar1 = call_opaque_predicate();
 printf(&DAT_00013057,iVar1);
 iVar1 = call_instruction_substitution();
 printf(&DAT_00013073,iVar1);
 iVar1 = call_string_encryption();
 printf(&DAT_00013090,iVar1);
 iVar1 = call_tail_call_optimized();
 printf(&DAT_000130ac,iVar1);
 iVar1 = call_non_tail_call();
 printf(&DAT_000130d6,iVar1);
 iVar1 = call_vectorized_loop();
 printf(&DAT_000130fb,iVar1);
 iVar1 = call_link_time_optimization();
 printf(&DAT_00013121,iVar1);
 iVar1 = call_division_by_zero();
 printf(&DAT_00013141,iVar1);
 iVar1 = call_null_pointer_deref();
 printf(&DAT_0001315d,iVar1);
 iVar1 = call_buffer_overflow();
 printf(&DAT_0001317a,iVar1);
 iVar1 = call_integer_overflow();
 printf(&DAT_00013197,iVar1);
 iVar1 = call_undefined_behavior();
 printf(&DAT_000131c8,iVar1);
 iVar1 = call_implementation_defined();
 printf(&DAT_000131e5,iVar1);
 return;
}



/* Function: main @ 00011fe0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_obf_opt_edge();
 return 0;
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 47 */
