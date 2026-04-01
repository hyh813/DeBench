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

/* Additional type definitions for decompiled code */
typedef unsigned char byte;
typedef unsigned char undefined1;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef void (*__sighandler_t)(int);

#include <setjmp.h>
#include <signal.h>
#include <string.h>
#include <stdlib.h>

/* Global variables */
static int div_zero_caught = 0;
static int segv_caught = 0;
static jmp_buf jmp_buffer;
static jmp_buf segv_buffer;

/* Encrypted string data placeholder */
static const char encrypted_0[] = "\x5a\x5a\x5a\x5a\x5a\x5a\x5a\x5a\x5a\x5a\x5a\x5a\x5a\x5a\x5a\x5a\x5a\x5a\x5a\x5a\x5a\x5a\x5a\x5a\x5a\x5a\x5a\x5a\x5a\x5a\x5a\x5a";

/* String data placeholder */
static const char DAT_0001172c[] = "Testing obfuscation and optimization\n";
static const char DAT_0001175c[] = "call_fake_branch: %d\n";
static const char DAT_00011778[] = "call_opaque_predicate: %d\n";
static const char DAT_00011794[] = "call_instruction_substitution: %d\n";
static const char DAT_000117b4[] = "call_string_encryption: %d\n";
static const char DAT_000117d0[] = "call_tail_call_optimized: %d\n";
static const char DAT_000117fc[] = "call_non_tail_call: %d\n";
static const char DAT_00011824[] = "call_vectorized_loop: %d\n";
static const char DAT_0001184c[] = "call_link_time_optimization: %d\n";
static const char DAT_0001186c[] = "call_division_by_zero: %d\n";
static const char DAT_00011888[] = "call_null_pointer_deref: %d\n";
static const char DAT_000118a8[] = "call_buffer_overflow: %d\n";
static const char DAT_000118c8[] = "call_integer_overflow: %d\n";
static const char DAT_000118fc[] = "call_undefined_behavior: %d\n";
static const char DAT_0001191c[] = "call_implementation_defined: %d\n";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/7/7_gcc_O0_no_g
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

undefined4 param_fake_branch(undefined4 param_1)

{
 return param_1;
}



/* Function: call_fake_branch @ 000106e8 */

undefined4 call_fake_branch(void)

{
 undefined4 uVar1;
 
 uVar1 = param_fake_branch(10);
 return uVar1;
}



/* Function: param_opaque_predicate @ 00010704 */

int param_opaque_predicate(int param_1)

{
 int extraout_r1;
 int iVar1;
 int local_20;
 int local_1c;
 
 local_1c = param_1 + 1;
 local_20 = param_1;
 while (local_1c != 0) {
 __aeabi_idivmod(local_20,local_1c);
 local_20 = local_1c;
 local_1c = extraout_r1;
 }
 if ((param_1 * param_1 + param_1 * 2 + 1 == (param_1 + 1) * (param_1 + 1)) && (local_20 == 1)) {
 iVar1 = (param_1 + 5) * 2;
 }
 else {
 iVar1 = param_1 * 3 + 0x14;
 }
 return iVar1;
}



/* Function: call_opaque_predicate @ 00010814 */

undefined4 call_opaque_predicate(void)

{
 undefined4 uVar1;
 
 uVar1 = param_opaque_predicate(5);
 return uVar1;
}



/* Function: param_instruction_substitution @ 00010830 */

int param_instruction_substitution(uint param_1)

{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}



/* Function: call_instruction_substitution @ 000108c0 */

undefined4 call_instruction_substitution(void)

{
 undefined4 uVar1;
 
 uVar1 = param_instruction_substitution(10);
 return uVar1;
}



/* Function: decrypt_string @ 000108dc */

byte * decrypt_string(char *param_1,byte *param_2,size_t param_3,byte param_4)

{
 byte *local_c;
 
 strncpy((char *)param_2,param_1,param_3);
 param_2[param_3 - 1] = 0;
 for (local_c = param_2; *local_c != 0; local_c = local_c + 1) {
 *local_c = param_4 ^ *local_c;
 }
 return param_2;
}



/* Function: param_string_encryption @ 00010974 */

int param_string_encryption(void)

{
 size_t sVar1;
 byte local_2c [32];
 int local_c;
 
 local_c = 0;
 decrypt_string(&encrypted_0,local_2c,0x20,0x5a);
 sVar1 = strlen((char *)local_2c);
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(sVar1,local_c,0);
 }
 return sVar1 + local_2c[0];
}



/* Function: call_string_encryption @ 000109ec */

undefined4 call_string_encryption(void)

{
 undefined4 uVar1;
 
 uVar1 = param_string_encryption();
 return uVar1;
}



/* Function: param_tail_call_optimized @ 00010a04 */

int param_tail_call_optimized(int param_1,int param_2)

{
 if (0 < param_1) {
 param_2 = param_tail_call_optimized(param_1 + -1,param_2 + param_1);
 }
 return param_2;
}



/* Function: call_tail_call_optimized @ 00010a58 */

undefined4 call_tail_call_optimized(void)

{
 undefined4 uVar1;
 
 uVar1 = param_tail_call_optimized(1000,0);
 return uVar1;
}



/* Function: param_non_tail_call @ 00010a78 */

int param_non_tail_call(int param_1)

{
 int iVar1;
 
 if (param_1 < 1) {
 iVar1 = 0;
 }
 else {
 iVar1 = param_non_tail_call(param_1 + -1);
 iVar1 = iVar1 + param_1;
 }
 return iVar1;
}



/* Function: call_non_tail_call @ 00010ac4 */

undefined4 call_non_tail_call(void)

{
 undefined4 uVar1;
 
 uVar1 = param_non_tail_call(100);
 return uVar1;
}



/* Function: param_vectorized_loop @ 00010ae0 */

int param_vectorized_loop(int param_1,int param_2,int param_3,int param_4)

{
 undefined4 local_14;
 undefined4 local_10;
 undefined4 local_c;
 
 for (local_14 = 0; local_14 < param_4; local_14 = local_14 + 1) {
 *(int *)(param_3 + local_14 * 4) =
 *(int *)(param_1 + local_14 * 4) + *(int *)(param_2 + local_14 * 4);
 }
 local_10 = 0;
 for (local_c = 0; local_c < param_4; local_c = local_c + 1) {
 local_10 = local_10 + *(int *)(param_3 + local_c * 4);
 }
 return local_10;
}



/* Function: call_vectorized_loop @ 00010bc8 */

undefined4 call_vectorized_loop(void)

{
 undefined4 uVar1;
 undefined4 local_6c;
 undefined4 uStack_68;
 undefined4 uStack_64;
 undefined4 uStack_60;
 undefined4 local_5c;
 undefined4 uStack_58;
 undefined4 uStack_54;
 undefined4 uStack_50;
 undefined4 local_4c;
 undefined4 uStack_48;
 undefined4 uStack_44;
 undefined4 uStack_40;
 undefined4 local_3c;
 undefined4 uStack_38;
 undefined4 uStack_34;
 undefined4 uStack_30;
 undefined1 auStack_2c [32];
 int local_c;
 
 local_c = 0;
 local_6c = 1;
 uStack_68 = 2;
 uStack_64 = 3;
 uStack_60 = 4;
 local_5c = 5;
 uStack_58 = 6;
 uStack_54 = 7;
 uStack_50 = 8;
 local_4c = 8;
 uStack_48 = 7;
 uStack_44 = 6;
 uStack_40 = 5;
 local_3c = 4;
 uStack_38 = 3;
 uStack_34 = 2;
 uStack_30 = 1;
 memset(auStack_2c,0,0x20);
 uVar1 = param_vectorized_loop(&local_6c,&local_4c,auStack_2c,8);
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(uVar1,local_c,0);
 }
 return uVar1;
}



/* Function: lto_target_func @ 00010c7c */

int lto_target_func(int param_1)

{
 return (param_1 + 5) * 2;
}



/* Function: param_link_time_optimization @ 00010ca8 */

undefined4 param_link_time_optimization(undefined4 param_1)

{
 undefined4 uVar1;
 
 uVar1 = lto_target_func(param_1);
 return uVar1;
}



/* Function: call_link_time_optimization @ 00010cd0 */

undefined4 call_link_time_optimization(void)

{
 undefined4 uVar1;
 
 uVar1 = param_link_time_optimization(5);
 return uVar1;
}



/* Function: div_zero_handler @ 00010cec */

void div_zero_handler(void)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(jmp_buffer,1);
}



/* Function: param_division_by_zero @ 00010d1c */

undefined4 param_division_by_zero(undefined4 param_1)

{
 int iVar1;
 undefined4 uVar2;
 
 signal(8,div_zero_handler);
 iVar1 = _setjmp(jmp_buffer);
 if (iVar1 == 0) {
 uVar2 = __aeabi_idiv(10,param_1);
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}



/* Function: call_division_by_zero @ 00010d80 */

int call_division_by_zero(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 return iVar1 + iVar2;
}



/* Function: segv_handler @ 00010dc8 */

void segv_handler(void)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(segv_buffer,1);
}



/* Function: param_null_pointer_deref @ 00010df8 */

undefined4 param_null_pointer_deref(undefined4 *param_1)

{
 int iVar1;
 undefined4 uVar2;
 
 signal(0xb,segv_handler);
 iVar1 = _setjmp(segv_buffer);
 if (iVar1 == 0) {
 uVar2 = *param_1;
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}



/* Function: call_null_pointer_deref @ 00010e54 */

int call_null_pointer_deref(void)

{
 __sighandler_t p_Var1;
 undefined4 local_18;
 int local_14;
 int local_10;
 int local_c;
 
 local_c = 0;
 local_18 = 0x2a;
 local_14 = param_null_pointer_deref(&local_18);
 local_10 = param_null_pointer_deref(0);
 p_Var1 = signal(0xb,(__sighandler_t)0x0);
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(p_Var1,local_c,0);
 }
 return local_14 + local_10;
}



/* Function: param_buffer_overflow_stack @ 00010ed8 */

/* WARNING: Removing unreachable block (ram,0x00010f50) */

undefined4 param_buffer_overflow_stack(undefined4 param_1)

{
 int local_1c;
 undefined1 auStack_14 [8];
 int local_c;
 
 local_c = 0;
 for (local_1c = 0; local_1c < 0x11; local_1c = local_1c + 1) {
 auStack_14[local_1c] = 0x41;
 }
 if (local_c == 0) {
 return param_1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(param_1,local_c,0);
}



/* Function: param_buffer_overflow_heap @ 00010f84 */

undefined4 param_buffer_overflow_heap(undefined4 param_1)

{
 void *__ptr;
 undefined4 local_10;
 
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 param_1 = 0xfffffffe;
 }
 else {
 for (local_10 = 0; local_10 < 0x21; local_10 = local_10 + 1) {
 *(undefined1 *)((int)__ptr + local_10) = 0x42;
 }
 free(__ptr);
 }
 return param_1;
}



/* Function: call_buffer_overflow @ 00011008 */

int call_buffer_overflow(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_buffer_overflow_stack(10);
 iVar2 = param_buffer_overflow_heap(0x14);
 return iVar1 + iVar2;
}



/* Function: param_integer_overflow @ 00011044 */

int param_integer_overflow(int param_1,int param_2)

{
 int iVar1;
 
 iVar1 = param_1 + param_2;
 if (((param_1 < 1) || (param_2 < 1)) || (-1 < param_1 + param_2)) {
 if (((param_1 < 0) && (param_2 < 0)) && (0 < param_1 + param_2)) {
 iVar1 = -2;
 }
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_integer_overflow @ 000110f4 */

int call_integer_overflow(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_integer_overflow(1000000000,1000000000);
 iVar2 = param_integer_overflow(0xffffffff,1);
 return iVar1 + iVar2;
}



/* Function: param_undefined_behavior @ 0001113c */

int param_undefined_behavior(int param_1)

{
 return param_1 << 1;
}



/* Function: call_undefined_behavior @ 0001116c */

undefined4 call_undefined_behavior(void)

{
 undefined4 uVar1;
 
 uVar1 = param_undefined_behavior(5);
 return uVar1;
}



/* Function: param_implementation_defined @ 00011194 */

undefined4 param_implementation_defined(void)

{
 return 0x2c;
}



/* Function: call_implementation_defined @ 0001125c */

undefined4 call_implementation_defined(void)

{
 undefined4 uVar1;
 
 uVar1 = param_implementation_defined();
 return uVar1;
}



/* Function: test_obf_opt_edge @ 00011274 */

int test_obf_opt_edge(void)

{
 undefined4 uVar1;
 int iVar2;
 
 puts(&DAT_0001172c);
 uVar1 = call_fake_branch();
 printf(&DAT_0001175c,uVar1);
 uVar1 = call_opaque_predicate();
 printf(&DAT_00011778,uVar1);
 uVar1 = call_instruction_substitution();
 printf(&DAT_00011794,uVar1);
 uVar1 = call_string_encryption();
 printf(&DAT_000117b4,uVar1);
 uVar1 = call_tail_call_optimized();
 printf(&DAT_000117d0,uVar1);
 uVar1 = call_non_tail_call();
 printf(&DAT_000117fc,uVar1);
 uVar1 = call_vectorized_loop();
 printf(&DAT_00011824,uVar1);
 uVar1 = call_link_time_optimization();
 printf(&DAT_0001184c,uVar1);
 uVar1 = call_division_by_zero();
 printf(&DAT_0001186c,uVar1);
 uVar1 = call_null_pointer_deref();
 printf(&DAT_00011888,uVar1);
 uVar1 = call_buffer_overflow();
 printf(&DAT_000118a8,uVar1);
 uVar1 = call_integer_overflow();
 printf(&DAT_000118c8,uVar1);
 uVar1 = call_undefined_behavior();
 printf(&DAT_000118fc,uVar1);
 uVar1 = call_implementation_defined();
 iVar2 = printf(&DAT_0001191c,uVar1);
 return iVar2;
}



/* Function: main @ 000113e0 */

undefined4 main(void)

{
 test_obf_opt_edge();
 return 0;
}




/* CRT stub function __aeabi_idiv removed by preprocessor */





/* CRT stub function .divsi3_skip_div0_test removed by preprocessor */





/* CRT stub function __aeabi_idivmod removed by preprocessor */




/* Function: __aeabi_idiv0 @ 00011638 */

void __aeabi_idiv0(void)

{
 raise(8);
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 46 */
