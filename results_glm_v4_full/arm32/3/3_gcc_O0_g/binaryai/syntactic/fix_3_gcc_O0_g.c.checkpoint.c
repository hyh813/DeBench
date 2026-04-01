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

/* Additional type definitions */
typedef unsigned int uint;
typedef int __pid_t;
typedef unsigned char byte;
typedef _Bool bool;
#define true 1
#define false 0

/* External function declarations for atomic operations */
extern int SUB_ffff0fc0(int, int, void *);
extern void SUB_ffff0fa0(void);

/* Forward declaration */
unsigned int main(void);
int extern_function(int);

/* Global variable declarations */
extern unsigned int (*global_func_ptr)(unsigned int);
extern char completed_0;
extern char stack0x00000000;
extern char DAT_00013734;
extern char DAT_00013890;
extern char DAT_000139fc;
extern char DAT_00013a78;
extern char DAT_00013a0c;
extern char DAT_00013a34;
extern char DAT_00013a94;
extern char DAT_00013d18;
extern int global_counter;
extern int global_array[10];
extern int counter_1;
extern int extern_global_var;
extern byte *const_string;
extern unsigned int bss_var;
extern char bss_buffer[];
extern struct {int x; int _4_4_;} global_point;
extern unsigned int file_scope_static;
extern void *global_heap_ptr;
extern struct {int _0_4_; int _8_4_; int _16_4_;} complex_init;
extern unsigned int static_depends_0;
extern void *__gmon_start__;

// Decompiled by BinaryAI
// SHA256: 436435cf546cbd3ac582a9ec155eb028e1159b92ea7103e642c88f0dde79603f

// Function: _init @ 0x105a8
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn();
 return iVar1;
}

// Function: <EXTERNAL>::calloc @ 0x105c8
void * calloc(size_t __nmemb,size_t __size)
{
 void *pvVar1;
 pvVar1 = calloc(__nmemb,__size);
 return pvVar1;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x105d4
void __libc_start_main(void)
{
 __libc_start_main();
 return;
}

// Function: <EXTERNAL>::printf @ 0x105e0
int printf(char *__format,...)
{
 int iVar1;
 iVar1 = printf(__format);
 return iVar1;
}

// Function: <EXTERNAL>::memmove @ 0x105ec
void * memmove(void *__dest,void *__src,size_t __n)
{
 void *pvVar1;
 pvVar1 = memmove(__dest,__src,__n);
 return pvVar1;
}

// Function: <EXTERNAL>::free @ 0x105f8
void free(void *__ptr)
{
 free(__ptr);
 return;
}

// Function: <EXTERNAL>::memcpy @ 0x10604
void * memcpy(void *__dest,void *__src,size_t __n)
{
 void *pvVar1;
 pvVar1 = memcpy(__dest,__src,__n);
 return pvVar1;
}

// Function: <EXTERNAL>::memcmp @ 0x10610
int memcmp(void *__s1,void *__s2,size_t __n)
{
 int iVar1;
 iVar1 = memcmp(__s1,__s2,__n);
 return iVar1;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x1061c
void __stack_chk_fail(void)
{
 __stack_chk_fail();
}

// Function: <EXTERNAL>::realloc @ 0x10628
void * realloc(void *__ptr,size_t __size)
{
 void *pvVar1;
 pvVar1 = realloc(__ptr,__size);
 return pvVar1;
}

// Function: <EXTERNAL>::perror @ 0x10634
void perror(char *__s)
{
 perror(__s);
 return;
}

// Function: <EXTERNAL>::waitpid @ 0x10640
__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)
{
 __pid_t _Var1;
 _Var1 = waitpid(__pid,__stat_loc,__options);
 return _Var1;
}

// Function: <EXTERNAL>::puts @ 0x1064c
int puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::malloc @ 0x10658
void * malloc(size_t __size)
{
 void *pvVar1;
 pvVar1 = malloc(__size);
 return pvVar1;
}

// Function: <EXTERNAL>::exit @ 0x10670
void exit(int __status)
{
 exit(__status);
}

// Function: <EXTERNAL>::memset @ 0x1067c
void * memset(void *__s,int __c,size_t __n)
{
 void *pvVar1;
 pvVar1 = memset(__s,__c,__n);
 return pvVar1;
}

// Function: <EXTERNAL>::fork @ 0x10688
__pid_t fork(void)
{
 __pid_t _Var1;
 _Var1 = fork();
 return _Var1;
}

// Function: <EXTERNAL>::abort @ 0x10694
void abort(void)
{
 abort();
}

// Function: _start @ 0x106a0
void _start(unsigned int param_1,unsigned int param_2)
{
 __libc_start_main();
 abort();
}

// Function: call_weak_fn @ 0x106e4
void call_weak_fn(void)
{
 if (__gmon_start__ != (void *)0x0) {
   ((void (*)(void))__gmon_start__)();
 }
 return;
}

// Function: deregister_tm_clones @ 0x10708
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x10734
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x1076c
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: double_value @ 0x10798
int double_value(int param_1)
{
 return param_1 << 1;
}

// Function: local_vars @ 0x107c0
int local_vars(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: local_array @ 0x10804
unsigned int local_array(int param_1)
{
 int local_38;
 int aiStack_34 [11];
 for (local_38 = 0; local_38 < 10; local_38 = local_38 + 1) {
 aiStack_34[local_38] = local_38 * param_1;
 }
 return aiStack_34[5];
}

// Function: local_struct @ 0x10898
int local_struct(int param_1)
{
 return param_1 * 3;
}

// Function: address_of_local @ 0x108d8
unsigned int address_of_local(unsigned int *param_1)
{
 *param_1 = 0x2a;
 return 0x2a;
}

// Function: address_of_array @ 0x10910
int address_of_array(int *param_1)
{
 return *param_1 + *param_1;
}

// Function: large_stack_frame @ 0x10954
char large_stack_frame(void)
{
 int local_810;
 char auStack_80c [2052];
 for (local_810 = 0; local_810 < 0x800; local_810 = local_810 + 1) {
 auStack_80c[local_810] = (char)local_810;
 }
 return auStack_80c[1024];
}

// Function: vla_stack @ 0x109ec
unsigned int vla_stack(int param_1)
{
 uint uVar1;
 unsigned int uVar2;
 int aiStack_30 [6];
 if ((param_1 < 1) || (1000 < param_1)) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar1 = param_1 * 4 + 7U & 0xfffffff8;
 for (aiStack_30[2] = 0; aiStack_30[2] < param_1; aiStack_30[2] = aiStack_30[2] + 1) {
 *(int *)((int)aiStack_30 + (aiStack_30[2] * 4 - uVar1)) = aiStack_30[2] << 1;
 }
 uVar2 = *(unsigned int *)((int)aiStack_30 + ((param_1 / 2) * 4 - uVar1));
 }
 return uVar2;
}

// Function: alloca_usage @ 0x10b3c
unsigned int alloca_usage(int param_1)
{
 uint uVar1;
 unsigned int uVar2;
 int aiStack_20 [6];
 if (param_1 < 1) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar1 = param_1 * 4 + 7U & 0xfffffff8;
 for (aiStack_20[3] = 0; aiStack_20[3] < param_1; aiStack_20[3] = aiStack_20[3] + 1) {
 *(int *)((int)aiStack_20 + (aiStack_20[3] * 4 - uVar1)) = aiStack_20[3] * 3;
 }
 uVar2 = *(unsigned int *)((int)aiStack_20 + ((param_1 / 2) * 4 - uVar1));
 }
 return uVar2;
}

// Function: stack_alias @ 0x10c34
unsigned int stack_alias(void)
{
 unsigned int uVar1;
 if (&stack0x00000000 == (char *)0x10) {
 uVar1 = 0xffffffff;
 }
 else {
 uVar1 = 0x14;
 }
 return uVar1;
}

// Function: test_stack_memory @ 0x10cd4
void test_stack_memory(void)
{
 unsigned int uVar1;
 int iVar2;
 char auStack_3c [4];
 unsigned int local_38;
 unsigned int local_34;
 unsigned int local_30;
 unsigned int local_2c;
 int local_c;
 local_c = 0;
 puts(&DAT_00013734);
 uVar1 = local_vars(5);
 printf("MEM-L1-01 (local_vars): %d\n",uVar1);
 uVar1 = local_array(2);
 printf("MEM-L1-02 (local_array): %d\n",uVar1);
 uVar1 = local_struct(5);
 printf("MEM-L1-03 (local_struct): %d\n",uVar1);
 uVar1 = address_of_local(auStack_3c);
 printf("MEM-L1-04 (address_of_local): %d\n",uVar1);
 memset(&local_34,0,0x28);
 local_34 = 1;
 local_30 = 2;
 local_2c = 3;
 uVar1 = address_of_array(&local_34);
 printf("MEM-L1-05 (address_of_array): %d\n",uVar1);
 uVar1 = large_stack_frame();
 printf("MEM-L2-01 (large_stack_frame): %d\n",uVar1);
 uVar1 = vla_stack(10);
 printf("MEM-L2-02 (vla_stack): %d\n",uVar1);
 uVar1 = alloca_usage(10);
 printf("MEM-L2-03 (alloca_usage): %d\n",uVar1);
 local_38 = 0;
 uVar1 = stack_alias();
 iVar2 = printf("MEM-L2-04 (stack_alias): %d\n",uVar1);
 if (local_c != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: heap_basic @ 0x10e68
unsigned int heap_basic(int param_1)
{
 void *__ptr;
 unsigned int uVar1;
 int local_14;
 __ptr = malloc(param_1 << 2);
 if (__ptr == (void *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 for (local_14 = 0; local_14 < param_1; local_14 = local_14 + 1) {
 *(int *)((int)__ptr + local_14 * 4) = local_14 << 1;
 }
 uVar1 = *(unsigned int *)((int)__ptr + (param_1 / 2) * 4);
 free(__ptr);
 }
 return uVar1;
}

// Function: heap_calloc @ 0x10f24
int heap_calloc(size_t param_1)
{
 void *__ptr;
 int local_14;
 int local_10;
 __ptr = calloc(param_1,4);
 if (__ptr == (void *)0x0) {
 local_14 = -1;
 }
 else {
 local_14 = 0;
 for (local_10 = 0; local_10 < (int)param_1; local_10 = local_10 + 1) {
 local_14 = local_14 + *(int *)((int)__ptr + local_10 * 4);
 }
 free(__ptr);
 }
 return local_14;
}

// Function: heap_realloc @ 0x10fc8
unsigned int heap_realloc(void)
{
 void *__ptr;
 void *__ptr_00;
 unsigned int uVar1;
 int iVar2;
 int local_20;
 int local_1c;
 __ptr = malloc(0x14);
 if (__ptr == (void *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 for (local_20 = 0; local_20 < 5; local_20 = local_20 + 1) {
 *(int *)((int)__ptr + local_20 * 4) = local_20 + 1;
 }
 iVar2 = *(int *)((int)__ptr + 8);
 __ptr_00 = realloc(__ptr,0x28);
 if (__ptr_00 == (void *)0x0) {
 free(__ptr);
 uVar1 = 0xfffffffe;
 }
 else {
 for (local_1c = 5; local_1c < 10; local_1c = local_1c + 1) {
 *(int *)((int)__ptr_00 + local_1c * 4) = local_1c * 10;
 }
 if (iVar2 == *(int *)((int)__ptr_00 + 8)) {
 uVar1 = *(unsigned int *)((int)__ptr_00 + 0x14);
 }
 else {
 uVar1 = 0xfffffffd;
 }
 free(__ptr_00);
 }
 }
 return uVar1;
}

// Function: heap_array @ 0x11108
unsigned int heap_array(int param_1)
{
 void *__ptr;
 unsigned int uVar1;
 int local_14;
 __ptr = malloc(param_1 << 2);
 if (__ptr == (void *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 for (local_14 = 0; local_14 < param_1; local_14 = local_14 + 1) {
 *(int *)((int)__ptr + local_14 * 4) = local_14 * 3;
 }
 uVar1 = *(unsigned int *)((int)__ptr + (param_1 / 2) * 4);
 free(__ptr);
 }
 return uVar1;
}

// Function: heap_struct @ 0x111cc
int heap_struct(int param_1)
{
 int *__ptr;
 int iVar1;
 __ptr = (int *)malloc(8);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 *__ptr = param_1;
 __ptr[1] = param_1 << 1;
 iVar1 = *__ptr + __ptr[1];
 free(__ptr);
 }
 return iVar1;
}

// Function: heap_nested @ 0x1124c
unsigned int heap_nested(void **param_1)
{
 void *pvVar1;
 unsigned int uVar2;
 void *pvVar3;
 pvVar1 = malloc(8);
 *param_1 = pvVar1;
 if (*param_1 == (void *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 *(unsigned int *)*param_1 = 10;
 pvVar3 = *param_1;
 pvVar1 = malloc(8);
 *(void **)((int)pvVar3 + 4) = pvVar1;
 if (*(int *)((int)*param_1 + 4) == 0) {
 free(*param_1);
 uVar2 = 0xfffffffe;
 }
 else {
 **(unsigned int **)((int)*param_1 + 4) = 0x14;
 *(unsigned int *)(*(int *)((int)*param_1 + 4) + 4) = 0;
 uVar2 = 0;
 }
 }
 return uVar2;
}

// Function: linked_list_heap @ 0x11318
int linked_list_heap(void)
{
 int *piVar1;
 int *piVar2;
 int *local_28;
 int *local_24;
 int local_20;
 int local_1c;
 int *local_18;
 local_28 = (int *)0x0;
 local_24 = (int *)0x0;
 local_20 = 0;
 while( true ) {
 if (4 < local_20) {
 local_1c = 0;
 for (local_18 = local_28; local_18 != (int *)0x0; local_18 = (int *)local_18[1]) {
 local_1c = local_1c + *local_18;
 }
 while (local_28 != (int *)0x0) {
 piVar2 = (int *)local_28[1];
 free(local_28);
 local_28 = piVar2;
 }
 return local_1c;
 }
 piVar2 = (int *)malloc(8);
 if (piVar2 == (int *)0x0) break;
 *piVar2 = local_20 * 10;
 piVar2[1] = 0;
 piVar1 = piVar2;
 if (local_28 != (int *)0x0) {
 local_24[1] = (int)piVar2;
 piVar1 = local_28;
 }
 local_28 = piVar1;
 local_20 = local_20 + 1;
 local_24 = piVar2;
 }
 while (local_28 != (int *)0x0) {
 piVar2 = (int *)local_28[1];
 free(local_28);
 local_28 = piVar2;
 }
 return -1;
}

// Function: create_tree_node @ 0x11484
unsigned int * create_tree_node(unsigned int param_1)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)malloc(0xc);
 if (puVar1 != (unsigned int *)0x0) {
 *puVar1 = param_1;
 puVar1[1] = 0;
 puVar1[2] = 0;
 }
 return puVar1;
}

// Function: tree_heap_traversal @ 0x114e4
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
 iVar1 = *__ptr + *(int *)__ptr[1] + *(int *)__ptr[2];
 free((void *)__ptr[1]);
 free((void *)__ptr[2]);
 free(__ptr);
 }
 }
 return iVar1;
}

// Function: memory_leak @ 0x1160c
unsigned int memory_leak(int param_1)
{
 void *pvVar1;
 unsigned int uVar2;
 int local_10;
 pvVar1 = malloc(param_1 << 2);
 if (pvVar1 == (void *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 for (local_10 = 0; local_10 < param_1; local_10 = local_10 + 1) {
 *(int *)((int)pvVar1 + local_10 * 4) = local_10;
 }
 uVar2 = *(unsigned int *)((int)pvVar1 + (param_1 / 2) * 4);
 }
 return uVar2;
}

// Function: dangling_pointer @ 0x116b4
unsigned int dangling_pointer(void)
{
 unsigned int *__ptr;
 unsigned int uVar1;
 __ptr = (unsigned int *)malloc(4);
 if (__ptr == (unsigned int *)0x0) {
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

// Function: double_free @ 0x11730
unsigned int double_free(unsigned int *param_1)
{
 unsigned int *__ptr;
 unsigned int uVar1;
 if (param_1 == (unsigned int *)0x0) {
 __ptr = (unsigned int *)malloc(4);
 if (__ptr == (unsigned int *)0x0) {
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

// Function: heap_overflow @ 0x117a8
unsigned int heap_overflow(void)
{
 unsigned int *__ptr;
 unsigned int uVar1;
 int local_14;
 __ptr = (unsigned int *)malloc(0x28);
 if (__ptr == (unsigned int *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 for (local_14 = 0; local_14 < 0xb; local_14 = local_14 + 1) {
 __ptr[local_14] = local_14 * 100;
 }
 uVar1 = *__ptr;
 free(__ptr);
 }
 return uVar1;
}

// Function: test_heap_memory @ 0x11850
void test_heap_memory(void)
{
 unsigned int uVar1;
 void *local_1c;
 uint local_18;
 __pid_t local_14;
 unsigned int local_10;
 int local_c;
 local_c = 0;
 puts(&DAT_00013890);
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
 local_1c = (void *)0x0;
 uVar1 = heap_nested(&local_1c);
 printf("HEAP-L2-06 (heap_nested): %d\n",uVar1);
 if (local_1c != (void *)0x0) {
 free(*(void **)((int)local_1c + 4));
 free(local_1c);
 }
 uVar1 = linked_list_heap();
 printf("HEAP-L3-01 (linked_list_heap): %d\n",uVar1);
 uVar1 = tree_heap_traversal();
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n",uVar1);
 uVar1 = memory_leak(5);
 printf("HEAP-L3-03 (memory_leak): %d\n",uVar1);
 printf("HEAP-L3-04 (dangling_pointer): ");
 local_14 = fork();
 if (local_14 == 0) {
 local_10 = dangling_pointer();
 printf(&DAT_000139fc,local_10);
 exit(0);
 }
 if (local_14 < 1) {
 perror(&DAT_00013a78);
 }
 else {
 waitpid(local_14,(int *)&local_18,0);
 if ((local_18 & 0x7f) == 0) {
 printf(&DAT_00013a0c,(int)local_18 >> 8 & 0xff);
 }
 else if ('\0' < (char)((int)(((local_18 & 0x7f) + 1) * 0x1000000) >> 0x19)) {
 printf(&DAT_00013a34,local_18 & 0x7f);
 }
 }
 if (local_c != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: global_var_access @ 0x11ab8
int global_var_access(void)
{
 global_counter = global_counter + 1;
 return global_counter;
}

// Function: global_var_read @ 0x11af0
int global_var_read(void)
{
 return global_counter << 1;
}

// Function: global_array_access @ 0x11b18
unsigned int global_array_access(int param_1)
{
 unsigned int uVar1;
 if ((param_1 < 0) || (9 < param_1)) {
 uVar1 = 0xffffffff;
 }
 else {
 uVar1 = *(unsigned int *)(&global_array + param_1 * 4);
 }
 return uVar1;
}

// Function: static_local @ 0x11b68
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

// Function: static_helper @ 0x11bc8
int static_helper(int param_1)
{
 return param_1 << 1;
}

// Function: call_static_func @ 0x11bf0
int call_static_func(unsigned int param_1)
{
 int iVar1;
 iVar1 = static_helper(param_1);
 return iVar1 + 1;
}

// Function: access_extern_global @ 0x11c1c
int access_extern_global(void)
{
 return extern_global_var + 100;
}

// Function: call_extern_func @ 0x11c44
unsigned int call_extern_func(void)
{
 unsigned int uVar1;
 uVar1 = extern_function(5);
 return uVar1;
}

// Function: read_const_data @ 0x11c60
int read_const_data(void)
{
 return *(byte *)(const_string + 4) + 0x2a;
}

// Function: access_bss_var @ 0x11c98
unsigned int access_bss_var(void)
{
 return bss_var;
}

// Function: access_bss_buffer @ 0x11cbc
char access_bss_buffer(void)
{
 return bss_buffer[0];
}

// Function: global_struct_access @ 0x11ce0
int global_struct_access(void)
{
 return global_point.x + global_point._4_4_;
}

// Function: set_file_static @ 0x11d10
unsigned int set_file_static(unsigned int param_1)
{
 file_scope_static = param_1;
 return param_1;
}

// Function: get_file_static @ 0x11d40
unsigned int get_file_static(void)
{
 return file_scope_static;
}

// Function: set_global_callback @ 0x11d64
unsigned int set_global_callback(unsigned int param_1)
{
 global_func_ptr = param_1;
 return param_1;
}

// Function: call_global_callback @ 0x11d94
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

// Function: global_heap_store @ 0x11de0
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

// Function: static_complex_init @ 0x11e34
int static_complex_init(void)
{
 return complex_init._0_4_ + complex_init._8_4_ + complex_init._16_4_;
}

// Function: tls_access @ 0x11e70
int tls_access(unsigned int param_1)
{
 int iVar1;
 iVar1 = __aeabi_read_tp();
 *(unsigned int *)(iVar1 + 8) = param_1;
 iVar1 = __aeabi_read_tp();
 return *(int *)(iVar1 + 8) << 1;
}

// Function: init_depends_on @ 0x11eb8
unsigned int init_depends_on(unsigned int *param_1)
{
 if (param_1 != (unsigned int *)0x0) {
 static_depends_0 = *param_1;
 }
 return static_depends_0;
}

// Function: init_order_test @ 0x11f00
unsigned int init_order_test(void)
{
 unsigned int uVar1;
 unsigned int local_10;
 int local_c;
 local_c = 0;
 local_10 = 0x14;
 uVar1 = init_depends_on(&local_10);
 if (local_c != 0) {
 __stack_chk_fail();
 }
 return uVar1;
}

// Function: test_static_global @ 0x11f60
void test_static_global(void)
{
 unsigned int uVar1;
 int iVar2;
 unsigned int local_10;
 int local_c;
 local_c = 0;
 puts(&DAT_00013a94);
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
 uVar1 = call_extern_func();
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
 local_10 = 100;
 uVar1 = global_heap_store(&local_10);
 printf("STM-L2-08 (global_heap_store): %d\n",uVar1);
 uVar1 = static_complex_init();
 printf("STM-L2-09 (static_complex_init): %d\n",uVar1);
 uVar1 = tls_access(10);
 printf("STM-L3-01 (tls_access): %d\n",uVar1);
 uVar1 = init_order_test();
 iVar2 = printf("STM-L3-02 (init_order_test): %d\n",uVar1);
 if (local_c != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: memop_memset @ 0x121a4
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

// Function: memop_memcpy @ 0x12200
unsigned int memop_memcpy(void *param_1,void *param_2,uint param_3)
{
 unsigned int uVar1;
 if (((param_1 == (void *)0x0) || (param_2 == (void *)0x0)) || (param_3 == 0)) {
 uVar1 = 0xffffffff;
 }
 else {
 memcpy(param_1,param_2,param_3);
 uVar1 = *(unsigned int *)((int)param_1 + ((param_3 & 0xfffffffc) - 4));
 }
 return uVar1;
}

// Function: memop_memmove @ 0x12278
uint memop_memmove(void *param_1,uint param_2)
{
 uint uVar1;
 if ((param_1 == (void *)0x0) || (param_2 < 2)) {
 uVar1 = 0xffffffff;
 }
 else {
 memmove((void *)((int)param_1 + 1),param_1,param_2 - 1);
 uVar1 = (uint)*(byte *)((int)param_1 + 1);
 }
 return uVar1;
}

// Function: memop_memcmp @ 0x122e0
unsigned int memop_memcmp(void *param_1,void *param_2,size_t param_3)
{
 int iVar1;
 unsigned int uVar2;
 if (((param_1 == (void *)0x0) || (param_2 == (void *)0x0)) || (param_3 == 0)) {
 uVar2 = 0;
 }
 else {
 iVar1 = memcmp(param_1,param_2,param_3);
 if (iVar1 < 1) {
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0;
 }
 }
 else {
 uVar2 = 1;
 }
 }
 return uVar2;
}

// Function: memop_bzero @ 0x12370
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

// Function: memop_bcopy @ 0x123c4
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

// Function: memop_unaligned_access @ 0x1242c
unsigned int memop_unaligned_access(int param_1)
{
 void *pvVar1;
 unsigned int local_10;
 int local_c;
 local_c = 0;
 if (param_1 == 0) {
 local_10 = 0xffffffff;
 pvVar1 = (void *)0x0;
 }
 else {
 pvVar1 = memcpy(&local_10,(void *)(param_1 + 1),4);
 }
 if (local_c != 0) {
 __stack_chk_fail();
 }
 return local_10;
}

// Function: memop_memory_barrier @ 0x124a8
int memop_memory_barrier(int *param_1)
{
 int iVar1;
 if (param_1 == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = *param_1;
 __sync_synchronize();
 iVar1 = *param_1 + iVar1;
 }
 return iVar1;
}

// Function: test_memory_op_functions @ 0x124f8
void test_memory_op_functions(void)
{
 unsigned int uVar1;
 int iVar2;
 unsigned int local_178;
 unsigned int local_174;
 unsigned int uStack_170;
 unsigned int uStack_16c;
 unsigned int local_168;
 unsigned int uStack_164;
 unsigned int uStack_160;
 unsigned int local_15c;
 unsigned int uStack_158;
 unsigned int uStack_154;
 unsigned int uStack_150;
 unsigned int local_14c;
 unsigned int local_148;
 unsigned int local_144;
 unsigned int local_140;
 unsigned int local_13c;
 unsigned int local_138;
 unsigned int local_134;
 unsigned int local_130;
 unsigned int local_12c;
 unsigned int uStack_128;
 char auStack_124 [12];
 unsigned int local_118;
 unsigned int uStack_114;
 unsigned short local_110;
 char local_10e;
 char auStack_10c [256];
 int local_c;
 local_c = 0;
 puts(&DAT_00013d18);
 local_15c = 10;
 uStack_158 = 0x14;
 uStack_154 = 0x1e;
 uStack_150 = 0x28;
 local_14c = 0x32;
 local_148 = 0;
 local_144 = 0;
 local_140 = 0;
 local_13c = 0;
 local_138 = 0;
 uVar1 = memop_memset(auStack_10c,10,0x41);
 printf("MEMOP-L2-01: %d\n",uVar1);
 uVar1 = memop_memcpy(&local_148,&local_15c,0x14);
 printf("MEMOP-L2-02: %d\n",uVar1);

 {
 char *p = (char *)&local_118;
 p[0] = 'H';
 p[1] = 'e';
 p[2] = 'l';
 p[3] = 'l';
 p[4] = 'o';
 p[5] = 'W';
 p[6] = 'o';
 p[7] = 'r';
 p[8] = 'l';
 p[9] = 'd';
 p[10] = '\0';
 }
 uVar1 = memop_memmove(&local_118, (uint)10);
 printf("MEMOP-L2-03: %c\n", uVar1);
 local_174 = 1;
 uStack_170 = 2;
 uStack_16c = 3;
 local_168 = 1;
 uStack_164 = 2;
 uStack_160 = 4;
 uVar1 = memop_memcmp(&local_174,&local_168,0xc);
 printf("MEMOP-L2-04: %d\n",uVar1);
 uVar1 = memop_bzero(auStack_124,10);
 printf("MEMOP-L2-05: %d\n",uVar1);
 local_134 = 0x4030201;
 local_130 = 0;
 uVar1 = memop_bcopy(&local_134,&local_130,4);
 printf("MEMOP-L2-06: %d\n",uVar1);
 local_12c = 0x3020100;
 uStack_128 = 0x7060504;
 uVar1 = memop_unaligned_access(&local_12c);
 printf("MEMOP-L3-01: 0x%x\n",uVar1);
 local_178 = 5;
 uVar1 = memop_memory_barrier(&local_178);
 iVar2 = printf("MEMOP-L3-02: %d\n",uVar1);
 if (local_c != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: main @ 0x1272c
unsigned int main(void)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}

// Function: extern_function @ 0x12750
int extern_function(int param_1)
{
 return param_1 * 3;
}

// Function: __sync_fetch_and_add_4 @ 0x12780
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

// Function: __sync_fetch_and_sub_4 @ 0x127b8
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

// Function: __sync_fetch_and_or_4 @ 0x127f0
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

// Function: __sync_fetch_and_and_4 @ 0x12828
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

// Function: __sync_fetch_and_xor_4 @ 0x12860
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

// Function: __sync_fetch_and_nand_4 @ 0x12898
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

// Function: __sync_fetch_and_add_2 @ 0x128d4
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
 iVar3 = SUB_ffff0fc0(uVar2, (uVar2 ^ (uVar1 + param_2) << iVar4) & 0xffff << iVar4 ^ uVar2, (void *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}

// Function: __sync_fetch_and_sub_2 @ 0x12934
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
 iVar3 = SUB_ffff0fc0(uVar2, (uVar2 ^ (uVar1 - param_2) << iVar4) & 0xffff << iVar4 ^ uVar2, (void *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}

// Function: __sync_fetch_and_or_2 @ 0x12994
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
 iVar3 = SUB_ffff0fc0(uVar2, (uVar2 ^ ((uVar1 | param_2) << iVar4) & 0xffff << iVar4 ^ uVar2), (void *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}

// Function: __sync_fetch_and_and_2 @ 0x129f4
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
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ (uVar1 & param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}

// Function: __sync_fetch_and_xor_2 @ 0x12a54
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
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ (uVar1 ^ param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}

// Function: __sync_fetch_and_nand_2 @ 0x12ab4
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
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ ~(uVar1 & param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}

// Function: __sync_fetch_and_add_1 @ 0x12b18
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
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ uVar1 + param_2 << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}

// Function: __sync_fetch_and_sub_1 @ 0x12b74
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
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ uVar1 - param_2 << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}

// Function: __sync_fetch_and_or_1 @ 0x12bd0
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
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ (uVar1 | param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}

// Function: __sync_fetch_and_and_1 @ 0x12c2c
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
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ (uVar1 & param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}

// Function: __sync_fetch_and_xor_1 @ 0x12c88
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
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ (uVar1 ^ param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}

// Function: __sync_fetch_and_nand_1 @ 0x12ce4
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
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ ~(uVar1 & param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}

// Function: __sync_add_and_fetch_4 @ 0x12d44
int __sync_add_and_fetch_4(int *param_1,int param_2)
{
 int iVar1;
 int iVar2;
 do {
 iVar2 = *param_1 + param_2;
 iVar1 = SUB_ffff0fc0(*param_1,iVar2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}

// Function: __sync_sub_and_fetch_4 @ 0x12d7c
int __sync_sub_and_fetch_4(int *param_1,int param_2)
{
 int iVar1;
 int iVar2;
 do {
 iVar2 = *param_1 - param_2;
 iVar1 = SUB_ffff0fc0(*param_1,iVar2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}

// Function: __sync_or_and_fetch_4 @ 0x12db4
uint __sync_or_and_fetch_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = *param_1 | param_2;
 iVar1 = SUB_ffff0fc0(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_and_and_fetch_4 @ 0x12dec
uint __sync_and_and_fetch_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = *param_1 & param_2;
 iVar1 = SUB_ffff0fc0(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_xor_and_fetch_4 @ 0x12e24
uint __sync_xor_and_fetch_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = *param_1 ^ param_2;
 iVar1 = SUB_ffff0fc0(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_nand_and_fetch_4 @ 0x12e5c
uint __sync_nand_and_fetch_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = ~(*param_1 & param_2);
 iVar1 = SUB_ffff0fc0(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_add_and_fetch_2 @ 0x12e98
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

// Function: __sync_sub_and_fetch_2 @ 0x12f00
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

// Function: __sync_or_and_fetch_2 @ 0x12f68
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

// Function: __sync_and_and_fetch_2 @ 0x12fd0
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

// Function: __sync_xor_and_fetch_2 @ 0x13038
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

// Function: __sync_nand_and_fetch_2 @ 0x130a0
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

// Function: __sync_add_and_fetch_1 @ 0x1310c
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

// Function: __sync_sub_and_fetch_1 @ 0x13170
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

// Function: __sync_or_and_fetch_1 @ 0x131d4
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

// Function: __sync_and_and_fetch_1 @ 0x13238
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

// Function: __sync_xor_and_fetch_1 @ 0x1329c
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

// Function: __sync_nand_and_fetch_1 @ 0x13300
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

// Function: __sync_val_compare_and_swap_4 @ 0x13368
int __sync_val_compare_and_swap_4(int *param_1,int param_2,unsigned int param_3)
{
 int iVar1;
 do {
 if (*param_1 != param_2) {
 return *param_1;
 }
 iVar1 = SUB_ffff0fc0(param_2,param_3,param_1);
 } while (iVar1 != 0);
 return param_2;
}

// Function: __sync_val_compare_and_swap_2 @ 0x133b8
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

// Function: __sync_val_compare_and_swap_1 @ 0x13430
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

// Function: __sync_bool_compare_and_swap_4 @ 0x134a4
bool __sync_bool_compare_and_swap_4(unsigned int param_1,unsigned int param_2,unsigned int param_3)
{
 int iVar1;
 iVar1 = SUB_ffff0fc0(param_2,param_3,param_1);
 return iVar1 == 0;
}

// Function: __sync_bool_compare_and_swap_2 @ 0x134d0
bool __sync_bool_compare_and_swap_2(unsigned int param_1,int param_2)
{
 int iVar1;
 iVar1 = __sync_val_compare_and_swap_2(param_1, param_2, param_2);
 return param_2 == iVar1;
}

// Function: __sync_bool_compare_and_swap_1 @ 0x134ec
bool __sync_bool_compare_and_swap_1(unsigned int param_1,int param_2)
{
 int iVar1;
 iVar1 = __sync_val_compare_and_swap_1(param_1, param_2, param_2);
 return param_2 == iVar1;
}

// Function: __sync_lock_test_and_set_4 @ 0x13514
unsigned int __sync_lock_test_and_set_4(unsigned int *param_1,unsigned int param_2)
{
 int iVar1;
 unsigned int uVar2;
 do {
 uVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(uVar2,param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_lock_test_and_set_2 @ 0x1354c
int __sync_lock_test_and_set_2(uint param_1,int param_2)
{
 int iVar1;
 uint uVar2;
 int iVar3;
 iVar3 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 iVar1 = SUB_ffff0fc0
 (uVar2,(param_2 << iVar3 ^ uVar2) & 0xffff << iVar3 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar1 != 0);
 return (int)(short)((0xffff << iVar3 & uVar2) >> iVar3);
}

// Function: __sync_lock_test_and_set_1 @ 0x135ac
int __sync_lock_test_and_set_1(uint param_1,int param_2)
{
 int iVar1;
 uint uVar2;
 int iVar3;
 iVar3 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 iVar1 = SUB_ffff0fc0
 (uVar2,(param_2 << iVar3 ^ uVar2) & 0xff << iVar3 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar1 != 0);
 return (int)(char)((0xff << iVar3 & uVar2) >> iVar3);
}

// Function: __sync_lock_release_8 @ 0x13608
void __sync_lock_release_8(unsigned int *param_1)
{
 SUB_ffff0fa0();
 *param_1 = 0;
 param_1[1] = 0;
 return;
}

// Function: __sync_lock_release_4 @ 0x1362c
void __sync_lock_release_4(unsigned int *param_1)
{
 SUB_ffff0fa0();
 *param_1 = 0;
 return;
}

// Function: __sync_lock_release_2 @ 0x1364c
void __sync_lock_release_2(unsigned short *param_1)
{
 SUB_ffff0fa0();
 *param_1 = 0;
 return;
}

// Function: __sync_lock_release_1 @ 0x1366c
void __sync_lock_release_1(char *param_1)
{
 SUB_ffff0fa0();
 *param_1 = 0;
 return;
}

// Function: _fini @ 0x13698
void _fini(void)
{
 return;
}

