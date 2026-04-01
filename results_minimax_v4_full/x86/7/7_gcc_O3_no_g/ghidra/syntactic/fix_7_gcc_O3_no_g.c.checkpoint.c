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
typedef uint8_t byte;
typedef uint8_t undefined1;
typedef unsigned int uint;
typedef void (*code)(void);

/* Missing type definitions and global variables */
#include <setjmp.h>
typedef void (*__sighandler_t)(int);
typedef unsigned char undefined;

int div_zero_caught;
int segv_caught;
jmp_buf jmp_buffer;
jmp_buf segv_buffer;

/* Encrypted string (placeholder - XOR 0x5a encrypted) */
char encrypted_0[31] = {0x3a, 0x26, 0x25, 0x20, 0x2d, 0x28, 0x23, 0x20, 
                       0x2d, 0x28, 0x3f, 0x20, 0x26, 0x25, 0x20, 0x34,
                       0x2f, 0x20, 0x27, 0x3c, 0x3a, 0x27, 0x20, 0x33,
                       0x28, 0x36, 0x20, 0x33, 0x20, 0x31, 0x00};

/* String constants */
char DAT_00012008[] = "Testing Obfuscation Optimizations - Edge Cases\n";
char DAT_0001212f[] = "param_opaque_predicate(5) = %d\n";
char DAT_0001214b[] = "call_opaque_predicate() = %d\n";
char DAT_00012167[] = "param_instruction_substitution(14) = 0x%x\n";
char DAT_00012184[] = "Decrypted string length: %d\n";
char DAT_00012038[] = "param_tail_call_optimized(1000,0) = %d\n";
char DAT_00012064[] = "param_non_tail_call(100) = %d\n";
char DAT_0001208c[] = "call_vectorized_loop() = %d\n";
char DAT_000120b4[] = "param_link_time_optimization(2) = %d\n";
char DAT_000121a0[] = "param_division_by_zero test: %d\n";
char DAT_000121bc[] = "param_null_pointer_deref test: %d\n";
char DAT_000121d9[] = "call_buffer_overflow() = %d\n";
char DAT_000120d4[] = "call_integer_overflow() = %d\n";
char DAT_000121f6[] = "call_undefined_behavior() = %d\n";
char DAT_00012108[] = "call_implementation_defined() = 0x%x\n";

/* Function prototypes */
void div_zero_handler(void);
void segv_handler(void);
void __stack_chk_fail(void);
void __stack_chk_fail_local(void);
void __longjmp_chk(jmp_buf, int);
int signal(int, void (*)(int));
int _setjmp(jmp_buf);
void longjmp(jmp_buf, int);
char *strncpy(char *, const char *, size_t);
size_t strlen(const char *);
void *malloc(size_t);
void free(void *);
int puts(const char *);
int __printf_chk(int, const char *, ...);

/* Additional globals needed */

/* Function to trigger invalid instruction - returns pointer that will cause SIGSEGV when called */
void *invalidInstructionException(void)
{
    // Return a function pointer to an invalid address (triggers SIGSEGV when invoked)
    return (void *)0x1;
}

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/7/7_gcc_O3_no_g
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



/* Function: main @ 000111b0 */

undefined4 main(void)

{
 test_obf_opt_edge();
 return 0;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 000111fc */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011200 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 00011339 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 0001133d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: div_zero_handler @ 00011350 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void div_zero_handler(void)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 __longjmp_chk(jmp_buffer,1);
}



/* Function: segv_handler @ 00011380 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void segv_handler(void)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 __longjmp_chk(segv_buffer,1);
}



/* Function: param_division_by_zero.constprop.0 @ 000113b0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 param_division_by_zero_constprop_0(void)

{
 code *pcVar1;
 int iVar2;
 
 signal(8,div_zero_handler);
 iVar2 = _setjmp(jmp_buffer);
 if (iVar2 == 0) {
 /* WARNING: Does not return */
 pcVar1 = (code *)invalidInstructionException();
 (*pcVar1)();
 }
 return 0xffffffff;
}



/* Function: param_division_by_zero.constprop.1 @ 00011400 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_division_by_zero_constprop_1(void)

{
 int iVar1;
 
 signal(8,div_zero_handler);
 iVar1 = _setjmp(jmp_buffer);
 return (-(uint)(iVar1 == 0) & 3) - 1;
}



/* Function: param_fake_branch @ 00011440 */

undefined4 param_fake_branch(undefined4 param_1)

{
 return param_1;
}



/* Function: call_fake_branch @ 00011450 */

undefined4 call_fake_branch(void)

{
 return 10;
}



/* Function: param_opaque_predicate @ 00011460 */

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



/* Function: call_opaque_predicate @ 000114c0 */

undefined4 call_opaque_predicate(void)

{
 int iVar1;
 undefined4 uVar2;
 int iVar3;
 int iVar4;
 
 iVar1 = 5;
 iVar4 = 6;
 do {
 iVar3 = iVar4;
 iVar4 = iVar1 % iVar3;
 iVar1 = iVar3;
 } while (iVar4 != 0);
 uVar2 = 0x14;
 if (iVar3 != 1) {
 uVar2 = 0x23;
 }
 return uVar2;
}



/* Function: param_instruction_substitution @ 000114f0 */

int param_instruction_substitution(uint param_1)

{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}



/* Function: call_instruction_substitution @ 00011520 */

undefined4 call_instruction_substitution(void)

{
 return 0xe1;
}



/* Function: decrypt_string @ 00011530 */

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
 bVar1 = pbVar2[1];
 pbVar2 = pbVar2 + 1;
 }
 return param_2;
}



/* Function: param_string_encryption @ 00011590 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_string_encryption(void)

{
 byte bVar1;
 byte *pbVar2;
 size_t sVar3;
 int in_GS_OFFSET;
 byte local_30 [31];
 undefined1 local_11;
 int local_10;
 undefined4 uStack_c;
 
 uStack_c = 0x1159b;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 strncpy((char *)local_30,(char *)&encrypted_0,0x1f);
 local_11 = 0;
 pbVar2 = local_30;
 bVar1 = local_30[0];
 while (bVar1 != 0) {
 *pbVar2 = bVar1 ^ 0x5a;
 bVar1 = pbVar2[1];
 pbVar2 = pbVar2 + 1;
 }
 sVar3 = strlen((char *)local_30);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return sVar3 + (int)(char)local_30[0];
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: call_string_encryption @ 00011630 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int call_string_encryption(void)

{
 byte bVar1;
 byte *pbVar2;
 size_t sVar3;
 int in_GS_OFFSET;
 byte local_30 [31];
 undefined1 local_11;
 int local_10;
 undefined4 uStack_c;
 
 uStack_c = 0x1163b;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 strncpy((char *)local_30,(char *)&encrypted_0,0x1f);
 local_11 = 0;
 pbVar2 = local_30;
 bVar1 = local_30[0];
 while (bVar1 != 0) {
 *pbVar2 = bVar1 ^ 0x5a;
 bVar1 = pbVar2[1];
 pbVar2 = pbVar2 + 1;
 }
 sVar3 = strlen((char *)local_30);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return sVar3 + (int)(char)local_30[0];
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: param_tail_call_optimized @ 000116d0 */

int param_tail_call_optimized(int param_1,int param_2)

{
 if (0 < param_1) {
 do {
 param_2 = param_2 + param_1;
 param_1 = param_1 + -1;
 } while (param_1 != 0);
 }
 return param_2;
}



/* Function: call_tail_call_optimized @ 000116f0 */

undefined4 call_tail_call_optimized(void)

{
 return 0x7a314;
}



/* Function: param_non_tail_call @ 00011700 */

int param_non_tail_call(int param_1)

{
 int iVar1;
 
 iVar1 = 0;
 if (0 < param_1) {
 do {
 iVar1 = iVar1 + param_1;
 param_1 = param_1 + -1;
 } while (param_1 != 0);
 }
 return iVar1;
}



/* Function: call_non_tail_call @ 00011720 */

undefined4 call_non_tail_call(void)

{
 return 0x13ba;
}



/* Function: param_vectorized_loop @ 00011730 */

int param_vectorized_loop(int param_1,int param_2,int *param_3,int param_4)

{
 int *piVar1;
 int iVar2;
 
 if (0 < param_4) {
 iVar2 = 0;
 do {
 param_3[iVar2] = *(int *)(param_2 + iVar2 * 4) + *(int *)(param_1 + iVar2 * 4);
 iVar2 = iVar2 + 1;
 } while (param_4 != iVar2);
 piVar1 = param_3 + param_4;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *param_3;
 param_3 = param_3 + 1;
 } while (piVar1 != param_3);
 return iVar2;
 }
 return 0;
}



/* Function: call_vectorized_loop @ 00011790 */

undefined4 call_vectorized_loop(void)

{
 return 0x48;
}



/* Function: param_link_time_optimization @ 000117a0 */

int param_link_time_optimization(int param_1)

{
 return param_1 * 2 + 10;
}



/* Function: call_link_time_optimization @ 000117b0 */

undefined4 call_link_time_optimization(void)

{
 return 0x14;
}



/* Function: param_division_by_zero @ 000117c0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 param_division_by_zero(int param_1)

{
 int iVar1;
 undefined4 uVar2;
 
 signal(8,div_zero_handler);
 iVar1 = _setjmp(jmp_buffer);
 if (iVar1 == 0) {
 uVar2 = (undefined4)(10 / (long long)param_1);
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}



/* Function: call_division_by_zero @ 00011820 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int call_division_by_zero(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_division_by_zero_constprop_1();
 iVar2 = param_division_by_zero_constprop_0();
 signal(8,(__sighandler_t)0x0);
 return iVar1 + iVar2;
}



/* Function: param_null_pointer_deref @ 00011860 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

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



/* Function: call_null_pointer_deref @ 000118b0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int call_null_pointer_deref(void)

{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 undefined4 local_14;
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



/* Function: param_buffer_overflow_stack @ 00011920 */

undefined4 param_buffer_overflow_stack(undefined4 param_1)

{
 return param_1;
}



/* Function: param_buffer_overflow_heap @ 00011930 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 param_buffer_overflow_heap(undefined4 param_1)

{
 void *__ptr;
 
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 param_1 = 0xfffffffe;
 }
 else {
 free(__ptr);
 }
 return param_1;
}



/* Function: call_buffer_overflow @ 00011970 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 call_buffer_overflow(void)

{
 void *__ptr;
 undefined4 uVar1;
 
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 uVar1 = 8;
 }
 else {
 free(__ptr);
 uVar1 = 0x1e;
 }
 return uVar1;
}



/* Function: param_integer_overflow @ 000119b0 */

int param_integer_overflow(uint param_1,uint param_2)

{
 int iVar1;
 
 iVar1 = param_1 + param_2;
 if ((0 < (int)param_1) && (0 < (int)param_2)) {
 if (iVar1 < 0) {
 iVar1 = -1;
 }
 return iVar1;
 }
 if (((int)(param_1 & param_2) < 0) && (0 < iVar1)) {
 iVar1 = -2;
 }
 return iVar1;
}



/* Function: call_integer_overflow @ 000119f0 */

undefined4 call_integer_overflow(void)

{
 return 2000000000;
}



/* Function: param_undefined_behavior @ 00011a00 */

int param_undefined_behavior(int param_1)

{
 return param_1 * 2;
}



/* Function: call_undefined_behavior @ 00011a10 */

undefined4 call_undefined_behavior(void)

{
 return 10;
}



/* Function: param_implementation_defined @ 00011a20 */

undefined4 param_implementation_defined(void)

{
 return 0x2b;
}



/* Function: call_implementation_defined @ 00011a30 */

undefined4 call_implementation_defined(void)

{
 return 0x2b;
}



/* Function: test_obf_opt_edge @ 00011a40 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_obf_opt_edge(void)

{
 byte bVar1;
 byte *pbVar2;
 undefined4 uVar3;
 size_t sVar4;
 int iVar5;
 void *__ptr;
 int iVar6;
 int iVar7;
 int in_GS_OFFSET;
 undefined4 local_34;
 byte local_30 [31];
 undefined1 local_11;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_00012008);
 __printf_chk(1,&DAT_0001212f,10);
 iVar5 = 5;
 iVar7 = 6;
 do {
 iVar6 = iVar7;
 iVar7 = iVar5 % iVar6;
 iVar5 = iVar6;
 } while (iVar7 != 0);
 uVar3 = 0x14;
 if (iVar6 != 1) {
 uVar3 = 0x23;
 }
 __printf_chk(1,&DAT_0001214b,uVar3);
 __printf_chk(1,&DAT_00012167,0xe1);
 strncpy((char *)local_30,(char *)&encrypted_0,0x1f);
 local_11 = 0;
 pbVar2 = local_30;
 bVar1 = local_30[0];
 while (bVar1 != 0) {
 *pbVar2 = bVar1 ^ 0x5a;
 bVar1 = pbVar2[1];
 pbVar2 = pbVar2 + 1;
 }
 sVar4 = strlen((char *)local_30);
 __printf_chk(1,&DAT_00012184,(int)(char)local_30[0] + sVar4);
 __printf_chk(1,&DAT_00012038,0x7a314);
 __printf_chk(1,&DAT_00012064,0x13ba);
 uVar3 = call_vectorized_loop();
 __printf_chk(1,&DAT_0001208c,uVar3);
 __printf_chk(1,&DAT_000120b4,0x14);
 iVar5 = param_division_by_zero_constprop_1();
 iVar7 = param_division_by_zero_constprop_0();
 signal(8,(__sighandler_t)0x0);
 __printf_chk(1,&DAT_000121a0,iVar5 + iVar7);
 local_34 = 0x2a;
 iVar5 = param_null_pointer_deref(&local_34);
 iVar7 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0x0);
 __printf_chk(1,&DAT_000121bc,iVar5 + iVar7);
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 uVar3 = 8;
 }
 else {
 free(__ptr);
 uVar3 = 0x1e;
 }
 __printf_chk(1,&DAT_000121d9,uVar3);
 __printf_chk(1,&DAT_000120d4,2000000000);
 __printf_chk(1,&DAT_000121f6,10);
 __printf_chk(1,&DAT_00012108,0x2b);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: __stack_chk_fail_local @ 00011ca0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 49 */
