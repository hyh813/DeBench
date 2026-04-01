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
typedef unsigned char undefined1;
typedef unsigned int uint;

/* Global variables */
uint8_t param_string_encryption_encrypted[32] = "encrypted_string_data_here";
int div_zero_caught = 0;
int segv_caught = 0;
long jmp_buffer[8] = {0};
long segv_buffer[8] = {0};
int DAT_00011190[8] = {1, 2, 3, 4, 5, 6, 7, 8};
int DAT_00011170[8] = {1, 1, 1, 1, 1, 1, 1, 1};
char DAT_00011381[] = "Test Output";
char DAT_000111b0[] = "%d\n";
char DAT_000111cc[] = "%d\n";
char DAT_000111e8[] = "%d\n";
char DAT_00011205[] = "%lu\n";
char DAT_00011221[] = "%d\n";
char DAT_0001124b[] = "%d\n";
char DAT_00011270[] = "%d\n";
char DAT_00011296[] = "%d\n";
char DAT_000112b6[] = "%d\n";
char DAT_000112d2[] = "%d\n";
char DAT_000112ef[] = "%d\n";
char DAT_0001130c[] = "%d\n";
char DAT_0001133d[] = "%d\n";
char DAT_0001135a[] = "%d\n";

/* Type definitions for setjmp */
typedef struct __jmp_buf_tag {
 long __jmpbuf[8];
 long __mask_was_saved;
 long __saved_mask;
} __jmp_buf_tag;

typedef void (*__sighandler_t)(int);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/7/7_clang_O1_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */





/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_fake_branch @ 000106a4 */

void param_fake_branch(void)

{
 return;
}



/* Function: call_fake_branch @ 000106a8 */

int call_fake_branch(void)

{
 return 10;
}



/* Function: param_opaque_predicate @ 000106b0 */

int param_opaque_predicate(int param_1)

{
 int iVar1;
 int iVar2;
 int extraout_r1;
 int iVar3;
 int iVar4;
 
 iVar4 = param_1 + 1;
 iVar2 = param_1;
 iVar1 = iVar4;
 iVar3 = param_1;
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



/* Function: call_opaque_predicate @ 00010710 */

int call_opaque_predicate(void)

{
 int iVar1;
 int iVar2;
 int uVar3;
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



/* Function: param_instruction_substitution @ 00010744 */

int param_instruction_substitution(unsigned int param_1)

{
 return param_1 * 0x15 + (param_1 & 0xf) + (param_1 >> 1);
}



/* Function: call_instruction_substitution @ 0001075c */

int call_instruction_substitution(void)

{
 return 0xe1;
}



/* Function: decrypt_string @ 00010764 */

uint8_t * decrypt_string(char *param_1,uint8_t *param_2,size_t param_3,uint8_t param_4)

{
 uint8_t bVar1;
 uint8_t *pbVar2;
 
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



/* Function: param_string_encryption @ 000107c0 */

int param_string_encryption(void)

{
 uint8_t bVar1;
 uint8_t *pbVar2;
 size_t sVar3;
 uint8_t local_28 [31];
 uint8_t local_9;
 
 pbVar2 = (uint8_t *)strncpy((char *)local_28,&param_string_encryption_encrypted,0x20);
 local_9 = 0;
 bVar1 = local_28[0];
 while (bVar1 != 0) {
 *pbVar2 = bVar1 ^ 0x5a;
 bVar1 = pbVar2[1];
 pbVar2 = pbVar2 + 1;
 }
 sVar3 = strlen((char *)local_28);
 return sVar3 + local_28[0];
}



/* Function: call_string_encryption @ 0001082c */

int call_string_encryption(void)

{
 uint8_t bVar1;
 uint8_t *pbVar2;
 size_t sVar3;
 uint8_t local_28 [31];
 uint8_t local_9;
 
 pbVar2 = (uint8_t *)strncpy((char *)local_28,&param_string_encryption_encrypted,0x20);
 local_9 = 0;
 bVar1 = local_28[0];
 while (bVar1 != 0) {
 *pbVar2 = bVar1 ^ 0x5a;
 bVar1 = pbVar2[1];
 pbVar2 = pbVar2 + 1;
 }
 sVar3 = strlen((char *)local_28);
 return sVar3 + local_28[0];
}



/* Function: param_tail_call_optimized @ 00010898 */

int param_tail_call_optimized(int param_1,int param_2)

{
 if (0 < param_1) {
 param_2 = param_tail_call_optimized(param_1 + -1,param_2 + param_1);
 }
 return param_2;
}



/* Function: call_tail_call_optimized @ 000108c0 */

void call_tail_call_optimized(void)

{
 param_tail_call_optimized(1000,0);
 return;
}



/* Function: param_non_tail_call @ 000108d8 */

int param_non_tail_call(int param_1)

{
 int iVar1;
 
 if (0 < param_1) {
 iVar1 = param_non_tail_call(param_1 + -1);
 return iVar1 + param_1;
 }
 return 0;
}



/* Function: call_non_tail_call @ 00010900 */

void call_non_tail_call(void)

{
 param_non_tail_call(100);
 return;
}



/* Function: param_vectorized_loop @ 00010914 */

int param_vectorized_loop(int *param_1,int *param_2,int *param_3,int param_4)

{
 int *piVar1;
 int iVar2;
 int idx;
 
 piVar1 = param_3;
 iVar2 = param_4;
 idx = 0;
 if (0 < param_4) {
 do {
 piVar1[idx] = param_2[idx] + param_1[idx];
 iVar2 = iVar2 + -1;
 idx = idx + 1;
 } while (iVar2 != 0);
 }
 iVar2 = 0;
 idx = 0;
 if (0 < param_4) {
 do {
 iVar2 = param_3[idx] + iVar2;
 param_4 = param_4 + -1;
 idx = idx + 1;
 } while (param_4 != 0);
 }
 return iVar2;
}



/* Function: call_vectorized_loop @ 00010964 */

int call_vectorized_loop(void)

{
 int iVar1;
 int iVar2;
 int local_28 [8];
 int idx;
 
 iVar1 = 0;
 local_28[7] = 0;
 local_28[6] = 0;
 local_28[5] = 0;
 local_28[4] = 0;
 local_28[3] = 0;
 local_28[2] = 0;
 local_28[1] = 0;
 local_28[0] = 0;
 idx = 0;
 do {
 local_28[idx] = DAT_00011190[idx] + DAT_00011170[idx];
 idx = idx + 1;
 } while (idx != 8);
 iVar2 = 0;
 idx = 0;
 do {
 iVar1 = local_28[idx] + iVar1;
 idx = idx + 1;
 } while (idx != 8);
 return iVar1;
}



/* Function: param_link_time_optimization @ 000109f0 */

int param_link_time_optimization(int param_1)

{
 return param_1 * 2 + 10;
}



/* Function: call_link_time_optimization @ 000109fc */

int call_link_time_optimization(void)

{
 return 0x14;
}



/* Function: div_zero_handler @ 00010a04 */

void div_zero_handler(void)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp((__jmp_buf_tag *)jmp_buffer,1);
}



/* Function: param_division_by_zero @ 00010a2c */

int param_division_by_zero(int param_1)

{
 int iVar1;
 int uVar2;
 
 signal(8,div_zero_handler);
 iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
 if (iVar1 != 0) {
 return 0xffffffff;
 }
 uVar2 = __divsi3(10,param_1);
 return uVar2;
}



/* Function: call_division_by_zero @ 00010a84 */

int call_division_by_zero(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 return iVar2 + iVar1;
}



/* Function: segv_handler @ 00010ab8 */

void segv_handler(void)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp((__jmp_buf_tag *)segv_buffer,1);
}



/* Function: param_null_pointer_deref @ 00010ae0 */

int param_null_pointer_deref(int *param_1)

{
 int iVar1;
 int uVar2;
 
 signal(0xb,segv_handler);
 iVar1 = _setjmp((__jmp_buf_tag *)segv_buffer);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 uVar2 = *param_1;
 }
 return uVar2;
}



/* Function: call_null_pointer_deref @ 00010b24 */

int call_null_pointer_deref(void)

{
 int iVar1;
 int iVar2;
 int local_14;
 
 local_14 = 0x2a;
 iVar1 = param_null_pointer_deref(&local_14);
 iVar2 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0x0);
 return iVar2 + iVar1;
}



/* Function: param_buffer_overflow_stack @ 00010b68 */

void param_buffer_overflow_stack(void)

{
 return;
}



/* Function: param_buffer_overflow_heap @ 00010b6c */

void param_buffer_overflow_heap(void)

{
 return;
}



/* Function: call_buffer_overflow @ 00010b70 */

int call_buffer_overflow(void)

{
 return 0x1e;
}



/* Function: param_integer_overflow @ 00010b78 */

int param_integer_overflow(unsigned int param_1,uint param_2)

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



/* Function: call_integer_overflow @ 00010bb8 */

int call_integer_overflow(void)

{
 return 2000000000;
}



/* Function: param_undefined_behavior @ 00010bc4 */

int param_undefined_behavior(int param_1)

{
 return param_1 << 1;
}



/* Function: call_undefined_behavior @ 00010bcc */

int call_undefined_behavior(void)

{
 return 10;
}



/* Function: param_implementation_defined @ 00010bd4 */

int param_implementation_defined(void)

{
 return 0x2c;
}



/* Function: call_implementation_defined @ 00010bdc */

int call_implementation_defined(void)

{
 return 0x2c;
}



/* Function: test_obf_opt_edge @ 00010be4 */

void test_obf_opt_edge(void)

{
 uint8_t *pbVar1;
 uint uVar2;
 size_t sVar3;
 int iVar4;
 int extraout_r1;
 int uVar5;
 int iVar6;
 int iVar7;
 int local_30;
 int local_2c;
 int local_28;
 int local_24;
 int local_20;
 int local_1c;
 int local_18;
 uint local_14;
 
 puts(&DAT_00011381);
 printf(&DAT_000111b0,10);
 iVar7 = 5;
 iVar6 = 6;
 do {
 iVar4 = iVar6;
 __aeabi_idivmod(iVar7);
 iVar7 = iVar4;
 iVar6 = extraout_r1;
 } while (extraout_r1 != 0);
 uVar5 = 0x23;
 if (iVar4 == 1) {
 uVar5 = 0x14;
 }
 printf(&DAT_000111cc,uVar5);
 printf(&DAT_000111e8,0xe1);
 strncpy((char *)&local_30,&param_string_encryption_encrypted,0x20);
 iVar7 = 0;
 local_14 = local_14 & 0xffffff;
 uVar2 = local_30 & 0xff;
 pbVar1 = (uint8_t *)&local_30;
 while (uVar2 != 0) {
 *pbVar1 = (byte)uVar2 ^ 0x5a;
 uVar2 = (uint)pbVar1[1];
 pbVar1 = pbVar1 + 1;
 }
 sVar3 = strlen((char *)&local_30);
 printf(&DAT_00011205,sVar3 + (local_30 & 0xff));
 uVar5 = param_tail_call_optimized(1000,0);
 printf(&DAT_00011221,uVar5);
 uVar5 = param_non_tail_call(100);
 printf(&DAT_0001124b,uVar5);
 local_14 = 0;
 local_18 = 0;
 local_1c = 0;
 local_20 = 0;
 local_24 = 0;
 local_28 = 0;
 local_2c = 0;
 local_30 = 0;
 iVar7 = 0;
 do {
 ((int*)&local_30)[iVar7] = DAT_00011190[iVar7] + DAT_00011170[iVar7];
 iVar7 = iVar7 + 1;
 } while (iVar7 != 8);
 iVar7 = 0;
 iVar6 = 0;
 do {
 iVar6 = ((int*)&local_30)[iVar7] + iVar6;
 iVar7 = iVar7 + 1;
 } while (iVar7 != 8);
 printf(&DAT_00011270,iVar6);
 printf(&DAT_00011296,0x14);
 iVar7 = param_division_by_zero(5);
 iVar6 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 printf(&DAT_000112b6,iVar6 + iVar7);
 local_30 = 0x2a;
 iVar7 = param_null_pointer_deref(&local_30);
 iVar6 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0x0);
 printf(&DAT_000112d2,iVar6 + iVar7);
 printf(&DAT_000112ef,0x1e);
 printf(&DAT_0001130c,2000000000);
 printf(&DAT_0001133d,10);
 printf(&DAT_0001135a,0x2c);
 return;
}



/* Function: main @ 00010e70 */

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
