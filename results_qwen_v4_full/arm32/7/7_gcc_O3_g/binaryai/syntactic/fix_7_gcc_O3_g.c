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
typedef unsigned int uint;
typedef unsigned char byte;
typedef int bool;
typedef struct { unsigned long __jmp_buf[8]; } __jmp_buf_tag;
typedef void (*__sighandler_t)(int);

#ifndef NULL
#define NULL ((void*)0)
#endif

// Global variables
__jmp_buf_tag jmp_buffer;
__jmp_buf_tag segv_buffer;
int completed_0;
int div_zero_caught;
int segv_caught;
byte encrypted_0[32];

// Forward declarations
uint __aeabi_idiv(uint param_1,uint param_2);
void __aeabi_idiv0(void);
uint _divsi3_skip_div0_test(uint param_1,uint param_2);
uint LZCOUNT(uint x);
char DAT_00011188[] = "Test";
char DAT_000111b8[] = "%d";
char DAT_000111d4[] = "\n";
char DAT_000111f0[] = "%d";
char DAT_00011210[] = "%d";
char DAT_0001122c[] = "%d";
char DAT_00011258[] = "%d";
char DAT_00011280[] = "%d";
char DAT_000112a8[] = "%d";
char DAT_000112c8[] = "%d";
char DAT_000112e4[] = "%d";
char DAT_00011304[] = "%d";
char DAT_00011324[] = "%d";
char DAT_00011358[] = "%d";
char DAT_00011378[] = "%d";

// Function: LZCOUNT
uint LZCOUNT(uint x)
{
    uint count = 0;
    if (x == 0) return 32;
    while ((x & 0x80000000) == 0) {
        count++;
        x <<= 1;
    }
    return count;
}

// Decompiled by BinaryAI
// SHA256: 4a765bb7e2b3cf27536470c42cfed674ea41f9b686d339da8494900762746c1a

// Function: <EXTERNAL>::raise @ 0x10504
int raise(int __sig)
{
 int iVar1;
 iVar1 = raise(__sig);
 return iVar1;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x10510
void __libc_start_main(void (*main)(void))
{
 __libc_start_main(main);
 return;
}

// Function: <EXTERNAL>::_setjmp @ 0x1051c
int _setjmp(__jmp_buf_tag *__env)
{
 int iVar1;
 iVar1 = _setjmp(__env);
 return iVar1;
}

// Function: <EXTERNAL>::free @ 0x10528
void free(void *__ptr)
{
 free(__ptr);
 return;
}

// Function: <EXTERNAL>::signal @ 0x10534
__sighandler_t signal(int __sig,__sighandler_t __handler)
{
 __sighandler_t p_Var1;
 p_Var1 = signal(__sig,__handler);
 return p_Var1;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x10540
void __stack_chk_fail(void)
{
 __stack_chk_fail();
}

// Function: <EXTERNAL>::puts @ 0x1054c
int puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::malloc @ 0x10558
void * malloc(size_t __size)
{
 void *pvVar1;
 pvVar1 = malloc(__size);
 return pvVar1;
}

// Function: <EXTERNAL>::strlen @ 0x10570
size_t strlen(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::strncpy @ 0x1057c
char * strncpy(char *__dest,char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = strncpy(__dest,__src,__n);
 return pcVar1;
}

// Function: <EXTERNAL>::__printf_chk @ 0x10588
int __printf_chk(int __flag, const char *__format, ...)
{
 int iVar1;
 iVar1 = __printf_chk(__flag, __format);
 return iVar1;
}

// Function: <EXTERNAL>::__longjmp_chk @ 0x10594
void __longjmp_chk(__jmp_buf_tag *__env, int __val)
{
 __longjmp_chk(__env, __val);
}

// Function: <EXTERNAL>::abort @ 0x105a0
void abort(void)
{
 abort();
}

// Function: main @ 0x105ac
unsigned int main(void)
{
 test_obf_opt_edge();
 return 0;
}

// Function: div_zero_handler @ 0x106b4
void div_zero_handler(int param_1)
{
 div_zero_caught = 1;
 __longjmp_chk(&jmp_buffer, 1);
}

// Function: segv_handler @ 0x106cc
void segv_handler(int param_1)
{
 segv_caught = 1;
 __longjmp_chk(&segv_buffer, 1);
}

// Function: param_division_by_zero.constprop.0 @ 0x106e8
unsigned int param_division_by_zero_constprop_0(void)
{
 void *UNRECOVERED_JUMPTABLE;
 int iVar1;
 unsigned int uVar2;
 signal(8,div_zero_handler);
 iVar1 = _setjmp(&jmp_buffer);
 if (iVar1 == 0) {
 uVar2 = 2;
 return uVar2;
 }
 return 0xffffffff;
}

// Function: param_division_by_zero.constprop.1 @ 0x1071c
unsigned int param_division_by_zero_constprop_1(void)
{
 int iVar1;
 unsigned int uVar2;
 signal(8,div_zero_handler);
 iVar1 = _setjmp(&jmp_buffer);
 if (iVar1 == 0) {
 uVar2 = 2;
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: param_fake_branch @ 0x1074c
void param_fake_branch(void)
{
 return;
}

// Function: call_fake_branch @ 0x10750
unsigned int call_fake_branch(void)
{
 return 10;
}

// Function: param_opaque_predicate @ 0x10758
int param_opaque_predicate(int param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int extraout_r1;
 iVar3 = param_1 + 1;
 iVar2 = param_1;
 iVar1 = iVar3;
 if (iVar3 != 0) {
 do {
 iVar4 = iVar1;
 __aeabi_idivmod(iVar2);
 iVar2 = iVar4;
 iVar1 = extraout_r1;
 } while (extraout_r1 != 0);
 if (iVar4 == 1 && param_1 * param_1 + param_1 * 2 + 1 == iVar3 * iVar3) {
 return param_1 * 2 + 10;
 }
 }
 return param_1 * 3 + 0x14;
}

// Function: call_opaque_predicate @ 0x107c8
unsigned int call_opaque_predicate(void)
{
 int iVar1;
 int iVar2;
 unsigned int uVar3;
 int iVar4;
 int extraout_r1;
 iVar2 = 5;
 iVar1 = 6;
 do {
 iVar4 = iVar1;
 __aeabi_idivmod(iVar2);
 iVar2 = iVar4;
 iVar1 = extraout_r1;
 } while (extraout_r1 != 0);
 if (iVar4 == 1) {
 uVar3 = 0x14;
 }
 else {
 uVar3 = 0x23;
 }
 return uVar3;
}

// Function: param_instruction_substitution @ 0x107f8
int param_instruction_substitution(uint param_1)
{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}

// Function: call_instruction_substitution @ 0x10818
unsigned int call_instruction_substitution(void)
{
 return 0xe1;
}

// Function: decrypt_string @ 0x10820
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

// Function: param_string_encryption @ 0x10874
void param_string_encryption(void)
{
 size_t sVar1;
 byte *pbVar2;
 uint uVar3;
 byte local_2c [31];
 char local_d;
 int local_c;
 local_c = 0;
 strncpy((char *)local_2c,&encrypted_0,0x1f);
 uVar3 = (uint)local_2c[0];
 local_d = 0;
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
 return;
 }
 __stack_chk_fail();
}

// Function: call_string_encryption @ 0x10904
void call_string_encryption(void)
{
 size_t sVar1;
 byte *pbVar2;
 uint uVar3;
 byte local_2c [31];
 char local_d;
 int local_c;
 local_c = 0;
 strncpy((char *)local_2c,&encrypted_0,0x1f);
 uVar3 = (uint)local_2c[0];
 local_d = 0;
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
 return;
 }
 __stack_chk_fail();
}

// Function: param_tail_call_optimized @ 0x10994
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

// Function: call_tail_call_optimized @ 0x109b4
unsigned int call_tail_call_optimized(void)
{
 return 0x7a314;
}

// Function: param_non_tail_call @ 0x109c0
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

// Function: call_non_tail_call @ 0x109e0
unsigned int call_non_tail_call(void)
{
 return 0x13ba;
}

// Function: param_vectorized_loop @ 0x109ec
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

// Function: call_vectorized_loop @ 0x10a50
unsigned int call_vectorized_loop(void)
{
 return 0x48;
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
 iVar1 = _setjmp(&jmp_buffer);
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
 iVar1 = param_division_by_zero_constprop_1();
 iVar2 = param_division_by_zero_constprop_0();
 signal(8,(__sighandler_t)0x0);
 return iVar1 + iVar2;
}

// Function: param_null_pointer_deref @ 0x10ae4
unsigned int param_null_pointer_deref(unsigned int *param_1)
{
 int iVar1;
 unsigned int uVar2;
 signal(0xb,segv_handler);
 iVar1 = _setjmp(&segv_buffer);
 if (iVar1 == 0) {
 uVar2 = *param_1;
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_null_pointer_deref @ 0x10b28
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
 signal(0xb,(__sighandler_t)NULL);
 if (local_14 == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: param_buffer_overflow_stack @ 0x10b98
void param_buffer_overflow_stack(void)
{
 return;
}

// Function: param_buffer_overflow_heap @ 0x10b9c
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

// Function: call_buffer_overflow @ 0x10bc8
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

// Function: param_integer_overflow @ 0x10bf0
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

// Function: call_integer_overflow @ 0x10c28
unsigned int call_integer_overflow(void)
{
 return 2000000000;
}

// Function: param_undefined_behavior @ 0x10c34
int param_undefined_behavior(int param_1)
{
 return param_1 << 1;
}

// Function: call_undefined_behavior @ 0x10c3c
unsigned int call_undefined_behavior(void)
{
 return 10;
}

// Function: param_implementation_defined @ 0x10c44
unsigned int param_implementation_defined(void)
{
 return 0x2c;
}

// Function: call_implementation_defined @ 0x10c4c
unsigned int call_implementation_defined(void)
{
 return 0x2c;
}

// Function: test_obf_opt_edge @ 0x10c54
void test_obf_opt_edge(void)
{
 size_t sVar1;
 unsigned int uVar2;
 int iVar3;
 void *__ptr;
 int extraout_r1;
 byte *pbVar4;
 uint uVar5;
 int iVar6;
 unsigned int local_38;
 byte local_34 [31];
 char local_15;
 int local_14;
 local_14 = 0;
 puts(&DAT_00011188);
 __printf_chk(1,&DAT_000111b8,10);
 iVar6 = 6;
 iVar3 = 5;
 do {
 __aeabi_idivmod(iVar3,iVar6);
 iVar3 = iVar6;
 iVar6 = extraout_r1;
 } while (extraout_r1 != 0);
 __printf_chk(1,&DAT_000111d4);
 __printf_chk(1,&DAT_000111f0,0xe1);
 strncpy((char *)local_34,&encrypted_0,0x1f);
 uVar5 = (uint)local_34[0];
 local_15 = 0;
 if (uVar5 != 0) {
 pbVar4 = local_34;
 do {
 *pbVar4 = (byte)uVar5 ^ 0x5a;
 pbVar4 = pbVar4 + 1;
 uVar5 = (uint)*pbVar4;
 } while (uVar5 != 0);
 uVar5 = (uint)local_34[0];
 }
 sVar1 = strlen((char *)local_34);
 __printf_chk(1,&DAT_00011210,uVar5 + sVar1);
 __printf_chk(1,&DAT_0001122c,0x7a314);
 __printf_chk(1,&DAT_00011258,0x13ba);
 uVar2 = call_vectorized_loop();
 __printf_chk(1,&DAT_00011280,uVar2);
 __printf_chk(1,&DAT_000112a8,0x14);
 iVar3 = param_division_by_zero_constprop_1();
 iVar6 = param_division_by_zero_constprop_0();
 signal(8,(__sighandler_t)NULL);
 __printf_chk(1,&DAT_000112c8,iVar3 + iVar6);
 local_38 = 0x2a;
 iVar3 = param_null_pointer_deref(&local_38);
 iVar6 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)NULL);
 __printf_chk(1,&DAT_000112e4,iVar3 + iVar6);
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 uVar2 = 8;
 }
 else {
 free(__ptr);
 uVar2 = 0x1e;
 }
 __printf_chk(1,&DAT_00011304,uVar2);
 __printf_chk(1,&DAT_00011324,2000000000);
 __printf_chk(1,&DAT_00011358,10);
 if (local_14 != 0) {
 __stack_chk_fail();
 }
 __printf_chk(1,&DAT_00011378,0x2c);
 return;
}

// Function: __aeabi_idiv @ 0x10e9c
uint __aeabi_idiv(uint param_1,uint param_2)
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
 __aeabi_idiv0();
 uVar1 = 0;
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
 uVar1 = ((uint (*)(void))(iVar2 * 0xc + 0x10eec))();
 return uVar1;
}

// Function: .divsi3_skip_div0_test @ 0x10ea4
uint _divsi3_skip_div0_test(uint param_1,uint param_2)
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
 if (in_NG) {
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
 uVar1 = ((uint (*)(void))(iVar2 * 0xc + 0x10eec))();
 return uVar1;
}

// Function: __aeabi_idivmod @ 0x110bc
void __aeabi_idivmod(int param_1)
{
 bool bVar1;
 int param_2 = 1;
 if (param_2 != 0) {
 _divsi3_skip_div0_test(param_1, param_2);
 return;
 }
 bVar1 = param_1 < 0;
 if (0 < param_1) {
 param_1 = 0x7fffffff;
 }
 if (bVar1) {
 param_1 = -0x80000000;
 }
 __aeabi_idiv0();
 return;
}

// Function: __aeabi_idiv0 @ 0x110dc
void __aeabi_idiv0(void)
{
 raise(8);
 return;
}


