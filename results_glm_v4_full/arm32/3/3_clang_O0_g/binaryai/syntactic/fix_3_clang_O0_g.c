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
typedef int pid_t;
typedef unsigned char byte;
typedef unsigned int uint;
typedef int bool;
typedef unsigned long long ulonglong;
typedef unsigned int __pid_t;

/* Boolean constants */
#ifndef true
#define true 1
#endif
#ifndef false
#define false 0
#endif

/* Missing variable declarations */
extern char completed_0;
extern void *__dso_handle;
extern int global_counter;
extern unsigned int global_array[10];
extern int static_local_counter;
extern int extern_global_var;
extern unsigned int const_string;
extern unsigned int bss_var;
extern char bss_buffer[256];
extern struct { int _0_4_; int _4_4_; } global_point;
extern unsigned int file_scope_static;
extern void *global_func_ptr;
extern unsigned int *global_heap_ptr;
extern struct { int _0_4_; int _8_4_; int _16_4_; } complex_init;
extern unsigned int init_depends_on_static_depends;

/* Missing data symbols */
static char _DAT_000135b4[] = "=== Stack Memory Tests ===\n";
char *DAT_000135b4 = _DAT_000135b4;
static char _DAT_000136fe[] = "=== Heap Memory Tests ===\n";
char *DAT_000136fe = _DAT_000136fe;
static char _DAT_000138cd[] = "fork failed";
char *DAT_000138cd = _DAT_000138cd;
static char _DAT_00013867[] = "child exited with status: %d\n";
char *DAT_00013867 = _DAT_00013867;
static char _DAT_0001388c[] = "child killed by signal: %d\n";
char *DAT_0001388c = _DAT_0001388c;
static char _DAT_00013857[] = "%d\n";
char *DAT_00013857 = _DAT_00013857;
static char _DAT_000138e3[] = "=== Static/Global Memory Tests ===\n";
char *DAT_000138e3 = _DAT_000138e3;
static char _DAT_00013b46[] = "=== Memory Operation Tests ===\n";
char *DAT_00013b46 = _DAT_00013b46;

/* Stack references */
extern void *stack0x00000000;
extern void *stack0x00000004;

/* Standard headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

/* Missing function declarations */
extern void __gmon_start__(void);
extern void __sync_synchronize(void);
extern void *__aeabi_read_tp(void);

/* Atomic compare-and-swap helper (internal) */
static inline int SUB_ffff0fc0(unsigned int oldval, unsigned int newval, void *ptr)
{
 unsigned int *p = (unsigned int *)ptr;
 if (*p == oldval) {
 *p = newval;
 return 0;
 }
 return 1;
}

/* Memory barrier helper (internal) */
static inline void SUB_ffff0fa0(void)
{
 __sync_synchronize();
}

/* Forward declarations for functions called before definition */
extern int _init(void *ctx);
extern void __libc_start_main(int (*)(void), int, void *, int (*)(), void (*)(), void (*)());
extern void * calloc(size_t, size_t);
extern int printf(char *, ...);
extern void * memmove(void *, void *, size_t);
extern void free(void *);
extern void * memcpy(void *, void *, size_t);
extern int memcmp(void *, void *, size_t);
extern void * realloc(void *, size_t);
extern void perror(char *);
extern void bcopy(void *, void *, size_t);
extern pid_t waitpid(pid_t, int *, int);
extern void * malloc(size_t);
extern void exit(int);
extern void * memset(void *, int, size_t);
extern pid_t fork(void);
extern void abort(void);
extern int call_weak_fn(void);
extern void deregister_tm_clones(void);
extern void register_tm_clones(void);
extern void __cxa_finalize(void *);
extern int local_vars(int);
extern unsigned int local_array(int);
extern int local_struct(int);
extern unsigned int address_of_local(unsigned int *);
extern int address_of_array(int *);
extern char large_stack_frame(void);
extern unsigned int vla_stack(int);
extern unsigned int alloca_usage(int);
extern unsigned int stack_alias(void);
extern void test_stack_memory(void);
extern unsigned int heap_basic(int);
extern int heap_calloc(size_t);
extern unsigned int heap_realloc(void);
extern unsigned int heap_array(int);
extern int heap_struct(int);
extern unsigned int heap_nested(void **);
extern int linked_list_heap(void);
extern unsigned int * create_tree_node(unsigned int);
extern int tree_heap_traversal(void);
extern unsigned int memory_leak(int);
extern unsigned int dangling_pointer(void);
extern unsigned int double_free(unsigned int *);
extern unsigned int heap_overflow(void);
extern void test_heap_memory(void);
extern int global_var_access(void);
extern int global_var_read(void);
extern unsigned int global_array_access(int);
extern int static_local(int);
extern int call_static_func(unsigned int);
extern int static_helper(int);
extern int access_extern_global(void);
extern void call_extern_func(void);
extern int read_const_data(void);
extern unsigned int access_bss_var(void);
extern char access_bss_buffer(void);
extern int global_struct_access(void);
extern void set_file_static(unsigned int);
extern unsigned int get_file_static(void);
extern void set_global_callback(unsigned int);
extern unsigned int call_global_callback(unsigned int);
extern unsigned int global_heap_store(unsigned int *);
extern int static_complex_init(void);
extern int tls_access(unsigned int);
extern void init_order_test(void);
extern unsigned int init_depends_on(unsigned int *);
extern void test_static_global(void);
extern int double_value(int);
extern unsigned int memop_memset(unsigned char *, size_t, int);
extern unsigned int memop_memcpy(void *, void *, unsigned int);
extern unsigned int memop_memmove(void *, unsigned int);
extern int memop_memcmp(void *, void *, size_t);
extern unsigned int memop_bzero(unsigned char *, size_t);
extern unsigned int memop_bcopy(void *, unsigned char *, size_t);
extern unsigned int memop_unaligned_access(int);
extern int memop_memory_barrier(int *);
extern void test_memory_op_functions(void);
extern unsigned int main(void);
extern int extern_function(int);

// Decompiled by BinaryAI
// SHA256: 95e294fa4828bc496a28a8bf4ea3eddc58bad14ba1e47c052a1a77e4b7ea0624

// Function: _init @ 0x1057c
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn();
 return iVar1;
}



// Function: _start @ 0x10680
void _start(unsigned int param_1,unsigned int param_2)
{
 __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
 abort();
}

// Function: call_weak_fn @ 0x106c4
int call_weak_fn(void)
{
 __gmon_start__();
 return 0;
}

// Function: deregister_tm_clones @ 0x106e8
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1072c
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x1077c
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = 1;
 return;
 }
 return;
}

// Function: local_vars @ 0x107e8
int local_vars(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: local_array @ 0x1081c
unsigned int local_array(int param_1)
{
 int local_30;
 int aiStack_2c [11];
 for (local_30 = 0; local_30 < 10; local_30 = local_30 + 1) {
 aiStack_2c[local_30] = local_30 * param_1;
 }
 return aiStack_2c[5];
}

// Function: local_struct @ 0x10874
int local_struct(int param_1)
{
 return param_1 * 3;
}

// Function: address_of_local @ 0x108a4
unsigned int address_of_local(unsigned int *param_1)
{
 *param_1 = 0x2a;
 return 0x2a;
}

// Function: address_of_array @ 0x108cc
int address_of_array(int *param_1)
{
 return *param_1 + *param_1;
}

// Function: large_stack_frame @ 0x10900
char large_stack_frame(void)
{
 int local_814;
 char auStack_810 [2048];
 for (local_814 = 0; local_814 < 0x800; local_814 = local_814 + 1) {
 auStack_810[local_814] = (char)local_814;
 }
 return auStack_810[1024];
}

// Function: vla_stack @ 0x1095c
unsigned int vla_stack(int param_1)
{
 int iVar1;
 int local_28 [5];
 unsigned int local_14;
 if ((param_1 < 1) || (1000 < param_1)) {
 local_14 = 0xffffffff;
 }
 else {
 iVar1 = -0x28 - (param_1 * 4 + 7U & 0xfffffff8);
 for (local_28[1] = 0; local_28[1] < param_1; local_28[1] = local_28[1] + 1) {
 *(int *)((int)local_28 + local_28[1] * 4 + iVar1 + 0x28) = local_28[1] << 1;
 }
 local_14 = *(unsigned int *)
 ((int)local_28 + ((param_1 - (param_1 >> 0x1f)) * 2 & 0xfffffffdU) + iVar1 + 0x28);
 }
 return local_14;
}

// Function: alloca_usage @ 0x10a40
unsigned int alloca_usage(int param_1)
{
 int iVar1;
 int local_20 [4];
 if (param_1 < 1) {
 local_20[3] = 0xffffffff;
 }
 else {
 iVar1 = -0x20 - (param_1 * 4 + 7U & 0xfffffff8);
 for (local_20[0] = 0; local_20[0] < param_1; local_20[0] = local_20[0] + 1) {
 *(int *)((int)local_20 + local_20[0] * 4 + iVar1 + 0x20) = local_20[0] * 3;
 }
 local_20[3] = *(unsigned int *)
 ((int)local_20 + ((param_1 - (param_1 >> 0x1f)) * 2 & 0xfffffffdU) + iVar1 + 0x20
 );
 }
 return local_20[3];
}

// Function: stack_alias @ 0x10b00
unsigned int stack_alias(void)
{
 unsigned int local_10;
 unsigned int local_4;
 if (&stack0x00000000 == (char *)0x10) {
 local_4 = 0xffffffff;
 }
 else {
 local_4 = local_10;
 }
 return local_4;
}

// Function: test_stack_memory @ 0x10b78
void test_stack_memory(void)
{
 unsigned int uVar1;
 unsigned int local_38;
 unsigned int local_34;
 unsigned int local_30;
 unsigned int local_2c;
 char auStack_c [4];
 printf("%s", DAT_000135b4);
 uVar1 = local_vars(5);
 printf("MEM-L1-01 (local_vars): %d\n",uVar1);
 uVar1 = local_array(10);
 printf("MEM-L1-02 (local_array): %d\n",uVar1);
 uVar1 = local_struct(5);
 printf("MEM-L1-03 (local_struct): %d\n",uVar1);
 uVar1 = address_of_local(auStack_c);
 printf("MEM-L1-04 (address_of_local): %d\n",uVar1);
 memset(&local_34,0,0x28);
 local_34 = 1;
 local_30 = 2;
 local_2c = 3;
 uVar1 = address_of_array(&local_34);
 printf("MEM-L1-05 (address_of_array): %d\n",uVar1);
 uVar1 = large_stack_frame();
 printf("MEM-L2-01 (large_stack_frame): %d\n",uVar1);
 uVar1 = vla_stack(5);
 printf("MEM-L2-02 (vla_stack): %d\n",uVar1);
 uVar1 = alloca_usage(10);
 printf("MEM-L2-03 (alloca_usage): %d\n",uVar1);
 local_38 = 0;
 uVar1 = stack_alias();
 printf("MEM-L2-04 (stack_alias): %d\n",uVar1);
 return;
}

// Function: heap_basic @ 0x10ce0
unsigned int heap_basic(int param_1)
{
 void *__ptr;
 int local_18;
 unsigned int local_c;
 __ptr = malloc(param_1 << 2);
 if (__ptr == (void *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
 *(int *)((int)__ptr + local_18 * 4) = local_18 << 1;
 }
 local_c = *(unsigned int *)((int)__ptr + ((param_1 - (param_1 >> 0x1f)) * 2 & 0xfffffffdU));
 free(__ptr);
 }
 return local_c;
}

// Function: heap_calloc @ 0x10da0
int heap_calloc(size_t param_1)
{
 void *__ptr;
 int local_1c;
 int local_18;
 int local_c;
 __ptr = calloc(param_1,4);
 if (__ptr == (void *)0x0) {
 local_c = -1;
 }
 else {
 local_18 = 0;
 for (local_1c = 0; local_1c < (int)param_1; local_1c = local_1c + 1) {
 local_18 = local_18 + *(int *)((int)__ptr + local_1c * 4);
 }
 free(__ptr);
 local_c = local_18;
 }
 return local_c;
}

// Function: heap_realloc @ 0x10e50
unsigned int heap_realloc(void)
{
 void *__ptr;
 int iVar1;
 void *__ptr_00;
 unsigned int local_28;
 int local_20;
 int local_14;
 unsigned int local_c;
 __ptr = malloc(0x14);
 if (__ptr == (void *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
 *(int *)((int)__ptr + local_14 * 4) = local_14 + 1;
 }
 iVar1 = *(int *)((int)__ptr + 8);
 __ptr_00 = realloc(__ptr,0x28);
 if (__ptr_00 == (void *)0x0) {
 free(__ptr);
 local_c = 0xfffffffe;
 }
 else {
 for (local_20 = 5; local_20 < 10; local_20 = local_20 + 1) {
 *(int *)((int)__ptr_00 + local_20 * 4) = local_20 * 10;
 }
 if (*(int *)((int)__ptr_00 + 8) == iVar1) {
 local_28 = *(unsigned int *)((int)__ptr_00 + 0x14);
 }
 else {
 local_28 = 0xfffffffd;
 }
 free(__ptr_00);
 local_c = local_28;
 }
 }
 return local_c;
}

// Function: heap_array @ 0x10fb0
unsigned int heap_array(int param_1)
{
 void *__ptr;
 int local_18;
 unsigned int local_c;
 __ptr = malloc(param_1 << 2);
 if (__ptr == (void *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
 *(int *)((int)__ptr + local_18 * 4) = local_18 * 3;
 }
 local_c = *(unsigned int *)((int)__ptr + ((param_1 - (param_1 >> 0x1f)) * 2 & 0xfffffffdU));
 free(__ptr);
 }
 return local_c;
}

// Function: heap_struct @ 0x11070
int heap_struct(int param_1)
{
 int *__ptr;
 int local_c;
 __ptr = (int *)malloc(8);
 if (__ptr == (int *)0x0) {
 local_c = -1;
 }
 else {
 *__ptr = param_1;
 __ptr[1] = param_1 << 1;
 local_c = *__ptr + __ptr[1];
 free(__ptr);
 }
 return local_c;
}

// Function: heap_nested @ 0x110fc
unsigned int heap_nested(void **param_1)
{
 void *pvVar1;
 unsigned int local_c;
 pvVar1 = malloc(8);
 *param_1 = pvVar1;
 if (*param_1 == (void *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 *(unsigned int *)*param_1 = 10;
 pvVar1 = malloc(8);
 *(void **)((int)*param_1 + 4) = pvVar1;
 if (*(int *)((int)*param_1 + 4) == 0) {
 free(*param_1);
 local_c = 0xfffffffe;
 }
 else {
 **(unsigned int **)((int)*param_1 + 4) = 0x14;
 *(unsigned int *)(*(int *)((int)*param_1 + 4) + 4) = 0;
 local_c = 0;
 }
 }
 return local_c;
}

// Function: linked_list_heap @ 0x111d0
int linked_list_heap(void)
{
 int *piVar1;
 int *piVar2;
 int *local_28;
 int local_24;
 int local_18;
 int *local_14;
 int *local_10;
 local_10 = (int *)0x0;
 local_14 = (int *)0x0;
 local_18 = 0;
 while( true ) {
 if (4 < local_18) {
 local_24 = 0;
 for (local_28 = local_10; local_28 != (int *)0x0; local_28 = (int *)local_28[1]) {
 local_24 = local_24 + *local_28;
 }
 while (local_10 != (int *)0x0) {
 piVar2 = (int *)local_10[1];
 free(local_10);
 local_10 = piVar2;
 }
 return local_24;
 }
 piVar2 = (int *)malloc(8);
 if (piVar2 == (int *)0x0) break;
 *piVar2 = local_18 * 10;
 piVar2[1] = 0;
 piVar1 = piVar2;
 if (local_10 != (int *)0x0) {
 local_14[1] = (int)piVar2;
 piVar1 = local_10;
 }
 local_10 = piVar1;
 local_18 = local_18 + 1;
 local_14 = piVar2;
 }
 while (local_10 != (int *)0x0) {
 piVar2 = (int *)local_10[1];
 free(local_10);
 local_10 = piVar2;
 }
 return -1;
}

// Function: create_tree_node @ 0x11364
unsigned int * create_tree_node(unsigned int param_1)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)malloc(0xc);
 if (puVar1 != (unsigned int *)0x0) {
 *puVar1 = param_1;
 puVar1[1] = 0;
 puVar1[2] = 0;
 }
 return puVar1;
}

// Function: tree_heap_traversal @ 0x113c4
int tree_heap_traversal(void)
{
 int *__ptr;
 int iVar1;
 int local_c;
 __ptr = (int *)create_tree_node(10);
 if (__ptr == (int *)0x0) {
 local_c = -1;
 }
 else {
 iVar1 = create_tree_node(0x14);
 __ptr[1] = iVar1;
 iVar1 = create_tree_node(0x1e);
 __ptr[2] = iVar1;
 if ((__ptr[1] == 0) || (__ptr[2] == 0)) {
 if (__ptr[1] != 0) {
 free((void *)__ptr[1]);
 }
 if (__ptr[2] != 0) {
 free((void *)__ptr[2]);
 }
 free(__ptr);
 local_c = -2;
 }
 else {
 local_c = *__ptr + *(int *)__ptr[1] + *(int *)__ptr[2];
 free((void *)__ptr[1]);
 free((void *)__ptr[2]);
 free(__ptr);
 }
 }
 return local_c;
}

// Function: memory_leak @ 0x114fc
unsigned int memory_leak(int param_1)
{
 void *pvVar1;
 int local_18;
 unsigned int local_c;
 pvVar1 = malloc(param_1 << 2);
 if (pvVar1 == (void *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
 *(int *)((int)pvVar1 + local_18 * 4) = local_18;
 }
 local_c = *(unsigned int *)((int)pvVar1 + ((param_1 - (param_1 >> 0x1f)) * 2 & 0xfffffffdU));
 }
 return local_c;
}

// Function: dangling_pointer @ 0x115a8
unsigned int dangling_pointer(void)
{
 unsigned int *__ptr;
 unsigned int local_c;
 __ptr = (unsigned int *)malloc(4);
 if (__ptr == (unsigned int *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 *__ptr = 0x2a;
 printf("value before free: %d\n",*__ptr);
 free(__ptr);
 local_c = *__ptr;
 }
 return local_c;
}

// Function: double_free @ 0x11638
unsigned int double_free(unsigned int *param_1)
{
 unsigned int *__ptr;
 unsigned int local_c;
 if (param_1 == (unsigned int *)0x0) {
 __ptr = (unsigned int *)malloc(4);
 if (__ptr == (unsigned int *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 *__ptr = 10;
 free(__ptr);
 free(__ptr);
 local_c = 0xfffffffe;
 }
 }
 else {
 local_c = *param_1;
 }
 return local_c;
}

// Function: heap_overflow @ 0x116c8
unsigned int heap_overflow(void)
{
 unsigned int *__ptr;
 int local_14;
 unsigned int local_c;
 __ptr = (unsigned int *)malloc(0x28);
 if (__ptr == (unsigned int *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 for (local_14 = 0; local_14 < 0xb; local_14 = local_14 + 1) {
 __ptr[local_14] = local_14 * 100;
 }
 local_c = *__ptr;
 free(__ptr);
 }
 return local_c;
}

// Function: test_heap_memory @ 0x11770
void test_heap_memory(void)
{
 unsigned int uVar1;
 uint local_18;
 unsigned int local_14;
 __pid_t local_10;
 void *local_c;
 printf("%s", DAT_000136fe);
 uVar1 = heap_basic(10);
 printf("HEAP-L2-01 (heap_basic): %d\n",uVar1);
 uVar1 = heap_calloc(10);
 printf("HEAP-L2-02 (heap_calloc): %d\n",uVar1);
 uVar1 = heap_realloc();
 printf("HEAP-L2-03 (heap_realloc): %d\n",uVar1);
 uVar1 = heap_array(10);
 printf("HEAP-L2-04 (heap_array): %d\n",uVar1);
 uVar1 = heap_struct(5);
 printf("HEAP-L2-05 (heap_struct): %d\n",uVar1);
 local_c = (void *)0x0;
 uVar1 = heap_nested(&local_c);
 printf("HEAP-L2-06 (heap_nested): %d\n",uVar1);
 if (local_c != (void *)0x0) {
 free(*(void **)((int)local_c + 4));
 free(local_c);
 }
 uVar1 = linked_list_heap();
 printf("HEAP-L3-01 (linked_list_heap): %d\n",uVar1);
 uVar1 = tree_heap_traversal();
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n",uVar1);
 uVar1 = memory_leak(5);
 printf("HEAP-L3-03 (memory_leak): %d\n",uVar1);
 printf("HEAP-L3-04 (dangling_pointer): ");
 local_10 = fork();
 if (local_10 != 0) {
 if (local_10 < 1) {
 perror((char *)DAT_000138cd);
 }
 else {
 waitpid(local_10,(int *)&local_18,0);
 if ((local_18 & 0x7f) == 0) {
 printf(DAT_00013867, local_18 >> 8 & 0xff);
 }
 else if (0 < (int)(((local_18 & 0x7f) + 1) * 0x1000000) >> 0x19) {
 printf(DAT_0001388c, local_18 & 0x7f);
 }
 }
 return;
 }
 local_14 = dangling_pointer();
 printf(DAT_00013857, local_14);
 exit(0);
}

// Function: global_var_access @ 0x119b0
int global_var_access(void)
{
 global_counter = global_counter + 1;
 return global_counter;
}

// Function: global_var_read @ 0x119e0
int global_var_read(void)
{
 return global_counter << 1;
}

// Function: global_array_access @ 0x119f4
unsigned int global_array_access(int param_1)
{
 unsigned int local_4;
 if ((param_1 < 0) || (9 < param_1)) {
 local_4 = 0xffffffff;
 }
 else {
 local_4 = global_array[param_1];
 }
 return local_4;
}

// Function: static_local @ 0x11a50
int static_local(int param_1)
{
 if (param_1 == 0) {
 static_local_counter = static_local_counter + 1;
 }
 else {
 static_local_counter = 0;
 }
 return static_local_counter;
}

// Function: call_static_func @ 0x11ac4
int call_static_func(unsigned int param_1)
{
 int iVar1;
 iVar1 = static_helper(param_1);
 return iVar1 + 1;
}

// Function: static_helper @ 0x11aec
int static_helper(int param_1)
{
 return param_1 << 1;
}

// Function: access_extern_global @ 0x11b04
int access_extern_global(void)
{
 return extern_global_var + 100;
}

// Function: call_extern_func @ 0x11b1c
void call_extern_func(void)
{
 extern_function(5);
 return;
}

// Function: read_const_data @ 0x11b34
int read_const_data(void)
{
 return *(byte *)(const_string + 4) + 0x2a;
}

// Function: access_bss_var @ 0x11b4c
unsigned int access_bss_var(void)
{
 return bss_var;
}

// Function: access_bss_buffer @ 0x11b5c
char access_bss_buffer(void)
{
 return bss_buffer[0];
}

// Function: global_struct_access @ 0x11b70
int global_struct_access(void)
{
 return (int)global_point + global_point._4_4_;
}

// Function: set_file_static @ 0x11b94
void set_file_static(unsigned int param_1)
{
 file_scope_static = param_1;
 return;
}

// Function: get_file_static @ 0x11bb8
unsigned int get_file_static(void)
{
 return file_scope_static;
}

// Function: set_global_callback @ 0x11bc8
void set_global_callback(unsigned int param_1)
{
 global_func_ptr = param_1;
 return;
}

// Function: call_global_callback @ 0x11bec
unsigned int call_global_callback(unsigned int param_1)
{
 unsigned int local_c;
 if (global_func_ptr == (void *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 local_c = (*global_func_ptr)(param_1);
 }
 return local_c;
}

// Function: global_heap_store @ 0x11c50
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

// Function: static_complex_init @ 0x11cb4
int static_complex_init(void)
{
 return complex_init._0_4_ + complex_init._8_4_ + complex_init._16_4_;
}

// Function: tls_access @ 0x11ce0
int tls_access(unsigned int param_1)
{
 void *tls_ptr;
 tls_ptr = __aeabi_read_tp();
 *(uint *)tls_ptr = param_1;
 return *(int *)tls_ptr << 1;
}

// Function: init_order_test @ 0x11d18
void init_order_test(void)
{
 unsigned int local_c;
 local_c = 0x14;
 init_depends_on(&local_c);
 return;
}

// Function: init_depends_on @ 0x11d40
unsigned int init_depends_on(unsigned int *param_1)
{
 if (param_1 != (unsigned int *)0x0) {
 init_depends_on_static_depends = *param_1;
 }
 return init_depends_on_static_depends;
}

// Function: test_static_global @ 0x11d88
void test_static_global(void)
{
 unsigned int uVar1;
 unsigned int local_c;
 printf("%s", DAT_000138e3);
 uVar1 = global_var_access();
 printf("STM-L1-01 (global_var_access): %d\n",uVar1);
 uVar1 = global_var_read();
 printf("STM-L1-01 (global_var_read): %d\n",uVar1);
 uVar1 = global_array_access(5);
 printf("STM-L1-02 (global_array_access): %d\n",uVar1);
 static_local(1);
 uVar1 = static_local(0);
 printf("STM-L1-03 (static_local): %d\n",uVar1);
 uVar1 = static_local(0);
 printf("STM-L1-03 (static_local): %d\n",uVar1);
 uVar1 = call_static_func(5);
 printf("STM-L1-04 (call_static_func): %d\n",uVar1);
 uVar1 = access_extern_global();
 printf("STM-L2-01 (access_extern_global): %d\n",uVar1);
 call_extern_func();
 printf("STM-L2-02 (call_extern_func): %d\n",0);
 uVar1 = read_const_data();
 printf("STM-L2-03 (read_const_data): %d\n",uVar1);
 uVar1 = access_bss_var();
 printf("STM-L2-04 (access_bss_var): %d\n",uVar1);
 uVar1 = access_bss_buffer();
 printf("STM-L2-04 (access_bss_buffer): %d\n",uVar1);
 uVar1 = global_struct_access();
 printf("STM-L2-05 (global_struct_access): %d\n",uVar1);
 set_file_static(0x32);
 uVar1 = get_file_static();
 printf("STM-L2-06 (file_static): %d\n",uVar1);
 set_global_callback(double_value);
 uVar1 = call_global_callback(5);
 printf("STM-L2-07 (global_func_ptr): %d\n",uVar1);
 local_c = 100;
 uVar1 = global_heap_store(&local_c);
 printf("STM-L2-08 (global_heap_store): %d\n",uVar1);
 uVar1 = static_complex_init();
 printf("STM-L2-09 (static_complex_init): %d\n",uVar1);
 uVar1 = tls_access(10);
 printf("STM-L3-01 (tls_access): %d\n",uVar1);
 init_order_test();
 uVar1 = 0;
 printf("STM-L3-02 (init_order_test): %d\n",uVar1);
 return;
}

// Function: double_value @ 0x11fa8
int double_value(int param_1)
{
 return param_1 << 1;
}

// Function: memop_memset @ 0x11fc0
uint memop_memset(byte *param_1,size_t param_2,int param_3)
{
 uint local_c;
 if ((param_1 == (byte *)0x0) || (param_2 == 0)) {
 local_c = 0xffffffff;
 }
 else {
 memset(param_1,param_3,param_2);
 local_c = (uint)*param_1;
 }
 return local_c;
}

// Function: memop_memcpy @ 0x12034
unsigned int memop_memcpy(void *param_1,void *param_2,uint param_3)
{
 unsigned int local_c;
 if (((param_1 == (void *)0x0) || (param_2 == (void *)0x0)) || (param_3 == 0)) {
 local_c = 0xffffffff;
 }
 else {
 memcpy(param_1,param_2,param_3);
 local_c = *(unsigned int *)((int)param_1 + ((param_3 & 0xfffffffc) - 4));
 }
 return local_c;
}

// Function: memop_memmove @ 0x120c4
uint memop_memmove(void *param_1,uint param_2)
{
 uint local_c;
 if ((param_1 == (void *)0x0) || (param_2 < 2)) {
 local_c = 0xffffffff;
 }
 else {
 memmove((void *)((int)param_1 + 1),param_1,param_2 - 1);
 local_c = (uint)*(byte *)((int)param_1 + 1);
 }
 return local_c;
}

// Function: memop_memcmp @ 0x12138
int memop_memcmp(void *param_1,void *param_2,size_t param_3)
{
 int local_20;
 int local_c;
 if (((param_1 == (void *)0x0) || (param_2 == (void *)0x0)) || (param_3 == 0)) {
 local_c = 0;
 }
 else {
 local_20 = memcmp(param_1,param_2,param_3);
 if (local_20 < 1) {
 local_20 = local_20 >> 0x1f;
 }
 else {
 local_20 = 1;
 }
 local_c = local_20;
 }
 return local_c;
}

// Function: memop_bzero @ 0x121e8
uint memop_bzero(byte *param_1,size_t param_2)
{
 uint local_c;
 if (param_1 == (byte *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 memset(param_1,0,param_2);
 local_c = (uint)*param_1;
 }
 return local_c;
}

// Function: memop_bcopy @ 0x12248
uint memop_bcopy(void *param_1,byte *param_2,size_t param_3)
{
 uint local_c;
 if (((param_1 == (void *)0x0) || (param_2 == (byte *)0x0)) || (param_3 == 0)) {
 local_c = 0xffffffff;
 }
 else {
 bcopy(param_1,param_2,param_3);
 local_c = (uint)*param_2;
 }
 return local_c;
}

// Function: memop_unaligned_access @ 0x122cc
unsigned int memop_unaligned_access(int param_1)
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

// Function: memop_memory_barrier @ 0x1232c
int memop_memory_barrier(int *param_1)
{
 int local_c;
 if (param_1 == (int *)0x0) {
 local_c = -1;
 }
 else {
 local_c = *param_1;
 __sync_synchronize();
 local_c = local_c + *param_1;
 }
 return local_c;
}

// Function: test_memory_op_functions @ 0x12390
void test_memory_op_functions(void)
{
 unsigned int uVar1;
 unsigned int local_17c;
 unsigned int local_178;
 unsigned int local_174;
 unsigned int local_170;
 unsigned int local_16c;
 char auStack_166 [10];
 unsigned int local_15c;
 unsigned int local_158;
 unsigned int local_154;
 unsigned int local_150;
 unsigned int local_14c;
 unsigned int local_148;
 unsigned int local_144;
 unsigned int local_140;
 unsigned short local_13c;
 char local_13a;
 unsigned int local_138;
 unsigned int local_134;
 unsigned int local_130;
 unsigned int local_12c;
 unsigned int local_128;
 unsigned int local_124;
 unsigned int uStack_120;
 unsigned int uStack_11c;
 unsigned int uStack_118;
 unsigned int uStack_114;
 char auStack_110 [256];
 printf("%s", DAT_00013b46);
 local_124 = 10;
 uStack_120 = 0x14;
 uStack_11c = 0x1e;
 uStack_118 = 0x28;
 uStack_114 = 0x32;
 local_128 = 0;
 local_12c = 0;
 local_130 = 0;
 local_134 = 0;
 local_138 = 0;
 uVar1 = memop_memset(auStack_110,10,0x41);
 printf("MEMOP-L2-01: %d\n",uVar1);
 uVar1 = memop_memcpy(&local_138,&local_124,0x14);
 printf("MEMOP-L2-02: %d\n",uVar1);
 local_13a = 0;
 local_13c = 0x646c;
 local_140 = 0x726f576f;
 local_144 = 0x6c6c6548;
 uVar1 = memop_memmove(&local_144,10);
 printf("MEMOP-L2-03: %c\n",uVar1);
 local_14c = 2;
 local_148 = 3;
 local_150 = 1;
 local_158 = 2;
 local_154 = 4;
 local_15c = 1;
 uVar1 = memop_memcmp(&local_150,&local_15c,0xc);
 printf("MEMOP-L2-04: %d\n",uVar1);
 uVar1 = memop_bzero(auStack_166,10);
 printf("MEMOP-L2-05: %u\n",uVar1);
 local_16c = 0x4030201;
 local_170 = 0;
 uVar1 = memop_bcopy(&local_16c,&local_170,4);
 printf("MEMOP-L2-06: %d\n",uVar1);
 local_174 = 0x7060504;
 local_178 = 0x3020100;
 uVar1 = memop_unaligned_access(&local_178);
 printf("MEMOP-L3-01: 0x%x\n",uVar1);
 local_17c = 5;
 uVar1 = memop_memory_barrier(&local_17c);
 printf("MEMOP-L3-02: %d\n",uVar1);
 return;
}

// Function: main @ 0x125b4
unsigned int main(void)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}

// Function: extern_function @ 0x125ec
int extern_function(int param_1)
{
 return param_1 * 3;
}

// Function: __sync_fetch_and_add_4 @ 0x12604
int __sync_fetch_and_add_4(int *param_1,int param_2)
{
 int iVar1;
 int iVar2;
 do {
 iVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(iVar2,iVar2 + param_2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}

// Function: __sync_fetch_and_sub_4 @ 0x1263c
int __sync_fetch_and_sub_4(int *param_1,int param_2)
{
 int iVar1;
 int iVar2;
 do {
 iVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(iVar2,iVar2 - param_2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}

// Function: __sync_fetch_and_or_4 @ 0x12674
uint __sync_fetch_and_or_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(uVar2,uVar2 | param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_fetch_and_and_4 @ 0x126ac
uint __sync_fetch_and_and_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(uVar2,uVar2 & param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_fetch_and_xor_4 @ 0x126e4
uint __sync_fetch_and_xor_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(uVar2,uVar2 ^ param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_fetch_and_nand_4 @ 0x1271c
uint __sync_fetch_and_nand_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(uVar2,~(uVar2 & param_2),param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_fetch_and_add_2 @ 0x12758
int __sync_fetch_and_add_2(unsigned short *param_1,int param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 uintptr_t p1 = (uintptr_t)param_1;
 iVar4 = (p1 & 3) << 3;
 do {
 uVar2 = *(uint *)(p1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
	iVar3 = SUB_ffff0fc0((int)uVar2, (int)((uVar2 ^ uVar1 + param_2 << iVar4) & 0xffff << iVar4 ^ uVar2),
 (void *)(p1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}

// Function: __sync_fetch_and_sub_2 @ 0x127b8
int __sync_fetch_and_sub_2(unsigned short *param_1,int param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 uintptr_t p1 = (uintptr_t)param_1;
 iVar4 = (p1 & 3) << 3;
 do {
 uVar2 = *(uint *)(p1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0(uVar2, (uVar2 ^ uVar1 - param_2 << iVar4) & 0xffff << iVar4 ^ uVar2,
 (void *)(p1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}

// Function: __sync_fetch_and_or_2 @ 0x12818
int __sync_fetch_and_or_2(unsigned short *param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 uintptr_t p1 = (uintptr_t)param_1;
 iVar4 = (p1 & 3) << 3;
 do {
 uVar2 = *(uint *)(p1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0(uVar2, (uVar2 ^ (uVar1 | param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (void *)(p1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}

// Function: __sync_fetch_and_and_2 @ 0x12878
int __sync_fetch_and_and_2(unsigned short *param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 uintptr_t p1 = (uintptr_t)param_1;
 iVar4 = (p1 & 3) << 3;
 do {
 uVar2 = *(uint *)(p1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0(uVar2, (uVar2 ^ (uVar1 & param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (void *)(p1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}

// Function: __sync_fetch_and_xor_2 @ 0x128d8
int __sync_fetch_and_xor_2(unsigned short *param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 uintptr_t p1 = (uintptr_t)param_1;
 iVar4 = (p1 & 3) << 3;
 do {
 uVar2 = *(uint *)(p1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ (uVar1 ^ param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (void *)(p1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}

// Function: __sync_fetch_and_nand_2 @ 0x12938
int __sync_fetch_and_nand_2(unsigned short *param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 uintptr_t p1 = (uintptr_t)param_1;
 iVar4 = (p1 & 3) << 3;
 do {
 uVar2 = *(uint *)(p1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ ~(uVar1 & param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (void *)(p1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}

// Function: __sync_fetch_and_add_1 @ 0x1299c
int __sync_fetch_and_add_1(unsigned char *param_1,int param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = ((uintptr_t)param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)((uintptr_t)param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ uVar1 + param_2 << iVar4) & 0xff << iVar4 ^ uVar2,
 (void *)((uintptr_t)param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}

// Function: __sync_fetch_and_sub_1 @ 0x129f8
int __sync_fetch_and_sub_1(unsigned char *param_1,int param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = ((uintptr_t)param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)((uintptr_t)param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ uVar1 - param_2 << iVar4) & 0xff << iVar4 ^ uVar2,
 (void *)((uintptr_t)param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}

// Function: __sync_fetch_and_or_1 @ 0x12a54
int __sync_fetch_and_or_1(unsigned char *param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = ((uintptr_t)param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)((uintptr_t)param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ (uVar1 | param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (void *)((uintptr_t)param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}

// Function: __sync_fetch_and_and_1 @ 0x12ab0
int __sync_fetch_and_and_1(unsigned char *param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = ((uintptr_t)param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)((uintptr_t)param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ (uVar1 & param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (void *)((uintptr_t)param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}

// Function: __sync_fetch_and_xor_1 @ 0x12b0c
int __sync_fetch_and_xor_1(unsigned char *param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = ((uintptr_t)param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)((uintptr_t)param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ (uVar1 ^ param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (void *)((uintptr_t)param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}

// Function: __sync_fetch_and_nand_1 @ 0x12b68
int __sync_fetch_and_nand_1(unsigned char *param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = ((uintptr_t)param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)((uintptr_t)param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ ~(uVar1 & param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)((uintptr_t)param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}

// Function: __sync_add_and_fetch_4 @ 0x12bc8
int __sync_add_and_fetch_4(int *param_1,int param_2)
{
 int iVar1;
 int iVar2;
 do {
 iVar2 = *param_1 + param_2;
 iVar1 = SUB_ffff0fc0(*param_1,iVar2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}

// Function: __sync_sub_and_fetch_4 @ 0x12c00
int __sync_sub_and_fetch_4(int *param_1,int param_2)
{
 int iVar1;
 int iVar2;
 do {
 iVar2 = *param_1 - param_2;
 iVar1 = SUB_ffff0fc0(*param_1,iVar2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}

// Function: __sync_or_and_fetch_4 @ 0x12c38
uint __sync_or_and_fetch_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = *param_1 | param_2;
 iVar1 = SUB_ffff0fc0(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_and_and_fetch_4 @ 0x12c70
uint __sync_and_and_fetch_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = *param_1 & param_2;
 iVar1 = SUB_ffff0fc0(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_xor_and_fetch_4 @ 0x12ca8
uint __sync_xor_and_fetch_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = *param_1 ^ param_2;
 iVar1 = SUB_ffff0fc0(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_nand_and_fetch_4 @ 0x12ce0
uint __sync_nand_and_fetch_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = ~(*param_1 & param_2);
 iVar1 = SUB_ffff0fc0(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_add_and_fetch_2 @ 0x12d1c
int __sync_add_and_fetch_2(unsigned short *param_1,int param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 iVar5 = ((uintptr_t)param_1 & 3) << 3;
 uVar1 = 0xffff << iVar5;
 do {
 uVar2 = *(uint *)((uintptr_t)param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ param_2 + ((uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = SUB_ffff0fc0(uVar2,uVar4,(void *)((uintptr_t)param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_sub_and_fetch_2 @ 0x12d84
int __sync_sub_and_fetch_2(unsigned short *param_1,int param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 iVar5 = ((uintptr_t)param_1 & 3) << 3;
 uVar1 = 0xffff << iVar5;
 do {
 uVar2 = *(uint *)((uintptr_t)param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ ((uVar1 & uVar2) >> iVar5) - param_2 << iVar5) & uVar1 ^ uVar2;
 iVar3 = SUB_ffff0fc0(uVar2,uVar4,(void *)((uintptr_t)param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_or_and_fetch_2 @ 0x12dec
int __sync_or_and_fetch_2(unsigned short *param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 iVar5 = ((uintptr_t)param_1 & 3) << 3;
 uVar1 = 0xffff << iVar5;
 do {
 uVar2 = *(uint *)((uintptr_t)param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ (param_2 | (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = SUB_ffff0fc0(uVar2,uVar4,(void *)((uintptr_t)param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_and_and_fetch_2 @ 0x12e54
int __sync_and_and_fetch_2(unsigned short *param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 iVar5 = ((uintptr_t)param_1 & 3) << 3;
 uVar1 = 0xffff << iVar5;
 do {
 uVar2 = *(uint *)((uintptr_t)param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ (param_2 & (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = SUB_ffff0fc0(uVar2,uVar4,(void *)((uintptr_t)param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_xor_and_fetch_2 @ 0x12ebc
int __sync_xor_and_fetch_2(unsigned short *param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 iVar5 = ((uintptr_t)param_1 & 3) << 3;
 uVar1 = 0xffff << iVar5;
 do {
 uVar2 = *(uint *)((uintptr_t)param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ (param_2 ^ (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = SUB_ffff0fc0(uVar2,uVar4,(void *)((uintptr_t)param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_nand_and_fetch_2 @ 0x12f24
int __sync_nand_and_fetch_2(unsigned short *param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 iVar5 = ((uintptr_t)param_1 & 3) << 3;
 uVar1 = 0xffff << iVar5;
 do {
 uVar2 = *(uint *)((uintptr_t)param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ ~(param_2 & (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = SUB_ffff0fc0(uVar2,uVar4,(void *)((uintptr_t)param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_add_and_fetch_1 @ 0x12f90
int __sync_add_and_fetch_1(unsigned char *param_1,int param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 iVar5 = ((uintptr_t)param_1 & 3) << 3;
 uVar1 = 0xff << iVar5;
 do {
 uVar2 = *(uint *)((uintptr_t)param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ param_2 + ((uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = SUB_ffff0fc0(uVar2,uVar4,(void *)((uintptr_t)param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_sub_and_fetch_1 @ 0x12ff4
int __sync_sub_and_fetch_1(unsigned char *param_1,int param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 iVar5 = ((uintptr_t)param_1 & 3) << 3;
 uVar1 = 0xff << iVar5;
 do {
 uVar2 = *(uint *)((uintptr_t)param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ ((uVar1 & uVar2) >> iVar5) - param_2 << iVar5) & uVar1 ^ uVar2;
 iVar3 = SUB_ffff0fc0(uVar2,uVar4,(void *)((uintptr_t)param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_or_and_fetch_1 @ 0x13058
int __sync_or_and_fetch_1(unsigned char *param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 iVar5 = ((uintptr_t)param_1 & 3) << 3;
 uVar1 = 0xff << iVar5;
 do {
 uVar2 = *(uint *)((uintptr_t)param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ (param_2 | (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = SUB_ffff0fc0(uVar2,uVar4,(void *)((uintptr_t)param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_and_and_fetch_1 @ 0x130bc
int __sync_and_and_fetch_1(unsigned char *param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 iVar5 = ((uintptr_t)param_1 & 3) << 3;
 uVar1 = 0xff << iVar5;
 do {
 uVar2 = *(uint *)((uintptr_t)param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ (param_2 & (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = SUB_ffff0fc0(uVar2,uVar4,(void *)((uintptr_t)param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_xor_and_fetch_1 @ 0x13120
int __sync_xor_and_fetch_1(unsigned char *param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 iVar5 = ((uintptr_t)param_1 & 3) << 3;
 uVar1 = 0xff << iVar5;
 do {
 uVar2 = *(uint *)((uintptr_t)param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ (param_2 ^ (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = SUB_ffff0fc0(uVar2,uVar4,(void *)((uintptr_t)param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_nand_and_fetch_1 @ 0x13184
int __sync_nand_and_fetch_1(unsigned char *param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 iVar5 = ((uintptr_t)param_1 & 3) << 3;
 uVar1 = 0xff << iVar5;
 do {
 uVar2 = *(uint *)((uintptr_t)param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ ~(param_2 & (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = SUB_ffff0fc0(uVar2,uVar4,(void *)((uintptr_t)param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_val_compare_and_swap_4 @ 0x131ec
int __sync_val_compare_and_swap_4(int *param_1,int param_2,int param_3)
{
 int iVar1;
 do {
 if (*param_1 != param_2) {
 return *param_1;
 }
 iVar1 = SUB_ffff0fc0(param_2,param_3,param_1);
 } while (iVar1 != 0);
 return param_2;
}

// Function: __sync_val_compare_and_swap_2 @ 0x1323c
uint __sync_val_compare_and_swap_2(unsigned short *param_1,uint param_2,int param_3)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = ((int)param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)((int)param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 if (uVar1 != (param_2 & 0xffff)) {
 return (int)(short)uVar1;
 }
 iVar3 = SUB_ffff0fc0
 (uVar2,((unsigned int)param_3 << iVar4 ^ uVar2) & 0xffff << iVar4 ^ uVar2,
 (uint *)((int)param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return param_2;
}

// Function: __sync_val_compare_and_swap_1 @ 0x132b4
uint __sync_val_compare_and_swap_1(unsigned char *param_1,uint param_2,int param_3)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = ((int)param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)((int)param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 if (uVar1 != (param_2 & 0xff)) {
 return (int)(char)uVar1;
 }
 iVar3 = SUB_ffff0fc0
 (uVar2,((unsigned int)param_3 << iVar4 ^ uVar2) & 0xff << iVar4 ^ uVar2,
 (uint *)((int)param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return param_2;
}

// Function: __sync_bool_compare_and_swap_4 @ 0x13328
bool __sync_bool_compare_and_swap_4(unsigned int *param_1,unsigned int param_2,unsigned int param_3)
{
 int iVar1;
 iVar1 = SUB_ffff0fc0(param_2,param_3,param_1);
 return iVar1 == 0;
}

// Function: __sync_bool_compare_and_swap_2 @ 0x13354
bool __sync_bool_compare_and_swap_2(unsigned short *param_1,uint param_2,int param_3)
{
 int iVar1;
 iVar1 = __sync_val_compare_and_swap_2(param_1,param_2,param_3);
 return param_2 == iVar1;
}

// Function: __sync_bool_compare_and_swap_1 @ 0x13370

bool __sync_bool_compare_and_swap_1(unsigned char *param_1,uint param_2,int param_3)
{
 int iVar1;
 iVar1 = __sync_val_compare_and_swap_1(param_1,param_2,param_3);
 return param_2 == iVar1;
}

// Function: __sync_lock_test_and_set_4 @ 0x13398
unsigned int __sync_lock_test_and_set_4(unsigned int *param_1,unsigned int param_2)
{
 int iVar1;
 unsigned int uVar2;
 do {
 uVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(uVar2,param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_lock_test_and_set_2 @ 0x133d0
int __sync_lock_test_and_set_2(unsigned short *param_1,int param_2)
{
 int iVar1;
 uint uVar2;
 int iVar3;
 iVar3 = ((uintptr_t)param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)((uintptr_t)param_1 & 0xfffffffc);
 iVar1 = SUB_ffff0fc0
 (uVar2,(param_2 << iVar3 ^ uVar2) & 0xffff << iVar3 ^ uVar2,
 (void *)((uintptr_t)param_1 & 0xfffffffc));
 } while (iVar1 != 0);
 return (int)(short)((0xffff << iVar3 & uVar2) >> iVar3);
}

// Function: __sync_lock_test_and_set_1 @ 0x13430
int __sync_lock_test_and_set_1(unsigned char *param_1,int param_2)
{
 int iVar1;
 uint uVar2;
 int iVar3;
 iVar3 = ((uintptr_t)param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)((uintptr_t)param_1 & 0xfffffffc);
 iVar1 = SUB_ffff0fc0
 (uVar2,(param_2 << iVar3 ^ uVar2) & 0xff << iVar3 ^ uVar2,
 (void *)((uintptr_t)param_1 & 0xfffffffc));
 } while (iVar1 != 0);
 return (int)(char)((0xff << iVar3 & uVar2) >> iVar3);
}

// Function: __sync_lock_release_8 @ 0x1348c
void __sync_lock_release_8(unsigned int *param_1)
{
 SUB_ffff0fa0();
 *param_1 = 0;
 param_1[1] = 0;
 return;
}

// Function: __sync_lock_release_4 @ 0x134b0
void __sync_lock_release_4(unsigned int *param_1)
{
 SUB_ffff0fa0();
 *param_1 = 0;
 return;
}

// Function: __sync_lock_release_2 @ 0x134d0
void __sync_lock_release_2(unsigned short *param_1)
{
 SUB_ffff0fa0();
 *param_1 = 0;
 return;
}

// Function: __sync_lock_release_1 @ 0x134f0
void __sync_lock_release_1(char *param_1)
{
 SUB_ffff0fa0();
 *param_1 = 0;
 return;
}

// Function: _fini @ 0x13518
void _fini(void)
{
 return;
}

