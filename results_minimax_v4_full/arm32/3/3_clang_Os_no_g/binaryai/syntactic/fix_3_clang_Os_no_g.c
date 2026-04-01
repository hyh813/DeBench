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
typedef int __pid_t;
typedef unsigned char byte;
typedef int bool;
#define true 1
#define false 0

// External data references
extern char DAT_00012cfe[];
extern char DAT_00012d1c[];
extern char DAT_00012d3a[];
extern char DAT_00012d5e[];
extern char DAT_00012dac[];
extern char DAT_00012db8[];
extern char DAT_000129c5[];
extern char DAT_000129ea[];
extern char DAT_00012a2b[];
extern char DAT_000129b5[];
extern char const_string[];

// Global variables
unsigned int global_counter = 0;
unsigned int (*global_func_ptr)(unsigned int) = 0;
unsigned int static_local_counter = 0;
unsigned int file_scope_static = 0;
unsigned int *global_heap_ptr = 0;
unsigned int global_array[10];
int extern_global_var = 0;

// External runtime symbols
extern void *__dso_handle;
extern void __gmon_start__(void);
// Forward declaration for weak atomic helper (defined below)
static int (*SUB_ffff0fc0_ptr)(int, int, int *);
extern int SUB_ffff0fc0(int oldval, int newval, int *ptr);  // Weak atomic compare-and-swap helper

// Decompiled by BinaryAI
// SHA256: 5d46e4ff4d6650030ee5d32642d944ca93563dc4b825aa5c8d62989e336375e4

// Function: _init @ 0x1055c
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn();
 return iVar1;
}

// Function: <EXTERNAL>::calloc @ 0x1057c
void * calloc(size_t __nmemb,size_t __size)
{
 void *pvVar1;
 pvVar1 = calloc(__nmemb,__size);
 return pvVar1;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x10588
// Proper declaration: int __libc_start_main(int (*main)(int, char**), int argc, char **argv, ...);
void __libc_start_main(int (*main_ptr)(int, char**), int argc, char **argv, void (*fini)(void), void (*rtld_fini)(void), void *stack_end)
{
 // Just call main with dummy values for this decompiled code
 ((int (*)(int, char**))main_ptr)(0, argv);
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x10594
void __cxa_finalize(void *arg)
{
 __cxa_finalize(arg);
 return;
}

// Function: <EXTERNAL>::printf @ 0x105a0
// External declaration - actual implementation provided by libc
extern int printf(char *__format, ...);

// Function: <EXTERNAL>::memmove @ 0x105ac
void * memmove(void *__dest,void *__src,size_t __n)
{
 void *pvVar1;
 pvVar1 = memmove(__dest,__src,__n);
 return pvVar1;
}

// Function: <EXTERNAL>::free @ 0x105b8
void free(void *__ptr)
{
 free(__ptr);
 return;
}

// Function: <EXTERNAL>::memcpy @ 0x105c4
void * memcpy(void *__dest,void *__src,size_t __n)
{
 void *pvVar1;
 pvVar1 = memcpy(__dest,__src,__n);
 return pvVar1;
}

// Function: <EXTERNAL>::memcmp @ 0x105d0
int memcmp(void *__s1,void *__s2,size_t __n)
{
 int iVar1;
 iVar1 = memcmp(__s1,__s2,__n);
 return iVar1;
}

// Function: <EXTERNAL>::realloc @ 0x105dc
void * realloc(void *__ptr,size_t __size)
{
 void *pvVar1;
 pvVar1 = realloc(__ptr,__size);
 return pvVar1;
}

// Function: <EXTERNAL>::waitpid @ 0x105f4
__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)
{
 __pid_t _Var1;
 _Var1 = waitpid(__pid,__stat_loc,__options);
 return _Var1;
}

// Function: <EXTERNAL>::puts @ 0x10600
int puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::malloc @ 0x1060c
void * malloc(size_t __size)
{
 void *pvVar1;
 pvVar1 = malloc(__size);
 return pvVar1;
}

// Function: <EXTERNAL>::exit @ 0x10624
void exit(int __status)
{
 exit(__status);
}

// Function: <EXTERNAL>::memset @ 0x10630
void * memset(void *__s,int __c,size_t __n)
{
 void *pvVar1;
 pvVar1 = memset(__s,__c,__n);
 return pvVar1;
}

// Function: <EXTERNAL>::fork @ 0x1063c
__pid_t fork(void)
{
 __pid_t _Var1;
 _Var1 = fork();
 return _Var1;
}

// Function: <EXTERNAL>::abort @ 0x10648
void abort(void)
{
 abort();
}

// Function: __libc_start_main @ 0x10588 (external)
// Proper declaration: int __libc_start_main(int (*main)(void), int argc, char **argv, ...);

// Function: _start @ 0x10654
int main(void);
int double_value(int param_1);
void _start(unsigned int param_1,unsigned int param_2)
{
 // Call libc startup - main, argc, argv
 ((void (*)(int (*)(void), int, char**))__libc_start_main)(main, param_2, (char**)0);
 abort();
}

// Function: call_weak_fn @ 0x10698
int call_weak_fn(void)
{
 void (*gmon_start)(void) = __gmon_start__;
 if (gmon_start) {
   gmon_start();
 }
 return 0;
}

// Function: deregister_tm_clones @ 0x106bc
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x10700
void register_tm_clones(void)
{
 return;
}

// Global variable
char completed_0 = 0;

// Function: __do_global_dtors_aux @ 0x10750
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = 1;
 return;
 }
 return;
}

// Function: local_vars @ 0x107bc
int local_vars(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: local_array @ 0x107c8
unsigned int local_array(int param_1)
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

// Function: local_struct @ 0x107f8
int local_struct(int param_1)
{
 return param_1 * 3;
}

// Function: address_of_local @ 0x10800
unsigned int address_of_local(unsigned int *param_1)
{
 *param_1 = 0x2a;
 return 0x2a;
}

// Function: address_of_array @ 0x10810
int address_of_array(int *param_1)
{
 return *param_1 << 1;
}

// Function: large_stack_frame @ 0x1081c
char large_stack_frame(void)
{
 int iVar1;
 char local_808 [2048];
 iVar1 = 0;
 do {
 local_808[iVar1] = (char)iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x800);
 return local_808[1024];
}

// Function: vla_stack @ 0x1084c
unsigned int vla_stack(int param_1)
{
 int iVar1;
 unsigned int uVar2;
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
 uVar2 = *(unsigned int *)
 ((int)&iStack_10 + ((param_1 - (param_1 >> 0x1f)) * 2 & 0xfffffffdU) + iVar1 + 0x10);
 }
 return uVar2;
}

// Function: alloca_usage @ 0x108c0
unsigned int alloca_usage(int param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int iStack_10;
 if (0 < param_1) {
 iVar1 = -0x10 - (param_1 * 4 + 7U & 0xfffffff8);
 iVar2 = 0;
 iVar3 = 0;
 do {
 *(int *)((int)&iStack_10 + iVar3 * 4 + iVar1 + 0x10) = iVar2;
 iVar3 = iVar3 + 1;
 iVar2 = iVar2 + 3;
 } while (param_1 != iVar3);
 return *(unsigned int *)
 ((int)&iStack_10 + ((param_1 - (param_1 >> 0x1f)) * 2 & 0xfffffffdU) + iVar1 + 0x10);
 }
 return 0xffffffff;
}

// Function: stack_alias @ 0x10924
unsigned int stack_alias(void)
{
 return 0x14;
}

// Function: test_stack_memory @ 0x1092c
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

// Function: heap_basic @ 0x10a5c
unsigned int heap_basic(int param_1)
{
 void *__ptr;
 int iVar1;
 int iVar2;
 unsigned int uVar3;
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
 uVar3 = *(unsigned int *)((int)__ptr + ((param_1 - (param_1 >> 0x1f)) * 2 & 0xfffffffdU));
 free(__ptr);
 }
 return uVar3;
}

// Function: heap_calloc @ 0x10abc
int heap_calloc(size_t param_1)
{
 int *__ptr;
 int *piVar1;
 int iVar2;
 int iVar3;
 __ptr = (int *)calloc(param_1,4);
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

// Function: heap_realloc @ 0x10b14
unsigned int heap_realloc(void)
{
 void *__ptr;
 void *__ptr_00;
 int iVar1;
 unsigned int uVar2;
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
 *(unsigned int *)((int)__ptr_00 + 0x24) = 0x5a;
 *(unsigned int *)((int)__ptr_00 + 0x18) = 0x3c;
 uVar2 = 0xfffffffd;
 *(unsigned int *)((int)__ptr_00 + 0x14) = 0x32;
 *(unsigned int *)((int)__ptr_00 + 0x1c) = 0x46;
 *(unsigned int *)((int)__ptr_00 + 0x20) = 0x50;
 if (*(int *)((int)__ptr_00 + 8) == iVar3) {
 uVar2 = 0x32;
 }
 }
 free(__ptr_00);
 }
 return uVar2;
}

// Function: heap_array @ 0x10bbc
unsigned int heap_array(int param_1)
{
 int *__ptr;
 int iVar1;
 int *piVar2;
 int iVar3;
 unsigned int uVar4;
 __ptr = (int *)malloc(param_1 << 2);
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
 uVar4 = *(unsigned int *)((int)__ptr + ((param_1 - (param_1 >> 0x1f)) * 2 & 0xfffffffdU));
 free(__ptr);
 }
 return uVar4;
}

// Function: heap_struct @ 0x10c20
int heap_struct(int param_1)
{
 return param_1 * 3;
}

// Function: heap_nested @ 0x10c28
unsigned int heap_nested(unsigned int *param_1)
{
 unsigned int *__ptr;
 unsigned int *puVar1;
 unsigned int uVar2;
 __ptr = (unsigned int *)malloc(8);
 *param_1 = __ptr;
 if (__ptr == (unsigned int *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 *__ptr = 10;
 puVar1 = (unsigned int *)malloc(8);
 __ptr[1] = puVar1;
 if (puVar1 == (unsigned int *)0x0) {
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

// Function: linked_list_heap @ 0x10c98
int linked_list_heap(void)
{
 int **ppiVar1;
 uint uVar2;
 int *piVar3;
 int *piVar4;
 int *piVar5;
 int *piVar6;
 int *__ptr;
 uint uVar7;
 int iVar8;
 bool bVar9 = false;
 piVar3 = (int *)malloc(8);
 if (piVar3 == (int *)0x0) {
 bVar9 = true;
 __ptr = (int *)0x0;
 }
 else {
 iVar8 = 0;
 piVar5 = (int *)0x0;
 piVar6 = (int *)0x0;
 uVar2 = 0;
 do {
 uVar7 = uVar2;
 *piVar3 = iVar8;
 piVar3[1] = 0;
 __ptr = piVar3;
 if (piVar6 != (int *)0x0) {
 piVar5[1] = (int)piVar3;
 __ptr = piVar6;
 }
 if (uVar7 == 4) {
 bVar9 = false;
 if (uVar7 < 4) {
 bVar9 = true;
 }
 goto LAB_00010d48;
 }
 piVar4 = (int *)malloc(8);
 iVar8 = iVar8 + 10;
 piVar5 = piVar3;
 piVar6 = __ptr;
 piVar3 = piVar4;
 uVar2 = uVar7 + 1;
 } while (piVar4 != (int *)0x0);
 bVar9 = uVar7 < 4;
 }
 while (__ptr != (int *)0x0) {
 piVar3 = (int *)__ptr[1];
 free(__ptr);
 __ptr = piVar3;
 }
 __ptr = (int *)0x0;
LAB_00010d48:
 iVar8 = -1;
 if ((!bVar9) && (iVar8 = 0, piVar3 = __ptr, __ptr != (int *)0x0)) {
 do {
 ppiVar1 = (int **)(piVar3 + 1);
 iVar8 = *piVar3 + iVar8;
 piVar3 = *ppiVar1;
 } while (*ppiVar1 != (int *)0x0);
 while (__ptr != (int *)0x0) {
 piVar3 = (int *)__ptr[1];
 free(__ptr);
 __ptr = piVar3;
 }
 }
 return iVar8;
}

// Function: create_tree_node @ 0x10da4
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

// Function: tree_heap_traversal @ 0x10dd0
unsigned int tree_heap_traversal(void)
{
 return 0x3c;
}

// Function: memory_leak @ 0x10dd8
unsigned int memory_leak(int param_1)
{
 void *pvVar1;
 unsigned int uVar2;
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
 uVar2 = *(unsigned int *)((int)pvVar1 + ((param_1 - (param_1 >> 0x1f)) * 2 & 0xfffffffdU));
 }
 return uVar2;
}

// Function: dangling_pointer @ 0x10e2c
unsigned int dangling_pointer(void)
{
 unsigned int *__ptr;
 unsigned int uVar1;
 __ptr = (unsigned int *)malloc(4);
 if (__ptr == (unsigned int *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 printf("value before free: %d\n",0x2a);
 free(__ptr);
 uVar1 = *__ptr;
 }
 return uVar1;
}

// Function: double_free @ 0x10e74
unsigned int double_free(unsigned int *param_1)
{
 unsigned int uVar1;
 if (param_1 == (unsigned int *)0x0) {
 uVar1 = 0xfffffffe;
 }
 else {
 uVar1 = *param_1;
 }
 return uVar1;
}

// Function: heap_overflow @ 0x10e84
unsigned int heap_overflow(void)
{
 unsigned int *__ptr;
 int iVar1;
 int iVar2;
 unsigned int uVar3;
 __ptr = (unsigned int *)malloc(0x28);
 if (__ptr == (unsigned int *)0x0) {
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

// Function: test_heap_memory @ 0x10ed0
void test_heap_memory(void)
{
 unsigned int uVar1;
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
 uVar1 = *(unsigned int *)((int)pvVar2 + 8);
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
 exit(0);
}

// Function: global_var_access @ 0x110cc
void global_var_access(void)
{
 global_counter = global_counter + 1;
 return;
}

// Function: global_var_read @ 0x110f0
int global_var_read(void)
{
 return global_counter << 1;
}

// Function: global_array_access @ 0x11104
unsigned int global_array_access(uint param_1)
{
 unsigned int uVar1;
 uVar1 = 0xffffffff;
 if (param_1 < 10) {
 uVar1 = *(unsigned int *)(&global_array + param_1 * 4);
 }
 return uVar1;
}

// Function: static_local @ 0x11124
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

// Function: call_static_func @ 0x11154
uint call_static_func(int param_1)
{
 return param_1 << 1 | 1;
}

// Function: access_extern_global @ 0x11160
int access_extern_global(void)
{
 return extern_global_var + 100;
}

// Function: call_extern_func @ 0x11178
void call_extern_func(void)
{
 extern_function(5);
 return;
}

// Function: read_const_data @ 0x11180
int read_const_data(void)
{
 return *(byte *)(const_string + 4) + 0x2a;
}

// Function: access_bss_var @ 0x11198
unsigned int access_bss_var(void)
{
 return 0;
}

// Function: access_bss_buffer @ 0x111a0
unsigned int access_bss_buffer(void)
{
 return 0;
}

// Function: global_struct_access @ 0x111a8
unsigned int global_struct_access(void)
{
 return 0x1e;
}

// Function: set_file_static @ 0x111b0
void set_file_static(unsigned int param_1)
{
 file_scope_static = param_1;
 return;
}

// Function: get_file_static @ 0x111c4
unsigned int get_file_static(void)
{
 return file_scope_static;
}

// Function: set_global_callback @ 0x111d4
void set_global_callback(unsigned int param_1)
{
 global_func_ptr = param_1;
 return;
}

// Function: call_global_callback @ 0x111e8
void call_global_callback(unsigned int param_1)
{
 if (global_func_ptr != (void *)0x0) {
 (*global_func_ptr)(param_1);
 return;
 }
 return;
}

// Function: global_heap_store @ 0x11204
unsigned int global_heap_store(unsigned int *param_1)
{
 unsigned int uVar1;
 global_heap_ptr = param_1;
 if (param_1 == (unsigned int *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 uVar1 = *param_1;
 }
 return uVar1;
}

// Function: static_complex_init @ 0x11224
unsigned int static_complex_init(void)
{
 return 0xf;
}

// Function: tls_access @ 0x1122c
int tls_access(int param_1)
{
 return param_1 << 1;
}

// Function: init_order_test @ 0x11234
unsigned int init_order_test(void)
{
 return 0x14;
}

// Function: test_static_global @ 0x1123c
void test_static_global(void)
{
 unsigned int uVar1;
 unsigned int local_14;
 puts(&DAT_00012d3a);
 global_counter = global_counter + 1;
 printf("STM-L1-01 (global_var_access): %d\n", global_counter);
 printf("STM-L1-01 (global_var_read): %d\n",global_counter << 1);
 printf("STM-L1-02 (global_array_access): %d\n",5);
 static_local_counter = 1;
 printf("STM-L1-03 (static_local): %d\n",1);
 static_local_counter = static_local_counter + 1;
 printf("STM-L1-03 (static_local): %d\n", static_local_counter);
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

// Function: double_value @ 0x11484
int double_value(int param_1)
{
 return param_1 << 1;
}

// Function: memop_memset @ 0x1148c
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

// Function: memop_memcpy @ 0x114c4
unsigned int memop_memcpy(void *param_1,void *param_2,uint param_3)
{
 unsigned int uVar1;
 uint unaff_r4;
 uVar1 = 0xffffffff;
 if (param_1 != (void *)0x0) {
 if (param_2 != (void *)0x0) {
 unaff_r4 = param_3;
 }
 if (param_2 != (void *)0x0 && param_3 != 0) {
 memcpy(param_1,param_2,unaff_r4);
 uVar1 = *(unsigned int *)((int)param_1 + ((unaff_r4 & 0xfffffffc) - 4));
 }
 }
 return uVar1;
}

// Function: memop_memmove @ 0x11508
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

// Function: memop_memcmp @ 0x11540
int memop_memcmp(void *param_1,void *param_2,size_t param_3)
{
 int iVar1;
 int iVar2;
 if (param_1 == (void *)0x0) {
 return 0;
 }
 if (param_2 == (void *)0x0 || param_3 == 0) {
 return 0;
 }
 iVar1 = memcmp(param_1,param_2,param_3);
 iVar2 = iVar1;
 if (iVar1 != 0) {
 iVar2 = -1;
 }
 if (0 < iVar1) {
 iVar2 = 1;
 }
 return iVar2;
}

// Function: memop_bzero @ 0x11588
uint memop_bzero(byte *param_1,size_t param_2)
{
 if (param_1 != (byte *)0x0) {
 memset(param_1,0,param_2);
 return (uint)*param_1;
 }
 return 0xffffffff;
}

// Function: memop_bcopy @ 0x115b4
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

// Function: memop_unaligned_access @ 0x115ec
unsigned int memop_unaligned_access(int param_1)
{
 if (param_1 != 0) {
 return *(unsigned int *)(param_1 + 1);
 }
 return 0xffffffff;
}

// Function: memop_memory_barrier @ 0x11618
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

// Function: test_memory_op_functions @ 0x11644
void test_memory_op_functions(void)
{
 int iVar1;
 int iVar2;
 uint local_14;
 unsigned int uStack_10;
 unsigned short local_c;
 puts(&DAT_00012d5e);
 printf("MEMOP-L2-01: %d\n",0x41);
 printf("MEMOP-L2-02: %d\n",0x32);
 printf("MEMOP-L2-03: %d\n",0x32);
 // Manually set bytes in local_14 using char array overlay
 {
   char *p = (char *)&local_14;
   p[0] = 'H';
   p[1] = 'e';
   p[2] = 'l';
   p[3] = 'l';
 }
 // Manually set bytes in uStack_10 using char array overlay
 {
   char *p = (char *)&uStack_10;
   p[0] = 'o';
   p[1] = 'W';
   p[2] = 'o';
   p[3] = 'r';
 }
 // Manually set bytes in local_c using char array overlay
 {
   char *p = (char *)&local_c;
   p[0] = 'l';
   p[1] = 'd';
 }
 memmove((void *)((uint)&local_14 | 1),&local_14,9);
 printf("MEMOP-L2-03: %c\n",local_14 >> 8 & 0xff);
 iVar1 = memcmp(&DAT_00012dac,&DAT_00012db8,0xc);
 iVar2 = iVar1;
 if (iVar1 != 0) {
 iVar2 = -1;
 }
 if (0 < iVar1) {
 iVar2 = 1;
 }
 printf("MEMOP-L2-04: %d\n",iVar2);
 printf("MEMOP-L2-05: %d\n",0);
 printf("MEMOP-L2-06: %d\n",1);
 printf("MEMOP-L3-01: 0x%x\n",0x4030201);
 __sync_synchronize();
 printf("MEMOP-L3-02: %d\n",10);
 return;
}

// Function: main @ 0x11780
int main(void)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}

// Function: extern_function @ 0x117a0
int extern_function(int param_1)
{
 return param_1 * 3;
}

// Function: __sync_fetch_and_add_4 @ 0x117a8
// Renamed to avoid conflict with builtin
int __sync_fetch_and_add_4_impl(int *param_1,int param_2)
{
 int iVar1;
 int iVar2;
 do {
 iVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(iVar2,iVar2 + param_2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}

// Function: __sync_fetch_and_sub_4_impl @ 0x117e0
int __sync_fetch_and_sub_4_impl(int *param_1,int param_2)
{
 int iVar1;
 int iVar2;
 do {
 iVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(iVar2,iVar2 - param_2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}

// Function: __sync_fetch_and_or_4_impl @ 0x11818
uint __sync_fetch_and_or_4_impl(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(uVar2,uVar2 | param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_fetch_and_and_4_impl @ 0x11850
uint __sync_fetch_and_and_4_impl(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(uVar2,uVar2 & param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_fetch_and_xor_4 @ 0x11888
uint __sync_fetch_and_xor_4_impl(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(uVar2,uVar2 ^ param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_fetch_and_nand_4_impl @ 0x118c0
uint __sync_fetch_and_nand_4_impl(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(uVar2,~(uVar2 & param_2),param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_fetch_and_add_2_impl @ 0x118fc
int __sync_fetch_and_add_2_impl(uint param_1,int param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ uVar1 + param_2 << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}

// Function: __sync_fetch_and_sub_2_impl @ 0x1195c
int __sync_fetch_and_sub_2_impl(uint param_1,int param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ uVar1 - param_2 << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}

// Function: __sync_fetch_and_or_2_impl @ 0x119bc
int __sync_fetch_and_or_2_impl(uint param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ (uVar1 | param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}

// Function: __sync_fetch_and_and_2_impl @ 0x11a1c
int __sync_fetch_and_and_2_impl(uint param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ (uVar1 & param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}

// Function: __sync_fetch_and_xor_2_impl @ 0x11a7c
int __sync_fetch_and_xor_2_impl(uint param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ (uVar1 ^ param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}

// Function: __sync_fetch_and_nand_2_impl @ 0x11adc
int __sync_fetch_and_nand_2_impl(uint param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ ~(uVar1 & param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}

// Function: __sync_fetch_and_add_1_impl @ 0x11b40
int __sync_fetch_and_add_1_impl(uint param_1,int param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ uVar1 + param_2 << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}

// Function: __sync_fetch_and_sub_1_impl @ 0x11b9c
int __sync_fetch_and_sub_1_impl(uint param_1,int param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ uVar1 - param_2 << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}

// Function: __sync_fetch_and_or_1_impl @ 0x11bf8
int __sync_fetch_and_or_1_impl(uint param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ (uVar1 | param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}

// Function: __sync_fetch_and_and_1 @ 0x11c54
int __sync_fetch_and_and_1_impl(uint param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ (uVar1 & param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}

// Function: __sync_fetch_and_xor_1_impl @ 0x11cb0
int __sync_fetch_and_xor_1_impl(uint param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ (uVar1 ^ param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}

// Function: __sync_fetch_and_nand_1_impl @ 0x11d0c
int __sync_fetch_and_nand_1_impl(uint param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ ~(uVar1 & param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}

// Function: __sync_add_and_fetch_4 @ 0x11d6c
int __sync_add_and_fetch_4(int *param_1,int param_2)
{
 int iVar1;
 int iVar2;
 do {
 iVar2 = *param_1 + param_2;
 iVar1 = (*(void *)&SUB_ffff0fc0)(*param_1,iVar2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}

// Function: __sync_sub_and_fetch_4 @ 0x11da4
int __sync_sub_and_fetch_4(int *param_1,int param_2)
{
 int iVar1;
 int iVar2;
 do {
 iVar2 = *param_1 - param_2;
 iVar1 = (*(void *)&SUB_ffff0fc0)(*param_1,iVar2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}

// Function: __sync_or_and_fetch_4 @ 0x11ddc
uint __sync_or_and_fetch_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = *param_1 | param_2;
 iVar1 = (*(void *)&SUB_ffff0fc0)(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_and_and_fetch_4 @ 0x11e14
uint __sync_and_and_fetch_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = *param_1 & param_2;
 iVar1 = (*(void *)&SUB_ffff0fc0)(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_xor_and_fetch_4 @ 0x11e4c
uint __sync_xor_and_fetch_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = *param_1 ^ param_2;
 iVar1 = (*(void *)&SUB_ffff0fc0)(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_nand_and_fetch_4 @ 0x11e84
uint __sync_nand_and_fetch_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = ~(*param_1 & param_2);
 iVar1 = (*(void *)&SUB_ffff0fc0)(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_add_and_fetch_2 @ 0x11ec0
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
 iVar3 = SUB_ffff0fc0(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_sub_and_fetch_2 @ 0x11f28
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
 iVar3 = SUB_ffff0fc0(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_or_and_fetch_2 @ 0x11f90
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
 iVar3 = SUB_ffff0fc0(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_and_and_fetch_2 @ 0x11ff8
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
 iVar3 = SUB_ffff0fc0(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_xor_and_fetch_2 @ 0x12060
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
 iVar3 = SUB_ffff0fc0(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_nand_and_fetch_2 @ 0x120c8
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
 iVar3 = SUB_ffff0fc0(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_add_and_fetch_1 @ 0x12134
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
 iVar3 = SUB_ffff0fc0(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_sub_and_fetch_1 @ 0x12198
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
 iVar3 = SUB_ffff0fc0(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_or_and_fetch_1 @ 0x121fc
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
 iVar3 = SUB_ffff0fc0(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_and_and_fetch_1 @ 0x12260
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
 iVar3 = SUB_ffff0fc0(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_xor_and_fetch_1 @ 0x122c4
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
 iVar3 = SUB_ffff0fc0(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_nand_and_fetch_1 @ 0x12328
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
 iVar3 = SUB_ffff0fc0(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_val_compare_and_swap_4 @ 0x12390
int __sync_val_compare_and_swap_4(int *param_1,int param_2,unsigned int param_3)
{
 int iVar1;
 do {
 if (*param_1 != param_2) {
 return *param_1;
 }
 iVar1 = (*(void *)&SUB_ffff0fc0)(param_2,param_3,param_1);
 } while (iVar1 != 0);
 return param_2;
}

// Function: __sync_val_compare_and_swap_2 @ 0x123e0
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
 iVar3 = SUB_ffff0fc0
 (uVar2,(param_3 << iVar4 ^ uVar2) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return param_2;
}

// Function: __sync_val_compare_and_swap_1 @ 0x12458
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
 iVar3 = SUB_ffff0fc0
 (uVar2,(param_3 << iVar4 ^ uVar2) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return param_2;
}

// Function: __sync_bool_compare_and_swap_4 @ 0x124cc
bool __sync_bool_compare_and_swap_4(unsigned int param_1,unsigned int param_2,unsigned int param_3)
{
 int iVar1;
 iVar1 = (*(void *)&SUB_ffff0fc0)(param_2,param_3,param_1);
 return iVar1 == 0;
}

// Function: __sync_bool_compare_and_swap_2 @ 0x124f8
bool __sync_bool_compare_and_swap_2(unsigned int param_1,int param_2)
{
 uint uVar1;
 uVar1 = __sync_val_compare_and_swap_2(param_1, param_2, param_2);
 return param_2 == (int)uVar1;
}

// Function: __sync_bool_compare_and_swap_1 @ 0x12514
bool __sync_bool_compare_and_swap_1(unsigned int param_1,int param_2)
{
 int iVar1;
 iVar1 = __sync_val_compare_and_swap_1(param_1, param_2, param_2);
 return param_2 == iVar1;
}

// Function: __sync_lock_test_and_set_4 @ 0x1253c
unsigned int __sync_lock_test_and_set_4(unsigned int *param_1,unsigned int param_2)
{
 int iVar1;
 unsigned int uVar2;
 do {
 uVar2 = *param_1;
 iVar1 = (*(void *)&SUB_ffff0fc0)(uVar2,param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_lock_test_and_set_2 @ 0x12574
int __sync_lock_test_and_set_2(uint param_1,int param_2)
{
 int iVar1;
 uint uVar2;
 int iVar3;
 iVar3 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 iVar1 = (*(void *)&SUB_ffff0fc0)
 (uVar2,(param_2 << iVar3 ^ uVar2) & 0xffff << iVar3 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar1 != 0);
 return (int)(short)((0xffff << iVar3 & uVar2) >> iVar3);
}

// Function: __sync_lock_test_and_set_1 @ 0x125d4
int __sync_lock_test_and_set_1(uint param_1,int param_2)
{
 int iVar1;
 uint uVar2;
 int iVar3;
 iVar3 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 iVar1 = (*(void *)&SUB_ffff0fc0)
 (uVar2,(param_2 << iVar3 ^ uVar2) & 0xff << iVar3 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar1 != 0);
 return (int)(char)((0xff << iVar3 & uVar2) >> iVar3);
}

// Function: __sync_lock_release_8 @ 0x12630
void __sync_lock_release_8(unsigned int *param_1)
{
 // Memory barrier - use compiler intrinsic
 __asm__ __volatile__("" ::: "memory");
 *param_1 = 0;
 param_1[1] = 0;
 return;
}

// Function: __sync_lock_release_4 @ 0x12654
void __sync_lock_release_4(unsigned int *param_1)
{
 // Memory barrier - use compiler intrinsic
 __asm__ __volatile__("" ::: "memory");
 *param_1 = 0;
 return;
}

// Function: __sync_lock_release_2 @ 0x12674
void __sync_lock_release_2(unsigned short *param_1)
{
 // Memory barrier - use compiler intrinsic
 __asm__ __volatile__("" ::: "memory");
 *param_1 = 0;
 return;
}

// Function: __sync_lock_release_1 @ 0x12694
void __sync_lock_release_1(char *param_1)
{
 // Memory barrier - use compiler intrinsic
 __asm__ __volatile__("" ::: "memory");
 *param_1 = 0;
 return;
}

// Function: _fini @ 0x126b4
void _fini(void)
{
 return;
}

