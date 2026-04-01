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

/* Additional type definitions for decompiled code */
typedef unsigned int undefined4;
typedef unsigned char undefined1;
typedef unsigned int uint;
typedef unsigned char byte;
typedef void (*__sighandler_t)(int);
typedef struct { unsigned long __buf[128]; } __jmp_buf_tag;

/* Global variable declarations */
extern int div_zero_caught;
extern __jmp_buf_tag jmp_buffer[1];
extern int segv_caught;
extern __jmp_buf_tag segv_buffer[1];
extern char encrypted_0[32];
extern char DAT_0001103c[];
extern char DAT_0001106c[];
extern char DAT_00011088[];
extern char DAT_000110a4[];
extern char DAT_000110c4[];
extern char DAT_000110e0[];
extern char DAT_0001110c[];
extern char DAT_00011134[];
extern char DAT_0001115c[];
extern char DAT_0001117c[];
extern char DAT_00011198[];
extern char DAT_000111b8[];
extern char DAT_000111d8[];
extern char DAT_0001120c[];
extern char DAT_0001122c[];

/* Global variable definitions */
int div_zero_caught = 0;
__jmp_buf_tag jmp_buffer[1] = {{0}};
int segv_caught = 0;
__jmp_buf_tag segv_buffer[1] = {{0}};
char encrypted_0[32] = {0};
char DAT_0001103c[] = "Test started\n";
char DAT_0001106c[] = "param_opaque_predicate result: %d\n";
char DAT_00011088[] = "call_instruction_substitution result: %d\n";
char DAT_000110a4[] = "param_string_encryption result: %d\n";
char DAT_000110c4[] = "call_tail_call_optimized result: %d\n";
char DAT_000110e0[] = "call_non_tail_call result: %d\n";
char DAT_0001110c[] = "call_vectorized_loop result: %d\n";
char DAT_00011134[] = "call_link_time_optimization result: %d\n";
char DAT_0001115c[] = "call_division_by_zero result: %d\n";
char DAT_0001117c[] = "call_null_pointer_deref result: %d\n";
char DAT_00011198[] = "call_buffer_overflow result: %d\n";
char DAT_000111b8[] = "call_integer_overflow result: %d\n";
char DAT_000111d8[] = "call_undefined_behavior result: %d\n";
char DAT_0001120c[] = "call_implementation_defined result: %d\n";
char DAT_0001122c[] = "Test completed\n";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/7/7_gcc_O1_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */





/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: div_zero_handler @ 000106d4 */

void div_zero_handler(void)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 __longjmp_chk(jmp_buffer);
}



/* Function: segv_handler @ 000106ec */

void segv_handler(void)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 __longjmp_chk(segv_buffer);
}



/* Function: param_fake_branch @ 00010708 */

void param_fake_branch(void)

{
 return;
}



/* Function: call_fake_branch @ 0001070c */

undefined4 call_fake_branch(void)

{
 return 10;
}



/* Function: param_opaque_predicate @ 00010714 */

int param_opaque_predicate(int param_1)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int extraout_r1;
 
 iVar3 = param_1 + 1;
 if (iVar3 != 0) {
 iVar2 = param_1;
 iVar1 = iVar3;
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



/* Function: call_opaque_predicate @ 00010784 */

void call_opaque_predicate(void)

{
 param_opaque_predicate(5);
 return;
}



/* Function: param_instruction_substitution @ 00010794 */

int param_instruction_substitution(uint param_1)

{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}



/* Function: call_instruction_substitution @ 000107b4 */

undefined4 call_instruction_substitution(void)

{
 return 0xe1;
}



/* Function: decrypt_string @ 000107bc */

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



/* Function: param_string_encryption @ 00010810 */

void param_string_encryption(void)

{
 size_t sVar1;
 byte local_2c [32];
 int local_c;
 
 local_c = 0;
 decrypt_string(&encrypted_0,local_2c,0x20,0x5a);
 sVar1 = strlen((char *)local_2c);
 if (local_c == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(local_2c[0] + sVar1);
}



/* Function: call_string_encryption @ 00010878 */

void call_string_encryption(void)

{
 param_string_encryption();
 return;
}



/* Function: param_tail_call_optimized @ 00010884 */

int param_tail_call_optimized(int param_1,int param_2)

{
 int iVar1;
 
 if (0 < param_1) {
 iVar1 = param_tail_call_optimized(param_1 + -1,param_1 + param_2);
 return iVar1;
 }
 return param_2;
}



/* Function: call_tail_call_optimized @ 000108a8 */

void call_tail_call_optimized(void)

{
 param_tail_call_optimized(1000,0);
 return;
}



/* Function: param_non_tail_call @ 000108bc */

int param_non_tail_call(int param_1)

{
 int iVar1;
 
 if (0 < param_1) {
 iVar1 = param_non_tail_call(param_1 + -1);
 return iVar1 + param_1;
 }
 return 0;
}



/* Function: call_non_tail_call @ 000108e0 */

void call_non_tail_call(void)

{
 param_non_tail_call(100);
 return;
}



/* Function: param_vectorized_loop @ 000108f0 */

int param_vectorized_loop(int param_1,int param_2,int param_3,int param_4)

{
 int *piVar1;
 int iVar2;
 int *piVar3;
 int *piVar4;
 int *piVar5;
 int *piVar6;
 
 if (0 < param_4) {
 piVar1 = (int *)(param_1 + -4);
 piVar3 = (int *)(param_2 + -4);
 piVar6 = (int *)(param_3 + -4);
 piVar5 = piVar1 + param_4;
 piVar4 = piVar6;
 do {
 piVar1 = piVar1 + 1;
 piVar3 = piVar3 + 1;
 piVar4 = piVar4 + 1;
 *piVar4 = *piVar1 + *piVar3;
 } while (piVar1 != piVar5);
 iVar2 = 0;
 do {
 piVar6 = piVar6 + 1;
 iVar2 = iVar2 + *piVar6;
 } while (piVar6 != (int *)(param_3 + -4 + param_4 * 4));
 return iVar2;
 }
 return 0;
}



/* Function: call_vectorized_loop @ 00010954 */

void call_vectorized_loop(void)

{
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
 param_vectorized_loop(&local_6c,&local_4c,auStack_2c,8);
 if (local_c == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_link_time_optimization @ 000109f0 */

int param_link_time_optimization(int param_1)

{
 return (param_1 + 5) * 2;
}



/* Function: call_link_time_optimization @ 000109fc */

undefined4 call_link_time_optimization(void)

{
 return 0x14;
}



/* Function: param_division_by_zero @ 00010a04 */

undefined4 param_division_by_zero(undefined4 param_1)

{
 int iVar1;
 undefined4 uVar2;
 
 signal(8,div_zero_handler);
 iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
 if (iVar1 == 0) {
 uVar2 = __aeabi_idiv(10,param_1);
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}



/* Function: call_division_by_zero @ 00010a50 */

int call_division_by_zero(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 return iVar1 + iVar2;
}



/* Function: param_null_pointer_deref @ 00010a80 */

undefined4 param_null_pointer_deref(undefined4 *param_1)

{
 int iVar1;
 undefined4 uVar2;
 
 signal(0xb,segv_handler);
 iVar1 = _setjmp((__jmp_buf_tag *)segv_buffer);
 if (iVar1 == 0) {
 uVar2 = *param_1;
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}



/* Function: call_null_pointer_deref @ 00010ac0 */

void call_null_pointer_deref(void)

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



/* Function: param_buffer_overflow_stack @ 00010b30 */

void param_buffer_overflow_stack(void)

{
 return;
}



/* Function: param_buffer_overflow_heap @ 00010b34 */

undefined4 param_buffer_overflow_heap(undefined4 param_1)

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



/* Function: call_buffer_overflow @ 00010b6c */

int call_buffer_overflow(void)

{
 int iVar1;
 
 iVar1 = param_buffer_overflow_heap(0x14);
 return iVar1 + 10;
}



/* Function: param_integer_overflow @ 00010b80 */

uint param_integer_overflow(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 
 uVar2 = param_1 + param_2;
 uVar1 = param_1;
 if (0 < (int)param_1) {
 uVar1 = param_2;
 }
 if (((uint)(0 < (int)uVar1) & uVar2 >> 0x1f) != 0) {
 return 0xffffffff;
 }
 if (((uint)(0 < (int)uVar2) & (param_1 & param_2) >> 0x1f) != 0) {
 uVar2 = 0xfffffffe;
 }
 return uVar2;
}



/* Function: call_integer_overflow @ 00010bc4 */

undefined4 call_integer_overflow(void)

{
 return 2000000000;
}



/* Function: param_undefined_behavior @ 00010bd0 */

int param_undefined_behavior(int param_1)

{
 return param_1 << 1;
}



/* Function: call_undefined_behavior @ 00010bd8 */

undefined4 call_undefined_behavior(void)

{
 return 10;
}



/* Function: param_implementation_defined @ 00010be0 */

undefined4 param_implementation_defined(void)

{
 return 0x2c;
}



/* Function: call_implementation_defined @ 00010be8 */

undefined4 call_implementation_defined(void)

{
 return 0x2c;
}



/* Function: test_obf_opt_edge @ 00010bf0 */

void test_obf_opt_edge(void)

{
 undefined4 uVar1;
 
 puts(&DAT_0001103c);
 __printf_chk(1,&DAT_0001106c,10);
 call_opaque_predicate();
 __printf_chk(1,&DAT_00011088,20);
 __printf_chk(1,&DAT_000110a4,0xe1);
 param_string_encryption();
 __printf_chk(1,&DAT_000110c4,0);
 call_tail_call_optimized();
 __printf_chk(1,&DAT_000110e0,0);
 call_non_tail_call();
 __printf_chk(1,&DAT_0001110c,0);
 call_vectorized_loop();
 __printf_chk(1,&DAT_00011134,0);
 __printf_chk(1,&DAT_0001115c,0x14);
 uVar1 = call_division_by_zero();
 __printf_chk(1,&DAT_0001117c,uVar1);
 call_null_pointer_deref();
 __printf_chk(1,&DAT_00011198,0);
 uVar1 = call_buffer_overflow();
 __printf_chk(1,&DAT_000111b8,uVar1);
 __printf_chk(1,&DAT_000111d8,2000000000);
 __printf_chk(1,&DAT_0001120c,10);
 __printf_chk(1,&DAT_0001122c,0x2c);
 return;
}



/* Function: main @ 00010d40 */

undefined4 main(void)

{
 test_obf_opt_edge();
 return 0;
}




/* CRT stub function __aeabi_idiv removed by preprocessor */





/* CRT stub function .divsi3_skip_div0_test removed by preprocessor */





/* CRT stub function __aeabi_idivmod removed by preprocessor */




/* Function: __aeabi_idiv0 @ 00010f90 */

void __aeabi_idiv0(void)

{
 raise(8);
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 45 */
