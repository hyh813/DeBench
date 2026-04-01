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
typedef unsigned int uint;

/* Ghidra decompiler types */
typedef unsigned int undefined4;
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef void (*code)(int);
typedef int (*atomic_op_4)(int, int, int *);
typedef int (*atomic_op_3arg)(int, int, int *);
typedef int (*atomic_op_2)(uint, uint, uint *);
typedef int (*atomic_op_1)(uint, uint, uint *);
typedef void (*memory_barrier_fn)(void);
typedef int (*cas_fn)(int, int, int *);
typedef void (*barrier_fn)(void);

/* Additional type definitions */
typedef unsigned char byte;
typedef int bool;
typedef int __pid_t;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/3/3_clang_O1_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* External data declarations */
extern undefined4 DAT_00012f62;
extern undefined4 DAT_00012f80;
extern undefined4 DAT_00012f9e;
extern undefined4 DAT_00012fc2;
extern undefined4 DAT_00013010;
extern undefined4 DAT_0001301c;
extern undefined4 DAT_00012c8f;
extern undefined4 DAT_00012c29;
extern undefined4 DAT_00012c4e;
extern undefined4 DAT_00012c19;

/* External function declarations */
extern void *malloc(size_t);
extern void free(void *);
extern void *calloc(size_t, size_t);
extern void *realloc(void *, size_t);
extern int printf(const char *, ...);
extern int puts(const char *);
extern int memset(void *, int, size_t);
extern void *memcpy(void *, const void *, size_t);
extern void *memmove(void *, const void *, size_t);
extern int memcmp(const void *, const void *, size_t);
extern void __sync_synchronize(void);
extern __pid_t fork(void);
extern int waitpid(__pid_t, int *, int);
extern void perror(const char *);
extern void exit(int);

/* Forward declarations */
static int local_extern_function(int);
static int SUB_ffff0fc0(int, int, int *);
static void SUB_ffff0fa0(void);
int double_value(int);

/* Global variable definitions */
int global_counter = 0;
undefined4 global_array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int static_local_counter = 0;
static int extern_global_var = 50;
byte const_string[] = "test_string_data";
undefined4 file_scope_static = 0;
code global_func_ptr = 0;
undefined4 *global_heap_ptr = 0;

/* Data section definitions */
undefined4 DAT_00012f62 = 0x41414141;
undefined4 DAT_00012f80 = 0x42424242;
undefined4 DAT_00012f9e = 0x43434343;
undefined4 DAT_00012fc2 = 0x44444444;
undefined4 DAT_00013010 = 0x50505050;
undefined4 DAT_0001301c = 0x51515151;
undefined4 DAT_00012c8f = 0x60606060;
undefined4 DAT_00012c29 = 0x61616161;
undefined4 DAT_00012c4e = 0x62626262;
undefined4 DAT_00012c19 = 0x63636363;

/* External variable declarations - removed duplicates */


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
 iVar1 = iVar1 + param_1;
 iVar2 = iVar2 + -1;
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
 if (0 < param_1) {
 iVar4 = 0;
 iVar3 = param_1;
 do {
 *(int *)((int)&iStack_10 + iVar4 * 2 + iVar1 + 0x10) = iVar4;
 iVar4 = iVar4 + 2;
 iVar3 = iVar3 + -1;
 } while (iVar3 != 0);
 }
 uVar2 = *(undefined4 *)
 ((int)&iStack_10 + ((param_1 - (param_1 >> 0x1f)) * 2 & 0xfffffffdU) + iVar1 + 0x10);
 }
 return uVar2;
}



/* Function: alloca_usage @ 000108c8 */

undefined4 alloca_usage(int param_1)

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
 iVar2 = iVar2 + 3;
 iVar3 = iVar3 + 1;
 } while (param_1 != iVar3);
 return *(undefined4 *)
 ((int)&local_10 + ((param_1 - (param_1 >> 0x1f)) * 2 & 0xfffffffdU) + iVar1 + 0x10);
 }
 return 0xffffffff;
}



/* Function: stack_alias @ 0001092c */

undefined4 stack_alias(void)

{
 return 0x14;
}



/* Function: test_stack_memory @ 00010934 */

static void test_stack_memory(void)

{
 int iVar1;
 int *piVar2;
 int local_810 [256];
 byte local_410;
 
 puts(&DAT_00012f62);
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



/* Function: heap_basic @ 00010a68 */

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



/* Function: heap_calloc @ 00010ac8 */

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
 iVar2 = 0;
 piVar1 = __ptr;
 if (0 < (int)param_1) {
 do {
 iVar2 = *piVar1 + iVar2;
 param_1 = param_1 - 1;
 piVar1 = piVar1 + 1;
 } while (param_1 != 0);
 }
 free(__ptr);
 }
 return iVar2;
}



/* Function: heap_realloc @ 00010b18 */

undefined4 heap_realloc(void)

{
 void *__ptr;
 void *__ptr_00;
 int iVar1;
 int iVar2;
 undefined4 uVar3;
 int iVar4;
 
 __ptr = malloc(0x14);
 if (__ptr == (void *)0x0) {
 uVar3 = 0xffffffff;
 }
 else {
 iVar4 = 0;
 do {
 iVar1 = iVar4 + 1;
 *(int *)((int)__ptr + iVar4 * 4) = iVar1;
 iVar4 = iVar1;
 } while (iVar1 != 5);
 iVar4 = *(int *)((int)__ptr + 8);
 __ptr_00 = realloc(__ptr,0x28);
 if (__ptr_00 == (void *)0x0) {
 uVar3 = 0xfffffffe;
 __ptr_00 = __ptr;
 }
 else {
 iVar1 = 5;
 iVar2 = 0x32;
 do {
 *(int *)((int)__ptr_00 + iVar1 * 4) = iVar2;
 iVar2 = iVar2 + 10;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 10);
 uVar3 = 0xfffffffd;
 if (*(int *)((int)__ptr_00 + 8) == iVar4) {
 uVar3 = *(undefined4 *)((int)__ptr_00 + 0x14);
 }
 }
 free(__ptr_00);
 }
 return uVar3;
}



/* Function: heap_array @ 00010bb4 */

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



/* Function: heap_struct @ 00010c18 */

int heap_struct(int param_1)

{
 return param_1 * 3;
}



/* Function: heap_nested @ 00010c20 */

undefined4 heap_nested(int *param_1)

{
 undefined4 *puVar1;
 void *pvVar2;
 
 puVar1 = malloc(8);
 *param_1 = (int)puVar1;
 if (puVar1 == (undefined4 *)0x0) {
 return 0xffffffff;
 }
 *puVar1 = 10;
 pvVar2 = malloc(8);
 *(void **)(*param_1 + 4) = pvVar2;
 puVar1 = *(undefined4 **)(*param_1 + 4);
 if (puVar1 == (undefined4 *)0x0) {
 free((void *)*param_1);
 return 0xfffffffe;
 }
 *puVar1 = 0x14;
 puVar1[1] = 0;
 return 0;
}



/* Function: linked_list_heap @ 00010c94 */

int linked_list_heap(void)

{
 int *piVar1;
 int *piVar2;
 int *piVar3;
 int iVar4;
 int *__ptr;
 uint uVar5;
 bool bVar6;
 
 bVar6 = 1;
 __ptr = (int *)0x0;
 uVar5 = 0;
 piVar3 = (int *)0x0;
 do {
 piVar2 = malloc(8);
 if (piVar2 == (int *)0x0) goto joined_r0x00010d18;
 *piVar2 = uVar5 * 10;
 piVar2[1] = 0;
 piVar1 = piVar2;
 if (__ptr != (int *)0x0) {
 piVar3[1] = (int)piVar2;
 piVar1 = __ptr;
 }
 __ptr = piVar1;
 if (piVar2 == (int *)0x0) break;
 bVar6 = uVar5 < 4;
 uVar5 = uVar5 + 1;
 piVar3 = piVar2;
 } while (uVar5 != 5);
LAB_00010d40:
 iVar4 = -1;
 if (!bVar6) {
 iVar4 = 0;
 for (piVar3 = __ptr; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
 iVar4 = *piVar3 + iVar4;
 }
 while (__ptr != (int *)0x0) {
 piVar3 = (int *)__ptr[1];
 free(__ptr);
 __ptr = piVar3;
 }
 }
 return iVar4;
joined_r0x00010d18:
 while (__ptr != (int *)0x0) {
 piVar3 = (int *)__ptr[1];
 free(__ptr);
 __ptr = piVar3;
 }
 __ptr = (int *)0x0;
 goto LAB_00010d40;
}



/* Function: create_tree_node @ 00010d9c */

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



/* Function: tree_heap_traversal @ 00010dc8 */

int tree_heap_traversal(void)

{
 int *__ptr;
 int *__ptr_00;
 int *__ptr_01;
 int iVar1;
 int iVar2;
 int iVar3;
 
 __ptr = malloc(0xc);
 if (__ptr == (int *)0x0) {
 return -1;
 }
 *__ptr = 10;
 __ptr[1] = 0;
 __ptr[2] = 0;
 __ptr_00 = malloc(0xc);
 if (__ptr_00 != (int *)0x0) {
 *__ptr_00 = 0x14;
 __ptr_00[1] = 0;
 __ptr_00[2] = 0;
 }
 __ptr[1] = (int)__ptr_00;
 __ptr_01 = malloc(0xc);
 if (__ptr_01 != (int *)0x0) {
 *__ptr_01 = 0x1e;
 __ptr_01[1] = 0;
 __ptr_01[2] = 0;
 }
 __ptr[2] = (int)__ptr_01;
 if (__ptr_00 == (int *)0x0 || __ptr_01 == (int *)0x0) {
 if (__ptr_00 != (int *)0x0) {
 free(__ptr_00);
 }
 iVar1 = -2;
 if (__ptr_01 == (int *)0x0) goto LAB_00010e94;
 }
 else {
 iVar1 = *__ptr_01;
 iVar3 = *__ptr_00;
 iVar2 = *__ptr;
 free(__ptr_00);
 iVar1 = iVar3 + iVar2 + iVar1;
 __ptr_01 = (int *)__ptr[2];
 }
 free(__ptr_01);
LAB_00010e94:
 free(__ptr);
 return iVar1;
}



/* Function: memory_leak @ 00010ea8 */

undefined4 memory_leak(int param_1)

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
 return *(undefined4 *)((int)pvVar1 + ((param_1 - (param_1 >> 0x1f)) * 2 & 0xfffffffdU));
 }
 return 0xffffffff;
}



/* Function: dangling_pointer @ 00010efc */

undefined4 dangling_pointer(void)

{
 undefined4 *__ptr;
 
 __ptr = malloc(4);
 if (__ptr != (undefined4 *)0x0) {
 *__ptr = 0x2a;
 printf("value before free: %d\n",0x2a);
 free(__ptr);
 return *__ptr;
 }
 return 0xffffffff;
}



/* Function: double_free @ 00010f4c */

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



/* Function: heap_overflow @ 00010f5c */

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
 iVar1 = iVar1 + 100;
 iVar2 = iVar2 + -1;
 } while (iVar2 != -0xb);
 uVar3 = *__ptr;
 free(__ptr);
 }
 return uVar3;
}



/* Function: test_heap_memory @ 00010fa8 */

static void test_heap_memory(void)

{
 void *pvVar1;
 void *__ptr;
 undefined4 *__ptr_00;
 undefined4 *puVar2;
 __pid_t __pid;
 char *__format;
 int iVar3;
 uint uVar4;
 int iVar5;
 int iVar6;
 undefined4 uVar7;
 undefined4 uVar8;
 uint local_1c;
 
 puts(&DAT_00012f80);
 pvVar1 = malloc(0x28);
 iVar6 = -1;
 uVar7 = 0xffffffff;
 if (pvVar1 != (void *)0x0) {
 iVar3 = 0;
 do {
 *(int *)((int)pvVar1 + iVar3 * 2) = iVar3;
 iVar3 = iVar3 + 2;
 } while (iVar3 != 0x14);
 uVar7 = *(undefined4 *)((int)pvVar1 + 0x14);
 free(pvVar1);
 }
 printf("HEAP-L2-01 (heap_basic): %d\n",uVar7);
 pvVar1 = calloc(5,4);
 if (pvVar1 != (void *)0x0) {
 iVar3 = 0;
 iVar6 = 0;
 do {
 iVar6 = *(int *)((int)pvVar1 + iVar3 * -4) + iVar6;
 iVar3 = iVar3 + -1;
 } while (iVar3 != -5);
 free(pvVar1);
 }
 printf("HEAP-L2-02 (heap_calloc): %d\n",iVar6);
 pvVar1 = malloc(0x14);
 uVar7 = 0xffffffff;
 uVar8 = 0xffffffff;
 if (pvVar1 != (void *)0x0) {
 iVar6 = 0;
 do {
 iVar3 = iVar6 + 1;
 *(int *)((int)pvVar1 + iVar6 * 4) = iVar3;
 iVar6 = iVar3;
 } while (iVar3 != 5);
 iVar6 = *(int *)((int)pvVar1 + 8);
 __ptr = realloc(pvVar1,0x28);
 if (__ptr == (void *)0x0) {
 uVar8 = 0xfffffffe;
 __ptr = pvVar1;
 }
 else {
 iVar3 = 5;
 iVar5 = 0x32;
 do {
 *(int *)((int)__ptr + iVar3 * 4) = iVar5;
 iVar5 = iVar5 + 10;
 iVar3 = iVar3 + 1;
 } while (iVar3 != 10);
 uVar8 = 0xfffffffd;
 if (*(int *)((int)__ptr + 8) == iVar6) {
 uVar8 = *(undefined4 *)((int)__ptr + 0x14);
 }
 }
 free(__ptr);
 }
 printf("HEAP-L2-03 (heap_realloc): %d\n",uVar8);
 pvVar1 = malloc(0x28);
 if (pvVar1 != (void *)0x0) {
 iVar6 = 0;
 iVar3 = 0;
 do {
 *(int *)((int)pvVar1 + iVar3 * -4) = iVar6;
 iVar6 = iVar6 + 3;
 iVar3 = iVar3 + -1;
 } while (iVar3 != -10);
 uVar7 = *(undefined4 *)((int)pvVar1 + 0x14);
 free(pvVar1);
 }
 printf("HEAP-L2-04 (heap_array): %d\n",uVar7);
 printf("HEAP-L2-05 (heap_struct): %d\n",0xf);
 __ptr_00 = malloc(8);
 if (__ptr_00 == (undefined4 *)0x0) {
 uVar7 = 0xffffffff;
 }
 else {
 *__ptr_00 = 10;
 puVar2 = malloc(8);
 __ptr_00[1] = puVar2;
 if (puVar2 == (undefined4 *)0x0) {
 free(__ptr_00);
 uVar7 = 0xfffffffe;
 }
 else {
 uVar7 = 0;
 *puVar2 = 0x14;
 puVar2[1] = 0;
 }
 }
 printf("HEAP-L2-06 (heap_nested): %d\n",uVar7);
 if (__ptr_00 != (undefined4 *)0x0) {
 free((void *)__ptr_00[1]);
 free(__ptr_00);
 }
 uVar7 = linked_list_heap();
 printf("HEAP-L3-01 (linked_list_heap): %d\n",uVar7);
 uVar7 = tree_heap_traversal();
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n",uVar7);
 pvVar1 = malloc(0x14);
 if (pvVar1 == (void *)0x0) {
 uVar7 = 0xffffffff;
 }
 else {
 iVar6 = 0;
 do {
 *(int *)((int)pvVar1 + iVar6 * 4) = iVar6;
 iVar6 = iVar6 + 1;
 } while (iVar6 != 5);
 uVar7 = *(undefined4 *)((int)pvVar1 + 8);
 }
 printf("HEAP-L3-03 (memory_leak): %d\n",uVar7);
 printf("HEAP-L3-04 (dangling_pointer): ");
 __pid = fork();
 if (__pid != 0) {
 if (__pid < 1) {
 perror(&DAT_00012c8f);
 }
 else {
 waitpid(__pid,(int *)&local_1c,0);
 uVar4 = local_1c & 0x7f;
 if (uVar4 == 0) {
 uVar4 = local_1c >> 8 & 0xff;
 __format = &DAT_00012c29;
 }
 else {
 if ((int)(uVar4 * 0x1000000 + 0x1000000) < 0x2000000) {
 return;
 }
 __format = &DAT_00012c4e;
 }
 printf(__format,uVar4);
 }
 return;
 }
 uVar7 = dangling_pointer();
 printf(&DAT_00012c19,uVar7);
 /* WARNING: Subroutine does not return */
 exit(0);
}



/* Function: global_var_access @ 000112f0 */

void global_var_access(void)

{
 global_counter = global_counter + 1;
 return;
}



/* Function: global_var_read @ 00011314 */

int global_var_read(void)

{
 return global_counter << 1;
}



/* Function: global_array_access @ 00011328 */

undefined4 global_array_access(uint param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0xffffffff;
 if (param_1 < 10) {
 uVar1 = *(undefined4 *)(&global_array + param_1 * 4);
 }
 return uVar1;
}



/* Function: static_local @ 00011348 */

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



/* Function: call_static_func @ 00011378 */

uint call_static_func(int param_1)

{
 return param_1 << 1 | 1;
}



/* Function: access_extern_global @ 00011384 */

int access_extern_global(void)

{
 return extern_global_var + 100;
}



/* Function: call_extern_func @ 0001139c */

void call_extern_func(void)

{
 local_extern_function(5);
 return;
}



/* Function: read_const_data @ 000113b0 */

int read_const_data(void)

{
 return *(byte *)(const_string + 4) + 0x2a;
}



/* Function: access_bss_var @ 000113c8 */

undefined4 access_bss_var(void)

{
 return 0;
}



/* Function: access_bss_buffer @ 000113d0 */

undefined4 access_bss_buffer(void)

{
 return 0;
}



/* Function: global_struct_access @ 000113d8 */

undefined4 global_struct_access(void)

{
 return 0x1e;
}



/* Function: set_file_static @ 000113e0 */

void set_file_static(undefined4 param_1)

{
 file_scope_static = param_1;
 return;
}



/* Function: get_file_static @ 000113f4 */

undefined4 get_file_static(void)

{
 return file_scope_static;
}



/* Function: set_global_callback @ 00011404 */

void set_global_callback(undefined4 param_1)

{
 global_func_ptr = param_1;
 return;
}



/* Function: call_global_callback @ 00011418 */

void call_global_callback(undefined4 param_1)

{
 if (global_func_ptr != (code *)0x0) {
 (*global_func_ptr)(param_1);
 return;
 }
 return;
}



/* Function: global_heap_store @ 00011448 */

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



/* Function: static_complex_init @ 00011468 */

undefined4 static_complex_init(void)

{
 return 0xf;
}



/* Function: tls_access @ 00011470 */

int tls_access(int param_1)

{
 return param_1 << 1;
}



/* Function: init_order_test @ 00011478 */

undefined4 init_order_test(void)

{
 return 0x14;
}



/* Function: test_static_global @ 00011480 */

static void test_static_global(void)

{
 undefined4 uVar1;
 undefined4 local_14;
 
 puts(&DAT_00012f9e);
 global_counter = global_counter + 1;
 printf("STM-L1-01 (global_var_access): %d\n",global_counter);
 printf("STM-L1-01 (global_var_read): %d\n",global_counter << 1);
 printf("STM-L1-02 (global_array_access): %d\n",5);
 static_local_counter = 1;
 printf("STM-L1-03 (static_local): %d\n",1);
 static_local_counter = static_local_counter + 1;
 printf("STM-L1-03 (static_local): %d\n",static_local_counter);
 printf("STM-L1-04 (call_static_func): %d\n",0xb);
 printf("STM-L2-01 (access_extern_global): %d\n",extern_global_var + 100);
 uVar1 = local_extern_function(5);
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



/* Function: local_extern_function @ 000116c0 */

static int local_extern_function(int param_1)

{
 return param_1 * 2;
}



/* Function: double_value @ 000116c8 */

int double_value(int param_1)

{
 return param_1 << 1;
}



/* Function: memop_memset @ 000116d0 */

uint memop_memset(byte *param_1,size_t param_2,int param_3,size_t param_4)

{
 if (param_1 != (byte *)0x0) {
 param_4 = param_2;
 }
 if (param_1 != (byte *)0x0 && param_2 != 0) {
 memset(param_1,param_3,param_4);
 return (uint)*param_1;
 }
 return 0xffffffff;
}



/* Function: memop_memcpy @ 00011710 */

undefined4 memop_memcpy(void *param_1,void *param_2,uint param_3)

{
 uint unaff_r4;
 
 if (param_1 != (void *)0x0) {
 if (param_2 != (void *)0x0) {
 unaff_r4 = param_3;
 }
 if (param_2 != (void *)0x0 && param_3 != 0) {
 memcpy(param_1,param_2,unaff_r4);
 return *(undefined4 *)((int)param_1 + ((unaff_r4 & 0xfffffffc) - 4));
 }
 }
 return 0xffffffff;
}



/* Function: memop_memmove @ 0001175c */

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



/* Function: memop_memcmp @ 00011794 */

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



/* Function: memop_bzero @ 000117dc */

uint memop_bzero(byte *param_1,size_t param_2)

{
 if (param_1 != (byte *)0x0) {
 memset(param_1,0,param_2);
 return (uint)*param_1;
 }
 return 0xffffffff;
}



/* Function: memop_bcopy @ 00011808 */

uint memop_bcopy(void *param_1,byte *param_2,size_t param_3)

{
 if ((param_1 != (void *)0x0) && (param_2 != (byte *)0x0 && param_3 != 0)) {
 memmove(param_2,param_1,param_3);
 return (uint)*param_2;
 }
 return 0xffffffff;
}



/* Function: memop_unaligned_access @ 00011848 */

undefined4 memop_unaligned_access(int param_1)

{
 if (param_1 != 0) {
 return *(undefined4 *)(param_1 + 1);
 }
 return 0xffffffff;
}



/* Function: memop_memory_barrier @ 00011874 */

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



/* Function: test_memory_op_functions @ 000118a0 */

static void test_memory_op_functions(void)

{
 int iVar1;
 undefined4 uVar2;
 uint local_14 [2];
 undefined2 local_c;
 
 puts(&DAT_00012fc2);
 printf("MEMOP-L2-01: %d\n",0x41);
 printf("MEMOP-L2-02: %d\n",0x32);
 local_c = 0x646c;
 local_14[1] = 0x726f576f;
 local_14[0] = 0x6c6c6548;
 memmove((void *)((uint)local_14 | 1),local_14,9);
 printf("MEMOP-L2-03: %c\n",local_14[0] >> 8 & 0xff);
 iVar1 = memcmp(&DAT_00013010,&DAT_0001301c,0xc);
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



/* Function: main @ 000119e4 */

undefined4 main(void)

{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}



/* Function: SUB_ffff0fc0 - ARM CAS implementation @ 00011a04 */

static int SUB_ffff0fc0(int param_1, int param_2, int *param_3)

{
 int old_val = *param_3;
 if (old_val == param_1) {
  *param_3 = param_2;
  return 0;
 }
 return 1;
}



/* Function: SUB_ffff0fa0 - ARM memory barrier @ 00011a10 */

static void SUB_ffff0fa0(void)

{
 __sync_synchronize();
 return;
}







/* Function: my_sync_fetch_and_add_4 @ 00011a0c */

int my_sync_fetch_and_add_4(int *param_1,int param_2)

{
 int iVar1;
 int iVar2;
 
 do {
 iVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(iVar2,iVar2 + param_2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}



/* Function: my_sync_fetch_and_sub_4 @ 00011a44 */

int my_sync_fetch_and_sub_4(int *param_1,int param_2)

{
 int iVar1;
 int iVar2;
 
 do {
 iVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(iVar2,iVar2 - param_2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}



/* Function: my_sync_fetch_and_or_4 @ 00011a7c */

uint my_sync_fetch_and_or_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(uVar2,uVar2 | param_2,(int *)param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: my_sync_fetch_and_and_4 @ 00011ab4 */

uint my_sync_fetch_and_and_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(uVar2,uVar2 & param_2,(int *)param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: my_sync_fetch_and_xor_4 @ 00011aec */

uint my_sync_fetch_and_xor_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(uVar2,uVar2 ^ param_2,(int *)param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: my_sync_fetch_and_nand_4 @ 00011b24 */

uint my_sync_fetch_and_nand_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(uVar2,~(uVar2 & param_2),(int *)param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: my_sync_fetch_and_add_2 @ 00011b60 */

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
 iVar3 = ((cas_fn)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ uVar1 + param_2 << iVar4) & 0xffff << iVar4 ^ uVar2,
 (int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}



/* Function: my_sync_fetch_and_sub_2 @ 00011bc0 */

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
 iVar3 = ((cas_fn)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ uVar1 - param_2 << iVar4) & 0xffff << iVar4 ^ uVar2,
 (int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}



/* Function: my_sync_fetch_and_or_2 @ 00011c20 */

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
 iVar3 = ((cas_fn)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ (uVar1 | param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}



/* Function: my_sync_fetch_and_and_2 @ 00011c80 */

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
 iVar3 = ((cas_fn)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ (uVar1 & param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}



/* Function: my_sync_fetch_and_xor_2 @ 00011ce0 */

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
 iVar3 = ((cas_fn)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ (uVar1 ^ param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}



/* Function: my_sync_fetch_and_nand_2 @ 00011d40 */

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
 iVar3 = ((cas_fn)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ ~(uVar1 & param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}



/* Function: my_sync_fetch_and_add_1 @ 00011da4 */

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
 iVar3 = ((cas_fn)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ uVar1 + param_2 << iVar4) & 0xff << iVar4 ^ uVar2,
 (int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}



/* Function: my_sync_fetch_and_sub_1 @ 00011e00 */

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
 iVar3 = ((cas_fn)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ uVar1 - param_2 << iVar4) & 0xff << iVar4 ^ uVar2,
 (int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}



/* Function: my_sync_fetch_and_or_1 @ 00011e5c */

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
 iVar3 = ((cas_fn)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ (uVar1 | param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}



/* Function: my_sync_fetch_and_and_1 @ 00011eb8 */

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
 iVar3 = ((cas_fn)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ (uVar1 & param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}



/* Function: my_sync_fetch_and_xor_1 @ 00011f14 */

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
 iVar3 = ((cas_fn)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ (uVar1 ^ param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}



/* Function: my_sync_fetch_and_nand_1 @ 00011f70 */

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
 iVar3 = ((cas_fn)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ ~(uVar1 & param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}



/* Function: my_sync_add_and_fetch_4 @ 00011fd0 */

int my_sync_add_and_fetch_4(int *param_1,int param_2)

{
 int iVar1;
 int iVar2;
 
 do {
 iVar2 = *param_1 + param_2;
 iVar1 = ((cas_fn)&SUB_ffff0fc0)(*param_1,iVar2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}



/* Function: my_sync_sub_and_fetch_4 @ 00012008 */

int my_sync_sub_and_fetch_4(int *param_1,int param_2)

{
 int iVar1;
 int iVar2;
 
 do {
 iVar2 = *param_1 - param_2;
 iVar1 = ((cas_fn)&SUB_ffff0fc0)(*param_1,iVar2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}



/* Function: my_sync_or_and_fetch_4 @ 00012040 */

uint my_sync_or_and_fetch_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1 | param_2;
 iVar1 = ((cas_fn)&SUB_ffff0fc0)(*param_1,uVar2,(int *)param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: my_sync_and_and_fetch_4 @ 00012078 */

uint my_sync_and_and_fetch_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1 & param_2;
 iVar1 = ((cas_fn)&SUB_ffff0fc0)(*param_1,uVar2,(int *)param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: my_sync_xor_and_fetch_4 @ 000120b0 */

uint my_sync_xor_and_fetch_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1 ^ param_2;
 iVar1 = ((cas_fn)&SUB_ffff0fc0)(*param_1,uVar2,(int *)param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: my_sync_nand_and_fetch_4 @ 000120e8 */

uint my_sync_nand_and_fetch_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = ~(*param_1 & param_2);
 iVar1 = ((cas_fn)&SUB_ffff0fc0)(*param_1,uVar2,(int *)param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: my_sync_add_and_fetch_2 @ 00012124 */

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
 iVar3 = ((cas_fn)&SUB_ffff0fc0)(uVar2,uVar4,(int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: my_sync_sub_and_fetch_2 @ 0001218c */

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
 iVar3 = ((cas_fn)&SUB_ffff0fc0)(uVar2,uVar4,(int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: my_sync_or_and_fetch_2 @ 000121f4 */

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
 iVar3 = ((cas_fn)&SUB_ffff0fc0)(uVar2,uVar4,(int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: my_sync_and_and_fetch_2 @ 0001225c */

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
 iVar3 = ((cas_fn)&SUB_ffff0fc0)(uVar2,uVar4,(int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: my_sync_xor_and_fetch_2 @ 000122c4 */

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
 iVar3 = ((cas_fn)&SUB_ffff0fc0)(uVar2,uVar4,(int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: my_sync_nand_and_fetch_2 @ 0001232c */

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
 iVar3 = ((cas_fn)&SUB_ffff0fc0)(uVar2,uVar4,(int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: my_sync_add_and_fetch_1 @ 00012398 */

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
 iVar3 = ((cas_fn)&SUB_ffff0fc0)(uVar2,uVar4,(int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: my_sync_sub_and_fetch_1 @ 000123fc */

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
 iVar3 = ((cas_fn)&SUB_ffff0fc0)(uVar2,uVar4,(int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: my_sync_or_and_fetch_1 @ 00012460 */

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
 iVar3 = ((cas_fn)&SUB_ffff0fc0)(uVar2,uVar4,(int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: my_sync_and_and_fetch_1 @ 000124c4 */

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
 iVar3 = ((cas_fn)&SUB_ffff0fc0)(uVar2,uVar4,(int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: my_sync_xor_and_fetch_1 @ 00012528 */

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
 iVar3 = ((cas_fn)&SUB_ffff0fc0)(uVar2,uVar4,(int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: my_sync_nand_and_fetch_1 @ 0001258c */

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
 iVar3 = ((cas_fn)&SUB_ffff0fc0)(uVar2,uVar4,(int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: my_sync_val_compare_and_swap_4 @ 000125f4 */

int my_sync_val_compare_and_swap_4(int *param_1,int param_2,undefined4 param_3)

{
 int iVar1;
 
 do {
 if (*param_1 != param_2) {
 return *param_1;
 }
 iVar1 = ((cas_fn)&SUB_ffff0fc0)(param_2,param_3,param_1);
 } while (iVar1 != 0);
 return param_2;
}



/* Function: my_sync_val_compare_and_swap_2 @ 00012644 */

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
 iVar3 = ((cas_fn)&SUB_ffff0fc0)
 (uVar2,(param_3 << iVar4 ^ uVar2) & 0xffff << iVar4 ^ uVar2,
 (int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return param_2;
}



/* Function: my_sync_val_compare_and_swap_1 @ 000126bc */

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
 iVar3 = ((cas_fn)&SUB_ffff0fc0)
 (uVar2,(param_3 << iVar4 ^ uVar2) & 0xff << iVar4 ^ uVar2,
 (int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return param_2;
}



/* Function: my_sync_bool_compare_and_swap_4 @ 00012730 */

bool my_sync_bool_compare_and_swap_4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
 int iVar1;
 
 iVar1 = ((cas_fn)&SUB_ffff0fc0)(param_2,param_3,(int *)param_1);
 return iVar1 == 0;
}



/* Function: my_sync_bool_compare_and_swap_2 @ 0001275c */

bool my_sync_bool_compare_and_swap_2(uint *param_1,uint param_2,uint param_3)

{
 int iVar1;
 
 iVar1 = my_sync_val_compare_and_swap_2((uint)param_1,param_2,(int)param_3);
 return param_2 == iVar1;
}



/* Function: my_sync_bool_compare_and_swap_1 @ 00012778 */

bool my_sync_bool_compare_and_swap_1(uint *param_1,uint param_2,uint param_3)

{
 int iVar1;
 
 iVar1 = my_sync_val_compare_and_swap_1((uint)param_1,param_2,(int)param_3);
 return param_2 == iVar1;
}



/* Function: my_sync_lock_test_and_set_4 @ 000127a0 */

undefined4 my_sync_lock_test_and_set_4(undefined4 *param_1,undefined4 param_2)

{
 int iVar1;
 undefined4 uVar2;
 
 do {
 uVar2 = *param_1;
 iVar1 = ((cas_fn)&SUB_ffff0fc0)(uVar2,param_2,(int *)param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: my_sync_lock_test_and_set_2 @ 000127d8 */

int my_sync_lock_test_and_set_2(uint param_1,int param_2)

{
 int iVar1;
 uint uVar2;
 int iVar3;
 
 iVar3 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 iVar1 = ((cas_fn)&SUB_ffff0fc0)
 (uVar2,(param_2 << iVar3 ^ uVar2) & 0xffff << iVar3 ^ uVar2,
 (int *)(param_1 & 0xfffffffc));
 } while (iVar1 != 0);
 return (int)(short)((0xffff << iVar3 & uVar2) >> iVar3);
}



/* Function: my_sync_lock_test_and_set_1 @ 00012838 */

int my_sync_lock_test_and_set_1(uint param_1,int param_2)

{
 int iVar1;
 uint uVar2;
 int iVar3;
 
 iVar3 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 iVar1 = ((cas_fn)&SUB_ffff0fc0)
 (uVar2,(param_2 << iVar3 ^ uVar2) & 0xff << iVar3 ^ uVar2,
 (int *)(param_1 & 0xfffffffc));
 } while (iVar1 != 0);
 return (int)(char)((0xff << iVar3 & uVar2) >> iVar3);
}



/* Function: my_sync_lock_release_8 @ 00012894 */

void my_sync_lock_release_8(undefined4 *param_1)

{
 ((barrier_fn)&SUB_ffff0fa0)();
 *param_1 = 0;
 param_1[1] = 0;
 return;
}



/* Function: my_sync_lock_release_4 @ 000128b8 */

void my_sync_lock_release_4(undefined4 *param_1)

{
 ((barrier_fn)&SUB_ffff0fa0)();
 *param_1 = 0;
 return;
}



/* Function: my_sync_lock_release_2 @ 000128d8 */

void my_sync_lock_release_2(undefined2 *param_1)

{
 ((barrier_fn)&SUB_ffff0fa0)();
 *param_1 = 0;
 return;
}



/* Function: my_sync_lock_release_1 @ 000128f8 */

void my_sync_lock_release_1(undefined1 *param_1)

{
 ((barrier_fn)&SUB_ffff0fa0)();
 *param_1 = 0;
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 112 */
