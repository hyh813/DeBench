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
typedef uint32_t uint;
typedef uint8_t byte;
typedef int bool;
#define true 1
#define false 0
#define NULL ((void *)0)
typedef void *__jmp_buf_tag;
typedef void (*__sighandler_t)(int);

// Decompiled by BinaryAI
// SHA256: da501d90efc398391c0844375717bbafddca94f08f5c38fcb7ec773d52080508

// Function: _init @ 0x10508
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn();
 return iVar1;
}

// External function declarations
extern void __aeabi_idiv0(void);
extern int __libc_start_main(int (*main)(void), int argc, char **argv, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
extern int _setjmp(__jmp_buf_tag *__env);
extern void free(void *__ptr);
extern __sighandler_t signal(int __sig, __sighandler_t __handler);
extern void __stack_chk_fail(void);
extern int puts(char *__s);
extern void *malloc(size_t __size);
extern size_t strlen(char *__s);
extern void *memset(void *__s, int __c, size_t __n);
extern char *strncpy(char *__dest, char *__src, size_t __n);
extern int __printf_chk(int __flag, const char *__format, ...);
extern void __longjmp_chk(__jmp_buf_tag *__env, int __val);
extern void abort(void);

// Function: wrap_raise @ 0x10528
int wrap_raise(int __sig)
{
 int iVar1;
 iVar1 = raise(__sig);
 return iVar1;
}

// Function: wrap_libc_start_main @ 0x10534
int wrap_libc_start_main(int (*main_fn)(void), int argc, char **argv, void *init, void *fini, void *rtld_fini, void *stack_end)
{
 return __libc_start_main(main_fn, argc, argv, init, fini, rtld_fini, stack_end);
}

// Function: wrap_setjmp @ 0x10540
int wrap_setjmp(__jmp_buf_tag *__env)
{
 int iVar1;
 iVar1 = _setjmp(__env);
 return iVar1;
}

// Function: wrap_free @ 0x1054c
void wrap_free(void *__ptr)
{
 free(__ptr);
 return;
}

// Function: wrap_signal @ 0x10558
__sighandler_t wrap_signal(int __sig,__sighandler_t __handler)
{
 __sighandler_t p_Var1;
 p_Var1 = signal(__sig,__handler);
 return p_Var1;
}

// Function: wrap_stack_chk_fail @ 0x10564
void wrap_stack_chk_fail(void)
{
 __stack_chk_fail();
}

// Function: wrap_puts @ 0x10570
int wrap_puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: wrap_malloc @ 0x1057c
void * wrap_malloc(size_t __size)
{
 void *pvVar1;
 pvVar1 = malloc(__size);
 return pvVar1;
}

// Function: wrap_strlen @ 0x10594
size_t wrap_strlen(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: wrap_memset @ 0x105a0
void * wrap_memset(void *__s,int __c,size_t __n)
{
 void *pvVar1;
 pvVar1 = memset(__s,__c,__n);
 return pvVar1;
}

// Function: wrap_strncpy @ 0x105ac
char * wrap_strncpy(char *__dest,char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = strncpy(__dest,__src,__n);
 return pcVar1;
}

// Function: wrap_printf_chk @ 0x105b8
int wrap_printf_chk(int __flag, char *__restrict __format, ...)
{
 int iVar1;
 iVar1 = vprintf(__format, __builtin_va_arg_pack());
 return iVar1;
}

// Function: wrap_longjmp_chk @ 0x105c4
void wrap_longjmp_chk(__jmp_buf_tag *__env, int __val)
{
 __longjmp_chk(__env, __val);
}

// Function: wrap_abort @ 0x105d0
void wrap_abort(void)
{
 abort();
}

// Function: main @ 0x105dc
unsigned int main(void)
{
 test_obf_opt_edge();
 return 0;
}

// Function: _start @ 0x105ec
void _start(unsigned int param_1,unsigned int param_2)
{
 __libc_start_main(main,param_2,NULL,0,0,0,param_1);
}

// Function: call_weak_fn @ 0x10630
void call_weak_fn(void)
{
 __gmon_start__();
 return;
}

// Function: deregister_tm_clones @ 0x10654
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x10680
void register_tm_clones(void)
{
 return;
}

// Global variables
char completed_0 = 0;

// Encrypted string data (32 bytes with XOR key 0x5a)
char encrypted_0[32] = {0};

// Format strings from data section
char DAT_00010fd8[] = "Test Results:\n";
char DAT_00011005[] = "Opaque predicate: %d\n";
char DAT_00011021[] = "Opaque predicate result: %d\n";
char DAT_0001103d[] = "Instruction substitution: %d\n";
char DAT_0001105a[] = "String encryption: %d\n";
char DAT_00011076[] = "Tail call optimization: %d\n";
char DAT_000110a0[] = "Non-tail call: %d\n";
char DAT_000110c5[] = "Vectorized loop: %d\n";
char DAT_000110eb[] = "LTO result: %d\n";
char DAT_0001110b[] = "Division by zero: %d\n";
char DAT_00011127[] = "Null pointer deref: %d\n";
char DAT_00011144[] = "Buffer overflow: %d\n";
char DAT_00011161[] = "Integer overflow: %u\n";
char DAT_00011192[] = "Undefined behavior: %d\n";
char DAT_000111af[] = "Implementation defined: %d\n";
char div_zero_caught = 0;
char segv_caught = 0;
__jmp_buf_tag jmp_buffer;
__jmp_buf_tag segv_buffer;

// Function: __do_global_dtors_aux @ 0x106b8
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: div_zero_handler @ 0x106e4
void div_zero_handler(int sig)
{
 div_zero_caught = 1;
 __longjmp_chk(jmp_buffer, 1);
}

// Function: segv_handler @ 0x106fc
void segv_handler(void)
{
 segv_caught = 1;
 __longjmp_chk(segv_buffer, 1);
}

// Function: param_fake_branch @ 0x10718
void param_fake_branch(void)
{
 return;
}

// Function: call_fake_branch @ 0x1071c
unsigned int call_fake_branch(void)
{
 return 10;
}

// Function: param_opaque_predicate @ 0x10724
int param_opaque_predicate(int param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar3 = param_1 + 1;
 iVar2 = iVar3 * iVar3;
 iVar1 = param_1;
 while (iVar3 != 0) {
 iVar1 = iVar3;
 iVar3 = param_1 / iVar3;
 param_1 = iVar1;
 }
 if (iVar1 == 1 && param_1 * param_1 + param_1 * 2 + 1 == iVar2) {
 iVar1 = param_1 * 2 + 10;
 }
 else {
 iVar1 = param_1 * 3 + 0x14;
 }
 return iVar1;
}

// Function: call_opaque_predicate @ 0x1078c
int call_opaque_predicate(void)
{
 return param_opaque_predicate(5);
}

// Function: param_instruction_substitution @ 0x10794
int param_instruction_substitution(uint param_1)
{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}

// Function: call_instruction_substitution @ 0x107b4
unsigned int call_instruction_substitution(void)
{
 return 0xe1;
}

// Function: decrypt_string @ 0x107bc
char * decrypt_string(char *param_1,char *param_2,size_t param_3,byte param_4)
{
 byte *pbVar1;
 strncpy(param_2,param_1,param_3);
 param_2[param_3 - 1] = '\0';
 pbVar1 = (byte *)(param_2 + -1);
 while( true ) {
 pbVar1 = pbVar1 + 1;
 if (*pbVar1 == 0) break;
 *pbVar1 = *pbVar1 ^ param_4;
 }
 return param_2;
}

// Function: param_string_encryption @ 0x10808
char * param_string_encryption(void)
{
 size_t sVar1;
 static byte local_2c [32];
 int local_c;
 local_c = 0;
 decrypt_string(&encrypted_0,(char *)local_2c,0x20,0x5a);
 sVar1 = strlen((char *)local_2c);
 if (local_c != 0) {
 __stack_chk_fail();
 }
 return (char *)local_2c;
}

// Function: param_tail_call_optimized @ 0x10874
int param_tail_call_optimized(int param_1,int param_2)
{
 for (; 0 < param_1; param_1 = param_1 + -1) {
 param_2 = param_2 + param_1;
 }
 return param_2;
}

// Function: call_tail_call_optimized @ 0x10890
unsigned int call_tail_call_optimized(void)
{
 return 0x7a314;
}

// Function: param_non_tail_call @ 0x1089c
int param_non_tail_call(int param_1)
{
 int iVar1;
 iVar1 = 0;
 for (; 0 < param_1; param_1 = param_1 + -1) {
 iVar1 = iVar1 + param_1;
 }
 return iVar1;
}

// Function: call_non_tail_call @ 0x108b8
void call_non_tail_call(void)
{
 param_non_tail_call(100);
 return;
}

// Function: param_vectorized_loop @ 0x108c0
int param_vectorized_loop(int param_1,int param_2,int param_3,int param_4)
{
 int iVar1;
 int iVar2;
 iVar2 = 0;
 if (param_4 < 1) {
 iVar1 = 0;
 for (iVar2 = iVar1; iVar2 < param_4; iVar2 = iVar2 + 1) {
 iVar1 = iVar1 + *(int *)(param_3 + iVar2 * 4);
 }
 return iVar1;
 }
 do {
 *(int *)(param_3 + iVar2 * 4) = *(int *)(param_1 + iVar2 * 4) + *(int *)(param_2 + iVar2 * 4);
 iVar2 = iVar2 + 1;
 } while (iVar2 < param_4);
 iVar2 = 0;
 for (iVar1 = 0; iVar1 < param_4; iVar1 = iVar1 + 1) {
 iVar2 = iVar2 + *(int *)(param_3 + iVar1 * 4);
 }
 return iVar2;
}

// Function: call_vectorized_loop @ 0x1092c
void call_vectorized_loop(void)
{
 unsigned int local_6c = 1;
 unsigned int uStack_68 = 2;
 unsigned int uStack_64 = 3;
 unsigned int uStack_60 = 4;
 unsigned int local_5c = 5;
 unsigned int uStack_58 = 6;
 unsigned int uStack_54 = 7;
 unsigned int uStack_50 = 8;
 unsigned int local_4c = 8;
 unsigned int uStack_48 = 7;
 unsigned int uStack_44 = 6;
 unsigned int uStack_40 = 5;
 unsigned int local_3c = 4;
 unsigned int uStack_38 = 3;
 unsigned int uStack_34 = 2;
 unsigned int uStack_30 = 1;
 char auStack_2c [32];
 int local_c = 0;
 memset(auStack_2c,0,0x20);
 param_vectorized_loop(&local_6c,&local_4c,auStack_2c,8);
 if (local_c != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: param_link_time_optimization @ 0x109c4
int param_link_time_optimization(int param_1)
{
 return (param_1 + 5) * 2;
}

// Function: call_link_time_optimization @ 0x109d0
unsigned int call_link_time_optimization(void)
{
 return 0x14;
}

// Function: param_division_by_zero @ 0x109d8
unsigned int param_division_by_zero(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 signal(8,div_zero_handler);
 iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
 if (iVar1 == 0) {
 uVar2 = __aeabi_idiv(10,(int)param_1);
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_division_by_zero @ 0x10a1c
int call_division_by_zero(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 return iVar1 + iVar2;
}

// Function: param_null_pointer_deref @ 0x10a4c
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

// Function: call_null_pointer_deref @ 0x10a88
void call_null_pointer_deref(unsigned int param_1,unsigned int param_2,unsigned int param_3)
{
 int iVar1;
 int iVar2;
 unsigned int local_18;
 int local_14;
 unsigned int uStack_10;
 local_14 = 0;
 local_18 = 0x2a;
 uStack_10 = param_3;
 iVar1 = param_null_pointer_deref(&local_18);
 iVar2 = param_null_pointer_deref((unsigned int *)0);
 signal(0xb,(__sighandler_t)0);
 return;
}

// Function: param_buffer_overflow_stack @ 0x10af4
void param_buffer_overflow_stack(void)
{
 return;
}

// Function: param_buffer_overflow_heap @ 0x10af8
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

// Function: call_buffer_overflow @ 0x10b24
int call_buffer_overflow(void)
{
 int iVar1;
 iVar1 = param_buffer_overflow_heap(0x14);
 return iVar1 + 10;
}

// Function: param_integer_overflow @ 0x10b38
uint param_integer_overflow(uint param_1,uint param_2)
{
 uint uVar1;
 bool bVar2;
 bool bVar3;
 bVar2 = (int)param_1 < 0;
 bVar3 = param_1 == 0;
 if (0 < (int)param_1) {
 bVar2 = (int)param_2 < 0;
 bVar3 = param_2 == 0;
 }
 uVar1 = param_1 + param_2;
 if (bVar3 || bVar2) {
 if (((uint)(0 < (int)uVar1) & (param_1 & param_2) >> 0x1f) != 0) {
 uVar1 = 0xfffffffe;
 }
 return uVar1;
 }
 return uVar1 | (int)uVar1 >> 0x1f;
}

// Function: call_integer_overflow @ 0x10b70
unsigned int call_integer_overflow(void)
{
 return 2000000000;
}

// Function: param_undefined_behavior @ 0x10b7c
int param_undefined_behavior(int param_1)
{
 return param_1 << 1;
}

// Function: call_undefined_behavior @ 0x10b84
unsigned int call_undefined_behavior(void)
{
 return 10;
}

// Function: param_implementation_defined @ 0x10b8c
unsigned int param_implementation_defined(void)
{
 return 0x2c;
}

// Function: call_implementation_defined @ 0x10b94
unsigned int call_implementation_defined(void)
{
 return 0x2c;
}

// Function: test_obf_opt_edge @ 0x10b9c
void test_obf_opt_edge(void)
{
 unsigned int uVar1;
 puts(&DAT_00010fd8);
 __printf_chk(1,&DAT_00011005,10);
 uVar1 = call_opaque_predicate();
 __printf_chk(1,&DAT_00011021,uVar1);
 __printf_chk(1,&DAT_0001103d,0xe1);
 uVar1 = (unsigned int)param_string_encryption();
 __printf_chk(1,&DAT_0001105a,uVar1);
 uVar1 = call_tail_call_optimized();
 __printf_chk(1,&DAT_00011076,uVar1);
 uVar1 = call_non_tail_call();
 __printf_chk(1,&DAT_000110a0,uVar1);
 uVar1 = call_vectorized_loop();
 __printf_chk(1,&DAT_000110c5,uVar1);
 __printf_chk(1,&DAT_000110eb,0x14);
 uVar1 = call_division_by_zero();
 __printf_chk(1,&DAT_0001110b,uVar1);
 uVar1 = call_null_pointer_deref(0, 0, 0);
 __printf_chk(1,&DAT_00011127,uVar1);
 uVar1 = call_buffer_overflow();
 __printf_chk(1,&DAT_00011144,uVar1);
 __printf_chk(1,&DAT_00011161,2000000000);
 __printf_chk(1,&DAT_00011192,10);
 __printf_chk(1,&DAT_000111af,0x2c);
 return;
}

// Function: __aeabi_idiv @ 0x10cec
int __aeabi_idiv(int param_1, int param_2)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 uint uVar1;
 uint uVar3;
 uint uVar4;
 bool bVar5;
 bool bVar6;
 bool bVar7;
 bool bVar8;
 bool bVar9;
 bool bVar10;
 bool bVar11;
 bool bVar12;
 bool bVar13;
 bool bVar14;
 bool bVar15;
 bool bVar16;
 bool bVar17;
 bool bVar18;
 bool bVar19;
 bool bVar20;
 bool bVar21;
 bool bVar22;
 bool bVar23;
 bool bVar24;
 bool bVar25;
 bool bVar26;
 bool bVar27;
 bool bVar28;
 bool bVar29;
 bool bVar30;
 bool bVar31;
 bool bVar32;
 bool bVar33;
 bool bVar34;
 bool bVar35;
 if (param_2 == 0) {
 bVar5 = param_1 < 0;
 if (0 < param_1) {
 param_1 = 0x7fffffff;
 }
 if (bVar5) {
 param_1 = 0x80000000;
 }
 __aeabi_idiv0();
 return param_1;
 }
 uVar4 = param_1 ^ param_2;
 uVar1 = param_2;
 if ((int)param_2 < 0) {
 uVar1 = -param_2;
 }
 if (uVar1 - 1 == 0) {
 if ((int)param_2 < 0) {
 param_1 = -param_1;
 }
 return param_1;
 }
 uVar3 = param_1;
 if ((int)param_1 < 0) {
 uVar3 = -param_1;
 }
 if (uVar3 <= uVar1) {
 if (uVar3 < uVar1) {
 param_1 = 0;
 }
 if (uVar3 == uVar1) {
 param_1 = (int)uVar4 >> 0x1f | 1;
 }
 return param_1;
 }
 if ((uVar1 & uVar1 - 1) == 0) {
 uVar3 = uVar3 >> (0x1fU - LZCOUNT(uVar1) & 0xff);
 if ((int)uVar4 < 0) {
 uVar3 = -uVar3;
 }
 return uVar3;
 }
 iVar2 = 0x1f - (LZCOUNT(uVar1) - LZCOUNT(uVar3));
 if (iVar2 == 0) {
 bVar5 = uVar1 << 0x1f <= uVar3;
 if (bVar5) {
 uVar3 = uVar3 + uVar1 * -0x80000000;
 }
 bVar6 = uVar1 << 0x1e <= uVar3;
 if (bVar6) {
 uVar3 = uVar3 + uVar1 * -0x40000000;
 }
 bVar7 = uVar1 << 0x1d <= uVar3;
 if (bVar7) {
 uVar3 = uVar3 + uVar1 * -0x20000000;
 }
 bVar8 = uVar1 << 0x1c <= uVar3;
 if (bVar8) {
 uVar3 = uVar3 + uVar1 * -0x10000000;
 }
 bVar9 = uVar1 << 0x1b <= uVar3;
 if (bVar9) {
 uVar3 = uVar3 + uVar1 * -0x8000000;
 }
 bVar10 = uVar1 << 0x1a <= uVar3;
 if (bVar10) {
 uVar3 = uVar3 + uVar1 * -0x4000000;
 }
 bVar11 = uVar1 << 0x19 <= uVar3;
 if (bVar11) {
 uVar3 = uVar3 + uVar1 * -0x2000000;
 }
 bVar12 = uVar1 << 0x18 <= uVar3;
 if (bVar12) {
 uVar3 = uVar3 + uVar1 * -0x1000000;
 }
 bVar13 = uVar1 << 0x17 <= uVar3;
 if (bVar13) {
 uVar3 = uVar3 + uVar1 * -0x800000;
 }
 bVar14 = uVar1 << 0x16 <= uVar3;
 if (bVar14) {
 uVar3 = uVar3 + uVar1 * -0x400000;
 }
 bVar15 = uVar1 << 0x15 <= uVar3;
 if (bVar15) {
 uVar3 = uVar3 + uVar1 * -0x200000;
 }
 bVar16 = uVar1 << 0x14 <= uVar3;
 if (bVar16) {
 uVar3 = uVar3 + uVar1 * -0x100000;
 }
 bVar17 = uVar1 << 0x13 <= uVar3;
 if (bVar17) {
 uVar3 = uVar3 + uVar1 * -0x80000;
 }
 bVar18 = uVar1 << 0x12 <= uVar3;
 if (bVar18) {
 uVar3 = uVar3 + uVar1 * -0x40000;
 }
 bVar19 = uVar1 << 0x11 <= uVar3;
 if (bVar19) {
 uVar3 = uVar3 + uVar1 * -0x20000;
 }
 bVar20 = uVar1 << 0x10 <= uVar3;
 if (bVar20) {
 uVar3 = uVar3 + uVar1 * -0x10000;
 }
 bVar21 = uVar1 << 0xf <= uVar3;
 if (bVar21) {
 uVar3 = uVar3 + uVar1 * -0x8000;
 }
 bVar22 = uVar1 << 0xe <= uVar3;
 if (bVar22) {
 uVar3 = uVar3 + uVar1 * -0x4000;
 }
 bVar23 = uVar1 << 0xd <= uVar3;
 if (bVar23) {
 uVar3 = uVar3 + uVar1 * -0x2000;
 }
 bVar24 = uVar1 << 0xc <= uVar3;
 if (bVar24) {
 uVar3 = uVar3 + uVar1 * -0x1000;
 }
 bVar25 = uVar1 << 0xb <= uVar3;
 if (bVar25) {
 uVar3 = uVar3 + uVar1 * -0x800;
 }
 bVar26 = uVar1 << 10 <= uVar3;
 if (bVar26) {
 uVar3 = uVar3 + uVar1 * -0x400;
 }
 bVar27 = uVar1 << 9 <= uVar3;
 if (bVar27) {
 uVar3 = uVar3 + uVar1 * -0x200;
 }
 bVar28 = uVar1 << 8 <= uVar3;
 if (bVar28) {
 uVar3 = uVar3 + uVar1 * -0x100;
 }
 bVar29 = uVar1 << 7 <= uVar3;
 if (bVar29) {
 uVar3 = uVar3 + uVar1 * -0x80;
 }
 bVar30 = uVar1 << 6 <= uVar3;
 if (bVar30) {
 uVar3 = uVar3 + uVar1 * -0x40;
 }
 bVar31 = uVar1 << 5 <= uVar3;
 if (bVar31) {
 uVar3 = uVar3 + uVar1 * -0x20;
 }
 bVar32 = uVar1 << 4 <= uVar3;
 if (bVar32) {
 uVar3 = uVar3 + uVar1 * -0x10;
 }
 bVar33 = uVar1 << 3 <= uVar3;
 if (bVar33) {
 uVar3 = uVar3 + uVar1 * -8;
 }
 bVar34 = uVar1 << 2 <= uVar3;
 if (bVar34) {
 uVar3 = uVar3 + uVar1 * -4;
 }
 bVar35 = uVar1 << 1 <= uVar3;
 if (bVar35) {
 uVar3 = uVar3 + uVar1 * -2;
 }
 uVar1 = (((((((((((((((((((((((((((((((((uint)(bVar5 ? 1 : 0) << 0x1f) | ((uint)(bVar6 ? 1 : 0) << 0x1e) | ((uint)(bVar7 ? 1 : 0) << 0x1d) | ((uint)(bVar8 ? 1 : 0) << 0x1c) | ((uint)(bVar9 ? 1 : 0) << 0x1b) | ((uint)(bVar10 ? 1 : 0) << 0x1a) | ((uint)(bVar11 ? 1 : 0) << 0x19) | ((uint)(bVar12 ? 1 : 0) << 0x18) | ((uint)(bVar13 ? 1 : 0) << 0x17) | ((uint)(bVar14 ? 1 : 0) << 0x16) | ((uint)(bVar15 ? 1 : 0) << 0x15) | ((uint)(bVar16 ? 1 : 0) << 0x14) | ((uint)(bVar17 ? 1 : 0) << 0x13) | ((uint)(bVar18 ? 1 : 0) << 0x12) | ((uint)(bVar19 ? 1 : 0) << 0x11) | ((uint)(bVar20 ? 1 : 0) << 0x10) | ((uint)(bVar21 ? 1 : 0) << 0xf) | ((uint)(bVar22 ? 1 : 0) << 0xe) | ((uint)(bVar23 ? 1 : 0) << 0xd) | ((uint)(bVar24 ? 1 : 0) << 0xc) | ((uint)(bVar25 ? 1 : 0) << 0xb) | ((uint)(bVar26 ? 1 : 0) << 10) | ((uint)(bVar27 ? 1 : 0) << 9) | ((uint)(bVar28 ? 1 : 0) << 8) | ((uint)(bVar29 ? 1 : 0) << 7) | ((uint)(bVar30 ? 1 : 0) << 6) | ((uint)(bVar31 ? 1 : 0) << 5) | ((uint)(bVar32 ? 1 : 0) << 4) | ((uint)(bVar33 ? 1 : 0) << 3) | ((uint)(bVar34 ? 1 : 0) << 2) | ((uint)(bVar35 ? 1 : 0) << 1) | (uint)(uVar1 <= uVar3));
 if ((int)uVar4 < 0) {
 uVar1 = -uVar1;
 }
 return uVar1;
}

// Function: _divsi3_skip_div0_test
uint _divsi3_skip_div0_test(uint param_1, uint param_2)
{
 uint uVar1;
 uint uVar3;
 uint uVar4;
 int iVar2;
 bool bVar5;
 bool bVar6;
 bool bVar7;
 bool bVar8;
 bool bVar9;
 bool bVar10;
 bool bVar11;
 bool bVar12;
 bool bVar13;
 bool bVar14;
 bool bVar15;
 bool bVar16;
 bool bVar17;
 bool bVar18;
 bool bVar19;
 bool bVar20;
 bool bVar21;
 bool bVar22;
 bool bVar23;
 bool bVar24;
 bool bVar25;
 bool bVar26;
 bool bVar27;
 bool bVar28;
 bool bVar29;
 bool bVar30;
 bool bVar31;
 bool bVar32;
 bool bVar33;
 bool bVar34;
 bool bVar35;
 uVar4 = param_1 ^ param_2;
 uVar1 = param_2;
 if ((int)param_2 < 0) {
 uVar1 = -param_2;
 }
 if (uVar1 - 1 == 0) {
 if ((int)param_2 < 0) {
 param_1 = -param_1;
 }
 return param_1;
 }
 uVar3 = param_1;
 if ((int)param_1 < 0) {
 uVar3 = -param_1;
 }
 if (uVar3 <= uVar1) {
 if (uVar3 < uVar1) {
 param_1 = 0;
 }
 if (uVar3 == uVar1) {
 param_1 = (int)uVar4 >> 0x1f | 1;
 }
 return param_1;
 }
 if ((uVar1 & uVar1 - 1) == 0) {
 uVar3 = uVar3 >> (0x1fU - LZCOUNT(uVar1) & 0xff);
 if ((int)uVar4 < 0) {
 uVar3 = -uVar3;
 }
 return uVar3;
 }
 iVar2 = 0x1f - (LZCOUNT(uVar1) - LZCOUNT(uVar3));
 if (iVar2 == 0) {
 bVar5 = uVar1 << 0x1f <= uVar3;
 if (bVar5) {
 uVar3 = uVar3 + uVar1 * -0x80000000;
 }
 bVar6 = uVar1 << 0x1e <= uVar3;
 if (bVar6) {
 uVar3 = uVar3 + uVar1 * -0x40000000;
 }
 bVar7 = uVar1 << 0x1d <= uVar3;
 if (bVar7) {
 uVar3 = uVar3 + uVar1 * -0x20000000;
 }
 bVar8 = uVar1 << 0x1c <= uVar3;
 if (bVar8) {
 uVar3 = uVar3 + uVar1 * -0x10000000;
 }
 bVar9 = uVar1 << 0x1b <= uVar3;
 if (bVar9) {
 uVar3 = uVar3 + uVar1 * -0x8000000;
 }
 bVar10 = uVar1 << 0x1a <= uVar3;
 if (bVar10) {
 uVar3 = uVar3 + uVar1 * -0x4000000;
 }
 bVar11 = uVar1 << 0x19 <= uVar3;
 if (bVar11) {
 uVar3 = uVar3 + uVar1 * -0x2000000;
 }
 bVar12 = uVar1 << 0x18 <= uVar3;
 if (bVar12) {
 uVar3 = uVar3 + uVar1 * -0x1000000;
 }
 bVar13 = uVar1 << 0x17 <= uVar3;
 if (bVar13) {
 uVar3 = uVar3 + uVar1 * -0x800000;
 }
 bVar14 = uVar1 << 0x16 <= uVar3;
 if (bVar14) {
 uVar3 = uVar3 + uVar1 * -0x400000;
 }
 bVar15 = uVar1 << 0x15 <= uVar3;
 if (bVar15) {
 uVar3 = uVar3 + uVar1 * -0x200000;
 }
 bVar16 = uVar1 << 0x14 <= uVar3;
 if (bVar16) {
 uVar3 = uVar3 + uVar1 * -0x100000;
 }
 bVar17 = uVar1 << 0x13 <= uVar3;
 if (bVar17) {
 uVar3 = uVar3 + uVar1 * -0x80000;
 }
 bVar18 = uVar1 << 0x12 <= uVar3;
 if (bVar18) {
 uVar3 = uVar3 + uVar1 * -0x40000;
 }
 bVar19 = uVar1 << 0x11 <= uVar3;
 if (bVar19) {
 uVar3 = uVar3 + uVar1 * -0x20000;
 }
 bVar20 = uVar1 << 0x10 <= uVar3;
 if (bVar20) {
 uVar3 = uVar3 + uVar1 * -0x10000;
 }
 bVar21 = uVar1 << 0xf <= uVar3;
 if (bVar21) {
 uVar3 = uVar3 + uVar1 * -0x8000;
 }
 bVar22 = uVar1 << 0xe <= uVar3;
 if (bVar22) {
 uVar3 = uVar3 + uVar1 * -0x4000;
 }
 bVar23 = uVar1 << 0xd <= uVar3;
 if (bVar23) {
 uVar3 = uVar3 + uVar1 * -0x2000;
 }
 bVar24 = uVar1 << 0xc <= uVar3;
 if (bVar24) {
 uVar3 = uVar3 + uVar1 * -0x1000;
 }
 bVar25 = uVar1 << 0xb <= uVar3;
 if (bVar25) {
 uVar3 = uVar3 + uVar1 * -0x800;
 }
 bVar26 = uVar1 << 10 <= uVar3;
 if (bVar26) {
 uVar3 = uVar3 + uVar1 * -0x400;
 }
 bVar27 = uVar1 << 9 <= uVar3;
 if (bVar27) {
 uVar3 = uVar3 + uVar1 * -0x200;
 }
 bVar28 = uVar1 << 8 <= uVar3;
 if (bVar28) {
 uVar3 = uVar3 + uVar1 * -0x100;
 }
 bVar29 = uVar1 << 7 <= uVar3;
 if (bVar29) {
 uVar3 = uVar3 + uVar1 * -0x80;
 }
 bVar30 = uVar1 << 6 <= uVar3;
 if (bVar30) {
 uVar3 = uVar3 + uVar1 * -0x40;
 }
 bVar31 = uVar1 << 5 <= uVar3;
 if (bVar31) {
 uVar3 = uVar3 + uVar1 * -0x20;
 }
 bVar32 = uVar1 << 4 <= uVar3;
 if (bVar32) {
 uVar3 = uVar3 + uVar1 * -0x10;
 }
 bVar33 = uVar1 << 3 <= uVar3;
 if (bVar33) {
 uVar3 = uVar3 + uVar1 * -8;
 }
 bVar34 = uVar1 << 2 <= uVar3;
 if (bVar34) {
 uVar3 = uVar3 + uVar1 * -4;
 }
 bVar35 = uVar1 << 1 <= uVar3;
 if (bVar35) {
 uVar3 = uVar3 + uVar1 * -2;
 }
 uVar1 = (((((((((((((((((((((((((((((((((uint)(bVar5 ? 1 : 0) << 0x1f) | ((uint)(bVar6 ? 1 : 0) << 0x1e) | ((uint)(bVar7 ? 1 : 0) << 0x1d) | ((uint)(bVar8 ? 1 : 0) << 0x1c) | ((uint)(bVar9 ? 1 : 0) << 0x1b) | ((uint)(bVar10 ? 1 : 0) << 0x1a) | ((uint)(bVar11 ? 1 : 0) << 0x19) | ((uint)(bVar12 ? 1 : 0) << 0x18) | ((uint)(bVar13 ? 1 : 0) << 0x17) | ((uint)(bVar14 ? 1 : 0) << 0x16) | ((uint)(bVar15 ? 1 : 0) << 0x15) | ((uint)(bVar16 ? 1 : 0) << 0x14) | ((uint)(bVar17 ? 1 : 0) << 0x13) | ((uint)(bVar18 ? 1 : 0) << 0x12) | ((uint)(bVar19 ? 1 : 0) << 0x11) | ((uint)(bVar20 ? 1 : 0) << 0x10) | ((uint)(bVar21 ? 1 : 0) << 0xf) | ((uint)(bVar22 ? 1 : 0) << 0xe) | ((uint)(bVar23 ? 1 : 0) << 0xd) | ((uint)(bVar24 ? 1 : 0) << 0xc) | ((uint)(bVar25 ? 1 : 0) << 0xb) | ((uint)(bVar26 ? 1 : 0) << 10) | ((uint)(bVar27 ? 1 : 0) << 9) | ((uint)(bVar28 ? 1 : 0) << 8) | ((uint)(bVar29 ? 1 : 0) << 7) | ((uint)(bVar30 ? 1 : 0) << 6) | ((uint)(bVar31 ? 1 : 0) << 5) | ((uint)(bVar32 ? 1 : 0) << 4) | ((uint)(bVar33 ? 1 : 0) << 3) | ((uint)(bVar34 ? 1 : 0) << 2) | ((uint)(bVar35 ? 1 : 0) << 1) | (uint)(uVar1 <= uVar3));
 if ((int)uVar4 < 0) {
 uVar1 = -uVar1;
 }
 return uVar1;
}

// Function: __aeabi_idivmod @ 0x10f0c
int __aeabi_idivmod(int param_1,int param_2)
{
 bool bVar1;
 if (param_2 != 0) {
 return _divsi3_skip_div0_test(param_1, param_2);
 }
 bVar1 = param_1 < 0;
 if (0 < param_1) {
 param_1 = 0x7fffffff;
 }
 if (bVar1) {
 param_1 = -0x80000000;
 }
 __aeabi_idiv0();
 return 0;
}

// Function: __aeabi_idiv0 @ 0x10f2c
void __aeabi_idiv0(void)
{
 raise(8);
}

// Function: _fini @ 0x10f3c
void _fini(void)
{
 return;
}

