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
typedef unsigned char byte;
typedef unsigned int uint;
typedef struct { long __jmp_buf[8]; } __jmp_buf_tag;
typedef void (*__sighandler_t)(int);

/* Macro definitions */
#define CONCAT44(hi, lo) (((unsigned long long)(hi) << 32) | (unsigned int)(lo))

/* Global variable declarations */
char completed_0;
void *__dso_handle;
int div_zero_caught;
int segv_caught;
long jmp_buffer[8];
long segv_buffer[8];
long ______stack_chk_guard = 0;
long _____stack_chk_guard = 0;
char encrypted_0[32];
char DAT_00101638[];
char DAT_00101668[];
char DAT_00101688[];
char DAT_001016a8[];
char DAT_001016c8[];
char DAT_001016e8[];
char DAT_00101718[];
char DAT_00101740[];
char DAT_00101768[];
char DAT_00101788[];
char DAT_001017a8[];
char DAT_001017c8[];
char DAT_001017e8[];
char DAT_00101820[];
char DAT_00101840[];

// Decompiled by BinaryAI
// SHA256: 7050cc4805fdecdedb3425883d8ef6e29be4d7d6fcef0c476ac6789b60ec6ad2

// Forward declarations
void test_obf_opt_edge(void);
void *SoftwareBreakpoint(int type, unsigned long addr);

// External function declarations
void __libc_start_main(void *main, unsigned long long argc, void *stack_ref, void *init, void *fini, void *rtld_fini);
void abort(void);
void __cxa_finalize(void *dso_handle);
void __longjmp_chk(long *buf);
void signal(int sig, __sighandler_t handler);
int _setjmp(__jmp_buf_tag *env);
char *strncpy(char *dest, const char *src, size_t n);
size_t strlen(const char *s);
void __stack_chk_fail(void *guard, int arg1, long arg2);
void *malloc(size_t size);
void free(void *ptr);
int puts(const char *s);
int __printf_chk(int flag, const char *format, ...);

// Function: SoftwareBreakpoint @ 0x100000
void *SoftwareBreakpoint(int type, unsigned long addr)
{
 return (void *)addr;
}































// Function: main @ 0x100980
unsigned long long main(void)
{
 test_obf_opt_edge();
 return 0;
}







// Function: div_zero_handler @ 0x100ae0
void div_zero_handler(int sig)
{
 div_zero_caught = 1;
 __longjmp_chk(jmp_buffer);
}

// Function: segv_handler @ 0x100b00
void segv_handler(int sig)
{
 segv_caught = 1;
 __longjmp_chk(segv_buffer);
}

// Function: param_division_by_zero.constprop.0 @ 0x100b20
static unsigned long long param_division_by_zero_constprop_0(void)
{
 void *UNRECOVERED_JUMPTABLE;
 int iVar1;
 unsigned long long uVar2;
 signal(8,div_zero_handler);
 iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
 if (iVar1 == 0) {
 UNRECOVERED_JUMPTABLE = (void *)SoftwareBreakpoint(1000,0x100b50);
 uVar2 = ((unsigned long long (*)(void))UNRECOVERED_JUMPTABLE)();
 return uVar2;
 }
 return 0xffffffff;
}



// Function: param_division_by_zero.constprop.1 @ 0x100b60
static unsigned int param_division_by_zero_constprop_1(void)
{
 int iVar1;
 unsigned int uVar2;
 signal(8,div_zero_handler);
 iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
 uVar2 = 2;
 if (iVar1 != 0) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: param_fake_branch @ 0x100ba0
void param_fake_branch(void)
{
 return;
}

// Function: call_fake_branch @ 0x100ba4
unsigned long long call_fake_branch(void)
{
 return 10;
}

// Function: param_opaque_predicate @ 0x100bb0
int param_opaque_predicate(int param_1)
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

// Function: call_opaque_predicate @ 0x100c10
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

// Function: param_instruction_substitution @ 0x100c40
int param_instruction_substitution(uint param_1)
{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}

// Function: call_instruction_substitution @ 0x100c64
unsigned long long call_instruction_substitution(void)
{
 return 0xe1;
}



// Function: decrypt_string @ 0x100c70
byte * decrypt_string(char *param_1,char *param_2,size_t param_3,byte param_4)
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

// Function: param_string_encryption @ 0x100cd0
void param_string_encryption(void)
{
 byte bVar1;
 byte *__s;
 byte *pbVar2;
 size_t sVar3;
 byte local_28 [31];
 char local_9;
 long local_8;
 local_8 = ______stack_chk_guard;
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
 if (local_8 - ______stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail(&_____stack_chk_guard,0,local_8 - ______stack_chk_guard);
}



// Function: call_string_encryption @ 0x100d70
void call_string_encryption(void)
{
 byte bVar1;
 byte *__s;
 byte *pbVar2;
 size_t sVar3;
 byte local_28 [31];
 char local_9;
 long local_8;
 local_8 = ______stack_chk_guard;
 __s = (byte *)strncpy((char *)local_28,encrypted_0,0x1f);
 local_9 = 0;
 pbVar2 = __s;
 bVar1 = local_28[0];
 while (bVar1 != 0) {
 *pbVar2 = bVar1 ^ 0x5a;
 pbVar2 = pbVar2 + 1;
 bVar1 = *pbVar2;
 }
 sVar3 = strlen((char *)__s);
 if (local_8 - ______stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail(&_____stack_chk_guard,0,local_8 - ______stack_chk_guard);
}

// Function: param_tail_call_optimized @ 0x100e10
int param_tail_call_optimized(uint param_1,int param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 int iVar8;
 int iVar9;
 iVar3 = param_2;
 if (0 < (int)param_1) {
 uVar1 = param_1;
 if (8 < (int)param_1) {
 iVar6 = 0;
 iVar7 = 0;
 iVar8 = 0;
 iVar9 = 0;
 uVar1 = 0;
 uVar2 = param_1;
 iVar3 = param_1 - 1;
 iVar4 = param_1 - 2;
 iVar5 = param_1 - 3;
 do {
 uVar1 = uVar1 + 1;
 iVar6 = iVar6 + uVar2;
 iVar7 = iVar7 + iVar3;
 iVar8 = iVar8 + iVar4;
 iVar9 = iVar9 + iVar5;
 uVar2 = uVar2 - 4;
 iVar3 = iVar3 + -4;
 iVar4 = iVar4 + -4;
 iVar5 = iVar5 + -4;
 } while (param_1 >> 2 != uVar1);
 uVar1 = param_1 - (param_1 & 0xfffffffc);
 param_2 = param_2 + iVar6 + iVar7 + iVar8 + iVar9;
 if (param_1 == (param_1 & 0xfffffffc)) {
 return param_2;
 }
 }
 iVar3 = param_2 + uVar1;
 if (uVar1 - 1 != 0) {
 iVar3 = param_2 + uVar1 + (uVar1 - 1);
 if (uVar1 - 2 != 0) {
 iVar3 = iVar3 + (uVar1 - 2);
 if (uVar1 - 3 != 0) {
 iVar3 = iVar3 + (uVar1 - 3);
 if (uVar1 - 4 != 0) {
 iVar3 = iVar3 + (uVar1 - 4);
 if (uVar1 - 5 != 0) {
 iVar4 = iVar3 + (uVar1 - 5);
 iVar3 = (uVar1 - 7) + (uVar1 - 6) + iVar4;
 if (uVar1 - 6 == 0) {
 iVar3 = iVar4;
 }
 }
 }
 }
 }
 }
 }
 return iVar3;
}

// Function: call_tail_call_optimized @ 0x100ee0
unsigned long long call_tail_call_optimized(void)
{
 return 0x7a314;
}

// Function: param_non_tail_call @ 0x100ef0
int param_non_tail_call(uint param_1)
{
 bool bVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 uint uVar8;
 int iVar9;
 int iVar10;
 iVar9 = 0;
 if (0 < (int)param_1) {
 if ((int)param_1 < 9) {
 iVar4 = 0;
 }
 else {
 iVar3 = 0;
 iVar5 = 0;
 iVar6 = 0;
 iVar7 = 0;
 uVar2 = 0;
 uVar8 = param_1;
 iVar9 = param_1 - 1;
 iVar4 = param_1 - 2;
 iVar10 = param_1 - 3;
 do {
 uVar2 = uVar2 + 1;
 iVar3 = iVar3 + uVar8;
 iVar5 = iVar5 + iVar9;
 iVar6 = iVar6 + iVar4;
 iVar7 = iVar7 + iVar10;
 uVar8 = uVar8 - 4;
 iVar9 = iVar9 + -4;
 iVar4 = iVar4 + -4;
 iVar10 = iVar10 + -4;
 } while (param_1 >> 2 != uVar2);
 iVar4 = iVar3 + iVar5 + iVar6 + iVar7;
 bVar1 = param_1 == (param_1 & 0xfffffffc);
 param_1 = param_1 - (param_1 & 0xfffffffc);
 if (bVar1) {
 return iVar4;
 }
 }
 iVar9 = iVar4 + param_1;
 if (param_1 - 1 != 0) {
 iVar9 = iVar4 + param_1 + (param_1 - 1);
 if (param_1 - 2 != 0) {
 iVar9 = iVar9 + (param_1 - 2);
 if (param_1 - 3 != 0) {
 iVar9 = iVar9 + (param_1 - 3);
 if (param_1 - 4 != 0) {
 iVar9 = iVar9 + (param_1 - 4);
 if (param_1 - 5 != 0) {
 iVar4 = iVar9 + (param_1 - 5);
 iVar9 = (param_1 - 7) + (param_1 - 6) + iVar4;
 if (param_1 - 6 == 0) {
 iVar9 = iVar4;
 }
 }
 }
 }
 }
 }
 }
 return iVar9;
}

// Function: call_non_tail_call @ 0x100fc0
unsigned long long call_non_tail_call(void)
{
 return 0x13ba;
}

// Function: param_vectorized_loop @ 0x100fd0
int param_vectorized_loop(long param_1,long param_2,unsigned long long *param_3,uint param_4)
{
 bool bVar1;
 uint uVar2;
 unsigned long long *puVar3;
 unsigned long uVar5;
 long lVar6;
 int iVar7;
 unsigned long long uVar8;
 int iVar9;
 int iVar10;
 unsigned long long uVar11;
 int iVar12;
 unsigned long long uVar13;
 unsigned long long uVar14;
 unsigned long long *puVar4;
 if ((int)param_4 < 1) {
 return 0;
 }
 uVar5 = (long)param_3 - (param_2 + 4);
 uVar2 = param_4 - 1;
 bVar1 = (unsigned long)((long)param_3 - (param_1 + 4)) < 9;
 if ((((bVar1 || uVar5 < 8) || !bVar1 && uVar5 == 8) || uVar2 < 3) ||
 ((!bVar1 && uVar5 >= 8) && (bVar1 || uVar5 != 8)) && uVar2 == 3) {
 lVar6 = 0;
 do {
 *(int *)((long)param_3 + lVar6 * 4) =
 *(int *)(param_1 + lVar6 * 4) + *(int *)(param_2 + lVar6 * 4);
 lVar6 = lVar6 + 1;
 } while ((int)lVar6 < (int)param_4);
 if (uVar2 < 3) {
 uVar5 = 0;
 iVar7 = 0;
 goto LAB_001010cc;
 }
 }
 else {
 lVar6 = 0;
 do {
 uVar11 = ((unsigned long long *)(param_1 + lVar6))[1];
 uVar8 = *(unsigned long long *)(param_1 + lVar6);
 uVar14 = ((unsigned long long *)(param_2 + lVar6))[1];
 uVar13 = *(unsigned long long *)(param_2 + lVar6);
 ((unsigned long long *)((long)param_3 + lVar6))[1] =
 CONCAT44((int)((unsigned long)uVar11 >> 0x20) + (int)((unsigned long)uVar14 >> 0x20),
 (int)uVar11 + (int)uVar14);
 *(unsigned long long *)((long)param_3 + lVar6) =
 CONCAT44((int)((unsigned long)uVar8 >> 0x20) + (int)((unsigned long)uVar13 >> 0x20),
 (int)uVar8 + (int)uVar13);
 lVar6 = lVar6 + 0x10;
 } while (lVar6 != (unsigned long)(param_4 >> 2) * 0x10);
 uVar2 = param_4 & 0xfffffffc;
 if ((param_4 & 3) != 0) {
 uVar5 = (unsigned long)uVar2;
 *(int *)((long)param_3 + uVar5 * 4) =
 *(int *)(param_2 + uVar5 * 4) + *(int *)(param_1 + uVar5 * 4);
 if ((int)(uVar2 + 1) < (int)param_4) {
 lVar6 = uVar5 * 4 + 4;
 *(int *)((long)param_3 + lVar6) = *(int *)(param_1 + lVar6) + *(int *)(param_2 + lVar6);
 if ((int)(uVar2 + 2) < (int)param_4) {
 lVar6 = uVar5 * 4 + 8;
 *(int *)((long)param_3 + lVar6) = *(int *)(param_1 + lVar6) + *(int *)(param_2 + lVar6);
 }
 }
 }
 }
 iVar7 = 0;
 iVar9 = 0;
 iVar10 = 0;
 iVar12 = 0;
 puVar3 = param_3;
 do {
 puVar4 = puVar3 + 2;
 iVar7 = iVar7 + (int)*puVar3;
 iVar9 = iVar9 + (int)((unsigned long)*puVar3 >> 0x20);
 iVar10 = iVar10 + (int)puVar3[1];
 iVar12 = iVar12 + (int)((unsigned long)puVar3[1] >> 0x20);
 puVar3 = puVar4;
 } while (puVar4 != param_3 + (unsigned long)((param_4 >> 2) - 1) * 2 + 2);
 iVar7 = iVar7 + iVar9 + iVar10 + iVar12;
 uVar5 = (unsigned long)(param_4 & 0xfffffffc);
 if ((param_4 & 0xfffffffc) == param_4) {
 return iVar7;
 }
LAB_001010cc:
 iVar9 = (int)uVar5;
 uVar5 = -(uVar5 >> 0x1f) & 0xfffffffc00000000 | uVar5 << 2;
 iVar7 = iVar7 + *(int *)((long)param_3 + (long)iVar9 * 4);
 if ((iVar9 + 1 < (int)param_4) &&
 (iVar7 = iVar7 + *(int *)((long)param_3 + uVar5 + 4), iVar9 + 2 < (int)param_4)) {
 iVar7 = iVar7 + *(int *)((long)param_3 + uVar5 + 8);
 }
 return iVar7;
}

// Function: call_vectorized_loop @ 0x101154
unsigned long long call_vectorized_loop(void)
{
 return 0x48;
}

// Function: param_link_time_optimization @ 0x101160
int param_link_time_optimization(int param_1)
{
 return (param_1 + 5) * 2;
}

// Function: call_link_time_optimization @ 0x101170
unsigned long long call_link_time_optimization(void)
{
 return 0x14;
}

// Function: param_division_by_zero @ 0x101180
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



// Function: call_division_by_zero @ 0x1011d0
unsigned long long call_division_by_zero(void)
{
 unsigned int iVar1;
 unsigned long long iVar2;
 iVar1 = param_division_by_zero_constprop_1();
 iVar2 = param_division_by_zero_constprop_0();
 signal(8,(__sighandler_t)0x0);
 return iVar1 + iVar2;
}

// Function: param_null_pointer_deref @ 0x101210
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

// Function: call_null_pointer_deref @ 0x101260
void call_null_pointer_deref(void)
{
 int iVar1;
 int iVar2;
 unsigned int local_c;
 long local_8;
 local_8 = ______stack_chk_guard;
 local_c = 0x2a;
 iVar1 = param_null_pointer_deref(&local_c);
 iVar2 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0x0);
 if (local_8 - ______stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail(&_____stack_chk_guard,0,local_8 - ______stack_chk_guard);
}

// Function: param_buffer_overflow_stack @ 0x1012e0
void param_buffer_overflow_stack(void)
{
 return;
}

// Function: param_buffer_overflow_heap @ 0x1012e4
unsigned int param_buffer_overflow_heap(unsigned int param_1)
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



// Function: call_buffer_overflow @ 0x101320
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

// Function: param_integer_overflow @ 0x101350
int param_integer_overflow(uint param_1,uint param_2)
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

// Function: call_integer_overflow @ 0x101384
unsigned long long call_integer_overflow(void)
{
 return 2000000000;
}

// Function: param_undefined_behavior @ 0x101390
int param_undefined_behavior(int param_1)
{
 return param_1 << 1;
}

// Function: call_undefined_behavior @ 0x1013a0
unsigned long long call_undefined_behavior(void)
{
 return 10;
}

// Function: param_implementation_defined @ 0x1013b0
unsigned long long param_implementation_defined(void)
{
 return 0x30;
}

// Function: call_implementation_defined @ 0x1013c0
unsigned long long call_implementation_defined(void)
{
 return 0x30;
}

// Function: test_obf_opt_edge @ 0x1013d0
void test_obf_opt_edge(void)
{
 int iVar1;
 unsigned int uVar2;
 int iVar3;
 int iVar4;
 byte *pbVar5;
 size_t sVar6;
 void *__ptr;
 unsigned long long uVar7;
 uint uVar8;
 unsigned int local_2c;
 byte local_28 [31];
 char local_9;
 long local_8;
 local_8 = ______stack_chk_guard;
 puts((char *)&DAT_00101638);
 __printf_chk(1,(const char *)&DAT_00101668,10);
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
 __printf_chk(1,(const char *)&DAT_00101688,uVar2);
 __printf_chk(1,(const char *)&DAT_001016a8,0xe1);
 strncpy((char *)local_28,(char *)&encrypted_0,0x1f);
 uVar8 = (uint)local_28[0];
 local_9 = 0;
 pbVar5 = local_28;
 if (local_28[0] != 0) {
 do {
 *pbVar5 = (byte)uVar8 ^ 0x5a;
 uVar8 = (uint)pbVar5[1];
 pbVar5 = pbVar5 + 1;
 } while (uVar8 != 0);
 uVar8 = (uint)local_28[0];
 }
 sVar6 = strlen((char *)local_28);
 __printf_chk(1,(const char *)&DAT_001016c8,uVar8 + (int)sVar6);
 __printf_chk(1,(const char *)&DAT_001016e8,0x7a314);
 __printf_chk(1,(const char *)&DAT_00101718,0x13ba);
 __printf_chk(1,(const char *)&DAT_00101740,0x48);
 __printf_chk(1,(const char *)&DAT_00101768,0x14);
 iVar3 = param_division_by_zero_constprop_1();
 iVar4 = param_division_by_zero_constprop_0();
 signal(8,(__sighandler_t)0x0);
 __printf_chk(1,(const char *)&DAT_00101788,iVar3 + iVar4);
 local_2c = 0x2a;
 iVar3 = param_null_pointer_deref(&local_2c);
 iVar4 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0x0);
 __printf_chk(1,(const char *)&DAT_001017a8,iVar3 + iVar4);
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 uVar7 = 8;
 }
 else {
 free(__ptr);
 uVar7 = 0x1e;
 }
 __printf_chk(1,(const char *)&DAT_001017c8,uVar7);
 __printf_chk(1,(const char *)&DAT_001017e8,2000000000);
 __printf_chk(1,(const char *)&DAT_00101820,10);
 if (local_8 - ______stack_chk_guard != 0) {
 __stack_chk_fail(&_____stack_chk_guard,0,local_8 - ______stack_chk_guard);
 }
 __printf_chk(1,(const char *)&DAT_00101840,0x30);
 return;
}


