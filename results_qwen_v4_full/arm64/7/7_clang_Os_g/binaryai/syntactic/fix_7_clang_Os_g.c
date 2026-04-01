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

/* Additional type definitions for compilation */
typedef void (*__sighandler_t)(int);
typedef struct { unsigned long __buf[128]; } __jmp_buf_tag;
typedef unsigned int uint;
typedef unsigned char byte;
#define CONCAT44(hi, lo) (((unsigned long long)(hi) << 32) | (unsigned int)(lo))

/* Global variables */
static char completed_0 = 0;
static void *__dso_handle = 0;
static char div_zero_caught = 0;
static char segv_caught = 0;
static char jmp_buffer[128];
static char segv_buffer[128];
static byte DAT_00100f10[64];
static byte DAT_00100f30[64];
static byte UNK_00100f38[64];
static byte UNK_00100f18[64];
static byte param_string_encryption_encrypted[32];
static byte DAT_00101121[64];
static byte DAT_00100f50[64];
static byte DAT_00100f6c[64];
static byte DAT_00100f88[64];
static byte DAT_00100fa5[64];
static byte DAT_00100fc1[64];
static byte DAT_00100feb[64];
static byte DAT_00101010[64];
static byte DAT_00101036[64];
static byte DAT_00101056[64];
static byte DAT_00101072[64];
static byte DAT_0010108f[64];
static byte DAT_001010ac[64];
static byte DAT_001010dd[64];
static byte DAT_001010fa[64];

// Decompiled by BinaryAI
// SHA256: 5f22b221c1035b0a57d6cddf7f66686a69a85726979ebe4f9511eea497ebb8f9



// Function: strlen - stub implementation
static size_t strlen(char *__s)
{
 size_t len = 0;
 while (__s && __s[len] != 0) {
  len++;
 }
 return len;
}

// Function: _setjmp - stub implementation
static int _setjmp(__jmp_buf_tag *__env)
{
 return 0;
}



// Function: __cxa_finalize - stub implementation
static void __cxa_finalize(void *param)
{
 return;
}

// Function: signal - stub implementation
static __sighandler_t signal(int __sig,__sighandler_t __handler)
{
 return (__sighandler_t)0;
}

// Function: __gmon_start__ - stub implementation
static void __gmon_start__(void)
{
 return;
}

// Function: abort - stub implementation
static void abort(void)
{
 while(1);
}

// Function: puts - stub implementation
static int puts(char *__s)
{
 return 0;
}

// Function: longjmp - stub implementation
static void longjmp(__jmp_buf_tag *__env,int __val)
{
 return;
}

// Function: strncpy - stub implementation
static char * strncpy(char *__dest,char *__src,size_t __n)
{
 size_t i;
 for (i = 0; i < __n && __src[i] != 0; i++) {
  __dest[i] = __src[i];
 }
 for (; i < __n; i++) {
  __dest[i] = 0;
 }
 return __dest;
}

// Function: printf - stub implementation
static int printf(char *__format,...)
{
 return 0;
}















// Function: param_fake_branch @ 0x100914
static void param_fake_branch(void)
{
 return;
}

// Function: call_fake_branch @ 0x100918
static unsigned long long call_fake_branch(void)
{
 return 10;
}

// Function: param_opaque_predicate @ 0x100920
static int param_opaque_predicate(int param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 iVar1 = param_1 + 1;
 iVar2 = iVar1;
 iVar4 = param_1;
 if (param_1 == -1) {
 iVar3 = -1;
 }
 else {
 do {
 iVar3 = iVar2;
 iVar2 = 0;
 if (iVar3 != 0) {
 iVar2 = iVar4 / iVar3;
 }
 iVar2 = iVar4 - iVar2 * iVar3;
 iVar4 = iVar3;
 } while (iVar2 != 0);
 }
 iVar2 = param_1 * 2 + 10;
 if (iVar3 != 1 || (param_1 * 2 | 1U) + param_1 * param_1 != iVar1 * iVar1) {
 iVar2 = param_1 * 3 + 0x14;
 }
 return iVar2;
}

// Function: call_opaque_predicate @ 0x100978
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

// Function: param_instruction_substitution @ 0x1009a8
static int param_instruction_substitution(uint param_1)
{
 return (param_1 & 0xf) + (param_1 >> 1) + param_1 * 0x15;
}

// Function: call_instruction_substitution @ 0x1009bc
static unsigned long long call_instruction_substitution(void)
{
 return 0xe1;
}

// Function: decrypt_string @ 0x1009c4
static byte * decrypt_string(char *param_1,byte *param_2,size_t param_3,byte param_4)
{
 byte bVar1;
 byte bVar2;
 byte *pbVar3;
 strncpy((char *)param_2,param_1,param_3);
 param_2[param_3 - 1] = 0;
 bVar2 = *param_2;
 if (bVar2 != 0) {
 pbVar3 = param_2 + 1;
 do {
 bVar1 = bVar2 ^ param_4;
 bVar2 = *pbVar3;
 pbVar3[-1] = bVar1;
 pbVar3 = pbVar3 + 1;
 } while (bVar2 != 0);
 }
 return param_2;
}

// Function: param_string_encryption @ 0x100a2c
static int param_string_encryption(void)
{
 byte bVar1;
 size_t sVar2;
 byte bVar3;
 byte *pbVar4;
 uint uVar5;
 byte local_40 [31];
 char local_21;
 strncpy((char *)local_40,&param_string_encryption_encrypted,0x20);
 local_21 = 0;
 if (local_40[0] == 0) {
 uVar5 = 0;
 }
 else {
 pbVar4 = (byte *)((unsigned long)local_40 | 1);
 bVar3 = local_40[0];
 do {
 bVar1 = bVar3 ^ 0x5a;
 bVar3 = *pbVar4;
 pbVar4[-1] = bVar1;
 pbVar4 = pbVar4 + 1;
 } while (bVar3 != 0);
 uVar5 = (uint)local_40[0];
 }
 sVar2 = strlen((char *)local_40);
 return (int)sVar2 + uVar5;
}

// Function: param_tail_call_optimized @ 0x100aa8
static int param_tail_call_optimized(int param_1,int param_2)
{
 uint uVar1;
 uVar1 = param_1 - 1;
 if (0 < param_1) {
 param_2 = (param_2 + param_1 + uVar1 * uVar1) - (int)((unsigned long)uVar1 * (unsigned long)(param_1 - 2) >> 1);
 }
 return param_2;
}

// Function: call_tail_call_optimized @ 0x100ad0
static unsigned long long call_tail_call_optimized(void)
{
 return 0x7a314;
}

// Function: param_non_tail_call @ 0x100adc
static int param_non_tail_call(int param_1)
{
 uint uVar1;
 uVar1 = param_1 - 1;
 if (0 < param_1) {
 return (param_1 + uVar1 * uVar1) - (int)((unsigned long)uVar1 * (unsigned long)(param_1 - 2) >> 1);
 }
 return 0;
}

// Function: call_non_tail_call @ 0x100b04
static unsigned long long call_non_tail_call(void)
{
 return 0x13ba;
}

// Function: param_vectorized_loop @ 0x100b0c
static int param_vectorized_loop(int *param_1,int *param_2,int *param_3,uint param_4)
{
 int iVar1;
 unsigned long uVar2;
 unsigned long uVar3;
 int *piVar4;
 if (0 < (int)param_4) {
 uVar2 = (unsigned long)param_4;
 uVar3 = uVar2;
 piVar4 = param_3;
 do {
 uVar3 = uVar3 - 1;
 *piVar4 = *param_2 + *param_1;
 param_1 = param_1 + 1;
 param_2 = param_2 + 1;
 piVar4 = piVar4 + 1;
 } while (uVar3 != 0);
 if (0 < (int)param_4) {
 iVar1 = 0;
 do {
 uVar2 = uVar2 - 1;
 iVar1 = *param_3 + iVar1;
 param_3 = param_3 + 1;
 } while (uVar2 != 0);
 return iVar1;
 }
 }
 return 0;
}

// Function: call_vectorized_loop @ 0x100b60
static int call_vectorized_loop(void)
{
 long lVar1;
 unsigned long long uVar2;
 unsigned long long uVar3;
 unsigned long long local_20 [4];
 lVar1 = 0;
 local_20[1] = 0;
 local_20[0] = 0;
 local_20[3] = 0;
 local_20[2] = 0;
 do {
 uVar2 = *(unsigned long long *)(&DAT_00100f10 + lVar1);
 uVar3 = *(unsigned long long *)(&DAT_00100f30 + lVar1);
 *(unsigned long *)((long)local_20 + lVar1 + 8) =
 CONCAT44((int)((unsigned long)*(unsigned long long *)(&UNK_00100f38 + lVar1) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(&UNK_00100f18 + lVar1) >> 0x20),
 (int)*(unsigned long long *)(&UNK_00100f38 + lVar1) +
 (int)*(unsigned long long *)(&UNK_00100f18 + lVar1));
 *(unsigned long *)((long)local_20 + lVar1) =
 CONCAT44((int)((unsigned long)uVar3 >> 0x20) + (int)((unsigned long)uVar2 >> 0x20),(int)uVar3 + (int)uVar2)
 ;
 lVar1 = lVar1 + 0x10;
 } while (lVar1 != 0x20);
 return (int)local_20[2] + (int)local_20[0] +
 (int)((unsigned long)local_20[2] >> 0x20) + (int)((unsigned long)local_20[0] >> 0x20) +
 (int)local_20[3] + (int)local_20[1] +
 (int)((unsigned long)local_20[3] >> 0x20) + (int)((unsigned long)local_20[1] >> 0x20);
}

// Function: param_link_time_optimization @ 0x100bb4
static int param_link_time_optimization(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: call_link_time_optimization @ 0x100bc0
static unsigned long long call_link_time_optimization(void)
{
 return 0x14;
}

// Function: div_zero_handler @ 0x100bc8
static void div_zero_handler(int param)
{
 div_zero_caught = 1;
 longjmp((__jmp_buf_tag *)jmp_buffer,1);
}

// Function: param_division_by_zero @ 0x100bec
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

// Function: call_division_by_zero @ 0x100c38
static int call_division_by_zero(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 return iVar2 + iVar1;
}

// Function: segv_handler @ 0x100c78
static void segv_handler(int param)
{
 segv_caught = 1;
 longjmp((__jmp_buf_tag *)segv_buffer,1);
}

// Function: param_null_pointer_deref @ 0x100c9c
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

// Function: call_null_pointer_deref @ 0x100ce4
static int call_null_pointer_deref(void)
{
 int iVar1;
 int iVar2;
 unsigned int local_24;
 local_24 = 0x2a;
 iVar1 = param_null_pointer_deref(&local_24);
 iVar2 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0x0);
 return iVar2 + iVar1;
}

// Function: param_buffer_overflow_stack @ 0x100d34
static void param_buffer_overflow_stack(void)
{
 return;
}

// Function: param_buffer_overflow_heap @ 0x100d38
static void param_buffer_overflow_heap(void)
{
 return;
}

// Function: call_buffer_overflow @ 0x100d3c
static unsigned long long call_buffer_overflow(void)
{
 return 0x1e;
}

// Function: param_integer_overflow @ 0x100d44
static int param_integer_overflow(uint param_1,uint param_2)
{
 int iVar1;
 int iVar2;
 iVar1 = param_2 + param_1;
 if (((0 < (int)param_1) && (0 < (int)param_2)) && (iVar1 < 0)) {
 return -1;
 }
 iVar2 = -2;
 if (iVar1 < 1 || -1 < (int)(param_2 & param_1)) {
 iVar2 = iVar1;
 }
 return iVar2;
}

// Function: call_integer_overflow @ 0x100d7c
static unsigned long long call_integer_overflow(void)
{
 return 2000000000;
}

// Function: param_undefined_behavior @ 0x100d88
static int param_undefined_behavior(int param_1)
{
 return param_1 << 1;
}

// Function: call_undefined_behavior @ 0x100d90
static unsigned long long call_undefined_behavior(void)
{
 return 10;
}

// Function: param_implementation_defined @ 0x100d98
static unsigned long long param_implementation_defined(void)
{
 return 0x30;
}

// Function: call_implementation_defined @ 0x100da0
static unsigned long long call_implementation_defined(void)
{
 return 0x30;
}

// Function: test_obf_opt_edge @ 0x100da8
static int test_obf_opt_edge(void)
{
 int iVar1;
 unsigned long uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 puts(&DAT_00101121);
 printf(&DAT_00100f50);
 iVar1 = 6;
 iVar5 = 5;
 do {
 iVar3 = iVar1;
 iVar1 = 0;
 if (iVar3 != 0) {
 iVar1 = iVar5 / iVar3;
 }
 iVar1 = iVar5 - iVar1 * iVar3;
 iVar5 = iVar3;
 } while (iVar1 != 0);
 uVar4 = 0x14;
 if (iVar3 != 1) {
 uVar4 = 0x23;
 }
 printf(&DAT_00100f6c);
 iVar1 = printf(&DAT_00100f88);
 uVar2 = param_string_encryption();
 printf(&DAT_00100fa5);
 printf(&DAT_00100fc1);
 iVar1 = printf(&DAT_00100feb);
 uVar2 = call_vectorized_loop();
 printf(&DAT_00101010);
 iVar1 = printf(&DAT_00101036);
 uVar2 = call_division_by_zero();
 iVar1 = printf(&DAT_00101056);
 uVar2 = call_null_pointer_deref();
 printf(&DAT_00101072);
 printf(&DAT_0010108f);
 printf(&DAT_001010ac);
 printf(&DAT_001010dd);
 iVar1 = printf(&DAT_001010fa);
 return iVar1;
}

// Function: main @ 0x100ee0
unsigned long long main(void)
{
 test_obf_opt_edge();
 return 0;
}



