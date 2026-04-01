#include <stdarg.h>
#include <stdio.h>

typedef __builtin_va_list va_list;

/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned int uint;
typedef unsigned char byte;
typedef _Bool bool;
typedef void (*__sighandler_t)(int);

#define __JB_SIZE__ 32

typedef struct __jmp_buf_tag {
    unsigned long __jb[__JB_SIZE__];
} __jmp_buf_tag[1];

#ifndef _SIZE_T
typedef unsigned long size_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
#define _SIZE_T
#endif

/* Global variables */
__jmp_buf_tag jmp_buffer;
__jmp_buf_tag segv_buffer;
int completed_0;
int div_zero_caught;
int segv_caught;
void *stack0x00000004;

/* Data constants */
char encrypted_0[31] = {0};
char DAT_00011154[] = "Testing obfuscation and optimization techniques\n";
char DAT_00011184[] = "Opaque predicate result: %d\n";
char DAT_000111a0[] = "Instruction substitution test\n";
char DAT_000111bc[] = "Instruction substitution result: 0x%x\n";
char DAT_000111dc[] = "String encryption result: %s\n";
char DAT_000111f8[] = "Tail call optimized result: %d\n";
char DAT_00011224[] = "Non-tail call result: %d\n";
char DAT_0001124c[] = "Vectorized loop result: %d\n";
char DAT_00011274[] = "Link time optimization result: %d\n";
char DAT_00011294[] = "Division by zero test result: %d\n";
char DAT_000112b0[] = "Null pointer deref test result: %d\n";
char DAT_000112d0[] = "Buffer overflow result: %d\n";
char DAT_000112f0[] = "Integer overflow result: %d\n";
char DAT_00011324[] = "Undefined behavior result: %d\n";
char DAT_00011344[] = "Implementation defined result: %d\n";

// Decompiled by BinaryAI
// SHA256: c0ffd9d64f677e25d705ac97b02f9722811d9a4e7decfc62d2813e5e1dfbf966

/* Helper function for leading zero count */
static inline int LZCOUNT(uint x)
{
    int n = 0;
    if (x == 0) return 32;
    if ((x & 0xFFFF0000) == 0) { n += 16; x <<= 16; }
    if ((x & 0xFF000000) == 0) { n += 8; x <<= 8; }
    if ((x & 0xF0000000) == 0) { n += 4; x <<= 4; }
    if ((x & 0xC0000000) == 0) { n += 2; x <<= 2; }
    if ((x & 0x80000000) == 0) { n += 1; }
    return n;
}

/* Helper macro for __aeabi_idivmod - returns quotient in *quot, remainder in *rem */
#define divmod(numerator, denominator, quot, rem) \
    asm volatile("bl __aeabi_idivmod" \
                 : "=r" (*(quot)), "=r" (*(rem)) \
                 : "r" (numerator), "r" (denominator) \
                 : "r0", "r1", "r2", "r3", "lr", "cc")



// Function: <EXTERNAL>::puts @ 0x10528
int puts(const char *__s)
{
 return printf("%s\n", __s);
}

// Function: <EXTERNAL>::raise @ 0x10528
int raise(int __sig)
{
 return __sig;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x10534
int __libc_start_main(int (*main)(int, char **, char **), int argc, char **argv,
                      int (*init)(void), void (*fini)(void), void (*rtld_fini)(void))
{
 return main(argc, argv, 0);
}

// Function: <EXTERNAL>::_setjmp @ 0x10540
int _setjmp(__jmp_buf_tag *__env)
{
 (void)__env;
 return 0;
}

// Function: <EXTERNAL>::free @ 0x1054c
void free(void *__ptr)
{
 (void)__ptr;
 return;
}

// Function: <EXTERNAL>::signal @ 0x10558
__sighandler_t signal(int __sig,__sighandler_t __handler)
{
 (void)__sig;
 (void)__handler;
 return 0;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x10564
void __stack_chk_fail(void)
{
 abort();
}



// Function: <EXTERNAL>::malloc @ 0x1057c
void * malloc(size_t __size)
{
 (void)__size;
 return 0;
}

// Function: <EXTERNAL>::strlen @ 0x10594
size_t strlen(char *__s)
{
 size_t len = 0;
 while (__s[len]) len++;
 return len;
}

// Function: <EXTERNAL>::memset @ 0x105a0
void * memset(void *__s,int __c,size_t __n)
{
 unsigned char *p = __s;
 while (__n--) *p++ = __c;
 return __s;
}

// Function: <EXTERNAL>::strncpy @ 0x105ac
char * strncpy(char *__dest,char *__src,size_t __n)
{
 char *p = __dest;
 while (__n-- && (*p++ = *__src++));
 while (__n--) *p++ = 0;
 return __dest;
}

// Function: <EXTERNAL>::__printf_chk @ 0x105b8
int __printf_chk(int __flag, const char *__fmt, ...)
{
 int iVar1;
 va_list args;
 (void)__flag;
 va_start(args, __fmt);
 iVar1 = vprintf(__fmt, args);
 va_end(args);
 return iVar1;
}

// Function: <EXTERNAL>::__longjmp_chk @ 0x105c4
void __longjmp_chk(__jmp_buf_tag *__env)
{
 (void)__env;
 return;
}

// Function: <EXTERNAL>::abort @ 0x105d0
void abort(void)
{
 while(1);
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
 main();
}

// Function: call_weak_fn @ 0x10630
void call_weak_fn(void)
{
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

// Function: __do_global_dtors_aux @ 0x106b8
void __do_global_dtors_aux(void)
{
 return;
}

// Function: div_zero_handler @ 0x106e4
void div_zero_handler(int sig)
{
 (void)sig;
 div_zero_caught = 1;
 __longjmp_chk(jmp_buffer);
}

// Function: segv_handler @ 0x106fc
void segv_handler(int sig)
{
 (void)sig;
 segv_caught = 1;
 __longjmp_chk(segv_buffer);
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
 int iVar4;
 int iVar5;
 int quot;
 iVar3 = param_1 + 1;
 iVar2 = param_1;
 iVar1 = iVar3;
 iVar5 = 0;
 if (iVar3 != 0) {
 do {
 iVar4 = iVar1;
 divmod(iVar2, iVar1, &iVar1, &iVar5);
 iVar2 = iVar4;
 } while (iVar5 != 0);
 if (iVar4 == 1 && param_1 * param_1 + param_1 * 2 + 1 == iVar3 * iVar3) {
 return param_1 * 2 + 10;
 }
 }
 return param_1 * 3 + 0x14;
}

// Function: call_opaque_predicate @ 0x10794
unsigned int call_opaque_predicate(void)
{
 int iVar1;
 int iVar2;
 unsigned int uVar3;
 int iVar4;
 int rem;
 iVar2 = 5;
 iVar1 = 6;
 do {
 iVar4 = iVar1;
 divmod(iVar2, iVar1, &iVar1, &rem);
 iVar2 = iVar4;
 } while (iVar1 != 0);
 if (iVar4 == 1) {
 uVar3 = 0x14;
 }
 else {
 uVar3 = 0x23;
 }
 return uVar3;
}

// Function: param_instruction_substitution @ 0x107c4
int param_instruction_substitution(uint param_1)
{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}

// Function: call_instruction_substitution @ 0x107e4
unsigned int call_instruction_substitution(void)
{
 return 0xe1;
}

// Function: decrypt_string @ 0x107ec
byte * decrypt_string(char *param_1,byte *param_2,size_t param_3,byte param_4)
{
 byte bVar1;
 byte *pbVar2;
 strncpy((char *)param_2,param_1,param_3);
 param_2[param_3 - 1] = 0;
 bVar1 = *param_2;
 pbVar2 = param_2;
 while (bVar1 != 0) {
 *pbVar2 = bVar1 ^ param_4;
 pbVar2 = pbVar2 + 1;
 bVar1 = *pbVar2;
 }
 return param_2;
}

// Function: param_string_encryption @ 0x10840
byte *param_string_encryption(void)
{
 size_t sVar1;
 byte *pbVar2;
 uint uVar3;
 static byte local_2c [31];
 int local_c;
 local_c = 0;
 strncpy((char *)local_2c,&encrypted_0,0x1f);
 uVar3 = (uint)local_2c[0];
 if (uVar3 != 0) {
 pbVar2 = local_2c;
 do {
 *pbVar2 = (byte)uVar3 ^ 0x5a;
 pbVar2 = pbVar2 + 1;
 uVar3 = (uint)*pbVar2;
 } while (uVar3 != 0);
 uVar3 = (uint)local_2c[0];
 }
 sVar1 = strlen((char *)local_2c);
 if (local_c == 0) {
 return local_2c;
 }
 __stack_chk_fail();
 return local_2c;
}

// Function: param_tail_call_optimized @ 0x108d4
int param_tail_call_optimized(int param_1,int param_2)
{
 int iVar1;
 if (param_1 < 1) {
 return param_2;
 }
 do {
 iVar1 = param_1 + -1;
 param_2 = param_2 + param_1;
 param_1 = iVar1;
 } while (iVar1 != 0);
 return param_2;
}

// Function: call_tail_call_optimized @ 0x108f4
unsigned int call_tail_call_optimized(void)
{
 return 0x7a314;
}

// Function: param_non_tail_call @ 0x10900
int param_non_tail_call(int param_1)
{
 int iVar1;
 int iVar2;
 iVar1 = 0;
 if (param_1 < 1) {
 return iVar1;
 }
 do {
 iVar2 = param_1 + -1;
 iVar1 = iVar1 + param_1;
 param_1 = iVar2;
 } while (iVar2 != 0);
 return iVar1;
}

// Function: call_non_tail_call @ 0x10920
unsigned int call_non_tail_call(void)
{
 return 0x13ba;
}

// Function: param_vectorized_loop @ 0x1092c
int param_vectorized_loop(int param_1,int param_2,int param_3,int param_4)
{
 int *piVar1;
 int iVar2;
 int *piVar3;
 int *piVar4;
 int *piVar5;
 int *piVar6;
 if (0 < param_4) {
 piVar5 = (int *)(param_3 + -4);
 piVar1 = (int *)(param_1 + -4);
 piVar3 = (int *)(param_2 + -4);
 piVar6 = piVar1 + param_4;
 piVar4 = piVar5;
 do {
 piVar1 = piVar1 + 1;
 piVar3 = piVar3 + 1;
 piVar4 = piVar4 + 1;
 *piVar4 = *piVar1 + *piVar3;
 } while (piVar1 != piVar6);
 iVar2 = 0;
 piVar4 = piVar5 + param_4;
 do {
 piVar5 = piVar5 + 1;
 iVar2 = iVar2 + *piVar5;
 } while (piVar4 != piVar5);
 return iVar2;
 }
 return 0;
}

// Function: call_vectorized_loop @ 0x10990
int call_vectorized_loop(void)
{
 int *piVar1;
 int iVar2;
 int *piVar3;
 int *piVar5;
 int local_6c [8];
 int local_4c [4];
 unsigned int local_3c;
 unsigned int uStack_38;
 unsigned int uStack_34;
 unsigned int uStack_30;
 int aiStack_2c [8];
 int local_c;
 int *piVar4;
 local_c = 0;
 local_6c[0] = 1;
 local_6c[1] = 2;
 local_6c[2] = 3;
 local_6c[3] = 4;
 local_6c[4] = 5;
 local_6c[5] = 6;
 local_6c[6] = 7;
 local_6c[7] = 8;
 local_4c[0] = 8;
 local_4c[1] = 7;
 local_4c[2] = 6;
 local_4c[3] = 5;
 local_3c = 4;
 uStack_38 = 3;
 uStack_34 = 2;
 uStack_30 = 1;
 memset(aiStack_2c,0,0x20);
 piVar1 = local_4c;
 piVar3 = local_6c;
 piVar5 = aiStack_2c;
 do {
 piVar4 = piVar3 + 1;
 *piVar5 = *piVar3 + *piVar1;
 piVar1 = piVar1 + 1;
 piVar3 = piVar4;
 piVar5 = piVar5 + 1;
 } while (piVar4 != local_4c);
 iVar2 = 0;
 piVar1 = aiStack_2c;
 do {
 piVar3 = piVar1 + 1;
 iVar2 = iVar2 + *piVar1;
 piVar1 = piVar3;
 } while (&local_c != piVar3);
 if (local_c == 0) {
 return iVar2;
 }
 __stack_chk_fail();
 return 0;
}

// Function: param_link_time_optimization @ 0x10a58
int param_link_time_optimization(int param_1)
{
 return (param_1 + 5) * 2;
}

// Function: call_link_time_optimization @ 0x10a64
unsigned int call_link_time_optimization(void)
{
 return 0x14;
}

// Function: param_division_by_zero @ 0x10a6c
unsigned int param_division_by_zero(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 signal(8,div_zero_handler);
 iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
 if (iVar1 == 0) {
 uVar2 = __aeabi_idiv(10,param_1);
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_division_by_zero @ 0x10abc
int call_division_by_zero(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 return iVar1 + iVar2;
}

// Function: param_null_pointer_deref @ 0x10aec
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

// Function: call_null_pointer_deref @ 0x10b30
void call_null_pointer_deref(unsigned int param_1,unsigned int param_2)
{
 int iVar1;
 int iVar2;
 unsigned int local_18;
 int local_14;
 local_14 = 0;
 local_18 = 0x2a;
 iVar1 = param_null_pointer_deref(&local_18);
 iVar2 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0x0);
 if (local_14 == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: param_buffer_overflow_stack @ 0x10ba0
void param_buffer_overflow_stack(void)
{
 return;
}

// Function: param_buffer_overflow_heap @ 0x10ba4
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

// Function: call_buffer_overflow @ 0x10bd0
unsigned int call_buffer_overflow(void)
{
 void *__ptr;
 __ptr = malloc(0x10);
 if (__ptr != (void *)0x0) {
 free(__ptr);
 return 0x1e;
 }
 return 8;
}

// Function: param_integer_overflow @ 0x10bf8
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
 if (((uint)(0 < (int)uVar1) & (param_2 & param_1) >> 0x1f) != 0) {
 uVar1 = 0xfffffffe;
 }
 return uVar1;
 }
 return uVar1 | (int)uVar1 >> 0x1f;
}

// Function: call_integer_overflow @ 0x10c30
unsigned int call_integer_overflow(void)
{
 return 2000000000;
}

// Function: param_undefined_behavior @ 0x10c3c
int param_undefined_behavior(int param_1)
{
 return param_1 << 1;
}

// Function: call_undefined_behavior @ 0x10c44
unsigned int call_undefined_behavior(void)
{
 return 10;
}

// Function: param_implementation_defined @ 0x10c4c
unsigned int param_implementation_defined(void)
{
 return 0x2c;
}

// Function: call_implementation_defined @ 0x10c54
unsigned int call_implementation_defined(void)
{
 return 0x2c;
}

// Function: test_obf_opt_edge @ 0x10c5c
void test_obf_opt_edge(void)
{
 unsigned int uVar1;
 int iVar1;
 int iVar2;
 void *__ptr;
 int extraout_r1;
 int iVar3;
 unsigned int local_18;
 int local_14;
 local_14 = 0;
 puts(&DAT_00011154);
 __printf_chk(1,&DAT_00011184,10);
 iVar3 = 6;
 iVar2 = 5;
 do {
 int rem;
 divmod(iVar2,iVar3,&iVar1,&rem);
 iVar2 = iVar3;
 iVar3 = iVar1;
 } while (iVar1 != 0);
 __printf_chk(1,&DAT_000111a0);
 __printf_chk(1,&DAT_000111bc,0xe1);
 uVar1 = param_string_encryption();
 __printf_chk(1,&DAT_000111dc,uVar1);
 __printf_chk(1,&DAT_000111f8,0x7a314);
 __printf_chk(1,&DAT_00011224,0x13ba);
 uVar1 = call_vectorized_loop();
 __printf_chk(1,&DAT_0001124c,uVar1);
 __printf_chk(1,&DAT_00011274,0x14);
 iVar2 = param_division_by_zero(5);
 iVar3 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 __printf_chk(1,&DAT_00011294,iVar2 + iVar3);
 local_18 = 0x2a;
 iVar2 = param_null_pointer_deref(&local_18);
 iVar3 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0x0);
 __printf_chk(1,&DAT_000112b0,iVar2 + iVar3);
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 uVar1 = 8;
 }
 else {
 free(__ptr);
 uVar1 = 0x1e;
 }
 __printf_chk(1,&DAT_000112d0,uVar1);
 __printf_chk(1,&DAT_000112f0,2000000000);
 __printf_chk(1,&DAT_00011324,10);
 if (local_14 != 0) {
 __stack_chk_fail();
 }
 __printf_chk(1,&DAT_00011344,0x2c);
 return;
}

// Function: __aeabi_idiv @ 0x10e68
int __aeabi_idiv(int param_1,int param_2)
{
 int iVar2;
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
 bVar5 = (int)param_1 < 0;
 if (0 < (int)param_1) {
 param_1 = 0x7fffffff;
 }
 if (bVar5) {
 param_1 = -0x80000000;
 }
 __aeabi_idiv0(param_1);
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

// Function: .divsi3_skip_div0_test @ 0x10e70
uint _divsi3_skip_div0_test(uint param_1,uint param_2)
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

// Function: __aeabi_idivmod @ 0x11088
int __aeabi_idivmod(int param_1,int param_2)
{
 if (param_2 == 0) {
 return 0;
 }
 return param_1 / param_2;
}

// Function: __aeabi_idiv0 @ 0x110a8
void __aeabi_idiv0(int param_1)
{
 (void)param_1;
 return;
}

// Function: _fini @ 0x110b8
void _fini(void)
{
 return;
}

