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
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef int bool;
typedef unsigned int uint;
typedef unsigned long long ulonglong;
typedef void (*code)(void);

pid_t fork(void);

/* Forward declarations */
int double_value(int param_1);
undefined4 memop_unaligned_access(int param_1);
uint32_t init_depends_on(uint32_t *param_1);
int tls_access(undefined4 param_1);
uint memop_bcopy(void *param_1, byte *param_2, size_t param_3);
int memop_memory_barrier(int *param_1);
extern int extern_function(int param_1);

/* Atomic compare-and-swap helper function */
static int atomic_compare_exchange(void *ptr, uint32_t old_val, uint32_t new_val)
{
    return __sync_val_compare_and_swap((uint32_t*)ptr, old_val, new_val);
}

/* Define SUB_ffff0fc0 as a function pointer for atomic operations */
#define SUB_ffff0fc0 atomic_compare_exchange

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/3/3_clang_O0_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */





/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: local_vars @ 000107e8 */

int local_vars(int param_1)

{
 return param_1 * 2 + 10;
}



/* Function: local_array @ 0001081c */

uint32_t local_array(int param_1)

{
 int local_30;
 int aiStack_2c [11];
 
 for (local_30 = 0; local_30 < 10; local_30 = local_30 + 1) {
 aiStack_2c[local_30] = local_30 * param_1;
 }
 return aiStack_2c[5];
}



/* Function: local_struct @ 00010874 */

int local_struct(int param_1)

{
 return param_1 * 3;
}



/* Function: address_of_local @ 000108a4 */

uint32_t address_of_local(uint32_t *param_1)

{
 *param_1 = 0x2a;
 return 0x2a;
}



/* Function: address_of_array @ 000108cc */

int address_of_array(int *param_1)

{
 return *param_1 + *param_1;
}



/* Function: large_stack_frame @ 00010900 */

uint8_t large_stack_frame(void)

{
 int local_814;
 uint8_t auStack_810 [2048];
 
 for (local_814 = 0; local_814 < 0x800; local_814 = local_814 + 1) {
  auStack_810[local_814] = (char)local_814;
 }
 return auStack_810[0x400];
}



/* Function: vla_stack @ 0001095c */

uint32_t vla_stack(int param_1)

{
 int iVar1;
 int local_28 [5];
 uint32_t local_14;
 
 if ((param_1 < 1) || (1000 < param_1)) {
  local_14 = 0xffffffff;
 }
 else {
 iVar1 = -0x28 - (param_1 * 4 + 7U & 0xfffffff8);
  for (local_28[1] = 0; local_28[1] < param_1; local_28[1] = local_28[1] + 1) {
   *(int *)((int)local_28 + local_28[1] * 4 + iVar1 + 0x28) = local_28[1] << 1;
  }
  local_14 = *(uint32_t *)
  ((int)local_28 + ((param_1 - (param_1 >> 0x1f)) * 2 & 0xfffffffdU) + iVar1 + 0x28);
 }
 return local_14;
}



/* Function: alloca_usage @ 00010a40 */

uint32_t alloca_usage(int param_1)

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
 local_20[3] = *(uint32_t *)
 ((int)local_20 + ((param_1 - (param_1 >> 0x1f)) * 2 & 0xfffffffdU) + iVar1 + 0x20
 );
 }
 return local_20[3];
}



/* Function: stack_alias @ 00010b00 */

/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffff0 : 0x00010b54 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint32_t stack_alias(uint32_t *param_1)

{
 uint32_t local_4;
 
 local_4 = *param_1;
 return local_4;
}



/* Function: test_stack_memory @ 00010b78 */

void test_stack_memory(void)

{
 uint32_t uVar1;
 uint32_t local_38;
 uint32_t local_34;
 uint32_t local_30;
 uint32_t local_2c;
 uint8_t auStack_c [4];
 
 printf("=== Testing Stack Memory ===\n");
 uVar1 = local_vars(5);
 printf("MEM-L1-01 (local_vars): %d\n",uVar1);
 uVar1 = local_array(5);
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
 uVar1 = stack_alias(&local_38);
 printf("MEM-L2-04 (stack_alias): %d\n",uVar1);
 return;
}



/* Function: heap_basic @ 00010ce0 */

uint32_t heap_basic(int param_1)

{
 void *__ptr;
 uint32_t local_18;
 uint32_t local_c;
 
 __ptr = malloc(param_1 << 2);
 if (__ptr == (void *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
 *(int *)((int)__ptr + local_18 * 4) = local_18 << 1;
 }
 local_c = *(uint32_t *)((int)__ptr + ((param_1 - (param_1 >> 0x1f)) * 2 & 0xfffffffdU));
 free(__ptr);
 }
 return local_c;
}



/* Function: heap_calloc @ 00010da0 */

int heap_calloc(size_t param_1)

{
 void *__ptr;
 uint32_t local_1c;
 uint32_t local_18;
 uint32_t local_c;
 
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



/* Function: heap_realloc @ 00010e50 */

uint32_t heap_realloc(void)

{
 void *__ptr;
 int iVar1;
 void *__ptr_00;
 uint32_t local_28;
 uint32_t local_20;
 uint32_t local_14;
 uint32_t local_c;
 
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
 local_28 = *(uint32_t *)((int)__ptr_00 + 0x14);
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



/* Function: heap_array @ 00010fb0 */

uint32_t heap_array(int param_1)

{
 void *__ptr;
 uint32_t local_18;
 uint32_t local_c;
 
 __ptr = malloc(param_1 << 2);
 if (__ptr == (void *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
 *(int *)((int)__ptr + local_18 * 4) = local_18 * 3;
 }
 local_c = *(uint32_t *)((int)__ptr + ((param_1 - (param_1 >> 0x1f)) * 2 & 0xfffffffdU));
 free(__ptr);
 }
 return local_c;
}



/* Function: heap_struct @ 00011070 */

int heap_struct(int param_1)

{
 int *__ptr;
 int local_c;
 
 __ptr = malloc(8);
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



/* Function: heap_nested @ 000110fc */

uint32_t heap_nested(int *param_1)

{
 void *pvVar1;
 uint32_t local_c;
 
 pvVar1 = malloc(8);
 *param_1 = (int)pvVar1;
 if (*param_1 == 0) {
 local_c = 0xffffffff;
 }
 else {
 *(uint32_t *)*param_1 = 10;
 pvVar1 = malloc(8);
 *(void **)(*param_1 + 4) = pvVar1;
 if (*(int *)(*param_1 + 4) == 0) {
 free((void *)*param_1);
 local_c = 0xfffffffe;
 }
 else {
 **(uint32_t **)(*param_1 + 4) = 0x14;
 *(uint32_t *)(*(int *)(*param_1 + 4) + 4) = 0;
 local_c = 0;
 }
 }
 return local_c;
}



/* Function: linked_list_heap @ 000111d0 */

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
 while( 1 ) {
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
 piVar2 = malloc(8);
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



/* Function: create_tree_node @ 00011364 */

uint32_t * create_tree_node(uint32_t param_1)

{
 uint32_t *puVar1;
 
 puVar1 = malloc(0xc);
 if (puVar1 != (uint32_t *)0x0) {
 *puVar1 = param_1;
 puVar1[1] = 0;
 puVar1[2] = 0;
 }
 return puVar1;
}



/* Function: tree_heap_traversal @ 000113c4 */

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



/* Function: memory_leak @ 000114fc */

uint32_t memory_leak(int param_1)

{
 void *pvVar1;
 uint32_t local_18;
 uint32_t local_c;
 
 pvVar1 = malloc(param_1 << 2);
 if (pvVar1 == (void *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
 *(int *)((int)pvVar1 + local_18 * 4) = local_18;
 }
 local_c = *(uint32_t *)((int)pvVar1 + ((param_1 - (param_1 >> 0x1f)) * 2 & 0xfffffffdU));
 }
 return local_c;
}



/* Function: dangling_pointer @ 000115a8 */

uint32_t dangling_pointer(void)

{
 uint32_t *__ptr;
 uint32_t local_c;
 
 __ptr = malloc(4);
 if (__ptr == (uint32_t *)0x0) {
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



/* Function: double_free @ 00011638 */

uint32_t double_free(uint32_t *param_1)

{
 uint32_t *local_10;
 uint32_t local_c;
 
 if (param_1 == (uint32_t *)0x0) {
 local_10 = malloc(4);
 if (local_10 == (uint32_t *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 *local_10 = 10;
 free(local_10);
 free(local_10);
 local_c = 0xfffffffe;
 }
 }
 else {
 local_c = *param_1;
 }
 return local_c;
}



/* Function: heap_overflow @ 000116c8 */

uint32_t heap_overflow(void)

{
 int *__ptr;
 int local_14;
 uint32_t local_c;
 
 __ptr = malloc(0x28);
 if (__ptr == (int *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 for (local_14 = 0; local_14 < 0xb; local_14 = local_14 + 1) {
 __ptr[local_14] = local_14 * 100;
 }
 local_c = *(uint32_t *)__ptr;
 free(__ptr);
 }
 return local_c;
}



/* Function: test_heap_memory @ 00011770 */

void test_heap_memory(void)

{
 uint32_t uVar1;
 uint32_t local_18;
 uint32_t local_14;
 pid_t local_10;
 void *local_c;
 
 printf("=== Testing Heap Memory ===\n");
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
 perror("fork failed");
 }
 else {
 waitpid(local_10,(int *)&local_18,0);
 if ((local_18 & 0x7f) == 0) {
 printf("exit status: %d\n",local_18 >> 8 & 0xff);
 }
 else if (0 < (int)(((local_18 & 0x7f) + 1) * 0x1000000) >> 0x19) {
 printf("signal: %d\n",local_18 & 0x7f);
 }
 }
 return;
 }
 local_14 = dangling_pointer();
 printf("%d\n",local_14);
 /* WARNING: Subroutine does not return */
 exit(0);
}



/* Global variable declarations */
static int global_counter = 0;
static uint32_t global_array[10];
static int static_local_counter = 0;
static uint32_t file_scope_static = 0;
static uint32_t bss_var = 0;
static uint8_t bss_buffer[256];
static const char const_string[] = "Hello World";
extern int extern_global_var;
static uint32_t (*global_func_ptr)(uint32_t);
static uint32_t *global_heap_ptr;
struct {
    int _0_4_;
    int _4_4_;
} global_point;
static struct {
    int _0_4_;
    int _8_4_;
    int _16_4_;
} complex_init;
static uint32_t init_depends_on_static_depends = 0;

/* Function: global_var_access @ 000119b0 */

int global_var_access(void)

{
 global_counter = global_counter + 1;
 return global_counter;
}



/* Function: global_var_read @ 000119e0 */

int global_var_read(void)

{
 return global_counter << 1;
}



/* Function: global_array_access @ 000119f4 */

 uint32_t global_array_access(int param_1)

{
 uint32_t local_4;
 
 if ((param_1 < 0) || (9 < param_1)) {
 local_4 = 0xffffffff;
 }
 else {
 local_4 = *(uint32_t *)(&global_array + param_1 * 4);
 }
 return local_4;
}



/* Function: static_local @ 00011a50 */

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



/* Function: call_static_func @ 00011ac4 */

int call_static_func(uint32_t param_1)

{
 int iVar1;
 
 iVar1 = static_helper(param_1);
 return iVar1 + 1;
}



/* Function: static_helper @ 00011aec */

int static_helper(int param_1)

{
 return param_1 << 1;
}



/* Function: access_extern_global @ 00011b04 */

int access_extern_global(void)

{
 return extern_global_var + 100;
}



/* Function: call_extern_func @ 00011b1c */

void call_extern_func(void)

{
 extern_function(5);
 return;
}



/* Function: read_const_data @ 00011b34 */

int read_const_data(void)

{
 return *(byte *)(const_string + 4) + 0x2a;
}



/* Function: access_bss_var @ 00011b4c */

uint32_t access_bss_var(void)

{
 return bss_var;
}



/* Function: access_bss_buffer @ 00011b5c */

uint8_t access_bss_buffer(void)

{
 return bss_buffer[0];
}



/* Function: global_struct_access @ 00011b70 */

int global_struct_access(void)

{
 return (int)(uintptr_t)&global_point + global_point._4_4_;
}



/* Function: set_file_static @ 00011b94 */

void set_file_static(uint32_t param_1)

{
 file_scope_static = param_1;
 return;
}



/* Function: get_file_static @ 00011bb8 */

uint32_t get_file_static(void)

{
 return file_scope_static;
}



/* Function: set_global_callback @ 00011bc8 */

void set_global_callback(uint32_t param_1)

{
 global_func_ptr = param_1;
 return;
}



/* Function: call_global_callback @ 00011bec */

uint32_t call_global_callback(uint32_t param_1)

{
 uint32_t local_c;
 
 if (global_func_ptr == (code *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 (*global_func_ptr)(param_1);
 local_c = param_1 << 1;
 }
 return local_c;
}



/* Function: global_heap_store @ 00011c50 */

uint32_t global_heap_store(uint32_t *param_1)

{
 uint32_t local_4;
 
 global_heap_ptr = param_1;
 if (param_1 == (uint32_t *)0x0) {
 local_4 = 0xffffffff;
 }
 else {
 local_4 = *param_1;
 }
 return local_4;
}



/* Function: static_complex_init @ 00011cb4 */

int static_complex_init(void)

{
 return complex_init._0_4_ + complex_init._8_4_ + complex_init._16_4_;
}



/* Function: tls_access @ 00011ce0 */

int tls_access(undefined4 param_1)

{
 int iVar1;
 undefined8 uVar2;
 
 uVar2 = (undefined8)(uintptr_t)&param_1;
 iVar1 = (int)((ulonglong)uVar2 >> 0x20);
 return *(int *)((int)uVar2 + iVar1) << 1;
}



/* Function: init_order_test @ 00011d18 */

void init_order_test(void)

{
 undefined4 local_c;
 
 local_c = 0x14;
 init_depends_on(&local_c);
 return;
}



/* Function: init_depends_on @ 00011d40 */

uint32_t init_depends_on(uint32_t *param_1)

{
 if (param_1 != (uint32_t *)0x0) {
 init_depends_on_static_depends = *param_1;
 }
 return init_depends_on_static_depends;
}



/* Function: test_static_global @ 00011d88 */

void test_static_global(void)

{
 undefined4 uVar1;
 undefined4 local_c;
 
 printf("=== Testing Static/Global Memory ===\n");
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
 uVar1 = 15;
 printf("STM-L2-02 (call_extern_func): %d\n",uVar1);
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



/* Function: double_value @ 00011fa8 */

int double_value(int param_1)

{
 return param_1 << 1;
}



/* Function: memop_memset @ 00011fc0 */

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



/* Function: memop_memcpy @ 00012034 */

uint32_t memop_memcpy(void *param_1,void *param_2,uint param_3)

{
 uint32_t local_c;
 
 if (((param_1 == (void *)0x0) || (param_2 == (void *)0x0)) || (param_3 == 0)) {
 local_c = 0xffffffff;
 }
 else {
 memcpy(param_1,param_2,param_3);
 local_c = *(uint32_t *)((int)param_1 + ((param_3 & 0xfffffffc) - 4));
 }
 return local_c;
}



/* Function: memop_memmove @ 000120c4 */

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



/* Function: memop_memcmp @ 00012138 */

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



/* Function: memop_bzero @ 000121e8 */

uint memop_bzero(byte *param_1,size_t param_2)

{
 uint32_t local_c;
 
 if (param_1 == (byte *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 memset(param_1,0,param_2);
 local_c = (uint)*param_1;
 }
 return local_c;
}



/* Function: memop_bcopy @ 00012248 */

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



/* Function: memop_unaligned_access @ 000122cc */

undefined4 memop_unaligned_access(int param_1)

{
 undefined4 local_4;
 
 if (param_1 == 0) {
 local_4 = 0xffffffff;
 }
 else {
 local_4 = *(undefined4 *)(param_1 + 1);
 }
 return local_4;
}



/* Function: memop_memory_barrier @ 0001232c */

int memop_memory_barrier(int *param_1)

{
 undefined4 local_c;
 
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



/* Function: test_memory_op_functions @ 00012390 */

void test_memory_op_functions(void)

{
 undefined4 uVar1;
 undefined4 local_17c;
 undefined4 local_178;
 undefined4 local_174;
 undefined4 local_170;
 undefined4 local_16c;
 undefined1 auStack_166 [10];
 undefined4 local_15c;
 undefined4 local_158;
 undefined4 local_154;
 undefined4 local_150;
 undefined4 local_14c;
 undefined4 local_148;
 undefined4 local_144;
 undefined4 local_140;
 undefined2 local_13c;
 undefined1 local_13a;
 undefined4 local_138;
 undefined4 local_134;
 undefined4 local_130;
 undefined4 local_12c;
 undefined4 local_128;
 undefined4 local_124;
 undefined4 uStack_120;
 undefined4 uStack_11c;
 undefined4 uStack_118;
 undefined4 uStack_114;
 undefined1 auStack_110 [256];
 
 printf("=== Testing Memory Operations ===\n");
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
 printf("MEMOP-L2-05: %d\n",uVar1);
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



/* Function: main @ 000125b4 */

undefined4 main(void)

{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}







/* Function: __sync_fetch_and_add_4 @ 00012604 */





/* Function: __sync_fetch_and_sub_4 @ 0001263c */





/* Function: __sync_fetch_and_or_4 @ 00012674 */



/* Function: __sync_fetch_and_and_4 @ 000126ac */



/* Function: __sync_fetch_and_xor_4 @ 000126e4 */



/* Function: __sync_fetch_and_nand_4 @ 0001271c */



/* Function: __sync_fetch_and_add_2 @ 00012758 */



/* Function: __sync_fetch_and_sub_2 @ 000127b8 */



/* Function: __sync_fetch_and_or_2 @ 00012818 */



/* Function: __sync_fetch_and_and_2 @ 00012878 */



/* Function: __sync_fetch_and_xor_2 @ 000128d8 */



/* Function: __sync_fetch_and_nand_2 @ 00012938 */



/* Function: __sync_fetch_and_add_1 @ 0001299c */



/* Function: __sync_fetch_and_sub_1 @ 000129f8 */



/* Function: __sync_fetch_and_or_1 @ 00012a54 */



/* Function: __sync_fetch_and_and_1 @ 00012ab0 */



/* Function: __sync_fetch_and_xor_1 @ 00012b0c */



/* Function: __sync_fetch_and_nand_1 @ 00012b68 */



/* Function: __sync_add_and_fetch_4 @ 00012bc8 */



/* Function: __sync_sub_and_fetch_4 @ 00012c00 */



/* Function: __sync_or_and_fetch_4 @ 00012c38 */



/* Function: __sync_and_and_fetch_4 @ 00012c70 */



/* Function: __sync_xor_and_fetch_4 @ 00012ca8 */



/* Function: __sync_nand_and_fetch_4 @ 00012ce0 */



/* Function: __sync_add_and_fetch_2 @ 00012d1c */



/* Function: __sync_sub_and_fetch_2 @ 00012d84 */



/* Function: __sync_or_and_fetch_2 @ 00012dec */



/* Function: __sync_and_and_fetch_2 @ 00012e54 */



/* Function: __sync_xor_and_fetch_2 @ 00012ebc */



/* Function: __sync_nand_and_fetch_2 @ 00012f24 */



/* Function: __sync_add_and_fetch_1 @ 00012f90 */



/* Function: __sync_sub_and_fetch_1 @ 00012ff4 */



/* Function: __sync_or_and_fetch_1 @ 00013058 */



/* Function: __sync_and_and_fetch_1 @ 000130bc */



/* Function: __sync_xor_and_fetch_1 @ 00013120 */



/* Function: __sync_nand_and_fetch_1 @ 00013184 */



/* Function: __sync_val_compare_and_swap_4 @ 000131ec */



/* Function: __sync_val_compare_and_swap_2 @ 0001323c */



/* Function: __sync_val_compare_and_swap_1 @ 000132b4 */



/* Function: __sync_bool_compare_and_swap_4 @ 00013328 */



/* Function: __sync_bool_compare_and_swap_2 @ 00013354 */



/* Function: __sync_bool_compare_and_swap_1 @ 00013370 */



/* Function: __sync_lock_test_and_set_4 @ 00013398 */



/* Function: __sync_lock_test_and_set_2 @ 000133d0 */



/* Function: __sync_lock_test_and_set_1 @ 00013430 */



/* Function: __sync_lock_release_8 @ 0001348c */



/* Function: __sync_lock_release_4 @ 000134b0 */



/* Function: __sync_lock_release_2 @ 000134d0 */



/* Function: __sync_lock_release_1 @ 000134f0 */




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 114 */
