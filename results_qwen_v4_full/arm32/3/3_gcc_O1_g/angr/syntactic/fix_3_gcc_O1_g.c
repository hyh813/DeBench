// Angr Decompilation of 3_gcc_O1_g
// Platform: ARMEL

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

#define NULL ((void*)0)

/* Forward declarations */
typedef struct const_data_struct {
 char padding_0[4];
 char field_4;
} const_data_struct;

/* Library function declarations */
extern int __printf_chk(int flag, const char *format, ...);
extern void __stack_chk_fail(void);
extern int puts(const char *s);
extern void *malloc(unsigned int size);
extern void free(void *ptr);
extern void *calloc(unsigned int nmemb, unsigned int size);
extern void *realloc(void *ptr, unsigned int size);
extern void *memcpy(void *dest, const void *src, unsigned int n);
extern void *memset(void *s, int c, unsigned int n);
extern void *memmove(void *dest, const void *src, unsigned int n);
extern int memcmp(const void *s1, const void *s2, unsigned int n);
extern char *strncpy(char *dest, const char *src, unsigned int n);
extern int fork(void);
extern int waitpid(int pid, int *status, int options);
extern void perror(const char *s);
extern void exit(int status);
extern void abort(void);


/* Define extern_function */
static unsigned int extern_function(unsigned int a0)
{
 return a0 * 2;
}

/* Missing global variable definitions */
unsigned int file_scope_static = 0;
unsigned int static_depends_0 = 0;
unsigned int (*global_func_ptr)(unsigned int) = 0;
unsigned int global_counter = 0;
unsigned int counter_1 = 0;
unsigned int extern_global_var = 0;
unsigned int g_24008 = 0;
unsigned int g_128a0 = 0;
unsigned int g_129fc = 0;
unsigned int g_12b68 = 0;
unsigned int g_12b78 = 0;
unsigned int g_12ba0 = 0;
unsigned int g_12be4 = 0;
unsigned int g_12bf0 = 0;
unsigned int g_12e74 = 0;
unsigned int global_array[4] = {0};
const_data_struct *const_string = NULL;
unsigned int __glibc___stack_chk_guard = 0;

/* Missing function definitions */
static unsigned int Clz(unsigned int x)
{
 unsigned int count = 0;
 if (x == 0) return 32;
 while ((x & 0x80000000) == 0)
 {
  x <<= 1;
  count++;
 }
 return count;
}

static unsigned int armg_calculate_condition(unsigned int cond, unsigned int v1, unsigned int v2, unsigned int v3)
{
 return 1;
}

/* CRT stub function _init removed by preprocessor */



// Function: sub_10598 at 0x10598

static int sub_10598(void)
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return g_24008;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_106bc at 0x106bc
static void sub_106bc()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: double_value at 0x1077c
static unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: local_vars at 0x10784
static int local_vars(unsigned int a0)
{
 return a0 * 2 + 10;
}


// Function: local_array at 0x10790
static unsigned int local_array(unsigned int a0)
{
 unsigned int v5; // lr
 struct_0 *ptr; // r2
 unsigned int v7; // r3
 struct_0 *v8; // r2
 char v0; // [bp-0x38]
 char v1; // [bp-0x20]
 char v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]
 unsigned int v4; // [bp-0x4]

 v4 = v5;
 v3 = __glibc___stack_chk_guard;
 ptr = (struct_0 *)&v0;
 v7 = 0;
 do
 {
 v8 = (struct_0 *)&ptr->field_4;
 ptr->field_4 = v7;
 v7 += a0;
 ptr = v8;
 } while (ptr != (struct_0 *)&v2);
 if ((v3 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return *((int *)&v1);
}


// Function: local_struct at 0x107f0
static unsigned int local_struct(unsigned int a0)
{
 return a0 * 3;
}


// Function: address_of_local at 0x107f8
static unsigned int address_of_local(unsigned int *ptr)
{
 *(ptr) = 42;
 return 42;
}


// Function: address_of_array at 0x10808
static unsigned int address_of_array(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: large_stack_frame at 0x10814

static int large_stack_frame(void)
{
 unsigned int v5; // lr
 char *ptr; // r2
 unsigned int v7; // r3
 char *v8; // r2
 char v0; // [bp-0x80d]
 char v1; // [bp-0x40c]
 char v2; // [bp-0xd]
 unsigned int v3; // [bp-0xc]
 unsigned int v4; // [bp-0x4]

 v4 = v5;
 v3 = __glibc___stack_chk_guard;
 ptr = &v0;
 v7 = 0;
 do
 {
 v8 = &ptr[1];
 ptr[1] = v7;
 v7 += 1;
 ptr = v8;
 } while (ptr != &v2);
 if ((v3 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v1;
}


// Function: vla_stack at 0x10884

static unsigned int vla_stack(unsigned int a0)
{
 unsigned int *ptr; // r12
 unsigned int *p; // r2
 unsigned int i; // r3
 unsigned int *v5; // r2
 unsigned int v6; // r0
 char v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v1 = __glibc___stack_chk_guard;
 if (1000 > a0 - 1)
 {
 ptr = (unsigned int *)(&v0 - ((a0 * 4 + 7) & 0xfffffff8));
 p = ptr + 1;
 i = 0;
 do
 {
 v5 = p + 1;
 p[1] = i;
 i += 2;
 p = v5;
 } while (i != a0 * 2);
 v6 = ptr[a0 + (a0 >> 31) >> 1];
 }
 else
 {
 v6 = 4294967295;
 }
 if ((v1 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v6;
}


// Function: alloca_usage at 0x10918

static unsigned int alloca_usage(unsigned int a0)
{
 unsigned int v2; // r1
 unsigned int *ptr; // r12
 unsigned int *p; // r2
 unsigned int v5; // r3
 unsigned int *v6; // r2
 unsigned int v7; // r0
 char v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v1 = __glibc___stack_chk_guard;
 if (a0 > 0)
 {
 v2 = a0 * 4;
 ptr = (unsigned int *)(&v0 - ((v2 + 7) & 0xfffffff8));
 p = ptr + 1;
 v5 = 0;
 do
 {
 v6 = p + 1;
 p[1] = v5;
 v5 += 3;
 p = v6;
 } while (p != (unsigned int *)((char *)ptr + v2 - 4));
 v7 = ptr[a0 + (a0 >> 31) >> 1];
 }
 else
 {
 v7 = 4294967295;
 }
 if ((v1 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v7;
}


// Function: stack_alias at 0x109ac
static unsigned int stack_alias(void)
{
 return 20;
}


// Function: test_stack_memory at 0x109b4

static int test_stack_memory(void)
{
 unsigned int v4; // r0

 puts("MEM-L1-00");
 __printf_chk(1, "MEM-L1-01 (local_vars): %d\n", 20);
 __printf_chk(1, "MEM-L1-02 (local_array): %d\n", local_array(2));
 __printf_chk(1, "MEM-L1-03 (local_struct): %d\n", 15);
 __printf_chk(1, "MEM-L1-04 (address_of_local): %d\n", 42);
 __printf_chk(1, "MEM-L1-05 (address_of_array): %d\n", 2);
 __printf_chk(1, "MEM-L2-01 (large_stack_frame): %d\n", large_stack_frame());
 __printf_chk(1, "MEM-L2-02 (vla_stack): %d\n", vla_stack(10));
 __printf_chk(1, "MEM-L2-03 (alloca_usage): %d\n", alloca_usage(10));
 v4 = __printf_chk(1, "MEM-L2-04 (stack_alias): %d\n", 20);
 return v4;
}


// Function: heap_basic at 0x10a98
static unsigned int heap_basic(unsigned int a0)
{
 unsigned int *ptr; // r0
 unsigned int *p; // r2
 unsigned int i; // r3
 unsigned int *v3; // r2
 unsigned int result;

 ptr = malloc(a0 * 4);
 if (!ptr)
 return 4294967295;
 p = ptr;
 if (a0 > 0)
 {
 p = ptr + 1;
 i = 0;
 do
 {
 v3 = p + 1;
 p[1] = i;
 i += 2;
 p = v3;
 } while (i != a0 * 2);
 }
 result = ptr[a0 + (a0 >> 31) >> 1];
 free(ptr);
 return result;
}


// Function: heap_calloc at 0x10af4
static unsigned int heap_calloc(unsigned int a0)
{
 unsigned int *ptr; // r0
 unsigned int *p; // r3
 unsigned int v2; // r4
 unsigned int *v3; // r3

 ptr = calloc(a0, 4);
 if (!ptr)
 return 4294967295;
 if (a0 > 0)
 {
 p = ptr + 1;
 v2 = 0;
 do
 {
 v3 = p + 1;
 v2 += p[1];
 p = v3;
 } while (p != &ptr[a0 + 1]);
 }
 else
 {
 v2 = 0;
 }
 free(ptr);
 return v2;
}


// Function: heap_realloc at 0x10b50
static unsigned int heap_realloc(void)
{
 unsigned int *ptr; // r4
 unsigned int *p; // r0
 unsigned int result;

 ptr = malloc(20);
 if (!ptr)
 return 0xffffffff;
 ptr[0] = 1;
 ptr[1] = 2;
 ptr[2] = 3;
 ptr[3] = 4;
 ptr[4] = 5;
 p = realloc(ptr, 40);
 if (!p)
 {
 free(ptr);
 return 0xfffffffe;
 }
 p[5] = 50;
 p[6] = 60;
 p[7] = 70;
 p[8] = 80;
 p[9] = 90;
 result = 0x32;
 free(p);
 return result;
}


// Function: heap_array at 0x10bfc
static unsigned int heap_array(unsigned int a0)
{
 unsigned int v0; // r4
 unsigned int *ptr; // r0
 unsigned int *p; // r2
 unsigned int v3; // r3
 unsigned int *v4; // r2

 v0 = a0 * 4;
 ptr = malloc(v0);
 if (!ptr)
 return 4294967295;
 if (a0 > 0)
 {
 p = ptr + 1;
 v3 = 0;
 do
 {
 v4 = p + 1;
 p[1] = v3;
 v3 += 3;
 p = v4;
 } while (p != -4 + (char *)ptr + v0);
 }
 free(ptr);
 return ptr[a0 + (a0 >> 31) >> 1];
}


// Function: heap_struct at 0x10c60
static unsigned int heap_struct(unsigned int a0)
{
 unsigned int *ptr; // r0

 ptr = malloc(8);
 if (!ptr)
 return 4294967295;
 free(ptr);
 return a0 * 3;
}


// Function: heap_nested at 0x10c90
static unsigned int heap_nested(void **addr)
{
 struct_2 *ptr3; // r0
 struct_2 *p; // r4
 unsigned int *ptr2; // r0

 ptr3 = malloc(8);
 *(addr) = ptr3;
 if (!ptr3)
 return 4294967295;
 p = ptr3;
 ptr3->field_0 = 10;
 ptr2 = malloc(8);
 p->field_4 = ptr2;
 if (!ptr2)
 {
 free(p);
 return 4294967294;
 }
 ptr2[0] = 20;
 ptr2[1] = 0;
 return 0;
}


// Function: linked_list_heap at 0x10cfc
static unsigned int linked_list_heap(void)
{
 unsigned int i; // r5
 struct_0_list *v1; // r0
 struct_0_list *ptr3; // r4
 struct_0_list *v9; // r4
 struct_0_list *addr; // r4
 struct_0_list *v11; // r4
 struct_0_list *v2; // r4
 struct_0_list *ptr4; // r0
 struct_0_list *p; // r0
 unsigned int v5; // r5
 struct_0_list *ptr; // r3

 i = 0;
 v1 = 0;
 v2 = 0;
 do
 {
 ptr4 = v1;
 p = malloc(8);
 if (!p)
 {
 if (v2)
 {
 do
 {
 addr = v2;
 v11 = addr->field_4;
 free(addr);
 v2 = v11;
 } while (v2);
 return 4294967295;
 }
 else
 {
 return 4294967295;
 }
 }
 p->field_0 = i;
 p->field_4 = 0;
 if (ptr4)
 ptr4->field_4 = p;
 if (!v2)
 v2 = p;
 i += 10;
 v1 = p;
 } while (i != 50);
 if (!v2)
 return 0;
 v5 = 0;
 ptr = v2;
 do
 {
 v5 += ptr->field_0;
 ptr = ptr->field_4;
 } while (ptr);
 do
 {
 ptr3 = v2;
 v9 = ptr3->field_4;
 free(ptr3);
 v2 = v9;
 } while (v2);
 return v5;
}


// Function: create_tree_node at 0x10dbc
static unsigned int *create_tree_node(unsigned int a0)
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 unsigned int *ptr; // r0
 unsigned int v5; // r3
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = v3;
 ptr = malloc(12);
 ptr[0] = a0;
 if (ptr)
 v5 = 0;
 ptr[1] = v5;
 ptr[2] = v5;
 return ptr;
}


// Function: tree_heap_traversal at 0x10de4
static unsigned int tree_heap_traversal(void)
{
 tree_node *result; // r0
 tree_node *ptr; // r4
 tree_node *v2; // cc_dep1
 tree_node *v3; // r3
 tree_node *p; // r0

 result = create_tree_node(10);
 ptr = result;
 v2 = result;
 if (!result)
 return 4294967295;
 ptr->field_4 = create_tree_node(20);
 v3 = create_tree_node(30);
 ptr->field_8 = v3;
 p = ptr->field_4;
 free(p);
 free(ptr->field_8);
 free(ptr);
 return 60;
}


// Function: memory_leak at 0x10e88
static unsigned int memory_leak(unsigned int i)
{
 unsigned int *ptr; // r0
 unsigned int *p; // r2
 unsigned int v2; // r3
 unsigned int *v3; // r2

 ptr = malloc(i * 4);
 if (!ptr)
 return 4294967295;
 if (i <= 0)
 return ptr[i + (i >> 31) >> 1];
 p = ptr + 1;
 v2 = 0;
 do
 {
 v3 = p + 1;
 p[1] = v2;
 v2 += 1;
 p = v3;
 } while (i != v2);
 return ptr[i + (i >> 31) >> 1];
}


// Function: dangling_pointer at 0x10ed8
static unsigned int dangling_pointer()
{
 unsigned int *ptr; // r0

 ptr = malloc(4);
 if (!ptr)
 return 4294967295;
 __printf_chk(1, "value before free: %d\n", 42);
 free(ptr);
 return *(ptr);
}


// Function: double_free at 0x10f18
static unsigned int double_free(unsigned int *a0)
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 unsigned int *ptr; // r4
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 if (a0)
 return *(a0);
 v1 = v2;
 v0 = v3;
 ptr = malloc(4);
 if (!ptr)
 return 4294967295;
 free(ptr);
 free(ptr);
 return 4294967294;
}


// Function: heap_overflow at 0x10f5c
static unsigned int heap_overflow()
{
 unsigned int *ptr; // r0
 unsigned int *p; // r2
 unsigned int i; // r3
 unsigned int *v3; // r2

 ptr = malloc(40);
 if (!ptr)
 return 4294967295;
 p = ptr + 1;
 i = 0;
 do
 {
 v3 = p + 1;
 p[1] = i;
 i += 100;
 p = v3;
 } while (i != 1100);
 free(ptr);
 return *(ptr);
}


// Function: test_heap_memory at 0x10fa8
static unsigned int test_heap_memory(void)
{
 unsigned int v4; // lr
 unsigned int pid; // r0
 unsigned int msg; // r0
 unsigned int v16; // r3
 heap_test_struct *result; // [bp-0x14]
 unsigned int v1[1]; // [bp-0x10]
 unsigned int v2; // [bp-0xc]
 unsigned int v3; // [bp-0x4]

 v3 = v4;
 v2 = __glibc___stack_chk_guard;
 puts("HEAP-L2-00");
 __printf_chk(1, "HEAP-L2-01 (heap_basic): %d\n", heap_basic(10));
 __printf_chk(1, "HEAP-L2-02 (heap_calloc): %d\n", heap_calloc(5));
 __printf_chk(1, "HEAP-L2-03 (heap_realloc): %d\n", heap_realloc());
 __printf_chk(1, "HEAP-L2-04 (heap_array): %d\n", heap_array(10));
 __printf_chk(1, "HEAP-L2-05 (heap_struct): %d\n", heap_struct(5));
 result = NULL;
 __printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", heap_nested((void **)&result));
 if (result)
 {
 free(result->field_4);
 free(result);
 }
 __printf_chk(1, "HEAP-L3-01 (linked_list_heap): %d\n", linked_list_heap());
 __printf_chk(1, "HEAP-L3-02 (tree_heap_traversal): %d\n", tree_heap_traversal());
 __printf_chk(1, "HEAP-L3-03 (memory_leak): %d\n", memory_leak(5));
 __printf_chk(1, "HEAP-L3-04 (dangling_pointer): %d\n", 42);
 msg = 0;
 if ((v2 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return msg;
}


// Function: global_var_access at 0x111b4

static unsigned int global_var_access(void)
{
 global_counter = global_counter + 1;
 return global_counter + 1;
}


// Function: global_var_read at 0x111cc

static unsigned int global_var_read(void)
{
 return global_counter * 2;
}


// Function: global_array_access at 0x111e0

static unsigned int global_array_access(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 if (9 >= a0)
 return *((int *)(77636 + a0 * 4));
 return 4294967295;
}


// Function: static_local at 0x111f8

static unsigned int static_local(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r0

 if (!a0)
 {
 v0 = counter_1 + 1;
 if (!armg_calculate_condition(18, a0, 0, 0))
 {
 v0 = 0;
 }
 }
 else
 {
 v0 = counter_1;
 if (armg_calculate_condition(18, a0, 0, 0))
 {
 v0 = 0;
 }
 }
 counter_1 = v0;
 return v0;
}


// Function: call_static_func at 0x1121c
static int call_static_func(unsigned int a0)
{
 return a0 * 2 + 1;
}


// Function: access_extern_global at 0x11228

static int access_extern_global(void)
{
 return extern_global_var + 100;
}


// Function: call_extern_func at 0x1123c
static int call_extern_func(void)
{
 unsigned int v0; // r0

 v0 = extern_function(5);
 return extern_function(5);
}


// Function: read_const_data at 0x1124c

static int read_const_data(void)
{
 if (const_string)
 return const_string->field_4 + 42;
 return 42;
}


// Function: access_bss_var at 0x11264
static unsigned int access_bss_var(void)
{
 return 0;
}


// Function: access_bss_buffer at 0x1126c
static unsigned int access_bss_buffer(void)
{
 return 0;
}


// Function: global_struct_access at 0x11274
static unsigned int global_struct_access(void)
{
 return 30;
}


// Function: set_file_static at 0x1127c

static int set_file_static(unsigned int a0)
{
 file_scope_static = a0;
 return a0;
}


// Function: get_file_static at 0x1128c

static int get_file_static(void)
{
 return file_scope_static;
}


// Function: set_global_callback at 0x1129c

static int set_global_callback(unsigned int a0)
{
 global_func_ptr = a0;
 return a0;
}


// Function: call_global_callback at 0x112ac
static unsigned int call_global_callback(void)
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 unsigned int v4; // r0
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 if (!global_func_ptr)
 return 4294967295;
 v1 = v2;
 v0 = v3;
 v4 = global_func_ptr(10);
 return global_func_ptr(10);
}


// Function: global_heap_store at 0x112d4
static unsigned int global_heap_store(unsigned int *a0)
{
 if (a0)
 return *(a0);
 return 4294967295;
}


// Function: static_complex_init at 0x112e4
static unsigned int static_complex_init(void)
{
 return 15;
}


// Function: tls_access at 0x112ec
static unsigned int tls_access(unsigned int a0)
{
 return a0 * 2;
}


// Function: init_order_test at 0x112f4

static unsigned int init_order_test(void)
{
 static_depends_0 = 20;
 return 20;
}


// Function: test_static_global at 0x11308

static int test_static_global(void)
{
 unsigned int v1; // r2
 unsigned int v7; // r0
 unsigned int v8; // r0

 puts("STM-L1-00");
 __printf_chk(1, "STM-L1-01 (global_var_access): %d\n", global_var_access());
 __printf_chk(1, "STM-L1-01 (global_var_read): %d\n", global_counter * 2);
 __printf_chk(1, "STM-L1-02 (global_array_access): %d\n", 5);
 counter_1 = 1;
 __printf_chk(1, "STM-L1-03 (static_local): %d\n", 1);
 v1 = counter_1 + 1;
 counter_1 = counter_1 + 1;
 __printf_chk(1, "STM-L1-03 (static_local): %d\n", v1);
 __printf_chk(1, "STM-L1-04 (call_static_func): %d\n", 11);
 __printf_chk(1, "STM-L2-01 (access_extern_global): %d\n", extern_global_var + 100);
 __printf_chk(1, "STM-L2-02 (call_extern_func): %d\n", call_extern_func());
 __printf_chk(1, "STM-L2-03 (read_const_data): %d\n", read_const_data());
 __printf_chk(1, "STM-L2-04 (access_bss_var): %d\n", 0);
 __printf_chk(1, "STM-L2-04 (access_bss_buffer): %d\n", 0);
 __printf_chk(1, "STM-L2-05 (global_struct_access): %d\n", global_struct_access());
 file_scope_static = 50;
 __printf_chk(1, "STM-L2-06 (file_static): %d\n", 50);
 global_func_ptr = double_value;
 __printf_chk(1, "STM-L2-07 (global_func_ptr): %d\n", call_global_callback());
 __printf_chk(1, "STM-L2-08 (global_heap_store): %d\n", 100);
 __printf_chk(1, "STM-L2-09 (static_complex_init): %d\n", static_complex_init());
 __printf_chk(1, "STM-L3-01 (tls_access): %d\n", 20);
 v7 = init_order_test();
 v8 = __printf_chk(1, "STM-L3-02 (init_order_test): %d\n", v7);
 return v8;
}


// Function: memop_memset at 0x114e4
static unsigned int memop_memset(char *a0, unsigned int n, unsigned int a2)
{
 unsigned int v2; // cc_dep1
 unsigned int v3; // cc_dep2
 unsigned int v12; // r4
 unsigned int v4; // cc_ndep
 unsigned int v5; // cc_dep1
 unsigned int v6; // cc_dep2
 unsigned int v7; // cc_ndep
 unsigned int v11; // lr
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 if (n)
 {
 if ((char)armg_calculate_condition(2, (armg_calculate_condition(18, v2, v3, v4) ? a0 : v2), (armg_calculate_condition(18, v2, v3, v4) ? 0 : v3), (armg_calculate_condition(18, v2, v3, v4) ? 0 : v4)))
 return 4294967295;
 }
 else
 {
 if ((char)armg_calculate_condition(2, (armg_calculate_condition(18, v5, v6, v7) ? a0 : v5), (armg_calculate_condition(18, v5, v6, v7) ? 0 : v6), (armg_calculate_condition(18, v5, v6, v7) ? 0 : v7)))
 return 4294967295;
 }
 v1 = v11;
 v0 = v12;
 memset(a0, a2, n);
 return *(a0);
}


// Function: memop_memcpy at 0x11518
static unsigned int memop_memcpy(void* a0, void* a1, unsigned int n)
{
 void* v0; // cc_dep1
 unsigned int v1; // cc_dep2
 unsigned int v13; // r2
 unsigned int v2; // cc_ndep
 unsigned int result; // r2
 void* v3; // cc_dep1
 unsigned int v4; // cc_dep2
 unsigned int v5; // cc_ndep
 void* v6; // cc_dep1
 unsigned int v7; // cc_dep2
 unsigned int v8; // cc_ndep

 if (n)
 {
 v3 = (armg_calculate_condition(18, v0, v1, v2) ? a1 : v0);
 v4 = (armg_calculate_condition(18, v0, v1, v2) ? 0 : v1);
 v5 = (armg_calculate_condition(18, v0, v1, v2) ? 0 : v2);
 if (!armg_calculate_condition(2, v3, v4, v5))
 goto LABEL_1152a;
LABEL_11529:
 v13 = 1;
 if (!armg_calculate_condition(18, v3, v4, v5))
 goto LABEL_1152e;
LABEL_1152d:
 result = 0;
 }
 else
 {
 v3 = (armg_calculate_condition(18, v6, v7, v8) ? a1 : v6);
 v4 = (armg_calculate_condition(18, v6, v7, v8) ? 0 : v7);
 v5 = (armg_calculate_condition(18, v6, v7, v8) ? 0 : v8);
 if (armg_calculate_condition(2, v3, v4, v5))
 goto LABEL_11529;
LABEL_1152a:
 v13 = n;
 if (armg_calculate_condition(18, v3, v4, v5))
 goto LABEL_1152d;
LABEL_1152e:
 result = v13;
 }
 if (!a0)
 result |= 1;
 if (result)
 return 4294967295;
 memcpy(a0, a1, n);
 return *((int *)(-4 + (char *)a0 + (n & 0xfffffffc)));
}


// Function: memop_memmove at 0x11564
static unsigned int memop_memmove(void *a0, unsigned int a1)
{
 unsigned int v2; // cc_dep1
 unsigned int v3; // cc_dep2
 unsigned int v12; // r4
 unsigned int v4; // cc_ndep
 unsigned int v5; // cc_dep1
 unsigned int v6; // cc_dep2
 unsigned int v7; // cc_ndep
 unsigned int v11; // lr
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 if (a0)
 {
 if ((char)armg_calculate_condition(146, (armg_calculate_condition(18, v2, v3, v4) ? a1 : v2), (armg_calculate_condition(18, v2, v3, v4) ? 1 : v3), (armg_calculate_condition(18, v2, v3, v4) ? 0 : v4)))
 return 4294967295;
 }
 else
 {
 if ((char)armg_calculate_condition(146, (armg_calculate_condition(18, v5, v6, v7) ? a1 : v5), (armg_calculate_condition(18, v5, v6, v7) ? 1 : v6), (armg_calculate_condition(18, v5, v6, v7) ? 0 : v7)))
 return 4294967295;
 }
 v1 = v11;
 v0 = v12;
 memmove(&a0->field_1, a0, a1 - 1);
 return a0->field_1;
}


// Function: memop_memcmp at 0x11598
static unsigned int memop_memcmp(void* a0, void* a1, unsigned int a2, unsigned int a3)
{
 void* v2; // cc_dep1
 unsigned int v3; // cc_dep2
 unsigned int v4; // cc_ndep
 unsigned int v26; // lr
 unsigned int v27; // r4
 unsigned int v28; // r0
 void* v5; // cc_dep1
 unsigned int v6; // cc_dep2
 unsigned int v7; // cc_ndep
 void* v8; // cc_dep1
 unsigned int v9; // cc_dep2
 unsigned int v10; // cc_ndep
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 if (a2)
 {
 v5 = (armg_calculate_condition(18, v2, v3, v4) ? a1 : v2);
 v6 = (armg_calculate_condition(18, v2, v3, v4) ? 0 : v3);
 v7 = (armg_calculate_condition(18, v2, v3, v4) ? 0 : v4);
 if (!armg_calculate_condition(2, v5, v6, v7))
 goto LABEL_115a2;
LABEL_115a1:
 a3 = 1;
 if (!armg_calculate_condition(18, v5, v6, v7))
 goto LABEL_115a6;
LABEL_115a5:
 a3 = 0;
 }
 else
 {
 v5 = (armg_calculate_condition(18, v8, v9, v10) ? a1 : v8);
 v6 = (armg_calculate_condition(18, v8, v9, v10) ? 0 : v9);
 v7 = (armg_calculate_condition(18, v8, v9, v10) ? 0 : v10);
 if (armg_calculate_condition(2, v5, v6, v7))
 goto LABEL_115a1;
LABEL_115a2:
 if (armg_calculate_condition(18, v5, v6, v7))
 goto LABEL_115a5;
 }
LABEL_115a6:
 if (!a0)
 a3 = a3 | 1;
 if (a3)
 return 0;
 v1 = v26;
 v0 = v27;
 v28 = memcmp(a0, a1, a2);
 if (v28 <= 0)
 return v28 >> 31;
 return 1;
}


// Function: memop_bzero at 0x115e4
static unsigned int memop_bzero(char *a0, unsigned int n)
{
 if (!a0)
 return 4294967295;
 memset(a0, 0, n);
 return *(a0);
}


// Function: memop_bcopy at 0x11610
static unsigned int memop_bcopy(void* a0, char *a1, unsigned int n, unsigned int a3)
{
 char *v2; // cc_dep1
 unsigned int v3; // cc_dep2
 unsigned int v4; // cc_ndep
 unsigned int v26; // lr
 unsigned int v27; // r4
 char *v5; // cc_dep1
 unsigned int v6; // cc_dep2
 unsigned int v7; // cc_ndep
 char *v8; // cc_dep1
 unsigned int v9; // cc_dep2
 unsigned int v10; // cc_ndep
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 if (n)
 {
 v5 = (armg_calculate_condition(18, v2, v3, v4) ? a1 : v2);
 v6 = (armg_calculate_condition(18, v2, v3, v4) ? 0 : v3);
 v7 = (armg_calculate_condition(18, v2, v3, v4) ? 0 : v4);
 if (!armg_calculate_condition(2, v5, v6, v7))
 goto LABEL_1161a;
LABEL_11619:
 a3 = 1;
 if (!armg_calculate_condition(18, v5, v6, v7))
 goto LABEL_1161e;
LABEL_1161d:
 a3 = 0;
 }
 else
 {
 v5 = (armg_calculate_condition(18, v8, v9, v10) ? a1 : v8);
 v6 = (armg_calculate_condition(18, v8, v9, v10) ? 0 : v9);
 v7 = (armg_calculate_condition(18, v8, v9, v10) ? 0 : v10);
 if (armg_calculate_condition(2, v5, v6, v7))
 goto LABEL_11619;
LABEL_1161a:
 if (armg_calculate_condition(18, v5, v6, v7))
 goto LABEL_1161d;
LABEL_1161e:
 ;
 }
 if (!a0)
 a3 |= 1;
 if (a3)
 return 4294967295;
 v1 = v26;
 v0 = v27;
 memmove(a1, a0, n);
 return *(a1);
}


// Function: memop_unaligned_access at 0x11654

static unsigned int memop_unaligned_access(void* a0)
{
 unsigned int v3; // lr
 unsigned int v4; // r0
 char v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x4]

 v2 = v3;
 v1 = __glibc___stack_chk_guard;
 v4 = 0;
 if (a0)
 memcpy(&v0, a0 + 1, 4);
 else
 v4 = 4294967295;
 if ((v1 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v4;
}


// Function: memop_memory_barrier at 0x116b8
static unsigned int memop_memory_barrier(unsigned int a0)
{
 if (!a0)
 return 4294967295;
 /* __sync_synchronize() - memory barrier */
 return 0;
}


// Function: test_memory_op_functions at 0x116e0

static unsigned int test_memory_op_functions(void)
{
 unsigned int v28; // r0
 unsigned int v0; // [bp-0x180]
 unsigned int flag1; // [bp-0x17c]
 unsigned int v2; // [bp-0x178]
 unsigned int v3; // [bp-0x174]
 unsigned int flag2; // [bp-0x170]
 unsigned int v5; // [bp-0x16c]
 unsigned int v6; // [bp-0x168]
 unsigned int v7; // [bp-0x164]
 unsigned int v8; // [bp-0x160]
 unsigned int v9; // [bp-0x15c]
 unsigned int v10; // [bp-0x158]
 unsigned int v11; // [bp-0x154]
 char v12; // [bp-0x150]
 unsigned int v13; // [bp-0x13c]
 char result[4]; // [bp-0x138]
 unsigned int v15; // [bp-0x134]
 unsigned int v16; // [bp-0x130]
 char v17[12]; // [bp-0x12c]
 char v18; // [bp-0x120]
 char v19[256]; // [bp-0x114]
 unsigned int v20; // [bp-0x14]

 v20 = __glibc___stack_chk_guard;
 puts("MEMOP-L2-00");
 v7 = 10;
 v8 = 20;
 v9 = 30;
 v10 = 40;
 v11 = 50;
 memset(&v12, 0, 20);
 __printf_chk(1, "MEMOP-L2-01: %d\n", memop_memset(&v19, 10, 65));
 __printf_chk(1, "MEMOP-L2-02: %d\n", memop_memcpy(&v12, &v7, 20));
 strncpy(&v18, "HelloWorld", 10);
 __printf_chk(1, "MEMOP-L2-03: %c\n", memop_memmove((memmove_struct *)&v18, 10));
 flag1 = 1;
 v2 = 2;
 v3 = 3;
 flag2 = 1;
 v5 = 2;
 v6 = 4;
 __printf_chk(1, "MEMOP-L2-04: %d\n", memop_memcmp(&flag1, &flag2, 12, flag1));
 __printf_chk(1, "MEMOP-L2-05: %d\n", memop_bzero(&v17, 10));
 v13 = 67305985;
 result[0] = 0;
 __printf_chk(1, "MEMOP-L2-06: %d\n", memop_bcopy(&v13, &result, 4, 67305985));
 v15 = 0x3020100;
 v16 = 117835012;
 __printf_chk(1, "MEMOP-L3-01: 0x%x\n", memop_unaligned_access(&v15));
 v0 = 5;
 v28 = __printf_chk(1, "MEMOP-L3-02: %d\n", memop_memory_barrier(&v0));
 if ((v20 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v28;
}


// Function: main at 0x118d4
int main()
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}





/* __sync_fetch_and_add_4 is a GCC builtin - removed */


/* __sync_fetch_and_sub_4 is a GCC builtin - removed */


/* __sync_fetch_and_or_4 is a GCC builtin - removed */


/* __sync_fetch_and_and_4 is a GCC builtin - removed */


/* __sync_fetch_and_xor_4 is a GCC builtin - removed */


/* __sync_fetch_and_nand_4 is a GCC builtin - removed */


/* __sync_fetch_and_add_2 is a GCC builtin - removed */


/* __sync_fetch_and_sub_2 is a GCC builtin - removed */


/* __sync_fetch_and_or_2 is a GCC builtin - removed */


/* __sync_fetch_and_and_2 is a GCC builtin - removed */


/* __sync_fetch_and_xor_2 is a GCC builtin - removed */


/* __sync_fetch_and_nand_2 is a GCC builtin - removed */


/* __sync_fetch_and_add_1 is a GCC builtin - removed */


/* __sync_fetch_and_sub_1 is a GCC builtin - removed */


/* __sync_fetch_and_or_1 is a GCC builtin - removed */


/* __sync_fetch_and_and_1 is a GCC builtin - removed */


/* __sync_fetch_and_xor_1 is a GCC builtin - removed */


/* __sync_fetch_and_nand_1 is a GCC builtin - removed */


/* __sync_add_and_fetch_4 is a GCC builtin - removed */


/* __sync_sub_and_fetch_4 is a GCC builtin - removed */


/* __sync_or_and_fetch_4 is a GCC builtin - removed */


/* __sync_and_and_fetch_4 is a GCC builtin - removed */


/* __sync_xor_and_fetch_4 is a GCC builtin - removed */


/* __sync_nand_and_fetch_4 is a GCC builtin - removed */


/* __sync_add_and_fetch_2 is a GCC builtin - removed */


/* __sync_sub_and_fetch_2 is a GCC builtin - removed */


/* __sync_or_and_fetch_2 is a GCC builtin - removed */


/* __sync_and_and_fetch_2 is a GCC builtin - removed */


/* __sync_xor_and_fetch_2 is a GCC builtin - removed */


/* __sync_nand_and_fetch_2 is a GCC builtin - removed */


/* __sync_add_and_fetch_1 is a GCC builtin - removed */


/* __sync_sub_and_fetch_1 is a GCC builtin - removed */


/* __sync_or_and_fetch_1 is a GCC builtin - removed */


/* __sync_and_and_fetch_1 is a GCC builtin - removed */


/* __sync_xor_and_fetch_1 is a GCC builtin - removed */


/* __sync_nand_and_fetch_1 is a GCC builtin - removed */


/* __sync_val_compare_and_swap_4 is a GCC builtin - removed */


/* __sync_val_compare_and_swap_2 is a GCC builtin - removed */


/* __sync_val_compare_and_swap_1 is a GCC builtin - removed */


/* __sync_bool_compare_and_swap_4 is a GCC builtin - removed */


/* __sync_bool_compare_and_swap_2 is a GCC builtin - removed */


/* __sync_bool_compare_and_swap_1 is a GCC builtin - removed */


/* __sync_synchronize is a GCC builtin - removed */


/* __sync_lock_test_and_set_4 is a GCC builtin - removed */


/* __sync_lock_test_and_set_2 is a GCC builtin - removed */


/* __sync_lock_test_and_set_1 is a GCC builtin - removed */


/* __sync_lock_release_8 is a GCC builtin - removed */


/* __sync_lock_release_4 is a GCC builtin - removed */


/* __sync_lock_release_2 is a GCC builtin - removed */


/* __sync_lock_release_1 is a GCC builtin - removed */



/* CRT stub function _fini removed by preprocessor */


