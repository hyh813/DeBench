#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>

/* Auto-injected type definitions by preprocessor */
typedef unsigned int uint;
typedef unsigned char byte;

// Decompiled by BinaryAI
// SHA256: d4e88e6ff2d668e6797aa49c3ae9cd937e70f5bad95aa1c5b3914e112f25cf0b

/* Global variables */
int global_counter = 0;
static unsigned long long stack0x00000008;
static unsigned long long stack0xfffffffffffffff0;

unsigned int global_array[10];
int static_local_counter = 0;
int extern_global_var = 0;
const char const_string[] = "test";
static unsigned int file_scope_static = 0;
void (*global_func_ptr)(void) = 0;
unsigned int *global_heap_ptr = 0;
char completed_0 = 0;
void *__dso_handle = 0;
const char DAT_00102225[] = "Testing stack memory functions";
const char DAT_00102243[] = "Testing heap memory functions";
const char DAT_00102285[] = "Testing memory operation functions";
const char DAT_00101f47[] = "fork failed";
const char DAT_00101ee1[] = "child exited normally, status: %d\n";
const char DAT_00101f06[] = "child exited with signal: %d\n";
const char DAT_00101ed1[] = "%d\n";
const char DAT_00102261[] = "Testing static and global variables";






extern void * memmove(void *__dest,const void *__src,size_t __n);
extern void exit(int __status);
extern void __libc_start_main(void (*main)(void), unsigned long long init, unsigned long long fini, void (*rtld_fini)(void), void *stack_end, unsigned long long param_1);
extern void perror(const char *__s);
extern void __cxa_finalize(void);
extern __pid_t fork(void);
extern void * malloc(size_t __size);
extern void * memset(void *__s,int __c,size_t __n);
extern void * calloc(size_t __nmemb,size_t __size);
extern void * realloc(void *__ptr,size_t __size);
extern void __gmon_start__(void);
extern void abort(void);
extern int puts(const char *__s);
extern int memcmp(const void *__s1,const void *__s2,size_t __n);
extern void free(void *__ptr);
extern int printf(const char *__format,...);
extern __pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options);
extern int double_value(int param_1);
extern int extern_function(int param_1);













// Function: local_vars @ 0x100b54
static int local_vars(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: local_array @ 0x100b60
static unsigned int local_array(int param_1)
{
 long lVar1;
 int iVar2;
 int local_28 [10];
 lVar1 = 0;
 iVar2 = 0;
 do {
 *(int *)((long)local_28 + lVar1) = iVar2;
 iVar2 = iVar2 + param_1;
 lVar1 = lVar1 + 4;
 } while (lVar1 != 0x28);
 return local_28[5];
}

// Function: local_struct @ 0x100b90
static int local_struct(int param_1)
{
 return param_1 * 3;
}

// Function: address_of_local @ 0x100b98
static unsigned long long address_of_local(unsigned int *param_1)
{
 *param_1 = 0x2a;
 return 0x2a;
}

// Function: address_of_array @ 0x100bac
static int address_of_array(int *param_1)
{
 return *param_1 << 1;
}

// Function: large_stack_frame @ 0x100bb8
static char large_stack_frame(void)
{
 long lVar1;
 char local_810 [2048];
 lVar1 = 0;
 do {
 local_810[lVar1] = (char)lVar1;
 lVar1 = lVar1 + 1;
 } while (lVar1 != 0x800);
 return local_810[1024];
}

typedef struct { unsigned long long _0_8_; unsigned int _4_4_; unsigned long long _8_8_; } vla_return_t;

// Function: vla_stack @ 0x100be8
static vla_return_t vla_stack(uint param_1,unsigned long long param_2)
{
 long lVar1;
 unsigned long uVar2;
 unsigned int *puVar3;
 vla_return_t auVar4;
 vla_return_t auVar5;
 if (param_1 - 0x3e9 < 0xfffffc18) {
 auVar4._8_8_ = param_2;
 auVar4._0_8_ = 0xffffffff;
 return auVar4;
 }
 uVar2 = (unsigned long)param_1;
 if (0 < (int)param_1) {
 lVar1 = 0;
 puVar3 = (unsigned int *)(&stack0xfffffffffffffff0 + -(uVar2 * 4 + 0xf & 0x7fffffff0));
 do {
 *puVar3 = (int)lVar1;
 lVar1 = lVar1 + 2;
 puVar3 = puVar3 + 1;
 } while (uVar2 * 2 - lVar1 != 0);
 }
 if ((int)param_1 < 0) {
 param_1 = param_1 + 1;
 }
 auVar5._4_4_ = 0;
 auVar5._4_4_ = *(uint *)((long)(&stack0xfffffffffffffff0 + -(uVar2 * 4 + 0xf & 0x7fffffff0)) +
 (unsigned long)(uint)((int)param_1 >> 1) * 4);
 auVar5._8_8_ = (unsigned long long)&stack0xfffffffffffffff0;
 return auVar5;
}

// Function: alloca_usage @ 0x100c68
static unsigned int alloca_usage(unsigned long param_1)
{
 int iVar1;
 long lVar2;
 unsigned int *puVar3;
 iVar1 = (int)param_1;
 if (0 < iVar1) {
 lVar2 = 0;
 puVar3 = (unsigned int *)
 (&stack0xfffffffffffffff0 +
 -((-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2) + 0xf &
 0xfffffffffffffff0));
 do {
 *puVar3 = (int)lVar2;
 lVar2 = lVar2 + 3;
 puVar3 = puVar3 + 1;
 } while ((param_1 & 0xffffffff) + (param_1 & 0xffffffff) * 2 != lVar2);
 if (iVar1 < 0) {
 iVar1 = iVar1 + 1;
 }
 return *(unsigned int *)
 ((long)(&stack0xfffffffffffffff0 +
 -((-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2) +
 0xf & 0xfffffffffffffff0)) + (unsigned long)(uint)(iVar1 >> 1) * 4);
 }
 return 0xffffffff;
}

// Function: stack_alias @ 0x100cd4
static unsigned long long stack_alias(void)
{
 return 0x14;
}

// Function: test_stack_memory @ 0x100cdc
int test_stack_memory(void)
{
 int iVar1;
 long lVar2;
 unsigned int *puVar3;
 unsigned int local_820 [5];
 uint local_80c;
 byte local_420;
 puts(DAT_00102225);
 printf("MEM-L1-01 (local_vars): %d\n",0x14);
 lVar2 = 0;
 puVar3 = local_820;
 do {
 *puVar3 = (int)lVar2;
 lVar2 = lVar2 + 2;
 puVar3 = puVar3 + 1;
 } while (lVar2 != 0x14);
 printf("MEM-L1-02 (local_array): %d\n",(unsigned long)local_80c);
 printf("MEM-L1-03 (local_struct): %d\n",0xf);
 printf("MEM-L1-04 (address_of_local): %d\n",0x2a);
 printf("MEM-L1-05 (address_of_array): %d\n",2);
 lVar2 = 0;
 do {
 *(char *)((long)local_820 + lVar2) = (char)lVar2;
 lVar2 = lVar2 + 1;
 } while (lVar2 != 0x800);
 printf("MEM-L2-01 (large_stack_frame): %d\n",(unsigned long)local_420);
 lVar2 = 0;
 puVar3 = local_820;
 do {
 *puVar3 = (int)lVar2;
 lVar2 = lVar2 + 2;
 puVar3 = puVar3 + 1;
 } while (lVar2 != 0x14);
 printf("MEM-L2-02 (vla_stack): %d\n",(unsigned long)local_80c);
 lVar2 = 0;
 puVar3 = local_820;
 do {
 *puVar3 = (int)lVar2;
 lVar2 = lVar2 + 3;
 puVar3 = puVar3 + 1;
 } while (lVar2 != 0x1e);
 printf("MEM-L2-03 (alloca_usage): %d\n",(unsigned long)local_80c);
 iVar1 = printf("MEM-L2-04 (stack_alias): %d\n",0x14);
 return iVar1;
}

// Function: heap_basic @ 0x100e00
static unsigned int heap_basic(unsigned long param_1)
{
 unsigned int *__ptr;
 long lVar1;
 unsigned int *puVar2;
 int iVar3;
 unsigned int uVar4;
 param_1 = param_1 & 0xffffffff;
 __ptr = (unsigned int *)malloc(-(param_1 >> 0x1f) & 0xfffffffc00000000 | param_1 << 2);
 if (__ptr == (unsigned int *)0x0) {
 uVar4 = 0xffffffff;
 }
 else {
 iVar3 = (int)param_1;
 if (0 < iVar3) {
 lVar1 = 0;
 puVar2 = __ptr;
 do {
 *puVar2 = (int)lVar1;
 lVar1 = lVar1 + 2;
 puVar2 = puVar2 + 1;
 } while (param_1 * 2 - lVar1 != 0);
 }
 if (iVar3 < 0) {
 iVar3 = iVar3 + 1;
 }
 uVar4 = __ptr[iVar3 >> 1];
 free(__ptr);
 }
 return uVar4;
}

// Function: heap_calloc @ 0x100e70
static int heap_calloc(uint param_1)
{
 int *__ptr;
 unsigned long uVar1;
 int *piVar2;
 int iVar3;
 __ptr = (int *)calloc((long)(int)param_1,4);
 if (__ptr == (int *)0x0) {
 iVar3 = -1;
 }
 else {
 if ((int)param_1 < 1) {
 iVar3 = 0;
 }
 else {
 iVar3 = 0;
 uVar1 = (unsigned long)param_1;
 piVar2 = __ptr;
 do {
 uVar1 = uVar1 - 1;
 iVar3 = *piVar2 + iVar3;
 piVar2 = piVar2 + 1;
 } while (uVar1 != 0);
 }
 free(__ptr);
 }
 return iVar3;
}

// Function: heap_realloc @ 0x100ed8
static unsigned int heap_realloc(void)
{
 long lVar1;
 int iVar2;
 void *__ptr;
 void *__ptr_00;
 int iVar3;
 long lVar4;
 unsigned int uVar5;
 __ptr = malloc(0x14);
 if (__ptr == (void *)0x0) {
 uVar5 = 0xffffffff;
 }
 else {
 lVar4 = 0;
 do {
 lVar1 = lVar4 + 1;
 *(int *)((long)__ptr + lVar4 * 4) = (int)lVar1;
 lVar4 = lVar1;
 } while (lVar1 != 5);
 iVar2 = *(int *)((long)__ptr + 8);
 __ptr_00 = realloc(__ptr,0x28);
 if (__ptr_00 == (void *)0x0) {
 uVar5 = 0xfffffffe;
 __ptr_00 = __ptr;
 }
 else {
 iVar3 = 0x32;
 lVar4 = 0x14;
 do {
 *(int *)((long)__ptr_00 + lVar4) = iVar3;
 iVar3 = iVar3 + 10;
 lVar4 = lVar4 + 4;
 } while (lVar4 != 0x28);
 if (*(int *)((long)__ptr_00 + 8) == iVar2) {
 uVar5 = *(unsigned int *)((long)__ptr_00 + 0x14);
 }
 else {
 uVar5 = 0xfffffffd;
 }
 }
 free(__ptr_00);
 }
 return uVar5;
}

// Function: heap_array @ 0x100f80
static unsigned int heap_array(unsigned long param_1)
{
 unsigned int *__ptr;
 long lVar1;
 unsigned int *puVar2;
 int iVar3;
 unsigned int uVar4;
 param_1 = param_1 & 0xffffffff;
 __ptr = (unsigned int *)malloc(-(param_1 >> 0x1f) & 0xfffffffc00000000 | param_1 << 2);
 if (__ptr == (unsigned int *)0x0) {
 uVar4 = 0xffffffff;
 }
 else {
 iVar3 = (int)param_1;
 if (0 < iVar3) {
 lVar1 = 0;
 puVar2 = __ptr;
 do {
 *puVar2 = (int)lVar1;
 lVar1 = lVar1 + 3;
 puVar2 = puVar2 + 1;
 } while (param_1 * 3 != lVar1);
 }
 if (iVar3 < 0) {
 iVar3 = iVar3 + 1;
 }
 uVar4 = __ptr[iVar3 >> 1];
 free(__ptr);
 }
 return uVar4;
}

// Function: heap_struct @ 0x100ff0
static int heap_struct(int param_1)
{
 return param_1 * 3;
}

// Function: heap_nested @ 0x100ff8
static unsigned long long heap_nested(void **param_1)
{
 unsigned int *puVar1;
 void *pvVar2;
 unsigned long long uVar3;
 puVar1 = (unsigned int *)malloc(0x10);
 *param_1 = puVar1;
 if (puVar1 == (unsigned int *)0x0) {
 uVar3 = 0xffffffff;
 }
 else {
 *puVar1 = 10;
 pvVar2 = malloc(0x10);
 *(void **)((long)*param_1 + 8) = pvVar2;
 puVar1 = *(unsigned int **)((long)*param_1 + 8);
 if (puVar1 == (unsigned int *)0x0) {
 free(*param_1);
 uVar3 = 0xfffffffe;
 }
 else {
 uVar3 = 0;
 *(unsigned long long *)(puVar1 + 2) = 0;
 *puVar1 = 0x14;
 }
 }
 return uVar3;
}

// Function: linked_list_heap @ 0x10106c
static int linked_list_heap(void)
{
 uint uVar1;
 int *piVar2;
 bool bVar3;
 int *piVar4;
 int *piVar5;
 int *__ptr;
 int iVar6;
 uint uVar7;
 __ptr = (int *)0x0;
 bVar3 = true;
 piVar5 = (int *)0x0;
 uVar7 = 0;
 do {
 piVar4 = (int *)malloc(0x10);
 if (piVar4 == (int *)0x0) goto joined_r0x001010c4;
 *(unsigned long long *)(piVar4 + 2) = 0;
 *piVar4 = uVar7 * 10;
 piVar2 = piVar4;
 if (__ptr != (int *)0x0) {
 *(int **)(piVar5 + 2) = piVar4;
 piVar2 = __ptr;
 }
 __ptr = piVar2;
 if (piVar4 == (int *)0x0) break;
 uVar1 = uVar7 + 1;
 bVar3 = uVar7 < 4;
 piVar5 = piVar4;
 uVar7 = uVar1;
 } while (uVar1 != 5);
LAB_00101108:
 if (bVar3) {
 iVar6 = -1;
 }
 else {
 iVar6 = 0;
 for (piVar5 = __ptr; piVar5 != (int *)0x0; piVar5 = *(int **)(piVar5 + 2)) {
 iVar6 = *piVar5 + iVar6;
 }
 while (__ptr != (int *)0x0) {
 piVar5 = *(int **)(__ptr + 2);
 free(__ptr);
 __ptr = piVar5;
 }
 }
 return iVar6;
joined_r0x001010c4:
 while (__ptr != (int *)0x0) {
 piVar5 = *(int **)(__ptr + 2);
 free(__ptr);
 __ptr = piVar5;
 }
 __ptr = (int *)0x0;
 goto LAB_00101108;
}

// Function: create_tree_node @ 0x101160
static void create_tree_node(unsigned int param_1)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)malloc(0x18);
 if (puVar1 != (unsigned int *)0x0) {
 *puVar1 = param_1;
 *(unsigned long long *)(puVar1 + 2) = 0;
 *(unsigned long long *)(puVar1 + 4) = 0;
 }
 return;
}

// Function: tree_heap_traversal @ 0x101190
static int tree_heap_traversal(void)
{
 int *__ptr;
 int *__ptr_00;
 int *__ptr_01;
 int iVar1;
 __ptr = (int *)malloc(0x18);
 if (__ptr == (int *)0x0) {
 return -1;
 }
 *(unsigned long long *)(__ptr + 2) = 0;
 *(unsigned long long *)(__ptr + 4) = 0;
 *__ptr = 10;
 __ptr_00 = (int *)malloc(0x18);
 if (__ptr_00 != (int *)0x0) {
 *(unsigned long long *)(__ptr_00 + 2) = 0;
 *(unsigned long long *)(__ptr_00 + 4) = 0;
 *__ptr_00 = 0x14;
 }
 *(int **)(__ptr + 2) = __ptr_00;
 __ptr_01 = (int *)malloc(0x18);
 if (__ptr_01 != (int *)0x0) {
 *(unsigned long long *)(__ptr_01 + 2) = 0;
 *(unsigned long long *)(__ptr_01 + 4) = 0;
 *__ptr_01 = 0x1e;
 }
 *(int **)(__ptr + 4) = __ptr_01;
 if ((__ptr_00 == (int *)0x0) || (__ptr_01 == (int *)0x0)) {
 if (__ptr_00 != (int *)0x0) {
 free(__ptr_00);
 }
 iVar1 = -2;
 if (__ptr_01 == (int *)0x0) goto LAB_0010124c;
 }
 else {
 iVar1 = *__ptr_00 + *__ptr + *__ptr_01;
 free(__ptr_00);
 __ptr_01 = *(int **)(__ptr + 4);
 }
 free(__ptr_01);
LAB_0010124c:
 free(__ptr);
 return iVar1;
}

// Function: memory_leak @ 0x101268
static unsigned int memory_leak(unsigned long param_1)
{
 unsigned int uVar1;
 void *pvVar2;
 unsigned long uVar3;
 int iVar4;
 param_1 = param_1 & 0xffffffff;
 pvVar2 = malloc(-(param_1 >> 0x1f) & 0xfffffffc00000000 | param_1 << 2);
 if (pvVar2 == (void *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 iVar4 = (int)param_1;
 if (0 < iVar4) {
 uVar3 = 0;
 do {
 *(int *)((long)pvVar2 + uVar3 * 4) = (int)uVar3;
 uVar3 = uVar3 + 1;
 } while (param_1 != uVar3);
 }
 if (iVar4 < 0) {
 iVar4 = iVar4 + 1;
 }
 uVar1 = *(unsigned int *)((long)pvVar2 + (long)(iVar4 >> 1) * 4);
 }
 return uVar1;
}

// Function: dangling_pointer @ 0x1012c8
static unsigned int dangling_pointer(void)
{
 unsigned int uVar1;
 unsigned int *__ptr;
 __ptr = (unsigned int *)malloc(4);
 if (__ptr == (unsigned int *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 *__ptr = 0x2a;
 printf("value before free: %d\n",0x2a);
 free(__ptr);
 uVar1 = *__ptr;
 }
 return uVar1;
}

// Function: double_free @ 0x10131c
static unsigned int double_free(unsigned int *param_1)
{
 if (param_1 != (unsigned int *)0x0) {
 return *param_1;
 }
 return 0xfffffffe;
}

// Function: heap_overflow @ 0x101330
static unsigned int heap_overflow(void)
{
 unsigned int *__ptr;
 long lVar1;
 int iVar2;
 unsigned int uVar3;
 __ptr = (unsigned int *)malloc(0x28);
 if (__ptr == (unsigned int *)0x0) {
 uVar3 = 0xffffffff;
 }
 else {
 lVar1 = 0;
 iVar2 = 0;
 do {
 *(int *)((long)__ptr + lVar1) = iVar2;
 iVar2 = iVar2 + 100;
 lVar1 = lVar1 + 4;
 } while (lVar1 != 0x2c);
 uVar3 = *__ptr;
 free(__ptr);
 }
 return uVar3;
}

// Function: test_heap_memory @ 0x101384
void test_heap_memory(void)
{
 int *piVar1;
 long lVar2;
 int iVar3;
 __pid_t __pid;
 unsigned int *puVar4;
 void *pvVar5;
 void *__ptr;
 unsigned int *puVar6;
 unsigned long uVar7;
 const char *__format;
 unsigned long long uVar8;
 int iVar9;
 long lVar10;
 uint uVar11;
 uint local_24;
 puts(DAT_00102243);
 puVar4 = (unsigned int *)malloc(0x28);
 if (puVar4 == (unsigned int *)0x0) {
 uVar11 = 0xffffffff;
 }
 else {
 lVar10 = 0;
 puVar6 = puVar4;
 do {
 *puVar6 = (int)lVar10;
 lVar10 = lVar10 + 2;
 puVar6 = puVar6 + 1;
 } while (lVar10 != 0x14);
 uVar11 = puVar4[5];
 free(puVar4);
 }
 printf("HEAP-L2-01 (heap_basic): %d\n",(unsigned long)uVar11);
 pvVar5 = calloc(5,4);
 if (pvVar5 == (void *)0x0) {
 uVar11 = 0xffffffff;
 }
 else {
 lVar10 = 0;
 uVar11 = 0;
 do {
 piVar1 = (int *)((long)pvVar5 + lVar10);
 lVar10 = lVar10 + 4;
 uVar11 = *piVar1 + uVar11;
 } while (lVar10 != 0x14);
 free(pvVar5);
 }
 printf("HEAP-L2-02 (heap_calloc): %d\n",(unsigned long)uVar11);
 pvVar5 = malloc(0x14);
 if (pvVar5 == (void *)0x0) {
 uVar11 = 0xffffffff;
 }
 else {
 lVar10 = 0;
 do {
 lVar2 = lVar10 + 1;
 *(int *)((long)pvVar5 + lVar10 * 4) = (int)lVar2;
 lVar10 = lVar2;
 } while (lVar2 != 5);
 iVar3 = *(int *)((long)pvVar5 + 8);
 __ptr = realloc(pvVar5,0x28);
 if (__ptr == (void *)0x0) {
 uVar11 = 0xfffffffe;
 __ptr = pvVar5;
 }
 else {
 iVar9 = 0x32;
 lVar10 = 0x14;
 do {
 *(int *)((long)__ptr + lVar10) = iVar9;
 lVar10 = lVar10 + 4;
 iVar9 = iVar9 + 10;
 } while (lVar10 != 0x28);
 if (*(int *)((long)__ptr + 8) == iVar3) {
 uVar11 = *(uint *)((long)__ptr + 0x14);
 }
 else {
 uVar11 = 0xfffffffd;
 }
 }
 free(__ptr);
 }
 printf("HEAP-L2-03 (heap_realloc): %d\n",(unsigned long)uVar11);
 puVar4 = (unsigned int *)malloc(0x28);
 if (puVar4 == (unsigned int *)0x0) {
 uVar11 = 0xffffffff;
 }
 else {
 lVar10 = 0;
 puVar6 = puVar4;
 do {
 *puVar6 = (int)lVar10;
 lVar10 = lVar10 + 3;
 puVar6 = puVar6 + 1;
 } while (lVar10 != 0x1e);
 uVar11 = puVar4[5];
 free(puVar4);
 }
 printf("HEAP-L2-04 (heap_array): %d\n",(unsigned long)uVar11);
 printf("HEAP-L2-05 (heap_struct): %d\n",0xf);
 puVar4 = (unsigned int *)malloc(0x10);
 if (puVar4 == (unsigned int *)0x0) {
 uVar8 = 0xffffffff;
 }
 else {
 *puVar4 = 10;
 puVar6 = (unsigned int *)malloc(0x10);
 *(unsigned int **)(puVar4 + 2) = puVar6;
 if (puVar6 == (unsigned int *)0x0) {
 free(puVar4);
 uVar8 = 0xfffffffe;
 }
 else {
 uVar8 = 0;
 *(unsigned long long *)(puVar6 + 2) = 0;
 *puVar6 = 0x14;
 }
 }
 printf("HEAP-L2-06 (heap_nested): %d\n",uVar8);
 if (puVar4 != (unsigned int *)0x0) {
 free(*(void **)(puVar4 + 2));
 free(puVar4);
 }
 uVar7 = linked_list_heap();
 iVar3 = printf("HEAP-L3-01 (linked_list_heap): %d\n",uVar7 & 0xffffffff);
 uVar7 = tree_heap_traversal();
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n",uVar7 & 0xffffffff);
 pvVar5 = malloc(0x14);
 if (pvVar5 == (void *)0x0) {
 uVar7 = 0xffffffff;
 }
 else {
 lVar10 = 0;
 do {
 *(int *)((long)pvVar5 + lVar10 * 4) = (int)lVar10;
 lVar10 = lVar10 + 1;
 } while (lVar10 != 5);
 uVar7 = (unsigned long)*(uint *)((long)pvVar5 + 8);
 }
 printf("HEAP-L3-03 (memory_leak): %d\n",uVar7);
 printf("HEAP-L3-04 (dangling_pointer): ");
 __pid = fork();
 if (__pid != 0) {
 if (__pid < 1) {
 perror(DAT_00101f47);
 }
 else {
 waitpid(__pid,(int *)&local_24,0);
 uVar11 = local_24 & 0x7f;
 if (uVar11 == 0) {
 uVar11 = local_24 >> 8 & 0xff;
 __format = DAT_00101ee1;
 }
 else {
 if ((int)(uVar11 * 0x1000000 + 0x1000000) < 0x2000000) {
 return;
 }
 __format = DAT_00101f06;
 }
 printf(__format,(unsigned long)uVar11);
 }
 return;
 }
 uVar7 = dangling_pointer();
 printf(DAT_00101ed1,uVar7 & 0xffffffff);
 exit(0);
}

// Function: global_var_access @ 0x10168c
static void global_var_access(void)
{
 global_counter = global_counter + 1;
 return;
}

// Function: global_var_read @ 0x1016a0
static int global_var_read(void)
{
 return global_counter << 1;
}

// Function: global_array_access @ 0x1016b0
static unsigned int global_array_access(uint param_1)
{
 if (9 < param_1) {
 return 0xffffffff;
 }
 return *(unsigned int *)(&global_array + (long)(int)param_1 * 4);
}

// Function: static_local @ 0x1016d0
static void static_local(int param_1)
{
 int iVar1;
 iVar1 = 0;
 if (param_1 == 0) {
 iVar1 = static_local_counter + 1;
 }
 static_local_counter = iVar1;
 return;
}

// Function: call_static_func @ 0x1016e8
static uint call_static_func(int param_1)
{
 return param_1 << 1 | 1;
}

// Function: access_extern_global @ 0x1016f8
static int access_extern_global(void)
{
 return extern_global_var + 100;
}

// Function: call_extern_func @ 0x10170c
static void call_extern_func(void)
{
 extern_function(5);
 return;
}

// Function: read_const_data @ 0x101724
static int read_const_data(void)
{
 return (byte)const_string[4] + 0x2a;
}

// Function: access_bss_var @ 0x101738
static unsigned long long access_bss_var(void)
{
 return 0;
}

// Function: access_bss_buffer @ 0x101740
static unsigned long long access_bss_buffer(void)
{
 return 0;
}

// Function: global_struct_access @ 0x101748
static unsigned long long global_struct_access(void)
{
 return 0x1e;
}

// Function: set_file_static @ 0x101750
static void set_file_static(unsigned int param_1)
{
 file_scope_static = param_1;
 return;
}

// Function: get_file_static @ 0x10175c
static unsigned int get_file_static(void)
{
 return file_scope_static;
}

// Function: set_global_callback @ 0x101768
static void set_global_callback(unsigned long long param_1)
{
 global_func_ptr = (void (*)(void))param_1;
 return;
}

// Function: call_global_callback @ 0x101774
static unsigned long long call_global_callback(void)
{
 unsigned long long uVar1;
 if (global_func_ptr != (void *)0x0) {
 (*global_func_ptr)();
 return 0;
 }
 return 0xffffffff;
}

// Function: global_heap_store @ 0x1017a0
static unsigned int global_heap_store(unsigned int *param_1)
{
 global_heap_ptr = param_1;
 if (param_1 != (unsigned int *)0x0) {
 return *param_1;
 }
 return 0xffffffff;
}

// Function: static_complex_init @ 0x1017bc
static unsigned long long static_complex_init(void)
{
 return 0xf;
}

// Function: tls_access @ 0x1017c4
static int tls_access(int param_1)
{
 return param_1 << 1;
}

// Function: init_order_test @ 0x1017cc
static unsigned long long init_order_test(void)
{
 return 0x14;
}

// Function: test_static_global @ 0x1017d4
int test_static_global(void)
{
 int iVar1;
 unsigned long uVar2;
 unsigned int local_24;
 puts(DAT_00102261);
 global_counter = global_counter + 1;
 printf("STM-L1-01 (global_var_access): %d\n");
 printf("STM-L1-01 (global_var_read): %d\n",(unsigned long)(uint)(global_counter << 1));
 printf("STM-L1-02 (global_array_access): %d\n",5);
 static_local_counter = 1;
 printf("STM-L1-03 (static_local): %d\n",1);
 static_local_counter = static_local_counter + 1;
 printf("STM-L1-03 (static_local): %d\n");
 printf("STM-L1-04 (call_static_func): %d\n",0xb);
 printf("STM-L2-01 (access_extern_global): %d\n",(unsigned long)(extern_global_var + 100));
 uVar2 = extern_function(5);
 printf("STM-L2-02 (call_extern_func): %d\n",uVar2 & 0xffffffff);
 printf("STM-L2-03 (read_const_data): %d\n",(unsigned long)((byte)const_string[4] + 0x2a));
 printf("STM-L2-04 (access_bss_var): %d\n",0);
 printf("STM-L2-04 (access_bss_buffer): %d\n",0);
 printf("STM-L2-05 (global_struct_access): %d\n",0x1e);
 file_scope_static = 0x32;
 printf("STM-L2-06 (file_static): %d\n",0x32);
 global_func_ptr = (void (*)(void))double_value;
 printf("STM-L2-07 (global_func_ptr): %d\n",10);
 global_heap_ptr = &local_24;
 local_24 = 100;
 printf("STM-L2-08 (global_heap_store): %d\n",100);
 printf("STM-L2-09 (static_complex_init): %d\n",0xf);
 printf("STM-L3-01 (tls_access): %d\n",0x14);
 iVar1 = printf("STM-L3-02 (init_order_test): %d\n",0x14);
 return iVar1;
}

// Function: double_value @ 0x101994
int double_value(int param_1)
{
 return param_1 << 1;
}

// Function: memop_memset @ 0x10199c
static unsigned long memop_memset(byte *param_1,size_t param_2,int param_3)
{
 unsigned long uVar1;
 uVar1 = 0xffffffff;
 if ((param_1 != (byte *)0x0) && (param_2 != 0)) {
 memset(param_1,param_3,param_2);
 uVar1 = (unsigned long)*param_1;
 }
 return uVar1;
}

// Function: memop_memcpy @ 0x1019dc
static unsigned int memop_memcpy(void *param_1,void *param_2,unsigned long param_3)
{
 unsigned int uVar1;
 uVar1 = 0xffffffff;
 if (((param_1 != (void *)0x0) && (param_2 != (void *)0x0)) && (param_3 != 0)) {
 memcpy(param_1,param_2,param_3);
 uVar1 = *(unsigned int *)((long)param_1 + ((param_3 & 0xfffffffffffffffc) - 4));
 }
 return uVar1;
}

// Function: memop_memmove @ 0x101a24
static unsigned long memop_memmove(void *param_1,unsigned long param_2)
{
 unsigned long uVar1;
 uVar1 = 0xffffffff;
 if ((param_1 != (void *)0x0) && (1 < param_2)) {
 memmove((void *)((long)param_1 + 1),param_1,param_2 - 1);
 uVar1 = (unsigned long)*(byte *)((long)param_1 + 1);
 }
 return uVar1;
}

// Function: memop_memcmp @ 0x101a64
static int memop_memcmp(void *param_1,void *param_2,size_t param_3)
{
 int iVar1;
 int iVar2;
 iVar2 = 0;
 if (((param_1 != (void *)0x0) && (param_2 != (void *)0x0)) && (param_3 != 0)) {
 iVar1 = memcmp(param_1,param_2,param_3);
 iVar2 = -(uint)(iVar1 != 0);
 if (0 < iVar1) {
 iVar2 = 1;
 }
 }
 return iVar2;
}

// Function: memop_bzero @ 0x101aa0
static unsigned long memop_bzero(byte *param_1,size_t param_2)
{
 if (param_1 != (byte *)0x0) {
 memset(param_1,0,param_2);
 return (unsigned long)*param_1;
 }
 return 0xffffffff;
}

// Function: memop_bcopy @ 0x101ad8
static unsigned long memop_bcopy(void *param_1,byte *param_2,size_t param_3)
{
 unsigned long uVar1;
 uVar1 = 0xffffffff;
 if (((param_1 != (void *)0x0) && (param_2 != (byte *)0x0)) && (param_3 != 0)) {
 memmove(param_2,param_1,param_3);
 uVar1 = (unsigned long)*param_2;
 }
 return uVar1;
}

// Function: memop_unaligned_access @ 0x101b14
static unsigned int memop_unaligned_access(long param_1)
{
 if (param_1 != 0) {
 return *(unsigned int *)(param_1 + 1);
 }
 return 0xffffffff;
}

// Function: memop_memory_barrier @ 0x101b28
static int memop_memory_barrier(int *param_1)
{
 if (param_1 != (int *)0x0) {
 __sync_synchronize();
 return *param_1 + *param_1;
 }
 return -1;
}

// Function: test_memory_op_functions @ 0x101b48
static int test_memory_op_functions(void)
{
 int iVar1;
 puts(DAT_00102285);
 printf("MEMOP-L2-01: %d\n",0x41);
 printf("MEMOP-L2-02: %d\n",0x32);
 printf("MEMOP-L2-03: %c\n",0x48);
 printf("MEMOP-L2-04: %d\n",0xffffffff);
 printf("MEMOP-L2-05: %d\n",0);
 printf("MEMOP-L2-06: %d\n",1);
 printf("MEMOP-L3-01: 0x%x\n",0x4030201);
 __sync_synchronize();
 iVar1 = printf("MEMOP-L3-02: %d\n",10);
 return iVar1;
}

// Function: main @ 0x101c28
int main(void)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}

// Function: extern_function @ 0x101c4c
int extern_function(int param_1)
{
 return param_1 * 3;
}

// Function: _fini @ 0x101c54
void _fini(void)
{
 return;
}

