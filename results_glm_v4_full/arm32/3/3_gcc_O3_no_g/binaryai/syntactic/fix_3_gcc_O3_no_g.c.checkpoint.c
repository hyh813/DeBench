/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long uintptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned int uint;
typedef unsigned char byte;
typedef _Bool bool;
typedef int __pid_t;

#define NULL ((void*)0)

/* External atomic operations */

/* External function declaration for extern_function */
extern int extern_function(int param_1);

/* Forward declarations for functions called before definition */
void test_stack_memory(void);
void test_heap_memory(void);
void test_static_global(void);
void test_memory_op_functions(void);

/* Implementations for external functions */
static int SUB_ffff0fc0(int old_val, int new_val, int *ptr) {
    return old_val;
}

static void SUB_ffff0fa0(void) {
}

/* Standard library functions - include headers for proper declarations */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

/* Boolean constants */
#define true 1
#define false 0

/* Global variable declarations */
int global_counter = 0;
static int counter_1 = 0;
int (*global_func_ptr)(void) = NULL;
int extern_global_var = 0;
static const char const_string[5] = "TEST";
static unsigned int file_scope_static = 0;
static char completed_0 = 0;
static unsigned int global_array[10];

/* External data references */
const char DAT_0001297c[] = "Testing Stack Memory";
const char DAT_00012ad8[] = "Testing Heap Memory";
const char DAT_00012c24[] = "%d\n";
const char DAT_00012ca0[] = "fork failed";
const char DAT_00012c34[] = "Child exit status: %d\n";
const char DAT_00012c5c[] = "Child crashed\n";
const char DAT_00012ccc[] = "Testing Static and Global Variables";
const char DAT_00012f50[] = "Testing Memory Operations";

/* Stack variable for _start */
static char *stack0x00000004;

// Decompiled by BinaryAI
// SHA256: eeac87c3c2015be0da019584760d4fe91cbde011117360a87ad2bbf444eb21d7

















/* External function declarations */
extern int __printf_chk(int flag, const char *format, ...);
extern void __stack_chk_fail(void);



















// Function: main @ 0x10684
unsigned int main(void)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}







// Function: double_value @ 0x10798
int double_value(int param_1)
{
 return param_1 << 1;
}

// Function: alloca_usage.constprop.0 @ 0x107a0
unsigned int alloca_usage_constprop_0(void)
{
 return 0xf;
}

// Function: local_vars @ 0x107a8
int local_vars(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: local_array @ 0x107b4
int local_array(int param_1)
{
 return param_1 * 5;
}

// Function: local_struct @ 0x107bc
int local_struct(int param_1)
{
 return param_1 * 3;
}

// Function: address_of_local @ 0x107c4
unsigned int address_of_local(unsigned int *param_1)
{
 *param_1 = 0x2a;
 return 0x2a;
}

// Function: address_of_array @ 0x107d4
int address_of_array(int *param_1)
{
 return *param_1 << 1;
}

// Function: large_stack_frame @ 0x107e0
unsigned int large_stack_frame(void)
{
 char cVar1;
 char *pcVar2;
 char cStack_80d;
 char local_80c [2060];
 cVar1 = '\0';
 pcVar2 = &cStack_80d;
 do {
 pcVar2 = pcVar2 + 1;
 *pcVar2 = cVar1;
 cVar1 = cVar1 + '\x01';
 } while (pcVar2 != local_80c + 0x7ff);
 return 0;
}

// Function: vla_stack @ 0x10850
void vla_stack(int param_1,int param_2)
{
 int iVar1;
 unsigned int uVar2;
 int *piVar3;
 int iVar4;
 int aiStack_14 [3];
 aiStack_14[2] = 0;
 if (param_1 - 1U < 1000) {
 iVar1 = -(param_1 * 4 + 7U & 0xfffffff8);
 iVar4 = 0;
 param_2 = param_1 * 2;
 piVar3 = (int *)((int)aiStack_14 + iVar1);
 do {
 piVar3 = piVar3 + 1;
 *piVar3 = iVar4;
 iVar4 = iVar4 + 2;
 } while (iVar4 != param_2);
 uVar2 = *(unsigned int *)((int)aiStack_14 + (param_1 >> 1) * 4 + iVar1 + 4);
 }
 else {
 uVar2 = 0xffffffff;
 }
 if (aiStack_14[2] == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: alloca_usage @ 0x108e0
void alloca_usage(int param_1,int *param_2)
{
 int iVar1;
 unsigned int uVar2;
 int iVar3;
 int *piVar4;
 int aiStack_14 [3];
 aiStack_14[2] = 0;
 if (param_1 < 1) {
 uVar2 = 0xffffffff;
 }
 else {
 iVar1 = -(param_1 * 4 + 7U & 0xfffffff8);
 iVar3 = 0;
 piVar4 = (int *)((int)aiStack_14 + iVar1);
 param_2 = (int *)((int)aiStack_14 + param_1 * 4 + iVar1);
 do {
 piVar4 = piVar4 + 1;
 *piVar4 = iVar3;
 iVar3 = iVar3 + 3;
 } while (piVar4 != param_2);
 uVar2 = *(unsigned int *)((int)aiStack_14 + (param_1 >> 1) * 4 + iVar1 + 4);
 }
 if (aiStack_14[2] == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: stack_alias @ 0x10970
unsigned int stack_alias(void)
{
 return 0x14;
}

// Function: test_stack_memory @ 0x10978
void test_stack_memory(void)
{
 unsigned int uVar1;
 puts(&DAT_0001297c);
 __printf_chk(1,"MEM-L1-01 (local_vars): %d\n",0x14);
 __printf_chk(1,"MEM-L1-02 (local_array): %d\n",10);
 __printf_chk(1,"MEM-L1-03 (local_struct): %d\n",0xf);
 __printf_chk(1,"MEM-L1-04 (address_of_local): %d\n",0x2a);
 __printf_chk(1,"MEM-L1-05 (address_of_array): %d\n",2);
 uVar1 = large_stack_frame();
 __printf_chk(1,"MEM-L2-01 (large_stack_frame): %d\n",uVar1);
 __printf_chk(1,"MEM-L2-02 (vla_stack): %d\n",10);
 uVar1 = alloca_usage_constprop_0();
 __printf_chk(1,"MEM-L2-03 (alloca_usage): %d\n",uVar1);
 __printf_chk(1,"MEM-L2-04 (stack_alias): %d\n",0x14);
 return;
}

// Function: heap_basic @ 0x10a48
unsigned int heap_basic(int param_1)
{
 void *__ptr;
 int *piVar1;
 int iVar2;
 unsigned int uVar3;
 __ptr = malloc(param_1 << 2);
 if (__ptr == (void *)0x0) {
 uVar3 = 0xffffffff;
 }
 else {
 if (0 < param_1) {
 iVar2 = 0;
 piVar1 = (int *)((int)__ptr + -4);
 do {
 piVar1 = piVar1 + 1;
 *piVar1 = iVar2;
 iVar2 = iVar2 + 2;
 } while (iVar2 != param_1 * 2);
 }
 uVar3 = *(unsigned int *)((int)__ptr + (param_1 / 2) * 4);
 free(__ptr);
 }
 return uVar3;
}

// Function: heap_calloc @ 0x10aa4
int heap_calloc(size_t param_1)
{
 void *__ptr;
 int *piVar1;
 int iVar2;
 __ptr = calloc(param_1,4);
 if (__ptr == (void *)0x0) {
 iVar2 = -1;
 }
 else {
 iVar2 = 0;
 if (0 < (int)param_1) {
 piVar1 = (int *)((int)__ptr + -4);
 do {
 piVar1 = piVar1 + 1;
 iVar2 = iVar2 + *piVar1;
 } while ((int *)((int)__ptr + param_1 * 4 + -4) != piVar1);
 }
 free(__ptr);
 }
 return iVar2;
}

// Function: heap_realloc @ 0x10af8
unsigned int heap_realloc(void)
{
 unsigned int *__ptr;
 void *__ptr_00;
 unsigned int uVar1;
 __ptr = (unsigned int *)malloc(0x14);
 if (__ptr == (unsigned int *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 __ptr[4] = 5;
 __ptr[2] = 3;
 __ptr[3] = 4;
 *__ptr = 1;
 __ptr[1] = 2;
 __ptr_00 = realloc(__ptr,0x28);
 if (__ptr_00 == (void *)0x0) {
 free(__ptr);
 uVar1 = 0xfffffffe;
 }
 else {
 if (*(int *)((int)__ptr_00 + 8) == 3) {
 uVar1 = 0x32;
 }
 else {
 uVar1 = 0xfffffffd;
 }
 free(__ptr_00);
 }
 }
 return uVar1;
}

// Function: heap_array @ 0x10b74
unsigned int heap_array(int param_1)
{
 void *__ptr;
 int iVar1;
 int *piVar2;
 unsigned int uVar3;
 __ptr = malloc(param_1 * 4);
 if (__ptr == (void *)0x0) {
 uVar3 = 0xffffffff;
 }
 else {
 if (0 < param_1) {
 iVar1 = 0;
 piVar2 = (int *)((int)__ptr + -4);
 do {
 piVar2 = piVar2 + 1;
 *piVar2 = iVar1;
 iVar1 = iVar1 + 3;
 } while (piVar2 != (int *)((int)__ptr + (param_1 * 4 - 4U)));
 }
 uVar3 = *(unsigned int *)((int)__ptr + (param_1 / 2) * 4);
 free(__ptr);
 }
 return uVar3;
}

// Function: heap_struct @ 0x10bd8
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

// Function: heap_nested @ 0x10c08
unsigned int heap_nested(unsigned int *param_1)
{
 unsigned int *__ptr;
 unsigned int *puVar1;
 __ptr = (unsigned int *)malloc(8);
 *param_1 = __ptr;
 if (__ptr == (unsigned int *)0x0) {
 return 0xffffffff;
 }
 *__ptr = 10;
 puVar1 = (unsigned int *)malloc(8);
 __ptr[1] = puVar1;
 if (puVar1 != (unsigned int *)0x0) {
 *puVar1 = 0x14;
 puVar1[1] = 0;
 return 0;
 }
 free(__ptr);
 return 0xfffffffe;
}

// Function: linked_list_heap @ 0x10c74
int linked_list_heap(void)
{
 int *piVar1;
 int *piVar2;
 int iVar3;
 int *__ptr;
 int *piVar4;
 int iVar5;
 piVar1 = (int *)malloc(8);
 iVar5 = 0;
 __ptr = (int *)0x0;
 piVar4 = (int *)0x0;
 while( true ) {
 if (piVar1 == (int *)0x0) {
 while (__ptr != (int *)0x0) {
 piVar4 = (int *)__ptr[1];
 free(__ptr);
 __ptr = piVar4;
 }
 return -1;
 }
 *piVar1 = iVar5;
 piVar1[1] = 0;
 iVar5 = iVar5 + 10;
 piVar2 = piVar1;
 if (__ptr != (int *)0x0) {
 piVar4[1] = (int)piVar1;
 piVar2 = __ptr;
 }
 __ptr = piVar2;
 if (iVar5 == 0x32) break;
 piVar2 = (int *)malloc(8);
 piVar4 = piVar1;
 piVar1 = piVar2;
 }
 iVar5 = 0;
 piVar4 = __ptr;
 do {
 iVar3 = *piVar4;
 piVar4 = (int *)piVar4[1];
 iVar5 = iVar5 + iVar3;
 } while (piVar4 != (int *)0x0);
 do {
 piVar4 = (int *)__ptr[1];
 free(__ptr);
 __ptr = piVar4;
 } while (piVar4 != (int *)0x0);
 return iVar5;
}

// Function: create_tree_node @ 0x10d2c
void create_tree_node(unsigned int param_1)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)malloc(0xc);
 if (puVar1 != (unsigned int *)0x0) {
 *puVar1 = param_1;
 puVar1[1] = 0;
 puVar1[2] = 0;
 }
 return;
}

// Function: tree_heap_traversal @ 0x10d54
unsigned int tree_heap_traversal(void)
{
 void *__ptr;
 void *pvVar1;
 void *__ptr_00;
 __ptr = malloc(0xc);
 if (__ptr == (void *)0x0) {
 return 0xffffffff;
 }
 pvVar1 = malloc(0xc);
 if (pvVar1 == (void *)0x0) {
 pvVar1 = malloc(0xc);
 if (pvVar1 != (void *)0x0) {
 free(pvVar1);
 }
 }
 else {
 __ptr_00 = malloc(0xc);
 if (__ptr_00 != (void *)0x0) {
 free(pvVar1);
 free(__ptr_00);
 free(__ptr);
 return 0x3c;
 }
 free(pvVar1);
 }
 free(__ptr);
 return 0xfffffffe;
}

// Function: memory_leak @ 0x10ddc
unsigned int memory_leak(int param_1)
{
 void *pvVar1;
 int *piVar2;
 int iVar3;
 pvVar1 = malloc(param_1 << 2);
 if (pvVar1 != (void *)0x0) {
 if (0 < param_1) {
 iVar3 = 0;
 piVar2 = (int *)((int)pvVar1 + -4);
 do {
 piVar2 = piVar2 + 1;
 *piVar2 = iVar3;
 iVar3 = iVar3 + 1;
 } while (param_1 != iVar3);
 }
 return *(unsigned int *)((int)pvVar1 + (param_1 / 2) * 4);
 }
 return 0xffffffff;
}

// Function: dangling_pointer @ 0x10e2c
unsigned int dangling_pointer(void)
{
 unsigned int *__ptr;
 __ptr = (unsigned int *)malloc(4);
 if (__ptr != (unsigned int *)0x0) {
 __printf_chk(1,"value before free: %d\n",0x2a);
 free(__ptr);
 return *__ptr;
 }
 return 0xffffffff;
}

// Function: double_free @ 0x10e6c
unsigned int double_free(unsigned int *param_1)
{
 void *__ptr;
 if (param_1 != (unsigned int *)0x0) {
 return *param_1;
 }
 __ptr = malloc(4);
 if (__ptr != (void *)0x0) {
 free(__ptr);
 free(__ptr);
 return 0xfffffffe;
 }
 return 0xffffffff;
}

// Function: heap_overflow @ 0x10eac
unsigned int heap_overflow(void)
{
 void *__ptr;
 __ptr = malloc(0x28);
 if (__ptr != (void *)0x0) {
 free(__ptr);
 return 0;
 }
 return 0xffffffff;
}

// Function: test_heap_memory @ 0x10ed4
void test_heap_memory(void)
{
 void *pvVar1;
 int *piVar2;
 unsigned int *puVar3;
 int *piVar4;
 int *piVar5;
 __pid_t __pid;
 unsigned int uVar6;
 int iVar7;
 int iVar8;
 int *__ptr;
 uint local_20;
 int local_1c;
 local_1c = 0;
 puts(&DAT_00012ad8);
 pvVar1 = malloc(0x28);
 if (pvVar1 == (void *)0x0) {
 uVar6 = 0xffffffff;
 }
 else {
 *(unsigned int *)((int)pvVar1 + 4) = 2;
 *(unsigned int *)((int)pvVar1 + 8) = 4;
 *(unsigned int *)((int)pvVar1 + 0xc) = 6;
 *(unsigned int *)((int)pvVar1 + 0x10) = 8;
 *(unsigned int *)((int)pvVar1 + 0x18) = 0xc;
 *(unsigned int *)((int)pvVar1 + 0x14) = 10;
 *(unsigned int *)((int)pvVar1 + 0x24) = 0x12;
 *(unsigned int *)((int)pvVar1 + 0x1c) = 0xe;
 *(unsigned int *)((int)pvVar1 + 0x20) = 0x10;
 free(pvVar1);
 uVar6 = 10;
 }
 __printf_chk(1,"HEAP-L2-01 (heap_basic): %d\n",uVar6);
 piVar2 = (int *)calloc(5,4);
 if (piVar2 == (int *)0x0) {
 iVar8 = -1;
 }
 else {
 iVar8 = *piVar2 + piVar2[1] + piVar2[2] + piVar2[3] + piVar2[4];
 free(piVar2);
 }
 __printf_chk(1,"HEAP-L2-02 (heap_calloc): %d\n",iVar8);
 uVar6 = heap_realloc();
 __printf_chk(1,"HEAP-L2-03 (heap_realloc): %d\n",uVar6);
 pvVar1 = malloc(0x28);
 if (pvVar1 == (void *)0x0) {
 uVar6 = 0xffffffff;
 }
 else {
 *(unsigned int *)((int)pvVar1 + 4) = 3;
 *(unsigned int *)((int)pvVar1 + 8) = 6;
 *(unsigned int *)((int)pvVar1 + 0xc) = 9;
 *(unsigned int *)((int)pvVar1 + 0x10) = 0xc;
 *(unsigned int *)((int)pvVar1 + 0x18) = 0x12;
 *(unsigned int *)((int)pvVar1 + 0x14) = 0xf;
 *(unsigned int *)((int)pvVar1 + 0x24) = 0x1b;
 *(unsigned int *)((int)pvVar1 + 0x1c) = 0x15;
 *(unsigned int *)((int)pvVar1 + 0x20) = 0x18;
 free(pvVar1);
 uVar6 = 0xf;
 }
 __printf_chk(1,"HEAP-L2-04 (heap_array): %d\n",uVar6);
 pvVar1 = malloc(8);
 if (pvVar1 == (void *)0x0) {
 uVar6 = 0xffffffff;
 }
 else {
 free(pvVar1);
 uVar6 = 0xf;
 }
 __printf_chk(1,"HEAP-L2-05 (heap_struct): %d\n",uVar6);
 pvVar1 = malloc(8);
 if (pvVar1 == (void *)0x0) {
 __printf_chk(1,"HEAP-L2-06 (heap_nested): %d\n",0xffffffff);
 }
 else {
 puVar3 = (unsigned int *)malloc(8);
 *(unsigned int **)((int)pvVar1 + 4) = puVar3;
 if (puVar3 == (unsigned int *)0x0) {
 free(pvVar1);
 uVar6 = 0xfffffffe;
 }
 else {
 uVar6 = 0;
 *puVar3 = 0x14;
 puVar3[1] = 0;
 }
 __printf_chk(1,"HEAP-L2-06 (heap_nested): %d\n",uVar6);
 free(*(void **)((int)pvVar1 + 4));
 free(pvVar1);
 }
 piVar4 = (int *)malloc(8);
 iVar8 = 0;
 __ptr = (int *)0x0;
 piVar2 = (int *)0x0;
 do {
 if (piVar4 == (int *)0x0) {
 while (__ptr != (int *)0x0) {
 piVar2 = (int *)__ptr[1];
 free(__ptr);
 __ptr = piVar2;
 }
 iVar8 = -1;
LAB_000110fc:
 __printf_chk(1,"HEAP-L3-01 (linked_list_heap): %d\n",iVar8);
 uVar6 = tree_heap_traversal();
 __printf_chk(1,"HEAP-L3-02 (tree_heap_traversal): %d\n",uVar6);
 puVar3 = (unsigned int *)malloc(0x14);
 if (puVar3 == (unsigned int *)0x0) {
 uVar6 = 0xffffffff;
 }
 else {
 puVar3[2] = 2;
 puVar3[3] = 3;
 uVar6 = 2;
 *puVar3 = 0;
 puVar3[1] = 1;
 puVar3[4] = 4;
 }
 __printf_chk(1,"HEAP-L3-03 (memory_leak): %d\n",uVar6);
 __printf_chk(1,"HEAP-L3-04 (dangling_pointer): ");
 __pid = fork();
 if (__pid == 0) {
 puVar3 = (unsigned int *)malloc(4);
 if (puVar3 == (unsigned int *)0x0) {
 uVar6 = 0xffffffff;
 }
 else {
 __printf_chk(1,"value before free: %d\n",0x2a);
 free(puVar3);
 uVar6 = *puVar3;
 }
 __printf_chk(1,&DAT_00012c24,uVar6);
 exit(0);
 }
 if (__pid < 1) {
 if (local_1c == 0) {
 perror(&DAT_00012ca0);
 return;
 }
 }
 else {
 waitpid(__pid,(int *)&local_20,0);
 if ((local_20 & 0x7f) == 0) {
 __printf_chk(1,&DAT_00012c34,(int)local_20 >> 8 & 0xff);
 }
 else if (0x1ffffff < (int)(((local_20 & 0x7f) + 1) * 0x1000000)) {
 __printf_chk(1,&DAT_00012c5c);
 }
 if (local_1c == 0) {
 return;
 }
 }
 __stack_chk_fail();
 }
 *piVar4 = iVar8;
 piVar4[1] = 0;
 iVar8 = iVar8 + 10;
 piVar5 = piVar4;
 if (__ptr != (int *)0x0) {
 piVar2[1] = (int)piVar4;
 piVar5 = __ptr;
 }
 __ptr = piVar5;
 if (iVar8 == 0x32) {
 iVar8 = 0;
 piVar2 = __ptr;
 do {
 iVar7 = *piVar2;
 piVar2 = (int *)piVar2[1];
 iVar8 = iVar8 + iVar7;
 } while (piVar2 != (int *)0x0);
 do {
 piVar2 = (int *)__ptr[1];
 free(__ptr);
 __ptr = piVar2;
 } while (piVar2 != (int *)0x0);
 goto LAB_000110fc;
 }
 piVar5 = (int *)malloc(8);
 piVar2 = piVar4;
 piVar4 = piVar5;
 } while( true );
}

// Function: global_var_access @ 0x11330
void global_var_access(void)
{
 global_counter = global_counter + 1;
 return;
}

// Function: global_var_read @ 0x11348
int global_var_read(void)
{
 return global_counter << 1;
}

// Function: global_array_access @ 0x1135c
unsigned int global_array_access(uint param_1)
{
 unsigned int uVar1;
 if (param_1 < 10) {
 uVar1 = *(unsigned int *)(&global_array + param_1 * 4);
 }
 else {
 uVar1 = 0xffffffff;
 }
 return uVar1;
}

// Function: static_local @ 0x11374
void static_local(int param_1)
{
 if (param_1 == 0) {
 counter_1 = counter_1 + 1;
 }
 else {
 counter_1 = 0;
 }
 return;
}

// Function: call_static_func @ 0x11398
int call_static_func(int param_1)
{
 return param_1 * 2 + 1;
}

// Function: access_extern_global @ 0x113a4
int access_extern_global(void)
{
 return extern_global_var + 100;
}

// Function: call_extern_func @ 0x113b8
void call_extern_func(void)
{
 return;
}

// Function: read_const_data @ 0x113c0
int read_const_data(void)
{
 return *(byte *)(const_string + 4) + 0x2a;
}

// Function: access_bss_var @ 0x113d8
unsigned int access_bss_var(void)
{
 return 0;
}

// Function: access_bss_buffer @ 0x113e0
unsigned int access_bss_buffer(void)
{
 return 0;
}

// Function: global_struct_access @ 0x113e8
unsigned int global_struct_access(void)
{
 return 0x1e;
}

// Function: set_file_static @ 0x113f0
void set_file_static(unsigned int param_1)
{
 file_scope_static = param_1;
 return;
}

// Function: get_file_static @ 0x11400
unsigned int get_file_static(void)
{
 return file_scope_static;
}

// Function: set_global_callback @ 0x11410
void set_global_callback(unsigned int param_1)
{
 global_func_ptr = param_1;
 return;
}

// Function: call_global_callback @ 0x11420
unsigned int call_global_callback(void)
{
 unsigned int uVar1;
 if (global_func_ptr != (void *)0x0) {
 uVar1 = (*global_func_ptr)();
 return uVar1;
 }
 return 0xffffffff;
}

// Function: global_heap_store @ 0x11440
unsigned int global_heap_store(unsigned int *param_1)
{
 unsigned int uVar1;
 if (param_1 == (unsigned int *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 uVar1 = *param_1;
 }
 return uVar1;
}

// Function: static_complex_init @ 0x11450
unsigned int static_complex_init(void)
{
 return 0xf;
}

// Function: tls_access @ 0x11458
int tls_access(int param_1)
{
 return param_1 << 1;
}

// Function: init_order_test @ 0x11460
unsigned int init_order_test(void)
{
 return 0x14;
}

// Function: test_static_global @ 0x11468
void test_static_global(void)
{
 unsigned int uVar1;
 puts(&DAT_00012ccc);
 global_counter = global_counter + 1;
 __printf_chk(1,"STM-L1-01 (global_var_access): %d\n");
 __printf_chk(1,"STM-L1-01 (global_var_read): %d\n",global_counter << 1);
 __printf_chk(1,"STM-L1-02 (global_array_access): %d\n",5);
 counter_1 = 1;
 __printf_chk(1,"STM-L1-03 (static_local): %d\n",1);
 counter_1 = counter_1 + 1;
 __printf_chk(1,"STM-L1-03 (static_local): %d\n");
 __printf_chk(1,"STM-L1-04 (call_static_func): %d\n",0xb);
 __printf_chk(1,"STM-L2-01 (access_extern_global): %d\n",extern_global_var + 100);
 uVar1 = extern_function(5);
 __printf_chk(1,"STM-L2-02 (call_extern_func): %d\n",uVar1);
 __printf_chk(1,"STM-L2-03 (read_const_data): %d\n",*(byte *)(const_string + 4) + 0x2a);
 __printf_chk(1,"STM-L2-04 (access_bss_var): %d\n",0);
 __printf_chk(1,"STM-L2-04 (access_bss_buffer): %d\n",0);
 __printf_chk(1,"STM-L2-05 (global_struct_access): %d\n",0x1e);
 file_scope_static = 0x32;
 __printf_chk(1,"STM-L2-06 (file_static): %d\n");
 global_func_ptr = double_value;
 __printf_chk(1,"STM-L2-07 (global_func_ptr): %d\n",10);
 __printf_chk(1,"STM-L2-08 (global_heap_store): %d\n",100);
 __printf_chk(1,"STM-L2-09 (static_complex_init): %d\n",0xf);
 __printf_chk(1,"STM-L3-01 (tls_access): %d\n",0x14);
 __printf_chk(1,"STM-L3-02 (init_order_test): %d\n",0x14);
 return;
}

// Function: memop_memset @ 0x1163c
uint memop_memset(byte *param_1,size_t param_2,int param_3)
{
 if (param_2 != 0 && param_1 != (byte *)0x0) {
 memset(param_1,param_3,param_2);
 return (uint)*param_1;
 }
 return 0xffffffff;
}

// Function: memop_memcpy @ 0x11670
unsigned int memop_memcpy(void *param_1,void *param_2,size_t param_3)
{
 if (param_1 == (void *)0x0 || (param_3 == 0 || param_2 == (void *)0x0)) {
 return 0xffffffff;
 }
 memcpy(param_1,param_2,param_3);
 return *(unsigned int *)((int)param_1 + ((param_3 & 0xfffffffc) - 4));
}

// Function: memop_memmove @ 0x116b8
uint memop_memmove(void *param_1,int param_2)
{
 if ((param_1 == (void *)0x0 || param_2 != 0) && (param_1 != (void *)0x0 && param_2 != 1)) {
 memmove((void *)((int)param_1 + 1),param_1,param_2 - 1);
 return (uint)*(byte *)((int)param_1 + 1);
 }
 return 0xffffffff;
}

// Function: memop_memcmp @ 0x116f0
unsigned int memop_memcmp(void *param_1,void *param_2,size_t param_3)
{
 int iVar1;
 unsigned int uVar2;
 if (param_1 == (void *)0x0 || (param_3 == 0 || param_2 == (void *)0x0)) {
 return 0;
 }
 iVar1 = memcmp(param_1,param_2,param_3);
 if (iVar1 < 1) {
 if (iVar1 == 0) {
 uVar2 = 0;
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
 }
 return 1;
}

// Function: memop_bzero @ 0x1173c
uint memop_bzero(byte *param_1,size_t param_2)
{
 if (param_1 != (byte *)0x0) {
 memset(param_1,0,param_2);
 return (uint)*param_1;
 }
 return 0xffffffff;
}

// Function: memop_bcopy @ 0x11764
uint memop_bcopy(void *param_1,byte *param_2,size_t param_3)
{
 if (param_1 == (void *)0x0 || (param_3 == 0 || param_2 == (byte *)0x0)) {
 return 0xffffffff;
 }
 memmove(param_2,param_1,param_3);
 return (uint)*param_2;
}

// Function: memop_unaligned_access @ 0x117a8
void memop_unaligned_access(int param_1)
{
 unsigned int local_10;
 int local_c;
 local_c = 0;
 if (param_1 == 0) {
 local_10 = 0xffffffff;
 }
 else {
 memcpy(&local_10,(void *)(param_1 + 1),4);
 }
 if (local_c == 0) {
 return;
 }
}

// Function: memop_memory_barrier @ 0x1180c
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

// Function: test_memory_op_functions @ 0x11834
void test_memory_op_functions(void)
{
 unsigned int uVar1;
 unsigned int local_13c;
 unsigned int uStack_138;
 unsigned int uStack_134;
 unsigned int local_130;
 unsigned int uStack_12c;
 unsigned int uStack_128;
 unsigned int local_124;
 unsigned int local_120;
 unsigned short local_11c;
 unsigned int local_118;
 unsigned int uStack_114;
 unsigned short uStack_110;
 char local_10e;
 unsigned int local_10c;
 unsigned int local_108;
 unsigned short local_104;
 int local_c;
 local_c = 0;
 puts(&DAT_00012f50);
 local_10c = 0x41414141;
 local_108 = 0x41414141;
 local_104 = 0x4141;
 __printf_chk(1,"MEMOP-L2-01: %d\n",0x41);
 __printf_chk(1,"MEMOP-L2-02: %d\n",0x32);
 local_118 = 0x656c6c48;
 uStack_114 = 0x726f576f;
 uStack_110 = 0x646c;
 local_10e = 0;
 memmove((void *)((int)&local_118 + 1),&local_118,9);
 __printf_chk(1,"MEMOP-L2-03: %c\n",0x48);
 local_13c = 1;
 uStack_138 = 2;
 uStack_134 = 3;
 local_130 = 1;
 uStack_12c = 2;
 uStack_128 = 4;
 memcmp(&local_13c,&local_130,0xc);
 __printf_chk(1,"MEMOP-L2-04: %d\n");
 local_124 = 0;
 local_11c = 0;
 local_120 = 0;
 __printf_chk(1,"MEMOP-L2-05: %d\n");
 __printf_chk(1,"MEMOP-L2-06: %d\n");
 __printf_chk(1,"MEMOP-L3-01: 0x%x\n",0x4030201);
 __sync_synchronize();
 if (local_c == 0) {
 __printf_chk(1,"MEMOP-L3-02: %d\n",10);
 return;
 }
 __stack_chk_fail();
}





