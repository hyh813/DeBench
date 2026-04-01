/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdarg.h>

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
/* typedef long long int64_t; */ /* Already defined in stdint.h */
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Additional type definitions for decompiled code */
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned long ulong;
typedef unsigned char byte;
typedef unsigned int uint;
typedef int __pid_t;
typedef void (*code)(void);
typedef unsigned char undefined;

/* Stub for DataMemoryBarrier - ARM memory barrier intrinsic */
static void DataMemoryBarrier(int param_1, int param_2) {
    /* No-op stub for compilation */
    (void)param_1;
    (void)param_2;
}

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/3/3_gcc_O2_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */

/* Global variable declarations */
long ___stack_chk_guard = 0;
int global_counter = 0;
int global_array[10] = {0};
int counter_1 = 0;
int extern_global_var = 42;
const char const_string[] = "Hello";
int file_scope_static = 0;
void (*global_func_ptr)(void) = 0;
int completed_0 = 0;

/* Define the string data */
static const char DAT_00101fa8[] = "=== Stack Memory Tests ===";
static const char DAT_00102118[] = "=== Heap Memory Tests ===";
static const char DAT_001022e8[] = "fork failed";
static const char DAT_00102278[] = "child exited with status %d";
static const char DAT_001022a0[] = "child terminated by signal";
static const char DAT_00102268[] = "dangling value: %d";
static const char DAT_00102318[] = "=== Static/Global Memory Tests ===";
static const char DAT_001025c8[] = "=== Memory Operation Tests ===";

/* Forward declarations */
static void test_stack_memory(void);
static void test_heap_memory(void);
static void test_static_global(void);
static void test_memory_op_functions(void);
static undefined4 linked_list_heap(void);
static undefined4 tree_heap_traversal(void);
static undefined4 dangling_pointer(void);
static int double_value(int param_1);
static int local_vars(int param_1);
static void local_array(int param_1);
static int local_struct(int param_1);
static void address_of_local(undefined4 *param_1);
static int address_of_array(int *param_1);
static void large_stack_frame(void);
static void vla_stack(ulong param_1);
static void alloca_usage(ulong param_1);
static undefined8 stack_alias(void);
static undefined4 heap_basic(ulong param_1);
static int heap_calloc(int param_1);
static undefined4 heap_realloc(void);
static int heap_array(ulong param_1);
static int heap_struct(int param_1);
static void global_var_access(void);
static int global_var_read(void);
static undefined4 global_array_access(uint param_1);
static void static_local(int param_1);
static int call_static_func(int param_1);
static int access_extern_global(void);
static void call_extern_func(void);
static int read_const_data(void);
static undefined8 access_bss_var(void);
static undefined8 access_bss_buffer(void);
static undefined8 global_struct_access(void);
static void set_file_static(undefined4 param_1);
static undefined4 get_file_static(void);
static void set_global_callback(undefined8 param_1);
static undefined8 call_global_callback(void);
static undefined4 global_heap_store(undefined4 *param_1);
static undefined8 static_complex_init(void);
static int tls_access(int param_1);
static undefined8 init_order_test(void);
static ulong memop_memset(byte *param_1,size_t param_2,int param_3);
static undefined4 memop_memcpy(void *param_1,void *param_2,size_t param_3);
static ulong memop_memmove(void *param_1,ulong param_2);
static int memop_memcmp(void *param_1,void *param_2,size_t param_3);
static ulong memop_bzero(byte *param_1,size_t param_2);
static ulong memop_bcopy(void *param_1,void *param_2,size_t param_3);
static undefined4 memop_unaligned_access(long param_1);
static int memop_memory_barrier(int *param_1);
/* CRT functions - declared but not defined in user code */
/* void __cxa_finalize(void *); */
/* static void deregister_tm_clones(void); */

/* Stub implementations for stack check and printf_chk */
static void __stack_chk_fail(void) {
    /* Stack smashing detected - abort */
    _exit(1);
}

static int __printf_chk(int flag, const char *format, ...) {
    va_list args;
    int result;
    va_start(args, format);
    result = vprintf(format, args);
    va_end(args);
    return result;
}



/* deregister_tm_clones removed - CRT function */

/* Stub implementations for referenced functions */
static int extern_function(int param_1) {
    return param_1 * 2;
}

static undefined4 linked_list_heap(void) {
    return 0;
}

static undefined4 tree_heap_traversal(void) {
    return 0;
}

static undefined4 dangling_pointer(void) {
    return 0;
}





/* Function: main @ 00100b00 */

int main(void)

{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */











/* CRT stub function register_tm_clones removed by preprocessor */









/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: double_value @ 00100c60 */

static int double_value(int param_1);

static int double_value(int param_1)

{
 return param_1 << 1;
}



/* Function: local_vars @ 00100c70 */

static int local_vars(int param_1);

static int local_vars(int param_1)

{
 return param_1 * 2 + 10;
}







/* Function: local_array @ 00100c80 */

/* WARNING: Removing unreachable block (ram,0x00100ce0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

static void local_array(int param_1);

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



/* Function: local_struct @ 00100ce4 */

static int local_struct(int param_1);

static int local_struct(int param_1)

{
 return param_1 * 3;
}



/* Function: address_of_local @ 00100cf0 */

static void address_of_local(undefined4 *param_1);

static void address_of_local(undefined4 *param_1)

{
 *param_1 = 0x2a;
 return;
}



/* Function: address_of_array @ 00100d00 */

static int address_of_array(int *param_1);

static int address_of_array(int *param_1)

{
 return *param_1 << 1;
}



/* Function: large_stack_frame @ 00100d10 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

static void large_stack_frame(void);

static void large_stack_frame(void)

{
 int iVar1;
 undefined1 *puVar2;
 undefined1 auStack_808 [1024];
 undefined1 local_408;
 long local_8;
 
 iVar1 = 0;
 local_8 = ___stack_chk_guard;
 puVar2 = auStack_808;
 do {
 *puVar2 = (char)iVar1;
 iVar1 = iVar1 + 1;
 puVar2 = puVar2 + 1;
 } while (iVar1 != 0x800);
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: vla_stack @ 00100d80 */

/* WARNING: Removing unreachable block (ram,0x00100e4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

static void vla_stack(ulong param_1);

static void vla_stack(ulong param_1)

{
 long lVar1;
 undefined1 *puVar2;
 undefined1 *puVar3;
 ulong uVar5;
 long lVar6;
 undefined1 auStack_30 [16];
 undefined1 *puVar4;
 
 puVar3 = auStack_30;
 puVar4 = auStack_30;
 if ((int)param_1 - 1U < 1000) {
 uVar5 = (-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2) + 0xf;
 puVar2 = auStack_30;
 while (puVar4 != auStack_30 + -(uVar5 & 0xffffffffffff0000)) {
 puVar3 = puVar2 + -0x10000;
 *(undefined8 *)(puVar2 + -0xfc00) = 0;
 puVar4 = puVar2 + -0x10000;
 puVar2 = puVar2 + -0x10000;
 }
 uVar5 = uVar5 & 0xfff0;
 lVar1 = -uVar5;
 *(undefined8 *)(puVar3 + lVar1) = 0;
 if (0x3ff < uVar5) {
 *(undefined8 *)(puVar3 + lVar1 + 0x400) = 0;
 }
 lVar6 = 0;
 do {
 *(int *)(puVar3 + lVar6 * 4 + lVar1 + 0x10) = (int)lVar6 << 1;
 lVar6 = lVar6 + 1;
 } while ((int)lVar6 < (int)param_1);
 }
 return;
}



/* Function: alloca_usage @ 00100e50 */

/* WARNING: Removing unreachable block (ram,0x00100f18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

static void alloca_usage(ulong param_1);

static void alloca_usage(ulong param_1)

{
 long lVar1;
 undefined1 *puVar2;
 undefined1 *puVar3;
 int iVar5;
 ulong uVar6;
 int *piVar7;
 undefined1 auStack_30 [16];
 undefined1 *puVar4;
 
 puVar3 = auStack_30;
 puVar4 = auStack_30;
 if (0 < (int)param_1) {
 uVar6 = (-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2) + 0xf;
 puVar2 = auStack_30;
 while (puVar4 != auStack_30 + -(uVar6 & 0xffffffffffff0000)) {
 puVar3 = puVar2 + -0x10000;
 *(undefined8 *)(puVar2 + -0xfc00) = 0;
 puVar4 = puVar2 + -0x10000;
 puVar2 = puVar2 + -0x10000;
 }
 uVar6 = uVar6 & 0xfff0;
 lVar1 = -uVar6;
 *(undefined8 *)(puVar3 + lVar1) = 0;
 if (0x3ff < uVar6) {
 *(undefined8 *)(puVar3 + lVar1 + 0x400) = 0;
 }
 iVar5 = 0;
 piVar7 = (int *)(puVar3 + lVar1 + 0x10);
 do {
 *piVar7 = iVar5;
 iVar5 = iVar5 + 3;
 piVar7 = piVar7 + 1;
 } while (iVar5 != (int)param_1 * 3);
 }
 return;
}



/* Function: stack_alias @ 00100f20 */

static undefined8 stack_alias(void);

static undefined8 stack_alias(void)

{
 return 0x14;
}



/* Function: test_stack_memory @ 00100f30 */

static void test_stack_memory(void)

{
 undefined4 uVar1;
 
 puts(DAT_00101fa8);
 __printf_chk(1,"MEM-L1-01 (local_vars): %d\n",0x14);
 __printf_chk(1,"MEM-L1-02 (local_array): %d\n",10);
 __printf_chk(1,"MEM-L1-03 (local_struct): %d\n",0xf);
 __printf_chk(1,"MEM-L1-04 (address_of_local): %d\n",0x2a);
 __printf_chk(1,"MEM-L1-05 (address_of_array): %d\n",2);
 large_stack_frame();
 __printf_chk(1,"MEM-L2-01 (large_stack_frame): %d\n",0);
 __printf_chk(1,"MEM-L2-02 (vla_stack): %d\n",10);
 alloca_usage(10);
 __printf_chk(1,"MEM-L2-03 (alloca_usage): %d\n",0);
 __printf_chk(1,"MEM-L2-04 (stack_alias): %d\n",0x14);
 return;
}



/* Function: heap_basic @ 00101010 */

static undefined4 heap_basic(ulong param_1);

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



/* Function: heap_calloc @ 00101074 */

static int heap_calloc(int param_1);

static int heap_calloc(int param_1)

{
 long lVar1;
 void *__ptr;
 long lVar2;
 int iVar3;
 
 __ptr = calloc((long)param_1,4);
 if (__ptr == (void *)0x0) {
 iVar3 = -1;
 }
 else {
 if (param_1 < 1) {
 iVar3 = 0;
 }
 else {
 lVar2 = 0;
 iVar3 = 0;
 do {
 lVar1 = lVar2 * 4;
 lVar2 = lVar2 + 1;
 iVar3 = iVar3 + *(int *)((long)__ptr + lVar1);
 } while ((int)lVar2 < param_1);
 }
 free(__ptr);
 }
 return iVar3;
}



/* Function: heap_realloc @ 001010e0 */

static undefined4 heap_realloc(void);

static undefined4 heap_realloc(void)

{
 undefined8 *__ptr;
 void *__ptr_00;
 undefined4 uVar1;
 
 __ptr = malloc(0x14);
 if (__ptr == (undefined8 *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 *__ptr = 0x200000001;
 __ptr[1] = 0x400000003;
 *(undefined4 *)(__ptr + 2) = 5;
 __ptr_00 = realloc(__ptr,0x28);
 if (__ptr_00 == (void *)0x0) {
 uVar1 = 0xfffffffe;
 free(__ptr);
 }
 else {
 uVar1 = 0x32;
 if (*(int *)((long)__ptr_00 + 8) != 3) {
 uVar1 = 0xfffffffd;
 }
 free(__ptr_00);
 }
 }
 return uVar1;
}



/* Function: heap_array @ 00101164 */

static int heap_array(ulong param_1);

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



/* Function: heap_struct @ 001011d0 */

static int heap_struct(int param_1);

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











































/* Function: test_heap_memory @ 00101560 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

static void test_heap_memory(void)

{
 undefined4 uVar1;
 __pid_t __pid;
 void *pvVar2;
 int *piVar3;
 undefined4 *puVar4;
 undefined8 *puVar5;
 long lVar6;
 int *piVar7;
 undefined8 uVar9;
 int iVar10;
 uint local_c;
 long local_8;
 int *piVar8;
 
 local_8 = ___stack_chk_guard;
 puts(DAT_00102118);
 pvVar2 = malloc(0x28);
 if (pvVar2 == (void *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 lVar6 = 0;
 do {
 *(int *)((long)pvVar2 + lVar6 * 4) = (int)lVar6 << 1;
 lVar6 = lVar6 + 1;
 } while (lVar6 != 10);
 uVar1 = *(undefined4 *)((long)pvVar2 + 0x14);
 free(pvVar2);
 }
 __printf_chk(1,"HEAP-L2-01 (heap_basic): %d\n",uVar1);
 piVar3 = calloc(5,4);
 if (piVar3 == (int *)0x0) {
 iVar10 = -1;
 }
 else {
 iVar10 = 0;
 piVar7 = piVar3;
 do {
 piVar8 = piVar7 + 1;
 iVar10 = iVar10 + *piVar7;
 piVar7 = piVar8;
 } while (piVar3 + 5 != piVar8);
 free(piVar3);
 }
 __printf_chk(1,"HEAP-L2-02 (heap_calloc): %d\n",iVar10);
 uVar1 = heap_realloc();
 __printf_chk(1,"HEAP-L2-03 (heap_realloc): %d\n",uVar1);
 piVar3 = malloc(0x28);
 if (piVar3 == (int *)0x0) {
 iVar10 = -1;
 }
 else {
 iVar10 = 0;
 piVar7 = piVar3;
 do {
 *piVar7 = iVar10;
 iVar10 = iVar10 + 3;
 piVar7 = piVar7 + 1;
 } while (iVar10 != 0x1e);
 iVar10 = piVar3[5];
 free(piVar3);
 }
 __printf_chk(1,"HEAP-L2-04 (heap_array): %d\n",iVar10);
 pvVar2 = malloc(8);
 if (pvVar2 == (void *)0x0) {
 uVar9 = 0xffffffff;
 }
 else {
 free(pvVar2);
 uVar9 = 0xf;
 }
 __printf_chk(1,"HEAP-L2-05 (heap_struct): %d\n",uVar9);
 pvVar2 = malloc(0x10);
 if (pvVar2 == (void *)0x0) {
 __printf_chk(1,"HEAP-L2-06 (heap_nested): %d\n",0xffffffff);
 }
 else {
 puVar4 = malloc(0x10);
 *(undefined4 **)((long)pvVar2 + 8) = puVar4;
 if (puVar4 == (undefined4 *)0x0) {
 free(pvVar2);
 uVar9 = 0xfffffffe;
 }
 else {
 uVar9 = 0;
 *puVar4 = 0x14;
 *(undefined8 *)(puVar4 + 2) = 0;
 }
 __printf_chk(1,"HEAP-L2-06 (heap_nested): %d\n",uVar9);
 free(*(void **)((long)pvVar2 + 8));
 free(pvVar2);
 }
 uVar1 = linked_list_heap();
 __printf_chk(1,"HEAP-L3-01 (linked_list_heap): %d\n",uVar1);
 uVar1 = tree_heap_traversal();
 __printf_chk(1,"HEAP-L3-02 (tree_heap_traversal): %d\n",uVar1);
 puVar5 = malloc(0x14);
 if (puVar5 == (undefined8 *)0x0) {
 uVar9 = 0xffffffff;
 }
 else {
 uVar9 = 2;
 *puVar5 = 0x100000000;
 puVar5[1] = 0x300000002;
 *(undefined4 *)(puVar5 + 2) = 4;
 }
 __printf_chk(1,"HEAP-L3-03 (memory_leak): %d\n",uVar9);
 __printf_chk(1,"HEAP-L3-04 (dangling_pointer): ");
 uVar1 = dangling_pointer();
 __printf_chk(1,DAT_00102268,uVar1);
 return;
}



/* Function: global_var_access @ 001018c0 */

static void global_var_access(void);

static void global_var_access(void)

{
 global_counter = global_counter + 1;
 return;
}



/* Function: global_var_read @ 001018d4 */

static int global_var_read(void);

static int global_var_read(void)

{
 return global_counter << 1;
}



/* Function: global_array_access @ 001018e4 */

static undefined4 global_array_access(uint param_1);

static undefined4 global_array_access(uint param_1)

{
 if (param_1 < 10) {
 return *(undefined4 *)(&global_array + (long)(int)param_1 * 4);
 }
 return 0xffffffff;
}



/* Function: static_local @ 00101904 */

static void static_local(int param_1);

static void static_local(int param_1)

{
 if (param_1 == 0) {
 counter_1 = counter_1 + 1;
 return;
 }
 counter_1 = 0;
 return;
}



/* Function: call_static_func @ 00101940 */

static int call_static_func(int param_1);

static int call_static_func(int param_1)

{
 return param_1 * 2 + 1;
}



/* Function: access_extern_global @ 00101950 */

static int access_extern_global(void);

static int access_extern_global(void)

{
 return extern_global_var + 100;
}



/* Function: call_extern_func @ 00101964 */

static void call_extern_func(void);

static void call_extern_func(void)

{
 extern_function(5);
 return;
}



/* Function: read_const_data @ 00101970 */

static int read_const_data(void);

static int read_const_data(void)

{
 return (byte)const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 00101984 */

static undefined8 access_bss_var(void);

static undefined8 access_bss_var(void)

{
 return 0;
}



/* Function: access_bss_buffer @ 00101990 */

static undefined8 access_bss_buffer(void);

static undefined8 access_bss_buffer(void)

{
 return 0;
}



/* Function: global_struct_access @ 001019a0 */

static undefined8 global_struct_access(void);

static undefined8 global_struct_access(void)

{
 return 0x1e;
}



/* Function: set_file_static @ 001019b0 */

static void set_file_static(undefined4 param_1);

static void set_file_static(undefined4 param_1)

{
 file_scope_static = param_1;
 return;
}



/* Function: get_file_static @ 001019c0 */

static undefined4 get_file_static(void);

static undefined4 get_file_static(void)

{
 return file_scope_static;
}



/* Function: set_global_callback @ 001019d0 */

static void set_global_callback(undefined8 param_1);

static void set_global_callback(undefined8 param_1)

{
 global_func_ptr = (void (*)(void))param_1;
 return;
}



/* Function: call_global_callback @ 001019e0 */

static undefined8 call_global_callback(void);

static undefined8 call_global_callback(void)

{
 undefined8 uVar1;
 
 if (global_func_ptr != (code *)0x0) {
 /* WARNING: Could not recover jumptable at 0x001019f0. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*global_func_ptr)();
 uVar1 = 0;
 return uVar1;
 }
 return 0xffffffff;
}



/* Function: global_heap_store @ 00101a00 */

static undefined4 global_heap_store(undefined4 *param_1);

static undefined4 global_heap_store(undefined4 *param_1)

{
 if (param_1 != (undefined4 *)0x0) {
 return *param_1;
 }
 return 0xffffffff;
}



/* Function: static_complex_init @ 00101a14 */

static undefined8 static_complex_init(void);

static undefined8 static_complex_init(void)

{
 return 0xf;
}



/* Function: tls_access @ 00101a20 */

static int tls_access(int param_1);

static int tls_access(int param_1)

{
 return param_1 << 1;
}



/* Function: init_order_test @ 00101a30 */

static undefined8 init_order_test(void);

static undefined8 init_order_test(void)

{
 return 0x14;
}



/* Function: test_static_global @ 00101a40 */

static void test_static_global(void)

{
 undefined4 uVar1;
 
 puts(DAT_00102318);
 global_counter = global_counter + 1;
 __printf_chk(1,"STM-L1-01 (global_var_access): %d\n",global_counter);
 __printf_chk(1,"STM-L1-01 (global_var_read): %d\n",global_counter << 1);
 __printf_chk(1,"STM-L1-02 (global_array_access): %d\n",5);
 counter_1 = 1;
 __printf_chk(1,"STM-L1-03 (static_local): %d\n",1);
 counter_1 = counter_1 + 1;
 __printf_chk(1,"STM-L1-03 (static_local): %d\n",counter_1);
 __printf_chk(1,"STM-L1-04 (call_static_func): %d\n",0xb);
 __printf_chk(1,"STM-L2-01 (access_extern_global): %d\n",extern_global_var + 100);
 uVar1 = extern_function(5);
 __printf_chk(1,"STM-L2-02 (call_extern_func): %d\n",uVar1);
 __printf_chk(1,"STM-L2-03 (read_const_data): %d\n",(byte)const_string[4] + 0x2a);
 __printf_chk(1,"STM-L2-04 (access_bss_var): %d\n",0);
 __printf_chk(1,"STM-L2-04 (access_bss_buffer): %d\n",0);
 __printf_chk(1,"STM-L2-05 (global_struct_access): %d\n",0x1e);
 file_scope_static = 0x32;
 __printf_chk(1,"STM-L2-06 (file_static): %d\n",file_scope_static);
 global_func_ptr = (void (*)(void))double_value;
 __printf_chk(1,"STM-L2-07 (global_func_ptr): %d\n",10);
 __printf_chk(1,"STM-L2-08 (global_heap_store): %d\n",100);
 __printf_chk(1,"STM-L2-09 (static_complex_init): %d\n",0xf);
 __printf_chk(1,"STM-L3-01 (tls_access): %d\n",0x14);
 __printf_chk(1,"STM-L3-02 (init_order_test): %d\n",0x14);
 return;
}



/* Function: memop_memset @ 00101c30 */

static ulong memop_memset(byte *param_1,size_t param_2,int param_3);

static ulong memop_memset(byte *param_1,size_t param_2,int param_3)

{
 if (param_1 != (byte *)0x0 && param_2 != 0) {
 memset(param_1,param_3,param_2);
 return (ulong)*param_1;
 }
 return 0xffffffff;
}



/* Function: memop_memcpy @ 00101c74 */

static undefined4 memop_memcpy(void *param_1,void *param_2,size_t param_3);

static undefined4 memop_memcpy(void *param_1,void *param_2,size_t param_3)

{
 if ((param_2 != (void *)0x0 && param_3 != 0) && param_1 != (void *)0x0) {
 memcpy(param_1,param_2,param_3);
 return *(undefined4 *)((long)param_1 + ((param_3 & 0xfffffffffffffffc) - 4));
 }
 return 0xffffffff;
}



/* Function: memop_memmove @ 00101cc0 */

static ulong memop_memmove(void *param_1,ulong param_2);

static ulong memop_memmove(void *param_1,ulong param_2)

{
 if (param_1 != (void *)0x0 && 1 < param_2) {
 memmove((void *)((long)param_1 + 1),param_1,param_2 - 1);
 return (ulong)*(byte *)((long)param_1 + 1);
 }
 return 0xffffffff;
}



/* Function: memop_memcmp @ 00101d04 */

static int memop_memcmp(void *param_1,void *param_2,size_t param_3);

static int memop_memcmp(void *param_1,void *param_2,size_t param_3)

{
 int iVar1;
 int iVar2;
 
 if ((param_2 == (void *)0x0 || param_3 == 0) || param_1 == (void *)0x0) {
 return 0;
 }
 iVar2 = memcmp(param_1,param_2,param_3);
 iVar1 = -(uint)(iVar2 != 0);
 if (0 < iVar2) {
 iVar1 = 1;
 }
 return iVar1;
}



/* Function: memop_bzero @ 00101d40 */

static ulong memop_bzero(byte *param_1,size_t param_2);

static ulong memop_bzero(byte *param_1,size_t param_2)

{
 if (param_1 != (byte *)0x0) {
 memset(param_1,0,param_2);
 return (ulong)*param_1;
 }
 return 0xffffffff;
}



/* Function: memop_bcopy @ 00101d80 */

static ulong memop_bcopy(void *param_1,void *param_2,size_t param_3);

static ulong memop_bcopy(void *param_1,void *param_2,size_t param_3)

{
 byte *pbVar1;
 
 if ((param_2 != (void *)0x0 && param_3 != 0) && param_1 != (void *)0x0) {
 pbVar1 = memmove(param_2,param_1,param_3);
 return (ulong)*pbVar1;
 }
 return 0xffffffff;
}



/* Function: memop_unaligned_access @ 00101dc0 */

static undefined4 memop_unaligned_access(long param_1);

static undefined4 memop_unaligned_access(long param_1)

{
 if (param_1 != 0) {
 return *(undefined4 *)(param_1 + 1);
 }
 return 0xffffffff;
}



/* Function: memop_memory_barrier @ 00101dd4 */

static int memop_memory_barrier(int *param_1);

static int memop_memory_barrier(int *param_1)

{
 if (param_1 != (int *)0x0) {
 DataMemoryBarrier(2,3);
 return *param_1 + *param_1;
 }
 return -1;
}



/* Function: test_memory_op_functions @ 00101df4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

static void test_memory_op_functions(void)

{
 int iVar1;
 int iVar2;
 undefined8 local_148;
 undefined4 local_140;
 undefined8 local_138;
 undefined4 local_130;
 undefined8 local_128;
 undefined2 local_120;
 undefined1 local_118 [7];
 char acStack_111 [9];
 undefined8 local_108;
 undefined2 local_100;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 puts(DAT_001025c8);
 local_108 = 0x4141414141414141;
 local_100 = 0x4141;
 __printf_chk(1,"MEMOP-L2-01: %d\n",0x41);
 __printf_chk(1,"MEMOP-L2-02: %d\n",0x32);
 memcpy(local_118,"HelloWo",7);
 strncpy(acStack_111,"rld",4);
 memmove(local_118 + 1,local_118,9);
 __printf_chk(1,"MEMOP-L2-03: %c\n",0x48);
 local_148 = 0x200000001;
 local_140 = 3;
 local_138 = 0x200000001;
 local_130 = 4;
 iVar2 = memcmp(&local_148,&local_138,0xc);
 iVar1 = -(uint)(iVar2 != 0);
 if (0 < iVar2) {
 iVar1 = 1;
 }
 __printf_chk(1,"MEMOP-L2-04: %d\n",iVar1);
 local_128 = 0;
 local_120 = 0;
 __printf_chk(1,"MEMOP-L2-05: %d\n",0);
 __printf_chk(1,"MEMOP-L2-06: %d\n",1);
 __printf_chk(1,"MEMOP-L3-01: 0x%x\n",0x4030201);
 DataMemoryBarrier(2,3);
 if (local_8 == ___stack_chk_guard) {
 __printf_chk(1,"MEMOP-L3-02: %d\n",10);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}








/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 68 */
