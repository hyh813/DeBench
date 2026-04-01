/* Auto-injected type definitions by preprocessor */
#include <setjmp.h>
#include <signal.h>
#include <stdio.h>
#include <string.h>

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef long long longlong;
typedef unsigned long long ulonglong;

typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned char byte;
typedef unsigned int uint;
typedef unsigned int undefined4;
typedef unsigned char undefined1;

/* Global variables */
int div_zero_caught = 0;
int segv_caught = 0;
jmp_buf jmp_buffer;
jmp_buf segv_buffer;

/* String constants */
char DAT_00011221[] = "\n";
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

/* External data references */
int DAT_00011030[8] = {1, 2, 3, 4, 5, 6, 7, 8};
int DAT_00011010[8] = {10, 20, 30, 40, 50, 60, 70, 80};
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

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/7/7_clang_Os_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */





/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_fake_branch @ 000106d0 */

void param_fake_branch(void)

{
 return;
}



/* Function: call_fake_branch @ 000106d4 */

undefined4 call_fake_branch(void)

{
 return 10;
}



/* Function: param_opaque_predicate @ 000106dc */

int param_opaque_predicate(int param_1)

{
 int iVar1;
 int iVar2;
 int extraout_r1;
 int iVar3;
 int iVar4;
 
 iVar4 = param_1 + 1;
 iVar3 = -1;
 iVar2 = param_1;
 iVar1 = iVar4;
 if (param_1 != -1) {
 do {
 iVar3 = iVar1;
 __aeabi_idivmod(iVar2);
 iVar2 = iVar3;
 iVar1 = extraout_r1;
 } while (extraout_r1 != 0);
 }
 iVar2 = param_1 * 3 + 0x14;
 if (param_1 * param_1 + (param_1 * 2 | 1U) == iVar4 * iVar4 && iVar3 == 1) {
 iVar2 = param_1 * 2 + 10;
 }
 return iVar2;
}



/* Function: call_opaque_predicate @ 0001073c */

undefined4 call_opaque_predicate(void)

{
 int iVar1;
 int iVar2;
 undefined4 uVar3;
 int iVar4;
 int extraout_r1;
 
 iVar2 = 5;
 iVar1 = 6;
 do {
 iVar4 = iVar1;
 __aeabi_idivmod(iVar2);
 iVar2 = iVar4;
 iVar1 = extraout_r1;
 } while (extraout_r1 != 0);
 uVar3 = 0x23;
 if (iVar4 == 1) {
 uVar3 = 0x14;
 }
 return uVar3;
}



/* Function: param_instruction_substitution @ 00010770 */

int param_instruction_substitution(uint param_1)

{
 return param_1 * 0x15 + (param_1 & 0xf) + (param_1 >> 1);
}



/* Function: call_instruction_substitution @ 00010788 */

undefined4 call_instruction_substitution(void)

{
 return 0xe1;
}



/* Data reference: param_string_encryption_encrypted */
static byte param_string_encryption_encrypted[32] = {0};

/* Function: decrypt_string @ 00010790 */

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



/* Function: param_string_encryption @ 000107ec */

int param_string_encryption(void)

{
 byte *pbVar1;
 size_t sVar2;
 byte bVar3;
 uint uVar4;
 byte local_28 [31];
 undefined1 local_9;
 
 pbVar1 = (byte *)strncpy((char *)local_28,&param_string_encryption_encrypted,0x20);
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



/* Function: param_tail_call_optimized @ 0001085c */

int param_tail_call_optimized(int param_1,int param_2)

{
 longlong lVar1;
 uint uVar2;
 
 if (0 < param_1) {
 uVar2 = param_1 - 1;
 lVar1 = (ulonglong)(param_1 - 2) * (ulonglong)uVar2;
 param_2 = (uVar2 * uVar2 + param_2 + param_1) -
 ((uint)((byte)((ulonglong)lVar1 >> 0x20) & 1) << 0x1f | (uint)lVar1 >> 1);
 }
 return param_2;
}



/* Function: call_tail_call_optimized @ 00010898 */

undefined4 call_tail_call_optimized(void)

{
 return 0x7a314;
}



/* Function: param_non_tail_call @ 000108a4 */

int param_non_tail_call(int param_1)

{
 longlong lVar1;
 uint uVar2;
 
 if (0 < param_1) {
 uVar2 = param_1 - 1;
 lVar1 = (ulonglong)(param_1 - 2) * (ulonglong)uVar2;
 return (uVar2 * uVar2 + param_1) -
 ((uint)((byte)((ulonglong)lVar1 >> 0x20) & 1) << 0x1f | (uint)lVar1 >> 1);
 }
 return 0;
}



/* Function: call_non_tail_call @ 000108d4 */

undefined4 call_non_tail_call(void)

{
 return 0x13ba;
}



/* Function: param_vectorized_loop @ 000108e0 */

int param_vectorized_loop(int *param_1,int *param_2,int *param_3,int param_4)

{
 int iVar1;
 int iVar2;
 int *piVar3;
 
 iVar1 = 0;
 iVar2 = param_4;
 piVar3 = param_3;
 if (0 < param_4) {
 do {
 iVar2 = iVar2 + -1;
 *piVar3 = (int)(*param_2) + (int)(*param_1);
 param_2 = param_2 + 1;
 param_1 = param_1 + 1;
 piVar3 = piVar3 + 1;
 } while (iVar2 != 0);
 if (0 < param_4) {
 iVar1 = 0;
 do {
 param_4 = param_4 + -1;
 iVar1 = *param_3 + iVar1;
 param_3 = param_3 + 1;
 } while (param_4 != 0);
 }
 }
 return iVar1;
}



/* Function: call_vectorized_loop @ 00010938 */

int call_vectorized_loop(void)

{
 int *piVar1;
 int iVar2;
 int iVar3;
 int local_30 [8];
 
 iVar3 = 0;
 memset(local_30,0,0x20);
 do {
 local_30[iVar3] = DAT_00011030[iVar3] + DAT_00011010[iVar3];
 iVar3 = iVar3 + 1;
 } while (iVar3 != 8);
 iVar2 = 0;
 iVar3 = 0;
 do {
 piVar1 = local_30 + iVar2;
 iVar2 = iVar2 + 1;
 iVar3 = *piVar1 + iVar3;
 } while (iVar2 != 8);
 return iVar3;
}



/* Function: param_link_time_optimization @ 000109b4 */

int param_link_time_optimization(int param_1)

{
 return param_1 * 2 + 10;
}



/* Function: call_link_time_optimization @ 000109c0 */

undefined4 call_link_time_optimization(void)

{
 return 0x14;
}



/* Function: div_zero_handler @ 000109c8 */

void div_zero_handler(void)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(jmp_buffer,1);
}



/* Function: param_division_by_zero @ 000109f0 */

undefined4 param_division_by_zero(undefined4 param_1)

{
 int iVar1;
 undefined4 uVar2;
 
 signal(8,div_zero_handler);
 iVar1 = _setjmp(jmp_buffer);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 uVar2 = __divsi3(10,param_1);
 }
 return uVar2;
}



/* Function: call_division_by_zero @ 00010a40 */

int call_division_by_zero(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 return iVar2 + iVar1;
}



/* Function: segv_handler @ 00010a74 */

void segv_handler(void)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(segv_buffer,1);
}



/* Function: param_null_pointer_deref @ 00010a9c */

undefined4 param_null_pointer_deref(undefined4 *param_1)

{
 int iVar1;
 undefined4 uVar2;
 
 signal(0xb,segv_handler);
 iVar1 = _setjmp(segv_buffer);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 uVar2 = *param_1;
 }
 return uVar2;
}



/* Function: call_null_pointer_deref @ 00010ae0 */

int call_null_pointer_deref(void)

{
 int iVar1;
 int iVar2;
 undefined4 local_14;
 
 local_14 = 0x2a;
 iVar1 = param_null_pointer_deref(&local_14);
 iVar2 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0x0);
 return iVar2 + iVar1;
}



/* Function: param_buffer_overflow_stack @ 00010b24 */

void param_buffer_overflow_stack(void)

{
 return;
}



/* Function: param_buffer_overflow_heap @ 00010b28 */

void param_buffer_overflow_heap(void)

{
 return;
}



/* Function: call_buffer_overflow @ 00010b2c */

undefined4 call_buffer_overflow(void)

{
 return 0x1e;
}



/* Function: param_integer_overflow @ 00010b34 */

int param_integer_overflow(uint param_1,uint param_2)

{
 uint uVar1;
 int iVar2;
 int iVar3;
 
 iVar3 = param_2 + param_1;
 uVar1 = param_1;
 if (0 < (int)param_1) {
 uVar1 = param_2;
 }
 if (((int)uVar1 < 1) || (iVar2 = -1, -1 < iVar3)) {
 iVar2 = iVar3;
 if (0 < iVar3) {
 iVar2 = -2;
 }
 if (-1 < (int)(param_2 & param_1)) {
 iVar2 = iVar3;
 }
 }
 return iVar2;
}



/* Function: call_integer_overflow @ 00010b74 */

undefined4 call_integer_overflow(void)

{
 return 2000000000;
}



/* Function: param_undefined_behavior @ 00010b80 */

int param_undefined_behavior(int param_1)

{
 return param_1 << 1;
}



/* Function: call_undefined_behavior @ 00010b88 */

undefined4 call_undefined_behavior(void)

{
 return 10;
}



/* Function: param_implementation_defined @ 00010b90 */

undefined4 param_implementation_defined(void)

{
 return 0x2c;
}



/* Function: call_implementation_defined @ 00010b98 */

undefined4 call_implementation_defined(void)

{
 return 0x2c;
}



/* Function: test_obf_opt_edge @ 00010ba0 */

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
 uVar4 = param_string_encryption();
 printf(&DAT_000110a5,uVar4);
 printf(&DAT_000110c1,0x7a314);
 printf(&DAT_000110eb,0x13ba);
 uVar4 = call_vectorized_loop();
 printf(&DAT_00011110,uVar4);
 printf(&DAT_00011136,0x14);
 uVar4 = call_division_by_zero();
 printf(&DAT_00011156,uVar4);
 uVar4 = call_null_pointer_deref();
 printf(&DAT_00011172,uVar4);
 printf(&DAT_0001118f,0x1e);
 printf(&DAT_000111ac,2000000000);
 printf(&DAT_000111dd,10);
 printf(&DAT_000111fa,0x2c);
 return;
}



/* Function: main @ 00010d10 */

undefined4 main(void)

{
 test_obf_opt_edge();
 return 0;
}




/* CRT stub function __divsi3 removed by preprocessor */





/* CRT stub function .divsi3_skip_div0_test removed by preprocessor */





/* CRT stub function __aeabi_idivmod removed by preprocessor */





/* CRT stub function __aeabi_ldiv0 removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 44 */
