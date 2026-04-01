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
struct undefined7 { unsigned char bytes[7]; };
#define NULL ((void *)0)

/* Stack canary guard variables */
static unsigned long __stack_chk_guard;
static unsigned long ___stack_chk_guard;

/* Global variables */
int global_counter = 0;
static unsigned int file_scope_static = 0;
static int counter_1 = 0;
void *global_func_ptr = NULL;
int extern_global_var = 0;
unsigned int global_array[10];

/* String constants */
char const_string[] = "Hello";

/* Function prototypes */
int __printf_chk(int __flag, const char *__format, ...);
void __cxa_finalize(void *);
void __stack_chk_fail(unsigned long, unsigned long, unsigned long, unsigned long);
void __libc_start_main(int (*main)(void), void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end, void *shared_lib_info);
void abort(void);
int puts(const char *s);
void *malloc(size_t size);
void free(void *ptr);
void *calloc(size_t nmemb, size_t size);
void *realloc(void *ptr, size_t size);
int memcmp(const void *s1, const void *s2, size_t n);
void *memset(void *s, int c, size_t n);
void *memcpy(void *dest, const void *src, size_t n);
void *memmove(void *dest, const void *src, size_t n);
__pid_t fork(void);
void exit(int status);
void perror(const char *s);
__pid_t waitpid(__pid_t pid, int *status, int options);
static void test_stack_memory(void);
static void test_heap_memory(void);
static void test_static_global(void);
static void test_memory_op_functions(void);

/* Data references */
char DAT_00101d98[] = "=== Test Stack Memory ===";
char DAT_00101ee1[] = "=== Test Heap Memory ===";
char DAT_00102039[] = "%d\n";
char DAT_00102049[] = "Exit code: %d\n";
char DAT_0010206e[] = "Signal: %d\n";
char DAT_001020af[] = "fork failed";
char DAT_001020ba[] = "=== Test Static/Global ===";
char DAT_0010231c[] = "=== Test Memory Op Functions ===";
static void *__dso_handle;
static char completed_0 = 0;


// Decompiled by BinaryAI
// SHA256: 3a72357192d0b5049b8c7cd5d6689e7c94896a6bd434bb450ebfb70a9131b7b9

// Function: call_weak_fn @ 0x1009a0
static int call_weak_fn(int param)
{
 return 0;
}

// Function: _init @ 0x100990
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn((int)ctx);
 return iVar1;
}

// Function: FUN_001009b0 @ 0x1009b0
void FUN_001009b0(void)
{
 return;
}







































// Function: main @ 0x100b00
int main(void)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}

// Function: deregister_tm_clones @ 0x100b90
static void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x100bc0
static void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x100c00
static void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: double_value @ 0x100c54
static int double_value(int param_1)
{
 return param_1 << 1;
}

// Function: local_vars @ 0x100c5c
static int local_vars(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: local_array @ 0x100c68
static unsigned int local_array(int param_1)
{
 long lVar1;
 int iVar2;
 int local_30 [12];
 iVar2 = 0;
 lVar1 = 0;
 do {
 local_30[lVar1] = iVar2;
 lVar1 = lVar1 + 1;
 iVar2 = iVar2 + param_1;
 } while (lVar1 != 10);
 return 0;
}

// Function: local_struct @ 0x100ccc
static int local_struct(int param_1)
{
 return param_1 * 3;
}

// Function: address_of_local @ 0x100cd4
static void address_of_local(unsigned int *param_1)
{
 *param_1 = 0x2a;
 return;
}

// Function: address_of_array @ 0x100ce4
static int address_of_array(int *param_1)
{
 return *param_1 << 1;
}

// Function: large_stack_frame @ 0x100cf0
static unsigned int large_stack_frame(void)
{
 long lVar1;
 char auStack_808 [2056];
 lVar1 = 0;
 do {
 auStack_808[lVar1] = (char)lVar1;
 lVar1 = lVar1 + 1;
 } while (lVar1 != 0x800);
 return 0;
}

// Function: vla_stack @ 0x100d58
static unsigned int vla_stack(unsigned long param_1)
{
 long lVar1;
 char *puVar2;
 int iVar3;
 unsigned int uVar4;
 unsigned long uVar5;
 long lVar6;
 char auStack_30 [16];
 long local_8;
 puVar2 = auStack_30;
 local_8 = ___stack_chk_guard;
 iVar3 = (int)param_1;
 if (iVar3 - 1U < 1000) {
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
 lVar6 = 0;
 do {
 *(int *)(puVar2 + lVar6 * 4 + lVar1 + 0x10) = (int)lVar6 << 1;
 lVar6 = lVar6 + 1;
 } while ((int)lVar6 < iVar3);
 uVar4 = *(unsigned int *)(puVar2 + (long)(iVar3 >> 1) * 4 + lVar1 + 0x10);
 }
 else {
 uVar4 = 0xffffffff;
 }
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail(uVar4,(unsigned long)&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return uVar4;
}

// Function: alloca_usage @ 0x100e1c
static unsigned int alloca_usage(unsigned long param_1)
{
 long lVar1;
 char *puVar2;
 int iVar3;
 unsigned int uVar4;
 unsigned long uVar5;
 long lVar6;
 char auStack_30 [16];
 long local_8;
 puVar2 = auStack_30;
 local_8 = ___stack_chk_guard;
 iVar3 = (int)param_1;
 if (iVar3 < 1) {
 uVar4 = 0xffffffff;
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
 lVar6 = 0;
 do {
 *(int *)(puVar2 + lVar6 * 4 + lVar1 + 0x10) = (int)lVar6 * 3;
 lVar6 = lVar6 + 1;
 } while ((int)lVar6 < iVar3);
 uVar4 = *(unsigned int *)(puVar2 + (long)(iVar3 >> 1) * 4 + lVar1 + 0x10);
 }
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail(uVar4,(unsigned long)&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return uVar4;
}

// Function: stack_alias @ 0x100edc
static unsigned long long stack_alias(void)
{
 return 0x14;
}

// Function: test_stack_memory @ 0x100ee4
static void test_stack_memory(void)
{
 unsigned int uVar1;
 puts((char *)&DAT_00101d98);
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

// Function: heap_basic @ 0x100fcc
static unsigned int heap_basic(unsigned long param_1)
{
 void *__ptr;
 long lVar1;
 unsigned int uVar2;
 __ptr = malloc(-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2);
 if (__ptr == (void *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 for (lVar1 = 0; (int)lVar1 < (int)param_1; lVar1 = lVar1 + 1) {
 *(int *)((long)__ptr + lVar1 * 4) = (int)lVar1 << 1;
 }
 uVar2 = *(unsigned int *)((long)__ptr + (long)((int)param_1 / 2) * 4);
 free(__ptr);
 }
 return uVar2;
}

// Function: heap_calloc @ 0x10102c
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
 iVar2 = 0;
 for (lVar1 = 0; (int)lVar1 < param_1; lVar1 = lVar1 + 1) {
 iVar2 = iVar2 + *(int *)((long)__ptr + lVar1 * 4);
 }
 free(__ptr);
 }
 return iVar2;
}

// Function: heap_realloc @ 0x101088
static unsigned int heap_realloc(void)
{
 unsigned long long *__ptr;
 void *__ptr_00;
 unsigned int uVar1;
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

// Function: heap_array @ 0x101110
static unsigned int heap_array(unsigned long param_1)
{
 void *__ptr;
 long lVar1;
 unsigned int uVar2;
 __ptr = malloc(-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2);
 if (__ptr == (void *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 for (lVar1 = 0; (int)lVar1 < (int)param_1; lVar1 = lVar1 + 1) {
 *(int *)((long)__ptr + lVar1 * 4) = (int)lVar1 * 3;
 }
 uVar2 = *(unsigned int *)((long)__ptr + (long)((int)param_1 / 2) * 4);
 free(__ptr);
 }
 return uVar2;
}

// Function: heap_struct @ 0x101170
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

// Function: heap_nested @ 0x1011ac
static unsigned long long heap_nested(unsigned long long *param_1)
{
 unsigned int *__ptr;
 unsigned int *puVar1;
 unsigned long long uVar2;
 __ptr = (unsigned int *)malloc(0x10);
 *(void **)param_1 = __ptr;
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

// Function: linked_list_heap @ 0x10121c
static int linked_list_heap(void)
{
 int iVar1;
 int *piVar2;
 int *__ptr;
 int *__ptr_00;
 int iVar3;
 int *piVar4;
 iVar3 = 0;
 piVar4 = (int *)0x0;
 __ptr = (int *)0x0;
 do {
 piVar2 = (int *)malloc(0x10);
 if (piVar2 == (int *)0x0) {
 while (__ptr != (int *)0x0) {
 piVar4 = *(int **)(__ptr + 2);
 free(__ptr);
 __ptr = piVar4;
 }
 return -1;
 }
 *piVar2 = iVar3;
 *(unsigned long long *)(piVar2 + 2) = 0;
 __ptr_00 = piVar2;
 if (__ptr != (int *)0x0) {
 *(int **)(piVar4 + 2) = piVar2;
 __ptr_00 = __ptr;
 }
 iVar3 = iVar3 + 10;
 piVar4 = piVar2;
 __ptr = __ptr_00;
 } while (iVar3 != 0x32);
 iVar3 = 0;
 piVar4 = __ptr_00;
 do {
 iVar1 = *piVar4;
 piVar4 = *(int **)(piVar4 + 2);
 iVar3 = iVar3 + iVar1;
 } while (piVar4 != (int *)0x0);
 do {
 piVar4 = *(int **)(__ptr_00 + 2);
 free(__ptr_00);
 __ptr_00 = piVar4;
 } while (piVar4 != (int *)0x0);
 return iVar3;
}

// Function: create_tree_node @ 0x1012c8
static unsigned int *create_tree_node(unsigned int param_1)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)malloc(0x18);
 if (puVar1 != (unsigned int *)0x0) {
 *puVar1 = param_1;
 *(unsigned long long *)(puVar1 + 2) = 0;
 *(unsigned long long *)(puVar1 + 4) = 0;
 }
 return puVar1;
}

// Function: tree_heap_traversal @ 0x1012f8
static int tree_heap_traversal(void)
{
 int iVar1;
 int iVar2;
 int *__ptr;
 unsigned int *puVar3;
 int *piVar4;
 int *__ptr_00;
 int iVar5;
 __ptr = (int *)create_tree_node(10);
 if (__ptr == (int *)0x0) {
 iVar5 = -1;
 }
 else {
 puVar3 = create_tree_node(0x14);
 *(unsigned int **)(__ptr + 2) = puVar3;
 piVar4 = (int *)create_tree_node(0x1e);
 __ptr_00 = *(int **)(__ptr + 2);
 *(int **)(__ptr + 4) = piVar4;
 if (__ptr_00 != (int *)0x0) {
 if (piVar4 != (int *)0x0) {
 iVar5 = *__ptr_00;
 iVar1 = *piVar4;
 iVar2 = *__ptr;
 free(__ptr_00);
 free(*(void **)(__ptr + 4));
 free(__ptr);
 return iVar2 + iVar5 + iVar1;
 }
 free(__ptr_00);
 }
 if (*(void **)(__ptr + 4) != (void *)0x0) {
 free(*(void **)(__ptr + 4));
 }
 iVar5 = -2;
 free(__ptr);
 }
 return iVar5;
}

// Function: memory_leak @ 0x10139c
static unsigned int memory_leak(unsigned long param_1)
{
 unsigned int uVar1;
 void *pvVar2;
 long lVar3;
 pvVar2 = malloc(-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2);
 if (pvVar2 == (void *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 for (lVar3 = 0; (int)lVar3 < (int)param_1; lVar3 = lVar3 + 1) {
 *(int *)((long)pvVar2 + lVar3 * 4) = (int)lVar3;
 }
 uVar1 = *(unsigned int *)((long)pvVar2 + (long)((int)param_1 / 2) * 4);
 }
 return uVar1;
}

// Function: dangling_pointer @ 0x1013f0
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

// Function: double_free @ 0x101440
static unsigned int double_free(unsigned int *param_1)
{
 unsigned int uVar1;
 void *__ptr;
 if (param_1 == (unsigned int *)0x0) {
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
 return *param_1;
}

// Function: heap_overflow @ 0x10148c
static unsigned int heap_overflow(void)
{
 unsigned int *__ptr;
 long lVar1;
 unsigned int uVar2;
 __ptr = (unsigned int *)malloc(0x28);
 if (__ptr == (unsigned int *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 lVar1 = 0;
 do {
 __ptr[lVar1] = (int)lVar1 * 100;
 lVar1 = lVar1 + 1;
 } while (lVar1 != 0xb);
 uVar2 = *__ptr;
 free(__ptr);
 }
 return uVar2;
}

// Function: test_heap_memory @ 0x1014e0
static void test_heap_memory(void)
{
 unsigned int uVar1;
 __pid_t __pid;
 char *puVar2;
 uint uVar3;
 uint local_14;
 void *local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 puts((char *)&DAT_00101ee1);
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
 __printf_chk(1,(char *)&DAT_00102039,uVar1);
 exit(0);
 }
 if (__pid < 1) {
 perror((char *)&DAT_001020af);
 }
 else {
 waitpid(__pid,(int *)&local_14,0);
 uVar3 = local_14 & 0x7f;
 if ((local_14 & 0x7f) == 0) {
 uVar3 = local_14 >> 8 & 0xff;
 puVar2 = (char *)&DAT_00102049;
 }
 else {
 if ((int)((long)((unsigned long)(uVar3 + 1) << 0x38) >> 0x39) < 1) goto LAB_00101680;
 puVar2 = (char *)&DAT_0010206e;
 }
 __printf_chk(1,puVar2,uVar3);
 }
LAB_00101680:
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail((unsigned long)&__stack_chk_guard,0,local_8 - ___stack_chk_guard,0);
 }
 return;
}

// Function: global_var_access @ 0x1016d4
static unsigned int global_var_access(void)
{
 global_counter = global_counter + 1;
 return 0;
}

// Function: global_var_read @ 0x1016e8
static int global_var_read(void)
{
 return global_counter << 1;
}

// Function: global_array_access @ 0x1016f8
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

// Function: static_local @ 0x101718
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

// Function: call_static_func @ 0x101740
static int call_static_func(int param_1)
{
 return param_1 * 2 + 1;
}

// Function: access_extern_global @ 0x10174c
static int access_extern_global(void)
{
 return extern_global_var + 100;
}

// Function: call_extern_func @ 0x101760
static int call_extern_func(void)
{
 extern_function(5);
 return 15;
}

// Function: read_const_data @ 0x101768
static int read_const_data(void)
{
 return (byte)const_string[4] + 0x2a;
}

// Function: access_bss_var @ 0x10177c
static unsigned long long access_bss_var(void)
{
 return 0;
}

// Function: access_bss_buffer @ 0x101784
static unsigned long long access_bss_buffer(void)
{
 return 0;
}

// Function: global_struct_access @ 0x10178c
static unsigned long long global_struct_access(void)
{
 return 0x1e;
}

// Function: set_file_static @ 0x101794
static void set_file_static(unsigned int param_1)
{
 file_scope_static = param_1;
 return;
}

// Function: get_file_static @ 0x1017a0
static unsigned int get_file_static(void)
{
 return file_scope_static;
}

// Function: set_global_callback @ 0x1017ac
static void set_global_callback(unsigned long long param_1)
{
 global_func_ptr = (void *)param_1;
 return;
}

// Function: call_global_callback @ 0x1017b8
static unsigned long long call_global_callback(void)
{
 unsigned long long uVar1;
 if (global_func_ptr != (void *)0x0) {
 uVar1 = (*(unsigned long long (*)())global_func_ptr)();
 return uVar1;
 }
 return 0xffffffff;
}

// Function: global_heap_store @ 0x1017d4
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

// Function: static_complex_init @ 0x1017e8
static unsigned long long static_complex_init(void)
{
 return 0xf;
}

// Function: tls_access @ 0x1017f0
static int tls_access(int param_1)
{
 return param_1 << 1;
}

// Function: init_order_test @ 0x1017f8
static unsigned long long init_order_test(void)
{
 return 0x14;
}

// Function: test_static_global @ 0x101800
static void test_static_global(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = puts((char *)&DAT_001020ba);
 uVar2 = global_var_access();
 __printf_chk(1,"STM-L1-01 (global_var_access): %d\n",uVar2);
 __printf_chk(1,"STM-L1-01 (global_var_read): %d\n",global_counter << 1);
 __printf_chk(1,"STM-L1-02 (global_array_access): %d\n",5);
 counter_1 = 1;
 __printf_chk(1,"STM-L1-03 (static_local): %d\n",1);
 counter_1 = counter_1 + 1;
 __printf_chk(1,"STM-L1-03 (static_local): %d\n");
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
 __printf_chk(1,"STM-L2-06 (file_static): %d\n");
 global_func_ptr = (void *)(uintptr_t)double_value;
 uVar2 = call_global_callback();
 __printf_chk(1,"STM-L2-07 (global_func_ptr): %d\n",(unsigned int)uVar2);
 __printf_chk(1,"STM-L2-08 (global_heap_store): %d\n",100);
 uVar2 = static_complex_init();
 __printf_chk(1,"STM-L2-09 (static_complex_init): %d\n",uVar2);
 __printf_chk(1,"STM-L3-01 (tls_access): %d\n",0x14);
 __printf_chk(1,"STM-L3-02 (init_order_test): %d\n",0x14);
 return;
}

// Function: memop_memset @ 0x1019e8
static unsigned long memop_memset(byte *param_1,size_t param_2,int param_3)
{
 if (param_1 != (byte *)0x0 && param_2 != 0) {
 memset(param_1,param_3,param_2);
 return (unsigned long)*param_1;
 }
 return 0xffffffff;
}

// Function: memop_memcpy @ 0x101a2c
static unsigned int memop_memcpy(void *param_1,void *param_2,size_t param_3)
{
 unsigned int uVar1;
 if (param_1 != (void *)0x0 && param_2 != (void *)0x0) {
 if (param_3 == 0) {
 uVar1 = 0xffffffff;
 }
 else {
 memcpy(param_1,param_2,param_3);
 uVar1 = *(unsigned int *)((long)param_1 + ((param_3 & 0xfffffffffffffffc) - 4));
 }
 return uVar1;
 }
 return 0xffffffff;
}

// Function: memop_memmove @ 0x101a7c
static unsigned long memop_memmove(void *param_1,long param_2)
{
 if ((param_1 != (void *)0x0 && param_2 != 0) && (param_1 == (void *)0x0 || param_2 != 1)) {
 memmove((void *)((long)param_1 + 1),param_1,param_2 - 1);
 return (unsigned long)*(byte *)((long)param_1 + 1);
 }
 return 0xffffffff;
}

// Function: memop_memcmp @ 0x101ac0
static int memop_memcmp(void *param_1,void *param_2,size_t param_3)
{
 int iVar1;
 int iVar2;
 if ((param_1 != (void *)0x0 && param_2 != (void *)0x0) && (param_3 != 0)) {
 iVar2 = memcmp(param_1,param_2,param_3);
 iVar1 = -(uint)(iVar2 != 0);
 if (0 < iVar2) {
 iVar1 = 1;
 }
 return iVar1;
 }
 return 0;
}

// Function: memop_bzero @ 0x101af8
static unsigned long memop_bzero(byte *param_1,size_t param_2)
{
 if (param_1 != (byte *)0x0) {
 memset(param_1,0,param_2);
 return (unsigned long)*param_1;
 }
 return 0xffffffff;
}

// Function: memop_bcopy @ 0x101b30
static unsigned long memop_bcopy(void *param_1,void *param_2,size_t param_3)
{
 byte *pbVar1;
 if ((param_1 != (void *)0x0 && param_2 != (void *)0x0) && (param_3 != 0)) {
 pbVar1 = (byte *)memmove(param_2,param_1,param_3);
 return (unsigned long)*pbVar1;
 }
 return 0xffffffff;
}

// Function: memop_unaligned_access @ 0x101b6c
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

// Function: memop_memory_barrier @ 0x101b80
static int memop_memory_barrier(int *param_1)
{
 int iVar1;
 if (param_1 == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 __sync_synchronize();
 iVar1 = *param_1 + *param_1;
 }
 return iVar1;
}

// Function: test_memory_op_functions @ 0x101ba0
static void test_memory_op_functions(void)
{
 int iVar1;
 unsigned int uVar2;
 int iVar3;
 unsigned int local_18c;
 unsigned long long local_188;
 unsigned int local_180;
 unsigned long long local_178;
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
 struct undefined7 local_118;
 struct { unsigned int _0_1_:8; unsigned int _1_1_:8; unsigned int _2_1_:8; unsigned int _3_1_:8; } uStack_111;
 char auStack_108 [256];
 long local_8;
 local_8 = ___stack_chk_guard;
 puts((char *)&DAT_0010231c);
 local_150 = 0;
 uStack_148 = 0;
 local_140 = 0;
 local_168 = 0x140000000a;
 uStack_160 = 0x280000001e;
 local_158 = 0x32;
 uVar2 = memop_memset(auStack_108,10,0x41);
 __printf_chk(1,"MEMOP-L2-01: %d\n",uVar2);
 uVar2 = memop_memcpy(&local_150,&local_168,0x14);
 __printf_chk(1,"MEMOP-L2-02: %d\n",uVar2);
 *(unsigned long long *)&local_118 = 0x6f576f6c6c6548;
 uStack_111._0_1_ = 'r';
 uStack_111._1_1_ = 'l';
 uStack_111._2_1_ = 'd';
 uStack_111._3_1_ = '\0';
 uVar2 = memop_memmove(&local_118,10);
 __printf_chk(1,"MEMOP-L2-03: %c\n",uVar2);
 local_188 = 0x200000001;
 local_178 = 0x200000001;
 local_180 = 3;
 local_170 = 4;
 iVar3 = memcmp(&local_188,&local_178,0xc);
 iVar1 = -(uint)(iVar3 != 0);
 if (0 < iVar3) {
 iVar1 = 1;
 }
 __printf_chk(1,"MEMOP-L2-04: %d\n",iVar1);
 uVar2 = memop_bzero(auStack_128,10);
 __printf_chk(1,"MEMOP-L2-05: %d\n",uVar2);
 local_138[0] = 0x4030201;
 local_130[0] = 0;
 uVar2 = memop_bcopy(local_138,local_130,4);
 __printf_chk(1,"MEMOP-L2-06: %d\n",uVar2);
 __printf_chk(1,"MEMOP-L3-01: 0x%x\n",0x4030201);
 local_18c = 5;
 uVar2 = memop_memory_barrier(&local_18c);
 __printf_chk(1,"MEMOP-L3-02: %d\n",uVar2);
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail((unsigned long)&__stack_chk_guard,0,local_8 - ___stack_chk_guard,0);
 }
 return;
}

// Function: extern_function @ 0x101d78
int extern_function(int param_1)
{
 return param_1 * 3;
}

// Function: _fini @ 0x101d80
void _fini(void)
{
 return;
}

