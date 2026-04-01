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
typedef struct { long __jmp_buf[8]; } __jmp_buf_tag;
typedef void (*__sighandler_t)(int);

// Global variables
int completed_0 = 0;
extern void *__dso_handle;
int div_zero_caught = 0;
long jmp_buffer[8] = {0};
int segv_caught = 0;
long segv_buffer[8] = {0};
char encrypted_0[32] = {0};
long ___stack_chk_guard = 0;
extern long __stack_chk_guard;
char DAT_00101328[64] = "Test started\n";
char DAT_00101358[64] = "Opaque predicate result: %d\n";
char DAT_00101378[64] = "Call opaque predicate: %d\n";
char DAT_00101398[64] = "Instruction substitution: %d\n";
char DAT_001013b8[64] = "String encryption done: %d\n";
char DAT_001013d8[64] = "Tail call optimized: %lld\n";
char DAT_00101408[64] = "Non tail call: %lld\n";
char DAT_00101430[64] = "Vectorized loop: %lld\n";
char DAT_00101458[64] = "Link time optimization: %lld\n";
char DAT_00101478[64] = "Division by zero result: %d\n";
char DAT_00101498[64] = "Null pointer deref result: %d\n";
char DAT_001014b8[64] = "Buffer overflow test: %lld\n";
char DAT_001014d8[64] = "Integer overflow: %d\n";
char DAT_00101510[64] = "Undefined behavior: %lld\n";
char DAT_00101530[64] = "Implementation defined: %lld\n";
void *stack0x00000008 = 0;

// Forward declarations
static void div_zero_handler(int __sig);
static void segv_handler(int __sig);
static void param_fake_branch(void);
static unsigned long long call_fake_branch(void);
static int param_opaque_predicate(int param_1);
static unsigned int call_opaque_predicate(void);
static int param_instruction_substitution(uint param_1);
static unsigned long long call_instruction_substitution(void);
static byte * decrypt_string_local(char *param_1, char *param_2, size_t param_3, byte param_4);
static void param_string_encryption(void);
static int param_tail_call_optimized(int param_1, int param_2);
static unsigned long long call_tail_call_optimized(void);
static int param_non_tail_call(int param_1);
static unsigned long long call_non_tail_call(void);
static int param_vectorized_loop(long param_1, long param_2, long param_3, int param_4);
static unsigned long long call_vectorized_loop(void);
static int param_link_time_optimization(int param_1);
static unsigned long long call_link_time_optimization(void);
static int param_division_by_zero(int param_1);
static int call_division_by_zero(void);
static unsigned int param_null_pointer_deref(unsigned int *param_1);
static unsigned int call_null_pointer_deref(void);
static void param_buffer_overflow_stack(void);
static unsigned int param_buffer_overflow_heap(unsigned int param_1);
static unsigned long long call_buffer_overflow(void);
static int param_integer_overflow(uint param_1, uint param_2);
static unsigned long long call_integer_overflow(void);
static int param_undefined_behavior(int param_1);
static unsigned long long call_undefined_behavior(void);
static unsigned long long param_implementation_defined(void);
static unsigned long long call_implementation_defined(void);
static void test_obf_opt_edge(void);
void __longjmp_chk(__jmp_buf_tag *env, int val);
char *strncpy(char *dest, const char *src, size_t n);
size_t strlen(const char *s);
void __stack_chk_fail(void);
__sighandler_t signal(int sig, __sighandler_t func);
int _setjmp(__jmp_buf_tag *env);
int __printf_chk(int flag, const char *format, ...);
int puts(const char *s);
void *malloc(size_t size);
void free(void *ptr);

// Decompiled by BinaryAI
// SHA256: 2d83d08c70b91ecba7947ac422e2417b2fcf0d41318ce68bd03d150bec6a17a2































// Function: main @ 0x100980
int main(void)
{
 test_obf_opt_edge();
 return 0;
}



// Function: div_zero_handler @ 0x100ae0
static void div_zero_handler(int __sig)
{
 div_zero_caught = 1;
 __longjmp_chk((__jmp_buf_tag *)jmp_buffer, 1);
}

// Function: segv_handler @ 0x100b00
static void segv_handler(int __sig)
{
 segv_caught = 1;
 __longjmp_chk((__jmp_buf_tag *)segv_buffer, 1);
}

// Function: param_fake_branch @ 0x100b20
static void param_fake_branch(void)
{
 return;
}

// Function: call_fake_branch @ 0x100b24
static unsigned long long call_fake_branch(void)
{
 return 10;
}

// Function: param_opaque_predicate @ 0x100b30
static int param_opaque_predicate(int param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 iVar1 = param_1 + 1;
 iVar2 = iVar1;
 iVar4 = param_1;
 if (iVar1 != 0) {
 do {
 iVar3 = iVar2;
 iVar2 = 0;
 if (iVar3 != 0) {
 iVar2 = iVar4 / iVar3;
 }
 iVar2 = iVar4 - iVar2 * iVar3;
 iVar4 = iVar3;
 } while (iVar2 != 0);
 if (param_1 * 2 + param_1 * param_1 + 1 == iVar1 * iVar1 && iVar3 == 1) {
 return param_1 * 2 + 10;
 }
 }
 return param_1 * 3 + 0x14;
}

// Function: call_opaque_predicate @ 0x100b90
static unsigned int call_opaque_predicate(void)
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

// Function: param_instruction_substitution @ 0x100bc0
static int param_instruction_substitution(uint param_1)
{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}

// Function: call_instruction_substitution @ 0x100be4
static unsigned long long call_instruction_substitution(void)
{
 return 0xe1;
}



// Function: decrypt_string_local @ 0x100bf0
static byte * decrypt_string_local(char *param_1,char *param_2,size_t param_3,byte param_4)
{
 byte bVar1;
 byte *pbVar2;
 byte *pbVar3;
 pbVar2 = (byte *)strncpy(param_2,param_1,param_3);
 pbVar2[param_3 - 1] = 0;
 bVar1 = *pbVar2;
 pbVar3 = pbVar2;
 while (bVar1 != 0) {
 *pbVar3 = param_4 ^ bVar1;
 pbVar3 = pbVar3 + 1;
 bVar1 = *pbVar3;
 }
 return pbVar2;
}

// Function: param_string_encryption @ 0x100c50
static void param_string_encryption(void)
{
 byte bVar1;
 byte *__s;
 byte *pbVar2;
 size_t sVar3;
 byte local_28 [31];
 char local_9;
 long local_8;
 local_8 = ___stack_chk_guard;
 __s = (byte *)strncpy((char *)local_28,(char *)&encrypted_0,0x1f);
 local_9 = 0;
 pbVar2 = __s;
 bVar1 = local_28[0];
 while (bVar1 != 0) {
 *pbVar2 = bVar1 ^ 0x5a;
 pbVar2 = pbVar2 + 1;
 bVar1 = *pbVar2;
 }
 sVar3 = strlen((char *)__s);
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: param_tail_call_optimized @ 0x100cf4
static int param_tail_call_optimized(int param_1,int param_2)
{
 int iVar1;
 if (0 < param_1) {
 do {
 iVar1 = param_1 + -1;
 param_2 = param_2 + param_1;
 param_1 = iVar1;
 } while (iVar1 != 0);
 }
 return param_2;
}

// Function: call_tail_call_optimized @ 0x100d20
static unsigned long long call_tail_call_optimized(void)
{
 return 0x7a314;
}

// Function: param_non_tail_call @ 0x100d30
static int param_non_tail_call(int param_1)
{
 int iVar1;
 int iVar2;
 iVar2 = 0;
 if (0 < param_1) {
 do {
 iVar1 = param_1 + -1;
 iVar2 = iVar2 + param_1;
 param_1 = iVar1;
 } while (iVar1 != 0);
 }
 return iVar2;
}

// Function: call_non_tail_call @ 0x100d54
static unsigned long long call_non_tail_call(void)
{
 return 0x13ba;
}

// Function: param_vectorized_loop @ 0x100d60
static int param_vectorized_loop(long param_1,long param_2,long param_3,int param_4)
{
 long lVar1;
 int iVar2;
 long lVar3;
 if (0 < param_4) {
 lVar3 = 0;
 do {
 *(int *)(param_3 + lVar3 * 4) = *(int *)(param_1 + lVar3 * 4) + *(int *)(param_2 + lVar3 * 4);
 lVar3 = lVar3 + 1;
 } while ((int)lVar3 < param_4);
 lVar3 = 0;
 iVar2 = 0;
 do {
 lVar1 = lVar3 * 4;
 lVar3 = lVar3 + 1;
 iVar2 = iVar2 + *(int *)(param_3 + lVar1);
 } while ((int)lVar3 < param_4);
 return iVar2;
 }
 return 0;
}

// Function: call_vectorized_loop @ 0x100dc0
static unsigned long long call_vectorized_loop(void)
{
 long lVar1;
 long lVar2;
 int iStack_6c;
 unsigned long long local_68;
 unsigned long long uStack_60;
 unsigned long long uStack_58;
 unsigned long long uStack_50;
 unsigned long long local_48;
 unsigned long long uStack_40;
 unsigned long long uStack_38;
 unsigned long long uStack_30;
 unsigned long long local_28;
 unsigned long long uStack_20;
 unsigned long long local_18;
 unsigned long long uStack_10;
 local_28 = 0;
 uStack_20 = 0;
 local_18 = 0;
 uStack_10 = 0;
 uStack_60 = 0x400000003;
 local_68 = 0x200000001;
 uStack_50 = 0x800000007;
 uStack_58 = 0x600000005;
 uStack_40 = 0x500000006;
 local_48 = 0x700000008;
 uStack_30 = 0x100000002;
 uStack_38 = 0x300000004;
 lVar2 = 1;
 do {
 lVar1 = lVar2 + 1;
 *(int *)((long)&uStack_30 + lVar2 * 4 + 4) =
 (&iStack_6c)[lVar2] + *(int *)((long)&uStack_50 + lVar2 * 4 + 4);
 lVar2 = lVar1;
 } while (lVar1 != 9);
 lVar2 = 1;
 do {
 lVar2 = lVar2 + 1;
 } while (lVar2 != 9);
 return 0;
}

// Function: param_link_time_optimization @ 0x100e90
static int param_link_time_optimization(int param_1)
{
 return (param_1 + 5) * 2;
}

// Function: call_link_time_optimization @ 0x100ea0
static unsigned long long call_link_time_optimization(void)
{
 return 0x14;
}

// Function: param_division_by_zero @ 0x100eb0
static int param_division_by_zero(int param_1)
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

// Function: call_division_by_zero @ 0x100f30
static int call_division_by_zero(void)
{
 return param_division_by_zero(5);
}

// Function: param_null_pointer_deref @ 0x100f40
static unsigned int param_null_pointer_deref(unsigned int *param_1)
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

// Function: call_null_pointer_deref @ 0x100f90
static unsigned int call_null_pointer_deref(void)
{
 int iVar1;
 int iVar2;
 unsigned int local_c;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_c = 0x2a;
 iVar1 = param_null_pointer_deref(&local_c);
 iVar2 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0x0);
 if (local_8 - ___stack_chk_guard == 0) {
 return local_c;
 }
 __stack_chk_fail();
}

// Function: param_buffer_overflow_stack @ 0x101010
static void param_buffer_overflow_stack(void)
{
 return;
}

// Function: param_buffer_overflow_heap @ 0x101014
static unsigned int param_buffer_overflow_heap(unsigned int param_1)
{
 void *__ptr;
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 param_1 = 0xfffffffe;
 }
 else {
 free(__ptr);
 }
 return param_1;
}



// Function: call_buffer_overflow @ 0x101050
static unsigned long long call_buffer_overflow(void)
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

// Function: param_integer_overflow @ 0x101080
static int param_integer_overflow(uint param_1,uint param_2)
{
 int iVar1;
 bool bVar2;
 iVar1 = param_1 + param_2;
 if ((0 < (int)param_1 && param_2 != 0) && (0 >= (int)param_1 || -1 < (int)param_2)) {
 if (iVar1 < 0) {
 iVar1 = -1;
 }
 return iVar1;
 }
 bVar2 = (int)(param_1 & param_2) < 0;
 if ((bVar2 && iVar1 != 0) && (!bVar2 || -1 < iVar1)) {
 iVar1 = -2;
 }
 return iVar1;
}

// Function: call_integer_overflow @ 0x1010b4
static unsigned long long call_integer_overflow(void)
{
 return 2000000000;
}

// Function: param_undefined_behavior @ 0x1010c0
static int param_undefined_behavior(int param_1)
{
 return param_1 << 1;
}

// Function: call_undefined_behavior @ 0x1010d0
static unsigned long long call_undefined_behavior(void)
{
 return 10;
}

// Function: param_implementation_defined @ 0x1010e0
static unsigned long long param_implementation_defined(void)
{
 return 0x30;
}

// Function: call_implementation_defined @ 0x1010f0
static unsigned long long call_implementation_defined(void)
{
 return 0x30;
}

// Function: test_obf_opt_edge @ 0x101100
static void test_obf_opt_edge(void)
{
 int iVar1;
 unsigned int uVar2;
 int iVar3;
 int iVar4;
 void *__ptr;
 unsigned long long uVar5;
 unsigned int local_c;
 long local_8;
 local_8 = ___stack_chk_guard;
 puts((char *)&DAT_00101328);
 __printf_chk(1,(const char *)&DAT_00101358,10);
 iVar3 = 6;
 iVar4 = 5;
 do {
 iVar1 = iVar3;
 iVar3 = 0;
 if (iVar1 != 0) {
 iVar3 = iVar4 / iVar1;
 }
 iVar3 = iVar4 - iVar3 * iVar1;
 iVar4 = iVar1;
 } while (iVar3 != 0);
 uVar2 = 0x14;
 if (iVar1 != 1) {
 uVar2 = 0x23;
 }
 __printf_chk(1,(const char *)&DAT_00101378,uVar2);
 __printf_chk(1,(const char *)&DAT_00101398,0xe1);
 param_string_encryption();
 __printf_chk(1,(const char *)&DAT_001013b8,0);
 __printf_chk(1,(const char *)&DAT_001013d8,0x7a314);
 __printf_chk(1,(const char *)&DAT_00101408,0x13ba);
 uVar2 = call_vectorized_loop();
 __printf_chk(1,(const char *)&DAT_00101430,uVar2);
 __printf_chk(1,(const char *)&DAT_00101458,0x14);
 iVar3 = param_division_by_zero(5);
 iVar4 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 __printf_chk(1,(const char *)&DAT_00101478,iVar3 + iVar4);
 local_c = 0x2a;
 iVar3 = param_null_pointer_deref(&local_c);
 iVar4 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0x0);
 __printf_chk(1,(const char *)&DAT_00101498,iVar3 + iVar4);
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 uVar5 = 8;
 }
 else {
 free(__ptr);
 uVar5 = 0x1e;
 }
 __printf_chk(1,(const char *)&DAT_001014b8,uVar5);
 __printf_chk(1,(const char *)&DAT_001014d8,2000000000);
 __printf_chk(1,(const char *)&DAT_00101510,10);
 if (local_8 - ___stack_chk_guard == 0) {
 __printf_chk(1,(const char *)&DAT_00101530,0x30);
 return;
 }
 __stack_chk_fail();
}



