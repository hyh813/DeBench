/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <setjmp.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

typedef unsigned char byte;
typedef unsigned int uint;

// Additional type definitions for compatibility
// size_t is already defined in system headers
// Note: jmp_buf and void (*)(int) are provided by system headers

// Global variable declarations
int completed_0 = 0;
void *__dso_handle = 0;
void *stack0x00000004 = 0;
int div_zero_caught = 0;
int segv_caught = 0;
long jmp_buffer[20];
long segv_buffer[20];
byte param_string_encryption_encrypted[32];

// External function declarations

unsigned int main(void);
uint __divsi3(uint, uint);
void __aeabi_ldiv0(void);
uint LZCOUNT(uint);
void call_weak_fn(void);
int __aeabi_idivmod(int param_1, int param_2);
uint _divsi3_skip_div0_test(uint param_1, uint param_2);

// LZCOUNT implementation - count leading zeros
uint LZCOUNT(uint val)
{
 uint count = 0;
 if (val == 0) return 32;
 while ((val & 0x80000000) == 0) {
  val <<= 1;
  count++;
 }
 return count;
}

// Macro definitions
#define SCARRY4(a,b) (((a) + (b)) < (a))

// Data declarations
char DAT_000116a5[] = "test1";
char DAT_000116d3[] = "test2";
char DAT_000116ef[] = "test3";
char DAT_0001170b[] = "test4";
char DAT_00011728[] = "test5";
char DAT_00011744[] = "test6";
char DAT_0001176e[] = "test7";
char DAT_00011793[] = "test8";
char DAT_000117b9[] = "test9";
char DAT_000117d9[] = "test10";
char DAT_000117f5[] = "test11";
char DAT_00011812[] = "test12";
char DAT_0001182f[] = "test13";
char DAT_00011860[] = "test14";
char DAT_0001187d[] = "test15";

// Decompiled by BinaryAI
// SHA256: 07596595d42ea94ba2feb3ac24210dcc289086fdf50834bb7b282b5432513cd0



// Function: <EXTERNAL>::raise @ 0x104cc
int raise(int __sig)
{
 return 0;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x104d8
void __libc_start_main(int (*main)(void), int argc, char **argv, void (*init)(void), void (*fini)(void), void *rtld_fini, void *stack_end)
{
 main();
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x104e4
void __cxa_finalize(void *dso_handle)
{
 return;
}

// Function: <EXTERNAL>::printf @ 0x104f0
static int stub_printf(char *__format,...)
{
 return 0;
}

// Function: <EXTERNAL>::longjmp @ 0x104fc
static void stub_longjmp(jmp_buf __env,int __val)
{
}

// Function: <EXTERNAL>::_setjmp @ 0x10508
static int stub_setjmp(jmp_buf __env)
{
 return 0;
}

// Function: <EXTERNAL>::free @ 0x10514
void free(void *__ptr)
{
 return;
}

// Function: <EXTERNAL>::signal @ 0x10520
void (*signal(int __sig,void (*__handler)(int)))(int)
{
 return (void (*)(int))0;
}

// Function: <EXTERNAL>::malloc @ 0x1052c
void * malloc(size_t __size)
{
 static char buffer[4096];
 return buffer;
}

// Function: <EXTERNAL>::strlen @ 0x10544
static size_t stub_strlen(const char *__s)
{
 size_t len = 0;
 while (__s[len] != 0) len++;
 return len;
}

// Function: <EXTERNAL>::strncpy @ 0x10550
char * stub_strncpy(char *__dest,char *__src,size_t __n)
{
 size_t i;
 for (i = 0; i < __n && __src[i] != 0; i++) {
  __dest[i] = __src[i];
 }
 for (; i < __n; i++) {
  __dest[i] = 0;
 }
 return __dest;
}

// Function: <EXTERNAL>::abort @ 0x1055c
void abort(void)
{
}











// Function: param_fake_branch @ 0x106d0
int param_fake_branch(int param_1)
{
 int iVar1;
 int local_10;
 iVar1 = param_1 * param_1;
 local_10 = param_1;
 if (iVar1 == -1 || iVar1 + 1 < 0 != SCARRY4(iVar1,1)) {
 local_10 = param_1 * 2 + -0x21524111;
 }
 strlen("test");
 return local_10;
}

// Function: call_fake_branch @ 0x10758
void call_fake_branch(void)
{
 param_fake_branch(10);
 return;
}

// Function: param_opaque_predicate @ 0x10770
int param_opaque_predicate(int param_1)
{
 int extraout_r1;
 int local_1c;
 int local_18;
 int local_c;
 local_1c = param_1 + 1;
 local_18 = param_1;
 while (local_1c != 0) {
 extraout_r1 = __aeabi_idivmod(local_18,local_1c);
 local_18 = local_1c;
 local_1c = extraout_r1;
 }
 if (((param_1 * param_1 + param_1 * 2) - (param_1 + 1) * (param_1 + 1) == -1) && (local_18 == 1))
 {
 local_c = param_1 * 2 + 10;
 }
 else {
 local_c = param_1 * 3 + 0x14;
 }
 return local_c;
}

// Function: call_opaque_predicate @ 0x10878
void call_opaque_predicate(void)
{
 param_opaque_predicate(5);
 return;
}

// Function: param_instruction_substitution @ 0x10890
int param_instruction_substitution(uint param_1)
{
 return param_1 * 6 + (param_1 >> 1) + (param_1 & 0xf) + param_1 * 0xf;
}

// Function: call_instruction_substitution @ 0x10900
void call_instruction_substitution(void)
{
 param_instruction_substitution(10);
 return;
}

// Function: decrypt_string @ 0x10918
byte * decrypt_string(char *param_1,byte *param_2,size_t param_3,byte param_4)
{
 byte *local_1c;
 strncpy((char *)param_2,param_1,param_3);
 param_2[param_3 - 1] = 0;
 for (local_1c = param_2; *local_1c != 0; local_1c = local_1c + 1) {
 *local_1c = *local_1c ^ param_4;
 }
 return param_2;
}

// Function: param_string_encryption @ 0x109ac
int param_string_encryption(void)
{
 size_t sVar1;
 byte local_28 [32];
 decrypt_string(&param_string_encryption_encrypted,local_28,0x20,0x5a);
 sVar1 = strlen((char *)local_28);
 return sVar1 + local_28[0];
}

// Function: call_string_encryption @ 0x109f4
void call_string_encryption(void)
{
 param_string_encryption();
 return;
}

// Function: param_tail_call_optimized @ 0x10a08
int param_tail_call_optimized(int param_1,int param_2)
{
 int local_c;
 local_c = param_2;
 if (0 < param_1) {
 local_c = param_tail_call_optimized(param_1 + -1,param_2 + param_1);
 }
 return local_c;
}

// Function: call_tail_call_optimized @ 0x10a64
void call_tail_call_optimized(void)
{
 param_tail_call_optimized(1000,0);
 return;
}

// Function: param_non_tail_call @ 0x10a80
int param_non_tail_call(int param_1)
{
 int local_c;
 if (param_1 < 1) {
 local_c = 0;
 }
 else {
 local_c = param_non_tail_call(param_1 + -1);
 local_c = param_1 + local_c;
 }
 return local_c;
}

// Function: call_non_tail_call @ 0x10ae0
void call_non_tail_call(void)
{
 param_non_tail_call(100);
 return;
}

// Function: param_vectorized_loop @ 0x10af8
int param_vectorized_loop(int param_1,int param_2,int param_3,int param_4)
{
 int local_1c;
 int local_18;
 int local_14;
 for (local_14 = 0; local_14 < param_4; local_14 = local_14 + 1) {
 *(int *)(param_3 + local_14 * 4) =
 *(int *)(param_1 + local_14 * 4) + *(int *)(param_2 + local_14 * 4);
 }
 local_18 = 0;
 for (local_1c = 0; local_1c < param_4; local_1c = local_1c + 1) {
 local_18 = local_18 + *(int *)(param_3 + local_1c * 4);
 }
 return local_18;
}

// Function: call_vectorized_loop @ 0x10bbc
void call_vectorized_loop(void)
{
 unsigned int local_70;
 unsigned int local_6c;
 unsigned int local_68;
 unsigned int local_64;
 unsigned int local_60;
 unsigned int local_5c;
 unsigned int local_58;
 unsigned int local_54;
 unsigned int local_50;
 unsigned int uStack_4c;
 unsigned int uStack_48;
 unsigned int uStack_44;
 unsigned int local_40;
 unsigned int uStack_3c;
 unsigned int uStack_38;
 unsigned int uStack_34;
 unsigned int local_30;
 unsigned int uStack_2c;
 unsigned int uStack_28;
 unsigned int uStack_24;
 unsigned int local_20;
 unsigned int uStack_1c;
 unsigned int uStack_18;
 unsigned int uStack_14;
 local_30 = 1;
 uStack_2c = 2;
 uStack_28 = 3;
 uStack_24 = 4;
 local_20 = 5;
 uStack_1c = 6;
 uStack_18 = 7;
 uStack_14 = 8;
 local_50 = 8;
 uStack_4c = 7;
 uStack_48 = 6;
 uStack_44 = 5;
 local_40 = 4;
 uStack_3c = 3;
 uStack_38 = 2;
 uStack_34 = 1;
 local_54 = 0;
 local_58 = 0;
 local_5c = 0;
 local_60 = 0;
 local_64 = 0;
 local_68 = 0;
 local_6c = 0;
 local_70 = 0;
 param_vectorized_loop(&local_30,&local_50,&local_70,8);
 return;
}

// Function: param_link_time_optimization @ 0x10c4c
void param_link_time_optimization(unsigned int param_1)
{
 lto_target_func(param_1);
 return;
}

// Function: lto_target_func @ 0x10c70
int lto_target_func(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: call_link_time_optimization @ 0x10c8c
void call_link_time_optimization(void)
{
 param_link_time_optimization(5);
 return;
}

// Function: div_zero_handler @ 0x10ca4
void div_zero_handler(int sig)
{
 div_zero_caught = 1;
 longjmp((jmp_buf *)jmp_buffer,1);
}

// Function: param_division_by_zero @ 0x10cd8
unsigned int param_division_by_zero(unsigned int param_1)
{
 int iVar1;
 unsigned int local_c;
 signal(8,div_zero_handler);
 iVar1 = _setjmp((jmp_buf *)jmp_buffer);
 if (iVar1 == 0) {
 local_c = __divsi3(10,param_1);
 }
 else {
 local_c = 0xffffffff;
 }
 return local_c;
}

// Function: call_division_by_zero @ 0x10d50
int call_division_by_zero(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(void (*)(int))0x0);
 return iVar1 + iVar2;
}

// Function: segv_handler @ 0x10d9c
void segv_handler(int sig)
{
 segv_caught = 1;
 longjmp((jmp_buf *)segv_buffer,1);
}

// Function: param_null_pointer_deref @ 0x10dd0
unsigned int param_null_pointer_deref(unsigned int *param_1)
{
 int iVar1;
 unsigned int local_c;
 signal(0xb,segv_handler);
 iVar1 = _setjmp((jmp_buf *)segv_buffer);
 if (iVar1 == 0) {
 local_c = *param_1;
 }
 else {
 local_c = 0xffffffff;
 }
 return local_c;
}

// Function: call_null_pointer_deref @ 0x10e44
int call_null_pointer_deref(void)
{
 int iVar1;
 int iVar2;
 unsigned int local_c;
 local_c = 0x2a;
 iVar1 = param_null_pointer_deref(&local_c);
 iVar2 = param_null_pointer_deref((unsigned int *)0);
 signal(0xb,(void (*)(int))0x0);
 return iVar1 + iVar2;
}

// Function: param_buffer_overflow_stack @ 0x10e98
unsigned int param_buffer_overflow_stack(unsigned int param_1)
{
 int local_14;
 char auStack_c [8];
 unsigned int local_4;
 local_4 = param_1;
 for (local_14 = 0; local_14 < 0x11; local_14 = local_14 + 1) {
 auStack_c[local_14] = 0x41;
 }
 return local_4;
}

// Function: param_buffer_overflow_heap @ 0x10f24
unsigned int param_buffer_overflow_heap(unsigned int param_1)
{
 void *__ptr;
 int local_18;
 unsigned int local_c;
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 local_c = 0xfffffffe;
 }
 else {
 for (local_18 = 0; local_18 < 0x21; local_18 = local_18 + 1) {
 *(char *)((int)__ptr + local_18) = 0x42;
 }
 free(__ptr);
 local_c = param_1;
 }
 return local_c;
}

// Function: call_buffer_overflow @ 0x10fc0
int call_buffer_overflow(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_buffer_overflow_stack(10);
 iVar2 = param_buffer_overflow_heap(0x14);
 return iVar1 + iVar2;
}

// Function: param_integer_overflow @ 0x10ffc
int param_integer_overflow(int param_1,int param_2)
{
 int iVar1;
 int local_4;
 iVar1 = param_1 + param_2;
 local_4 = param_1 + param_2;
 if (((param_1 < 1) || (param_2 < 1)) || (iVar1 != -1 && iVar1 + 1 < 0 == SCARRY4(iVar1,1))) {
 if (((param_1 == -1 || param_1 + 1 < 0 != SCARRY4(param_1,1)) &&
 (param_2 == -1 || param_2 + 1 < 0 != SCARRY4(param_2,1))) && (0 < iVar1)) {
 local_4 = -2;
 }
 }
 else {
 local_4 = -1;
 }
 return local_4;
}

// Function: call_integer_overflow @ 0x110c8
int call_integer_overflow(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_integer_overflow(1000000000, 1000000000);
 iVar2 = param_integer_overflow(0xffffffff,1);
 return iVar1 + iVar2;
}

// Function: param_undefined_behavior @ 0x11110
int param_undefined_behavior(int param_1)
{
 return param_1 << 1;
}

// Function: call_undefined_behavior @ 0x11130
unsigned int call_undefined_behavior(void)
{
 unsigned int uVar1;
 uVar1 = param_undefined_behavior(5);
 return uVar1;
}

// Function: param_implementation_defined @ 0x11158
unsigned int param_implementation_defined(void)
{
 return 0x2c;
}

// Function: call_implementation_defined @ 0x11204
void call_implementation_defined(void)
{
 param_implementation_defined();
 return;
}

// Function: test_obf_opt_edge @ 0x11218
void test_obf_opt_edge(void)
{
 unsigned int uVar1;
 printf(&DAT_000116a5);
 call_fake_branch();
 printf(&DAT_000116d3);
 call_opaque_predicate();
 printf(&DAT_000116ef);
 call_instruction_substitution();
 printf(&DAT_0001170b);
 call_string_encryption();
 printf(&DAT_00011728);
 call_tail_call_optimized();
 printf(&DAT_00011744);
 call_non_tail_call();
 printf(&DAT_0001176e);
 call_vectorized_loop();
 printf(&DAT_00011793);
 call_link_time_optimization();
 printf(&DAT_000117b9);
 call_division_by_zero();
 printf(&DAT_000117d9);
 call_null_pointer_deref();
 printf(&DAT_000117f5);
 call_buffer_overflow();
 printf(&DAT_00011812);
 call_integer_overflow();
 printf(&DAT_0001182f);
 call_undefined_behavior();
 printf(&DAT_00011860);
 call_implementation_defined();
 printf(&DAT_0001187d);
 return;
}

// Function: main @ 0x11388
unsigned int main(void)
{
 test_obf_opt_edge();
 return 0;
}







// Function: __aeabi_idivmod @ 0x115d4
int __aeabi_idivmod(int param_1,int param_2)
{
 bool bVar1;
 if (param_2 != 0) {
 return _divsi3_skip_div0_test((uint)param_1, (uint)param_2);
 }
 bVar1 = param_1 < 0;
 if (0 < param_1) {
 param_1 = 0x7fffffff;
 }
 if (bVar1) {
 param_1 = -0x80000000;
 }
 __aeabi_ldiv0();
 return 0;
}

// Function: _divsi3_skip_div0_test - division helper
uint _divsi3_skip_div0_test(uint param_1, uint param_2)
{
 if (param_2 == 0) {
 return 0;
 }
 return param_1 / param_2;
}





