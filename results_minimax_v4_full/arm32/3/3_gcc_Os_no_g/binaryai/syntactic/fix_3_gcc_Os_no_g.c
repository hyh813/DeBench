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
typedef int bool;
typedef int __pid_t;

// Stub functions for atomic operations (these are external)
extern int __sync_val_compare_and_swap_4(int *ptr, int old_val, int new_val);
extern void __sync_synchronize(void);

// External library functions
extern void *malloc(size_t size);
extern void free(void *ptr);
extern void *realloc(void *ptr, size_t size);
extern void *calloc(size_t nmemb, size_t size);
extern void *memcpy(void *dest, const void *src, size_t n);
extern void *memmove(void *dest, const void *src, size_t n);
extern void *memset(void *s, int c, size_t n);
extern int memcmp(const void *s1, const void *s2, size_t n);
extern int printf(const char *format, ...);
extern void perror(const char *s);
extern void exit(int status);
extern __pid_t waitpid(__pid_t pid, int *stat_loc, int options);
extern __pid_t fork(void);
extern void abort(void);

// Stub for compare-and-swap implementation - function pointer
int (*SUB_ffff0fc0)(int old_val, int new_val, int *ptr);
void (*SUB_ffff0fa0)(void);

// String constants (data)
char DAT_00012784[] = "=== Stack Memory Tests ===";
char DAT_000128cd[] = "=== Heap Memory Tests ===";
char DAT_00012a25[] = "%d\n";
char DAT_00012a35[] = " (child terminated normally)\n";
char DAT_00012a5a[] = " (child terminated by signal)\n";
char DAT_00012a9b[] = "fork";
char DAT_00012aa6[] = "=== Static/Global Memory Tests ===";
char DAT_00012d08[] = "=== Memory Operation Tests ===";
char DAT_00012e14[] = "HelloWorld";

// Global variables
unsigned int global_counter;
unsigned int counter_1;
unsigned int extern_global_var;
unsigned int global_array[10];
unsigned int file_scope_static;
void (*global_func_ptr)(void);
char completed_0;
char *const_string;
unsigned int bss_buffer[10];

// Stack variable for _start
void *stack0x00000004;

// Atomic operation stubs (these are external functions)
int __sync_val_compare_and_swap_4(int *ptr, int old_val, int new_val);
void __sync_synchronize(void);

// Decompiled by BinaryAI
// SHA256: b3d13c2faf0d73d413f2fac138e14cba640f2219ff99f23061008cff6547f279

// Function: _init @ 0x1058c
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn();
 return iVar1;
}



// External function declarations
extern int puts(char *__s);
extern void *malloc(size_t __size);
extern void exit(int __status);
extern void *memset(void *__s, int __c, size_t __n);

// Function: <EXTERNAL>::__printf_chk @ 0x10660
int __printf_chk(int flag, const char *format, ...);

// Function: <EXTERNAL>::fork @ 0x1066c
extern __pid_t fork(void);

// Function: <EXTERNAL>::abort @ 0x10678
void abort(void)
{
 abort();
}

// Function: main @ 0x10684
unsigned int main(void)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}

// Function: _start @ 0x106a0
void _start(unsigned int param_1,unsigned int param_2)
{
 __libc_start_main(main,param_2,&stack0x00000004,0,0);
}

// Function: call_weak_fn @ 0x106e4
void call_weak_fn(void)
{
 __gmon_start__();
 return;
}

// Function: deregister_tm_clones @ 0x10708
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x10734
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x1076c
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: double_value @ 0x10798
int double_value(int param_1)
{
 return param_1 << 1;
}

// Function: local_vars @ 0x107a0
int local_vars(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: local_array @ 0x107ac
int local_array(int param_1)
{
 int *piVar1;
 int *piVar2;
 int iVar3;
 int iVar4;
 int aiStack_34 [5];
 unsigned int local_20;
 int local_c;
 local_c = 0;
 iVar4 = 0;
 iVar3 = 0;
 piVar1 = aiStack_34;
 do {
 iVar3 = iVar3 + 1;
 piVar2 = piVar1 + 1;
 *piVar1 = iVar4;
 iVar4 = iVar4 + param_1;
 piVar1 = piVar2;
 } while (iVar3 != 10);
 local_20 = (unsigned int)iVar4;
 if (local_c != 0) {
 __stack_chk_fail();
 }
 return (int)local_20;
}

// Function: local_struct @ 0x10810
int local_struct(int param_1)
{
 return param_1 * 3;
}

// Function: address_of_local @ 0x10818
unsigned int address_of_local(unsigned int *param_1)
{
 *param_1 = 0x2a;
 return 0x2a;
}

// Function: address_of_array @ 0x10828
int address_of_array(int *param_1)
{
 return *param_1 << 1;
}

// Function: large_stack_frame @ 0x10834
void large_stack_frame(unsigned int param_1,unsigned int param_2)
{
 char *puVar1;
 int iVar2;
 char auStack_80c [1024];
 char local_40c;
 int local_c;
 local_c = 0;
 iVar2 = 0;
 puVar1 = auStack_80c;
 do {
 *puVar1 = (char)iVar2;
 iVar2 = iVar2 + 1;
 puVar1 = puVar1 + 1;
 } while (iVar2 != 0x800);
 if (local_c != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: vla_stack @ 0x10898
void vla_stack(int param_1,int param_2)
{
 int iVar1;
 unsigned int uVar2;
 int iVar3;
 int aiStack_10 [2];
 aiStack_10[1] = 0;
 if (param_1 - 1U < 1000) {
 iVar1 = -(param_1 * 4 + 7U & 0xfffffff8);
 iVar3 = 0;
 do {
 param_2 = iVar3 << 1;
 *(int *)((int)aiStack_10 + iVar3 * 4 + iVar1) = param_2;
 iVar3 = iVar3 + 1;
 } while (param_1 != iVar3);
 uVar2 = *(unsigned int *)((int)aiStack_10 + (param_1 >> 1) * 4 + iVar1);
 }
 else {
 uVar2 = 0xffffffff;
 }
 if (aiStack_10[1] == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: alloca_usage @ 0x10920
void alloca_usage(int param_1,int param_2)
{
 int iVar1;
 unsigned int uVar2;
 int iVar3;
 int aiStack_10 [2];
 aiStack_10[1] = 0;
 if (param_1 < 1) {
 uVar2 = 0xffffffff;
 }
 else {
 iVar1 = -(param_1 * 4 + 7U & 0xfffffff8);
 iVar3 = 0;
 do {
 param_2 = iVar3 * 3;
 *(int *)((int)aiStack_10 + iVar3 * 4 + iVar1) = param_2;
 iVar3 = iVar3 + 1;
 } while (param_1 != iVar3);
 uVar2 = *(unsigned int *)((int)aiStack_10 + (param_1 >> 1) * 4 + iVar1);
 }
 if (aiStack_10[1] == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: stack_alias @ 0x109a4
unsigned int stack_alias(void)
{
 return 0x14;
}

// Function: test_stack_memory @ 0x109ac
void test_stack_memory(void)
{
 unsigned int uVar1;
 puts(&DAT_00012784);
 __printf_chk(1,"MEM-L1-01 (local_vars): %d\n",0x14);
 uVar1 = local_array(2);
 __printf_chk(1,"MEM-L1-02 (local_array): %d\n",uVar1);
 __printf_chk(1,"MEM-L1-03 (local_struct): %d\n",0xf);
 __printf_chk(1,"MEM-L1-04 (address_of_local): %d\n",0x2a);
 __printf_chk(1,"MEM-L1-05 (address_of_array): %d\n",2);
 (void)large_stack_frame(0,0);
 __printf_chk(1,"MEM-L2-01 (large_stack_frame): done\n");
 (void)vla_stack(10,0);
 __printf_chk(1,"MEM-L2-02 (vla_stack): done\n");
 (void)alloca_usage(10,0);
 __printf_chk(1,"MEM-L2-03 (alloca_usage): done\n");
 __printf_chk(1,"MEM-L2-04 (stack_alias): %d\n",0x14);
 return;
}

// Function: heap_basic @ 0x10a90
unsigned int heap_basic(int param_1)
{
 void *__ptr;
 int iVar1;
 unsigned int uVar2;
 __ptr = malloc(param_1 << 2);
 if (__ptr == (void *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 for (iVar1 = 0; iVar1 < param_1; iVar1 = iVar1 + 1) {
 *(int *)((int)__ptr + iVar1 * 4) = iVar1 << 1;
 }
 uVar2 = *(unsigned int *)((int)__ptr + (param_1 / 2) * 4);
 free(__ptr);
 }
 return uVar2;
}

// Function: heap_calloc @ 0x10ae0
int heap_calloc(size_t param_1)
{
 void *__ptr;
 int iVar1;
 int iVar2;
 __ptr = calloc(param_1,4);
 if (__ptr == (void *)0x0) {
 iVar2 = -1;
 }
 else {
 iVar1 = 0;
 iVar2 = iVar1;
 for (; iVar1 < (int)param_1; iVar1 = iVar1 + 1) {
 iVar2 = iVar2 + *(int *)((int)__ptr + iVar1 * 4);
 }
 free(__ptr);
 }
 return iVar2;
}

// Function: heap_realloc @ 0x10b28
unsigned int heap_realloc(void)
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
 if (*(int *)((int)__ptr_00 + 8) == 3) {
 uVar1 = 0x32;
 }
 else {
 uVar1 = 0xfffffffd;
 }
 free(__ptr_00);
 }
 }
 return uVar1;
}

// Function: heap_array @ 0x10b98
unsigned int heap_array(int param_1)
{
 void *__ptr;
 int iVar1;
 unsigned int uVar2;
 __ptr = malloc(param_1 << 2);
 if (__ptr == (void *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 for (iVar1 = 0; iVar1 < param_1; iVar1 = iVar1 + 1) {
 *(int *)((int)__ptr + iVar1 * 4) = iVar1 * 3;
 }
 uVar2 = *(unsigned int *)((int)__ptr + (param_1 / 2) * 4);
 free(__ptr);
 }
 return uVar2;
}

// Function: heap_struct @ 0x10be8
int heap_struct(int param_1)
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

// Function: heap_nested @ 0x10c14
unsigned int heap_nested(unsigned int *param_1)
{
 unsigned int *__ptr;
 unsigned int *puVar1;
 __ptr = (unsigned int *)malloc(8);
 *param_1 = __ptr;
 if (__ptr == (unsigned int *)0x0) {
 return 0xffffffff;
 }
 *__ptr = 10;
 puVar1 = (unsigned int *)malloc(8);
 __ptr[1] = puVar1;
 if (puVar1 == (unsigned int *)0x0) {
 free(__ptr);
 return 0xfffffffe;
 }
 *puVar1 = 0x14;
 puVar1[1] = 0;
 return 0;
}

// Function: linked_list_heap @ 0x10c80
int linked_list_heap(void)
{
 int *piVar1;
 int *piVar2;
 int iVar3;
 int *__ptr;
 int iVar4;
 int *piVar5;
 iVar4 = 0;
 __ptr = (int *)0x0;
 piVar5 = (int *)0x0;
 do {
 piVar2 = (int *)malloc(8);
 if (piVar2 == (int *)0x0) {
 while (__ptr != (int *)0x0) {
 piVar5 = (int *)__ptr[1];
 free(__ptr);
 __ptr = piVar5;
 }
 return -1;
 }
 *piVar2 = iVar4;
 piVar2[1] = 0;
 iVar4 = iVar4 + 10;
 piVar1 = piVar2;
 if (__ptr != (int *)0x0) {
 piVar5[1] = (int)piVar2;
 piVar1 = __ptr;
 }
 __ptr = piVar1;
 piVar5 = piVar2;
 } while (iVar4 != 0x32);
 iVar4 = 0;
 piVar5 = __ptr;
 do {
 iVar3 = *piVar5;
 piVar5 = (int *)piVar5[1];
 iVar4 = iVar4 + iVar3;
 } while (piVar5 != (int *)0x0);
 do {
 piVar5 = (int *)__ptr[1];
 free(__ptr);
 __ptr = piVar5;
 } while (piVar5 != (int *)0x0);
 return iVar4;
}

// Function: create_tree_node @ 0x10d20
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

// Function: tree_heap_traversal @ 0x10d48
int tree_heap_traversal(void)
{
 int *__ptr;
 int *piVar1;
 int *__ptr_00;
 int iVar2;
 int iVar3;
 int iVar4;
 __ptr = (int *)create_tree_node(10);
 if (__ptr == (int *)0x0) {
 iVar3 = -1;
 }
 else {
 iVar3 = create_tree_node(0x14);
 __ptr[1] = iVar3;
 piVar1 = (int *)create_tree_node(0x1e);
 __ptr[2] = (int)piVar1;
 __ptr_00 = (int *)__ptr[1];
 if (__ptr_00 != (int *)0x0) {
 if (piVar1 != (int *)0x0) {
 iVar3 = *__ptr_00;
 iVar4 = *__ptr;
 iVar2 = *piVar1;
 free(__ptr_00);
 free((void *)__ptr[2]);
 free(__ptr);
 return iVar4 + iVar3 + iVar2;
 }
 free(__ptr_00);
 }
 if ((void *)__ptr[2] != (void *)0x0) {
 free((void *)__ptr[2]);
 }
 free(__ptr);
 iVar3 = -2;
 }
 return iVar3;
}

// Function: memory_leak @ 0x10de4
unsigned int memory_leak(int param_1)
{
 void *pvVar1;
 int iVar2;
 pvVar1 = malloc(param_1 << 2);
 if (pvVar1 == (void *)0x0) {
 return 0xffffffff;
 }
 for (iVar2 = 0; iVar2 < param_1; iVar2 = iVar2 + 1) {
 *(int *)((int)pvVar1 + iVar2 * 4) = iVar2;
 }
 return *(unsigned int *)((int)pvVar1 + (param_1 / 2) * 4);
}

// Function: dangling_pointer @ 0x10e28
unsigned int dangling_pointer(void)
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

// Function: double_free @ 0x10e68
unsigned int double_free(unsigned int *param_1)
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

// Function: heap_overflow @ 0x10ea8
unsigned int heap_overflow(void)
{
 unsigned int *__ptr;
 int *piVar1;
 int iVar2;
 unsigned int uVar3;
 __ptr = (unsigned int *)malloc(0x28);
 if (__ptr == (unsigned int *)0x0) {
 uVar3 = 0xffffffff;
 }
 else {
 iVar2 = 0;
 piVar1 = __ptr + -1;
 do {
 piVar1 = piVar1 + 1;
 *piVar1 = iVar2;
 iVar2 = iVar2 + 100;
 } while (iVar2 != 0x44c);
 uVar3 = *__ptr;
 free(__ptr);
 }
 return uVar3;
}

// Function: test_heap_memory @ 0x10ef0
void test_heap_memory(void)
{
 unsigned int uVar1;
 __pid_t __pid;
 char *puVar2;
 uint uVar3;
 void *local_14;
 uint local_10;
 int local_c;
 local_c = 0;
 local_14 = (void *)0;
 local_10 = 0;
 puts(&DAT_000128cd);
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
 local_14 = (void *)0x0;
 uVar1 = heap_nested(&local_14);
 __printf_chk(1,"HEAP-L2-06 (heap_nested): %d\n",uVar1);
 if (local_14 != (void *)0x0) {
 free(*(void **)((int)local_14 + 4));
 free(local_14);
 }
 linked_list_heap();
 uVar1 = tree_heap_traversal();
 __printf_chk(1,"HEAP-L3-02 (tree_heap_traversal): %d\n",uVar1);
 uVar1 = memory_leak(5);
 __printf_chk(1,"HEAP-L3-03 (memory_leak): %d\n",uVar1);
 __printf_chk(1,"HEAP-L3-04 (dangling_pointer): ");
 __pid = fork();
 if (__pid == 0) {
 uVar1 = dangling_pointer();
 __printf_chk(1,&DAT_00012a25,uVar1);
 exit(0);
 }
 if (__pid < 1) {
 perror(&DAT_00012a9b);
 }
 else {
 waitpid(__pid,(int *)&local_10,0);
 uVar3 = local_10 & 0x7f;
 if (uVar3 == 0) {
 puVar2 = &DAT_00012a35;
 uVar3 = (int)local_10 >> 8 & 0xff;
 }
 else {
 if ((int)((uVar3 + 1) * 0x1000000) < 0x2000000) goto LAB_00011060;
 puVar2 = &DAT_00012a5a;
 }
 __printf_chk(1,puVar2,uVar3);
 }
LAB_00011060:
 if (local_c != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: global_var_access @ 0x110e8
void global_var_access(void)
{
 global_counter = global_counter + 1;
 return;
}

// Function: global_var_read @ 0x11100
int global_var_read(void)
{
 return global_counter << 1;
}

// Function: global_array_access @ 0x11114
unsigned int global_array_access(uint param_1)
{
 unsigned int uVar1;
 if (param_1 < 10) {
 uVar1 = *(unsigned int *)(&global_array + param_1 * 4);
 }
 else {
 uVar1 = 0xffffffff;
 }
 return uVar1;
}

// Function: static_local @ 0x1112c
void static_local(int param_1)
{
 if (param_1 == 0) {
 counter_1 = counter_1 + 1;
 }
 else {
 counter_1 = 0;
 }
 return;
}

// Function: call_static_func @ 0x1114c
int call_static_func(int param_1)
{
 return param_1 * 2 + 1;
}

// Function: access_extern_global @ 0x11158
int access_extern_global(void)
{
 return extern_global_var + 100;
}

// Function: call_extern_func @ 0x1116c
int call_extern_func(void)
{
 return extern_function(5);
}

// Function: read_const_data @ 0x11174
int read_const_data(void)
{
 return *(byte *)(const_string + 4) + 0x2a;
}

// Function: access_bss_var @ 0x1118c
unsigned int access_bss_var(void)
{
 return 0;
}

// Function: access_bss_buffer @ 0x11194
unsigned int access_bss_buffer(void)
{
 return 0;
}

// Function: global_struct_access @ 0x1119c
unsigned int global_struct_access(void)
{
 return 0x1e;
}

// Function: set_file_static @ 0x111a4
void set_file_static(unsigned int param_1)
{
 file_scope_static = param_1;
 return;
}

// Function: get_file_static @ 0x111b4
unsigned int get_file_static(void)
{
 return file_scope_static;
}

// Function: set_global_callback @ 0x111c4
void set_global_callback(unsigned int param_1)
{
 global_func_ptr = param_1;
 return;
}

// Function: call_global_callback @ 0x111d4
unsigned int call_global_callback(void)
{
 unsigned int uVar1;
 if (global_func_ptr != (void *)0x0) {
 uVar1 = (*global_func_ptr)();
 return uVar1;
 }
 return 0xffffffff;
}

// Function: global_heap_store @ 0x111f4
unsigned int global_heap_store(unsigned int *param_1)
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

// Function: static_complex_init @ 0x11204
unsigned int static_complex_init(void)
{
 return 0xf;
}

// Function: tls_access @ 0x1120c
int tls_access(int param_1)
{
 return param_1 << 1;
}

// Function: init_order_test @ 0x11214
unsigned int init_order_test(void)
{
 return 0x14;
}

// Function: test_static_global @ 0x1121c
void test_static_global(void)
{
 unsigned int uVar1;
 puts(&DAT_00012aa6);
 uVar1 = global_var_access();
 __printf_chk(1,"STM-L1-01 (global_var_access): %d\n",uVar1);
 __printf_chk(1,"STM-L1-01 (global_var_read): %d\n",global_counter << 1);
 __printf_chk(1,"STM-L1-02 (global_array_access): %d\n",5);
 counter_1 = 1;
 __printf_chk(1,"STM-L1-03 (static_local): %d\n",1);
 counter_1 = counter_1 + 1;
 __printf_chk(1,"STM-L1-03 (static_local): %d\n",counter_1);
 __printf_chk(1,"STM-L1-04 (call_static_func): %d\n",0xb);
 __printf_chk(1,"STM-L2-01 (access_extern_global): %d\n",extern_global_var + 100);
 call_extern_func();
 __printf_chk(1,"STM-L2-02 (call_extern_func): done\n");
 uVar1 = read_const_data();
 __printf_chk(1,"STM-L2-03 (read_const_data): %d\n",uVar1);
 __printf_chk(1,"STM-L2-04 (access_bss_var): %d\n",0);
 __printf_chk(1,"STM-L2-04 (access_bss_buffer): %d\n",0);
 uVar1 = global_struct_access();
 __printf_chk(1,"STM-L2-05 (global_struct_access): %d\n",uVar1);
 file_scope_static = 0x32;
 __printf_chk(1,"STM-L2-06 (file_static): %d\n",file_scope_static);
 global_func_ptr = double_value;
 uVar1 = call_global_callback();
 __printf_chk(1,"STM-L2-07 (global_func_ptr): %d\n",uVar1);
 __printf_chk(1,"STM-L2-08 (global_heap_store): %d\n",100);
 uVar1 = static_complex_init();
 __printf_chk(1,"STM-L2-09 (static_complex_init): %d\n",uVar1);
 __printf_chk(1,"STM-L3-01 (tls_access): %d\n",0x14);
 __printf_chk(1,"STM-L3-02 (init_order_test): %d\n",0x14);
 return;
}

// Function: memop_memset @ 0x113f4
uint memop_memset(byte *param_1,size_t param_2,int param_3)
{
 if (param_2 != 0 && param_1 != (byte *)0x0) {
 memset(param_1,param_3,param_2);
 return (uint)*param_1;
 }
 return 0xffffffff;
}

// Function: memop_memcpy @ 0x11428
unsigned int memop_memcpy(void *param_1,void *param_2,size_t param_3)
{
 if (param_1 == (void *)0x0 || (param_3 == 0 || param_2 == (void *)0x0)) {
 return 0xffffffff;
 }
 memcpy(param_1,param_2,param_3);
 return *(unsigned int *)((int)param_1 + ((param_3 & 0xfffffffc) - 4));
}

// Function: memop_memmove @ 0x11470
uint memop_memmove(void *param_1,int param_2)
{
 if ((param_1 == (void *)0x0 || param_2 != 0) && (param_1 != (void *)0x0 && param_2 != 1)) {
 memmove((void *)((int)param_1 + 1),param_1,param_2 - 1);
 return (uint)*(byte *)((int)param_1 + 1);
 }
 return 0xffffffff;
}

// Function: memop_memcmp @ 0x114a4
unsigned int memop_memcmp(void *param_1,void *param_2,size_t param_3)
{
 int iVar1;
 unsigned int uVar2;
 if (param_1 == (void *)0x0 || (param_3 == 0 || param_2 == (void *)0x0)) {
 return 0;
 }
 iVar1 = memcmp(param_1,param_2,param_3);
 if (0 < iVar1) {
 return 1;
 }
 if (iVar1 == 0) {
 uVar2 = 0;
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: memop_bzero @ 0x114f0
uint memop_bzero(byte *param_1,size_t param_2)
{
 if (param_1 != (byte *)0x0) {
 memset(param_1,0,param_2);
 return (uint)*param_1;
 }
 return 0xffffffff;
}

// Function: memop_bcopy @ 0x11518
uint memop_bcopy(void *param_1,void *param_2,size_t param_3)
{
 byte *pbVar1;
 if (param_1 == (void *)0x0 || (param_3 == 0 || param_2 == (void *)0x0)) {
 return 0xffffffff;
 }
 pbVar1 = (byte *)memmove(param_2,param_1,param_3);
 return (uint)*pbVar1;
}

// Function: memop_unaligned_access @ 0x1155c
void memop_unaligned_access(int param_1,unsigned int param_2,unsigned int param_3)
{
 int iVar1;
 unsigned int extraout_r1;
 unsigned int uVar2;
 int local_10;
 int local_c;
 unsigned int uStack_8;
 local_c = 0;
 local_10 = param_1;
 uStack_8 = param_3;
 if (param_1 == 0) {
 uVar2 = 0;
 iVar1 = -1;
 }
 else {
 memcpy(&local_10,(void *)(param_1 + 1),4);
 iVar1 = local_10;
 uVar2 = extraout_r1;
 }
 if (local_c == 0) {
 return;
 }
 __stack_chk_fail(iVar1,uVar2,local_c,0);
}

// Function: memop_memory_barrier @ 0x115b8
int memop_memory_barrier(int *param_1)
{
 int iVar1;
 if (param_1 != (int *)0x0) {
 iVar1 = *param_1;
 __sync_synchronize();
 return *param_1 + iVar1;
 }
 return -1;
}

// Function: test_memory_op_functions @ 0x115e0
void test_memory_op_functions(void)
{
 unsigned int uVar1;
 unsigned int local_180;
 unsigned int local_17c;
 unsigned int uStack_178;
 unsigned int uStack_174;
 unsigned int local_170;
 unsigned int uStack_16c;
 unsigned int uStack_168;
 unsigned int local_164;
 unsigned int uStack_160;
 unsigned int uStack_15c;
 unsigned int uStack_158;
 unsigned int local_154;
 char auStack_150 [20];
 unsigned int local_13c;
 unsigned int local_138;
 char auStack_134 [8];
 char auStack_12c [12];
 char auStack_120 [12];
 char auStack_114 [256];
 int local_14;
 local_14 = 0;
 puts(&DAT_00012d08);
 local_164 = 10;
 uStack_160 = 0x14;
 uStack_15c = 0x1e;
 uStack_158 = 0x28;
 local_154 = 0x32;
 memset(auStack_150,0,0x14);
 uVar1 = memop_memset(auStack_114,10,0x41);
 __printf_chk(1,"MEMOP-L2-01: %d\n",uVar1);
 uVar1 = memop_memcpy(auStack_150,&local_164,0x14);
 __printf_chk(1,"MEMOP-L2-02: %d\n",uVar1);
 memcpy(auStack_120,"HelloWorld",0xb);
 uVar1 = memop_memmove(auStack_120,10);
 __printf_chk(1,"MEMOP-L2-03: %c\n",uVar1);
 local_17c = 1;
 uStack_178 = 2;
 uStack_174 = 3;
 local_170 = 1;
 uStack_16c = 2;
 uStack_168 = 4;
 memcmp(&local_17c,&local_170,0xc);
 __printf_chk(1,"MEMOP-L2-04: %d\n",0);
 uVar1 = memop_bzero(auStack_12c,10);
 __printf_chk(1,"MEMOP-L2-05: %d\n",uVar1);
 local_13c = 0x4030201;
 local_138 = 0;
 uVar1 = memop_bcopy(&local_13c,&local_138,4);
 __printf_chk(1,"MEMOP-L2-06: %d\n",uVar1);
 memcpy(auStack_134,&DAT_00012e14,8);
 uVar1 = memop_unaligned_access(0,0,0);
 __printf_chk(1,"MEMOP-L3-01: 0x%x\n",uVar1);
 local_180 = 5;
 uVar1 = memop_memory_barrier(&local_180);
 __printf_chk(1,"MEMOP-L3-02: %d\n",uVar1);
 if (local_14 != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: extern_function @ 0x117d4
int extern_function(int param_1)
{
 return param_1 * 3;
}

// Function: __sync_fetch_and_add_4 @ 0x117dc
int __sync_fetch_and_add_4(int *param_1,int param_2)
{
 int iVar1;
 int iVar2;
 do {
 iVar2 = *param_1;
 iVar1 = (*SUB_ffff0fc0)(iVar2,iVar2 + param_2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}

// Function: __sync_fetch_and_sub_4 @ 0x11814
int __sync_fetch_and_sub_4(int *param_1,int param_2)
{
 int iVar1;
 int iVar2;
 do {
 iVar2 = *param_1;
 iVar1 = (*SUB_ffff0fc0)(iVar2,iVar2 - param_2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}

// Function: __sync_fetch_and_or_4 @ 0x1184c
uint __sync_fetch_and_or_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = *param_1;
 iVar1 = (*SUB_ffff0fc0)(uVar2,uVar2 | param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_fetch_and_and_4 @ 0x11884
uint __sync_fetch_and_and_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = *param_1;
 iVar1 = (*SUB_ffff0fc0)(uVar2,uVar2 & param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_fetch_and_xor_4 @ 0x118bc
uint __sync_fetch_and_xor_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = *param_1;
 iVar1 = (*SUB_ffff0fc0)(uVar2,uVar2 ^ param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_fetch_and_nand_4 @ 0x118f4
uint __sync_fetch_and_nand_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = *param_1;
 iVar1 = (*SUB_ffff0fc0)(uVar2,~(uVar2 & param_2),param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_fetch_and_add_2 @ 0x11930
int __sync_fetch_and_add_2(uint param_1,int param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = (*SUB_ffff0fc0)
 (uVar2,(uVar2 ^ uVar1 + param_2 << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}

// Function: __sync_fetch_and_sub_2 @ 0x11990
int __sync_fetch_and_sub_2(uint param_1,int param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = (*SUB_ffff0fc0)
 (uVar2,(uVar2 ^ uVar1 - param_2 << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}

// Function: __sync_fetch_and_or_2 @ 0x119f0
int __sync_fetch_and_or_2(uint param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = (*SUB_ffff0fc0)
 (uVar2,(uVar2 ^ (uVar1 | param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}

// Function: __sync_fetch_and_and_2 @ 0x11a50
int __sync_fetch_and_and_2(uint param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = (*SUB_ffff0fc0)
 (uVar2,(uVar2 ^ (uVar1 & param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}

// Function: __sync_fetch_and_xor_2 @ 0x11ab0
int __sync_fetch_and_xor_2(uint param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = (*SUB_ffff0fc0)
 (uVar2,(uVar2 ^ (uVar1 ^ param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}

// Function: __sync_fetch_and_nand_2 @ 0x11b10
int __sync_fetch_and_nand_2(uint param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = (*SUB_ffff0fc0)
 (uVar2,(uVar2 ^ ~(uVar1 & param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}

// Function: __sync_fetch_and_add_1 @ 0x11b74
int __sync_fetch_and_add_1(uint param_1,int param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = (*SUB_ffff0fc0)
 (uVar2,(uVar2 ^ uVar1 + param_2 << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}

// Function: __sync_fetch_and_sub_1 @ 0x11bd0
int __sync_fetch_and_sub_1(uint param_1,int param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = (*SUB_ffff0fc0)
 (uVar2,(uVar2 ^ uVar1 - param_2 << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}

// Function: __sync_fetch_and_or_1 @ 0x11c2c
int __sync_fetch_and_or_1(uint param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = (*SUB_ffff0fc0)
 (uVar2,(uVar2 ^ (uVar1 | param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}

// Function: __sync_fetch_and_and_1 @ 0x11c88
int __sync_fetch_and_and_1(uint param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = (*SUB_ffff0fc0)
 (uVar2,(uVar2 ^ (uVar1 & param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}

// Function: __sync_fetch_and_xor_1 @ 0x11ce4
int __sync_fetch_and_xor_1(uint param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = (*SUB_ffff0fc0)
 (uVar2,(uVar2 ^ (uVar1 ^ param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}

// Function: __sync_fetch_and_nand_1 @ 0x11d40
int __sync_fetch_and_nand_1(uint param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = (*SUB_ffff0fc0)
 (uVar2,(uVar2 ^ ~(uVar1 & param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}

// Function: __sync_add_and_fetch_4 @ 0x11da0
int __sync_add_and_fetch_4(int *param_1,int param_2)
{
 int iVar1;
 int iVar2;
 do {
 iVar2 = *param_1 + param_2;
 iVar1 = (*SUB_ffff0fc0)(*param_1,iVar2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}

// Function: __sync_sub_and_fetch_4 @ 0x11dd8
int __sync_sub_and_fetch_4(int *param_1,int param_2)
{
 int iVar1;
 int iVar2;
 do {
 iVar2 = *param_1 - param_2;
 iVar1 = (*SUB_ffff0fc0)(*param_1,iVar2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}

// Function: __sync_or_and_fetch_4 @ 0x11e10
uint __sync_or_and_fetch_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = *param_1 | param_2;
 iVar1 = (*SUB_ffff0fc0)(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_and_and_fetch_4 @ 0x11e48
uint __sync_and_and_fetch_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = *param_1 & param_2;
 iVar1 = (*SUB_ffff0fc0)(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_xor_and_fetch_4 @ 0x11e80
uint __sync_xor_and_fetch_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = *param_1 ^ param_2;
 iVar1 = (*SUB_ffff0fc0)(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_nand_and_fetch_4 @ 0x11eb8
uint __sync_nand_and_fetch_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = ~(*param_1 & param_2);
 iVar1 = (*SUB_ffff0fc0)(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_add_and_fetch_2 @ 0x11ef4
int __sync_add_and_fetch_2(uint param_1,int param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xffff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ param_2 + ((uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = (*SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_sub_and_fetch_2 @ 0x11f5c
int __sync_sub_and_fetch_2(uint param_1,int param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xffff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ ((uVar1 & uVar2) >> iVar5) - param_2 << iVar5) & uVar1 ^ uVar2;
 iVar3 = (*SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_or_and_fetch_2 @ 0x11fc4
int __sync_or_and_fetch_2(uint param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xffff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ (param_2 | (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = (*SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_and_and_fetch_2 @ 0x1202c
int __sync_and_and_fetch_2(uint param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xffff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ (param_2 & (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = (*SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_xor_and_fetch_2 @ 0x12094
int __sync_xor_and_fetch_2(uint param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xffff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ (param_2 ^ (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = (*SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_nand_and_fetch_2 @ 0x120fc
int __sync_nand_and_fetch_2(uint param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xffff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ ~(param_2 & (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = (*SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_add_and_fetch_1 @ 0x12168
int __sync_add_and_fetch_1(uint param_1,int param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ param_2 + ((uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = (*SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_sub_and_fetch_1 @ 0x121cc
int __sync_sub_and_fetch_1(uint param_1,int param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ ((uVar1 & uVar2) >> iVar5) - param_2 << iVar5) & uVar1 ^ uVar2;
 iVar3 = (*SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_or_and_fetch_1 @ 0x12230
int __sync_or_and_fetch_1(uint param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ (param_2 | (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = (*SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_and_and_fetch_1 @ 0x12294
int __sync_and_and_fetch_1(uint param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ (param_2 & (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = (*SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_xor_and_fetch_1 @ 0x122f8
int __sync_xor_and_fetch_1(uint param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ (param_2 ^ (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = (*SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_nand_and_fetch_1 @ 0x1235c
int __sync_nand_and_fetch_1(uint param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ ~(param_2 & (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = (*SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_val_compare_and_swap_4 @ 0x123c4
int __sync_val_compare_and_swap_4(int *param_1, int param_2, int param_3)
{
 int iVar1;
 do {
 if (*param_1 != param_2) {
 return *param_1;
 }
 iVar1 = (*SUB_ffff0fc0)(param_2,param_3,param_1);
 } while (iVar1 != 0);
 return param_2;
}

// Function: __sync_val_compare_and_swap_2 @ 0x12414
uint __sync_val_compare_and_swap_2(uint param_1,uint param_2,int param_3)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 if (uVar1 != (param_2 & 0xffff)) {
 return (int)(short)uVar1;
 }
 iVar3 = (*SUB_ffff0fc0)
 (uVar2,(param_3 << iVar4 ^ uVar2) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return param_2;
}

// Function: __sync_val_compare_and_swap_1 @ 0x1248c
uint __sync_val_compare_and_swap_1(uint param_1,uint param_2,int param_3)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 if (uVar1 != (param_2 & 0xff)) {
 return (int)(char)uVar1;
 }
 iVar3 = (*SUB_ffff0fc0)
 (uVar2,(param_3 << iVar4 ^ uVar2) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return param_2;
}

// Function: __sync_bool_compare_and_swap_4 @ 0x12500
bool __sync_bool_compare_and_swap_4(unsigned int param_1,unsigned int param_2,unsigned int param_3)
{
 int iVar1;
 iVar1 = (*SUB_ffff0fc0)(param_2,param_3,param_1);
 return iVar1 == 0;
}

// Function: __sync_bool_compare_and_swap_2 @ 0x1252c
bool __sync_bool_compare_and_swap_2(unsigned int param_1, unsigned int param_2, unsigned int param_3)
{
 int iVar1;
 iVar1 = __sync_val_compare_and_swap_2(param_1, param_2, param_3);
 return param_2 == iVar1;
}

// Function: __sync_bool_compare_and_swap_1 @ 0x12548
bool __sync_bool_compare_and_swap_1(unsigned int param_1, unsigned int param_2, unsigned int param_3)
{
 int iVar1;
 iVar1 = __sync_val_compare_and_swap_1(param_1, param_2, param_3);
 return param_2 == iVar1;
}

// Function: __sync_lock_test_and_set_4 @ 0x12570
unsigned int __sync_lock_test_and_set_4(unsigned int *param_1,unsigned int param_2)
{
 int iVar1;
 unsigned int uVar2;
 do {
 uVar2 = *param_1;
 iVar1 = (*SUB_ffff0fc0)(uVar2,param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_lock_test_and_set_2 @ 0x125a8
int __sync_lock_test_and_set_2(uint param_1,int param_2)
{
 int iVar1;
 uint uVar2;
 int iVar3;
 iVar3 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 iVar1 = (*SUB_ffff0fc0)
 (uVar2,(param_2 << iVar3 ^ uVar2) & 0xffff << iVar3 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar1 != 0);
 return (int)(short)((0xffff << iVar3 & uVar2) >> iVar3);
}

// Function: __sync_lock_test_and_set_1 @ 0x12608
int __sync_lock_test_and_set_1(uint param_1,int param_2)
{
 int iVar1;
 uint uVar2;
 int iVar3;
 iVar3 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 iVar1 = (*SUB_ffff0fc0)
 (uVar2,(param_2 << iVar3 ^ uVar2) & 0xff << iVar3 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar1 != 0);
 return (int)(char)((0xff << iVar3 & uVar2) >> iVar3);
}

// Function: __sync_lock_release_8 @ 0x12664
void __sync_lock_release_8(unsigned int *param_1)
{
 (*SUB_ffff0fa0)();
 *param_1 = 0;
 param_1[1] = 0;
 return;
}

// Function: __sync_lock_release_4 @ 0x12688
void __sync_lock_release_4(unsigned int *param_1)
{
 (*SUB_ffff0fa0)();
 *param_1 = 0;
 return;
}

// Function: __sync_lock_release_2 @ 0x126a8
void __sync_lock_release_2(unsigned short *param_1)
{
 (*SUB_ffff0fa0)();
 *param_1 = 0;
 return;
}

// Function: __sync_lock_release_1 @ 0x126c8
void __sync_lock_release_1(char *param_1)
{
 (*SUB_ffff0fa0)();
 *param_1 = 0;
 return;
}

// Function: _fini @ 0x126e8
void _fini(void)
{
 return;
}

