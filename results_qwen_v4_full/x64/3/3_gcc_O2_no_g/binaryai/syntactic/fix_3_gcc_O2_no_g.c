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

// Memory barrier macros
#define LOCK()
#define UNLOCK()

// Global variable declarations
static int global_counter;
static int counter_1;
static int extern_global_var;
static unsigned int file_scope_static;
static unsigned long long (*global_func_ptr)(void);
static unsigned int global_array[10];
static char const_string[256];
static int completed_0;
extern void *__dso_handle;
static char DAT_00103004[256];
static char DAT_001030e6[256];
static char DAT_001031a8[256];
static char DAT_00103198[256];
static char DAT_001033c8[256];
static char DAT_001033f0[256];
static char DAT_00103438[256];
static char DAT_00103688[256];
static char UNK_00101504[256];
static char UNK_001015d4[256];

// External function declarations
extern void __cxa_finalize(void *);
extern int __printf_chk(int, const char *, ...);
extern int puts(const char *);
extern void *malloc(unsigned long);
extern void free(void *);
extern void *calloc(unsigned long, unsigned long);
extern void *realloc(void *, unsigned long);
extern int memcmp(const void *, const void *, unsigned long);
extern void *memset(void *, int, unsigned long);
extern void *memcpy(void *, const void *, unsigned long);
extern void *memmove(void *, const void *, unsigned long);
extern int fork(void);
extern int waitpid(int, int *, int);
extern void perror(const char *);
extern void __stack_chk_fail(void);
extern void exit(int);

// Forward declaration for extern_function
static int extern_function(int param_1);

// Decompiled by BinaryAI
// SHA256: cfc473a616d66402a586612cfe34d9d94e4f2c4c4e31922f84a47a40523461e9

// Function: _init @ 0x101000 (removed - provided by C runtime)
// _init is provided by the C runtime

// Function: FUN_00101020 @ 0x101020 (removed - null function pointer call)
// FUN_00101020 removed to avoid linker issues



// Forward declarations for test functions
static void test_stack_memory(void);
static void test_heap_memory(void);
static void test_static_global(void);
static void test_memory_op_functions(void);

// Function: main @ 0x101220
int main(void)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}

// Function: _start @ 0x101250 (removed - provided by C runtime)
// _start is provided by crt1.o when linking with gcc

// Function: deregister_tm_clones @ 0x101280
static void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1012b0
static void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x1012f0
static void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: double_value @ 0x101340
static int double_value(int param_1)
{
 return param_1 * 2;
}

// Function: local_vars @ 0x101350
static int local_vars(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: local_array @ 0x101360
static unsigned int local_array(int param_1)
{
 long *plVar1;
 int iVar2;
 long in_FS_OFFSET;
 long local_38 [2];
 unsigned int local_24;
 long local_10 [2];
 plVar1 = local_38;
 iVar2 = 0;
 local_10[0] = *(long *)(in_FS_OFFSET + 0x28);
 do {
 *(int *)plVar1 = iVar2;
 plVar1 = (long *)((long)plVar1 + 4);
 iVar2 = iVar2 + param_1;
 } while (plVar1 != local_10);
 if (local_10[0] == *(long *)(in_FS_OFFSET + 0x28)) {
 return local_24;
 }
 __stack_chk_fail();
}

// Function: local_struct @ 0x1013b0
static int local_struct(int param_1)
{
 return param_1 * 3;
}

// Function: address_of_local @ 0x1013c0
static unsigned long long address_of_local(unsigned int *param_1)
{
 *param_1 = 0x2a;
 return 0x2a;
}

// Function: address_of_array @ 0x1013d0
static int address_of_array(int *param_1)
{
 return *param_1 * 2;
}

// Function: large_stack_frame @ 0x1013e0
static int large_stack_frame(void)
{
 long lVar1;
 long in_FS_OFFSET;
 char local_818 [2056];
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 lVar1 = 0;
 do {
 local_818[lVar1] = (char)lVar1;
 lVar1 = lVar1 + 1;
 } while (lVar1 != 0x800);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return (int)local_818[1024];
 }
 __stack_chk_fail();
}

// Function: vla_stack @ 0x101440
static unsigned int vla_stack(uint param_1)
{
 long lVar1;
 char *puVar2;
 unsigned int uVar3;
 unsigned long uVar4;
 char *puVar5;
 char *puVar7;
 long in_FS_OFFSET;
 char auStack_18 [8];
 long local_10;
 char *puVar6;
 puVar7 = auStack_18;
 puVar5 = auStack_18;
 puVar6 = auStack_18;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 if (param_1 - 1 < 1000) {
 uVar4 = (long)(int)param_1 * 4 + 0xf;
 puVar2 = auStack_18;
 while (puVar6 != auStack_18 + -(uVar4 & 0xfffffffffffff000)) {
 puVar5 = puVar2 + -0x1000;
 *(unsigned long long *)(puVar2 + -8) = *(unsigned long long *)(puVar2 + -8);
 puVar6 = puVar2 + -0x1000;
 puVar2 = puVar2 + -0x1000;
 }
 uVar4 = (unsigned long)((uint)uVar4 & 0xff0);
 lVar1 = -uVar4;
 puVar7 = puVar5 + lVar1;
 if (uVar4 != 0) {
 *(unsigned long long *)(puVar5 + -8) = *(unsigned long long *)(puVar5 + -8);
 }
 uVar4 = 0;
 do {
 *(int *)(puVar5 + uVar4 * 4 + lVar1) = (int)uVar4 * 2;
 uVar4 = uVar4 + 1;
 } while (uVar4 != param_1);
 uVar3 = *(unsigned int *)(puVar5 + (long)((int)param_1 >> 1) * 4 + lVar1);
 }
 else {
 uVar3 = 0xffffffff;
 }
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 *(char **)(puVar7 + -8) = &UNK_00101504;
 __stack_chk_fail();
 }
 return uVar3;
}

// Function: alloca_usage @ 0x101510
static int alloca_usage(int param_1)
{
 long lVar1;
 char *puVar2;
 int iVar3;
 unsigned long uVar4;
 int *piVar5;
 char *puVar6;
 char *puVar8;
 long in_FS_OFFSET;
 char auStack_18 [8];
 long local_10;
 char *puVar7;
 puVar8 = auStack_18;
 puVar6 = auStack_18;
 puVar7 = auStack_18;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 if (param_1 < 1) {
 iVar3 = -1;
 }
 else {
 uVar4 = (long)param_1 * 4 + 0x17;
 puVar2 = auStack_18;
 while (puVar7 != auStack_18 + -(uVar4 & 0xfffffffffffff000)) {
 puVar6 = puVar2 + -0x1000;
 *(unsigned long long *)(puVar2 + -8) = *(unsigned long long *)(puVar2 + -8);
 puVar7 = puVar2 + -0x1000;
 puVar2 = puVar2 + -0x1000;
 }
 uVar4 = (unsigned long)((uint)uVar4 & 0xff0);
 lVar1 = -uVar4;
 puVar8 = puVar6 + lVar1;
 if (uVar4 != 0) {
 *(unsigned long long *)(puVar6 + -8) = *(unsigned long long *)(puVar6 + -8);
 }
 iVar3 = 0;
 piVar5 = (int *)((unsigned long)(puVar6 + lVar1 + 0xf) & 0xfffffffffffffff0);
 do {
 *piVar5 = iVar3;
 iVar3 = iVar3 + 3;
 piVar5 = piVar5 + 1;
 } while (iVar3 != param_1 * 3);
 iVar3 = ((int *)((unsigned long)(puVar6 + lVar1 + 0xf) & 0xfffffffffffffff0))[param_1 >> 1];
 }
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 *(char **)(puVar8 + -8) = &UNK_001015d4;
 __stack_chk_fail();
 }
 return iVar3;
}

// Function: stack_alias @ 0x1015e0
static unsigned long long stack_alias(void)
{
 return 0x14;
}

// Function: test_stack_memory @ 0x1015f0
static void test_stack_memory(void)
{
 unsigned int uVar1;
 puts(&DAT_00103004);
 __printf_chk(1,"MEM-L1-01 (local_vars): %d\n",0x14);
 __printf_chk(1,"MEM-L1-02 (local_array): %d\n",10);
 __printf_chk(1,"MEM-L1-03 (local_struct): %d\n",0xf);
 __printf_chk(1,"MEM-L1-04 (address_of_local): %d\n",0x2a);
 __printf_chk(1,"MEM-L1-05 (address_of_array): %d\n",2);
 uVar1 = large_stack_frame();
 __printf_chk(1,"MEM-L2-01 (large_stack_frame): %d\n",uVar1);
 __printf_chk(1,"MEM-L2-02 (vla_stack): %d\n",10);
 uVar1 = alloca_usage(10);
 __printf_chk(1,"MEM-L2-03 (alloca_usage): %d\n",uVar1);
 __printf_chk(1,"MEM-L2-04 (stack_alias): %d\n",0x14);
 return;
}

// Function: heap_basic @ 0x1016f0
static unsigned int heap_basic(int param_1)
{
 void *__ptr;
 long lVar1;
 unsigned int uVar2;
 __ptr = malloc((long)param_1 * 4);
 if (__ptr == (void *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 if (0 < param_1) {
 lVar1 = 0;
 do {
 *(int *)((long)__ptr + lVar1 * 4) = (int)lVar1 * 2;
 lVar1 = lVar1 + 1;
 } while (lVar1 != param_1);
 }
 uVar2 = *(unsigned int *)((long)__ptr + (long)(param_1 / 2) * 4);
 free(__ptr);
 }
 return uVar2;
}

// Function: heap_calloc @ 0x101760
static int heap_calloc(uint param_1)
{
 int *__ptr;
 int *piVar1;
 int iVar2;
 __ptr = (int *)calloc((long)(int)param_1,4);
 if (__ptr == (int *)0x0) {
 iVar2 = -1;
 }
 else {
 if ((int)param_1 < 1) {
 iVar2 = 0;
 }
 else {
 iVar2 = 0;
 piVar1 = __ptr;
 do {
 iVar2 = iVar2 + *piVar1;
 piVar1 = piVar1 + 1;
 } while (piVar1 != __ptr + param_1);
 }
 free(__ptr);
 }
 return iVar2;
}

// Function: heap_realloc @ 0x1017c0
static unsigned int heap_realloc(void)
{
 unsigned int uVar1;
 unsigned long long *__ptr;
 void *__ptr_00;
 __ptr = (unsigned long long *)malloc(0x14);
 if (__ptr == (unsigned long long *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 *__ptr = 0x200000001;
 __ptr[1] = 0x400000003;
 *(unsigned int *)(__ptr + 2) = 5;
 __ptr_00 = realloc(__ptr,0x28);
 if (__ptr_00 == (void *)0x0) {
 uVar1 = 0xfffffffe;
 free(__ptr);
 }
 else {
 uVar1 = 0x32;
 if (*(int *)((long)__ptr_00 + 8) != 3) {
 uVar1 = 0xfffffffd;
 }
 free(__ptr_00);
 }
 }
 return uVar1;
}

// Function: heap_array @ 0x101850
static int heap_array(int param_1)
{
 int *__ptr;
 int *piVar1;
 int iVar2;
 __ptr = (int *)malloc((long)param_1 << 2);
 if (__ptr == (int *)0x0) {
 iVar2 = -1;
 }
 else {
 if (0 < param_1) {
 iVar2 = 0;
 piVar1 = __ptr;
 do {
 *piVar1 = iVar2;
 iVar2 = iVar2 + 3;
 piVar1 = piVar1 + 1;
 } while (iVar2 != param_1 * 3);
 }
 iVar2 = __ptr[param_1 / 2];
 free(__ptr);
 }
 return iVar2;
}

// Function: heap_struct @ 0x1018c0
static int heap_struct(int param_1)
{
 void *__ptr;
 __ptr = malloc(8);
 if (__ptr == (void *)0x0) {
 param_1 = -1;
 }
 else {
 param_1 = param_1 * 3;
 free(__ptr);
 }
 return param_1;
}

// Function: heap_nested @ 0x101900
static unsigned long long heap_nested(unsigned long long *param_1)
{
 unsigned int *__ptr;
 unsigned int *puVar1;
 unsigned long long uVar2;
 __ptr = (unsigned int *)malloc(0x10);
 *param_1 = __ptr;
 if (__ptr == (unsigned int *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 *__ptr = 10;
 puVar1 = (unsigned int *)malloc(0x10);
 *(unsigned int **)(__ptr + 2) = puVar1;
 if (puVar1 == (unsigned int *)0x0) {
 free(__ptr);
 uVar2 = 0xfffffffe;
 }
 else {
 *puVar1 = 0x14;
 *(unsigned long long *)(puVar1 + 2) = 0;
 uVar2 = 0;
 }
 }
 return uVar2;
}

// Function: linked_list_heap @ 0x101970
static int linked_list_heap(void)
{
 int *piVar1;
 int *piVar2;
 int *piVar3;
 int *__ptr;
 int iVar4;
 iVar4 = 0;
 piVar1 = (int *)0x0;
 piVar3 = (int *)0x0;
 do {
 piVar2 = (int *)malloc(0x10);
 if (piVar2 == (int *)0x0) {
 while (piVar3 != (int *)0x0) {
 piVar1 = *(int **)(piVar3 + 2);
 free(piVar3);
 piVar3 = piVar1;
 }
 return -1;
 }
 *piVar2 = iVar4;
 *(unsigned long long *)(piVar2 + 2) = 0;
 __ptr = piVar2;
 if (piVar3 != (int *)0x0) {
 *(int **)(piVar1 + 2) = piVar2;
 __ptr = piVar3;
 }
 iVar4 = iVar4 + 10;
 piVar1 = piVar2;
 piVar3 = __ptr;
 } while (iVar4 != 0x32);
 iVar4 = 0;
 do {
 iVar4 = iVar4 + *piVar3;
 piVar3 = *(int **)(piVar3 + 2);
 } while (piVar3 != (int *)0x0);
 do {
 piVar3 = *(int **)(__ptr + 2);
 free(__ptr);
 __ptr = piVar3;
 } while (piVar3 != (int *)0x0);
 return iVar4;
}

// Function: create_tree_node @ 0x101a10
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

// Function: tree_heap_traversal @ 0x101a40
static unsigned long long tree_heap_traversal(void)
{
 void *__ptr;
 void *pvVar1;
 void *__ptr_00;
 unsigned long long uVar2;
 __ptr = malloc(0x18);
 if (__ptr == (void *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 pvVar1 = malloc(0x18);
 if (pvVar1 == (void *)0x0) {
 pvVar1 = malloc(0x18);
 if (pvVar1 != (void *)0x0) {
 free(pvVar1);
 }
 }
 else {
 __ptr_00 = malloc(0x18);
 if (__ptr_00 != (void *)0x0) {
 free(pvVar1);
 free(__ptr_00);
 free(__ptr);
 return 0x3c;
 }
 free(pvVar1);
 }
 free(__ptr);
 uVar2 = 0xfffffffe;
 }
 return uVar2;
}

// Function: memory_leak @ 0x101ae0
static unsigned int memory_leak(int param_1)
{
 unsigned int uVar1;
 void *pvVar2;
 long lVar3;
 pvVar2 = malloc((long)param_1 * 4);
 if (pvVar2 == (void *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 if (0 < param_1) {
 lVar3 = 0;
 do {
 *(int *)((long)pvVar2 + lVar3 * 4) = (int)lVar3;
 lVar3 = lVar3 + 1;
 } while (lVar3 != param_1);
 }
 uVar1 = *(unsigned int *)((long)pvVar2 + (long)(param_1 / 2) * 4);
 }
 return uVar1;
}

// Function: dangling_pointer @ 0x101b40
static unsigned int dangling_pointer(void)
{
 unsigned int *__ptr;
 __ptr = (unsigned int *)malloc(4);
 if (__ptr != (unsigned int *)0x0) {
 __printf_chk(1,"value before free: %d\n",0x2a);
 free(__ptr);
 return *__ptr;
 }
 return 0xffffffff;
}

// Function: double_free @ 0x101b80
static unsigned int double_free(unsigned int *param_1)
{
 void *__ptr;
 if (param_1 != (unsigned int *)0x0) {
 return *param_1;
 }
 __ptr = malloc(4);
 if (__ptr != (void *)0x0) {
 free(__ptr);
 free(__ptr);
 return 0xfffffffe;
 }
 return 0xffffffff;
}

// Function: heap_overflow @ 0x101bc0
static int heap_overflow(void)
{
 int *__ptr;
 int *piVar1;
 int iVar2;
 __ptr = (int *)malloc(0x28);
 if (__ptr == (int *)0x0) {
 iVar2 = -1;
 }
 else {
 iVar2 = 0;
 piVar1 = __ptr;
 do {
 *piVar1 = iVar2;
 iVar2 = iVar2 + 100;
 piVar1 = piVar1 + 1;
 } while (iVar2 != 0x44c);
 iVar2 = *__ptr;
 free(__ptr);
 }
 return iVar2;
}

// Function: test_heap_memory @ 0x101c10
static void test_heap_memory(void)
{
 unsigned int uVar1;
 __pid_t __pid;
 void *pvVar2;
 int *piVar3;
 unsigned int *puVar4;
 unsigned long long *puVar5;
 int *piVar6;
 long lVar7;
 unsigned long long uVar8;
 int iVar9;
 long in_FS_OFFSET;
 uint local_14;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_001030e6);
 pvVar2 = malloc(0x28);
 if (pvVar2 == (void *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 lVar7 = 0;
 do {
 *(int *)((long)pvVar2 + lVar7 * 4) = (int)lVar7 * 2;
 lVar7 = lVar7 + 1;
 } while (lVar7 != 10);
 uVar1 = *(unsigned int *)((long)pvVar2 + 0x14);
 free(pvVar2);
 }
 __printf_chk(1,"HEAP-L2-01 (heap_basic): %d\n",uVar1);
 piVar3 = (int *)calloc(5,4);
 if (piVar3 == (int *)0x0) {
 iVar9 = -1;
 }
 else {
 iVar9 = 0;
 piVar6 = piVar3;
 do {
 iVar9 = iVar9 + *piVar6;
 piVar6 = piVar6 + 1;
 } while (piVar3 + 5 != piVar6);
 free(piVar3);
 }
 __printf_chk(1,"HEAP-L2-02 (heap_calloc): %d\n",iVar9);
 uVar1 = heap_realloc();
 __printf_chk(1,"HEAP-L2-03 (heap_realloc): %d\n",uVar1);
 piVar3 = (int *)malloc(0x28);
 if (piVar3 == (int *)0x0) {
 iVar9 = -1;
 }
 else {
 iVar9 = 0;
 piVar6 = piVar3;
 do {
 *piVar6 = iVar9;
 iVar9 = iVar9 + 3;
 piVar6 = piVar6 + 1;
 } while (iVar9 != 0x1e);
 iVar9 = piVar3[5];
 free(piVar3);
 }
 __printf_chk(1,"HEAP-L2-04 (heap_array): %d\n",iVar9);
 pvVar2 = malloc(8);
 if (pvVar2 == (void *)0x0) {
 uVar8 = 0xffffffff;
 }
 else {
 free(pvVar2);
 uVar8 = 0xf;
 }
 __printf_chk(1,"HEAP-L2-05 (heap_struct): %d\n",uVar8);
 pvVar2 = malloc(0x10);
 if (pvVar2 == (void *)0x0) {
 __printf_chk(1,"HEAP-L2-06 (heap_nested): %d\n",0xffffffff);
 }
 else {
 puVar4 = (unsigned int *)malloc(0x10);
 *(unsigned int **)((long)pvVar2 + 8) = puVar4;
 if (puVar4 == (unsigned int *)0x0) {
 free(pvVar2);
 uVar8 = 0xfffffffe;
 }
 else {
 *puVar4 = 0x14;
 uVar8 = 0;
 *(unsigned long long *)(puVar4 + 2) = 0;
 }
 __printf_chk(1,"HEAP-L2-06 (heap_nested): %d\n",uVar8);
 free(*(void **)((long)pvVar2 + 8));
 free(pvVar2);
 }
 uVar1 = linked_list_heap();
 __printf_chk(1,"HEAP-L3-01 (linked_list_heap): %d\n",uVar1);
 uVar1 = tree_heap_traversal();
 __printf_chk(1,"HEAP-L3-02 (tree_heap_traversal): %d\n",uVar1);
 puVar5 = (unsigned long long *)malloc(0x14);
 if (puVar5 == (unsigned long long *)0x0) {
 uVar8 = 0xffffffff;
 }
 else {
 *(unsigned int *)(puVar5 + 2) = 4;
 uVar8 = 2;
 *puVar5 = 0x100000000;
 puVar5[1] = 0x300000002;
 }
 __printf_chk(1,"HEAP-L3-03 (memory_leak): %d\n",uVar8);
 __printf_chk(1,"HEAP-L3-04 (dangling_pointer): ");
 __pid = fork();
 if (__pid != 0) {
 if (__pid < 1) {
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 perror(&DAT_001031a8);
 return;
 }
 }
 else {
 waitpid(__pid,(int *)&local_14,0);
 if ((local_14 & 0x7f) == 0) {
 __printf_chk(1,&DAT_001033c8,local_14 >> 8 & 0xff);
 }
 else if ('\x01' < (char)((char)(local_14 & 0x7f) + '\x01')) {
 __printf_chk(1,&DAT_001033f0);
 }
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return;
 }
 }
 __stack_chk_fail();
 }
 puVar4 = (unsigned int *)malloc(4);
 if (puVar4 == (unsigned int *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 __printf_chk(1,"value before free: %d\n",0x2a);
 free(puVar4);
 uVar1 = *puVar4;
 }
 __printf_chk(1,&DAT_00103198,uVar1);
 exit(0);
}

// Function: global_var_access @ 0x101fe0
static void global_var_access(void)
{
 global_counter = global_counter + 1;
 return;
}

// Function: global_var_read @ 0x102000
static int global_var_read(void)
{
 return global_counter * 2;
}

// Function: global_array_access @ 0x102010
static unsigned int global_array_access(uint param_1)
{
 if (param_1 < 10) {
 return *(unsigned int *)(global_array + (long)(int)param_1 * 4);
 }
 return 0xffffffff;
}

// Function: static_local @ 0x102040
static void static_local(int param_1)
{
 int iVar1;
 iVar1 = 0;
 if (param_1 == 0) {
 iVar1 = counter_1 + 1;
 }
 counter_1 = iVar1;
 return;
}

// Function: call_static_func @ 0x102060
static int call_static_func(int param_1)
{
 return param_1 * 2 + 1;
}

// Function: access_extern_global @ 0x102070
static int access_extern_global(void)
{
 return extern_global_var + 100;
}

// Function: call_extern_func @ 0x102080
static void call_extern_func(void)
{
 extern_function(5);
 return;
}

// Function: read_const_data @ 0x102090
static int read_const_data(void)
{
 return (char)const_string[4] + 0x2a;
}

// Function: access_bss_var @ 0x1020b0
static unsigned long long access_bss_var(void)
{
 return 0;
}

// Function: access_bss_buffer @ 0x1020c0
static unsigned long long access_bss_buffer(void)
{
 return 0;
}

// Function: global_struct_access @ 0x1020d0
static unsigned long long global_struct_access(void)
{
 return 0x1e;
}

// Function: set_file_static @ 0x1020e0
static void set_file_static(unsigned int param_1)
{
 file_scope_static = param_1;
 return;
}

// Function: get_file_static @ 0x1020f0
static unsigned int get_file_static(void)
{
 return file_scope_static;
}

// Function: set_global_callback @ 0x102100
static void set_global_callback(unsigned long long param_1)
{
 global_func_ptr = param_1;
 return;
}

// Function: call_global_callback @ 0x102110
static unsigned long long call_global_callback(void)
{
 unsigned long long uVar1;
 if (global_func_ptr != (void *)0x0) {
 uVar1 = (*global_func_ptr)();
 return uVar1;
 }
 return 0xffffffff;
}

// Function: global_heap_store @ 0x102130
static unsigned int global_heap_store(unsigned int *param_1)
{
 if (param_1 != (unsigned int *)0x0) {
 return *param_1;
 }
 return 0xffffffff;
}

// Function: static_complex_init @ 0x102150
static unsigned long long static_complex_init(void)
{
 return 0xf;
}

// Function: tls_access @ 0x102160
static int tls_access(int param_1)
{
 return param_1 * 2;
}

// Function: init_order_test @ 0x102170
static unsigned long long init_order_test(void)
{
 return 0x14;
}

// Function: test_static_global @ 0x102180
static void test_static_global(void)
{
 unsigned int uVar1;
 puts(&DAT_00103438);
 global_counter = global_counter + 1;
 __printf_chk(1,"STM-L1-01 (global_var_access): %d\n",global_counter);
 __printf_chk(1,"STM-L1-01 (global_var_read): %d\n",global_counter * 2);
 __printf_chk(1,"STM-L1-02 (global_array_access): %d\n",5);
 counter_1 = 1;
 __printf_chk(1,"STM-L1-03 (static_local): %d\n",1);
 counter_1 = counter_1 + 1;
 __printf_chk(1,"STM-L1-03 (static_local): %d\n",counter_1);
 __printf_chk(1,"STM-L1-04 (call_static_func): %d\n",0xb);
 __printf_chk(1,"STM-L2-01 (access_extern_global): %d\n",extern_global_var + 100);
 uVar1 = extern_function(5);
 __printf_chk(1,"STM-L2-02 (call_extern_func): %d\n",uVar1);
 __printf_chk(1,"STM-L2-03 (read_const_data): %d\n",(char)const_string[4] + 0x2a);
 __printf_chk(1,"STM-L2-04 (access_bss_var): %d\n",0);
 __printf_chk(1,"STM-L2-04 (access_bss_buffer): %d\n",0);
 __printf_chk(1,"STM-L2-05 (global_struct_access): %d\n",0x1e);
 file_scope_static = 0x32;
 __printf_chk(1,"STM-L2-06 (file_static): %d\n",0x32);
 global_func_ptr = double_value;
 __printf_chk(1,"STM-L2-07 (global_func_ptr): %d\n",10);
 __printf_chk(1,"STM-L2-08 (global_heap_store): %d\n",100);
 __printf_chk(1,"STM-L2-09 (static_complex_init): %d\n",0xf);
 __printf_chk(1,"STM-L3-01 (tls_access): %d\n",0x14);
 __printf_chk(1,"STM-L3-02 (init_order_test): %d\n",0x14);
 return;
}

// Function: memop_memset @ 0x102390
static unsigned long memop_memset(void *param_1,size_t param_2,int param_3)
{
 byte *pbVar1;
 if ((param_1 != (void *)0x0) && (param_2 != 0)) {
 pbVar1 = (byte *)memset(param_1,param_3,param_2);
 return (unsigned long)*pbVar1;
 }
 return 0xffffffff;
}

// Function: memop_memcpy @ 0x1023d0
static unsigned int memop_memcpy(void *param_1,void *param_2,unsigned long param_3)
{
 void *pvVar1;
 if ((param_2 != (void *)0x0 && param_3 != 0) && (param_1 != (void *)0x0)) {
 pvVar1 = memcpy(param_1,param_2,param_3);
 return *(unsigned int *)((long)pvVar1 + ((param_3 & 0xfffffffffffffffc) - 4));
 }
 return 0xffffffff;
}

// Function: memop_memmove @ 0x102410
static int memop_memmove(void *param_1,unsigned long param_2)
{
 if ((param_1 != (void *)0x0) && (1 < param_2)) {
 memmove((void *)((long)param_1 + 1),param_1,param_2 - 1);
 return (int)*(char *)((long)param_1 + 1);
 }
 return -1;
}

// Function: memop_memcmp @ 0x102450
static int memop_memcmp(void *param_1,void *param_2,size_t param_3)
{
 int iVar1;
 int iVar2;
 if ((param_2 != (void *)0x0 && param_3 != 0) && (param_1 != (void *)0x0)) {
 iVar1 = memcmp(param_1,param_2,param_3);
 iVar2 = -(uint)(iVar1 != 0);
 if (0 < iVar1) {
 iVar2 = 1;
 }
 return iVar2;
 }
 return 0;
}

// Function: memop_bzero @ 0x1024a0
static unsigned long memop_bzero(void *param_1,size_t param_2)
{
 byte *pbVar1;
 if (param_1 != (void *)0x0) {
 pbVar1 = (byte *)memset(param_1,0,param_2);
 return (unsigned long)*pbVar1;
 }
 return 0xffffffff;
}

// Function: memop_bcopy @ 0x1024d0
static unsigned long memop_bcopy(void *param_1,void *param_2,size_t param_3)
{
 byte *pbVar1;
 if ((param_2 != (void *)0x0 && param_3 != 0) && (param_1 != (void *)0x0)) {
 pbVar1 = (byte *)memmove(param_2,param_1,param_3);
 return (unsigned long)*pbVar1;
 }
 return 0xffffffff;
}

// Function: memop_unaligned_access @ 0x102510
static unsigned int memop_unaligned_access(long param_1)
{
 if (param_1 != 0) {
 return *(unsigned int *)(param_1 + 1);
 }
 return 0xffffffff;
}

// Function: memop_memory_barrier @ 0x102530
static int memop_memory_barrier(int *param_1)
{
 if (param_1 != (int *)0x0) {
 LOCK();
 UNLOCK();
 return *param_1 + *param_1;
 }
 return -1;
}

// Function: test_memory_op_functions @ 0x102550
static void test_memory_op_functions(void)
{
 int iVar1;
 int iVar2;
 long in_FS_OFFSET;
 unsigned long long local_148;
 unsigned int local_140;
 unsigned long long local_13c;
 unsigned int local_134;
 unsigned long long local_12d;
 unsigned short local_125;
 unsigned long long local_123;
 unsigned short local_11b;
 char local_119;
 unsigned long long local_118;
 unsigned short local_110;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_00103688);
 local_118 = 0x4141414141414141;
 local_110 = 0x4141;
 __printf_chk(1,"MEMOP-L2-01: %d\n",0x41);
 __printf_chk(1,"MEMOP-L2-02: %d\n",0x32);
 local_11b = 0x646c;
 local_123 = 0x726f576f6c6c6548;
 local_119 = 0;
 memmove((void *)((long)&local_123 + 1),&local_123,9);
 __printf_chk(1,"MEMOP-L2-03: %c\n",0x48);
 local_148 = 0x200000001;
 local_140 = 3;
 local_13c = 0x200000001;
 local_134 = 4;
 iVar1 = memcmp(&local_148,&local_13c,0xc);
 iVar2 = -(uint)(iVar1 != 0);
 if (0 < iVar1) {
 iVar2 = 1;
 }
 __printf_chk(1,"MEMOP-L2-04: %d\n",iVar2);
 local_125 = 0;
 local_12d = 0;
 __printf_chk(1,"MEMOP-L2-05: %d\n",0);
 __printf_chk(1,"MEMOP-L2-06: %d\n",1);
 __printf_chk(1,"MEMOP-L3-01: 0x%x\n",0x4030201);
 LOCK();
 UNLOCK();
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 __printf_chk(1,"MEMOP-L3-02: %d\n",10);
 return;
 }
 __stack_chk_fail();
}

// Function: extern_function @ 0x102710
static int extern_function(int param_1)
{
 return param_1 * 2;
}

// Function: _fini @ 0x102718 (removed - provided by C runtime)
// _fini is provided by the C runtime

