#include <stdio.h>
#include <string.h>
#include <signal.h>
#include <setjmp.h>

/* Signal constants */
#ifndef SIGFPE
#define SIGFPE 8
#endif
#ifndef SIGSEGV
#define SIGSEGV 11
#endif

/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned char byte;
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

/* Additional type definitions for signal/jmp handling */
/* __sighandler_t and jmp_buf are defined in signal.h and setjmp.h */

/* Global variables */
int div_zero_caught = 0;
int segv_caught = 0;
jmp_buf jmp_buffer;
jmp_buf segv_buffer;

/* External function declarations */
extern int __x86_get_pc_thunk_di(void);
extern int __x86_get_pc_thunk_bx(void);
extern int main(void);
extern void __gmon_start__(void) __attribute__((weak));
extern void frame_dummy(void) __attribute__((weak));
extern void __do_global_ctors_aux(void) __attribute__((weak));

extern int __libc_start_main(int (*main)(int, char **, char **), int argc, void *ubp_start, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
extern void __do_global_dtors_aux(void) __attribute__((weak));

/* Standard library function declarations */
extern int printf(const char *format, ...);
extern int puts(const char *s);
extern size_t strlen(const char *s);
extern char *strncpy(char *dest, const char *src, size_t n);
extern __sighandler_t signal(int sig, __sighandler_t handler);
extern int setjmp(jmp_buf env);
extern void longjmp(jmp_buf env, int val);



/* External data declarations */
extern int DAT_00012028[];
extern int DAT_00012008[];
extern char DAT_00012219[];
extern char DAT_00012048[];
extern char DAT_00012064[];
extern char DAT_00012080[];
extern char DAT_0001209d[];
extern char DAT_000120b9[];
extern char DAT_000120e3[];
extern char DAT_00012108[];
extern char DAT_0001212e[];
extern char DAT_0001214e[];
extern char DAT_0001216a[];
extern char DAT_00012187[];
extern char DAT_000121a4[];
extern char DAT_000121d5[];
extern char DAT_000121f2[];
extern byte param_string_encryption_encrypted[];

// Decompiled by BinaryAI
// SHA256: d70ebdb9b4a09d146c20c3aafa43e96f686981fa7699831519762f185e7040a1

// Function: _init @ 0x11000
void _init(void)
{
 __gmon_start__();
 frame_dummy();
 __do_global_ctors_aux();
 return;
}

// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 return;
}

















// Function: FUN_000110c0 @ 0x110c0
void FUN_000110c0(unsigned int param_1)
{
 (void)param_1;
 return;
}

// Function: _start @ 0x110d0
void _start(unsigned int param_1,unsigned int param_2)
{
 char auStack_4 [4];
 __libc_start_main(main,param_2,auStack_4,0,0,param_1,auStack_4);
 do {
 } while( true );
}

// Function: __i686.get_pc_thunk.bx @ 0x110fc
int __i686_get_pc_thunk_bx(void)
{
 return 0;
}

// Function: __x86.get_pc_thunk.bx @ 0x11100
int __x86_get_pc_thunk_bx(void)
{
 return 0;
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
 unaff_EDI = __x86_get_pc_thunk_di();
 if (*(char *)(unaff_EDI + 0x2e8f) == '\0') {
 if (*(int *)(unaff_EDI + 0x2e43) != 0) {
 FUN_000110c0(*(unsigned int *)(unaff_EDI + 0x2e83));
 }
 uVar1 = *(uint *)(unaff_EDI + 0x2e93);
 while (uVar1 < ((unaff_EDI + 0x2d6b) - (unaff_EDI + 0x2d67) >> 2) - 1U) {
 *(uint *)(unaff_EDI + 0x2e93) = uVar1 + 1;
 ((void (*)(void))**(void **)(unaff_EDI + 0x2d67 + (uVar1 + 1) * 4))();
 uVar1 = *(uint *)(unaff_EDI + 0x2e93);
 }
 deregister_tm_clones();
 *(char *)(unaff_EDI + 0x2e8f) = 1;
 }
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x11239
int __x86_get_pc_thunk_dx(void)
{
 return 0;
}

// Function: __x86.get_pc_thunk.di @ 0x1123d
int __x86_get_pc_thunk_di(void)
{
 return 0;
}

// Function: param_fake_branch @ 0x11244
unsigned int param_fake_branch(unsigned int param_1)
{
 return param_1;
}

// Function: call_fake_branch @ 0x11249
unsigned int call_fake_branch(void)
{
 return 10;
}

// Function: param_opaque_predicate @ 0x1124f
int param_opaque_predicate(uint param_1)
{
 uint uVar1;
 int iVar2;
 uint uVar3;
 uint uVar4;
 uint uVar5;
 uVar5 = param_1 + 1;
 uVar1 = param_1;
 uVar3 = uVar5;
 if (uVar5 == 0) {
 uVar4 = 0xffffffff;
 }
 else {
 do {
 uVar4 = uVar3;
 uVar3 = (int)uVar1 % (int)uVar4;
 uVar1 = uVar4;
 } while (uVar3 != 0);
 }
 iVar2 = param_1 * 3 + 0x14;
 if ((uVar4 ^ 1 | uVar5 * uVar5 ^ (param_1 * 2 | 1) + param_1 * param_1) == 0) {
 iVar2 = param_1 * 2 + 10;
 }
 return iVar2;
}

// Function: call_opaque_predicate @ 0x11298
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

// Function: param_instruction_substitution @ 0x112be
int param_instruction_substitution(uint param_1)
{
 return param_1 * 0x15 + (param_1 & 0xf) + (param_1 >> 1);
}

// Function: call_instruction_substitution @ 0x112d4
unsigned int call_instruction_substitution(void)
{
 return 0xe1;
}

// Function: decrypt_string @ 0x112da
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

// Function: param_string_encryption @ 0x11326
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

// Function: call_string_encryption @ 0x11388
void call_string_encryption(void)
{
 param_string_encryption();
 return;
}

// Function: param_tail_call_optimized @ 0x113a2
int param_tail_call_optimized(int param_1,int param_2)
{
 uint uVar1;
 long long lVar2;
 if (0 < param_1) {
 uVar1 = param_1 - 1;
 lVar2 = (unsigned long long)uVar1 * (unsigned long long)(param_1 - 2);
 param_2 = (param_2 + param_1 + uVar1 * uVar1) -
 ((int)((unsigned long long)lVar2 >> 0x20) << 0x1f | (uint)lVar2 >> 1);
 }
 return param_2;
}

// Function: call_tail_call_optimized @ 0x113cc
unsigned int call_tail_call_optimized(void)
{
 return 0x7a314;
}

// Function: param_non_tail_call @ 0x113d2
int param_non_tail_call(int param_1)
{
 uint uVar1;
 long long lVar2;
 int iVar3;
 if (param_1 < 1) {
 iVar3 = 0;
 }
 else {
 uVar1 = param_1 - 1;
 lVar2 = (unsigned long long)uVar1 * (unsigned long long)(param_1 - 2);
 iVar3 = (uVar1 * uVar1 + param_1) - ((int)((unsigned long long)lVar2 >> 0x20) << 0x1f | (uint)lVar2 >> 1)
 ;
 }
 return iVar3;
}

// Function: call_non_tail_call @ 0x113f8
unsigned int call_non_tail_call(void)
{
 return 0x13ba;
}

// Function: param_vectorized_loop @ 0x113fe
int param_vectorized_loop(int param_1,int param_2,int param_3,int param_4)
{
 int iVar1;
 int iVar2;
 if (0 < param_4) {
 iVar2 = 0;
 do {
 *(int *)(param_3 + iVar2 * 4) = *(int *)(param_2 + iVar2 * 4) + *(int *)(param_1 + iVar2 * 4);
 iVar2 = iVar2 + 1;
 } while (param_4 != iVar2);
 if (0 < param_4) {
 iVar1 = 0;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *(int *)(param_3 + iVar1 * 4);
 iVar1 = iVar1 + 1;
 } while (param_4 != iVar1);
 return iVar2;
 }
 }
 return 0;
}

// Function: call_vectorized_loop @ 0x1143d
int call_vectorized_loop(void)
{
 int iVar1;
 int *piVar2;
 int iVar3;
 int *piVar4;
 int local_24 [8];
 iVar1 = 0;
 local_24[7] = 0;
 local_24[6] = 0;
 local_24[5] = 0;
 local_24[4] = 0;
 local_24[3] = 0;
 local_24[2] = 0;
 local_24[1] = 0;
 local_24[0] = 0;
 piVar2 = &DAT_00012028;
 piVar4 = &DAT_00012008;
 do {
 local_24[iVar1] = *piVar2 + *piVar4;
 iVar1 = iVar1 + 1;
 piVar2 = piVar2 + 1;
 piVar4 = piVar4 + 1;
 } while (iVar1 != 8);
 iVar3 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + local_24[iVar3];
 iVar3 = iVar3 + 1;
 } while (iVar3 != 8);
 return iVar1;
}

// Function: param_link_time_optimization @ 0x1149f
int param_link_time_optimization(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: call_link_time_optimization @ 0x114a9
unsigned int call_link_time_optimization(void)
{
 return 0x14;
}

// Function: div_zero_handler @ 0x114af
void div_zero_handler(int __sig)
{
 div_zero_caught = 1;
 longjmp(jmp_buffer,1);
}



// Function: param_division_by_zero @ 0x114d8
unsigned int param_division_by_zero(int param_1)
{
 int iVar1;
 unsigned int uVar2;
 signal(SIGFPE,div_zero_handler);
 iVar1 = setjmp(jmp_buffer);
 if (iVar1 == 0) {
 uVar2 = (unsigned int)(10 / param_1);
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_division_by_zero @ 0x11526
int call_division_by_zero(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(SIGFPE, NULL);
 return iVar2 + iVar1;
}

// Function: segv_handler @ 0x1156f
void segv_handler(int __sig)
{
 segv_caught = 1;
 longjmp(segv_buffer,1);
}

// Function: param_null_pointer_deref @ 0x11598
unsigned int param_null_pointer_deref(unsigned int *param_1)
{
 int iVar1;
 unsigned int uVar2;
 signal(SIGSEGV,segv_handler);
 iVar1 = setjmp(segv_buffer);
 if (iVar1 == 0) {
 uVar2 = *param_1;
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_null_pointer_deref @ 0x115e1
int call_null_pointer_deref(void)
{
 int iVar1;
 int iVar2;
 unsigned int local_14;
 local_14 = 0x2a;
 iVar1 = param_null_pointer_deref(&local_14);
 iVar2 = param_null_pointer_deref(0);
 signal(SIGSEGV, NULL);
 return iVar2 + iVar1;
}

// Function: param_buffer_overflow_stack @ 0x11630
unsigned int param_buffer_overflow_stack(unsigned int param_1)
{
 return param_1;
}

// Function: param_buffer_overflow_heap @ 0x11635
unsigned int param_buffer_overflow_heap(unsigned int param_1)
{
 return param_1;
}

// Function: call_buffer_overflow @ 0x1163a
unsigned int call_buffer_overflow(void)
{
 return 0x1e;
}

// Function: param_integer_overflow @ 0x11640
int param_integer_overflow(uint param_1,uint param_2)
{
 int iVar1;
 int iVar2;
 iVar1 = param_2 + param_1;
 if ((((int)param_1 < 1) || ((int)param_2 < 1)) || (-1 < iVar1)) {
 iVar2 = -2;
 if (iVar1 < 1) {
 iVar2 = iVar1;
 }
 if (-1 < (int)(param_2 & param_1)) {
 iVar2 = iVar1;
 }
 }
 else {
 iVar2 = -1;
 }
 return iVar2;
}

// Function: call_integer_overflow @ 0x1166e
unsigned int call_integer_overflow(void)
{
 return 2000000000;
}

// Function: param_undefined_behavior @ 0x11674
int param_undefined_behavior(int param_1)
{
 return param_1 * 2;
}

// Function: call_undefined_behavior @ 0x1167b
unsigned int call_undefined_behavior(void)
{
 return 10;
}

// Function: param_implementation_defined @ 0x11681
unsigned int param_implementation_defined(void)
{
 return 0x2b;
}

// Function: call_implementation_defined @ 0x11687
unsigned int call_implementation_defined(void)
{
 return 0x2b;
}

// Function: test_obf_opt_edge @ 0x1168d
void test_obf_opt_edge(void)
{
 int iVar1;
 unsigned int uVar2;
 int *piVar3;
 int iVar4;
 int iVar5;
 int *piVar6;
 int local_28 [8];
 puts(&DAT_00012219);
 printf(&DAT_00012048,10);
 iVar1 = 5;
 iVar5 = 6;
 do {
 iVar4 = iVar5;
 iVar5 = iVar1 % iVar4;
 iVar1 = iVar4;
 } while (iVar5 != 0);
 uVar2 = 0x23;
 if (iVar4 == 1) {
 uVar2 = 0x14;
 }
 printf(&DAT_00012064,uVar2);
 printf(&DAT_00012080,0xe1);
 uVar2 = param_string_encryption();
 printf(&DAT_0001209d,uVar2);
 printf(&DAT_000120b9,0x7a314);
 printf(&DAT_000120e3,0x13ba);
 iVar1 = 0;
 local_28[7] = 0;
 local_28[6] = 0;
 local_28[5] = 0;
 local_28[4] = 0;
 local_28[3] = 0;
 local_28[2] = 0;
 local_28[1] = 0;
 local_28[0] = 0;
 piVar3 = &DAT_00012028;
 piVar6 = &DAT_00012008;
 do {
 local_28[iVar1] = *piVar3 + *piVar6;
 iVar1 = iVar1 + 1;
 piVar3 = piVar3 + 1;
 piVar6 = piVar6 + 1;
 } while (iVar1 != 8);
 iVar5 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + local_28[iVar5];
 iVar5 = iVar5 + 1;
 } while (iVar5 != 8);
 printf(&DAT_00012108,iVar1);
 printf(&DAT_0001212e,0x14);
 uVar2 = call_division_by_zero();
 printf(&DAT_0001214e,uVar2);
 uVar2 = call_null_pointer_deref();
 printf(&DAT_0001216a,uVar2);
 printf(&DAT_00012187,0x1e);
 printf(&DAT_000121a4,2000000000);
 printf(&DAT_000121d5,10);
 printf(&DAT_000121f2,0x2b);
 return;
}

// Function: main @ 0x11856
unsigned int main(void)
{
 test_obf_opt_edge();
 return 0;
}

// Function: __do_global_ctors_aux @ 0x11880
void __do_global_ctors_aux(void)
{
 return;
}

// Function: _fini @ 0x118cc
void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

