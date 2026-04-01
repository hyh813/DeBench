#define true 1
#define false 1

#define NULL ((void *)0)

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

/* Ghidra decompiler type definitions */
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef int undefined;
typedef void (*code)(void);
typedef struct __jmp_buf_tag { long int __jb[8]; long int __fl; long int __ss[64]; } __jmp_buf_tag;
typedef void (*__sighandler_t)(int);
typedef unsigned char byte;

/* Global variables */
int div_zero_caught = 0;
int segv_caught = 0;
__jmp_buf_tag jmp_buffer;
__jmp_buf_tag segv_buffer;
char encrypted_0[32];

/* Data symbols */
const char DAT_00102004[] = "Testing obfuscated optimization edge cases:\n";
const char DAT_00102031[] = "Opaque predicate input: %d\n";
const char DAT_0010204d[] = "Opaque predicate result: %d\n";
const char DAT_00102069[] = "Instruction substitution: %d\n";
const char DAT_00102086[] = "String encryption result: %d\n";
const char DAT_001020a2[] = "Result: %d\n";
const char DAT_001020f1[] = "Vectorized loop result: %d\n";
const char DAT_00102117[] = "Link time optimization: %d\n";
const char DAT_00102137[] = "Division by zero: %d\n";
const char DAT_00102153[] = "Null pointer dereference: %d\n";
const char DAT_00102170[] = "Buffer overflow: %d\n";
const char DAT_0010218d[] = "Integer overflow: %d\n";
const char DAT_001021be[] = "Undefined behavior: %d\n";
const char DAT_001021db[] = "Implementation defined: %d %d\n";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/7/7_gcc_Os_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(int sig)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: main @ 00101180 */

int main(void)

{
 ulong in_RAX;
 
 test_obf_opt_edge();
 in_RAX = 0;
 return in_RAX << 0x40;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: div_zero_handler @ 00101279 */

void div_zero_handler(int sig)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 __longjmp_chk((__jmp_buf_tag *)&jmp_buffer,1);
}



/* Function: segv_handler @ 0010129b */

void segv_handler(int sig)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 __longjmp_chk((__jmp_buf_tag *)&segv_buffer,1);
}



/* Function: param_fake_branch @ 001012bd */

undefined4 param_fake_branch(undefined4 param_1)

{
 return param_1;
}



/* Function: call_fake_branch @ 001012c4 */

undefined8 call_fake_branch(void)

{
 return 10;
}



/* Function: param_opaque_predicate @ 001012ce */

int param_opaque_predicate(uint param_1)

{
 uint uVar1;
 int iVar2;
 ulong uVar3;
 ulong uVar4;
 
 uVar1 = param_1 + 1;
 uVar3 = (ulong)param_1;
 uVar4 = (ulong)uVar1;
 while( true ) {
 iVar2 = (int)uVar3;
 if ((int)uVar4 == 0) break;
 uVar3 = uVar4;
 uVar4 = (long)iVar2 % (long)(int)uVar4 & 0xffffffff;
 }
 if ((iVar2 == 1) && (param_1 * 2 + 1 + param_1 * param_1 == uVar1 * uVar1)) {
 return param_1 * 2 + 10;
 }
 return param_1 * 3 + 0x14;
}



/* Function: call_opaque_predicate @ 0010130f */

int call_opaque_predicate(void)

{
 return param_opaque_predicate(5);
}



/* Function: param_instruction_substitution @ 0010131a */

int param_instruction_substitution(uint param_1)

{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}



/* Function: call_instruction_substitution @ 00101334 */

undefined8 call_instruction_substitution(void)

{
 return 0xe1;
}



/* Function: decrypt_string @ 0010133e */

void decrypt_string(char *param_1,char *param_2,size_t param_3,uint8_t param_4)

{
 uint8_t *pbVar1;
 
 strncpy(param_2,param_1,param_3);
 param_2[param_3 - 1] = 0;
 for (pbVar1 = (uint8_t *)param_2; *pbVar1 != 0; pbVar1 = pbVar1 + 1) {
 *pbVar1 = *pbVar1 ^ param_4;
 }
}



/* Function: param_string_encryption @ 0010137b */

int param_string_encryption(void)

{
 size_t sVar1;
 long in_FS_OFFSET;
 char local_30 [32];
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 decrypt_string(&encrypted_0,local_30,0x20,0x5a);
 sVar1 = strlen(local_30);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return (int)local_30[0] + (int)sVar1;
}



/* Function: call_string_encryption @ 001013e0 */

void call_string_encryption(void)

{
 param_string_encryption();
 return;
}



/* Function: param_tail_call_optimized @ 001013e8 */

int param_tail_call_optimized(int param_1,int param_2)

{
 for (; 0 < param_1; param_1 = param_1 + -1) {
 param_2 = param_2 + param_1;
 }
 return param_2;
}



/* Function: call_tail_call_optimized @ 001013f9 */

int call_tail_call_optimized(void)

{
 return 0x7a314;
}



/* Function: param_non_tail_call @ 00101403 */

int param_non_tail_call(int param_1)

{
 int iVar1;
 
 iVar1 = 0;
 for (; 0 < param_1; param_1 = param_1 + -1) {
 iVar1 = iVar1 + param_1;
 }
 return iVar1;
}



/* Function: call_non_tail_call @ 00101414 */

void call_non_tail_call(void)

{
 param_non_tail_call(100);
 return;
}



/* Function: param_vectorized_loop @ 0010141f */

int param_vectorized_loop(intptr_t param_1,intptr_t param_2,intptr_t param_3,int param_4)

{
 long lVar1;
 int iVar2;
 
 for (lVar1 = 0; (int)lVar1 < param_4; lVar1 = lVar1 + 1) {
 *(int *)(void *)((uintptr_t)param_3 + lVar1 * 4) = *(int *)(void *)((uintptr_t)param_2 + lVar1 * 4) + *(int *)(void *)((uintptr_t)param_1 + lVar1 * 4);
 }
 iVar2 = 0;
 for (lVar1 = 0; (int)lVar1 < param_4; lVar1 = lVar1 + 1) {
 iVar2 = iVar2 + *(int *)(void *)((uintptr_t)param_3 + lVar1 * 4);
 }
 return iVar2;
}



/* Function: call_vectorized_loop @ 00101450 */

int call_vectorized_loop(void)

{
 long lVar1;
 undefined4 *puVar2;
 long in_FS_OFFSET;
 undefined8 local_70;
 undefined8 local_68;
 undefined8 local_60;
 undefined8 local_58;
 undefined8 local_50;
 undefined8 local_48;
 undefined8 local_40;
 undefined8 local_38;
 undefined4 local_30 [8];
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_70 = 0x200000001;
 local_68 = 0x400000003;
 local_60 = 0x600000005;
 local_58 = 0x800000007;
 local_50 = 0x700000008;
 local_48 = 0x500000006;
 local_40 = 0x300000004;
 local_38 = 0x100000002;
 puVar2 = local_30;
 for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
 *puVar2 = 0;
 puVar2 = puVar2 + 1;
 }
 return param_vectorized_loop((intptr_t)&local_70,(intptr_t)&local_50,(intptr_t)&local_30,8);
}



/* Function: param_link_time_optimization @ 0010151b */

int param_link_time_optimization(int param_1)

{
 return param_1 * 2 + 10;
}



/* Function: call_link_time_optimization @ 00101524 */

undefined8 call_link_time_optimization(void)

{
 return 0x14;
}



/* Function: param_division_by_zero @ 0010152e */

ulong param_division_by_zero(int param_1)

{
 int iVar1;
 ulong uVar2;
 
 signal(8,(__sighandler_t)div_zero_handler);
 iVar1 = _setjmp((__jmp_buf_tag *)&jmp_buffer);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 uVar2 = 10 / (long)param_1 & 0xffffffff;
 }
 return uVar2;
}



/* Function: call_division_by_zero @ 00101575 */

int call_division_by_zero(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0);
 return iVar1 + iVar2;
}



/* Function: param_null_pointer_deref @ 001015a4 */

undefined4 param_null_pointer_deref(undefined4 *param_1)

{
 int iVar1;
 undefined4 uVar2;
 
 signal(0xb,(__sighandler_t)segv_handler);
 iVar1 = _setjmp((__jmp_buf_tag *)&segv_buffer);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 uVar2 = *param_1;
 }
 return uVar2;
}



/* Function: call_null_pointer_deref @ 001015e9 */

int call_null_pointer_deref(void)

{
 int iVar1;
 int iVar2;
 long in_FS_OFFSET;
 undefined4 local_24;
 long local_20;
 
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 local_24 = 0x2a;
 iVar1 = param_null_pointer_deref(&local_24);
 iVar2 = param_null_pointer_deref((undefined4 *)0);
 signal(0xb,(__sighandler_t)0);
 if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar1 + iVar2;
}



/* Function: param_buffer_overflow_stack @ 0010164b */

undefined4 param_buffer_overflow_stack(undefined4 param_1)

{
 return param_1;
}



/* Function: param_buffer_overflow_heap @ 00101652 */

undefined4 param_buffer_overflow_heap(undefined4 param_1)

{
 undefined4 uVar1;
 void *__ptr;
 
 __ptr = malloc(0x10);
 uVar1 = 0xfffffffe;
 if (__ptr != (void *)0x0) {
 free(__ptr);
 uVar1 = param_1;
 }
 return uVar1;
}



/* Function: call_buffer_overflow @ 00101679 */

int call_buffer_overflow(void)

{
 int iVar1;
 
 iVar1 = param_buffer_overflow_heap(0x14);
 return iVar1 + 10;
}



/* Function: param_integer_overflow @ 0010168d */

int param_integer_overflow(uint param_1,uint param_2)

{
 int iVar1;
 
 iVar1 = param_1 + param_2;
 if ((0 < (int)param_1) && (0 < (int)param_2)) {
 if (iVar1 < 0) {
 iVar1 = -1;
 }
 return iVar1;
 }
 if (((int)(param_1 & param_2) < 0) && (0 < iVar1)) {
 iVar1 = -2;
 }
 return iVar1;
}



/* Function: call_integer_overflow @ 001016b6 */

undefined8 call_integer_overflow(void)

{
 return 2000000000;
}



/* Function: param_undefined_behavior @ 001016c0 */

int param_undefined_behavior(int param_1)

{
 return param_1 * 2;
}



/* Function: call_undefined_behavior @ 001016c8 */

undefined8 call_undefined_behavior(void)

{
 return (undefined8)10;
}



/* Function: param_implementation_defined @ 001016d2 */

undefined8 param_implementation_defined(void)

{
 return 0x2f;
}



/* Function: call_implementation_defined @ 001016dc */

undefined8 call_implementation_defined(void)

{
 return 0x2f;
}



/* Function: test_obf_opt_edge @ 001016e6 */

void test_obf_opt_edge(void)

{
 undefined4 uVar1;
 undefined8 in_RAX;
 
 in_RAX = 0;
 puts(&DAT_00102004);
 __printf_chk(1,(const char *)&DAT_00102031,10);
 uVar1 = call_opaque_predicate();
 __printf_chk(1,(const char *)&DAT_0010204d,uVar1);
 __printf_chk(1,(const char *)&DAT_00102069,0xe1);
 uVar1 = param_string_encryption();
 __printf_chk(1,(const char *)&DAT_00102086,uVar1);
 call_tail_call_optimized();
 in_RAX = call_tail_call_optimized();
 __printf_chk(1,(const char *)&DAT_001020a2);
 call_non_tail_call();
 __printf_chk(1,(const char *)&DAT_001020a2);
 uVar1 = call_vectorized_loop();
 __printf_chk(1,(const char *)&DAT_001020f1,uVar1);
 __printf_chk(1,(const char *)&DAT_00102117,0x14);
 uVar1 = call_division_by_zero();
 __printf_chk(1,(const char *)&DAT_00102137,uVar1);
 uVar1 = call_null_pointer_deref();
 __printf_chk(1,(const char *)&DAT_00102153,uVar1);
 uVar1 = call_buffer_overflow();
 __printf_chk(1,(const char *)&DAT_00102170,uVar1);
 __printf_chk(1,(const char *)&DAT_0010218d,2000000000);
 __printf_chk(1,(const char *)&DAT_001021be,10);
 __printf_chk(1,(const char *)&DAT_001021db,0x2f,in_RAX);
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 41 */
