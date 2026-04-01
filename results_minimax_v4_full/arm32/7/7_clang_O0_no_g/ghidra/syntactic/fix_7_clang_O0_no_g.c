/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned char byte;
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
typedef unsigned int uint;
typedef unsigned char undefined1;

/* Signal and setjmp type definitions */
typedef void (*__sighandler_t)(int);
#define SIG_DFL ((__sighandler_t)0)
#define SIG_IGN ((__sighandler_t)1)
typedef struct __jmp_buf_tag {
    int __fl;
    int __ss;
    int __gs;
    int __fs;
    int __es;
    int __ds;
    int __edi;
    int __esi;
    int __ebp;
    int __esp;
    int __ebx;
    int __edx;
    int __ecx;
    int __eax;
    int __eip;
    int __cs;
    int __eflags;
    int __esp0;
    int __ss0;
} __jmp_buf_tag[1];

/* External variables */
extern int div_zero_caught;
extern int segv_caught;
extern __jmp_buf_tag jmp_buffer;
extern __jmp_buf_tag segv_buffer;

/* Function declarations */
int __divsi3(int a, int b);
void __aeabi_idivmod(int a, int b);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/7/7_clang_O0_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */





/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Data from binary (originally in .rodata section) */
char param_string_encryption_encrypted[32] = "\x28\x77\x29\x2a\x38\x25\x20\x3b\x3a\x2d\x2e\x24\x25\x28\x2d\x2e\x23\x2a\x29\x2c\x2f\x20\x3b\x3a\x29\x2c\x2e\x25\x28\x2b\x2c\x2d";
char DAT_000116a5[] = "Testing obfuscation optimizations:\n";
char DAT_000116d3[] = "Fake branch result: %d\n";
char DAT_000116ef[] = "Opaque predicate result: %d\n";
char DAT_0001170b[] = "Instruction substitution result: %d\n";
char DAT_00011728[] = "String encryption result: %d\n";
char DAT_00011744[] = "Tail call optimized result: %d\n";
char DAT_0001176e[] = "Non-tail call result: %d\n";
char DAT_00011793[] = "Vectorized loop result: %d\n";
char DAT_000117b9[] = "Link-time optimization result: %d\n";
char DAT_000117d9[] = "Division by zero result: %d\n";
char DAT_000117f5[] = "Null pointer deref result: %d\n";
char DAT_00011812[] = "Buffer overflow result: %d\n";
char DAT_0001182f[] = "Integer overflow result: %d\n";
char DAT_00011860[] = "Undefined behavior result: %d\n";
char DAT_0001187d[] = "Implementation-defined result: %d\n";

/* Global variables for signal handling */
int div_zero_caught;
int segv_caught;
__jmp_buf_tag jmp_buffer;
__jmp_buf_tag segv_buffer;

/* Function: param_fake_branch @ 000106d0 */

/* WARNING: Removing unreachable block (ram,0x0001072c) */

int param_fake_branch(int param_1)

{
 int local_10;
 
 local_10 = param_1;
 if (0x7fffffff < (uint)(param_1 * param_1)) {
 local_10 = param_1 * 2 + -0x21524111;
 }
 strlen("test");
 return local_10;
}



/* Function: call_fake_branch @ 00010758 */

void call_fake_branch(void)

{
 param_fake_branch(10);
 return;
}



/* Function: param_opaque_predicate @ 00010770 */

int param_opaque_predicate(int param_1)

{
 int extraout_r1;
 int local_1c;
 int local_18;
 int local_c;
 
 local_1c = param_1 + 1;
 local_18 = param_1;
 while (local_1c != 0) {
 __aeabi_idivmod(local_18,local_1c);
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



/* Function: call_opaque_predicate @ 00010878 */

void call_opaque_predicate(void)

{
 param_opaque_predicate(5);
 return;
}



/* Function: param_instruction_substitution @ 00010890 */

int param_instruction_substitution(unsigned int param_1)

{
 return param_1 * 6 + (param_1 >> 1) + (param_1 & 0xf) + param_1 * 0xf;
}



/* Function: call_instruction_substitution @ 00010900 */

void call_instruction_substitution(void)

{
 param_instruction_substitution(10);
 return;
}



/* Function: decrypt_string @ 00010918 */

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



/* Function: param_string_encryption @ 000109ac */

int param_string_encryption(void)

{
 size_t sVar1;
 byte local_28 [32];
 
 decrypt_string(&param_string_encryption_encrypted,local_28,0x20,0x5a);
 sVar1 = strlen((char *)local_28);
 return sVar1 + local_28[0];
}



/* Function: call_string_encryption @ 000109f4 */

void call_string_encryption(void)

{
 param_string_encryption();
 return;
}



/* Function: param_tail_call_optimized @ 00010a08 */

int param_tail_call_optimized(int param_1,int param_2)

{
 int local_c;
 
 local_c = param_2;
 if (0 < param_1) {
 local_c = param_tail_call_optimized(param_1 + -1,param_2 + param_1);
 }
 return local_c;
}



/* Function: call_tail_call_optimized @ 00010a64 */

void call_tail_call_optimized(void)

{
 param_tail_call_optimized(1000,0);
 return;
}



/* Function: param_non_tail_call @ 00010a80 */

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



/* Function: call_non_tail_call @ 00010ae0 */

void call_non_tail_call(void)

{
 param_non_tail_call(100);
 return;
}



/* Function: param_vectorized_loop @ 00010af8 */

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



/* Function: call_vectorized_loop @ 00010bbc */

void call_vectorized_loop(void)

{
 int local_70;
 int local_6c;
 int local_68;
 int local_64;
 int local_60;
 int local_5c;
 int local_58;
 int local_54;
 int local_50;
 int uStack_4c;
 int uStack_48;
 int uStack_44;
 int local_40;
 int uStack_3c;
 int uStack_38;
 int uStack_34;
 int local_30;
 int uStack_2c;
 int uStack_28;
 int uStack_24;
 int local_20;
 int uStack_1c;
 int uStack_18;
 int uStack_14;
 
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



/* Function: param_link_time_optimization @ 00010c4c */

void param_link_time_optimization(int param_1)

{
 lto_target_func(param_1);
 return;
}



/* Function: lto_target_func @ 00010c70 */

int lto_target_func(int param_1)

{
 return param_1 * 2 + 10;
}



/* Function: call_link_time_optimization @ 00010c8c */

void call_link_time_optimization(void)

{
 param_link_time_optimization(5);
 return;
}



/* Function: div_zero_handler @ 00010ca4 */

void div_zero_handler(void)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp((__jmp_buf_tag *)jmp_buffer,1);
}



/* Function: param_division_by_zero @ 00010cd8 */

int param_division_by_zero(int param_1)

{
 int iVar1;
 int local_c;
 
 (void)signal(8,div_zero_handler);
 iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
 if (iVar1 == 0) {
 local_c = __divsi3(10,param_1);
 }
 else {
 local_c = 0xffffffff;
 }
 return local_c;
}



/* Function: call_division_by_zero @ 00010d50 */

int call_division_by_zero(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 (void)signal(8,SIG_DFL);
 return iVar1 + iVar2;
}



/* Function: segv_handler @ 00010d9c */

void segv_handler(void)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp((__jmp_buf_tag *)segv_buffer,1);
}



/* Function: param_null_pointer_deref @ 00010dd0 */

int param_null_pointer_deref(int *param_1)

{
 int iVar1;
 int local_c;
 
 (void)signal(0xb,segv_handler);
 iVar1 = _setjmp((__jmp_buf_tag *)segv_buffer);
 if (iVar1 == 0) {
 local_c = *param_1;
 }
 else {
 local_c = 0xffffffff;
 }
 return local_c;
}



/* Function: call_null_pointer_deref @ 00010e44 */

int call_null_pointer_deref(void)

{
 int iVar1;
 int iVar2;
 int local_c;
 
 local_c = 0x2a;
 iVar1 = param_null_pointer_deref(&local_c);
 iVar2 = param_null_pointer_deref(&local_c);
 (void)signal(0xb,SIG_DFL);
 return iVar1 + iVar2;
}



/* Function: param_buffer_overflow_stack @ 00010e98 */

/* WARNING: Removing unreachable block (ram,0x00010f08) */

int param_buffer_overflow_stack(int param_1)

{
 int local_14;
 undefined1 auStack_c [8];
 int local_4;
 
 local_4 = param_1;
 for (local_14 = 0; local_14 < 0x11; local_14 = local_14 + 1) {
 auStack_c[local_14] = 0x41;
 }
 return local_4;
}



/* Function: param_buffer_overflow_heap @ 00010f24 */

int param_buffer_overflow_heap(int param_1)

{
 void *__ptr;
 int local_18;
 int local_c;
 
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 local_c = 0xfffffffe;
 }
 else {
 for (local_18 = 0; local_18 < 0x21; local_18 = local_18 + 1) {
 *(undefined1 *)((int)__ptr + local_18) = 0x42;
 }
 free(__ptr);
 local_c = param_1;
 }
 return local_c;
}



/* Function: call_buffer_overflow @ 00010fc0 */

int call_buffer_overflow(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_buffer_overflow_stack(10);
 iVar2 = param_buffer_overflow_heap(0x14);
 return iVar1 + iVar2;
}



/* Function: param_integer_overflow @ 00010ffc */

int param_integer_overflow(uint param_1,uint param_2)

{
 int local_4;
 
 local_4 = param_1 + param_2;
 if ((((int)param_1 < 1) || ((int)param_2 < 1)) || (param_1 + param_2 < 0x80000000)) {
 if (((0x7fffffff < param_1) && (0x7fffffff < param_2)) && (0 < (int)(param_1 + param_2))) {
 local_4 = -2;
 }
 }
 else {
 local_4 = -1;
 }
 return local_4;
}



/* Function: call_integer_overflow @ 000110c8 */

int call_integer_overflow(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_integer_overflow(1000000000, 1);
 iVar2 = param_integer_overflow(0xffffffff,1);
 return iVar1 + iVar2;
}



/* Function: param_undefined_behavior @ 00011110 */

int param_undefined_behavior(int param_1)

{
 return param_1 << 1;
}



/* Function: call_undefined_behavior @ 00011130 */

int call_undefined_behavior(void)

{
 int uVar1;
 
 uVar1 = param_undefined_behavior(5);
 return uVar1;
}



/* Function: param_implementation_defined @ 00011158 */

/* WARNING: Removing unreachable block (ram,0x00011178) */

int param_implementation_defined(void)

{
 return 0x2c;
}



/* Function: call_implementation_defined @ 00011204 */

void call_implementation_defined(void)

{
 param_implementation_defined();
 return;
}



/* Function: test_obf_opt_edge @ 00011218 */

void test_obf_opt_edge(void)

{
 int uVar1;
 
 printf(DAT_000116a5);
 (void)call_fake_branch();
 printf(DAT_000116d3,uVar1);
 (void)call_opaque_predicate();
 printf(DAT_000116ef,uVar1);
 (void)call_instruction_substitution();
 printf(DAT_0001170b,uVar1);
 (void)call_string_encryption();
 printf(DAT_00011728,uVar1);
 (void)call_tail_call_optimized();
 printf(DAT_00011744,uVar1);
 (void)call_non_tail_call();
 printf(DAT_0001176e,uVar1);
 (void)call_vectorized_loop();
 printf(DAT_00011793,uVar1);
 (void)call_link_time_optimization();
 printf(DAT_000117b9,uVar1);
 uVar1 = call_division_by_zero();
 printf(DAT_000117d9,uVar1);
 uVar1 = call_null_pointer_deref();
 printf(DAT_000117f5,uVar1);
 uVar1 = call_buffer_overflow();
 printf(DAT_00011812,uVar1);
 uVar1 = call_integer_overflow();
 printf(DAT_0001182f,uVar1);
 uVar1 = call_undefined_behavior();
 printf(DAT_00011860,uVar1);
 uVar1 = param_implementation_defined();
 printf(DAT_0001187d,uVar1);
 return;
}



/* Function: main @ 00011388 */

int main(void)

{
 test_obf_opt_edge();
 return 0;
}




/* CRT stub function __divsi3 removed by preprocessor */





/* CRT stub function .divsi3_skip_div0_test removed by preprocessor */





/* CRT stub function __aeabi_idivmod removed by preprocessor */





/* CRT stub function __aeabi_ldiv0 removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 46 */
