/* Auto-injected type definitions by preprocessor */
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long uintptr_t;
// intptr_t and ptrdiff_t already defined in <stddef.h>
// typedef long intptr_t;
// typedef unsigned long ptrdiff_t;
typedef int (*code)(void);
typedef int (*code_int)(int);
typedef int (*atomic_func)(int old_val, int new_val, int *ptr);
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Forward declaration for atomic CAS function */
extern int SUB_ffff0fc0(int old_val, int new_val, int *ptr);

/* Atomic compare-and-swap implementation */
int SUB_ffff0fc0(int old_val, int new_val, int *ptr) {
    int result;
    __sync_val_compare_and_swap(ptr, old_val, new_val);
    result = (*ptr == new_val) ? 0 : 1;
    return result;
}

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/3/3_clang_O2_no_g
 * Processor: ARM
 * Compiler Spec: default
 */

/* Global variable declarations */
int global_counter = 0;
int static_local_counter = 0;
int extern_global_var = 0;
int global_array[10];
const char *const_string = "Hello World";
int file_scope_static = 0;
int (*global_func_ptr)(int) = (code_int)NULL;
int *global_heap_ptr = NULL;
char bss_var = 0;
char bss_buffer[256];



/* Data declarations */
const char DAT_00012db6[] = "=== Memory Operation Tests ===";
const char DAT_00012e04[] = "HelloWorld";
const char DAT_00012e10[] = "HelloWorld";


/* CRT stub function _init removed by preprocessor */





/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: local_vars @ 000107bc */

int local_vars(int param_1)

{
 return param_1 * 2 + 10;
}



/* Function: local_array @ 000107c8 */

int local_array(int param_1)

{
 return param_1 * 5;
}



/* Function: local_struct @ 000107d0 */

int local_struct(int param_1)

{
 return param_1 * 3;
}



/* Function: address_of_local @ 000107d8 */

uint32_t address_of_local(uint32_t *param_1)

{
 *param_1 = 0x2a;
 return 0x2a;
}



/* Function: address_of_array @ 000107e8 */

int address_of_array(int *param_1)

{
 return *param_1 << 1;
}



/* Function: large_stack_frame @ 000107f4 */

uint8_t large_stack_frame(void)

{
 int iVar1;
 uint8_t local_808 [2048];
 
 iVar1 = 0;
 do {
 local_808[iVar1] = (char)iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x800);
 return local_808[0x400];
}



/* Function: vla_stack @ 00010824 */

uint32_t vla_stack(int param_1)

{
 int iVar1;
 uint32_t uVar2;
 int iVar3;
 int iVar4;
 int iStack_10;
 
 uVar2 = 0xffffffff;
 if (0xfffffc17 < param_1 - 0x3e9U) {
 iVar1 = -0x10 - (param_1 * 4 + 7U & 0xfffffff8);
 iVar4 = 0;
 iVar3 = param_1;
 do {
 *(int *)((int)&iStack_10 + iVar4 * 2 + iVar1 + 0x10) = iVar4;
 iVar4 = iVar4 + 2;
 iVar3 = iVar3 + -1;
 } while (iVar3 != 0);
 uVar2 = *(uint32_t *)
 ((int)&iStack_10 + ((param_1 - (param_1 >> 0x1f)) * 2 & 0xfffffffdU) + iVar1 + 0x10);
 }
 return uVar2;
}



/* Function: alloca_usage @ 00010898 */

uint32_t alloca_usage(int param_1)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int local_10;
 
 if (0 < param_1) {
 iVar1 = -0x10 - (param_1 * 4 + 7U & 0xfffffff8);
 iVar2 = 0;
 iVar3 = 0;
 do {
 *(int *)((int)&local_10 + iVar3 * 4 + iVar1 + 0x10) = iVar2;
 iVar3 = iVar3 + 1;
 iVar2 = iVar2 + 3;
 } while (param_1 != iVar3);
 return *(uint32_t *)
 ((int)&local_10 + ((param_1 - (param_1 >> 0x1f)) * 2 & 0xfffffffdU) + iVar1 + 0x10);
 }
 return 0xffffffff;
}



/* Function: stack_alias @ 000108fc */

uint32_t stack_alias(void)

{
 return 0x14;
}



/* Function: test_stack_memory @ 00010904 */

void test_stack_memory(void)

{
 int iVar1;
 uint8_t local_808 [2048];
 
 puts("=== Stack Memory Tests ===");
 printf("MEM-L1-01 (local_vars): %d\n",0x14);
 printf("MEM-L1-02 (local_array): %d\n",10);
 printf("MEM-L1-03 (local_struct): %d\n",0xf);
 printf("MEM-L1-04 (address_of_local): %d\n",0x2a);
 printf("MEM-L1-05 (address_of_array): %d\n",2);
 iVar1 = 0;
 do {
 local_808[iVar1] = (uint8_t)iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x800);
 printf("MEM-L2-01 (large_stack_frame): %d\n",(uint32_t)local_808[0x400]);
 printf("MEM-L2-02 (vla_stack): %d\n",10);
 printf("MEM-L2-03 (alloca_usage): %d\n",0xf);
 printf("MEM-L2-04 (stack_alias): %d\n",0x14);
 return;
}



/* Function: heap_basic @ 000109f0 */

uint32_t heap_basic(int param_1)

{
 void *__ptr;
 int iVar1;
 int iVar2;
 uint32_t uVar3;
 
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
 uVar3 = *(uint32_t *)((int)__ptr + ((param_1 - (param_1 >> 0x1f)) * 2 & 0xfffffffdU));
 free(__ptr);
 }
 return uVar3;
}



/* Function: heap_calloc @ 00010a50 */

int heap_calloc(size_t param_1)

{
 int *__ptr;
 int *piVar1;
 int iVar2;
 int iVar3;
 
 __ptr = calloc(param_1,4);
 if (__ptr == (int *)0x0) {
 iVar3 = -1;
 }
 else {
 iVar3 = 0;
 if (1 < (int)param_1) {
 iVar2 = param_1 - 1;
 iVar3 = 0;
 piVar1 = __ptr;
 do {
 piVar1 = piVar1 + 1;
 iVar2 = iVar2 + -1;
 iVar3 = *piVar1 + iVar3;
 } while (iVar2 != 0);
 }
 free(__ptr);
 }
 return iVar3;
}



/* Function: heap_realloc @ 00010aa8 */

uint32_t heap_realloc(void)

{
 uint32_t *__ptr;
 uint32_t *__ptr_00;
 uint32_t uVar1;
 
 __ptr = malloc(0x14);
 if (__ptr == (void *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 __ptr[3] = 4;
 __ptr[4] = 5;
 *__ptr = 1;
 __ptr[1] = 2;
 __ptr[2] = 3;
 __ptr_00 = realloc(__ptr,0x28);
 if (__ptr_00 == (void *)0x0) {
 uVar1 = 0xfffffffe;
 __ptr_00 = __ptr;
 }
 else {
 __ptr_00[9] = 0x5a;
 __ptr_00[6] = 0x3c;
 uVar1 = 0xfffffffd;
 __ptr_00[5] = 0x32;
 __ptr_00[7] = 0x46;
 __ptr_00[8] = 0x50;
 if (__ptr_00[2] == 3) {
 uVar1 = 0x32;
 }
 }
 free(__ptr_00);
 }
 return uVar1;
}



/* Function: heap_array @ 00010b5c */

uint32_t heap_array(int param_1)

{
 int *__ptr;
 int iVar1;
 int *piVar2;
 int iVar3;
 uint32_t uVar4;
 
 __ptr = malloc(param_1 << 2);
 if (__ptr == (void *)0x0) {
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
 uVar4 = *(uint32_t *)((int)__ptr + ((param_1 - (param_1 >> 0x1f)) * 2 & 0xfffffffdU));
 free(__ptr);
 }
 return uVar4;
}



/* Function: heap_struct @ 00010bc0 */

int heap_struct(int param_1)

{
 return param_1 * 3;
}



/* Function: heap_nested @ 00010bc8 */

uint32_t heap_nested(uint32_t **param_1)

{
 uint32_t *__ptr;
 uint32_t *puVar1;
 
 __ptr = malloc(8);
 *param_1 = __ptr;
 if (__ptr == (void *)0x0) {
 return 0xffffffff;
 }
 *__ptr = 10;
 puVar1 = malloc(8);
 __ptr[1] = puVar1;
 if (puVar1 == (void *)0x0) {
 free(__ptr);
 return 0xfffffffe;
 }
 *puVar1 = 0x14;
 puVar1[1] = 0;
 return 0;
}



/* Function: linked_list_heap @ 00010c3c */

int linked_list_heap(void)

{
 int *__ptr;
 int *puVar1;
 int *puVar2;
 int *piVar3;
 int iVar4;
 int iVar5;
 
 __ptr = malloc(8);
 iVar5 = -1;
 if (__ptr != (int *)0x0) {
 *__ptr = 0;
 puVar1 = malloc(8);
 if (puVar1 == (int *)0x0) {
 free(__ptr);
 }
 else {
 *puVar1 = 10;
 puVar1[1] = 0;
 __ptr[1] = (int)puVar1;
 puVar2 = malloc(8);
 if (puVar2 == (int *)0x0) {
 do {
 piVar3 = (int *)__ptr[1];
 free(__ptr);
 __ptr = piVar3;
 } while (piVar3 != (int *)0x0);
 }
 else {
 *puVar2 = 0x14;
 puVar2[1] = 0;
 puVar1[1] = puVar2;
 puVar1 = malloc(8);
 if (puVar1 == (int *)0x0) {
 do {
 piVar3 = (int *)__ptr[1];
 free(__ptr);
 __ptr = piVar3;
 } while (piVar3 != (int *)0x0);
 }
 else {
 *puVar1 = 0x1e;
 puVar1[1] = 0;
 puVar2[1] = puVar1;
 puVar2 = malloc(8);
 if (puVar2 == (int *)0x0) {
 do {
 piVar3 = (int *)__ptr[1];
 free(__ptr);
 __ptr = piVar3;
 } while (piVar3 != (int *)0x0);
 }
 else {
 iVar5 = 0;
 puVar1[1] = puVar2;
 *puVar2 = 0x28;
 puVar2[1] = 0;
 piVar3 = __ptr;
 do {
 iVar4 = *piVar3;
 piVar3 = (int *)piVar3[1];
 iVar5 = iVar4 + iVar5;
 } while (piVar3 != (int *)0x0);
 do {
 piVar3 = (int *)__ptr[1];
 free(__ptr);
 __ptr = piVar3;
 } while (piVar3 != (int *)0x0);
 }
 }
 }
 }
 }
 return iVar5;
}



/* Function: create_tree_node @ 00010d80 */

void create_tree_node(uint32_t param_1)

{
 uint32_t *puVar1;
 
 puVar1 = malloc(0xc);
 if (puVar1 != (void *)0x0) {
 *puVar1 = param_1;
 puVar1[1] = 0;
 puVar1[2] = 0;
 }
 return;
}



/* Function: tree_heap_traversal @ 00010dac */

uint32_t tree_heap_traversal(void)

{
 return 0x3c;
}



/* Function: memory_leak @ 00010db4 */

uint32_t memory_leak(int param_1)

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
 return *(uint32_t *)((int)pvVar1 + ((param_1 - (param_1 >> 0x1f)) * 2 & 0xfffffffdU));
 }
 return 0xffffffff;
}



/* Function: dangling_pointer @ 00010e08 */

uint32_t dangling_pointer(void)

{
 uint32_t *__ptr;
 
 __ptr = malloc(4);
 if (__ptr != (uint32_t *)0x0) {
 printf("value before free: %d\n",0x2a);
 free(__ptr);
 return *__ptr;
 }
 return 0xffffffff;
}



/* Function: double_free @ 00010e50 */

uint32_t double_free(uint32_t *param_1)

{
 uint32_t uVar1;
 
 if (param_1 == (uint32_t *)0x0) {
 uVar1 = 0xfffffffe;
 }
 else {
 uVar1 = *param_1;
 }
 return uVar1;
}



/* Function: heap_overflow @ 00010e60 */

uint32_t heap_overflow(void)

{
 return 0;
}



/* Function: test_heap_memory @ 00010e68 */

void test_heap_memory(void)

{
 uint32_t *puVar1;
 uint32_t *puVar2;
 pid_t __pid;
 char *__format;
 uint32_t uVar3;
 uint32_t uVar4;
 uint32_t local_14;
 
 puts("=== Heap Memory Tests ===");
 printf("HEAP-L2-01 (heap_basic): %d\n",10);
 printf("HEAP-L2-02 (heap_calloc): %d\n",0);
 puVar1 = malloc(0x14);
 if (puVar1 == (uint32_t *)0x0) {
 uVar4 = 0xffffffff;
 }
 else {
 puVar1[3] = 4;
 puVar1[4] = 5;
 *puVar1 = 1;
 puVar1[1] = 2;
 puVar1[2] = 3;
 puVar2 = realloc(puVar1,0x28);
 if (puVar2 == (uint32_t *)0x0) {
 uVar4 = 0xfffffffe;
 puVar2 = puVar1;
 }
 else {
 puVar2[9] = 0x5a;
 puVar2[6] = 0x3c;
 uVar4 = 0xfffffffd;
 puVar2[5] = 0x32;
 puVar2[7] = 0x46;
 puVar2[8] = 0x50;
 if (puVar2[2] == 3) {
 uVar4 = 0x32;
 }
 }
 free(puVar2);
 }
 printf("HEAP-L2-03 (heap_realloc): %d\n",uVar4);
 printf("HEAP-L2-04 (heap_array): %d\n",0xf);
 printf("HEAP-L2-05 (heap_struct): %d\n",0xf);
 puVar1 = malloc(8);
 if (puVar1 == (uint32_t *)0x0) {
 printf("HEAP-L2-06 (heap_nested): %d\n",0xffffffff);
 }
 else {
 *puVar1 = 10;
 puVar2 = malloc(8);
 puVar1[1] = puVar2;
 if (puVar2 == (uint32_t *)0x0) {
 free(puVar1);
 uVar4 = 0xfffffffe;
 }
 else {
 uVar4 = 0;
 *puVar2 = 0x14;
 puVar2[1] = 0;
 }
 printf("HEAP-L2-06 (heap_nested): %d\n",uVar4);
 free((void *)puVar1[1]);
 free(puVar1);
 }
 uVar4 = linked_list_heap();
 printf("HEAP-L3-01 (linked_list_heap): %d\n",uVar4);
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n",0x3c);
 printf("HEAP-L3-03 (memory_leak): %d\n",2);
 printf("HEAP-L3-04 (dangling_pointer): ");
 __pid = fork();
 if (__pid != 0) {
 if (__pid < 1) {
 perror("waitpid failed");
 return;
 }
 waitpid(__pid,(int *)&local_14,0);
 uVar3 = local_14 & 0x7f;
 if (uVar3 == 0) {
 uVar3 = local_14 >> 8 & 0xff;
 __format = "exited, status=%d";
 }
 else {
 if ((int)(uVar3 * 0x1000000 + 0x1000000) < 0x2000000) {
 return;
 }
 __format = "signaled, signal=%d";
 }
 printf(__format,uVar3);
 return;
  }
 uVar4 = dangling_pointer();
 printf("%d\n",uVar4);
 /* WARNING: Subroutine does not return */
 exit(0);
}



/* Function: global_var_access @ 00011108 */

void global_var_access(void)

{
 global_counter = global_counter + 1;
 return;
}



/* Function: global_var_read @ 0001112c */

int global_var_read(void)

{
 return global_counter << 1;
}



/* Function: global_array_access @ 00011140 */

uint32_t global_array_access(uint32_t param_1)

{
 uint32_t uVar1;
 
 uVar1 = 0xffffffff;
 if (param_1 < 10) {
 uVar1 = *(uint32_t *)(&global_array + param_1 * 4);
 }
 return uVar1;
}



/* Function: static_local @ 00011160 */

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



/* Function: call_static_func @ 00011190 */

uint call_static_func(int param_1)

{
 return param_1 << 1 | 1;
}



/* Function: access_extern_global @ 0001119c */

int access_extern_global(void)

{
 return extern_global_var + 100;
}



/* Function: call_extern_func @ 000111b4 */

void call_extern_func(void)

{
 extern_function(5);
 return;
}



/* Function: read_const_data @ 000111bc */

int read_const_data(void)

{
 return *(uint8_t *)(const_string + 4) + 0x2a;
}



/* Function: access_bss_var @ 000111d4 */

uint32_t access_bss_var(void)

{
 return 0;
}



/* Function: access_bss_buffer @ 000111dc */

uint32_t access_bss_buffer(void)

{
 return 0;
}



/* Function: global_struct_access @ 000111e4 */

uint32_t global_struct_access(void)

{
 return 0x1e;
}



/* Function: set_file_static @ 000111ec */

void set_file_static(uint32_t param_1)

{
 file_scope_static = param_1;
 return;
}



/* Function: get_file_static @ 00011200 */

uint32_t get_file_static(void)

{
 return file_scope_static;
}



/* Function: set_global_callback @ 00011210 */

void set_global_callback(uint32_t param_1)

{
 global_func_ptr = param_1;
 return;
}



/* Function: call_global_callback @ 00011224 */

 void call_global_callback(uint32_t param_1)

{
  if (global_func_ptr != (code_int)0x0) {
 /* WARNING: Could not recover jumptable at 0x00011238. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*global_func_ptr)(param_1);
 return;
 }
 return;
}



/* Forward declaration */
int double_value(int param_1);

/* Function: global_heap_store @ 00011240 */

uint32_t global_heap_store(uint32_t *param_1)

{
 uint32_t uVar1;
 
 global_heap_ptr = param_1;
 if (param_1 == (uint32_t *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 uVar1 = *param_1;
 }
 return uVar1;
}



/* Function: static_complex_init @ 00011260 */

uint32_t static_complex_init(void)

{
 return 0xf;
}



/* Function: tls_access @ 00011268 */

int tls_access(int param_1)

{
 return param_1 << 1;
}



/* Function: init_order_test @ 00011270 */

uint32_t init_order_test(void)

{
 return 0x14;
}



/* Function: test_static_global @ 00011278 */

void test_static_global(void)

{
 uint32_t uVar1;
 uint32_t local_14;
 
 puts("=== Static and Global Tests ===");
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
 printf("STM-L2-03 (read_const_data): %d\n",*(uint8_t *)(const_string + 4) + 0x2a);
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



/* Function: double_value @ 000114c0 */

int double_value(int param_1)

{
 return param_1 << 1;
}



/* Function: memop_memset @ 000114c8 */

uint32_t memop_memset(uint8_t *param_1,size_t param_2,int param_3,size_t param_4)

{
 if (param_1 != (uint8_t *)0x0) {
 param_4 = param_2;
 }
 if (param_1 != (uint8_t *)0x0 && param_2 != 0) {
 memset(param_1,param_3,param_4);
 return (uint32_t)*param_1;
 }
 return 0xffffffff;
}



/* Function: memop_memcpy @ 00011508 */

uint32_t memop_memcpy(void *param_1,void *param_2,uint32_t param_3)

{
 uint32_t unaff_r4;
 
 if (param_1 != (void *)0x0) {
 if (param_2 != (void *)0x0) {
 unaff_r4 = param_3;
 }
 if (param_2 != (void *)0x0 && param_3 != 0) {
 memcpy(param_1,param_2,unaff_r4);
 return *(uint32_t *)((int)param_1 + ((unaff_r4 & 0xfffffffc) - 4));
 }
 }
 return 0xffffffff;
}



/* Function: memop_memmove @ 00011554 */

uint32_t memop_memmove(void *param_1,uint32_t param_2)

{
 uint32_t uVar1;
 
 uVar1 = 0xffffffff;
 if ((param_1 != (void *)0x0) && (1 < param_2)) {
 memmove((void *)((int)param_1 + 1),param_1,param_2 - 1);
 uVar1 = (uint32_t)*(uint8_t *)((int)param_1 + 1);
 }
 return uVar1;
}



/* Function: memop_memcmp @ 0001158c */

uint32_t memop_memcmp(void *param_1,void *param_2,size_t param_3)

{
 int iVar1;
 uint32_t uVar2;
 
 if (param_1 == (void *)0x0) {
 return 0;
 }
 if (param_2 == (void *)0x0 || param_3 == 0) {
 return 0;
 }
 iVar1 = memcmp(param_1,param_2,param_3);
 uVar2 = 0;
 if (iVar1 != 0) {
 uVar2 = 0xffffffff;
 }
 if (0 < iVar1) {
 uVar2 = 1;
 }
 return uVar2;
}



/* Function: memop_bzero @ 000115d4 */

uint32_t memop_bzero(uint8_t *param_1,size_t param_2)

{
 if (param_1 != (uint8_t *)0x0) {
 memset(param_1,0,param_2);
 return (uint32_t)*param_1;
 }
 return 0xffffffff;
}



/* Function: memop_bcopy @ 00011600 */

uint32_t memop_bcopy(void *param_1,uint8_t *param_2,size_t param_3)

{
 if ((param_1 != (void *)0x0) && (param_2 != (uint8_t *)0x0 && param_3 != 0)) {
 memmove(param_2,param_1,param_3);
 return (uint)*param_2;
 }
 return 0xffffffff;
}



/* Function: memop_unaligned_access @ 00011640 */

uint32_t memop_unaligned_access(unsigned int param_1)

{
 if (param_1 != 0) {
 return *(uint32_t *)(param_1 + 1);
 }
 return 0xffffffff;
}



/* Function: memop_memory_barrier @ 0001166c */

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





/* Function: test_memory_op_functions @ 00011698 */

void test_memory_op_functions(void)

{
 int iVar1;
 uint32_t uVar2;
 uint32_t local_14 [2];
 uint16_t local_c;
 
 puts(&DAT_00012db6);
 printf("MEMOP-L2-01: %d\n",0x41);
 printf("MEMOP-L2-02: %d\n",0x32);
 local_c = 0x646c;
 local_14[1] = 0x726f576f;
 local_14[0] = 0x6c6c6548;
 memmove((void *)((uint32_t)local_14 | 1),local_14,9);
 printf("MEMOP-L2-03: %c\n",local_14[0] >> 8 & 0xff);
 iVar1 = memcmp(&DAT_00012e04,&DAT_00012e10,0xc);
 uVar2 = 0;
 if (iVar1 != 0) {
 uVar2 = 0xffffffff;
 }
 if (0 < iVar1) {
 uVar2 = 1;
 }
 printf("MEMOP-L2-04: %d\n",uVar2);
 printf("MEMOP-L2-05: %d\n",0);
 printf("MEMOP-L2-06: %d\n",1);
 printf("MEMOP-L3-01: 0x%x\n",0x4030201);
 __sync_synchronize();
 printf("MEMOP-L3-02: %d\n",10);
 return;
}



/* Function: main @ 000117d8 */

uint32_t main(void)

{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}



/* Function: extern_function @ 000117f8 */

int extern_function(int param_1)

{
 return param_1 * 3;
}








/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 112 */
