#include <signal.h>
#include <setjmp.h>

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



/* Global variables for signal handlers */
volatile int div_zero_caught = 0;
volatile int segv_caught = 0;
jmp_buf jmp_buffer;
jmp_buf segv_buffer;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/7/7_gcc_O1_g
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

void div_zero_handler(int sig)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 __longjmp_chk(jmp_buffer);
}



/* Function: segv_handler @ 000106ec */

void segv_handler(int sig)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 __longjmp_chk(segv_buffer);
}



/* Function: param_fake_branch @ 00010708 */

int param_fake_branch(int x)

{
 /* Unresolved local var: int result@[DW_OP_reg0(r0)]
 Unresolved local var: char * str@[???] */
 return x;
}



/* Function: call_fake_branch @ 0001070c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fake_branch(void)

{
 return 10;
}



/* Function: param_opaque_predicate @ 00010714 */

int param_opaque_predicate(int x)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int extraout_r1;
 
 /* Unresolved local var: int p1@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int b@[???]
 Unresolved local var: int p2@[???]
 Unresolved local var: int p3@[???] */
 iVar3 = x + 1;
 if (iVar3 != 0) {
 iVar2 = x;
 iVar1 = iVar3;
 do {
 /* Unresolved local var: int temp@[???] */
 iVar4 = iVar1;
 __aeabi_idivmod(iVar2);
 iVar2 = iVar4;
 iVar1 = extraout_r1;
 } while (extraout_r1 != 0);
 if (iVar4 == 1 && x * x + x * 2 + 1 == iVar3 * iVar3) {
 return x * 2 + 10;
 }
 }
 return x * 3 + 0x14;
}



/* Function: call_opaque_predicate @ 00010784 */

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
 /* Unresolved local var: int result@[DW_OP_breg0(r0): 0; DW_OP_lit3; DW_OP_shl;
 DW_OP_breg0(r0): 0; DW_OP_lit1; DW_OP_shl; DW_OP_minus; DW_OP_stack_value]
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
 byte bVar1;
 byte *pbVar2;
 
 /* Unresolved local var: char * p@[???] */
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



/* Function: param_string_encryption @ 00010810 */

/* WARNING: Removing unreachable block (ram,0x0001086c) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_string_encryption(void)

{
 size_t sVar1;
 char decrypted [32];
 static const char encrypted[] = "Mjqqt\\Btwqi\\Xpsme";
 
 decrypt_string(encrypted,decrypted,0x20,'Z');
 sVar1 = strlen(decrypted);
 return (byte)decrypted[0] + sVar1;
}



/* Function: call_string_encryption @ 00010878 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_encryption(void)

{
 int iVar1;
 
 iVar1 = param_string_encryption();
 return iVar1;
}



/* Function: param_tail_call_optimized @ 00010884 */

int param_tail_call_optimized(int n,int acc)

{
 int iVar1;
 
 if (0 < n) {
 iVar1 = param_tail_call_optimized(n + -1,n + acc);
 return iVar1;
 }
 return acc;
}



/* Function: call_tail_call_optimized @ 000108a8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_tail_call_optimized(void)

{
 int iVar1;
 
 iVar1 = param_tail_call_optimized(1000,0);
 return iVar1;
}



/* Function: param_non_tail_call @ 000108bc */

int param_non_tail_call(int n)

{
 int iVar1;
 
 if (0 < n) {
 iVar1 = param_non_tail_call(n + -1);
 return iVar1 + n;
 }
 return 0;
}



/* Function: call_non_tail_call @ 000108e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_non_tail_call(void)

{
 int iVar1;
 
 iVar1 = param_non_tail_call(100);
 return iVar1;
}



/* Function: param_vectorized_loop @ 000108f0 */

int param_vectorized_loop(int *a,int *b,int *c,int n)

{
 int *piVar1;
 int iVar2;
 int *piVar3;
 int *piVar4;
 int *piVar5;
 int *piVar6;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 piVar1 = a + -1;
 piVar3 = b + -1;
 piVar6 = c + -1;
 piVar5 = piVar1 + n;
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
 /* Unresolved local var: int i@[???] */
 iVar2 = iVar2 + *piVar6;
 } while (piVar6 != c + n + -1);
 return iVar2;
 }
 return 0;
}



/* Function: call_vectorized_loop @ 00010954 */

/* WARNING: Removing unreachable block (ram,0x000109e4) */
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



/* Function: param_link_time_optimization @ 000109f0 */

int param_link_time_optimization(int x)

{
 return (x + 5) * 2;
}



/* Function: call_link_time_optimization @ 000109fc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_link_time_optimization(void)

{
 return 0x14;
}



/* Function: param_division_by_zero @ 00010a04 */

int param_division_by_zero(int x)

{
 int iVar1;
 
 signal(8,div_zero_handler);
 iVar1 = _setjmp(jmp_buffer);
 if (iVar1 == 0) {
 /* Unresolved local var: int y@[???] */
 iVar1 = __aeabi_idiv(10,x);
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_division_by_zero @ 00010a50 */

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



/* Function: param_null_pointer_deref @ 00010a80 */

int param_null_pointer_deref(int *p)

{
 int iVar1;
 
 signal(0xb,segv_handler);
 iVar1 = _setjmp(segv_buffer);
 /* Unresolved local var: int val@[???] */
 if (iVar1 == 0) {
 iVar1 = *p;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_null_pointer_deref @ 00010ac0 */

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
 if (local_14 == 0) {
 return iVar1 + iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_buffer_overflow_stack @ 00010b30 */

int param_buffer_overflow_stack(int x)

{
 /* Unresolved local var: char[8] buffer@[???]
 Unresolved local var: int canary@[???] */
 return x;
}



/* Function: param_buffer_overflow_heap @ 00010b34 */

int param_buffer_overflow_heap(int x)

{
 void *__ptr;
 int iVar1;
 
 /* Unresolved local var: char * heap_buffer@[???] */
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



/* Function: call_buffer_overflow @ 00010b6c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_buffer_overflow(void)

{
 int iVar1;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 iVar1 = param_buffer_overflow_heap(0x14);
 return iVar1 + 10;
}



/* Function: param_integer_overflow @ 00010b80 */

int param_integer_overflow(int a,int b)

{
 int iVar1;
 uint uVar2;
 
 /* Unresolved local var: int signed_sum@[???]
 Unresolved local var: uint ua@[???]
 Unresolved local var: uint ub@[???]
 Unresolved local var: uint unsigned_sum@[???] */
 uVar2 = a + b;
 iVar1 = a;
 if (0 < a) {
 iVar1 = b;
 }
 if (((uint)(0 < iVar1) & uVar2 >> 0x1f) != 0) {
 return -1;
 }
 if (((uint)(0 < (int)uVar2) & (uint)(a & b) >> 0x1f) != 0) {
 uVar2 = 0xfffffffe;
 }
 return uVar2;
}



/* Function: call_integer_overflow @ 00010bc4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_integer_overflow(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 2000000000;
}



/* Function: param_undefined_behavior @ 00010bd0 */

int param_undefined_behavior(int i)

{
 /* Unresolved local var: int local@[???] */
 return i << 1;
}



/* Function: call_undefined_behavior @ 00010bd8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_undefined_behavior(void)

{
 /* Unresolved local var: int result@[???] */
 return 10;
}



/* Function: param_implementation_defined @ 00010be0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_implementation_defined(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: char c@[???]
 Unresolved local var: int s@[???]
 Unresolved local var: anon_struct_4_3_4e909822 bitfield@[???] */
 return 0x2c;
}



/* Function: call_implementation_defined @ 00010be8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_implementation_defined(void)

{
 return 0x2c;
}



/* Function: test_obf_opt_edge @ 00010bf0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

/* Data variables referenced in this function */
static const char DAT_0001103c[] = "Testing obfuscation & optimization edge cases:";
static const char DAT_0001106c[] = "Opaque Predicate result: %d\n";
static const char DAT_00011088[] = "Instruction Substitution result: %d\n";
static const char DAT_000110a4[] = "Instruction Substitution result: %d\n";
static const char DAT_000110c4[] = "String Encryption result: %d\n";
static const char DAT_000110e0[] = "Tail Call Optimized result: %d\n";
static const char DAT_0001110c[] = "Non-Tail Call result: %d\n";
static const char DAT_00011134[] = "Vectorized Loop result: %d\n";
static const char DAT_0001115c[] = "LTO result: %d\n";
static const char DAT_0001117c[] = "Division by Zero result: %d\n";
static const char DAT_00011198[] = "Null Pointer Deref result: %d\n";
static const char DAT_000111b8[] = "Buffer Overflow result: %d\n";
static const char DAT_000111d8[] = "Integer Overflow result: %d\n";
static const char DAT_0001120c[] = "Undefined Behavior result: %d\n";
static const char DAT_0001122c[] = "Implementation Defined result: %d\n";

void test_obf_opt_edge(void)

{
 int iVar1;
 
 puts(&DAT_0001103c);
 __printf_chk(1,&DAT_0001106c,10);
 iVar1 = call_opaque_predicate();
 __printf_chk(1,&DAT_00011088,iVar1);
 __printf_chk(1,&DAT_000110a4,0xe1);
 iVar1 = param_string_encryption();
 __printf_chk(1,&DAT_000110c4,iVar1);
 iVar1 = call_tail_call_optimized();
 __printf_chk(1,&DAT_000110e0,iVar1);
 iVar1 = call_non_tail_call();
 __printf_chk(1,&DAT_0001110c,iVar1);
 iVar1 = call_vectorized_loop();
 __printf_chk(1,&DAT_00011134,iVar1);
 __printf_chk(1,&DAT_0001115c,0x14);
 iVar1 = call_division_by_zero();
 __printf_chk(1,&DAT_0001117c,iVar1);
 iVar1 = call_null_pointer_deref();
 __printf_chk(1,&DAT_00011198,iVar1);
 iVar1 = call_buffer_overflow();
 __printf_chk(1,&DAT_000111b8,iVar1);
 __printf_chk(1,&DAT_000111d8,2000000000);
 __printf_chk(1,&DAT_0001120c,10);
 __printf_chk(1,&DAT_0001122c,0x2c);
 return;
}



/* Function: main @ 00010d40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

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
