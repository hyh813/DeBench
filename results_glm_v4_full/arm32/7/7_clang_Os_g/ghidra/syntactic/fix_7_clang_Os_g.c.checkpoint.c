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
typedef long long longlong;
typedef unsigned long long ulonglong;
typedef uint8_t undefined1;
typedef unsigned int undefined4;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/7/7_clang_Os_g
 * Processor: ARM
 * Compiler Spec: default
 */

#include <setjmp.h>
#include <signal.h>

/* External data declarations */
extern int DAT_00011030[8];
extern int DAT_00011010[8];
extern char param_string_encryption_encrypted[];
extern char DAT_00011221[];
extern char DAT_00011050[];
extern char DAT_0001106c[];
extern char DAT_00011088[];
extern char DAT_000110a5[];
extern char DAT_000110c1[];
extern char DAT_000110eb[];
extern char DAT_00011110[];
extern char DAT_00011136[];
extern char DAT_00011156[];
extern char DAT_00011172[];
extern char DAT_0001118f[];
extern char DAT_000111ac[];
extern char DAT_000111dd[];
extern char DAT_000111fa[];

/* Data definitions for undefined symbols */
int DAT_00011010[8] = {0};
int DAT_00011030[8] = {0};
char DAT_00011050[] = "%d\n";
char DAT_0001106c[] = "%d\n";
char DAT_00011088[] = "%d\n";
char DAT_000110a5[] = "%d\n";
char DAT_000110c1[] = "%d\n";
char DAT_000110eb[] = "%d\n";
char DAT_00011110[] = "%d\n";
char DAT_00011136[] = "%d\n";
char DAT_00011156[] = "%d\n";
char DAT_00011172[] = "%d\n";
char DAT_0001118f[] = "%d\n";
char DAT_000111ac[] = "%d\n";
char DAT_000111dd[] = "%d\n";
char DAT_000111fa[] = "%d\n";
char DAT_00011221[] = "%d\n";
char param_string_encryption_encrypted[32] = {0};

/* Global variables */
volatile int div_zero_caught = 0;
volatile int segv_caught = 0;
jmp_buf jmp_buffer;
jmp_buf segv_buffer;


/* CRT stub function _init removed by preprocessor */





/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_fake_branch @ 000106d0 */

int param_fake_branch(int x)

{
 /* Unresolved local var: int result@[DW_OP_reg0(r0)]
 Unresolved local var: char * str@[???] */
 return x;
}



/* Function: call_fake_branch @ 000106d4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fake_branch(void)

{
 return 10;
}



/* Function: param_opaque_predicate @ 000106dc */

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



/* Function: call_opaque_predicate @ 0001073c */

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



/* Function: param_instruction_substitution @ 00010770 */

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



/* Function: call_instruction_substitution @ 00010788 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_instruction_substitution(void)

{
 return 0xe1;
}



/* Function: decrypt_string @ 00010790 */

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



/* Function: param_string_encryption @ 000107ec */

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



/* Function: call_string_encryption @ 00010858 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_encryption(void)

{
 byte *pbVar1;
 size_t sVar2;
 byte bVar3;
 uint uVar4;
 byte abStack_28 [31];
 undefined1 uStack_9;
 
 pbVar1 = (byte *)strncpy((char *)abStack_28,param_string_encryption_encrypted,0x20);
 uVar4 = 0;
 uStack_9 = 0;
 bVar3 = abStack_28[0];
 if (abStack_28[0] != 0) {
 do {
 *pbVar1 = bVar3 ^ 0x5a;
 bVar3 = pbVar1[1];
 pbVar1 = pbVar1 + 1;
 } while (bVar3 != 0);
 uVar4 = (uint)abStack_28[0];
 }
 sVar2 = strlen((char *)abStack_28);
 return sVar2 + uVar4;
}



/* Function: param_tail_call_optimized @ 0001085c */

int param_tail_call_optimized(int n,int acc)

{
 longlong lVar1;
 uint uVar2;
 
 if (0 < n) {
 uVar2 = n - 1;
 lVar1 = (ulonglong)(n - 2) * (ulonglong)uVar2;
 acc = (uVar2 * uVar2 + acc + n) -
 ((uint)((byte)((ulonglong)lVar1 >> 0x20) & 1) << 0x1f | (uint)lVar1 >> 1);
 }
 return acc;
}



/* Function: call_tail_call_optimized @ 00010898 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_tail_call_optimized(void)

{
 return 0x7a314;
}



/* Function: param_non_tail_call @ 000108a4 */

int param_non_tail_call(int n)

{
 longlong lVar1;
 uint uVar2;
 
 if (0 < n) {
 uVar2 = n - 1;
 lVar1 = (ulonglong)(n - 2) * (ulonglong)uVar2;
 return (uVar2 * uVar2 + n) -
 ((uint)((byte)((ulonglong)lVar1 >> 0x20) & 1) << 0x1f | (uint)lVar1 >> 1);
 }
 return 0;
}



/* Function: call_non_tail_call @ 000108d4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_non_tail_call(void)

{
 return 0x13ba;
}



/* Function: param_vectorized_loop @ 000108e0 */

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



/* Function: call_vectorized_loop @ 00010938 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorized_loop(void)

{
 int *piVar1;
 int iVar2;
 int iVar3;
 int local_30 [8];
 
 /* Unresolved local var: int[8] c@[???]
 Unresolved local var: int[8] a@[???]
 Unresolved local var: int[8] b@[???] */
 iVar3 = 0;
 memset(local_30,0,0x20);
 do {
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[DW_OP_reg5(r5)] */
 local_30[iVar3] = DAT_00011030[iVar3] + DAT_00011010[iVar3];
 iVar3 = iVar3 + 1;
 } while (iVar3 != 8);
 iVar2 = 0;
 iVar3 = 0;
 do {
 piVar1 = local_30 + iVar2;
 /* Unresolved local var: int i@[DW_OP_reg1(r1)] */
 iVar2 = iVar2 + 1;
 iVar3 = *piVar1 + iVar3;
 } while (iVar2 != 8);
 return iVar3;
}



/* Function: param_link_time_optimization @ 000109b4 */

int param_link_time_optimization(int x)

{
 return x * 2 + 10;
}



/* Function: call_link_time_optimization @ 000109c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_link_time_optimization(void)

{
 return 0x14;
}



/* Function: div_zero_handler @ 000109c8 */

void div_zero_handler(int sig)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(jmp_buffer,1);
}



/* Function: param_division_by_zero @ 000109f0 */

int param_division_by_zero(int x)

{
 int iVar1;
 int iVar2;
 
 signal(8,div_zero_handler);
 iVar1 = _setjmp(jmp_buffer);
 iVar2 = -1;
 if (iVar1 == 0) {
 /* Unresolved local var: int y@[???] */
 iVar2 = __divsi3(10,x);
 }
 return iVar2;
}



/* Function: call_division_by_zero @ 00010a40 */

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



/* Function: segv_handler @ 00010a74 */

void segv_handler(int sig)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(segv_buffer,1);
}



/* Function: param_null_pointer_deref @ 00010a9c */

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



/* Function: call_null_pointer_deref @ 00010ae0 */

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



/* Function: param_buffer_overflow_stack @ 00010b24 */

int param_buffer_overflow_stack(int x)

{
 /* Unresolved local var: int canary@[???]
 Unresolved local var: char[8] buffer@[???] */
 return x;
}



/* Function: param_buffer_overflow_heap @ 00010b28 */

int param_buffer_overflow_heap(int x)

{
 /* Unresolved local var: char * heap_buffer@[???] */
 return x;
}



/* Function: call_buffer_overflow @ 00010b2c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_buffer_overflow(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 0x1e;
}



/* Function: param_integer_overflow @ 00010b34 */

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



/* Function: call_integer_overflow @ 00010b74 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_integer_overflow(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 2000000000;
}



/* Function: param_undefined_behavior @ 00010b80 */

int param_undefined_behavior(int i)

{
 /* Unresolved local var: int local@[???] */
 return i << 1;
}



/* Function: call_undefined_behavior @ 00010b88 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_undefined_behavior(void)

{
 /* Unresolved local var: int result@[???] */
 return 10;
}



/* Function: param_implementation_defined @ 00010b90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_implementation_defined(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: char c@[???]
 Unresolved local var: int s@[???]
 Unresolved local var: anon_struct_4_3_4e909822 bitfield@[???] */
 return 0x2c;
}



/* Function: call_implementation_defined @ 00010b98 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_implementation_defined(void)

{
 return 0x2c;
}



/* Function: test_obf_opt_edge @ 00010ba0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_obf_opt_edge(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int extraout_r1;
 undefined4 uVar4;
 
 puts(&DAT_00011221);
 printf(&DAT_00011050,10);
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
 uVar4 = 0x23;
 if (iVar3 == 1) {
 uVar4 = 0x14;
 }
 printf(&DAT_0001106c,uVar4);
 printf(&DAT_00011088,0xe1);
 iVar2 = param_string_encryption();
 printf(&DAT_000110a5,iVar2);
 printf(&DAT_000110c1,0x7a314);
 printf(&DAT_000110eb,0x13ba);
 iVar2 = call_vectorized_loop();
 printf(&DAT_00011110,iVar2);
 printf(&DAT_00011136,0x14);
 iVar2 = call_division_by_zero();
 printf(&DAT_00011156,iVar2);
 iVar2 = call_null_pointer_deref();
 printf(&DAT_00011172,iVar2);
 printf(&DAT_0001118f,0x1e);
 printf(&DAT_000111ac,2000000000);
 printf(&DAT_000111dd,10);
 printf(&DAT_000111fa,0x2c);
 return;
}



/* Function: main @ 00010d10 */

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
