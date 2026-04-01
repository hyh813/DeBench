/* Standard library includes */
#include <setjmp.h>
#include <signal.h>
#include <stdint.h>

/* Additional type definitions */
typedef unsigned int uint;
typedef unsigned char byte;

/* Macro for combining high and low 32-bit values into 64-bit (little-endian) */
#define CONCAT44(high, low) ((((unsigned long)(high) & 0xffffffff) << 32) | ((unsigned long)(low) & 0xffffffff))

/* Forward declarations */
void call_weak_fn(void);
static void _fini(void);

/* Type definitions for setjmp/longjmp - use system definition from setjmp.h */

/* Global variables */
extern void *__dso_handle;
char completed_0 = 0;

/* Data arrays from the binary */
char DAT_00100f10[1];
char DAT_00100f18[1];
char DAT_00100f30[1];
char DAT_00100f38[1];
char DAT_00100f50[1];
char DAT_00100f6c[1];
char DAT_00100f88[1];
char DAT_00100fa5[1];
char DAT_00100fc1[1];
char DAT_00100feb[1];
char DAT_00101010[1];
char DAT_00101036[1];
char DAT_00101056[1];
char DAT_00101072[1];
char DAT_0010108f[1];
char DAT_001010ac[1];
char DAT_001010dd[1];
char DAT_001010fa[1];
char DAT_00101121[1];

char UNK_00100f18[1];
char UNK_00100f38[1];

/* Jump buffers for exception handling */
jmp_buf jmp_buffer;
jmp_buf segv_buffer;

/* Flags for signal handlers */
volatile int div_zero_caught;
volatile int segv_caught;

/* Stack variable for _start */
unsigned long long stack0x00000008;

/* Forward declarations */
int main(void);

/* Encrypted string data */
extern char param_string_encryption_encrypted[];

// Decompiled by BinaryAI
// SHA256: 5f22b221c1035b0a57d6cddf7f66686a69a85726979ebe4f9511eea497ebb8f9

// Function: _init @ 0x100710
static int _init(void *ctx)
{
 call_weak_fn();
 return 0;
}

// Function: FUN_00100730 @ 0x100730
void FUN_00100730(void)
{
 (*(void (*)(void))0x0)();
 return;
}

// Function: <EXTERNAL>::strlen @ 0x100750
size_t strlen(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::_setjmp @ 0x100760
int _setjmp(jmp_buf __env)
{
 int iVar1;
 iVar1 = _setjmp(__env);
 return iVar1;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x100770
void __libc_start_main(int (*main)(void), unsigned long long init, unsigned long long *fini, void (*rtld_fini)(void), void *stack_end)
{
 __libc_start_main(main, init, fini, rtld_fini, stack_end);
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x100780
void __cxa_finalize(void)
{
 __cxa_finalize();
 return;
}

// Function: <EXTERNAL>::signal @ 0x100790
__sighandler_t signal(int __sig,__sighandler_t __handler)
{
 __sighandler_t p_Var1;
 p_Var1 = signal(__sig,__handler);
 return p_Var1;
}

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
int puts(const char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::longjmp @ 0x1007d0
void longjmp(jmp_buf __env,int __val)
{
 longjmp(__env,__val);
}

// Function: <EXTERNAL>::strncpy @ 0x1007e0
char * strncpy(char *__dest,const char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = strncpy(__dest,__src,__n);
 return pcVar1;
}

// Function: <EXTERNAL>::printf @ 0x1007f0
int printf(const char *__format,...)
{
 int iVar1;
 iVar1 = printf(__format);
 return iVar1;
}

// Function: _start @ 0x100800
static void _start(unsigned long long param_1)
{
 __libc_start_main(main,(unsigned long long)&_init,(unsigned long long *)&_fini,0,(void *)param_1);
 abort();
}

// Function: call_weak_fn @ 0x100834
void call_weak_fn(void)
{
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
 __cxa_finalize();
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x1008c0
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize();
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
 strncpy((char *)local_40,(char *)&param_string_encryption_encrypted,0x20);
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

// Function: param_tail_call_optimized @ 0x100aa8
int param_tail_call_optimized(int param_1,int param_2)
{
 uint uVar1;
 uVar1 = param_1 - 1;
 if (0 < param_1) {
 param_2 = (param_2 + param_1 + uVar1 * uVar1) - (int)((unsigned long)uVar1 * (unsigned long)(param_1 - 2) >> 1);
 }
 return param_2;
}

// Function: call_tail_call_optimized @ 0x100ad0
unsigned long long call_tail_call_optimized(void)
{
 return 0x7a314;
}

// Function: param_non_tail_call @ 0x100adc
int param_non_tail_call(int param_1)
{
 uint uVar1;
 uVar1 = param_1 - 1;
 if (0 < param_1) {
 return (param_1 + uVar1 * uVar1) - (int)((unsigned long)uVar1 * (unsigned long)(param_1 - 2) >> 1);
 }
 return 0;
}

// Function: call_non_tail_call @ 0x100b04
unsigned long long call_non_tail_call(void)
{
 return 0x13ba;
}

// Function: param_vectorized_loop @ 0x100b0c
int param_vectorized_loop(int *param_1,int *param_2,int *param_3,uint param_4)
{
 int iVar1;
 unsigned long uVar2;
 unsigned long uVar3;
 int *piVar4;
 if (0 < (int)param_4) {
 uVar2 = (unsigned long)param_4;
 uVar3 = uVar2;
 piVar4 = param_3;
 do {
 uVar3 = uVar3 - 1;
 *piVar4 = *param_2 + *param_1;
 param_1 = param_1 + 1;
 param_2 = param_2 + 1;
 piVar4 = piVar4 + 1;
 } while (uVar3 != 0);
 if (0 < (int)param_4) {
 iVar1 = 0;
 do {
 uVar2 = uVar2 - 1;
 iVar1 = *param_3 + iVar1;
 param_3 = param_3 + 1;
 } while (uVar2 != 0);
 return iVar1;
 }
 }
 return 0;
}

// Function: call_vectorized_loop @ 0x100b60
int call_vectorized_loop(void)
{
 long lVar1;
 unsigned long long uVar2;
 unsigned long long uVar3;
 unsigned long long local_20 [4];
 lVar1 = 0;
 local_20[1] = 0;
 local_20[0] = 0;
 local_20[3] = 0;
 local_20[2] = 0;
 do {
 uVar2 = *(unsigned long long *)(&DAT_00100f10 + lVar1);
 uVar3 = *(unsigned long long *)(&DAT_00100f30 + lVar1);
 *(unsigned long *)((uintptr_t)local_20 + lVar1 + 8) =
 CONCAT44((int)((unsigned long)*(unsigned long long *)(&UNK_00100f38 + lVar1) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(&UNK_00100f18 + lVar1) >> 0x20),
 (int)*(unsigned long long *)(&UNK_00100f38 + lVar1) +
 (int)*(unsigned long long *)(&UNK_00100f18 + lVar1));
 *(unsigned long *)((uintptr_t)local_20 + lVar1) =
 CONCAT44((int)((unsigned long)uVar3 >> 0x20) + (int)((unsigned long)uVar2 >> 0x20),(int)uVar3 + (int)uVar2)
 ;
 lVar1 = lVar1 + 0x10;
 } while (lVar1 != 0x20);
 return (int)local_20[2] + (int)local_20[0] +
 (int)((unsigned long)local_20[2] >> 0x20) + (int)((unsigned long)local_20[0] >> 0x20) +
 (int)local_20[3] + (int)local_20[1] +
 (int)((unsigned long)local_20[3] >> 0x20) + (int)((unsigned long)local_20[1] >> 0x20);
}

// Function: param_link_time_optimization @ 0x100bb4
int param_link_time_optimization(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: call_link_time_optimization @ 0x100bc0
unsigned long long call_link_time_optimization(void)
{
 return 0x14;
}

// Function: div_zero_handler @ 0x100bc8
void div_zero_handler(int sig)
{
 div_zero_caught = 1;
 longjmp(jmp_buffer,1);
}

// Function: param_division_by_zero @ 0x100bec
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

// Function: call_division_by_zero @ 0x100c38
int call_division_by_zero(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 return iVar2 + iVar1;
}

// Function: segv_handler @ 0x100c78
void segv_handler(int sig)
{
 segv_caught = 1;
 longjmp(segv_buffer,1);
}

// Function: param_null_pointer_deref @ 0x100c9c
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

// Function: call_null_pointer_deref @ 0x100ce4
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

// Function: param_buffer_overflow_stack @ 0x100d34
void param_buffer_overflow_stack(void)
{
 return;
}

// Function: param_buffer_overflow_heap @ 0x100d38
void param_buffer_overflow_heap(void)
{
 return;
}

// Function: call_buffer_overflow @ 0x100d3c
unsigned long long call_buffer_overflow(void)
{
 return 0x1e;
}

// Function: param_integer_overflow @ 0x100d44
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

// Function: call_integer_overflow @ 0x100d7c
unsigned long long call_integer_overflow(void)
{
 return 2000000000;
}

// Function: param_undefined_behavior @ 0x100d88
int param_undefined_behavior(int param_1)
{
 return param_1 << 1;
}

// Function: call_undefined_behavior @ 0x100d90
unsigned long long call_undefined_behavior(void)
{
 return 10;
}

// Function: param_implementation_defined @ 0x100d98
unsigned long long param_implementation_defined(void)
{
 return 0x30;
}

// Function: call_implementation_defined @ 0x100da0
unsigned long long call_implementation_defined(void)
{
 return 0x30;
}

// Function: test_obf_opt_edge @ 0x100da8
int test_obf_opt_edge(void)
{
 int iVar1;
 unsigned long uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 puts((char *)&DAT_00101121);
 printf((char *)&DAT_00100f50,10);
 iVar1 = 6;
 iVar5 = 5;
 do {
 iVar3 = iVar1;
 iVar1 = 0;
 if (iVar3 != 0) {
 iVar1 = iVar5 / iVar3;
 }
 iVar1 = iVar5 - iVar1 * iVar3;
 iVar5 = iVar3;
 } while (iVar1 != 0);
 uVar4 = 0x14;
 if (iVar3 != 1) {
 uVar4 = 0x23;
 }
 printf((char *)&DAT_00100f6c,(unsigned long)uVar4);
 iVar1 = printf((char *)&DAT_00100f88,0xe1);
 uVar2 = param_string_encryption();
 printf((char *)&DAT_00100fa5,uVar2 & 0xffffffff);
 printf((char *)&DAT_00100fc1,0x7a314);
 iVar1 = printf((char *)&DAT_00100feb,0x13ba);
 uVar2 = call_vectorized_loop();
 printf((char *)&DAT_00101010,uVar2 & 0xffffffff);
 iVar1 = printf((char *)&DAT_00101036,0x14);
 uVar2 = call_division_by_zero();
 iVar1 = printf((char *)&DAT_00101056,uVar2 & 0xffffffff);
 uVar2 = call_null_pointer_deref();
 printf((char *)&DAT_00101072,uVar2 & 0xffffffff);
 printf((char *)&DAT_0010108f,0x1e);
 printf((char *)&DAT_001010ac,2000000000);
 printf((char *)&DAT_001010dd,10);
 iVar1 = printf((char *)&DAT_001010fa,0x30);
 return iVar1;
}

// Function: main @ 0x100ee0
int main(void)
{
 test_obf_opt_edge();
 return 0;
}

// Function: _fini @ 0x100ef8
static void _fini(void)
{
 return;
}

