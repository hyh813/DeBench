/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef long long longlong;
typedef unsigned long long ulonglong;
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

/* Standard library types */
#define NULL ((void*)0)

typedef struct __jmp_buf_tag {
    int __fl;
    int __ss;
    int __gs;
    int __fs0;
    int __es;
    int __ds;
    int __edi;
    int __esi;
    int __ebp;
    int __ebx;
    int __edx;
    int __ecx;
    int __eax;
    int __eip;
    int __cs;
    int __eflags;
    int __esp;
    int __ss_2;
} jmp_buf[1];

/* Global variables */
char completed_0;
int div_zero_caught;
int segv_caught;
jmp_buf jmp_buffer;
jmp_buf segv_buffer;

/* Data references */
int DAT_00011010;
int DAT_00011030;
char DAT_00011050[32];
char DAT_0001106c[32];
char DAT_00011088[32];
char DAT_000110a5[32];
char DAT_000110c1[32];
char DAT_000110eb[32];
char DAT_00011110[32];
char DAT_00011136[32];
char DAT_00011156[32];
char DAT_00011172[32];
char DAT_0001118f[32];
char DAT_000111ac[32];
char DAT_000111dd[32];
char DAT_000111fa[32];
char DAT_00011221[32];

/* External functions */
void __gmon_start__(void);
void __aeabi_ldiv0(int);
int __aeabi_idivmod(int, int);
uint __divsi3(uint, uint);
uint _divsi3_skip_div0_test(uint, uint);
void __cxa_finalize(void *);

/* Compiler intrinsics - use built-in */
#define LZCOUNT __builtin_clz

static inline bool __sborrow4(int a, int b) {
    return (a < 0) != (b < 0) && (a < 0) != ((a - b) < 0);
}

#define SBORROW4 __sborrow4

/* External libgcc variables */
extern void *__dso_handle;

/* Forward declarations */
unsigned int main(void);
void call_weak_fn(void);

typedef void (*__sighandler_t)(int);

/* External encrypted string */
extern char param_string_encryption_encrypted[32];

// Decompiled by BinaryAI
// SHA256: 0b3ef21eb979ed565c2ce365f00b99db4ec2323ac8287ec91b153c60beab1c78

// Function: _init @ 0x104ac
static void _init(void *ctx)
{
 call_weak_fn();
 return;
}

// Function: <EXTERNAL>::raise @ 0x104cc
int raise(int __sig);

// Function: <EXTERNAL>::__libc_start_main @ 0x104d8
void __libc_start_main(int (*main)(int, char**, char**), void *init, void *fini, void *rtld_fini, void *stack_end, unsigned long dt_cookie);
void __libc_start_main_impl(int (*main)(int, char**, char**), void *init, void *fini, void *rtld_fini, void *stack_end, unsigned long dt_cookie)
{
 __libc_start_main(main, init, fini, rtld_fini, stack_end, dt_cookie);
 while(1) {} // Should not return
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x104e4
void __cxa_finalize_impl(void *arg)
{
 __cxa_finalize(arg);
 return;
}

// Function: <EXTERNAL>::printf @ 0x104f0
int printf(char *__format,...)
{
 int iVar1;
 iVar1 = printf(__format);
 return iVar1;
}

// Function: <EXTERNAL>::longjmp @ 0x104fc
void longjmp(struct __jmp_buf_tag *__env,int __val)
{
 longjmp(__env,__val);
}

// Function: <EXTERNAL>::_setjmp @ 0x10508
int _setjmp(struct __jmp_buf_tag *__env)
{
 int iVar1;
 iVar1 = _setjmp(__env);
 return iVar1;
}

// Function: <EXTERNAL>::signal @ 0x10514
__sighandler_t signal(int __sig,__sighandler_t __handler)
{
 __sighandler_t p_Var1;
 p_Var1 = signal(__sig,__handler);
 return p_Var1;
}

// Function: <EXTERNAL>::puts @ 0x10520
int puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::strlen @ 0x10538
size_t strlen(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::memset @ 0x10544
void * memset(void *__s,int __c,size_t __n)
{
 void *pvVar1;
 pvVar1 = memset(__s,__c,__n);
 return pvVar1;
}

// Function: <EXTERNAL>::strncpy @ 0x10550
char * strncpy(char *__dest,char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = strncpy(__dest,__src,__n);
 return pcVar1;
}

// Function: <EXTERNAL>::abort @ 0x1055c
void abort(void)
{
 abort();
}

// Function: _start @ 0x10568
static void _start(unsigned int param_1,unsigned int param_2)
{
 void *init_array_start = (void *)param_2;
 void *init_array_end = (void *)(param_2 + 0x1000); // Approximate
 __libc_start_main(main,init_array_end,init_array_end,0,0,param_1);
 abort();
}

// Function: call_weak_fn @ 0x105ac
void call_weak_fn(void)
{
 void (*__gmon_start__)(void) = __gmon_start__;
 if (__gmon_start__ != NULL) {
 __gmon_start__();
 }
 return;
}

// Function: deregister_tm_clones @ 0x105d0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x10614
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x10664
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = 1;
 return;
 }
 return;
}

// Function: param_fake_branch @ 0x106d0
void param_fake_branch(void)
{
 return;
}

// Function: call_fake_branch @ 0x106d4
unsigned int call_fake_branch(void)
{
 return 10;
}

// Function: param_opaque_predicate @ 0x106dc
int param_opaque_predicate(uint param_1)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint extraout_r1;
 uint uVar4;
 uint uVar5;
 uVar5 = param_1 + 1;
 uVar4 = 0xffffffff;
 uVar2 = param_1;
 uVar1 = uVar5;
 if (param_1 != 0xffffffff) {
 do {
 uVar4 = uVar1;
 __aeabi_idivmod(uVar2, uVar1);
 uVar2 = uVar4;
 uVar1 = extraout_r1;
 } while (extraout_r1 != 0);
 }
 iVar3 = param_1 * 3 + 0x14;
 if ((param_1 * param_1 + (param_1 * 2 | 1) ^ uVar5 * uVar5 | uVar4 ^ 1) == 0) {
 iVar3 = param_1 * 2 + 10;
 }
 return iVar3;
}

// Function: call_opaque_predicate @ 0x1073c
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
 __aeabi_idivmod(iVar2, iVar1);
 iVar2 = iVar4;
 iVar1 = extraout_r1;
 } while (extraout_r1 != 0);
 uVar3 = 0x23;
 if (iVar4 == 1) {
 uVar3 = 0x14;
 }
 return uVar3;
}

// Function: param_instruction_substitution @ 0x10770
int param_instruction_substitution(uint param_1)
{
 return param_1 * 0x15 + (param_1 & 0xf) + (param_1 >> 1);
}

// Function: call_instruction_substitution @ 0x10788
unsigned int call_instruction_substitution(void)
{
 return 0xe1;
}

// Function: decrypt_string @ 0x10790
byte * decrypt_string(char *param_1,byte *param_2,size_t param_3,byte param_4)
{
 byte bVar1;
 byte *pbVar2;
 strncpy((char *)param_2,param_1,param_3);
 param_2[param_3 - 1] = 0;
 bVar1 = *param_2;
 if (bVar1 != 0) {
 pbVar2 = param_2 + 1;
 do {
 pbVar2[-1] = bVar1 ^ param_4;
 bVar1 = *pbVar2;
 pbVar2 = pbVar2 + 1;
 } while (bVar1 != 0);
 }
 return param_2;
}

// Function: param_string_encryption @ 0x107ec
int param_string_encryption(void)
{
 byte *pbVar1;
 size_t sVar2;
 byte bVar3;
 uint uVar4;
 byte local_28 [31];
 char local_9;
 pbVar1 = (byte *)strncpy((char *)local_28,&param_string_encryption_encrypted,0x20);
 uVar4 = 0;
 local_9 = 0;
 bVar3 = local_28[0];
 if (local_28[0] != 0) {
 do {
 *pbVar1 = bVar3 ^ 0x5a;
 bVar3 = pbVar1[1];
 pbVar1 = pbVar1 + 1;
 } while (bVar3 != 0);
 uVar4 = (uint)local_28[0];
 }
 sVar2 = strlen((char *)local_28);
 return sVar2 + uVar4;
}

// Function: param_tail_call_optimized @ 0x1085c
int param_tail_call_optimized(int param_1,int param_2)
{
 longlong lVar1;
 uint uVar2;
 if (0 < param_1) {
 uVar2 = param_1 - 1;
 lVar1 = (ulonglong)(param_1 - 2) * (ulonglong)uVar2;
 param_2 = (uVar2 * uVar2 + param_2 + param_1) -
 ((uint)((byte)((ulonglong)lVar1 >> 0x20) & 1) << 0x1f | (uint)lVar1 >> 1);
 }
 return param_2;
}

// Function: call_tail_call_optimized @ 0x10898
unsigned int call_tail_call_optimized(void)
{
 return 0x7a314;
}

// Function: param_non_tail_call @ 0x108a4
int param_non_tail_call(int param_1)
{
 longlong lVar1;
 uint uVar2;
 if (0 < param_1) {
 uVar2 = param_1 - 1;
 lVar1 = (ulonglong)(param_1 - 2) * (ulonglong)uVar2;
 return (uVar2 * uVar2 + param_1) -
 ((uint)((byte)((ulonglong)lVar1 >> 0x20) & 1) << 0x1f | (uint)lVar1 >> 1);
 }
 return 0;
}

// Function: call_non_tail_call @ 0x108d4
unsigned int call_non_tail_call(void)
{
 return 0x13ba;
}

// Function: param_vectorized_loop @ 0x108e0
int param_vectorized_loop(int *param_1,int *param_2,int *param_3,int param_4)
{
 int iVar1;
 int iVar2;
 int *piVar3;
 iVar1 = 0;
 iVar2 = param_4;
 piVar3 = param_3;
 if (0 < param_4) {
 do {
 iVar2 = iVar2 + -1;
 *piVar3 = *param_2 + *param_1;
 param_2 = param_2 + 1;
 param_1 = param_1 + 1;
 piVar3 = piVar3 + 1;
 } while (iVar2 != 0);
 if (0 < param_4) {
 iVar1 = 0;
 do {
 param_4 = param_4 + -1;
 iVar1 = *param_3 + iVar1;
 param_3 = param_3 + 1;
 } while (param_4 != 0);
 }
 }
 return iVar1;
}

// Function: call_vectorized_loop @ 0x10938
int call_vectorized_loop(void)
{
 int *piVar1;
 int iVar2;
 int iVar3;
 int local_30 [8];
 iVar3 = 0;
 memset(local_30,0,0x20);
 do {
 local_30[iVar3] = (&DAT_00011030)[iVar3] + (&DAT_00011010)[iVar3];
 iVar3 = iVar3 + 1;
 } while (iVar3 != 8);
 iVar2 = 0;
 iVar3 = 0;
 do {
 piVar1 = local_30 + iVar2;
 iVar2 = iVar2 + 1;
 iVar3 = *piVar1 + iVar3;
 } while (iVar2 != 8);
 return iVar3;
}

// Function: param_link_time_optimization @ 0x109b4
int param_link_time_optimization(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: call_link_time_optimization @ 0x109c0
unsigned int call_link_time_optimization(void)
{
 return 0x14;
}

// Function: div_zero_handler @ 0x109c8
void div_zero_handler(void)
{
 div_zero_caught = 1;
 longjmp((struct __jmp_buf_tag *)jmp_buffer,1);
}

// Function: param_division_by_zero @ 0x109f0
unsigned int param_division_by_zero(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 signal(8,div_zero_handler);
 iVar1 = _setjmp((struct __jmp_buf_tag *)jmp_buffer);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 uVar2 = __divsi3(10,param_1);
 }
 return uVar2;
}

// Function: call_division_by_zero @ 0x10a40
int call_division_by_zero(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 return iVar2 + iVar1;
}

// Function: segv_handler @ 0x10a74
void segv_handler(void)
{
 segv_caught = 1;
 longjmp((struct __jmp_buf_tag *)segv_buffer,1);
}

// Function: param_null_pointer_deref @ 0x10a9c
unsigned int param_null_pointer_deref(unsigned int *param_1)
{
 int iVar1;
 unsigned int uVar2;
 signal(0xb,segv_handler);
 iVar1 = _setjmp((struct __jmp_buf_tag *)segv_buffer);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 uVar2 = *param_1;
 }
 return uVar2;
}

// Function: call_null_pointer_deref @ 0x10ae0
int call_null_pointer_deref(void)
{
 int iVar1;
 int iVar2;
 unsigned int local_14;
 local_14 = 0x2a;
 iVar1 = param_null_pointer_deref(&local_14);
 iVar2 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0x0);
 return iVar2 + iVar1;
}

// Function: param_buffer_overflow_stack @ 0x10b24
void param_buffer_overflow_stack(void)
{
 return;
}

// Function: param_buffer_overflow_heap @ 0x10b28
void param_buffer_overflow_heap(void)
{
 return;
}

// Function: call_buffer_overflow @ 0x10b2c
unsigned int call_buffer_overflow(void)
{
 return 0x1e;
}

// Function: param_integer_overflow @ 0x10b34
int param_integer_overflow(uint param_1,uint param_2)
{
 int iVar1;
 int iVar2;
 bool bVar3;
 bVar3 = SBORROW4(param_1,1);
 iVar1 = param_1 - 1;
 iVar2 = param_2 + param_1;
 if (0 < (int)param_1) {
 bVar3 = SBORROW4(param_2,1);
 iVar1 = param_2 - 1;
 }
 if ((iVar1 < 0 != bVar3) || (iVar1 = -1, -1 < iVar2)) {
 iVar1 = iVar2;
 if (0 < iVar2) {
 iVar1 = -2;
 }
 if (-1 < (int)(param_2 & param_1)) {
 iVar1 = iVar2;
 }
 }
 return iVar1;
}

// Function: call_integer_overflow @ 0x10b74
unsigned int call_integer_overflow(void)
{
 return 2000000000;
}

// Function: param_undefined_behavior @ 0x10b80
int param_undefined_behavior(int param_1)
{
 return param_1 << 1;
}

// Function: call_undefined_behavior @ 0x10b88
unsigned int call_undefined_behavior(void)
{
 return 10;
}

// Function: param_implementation_defined @ 0x10b90
unsigned int param_implementation_defined(void)
{
 return 0x2c;
}

// Function: call_implementation_defined @ 0x10b98
unsigned int call_implementation_defined(void)
{
 return 0x2c;
}

// Function: test_obf_opt_edge @ 0x10ba0
void test_obf_opt_edge(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int extraout_r1;
 unsigned int uVar4;
 puts(&DAT_00011221);
 printf(&DAT_00011050,10);
 iVar2 = 5;
 iVar1 = 6;
 do {
 iVar3 = iVar1;
 __aeabi_idivmod(iVar2, iVar1);
 iVar2 = iVar3;
 iVar1 = extraout_r1;
 } while (extraout_r1 != 0);
 uVar4 = 0x23;
 if (iVar3 == 1) {
 uVar4 = 0x14;
 }
 printf(&DAT_0001106c,uVar4);
 printf(&DAT_00011088,0xe1);
 uVar4 = param_string_encryption();
 printf(&DAT_000110a5,uVar4);
 printf(&DAT_000110c1,0x7a314);
 printf(&DAT_000110eb,0x13ba);
 uVar4 = call_vectorized_loop();
 printf(&DAT_00011110,uVar4);
 printf(&DAT_00011136,0x14);
 uVar4 = call_division_by_zero();
 printf(&DAT_00011156,uVar4);
 uVar4 = call_null_pointer_deref();
 printf(&DAT_00011172,uVar4);
 printf(&DAT_0001118f,0x1e);
 printf(&DAT_000111ac,2000000000);
 printf(&DAT_000111dd,10);
 printf(&DAT_000111fa,0x2c);
 return;
}

// Function: main @ 0x10d10
unsigned int main(void)
{
 test_obf_opt_edge();
 return 0;
}

// Function: __divsi3 @ 0x10d24
uint __divsi3(uint param_1,uint param_2)
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
 __aeabi_ldiv0(param_1);
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
 return 0;
}

// Function: .divsi3_skip_div0_test @ 0x10d2c
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
 return 0;
}

// Function: __aeabi_idivmod @ 0x10f44
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
 __aeabi_ldiv0(param_1);
 return 0;
}

// Function: __aeabi_ldiv0 @ 0x10f64
void __aeabi_ldiv0(int arg)
{
 raise(8);
 return;
}

// Function: _fini @ 0x10f74
static void _fini(void)
{
 return;
}

