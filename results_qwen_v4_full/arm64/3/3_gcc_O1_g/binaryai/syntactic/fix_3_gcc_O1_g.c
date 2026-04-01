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
typedef unsigned char byte;
typedef unsigned int uint;
extern long ___stack_chk_guard;
extern long __stack_chk_guard;
extern int global_counter;
extern unsigned int file_scope_static;
extern unsigned long long global_func_ptr;
extern char completed_0;
extern void *__dso_handle;
extern unsigned int global_array[10];
extern int counter_1;
extern int extern_global_var;
extern char const_string[];
extern int static_depends_0;
char DAT_00101e38[] = "=== Stack Memory Tests ===";
extern char DAT_00101fa8[];
extern char DAT_00102118[];
extern char DAT_00102198[];
extern char DAT_00102128[];
extern char DAT_00102150[];
extern char DAT_001021a8[];
extern char DAT_00102458[];
extern void *stack0x00000008;
extern int call_weak_fn(void);
extern int DataMemoryBarrier(int a, int b);
extern void __libc_start_main(int (*main)(void), int argc, void **ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void (*stack_end));
extern void abort(void);
extern int main(void);
extern int extern_function(int param_1);

extern void __cxa_finalize(void *);
extern void __stack_chk_fail(void);
extern int puts(const char *);
extern void *malloc(unsigned long size);
extern void free(void *ptr);
extern void *calloc(unsigned long nmemb, unsigned long size);
extern void *realloc(void *ptr, unsigned long size);
extern int fork(void);
extern int waitpid(int pid, int *status, int options);
extern int perror(const char *s);
extern void exit(int status);
extern void *memset(void *s, int c, unsigned long n);
extern void *memcpy(void *dest, const void *src, unsigned long n);
extern void *memmove(void *dest, const void *src, unsigned long n);
extern int memcmp(const void *s1, const void *s2, unsigned long n);
extern int __printf_chk(int flag, const char *format, ...);

// Decompiled by BinaryAI
// SHA256: 6d1fc14cf5afccc45f429750e443acd47798741381ca5325bf1c60a8bc10d33f



// Function: FUN_001009b0 @ 0x1009b0
static void FUN_001009b0(void)
{
 return;
}























// Function: _start @ 0x100b00
static void _start(unsigned long long param_1)
{
 unsigned long long param_9;
 __libc_start_main(main, 0, 0, 0, 0, 0, 0);
 abort();
}



// Function: deregister_tm_clones @ 0x100b50
static void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x100b80
static void register_tm_clones(void)
{
 return;
}

// Function: FUN_00100bbc @ 0x100bbc
static void FUN_00100bbc(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x100bc0
static void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: double_value @ 0x100c14
static int double_value(int param_1)
{
 return param_1 << 1;
}

// Function: local_vars @ 0x100c1c
static int local_vars(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: local_array @ 0x100c28
static int local_array(int param_1)
{
 int iVar1;
 int *piVar2;
 int aiStack_30 [10];
 int local_8 [2];
 int *piVar3;
 iVar1 = 0;
 piVar2 = aiStack_30;
 do {
 piVar3 = piVar2 + 1;
 *piVar2 = iVar1;
 iVar1 = iVar1 + param_1;
 piVar2 = piVar3;
 } while (piVar3 != local_8);
 return 0;
}

// Function: local_struct @ 0x100c8c
static int local_struct(int param_1)
{
 return param_1 * 3;
}

// Function: address_of_local @ 0x100c94
static void address_of_local(unsigned int *param_1)
{
 *param_1 = 0x2a;
 return;
}

// Function: address_of_array @ 0x100ca4
static int address_of_array(int *param_1)
{
 return *param_1 << 1;
}

// Function: large_stack_frame @ 0x100cb0
static int large_stack_frame(void)
{
 int iVar1;
 char *puVar2;
 char auStack_808 [1024];
 char local_408;
 long local_8;
 local_8 = ___stack_chk_guard;
 iVar1 = 0;
 puVar2 = auStack_808;
 do {
 *puVar2 = (char)iVar1;
 iVar1 = iVar1 + 1;
 puVar2 = puVar2 + 1;
 } while (iVar1 != 0x800);
 if (local_8 - ___stack_chk_guard == 0) {
 return 0;
 }
 __stack_chk_fail();
 return 0;
}

// Function: vla_stack @ 0x100d18
static int vla_stack(unsigned long param_1)
{
 long lVar1;
 char *puVar2;
 int iVar3;
 unsigned int uVar4;
 long lVar5;
 unsigned long uVar6;
 char auStack_30 [16];
 long local_8;
 puVar2 = auStack_30;
 local_8 = ___stack_chk_guard;
 iVar3 = (int)param_1;
 if (iVar3 - 1U < 1000) {
 uVar6 = (-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2) + 0xf;
 for (; puVar2 != auStack_30 + -(uVar6 & 0xffffffffffff0000); puVar2 = puVar2 + -0x10000) {
 *(unsigned long long *)(puVar2 + -0xfc00) = 0;
 }
 uVar6 = uVar6 & 0xfff0;
 lVar1 = -uVar6;
 *(unsigned long long *)(puVar2 + lVar1) = 0;
 if (0x3ff < uVar6) {
 *(unsigned long long *)(puVar2 + lVar1 + 0x400) = 0;
 }
 lVar5 = 0;
 do {
 *(int *)(puVar2 + lVar5 * 4 + lVar1 + 0x10) = (int)lVar5 << 1;
 lVar5 = lVar5 + 1;
 } while ((int)lVar5 < iVar3);
 uVar4 = *(unsigned int *)(puVar2 + (long)(iVar3 / 2) * 4 + lVar1 + 0x10);
 }
 else {
 uVar4 = 0xffffffff;
 }
 if (local_8 - ___stack_chk_guard == 0) {
 return 0;
 }
 __stack_chk_fail();
 return 0;
}

// Function: alloca_usage @ 0x100de0
static int alloca_usage(unsigned long param_1)
{
 long lVar1;
 char *puVar2;
 int iVar3;
 int iVar4;
 unsigned long uVar5;
 int *piVar6;
 char auStack_30 [16];
 long local_8;
 puVar2 = auStack_30;
 local_8 = ___stack_chk_guard;
 iVar3 = (int)param_1;
 if (iVar3 < 1) {
 iVar3 = -1;
 }
 else {
 uVar5 = (-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2) + 0xf;
 for (; puVar2 != auStack_30 + -(uVar5 & 0xffffffffffff0000); puVar2 = puVar2 + -0x10000) {
 *(unsigned long long *)(puVar2 + -0xfc00) = 0;
 }
 uVar5 = uVar5 & 0xfff0;
 lVar1 = -uVar5;
 *(unsigned long long *)(puVar2 + lVar1) = 0;
 if (0x3ff < uVar5) {
 *(unsigned long long *)(puVar2 + lVar1 + 0x400) = 0;
 }
 iVar4 = 0;
 piVar6 = (int *)(puVar2 + lVar1 + 0x10);
 do {
 *piVar6 = iVar4;
 iVar4 = iVar4 + 3;
 piVar6 = piVar6 + 1;
 } while (iVar4 != iVar3 * 3);
 iVar3 = *(int *)((long)(puVar2 + lVar1 + 0x10) + (long)(iVar3 / 2) * 4);
 }
 if (local_8 - ___stack_chk_guard == 0) {
 return 0;
 }
 __stack_chk_fail();
 return 0;
}

// Function: stack_alias @ 0x100ea8
static unsigned long long stack_alias(void)
{
 return 0x14;
}

// Function: test_stack_memory @ 0x100eb0
static void test_stack_memory(void)
{
 unsigned int uVar1;
 puts(DAT_00101e38);
 __printf_chk(1,"MEM-L1-01 (local_vars): %d\n",0x14);
 uVar1 = local_array(2);
 __printf_chk(1,"MEM-L1-02 (local_array): %d\n",uVar1);
 __printf_chk(1,"MEM-L1-03 (local_struct): %d\n",0xf);
 __printf_chk(1,"MEM-L1-04 (address_of_local): %d\n",0x2a);
 __printf_chk(1,"MEM-L1-05 (address_of_array): %d\n",2);
 uVar1 = large_stack_frame();
 __printf_chk(1,"MEM-L2-01 (large_stack_frame): %d\n",uVar1);
 uVar1 = vla_stack(10);
 __printf_chk(1,"MEM-L2-02 (vla_stack): %d\n",uVar1);
 uVar1 = alloca_usage(10);
 __printf_chk(1,"MEM-L2-03 (alloca_usage): %d\n",uVar1);
 __printf_chk(1,"MEM-L2-04 (stack_alias): %d\n",0x14);
 return;
}

// Function: heap_basic @ 0x100f9c
static unsigned int heap_basic(unsigned long param_1)
{
 int iVar1;
 void *__ptr;
 long lVar2;
 unsigned int uVar3;
 iVar1 = (int)param_1;
 __ptr = malloc(-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2);
 if (__ptr == (void *)0x0) {
 uVar3 = 0xffffffff;
 }
 else {
 if (0 < iVar1) {
 lVar2 = 0;
 do {
 *(int *)((long)__ptr + lVar2 * 4) = (int)lVar2 << 1;
 lVar2 = lVar2 + 1;
 } while ((int)lVar2 < iVar1);
 }
 uVar3 = *(unsigned int *)((long)__ptr + (long)(iVar1 / 2) * 4);
 free(__ptr);
 }
 return uVar3;
}

// Function: heap_calloc @ 0x101000
static int heap_calloc(int param_1)
{
 void *__ptr;
 long lVar1;
 int iVar2;
 __ptr = calloc((long)param_1,4);
 if (__ptr == (void *)0x0) {
 iVar2 = -1;
 }
 else {
 if (param_1 < 1) {
 iVar2 = 0;
 }
 else {
 lVar1 = 0;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *(int *)((long)__ptr + lVar1 * 4);
 lVar1 = lVar1 + 1;
 } while ((int)lVar1 < param_1);
 }
 free(__ptr);
 }
 return iVar2;
}

// Function: heap_realloc @ 0x101068
static unsigned int heap_realloc(void)
{
 unsigned int *__ptr;
 void *__ptr_00;
 unsigned int uVar1;
 __ptr = (unsigned int *)malloc(0x14);
 if (__ptr == (unsigned int *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 *__ptr = 1;
 __ptr[1] = 2;
 __ptr[2] = 3;
 __ptr[3] = 4;
 __ptr[4] = 5;
 __ptr_00 = realloc(__ptr,0x28);
 if (__ptr_00 == (void *)0x0) {
 free(__ptr);
 uVar1 = 0xfffffffe;
 }
 else {
 *(unsigned int *)((long)__ptr_00 + 0x14) = 0x32;
 *(unsigned int *)((long)__ptr_00 + 0x18) = 0x3c;
 *(unsigned int *)((long)__ptr_00 + 0x1c) = 0x46;
 *(unsigned int *)((long)__ptr_00 + 0x20) = 0x50;
 *(unsigned int *)((long)__ptr_00 + 0x24) = 0x5a;
 uVar1 = 0xfffffffd;
 if (*(int *)((long)__ptr_00 + 8) == 3) {
 uVar1 = *(unsigned int *)((long)__ptr_00 + 0x14);
 }
 free(__ptr_00);
 }
 }
 return uVar1;
}

// Function: heap_array @ 0x101128
static int heap_array(unsigned long param_1)
{
 int *__ptr;
 int iVar1;
 int *piVar2;
 int iVar3;
 iVar3 = (int)param_1;
 __ptr = (int *)malloc(-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2);
 if (__ptr == (int *)0x0) {
 iVar3 = -1;
 }
 else {
 if (0 < iVar3) {
 iVar1 = 0;
 piVar2 = __ptr;
 do {
 *piVar2 = iVar1;
 iVar1 = iVar1 + 3;
 piVar2 = piVar2 + 1;
 } while (iVar1 != iVar3 * 3);
 }
 iVar3 = __ptr[iVar3 / 2];
 free(__ptr);
 }
 return iVar3;
}

// Function: heap_struct @ 0x101190
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

// Function: heap_nested @ 0x1011cc
static int heap_nested(unsigned long long *param_1)
{
 unsigned int *__ptr;
 unsigned int *puVar1;
 int uVar2;
 __ptr = (unsigned int *)malloc(0x10);
 *param_1 = (unsigned long long)(uintptr_t)__ptr;
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

// Function: linked_list_heap @ 0x10123c
static int linked_list_heap(void)
{
 int *piVar1;
 int *piVar2;
 int *__ptr;
 int *__ptr_00;
 int iVar3;
 iVar3 = 0;
 piVar2 = (int *)0x0;
 __ptr = (int *)0x0;
 do {
 piVar1 = (int *)malloc(0x10);
 if (piVar1 == (int *)0x0) {
 if (__ptr != (int *)0x0) {
 do {
 piVar2 = *(int **)(__ptr + 2);
 free(__ptr);
 __ptr = piVar2;
 } while (piVar2 != (int *)0x0);
 return -1;
 }
 return -1;
 }
 *piVar1 = iVar3;
 *(unsigned long long *)(piVar1 + 2) = 0;
 __ptr_00 = piVar1;
 if (__ptr != (int *)0x0) {
 *(int **)(piVar2 + 2) = piVar1;
 __ptr_00 = __ptr;
 }
 iVar3 = iVar3 + 10;
 piVar2 = piVar1;
 __ptr = __ptr_00;
 } while (iVar3 != 0x32);
 if (__ptr_00 == (int *)0x0) {
 iVar3 = 0;
 }
 else {
 iVar3 = 0;
 piVar2 = __ptr_00;
 do {
 iVar3 = iVar3 + *piVar2;
 piVar2 = *(int **)(piVar2 + 2);
 } while (piVar2 != (int *)0x0);
 do {
 piVar2 = *(int **)(__ptr_00 + 2);
 free(__ptr_00);
 __ptr_00 = piVar2;
 } while (piVar2 != (int *)0x0);
 }
 return iVar3;
}

// Function: create_tree_node @ 0x101300
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

// Function: tree_heap_traversal @ 0x101334
static int tree_heap_traversal(void)
{
 int *__ptr;
 unsigned long long uVar1;
 int *piVar2;
 int *__ptr_00;
 int iVar3;
 create_tree_node(10);
 __ptr = (int *)0x0;
 if (__ptr == (int *)0x0) {
 iVar3 = -1;
 }
 else {
 create_tree_node(0x14);
 uVar1 = 0;
 *(unsigned long long *)(__ptr + 2) = uVar1;
 create_tree_node(0x1e);
 piVar2 = (int *)0x0;
 *(int **)(__ptr + 4) = piVar2;
 __ptr_00 = *(int **)(__ptr + 2);
 if (piVar2 == (int *)0x0 || __ptr_00 == (int *)0x0) {
 if (__ptr_00 != (int *)0x0) {
 free(__ptr_00);
 }
 if (*(void **)(__ptr + 4) != (void *)0x0) {
 free(*(void **)(__ptr + 4));
 }
 free(__ptr);
 iVar3 = -2;
 }
 else {
 iVar3 = *__ptr + *__ptr_00 + *piVar2;
 free(__ptr_00);
 free(*(void **)(__ptr + 4));
 free(__ptr);
 }
 }
 return iVar3;
}

// Function: memory_leak @ 0x1013e0
static unsigned int memory_leak(unsigned long param_1)
{
 int iVar1;
 unsigned int uVar2;
 void *pvVar3;
 long lVar4;
 iVar1 = (int)param_1;
 pvVar3 = malloc(-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2);
 if (pvVar3 == (void *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 if (0 < iVar1) {
 lVar4 = 0;
 do {
 *(int *)((long)pvVar3 + lVar4 * 4) = (int)lVar4;
 lVar4 = lVar4 + 1;
 } while ((int)lVar4 < iVar1);
 }
 uVar2 = *(unsigned int *)((long)pvVar3 + (long)(iVar1 / 2) * 4);
 }
 return uVar2;
}

// Function: dangling_pointer @ 0x101438
static unsigned int dangling_pointer(void)
{
 unsigned int uVar1;
 unsigned int *__ptr;
 __ptr = (unsigned int *)malloc(4);
 if (__ptr == (unsigned int *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 __printf_chk(1,"value before free: %d\n",0x2a);
 free(__ptr);
 uVar1 = *__ptr;
 }
 return uVar1;
}

// Function: double_free @ 0x101488
static unsigned int double_free(unsigned int *param_1)
{
 unsigned int uVar1;
 void *__ptr;
 if (param_1 != (unsigned int *)0x0) {
 return *param_1;
 }
 __ptr = malloc(4);
 if (__ptr == (void *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 free(__ptr);
 free(__ptr);
 uVar1 = 0xfffffffe;
 }
 return uVar1;
}

// Function: heap_overflow @ 0x1014d4
static int heap_overflow(void)
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

// Function: test_heap_memory @ 0x101524
static void test_heap_memory(void)
{
 unsigned int uVar1;
 __pid_t __pid;
 uint local_14;
 void *local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 puts(DAT_00101fa8);
 uVar1 = heap_basic(10);
 __printf_chk(1,"HEAP-L2-01 (heap_basic): %d\n",uVar1);
 uVar1 = heap_calloc(5);
 __printf_chk(1,"HEAP-L2-02 (heap_calloc): %d\n",uVar1);
 uVar1 = heap_realloc();
 __printf_chk(1,"HEAP-L2-03 (heap_realloc): %d\n",uVar1);
 uVar1 = heap_array(10);
 __printf_chk(1,"HEAP-L2-04 (heap_array): %d\n",uVar1);
 uVar1 = heap_struct(5);
 __printf_chk(1,"HEAP-L2-05 (heap_struct): %d\n",uVar1);
 local_10 = (void *)0x0;
 uVar1 = heap_nested((unsigned long long *)&local_10);
 __printf_chk(1,"HEAP-L2-06 (heap_nested): %d\n",uVar1);
 if (local_10 != (void *)0x0) {
 free(*(void **)((long)local_10 + 8));
 free(local_10);
 }
 uVar1 = linked_list_heap();
 __printf_chk(1,"HEAP-L3-01 (linked_list_heap): %d\n",uVar1);
 uVar1 = tree_heap_traversal();
 __printf_chk(1,"HEAP-L3-02 (tree_heap_traversal): %d\n",uVar1);
 uVar1 = memory_leak(5);
 __printf_chk(1,"HEAP-L3-03 (memory_leak): %d\n",uVar1);
 __printf_chk(1,"HEAP-L3-04 (dangling_pointer): ");
 __pid = fork();
 if (__pid == 0) {
 uVar1 = dangling_pointer();
 __printf_chk(1,(const char *)&DAT_00102118,uVar1);
 exit(0);
 }
 if (__pid < 1) {
 perror((char *)DAT_00102198);
 }
 else {
 waitpid(__pid,(int *)&local_14,0);
 if ((local_14 & 0x7f) == 0) {
 __printf_chk(1,(const char *)&DAT_00102128,local_14 >> 8 & 0xff);
 }
 else if (0 < (int)((long)((unsigned long)((local_14 & 0x7f) + 1) << 0x38) >> 0x39)) {
 __printf_chk(1,(const char *)&DAT_00102150,local_14 & 0x7f);
 }
 }
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: global_var_access @ 0x101724
static void global_var_access(void)
{
 global_counter = global_counter + 1;
 return;
}

// Function: global_var_read @ 0x101738
static int global_var_read(void)
{
 return global_counter << 1;
}

// Function: global_array_access @ 0x101748
static unsigned int global_array_access(uint param_1)
{
 unsigned int uVar1;
 if (param_1 < 10) {
 uVar1 = *(unsigned int *)(&global_array + (long)(int)param_1 * 4);
 }
 else {
 uVar1 = 0xffffffff;
 }
 return uVar1;
}

// Function: static_local @ 0x101768
static void static_local(int param_1)
{
 if (param_1 == 0) {
 counter_1 = counter_1 + 1;
 }
 else {
 counter_1 = 0;
 }
 return;
}

// Function: call_static_func @ 0x10178c
static int call_static_func(int param_1)
{
 return param_1 * 2 + 1;
}

// Function: access_extern_global @ 0x101798
static int access_extern_global(void)
{
 return extern_global_var + 100;
}

// Function: call_extern_func @ 0x1017ac
static int call_extern_func(void)
{
 return extern_function(5);
}

// Function: read_const_data @ 0x1017c4
static int read_const_data(void)
{
 return (byte)const_string[4] + 0x2a;
}

// Function: access_bss_var @ 0x1017d8
static unsigned long long access_bss_var(void)
{
 return 0;
}

// Function: access_bss_buffer @ 0x1017e0
static unsigned long long access_bss_buffer(void)
{
 return 0;
}

// Function: global_struct_access @ 0x1017e8
static unsigned long long global_struct_access(void)
{
 return 0x1e;
}

// Function: set_file_static @ 0x1017f0
static void set_file_static(unsigned int param_1)
{
 file_scope_static = param_1;
 return;
}

// Function: get_file_static @ 0x1017fc
static unsigned int get_file_static(void)
{
 return file_scope_static;
}

// Function: set_global_callback @ 0x101808
static void set_global_callback(unsigned long long param_1)
{
 global_func_ptr = param_1;
 return;
}

// Function: call_global_callback @ 0x101814
static unsigned long long call_global_callback(void)
{
 unsigned long long uVar1;
 if (global_func_ptr != (void *)0x0) {
 uVar1 = ((unsigned long long (*)(void))global_func_ptr)();
 return uVar1;
 }
 return 0xffffffff;
}

// Function: global_heap_store @ 0x10183c
static unsigned int global_heap_store(unsigned int *param_1)
{
 unsigned int uVar1;
 if (param_1 == (unsigned int *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 uVar1 = *param_1;
 }
 return uVar1;
}

// Function: static_complex_init @ 0x101850
static unsigned long long static_complex_init(void)
{
 return 0xf;
}

// Function: tls_access @ 0x101858
static int tls_access(int param_1)
{
 return param_1 << 1;
}

// Function: init_order_test @ 0x101860
static int init_order_test(void)
{
 static_depends_0 = 0x14;
 return static_depends_0;
}

// Function: test_static_global @ 0x101870
static void test_static_global(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = puts(DAT_001021a8);
 global_var_access();
 __printf_chk(1,"STM-L1-01 (global_var_access): %d\n",iVar1);
 __printf_chk(1,"STM-L1-01 (global_var_read): %d\n",global_counter << 1);
 __printf_chk(1,"STM-L1-02 (global_array_access): %d\n",5);
 counter_1 = 1;
 __printf_chk(1,"STM-L1-03 (static_local): %d\n",1);
 counter_1 = counter_1 + 1;
 __printf_chk(1,"STM-L1-03 (static_local): %d\n",counter_1);
 __printf_chk(1,"STM-L1-04 (call_static_func): %d\n",0xb);
 __printf_chk(1,"STM-L2-01 (access_extern_global): %d\n",extern_global_var + 100);
 uVar2 = call_extern_func();
 __printf_chk(1,"STM-L2-02 (call_extern_func): %d\n",uVar2);
 uVar2 = read_const_data();
 __printf_chk(1,"STM-L2-03 (read_const_data): %d\n",uVar2);
 __printf_chk(1,"STM-L2-04 (access_bss_var): %d\n",0);
 __printf_chk(1,"STM-L2-04 (access_bss_buffer): %d\n",0);
 uVar2 = global_struct_access();
 __printf_chk(1,"STM-L2-05 (global_struct_access): %d\n",uVar2);
 file_scope_static = 0x32;
 __printf_chk(1,"STM-L2-06 (file_static): %d\n",file_scope_static);
 global_func_ptr = (unsigned long long)double_value;
 uVar2 = call_global_callback();
 __printf_chk(1,"STM-L2-07 (global_func_ptr): %d\n",uVar2);
 __printf_chk(1,"STM-L2-08 (global_heap_store): %d\n",100);
 uVar2 = static_complex_init();
 __printf_chk(1,"STM-L2-09 (static_complex_init): %d\n",uVar2);
 __printf_chk(1,"STM-L3-01 (tls_access): %d\n",0x14);
 uVar2 = init_order_test();
 __printf_chk(1,"STM-L3-02 (init_order_test): %d\n",uVar2);
 return;
}

// Function: memop_memset @ 0x101a60
static unsigned long memop_memset(byte *param_1,size_t param_2,int param_3)
{
 unsigned long uVar1;
 if (param_1 == (byte *)0x0 || param_2 == 0) {
 uVar1 = 0xffffffff;
 }
 else {
 memset(param_1,param_3,param_2);
 uVar1 = (unsigned long)*param_1;
 }
 return uVar1;
}

// Function: memop_memcpy @ 0x101aa8
static unsigned int memop_memcpy(void *param_1,void *param_2,size_t param_3)
{
 if ((param_2 != (void *)0x0 && param_3 != 0) && param_1 != (void *)0x0) {
 memcpy(param_1,param_2,param_3);
 return *(unsigned int *)((long)param_1 + ((param_3 & 0xfffffffffffffffc) - 4));
 }
 return 0xffffffff;
}

// Function: memop_memmove @ 0x101af0
static unsigned long memop_memmove(void *param_1,long param_2)
{
 if ((param_1 != (void *)0x0 && param_2 != 0) && (param_1 == (void *)0x0 || param_2 != 1)) {
 memmove((void *)((long)param_1 + 1),param_1,param_2 - 1);
 return (unsigned long)*(byte *)((long)param_1 + 1);
 }
 return 0xffffffff;
}

// Function: memop_memcmp @ 0x101b34
static int memop_memcmp(void *param_1,void *param_2,size_t param_3)
{
 int iVar1;
 int iVar2;
 if ((param_2 == (void *)0x0 || param_3 == 0) || param_1 == (void *)0x0) {
 return 0;
 }
 iVar2 = memcmp(param_1,param_2,param_3);
 iVar1 = iVar2 >> 0x1f;
 if (0 < iVar2) {
 iVar1 = 1;
 }
 return iVar1;
}

// Function: memop_bzero @ 0x101b6c
static unsigned long memop_bzero(byte *param_1,size_t param_2)
{
 if (param_1 != (byte *)0x0) {
 memset(param_1,0,param_2);
 return (unsigned long)*param_1;
 }
 return 0xffffffff;
}

// Function: memop_bcopy @ 0x101ba4
static unsigned long memop_bcopy(void *param_1,byte *param_2,size_t param_3)
{
 if ((param_2 != (byte *)0x0 && param_3 != 0) && param_1 != (void *)0x0) {
 memmove(param_2,param_1,param_3);
 return (unsigned long)*param_2;
 }
 return 0xffffffff;
}

// Function: memop_unaligned_access @ 0x101be8
static unsigned int memop_unaligned_access(long param_1)
{
 unsigned int uVar1;
 if (param_1 == 0) {
 uVar1 = 0xffffffff;
 }
 else {
 uVar1 = *(unsigned int *)(param_1 + 1);
 }
 return uVar1;
}



// Function: test_memory_op_functions @ 0x101c1c
static void test_memory_op_functions(void)
{
 unsigned int uVar1;
 unsigned int local_18c;
 unsigned int local_188;
 unsigned int local_184;
 unsigned int local_180;
 unsigned int local_178;
 unsigned int local_174;
 unsigned int local_170;
 unsigned long long local_168;
 unsigned long long uStack_160;
 unsigned int local_158;
 unsigned long long local_150;
 unsigned long long uStack_148;
 unsigned int local_140;
 unsigned int local_138 [2];
 unsigned int local_130 [2];
 char auStack_128 [16];
 char local_118[8];
 unsigned int uStack_111;
 char auStack_108 [256];
 long local_8;
 local_8 = ___stack_chk_guard;
 puts(DAT_00102458);
 local_168 = 0x140000000a;
 uStack_160 = 0x280000001e;
 local_158 = 0x32;
 local_150 = 0;
 uStack_148 = 0;
 local_140 = 0;
 uVar1 = memop_memset(auStack_108,10,0x41);
 __printf_chk(1,"MEMOP-L2-01: %d\n",uVar1);
 uVar1 = memop_memcpy(&local_150,&local_168,0x14);
 __printf_chk(1,"MEMOP-L2-02: %d\n",uVar1);
 *(unsigned long long *)local_118 = 0x6f576f6c6c6548;
 uStack_111 = 0x00646c72;
 uVar1 = memop_memmove(&local_118,10);
 __printf_chk(1,"MEMOP-L2-03: %c\n",uVar1);
 local_188 = 1;
 local_184 = 2;
 local_180 = 3;
 local_178 = 1;
 local_174 = 2;
 local_170 = 4;
 uVar1 = memop_memcmp(&local_188,&local_178,0xc);
 __printf_chk(1,"MEMOP-L2-04: %d\n",uVar1);
 uVar1 = memop_bzero(auStack_128,10);
 __printf_chk(1,"MEMOP-L2-05: %d\n",uVar1);
 local_138[0] = 0x4030201;
 local_130[0] = 0;
 uVar1 = memop_bcopy(local_138,(byte *)local_130,4);
 __printf_chk(1,"MEMOP-L2-06: %d\n",uVar1);
 __printf_chk(1,"MEMOP-L3-01: 0x%x\n",0x4030201);
  local_18c = 5;
 uVar1 = local_18c * 2;
 __printf_chk(1,"MEMOP-L3-02: %d\n",uVar1);
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: main @ 0x101df0
int main(void)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}

// Function: extern_function @ 0x101e14
int extern_function(int param_1)
{
 return param_1 * 3;
}

// Function: _fini @ 0x101e1c
static void _fini(void)
{
 return;
}

