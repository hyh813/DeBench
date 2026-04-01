/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

typedef unsigned char uint8_t;
typedef unsigned char byte;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long uintptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef int __pid_t;
typedef unsigned int uint;

// Forward declarations for external/internal functions
unsigned int main(void);
void __gmon_start__(void);
void frame_dummy(void);
void __x86_get_pc_thunk_di(void);
void LOCK(void);
void UNLOCK(void);
void LOCK(void) { return; }
void UNLOCK(void) { return; }
void __do_global_ctors_aux(void);

// Data declarations
char DAT_000135c1[] = "Stack Memory Tests";
char DAT_000135df[] = "Heap Memory Tests";
char DAT_000135fd[] = "Static/Global Tests";
char DAT_00013621[] = "Memory Operation Tests";
char DAT_00013670[] = "Hello World";
char DAT_0001367c[] = "Hello World";
char DAT_000132e3[] = "fork failed";
char DAT_0001327d[] = "Child exited with status %d\n";
char DAT_000132a2[] = "Child terminated by signal %d\n";
char DAT_0001326d[] = "value after free: %d\n";
int double_value(int);

// Global variables
int global_counter;
int static_local_counter;
int file_scope_static;
unsigned int (*global_func_ptr)(unsigned int);
void *global_heap_ptr;
int extern_global_var;
char const_string[];

// Decompiled by BinaryAI
// SHA256: e4f36453ec1838fb8cb8107b9314360e8dc0f4b8ac027a05e1feeca0f168d8c5



// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x11040
void __libc_start_main(int (*main)(void), int argc, void *argv, void (*init)(void), void (*fini)(void), void *rtld_fini, void *stack_end)
{
 return;
}

// Function: <EXTERNAL>::printf @ 0x11050
// Stub - actual printf from stdio.h

// Function: <EXTERNAL>::memmove @ 0x11060
// Stub - actual memmove from string.h

// Function: <EXTERNAL>::free @ 0x11070
// Stub - actual free from stdlib.h

// Function: <EXTERNAL>::memcpy @ 0x11080
// Stub - actual memcpy from string.h

// Function: <EXTERNAL>::memcmp @ 0x11090
// Stub - actual memcmp from string.h

// Function: <EXTERNAL>::perror @ 0x110a0
// Stub - actual perror from stdio.h

// Function: <EXTERNAL>::waitpid @ 0x110b0
// Stub - actual waitpid from sys/wait.h

// Function: <EXTERNAL>::realloc @ 0x110c0
// Stub - actual realloc from stdlib.h

// Function: <EXTERNAL>::malloc @ 0x110d0
// Stub - actual malloc from stdlib.h

// Function: <EXTERNAL>::puts @ 0x110e0
// Stub - actual puts from stdio.h

// Function: <EXTERNAL>::exit @ 0x110f0
void exit(int __status)
{
 return;
}

// Function: <EXTERNAL>::memset @ 0x11100
// Stub - actual memset from string.h

// Function: <EXTERNAL>::fork @ 0x11110
// Stub - actual fork from unistd.h

// Function: <EXTERNAL>::calloc @ 0x11120
// Stub - actual calloc from stdlib.h

// Function: FUN_00011130 @ 0x11130
void FUN_00011130(unsigned int param_1)
{
 return;
}













// Function: local_vars @ 0x112c0
int local_vars(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: local_array @ 0x112d0
unsigned int local_array(int param_1)
{
 int iVar1;
 int iVar2;
 int local_28 [10];
 iVar1 = 0;
 iVar2 = 0;
 do {
 local_28[iVar2] = iVar1;
 iVar2 = iVar2 + 1;
 iVar1 = iVar1 + param_1;
 } while (iVar2 != 10);
 return local_28[5];
}

// Function: local_struct @ 0x11300
int local_struct(int param_1)
{
 return param_1 * 3;
}

// Function: address_of_local @ 0x11310
unsigned int address_of_local(unsigned int *param_1)
{
 *param_1 = 0x2a;
 return 0x2a;
}

// Function: address_of_array @ 0x11320
int address_of_array(int *param_1)
{
 return *param_1 * 2;
}

// Function: large_stack_frame @ 0x11330
int large_stack_frame(void)
{
 int iVar1;
 char local_800 [2048];
 iVar1 = 0;
 do {
 local_800[iVar1] = (char)iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x800);
 return (int)local_800[1024];
}

// Function: vla_stack @ 0x11360
unsigned long long vla_stack(int param_1)
{
 int iVar1;
 unsigned int uVar2;
 char *puVar3;
 int iVar4;
 int iVar5;
 uVar2 = 0xffffffff;
 puVar3 = (char *)(param_1 - 0x3e9U);
 if ((char *)0xfffffc17 < (char *)(param_1 - 0x3e9U)) {
 iVar1 = -0xc - (param_1 * 4 + 0xfU & 0xfffffff0);
 if (0 < param_1) {
 iVar4 = 0;
 iVar5 = param_1;
 do {
 iVar4 = iVar4 + 2;
 iVar5 = iVar5 + -1;
 } while (iVar5 != 0);
 }
 uVar2 = 0;
 puVar3 = (char *)0;
 }
 return (unsigned long long)uVar2;
}

// Function: alloca_usage @ 0x113d0
unsigned int alloca_usage(int param_1_00,int param_1)
{
 int iVar1;
 unsigned int uVar2;
 int iVar3;
 int iVar4;
 int iStack_c;
 iStack_c = param_1_00;
 if (param_1 < 1) {
 uVar2 = 0xffffffff;
 }
 else {
 iVar1 = -0xc - (param_1 * 4 + 0xfU & 0xfffffff0);
 iVar3 = 0;
 iVar4 = 0;
 do {
 *(int *)((int)&iStack_c + iVar4 * 4 + iVar1 + 0xc) = iVar3;
 iVar4 = iVar4 + 1;
 iVar3 = iVar3 + 3;
 } while (param_1 != iVar4);
 uVar2 = *(unsigned int *)
 ((int)&iStack_c + (param_1 - (param_1 >> 0x1f) & 0xfffffffeU) * 2 + iVar1 + 0xc);
 }
 return uVar2;
}

// Function: stack_alias @ 0x11420
unsigned int stack_alias(void)
{
 return 0x14;
}

// Function: test_stack_memory @ 0x11430
void test_stack_memory(void)
{
 int iVar1;
 int *piVar2;
 int local_80c [256];
 char local_40c;
 puts(&DAT_000135c1);
 printf("MEM-L1-01 (local_vars): %d\n",0x14);
 iVar1 = 0;
 do {
 *(int *)((int)local_80c + iVar1 * 2) = iVar1;
 iVar1 = iVar1 + 2;
 } while (iVar1 != 0x14);
 printf("MEM-L1-02 (local_array): %d\n",local_80c[5]);
 printf("MEM-L1-03 (local_struct): %d\n",0xf);
 printf("MEM-L1-04 (address_of_local): %d\n",0x2a);
 printf("MEM-L1-05 (address_of_array): %d\n",2);
 iVar1 = 0;
 do {
 *(char *)((int)local_80c + iVar1) = (char)iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x800);
 printf("MEM-L2-01 (large_stack_frame): %d\n",(int)local_40c);
 iVar1 = 0;
 do {
 *(int *)((int)local_80c + iVar1 * 2) = iVar1;
 iVar1 = iVar1 + 2;
 } while (iVar1 != 0x14);
 printf("MEM-L2-02 (vla_stack): %d\n",local_80c[5]);
 iVar1 = 0;
 piVar2 = local_80c;
 do {
 *piVar2 = iVar1;
 iVar1 = iVar1 + 3;
 piVar2 = piVar2 + 1;
 } while (iVar1 != 0x1e);
 printf("MEM-L2-03 (alloca_usage): %d\n",local_80c[5]);
 printf("MEM-L2-04 (stack_alias): %d\n",0x14);
 return;
}

// Function: heap_basic @ 0x11590
unsigned int heap_basic(int param_1)
{
 void *__ptr;
 int iVar1;
 int iVar2;
 unsigned int uVar3;
 __ptr = malloc(param_1 * 4);
 if (__ptr == (void *)0x0) {
 uVar3 = 0xffffffff;
 }
 else {
 if (0 < param_1) {
 iVar1 = 0;
 iVar2 = param_1;
 do {
 *(int *)((int)__ptr + iVar1 * 2) = iVar1;
 iVar1 = iVar1 + 2;
 iVar2 = iVar2 + -1;
 } while (iVar2 != 0);
 }
 uVar3 = *(unsigned int *)((int)__ptr + (param_1 - (param_1 >> 0x1f) & 0xfffffffeU) * 2);
 free(__ptr);
 }
 return uVar3;
}

// Function: heap_calloc @ 0x115f0
int heap_calloc(size_t param_1)
{
 void *__ptr;
 size_t sVar1;
 int iVar2;
 __ptr = calloc(param_1,4);
 if (__ptr == (void *)0x0) {
 iVar2 = -1;
 }
 else {
 if ((int)param_1 < 1) {
 iVar2 = 0;
 }
 else {
 sVar1 = 0;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *(int *)((int)__ptr + sVar1 * 4);
 sVar1 = sVar1 + 1;
 } while (param_1 != sVar1);
 }
 free(__ptr);
 }
 return iVar2;
}

// Function: heap_realloc @ 0x11660
unsigned int heap_realloc(void)
{
 void *__ptr;
 int iVar1;
 void *__ptr_00;
 int *piVar2;
 int iVar3;
 unsigned int uVar4;
 __ptr = malloc(0x14);
 if (__ptr == (void *)0x0) {
 uVar4 = 0xffffffff;
 }
 else {
 iVar1 = 1;
 do {
 *(int *)((int)__ptr + iVar1 * 4 + -4) = iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 6);
 iVar1 = *(int *)((int)__ptr + 8);
 __ptr_00 = realloc(__ptr,0x28);
 if (__ptr_00 == (void *)0x0) {
 uVar4 = 0xfffffffe;
 __ptr_00 = __ptr;
 }
 else {
 piVar2 = (int *)((int)__ptr_00 + 0x14);
 iVar3 = 0x32;
 do {
 *piVar2 = iVar3;
 iVar3 = iVar3 + 10;
 piVar2 = piVar2 + 1;
 } while (iVar3 != 100);
 uVar4 = 0xfffffffd;
 if (*(int *)((int)__ptr_00 + 8) == iVar1) {
 uVar4 = *(unsigned int *)((int)__ptr_00 + 0x14);
 }
 }
 free(__ptr_00);
 }
 return uVar4;
}

// Function: heap_array @ 0x11700
unsigned int heap_array(int param_1)
{
 void *__ptr;
 int iVar1;
 int iVar2;
 unsigned int uVar3;
 __ptr = malloc(param_1 * 4);
 if (__ptr == (void *)0x0) {
 uVar3 = 0xffffffff;
 }
 else {
 if (0 < param_1) {
 iVar1 = 0;
 iVar2 = 0;
 do {
 *(int *)((int)__ptr + iVar2 * 4) = iVar1;
 iVar2 = iVar2 + 1;
 iVar1 = iVar1 + 3;
 } while (param_1 != iVar2);
 }
 uVar3 = *(unsigned int *)((int)__ptr + (param_1 - (param_1 >> 0x1f) & 0xfffffffeU) * 2);
 free(__ptr);
 }
 return uVar3;
}

// Function: heap_struct @ 0x11770
int heap_struct(int param_1)
{
 return param_1 * 3;
}

// Function: heap_nested @ 0x11780
unsigned int heap_nested(void **param_1)
{
 unsigned int *puVar1;
 void *pvVar2;
 unsigned int uVar3;
 puVar1 = (unsigned int *)malloc(8);
 *param_1 = puVar1;
 if (puVar1 == (unsigned int *)0x0) {
 uVar3 = 0xffffffff;
 }
 else {
 *puVar1 = 10;
 pvVar2 = malloc(8);
 *(void **)((int)*param_1 + 4) = pvVar2;
 puVar1 = *(unsigned int **)((int)*param_1 + 4);
 if (puVar1 == (unsigned int *)0x0) {
 free(*param_1);
 uVar3 = 0xfffffffe;
 }
 else {
 *puVar1 = 0x14;
 puVar1[1] = 0;
 uVar3 = 0;
 }
 }
 return uVar3;
}

// Function: linked_list_heap @ 0x117f0
int linked_list_heap(void)
{
 int *piVar1;
 int *piVar2;
 uint uVar3;
 int *__ptr;
 int *piVar4;
 int iVar5;
 int bVar6;
 __ptr = (int *)0x0;
 bVar6 = 1;
 uVar3 = 0;
 piVar4 = (int *)0x0;
 do {
 piVar2 = (int *)malloc(8);
 if (piVar2 == (int *)0x0) goto joined_r0x00011872;
 *piVar2 = uVar3 * 10;
 piVar2[1] = 0;
 piVar1 = piVar2;
 if (__ptr != (int *)0x0) {
 piVar4[1] = (int)piVar2;
 piVar1 = __ptr;
 }
 __ptr = piVar1;
 if (piVar2 == (int *)0x0) break;
 bVar6 = uVar3 < 4;
 uVar3 = uVar3 + 1;
 piVar4 = piVar2;
 } while (uVar3 != 5);
LAB_000118a7:
 iVar5 = -1;
 if (!bVar6) {
 iVar5 = 0;
 for (piVar4 = __ptr; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
 iVar5 = iVar5 + *piVar4;
 }
 while (__ptr != (int *)0x0) {
 piVar4 = (int *)__ptr[1];
 free(__ptr);
 __ptr = piVar4;
 }
 }
 return iVar5;
joined_r0x00011872:
 while (__ptr != (int *)0x0) {
 piVar4 = (int *)__ptr[1];
 free(__ptr);
 __ptr = piVar4;
 }
 __ptr = (int *)0x0;
 goto LAB_000118a7;
}

// Function: create_tree_node @ 0x118f0
void create_tree_node(unsigned int param_1)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)malloc(0xc);
 if (puVar1 != (unsigned int *)0x0) {
 *puVar1 = param_1;
 puVar1[1] = 0;
 puVar1[2] = 0;
 }
 return;
}

// Function: tree_heap_traversal @ 0x11930
int tree_heap_traversal(void)
{
 int *__ptr;
 int *__ptr_00;
 int *__ptr_01;
 int iVar1;
 __ptr = (int *)malloc(0xc);
 if (__ptr == (int *)0x0) {
 return -1;
 }
 *__ptr = 10;
 __ptr[1] = 0;
 __ptr[2] = 0;
 __ptr_00 = (int *)malloc(0xc);
 if (__ptr_00 != (int *)0x0) {
 *__ptr_00 = 0x14;
 __ptr_00[1] = 0;
 __ptr_00[2] = 0;
 }
 __ptr[1] = (int)__ptr_00;
 __ptr_01 = (int *)malloc(0xc);
 if (__ptr_01 != (int *)0x0) {
 *__ptr_01 = 0x1e;
 __ptr_01[1] = 0;
 __ptr_01[2] = 0;
 }
 __ptr[2] = (int)__ptr_01;
 if ((__ptr_00 == (int *)0x0) || (__ptr_01 == (int *)0x0)) {
 if (__ptr_00 != (int *)0x0) {
 free(__ptr_00);
 }
 iVar1 = -2;
 if (__ptr_01 == (int *)0x0) goto LAB_00011a02;
 }
 else {
 iVar1 = *__ptr_00 + *__ptr + *__ptr_01;
 free(__ptr_00);
 __ptr_01 = (int *)__ptr[2];
 }
 free(__ptr_01);
LAB_00011a02:
 free(__ptr);
 return iVar1;
}

// Function: memory_leak @ 0x11a20
unsigned int memory_leak(int param_1)
{
 void *pvVar1;
 unsigned int uVar2;
 int iVar3;
 pvVar1 = malloc(param_1 * 4);
 if (pvVar1 == (void *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 if (0 < param_1) {
 iVar3 = 0;
 do {
 *(int *)((int)pvVar1 + iVar3 * 4) = iVar3;
 iVar3 = iVar3 + 1;
 } while (param_1 != iVar3);
 }
 uVar2 = *(unsigned int *)((int)pvVar1 + (param_1 - (param_1 >> 0x1f) & 0xfffffffeU) * 2);
 }
 return uVar2;
}

// Function: dangling_pointer @ 0x11a80
unsigned int dangling_pointer(void)
{
 unsigned int *__ptr;
 unsigned int uVar1;
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

// Function: double_free @ 0x11ae0
unsigned int double_free(unsigned int *param_1)
{
 if (param_1 != (unsigned int *)0x0) {
 return *param_1;
 }
 return 0xfffffffe;
}

// Function: heap_overflow @ 0x11b00
int heap_overflow(void)
{
 int *__ptr;
 int iVar1;
 int *piVar2;
 __ptr = (int *)malloc(0x28);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = 0;
 piVar2 = __ptr;
 do {
 *piVar2 = iVar1;
 iVar1 = iVar1 + 100;
 piVar2 = piVar2 + 1;
 } while (iVar1 != 0x44c);
 iVar1 = *__ptr;
 free(__ptr);
 }
 return iVar1;
}

// Function: test_heap_memory @ 0x11b60
void test_heap_memory(void)
{
 void *pvVar1;
 void *__ptr;
 unsigned int *__ptr_00;
 unsigned int *puVar2;
 __pid_t __pid;
 uint uVar3;
 int iVar4;
 int *piVar5;
 int iVar6;
 int *piVar7;
 int iVar8;
 unsigned int uVar9;
 char *__format;
 uint local_14;
 puts(&DAT_000135df);
 pvVar1 = malloc(0x28);
 iVar8 = -1;
 uVar9 = 0xffffffff;
 if (pvVar1 != (void *)0x0) {
 iVar4 = 0;
 do {
 *(int *)((int)pvVar1 + iVar4 * 2) = iVar4;
 iVar4 = iVar4 + 2;
 } while (iVar4 != 0x14);
 uVar9 = *(unsigned int *)((int)pvVar1 + 0x14);
 free(pvVar1);
 }
 printf("HEAP-L2-01 (heap_basic): %d\n",uVar9);
 pvVar1 = calloc(5,4);
 if (pvVar1 != (void *)0x0) {
 iVar4 = 0;
 iVar8 = 0;
 do {
 iVar8 = iVar8 + *(int *)((int)pvVar1 + iVar4 * 4);
 iVar4 = iVar4 + 1;
 } while (iVar4 != 5);
 free(pvVar1);
 }
 printf("HEAP-L2-02 (heap_calloc): %d\n",iVar8);
 pvVar1 = malloc(0x14);
 iVar8 = -1;
 uVar9 = 0xffffffff;
 if (pvVar1 != (void *)0x0) {
 iVar4 = 1;
 do {
 *(int *)((int)pvVar1 + iVar4 * 4 + -4) = iVar4;
 iVar4 = iVar4 + 1;
 } while (iVar4 != 6);
 iVar4 = *(int *)((int)pvVar1 + 8);
 __ptr = realloc(pvVar1,0x28);
 if (__ptr == (void *)0x0) {
 uVar9 = 0xfffffffe;
 __ptr = pvVar1;
 }
 else {
 piVar5 = (int *)((int)__ptr + 0x14);
 iVar6 = 0x32;
 do {
 *piVar5 = iVar6;
 iVar6 = iVar6 + 10;
 piVar5 = piVar5 + 1;
 } while (iVar6 != 100);
 uVar9 = 0xfffffffd;
 if (*(int *)((int)__ptr + 8) == iVar4) {
 uVar9 = *(unsigned int *)((int)__ptr + 0x14);
 }
 }
 free(__ptr);
 }
 printf("HEAP-L2-03 (heap_realloc): %d\n",uVar9);
 piVar5 = (int *)malloc(0x28);
 if (piVar5 != (int *)0x0) {
 iVar8 = 0;
 piVar7 = piVar5;
 do {
 *piVar7 = iVar8;
 iVar8 = iVar8 + 3;
 piVar7 = piVar7 + 1;
 } while (iVar8 != 0x1e);
 iVar8 = piVar5[5];
 free(piVar5);
 }
 printf("HEAP-L2-04 (heap_array): %d\n",iVar8);
 printf("HEAP-L2-05 (heap_struct): %d\n",0xf);
 __ptr_00 = (unsigned int *)malloc(8);
 if (__ptr_00 == (unsigned int *)0x0) {
 uVar9 = 0xffffffff;
 }
 else {
 *__ptr_00 = 10;
 puVar2 = (unsigned int *)malloc(8);
 __ptr_00[1] = puVar2;
 if (puVar2 == (unsigned int *)0x0) {
 free(__ptr_00);
 uVar9 = 0xfffffffe;
 }
 else {
 *puVar2 = 0x14;
 puVar2[1] = 0;
 uVar9 = 0;
 }
 }
 printf("HEAP-L2-06 (heap_nested): %d\n",uVar9);
 if (__ptr_00 != (unsigned int *)0x0) {
 free((void *)__ptr_00[1]);
 free(__ptr_00);
 }
 uVar9 = linked_list_heap();
 printf("HEAP-L3-01 (linked_list_heap): %d\n",uVar9);
 uVar9 = tree_heap_traversal();
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n",uVar9);
 pvVar1 = malloc(0x14);
 if (pvVar1 == (void *)0x0) {
 uVar9 = 0xffffffff;
 }
 else {
 iVar8 = 0;
 do {
 *(int *)((int)pvVar1 + iVar8 * 4) = iVar8;
 iVar8 = iVar8 + 1;
 } while (iVar8 != 5);
 uVar9 = *(unsigned int *)((int)pvVar1 + 8);
 }
 printf("HEAP-L3-03 (memory_leak): %d\n",uVar9);
 printf("HEAP-L3-04 (dangling_pointer): ");
 __pid = fork();
 if (__pid != 0) {
 if (__pid < 1) {
 perror(&DAT_000132e3);
 }
 else {
 waitpid(__pid,(int *)&local_14,0);
 uVar3 = local_14 & 0x7f;
 if (uVar3 == 0) {
 uVar3 = local_14 >> 8 & 0xff;
 __format = &DAT_0001327d;
 }
 else {
 if ((int)(uVar3 * 0x1000000 + 0x1000000) < 0x2000000) {
 return;
 }
 __format = &DAT_000132a2;
 }
 printf(__format,uVar3);
 }
 return;
 }
 uVar9 = dangling_pointer();
 printf(&DAT_0001326d,uVar9);
 exit(0);
}

// Function: FUN_00011eb5 @ 0x11eb5
void FUN_00011eb5(void)
{
 int unaff_retaddr;
 *(int *)(unaff_retaddr + 0x41af) = *(int *)(unaff_retaddr + 0x41af) + 1;
 return;
}

// Function: FUN_00011ed5 @ 0x11ed5
int FUN_00011ed5(void)
{
 int unaff_retaddr;
 return *(int *)(unaff_retaddr + 0x418f) * 2;
}

// Function: FUN_00011ef5 @ 0x11ef5
unsigned int FUN_00011ef5(unsigned int param_1,uint param_2)
{
 unsigned int uVar1;
 int unaff_retaddr;
 uVar1 = 0xffffffff;
 if (param_2 < 10) {
 uVar1 = *(unsigned int *)(unaff_retaddr + 0x174f + param_2 * 4);
 }
 return uVar1;
}

// Function: FUN_00011f25 @ 0x11f25
void FUN_00011f25(unsigned int param_1,int param_2)
{
 int iVar1;
 int unaff_retaddr;
 iVar1 = 0;
 if (param_2 == 0) {
 iVar1 = *(int *)(unaff_retaddr + 0x4143) + 1;
 }
 *(int *)(unaff_retaddr + 0x4143) = iVar1;
 return;
}

// Function: call_static_func @ 0x11f50
int call_static_func(int param_1)
{
 return param_1 * 2 + 1;
}

// Function: FUN_00011f65 @ 0x11f65
int FUN_00011f65(void)
{
 int unaff_retaddr;
 return *(int *)(unaff_retaddr + 0x40f3) + 100;
}

// Function: call_extern_func @ 0x11f80
void call_extern_func(void)
{
 double_value(5);
 return;
}

// Function: FUN_00011fb5 @ 0x11fb5
int FUN_00011fb5(void)
{
 int unaff_retaddr;
 return *(char *)(*(int *)(unaff_retaddr + 0x409b) + 4) + 0x2a;
}

// Function: access_bss_var @ 0x11fd0
unsigned int access_bss_var(void)
{
 return 0;
}

// Function: access_bss_buffer @ 0x11fe0
unsigned int access_bss_buffer(void)
{
 return 0;
}

// Function: global_struct_access @ 0x11ff0
unsigned int global_struct_access(void)
{
 return 0x1e;
}

// Function: FUN_00012005 @ 0x12005
void FUN_00012005(unsigned int param_1,unsigned int param_2)
{
 int unaff_retaddr;
 *(unsigned int *)(unaff_retaddr + 0x404f) = param_2;
 return;
}

// Function: FUN_00012025 @ 0x12025
unsigned int FUN_00012025(void)
{
 int unaff_retaddr;
 return *(unsigned int *)(unaff_retaddr + 0x402f);
}

// Function: FUN_00012045 @ 0x12045
void FUN_00012045(unsigned int param_1,unsigned int param_2)
{
 int unaff_retaddr;
 *(unsigned int *)(unaff_retaddr + 0x4027) = param_2;
 return;
}

// Function: call_global_callback @ 0x12060
unsigned int call_global_callback(unsigned int param_1)
{
 unsigned int uVar1;
 if (global_func_ptr == (void *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 uVar1 = (*global_func_ptr)(param_1);
 }
 return uVar1;
}

// Function: FUN_00012095 @ 0x12095
unsigned int FUN_00012095(unsigned int param_1,unsigned int *param_2)
{
 int unaff_retaddr;
 *(unsigned int **)(unaff_retaddr + 0x3fdb) = param_2;
 if (param_2 != (unsigned int *)0x0) {
 return *param_2;
 }
 return 0xffffffff;
}

// Function: static_complex_init @ 0x120c0
unsigned int static_complex_init(void)
{
 return 0xf;
}

// Function: tls_access @ 0x120d0
int tls_access(int param_1)
{
 return param_1 * 2;
}

// Function: init_order_test @ 0x120e0
unsigned int init_order_test(void)
{
 return 0x14;
}

// Function: test_static_global @ 0x120f0
void test_static_global(void)
{
 unsigned int uVar1;
 unsigned int local_c;
 puts(&DAT_000135fd);
 global_counter = global_counter + 1;
 printf("STM-L1-01 (global_var_access): %d\n",global_counter);
 printf("STM-L1-01 (global_var_read): %d\n",global_counter * 2);
 printf("STM-L1-02 (global_array_access): %d\n",5);
 static_local_counter = 1;
 printf("STM-L1-03 (static_local): %d\n",1);
 static_local_counter = static_local_counter + 1;
 printf("STM-L1-03 (static_local): %d\n",static_local_counter);
 printf("STM-L1-04 (call_static_func): %d\n",0xb);
 printf("STM-L2-01 (access_extern_global): %d\n",extern_global_var + 100);
 uVar1 = double_value(5);
 printf("STM-L2-02 (call_extern_func): %d\n",uVar1);
 printf("STM-L2-03 (read_const_data): %d\n",(char)const_string[4] + 0x2a);
 printf("STM-L2-04 (access_bss_var): %d\n",0);
 printf("STM-L2-04 (access_bss_buffer): %d\n",0);
 printf("STM-L2-05 (global_struct_access): %d\n",0x1e);
 file_scope_static = 0x32;
 printf("STM-L2-06 (file_static): %d\n",0x32);
 global_func_ptr = double_value;
 printf("STM-L2-07 (global_func_ptr): %d\n",10);
 local_c = 100;
 global_heap_ptr = &local_c;
 printf("STM-L2-08 (global_heap_store): %d\n",100);
 printf("STM-L2-09 (static_complex_init): %d\n",0xf);
 printf("STM-L3-01 (tls_access): %d\n",0x14);
 printf("STM-L3-02 (init_order_test): %d\n",0x14);
 return;
}

// Function: double_value @ 0x12300
int double_value(int param_1)
{
 return param_1 * 2;
}

// Function: memop_memset @ 0x12310
uint memop_memset(byte *param_1,size_t param_2,int param_3)
{
 uint uVar1;
 uVar1 = 0xffffffff;
 if ((param_1 != (byte *)0x0) && (param_2 != 0)) {
 memset(param_1,param_3,param_2);
 uVar1 = (uint)*param_1;
 }
 return uVar1;
}

// Function: memop_memcpy @ 0x12350
unsigned int memop_memcpy(void *param_1,void *param_2,uint param_3)
{
 unsigned int uVar1;
 uVar1 = 0xffffffff;
 if (((param_1 != (void *)0x0) && (param_2 != (void *)0x0)) && (param_3 != 0)) {
 memcpy(param_1,param_2,param_3);
 uVar1 = *(unsigned int *)(((param_3 & 0xfffffffc) - 4) + (int)param_1);
 }
 return uVar1;
}

// Function: memop_memmove @ 0x123a0
int memop_memmove(void *param_1,uint param_2)
{
 int iVar1;
 iVar1 = -1;
 if ((param_1 != (void *)0x0) && (1 < param_2)) {
 memmove((void *)((int)param_1 + 1),param_1,param_2 - 1);
 iVar1 = (int)*(char *)((int)param_1 + 1);
 }
 return iVar1;
}

// Function: memop_memcmp @ 0x123f0
int memop_memcmp(void *param_1,void *param_2,size_t param_3)
{
 int iVar1;
 int iVar2;
 iVar1 = 0;
 if (((param_1 != (void *)0x0) && (param_2 != (void *)0x0)) && (param_3 != 0)) {
 iVar2 = memcmp(param_1,param_2,param_3);
 iVar1 = 1;
 if (iVar2 < 1) {
 iVar1 = -(uint)(iVar2 != 0);
 }
 }
 return iVar1;
}

// Function: memop_bzero @ 0x12440
uint memop_bzero(byte *param_1,size_t param_2)
{
 uint uVar1;
 if (param_1 == (byte *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 memset(param_1,0,param_2);
 uVar1 = (uint)*param_1;
 }
 return uVar1;
}

// Function: memop_bcopy @ 0x12480
uint memop_bcopy(void *param_1,byte *param_2,size_t param_3)
{
 uint uVar1;
 uVar1 = 0xffffffff;
 if (((param_1 != (void *)0x0) && (param_2 != (byte *)0x0)) && (param_3 != 0)) {
 memmove(param_2,param_1,param_3);
 uVar1 = (uint)*param_2;
 }
 return uVar1;
}

// Function: memop_unaligned_access @ 0x124d0
unsigned int memop_unaligned_access(int param_1)
{
 if (param_1 != 0) {
 return *(unsigned int *)(param_1 + 1);
 }
 return 0xffffffff;
}

// Function: memop_memory_barrier @ 0x124f0
int memop_memory_barrier(int *param_1)
{
 if (param_1 != (int *)0x0) {
 LOCK();
 UNLOCK();
 return *param_1 + *param_1;
 }
 return -1;
}

// Function: test_memory_op_functions @ 0x12510
void test_memory_op_functions(void)
{
 int iVar1;
 int iVar2;
 unsigned int uVar3;
 unsigned int uVar4;
 unsigned int in_stack_ffffffe4;
 uVar4 = 0x12519;
 puts(&DAT_00013621);
 printf("MEMOP-L2-01: %d\n",0x41);
 printf("MEMOP-L2-02: %d\n",0x32);
 printf("MEMOP-L2-03: %c\n",0x48);
 uVar3 = 0xc;
 iVar1 = memcmp(&DAT_00013670,&DAT_0001367c,0xc);
 iVar2 = 1;
 if (iVar1 < 1) {
 iVar2 = -(uint)(iVar1 != 0);
 }
 printf("MEMOP-L2-04: %d\n",iVar2);
 printf("MEMOP-L2-05: %d\n",0);
 printf("MEMOP-L2-06: %d\n",1);
 printf("MEMOP-L3-01: 0x%x\n",0x4030201);
 LOCK();
 UNLOCK();
 printf("MEMOP-L3-02: %d\n",10,uVar3,uVar4,in_stack_ffffffe4);
 return;
}

// Function: main @ 0x12640
unsigned int main(void)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}

// Function: __do_global_ctors_aux @ 0x12680
void __do_global_ctors_aux(void)
{
 return;
}



