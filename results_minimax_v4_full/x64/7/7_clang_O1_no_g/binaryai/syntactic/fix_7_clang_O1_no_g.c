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
typedef void (*__sighandler_t)(int);
struct __jmp_buf_tag { int __flg; int __ss; };
typedef struct __jmp_buf_tag __jmp_buf_tag[1];
typedef int __jmp_buf[8];

// Helper macros
#define ZEXT816(x) {0, 0}
#define CONCAT44(hi, lo) (((uint64_t)(hi) << 32) | (unsigned int)(lo))

// Missing global variables - declared as weak to allow linking
char completed_0;
void *__dso_handle;
int div_zero_caught;
__jmp_buf_tag jmp_buffer;
int segv_caught;
__jmp_buf_tag segv_buffer;

// Initialize globals at start
__attribute__((constructor))
void init_globals(void) {
    completed_0 = 0;
    __dso_handle = 0;
    div_zero_caught = 0;
    segv_caught = 0;
}

// External data references
// Data references - actual definitions
char DAT_00102221[] = "Testing obfuscation and optimization edge cases\n";
char DAT_00102050[] = "Opaque predicate result: %d\n";
char DAT_0010206c[] = "Call opaque predicate: %llu\n";
char DAT_00102088[] = "Instruction substitution: %x\n";
char DAT_001020a5[] = "String encryption length: %lu\n";
char DAT_001020c1[] = "Tail call optimized: %u\n";
char DAT_001020eb[] = "Non-tail call result: %lu\n";
char DAT_00102110[] = "Vectorized loop sum: %llu\n";
char DAT_00102136[] = "Testing division by zero handling\n";
char DAT_00102156[] = "Division handled, continuing...\n";
char DAT_00102172[] = "Null pointer deref result: %u\n";
char DAT_0010218f[] = "Buffer overflow check: %x\n";
char DAT_001021ac[] = "Integer overflow check: %u\n";
char DAT_001021dd[] = "Undefined behavior result: %d\n";
char DAT_001021fa[] = "Implementation defined: %llx\n";
int DAT_00102030[8] = {1, 2, 3, 4, 5, 6, 7, 8};
int DAT_00102010[8] = {8, 7, 6, 5, 4, 3, 2, 1};
char param_string_encryption_encrypted[] = "encrypted_string_data_placeholder";

// Function declarations
int main(void);
void __libc_start_main(int (*main)(void), void *arg, void *arg2, void *arg3, void *arg4, unsigned long long arg5, void *stack);
int __gmon_start__(void);
void *memset(void *s, int c, size_t n);
int printf(const char *format, ...);
extern __sighandler_t signal(int __sig, __sighandler_t __handler);

// Forward declarations - all functions used internally should be static
static unsigned int param_null_pointer_deref(unsigned int *param_1);
static int param_string_encryption(void);
static int call_string_encryption(void);
static unsigned int param_tail_call_optimized(int param_1, unsigned int param_2);
static int param_non_tail_call(int param_1);
static unsigned long param_division_by_zero(int param_1);

// External function declarations
extern char *strncpy(char *__dest, char *__src, size_t __n);
extern int puts(char *__s);
extern size_t strlen(char *__s);
extern int _setjmp(__jmp_buf_tag *__env);
extern __sighandler_t signal(int __sig, __sighandler_t __handler);
extern void longjmp(__jmp_buf_tag *__env, int __val);
extern void __cxa_finalize(void *dso);

// Decompiled by BinaryAI
// SHA256: b00333344fe7188007615043e8ad2f2a147be9894802d1094d229fcc4fb198d1



// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 // Empty function - original code was likely a tail call optimization
 return;
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

// Function: param_fake_branch @ 0x1011a0
unsigned int param_fake_branch(unsigned int param_1)
{
 return param_1;
}

// Function: call_fake_branch @ 0x1011b0
unsigned long long call_fake_branch(void)
{
 return 10;
}

// Function: param_opaque_predicate @ 0x1011c0
int param_opaque_predicate(uint param_1)
{
 int iVar1;
 uint uVar2;
 uint uVar3;
 uint uVar4;
 uint uVar5;
 uVar5 = param_1 + 1;
 uVar4 = uVar5;
 uVar3 = param_1;
 while (uVar2 = uVar4, uVar2 != 0) {
 uVar4 = (int)uVar3 % (int)uVar2;
 uVar3 = uVar2;
 }
 iVar1 = param_1 * 3 + 0x14;
 if ((uVar3 ^ 1 | uVar5 * uVar5 ^ (param_1 * 2 | 1) + param_1 * param_1) == 0) {
 iVar1 = param_1 * 2 + 10;
 }
 return iVar1;
}

// Function: call_opaque_predicate @ 0x101210
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

// Function: param_instruction_substitution @ 0x101240
int param_instruction_substitution(uint param_1)
{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}

// Function: call_instruction_substitution @ 0x101260
unsigned long long call_instruction_substitution(void)
{
 return 0xe1;
}

// Function: decrypt_string @ 0x101270
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

// Function: param_string_encryption @ 0x1012c0
static int param_string_encryption(void)
{
 byte bVar1;
 byte *pbVar2;
 size_t sVar3;
 byte local_28 [31];
 char local_9;
 strncpy((char *)local_28,(char *)&param_string_encryption_encrypted,0x20);
 local_9 = 0;
 bVar1 = local_28[0];
 pbVar2 = local_28;
 while (bVar1 != 0) {
 *pbVar2 = bVar1 ^ 0x5a;
 bVar1 = pbVar2[1];
 pbVar2 = pbVar2 + 1;
 }
 sVar3 = strlen((char *)local_28);
 return (int)sVar3 + (int)(char)local_28[0];
}

// call_string_encryption just calls param_string_encryption
static int call_string_encryption(void)
{
 return param_string_encryption();
}

// Function: param_tail_call_optimized @ 0x101380
static unsigned int param_tail_call_optimized(int param_1, unsigned int param_2)
{
 if (0 < param_1) {
 param_tail_call_optimized(param_1 + -1,param_2 + (unsigned int)param_1);
 }
 return param_2;
}

// Function: call_tail_call_optimized @ 0x1013a0
void call_tail_call_optimized(void)
{
 param_tail_call_optimized(1000,0);
 return;
}

// Function: param_non_tail_call @ 0x1013b0
int param_non_tail_call(int param_1)
{
 int iVar1;
 if (0 < param_1) {
 iVar1 = param_non_tail_call(param_1 + -1);
 return iVar1 + param_1;
 }
 return 0;
}

// Function: call_non_tail_call @ 0x1013d0
void call_non_tail_call(void)
{
 param_non_tail_call(100);
 return;
}

// Function: param_vectorized_loop @ 0x1013e0
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
 }
 if (0 < (int)param_4) {
 uVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_3 + uVar2 * 4);
 uVar2 = uVar2 + 1;
 } while (param_4 != uVar2);
 return iVar1;
 }
 return 0;
}

// Function: call_vectorized_loop @ 0x101420
int call_vectorized_loop(void)
{
 int iVar1;
 long lVar2;
 char local_28 [16];
 char local_18 [16];
 memset(local_18, 0, sizeof(local_18));
 memset(local_28, 0, sizeof(local_28));
 lVar2 = 0;
 do {
 *(int *)(local_28 + lVar2) =
 *(int *)((long)&DAT_00102030 + lVar2) + *(int *)((long)&DAT_00102010 + lVar2);
 lVar2 = lVar2 + 4;
 } while (lVar2 != 0x20);
 lVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(local_28 + lVar2 * 4);
 lVar2 = lVar2 + 1;
 } while (lVar2 != 8);
 return iVar1;
}

// Function: param_link_time_optimization @ 0x101470
int param_link_time_optimization(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: call_link_time_optimization @ 0x101480
unsigned long long call_link_time_optimization(void)
{
 return 0x14;
}

// Function: div_zero_handler @ 0x101490
void div_zero_handler(int sig)
{
 div_zero_caught = 1;
 longjmp((__jmp_buf_tag *)jmp_buffer,1);
}

// Function: param_division_by_zero @ 0x1014b0
static unsigned long param_division_by_zero(int param_1)
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

// Function: call_division_by_zero @ 0x1014f0
int call_division_by_zero(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 return iVar2 + iVar1;
}

// Function: segv_handler @ 0x101520
void segv_handler(int sig)
{
 segv_caught = 1;
 longjmp((__jmp_buf_tag *)segv_buffer,1);
}

// Function: param_null_pointer_deref @ 0x101540
static unsigned int param_null_pointer_deref(unsigned int *param_1)
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

// Function: call_null_pointer_deref @ 0x101570
static int call_null_pointer_deref(void)
{
 unsigned int in_EAX;
 unsigned int iVar1;
 unsigned int iVar2;
 unsigned long long uStack_18;
 in_EAX = 0;
 uStack_18 = CONCAT44(0x2a,in_EAX);
 iVar1 = param_null_pointer_deref((unsigned int*)((long)&uStack_18 + 4));
 iVar2 = param_null_pointer_deref((unsigned int*)0);
 signal(0xb,(__sighandler_t)0x0);
 return (int)(iVar2 + iVar1);
}

// Function: param_buffer_overflow_stack @ 0x1015b0
unsigned int param_buffer_overflow_stack(unsigned int param_1)
{
 return param_1;
}

// Function: param_buffer_overflow_heap @ 0x1015c0
unsigned int param_buffer_overflow_heap(unsigned int param_1)
{
 return param_1;
}

// Function: call_buffer_overflow @ 0x1015d0
unsigned long long call_buffer_overflow(void)
{
 return 0x1e;
}

// Function: param_integer_overflow @ 0x1015e0
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

// Function: call_integer_overflow @ 0x101610
unsigned long long call_integer_overflow(void)
{
 return 2000000000;
}

// Function: param_undefined_behavior @ 0x101620
int param_undefined_behavior(int param_1)
{
 return param_1 * 2;
}

// Function: call_undefined_behavior @ 0x101630
unsigned long long call_undefined_behavior(void)
{
 return 10;
}

// Function: param_implementation_defined @ 0x101640
unsigned long long param_implementation_defined(void)
{
 return 0x2f;
}

// Function: call_implementation_defined @ 0x101650
unsigned long long call_implementation_defined(void)
{
 return 0x2f;
}

// Function: test_obf_opt_edge @ 0x101660
void test_obf_opt_edge(void)
{
 byte bVar1;
 byte *pbVar2;
 unsigned int uVar3;
 unsigned int iVar4;
 unsigned int iVar5;
 size_t sVar6;
 unsigned long uVar7;
 long lVar8;
 unsigned long long uVar9;
 char local_38 [16];
 char local_28 [16];
 puts(&DAT_00102221);
 printf(&DAT_00102050,10);
 uVar7 = 6;
 iVar4 = 5;
 do {
 iVar5 = (int)uVar7;
 uVar7 = (long)iVar4 % (long)iVar5 & 0xffffffff;
 iVar4 = iVar5;
 } while ((int)uVar7 != 0);
 uVar9 = 0x23;
 if (iVar5 == 1) {
 uVar9 = 0x14;
 }
 printf(&DAT_0010206c,uVar9);
 printf(&DAT_00102088,0xe1);
 strncpy(local_38,(char *)&param_string_encryption_encrypted,0x20);
 local_28[15] = 0;
 bVar1 = local_38[0];
 pbVar2 = local_38;
 while (bVar1 != 0) {
 *pbVar2 = bVar1 ^ 0x5a;
 bVar1 = pbVar2[1];
 pbVar2 = pbVar2 + 1;
 }
 sVar6 = strlen(local_38);
 lVar8 = 0;
 printf(&DAT_001020a5,(unsigned long)(uint)((int)(char)local_38[0] + (int)sVar6));
 uVar3 = param_tail_call_optimized(1000,0);
 printf(&DAT_001020c1,(unsigned long)uVar3);
 uVar3 = param_non_tail_call(100);
 printf(&DAT_001020eb,(unsigned long)uVar3);
 memset(local_28, 0, sizeof(local_28));
 memset(local_38, 0, sizeof(local_38));
 do {
 *(int *)(local_38 + lVar8) =
 *(int *)((long)&DAT_00102030 + lVar8) + *(int *)((long)&DAT_00102010 + lVar8);
 lVar8 = lVar8 + 4;
 } while (lVar8 != 0x20);
 lVar8 = 0;
 uVar7 = 0;
 do {
 uVar7 = (unsigned long)(uint)((int)uVar7 + *(int *)(local_38 + lVar8 * 4));
 lVar8 = lVar8 + 1;
 } while (lVar8 != 8);
 printf(&DAT_00102110,uVar7);
 printf(&DAT_00102136);
 param_division_by_zero(5);
 param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 printf(&DAT_00102156);
 *(unsigned int*)local_38 = 0x2a;
iVar4 = param_null_pointer_deref((unsigned int*)local_38);
iVar5 = param_null_pointer_deref((unsigned int*)0);
 signal(0xb,(__sighandler_t)0x0);
 printf(&DAT_00102172,(unsigned long)(uint)(iVar5 + iVar4));
 printf(&DAT_0010218f,0x1e);
 printf(&DAT_001021ac,2000000000);
 printf(&DAT_001021dd,10);
 printf(&DAT_001021fa,0x2f);
 return;
}

// Function: main @ 0x101890
int main(void)
{
 test_obf_opt_edge();
 return 0;
}



