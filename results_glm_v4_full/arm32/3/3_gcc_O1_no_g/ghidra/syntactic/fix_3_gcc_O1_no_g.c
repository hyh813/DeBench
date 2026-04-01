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
#define NULL ((void *)0)

/* Atomic operation helpers */
extern int SUB_ffff0fc0(int old_val, int new_val, void *ptr);
extern void SUB_ffff0fa0(void);

/* Stack protector function */
extern void __stack_chk_fail(void) __attribute__((__noreturn__));

/* Standard library function declarations */
extern void *malloc(size_t size);
extern void free(void *ptr);
extern void *calloc(size_t nmemb, size_t size);
extern void *realloc(void *ptr, size_t size);
extern void *memcpy(void *dest, const void *src, size_t n);
extern void *memset(void *s, int c, size_t n);
extern void *memmove(void *dest, const void *src, size_t n);
extern int memcmp(const void *s1, const void *s2, size_t n);
extern int puts(const char *s);
extern int __printf_chk(int flag, const char *format, ...);

/* Type definition for system calls */
typedef int __pid_t;

/* System call declarations */
extern __pid_t waitpid(__pid_t pid, int *status, int options);
extern __pid_t fork(void);
extern void perror(const char *s);
extern void exit(int status);

/* External function declaration */
extern int extern_function(int param_1);

/* Global variable declarations */
int global_counter = 0;
static int counter_1 = 0;
extern int extern_global_var;

/* Global data and string constants */
extern char DAT_000128a0[];
extern char DAT_000129fc[];
extern char DAT_00012b68[];
extern char DAT_00012be4[];
extern char DAT_00012b78[];
extern char DAT_00012ba0[];
extern char const_string[];
extern char DAT_00012bf0[];
extern char DAT_00012e74[];

/* Global variables */
extern int global_array[10];
int (*global_func_ptr)(int);
int file_scope_static;
int static_depends_0;

/* Ghidra-specific types */
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned short undefined2;
typedef _Bool bool;
typedef void (*code)(void);
typedef int (*atomic_cmp_func)(const void *, void *, void *);
typedef int __pid_t;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/3/3_gcc_O1_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */





/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: double_value @ 0001077c */

int double_value(int param_1)

{
 return param_1 << 1;
}



/* Function: local_vars @ 00010784 */

int local_vars(int param_1)

{
 return param_1 * 2 + 10;
}



/* Function: local_array @ 00010790 */

/* WARNING: Removing unreachable block (ram,0x000107e8) */

void local_array(int param_1)

{
 int *piVar1;
 int iVar2;
 int iStack_38;
 int local_34 [12];
 
 piVar1 = &iStack_38;
 iVar2 = 0;
 do {
 piVar1 = piVar1 + 1;
 *piVar1 = iVar2;
 iVar2 = iVar2 + param_1;
 } while (piVar1 != local_34 + 9);
 return;
}



/* Function: local_struct @ 000107f0 */

int local_struct(int param_1)

{
 return param_1 * 3;
}



/* Function: address_of_local @ 000107f8 */

undefined4 address_of_local(undefined4 *param_1)

{
 *param_1 = 0x2a;
 return 0x2a;
}



/* Function: address_of_array @ 00010808 */

int address_of_array(int *param_1)

{
 return *param_1 << 1;
}



/* Function: large_stack_frame @ 00010814 */

/* WARNING: Removing unreachable block (ram,0x0001087c) */

undefined4 large_stack_frame(void)

{
 char *pcVar1;
 char cVar2;
 char cStack_80d;
 char local_80c [2056];
 
 pcVar1 = &cStack_80d;
 cVar2 = '\0';
 do {
 pcVar1 = pcVar1 + 1;
 *pcVar1 = cVar2;
 cVar2 = cVar2 + '\x01';
 } while (pcVar1 != local_80c + 0x7ff);
 return 0x14;
}



/* Function: vla_stack @ 00010884 */

undefined4 vla_stack(int param_1,int param_2)

{
 int iVar1;
 undefined4 uVar2;
 int *piVar3;
 int iVar4;
 int aiStack_14 [3];
 
 aiStack_14[2] = 0;
 if (param_1 - 1U < 1000) {
 iVar1 = -(param_1 * 4 + 7U & 0xfffffff8);
 piVar3 = (int *)((int)aiStack_14 + iVar1);
 param_2 = param_1 * 2;
 iVar4 = 0;
 do {
 piVar3 = piVar3 + 1;
 *piVar3 = iVar4;
 iVar4 = iVar4 + 2;
 } while (iVar4 != param_2);
 uVar2 = *(undefined4 *)((int)aiStack_14 + (param_1 / 2) * 4 + iVar1 + 4);
 }
 else {
 uVar2 = 0xffffffff;
 }
 if (aiStack_14[2] == 0) {
 return uVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}

/* Function: alloca_usage @ 00010918 */

undefined4 alloca_usage(int param_1,int *param_2)

{
 int iVar1;
 undefined4 uVar2;
 int *piVar3;
 int iVar4;
 int *piVar5;
 int aiStack_14 [3];
 
 aiStack_14[2] = 0;
 if (param_1 < 1) {
 uVar2 = 0xffffffff;
 }
 else {
 iVar1 = -(param_1 * 4 + 7U & 0xfffffff8);
 piVar3 = (int *)((int)aiStack_14 + iVar1);
 piVar5 = (int *)((int)aiStack_14 + param_1 * 4 + iVar1);
 iVar4 = 0;
 do {
 piVar3 = piVar3 + 1;
 *piVar3 = iVar4;
 iVar4 = iVar4 + 3;
 } while (piVar3 != piVar5);
 uVar2 = *(undefined4 *)((int)aiStack_14 + (param_1 / 2) * 4 + iVar1 + 4);
 }
 if (aiStack_14[2] == 0) {
 return uVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}

/* Function: stack_alias @ 000109ac */

undefined4 stack_alias(void)

{
 return 0x14;
}



/* Function: test_stack_memory @ 000109b4 */

void test_stack_memory(void)

{
 undefined4 uVar1;
 
 puts(&DAT_000128a0);
 __printf_chk(1,"MEM-L1-01 (local_vars): %d\n",0x14);
 uVar1 = local_array(2);
 __printf_chk(1,"MEM-L1-02 (local_array): %d\n",uVar1);
 __printf_chk(1,"MEM-L1-03 (local_struct): %d\n",0xf);
 __printf_chk(1,"MEM-L1-04 (address_of_local): %d\n",0x2a);
 __printf_chk(1,"MEM-L1-05 (address_of_array): %d\n",2);
 uVar1 = large_stack_frame();
 __printf_chk(1,"MEM-L2-01 (large_stack_frame): %d\n",uVar1);
 uVar1 = vla_stack(10, 0);
 __printf_chk(1,"MEM-L2-02 (vla_stack): %d\n",uVar1);
 uVar1 = alloca_usage(10, NULL);
 __printf_chk(1,"MEM-L2-03 (alloca_usage): %d\n",uVar1);
 __printf_chk(1,"MEM-L2-04 (stack_alias): %d\n",0x14);
 return;
}



/* Function: heap_basic @ 00010a98 */

undefined4 heap_basic(int param_1)

{
 void *__ptr;
 int *piVar1;
 int iVar2;
 undefined4 uVar3;
 
 __ptr = malloc(param_1 << 2);
 if (__ptr == (void *)0x0) {
 uVar3 = 0xffffffff;
 }
 else {
 if (0 < param_1) {
 piVar1 = (int *)((int)__ptr + -4);
 iVar2 = 0;
 do {
 piVar1 = piVar1 + 1;
 *piVar1 = iVar2;
 iVar2 = iVar2 + 2;
 } while (iVar2 != param_1 * 2);
 }
 uVar3 = *(undefined4 *)((int)__ptr + (param_1 / 2) * 4);
 free(__ptr);
 }
 return uVar3;
}



/* Function: heap_calloc @ 00010af4 */

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
 if ((int)param_1 < 1) {
 iVar2 = 0;
 }
 else {
 piVar1 = (int *)((int)__ptr + -4);
 iVar2 = 0;
 do {
 piVar1 = piVar1 + 1;
 iVar2 = iVar2 + *piVar1;
 } while (piVar1 != (int *)((int)__ptr + param_1 * 4 + -4));
 }
 free(__ptr);
 }
 return iVar2;
}



/* Function: heap_realloc @ 00010b50 */

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



/* Function: heap_array @ 00010bfc */

undefined4 heap_array(int param_1)

{
 void *__ptr;
 int *piVar1;
 int iVar2;
 undefined4 uVar3;
 
 __ptr = malloc(param_1 * 4);
 if (__ptr == (void *)0x0) {
 uVar3 = 0xffffffff;
 }
 else {
 if (0 < param_1) {
 piVar1 = (int *)((int)__ptr + -4);
 iVar2 = 0;
 do {
 piVar1 = piVar1 + 1;
 *piVar1 = iVar2;
 iVar2 = iVar2 + 3;
 } while (piVar1 != (int *)((int)__ptr + (param_1 * 4 - 4U)));
 }
 uVar3 = *(undefined4 *)((int)__ptr + (param_1 / 2) * 4);
 free(__ptr);
 }
 return uVar3;
}



/* Function: heap_struct @ 00010c60 */

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



/* Function: heap_nested @ 00010c90 */

int heap_nested(void **param_1)

{
 undefined4 *__ptr;
 undefined4 *puVar1;
 
 __ptr = malloc(8);
 *param_1 = __ptr;
 if (__ptr == (undefined4 *)0x0) {
 return 0xffffffff;
 }
 *__ptr = 10;
 puVar1 = malloc(8);
 __ptr[1] = puVar1;
 if (puVar1 != (undefined4 *)0x0) {
 *puVar1 = 0x14;
 puVar1[1] = 0;
 return 0;
 }
 free(__ptr);
 return 0xfffffffe;
}



/* Function: linked_list_heap @ 00010cfc */

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



/* Function: create_tree_node @ 00010dbc */

undefined4 *create_tree_node(undefined4 param_1)

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



/* Function: tree_heap_traversal @ 00010de4 */

int tree_heap_traversal(void)

{
 int *__ptr;
 int iVar1;
 int *piVar2;
 int *__ptr_00;
 
 __ptr = (int *)create_tree_node(10);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = create_tree_node(0x14);
 __ptr[1] = iVar1;
 piVar2 = (int *)create_tree_node(0x1e);
 __ptr[2] = (int)piVar2;
 __ptr_00 = (int *)__ptr[1];
 if (__ptr_00 == (int *)0x0 || piVar2 == (int *)0x0) {
 if (__ptr_00 != (int *)0x0) {
 free(__ptr_00);
 }
 if ((void *)__ptr[2] != (void *)0x0) {
 free((void *)__ptr[2]);
 }
 free(__ptr);
 iVar1 = -2;
 }
 else {
 iVar1 = *__ptr + *__ptr_00 + *piVar2;
 free(__ptr_00);
 free((void *)__ptr[2]);
 free(__ptr);
 }
 }
 return iVar1;
}



/* Function: memory_leak @ 00010e88 */

undefined4 memory_leak(int param_1)

{
 void *pvVar1;
 int *piVar2;
 int iVar3;
 
 pvVar1 = malloc(param_1 << 2);
 if (pvVar1 != (void *)0x0) {
 if (0 < param_1) {
 piVar2 = (int *)((int)pvVar1 + -4);
 iVar3 = 0;
 do {
 piVar2 = piVar2 + 1;
 *piVar2 = iVar3;
 iVar3 = iVar3 + 1;
 } while (param_1 != iVar3);
 }
 return *(undefined4 *)((int)pvVar1 + (param_1 / 2) * 4);
 }
 return 0xffffffff;
}



/* Function: dangling_pointer @ 00010ed8 */

undefined4 dangling_pointer(void)

{
 undefined4 *__ptr;
 undefined4 uVar1;
 
 __ptr = malloc(4);
 if (__ptr != (undefined4 *)0x0) {
 __printf_chk(1,"value before free: %d\n",0x2a);
 uVar1 = *__ptr;
 free(__ptr);
 return uVar1;
 }
 return 0xffffffff;
}



/* Function: double_free @ 00010f18 */

undefined4 double_free(undefined4 *param_1)

{
 void *__ptr;
 
 if (param_1 != (undefined4 *)0x0) {
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



/* Function: heap_overflow @ 00010f5c */

undefined4 heap_overflow(void)

{
 undefined4 *__ptr;
 int *piVar1;
 int iVar2;
 undefined4 uVar3;
 
 __ptr = malloc(0x28);
 if (__ptr == (undefined4 *)0x0) {
 uVar3 = 0xffffffff;
 }
 else {
 piVar1 = __ptr + -1;
 iVar2 = 0;
 do {
 piVar1 = piVar1 + 1;
 *piVar1 = iVar2;
 iVar2 = iVar2 + 100;
 } while (iVar2 != 0x44c);
 uVar3 = *__ptr;
 free(__ptr);
 }
 return uVar3;
}



/* Function: test_heap_memory @ 00010fa8 */

void test_heap_memory(void)

{
 undefined4 uVar1;
 __pid_t __pid;
 void *local_14;
 uint local_10;
 int aiStack_14 [3];

 aiStack_14[2] = 0;
 
 puts(&DAT_000129fc);
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
 local_14 = (void *)0x0;
 uVar1 = heap_nested(&local_14);
 __printf_chk(1,"HEAP-L2-06 (heap_nested): %d\n",uVar1);
 if (local_14 != (void *)0x0) {
 free(*(void **)((int)local_14 + 4));
 free(local_14);
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
 __printf_chk(1,&DAT_00012b68,uVar1);
 /* WARNING: Subroutine does not return */
 exit(0);
 }
 if (__pid < 1) {
 perror(&DAT_00012be4);
 }
 else {
 (void)waitpid(__pid,(int *)&local_10,0);
 if ((local_10 & 0x7f) == 0) {
 __printf_chk(1,&DAT_00012b78,(int)local_10 >> 8 & 0xff);
 }
 else if (0x1ffffff < (int)(((local_10 & 0x7f) + 1) * 0x1000000)) {
 __printf_chk(1,&DAT_00012ba0);
 }
 }
 if (aiStack_14[2] == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: global_var_access @ 000111b4 */

void global_var_access(void)

{
 global_counter = global_counter + 1;
 return;
}



/* Function: global_var_read @ 000111cc */

int global_var_read(void)

{
 return global_counter << 1;
}



/* Function: global_array_access @ 000111e0 */

undefined4 global_array_access(uint param_1)

{
 undefined4 uVar1;
 
 if (param_1 < 10) {
 uVar1 = *(undefined4 *)(&global_array + param_1 * 4);
 }
 else {
 uVar1 = 0xffffffff;
 }
 return uVar1;
}



/* Function: static_local @ 000111f8 */

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



/* Function: call_static_func @ 0001121c */

int call_static_func(int param_1)

{
 return param_1 * 2 + 1;
}



/* Function: access_extern_global @ 00011228 */

int access_extern_global(void)

{
 return extern_global_var + 100;
}



/* Function: call_extern_func @ 0001123c */

undefined4 call_extern_func(void)

{
 extern_function(5);
 return 0xf;
}



/* Function: read_const_data @ 0001124c */

int read_const_data(void)

{
 return *(byte *)(const_string + 4) + 0x2a;
}



/* Function: access_bss_var @ 00011264 */

undefined4 access_bss_var(void)

{
 return 0;
}



/* Function: access_bss_buffer @ 0001126c */

undefined4 access_bss_buffer(void)

{
 return 0;
}



/* Function: global_struct_access @ 00011274 */

undefined4 global_struct_access(void)

{
 return 0x1e;
}



/* Function: set_file_static @ 0001127c */

void set_file_static(undefined4 param_1)

{
 file_scope_static = param_1;
 return;
}



/* Function: get_file_static @ 0001128c */

undefined4 get_file_static(void)

{
 return file_scope_static;
}



/* Function: set_global_callback @ 0001129c */

void set_global_callback(undefined4 param_1)

{
 global_func_ptr = param_1;
 return;
}



/* Function: call_global_callback @ 000112ac */

undefined4 call_global_callback(int param_1)

{
 undefined4 uVar1;
 
 if (global_func_ptr != NULL) {
 uVar1 = ((int (*)(int))global_func_ptr)(param_1);
 return uVar1;
 }
 return 0xffffffff;
}



/* Function: global_heap_store @ 000112d4 */

undefined4 global_heap_store(undefined4 *param_1)

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



/* Function: static_complex_init @ 000112e4 */

undefined4 static_complex_init(void)

{
 return 0xf;
}



/* Function: tls_access @ 000112ec */

int tls_access(int param_1)

{
 return param_1 << 1;
}



/* Function: init_order_test @ 000112f4 */

undefined4 init_order_test(void)

{
 static_depends_0 = 0x14;
 return 0x14;
}



/* Function: test_static_global @ 00011308 */

void test_static_global(void)

{
 undefined4 uVar1;
 
 puts(&DAT_00012bf0);
 global_var_access();
 __printf_chk(1,"STM-L1-01 (global_var_access): %d\n",global_counter);
 __printf_chk(1,"STM-L1-01 (global_var_read): %d\n",global_counter << 1);
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
 __printf_chk(1,"STM-L2-06 (file_static): %d\n",file_scope_static);
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



/* Function: memop_memset @ 000114e4 */

uint memop_memset(byte *param_1,size_t param_2,int param_3)

{
 if (param_2 != 0 && param_1 != (byte *)0x0) {
 memset(param_1,param_3,param_2);
 return (uint)*param_1;
 }
 return 0xffffffff;
}



/* Function: memop_memcpy @ 00011518 */

undefined4 memop_memcpy(void *param_1,void *param_2,size_t param_3)

{
 if (param_1 == (void *)0x0 || (param_3 == 0 || param_2 == (void *)0x0)) {
 return 0xffffffff;
 }
 memcpy(param_1,param_2,param_3);
 return *(undefined4 *)((int)param_1 + ((param_3 & 0xfffffffc) - 4));
}



/* Function: memop_memmove @ 00011564 */

uint memop_memmove(void *param_1,uint param_2)

{
 if (param_1 != (void *)0x0 && 1 < param_2) {
 memmove((void *)((int)param_1 + 1),param_1,param_2 - 1);
 return (uint)*(byte *)((int)param_1 + 1);
 }
 return 0xffffffff;
}



/* Function: memop_memcmp @ 00011598 */

int memop_memcmp(void *param_1,void *param_2,size_t param_3)

{
 int iVar1;
 
 if (param_1 == (void *)0x0 || (param_3 == 0 || param_2 == (void *)0x0)) {
 return 0;
 }
 iVar1 = memcmp(param_1,param_2,param_3);
 if (iVar1 < 1) {
 return iVar1 >> 0x1f;
 }
 return 1;
}



/* Function: memop_bzero @ 000115e4 */

uint memop_bzero(byte *param_1,size_t param_2)

{
 if (param_1 != (byte *)0x0) {
 memset(param_1,0,param_2);
 return (uint)*param_1;
 }
 return 0xffffffff;
}



/* Function: memop_bcopy @ 00011610 */

uint memop_bcopy(const void *param_1,void *param_2,size_t param_3)

{
 if (param_1 == (void *)0x0 || (param_3 == 0 || param_2 == (void *)0x0)) {
 return 0xffffffff;
 }
 memmove(param_2,param_1,param_3);
 return 0;
}



/* Function: memop_unaligned_access @ 00011654 */

undefined4 memop_unaligned_access(int param_1)

{
 undefined4 local_10;
 int local_c;
 
 local_c = 0;
 if (param_1 == 0) {
 local_10 = 0xffffffff;
 }
 else {
 memcpy(&local_10,(void *)(param_1 + 1),4);
 }
 if (local_c == 0) {
 return local_10;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}

/* Function: memop_memory_barrier @ 000116b8 */

int memop_memory_barrier(int *param_1)

{
 int iVar1;
 
 if (param_1 != (int *)0x0) {
 iVar1 = *param_1;
 return iVar1 * 2;
 }
 return -1;
}



/* Function: test_memory_op_functions @ 000116e0 */

void test_memory_op_functions(void)

{
 undefined4 uVar1;
 undefined4 local_180;
 undefined4 local_17c;
 undefined4 uStack_178;
 undefined4 uStack_174;
 undefined4 local_170;
 undefined4 uStack_16c;
 undefined4 uStack_168;
 undefined4 local_164;
 undefined4 uStack_160;
 undefined4 uStack_15c;
 undefined4 uStack_158;
 undefined4 local_154;
 undefined4 local_150;
 undefined4 local_14c;
 undefined4 local_148;
 undefined4 local_144;
 undefined4 local_140;
 undefined4 local_13c;
 undefined4 local_138;
 undefined4 local_134;
 undefined4 uStack_130;
 undefined1 auStack_12c [12];
 char local_120 [4];
 char acStack_11c [4];
 undefined2 uStack_118;
 undefined1 local_116;
 undefined1 auStack_114 [256];
 int local_14;
 
 local_14 = 0;
 puts(&DAT_00012e74);
 local_164 = 10;
 uStack_160 = 0x14;
 uStack_15c = 0x1e;
 uStack_158 = 0x28;
 local_154 = 0x32;
 local_150 = 0;
 local_14c = 0;
 local_148 = 0;
 local_144 = 0;
 local_140 = 0;
 uVar1 = memop_memset(auStack_114,10,0x41);
 __printf_chk(1,"MEMOP-L2-01: %d\n",uVar1);
 uVar1 = memop_memcpy(&local_150,&local_164,0x14);
 __printf_chk(1,"MEMOP-L2-02: %d\n",uVar1);
 local_120[0] = 'H';
 local_120[1] = 'e';
 local_120[2] = 'l';
 local_120[3] = 'l';
 acStack_11c[0] = 'o';
 acStack_11c[1] = 'W';
 acStack_11c[2] = 'o';
 acStack_11c[3] = 'r';
 uStack_118 = 0x646c;
 local_116 = 0;
 uVar1 = memop_memmove(local_120,10);
 __printf_chk(1,"MEMOP-L2-03: %c\n",uVar1);
 local_17c = 1;
 uStack_178 = 2;
 uStack_174 = 3;
 local_170 = 1;
 uStack_16c = 2;
 uStack_168 = 4;
 uVar1 = memop_memcmp(&local_17c,&local_170,0xc);
 __printf_chk(1,"MEMOP-L2-04: %d\n",uVar1);
 uVar1 = memop_bzero(auStack_12c,10);
 __printf_chk(1,"MEMOP-L2-05: %d\n",uVar1);
 local_13c = 0x4030201;
 local_138 = 0;
 uVar1 = memop_bcopy(&local_13c,&local_138,4);
 __printf_chk(1,"MEMOP-L2-06: %d\n",uVar1);
 local_134 = 0x3020100;
 uStack_130 = 0x7060504;
 uVar1 = memop_unaligned_access(&local_134);
 __printf_chk(1,"MEMOP-L3-01: 0x%x\n",uVar1);
 local_180 = 5;
 uVar1 = memop_memory_barrier(&local_180);
 __printf_chk(1,"MEMOP-L3-02: %d\n",uVar1);
 if (local_14 == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 return;
}



/* Function: main @ 000118d4 */

undefined4 main(void)

{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}



/* Function: extern_function @ 000118f0 */

int extern_function(int param_1)

{
 return param_1 * 3;
}



/* Function: __sync_fetch_and_add_4 @ 000118f8 */

int __sync_fetch_and_add_4(int *param_1,int param_2)

{
 int iVar1;
 int iVar2;
 
 do {
 iVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(iVar2,iVar2 + param_2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}



/* Function: __sync_fetch_and_sub_4 @ 00011930 */

int __sync_fetch_and_sub_4(int *param_1,int param_2)

{
 int iVar1;
 int iVar2;
 
 do {
 iVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(iVar2,iVar2 - param_2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}



/* Function: __sync_fetch_and_or_4 @ 00011968 */

uint __sync_fetch_and_or_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(uVar2,uVar2 | param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_fetch_and_and_4 @ 000119a0 */

uint __sync_fetch_and_and_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(uVar2,uVar2 & param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_fetch_and_xor_4 @ 000119d8 */

uint __sync_fetch_and_xor_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(uVar2,uVar2 ^ param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_fetch_and_nand_4 @ 00011a10 */

uint __sync_fetch_and_nand_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(uVar2,~(uVar2 & param_2),param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_fetch_and_add_2 @ 00011a4c */

int __sync_fetch_and_add_2(uint param_1,int param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
	iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = ((atomic_cmp_func)SUB_ffff0fc0)
 (uVar2,(uVar2 ^ uVar1 + param_2 << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_sub_2 @ 00011aac */

int __sync_fetch_and_sub_2(uint param_1,int param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
	iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = ((atomic_cmp_func)SUB_ffff0fc0)
 (uVar2,(uVar2 ^ uVar1 - param_2 << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_or_2 @ 00011b0c */

int __sync_fetch_and_or_2(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
	iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = ((atomic_cmp_func)SUB_ffff0fc0)
 (uVar2,(uVar2 ^ (uVar1 | param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_and_2 @ 00011b6c */

int __sync_fetch_and_and_2(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
	iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = ((atomic_cmp_func)SUB_ffff0fc0)
 (uVar2,(uVar2 ^ (uVar1 & param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_xor_2 @ 00011bcc */

int __sync_fetch_and_xor_2(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = ((atomic_cmp_func)SUB_ffff0fc0)
 (uVar2,(uVar2 ^ (uVar1 ^ param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_nand_2 @ 00011c2c */

int __sync_fetch_and_nand_2(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = ((atomic_cmp_func)SUB_ffff0fc0)
 (uVar2,(uVar2 ^ ~(uVar1 & param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_add_1 @ 00011c90 */

int __sync_fetch_and_add_1(uint param_1,int param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
	iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = ((atomic_cmp_func)SUB_ffff0fc0)
 (uVar2,(uVar2 ^ uVar1 + param_2 << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}



/* Function: __sync_fetch_and_sub_1 @ 00011cec */

int __sync_fetch_and_sub_1(uint param_1,int param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = ((atomic_cmp_func)SUB_ffff0fc0)
 (uVar2,(uVar2 ^ uVar1 - param_2 << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}



/* Function: __sync_fetch_and_or_1 @ 00011d48 */

int __sync_fetch_and_or_1(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = ((atomic_cmp_func)SUB_ffff0fc0)
 (uVar2,(uVar2 ^ (uVar1 | param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}



/* Function: __sync_fetch_and_and_1 @ 00011da4 */

int __sync_fetch_and_and_1(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = ((atomic_cmp_func)SUB_ffff0fc0)
 (uVar2,(uVar2 ^ (uVar1 & param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}



/* Function: __sync_fetch_and_xor_1 @ 00011e00 */

int __sync_fetch_and_xor_1(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = ((atomic_cmp_func)SUB_ffff0fc0)
 (uVar2,(uVar2 ^ (uVar1 ^ param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}



/* Function: __sync_fetch_and_nand_1 @ 00011e5c */

int __sync_fetch_and_nand_1(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = ((atomic_cmp_func)SUB_ffff0fc0)
 (uVar2,(uVar2 ^ ~(uVar1 & param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}



/* Function: __sync_add_and_fetch_4 @ 00011ebc */

int __sync_add_and_fetch_4(int *param_1,int param_2)

{
 int iVar1;
 int iVar2;
 
 do {
 iVar2 = *param_1 + param_2;
 iVar1 = ((atomic_cmp_func)SUB_ffff0fc0)(*param_1,iVar2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}



/* Function: __sync_sub_and_fetch_4 @ 00011ef4 */

int __sync_sub_and_fetch_4(int *param_1,int param_2)

{
 int iVar1;
 int iVar2;
 
 do {
 iVar2 = *param_1 - param_2;
 iVar1 = ((atomic_cmp_func)SUB_ffff0fc0)(*param_1,iVar2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}



/* Function: __sync_or_and_fetch_4 @ 00011f2c */

uint __sync_or_and_fetch_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1 | param_2;
 iVar1 = ((atomic_cmp_func)SUB_ffff0fc0)(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_and_and_fetch_4 @ 00011f64 */

uint __sync_and_and_fetch_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1 & param_2;
 iVar1 = ((atomic_cmp_func)SUB_ffff0fc0)(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_xor_and_fetch_4 @ 00011f9c */

uint __sync_xor_and_fetch_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1 ^ param_2;
 iVar1 = ((atomic_cmp_func)SUB_ffff0fc0)(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_nand_and_fetch_4 @ 00011fd4 */

uint __sync_nand_and_fetch_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = ~(*param_1 & param_2);
 iVar1 = ((atomic_cmp_func)SUB_ffff0fc0)(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_add_and_fetch_2 @ 00012010 */

int __sync_add_and_fetch_2(uint param_1,int param_2)

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
 iVar3 = ((atomic_cmp_func)SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_sub_and_fetch_2 @ 00012078 */

int __sync_sub_and_fetch_2(uint param_1,int param_2)

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
 iVar3 = ((atomic_cmp_func)SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_or_and_fetch_2 @ 000120e0 */

int __sync_or_and_fetch_2(uint param_1,uint param_2)

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
 iVar3 = ((atomic_cmp_func)SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_and_and_fetch_2 @ 00012148 */

int __sync_and_and_fetch_2(uint param_1,uint param_2)

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
 iVar3 = ((atomic_cmp_func)SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_xor_and_fetch_2 @ 000121b0 */

int __sync_xor_and_fetch_2(uint param_1,uint param_2)

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
 iVar3 = ((atomic_cmp_func)SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_nand_and_fetch_2 @ 00012218 */

int __sync_nand_and_fetch_2(uint param_1,uint param_2)

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
 iVar3 = ((atomic_cmp_func)SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_add_and_fetch_1 @ 00012284 */

int __sync_add_and_fetch_1(uint param_1,int param_2)

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
 iVar3 = ((atomic_cmp_func)SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_sub_and_fetch_1 @ 000122e8 */

int __sync_sub_and_fetch_1(uint param_1,int param_2)

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
 iVar3 = ((atomic_cmp_func)SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_or_and_fetch_1 @ 0001234c */

int __sync_or_and_fetch_1(uint param_1,uint param_2)

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
 iVar3 = ((atomic_cmp_func)SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_and_and_fetch_1 @ 000123b0 */

int __sync_and_and_fetch_1(uint param_1,uint param_2)

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
 iVar3 = ((atomic_cmp_func)SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_xor_and_fetch_1 @ 00012414 */

int __sync_xor_and_fetch_1(uint param_1,uint param_2)

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
 iVar3 = ((atomic_cmp_func)SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_nand_and_fetch_1 @ 00012478 */

int __sync_nand_and_fetch_1(uint param_1,uint param_2)

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
 iVar3 = ((atomic_cmp_func)SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_val_compare_and_swap_4 @ 000124e0 */

int __sync_val_compare_and_swap_4(int *param_1,int param_2,undefined4 param_3)

{
 int iVar1;
 
 do {
 if (*param_1 != param_2) {
 return *param_1;
 }
 iVar1 = ((atomic_cmp_func)SUB_ffff0fc0)(param_2,param_3,param_1);
 } while (iVar1 != 0);
 return param_2;
}



/* Function: __sync_val_compare_and_swap_2 @ 00012530 */

uint __sync_val_compare_and_swap_2(uint param_1,uint param_2,int param_3)

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
 iVar3 = ((atomic_cmp_func)SUB_ffff0fc0)
 (uVar2,(param_3 << iVar4 ^ uVar2) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return param_2;
}



/* Function: __sync_val_compare_and_swap_1 @ 000125a8 */

uint __sync_val_compare_and_swap_1(uint param_1,uint param_2,int param_3)

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
 iVar3 = ((atomic_cmp_func)SUB_ffff0fc0)
 (uVar2,(param_3 << iVar4 ^ uVar2) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return param_2;
}



/* Function: __sync_bool_compare_and_swap_4 @ 0001261c */

bool __sync_bool_compare_and_swap_4(int *param_1,int param_2,int param_3)

{
 int iVar1;
 
 iVar1 = SUB_ffff0fc0(param_2, param_3, param_1);
 return iVar1 == 0;
}



/* Function: __sync_bool_compare_and_swap_2 @ 00012648 */

bool __sync_bool_compare_and_swap_2(uint param_1,uint param_2,int param_3)

{
 int iVar1;
 
 iVar1 = __sync_val_compare_and_swap_2(param_1,param_2,param_3);
 return param_2 == iVar1;
}



/* Function: __sync_bool_compare_and_swap_1 @ 00012664 */

bool __sync_bool_compare_and_swap_1(uint param_1,uint param_2,int param_3)

{
 int iVar1;
 
 iVar1 = __sync_val_compare_and_swap_1(param_1,param_2,param_3);
 return param_2 == iVar1;
}



/* Function: __sync_lock_test_and_set_4 @ 0001268c */

int __sync_lock_test_and_set_4(int *param_1,int param_2)

{
 int iVar1;
 int uVar2;
 
 do {
 uVar2 = *param_1;
 iVar1 = ((atomic_cmp_func)SUB_ffff0fc0)(uVar2,param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_lock_test_and_set_2 @ 000126c4 */

int __sync_lock_test_and_set_2(uint param_1,int param_2)

{
 int iVar1;
 uint uVar2;
 int iVar3;
 
 iVar3 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 iVar1 = ((atomic_cmp_func)SUB_ffff0fc0)
 (uVar2,(param_2 << iVar3 ^ uVar2) & 0xffff << iVar3 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar1 != 0);
 return (int)(short)((0xffff << iVar3 & uVar2) >> iVar3);
}



/* Function: __sync_lock_test_and_set_1 @ 00012724 */

int __sync_lock_test_and_set_1(uint param_1,int param_2)

{
 int iVar1;
 uint uVar2;
 int iVar3;
 
 iVar3 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 iVar1 = ((atomic_cmp_func)SUB_ffff0fc0)
 (uVar2,(param_2 << iVar3 ^ uVar2) & 0xff << iVar3 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar1 != 0);
 return (int)(char)((0xff << iVar3 & uVar2) >> iVar3);
}



/* Function: __sync_lock_release_8 @ 00012780 */

void __sync_lock_release_8(undefined4 *param_1)

{
 SUB_ffff0fa0();
 *param_1 = 0;
 param_1[1] = 0;
 return;
}



/* Function: __sync_lock_release_4 @ 000127a4 */

void __sync_lock_release_4(int *param_1)

{
 SUB_ffff0fa0();
 *param_1 = 0;
 return;
}



/* Function: __sync_lock_release_2 @ 000127c4 */

void __sync_lock_release_2(undefined2 *param_1)

{
 SUB_ffff0fa0();
 *param_1 = 0;
 return;
}



/* Function: __sync_lock_release_1 @ 000127e4 */

void __sync_lock_release_1(undefined1 *param_1)

{
 SUB_ffff0fa0();
 *param_1 = 0;
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 112 */
