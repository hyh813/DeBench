#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdbool.h>

/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
/* typedef long long int64_t; */
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Additional type definitions for decompiled code */
typedef int undefined4;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef void (*code)(void);
typedef unsigned char undefined1;
typedef unsigned long long undefined8;
typedef void undefined;

/* Additional type definitions */
typedef int __pid_t;
typedef unsigned char byte;

/* Global variable declarations */
int global_counter = 0;
int global_array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int static_local_counter = 0;
int extern_global_var = 42;
char const_string[] = "const_data_string";
int bss_var = 0;
char bss_buffer[256] = {0};
int global_point = 0;
int _DAT_001060d4 = 0;
int file_scope_static = 0;
undefined4 (*global_func_ptr)(undefined4) = 0;
undefined4 *global_heap_ptr = 0;
int complex_init = 0;
int _DAT_001060e8 = 0;
int _DAT_001060f0 = 0;
int init_depends_on_static_depends = 0;
char DAT_00103004[] = "Stack Memory Tests:\n";
char DAT_0010314e[] = "Heap Memory Tests:\n";
char DAT_0010331d[] = "fork error";
char DAT_001032b7[] = "Child exited with status %d\n";
char DAT_001032dc[] = "signal %d\n";
char DAT_001032a7[] = "value after free: %d\n";
char DAT_00103333[] = "Static/Global Memory Tests:\n";
char DAT_00103596[] = "Memory Operation Tests:\n";

/* Function declarations */
int static_helper(int param_1);
static int extern_function(int param_1);
undefined4 init_depends_on(undefined4 *param_1);
int double_value(int param_1);
void *my_strncpy(void *dest, const void *src, unsigned long n);
int local_vars(int param_1);
undefined4 local_array(int param_1);
int local_struct(int param_1);
undefined4 address_of_local(undefined4 *param_1);
int address_of_array(int *param_1);
int large_stack_frame(void);
undefined4 vla_stack(uint param_1);
undefined4 alloca_usage(int param_1);
undefined4 stack_alias(undefined4 *param_1);
void test_stack_memory(void);
undefined4 heap_basic(int param_1);
int heap_calloc(int param_1);
undefined4 heap_realloc(void);
undefined4 heap_array(int param_1);
int heap_struct(int param_1);
undefined4 heap_nested(long *param_1);
int linked_list_heap(void);
undefined4 *create_tree_node(undefined4 param_1);
int tree_heap_traversal(void);
undefined4 memory_leak(int param_1);
uint dangling_pointer(void);
undefined4 double_free(undefined4 *param_1);
undefined4 heap_overflow(void);
void test_heap_memory(void);
int global_var_access(void);
int global_var_read(void);
undefined4 global_array_access(int param_1);
int static_local(int param_1);
int call_static_func(undefined4 param_1);
int access_extern_global(void);
void call_extern_func(void);
int read_const_data(void);
undefined4 access_bss_var(void);
int access_bss_buffer(void);
int global_struct_access(void);
void set_file_static(undefined4 param_1);
undefined4 get_file_static(void);
void set_global_callback(undefined8 param_1);
undefined4 call_global_callback(undefined4 param_1);
undefined4 global_heap_store(undefined4 *param_1);
int static_complex_init(void);
int tls_access(undefined4 param_1);
undefined4 init_order_test(void);
void test_static_global(void);
uint memop_memset(byte *param_1,size_t param_2,uint param_3);
undefined4 memop_memcpy(void *param_1,void *param_2,ulong param_3);
int memop_memmove(void *param_1,ulong param_2);
undefined4 memop_memcmp(void *param_1,void *param_2,size_t param_3);
uint memop_bzero(byte *param_1,size_t param_2);
uint memop_bcopy(void *param_1,byte *param_2,size_t param_3);
undefined4 memop_unaligned_access(long param_1);
int memop_memory_barrier(int *param_1);
void test_memory_op_functions(void);


/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/3/3_clang_O0_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */









/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: local_vars @ 00101210 */

int local_vars(int param_1)

{
 return param_1 * 2 + 10;
}



/* Function: local_array @ 00101240 */

undefined4 local_array(int param_1)

{
 int local_3c;
 int aiStack_38 [12];
 
 for (local_3c = 0; local_3c < 10; local_3c = local_3c + 1) {
 aiStack_38[local_3c] = local_3c * param_1;
 }
 return aiStack_38[5];
}



/* Function: local_struct @ 00101280 */

int local_struct(int param_1)

{
 return param_1 * 3;
}



/* Function: address_of_local @ 001012a0 */

undefined4 address_of_local(undefined4 *param_1)

{
 *param_1 = 0x2a;
 return 0x2a;
}



/* Function: address_of_array @ 001012c0 */

int address_of_array(int *param_1)

{
 return *param_1 + *param_1;
}



/* Function: large_stack_frame @ 001012f0 */

int large_stack_frame(void)

{
 int local_80c;
 char acStack_808 [2048];
 
 for (local_80c = 0; local_80c < 0x800; local_80c = local_80c + 1) {
 acStack_808[local_80c] = (char)local_80c;
 }
 return (int)acStack_808[0x400];
}



/* Function: vla_stack @ 00101360 */

undefined4 vla_stack(uint param_1)

{
 long lVar1;
 int aiStack_38 [5];
 int local_24;
 undefined4 local_c;
 
 if (((int)param_1 < 1) || (1000 < (int)param_1)) {
 local_c = 0xffffffff;
 }
 else {
 lVar1 = -0x38 - ((ulong)param_1 * 4 + 0xf & 0xfffffffffffffff0);
 for (local_24 = 0; local_24 < (int)param_1; local_24 = local_24 + 1) {
 *(int *)((long)aiStack_38 + (long)local_24 * 4 + lVar1 + 0x38) = local_24 << 1;
 }
 local_c = *(undefined4 *)((long)aiStack_38 + (long)((int)param_1 / 2) * 4 + lVar1 + 0x38);
 }
 return local_c;
}



/* Function: alloca_usage @ 00101410 */

undefined4 alloca_usage(int param_1)

{
 long lVar1;
 int local_28 [7];
 undefined4 local_c;
 
 if (param_1 < 1) {
 local_c = 0xffffffff;
 }
 else {
 lVar1 = -0x28 - ((long)param_1 * 4 + 0xfU & 0xfffffffffffffff0);
 for (local_28[3] = 0; local_28[3] < param_1; local_28[3] = local_28[3] + 1) {
 *(int *)((long)local_28 + (long)local_28[3] * 4 + lVar1 + 0x28) = local_28[3] * 3;
 }
 local_c = *(undefined4 *)((long)local_28 + (long)(param_1 / 2) * 4 + lVar1 + 0x28);
 }
 return local_c;
}



/* Function: stack_alias @ 001014b0 */

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffdc : 0x001014fa */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 stack_alias(undefined4 *param_1)

{
 undefined4 local_24;
 undefined4 local_c;
 
 if (param_1 == (undefined4 *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 local_c = *param_1;
 }
 return local_c;
}



/* Function: test_stack_memory @ 00101510 */

void test_stack_memory(void)

{
 uint uVar1;
 undefined4 local_3c;
 undefined4 local_38;
 undefined4 local_34;
 undefined4 local_30;
 undefined1 local_c [4];
 
 printf(&DAT_00103004);
 uVar1 = local_vars(5);
 printf("MEM-L1-01 (local_vars): %d\n",(ulong)uVar1);
 uVar1 = local_array(2);
 printf("MEM-L1-02 (local_array): %d\n",(ulong)uVar1);
 uVar1 = local_struct(5);
 printf("MEM-L1-03 (local_struct): %d\n",(ulong)uVar1);
 address_of_local(local_c);
 printf("MEM-L1-04 (address_of_local): %d\n",(ulong)local_c);
 memset(&local_38,0,0x28);
 local_38 = 1;
 local_34 = 2;
 local_30 = 3;
 uVar1 = address_of_array(&local_38);
 printf("MEM-L1-05 (address_of_array): %d\n",(ulong)uVar1);
 uVar1 = large_stack_frame();
 printf("MEM-L2-01 (large_stack_frame): %d\n",(ulong)uVar1);
 uVar1 = vla_stack(10);
 printf("MEM-L2-02 (vla_stack): %d\n",(ulong)uVar1);
 uVar1 = alloca_usage(10);
 printf("MEM-L2-03 (alloca_usage): %d\n",(ulong)uVar1);
 local_3c = 0;
 uVar1 = stack_alias(&local_3c);
 printf("MEM-L2-04 (stack_alias): %d\n",(ulong)uVar1);
 return;
}



/* Function: heap_basic @ 00101640 */

undefined4 heap_basic(int param_1)

{
 void *__ptr;
 undefined4 local_1c;
 undefined4 local_c;
 
 __ptr = malloc((long)param_1 << 2);
 if (__ptr == (void *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 for (local_1c = 0; local_1c < param_1; local_1c = local_1c + 1) {
 *(int *)((long)__ptr + (long)local_1c * 4) = local_1c << 1;
 }
 local_c = *(undefined4 *)((long)__ptr + (long)(param_1 / 2) * 4);
 free(__ptr);
 }
 return local_c;
}



/* Function: heap_calloc @ 001016e0 */

int heap_calloc(int param_1)

{
 void *__ptr;
 undefined4 local_20;
 undefined4 local_1c;
 undefined4 local_c;
 
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



/* Function: heap_realloc @ 00101770 */

undefined4 heap_realloc(void)

{
 int iVar1;
 void *__ptr;
 void *__ptr_00;
 undefined4 local_34;
 undefined4 local_2c;
 undefined4 local_1c;
 undefined4 local_c;
 
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
 local_34 = *(undefined4 *)((long)__ptr_00 + 0x14);
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



/* Function: heap_array @ 00101890 */

undefined4 heap_array(int param_1)

{
 void *__ptr;
 undefined4 local_1c;
 undefined4 local_c;
 
 __ptr = malloc((long)param_1 << 2);
 if (__ptr == (void *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 for (local_1c = 0; local_1c < param_1; local_1c = local_1c + 1) {
 *(int *)((long)__ptr + (long)local_1c * 4) = local_1c * 3;
 }
 local_c = *(undefined4 *)((long)__ptr + (long)(param_1 / 2) * 4);
 free(__ptr);
 }
 return local_c;
}



/* Function: heap_struct @ 00101930 */

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



/* Function: heap_nested @ 001019a0 */

undefined4 heap_nested(long *param_1)

{
 void *pvVar1;
 undefined4 local_c;
 
 pvVar1 = malloc(0x10);
 *param_1 = (long)(uintptr_t)pvVar1;
 if (*param_1 == 0) {
  local_c = 0xffffffff;
 }
 else {
  *(undefined4 *)(uintptr_t)*param_1 = 10;
  pvVar1 = malloc(0x10);
  *(undefined8 *)((uintptr_t)*param_1 + 8) = (undefined8)(uintptr_t)pvVar1;
 if (*(long *)(*param_1 + 8) == 0) {
 free((void *)*param_1);
 local_c = 0xfffffffe;
 }
 else {
 **(undefined4 **)(*param_1 + 8) = 0x14;
 *(undefined8 *)(*(long *)(*param_1 + 8) + 8) = 0;
 local_c = 0;
 }
 }
 return local_c;
}



/* Function: linked_list_heap @ 00101a60 */

int linked_list_heap(void)

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
 while( true ) {
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
 piVar2 = malloc(0x10);
 if (piVar2 == (int *)0x0) break;
 *piVar2 = local_24 * 10;
 piVar2[2] = 0;
 piVar2[3] = 0;
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



/* Function: create_tree_node @ 00101bc0 */

undefined4 * create_tree_node(undefined4 param_1)

{
 undefined4 *puVar1;
 
 puVar1 = malloc(0x18);
 if (puVar1 != (undefined4 *)0x0) {
 *puVar1 = param_1;
 *(undefined8 *)(puVar1 + 2) = 0;
 *(undefined8 *)(puVar1 + 4) = 0;
 }
 return puVar1;
}



/* Function: tree_heap_traversal @ 00101c10 */

int tree_heap_traversal(void)

{
 int *__ptr;
 undefined8 uVar1;
 int local_c;
 
 __ptr = (int *)create_tree_node(10);
 if (__ptr == (int *)0x0) {
 local_c = -1;
 }
 else {
 uVar1 = (undefined8)(uintptr_t)create_tree_node(0x14);
 *(undefined8 *)(__ptr + 2) = uVar1;
 uVar1 = (undefined8)(uintptr_t)create_tree_node(0x1e);
 *(undefined8 *)(__ptr + 4) = uVar1;
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



/* Function: memory_leak @ 00101d30 */

undefined4 memory_leak(int param_1)

{
 void *pvVar1;
 undefined4 local_1c;
 undefined4 local_c;
 
 pvVar1 = malloc((long)param_1 << 2);
 if (pvVar1 == (void *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 for (local_1c = 0; local_1c < param_1; local_1c = local_1c + 1) {
 *(int *)((long)pvVar1 + (long)local_1c * 4) = local_1c;
 }
 local_c = *(undefined4 *)((long)pvVar1 + (long)(param_1 / 2) * 4);
 }
 return local_c;
}



/* Function: dangling_pointer @ 00101dc0 */

uint dangling_pointer(void)

{
 uint *__ptr;
 uint local_c;
 
 __ptr = malloc(4);
 if (__ptr == (uint *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 *__ptr = 0x2a;
 printf("value before free: %d\n",(ulong)*__ptr);
 free(__ptr);
 local_c = *__ptr;
 }
 return local_c;
}



/* Function: double_free @ 00101e40 */

undefined4 double_free(undefined4 *param_1)

{
 undefined4 *__ptr;
 undefined4 local_c;
 
 if (param_1 == (undefined4 *)0x0) {
 __ptr = malloc(4);
 if (__ptr == (undefined4 *)0x0) {
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



/* Function: heap_overflow @ 00101ec0 */

undefined4 heap_overflow(void)

{
 undefined4 *__ptr;
 int local_1c;
 undefined4 local_c;
 
 __ptr = malloc(0x28);
 if (__ptr == (undefined4 *)0x0) {
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



/* Function: test_heap_memory @ 00101f40 */

void test_heap_memory(void)

{
 uint uVar1;
 uint local_1c;
 uint local_18;
 __pid_t local_14;
 void *local_10;
 
 printf(&DAT_0010314e);
 uVar1 = heap_basic(10);
 printf("HEAP-L2-01 (heap_basic): %d\n",(ulong)uVar1);
 uVar1 = heap_calloc(5);
 printf("HEAP-L2-02 (heap_calloc): %d\n",(ulong)uVar1);
 uVar1 = heap_realloc();
 printf("HEAP-L2-03 (heap_realloc): %d\n",(ulong)uVar1);
 uVar1 = heap_array(10);
 printf("HEAP-L2-04 (heap_array): %d\n",(ulong)uVar1);
 uVar1 = heap_struct(5);
 printf("HEAP-L2-05 (heap_struct): %d\n",(ulong)uVar1);
 local_10 = (void *)0x0;
 uVar1 = heap_nested(&local_10);
 printf("HEAP-L2-06 (heap_nested): %d\n",(ulong)uVar1);
 if (local_10 != (void *)0x0) {
 free(*(void **)((long)local_10 + 8));
 free(local_10);
 }
 uVar1 = linked_list_heap();
 printf("HEAP-L3-01 (linked_list_heap): %d\n",(ulong)uVar1);
 uVar1 = tree_heap_traversal();
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n",(ulong)uVar1);
 uVar1 = memory_leak(5);
 printf("HEAP-L3-03 (memory_leak): %d\n",(ulong)uVar1);
 printf("HEAP-L3-04 (dangling_pointer): ");
 local_14 = fork();
 if (local_14 != 0) {
 if (local_14 < 1) {
 perror(&DAT_0010331d);
 }
 else {
 waitpid(local_14,(int *)&local_1c,0);
 if ((local_1c & 0x7f) == 0) {
 printf(&DAT_001032b7,(ulong)(uint)((int)(local_1c & 0xff00) >> 8));
 }
 else if ('\0' < (char)(((byte)local_1c & 0x7f) + 1) >> 1) {
 printf(&DAT_001032dc,(ulong)(local_1c & 0x7f));
 }
 }
 return;
 }
 local_18 = dangling_pointer();
 printf(&DAT_001032a7,(ulong)local_18);
 /* WARNING: Subroutine does not return */
 exit(0);
}



/* Function: global_var_access @ 00102130 */

int global_var_access(void)

{
 global_counter = global_counter + 1;
 return global_counter;
}



/* Function: global_var_read @ 00102150 */

int global_var_read(void)

{
 return global_counter << 1;
}



/* Function: global_array_access @ 00102160 */

undefined4 global_array_access(int param_1)

{
 undefined4 local_c;
 
 if ((param_1 < 0) || (9 < param_1)) {
 local_c = 0xffffffff;
 }
 else {
 local_c = *(undefined4 *)(global_array + (long)param_1 * 4);
 }
 return local_c;
}



/* Function: static_local @ 001021a0 */

int static_local(int param_1)

{
 undefined4 local_c;
 
 if (param_1 == 0) {
 local_c = static_local_counter + 1;
 }
 else {
 local_c = 0;
 }
 static_local_counter = local_c;
 return local_c;
}



/* Function: call_static_func @ 001021f0 */

int call_static_func(undefined4 param_1)

{
 int iVar1;
 
 iVar1 = static_helper(param_1);
 return iVar1 + 1;
}



/* Function: static_helper @ 00102210 */

int static_helper(int param_1)

{
 return param_1 << 1;
}



/* Function: extern_function @ 00102215 */

static int extern_function(int param_1)

{
 return param_1 + 1;
}



/* Function: access_extern_global @ 00102220 */

int access_extern_global(void)

{
 return extern_global_var + 100;
}







/* Function: call_extern_func @ 00102240 */

void call_extern_func(void)

{
 extern_function(5);
 return;
}



/* Function: my_strncpy @ 00102250 */

void *my_strncpy(void *dest, const void *src, unsigned long n)

{
 char *d;
 const char *s;
 
 d = (char *)dest;
 s = (const char *)src;
 while ((n != 0) && (*s != '\0')) {
 *d = *s;
 d = d + 1;
 s = s + 1;
 n = n - 1;
 }
 while (n != 0) {
 *d = '\0';
 d = d + 1;
 n = n - 1;
 }
 return dest;
}



/* Function: read_const_data @ 00102250 */

int read_const_data(void)

{
 return (char)const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 00102270 */

undefined4 access_bss_var(void)

{
 return bss_var;
}



/* Function: access_bss_buffer @ 00102280 */

int access_bss_buffer(void)

{
 return (int)bss_buffer;
}



/* Function: global_struct_access @ 00102290 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int global_struct_access(void)

{
 return global_point + _DAT_001060d4;
}



/* Function: set_file_static @ 001022b0 */

void set_file_static(undefined4 param_1)

{
 file_scope_static = param_1;
 return;
}



/* Function: get_file_static @ 001022d0 */

undefined4 get_file_static(void)

{
 return file_scope_static;
}



/* Function: set_global_callback @ 001022e0 */

void set_global_callback(undefined8 param_1)

{
 global_func_ptr = (undefined4 (*)(undefined4))(uintptr_t)param_1;
 return;
}



/* Function: call_global_callback @ 00102300 */

undefined4 call_global_callback(undefined4 param_1)

{
 undefined4 local_c;
 
 if (global_func_ptr == (code *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 local_c = (*global_func_ptr)(param_1);
 }
 return local_c;
}



/* Function: global_heap_store @ 00102340 */

undefined4 global_heap_store(undefined4 *param_1)

{
 undefined4 local_c;
 
 global_heap_ptr = param_1;
 if (param_1 == (undefined4 *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 local_c = *param_1;
 }
 return local_c;
}



/* Function: static_complex_init @ 00102380 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int static_complex_init(void)

{
 return complex_init + _DAT_001060e8 + _DAT_001060f0;
}



/* Function: tls_access @ 001023a0 */

int tls_access(undefined4 param_1)

{
 long in_FS_OFFSET;
 
 *(undefined4 *)(in_FS_OFFSET + -4) = param_1;
 return *(int *)(in_FS_OFFSET + -4) << 1;
}



/* Function: init_order_test @ 001023c0 */

undefined4 init_order_test(void)

{
 undefined4 local_c;
 
 local_c = 0x14;
 return init_depends_on(&local_c);
}



/* Function: init_depends_on @ 001023e0 */

undefined4 init_depends_on(undefined4 *param_1)

{
 if (param_1 != (undefined4 *)0x0) {
 init_depends_on_static_depends = *param_1;
 }
 return init_depends_on_static_depends;
}



/* Function: test_static_global @ 00102410 */

void test_static_global(void)

{
 uint uVar1;
 undefined4 local_c;
 
 printf(&DAT_00103333);
 uVar1 = global_var_access();
 printf("STM-L1-01 (global_var_access): %d\n",(ulong)uVar1);
 uVar1 = global_var_read();
 printf("STM-L1-01 (global_var_read): %d\n",(ulong)uVar1);
 uVar1 = global_array_access(5);
 printf("STM-L1-02 (global_array_access): %d\n",(ulong)uVar1);
 static_local(1);
 uVar1 = static_local(0);
 printf("STM-L1-03 (static_local): %d\n",(ulong)uVar1);
 uVar1 = static_local(0);
 printf("STM-L1-03 (static_local): %d\n",(ulong)uVar1);
 uVar1 = call_static_func(5);
 printf("STM-L1-04 (call_static_func): %d\n",(ulong)uVar1);
 uVar1 = access_extern_global();
 printf("STM-L2-01 (access_extern_global): %d\n",(ulong)uVar1);
 call_extern_func();
 printf("STM-L2-02 (call_extern_func): called\n");
 uVar1 = read_const_data();
 printf("STM-L2-03 (read_const_data): %d\n",(ulong)uVar1);
 uVar1 = access_bss_var();
 printf("STM-L2-04 (access_bss_var): %d\n",(ulong)uVar1);
 uVar1 = access_bss_buffer();
 printf("STM-L2-04 (access_bss_buffer): %d\n",(ulong)uVar1);
 uVar1 = global_struct_access();
 printf("STM-L2-05 (global_struct_access): %d\n",(ulong)uVar1);
 set_file_static(0x32);
 uVar1 = get_file_static();
 printf("STM-L2-06 (file_static): %d\n",(ulong)uVar1);
 set_global_callback((undefined8)(uintptr_t)double_value);
 uVar1 = call_global_callback(5);
 printf("STM-L2-07 (global_func_ptr): %d\n",(ulong)uVar1);
 local_c = 100;
 uVar1 = global_heap_store(&local_c);
 printf("STM-L2-08 (global_heap_store): %d\n",(ulong)uVar1);
 uVar1 = static_complex_init();
 printf("STM-L2-09 (static_complex_init): %d\n",(ulong)uVar1);
 uVar1 = tls_access(10);
 printf("STM-L3-01 (tls_access): %d\n",(ulong)uVar1);
 init_order_test();
 printf("STM-L3-02 (init_order_test): called\n");
 return;
}



/* Function: double_value @ 001025f0 */

int double_value(int param_1)

{
 return param_1 << 1;
}



/* Function: memop_memset @ 00102600 */

uint memop_memset(byte *param_1,size_t param_2,uint param_3)

{
 undefined4 local_c;
 
 if ((param_1 == (byte *)0x0) || (param_2 == 0)) {
 local_c = 0xffffffff;
 }
 else {
 memset(param_1,param_3 & 0xff,param_2);
 local_c = (uint)*param_1;
 }
 return local_c;
}



/* Function: memop_memcpy @ 00102660 */

undefined4 memop_memcpy(void *param_1,void *param_2,ulong param_3)

{
 undefined4 local_c;
 
 if (((param_1 == (void *)0x0) || (param_2 == (void *)0x0)) || (param_3 == 0)) {
 local_c = 0xffffffff;
 }
 else {
 memcpy(param_1,param_2,param_3);
 local_c = *(undefined4 *)((long)param_1 + ((param_3 >> 2) - 1) * 4);
 }
 return local_c;
}



/* Function: memop_memmove @ 001026e0 */

int memop_memmove(void *param_1,ulong param_2)

{
 undefined4 local_c;
 
 if ((param_1 == (void *)0x0) || (param_2 < 2)) {
 local_c = -1;
 }
 else {
 memmove((void *)((long)param_1 + 1),param_1,param_2 - 1);
 local_c = (int)*(char *)((long)param_1 + 1);
 }
 return local_c;
}



/* Function: memop_memcmp @ 00102740 */

undefined4 memop_memcmp(void *param_1,void *param_2,size_t param_3)

{
 int iVar1;
 undefined4 local_30;
 undefined4 local_c;
 
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



/* Function: memop_bzero @ 001027d0 */

uint memop_bzero(byte *param_1,size_t param_2)

{
 undefined4 local_c;
 
 if (param_1 == (byte *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 memset(param_1,0,param_2);
 local_c = (uint)*param_1;
 }
 return local_c;
}



/* Function: memop_bcopy @ 00102820 */

uint memop_bcopy(void *param_1,byte *param_2,size_t param_3)

{
 undefined4 local_c;
 
 if (((param_1 == (void *)0x0) || (param_2 == (byte *)0x0)) || (param_3 == 0)) {
 local_c = 0xffffffff;
 }
 else {
 memcpy(param_2,param_1,param_3);
 local_c = (uint)*param_2;
 }
 return local_c;
}



/* Function: memop_unaligned_access @ 00102890 */

undefined4 memop_unaligned_access(long param_1)

{
 undefined4 local_c;
 
 if (param_1 == 0) {
 local_c = 0xffffffff;
 }
 else {
 local_c = *(undefined4 *)(param_1 + 1);
 }
 return local_c;
}



/* Function: memop_memory_barrier @ 001028d0 */

int memop_memory_barrier(int *param_1)

{
 undefined4 local_c;
 
 if (param_1 == (int *)0x0) {
 local_c = -1;
 }
 else {
 local_c = *param_1 + *param_1;
 }
 return local_c;
}



/* Function: test_memory_op_functions @ 00102910 */

void test_memory_op_functions(void)

{
 uint uVar1;
 undefined4 local_18c;
 undefined8 local_186;
 undefined1 local_17e [4];
 undefined4 local_17a;
 undefined1 local_176 [10];
 undefined8 local_16c;
 undefined4 local_164;
 undefined8 local_160;
 undefined4 local_158;
 char local_153 [43];
 undefined8 local_128;
 undefined8 local_120;
 undefined4 local_118;
 undefined1 local_108 [256];
 
 printf(&DAT_00103596);
 local_128 = 0x140000000a;
 local_120 = 0x280000001e;
 local_118 = 0x32;
 memset(local_153 + 0xb,0,0x14);
 uVar1 = memop_memset(local_108,10,0x41);
 printf("MEMOP-L2-01: %d\n",(ulong)uVar1);
 uVar1 = memop_memcpy(local_153 + 0xb,&local_128,0x14);
 printf("MEMOP-L2-02: %d\n",(ulong)uVar1);
 my_strncpy(local_153,"HelloWorld",0xb);
 uVar1 = memop_memmove(local_153,10);
 printf("MEMOP-L2-03: %c\n",(ulong)uVar1);
 local_160 = 0x200000001;
 local_158 = 3;
 local_16c = 0x200000001;
 local_164 = 4;
 uVar1 = memop_memcmp(&local_160,&local_16c,0xc);
 printf("MEMOP-L2-04: %d\n",(ulong)uVar1);
 memop_bzero(local_176,10);
 printf("MEMOP-L2-05: %d\n",(ulong)local_176[0]);
 local_17a = 0x4030201;
 memset(local_17e,0,4);
 uVar1 = memop_bcopy(&local_17a,local_17e,4);
 printf("MEMOP-L2-06: %d\n",(ulong)uVar1);
 local_186 = 0x706050403020100;
 uVar1 = memop_unaligned_access((long)&local_186);
 printf("MEMOP-L3-01: 0x%x\n",(ulong)uVar1);
 local_18c = 5;
 uVar1 = memop_memory_barrier(&local_18c);
 printf("MEMOP-L3-02: %d\n",(ulong)uVar1);
 return;
}



/* Function: main @ 00102b20 */

undefined8 main(void)

{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}








/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 65 */
