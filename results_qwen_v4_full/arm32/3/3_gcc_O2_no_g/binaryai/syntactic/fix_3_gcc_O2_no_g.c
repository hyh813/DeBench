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

// Global variable declarations
static int global_counter = 0;
static int counter_1 = 0;
static int extern_global_var = 0;
static const char *const_string = "test";
static int (*global_func_ptr)(void) = 0;

// CAS helper function for atomic operations
static int SUB_ffff0fc0(int old_val, int new_val, void *ptr)
{
 int *p = (int *)ptr;
 if (*p == old_val) {
  *p = new_val;
  return 0;
 }
 return 1;
}
unsigned int file_scope_static = 0;
char completed_0 = 0;
const char *DAT_000128e8 = "Stack Memory Tests";
const char *DAT_00012a44 = "Heap Memory Tests";
const char *DAT_00012c0c = "fork failed";
const char *DAT_00012ba0 = "child exited with status %d\n";
const char *DAT_00012bc8 = "child terminated abnormally\n";
const char *DAT_00012b90 = "%d\n";
const char *DAT_00012c38 = "Static/Global Memory Tests";
const char *DAT_00012ebc = "Memory Operation Tests";
int global_array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

// Forward declarations
static int extern_function(int param_1);

// Definition of extern_function
static int extern_function(int param_1)
{
 return param_1 * 2;
}

// Library function declarations
void __stack_chk_fail(void);
int __printf_chk(int flag, const char *format, ...);
int puts(const char *s);
void *malloc(size_t size);
void free(void *ptr);
void *calloc(size_t nmemb, size_t size);
void *realloc(void *ptr, size_t size);
void *memcpy(void *dest, const void *src, size_t n);
void *memset(void *s, int c, size_t n);
void *memmove(void *dest, const void *src, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
__pid_t fork(void);
__pid_t waitpid(__pid_t pid, int *status, int options);
void perror(const char *s);
void exit(int status);
void __sync_synchronize(void);

// Decompiled by BinaryAI
// SHA256: 4df0c33b011e602311fc43cb92913a767e29c76a9c9c50513b3a1ef64dfb9d0a



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

// Function: local_vars @ 0x107a0
int local_vars(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: local_array @ 0x107ac
void local_array(int param_1)
{
 int iVar1;
 int *piVar2;
 int iStack_38;
 int local_34 [13];
 piVar2 = &iStack_38;
 iVar1 = 0;
 do {
 piVar2 = piVar2 + 1;
 *piVar2 = iVar1;
 iVar1 = iVar1 + param_1;
 } while (piVar2 != local_34 + 9);
 return;
}

// Function: local_struct @ 0x1080c
int local_struct(int param_1)
{
 return param_1 * 3;
}

// Function: address_of_local @ 0x10814
unsigned int address_of_local(unsigned int *param_1)
{
 *param_1 = 0x2a;
 return 0x2a;
}

// Function: address_of_array @ 0x10824
int address_of_array(int *param_1)
{
 return *param_1 << 1;
}

// Function: large_stack_frame @ 0x10830
void large_stack_frame(void)
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
 return;
}

// Function: vla_stack @ 0x108a0
static void vla_stack(int param_1,int param_2)
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

// Function: alloca_usage @ 0x10930
static void alloca_usage(int param_1,int *param_2)
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

// Function: stack_alias @ 0x109c0
unsigned int stack_alias(void)
{
 return 0x14;
}

// Function: test_stack_memory @ 0x109c8
void test_stack_memory(void)
{
 unsigned int uVar1;
 int local_c;
 puts(&DAT_000128e8);
 __printf_chk(1,"MEM-L1-01 (local_vars): %d\n",0x14);
 __printf_chk(1,"MEM-L1-02 (local_array): %d\n",10);
 __printf_chk(1,"MEM-L1-03 (local_struct): %d\n",0xf);
 __printf_chk(1,"MEM-L1-04 (address_of_local): %d\n",0x2a);
 __printf_chk(1,"MEM-L1-05 (address_of_array): %d\n",2);
 large_stack_frame();
 __printf_chk(1,"MEM-L2-01 (large_stack_frame): %d\n",0);
 __printf_chk(1,"MEM-L2-02 (vla_stack): %d\n",10);
 alloca_usage(10,&local_c);
 __printf_chk(1,"MEM-L2-03 (alloca_usage): %d\n",0);
 __printf_chk(1,"MEM-L2-04 (stack_alias): %d\n",0x14);
 return;
}

// Function: heap_basic @ 0x10a9c
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

// Function: heap_calloc @ 0x10af8
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
 } while (piVar1 != (int *)((int)__ptr + param_1 * 4 + -4));
 }
 free(__ptr);
 }
 return iVar2;
}

// Function: heap_realloc @ 0x10b4c
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
 *__ptr = 1;
 __ptr[1] = 2;
 __ptr[4] = 5;
 __ptr[3] = 4;
 __ptr[2] = 3;
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

// Function: heap_array @ 0x10bc8
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

// Function: heap_struct @ 0x10c2c
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

// Function: heap_nested @ 0x10c5c
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

// Function: linked_list_heap @ 0x10cc8
int linked_list_heap(void)
{
 int *piVar1;
 int *piVar2;
 int iVar3;
 int *piVar4;
 int *__ptr;
 int iVar5;
 iVar5 = 0;
 __ptr = (int *)0x0;
 piVar4 = (int *)0x0;
 do {
 piVar2 = (int *)malloc(8);
 if (piVar2 == (int *)0x0) {
 while (__ptr != (int *)0x0) {
 piVar4 = (int *)__ptr[1];
 free(__ptr);
 __ptr = piVar4;
 }
 return -1;
 }
 *piVar2 = iVar5;
 piVar2[1] = 0;
 iVar5 = iVar5 + 10;
 piVar1 = piVar2;
 if (__ptr != (int *)0x0) {
 piVar4[1] = (int)piVar2;
 piVar1 = __ptr;
 }
 __ptr = piVar1;
 piVar4 = piVar2;
 } while (iVar5 != 0x32);
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

// Function: create_tree_node @ 0x10d64
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

// Function: tree_heap_traversal @ 0x10d8c
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

// Function: memory_leak @ 0x10e14
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

// Function: dangling_pointer @ 0x10e64
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

// Function: double_free @ 0x10ea4
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

// Function: heap_overflow @ 0x10ee4
unsigned int heap_overflow(void)
{
 unsigned int *__ptr;
 int *piVar1;
 int iVar2;
 unsigned int uVar3;
 __ptr = (unsigned int *)malloc(0x28);
 if (__ptr == (unsigned int *)0x0) {
 uVar3 = 0xffffffff;
 }
 else {
 iVar2 = 0;
 piVar1 = __ptr + -1;
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

// Function: test_heap_memory @ 0x10f30
void test_heap_memory(void)
{
 void *pvVar1;
 unsigned int *puVar2;
 __pid_t __pid;
 int *piVar3;
 int iVar4;
 unsigned int uVar5;
 uint local_10;
 int local_c;
 local_c = 0;
 puts(&DAT_00012a44);
 pvVar1 = malloc(0x28);
 if (pvVar1 == (void *)0x0) {
 uVar5 = 0xffffffff;
 }
 else {
 iVar4 = 0;
 piVar3 = (int *)((int)pvVar1 + -4);
 do {
 piVar3 = piVar3 + 1;
 *piVar3 = iVar4;
 iVar4 = iVar4 + 2;
 } while (iVar4 != 0x14);
 uVar5 = *(unsigned int *)((int)pvVar1 + 0x14);
 free(pvVar1);
 }
 __printf_chk(1,"HEAP-L2-01 (heap_basic): %d\n",uVar5);
 pvVar1 = calloc(5,4);
 if (pvVar1 == (void *)0x0) {
 iVar4 = -1;
 }
 else {
 iVar4 = 0;
 piVar3 = (int *)((int)pvVar1 + -4);
 do {
 piVar3 = piVar3 + 1;
 iVar4 = iVar4 + *piVar3;
 } while ((int *)((int)pvVar1 + 0x10) != piVar3);
 free(pvVar1);
 }
 __printf_chk(1,"HEAP-L2-02 (heap_calloc): %d\n",iVar4);
 uVar5 = heap_realloc();
 __printf_chk(1,"HEAP-L2-03 (heap_realloc): %d\n",uVar5);
 pvVar1 = malloc(0x28);
 if (pvVar1 == (void *)0x0) {
 uVar5 = 0xffffffff;
 }
 else {
 iVar4 = 0;
 piVar3 = (int *)((int)pvVar1 + -4);
 do {
 piVar3 = piVar3 + 1;
 *piVar3 = iVar4;
 iVar4 = iVar4 + 3;
 } while (iVar4 != 0x1e);
 uVar5 = *(unsigned int *)((int)pvVar1 + 0x14);
 free(pvVar1);
 }
 __printf_chk(1,"HEAP-L2-04 (heap_array): %d\n",uVar5);
 pvVar1 = malloc(8);
 if (pvVar1 == (void *)0x0) {
 uVar5 = 0xffffffff;
 }
 else {
 free(pvVar1);
 uVar5 = 0xf;
 }
 __printf_chk(1,"HEAP-L2-05 (heap_struct): %d\n",uVar5);
 pvVar1 = malloc(8);
 if (pvVar1 == (void *)0x0) {
 __printf_chk(1,"HEAP-L2-06 (heap_nested): %d\n",0xffffffff);
 }
 else {
 puVar2 = (unsigned int *)malloc(8);
 *(unsigned int **)((int)pvVar1 + 4) = puVar2;
 if (puVar2 == (unsigned int *)0x0) {
 free(pvVar1);
 uVar5 = 0xfffffffe;
 }
 else {
 uVar5 = 0;
 *puVar2 = 0x14;
 puVar2[1] = 0;
 }
 __printf_chk(1,"HEAP-L2-06 (heap_nested): %d\n",uVar5);
 free(*(void **)((int)pvVar1 + 4));
 free(pvVar1);
 }
 uVar5 = linked_list_heap();
 __printf_chk(1,"HEAP-L3-01 (linked_list_heap): %d\n",uVar5);
 uVar5 = tree_heap_traversal();
 __printf_chk(1,"HEAP-L3-02 (tree_heap_traversal): %d\n",uVar5);
 puVar2 = (unsigned int *)malloc(0x14);
 if (puVar2 == (unsigned int *)0x0) {
 uVar5 = 0xffffffff;
 }
 else {
 puVar2[1] = 1;
 uVar5 = 2;
 puVar2[4] = 4;
 *puVar2 = 0;
 puVar2[2] = 2;
 puVar2[3] = 3;
 }
 __printf_chk(1,"HEAP-L3-03 (memory_leak): %d\n",uVar5);
 __printf_chk(1,"HEAP-L3-04 (dangling_pointer): ");
 __pid = fork();
 if (__pid != 0) {
 if (__pid < 1) {
 if (local_c == 0) {
 perror(&DAT_00012c0c);
 return;
 }
 }
 else {
 waitpid(__pid,(int *)&local_10,0);
 if ((local_10 & 0x7f) == 0) {
 __printf_chk(1,&DAT_00012ba0,(int)local_10 >> 8 & 0xff);
 }
 else if (0x1ffffff < (int)(((local_10 & 0x7f) + 1) * 0x1000000)) {
 __printf_chk(1,&DAT_00012bc8);
 }
 if (local_c == 0) {
 return;
 }
 }
 __stack_chk_fail();
 }
 puVar2 = (unsigned int *)malloc(4);
 if (puVar2 == (unsigned int *)0x0) {
 uVar5 = 0xffffffff;
 }
 else {
 __printf_chk(1,"value before free: %d\n",0x2a);
 free(puVar2);
 uVar5 = *puVar2;
 }
 __printf_chk(1,&DAT_00012b90,uVar5);
 exit(0);
}

// Function: global_var_access @ 0x1129c
void global_var_access(void)
{
 global_counter = global_counter + 1;
 return;
}

// Function: global_var_read @ 0x112b4
int global_var_read(void)
{
 return global_counter << 1;
}

// Function: global_array_access @ 0x112c8
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

// Function: static_local @ 0x112e0
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

// Function: call_static_func @ 0x11304
int call_static_func(int param_1)
{
 return param_1 * 2 + 1;
}

// Function: access_extern_global @ 0x11310
int access_extern_global(void)
{
 return extern_global_var + 100;
}

// Function: call_extern_func @ 0x11324
void call_extern_func(void)
{
 extern_function(5);
 return;
}

// Function: read_const_data @ 0x1132c
int read_const_data(void)
{
 return *(byte *)(const_string + 4) + 0x2a;
}

// Function: access_bss_var @ 0x11344
unsigned int access_bss_var(void)
{
 return 0;
}

// Function: access_bss_buffer @ 0x1134c
unsigned int access_bss_buffer(void)
{
 return 0;
}

// Function: global_struct_access @ 0x11354
unsigned int global_struct_access(void)
{
 return 0x1e;
}

// Function: set_file_static @ 0x1135c
void set_file_static(unsigned int param_1)
{
 file_scope_static = param_1;
 return;
}

// Function: get_file_static @ 0x1136c
unsigned int get_file_static(void)
{
 return file_scope_static;
}

// Function: set_global_callback @ 0x1137c
void set_global_callback(unsigned int param_1)
{
 global_func_ptr = param_1;
 return;
}

// Function: call_global_callback @ 0x1138c
unsigned int call_global_callback(void)
{
 unsigned int uVar1;
 if (global_func_ptr != (void *)0x0) {
 uVar1 = (*global_func_ptr)();
 return uVar1;
 }
 return 0xffffffff;
}

// Function: global_heap_store @ 0x113ac
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

// Function: static_complex_init @ 0x113bc
unsigned int static_complex_init(void)
{
 return 0xf;
}

// Function: tls_access @ 0x113c4
int tls_access(int param_1)
{
 return param_1 << 1;
}

// Function: init_order_test @ 0x113cc
unsigned int init_order_test(void)
{
 return 0x14;
}

// Function: test_static_global @ 0x113d4
void test_static_global(void)
{
 unsigned int uVar1;
 puts(&DAT_00012c38);
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

// Function: memop_memset @ 0x115a8
uint memop_memset(byte *param_1,size_t param_2,int param_3)
{
 if (param_2 != 0 && param_1 != (byte *)0x0) {
 memset(param_1,param_3,param_2);
 return (uint)*param_1;
 }
 return 0xffffffff;
}

// Function: memop_memcpy @ 0x115dc
unsigned int memop_memcpy(void *param_1,void *param_2,size_t param_3)
{
 if (param_1 == (void *)0x0 || (param_3 == 0 || param_2 == (void *)0x0)) {
 return 0xffffffff;
 }
 memcpy(param_1,param_2,param_3);
 return *(unsigned int *)((int)param_1 + ((param_3 & 0xfffffffc) - 4));
}

// Function: memop_memmove @ 0x11624
uint memop_memmove(void *param_1,int param_2)
{
 if ((param_1 == (void *)0x0 || param_2 != 0) && (param_1 != (void *)0x0 && param_2 != 1)) {
 memmove((void *)((int)param_1 + 1),param_1,param_2 - 1);
 return (uint)*(byte *)((int)param_1 + 1);
 }
 return 0xffffffff;
}

// Function: memop_memcmp @ 0x1165c
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

// Function: memop_bzero @ 0x116a8
uint memop_bzero(byte *param_1,size_t param_2)
{
 if (param_1 != (byte *)0x0) {
 memset(param_1,0,param_2);
 return (uint)*param_1;
 }
 return 0xffffffff;
}

// Function: memop_bcopy @ 0x116d0
uint memop_bcopy(void *param_1,byte *param_2,size_t param_3)
{
 if (param_1 == (void *)0x0 || (param_3 == 0 || param_2 == (byte *)0x0)) {
 return 0xffffffff;
 }
 memmove(param_2,param_1,param_3);
 return (uint)*param_2;
}

// Function: memop_unaligned_access @ 0x11714
static void memop_unaligned_access(int param_1)
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
 __stack_chk_fail();
}

// Function: memop_memory_barrier @ 0x11778
static int memop_memory_barrier(int *param_1)
{
 int iVar1;
 if (param_1 != (int *)0x0) {
  iVar1 = *param_1;
  __sync_synchronize();
  return *param_1 + iVar1;
 }
 return -1;
}

// Function: test_memory_op_functions @ 0x117a0
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
 puts(&DAT_00012ebc);
 local_10c = 0x41414141;
 local_108 = 0x41414141;
 local_104 = 0x4141;
 __printf_chk(1,"MEMOP-L2-01: %d\n",0x41);
 __printf_chk(1,"MEMOP-L2-02: %d\n",0x32);
 ((char*)&local_118)[0] = 'H';
 ((char*)&local_118)[1] = 'e';
 ((char*)&local_118)[2] = 'l';
 ((char*)&local_118)[3] = 'l';
 ((char*)&uStack_114)[0] = 'o';
 ((char*)&uStack_114)[1] = 'W';
 ((char*)&uStack_114)[2] = 'o';
 ((char*)&uStack_114)[3] = 'r';
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
 uVar1 = 0;
 if (local_c == 0) {
 __printf_chk(1,"MEMOP-L3-02: %d\n",10);
 return;
 }
 __stack_chk_fail();
}







































































































