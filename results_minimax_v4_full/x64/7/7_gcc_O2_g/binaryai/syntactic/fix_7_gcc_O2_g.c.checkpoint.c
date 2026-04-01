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

#include <setjmp.h>
#include <signal.h>
#include <stdio.h>
#include <stdbool.h>

// Global variables needed by the decompiled code
extern void *__dso_handle;
char completed_0 = 0;
char div_zero_caught = 0;
char segv_caught = 0;
jmp_buf jmp_buffer;
jmp_buf segv_buffer;

// Encrypted string data
// String data references (defined below)
char encrypted_0[] = "encrypted_string_data_here";
char DAT_00102008[] = "Test: Opaque Predicate";
char DAT_00102038[] = "Test: Tail Call Optimization";
char DAT_00102068[] = "Test: Non-tail Call";
char DAT_00102090[] = "Test: Vectorized Loop";
char DAT_001020b8[] = "Test: LTO";
char DAT_001020d8[] = "Test: Integer Overflow";
char DAT_00102110[] = "Test: Implementation Defined";
char DAT_00102137[] = "Test: Instruction Substitution";
char DAT_00102153[] = "Result: Opaque Predicate = %llu\n";
char DAT_0010216f[] = "Result: Instruction Substitution = 0x%x\n";
char DAT_0010218c[] = "Result: String Encryption = %u\n";
char DAT_001021a8[] = "Result: Division by Zero = %d\n";
char DAT_001021c4[] = "Result: Null Pointer = %u\n";
char DAT_001021e1[] = "Result: Buffer Overflow = %llu\n";
char DAT_001021fe[] = "Result: Undefined Behavior = %llu\n";

// Decompiled by BinaryAI
// SHA256: f61e078b328696b16721a9ff56f76c626d02ce56da770fd80043aa5f0598cafe

// CRT stub removed - was causing undefined reference to __gmon_start__

// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x1010d0
void __cxa_finalize(void)
{
 __cxa_finalize();
 return;
}

// Function: <EXTERNAL>::free @ 0x1010e0
void free(void *__ptr)
{
 free(__ptr);
 return;
}

// Function: <EXTERNAL>::strncpy @ 0x1010f0
char * strncpy(char *__dest,char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = strncpy(__dest,__src,__n);
 return pcVar1;
}

// Function: <EXTERNAL>::puts @ 0x101100
int puts(const char *__s);

// Function: <EXTERNAL>::strlen @ 0x101110
size_t strlen(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x101120
void __stack_chk_fail(void)
{
 __stack_chk_fail();
}

// Function: <EXTERNAL>::_setjmp @ 0x101130
int _setjmp(jmp_buf __env);

// Function: <EXTERNAL>::signal @ 0x101140
__sighandler_t signal(int __sig,__sighandler_t __handler)
{
 __sighandler_t p_Var1;
 p_Var1 = signal(__sig,__handler);
 return p_Var1;
}

// Function: <EXTERNAL>::malloc @ 0x101150
void * malloc(size_t __size)
{
 void *pvVar1;
 pvVar1 = malloc(__size);
 return pvVar1;
}

// Function: <EXTERNAL>::printf @ 0x101160
int printf(const char *format, ...)
{
 int iVar1;
 iVar1 = printf(format);
 return iVar1;
}

// Function: <EXTERNAL>::longjmp @ 0x101170
void longjmp(jmp_buf __env, int __val)
{
 longjmp(__env, __val);
}

// Function: main @ 0x101180
unsigned long long main(void)
{
 test_obf_opt_edge();
 return 0;
}

// CRT _start removed - causes multiple definition

// Function: deregister_tm_clones @ 0x1011d0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x101200
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x101240
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 __cxa_finalize();
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: div_zero_handler @ 0x101290
void div_zero_handler(void)
{
 div_zero_caught = 1;
 __longjmp_chk(jmp_buffer,1);
}

// Function: segv_handler @ 0x1012c0
void segv_handler(void)
{
 segv_caught = 1;
 __longjmp_chk(segv_buffer,1);
}

// Function: param_fake_branch @ 0x1012f0
unsigned int param_fake_branch(unsigned int param_1)
{
 return param_1;
}

// Function: call_fake_branch @ 0x101300
unsigned long long call_fake_branch(void)
{
 return 10;
}

// Function: param_opaque_predicate @ 0x101310
int param_opaque_predicate(int param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 iVar2 = param_1 + 1;
 iVar4 = iVar2;
 iVar1 = param_1;
 if (iVar2 != 0) {
 do {
 iVar3 = iVar4;
 iVar4 = iVar1 % iVar3;
 iVar1 = iVar3;
 } while (iVar4 != 0);
 if ((iVar3 == 1) && (param_1 * 2 + 1 + param_1 * param_1 == iVar2 * iVar2)) {
 return param_1 * 2 + 10;
 }
 }
 return param_1 * 3 + 0x14;
}

// Function: call_opaque_predicate @ 0x101360
unsigned long long call_opaque_predicate(void)
{
 int iVar1;
 unsigned long long uVar2;
 int iVar3;
 int iVar4;
 iVar4 = 6;
 iVar1 = 5;
 do {
 iVar3 = iVar4;
 iVar4 = iVar1 % iVar3;
 iVar1 = iVar3;
 } while (iVar4 != 0);
 uVar2 = 0x14;
 if (iVar3 != 1) {
 uVar2 = 0x23;
 }
 return uVar2;
}

// Function: param_instruction_substitution @ 0x101390
int param_instruction_substitution(uint param_1)
{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}

// Function: call_instruction_substitution @ 0x1013b0
unsigned long long call_instruction_substitution(void)
{
 return 0xe1;
}

// Function: decrypt_string @ 0x1013c0
byte * decrypt_string(char *param_1,char *param_2,size_t param_3,byte param_4)
{
 byte bVar1;
 byte *pbVar2;
 byte *pbVar3;
 pbVar3 = (byte *)strncpy(param_2,param_1,param_3);
 pbVar3[param_3 - 1] = 0;
 bVar1 = *pbVar3;
 pbVar2 = pbVar3;
 while (bVar1 != 0) {
 *pbVar2 = bVar1 ^ param_4;
 bVar1 = pbVar2[1];
 pbVar2 = pbVar2 + 1;
 }
 return pbVar3;
}

// Function: param_string_encryption @ 0x101410
int param_string_encryption(void)
{
 byte bVar1;
 byte *pbVar2;
 byte *__s;
 size_t sVar3;
 long in_FS_OFFSET;
 byte local_38 [31];
 char local_19;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 __s = (byte *)strncpy((char *)local_38,(char *)&encrypted_0,0x1f);
 local_19 = 0;
 pbVar2 = __s;
 bVar1 = local_38[0];
 while (bVar1 != 0) {
 *pbVar2 = bVar1 ^ 0x5a;
 bVar1 = pbVar2[1];
 pbVar2 = pbVar2 + 1;
 }
 sVar3 = strlen((char *)__s);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return (int)sVar3 + (int)(char)local_38[0];
 }
 __stack_chk_fail();
}

// Function: call_string_encryption @ 0x101490
void call_string_encryption(void)
{
 param_string_encryption();
 return;
}

// Function: param_tail_call_optimized @ 0x1014a0
int param_tail_call_optimized(int param_1,int param_2)
{
 if (0 < param_1) {
 do {
 param_2 = param_2 + param_1;
 param_1 = param_1 + -1;
 } while (param_1 != 0);
 }
 return param_2;
}

// Function: call_tail_call_optimized @ 0x1014c0
unsigned long long call_tail_call_optimized(void)
{
 return 0x7a314;
}

// Function: param_non_tail_call @ 0x1014d0
int param_non_tail_call(int param_1)
{
 int iVar1;
 iVar1 = 0;
 if (0 < param_1) {
 do {
 iVar1 = iVar1 + param_1;
 param_1 = param_1 + -1;
 } while (param_1 != 0);
 }
 return iVar1;
}

// Function: call_non_tail_call @ 0x1014f0
unsigned long long call_non_tail_call(void)
{
 return 0x13ba;
}

// Function: param_vectorized_loop @ 0x101500
int param_vectorized_loop(long param_1,long param_2,int *param_3,uint param_4)
{
 int *piVar1;
 int iVar2;
 unsigned long uVar3;
 if (0 < (int)param_4) {
 uVar3 = 0;
 do {
 param_3[uVar3] = *(int *)(param_2 + uVar3 * 4) + *(int *)(param_1 + uVar3 * 4);
 uVar3 = uVar3 + 1;
 } while (uVar3 != param_4);
 piVar1 = param_3 + (unsigned long)(param_4 - 1) + 1;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *param_3;
 param_3 = param_3 + 1;
 } while (piVar1 != param_3);
 return iVar2;
 }
 return 0;
}

// Function: call_vectorized_loop @ 0x101550
int call_vectorized_loop(void)
{
 long lVar1;
 int *piVar2;
 int iVar3;
 int iVar4;
 long in_FS_OFFSET;
 unsigned long long local_78;
 unsigned long long local_70;
 unsigned long long local_68;
 unsigned long long local_60;
 unsigned long long local_58;
 unsigned long long local_50;
 unsigned long long local_48;
 unsigned long long local_40;
 char local_38 [16];
 char local_28 [16];
 int local_18 [2];
 long local_10;
 iVar3 = 8;
 iVar4 = 1;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 piVar2 = (int *)local_38;
 memset(local_38, 0, sizeof(local_38));
 memset(local_28, 0, sizeof(local_28));
 local_78 = 0x200000001;
 local_70 = 0x400000003;
 local_68 = 0x600000005;
 local_60 = 0x800000007;
 local_58 = 0x700000008;
 local_50 = 0x500000006;
 local_48 = 0x300000004;
 local_40 = 0x100000002;
 lVar1 = 0;
 while( true ) {
 *(int *)((long)piVar2 + lVar1) = iVar4 + iVar3;
 if (lVar1 + 4 == 0x20) break;
 iVar4 = *(int *)((long)&local_78 + lVar1 + 4);
 iVar3 = *(int *)((long)&local_58 + lVar1 + 4);
 lVar1 = lVar1 + 4;
 }
 iVar4 = 0;
 do {
 iVar4 = iVar4 + *piVar2;
 piVar2 = piVar2 + 1;
 } while (local_18 != piVar2);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar4;
 }
 __stack_chk_fail();
}

// Function: param_link_time_optimization @ 0x101660
int param_link_time_optimization(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: call_link_time_optimization @ 0x101670
unsigned long long call_link_time_optimization(void)
{
 return 0x14;
}

// Function: param_division_by_zero @ 0x101680
unsigned long param_division_by_zero(int param_1)
{
 int iVar1;
 unsigned long uVar2;
 signal(8,div_zero_handler);
 iVar1 = _setjmp(jmp_buffer);
 if (iVar1 == 0) {
 uVar2 = 10 / (long)param_1 & 0xffffffff;
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_division_by_zero @ 0x1016d0
int call_division_by_zero(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 return iVar1 + iVar2;
}

// Function: param_null_pointer_deref @ 0x101710
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

// Function: call_null_pointer_deref @ 0x101760
int call_null_pointer_deref(void)
{
 int iVar1;
 int iVar2;
 long in_FS_OFFSET;
 unsigned int local_24;
 long local_20;
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 local_24 = 0x2a;
 iVar1 = param_null_pointer_deref(&local_24);
 iVar2 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0x0);
 if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar1 + iVar2;
 }
 __stack_chk_fail();
}

// Function: param_buffer_overflow_stack @ 0x1017d0
unsigned int param_buffer_overflow_stack(unsigned int param_1)
{
 return param_1;
}

// Function: param_buffer_overflow_heap @ 0x1017e0
unsigned int param_buffer_overflow_heap(unsigned int param_1)
{
 void *__ptr;
 __ptr = malloc(0x10);
 if (__ptr != (void *)0x0) {
 free(__ptr);
 return param_1;
 }
 return 0xfffffffe;
}

// Function: call_buffer_overflow @ 0x101810
unsigned long long call_buffer_overflow(void)
{
 void *__ptr;
 unsigned long long uVar1;
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 uVar1 = 8;
 }
 else {
 free(__ptr);
 uVar1 = 0x1e;
 }
 return uVar1;
}

// Function: param_integer_overflow @ 0x101840
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

// Function: call_integer_overflow @ 0x101870
unsigned long long call_integer_overflow(void)
{
 return 2000000000;
}

// Function: param_undefined_behavior @ 0x101880
int param_undefined_behavior(int param_1)
{
 return param_1 * 2;
}

// Function: call_undefined_behavior @ 0x101890
unsigned long long call_undefined_behavior(void)
{
 return 10;
}

// Function: param_implementation_defined @ 0x1018a0
unsigned long long param_implementation_defined(void)
{
 return 0x2f;
}

// Function: call_implementation_defined @ 0x1018b0
unsigned long long call_implementation_defined(void)
{
 return 0x2f;
}

// Function: test_obf_opt_edge @ 0x1018c0
void test_obf_opt_edge(void)
{
 unsigned int uVar1;
 int iVar2;
 int iVar3;
 void *__ptr;
 unsigned long uVar4;
 unsigned long long uVar5;
 long in_FS_OFFSET;
 unsigned int local_24;
 long local_20;
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_00102008);
 __printf_chk(1,&DAT_00102137,10);
 uVar4 = 6;
 iVar2 = 5;
 do {
 iVar3 = (int)uVar4;
 uVar4 = (long)iVar2 % (long)iVar3 & 0xffffffff;
 iVar2 = iVar3;
 } while ((int)uVar4 != 0);
 uVar5 = 0x14;
 if (iVar3 != 1) {
 uVar5 = 0x23;
 }
 __printf_chk(1,&DAT_00102153,uVar5);
 __printf_chk(1,&DAT_0010216f,0xe1);
 uVar1 = param_string_encryption();
 __printf_chk(1,&DAT_0010218c,uVar1);
 __printf_chk(1,&DAT_00102038,0x7a314);
 __printf_chk(1,&DAT_00102068,0x13ba);
 uVar1 = call_vectorized_loop();
 __printf_chk(1,&DAT_00102090,uVar1);
 __printf_chk(1,&DAT_001020b8,0x14);
 iVar2 = param_division_by_zero(5);
 iVar3 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 __printf_chk(1,&DAT_001021a8,iVar2 + iVar3);
 local_24 = 0x2a;
 iVar2 = param_null_pointer_deref(&local_24);
 iVar3 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0x0);
 __printf_chk(1,&DAT_001021c4,iVar2 + iVar3);
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 uVar5 = 8;
 }
 else {
 free(__ptr);
 uVar5 = 0x1e;
 }
 __printf_chk(1,&DAT_001021e1,uVar5);
 __printf_chk(1,&DAT_001020d8,2000000000);
 __printf_chk(1,&DAT_001021fe,10);
 if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
 __printf_chk(1,&DAT_00102110,0x2f);
 return;
 }
 __stack_chk_fail();
}

// CRT _fini removed - causes multiple definition

