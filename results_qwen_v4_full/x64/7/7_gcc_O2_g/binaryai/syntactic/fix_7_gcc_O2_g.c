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
typedef struct { long __jmpbuf[8]; } __jmp_buf_tag;
typedef void (*__sighandler_t)(int);
#define true 1
#define NULL ((void*)0)

/* Global variable declarations */
__jmp_buf_tag jmp_buffer;
__jmp_buf_tag segv_buffer;
int div_zero_caught = 0;
int segv_caught = 0;
int completed_0 = 0;

/* Forward declarations for handlers */
static void div_zero_handler(int param_1);
static void segv_handler(int param_1);
static void test_obf_opt_edge(void);

/* External function declarations */
extern int _setjmp(__jmp_buf_tag *);
extern void __longjmp_chk(__jmp_buf_tag *, int);
extern __sighandler_t signal(int, __sighandler_t);
extern void __stack_chk_fail(void);
extern char *strncpy(char *, const char *, size_t);
extern size_t strlen(const char *);
extern void *malloc(size_t);
extern void free(void *);
extern int puts(const char *);
extern int __printf_chk(int, const char *, ...);
char encrypted_0[] = "encrypted_string_data";
char DAT_00102008[] = "Hello World";
char DAT_00102137[] = "Value: %d\n";
char DAT_00102153[] = "Result: %llu\n";
char DAT_0010216f[] = "Instruction sub: %d\n";
char DAT_0010218c[] = "String enc: %d\n";
char DAT_00102038[] = "Tail call: %llu\n";
char DAT_00102068[] = "Non tail: %llu\n";
char DAT_00102090[] = "Vector loop: %d\n";
char DAT_001020b8[] = "LTO: %llu\n";
char DAT_001021a8[] = "Div zero: %d\n";
char DAT_001021c4[] = "Null ptr: %d\n";
char DAT_001021e1[] = "Buffer: %llu\n";
char DAT_001020d8[] = "Int overflow: %d\n";
char DAT_001021fe[] = "Undefined: %llu\n";
char DAT_00102110[] = "Impl defined: %llu\n";

// Decompiled by BinaryAI
// SHA256: f61e078b328696b16721a9ff56f76c626d02ce56da770fd80043aa5f0598cafe



// Function: FUN_00101020 @ 0x101020
static void FUN_00101020(void)
{
 return;
}



// Function: main @ 0x101180
int main(void)
{
 test_obf_opt_edge();
 return 0;
}









// Function: div_zero_handler @ 0x101290
static void div_zero_handler(int param_1)
{
 (void)param_1;
 div_zero_caught = 1;
 __longjmp_chk(&jmp_buffer,1);
}

// Function: segv_handler @ 0x1012c0
static void segv_handler(int param_1)
{
 (void)param_1;
 segv_caught = 1;
 __longjmp_chk(&segv_buffer,1);
}

// Function: param_fake_branch @ 0x1012f0
static unsigned int param_fake_branch(unsigned int param_1)
{
 return param_1;
}

// Function: call_fake_branch @ 0x101300
static unsigned long long call_fake_branch(void)
{
 return 10;
}

// Function: param_opaque_predicate @ 0x101310
static int param_opaque_predicate(int param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 iVar2 = param_1 + 1;
 iVar4 = iVar2;
 iVar1 = param_1;
 if (iVar2 != 0) {
 do {
 iVar3 = iVar4;
 iVar4 = iVar1 % iVar3;
 iVar1 = iVar3;
 } while (iVar4 != 0);
 if ((iVar3 == 1) && (param_1 * 2 + 1 + param_1 * param_1 == iVar2 * iVar2)) {
 return param_1 * 2 + 10;
 }
 }
 return param_1 * 3 + 0x14;
}

// Function: call_opaque_predicate @ 0x101360
static unsigned long long call_opaque_predicate(void)
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
 uVar2 = 0x14;
 if (iVar3 != 1) {
 uVar2 = 0x23;
 }
 return uVar2;
}

// Function: param_instruction_substitution @ 0x101390
static int param_instruction_substitution(uint param_1)
{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}

// Function: call_instruction_substitution @ 0x1013b0
static unsigned long long call_instruction_substitution(void)
{
 return 0xe1;
}

// Function: decrypt_string @ 0x1013c0
static byte * decrypt_string(char *param_1,char *param_2,size_t param_3,byte param_4)
{
 byte bVar1;
 byte *pbVar2;
 byte *pbVar3;
 pbVar3 = (byte *)strncpy(param_2,param_1,param_3);
 pbVar3[param_3 - 1] = 0;
 bVar1 = *pbVar3;
 pbVar2 = pbVar3;
 while (bVar1 != 0) {
 *pbVar2 = bVar1 ^ param_4;
 bVar1 = pbVar2[1];
 pbVar2 = pbVar2 + 1;
 }
 return pbVar3;
}

// Function: param_string_encryption @ 0x101410
static int param_string_encryption(void)
{
 byte bVar1;
 byte *pbVar2;
 byte *__s;
 size_t sVar3;
 long in_FS_OFFSET;
 byte local_38 [31];
 char local_19;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 __s = (byte *)strncpy((char *)local_38,(char *)&encrypted_0,0x1f);
 local_19 = 0;
 pbVar2 = __s;
 bVar1 = local_38[0];
 while (bVar1 != 0) {
 *pbVar2 = bVar1 ^ 0x5a;
 bVar1 = pbVar2[1];
 pbVar2 = pbVar2 + 1;
 }
 sVar3 = strlen((char *)__s);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return (int)sVar3 + (int)(char)local_38[0];
 }
 __stack_chk_fail();
}

// Function: call_string_encryption @ 0x101490
static void call_string_encryption(void)
{
 param_string_encryption();
 return;
}

// Function: param_tail_call_optimized @ 0x1014a0
static int param_tail_call_optimized(int param_1,int param_2)
{
 if (0 < param_1) {
 do {
 param_2 = param_2 + param_1;
 param_1 = param_1 + -1;
 } while (param_1 != 0);
 }
 return param_2;
}

// Function: call_tail_call_optimized @ 0x1014c0
static unsigned long long call_tail_call_optimized(void)
{
 return 0x7a314;
}

// Function: param_non_tail_call @ 0x1014d0
static int param_non_tail_call(int param_1)
{
 int iVar1;
 iVar1 = 0;
 if (0 < param_1) {
 do {
 iVar1 = iVar1 + param_1;
 param_1 = param_1 + -1;
 } while (param_1 != 0);
 }
 return iVar1;
}

// Function: call_non_tail_call @ 0x1014f0
static unsigned long long call_non_tail_call(void)
{
 return 0x13ba;
}

// Function: param_vectorized_loop @ 0x101500
static int param_vectorized_loop(long param_1,long param_2,int *param_3,uint param_4)
{
 int *piVar1;
 int iVar2;
 unsigned long uVar3;
 if (0 < (int)param_4) {
 uVar3 = 0;
 do {
 param_3[uVar3] = *(int *)(param_2 + uVar3 * 4) + *(int *)(param_1 + uVar3 * 4);
 uVar3 = uVar3 + 1;
 } while (uVar3 != param_4);
 piVar1 = param_3 + (unsigned long)(param_4 - 1) + 1;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *param_3;
 param_3 = param_3 + 1;
 } while (piVar1 != param_3);
 return iVar2;
 }
 return 0;
}

// Function: call_vectorized_loop @ 0x101550
static int call_vectorized_loop(void)
{
 long lVar1;
 int *piVar2;
 int iVar3;
 int iVar4;
 long in_FS_OFFSET;
 unsigned long long local_78;
 unsigned long long local_70;
 unsigned long long local_68;
 unsigned long long local_60;
 unsigned long long local_58;
 unsigned long long local_50;
 unsigned long long local_48;
 unsigned long long local_40;
 char local_38 [16];
 char local_28 [16];
 int local_18 [2];
 long local_10;
 iVar3 = 8;
 iVar4 = 1;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 piVar2 = (int *)local_38;
 local_38[0] = 0;
 local_28[0] = 0;
 local_78 = 0x200000001;
 local_70 = 0x400000003;
 local_68 = 0x600000005;
 local_60 = 0x800000007;
 local_58 = 0x700000008;
 local_50 = 0x500000006;
 local_48 = 0x300000004;
 local_40 = 0x100000002;
 lVar1 = 0;
 while( true ) {
 *(int *)((long)piVar2 + lVar1) = iVar4 + iVar3;
 if (lVar1 + 4 == 0x20) break;
 iVar4 = *(int *)((long)&local_78 + lVar1 + 4);
 iVar3 = *(int *)((long)&local_58 + lVar1 + 4);
 lVar1 = lVar1 + 4;
 }
 iVar4 = 0;
 do {
 iVar4 = iVar4 + *piVar2;
 piVar2 = piVar2 + 1;
 } while (local_18 != piVar2);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar4;
 }
 __stack_chk_fail();
}

// Function: param_link_time_optimization @ 0x101660
static int param_link_time_optimization(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: call_link_time_optimization @ 0x101670
static unsigned long long call_link_time_optimization(void)
{
 return 0x14;
}

// Function: param_division_by_zero @ 0x101680
static unsigned long param_division_by_zero(int param_1)
{
 int iVar1;
 unsigned long uVar2;
 signal(8,(__sighandler_t)div_zero_handler);
 iVar1 = _setjmp((__jmp_buf_tag *)&jmp_buffer);
 if (iVar1 == 0) {
 uVar2 = 10 / (long)param_1 & 0xffffffff;
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_division_by_zero @ 0x1016d0
static int call_division_by_zero(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)((void*)0));
 return iVar1 + iVar2;
}

// Function: param_null_pointer_deref @ 0x101710
static unsigned int param_null_pointer_deref(unsigned int *param_1)
{
 int iVar1;
 unsigned int uVar2;
 signal(0xb,(__sighandler_t)segv_handler);
 iVar1 = _setjmp((__jmp_buf_tag *)&segv_buffer);
 if (iVar1 == 0) {
 uVar2 = *param_1;
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_null_pointer_deref @ 0x101760
static int call_null_pointer_deref(void)
{
 int iVar1;
 int iVar2;
 long in_FS_OFFSET;
 unsigned int local_24;
 long local_20;
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 local_24 = 0x2a;
 iVar1 = param_null_pointer_deref(&local_24);
 iVar2 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)((void*)0));
 if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar1 + iVar2;
 }
 __stack_chk_fail();
}

// Function: param_buffer_overflow_stack @ 0x1017d0
static unsigned int param_buffer_overflow_stack(unsigned int param_1)
{
 return param_1;
}

// Function: param_buffer_overflow_heap @ 0x1017e0
static unsigned int param_buffer_overflow_heap(unsigned int param_1)
{
 void *__ptr;
 __ptr = malloc(0x10);
 if (__ptr != (void *)0x0) {
 free(__ptr);
 return param_1;
 }
 return 0xfffffffe;
}

// Function: call_buffer_overflow @ 0x101810
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

// Function: param_integer_overflow @ 0x101840
static int param_integer_overflow(uint param_1,uint param_2)
{
 int iVar1;
 iVar1 = param_1 + param_2;
 if ((0 < (int)param_1) && (0 < (int)param_2)) {
 if (iVar1 < 0) {
 iVar1 = -1;
 }
 return iVar1;
 }
 if (((int)(param_1 & param_2) < 0) && (0 < iVar1)) {
 iVar1 = -2;
 }
 return iVar1;
}

// Function: call_integer_overflow @ 0x101870
static unsigned long long call_integer_overflow(void)
{
 return 2000000000;
}

// Function: param_undefined_behavior @ 0x101880
static int param_undefined_behavior(int param_1)
{
 return param_1 * 2;
}

// Function: call_undefined_behavior @ 0x101890
static unsigned long long call_undefined_behavior(void)
{
 return 10;
}

// Function: param_implementation_defined @ 0x1018a0
static unsigned long long param_implementation_defined(void)
{
 return 0x2f;
}

// Function: call_implementation_defined @ 0x1018b0
static unsigned long long call_implementation_defined(void)
{
 return 0x2f;
}

// Function: test_obf_opt_edge @ 0x1018c0
static void test_obf_opt_edge(void)
{
 unsigned int uVar1;
 int iVar2;
 int iVar3;
 void *__ptr;
 unsigned long uVar4;
 unsigned long long uVar5;
 long in_FS_OFFSET;
 unsigned int local_24;
 long local_20;
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_00102008);
 __printf_chk(1,&DAT_00102137,10);
 uVar4 = 6;
 iVar2 = 5;
 do {
 iVar3 = (int)uVar4;
 uVar4 = (long)iVar2 % (long)iVar3 & 0xffffffff;
 iVar2 = iVar3;
 } while ((int)uVar4 != 0);
 uVar5 = 0x14;
 if (iVar3 != 1) {
 uVar5 = 0x23;
 }
 __printf_chk(1,&DAT_00102153,uVar5);
 __printf_chk(1,&DAT_0010216f,0xe1);
 uVar1 = param_string_encryption();
 __printf_chk(1,&DAT_0010218c,uVar1);
 __printf_chk(1,&DAT_00102038,0x7a314);
 __printf_chk(1,&DAT_00102068,0x13ba);
 uVar1 = call_vectorized_loop();
 __printf_chk(1,&DAT_00102090,uVar1);
 __printf_chk(1,&DAT_001020b8,0x14);
 iVar2 = param_division_by_zero(5);
 iVar3 = param_division_by_zero(0);
 signal(8,(__sighandler_t)((void*)0));
 __printf_chk(1,&DAT_001021a8,iVar2 + iVar3);
 local_24 = 0x2a;
 iVar2 = param_null_pointer_deref(&local_24);
 iVar3 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)((void*)0));
 __printf_chk(1,&DAT_001021c4,iVar2 + iVar3);
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 uVar5 = 8;
 }
 else {
 free(__ptr);
 uVar5 = 0x1e;
 }
 __printf_chk(1,&DAT_001021e1,uVar5);
 __printf_chk(1,&DAT_001020d8,2000000000);
 __printf_chk(1,&DAT_001021fe,10);
 if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
 __printf_chk(1,&DAT_00102110,0x2f);
 return;
 }
 __stack_chk_fail();
}



