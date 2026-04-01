#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned int uint;
typedef unsigned char byte;
typedef unsigned long ulonglong;
typedef long long longlong;

/* Additional type definitions for signal and setjmp/longjmp */

typedef void (*__sighandler_t)(int);

// Decompiled by BinaryAI
// SHA256: f7d653ef0c50118d698430c0967318e07d4b55e617c6baf83e625298ea29889e

/* Global variable declarations */
extern int main(int, char **);
extern void __do_global_ctors_aux(void);

/* Global variables for signal handling */
volatile int div_zero_caught = 0;
volatile int segv_caught = 0;
jmp_buf jmp_buffer;
jmp_buf segv_buffer;

/* Data references */
char DAT_000121d9[] = "Test Output\n";
char DAT_00012008[] = "%d\n";
char DAT_00012024[] = "%u\n";
char DAT_00012040[] = "%u\n";
char DAT_0001205d[] = "%u\n";
char DAT_00012079[] = "%u\n";
char DAT_000120a3[] = "%u\n";
char DAT_000120c8[] = "%u\n";
char DAT_000120ee[] = "%u\n";
char DAT_0001210e[] = "%d\n";
char DAT_0001212a[] = "%d\n";
char DAT_00012147[] = "%u\n";
char DAT_00012164[] = "%u\n";
char DAT_00012195[] = "%u\n";
char DAT_000121b2[] = "%u\n";

/* Encrypted string data */
char param_string_encryption_encrypted[32] = {0};



// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 (*(void (*)(void))0x0)();
 return;
}



// Function: <EXTERNAL>::printf @ 0x11050
/* printf is defined in stdio.h */

// Function: <EXTERNAL>::longjmp @ 0x11060
/* longjmp is defined in setjmp.h */

// Function: <EXTERNAL>::_setjmp @ 0x11070
/* _setjmp is defined in setjmp.h */

// Function: <EXTERNAL>::signal @ 0x11080
/* signal is defined in signal.h */

// Function: <EXTERNAL>::puts @ 0x11090
/* puts is defined in stdio.h */

// Function: <EXTERNAL>::strlen @ 0x110a0
/* strlen is defined in string.h */

// Function: <EXTERNAL>::strncpy @ 0x110b0
/* strncpy is defined in string.h */

// Function: FUN_000110c0 @ 0x110c0
void FUN_000110c0(void (*func_ptr)(void))
{
 (*func_ptr)();
 return;
}



// Function: __i686.get_pc_thunk.bx @ 0x110fc
void __i686_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.bx @ 0x11100
void __x86_get_pc_thunk_bx(void)
{
 return;
}

// Function: deregister_tm_clones @ 0x11110
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x11150
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x111a0
void __do_global_dtors_aux(void)
{
 uint uVar1;
 int unaff_EDI;
 if (*(char *)(unaff_EDI + 0x2e8f) == '\0') {
 if (*(int *)(unaff_EDI + 0x2e43) != 0) {
 void (*func_ptr)(void) = (void (*)(void))(*(unsigned int *)(unaff_EDI + 0x2e83));
 FUN_000110c0(func_ptr);
 }
 uVar1 = *(uint *)(unaff_EDI + 0x2e93);
 while (uVar1 < ((unaff_EDI + 0x2d6b) - (unaff_EDI + 0x2d67) >> 2) - 1U) {
 *(uint *)(unaff_EDI + 0x2e93) = uVar1 + 1;
 (*(void (*)(void))(*(unsigned int *)(unaff_EDI + 0x2d67 + (uVar1 + 1) * 4)))();
 uVar1 = *(uint *)(unaff_EDI + 0x2e93);
 }
 deregister_tm_clones();
 *(char *)(unaff_EDI + 0x2e8f) = 1;
 }
}

// Function: __x86.get_pc_thunk.dx @ 0x11239
void __x86_get_pc_thunk_dx(void)
{
}

// Function: __x86.get_pc_thunk.di @ 0x1123d
void __x86_get_pc_thunk_di(void)
{
 return;
}

// Function: param_fake_branch @ 0x11250
unsigned int param_fake_branch(unsigned int param_1)
{
 return param_1;
}

// Function: call_fake_branch @ 0x11260
unsigned int call_fake_branch(void)
{
 return 10;
}

// Function: param_opaque_predicate @ 0x11270
int param_opaque_predicate(uint param_1)
{
 uint uVar1;
 uint uVar2;
 uint uVar3;
 uint uVar4;
 int iVar5;
 uint uVar6;
 uVar6 = param_1 + 1;
 uVar1 = 0xffffffff;
 uVar4 = uVar6;
 uVar3 = param_1;
 while (uVar2 = uVar4, uVar2 != 0) {
 uVar1 = uVar2;
 uVar4 = (int)uVar3 % (int)uVar2;
 uVar3 = uVar2;
 }
 iVar5 = param_1 * 3 + 0x14;
 if ((uVar1 ^ 1 | uVar6 * uVar6 ^ (param_1 * 2 | 1) + param_1 * param_1) == 0) {
 iVar5 = param_1 * 2 + 10;
 }
 return iVar5;
}

// Function: call_opaque_predicate @ 0x112d0
unsigned int call_opaque_predicate(void)
{
 int iVar1;
 unsigned int uVar2;
 int iVar3;
 int iVar4;
 iVar1 = 5;
 iVar4 = 6;
 do {
 iVar3 = iVar4;
 iVar4 = iVar1 % iVar3;
 iVar1 = iVar3;
 } while (iVar4 != 0);
 uVar2 = 0x23;
 if (iVar3 == 1) {
 uVar2 = 0x14;
 }
 return uVar2;
}

// Function: param_instruction_substitution @ 0x11300
int param_instruction_substitution(uint param_1)
{
 return param_1 * 0x15 + (param_1 & 0xf) + (param_1 >> 1);
}

// Function: call_instruction_substitution @ 0x11320
unsigned int call_instruction_substitution(void)
{
 return 0xe1;
}

// Function: decrypt_string @ 0x11330
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

// Function: param_string_encryption @ 0x11390
int param_string_encryption(void)
{
 byte bVar1;
 size_t sVar2;
 byte *pbVar3;
 int iVar4;
 byte local_2c [31];
 char local_d;
 pbVar3 = local_2c;
 strncpy((char *)local_2c,(char *)&param_string_encryption_encrypted,0x20);
 local_d = 0;
 bVar1 = local_2c[0];
 if (local_2c[0] == 0) {
 iVar4 = 0;
 }
 else {
 do {
 *pbVar3 = bVar1 ^ 0x5a;
 bVar1 = pbVar3[1];
 pbVar3 = pbVar3 + 1;
 } while (bVar1 != 0);
 iVar4 = (int)(char)local_2c[0];
 }
 sVar2 = strlen((char *)local_2c);
 return sVar2 + iVar4;
}

// Function: call_string_encryption @ 0x11400
int call_string_encryption(void)
{
 byte bVar1;
 size_t sVar2;
 byte *pbVar3;
 int iVar4;
 byte local_2c [31];
 char local_d;
 pbVar3 = local_2c;
 strncpy((char *)local_2c,(char *)&param_string_encryption_encrypted,0x20);
 local_d = 0;
 bVar1 = local_2c[0];
 if (local_2c[0] == 0) {
 iVar4 = 0;
 }
 else {
 do {
 *pbVar3 = bVar1 ^ 0x5a;
 bVar1 = pbVar3[1];
 pbVar3 = pbVar3 + 1;
 } while (bVar1 != 0);
 iVar4 = (int)(char)local_2c[0];
 }
 sVar2 = strlen((char *)local_2c);
 return sVar2 + iVar4;
}

// Function: param_tail_call_optimized @ 0x11470
int param_tail_call_optimized(int param_1,int param_2)
{
 uint uVar1;
 longlong lVar2;
 if (0 < param_1) {
 uVar1 = param_1 - 1;
 lVar2 = (ulonglong)uVar1 * (ulonglong)(param_1 - 2);
 param_2 = (param_2 + param_1 + uVar1 * uVar1) -
 ((int)((ulonglong)lVar2 >> 0x20) << 0x1f | (uint)lVar2 >> 1);
 }
 return param_2;
}

// Function: call_tail_call_optimized @ 0x114a0
unsigned int call_tail_call_optimized(void)
{
 return 0x7a314;
}

// Function: param_non_tail_call @ 0x114b0
int param_non_tail_call(int param_1)
{
 uint uVar1;
 longlong lVar2;
 if (0 < param_1) {
 uVar1 = param_1 - 1;
 lVar2 = (ulonglong)uVar1 * (ulonglong)(param_1 - 2);
 return (uVar1 * uVar1 + param_1) - ((int)((ulonglong)lVar2 >> 0x20) << 0x1f | (uint)lVar2 >> 1);
 }
 return 0;
}

// Function: call_non_tail_call @ 0x114e0
unsigned int call_non_tail_call(void)
{
 return 0x13ba;
}

// Function: param_vectorized_loop @ 0x114f0
int param_vectorized_loop(int param_1,int param_2,int param_3,uint param_4)
{
 int iVar1;
 uint uVar2;
 uint uVar3;
 if (0 < (int)param_4) {
 uVar2 = 0;
 if (2 < param_4 - 1) {
 uVar2 = 0;
 do {
 *(int *)(param_3 + uVar2 * 4) =
 *(int *)(param_2 + uVar2 * 4) + *(int *)(param_1 + uVar2 * 4);
 *(int *)(param_3 + 4 + uVar2 * 4) =
 *(int *)(param_2 + 4 + uVar2 * 4) + *(int *)(param_1 + 4 + uVar2 * 4);
 *(int *)(param_3 + 8 + uVar2 * 4) =
 *(int *)(param_2 + 8 + uVar2 * 4) + *(int *)(param_1 + 8 + uVar2 * 4);
 *(int *)(param_3 + 0xc + uVar2 * 4) =
 *(int *)(param_2 + 0xc + uVar2 * 4) + *(int *)(param_1 + 0xc + uVar2 * 4);
 uVar2 = uVar2 + 4;
 } while ((param_4 & 0xfffffffc) != uVar2);
 }
 if ((param_4 & 3) != 0) {
 uVar3 = 0;
 do {
 *(int *)(param_3 + uVar2 * 4 + uVar3 * 4) =
 *(int *)(param_2 + uVar2 * 4 + uVar3 * 4) + *(int *)(param_1 + uVar2 * 4 + uVar3 * 4);
 uVar3 = uVar3 + 1;
 } while ((param_4 & 3) != uVar3);
 }
 if (0 < (int)param_4) {
 if (param_4 - 1 < 7) {
 uVar2 = 0;
 iVar1 = 0;
 }
 else {
 uVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_3 + uVar2 * 4) + *(int *)(param_3 + 4 + uVar2 * 4) +
 *(int *)(param_3 + 8 + uVar2 * 4) + *(int *)(param_3 + 0xc + uVar2 * 4) +
 *(int *)(param_3 + 0x10 + uVar2 * 4) + *(int *)(param_3 + 0x14 + uVar2 * 4) +
 *(int *)(param_3 + 0x18 + uVar2 * 4) + *(int *)(param_3 + 0x1c + uVar2 * 4);
 uVar2 = uVar2 + 8;
 } while ((param_4 & 0xfffffff8) != uVar2);
 }
 if ((param_4 & 7) == 0) {
 return iVar1;
 }
 uVar3 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_3 + uVar2 * 4 + uVar3 * 4);
 uVar3 = uVar3 + 1;
 } while ((param_4 & 7) != uVar3);
 return iVar1;
 }
 }
 return 0;
}

// Function: call_vectorized_loop @ 0x11610
unsigned int call_vectorized_loop(void)
{
 return 0x48;
}

// Function: param_link_time_optimization @ 0x11620
int param_link_time_optimization(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: call_link_time_optimization @ 0x11630
unsigned int call_link_time_optimization(void)
{
 return 0x14;
}

// Function: div_zero_handler @ 0x11640
void div_zero_handler(int sig)
{
 div_zero_caught = 1;
 longjmp(&jmp_buffer,1);
}

// Function: param_division_by_zero @ 0x11670
unsigned int param_division_by_zero(int param_1)
{
 int iVar1;
 signal(8,(__sighandler_t)div_zero_handler);
 iVar1 = setjmp(jmp_buffer);
 if (iVar1 != 0) {
 return 0xffffffff;
 }
 return (int)(10 / (longlong)param_1);
}

// Function: call_division_by_zero @ 0x116d0
int call_division_by_zero(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,SIG_DFL);
 return iVar2 + iVar1;
}

// Function: segv_handler @ 0x11720
void segv_handler(int sig)
{
 segv_caught = 1;
 longjmp(&segv_buffer,1);
}

// Function: param_null_pointer_deref @ 0x11750
unsigned int param_null_pointer_deref(unsigned int *param_1)
{
 int iVar1;
 signal(0xb,(__sighandler_t)segv_handler);
 iVar1 = setjmp(segv_buffer);
 if (iVar1 != 0) {
 return 0xffffffff;
 }
 return *param_1;
}

// Function: call_null_pointer_deref @ 0x117b0
int call_null_pointer_deref(void)
{
 int iVar1;
 int iVar2;
 unsigned int local_10;
 local_10 = 0x2a;
 iVar1 = param_null_pointer_deref(&local_10);
 iVar2 = param_null_pointer_deref(0);
 signal(0xb,SIG_DFL);
 return iVar2 + iVar1;
}

// Function: param_buffer_overflow_stack @ 0x11810
unsigned int param_buffer_overflow_stack(unsigned int param_1)
{
 return param_1;
}

// Function: param_buffer_overflow_heap @ 0x11820
unsigned int param_buffer_overflow_heap(unsigned int param_1)
{
 return param_1;
}

// Function: call_buffer_overflow @ 0x11830
unsigned int call_buffer_overflow(void)
{
 return 0x1e;
}

// Function: param_integer_overflow @ 0x11840
int param_integer_overflow(uint param_1,uint param_2)
{
 int iVar1;
 int iVar2;
 iVar1 = param_2 + param_1;
 if (((0 < (int)param_1) && (0 < (int)param_2)) && (iVar1 < 0)) {
 return -1;
 }
 iVar2 = -2;
 if (iVar1 < 1) {
 iVar2 = iVar1;
 }
 if (-1 < (int)(param_2 & param_1)) {
 iVar2 = iVar1;
 }
 return iVar2;
}

// Function: call_integer_overflow @ 0x11870
unsigned int call_integer_overflow(void)
{
 return 2000000000;
}

// Function: param_undefined_behavior @ 0x11880
int param_undefined_behavior(int param_1)
{
 return param_1 * 2;
}

// Function: call_undefined_behavior @ 0x11890
unsigned int call_undefined_behavior(void)
{
 return 10;
}

// Function: param_implementation_defined @ 0x118a0
unsigned int param_implementation_defined(void)
{
 return 0x2b;
}

// Function: call_implementation_defined @ 0x118b0
unsigned int call_implementation_defined(void)
{
 return 0x2b;
}

// Function: test_obf_opt_edge @ 0x118c0
void test_obf_opt_edge(void)
{
 byte bVar1;
 size_t sVar2;
 unsigned int uVar3;
 byte *pbVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 unsigned int local_30;
 char local_11;
 puts(&DAT_000121d9);
 printf(&DAT_00012008,10);
 iVar7 = 5;
 iVar6 = 6;
 do {
 iVar5 = iVar6;
 iVar6 = iVar7 % iVar5;
 iVar7 = iVar5;
 } while (iVar6 != 0);
 uVar3 = 0x23;
 if (iVar5 == 1) {
 uVar3 = 0x14;
 }
 printf(&DAT_00012024,uVar3);
 printf(&DAT_00012040,0xe1);
 strncpy((char *)&local_30,(char *)&param_string_encryption_encrypted,0x20);
 local_11 = 0;
 if ((byte)local_30 == 0) {
 iVar7 = 0;
 }
 else {
 pbVar4 = (byte *)((int)&local_30 + 1);
 bVar1 = (byte)local_30;
 do {
 pbVar4[-1] = bVar1 ^ 0x5a;
 bVar1 = *pbVar4;
 pbVar4 = pbVar4 + 1;
 } while (bVar1 != 0);
 iVar7 = (int)(char)(byte)local_30;
 }
 sVar2 = strlen((char *)&local_30);
 printf(&DAT_0001205d,sVar2 + iVar7);
 printf(&DAT_00012079,0x7a314);
 printf(&DAT_000120a3,0x13ba);
 printf(&DAT_000120c8,0x48);
 printf(&DAT_000120ee,0x14);
 iVar7 = param_division_by_zero(5);
 iVar6 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 printf(&DAT_0001210e,iVar6 + iVar7);
 local_30 = 0x2a;
 iVar7 = param_null_pointer_deref(&local_30);
 iVar6 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0x0);
 printf(&DAT_0001212a,iVar6 + iVar7);
 printf(&DAT_00012147,0x1e);
 printf(&DAT_00012164,2000000000);
 printf(&DAT_00012195,10);
 printf(&DAT_000121b2,0x2b);
 return;
}

// Function: main @ 0x11b10
int main(int argc, char **argv)
{
 test_obf_opt_edge();
 return 0;
}

// Function: __do_global_ctors_aux @ 0x11b30
void __do_global_ctors_aux(void)
{
 return;
}



