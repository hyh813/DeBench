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
typedef unsigned char byte;
typedef unsigned int uint;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

// Decompiled by BinaryAI
// SHA256: 99168740340475ba8b11a6638a5ade67b14cf59897101c06314323c7e49a0ef5

// Function: _init @ 0x101000
static int _init(void *ctx)
{
 return 0;
}

// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 // Calling null pointer - this is undefined behavior, just return
 return;
}

// Setjmp types - defined BEFORE use in extern declarations
typedef struct __jmp_buf_tag {
    long __jb[16];
    long __fl;
    long __ss[128];
    long __r7;
} __jmp_buf_tag;

// Signal handler type
typedef void (*__sighandler_t)(int);

// External declarations (from libc)
extern char *strncpy(char *__dest, const char *__src, size_t __n);
extern int puts(const char *__s);
extern size_t strlen(const char *__s);
extern int printf(const char *__format, ...);
extern int _setjmp(__jmp_buf_tag *__env);
extern void *memset(void *__s, int __c, size_t __n);
extern __sighandler_t signal(int __sig, __sighandler_t __handler);
extern void longjmp(__jmp_buf_tag *__env, int __val);
extern void __cxa_finalize(void *);
extern int __libc_start_main(int (*main)(void), int argc, char **argv, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
extern void *__gmon_start__(void);
extern void *__dso_handle;

// Global variables used by the code
int completed_0 = 0;
char jmp_buffer[256];  // __jmp_buf_tag size varies, using char array as placeholder
char segv_buffer[256];
int div_zero_caught = 0;
int segv_caught = 0;

// Data references (from binary)
extern unsigned int UNK_00102034;
extern unsigned int UNK_00102038;
extern unsigned int UNK_0010203c;
extern unsigned int UNK_00102014;
extern unsigned int UNK_00102018;
extern unsigned int UNK_0010201c;

// Data definitions for UNK values (integer arrays from binary)
unsigned int UNK_00102034 = 0;
unsigned int UNK_00102038 = 0;
unsigned int UNK_0010203c = 0;
unsigned int UNK_00102014 = 0;
unsigned int UNK_00102018 = 0;
unsigned int UNK_0010201c = 0;
extern const char* DAT_00102030;
extern const char* DAT_00102010;
extern const char* DAT_00102221;
extern const char* DAT_00102050;
extern const char* DAT_0010206c;
extern const char* DAT_00102088;
extern const char* DAT_001020a5;
extern const char* DAT_001020c1;
extern const char* DAT_001020eb;
extern const char* DAT_00102110;
extern const char* DAT_00102136;
extern const char* DAT_00102156;
extern const char* DAT_00102172;
extern const char* DAT_0010218f;
extern const char* DAT_001021ac;
extern const char* DAT_001021dd;
extern const char* DAT_001021fa;

// Encrypted string data for param_string_encryption
extern unsigned char param_string_encryption_encrypted[32];
unsigned char param_string_encryption_encrypted[32] = {
    0x5a, 0x5a, 0x5a, 0x5a, 0x5a, 0x5a, 0x5a, 0x5a,
    0x5a, 0x5a, 0x5a, 0x5a, 0x5a, 0x5a, 0x5a, 0x5a,
    0x5a, 0x5a, 0x5a, 0x5a, 0x5a, 0x5a, 0x5a, 0x5a,
    0x5a, 0x5a, 0x5a, 0x5a, 0x5a, 0x5a, 0x5a, 0x5a
};

// Data definitions for format strings (from binary .rodata section)
const char* DAT_001021fa = "%llx\n";
const char* DAT_0010206c = "%llu\n";
const char* DAT_00102088 = "%x\n";
const char* DAT_001020a5 = "%lu\n";
const char* DAT_001020c1 = "%lu\n";
const char* DAT_001020eb = "%lu\n";
const char* DAT_00102110 = "%lu\n";
const char* DAT_00102136 = "%llu\n";
const char* DAT_00102156 = "%lu\n";
const char* DAT_00102172 = "%lu\n";
const char* DAT_0010218f = "%llu\n";
const char* DAT_001021ac = "%u\n";
const char* DAT_001021dd = "%llu\n";
const char* DAT_00102050 = "%d\n";
const char* DAT_00102221 = "test_obf_opt_edge called\n";

// Forward declaration for main (called by _start)
int main(void);

// Function: _start @ 0x1010b0
static void _start(unsigned long long param_1, unsigned long long param_2)
{
 char auStack_8 [8];
 __libc_start_main(main, (int)param_2, &auStack_8, (void (*)(void))0, (void (*)(void))0, (void (*)(void))param_1, &auStack_8);
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
byte * decrypt_string(char *param_1, byte *param_2, size_t param_3, byte param_4)
{
 byte bVar1;
 byte *pbVar2;
 (void)strncpy((char *)param_2, param_1, param_3);
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
 char local_28 [32];
 int aiStack_24 [3];
 char local_18 [32];
 int iStack_10;
 int iStack_c;
 memset(local_18, 0, sizeof(local_18));
 memset(local_28, 0, sizeof(local_28));
 lVar7 = 0;
 do {
 iVar1 = *(int *)(&UNK_00102034 + lVar7);
 iVar2 = *(int *)(&UNK_00102038 + lVar7);
 iVar3 = *(int *)(&UNK_0010203c + lVar7);
 iVar4 = *(int *)(&UNK_00102014 + lVar7);
 iVar5 = *(int *)(&UNK_00102018 + lVar7);
 iVar6 = *(int *)(&UNK_0010201c + lVar7);
 *(int *)(local_28 + lVar7) = *(int *)(&DAT_00102030 + lVar7) + *(int *)(&DAT_00102010 + lVar7);
 *(int *)(local_28 + lVar7 + 4) = iVar1 + iVar4;
 *(int *)((long)aiStack_24 + lVar7 + 4) = iVar2 + iVar5;
 *(int *)(local_18 + lVar7 + -4) = iVar3 + iVar6;
 lVar7 = lVar7 + 0x10;
 } while (lVar7 != 0x20);
 return iStack_c + aiStack_24[2] + *(int*)(&local_18[4]) + aiStack_24[0] +
 iStack_10 + aiStack_24[1] + *(int*)(&local_18[0]) + (int)local_28;
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
 (void)sig;
 div_zero_caught = 1;
 longjmp((__jmp_buf_tag *)jmp_buffer,1);
}

// Function: param_division_by_zero @ 0x1013c0
unsigned long param_division_by_zero(int param_1)
{
 int iVar1;
 unsigned long uVar2;
 signal(8,div_zero_handler);
 iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
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
 (void)sig;
 segv_caught = 1;
 longjmp((__jmp_buf_tag *)segv_buffer,1);
}

// Function: param_null_pointer_deref @ 0x101443
unsigned int param_null_pointer_deref(unsigned int *param_1)
{
 int iVar1;
 unsigned int uVar2;
 signal(0xb,segv_handler);
 iVar1 = _setjmp((__jmp_buf_tag *)segv_buffer);
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
 unsigned int zero = 0;
 iVar1 = param_null_pointer_deref(&zero);
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
int main(void)
{
 test_obf_opt_edge();
 return 0;
}

// Function: _fini @ 0x101640
static void _fini(void)
{
 return;
}

