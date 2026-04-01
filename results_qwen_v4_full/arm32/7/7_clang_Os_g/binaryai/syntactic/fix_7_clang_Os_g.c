/* Auto-injected type definitions by preprocessor */
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>
#include <setjmp.h>
#include <signal.h>
typedef unsigned char byte;
#define SBORROW4(a,b) ((int)((a) - (b)) < 0 && (int)(a) >= 0)

/* Global variable declarations */
int completed_0 = 0;
void *__dso_handle = 0;
int div_zero_caught = 0;
int segv_caught = 0;
jmp_buf jmp_buffer;
jmp_buf segv_buffer;
byte param_string_encryption_encrypted[32];
bool in_NG = false;

/* Type definitions for uint */
typedef unsigned int uint;

/* External function declarations */
extern void __gmon_start__(void);
extern uint __divsi3(uint, uint);
extern void __aeabi_ldiv0(uint);
extern int __aeabi_idivmod(int, int);

/* Standard library function declarations */
extern void (*signal(int __sig, void (*__handler)(int)))(int);
extern void longjmp(jmp_buf __env, int __val);
extern int _setjmp(jmp_buf __env);
extern size_t strlen(const char *__s);
extern char *strncpy(char *__dest, const char *__src, size_t __n);
extern void abort(void);

/* Stub implementation for __aeabi_idivmod_single */
static int __aeabi_idivmod_single(int a, int b) {
    return 0;
}

/* Helper function for division */
static inline int LZCOUNT(unsigned int x) {
    if (x == 0) return 0;
    int count = 0;
    while ((x & 0x80000000) == 0) {
        x <<= 1;
        count++;
    }
    return 31 - count;
}

/* Data symbol declarations */
int DAT_00011030[8] = {1, 2, 3, 4, 5, 6, 7, 8};
int DAT_00011010[8] = {1, 2, 3, 4, 5, 6, 7, 8};
extern char DAT_00011221[];
extern char DAT_00011050[];
extern char DAT_0001106c[];
extern char DAT_00011088[];
extern char DAT_000110a5[];
extern char DAT_000110c1[];
extern char DAT_000110eb[];
extern char DAT_00011110[];
extern char DAT_00011136[];
extern char DAT_00011156[];
extern char DAT_00011172[];
extern char DAT_0001118f[];
extern char DAT_000111ac[];
extern char DAT_000111dd[];
extern char DAT_000111fa[];

/* Forward declarations */
void call_weak_fn(void);

/* Additional type definitions for compatibility */
typedef void (*__sighandler_t)(int);

// Decompiled by BinaryAI
// SHA256: 8a490219b0f3c35d07c748d52ae91bd3d50e9e648d930bea2162287c2dfe841a

// Function: _init @ 0x104ac
static int _init(void *ctx)
{
 call_weak_fn();
 return 0;
}

// Function: <EXTERNAL>::raise @ 0x104cc
static int raise_stub(int __sig)
{
 return 0;
}



// Function: <EXTERNAL>::__cxa_finalize @ 0x104e4
static void __cxa_finalize(void *dso_handle)
{
 return;
}

// Function: <EXTERNAL>::printf @ 0x104f0
static int printf(char *__format,...)
{
 return 0;
}







// Function: <EXTERNAL>::puts @ 0x10520
static int puts(char *__s)
{
 return 0;
}



// Function: <EXTERNAL>::memset @ 0x10544
static void * memset_stub(void *__s,int __c,size_t __n)
{
 return __s;
}





// Function: _start @ 0x10568 - removed, provided by C runtime
extern unsigned int main(void);

// Function: call_weak_fn @ 0x105ac
void call_weak_fn(void)
{
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
 uint uVar4;
 uint uVar5;
 uVar5 = param_1 + 1;
 uVar4 = 0xffffffff;
 uVar2 = param_1;
 uVar1 = uVar5;
 if (param_1 != 0xffffffff) {
 do {
 uVar4 = uVar1;
 __aeabi_idivmod_single(uVar1, uVar4);
 uVar2 = uVar4;
 uVar1 = uVar2;
 } while (uVar2 != 0);
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
 iVar2 = 5;
 iVar1 = 6;
 do {
 iVar4 = iVar1;
 __aeabi_idivmod_single(iVar1, iVar4);
 iVar2 = iVar4;
 iVar1 = iVar2;
 } while (iVar2 != 0);
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
 long long lVar1;
 uint uVar2;
 if (0 < param_1) {
 uVar2 = param_1 - 1;
 lVar1 = (unsigned long long)(param_1 - 2) * (unsigned long long)uVar2;
 param_2 = (uVar2 * uVar2 + param_2 + param_1) -
 ((uint)((byte)((unsigned long long)lVar1 >> 0x20) & 1) << 0x1f | (uint)lVar1 >> 1);
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
 long long lVar1;
 uint uVar2;
 if (0 < param_1) {
 uVar2 = param_1 - 1;
 lVar1 = (unsigned long long)(param_1 - 2) * (unsigned long long)uVar2;
 return (uVar2 * uVar2 + param_1) -
 ((uint)((byte)((unsigned long long)lVar1 >> 0x20) & 1) << 0x1f | (uint)lVar1 >> 1);
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
 param_2++;
 param_1++;
 piVar3++;
 } while (iVar2 != 0);
 if (0 < param_4) {
 iVar1 = 0;
 do {
 param_4 = param_4 + -1;
 iVar1 = *param_3 + iVar1;
 param_3++;
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
 local_30[iVar3] = DAT_00011030[iVar3] + DAT_00011010[iVar3];
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
void div_zero_handler(int sig)
{
 (void)sig;
 div_zero_caught = 1;
 longjmp(jmp_buffer,1);
}

// Function: param_division_by_zero @ 0x109f0
unsigned int param_division_by_zero(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 signal(8,div_zero_handler);
 iVar1 = _setjmp(jmp_buffer);
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
 signal(8,(__sighandler_t)0);
 return iVar2 + iVar1;
}

// Function: segv_handler @ 0x10a74
void segv_handler(int sig)
{
 (void)sig;
 segv_caught = 1;
 longjmp(segv_buffer,1);
}

// Function: param_null_pointer_deref @ 0x10a9c
unsigned int param_null_pointer_deref(unsigned int *param_1)
{
 int iVar1;
 unsigned int uVar2;
 signal(0xb,segv_handler);
 iVar1 = _setjmp(segv_buffer);
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
 signal(0xb,(__sighandler_t)0);
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
 unsigned int uVar4;
 puts(&DAT_00011221);
 printf(&DAT_00011050,10);
 iVar2 = 5;
 iVar1 = 6;
 do {
 iVar3 = iVar1;
 __aeabi_idivmod_single(iVar1, iVar3);
 iVar2 = iVar3;
 iVar1 = iVar2;
 } while (iVar2 != 0);
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









// Function: _fini @ 0x10f74
static void _fini(void)
{
 return;
}

