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
typedef unsigned long long ulonglong;
typedef unsigned char undefined1;
typedef unsigned int undefined2;
typedef unsigned long undefined3;
typedef unsigned long undefined4;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/7/7_clang_O3_g
 * Processor: ARM
 * Compiler Spec: default
 */


#include <setjmp.h>
#include <signal.h>

/* CRT stub function _init removed by preprocessor */





/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */

int div_zero_caught;
jmp_buf jmp_buffer;
int segv_caught;
jmp_buf segv_buffer;

/* External data references from binary */
extern const char DAT_00011080[];
extern const char DAT_0001109c[];
extern const char DAT_000110b8[];
extern const char DAT_000110f1[];
extern const char DAT_0001111b[];
extern const char DAT_00011140[];
extern const char DAT_00011166[];
extern const char DAT_000111a2[];
extern const char DAT_000111bf[];
extern const char DAT_0001122a[];
extern const char param_string_encryption_encrypted[];

/* String constant definitions */
const char DAT_00011080[] = "Fake branch: %d\n";
const char DAT_0001109c[] = "Opaque predicate: %d\n";
const char DAT_000110b8[] = "Instruction substitution: %d\n";
const char DAT_000110d5[] = "String encryption: %d\n";
const char DAT_000110f1[] = "Tail call optimized: %d\n";
const char DAT_0001111b[] = "Non-tail call: %d\n";
const char DAT_00011140[] = "Vectorized loop: %d\n";
const char DAT_00011166[] = "Link time optimization: %d\n";
const char DAT_00011186[] = "Division by zero: %d\n";
const char DAT_000111a2[] = "Null pointer deref: %d\n";
const char DAT_000111bf[] = "Buffer overflow: %d\n";
const char DAT_000111dc[] = "Integer overflow: %d\n";
const char DAT_0001120d[] = "Undefined behavior: %d\n";
const char DAT_0001122a[] = "Implementation defined: %d\n";
const char DAT_00011251[] = "=== Test Results ===\n";
const char param_string_encryption_encrypted[32] = "\x13\x3f\x5e\x2b\x7c\x1a\x6d\x4e\x3f\x5e\x2b\x7c\x1a\x6d\x4e\x3f\x5e\x2b\x7c\x1a\x6d\x4e\x3f\x5e\x2b\x7c\x1a\x6d\x4e\x3f\x5e\x00";




/* Function: param_fake_branch @ 000106a4 */

int param_fake_branch(int x)

{
 /* Unresolved local var: int result@[DW_OP_reg0(r0)]
 Unresolved local var: char * str@[???] */
 return x;
}



/* Function: call_fake_branch @ 000106a8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fake_branch(void)

{
 return 10;
}



/* Function: param_opaque_predicate @ 000106b0 */

int param_opaque_predicate(int x)

{
 int iVar1;
 int iVar2;
 int extraout_r1;
 int iVar3;
 int iVar4;
 
 /* Unresolved local var: int b@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int p3@[???]
 Unresolved local var: int p1@[???]
 Unresolved local var: int p2@[???] */
 iVar4 = x + 1;
 iVar3 = -1;
 iVar2 = x;
 iVar1 = iVar4;
 if (x != -1) {
 do {
 iVar3 = iVar1;
 /* Unresolved local var: int temp@[DW_OP_reg5(r5)] */
 __aeabi_idivmod(iVar2);
 iVar2 = iVar3;
 iVar1 = extraout_r1;
 } while (extraout_r1 != 0);
 }
 iVar2 = x * 3 + 0x14;
 if (x * x + (x * 2 | 1U) == iVar4 * iVar4 && iVar3 == 1) {
 iVar2 = x * 2 + 10;
 }
 return iVar2;
}



/* Function: call_opaque_predicate @ 00010710 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_opaque_predicate(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int extraout_r1;
 
 iVar2 = 5;
 iVar1 = 6;
 do {
 iVar3 = iVar1;
 /* Unresolved local var: int b@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int p1@[???]
 Unresolved local var: int p3@[???]
 Unresolved local var: int temp@[DW_OP_reg4(r4)] */
 __aeabi_idivmod(iVar2);
 iVar2 = iVar3;
 iVar1 = extraout_r1;
 } while (extraout_r1 != 0);
 iVar2 = 0x23;
 if (iVar3 == 1) {
 iVar2 = 0x14;
 }
 return iVar2;
}



/* Function: param_instruction_substitution @ 00010744 */

int param_instruction_substitution(int x)

{
 /* Unresolved local var: int result@[DW_OP_breg0(r0): 0; DW_OP_lit6; DW_OP_mul;
 DW_OP_stack_value]
 Unresolved local var: uint ux@[DW_OP_reg0(r0)]
 Unresolved local var: int mul15@[???]
 Unresolved local var: int mod16@[???]
 Unresolved local var: int div2@[???] */
 return x * 0x15 + (x & 0xfU) + ((uint)x >> 1);
}



/* Function: call_instruction_substitution @ 0001075c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_instruction_substitution(void)

{
 return 0xe1;
}



/* Function: decrypt_string @ 00010764 */

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
 bVar1 = pbVar2[1];
 pbVar2 = pbVar2 + 1;
 }
 return buffer;
}



/* Function: param_string_encryption @ 000107c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_string_encryption(void)

{
 byte *pbVar1;
 size_t sVar2;
 byte bVar3;
 uint uVar4;
 byte local_28 [31];
 undefined1 local_9;
 
 /* Unresolved local var: char[32] decrypted@[???] */
 /* Unresolved local var: char * p@[???] */
 pbVar1 = (byte *)strncpy((char *)local_28,param_string_encryption_encrypted,0x20);
 uVar4 = 0;
 local_9 = 0;
 bVar3 = local_28[0];
 if (local_28[0] != 0) {
 do {
 *pbVar1 = bVar3 ^ 0x5a;
 bVar3 = pbVar1[1];
 pbVar1 = pbVar1 + 1;
 } while (bVar3 != 0);
 uVar4 = (uint)local_28[0];
 }
 sVar2 = strlen((char *)local_28);
 return sVar2 + uVar4;
}



/* Function: call_string_encryption @ 0001082c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_encryption(void)

{
 byte *pbVar1;
 size_t sVar2;
 byte bVar3;
 uint uVar4;
 byte local_28 [31];
 unsigned char local_9;
 
 /* Unresolved local var: char[32] decrypted@[???]
 Unresolved local var: char * p@[???] */
 pbVar1 = (byte *)strncpy((char *)local_28,param_string_encryption_encrypted,0x20);
 uVar4 = 0;
 local_9 = 0;
 bVar3 = local_28[0];
 if (local_28[0] != 0) {
 do {
 *pbVar1 = bVar3 ^ 0x5a;
 bVar3 = pbVar1[1];
 pbVar1 = pbVar1 + 1;
 } while (bVar3 != 0);
 uVar4 = (uint)local_28[0];
 }
 sVar2 = strlen((char *)local_28);
 return sVar2 + uVar4;
}



/* Function: param_tail_call_optimized @ 00010898 */

int param_tail_call_optimized(int n,int acc)

{
 long long lVar1;
 uint uVar2;
 
 if (0 < n) {
 uVar2 = n - 1;
 lVar1 = (ulonglong)(n - 2) * (ulonglong)uVar2;
 acc = (uVar2 * uVar2 + acc + n) -
 ((uint)((byte)((ulonglong)lVar1 >> 0x20) & 1) << 0x1f | (uint)lVar1 >> 1);
 }
 return acc;
}



/* Function: call_tail_call_optimized @ 000108d4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_tail_call_optimized(void)

{
 return 0x7a314;
}



/* Function: param_non_tail_call @ 000108e0 */

int param_non_tail_call(int n)

{
 long long lVar1;
 uint uVar2;
 
 if (0 < n) {
 uVar2 = n - 1;
 lVar1 = (ulonglong)(n - 2) * (ulonglong)uVar2;
 return (uVar2 * uVar2 + n) -
 ((uint)((byte)((ulonglong)lVar1 >> 0x20) & 1) << 0x1f | (uint)lVar1 >> 1);
 }
 return 0;
}



/* Function: call_non_tail_call @ 00010910 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_non_tail_call(void)

{
 return 0x13ba;
}



/* Function: param_vectorized_loop @ 0001091c */

int param_vectorized_loop(int *a,int *b,int *c,int n)

{
 int iVar1;
 int iVar2;
 int *piVar3;
 
 /* Unresolved local var: int sum@[???] */
 iVar1 = 0;
 /* Unresolved local var: int i@[???] */
 iVar2 = n;
 piVar3 = c;
 if (0 < n) {
 do {
 iVar2 = iVar2 + -1;
 *piVar3 = *b + *a;
 b = b + 1;
 a = a + 1;
 piVar3 = piVar3 + 1;
 } while (iVar2 != 0);
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar1 = 0;
 do {
 n = n + -1;
 iVar1 = *c + iVar1;
 c = c + 1;
 } while (n != 0);
 }
 }
 return iVar1;
}



/* Function: call_vectorized_loop @ 00010974 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorized_loop(void)

{
 /* Unresolved local var: int[8] c@[???]
 Unresolved local var: int[8] a@[???]
 Unresolved local var: int[8] b@[???] */
 return 0x48;
}



/* Function: param_link_time_optimization @ 0001097c */

int param_link_time_optimization(int x)

{
 return x * 2 + 10;
}



/* Function: call_link_time_optimization @ 00010988 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_link_time_optimization(void)

{
 return 0x14;
}



/* Function: div_zero_handler @ 00010990 */

void div_zero_handler(int sig)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(jmp_buffer,1);
}



/* Function: param_division_by_zero @ 000109b8 */

int param_division_by_zero(int x)

{
 int iVar1;
 
 signal(8,div_zero_handler);
 iVar1 = _setjmp(jmp_buffer);
 if (iVar1 != 0) {
 return -1;
 }
 /* Unresolved local var: int y@[???] */
 iVar1 = __divsi3(10,x);
 return iVar1;
}



/* Function: call_division_by_zero @ 00010a10 */

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
 return iVar2 + iVar1;
}



/* Function: segv_handler @ 00010a44 */

void segv_handler(int sig)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(segv_buffer,1);
}



/* Function: param_null_pointer_deref @ 00010a6c */

int param_null_pointer_deref(int *p)

{
 int iVar1;
 int iVar2;
 
 signal(0xb,segv_handler);
 iVar1 = _setjmp(segv_buffer);
 iVar2 = -1;
 /* Unresolved local var: int val@[???] */
 if (iVar1 == 0) {
 iVar2 = *p;
 }
 return iVar2;
}



/* Function: call_null_pointer_deref @ 00010ab0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_null_pointer_deref(void)

{
 int iVar1;
 int iVar2;
 int local_14;
 
 /* Unresolved local var: int valid@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 local_14 = 0x2a;
 iVar1 = param_null_pointer_deref(&local_14);
 iVar2 = param_null_pointer_deref((int *)0x0);
 signal(0xb,(__sighandler_t)0x0);
 return iVar2 + iVar1;
}



/* Function: param_buffer_overflow_stack @ 00010af4 */

int param_buffer_overflow_stack(int x)

{
 /* Unresolved local var: int canary@[???]
 Unresolved local var: char[8] buffer@[???] */
 return x;
}



/* Function: param_buffer_overflow_heap @ 00010af8 */

int param_buffer_overflow_heap(int x)

{
 /* Unresolved local var: char * heap_buffer@[???] */
 return x;
}



/* Function: call_buffer_overflow @ 00010afc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_buffer_overflow(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 0x1e;
}



/* Function: param_integer_overflow @ 00010b04 */

int param_integer_overflow(int a,int b)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: uint ub@[???]
 Unresolved local var: uint ua@[???]
 Unresolved local var: uint unsigned_sum@[???]
 Unresolved local var: int signed_sum@[???] */
 iVar2 = b + a;
 iVar1 = a;
 if (0 < a) {
 iVar1 = b;
 }
 if ((iVar1 < 1) || (iVar1 = -1, -1 < iVar2)) {
 iVar1 = iVar2;
 if (0 < iVar2) {
 iVar1 = -2;
 }
 if (-1 < (b & a)) {
 iVar1 = iVar2;
 }
 }
 return iVar1;
}



/* Function: call_integer_overflow @ 00010b44 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_integer_overflow(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 2000000000;
}



/* Function: param_undefined_behavior @ 00010b50 */

int param_undefined_behavior(int i)

{
 /* Unresolved local var: int local@[???] */
 return i << 1;
}



/* Function: call_undefined_behavior @ 00010b58 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_undefined_behavior(void)

{
 /* Unresolved local var: int result@[???] */
 return 10;
}



/* Function: param_implementation_defined @ 00010b60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_implementation_defined(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: char c@[???]
 Unresolved local var: int s@[???]
 Unresolved local var: anon_struct_4_3_4e909822 bitfield@[???] */
 return 0x2c;
}



/* Function: call_implementation_defined @ 00010b68 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_implementation_defined(void)

{
 return 0x2c;
}



/* Function: test_obf_opt_edge @ 00010b70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_obf_opt_edge(void)

{
 byte *pbVar1;
 size_t sVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 int extraout_r1;
 undefined4 uVar6;
 uint uVar7;
 uint uVar8;
 uint local_30 [7];
 undefined1 local_11;
 
 puts(&DAT_00011251);
 printf(&DAT_00011080,10);
 iVar3 = 5;
 iVar4 = 6;
 do {
 iVar5 = iVar4;
 /* Unresolved local var: int b@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int p1@[???]
 Unresolved local var: int p3@[???]
 Unresolved local var: int temp@[DW_OP_reg4(r4)] */
 __aeabi_idivmod(iVar3);
 iVar3 = iVar5;
 iVar4 = extraout_r1;
 } while (extraout_r1 != 0);
 uVar6 = 0x23;
 if (iVar5 == 1) {
 uVar6 = 0x14;
 }
 printf(&DAT_0001109c,uVar6);
 printf(&DAT_000110b8,0xe1);
 /* Unresolved local var: char[32] decrypted@[???]
 Unresolved local var: char * p@[???] */
 pbVar1 = (byte *)strncpy((char *)local_30,param_string_encryption_encrypted,0x20);
 uVar7 = local_30[0] & 0xff;
 uVar8 = 0;
 local_11 = 0;
 if (uVar7 != 0) {
 do {
 *pbVar1 = (byte)uVar7 ^ 0x5a;
 uVar7 = (uint)pbVar1[1];
 pbVar1 = pbVar1 + 1;
 } while (uVar7 != 0);
 uVar8 = local_30[0] & 0xff;
 }
 sVar2 = strlen((char *)local_30);
 printf(&DAT_000110d5,sVar2 + uVar8);
 printf(&DAT_000110f1,0x7a314);
 printf(&DAT_0001111b,0x13ba);
 printf(&DAT_00011140,0x48);
 printf(&DAT_00011166,0x14);
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 iVar3 = param_division_by_zero(5);
 iVar4 = param_division_by_zero(0);
 signal(8,SIG_DFL);
 printf(&DAT_00011186,iVar4 + iVar3);
 /* Unresolved local var: int valid@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 local_30[0] = 0x2a;
 iVar3 = param_null_pointer_deref((int *)local_30);
 iVar4 = param_null_pointer_deref((int *)0x0);
 signal(0xb,SIG_DFL);
 printf(&DAT_000111a2,iVar4 + iVar3);
 printf(&DAT_000111bf,0x1e);
 printf(&DAT_000111dc,2000000000);
 printf(&DAT_0001120d,10);
 printf(&DAT_0001122a,0x2c);
 return;
}



/* Function: main @ 00010d80 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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




/* Total functions decompiled: 45 */
