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

/* Additional Ghidra types */
typedef unsigned long long undefined8;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned char byte;
typedef unsigned long ulong;
typedef void (*code)(void);  /* Function pointer type */

/* Standard library types for setjmp/longjmp */
typedef struct __jmp_buf_tag {
    long __jb[22];
    long __fl;
    long __ss[128];
    int __sv;
    int __mask;
} __jmp_buf_tag[1];

/* Signal handler type */
typedef void (*__sighandler_t)(int);

/* jmp_buf type definition */
typedef struct __jmp_buf_tag {
    long __jb[22];
    long __fl;
    long __ss[128];
    int __sv;
    int __mask;
} jmp_buf[1];

/* Stack protector guard variables */
unsigned long ___stack_chk_guard = 0;
unsigned long __stack_chk_guard = 0;

/* External declarations for CRT functions */
extern void __cxa_finalize(void *);
extern void deregister_tm_clones(void);
extern void __longjmp_chk(jmp_buf, int);
extern void __stack_chk_fail(int, ...);
extern int signal(int, __sighandler_t);
extern int _setjmp(jmp_buf);
extern int strlen(const char *);
extern int strncpy(char *, const char *, size_t);
extern int puts(const char *);
extern int __printf_chk(int, const char *, ...);
extern void *malloc(size_t);
extern void free(void *);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/7/7_gcc_O1_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* Global variables needed by the code */
jmp_buf jmp_buffer;
jmp_buf segv_buffer;
char completed_0 = 0;
int div_zero_caught = 0;
int segv_caught = 0;
extern void *__dso_handle;

/* Encrypted string for string encryption test */
char encrypted_0[32] = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";

/* String constants used by test_obf_opt_edge */
const char DAT_00101180[] = "Testing obfuscated optimizations:\n";
const char DAT_001011b0[] = "opaque_predicate: %d\n";
const char DAT_001011d0[] = "call_opaque_predicate: %d\n";
const char DAT_001011f0[] = "instruction_substitution: 0x%x\n";
const char DAT_00101210[] = "string_encryption: %d\n";
const char DAT_00101230[] = "tail_call_optimized: %lu\n";
const char DAT_00101260[] = "non_tail_call: %d\n";
const char DAT_00101288[] = "vectorized_loop: %d\n";
const char DAT_001012b0[] = "link_time_optimization: 0x%x\n";
const char DAT_001012d0[] = "division_by_zero: %d\n";
const char DAT_001012f0[] = "null_pointer_deref: %d\n";
const char DAT_00101310[] = "buffer_overflow: %d\n";
const char DAT_00101330[] = "integer_overflow: %d\n";
const char DAT_00101368[] = "undefined_behavior: %d\n";
const char DAT_00101388[] = "implementation_defined: 0x%x\n";

/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00100860 @ 00100860 */

void FUN_00100860(void)

{
 (*(code *)(void *)0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_00100a3c @ 00100a3c */

void FUN_00100a3c(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: div_zero_handler @ 00100a94 */

void div_zero_handler(int sig)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 __longjmp_chk(jmp_buffer, 1);
}



/* Function: segv_handler @ 00100ab4 */

void segv_handler(int sig)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 __longjmp_chk(segv_buffer, 1);
}



/* Function: param_fake_branch @ 00100ad4 */

void param_fake_branch(void)

{
 return;
}



/* Function: call_fake_branch @ 00100ad8 */

undefined8 call_fake_branch(void)

{
 return 10;
}



/* Function: param_opaque_predicate @ 00100ae0 */

int param_opaque_predicate(int param_1)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 
 iVar1 = param_1 + 1;
 iVar2 = iVar1;
 iVar3 = param_1;
 if (iVar1 != 0) {
 do {
 iVar4 = iVar2;
 iVar2 = 0;
 if (iVar4 != 0) {
 iVar2 = iVar3 / iVar4;
 }
 iVar2 = iVar3 - iVar2 * iVar4;
 iVar3 = iVar4;
 } while (iVar2 != 0);
 if (param_1 * 2 + param_1 * param_1 + 1 == iVar1 * iVar1 && iVar4 == 1) {
 return param_1 * 2 + 10;
 }
 }
 return param_1 * 3 + 0x14;
}



/* Function: call_opaque_predicate @ 00100b38 */

int call_opaque_predicate(void)

{
 return param_opaque_predicate(5);
}



/* Function: param_instruction_substitution @ 00100b50 */

int param_instruction_substitution(uint param_1)

{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}



/* Function: call_instruction_substitution @ 00100b74 */

undefined8 call_instruction_substitution(void)

{
 return 0xe1;
}



/* Function: decrypt_string @ 00100b7c */

byte * decrypt_string(char *param_1,byte *param_2,size_t param_3,byte param_4)

{
 byte bVar1;
 byte *pbVar2;
 
 strncpy((char *)param_2,param_1,param_3);
 param_2[param_3 - 1] = 0;
 bVar1 = *param_2;
 pbVar2 = param_2;
 while (bVar1 != 0) {
 *pbVar2 = param_4 ^ bVar1;
 pbVar2 = pbVar2 + 1;
 bVar1 = *pbVar2;
 }
 return param_2;
}



/* Function: param_string_encryption @ 00100bdc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_string_encryption(void)

{
 size_t sVar1;
 byte local_28 [32];
 long local_8;
 
 local_8 = ___stack_chk_guard;
 decrypt_string(encrypted_0,(byte *)local_28,0x20,0x5a);
 sVar1 = strlen((char *)local_28);
 if (local_8 - ___stack_chk_guard == 0) {
 return (int)sVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail((uint)local_28[0] + (int)sVar1,&__stack_chk_guard,0,local_8 - ___stack_chk_guard)
 ;
}



/* Function: call_string_encryption @ 00100c54 */

int call_string_encryption(void)

{
 return param_string_encryption();
}



/* Function: param_tail_call_optimized @ 00100c68 */

ulong param_tail_call_optimized(int param_1,uint param_2)

{
 ulong uVar1;
 
 if (0 < param_1) {
 uVar1 = param_tail_call_optimized(param_1 + -1,param_1 + param_2);
 return uVar1;
 }
 return (ulong)param_2;
}



/* Function: call_tail_call_optimized @ 00100c94 */

ulong call_tail_call_optimized(void)

{
 return param_tail_call_optimized(1000,0);
}



/* Function: param_non_tail_call @ 00100cb0 */

int param_non_tail_call(int param_1)

{
 int iVar1;
 
 if (0 < param_1) {
 iVar1 = param_non_tail_call(param_1 + -1);
 return iVar1 + param_1;
 }
 return 0;
}



/* Function: call_non_tail_call @ 00100ce8 */

int call_non_tail_call(void)

{
 return param_non_tail_call(100);
}



/* Function: param_vectorized_loop @ 00100d00 */

int param_vectorized_loop(int *param_1, int *param_2, int *param_3, int param_4)

{
 int iVar1;
 long lVar2;
 
 if (param_4 < 1) {
 iVar1 = 0;
 }
 else {
 lVar2 = 0;
 do {
 *(int *)(param_3 + lVar2 * 4) = *(int *)(param_1 + lVar2 * 4) + *(int *)(param_2 + lVar2 * 4);
 lVar2 = lVar2 + 1;
 } while ((int)lVar2 < param_4);
 lVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_3 + lVar2 * 4);
 lVar2 = lVar2 + 1;
 } while ((int)lVar2 < param_4);
 }
 return iVar1;
}



/* Function: call_vectorized_loop @ 00100d50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_vectorized_loop(void)

{
 int iVar1;
 int local_68;
 int uStack_60;
 int uStack_58;
 int uStack_50;
 int local_48;
 int uStack_40;
 int uStack_38;
 int uStack_30;
 int local_28;
 int uStack_20;
 int local_18;
 int uStack_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 uStack_60 = 0x400000003;
 local_68 = 0x200000001;
 uStack_50 = 0x800000007;
 uStack_58 = 0x600000005;
 uStack_40 = 0x500000006;
 local_48 = 0x700000008;
 uStack_30 = 0x100000002;
 uStack_38 = 0x300000004;
 local_28 = 0;
 uStack_20 = 0;
 local_18 = 0;
 uStack_10 = 0;
 iVar1 = param_vectorized_loop(&local_68,&local_48,&local_28,8);
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(iVar1,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: param_link_time_optimization @ 00100dc8 */

int param_link_time_optimization(int param_1)

{
 return (param_1 + 5) * 2;
}



/* Function: call_link_time_optimization @ 00100dd4 */

undefined8 call_link_time_optimization(void)

{
 return 0x14;
}



/* Function: param_division_by_zero @ 00100ddc */

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



/* Function: call_division_by_zero @ 00100e28 */

int call_division_by_zero(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 return iVar1 + iVar2;
}



/* Function: param_null_pointer_deref @ 00100e68 */

undefined4 param_null_pointer_deref(undefined4 *param_1)

{
 int iVar1;
 undefined4 uVar2;
 
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



/* Function: call_null_pointer_deref @ 00100eb0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_null_pointer_deref(void)

{
 int iVar1;
 int iVar2;
 undefined4 local_c;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_c = 0x2a;
 iVar1 = param_null_pointer_deref(&local_c);
 iVar2 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0x0);
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(iVar1 + iVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: param_buffer_overflow_stack @ 00100f2c */

void param_buffer_overflow_stack(void)

{
 return;
}



/* Function: param_buffer_overflow_heap @ 00100f30 */

undefined4 param_buffer_overflow_heap(undefined4 param_1)

{
 void *__ptr;
 int iVar1;
 
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 param_1 = 0xfffffffe;
 }
 else {
 iVar1 = 0x21;
 do {
 iVar1 = iVar1 + -1;
 } while (iVar1 != 0);
 free(__ptr);
 }
 return param_1;
}



/* Function: call_buffer_overflow @ 00100f74 */

int call_buffer_overflow(void)

{
 int iVar1;
 
 iVar1 = param_buffer_overflow_heap(0x14);
 return iVar1 + 10;
}



/* Function: param_integer_overflow @ 00100f90 */

int param_integer_overflow(uint param_1,uint param_2)

{
 int iVar1;
 
 iVar1 = param_1 + param_2;
 if ((((int)param_1 < 1 || param_2 == 0) || 0 < (int)param_1 && (int)param_2 < 0) || -1 < iVar1) {
 if ((int)(param_1 & param_2) < 0 && 0 < iVar1) {
 iVar1 = -2;
 }
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_integer_overflow @ 00100fc4 */

undefined8 call_integer_overflow(void)

{
 return 2000000000;
}



/* Function: param_undefined_behavior @ 00100fd0 */

int param_undefined_behavior(int param_1)

{
 return param_1 << 1;
}



/* Function: call_undefined_behavior @ 00100fd8 */

undefined8 call_undefined_behavior(void)

{
 return 10;
}



/* Function: param_implementation_defined @ 00100fe0 */

undefined8 param_implementation_defined(void)

{
 return 0x30;
}



/* Function: call_implementation_defined @ 00100fe8 */

undefined8 call_implementation_defined(void)

{
 return 0x30;
}



/* Function: test_obf_opt_edge @ 00100ff0 */

void test_obf_opt_edge(void)

{
 undefined4 uVar1;
 
 puts(DAT_00101180);
 __printf_chk(1,DAT_001011b0,10);
 uVar1 = call_opaque_predicate();
 __printf_chk(1,DAT_001011d0,uVar1);
 __printf_chk(1,DAT_001011f0,0xe1);
 uVar1 = param_string_encryption();
 __printf_chk(1,DAT_00101210,uVar1);
 uVar1 = (undefined4)call_tail_call_optimized();
 __printf_chk(1,DAT_00101230,uVar1);
 uVar1 = call_non_tail_call();
 __printf_chk(1,DAT_00101260,uVar1);
 uVar1 = call_vectorized_loop();
 __printf_chk(1,DAT_00101288,uVar1);
 uVar1 = (undefined4)call_tail_call_optimized();
 __printf_chk(1,DAT_00101230,uVar1);
 __printf_chk(1,DAT_001012b0,uVar1);
 __printf_chk(1,DAT_001012b0,uVar1);
 uVar1 = call_division_by_zero();
 __printf_chk(1,DAT_001012d0,uVar1);
 uVar1 = call_null_pointer_deref();
 __printf_chk(1,DAT_001012f0,uVar1);
 uVar1 = call_buffer_overflow();
 __printf_chk(1,DAT_00101310,uVar1);
 __printf_chk(1,DAT_00101330,2000000000);
 __printf_chk(1,DAT_00101368,10);
 __printf_chk(1,DAT_00101388,0x30);
 return;
}



/* Function: main @ 00101148 */

undefined8 main(void)

{
 test_obf_opt_edge();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 43 */
