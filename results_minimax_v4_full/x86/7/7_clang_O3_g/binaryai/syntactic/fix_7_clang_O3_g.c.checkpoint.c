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
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned char byte;
typedef unsigned int uint;
typedef long long longlong;
typedef unsigned long long ulonglong;

/* Standard library type definitions */
#include <stddef.h>
#include <signal.h>
#include <setjmp.h>

typedef void (*sighandler_t)(int);
typedef void (*__sighandler_t)(int);

/* External function declarations */
extern int printf(char *__format, ...);
extern int puts(char *__s);
extern size_t strlen(char *__s);
extern char *strncpy(char *__dest, char *__src, size_t __n);
extern __sighandler_t signal(int __sig, __sighandler_t __handler);
extern void longjmp(jmp_buf __env, int __val);
extern int _setjmp(jmp_buf __env);
extern int __libc_start_main(int (*main)(int, char**, char**), int argc, char **argv, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);

/* Function forward declarations */
void deregister_tm_clones(void);

/* Missing global variables */
static int div_zero_caught;
static int segv_caught;
static jmp_buf jmp_buffer;
static jmp_buf segv_buffer;

/* External function references */
extern void frame_dummy(void);
extern void __gmon_start__(void);
extern void __do_global_ctors_aux(void);
extern int main(int argc, char **argv, char **env);

/* Data constants - defined here */
char DAT_000121d9[] = "Testing obfuscated optimizations:\n";
char DAT_00012008[] = "opaque predicate: %d\n";
char DAT_00012024[] = "instruction substitution: %u\n";
char DAT_00012040[] = "call instruction substitution: %u\n";
char DAT_0001205d[] = "string encryption: %zu\n";
char DAT_00012079[] = "tail call optimization: %u\n";
char DAT_000120a3[] = "non-tail call: %u\n";
char DAT_000120c8[] = "vectorized loop: %u\n";
char DAT_000120ee[] = "link-time optimization: %u\n";
char DAT_0001210e[] = "division by zero: %d\n";
char DAT_0001212a[] = "null pointer deref: %d\n";
char DAT_00012147[] = "buffer overflow: %u\n";
char DAT_00012164[] = "integer overflow: %d\n";
char DAT_00012195[] = "undefined behavior: %u\n";
char DAT_000121b2[] = "implementation-defined: %u\n";
char param_string_encryption_encrypted[] = "";

// Decompiled by BinaryAI
// SHA256: f7d653ef0c50118d698430c0967318e07d4b55e617c6baf83e625298ea29889e



// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x11040
// Stub - actual implementation in libc

// Function: <EXTERNAL>::printf @ 0x11050
// Stub - calls external printf from libc

// Function: <EXTERNAL>::longjmp @ 0x11060
// Stub - actual implementation in libc

// Function: <EXTERNAL>::_setjmp @ 0x11070
// Stub - actual implementation in libc

// Function: <EXTERNAL>::signal @ 0x11080
// Stub - actual implementation in libc

// Function: <EXTERNAL>::puts @ 0x11090
// Stub - calls external puts from libc

// Function: <EXTERNAL>::strlen @ 0x110a0
// Stub - calls external strlen from libc

// Function: <EXTERNAL>::strncpy @ 0x110b0
// Stub - calls external strncpy from libc

// Function: FUN_000110c0 @ 0x110c0
void FUN_000110c0(int param_1)
{
 return;
}

// Function: _start @ 0x110d0
static void _start(unsigned int param_1, unsigned int param_2)
{
 char auStack_4 [4];
 __libc_start_main(main, param_2, &auStack_4, (void (*)(void))0, (void (*)(void))0, param_1, auStack_4);
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
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x11239
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x1123d
void __x86_get_pc_thunk_di(void *ctx)
{
 // This function is used to load the GOT address into EDI
 // In a real binary, this would use inline assembly
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
void div_zero_handler(void)
{
 div_zero_caught = 1;
 longjmp(jmp_buffer,1);
}

// Function: param_division_by_zero @ 0x11670
unsigned int param_division_by_zero(int param_1)
{
 int iVar1;
 signal(8,div_zero_handler);
 iVar1 = _setjmp(jmp_buffer);
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
 signal(8,(__sighandler_t)0x0);
 return iVar2 + iVar1;
}

// Function: segv_handler @ 0x11720
void segv_handler(void)
{
 segv_caught = 1;
 longjmp(segv_buffer,1);
}

// Function: param_null_pointer_deref @ 0x11750
unsigned int param_null_pointer_deref(unsigned int *param_1)
{
 int iVar1;
 signal(0xb,segv_handler);
 iVar1 = _setjmp(segv_buffer);
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
 signal(0xb,(__sighandler_t)0x0);
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
int main(int argc, char **argv, char **env)
{
 test_obf_opt_edge();
 return 0;
}

// Function: __do_global_ctors_aux @ 0x11b30
void __do_global_ctors_aux(void)
{
 return;
}

// Function: _fini @ 0x11b7c
static void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

