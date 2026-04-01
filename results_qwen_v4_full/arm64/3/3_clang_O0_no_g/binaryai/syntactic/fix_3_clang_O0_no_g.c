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
typedef int __pid_t;
typedef unsigned char byte;
typedef unsigned long long undefined7;

/* Auto-injected global variable declarations */
char completed_0;
void *__dso_handle = 0;
int global_counter;
unsigned int global_array[10];
int static_local_counter;
int extern_global_var;
unsigned int bss_var;
char bss_buffer;
int global_point;
int DAT_001140d4;
int complex_init;
int DAT_001140e4;
int DAT_001140ec;
long *tpidr_el0 = 0;
unsigned int init_depends_on_static_depends;
unsigned int *global_heap_ptr;
unsigned int file_scope_static;
void *global_func_ptr;
char DAT_00102714[] = "=== Stack Memory Tests ===\n";
char DAT_0010285e[] = "=== Heap Memory Tests ===\n";
char DAT_001029b7[] = "dangling value: %d\n";
char DAT_001029c7[] = "exited with status: %d\n";
char DAT_001029ec[] = "terminated by signal: %d\n";
char DAT_00102a2d[] = "fork failed";
char DAT_00102a43[] = "=== Static/Global Tests ===\n";
char DAT_00102ca6[] = "=== Memory Operation Tests ===\n";
char *const_string = "TestData";
void *stack0x00000008;
void *stack0x00000000;

// Decompiled by BinaryAI
// SHA256: 0ffc9468ec508005dd60186b9001455a440debaea99a6f8b8411a0be151228ff



// Function: _init @ 0x100908
void _init(void)
{
 return;
}

// Function: _fini @ stub
void _fini(void)
{
 return;
}

// Function: frame_dummy @ stub
void frame_dummy(void)
{
 return;
}

// Function: FUN_00100920 @ 0x100920
void FUN_00100920(void)
{
 return;
}

// Forward declarations for functions called before definition
int static_helper(int param_1);
int extern_function(int param_1);
unsigned int init_depends_on(unsigned int *param_1);
unsigned int double_value(unsigned int param_1);
void DataMemoryBarrier(int param_1, int param_2);
unsigned int linked_list_heap(void);
int tree_heap_traversal(void);
unsigned int memory_leak(int param_1);
uint dangling_pointer(void);
unsigned int heap_basic(int param_1);
int heap_calloc(int param_1);
unsigned int heap_realloc(void);
unsigned int heap_array(int param_1);
int heap_struct(int param_1);
unsigned int heap_nested(void **param_1);
unsigned int *create_tree_node(unsigned int param_1);
uint memop_memset(byte *param_1, size_t param_2, int param_3);
unsigned int memop_memcpy(void *param_1, void *param_2, unsigned long param_3);
uint memop_memmove(void *param_1, unsigned long param_2);
unsigned int memop_memcmp(void *param_1, void *param_2, size_t param_3);
uint memop_bzero(byte *param_1, size_t param_2);
uint memop_bcopy(void *param_1, byte *param_2, size_t param_3);
unsigned int memop_unaligned_access(long param_1);
int memop_memory_barrier(int *param_1);
int test_stack_memory(void);
void test_heap_memory(void);
int test_static_global(void);
int test_memory_op_functions(void);

// Standard library function declarations
void abort(void);
int printf(const char *format, ...);
void *memset(void *s, int c, size_t n);
void *malloc(size_t size);
void free(void *ptr);
void *calloc(size_t nmemb, size_t size);
void *realloc(void *ptr, size_t size);
__pid_t fork(void);
__pid_t waitpid(__pid_t pid, int *status, int options);
void exit(int status);
void *memcpy(void *dest, const void *src, size_t n);
void *memmove(void *dest, const void *src, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
void bcopy(const void *src, void *dest, size_t n);
void perror(const char *s);

// Function: DataMemoryBarrier @ 0x100000
void DataMemoryBarrier(int param_1, int param_2)
{
 // Memory barrier stub implementation
 return;
}



// Function: __gmon_start__ @ stub
void __gmon_start__(void)
{
 return;
}

// Function: __cxa_finalize @ stub
void __cxa_finalize(void *param_1)
{
 return;
}



// Function: call_weak_fn @ 0x100ab4
void call_weak_fn(void)
{
 __gmon_start__();
 return;
}

// Function: deregister_tm_clones @ 0x100ad0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x100b00
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x100b40
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(&__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: local_vars @ 0x100b94
int local_vars(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: local_array @ 0x100bc8
unsigned int local_array(int param_1)
{
 int local_30;
 int aiStack_2c [11];
 for (local_30 = 0; local_30 < 10; local_30 = local_30 + 1) {
 aiStack_2c[local_30] = local_30 * param_1;
 }
 return aiStack_2c[5];
}

// Function: local_struct @ 0x100c20
int local_struct(int param_1)
{
 return param_1 * 3;
}

// Function: address_of_local @ 0x100c50
unsigned int address_of_local(unsigned int *param_1)
{
 *param_1 = 0x2a;
 return 0x2a;
}

// Function: address_of_array @ 0x100c78
int address_of_array(int *param_1)
{
 return *param_1 + *param_1;
}

// Function: large_stack_frame @ 0x100cac
char large_stack_frame(void)
{
 int local_814;
 char auStack_810 [2048];
 for (local_814 = 0; local_814 < 0x800; local_814 = local_814 + 1) {
 auStack_810[local_814] = (char)local_814;
 }
 return auStack_810[1024];
}

// Function: vla_stack @ 0x100d00
unsigned int vla_stack(uint param_1)
{
 long lVar1;
 int aiStack_40 [5];
 int local_2c;
 unsigned int local_14;
 if (((int)param_1 < 1) || (1000 < (int)param_1)) {
 local_14 = 0xffffffff;
 }
 else {
 lVar1 = -0x40 - ((unsigned long)param_1 * 4 + 0xf & 0xfffffffffffffff0);
 for (local_2c = 0; local_2c < (int)param_1; local_2c = local_2c + 1) {
 *(int *)((long)aiStack_40 + (long)local_2c * 4 + lVar1 + 0x40) = local_2c << 1;
 }
 local_14 = *(unsigned int *)((long)aiStack_40 + (long)((int)param_1 / 2) * 4 + lVar1 + 0x40);
 }
 return local_14;
}

// Function: alloca_usage @ 0x100de0
unsigned int alloca_usage(int param_1)
{
 long lVar1;
 int aiStack_30 [7];
 unsigned int local_14;
 if (param_1 < 1) {
 local_14 = 0xffffffff;
 }
 else {
 lVar1 = -0x30 - ((long)param_1 * 4 + 0xfU & 0xfffffffffffffff0);
 for (aiStack_30[3] = 0; aiStack_30[3] < param_1; aiStack_30[3] = aiStack_30[3] + 1) {
 *(int *)((long)aiStack_30 + (long)aiStack_30[3] * 4 + lVar1 + 0x30) = aiStack_30[3] * 3;
 }
 local_14 = *(unsigned int *)((long)aiStack_30 + (long)(param_1 / 2) * 4 + lVar1 + 0x30);
 }
 return local_14;
}

// Function: stack_alias @ 0x100ea4
unsigned int stack_alias(void)
{
 unsigned int local_1c;
 unsigned int local_4;
 if (&stack0x00000000 == (char *)0x1c) {
 local_4 = 0xffffffff;
 }
 else {
 local_4 = local_1c;
 }
 return local_4;
}

// Function: test_stack_memory @ 0x100f1c
int test_stack_memory(void)
{
 int iVar1;
 unsigned long uVar2;
 unsigned int local_40;
 unsigned int local_3c;
 unsigned int local_38;
 unsigned int local_34;
 char auStack_14 [4];
 printf((const char *)DAT_00102714);
 uVar2 = local_vars(5);
 printf("MEM-L1-01 (local_vars): %d\n",uVar2 & 0xffffffff);
 uVar2 = local_array(5);
 printf("MEM-L1-02 (local_array): %d\n",uVar2 & 0xffffffff);
 uVar2 = local_struct(5);
 printf("MEM-L1-03 (local_struct): %d\n",uVar2 & 0xffffffff);
 uVar2 = address_of_local((unsigned int *)auStack_14);
 printf("MEM-L1-04 (address_of_local): %d\n",uVar2 & 0xffffffff);
 memset(&local_3c,0,0x28);
 local_3c = 1;
 local_38 = 2;
 local_34 = 3;
 uVar2 = address_of_array(&local_3c);
 iVar1 = printf("MEM-L1-05 (address_of_array): %d\n",uVar2 & 0xffffffff);
 uVar2 = large_stack_frame();
 printf("MEM-L2-01 (large_stack_frame): %d\n",uVar2 & 0xffffffff);
 uVar2 = vla_stack(10);
 printf("MEM-L2-02 (vla_stack): %d\n",uVar2 & 0xffffffff);
 uVar2 = alloca_usage(10);
 printf("MEM-L2-03 (alloca_usage): %d\n",uVar2 & 0xffffffff);
 local_40 = 0;
 uVar2 = stack_alias();
 iVar1 = printf("MEM-L2-04 (stack_alias): %d\n",uVar2 & 0xffffffff);
 return iVar1;
}

// Function: heap_basic @ 0x101054
unsigned int heap_basic(int param_1)
{
 void *__ptr;
 int local_24;
 unsigned int local_14;
 __ptr = malloc((long)param_1 << 2);
 if (__ptr == (void *)0x0) {
 local_14 = 0xffffffff;
 }
 else {
 for (local_24 = 0; local_24 < param_1; local_24 = local_24 + 1) {
 *(int *)((long)__ptr + (long)local_24 * 4) = local_24 << 1;
 }
 local_14 = *(unsigned int *)((long)__ptr + (long)(param_1 / 2) * 4);
 free(__ptr);
 }
 return local_14;
}

// Function: heap_calloc @ 0x10110c
int heap_calloc(int param_1)
{
 void *__ptr;
 int local_28;
 int local_24;
 int local_14;
 __ptr = calloc((long)param_1,4);
 if (__ptr == (void *)0x0) {
 local_14 = -1;
 }
 else {
 local_24 = 0;
 for (local_28 = 0; local_28 < param_1; local_28 = local_28 + 1) {
 local_24 = local_24 + *(int *)((long)__ptr + (long)local_28 * 4);
 }
 free(__ptr);
 local_14 = local_24;
 }
 return local_14;
}

// Function: heap_realloc @ 0x1011b4
unsigned int heap_realloc(void)
{
 int iVar1;
 void *__ptr;
 void *__ptr_00;
 unsigned int local_3c;
 int local_34;
 int local_24;
 unsigned int local_14;
 __ptr = malloc(0x14);
 if (__ptr == (void *)0x0) {
 local_14 = 0xffffffff;
 }
 else {
 for (local_24 = 0; local_24 < 5; local_24 = local_24 + 1) {
 *(int *)((long)__ptr + (long)local_24 * 4) = local_24 + 1;
 }
 iVar1 = *(int *)((long)__ptr + 8);
 __ptr_00 = realloc(__ptr,0x28);
 if (__ptr_00 == (void *)0x0) {
 free(__ptr);
 local_14 = 0xfffffffe;
 }
 else {
 for (local_34 = 5; local_34 < 10; local_34 = local_34 + 1) {
 *(int *)((long)__ptr_00 + (long)local_34 * 4) = local_34 * 10;
 }
 if (*(int *)((long)__ptr_00 + 8) == iVar1) {
 local_3c = *(unsigned int *)((long)__ptr_00 + 0x14);
 }
 else {
 local_3c = 0xfffffffd;
 }
 free(__ptr_00);
 local_14 = local_3c;
 }
 }
 return local_14;
}

// Function: heap_array @ 0x101310
unsigned int heap_array(int param_1)
{
 void *__ptr;
 int local_24;
 unsigned int local_14;
 __ptr = malloc((long)param_1 << 2);
 if (__ptr == (void *)0x0) {
 local_14 = 0xffffffff;
 }
 else {
 for (local_24 = 0; local_24 < param_1; local_24 = local_24 + 1) {
 *(int *)((long)__ptr + (long)local_24 * 4) = local_24 * 3;
 }
 local_14 = *(unsigned int *)((long)__ptr + (long)(param_1 / 2) * 4);
 free(__ptr);
 }
 return local_14;
}

// Function: heap_struct @ 0x1013cc
int heap_struct(int param_1)
{
 int *__ptr;
 int local_14;
 __ptr = (int *)malloc(8);
 if (__ptr == (int *)0x0) {
 local_14 = -1;
 }
 else {
 *__ptr = param_1;
 __ptr[1] = param_1 << 1;
 local_14 = *__ptr + __ptr[1];
 free(__ptr);
 }
 return local_14;
}

// Function: heap_nested @ 0x101458
unsigned int heap_nested(void **param_1)
{
 void *pvVar1;
 unsigned int local_14;
 pvVar1 = malloc(0x10);
 *param_1 = pvVar1;
 if (*param_1 == (void *)0x0) {
 local_14 = 0xffffffff;
 }
 else {
 *(unsigned int *)*param_1 = 10;
 pvVar1 = malloc(0x10);
 *(void **)((long)*param_1 + 8) = pvVar1;
 if (*(long *)((long)*param_1 + 8) == 0) {
 free(*param_1);
 local_14 = 0xfffffffe;
 }
 else {
 **(unsigned int **)((long)*param_1 + 8) = 0x14;
 *(unsigned long long *)(*(long *)((long)*param_1 + 8) + 8) = 0;
 local_14 = 0;
 }
 }
 return local_14;
}

// Function: linked_list_heap @ 0x101520
unsigned int linked_list_heap(void)
{
 int *piVar1;
 int *piVar2;
 int *local_50;
 int local_44;
 int local_2c;
 int *local_28;
 int *local_20;
 local_20 = (int *)0x0;
 local_28 = (int *)0x0;
 local_2c = 0;
 while( true ) {
 if (4 < local_2c) {
 local_44 = 0;
 for (local_50 = local_20; local_50 != (int *)0x0; local_50 = *(int **)(local_50 + 2)) {
 local_44 = local_44 + *local_50;
 }
 while (local_20 != (int *)0x0) {
 piVar2 = *(int **)(local_20 + 2);
 free(local_20);
 local_20 = piVar2;
 }
 return local_44;
 }
 piVar2 = (int *)malloc(0x10);
 if (piVar2 == (int *)0x0) break;
 *piVar2 = local_2c * 10;
 *(unsigned long long *)(piVar2 + 2) = 0;
 piVar1 = piVar2;
 if (local_20 != (int *)0x0) {
 *(int **)(local_28 + 2) = piVar2;
 piVar1 = local_20;
 }
 local_20 = piVar1;
 local_2c = local_2c + 1;
 local_28 = piVar2;
 }
 while (local_20 != (int *)0x0) {
 piVar2 = *(int **)(local_20 + 2);
 free(local_20);
 local_20 = piVar2;
 }
 return -1;
}

// Function: create_tree_node @ 0x101694
unsigned int * create_tree_node(unsigned int param_1)
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

// Function: tree_heap_traversal @ 0x1016ec
int tree_heap_traversal(void)
{
 int *__ptr;
 unsigned int *puVar1;
 int local_14;
 __ptr = (int *)create_tree_node(10);
 if (__ptr == (int *)0x0) {
 local_14 = -1;
 }
 else {
 puVar1 = create_tree_node(0x14);
 *(unsigned int **)(__ptr + 2) = puVar1;
 puVar1 = create_tree_node(0x1e);
 *(unsigned int **)(__ptr + 4) = puVar1;
 if ((*(long *)(__ptr + 2) == 0) || (*(long *)(__ptr + 4) == 0)) {
 if (*(long *)(__ptr + 2) != 0) {
 free(*(void **)(__ptr + 2));
 }
 if (*(long *)(__ptr + 4) != 0) {
 free(*(void **)(__ptr + 4));
 }
 free(__ptr);
 local_14 = -2;
 }
 else {
 local_14 = *__ptr + **(int **)(__ptr + 2) + **(int **)(__ptr + 4);
 free(*(void **)(__ptr + 2));
 free(*(void **)(__ptr + 4));
 free(__ptr);
 }
 }
 return local_14;
}

// Function: memory_leak @ 0x101818
unsigned int memory_leak(int param_1)
{
 void *pvVar1;
 int local_24;
 unsigned int local_14;
 pvVar1 = malloc((long)param_1 << 2);
 if (pvVar1 == (void *)0x0) {
 local_14 = 0xffffffff;
 }
 else {
 for (local_24 = 0; local_24 < param_1; local_24 = local_24 + 1) {
 *(int *)((long)pvVar1 + (long)local_24 * 4) = local_24;
 }
 local_14 = *(unsigned int *)((long)pvVar1 + (long)(param_1 / 2) * 4);
 }
 return local_14;
}

// Function: dangling_pointer @ 0x1018bc
uint dangling_pointer(void)
{
 uint *__ptr;
 uint local_14;
 __ptr = (uint *)malloc(4);
 if (__ptr == (uint *)0x0) {
 local_14 = 0xffffffff;
 }
 else {
 *__ptr = 0x2a;
 printf("value before free: %d\n",(unsigned long)*__ptr);
 free(__ptr);
 local_14 = *__ptr;
 }
 return local_14;
}

// Function: double_free @ 0x101944
unsigned int double_free(unsigned int *param_1)
{
 unsigned int *__ptr;
 unsigned int local_14;
 if (param_1 == (unsigned int *)0x0) {
 __ptr = (unsigned int *)malloc(4);
 if (__ptr == (unsigned int *)0x0) {
 local_14 = 0xffffffff;
 }
 else {
 *__ptr = 10;
 free(__ptr);
 free(__ptr);
 local_14 = 0xfffffffe;
 }
 }
 else {
 local_14 = *param_1;
 }
 return local_14;
}

// Function: heap_overflow @ 0x1019cc
unsigned int heap_overflow(void)
{
 unsigned int *__ptr;
 int local_24;
 unsigned int local_14;
 __ptr = (unsigned int *)malloc(0x28);
 if (__ptr == (unsigned int *)0x0) {
 local_14 = 0xffffffff;
 }
 else {
 for (local_24 = 0; local_24 < 0xb; local_24 = local_24 + 1) {
 __ptr[local_24] = local_24 * 100;
 }
 local_14 = *__ptr;
 free(__ptr);
 }
 return local_14;
}

// Function: test_heap_memory @ 0x101a70
void test_heap_memory(void)
{
 int iVar1;
 unsigned long uVar2;
 uint local_24;
 uint local_20;
 __pid_t local_1c;
 void *local_18;
 printf((const char *)DAT_0010285e);
 uVar2 = heap_basic(10);
 printf("HEAP-L2-01 (heap_basic): %d\n",uVar2 & 0xffffffff);
 uVar2 = heap_calloc(10);
 iVar1 = printf("HEAP-L2-02 (heap_calloc): %d\n",uVar2 & 0xffffffff);
 uVar2 = heap_realloc();
 printf("HEAP-L2-03 (heap_realloc): %d\n",uVar2 & 0xffffffff);
 uVar2 = heap_array(10);
 printf("HEAP-L2-04 (heap_array): %d\n",uVar2 & 0xffffffff);
 uVar2 = heap_struct(5);
 printf("HEAP-L2-05 (heap_struct): %d\n",uVar2 & 0xffffffff);
 local_18 = (void *)0x0;
 uVar2 = heap_nested(&local_18);
 printf("HEAP-L2-06 (heap_nested): %d\n",uVar2 & 0xffffffff);
 if (local_18 != (void *)0x0) {
 free(*(void **)((long)local_18 + 8));
 free(local_18);
 }
 uVar2 = linked_list_heap();
 iVar1 = printf("HEAP-L3-01 (linked_list_heap): %d\n",uVar2 & 0xffffffff);
 uVar2 = tree_heap_traversal();
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n",uVar2 & 0xffffffff);
 uVar2 = memory_leak(5);
 printf("HEAP-L3-03 (memory_leak): %d\n",uVar2 & 0xffffffff);
 printf("HEAP-L3-04 (dangling_pointer): ");
 local_1c = fork();
 if (local_1c != 0) {
 if (local_1c < 1) {
 perror((const char *)DAT_00102a2d);
 }
 else {
 waitpid(local_1c,(int *)&local_24,0);
 if ((local_24 & 0x7f) == 0) {
 printf((const char *)DAT_001029c7,(unsigned long)(uint)((int)(local_24 & 0xff00) >> 8));
 }
 else if ('\0' < (char)(((byte)local_24 & 0x7f) + 1) >> 1) {
 printf((const char *)DAT_001029ec,(unsigned long)(local_24 & 0x7f));
 }
 }
 return;
 }
 local_20 = dangling_pointer();
 printf((const char *)DAT_001029b7,(unsigned long)local_20);
 exit(0);
}

// Function: global_var_access @ 0x101c70
int global_var_access(void)
{
 global_counter = global_counter + 1;
 return global_counter;
}

// Function: global_var_read @ 0x101c88
int global_var_read(void)
{
 return global_counter << 1;
}

// Function: global_array_access @ 0x101c98
unsigned int global_array_access(int param_1)
{
 unsigned int local_4;
 if ((param_1 < 0) || (9 < param_1)) {
 local_4 = 0xffffffff;
 }
 else {
 local_4 = *(unsigned int *)(&global_array + (long)param_1 * 4);
 }
 return local_4;
}

// Function: static_local @ 0x101cec
int static_local(int param_1)
{
 int local_4;
 if (param_1 == 0) {
 local_4 = static_local_counter + 1;
 }
 else {
 local_4 = 0;
 }
 static_local_counter = local_4;
 return local_4;
}

// Function: call_static_func @ 0x101d38
int call_static_func(unsigned int param_1)
{
 int iVar1;
 iVar1 = static_helper(param_1);
 return iVar1 + 1;
}

// Function: static_helper @ 0x101d60
int static_helper(int param_1)
{
 return param_1 << 1;
}

// Function: access_extern_global @ 0x101d78
int access_extern_global(void)
{
 return extern_global_var + 100;
}

// Function: call_extern_func @ 0x101d8c
void call_extern_func(void)
{
 extern_function(5);
 return;
}

// Function: read_const_data @ 0x101da4
int read_const_data(void)
{
 return (byte)const_string[4] + 0x2a;
}

// Function: access_bss_var @ 0x101db8
unsigned int access_bss_var(void)
{
 return bss_var;
}

// Function: access_bss_buffer @ 0x101dc4
char access_bss_buffer(void)
{
 return bss_buffer;
}

// Function: global_struct_access @ 0x101dd0
int global_struct_access(void)
{
 return global_point + DAT_001140d4;
}

// Function: set_file_static @ 0x101dec
void set_file_static(unsigned int param_1)
{
 file_scope_static = param_1;
 return;
}

// Function: get_file_static @ 0x101e08
unsigned int get_file_static(void)
{
 return file_scope_static;
}

// Function: set_global_callback @ 0x101e14
void set_global_callback(unsigned long long param_1)
{
 global_func_ptr = (void *)param_1;
 return;
}

// Function: call_global_callback @ 0x101e30
unsigned int call_global_callback(unsigned int param_1)
{
 unsigned int local_14;
 if (global_func_ptr == (void *)0x0) {
 local_14 = 0xffffffff;
 }
 else {
 local_14 = ((unsigned int (*)(unsigned int))global_func_ptr)(param_1);
 }
 return local_14;
}

// Function: global_heap_store @ 0x101e84
unsigned int global_heap_store(unsigned int *param_1)
{
 unsigned int local_4;
 global_heap_ptr = param_1;
 if (param_1 == (unsigned int *)0x0) {
 local_4 = 0xffffffff;
 }
 else {
 local_4 = *param_1;
 }
 return local_4;
}

// Function: static_complex_init @ 0x101ed0
int static_complex_init(void)
{
 return complex_init + DAT_001140e4 + DAT_001140ec;
}

// Function: tls_access @ 0x101ef4
int tls_access(int param_1)
{
 long lVar1;
 lVar1 = *tpidr_el0;
 *(int *)(lVar1 + 0x10) = param_1;
 return *(int *)(lVar1 + 0x10) << 1;
}

// Function: init_order_test @ 0x101f20
void init_order_test(void)
{
 unsigned int local_14;
 local_14 = 0x14;
 init_depends_on(&local_14);
 return;
}

// Function: init_depends_on @ 0x101f48
unsigned int init_depends_on(unsigned int *param_1)
{
 if (param_1 != (unsigned int *)0x0) {
 init_depends_on_static_depends = *param_1;
 }
 return init_depends_on_static_depends;
}

// Function: test_static_global @ 0x101f80
int test_static_global(void)
{
 int iVar1;
 unsigned long uVar2;
 unsigned int local_14;
 iVar1 = printf((const char *)DAT_00102a43);
 uVar2 = global_var_access();
 iVar1 = printf("STM-L1-01 (global_var_access): %d\n",uVar2 & 0xffffffff);
 uVar2 = global_var_read();
 printf("STM-L1-01 (global_var_read): %d\n",uVar2 & 0xffffffff);
 uVar2 = global_array_access(0);
 printf("STM-L1-02 (global_array_access): %d\n",uVar2 & 0xffffffff);
 static_local(1);
 uVar2 = static_local(0);
 printf("STM-L1-03 (static_local): %d\n",uVar2 & 0xffffffff);
 uVar2 = static_local(0);
 printf("STM-L1-03 (static_local): %d\n",uVar2 & 0xffffffff);
 uVar2 = call_static_func(5);
 iVar1 = printf("STM-L1-04 (call_static_func): %d\n",uVar2 & 0xffffffff);
 uVar2 = access_extern_global();
 iVar1 = printf("STM-L2-01 (access_extern_global): %d\n",uVar2 & 0xffffffff);
 call_extern_func();
 iVar1 = printf("STM-L2-02 (call_extern_func): %d\n",0);
 uVar2 = read_const_data();
 iVar1 = printf("STM-L2-03 (read_const_data): %d\n",uVar2 & 0xffffffff);
 uVar2 = access_bss_var();
 iVar1 = printf("STM-L2-04 (access_bss_var): %d\n",uVar2 & 0xffffffff);
 uVar2 = access_bss_buffer();
 iVar1 = printf("STM-L2-04 (access_bss_buffer): %d\n",uVar2 & 0xffffffff);
 uVar2 = global_struct_access();
 printf("STM-L2-05 (global_struct_access): %d\n",uVar2 & 0xffffffff);
 set_file_static(0x32);
 uVar2 = get_file_static();
 printf("STM-L2-06 (file_static): %d\n",uVar2 & 0xffffffff);
 set_global_callback((unsigned long long)double_value);
 uVar2 = call_global_callback(5);
 printf("STM-L2-07 (global_func_ptr): %d\n",uVar2 & 0xffffffff);
 local_14 = 100;
 uVar2 = global_heap_store(&local_14);
 iVar1 = printf("STM-L2-08 (global_heap_store): %d\n",uVar2 & 0xffffffff);
 uVar2 = static_complex_init();
 printf("STM-L2-09 (static_complex_init): %d\n",uVar2 & 0xffffffff);
 uVar2 = tls_access(10);
 iVar1 = printf("STM-L3-01 (tls_access): %d\n",uVar2 & 0xffffffff);
 init_order_test();
 iVar1 = printf("STM-L3-02 (init_order_test): %d\n",0);
 return iVar1;
}

// Function: double_value @ 0x102154
unsigned int double_value(unsigned int param_1)
{
 return param_1 << 1;
}

// Function: memop_memset @ 0x10216c
uint memop_memset(byte *param_1,size_t param_2,int param_3)
{
 uint local_14;
 if ((param_1 == (byte *)0x0) || (param_2 == 0)) {
 local_14 = 0xffffffff;
 }
 else {
 memset(param_1,param_3,param_2);
 local_14 = (uint)*param_1;
 }
 return local_14;
}

// Function: memop_memcpy @ 0x1021d8
unsigned int memop_memcpy(void *param_1,void *param_2,unsigned long param_3)
{
 unsigned int local_14;
 if (((param_1 == (void *)0x0) || (param_2 == (void *)0x0)) || (param_3 == 0)) {
 local_14 = 0xffffffff;
 }
 else {
 memcpy(param_1,param_2,param_3);
 local_14 = *(unsigned int *)((long)param_1 + (param_3 / 4 - 1) * 4);
 }
 return local_14;
}

// Function: memop_memmove @ 0x102260
uint memop_memmove(void *param_1,unsigned long param_2)
{
 uint local_14;
 if ((param_1 == (void *)0x0) || (param_2 < 2)) {
 local_14 = 0xffffffff;
 }
 else {
 memmove((void *)((long)param_1 + 1),param_1,param_2 - 1);
 local_14 = (uint)*(byte *)((long)param_1 + 1);
 }
 return local_14;
}

// Function: memop_memcmp @ 0x1022d4
unsigned int memop_memcmp(void *param_1,void *param_2,size_t param_3)
{
 int iVar1;
 unsigned int local_38;
 unsigned int local_14;
 if (((param_1 == (void *)0x0) || (param_2 == (void *)0x0)) || (param_3 == 0)) {
 local_14 = 0;
 }
 else {
 iVar1 = memcmp(param_1,param_2,param_3);
 if (iVar1 < 1) {
 local_38 = 0;
 if (iVar1 < 0) {
 local_38 = 0xffffffff;
 }
 }
 else {
 local_38 = 1;
 }
 local_14 = local_38;
 }
 return local_14;
}

// Function: memop_bzero @ 0x10237c
uint memop_bzero(byte *param_1,size_t param_2)
{
 uint local_14;
 if (param_1 == (byte *)0x0) {
 local_14 = 0xffffffff;
 }
 else {
 memset(param_1,0,param_2);
 local_14 = (uint)*param_1;
 }
 return local_14;
}

// Function: memop_bcopy @ 0x1023d8
uint memop_bcopy(void *param_1,byte *param_2,size_t param_3)
{
 uint local_14;
 if (((param_1 == (void *)0x0) || (param_2 == (byte *)0x0)) || (param_3 == 0)) {
 local_14 = 0xffffffff;
 }
 else {
 bcopy(param_1,param_2,param_3);
 local_14 = (uint)*param_2;
 }
 return local_14;
}

// Function: memop_unaligned_access @ 0x102450
unsigned int memop_unaligned_access(long param_1)
{
 unsigned int local_4;
 if (param_1 == 0) {
 local_4 = 0xffffffff;
 }
 else {
 local_4 = *(unsigned int *)(param_1 + 1);
 }
 return local_4;
}

// Function: memop_memory_barrier @ 0x102494
int memop_memory_barrier(int *param_1)
{
 int local_4;
 if (param_1 == (int *)0x0) {
 local_4 = -1;
 }
 else {
 DataMemoryBarrier(2,3);
 local_4 = *param_1 + *param_1;
 }
 return local_4;
}

// Function: test_memory_op_functions @ 0x1024e8
int test_memory_op_functions(void)
{
 int iVar1;
 unsigned long uVar2;
 unsigned int local_1ac;
 unsigned long long local_1a8;
 unsigned int local_19c;
 unsigned int local_198;
 char auStack_192 [10];
 unsigned long long local_188;
 unsigned int local_180;
 unsigned long long local_178;
 unsigned int local_170;
 undefined7 local_168;
 unsigned int uStack_161;
 unsigned long long local_158;
 unsigned long long local_150;
 unsigned int local_148;
 unsigned long long local_140;
 unsigned long long uStack_138;
 unsigned int local_130;
 char auStack_120 [256];
 printf((const char *)DAT_00102ca6);
 uStack_138 = 0x280000001e;
 local_140 = 0x140000000a;
 local_130 = 0x32;
 local_158 = 0;
 local_150 = 0;
 local_148 = 0;
 uVar2 = memop_memset(auStack_120,10,0x41);
 printf("MEMOP-L2-01: %d\n",uVar2 & 0xffffffff);
 uVar2 = memop_memcpy(&local_158,&local_140,0x14);
 printf("MEMOP-L2-02: %d\n",uVar2 & 0xffffffff);
 local_168 = 0x6f576f6c6c6548;
 ((char*)&uStack_161)[0] = 'r';
 ((char*)&uStack_161)[1] = 'l';
 ((char*)&uStack_161)[2] = 'd';
 ((char*)&uStack_161)[3] = '\0';
 uVar2 = memop_memmove(&local_168,10);
 printf("MEMOP-L2-03: %c\n",uVar2 & 0xffffffff);
 local_178 = 0x200000001;
 local_170 = 3;
 local_188 = 0x200000001;
 local_180 = 4;
 uVar2 = memop_memcmp(&local_178,&local_188,0xc);
 printf("MEMOP-L2-04: %d\n",uVar2 & 0xffffffff);
 uVar2 = memop_bzero(auStack_192,10);
 printf("MEMOP-L2-05: %d\n",uVar2 & 0xffffffff);
 local_198 = 0x4030201;
 local_19c = 0;
 uVar2 = memop_bcopy(&local_198,(byte *)&local_19c,4);
 printf("MEMOP-L2-06: %d\n",uVar2 & 0xffffffff);
 local_1a8 = 0x706050403020100;
 uVar2 = memop_unaligned_access((long)&local_1a8);
 printf("MEMOP-L3-01: 0x%x\n",uVar2 & 0xffffffff);
 local_1ac = 5;
 uVar2 = memop_memory_barrier(&local_1ac);
 iVar1 = printf("MEMOP-L3-02: %d\n",uVar2 & 0xffffffff);
 return iVar1;
}

// Function: main @ 0x1026a8
int main(void)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}

// Function: extern_function @ 0x1026e0
int extern_function(int param_1)
{
 return param_1 * 3;
}

