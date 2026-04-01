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
typedef int __pid_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Ghidra decompiler types */
typedef unsigned int undefined4;
typedef unsigned short undefined2;
typedef unsigned char undefined1;
typedef unsigned int uint;
typedef unsigned char byte;
typedef int bool;
#define true 1
#define false 0
typedef void (*code)(int);

/* Global variable definitions */
int global_counter = 0;
int global_array[10] = {0};
int static_local_counter = 0;
int extern_global_var = 0;
int const_string = 0;
int file_scope_static = 0;
void *global_func_ptr = 0;
void *global_heap_ptr = 0;
int double_value = 0;

/* Data section variables */
int DAT_00012cfe = 0;
int DAT_00012d1c = 0;
int DAT_00012d3a = 0;
int DAT_00012d5e = 0;
int DAT_00012dac = 0;
int DAT_00012db8 = 0;
int DAT_00012a2b = 0;
int DAT_000129c5 = 0;
int DAT_000129ea = 0;
int DAT_000129b5 = 0;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/3/3_clang_Os_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


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

undefined4 local_array(int param_1)

{
 int iVar1;
 int iVar2;
 int local_28 [10];
 
 iVar1 = 0;
 iVar2 = 0;
 do {
 local_28[-iVar2] = iVar1;
 iVar2 = iVar2 + -1;
 iVar1 = iVar1 + param_1;
 } while (iVar2 != -10);
 return local_28[5];
}



/* Function: local_struct @ 000107f8 */

int local_struct(int param_1)

{
 return param_1 * 3;
}



/* Function: address_of_local @ 00010800 */

undefined4 address_of_local(undefined4 *param_1)

{
 *param_1 = 0x2a;
 return 0x2a;
}



/* Function: address_of_array @ 00010810 */

int address_of_array(int *param_1)

{
 return *param_1 << 1;
}



/* Function: large_stack_frame @ 0001081c */

undefined1 large_stack_frame(void)

{
 int iVar1;
 undefined1 local_808 [2048];
 
 iVar1 = 0;
 do {
 local_808[iVar1] = (char)iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x800);
 return local_808[0x400];
}



/* Function: vla_stack @ 0001084c */

undefined4 vla_stack(int param_1)

{
 int iVar1;
 undefined4 uVar2;
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
 uVar2 = *(undefined4 *)
 ((int)&iStack_10 + ((param_1 - (param_1 >> 0x1f)) * 2 & 0xfffffffdU) + iVar1 + 0x10);
 }
 return uVar2;
}



/* Function: alloca_usage @ 000108c0 */

undefined4 alloca_usage(int param_1)

{
 int iVar1;
 int iVar2;
 int iVar3;
 undefined4 uVar4;
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
 uVar4 = *(undefined4 *)
 ((int)&local_10 + ((param_1 - (param_1 >> 0x1f)) * 2 & 0xfffffffdU) + iVar1 + 0x10);
 }
 else {
 uVar4 = 0xffffffff;
 }
 return uVar4;
}



/* Function: stack_alias @ 00010924 */

undefined4 stack_alias(void)

{
 return 0x14;
}



/* Function: test_stack_memory @ 0001092c */

void test_stack_memory(void)

{
 int iVar1;
 int *piVar2;
 int local_810 [256];
 byte local_410;
 
 puts(&DAT_00012cfe);
 printf("MEM-L1-01 (local_vars): %d\n",0x14);
 iVar1 = 0;
 do {
 *(int *)((int)local_810 + iVar1 * 2) = iVar1;
 iVar1 = iVar1 + 2;
 } while (iVar1 != 0x14);
 printf("MEM-L1-02 (local_array): %d\n",local_810[5]);
 printf("MEM-L1-03 (local_struct): %d\n",0xf);
 printf("MEM-L1-04 (address_of_local): %d\n",0x2a);
 printf("MEM-L1-05 (address_of_array): %d\n",2);
 iVar1 = 0;
 do {
 *(char *)((int)local_810 + iVar1) = (char)iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x800);
 printf("MEM-L2-01 (large_stack_frame): %d\n",(uint)local_410);
 iVar1 = 0;
 do {
 *(int *)((int)local_810 + iVar1 * 2) = iVar1;
 iVar1 = iVar1 + 2;
 } while (iVar1 != 0x14);
 printf("MEM-L2-02 (vla_stack): %d\n",local_810[5]);
 iVar1 = 0;
 piVar2 = local_810;
 do {
 *piVar2 = iVar1;
 iVar1 = iVar1 + 3;
 piVar2 = piVar2 + 1;
 } while (iVar1 != 0x1e);
 printf("MEM-L2-03 (alloca_usage): %d\n",local_810[5]);
 printf("MEM-L2-04 (stack_alias): %d\n",0x14);
 return;
}



/* Function: heap_basic @ 00010a5c */

undefined4 heap_basic(int param_1)

{
 void *__ptr;
 int iVar1;
 int iVar2;
 undefined4 uVar3;
 
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
 uVar3 = *(undefined4 *)((int)__ptr + ((param_1 - (param_1 >> 0x1f)) * 2 & 0xfffffffdU));
 free(__ptr);
 }
 return uVar3;
}



/* Function: heap_calloc @ 00010abc */

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



/* Function: heap_realloc @ 00010b14 */

undefined4 heap_realloc(void)

{
 void *__ptr;
 void *__ptr_00;
 int iVar1;
 undefined4 uVar2;
 int iVar3;
 
 __ptr = malloc(0x14);
 if (__ptr == (void *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 iVar3 = 0;
 do {
 iVar1 = iVar3 + 1;
 *(int *)((int)__ptr + iVar3 * 4) = iVar1;
 iVar3 = iVar1;
 } while (iVar1 != 5);
 iVar3 = *(int *)((int)__ptr + 8);
 __ptr_00 = realloc(__ptr,0x28);
 if (__ptr_00 == (void *)0x0) {
 uVar2 = 0xfffffffe;
 __ptr_00 = __ptr;
 }
 else {
 *(undefined4 *)((int)__ptr_00 + 0x24) = 0x5a;
 *(undefined4 *)((int)__ptr_00 + 0x18) = 0x3c;
 uVar2 = 0xfffffffd;
 *(undefined4 *)((int)__ptr_00 + 0x14) = 0x32;
 *(undefined4 *)((int)__ptr_00 + 0x1c) = 0x46;
 *(undefined4 *)((int)__ptr_00 + 0x20) = 0x50;
 if (*(int *)((int)__ptr_00 + 8) == iVar3) {
 uVar2 = 0x32;
 }
 }
 free(__ptr_00);
 }
 return uVar2;
}



/* Function: heap_array @ 00010bbc */

undefined4 heap_array(int param_1)

{
 int *__ptr;
 int iVar1;
 int *piVar2;
 int iVar3;
 undefined4 uVar4;
 
 __ptr = malloc(param_1 << 2);
 if (__ptr == (int *)0x0) {
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
 uVar4 = *(undefined4 *)((int)__ptr + ((param_1 - (param_1 >> 0x1f)) * 2 & 0xfffffffdU));
 free(__ptr);
 }
 return uVar4;
}



/* Function: heap_struct @ 00010c20 */

int heap_struct(int param_1)

{
 return param_1 * 3;
}



/* Function: heap_nested @ 00010c28 */

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
 uVar2 = 0;
 *puVar1 = 0x14;
 puVar1[1] = 0;
 }
 }
 return uVar2;
}



/* Function: linked_list_heap @ 00010c98 */

/* WARNING: Removing unreachable block (ram,0x00010d44) */

int linked_list_heap(void)

{
 uint uVar1;
 int *piVar2;
 int *piVar3;
 int *piVar4;
 int *piVar5;
 int *__ptr;
 uint uVar6;
 int iVar7;
 bool bVar8;
 
 piVar2 = malloc(8);
 if (piVar2 == (int *)0x0) {
 bVar8 = true;
 __ptr = (int *)0x0;
 }
 else {
 iVar7 = 0;
 piVar4 = (int *)0x0;
 piVar5 = (int *)0x0;
 uVar1 = 0;
 do {
 uVar6 = uVar1;
 *piVar2 = iVar7;
 piVar2[1] = 0;
 __ptr = piVar2;
 if (piVar5 != (int *)0x0) {
 piVar4[1] = (int)piVar2;
 __ptr = piVar5;
 }
 if (uVar6 == 4) {
 bVar8 = false;
 goto LAB_00010d48;
 }
 piVar3 = malloc(8);
 iVar7 = iVar7 + 10;
 piVar4 = piVar2;
 piVar5 = __ptr;
 piVar2 = piVar3;
 uVar1 = uVar6 + 1;
 } while (piVar3 != (int *)0x0);
 bVar8 = uVar6 < 4;
 }
 while (__ptr != (int *)0x0) {
 piVar2 = (int *)__ptr[1];
 free(__ptr);
 __ptr = piVar2;
 }
 __ptr = (int *)0x0;
LAB_00010d48:
 iVar7 = -1;
 if ((!bVar8) && (iVar7 = 0, piVar2 = __ptr, __ptr != (int *)0x0)) {
 do {
 piVar4 = piVar2 + 1;
 iVar7 = *piVar2 + iVar7;
 piVar2 = (int *)*piVar4;
 } while ((int *)*piVar4 != (int *)0x0);
 while (__ptr != (int *)0x0) {
 piVar2 = (int *)__ptr[1];
 free(__ptr);
 __ptr = piVar2;
 }
 }
 return iVar7;
}



/* Function: create_tree_node @ 00010da4 */

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



/* Function: tree_heap_traversal @ 00010dd0 */

undefined4 tree_heap_traversal(void)

{
 return 0x3c;
}



/* Function: memory_leak @ 00010dd8 */

undefined4 memory_leak(int param_1)

{
 void *pvVar1;
 undefined4 uVar2;
 int iVar3;
 
 pvVar1 = malloc(param_1 << 2);
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
 uVar2 = *(undefined4 *)((int)pvVar1 + ((param_1 - (param_1 >> 0x1f)) * 2 & 0xfffffffdU));
 }
 return uVar2;
}



/* Function: dangling_pointer @ 00010e2c */

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



/* Function: double_free @ 00010e74 */

undefined4 double_free(undefined4 *param_1)

{
 undefined4 uVar1;
 
 if (param_1 == (undefined4 *)0x0) {
 uVar1 = 0xfffffffe;
 }
 else {
 uVar1 = *param_1;
 }
 return uVar1;
}



/* Function: heap_overflow @ 00010e84 */

undefined4 heap_overflow(void)

{
 undefined4 *__ptr;
 int iVar1;
 int iVar2;
 undefined4 uVar3;
 
 __ptr = malloc(0x28);
 if (__ptr == (undefined4 *)0x0) {
 uVar3 = 0xffffffff;
 }
 else {
 iVar1 = 0;
 iVar2 = 0;
 do {
 __ptr[-iVar2] = iVar1;
 iVar2 = iVar2 + -1;
 iVar1 = iVar1 + 100;
 } while (iVar2 != -0xb);
 uVar3 = *__ptr;
 free(__ptr);
 }
 return uVar3;
}



/* Function: test_heap_memory @ 00010ed0 */

void test_heap_memory(void)

{
 undefined4 uVar1;
 void *pvVar2;
 __pid_t __pid;
 char *__format;
 int iVar3;
 uint uVar4;
 uint local_10;
 void *local_c;
 
 puts(&DAT_00012d1c);
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
 iVar3 = 0;
 do {
 *(int *)((int)pvVar2 + iVar3 * 4) = iVar3;
 iVar3 = iVar3 + 1;
 } while (iVar3 != 5);
 uVar1 = *(undefined4 *)((int)pvVar2 + 8);
 }
 printf("HEAP-L3-03 (memory_leak): %d\n",uVar1);
 printf("HEAP-L3-04 (dangling_pointer): ");
 __pid = fork();
 if (__pid != 0) {
 if (__pid < 1) {
 perror(&DAT_00012a2b);
 return;
 }
 waitpid(__pid,(int *)&local_10,0);
 uVar4 = local_10 & 0x7f;
 if (uVar4 == 0) {
 uVar4 = local_10 >> 8 & 0xff;
 __format = &DAT_000129c5;
 }
 else {
 if ((int)(uVar4 * 0x1000000 + 0x1000000) < 0x2000000) {
 return;
 }
 __format = &DAT_000129ea;
 }
 printf(__format,uVar4);
 return;
 }
 uVar1 = dangling_pointer();
 printf(&DAT_000129b5,uVar1);
 /* WARNING: Subroutine does not return */
 exit(0);
}



/* Function: global_var_access @ 000110cc */

void global_var_access(void)

{
 global_counter = global_counter + 1;
 return;
}



/* Function: global_var_read @ 000110f0 */

int global_var_read(void)

{
 return global_counter << 1;
}



/* Function: global_array_access @ 00011104 */

undefined4 global_array_access(uint param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0xffffffff;
 if (param_1 < 10) {
 uVar1 = *(undefined4 *)(&global_array + param_1 * 4);
 }
 return uVar1;
}



/* Function: static_local @ 00011124 */

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



/* Function: call_static_func @ 00011154 */

uint call_static_func(int param_1)

{
 return param_1 << 1 | 1;
}



/* Function: access_extern_global @ 00011160 */

int access_extern_global(void)

{
 return extern_global_var + 100;
}



/* Function: call_extern_func @ 00011178 */

void call_extern_func(void)

{
 extern_function(5);
 return;
}



/* Function: read_const_data @ 00011180 */

int read_const_data(void)

{
 return *(byte *)(const_string + 4) + 0x2a;
}



/* Function: access_bss_var @ 00011198 */

undefined4 access_bss_var(void)

{
 return 0;
}



/* Function: access_bss_buffer @ 000111a0 */

undefined4 access_bss_buffer(void)

{
 return 0;
}



/* Function: global_struct_access @ 000111a8 */

undefined4 global_struct_access(void)

{
 return 0x1e;
}



/* Function: set_file_static @ 000111b0 */

void set_file_static(undefined4 param_1)

{
 file_scope_static = param_1;
 return;
}



/* Function: get_file_static @ 000111c4 */

undefined4 get_file_static(void)

{
 return file_scope_static;
}



/* Function: set_global_callback @ 000111d4 */

void set_global_callback(undefined4 param_1)

{
 global_func_ptr = param_1;
 return;
}



/* Function: call_global_callback @ 000111e8 */

void call_global_callback(undefined4 param_1)

{
 if (global_func_ptr != (code *)0x0) {
 /* WARNING: Could not recover jumptable at 0x000111fc. Too many branches */
 /* WARNING: Treating indirect jump as call */
 ((code)global_func_ptr)(param_1);
 return;
 }
 return;
}



/* Function: global_heap_store @ 00011204 */

undefined4 global_heap_store(undefined4 *param_1)

{
 undefined4 uVar1;
 
 global_heap_ptr = param_1;
 if (param_1 == (undefined4 *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 uVar1 = *param_1;
 }
 return uVar1;
}



/* Function: static_complex_init @ 00011224 */

undefined4 static_complex_init(void)

{
 return 0xf;
}



/* Function: tls_access @ 0001122c */

int tls_access(int param_1)

{
 return param_1 << 1;
}



/* Function: init_order_test @ 00011234 */

undefined4 init_order_test(void)

{
 return 0x14;
}



/* Function: test_static_global @ 0001123c */

void test_static_global(void)

{
 undefined4 uVar1;
 undefined4 local_14;
 
 puts(&DAT_00012d3a);
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
 printf("STM-L2-03 (read_const_data): %d\n",*(byte *)(const_string + 4) + 0x2a);
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



/* Function: double_value_func @ 00011484 */

int double_value_func(int param_1)

{
 return param_1 << 1;
}



/* Function: memop_memset @ 0001148c */

uint memop_memset(byte *param_1,size_t param_2,int param_3,size_t param_4)

{
 uint uVar1;
 
 uVar1 = 0xffffffff;
 if (param_1 != (byte *)0x0) {
 param_4 = param_2;
 }
 if (param_1 != (byte *)0x0 && param_2 != 0) {
 memset(param_1,param_3,param_4);
 uVar1 = (uint)*param_1;
 }
 return uVar1;
}



/* Function: memop_memcpy @ 000114c4 */

undefined4 memop_memcpy(void *param_1,void *param_2,uint param_3)

{
 undefined4 uVar1;
 uint unaff_r4;
 
 uVar1 = 0xffffffff;
 if (param_1 != (void *)0x0) {
 if (param_2 != (void *)0x0) {
 unaff_r4 = param_3;
 }
 if (param_2 != (void *)0x0 && param_3 != 0) {
 memcpy(param_1,param_2,unaff_r4);
 uVar1 = *(undefined4 *)((int)param_1 + ((unaff_r4 & 0xfffffffc) - 4));
 }
 }
 return uVar1;
}



/* Function: memop_memmove @ 00011508 */

uint memop_memmove(void *param_1,uint param_2)

{
 uint uVar1;
 
 uVar1 = 0xffffffff;
 if ((param_1 != (void *)0x0) && (1 < param_2)) {
 memmove((void *)((int)param_1 + 1),param_1,param_2 - 1);
 uVar1 = (uint)*(byte *)((int)param_1 + 1);
 }
 return uVar1;
}



/* Function: memop_memcmp @ 00011540 */

undefined4 memop_memcmp(void *param_1,void *param_2,size_t param_3)

{
 int iVar1;
 undefined4 uVar2;
 
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



/* Function: memop_bzero @ 00011588 */

uint memop_bzero(byte *param_1,size_t param_2)

{
 if (param_1 != (byte *)0x0) {
 memset(param_1,0,param_2);
 return (uint)*param_1;
 }
 return 0xffffffff;
}



/* Function: memop_bcopy @ 000115b4 */

uint memop_bcopy(void *param_1,byte *param_2,size_t param_3)

{
 uint uVar1;
 
 uVar1 = 0xffffffff;
 if ((param_1 != (void *)0x0) && (param_2 != (byte *)0x0 && param_3 != 0)) {
 memmove(param_2,param_1,param_3);
 uVar1 = (uint)*param_2;
 }
 return uVar1;
}



/* Function: memop_unaligned_access @ 000115ec */

undefined4 memop_unaligned_access(int param_1)

{
 if (param_1 != 0) {
 return *(undefined4 *)(param_1 + 1);
 }
 return 0xffffffff;
}



/* Function: memop_memory_barrier @ 00011618 */

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



/* Function: test_memory_op_functions @ 00011644 */

void test_memory_op_functions(void)

{
 int iVar1;
 undefined4 uVar2;
 uint local_14;
 char acStack_10 [4];
 char local_c [4];
 
 puts(&DAT_00012d5e);
 printf("MEMOP-L2-01: %d\n",0x41);
 printf("MEMOP-L2-02: %d\n",0x32);
 ((byte *)&local_14)[0] = 'H';
 ((byte *)&local_14)[1] = 'e';
 ((byte *)&local_14)[2] = 'l';
 ((byte *)&local_14)[3] = 'l';
 acStack_10[0] = 'o';
 acStack_10[1] = 'W';
 acStack_10[2] = 'o';
 acStack_10[3] = 'r';
 local_c[0] = 'l';
 local_c[1] = 'd';
 memmove((void *)((uint)&local_14 | 1),&local_14,9);
 printf("MEMOP-L2-03: %c\n",local_14 >> 8 & 0xff);
 iVar1 = memcmp(&DAT_00012dac,&DAT_00012db8,0xc);
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



/* Function: main @ 00011780 */

undefined4 main(void)

{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}







/* Function: my_sync_fetch_and_add_4 @ 000117a8 */

int my_sync_fetch_and_add_4(int *param_1,int param_2)

{
 int iVar1;
 int iVar2;
 
 do {
 iVar2 = *param_1;
 iVar1 = __sync_val_compare_and_swap(param_1, iVar2, iVar2 + param_2) != iVar2;
 } while (iVar1 != 0);
 return iVar2;
}



/* Function: my_sync_fetch_and_sub_4 @ 000117e0 */

int my_sync_fetch_and_sub_4(int *param_1,int param_2)

{
 int iVar1;
 int iVar2;
 
 do {
 iVar2 = *param_1;
 iVar1 = __sync_val_compare_and_swap(param_1, iVar2, iVar2 - param_2) != iVar2;
 } while (iVar1 != 0);
 return iVar2;
}



/* Function: my_sync_fetch_and_or_4 @ 00011818 */

uint my_sync_fetch_and_or_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1;
 iVar1 = __sync_val_compare_and_swap(param_1, uVar2, uVar2 | param_2) != uVar2;
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: my_sync_fetch_and_and_4 @ 00011850 */

uint my_sync_fetch_and_and_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1;
 iVar1 = __sync_val_compare_and_swap(param_1, uVar2, uVar2 & param_2) != uVar2;
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: my_sync_fetch_and_xor_4 @ 00011888 */

uint my_sync_fetch_and_xor_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1;
 iVar1 = __sync_val_compare_and_swap(param_1, uVar2, uVar2 ^ param_2) != uVar2;
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: my_sync_fetch_and_nand_4 @ 000118c0 */

uint my_sync_fetch_and_nand_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1;
 iVar1 = atomic_cas_uint(param_1, uVar2, ~(uVar2 & param_2));
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: my_sync_fetch_and_add_2 @ 000118fc */

int my_sync_fetch_and_add_2(uint param_1,int param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = atomic_cas_uint((uint *)(param_1 & 0xfffffffc), uVar2,
 (uVar2 ^ uVar1 + param_2 << iVar4) & 0xffff << iVar4 ^ uVar2);
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}



/* Function: my_sync_fetch_and_sub_2 @ 0001195c */

int my_sync_fetch_and_sub_2(uint param_1,int param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = atomic_cas_uint((uint *)(param_1 & 0xfffffffc), uVar2,
 (uVar2 ^ uVar1 - param_2 << iVar4) & 0xffff << iVar4 ^ uVar2);
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}



/* Function: my_sync_fetch_and_or_2 @ 000119bc */

int my_sync_fetch_and_or_2(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = atomic_cas_uint((uint *)(param_1 & 0xfffffffc), uVar2,
 (uVar2 ^ (uVar1 | param_2) << iVar4) & 0xffff << iVar4 ^ uVar2);
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}



/* Function: my_sync_fetch_and_and_2 @ 00011a1c */

int my_sync_fetch_and_and_2(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = atomic_cas_uint((uint *)(param_1 & 0xfffffffc), uVar2,
 (uVar2 ^ (uVar1 & param_2) << iVar4) & 0xffff << iVar4 ^ uVar2);
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}



/* Function: my_sync_fetch_and_xor_2 @ 00011a7c */

int my_sync_fetch_and_xor_2(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = atomic_cas_uint((uint *)(param_1 & 0xfffffffc), uVar2,
 (uVar2 ^ (uVar1 ^ param_2) << iVar4) & 0xffff << iVar4 ^ uVar2);
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}



/* Function: my_sync_fetch_and_nand_2 @ 00011adc */

int my_sync_fetch_and_nand_2(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = atomic_cas_uint((uint *)(param_1 & 0xfffffffc), uVar2,
 (uVar2 ^ ~(uVar1 & param_2) << iVar4) & 0xffff << iVar4 ^ uVar2);
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}



/* Function: my_sync_fetch_and_add_1 @ 00011b40 */

int my_sync_fetch_and_add_1(uint param_1,int param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = atomic_cas_uint((uint *)(param_1 & 0xfffffffc), uVar2,
 (uVar2 ^ uVar1 + param_2 << iVar4) & 0xff << iVar4 ^ uVar2);
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}



/* Function: my_sync_fetch_and_sub_1 @ 00011b9c */

int my_sync_fetch_and_sub_1(uint param_1,int param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = atomic_cas_uint((uint *)(param_1 & 0xfffffffc), uVar2,
 (uVar2 ^ uVar1 - param_2 << iVar4) & 0xff << iVar4 ^ uVar2);
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}



/* Function: my_sync_fetch_and_or_1 @ 00011bf8 */

int my_sync_fetch_and_or_1(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = atomic_cas_uint((uint *)(param_1 & 0xfffffffc), uVar2,
 (uVar2 ^ (uVar1 | param_2) << iVar4) & 0xff << iVar4 ^ uVar2);
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}



/* Function: my_sync_fetch_and_and_1 @ 00011c54 */

int my_sync_fetch_and_and_1(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = atomic_cas_uint((uint *)(param_1 & 0xfffffffc), uVar2,
 (uVar2 ^ (uVar1 & param_2) << iVar4) & 0xff << iVar4 ^ uVar2);
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}



/* Function: my_sync_fetch_and_xor_1 @ 00011cb0 */

int my_sync_fetch_and_xor_1(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = atomic_cas_uint((uint *)(param_1 & 0xfffffffc), uVar2,
 (uVar2 ^ (uVar1 ^ param_2) << iVar4) & 0xff << iVar4 ^ uVar2);
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}



/* Function: my_sync_fetch_and_nand_1 @ 00011d0c */

int my_sync_fetch_and_nand_1(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = atomic_cas_uint((uint *)(param_1 & 0xfffffffc), uVar2,
 (uVar2 ^ ~(uVar1 & param_2) << iVar4) & 0xff << iVar4 ^ uVar2);
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}



/* Function: my_sync_add_and_fetch_4 @ 00011d6c */

int my_sync_add_and_fetch_4(int *param_1,int param_2)

{
 int iVar1;
 int iVar2;
 
 do {
 iVar2 = *param_1 + param_2;
 iVar1 = atomic_cas_int(param_1, *param_1, iVar2);
 } while (iVar1 != 0);
 return iVar2;
}



/* Function: my_sync_sub_and_fetch_4 @ 00011da4 */

int my_sync_sub_and_fetch_4(int *param_1,int param_2)

{
 int iVar1;
 int iVar2;
 
 do {
 iVar2 = *param_1 - param_2;
 iVar1 = atomic_cas_int(param_1, *param_1, iVar2);
 } while (iVar1 != 0);
 return iVar2;
}



/* Function: my_sync_or_and_fetch_4 @ 00011ddc */

uint my_sync_or_and_fetch_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1 | param_2;
 iVar1 = atomic_cas_uint(param_1, *param_1, uVar2);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: my_sync_and_and_fetch_4 @ 00011e14 */

uint my_sync_and_and_fetch_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1 & param_2;
 iVar1 = atomic_cas_uint(param_1, *param_1, uVar2);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: my_sync_xor_and_fetch_4 @ 00011e4c */

uint my_sync_xor_and_fetch_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1 ^ param_2;
 iVar1 = atomic_cas_uint(param_1, *param_1, uVar2);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: my_sync_nand_and_fetch_4 @ 00011e84 */

uint my_sync_nand_and_fetch_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = ~(*param_1 & param_2);
 iVar1 = atomic_cas_uint(param_1, *param_1, uVar2);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: my_sync_add_and_fetch_2 @ 00011ec0 */

int my_sync_add_and_fetch_2(uint param_1,int param_2)

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
 iVar3 = atomic_cas_uint((uint *)(param_1 & 0xfffffffc), uVar2, uVar4);
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: my_sync_sub_and_fetch_2 @ 00011f28 */

int my_sync_sub_and_fetch_2(uint param_1,int param_2)

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
 iVar3 = atomic_cas_uint((uint *)(param_1 & 0xfffffffc), uVar2, uVar4);
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: my_sync_or_and_fetch_2 @ 00011f90 */

int my_sync_or_and_fetch_2(uint param_1,uint param_2)

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
 iVar3 = atomic_cas_uint((uint *)(param_1 & 0xfffffffc), uVar2, uVar4);
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: my_sync_and_and_fetch_2 @ 00011ff8 */

int my_sync_and_and_fetch_2(uint param_1,uint param_2)

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
 iVar3 = atomic_cas_uint((uint *)(param_1 & 0xfffffffc), uVar2, uVar4);
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: my_sync_xor_and_fetch_2 @ 00012060 */

int my_sync_xor_and_fetch_2(uint param_1,uint param_2)

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
 iVar3 = atomic_cas_uint((uint *)(param_1 & 0xfffffffc), uVar2, uVar4);
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: my_sync_nand_and_fetch_2 @ 000120c8 */

int my_sync_nand_and_fetch_2(uint param_1,uint param_2)

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
 iVar3 = atomic_cas_uint((uint *)(param_1 & 0xfffffffc), uVar2, uVar4);
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: my_sync_add_and_fetch_1 @ 00012134 */

int my_sync_add_and_fetch_1(uint param_1,int param_2)

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
 iVar3 = atomic_cas_uint((uint *)(param_1 & 0xfffffffc), uVar2, uVar4);
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: my_sync_sub_and_fetch_1 @ 00012198 */

int my_sync_sub_and_fetch_1(uint param_1,int param_2)

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
 iVar3 = atomic_cas_uint((uint *)(param_1 & 0xfffffffc), uVar2, uVar4);
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: my_sync_or_and_fetch_1 @ 000121fc */

int my_sync_or_and_fetch_1(uint param_1,uint param_2)

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
 iVar3 = atomic_cas_uint((uint *)(param_1 & 0xfffffffc), uVar2, uVar4);
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: my_sync_and_and_fetch_1 @ 00012260 */

int my_sync_and_and_fetch_1(uint param_1,uint param_2)

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
 iVar3 = atomic_cas_uint((uint *)(param_1 & 0xfffffffc), uVar2, uVar4);
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: my_sync_xor_and_fetch_1 @ 000122c4 */

int my_sync_xor_and_fetch_1(uint param_1,uint param_2)

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
 iVar3 = atomic_cas_uint((uint *)(param_1 & 0xfffffffc), uVar2, uVar4);
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: my_sync_nand_and_fetch_1 @ 00012328 */

int my_sync_nand_and_fetch_1(uint param_1,uint param_2)

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
 iVar3 = atomic_cas_uint((uint *)(param_1 & 0xfffffffc), uVar2, uVar4);
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: my_sync_val_compare_and_swap_4 @ 00012390 */

int my_sync_val_compare_and_swap_4(int *param_1,int param_2,undefined4 param_3)

{
 int iVar1;
 
 do {
 if (*param_1 != param_2) {
 return *param_1;
 }
 iVar1 = atomic_cas_int(param_1, param_2, (int)param_3);
 } while (iVar1 != 0);
 return param_2;
}



/* Function: my_sync_val_compare_and_swap_2 @ 000123e0 */

uint my_sync_val_compare_and_swap_2(uint param_1,uint param_2,int param_3)

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
 iVar3 = atomic_cas_uint((uint *)(param_1 & 0xfffffffc), uVar2,
 (param_3 << iVar4 ^ uVar2) & 0xffff << iVar4 ^ uVar2);
 } while (iVar3 != 0);
 return param_2;
}



/* Function: my_sync_val_compare_and_swap_1 @ 00012458 */

uint my_sync_val_compare_and_swap_1(uint param_1,uint param_2,int param_3)

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
 iVar3 = atomic_cas_uint((uint *)(param_1 & 0xfffffffc), uVar2,
 (param_3 << iVar4 ^ uVar2) & 0xff << iVar4 ^ uVar2);
 } while (iVar3 != 0);
 return param_2;
}



/* Function: my_sync_bool_compare_and_swap_4 @ 000124cc */

bool my_sync_bool_compare_and_swap_4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
 int iVar1;
 
 iVar1 = atomic_cas_int((int*)param_1, (int)param_2, (int)param_3);
 return iVar1 == 0;
}



/* Function: my_sync_bool_compare_and_swap_2 @ 000124f8 */

bool my_sync_bool_compare_and_swap_2(undefined4 param_1,int param_2)

{
 return true;
}



/* Function: my_sync_bool_compare_and_swap_1 @ 00012514 */

bool my_sync_bool_compare_and_swap_1(undefined4 param_1,int param_2)

{
 return true;
}



/* Function: my_sync_lock_test_and_set_4 @ 0001253c */

undefined4 my_sync_lock_test_and_set_4(undefined4 *param_1,undefined4 param_2)

{
 int iVar1;
 undefined4 uVar2;
 
 do {
 uVar2 = *param_1;
 iVar1 = atomic_cas_int((int*)param_1, (int)uVar2, (int)param_2);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: my_sync_lock_test_and_set_2 @ 00012574 */

int my_sync_lock_test_and_set_2(uint param_1,int param_2)

{
 int iVar1;
 uint uVar2;
 int iVar3;
 
 iVar3 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 iVar1 = atomic_cas_uint((uint *)(param_1 & 0xfffffffc), uVar2,
 (param_2 << iVar3 ^ uVar2) & 0xffff << iVar3 ^ uVar2);
 } while (iVar1 != 0);
 return (int)(short)((0xffff << iVar3 & uVar2) >> iVar3);
}



/* Function: my_sync_lock_test_and_set_1 @ 000125d4 */

int my_sync_lock_test_and_set_1(uint param_1,int param_2)

{
 int iVar1;
 uint uVar2;
 int iVar3;
 
 iVar3 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 iVar1 = atomic_cas_uint((uint *)(param_1 & 0xfffffffc), uVar2,
 (param_2 << iVar3 ^ uVar2) & 0xff << iVar3 ^ uVar2);
 } while (iVar1 != 0);
 return (int)(char)((0xff << iVar3 & uVar2) >> iVar3);
}



/* Function: my_sync_lock_release_8 @ 00012630 */

void my_sync_lock_release_8(undefined4 *param_1)

{
 __sync_synchronize();
 *param_1 = 0;
 param_1[1] = 0;
 return;
}



/* Function: my_sync_lock_release_4 @ 00012654 */

void my_sync_lock_release_4(undefined4 *param_1)

{
 __sync_synchronize();
 *param_1 = 0;
 return;
}



/* Function: my_sync_lock_release_2 @ 00012674 */

void my_sync_lock_release_2(undefined2 *param_1)

{
 __sync_synchronize();
 *param_1 = 0;
 return;
}



/* Function: my_sync_lock_release_1 @ 00012694 */

void my_sync_lock_release_1(undefined1 *param_1)

{
 __sync_synchronize();
 *param_1 = 0;
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 112 */

/* External data declarations */
extern int DAT_00012cfe;
extern int DAT_00012d1c;
extern int DAT_00012d3a;
extern int DAT_00012d5e;
extern int DAT_00012dac;
extern int DAT_00012db8;
extern int DAT_00012a2b;
extern int DAT_000129c5;
extern int DAT_000129ea;
extern int DAT_000129b5;



/* Rename conflicting function - removed to avoid conflict with global variable */

/* Helper function for atomic CAS operations */
int atomic_cas_int(int *ptr, int old_val, int new_val) {
 int expected = old_val;
 int desired = new_val;
 return __sync_val_compare_and_swap(ptr, expected, desired) != old_val;
}

int atomic_cas_uint(unsigned int *ptr, unsigned int old_val, unsigned int new_val) {
 unsigned int expected = old_val;
 unsigned int desired = new_val;
 return __sync_val_compare_and_swap((int*)ptr, (int)expected, (int)desired) != (int)old_val;
}

/* External function declarations */
extern void *malloc(size_t);
extern void *calloc(size_t, size_t);
extern void *realloc(void *, size_t);
extern int puts(const char *);
extern int printf(const char *, ...);
extern void *memset(void *, int, size_t);
extern void *memcpy(void *, const void *, size_t);
extern void *memmove(void *, const void *, size_t);
extern int memcmp(const void *, const void *, size_t);
extern __pid_t fork(void);
extern __pid_t waitpid(__pid_t, int *, int);
extern void exit(int);
extern int extern_function(int);

/* GCC builtin - no extern declaration needed */
/* extern void __sync_synchronize(void); */

/* Implementation for extern_function */
int extern_function(int param) {
 return param * 2;
}


