#include <stdarg.h>

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

// Decompiled by BinaryAI
// SHA256: befec6613cc92a31a995df14b5297571cff4fda71fcef30a4fa5ec7d6892da08

/* Type definitions for glibc types */
typedef struct __jmp_buf_tag {
    unsigned long __jb[8];
} __jmp_buf_tag;

typedef void (*__sighandler_t)(int);

/* Global variables */
extern void *__dso_handle;
char completed_0 = 0;
char jmp_buffer[32];
char segv_buffer[32];
char div_zero_caught = 0;
char segv_caught = 0;
char encrypted_0[32];
#define true 1
char DAT_00102004[32];
char DAT_00102031[32];
char DAT_0010204d[32];
char DAT_00102069[32];
char DAT_00102086[32];
char DAT_001020a2[32];
char DAT_001020f1[32];
char DAT_00102117[32];
char DAT_00102137[32];
char DAT_00102153[32];
char DAT_00102170[32];
char DAT_0010218d[32];
char DAT_001021be[32];
char DAT_001021db[32];



// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 ((void (*)(void))0)();
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x1010d0
void __cxa_finalize(void *d)
{
 __cxa_finalize(d);
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
int puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

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
int _setjmp(__jmp_buf_tag *__env)
{
 int iVar1;
 iVar1 = _setjmp(__env);
 return iVar1;
}

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

// Function: <EXTERNAL>::__printf_chk @ 0x101160
void __printf_chk(int __flag, const char *__fmt, ...)
{
 va_list args;
 va_start(args, __flag);
 vprintf((const char *)__fmt, args);
 va_end(args);
 (void)__flag;
}

// Function: <EXTERNAL>::__longjmp_chk @ 0x101170
void __longjmp_chk(void *__env, int __val)
{
 __longjmp_chk(__env, __val);
}

// Function: main @ 0x101180
int main(void)
{
 unsigned long in_RAX;
 test_obf_opt_edge();
 return (int)(in_RAX >> 0x40);
}



// Function: deregister_tm_clones @ 0x1011c0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1011f0
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x101230
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: div_zero_handler @ 0x101279
void div_zero_handler(void)
{
 div_zero_caught = 1;
 __longjmp_chk(jmp_buffer,1);
}

// Function: segv_handler @ 0x10129b
void segv_handler(void)
{
 segv_caught = 1;
 __longjmp_chk(segv_buffer,1);
}

// Function: param_fake_branch @ 0x1012bd
unsigned int param_fake_branch(unsigned int param_1)
{
 return param_1;
}

// Function: call_fake_branch @ 0x1012c4
unsigned long long call_fake_branch(void)
{
 return 10;
}

// Function: param_opaque_predicate @ 0x1012ce
int param_opaque_predicate(unsigned int param_1)
{
 unsigned int uVar1;
 int iVar2;
 unsigned long uVar3;
 unsigned long uVar4;
 uVar1 = param_1 + 1;
 uVar3 = (unsigned long)param_1;
 uVar4 = (unsigned long)uVar1;
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

// Function: call_opaque_predicate @ 0x10130f
void call_opaque_predicate(void)
{
 param_opaque_predicate(5);
 return;
}

// Function: param_instruction_substitution @ 0x10131a
int param_instruction_substitution(unsigned int param_1)
{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}

// Function: call_instruction_substitution @ 0x101334
unsigned long long call_instruction_substitution(void)
{
 return 0xe1;
}

// Function: decrypt_string @ 0x10133e
void decrypt_string(char *param_1,char *param_2,size_t param_3,unsigned char param_4)
{
 unsigned char *pbVar1;
 strncpy(param_2,param_1,param_3);
 param_2[param_3 - 1] = 0;
 for (pbVar1 = (unsigned char *)param_2; *pbVar1 != 0; pbVar1 = pbVar1 + 1) {
 *pbVar1 = *pbVar1 ^ param_4;
 }
}

// Function: param_string_encryption @ 0x10137b
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
 __stack_chk_fail();
 }
 return (int)local_30[0] + (int)sVar1;
}

// Function: call_string_encryption @ 0x1013e0
void call_string_encryption(void)
{
 param_string_encryption();
 return;
}

// Function: param_tail_call_optimized @ 0x1013e8
int param_tail_call_optimized(int param_1,int param_2)
{
 for (; 0 < param_1; param_1 = param_1 + -1) {
 param_2 = param_2 + param_1;
 }
 return param_2;
}

// Function: call_tail_call_optimized @ 0x1013f9
unsigned long long call_tail_call_optimized(void)
{
 return param_tail_call_optimized(1, 500000);
}

// Function: param_non_tail_call @ 0x101403
int param_non_tail_call(int param_1)
{
 int iVar1;
 iVar1 = 0;
 for (; 0 < param_1; param_1 = param_1 + -1) {
 iVar1 = iVar1 + param_1;
 }
 return iVar1;
}

// Function: call_non_tail_call @ 0x101414
void call_non_tail_call(void)
{
 param_non_tail_call(100);
 return;
}

// Function: param_vectorized_loop @ 0x10141f
int param_vectorized_loop(long param_1,long param_2,long param_3,int param_4)
{
 long lVar1;
 int iVar2;
 for (lVar1 = 0; (int)lVar1 < param_4; lVar1 = lVar1 + 1) {
 *(int *)(param_3 + lVar1 * 4) = *(int *)(param_2 + lVar1 * 4) + *(int *)(param_1 + lVar1 * 4);
 }
 iVar2 = 0;
 for (lVar1 = 0; (int)lVar1 < param_4; lVar1 = lVar1 + 1) {
 iVar2 = iVar2 + *(int *)(param_3 + lVar1 * 4);
 }
 return iVar2;
}

// Function: call_vectorized_loop @ 0x101450
void call_vectorized_loop(void)
{
 long lVar1;
 unsigned int *puVar2;
 long in_FS_OFFSET;
 unsigned long long local_70;
 unsigned long long local_68;
 unsigned long long local_60;
 unsigned long long local_58;
 unsigned long long local_50;
 unsigned long long local_48;
 unsigned long long local_40;
 unsigned long long local_38;
 unsigned int local_30 [8];
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
 param_vectorized_loop(&local_70,&local_50,local_30,8);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return;
}

// Function: param_link_time_optimization @ 0x10151b
int param_link_time_optimization(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: call_link_time_optimization @ 0x101524
unsigned long long call_link_time_optimization(void)
{
 return 0x14;
}

// Function: param_division_by_zero @ 0x10152e
unsigned long param_division_by_zero(int param_1)
{
 int iVar1;
 unsigned long uVar2;
 signal(8,div_zero_handler);
 iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 uVar2 = 10 / (long)param_1 & 0xffffffff;
 }
 return uVar2;
}

// Function: call_division_by_zero @ 0x101575
int call_division_by_zero(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 return iVar1 + iVar2;
}

// Function: param_null_pointer_deref @ 0x1015a4
unsigned int param_null_pointer_deref(unsigned int *param_1)
{
 int iVar1;
 unsigned int uVar2;
 signal(0xb,segv_handler);
 iVar1 = _setjmp((__jmp_buf_tag *)segv_buffer);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 uVar2 = *param_1;
 }
 return uVar2;
}

// Function: call_null_pointer_deref @ 0x1015e9
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
 if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return iVar1 + iVar2;
}

// Function: param_buffer_overflow_stack @ 0x10164b
unsigned int param_buffer_overflow_stack(unsigned int param_1)
{
 return param_1;
}

// Function: param_buffer_overflow_heap @ 0x101652
unsigned int param_buffer_overflow_heap(unsigned int param_1)
{
 unsigned int uVar1;
 void *__ptr;
 __ptr = malloc(0x10);
 uVar1 = 0xfffffffe;
 if (__ptr != (void *)0x0) {
 free(__ptr);
 uVar1 = param_1;
 }
 return uVar1;
}

// Function: call_buffer_overflow @ 0x101679
int call_buffer_overflow(void)
{
 int iVar1;
 iVar1 = param_buffer_overflow_heap(0x14);
 return iVar1 + 10;
}

// Function: param_integer_overflow @ 0x10168d
int param_integer_overflow(unsigned int param_1,unsigned int param_2)
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

// Function: call_integer_overflow @ 0x1016b6
unsigned long long call_integer_overflow(void)
{
 return 2000000000;
}

// Function: param_undefined_behavior @ 0x1016c0
int param_undefined_behavior(int param_1)
{
 return param_1 * 2;
}

// Function: call_undefined_behavior @ 0x1016c8
unsigned long long call_undefined_behavior(void)
{
 return 10;
}

// Function: param_implementation_defined @ 0x1016d2
unsigned long long param_implementation_defined(void)
{
 return 0x2f;
}

// Function: call_implementation_defined @ 0x1016dc
unsigned long long call_implementation_defined(void)
{
 return 0x2f;
}

// Function: test_obf_opt_edge @ 0x1016e6
void test_obf_opt_edge(void)
{
 unsigned int uVar1;
 unsigned long long in_RAX;
 puts(&DAT_00102004);
 call_opaque_predicate();
 __printf_chk(1,&DAT_0010204d,uVar1);
 __printf_chk(1,&DAT_00102069,0xe1);
 uVar1 = param_string_encryption();
	__printf_chk(1,&DAT_00102086,uVar1);
	unsigned long long unused = call_tail_call_optimized();
	call_non_tail_call();
 call_vectorized_loop();
 __printf_chk(1,&DAT_001020f1,uVar1);
 __printf_chk(1,&DAT_00102117,0x14);
 uVar1 = call_division_by_zero();
 __printf_chk(1,&DAT_00102137,uVar1);
 uVar1 = call_null_pointer_deref();
 __printf_chk(1,&DAT_00102153,uVar1);
 uVar1 = call_buffer_overflow();
 __printf_chk(1,&DAT_00102170,uVar1);
 __printf_chk(1,&DAT_0010218d,2000000000);
 __printf_chk(1,&DAT_001021be,10);
 __printf_chk(1,&DAT_001021db,0x2f);
 return;
}



