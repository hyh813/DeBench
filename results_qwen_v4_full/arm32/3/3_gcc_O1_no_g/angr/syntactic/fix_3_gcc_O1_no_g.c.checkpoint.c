// Angr Decompilation of 3_gcc_O1_no_g
// Platform: ARMEL

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

#define NULL 0

// Forward declarations for library functions
extern void __stack_chk_fail(void);
extern int puts(const char *s);
extern int __printf_chk(int flag, const char *format, ...);
extern void *malloc(size_t size);
extern void free(void *ptr);
extern void *calloc(size_t nmemb, size_t size);
extern void *realloc(void *ptr, size_t size);
extern void *memset(void *s, int c, size_t n);
extern void *memcpy(void *dest, const void *src, size_t n);
extern void *memmove(void *dest, const void *src, size_t n);
extern int memcmp(const void *s1, const void *s2, size_t n);
extern char *strncpy(char *dest, const char *src, size_t n);
extern pid_t fork(void);
extern pid_t waitpid(pid_t pid, int *wstatus, int options);
extern void exit(int status);
extern void perror(const char *s);

// Definition for armg_calculate_condition (stub implementation)
int armg_calculate_condition(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 (void)a0; (void)a1; (void)a2; (void)a3;
 return 1;
}

// Global variable definitions
typedef struct struct_0_const {
 char padding_0[4];
 char field_4;
} struct_0_const;

unsigned int __glibc___stack_chk_guard = 0;
unsigned int global_counter = 0;
unsigned int global_func_ptr = 0;
unsigned int file_scope_static = 0;
unsigned int extern_global_var = 0;
unsigned int counter_1 = 0;
unsigned int global_array[4] = {0};
unsigned int static_depends_0 = 0;
struct_0_const *const_string = NULL;

/* CRT stub function _init removed by preprocessor */



// Function: sub_10598 at 0x10598
extern unsigned int g_24008;

int sub_10598()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return v0;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_106bc at 0x106bc
void sub_106bc()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: double_value at 0x1077c
unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: local_vars at 0x10784
int local_vars(unsigned int a0)
{
 return a0 * 2 + 10;
}


// Function: local_array at 0x10790
typedef struct struct_0_local_array {
 char field_0;
 char padding_1[3];
 unsigned int field_4;
} struct_0_local_array;

unsigned int local_array(unsigned int a0)
{
 unsigned int v5; // lr
 struct_0_local_array *ptr; // r2
 unsigned int v7; // r3
 struct_0_local_array *v8; // r2
 char v0; // [bp-0x38]
 char v1; // [bp-0x20]
 char v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]
 unsigned int v4; // [bp-0x4]

 v4 = v5;
 v3 = __glibc___stack_chk_guard;
 ptr = (struct_0_local_array *)&v0;
 v7 = 0;
 do
 {
 v8 = (struct_0_local_array *)&ptr->field_4;
 ptr->field_4 = v7;
 v7 += a0;
 ptr = v8;
 } while (ptr != (struct_0_local_array *)&v2);
 if ((v3 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return *((int *)&v1);
}


// Function: local_struct at 0x107f0
unsigned int local_struct(unsigned int a0)
{
 return a0 * 3;
}


// Function: address_of_local at 0x107f8
unsigned int address_of_local(unsigned int *ptr)
{
 *(ptr) = 42;
 return 42;
}


// Function: address_of_array at 0x10808
unsigned int address_of_array(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: large_stack_frame at 0x10814
int large_stack_frame()
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
unsigned int vla_stack(unsigned int a0)
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
 ptr = &(&v0)[-1 * (a0 * 4 + 7 & 0xfffffff8)];
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
unsigned int alloca_usage(unsigned int a0)
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
 ptr = &(&v0)[-1 * (v2 + 7 & 0xfffffff8)];
 p = ptr + 1;
 v5 = 0;
 do
 {
 v6 = p + 1;
 p[1] = v5;
 v5 += 3;
 p = v6;
 } while (p != -4 + (char *)ptr + v2);
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
unsigned int stack_alias()
{
 return 20;
}


// Function: test_stack_memory at 0x109b4
extern char g_128a0;

int test_stack_memory()
{
 unsigned int v4; // r0

 puts(0x128a0);
 __printf_chk(1, "MEM-L1-01 (local_vars): %d\n", 20);
 __printf_chk(1, "MEM-L1-02 (local_array): %d\n", local_array(2));
 __printf_chk(1, "MEM-L1-03 (local_struct): %d\n", 15);
 __printf_chk(1, "MEM-L1-04 (address_of_local): %d\n", 42);
 __printf_chk(1, "MEM-L1-05 (address_of_array): %d\n", 2);
 __printf_chk(1, "MEM-L2-01 (large_stack_frame): %d\n", large_stack_frame());
 __printf_chk(1, "MEM-L2-02 (vla_stack): %d\n", vla_stack(10));
 __printf_chk(1, "MEM-L2-03 (alloca_usage): %d\n", alloca_usage(10));
 v4 = __printf_chk(1, "MEM-L2-04 (stack_alias): %d\n", 20);
 return __printf_chk(1, "MEM-L2-04 (stack_alias): %d\n", 20);
}


// Function: heap_basic at 0x10a98
unsigned int heap_basic(unsigned int a0)
{
 unsigned int *ptr; // r0
 unsigned int i; // r3
 unsigned int *v3; // r2

 ptr = malloc(a0 * 4);
 if (!ptr)
 return 4294967295;
 if (a0 > 0)
 {
 ptr = ptr + 1;
 i = 0;
 do
 {
 v3 = ptr + 1;
 ptr[1] = i;
 i += 2;
 ptr = v3;
 } while (i != a0 * 2);
 }
 free(ptr);
 return ptr[a0 + (a0 >> 31) >> 1];
}


// Function: heap_calloc at 0x10af4
unsigned int heap_calloc(unsigned int a0)
{
 unsigned int *ptr; // r0
 unsigned int v2; // r4
 unsigned int *v3; // r3

 ptr = calloc(a0, 4);
 if (!ptr)
 return 4294967295;
 if (a0 > 0)
 {
 ptr = ptr + 1;
 v2 = 0;
 do
 {
 v3 = ptr + 1;
 v2 += ptr[1];
 ptr = v3;
 } while (ptr != &ptr[a0 + 1]);
 }
 else
 {
 v2 = 0;
 }
 free(ptr);
 return v2;
}


// Function: heap_realloc at 0x10b50
unsigned int heap_realloc()
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
 if (p[2] == 3)
 {
 result = 0x32;
 if (!armg_calculate_condition(18, p[2], 3, 0))
 {
 result = 0;
 }
 else
 {
 result = 0xfffffffd;
 }
 }
 else
 {
 if (armg_calculate_condition(18, p[2], 3, 0))
 {
 result = 0xfffffffd;
 }
 else
 {
 result = 0;
 }
 }
 free(p);
 return result;
}




// Function: heap_array at 0x10bfc
unsigned int heap_array(unsigned int a0)
{
 unsigned int v0; // r4
 unsigned int *ptr; // r0
 unsigned int v3; // r3
 unsigned int *v4; // r2

 v0 = a0 * 4;
 ptr = malloc(v0);
 if (!ptr)
 return 4294967295;
 if (a0 > 0)
 {
 ptr = ptr + 1;
 v3 = 0;
 do
 {
 v4 = ptr + 1;
 ptr[1] = v3;
 v3 += 3;
 ptr = v4;
 } while (ptr != -4 + (char *)ptr + v0);
 }
 free(ptr);
 return ptr[a0 + (a0 >> 31) >> 1];
}


// Function: heap_struct at 0x10c60
unsigned int heap_struct(unsigned int a0)
{
 unsigned int *ptr; // r0

 ptr = malloc(8);
 if (!ptr)
 return 4294967295;
 free(ptr);
 return a0 * 3;
}


// Function: heap_nested at 0x10c90
typedef struct struct_2 {
 unsigned int field_0;
 struct struct_3 *field_4;
} struct_2;

typedef struct struct_0_heap_nested {
 unsigned int field_0;
 struct struct_1 *field_4;
} struct_0_heap_nested;

typedef struct struct_3 {
 unsigned int field_0;
 unsigned int field_4;
} struct_3;

typedef struct struct_1 {
 unsigned int field_0;
 unsigned int field_4;
} struct_1;

unsigned int heap_nested(struct_0_heap_nested **addr)
{
 struct_2 *ptr3; // r0
 struct_2 *p; // r4
 unsigned int *ptr; // r0

 ptr3 = malloc(8);
 *(addr) = (struct_0_heap_nested *)ptr3;
 if (!ptr3)
 return 4294967295;
 p = ptr3;
 ptr3->field_0 = 10;
 ptr = malloc(8);
 p->field_4 = (struct struct_1 *)ptr;
 if (!ptr)
 {
 free(p);
 return 4294967294;
 }
 ptr[0] = 20;
 ptr[1] = 0;
 return 0;
}


// Function: linked_list_heap at 0x10cfc
typedef struct struct_0_linked_list {
 unsigned int field_0;
 struct struct_0_linked_list *field_4;
} struct_0_linked_list;

unsigned int linked_list_heap()
{
 unsigned int i; // r5
 struct_0_linked_list *v1; // r0
 struct_0_linked_list *ptr3; // r4
 struct_0_linked_list *v9; // r4
 struct_0_linked_list *addr; // r4
 struct_0_linked_list *v11; // r4
 struct_0_linked_list *v2; // r4
 struct_0_linked_list *ptr4; // r0
 struct_0_linked_list *p; // r0
 unsigned int v5; // r5
 struct_0_linked_list *ptr; // r3

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
 } while (addr->field_4);
 return 4294967295;
 }
 else
 {
 return 4294967295;
 }
 }
 p->field_0 = i;
 p->field_4 = 0;
 if (ptr4) ptr4->field_4 = p;
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
 } while (ptr && ptr->field_4);
 do
 {
 ptr3 = v2;
 v9 = ptr3->field_4;
 free(ptr3);
 v2 = v9;
 } while (ptr3->field_4);
 return v5;
}


// Function: create_tree_node at 0x10dbc
unsigned int *create_tree_node(unsigned int a0)
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
typedef struct struct_0_tree {
 unsigned int field_0;
 struct struct_1_tree *field_4;
 struct struct_2_tree *field_8;
} struct_0_tree;

typedef struct struct_1_tree {
 unsigned int field_0;
} struct_1_tree;

typedef struct struct_2_tree {
 unsigned int field_0;
} struct_2_tree;

unsigned int tree_heap_traversal()
{
 struct_0_tree *result; // r0
 struct_0_tree *ptr; // r4
 struct_0_tree *v2; // cc_dep1
 unsigned int *v3; // r3
 unsigned int *p; // r0
 unsigned int v0; // [bp-0x4]

 result = (struct_0_tree *)create_tree_node(10);
 ptr = result;
 v2 = result;
 if (!result)
 return 4294967295;
 ptr->field_4 = (struct struct_1_tree *)create_tree_node(20);
 v3 = (unsigned int *)create_tree_node(30);
 ptr->field_8 = (struct struct_2_tree *)v3;
 p = (unsigned int *)ptr->field_4;
 if (p)
 {
 if ((char)armg_calculate_condition(2, (armg_calculate_condition(18, v2, 0, 0) ? v3 : v2), (armg_calculate_condition(18, v2, 0, 0) ? 0 : 0), (armg_calculate_condition(18, v2, 0, 0) ? 0 : 0)))
 goto LABEL_10e54;
 }
 else
 {
 if ((char)armg_calculate_condition(2, (armg_calculate_condition(18, v2, 0, 0) ? v3 : v2), (armg_calculate_condition(18, v2, 0, 0) ? 0 : 0), (armg_calculate_condition(18, v2, 0, 0) ? 0 : 0)))
 {
LABEL_10e54:
 if (p)
 free(p);
 if (ptr->field_8)
 free(ptr->field_8);
 free(ptr);
 return 4294967294;
 }
 }
 free(p);
 free(ptr->field_8);
 free(ptr);
 return ptr->field_0 + (p ? *p : 0) + (v3 ? *v3 : 0);
}


// Function: memory_leak at 0x10e88
unsigned int memory_leak(unsigned int i)
{
 unsigned int *ptr; // r0
 unsigned int v2; // r3
 unsigned int *v3; // r2

 ptr = malloc(i * 4);
 if (!ptr)
 return 4294967295;
 if (i <= 0)
 return ptr[i + (i >> 31) >> 1];
 ptr = ptr + 1;
 v2 = 0;
 do
 {
 v3 = ptr + 1;
 ptr[1] = v2;
 v2 += 1;
 ptr = v3;
 } while (i != v2);
 return ptr[i + (i >> 31) >> 1];
}


// Function: dangling_pointer at 0x10ed8
unsigned int dangling_pointer()
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
unsigned int double_free(unsigned int *a0)
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
unsigned int heap_overflow()
{
 unsigned int *ptr; // r0
 unsigned int i; // r3
 unsigned int *v3; // r2

 ptr = malloc(40);
 if (!ptr)
 return 4294967295;
 ptr = ptr + 1;
 i = 0;
 do
 {
 v3 = ptr + 1;
 ptr[1] = i;
 i += 100;
 ptr = v3;
 } while (i != 1100);
 free(ptr);
 return *(ptr);
}


// Function: test_heap_memory at 0x10fa8
typedef struct struct_0_test_heap {
 char padding_0[4];
 unsigned int *field_4;
} struct_0_test_heap;

extern char g_129fc;
extern char g_12b68;
extern char g_12b78;
extern char g_12ba0;
extern char g_12be4;

unsigned int test_heap_memory()
{
 unsigned int v4; // lr
 unsigned int pid; // r0
 unsigned int msg; // r0
 unsigned int v16; // r3
 struct_0_test_heap *result; // [bp-0x14]
 unsigned int v1[1]; // [bp-0x10]
 unsigned int v2; // [bp-0xc]
 unsigned int v3; // [bp-0x4]

 v3 = v4;
 v2 = __glibc___stack_chk_guard;
 puts(0x129fc);
 __printf_chk(1, "HEAP-L2-01 (heap_basic): %d\n", heap_basic(10));
 __printf_chk(1, "HEAP-L2-02 (heap_calloc): %d\n", heap_calloc(5));
 __printf_chk(1, "HEAP-L2-03 (heap_realloc): %d\n", heap_realloc());
 __printf_chk(1, "HEAP-L2-04 (heap_array): %d\n", heap_array(10));
 __printf_chk(1, "HEAP-L2-05 (heap_struct): %d\n", heap_struct(5));
 result = NULL;
 __printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", heap_nested((struct_0_heap_nested **)&result));
 if (result)
 {
 free(result->field_4);
 free(result);
 }
 __printf_chk(1, "HEAP-L3-01 (linked_list_heap): %d\n", linked_list_heap());
 __printf_chk(1, "HEAP-L3-02 (tree_heap_traversal): %d\n", tree_heap_traversal());
 __printf_chk(1, "HEAP-L3-03 (memory_leak): %d\n", memory_leak(5));
 __printf_chk(1, "HEAP-L3-04 (dangling_pointer): ");
 pid = fork();
 if (!pid)
 {
 __printf_chk(1, 0x12b68, dangling_pointer());
 exit(0); /* do not return */
 }
 if (pid > 0)
 {
 msg = waitpid(pid, &v1, 0);
 v16 = *(v1);
 if (!((char)v16 & 127))
 {
 msg = __printf_chk(1, 0x12b78, v16 >> 8 & 255);
 }
 else if ((v16 & 127) + 1 >= 2)
 {
 msg = __printf_chk(1, 0x12ba0, v16 & 127);
 }
 }
 else
 {
 perror(0x12be4);
 msg = 0;
 }
 if ((v2 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return msg;
}


// Function: global_var_access at 0x111b4
extern unsigned int global_counter;

unsigned int global_var_access()
{
 global_counter = global_counter + 1;
 return global_counter + 1;
}


// Function: global_var_read at 0x111cc
extern unsigned int global_counter;

unsigned int global_var_read()
{
 return global_counter * 2;
}


// Function: global_array_access at 0x111e0
extern unsigned int global_array[4];

unsigned int global_array_access(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 if (9 >= a0)
 return *((int *)(77636 + a0 * 4));
 return 4294967295;
}


// Function: static_local at 0x111f8
extern unsigned int counter_1;

unsigned int static_local(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r0

 if (!a0)
 {
 v0 = counter_1 + 1;
 if (!armg_calculate_condition(18, a0, 0, 0))
 {
 v0 = v0;
 }
 else
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
 else
 {
 v0 = v0;
 }
 }
 counter_1 = v0;
 return v0;
}




// Function: call_static_func at 0x1121c
int call_static_func(unsigned int a0)
{
 return a0 * 2 + 1;
}


// Function: access_extern_global at 0x11228
extern unsigned int extern_global_var;

int access_extern_global()
{
 return extern_global_var + 100;
}


// Forward declaration for extern_function
static unsigned int extern_function(unsigned int a0);

// Function: call_extern_func at 0x1123c
int call_extern_func()
{
 unsigned int v0; // r0

 v0 = extern_function(5);
 return extern_function(5);
}


// Function: read_const_data at 0x1124c
extern struct_0_const *const_string;

int read_const_data()
{
 return const_string->field_4 + 42;
}


// Function: access_bss_var at 0x11264
unsigned int access_bss_var()
{
 return 0;
}


// Function: access_bss_buffer at 0x1126c
unsigned int access_bss_buffer()
{
 return 0;
}


// Function: global_struct_access at 0x11274
unsigned int global_struct_access()
{
 return 30;
}


// Function: set_file_static at 0x1127c
extern unsigned int file_scope_static;

int set_file_static(unsigned int a0)
{
 file_scope_static = a0;
 return a0;
}


// Function: get_file_static at 0x1128c
extern unsigned int file_scope_static;

int get_file_static()
{
 return file_scope_static;
}


// Function: set_global_callback at 0x1129c
extern unsigned int global_func_ptr;

int set_global_callback(unsigned int a0)
{
 global_func_ptr = a0;
 return a0;
}


// Function: call_global_callback at 0x112ac
typedef struct struct_0_callback {
 unsigned int field_0;
} struct_0_callback;

extern unsigned int global_func_ptr;

unsigned int call_global_callback()
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
 v4 = ((unsigned int (*)())global_func_ptr)();
 return ((unsigned int (*)())global_func_ptr)();
}





// Function: global_heap_store at 0x112d4
unsigned int global_heap_store(unsigned int *a0)
{
 if (a0)
 return *(a0);
 return 4294967295;
}


// Function: static_complex_init at 0x112e4
unsigned int static_complex_init()
{
 return 15;
}


// Function: tls_access at 0x112ec
unsigned int tls_access(unsigned int a0)
{
 return a0 * 2;
}


// Function: init_order_test at 0x112f4
extern unsigned int static_depends_0;

unsigned int init_order_test()
{
 static_depends_0 = 20;
 return 20;
}


// Function: test_static_global at 0x11308
extern unsigned int counter_1;
extern unsigned int extern_global_var;
extern unsigned int file_scope_static;
extern char g_12bf0;
extern unsigned int global_counter;
extern unsigned int global_func_ptr;

int test_static_global()
{
 unsigned int v1; // r2
 unsigned int v7; // r0
 unsigned int v8; // r0

 puts(0x12bf0);
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
 return __printf_chk(1, "STM-L3-02 (init_order_test): %d\n", v7);
}


// Function: memop_memset at 0x114e4
unsigned int memop_memset(char *a0, unsigned int n, unsigned int a2)
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
unsigned int memop_memcpy(void* a0, void* a1, unsigned int n)
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
 {
 v13 = n;
 if (armg_calculate_condition(18, v3, v4, v5))
 {
 result = 0;
 }
 else
 {
 v13 = v13;
 }
 }
 else
 {
 v13 = 1;
 if (!armg_calculate_condition(18, v3, v4, v5))
 {
 v13 = v13;
 }
 else
 {
 result = 0;
 }
 }
 }
 else
 {
 v3 = (armg_calculate_condition(18, v6, v7, v8) ? a1 : v6);
 v4 = (armg_calculate_condition(18, v6, v7, v8) ? 0 : v7);
 v5 = (armg_calculate_condition(18, v6, v7, v8) ? 0 : v8);
 if (armg_calculate_condition(2, v3, v4, v5))
 {
 v13 = 1;
 if (!armg_calculate_condition(18, v3, v4, v5))
 {
 v13 = v13;
 }
 else
 {
 result = 0;
 }
 }
 else
 {
 v13 = n;
 if (armg_calculate_condition(18, v3, v4, v5))
 {
 result = 0;
 }
 else
 {
 v13 = v13;
 }
 }
 }
 if (!a0)
 result |= 1;
 if (result)
 return 4294967295;
 memcpy(a0, a1, n);
 return *((int *)(-4 + (char *)a0 + (n & 0xfffffffc)));
}


// Function: memop_memmove at 0x11564
typedef struct struct_0_memmove {
 char padding_0[1];
 char field_1;
} struct_0_memmove;

unsigned int memop_memmove(struct_0_memmove *a0, unsigned int a1)
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
unsigned int memop_memcmp(void* a0, void* a1, unsigned int a2, unsigned int a3)
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
LABEL_115a6:
 ;
 }
 if (!a0)
 a3 |= 1;
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
unsigned int memop_bzero(char *a0, unsigned int n)
{
 if (!a0)
 return 4294967295;
 memset(a0, 0, n);
 return *(a0);
}


// Function: memop_bcopy at 0x11610
unsigned int memop_bcopy(void* a0, char *a1, unsigned int n, unsigned int a3)
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
unsigned int memop_unaligned_access(void* a0)
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
unsigned int memop_memory_barrier(unsigned int a0)
{
 if (!a0)
 return 4294967295;
 __sync_synchronize(); /* do not return */
 return 0;
}


// Function: test_memory_op_functions at 0x116e0
extern char g_12e74;

unsigned int test_memory_op_functions()
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
 puts(0x12e74);
 v7 = 10;
 v8 = 20;
 v9 = 30;
 v10 = 40;
 v11 = 50;
 memset(&v12, 0, 20);
 __printf_chk(1, "MEMOP-L2-01: %d\n", memop_memset(&v19, 10, 65));
 __printf_chk(1, "MEMOP-L2-02: %d\n", memop_memcpy(&v12, &v7, 20));
 strncpy(&v18, "HelloWorld", 10);
 __printf_chk(1, "MEMOP-L2-03: %c\n", memop_memmove(&v18, 10));
 flag1 = 1;
 v2 = 2;
 v3 = 3;
 flag2 = 1;
 v5 = 2;
 v6 = 4;
 __printf_chk(1, "MEMOP-L2-04: %d\n", memop_memcmp(&flag1, &flag2, 12, &flag1));
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
unsigned int main()
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}


// Function: extern_function at 0x118f0
static unsigned int extern_function(unsigned int a0)
{
 return a0 * 3;
}


// Function: __sync_fetch_and_add_4 at 0x118f8
int __sync_fetch_and_add_4(unsigned int *a0, unsigned int a1)
{
 return *(a0);
}


// Function: __sync_fetch_and_sub_4 at 0x11930
int __sync_fetch_and_sub_4(unsigned int *a0, unsigned int a1)
{
 return *(a0);
}


// Function: __sync_fetch_and_or_4 at 0x11968
int __sync_fetch_and_or_4(unsigned int *a0, unsigned int a1)
{
 return *(a0);
}


// Function: __sync_fetch_and_and_4 at 0x119a0
int __sync_fetch_and_and_4(unsigned int *a0, unsigned int a1)
{
 return *(a0);
}


// Function: __sync_fetch_and_xor_4 at 0x119d8
int __sync_fetch_and_xor_4(unsigned int *a0, unsigned int a1)
{
 return *(a0);
}


// Function: __sync_fetch_and_nand_4 at 0x11a10
int __sync_fetch_and_nand_4(unsigned int *a0, unsigned int a1)
{
 return *(a0);
}


// Function: __sync_fetch_and_add_2 at 0x11a4c
int __sync_fetch_and_add_2(unsigned int a0, unsigned int a1)
{
 (void)a0; (void)a1;
 return 0;
}


// Function: __sync_fetch_and_sub_2 at 0x11aac
int __sync_fetch_and_sub_2(unsigned int a0, unsigned int a1)
{
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_or_2 at 0x11b0c
int __sync_fetch_and_or_2(unsigned int a0, unsigned int a1)
{
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_and_2 at 0x11b6c
int __sync_fetch_and_and_2(unsigned int a0, unsigned int a1)
{
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_xor_2 at 0x11bcc
int __sync_fetch_and_xor_2(unsigned int a0, unsigned int a1)
{
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_nand_2 at 0x11c2c
int __sync_fetch_and_nand_2(unsigned int a0, unsigned int a1)
{
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_add_1 at 0x11c90
int __sync_fetch_and_add_1(unsigned int a0, unsigned int a1)
{
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_sub_1 at 0x11cec
int __sync_fetch_and_sub_1(unsigned int a0, unsigned int a1)
{
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_or_1 at 0x11d48
int __sync_fetch_and_or_1(unsigned int a0, unsigned int a1)
{
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_and_1 at 0x11da4
int __sync_fetch_and_and_1(unsigned int a0, unsigned int a1)
{
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_xor_1 at 0x11e00
int __sync_fetch_and_xor_1(unsigned int a0, unsigned int a1)
{
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_nand_1 at 0x11e5c
int __sync_fetch_and_nand_1(unsigned int a0, unsigned int a1)
{
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_add_and_fetch_4 at 0x11ebc
int __sync_add_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 return *(a0) + a1;
}


// Function: __sync_sub_and_fetch_4 at 0x11ef4
int __sync_sub_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 return *(a0) - a1;
}


// Function: __sync_or_and_fetch_4 at 0x11f2c
unsigned int __sync_or_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 return *(a0) | a1;
}


// Function: __sync_and_and_fetch_4 at 0x11f64
unsigned int __sync_and_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 return *(a0) & a1;
}


// Function: __sync_xor_and_fetch_4 at 0x11f9c
int __sync_xor_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 return *(a0) ^ a1;
}


// Function: __sync_nand_and_fetch_4 at 0x11fd4
unsigned int __sync_nand_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 return ~(*(a0) & a1);
}


// Function: __sync_add_and_fetch_2 at 0x12010
unsigned int __sync_add_and_fetch_2(unsigned int a0, unsigned int a1)
{
 (void)a0; (void)a1;
 return 0;
}


// Function: __sync_sub_and_fetch_2 at 0x12078
unsigned int __sync_sub_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (1);
 return v1;
}


// Function: __sync_or_and_fetch_2 at 0x120e0
unsigned int __sync_or_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (1);
 return v1;
}


// Function: __sync_and_and_fetch_2 at 0x12148
unsigned int __sync_and_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (1);
 return v1;
}


// Function: __sync_xor_and_fetch_2 at 0x121b0
unsigned int __sync_xor_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (1);
 return v1;
}


// Function: __sync_nand_and_fetch_2 at 0x12218
unsigned int __sync_nand_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (1);
 return v1;
}


// Function: __sync_add_and_fetch_1 at 0x12284
unsigned int __sync_add_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (1);
 return v1;
}


// Function: __sync_sub_and_fetch_1 at 0x122e8
unsigned int __sync_sub_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (1);
 return v1;
}


// Function: __sync_or_and_fetch_1 at 0x1234c
unsigned int __sync_or_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (1);
 return v1;
}


// Function: __sync_and_and_fetch_1 at 0x123b0
unsigned int __sync_and_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (1);
 return v1;
}


// Function: __sync_xor_and_fetch_1 at 0x12414
unsigned int __sync_xor_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (1);
 return v1;
}


// Function: __sync_nand_and_fetch_1 at 0x12478
unsigned int __sync_nand_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (1);
 return v1;
}


// Function: __sync_val_compare_and_swap_4 at 0x124e0
int __sync_val_compare_and_swap_4(unsigned int *a0, unsigned int i, unsigned int a2)
{
 while (*(a0) == i)
 {
 return i;
 }
 return *(a0);
}


// Function: __sync_val_compare_and_swap_2 at 0x12530
unsigned int __sync_val_compare_and_swap_2(unsigned int a0, unsigned int a1, unsigned int a2)
{
 while (((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31) == (65535 & a1))
 {
 return a1;
 }
 return (65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & 65535;
}


// Function: __sync_val_compare_and_swap_1 at 0x125a8
unsigned int __sync_val_compare_and_swap_1(unsigned int a0, unsigned int a1, unsigned int a2)
{
 while (((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31) == (a1 & 255))
 {
 return a1;
 }
 return (255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & 255;
}


// Function: __sync_bool_compare_and_swap_4 at 0x1261c
unsigned int __sync_bool_compare_and_swap_4(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return 1;
}


// Function: __sync_bool_compare_and_swap_2 at 0x12648
unsigned int __sync_bool_compare_and_swap_2(unsigned int a0, unsigned int a1, unsigned int a2)
{
 (void)a0; (void)a1; (void)a2;
 return 1;
}


// Function: __sync_bool_compare_and_swap_1 at 0x12664
unsigned int __sync_bool_compare_and_swap_1(unsigned int a0, unsigned int a1, unsigned int a2)
{
 (void)a0; (void)a1; (void)a2;
 return 1;
}


// Function: __sync_synchronize at 0x12680
int __sync_synchronize()
{
 return 0;
}


// Function: __sync_lock_test_and_set_4 at 0x1268c
int __sync_lock_test_and_set_4(unsigned int *a0, unsigned int a1)
{
 return *(a0);
}


// Function: __sync_lock_test_and_set_2 at 0x126c4
unsigned int __sync_lock_test_and_set_2(unsigned int a0, unsigned int a1)
{
 char v0; // r9

 v0 = (char)a0 * 8 & 24;
 return (65535 << (v0 & 31) & v0 - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> (v0 & 31) & v0 - 32 >> 31 & 65535;
}


// Function: __sync_lock_test_and_set_1 at 0x12724
unsigned int __sync_lock_test_and_set_1(unsigned int a0, unsigned int a1)
{
 char v0; // r9

 v0 = (char)a0 * 8 & 24;
 return (255 << (v0 & 31) & v0 - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> (v0 & 31) & v0 - 32 >> 31 & 255;
}


// Function: __sync_lock_release_8 at 0x12780
void __sync_lock_release_8(unsigned int *ptr)
{
 *(ptr) = 0;
 *(ptr + 1) = 0;
}


// Function: __sync_lock_release_4 at 0x127a4
void __sync_lock_release_4(unsigned int *ptr)
{
 *(ptr) = 0;
 return;
}


// Function: __sync_lock_release_2 at 0x127c4
void __sync_lock_release_2(unsigned short *ptr)
{
 *(ptr) = 0;
 return;
}


// Function: __sync_lock_release_1 at 0x127e4
void __sync_lock_release_1(char *ptr)
{
 *(ptr) = 0;
 return;
}



/* CRT stub function _fini removed by preprocessor */


