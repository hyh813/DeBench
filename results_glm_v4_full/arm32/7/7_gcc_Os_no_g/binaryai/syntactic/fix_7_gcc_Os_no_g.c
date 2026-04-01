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
typedef struct __jmp_buf_tag {
    unsigned long __jmpbuf[8];
    int __mask_was_saved;
} __jmp_buf_tag;

/* Function to count leading zeros */
static inline uint LZCOUNT(uint x) {
    if (x == 0) return 32;
    return __builtin_clz(x);
}

#define true 1
#define false 0

/* Global variables */
__jmp_buf_tag jmp_buffer;
__jmp_buf_tag segv_buffer;
int div_zero_caught = 0;
int segv_caught = 0;
char completed_0 = 0;
char encrypted_0[] = {0x1a, 0x1c, 0x00, 0x4e, 0x5a, 0x57, 0x56, 0x49, 0x4b, 0x5e, 0x4e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
char DAT_00010fd8[] = "Testing obfuscation and optimization techniques:\n";
char DAT_00011005[] = "  Opaque predicate result: %d\n";
char DAT_00011021[] = "  Instruction substitution: %d\n";
char DAT_0001103d[] = "  Instruction substitution: %d\n";
char DAT_0001105a[] = "  String encryption result: %d\n";
char DAT_00011076[] = "  Tail call optimized result: %d\n";
char DAT_000110a0[] = "  Non-tail call result: %d\n";
char DAT_000110c5[] = "  Vectorized loop result: %d\n";
char DAT_000110eb[] = "  Link time optimization: %d\n";
char DAT_0001110b[] = "  Division by zero test: %d\n";
char DAT_00011127[] = "  Null pointer deref test: %d\n";
char DAT_00011144[] = "  Buffer overflow test: %d\n";
char DAT_00011161[] = "  Integer overflow: %d\n";
char DAT_00011192[] = "  Undefined behavior: %d\n";
char DAT_000111af[] = "  Implementation defined: %d\n";

// Decompiled by BinaryAI
// SHA256: 754972f9e097c0c9e22d534b27c32b80b299737f143b806d9eeb2b4c198955ba

// Function: <EXTERNAL>::raise @ 0x10528
int raise(int __sig)
{
 int iVar1;
 iVar1 = raise(__sig);
 return iVar1;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x10534
void __libc_start_main(void)
{
 __libc_start_main();
 return;
}

// Function: <EXTERNAL>::_setjmp @ 0x10540
int _setjmp(__jmp_buf_tag *__env)
{
 int iVar1;
 iVar1 = _setjmp(__env);
 return iVar1;
}

// Function: <EXTERNAL>::free @ 0x1054c
void free(void *__ptr)
{
 free(__ptr);
 return;
}

// Function: <EXTERNAL>::signal @ 0x10558
__sighandler_t signal(int __sig,__sighandler_t __handler)
{
 __sighandler_t p_Var1;
 p_Var1 = signal(__sig,__handler);
 return p_Var1;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x10564
void __stack_chk_fail(void)
{
}

// Function: <EXTERNAL>::puts @ 0x10570
int puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::malloc @ 0x1057c
void * malloc(size_t __size)
{
 void *pvVar1;
 pvVar1 = malloc(__size);
 return pvVar1;
}

// Function: <EXTERNAL>::strlen @ 0x10594
size_t strlen(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::memset @ 0x105a0
void * memset(void *__s,int __c,size_t __n)
{
 void *pvVar1;
 pvVar1 = memset(__s,__c,__n);
 return pvVar1;
}

// Function: <EXTERNAL>::strncpy @ 0x105ac
char * strncpy(char *__dest,char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = strncpy(__dest,__src,__n);
 return pcVar1;
}

// Function: <EXTERNAL>::__printf_chk @ 0x105b8
int __printf_chk(int __flag, const char *__format, ...)
{
 return 0;
}

// Function: <EXTERNAL>::__longjmp_chk @ 0x105c4
void __longjmp_chk(__jmp_buf_tag *__env, int __val)
{
 __longjmp_chk(__env, __val);
}

// Function: <EXTERNAL>::abort @ 0x105d0
void abort(void)
{
 abort();
}

// Function: main @ 0x105dc
unsigned int main(void)
{
 test_obf_opt_edge();
 return 0;
}

// Function: div_zero_handler @ 0x106e4
void div_zero_handler(int sig)
{
 div_zero_caught = 1;
 __longjmp_chk(&jmp_buffer, 1);
}

// Function: segv_handler @ 0x106fc
void segv_handler(int sig)
{
 segv_caught = 1;
 __longjmp_chk(&segv_buffer, 1);
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
 int extraout_r1;
 int iVar2;
 int iVar3;
 iVar3 = param_1 + 1;
 iVar2 = iVar3 * iVar3;
 iVar1 = param_1;
 while (iVar3 != 0) {
 __aeabi_idivmod(iVar1,iVar3);
 iVar1 = iVar3;
 iVar3 = extraout_r1;
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
unsigned int call_opaque_predicate(void)
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
unsigned int param_string_encryption(void)
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
 return 0x5a;
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
unsigned int call_vectorized_loop(void)
{
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
 iVar1 = _setjmp(&jmp_buffer);
 if (iVar1 == 0) {
 uVar2 = __aeabi_idiv(10,param_1);
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
 iVar1 = _setjmp(&segv_buffer);
 if (iVar1 == 0) {
 uVar2 = *param_1;
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_null_pointer_deref @ 0x10a88
unsigned int call_null_pointer_deref(unsigned int param_1,unsigned int param_2,unsigned int param_3)
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
 iVar2 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0x0);
 if (local_14 != 0) {
 __stack_chk_fail();
 }
 return iVar1 + iVar2;
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
 uVar1 = param_string_encryption();
 __printf_chk(1,&DAT_0001105a,uVar1);
 uVar1 = call_tail_call_optimized();
 __printf_chk(1,&DAT_00011076,uVar1);
 call_non_tail_call();
 __printf_chk(1,&DAT_000110a0,5050);
 uVar1 = call_vectorized_loop();
 __printf_chk(1,&DAT_000110c5,uVar1);
 __printf_chk(1,&DAT_000110eb,0x14);
 uVar1 = call_division_by_zero();
 __printf_chk(1,&DAT_0001110b,uVar1);
 uVar1 = call_null_pointer_deref(1, 2, 3);
 __printf_chk(1,&DAT_00011127,uVar1);
 uVar1 = call_buffer_overflow();
 __printf_chk(1,&DAT_00011144,uVar1);
 __printf_chk(1,&DAT_00011161,2000000000);
 __printf_chk(1,&DAT_00011192,10);
 __printf_chk(1,&DAT_000111af,0x2c);
 return;
}



