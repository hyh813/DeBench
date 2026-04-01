#include <stdbool.h>

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
typedef unsigned char byte;
typedef unsigned int uint;
typedef unsigned int undefined4;

/* Global variables for signal handling */
int div_zero_caught;
int segv_caught;
typedef struct __jmp_buf_tag { char __jmpbuf[48]; } __jmp_buf_tag;
typedef void (*__sighandler_t)(int);
__jmp_buf_tag jmp_buffer;
__jmp_buf_tag segv_buffer;

/* Data references (string literals and format strings) */
extern char DAT_00010fd8[];
extern char DAT_00011005[];
extern char DAT_00011021[];
extern char DAT_0001103d[];
extern char DAT_0001105a[];
extern char DAT_00011076[];
extern char DAT_000110a0[];
extern char DAT_000110c5[];
extern char DAT_000110eb[];
extern char DAT_0001110b[];
extern char DAT_00011127[];
extern char DAT_00011144[];
extern char DAT_00011161[];
extern char DAT_00011192[];
extern char DAT_000111af[];
extern char DAT_encrypted[];

/* Definitions for data references */
char DAT_00010fd8[] = "Testing obfuscated/optimized edge cases\n";
char DAT_00011005[] = "call_opaque_predicate: %d\n";
char DAT_00011021[] = "param_opaque_predicate: %d\n";
char DAT_0001103d[] = "call_instruction_substitution: %d\n";
char DAT_0001105a[] = "param_string_encryption: %d\n";
char DAT_00011076[] = "call_tail_call_optimized: %d\n";
char DAT_000110a0[] = "call_non_tail_call: %d\n";
char DAT_000110c5[] = "call_vectorized_loop: %d\n";
char DAT_000110eb[] = "call_link_time_optimization: %d\n";
char DAT_0001110b[] = "call_division_by_zero: %d\n";
char DAT_00011127[] = "call_null_pointer_deref: %d\n";
char DAT_00011144[] = "call_buffer_overflow: %d\n";
char DAT_00011161[] = "call_integer_overflow: %d\n";
char DAT_00011192[] = "call_undefined_behavior: %d\n";
char DAT_000111af[] = "call_implementation_defined: %d\n";
char DAT_encrypted[] = "Ztest_string_data_here_Z";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/7/7_gcc_Os_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: main @ 000105dc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

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

void div_zero_handler(int sig)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 __longjmp_chk(jmp_buffer);
}



/* Function: segv_handler @ 000106fc */

void segv_handler(int sig)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 __longjmp_chk();
}



/* Function: param_fake_branch @ 00010718 */

int param_fake_branch(int x)

{
 /* Unresolved local var: int result@[DW_OP_reg0(r0)]
 Unresolved local var: char * str@[???] */
 return x;
}



/* Function: call_fake_branch @ 0001071c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fake_branch(void)

{
 return 10;
}



/* Function: param_opaque_predicate @ 00010724 */

int param_opaque_predicate(int x)

{
 int iVar1;
 int extraout_r1;
 int iVar2;
 int iVar3;
 
 /* Unresolved local var: int p1@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int b@[???]
 Unresolved local var: int p2@[???]
 Unresolved local var: int p3@[???] */
 iVar3 = x + 1;
 iVar2 = iVar3 * iVar3;
 iVar1 = x;
 while (iVar3 != 0) {
 /* Unresolved local var: int temp@[???] */
 __aeabi_idivmod(iVar1,iVar3);
 iVar1 = iVar3;
 iVar3 = extraout_r1;
 }
 if (iVar1 == 1 && x * x + x * 2 + 1 == iVar2) {
 iVar1 = x * 2 + 10;
 }
 else {
 iVar1 = x * 3 + 0x14;
 }
 return iVar1;
}



/* Function: call_opaque_predicate @ 0001078c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_opaque_predicate(void)

{
 int iVar1;
 
 iVar1 = param_opaque_predicate(5);
 return iVar1;
}



/* Function: param_instruction_substitution @ 00010794 */

int param_instruction_substitution(int x)

{
 /* Unresolved local var: int result@[DW_OP_breg0(r0): 0; DW_OP_lit6; DW_OP_mul;
 DW_OP_stack_value]
 Unresolved local var: uint ux@[DW_OP_reg0(r0)]
 Unresolved local var: int div2@[DW_OP_breg0(r0): 0; DW_OP_lit1; DW_OP_shr;
 DW_OP_stack_value]
 Unresolved local var: int mod16@[DW_OP_breg0(r0): 0; DW_OP_lit15; DW_OP_and;
 DW_OP_stack_value]
 Unresolved local var: int mul15@[DW_OP_breg0(r0): 0; DW_OP_lit4; DW_OP_shl;
 DW_OP_breg0(r0): 0; DW_OP_minus; DW_OP_stack_value] */
 return x * 0x15 + ((uint)x >> 1) + (x & 0xfU);
}



/* Function: call_instruction_substitution @ 000107b4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_instruction_substitution(void)

{
 return 0xe1;
}



/* Function: decrypt_string @ 000107bc */

char * decrypt_string(char *encrypted,char *buffer,size_t len,char key)

{
 byte *pbVar1;
 
 /* Unresolved local var: char * p@[???] */
 strncpy(buffer,encrypted,len);
 buffer[len - 1] = '\0';
 pbVar1 = (byte *)(buffer + -1);
 while( true ) {
 pbVar1 = pbVar1 + 1;
 if (*pbVar1 == 0) break;
 *pbVar1 = *pbVar1 ^ key;
 }
 return buffer;
}



/* Function: param_string_encryption @ 00010808 */

/* WARNING: Removing unreachable block (ram,0x0001085c) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_string_encryption(void)

{
 size_t sVar1;
 char decrypted [32];
 
 decrypt_string(DAT_encrypted,decrypted,0x20,'Z');
 sVar1 = strlen(decrypted);
 return (byte)decrypted[0] + sVar1;
}



/* Function: call_string_encryption @ 00010870 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_encryption(void)

{
 size_t sVar1;
 byte abStack_2c [32];
 int iStack_c;
 
 iStack_c = 0;
 decrypt_string(DAT_encrypted,(char *)abStack_2c,0x20,'Z');
 sVar1 = strlen((char *)abStack_2c);
 if (iStack_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return abStack_2c[0] + sVar1;
}



/* Function: param_tail_call_optimized @ 00010874 */

int param_tail_call_optimized(int n,int acc)

{
 for (; 0 < n; n = n + -1) {
 acc = acc + n;
 }
 return acc;
}



/* Function: call_tail_call_optimized @ 00010890 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_tail_call_optimized(void)

{
 return 0x7a314;
}



/* Function: param_non_tail_call @ 0001089c */

int param_non_tail_call(int n)

{
 int iVar1;
 
 iVar1 = 0;
 for (; 0 < n; n = n + -1) {
 iVar1 = iVar1 + n;
 }
 return iVar1;
}



/* Function: call_non_tail_call @ 000108b8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_non_tail_call(void)

{
 int iVar1;
 
 iVar1 = param_non_tail_call(100);
 return iVar1;
}



/* Function: param_vectorized_loop @ 000108c0 */

int param_vectorized_loop(int *a,int *b,int *c,int n)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 iVar2 = 0;
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar1 = 0;
 for (iVar2 = iVar1; iVar2 < n; iVar2 = iVar2 + 1) {
 iVar1 = iVar1 + c[iVar2];
 }
 return iVar1;
 }
 do {
 c[iVar2] = a[iVar2] + b[iVar2];
 iVar2 = iVar2 + 1;
 } while (iVar2 < n);
 iVar2 = 0;
 for (iVar1 = 0; iVar1 < n; iVar1 = iVar1 + 1) {
 iVar2 = iVar2 + c[iVar1];
 }
 return iVar2;
}



/* Function: call_vectorized_loop @ 0001092c */

/* WARNING: Removing unreachable block (ram,0x000109b0) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorized_loop(void)

{
 int iVar1;
 int a [8];
 int b [8];
 int c [8];
 
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
 memset(c,0,0x20);
 iVar1 = param_vectorized_loop(a,b,c,8);
 return iVar1;
}



/* Function: param_link_time_optimization @ 000109c4 */

int param_link_time_optimization(int x)

{
 return (x + 5) * 2;
}



/* Function: call_link_time_optimization @ 000109d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_link_time_optimization(void)

{
 return 0x14;
}



/* Function: param_division_by_zero @ 000109d8 */

int param_division_by_zero(int x)

{
 int iVar1;
 
 signal(8,div_zero_handler);
 iVar1 = _setjmp((__jmp_buf_tag *)&jmp_buffer);
 if (iVar1 == 0) {
 /* Unresolved local var: int y@[???] */
 iVar1 = __aeabi_idiv(10,x);
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_division_by_zero @ 00010a1c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_division_by_zero(void)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 return iVar1 + iVar2;
}



/* Function: param_null_pointer_deref @ 00010a4c */

int param_null_pointer_deref(int *p)

{
 int iVar1;
 
 signal(0xb,segv_handler);
 iVar1 = _setjmp((__jmp_buf_tag *)&segv_buffer);
 /* Unresolved local var: int val@[DW_OP_reg0(r0)] */
 if (iVar1 == 0) {
 iVar1 = *p;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_null_pointer_deref @ 00010a88 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_null_pointer_deref(void)

{
 int iVar1;
 int iVar2;
 int valid;
 int local_14;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 local_14 = 0;
 valid = 0x2a;
 iVar1 = param_null_pointer_deref(&valid);
 iVar2 = param_null_pointer_deref((int *)0x0);
 signal(0xb,(__sighandler_t)0x0);
 if (local_14 != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar1 + iVar2;
}



/* Function: param_buffer_overflow_stack @ 00010af4 */

void param_buffer_overflow_stack(void)

{
 return;
}



/* Function: param_buffer_overflow_heap @ 00010af8 */

int param_buffer_overflow_heap(int x)

{
 void *__ptr;
 
 /* Unresolved local var: char * heap_buffer@[???] */
 __ptr = malloc(0x10);
 if (__ptr != (void *)0x0) {
 free(__ptr);
 return x;
 }
 return -2;
}



/* Function: call_buffer_overflow @ 00010b24 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_buffer_overflow(void)

{
 int iVar1;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 iVar1 = param_buffer_overflow_heap(0x14);
 return iVar1 + 10;
}



/* Function: param_integer_overflow @ 00010b38 */

int param_integer_overflow(int a,int b)

{
 int iVar1;
 uint uVar2;
 
 /* Unresolved local var: int signed_sum@[???]
 Unresolved local var: uint ua@[???]
 Unresolved local var: uint ub@[???]
 Unresolved local var: uint unsigned_sum@[???] */
 iVar1 = a;
 if (0 < a) {
 iVar1 = b;
 }
 uVar2 = a + b;
 if (iVar1 < 1) {
 if (((uint)(0 < (int)uVar2) & (uint)(a & b) >> 0x1f) != 0) {
 uVar2 = 0xfffffffe;
 }
 return uVar2;
 }
 return uVar2 | (int)uVar2 >> 0x1f;
}



/* Function: call_integer_overflow @ 00010b70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_integer_overflow(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 2000000000;
}



/* Function: param_undefined_behavior @ 00010b7c */

int param_undefined_behavior(int i)

{
 /* Unresolved local var: int local@[???] */
 return i << 1;
}



/* Function: call_undefined_behavior @ 00010b84 */

undefined4 call_undefined_behavior(void)

{
 return 10;
}



/* Function: param_implementation_defined @ 00010b8c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_implementation_defined(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: char c@[???]
 Unresolved local var: int s@[???]
 Unresolved local var: anon_struct_4_3_4e909822 bitfield@[???] */
 return 0x2c;
}



/* Function: call_implementation_defined @ 00010b94 */

undefined4 call_implementation_defined(void)

{
 return 0x2c;
}



/* Function: test_obf_opt_edge @ 00010b9c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_obf_opt_edge(void)

{
 int iVar1;
 
 puts(&DAT_00010fd8);
 __printf_chk(1,&DAT_00011005,10);
 iVar1 = call_opaque_predicate();
 __printf_chk(1,&DAT_00011021,iVar1);
 __printf_chk(1,&DAT_0001103d,0xe1);
 iVar1 = param_string_encryption();
 __printf_chk(1,&DAT_0001105a,iVar1);
 iVar1 = call_tail_call_optimized();
 __printf_chk(1,&DAT_00011076,iVar1);
 iVar1 = call_non_tail_call();
 __printf_chk(1,&DAT_000110a0,iVar1);
 iVar1 = call_vectorized_loop();
 __printf_chk(1,&DAT_000110c5,iVar1);
 __printf_chk(1,&DAT_000110eb,0x14);
 iVar1 = call_division_by_zero();
 __printf_chk(1,&DAT_0001110b,iVar1);
 iVar1 = call_null_pointer_deref();
 __printf_chk(1,&DAT_00011127,iVar1);
 iVar1 = call_buffer_overflow();
 __printf_chk(1,&DAT_00011144,iVar1);
 __printf_chk(1,&DAT_00011161,2000000000);
 __printf_chk(1,&DAT_00011192,10);
 __printf_chk(1,&DAT_000111af,0x2c);
 return;
}




/* CRT stub function __aeabi_idiv removed by preprocessor */





/* CRT stub function .divsi3_skip_div0_test removed by preprocessor */





/* CRT stub function __aeabi_idivmod removed by preprocessor */




/* Function: __aeabi_idiv0 @ 00010f2c */

void __aeabi_idiv0(void)

{
 raise(8);
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 45 */
