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
typedef struct __jmp_buf_tag {
    long __jb[16];
    long __fl;
    long __ss_sp;
    size_t __ss_size;
    long __fl2;
    long __ss_guard[2];
} __jmp_buf_tag;
typedef __jmp_buf_tag jmp_buf[1];

// Macro for combining 44-bit values (upper 32 bits from a, lower 12 bits from b)
#define CONCAT44(a,b) (((uint64_t)(a) << 12) | ((b) & 0xFFF))

// Forward declarations
void call_weak_fn(int);
int main(void);

// Global variables
char completed_0 = 0;
void *__dso_handle = 0;
int div_zero_caught = 0;
int segv_caught = 0;
__jmp_buf_tag jmp_buffer;
__jmp_buf_tag segv_buffer;

// Data arrays for vectorized loop
int DAT_001010b8[8] = {1, 2, 3, 4, 5, 6, 7, 8};
int DAT_001010d8[8] = {1, 2, 3, 4, 5, 6, 7, 8};

// String data for test_obf_opt_edge
char *DAT_001012c9 = "Obfuscation test complete.\n";
char *DAT_001010f8 = "Opaque predicate result: %d\n";
char *DAT_00101114 = "Call result: %u\n";
char *DAT_00101130 = "Instruction substitution: 0x%x\n";
char *DAT_0010114d = "String length + first char: %u\n";
char *DAT_00101169 = "Tail call result: %u\n";
char *DAT_00101193 = "Non-tail call result: %u\n";
char *DAT_001011b8 = "Vectorized loop result: %u\n";
char *DAT_001011de = "LTO result: %u\n";
char *DAT_001011fe = "Division test: %u\n";
char *DAT_0010121a = "Null pointer test: %u\n";
char *DAT_00101237 = "Buffer overflow result: %u\n";
char *DAT_00101254 = "Integer overflow result: %u\n";
char *DAT_00101285 = "Undefined behavior result: %u\n";
char *DAT_001012a2 = "Implementation defined result: %u\n";

// Encrypted string data
char param_string_encryption_encrypted[33] = {0};
typedef void (*__sighandler_t)(int);
#include <stdarg.h>

// Signal constants
#define SIG_DFL ((__sighandler_t)0)
#define SIG_IGN ((__sighandler_t)1)

// Decompiled by BinaryAI
// SHA256: 71c5c41b100ffd9ed4564115b4c98d3353af642472b33cee97e20ec277d0a2c2

// Function: _init @ 0x100710
int _init(void *ctx)
{
 int iVar1;
 call_weak_fn((int)ctx);
 return 0;
}

// Function: FUN_00100730 @ 0x100730
void FUN_00100730(void)
{
 (*(void *)(char *)0x0)();
 return;
}

// Function: <EXTERNAL>::strlen @ 0x100750
size_t strlen(char *__s);

// External libc function declarations
size_t strlen_libc(char *__s);
__sighandler_t signal_libc(int __sig,__sighandler_t __handler);
int __libc_start_main(int (*main)(void), int argc, char **argv, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
int _setjmp_libc(__jmp_buf_tag *__env);

// Signal function declaration
__sighandler_t signal(int __sig,__sighandler_t __handler);

// Function: <EXTERNAL>::_setjmp @ 0x100760
int _setjmp(__jmp_buf_tag *__env)
{
 int iVar1;
 iVar1 = _setjmp_libc(__env);
 return iVar1;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x100770
void __libc_start_main_crt(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x100780
void __cxa_finalize(void *);
void __cxa_finalize(void *arg)
{
 __cxa_finalize(arg);
 return;
}

// Function: <EXTERNAL>::signal @ 0x100790
// Wrapper that calls the libc signal function
__sighandler_t signal_fn(int __sig,__sighandler_t __handler)
{
 __sighandler_t p_Var1;
 p_Var1 = signal_libc(__sig,__handler);
 return p_Var1;
}

// Alias for signal to use libc
__sighandler_t signal_c(int __sig,__sighandler_t __handler)
{
 return signal_fn(__sig, __handler);
}

// Use signal_fn for signal call
#define signal signal_fn

// Function: <EXTERNAL>::__gmon_start__ @ 0x1007a0
void __gmon_start__(void)
{
 __gmon_start__();
 return;
}

// Function: <EXTERNAL>::abort @ 0x1007b0
void abort(void)
{
 abort();
}

// Function: <EXTERNAL>::puts @ 0x1007c0
int puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::longjmp @ 0x1007d0
void longjmp(__jmp_buf_tag *__env,int __val)
{
 longjmp(__env,__val);
}

// Function: <EXTERNAL>::strncpy @ 0x1007e0
char * strncpy(char *__dest,char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = strncpy(__dest,__src,__n);
 return pcVar1;
}

// Function: <EXTERNAL>::vprintf @ 0x1007f0
int vprintf(char * __format, va_list __args);

// Function: <EXTERNAL>::printf @ 0x1007f0
int printf(char *__format,...)
{
 va_list args;
 va_start(args, __format);
 int iVar1 = vprintf(__format, args);
 va_end(args);
 return iVar1;
}

// Function: _start @ 0x100800
void _start(unsigned long long param_1)
{
 unsigned long long param_9;
 void *stack_marker = 0;
 __libc_start_main(main,0,0,0,0,stack_marker,param_1);
 abort();
}

// Function: call_weak_fn @ 0x100834
void call_weak_fn(int ctx)
{
 (void)ctx;
 __gmon_start__();
 return;
}

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
 iVar3 = param_1;
 iVar2 = iVar1;
 iVar4 = param_1;
 if (param_1 != -1) {
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

// Function: call_opaque_predicate @ 0x100974
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

// Function: param_instruction_substitution @ 0x1009a4
int param_instruction_substitution(uint param_1)
{
 return (param_1 & 0xf) + (param_1 >> 1) + param_1 * 0x15;
}

// Function: call_instruction_substitution @ 0x1009b8
unsigned long long call_instruction_substitution(void)
{
 return 0xe1;
}

// Function: decrypt_string @ 0x1009c0
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

// Function: param_string_encryption @ 0x100a28
int param_string_encryption(void)
{
 byte bVar1;
 size_t sVar2;
 byte bVar3;
 byte *pbVar4;
 byte local_40 [31];
 char local_21;
 strncpy((char *)local_40,(char *)param_string_encryption_encrypted,0x20);
 local_21 = 0;
 if (local_40[0] != 0) {
 pbVar4 = (byte *)((unsigned long)local_40 | 1);
 bVar3 = local_40[0];
 do {
 bVar1 = bVar3 ^ 0x5a;
 bVar3 = *pbVar4;
 pbVar4[-1] = bVar1;
 pbVar4 = pbVar4 + 1;
 } while (bVar3 != 0);
 }
 sVar2 = strlen((char *)local_40);
 return (int)sVar2 + (uint)local_40[0];
}

// Function: call_string_encryption @ 0x100a98
int call_string_encryption(void)
{
 byte bVar1;
 size_t sVar2;
 byte bVar3;
 byte *pbVar4;
 byte local_40 [31];
 char local_21;
 strncpy((char *)local_40,(char *)param_string_encryption_encrypted,0x20);
 local_21 = 0;
 if (local_40[0] != 0) {
 pbVar4 = (byte *)((unsigned long)local_40 | 1);
 bVar3 = local_40[0];
 do {
 bVar1 = bVar3 ^ 0x5a;
 bVar3 = *pbVar4;
 pbVar4[-1] = bVar1;
 pbVar4 = pbVar4 + 1;
 } while (bVar3 != 0);
 }
 sVar2 = strlen((char *)local_40);
 return (int)sVar2 + (uint)local_40[0];
}

// Function: param_tail_call_optimized @ 0x100b08
int param_tail_call_optimized(int param_1,int param_2)
{
 if (0 < param_1) {
 param_2 = param_tail_call_optimized(param_1 + -1,param_2 + param_1);
 }
 return param_2;
}

// Function: call_tail_call_optimized @ 0x100b34
void call_tail_call_optimized(void)
{
 param_tail_call_optimized(1000,0);
 return;
}

// Function: param_non_tail_call @ 0x100b50
int param_non_tail_call(int param_1)
{
 int iVar1;
 if (param_1 < 1) {
 iVar1 = 0;
 }
 else {
 iVar1 = param_non_tail_call(param_1 + -1);
 iVar1 = iVar1 + param_1;
 }
 return iVar1;
}

// Function: call_non_tail_call @ 0x100b84
void call_non_tail_call(void)
{
 param_non_tail_call(100);
 return;
}

// Function: param_vectorized_loop @ 0x100b9c
int param_vectorized_loop(int *param_1,int *param_2,int *param_3,uint param_4)
{
 int iVar1;
 unsigned long uVar2;
 int *piVar3;
 if (0 < (int)param_4) {
 uVar2 = (unsigned long)param_4;
 piVar3 = param_3;
 do {
 uVar2 = uVar2 - 1;
 *piVar3 = *param_2 + *param_1;
 param_1 = param_1 + 1;
 param_2 = param_2 + 1;
 piVar3 = piVar3 + 1;
 } while (uVar2 != 0);
 }
 if (0 < (int)param_4) {
 iVar1 = 0;
 uVar2 = (unsigned long)param_4;
 do {
 uVar2 = uVar2 - 1;
 iVar1 = *param_3 + iVar1;
 param_3 = param_3 + 1;
 } while (uVar2 != 0);
 return iVar1;
 }
 return 0;
}

// Function: call_vectorized_loop @ 0x100bf0
int call_vectorized_loop(void)
{
 int *piVar1;
 int iVar2;
 long lVar3;
 unsigned long long local_20;
 unsigned long long uStack_18;
 unsigned long long uStack_10;
 unsigned long long uStack_8;
 lVar3 = 0;
 uStack_18 = 0;
 local_20 = 0;
 uStack_8 = 0;
 uStack_10 = 0;
 do {
 *(int *)((long)&local_20 + lVar3) =
 *(int *)((long)&DAT_001010d8 + lVar3) + *(int *)((long)&DAT_001010b8 + lVar3);
 lVar3 = lVar3 + 4;
 } while (lVar3 != 0x20);
 lVar3 = 0;
 iVar2 = 0;
 do {
 piVar1 = (int *)((long)&local_20 + lVar3);
 lVar3 = lVar3 + 4;
 iVar2 = *piVar1 + iVar2;
 } while (lVar3 != 0x20);
 return iVar2;
}

// Function: param_link_time_optimization @ 0x100c58
int param_link_time_optimization(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: call_link_time_optimization @ 0x100c64
unsigned long long call_link_time_optimization(void)
{
 return 0x14;
}

// Function: div_zero_handler @ 0x100c6c
void div_zero_handler(int sig)
{
 (void)sig;
 div_zero_caught = 1;
 longjmp((__jmp_buf_tag *)jmp_buffer,1);
}

// Function: param_division_by_zero @ 0x100c90
int param_division_by_zero(int param_1)
{
 int iVar1;
 signal(8,div_zero_handler);
 iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
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

// Function: call_division_by_zero @ 0x100cdc
int call_division_by_zero(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 return iVar2 + iVar1;
}

// Function: segv_handler @ 0x100d1c
void segv_handler(int sig)
{
 (void)sig;
 segv_caught = 1;
 longjmp((__jmp_buf_tag *)segv_buffer,1);
}

// Function: param_null_pointer_deref @ 0x100d40
unsigned int param_null_pointer_deref(unsigned int *param_1)
{
 int iVar1;
 unsigned int uVar2;
 signal(0xb,segv_handler);
 iVar1 = _setjmp((__jmp_buf_tag *)segv_buffer);
 if (iVar1 == 0) {
 uVar2 = *param_1;
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_null_pointer_deref @ 0x100d88
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

// Function: param_buffer_overflow_stack @ 0x100dd8
void param_buffer_overflow_stack(void)
{
 return;
}

// Function: param_buffer_overflow_heap @ 0x100ddc
void param_buffer_overflow_heap(void)
{
 return;
}

// Function: call_buffer_overflow @ 0x100de0
unsigned long long call_buffer_overflow(void)
{
 return 0x1e;
}

// Function: param_integer_overflow @ 0x100de8
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

// Function: call_integer_overflow @ 0x100e20
unsigned long long call_integer_overflow(void)
{
 return 2000000000;
}

// Function: param_undefined_behavior @ 0x100e2c
int param_undefined_behavior(int param_1)
{
 return param_1 << 1;
}

// Function: call_undefined_behavior @ 0x100e34
unsigned long long call_undefined_behavior(void)
{
 return 10;
}

// Function: param_implementation_defined @ 0x100e3c
unsigned long long param_implementation_defined(void)
{
 return 0x30;
}

// Function: call_implementation_defined @ 0x100e44
unsigned long long call_implementation_defined(void)
{
 return 0x30;
}

// Function: test_obf_opt_edge @ 0x100e4c
int test_obf_opt_edge(void)
{
 int *piVar1;
 byte bVar2;
 int iVar3;
 int iVar4;
 size_t sVar5;
 unsigned long uVar6;
 byte bVar7;
 int iVar8;
 uint uVar9;
 long lVar10;
 byte *pbVar11;
 unsigned long long local_40;
 unsigned long long uStack_38;
 unsigned long long uStack_30;
 unsigned long uStack_28;
 puts(DAT_001012c9);
 printf(DAT_001010f8,10);
 iVar3 = 6;
 iVar4 = 5;
 do {
 iVar8 = iVar3;
 iVar3 = 0;
 if (iVar8 != 0) {
 iVar3 = iVar4 / iVar8;
 }
 iVar3 = iVar4 - iVar3 * iVar8;
 iVar4 = iVar8;
 } while (iVar3 != 0);
 uVar9 = 0x14;
 if (iVar8 != 1) {
 uVar9 = 0x23;
 }
 printf(DAT_00101114,(unsigned long)uVar9);
 printf(DAT_00101130,0xe1);
 strncpy((char *)&local_40,param_string_encryption_encrypted,0x20);
 uStack_28 = uStack_28 & 0xffffffffffffff;
 if ((byte)local_40 != 0) {
 pbVar11 = (byte *)((unsigned long)&local_40 | 1);
 bVar7 = (byte)local_40;
 do {
 bVar2 = bVar7 ^ 0x5a;
 bVar7 = *pbVar11;
 pbVar11[-1] = bVar2;
 pbVar11 = pbVar11 + 1;
 } while (bVar7 != 0);
 }
 sVar5 = strlen((char *)&local_40);
 printf(DAT_0010114d,(unsigned long)((int)sVar5 + (uint)(byte)local_40));
 uVar6 = param_tail_call_optimized(1000,0);
 printf(DAT_00101169,uVar6 & 0xffffffff);
 uVar6 = param_non_tail_call(100);
 printf(DAT_00101193,uVar6 & 0xffffffff);
 lVar10 = 0;
 uStack_38 = 0;
 local_40 = 0;
 uStack_28 = 0;
 uStack_30 = 0;
 do {
 *(int *)((long)&local_40 + lVar10) =
 *(int *)((long)&DAT_001010d8 + lVar10) + *(int *)((long)&DAT_001010b8 + lVar10);
 lVar10 = lVar10 + 4;
 } while (lVar10 != 0x20);
 lVar10 = 0;
 uVar6 = 0;
 do {
 piVar1 = (int *)((long)&local_40 + lVar10);
 lVar10 = lVar10 + 4;
 uVar6 = (unsigned long)(uint)(*piVar1 + (int)uVar6);
 } while (lVar10 != 0x20);
 printf(DAT_001011b8,uVar6);
 printf(DAT_001011de,0x14);
 iVar3 = param_division_by_zero(5);
 iVar4 = param_division_by_zero(0);
 signal(8,SIG_DFL);
 printf(DAT_001011fe,(unsigned long)(uint)(iVar4 + iVar3));
 local_40 = CONCAT44((uint64_t)(local_40 >> 32),0x2a);
 iVar3 = param_null_pointer_deref((unsigned int *)&local_40);
 iVar4 = param_null_pointer_deref(0);
 signal(0xb,SIG_DFL);
 printf(DAT_0010121a,(unsigned long)(uint)(iVar4 + iVar3));
 printf(DAT_00101237,0x1e);
 printf(DAT_00101254,2000000000);
 printf(DAT_00101285,10);
 iVar3 = printf(DAT_001012a2,0x30);
 return iVar3;
}

// Function: main @ 0x101088
unsigned long long main(void)
{
 test_obf_opt_edge();
 return 0;
}

// Function: _fini @ 0x1010a0
void _fini(void)
{
 return;
}

