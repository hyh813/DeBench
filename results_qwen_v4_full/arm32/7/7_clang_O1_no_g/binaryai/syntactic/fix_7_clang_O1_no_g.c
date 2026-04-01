/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <string.h>
#include <signal.h>
#include <setjmp.h>
#include <stdlib.h>
#include <stdbool.h>

typedef unsigned char uint8_t;
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
typedef unsigned char byte;
typedef unsigned int uint;
typedef int32_t int32;

// Additional type definitions for compatibility
typedef void (*__sighandler_t)(int);





// Macro definitions for compatibility
#define SBORROW4(a,b) ((int)((a) + (b)) < (int)(a))

// Global variable declarations
int completed_0 = 0;
void *__dso_handle = 0;
int div_zero_caught = 0;
long jmp_buffer[8] = {0};
int segv_caught = 0;
long segv_buffer[8] = {0};
byte param_string_encryption_encrypted[32] = {0};
uint DAT_00011190[8] = {0};
uint DAT_00011170[8] = {0};
char DAT_00011381[] = "Test Output:";
char DAT_000111b0[] = "call_opaque_predicate: %d\n";
char DAT_000111cc[] = "call_instruction_substitution: %d\n";
char DAT_000111e8[] = "call_string_encryption: %d\n";
char DAT_00011205[] = "decrypt_string result: %d\n";
char DAT_00011221[] = "call_tail_call_optimized: %d\n";
char DAT_0001124b[] = "call_non_tail_call: %d\n";
char DAT_00011270[] = "call_vectorized_loop: %d\n";
char DAT_00011296[] = "call_link_time_optimization: %d\n";
char DAT_000112b6[] = "call_division_by_zero: %d\n";
char DAT_000112d2[] = "call_null_pointer_deref: %d\n";
char DAT_000112ef[] = "call_buffer_overflow: %d\n";
char DAT_0001130c[] = "call_integer_overflow: %d\n";
char DAT_0001133d[] = "call_undefined_behavior: %d\n";
char DAT_0001135a[] = "call_implementation_defined: %d\n";
int extraout_r1 = 0;

// Function declarations
void __gmon_start__(void);
void __aeabi_idivmod(int param_1);
static uint __divsi3(uint, uint);
uint LZCOUNT(uint param_1);
void __aeabi_ldiv0(int);
int main(void);
uint _divsi3_skip_div0_test(uint, uint);
void call_weak_fn(void);
int raise(int sig);
int __libc_start_main(int (*main)(void), int argc, void *ubp_start, void (*init)(void), void (*fini)(void), void *rtld_fini, void *stack_end);
void __cxa_finalize(void *);
int printf(const char *, ...);
int _setjmp(struct __jmp_buf_tag __jmpbuf[1]);
__sighandler_t signal(int, __sighandler_t);
int puts(const char *);
size_t strlen(const char *);
char *strncpy(char *, const char *, size_t);
void abort(void);

// Decompiled by BinaryAI
// SHA256: c528b1a3e7257a7e8f8aed4e4676ef575b02fbe667ef19e44296d3ce5eab3db2



// Function: <EXTERNAL>::raise @ 0x104ac
// External function - declared only

// Function: <EXTERNAL>::__libc_start_main @ 0x104b8
// External function - declared only

// Function: <EXTERNAL>::__cxa_finalize @ 0x104c4
// External function - declared only

// Function: <EXTERNAL>::printf @ 0x104d0
// External function - declared only

// Function: <EXTERNAL>::longjmp @ 0x104dc
// External function - declared only

// Function: <EXTERNAL>::_setjmp @ 0x104e8
// External function - declared only

// Function: <EXTERNAL>::signal @ 0x104f4
// External function - declared only

// Function: <EXTERNAL>::puts @ 0x10500
// External function - declared only

// Function: <EXTERNAL>::strlen @ 0x10518
// External function - declared only

// Function: <EXTERNAL>::strncpy @ 0x10524
// External function - declared only

// Function: <EXTERNAL>::abort @ 0x10530
// External function - declared only











// Function: param_fake_branch @ 0x106a4
void param_fake_branch(void)
{
 return;
}

// Function: call_fake_branch @ 0x106a8
unsigned int call_fake_branch(void)
{
 return 10;
}

// Function: param_opaque_predicate @ 0x106b0
int param_opaque_predicate(uint param_1)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint extraout_r1;
 uint uVar4;
 uint uVar5;
 uVar5 = param_1 + 1;
 uVar2 = param_1;
 uVar1 = uVar5;
 uVar4 = param_1;
 if (param_1 != 0xffffffff) {
 do {
 uVar4 = uVar1;
 __aeabi_idivmod(uVar2);
 uVar2 = uVar4;
 uVar1 = extraout_r1;
 } while (extraout_r1 != 0);
 }
 iVar3 = param_1 * 3 + 0x14;
 if ((param_1 * param_1 + (param_1 * 2 | 1) ^ uVar5 * uVar5 | uVar4 ^ 1) == 0) {
 iVar3 = param_1 * 2 + 10;
 }
 return iVar3;
}

// Function: call_opaque_predicate @ 0x10710
unsigned int call_opaque_predicate(void)
{
 int iVar1;
 int iVar2;
 unsigned int uVar3;
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

// Function: param_instruction_substitution @ 0x10744
int param_instruction_substitution(uint param_1)
{
 return param_1 * 0x15 + (param_1 & 0xf) + (param_1 >> 1);
}

// Function: call_instruction_substitution @ 0x1075c
unsigned int call_instruction_substitution(void)
{
 return 0xe1;
}

// Function: decrypt_string @ 0x10764
byte * decrypt_string(char *param_1,byte *param_2,size_t param_3,byte param_4)
{
 byte bVar1;
 byte *pbVar2;
 strncpy((char *)param_2,param_1,param_3);
 param_2[param_3 - 1] = 0;
 bVar1 = *param_2;
 if (bVar1 != 0) {
 pbVar2 = param_2 + 1;
 do {
 pbVar2[-1] = bVar1 ^ param_4;
 bVar1 = *pbVar2;
 pbVar2 = pbVar2 + 1;
 } while (bVar1 != 0);
 }
 return param_2;
}

// Function: param_string_encryption @ 0x107c0
int param_string_encryption(void)
{
 byte bVar1;
 byte *pbVar2;
 size_t sVar3;
 byte local_28 [31];
 char local_9;
 pbVar2 = (byte *)strncpy((char *)local_28,&param_string_encryption_encrypted,0x20);
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

// Function: call_string_encryption @ 0x1082c
int call_string_encryption(void)
{
 byte bVar1;
 byte *pbVar2;
 size_t sVar3;
 byte local_28 [31];
 char local_9;
 pbVar2 = (byte *)strncpy((char *)local_28,&param_string_encryption_encrypted,0x20);
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

// Function: param_tail_call_optimized @ 0x10898
int param_tail_call_optimized(int param_1,int param_2)
{
 if (0 < param_1) {
 param_2 = param_tail_call_optimized(param_1 + -1,param_2 + param_1);
 }
 return param_2;
}

// Function: call_tail_call_optimized @ 0x108c0
void call_tail_call_optimized(void)
{
 param_tail_call_optimized(1000,0);
 return;
}

// Function: param_non_tail_call @ 0x108d8
int param_non_tail_call(int param_1)
{
 int iVar1;
 if (0 < param_1) {
 iVar1 = param_non_tail_call(param_1 + -1);
 return iVar1 + param_1;
 }
 return 0;
}

// Function: call_non_tail_call @ 0x10900
void call_non_tail_call(void)
{
 param_non_tail_call(100);
 return;
}

// Function: param_vectorized_loop @ 0x10914
int param_vectorized_loop(int *param_1,int *param_2,int *param_3,int param_4)
{
 int *piVar1;
 int iVar2;
 piVar1 = param_3;
 iVar2 = param_4;
 if (0 < param_4) {
 do {
 *piVar1 = *param_2 + *param_1;
 iVar2 = iVar2 + -1;
 param_1 = param_1 + 1;
 param_2 = param_2 + 1;
 piVar1 = piVar1 + 1;
 } while (iVar2 != 0);
 }
 iVar2 = 0;
 if (0 < param_4) {
 do {
 iVar2 = *param_3 + iVar2;
 param_4 = param_4 + -1;
 param_3 = param_3 + 1;
 } while (param_4 != 0);
 }
 return iVar2;
}

// Function: call_vectorized_loop @ 0x10964
int call_vectorized_loop(void)
{
 int iVar1;
 int iVar2;
 int local_28 [8];
 iVar1 = 0;
 local_28[7] = 0;
 local_28[6] = 0;
 local_28[5] = 0;
 local_28[4] = 0;
 local_28[3] = 0;
 local_28[2] = 0;
 local_28[1] = 0;
 local_28[0] = 0;
 do {
 local_28[iVar1] = DAT_00011190[iVar1] + DAT_00011170[iVar1];
 iVar1 = iVar1 + 1;
 } while (iVar1 != 8);
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = local_28[iVar2] + iVar1;
 iVar2 = iVar2 + 1;
 } while (iVar2 != 8);
 return iVar1;
}

// Function: param_link_time_optimization @ 0x109f0
int param_link_time_optimization(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: call_link_time_optimization @ 0x109fc
unsigned int call_link_time_optimization(void)
{
 return 0x14;
}

// Function: div_zero_handler @ 0x10a04
void div_zero_handler(int sig)
{
 (void)sig;
 div_zero_caught = 1;
 longjmp((struct __jmp_buf_tag *)jmp_buffer,1);
}

// Function: param_division_by_zero @ 0x10a2c
unsigned int param_division_by_zero(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 signal(8,div_zero_handler);
 iVar1 = _setjmp((struct __jmp_buf_tag *)jmp_buffer);
 if (iVar1 != 0) {
 return 0xffffffff;
 }
 uVar2 = __divsi3(10,param_1);
 return uVar2;
}

// Function: call_division_by_zero @ 0x10a84
int call_division_by_zero(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 return iVar2 + iVar1;
}

// Function: segv_handler @ 0x10ab8
void segv_handler(int sig)
{
 (void)sig;
 segv_caught = 1;
 longjmp((struct __jmp_buf_tag *)segv_buffer,1);
}

// Function: param_null_pointer_deref @ 0x10ae0
unsigned int param_null_pointer_deref(unsigned int *param_1)
{
 int iVar1;
 unsigned int uVar2;
 signal(0xb,segv_handler);
 iVar1 = _setjmp((struct __jmp_buf_tag *)segv_buffer);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 uVar2 = *param_1;
 }
 return uVar2;
}

// Function: call_null_pointer_deref @ 0x10b24
int call_null_pointer_deref(void)
{
 int iVar1;
 int iVar2;
 unsigned int local_14;
 local_14 = 0x2a;
 iVar1 = param_null_pointer_deref(&local_14);
 iVar2 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0x0);
 return iVar2 + iVar1;
}

// Function: param_buffer_overflow_stack @ 0x10b68
void param_buffer_overflow_stack(void)
{
 return;
}

// Function: param_buffer_overflow_heap @ 0x10b6c
void param_buffer_overflow_heap(void)
{
 return;
}

// Function: call_buffer_overflow @ 0x10b70
unsigned int call_buffer_overflow(void)
{
 return 0x1e;
}

// Function: param_integer_overflow @ 0x10b78
int param_integer_overflow(uint param_1,uint param_2)
{
 int iVar1;
 int iVar2;
 bool bVar3;
 iVar2 = param_2 + param_1;
 bVar3 = SBORROW4(param_1,1);
 iVar1 = param_1 - 1;
 if (0 < (int)param_1) {
 bVar3 = SBORROW4(param_2,1);
 iVar1 = param_2 - 1;
 }
 if ((iVar1 < 0 != bVar3) || (iVar1 = -1, -1 < iVar2)) {
 iVar1 = iVar2;
 if (0 < iVar2) {
 iVar1 = -2;
 }
 if (-1 < (int)(param_2 & param_1)) {
 iVar1 = iVar2;
 }
 }
 return iVar1;
}

// Function: call_integer_overflow @ 0x10bb8
unsigned int call_integer_overflow(void)
{
 return 2000000000;
}

// Function: param_undefined_behavior @ 0x10bc4
int param_undefined_behavior(int param_1)
{
 return param_1 << 1;
}

// Function: call_undefined_behavior @ 0x10bcc
unsigned int call_undefined_behavior(void)
{
 return 10;
}

// Function: param_implementation_defined @ 0x10bd4
unsigned int param_implementation_defined(void)
{
 return 0x2c;
}

// Function: call_implementation_defined @ 0x10bdc
unsigned int call_implementation_defined(void)
{
 return 0x2c;
}

// Function: test_obf_opt_edge @ 0x10be4
void test_obf_opt_edge(void)
{
 unsigned int *puVar1;
 byte *pbVar2;
 uint uVar2;
 size_t sVar3;
 int iVar4;
 int extraout_r1;
 unsigned int uVar5;
 int iVar6;
 int iVar7;
 unsigned int local_30[8];
 unsigned int local_2c[8];
 unsigned int local_28[8];
 unsigned int local_24[8];
 unsigned int local_20[8];
 unsigned int local_1c[8];
 unsigned int local_18[8];
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
   strncpy((char *)local_30,&param_string_encryption_encrypted,0x20);
 iVar7 = 0;
 local_14 = local_14 & 0xffffff;
   uVar2 = local_30[0] & 0xff;
   pbVar2 = (byte *)local_30;
 while (uVar2 != 0) {
 *pbVar2 = (byte)uVar2 ^ 0x5a;
 uVar2 = (uint)pbVar2[1];
 pbVar2 = pbVar2 + 1;
 }
 sVar3 = strlen((char *)local_30);
   printf(&DAT_00011205,sVar3 + (local_30[0] & 0xff));
 uVar5 = param_tail_call_optimized(1000,0);
 printf(&DAT_00011221,uVar5);
 uVar5 = param_non_tail_call(100);
 printf(&DAT_0001124b,uVar5);
   memset(&local_14, 0, sizeof(local_14));
   memset(local_18, 0, sizeof(local_18));
   memset(local_1c, 0, sizeof(local_1c));
   memset(local_20, 0, sizeof(local_20));
   memset(local_24, 0, sizeof(local_24));
   memset(local_28, 0, sizeof(local_28));
   memset(local_2c, 0, sizeof(local_2c));
   memset(local_30, 0, sizeof(local_30));
 do {
 local_28[iVar7] = DAT_00011190[iVar7] + DAT_00011170[iVar7];
 iVar7 = iVar7 + 1;
 } while (iVar7 != 8);
 iVar7 = 0;
 iVar6 = 0;
 do {
   iVar6 = local_30[iVar7] + iVar6;
 iVar7 = iVar7 + 1;
 } while (iVar7 != 8);
 printf(&DAT_00011270,iVar6);
 printf(&DAT_00011296,0x14);
 iVar7 = param_division_by_zero(5);
 iVar6 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 printf(&DAT_000112b6,iVar6 + iVar7);
 local_30[0] = 0x2a;
 iVar7 = param_null_pointer_deref(&local_30[0]);
 iVar6 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0x0);
 printf(&DAT_000112d2,iVar6 + iVar7);
 printf(&DAT_000112ef,0x1e);
 printf(&DAT_0001130c,2000000000);
 printf(&DAT_0001133d,10);
 printf(&DAT_0001135a,0x2c);
 return;
}

// Function: main @ 0x10e70
int main(void)
{
 test_obf_opt_edge();
 return 0;
}

// Function: __divsi3 @ 0x10e84
static uint __divsi3(uint param_1,uint param_2)
{
 uint uVar1;
 int iVar2;
 uint uVar3;
 uint uVar4;
 bool bVar5;
 bool bVar6;
 bool bVar7;
 bool bVar8;
 bool bVar9;
 bool bVar10;
 bool bVar11;
 bool bVar12;
 bool bVar13;
 bool bVar14;
 bool bVar15;
 bool bVar16;
 bool bVar17;
 bool bVar18;
 bool bVar19;
 bool bVar20;
 bool bVar21;
 bool bVar22;
 bool bVar23;
 bool bVar24;
 bool bVar25;
 bool bVar26;
 bool bVar27;
 bool bVar28;
 bool bVar29;
 bool bVar30;
 bool bVar31;
 bool bVar32;
 bool bVar33;
 bool bVar34;
 bool bVar35;
 if (param_2 == 0) {
 bVar5 = (int)param_1 < 0;
 if (0 < (int)param_1) {
 param_1 = 0x7fffffff;
 }
 if (bVar5) {
 param_1 = 0x80000000;
 }
 __aeabi_ldiv0(param_1);
 return 0;
 }
 uVar4 = param_1 ^ param_2;
 uVar1 = param_2;
 if ((int)param_2 < 0) {
 uVar1 = -param_2;
 }
 if (uVar1 - 1 == 0) {
 if ((int)param_2 < 0) {
 param_1 = -param_1;
 }
 return param_1;
 }
 uVar3 = param_1;
 if ((int)param_1 < 0) {
 uVar3 = -param_1;
 }
 if (uVar3 <= uVar1) {
 if (uVar3 < uVar1) {
 param_1 = 0;
 }
 if (uVar3 == uVar1) {
 param_1 = (int)uVar4 >> 0x1f | 1;
 }
 return param_1;
 }
 if ((uVar1 & uVar1 - 1) == 0) {
 uVar3 = uVar3 >> (0x1fU - LZCOUNT(uVar1) & 0xff);
 if ((int)uVar4 < 0) {
 uVar3 = -uVar3;
 }
 return uVar3;
 }
 iVar2 = 0x1f - (LZCOUNT(uVar1) - LZCOUNT(uVar3));
 if (iVar2 == 0) {
 bVar5 = uVar1 << 0x1f <= uVar3;
 if (bVar5) {
 uVar3 = uVar3 + uVar1 * -0x80000000;
 }
 bVar6 = uVar1 << 0x1e <= uVar3;
 if (bVar6) {
 uVar3 = uVar3 + uVar1 * -0x40000000;
 }
 bVar7 = uVar1 << 0x1d <= uVar3;
 if (bVar7) {
 uVar3 = uVar3 + uVar1 * -0x20000000;
 }
 bVar8 = uVar1 << 0x1c <= uVar3;
 if (bVar8) {
 uVar3 = uVar3 + uVar1 * -0x10000000;
 }
 bVar9 = uVar1 << 0x1b <= uVar3;
 if (bVar9) {
 uVar3 = uVar3 + uVar1 * -0x8000000;
 }
 bVar10 = uVar1 << 0x1a <= uVar3;
 if (bVar10) {
 uVar3 = uVar3 + uVar1 * -0x4000000;
 }
 bVar11 = uVar1 << 0x19 <= uVar3;
 if (bVar11) {
 uVar3 = uVar3 + uVar1 * -0x2000000;
 }
 bVar12 = uVar1 << 0x18 <= uVar3;
 if (bVar12) {
 uVar3 = uVar3 + uVar1 * -0x1000000;
 }
 bVar13 = uVar1 << 0x17 <= uVar3;
 if (bVar13) {
 uVar3 = uVar3 + uVar1 * -0x800000;
 }
 bVar14 = uVar1 << 0x16 <= uVar3;
 if (bVar14) {
 uVar3 = uVar3 + uVar1 * -0x400000;
 }
 bVar15 = uVar1 << 0x15 <= uVar3;
 if (bVar15) {
 uVar3 = uVar3 + uVar1 * -0x200000;
 }
 bVar16 = uVar1 << 0x14 <= uVar3;
 if (bVar16) {
 uVar3 = uVar3 + uVar1 * -0x100000;
 }
 bVar17 = uVar1 << 0x13 <= uVar3;
 if (bVar17) {
 uVar3 = uVar3 + uVar1 * -0x80000;
 }
 bVar18 = uVar1 << 0x12 <= uVar3;
 if (bVar18) {
 uVar3 = uVar3 + uVar1 * -0x40000;
 }
 bVar19 = uVar1 << 0x11 <= uVar3;
 if (bVar19) {
 uVar3 = uVar3 + uVar1 * -0x20000;
 }
 bVar20 = uVar1 << 0x10 <= uVar3;
 if (bVar20) {
 uVar3 = uVar3 + uVar1 * -0x10000;
 }
 bVar21 = uVar1 << 0xf <= uVar3;
 if (bVar21) {
 uVar3 = uVar3 + uVar1 * -0x8000;
 }
 bVar22 = uVar1 << 0xe <= uVar3;
 if (bVar22) {
 uVar3 = uVar3 + uVar1 * -0x4000;
 }
 bVar23 = uVar1 << 0xd <= uVar3;
 if (bVar23) {
 uVar3 = uVar3 + uVar1 * -0x2000;
 }
 bVar24 = uVar1 << 0xc <= uVar3;
 if (bVar24) {
 uVar3 = uVar3 + uVar1 * -0x1000;
 }
 bVar25 = uVar1 << 0xb <= uVar3;
 if (bVar25) {
 uVar3 = uVar3 + uVar1 * -0x800;
 }
 bVar26 = uVar1 << 10 <= uVar3;
 if (bVar26) {
 uVar3 = uVar3 + uVar1 * -0x400;
 }
 bVar27 = uVar1 << 9 <= uVar3;
 if (bVar27) {
 uVar3 = uVar3 + uVar1 * -0x200;
 }
 bVar28 = uVar1 << 8 <= uVar3;
 if (bVar28) {
 uVar3 = uVar3 + uVar1 * -0x100;
 }
 bVar29 = uVar1 << 7 <= uVar3;
 if (bVar29) {
 uVar3 = uVar3 + uVar1 * -0x80;
 }
 bVar30 = uVar1 << 6 <= uVar3;
 if (bVar30) {
 uVar3 = uVar3 + uVar1 * -0x40;
 }
 bVar31 = uVar1 << 5 <= uVar3;
 if (bVar31) {
 uVar3 = uVar3 + uVar1 * -0x20;
 }
 bVar32 = uVar1 << 4 <= uVar3;
 if (bVar32) {
 uVar3 = uVar3 + uVar1 * -0x10;
 }
 bVar33 = uVar1 << 3 <= uVar3;
 if (bVar33) {
 uVar3 = uVar3 + uVar1 * -8;
 }
 bVar34 = uVar1 << 2 <= uVar3;
 if (bVar34) {
 uVar3 = uVar3 + uVar1 * -4;
 }
 bVar35 = uVar1 << 1 <= uVar3;
 if (bVar35) {
 uVar3 = uVar3 + uVar1 * -2;
 }
 uVar1 = (((((((((((((((((((((((((((((((uint)bVar5 * 2 + (uint)bVar6) * 2 + (uint)bVar7) * 2 +
 (uint)bVar8) * 2 + (uint)bVar9) * 2 + (uint)bVar10) * 2 +
 (uint)bVar11) * 2 + (uint)bVar12) * 2 + (uint)bVar13) * 2 +
 (uint)bVar14) * 2 + (uint)bVar15) * 2 + (uint)bVar16) * 2 +
 (uint)bVar17) * 2 + (uint)bVar18) * 2 + (uint)bVar19) * 2 +
 (uint)bVar20) * 2 + (uint)bVar21) * 2 + (uint)bVar22) * 2 + (uint)bVar23)
 * 2 + (uint)bVar24) * 2 + (uint)bVar25) * 2 + (uint)bVar26) * 2 +
 (uint)bVar27) * 2 + (uint)bVar28) * 2 + (uint)bVar29) * 2 + (uint)bVar30) * 2 +
 (uint)bVar31) * 2 + (uint)bVar32) * 2 + (uint)bVar33) * 2 + (uint)bVar34) * 2 +
 (uint)bVar35) * 2 + (uint)(uVar1 <= uVar3);
 if ((int)uVar4 < 0) {
 uVar1 = -uVar1;
 }
 return uVar1;
 }
 return uVar1;
}

// Function: LZCOUNT @ 0x10ed4
uint LZCOUNT(uint param_1)
{
 uint uVar1;
 int iVar2;
 uVar1 = 0;
 if (param_1 != 0) {
 iVar2 = 0x1f;
 do {
 if ((param_1 >> iVar2 & 1) != 0) {
 uVar1 = 0x1f - iVar2;
 break;
 }
 iVar2 = iVar2 + -1;
 } while (iVar2 != -1);
 }
 return uVar1;
}

// Function: .divsi3_skip_div0_test @ 0x10e8c
uint _divsi3_skip_div0_test(uint param_1, uint param_2)
{
 uint uVar1;
 int iVar2;
 uint uVar3;
 uint uVar4;
 bool bVar5;
 bool bVar6;
 bool bVar7;
 bool bVar8;
 bool bVar9;
 bool bVar10;
 bool bVar11;
 bool bVar12;
 bool bVar13;
 bool bVar14;
 bool bVar15;
 bool bVar16;
 bool bVar17;
 bool bVar18;
 bool bVar19;
 bool bVar20;
 bool bVar21;
 bool bVar22;
 bool bVar23;
 bool bVar24;
 bool bVar25;
 bool bVar26;
 bool bVar27;
 bool bVar28;
 bool bVar29;
 bool bVar30;
 bool bVar31;
 bool bVar32;
 bool bVar33;
 bool bVar34;
 bool bVar35;
 uVar4 = param_1 ^ param_2;
 uVar1 = param_2;
 if ((int)param_2 < 0) {
 uVar1 = -param_2;
 }
 if (uVar1 - 1 == 0) {
 if ((int)param_2 < 0) {
 param_1 = -param_1;
 }
 return param_1;
 }
 uVar3 = param_1;
 if ((int)param_1 < 0) {
 uVar3 = -param_1;
 }
 if (uVar3 <= uVar1) {
 if (uVar3 < uVar1) {
 param_1 = 0;
 }
 if (uVar3 == uVar1) {
 param_1 = (int)uVar4 >> 0x1f | 1;
 }
 return param_1;
 }
 if ((uVar1 & uVar1 - 1) == 0) {
 uVar3 = uVar3 >> (0x1fU - LZCOUNT(uVar1) & 0xff);
 if ((int)uVar4 < 0) {
 uVar3 = -uVar3;
 }
 return uVar3;
 }
 iVar2 = 0x1f - (LZCOUNT(uVar1) - LZCOUNT(uVar3));
 if (iVar2 == 0) {
 bVar5 = uVar1 << 0x1f <= uVar3;
 if (bVar5) {
 uVar3 = uVar3 + uVar1 * -0x80000000;
 }
 bVar6 = uVar1 << 0x1e <= uVar3;
 if (bVar6) {
 uVar3 = uVar3 + uVar1 * -0x40000000;
 }
 bVar7 = uVar1 << 0x1d <= uVar3;
 if (bVar7) {
 uVar3 = uVar3 + uVar1 * -0x20000000;
 }
 bVar8 = uVar1 << 0x1c <= uVar3;
 if (bVar8) {
 uVar3 = uVar3 + uVar1 * -0x10000000;
 }
 bVar9 = uVar1 << 0x1b <= uVar3;
 if (bVar9) {
 uVar3 = uVar3 + uVar1 * -0x8000000;
 }
 bVar10 = uVar1 << 0x1a <= uVar3;
 if (bVar10) {
 uVar3 = uVar3 + uVar1 * -0x4000000;
 }
 bVar11 = uVar1 << 0x19 <= uVar3;
 if (bVar11) {
 uVar3 = uVar3 + uVar1 * -0x2000000;
 }
 bVar12 = uVar1 << 0x18 <= uVar3;
 if (bVar12) {
 uVar3 = uVar3 + uVar1 * -0x1000000;
 }
 bVar13 = uVar1 << 0x17 <= uVar3;
 if (bVar13) {
 uVar3 = uVar3 + uVar1 * -0x800000;
 }
 bVar14 = uVar1 << 0x16 <= uVar3;
 if (bVar14) {
 uVar3 = uVar3 + uVar1 * -0x400000;
 }
 bVar15 = uVar1 << 0x15 <= uVar3;
 if (bVar15) {
 uVar3 = uVar3 + uVar1 * -0x200000;
 }
 bVar16 = uVar1 << 0x14 <= uVar3;
 if (bVar16) {
 uVar3 = uVar3 + uVar1 * -0x100000;
 }
 bVar17 = uVar1 << 0x13 <= uVar3;
 if (bVar17) {
 uVar3 = uVar3 + uVar1 * -0x80000;
 }
 bVar18 = uVar1 << 0x12 <= uVar3;
 if (bVar18) {
 uVar3 = uVar3 + uVar1 * -0x40000;
 }
 bVar19 = uVar1 << 0x11 <= uVar3;
 if (bVar19) {
 uVar3 = uVar3 + uVar1 * -0x20000;
 }
 bVar20 = uVar1 << 0x10 <= uVar3;
 if (bVar20) {
 uVar3 = uVar3 + uVar1 * -0x10000;
 }
 bVar21 = uVar1 << 0xf <= uVar3;
 if (bVar21) {
 uVar3 = uVar3 + uVar1 * -0x8000;
 }
 bVar22 = uVar1 << 0xe <= uVar3;
 if (bVar22) {
 uVar3 = uVar3 + uVar1 * -0x4000;
 }
 bVar23 = uVar1 << 0xd <= uVar3;
 if (bVar23) {
 uVar3 = uVar3 + uVar1 * -0x2000;
 }
 bVar24 = uVar1 << 0xc <= uVar3;
 if (bVar24) {
 uVar3 = uVar3 + uVar1 * -0x1000;
 }
 bVar25 = uVar1 << 0xb <= uVar3;
 if (bVar25) {
 uVar3 = uVar3 + uVar1 * -0x800;
 }
 bVar26 = uVar1 << 10 <= uVar3;
 if (bVar26) {
 uVar3 = uVar3 + uVar1 * -0x400;
 }
 bVar27 = uVar1 << 9 <= uVar3;
 if (bVar27) {
 uVar3 = uVar3 + uVar1 * -0x200;
 }
 bVar28 = uVar1 << 8 <= uVar3;
 if (bVar28) {
 uVar3 = uVar3 + uVar1 * -0x100;
 }
 bVar29 = uVar1 << 7 <= uVar3;
 if (bVar29) {
 uVar3 = uVar3 + uVar1 * -0x80;
 }
 bVar30 = uVar1 << 6 <= uVar3;
 if (bVar30) {
 uVar3 = uVar3 + uVar1 * -0x40;
 }
 bVar31 = uVar1 << 5 <= uVar3;
 if (bVar31) {
 uVar3 = uVar3 + uVar1 * -0x20;
 }
 bVar32 = uVar1 << 4 <= uVar3;
 if (bVar32) {
 uVar3 = uVar3 + uVar1 * -0x10;
 }
 bVar33 = uVar1 << 3 <= uVar3;
 if (bVar33) {
 uVar3 = uVar3 + uVar1 * -8;
 }
 bVar34 = uVar1 << 2 <= uVar3;
 if (bVar34) {
 uVar3 = uVar3 + uVar1 * -4;
 }
 bVar35 = uVar1 << 1 <= uVar3;
 if (bVar35) {
 uVar3 = uVar3 + uVar1 * -2;
 }
 uVar1 = (((((((((((((((((((((((((((((((uint)bVar5 * 2 + (uint)bVar6) * 2 + (uint)bVar7) * 2 +
 (uint)bVar8) * 2 + (uint)bVar9) * 2 + (uint)bVar10) * 2 +
 (uint)bVar11) * 2 + (uint)bVar12) * 2 + (uint)bVar13) * 2 +
 (uint)bVar14) * 2 + (uint)bVar15) * 2 + (uint)bVar16) * 2 +
 (uint)bVar17) * 2 + (uint)bVar18) * 2 + (uint)bVar19) * 2 +
 (uint)bVar20) * 2 + (uint)bVar21) * 2 + (uint)bVar22) * 2 + (uint)bVar23)
 * 2 + (uint)bVar24) * 2 + (uint)bVar25) * 2 + (uint)bVar26) * 2 +
 (uint)bVar27) * 2 + (uint)bVar28) * 2 + (uint)bVar29) * 2 + (uint)bVar30) * 2 +
 (uint)bVar31) * 2 + (uint)bVar32) * 2 + (uint)bVar33) * 2 + (uint)bVar34) * 2 +
 (uint)bVar35) * 2 + (uint)(uVar1 <= uVar3);
 if ((int)uVar4 < 0) {
 uVar1 = -uVar1;
 }
 return uVar1;
 }
 return uVar1;
}

// Function: __aeabi_idivmod @ 0x110a4
void __aeabi_idivmod(int param_1)
{
 bool bVar1;
 int extraout_r1;
 if (param_1 != 0) {
 _divsi3_skip_div0_test(param_1, 1);
 return;
 }
 bVar1 = param_1 < 0;
 if (0 < param_1) {
 param_1 = 0x7fffffff;
 }
 if (bVar1) {
 param_1 = -0x80000000;
 }
 __aeabi_ldiv0(param_1);
 return;
}

// Function: __aeabi_ldiv0 @ 0x110c4
void __aeabi_ldiv0(int param_1)
{
 (void)param_1;
 raise(8);
 return;
}



