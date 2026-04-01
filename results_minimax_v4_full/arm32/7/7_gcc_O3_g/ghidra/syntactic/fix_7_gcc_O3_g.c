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
typedef void (*code)(void);
typedef int jmp_buf[64];

/* Global variables */
int div_zero_caught;
int segv_caught;
char jmp_buffer[256];
char segv_buffer[256];
char encrypted_0[32] = "encrypted_string_data";

/* Missing string constants from binary */
char DAT_00011188[] = "Testing obfuscation optimizations:\n";
char DAT_000111b8[] = "%d\n";
char DAT_000111d4[] = "%d\n";
char DAT_000111f0[] = "%d\n";
char DAT_00011210[] = "%d\n";
char DAT_0001122c[] = "%d\n";
char DAT_00011258[] = "%d\n";
char DAT_00011280[] = "%d\n";
char DAT_000112a8[] = "%d\n";
char DAT_000112c8[] = "%d\n";
char DAT_000112e4[] = "%d\n";
char DAT_00011304[] = "%d\n";
char DAT_00011324[] = "%d\n";
char DAT_00011358[] = "%d\n";
char DAT_00011378[] = "%d\n";

/* Signal handler type */
typedef void (*__sighandler_t)(int);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/7/7_gcc_O3_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: main @ 000105ac */

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




/* Function: div_zero_handler @ 000106b4 */

void div_zero_handler(int sig)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 __longjmp_chk(jmp_buffer);
}



/* Function: segv_handler @ 000106cc */

void segv_handler(int sig)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 __longjmp_chk(segv_buffer);
}



/* Function: param_division_by_zero @ 000106e8 */

int param_division_by_zero(int x)

{
 int iVar1;
 
 signal(8,div_zero_handler);
 iVar1 = _setjmp((jmp_buf *)jmp_buffer);
 if (iVar1 == 0) {
 iVar1 = x;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: param_fake_branch @ 0001074c */

int param_fake_branch(int x)

{
 /* Unresolved local var: int result@[DW_OP_reg0(r0)]
 Unresolved local var: char * str@[???] */
 return x;
}



/* Function: call_fake_branch @ 00010750 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fake_branch(void)

{
 return 10;
}



/* Function: param_opaque_predicate @ 00010758 */

int param_opaque_predicate(int x)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int div_result;
 int remainder;
 
 /* Unresolved local var: int p1@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int b@[???]
 Unresolved local var: int p2@[???]
 Unresolved local var: int p3@[???] */
 iVar3 = x + 1;
 iVar2 = x;
 iVar1 = iVar3;
 if (iVar3 != 0) {
 do {
 /* Unresolved local var: int temp@[???] */
 iVar4 = iVar1;
 div_result = __aeabi_idivmod(iVar2);
 iVar2 = iVar4;
 iVar1 = div_result;
 remainder = iVar1;
 } while (div_result != 0);
 if (iVar4 == 1 && x * x + x * 2 + 1 == iVar3 * iVar3) {
 return x * 2 + 10;
 }
 }
 return x * 3 + 0x14;
}



/* Function: call_opaque_predicate @ 000107c8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_opaque_predicate(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int extraout_r1;
 
 /* Unresolved local var: int p1@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int b@[???]
 Unresolved local var: int p2@[???]
 Unresolved local var: int p3@[???] */
 iVar2 = 5;
 iVar1 = 6;
 do {
 /* Unresolved local var: int temp@[???] */
 iVar3 = iVar1;
 iVar1 = __aeabi_idivmod(iVar2,iVar1);
 iVar2 = iVar3;
 } while (iVar1 != 0);
 if (iVar3 == 1) {
 iVar2 = 0x14;
 }
 else {
 iVar2 = 0x23;
 }
 return iVar2;
}



/* Function: param_instruction_substitution @ 000107f8 */

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



/* Function: call_instruction_substitution @ 00010818 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_instruction_substitution(void)

{
 return 0xe1;
}



/* Function: decrypt_string @ 00010820 */

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



/* Function: param_string_encryption @ 00010874 */

/* WARNING: Removing unreachable block (ram,0x000108f8) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_string_encryption(void)

{
 size_t sVar1;
 byte *pbVar2;
 byte bVar3;
 uint uVar4;
 char decrypted [32];
 
 /* Unresolved local var: char * p@[???] */
 strncpy(decrypted,&encrypted_0,0x1f);
 decrypted[0x1f] = '\0';
 uVar4 = 0;
 if (decrypted[0] != '\0') {
 pbVar2 = (byte *)decrypted;
 bVar3 = decrypted[0];
 do {
 *pbVar2 = bVar3 ^ 0x5a;
 pbVar2 = pbVar2 + 1;
 bVar3 = *pbVar2;
 } while (bVar3 != 0);
 uVar4 = (uint)(byte)decrypted[0];
 }
 sVar1 = strlen(decrypted);
 return uVar4 + sVar1;
}



/* Function: call_string_encryption @ 00010904 */

/* WARNING: Removing unreachable block (ram,0x00010988) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_encryption(void)

{
 size_t sVar1;
 byte *pbVar2;
 byte bVar3;
 uint uVar4;
 char decrypted [32];
 
 /* Unresolved local var: char * p@[???] */
 strncpy(decrypted,&encrypted_0,0x1f);
 decrypted[0x1f] = '\0';
 uVar4 = 0;
 if (decrypted[0] != '\0') {
 pbVar2 = (byte *)decrypted;
 bVar3 = decrypted[0];
 do {
 *pbVar2 = bVar3 ^ 0x5a;
 pbVar2 = pbVar2 + 1;
 bVar3 = *pbVar2;
 } while (bVar3 != 0);
 uVar4 = (uint)(byte)decrypted[0];
 }
 sVar1 = strlen(decrypted);
 return uVar4 + sVar1;
}



/* Function: param_tail_call_optimized @ 00010994 */

int param_tail_call_optimized(int n,int acc)

{
 int iVar1;
 
 if (n < 1) {
 return acc;
 }
 do {
 iVar1 = n + -1;
 acc = acc + n;
 n = iVar1;
 } while (iVar1 != 0);
 return acc;
}



/* Function: call_tail_call_optimized @ 000109b4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_tail_call_optimized(void)

{
 return 0x7a314;
}



/* Function: param_non_tail_call @ 000109c0 */

int param_non_tail_call(int n)

{
 int iVar1;
 int iVar2;
 
 iVar1 = 0;
 if (n < 1) {
 return 0;
 }
 do {
 iVar2 = n + -1;
 iVar1 = iVar1 + n;
 n = iVar2;
 } while (iVar2 != 0);
 return iVar1;
}



/* Function: call_non_tail_call @ 000109e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_non_tail_call(void)

{
 return 0x13ba;
}



/* Function: param_vectorized_loop @ 000109ec */

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
 piVar6 = c + -1;
 piVar1 = a + -1;
 piVar3 = b + -1;
 piVar5 = piVar1 + n;
 piVar4 = piVar6;
 do {
 piVar1 = piVar1 + 1;
 piVar3 = piVar3 + 1;
 piVar4 = piVar4 + 1;
 *piVar4 = *piVar1 + *piVar3;
 } while (piVar1 != piVar5);
 iVar2 = 0;
 piVar4 = piVar6 + n;
 do {
 piVar6 = piVar6 + 1;
 /* Unresolved local var: int i@[???] */
 iVar2 = iVar2 + *piVar6;
 } while (piVar4 != piVar6);
 return iVar2;
 }
 return 0;
}



/* Function: call_vectorized_loop @ 00010a50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorized_loop(void)

{
 /* Unresolved local var: int[8] a@[???]
 Unresolved local var: int[8] b@[???]
 Unresolved local var: int[8] c@[???] */
 return 0x48;
}



/* Function: param_link_time_optimization @ 00010a58 */

int param_link_time_optimization(int x)

{
 return (x + 5) * 2;
}



/* Function: call_link_time_optimization @ 00010a64 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_link_time_optimization(void)

{
 return 0x14;
}







/* Function: call_division_by_zero @ 00010abc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_division_by_zero(void)

{
 int in_r0;
 int x;
 int iVar1;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 x = param_division_by_zero(in_r0);
 iVar1 = param_division_by_zero(x);
 signal(8,(__sighandler_t)0x0);
 return x + iVar1;
}



/* Function: param_null_pointer_deref @ 00010ae4 */

int param_null_pointer_deref(int *p)

{
 int iVar1;
 
 signal(0xb,segv_handler);
 iVar1 = _setjmp((jmp_buf *)segv_buffer);
 /* Unresolved local var: int val@[DW_OP_reg0(r0)] */
 if (iVar1 == 0) {
 iVar1 = *p;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_null_pointer_deref @ 00010b28 */

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



/* Function: param_buffer_overflow_stack @ 00010b98 */

void param_buffer_overflow_stack(void)

{
 return;
}



/* Function: param_buffer_overflow_heap @ 00010b9c */

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



/* Function: call_buffer_overflow @ 00010bc8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_buffer_overflow(void)

{
 void *__ptr;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: char * heap_buffer@[???] */
 __ptr = malloc(0x10);
 if (__ptr != (void *)0x0) {
 free(__ptr);
 return 0x1e;
 }
 return 8;
}



/* Function: param_integer_overflow @ 00010bf0 */

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
 if (((uint)(0 < (int)uVar2) & (uint)(b & a) >> 0x1f) != 0) {
 uVar2 = 0xfffffffe;
 }
 return uVar2;
 }
 return uVar2 | (int)uVar2 >> 0x1f;
}



/* Function: call_integer_overflow @ 00010c28 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_integer_overflow(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 2000000000;
}



/* Function: param_undefined_behavior @ 00010c34 */

int param_undefined_behavior(int i)

{
 /* Unresolved local var: int local@[???] */
 return i << 1;
}



/* Function: call_undefined_behavior @ 00010c3c */

undefined4 call_undefined_behavior(void)

{
 return 10;
}



/* Function: param_implementation_defined @ 00010c44 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_implementation_defined(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: char c@[???]
 Unresolved local var: int s@[???]
 Unresolved local var: anon_struct_4_3_4e909822 bitfield@[???] */
 return 0x2c;
}



/* Function: call_implementation_defined @ 00010c4c */

undefined4 call_implementation_defined(void)

{
 return 0x2c;
}



/* Function: test_obf_opt_edge @ 00010c54 */

/* WARNING: Removing unreachable block (ram,0x00010e48) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_obf_opt_edge(void)

{
 size_t sVar1;
 int iVar2;
 int iVar3;
 void *__ptr;
 int extraout_r1;
 undefined4 uVar4;
 byte *pbVar5;
 byte bVar6;
 uint uVar7;
 int iVar8;
 int valid;
 char decrypted [32];
 
 puts(&DAT_00011188);
 __printf_chk(1,&DAT_000111b8,10);
 /* Unresolved local var: int p1@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int b@[???]
 Unresolved local var: int p2@[???]
 Unresolved local var: int p3@[???] */
 iVar2 = 5;
 iVar3 = 6;
 do {
 /* Unresolved local var: int temp@[???] */
 iVar8 = iVar3;
 iVar2 = __aeabi_idivmod(iVar2,iVar8);
 iVar3 = iVar8;
 } while (iVar2 != 0);
 if (iVar8 == 1) {
 uVar4 = 0x14;
 }
 else {
 uVar4 = 0x23;
 }
 __printf_chk(1,&DAT_000111d4,uVar4);
 __printf_chk(1,&DAT_000111f0,0xe1);
 /* Unresolved local var: char * p@[???] */
 strncpy(decrypted,&encrypted_0,0x1f);
 decrypted[0x1f] = '\0';
 uVar7 = 0;
 if (decrypted[0] != '\0') {
 pbVar5 = (byte *)decrypted;
 bVar6 = decrypted[0];
 do {
 *pbVar5 = bVar6 ^ 0x5a;
 pbVar5 = pbVar5 + 1;
 bVar6 = *pbVar5;
 } while (bVar6 != 0);
 uVar7 = (uint)(byte)decrypted[0];
 }
 sVar1 = strlen(decrypted);
 __printf_chk(1,&DAT_00011210,uVar7 + sVar1);
 __printf_chk(1,&DAT_0001122c,0x7a314);
 __printf_chk(1,&DAT_00011258,0x13ba);
 iVar2 = call_vectorized_loop();
 __printf_chk(1,&DAT_00011280,iVar2);
 iVar2 = __printf_chk(1,&DAT_000112a8,0x14);
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 iVar2 = param_division_by_zero(iVar2);
 iVar3 = param_division_by_zero(iVar2);
 signal(8,(__sighandler_t)0x0);
 __printf_chk(1,&DAT_000112c8,iVar2 + iVar3);
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 valid = 0x2a;
 iVar2 = param_null_pointer_deref(&valid);
 iVar3 = param_null_pointer_deref((int *)0x0);
 signal(0xb,(__sighandler_t)0x0);
 __printf_chk(1,&DAT_000112e4,iVar2 + iVar3);
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: char * heap_buffer@[???] */
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 uVar4 = 8;
 }
 else {
 free(__ptr);
 uVar4 = 0x1e;
 }
 __printf_chk(1,&DAT_00011304,uVar4);
 __printf_chk(1,&DAT_00011324,2000000000);
 __printf_chk(1,&DAT_00011358,10);
 __printf_chk(1,&DAT_00011378,0x2c);
 return;
}




/* CRT stub function __aeabi_idiv removed by preprocessor */





/* CRT stub function .divsi3_skip_div0_test removed by preprocessor */





/* CRT stub function __aeabi_idivmod removed by preprocessor */




/* Function: __aeabi_idiv0 @ 000110dc */

void __aeabi_idiv0(void)

{
 raise(8);
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 47 */
