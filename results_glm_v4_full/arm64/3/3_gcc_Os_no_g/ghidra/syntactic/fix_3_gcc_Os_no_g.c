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

/* Additional type definitions for Ghidra compatibility */
typedef unsigned int uint;
typedef unsigned long ulong;
typedef uint8_t undefined1;
typedef uint8_t byte;
typedef uint8_t undefined;
typedef uint32_t undefined4;
typedef uint64_t undefined7;
typedef uint64_t undefined8;
typedef int __pid_t;
typedef void (*code)(void);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/3/3_gcc_Os_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_001009b0 @ 001009b0 */

static void FUN_001009b0(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: main @ 00100b00 */

/* Standard library forward declarations */
void __cxa_finalize(void *__dso_handle);
int puts(const char *s);
void *malloc(size_t size);
void free(void *ptr);
void *calloc(size_t nmemb, size_t size);
void *realloc(void *ptr, size_t size);
__pid_t fork(void);
void exit(int status);
void perror(const char *s);
__pid_t waitpid(__pid_t pid, int *wstatus, int options);
void *memset(void *s, int c, size_t n);
void *memcpy(void *dest, const void *src, size_t n);
void *memmove(void *dest, const void *src, size_t n);
char *strncpy(char *dest, const char *src, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
void __stack_chk_fail(void);
void DataMemoryBarrier(int param1, int param2);
int __printf_chk(int flag, const char *format, ...);

/* Forward declarations for test functions */
static void test_stack_memory(void);
static void test_heap_memory(void);
static void test_static_global(void);
static void test_memory_op_functions(void);
int extern_function(int param_1);

/* Forward declarations for other static functions */
static undefined8 stack_alias(void);
static undefined8 access_bss_var(void);
static undefined8 access_bss_buffer(void);
static undefined8 global_struct_access(void);

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





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Global variables */
static int global_counter = 0;
static int extern_global_var = 0;
static int counter_1 = 0;
static int file_scope_static = 0;
static code global_func_ptr = (code)0;
static undefined8 completed_0 = 0;
static byte const_string[10];
static int global_array[10];
static uint DAT_00101d98;
static uint DAT_00101ee1;
static uint DAT_00102039;
static uint DAT_00102049;
static uint DAT_0010206e;
static uint DAT_001020af;
static uint DAT_001020ba;
static uint DAT_0010231c;
extern long __stack_chk_guard;
extern void *__dso_handle;







/* CRT stub function __do_global_dtors_aux removed by preprocessor */




static int double_value(int param_1)

{
 return param_1 << 1;
}

static void double_value_wrapper(void)

{
 (void)double_value(5);
 return;
}



static int local_vars(int param_1)

{
 return param_1 * 2 + 10;
}



static undefined4 local_array(int param_1)

{
 long lVar1;
 int iVar2;
 int local_30 [12];
 
 iVar2 = 0;
 lVar1 = 0;
 do {
 local_30[lVar1] = iVar2;
 lVar1 = lVar1 + 1;
 iVar2 = iVar2 + param_1;
 } while (lVar1 != 10);
 return 0;
}



static int local_struct(int param_1)

{
 return param_1 * 3;
}



static void address_of_local(undefined4 *param_1)

{
 *param_1 = 0x2a;
 return;
}



static int address_of_array(int *param_1)

{
 return *param_1 << 1;
}



static undefined4 large_stack_frame(void)

{
 long lVar1;
 undefined1 auStack_808 [2056];
 
 lVar1 = 0;
 do {
 auStack_808[lVar1] = (char)lVar1;
 lVar1 = lVar1 + 1;
 } while (lVar1 != 0x800);
 return 0;
}



static undefined4 vla_stack(ulong param_1)

{
 long lVar1;
 undefined1 *puVar2;
 ulong uVar3;
 long lVar4;
 undefined1 auStack_30 [16];
 
 puVar2 = auStack_30;
 if ((int)param_1 - 1U < 1000) {
 uVar3 = (-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2) + 0xf;
 for (; puVar2 != auStack_30 + -(uVar3 & 0xffffffffffff0000); puVar2 = puVar2 + -0x10000) {
 *(undefined8 *)(puVar2 + -0xfc00) = 0;
 }
 uVar3 = uVar3 & 0xfff0;
 lVar1 = -uVar3;
 *(undefined8 *)(puVar2 + lVar1) = 0;
 if (0x3ff < uVar3) {
 *(undefined8 *)(puVar2 + lVar1 + 0x400) = 0;
 }
 lVar4 = 0;
 do {
 *(int *)(puVar2 + lVar4 * 4 + lVar1 + 0x10) = (int)lVar4 << 1;
 lVar4 = lVar4 + 1;
 } while ((int)lVar4 < (int)param_1);
 }
 return 0;
}



static undefined4 alloca_usage(ulong param_1)

{
 long lVar1;
 undefined1 *puVar2;
 ulong uVar3;
 long lVar4;
 undefined1 auStack_30 [16];
 
 puVar2 = auStack_30;
 if (0 < (int)param_1) {
 uVar3 = (-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2) + 0xf;
 for (; puVar2 != auStack_30 + -(uVar3 & 0xffffffffffff0000); puVar2 = puVar2 + -0x10000) {
 *(undefined8 *)(puVar2 + -0xfc00) = 0;
 }
 uVar3 = uVar3 & 0xfff0;
 lVar1 = -uVar3;
 *(undefined8 *)(puVar2 + lVar1) = 0;
 if (0x3ff < uVar3) {
 *(undefined8 *)(puVar2 + lVar1 + 0x400) = 0;
 }
 lVar4 = 0;
 do {
 *(int *)(puVar2 + lVar4 * 4 + lVar1 + 0x10) = (int)lVar4 * 3;
 lVar4 = lVar4 + 1;
 } while ((int)lVar4 < (int)param_1);
 }
 return 0;
}



static undefined8 stack_alias(void)

{
 return 0x14;
}



/* Function: test_stack_memory @ 00100ee4 */

static void test_stack_memory(void)

{
 undefined4 uVar1;
 
 puts((const char *)&DAT_00101d98);
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



static undefined4 heap_basic(ulong param_1)

{
 void *__ptr;
 long lVar1;
 undefined4 uVar2;
 
 __ptr = malloc(-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2);
 if (__ptr == (void *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 for (lVar1 = 0; (int)lVar1 < (int)param_1; lVar1 = lVar1 + 1) {
 *(int *)((long)__ptr + lVar1 * 4) = (int)lVar1 << 1;
 }
 uVar2 = *(undefined4 *)((long)__ptr + (long)((int)param_1 / 2) * 4);
 free(__ptr);
 }
 return uVar2;
}



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
 iVar2 = 0;
 for (lVar1 = 0; (int)lVar1 < param_1; lVar1 = lVar1 + 1) {
 iVar2 = iVar2 + *(int *)((long)__ptr + lVar1 * 4);
 }
 free(__ptr);
 }
 return iVar2;
}



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



static undefined4 heap_array(ulong param_1)

{
 void *__ptr;
 long lVar1;
 undefined4 uVar2;
 
 __ptr = malloc(-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2);
 if (__ptr == (void *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 for (lVar1 = 0; (int)lVar1 < (int)param_1; lVar1 = lVar1 + 1) {
 *(int *)((long)__ptr + lVar1 * 4) = (int)lVar1 * 3;
 }
 uVar2 = *(undefined4 *)((long)__ptr + (long)((int)param_1 / 2) * 4);
 free(__ptr);
 }
 return uVar2;
}



static int heap_struct(int param_1)

{
 void *__ptr;
 int iVar1;
 
 __ptr = malloc(8);
 if (__ptr == (void *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = param_1 * 3;
 free(__ptr);
 }
 return iVar1;
}



static undefined8 heap_nested(void **param_1)

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
 *(undefined8 *)(puVar1 + 2) = (undefined8)(uintptr_t)((void *)0);
 uVar2 = 0;
 }
 }
 return uVar2;
}



static int linked_list_heap(void)

{
 int iVar1;
 int *piVar2;
 int *__ptr;
 int *__ptr_00;
 int iVar3;
 int *piVar4;
 
 iVar3 = 0;
 piVar4 = (int *)0x0;
 __ptr = (int *)0x0;
 do {
 piVar2 = malloc(0x10);
 if (piVar2 == (int *)0x0) {
 while (__ptr != (int *)0x0) {
 piVar4 = *(int **)(__ptr + 2);
 free(__ptr);
 __ptr = piVar4;
 }
 return -1;
 }
 *piVar2 = iVar3;
 piVar2[2] = 0;
 piVar2[3] = 0;
 __ptr_00 = piVar2;
 if (__ptr != (int *)0x0) {
 *(int **)(piVar4 + 2) = piVar2;
 __ptr_00 = __ptr;
 }
 iVar3 = iVar3 + 10;
 piVar4 = piVar2;
 __ptr = __ptr_00;
 } while (iVar3 != 0x32);
 iVar3 = 0;
 piVar4 = __ptr_00;
 do {
 iVar1 = *piVar4;
 piVar4 = *(int **)(piVar4 + 2);
 iVar3 = iVar3 + iVar1;
 } while (piVar4 != (int *)0x0);
 do {
 piVar4 = *(int **)(__ptr_00 + 2);
 free(__ptr_00);
 __ptr_00 = piVar4;
 } while (piVar4 != (int *)0x0);
 return iVar3;
}



static void *create_tree_node(undefined4 param_1)

{
 undefined4 *puVar1;
 
 puVar1 = malloc(0x18);
 if (puVar1 != (undefined4 *)0x0) {
 *puVar1 = param_1;
 *(undefined8 *)(puVar1 + 2) = (undefined8)(uintptr_t)((void *)0);
 *(undefined8 *)(puVar1 + 4) = (undefined8)(uintptr_t)((void *)0);
 }
 return puVar1;
}



static int tree_heap_traversal(void)

{
 int iVar1;
 int iVar2;
 int *__ptr;
 undefined8 uVar3;
 int *piVar4;
 int *__ptr_00;
 int iVar5;
 
 __ptr = (int *)create_tree_node(10);
 if (__ptr == (int *)0x0) {
 iVar5 = -1;
 }
 else {
 uVar3 = (undefined8)(uintptr_t)create_tree_node(0x14);
 *(undefined8 *)(__ptr + 2) = uVar3;
 piVar4 = (int *)create_tree_node(0x1e);
 __ptr_00 = *(int **)(__ptr + 2);
 *(int **)(__ptr + 4) = piVar4;
 if (__ptr_00 != (int *)0x0) {
 if (piVar4 != (int *)0x0) {
 iVar5 = *__ptr_00;
 iVar1 = *piVar4;
 iVar2 = *__ptr;
 free(__ptr_00);
 free(*(void **)(__ptr + 4));
 free(__ptr);
 return iVar2 + iVar5 + iVar1;
 }
 free(__ptr_00);
 }
 if (*(void **)(__ptr + 4) != (void *)0x0) {
 free(*(void **)(__ptr + 4));
 }
 iVar5 = -2;
 free(__ptr);
 }
 return iVar5;
}



static undefined4 memory_leak(ulong param_1)

{
 undefined4 uVar1;
 void *pvVar2;
 long lVar3;
 
 pvVar2 = malloc(-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2);
 if (pvVar2 == (void *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 for (lVar3 = 0; (int)lVar3 < (int)param_1; lVar3 = lVar3 + 1) {
 *(int *)((long)pvVar2 + lVar3 * 4) = (int)lVar3;
 }
 uVar1 = *(undefined4 *)((long)pvVar2 + (long)((int)param_1 / 2) * 4);
 }
 return uVar1;
}



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



static undefined4 double_free(undefined4 *param_1)

{
 undefined4 uVar1;
 void *__ptr;
 
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
 return uVar1;
 }
 return *param_1;
}



static undefined4 heap_overflow(void)

{
 undefined4 *__ptr;
 long lVar1;
 undefined4 uVar2;
 
 __ptr = malloc(0x28);
 if (__ptr == (undefined4 *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 lVar1 = 0;
 do {
 __ptr[lVar1] = (int)lVar1 * 100;
 lVar1 = lVar1 + 1;
 } while (lVar1 != 0xb);
 uVar2 = *__ptr;
 free(__ptr);
 }
 return uVar2;
}



/* Function: test_heap_memory @ 001014e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

static void test_heap_memory(void)

{
 undefined4 uVar1;
 __pid_t __pid;
 undefined *puVar2;
 uint uVar3;
 uint local_14;
 void *local_10;
 long local_8;
 
 local_8 = __stack_chk_guard;
 puts((const char *)&DAT_00101ee1);
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
 uVar1 = heap_nested(&local_10);
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
 __printf_chk(1,(const char *)&DAT_00102039,uVar1);
 /* WARNING: Subroutine does not return */
 exit(0);
 }
 if (__pid < 1) {
 perror("wait failed");
 }
 else {
 waitpid(__pid,(int *)&local_14,0);
 uVar3 = local_14 & 0x7f;
 if ((local_14 & 0x7f) == 0) {
 uVar3 = local_14 >> 8 & 0xff;
 puVar2 = (undefined *)&DAT_00102049;
 }
 else {
 if ((int)((long)((ulong)(uVar3 + 1) << 0x38) >> 0x39) < 1) goto LAB_00101680;
 puVar2 = (undefined *)&DAT_0010206e;
 }
 __printf_chk(1,puVar2,uVar3);
 }
LAB_00101680:
 if (local_8 - __stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}



static undefined4 global_var_access(void)

{
 global_counter = global_counter + 1;
 return global_counter;
}



static int global_var_read(void)

{
 return global_counter << 1;
}



static undefined4 global_array_access(uint param_1)

{
 undefined4 uVar1;
 
 if (param_1 < 10) {
 uVar1 = *(undefined4 *)((char *)global_array + (long)(int)param_1 * 4);
 }
 else {
 uVar1 = 0xffffffff;
 }
 return uVar1;
}



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



static int call_static_func(int param_1)

{
 return param_1 * 2 + 1;
}



static int access_extern_global(void)

{
 return extern_global_var + 100;
}



/* Function: call_extern_func @ 00101760 */

static int call_extern_func(void)

{
 return extern_function(5);
}



static int read_const_data(void)

{
 return (byte)const_string[4] + 0x2a;
}



static undefined8 access_bss_var(void)

{
 return 0;
}



static undefined8 access_bss_buffer(void)

{
 return 0;
}



static undefined8 global_struct_access(void)

{
 return 0x1e;
}



static void set_file_static(undefined4 param_1)

{
 file_scope_static = param_1;
 return;
}



static undefined4 get_file_static(void)

{
 return file_scope_static;
}



static void set_global_callback(void (*param_1)(void))

{
 global_func_ptr = param_1;
 return;
}



static undefined8 call_global_callback(void)

{
 
 if (global_func_ptr != (code *)0x0) {
 (*global_func_ptr)();
 return 0;
 }
 return 0xffffffff;
}



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



static undefined8 static_complex_init(void)

{
 return 0xf;
}



static int tls_access(int param_1)

{
 return param_1 << 1;
}



static undefined8 init_order_test(void)

{
 return 0x14;
}



/* Function: test_static_global @ 00101800 */

static void test_static_global(void)

{
 int iVar1;
 undefined4 uVar2;
 
 iVar1 = puts((const char *)&DAT_001020ba);
 uVar2 = global_var_access();
 __printf_chk(1,"STM-L1-01 (global_var_access): %d\n",uVar2);
 __printf_chk(1,"STM-L1-01 (global_var_read): %d\n",global_counter << 1);
 __printf_chk(1,"STM-L1-02 (global_array_access): %d\n",5);
 counter_1 = 1;
 __printf_chk(1,"STM-L1-03 (static_local): %d\n",1);
 counter_1 = counter_1 + 1;
 __printf_chk(1,"STM-L1-03 (static_local): %d\n",counter_1);
 __printf_chk(1,"STM-L1-04 (call_static_func): %d\n",0xb);
 __printf_chk(1,"STM-L2-01 (access_extern_global): %d\n",extern_global_var + 100);
 uVar2 = call_extern_func();
 __printf_chk(1,"STM-L2-02 (call_extern_func): %d\n",uVar2);
 uVar2 = read_const_data();
 __printf_chk(1,"STM-L2-03 (read_const_data): %d\n",uVar2);
 __printf_chk(1,"STM-L2-04 (access_bss_var): %d\n",0);
 __printf_chk(1,"STM-L2-04 (access_bss_buffer): %d\n",0);
 uVar2 = global_struct_access();
 __printf_chk(1,"STM-L2-05 (global_struct_access): %d\n",uVar2);
 file_scope_static = 0x32;
 __printf_chk(1,"STM-L2-06 (file_static): %d\n");
 global_func_ptr = (code)double_value_wrapper;
 uVar2 = call_global_callback();
 __printf_chk(1,"STM-L2-07 (global_func_ptr): %d\n",uVar2);
 __printf_chk(1,"STM-L2-08 (global_heap_store): %d\n",100);
 uVar2 = static_complex_init();
 __printf_chk(1,"STM-L2-09 (static_complex_init): %d\n",uVar2);
 __printf_chk(1,"STM-L3-01 (tls_access): %d\n",0x14);
 __printf_chk(1,"STM-L3-02 (init_order_test): %d\n",0x14);
 return;
}



static ulong memop_memset(byte *param_1,size_t param_2,int param_3)

{
 if (param_1 != (byte *)0x0 && param_2 != 0) {
 memset(param_1,param_3,param_2);
 return (ulong)*param_1;
 }
 return 0xffffffff;
}



static undefined4 memop_memcpy(void *param_1,void *param_2,size_t param_3)

{
 undefined4 uVar1;
 
 if (param_1 != (void *)0x0 && param_2 != (void *)0x0) {
 if (param_3 == 0) {
 uVar1 = 0xffffffff;
 }
 else {
 memcpy(param_1,param_2,param_3);
 uVar1 = *(undefined4 *)((long)param_1 + ((param_3 & 0xfffffffffffffffc) - 4));
 }
 return uVar1;
 }
 return 0xffffffff;
}



static ulong memop_memmove(void *param_1,ulong param_2)

{
 if (param_1 != (void *)0x0 && 1 < param_2) {
 memmove((void *)((long)param_1 + 1),param_1,param_2 - 1);
 return (ulong)*(byte *)((long)param_1 + 1);
 }
 return 0xffffffff;
}



static int memop_memcmp(void *param_1,void *param_2,size_t param_3)

{
 int iVar1;
 int iVar2;
 
 if ((param_1 != (void *)0x0 && param_2 != (void *)0x0) && (param_3 != 0)) {
 iVar2 = memcmp(param_1,param_2,param_3);
 iVar1 = -(uint)(iVar2 != 0);
 if (0 < iVar2) {
 iVar1 = 1;
 }
 return iVar1;
 }
 return 0;
}



static ulong memop_bzero(byte *param_1,size_t param_2)

{
 if (param_1 != (byte *)0x0) {
 memset(param_1,0,param_2);
 return (ulong)*param_1;
 }
 return 0xffffffff;
}



static ulong memop_bcopy(void *param_1,void *param_2,size_t param_3)

{
 byte *pbVar1;
 
 if ((param_1 != (void *)0x0 && param_2 != (void *)0x0) && (param_3 != 0)) {
 pbVar1 = memmove(param_2,param_1,param_3);
 return (ulong)*pbVar1;
 }
 return 0xffffffff;
}



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







/* Function: test_memory_op_functions @ 00101ba0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

static void test_memory_op_functions(void)

{
 int iVar1;
 undefined4 uVar2;
 int iVar3;
 undefined4 local_18c;
 undefined8 local_188;
 undefined4 local_180;
 undefined8 local_178;
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
 puts((const char *)&DAT_0010231c);
 local_150 = 0;
 uStack_148 = 0;
 local_140 = 0;
 local_168 = 0x140000000a;
 uStack_160 = 0x280000001e;
 local_158 = 0x32;
 uVar2 = memop_memset(auStack_108,10,0x41);
 __printf_chk(1,"MEMOP-L2-01: %d\n",uVar2);
 uVar2 = memop_memcpy(&local_150,&local_168,0x14);
 __printf_chk(1,"MEMOP-L2-02: %d\n",uVar2);
 local_118 = 0x6f576f6c6c6548;
 strncpy(acStack_111,"rld",4);
 uVar2 = memop_memmove(&local_118,10);
 __printf_chk(1,"MEMOP-L2-03: %c\n",uVar2);
 local_188 = 0x200000001;
 local_178 = 0x200000001;
 local_180 = 3;
 local_170 = 4;
 iVar3 = memcmp(&local_188,&local_178,0xc);
 iVar1 = -(uint)(iVar3 != 0);
 if (0 < iVar3) {
 iVar1 = 1;
 }
 __printf_chk(1,"MEMOP-L2-04: %d\n",iVar1);
 uVar2 = memop_bzero(auStack_128,10);
 __printf_chk(1,"MEMOP-L2-05: %d\n",uVar2);
 local_138[0] = 0x4030201;
 local_130[0] = 0;
 uVar2 = memop_bcopy(local_138,local_130,4);
 __printf_chk(1,"MEMOP-L2-06: %d\n",uVar2);
 __printf_chk(1,"MEMOP-L3-01: 0x%x\n",0x4030201);
 uVar2 = local_18c;
 __printf_chk(1,"MEMOP-L3-02: %d\n",uVar2);
 if (local_8 - __stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}



/* Function: extern_function @ 00101d78 */

static int extern_function(int param_1)

{
 return param_1 * 3;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 65 */
