#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <signal.h>
#include <setjmp.h>

/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned char byte;

/* Global variable declarations */
char param_string_encryption_encrypted[] = "encrypted_string_data_here";
int div_zero_caught = 0;
int segv_caught = 0;
char jmp_buffer[128];
char segv_buffer[128];
char DAT_0001320c[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32};
char DAT_0001322c[] = {32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
int stack0x00000004 = 0;

/* Forward declarations */
int main(void);
int __do_global_ctors_aux(void);

/* External function declarations */
void __gmon_start__(void);
void frame_dummy(void);
int __x86_get_pc_thunk_di(void);
int lto_target_func(unsigned int param_1);

/* Additional type definitions for compatibility */
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

/* Additional type definitions for compatibility */
typedef void (*__sighandler_t)(int);
typedef struct { char __jmpbuf[128]; } __jmp_buf_tag;

// Decompiled by BinaryAI
// SHA256: 9eb4c267272cfc468a0b0cc3c41838f31a637950741f3d76766bc6f0dac9f383



// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x11040
extern int __libc_start_main(int (*main)(void), int argc, void *argv, void (*init)(void), void (*fini)(void), void *stack_end, void *auxvec);



// Function: <EXTERNAL>::free @ 0x11080
extern void free(void *__ptr);



// Function: <EXTERNAL>::signal @ 0x110a0
extern __sighandler_t signal(int __sig,__sighandler_t __handler);

// Function: <EXTERNAL>::malloc @ 0x110b0
extern void * malloc(size_t __size);



// Function: <EXTERNAL>::memset @ 0x110d0
extern void * memset(void *__s,int __c,size_t __n);



// Function: FUN_000110f0 @ 0x110f0
void FUN_000110f0(unsigned int param_1)
{
 int unaff_EBX;
 unaff_EBX = param_1;
 ((void (*)(void))**(void ***)(unaff_EBX + -0x10))();
 return;
}



// Function: __i686.get_pc_thunk.bx @ 0x1112c
void __i686_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.bx @ 0x11130
void __x86_get_pc_thunk_bx(void)
{
 return;
}







// Function: __x86.get_pc_thunk.dx @ 0x11269
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x1126d
int __x86_get_pc_thunk_di(void)
{
 return 0;
}

// Function: param_fake_branch @ 0x11280
int param_fake_branch(int param_1)
{
 int local_c;
 local_c = param_1;
 if (param_1 * param_1 < 0) {
 local_c = param_1 * 2 + -0x21524111;
 }
 strlen("test");
 return local_c;
}

// Function: call_fake_branch @ 0x11300
int call_fake_branch(void)
{
 return param_fake_branch(10);
}

// Function: param_opaque_predicate @ 0x11330
int param_opaque_predicate(int param_1)
{
 int iVar1;
 int local_14;
 int local_10;
 int local_8;
 local_10 = param_1;
 local_14 = param_1 + 1;
 while (local_14 != 0) {
 iVar1 = local_14;
 local_14 = local_10 % local_14;
 local_10 = iVar1;
 }
 if ((param_1 * param_1 + param_1 * 2 + 1 == (param_1 + 1) * (param_1 + 1)) && (local_10 == 1)) {
 local_8 = param_1 * 2 + 10;
 }
 else {
 local_8 = param_1 * 3 + 0x14;
 }
 return local_8;
}

// Function: call_opaque_predicate @ 0x11410
int call_opaque_predicate(void)
{
 return param_opaque_predicate(5);
}

// Function: param_instruction_substitution @ 0x11440
int param_instruction_substitution(uint param_1)
{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}

// Function: call_instruction_substitution @ 0x114a0
int call_instruction_substitution(void)
{
 return param_instruction_substitution(10);
}

// Function: decrypt_string @ 0x114d0
unsigned char * decrypt_string(char *param_1,unsigned char *param_2,size_t param_3,unsigned char param_4)
{
 byte *local_c;
 strncpy((char *)param_2,param_1,param_3);
 param_2[param_3 - 1] = 0;
 for (local_c = param_2; *local_c != 0; local_c = local_c + 1) {
 *local_c = *local_c ^ param_4;
 }
 return param_2;
}

// Function: param_string_encryption @ 0x11550
int param_string_encryption(void)
{
 size_t sVar1;
 char local_28 [32];
 decrypt_string(&param_string_encryption_encrypted,local_28,0x20,0x5a);
 sVar1 = strlen(local_28);
 return sVar1 + (int)local_28[0];
}

// Function: call_string_encryption @ 0x115b0
int call_string_encryption(void)
{
 return param_string_encryption();
}

// Function: param_tail_call_optimized @ 0x115d0
int param_tail_call_optimized(int param_1,int param_2)
{
 int local_c;
 if (param_1 < 1) {
 local_c = param_2;
 }
 else {
 local_c = param_tail_call_optimized(param_1 + -1,param_2 + param_1);
 }
 return local_c;
}

// Function: call_tail_call_optimized @ 0x11630
int call_tail_call_optimized(void)
{
 return param_tail_call_optimized(1000,0);
}

// Function: param_non_tail_call @ 0x11660
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

// Function: call_non_tail_call @ 0x116c0
int call_non_tail_call(void)
{
 return param_non_tail_call(100);
}

// Function: param_vectorized_loop @ 0x116f0
int param_vectorized_loop(int param_1,int param_2,int param_3,int param_4)
{
 int local_10;
 int local_c;
 int local_8;
 for (local_8 = 0; local_8 < param_4; local_8 = local_8 + 1) {
 *(int *)(param_3 + local_8 * 4) =
 *(int *)(param_1 + local_8 * 4) + *(int *)(param_2 + local_8 * 4);
 }
 local_c = 0;
 for (local_10 = 0; local_10 < param_4; local_10 = local_10 + 1) {
 local_c = *(int *)(param_3 + local_10 * 4) + local_c;
 }
 return local_c;
}

// Function: call_vectorized_loop @ 0x11780
int call_vectorized_loop(void)
{
 char local_68 [32];
 char local_48 [32];
 char local_28 [32];
 memcpy(local_28,&DAT_0001320c,0x20);
 memcpy(local_48,&DAT_0001322c,0x20);
 memset(local_68,0,0x20);
 return param_vectorized_loop((int*)local_28,(int*)local_48,(int*)local_68,8);
}

// Function: param_link_time_optimization @ 0x11820
int param_link_time_optimization(unsigned int param_1)
{
 return lto_target_func(param_1);
}

// Function: lto_target_func @ 0x11850
int lto_target_func(unsigned int param_1)
{
 return param_1 * 2 + 10;
}

// Function: call_link_time_optimization @ 0x11870
int call_link_time_optimization(void)
{
 return param_link_time_optimization(5);
}

// Function: div_zero_handler @ 0x118a0
void div_zero_handler(void)
{
 div_zero_caught = 1;
 longjmp((__jmp_buf_tag *)jmp_buffer,1);
}

// Function: param_division_by_zero @ 0x118e0
unsigned int param_division_by_zero(int param_1)
{
 int iVar1;
 unsigned int local_c;
 signal(8,div_zero_handler);
 iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
 if (iVar1 == 0) {
 local_c = (unsigned int)(10 / (long long)param_1);
 }
 else {
 local_c = 0xffffffff;
 }
 return local_c;
}

// Function: call_division_by_zero @ 0x11950
int call_division_by_zero(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 return iVar1 + iVar2;
}

// Function: segv_handler @ 0x119b0
void segv_handler(void)
{
 segv_caught = 1;
 longjmp((__jmp_buf_tag *)segv_buffer,1);
}

// Function: param_null_pointer_deref @ 0x119f0
unsigned int param_null_pointer_deref(unsigned int *param_1)
{
 int iVar1;
 unsigned int local_c;
 signal(0xb,segv_handler);
 iVar1 = _setjmp((__jmp_buf_tag *)segv_buffer);
 if (iVar1 == 0) {
 local_c = *param_1;
 }
 else {
 local_c = 0xffffffff;
 }
 return local_c;
}

// Function: call_null_pointer_deref @ 0x11a60
int call_null_pointer_deref(void)
{
 int iVar1;
 int iVar2;
 unsigned int local_c;
 local_c = 0x2a;
 iVar1 = param_null_pointer_deref(&local_c);
 iVar2 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0x0);
 return iVar1 + iVar2;
}

// Function: param_buffer_overflow_stack @ 0x11ad0
unsigned int param_buffer_overflow_stack(unsigned int param_1)
{
 int local_14;
 char auStack_c [8];
 for (local_14 = 0; local_14 < 0x11; local_14 = local_14 + 1) {
 auStack_c[local_14] = 0x41;
 }
 return param_1;
}

// Function: param_buffer_overflow_heap @ 0x11b40
unsigned int param_buffer_overflow_heap(unsigned int param_1)
{
 void *__ptr;
 int local_14;
 unsigned int local_c;
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 local_c = 0xfffffffe;
 }
 else {
 for (local_14 = 0; local_14 < 0x21; local_14 = local_14 + 1) {
 *(char *)((int)__ptr + local_14) = 0x42;
 }
 free(__ptr);
 local_c = param_1;
 }
 return local_c;
}

// Function: call_buffer_overflow @ 0x11bd0
int call_buffer_overflow(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_buffer_overflow_stack(10);
 iVar2 = param_buffer_overflow_heap(0x14);
 return iVar1 + iVar2;
}

// Function: param_integer_overflow @ 0x11c20
int param_integer_overflow(int param_1,int param_2)
{
 int local_8;
 local_8 = param_1 + param_2;
 if (((param_1 < 1) || (param_2 < 1)) || (-1 < param_1 + param_2)) {
 if (((param_1 < 0) && (param_2 < 0)) && (0 < param_1 + param_2)) {
 local_8 = -2;
 }
 }
 else {
 local_8 = -1;
 }
 return local_8;
}

// Function: call_integer_overflow @ 0x11cb0
int call_integer_overflow(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_integer_overflow(1000000000,1000000000);
 iVar2 = param_integer_overflow(0xffffffff,1);
 return iVar1 + iVar2;
}

// Function: param_undefined_behavior @ 0x11d10
int param_undefined_behavior(int param_1)
{
 return param_1 << 1;
}

// Function: call_undefined_behavior @ 0x11d30
unsigned int call_undefined_behavior(void)
{
 unsigned int uVar1;
 uVar1 = param_undefined_behavior(5);
 return uVar1;
}

// Function: param_implementation_defined @ 0x11d60
unsigned int param_implementation_defined(void)
{
 return 0x2b;
}

// Function: call_implementation_defined @ 0x11e00
int call_implementation_defined(void)
{
 return param_implementation_defined();
}

// Function: test_obf_opt_edge @ 0x11e20
void test_obf_opt_edge(void)
{
 unsigned int uVar1;
 printf("%s","test");
 uVar1 = call_fake_branch();
 printf("fake_branch: %d\n",uVar1);
 uVar1 = call_opaque_predicate();
 printf("opaque_predicate: %d\n",uVar1);
 uVar1 = call_instruction_substitution();
 printf("instruction_substitution: %d\n",uVar1);
 uVar1 = call_string_encryption();
 printf("string_encryption: %d\n",uVar1);
 uVar1 = call_tail_call_optimized();
 printf("tail_call_optimized: %d\n",uVar1);
 uVar1 = call_non_tail_call();
 printf("non_tail_call: %d\n",uVar1);
 uVar1 = call_vectorized_loop();
 printf("vectorized_loop: %d\n",uVar1);
 uVar1 = call_link_time_optimization();
 printf("link_time_optimization: %d\n",uVar1);
 uVar1 = call_division_by_zero();
 printf("division_by_zero: %d\n",uVar1);
 uVar1 = call_null_pointer_deref();
 printf("null_pointer_deref: %d\n",uVar1);
 uVar1 = call_buffer_overflow();
 printf("buffer_overflow: %d\n",uVar1);
 uVar1 = call_integer_overflow();
 printf("integer_overflow: %d\n",uVar1);
 uVar1 = call_undefined_behavior();
 printf("undefined_behavior: %d\n",uVar1);
 uVar1 = call_implementation_defined();
 printf("implementation_defined: %d\n",uVar1);
 return;
}

// Function: main @ 0x11fe0
int main(void)
{
 test_obf_opt_edge();
 return 0;
}





