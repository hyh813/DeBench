/* Auto-injected type definitions by preprocessor */
#include <setjmp.h>
#include <signal.h>

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
// int64_t is already defined in stdint.h
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef uint8_t byte;
typedef uint32_t uint;

// Missing global variables - now properly defined
char completed_0 = 0;
void *__dso_handle = 0;
int div_zero_caught = 0;
jmp_buf jmp_buffer;
int segv_caught = 0;
jmp_buf segv_buffer;
void call_weak_fn(void *);
unsigned long long main(void);
char param_string_encryption_encrypted[33] = "encrypted_string_data_here_____";

// String data definitions for format strings
char DAT_001012ad[] = "test_obf_opt_edge\n";
char *DAT_001010dc = "Value: %d\n";
char *DAT_001010f8 = "Result: %u\n";
char *DAT_00101114 = "Instruction substitution: 0x%x\n";
char *DAT_00101131 = "Decrypted length: %lu\n";
char *DAT_0010114d = "Tail call result: %lu\n";
char *DAT_00101177 = "Non-tail result: %lu\n";
char *DAT_0010119c = "Vectorized result: %lu\n";
char *DAT_001011c2 = "LTO result: %lu\n";
char *DAT_001011e2 = "Div zero caught: %u\n";
char *DAT_001011fe = "Null ptr result: %u\n";
char *DAT_0010121b = "Buffer overflow: %lu\n";
char *DAT_00101238 = "Integer overflow: %u\n";
char *DAT_00101269 = "Undefined behavior: %lu\n";
char *DAT_00101286 = "Implementation defined: 0x%lx\n";

// CONCAT44 macro for combining two 32-bit values into a 64-bit value
#define CONCAT44(high, low) (((unsigned long long)(high) << 32) | (unsigned long long)(low))

// Decompiled by BinaryAI
// SHA256: b4dd648b1713290cd5d69899bd76570fd4612930c85f66e4805943d29d928b34

// Function: _init @ 0x100710
extern void _init(void *ctx);

// Function: FUN_00100730 @ 0x100730
void FUN_00100730(void)
{
 // Null function pointer call - intentionally crashes
 return;
}

// Function: <EXTERNAL>::strlen @ 0x100750
extern size_t strlen(char *__s);

// Function: <EXTERNAL>::_setjmp @ 0x100760
extern int _setjmp(jmp_buf __env);

// inner_setjmp is now just a static inline wrapper
static int inner_setjmp(jmp_buf __env)
{
 return _setjmp(__env);
}

// Function: <EXTERNAL>::__libc_start_main @ 0x100770
extern void __libc_start_main(void *main_func, void *one, void *two, void *three, void *four, void *five);

// Function: <EXTERNAL>::__cxa_finalize @ 0x100780
extern void __cxa_finalize(void *arg);

// Function: <EXTERNAL>::signal @ 0x100790
extern __sighandler_t signal(int __sig,__sighandler_t __handler);

// Function: <EXTERNAL>::__gmon_start__ @ 0x1007a0
extern void __gmon_start__(void);

// Function: <EXTERNAL>::abort @ 0x1007b0
extern void abort(void);

// Function: <EXTERNAL>::puts @ 0x1007c0
extern int puts(char *__s);

// Function: <EXTERNAL>::longjmp @ 0x1007d0
extern void longjmp(jmp_buf __env, int __val);

// Function: <EXTERNAL>::strncpy @ 0x1007e0
extern char *strncpy(char *__dest, char *__src, size_t __n);

// Function: <EXTERNAL>::printf @ 0x1007f0
extern int printf(char *__format, ...);





// Function: deregister_tm_clones @ 0x100850
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x100880
void register_tm_clones(void)
{
 return;
}

// Function: FUN_001008bc @ 0x1008bc
void FUN_001008bc(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x1008c0
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: param_fake_branch @ 0x100914
void param_fake_branch(void)
{
 return;
}

// Function: call_fake_branch @ 0x100918
unsigned long long call_fake_branch(void)
{
 return 10;
}

// Function: param_opaque_predicate @ 0x100920
int param_opaque_predicate(int param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 iVar1 = param_1 + 1;
 iVar2 = iVar1;
 iVar4 = param_1;
 if (param_1 == -1) {
 iVar3 = -1;
 }
 else {
 do {
 iVar3 = iVar2;
 iVar2 = 0;
 if (iVar3 != 0) {
 iVar2 = iVar4 / iVar3;
 }
 iVar2 = iVar4 - iVar2 * iVar3;
 iVar4 = iVar3;
 } while (iVar2 != 0);
 }
 iVar2 = param_1 * 2 + 10;
 if (iVar3 != 1 || (param_1 * 2 | 1U) + param_1 * param_1 != iVar1 * iVar1) {
 iVar2 = param_1 * 3 + 0x14;
 }
 return iVar2;
}

// Function: call_opaque_predicate @ 0x100978
unsigned int call_opaque_predicate(void)
{
 int iVar1;
 int iVar2;
 unsigned int uVar3;
 int iVar4;
 iVar1 = 6;
 iVar4 = 5;
 do {
 iVar2 = iVar1;
 iVar1 = 0;
 if (iVar2 != 0) {
 iVar1 = iVar4 / iVar2;
 }
 iVar1 = iVar4 - iVar1 * iVar2;
 iVar4 = iVar2;
 } while (iVar1 != 0);
 uVar3 = 0x14;
 if (iVar2 != 1) {
 uVar3 = 0x23;
 }
 return uVar3;
}

// Function: param_instruction_substitution @ 0x1009a8
int param_instruction_substitution(uint param_1)
{
 return (param_1 & 0xf) + (param_1 >> 1) + param_1 * 0x15;
}

// Function: call_instruction_substitution @ 0x1009bc
unsigned long long call_instruction_substitution(void)
{
 return 0xe1;
}

// Function: decrypt_string @ 0x1009c4
byte * decrypt_string(char *param_1,byte *param_2,size_t param_3,byte param_4)
{
 byte bVar1;
 byte bVar2;
 byte *pbVar3;
 strncpy((char *)param_2,param_1,param_3);
 param_2[param_3 - 1] = 0;
 bVar2 = *param_2;
 if (bVar2 != 0) {
 pbVar3 = param_2 + 1;
 do {
 bVar1 = bVar2 ^ param_4;
 bVar2 = *pbVar3;
 pbVar3[-1] = bVar1;
 pbVar3 = pbVar3 + 1;
 } while (bVar2 != 0);
 }
 return param_2;
}

// Function: param_string_encryption @ 0x100a2c
int param_string_encryption(void)
{
 byte bVar1;
 size_t sVar2;
 byte bVar3;
 byte *pbVar4;
 uint uVar5;
 byte local_40 [31];
 char local_21;
 strncpy((char *)local_40,param_string_encryption_encrypted,0x20);
 local_21 = 0;
 if (local_40[0] == 0) {
 uVar5 = 0;
 }
 else {
 pbVar4 = (byte *)((unsigned long)local_40 | 1);
 bVar3 = local_40[0];
 do {
 bVar1 = bVar3 ^ 0x5a;
 bVar3 = *pbVar4;
 pbVar4[-1] = bVar1;
 pbVar4 = pbVar4 + 1;
 } while (bVar3 != 0);
 uVar5 = (uint)local_40[0];
 }
 sVar2 = strlen((char *)local_40);
 return (int)sVar2 + uVar5;
}

// Function: call_string_encryption @ 0x100aa4
// This is a wrapper that calls param_string_encryption
int call_string_encryption(void)
{
 return param_string_encryption();
}

// Function: param_tail_call_optimized @ 0x100b1c
int param_tail_call_optimized(int param_1,int param_2)
{
 uint uVar1;
 uVar1 = param_1 - 1;
 if (0 < param_1) {
 param_2 = (param_2 + param_1 + uVar1 * uVar1) - (int)((unsigned long)uVar1 * (unsigned long)(param_1 - 2) >> 1);
 }
 return param_2;
}

// Function: call_tail_call_optimized @ 0x100b44
unsigned long long call_tail_call_optimized(void)
{
 return 0x7a314;
}

// Function: param_non_tail_call @ 0x100b50
int param_non_tail_call(int param_1)
{
 uint uVar1;
 uVar1 = param_1 - 1;
 if (0 < param_1) {
 return (param_1 + uVar1 * uVar1) - (int)((unsigned long)uVar1 * (unsigned long)(param_1 - 2) >> 1);
 }
 return 0;
}

// Function: call_non_tail_call @ 0x100b78
unsigned long long call_non_tail_call(void)
{
 return 0x13ba;
}

// Function: param_vectorized_loop @ 0x100b80
int param_vectorized_loop(unsigned long param_1,unsigned long param_2,unsigned long param_3,uint param_4)
{
 unsigned long long *puVar1;
 unsigned long long *puVar2;
 unsigned long uVar3;
 unsigned long uVar4;
 long lVar5;
 unsigned long uVar6;
 unsigned long long *puVar7;
 int *piVar8;
 unsigned long long *puVar9;
 int *piVar10;
 unsigned long long *puVar11;
 long lVar12;
 int *piVar13;
 int iVar14;
 unsigned long long uVar15;
 int iVar16;
 int iVar17;
 int iVar18;
 int iVar19;
 unsigned long long uVar20;
 int iVar21;
 int iVar22;
 unsigned long long uVar23;
 int iVar24;
 unsigned long long uVar25;
 unsigned long long uVar26;
 unsigned long long uVar27;
 if ((int)param_4 < 1) {
 return 0;
 }
 uVar3 = (unsigned long)param_4;
 if (param_4 < 8) {
 uVar4 = 0;
 }
 else {
 lVar5 = uVar3 * 4;
 uVar4 = 0;
 if ((param_1 + lVar5 <= param_3 || param_3 + lVar5 <= param_1) &&
 (param_2 + lVar5 <= param_3 || param_3 + lVar5 <= param_2)) {
 uVar4 = uVar3 & 0xfffffff8;
 puVar7 = (unsigned long long *)(param_1 + 0x10);
 puVar9 = (unsigned long long *)(param_2 + 0x10);
 puVar11 = (unsigned long long *)(param_3 + 0x10);
 uVar6 = uVar4;
 do {
 puVar1 = puVar7 + -1;
 uVar15 = puVar7[-2];
 uVar23 = puVar7[1];
 uVar20 = *puVar7;
 puVar7 = puVar7 + 4;
 uVar6 = uVar6 - 8;
 puVar2 = puVar9 + -1;
 uVar25 = puVar9[-2];
 uVar27 = puVar9[1];
 uVar26 = *puVar9;
 puVar9 = puVar9 + 4;
 puVar11[-1] = CONCAT44((int)((unsigned long)*puVar2 >> 0x20) + (int)((unsigned long)*puVar1 >> 0x20),
 (int)*puVar2 + (int)*puVar1);
 puVar11[-2] = CONCAT44((int)((unsigned long)uVar25 >> 0x20) + (int)((unsigned long)uVar15 >> 0x20),
 (int)uVar25 + (int)uVar15);
 puVar11[1] = CONCAT44((int)((unsigned long)uVar27 >> 0x20) + (int)((unsigned long)uVar23 >> 0x20),
 (int)uVar27 + (int)uVar23);
 *puVar11 = CONCAT44((int)((unsigned long)uVar26 >> 0x20) + (int)((unsigned long)uVar20 >> 0x20),
 (int)uVar26 + (int)uVar20);
 puVar11 = puVar11 + 4;
 } while (uVar6 != 0);
 if (uVar4 == uVar3) goto LAB_00100c50;
 }
 }
 lVar12 = uVar4 * 4;
 lVar5 = uVar3 - uVar4;
 piVar8 = (int *)(param_3 + lVar12);
 piVar10 = (int *)(param_2 + lVar12);
 piVar13 = (int *)(param_1 + lVar12);
 do {
 lVar5 = lVar5 + -1;
 *piVar8 = *piVar10 + *piVar13;
 piVar8 = piVar8 + 1;
 piVar10 = piVar10 + 1;
 piVar13 = piVar13 + 1;
 } while (lVar5 != 0);
LAB_00100c50:
 if ((int)param_4 < 1) {
 return 0;
 }
 if (param_4 < 8) {
 uVar6 = 0;
 iVar14 = 0;
 }
 else {
 uVar6 = uVar3 & 0xfffffff8;
 puVar7 = (unsigned long long *)(param_3 + 0x10);
 iVar14 = 0;
 iVar16 = 0;
 iVar17 = 0;
 iVar18 = 0;
 iVar19 = 0;
 iVar21 = 0;
 iVar22 = 0;
 iVar24 = 0;
 uVar4 = uVar6;
 do {
 puVar9 = puVar7 + -2;
 puVar11 = puVar7 + -1;
 puVar1 = puVar7 + 1;
 uVar15 = *puVar7;
 puVar7 = puVar7 + 4;
 uVar4 = uVar4 - 8;
 iVar14 = (int)*puVar9 + iVar14;
 iVar16 = (int)((unsigned long)*puVar9 >> 0x20) + iVar16;
 iVar17 = (int)*puVar11 + iVar17;
 iVar18 = (int)((unsigned long)*puVar11 >> 0x20) + iVar18;
 iVar19 = (int)uVar15 + iVar19;
 iVar21 = (int)((unsigned long)uVar15 >> 0x20) + iVar21;
 iVar22 = (int)*puVar1 + iVar22;
 iVar24 = (int)((unsigned long)*puVar1 >> 0x20) + iVar24;
 } while (uVar4 != 0);
 iVar14 = iVar19 + iVar14 + iVar21 + iVar16 + iVar22 + iVar17 + iVar24 + iVar18;
 if (uVar6 == uVar3) {
 return iVar14;
 }
 }
 lVar5 = uVar3 - uVar6;
 piVar8 = (int *)(param_3 + uVar6 * 4);
 do {
 lVar5 = lVar5 + -1;
 iVar14 = *piVar8 + iVar14;
 piVar8 = piVar8 + 1;
 } while (lVar5 != 0);
 return iVar14;
}

// Function: call_vectorized_loop @ 0x100cd0
unsigned long long call_vectorized_loop(void)
{
 return 0x48;
}

// Function: param_link_time_optimization @ 0x100cd8
int param_link_time_optimization(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: call_link_time_optimization @ 0x100ce4
unsigned long long call_link_time_optimization(void)
{
 return 0x14;
}

// Function: div_zero_handler @ 0x100cec
void div_zero_handler(int sig)
{
 (void)sig;
 div_zero_caught = 1;
 longjmp(jmp_buffer,1);
}

// Function: param_division_by_zero @ 0x100d10
int param_division_by_zero(int param_1)
{
 int iVar1;
 signal(8,div_zero_handler);
 iVar1 = _setjmp(jmp_buffer);
 if (iVar1 == 0) {
 iVar1 = 0;
 if (param_1 != 0) {
 iVar1 = 10 / param_1;
 }
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}

// Function: call_division_by_zero @ 0x100d5c
int call_division_by_zero(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 return iVar2 + iVar1;
}

// Function: segv_handler @ 0x100d9c
void segv_handler(int sig)
{
 (void)sig;
 segv_caught = 1;
 longjmp(segv_buffer,1);
}

// Function: param_null_pointer_deref @ 0x100dc0
unsigned int param_null_pointer_deref(unsigned int *param_1)
{
 int iVar1;
 unsigned int uVar2;
 signal(0xb,segv_handler);
 iVar1 = _setjmp(segv_buffer);
 if (iVar1 == 0) {
 uVar2 = *param_1;
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_null_pointer_deref @ 0x100e08
int call_null_pointer_deref(void)
{
 int iVar1;
 int iVar2;
 unsigned int local_24;
 local_24 = 0x2a;
 iVar1 = param_null_pointer_deref(&local_24);
 iVar2 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0x0);
 return iVar2 + iVar1;
}

// Function: param_buffer_overflow_stack @ 0x100e58
void param_buffer_overflow_stack(void)
{
 return;
}

// Function: param_buffer_overflow_heap @ 0x100e5c
void param_buffer_overflow_heap(void)
{
 return;
}

// Function: call_buffer_overflow @ 0x100e60
unsigned long long call_buffer_overflow(void)
{
 return 0x1e;
}

// Function: param_integer_overflow @ 0x100e68
int param_integer_overflow(uint param_1,uint param_2)
{
 int iVar1;
 int iVar2;
 iVar1 = param_2 + param_1;
 if (((0 < (int)param_1) && (0 < (int)param_2)) && (iVar1 < 0)) {
 return -1;
 }
 iVar2 = -2;
 if (iVar1 < 1 || -1 < (int)(param_2 & param_1)) {
 iVar2 = iVar1;
 }
 return iVar2;
}

// Function: call_integer_overflow @ 0x100ea0
unsigned long long call_integer_overflow(void)
{
 return 2000000000;
}

// Function: param_undefined_behavior @ 0x100eac
int param_undefined_behavior(int param_1)
{
 return param_1 << 1;
}

// Function: call_undefined_behavior @ 0x100eb4
unsigned long long call_undefined_behavior(void)
{
 return 10;
}

// Function: param_implementation_defined @ 0x100ebc
unsigned long long param_implementation_defined(void)
{
 return 0x30;
}

// Function: call_implementation_defined @ 0x100ec4
unsigned long long call_implementation_defined(void)
{
 return 0x30;
}

// Function: test_obf_opt_edge @ 0x100ecc
int test_obf_opt_edge(void)
{
 byte bVar1;
 int iVar2;
 int iVar3;
 size_t sVar4;
 int iVar5;
 uint uVar6;
 byte *pbVar7;
 uint local_40 [7];
 char local_21;
 puts(DAT_001012ad);
 printf(DAT_001010dc,10);
 iVar2 = 6;
 iVar3 = 5;
 do {
 iVar5 = iVar2;
 iVar2 = 0;
 if (iVar5 != 0) {
 iVar2 = iVar3 / iVar5;
 }
 iVar2 = iVar3 - iVar2 * iVar5;
 iVar3 = iVar5;
 } while (iVar2 != 0);
 uVar6 = 0x14;
 if (iVar5 != 1) {
 uVar6 = 0x23;
 }
 printf(DAT_001010f8,(unsigned long)uVar6);
 printf(DAT_00101114,0xe1);
 strncpy((char *)local_40,param_string_encryption_encrypted,0x20);
 uVar6 = local_40[0] & 0xff;
 local_21 = 0;
 if ((char)local_40[0] == '\0') {
 local_40[0] = 0;
 }
 else {
 pbVar7 = (byte *)((unsigned long)local_40 | 1);
 do {
 bVar1 = (byte)uVar6;
 uVar6 = (uint)*pbVar7;
 pbVar7[-1] = bVar1 ^ 0x5a;
 pbVar7 = pbVar7 + 1;
 } while (uVar6 != 0);
 local_40[0] = local_40[0] & 0xff;
 }
 sVar4 = strlen((char *)local_40);
 printf(DAT_00101131,(unsigned long)((int)sVar4 + local_40[0]));
 printf(DAT_0010114d,0x7a314);
 printf(DAT_00101177,0x13ba);
 printf(DAT_0010119c,0x48);
 printf(DAT_001011c2,0x14);
 iVar2 = param_division_by_zero(5);
 iVar3 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 printf(DAT_001011e2,(unsigned long)(uint)(iVar3 + iVar2));
 local_40[0] = 0x2a;
 iVar2 = param_null_pointer_deref(local_40);
 iVar3 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0x0);
 printf(DAT_001011fe,(unsigned long)(uint)(iVar3 + iVar2));
 printf(DAT_0010121b,0x1e);
 printf(DAT_00101238,2000000000);
 printf(DAT_00101269,10);
 iVar2 = printf(DAT_00101286,0x30);
 return iVar2;
}

// Function: main @ 0x1010ac
unsigned long long main(void)
{
 test_obf_opt_edge();
 return 0;
}

// Function: _fini @ 0x1010c4
extern void _fini(void);

