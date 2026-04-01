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

/* Additional type definitions for Ghidra decompiled code */
typedef unsigned int uint;
typedef unsigned int undefined4;
typedef unsigned short undefined2;
typedef unsigned char undefined1;
typedef unsigned char byte;
typedef int __pid_t;
typedef void (*code)(void);
typedef unsigned char undefined;

/* Standard library function declarations */
int printf(const char *format, ...);
int puts(const char *s);
void *malloc(size_t size);
void *calloc(size_t nmemb, size_t size);
void *realloc(void *ptr, size_t size);
void free(void *ptr);
void *memset(void *s, int c, size_t n);
void *memcpy(void *dest, const void *src, size_t n);
void *memmove(void *dest, const void *src, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
void perror(const char *s);
void exit(int status);
__pid_t fork(void);
int waitpid(__pid_t pid, int *status, int options);
void __stack_chk_fail(void);
void __stack_chk_fail_local(void);

/* Standard C++ boolean definitions for C compatibility */
#define true 1
#define false 0
#define NULL ((void *)0)

/* Global variable declarations */
extern int global_counter;
extern undefined4 global_array[10];
extern int counter_1;
extern int extern_global_var;
extern const char const_string[];
extern undefined4 bss_var;
extern undefined4 bss_buffer[];
extern code *global_func_ptr;
extern undefined4 *global_heap_ptr;

/* Global variable definitions */
int global_counter = 0;
undefined4 global_array[10] = {0};
int counter_1 = 0;
int extern_global_var = 0;
const char const_string[] = "test";
undefined4 bss_var = 0;
undefined4 bss_buffer[10] = {0};
undefined4 DAT_0001604c = 0;
undefined4 global_point = 0;
undefined4 file_scope_static = 0;
code *global_func_ptr = NULL;
undefined4 *global_heap_ptr = NULL;
undefined4 DAT_0001605c = 0;
undefined4 DAT_00016064 = 0;
int complex_init = 0;
undefined4 static_depends_0 = 0;

/* Data declarations */
extern const char DAT_00013008[];
extern const char DAT_00013158[];
extern const char DAT_000132b4[];
extern const char DAT_000132c4[];
extern const char DAT_000132ec[];
extern const char DAT_0001332d[];
extern const char DAT_00013348[];
extern const char DAT_000135c4[];

/* Data definitions */
const char DAT_00013008[] = "Testing stack memory access";
const char DAT_00013158[] = "Testing heap memory access";
const char DAT_000132b4[] = "%d\n";
const char DAT_000132c4[] = "Exit status: %d\n";
const char DAT_000132ec[] = "Signal: %d\n";
const char DAT_0001332d[] = "fork failed";
const char DAT_00013348[] = "Testing static/global memory access";
const char DAT_000135c4[] = "Testing memory operation functions";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/3/3_gcc_O0_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 (*(code *)(undefined *)0x0)();
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

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int double_value(int param_1)

{
 return param_1 * 2;
}



/* Function: local_vars @ 000113d9 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int local_vars(int param_1)

{
 return param_1 * 2 + 10;
}



/* Function: local_array @ 00011409 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int local_array(int param_1)

{
 int in_GS_OFFSET;
 int local_3c;
 int aiStack_38 [10];
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 for (local_3c = 0; local_3c < 10; local_3c = local_3c + 1) {
 aiStack_38[local_3c] = local_3c * param_1;
 }
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 return 0;
 }
 return aiStack_38[5];
}



/* Function: local_struct @ 00011461 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int local_struct(int param_1)

{
 return param_1 * 3;
}



/* Function: address_of_local @ 0001148d */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 address_of_local(undefined4 *param_1)

{
 *param_1 = 0x2a;
 return 0x2a;
}



/* Function: address_of_array @ 000114b5 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int address_of_array(int *param_1)

{
 return *param_1 + *param_1;
}



/* Function: large_stack_frame @ 000114e3 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int large_stack_frame(void)

{
 int iVar1;
 int in_GS_OFFSET;
 int local_814;
 char local_810 [2048];
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 for (local_814 = 0; local_814 < 0x800; local_814 = local_814 + 1) {
 local_810[local_814] = (char)local_814;
 }
 iVar1 = (int)local_810[0x400];
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 return 0;
 }
 return iVar1;
}



/* Function: vla_stack @ 00011559 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 vla_stack(int param_1)

{
 int iVar1;
 undefined4 uVar2;
 uint uVar3;
 int *piVar4;
 int in_GS_OFFSET;
 int local_1c;
 int local_18;
 undefined1 *local_14;
 int local_10;
 
 piVar4 = &local_1c;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 if ((param_1 < 1) || (1000 < param_1)) {
 uVar2 = 0xffffffff;
 }
 else {
 local_18 = param_1 + -1;
 uVar3 = ((param_1 * 4 + 0xfU) / 0x10) * 0x10;
 for (; piVar4 != (int *)((int)&local_1c - (uVar3 & 0xfffff000));
 piVar4 = (int *)((int)piVar4 + -0x1000)) {
 *(undefined4 *)((int)piVar4 + -4) = *(undefined4 *)((int)piVar4 + -4);
 }
 iVar1 = -(uVar3 & 0xfff);
 if ((uVar3 & 0xfff) != 0) {
 *(undefined4 *)((int)piVar4 + ((uVar3 & 0xfff) - 4) + iVar1) =
 *(undefined4 *)((int)piVar4 + ((uVar3 & 0xfff) - 4) + iVar1);
 }
 for (local_1c = 0; local_1c < param_1; local_1c = local_1c + 1) {
 *(int *)((int)piVar4 + local_1c * 4 + iVar1) = local_1c * 2;
 }
 uVar2 = *(undefined4 *)((int)piVar4 + (param_1 / 2) * 4 + iVar1);
 local_14 = (undefined1 *)((int)piVar4 + iVar1);
 }
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 return 0;
 }
 return uVar2;
}



/* Function: alloca_usage @ 00011660 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 alloca_usage(int param_1)

{
 int iVar1;
 undefined4 uVar2;
 uint uVar3;
 undefined1 *puVar4;
 undefined1 *puVar5;
 int in_GS_OFFSET;
 undefined1 auStack_1c [4];
 int local_18;
 uint local_14;
 int local_10;
 
 puVar4 = auStack_1c;
 puVar5 = auStack_1c;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 if (param_1 < 1) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar3 = ((param_1 * 4 + 0x1bU) / 0x10) * 0x10;
 for (; puVar4 != auStack_1c + -(uVar3 & 0xfffff000); puVar4 = puVar4 + -0x1000) {
 *(undefined4 *)(puVar4 + -4) = *(undefined4 *)(puVar4 + -4);
 }
 iVar1 = -(uVar3 & 0xfff);
 puVar5 = puVar4 + iVar1;
 if ((uVar3 & 0xfff) != 0) {
 *(undefined4 *)(puVar4 + ((uVar3 & 0xfff) - 4) + iVar1) =
 *(undefined4 *)(puVar4 + ((uVar3 & 0xfff) - 4) + iVar1);
 }
 local_14 = (uint)(puVar4 + iVar1 + 0xf) & 0xfffffff0;
 for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
 *(int *)(local_18 * 4 + local_14) = local_18 * 3;
 }
 uVar2 = *(undefined4 *)(local_14 + (param_1 / 2) * 4);
 }
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 *(undefined4 *)(puVar5 + -4) = 0x1175d;
 __stack_chk_fail_local();
 return 0;
 }
 return uVar2;
}



/* Function: stack_alias @ 0001175f */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 stack_alias(void)

{
 undefined4 uVar1;
 int in_GS_OFFSET;
 
 if ((undefined1 *)&uVar1 == (undefined1 *)0x14) {
 uVar1 = 0xffffffff;
 }
 else {
 uVar1 = 0x14;
 }
 if (*(int *)(in_GS_OFFSET + 0x14) != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return uVar1;
}



/* Function: test_stack_memory @ 000117d3 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_stack_memory(void)

{
 undefined4 uVar1;
 int iVar2;
 undefined4 *puVar3;
 int in_GS_OFFSET;
 byte bVar4;
 undefined1 local_40 [4];
 undefined4 local_3c;
 undefined4 local_38;
 undefined4 local_34;
 undefined4 local_30;
 int local_10;
 
 bVar4 = 0;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_00013008);
 uVar1 = local_vars(5);
 printf("MEM-L1-01 (local_vars): %d\n",uVar1);
 uVar1 = local_array(2);
 printf("MEM-L1-02 (local_array): %d\n",uVar1);
 uVar1 = local_struct(5);
 printf("MEM-L1-03 (local_struct): %d\n",uVar1);
 uVar1 = address_of_local(local_40);
 printf("MEM-L1-04 (address_of_local): %d\n",uVar1);
 puVar3 = &local_38;
 for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
 *puVar3 = 0;
 puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
 }
 local_38 = 1;
 local_34 = 2;
 local_30 = 3;
 uVar1 = address_of_array(&local_38);
 printf("MEM-L1-05 (address_of_array): %d\n",uVar1);
 uVar1 = large_stack_frame();
 printf("MEM-L2-01 (large_stack_frame): %d\n",uVar1);
 uVar1 = vla_stack(10);
 printf("MEM-L2-02 (vla_stack): %d\n",uVar1);
 uVar1 = alloca_usage(10);
 printf("MEM-L2-03 (alloca_usage): %d\n",uVar1);
 local_3c = 0;
 uVar1 = stack_alias();
 printf("MEM-L2-04 (stack_alias): %d\n",uVar1);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return;
}



/* Function: heap_basic @ 0001196f */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 heap_basic(int param_1)

{
 void *__ptr;
 undefined4 uVar1;
 undefined4 local_18;
 
 __ptr = malloc(param_1 << 2);
 if (__ptr == (void *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
 *(int *)((int)__ptr + local_18 * 4) = local_18 * 2;
 }
 uVar1 = *(undefined4 *)((int)__ptr + (param_1 / 2) * 4);
 free(__ptr);
 }
 return uVar1;
}



/* Function: heap_calloc @ 00011a05 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int heap_calloc(size_t param_1)

{
 void *__ptr;
 undefined4 local_18;
 undefined4 local_14;
 
 __ptr = calloc(param_1,4);
 if (__ptr == (void *)0x0) {
 local_18 = -1;
 }
 else {
 local_18 = 0;
 for (local_14 = 0; local_14 < (int)param_1; local_14 = local_14 + 1) {
 local_18 = local_18 + *(int *)((int)__ptr + local_14 * 4);
 }
 free(__ptr);
 }
 return local_18;
}



/* Function: heap_realloc @ 00011a82 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 heap_realloc(void)

{
 int iVar1;
 void *__ptr;
 undefined4 uVar2;
 void *__ptr_00;
 undefined4 local_24;
 undefined4 local_20;
 
 __ptr = malloc(0x14);
 if (__ptr == (void *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 for (local_24 = 0; local_24 < 5; local_24 = local_24 + 1) {
 *(int *)((int)__ptr + local_24 * 4) = local_24 + 1;
 }
 iVar1 = *(int *)((int)__ptr + 8);
 __ptr_00 = realloc(__ptr,0x28);
 if (__ptr_00 == (void *)0x0) {
 free(__ptr);
 uVar2 = 0xfffffffe;
 }
 else {
 for (local_20 = 5; local_20 < 10; local_20 = local_20 + 1) {
 *(int *)(local_20 * 4 + (int)__ptr_00) = local_20 * 10;
 }
 if (iVar1 == *(int *)((int)__ptr_00 + 8)) {
 uVar2 = *(undefined4 *)((int)__ptr_00 + 0x14);
 }
 else {
 uVar2 = 0xfffffffd;
 }
 free(__ptr_00);
 }
 }
 return uVar2;
}



/* Function: heap_array @ 00011b83 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 heap_array(int param_1)

{
 void *__ptr;
 undefined4 uVar1;
 undefined4 local_18;
 
 __ptr = malloc(param_1 << 2);
 if (__ptr == (void *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
 *(int *)(local_18 * 4 + (int)__ptr) = local_18 * 3;
 }
 uVar1 = *(undefined4 *)((int)__ptr + (param_1 / 2) * 4);
 free(__ptr);
 }
 return uVar1;
}



/* Function: heap_struct @ 00011c1e */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int heap_struct(int param_1)

{
 int *__ptr;
 int iVar1;
 
 __ptr = malloc(8);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 *__ptr = param_1;
 __ptr[1] = param_1 * 2;
 iVar1 = __ptr[1] + *__ptr;
 free(__ptr);
 }
 return iVar1;
}



/* Function: heap_nested @ 00011c8b */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 heap_nested(int *param_1)

{
 int iVar1;
 void *pvVar2;
 undefined4 uVar3;
 
 pvVar2 = malloc(8);
 *param_1 = (int)pvVar2;
 if (*param_1 == 0) {
 uVar3 = 0xffffffff;
 }
 else {
 *(undefined4 *)*param_1 = 10;
 iVar1 = *param_1;
 pvVar2 = malloc(8);
 *(void **)(iVar1 + 4) = pvVar2;
 if (*(int *)(*param_1 + 4) == 0) {
 free((void *)*param_1);
 uVar3 = 0xfffffffe;
 }
 else {
 **(undefined4 **)(*param_1 + 4) = 0x14;
 *(undefined4 *)(*(int *)(*param_1 + 4) + 4) = 0;
 uVar3 = 0;
 }
 }
 return uVar3;
}



/* Function: linked_list_heap @ 00011d30 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int linked_list_heap(void)

{
 int *piVar1;
 int *piVar2;
 int *local_2c;
 int *local_28;
 int local_24;
 int local_20;
 int *local_1c;
 
 local_2c = (int *)0x0;
 local_28 = (int *)0x0;
 local_24 = 0;
 while( true ) {
 if (4 < local_24) {
 local_20 = 0;
 for (local_1c = local_2c; local_1c != (int *)0x0; local_1c = (int *)local_1c[1]) {
 local_20 = local_20 + *local_1c;
 }
 while (local_2c != (int *)0x0) {
 piVar2 = (int *)local_2c[1];
 free(local_2c);
 local_2c = piVar2;
 }
 return local_20;
 }
 piVar2 = malloc(8);
 if (piVar2 == (int *)0x0) break;
 *piVar2 = local_24 * 10;
 piVar2[1] = 0;
 piVar1 = piVar2;
 if (local_2c != (int *)0x0) {
 local_28[1] = (int)piVar2;
 piVar1 = local_2c;
 }
 local_2c = piVar1;
 local_24 = local_24 + 1;
 local_28 = piVar2;
 }
 while (local_2c != (int *)0x0) {
 piVar2 = (int *)local_2c[1];
 free(local_2c);
 local_2c = piVar2;
 }
 return -1;
}



/* Function: create_tree_node @ 00011e46 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 * create_tree_node(undefined4 param_1)

{
 undefined4 *puVar1;
 
 puVar1 = malloc(0xc);
 if (puVar1 != (undefined4 *)0x0) {
 *puVar1 = param_1;
 puVar1[1] = 0;
 puVar1[2] = 0;
 }
 return puVar1;
}



/* Function: tree_heap_traversal @ 00011e97 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int tree_heap_traversal(void)

{
 int *__ptr;
 int iVar1;
 
 __ptr = (int *)create_tree_node(10);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
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
 iVar1 = -2;
 }
 else {
 iVar1 = *(int *)__ptr[2] + *__ptr + *(int *)__ptr[1];
 free((void *)__ptr[1]);
 free((void *)__ptr[2]);
 free(__ptr);
 }
 }
 return iVar1;
}



/* Function: memory_leak @ 00011faa */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 memory_leak(int param_1)

{
 void *pvVar1;
 undefined4 uVar2;
 undefined4 local_14;
 
 pvVar1 = malloc(param_1 << 2);
 if (pvVar1 == (void *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 for (local_14 = 0; local_14 < param_1; local_14 = local_14 + 1) {
 *(int *)(local_14 * 4 + (int)pvVar1) = local_14;
 }
 uVar2 = *(undefined4 *)((int)pvVar1 + (param_1 / 2) * 4);
 }
 return uVar2;
}



/* Function: dangling_pointer @ 0001202b */

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
 *__ptr = 0x2a;
 printf("value before free: %d\n",*__ptr);
 free(__ptr);
 uVar1 = *__ptr;
 }
 return uVar1;
}



/* Function: double_free @ 000120a2 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 double_free(undefined4 *param_1)

{
 undefined4 *__ptr;
 undefined4 uVar1;
 
 if (param_1 == (undefined4 *)0x0) {
 __ptr = malloc(4);
 if (__ptr == (undefined4 *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 *__ptr = 10;
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



/* Function: heap_overflow @ 00012111 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 heap_overflow(void)

{
 undefined4 *__ptr;
 undefined4 uVar1;
 int local_18;
 
 __ptr = malloc(0x28);
 if (__ptr == (undefined4 *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 for (local_18 = 0; local_18 < 0xb; local_18 = local_18 + 1) {
 __ptr[local_18] = local_18 * 100;
 }
 uVar1 = *__ptr;
 free(__ptr);
 }
 return uVar1;
}



/* Function: test_heap_memory @ 0001218c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_heap_memory(void)

{
 undefined4 uVar1;
 int in_GS_OFFSET;
 void *local_20;
 uint local_1c;
 __pid_t local_18;
 undefined4 local_14;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_00013158);
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
 local_20 = (void *)0x0;
 uVar1 = heap_nested(&local_20);
 printf("HEAP-L2-06 (heap_nested): %d\n",uVar1);
 if (local_20 != (void *)0x0) {
 free(*(void **)((int)local_20 + 4));
 free(local_20);
 }
 uVar1 = linked_list_heap();
 printf("HEAP-L3-01 (linked_list_heap): %d\n",uVar1);
 uVar1 = tree_heap_traversal();
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n",uVar1);
 uVar1 = memory_leak(5);
 printf("HEAP-L3-03 (memory_leak): %d\n",uVar1);
 printf("HEAP-L3-04 (dangling_pointer): ");
 local_18 = fork();
 if (local_18 == 0) {
 local_14 = dangling_pointer();
 printf(&DAT_000132b4,local_14);
 /* WARNING: Subroutine does not return */
 exit(0);
 }
 if (local_18 < 1) {
 perror(&DAT_0001332d);
 }
 else {
 waitpid(local_18,(int *)&local_1c,0);
 if ((local_1c & 0x7f) == 0) {
 printf(&DAT_000132c4,(int)local_1c >> 8 & 0xff);
 }
 else if ('\0' < (char)(((byte)local_1c & 0x7f) + 1) >> 1) {
 printf(&DAT_000132ec,local_1c & 0x7f);
 }
 }
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return;
}



/* Function: global_var_access @ 000123d4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int global_var_access(void)

{
 global_counter = global_counter + 1;
 return global_counter;
}



/* Function: global_var_read @ 000123fc */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int global_var_read(void)

{
 return global_counter * 2;
}



/* Function: global_array_access @ 00012417 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 global_array_access(int param_1)

{
 undefined4 uVar1;
 
 if ((param_1 < 0) || (9 < param_1)) {
 uVar1 = 0xffffffff;
 }
 else {
 uVar1 = *(undefined4 *)(global_array + param_1 * 4);
 }
 return uVar1;
}



/* Function: static_local @ 00012447 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int static_local(int param_1)

{
 if (param_1 == 0) {
 counter_1 = counter_1 + 1;
 }
 else {
 counter_1 = 0;
 }
 return counter_1;
}



/* Function: static_helper @ 00012486 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int static_helper(int param_1)

{
 return param_1 * 2;
}



/* Function: call_static_func @ 0001249e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int call_static_func(undefined4 param_1)

{
 int iVar1;
 
 iVar1 = static_helper(param_1);
 return iVar1 + 1;
}



/* Function: access_extern_global @ 000124bf */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int access_extern_global(void)

{
 return extern_global_var + 100;
}






/* Function: call_extern_func @ 000124dd */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_extern_func(void)

{
 extern_function(5);
 return;
}



/* Function: read_const_data @ 00012506 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int read_const_data(void)

{
 return (char)const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 0001252f */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 access_bss_var(void)

{
 return bss_var;
}



/* Function: access_bss_buffer @ 00012548 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int access_bss_buffer(void)

{
 return (int)bss_buffer;
}



/* Function: global_struct_access @ 00012565 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int global_struct_access(void)

{
 return DAT_0001604c + global_point;
}



/* Function: set_file_static @ 00012586 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void set_file_static(undefined4 param_1)

{
 file_scope_static = param_1;
 return;
}



/* Function: get_file_static @ 000125a3 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 get_file_static(void)

{
 return file_scope_static;
}



/* Function: set_global_callback @ 000125bc */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void set_global_callback(undefined4 param_1)

{
 global_func_ptr = param_1;
 return;
}



/* Function: call_global_callback @ 000125d9 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 call_global_callback(undefined4 param_1)

{
 undefined4 uVar1;
 
 if (global_func_ptr == (code *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 ((code (*)(undefined4))global_func_ptr)(param_1);
 uVar1 = 0;
 }
 return uVar1;
}



/* Function: global_heap_store @ 00012611 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

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



/* Function: static_complex_init @ 00012646 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int static_complex_init(void)

{
 return DAT_00016064 + DAT_0001605c + complex_init;
}



/* Function: tls_access @ 0001266f */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int tls_access(undefined4 param_1)

{
 int in_GS_OFFSET;
 
 *(undefined4 *)(in_GS_OFFSET + -4) = param_1;
 return *(int *)(in_GS_OFFSET + -4) * 2;
}



/* Function: init_depends_on @ 00012693 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 init_depends_on(undefined4 *param_1)

{
 if (param_1 != (undefined4 *)0x0) {
 static_depends_0 = *param_1;
 }
 return static_depends_0;
}



/* Function: init_order_test @ 000126bd */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void init_order_test(void)

{
 int in_GS_OFFSET;
 undefined4 local_14;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_14 = 0x14;
 init_depends_on(&local_14);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return;
}



/* Function: test_static_global @ 00012702 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_static_global(void)

{
 undefined4 uVar1;
 int in_GS_OFFSET;
 undefined4 local_14;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_00013348);
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
 uVar1 = 0x96;
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
 local_14 = 100;
 uVar1 = global_heap_store(&local_14);
 printf("STM-L2-08 (global_heap_store): %d\n",uVar1);
 uVar1 = static_complex_init();
 printf("STM-L2-09 (static_complex_init): %d\n",uVar1);
 uVar1 = tls_access(10);
 printf("STM-L3-01 (tls_access): %d\n",uVar1);
 init_order_test();
 uVar1 = 0x14;
 printf("STM-L3-02 (init_order_test): %d\n",uVar1);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return;
}



/* Function: memop_memset @ 00012969 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

uint memop_memset(byte *param_1,size_t param_2,int param_3)

{
 uint uVar1;
 
 if ((param_1 == (byte *)0x0) || (param_2 == 0)) {
 uVar1 = 0xffffffff;
 }
 else {
 memset(param_1,param_3,param_2);
 uVar1 = (uint)*param_1;
 }
 return uVar1;
}



/* Function: memop_memcpy @ 000129b5 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 memop_memcpy(void *param_1,void *param_2,uint param_3)

{
 undefined4 uVar1;
 
 if (((param_1 == (void *)0x0) || (param_2 == (void *)0x0)) || (param_3 == 0)) {
 uVar1 = 0xffffffff;
 }
 else {
 memcpy(param_1,param_2,param_3);
 uVar1 = *(undefined4 *)((int)param_1 + ((param_3 & 0xfffffffc) - 4));
 }
 return uVar1;
}



/* Function: memop_memmove @ 00012a0e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int memop_memmove(void *param_1,uint param_2)

{
 int iVar1;
 
 if ((param_1 == (void *)0x0) || (param_2 < 2)) {
 iVar1 = -1;
 }
 else {
 memmove((void *)((int)param_1 + 1),param_1,param_2 - 1);
 iVar1 = (int)*(char *)((int)param_1 + 1);
 }
 return iVar1;
}



/* Function: memop_memcmp @ 00012a65 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 memop_memcmp(void *param_1,void *param_2,size_t param_3)

{
 undefined4 uVar1;
 int iVar2;
 
 if (((param_1 == (void *)0x0) || (param_2 == (void *)0x0)) || (param_3 == 0)) {
 uVar1 = 0;
 }
 else {
 iVar2 = memcmp(param_1,param_2,param_3);
 if (iVar2 < 1) {
 if (iVar2 < 0) {
 uVar1 = 0xffffffff;
 }
 else {
 uVar1 = 0;
 }
 }
 else {
 uVar1 = 1;
 }
 }
 return uVar1;
}



/* Function: memop_bzero @ 00012ad0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

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



/* Function: memop_bcopy @ 00012b19 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

uint memop_bcopy(void *param_1,byte *param_2,size_t param_3)

{
 uint uVar1;
 
 if (((param_1 == (void *)0x0) || (param_2 == (byte *)0x0)) || (param_3 == 0)) {
 uVar1 = 0xffffffff;
 }
 else {
 memmove(param_2,param_1,param_3);
 uVar1 = (uint)*param_2;
 }
 return uVar1;
}



/* Function: memop_unaligned_access @ 00012b6b */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 memop_unaligned_access(int param_1)

{
 undefined4 uVar1;
 int in_GS_OFFSET;
 
 if (param_1 == 0) {
 uVar1 = 0xffffffff;
 }
 else {
 uVar1 = *(undefined4 *)(param_1 + 1);
 }
 if (*(int *)(in_GS_OFFSET + 0x14) != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return uVar1;
}



/* Function: memop_memory_barrier @ 00012bbe */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void LOCK(void) { return; }
void UNLOCK(void) { return; }

int memop_memory_barrier(int *param_1)

{
 int iVar1;
 
 if (param_1 == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 LOCK();
 UNLOCK();
 iVar1 = *param_1 + *param_1;
 }
 return iVar1;
}



/* Function: test_memory_op_functions @ 00012bf8 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_memory_op_functions(void)

{
 undefined4 uVar1;
 int in_GS_OFFSET;
 undefined4 local_17c;
 undefined4 local_178;
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
 undefined4 local_135;
 undefined4 local_131;
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
 puts(&DAT_000135c4);
 local_160 = 10;
 local_15c = 0x14;
 local_158 = 0x1e;
 local_154 = 0x28;
 local_150 = 0x32;
 local_14c = 0;
 local_148 = 0;
 local_144 = 0;
 local_140 = 0;
 local_13c = 0;
 uVar1 = memop_memset(local_110,10,0x41);
 printf("MEMOP-L2-01: %d\n",uVar1);
 uVar1 = memop_memcpy(&local_14c,&local_160,0x14);
 printf("MEMOP-L2-02: %d\n",uVar1);
 local_11b = 0x6c6c6548;
 local_117 = 0x726f576f;
 local_113 = 0x646c;
 local_111 = 0;
 uVar1 = memop_memmove(&local_11b,10);
 printf("MEMOP-L2-03: %c\n",uVar1);
 local_178 = 1;
 local_174 = 2;
 local_170 = 3;
 local_16c = 1;
 local_168 = 2;
 local_164 = 4;
 uVar1 = memop_memcmp(&local_178,&local_16c,0xc);
 printf("MEMOP-L2-04: %d\n",uVar1);
 uVar1 = memop_bzero(local_125,10);
 printf("MEMOP-L2-05: %d\n",uVar1);
 local_135 = 0x4030201;
 local_131 = 0;
 uVar1 = memop_bcopy(&local_135,&local_131,4);
 printf("MEMOP-L2-06: %d\n",uVar1);
 local_12d = 0x3020100;
 local_129 = 0x7060504;
 uVar1 = memop_unaligned_access(&local_12d);
 printf("MEMOP-L3-01: 0x%x\n",uVar1);
 local_17c = 5;
 uVar1 = memop_memory_barrier(&local_17c);
 printf("MEMOP-L3-02: %d\n",uVar1);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return;
}








/* Function: main @ 00012e86 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 main(void)

{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}



/* Function: __x86.get_pc_thunk.ax @ 00012eb5 */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
 undefined4 unaff_retaddr;
 
 return unaff_retaddr;
}














/* Function: __stack_chk_fail_local @ 00012ee0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}

/* Function: extern_function @ 00012f00 */

int extern_function(int param_1)

{
 return param_1 * 2;
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 72 */
