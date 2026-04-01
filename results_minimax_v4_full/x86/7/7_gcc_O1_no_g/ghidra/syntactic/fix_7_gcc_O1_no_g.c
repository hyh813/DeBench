#include <setjmp.h>
#include <signal.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned char byte;
typedef unsigned int uint;
typedef void (*code)();
typedef unsigned char undefined;

/* Global variables for exception handling */
int div_zero_caught;
int segv_caught;
jmp_buf jmp_buffer;
jmp_buf segv_buffer;

/* String data */
char encrypted_0 = '?'; /* Placeholder - actual encrypted string would be here */

/* String constants from .rodata section */
const char DAT_00012008[] = "Test: opaque_predicate = %d\n";
const char DAT_0001212f[] = "Expected: 10\n";
const char DAT_0001214b[] = "opaque_predicate: %d\n";
const char DAT_00012167[] = "instruction_substitution: %d\n";
const char DAT_00012184[] = "string_encryption: %d\n";
const char DAT_00012038[] = "tail_call_optimized: %d\n";
const char DAT_00012064[] = "non_tail_call: %d\n";
const char DAT_0001208c[] = "vectorized_loop: %d\n";
const char DAT_000120b4[] = "link_time_optimization: %d\n";
const char DAT_000121a0[] = "division_by_zero: %d\n";
const char DAT_000121bc[] = "null_pointer_deref: %d\n";
const char DAT_000121d9[] = "buffer_overflow: %d\n";
const char DAT_000120d4[] = "integer_overflow: %d\n";
const char DAT_000121f6[] = "undefined_behavior: %d\n";
const char DAT_00012108[] = "implementation_defined: %d\n";

/* External declarations */
extern int __stack_chk_fail(void);
extern void __longjmp_chk(jmp_buf __env, int __val);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/7/7_gcc_O1_no_g
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




/* Function: __i686.get_pc_thunk.bx @ 000111dc */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 000111e0 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 00011319 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 0001131d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: div_zero_handler @ 00011321 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void div_zero_handler(void)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 __longjmp_chk(jmp_buffer,1);
}



/* Function: segv_handler @ 0001134c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void segv_handler(void)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 __longjmp_chk(segv_buffer,1);
}



/* Function: param_fake_branch @ 00011377 */

int param_fake_branch(int param_1)

{
 return param_1;
}



/* Function: call_fake_branch @ 00011380 */

int call_fake_branch(void)

{
 return 10;
}



/* Function: param_opaque_predicate @ 0001138a */

int param_opaque_predicate(int param_1)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 
 iVar1 = param_1 + 1;
 iVar2 = param_1;
 iVar4 = iVar1;
 if (iVar1 != 0) {
 do {
 iVar3 = iVar4;
 iVar4 = iVar2 % iVar3;
 iVar2 = iVar3;
 } while (iVar4 != 0);
 if ((iVar3 == 1) && (param_1 * 2 + 1 + param_1 * param_1 == iVar1 * iVar1)) {
 return param_1 * 2 + 10;
 }
 }
 return param_1 * 3 + 0x14;
}



/* Function: call_opaque_predicate @ 000113dd */

void call_opaque_predicate(void)

{
 param_opaque_predicate(5);
 return;
}



/* Function: param_instruction_substitution @ 000113ec */

int param_instruction_substitution(uint param_1)

{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}



/* Function: call_instruction_substitution @ 0001140e */

int call_instruction_substitution(void)

{
 return 0xe1;
}



/* Function: decrypt_string @ 00011418 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

byte * decrypt_string(char *param_1,byte *param_2,size_t param_3,byte param_4)

{
 byte bVar1;
 byte *pbVar2;
 
 strncpy((char *)param_2,param_1,param_3);
 param_2[param_3 - 1] = 0;
 bVar1 = *param_2;
 pbVar2 = param_2;
 while (bVar1 != 0) {
 *pbVar2 = bVar1 ^ param_4;
 pbVar2 = pbVar2 + 1;
 bVar1 = *pbVar2;
 }
 return param_2;
}



/* Function: param_string_encryption @ 0001146f */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_string_encryption(void)

{
 size_t sVar1;
 int in_GS_OFFSET;
 char local_30 [32];
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 decrypt_string(&encrypted_0,local_30,0x20,0x5a);
 sVar1 = strlen(local_30);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return (int)local_30[0] + sVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: call_string_encryption @ 000114d0 */

void call_string_encryption(void)

{
 param_string_encryption();
 return;
}



/* Function: param_tail_call_optimized @ 000114e0 */

int param_tail_call_optimized(int param_1,int param_2)

{
 if (0 < param_1) {
 param_2 = param_tail_call_optimized(param_1 + -1,param_2 + param_1);
 }
 return param_2;
}



/* Function: call_tail_call_optimized @ 0001150b */

void call_tail_call_optimized(void)

{
 param_tail_call_optimized(1000,0);
 return;
}



/* Function: param_non_tail_call @ 00011522 */

int param_non_tail_call(int param_1)

{
 int iVar1;
 
 iVar1 = 0;
 if (0 < param_1) {
 iVar1 = param_non_tail_call(param_1 + -1);
 iVar1 = iVar1 + param_1;
 }
 return iVar1;
}



/* Function: call_non_tail_call @ 0001154d */

void call_non_tail_call(void)

{
 param_non_tail_call(100);
 return;
}



/* Function: param_vectorized_loop @ 0001155f */

int param_vectorized_loop(int param_1,int param_2,int *param_3,int param_4)

{
 int *piVar1;
 int iVar2;
 
 if (param_4 < 1) {
 iVar2 = 0;
 }
 else {
 iVar2 = 0;
 do {
 param_3[iVar2] = *(int *)(param_2 + iVar2 * 4) + *(int *)(param_1 + iVar2 * 4);
 iVar2 = iVar2 + 1;
 } while (param_4 != iVar2);
 piVar1 = param_3 + iVar2;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *param_3;
 param_3 = param_3 + 1;
 } while (param_3 != piVar1);
 }
 return iVar2;
}



/* Function: call_vectorized_loop @ 000115ad */

void call_vectorized_loop(void)

{
 uint uVar1;
 int in_GS_OFFSET;
 int local_70;
 int local_6c;
 int local_68;
 int local_64;
 int local_60;
 int local_5c;
 int local_58;
 int local_54;
 int local_50;
 int local_4c;
 int local_48;
 int local_44;
 int local_40;
 int local_3c;
 int local_38;
 int local_34;
 int local_30 [8];
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 uVar1 = 0;
 local_70 = 1;
 local_6c = 2;
 local_68 = 3;
 local_64 = 4;
 local_60 = 5;
 local_5c = 6;
 local_58 = 7;
 local_54 = 8;
 local_50 = 8;
 local_4c = 7;
 local_48 = 6;
 local_44 = 5;
 local_40 = 4;
 local_3c = 3;
 local_38 = 2;
 local_34 = 1;
 do {
 *(int *)((int)local_30 + uVar1) = 0;
 uVar1 = uVar1 + 4;
 } while (uVar1 < 0x20);
 param_vectorized_loop(&local_70,&local_50,local_30,8);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: param_link_time_optimization @ 00011684 */

int param_link_time_optimization(int param_1)

{
 return param_1 * 2 + 10;
}



/* Function: call_link_time_optimization @ 00011691 */

int call_link_time_optimization(void)

{
 return 0x14;
}



/* Function: param_division_by_zero @ 0001169b */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_division_by_zero(int param_1)

{
 int iVar1;
 int uVar2;
 
 (void)signal(8,div_zero_handler);
 iVar1 = _setjmp(jmp_buffer);
 if (iVar1 == 0) {
 uVar2 = (int)(10 / (long long)param_1);
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}



/* Function: call_division_by_zero @ 000116eb */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int call_division_by_zero(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 (void)signal(8,(__sighandler_t)0x0);
 return iVar1 + iVar2;
}



/* Function: param_null_pointer_deref @ 0001172d */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_null_pointer_deref(int *param_1)

{
 int iVar1;
 int uVar2;
 
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



/* Function: call_null_pointer_deref @ 00011779 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int call_null_pointer_deref(void)

{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 int local_14;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_14 = 0x2a;
 iVar1 = param_null_pointer_deref(&local_14);
 iVar2 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0x0);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar1 + iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: param_buffer_overflow_stack @ 000117e7 */

int param_buffer_overflow_stack(int param_1)

{
 return param_1;
}



/* Function: param_buffer_overflow_heap @ 000117f0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_buffer_overflow_heap(int param_1)

{
 void *__ptr;
 int iVar1;
 
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 param_1 = 0xfffffffe;
 }
 else {
 iVar1 = 0x21;
 do {
 iVar1 = iVar1 + -1;
 } while (iVar1 != 0);
 free(__ptr);
 }
 return param_1;
}



/* Function: call_buffer_overflow @ 0001183a */

int call_buffer_overflow(void)

{
 int iVar1;
 
 iVar1 = param_buffer_overflow_heap(0x14);
 return iVar1 + 10;
}



/* Function: param_integer_overflow @ 0001184f */

int param_integer_overflow(uint param_1,uint param_2)

{
 int iVar1;
 
 iVar1 = param_1 + param_2;
 if (((int)param_1 < 1 || (int)param_2 < 1) || (-1 < iVar1)) {
 if (((int)(param_1 & param_2) < 0) && (0 < iVar1)) {
 iVar1 = -2;
 }
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_integer_overflow @ 00011890 */

int call_integer_overflow(void)

{
 return 2000000000;
}



/* Function: param_undefined_behavior @ 0001189a */

int param_undefined_behavior(int param_1)

{
 return param_1 * 2;
}



/* Function: call_undefined_behavior @ 000118a5 */

int call_undefined_behavior(void)

{
 return 10;
}



/* Function: param_implementation_defined @ 000118af */

int param_implementation_defined(void)

{
 return 0x2b;
}



/* Function: call_implementation_defined @ 000118b9 */

int call_implementation_defined(void)

{
 return 0x2b;
}



/* Function: test_obf_opt_edge @ 000118c3 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_obf_opt_edge(void)

{
 int uVar1;
 
 puts(&DAT_00012008);
 (void) printf(&DAT_0001212f,10);
 call_opaque_predicate();
 (void) printf(&DAT_0001214b,10);
 (void) printf(&DAT_00012167,0xe1);
 uVar1 = param_string_encryption();
 (void) printf(&DAT_00012184,uVar1);
 call_tail_call_optimized();
 (void) printf(&DAT_00012038,500500);
 call_non_tail_call();
 (void) printf(&DAT_00012064,5050);
 call_vectorized_loop();
 (void) printf(&DAT_0001208c,36);
 (void) printf(&DAT_000120b4,0x14);
 uVar1 = call_division_by_zero();
 (void) printf(&DAT_000121a0,uVar1);
 uVar1 = call_null_pointer_deref();
 (void) printf(&DAT_000121bc,uVar1);
 uVar1 = call_buffer_overflow();
 (void) printf(&DAT_000121d9,uVar1);
 (void) printf(&DAT_000120d4,2000000000);
 (void) printf(&DAT_000121f6,10);
 (void) printf(&DAT_00012108,0x2b);
 return;
}



/* Function: main @ 00011a17 */

int main(void)

{
 test_obf_opt_edge();
 return 0;
}



/* Function: __stack_chk_fail_local @ 00011a30 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 47 */
