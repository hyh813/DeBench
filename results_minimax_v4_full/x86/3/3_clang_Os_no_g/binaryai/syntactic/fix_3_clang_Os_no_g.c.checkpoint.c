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
typedef int __pid_t;
typedef unsigned char byte;
typedef unsigned int uint;
typedef int bool;
#define true 1
#define false 0
#define NULL ((void*)0)

// Forward declarations
unsigned int main(void);

// Forward declarations for external functions
int double_value(int param_1);
int extern_function(int param_1);

// External function declarations (to avoid recursive calls)
extern void *memmove(void *__dest, const void *__src, size_t __n);
extern void free(void *__ptr);
extern void *memcpy(void *__dest, const void *__src, size_t __n);
extern int memcmp(const void *__s1, const void *__s2, size_t __n);
extern void perror(const char *__s);
extern __pid_t waitpid(__pid_t __pid, int *__stat_loc, int __options);
extern void *realloc(void *__ptr, size_t __size);
extern void *malloc(size_t __size);
extern int puts(const char *__s);
extern void exit(int __status);
extern void *memset(void *__s, int __c, size_t __n);
extern __pid_t fork(void);
extern void *calloc(size_t __nmemb, size_t __size);

// Global variables used in the code
int global_counter = 0;
int static_local_counter = 0;
unsigned int file_scope_static = 0;
int (*global_func_ptr)(int) = NULL;
void *global_heap_ptr = NULL;
extern int extern_global_var;
extern char const_string[];
char DAT_000135c1[] = "Stack Memory Test\n";
char DAT_000135df[] = "Heap Memory Test\n";
char DAT_000135fd[] = "Static and Global Test\n";
char DAT_00013621[] = "Memory Operations Test\n";
extern char DAT_00013670[];
extern char DAT_0001367c[];
extern char DAT_000132e3[];
extern char DAT_0001327d[];
extern char DAT_000132a2[];
extern char DAT_0001326d[];

// External functions from CRT
extern void __gmon_start__(void);
extern void frame_dummy(void);

// Decompiled by BinaryAI
// SHA256: 86c4770f3780f70aff6bef1d7c458f6a7220d0e3371833f1d72a4ba46c99331c



// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x11040
int __libc_start_main(void *main_func, void *argc, void *argv, void *init, void *fini, void *rtld_fini, void *stack_end)
{
 return 0;
}

// Function: <EXTERNAL>::printf @ 0x11050
int printf(char *__format,...)
{
 return 0;
}

// Function: <EXTERNAL>::memmove @ 0x11060
void * ext_memmove(void *__dest,void *__src,size_t __n)
{
 return memmove(__dest,__src,__n);
}

// Function: <EXTERNAL>::free @ 0x11070
void ext_free(void *__ptr)
{
 free(__ptr);
 return;
}

// Function: <EXTERNAL>::memcpy @ 0x11080
void * ext_memcpy(void *__dest,void *__src,size_t __n)
{
 void *pvVar1;
 pvVar1 = memcpy(__dest,__src,__n);
 return pvVar1;
}

// Function: <EXTERNAL>::memcmp @ 0x11090
int ext_memcmp(void *__s1,void *__s2,size_t __n)
{
 int iVar1;
 iVar1 = memcmp(__s1,__s2,__n);
 return iVar1;
}

// Function: <EXTERNAL>::perror @ 0x110a0
void ext_perror(char *__s)
{
 perror(__s);
 return;
}

// Function: <EXTERNAL>::waitpid @ 0x110b0
__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)
{
 __pid_t _Var1;
 _Var1 = waitpid(__pid,__stat_loc,__options);
 return _Var1;
}

// Function: <EXTERNAL>::realloc @ 0x110c0
void * ext_realloc(void *__ptr,size_t __size)
{
 void *pvVar1;
 pvVar1 = realloc(__ptr,__size);
 return pvVar1;
}

// Function: <EXTERNAL>::malloc @ 0x110d0
void * malloc(size_t __size)
{
 void *pvVar1;
 pvVar1 = malloc(__size);
 return pvVar1;
}

// Function: <EXTERNAL>::puts @ 0x110e0
int ext_puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::exit @ 0x110f0
void ext_exit(int __status)
{
 exit(__status);
}

// Function: <EXTERNAL>::memset @ 0x11100
void * memset(void *__s,int __c,size_t __n)
{
 void *pvVar1;
 pvVar1 = memset(__s,__c,__n);
 return pvVar1;
}

// Function: <EXTERNAL>::fork @ 0x11110
__pid_t fork(void)
{
 __pid_t _Var1;
 _Var1 = fork();
 return _Var1;
}

// Function: <EXTERNAL>::calloc @ 0x11120
void * calloc(size_t __nmemb,size_t __size)
{
 void *pvVar1;
 pvVar1 = calloc(__nmemb,__size);
 return pvVar1;
}

// Function: FUN_00011130 @ 0x11130
void FUN_00011130(void)
{
 return;
}











// Function: __x86.get_pc_thunk.dx @ 0x112a9
void __x86_get_pc_thunk_dx(void)
{
 return;
}



// Function: local_vars @ 0x112b4
int local_vars(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: local_array @ 0x112be
unsigned int local_array(int param_1)
{
 int iVar1;
 int iVar2;
 int local_28 [10];
 iVar1 = 0;
 iVar2 = 0;
 do {
 local_28[iVar2] = iVar1;
 iVar2 = iVar2 + 1;
 iVar1 = iVar1 + param_1;
 } while (iVar2 != 10);
 return local_28[5];
}

// Function: local_struct @ 0x112dc
int local_struct(int param_1)
{
 return param_1 * 3;
}

// Function: address_of_local @ 0x112e4
unsigned int address_of_local(unsigned int *param_1)
{
 *param_1 = 0x2a;
 return 0x2a;
}

// Function: address_of_array @ 0x112f4
int address_of_array(int *param_1)
{
 return *param_1 * 2;
}

// Function: large_stack_frame @ 0x112fd
int large_stack_frame(void)
{
 int iVar1;
 char local_800 [2048];
 iVar1 = 0;
 do {
 local_800[iVar1] = (char)iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x800);
 return (int)local_800[1024];
}

// Function: vla_stack @ 0x1131f
unsigned int vla_stack(int param_1)
{
 int iVar1;
 unsigned int uVar2;
 int iVar3;
 int iVar4;
 int local_stack [1];
 if (param_1 - 0x3e9U < 0xfffffc18) {
 uVar2 = 0xffffffff;
 }
 else {
 iVar1 = -0xc - (param_1 * 4 + 0xfU & 0xfffffff0);
 iVar3 = 0;
 iVar4 = param_1;
 do {
 *(int *)((int)local_stack + iVar3 * 2 + iVar1 + 0xc) = iVar3;
 iVar3 = iVar3 + 2;
 iVar4 = iVar4 + -1;
 } while (iVar4 != 0);
 uVar2 = *(unsigned int *)
 ((int)local_stack + (param_1 - (param_1 >> 0x1f) & 0xfffffffeU) * 2 + iVar1 + 0xc);
 }
 return uVar2;
}

// Function: alloca_usage @ 0x1136f
unsigned int alloca_usage(int param_1_00,int param_1)
{
 int iVar1;
 unsigned int uVar2;
 int iVar3;
 int iVar4;
 int iStack_c;
 iStack_c = param_1_00;
 if (param_1 < 1) {
 uVar2 = 0xffffffff;
 }
 else {
 iVar1 = -0xc - (param_1 * 4 + 0xfU & 0xfffffff0);
 iVar3 = 0;
 iVar4 = 0;
 do {
 *(int *)((int)&iStack_c + iVar4 * 4 + iVar1 + 0xc) = iVar3;
 iVar4 = iVar4 + 1;
 iVar3 = iVar3 + 3;
 } while (param_1 != iVar4);
 uVar2 = *(unsigned int *)
 ((int)&iStack_c + (param_1 - (param_1 >> 0x1f) & 0xfffffffeU) * 2 + iVar1 + 0xc);
 }
 return uVar2;
}

// Function: stack_alias @ 0x113b2
unsigned int stack_alias(void)
{
 return 0x14;
}

// Function: test_stack_memory @ 0x113b8
void test_stack_memory(void)
{
 int iVar1;
 int *piVar2;
 int local_80c [256];
 char local_40c;
 puts(&DAT_000135c1);
 printf("MEM-L1-01 (local_vars): %d\n",0x14);
 iVar1 = 0;
 do {
 *(int *)((int)local_80c + iVar1 * 2) = iVar1;
 iVar1 = iVar1 + 2;
 } while (iVar1 != 0x14);
 printf("MEM-L1-02 (local_array): %d\n",local_80c[5]);
 printf("MEM-L1-03 (local_struct): %d\n",0xf);
 printf("MEM-L1-04 (address_of_local): %d\n",0x2a);
 printf("MEM-L1-05 (address_of_array): %d\n",2);
 iVar1 = 0;
 do {
 *(char *)((int)local_80c + iVar1) = (char)iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x800);
 printf("MEM-L2-01 (large_stack_frame): %d\n",(int)local_40c);
 iVar1 = 0;
 do {
 *(int *)((int)local_80c + iVar1 * 2) = iVar1;
 iVar1 = iVar1 + 2;
 } while (iVar1 != 0x14);
 piVar2 = local_80c;
 printf("MEM-L2-02 (vla_stack): %d\n",local_80c[5]);
 iVar1 = 0;
 do {
 *piVar2 = iVar1;
 iVar1 = iVar1 + 3;
 piVar2 = piVar2 + 1;
 } while (iVar1 != 0x1e);
 printf("MEM-L2-03 (alloca_usage): %d\n",local_80c[5]);
 printf("MEM-L2-04 (stack_alias): %d\n",0x14);
 return;
}

// Function: heap_basic @ 0x114ed
unsigned int heap_basic(int param_1)
{
 void *__ptr;
 int iVar1;
 int iVar2;
 unsigned int uVar3;
 __ptr = malloc(param_1 * 4);
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
 uVar3 = *(unsigned int *)((int)__ptr + (param_1 - (param_1 >> 0x1f) & 0xfffffffeU) * 2);
 free(__ptr);
 }
 return uVar3;
}

// Function: heap_calloc @ 0x11546
int heap_calloc(size_t param_1)
{
 void *__ptr;
 size_t sVar1;
 int iVar2;
 __ptr = calloc(param_1,4);
 if (__ptr == (void *)0x0) {
 iVar2 = -1;
 }
 else {
 iVar2 = 0;
 if (1 < (int)param_1) {
 iVar2 = 0;
 sVar1 = 1;
 do {
 iVar2 = iVar2 + *(int *)((int)__ptr + sVar1 * 4);
 sVar1 = sVar1 + 1;
 } while (param_1 != sVar1);
 }
 free(__ptr);
 }
 return iVar2;
}

// Function: heap_realloc @ 0x1159a
unsigned int heap_realloc(void)
{
 void *__ptr;
 int iVar1;
 void *__ptr_00;
 int *piVar2;
 int iVar3;
 unsigned int uVar4;
 __ptr = malloc(0x14);
 if (__ptr == (void *)0x0) {
 uVar4 = 0xffffffff;
 }
 else {
 iVar1 = 1;
 do {
 *(int *)((int)__ptr + iVar1 * 4 + -4) = iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 6);
 iVar1 = *(int *)((int)__ptr + 8);
 __ptr_00 = realloc(__ptr,0x28);
 if (__ptr_00 == (void *)0x0) {
 uVar4 = 0xfffffffe;
 __ptr_00 = __ptr;
 }
 else {
 piVar2 = (int *)((int)__ptr_00 + 0x14);
 iVar3 = 0x32;
 do {
 *piVar2 = iVar3;
 iVar3 = iVar3 + 10;
 piVar2 = piVar2 + 1;
 } while (iVar3 != 100);
 uVar4 = 0xfffffffd;
 if (*(int *)((int)__ptr_00 + 8) == iVar1) {
 uVar4 = *(unsigned int *)((int)__ptr_00 + 0x14);
 }
 }
 free(__ptr_00);
 }
 return uVar4;
}

// Function: heap_array @ 0x11627
unsigned int heap_array(int param_1)
{
 void *__ptr;
 int iVar1;
 int iVar2;
 unsigned int uVar3;
 __ptr = malloc(param_1 * 4);
 if (__ptr == (void *)0x0) {
 uVar3 = 0xffffffff;
 }
 else {
 if (0 < param_1) {
 iVar1 = 0;
 iVar2 = 0;
 do {
 *(int *)((int)__ptr + iVar2 * 4) = iVar1;
 iVar2 = iVar2 + 1;
 iVar1 = iVar1 + 3;
 } while (param_1 != iVar2);
 }
 uVar3 = *(unsigned int *)((int)__ptr + (param_1 - (param_1 >> 0x1f) & 0xfffffffeU) * 2);
 free(__ptr);
 }
 return uVar3;
}

// Function: heap_struct @ 0x11682
int heap_struct(int param_1)
{
 return param_1 * 3;
}

// Function: heap_nested @ 0x1168a
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
 *puVar1 = 0x14;
 puVar1[1] = 0;
 uVar2 = 0;
 }
 }
 return uVar2;
}

// Function: linked_list_heap @ 0x116f7
int linked_list_heap(void)
{
 int **ppiVar1;
 int *piVar2;
 int *piVar3;
 int iVar4;
 uint uVar5;
 int *piVar6;
 int *__ptr;
 bool bVar7;
 int *local_14;
 piVar2 = (int *)malloc(8);
 if (piVar2 == (int *)0x0) {
 bVar7 = true;
 __ptr = (int *)0x0;
 }
 else {
 iVar4 = 0;
 uVar5 = 0;
 local_14 = (int *)0x0;
 piVar6 = (int *)0x0;
 do {
 piVar3 = piVar2;
 *piVar3 = iVar4;
 piVar3[1] = 0;
 __ptr = piVar3;
 if (piVar6 != (int *)0x0) {
 local_14[1] = (int)piVar3;
 __ptr = piVar6;
 }
 if (uVar5 == 0xfffffffc) {
 bVar7 = false;
 goto LAB_00011798;
 }
 piVar2 = (int *)malloc(8);
 uVar5 = uVar5 - 1;
 iVar4 = iVar4 + 10;
 piVar6 = __ptr;
 local_14 = piVar3;
 } while (piVar2 != (int *)0x0);
 bVar7 = ~uVar5 < 4;
 }
 if (__ptr == (int *)0x0) {
 __ptr = (int *)0x0;
 }
 else {
 do {
 piVar2 = (int *)__ptr[1];
 free(__ptr);
 __ptr = piVar2;
 } while (piVar2 != (int *)0x0);
 __ptr = (int *)0x0;
 }
LAB_00011798:
 if (bVar7) {
 iVar4 = -1;
 }
 else {
 iVar4 = 0;
 piVar2 = __ptr;
 if (__ptr != (int *)0x0) {
 do {
 iVar4 = iVar4 + *piVar2;
 ppiVar1 = (int **)(piVar2 + 1);
 piVar2 = *ppiVar1;
 } while (*ppiVar1 != (int *)0x0);
 while (__ptr != (int *)0x0) {
 piVar2 = (int *)__ptr[1];
 free(__ptr);
 __ptr = piVar2;
 }
 }
 }
 return iVar4;
}

// Function: create_tree_node @ 0x117d1
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

// Function: tree_heap_traversal @ 0x11804
unsigned int tree_heap_traversal(void)
{
 return 0x3c;
}

// Function: memory_leak @ 0x1180a
unsigned int memory_leak(int param_1)
{
 void *pvVar1;
 unsigned int uVar2;
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
 uVar2 = *(unsigned int *)((int)pvVar1 + (param_1 - (param_1 >> 0x1f) & 0xfffffffeU) * 2);
 }
 return uVar2;
}

// Function: dangling_pointer @ 0x11856
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

// Function: double_free @ 0x118a4
unsigned int double_free(unsigned int *param_1)
{
 if (param_1 != (unsigned int *)0x0) {
 return *param_1;
 }
 return 0xfffffffe;
}

// Function: heap_overflow @ 0x118b5
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

// Function: test_heap_memory @ 0x118ff
void test_heap_memory(void)
{
 unsigned int uVar1;
 void *pvVar2;
 __pid_t __pid;
 uint uVar3;
 int iVar4;
 char *__format;
 uint local_10;
 void *local_c;
 puts(&DAT_000135df);
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
 iVar4 = 0;
 do {
 *(int *)((int)pvVar2 + iVar4 * 4) = iVar4;
 iVar4 = iVar4 + 1;
 } while (iVar4 != 5);
 uVar1 = *(unsigned int *)((int)pvVar2 + 8);
 }
 printf("HEAP-L3-03 (memory_leak): %d\n",uVar1);
 printf("HEAP-L3-04 (dangling_pointer): ");
 __pid = fork();
 if (__pid != 0) {
 if (__pid < 1) {
 perror(&DAT_000132e3);
 }
 else {
 waitpid(__pid,(int *)&local_10,0);
 uVar3 = local_10 & 0x7f;
 if (uVar3 == 0) {
 uVar3 = local_10 >> 8 & 0xff;
 __format = &DAT_0001327d;
 }
 else {
 if ((int)(uVar3 * 0x1000000 + 0x1000000) < 0x2000000) {
 return;
 }
 __format = &DAT_000132a2;
 }
 printf(__format,uVar3);
 }
 return;
 }
 uVar1 = dangling_pointer();
 printf(&DAT_0001326d,uVar1);
 exit(0);
}

// Function: FUN_00011af0 @ 0x11af0
void FUN_00011af0(void)
{
 int unaff_retaddr;
 *(int *)(unaff_retaddr + 0x4574) = *(int *)(unaff_retaddr + 0x4574) + 1;
 return;
}

// Function: FUN_00011b0a @ 0x11b0a
int FUN_00011b0a(void)
{
 int unaff_retaddr;
 return *(int *)(unaff_retaddr + 0x455a) * 2;
}

// Function: FUN_00011b1f @ 0x11b1f
unsigned int FUN_00011b1f(unsigned int param_1,uint param_2)
{
 int unaff_retaddr;
 if (9 < param_2) {
 return 0xffffffff;
 }
 return *(unsigned int *)(unaff_retaddr + 0x1b25 + param_2 * 4);
}

// Function: FUN_00011b40 @ 0x11b40
void FUN_00011b40(unsigned int param_1,int param_2)
{
 int iVar1;
 int unaff_retaddr;
 iVar1 = 0;
 if (param_2 == 0) {
 iVar1 = *(int *)(unaff_retaddr + 0x4528) + 1;
 }
 *(int *)(unaff_retaddr + 0x4528) = iVar1;
 return;
}

// Function: call_static_func @ 0x11b5f
int call_static_func(int param_1)
{
 return param_1 * 2 + 1;
}

// Function: FUN_00011b6c @ 0x11b6c
int FUN_00011b6c(void)
{
 int unaff_retaddr;
 return *(int *)(unaff_retaddr + 0x44ec) + 100;
}

// Function: call_extern_func @ 0x11b7f
void call_extern_func(void)
{
 extern_function(5);
 return;
}

// Function: FUN_00011ba5 @ 0x11ba5
int FUN_00011ba5(void)
{
 int unaff_retaddr;
 return *(char *)(*(int *)(unaff_retaddr + 0x44ab) + 4) + 0x2a;
}

// Function: access_bss_var @ 0x11bba
unsigned int access_bss_var(void)
{
 return 0;
}

// Function: access_bss_buffer @ 0x11bbd
unsigned int access_bss_buffer(void)
{
 return 0;
}

// Function: global_struct_access @ 0x11bc0
unsigned int global_struct_access(void)
{
 return 0x1e;
}

// Function: FUN_00011bcb @ 0x11bcb
void FUN_00011bcb(unsigned int param_1,unsigned int param_2)
{
 int unaff_retaddr;
 *(unsigned int *)(unaff_retaddr + 0x4489) = param_2;
 return;
}

// Function: FUN_00011be2 @ 0x11be2
unsigned int FUN_00011be2(void)
{
 int unaff_retaddr;
 return *(unsigned int *)(unaff_retaddr + 0x4472);
}

// Function: FUN_00011bf5 @ 0x11bf5
void FUN_00011bf5(unsigned int param_1,unsigned int param_2)
{
 int unaff_retaddr;
 *(unsigned int *)(unaff_retaddr + 0x4477) = param_2;
 return;
}

// Function: call_global_callback @ 0x11c07
unsigned int call_global_callback(unsigned int param_1)
{
 unsigned int uVar1;
 if (global_func_ptr == (void *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 uVar1 = (*global_func_ptr)(param_1);
 }
 return uVar1;
}

// Function: FUN_00011c39 @ 0x11c39
unsigned int FUN_00011c39(unsigned int param_1,unsigned int *param_2)
{
 int unaff_retaddr;
 *(unsigned int **)(unaff_retaddr + 0x4437) = param_2;
 if (param_2 != (unsigned int *)0x0) {
 return *param_2;
 }
 return 0xffffffff;
}

// Function: static_complex_init @ 0x11c55
unsigned int static_complex_init(void)
{
 return 0xf;
}

// Function: tls_access @ 0x11c5b
int tls_access(int param_1)
{
 return param_1 * 2;
}

// Function: init_order_test @ 0x11c62
unsigned int init_order_test(void)
{
 return 0x14;
}

// Function: test_static_global @ 0x11c68
void test_static_global(void)
{
 unsigned int uVar1;
 unsigned int local_10;
 puts(&DAT_000135fd);
 global_counter = global_counter + 1;
 printf("STM-L1-01 (global_var_access): %d\n",global_counter);
 printf("STM-L1-01 (global_var_read): %d\n",global_counter * 2);
 printf("STM-L1-02 (global_array_access): %d\n",5);
 static_local_counter = 1;
 printf("STM-L1-03 (static_local): %d\n",1);
 static_local_counter = static_local_counter + 1;
 printf("STM-L1-03 (static_local): %d\n",static_local_counter);
 printf("STM-L1-04 (call_static_func): %d\n",0xb);
 printf("STM-L2-01 (access_extern_global): %d\n",extern_global_var + 100);
 uVar1 = extern_function(5);
 printf("STM-L2-02 (call_extern_func): %d\n",uVar1);
 printf("STM-L2-03 (read_const_data): %d\n",(char)const_string[4] + 0x2a);
 printf("STM-L2-04 (access_bss_var): %d\n",0);
 printf("STM-L2-04 (access_bss_buffer): %d\n",0);
 printf("STM-L2-05 (global_struct_access): %d\n",0x1e);
 file_scope_static = 0x32;
 printf("STM-L2-06 (file_static): %d\n",0x32);
 global_func_ptr = double_value;
 printf("STM-L2-07 (global_func_ptr): %d\n",10);
 global_heap_ptr = &local_10;
 local_10 = 100;
 printf("STM-L2-08 (global_heap_store): %d\n",100);
 printf("STM-L2-09 (static_complex_init): %d\n",0xf);
 printf("STM-L3-01 (tls_access): %d\n",0x14);
 printf("STM-L3-02 (init_order_test): %d\n",0x14);
 return;
}

// Function: double_value @ 0x11e5b
int double_value(int param_1)
{
 return param_1 * 2;
}

// Function: memop_memset @ 0x11e62
uint memop_memset(byte *param_1,size_t param_2,int param_3)
{
 uint uVar1;
 uVar1 = 0xffffffff;
 if ((param_1 != (byte *)0x0) && (param_2 != 0)) {
 memset(param_1,param_3,param_2);
 uVar1 = (uint)*param_1;
 }
 return uVar1;
}

// Function: memop_memcpy @ 0x11e9e
unsigned int memop_memcpy(void *param_1,void *param_2,uint param_3)
{
 unsigned int uVar1;
 uVar1 = 0xffffffff;
 if (((param_1 != (void *)0x0) && (param_2 != (void *)0x0)) && (param_3 != 0)) {
 memcpy(param_1,param_2,param_3);
 uVar1 = *(unsigned int *)(((param_3 & 0xfffffffc) - 4) + (int)param_1);
 }
 return uVar1;
}

// Function: memop_memmove @ 0x11ee1
int memop_memmove(void *param_1,uint param_2)
{
 int iVar1;
 iVar1 = -1;
 if ((param_1 != (void *)0x0) && (1 < param_2)) {
 memmove((void *)((int)param_1 + 1),param_1,param_2 - 1);
 iVar1 = (int)*(char *)((int)param_1 + 1);
 }
 return iVar1;
}

// Function: memop_memcmp @ 0x11f20
int memop_memcmp(void *param_1,void *param_2,size_t param_3)
{
 int iVar1;
 int iVar2;
 iVar1 = 0;
 if (((param_1 != (void *)0x0) && (param_2 != (void *)0x0)) && (param_3 != 0)) {
 iVar2 = memcmp(param_1,param_2,param_3);
 iVar1 = 1;
 if (iVar2 < 1) {
 iVar1 = -(uint)(iVar2 != 0);
 }
 }
 return iVar1;
}

// Function: memop_bzero @ 0x11f70
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

// Function: memop_bcopy @ 0x11fa7
uint memop_bcopy(void *param_1,byte *param_2,size_t param_3)
{
 uint uVar1;
 uVar1 = 0xffffffff;
 if (((param_1 != (void *)0x0) && (param_2 != (byte *)0x0)) && (param_3 != 0)) {
 memmove(param_2,param_1,param_3);
 uVar1 = (uint)*param_2;
 }
 return uVar1;
}

// Function: memop_unaligned_access @ 0x11fe8
unsigned int memop_unaligned_access(int param_1)
{
 if (param_1 != 0) {
 return *(unsigned int *)(param_1 + 1);
 }
 return 0xffffffff;
}

// Memory barrier macros (placeholder definitions)
#define LOCK()   do { } while(0)
#define UNLOCK() do { } while(0)

// Wrapper functions to avoid calling void as function pointer
void mem_barrier_lock(void) { }
void mem_barrier_unlock(void) { }

// Function: memop_memory_barrier @ 0x11ff8
int memop_memory_barrier(int *param_1)
{
 if (param_1 != (int *)0x0) {
 mem_barrier_lock();
 mem_barrier_unlock();
 return *param_1 + *param_1;
 }
 return -1;
}

// Function: test_memory_op_functions @ 0x1200e
void test_memory_op_functions(void)
{
 int iVar1;
 int iVar2;
 unsigned int uVar3;
 unsigned int uVar4;
 unsigned int in_stack_arg = 0;
 uVar4 = 0x12017;
 puts(&DAT_00013621);
 printf("MEMOP-L2-01: %d\n",0x41);
 printf("MEMOP-L2-02: %d\n",0x32);
 printf("MEMOP-L2-03: %c\n",0x48);
 uVar3 = 0xc;
 iVar1 = memcmp(&DAT_00013670,&DAT_0001367c,0xc);
 iVar2 = 1;
 if (iVar1 < 1) {
 iVar2 = -(uint)(iVar1 != 0);
 }
 printf("MEMOP-L2-04: %d\n",iVar2);
 printf("MEMOP-L2-05: %d\n",0);
 printf("MEMOP-L2-06: %d\n",1);
 printf("MEMOP-L3-01: 0x%x\n",0x4030201);
 LOCK();
 UNLOCK();
 printf("MEMOP-L3-02: %d\n",in_stack_arg);
 return;
}

// Function: main @ 0x12128
unsigned int main(void)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}

// Function: extern_function @ 0x12154
int extern_function(int param_1)
{
 return param_1 * 3;
}

// Function: __do_global_ctors_aux @ 0x12160
int __do_global_ctors_aux(void)
{
 return 0;
}



