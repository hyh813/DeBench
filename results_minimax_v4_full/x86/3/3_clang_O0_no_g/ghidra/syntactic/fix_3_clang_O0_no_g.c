/* Standard library headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stddef.h>
#include <unistd.h>
#include <sys/wait.h>

/* Ghidra type definitions */
typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned int uint;
typedef unsigned int undefined4;
typedef int score;
typedef short undefined2;
typedef unsigned short undefined3;
typedef unsigned long long undefined8;
typedef void code;

/* External data references from binary */
extern char DAT_00014008[];
extern char DAT_00014152[];
extern char DAT_00014321[];
extern char DAT_000142bb[];
extern char DAT_000142e0[];
extern char DAT_000142ab[];
extern char DAT_00014337[];
extern char DAT_0001459a[];
extern char DAT_0001464c[];
extern char DAT_00017080;
extern char DAT_00017090;
extern char DAT_00017098;
extern char const_string[];

/* PIC/GOT reference */
extern void * _GLOBAL_OFFSET_TABLE_;

/* Stack probe symbol */
extern int stack0x00000000;

/* Missing global variable declarations */
int global_counter;
int static_local_counter;
int extern_global_var;
int bss_var;
char bss_buffer[256];
int global_point;
int complex_init;
int init_depends_on_static_depends;
int file_scope_static;
int global_array[10];
undefined4 *global_heap_ptr;
int (*global_func_ptr)(int);

/* External function declarations */
int extern_function(int);
int double_value(int);

/* Missing function declarations */
int static_helper(int);
undefined4 init_depends_on(undefined4 *param_1);

/* Data references from binary - already declared above */

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/3/3_clang_O0_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 /* Null function pointer call removed - was invalid */
 return;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 0001116c */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011170 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 000112a9 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 000112ad */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: local_vars @ 000112c0 */

int local_vars(int param_1)

{
 return param_1 * 2 + 10;
}



/* Function: local_array @ 000112f0 */

undefined4 local_array(int param_1)

{
 int local_30;
 int aiStack_2c [10];
 
 for (local_30 = 0; local_30 < 10; local_30 = local_30 + 1) {
 aiStack_2c[local_30] = local_30 * param_1;
 }
 return aiStack_2c[5];
}



/* Function: local_struct @ 00011330 */

int local_struct(int param_1)

{
 return param_1 * 3;
}



/* Function: address_of_local @ 00011360 */

undefined4 address_of_local(undefined4 *param_1)

{
 *param_1 = 0x2a;
 return 0x2a;
}



/* Function: address_of_array @ 00011380 */

int address_of_array(int *param_1)

{
 return *param_1 + *param_1;
}



/* Function: large_stack_frame @ 000113b0 */

int large_stack_frame(void)

{
 int local_808;
 char acStack_804 [2048];
 
 for (local_808 = 0; local_808 < 0x800; local_808 = local_808 + 1) {
 acStack_804[local_808] = (char)local_808;
 }
 return (int)acStack_804[0x400];
}



/* Function: vla_stack @ 00011410 */

undefined4 vla_stack(int param_1)

{
 int iVar1;
 int aiStack_1c [5];
 undefined4 local_8;
 
 if ((param_1 < 1) || (1000 < param_1)) {
 local_8 = 0xffffffff;
 }
 else {
 iVar1 = -0x1c - (param_1 * 4 + 0xfU & 0xfffffff0);
 for (aiStack_1c[2] = 0; aiStack_1c[2] < param_1; aiStack_1c[2] = aiStack_1c[2] + 1) {
 *(int *)((int)aiStack_1c + aiStack_1c[2] * 4 + iVar1 + 0x1c) = aiStack_1c[2] << 1;
 }
 local_8 = *(undefined4 *)((int)aiStack_1c + (param_1 / 2) * 4 + iVar1 + 0x1c);
 }
 return local_8;
}



/* Function: alloca_usage @ 000114b0 */

undefined4 alloca_usage(int param_1)

{
 int iVar1;
 int aiStack_1c [5];
 undefined4 local_8;
 
 if (param_1 < 1) {
 local_8 = 0xffffffff;
 }
 else {
 iVar1 = -0x1c - (param_1 * 4 + 0xfU & 0xfffffff0);
 for (aiStack_1c[3] = 0; aiStack_1c[3] < param_1; aiStack_1c[3] = aiStack_1c[3] + 1) {
 *(int *)((int)aiStack_1c + aiStack_1c[3] * 4 + iVar1 + 0x1c) = aiStack_1c[3] * 3;
 }
 local_8 = *(undefined4 *)((int)aiStack_1c + (param_1 / 2) * 4 + iVar1 + 0x1c);
 }
 return local_8;
}



/* Function: stack_alias @ 00011540 */

/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffff4 : 0x00011581 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 stack_alias(void)

{
 undefined4 local_c;
 undefined4 local_8;
 
 if (&stack0x00000000 == (undefined1 *)0xc) {
 local_8 = 0xffffffff;
 }
 else {
 local_8 = local_c;
 }
 return local_8;
}



/* Function: test_stack_memory @ 000115a0 */

void test_stack_memory(void)

{
 undefined4 uVar1;
 undefined4 local_38;
 undefined4 local_34;
 undefined4 local_30;
 undefined4 local_2c;
 undefined1 local_c [4];
 
 printf(&DAT_00014008);
 uVar1 = local_vars(5);
 printf("MEM-L1-01 (local_vars): %d\n",uVar1);
 uVar1 = local_array(2);
 printf("MEM-L1-02 (local_array): %d\n",uVar1);
 uVar1 = local_struct(5);
 printf("MEM-L1-03 (local_struct): %d\n",uVar1);
 uVar1 = address_of_local(local_c);
 printf("MEM-L1-04 (address_of_local): %d\n",uVar1);
 memset(&local_34,0,0x28);
 local_34 = 1;
 local_30 = 2;
 local_2c = 3;
 uVar1 = address_of_array(&local_34);
 printf("MEM-L1-05 (address_of_array): %d\n",uVar1);
 uVar1 = large_stack_frame();
 printf("MEM-L2-01 (large_stack_frame): %d\n",uVar1);
 uVar1 = vla_stack(10);
 printf("MEM-L2-02 (vla_stack): %d\n",uVar1);
 uVar1 = alloca_usage(10);
 printf("MEM-L2-03 (alloca_usage): %d\n",uVar1);
 local_38 = 0;
 uVar1 = stack_alias();
 printf("MEM-L2-04 (stack_alias): %d\n",uVar1);
 return;
}



/* Function: heap_basic @ 00011750 */

undefined4 heap_basic(int param_1)

{
 void *__ptr;
 undefined4 local_14;
 undefined4 local_c;
 
 __ptr = (int *)malloc(param_1 << 2);
 if (__ptr == (void *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 for (local_14 = 0; local_14 < param_1; local_14 = local_14 + 1) {
 *(int *)((int)__ptr + local_14 * 4) = local_14 << 1;
 }
 local_c = *(undefined4 *)((int)__ptr + (param_1 / 2) * 4);
 free(__ptr);
 }
 return local_c;
}



/* Function: heap_calloc @ 00011800 */

int heap_calloc(size_t param_1)

{
 void *__ptr;
 undefined4 local_18;
 undefined4 local_14;
 undefined4 local_c;
 
 __ptr = calloc(param_1,4);
 if (__ptr == (void *)0x0) {
 local_c = -1;
 }
 else {
 local_14 = 0;
 for (local_18 = 0; local_18 < (int)param_1; local_18 = local_18 + 1) {
 local_14 = *(int *)((int)__ptr + local_18 * 4) + local_14;
 }
 free(__ptr);
 local_c = local_14;
 }
 return local_c;
}



/* Function: heap_realloc @ 000118a0 */

undefined4 heap_realloc(void)

{
 int iVar1;
 void *__ptr;
 void *__ptr_00;
 undefined4 local_2c;
 undefined4 local_20;
 undefined4 local_14;
 undefined4 local_c;
 
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
 local_2c = *(undefined4 *)((int)__ptr_00 + 0x14);
 }
 else {
 local_2c = 0xfffffffd;
 }
 free(__ptr_00);
 local_c = local_2c;
 }
 }
 return local_c;
}



/* Function: heap_array @ 000119d0 */

undefined4 heap_array(int param_1)

{
 void *__ptr;
 undefined4 local_14;
 undefined4 local_c;
 
 __ptr = (int *)malloc(param_1 << 2);
 if (__ptr == (void *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 for (local_14 = 0; local_14 < param_1; local_14 = local_14 + 1) {
 *(int *)((int)__ptr + local_14 * 4) = local_14 * 3;
 }
 local_c = *(undefined4 *)((int)__ptr + (param_1 / 2) * 4);
 free(__ptr);
 }
 return local_c;
}



/* Function: heap_struct @ 00011a80 */

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



/* Function: heap_nested @ 00011b00 */

undefined4 heap_nested(int *param_1)

{
 int *pvVar1;
 undefined4 local_c;
 
 pvVar1 = (int *)malloc(8);
 *(int *)pvVar1 = 10;
 *(int **)((int)*param_1 + 1) = pvVar1;
 pvVar1 = (int *)malloc(8);
 if (pvVar1 == (int *)0x0) {
 if (*(int *)((int)*param_1 + 4) == 0) {
  free((void *)*param_1);
  local_c = 0xfffffffe;
 }
 else {
  **(undefined4 **)((int)*param_1 + 4) = 0x14;
  *(undefined4 *)(*(int *)((int)*param_1 + 4) + 4) = 0;
  local_c = 0;
 }
 return local_c;
}



/* Function: linked_list_heap @ 00011bc0 */

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
 local_24 = *local_28 + local_24;
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



/* Function: create_tree_node @ 00011d10 */

undefined4 * create_tree_node(undefined4 param_1)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)malloc(0xc);
 if (puVar1 != (undefined4 *)0x0) {
 *puVar1 = param_1;
 puVar1[1] = 0;
 puVar1[2] = 0;
 }
 return puVar1;
}



/* Function: tree_heap_traversal @ 00011d70 */

int tree_heap_traversal(void)

{
 undefined4 *__ptr;
 int iVar1;
 int local_c;
 
 __ptr = create_tree_node(10);
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



/* Function: memory_leak @ 00011ea0 */

undefined4 memory_leak(int param_1)

{
 void *pvVar1;
 undefined4 local_c;
 undefined4 local_14;
 
 pvVar1 = (void *)malloc(param_1 << 2);
 if (pvVar1 == (void *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 for (local_14 = 0; local_14 < param_1; local_14 = local_14 + 1) {
 *(int *)((int)pvVar1 + local_14 * 4) = local_14;
 }
 local_c = *(undefined4 *)((int)pvVar1 + (param_1 / 2) * 4);
 }
 return local_c;
}



/* Function: dangling_pointer @ 00011f30 */

undefined4 dangling_pointer(void)

{
 undefined4 *__ptr;
 undefined4 local_c;
 
 __ptr = (undefined4 *)malloc(4);
 if (__ptr == (undefined4 *)0x0) {
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



/* Function: double_free @ 00011fc0 */

undefined4 double_free(undefined4 *param_1)

{
 undefined4 *__ptr;
 undefined4 local_c;
 
 if (param_1 == (undefined4 *)0x0) {
 __ptr = (undefined4 *)malloc(4);
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



/* Function: heap_overflow @ 00012050 */

undefined4 heap_overflow(void)

{
 int *__ptr;
 int local_14;
 undefined4 local_c;
 
 __ptr = (int *)malloc(0x28);
 if (__ptr == (int *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 for (local_14 = 0; local_14 < 0xb; local_14 = local_14 + 1) {
 __ptr[local_14] = local_14 * 100;
 }
 local_c = (undefined4)*__ptr;
 free(__ptr);
 }
 return local_c;
}



/* Function: test_heap_memory @ 000120e0 */

void test_heap_memory(void)

{
 undefined4 uVar1;
 uint local_18;
 undefined4 local_14;
 __pid_t local_10;
 int local_c;
 
 printf(&DAT_00014152);
 uVar1 = heap_basic(10);
 printf("HEAP-L2-01 (heap_basic): %d\n",uVar1);
 uVar1 = heap_calloc(5);
 printf("HEAP-L2-02 (heap_calloc): %d\n",uVar1);
 uVar1 = heap_realloc();
 printf("HEAP-L2-03 (heap_realloc): %d\n",uVar1);
 uVar1 = heap_array(10);
 printf("HEAP-L2-04 (heap_array): %d\n",uVar1);
 uVar1 = heap_struct(5);
 printf("HEAP-L2-05 (heap_struct): %d\n",uVar1);
 local_c = 0;
 uVar1 = heap_nested(&local_c);
 printf("HEAP-L2-06 (heap_nested): %d\n",uVar1);
 if (local_c != 0) {
 free((void *)*(int **)(local_c + 4));
 free((void *)local_c);
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
 perror(&DAT_00014321);
 }
 else {
 waitpid(local_10,(int *)&local_18,0);
 if ((local_18 & 0x7f) == 0) {
 printf(&DAT_000142bb,(int)(local_18 & 0xff00) >> 8);
 }
 else if ('\0' < (char)(((byte)local_18 & 0x7f) + 1) >> 1) {
 printf(&DAT_000142e0,local_18 & 0x7f);
 }
 }
 return;
 }
 local_14 = dangling_pointer();
 printf(&DAT_000142ab,local_14);
 /* WARNING: Subroutine does not return */
 exit(0);
}



/* Function: global_var_access @ 00012380 */

int global_var_access(void)

{
 global_counter = global_counter + 1;
 return global_counter;
}



/* Function: global_var_read @ 000123b0 */

int global_var_read(void)

{
 return global_counter << 1;
}



/* Function: global_array_access @ 000123d0 */

undefined4 global_array_access(int param_1)

{
 undefined4 local_8;
 
 if ((param_1 < 0) || (9 < param_1)) {
 local_8 = 0xffffffff;
 }
 else {
 local_8 = *(undefined4 *)(global_array + param_1 * 4);
 }
 return local_8;
}



/* Function: static_local @ 00012420 */

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



/* Function: call_static_func @ 00012480 */

int call_static_func(undefined4 param_1)

{
 int iVar1;
 
 iVar1 = static_helper(param_1);
 return iVar1 + 1;
}



/* Function: static_helper @ 000124b0 */

int static_helper(int param_1)

{
 return param_1 << 1;
}



/* Function: access_extern_global @ 000124c0 */

int access_extern_global(void)

{
 return extern_global_var + 100;
}



/* Function: call_extern_func @ 000124f0 */

void call_extern_func(void)

{
 extern_function(5);
 return;
}



/* Function: read_const_data @ 00012520 */

int read_const_data(void)

{
 return (char)const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 00012540 */

undefined4 access_bss_var(void)

{
 return bss_var;
}



/* Function: access_bss_buffer @ 00012560 */

int access_bss_buffer(void)

{
 return (int)bss_buffer;
}



/* Function: global_struct_access @ 00012580 */

int global_struct_access(void)

{
 return global_point + DAT_00017080;
}



/* Function: set_file_static @ 000125a0 */

void set_file_static(undefined4 param_1)

{
 file_scope_static = param_1;
 return;
}



/* Function: get_file_static @ 000125c0 */

undefined4 get_file_static(void)

{
 return file_scope_static;
}



/* Function: set_global_callback @ 000125e0 */

void set_global_callback(int (*param_1)(int))

{
 global_func_ptr = param_1;
 return;
}



/* Function: call_global_callback @ 00012600 */

undefined4 call_global_callback(undefined4 param_1)

{
 undefined4 local_c;
 
 if (global_func_ptr == (int (*)(int))0x0) {
 local_c = 0xffffffff;
 }
 else {
 local_c = (*global_func_ptr)((int)param_1);
 }
 return local_c;
}



/* Function: global_heap_store @ 00012650 */

undefined4 global_heap_store(undefined4 *param_1)

{
 undefined4 local_8;
 
 global_heap_ptr = param_1;
 if (param_1 == (undefined4 *)0x0) {
 local_8 = 0xffffffff;
 }
 else {
 local_8 = *param_1;
 }
 return local_8;
}



/* Function: static_complex_init @ 000126a0 */

int static_complex_init(void)

{
 return complex_init + DAT_00017090 + DAT_00017098;
}



/* Function: tls_access @ 000126d0 */

int tls_access(undefined4 param_1)

{
 int in_GS_OFFSET;
 
 *(undefined4 *)(in_GS_OFFSET + -4) = param_1;
 return *(int *)(in_GS_OFFSET + -4) << 1;
}



/* Forward declaration for init_depends_on */
undefined4 init_depends_on(undefined4 *param_1);

/* Function: init_order_test @ 000126f0 */

void init_order_test(void)

{
 undefined4 local_c;
 
 local_c = 0x14;
 init_depends_on(&local_c);
 return;
}



/* Function: init_depends_on @ 00012720 */

undefined4 init_depends_on(undefined4 *param_1)

{
 if (param_1 != (undefined4 *)0x0) {
 init_depends_on_static_depends = *param_1;
 }
 return init_depends_on_static_depends;
}



/* Function: test_static_global @ 00012760 */

void test_static_global(void)

{
 undefined4 uVar1;
 undefined4 local_c;
 
 printf(&DAT_00014337);
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
 uVar1 = call_extern_func();
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
 printf("STM-L3-02 (init_order_test): passed\n");
 return;
}



/* Function: double_value @ 00012a00 */

int double_value(int param_1)

{
 return param_1 << 1;
}



/* Function: memop_memset @ 00012a10 */

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



/* Function: memop_memcpy @ 00012a90 */

undefined4 memop_memcpy(void *param_1,void *param_2,uint param_3)

{
 undefined4 local_c;
 
 if (((param_1 == (void *)0x0) || (param_2 == (void *)0x0)) || (param_3 == 0)) {
 local_c = 0xffffffff;
 }
 else {
 memcpy(param_1,param_2,param_3);
 local_c = *(undefined4 *)((int)param_1 + ((param_3 >> 2) - 1) * 4);
 }
 return local_c;
}



/* Function: memop_memmove @ 00012b10 */

int memop_memmove(void *param_1,uint param_2)

{
 undefined4 local_10;
 
 if ((param_1 == (void *)0x0) || (param_2 < 2)) {
 local_10 = -1;
 }
 else {
 memmove((void *)((int)param_1 + 1),param_1,param_2 - 1);
 local_10 = (int)*(char *)((int)param_1 + 1);
 }
 return local_10;
}



/* Function: memop_memcmp @ 00012b90 */

undefined4 memop_memcmp(void *param_1,void *param_2,size_t param_3)

{
 int iVar1;
 undefined4 local_1c;
 undefined4 local_10;
 
 if (((param_1 == (void *)0x0) || (param_2 == (void *)0x0)) || (param_3 == 0)) {
 local_10 = 0;
 }
 else {
 iVar1 = memcmp(param_1,param_2,param_3);
 if (iVar1 < 1) {
 local_1c = 0;
 if (iVar1 < 0) {
 local_1c = 0xffffffff;
 }
 }
 else {
 local_1c = 1;
 }
 local_10 = local_1c;
 }
 return local_10;
}



/* Function: memop_bzero @ 00012c40 */

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



/* Function: memop_bcopy @ 00012cb0 */

uint memop_bcopy(void *param_1,byte *param_2,size_t param_3)

{
 undefined4 local_c;
 
 if (((param_1 == (void *)0x0) || (param_2 == (byte *)0x0)) || (param_3 == 0)) {
 local_c = 0xffffffff;
 }
 else {
 bcopy(param_1,param_2,param_3);
 local_c = (uint)*param_2;
 }
 return local_c;
}



/* Function: memop_unaligned_access @ 00012d30 */

undefined4 memop_unaligned_access(int param_1)

{
 undefined4 local_8;
 
 if (param_1 == 0) {
 local_8 = 0xffffffff;
 }
 else {
 local_8 = *(undefined4 *)(param_1 + 1);
 }
 return local_8;
}



/* Function: memop_memory_barrier @ 00012d70 */

int memop_memory_barrier(int *param_1)

{
 undefined4 local_8;
 
 if (param_1 == (int *)0x0) {
 local_8 = -1;
 }
 else {
 LOCK();
 UNLOCK();
 local_8 = *param_1 + *param_1;
 }
 return local_8;
}



/* Function: test_memory_op_functions @ 00012dc0 */

void test_memory_op_functions(void)

{
 undefined4 uVar1;
 undefined4 local_174;
 undefined4 local_16e;
 undefined4 local_16a;
 undefined1 local_166 [4];
 undefined4 local_162;
 undefined1 local_15e [10];
 undefined4 local_154;
 undefined4 local_150;
 undefined4 local_14c;
 undefined4 local_148;
 undefined4 local_144;
 undefined4 local_140;
 char local_13b [4];
 char local_137 [4];
 char local_133 [2];
 char local_131;
 undefined1 local_130 [20];
 undefined1 local_11c [20];
 undefined1 local_108 [256];
 
 printf(&DAT_0001459a);
 memcpy(local_11c,&DAT_0001464c,0x14);
 memset(local_130,0,0x14);
 uVar1 = memop_memset(local_108,10,0x41);
 printf("MEMOP-L2-01: %d\n",uVar1);
 uVar1 = memop_memcpy(local_130,local_11c,0x14);
 printf("MEMOP-L2-02: %d\n",uVar1);
 local_13b[0] = 'H';
 local_13b[1] = 'e';
 local_13b[2] = 'l';
 local_13b[3] = 'l';
 local_137[0] = 'o';
 local_137[1] = 'W';
 local_137[2] = 'o';
 local_137[3] = 'r';
 local_133[0] = 'l';
 local_133[1] = 'd';
 local_131 = '\0';
 uVar1 = memop_memmove(local_13b,10);
 printf("MEMOP-L2-03: %c\n",uVar1);
 local_148 = 1;
 local_144 = 2;
 local_140 = 3;
 local_154 = 1;
 local_150 = 2;
 local_14c = 4;
 uVar1 = memop_memcmp(&local_148,&local_154,0xc);
 printf("MEMOP-L2-04: %d\n",uVar1);
 uVar1 = memop_bzero(local_15e,10);
 printf("MEMOP-L2-05: %d\n",uVar1);
 local_162 = 0x4030201;
 memset(local_166,0,4);
 uVar1 = memop_bcopy(&local_162,local_166,4);
 printf("MEMOP-L2-06: %d\n",uVar1);
 local_16e = 0x3020100;
 local_16a = 0x7060504;
 uVar1 = memop_unaligned_access(&local_16e);
 printf("MEMOP-L3-01: 0x%x\n",uVar1);
 local_174 = 5;
 uVar1 = memop_memory_barrier(&local_174);
 printf("MEMOP-L3-02: %d\n",uVar1);
 return;
}



/* Function: main @ 000130d0 */

undefined4 main(void)

{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}



/* Function: extern_function @ 00013120 */

int extern_function(int param_1)

{
 return param_1 * 3;
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 70 */
