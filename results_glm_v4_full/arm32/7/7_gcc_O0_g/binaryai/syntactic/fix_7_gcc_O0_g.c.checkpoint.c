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

/* Additional type definitions */
typedef unsigned int uint;
typedef unsigned char byte;
typedef _Bool bool;
typedef void (*__sighandler_t)(int);
#define SIG_DFL ((__sighandler_t)0)
struct __jmp_buf_tag { unsigned long __jb[32]; unsigned long __mask_was_saved; };
typedef struct __jmp_buf_tag __jmp_buf_tag;
#define NULL ((void *)0)

/* Forward declarations */
unsigned int main(void);
int __aeabi_idivmod(int, int);
int __aeabi_idiv(int, int);
int __aeabi_idiv0(int);
void *stack0x00000004;

/* LZCOUNT implementation */
unsigned int LZCOUNT(unsigned int x) {
    if (x == 0) return 32;
    return __builtin_clz(x);
}

/* Global variables */
char completed_0;
char encrypted_0[] = "\x6f\x51\x3d\x56\x2f\x2c\x54\x29\x38\x32\x5a\x28\x39\x2c\x5a\x2e\x29\x3c\x31\x39\x29\x38\x32\x5a\x0c\x16\x1c\x12\x55\x01\x12\x02";
int div_zero_caught = 0;
int segv_caught = 0;
__jmp_buf_tag jmp_buffer;
__jmp_buf_tag segv_buffer;
extern void __gmon_start__(void);
char DAT_0001172c[] = "Starting obfuscation and optimization edge cases test...\n";
char DAT_0001175c[] = "Fake branch: %u\n";
char DAT_00011778[] = "Opaque predicate: %u\n";
char DAT_00011794[] = "Instruction substitution: %u\n";
char DAT_000117b4[] = "String encryption: %u\n";
char DAT_000117d0[] = "Tail call optimized: %u\n";
char DAT_000117fc[] = "Non-tail call: %u\n";
char DAT_00011824[] = "Vectorized loop: %u\n";
char DAT_0001184c[] = "LTO: %u\n";
char DAT_0001186c[] = "Division by zero: %u\n";
char DAT_00011888[] = "Null pointer dereference: %u\n";
char DAT_000118a8[] = "Buffer overflow: %u\n";
char DAT_000118c8[] = "Integer overflow: %u\n";
char DAT_000118fc[] = "Undefined behavior: %u\n";
char DAT_0001191c[] = "Implementation defined: %u\n";

// Decompiled by BinaryAI
// SHA256: 57cbc9019ffea6ab37d59d4971848cf479c599a5b84e95e8c791205968392ed2



// Function: <EXTERNAL>::raise @ 0x10504
int raise(int __sig)
{
 int iVar1;
 iVar1 = raise(__sig);
 return iVar1;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x10510
void __libc_start_main(int (*main)(void), unsigned int argc, char **argv, int (*init)(void), void (*fini)(void), void (*stack_end))
{
 __libc_start_main(main, argc, argv, init, fini, stack_end);
 return;
}

// Function: <EXTERNAL>::printf @ 0x1051c
int printf(char *__format,...)
{
 int iVar1;
 iVar1 = printf(__format);
 return iVar1;
}

// Function: <EXTERNAL>::longjmp @ 0x10528
void longjmp(__jmp_buf_tag *__env,int __val)
{
 longjmp(__env,__val);
}

// Function: <EXTERNAL>::_setjmp @ 0x10534
int _setjmp(__jmp_buf_tag *__env)
{
 int iVar1;
 iVar1 = _setjmp(__env);
 return iVar1;
}

// Function: <EXTERNAL>::free @ 0x10540
void free(void *__ptr)
{
 free(__ptr);
 return;
}

// Function: <EXTERNAL>::signal @ 0x1054c
__sighandler_t signal(int __sig,__sighandler_t __handler)
{
 __sighandler_t p_Var1;
 p_Var1 = signal(__sig,__handler);
 return p_Var1;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x10558
void __stack_chk_fail(void)
{
 __stack_chk_fail();
}

// Function: <EXTERNAL>::puts @ 0x10564
int puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::malloc @ 0x10570
void * malloc(size_t __size)
{
 void *pvVar1;
 pvVar1 = malloc(__size);
 return pvVar1;
}

// Function: <EXTERNAL>::strlen @ 0x10588
size_t strlen(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::memset @ 0x10594
void * memset(void *__s,int __c,size_t __n)
{
 void *pvVar1;
 pvVar1 = memset(__s,__c,__n);
 return pvVar1;
}

// Function: <EXTERNAL>::strncpy @ 0x105a0
char * strncpy(char *__dest,char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = strncpy(__dest,__src,__n);
 return pcVar1;
}

// Function: <EXTERNAL>::abort @ 0x105ac
void abort(void)
{
 abort();
}











// Function: param_fake_branch @ 0x106b0
unsigned int param_fake_branch(unsigned int param_1)
{
 return param_1;
}

// Function: call_fake_branch @ 0x106e8
unsigned int call_fake_branch(void)
{
 unsigned int uVar1;
 uVar1 = param_fake_branch(10);
 return uVar1;
}

// Function: param_opaque_predicate @ 0x10704
int param_opaque_predicate(int param_1)
{
 int iVar1;
 int local_20;
 int local_1c;
 local_1c = param_1 + 1;
 local_20 = param_1;
 while (local_1c != 0) {
 int _quot;
 int _rem;
 if (local_1c == 0) {
 _quot = (local_20 < 0) ? -0x80000000 : 0x7fffffff;
 _rem = 0;
 }
 else {
 int sign = (local_20 ^ local_1c) < 0;
 unsigned int a = local_20 < 0 ? -local_20 : local_20;
 unsigned int b = local_1c < 0 ? -local_1c : local_1c;
 _quot = a / b;
 _rem = a % b;
 if (sign) _quot = -_quot;
 if (local_20 < 0) _rem = -_rem;
 }
 local_20 = local_1c;
 local_1c = _rem;
 }
 if ((param_1 * param_1 + param_1 * 2 + 1 == (param_1 + 1) * (param_1 + 1)) && (local_20 == 1)) {
 iVar1 = (param_1 + 5) * 2;
 }
 else {
 iVar1 = param_1 * 3 + 0x14;
 }
 return iVar1;
}

// Function: call_opaque_predicate @ 0x10814
unsigned int call_opaque_predicate(void)
{
 unsigned int uVar1;
 uVar1 = param_opaque_predicate(5);
 return uVar1;
}

// Function: param_instruction_substitution @ 0x10830
int param_instruction_substitution(uint param_1)
{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}

// Function: call_instruction_substitution @ 0x108c0
unsigned int call_instruction_substitution(void)
{
 unsigned int uVar1;
 uVar1 = param_instruction_substitution(10);
 return uVar1;
}

// Function: decrypt_string @ 0x108dc
byte * decrypt_string(char *param_1,byte *param_2,size_t param_3,byte param_4)
{
 byte *local_c;
 strncpy((char *)param_2,param_1,param_3);
 param_2[param_3 - 1] = 0;
 for (local_c = param_2; *local_c != 0; local_c = local_c + 1) {
 *local_c = param_4 ^ *local_c;
 }
 return param_2;
}

// Function: param_string_encryption @ 0x10974
int param_string_encryption(void)
{
 size_t sVar1;
 byte local_2c [32];
 int local_c;
 local_c = 0;
 decrypt_string(&encrypted_0,local_2c,0x20,0x5a);
 sVar1 = strlen((char *)local_2c);
 if (local_c != 0) {
 __stack_chk_fail();
 }
 return sVar1 + local_2c[0];
}

// Function: call_string_encryption @ 0x109ec
unsigned int call_string_encryption(void)
{
 unsigned int uVar1;
 uVar1 = param_string_encryption();
 return uVar1;
}

// Function: param_tail_call_optimized @ 0x10a04
int param_tail_call_optimized(int param_1,int param_2)
{
 if (0 < param_1) {
 param_2 = param_tail_call_optimized(param_1 + -1,param_2 + param_1);
 }
 return param_2;
}

// Function: call_tail_call_optimized @ 0x10a58
unsigned int call_tail_call_optimized(void)
{
 unsigned int uVar1;
 uVar1 = param_tail_call_optimized(1000,0);
 return uVar1;
}

// Function: param_non_tail_call @ 0x10a78
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

// Function: call_non_tail_call @ 0x10ac4
unsigned int call_non_tail_call(void)
{
 unsigned int uVar1;
 uVar1 = param_non_tail_call(100);
 return uVar1;
}

// Function: param_vectorized_loop @ 0x10ae0
int param_vectorized_loop(int param_1,int param_2,int param_3,int param_4)
{
 int local_14;
 int local_10;
 int local_c;
 for (local_14 = 0; local_14 < param_4; local_14 = local_14 + 1) {
 *(int *)(param_3 + local_14 * 4) =
 *(int *)(param_1 + local_14 * 4) + *(int *)(param_2 + local_14 * 4);
 }
 local_10 = 0;
 for (local_c = 0; local_c < param_4; local_c = local_c + 1) {
 local_10 = local_10 + *(int *)(param_3 + local_c * 4);
 }
 return local_10;
}

// Function: call_vectorized_loop @ 0x10bc8
unsigned int call_vectorized_loop(void)
{
 unsigned int uVar1;
 unsigned int local_6c;
 unsigned int uStack_68;
 unsigned int uStack_64;
 unsigned int uStack_60;
 unsigned int local_5c;
 unsigned int uStack_58;
 unsigned int uStack_54;
 unsigned int uStack_50;
 unsigned int local_4c;
 unsigned int uStack_48;
 unsigned int uStack_44;
 unsigned int uStack_40;
 unsigned int local_3c;
 unsigned int uStack_38;
 unsigned int uStack_34;
 unsigned int uStack_30;
 char auStack_2c [32];
 int local_c;
 local_c = 0;
 local_6c = 1;
 uStack_68 = 2;
 uStack_64 = 3;
 uStack_60 = 4;
 local_5c = 5;
 uStack_58 = 6;
 uStack_54 = 7;
 uStack_50 = 8;
 local_4c = 8;
 uStack_48 = 7;
 uStack_44 = 6;
 uStack_40 = 5;
 local_3c = 4;
 uStack_38 = 3;
 uStack_34 = 2;
 uStack_30 = 1;
 memset(auStack_2c,0,0x20);
 uVar1 = param_vectorized_loop(&local_6c,&local_4c,auStack_2c,8);
 if (local_c != 0) {
 __stack_chk_fail();
 }
 return uVar1;
}

// Function: lto_target_func @ 0x10c7c
int lto_target_func(int param_1)
{
 return (param_1 + 5) * 2;
}

// Function: param_link_time_optimization @ 0x10ca8
unsigned int param_link_time_optimization(unsigned int param_1)
{
 unsigned int uVar1;
 uVar1 = lto_target_func(param_1);
 return uVar1;
}

// Function: call_link_time_optimization @ 0x10cd0
unsigned int call_link_time_optimization(void)
{
 unsigned int uVar1;
 uVar1 = param_link_time_optimization(5);
 return uVar1;
}

// Function: div_zero_handler @ 0x10cec
void div_zero_handler(int sig)
{
 div_zero_caught = 1;
 longjmp(&jmp_buffer,1);
}

// Function: param_division_by_zero @ 0x10d1c
unsigned int param_division_by_zero(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 signal(8,(__sighandler_t)div_zero_handler);
 iVar1 = _setjmp(&jmp_buffer);
 if (iVar1 == 0) {
 uVar2 = __aeabi_idiv(10,param_1);
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_division_by_zero @ 0x10d80
int call_division_by_zero(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,SIG_DFL);
 return iVar1 + iVar2;
}

// Function: segv_handler @ 0x10dc8
void segv_handler(int sig)
{
 segv_caught = 1;
 longjmp(&segv_buffer,1);
}

// Function: param_null_pointer_deref @ 0x10df8
unsigned int param_null_pointer_deref(unsigned int *param_1)
{
 int iVar1;
 unsigned int uVar2;
 signal(0xb,(__sighandler_t)segv_handler);
 iVar1 = _setjmp(&segv_buffer);
 if (iVar1 == 0) {
 uVar2 = *param_1;
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_null_pointer_deref @ 0x10e54
int call_null_pointer_deref(void)
{
 __sighandler_t p_Var1;
 unsigned int local_18;
 int local_14;
 int local_10;
 int local_c;
 local_c = 0;
 local_18 = 0x2a;
 local_14 = param_null_pointer_deref(&local_18);
 local_10 = param_null_pointer_deref(NULL);
 p_Var1 = signal(0xb,SIG_DFL);
 if (local_c != 0) {
 __stack_chk_fail();
 }
 return local_14 + local_10;
}

// Function: param_buffer_overflow_stack @ 0x10ed8
unsigned int param_buffer_overflow_stack(unsigned int param_1)
{
 int local_1c;
 char auStack_14 [8];
 int local_c;
 local_c = 0;
 for (local_1c = 0; local_1c < 0x11; local_1c = local_1c + 1) {
 auStack_14[local_1c] = 0x41;
 }
 if (local_c == 0) {
 return param_1;
 }
 __stack_chk_fail();
}

// Function: param_buffer_overflow_heap @ 0x10f84
unsigned int param_buffer_overflow_heap(unsigned int param_1)
{
 void *__ptr;
 int local_10;
 __ptr = malloc(0x10);
 if (__ptr == NULL) {
 param_1 = 0xfffffffe;
 }
 else {
 for (local_10 = 0; local_10 < 0x21; local_10 = local_10 + 1) {
 *(char *)((uintptr_t)__ptr + local_10) = 0x42;
 }
 free(__ptr);
 }
 return param_1;
}

// Function: call_buffer_overflow @ 0x11008
int call_buffer_overflow(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_buffer_overflow_stack(10);
 iVar2 = param_buffer_overflow_heap(0x14);
 return iVar1 + iVar2;
}

// Function: param_integer_overflow @ 0x11044
int param_integer_overflow(int param_1,int param_2)
{
 int iVar1;
 iVar1 = param_1 + param_2;
 if (((param_1 < 1) || (param_2 < 1)) || (-1 < param_1 + param_2)) {
 if (((param_1 < 0) && (param_2 < 0)) && (0 < param_1 + param_2)) {
 iVar1 = -2;
 }
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}

// Function: call_integer_overflow @ 0x110f4
int call_integer_overflow(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_integer_overflow(1000000000,1000000000);
 iVar2 = param_integer_overflow(0xffffffff,1);
 return iVar1 + iVar2;
}

// Function: param_undefined_behavior @ 0x1113c
int param_undefined_behavior(int param_1)
{
 return param_1 << 1;
}

// Function: call_undefined_behavior @ 0x1116c
unsigned int call_undefined_behavior(void)
{
 unsigned int uVar1;
 uVar1 = param_undefined_behavior(5);
 return uVar1;
}

// Function: param_implementation_defined @ 0x11194
unsigned int param_implementation_defined(void)
{
 return 0x2c;
}

// Function: call_implementation_defined @ 0x1125c
unsigned int call_implementation_defined(void)
{
 unsigned int uVar1;
 uVar1 = param_implementation_defined();
 return uVar1;
}

// Function: test_obf_opt_edge @ 0x11274
int test_obf_opt_edge(void)
{
 unsigned int uVar1;
 int iVar2;
 puts(&DAT_0001172c);
 uVar1 = call_fake_branch();
 printf(&DAT_0001175c,uVar1);
 uVar1 = call_opaque_predicate();
 printf(&DAT_00011778,uVar1);
 uVar1 = call_instruction_substitution();
 printf(&DAT_00011794,uVar1);
 uVar1 = call_string_encryption();
 printf(&DAT_000117b4,uVar1);
 uVar1 = call_tail_call_optimized();
 printf(&DAT_000117d0,uVar1);
 uVar1 = call_non_tail_call();
 printf(&DAT_000117fc,uVar1);
 uVar1 = call_vectorized_loop();
 printf(&DAT_00011824,uVar1);
 uVar1 = call_link_time_optimization();
 printf(&DAT_0001184c,uVar1);
 uVar1 = call_division_by_zero();
 printf(&DAT_0001186c,uVar1);
 uVar1 = call_null_pointer_deref();
 printf(&DAT_00011888,uVar1);
 uVar1 = call_buffer_overflow();
 printf(&DAT_000118a8,uVar1);
 uVar1 = call_integer_overflow();
 printf(&DAT_000118c8,uVar1);
 uVar1 = call_undefined_behavior();
 printf(&DAT_000118fc,uVar1);
 uVar1 = call_implementation_defined();
 iVar2 = printf(&DAT_0001191c,uVar1);
 return iVar2;
}

// Function: main @ 0x113e0
unsigned int main(void)
{
 test_obf_opt_edge();
 return 0;
}

// Function: __aeabi_idiv @ 0x113f8
int __aeabi_idiv(int param_1,int param_2)
{
 uint uVar1;
 int iVar2;
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
 bVar5 = (int)param_1 < 0;
 if (0 < (int)param_1) {
 param_1 = 0x7fffffff;
 }
 if (bVar5) {
 param_1 = 0x80000000;
 }
 uVar1 = __aeabi_idiv0(param_1);
 return uVar1;
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
 uVar1 = (((((((((((((((((((((((((((((((uint)bVar5 * 2 + (uint)bVar6) * 2 + (uint)bVar7) * 2 +
 (uint)bVar8) * 2 + (uint)bVar9) * 2 + (uint)bVar10) * 2 +
 (uint)bVar11) * 2 + (uint)bVar12) * 2 + (uint)bVar13) * 2 +
 (uint)bVar14) * 2 + (uint)bVar15) * 2 + (uint)bVar16) * 2 +
 (uint)bVar17) * 2 + (uint)bVar18) * 2 + (uint)bVar19) * 2 +
 (uint)bVar20) * 2 + (uint)bVar21) * 2 + (uint)bVar22) * 2 + (uint)bVar23)
 * 2 + (uint)bVar24) * 2 + (uint)bVar25) * 2 + (uint)bVar26) * 2 +
 (uint)bVar27) * 2 + (uint)bVar28) * 2 + (uint)bVar29) * 2 + (uint)bVar30) * 2 +
 (uint)bVar31) * 2 + (uint)bVar32) * 2 + (uint)bVar33) * 2 + (uint)bVar34) * 2 +
 (uint)bVar35) * 2 + (uint)(uVar1 <= uVar3);
 if ((int)uVar4 < 0) {
 uVar1 = -uVar1;
 }
 return uVar1;
 }
}

// Function: .divsi3_skip_div0_test @ 0x11400
int _divsi3_skip_div0_test(int param_1,int param_2)
{
 uint uVar1;
 int iVar2;
 uint uVar3;
 uint uVar4;
 bool in_NG;
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
 uVar1 = (((((((((((((((((((((((((((((((uint)bVar5 * 2 + (uint)bVar6) * 2 + (uint)bVar7) * 2 +
 (uint)bVar8) * 2 + (uint)bVar9) * 2 + (uint)bVar10) * 2 +
 (uint)bVar11) * 2 + (uint)bVar12) * 2 + (uint)bVar13) * 2 +
 (uint)bVar14) * 2 + (uint)bVar15) * 2 + (uint)bVar16) * 2 +
 (uint)bVar17) * 2 + (uint)bVar18) * 2 + (uint)bVar19) * 2 +
 (uint)bVar20) * 2 + (uint)bVar21) * 2 + (uint)bVar22) * 2 + (uint)bVar23)
 * 2 + (uint)bVar24) * 2 + (uint)bVar25) * 2 + (uint)bVar26) * 2 +
 (uint)bVar27) * 2 + (uint)bVar28) * 2 + (uint)bVar29) * 2 + (uint)bVar30) * 2 +
 (uint)bVar31) * 2 + (uint)bVar32) * 2 + (uint)bVar33) * 2 + (uint)bVar34) * 2 +
 (uint)bVar35) * 2 + (uint)(uVar1 <= uVar3);
 if ((int)uVar4 < 0) {
 uVar1 = -uVar1;
 }
 return uVar1;
 }
}

// Function: __aeabi_idivmod @ 0x11618
int __aeabi_idivmod(int param_1,int param_2)
{
 bool bVar1;
 int quotient;
 if (param_2 != 0) {
 quotient = _divsi3_skip_div0_test(param_1, param_2);
 return quotient;
 }
 bVar1 = param_1 < 0;
 if (0 < param_1) {
 param_1 = 0x7fffffff;
 }
 if (bVar1) {
 param_1 = -0x80000000;
 }
 __aeabi_idiv0(param_1);
 return 0;
}

// Function: __aeabi_idiv0 @ 0x11638
int __aeabi_idiv0(int param_1)
{
 raise(8);
 return param_1;
}



