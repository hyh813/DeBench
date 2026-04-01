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
typedef unsigned char byte;
typedef unsigned int uint;
typedef int __pid_t;
extern unsigned long ____stack_chk_guard;
extern unsigned long ___stack_chk_guard;
int counter_1;
int extern_global_var;
char const_string[16];
void call_weak_fn(void);

// Global variables
int global_counter;
unsigned int file_scope_static;
void *global_func_ptr;
char completed_0;
void *__dso_handle;

// String constants (from .rodata)
const char DAT_00101fa8[] = "Stack Memory Tests";
const char DAT_00102118[] = "Heap Memory Tests";
const char DAT_001022e8[] = "Fork failed";
const char DAT_00102278[] = "Child exited with code %d\n";
const char DAT_001022a0[] = "Child terminated by signal %d\n";
const char DAT_00102268[] = "value after free: %d\n";
const char DAT_00102318[] = "Static/Global Memory Tests";
const char DAT_001025c8[] = "Memory Operation Tests";

// Global arrays
unsigned int global_array[10];

// Stack reference
extern unsigned long ___stack_;
unsigned long stack0x00000008 = 0x00000008;

// Function prototypes
void test_stack_memory(void);
void test_heap_memory(void);
void test_static_global(void);
void test_memory_op_functions(void);
int extern_function(int param_1);
void DataMemoryBarrier(int a, int b);

// Standard library function declarations
int printf(const char *__format, ...);
int puts(const char *__s);
void __stack_chk_fail(void);
void __stack_chk_fail_local(void *, void *, unsigned long, unsigned long);
int __printf_chk(int __flag, const char *__format, ...);
void __cxa_finalize(void *);
void *malloc(size_t __size);
void free(void *__ptr);
void *memcpy(void *__dest,void *__src,size_t __n);
void *memmove(void *__dest,void *__src,size_t __n);
void *memset(void *__s,int __c,size_t __n);
void *calloc(size_t __nmemb,size_t __size);
void *realloc(void *__ptr,size_t __size);
int memcmp(void *__s1,void *__s2,size_t __n);
__pid_t fork(void);
__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options);
void exit(int __status);
void abort(void);

// Decompiled by BinaryAI
// SHA256: e94e8ce0bc182f25369574ad058ae54ded483f45d239fcee9fb03d3bf427eeb7

// Function: _init @ 0x100990
int _init(void *ctx)
{
 call_weak_fn();
 return 0;
}

// Function: FUN_001009b0 @ 0x1009b0
void FUN_001009b0(void)
{
 return;
}

// Function: <EXTERNAL>::memcpy @ 0x1009d0
void * memcpy(void *__dest,void *__src,size_t __n)
{
 return __dest;
}

// Function: <EXTERNAL>::memmove @ 0x1009e0
void * memmove(void *__dest,void *__src,size_t __n)
{
 return __dest;
}

// Function: <EXTERNAL>::exit @ 0x1009f0
void exit(int __status)
{
}

// Function: <EXTERNAL>::__libc_start_main @ 0x100a00
void __libc_start_main(void *main_func, void *stack, void *init, void *fini, void *rtld_fini, void *stack_chk_guard)
{
}

// Function: <EXTERNAL>::perror @ 0x100a10
void perror(const char *__s)
{
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x100a20
void __cxa_finalize(void *arg)
{
 (void)arg;
 return;
}

// Function: <EXTERNAL>::fork @ 0x100a30
__pid_t fork(void)
{
 return -1;
}

// Function: <EXTERNAL>::malloc @ 0x100a40
void * malloc(size_t __size)
{
 return 0;
}

// Function: <EXTERNAL>::__printf_chk @ 0x100a50
int __printf_chk(int __flag, const char *__format, ...)
{
 return 0;
}

// Function: <EXTERNAL>::memset @ 0x100a60
void * memset(void *__s,int __c,size_t __n)
{
 return __s;
}

// Function: <EXTERNAL>::calloc @ 0x100a70
void * calloc(size_t __nmemb,size_t __size)
{
 return 0;
}

// Function: <EXTERNAL>::realloc @ 0x100a80
void * realloc(void *__ptr,size_t __size)
{
 return __ptr;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x100a90
void __stack_chk_fail(void)
{
 while(1) { }
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x100aa0
void __gmon_start__(void)
{
 return;
}

// Function: <EXTERNAL>::abort @ 0x100ab0
void abort(void)
{
}

// Function: <EXTERNAL>::puts @ 0x100ac0
int puts(const char *__s)
{
 return 0;
}

// Function: <EXTERNAL>::memcmp @ 0x100ad0
int memcmp(void *__s1,void *__s2,size_t __n)
{
 (void)__s1;
 (void)__s2;
 (void)__n;
 return 0;
}

// Function: <EXTERNAL>::free @ 0x100ae0
void free(void *__ptr)
{
 (void)__ptr;
 return;
}

// Function: <EXTERNAL>::waitpid @ 0x100af0
__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)
{
 (void)__pid;
 (void)__stat_loc;
 (void)__options;
 return -1;
}

// Function: main @ 0x100b00
unsigned long long main(void)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}

// Function: _start @ 0x100b40
void _start(unsigned long long param_1)
{
 void *param_9;
 __libc_start_main(main,param_9,&stack0x00000008,0,0,(void *)param_1);
 abort();
}

// Function: call_weak_fn @ 0x100b74
void call_weak_fn(void)
{
 __gmon_start__();
 return;
}

// Function: deregister_tm_clones @ 0x100b90
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x100bc0
void register_tm_clones(void)
{
 return;
}

// Function: FUN_00100bfc @ 0x100bfc
void FUN_00100bfc(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x100c00
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: double_value @ 0x100c60
int double_value(int param_1)
{
 return param_1 << 1;
}

// Function: local_vars @ 0x100c70
int local_vars(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: FUN_00100c7c @ 0x100c7c
void FUN_00100c7c(int param_1)
{
 int iVar1;
 int *piVar2;
 int aiStack_30 [10];
 int aiStack_8 [2];
 int *piVar3;
 iVar1 = 0;
 piVar2 = aiStack_30;
 do {
 piVar3 = piVar2 + 1;
 *piVar2 = iVar1;
 iVar1 = iVar1 + param_1;
 piVar2 = piVar3;
 } while (piVar3 != aiStack_8);
 return;
}

// Function: local_array @ 0x100c80
void local_array(int param_1)
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

// Function: local_struct @ 0x100ce4
int local_struct(int param_1)
{
 return param_1 * 3;
}

// Function: address_of_local @ 0x100cf0
void address_of_local(unsigned int *param_1)
{
 *param_1 = 0x2a;
 return;
}

// Function: address_of_array @ 0x100d00
int address_of_array(int *param_1)
{
 return *param_1 << 1;
}

// Function: large_stack_frame @ 0x100d10
void large_stack_frame(void)
{
 int iVar1;
 char *puVar2;
 char auStack_808 [1024];
 char local_408;
 long local_8;
 iVar1 = 0;
 local_8 = ____stack_chk_guard;
 puVar2 = auStack_808;
 do {
 *puVar2 = (char)iVar1;
 iVar1 = iVar1 + 1;
 puVar2 = puVar2 + 1;
 } while (iVar1 != 0x800);
 if (local_8 - ____stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: vla_stack @ 0x100d80
void vla_stack(unsigned long param_1)
{
 long lVar1;
 char *puVar2;
 char *puVar3;
 unsigned long uVar5;
 long lVar6;
 char auStack_30 [16];
 char *puVar4;
 puVar3 = auStack_30;
 puVar4 = auStack_30;
 if ((int)param_1 - 1U < 1000) {
 uVar5 = (-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2) + 0xf;
 puVar2 = auStack_30;
 while (puVar4 != auStack_30 + -(uVar5 & 0xffffffffffff0000)) {
 puVar3 = puVar2 + -0x10000;
 *(unsigned long long *)(puVar2 + -0xfc00) = 0;
 puVar4 = puVar2 + -0x10000;
 puVar2 = puVar2 + -0x10000;
 }
 uVar5 = uVar5 & 0xfff0;
 lVar1 = -uVar5;
 *(unsigned long long *)(puVar3 + lVar1) = 0;
 if (0x3ff < uVar5) {
 *(unsigned long long *)(puVar3 + lVar1 + 0x400) = 0;
 }
 lVar6 = 0;
 do {
 *(int *)(puVar3 + lVar6 * 4 + lVar1 + 0x10) = (int)lVar6 << 1;
 lVar6 = lVar6 + 1;
 } while ((int)lVar6 < (int)param_1);
 }
 return;
}

// Function: alloca_usage @ 0x100e50
void alloca_usage(unsigned long param_1)
{
 long lVar1;
 char *puVar2;
 char *puVar3;
 int iVar5;
 unsigned long uVar6;
 int *piVar7;
 char auStack_30 [16];
 char *puVar4;
 puVar3 = auStack_30;
 puVar4 = auStack_30;
 if (0 < (int)param_1) {
 uVar6 = (-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2) + 0xf;
 puVar2 = auStack_30;
 while (puVar4 != auStack_30 + -(uVar6 & 0xffffffffffff0000)) {
 puVar3 = puVar2 + -0x10000;
 *(unsigned long long *)(puVar2 + -0xfc00) = 0;
 puVar4 = puVar2 + -0x10000;
 puVar2 = puVar2 + -0x10000;
 }
 uVar6 = uVar6 & 0xfff0;
 lVar1 = -uVar6;
 *(unsigned long long *)(puVar3 + lVar1) = 0;
 if (0x3ff < uVar6) {
 *(unsigned long long *)(puVar3 + lVar1 + 0x400) = 0;
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

// Function: stack_alias @ 0x100f20
unsigned long long stack_alias(void)
{
 return 0x14;
}

// Function: test_stack_memory @ 0x100f30
void test_stack_memory(void)
{
 unsigned int uVar1;
 puts(DAT_00101fa8);
 printf("MEM-L1-01 (local_vars): %d\n",0x14);
 printf("MEM-L1-02 (local_array): %d\n",10);
 printf("MEM-L1-03 (local_struct): %d\n",0xf);
 printf("MEM-L1-04 (address_of_local): %d\n",0x2a);
 printf("MEM-L1-05 (address_of_array): %d\n",2);
 uVar1 = large_stack_frame();
 printf("MEM-L2-01 (large_stack_frame): %d\n",uVar1);
 printf("MEM-L2-02 (vla_stack): %d\n",10);
 uVar1 = alloca_usage(10);
 printf("MEM-L2-03 (alloca_usage): %d\n",uVar1);
 printf("MEM-L2-04 (stack_alias): %d\n",0x14);
 return;
}

// Function: heap_basic @ 0x101010
unsigned int heap_basic(unsigned long param_1)
{
 int iVar1;
 void *__ptr;
 long lVar2;
 unsigned int uVar3;
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
 uVar3 = *(unsigned int *)((long)__ptr + (long)(iVar1 / 2) * 4);
 free(__ptr);
 }
 return uVar3;
}

// Function: heap_calloc @ 0x101074
int heap_calloc(int param_1)
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

// Function: heap_realloc @ 0x1010e0
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
 *__ptr = 0x20000001;
 __ptr[1] = 0x40000003;
 __ptr[2] = 5;
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

// Function: heap_array @ 0x101164
int heap_array(unsigned long param_1)
{
 int *__ptr;
 int iVar1;
 int *piVar2;
 int iVar3;
 iVar3 = (int)param_1;
 __ptr = (int *)malloc(-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2);
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

// Function: heap_struct @ 0x1011d0
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

// Function: FUN_0010120c @ 0x10120c
unsigned long long FUN_0010120c(unsigned long long *param_1)
{
 unsigned int *__ptr;
 unsigned int *puVar1;
 unsigned long long uVar2;
 __ptr = (unsigned int *)malloc(0x10);
 *param_1 = __ptr;
 if (__ptr == (unsigned int *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 *__ptr = 10;
 puVar1 = (unsigned int *)malloc(0x10);
 *(unsigned int **)(__ptr + 2) = puVar1;
 if (puVar1 == (unsigned int *)0x0) {
 free(__ptr);
 uVar2 = 0xfffffffe;
 }
 else {
 uVar2 = 0;
 *puVar1 = 0x14;
 *(unsigned long long *)(puVar1 + 2) = 0;
 }
 }
 return uVar2;
}

// Function: heap_nested @ 0x101210
unsigned long long heap_nested(unsigned long long *param_1)
{
 unsigned int *__ptr;
 unsigned int *puVar1;
 unsigned long long uVar2;
 __ptr = (unsigned int *)malloc(0x10);
 *param_1 = __ptr;
 if (__ptr == (unsigned int *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 *__ptr = 10;
 puVar1 = (unsigned int *)malloc(0x10);
 *(unsigned int **)(__ptr + 2) = puVar1;
 if (puVar1 == (unsigned int *)0x0) {
 free(__ptr);
 uVar2 = 0xfffffffe;
 }
 else {
 uVar2 = 0;
 *puVar1 = 0x14;
 *(unsigned long long *)(puVar1 + 2) = 0;
 }
 }
 return uVar2;
}

// Function: linked_list_heap @ 0x101284
int linked_list_heap(void)
{
 int iVar1;
 int *piVar2;
 int *piVar3;
 int *__ptr;
 int *piVar4;
 int iVar5;
 iVar5 = 0;
 piVar4 = (int *)0x0;
 piVar3 = (int *)0x0;
 do {
 piVar2 = (int *)malloc(0x10);
 if (piVar2 == (int *)0x0) {
 while (piVar3 != (int *)0x0) {
 piVar4 = *(int **)(piVar3 + 2);
 free(piVar3);
 piVar3 = piVar4;
 }
 return -1;
 }
 *piVar2 = iVar5;
 *(unsigned long long *)(piVar2 + 2) = 0;
 __ptr = piVar2;
 if (piVar3 != (int *)0x0) {
 *(int **)(piVar4 + 2) = piVar2;
 __ptr = piVar3;
 }
 iVar5 = iVar5 + 10;
 piVar4 = piVar2;
 piVar3 = __ptr;
 } while (iVar5 != 0x32);
 iVar5 = 0;
 do {
 iVar1 = *piVar3;
 piVar3 = *(int **)(piVar3 + 2);
 iVar5 = iVar5 + iVar1;
 } while (piVar3 != (int *)0x0);
 do {
 piVar3 = *(int **)(__ptr + 2);
 free(__ptr);
 __ptr = piVar3;
 } while (piVar3 != (int *)0x0);
 return iVar5;
}

// Function: create_tree_node @ 0x101330
void create_tree_node(unsigned int param_1)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)malloc(0x18);
 if (puVar1 != (unsigned int *)0x0) {
 *puVar1 = param_1;
 *(unsigned long long *)(puVar1 + 2) = 0;
 *(unsigned long long *)(puVar1 + 4) = 0;
 }
 return;
}

// Function: tree_heap_traversal @ 0x101360
unsigned long long tree_heap_traversal(void)
{
 void *__ptr;
 void *pvVar1;
 void *__ptr_00;
 unsigned long long uVar2;
 __ptr = malloc(0x18);
 if (__ptr == (void *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 pvVar1 = malloc(0x18);
 if (pvVar1 == (void *)0x0) {
 pvVar1 = malloc(0x18);
 if (pvVar1 != (void *)0x0) {
 free(pvVar1);
 }
 }
 else {
 __ptr_00 = malloc(0x18);
 if (__ptr_00 != (void *)0x0) {
 free(pvVar1);
 free(__ptr_00);
 free(__ptr);
 return 0x3c;
 }
 free(pvVar1);
 }
 free(__ptr);
 uVar2 = 0xfffffffe;
 }
 return uVar2;
}

// Function: memory_leak @ 0x101410
unsigned int memory_leak(unsigned long param_1)
{
 int iVar1;
 unsigned int uVar2;
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
 uVar2 = *(unsigned int *)((long)pvVar3 + (long)(iVar1 / 2) * 4);
 }
 return uVar2;
}

// Function: dangling_pointer @ 0x101470
unsigned int dangling_pointer(void)
{
 unsigned int uVar1;
 unsigned int *__ptr;
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

// Function: double_free @ 0x1014c0
unsigned int double_free(unsigned int *param_1)
{
 unsigned int uVar1;
 void *__ptr;
 if (param_1 != (unsigned int *)0x0) {
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

// Function: FUN_0010150c @ 0x10150c
int FUN_0010150c(void)
{
 int *__ptr;
 int iVar1;
 int *piVar2;
 __ptr = (int *)malloc(0x28);
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

// Function: heap_overflow @ 0x101510
int heap_overflow(void)
{
 int *__ptr;
 int iVar1;
 int *piVar2;
 __ptr = (int *)malloc(0x28);
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

// Function: test_heap_memory @ 0x101560
void test_heap_memory(void)
{
 unsigned int uVar1;
 __pid_t __pid;
 void *pvVar2;
 int *piVar3;
 unsigned long long *puVar4;
 unsigned long long *puVar5;
 long lVar6;
 int *piVar7;
 unsigned long long uVar9;
 int iVar10;
 uint local_c;
 long local_8;
 int *piVar8;
 local_8 = ____stack_chk_guard;
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
 uVar1 = *(unsigned int *)((long)pvVar2 + 0x14);
 free(pvVar2);
 }
 printf("HEAP-L2-01 (heap_basic): %d\n",uVar1);
 piVar3 = (int *)calloc(5,4);
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
 printf("HEAP-L2-02 (heap_calloc): %d\n",iVar10);
 uVar1 = heap_realloc();
 printf("HEAP-L2-03 (heap_realloc): %d\n",uVar1);
 piVar3 = (int *)malloc(0x28);
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
 printf("HEAP-L2-04 (heap_array): %d\n",iVar10);
 pvVar2 = malloc(8);
 if (pvVar2 == (void *)0x0) {
 uVar9 = 0xffffffff;
 }
 else {
 free(pvVar2);
 uVar9 = 0xf;
 }
 printf("HEAP-L2-05 (heap_struct): %d\n",uVar9);
 pvVar2 = malloc(0x10);
 if (pvVar2 == (void *)0x0) {
 printf("HEAP-L2-06 (heap_nested): %d\n",0xffffffff);
 }
 else {
 puVar4 = (unsigned int *)malloc(0x10);
 *(unsigned int **)((long)pvVar2 + 8) = puVar4;
 if (puVar4 == (unsigned int *)0x0) {
 free(pvVar2);
 uVar9 = 0xfffffffe;
 }
 else {
 uVar9 = 0;
 *puVar4 = 0x14;
 *(unsigned long long *)(puVar4 + 2) = 0;
 }
 printf("HEAP-L2-06 (heap_nested): %d\n",uVar9);
 free(*(void **)((long)pvVar2 + 8));
 free(pvVar2);
 }
 uVar1 = linked_list_heap();
 printf("HEAP-L3-01 (linked_list_heap): %d\n",uVar1);
 uVar1 = tree_heap_traversal();
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n",uVar1);
 puVar5 = (unsigned long long *)malloc(0x14);
 if (puVar5 == (unsigned long long *)0x0) {
 uVar9 = 0xffffffff;
 }
 else {
 uVar9 = 2;
 *puVar5 = 0x100000000;
 puVar5[1] = 0x300000002;
 *(unsigned int *)(puVar5 + 2) = 4;
 }
 printf("HEAP-L3-03 (memory_leak): %d\n",uVar9);
 printf("HEAP-L3-04 (dangling_pointer): ");
 __pid = fork();
 if (__pid != 0) {
 if (__pid < 1) {
 lVar6 = local_8 - ____stack_chk_guard;
 if (lVar6 == 0) {
   perror(DAT_001022e8);
 }
 }
 else {
  waitpid(__pid,(int *)&local_c,0);
  if ((local_c & 0x7f) == 0) {
   printf(DAT_00102278,local_c >> 8 & 0xff);
  }
  else if (0 < (int)((long)((unsigned long)((local_c & 0x7f) + 1) << 0x38) >> 0x39)) {
   printf(DAT_001022a0);
  }
 lVar6 = local_8 - ____stack_chk_guard;
 if (lVar6 == 0) {
 }
 }
 if (local_8 != ____stack_chk_guard) {
 __stack_chk_fail();
 }
 }
 puVar4 = (unsigned int *)malloc(4);
 if (puVar4 == (unsigned int *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 printf("value before free: %d\n",0x2a);
 free(puVar4);
 uVar1 = *puVar4;
 }
 printf(DAT_00102268,uVar1);
 exit(0);
}

// Function: global_var_access @ 0x1018c0
void global_var_access(void)
{
 global_counter = global_counter + 1;
 return;
}

// Function: global_var_read @ 0x1018d4
int global_var_read(void)
{
 return global_counter << 1;
}

// Function: global_array_access @ 0x1018e4
unsigned int global_array_access(uint param_1)
{
 if (param_1 < 10) {
 return *(unsigned int *)(&global_array + (long)(int)param_1 * 4);
 }
 return 0xffffffff;
}

// Function: static_local @ 0x101904
void static_local(int param_1)
{
 if (param_1 == 0) {
 counter_1 = counter_1 + 1;
 return;
 }
 counter_1 = 0;
 return;
}

// Function: call_static_func @ 0x101940
int call_static_func(int param_1)
{
 return param_1 * 2 + 1;
}

// Function: access_extern_global @ 0x101950
int access_extern_global(void)
{
 return extern_global_var + 100;
}

// Function: call_extern_func @ 0x101964
void call_extern_func(void)
{
 extern_function(5);
 return;
}

// Function: read_const_data @ 0x101970
int read_const_data(void)
{
 return (byte)const_string[4] + 0x2a;
}

// Function: access_bss_var @ 0x101984
unsigned long long access_bss_var(void)
{
 return 0;
}

// Function: access_bss_buffer @ 0x101990
unsigned long long access_bss_buffer(void)
{
 return 0;
}

// Function: global_struct_access @ 0x1019a0
unsigned long long global_struct_access(void)
{
 return 0x1e;
}

// Function: set_file_static @ 0x1019b0
void set_file_static(unsigned int param_1)
{
 file_scope_static = param_1;
 return;
}

// Function: get_file_static @ 0x1019c0
unsigned int get_file_static(void)
{
 return file_scope_static;
}

// Function: set_global_callback @ 0x1019d0
void set_global_callback(unsigned long long param_1)
{
 global_func_ptr = (void *)param_1;
 return;
}

// Function: call_global_callback @ 0x1019e0
unsigned long long call_global_callback(void)
{
 unsigned long long uVar1;
 if (global_func_ptr != (void *)0x0) {
 uVar1 = (*global_func_ptr)();
 return uVar1;
 }
 return 0xffffffff;
}

// Function: global_heap_store @ 0x101a00
unsigned int global_heap_store(unsigned int *param_1)
{
 if (param_1 != (unsigned int *)0x0) {
 return *param_1;
 }
 return 0xffffffff;
}

// Function: static_complex_init @ 0x101a14
unsigned long long static_complex_init(void)
{
 return 0xf;
}

// Function: tls_access @ 0x101a20
int tls_access(int param_1)
{
 return param_1 << 1;
}

// Function: init_order_test @ 0x101a30
unsigned long long init_order_test(void)
{
 return 0x14;
}

// Function: test_static_global @ 0x101a40
void test_static_global(void)
{
 unsigned int uVar1;
 puts(DAT_00102318);
 global_counter = global_counter + 1;
 printf("STM-L1-01 (global_var_access): %d\n",global_counter);
 printf("STM-L1-01 (global_var_read): %d\n",global_counter << 1);
 printf("STM-L1-02 (global_array_access): %d\n",5);
 counter_1 = 1;
 printf("STM-L1-03 (static_local): %d\n",1);
 counter_1 = counter_1 + 1;
 printf("STM-L1-03 (static_local): %d\n",counter_1);
 printf("STM-L1-04 (call_static_func): %d\n",0xb);
 printf("STM-L2-01 (access_extern_global): %d\n",extern_global_var + 100);
 uVar1 = extern_function(5);
 printf("STM-L2-02 (call_extern_func): %d\n",uVar1);
 printf("STM-L2-03 (read_const_data): %d\n",(byte)const_string[4] + 0x2a);
 printf("STM-L2-04 (access_bss_var): %d\n",0);
 printf("STM-L2-04 (access_bss_buffer): %d\n",0);
 printf("STM-L2-05 (global_struct_access): %d\n",0x1e);
 file_scope_static = 0x32;
 printf("STM-L2-06 (file_static): %d\n",file_scope_static);
 global_func_ptr = (void *)double_value;
 printf("STM-L2-07 (global_func_ptr): %d\n",10);
 printf("STM-L2-08 (global_heap_store): %d\n",(unsigned int)100);
 printf("STM-L2-09 (static_complex_init): %d\n",0xf);
 printf("STM-L3-01 (tls_access): %d\n",0x14);
 printf("STM-L3-02 (init_order_test): %d\n",0x14);
 return;
}

// Function: memop_memset @ 0x101c30
unsigned long memop_memset(byte *param_1,size_t param_2,int param_3)
{
 if (param_1 != (byte *)0x0 && param_2 != 0) {
 memset(param_1,param_3,param_2);
 return (unsigned long)*param_1;
 }
 return 0xffffffff;
}

// Function: memop_memcpy @ 0x101c74
unsigned int memop_memcpy(void *param_1,void *param_2,size_t param_3)
{
 if ((param_2 != (void *)0x0 && param_3 != 0) && param_1 != (void *)0x0) {
 memcpy(param_1,param_2,param_3);
 return *(unsigned int *)((long)param_1 + ((param_3 & 0xfffffffffffffffc) - 4));
 }
 return 0xffffffff;
}

// Function: memop_memmove @ 0x101cc0
unsigned long memop_memmove(void *param_1,long param_2)
{
 if ((param_1 != (void *)0x0 && param_2 != 0) && (param_1 == (void *)0x0 || param_2 != 1)) {
 memmove((void *)((long)param_1 + 1),param_1,param_2 - 1);
 return (unsigned long)*(byte *)((long)param_1 + 1);
 }
 return 0xffffffff;
}

// Function: memop_memcmp @ 0x101d04
int memop_memcmp(void *param_1,void *param_2,size_t param_3)
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

// Function: memop_bzero @ 0x101d40
unsigned long memop_bzero(byte *param_1,size_t param_2)
{
 if (param_1 != (byte *)0x0) {
 memset(param_1,0,param_2);
 return (unsigned long)*param_1;
 }
 return 0xffffffff;
}

// Function: memop_bcopy @ 0x101d80
unsigned long memop_bcopy(void *param_1,void *param_2,size_t param_3)
{
 byte *pbVar1;
 if ((param_2 != (void *)0x0 && param_3 != 0) && param_1 != (void *)0x0) {
 pbVar1 = (byte *)memmove(param_2,param_1,param_3);
 return (unsigned long)*pbVar1;
 }
 return 0xffffffff;
}

// Function: memop_unaligned_access @ 0x101dc0
unsigned int memop_unaligned_access(long param_1)
{
 if (param_1 != 0) {
 return *(unsigned int *)(param_1 + 1);
 }
 return 0xffffffff;
}

// Function: memop_memory_barrier @ 0x101dd4
int memop_memory_barrier(int *param_1)
{
 if (param_1 != (int *)0x0) {
 DataMemoryBarrier(2,3);
 return *param_1 + *param_1;
 }
 return -1;
}

// Function: test_memory_op_functions @ 0x101df4
void test_memory_op_functions(void)
{
 int iVar1;
 int iVar2;
 unsigned long long local_148;
 unsigned int local_140;
 unsigned long long local_138;
 unsigned int local_130;
 unsigned long long local_128;
 unsigned short local_120;
 char local_118 [7];
 unsigned int uStack_111;
 unsigned long long local_108;
 unsigned short local_100;
 long local_8;
 local_8 = ____stack_chk_guard;
 puts(DAT_001025c8);
 local_108 = 0x4141414141414141;
 local_100 = 0x4141;
 printf("MEMOP-L2-01: %d\n",0x41);
 printf("MEMOP-L2-02: %d\n",0x32);
 memmove(local_118 + 1,local_118,9);
 printf("MEMOP-L2-03: %c\n",0x48);
 local_148 = 0x200000001;
 local_140 = 3;
 local_138 = 0x200000001;
 local_130 = 4;
 iVar2 = memcmp(&local_148,&local_138,0xc);
 iVar1 = -(uint)(iVar2 != 0);
 if (0 < iVar2) {
 iVar1 = 1;
 }
 printf("MEMOP-L2-04: %d\n",iVar1);
 local_128 = 0;
 local_120 = 0;
 printf("MEMOP-L2-05: %d\n",0);
 printf("MEMOP-L2-06: %d\n",1);
 printf("MEMOP-L3-01: 0x%x\n",0x4030201);
 DataMemoryBarrier(2,3);
 if (local_8 == ____stack_chk_guard) {
 printf("MEMOP-L3-02: %d\n",10);
 return;
 }
 __stack_chk_fail();
}

// Function: extern_function @ 0x101f80
int extern_function(int param_1)
{
 return param_1 * 3;
}

// Function: _fini @ 0x101f88
void _fini(void)
{
 return;
}

