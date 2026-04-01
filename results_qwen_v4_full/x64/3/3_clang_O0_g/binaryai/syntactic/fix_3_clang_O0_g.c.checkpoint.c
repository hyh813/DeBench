/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long int64_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef unsigned long size_t;
typedef unsigned char byte;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/mman.h>

/* Additional type definitions */
typedef int pid_t;

// Stub implementations for missing functions
static int static_helper(int param_1) {
 return param_1 * 2;
}

static int extern_function(int param_1) {
 return param_1;
}

static unsigned int double_value(unsigned int param_1) {
 return param_1 * 2;
}

static void my_bcopy(const void *src, void *dest, size_t n) {
 memcpy(dest, src, n);
}

static unsigned int init_depends_on(unsigned int *param_1);

// Decompiled by BinaryAI
// SHA256: 3a172068f59aa11f0a2436aa36d0901c9722440241a9d8076ef981ea81d2778c

// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 // Null function call removed - was calling address 0x0
 return;
}

// External functions are provided by system libraries - remove recursive wrappers

// Function: deregister_tm_clones @ 0x101150
static void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x101180
static void register_tm_clones(void)
{
 return;
}

// Global variables
int global_counter = 0;
unsigned int global_array[10] = {0};
int static_local_counter = 0;
int extern_global_var = 0;
char const_string[32] = {0};
unsigned int bss_var = 0;
char bss_buffer[256] = {0};
int global_point = 0;
unsigned int _DAT_001060d4 = 0;
unsigned int file_scope_static = 0;
unsigned int (*global_func_ptr)(unsigned int) = 0;
unsigned int *global_heap_ptr = 0;
int complex_init = 0;
unsigned int _DAT_001060e8 = 0;
unsigned int _DAT_001060f0 = 0;
unsigned int init_depends_on_static_depends = 0;
int completed_0 = 0;
void *__dso_handle = 0;

// Data strings
char DAT_00103004[] = "Starting stack memory tests\n";
char DAT_0010314e[] = "Starting heap memory tests\n";
char DAT_0010331d[] = "fork failed\n";
char DAT_001032b7[] = "Child exited with status %d\n";
char DAT_001032dc[] = "Child terminated by signal %d\n";
char DAT_001032a7[] = "dangling value: %d\n";
char DAT_00103333[] = "Starting static/global tests\n";
char DAT_00103596[] = "Starting memory op tests\n";



// Function: local_vars @ 0x101210
static int local_vars(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: local_array @ 0x101240
static unsigned int local_array(int param_1)
{
 int local_3c;
 int aiStack_38 [12];
 for (local_3c = 0; local_3c < 10; local_3c = local_3c + 1) {
 aiStack_38[local_3c] = local_3c * param_1;
 }
 return aiStack_38[5];
}

// Function: local_struct @ 0x101280
static int local_struct(int param_1)
{
 return param_1 * 3;
}

// Function: address_of_local @ 0x1012a0
static unsigned int address_of_local(unsigned int *param_1)
{
 *param_1 = 0x2a;
 return 0x2a;
}

// Function: address_of_array @ 0x1012c0
static int address_of_array(int *param_1)
{
 return *param_1 + *param_1;
}

// Function: large_stack_frame @ 0x1012f0
static int large_stack_frame(void)
{
 int local_80c;
 char acStack_808 [2048];
 for (local_80c = 0; local_80c < 0x800; local_80c = local_80c + 1) {
 acStack_808[local_80c] = (char)local_80c;
 }
 return (int)acStack_808[1024];
}

// Function: vla_stack @ 0x101360
static unsigned int vla_stack(uint param_1,unsigned long long param_2,unsigned long param_3)
{
 long lVar1;
 unsigned int auVar2;
 uint auStack_38 [5];
 int local_24;
 uint local_c;
 if (((int)param_1 < 1) || (1000 < (int)param_1)) {
 local_c = 0xffffffff;
 }
 else {
 lVar1 = -0x38 - ((unsigned long)param_1 * 4 + 0xf & 0xfffffffffffffff0);
 for (local_24 = 0; local_24 < (int)param_1; local_24 = local_24 + 1) {
 *(int *)((long)auStack_38 + (long)local_24 * 4 + lVar1 + 0x38) = local_24 << 1;
 }
 param_3 = (long)(int)param_1 % 2 & 0xffffffff;
 local_c = *(uint *)((long)auStack_38 + (long)((int)param_1 / 2) * 4 + lVar1 + 0x38);
 }
 auVar2 = local_c;
 return auVar2;
}

// Function: alloca_usage @ 0x101410
static unsigned int alloca_usage(int param_1,unsigned long long param_2,unsigned long param_3)
{
 long lVar1;
 unsigned int auVar2;
 uint local_28 [7];
 uint local_c;
 if (param_1 < 1) {
 local_c = 0xffffffff;
 }
 else {
 lVar1 = -0x28 - ((long)param_1 * 4 + 0xfU & 0xfffffffffffffff0);
 for (local_28[3] = 0; (int)local_28[3] < param_1; local_28[3] = local_28[3] + 1) {
 *(uint *)((long)local_28 + (long)(int)local_28[3] * 4 + lVar1 + 0x28) = local_28[3] * 3;
 }
 param_3 = (long)param_1 % 2 & 0xffffffff;
 local_c = *(uint *)((long)local_28 + (long)(param_1 / 2) * 4 + lVar1 + 0x28);
 }
 auVar2 = local_c;
 return auVar2;
}

// Function: stack_alias @ 0x1014b0
static unsigned int stack_alias(unsigned int *param_1)
{
 unsigned int local_24;
 unsigned int local_c;
 if (param_1 == (unsigned int *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 local_c = *param_1;
 }
 return local_c;
}

// Function: test_stack_memory @ 0x101510
static void test_stack_memory(void)
{
 uint uVar1;
 unsigned int local_3c;
 unsigned int local_38;
 unsigned int local_34;
 unsigned int local_30;
 char local_c [4];
 printf(&DAT_00103004);
 uVar1 = local_vars(5);
 printf("MEM-L1-01 (local_vars): %d\n",(unsigned long)uVar1);
 uVar1 = local_array(2);
 printf("MEM-L1-02 (local_array): %d\n",(unsigned long)uVar1);
 uVar1 = local_struct(5);
 printf("MEM-L1-03 (local_struct): %d\n",(unsigned long)uVar1);
 address_of_local(local_c);
 printf("MEM-L1-04 (address_of_local): %d\n", (unsigned long)local_c[0]);
 memset(&local_38,0,0x28);
 local_38 = 1;
 local_34 = 2;
 local_30 = 3;
 uVar1 = address_of_array(&local_38);
 printf("MEM-L1-05 (address_of_array): %d\n",(unsigned long)uVar1);
 uVar1 = large_stack_frame();
 printf("MEM-L2-01 (large_stack_frame): %d\n",(unsigned long)uVar1);
 uVar1 = vla_stack(10, 0, 0);
 printf("MEM-L2-02 (vla_stack): %d\n",(unsigned long)uVar1);
 uVar1 = alloca_usage(10, 0, 0);
 printf("MEM-L2-03 (alloca_usage): %d\n",(unsigned long)uVar1);
 local_3c = 0;
 uVar1 = stack_alias(&local_3c);
 printf("MEM-L2-04 (stack_alias): %d\n",(unsigned long)uVar1);
 return;
}

// Function: heap_basic @ 0x101640
static unsigned int heap_basic(int param_1)
{
 void *__ptr;
 int local_1c;
 unsigned int local_c;
 __ptr = malloc((long)param_1 << 2);
 if (__ptr == (void *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 for (local_1c = 0; local_1c < param_1; local_1c = local_1c + 1) {
 *(int *)((long)__ptr + (long)local_1c * 4) = local_1c << 1;
 }
 local_c = *(unsigned int *)((long)__ptr + (long)(param_1 / 2) * 4);
 free(__ptr);
 }
 return local_c;
}

// Function: heap_calloc @ 0x1016e0
static int heap_calloc(int param_1)
{
 void *__ptr;
 int local_20;
 int local_1c;
 int local_c;
 __ptr = calloc((long)param_1,4);
 if (__ptr == (void *)0x0) {
 local_c = -1;
 }
 else {
 local_1c = 0;
 for (local_20 = 0; local_20 < param_1; local_20 = local_20 + 1) {
 local_1c = *(int *)((long)__ptr + (long)local_20 * 4) + local_1c;
 }
 free(__ptr);
 local_c = local_1c;
 }
 return local_c;
}

// Function: heap_realloc @ 0x101770
static unsigned int heap_realloc(void)
{
 int iVar1;
 void *__ptr;
 void *__ptr_00;
 unsigned int local_34;
 int local_2c;
 int local_1c;
 unsigned int local_c;
 __ptr = malloc(0x14);
 if (__ptr == (void *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 for (local_1c = 0; local_1c < 5; local_1c = local_1c + 1) {
 *(int *)((long)__ptr + (long)local_1c * 4) = local_1c + 1;
 }
 iVar1 = *(int *)((long)__ptr + 8);
 __ptr_00 = realloc(__ptr,0x28);
 if (__ptr_00 == (void *)0x0) {
 free(__ptr);
 local_c = 0xfffffffe;
 }
 else {
 for (local_2c = 5; local_2c < 10; local_2c = local_2c + 1) {
 *(int *)((long)__ptr_00 + (long)local_2c * 4) = local_2c * 10;
 }
 if (*(int *)((long)__ptr_00 + 8) == iVar1) {
 local_34 = *(unsigned int *)((long)__ptr_00 + 0x14);
 }
 else {
 local_34 = 0xfffffffd;
 }
 free(__ptr_00);
 local_c = local_34;
 }
 }
 return local_c;
}

// Function: heap_array @ 0x101890
static unsigned int heap_array(int param_1)
{
 void *__ptr;
 int local_1c;
 unsigned int local_c;
 __ptr = malloc((long)param_1 << 2);
 if (__ptr == (void *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 for (local_1c = 0; local_1c < param_1; local_1c = local_1c + 1) {
 *(int *)((long)__ptr + (long)local_1c * 4) = local_1c * 3;
 }
 local_c = *(unsigned int *)((long)__ptr + (long)(param_1 / 2) * 4);
 free(__ptr);
 }
 return local_c;
}

// Function: heap_struct @ 0x101930
static int heap_struct(int param_1)
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

// Function: heap_nested @ 0x1019a0
static unsigned int heap_nested(void **param_1)
{
 void *pvVar1;
 unsigned int local_c;
 pvVar1 = malloc(0x10);
 *param_1 = pvVar1;
 if (*param_1 == (void *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 *(unsigned int *)*param_1 = 10;
 pvVar1 = malloc(0x10);
 *(void **)((long)*param_1 + 8) = pvVar1;
 if (*(long *)((long)*param_1 + 8) == 0) {
 free(*param_1);
 local_c = 0xfffffffe;
 }
 else {
 **(unsigned int **)((long)*param_1 + 8) = 0x14;
 *(unsigned long long *)(*(long *)((long)*param_1 + 8) + 8) = 0;
 local_c = 0;
 }
 }
 return local_c;
}

// Function: linked_list_heap @ 0x101a60
static int linked_list_heap(void)
{
 int *piVar1;
 int *piVar2;
 int *local_48;
 int local_3c;
 int local_24;
 int *local_20;
 int *local_18;
 local_18 = (int *)0x0;
 local_20 = (int *)0x0;
 local_24 = 0;
 while( 1 ) {
 if (4 < local_24) {
 local_3c = 0;
 for (local_48 = local_18; local_48 != (int *)0x0; local_48 = *(int **)(local_48 + 2)) {
 local_3c = *local_48 + local_3c;
 }
 while (local_18 != (int *)0x0) {
 piVar2 = *(int **)(local_18 + 2);
 free(local_18);
 local_18 = piVar2;
 }
 return local_3c;
 }
 piVar2 = (int *)malloc(0x10);
 if (piVar2 == (int *)0x0) break;
 *piVar2 = local_24 * 10;
 *(unsigned long long *)(piVar2 + 2) = 0;
 piVar1 = piVar2;
 if (local_18 != (int *)0x0) {
 *(int **)(local_20 + 2) = piVar2;
 piVar1 = local_18;
 }
 local_18 = piVar1;
 local_24 = local_24 + 1;
 local_20 = piVar2;
 }
 while (local_18 != (int *)0x0) {
 piVar2 = *(int **)(local_18 + 2);
 free(local_18);
 local_18 = piVar2;
 }
 return -1;
}

// Function: create_tree_node @ 0x101bc0
static unsigned int * create_tree_node(unsigned int param_1)
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

// Function: tree_heap_traversal @ 0x101c10
static int tree_heap_traversal(void)
{
 int *__ptr;
 unsigned long long uVar1;
 int local_c;
 __ptr = (int *)create_tree_node(10);
 if (__ptr == (int *)0x0) {
 local_c = -1;
 }
 else {
 unsigned int *puVar1_tmp;
 puVar1_tmp = create_tree_node(0x14);
 *(unsigned long long *)(__ptr + 2) = (unsigned long long)puVar1_tmp;
 puVar1_tmp = create_tree_node(0x1e);
 *(unsigned long long *)(__ptr + 4) = (unsigned long long)puVar1_tmp;
 if ((*(long *)(__ptr + 2) == 0) || (*(long *)(__ptr + 4) == 0)) {
 if (*(long *)(__ptr + 2) != 0) {
 free(*(void **)(__ptr + 2));
 }
 if (*(long *)(__ptr + 4) != 0) {
 free(*(void **)(__ptr + 4));
 }
 free(__ptr);
 local_c = -2;
 }
 else {
 local_c = *__ptr + **(int **)(__ptr + 2) + **(int **)(__ptr + 4);
 free(*(void **)(__ptr + 2));
 free(*(void **)(__ptr + 4));
 free(__ptr);
 }
 }
 return local_c;
}

// Function: memory_leak @ 0x101d30
static unsigned int memory_leak(int param_1)
{
 void *pvVar1;
 int local_1c;
 unsigned int local_c;
 pvVar1 = malloc((long)param_1 << 2);
 if (pvVar1 == (void *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 for (local_1c = 0; local_1c < param_1; local_1c = local_1c + 1) {
 *(int *)((long)pvVar1 + (long)local_1c * 4) = local_1c;
 }
 local_c = *(unsigned int *)((long)pvVar1 + (long)(param_1 / 2) * 4);
 }
 return local_c;
}

// Function: dangling_pointer @ 0x101dc0
static uint dangling_pointer(void)
{
 uint *__ptr;
 uint local_c;
 __ptr = (uint *)malloc(4);
 if (__ptr == (uint *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 *__ptr = 0x2a;
 printf("value before free: %d\n",(unsigned long)*__ptr);
 free(__ptr);
 local_c = *__ptr;
 }
 return local_c;
}

// Function: double_free @ 0x101e40
static unsigned int double_free(unsigned int *param_1)
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

// Function: heap_overflow @ 0x101ec0
static unsigned int heap_overflow(void)
{
 unsigned int *__ptr;
 int local_1c;
 unsigned int local_c;
 __ptr = (unsigned int *)malloc(0x28);
 if (__ptr == (unsigned int *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 for (local_1c = 0; local_1c < 0xb; local_1c = local_1c + 1) {
 __ptr[local_1c] = local_1c * 100;
 }
 local_c = *__ptr;
 free(__ptr);
 }
 return local_c;
}

// Function: test_heap_memory @ 0x101f40
static void test_heap_memory(void)
{
 uint uVar1;
 uint local_1c;
 uint local_18;
 pid_t local_14;
 void *local_10;
 printf(&DAT_0010314e);
 uVar1 = heap_basic(10);
 printf("HEAP-L2-01 (heap_basic): %d\n",(unsigned long)uVar1);
 uVar1 = heap_calloc(5);
 printf("HEAP-L2-02 (heap_calloc): %d\n",(unsigned long)uVar1);
 uVar1 = heap_realloc();
 printf("HEAP-L2-03 (heap_realloc): %d\n",(unsigned long)uVar1);
 uVar1 = heap_array(10);
 printf("HEAP-L2-04 (heap_array): %d\n",(unsigned long)uVar1);
 uVar1 = heap_struct(5);
 printf("HEAP-L2-05 (heap_struct): %d\n",(unsigned long)uVar1);
 local_10 = (void *)0x0;
 uVar1 = heap_nested(&local_10);
 printf("HEAP-L2-06 (heap_nested): %d\n",(unsigned long)uVar1);
 if (local_10 != (void *)0x0) {
 free(*(void **)((long)local_10 + 8));
 free(local_10);
 }
 uVar1 = linked_list_heap();
 printf("HEAP-L3-01 (linked_list_heap): %d\n",(unsigned long)uVar1);
 uVar1 = tree_heap_traversal();
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n",(unsigned long)uVar1);
 uVar1 = memory_leak(5);
 printf("HEAP-L3-03 (memory_leak): %d\n",(unsigned long)uVar1);
 printf("HEAP-L3-04 (dangling_pointer): ");
 local_14 = fork();
 if (local_14 != 0) {
 if (local_14 < 1) {
 perror(&DAT_0010331d);
 }
 else {
 waitpid(local_14,(int *)&local_1c,0);
 if ((local_1c & 0x7f) == 0) {
 printf(&DAT_001032b7,(unsigned long)(uint)((int)(local_1c & 0xff00) >> 8));
 }
 else if ('\0' < (char)(((byte)local_1c & 0x7f) + 1) >> 1) {
 printf(&DAT_001032dc,(unsigned long)(local_1c & 0x7f));
 }
 }
 return;
 }
 local_18 = dangling_pointer();
 printf(&DAT_001032a7,(unsigned long)local_18);
 exit(0);
}

// Function: global_var_access @ 0x102130
static int global_var_access(void)
{
 global_counter = global_counter + 1;
 return global_counter;
}

// Function: global_var_read @ 0x102150
static int global_var_read(void)
{
 return global_counter << 1;
}

// Function: global_array_access @ 0x102160
static unsigned int global_array_access(int param_1)
{
 unsigned int local_c;
 if ((param_1 < 0) || (9 < param_1)) {
 local_c = 0xffffffff;
 }
 else {
 local_c = *(unsigned int *)(global_array + (long)param_1 * 4);
 }
 return local_c;
}

// Function: static_local @ 0x1021a0
static int static_local(int param_1)
{
 int local_c;
 if (param_1 == 0) {
 local_c = static_local_counter + 1;
 }
 else {
 local_c = 0;
 }
 static_local_counter = local_c;
 return local_c;
}

// Function: call_static_func @ 0x1021f0
static int call_static_func(unsigned int param_1)
{
 int iVar1;
 iVar1 = static_helper(param_1);
 return iVar1 + 1;
}

// Function: access_extern_global @ 0x102220
static int access_extern_global(void)
{
 return extern_global_var + 100;
}

// Function: call_extern_func @ 0x102240
static void call_extern_func(void)
{
 extern_function(5);
 return;
}

// Function: read_const_data @ 0x102250
static int read_const_data(void)
{
 return (char)const_string[4] + 0x2a;
}

// Function: access_bss_var @ 0x102270
static unsigned int access_bss_var(void)
{
 return bss_var;
}

// Function: access_bss_buffer @ 0x102280
static int access_bss_buffer(void)
{
 return (int)bss_buffer;
}

// Function: global_struct_access @ 0x102290
static int global_struct_access(void)
{
 return global_point + _DAT_001060d4;
}

// Function: set_file_static @ 0x1022b0
static void set_file_static(unsigned int param_1)
{
 file_scope_static = param_1;
 return;
}

// Function: get_file_static @ 0x1022d0
static unsigned int get_file_static(void)
{
 return file_scope_static;
}

// Function: set_global_callback @ 0x1022e0
static void set_global_callback(unsigned int (*param_1)(unsigned int))
{
 global_func_ptr = param_1;
 return;
}

// Function: call_global_callback @ 0x102300
static unsigned int call_global_callback(unsigned int param_1)
{
 unsigned int local_c;
 if (global_func_ptr == 0) {
 local_c = 0xffffffff;
 }
 else {
 local_c = (*global_func_ptr)(param_1);
 }
 return local_c;
}

// Function: global_heap_store @ 0x102340
static unsigned int global_heap_store(unsigned int *param_1)
{
 unsigned int local_c;
 global_heap_ptr = param_1;
 if (param_1 == (unsigned int *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 local_c = *param_1;
 }
 return local_c;
}

// Function: static_complex_init @ 0x102380
static int static_complex_init(void)
{
 return complex_init + _DAT_001060e8 + _DAT_001060f0;
}

// Function: tls_access @ 0x1023a0
static int tls_access(unsigned int param_1)
{
 static unsigned int tls_var = 0;
 tls_var = param_1;
 return tls_var << 1;
}

// Function: init_order_test @ 0x1023c0
static void init_order_test(void)
{
 unsigned int local_c;
 local_c = 0x14;
 init_depends_on(&local_c);
 return;
}

// Function: init_depends_on @ 0x1023e0
static unsigned int init_depends_on(unsigned int *param_1)
{
 if (param_1 != (unsigned int *)0x0) {
 init_depends_on_static_depends = *param_1;
 }
 return init_depends_on_static_depends;
}



// Function: test_static_global @ 0x102410
static void test_static_global(void)
{
 uint uVar1;
 unsigned int local_c;
 printf(&DAT_00103333);
 uVar1 = global_var_access();
 printf("STM-L1-01 (global_var_access): %d\n",(unsigned long)uVar1);
 uVar1 = global_var_read();
 printf("STM-L1-01 (global_var_read): %d\n",(unsigned long)uVar1);
 uVar1 = global_array_access(5);
 printf("STM-L1-02 (global_array_access): %d\n",(unsigned long)uVar1);
 static_local(1);
 uVar1 = static_local(0);
 printf("STM-L1-03 (static_local): %d\n",(unsigned long)uVar1);
 uVar1 = static_local(0);
 printf("STM-L1-03 (static_local): %d\n",(unsigned long)uVar1);
 uVar1 = call_static_func(5);
 printf("STM-L1-04 (call_static_func): %d\n",(unsigned long)uVar1);
 uVar1 = access_extern_global();
 printf("STM-L2-01 (access_extern_global): %d\n",(unsigned long)uVar1);
 call_extern_func();
 printf("STM-L2-02 (call_extern_func): called\n");
 uVar1 = read_const_data();
 printf("STM-L2-03 (read_const_data): %d\n",(unsigned long)uVar1);
 uVar1 = access_bss_var();
 printf("STM-L2-04 (access_bss_var): %d\n",(unsigned long)uVar1);
 uVar1 = access_bss_buffer();
 printf("STM-L2-04 (access_bss_buffer): %d\n",(unsigned long)uVar1);
 uVar1 = global_struct_access();
 printf("STM-L2-05 (global_struct_access): %d\n",(unsigned long)uVar1);
 set_file_static(0x32);
 uVar1 = get_file_static();
 printf("STM-L2-06 (file_static): %d\n",(unsigned long)uVar1);
 set_global_callback(double_value);
 uVar1 = call_global_callback(5);
 printf("STM-L2-07 (global_func_ptr): %d\n",(unsigned long)uVar1);
 local_c = 100;
 uVar1 = global_heap_store(&local_c);
 printf("STM-L2-08 (global_heap_store): %d\n",(unsigned long)uVar1);
 uVar1 = static_complex_init();
 printf("STM-L2-09 (static_complex_init): %d\n",(unsigned long)uVar1);
 uVar1 = tls_access(10);
 printf("STM-L3-01 (tls_access): %d\n",(unsigned long)uVar1);
 init_order_test();
 printf("STM-L3-02 (init_order_test): called\n");
 return;
}

// Function: memop_memset @ 0x102600
static uint memop_memset(byte *param_1,size_t param_2,uint param_3)
{
 uint local_c;
 if ((param_1 == (byte *)0x0) || (param_2 == 0)) {
 local_c = 0xffffffff;
 }
 else {
 memset(param_1,param_3 & 0xff,param_2);
 local_c = (uint)*param_1;
 }
 return local_c;
}

// Function: memop_memcpy @ 0x102660
static unsigned int memop_memcpy(void *param_1,void *param_2,unsigned long param_3)
{
 unsigned int local_c;
 if (((param_1 == (void *)0x0) || (param_2 == (void *)0x0)) || (param_3 == 0)) {
 local_c = 0xffffffff;
 }
 else {
 memcpy(param_1,param_2,param_3);
 local_c = *(unsigned int *)((long)param_1 + ((param_3 >> 2) - 1) * 4);
 }
 return local_c;
}

// Function: memop_memmove @ 0x1026e0
static int memop_memmove(void *param_1,unsigned long param_2)
{
 int local_c;
 if ((param_1 == (void *)0x0) || (param_2 < 2)) {
 local_c = -1;
 }
 else {
 memmove((void *)((long)param_1 + 1),param_1,param_2 - 1);
 local_c = (int)*(char *)((long)param_1 + 1);
 }
 return local_c;
}

// Function: memop_memcmp @ 0x102740
static unsigned int memop_memcmp(void *param_1,void *param_2,size_t param_3)
{
 int iVar1;
 unsigned int local_30;
 unsigned int local_c;
 if (((param_1 == (void *)0x0) || (param_2 == (void *)0x0)) || (param_3 == 0)) {
 local_c = 0;
 }
 else {
 iVar1 = memcmp(param_1,param_2,param_3);
 if (iVar1 < 1) {
 local_30 = 0;
 if (iVar1 < 0) {
 local_30 = 0xffffffff;
 }
 }
 else {
 local_30 = 1;
 }
 local_c = local_30;
 }
 return local_c;
}

// Function: memop_bzero @ 0x1027d0
static uint memop_bzero(byte *param_1,size_t param_2)
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

// Function: memop_bcopy @ 0x102820
static uint memop_bcopy(void *param_1,byte *param_2,size_t param_3)
{
 uint local_c;
 if (((param_1 == (void *)0x0) || (param_2 == (byte *)0x0)) || (param_3 == 0)) {
 local_c = 0xffffffff;
 }
 else {
 my_bcopy(param_1,param_2,param_3);
 local_c = (uint)*param_2;
 }
 return local_c;
}

// Function: memop_unaligned_access @ 0x102890
static unsigned int memop_unaligned_access(long param_1)
{
 unsigned int local_c;
 if (param_1 == 0) {
 local_c = 0xffffffff;
 }
 else {
 local_c = *(unsigned int *)(param_1 + 1);
 }
 return local_c;
}

// Function: memop_memory_barrier @ 0x1028d0
static int memop_memory_barrier(int *param_1)
{
 int local_c;
 if (param_1 == (int *)0x0) {
 local_c = -1;
 }
 else {
 local_c = *param_1 + *param_1;
 }
 return local_c;
}

// Function: test_memory_op_functions @ 0x102910
static void test_memory_op_functions(void)
{
 uint uVar1;
 unsigned int local_18c;
 unsigned long long local_186;
 char local_17e [4];
 unsigned int local_17a;
 char local_176 [10];
 unsigned long long local_16c;
 unsigned int local_164;
 unsigned long long local_160;
 unsigned int local_158;
 unsigned long long local_153;
 unsigned short local_14b;
 char local_149;
 char local_148 [32];
 unsigned long long local_128;
 unsigned long long local_120;
 unsigned int local_118;
 char local_108 [256];
 printf(&DAT_00103596);
 local_128 = 0x140000000a;
 local_120 = 0x280000001e;
 local_118 = 0x32;
 memset(local_148,0,0x14);
 uVar1 = memop_memset(local_108,10,0x41);
 printf("MEMOP-L2-01: %d\n",(unsigned long)uVar1);
 uVar1 = memop_memcpy(local_148,&local_128,0x14);
 printf("MEMOP-L2-02: %d\n",(unsigned long)uVar1);
 // Set bytes of local_153 using proper byte manipulation
 ((char*)&local_153)[0] = 'H';
 ((char*)&local_153)[1] = 'e';
 ((char*)&local_153)[2] = 'l';
 ((char*)&local_153)[3] = 'l';
 ((char*)&local_153)[4] = 'o';
 ((char*)&local_153)[5] = 'W';
 ((char*)&local_153)[6] = 'o';
 ((char*)&local_153)[7] = 'r';
 local_14b = 0x646c;
 local_149 = 0;
 uVar1 = memop_memmove(&local_153,10);
 printf("MEMOP-L2-03: %c\n",(unsigned long)uVar1);
 local_160 = 0x200000001;
 local_158 = 3;
 local_16c = 0x200000001;
 local_164 = 4;
 uVar1 = memop_memcmp(&local_160,&local_16c,0xc);
 printf("MEMOP-L2-04: %d\n",(unsigned long)uVar1);
 memop_bzero(local_176,10);
 printf("MEMOP-L2-05: %d\n", 0);
 local_17a = 0x4030201;
 memset(local_17e,0,4);
 uVar1 = memop_bcopy(&local_17a,local_17e,4);
 printf("MEMOP-L2-06: %d\n",(unsigned long)uVar1);
 local_186 = 0x706050403020100;
 uVar1 = memop_unaligned_access((long)&local_186);
 printf("MEMOP-L3-01: 0x%x\n",(unsigned long)uVar1);
 local_18c = 5;
 uVar1 = memop_memory_barrier(&local_18c);
 printf("MEMOP-L3-02: %d\n",(unsigned long)uVar1);
 return;
}

// Function: main @ 0x102b20
int main(void)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}


