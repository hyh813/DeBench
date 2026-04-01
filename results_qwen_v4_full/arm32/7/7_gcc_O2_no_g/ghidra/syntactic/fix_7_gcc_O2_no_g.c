/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned int undefined4;
typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned int uint;
typedef void (*__sighandler_t)(int);

/* Global variables for signal handling and encryption */
int jmp_buffer[10];
int segv_buffer[10];
int div_zero_caught;
int segv_caught;
char encrypted_0[32];

/* String constants for printf */
char DAT_00011154[] = "Test output:\n";
char DAT_00011184[] = "%d\n";
char DAT_000111a0[] = "%d\n";
char DAT_000111bc[] = "%d\n";
char DAT_000111dc[] = "%d\n";
char DAT_000111f8[] = "%d\n";
char DAT_00011224[] = "%d\n";
char DAT_0001124c[] = "%d\n";
char DAT_00011274[] = "%d\n";
char DAT_00011294[] = "%d\n";
char DAT_000112b0[] = "%d\n";
char DAT_000112d0[] = "%d\n";
char DAT_000112f0[] = "%d\n";
char DAT_00011324[] = "%d\n";
char DAT_00011344[] = "%d\n";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/7/7_gcc_O2_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: main @ 000105dc */

undefined4 main(void)

{
 test_obf_opt_edge();
 return 0;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: div_zero_handler @ 000106e4 */

void div_zero_handler(void)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 __longjmp_chk(jmp_buffer);
}



/* Function: segv_handler @ 000106fc */

void segv_handler(void)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 __longjmp_chk(segv_buffer);
}



/* Function: param_fake_branch @ 00010718 */

void param_fake_branch(void)

{
 return;
}



/* Function: call_fake_branch @ 0001071c */

undefined4 call_fake_branch(void)

{
 return 10;
}



/* Function: param_opaque_predicate @ 00010724 */

int param_opaque_predicate(int param_1)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int extraout_r1;
 
 iVar3 = param_1 + 1;
 iVar2 = param_1;
 iVar1 = iVar3;
 if (iVar3 != 0) {
 do {
 iVar4 = iVar1;
 __aeabi_idivmod(iVar2);
 iVar2 = iVar4;
 iVar1 = extraout_r1;
 } while (extraout_r1 != 0);
 if (iVar4 == 1 && param_1 * param_1 + param_1 * 2 + 1 == iVar3 * iVar3) {
 return param_1 * 2 + 10;
 }
 }
 return param_1 * 3 + 0x14;
}



/* Function: call_opaque_predicate @ 00010794 */

undefined4 call_opaque_predicate(void)

{
 int iVar1;
 int iVar2;
 undefined4 uVar3;
 int iVar4;
 int extraout_r1;
 
 iVar2 = 5;
 iVar1 = 6;
 do {
 iVar4 = iVar1;
 __aeabi_idivmod(iVar2);
 iVar2 = iVar4;
 iVar1 = extraout_r1;
 } while (extraout_r1 != 0);
 if (iVar4 == 1) {
 uVar3 = 0x14;
 }
 else {
 uVar3 = 0x23;
 }
 return uVar3;
}



/* Function: param_instruction_substitution @ 000107c4 */

int param_instruction_substitution(uint param_1)

{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}



/* Function: call_instruction_substitution @ 000107e4 */

undefined4 call_instruction_substitution(void)

{
 return 0xe1;
}



/* Function: decrypt_string @ 000107ec */

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



/* Function: param_string_encryption @ 00010840 */

void param_string_encryption(void)

{
 size_t sVar1;
 byte *pbVar2;
 byte bVar3;
 uint uVar4;
 byte local_2c [31];
 undefined1 local_d;
 int local_c;
 
 local_c = 0;
 strncpy((char *)local_2c,&encrypted_0,0x1f);
 local_d = 0;
 uVar4 = 0;
 if (local_2c[0] != 0) {
 pbVar2 = local_2c;
 bVar3 = local_2c[0];
 do {
 *pbVar2 = bVar3 ^ 0x5a;
 pbVar2 = pbVar2 + 1;
 bVar3 = *pbVar2;
 } while (bVar3 != 0);
 uVar4 = (uint)local_2c[0];
 }
 sVar1 = strlen((char *)local_2c);
 if (local_c == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(uVar4 + sVar1);
}



/* Function: param_tail_call_optimized @ 000108d4 */

int param_tail_call_optimized(int param_1,int param_2)

{
 int iVar1;
 
 if (param_1 < 1) {
 return param_2;
 }
 do {
 iVar1 = param_1 + -1;
 param_2 = param_2 + param_1;
 param_1 = iVar1;
 } while (iVar1 != 0);
 return param_2;
}



/* Function: call_tail_call_optimized @ 000108f4 */

undefined4 call_tail_call_optimized(void)

{
 return 0x7a314;
}



/* Function: param_non_tail_call @ 00010900 */

int param_non_tail_call(int param_1)

{
 int iVar1;
 int iVar2;
 
 iVar1 = 0;
 if (param_1 < 1) {
 return 0;
 }
 do {
 iVar2 = param_1 + -1;
 iVar1 = iVar1 + param_1;
 param_1 = iVar2;
 } while (iVar2 != 0);
 return iVar1;
}



/* Function: call_non_tail_call @ 00010920 */

undefined4 call_non_tail_call(void)

{
 return 0x13ba;
}



/* Function: param_vectorized_loop @ 0001092c */

int param_vectorized_loop(int param_1,int param_2,int param_3,int param_4)

{
 int *piVar1;
 int iVar2;
 int *piVar3;
 int *piVar4;
 int *piVar5;
 int *piVar6;
 
 if (0 < param_4) {
 piVar5 = (int *)(param_3 + -4);
 piVar1 = (int *)(param_1 + -4);
 piVar3 = (int *)(param_2 + -4);
 piVar6 = piVar1 + param_4;
 piVar4 = piVar5;
 do {
 piVar1 = piVar1 + 1;
 piVar3 = piVar3 + 1;
 piVar4 = piVar4 + 1;
 *piVar4 = *piVar1 + *piVar3;
 } while (piVar1 != piVar6);
 iVar2 = 0;
 piVar4 = piVar5 + param_4;
 do {
 piVar5 = piVar5 + 1;
 iVar2 = iVar2 + *piVar5;
 } while (piVar4 != piVar5);
 return iVar2;
 }
 return 0;
}



/* Function: call_vectorized_loop @ 00010990 */

void call_vectorized_loop(void)

{
 int *piVar1;
 int iVar2;
 int *piVar3;
 int *piVar5;
 int local_6c [8];
 int local_4c [4];
 undefined4 local_3c;
 undefined4 uStack_38;
 undefined4 uStack_34;
 undefined4 uStack_30;
 int aiStack_2c [8];
 int local_c;
 int *piVar4;
 
 local_c = 0;
 local_6c[0] = 1;
 local_6c[1] = 2;
 local_6c[2] = 3;
 local_6c[3] = 4;
 local_6c[4] = 5;
 local_6c[5] = 6;
 local_6c[6] = 7;
 local_6c[7] = 8;
 local_4c[0] = 8;
 local_4c[1] = 7;
 local_4c[2] = 6;
 local_4c[3] = 5;
 local_3c = 4;
 uStack_38 = 3;
 uStack_34 = 2;
 uStack_30 = 1;
 memset(aiStack_2c,0,0x20);
 piVar1 = local_4c;
 piVar3 = local_6c;
 piVar5 = aiStack_2c;
 do {
 piVar4 = piVar3 + 1;
 *piVar5 = *piVar3 + *piVar1;
 piVar1 = piVar1 + 1;
 piVar3 = piVar4;
 piVar5 = piVar5 + 1;
 } while (piVar4 != local_4c);
 iVar2 = 0;
 piVar1 = aiStack_2c;
 do {
 piVar3 = piVar1 + 1;
 iVar2 = iVar2 + *piVar1;
 piVar1 = piVar3;
 } while (&local_c != piVar3);
 if (local_c == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(iVar2,&local_c,local_c,0);
}



/* Function: param_link_time_optimization @ 00010a58 */

int param_link_time_optimization(int param_1)

{
 return (param_1 + 5) * 2;
}



/* Function: call_link_time_optimization @ 00010a64 */

undefined4 call_link_time_optimization(void)

{
 return 0x14;
}



/* Function: param_division_by_zero @ 00010a6c */

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



/* Function: call_division_by_zero @ 00010abc */

int call_division_by_zero(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 return iVar1 + iVar2;
}



/* Function: param_null_pointer_deref @ 00010aec */

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



/* Function: call_null_pointer_deref @ 00010b30 */

void call_null_pointer_deref(undefined4 param_1,undefined4 param_2)

{
 int iVar1;
 int iVar2;
 undefined4 local_18;
 int local_14;
 
 local_14 = 0;
 local_18 = 0x2a;
 iVar1 = param_null_pointer_deref(&local_18);
 iVar2 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0x0);
 if (local_14 == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(iVar1 + iVar2);
}



/* Function: param_buffer_overflow_stack @ 00010ba0 */

void param_buffer_overflow_stack(void)

{
 return;
}



/* Function: param_buffer_overflow_heap @ 00010ba4 */

undefined4 param_buffer_overflow_heap(undefined4 param_1)

{
 void *__ptr;
 
 __ptr = malloc(0x10);
 if (__ptr != (void *)0x0) {
 free(__ptr);
 return param_1;
 }
 return 0xfffffffe;
}



/* Function: call_buffer_overflow @ 00010bd0 */

undefined4 call_buffer_overflow(void)

{
 void *__ptr;
 
 __ptr = malloc(0x10);
 if (__ptr != (void *)0x0) {
 free(__ptr);
 return 0x1e;
 }
 return 8;
}



/* Function: param_integer_overflow @ 00010bf8 */

uint param_integer_overflow(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 
 uVar1 = param_1;
 if (0 < (int)param_1) {
 uVar1 = param_2;
 }
 uVar2 = param_1 + param_2;
 if ((int)uVar1 < 1) {
 if (((uint)(0 < (int)uVar2) & (param_2 & param_1) >> 0x1f) != 0) {
 uVar2 = 0xfffffffe;
 }
 return uVar2;
 }
 return uVar2 | (int)uVar2 >> 0x1f;
}



/* Function: call_integer_overflow @ 00010c30 */

undefined4 call_integer_overflow(void)

{
 return 2000000000;
}



/* Function: param_undefined_behavior @ 00010c3c */

int param_undefined_behavior(int param_1)

{
 return param_1 << 1;
}



/* Function: call_undefined_behavior @ 00010c44 */

undefined4 call_undefined_behavior(void)

{
 return 10;
}



/* Function: param_implementation_defined @ 00010c4c */

undefined4 param_implementation_defined(void)

{
 return 0x2c;
}



/* Function: call_implementation_defined @ 00010c54 */

undefined4 call_implementation_defined(void)

{
 return 0x2c;
}



/* Function: test_obf_opt_edge @ 00010c5c */

void test_obf_opt_edge(void)

{
 int iVar1;
 int iVar2;
 void *__ptr;
 int extraout_r1;
 undefined4 uVar3;
 int iVar4;
 undefined4 local_18;
 int local_14;
 
 local_14 = 0;
 puts(&DAT_00011154);
 __printf_chk(1,&DAT_00011184,10);
 iVar1 = 5;
 iVar2 = 6;
 do {
 iVar4 = iVar2;
 __aeabi_idivmod(iVar1,iVar4);
 iVar1 = iVar4;
 iVar2 = extraout_r1;
 } while (extraout_r1 != 0);
 if (iVar4 == 1) {
 uVar3 = 0x14;
 }
 else {
 uVar3 = 0x23;
 }
 __printf_chk(1,&DAT_000111a0,uVar3);
 __printf_chk(1,&DAT_000111bc,0xe1);
 param_string_encryption();
 __printf_chk(1,&DAT_000111dc,0);
 __printf_chk(1,&DAT_000111f8,0x7a314);
 __printf_chk(1,&DAT_00011224,0x13ba);
 call_vectorized_loop();
 __printf_chk(1,&DAT_0001124c,0);
 __printf_chk(1,&DAT_00011274,0x14);
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 __printf_chk(1,&DAT_00011294,iVar1 + iVar2);
 local_18 = 0x2a;
 iVar1 = param_null_pointer_deref(&local_18);
 iVar2 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0x0);
 __printf_chk(1,&DAT_000112b0,iVar1 + iVar2);
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 uVar3 = 8;
 }
 else {
 free(__ptr);
 uVar3 = 0x1e;
 }
 __printf_chk(1,&DAT_000112d0,uVar3);
 __printf_chk(1,&DAT_000112f0,2000000000);
 __printf_chk(1,&DAT_00011324,10);
 if (local_14 != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 __printf_chk(1,&DAT_00011344,0x2c);
 return;
}




/* CRT stub function __aeabi_idiv removed by preprocessor */





/* CRT stub function .divsi3_skip_div0_test removed by preprocessor */





/* CRT stub function __aeabi_idivmod removed by preprocessor */




/* Function: __aeabi_idiv0 @ 000110a8 */

void __aeabi_idiv0(void)

{
 raise(8);
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 44 */
