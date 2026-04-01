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
typedef int __pid_t;
typedef unsigned int uint;
typedef unsigned char byte;
typedef int bool;
#define true 1
#define false 0

// External data symbols
char DAT_00012f62[] = "Stack Memory Tests";
char DAT_00012f80[] = "Heap Memory Tests";
char DAT_00012f9e[] = "Static/Global Tests";
char DAT_00012fc2[] = "Memory Op Tests";
char DAT_00013010[] = "test_string_1";
char DAT_0001301c[] = "test_string_2";
char DAT_00012c8f[] = "fork error";
char DAT_00012c29[] = "exit status: %d\n";
char DAT_00012c4e[] = "exit signal: %d\n";
char DAT_00012c19[] = "%d\n";

// Global variables
int completed_0 = 0;
int global_counter = 0;
int global_array[10] = {0};
int static_local_counter = 0;
int extern_global_var = 0;
char const_string[] = "test";
unsigned int file_scope_static = 0;
int (*global_func_ptr)(int) = 0;
unsigned int *global_heap_ptr = 0;
extern void *__dso_handle;

void *stack0x00000004 = 0;
void __cxa_finalize(void *param) { }
int printf(const char *, ...);
int puts(const char *);
void *malloc(unsigned long);
void free(void *);
void *calloc(unsigned long, unsigned long);
void *realloc(void *, unsigned long);
void *memset(void *, int, unsigned long);
void *memcpy(void *, const void *, unsigned long);
void *memmove(void *, const void *, unsigned long);
int memcmp(const void *, const void *, unsigned long);
__pid_t fork(void);
__pid_t waitpid(__pid_t, int *, int);
void perror(const char *);
void exit(int);
void __sync_synchronize(void);
int double_value(int);

// Decompiled by BinaryAI
// SHA256: 0d514f626956f97def630cb73c81270cbbda5022166ad5b6349ac7d2370983f4









































// Function: deregister_tm_clones @ 0x106bc
static void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x10700
static void register_tm_clones(void)
{
 return;
}



// Function: local_vars @ 0x107bc
int local_vars(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: local_array @ 0x107c8
unsigned int local_array(int param_1)
{
 int iVar1;
 int iVar2;
 int local_28 [10];
 iVar1 = 0;
 iVar2 = 0;
 do {
 local_28[-iVar2] = iVar1;
 iVar1 = iVar1 + param_1;
 iVar2 = iVar2 + -1;
 } while (iVar2 != -10);
 return local_28[5];
}

// Function: local_struct @ 0x107f8
int local_struct(int param_1)
{
 return param_1 * 3;
}

// Function: address_of_local @ 0x10800
unsigned int address_of_local(unsigned int *param_1)
{
 *param_1 = 0x2a;
 return 0x2a;
}

// Function: address_of_array @ 0x10810
int address_of_array(int *param_1)
{
 return *param_1 << 1;
}

// Function: large_stack_frame @ 0x1081c
char large_stack_frame(void)
{
 int iVar1;
 char local_808 [2048];
 iVar1 = 0;
 do {
 local_808[iVar1] = (char)iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x800);
 return local_808[1024];
}

// Function: vla_stack @ 0x1084c
unsigned int vla_stack(int param_1)
{
 int iVar1;
 unsigned int uVar2;
 int iVar3;
 int iVar4;
 int iStack_10;
 uVar2 = 0xffffffff;
 if (0xfffffc17 < param_1 - 0x3e9U) {
 iVar1 = -0x10 - (param_1 * 4 + 7U & 0xfffffff8);
 if (0 < param_1) {
 iVar4 = 0;
 iVar3 = param_1;
 do {
 *(int *)((int)&iStack_10 + iVar4 * 2 + iVar1 + 0x10) = iVar4;
 iVar4 = iVar4 + 2;
 iVar3 = iVar3 + -1;
 } while (iVar3 != 0);
 }
 uVar2 = *(unsigned int *)
 ((int)&iStack_10 + ((param_1 - (param_1 >> 0x1f)) * 2 & 0xfffffffdU) + iVar1 + 0x10);
 }
 return uVar2;
}

// Function: alloca_usage @ 0x108c8
unsigned int alloca_usage(int param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int iStack_10;
 if (0 < param_1) {
 iVar1 = -0x10 - (param_1 * 4 + 7U & 0xfffffff8);
 iVar2 = 0;
 iVar3 = 0;
 do {
 *(int *)((int)&iStack_10 + iVar3 * 4 + iVar1 + 0x10) = iVar2;
 iVar2 = iVar2 + 3;
 iVar3 = iVar3 + 1;
 } while (param_1 != iVar3);
 return *(unsigned int *)
 ((int)&iStack_10 + ((param_1 - (param_1 >> 0x1f)) * 2 & 0xfffffffdU) + iVar1 + 0x10);
 }
 return 0xffffffff;
}

// Function: stack_alias @ 0x1092c
unsigned int stack_alias(void)
{
 return 0x14;
}

// Function: test_stack_memory @ 0x10934
void test_stack_memory(void)
{
 int iVar1;
 int *piVar2;
 int local_810 [256];
 byte local_410;
 puts(&DAT_00012f62);
 printf("MEM-L1-01 (local_vars): %d\n",0x14);
 iVar1 = 0;
 do {
 *(int *)((int)local_810 + iVar1 * 2) = iVar1;
 iVar1 = iVar1 + 2;
 } while (iVar1 != 0x14);
 printf("MEM-L1-02 (local_array): %d\n",local_810[5]);
 printf("MEM-L1-03 (local_struct): %d\n",0xf);
 printf("MEM-L1-04 (address_of_local): %d\n",0x2a);
 printf("MEM-L1-05 (address_of_array): %d\n",2);
 iVar1 = 0;
 do {
 *(char *)((int)local_810 + iVar1) = (char)iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x800);
 printf("MEM-L2-01 (large_stack_frame): %d\n",(uint)local_410);
 iVar1 = 0;
 do {
 *(int *)((int)local_810 + iVar1 * 2) = iVar1;
 iVar1 = iVar1 + 2;
 } while (iVar1 != 0x14);
 printf("MEM-L2-02 (vla_stack): %d\n",local_810[5]);
 iVar1 = 0;
 piVar2 = local_810;
 do {
 *piVar2 = iVar1;
 iVar1 = iVar1 + 3;
 piVar2 = piVar2 + 1;
 } while (iVar1 != 0x1e);
 printf("MEM-L2-03 (alloca_usage): %d\n",local_810[5]);
 printf("MEM-L2-04 (stack_alias): %d\n",0x14);
 return;
}

// Function: heap_basic @ 0x10a68
unsigned int heap_basic(int param_1)
{
 void *__ptr;
 int iVar1;
 int iVar2;
 unsigned int uVar3;
 __ptr = malloc(param_1 << 2);
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
 uVar3 = *(unsigned int *)((int)__ptr + ((param_1 - (param_1 >> 0x1f)) * 2 & 0xfffffffdU));
 free(__ptr);
 }
 return uVar3;
}

// Function: heap_calloc @ 0x10ac8
int heap_calloc(size_t param_1)
{
 int *__ptr;
 int *piVar1;
 int iVar2;
 __ptr = (int *)calloc(param_1,4);
 if (__ptr == (int *)0x0) {
 iVar2 = -1;
 }
 else {
 iVar2 = 0;
 piVar1 = __ptr;
 if (0 < (int)param_1) {
 do {
 iVar2 = *piVar1 + iVar2;
 param_1 = param_1 - 1;
 piVar1 = piVar1 + 1;
 } while (param_1 != 0);
 }
 free(__ptr);
 }
 return iVar2;
}

// Function: heap_realloc @ 0x10b18
unsigned int heap_realloc(void)
{
 void *__ptr;
 void *__ptr_00;
 int iVar1;
 int iVar2;
 unsigned int uVar3;
 int iVar4;
 __ptr = malloc(0x14);
 if (__ptr == (void *)0x0) {
 uVar3 = 0xffffffff;
 }
 else {
 iVar4 = 0;
 do {
 iVar1 = iVar4 + 1;
 *(int *)((int)__ptr + iVar4 * 4) = iVar1;
 iVar4 = iVar1;
 } while (iVar1 != 5);
 iVar4 = *(int *)((int)__ptr + 8);
 __ptr_00 = realloc(__ptr,0x28);
 if (__ptr_00 == (void *)0x0) {
 uVar3 = 0xfffffffe;
 __ptr_00 = __ptr;
 }
 else {
 iVar1 = 5;
 iVar2 = 0x32;
 do {
 *(int *)((int)__ptr_00 + iVar1 * 4) = iVar2;
 iVar2 = iVar2 + 10;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 10);
 uVar3 = 0xfffffffd;
 if (*(int *)((int)__ptr_00 + 8) == iVar4) {
 uVar3 = *(unsigned int *)((int)__ptr_00 + 0x14);
 }
 }
 free(__ptr_00);
 }
 return uVar3;
}

// Function: heap_array @ 0x10bb4
unsigned int heap_array(int param_1)
{
 int *__ptr;
 int iVar1;
 int *piVar2;
 int iVar3;
 unsigned int uVar4;
 __ptr = (int *)malloc(param_1 << 2);
 if (__ptr == (int *)0x0) {
 uVar4 = 0xffffffff;
 }
 else {
 if (0 < param_1) {
 iVar1 = 0;
 piVar2 = __ptr;
 iVar3 = param_1;
 do {
 *piVar2 = iVar1;
 iVar1 = iVar1 + 3;
 iVar3 = iVar3 + -1;
 piVar2 = piVar2 + 1;
 } while (iVar3 != 0);
 }
 uVar4 = *(unsigned int *)((int)__ptr + ((param_1 - (param_1 >> 0x1f)) * 2 & 0xfffffffdU));
 free(__ptr);
 }
 return uVar4;
}

// Function: heap_struct @ 0x10c18
int heap_struct(int param_1)
{
 return param_1 * 3;
}

// Function: heap_nested @ 0x10c20
unsigned int heap_nested(void **param_1)
{
 unsigned int *puVar1;
 void *pvVar2;
 puVar1 = (unsigned int *)malloc(8);
 *param_1 = puVar1;
 if (puVar1 == (unsigned int *)0x0) {
 return 0xffffffff;
 }
 *puVar1 = 10;
 pvVar2 = malloc(8);
 *(void **)((int)*param_1 + 4) = pvVar2;
 puVar1 = *(unsigned int **)((int)*param_1 + 4);
 if (puVar1 == (unsigned int *)0x0) {
 free(*param_1);
 return 0xfffffffe;
 }
 *puVar1 = 0x14;
 puVar1[1] = 0;
 return 0;
}

// Function: linked_list_heap @ 0x10c94
int linked_list_heap(void)
{
 int *piVar1;
 int *piVar2;
 int *piVar3;
 int iVar4;
 int *__ptr;
 uint uVar5;
 bool bVar6;
 bVar6 = true;
 __ptr = (int *)0x0;
 uVar5 = 0;
 piVar3 = (int *)0x0;
 do {
 piVar2 = (int *)malloc(8);
 if (piVar2 == (int *)0x0) goto joined_r0x00010d18;
 *piVar2 = uVar5 * 10;
 piVar2[1] = 0;
 piVar1 = piVar2;
 if (__ptr != (int *)0x0) {
 piVar3[1] = (int)piVar2;
 piVar1 = __ptr;
 }
 __ptr = piVar1;
 if (piVar2 == (int *)0x0) break;
 bVar6 = uVar5 < 4;
 uVar5 = uVar5 + 1;
 piVar3 = piVar2;
 } while (uVar5 != 5);
LAB_00010d40:
 iVar4 = -1;
 if (!bVar6) {
 iVar4 = 0;
 for (piVar3 = __ptr; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
 iVar4 = *piVar3 + iVar4;
 }
 while (__ptr != (int *)0x0) {
 piVar3 = (int *)__ptr[1];
 free(__ptr);
 __ptr = piVar3;
 }
 }
 return iVar4;
joined_r0x00010d18:
 while (__ptr != (int *)0x0) {
 piVar3 = (int *)__ptr[1];
 free(__ptr);
 __ptr = piVar3;
 }
 __ptr = (int *)0x0;
 goto LAB_00010d40;
}

// Function: create_tree_node @ 0x10d9c
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

// Function: tree_heap_traversal @ 0x10dc8
int tree_heap_traversal(void)
{
 int *__ptr;
 int *__ptr_00;
 int *__ptr_01;
 int iVar1;
 int iVar2;
 int iVar3;
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
 if (__ptr_00 == (int *)0x0 || __ptr_01 == (int *)0x0) {
 if (__ptr_00 != (int *)0x0) {
 free(__ptr_00);
 }
 iVar1 = -2;
 if (__ptr_01 == (int *)0x0) goto LAB_00010e94;
 }
 else {
 iVar1 = *__ptr_01;
 iVar3 = *__ptr_00;
 iVar2 = *__ptr;
 free(__ptr_00);
 iVar1 = iVar3 + iVar2 + iVar1;
 __ptr_01 = (int *)__ptr[2];
 }
 free(__ptr_01);
LAB_00010e94:
 free(__ptr);
 return iVar1;
}

// Function: memory_leak @ 0x10ea8
unsigned int memory_leak(int param_1)
{
 void *pvVar1;
 int iVar2;
 pvVar1 = malloc(param_1 << 2);
 if (pvVar1 != (void *)0x0) {
 if (0 < param_1) {
 iVar2 = 0;
 do {
 *(int *)((int)pvVar1 + iVar2 * 4) = iVar2;
 iVar2 = iVar2 + 1;
 } while (param_1 != iVar2);
 }
 return *(unsigned int *)((int)pvVar1 + ((param_1 - (param_1 >> 0x1f)) * 2 & 0xfffffffdU));
 }
 return 0xffffffff;
}

// Function: dangling_pointer @ 0x10efc
unsigned int dangling_pointer(void)
{
 unsigned int *__ptr;
 __ptr = (unsigned int *)malloc(4);
 if (__ptr != (unsigned int *)0x0) {
 *__ptr = 0x2a;
 printf("value before free: %d\n",0x2a);
 free(__ptr);
 return *__ptr;
 }
 return 0xffffffff;
}

// Function: double_free @ 0x10f4c
unsigned int double_free(unsigned int *param_1)
{
 unsigned int uVar1;
 if (param_1 == (unsigned int *)0x0) {
 uVar1 = 0xfffffffe;
 }
 else {
 uVar1 = *param_1;
 }
 return uVar1;
}

// Function: heap_overflow @ 0x10f5c
unsigned int heap_overflow(void)
{
 unsigned int *__ptr;
 int iVar1;
 int iVar2;
 unsigned int uVar3;
 __ptr = (unsigned int *)malloc(0x28);
 if (__ptr == (unsigned int *)0x0) {
 uVar3 = 0xffffffff;
 }
 else {
 iVar1 = 0;
 iVar2 = 0;
 do {
 __ptr[-iVar2] = iVar1;
 iVar1 = iVar1 + 100;
 iVar2 = iVar2 + -1;
 } while (iVar2 != -0xb);
 uVar3 = *__ptr;
 free(__ptr);
 }
 return uVar3;
}

// Function: test_heap_memory @ 0x10fa8
void test_heap_memory(void)
{
 void *pvVar1;
 void *__ptr;
 unsigned int *__ptr_00;
 unsigned int *puVar2;
 __pid_t __pid;
 char *__format;
 int iVar3;
 uint uVar4;
 int iVar5;
 int iVar6;
 unsigned int uVar7;
 unsigned int uVar8;
 uint local_1c;
 puts(&DAT_00012f80);
 pvVar1 = malloc(0x28);
 iVar6 = -1;
 uVar7 = 0xffffffff;
 if (pvVar1 != (void *)0x0) {
 iVar3 = 0;
 do {
 *(int *)((int)pvVar1 + iVar3 * 2) = iVar3;
 iVar3 = iVar3 + 2;
 } while (iVar3 != 0x14);
 uVar7 = *(unsigned int *)((int)pvVar1 + 0x14);
 free(pvVar1);
 }
 printf("HEAP-L2-01 (heap_basic): %d\n",uVar7);
 pvVar1 = calloc(5,4);
 if (pvVar1 != (void *)0x0) {
 iVar3 = 0;
 iVar6 = 0;
 do {
 iVar6 = *(int *)((int)pvVar1 + iVar3 * -4) + iVar6;
 iVar3 = iVar3 + -1;
 } while (iVar3 != -5);
 free(pvVar1);
 }
 printf("HEAP-L2-02 (heap_calloc): %d\n",iVar6);
 pvVar1 = malloc(0x14);
 uVar7 = 0xffffffff;
 uVar8 = 0xffffffff;
 if (pvVar1 != (void *)0x0) {
 iVar6 = 0;
 do {
 iVar3 = iVar6 + 1;
 *(int *)((int)pvVar1 + iVar6 * 4) = iVar3;
 iVar6 = iVar3;
 } while (iVar3 != 5);
 iVar6 = *(int *)((int)pvVar1 + 8);
 __ptr = realloc(pvVar1,0x28);
 if (__ptr == (void *)0x0) {
 uVar8 = 0xfffffffe;
 __ptr = pvVar1;
 }
 else {
 iVar3 = 5;
 iVar5 = 0x32;
 do {
 *(int *)((int)__ptr + iVar3 * 4) = iVar5;
 iVar5 = iVar5 + 10;
 iVar3 = iVar3 + 1;
 } while (iVar3 != 10);
 uVar8 = 0xfffffffd;
 if (*(int *)((int)__ptr + 8) == iVar6) {
 uVar8 = *(unsigned int *)((int)__ptr + 0x14);
 }
 }
 free(__ptr);
 }
 printf("HEAP-L2-03 (heap_realloc): %d\n",uVar8);
 pvVar1 = malloc(0x28);
 if (pvVar1 != (void *)0x0) {
 iVar6 = 0;
 iVar3 = 0;
 do {
 *(int *)((int)pvVar1 + iVar3 * -4) = iVar6;
 iVar6 = iVar6 + 3;
 iVar3 = iVar3 + -1;
 } while (iVar3 != -10);
 uVar7 = *(unsigned int *)((int)pvVar1 + 0x14);
 free(pvVar1);
 }
 printf("HEAP-L2-04 (heap_array): %d\n",uVar7);
 printf("HEAP-L2-05 (heap_struct): %d\n",0xf);
 __ptr_00 = (unsigned int *)malloc(8);
 if (__ptr_00 == (unsigned int *)0x0) {
 uVar7 = 0xffffffff;
 }
 else {
 *__ptr_00 = 10;
 puVar2 = (unsigned int *)malloc(8);
 __ptr_00[1] = puVar2;
 if (puVar2 == (unsigned int *)0x0) {
 free(__ptr_00);
 uVar7 = 0xfffffffe;
 }
 else {
 uVar7 = 0;
 *puVar2 = 0x14;
 puVar2[1] = 0;
 }
 }
 printf("HEAP-L2-06 (heap_nested): %d\n",uVar7);
 if (__ptr_00 != (unsigned int *)0x0) {
 free((void *)__ptr_00[1]);
 free(__ptr_00);
 }
 uVar7 = linked_list_heap();
 printf("HEAP-L3-01 (linked_list_heap): %d\n",uVar7);
 uVar7 = tree_heap_traversal();
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n",uVar7);
 pvVar1 = malloc(0x14);
 if (pvVar1 == (void *)0x0) {
 uVar7 = 0xffffffff;
 }
 else {
 iVar6 = 0;
 do {
 *(int *)((int)pvVar1 + iVar6 * 4) = iVar6;
 iVar6 = iVar6 + 1;
 } while (iVar6 != 5);
 uVar7 = *(unsigned int *)((int)pvVar1 + 8);
 }
 printf("HEAP-L3-03 (memory_leak): %d\n",uVar7);
 printf("HEAP-L3-04 (dangling_pointer): ");
 __pid = fork();
 if (__pid != 0) {
 if (__pid < 1) {
 perror(&DAT_00012c8f);
 }
 else {
 waitpid(__pid,(int *)&local_1c,0);
 uVar4 = local_1c & 0x7f;
 if (uVar4 == 0) {
 uVar4 = local_1c >> 8 & 0xff;
 __format = &DAT_00012c29;
 }
 else {
 if ((int)(uVar4 * 0x1000000 + 0x1000000) < 0x2000000) {
 return;
 }
 __format = &DAT_00012c4e;
 }
 printf(__format,uVar4);
 }
 return;
 }
 uVar7 = dangling_pointer();
 printf(&DAT_00012c19,uVar7);
 exit(0);
}

// Function: global_var_access @ 0x112f0
void global_var_access(void)
{
 global_counter = global_counter + 1;
 return;
}

// Function: global_var_read @ 0x11314
int global_var_read(void)
{
 return global_counter << 1;
}

// Function: global_array_access @ 0x11328
unsigned int global_array_access(uint param_1)
{
 unsigned int uVar1;
 uVar1 = 0xffffffff;
 if (param_1 < 10) {
 uVar1 = *(unsigned int *)(&global_array + param_1 * 4);
 }
 return uVar1;
}

// Function: static_local @ 0x11348
int static_local(int param_1)
{
 int iVar1;
 iVar1 = 0;
 if (param_1 == 0) {
 iVar1 = static_local_counter + 1;
 }
 static_local_counter = iVar1;
 return iVar1;
}

// Function: call_static_func @ 0x11378
uint call_static_func(int param_1)
{
 return param_1 << 1 | 1;
}

// Function: access_extern_global @ 0x11384
int access_extern_global(void)
{
 return extern_global_var + 100;
}

// Function: call_extern_func @ 0x1139c
int extern_function(int x)
{
 return x * 2;
}

void call_extern_func(void)
{
 extern_function(5);
 return;
}

// Function: read_const_data @ 0x113b0
int read_const_data(void)
{
 return *(byte *)(const_string + 4) + 0x2a;
}

// Function: access_bss_var @ 0x113c8
unsigned int access_bss_var(void)
{
 return 0;
}

// Function: access_bss_buffer @ 0x113d0
unsigned int access_bss_buffer(void)
{
 return 0;
}

// Function: global_struct_access @ 0x113d8
unsigned int global_struct_access(void)
{
 return 0x1e;
}

// Function: set_file_static @ 0x113e0
void set_file_static(unsigned int param_1)
{
 file_scope_static = param_1;
 return;
}

// Function: get_file_static @ 0x113f4
unsigned int get_file_static(void)
{
 return file_scope_static;
}

// Function: set_global_callback @ 0x11404
void set_global_callback(int (*param_1)(int))
{
 global_func_ptr = param_1;
 return;
}

// Function: call_global_callback @ 0x11418
void call_global_callback(int param_1)
{
 if (global_func_ptr != 0) {
 global_func_ptr(param_1);
 return;
 }
 return;
}

// Function: global_heap_store @ 0x11448
unsigned int global_heap_store(unsigned int *param_1)
{
 unsigned int uVar1;
 global_heap_ptr = param_1;
 if (param_1 == (unsigned int *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 uVar1 = *param_1;
 }
 return uVar1;
}

// Function: static_complex_init @ 0x11468
unsigned int static_complex_init(void)
{
 return 0xf;
}

// Function: tls_access @ 0x11470
int tls_access(int param_1)
{
 return param_1 << 1;
}

// Function: init_order_test @ 0x11478
unsigned int init_order_test(void)
{
 return 0x14;
}

// Function: test_static_global @ 0x11480
void test_static_global(void)
{
 unsigned int uVar1;
 unsigned int local_14;
 puts(&DAT_00012f9e);
 global_counter = global_counter + 1;
 printf("STM-L1-01 (global_var_access): %d\n");
 printf("STM-L1-01 (global_var_read): %d\n",global_counter << 1);
 printf("STM-L1-02 (global_array_access): %d\n",5);
 static_local_counter = 1;
 printf("STM-L1-03 (static_local): %d\n",1);
 static_local_counter = static_local_counter + 1;
 printf("STM-L1-03 (static_local): %d\n");
 printf("STM-L1-04 (call_static_func): %d\n",0xb);
 printf("STM-L2-01 (access_extern_global): %d\n",extern_global_var + 100);
 uVar1 = extern_function(5);
 printf("STM-L2-02 (call_extern_func): %d\n",uVar1);
 printf("STM-L2-03 (read_const_data): %d\n",*(byte *)(const_string + 4) + 0x2a);
 printf("STM-L2-04 (access_bss_var): %d\n",0);
 printf("STM-L2-04 (access_bss_buffer): %d\n",0);
 printf("STM-L2-05 (global_struct_access): %d\n",0x1e);
 file_scope_static = 0x32;
 printf("STM-L2-06 (file_static): %d\n",0x32);
 global_func_ptr = double_value;
 printf("STM-L2-07 (global_func_ptr): %d\n",10);
 global_heap_ptr = &local_14;
 local_14 = 100;
 printf("STM-L2-08 (global_heap_store): %d\n",100);
 printf("STM-L2-09 (static_complex_init): %d\n",0xf);
 printf("STM-L3-01 (tls_access): %d\n",0x14);
 printf("STM-L3-02 (init_order_test): %d\n",0x14);
 return;
}

// Function: double_value @ 0x116c8
int double_value(int param_1)
{
 return param_1 << 1;
}

// Function: memop_memset @ 0x116d0
static uint memop_memset(byte *param_1,size_t param_2,int param_3,size_t param_4)
{
 if (param_1 != (byte *)0x0) {
 param_4 = param_2;
 }
 if (param_1 != (byte *)0x0 && param_2 != 0) {
 memset(param_1,param_3,param_4);
 return (uint)*param_1;
 }
 return 0xffffffff;
}

// Function: memop_memcpy @ 0x11710
static unsigned int memop_memcpy(void *param_1,void *param_2,uint param_3)
{
 uint unaff_r4;
 if (param_1 != (void *)0x0) {
 if (param_2 != (void *)0x0) {
 unaff_r4 = param_3;
 }
 if (param_2 != (void *)0x0 && param_3 != 0) {
 memcpy(param_1,param_2,unaff_r4);
 return *(unsigned int *)((int)param_1 + ((unaff_r4 & 0xfffffffc) - 4));
 }
 }
 return 0xffffffff;
}

// Function: memop_memmove @ 0x1175c
static uint memop_memmove(void *param_1,uint param_2)
{
 uint uVar1;
 uVar1 = 0xffffffff;
 if ((param_1 != (void *)0x0) && (1 < param_2)) {
 memmove((void *)((int)param_1 + 1),param_1,param_2 - 1);
 uVar1 = (uint)*(byte *)((int)param_1 + 1);
 }
 return uVar1;
}

// Function: memop_memcmp @ 0x11794
static int memop_memcmp(void *param_1,void *param_2,size_t param_3)
{
 int iVar1;
 int iVar2;
 if (param_1 == (void *)0x0) {
 return 0;
 }
 if (param_2 == (void *)0x0 || param_3 == 0) {
 return 0;
 }
 iVar1 = memcmp(param_1,param_2,param_3);
 iVar2 = iVar1;
 if (iVar1 != 0) {
 iVar2 = -1;
 }
 if (0 < iVar1) {
 iVar2 = 1;
 }
 return iVar2;
}

// Function: memop_bzero @ 0x117dc
static uint memop_bzero(byte *param_1,size_t param_2)
{
 if (param_1 != (byte *)0x0) {
 memset(param_1,0,param_2);
 return (uint)*param_1;
 }
 return 0xffffffff;
}

// Function: memop_bcopy @ 0x11808
static uint memop_bcopy(void *param_1,byte *param_2,size_t param_3)
{
 if ((param_1 != (void *)0x0) && (param_2 != (byte *)0x0 && param_3 != 0)) {
 memmove(param_2,param_1,param_3);
 return (uint)*param_2;
 }
 return 0xffffffff;
}

// Function: memop_unaligned_access @ 0x11848
static unsigned int memop_unaligned_access(int param_1)
{
 if (param_1 != 0) {
 return *(unsigned int *)(param_1 + 1);
 }
 return 0xffffffff;
}

// Function: memop_memory_barrier @ 0x11874
static int memop_memory_barrier(int *param_1)
{
 int iVar1;
 if (param_1 != (int *)0x0) {
 iVar1 = *param_1;
 __sync_synchronize();
 return *param_1 + iVar1;
 }
 return -1;
}

// Function: test_memory_op_functions @ 0x118a0
void test_memory_op_functions(void)
{
 int iVar1;
 int iVar2;
 uint local_14;
 unsigned int local_10;
 unsigned short local_c;
 puts(&DAT_00012fc2);
 printf("MEMOP-L2-01: %d\n",0x41);
 printf("MEMOP-L2-02: %d\n",0x32);
 local_c = 0x646c;
 local_10 = 0x726f576f;
 local_14 = 0x6c6c6548;
 memmove((void *)((uint)&local_14 | 1),&local_14,9);
 printf("MEMOP-L2-03: %c\n",local_14 >> 8 & 0xff);
 iVar1 = memcmp(&DAT_00013010,&DAT_0001301c,0xc);
 iVar2 = iVar1;
 if (iVar1 != 0) {
 iVar2 = -1;
 }
 if (0 < iVar1) {
 iVar2 = 1;
 }
 printf("MEMOP-L2-04: %d\n",iVar2);
 printf("MEMOP-L2-05: %d\n",0);
 printf("MEMOP-L2-06: %d\n",1);
 printf("MEMOP-L3-01: 0x%x\n",0x4030201);
 __sync_synchronize();
 printf("MEMOP-L3-02: %d\n",10);
 return;
}

// Function: main @ 0x119e4
unsigned int main(void)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}







































































































