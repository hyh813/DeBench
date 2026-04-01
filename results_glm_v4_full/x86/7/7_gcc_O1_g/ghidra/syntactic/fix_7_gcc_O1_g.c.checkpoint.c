#include <setjmp.h>
#include <signal.h>

/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned char byte;
typedef unsigned int uint;
typedef void (*code)(void);
typedef uint32_t undefined4;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/7/7_gcc_O1_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 (*(code *)(void *)0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */

/* Global variables */
jmp_buf jmp_buffer;
jmp_buf segv_buffer;
volatile int div_zero_caught = 0;
volatile int segv_caught = 0;

/* Encrypted string for param_string_encryption */
static const char encrypted_string[] = {
 0x5d, 0x1a, 0x13, 0x1a, 0x5f, 0x5e, 0x5d, 0x12, 0x17, 0x19, 0x11, 0x1f, 0x1c, 0x1d, 0x13, 0x18,
 0x5c, 0x1c, 0x1d, 0x1e, 0x14, 0x17, 0x5b, 0x5e, 0x1f, 0x1c, 0x5c, 0x1f, 0x13, 0x1c, 0x14, 0x00
};


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
/* WARNING: Unknown calling convention */

void div_zero_handler(int sig)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 __longjmp_chk(jmp_buffer,1);
}



/* Function: segv_handler @ 0001134c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

void segv_handler(int sig)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 __longjmp_chk(segv_buffer,1);
}



/* Function: param_fake_branch @ 00011377 */

/* WARNING: Unknown calling convention */

int param_fake_branch(int x)

{
 return x;
}



/* Function: call_fake_branch @ 00011380 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fake_branch(void)

{
 return 10;
}



/* Function: param_opaque_predicate @ 0001138a */

int param_opaque_predicate(int x)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 
 iVar1 = x + 1;
 iVar2 = x;
 iVar4 = iVar1;
 if (iVar1 != 0) {
 do {
 /* Unresolved local var: int temp@[???] */
 iVar3 = iVar4;
 iVar4 = iVar2 % iVar3;
 iVar2 = iVar3;
 } while (iVar4 != 0);
 if ((iVar3 == 1) && (x * 2 + 1 + x * x == iVar1 * iVar1)) {
 return x * 2 + 10;
 }
 }
 return x * 3 + 0x14;
}



/* Function: call_opaque_predicate @ 000113dd */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_opaque_predicate(void)

{
 int iVar1;
 
 iVar1 = param_opaque_predicate(5);
 return iVar1;
}



/* Function: param_instruction_substitution @ 000113ec */

/* WARNING: Unknown calling convention */

int param_instruction_substitution(int x)

{
 return x * 0x15 + ((uint)x >> 1) + (x & 0xfU);
}



/* Function: call_instruction_substitution @ 0001140e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_instruction_substitution(void)

{
 return 0xe1;
}



/* Function: decrypt_string @ 00011418 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

char * decrypt_string(char *encrypted,char *buffer,size_t len,char key)

{
 byte bVar1;
 byte *pbVar2;
 
 strncpy(buffer,encrypted,len);
 buffer[len - 1] = '\0';
 bVar1 = *buffer;
 pbVar2 = (byte *)buffer;
 while (bVar1 != 0) {
 *pbVar2 = bVar1 ^ key;
 pbVar2 = pbVar2 + 1;
 bVar1 = *pbVar2;
 }
 return buffer;
}



/* Function: param_string_encryption @ 0001146f */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_string_encryption(void)

{
 int iVar1;
 size_t sVar2;
 int in_GS_OFFSET;
 char decrypted [32];
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 decrypt_string((char *)encrypted_string,decrypted,0x20,'Z');
 sVar2 = strlen(decrypted);
 if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
 return (int)decrypted[0] + sVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: call_string_encryption @ 000114d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_encryption(void)

{
 int iVar1;
 
 iVar1 = param_string_encryption();
 return iVar1;
}



/* Function: param_tail_call_optimized @ 000114e0 */

/* WARNING: Unknown calling convention */

int param_tail_call_optimized(int n,int acc)

{
 if (0 < n) {
 acc = param_tail_call_optimized(n + -1,acc + n);
 }
 return acc;
}



/* Function: call_tail_call_optimized @ 0001150b */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_tail_call_optimized(void)

{
 int iVar1;
 
 iVar1 = param_tail_call_optimized(1000,0);
 return iVar1;
}



/* Function: param_non_tail_call @ 00011522 */

/* WARNING: Unknown calling convention */

int param_non_tail_call(int n)

{
 int iVar1;
 
 iVar1 = 0;
 if (0 < n) {
 iVar1 = param_non_tail_call(n + -1);
 iVar1 = iVar1 + n;
 }
 return iVar1;
}



/* Function: call_non_tail_call @ 0001154d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_non_tail_call(void)

{
 int iVar1;
 
 iVar1 = param_non_tail_call(100);
 return iVar1;
}



/* Function: param_vectorized_loop @ 0001155f */

int param_vectorized_loop(int *a,int *b,int *c,int n)

{
 int *piVar1;
 int iVar2;
 
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar2 = 0;
 }
 else {
 iVar2 = 0;
 do {
 c[iVar2] = b[iVar2] + a[iVar2];
 iVar2 = iVar2 + 1;
 } while (n != iVar2);
 piVar1 = c + iVar2;
 iVar2 = 0;
 do {
 /* Unresolved local var: int i@[???] */
 iVar2 = iVar2 + *c;
 c = c + 1;
 } while (c != piVar1);
 }
 return iVar2;
}



/* Function: call_vectorized_loop @ 000115ad */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorized_loop(void)

{
 int iVar1;
 uint uVar2;
 int iVar3;
 int in_GS_OFFSET;
 int a [8];
 int b [8];
 int c [8];
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 uVar2 = 0;
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
 do {
 *(undefined4 *)((int)c + uVar2) = 0;
 uVar2 = uVar2 + 4;
 } while (uVar2 < 0x20);
 iVar3 = param_vectorized_loop(a,b,c,8);
 if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar3;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: param_link_time_optimization @ 00011684 */

/* WARNING: Unknown calling convention */

int param_link_time_optimization(int x)

{
 return x * 2 + 10;
}



/* Function: call_link_time_optimization @ 00011691 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_link_time_optimization(void)

{
 return 0x14;
}



/* Function: param_division_by_zero @ 0001169b */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_division_by_zero(int x)

{
 int iVar1;
 
 signal(8,div_zero_handler);
 iVar1 = _setjmp(jmp_buffer);
 if (iVar1 == 0) {
 /* Unresolved local var: int y@[???] */
 iVar1 = (int)(10 / (long long)x);
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_division_by_zero @ 000116eb */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_division_by_zero(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 return iVar1 + iVar2;
}



/* Function: param_null_pointer_deref @ 0001172d */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_null_pointer_deref(int *p)

{
 int iVar1;
 
 signal(0xb,segv_handler);
 iVar1 = _setjmp(segv_buffer);
 if (iVar1 == 0) {
 /* Unresolved local var: int val@[???] */
 iVar1 = *p;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_null_pointer_deref @ 00011779 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_null_pointer_deref(void)

{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 int valid;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 valid = 0x2a;
 iVar1 = param_null_pointer_deref(&valid);
 iVar2 = param_null_pointer_deref((int *)0x0);
 signal(0xb,(__sighandler_t)0x0);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar1 + iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: param_buffer_overflow_stack @ 000117e7 */

/* WARNING: Unknown calling convention */

int param_buffer_overflow_stack(int x)

{
 return x;
}



/* Function: param_buffer_overflow_heap @ 000117f0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_buffer_overflow_heap(int x)

{
 void *__ptr;
 int iVar1;
 
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 x = -2;
 }
 else {
 iVar1 = 0x21;
 do {
 /* Unresolved local var: int i@[???] */
 iVar1 = iVar1 + -1;
 } while (iVar1 != 0);
 free(__ptr);
 }
 return x;
}



/* Function: call_buffer_overflow @ 0001183a */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_buffer_overflow(void)

{
 int iVar1;
 
 iVar1 = param_buffer_overflow_heap(0x14);
 return iVar1 + 10;
}



/* Function: param_integer_overflow @ 0001184f */

int param_integer_overflow(int a,int b)

{
 int iVar1;
 
 iVar1 = a + b;
 if ((a < 1 || b < 1) || (-1 < iVar1)) {
 if (((a & b) < 0) && (0 < iVar1)) {
 iVar1 = -2;
 }
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_integer_overflow @ 00011890 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_integer_overflow(void)

{
 return 2000000000;
}



/* Function: param_undefined_behavior @ 0001189a */

/* WARNING: Unknown calling convention */

int param_undefined_behavior(int i)

{
 return i * 2;
}



/* Function: call_undefined_behavior @ 000118a5 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_undefined_behavior(void)

{
 return 10;
}



/* Function: param_implementation_defined @ 000118af */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_implementation_defined(void)

{
 return 0x2b;
}



/* Function: call_implementation_defined @ 000118b9 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_implementation_defined(void)

{
 return 0x2b;
}



/* Forward declarations for string constants used in test_obf_opt_edge */
extern const char DAT_00012008[];
extern const char DAT_0001212f[];
extern const char DAT_0001214b[];
extern const char DAT_00012167[];
extern const char DAT_00012184[];
extern const char DAT_00012038[];
extern const char DAT_00012064[];
extern const char DAT_0001208c[];
extern const char DAT_000120b4[];
extern const char DAT_000121a0[];
extern const char DAT_000121bc[];
extern const char DAT_000121d9[];
extern const char DAT_000120d4[];
extern const char DAT_000121f6[];
extern const char DAT_00012108[];

/* Function: test_obf_opt_edge @ 000118c3 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_obf_opt_edge(void)

{
 int iVar1;
 
 puts(&DAT_00012008);
 __printf_chk(1,&DAT_0001212f,10);
 iVar1 = call_opaque_predicate();
 __printf_chk(1,&DAT_0001214b,iVar1);
 __printf_chk(1,&DAT_00012167,0xe1);
 iVar1 = param_string_encryption();
 __printf_chk(1,&DAT_00012184,iVar1);
 iVar1 = call_tail_call_optimized();
 __printf_chk(1,&DAT_00012038,iVar1);
 iVar1 = call_non_tail_call();
 __printf_chk(1,&DAT_00012064,iVar1);
 iVar1 = call_vectorized_loop();
 __printf_chk(1,&DAT_0001208c,iVar1);
 __printf_chk(1,&DAT_000120b4,0x14);
 iVar1 = call_division_by_zero();
 __printf_chk(1,&DAT_000121a0,iVar1);
 iVar1 = call_null_pointer_deref();
 __printf_chk(1,&DAT_000121bc,iVar1);
 iVar1 = call_buffer_overflow();
 __printf_chk(1,&DAT_000121d9,iVar1);
 __printf_chk(1,&DAT_000120d4,2000000000);
 __printf_chk(1,&DAT_000121f6,10);
 __printf_chk(1,&DAT_00012108,0x2b);
 return;
}



/* Function: main @ 00011a17 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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

/* Data declarations for string constants */
const char DAT_00012008[] = "Testing obfuscation and optimization techniques:\n";
const char DAT_0001212f[] = "  param_opaque_predicate(%d) = %d\n";
const char DAT_0001214b[] = "  call_opaque_predicate() = %d\n";
const char DAT_00012167[] = "  call_instruction_substitution() = %d\n";
const char DAT_00012184[] = "  param_string_encryption() = %d\n";
const char DAT_00012038[] = "  call_tail_call_optimized() = %d\n";
const char DAT_00012064[] = "  call_non_tail_call() = %d\n";
const char DAT_0001208c[] = "  call_vectorized_loop() = %d\n";
const char DAT_000120b4[] = "  call_link_time_optimization() = %d\n";
const char DAT_000121a0[] = "  call_division_by_zero() = %d\n";
const char DAT_000121bc[] = "  call_null_pointer_deref() = %d\n";
const char DAT_000121d9[] = "  call_buffer_overflow() = %d\n";
const char DAT_000120d4[] = "  call_integer_overflow() = %d\n";
const char DAT_000121f6[] = "  call_undefined_behavior() = %d\n";
const char DAT_00012108[] = "  call_implementation_defined() = %d\n";




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 47 */
