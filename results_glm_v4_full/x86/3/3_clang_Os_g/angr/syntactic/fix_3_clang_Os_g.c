// Angr Decompilation of 3_clang_Os_g
// Platform: X86

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdatomic.h>

/* Forward struct declarations */
struct struct_0 {
    unsigned int field_0;
    union {
        unsigned int field_4;
        unsigned int (*field_4_func)(unsigned int);
        void *field_4_ptr;
        struct struct_2 *field_4_struct;
    };
    unsigned char field_1;
    unsigned char padding_0[3];
};

/* Forward array declarations */
extern unsigned int global_array[10];

/* Global variable definitions */
unsigned int global_counter = 0;
unsigned int static_local_counter = 0;
unsigned int extern_global_var = 0;
unsigned int file_scope_static = 0;
unsigned int const_string = 0;
unsigned int global_func_ptr = 0;
void *global_heap_ptr = NULL;
struct struct_0 *g_405ff4 = NULL;
struct struct_0 *ptr = NULL;
char g_4014ce = 0;
char g_4014e4 = 0;
char g_4035c1 = 0;
char g_40326d = 0;
char g_40327d = 0;
char g_4032a2 = 0;
char g_4032e3 = 0;
char g_4035df = 0;
char g_4035fd = 0;
char g_403621 = 0;

struct struct_2 {
    unsigned int field_0;
    union {
        unsigned int field_4;
        unsigned int field_4_array[2];
    };
};

/* CRT stub function _init removed by preprocessor */

/* Forward declarations */
void frame_dummy(void);
unsigned int __do_global_ctors_aux(void);
void deregister_tm_clones(void);
void __do_global_dtors_aux(void);
unsigned int local_vars(unsigned int a0);
unsigned int extern_function(unsigned int a0);

int _init()
{
 if (g_405ff4)
 {
   void (*func)(void) = (void (*)(void))g_405ff4;
   func();
 }
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030(void)
{
 return 0;
}


// Function: sub_401130 at 0x401130
int sub_401130(void)
{
 return 0;
}


// Function: sub_401136 at 0x401136
void sub_401136(void)
{
 return;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_40116b at 0x40116b
void sub_40116b(void)
{
 /* Unsupported jumpkind Ijk_SigTRAP at address 4198763 */
}


// Function: sub_40116c at 0x40116c
void sub_40116c(void)
{
 return;
}


// Function: __x86.get_pc_thunk_bx at 0x401170
void __x86_get_pc_thunk_bx(void)
{
}


/* CRT stub function deregister_tm_clones removed by preprocessor */

void deregister_tm_clones()
{
 return;
}

// Function: sub_401174 at 0x401174
void sub_401174(void)
{
 deregister_tm_clones();
 return;
}







// Function: sub_4011b3 at 0x4011b3
void sub_4011b3(void)
{
}


/* Forward declarations */
unsigned int register_tm_clones(void);

// Function: sub_4011b9 at 0x4011b9
void sub_4011b9(void)
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */

unsigned int register_tm_clones()
{
 return 0;
}


// Function: sub_401207 at 0x401207
void sub_401207(void)
{
 __do_global_dtors_aux();
 return;
}






// Function: sub_40129a at 0x40129a
void sub_40129a(void)
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */

void frame_dummy(void)
{
 return;
}



// Function: __x86.get_pc_thunk_dx at 0x4012a9
void __x86_get_pc_thunk_dx(void)
{
 return;
}


// Function: __x86.get_pc_thunk_di at 0x4012ad
int __x86_get_pc_thunk_di(int a0)
{
 return a0;
}


// Function: sub_4012b1 at 0x4012b1
void sub_4012b1(unsigned int a0)
{
 local_vars(a0);
}


// Function: local_vars at 0x4012b4
unsigned int local_vars(unsigned int a0)
{
 return a0 * 2 + 10;
}


unsigned int global_array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

// Function: local_array at 0x4012be
unsigned int local_array(unsigned int a0)
{
 unsigned int v1; // ecx
 unsigned int idx; // edx
 unsigned long v3; // [bp-0x28]
 char v0; // [bp-0x14]

 v1 = 0;
 idx = 0;
 do
 {
 (&v3)[idx] = v1;
 idx += 1;
 v1 += a0;
 } while (idx != 10);
 return *((int *)&v0);
}


// Function: local_struct at 0x4012dc
unsigned int local_struct(unsigned int a0)
{
 return a0 * 3;
}


// Function: address_of_local at 0x4012e4
unsigned int address_of_local(unsigned int *ptr)
{
 *(ptr) = 42;
 return 42;
}


// Function: address_of_array at 0x4012f4
unsigned int address_of_array(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: large_stack_frame at 0x4012fd
int large_stack_frame()
{
 unsigned int i; // eax
 unsigned long v3; // [bp-0x800]
 char v0; // [bp-0x400]

 i = 0;
 do
 {
 *((char *)&v3 + i) = i;
 i += 1;
 } while (i != 0x800);
 return v0;
}


// Function: vla_stack at 0x40131f
unsigned int vla_stack(unsigned int a0)
{
 unsigned int v1; // eax
 unsigned int idx; // esi
 unsigned int i; // edi
 char v0; // [bp-0xc]

 v1 = a0;
 if (v1 - 1001 < 4294966296)
 return 4294967295;
 idx = 0;
 i = v1;
 do
 {
 *((unsigned int *)&(&v0)[2 * idx + -1 * (v1 * 4 + 15 & 0xfffffff0)]) = idx;
 idx += 2;
 i -= 1;
 } while (i != 1);
 return *((int *)&(&v0)[2 * ((v1 >> 31) + v1 & 4294967294) + -1 * (v1 * 4 + 15 & 0xfffffff0)]);
}


// Function: alloca_usage at 0x40136f
unsigned int alloca_usage(unsigned int i)
{
 unsigned int v0; // edx
 unsigned int idx; // esi
 unsigned int *alloca_ptr;

 if (i <= 0)
 return 4294967295;
 alloca_ptr = (unsigned int *)__builtin_alloca(i * 4);
 v0 = 0;
 idx = 0;
 do
 {
 alloca_ptr[idx] = v0;
 idx += 1;
 v0 += 3;
 } while (i != idx);
 return alloca_ptr[2 * ((i >> 31) + i & 4294967294)];
}


// Function: stack_alias at 0x4013b2
unsigned int stack_alias()
{
 return 20;
}


// Function: test_stack_memory at 0x4013b8
int test_stack_memory(unsigned int a0, unsigned int a1)
{
 unsigned int v12; // ebx
 unsigned int v13; // esi
 unsigned int idx; // eax
 unsigned int j; // eax
 unsigned int index; // ecx
 unsigned int *cur; // esi
 unsigned int l; // eax
 unsigned int v0; // [bp-0x828]
 const char *v1; // [bp-0x824]
 const char *v2; // [bp-0x820]
 unsigned int v3; // [bp-0x81c]
 unsigned int v4; // [bp-0x818]
 unsigned int v5; // [bp-0x80c]
 unsigned int v6; // [bp-0x7fc]
 char v7; // [bp-0x7f8]
 char v8; // [bp-0x40c]
 unsigned int v9; // [bp-0x8]
 unsigned int v10; // [bp-0x4]
 char v11; // [bp+0x0]

 v12 = 0;
 v13 = 0;
 v10 = v12;
 v9 = v13;
 puts(&g_4035c1);
 v4 = 20;
 printf("MEM-L1-01 (local_vars): %d\n");
 idx = 0;
 do
 {
 *((unsigned int *)((char *)&v5 + 2 * idx)) = idx;
 idx += 2;
 } while (idx != 20);
 v4 = *((int *)&v7);
 printf("MEM-L1-02 (local_array): %d\n");
 v4 = 15;
 printf("MEM-L1-03 (local_struct): %d\n");
 v4 = 42;
 printf("MEM-L1-04 (address_of_local): %d\n");
 v4 = 2;
 printf("MEM-L1-05 (address_of_array): %d\n");
 j = 0;
 do
 {
 *((char *)&v5 + j) = j;
 j += 1;
 } while (j != 0x800);
 v4 = v8;
 printf("MEM-L2-01 (large_stack_frame): %d\n");
 index = 0;
 do
 {
 *((unsigned int *)((char *)&v5 + 2 * index)) = index;
 index += 2;
 } while (index != 20);
 cur = &v5;
 v4 = *((int *)&v7);
 printf("%d", v4);
 l = 0;
 do
 {
 *(cur) = l;
 l += 3;
 cur += 1;
 } while (l != 30);
 v3 = v6;
 v2 = "MEM-L2-03 (alloca_usage): %d\n";
 v1 = (const char *)&g_4014ce;
 printf(v2);
 v1 = "MEM-L2-04 (stack_alias): %d\n";
 v2 = 20;
 v0 = (unsigned int)&g_4014e4;
 return printf(v1);
}


// Function: heap_basic at 0x4014ed
unsigned int heap_basic(unsigned int a0)
{
 unsigned int v0; // esi
 unsigned int *ptr; // eax
 unsigned int idx; // ecx
 unsigned int i; // edx

 v0 = a0;
 ptr = malloc(v0 * 4);
 if (!ptr)
 return 4294967295;
 if (v0 > 0)
 {
 idx = 0;
 i = v0;
 do
 {
 *((unsigned int *)((char *)ptr + 2 * idx)) = idx;
 idx += 2;
 i -= 1;
 } while (i != 1);
 }
 free(ptr);
 return *((int *)((char *)ptr + 2 * ((v0 >> 31) + v0 & 4294967294)));
}


// Function: heap_calloc at 0x401546
unsigned int heap_calloc(unsigned int i)
{
 unsigned int *ptr; // eax
 unsigned int v1; // esi
 unsigned int idx; // ecx

 ptr = calloc(i, 4);
 if (!ptr)
 return 4294967295;
 v1 = 0;
 if (i >= 2)
 {
 v1 = 0;
 idx = 1;
 do
 {
 v1 += *((int *)((char *)ptr + 4 * idx));
 idx += 1;
 } while (i != idx);
 }
 free(ptr);
 return v1;
}


// Function: heap_realloc at 0x40159a
unsigned int heap_realloc()
{
 struct struct_0 *ptr; // eax
 struct struct_0 *ptr2; // esi
 unsigned int i; // eax
 unsigned int v4; // ebp
 struct struct_0 *p; // eax
 struct struct_0 *cur; // ecx
 unsigned int j; // edx
 unsigned int v8; // edi

 ptr = malloc(20);
 if (!ptr)
 return 4294967295;
 ptr2 = ptr;
 i = 1;
 do
 {
 ptr2[i].field_0 = i;
 i += 1;
 } while (i != 6);
 v4 = ptr2[2].field_0;
 p = realloc(ptr2, 40);
 if (p)
 {
 cur = &p[5];
 j = 50;
 do
 {
 cur->field_0 = j;
 j += 10;
 cur = &cur[1];
 } while (j != 100);
 v8 = 4294967293;
 if (p[2].field_0 == v4)
 v8 = p[5].field_0;
 ptr2 = p;
 }
 else
 {
 v8 = 4294967294;
 }
 free(ptr2);
 return v8;
}


// Function: heap_array at 0x401627
unsigned int heap_array(unsigned int i)
{
 unsigned int *ptr; // eax
 unsigned int v1; // ecx
 unsigned int idx; // edx

 ptr = malloc(i * 4);
 if (!ptr)
 return 4294967295;
 if (i > 0)
 {
 v1 = 0;
 idx = 0;
 do
 {
 *((unsigned int *)((char *)ptr + 4 * idx)) = v1;
 idx += 1;
 v1 += 3;
 } while (i != idx);
 }
 free(ptr);
 return *((int *)((char *)ptr + 2 * ((i >> 31) + i & 4294967294)));
}


// Function: heap_struct at 0x401682
unsigned int heap_struct(unsigned int a0)
{
 return a0 * 3;
}


// Function: heap_nested at 0x40168a

unsigned int heap_nested(struct struct_0 **ptr3)
{
 struct struct_2 *addr; // eax
 struct struct_2 *ptr; // esi
 unsigned int *p; // eax

 addr = malloc(8);
 *(ptr3) = addr;
 if (!addr)
 return 4294967295;
 ptr = addr;
 addr->field_0 = 10;
 p = malloc(8);
 ptr->field_4 = p;
 if (!p)
 {
 free(ptr);
 return 4294967294;
 }
 p[0] = 20;
 p[1] = 0;
 return 0;
}


// Function: linked_list_heap at 0x4016f7

unsigned int linked_list_heap()
{
 struct struct_0 *p; // eax
 unsigned int v3; // ebp
 struct struct_0 *ptr; // eax
 struct struct_0 *addr; // edi
 unsigned int v4; // esi
 struct struct_0 *v5; // edi
 char result; // al
 struct struct_0 *ptr3; // edi
 unsigned int v9; // esi
 struct struct_0 *ptr4; // [bp-0x14], Other Possible Types: char

 p = malloc(8);
 if (p)
 {
 v3 = 0;
 v4 = 0;
 ptr4 = NULL;
 v5 = NULL;
 do
 {
 p->field_0 = v3;
 p->field_4 = NULL;
 if (v5)
 ptr4->field_4 = p;
 else
 v5 = p;
 if (v4 == 0xfffffffc)
 {
 result = 1;
 goto LABEL_401798;
 }
 } while ((ptr4 = p, p = malloc(8), v4 -= 1, v3 += 10, p));
 result = ~(v4) < 4;
 }
 else
 {
 result = 1;
 v5 = NULL;
 }
 if (v5)
 {
 ptr4 = result;
 do
 {
 ptr3 = v5;
 free(ptr3);
 v5 = ptr3->field_4;
 } while (ptr3->field_4);
 v5 = NULL;
 result = ptr4;
 }
 else
 {
 v5 = NULL;
 }
LABEL_401798:
 if (result)
 return 4294967295;
 v9 = 0;
 if (!v5)
 return 0;
 ptr = v5;
 do
 {
 v9 += ptr->field_0;
 ptr = ptr->field_4;
 } while (ptr->field_4);
 if (!v5)
 return v9;
 do
 {
 addr = v5;
 free(addr);
 v5 = addr->field_4;
 } while (addr->field_4);
 return v9;
}


// Function: create_tree_node at 0x4017d1
unsigned int *create_tree_node(unsigned int a0)
{
 unsigned int *ptr; // eax

 ptr = malloc(12);
 if (!ptr)
 return 0;
 ptr[0] = a0;
 ptr[1] = 0;
 ptr[2] = 0;
 return ptr;
}


// Function: tree_heap_traversal at 0x401804
unsigned int tree_heap_traversal()
{
 return 60;
}


// Function: memory_leak at 0x40180a
unsigned int memory_leak(unsigned int i)
{
 void *ptr; // eax
 unsigned int idx; // ecx

 ptr = malloc(i * 4);
 if (!ptr)
 return 4294967295;
 if (i <= 0)
 return *((int *)((char *)ptr + ((i >> 31) + i & 4294967294) * 2));
 idx = 0;
 do
 {
 *((unsigned int *)((char *)ptr + idx * 4)) = idx;
 idx += 1;
 } while (i != idx);
 return *((int *)((char *)ptr + ((i >> 31) + i & 4294967294) * 2));
}


// Function: dangling_pointer at 0x401856
unsigned int dangling_pointer()
{
 unsigned int *ptr; // eax
 unsigned int v0; // [bp-0x18]

 ptr = malloc(4);
 if (!ptr)
 return 4294967295;
 v0 = 42;
 printf("value before free: %d\n");
 free(ptr);
 return *ptr;
}


// Function: double_free at 0x4018a4
unsigned int double_free(unsigned int *a0)
{
 if (!a0)
 return 4294967294;
 return *(a0);
}


// Function: heap_overflow at 0x4018b5
unsigned int heap_overflow()
{
 unsigned int *ptr; // eax
 unsigned int i; // ecx
 unsigned int *ptr2; // edx

 ptr = malloc(40);
 if (!ptr)
 return 4294967295;
 i = 0;
 ptr2 = ptr;
 do
 {
 *(ptr2) = i;
 i += 100;
 ptr2 += 1;
 } while (i != 1100);
 free(ptr);
 return 0;
}


// Function: test_heap_memory at 0x4018ff

unsigned int test_heap_memory()
{
 unsigned int *ptr; // eax
 unsigned int idx; // ecx
 unsigned int pid; // eax
 char *v0; // [bp-0x1c]
 int v1; // [bp-0x10]
 struct struct_0 *result; // [bp-0xc]

 puts(&g_4035df);
 heap_basic(10);
 printf("HEAP-L2-01 (heap_basic): %d\n");
 heap_calloc(5);
 printf("HEAP-L2-02 (heap_calloc): %d\n");
 heap_realloc();
 printf("HEAP-L2-03 (heap_realloc): %d\n");
 heap_array(10);
 printf("HEAP-L2-04 (heap_array): %d\n");
 printf("HEAP-L2-05 (heap_struct): %d\n");
 result = NULL;
 heap_nested(&result);
 printf("HEAP-L2-06 (heap_nested): %d\n");
 if (result)
 {
 free(result->field_4);
 free(result);
 }
 linked_list_heap();
 printf("HEAP-L3-01 (linked_list_heap): %d\n");
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n");
 ptr = malloc(20);
 if (ptr)
 {
 idx = 0;
 do
 {
 *((unsigned int *)((char *)ptr + idx * 4)) = idx;
 idx += 1;
 } while (idx != 5);
 }
 printf("HEAP-L3-03 (memory_leak): %d\n");
 printf("HEAP-L3-04 (dangling_pointer): ");
 pid = fork();
 if (!pid)
 {
 dangling_pointer();
 puts(&g_40326d);
 exit(0); /* do not return */
 }
 else if (waitpid(pid, &v1, 0) >= 0)
 {
 if (!((char)v1 & 127))
 {
 v0 = &g_40327d;
 }
 else if ((v1 & 127) * 0x1000000 + 0x1000000 >= 0x2000000)
 {
 v0 = &g_4032a2;
 }
 else
 {
 return v1 & 127;
 }
 return printf(v0);
 }
 else
 {
 return (unsigned int)perror(&g_4032e3);
 }
}


// Function: global_var_access at 0x401aeb
unsigned int global_var_access()
{
 global_counter = global_counter + 1;
 return global_counter + 1;
}


// Function: global_var_read at 0x401b05
unsigned int global_var_read()
{
 return global_counter * 2;
}


// Function: global_array_access at 0x401b1a
unsigned int global_array_access(unsigned int a0)
{
 if (a0 <= 9)
 return global_array[a0];
 return 4294967295;
}


// Function: static_local at 0x401b3b
unsigned int static_local(unsigned int a0)
{
 unsigned int v0; // edx

 v0 = static_local_counter + 1;
 if (a0)
 v0 = 0;
 static_local_counter = v0;
 return v0;
}


// Function: call_static_func at 0x401b5f
int call_static_func(unsigned int a0)
{
 return a0 * 2 + 1;
}


// Function: access_extern_global at 0x401b67
int access_extern_global()
{
 return extern_global_var + 100;
}


// Function: call_extern_func at 0x401b7f
void call_extern_func(void)
{
 extern_function(5);
}


// Function: read_const_data at 0x401ba0

int read_const_data()
{
 return const_string + 42;
}


// Function: access_bss_var at 0x401bba
unsigned int access_bss_var()
{
 return 0;
}


// Function: access_bss_buffer at 0x401bbd
unsigned int access_bss_buffer()
{
 return 0;
}


// Function: global_struct_access at 0x401bc0
unsigned int global_struct_access()
{
 return 30;
}


// Function: set_file_static at 0x401bc6

int set_file_static(unsigned int a0)
{
 file_scope_static = a0;
 return 0;
}


// Function: get_file_static at 0x401bdd
int get_file_static()
{
 return file_scope_static;
}


// Function: set_global_callback at 0x401bf0
int set_global_callback(unsigned int a0)
{
 global_func_ptr = a0;
 return 0;
}


/* Forward declaration */
unsigned int double_value(unsigned int a0);

// Function: call_global_callback at 0x401c07

unsigned int call_global_callback(unsigned int a0)
{
 unsigned int (*func)(unsigned int) = (unsigned int (*)(unsigned int))global_func_ptr;
 return (!func ? 4294967295 : func(a0));
}


// Function: global_heap_store at 0x401c34
unsigned int global_heap_store(void *a0)
{
 global_heap_ptr = a0;
 if (!a0)
 return 4294967295;
 return *((unsigned int *)a0);
}


// Function: static_complex_init at 0x401c55
unsigned int static_complex_init()
{
 return 15;
}


// Function: tls_access at 0x401c5b
unsigned int tls_access(unsigned int a0)
{
 return a0 * 2;
}


// Function: init_order_test at 0x401c62
unsigned int init_order_test()
{
 return 20;
}


// Function: test_static_global at 0x401c68

unsigned int test_static_global()
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x10]

 puts(&g_4035fd);
 global_counter = global_counter + 1;
 v0 = global_counter;
 printf("STM-L1-01 (global_var_access): %d\n");
 v0 = global_counter * 2;
 printf("STM-L1-01 (global_var_read): %d\n");
 v0 = global_array_access(5);
 printf("STM-L1-02 (global_array_access): %d\n");
 static_local_counter = 1;
 v0 = 1;
 printf("STM-L1-03 (static_local): %d\n");
 static_local_counter = static_local_counter + 1;
 v0 = static_local_counter;
 printf("STM-L1-03 (static_local): %d\n");
 v0 = call_static_func(5);
 printf("STM-L1-04 (call_static_func): %d\n");
 v0 = access_extern_global();
 printf("STM-L2-01 (access_extern_global): %d\n");
 v0 = extern_function(5);
 printf("STM-L2-02 (call_extern_func): %d\n");
 v0 = read_const_data();
 printf("STM-L2-03 (read_const_data): %d\n");
 v0 = access_bss_var();
 printf("STM-L2-04 (access_bss_var): %d\n");
 v0 = access_bss_buffer();
 printf("STM-L2-04 (access_bss_buffer): %d\n");
 v0 = global_struct_access();
 printf("STM-L2-05 (global_struct_access): %d\n");
 set_file_static(50);
 v0 = get_file_static();
 printf("STM-L2-06 (file_static): %d\n");
 set_global_callback((unsigned int)double_value);
 v0 = call_global_callback(5);
 printf("STM-L2-07 (global_func_ptr): %d\n");
 v0 = global_heap_store(&v0);
 printf("STM-L2-08 (global_heap_store): %d\n");
 printf("STM-L2-08 (global_heap_store): %d\n");
 v0 = static_complex_init();
 printf("STM-L2-09 (static_complex_init): %d\n");
 v0 = tls_access(10);
 printf("STM-L3-01 (tls_access): %d\n");
 v0 = init_order_test();
 return printf("STM-L3-02 (init_order_test): %d\n");
}


// Function: double_value at 0x401e5b
unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: memop_memset at 0x401e62
unsigned int memop_memset(char *a0, unsigned int n, unsigned int a2)
{
 unsigned int v0; // [bp-0xc]

 if (!a0)
 {
 return 4294967295;
 }
 else if (n)
 {
 memset(a0, a2, n);
 v0 = *(unsigned char *)(a0);
 return v0;
 }
 else
 {
 return 4294967295;
 }
}


// Function: memop_memcpy at 0x401e9e
unsigned int memop_memcpy(void *a0, void *a1, unsigned int n)
{
 if (!a0)
 {
 return 4294967295;
 }
 else if (!a1)
 {
 return 4294967295;
 }
 else if (n)
 {
 memcpy(a0, a1, n);
 return *((int *)((char *)a0 + (n & 0xfffffffc) - 4));
 }
 else
 {
 return 4294967295;
 }
}


// Function: memop_memmove at 0x401ee1

unsigned int memop_memmove(struct struct_0 *a0, unsigned int a1)
{
 unsigned int v0;

 if (!a0)
 {
 return 4294967295;
 }
 else if (a1 >= 2)
 {
 memmove(&a0->field_1, &a0->field_0, a1 - 1);
 return a0->field_1;
 }
 else
 {
 return 4294967295;
 }
}


// Function: memop_memcmp at 0x401f20
unsigned int memop_memcmp(void *a0, void *a1, unsigned int a2)
{
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v0; // [bp-0xc]
 if (!a0)
 {
 return 0;
 }
 else if (!a1)
 {
 return 0;
 }
 else if (a2)
 {
 v2 = memcmp(a0, a1, a2);
 if (v2 > 0)
 return 1;
 return -(v2);
 }
 else
 {
 return 0;
 }
}


// Function: memop_bzero at 0x401f70
unsigned int memop_bzero(char *a0, unsigned int n)
{
 unsigned int v1; // eax
 unsigned int v0; // [bp-0xc]

 v0 = v1;
 if (!a0)
 return 4294967295;
 memset(a0, 0, n);
 return (unsigned int)(*(unsigned char *)a0);
}


// Function: memop_bcopy at 0x401fa7
unsigned int memop_bcopy(void *a0, char *a1, unsigned int n)
{
 unsigned int v1; // eax
 unsigned int v0; // [bp-0xc]

 v0 = v1;
 if (!a0)
 {
 return 4294967295;
 }
 else if (!a1)
 {
 return 4294967295;
 }
 else if (n)
 {
 memmove(a1, a0, n);
 return (unsigned int)(*(unsigned char *)a1);
 }
 else
 {
 return 4294967295;
 }
}


// Function: memop_unaligned_access at 0x401fe8

unsigned int memop_unaligned_access(struct struct_0 *a0)
{
 unsigned int result;
 const char *ptr;
 
 if (!a0)
 return 4294967295;
 ptr = (const char *)a0;
 memcpy(&result, ptr + 9, sizeof(result));
 return result;
}


// Function: memop_memory_barrier at 0x401ff8
unsigned int memop_memory_barrier(unsigned int *a0)
{
 if (!a0)
 return 4294967295;
 __sync_synchronize();
 return *(a0) * 2;
}


// Function: test_memory_op_functions at 0x40200e

unsigned int test_memory_op_functions()
{
 char v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x14]
 char v2[1]; // [bp-0x10]
 char v3[3]; // [bp-0xf]
 char v4[4]; // [bp-0xc]
 unsigned short v5; // [bp-0x8]

 puts(&g_403621);
 printf("MEMOP-L2-01: %d\n");
 printf("MEMOP-L2-02: %d\n");
 strncpy(&v4, "oWor", 4);
 strncpy(&v2, "Hell", 4);
 v5 = 25708;
 strncpy(&v3, "HelloWorl", 9);
 printf("MEMOP-L2-03: %c\n");
 printf("MEMOP-L2-04: %d\n");
 printf("MEMOP-L2-05: %d\n");
 printf("MEMOP-L2-06: %d\n");
 printf("MEMOP-L3-01: 0x%x\n");
 v1 = 5;
 return printf("MEMOP-L3-02: %d\n");
}


// Function: main at 0x402128
unsigned int main()
{
 char v0; // [bp-0xc];

 test_stack_memory(0, 0);
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}


// Function: sub_402153 at 0x402153
void sub_402153(unsigned int a0)
{
 extern_function(a0);
}


// Function: extern_function at 0x402154
unsigned int extern_function(unsigned int a0)
{
 return a0 * 3;
}


// Function: sub_40215c at 0x40215c
void sub_40215c(void)
{
 __do_global_ctors_aux();
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

unsigned int __do_global_ctors_aux()
{
 return 4294967295;
}


// Function: sub_4021a2 at 0x4021a2
void sub_4021a2(void)
{
}



/* CRT stub function _fini removed by preprocessor */


