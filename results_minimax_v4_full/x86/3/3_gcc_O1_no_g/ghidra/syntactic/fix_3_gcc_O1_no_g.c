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

/* Ghidra-specific types */
typedef unsigned int undefined4;
typedef unsigned short undefined2;
typedef unsigned char undefined1;
typedef unsigned int uint;
typedef unsigned char byte;
typedef int __pid_t;
typedef void (*code)();

/* Forward declarations for functions */
undefined4 alloca_usage(int param_1);
undefined4 stack_alias(void);

/* Data string declarations */
extern char DAT_00013008[];
extern char DAT_000130ea[];
extern char DAT_000131ba[];
extern char DAT_000131ca[];
extern char DAT_000133bc[];
extern char DAT_000133e4[];
extern char DAT_00013428[];
extern char DAT_00013650[];

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/3/3_gcc_O1_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */


/* Global variables */
int global_counter = 0;
int counter_1 = 0;
int extern_global_var = 0;
int file_scope_static = 0;
undefined4 global_func_ptr = 0;
undefined4 global_array [10];
char const_string [16];
int static_depends_0 = 0;


/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 return;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 0001127c */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011280 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 000113b9 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 000113bd */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: double_value @ 000113c1 */

int double_value(int param_1)

{
 return param_1 * 2;
}



/* Function: local_vars @ 000113cc */

int local_vars(int param_1)

{
 return param_1 * 2 + 10;
}



/* Function: local_array @ 000113d9 */

undefined4 local_array(int param_1)

{
 int *piVar1;
 int iVar2;
 int in_GS_OFFSET;
 int local_38 [10];
 int local_10 [3];
 
 local_10[0] = *(int *)(in_GS_OFFSET + 0x14);
 piVar1 = local_38;
 iVar2 = 0;
 do {
 *piVar1 = iVar2;
 iVar2 = iVar2 + param_1;
 piVar1 = piVar1 + 1;
 } while (piVar1 != local_10);
 if (local_10[0] == *(int *)(in_GS_OFFSET + 0x14)) {
 return local_38[5];
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: local_struct @ 00011424 */

int local_struct(int param_1)

{
 return param_1 * 3;
}



/* Function: address_of_local @ 00011430 */

undefined4 address_of_local(undefined4 *param_1)

{
 *param_1 = 0x2a;
 return 0x2a;
}



/* Function: address_of_array @ 00011444 */

int address_of_array(int *param_1)

{
 return *param_1 * 2;
}



/* Function: large_stack_frame @ 00011451 */

int large_stack_frame(void)

{
 int iVar1;
 int in_GS_OFFSET;
 char acStack_810 [2048];
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = 0;
 do {
 acStack_810[iVar1] = (char)iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x800);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return (int)acStack_810[0x400];
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: vla_stack @ 0001149c */

undefined4 vla_stack(int param_1)

{
 int iVar1;
 uint uVar2;
 int iVar3;
 undefined4 uVar4;
 undefined1 *puVar5;
 undefined1 *puVar6;
 int in_GS_OFFSET;
 undefined1 auStack_1c [12];
 int local_10;
 
 puVar6 = auStack_1c;
 puVar5 = auStack_1c;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 if (param_1 - 1U < 1000) {
 uVar2 = param_1 * 4 + 0xf;
 for (; puVar5 != (undefined1 *)((int)auStack_1c - (uVar2 & 0xfffff000)); puVar5 = (undefined1 *)((int)puVar5 - 0x1000)) {
 *(undefined4 *)(puVar5 + -4) = *(undefined4 *)(puVar5 + -4);
 }
 uVar2 = uVar2 & 0xff0;
 iVar1 = -uVar2;
 puVar6 = puVar5 + iVar1;
 if (uVar2 != 0) {
 *(undefined4 *)(puVar5 + -4) = *(undefined4 *)(puVar5 + -4);
 }
 iVar3 = 0;
 do {
 *(int *)(puVar5 + iVar3 * 2 + iVar1) = iVar3;
 iVar3 = iVar3 + 2;
 } while (iVar3 != param_1 * 2);
 uVar4 = *(undefined4 *)(puVar5 + (param_1 / 2) * 4 + iVar1);
 }
 else {
 uVar4 = 0xffffffff;
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar4;
 }
 /* WARNING: Subroutine does not return */
 *(code **)(puVar6 + -4) = alloca_usage;
 __stack_chk_fail_local();
}



/* Function: alloca_usage @ 00011537 */

undefined4 alloca_usage(int param_1)

{
 int iVar1;
 uint uVar2;
 int iVar3;
 undefined4 uVar4;
 undefined1 *puVar5;
 undefined1 *puVar6;
 int in_GS_OFFSET;
 undefined1 auStack_1c [12];
 int local_10;
 
 puVar6 = auStack_1c;
 puVar5 = auStack_1c;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 if (param_1 < 1) {
 uVar4 = 0xffffffff;
 }
 else {
 uVar2 = param_1 * 4 + 0x1b;
 for (; puVar5 != auStack_1c + -(uVar2 & 0xfffff000); puVar5 = (undefined1 *)((int)puVar5 - 0x1000)) {
 *(undefined4 *)(puVar5 + -4) = *(undefined4 *)(puVar5 + -4);
 }
 uVar2 = uVar2 & 0xff0;
 iVar1 = -uVar2;
 puVar6 = puVar5 + iVar1;
 if (uVar2 != 0) {
 *(undefined4 *)(puVar5 + -4) = *(undefined4 *)(puVar5 + -4);
 }
 iVar3 = 0;
 do {
 *(int *)(((uint)(puVar5 + iVar1 + 0xf) & 0xfffffff0) + iVar3 * 4) = iVar3 * 3;
 iVar3 = iVar3 + 1;
 } while (param_1 != iVar3);
 uVar4 = *(undefined4 *)(((uint)(puVar5 + iVar1 + 0xf) & 0xfffffff0) + (iVar3 / 2) * 4);
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar4;
 }
 /* WARNING: Subroutine does not return */
 *(code **)(puVar6 + -4) = stack_alias;
 __stack_chk_fail_local();
}



/* Function: stack_alias @ 000115d1 */

undefined4 stack_alias(void)

{
 return 0x14;
}



/* Function: test_stack_memory @ 000115db */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_stack_memory(void)

{
 undefined4 uVar1;
 
 puts(&DAT_00013008);
 __printf_chk(1,"MEM-L1-01 (local_vars): %d\n",0x14);
 uVar1 = local_array(2);
 __printf_chk(1,"MEM-L1-02 (local_array): %d\n",uVar1);
 __printf_chk(1,"MEM-L1-03 (local_struct): %d\n",0xf);
 __printf_chk(1,"MEM-L1-04 (address_of_local): %d\n",0x2a);
 __printf_chk(1,"MEM-L1-05 (address_of_array): %d\n",2);
 uVar1 = large_stack_frame();
 __printf_chk(1,"MEM-L2-01 (large_stack_frame): %d\n",uVar1);
 uVar1 = vla_stack(10);
 __printf_chk(1,"MEM-L2-02 (vla_stack): %d\n",uVar1);
 uVar1 = alloca_usage(10);
 __printf_chk(1,"MEM-L2-03 (alloca_usage): %d\n",uVar1);
 __printf_chk(1,"MEM-L2-04 (stack_alias): %d\n",0x14);
 return;
}



/* Function: heap_basic @ 000116cf */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 heap_basic(int param_1)

{
 void *__ptr;
 int iVar1;
 undefined4 uVar2;
 
 __ptr = malloc(param_1 * 4);
 if (__ptr == (void *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 if (0 < param_1) {
 iVar1 = 0;
 do {
 *(int *)((int)__ptr + iVar1 * 2) = iVar1;
 iVar1 = iVar1 + 2;
 } while (iVar1 != param_1 * 2);
 }
 uVar2 = *(undefined4 *)((int)__ptr + (param_1 / 2) * 4);
 free(__ptr);
 }
 return uVar2;
}



/* Function: heap_calloc @ 0001173a */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int heap_calloc(size_t param_1)

{
 int *__ptr;
 int *piVar1;
 int iVar2;
 
 __ptr = calloc(param_1,4);
 if (__ptr == (int *)0x0) {
 iVar2 = -1;
 }
 else {
 if ((int)param_1 < 1) {
 iVar2 = 0;
 }
 else {
 iVar2 = 0;
 piVar1 = __ptr;
 do {
 iVar2 = iVar2 + *piVar1;
 piVar1 = piVar1 + 1;
 } while (piVar1 != __ptr + param_1);
 }
 free(__ptr);
 }
 return iVar2;
}



/* Function: heap_realloc @ 0001179a */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 heap_realloc(void)

{
 undefined4 *__ptr;
 void *__ptr_00;
 undefined4 uVar1;
 
 __ptr = malloc(0x14);
 if (__ptr == (undefined4 *)0x0) {
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
 *(undefined4 *)((int)__ptr_00 + 0x14) = 0x32;
 *(undefined4 *)((int)__ptr_00 + 0x18) = 0x3c;
 *(undefined4 *)((int)__ptr_00 + 0x1c) = 0x46;
 *(undefined4 *)((int)__ptr_00 + 0x20) = 0x50;
 *(undefined4 *)((int)__ptr_00 + 0x24) = 0x5a;
 uVar1 = 0xfffffffd;
 if (*(int *)((int)__ptr_00 + 8) == 3) {
 uVar1 = 0x32;
 }
 free(__ptr_00);
 }
 }
 return uVar1;
}



/* Function: heap_array @ 00011859 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 heap_array(int param_1)

{
 void *__ptr;
 int iVar1;
 undefined4 uVar2;
 
 __ptr = malloc(param_1 * 4);
 if (__ptr == (void *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 if (0 < param_1) {
 iVar1 = 0;
 do {
 *(int *)((int)__ptr + iVar1 * 4) = iVar1 * 3;
 iVar1 = iVar1 + 1;
 } while (param_1 != iVar1);
 }
 uVar2 = *(undefined4 *)((int)__ptr + (param_1 / 2) * 4);
 free(__ptr);
 }
 return uVar2;
}



/* Function: heap_struct @ 000118c4 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

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



/* Function: heap_nested @ 00011908 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 heap_nested(undefined4 **param_1)

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



/* Function: linked_list_heap @ 0001197e */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int linked_list_heap(void)

{
 int *piVar1;
 int *piVar2;
 int *__ptr;
 int *__ptr_00;
 int iVar3;
 
 iVar3 = 0;
 piVar2 = (int *)0x0;
 __ptr = (int *)0x0;
 do {
 piVar1 = malloc(8);
 if (piVar1 == (int *)0x0) {
 if (__ptr != (int *)0x0) {
 do {
 piVar2 = (int *)__ptr[1];
 free(__ptr);
 __ptr = piVar2;
 } while (piVar2 != (int *)0x0);
 return -1;
 }
 return -1;
 }
 *piVar1 = iVar3;
 piVar1[1] = 0;
 __ptr_00 = piVar1;
 if (__ptr != (int *)0x0) {
 piVar2[1] = (int)piVar1;
 __ptr_00 = __ptr;
 }
 iVar3 = iVar3 + 10;
 piVar2 = piVar1;
 __ptr = __ptr_00;
 } while (iVar3 != 0x32);
 if (__ptr_00 == (int *)0x0) {
 iVar3 = 0;
 }
 else {
 iVar3 = 0;
 piVar2 = __ptr_00;
 do {
 iVar3 = iVar3 + *piVar2;
 piVar2 = (int *)piVar2[1];
 } while (piVar2 != (int *)0x0);
 do {
 piVar2 = (int *)__ptr_00[1];
 free(__ptr_00);
 __ptr_00 = piVar2;
 } while (piVar2 != (int *)0x0);
 }
 return iVar3;
}



/* Function: create_tree_node @ 00011a35 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

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



/* Function: tree_heap_traversal @ 00011a6f */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int tree_heap_traversal(void)

{
 int *__ptr;
 int *__ptr_00;
 int iVar1;
 int *piVar2;
 
 __ptr_00 = (int *)create_tree_node(10);
 if (__ptr_00 == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = create_tree_node(0x14);
 __ptr_00[1] = iVar1;
 piVar2 = (int *)create_tree_node(0x1e);
 __ptr_00[2] = (int)piVar2;
 __ptr = (int *)__ptr_00[1];
 if ((piVar2 == (int *)0x0) || (__ptr == (int *)0x0)) {
 if (__ptr != (int *)0x0) {
 free(__ptr);
 }
 if ((void *)__ptr_00[2] != (void *)0x0) {
 free((void *)__ptr_00[2]);
 }
 free(__ptr_00);
 iVar1 = -2;
 }
 else {
 iVar1 = *__ptr + *__ptr_00 + *piVar2;
 free(__ptr);
 free((void *)__ptr_00[2]);
 free(__ptr_00);
 }
 }
 return iVar1;
}



/* Function: memory_leak @ 00011b2a */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

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
 uVar2 = *(undefined4 *)((int)pvVar1 + (param_1 / 2) * 4);
 }
 return uVar2;
}



/* Function: dangling_pointer @ 00011b82 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 dangling_pointer(void)

{
 undefined4 *__ptr;
 undefined4 uVar1;
 
 __ptr = malloc(4);
 if (__ptr == (undefined4 *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 __printf_chk(1,"value before free: %d\n",0x2a);
 free(__ptr);
 uVar1 = *__ptr;
 }
 return uVar1;
}



/* Function: double_free @ 00011bd3 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 double_free(undefined4 *param_1)

{
 void *__ptr;
 undefined4 uVar1;
 
 if (param_1 == (undefined4 *)0x0) {
 __ptr = malloc(4);
 if (__ptr == (void *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 free(__ptr);
 free(__ptr);
 uVar1 = 0xfffffffe;
 }
 }
 else {
 uVar1 = *param_1;
 }
 return uVar1;
}



/* Function: heap_overflow @ 00011c2c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int heap_overflow(void)

{
 int *__ptr;
 int *piVar1;
 int iVar2;
 
 __ptr = malloc(0x28);
 if (__ptr == (int *)0x0) {
 iVar2 = -1;
 }
 else {
 iVar2 = 0;
 piVar1 = __ptr;
 do {
 *piVar1 = iVar2;
 iVar2 = iVar2 + 100;
 piVar1 = piVar1 + 1;
 } while (iVar2 != 0x44c);
 iVar2 = *__ptr;
 free(__ptr);
 }
 return iVar2;
}



/* Function: test_heap_memory @ 00011c82 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_heap_memory(void)

{
 undefined4 uVar1;
 __pid_t __pid;
 int in_GS_OFFSET;
 void *local_18;
 uint local_14;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_000130ea);
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
 local_18 = (void *)0x0;
 uVar1 = heap_nested(&local_18);
 __printf_chk(1,"HEAP-L2-06 (heap_nested): %d\n",uVar1);
 if (local_18 != (void *)0x0) {
 free(*(void **)((int)local_18 + 4));
 free(local_18);
 }
 uVar1 = linked_list_heap();
 __printf_chk(1,"HEAP-L3-01 (linked_list_heap): %d\n",uVar1);
 uVar1 = tree_heap_traversal();
 __printf_chk(1,"HEAP-L3-02 (tree_heap_traversal): %d\n",uVar1);
 uVar1 = memory_leak(5);
 __printf_chk(1,"HEAP-L3-03 (memory_leak): %d\n",uVar1);
 __printf_chk(1,"HEAP-L3-04 (dangling_pointer): ");
 __pid = fork();
 if (__pid == 0) {
 uVar1 = dangling_pointer();
 __printf_chk(1,&DAT_000131ba,uVar1);
 /* WARNING: Subroutine does not return */
 exit(0);
 }
 if (__pid < 1) {
 perror(&DAT_000131ca);
 }
 else {
 waitpid(__pid,(int *)&local_14,0);
 if ((local_14 & 0x7f) == 0) {
 __printf_chk(1,&DAT_000133bc,local_14 >> 8 & 0xff);
 }
 else if ('\x01' < (char)(((byte)local_14 & 0x7f) + 1)) {
 __printf_chk(1,&DAT_000133e4,local_14 & 0x7f);
 }
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: global_var_access @ 00011e98 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */

void global_var_access(void)

{
 global_counter = global_counter + 1;
 return;
}



/* Function: global_var_read @ 00011eb7 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int global_var_read(void)

{
 return global_counter * 2;
}



/* Function: global_array_access @ 00011ece */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */

undefined4 global_array_access(uint param_1)

{
 if (param_1 < 10) {
 return *(undefined4 *)(global_array + param_1 * 4);
 }
 return 0xffffffff;
}



/* Function: static_local @ 00011ef4 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */

void static_local(int param_1)

{
 int iVar1;
 
 iVar1 = 0;
 if (param_1 == 0) {
 iVar1 = counter_1 + 1;
 }
 counter_1 = iVar1;
 return;
}



/* Function: call_static_func @ 00011f1f */

int call_static_func(int param_1)

{
 return param_1 * 2 + 1;
}



/* Function: access_extern_global @ 00011f2c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int access_extern_global(void)

{
 return extern_global_var + 100;
}



/* Function: call_extern_func @ 00011f46 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void call_extern_func(void)

{
 extern_function(5);
 return;
}



/* Function: read_const_data @ 00011f65 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int read_const_data(void)

{
 return (char)const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 00011f81 */

undefined4 access_bss_var(void)

{
 return 0;
}



/* Function: access_bss_buffer @ 00011f8b */

undefined4 access_bss_buffer(void)

{
 return 0;
}



/* Function: global_struct_access @ 00011f95 */

undefined4 global_struct_access(void)

{
 return 0x1e;
}



/* Function: set_file_static @ 00011f9f */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void set_file_static(undefined4 param_1)

{
 file_scope_static = param_1;
 return;
}



/* Function: get_file_static @ 00011fb8 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 get_file_static(void)

{
 return file_scope_static;
}



/* Function: set_global_callback @ 00011fcd */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void set_global_callback(undefined4 param_1)

{
 global_func_ptr = param_1;
 return;
}



/* Function: call_global_callback @ 00011fe6 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 call_global_callback(undefined4 param_1)

{
 undefined4 uVar1;
 
 if (global_func_ptr != (code *)0x0) {
 uVar1 = (*global_func_ptr)(param_1);
 return uVar1;
 }
 return 0xffffffff;
}



/* Function: global_heap_store @ 00012011 */

undefined4 global_heap_store(undefined4 *param_1)

{
 if (param_1 != (undefined4 *)0x0) {
 return *param_1;
 }
 return 0xffffffff;
}



/* Function: static_complex_init @ 00012026 */

undefined4 static_complex_init(void)

{
 return 0xf;
}



/* Function: tls_access @ 00012030 */

int tls_access(int param_1)

{
 return param_1 * 2;
}



/* Function: init_order_test @ 0001203b */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 init_order_test(void)

{
 static_depends_0 = 0x14;
 return 0x14;
}



/* Function: test_static_global @ 00012059 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_static_global(void)

{
 undefined4 uVar1;
 
 puts(&DAT_00013428);
 uVar1 = global_var_access();
 __printf_chk(1,"STM-L1-01 (global_var_access): %d\n",uVar1);
 __printf_chk(1,"STM-L1-01 (global_var_read): %d\n",global_counter * 2);
 __printf_chk(1,"STM-L1-02 (global_array_access): %d\n",5);
 counter_1 = 1;
 __printf_chk(1,"STM-L1-03 (static_local): %d\n",1);
 counter_1 = counter_1 + 1;
 __printf_chk(1,"STM-L1-03 (static_local): %d\n",counter_1);
 __printf_chk(1,"STM-L1-04 (call_static_func): %d\n",0xb);
 __printf_chk(1,"STM-L2-01 (access_extern_global): %d\n",extern_global_var + 100);
 uVar1 = call_extern_func();
 __printf_chk(1,"STM-L2-02 (call_extern_func): %d\n",uVar1);
 uVar1 = read_const_data();
 __printf_chk(1,"STM-L2-03 (read_const_data): %d\n",uVar1);
 __printf_chk(1,"STM-L2-04 (access_bss_var): %d\n",0);
 __printf_chk(1,"STM-L2-04 (access_bss_buffer): %d\n",0);
 uVar1 = global_struct_access();
 __printf_chk(1,"STM-L2-05 (global_struct_access): %d\n",uVar1);
 file_scope_static = 0x32;
 __printf_chk(1,"STM-L2-06 (file_static): %d\n",0x32);
 global_func_ptr = double_value;
 uVar1 = call_global_callback(5);
 __printf_chk(1,"STM-L2-07 (global_func_ptr): %d\n",uVar1);
 __printf_chk(1,"STM-L2-08 (global_heap_store): %d\n",100);
 uVar1 = static_complex_init();
 __printf_chk(1,"STM-L2-09 (static_complex_init): %d\n",uVar1);
 __printf_chk(1,"STM-L3-01 (tls_access): %d\n",0x14);
 uVar1 = init_order_test();
 __printf_chk(1,"STM-L3-02 (init_order_test): %d\n",uVar1);
 return;
}



/* Function: memop_memset @ 00012231 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

uint memop_memset(byte *param_1,size_t param_2,int param_3)

{
 uint uVar1;
 
 if ((param_1 == (byte *)0x0) || (param_2 == 0)) {
 uVar1 = 0xffffffff;
 }
 else {
 (void)memset(param_1,param_3,param_2);
 uVar1 = (uint)*param_1;
 }
 return uVar1;
}



/* Function: memop_memcpy @ 00012276 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 memop_memcpy(void *param_1,void *param_2,uint param_3)

{
 undefined4 uVar1;
 
 if ((param_2 == (void *)0x0 || param_3 == 0) || (param_1 == (void *)0x0)) {
 uVar1 = 0xffffffff;
 }
 else {
 (void)memcpy(param_1,param_2,param_3);
 uVar1 = *(undefined4 *)((int)param_1 + ((param_3 & 0xfffffffc) - 4));
 }
 return uVar1;
}



/* Function: memop_memmove @ 000122c6 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int memop_memmove(void *param_1,uint param_2)

{
 int iVar1;
 void *src;
 void *dst;
 
 if ((param_1 == (void *)0x0) || (param_2 < 2)) {
 iVar1 = -1;
 }
 else {
 dst = (void *)((int)param_1 + 1);
 src = param_1;
 (void)memmove(dst,src,param_2 - 1);
 iVar1 = (int)*(char *)((int)param_1 + 1);
 }
 return iVar1;
}



/* Function: memop_memcmp @ 00012310 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int memop_memcmp(void *param_1,void *param_2,size_t param_3)

{
 int iVar1;
 int iVar2;
 
 if ((param_2 == (void *)0x0 || param_3 == 0) || (param_1 == (void *)0x0)) {
 iVar2 = 0;
 }
 else {
 iVar1 = memcmp(param_1,param_2,param_3);
 iVar2 = 1;
 if (iVar1 < 1) {
 iVar2 = iVar1 >> 0x1f;
 }
 }
 return iVar2;
}



/* Function: memop_bzero @ 00012364 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

uint memop_bzero(byte *param_1,size_t param_2)

{
 uint uVar1;
 
 if (param_1 == (byte *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 (void)memset(param_1,0,param_2);
 uVar1 = (uint)*param_1;
 }
 return uVar1;
}



/* Function: memop_bcopy @ 000123a2 */

/* WARNING: Function: __x86.get_pc_thunk.di replaced with injection: get_pc_thunk_di */

uint memop_bcopy(void *param_1,byte *param_2,size_t param_3)

{
 uint uVar1;
 
 if ((param_2 == (byte *)0x0 || param_3 == 0) || (param_1 == (void *)0x0)) {
  uVar1 = 0xffffffff;
 }
 else {
  (void)memmove(param_2,param_1,param_3);
  uVar1 = (uint)param_2;
 }
 return uVar1;
}



/* Function: memop_unaligned_access @ 000123f0 */

undefined4 memop_unaligned_access(int param_1)

{
 if (param_1 != 0) {
 return *(undefined4 *)(param_1 + 1);
 }
 return 0xffffffff;
}



/* Function: memop_memory_barrier @ 00012406 */

int memop_memory_barrier(int *param_1)

{
 int result;
 if (param_1 != (int *)0x0) {
 (void)LOCK();
 (void)UNLOCK();
 result = *param_1 + *param_1;
 return result;
 }
 return -1;
}



/* Function: test_memory_op_functions @ 00012424 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_memory_op_functions(void)

{
 undefined4 uVar1;
 int in_GS_OFFSET;
 undefined4 local_174;
 undefined4 local_170;
 undefined4 local_16c;
 undefined4 local_168;
 undefined4 local_164;
 undefined4 local_160;
 undefined4 local_15c;
 undefined4 local_158;
 undefined4 local_154;
 undefined4 local_150;
 undefined4 local_14c;
 undefined4 local_148;
 undefined4 local_144;
 undefined4 local_140;
 undefined4 local_13c;
 undefined4 local_138;
 undefined4 local_134;
 undefined4 local_12d;
 undefined4 local_129;
 undefined1 local_125 [10];
 undefined4 local_11b;
 undefined4 local_117;
 undefined2 local_113;
 undefined1 local_111;
 undefined1 local_110 [256];
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_00013650);
 local_158 = 10;
 local_154 = 0x14;
 local_150 = 0x1e;
 local_14c = 0x28;
 local_148 = 0x32;
 local_144 = 0;
 local_140 = 0;
 local_13c = 0;
 local_138 = 0;
 local_134 = 0;
 uVar1 = memop_memset(local_110,10,0x41);
 __printf_chk(1,"MEMOP-L2-01: %d\n",uVar1);
 uVar1 = memop_memcpy(&local_144,&local_158,0x14);
 __printf_chk(1,"MEMOP-L2-02: %d\n",uVar1);
 local_11b = 0x6c6c6548;
 local_117 = 0x726f576f;
 local_113 = 0x646c;
 local_111 = 0;
 uVar1 = memop_memmove(&local_11b,10);
 __printf_chk(1,"MEMOP-L2-03: %c\n",uVar1);
 local_170 = 1;
 local_16c = 2;
 local_168 = 3;
 local_164 = 1;
 local_160 = 2;
 local_15c = 4;
 uVar1 = memop_memcmp(&local_170,&local_164,0xc);
 __printf_chk(1,"MEMOP-L2-04: %d\n",uVar1);
 uVar1 = memop_bzero(local_125,10);
 __printf_chk(1,"MEMOP-L2-05: %d\n",uVar1);
 local_12d = 0x4030201;
 local_129 = 0;
 uVar1 = memop_bcopy(&local_12d,(byte *)&local_129,4);
 __printf_chk(1,"MEMOP-L2-06: %d\n",uVar1);
 __printf_chk(1,"MEMOP-L3-01: 0x%x\n",0x4030201);
 local_174 = 5;
 uVar1 = memop_memory_barrier(&local_174);
 __printf_chk(1,"MEMOP-L3-02: %d\n",uVar1);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: main @ 00012635 */

undefined4 main(void)

{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}



/* Function: __x86.get_pc_thunk.ax @ 0001265a */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
 undefined4 unaff_retaddr;
 
 return unaff_retaddr;
}



/* Function: extern_function @ 0001265e */

int extern_function(int param_1)

{
 return param_1 * 3;
}



/* Function: __stack_chk_fail_local @ 00012670 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
 /* WARNING: Subroutine does not return */
 for(;;) {
   __stack_chk_fail();
 }
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 70 */
