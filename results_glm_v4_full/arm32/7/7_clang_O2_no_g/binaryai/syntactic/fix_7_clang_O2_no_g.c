/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <setjmp.h>
#include <signal.h>

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Additional type definitions */
typedef unsigned char byte;
typedef int bool;
typedef unsigned int uint;
#define true 1
#define false 0
typedef long long longlong;
typedef unsigned long long ulonglong;

/* Additional type definitions */
typedef void (*__sighandler_t)(int);

/* Macro definitions */
#define SBORROW4(x, y) (((int)(x) < (int)(y)) ? 1 : 0)
#define LZCOUNT(x) (__builtin_clz(x))

// Decompiled by BinaryAI
// SHA256: 8b6905b5095bbafb1a7bed110dd74674fc4b315c7c453846a386cd66ce400e1d

/* Global variables */
extern void __gmon_start__(void);
char completed_0 = 0;
extern void *__dso_handle;
extern void *stack0x00000004;

extern char param_string_encryption_encrypted[];
jmp_buf jmp_buffer;
int segv_caught = 0;
jmp_buf segv_buffer;

/* Data definitions */
char DAT_00011080[] = "%d\n";
char DAT_000110b8[] = "%d\n";
char DAT_0001109c[] = "%d\n";
char DAT_000110d5[] = "%d\n";
char DAT_000110f1[] = "%d\n";
char DAT_0001111b[] = "%d\n";
char DAT_00011140[] = "%d\n";
char DAT_00011166[] = "%d\n";
char DAT_00011186[] = "%d\n";
char DAT_000111a2[] = "%d\n";
char DAT_000111bf[] = "%d\n";
char DAT_000111dc[] = "%d\n";
char DAT_0001120d[] = "%d\n";
char DAT_0001122a[] = "%d\n";
int div_zero_caught = 0;


/* Function prototypes */
int main(void);
void __aeabi_ldiv0(void);
void deregister_tm_clones(void);
char DAT_00011251[] = "Test String";



// Function: <EXTERNAL>::raise @ 0x104ac
int raise(int __sig)
{
 extern int _raise(int __sig);
 int iVar1;
 iVar1 = _raise(__sig);
 return iVar1;
}

// Function: _raise @ 0x104ac
int _raise(int __sig)
{
 return __sig;
}



// Function: <EXTERNAL>::__cxa_finalize @ 0x104c4
void __cxa_finalize(void *d)
{
 return;
}



// Function: <EXTERNAL>::longjmp @ 0x104dc
void longjmp(jmp_buf __env,int __val)
{
 extern void _longjmp(jmp_buf __env,int __val);
 _longjmp(__env,__val);
}

// Function: <EXTERNAL>::_setjmp @ 0x104e8
int _setjmp(jmp_buf __env)
{
 return setjmp(__env);
}

// Function: <EXTERNAL>::signal @ 0x104f4
__sighandler_t signal(int __sig,__sighandler_t __handler)
{
 return signal(__sig,__handler);
}



// Function: <EXTERNAL>::strlen @ 0x10518
size_t strlen(const char *__s)
{
 size_t sVar1 = 0;
 if (__s != NULL) {
 const char *p = __s;
 while (*p != 0) {
 sVar1++;
 p++;
 }
 }
 return sVar1;
}

// Function: <EXTERNAL>::strncpy @ 0x10524
char * strncpy(char *__dest,const char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = strncpy(__dest,__src,__n);
 return pcVar1;
}

// Function: <EXTERNAL>::abort @ 0x10530
void abort(void)
{
 extern void _abort(void);
 _abort();
}

// Function: _abort @ 0x10530
void _abort(void)
{
 while(1);
}









// Function: __do_global_dtors_aux @ 0x10638
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



// Function: deregister_tm_clones @ 0x106a4
void deregister_tm_clones(void)
{
 return;
}

// Function: param_fake_branch @ 0x106a4
void param_fake_branch(void)
{
 return;
}

// Function: call_fake_branch @ 0x106a8
unsigned int call_fake_branch(void)
{
 return 10;
}

// Function: param_opaque_predicate @ 0x106b0
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
 __aeabi_idivmod(uVar2);
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

// Function: call_opaque_predicate @ 0x10710
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
 uVar3 = 0x23;
 if (iVar4 == 1) {
 uVar3 = 0x14;
 }
 return uVar3;
}

// Function: param_instruction_substitution @ 0x10744
int param_instruction_substitution(uint param_1)
{
 return param_1 * 0x15 + (param_1 & 0xf) + (param_1 >> 1);
}

// Function: call_instruction_substitution @ 0x1075c
unsigned int call_instruction_substitution(void)
{
 return 0xe1;
}

// Function: decrypt_string @ 0x10764
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

// Function: param_string_encryption @ 0x107c0
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

// Function: call_string_encryption @ 0x1082c
int call_string_encryption(void)
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

// Function: param_tail_call_optimized @ 0x10898
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

// Function: call_tail_call_optimized @ 0x108d4
unsigned int call_tail_call_optimized(void)
{
 return 0x7a314;
}

// Function: param_non_tail_call @ 0x108e0
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

// Function: call_non_tail_call @ 0x10910
unsigned int call_non_tail_call(void)
{
 return 0x13ba;
}

// Function: param_vectorized_loop @ 0x1091c
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

// Function: call_vectorized_loop @ 0x10974
unsigned int call_vectorized_loop(void)
{
 return 0x48;
}

// Function: param_link_time_optimization @ 0x1097c
int param_link_time_optimization(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: call_link_time_optimization @ 0x10988
unsigned int call_link_time_optimization(void)
{
 return 0x14;
}

// Function: div_zero_handler @ 0x10990
void div_zero_handler(void)
{
 div_zero_caught = 1;
 longjmp(jmp_buffer,1);
}

// Function: param_division_by_zero @ 0x109b8
unsigned int param_division_by_zero(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 signal(8,div_zero_handler);
 iVar1 = _setjmp(jmp_buffer);
 if (iVar1 != 0) {
 return 0xffffffff;
 }
 uVar2 = __divsi3(10,param_1);
 return uVar2;
}

// Function: call_division_by_zero @ 0x10a10
int call_division_by_zero(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 return iVar2 + iVar1;
}

// Function: segv_handler @ 0x10a44
void segv_handler(void)
{
 segv_caught = 1;
 longjmp(segv_buffer,1);
}

// Function: param_null_pointer_deref @ 0x10a6c
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

// Function: call_null_pointer_deref @ 0x10ab0
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

// Function: param_buffer_overflow_stack @ 0x10af4
void param_buffer_overflow_stack(void)
{
 return;
}

// Function: param_buffer_overflow_heap @ 0x10af8
void param_buffer_overflow_heap(void)
{
 return;
}

// Function: call_buffer_overflow @ 0x10afc
unsigned int call_buffer_overflow(void)
{
 return 0x1e;
}

// Function: param_integer_overflow @ 0x10b04
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

// Function: call_integer_overflow @ 0x10b44
unsigned int call_integer_overflow(void)
{
 return 2000000000;
}

// Function: param_undefined_behavior @ 0x10b50
int param_undefined_behavior(int param_1)
{
 return param_1 << 1;
}

// Function: call_undefined_behavior @ 0x10b58
unsigned int call_undefined_behavior(void)
{
 return 10;
}

// Function: param_implementation_defined @ 0x10b60
unsigned int param_implementation_defined(void)
{
 return 0x2c;
}

// Function: call_implementation_defined @ 0x10b68
unsigned int call_implementation_defined(void)
{
 return 0x2c;
}

// Function: test_obf_opt_edge @ 0x10b70
void test_obf_opt_edge(void)
{
 byte *pbVar1;
 size_t sVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 int extraout_r1;
 unsigned int uVar6;
 uint uVar7;
 uint uVar8;
 uint local_30 [7];
 char local_11;
 puts(&DAT_00011251);
 printf(&DAT_00011080,10);
 iVar3 = 5;
 iVar4 = 6;
 do {
 iVar5 = iVar4;
 __aeabi_idivmod(iVar3);
 iVar3 = iVar5;
 iVar4 = extraout_r1;
 } while (extraout_r1 != 0);
 uVar6 = 0x23;
 if (iVar5 == 1) {
 uVar6 = 0x14;
 }
 printf(&DAT_0001109c,uVar6);
 printf(&DAT_000110b8,0xe1);
 pbVar1 = (byte *)strncpy((char *)local_30,&param_string_encryption_encrypted,0x20);
 uVar7 = local_30[0] & 0xff;
 uVar8 = 0;
 local_11 = 0;
 if (uVar7 != 0) {
 do {
 *pbVar1 = (byte)uVar7 ^ 0x5a;
 uVar7 = (uint)pbVar1[1];
 pbVar1 = pbVar1 + 1;
 } while (uVar7 != 0);
 uVar8 = local_30[0] & 0xff;
 }
 sVar2 = strlen((char *)local_30);
 printf(&DAT_000110d5,sVar2 + uVar8);
 printf(&DAT_000110f1,0x7a314);
 printf(&DAT_0001111b,0x13ba);
 printf(&DAT_00011140,0x48);
 printf(&DAT_00011166,0x14);
 iVar3 = param_division_by_zero(5);
 iVar4 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 printf(&DAT_00011186,iVar4 + iVar3);
 local_30[0] = 0x2a;
 iVar3 = param_null_pointer_deref(local_30);
 iVar4 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0x0);
 printf(&DAT_000111a2,iVar4 + iVar3);
 printf(&DAT_000111bf,0x1e);
 printf(&DAT_000111dc,2000000000);
 printf(&DAT_0001120d,10);
 printf(&DAT_0001122a,0x2c);
 return;
}

// Function: main @ 0x10d80
int main(void)
{
 test_obf_opt_edge();
 return 0;
}







// Function: __aeabi_ldiv0 @ 0x10fd4
void __aeabi_ldiv0(void)
{
 raise(8);
 return;
}



