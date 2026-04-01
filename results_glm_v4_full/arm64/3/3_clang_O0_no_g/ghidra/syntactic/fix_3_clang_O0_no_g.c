/* Ghidra decompiler type definitions */
typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef void (*code)(void);
typedef unsigned char byte;
typedef int __pid_t;

/* 7-byte packed structure for undefined7 */
typedef struct __attribute__((packed)) {
    unsigned char data[7];
} undefined7;

/* System headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

/* Function declarations */
void __cxa_finalize(void *);
void deregister_tm_clones(void);
int extern_function(int param_1);
void DataMemoryBarrier(int, int);
int double_value(int param_1);
undefined4 init_depends_on(undefined4 *param_1);
int tls_access(int param_1);
int local_vars(int param_1);
undefined4 local_array(int param_1);
int local_struct(int param_1);
undefined4 address_of_local(undefined4 *param_1);
int address_of_array(int *param_1);
undefined1 large_stack_frame(void);
undefined4 vla_stack(uint param_1);
undefined4 alloca_usage(int param_1);
undefined4 stack_alias(undefined4 *param_1);
int test_stack_memory(void);
undefined4 heap_basic(int param_1);
int heap_calloc(int param_1);
undefined4 heap_realloc(void);
undefined4 heap_array(int param_1);
int heap_struct(int param_1);
undefined4 heap_nested(long *param_1);
int linked_list_heap(void);
int *create_tree_node(int param_1);
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
int test_static_global(void);
int call_static_func(undefined4 param_1);
int static_helper(int param_1);
int access_extern_global(void);
void call_extern_func(void);
int read_const_data(void);
undefined4 access_bss_var(void);
undefined1 access_bss_buffer(void);
int global_struct_access(void);
void set_file_static(undefined4 param_1);
undefined4 get_file_static(void);
void set_global_callback(int (*param_1)(int));
int call_global_callback(int param_1);
undefined4 global_heap_store(undefined4 *param_1);
int static_complex_init(void);
int init_order_test(void);
uint memop_memset(byte *param_1,size_t param_2,int param_3);
undefined4 memop_memcpy(void *param_1,void *param_2,ulong param_3);
uint memop_memmove(void *param_1,ulong param_2);
undefined4 memop_memcmp(void *param_1,void *param_2,size_t param_3);
uint memop_bzero(byte *param_1,size_t param_2);
uint memop_bcopy(void *param_1,byte *param_2,size_t param_3);
undefined4 memop_unaligned_access(long param_1);
int memop_memory_barrier(int *param_1);
int test_memory_op_functions(void);

/* External symbols */
void *__dso_handle __attribute__((weak)) = (void *)0;

/* String constants */
const char DAT_00102714[] = "=== Testing Stack Memory ===\n";
const char DAT_0010285e[] = "=== Testing Heap Memory ===\n";
const char DAT_00102a2d[] = "fork error";
const char DAT_001029c7[] = "child exited with status %d\n";
const char DAT_001029ec[] = "child signal %d\n";
const char DAT_001029b7[] = "%d\n";
const char DAT_00102a43[] = "=== Testing Static/Global Memory ===\n";
const char DAT_00102ca6[] = "=== Testing Memory Operations ===\n";

/* Stack and data variables */
int DAT_001140d4 = 100;
int DAT_001140e4 = 200;
int DAT_001140ec = 300;

/* Global variable declarations */
undefined1 *stack0x00000000 = (undefined1 *)0;
int global_counter = 0;
int global_array[10];
static char completed_0 = '\0';
static int file_scope_static = 0;
int (*global_func_ptr)(int) = (int (*)(int))0;
undefined4 *global_heap_ptr = (undefined4 *)0;
static int static_local_counter = 0;
int extern_global_var = 0;
const char const_string[] = "Hello World";
int bss_var = 0;
char bss_buffer = 0;
int global_point = 0;
static int complex_init = 0;
static int init_depends_on_static_depends = 0;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/3/3_clang_O0_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00100920 @ 00100920 */

void FUN_00100920(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





void deregister_tm_clones(void)
{
  /* Empty implementation - CRT stub function */
  return;
}





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_00100b3c @ 00100b3c */

void FUN_00100b3c(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: local_vars @ 00100b94 */

int local_vars(int param_1)

{
 return param_1 * 2 + 10;
}



/* Function: local_array @ 00100bc8 */

undefined4 local_array(int param_1)

{
 int local_30;
 int aiStack_2c [11];
 
 for (local_30 = 0; local_30 < 10; local_30 = local_30 + 1) {
 aiStack_2c[local_30] = local_30 * param_1;
 }
 return aiStack_2c[5];
}



/* Function: local_struct @ 00100c20 */

int local_struct(int param_1)

{
 return param_1 * 3;
}



/* Function: address_of_local @ 00100c50 */

undefined4 address_of_local(undefined4 *param_1)

{
 *param_1 = 0x2a;
 return 0x2a;
}



/* Function: address_of_array @ 00100c78 */

int address_of_array(int *param_1)

{
 return *param_1 + *param_1;
}



/* Function: large_stack_frame @ 00100cac */

undefined1 large_stack_frame(void)

{
 int local_814;
 undefined1 auStack_810 [2048];
 
 for (local_814 = 0; local_814 < 0x800; local_814 = local_814 + 1) {
 auStack_810[local_814] = (undefined1)local_814;
 }
 return auStack_810[0x400];
}



/* Function: vla_stack @ 00100d00 */

undefined4 vla_stack(uint param_1)

{
 long lVar1;
 int aiStack_40 [5];
 int local_2c;
 undefined4 local_14;
 
 if (((int)param_1 < 1) || (1000 < (int)param_1)) {
 local_14 = 0xffffffff;
 }
 else {
 lVar1 = -0x40 - ((ulong)param_1 * 4 + 0xf & 0xfffffffffffffff0);
 for (local_2c = 0; local_2c < (int)param_1; local_2c = local_2c + 1) {
 *(int *)((long)aiStack_40 + (long)local_2c * 4 + lVar1 + 0x40) = local_2c << 1;
 }
 local_14 = *(undefined4 *)((long)aiStack_40 + (long)((int)param_1 / 2) * 4 + lVar1 + 0x40);
 }
 return local_14;
}



/* Function: alloca_usage @ 00100de0 */

undefined4 alloca_usage(int param_1)

{
 long lVar1;
 int aiStack_30 [7];
 undefined4 local_14;
 
 if (param_1 < 1) {
 local_14 = 0xffffffff;
 }
 else {
 lVar1 = -0x30 - ((long)param_1 * 4 + 0xfU & 0xfffffffffffffff0);
 for (aiStack_30[3] = 0; aiStack_30[3] < param_1; aiStack_30[3] = aiStack_30[3] + 1) {
 *(int *)((long)aiStack_30 + (long)aiStack_30[3] * 4 + lVar1 + 0x30) = aiStack_30[3] * 3;
 }
 local_14 = *(undefined4 *)((long)aiStack_30 + (long)(param_1 / 2) * 4 + lVar1 + 0x30);
 }
 return local_14;
}



/* Function: stack_alias @ 00100ea4 */

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffe4 : 0x00100ef8 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 stack_alias(undefined4 *param_1)

{
 undefined4 local_4;
 
 if (&stack0x00000000 == (undefined1 *)0x1c) {
 local_4 = 0xffffffff;
 }
 else {
 local_4 = *param_1;
 }
 return local_4;
}



/* Function: test_stack_memory @ 00100f1c */

int test_stack_memory(void)

{
 int iVar1;
 ulong uVar2;
 undefined4 local_40;
 undefined4 local_3c;
 undefined4 local_38;
 undefined4 local_34;
 undefined1 auStack_14 [4];
 
 printf(DAT_00102714);
 uVar2 = local_vars(0);
 printf("MEM-L1-01 (local_vars): %d\n",uVar2 & 0xffffffff);
 uVar2 = local_array(10);
 printf("MEM-L1-02 (local_array): %d\n",uVar2 & 0xffffffff);
 uVar2 = local_struct(5);
 printf("MEM-L1-03 (local_struct): %d\n",uVar2 & 0xffffffff);
 uVar2 = address_of_local((undefined4 *)auStack_14);
 printf("MEM-L1-04 (address_of_local): %d\n",uVar2 & 0xffffffff);
 memset(&local_3c,0,0x28);
 local_3c = 1;
 local_38 = 2;
 local_34 = 3;
 uVar2 = address_of_array((int *)&local_3c);
 iVar1 = printf("MEM-L1-05 (address_of_array): %d\n",uVar2 & 0xffffffff);
 uVar2 = large_stack_frame();
 printf("MEM-L2-01 (large_stack_frame): %d\n",uVar2 & 0xffffffff);
 uVar2 = vla_stack(10);
 printf("MEM-L2-02 (vla_stack): %d\n",uVar2 & 0xffffffff);
 uVar2 = alloca_usage(10);
 printf("MEM-L2-03 (alloca_usage): %d\n",uVar2 & 0xffffffff);
 local_40 = 0;
 uVar2 = stack_alias(&local_40);
 iVar1 = printf("MEM-L2-04 (stack_alias): %d\n",uVar2 & 0xffffffff);
 return iVar1;
}



/* Function: heap_basic @ 00101054 */

undefined4 heap_basic(int param_1)

{
 void *__ptr;
 undefined4 local_24;
 undefined4 local_14;
 
 __ptr = malloc((long)param_1 << 2);
 if (__ptr == (void *)0x0) {
 local_14 = 0xffffffff;
 }
 else {
 for (local_24 = 0; local_24 < param_1; local_24 = local_24 + 1) {
 *(int *)((long)__ptr + (long)local_24 * 4) = local_24 << 1;
 }
 local_14 = *(undefined4 *)((long)__ptr + (long)(param_1 / 2) * 4);
 free(__ptr);
 }
 return local_14;
}



/* Function: heap_calloc @ 0010110c */

int heap_calloc(int param_1)

{
 void *__ptr;
 undefined4 local_28;
 undefined4 local_24;
 undefined4 local_14;
 
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



/* Function: heap_realloc @ 001011b4 */

undefined4 heap_realloc(void)

{
 int iVar1;
 void *__ptr;
 void *__ptr_00;
 undefined4 local_3c;
 undefined4 local_34;
 undefined4 local_24;
 undefined4 local_14;
 
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
 local_3c = *(undefined4 *)((long)__ptr_00 + 0x14);
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



/* Function: heap_array @ 00101310 */

undefined4 heap_array(int param_1)

{
 void *__ptr;
 undefined4 local_24;
 undefined4 local_14;
 
 __ptr = malloc((long)param_1 << 2);
 if (__ptr == (void *)0x0) {
 local_14 = 0xffffffff;
 }
 else {
 for (local_24 = 0; local_24 < param_1; local_24 = local_24 + 1) {
 *(int *)((long)__ptr + (long)local_24 * 4) = local_24 * 3;
 }
 local_14 = *(undefined4 *)((long)__ptr + (long)(param_1 / 2) * 4);
 free(__ptr);
 }
 return local_14;
}



/* Function: heap_struct @ 001013cc */

int heap_struct(int param_1)

{
 int *__ptr;
 int local_14;
 
 __ptr = malloc(8);
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



/* Function: heap_nested @ 00101458 */

undefined4 heap_nested(long *param_1)

{
 void *pvVar1;
 undefined4 local_14;
 
 pvVar1 = malloc(0x10);
 *param_1 = (long)pvVar1;
 if (*param_1 == 0) {
 local_14 = 0xffffffff;
 }
 else {
 *(undefined4 *)*param_1 = 10;
 pvVar1 = malloc(0x10);
 *(void **)(*param_1 + 8) = pvVar1;
 if (*(long *)(*param_1 + 8) == 0) {
 free((void *)*param_1);
 local_14 = 0xfffffffe;
 }
 else {
 **(undefined4 **)(*param_1 + 8) = 0x14;
 *(undefined8 *)(*(long *)(*param_1 + 8) + 8) = 0;
 local_14 = 0;
 }
 }
 return local_14;
}



/* Function: linked_list_heap @ 00101520 */

int linked_list_heap(void)

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
 piVar2 = malloc(0x10);
 if (piVar2 == (int *)0x0) break;
 *piVar2 = local_2c * 10;
 piVar2[2] = 0;
 piVar2[3] = 0;
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



/* Function: create_tree_node @ 00101694 */

int * create_tree_node(int param_1)

{
 int *puVar1;
 
 puVar1 = malloc(0x18);
 if (puVar1 != (int *)0x0) {
 *puVar1 = param_1;
 *(long *)(puVar1 + 2) = 0;
 *(long *)(puVar1 + 4) = 0;
 }
 return puVar1;
}



/* Function: tree_heap_traversal @ 001016ec */

int tree_heap_traversal(void)

{
 int *__ptr;
 undefined8 uVar1;
 int local_14;
 
 __ptr = (int *)create_tree_node(10);
 if (__ptr == (int *)0x0) {
 local_14 = -1;
 }
 else {
 *(void **)(__ptr + 2) = create_tree_node(0x14);
 *(void **)(__ptr + 4) = create_tree_node(0x1e);
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



/* Function: memory_leak @ 00101818 */

undefined4 memory_leak(int param_1)

{
 void *pvVar1;
 undefined4 local_24;
 undefined4 local_14;
 
 pvVar1 = malloc((long)param_1 << 2);
 if (pvVar1 == (void *)0x0) {
 local_14 = 0xffffffff;
 }
 else {
 for (local_24 = 0; local_24 < param_1; local_24 = local_24 + 1) {
 *(int *)((long)pvVar1 + (long)local_24 * 4) = local_24;
 }
 local_14 = *(undefined4 *)((long)pvVar1 + (long)(param_1 / 2) * 4);
 }
 return local_14;
}



/* Function: dangling_pointer @ 001018bc */

uint dangling_pointer(void)

{
 uint *__ptr;
 uint local_14;
 
 __ptr = malloc(4);
 if (__ptr == (uint *)0x0) {
 local_14 = 0xffffffff;
 }
 else {
 *__ptr = 0x2a;
 printf("value before free: %d\n",(ulong)*__ptr);
 free(__ptr);
 local_14 = *__ptr;
 }
 return local_14;
}



/* Function: double_free @ 00101944 */

undefined4 double_free(undefined4 *param_1)

{
 undefined4 *__ptr;
 undefined4 local_14;
 
 if (param_1 == (undefined4 *)0x0) {
 __ptr = malloc(4);
 if (__ptr == (undefined4 *)0x0) {
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



/* Function: heap_overflow @ 001019cc */

undefined4 heap_overflow(void)

{
 undefined4 *__ptr;
 int local_24;
 undefined4 local_14;
 
 __ptr = malloc(0x28);
 if (__ptr == (undefined4 *)0x0) {
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



/* Function: test_heap_memory @ 00101a70 */

void test_heap_memory(void)

{
 int iVar1;
 ulong uVar2;
 uint local_24;
 uint local_20;
 __pid_t local_1c;
 void *local_18;
 
 printf(DAT_0010285e);
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
 uVar2 = heap_nested((long *)&local_18);
 printf("HEAP-L2-06 (heap_nested): %d\n",uVar2 & 0xffffffff);
 if (local_18 != (void *)0x0) {
 free(*(void **)((long)local_18 + 8));
 free(local_18);
 }
 uVar2 = linked_list_heap();
 printf("HEAP-L3-01 (linked_list_heap): %d\n",uVar2 & 0xffffffff);
 uVar2 = tree_heap_traversal();
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n",uVar2 & 0xffffffff);
 uVar2 = memory_leak(5);
 printf("HEAP-L3-03 (memory_leak): %d\n",uVar2 & 0xffffffff);
 printf("HEAP-L3-04 (dangling_pointer): ");
 local_1c = fork();
 if (local_1c != 0) {
 if (local_1c < 1) {
 perror("fork error");
 }
 else {
 waitpid(local_1c,(int *)&local_24,0);
 if ((local_24 & 0x7f) == 0) {
 printf(DAT_001029c7,(ulong)(uint)((int)(local_24 & 0xff00) >> 8));
 }
 else if ('\0' < (char)(((byte)local_24 & 0x7f) + 1) >> 1) {
 printf(DAT_001029ec,(ulong)(local_24 & 0x7f));
 }
 }
 return;
 }
 local_20 = dangling_pointer();
 printf(DAT_001029b7,(ulong)local_20);
 /* WARNING: Subroutine does not return */
 exit(0);
}



/* Function: global_var_access @ 00101c70 */

int global_var_access(void)

{
 global_counter = global_counter + 1;
 return global_counter;
}



/* Function: global_var_read @ 00101c88 */

int global_var_read(void)

{
 return global_counter << 1;
}



/* Function: global_array_access @ 00101c98 */

undefined4 global_array_access(int param_1)

{
 undefined4 local_4;
 
 if ((param_1 < 0) || (9 < param_1)) {
 local_4 = 0xffffffff;
 }
 else {
 local_4 = *(undefined4 *)&global_array[param_1];
 }
 return local_4;
}



/* Function: static_local @ 00101cec */

int static_local(int param_1)

{
 undefined4 local_4;
 
 if (param_1 == 0) {
 local_4 = static_local_counter + 1;
 }
 else {
 local_4 = 0;
 }
 static_local_counter = local_4;
 return local_4;
}



/* Function: call_static_func @ 00101d38 */

int call_static_func(undefined4 param_1)

{
 int iVar1;
 
 iVar1 = static_helper(param_1);
 return iVar1 + 1;
}







/* Function: access_extern_global @ 00101d78 */

int access_extern_global(void)

{
 return extern_global_var + 100;
}



/* Function: call_extern_func @ 00101d8c */

void call_extern_func(void)

{
 extern_function(5);
 return;
}



/* Function: read_const_data @ 00101da4 */

int read_const_data(void)

{
 return (byte)const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 00101db8 */

undefined4 access_bss_var(void)

{
 return bss_var;
}



/* Function: access_bss_buffer @ 00101dc4 */

undefined1 access_bss_buffer(void)

{
 return bss_buffer;
}



/* Function: global_struct_access @ 00101dd0 */

int global_struct_access(void)

{
 return global_point + DAT_001140d4;
}



/* Function: set_file_static @ 00101dec */

void set_file_static(undefined4 param_1)

{
 file_scope_static = param_1;
 return;
}



/* Function: get_file_static @ 00101e08 */

undefined4 get_file_static(void)

{
 return file_scope_static;
}



/* Function: set_global_callback @ 00101e14 */

void set_global_callback(int (*param_1)(int))

{
 global_func_ptr = param_1;
 return;
}



/* Function: call_global_callback @ 00101e30 */

int call_global_callback(int param_1)

{
 int local_14;
 
 if (global_func_ptr == (int (*)(int))0x0) {
 local_14 = 0xffffffff;
 }
 else {
 local_14 = (*global_func_ptr)(param_1);
 }
 return local_14;
}



/* Function: global_heap_store @ 00101e84 */

undefined4 global_heap_store(undefined4 *param_1)

{
 undefined4 local_4;
 
 global_heap_ptr = param_1;
 if (param_1 == (undefined4 *)0x0) {
 local_4 = 0xffffffff;
 }
 else {
 local_4 = *param_1;
 }
 return local_4;
}



/* Function: static_complex_init @ 00101ed0 */

int static_complex_init(void)

{
 return complex_init + DAT_001140e4 + DAT_001140ec;
}



/* Function: tls_access @ 00101ef4 */

int tls_access(int param_1)

{
 long lVar1;
 
 __asm__ volatile("mrs %0, tpidr_el0" : "=r" (lVar1));
 *(int *)(lVar1 + 0x10) = param_1;
 return *(int *)(lVar1 + 0x10) << 1;
}



/* Function: init_order_test @ 00101f20 */

int init_order_test(void)

{
 undefined4 local_14;
 
 local_14 = 0x14;
 init_depends_on(&local_14);
 return 0;
}



/* Function: init_depends_on @ 00101f48 */

undefined4 init_depends_on(undefined4 *param_1)

{
 if (param_1 != (undefined4 *)0x0) {
 init_depends_on_static_depends = *param_1;
 }
 return init_depends_on_static_depends;
}



/* Function: test_static_global @ 00101f80 */

int test_static_global(void)

{
 int iVar1;
 ulong uVar2;
 undefined4 local_14;
 
 printf(DAT_00102a43);
 uVar2 = global_var_access();
 iVar1 = printf("STM-L1-01 (global_var_access): %d\n",uVar2 & 0xffffffff);
 uVar2 = global_var_read();
 printf("STM-L1-01 (global_var_read): %d\n",uVar2 & 0xffffffff);
 uVar2 = global_array_access(5);
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
 printf("STM-L2-02 (call_extern_func): done\n");
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
 set_global_callback(double_value);
 uVar2 = call_global_callback(5);
 printf("STM-L2-07 (global_func_ptr): %d\n",uVar2 & 0xffffffff);
 local_14 = 100;
 uVar2 = global_heap_store(&local_14);
 iVar1 = printf("STM-L2-08 (global_heap_store): %d\n",uVar2 & 0xffffffff);
 uVar2 = static_complex_init();
 printf("STM-L2-09 (static_complex_init): %d\n",uVar2 & 0xffffffff);
 uVar2 = tls_access(10);
 iVar1 = printf("STM-L3-01 (tls_access): %d\n",uVar2 & 0xffffffff);
 uVar2 = init_order_test();
 iVar1 = printf("STM-L3-02 (init_order_test): %d\n",uVar2 & 0xffffffff);
 return iVar1;
}



/* Function: double_value @ 00102154 */

int double_value(int param_1)

{
 return param_1 << 1;
}



/* Function: memop_memset @ 0010216c */

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



/* Function: memop_memcpy @ 001021d8 */

undefined4 memop_memcpy(void *param_1,void *param_2,ulong param_3)

{
 undefined4 local_14;
 
 if (((param_1 == (void *)0x0) || (param_2 == (void *)0x0)) || (param_3 == 0)) {
 local_14 = 0xffffffff;
 }
 else {
 memcpy(param_1,param_2,param_3);
 local_14 = *(undefined4 *)((long)param_1 + (param_3 / 4 - 1) * 4);
 }
 return local_14;
}



/* Function: memop_memmove @ 00102260 */

uint memop_memmove(void *param_1,ulong param_2)

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



/* Function: memop_memcmp @ 001022d4 */

undefined4 memop_memcmp(void *param_1,void *param_2,size_t param_3)

{
 int iVar1;
 undefined4 local_38;
 undefined4 local_14;
 
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



/* Function: memop_bzero @ 0010237c */

uint memop_bzero(byte *param_1,size_t param_2)

{
 undefined4 local_14;
 
 if (param_1 == (byte *)0x0) {
 local_14 = 0xffffffff;
 }
 else {
 memset(param_1,0,param_2);
 local_14 = (uint)*param_1;
 }
 return local_14;
}



/* Function: memop_bcopy @ 001023d8 */

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



/* Function: memop_unaligned_access @ 00102450 */

undefined4 memop_unaligned_access(long param_1)

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



/* Function: memop_memory_barrier @ 00102494 */

int memop_memory_barrier(int *param_1)

{
 undefined4 local_4;
 
 if (param_1 == (int *)0x0) {
 local_4 = -1;
 }
 else {
 DataMemoryBarrier(2,3);
 local_4 = *param_1 + *param_1;
 }
 return local_4;
}



/* Function: test_memory_op_functions @ 001024e8 */

int test_memory_op_functions(void)

{
 int iVar1;
 ulong uVar2;
 undefined4 local_1ac;
 undefined8 local_1a8;
 undefined4 local_19c;
 undefined4 local_198;
 undefined1 auStack_192 [10];
 undefined8 local_188;
 undefined4 local_180;
 undefined8 local_178;
 undefined4 local_170;
 undefined7 local_168;
 char acStack_161 [9];
 undefined8 local_158;
 undefined8 local_150;
 undefined4 local_148;
 undefined8 local_140;
 undefined8 uStack_138;
 undefined4 local_130;
 undefined1 auStack_120 [256];
 
 printf(DAT_00102ca6);
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
 memcpy(&local_168, (unsigned char []){0x48, 0x65, 0x6c, 0x6c, 0x6f, 0x57, 0x6f}, 7);
 strncpy(acStack_161,"rld",4);
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



/* Function: main @ 001026a8 */

int main(void)

{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}



/* Function: DataMemoryBarrier @ 001026e0 */

void DataMemoryBarrier(int param_1, int param_2)

{
 __asm__ volatile("dmb sy" ::: "memory");
 return;
}


/* Function: extern_function @ 00102700 */

int extern_function(int param_1)

{
 return param_1 * 3;
}

/* Function: static_helper @ 00101d60 */

int static_helper(int param_1)

{
    return param_1 * 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 67 */
