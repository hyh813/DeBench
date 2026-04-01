/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Ghidra-specific type definitions */
typedef unsigned char undefined;
typedef unsigned int undefined4;
typedef int (*func_ptr_t)(int);
typedef unsigned char byte;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/3/3_clang_Os_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stdbool.h>

/* Global variable declarations */
int global_counter = 0;
int static_local_counter = 0;
extern int extern_global_var;
char const_string[100] = "constant_data_string";
int file_scope_static = 0;

void *global_heap_ptr;
char DAT_000135c1[100];
char DAT_000135df[100];
char DAT_000132e3[100];
char DAT_0001327d[100];
char DAT_000132a2[100];
char DAT_0001326d[100];
char DAT_000135fd[100];
char DAT_00013621[100];
int DAT_00013670;
int DAT_0001367c;
func_ptr_t global_func_ptr;

/* External function declarations */
static int extern_function(int param_1);
int double_value(int param_1);
void LOCK(void);
void UNLOCK(void);

/* LOCK/UNLOCK stub implementations */
void LOCK(void)
{
 return;
}

void UNLOCK(void)
{
 return;
}

/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 ((void (*)(void))(undefined *)0x0)();
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



/* Function: local_vars @ 000112b4 */

int local_vars(int param_1)

{
 return param_1 * 2 + 10;
}



/* Function: local_array @ 000112be */

undefined4 local_array(int param_1)

{
 int iVar1;
 int iVar2;
 int local_28 [10];
 
 iVar1 = 0;
 iVar2 = 0;
 do {
 local_28[iVar2] = iVar1;
 iVar2 = iVar2 + 1;
 iVar1 = iVar1 + param_1;
 } while (iVar2 != 10);
 return local_28[5];
}



/* Function: local_struct @ 000112dc */

int local_struct(int param_1)

{
 return param_1 * 3;
}



/* Function: address_of_local @ 000112e4 */

undefined4 address_of_local(undefined4 *param_1)

{
 *param_1 = 0x2a;
 return 0x2a;
}



/* Function: address_of_array @ 000112f4 */

int address_of_array(int *param_1)

{
 return *param_1 * 2;
}



/* Function: large_stack_frame @ 000112fd */

int large_stack_frame(void)

{
 int iVar1;
 char local_800 [2048];
 
 iVar1 = 0;
 do {
 local_800[iVar1] = (char)iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x800);
 return (int)local_800[0x400];
}



/* Function: vla_stack @ 0001131f */

undefined4 vla_stack(int param_1)

{
 int iVar1;
 undefined4 uVar2;
 int iVar3;
 int iVar4;
 int *local_stack;
 
 if (param_1 - 0x3e9U < 0xfffffc18) {
 uVar2 = 0xffffffff;
 }
 else {
 local_stack = (int *)alloca(param_1 * 4);
 iVar3 = 0;
 iVar4 = param_1;
 do {
 local_stack[iVar3 / 2] = iVar3;
 iVar3 = iVar3 + 2;
 iVar4 = iVar4 + -1;
 } while (iVar4 != 0);
 uVar2 = local_stack[(param_1 - (param_1 >> 0x1f) & 0xfffffffeU) / 2];
 }
 return uVar2;
}



/* Function: alloca_usage @ 0001136f */

undefined4 alloca_usage(int param_1)

{
 undefined4 uVar2;
 int iVar3;
 int iVar4;
 int *local_stack;
 
 if (param_1 < 1) {
 uVar2 = 0xffffffff;
 }
 else {
 local_stack = (int *)alloca(param_1 * 4);
 iVar3 = 0;
 iVar4 = 0;
 do {
 local_stack[iVar4] = iVar3;
 iVar4 = iVar4 + 1;
 iVar3 = iVar3 + 3;
 } while (param_1 != iVar4);
 uVar2 = local_stack[(param_1 - (param_1 >> 0x1f) & 0xfffffffeU) / 2];
 }
 return uVar2;
}



/* Function: stack_alias @ 000113b2 */

undefined4 stack_alias(void)

{
 return 0x14;
}



/* Function: test_stack_memory @ 000113b8 */

void test_stack_memory(void)

{
 int iVar1;
 int *piVar2;
 int local_80c [256];
 char local_40c;
 
 puts(&DAT_000135c1);
 printf("MEM-L1-01 (local_vars): %d\n",0x14);
 iVar1 = 0;
 do {
 *(int *)((int)local_80c + iVar1 * 2) = iVar1;
 iVar1 = iVar1 + 2;
 } while (iVar1 != 0x14);
 printf("MEM-L1-02 (local_array): %d\n",local_80c[5]);
 printf("MEM-L1-03 (local_struct): %d\n",0xf);
 printf("MEM-L1-04 (address_of_local): %d\n",0x2a);
 printf("MEM-L1-05 (address_of_array): %d\n",2);
 iVar1 = 0;
 do {
 *(char *)((int)local_80c + iVar1) = (char)iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x800);
 printf("MEM-L2-01 (large_stack_frame): %d\n",(int)local_40c);
 iVar1 = 0;
 do {
 *(int *)((int)local_80c + iVar1 * 2) = iVar1;
 iVar1 = iVar1 + 2;
 } while (iVar1 != 0x14);
 piVar2 = local_80c;
 printf("MEM-L2-02 (vla_stack): %d\n",local_80c[5]);
 iVar1 = 0;
 do {
 *piVar2 = iVar1;
 iVar1 = iVar1 + 3;
 piVar2 = piVar2 + 1;
 } while (iVar1 != 0x1e);
 printf("MEM-L2-03 (alloca_usage): %d\n",local_80c[5]);
 printf("MEM-L2-04 (stack_alias): %d\n",0x14);
 return;
}



/* Function: heap_basic @ 000114ed */

undefined4 heap_basic(int param_1)

{
 void *__ptr;
 int iVar1;
 int iVar2;
 undefined4 uVar3;
 
 __ptr = malloc(param_1 * 4);
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
 uVar3 = *(undefined4 *)((int)__ptr + (param_1 - (param_1 >> 0x1f) & 0xfffffffeU) * 2);
 free(__ptr);
 }
 return uVar3;
}



/* Function: heap_calloc @ 00011546 */

int heap_calloc(size_t param_1)

{
 void *__ptr;
 size_t sVar1;
 int iVar2;
 
 __ptr = calloc(param_1,4);
 if (__ptr == (void *)0x0) {
 iVar2 = -1;
 }
 else {
 iVar2 = 0;
 if (1 < (int)param_1) {
 iVar2 = 0;
 sVar1 = 1;
 do {
 iVar2 = iVar2 + *(int *)((int)__ptr + sVar1 * 4);
 sVar1 = sVar1 + 1;
 } while (param_1 != sVar1);
 }
 free(__ptr);
 }
 return iVar2;
}



/* Function: heap_realloc @ 0001159a */

undefined4 heap_realloc(void)

{
 void *__ptr;
 int iVar1;
 void *__ptr_00;
 int *piVar2;
 int iVar3;
 undefined4 uVar4;
 
 __ptr = malloc(0x14);
 if (__ptr == (void *)0x0) {
 uVar4 = 0xffffffff;
 }
 else {
 iVar1 = 1;
 do {
 *(int *)((int)__ptr + iVar1 * 4 + -4) = iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 6);
 iVar1 = *(int *)((int)__ptr + 8);
 __ptr_00 = realloc(__ptr,0x28);
 if (__ptr_00 == (void *)0x0) {
 uVar4 = 0xfffffffe;
 __ptr_00 = __ptr;
 }
 else {
 piVar2 = (int *)((int)__ptr_00 + 0x14);
 iVar3 = 0x32;
 do {
 *piVar2 = iVar3;
 iVar3 = iVar3 + 10;
 piVar2 = piVar2 + 1;
 } while (iVar3 != 100);
 uVar4 = 0xfffffffd;
 if (*(int *)((int)__ptr_00 + 8) == iVar1) {
 uVar4 = *(undefined4 *)((int)__ptr_00 + 0x14);
 }
 }
 free(__ptr_00);
 }
 return uVar4;
}



/* Function: heap_array @ 00011627 */

undefined4 heap_array(int param_1)

{
 void *__ptr;
 int iVar1;
 int iVar2;
 undefined4 uVar3;
 
 __ptr = malloc(param_1 * 4);
 if (__ptr == (void *)0x0) {
 uVar3 = 0xffffffff;
 }
 else {
 if (0 < param_1) {
 iVar1 = 0;
 iVar2 = 0;
 do {
 *(int *)((int)__ptr + iVar2 * 4) = iVar1;
 iVar2 = iVar2 + 1;
 iVar1 = iVar1 + 3;
 } while (param_1 != iVar2);
 }
 uVar3 = *(undefined4 *)((int)__ptr + (param_1 - (param_1 >> 0x1f) & 0xfffffffeU) * 2);
 free(__ptr);
 }
 return uVar3;
}



/* Function: heap_struct @ 00011682 */

int heap_struct(int param_1)

{
 return param_1 * 3;
}



/* Function: heap_nested @ 0001168a */

undefined4 heap_nested(undefined4 *param_1)

{
 undefined4 *__ptr;
 undefined4 *puVar1;
 undefined4 uVar2;
 
 __ptr = malloc(8);
 *param_1 = __ptr;
 if (__ptr == (undefined4 *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 *__ptr = 10;
 puVar1 = malloc(8);
 __ptr[1] = puVar1;
 if (puVar1 == (undefined4 *)0x0) {
 free(__ptr);
 uVar2 = 0xfffffffe;
 }
 else {
 *puVar1 = 0x14;
 puVar1[1] = 0;
 uVar2 = 0;
 }
 }
 return uVar2;
}



/* Function: linked_list_heap @ 000116f7 */

int linked_list_heap(void)

{
 int *piVar1;
 int *piVar2;
 int iVar3;
 uint uVar4;
 int *piVar5;
 int *__ptr;
 bool bVar6;
 int *local_14;
 
 piVar1 = malloc(8);
 if (piVar1 == (int *)0x0) {
 bVar6 = true;
 __ptr = (int *)0x0;
 }
 else {
 iVar3 = 0;
 uVar4 = 0;
 local_14 = (int *)0x0;
 piVar5 = (int *)0x0;
 do {
 piVar2 = piVar1;
 *piVar2 = iVar3;
 piVar2[1] = 0;
 __ptr = piVar2;
 if (piVar5 != (int *)0x0) {
 local_14[1] = (int)piVar2;
 __ptr = piVar5;
 }
 if (uVar4 == 0xfffffffc) {
 bVar6 = false;
 goto LAB_00011798;
 }
 piVar1 = malloc(8);
 uVar4 = uVar4 - 1;
 iVar3 = iVar3 + 10;
 piVar5 = __ptr;
 local_14 = piVar2;
 } while (piVar1 != (int *)0x0);
 bVar6 = ~uVar4 < 4;
 }
 if (__ptr == (int *)0x0) {
 __ptr = (int *)0x0;
 }
 else {
 do {
 piVar1 = (int *)__ptr[1];
 free(__ptr);
 __ptr = piVar1;
 } while (piVar1 != (int *)0x0);
 __ptr = (int *)0x0;
 }
LAB_00011798:
 if (bVar6) {
 iVar3 = -1;
 }
 else {
 iVar3 = 0;
 piVar1 = __ptr;
 if (__ptr != (int *)0x0) {
 do {
 iVar3 = iVar3 + *piVar1;
 piVar5 = piVar1 + 1;
 piVar1 = (int *)*piVar5;
 } while ((int *)*piVar5 != (int *)0x0);
 while (__ptr != (int *)0x0) {
 piVar1 = (int *)__ptr[1];
 free(__ptr);
 __ptr = piVar1;
 }
 }
 }
 return iVar3;
}



/* Function: create_tree_node @ 000117d1 */

void create_tree_node(undefined4 param_1)

{
 undefined4 *puVar1;
 
 puVar1 = malloc(0xc);
 if (puVar1 != (undefined4 *)0x0) {
 *puVar1 = param_1;
 puVar1[1] = 0;
 puVar1[2] = 0;
 }
 return;
}



/* Function: tree_heap_traversal @ 00011804 */

undefined4 tree_heap_traversal(void)

{
 return 0x3c;
}



/* Function: memory_leak @ 0001180a */

undefined4 memory_leak(int param_1)

{
 void *pvVar1;
 undefined4 uVar2;
 int iVar3;
 
 pvVar1 = malloc(param_1 * 4);
 if (pvVar1 == (void *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 if (0 < param_1) {
 iVar3 = 0;
 do {
 *(int *)((int)pvVar1 + iVar3 * 4) = iVar3;
 iVar3 = iVar3 + 1;
 } while (param_1 != iVar3);
 }
 uVar2 = *(undefined4 *)((int)pvVar1 + (param_1 - (param_1 >> 0x1f) & 0xfffffffeU) * 2);
 }
 return uVar2;
}



/* Function: dangling_pointer @ 00011856 */

undefined4 dangling_pointer(void)

{
 undefined4 *__ptr;
 undefined4 uVar1;
 
 __ptr = malloc(4);
 if (__ptr == (undefined4 *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 printf("value before free: %d\n",0x2a);
 free(__ptr);
 uVar1 = *__ptr;
 }
 return uVar1;
}



/* Function: double_free @ 000118a4 */

undefined4 double_free(undefined4 *param_1)

{
 if (param_1 != (undefined4 *)0x0) {
 return *param_1;
 }
 return 0xfffffffe;
}



/* Function: heap_overflow @ 000118b5 */

int heap_overflow(void)

{
 int *__ptr;
 int iVar1;
 int *piVar2;
 
 __ptr = malloc(0x28);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = 0;
 piVar2 = __ptr;
 do {
 *piVar2 = iVar1;
 iVar1 = iVar1 + 100;
 piVar2 = piVar2 + 1;
 } while (iVar1 != 0x44c);
 iVar1 = *__ptr;
 free(__ptr);
 }
 return iVar1;
}



/* Function: test_heap_memory @ 000118ff */

void test_heap_memory(void)

{
 undefined4 uVar1;
 void *pvVar2;
 __pid_t __pid;
 uint uVar3;
 int iVar4;
 char *__format;
 uint local_10;
 void *local_c;
 
 puts(&DAT_000135df);
 uVar1 = heap_basic(10);
 printf("HEAP-L2-01 (heap_basic): %d\n",uVar1);
 uVar1 = heap_calloc(5);
 printf("HEAP-L2-02 (heap_calloc): %d\n",uVar1);
 uVar1 = heap_realloc();
 printf("HEAP-L2-03 (heap_realloc): %d\n",uVar1);
 uVar1 = heap_array(10);
 printf("HEAP-L2-04 (heap_array): %d\n",uVar1);
 printf("HEAP-L2-05 (heap_struct): %d\n",0xf);
 local_c = (void *)0x0;
 uVar1 = heap_nested(&local_c);
 printf("HEAP-L2-06 (heap_nested): %d\n",uVar1);
 pvVar2 = local_c;
 if (local_c != (void *)0x0) {
 free(*(void **)((int)local_c + 4));
 free(pvVar2);
 }
 uVar1 = linked_list_heap();
 printf("HEAP-L3-01 (linked_list_heap): %d\n",uVar1);
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n",0x3c);
 pvVar2 = malloc(0x14);
 if (pvVar2 == (void *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 iVar4 = 0;
 do {
 *(int *)((int)pvVar2 + iVar4 * 4) = iVar4;
 iVar4 = iVar4 + 1;
 } while (iVar4 != 5);
 uVar1 = *(undefined4 *)((int)pvVar2 + 8);
 }
 printf("HEAP-L3-03 (memory_leak): %d\n",uVar1);
 printf("HEAP-L3-04 (dangling_pointer): ");
 __pid = fork();
 if (__pid != 0) {
 if (__pid < 1) {
 perror(&DAT_000132e3);
 }
 else {
 waitpid(__pid,(int *)&local_10,0);
 uVar3 = local_10 & 0x7f;
 if (uVar3 == 0) {
 uVar3 = local_10 >> 8 & 0xff;
 __format = &DAT_0001327d;
 }
 else {
 if ((int)(uVar3 * 0x1000000 + 0x1000000) < 0x2000000) {
 return;
 }
 __format = &DAT_000132a2;
 }
 printf(__format,uVar3);
 }
 return;
 }
 uVar1 = dangling_pointer();
 printf(&DAT_0001326d,uVar1);
 /* WARNING: Subroutine does not return */
 exit(0);
}



/* Function: FUN_00011af0 @ 00011af0 */

void FUN_00011af0(void)

{
 return;
}



/* Function: FUN_00011b0a @ 00011b0a */

int FUN_00011b0a(void)

{
 return 0;
}



/* Function: FUN_00011b1f @ 00011b1f */

undefined4 FUN_00011b1f(undefined4 param_1,uint param_2)

{
 if (9 < param_2) {
 return 0xffffffff;
 }
 return 0;
}



/* Function: FUN_00011b40 @ 00011b40 */

void FUN_00011b40(undefined4 param_1,int param_2)

{
 return;
}



/* Function: call_static_func @ 00011b5f */

int call_static_func(int param_1)

{
 return param_1 * 2 + 1;
}



/* Function: FUN_00011b6c @ 00011b6c */

int FUN_00011b6c(void)

{
 return 100;
}



/* Function: call_extern_func @ 00011b7f */

void call_extern_func(void)

{
 extern_function(5);
 return;
}



/* Function: FUN_00011ba5 @ 00011ba5 */

int FUN_00011ba5(void)

{
 return 0x2a;
}



/* Function: access_bss_var @ 00011bba */

undefined4 access_bss_var(void)

{
 return 0;
}



/* Function: access_bss_buffer @ 00011bbd */

undefined4 access_bss_buffer(void)

{
 return 0;
}



/* Function: global_struct_access @ 00011bc0 */

undefined4 global_struct_access(void)

{
 return 0x1e;
}



/* Function: FUN_00011bcb @ 00011bcb */

void FUN_00011bcb(undefined4 param_1,undefined4 param_2)

{
 return;
}



/* Function: FUN_00011be2 @ 00011be2 */

undefined4 FUN_00011be2(void)

{
 return 0;
}



/* Function: FUN_00011bf5 @ 00011bf5 */

void FUN_00011bf5(undefined4 param_1,undefined4 param_2)

{
 return;
}



/* Function: call_global_callback @ 00011c07 */

undefined4 call_global_callback(undefined4 param_1)

{
 undefined4 uVar1;
 
 if (global_func_ptr == (func_ptr_t)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 uVar1 = global_func_ptr(param_1);
 }
 return uVar1;
}



/* Function: FUN_00011c39 @ 00011c39 */

undefined4 FUN_00011c39(undefined4 param_1,undefined4 *param_2)

{
 if (param_2 != (undefined4 *)0x0) {
 return *param_2;
 }
 return 0xffffffff;
}



/* Function: static_complex_init @ 00011c55 */

undefined4 static_complex_init(void)

{
 return 0xf;
}



/* Function: tls_access @ 00011c5b */

int tls_access(int param_1)

{
 return param_1 * 2;
}



/* Function: init_order_test @ 00011c62 */

undefined4 init_order_test(void)

{
 return 0x14;
}



/* Function: test_static_global @ 00011c68 */

void test_static_global(void)

{
 undefined4 uVar1;
 undefined4 local_10;
 
 puts(&DAT_000135fd);
 global_counter = global_counter + 1;
 printf("STM-L1-01 (global_var_access): %d\n",global_counter);
 printf("STM-L1-01 (global_var_read): %d\n",global_counter * 2);
 printf("STM-L1-02 (global_array_access): %d\n",5);
 static_local_counter = 1;
 printf("STM-L1-03 (static_local): %d\n",1);
 static_local_counter = static_local_counter + 1;
 printf("STM-L1-03 (static_local): %d\n",static_local_counter);
 printf("STM-L1-04 (call_static_func): %d\n",0xb);
 printf("STM-L2-01 (access_extern_global): %d\n",extern_global_var + 100);
 uVar1 = extern_function(5);
 printf("STM-L2-02 (call_extern_func): %d\n",uVar1);
 printf("STM-L2-03 (read_const_data): %d\n",(char)const_string[4] + 0x2a);
 printf("STM-L2-04 (access_bss_var): %d\n",0);
 printf("STM-L2-04 (access_bss_buffer): %d\n",0);
 printf("STM-L2-05 (global_struct_access): %d\n",0x1e);
 file_scope_static = 0x32;
 printf("STM-L2-06 (file_static): %d\n",0x32);
 global_func_ptr = double_value;
 printf("STM-L2-07 (global_func_ptr): %d\n",10);
 global_heap_ptr = &local_10;
 local_10 = 100;
 printf("STM-L2-08 (global_heap_store): %d\n",100);
 printf("STM-L2-09 (static_complex_init): %d\n",0xf);
 printf("STM-L3-01 (tls_access): %d\n",0x14);
 printf("STM-L3-02 (init_order_test): %d\n",0x14);
 return;
}



/* Function: double_value @ 00011e5b */

int double_value(int param_1)

{
 return param_1 * 2;
}



/* Function: memop_memset @ 00011e62 */

uint memop_memset(byte *param_1,size_t param_2,int param_3)

{
 uint uVar1;
 
 uVar1 = 0xffffffff;
 if ((param_1 != (byte *)0x0) && (param_2 != 0)) {
 memset(param_1,param_3,param_2);
 uVar1 = (uint)*param_1;
 }
 return uVar1;
}



/* Function: memop_memcpy @ 00011e9e */

undefined4 memop_memcpy(void *param_1,void *param_2,uint param_3)

{
 undefined4 uVar1;
 
 uVar1 = 0xffffffff;
 if (((param_1 != (void *)0x0) && (param_2 != (void *)0x0)) && (param_3 != 0)) {
 memcpy(param_1,param_2,param_3);
 uVar1 = *(undefined4 *)(((param_3 & 0xfffffffc) - 4) + (int)param_1);
 }
 return uVar1;
}



/* Function: memop_memmove @ 00011ee1 */

int memop_memmove(void *param_1,uint param_2)

{
 int iVar1;
 
 iVar1 = -1;
 if ((param_1 != (void *)0x0) && (1 < param_2)) {
 memmove((void *)((int)param_1 + 1),param_1,param_2 - 1);
 iVar1 = (int)*(char *)((int)param_1 + 1);
 }
 return iVar1;
}



/* Function: memop_memcmp @ 00011f20 */

int memop_memcmp(void *param_1,void *param_2,size_t param_3)

{
 int iVar1;
 int iVar2;
 
 iVar1 = 0;
 if (((param_1 != (void *)0x0) && (param_2 != (void *)0x0)) && (param_3 != 0)) {
 iVar2 = memcmp(param_1,param_2,param_3);
 iVar1 = 1;
 if (iVar2 < 1) {
 iVar1 = -(uint)(iVar2 != 0);
 }
 }
 return iVar1;
}



/* Function: memop_bzero @ 00011f70 */

uint memop_bzero(byte *param_1,size_t param_2)

{
 uint uVar1;
 
 if (param_1 == (byte *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 memset(param_1,0,param_2);
 uVar1 = (uint)*param_1;
 }
 return uVar1;
}



/* Function: memop_bcopy @ 00011fa7 */

uint memop_bcopy(void *param_1,byte *param_2,size_t param_3)

{
 uint uVar1;
 
 uVar1 = 0xffffffff;
 if (((param_1 != (void *)0x0) && (param_2 != (byte *)0x0)) && (param_3 != 0)) {
 memmove(param_2,param_1,param_3);
 uVar1 = (uint)*param_2;
 }
 return uVar1;
}



/* Function: memop_unaligned_access @ 00011fe8 */

undefined4 memop_unaligned_access(int param_1)

{
 if (param_1 != 0) {
 return *(undefined4 *)(param_1 + 1);
 }
 return 0xffffffff;
}



/* Function: memop_memory_barrier @ 00011ff8 */

int memop_memory_barrier(int *param_1)

{
 if (param_1 != (int *)0x0) {
 LOCK();
 UNLOCK();
 return *param_1 + *param_1;
 }
 return -1;
}



/* Function: test_memory_op_functions @ 0001200e */

void test_memory_op_functions(void)

{
 int iVar1;
 int iVar2;
 undefined4 uVar3;
 undefined4 uVar4;
 undefined4 in_stack_ffffffe4;
 
 uVar4 = 0x12017;
 puts(&DAT_00013621);
 printf("MEMOP-L2-01: %d\n",0x41);
 printf("MEMOP-L2-02: %d\n",0x32);
 printf("MEMOP-L2-03: %c\n",0x48);
 uVar3 = 0xc;
 iVar1 = memcmp(&DAT_00013670,&DAT_0001367c,0xc);
 iVar2 = 1;
 if (iVar1 < 1) {
 iVar2 = -(uint)(iVar1 != 0);
 }
 printf("MEMOP-L2-04: %d\n",iVar2);
 printf("MEMOP-L2-05: %d\n",0);
 printf("MEMOP-L2-06: %d\n",1);
 printf("MEMOP-L3-01: 0x%x\n",0x4030201);
 LOCK();
 UNLOCK();
 printf("MEMOP-L3-02: %d\n",10,uVar3,uVar4,in_stack_ffffffe4);
 return;
}



/* Function: main @ 00012128 */

int main(void)

{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}



/* Function: extern_function @ 00012154 */

static int extern_function(int param_1)

{
 return param_1 * 3;
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 68 */
