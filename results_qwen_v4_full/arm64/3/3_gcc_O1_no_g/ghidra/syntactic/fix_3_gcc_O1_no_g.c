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

/* Ghidra decompiler type definitions */
typedef unsigned char undefined1;
typedef unsigned int undefined4;
typedef unsigned long undefined8;
typedef unsigned long undefined7;
typedef unsigned long undefined;
typedef unsigned long ulong;
typedef unsigned char byte;
typedef unsigned int uint;
typedef long __pid_t;
typedef void (*code)(void);

/* Missing global variable declarations */
static int global_counter;
static int counter_1;
static undefined4 file_scope_static;
static code *global_func_ptr;
static int extern_global_var = 0;
static undefined4 const_string[16];
static undefined4 static_depends_0;
static undefined4 global_array[10];
static int completed_0;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/3/3_gcc_O1_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */

/* C++ runtime functions */
extern void __cxa_finalize(void *);

/* Stack protection globals */
extern long __stack_chk_guard;

/* Standard library function declarations */
extern void __stack_chk_fail(void);
int puts(const char *);
void *malloc(size_t);
void free(void *);
void *calloc(size_t, size_t);
void *realloc(void *, size_t);
void memset(void *, int, size_t);
void *memcpy(void *, const void *, size_t);
void *memmove(void *, const void *, size_t);
int memcmp(const void *, const void *, size_t);
int printf(const char *, ...);
int __printf_chk(int, const char *, ...);
int fork(void);
int waitpid(int, int *, int);
void exit(int);
void perror(const char *);
void DataMemoryBarrier(int, int);

/* Define external data arrays */
static char DAT_00101e38[] = "Stack Memory Tests";
static char DAT_00101fa8[] = "Heap Memory Tests";
static char DAT_00102118[] = "%d\n";
static char DAT_00102128[] = "Child exited with status %d\n";
static char DAT_00102150[] = "Child terminated by signal %d\n";
static char DAT_00102198[] = "fork failed";
static char DAT_001021a8[] = "Static/Global Memory Tests";
static char DAT_00102458[] = "Memory Operation Tests";

/* External function declarations */
static int extern_function(int);


/* Function: FUN_001009b0 @ 001009b0 */

static void FUN_001009b0(void)

{
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */









/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: double_value @ 00100c14 */

static int double_value(int param_1)

{
 return param_1 << 1;
}



/* Function: local_vars @ 00100c1c */

static int local_vars(int param_1)

{
 return param_1 * 2 + 10;
}



/* Function: local_array @ 00100c28 */

/* WARNING: Removing unreachable block (ram,0x00100c88) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

static void local_array(int param_1)

{
 int iVar1;
 int *piVar2;
 int aiStack_30 [10];
 int local_8 [2];
 int *piVar3;
 
 iVar1 = 0;
 piVar2 = aiStack_30;
 do {
 piVar3 = piVar2 + 1;
 *piVar2 = iVar1;
 iVar1 = iVar1 + param_1;
 piVar2 = piVar3;
 } while (piVar3 != local_8);
 return;
}



/* Function: local_struct @ 00100c8c */

static int local_struct(int param_1)

{
 return param_1 * 3;
}



/* Function: address_of_local @ 00100c94 */

static void address_of_local(undefined4 *param_1)

{
 *param_1 = 0x2a;
 return;
}



/* Function: address_of_array @ 00100ca4 */

static int address_of_array(int *param_1)

{
 return *param_1 << 1;
}



/* Function: large_stack_frame @ 00100cb0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

static void large_stack_frame(void)

{
 int iVar1;
 undefined1 *puVar2;
 undefined1 auStack_808 [1024];
 undefined1 local_408;
 long local_8;
 
 local_8 = __stack_chk_guard;
 iVar1 = 0;
 puVar2 = auStack_808;
 do {
 *puVar2 = (char)iVar1;
 iVar1 = iVar1 + 1;
 puVar2 = puVar2 + 1;
 } while (iVar1 != 0x800);
 if (local_8 - __stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: vla_stack @ 00100d18 */

/* WARNING: Removing unreachable block (ram,0x00100ddc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

static void vla_stack(ulong param_1)

{
 long lVar1;
 undefined1 *puVar2;
 long lVar3;
 ulong uVar4;
 undefined1 auStack_30 [16];
 
 puVar2 = auStack_30;
 if ((int)param_1 - 1U < 1000) {
 uVar4 = (-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2) + 0xf;
 for (; puVar2 != auStack_30 + -(uVar4 & 0xffffffffffff0000); puVar2 = puVar2 + -0x10000) {
 *(undefined8 *)(puVar2 + -0xfc00) = 0;
 }
 uVar4 = uVar4 & 0xfff0;
 lVar1 = -uVar4;
 *(undefined8 *)(puVar2 + lVar1) = 0;
 if (0x3ff < uVar4) {
 *(undefined8 *)(puVar2 + lVar1 + 0x400) = 0;
 }
 lVar3 = 0;
 do {
 *(int *)(puVar2 + lVar3 * 4 + lVar1 + 0x10) = (int)lVar3 << 1;
 lVar3 = lVar3 + 1;
 } while ((int)lVar3 < (int)param_1);
 }
 return;
}



/* Function: alloca_usage @ 00100de0 */

/* WARNING: Removing unreachable block (ram,0x00100ea4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

static void alloca_usage(ulong param_1)

{
 long lVar1;
 undefined1 *puVar2;
 int iVar3;
 ulong uVar4;
 int *piVar5;
 undefined1 auStack_30 [16];
 
 puVar2 = auStack_30;
 if (0 < (int)param_1) {
 uVar4 = (-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2) + 0xf;
 for (; puVar2 != auStack_30 + -(uVar4 & 0xffffffffffff0000); puVar2 = puVar2 + -0x10000) {
 *(undefined8 *)(puVar2 + -0xfc00) = 0;
 }
 uVar4 = uVar4 & 0xfff0;
 lVar1 = -uVar4;
 *(undefined8 *)(puVar2 + lVar1) = 0;
 if (0x3ff < uVar4) {
 *(undefined8 *)(puVar2 + lVar1 + 0x400) = 0;
 }
 iVar3 = 0;
 piVar5 = (int *)(puVar2 + lVar1 + 0x10);
 do {
 *piVar5 = iVar3;
 iVar3 = iVar3 + 3;
 piVar5 = piVar5 + 1;
 } while (iVar3 != (int)param_1 * 3);
 }
 return;
}



/* Function: stack_alias @ 00100ea8 */

static undefined8 stack_alias(void)

{
 return 0x14;
}



/* Function: test_stack_memory @ 00100eb0 */

static void test_stack_memory(void)

{
 undefined4 uVar1;
 
 puts(DAT_00101e38);
 __printf_chk(1,"MEM-L1-01 (local_vars): %d\n",0x14);
 local_array(2);
 __printf_chk(1,"MEM-L1-02 (local_array): %d\n",0);
 __printf_chk(1,"MEM-L1-03 (local_struct): %d\n",0xf);
 __printf_chk(1,"MEM-L1-04 (address_of_local): %d\n",0x2a);
 __printf_chk(1,"MEM-L1-05 (address_of_array): %d\n",2);
 large_stack_frame();
 __printf_chk(1,"MEM-L2-01 (large_stack_frame): %d\n",0);
 vla_stack(10);
 __printf_chk(1,"MEM-L2-02 (vla_stack): %d\n",0);
 alloca_usage(10);
 __printf_chk(1,"MEM-L2-03 (alloca_usage): %d\n",0);
 __printf_chk(1,"MEM-L2-04 (stack_alias): %d\n",0x14);
 return;
}



/* Function: heap_basic @ 00100f9c */

static undefined4 heap_basic(ulong param_1)

{
 int iVar1;
 void *__ptr;
 long lVar2;
 undefined4 uVar3;
 
 iVar1 = (int)param_1;
 __ptr = malloc(-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2);
 if (__ptr == (void *)0x0) {
 uVar3 = 0xffffffff;
 }
 else {
 if (0 < iVar1) {
 lVar2 = 0;
 do {
 *(int *)((long)__ptr + lVar2 * 4) = (int)lVar2 << 1;
 lVar2 = lVar2 + 1;
 } while ((int)lVar2 < iVar1);
 }
 uVar3 = *(undefined4 *)((long)__ptr + (long)(iVar1 / 2) * 4);
 free(__ptr);
 }
 return uVar3;
}



/* Function: heap_calloc @ 00101000 */

static int heap_calloc(int param_1)

{
 void *__ptr;
 long lVar1;
 int iVar2;
 
 __ptr = calloc((long)param_1,4);
 if (__ptr == (void *)0x0) {
 iVar2 = -1;
 }
 else {
 if (param_1 < 1) {
 iVar2 = 0;
 }
 else {
 lVar1 = 0;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *(int *)((long)__ptr + lVar1 * 4);
 lVar1 = lVar1 + 1;
 } while ((int)lVar1 < param_1);
 }
 free(__ptr);
 }
 return iVar2;
}



/* Function: heap_realloc @ 00101068 */

static undefined4 heap_realloc(void)

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
 *(undefined4 *)((long)__ptr_00 + 0x14) = 0x32;
 *(undefined4 *)((long)__ptr_00 + 0x18) = 0x3c;
 *(undefined4 *)((long)__ptr_00 + 0x1c) = 0x46;
 *(undefined4 *)((long)__ptr_00 + 0x20) = 0x50;
 *(undefined4 *)((long)__ptr_00 + 0x24) = 0x5a;
 uVar1 = 0xfffffffd;
 if (*(int *)((long)__ptr_00 + 8) == 3) {
 uVar1 = *(undefined4 *)((long)__ptr_00 + 0x14);
 }
 free(__ptr_00);
 }
 }
 return uVar1;
}



/* Function: heap_array @ 00101128 */

static int heap_array(ulong param_1)

{
 int *__ptr;
 int iVar1;
 int *piVar2;
 int iVar3;
 
 iVar3 = (int)param_1;
 __ptr = malloc(-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2);
 if (__ptr == (int *)0x0) {
 iVar3 = -1;
 }
 else {
 if (0 < iVar3) {
 iVar1 = 0;
 piVar2 = __ptr;
 do {
 *piVar2 = iVar1;
 iVar1 = iVar1 + 3;
 piVar2 = piVar2 + 1;
 } while (iVar1 != iVar3 * 3);
 }
 iVar3 = __ptr[iVar3 / 2];
 free(__ptr);
 }
 return iVar3;
}



/* Function: heap_struct @ 00101190 */

static int heap_struct(int param_1)

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



/* Function: heap_nested @ 001011cc */

static undefined8 heap_nested(undefined4 **param_1)

{
 undefined4 *__ptr;
 undefined4 *puVar1;
 undefined8 uVar2;
 
 __ptr = malloc(0x10);
 *param_1 = __ptr;
 if (__ptr == (undefined4 *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 *__ptr = 10;
 puVar1 = malloc(0x10);
 *(undefined4 **)(__ptr + 2) = puVar1;
 if (puVar1 == (undefined4 *)0x0) {
 free(__ptr);
 uVar2 = 0xfffffffe;
 }
 else {
 *puVar1 = 0x14;
 *(undefined8 *)(puVar1 + 2) = 0;
 uVar2 = 0;
 }
 }
 return uVar2;
}



/* Function: linked_list_heap @ 0010123c */

static int linked_list_heap(void)

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
 piVar1 = malloc(0x10);
 if (piVar1 == (int *)0x0) {
 if (__ptr != (int *)0x0) {
 do {
 piVar2 = *(int **)(__ptr + 2);
 free(__ptr);
 __ptr = piVar2;
 } while (piVar2 != (int *)0x0);
 return -1;
 }
 return -1;
 }
 *piVar1 = iVar3;
 piVar1[2] = 0;
 piVar1[3] = 0;
 __ptr_00 = piVar1;
 if (__ptr != (int *)0x0) {
 *(int **)(piVar2 + 2) = piVar1;
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
 piVar2 = *(int **)(piVar2 + 2);
 } while (piVar2 != (int *)0x0);
 do {
 piVar2 = *(int **)(__ptr_00 + 2);
 free(__ptr_00);
 __ptr_00 = piVar2;
 } while (piVar2 != (int *)0x0);
 }
 return iVar3;
}



/* Function: create_tree_node @ 00101300 */

static undefined4 *create_tree_node(undefined4 param_1)

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



/* Function: tree_heap_traversal @ 00101334 */

static int tree_heap_traversal(void)

{
 int *__ptr;
 undefined8 uVar1;
 int *piVar2;
 int *__ptr_00;
 int iVar3;
 
 __ptr = (int *)create_tree_node(10);
 if (__ptr == (int *)0x0) {
 iVar3 = -1;
 }
 else {
 uVar1 = (undefined8)create_tree_node(0x14);
 *(undefined8 *)(__ptr + 2) = uVar1;
 piVar2 = (int *)create_tree_node(0x1e);
 *(int **)(__ptr + 4) = piVar2;
 __ptr_00 = *(int **)(__ptr + 2);
 if (piVar2 == (int *)0x0 || __ptr_00 == (int *)0x0) {
 if (__ptr_00 != (int *)0x0) {
 free(__ptr_00);
 }
 if (*(void **)(__ptr + 4) != (void *)0x0) {
 free(*(void **)(__ptr + 4));
 }
 free(__ptr);
 iVar3 = -2;
 }
 else {
 iVar3 = *__ptr + *__ptr_00 + *piVar2;
 free(__ptr_00);
 free(*(void **)(__ptr + 4));
 free(__ptr);
 }
 }
 return iVar3;
}



/* Function: memory_leak @ 001013e0 */

static undefined4 memory_leak(ulong param_1)

{
 int iVar1;
 undefined4 uVar2;
 void *pvVar3;
 long lVar4;
 
 iVar1 = (int)param_1;
 pvVar3 = malloc(-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2);
 if (pvVar3 == (void *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 if (0 < iVar1) {
 lVar4 = 0;
 do {
 *(int *)((long)pvVar3 + lVar4 * 4) = (int)lVar4;
 lVar4 = lVar4 + 1;
 } while ((int)lVar4 < iVar1);
 }
 uVar2 = *(undefined4 *)((long)pvVar3 + (long)(iVar1 / 2) * 4);
 }
 return uVar2;
}



/* Function: dangling_pointer @ 00101438 */

static undefined4 dangling_pointer(void)

{
 undefined4 uVar1;
 undefined4 *__ptr;
 
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



/* Function: double_free @ 00101488 */

static undefined4 double_free(undefined4 *param_1)

{
 undefined4 uVar1;
 void *__ptr;
 
 if (param_1 != (undefined4 *)0x0) {
 return *param_1;
 }
 __ptr = malloc(4);
 if (__ptr == (void *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 free(__ptr);
 free(__ptr);
 uVar1 = 0xfffffffe;
 }
 return uVar1;
}



/* Function: heap_overflow @ 001014d4 */

static int heap_overflow(void)

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



/* Function: test_heap_memory @ 00101524 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

static void test_heap_memory(void)

{
 undefined4 uVar1;
 __pid_t __pid;
 uint local_14;
 void *local_10;
 long local_8;
 
 local_8 = __stack_chk_guard;
 puts(DAT_00101fa8);
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
 local_10 = (void *)0x0;
 uVar1 = heap_nested((undefined4 **)&local_10);
 __printf_chk(1,"HEAP-L2-06 (heap_nested): %d\n",uVar1);
 if (local_10 != (void *)0x0) {
 free(*(void **)((long)local_10 + 8));
 free(local_10);
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
 __printf_chk(1,DAT_00102118,uVar1);
 /* WARNING: Subroutine does not return */
 exit(0);
 }
 if (__pid < 1) {
 perror((const char *)&DAT_00102198);
 }
 else {
 waitpid(__pid,(int *)&local_14,0);
 if ((local_14 & 0x7f) == 0) {
 __printf_chk(1,DAT_00102128,local_14 >> 8 & 0xff);
 }
 else if (0 < (int)((long)((ulong)((local_14 & 0x7f) + 1) << 0x38) >> 0x39)) {
 __printf_chk(1,DAT_00102150,local_14 & 0x7f);
 }
 }
 if (local_8 - __stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: global_var_access @ 00101724 */

static void global_var_access(void)

{
 global_counter = global_counter + 1;
 return;
}



/* Function: global_var_read @ 00101738 */

static int global_var_read(void)

{
 return global_counter << 1;
}



/* Function: global_array_access @ 00101748 */

static undefined4 global_array_access(uint param_1)

{
 undefined4 uVar1;
 
 if (param_1 < 10) {
 uVar1 = *(undefined4 *)(&global_array + (long)(int)param_1 * 4);
 }
 else {
 uVar1 = 0xffffffff;
 }
 return uVar1;
}



/* Function: static_local @ 00101768 */

static void static_local(int param_1)

{
 if (param_1 == 0) {
 counter_1 = counter_1 + 1;
 }
 else {
 counter_1 = 0;
 }
 return;
}



/* Function: call_static_func @ 0010178c */

static int call_static_func(int param_1)

{
 return param_1 * 2 + 1;
}



/* Function: access_extern_global @ 00101798 */

static int access_extern_global(void)

{
 return extern_global_var + 100;
}



/* Function: call_extern_func @ 001017ac */

static int call_extern_func(void)

{
 return extern_function(5);
}



/* Function: read_const_data @ 001017c4 */

static int read_const_data(void)

{
 return (byte)const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 001017d8 */

static undefined8 access_bss_var(void)

{
 return 0;
}



/* Function: access_bss_buffer @ 001017e0 */

static undefined8 access_bss_buffer(void)

{
 return 0;
}



/* Function: global_struct_access @ 001017e8 */

static undefined8 global_struct_access(void)

{
 return 0x1e;
}



/* Function: set_file_static @ 001017f0 */

static void set_file_static(undefined4 param_1)

{
 file_scope_static = param_1;
 return;
}



/* Function: get_file_static @ 001017fc */

static undefined4 get_file_static(void)

{
 return file_scope_static;
}



/* Function: set_global_callback @ 00101808 */

static void set_global_callback(undefined8 param_1)

{
 global_func_ptr = (code *)param_1;
 return;
}



/* Function: call_global_callback @ 00101814 */

static undefined8 call_global_callback(void)

{
 undefined8 uVar1;
 
 if (global_func_ptr != (code *)0x0) {
 uVar1 = ((undefined8 (*)(undefined8))global_func_ptr)(10);
 return uVar1;
 }
 return 0xffffffff;
}



/* Function: global_heap_store @ 0010183c */

static undefined4 global_heap_store(undefined4 *param_1)

{
 undefined4 uVar1;
 
 if (param_1 == (undefined4 *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 uVar1 = *param_1;
 }
 return uVar1;
}



/* Function: static_complex_init @ 00101850 */

static undefined8 static_complex_init(void)

{
 return 0xf;
}



/* Function: tls_access @ 00101858 */

static int tls_access(int param_1)

{
 return param_1 << 1;
}



/* Function: init_order_test @ 00101860 */

static void init_order_test(void)

{
 static_depends_0 = 0x14;
 return;
}



/* Function: test_static_global @ 00101870 */

static void test_static_global(void)

{
 int iVar1;
 undefined4 uVar2;
 
 iVar1 = puts(DAT_001021a8);
 global_var_access();
 __printf_chk(1,"STM-L1-01 (global_var_access): %d\n",0);
 __printf_chk(1,"STM-L1-01 (global_var_read): %d\n",global_counter << 1);
 __printf_chk(1,"STM-L1-02 (global_array_access): %d\n",5);
 counter_1 = 1;
 __printf_chk(1,"STM-L1-03 (static_local): %d\n",1);
 counter_1 = counter_1 + 1;
 __printf_chk(1,"STM-L1-03 (static_local): %d\n",counter_1);
 __printf_chk(1,"STM-L1-04 (call_static_func): %d\n",0xb);
 __printf_chk(1,"STM-L2-01 (access_extern_global): %d\n",extern_global_var + 100);
 call_extern_func();
 __printf_chk(1,"STM-L2-02 (call_extern_func): %d\n",0);
 uVar2 = read_const_data();
 __printf_chk(1,"STM-L2-03 (read_const_data): %d\n",uVar2);
 __printf_chk(1,"STM-L2-04 (access_bss_var): %d\n",0);
 __printf_chk(1,"STM-L2-04 (access_bss_buffer): %d\n",0);
 uVar2 = global_struct_access();
 __printf_chk(1,"STM-L2-05 (global_struct_access): %d\n",uVar2);
 file_scope_static = 0x32;
 __printf_chk(1,"STM-L2-06 (file_static): %d\n",file_scope_static);
 global_func_ptr = (code *)double_value;
 uVar2 = call_global_callback();
 __printf_chk(1,"STM-L2-07 (global_func_ptr): %d\n",uVar2);
 __printf_chk(1,"STM-L2-08 (global_heap_store): %d\n",100);
 uVar2 = static_complex_init();
 __printf_chk(1,"STM-L2-09 (static_complex_init): %d\n",uVar2);
 __printf_chk(1,"STM-L3-01 (tls_access): %d\n",0x14);
 init_order_test();
 __printf_chk(1,"STM-L3-02 (init_order_test): %d\n",static_depends_0);
 return;
}



/* Function: memop_memset @ 00101a60 */

static ulong memop_memset(byte *param_1,size_t param_2,int param_3)

{
 ulong uVar1;
 
 if (param_1 == (byte *)0x0 || param_2 == 0) {
 uVar1 = 0xffffffff;
 }
 else {
 memset(param_1,param_3,param_2);
 uVar1 = (ulong)*param_1;
 }
 return uVar1;
}



/* Function: memop_memcpy @ 00101aa8 */

static undefined4 memop_memcpy(void *param_1,void *param_2,size_t param_3)

{
 if ((param_2 != (void *)0x0 && param_3 != 0) && param_1 != (void *)0x0) {
 memcpy(param_1,param_2,param_3);
 return *(undefined4 *)((long)param_1 + ((param_3 & 0xfffffffffffffffc) - 4));
 }
 return 0xffffffff;
}



/* Function: memop_memmove @ 00101af0 */

static ulong memop_memmove(void *param_1,ulong param_2)

{
 if (param_1 != (void *)0x0 && 1 < param_2) {
 memmove((void *)((long)param_1 + 1),param_1,param_2 - 1);
 return (ulong)*(byte *)((long)param_1 + 1);
 }
 return 0xffffffff;
}



/* Function: memop_memcmp @ 00101b34 */

static int memop_memcmp(void *param_1,void *param_2,size_t param_3)

{
 int iVar1;
 int iVar2;
 
 if ((param_2 == (void *)0x0 || param_3 == 0) || param_1 == (void *)0x0) {
 return 0;
 }
 iVar2 = memcmp(param_1,param_2,param_3);
 iVar1 = iVar2 >> 0x1f;
 if (0 < iVar2) {
 iVar1 = 1;
 }
 return iVar1;
}



/* Function: memop_bzero @ 00101b6c */

static ulong memop_bzero(byte *param_1,size_t param_2)

{
 if (param_1 != (byte *)0x0) {
 memset(param_1,0,param_2);
 return (ulong)*param_1;
 }
 return 0xffffffff;
}



/* Function: memop_bcopy @ 00101ba4 */

static ulong memop_bcopy(void *param_1,byte *param_2,size_t param_3)

{
 if ((param_2 != (byte *)0x0 && param_3 != 0) && param_1 != (void *)0x0) {
 memmove(param_2,param_1,param_3);
 return (ulong)*param_2;
 }
 return 0xffffffff;
}



/* Function: memop_unaligned_access @ 00101be8 */

static undefined4 memop_unaligned_access(long param_1)

{
 undefined4 uVar1;
 
 if (param_1 == 0) {
 uVar1 = 0xffffffff;
 }
 else {
 uVar1 = *(undefined4 *)(param_1 + 1);
 }
 return uVar1;
}



/* Function: builtin_strncpy - wrapper for strncpy */

static char *builtin_strncpy(char *dest, const char *src, size_t n)

{
 size_t i;
 
 for (i = 0; i < n && src[i] != '\0'; i++) {
 dest[i] = src[i];
 }
 for (; i < n; i++) {
 dest[i] = '\0';
 }
 return dest;
}



/* Function: memop_memory_barrier - memory barrier stub */

static int memop_memory_barrier(void *param_1)

{
 if (param_1 != (void *)0x0) {
 return *(int *)param_1;
 }
 return 0;
}



/* Function: test_memory_op_functions @ 00101c1c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

static void test_memory_op_functions(void)

{
 undefined4 uVar1;
 undefined4 local_18c;
 undefined4 local_188;
 undefined4 local_184;
 undefined4 local_180;
 undefined4 local_178;
 undefined4 local_174;
 undefined4 local_170;
 undefined8 local_168;
 undefined8 uStack_160;
 undefined4 local_158;
 undefined8 local_150;
 undefined8 uStack_148;
 undefined4 local_140;
 undefined4 local_138 [2];
 undefined4 local_130 [2];
 undefined1 auStack_128 [16];
 undefined7 local_118;
 char acStack_111 [9];
 undefined1 auStack_108 [256];
 long local_8;
 
 local_8 = __stack_chk_guard;
 puts(DAT_00102458);
 local_168 = 0x140000000a;
 uStack_160 = 0x280000001e;
 local_158 = 0x32;
 local_150 = 0;
 uStack_148 = 0;
 local_140 = 0;
 uVar1 = memop_memset(auStack_108,10,0x41);
 __printf_chk(1,"MEMOP-L2-01: %d\n",uVar1);
 uVar1 = memop_memcpy(&local_150,&local_168,0x14);
 __printf_chk(1,"MEMOP-L2-02: %d\n",uVar1);
 local_118 = 0x6f576f6c6c6548;
 builtin_strncpy(acStack_111,"rld",4);
 uVar1 = memop_memmove(&local_118,10);
 __printf_chk(1,"MEMOP-L2-03: %c\n",uVar1);
 local_188 = 1;
 local_184 = 2;
 local_180 = 3;
 local_178 = 1;
 local_174 = 2;
 local_170 = 4;
 uVar1 = memop_memcmp(&local_188,&local_178,0xc);
 __printf_chk(1,"MEMOP-L2-04: %d\n",uVar1);
 uVar1 = memop_bzero(auStack_128,10);
 __printf_chk(1,"MEMOP-L2-05: %d\n",uVar1);
 local_138[0] = 0x4030201;
 local_130[0] = 0;
 uVar1 = memop_bcopy(local_138,(byte *)local_130,4);
 __printf_chk(1,"MEMOP-L2-06: %d\n",uVar1);
 __printf_chk(1,"MEMOP-L3-01: 0x%x\n",0x4030201);
 local_18c = 5;
 uVar1 = memop_memory_barrier(&local_18c);
 __printf_chk(1,"MEMOP-L3-02: %d\n",uVar1);
 if (local_8 - __stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: main @ 00101df0 */

__attribute__((weak)) int main(int argc, char **argv)

{
 (void)argc;
 (void)argv;
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}



/* Function: extern_function @ 00101e14 */

static int extern_function(int param_1)

{
 return param_1 * 3;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 65 */
