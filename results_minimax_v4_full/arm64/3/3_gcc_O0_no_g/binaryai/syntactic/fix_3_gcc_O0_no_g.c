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
typedef char undefined7;
extern unsigned long ____stack_chk_guard;
extern unsigned long ___stack_chk_guard;
extern unsigned long completed_0;

// ARM memory barrier intrinsic
void __builtin_arm_dmb(void);
void DataMemoryBarrier(int a, int b);
extern void *__dso_handle;
extern int global_counter;
unsigned int file_scope_static = 0;
extern unsigned long long (*global_func_ptr)(unsigned int);
extern unsigned long long stack0x00000008;
extern unsigned long long stack0x00000000;
extern char DAT_001028f8;
extern char DAT_00102a68;
extern char DAT_00102bd8;
extern char DAT_00102c58;
extern char DAT_00102be8;
extern char DAT_00102c10;
extern char DAT_00102c78;
extern char DAT_00102f28;
extern char DAT_0011403c;
extern char DAT_00114050;
extern char DAT_00114058;
extern unsigned int global_array[10];
extern int counter_1;
extern int extern_global_var;
int extern_function(int param_1);
extern char const_string[];
extern unsigned int bss_var;
extern char bss_buffer;
extern unsigned int *global_heap_ptr;
extern int complex_init;
extern unsigned int static_depends_0;
extern long tpidr_el0;
extern int global_point;
int call_weak_fn(void *ctx);
unsigned int static_complex_init(void);
int main(void);

// Decompiled by BinaryAI
// SHA256: f69f080ece32f98187d177537404dc55ef9fc78f39a9395f2c9ad2df0cca91b7

// Function: _init @ 0x1009c0
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn(ctx);
 return iVar1;
}

// Function: FUN_001009e0 @ 0x1009e0
void FUN_001009e0(void)
{
 return;
}

// External function declarations
void * memcpy(void *__dest,void *__src,size_t __n);
void * memmove(void *__dest,void *__src,size_t __n);
void exit(int __status);
int __libc_start_main(int (*main)(void), void *init, void *fini);
void perror(char *__s);
void __cxa_finalize(void);
__pid_t fork(void);
void * malloc(size_t __size);
void * memset(void *__s,int __c,size_t __n);
void * calloc(size_t __nmemb,size_t __size);
void * realloc(void *__ptr,size_t __size);
void __stack_chk_fail(void);
void __gmon_start__(void);
void abort(void);
int puts(char *__s);
int memcmp(void *__s1,void *__s2,size_t __n);
void free(void *__ptr);
int printf(char *__format,...);
__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options);













// Function: double_value @ 0x100c54
int double_value(int param_1)
{
 return param_1 << 1;
}

// Function: local_vars @ 0x100c6c
int local_vars(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: local_array @ 0x100ca0
unsigned int local_array(int param_1)
{
 int local_34;
 int aiStack_30 [12];
 for (local_34 = 0; local_34 < 10; local_34 = local_34 + 1) {
 aiStack_30[local_34] = local_34 * param_1;
 }
 return aiStack_30[5];
}

// Function: local_struct @ 0x100d30
int local_struct(int param_1)
{
 return param_1 * 3;
}

// Function: address_of_local @ 0x100d60
unsigned int address_of_local(unsigned int *param_1)
{
 *param_1 = 0x2a;
 return 0x2a;
}

// Function: address_of_array @ 0x100d88
int address_of_array(int *param_1)
{
 return *param_1 + *param_1;
}

// Function: large_stack_frame @ 0x100dbc
char large_stack_frame(void)
{
 int local_80c;
 char auStack_808 [2056];
 for (local_80c = 0; local_80c < 0x800; local_80c = local_80c + 1) {
 auStack_808[local_80c] = (char)local_80c;
 }
 return auStack_808[1024];
}

// Function: vla_stack @ 0x100e48
unsigned int vla_stack(int param_1)
{
 unsigned long uVar1;
 long lVar2;
 char *puVar3;
 unsigned int uVar4;
 char auStack_50 [16];
 int local_24;
 int local_1c;
 long local_8;
 puVar3 = auStack_50;
 local_8 = ____stack_chk_guard;
 if ((param_1 < 1) || (1000 < param_1)) {
 uVar4 = 0xffffffff;
 }
 else {
 uVar1 = (long)param_1 * 4 + 0xf;
 for (; puVar3 != auStack_50 + -(uVar1 & 0xffffffffffff0000); puVar3 = puVar3 + -0x10000) {
 *(unsigned long long *)(puVar3 + -0xfc00) = 0;
 }
 lVar2 = -(uVar1 & 0xfff0);
 local_24 = param_1;
 *(unsigned long long *)(puVar3 + lVar2) = 0;
 if (0x3ff < (uVar1 & 0xfff0)) {
 *(unsigned long long *)(puVar3 + lVar2 + 0x400) = 0;
 }
 for (local_1c = 0; local_1c < local_24; local_1c = local_1c + 1) {
 *(int *)(puVar3 + (long)local_1c * 4 + lVar2 + 0x10) = local_1c << 1;
 }
 uVar4 = *(unsigned int *)(puVar3 + (long)(local_24 / 2) * 4 + lVar2 + 0x10);
 }
 if (local_8 - ____stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return uVar4;
}

// Function: alloca_usage @ 0x100fcc
unsigned int alloca_usage(int param_1)
{
 unsigned long uVar1;
 long lVar2;
 char *puVar3;
 unsigned int uVar4;
 char auStack_50 [16];
 int local_24;
 int local_14;
 long local_8;
 puVar3 = auStack_50;
 local_8 = ____stack_chk_guard;
 if (param_1 < 1) {
 uVar4 = 0xffffffff;
 }
 else {
 uVar1 = (long)param_1 * 4 + 0xf;
 for (; puVar3 != auStack_50 + -(uVar1 & 0xffffffffffff0000); puVar3 = puVar3 + -0x10000) {
 *(unsigned long long *)(puVar3 + -0xfc00) = 0;
 }
 lVar2 = -(uVar1 & 0xfff0);
 local_24 = param_1;
 *(unsigned long long *)(puVar3 + lVar2) = 0;
 if (0x3ff < (uVar1 & 0xfff0)) {
 *(unsigned long long *)(puVar3 + lVar2 + 0x400) = 0;
 }
 for (local_14 = 0; local_14 < local_24; local_14 = local_14 + 1) {
 *(int *)(puVar3 + (long)local_14 * 4 + lVar2 + 0x10) = local_14 * 3;
 }
 uVar4 = *(unsigned int *)(puVar3 + (long)(local_24 / 2) * 4 + lVar2 + 0x10);
 }
 if (local_8 - ____stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return uVar4;
}

// Function: stack_alias @ 0x101104
unsigned int stack_alias(void)
{
 unsigned int uVar1;
 if (&stack0x00000000 == (char *)0xc) {
 uVar1 = 0xffffffff;
 }
 else {
 uVar1 = 0x14;
 }
 return uVar1;
}

// Function: test_stack_memory @ 0x1011a8
void test_stack_memory(void)
{
 int iVar1;
 unsigned long uVar2;
 unsigned int auStack_38;
 unsigned int local_34;
 int local_30;
 int local_28;
 unsigned int local_20;
 unsigned int uStack_18;
 unsigned int local_10;
 long local_8;
 local_8 = ____stack_chk_guard;
 puts(&DAT_001028f8);
 uVar2 = local_vars(5);
 printf("MEM-L1-01 (local_vars): %d\n",uVar2 & 0xffffffff);
 uVar2 = local_array(2);
 printf("MEM-L1-02 (local_array): %d\n",uVar2 & 0xffffffff);
 uVar2 = local_struct(5);
 printf("MEM-L1-03 (local_struct): %d\n",uVar2 & 0xffffffff);
 uVar2 = address_of_local(&auStack_38);
 printf("MEM-L1-04 (address_of_local): %d\n",uVar2 & 0xffffffff);
 local_20 = 0;
 uStack_18 = 0;
 local_10 = 0;
 local_30 = 0x200000001;
 local_28 = 3;
 uVar2 = address_of_array(&local_30);
 iVar1 = printf("MEM-L1-05 (address_of_array): %d\n",uVar2 & 0xffffffff);
 uVar2 = large_stack_frame();
 printf("MEM-L2-01 (large_stack_frame): %d\n",uVar2 & 0xffffffff);
 uVar2 = vla_stack(10);
 printf("MEM-L2-02 (vla_stack): %d\n",uVar2 & 0xffffffff);
 uVar2 = alloca_usage(10);
 printf("MEM-L2-03 (alloca_usage): %d\n",uVar2 & 0xffffffff);
 local_34 = 0;
 uVar2 = stack_alias();
 printf("MEM-L2-04 (stack_alias): %d\n",uVar2 & 0xffffffff);
 if (local_8 - ____stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: heap_basic @ 0x1012fc
unsigned int heap_basic(int param_1)
{
 unsigned int uVar1;
 void *__ptr;
 int local_10;
 __ptr = malloc((long)param_1 << 2);
 if (__ptr == (void *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 for (local_10 = 0; local_10 < param_1; local_10 = local_10 + 1) {
 *(int *)((long)__ptr + (long)local_10 * 4) = local_10 << 1;
 }
 uVar1 = *(unsigned int *)((long)__ptr + (long)(param_1 / 2) * 4);
 free(__ptr);
 }
 return uVar1;
}

// Function: heap_calloc @ 0x1013a8
int heap_calloc(int param_1)
{
 void *__ptr;
 int local_10;
 int local_c;
 __ptr = calloc((long)param_1,4);
 if (__ptr == (void *)0x0) {
 local_10 = -1;
 }
 else {
 local_10 = 0;
 for (local_c = 0; local_c < param_1; local_c = local_c + 1) {
 local_10 = local_10 + *(int *)((long)__ptr + (long)local_c * 4);
 }
 free(__ptr);
 }
 return local_10;
}

// Function: heap_realloc @ 0x101434
static unsigned int heap_realloc(void)
{
 int iVar1;
 unsigned int uVar2;
 void *__ptr;
 void *__ptr_00;
 int local_20;
 int local_1c;
 __ptr = malloc(0x14);
 if (__ptr == (void *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 for (local_20 = 0; local_20 < 5; local_20 = local_20 + 1) {
 *(int *)((long)__ptr + (long)local_20 * 4) = local_20 + 1;
 }
 iVar1 = *(int *)((long)__ptr + 8);
 __ptr_00 = realloc(__ptr,0x28);
 if (__ptr_00 == (void *)0x0) {
 free(__ptr);
 uVar2 = 0xfffffffe;
 }
 else {
 for (local_1c = 5; local_1c < 10; local_1c = local_1c + 1) {
 *(int *)((long)__ptr_00 + (long)local_1c * 4) = local_1c * 10;
 }
 if (iVar1 == *(int *)((long)__ptr_00 + 8)) {
 uVar2 = *(unsigned int *)((long)__ptr_00 + 0x14);
 }
 else {
 uVar2 = 0xfffffffd;
 }
 free(__ptr_00);
 }
 }
 return uVar2;
}

// Function: heap_array @ 0x101564
unsigned int heap_array(int param_1)
{
 unsigned int uVar1;
 void *__ptr;
 int local_10;
 __ptr = malloc((long)param_1 << 2);
 if (__ptr == (void *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 for (local_10 = 0; local_10 < param_1; local_10 = local_10 + 1) {
 *(int *)((long)__ptr + (long)local_10 * 4) = local_10 * 3;
 }
 uVar1 = *(unsigned int *)((long)__ptr + (long)(param_1 / 2) * 4);
 free(__ptr);
 }
 return uVar1;
}

// Function: heap_struct @ 0x101618
int heap_struct(int param_1)
{
 int iVar1;
 int *__ptr;
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

// Function: heap_nested @ 0x10168c
unsigned long long heap_nested(void **param_1)
{
 void *pvVar1;
 unsigned long long uVar2;
 void *pvVar3;
 pvVar1 = malloc(0x10);
 *param_1 = pvVar1;
 if (*param_1 == (void *)0x0) {
  uVar2 = 0xffffffffffffffffULL;
 }
 else {
  *(unsigned int *)*param_1 = 10;
  pvVar3 = *param_1;
  pvVar1 = malloc(0x10);
  *(void **)((long)pvVar3 + 8) = pvVar1;
  if (*(void **)((long)*param_1 + 8) == (void *)0) {
   free(*param_1);
   uVar2 = 0xfffffffffffffffeULL;
  }
  else {
      *(unsigned int *)((long)*param_1 + 8) = 0x14;
      *(unsigned long long *)((long)*param_1 + 0x10) = 0;
   uVar2 = 0;
  }
 }
 return uVar2;
}

// Function: linked_list_heap @ 0x101748
int linked_list_heap(void)
{
 int *piVar1;
 int *piVar2;
 int local_38;
 int local_34;
 int *local_30;
 int *local_28;
 int *local_20;
 local_30 = (int *)0x0;
 local_28 = (int *)0x0;
 local_38 = 0;
 while( true ) {
 if (4 < local_38) {
 local_34 = 0;
 for (local_20 = local_30; local_20 != (int *)0x0; local_20 = *(int **)(local_20 + 2)) {
 local_34 = local_34 + *local_20;
 }
 while (local_30 != (int *)0x0) {
 piVar2 = *(int **)(local_30 + 2);
 free(local_30);
 local_30 = piVar2;
 }
 return local_34;
 }
 piVar2 = (int *)malloc(0x10);
 if (piVar2 == (int *)0x0) break;
 *piVar2 = local_38 * 10;
 *(unsigned long long *)(piVar2 + 2) = 0;
 piVar1 = piVar2;
 if (local_30 != (int *)0x0) {
 *(int **)(local_28 + 2) = piVar2;
 piVar1 = local_30;
 }
 local_30 = piVar1;
 local_38 = local_38 + 1;
 local_28 = piVar2;
 }
 while (local_30 != (int *)0x0) {
 piVar2 = *(int **)(local_30 + 2);
 free(local_30);
 local_30 = piVar2;
 }
 return -1;
}

// Function: create_tree_node @ 0x101894
unsigned int * create_tree_node(unsigned int param_1)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)malloc(0x18);
 if (puVar1 != (unsigned int *)0x0) {
 *puVar1 = param_1;
 *(unsigned long long *)(puVar1 + 2) = 0;
 *(unsigned long long *)(puVar1 + 4) = 0;
 }
 return puVar1;
}

// Function: tree_heap_traversal @ 0x1018e0
int tree_heap_traversal(void)
{
 int iVar1;
 int *__ptr;
 unsigned int *puVar2;
 __ptr = (int *)create_tree_node(10);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 puVar2 = create_tree_node(0x14);
 *(unsigned int **)(__ptr + 2) = puVar2;
 puVar2 = create_tree_node(0x1e);
 *(unsigned int **)(__ptr + 4) = puVar2;
 if ((*(long *)(__ptr + 2) == 0) || (*(long *)(__ptr + 4) == 0)) {
 if (*(long *)(__ptr + 2) != 0) {
 free(*(void **)(__ptr + 2));
 }
 if (*(long *)(__ptr + 4) != 0) {
 free(*(void **)(__ptr + 4));
 }
 free(__ptr);
 iVar1 = -2;
 }
 else {
 iVar1 = *__ptr + **(int **)(__ptr + 2) + **(int **)(__ptr + 4);
 free(*(void **)(__ptr + 2));
 free(*(void **)(__ptr + 4));
 free(__ptr);
 }
 }
 return iVar1;
}

// Function: memory_leak @ 0x1019f0
unsigned int memory_leak(int param_1)
{
 unsigned int uVar1;
 void *pvVar2;
 int local_c;
 pvVar2 = malloc((long)param_1 << 2);
 if (pvVar2 == (void *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 for (local_c = 0; local_c < param_1; local_c = local_c + 1) {
 *(int *)((long)pvVar2 + (long)local_c * 4) = local_c;
 }
 uVar1 = *(unsigned int *)((long)pvVar2 + (long)(param_1 / 2) * 4);
 }
 return uVar1;
}

// Function: dangling_pointer @ 0x101a88
uint dangling_pointer(void)
{
 uint uVar1;
 uint *__ptr;
 __ptr = (uint *)malloc(4);
 if (__ptr == (uint *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 *__ptr = 0x2a;
 printf("value before free: %d\n",(unsigned long)*__ptr);
 free(__ptr);
 uVar1 = *__ptr;
 }
 return uVar1;
}

// Function: double_free @ 0x101af8
unsigned int double_free(unsigned int *param_1)
{
 unsigned int uVar1;
 unsigned int *__ptr;
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

// Function: heap_overflow @ 0x101b64
unsigned int heap_overflow(void)
{
 unsigned int uVar1;
 unsigned int *__ptr;
 int local_10;
 __ptr = (unsigned int *)malloc(0x28);
 if (__ptr == (unsigned int *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 for (local_10 = 0; local_10 < 0xb; local_10 = local_10 + 1) {
 __ptr[local_10] = local_10 * 100;
 }
 uVar1 = *__ptr;
 free(__ptr);
 }
 return uVar1;
}

// Function: test_heap_memory @ 0x101bec
void test_heap_memory(void)
{
 int iVar1;
 unsigned long uVar2;
 uint local_1c;
 __pid_t local_18;
 uint local_14;
 void *local_10;
 long local_8;
 local_8 = ____stack_chk_guard;
 puts(&DAT_00102a68);
 uVar2 = heap_basic(10);
 printf("HEAP-L2-01 (heap_basic): %d\n",uVar2 & 0xffffffff);
 uVar2 = heap_calloc(5);
 iVar1 = printf("HEAP-L2-02 (heap_calloc): %d\n",uVar2 & 0xffffffff);
 uVar2 = heap_realloc();
 printf("HEAP-L2-03 (heap_realloc): %d\n",uVar2 & 0xffffffff);
 uVar2 = heap_array(10);
 printf("HEAP-L2-04 (heap_array): %d\n",uVar2 & 0xffffffff);
 uVar2 = heap_struct(5);
 printf("HEAP-L2-05 (heap_struct): %d\n",uVar2 & 0xffffffff);
 local_10 = (void *)0x0;
 uVar2 = heap_nested(&local_10);
 printf("HEAP-L2-06 (heap_nested): %d\n",uVar2 & 0xffffffff);
 if (local_10 != (void *)0x0) {
 free(*(void **)((long)local_10 + 8));
 free(local_10);
 }
 uVar2 = linked_list_heap();
 iVar1 = printf("HEAP-L3-01 (linked_list_heap): %d\n",uVar2 & 0xffffffff);
 uVar2 = tree_heap_traversal();
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n",uVar2 & 0xffffffff);
 uVar2 = memory_leak(5);
 printf("HEAP-L3-03 (memory_leak): %d\n",uVar2 & 0xffffffff);
 printf("HEAP-L3-04 (dangling_pointer): ");
 local_18 = fork();
 if (local_18 == 0) {
 local_14 = dangling_pointer();
 printf(&DAT_00102bd8,(unsigned long)local_14);
 exit(0);
 }
 if (local_18 < 1) {
 perror(&DAT_00102c58);
 }
 else {
 waitpid(local_18,(int *)&local_1c,0);
 if ((local_1c & 0x7f) == 0) {
 printf(&DAT_00102be8,(unsigned long)((int)local_1c >> 8 & 0xff));
 }
 else if ('\0' < (char)(((byte)local_1c & 0x7f) + 1) >> 1) {
 printf(&DAT_00102c10,(unsigned long)(local_1c & 0x7f));
 }
 }
 if (local_8 - ____stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: global_var_access @ 0x101e14
int global_var_access(void)
{
 global_counter = global_counter + 1;
 return global_counter;
}

// Function: global_var_read @ 0x101e40
int global_var_read(void)
{
 return global_counter << 1;
}

// Function: global_array_access @ 0x101e54
unsigned int global_array_access(int param_1)
{
 unsigned int uVar1;
 if ((param_1 < 0) || (9 < param_1)) {
 uVar1 = 0xffffffff;
 }
 else {
 uVar1 = *(unsigned int *)(&global_array + (long)param_1 * 4);
 }
 return uVar1;
}

// Function: static_local @ 0x101e94
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

// Function: static_helper @ 0x101eec
int static_helper(int param_1)
{
 return param_1 << 1;
}

// Function: call_static_func @ 0x101f04
int call_static_func(unsigned int param_1)
{
 int iVar1;
 iVar1 = static_helper(param_1);
 return iVar1 + 1;
}

// Function: access_extern_global @ 0x101f24
int access_extern_global(void)
{
 return extern_global_var + 100;
}

// Function: call_extern_func @ 0x101f38
void call_extern_func(void)
{
 extern_function(5);
 return;
}

// Function: read_const_data @ 0x101f50
int read_const_data(void)
{
 return (byte)const_string[4] + 0x2a;
}

// Function: access_bss_var @ 0x101f74
unsigned int access_bss_var(void)
{
 return bss_var;
}

// Function: access_bss_buffer @ 0x101f84
char access_bss_buffer(void)
{
 return bss_buffer;
}

// Function: global_struct_access @ 0x101f94
int global_struct_access(void)
{
 return global_point + DAT_0011403c;
}

// Function: set_file_static @ 0x101fb4
void set_file_static(unsigned int param_1)
{
 file_scope_static = param_1;
 return;
}

// Function: get_file_static @ 0x101fd8
unsigned int get_file_static(void)
{
 return file_scope_static;
}

// Function: set_global_callback @ 0x101fe8
void set_global_callback(unsigned long long param_1)
{
 global_func_ptr = (unsigned long long (*)(unsigned int))param_1;
 return;
}

// Function: call_global_callback @ 0x10200c
unsigned long long call_global_callback(unsigned int param_1)
{
 unsigned long long uVar1;
 if (global_func_ptr == (void *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 uVar1 = (*global_func_ptr)(param_1);
 }
 return uVar1;
}

// Function: global_heap_store @ 0x102050
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



// Function: tls_access @ 0x1020cc
int tls_access(unsigned int param_1)
{
 long lVar1;
 lVar1 = tpidr_el0;
 *(unsigned int *)(lVar1 + 0x10) = param_1;
 lVar1 = tpidr_el0;
 return *(int *)(lVar1 + 0x10) << 1;
}

// Function: init_depends_on @ 0x102104
unsigned int init_depends_on(unsigned int *param_1)
{
 if (param_1 != (unsigned int *)0x0) {
 static_depends_0 = *param_1;
 }
 return static_depends_0;
}

// Function: init_order_test @ 0x102140
unsigned int init_order_test(void)
{
 unsigned int uVar1;
 unsigned int local_c;
 long local_8;
 local_8 = ____stack_chk_guard;
 local_c = 0x14;
 uVar1 = init_depends_on(&local_c);
 if (local_8 - ____stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return uVar1;
}

// Function: test_static_global @ 0x10219c
void test_static_global(void)
{
 int iVar1;
 unsigned long uVar2;
 unsigned int local_c;
 long local_8;
 local_8 = ____stack_chk_guard;
 iVar1 = puts(&DAT_00102c78);
 uVar2 = global_var_access();
 iVar1 = printf("STM-L1-01 (global_var_access): %d\n",uVar2 & 0xffffffff);
 uVar2 = global_var_read();
 printf("STM-L1-01 (global_var_read): %d\n",uVar2 & 0xffffffff);
 uVar2 = global_array_access(5);
 printf("STM-L1-02 (global_array_access): %d\n",uVar2 & 0xffffffff);
 static_local(1);
 uVar2 = static_local(0);
 printf("STM-L1-03 (static_local): %d\n",uVar2 & 0xffffffff);
 uVar2 = static_local(0);
 printf("STM-L1-03 (static_local): %d\n",uVar2 & 0xffffffff);
 uVar2 = call_static_func(5);
 iVar1 = printf("STM-L1-04 (call_static_func): %d\n",uVar2 & 0xffffffff);
 uVar2 = access_extern_global();
 iVar1 = printf("STM-L2-01 (access_extern_global): %d\n",uVar2 & 0xffffffff);
 call_extern_func();
 iVar1 = printf("STM-L2-02 (call_extern_func): %d\n",uVar2 & 0xffffffff);
 uVar2 = read_const_data();
 iVar1 = printf("STM-L2-03 (read_const_data): %d\n",uVar2 & 0xffffffff);
 uVar2 = access_bss_var();
 iVar1 = printf("STM-L2-04 (access_bss_var): %d\n",uVar2 & 0xffffffff);
 uVar2 = access_bss_buffer();
 iVar1 = printf("STM-L2-04 (access_bss_buffer): %d\n",uVar2 & 0xffffffff);
 uVar2 = global_struct_access();
 printf("STM-L2-05 (global_struct_access): %d\n",uVar2 & 0xffffffff);
 set_file_static(0x32);
 uVar2 = get_file_static();
 printf("STM-L2-06 (file_static): %d\n",uVar2 & 0xffffffff);
 set_global_callback((unsigned long long)double_value);
 uVar2 = call_global_callback(5);
 printf("STM-L2-07 (global_func_ptr): %d\n",uVar2 & 0xffffffff);
 local_c = 100;
 uVar2 = global_heap_store(&local_c);
 iVar1 = printf("STM-L2-08 (global_heap_store): %d\n",uVar2 & 0xffffffff);
 uVar2 = static_complex_init();
 printf("STM-L2-09 (static_complex_init): %d\n",uVar2 & 0xffffffff);
 uVar2 = tls_access(10);
 iVar1 = printf("STM-L3-01 (tls_access): %d\n",uVar2 & 0xffffffff);
 uVar2 = init_order_test();
 printf("STM-L3-02 (init_order_test): %d\n",uVar2 & 0xffffffff);
 if (local_8 - ____stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: memop_memset @ 0x102398
unsigned long memop_memset(byte *param_1,size_t param_2,int param_3)
{
 unsigned long uVar1;
 if ((param_1 == (byte *)0x0) || (param_2 == 0)) {
 uVar1 = 0xffffffff;
 }
 else {
 memset(param_1,param_3,param_2);
 uVar1 = (unsigned long)*param_1;
 }
 return uVar1;
}

// Function: memop_memcpy @ 0x1023ec
unsigned int memop_memcpy(void *param_1,void *param_2,unsigned long param_3)
{
 unsigned int uVar1;
 if (((param_1 == (void *)0x0) || (param_2 == (void *)0x0)) || (param_3 == 0)) {
 uVar1 = 0xffffffff;
 }
 else {
 memcpy(param_1,param_2,param_3);
 uVar1 = *(unsigned int *)((long)param_1 + ((param_3 & 0xfffffffffffffffc) - 4));
 }
 return uVar1;
}

// Function: memop_memmove @ 0x10245c
unsigned long memop_memmove(void *param_1,unsigned long param_2)
{
 unsigned long uVar1;
 if ((param_1 == (void *)0x0) || (param_2 < 2)) {
 uVar1 = 0xffffffff;
 }
 else {
 memmove((void *)((long)param_1 + 1),param_1,param_2 - 1);
 uVar1 = (unsigned long)*(byte *)((long)param_1 + 1);
 }
 return uVar1;
}

// Function: memop_memcmp @ 0x1024c0
unsigned long long memop_memcmp(void *param_1,void *param_2,size_t param_3)
{
 int iVar1;
 unsigned long long uVar2;
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

// Function: memop_bzero @ 0x102548
unsigned long memop_bzero(byte *param_1,size_t param_2)
{
 unsigned long uVar1;
 if (param_1 == (byte *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 memset(param_1,0,param_2);
 uVar1 = (unsigned long)*param_1;
 }
 return uVar1;
}

// Function: memop_bcopy @ 0x102598
unsigned long memop_bcopy(void *param_1,byte *param_2,size_t param_3)
{
 unsigned long uVar1;
 if (((param_1 == (void *)0x0) || (param_2 == (byte *)0x0)) || (param_3 == 0)) {
 uVar1 = 0xffffffff;
 }
 else {
 memmove(param_2,param_1,param_3);
 uVar1 = (unsigned long)*param_2;
 }
 return uVar1;
}

// Function: memop_unaligned_access @ 0x1025f8
unsigned int memop_unaligned_access(long param_1)
{
 unsigned int uVar1;
 if (param_1 == 0) {
 uVar1 = 0xffffffff;
 }
 else {
 uVar1 = *(unsigned int *)(param_1 + 1);
 }
 return uVar1;
}

// Function: memop_memory_barrier @ 0x102638
unsigned long memop_memory_barrier(unsigned int *param_1)
{
 unsigned long uVar1;
 if (param_1 == (unsigned int *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 __builtin_arm_dmb();
 uVar1 = (unsigned long)*param_1;
 }
 return uVar1;
}



// Function: test_memory_op_functions @ 0x1026b4
void test_memory_op_functions(void)
{
 unsigned long uVar1;
 unsigned int local_194;
 unsigned long long local_190;
 unsigned int local_188;
 unsigned long long local_180;
 unsigned int local_178;
 unsigned long long local_170;
 unsigned long long uStack_168;
 unsigned int local_160;
 unsigned long long local_158;
 unsigned long long uStack_150;
 unsigned int local_148;
 unsigned int local_140 [2];
 unsigned int local_138 [2];
 unsigned long long local_130;
 char auStack_128 [16];
 undefined7 local_118;
 unsigned int uStack_111;
 char auStack_108 [256];
 long local_8;
 local_8 = ____stack_chk_guard;
 puts(&DAT_00102f28);
 local_170 = 0x140000000a;
 uStack_168 = 0x280000001e;
 local_160 = 0x32;
 local_158 = 0;
 uStack_150 = 0;
 local_148 = 0;
 uVar1 = memop_memset(auStack_108,10,0x41);
 printf("MEMOP-L2-01: %d\n",uVar1 & 0xffffffff);
 uVar1 = memop_memcpy(&local_158,&local_170,0x14);
 printf("MEMOP-L2-02: %d\n",uVar1 & 0xffffffff);
 local_118 = 0x6f576f6c6c6548;
 uStack_111 = 0x6c6c6448;
 uVar1 = memop_memmove(&local_118,10);
 printf("MEMOP-L2-03: %c\n",uVar1 & 0xffffffff);
 local_190 = 0x200000001;
 local_188 = 3;
 local_180 = 0x200000001;
 local_178 = 4;
 uVar1 = memop_memcmp(&local_190,&local_180,0xc);
 printf("MEMOP-L2-04: %d\n",uVar1 & 0xffffffff);
 uVar1 = memop_bzero(auStack_128,10);
 printf("MEMOP-L2-05: %d\n",uVar1 & 0xffffffff);
   local_140[0] = 0x4030201;
   local_138[0] = 0;
   uVar1 = memop_bcopy(local_140,(byte *)local_138,4);
 printf("MEMOP-L2-06: %d\n",uVar1 & 0xffffffff);
 local_130 = 0x706050403020100;
   uVar1 = memop_unaligned_access((long)&local_130);
 printf("MEMOP-L3-01: 0x%x\n",uVar1 & 0xffffffff);
 local_194 = 5;
 uVar1 = memop_memory_barrier(&local_194);
 printf("MEMOP-L3-02: %d\n",uVar1 & 0xffffffff);
 if (local_8 - ____stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: main @ 0x102898
int main(void)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}



// Function: _fini @ 0x1028dc
void _fini(void)
{
 return;
}

