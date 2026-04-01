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
typedef void (*__sighandler_t)(int);
typedef struct __jmp_buf_tag {
    int __fl;
    int __ss;
    unsigned long __r[8];
    unsigned long __tramp[4];
    unsigned long __sp;
    unsigned long __fp;
    unsigned long __pc;
    unsigned long __fpcr;
    unsigned long __cfa;
} __jmp_buf_tag[1];
typedef __jmp_buf_tag jmp_buf[1];

// Macro definitions
#define CONCAT44(hi, lo) (((unsigned long)(hi) << 32) | (unsigned long)(lo))

// Global variables
extern jmp_buf jmp_buffer;
extern jmp_buf segv_buffer;
extern char completed_0;
extern char __dso_handle;
extern unsigned long ___stack_chk_guard;
extern unsigned long __stack_chk_guard;
extern const char encrypted_0[];
extern const char DAT_00101638[];
extern const char DAT_00101668[];
extern const char DAT_00101688[];
extern const char DAT_001016a8[];
extern const char DAT_001016c8[];
extern const char DAT_001016e8[];
extern const char DAT_00101718[];
extern const char DAT_00101740[];
extern const char DAT_00101768[];
extern const char DAT_00101788[];
extern const char DAT_001017a8[];
extern const char DAT_001017c8[];
extern const char DAT_001017e8[];
extern const char DAT_00101820[];
extern const char DAT_00101840[];
extern void __stack_chk_fail(void);
extern int __printf_chk(int __flag, const char *__fmt, ...);
extern int __longjmp_chk(jmp_buf __env, int __val);
extern void *SoftwareBreakpoint(int, int);
extern void call_weak_fn();
extern void test_obf_opt_edge();
extern int div_zero_caught;
extern int segv_caught;
extern void *_init_fn;
extern int param_division_by_zero_constprop_0();
extern int param_division_by_zero_constprop_1();
extern int param_null_pointer_deref();
extern int param_division_by_zero();

// Decompiled by BinaryAI
// SHA256: 3bb68c07ab5d438ba4367fe153d9fd537aaf6bf5c109be2bbe9a54c7f5d3224b

// Function: _init @ 0x100848
void _init(void *ctx)
{
 call_weak_fn();
 return;
}

// Function: FUN_00100860 @ 0x100860
void FUN_00100860(void)
{
 return;
}

// Function: <EXTERNAL>::strlen @ 0x100880
size_t strlen(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::_setjmp @ 0x100890
int _setjmp(jmp_buf __env);

// Function: <EXTERNAL>::__libc_start_main @ 0x1008a0
void __libc_start_main(void *main_func, void *init_stack, void *rtld_fini, void *stack_end, long unwind_info, void *main_arg)
{
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x1008b0
void __cxa_finalize(void)
{
 return;
}

// Function: <EXTERNAL>::signal @ 0x1008c0
__sighandler_t signal(int __sig,__sighandler_t __handler)
{
 __sighandler_t p_Var1;
 p_Var1 = signal(__sig,__handler);
 return p_Var1;
}

// Function: <EXTERNAL>::malloc @ 0x1008d0
void * malloc(size_t __size)
{
 void *pvVar1;
 pvVar1 = malloc(__size);
 return pvVar1;
}

// Function: <EXTERNAL>::__printf_chk @ 0x1008e0
int __printf_chk(int __flag, const char *__fmt, ...)
{
 // External function - placeholder
 return 0;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x1008f0
void __stack_chk_fail(void)
{
 __stack_chk_fail();
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x100900
void __gmon_start__(void)
{
 __gmon_start__();
 return;
}

// Function: <EXTERNAL>::abort @ 0x100910
void abort(void)
{
 abort();
}

// Function: <EXTERNAL>::puts @ 0x100920
int puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::free @ 0x100930
void free(void *__ptr)
{
 free(__ptr);
 return;
}

// Function: <EXTERNAL>::__longjmp_chk @ 0x100940
int __longjmp_chk(jmp_buf __env, int __val)
{
 // External function - placeholder
 return 0;
}

// Function: <EXTERNAL>::strncpy @ 0x100950
char * strncpy(char *__dest,const char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = strncpy(__dest,__src,__n);
 return pcVar1;
}

// Function: main @ 0x100980
unsigned long long main(void)
{
 test_obf_opt_edge();
 return 0;
}

// Function: _start @ 0x1009c0
void _start(unsigned long long param_1)
{
 void *param_9;
 __libc_start_main(main,param_9,0,0,0,(void *)param_1);
}

// Function: call_weak_fn @ 0x1009f4
void call_weak_fn(void)
{
 __gmon_start__();
 return;
}

// Function: deregister_tm_clones @ 0x100a10
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x100a40
void register_tm_clones(void)
{
 return;
}

// Function: FUN_00100a7c @ 0x100a7c
void FUN_00100a7c(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize();
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x100a80
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(&__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: div_zero_handler @ 0x100ae0
void div_zero_handler(int sig)
{
 div_zero_caught = 1;
 __longjmp_chk(jmp_buffer,1);
}

// Function: segv_handler @ 0x100b00
void segv_handler(int sig)
{
 segv_caught = 1;
 __longjmp_chk(segv_buffer,1);
}

// Function: param_division_by_zero.constprop.0 @ 0x100b20
unsigned long long param_division_by_zero_constprop_0(void)
{
 void *UNRECOVERED_JUMPTABLE;
 int iVar1;
 unsigned long long uVar2;
 signal(8,(__sighandler_t)div_zero_handler);
 iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
 if (iVar1 == 0) {
 UNRECOVERED_JUMPTABLE = (void *)SoftwareBreakpoint(1000,0x100b50);
 uVar2 = (*UNRECOVERED_JUMPTABLE)();
 return uVar2;
 }
 return 0xffffffff;
}

// Function: FUN_00100b5c @ 0x100b5c
unsigned int FUN_00100b5c(void)
{
 int iVar1;
 unsigned int uVar2;
 signal(8,(__sighandler_t)div_zero_handler);
 iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
 uVar2 = 2;
 if (iVar1 != 0) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: param_division_by_zero.constprop.1 @ 0x100b60
unsigned int param_division_by_zero_constprop_1(void)
{
 int iVar1;
 unsigned int uVar2;
 signal(8,(__sighandler_t)div_zero_handler);
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

// Function: FUN_00100c6c @ 0x100c6c
byte * FUN_00100c6c(char *param_1,char *param_2,size_t param_3,byte param_4)
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
 local_8 = ___stack_chk_guard;
 __s = (byte *)strncpy((char *)local_28,&encrypted_0,0x1f);
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

// Function: FUN_00100d6c @ 0x100d6c
void FUN_00100d6c(void)
{
 byte bVar1;
 byte *__s;
 byte *pbVar2;
 size_t sVar3;
 byte abStack_28 [31];
 char uStack_9;
 long lStack_8;
 lStack_8 = ___stack_chk_guard;
 __s = (byte *)strncpy((char *)abStack_28,&encrypted_0,0x1f);
 uStack_9 = 0;
 pbVar2 = __s;
 bVar1 = abStack_28[0];
 while (bVar1 != 0) {
 *pbVar2 = bVar1 ^ 0x5a;
 pbVar2 = pbVar2 + 1;
 bVar1 = *pbVar2;
 }
 sVar3 = strlen((char *)__s);
 if (lStack_8 - ___stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail((uint)abStack_28[0] + (int)sVar3,&__stack_chk_guard,0,
 lStack_8 - ___stack_chk_guard);
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
 local_8 = ___stack_chk_guard;
 __s = (byte *)strncpy((char *)local_28,&encrypted_0,0x1f);
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

// Function: FUN_001011cc @ 0x1011cc
int FUN_001011cc(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_division_by_zero_constprop_1();
 iVar2 = param_division_by_zero_constprop_0();
 signal(8,(__sighandler_t)0x0);
 return iVar1 + iVar2;
}

// Function: call_division_by_zero @ 0x1011d0
int call_division_by_zero(void)
{
 int iVar1;
 int iVar2;
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
 local_8 = ___stack_chk_guard;
 local_c = 0x2a;
 iVar1 = param_null_pointer_deref(&local_c,&__stack_chk_guard,0x2a,0);
 iVar2 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0x0);
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail(iVar1 + iVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
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

// Function: FUN_0010131c @ 0x10131c
unsigned long long FUN_0010131c(void)
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
 local_8 = ___stack_chk_guard;
 puts((char *)DAT_00101638);
 __printf_chk(1,DAT_00101668,10);
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
 __printf_chk(1,DAT_00101688,uVar2);
 __printf_chk(1,DAT_001016a8,0xe1);
 strncpy((char *)local_28,&encrypted_0,0x1f);
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
 __printf_chk(1,DAT_001016c8,uVar8 + (int)sVar6);
 __printf_chk(1,DAT_001016e8,0x7a314);
 __printf_chk(1,DAT_00101718,0x13ba);
 __printf_chk(1,DAT_00101740,0x48);
 __printf_chk(1,DAT_00101768,0x14);
 iVar3 = param_division_by_zero_constprop_1();
 iVar4 = param_division_by_zero_constprop_0();
 signal(8,(__sighandler_t)0x0);
 __printf_chk(1,DAT_00101788,iVar3 + iVar4);
 local_2c = 0x2a;
 iVar3 = param_null_pointer_deref(&local_2c);
 iVar4 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0x0);
 __printf_chk(1,DAT_001017a8,iVar3 + iVar4);
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 uVar7 = 8;
 }
 else {
 free(__ptr);
 uVar7 = 0x1e;
 }
 __printf_chk(1,DAT_001017c8,uVar7);
 __printf_chk(1,DAT_001017e8,2000000000);
 __printf_chk(1,DAT_00101820,10);
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 __printf_chk(1,DAT_00101840,0x30);
 return;
}

// Function: _fini @ 0x101618
void _fini(void)
{
 return;
}

