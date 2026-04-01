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

// Decompiled by BinaryAI
// SHA256: e8b83dc9864f49d3ceb0eb09056c79317d1cf36e8bc23b207f4aea7465b02b65

#include <signal.h>
#include <setjmp.h>

// Global variables
static char completed_0 = 0;
static void *__dso_handle = 0;
static int div_zero_caught = 0;
static int segv_caught = 0;
static jmp_buf jmp_buffer;
static jmp_buf segv_buffer;

// Encrypted string data
char param_string_encryption_encrypted[32] = {0x3a, 0x2a, 0x22, 0x20, 0x2a, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0};

// Data arrays
static int UNK_00102034[4] = {0};
static int UNK_00102038[4] = {0};
static int UNK_0010203c[4] = {0};
static int UNK_00102014[4] = {1, 2, 3, 4};
static int UNK_00102018[4] = {5, 6, 7, 8};
static int UNK_0010201c[4] = {9, 10, 11, 12};
static int DAT_00102030[4] = {10, 20, 30, 40};
static int DAT_00102010[4] = {1, 2, 3, 4};

// String data
char DAT_00102221[] = "Test obf opt edge:";
char DAT_00102050[] = "%d\n";
char DAT_0010206c[] = "%llu\n";
char DAT_00102088[] = "%x\n";
char DAT_001020a5[] = "%u\n";
char DAT_001020c1[] = "%lu\n";
char DAT_001020eb[] = "%lu\n";
char DAT_00102110[] = "%u\n";
char DAT_00102136[] = "%x\n";
char DAT_00102156[] = "%u\n";
char DAT_00102172[] = "%u\n";
char DAT_0010218f[] = "%lu\n";
char DAT_001021ac[] = "%u\n";
char DAT_001021dd[] = "%d\n";
char DAT_001021fa[] = "%lu\n";

// Function: _init @ 0x101000
static void _init(void *ctx)
{
}

// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 // Original code was an indirect call that couldn't be resolved
 return;
}

// Function: <EXTERNAL>::strncpy @ 0x101030
extern char * strncpy(char *__dest,char *__src,size_t __n);

// Function: <EXTERNAL>::puts @ 0x101040
extern int puts(char *__s);

// Function: <EXTERNAL>::strlen @ 0x101050
extern size_t strlen(char *__s);

// Function: <EXTERNAL>::printf @ 0x101060
extern int printf(char *__format, ...);

// Function: <EXTERNAL>::_setjmp @ 0x101070
extern int _setjmp(jmp_buf __env);

// Function: <EXTERNAL>::signal @ 0x101080
extern __sighandler_t signal(int __sig,__sighandler_t __handler);

// Function: <EXTERNAL>::longjmp @ 0x101090
extern void longjmp(jmp_buf __env,int __val);

// Function: <EXTERNAL>::__cxa_finalize @ 0x1010a0
extern void __cxa_finalize(void *);

// Function: main @ 0x101635
unsigned long long main(void);

// Function: _start @ 0x1010b0
void entry_point(unsigned long long param_1,unsigned long long param_2)
{
 char auStack_8 [8];
 //__libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
 main();
 do {
 } while( 1 );
}

// Function: deregister_tm_clones @ 0x1010e0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x101110
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x101150
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: param_fake_branch @ 0x10119c
unsigned int param_fake_branch(unsigned int param_1)
{
 return param_1;
}

// Function: call_fake_branch @ 0x10119f
unsigned long long call_fake_branch(void)
{
 return 10;
}

// Function: param_opaque_predicate @ 0x1011a5
int param_opaque_predicate(uint param_1)
{
 int iVar1;
 uint uVar2;
 uint uVar3;
 uint uVar4;
 uint uVar5;
 uint uVar6;
 uVar6 = param_1 + 1;
 uVar5 = uVar6;
 uVar3 = param_1;
 uVar4 = 0xffffffff;
 while (uVar2 = uVar5, uVar2 != 0) {
 uVar5 = (int)uVar3 % (int)uVar2;
 uVar3 = uVar2;
 uVar4 = uVar2;
 }
 iVar1 = param_1 * 3 + 0x14;
 if ((uVar4 ^ 1 | uVar6 * uVar6 ^ (param_1 * 2 | 1) + param_1 * param_1) == 0) {
 iVar1 = param_1 * 2 + 10;
 }
 return iVar1;
}

// Function: call_opaque_predicate @ 0x1011e9
unsigned long long call_opaque_predicate(void)
{
 int iVar1;
 unsigned long long uVar2;
 int iVar3;
 int iVar4;
 iVar4 = 6;
 iVar1 = 5;
 do {
 iVar3 = iVar4;
 iVar4 = iVar1 % iVar3;
 iVar1 = iVar3;
 } while (iVar4 != 0);
 uVar2 = 0x23;
 if (iVar3 == 1) {
 uVar2 = 0x14;
 }
 return uVar2;
}

// Function: param_instruction_substitution @ 0x10120f
int param_instruction_substitution(uint param_1)
{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}

// Function: call_instruction_substitution @ 0x101223
unsigned long long call_instruction_substitution(void)
{
 return 0xe1;
}

// Function: decrypt_string @ 0x101229
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

// Function: param_string_encryption @ 0x101269
int param_string_encryption(void)
{
 byte bVar1;
 size_t sVar2;
 int iVar3;
 byte *pbVar4;
 byte local_28 [31];
 char local_9;
 pbVar4 = local_28;
 strncpy((char *)local_28,(char *)&param_string_encryption_encrypted,0x20);
 local_9 = 0;
 bVar1 = local_28[0];
 if (local_28[0] == 0) {
 iVar3 = 0;
 }
 else {
 do {
 *pbVar4 = bVar1 ^ 0x5a;
 bVar1 = pbVar4[1];
 pbVar4 = pbVar4 + 1;
 } while (bVar1 != 0);
 iVar3 = (int)(char)local_28[0];
 }
 sVar2 = strlen((char *)local_28);
 return (int)sVar2 + iVar3;
}

// Function: param_tail_call_optimized @ 0x1012c0
int param_tail_call_optimized(int param_1,int param_2)
{
 uint uVar1;
 if (0 < param_1) {
 uVar1 = param_1 - 1;
 param_2 = (param_2 + param_1 + uVar1 * uVar1) - (int)((unsigned long)(param_1 - 2) * (unsigned long)uVar1 >> 1);
 }
 return param_2;
}

// Function: call_tail_call_optimized @ 0x1012dd
unsigned long long call_tail_call_optimized(void)
{
 return 0x7a314;
}

// Function: param_non_tail_call @ 0x1012e3
int param_non_tail_call(int param_1)
{
 uint uVar1;
 if (0 < param_1) {
 uVar1 = param_1 - 1;
 return (uVar1 * uVar1 + param_1) - (int)((unsigned long)(param_1 - 2) * (unsigned long)uVar1 >> 1);
 }
 return 0;
}

// Function: call_non_tail_call @ 0x1012ff
unsigned long long call_non_tail_call(void)
{
 return 0x13ba;
}

// Function: param_vectorized_loop @ 0x101305
int param_vectorized_loop(long param_1,long param_2,long param_3,uint param_4)
{
 int iVar1;
 unsigned long uVar2;
 if (0 < (int)param_4) {
 uVar2 = 0;
 do {
 *(int *)(param_3 + uVar2 * 4) = *(int *)(param_2 + uVar2 * 4) + *(int *)(param_1 + uVar2 * 4);
 uVar2 = uVar2 + 1;
 } while (param_4 != uVar2);
 if (0 < (int)param_4) {
 uVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_3 + uVar2 * 4);
 uVar2 = uVar2 + 1;
 } while (param_4 != uVar2);
 return iVar1;
 }
 }
 return 0;
}

// Function: call_vectorized_loop @ 0x10133a
int call_vectorized_loop(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 long lVar7;
 int local_28 [4];
 int aiStack_24 [4];
 int local_18 [4];
 int iStack_10 = 0;
 int iStack_c = 0;
 local_28[0] = 0;
 local_28[1] = 0;
 local_28[2] = 0;
 local_28[3] = 0;
 local_18[0] = 0;
 local_18[1] = 0;
 local_18[2] = 0;
 local_18[3] = 0;
 aiStack_24[0] = 0;
 aiStack_24[1] = 0;
 aiStack_24[2] = 0;
 aiStack_24[3] = 0;
 lVar7 = 0;
 do {
 iVar1 = *(int *)((char *)&UNK_00102034 + lVar7);
 iVar2 = *(int *)((char *)&UNK_00102038 + lVar7);
 iVar3 = *(int *)((char *)&UNK_0010203c + lVar7);
 iVar4 = *(int *)((char *)&UNK_00102014 + lVar7);
 iVar5 = *(int *)((char *)&UNK_00102018 + lVar7);
 iVar6 = *(int *)((char *)&UNK_0010201c + lVar7);
 local_28[lVar7/0x10] = DAT_00102030[lVar7/0x10] + DAT_00102010[lVar7/0x10];
 local_28[(lVar7/0x10) + 1] = iVar1 + iVar4;
 aiStack_24[(lVar7/0x10) + 1] = iVar2 + iVar5;
 local_18[(lVar7/0x10) - 1] = iVar3 + iVar6;
 lVar7 = lVar7 + 0x10;
 } while (lVar7 != 0x20);
 return iStack_c + aiStack_24[2] + local_18[1] + aiStack_24[0] +
 iStack_10 + aiStack_24[1] + local_18[0] + local_28[0];
}

// Function: param_link_time_optimization @ 0x101397
int param_link_time_optimization(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: call_link_time_optimization @ 0x10139e
unsigned long long call_link_time_optimization(void)
{
 return 0x14;
}

// Function: div_zero_handler @ 0x1013a4
void div_zero_handler(int sig)
{
 div_zero_caught = 1;
 longjmp(jmp_buffer,1);
}

// Function: param_division_by_zero @ 0x1013c0
unsigned long param_division_by_zero(int param_1)
{
 int iVar1;
 unsigned long uVar2;
 signal(8,div_zero_handler);
 iVar1 = _setjmp(jmp_buffer);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 uVar2 = 10 / (long)param_1 & 0xffffffff;
 }
 return uVar2;
}

// Function: call_division_by_zero @ 0x1013f8
int call_division_by_zero(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 return iVar2 + iVar1;
}

// Function: segv_handler @ 0x101427
void segv_handler(int sig)
{
 segv_caught = 1;
 longjmp(segv_buffer,1);
}

// Function: param_null_pointer_deref @ 0x101443
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

// Function: call_null_pointer_deref @ 0x101473
int call_null_pointer_deref(void)
{
 int iVar1;
 int iVar2;
 unsigned int dummy = 0;
 iVar1 = param_null_pointer_deref(&dummy);
 iVar2 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0x0);
 return iVar2 + iVar1;
}

// Function: param_buffer_overflow_stack @ 0x1014a8
unsigned int param_buffer_overflow_stack(unsigned int param_1)
{
 return param_1;
}

// Function: param_buffer_overflow_heap @ 0x1014ab
unsigned int param_buffer_overflow_heap(unsigned int param_1)
{
 return param_1;
}

// Function: call_buffer_overflow @ 0x1014ae
unsigned long long call_buffer_overflow(void)
{
 return 0x1e;
}

// Function: param_integer_overflow @ 0x1014b4
int param_integer_overflow(uint param_1,uint param_2)
{
 int iVar1;
 int iVar2;
 iVar2 = param_2 + param_1;
 if (((0 < (int)param_1) && (0 < (int)param_2)) && (iVar2 < 0)) {
 return -1;
 }
 iVar1 = -2;
 if (iVar2 < 1) {
 iVar1 = iVar2;
 }
 if (-1 < (int)(param_2 & param_1)) {
 iVar1 = iVar2;
 }
 return iVar1;
}

// Function: call_integer_overflow @ 0x1014d9
unsigned long long call_integer_overflow(void)
{
 return 2000000000;
}

// Function: param_undefined_behavior @ 0x1014df
int param_undefined_behavior(int param_1)
{
 return param_1 * 2;
}

// Function: call_undefined_behavior @ 0x1014e3
unsigned long long call_undefined_behavior(void)
{
 return 10;
}

// Function: param_implementation_defined @ 0x1014e9
unsigned long long param_implementation_defined(void)
{
 return 0x2f;
}

// Function: call_implementation_defined @ 0x1014ef
unsigned long long call_implementation_defined(void)
{
 return 0x2f;
}

// Function: test_obf_opt_edge @ 0x1014f5
void test_obf_opt_edge(void)
{
 int iVar1;
 uint uVar2;
 int iVar3;
 unsigned long uVar4;
 unsigned long long uVar5;
 puts(&DAT_00102221);
 printf(&DAT_00102050,10);
 uVar4 = 6;
 iVar1 = 5;
 do {
 iVar3 = (int)uVar4;
 uVar4 = (long)iVar1 % (long)iVar3 & 0xffffffff;
 iVar1 = iVar3;
 } while ((int)uVar4 != 0);
 uVar5 = 0x23;
 if (iVar3 == 1) {
 uVar5 = 0x14;
 }
 printf(&DAT_0010206c,uVar5);
 printf(&DAT_00102088,0xe1);
 uVar2 = param_string_encryption();
 printf(&DAT_001020a5,(unsigned long)uVar2);
 printf(&DAT_001020c1,0x7a314);
 printf(&DAT_001020eb,0x13ba);
 uVar2 = call_vectorized_loop();
 printf(&DAT_00102110,(unsigned long)uVar2);
 printf(&DAT_00102136,0x14);
 uVar2 = call_division_by_zero();
 printf(&DAT_00102156,(unsigned long)uVar2);
 uVar2 = call_null_pointer_deref();
 printf(&DAT_00102172,(unsigned long)uVar2);
 printf(&DAT_0010218f,0x1e);
 printf(&DAT_001021ac,2000000000);
 printf(&DAT_001021dd,10);
 printf(&DAT_001021fa,0x2f);
 return;
}

// Function: main @ 0x101635
unsigned long long main(void)
{
 test_obf_opt_edge();
 return 0;
}

// Function: _fini @ 0x101640
static void _fini(void)
{
 return;
}

