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
typedef unsigned int uint;
typedef unsigned long long undefined8;
typedef unsigned char undefined1;
typedef unsigned long ulong;

/* Required type definitions for signal.h and setjmp.h */
typedef void (*__sighandler_t)(int);

/* jmp_buf definition */
struct __jmp_buf_tag {
    long __jb[22];
    long __fl;
    long __ss[128];
    long __r;
    long __sp;
    long __lr;
    long __fp;
    long __pc;
    long __v1;
    long __v2;
    long __v3;
    long __v4;
    long __v5;
    long __v6;
    long __v7;
    long __v8;
    long __v9;
    long __v10;
    long __v11;
    long __v12;
    long __v13;
    long __v14;
    long __v15;
    long __v16;
    long __ra;
};
typedef struct __jmp_buf_tag jmp_buf[1];
typedef struct __jmp_buf_tag __jmp_buf_tag;

/* Global variables for signal handlers */
int div_zero_caught = 0;
int segv_caught = 0;
jmp_buf jmp_buffer;
jmp_buf segv_buffer;

/* CRT global variable */
char completed_0 = 0;

/* String constants from binary */
extern const char DAT_001012b9[];
extern const char DAT_001010e8[];
extern const char DAT_00101104[];
extern const char DAT_00101120[];
extern const char DAT_0010113d[];
extern const char DAT_00101159[];
extern const char DAT_00101183[];
extern const char DAT_001011a8[];
extern const char DAT_001011ce[];
extern const char DAT_001011ee[];
extern const char DAT_0010120a[];
extern const char DAT_00101227[];
extern const char DAT_00101244[];
extern const char DAT_00101275[];
extern const char DAT_00101292[];

/* String constant definitions from binary data section */
const char DAT_001012b9[] = "Running obfuscated optimizations test:\n";
const char DAT_001010e8[] = "Opaque predicate test: %d\n";
const char DAT_00101104[] = "Instruction substitution result: %d\n";
const char DAT_00101120[] = "Instruction substitution x=100 result: %d\n";
const char DAT_0010113d[] = "String encryption test: length=%d, first_byte=%d\n";
const char DAT_00101159[] = "Tail call optimization result: %d\n";
const char DAT_00101183[] = "Non-tail call result: %d\n";
const char DAT_001011a8[] = "Vectorized loop result: %d\n";
const char DAT_001011ce[] = "LTO result: %d\n";
const char DAT_001011ee[] = "Division by zero test: %d\n";
const char DAT_0010120a[] = "Null pointer deref test: %d\n";
const char DAT_00101227[] = "Buffer overflow result: %d\n";
const char DAT_00101244[] = "Integer overflow result: %d\n";
const char DAT_00101275[] = "Undefined behavior result: %d\n";
const char DAT_00101292[] = "Implementation-defined result: %d\n";

/* Encrypted string for string encryption test */
static const char param_string_encryption_data[] = "\x3f\x28\x38\x7c\x28\x3c\x0e\x2e\x20\x0e\x32\x2c\x20\x36\x32\x2c\x32\x36\x22\x2e\x38\x26\x20\x3a\x28\x32\x2c\x20\x32\x3c\x26\x3c";

/* Standard library functions */
extern int puts(const char *);
extern int printf(const char *, ...);

/* Global variables needed by CRT stub functions */
extern char completed_0;
extern void *__dso_handle;

/* External declarations for CRT functions */
extern void __cxa_finalize(void *);
extern int signal(int, __sighandler_t);
extern void longjmp(jmp_buf, int);
extern int _setjmp(jmp_buf);

/* Required for CRT stub functions */
extern void deregister_tm_clones(void);

/* Stub implementation - CRT function removed by preprocessor but called */
void deregister_tm_clones(void)
{
    /* Empty stub - original function removed by preprocessor */
}

/* Standard library functions */
extern char *strncpy(char *, const char *, size_t);
extern size_t strlen(const char *);

/* Ghidra macro for combining two 32-bit values into a 64-bit value */
#define CONCAT44(hi, lo) (((uint64_t)(hi) << 32) | (uint32_t)(lo))

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/7/7_clang_O3_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00100730 @ 00100730 */

void FUN_00100730(void)

{
 (*(void (*)())0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_001008bc @ 001008bc */

void FUN_001008bc(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_fake_branch @ 00100914 */

int param_fake_branch(int x)

{
 /* Unresolved local var: int result@[DW_OP_reg0(x0)]
 Unresolved local var: char * str@[???] */
 return x;
}



/* Function: call_fake_branch @ 00100918 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fake_branch(void)

{
 return 10;
}



/* Function: param_opaque_predicate @ 00100920 */

int param_opaque_predicate(int x)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 
 /* Unresolved local var: int b@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int p3@[???]
 Unresolved local var: int p1@[???]
 Unresolved local var: int p2@[???] */
 iVar1 = x + 1;
 iVar3 = x;
 iVar2 = iVar1;
 if (x == -1) {
 iVar4 = -1;
 }
 else {
 do {
 iVar4 = iVar2;
 /* Unresolved local var: int temp@[DW_OP_reg10(x10)] */
 iVar2 = 0;
 if (iVar4 != 0) {
 iVar2 = iVar3 / iVar4;
 }
 iVar2 = iVar3 - iVar2 * iVar4;
 iVar3 = iVar4;
 } while (iVar2 != 0);
 }
 iVar2 = x * 2 + 10;
 if (iVar4 != 1 || (x * 2 | 1U) + x * x != iVar1 * iVar1) {
 iVar2 = x * 3 + 0x14;
 }
 return iVar2;
}



/* Function: call_opaque_predicate @ 00100978 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_opaque_predicate(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 iVar2 = 6;
 iVar3 = 5;
 do {
 iVar1 = iVar2;
 /* Unresolved local var: int b@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int p1@[???]
 Unresolved local var: int p3@[???]
 Unresolved local var: int temp@[DW_OP_reg10(x10)] */
 iVar2 = 0;
 if (iVar1 != 0) {
 iVar2 = iVar3 / iVar1;
 }
 iVar2 = iVar3 - iVar2 * iVar1;
 iVar3 = iVar1;
 } while (iVar2 != 0);
 iVar2 = 0x14;
 if (iVar1 != 1) {
 iVar2 = 0x23;
 }
 return iVar2;
}



/* Function: param_instruction_substitution @ 001009a8 */

int param_instruction_substitution(int x)

{
 /* Unresolved local var: int result@[DW_OP_breg0(x0): 0; DW_OP_lit6; DW_OP_mul;
 DW_OP_stack_value]
 Unresolved local var: uint ux@[DW_OP_reg0(x0)]
 Unresolved local var: int mul15@[???]
 Unresolved local var: int mod16@[???]
 Unresolved local var: int div2@[???] */
 return (x & 0xfU) + ((uint)x >> 1) + x * 0x15;
}



/* Function: call_instruction_substitution @ 001009bc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_instruction_substitution(void)

{
 return 0xe1;
}



/* Function: decrypt_string @ 001009c4 */

char * decrypt_string(char *encrypted,char *buffer,size_t len,char key)

{
 byte bVar1;
 byte bVar2;
 byte *pbVar3;
 
 /* Unresolved local var: char * p@[???] */
 strncpy(buffer,encrypted,len);
 buffer[len - 1] = '\0';
 bVar1 = *buffer;
 pbVar3 = (byte *)buffer;
 while (bVar1 != 0) {
 bVar2 = bVar1 ^ key;
 bVar1 = pbVar3[1];
 *pbVar3 = bVar2;
 pbVar3 = pbVar3 + 1;
 }
 return buffer;
}



/* Function: param_string_encryption @ 00100a2c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_string_encryption(void)

{
 byte bVar1;
 size_t sVar2;
 byte bVar3;
 byte *pbVar4;
 uint uVar5;
 byte local_40 [31];
 undefined1 local_21;
 
 /* Unresolved local var: char[32] decrypted@[DW_OP_breg31(sp): 0] */
 /* Unresolved local var: char * p@[???] */
 strncpy((char *)local_40,param_string_encryption_data,0x20);
 local_21 = 0;
 if (local_40[0] == 0) {
 uVar5 = 0;
 }
 else {
 pbVar4 = (byte *)((ulong)local_40 | 1);
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



/* Function: call_string_encryption @ 00100aa4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_encryption(void)

{
 byte bVar1;
 size_t sVar2;
 byte bVar3;
 byte *pbVar4;
 uint uVar5;
 byte local_40 [31];
 undefined1 local_21;
 
 /* Unresolved local var: char[32] decrypted@[DW_OP_breg31(sp): 0]
 Unresolved local var: char * p@[???] */
 strncpy((char *)local_40,param_string_encryption_data,0x20);
 local_21 = 0;
 if (local_40[0] == 0) {
 uVar5 = 0;
 }
 else {
 pbVar4 = (byte *)((ulong)local_40 | 1);
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



/* Function: param_tail_call_optimized @ 00100b1c */

int param_tail_call_optimized(int n,int acc)

{
 uint uVar1;
 
 uVar1 = n - 1;
 if (0 < n) {
 acc = (acc + n + uVar1 * uVar1) - (int)((ulong)uVar1 * (ulong)(n - 2) >> 1);
 }
 return acc;
}



/* Function: call_tail_call_optimized @ 00100b44 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_tail_call_optimized(void)

{
 return 0x7a314;
}



/* Function: param_non_tail_call @ 00100b50 */

int param_non_tail_call(int n)

{
 uint uVar1;
 
 uVar1 = n - 1;
 if (0 < n) {
 return (n + uVar1 * uVar1) - (int)((ulong)uVar1 * (ulong)(n - 2) >> 1);
 }
 return 0;
}



/* Function: call_non_tail_call @ 00100b78 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_non_tail_call(void)

{
 return 0x13ba;
}



/* Function: param_vectorized_loop @ 00100b80 */

int param_vectorized_loop(int *a,int *b,int *c,int n)

{
 int *piVar1;
 int *piVar2;
 ulong uVar3;
 ulong uVar4;
 long lVar5;
 ulong uVar6;
 int *piVar7;
 int *piVar8;
 int *piVar9;
 int iVar10;
 undefined8 uVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 int iVar15;
 undefined8 uVar16;
 int iVar17;
 int iVar18;
 undefined8 uVar19;
 int iVar20;
 undefined8 uVar21;
 undefined8 uVar22;
 undefined8 uVar23;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (n < 1) {
 return 0;
 }
 uVar3 = (ulong)(uint)n;
 if ((uint)n < 8) {
 uVar4 = 0;
 }
 else {
 uVar4 = 0;
 if ((a + uVar3 <= c || c + uVar3 <= a) && (b + uVar3 <= c || c + uVar3 <= b)) {
 uVar4 = uVar3 & 0xfffffff8;
 piVar7 = a + 4;
 piVar8 = b + 4;
 piVar9 = c + 4;
 uVar6 = uVar4;
 do {
 piVar1 = piVar7 + -2;
 uVar11 = *(undefined8 *)(piVar7 + -4);
 uVar19 = *(undefined8 *)(piVar7 + 2);
 uVar16 = *(undefined8 *)piVar7;
 piVar7 = piVar7 + 8;
 uVar6 = uVar6 - 8;
 piVar2 = piVar8 + -2;
 uVar21 = *(undefined8 *)(piVar8 + -4);
 uVar23 = *(undefined8 *)(piVar8 + 2);
 uVar22 = *(undefined8 *)piVar8;
 piVar8 = piVar8 + 8;
 *(ulong *)(piVar9 + -2) =
 CONCAT44((int)((ulong)*(undefined8 *)piVar2 >> 0x20) +
 (int)((ulong)*(undefined8 *)piVar1 >> 0x20),
 (int)*(undefined8 *)piVar2 + (int)*(undefined8 *)piVar1);
 *(ulong *)(piVar9 + -4) =
 CONCAT44((int)((ulong)uVar21 >> 0x20) + (int)((ulong)uVar11 >> 0x20),
 (int)uVar21 + (int)uVar11);
 *(ulong *)(piVar9 + 2) =
 CONCAT44((int)((ulong)uVar23 >> 0x20) + (int)((ulong)uVar19 >> 0x20),
 (int)uVar23 + (int)uVar19);
 *(ulong *)piVar9 =
 CONCAT44((int)((ulong)uVar22 >> 0x20) + (int)((ulong)uVar16 >> 0x20),
 (int)uVar22 + (int)uVar16);
 piVar9 = piVar9 + 8;
 } while (uVar6 != 0);
 if (uVar4 == uVar3) goto LAB_00100c50;
 }
 }
 lVar5 = uVar3 - uVar4;
 piVar7 = c + uVar4;
 piVar8 = b + uVar4;
 piVar9 = a + uVar4;
 do {
 lVar5 = lVar5 + -1;
 *piVar7 = *piVar8 + *piVar9;
 piVar7 = piVar7 + 1;
 piVar8 = piVar8 + 1;
 piVar9 = piVar9 + 1;
 } while (lVar5 != 0);
LAB_00100c50:
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 return 0;
 }
 if ((uint)n < 8) {
 uVar6 = 0;
 iVar10 = 0;
 }
 else {
 uVar6 = uVar3 & 0xfffffff8;
 piVar7 = c + 4;
 iVar10 = 0;
 iVar12 = 0;
 iVar13 = 0;
 iVar14 = 0;
 iVar15 = 0;
 iVar17 = 0;
 iVar18 = 0;
 iVar20 = 0;
 uVar4 = uVar6;
 do {
 piVar8 = piVar7 + -4;
 piVar9 = piVar7 + -2;
 piVar1 = piVar7 + 2;
 uVar11 = *(undefined8 *)piVar7;
 piVar7 = piVar7 + 8;
 uVar4 = uVar4 - 8;
 iVar10 = (int)*(undefined8 *)piVar8 + iVar10;
 iVar12 = (int)((ulong)*(undefined8 *)piVar8 >> 0x20) + iVar12;
 iVar13 = (int)*(undefined8 *)piVar9 + iVar13;
 iVar14 = (int)((ulong)*(undefined8 *)piVar9 >> 0x20) + iVar14;
 iVar15 = (int)uVar11 + iVar15;
 iVar17 = (int)((ulong)uVar11 >> 0x20) + iVar17;
 iVar18 = (int)*(undefined8 *)piVar1 + iVar18;
 iVar20 = (int)((ulong)*(undefined8 *)piVar1 >> 0x20) + iVar20;
 } while (uVar4 != 0);
 iVar10 = iVar15 + iVar10 + iVar17 + iVar12 + iVar18 + iVar13 + iVar20 + iVar14;
 if (uVar6 == uVar3) {
 return iVar10;
 }
 }
 lVar5 = uVar3 - uVar6;
 piVar7 = c + uVar6;
 do {
 lVar5 = lVar5 + -1;
 iVar10 = *piVar7 + iVar10;
 piVar7 = piVar7 + 1;
 } while (lVar5 != 0);
 return iVar10;
}



/* Function: call_vectorized_loop @ 00100cd0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorized_loop(void)

{
 /* Unresolved local var: int[8] c@[???]
 Unresolved local var: int[8] a@[???]
 Unresolved local var: int[8] b@[???] */
 return 0x48;
}



/* Function: param_link_time_optimization @ 00100cd8 */

int param_link_time_optimization(int x)

{
 return x * 2 + 10;
}



/* Function: call_link_time_optimization @ 00100ce4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_link_time_optimization(void)

{
 return 0x14;
}



/* Function: div_zero_handler @ 00100cec */

void div_zero_handler(int sig)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp((__jmp_buf_tag *)jmp_buffer,1);
}



/* Function: param_division_by_zero @ 00100d0c */

int param_division_by_zero(int x)

{
 int iVar1;
 
 signal(8,div_zero_handler);
 iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
 if (iVar1 != 0) {
 return -1;
 }
 /* Unresolved local var: int y@[???] */
 iVar1 = 0;
 if (x != 0) {
 iVar1 = 10 / x;
 }
 return iVar1;
}



/* Function: call_division_by_zero @ 00100d60 */

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



/* Function: segv_handler @ 00100da0 */

void segv_handler(int sig)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp((__jmp_buf_tag *)segv_buffer,1);
}



/* Function: param_null_pointer_deref @ 00100dc4 */

int param_null_pointer_deref(int *p)

{
 int iVar1;
 
 signal(0xb,segv_handler);
 iVar1 = _setjmp((__jmp_buf_tag *)segv_buffer);
 if (iVar1 != 0) {
 return -1;
 }
 /* Unresolved local var: int val@[???] */
 return *p;
}



/* Function: call_null_pointer_deref @ 00100e14 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_null_pointer_deref(void)

{
 int iVar1;
 int iVar2;
 int local_24;
 
 /* Unresolved local var: int valid@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 local_24 = 0x2a;
 iVar1 = param_null_pointer_deref(&local_24);
 iVar2 = param_null_pointer_deref((int *)0x0);
 signal(0xb,(__sighandler_t)0x0);
 return iVar2 + iVar1;
}



/* Function: param_buffer_overflow_stack @ 00100e64 */

int param_buffer_overflow_stack(int x)

{
 /* Unresolved local var: int canary@[???]
 Unresolved local var: char[8] buffer@[???] */
 return x;
}



/* Function: param_buffer_overflow_heap @ 00100e68 */

int param_buffer_overflow_heap(int x)

{
 /* Unresolved local var: char * heap_buffer@[???] */
 return x;
}



/* Function: call_buffer_overflow @ 00100e6c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_buffer_overflow(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 0x1e;
}



/* Function: param_integer_overflow @ 00100e74 */

int param_integer_overflow(int a,int b)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: uint ub@[???]
 Unresolved local var: uint ua@[???]
 Unresolved local var: uint unsigned_sum@[???]
 Unresolved local var: int signed_sum@[???] */
 iVar1 = b + a;
 if (((0 < a) && (0 < b)) && (iVar1 < 0)) {
 return -1;
 }
 iVar2 = -2;
 if (iVar1 < 1 || -1 < (b & a)) {
 iVar2 = iVar1;
 }
 return iVar2;
}



/* Function: call_integer_overflow @ 00100eac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_integer_overflow(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 2000000000;
}



/* Function: param_undefined_behavior @ 00100eb8 */

int param_undefined_behavior(int i)

{
 /* Unresolved local var: int local@[???] */
 return i << 1;
}



/* Function: call_undefined_behavior @ 00100ec0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_undefined_behavior(void)

{
 /* Unresolved local var: int result@[???] */
 return 10;
}



/* Function: param_implementation_defined @ 00100ec8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_implementation_defined(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: char c@[???]
 Unresolved local var: int s@[???]
 Unresolved local var: anon_struct_4_3_4e909822 bitfield@[???] */
 return 0x30;
}



/* Function: call_implementation_defined @ 00100ed0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_implementation_defined(void)

{
 return 0x30;
}



/* Function: test_obf_opt_edge @ 00100ed8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_obf_opt_edge(void)

{
 byte bVar1;
 int iVar2;
 int iVar3;
 size_t sVar4;
 int iVar5;
 uint uVar6;
 byte *pbVar7;
 uint local_40 [7];
 undefined1 local_21;
 
 puts(DAT_001012b9);
 printf(DAT_001010e8,10);
 iVar2 = 6;
 iVar3 = 5;
 do {
 iVar5 = iVar2;
 /* Unresolved local var: int b@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int p1@[???]
 Unresolved local var: int p3@[???]
 Unresolved local var: int temp@[DW_OP_reg10(x10)] */
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
 printf(DAT_00101104,(ulong)uVar6);
 printf(DAT_00101120,0xe1);
 /* Unresolved local var: char[32] decrypted@[DW_OP_breg31(sp): 0]
 Unresolved local var: char * p@[???] */
 strncpy((char *)local_40,param_string_encryption_data,0x20);
 uVar6 = local_40[0] & 0xff;
 local_21 = 0;
 if ((char)local_40[0] == '\0') {
 uVar6 = 0;
 }
 else {
 pbVar7 = (byte *)((ulong)local_40 | 1);
 do {
 bVar1 = (byte)uVar6;
 uVar6 = (uint)*pbVar7;
 pbVar7[-1] = bVar1 ^ 0x5a;
 pbVar7 = pbVar7 + 1;
 } while (uVar6 != 0);
 uVar6 = local_40[0] & 0xff;
 }
 sVar4 = strlen((char *)local_40);
 printf(DAT_0010113d,(ulong)((int)sVar4 + uVar6));
 printf(DAT_00101159,0x7a314);
 printf(DAT_00101183,0x13ba);
 printf(DAT_001011a8,0x48);
 printf(DAT_001011ce,0x14);
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 iVar2 = param_division_by_zero(5);
 iVar3 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 printf(DAT_001011ee,(ulong)(uint)(iVar3 + iVar2));
 /* Unresolved local var: int valid@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 local_40[0] = 0x2a;
 iVar2 = param_null_pointer_deref((int *)local_40);
 iVar3 = param_null_pointer_deref((int *)0x0);
 signal(0xb,(__sighandler_t)0x0);
 printf(DAT_0010120a,(ulong)(uint)(iVar3 + iVar2));
 printf(DAT_00101227,0x1e);
 printf(DAT_00101244,2000000000);
 printf(DAT_00101275,10);
 printf(DAT_00101292,0x30);
 return;
}



/* Function: main @ 001010b8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_obf_opt_edge();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 43 */
