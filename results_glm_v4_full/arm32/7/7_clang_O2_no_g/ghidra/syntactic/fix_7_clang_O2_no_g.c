#include <setjmp.h>
#include <signal.h>

/* Auto-injected type definitions by preprocessor */
#ifndef _UINT8_T
typedef unsigned char uint8_t;
#endif
#ifndef _UINT16_T
typedef unsigned short uint16_t;
#endif
#ifndef _UINT32_T
typedef unsigned int uint32_t;
#endif
#ifndef _UINT64_T
typedef unsigned long long uint64_t;
#endif
#ifndef _INT8_T
typedef signed char int8_t;
#endif
#ifndef _INT16_T
typedef short int16_t;
#endif
#ifndef _INT32_T
typedef int int32_t;
#endif
#ifndef _INT64_T
typedef long long int64_t;
#endif
#ifndef _SIZE_T
typedef unsigned long size_t;
#endif
#ifndef _SSIZE_T
typedef int ssize_t;
#endif
#ifndef _UINTPTR_T
typedef unsigned long uintptr_t;
#endif
#ifndef _INTPTR_T
typedef long intptr_t;
#endif
#ifndef _PTRDIFF_T
typedef unsigned long ptrdiff_t;
#endif
#ifndef _INTMAX_T
typedef long long intmax_t;
#endif
#ifndef _UINTMAX_T
typedef unsigned long long uintmax_t;
#endif



/* Global variables for signal handlers */
int div_zero_caught = 0;
int segv_caught = 0;
jmp_buf jmp_buffer;
jmp_buf segv_buffer;

/* Encrypted string constant */
static const char param_string_encryption_encrypted[32] = {
    0x3b, 0x3e, 0x31, 0x34, 0x3a, 0x3b, 0x2d, 0x35, 0x3b, 0x3e, 
    0x2d, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f,
    0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f,
    0x3f, 0x00
};


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

uint32_t call_fake_branch(void)

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



/* Function: call_opaque_predicate @ 00010710 */

uint32_t call_opaque_predicate(void)

{
 int iVar1;
 int iVar2;
 uint32_t uVar3;
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

int param_instruction_substitution(uint32_t param_1)

{
 return param_1 * 0x15 + (param_1 & 0xf) + (param_1 >> 1);
}



/* Function: call_instruction_substitution @ 0001075c */

uint32_t call_instruction_substitution(void)

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
 uint8_t *pbVar1;
 size_t sVar2;
 uint8_t bVar3;
 uint32_t uVar4;
 uint8_t local_28 [31];
 uint8_t local_9;
 
 pbVar1 = (uint8_t *)strncpy((char *)local_28,&param_string_encryption_encrypted,0x20);
 uVar4 = 0;
 local_9 = 0;
 bVar3 = local_28[0];
 if (local_28[0] != 0) {
 do {
 *pbVar1 = bVar3 ^ 0x5a;
 bVar3 = pbVar1[1];
 pbVar1 = pbVar1 + 1;
 } while (bVar3 != 0);
 uVar4 = (uint32_t)local_28[0];
 }
 sVar2 = strlen((char *)local_28);
 return sVar2 + uVar4;
}



/* Function: call_string_encryption @ 0001082c */

int call_string_encryption(void)

{
 uint8_t *pbVar1;
 size_t sVar2;
 uint8_t bVar3;
 uint32_t uVar4;
 uint8_t local_28 [31];
 uint8_t local_9;
 
 pbVar1 = (uint8_t *)strncpy((char *)local_28,&param_string_encryption_encrypted,0x20);
 uVar4 = 0;
 local_9 = 0;
 bVar3 = local_28[0];
 if (local_28[0] != 0) {
 do {
 *pbVar1 = bVar3 ^ 0x5a;
 bVar3 = pbVar1[1];
 pbVar1 = pbVar1 + 1;
 } while (bVar3 != 0);
 uVar4 = (uint32_t)local_28[0];
 }
 sVar2 = strlen((char *)local_28);
 return sVar2 + uVar4;
}



/* Function: param_tail_call_optimized @ 00010898 */

int param_tail_call_optimized(int param_1,int param_2)

{
 int64_t lVar1;
 uint32_t uVar2;
 
 if (0 < param_1) {
 uVar2 = param_1 - 1;
 lVar1 = (uint64_t)(param_1 - 2) * (uint64_t)uVar2;
 param_2 = (uVar2 * uVar2 + param_2 + param_1) -
 ((uint32_t)((uint8_t)((uint64_t)lVar1 >> 0x20) & 1) << 0x1f | (uint32_t)lVar1 >> 1);
 }
 return param_2;
}



/* Function: call_tail_call_optimized @ 000108d4 */

uint32_t call_tail_call_optimized(void)

{
 return 0x7a314;
}



/* Function: param_non_tail_call @ 000108e0 */

int param_non_tail_call(int param_1)

{
 int64_t lVar1;
 uint32_t uVar2;
 
 if (0 < param_1) {
 uVar2 = param_1 - 1;
 lVar1 = (uint64_t)(param_1 - 2) * (uint64_t)uVar2;
 return (uVar2 * uVar2 + param_1) -
 ((uint32_t)((uint8_t)((uint64_t)lVar1 >> 0x20) & 1) << 0x1f | (uint32_t)lVar1 >> 1);
 }
 return 0;
}



/* Function: call_non_tail_call @ 00010910 */

uint32_t call_non_tail_call(void)

{
 return 0x13ba;
}



/* Function: param_vectorized_loop @ 0001091c */

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
 *piVar3 = *param_2 + *param_1;
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



/* Function: call_vectorized_loop @ 00010974 */

uint32_t call_vectorized_loop(void)

{
 return 0x48;
}



/* Function: param_link_time_optimization @ 0001097c */

int param_link_time_optimization(int param_1)

{
 return param_1 * 2 + 10;
}



/* Function: call_link_time_optimization @ 00010988 */

uint32_t call_link_time_optimization(void)

{
 return 0x14;
}



/* Function: div_zero_handler @ 00010990 */

void div_zero_handler(void)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(jmp_buffer,1);
}



/* Function: param_division_by_zero @ 000109b8 */

uint32_t param_division_by_zero(uint32_t param_1)

{
 int iVar1;
 uint32_t uVar2;
 
 signal(8,div_zero_handler);
 iVar1 = _setjmp(jmp_buffer);
 if (iVar1 != 0) {
 return 0xffffffff;
 }
 uVar2 = __divsi3(10,param_1);
 return uVar2;
}



/* Function: call_division_by_zero @ 00010a10 */

int call_division_by_zero(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,SIG_DFL);
 return iVar2 + iVar1;
}



/* Function: segv_handler @ 00010a44 */

void segv_handler(void)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(segv_buffer,1);
}



/* Function: param_null_pointer_deref @ 00010a6c */

uint32_t param_null_pointer_deref(uint32_t *param_1)

{
 int iVar1;
 uint32_t uVar2;
 
 signal(0xb,segv_handler);
 iVar1 = _setjmp(segv_buffer);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 uVar2 = *param_1;
 }
 return uVar2;
}



/* Function: call_null_pointer_deref @ 00010ab0 */

int call_null_pointer_deref(void)

{
 int iVar1;
 int iVar2;
 uint32_t local_14;
 
 local_14 = 0x2a;
 iVar1 = param_null_pointer_deref(&local_14);
 iVar2 = param_null_pointer_deref(0);
 signal(0xb,SIG_DFL);
 return iVar2 + iVar1;
}



/* Function: param_buffer_overflow_stack @ 00010af4 */

void param_buffer_overflow_stack(void)

{
 return;
}



/* Function: param_buffer_overflow_heap @ 00010af8 */

void param_buffer_overflow_heap(void)

{
 return;
}



/* Function: call_buffer_overflow @ 00010afc */

uint32_t call_buffer_overflow(void)

{
 return 0x1e;
}



/* Function: param_integer_overflow @ 00010b04 */

int param_integer_overflow(uint32_t param_1,uint32_t param_2)

{
 unsigned int uVar1;
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



/* Function: call_integer_overflow @ 00010b44 */

uint32_t call_integer_overflow(void)

{
 return 2000000000;
}



/* Function: param_undefined_behavior @ 00010b50 */

int param_undefined_behavior(int param_1)

{
 return param_1 << 1;
}



/* Function: call_undefined_behavior @ 00010b58 */

uint32_t call_undefined_behavior(void)

{
 return 10;
}



/* Function: param_implementation_defined @ 00010b60 */

uint32_t param_implementation_defined(void)

{
 return 0x2c;
}



/* Function: call_implementation_defined @ 00010b68 */

uint32_t call_implementation_defined(void)

{
 return 0x2c;
}



/* String constants referenced by test_obf_opt_edge */
static const char DAT_00011251[] = "obf_opt_edge";
static const char DAT_00011080[] = "opaque_predicate: %d\n";
static const char DAT_0001109c[] = "instruction_substitution: %d\n";
static const char DAT_000110b8[] = "string_encryption: %d\n";
static const char DAT_000110d5[] = "tail_call_optimized: %d\n";
static const char DAT_000110f1[] = "non_tail_call: %d\n";
static const char DAT_0001111b[] = "vectorized_loop: %d\n";
static const char DAT_00011140[] = "link_time_optimization: %d\n";
static const char DAT_00011166[] = "division_by_zero: %d\n";
static const char DAT_00011186[] = "null_pointer_deref: %d\n";
static const char DAT_000111a2[] = "buffer_overflow: %d\n";
static const char DAT_000111bf[] = "integer_overflow: %d\n";
static const char DAT_000111dc[] = "undefined_behavior: %d\n";
static const char DAT_0001120d[] = "implementation_defined: %d\n";
static const char DAT_0001122a[] = "tests passed\n";

/* Function: test_obf_opt_edge @ 000.10b70 */

void test_obf_opt_edge(void)

{
 uint8_t *pbVar1;
 size_t sVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 int extraout_r1;
 uint32_t uVar6;
 uint32_t uVar7;
 uint32_t uVar8;
 uint32_t local_30 [7];
 uint8_t local_11;
 
 puts(&DAT_00011251);
 printf(&DAT_00011080,10);
 iVar3 = 5;
 iVar4 = 6;
 do {
 iVar5 = iVar4;
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
 pbVar1 = (uint8_t *)strncpy((char *)local_30,&param_string_encryption_encrypted,0x20);
 uVar7 = local_30[0] & 0xff;
 uVar8 = 0;
 local_11 = 0;
 if (uVar7 != 0) {
 do {
 *pbVar1 = (uint8_t)uVar7 ^ 0x5a;
 uVar7 = (uint32_t)pbVar1[1];
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
 iVar3 = param_division_by_zero(5);
 iVar4 = param_division_by_zero(0);
 signal(8,SIG_DFL);
 printf(&DAT_00011186,iVar4 + iVar3);
 local_30[0] = 0x2a;
 iVar3 = param_null_pointer_deref(local_30);
 iVar4 = param_null_pointer_deref(0);
 signal(0xb,SIG_DFL);
 printf(&DAT_000111a2,iVar4 + iVar3);
 printf(&DAT_000111bf,0x1e);
 printf(&DAT_000111dc,2000000000);
 printf(&DAT_0001120d,10);
 printf(&DAT_0001122a,0x2c);
 return;
}



/* Function: main @ 00010d80 */

uint32_t main(void)

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
