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

/* Forward declarations for structs */
typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

/* Global variable declarations */
int global_counter = 0;
int counter_1 = 0;
int global_array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
extern int extern_global_var;
char const_string[] = "Hello";
int file_scope_static = 0;
int (*global_func_ptr)(int) = 0;
int static_depends_0 = 0;
long long (*_gmon_start__)(void) = 0;
char s[] = "Stack Memory Tests";
char asc_30E6[] = "Heap Memory Tests";
char aD[] = "%d\n";
char aFork_0[] = "fork";
char asc_3438[] = "Static/Global Tests";
char asc_3688[] = "Memory Op Tests";
char byte_33F0[] = "Exited with signal %d\n";
char byte_33C8[] = "Exited with status %d\n";

/* Type definitions */
typedef int bool;
typedef void _UNKNOWN;

/* Macro definitions for decompiler artifacts */
#define BYTE1(x) (((x) >> 8) & 0xFF)
#define JUMPOUT(x) return

/* Function declarations for missing symbols */
int extern_function(int x);

/* External library function declarations */
void *malloc(size_t size);
void free(void *ptr);
void *calloc(size_t nmemb, size_t size);
void *realloc(void *ptr, size_t size);
int printf(const char *format, ...);
int __printf_chk(int flag, const char *format, ...);
int puts(const char *s);
void *memset(void *s, int c, size_t n);
void *memcpy(void *dest, const void *src, size_t n);
void *memmove(void *dest, const void *src, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
void *alloca(size_t size);
int fork(void);
void exit(int status);
int waitpid(int pid, int *status, int options);
void perror(const char *s);
char *strcpy(char *dest, const char *src);

/* Forward declarations */

/* Stub implementation for __readfsqword (GCC builtin for FS segment access) */
static unsigned long long __readfsqword(unsigned int offset)
{
 return 0;
}

/* Stub implementation for _InterlockedOr64 (Windows intrinsic) */
static void _InterlockedOr64(volatile signed long long *ptr, signed long long value)
{
 if ( ptr )
 *ptr |= value;
}

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/3/3_gcc_O1_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x1000 */
static void init_proc(void)
{
 if ( _gmon_start__ )
 _gmon_start__();
}


/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 return;
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 sub_1020();
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
 sub_1020();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
 sub_1020();
}


/* Function: sub_1060 @ 0x1060 */
void sub_1060()
{
 sub_1020();
}


/* Function: sub_1070 @ 0x1070 */
void sub_1070()
{
 sub_1020();
}


/* Function: sub_1080 @ 0x1080 */
void sub_1080()
{
 sub_1020();
}


/* Function: sub_1090 @ 0x1090 */
void sub_1090()
{
 sub_1020();
}


/* Function: sub_10A0 @ 0x10A0 */
void sub_10A0()
{
 sub_1020();
}


/* Function: sub_10B0 @ 0x10B0 */
void sub_10B0()
{
 sub_1020();
}


/* Function: sub_10C0 @ 0x10C0 */
void sub_10C0()
{
 sub_1020();
}


/* Function: sub_10D0 @ 0x10D0 */
void sub_10D0()
{
 sub_1020();
}


/* Function: sub_10E0 @ 0x10E0 */
void sub_10E0()
{
 sub_1020();
}


/* Function: sub_10F0 @ 0x10F0 */
void sub_10F0()
{
 sub_1020();
}


/* Function: sub_1100 @ 0x1100 */
void sub_1100()
{
 sub_1020();
}


/* Function: sub_1110 @ 0x1110 */
void sub_1110()
{
 sub_1020();
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: double_value @ 0x1309 */
int double_value(int x)
{
 return 2 * x;
}


/* Function: local_vars @ 0x1311 */
int local_vars(int x)
{
 return 2 * x + 10;
}


/* Function: local_array @ 0x131A */
int local_array(int n)
{
 int *v1; // rax
 int v2; // edx
 int arr[10]; // [rsp+0h] [rbp-38h] BYREF
 unsigned long long v5; // [rsp+28h] [rbp-10h] BYREF

 v5 = __readfsqword(0x28u);
 v1 = arr;
 v2 = 0;
 do
 {
 *v1 = v2;
 v2 += n;
 ++v1;
 }
 while ( v1 != (int *)&v5 );
 return arr[5];
}


/* Function: local_struct @ 0x136A */
int local_struct(int x)
{
 return 3 * x;
}


/* Function: address_of_local @ 0x1372 */
int address_of_local(int *out)
{
 *out = 42;
 return 42;
}


/* Function: address_of_array @ 0x1382 */
int address_of_array(int *arr)
{
 return 2 * *arr;
}


/* Function: large_stack_frame @ 0x138B */
int large_stack_frame()
{
 long long i; // rax
 char large_buf[2056]; // [rsp+0h] [rbp-818h]
 unsigned long long v3; // [rsp+808h] [rbp-10h]

 v3 = __readfsqword(0x28u);
 for ( i = 0; i != 2048; ++i )
 large_buf[i] = i;
 return large_buf[1024];
}


/* Function: vla_stack @ 0x13E0 */
int vla_stack(int n)
{
 signed long long v1; // rax
 void *v2; // rsp
 long long v3; // rax
 long long v4; // rdx
 unsigned int v7[2]; // [rsp+8h] [rbp-10h] BYREF
 unsigned long long v8; // [rsp+10h] [rbp-8h]

 v8 = __readfsqword(0x28u);
 if ( (unsigned int)(n - 1) > 0x3E7 )
 return -1;
 while ( v7 != (unsigned int *)((char *)v7 - ((4LL * n + 15) & 0xFFFFFFFFFFFFF000LL)) )
 ;
 v1 = (4 * (unsigned short)n + 15) & 0xFF0;
 v2 = alloca(v1);
 if ( ((4 * (unsigned short)n + 15) & 0xFF0) != 0 )
 *(unsigned long long *)((char *)&v7[-2] + v1) = *(unsigned long long *)((char *)&v7[-2] + v1);
 v3 = 0;
 do
 {
 v7[v3] = 2 * v3;
 v4 = v3++;
 }
 while ( v4 != n - 1 );
 return v7[n / 2];
}


/* Function: alloca_usage @ 0x149C */
int alloca_usage(int n)
{
 signed long long v1; // rax
 void *v2; // rsp
 unsigned int *v3; // rdx
 int v4; // eax
 unsigned int v7[2]; // [rsp+8h] [rbp-10h] BYREF
 unsigned long long v8; // [rsp+10h] [rbp-8h]

 v8 = __readfsqword(0x28u);
 if ( n <= 0 )
 return -1;
 while ( v7 != (unsigned int *)((char *)v7 - ((4LL * n + 23) & 0xFFFFFFFFFFFFF000LL)) )
 ;
 v1 = (4 * (unsigned short)n + 23) & 0xFF0;
 v2 = alloca(v1);
 if ( ((4 * (unsigned short)n + 23) & 0xFF0) != 0 )
 *(unsigned long long *)((char *)&v7[-2] + v1) = *(unsigned long long *)((char *)&v7[-2] + v1);
 v3 = v7;
 v4 = 0;
 do
 {
 *v3 = v4;
 v4 += 3;
 ++v3;
 }
 while ( v4 != 3 * n );
 return v7[n / 2];
}


/* Function: stack_alias @ 0x1558 */
int stack_alias(int *p1, int *p2)
{
 return 20;
}


/* Function: test_stack_memory @ 0x1562 */
void test_stack_memory()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax

 puts(s);
 __printf_chk(1, "MEM-L1-01 (local_vars): %d\n", 20);
 v0 = local_array(2);
 __printf_chk(1, "MEM-L1-02 (local_array): %d\n", v0);
 __printf_chk(1, "MEM-L1-03 (local_struct): %d\n", 15);
 __printf_chk(1, "MEM-L1-04 (address_of_local): %d\n", 42);
 __printf_chk(1, "MEM-L1-05 (address_of_array): %d\n", 2);
 v1 = large_stack_frame();
 __printf_chk(1, "MEM-L2-01 (large_stack_frame): %d\n", v1);
 v2 = vla_stack(10);
 __printf_chk(1, "MEM-L2-02 (vla_stack): %d\n", v2);
 v3 = alloca_usage(10);
 __printf_chk(1, "MEM-L2-03 (alloca_usage): %d\n", v3);
 __printf_chk(1, "MEM-L2-04 (stack_alias): %d\n", 20);
}


/* Function: heap_basic @ 0x168A */
int heap_basic(int n)
{
 unsigned int *v1; // rax
 long long i; // rdx
 int v3; // ebx

 v1 = malloc(4LL * n);
 if ( !v1 )
 return -1;
 if ( n > 0 )
 {
 for ( i = 0; i != n; ++i )
 v1[i] = 2 * i;
 }
 v3 = v1[n / 2];
 free(v1);
 return v3;
}


/* Function: heap_calloc @ 0x16DD */
int heap_calloc(int n)
{
 unsigned int *v1; // rax
 unsigned int *v2; // rdx
 int v3; // ebx

 v1 = calloc(n, 4u);
 if ( !v1 )
 return -1;
 if ( n <= 0 )
 {
 v3 = 0;
 }
 else
 {
 v2 = v1;
 v3 = 0;
 do
 v3 += *v2++;
 while ( v2 != &v1[n] );
 }
 free(v1);
 return v3;
}


/* Function: heap_realloc @ 0x172D */
int heap_realloc()
{
 unsigned int *v0; // rax
 void *v1; // rbx
 unsigned int *v2; // rax
 int v3; // ebx

 v0 = malloc(0x14u);
 if ( !v0 )
 return -1;
 v1 = v0;
 *v0 = 1;
 v0[1] = 2;
 v0[2] = 3;
 v0[3] = 4;
 v0[4] = 5;
 v2 = realloc(v0, 0x28u);
 if ( v2 )
 {
 v2[5] = 50;
 v2[6] = 60;
 v2[7] = 70;
 v2[8] = 80;
 v2[9] = 90;
 v3 = -3;
 if ( v2[2] == 3 )
 v3 = 50;
 free(v2);
 }
 else
 {
 free(v1);
 return -2;
 }
 return v3;
}


/* Function: heap_array @ 0x17D3 */
int heap_array(int n)
{
 unsigned int *v1; // rax
 unsigned int *v2; // rcx
 int v3; // edx
 int v4; // ebx

 v1 = malloc(4LL * n);
 if ( !v1 )
 return -1;
 if ( n > 0 )
 {
 v2 = v1;
 v3 = 0;
 do
 {
 *v2 = v3;
 v3 += 3;
 ++v2;
 }
 while ( v3 != 3 * n );
 }
 v4 = v1[n / 2];
 free(v1);
 return v4;
}


/* Function: heap_struct @ 0x1829 */
int heap_struct(int x)
{
 void *v1; // rax
 int v2; // ebx

 v1 = malloc(8u);
 if ( !v1 )
 return -1;
 v2 = 3 * x;
 free(v1);
 return v2;
}


/* Function: heap_nested @ 0x1855 */
int heap_nested(Node **head)
{
 Node *v1; // rax
 Node *v2; // rbx
 Node *v3; // rax

 v1 = (Node *)malloc(0x10u);
 *head = v1;
 if ( !v1 )
 return -1;
 v2 = v1;
 v1->data = 10;
 v3 = (Node *)malloc(0x10u);
 v2->next = v3;
 if ( v3 )
 {
 v3->data = 20;
 v3->next = 0;
 return 0;
 }
 else
 {
 free(v2);
 return -2;
 }
}


/* Function: linked_list_heap @ 0x18C1 */
int linked_list_heap()
{
 int v0; // ebp
 unsigned long long *v1; // rax
 unsigned long long *v2; // rbx
 void *v3; // rdi
 int v4; // ebp
 unsigned long long *v5; // r12
 unsigned long long *v6; // rax
 void *v7; // rdi

 v0 = 0;
 v1 = 0;
 v2 = 0;
 while ( 1 )
 {
 v5 = v1;
 v1 = malloc(0x10u);
 if ( !v1 )
 break;
 *(unsigned int *)v1 = v0;
 v1[1] = 0;
 if ( v2 )
 v5[1] = v1;
 else
 v2 = v1;
 v0 += 10;
 if ( v0 == 50 )
 {
 v6 = v2;
 v4 = 0;
 do
 {
 v4 += *(unsigned int *)v6;
 v6 = (unsigned long long *)v6[1];
 }
 while ( v6 );
 do
 {
 v7 = v2;
 v2 = (unsigned long long *)v2[1];
 free(v7);
 }
 while ( v2 );
 return v4;
 }
 }
 if ( !v2 )
 return -1;
 do
 {
 v3 = v2;
 v2 = (unsigned long long *)v2[1];
 free(v3);
 }
 while ( v2 );
 return -1;
}


/* Function: create_tree_node @ 0x1968 */
TreeNode * create_tree_node(int data)
{
 TreeNode *result; // rax

 result = (TreeNode *)malloc(0x18u);
 if ( result )
 {
 result->data = data;
 result->left = 0;
 result->right = 0;
 }
 return result;
}


/* Function: tree_heap_traversal @ 0x1992 */
int tree_heap_traversal()
{
 TreeNode *tree_node; // rax
 TreeNode *v1; // rbx
 TreeNode *v2; // rax
 TreeNode *left; // rdi
 int v4; // ebp
 TreeNode *right; // rdi

 tree_node = create_tree_node(10);
 if ( !tree_node )
 return -1;
 v1 = tree_node;
 tree_node->left = create_tree_node(20);
 v2 = create_tree_node(30);
 v1->right = v2;
 left = v1->left;
 if ( v2 && left )
 {
 v4 = v2->data + v1->data + left->data;
 free(left);
 free(v1->right);
 free(v1);
 }
 else
 {
 if ( left )
 free(left);
 right = v1->right;
 if ( right )
 free(right);
 free(v1);
 return -2;
 }
 return v4;
}


/* Function: memory_leak @ 0x1A2B */
int memory_leak(int n)
{
 unsigned int *v1; // rax
 long long i; // rdx

 v1 = malloc(4LL * n);
 if ( !v1 )
 return -1;
 if ( n > 0 )
 {
 for ( i = 0; i != n; ++i )
 v1[i] = i;
 }
 return v1[n / 2];
}


/* Function: dangling_pointer @ 0x1A72 */
int dangling_pointer()
{
 unsigned int *v0; // rax
 unsigned int *v1; // rbx

 v0 = malloc(4u);
 if ( !v0 )
 return -1;
 v1 = v0;
 __printf_chk(1, "value before free: %d\n", 42);
 free(v1);
 return *v1;
}


/* Function: double_free @ 0x1AB7 */
int double_free(int *p)
{
 void *v2; // rax
 void *v3; // rbx

 if ( p )
 return *p;
 v2 = malloc(4u);
 v3 = v2;
 if ( !v2 )
 return -1;
 free(v2);
 free(v3);
 return -2;
}


/* Function: heap_overflow @ 0x1AF4 */
int heap_overflow()
{
 int *v0; // rax
 int *v1; // rcx
 int i; // edx
 int v3; // ebx

 v0 = (int *)malloc(0x28u);
 if ( !v0 )
 return -1;
 v1 = v0;
 for ( i = 0; i != 1100; i += 100 )
 *v1++ = i;
 v3 = *v0;
 free(v0);
 return v3;
}


/* Function: test_heap_memory @ 0x1B36 */
void test_heap_memory()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax
 int v8; // eax
 int v9; // eax
 unsigned int v10; // eax
 int status; // [rsp+Ch] [rbp-1Ch] BYREF
 Node *head[3]; // [rsp+10h] [rbp-18h] BYREF

 head[1] = (Node *)__readfsqword(0x28u);
 puts(asc_30E6);
 v0 = heap_basic(10);
 __printf_chk(1, "HEAP-L2-01 (heap_basic): %d\n", v0);
 v1 = heap_calloc(5);
 __printf_chk(1, "HEAP-L2-02 (heap_calloc): %d\n", v1);
 v2 = heap_realloc();
 __printf_chk(1, "HEAP-L2-03 (heap_realloc): %d\n", v2);
 v3 = heap_array(10);
 __printf_chk(1, "HEAP-L2-04 (heap_array): %d\n", v3);
 v4 = heap_struct(5);
 __printf_chk(1, "HEAP-L2-05 (heap_struct): %d\n", v4);
 head[0] = 0;
 v5 = heap_nested(head);
 __printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", v5);
 if ( head[0] )
 {
 free(head[0]->next);
 free(head[0]);
 }
 v6 = linked_list_heap();
 __printf_chk(1, "HEAP-L3-01 (linked_list_heap): %d\n", v6);
 v7 = tree_heap_traversal();
 __printf_chk(1, "HEAP-L3-02 (tree_heap_traversal): %d\n", v7);
 v8 = memory_leak(5);
 __printf_chk(1, "HEAP-L3-03 (memory_leak): %d\n", v8);
 __printf_chk(1, "HEAP-L3-04 (dangling_pointer): ");
 v9 = fork();
 if ( !v9 )
 {
 v10 = dangling_pointer();
 __printf_chk(1, aD, v10);
 exit(0);
 }
 if ( v9 <= 0 )
 {
 perror(aFork_0);
 }
 else
 {
 waitpid(v9, &status, 0);
 if ( (status & 0x7F) != 0 )
 {
 if ( (char)((status & 0x7F) + 1) > 1 )
 __printf_chk(1, byte_33F0, status & 0x7F);
 }
 else
 {
 __printf_chk(1, byte_33C8, BYTE1(status));
 }
 }
}


/* Function: global_var_access @ 0x1D80 */
int global_var_access()
{
 return ++global_counter;
}


/* Function: global_var_read @ 0x1D94 */
int global_var_read()
{
 return 2 * global_counter;
}


/* Function: global_array_access @ 0x1DA1 */
int global_array_access(int idx)
{
 if ( (unsigned int)idx > 9 )
 return -1;
 else
 return global_array[idx];
}


/* Function: static_local @ 0x1DBE */
int static_local(int reset)
{
 int result; // eax

 result = 0;
 if ( !reset )
 result = counter_1 + 1;
 counter_1 = result;
 return result;
}


/* Function: call_static_func @ 0x1DDB */
int call_static_func(int x)
{
 return 2 * x + 1;
}


/* Function: access_extern_global @ 0x1DE4 */
int access_extern_global()
{
 return extern_global_var + 100;
}


/* Function: call_extern_func @ 0x1DF2 */
int call_extern_func()
{
 return extern_function(5);
}


/* Function: read_const_data @ 0x1E09 */
int read_const_data()
{
 return const_string[4] + 42;
}


/* Function: access_bss_var @ 0x1E1C */
int access_bss_var()
{
 return 0;
}


/* Function: access_bss_buffer @ 0x1E26 */
int access_bss_buffer()
{
 return 0;
}


/* Function: global_struct_access @ 0x1E30 */
int global_struct_access()
{
 return 30;
}


/* Function: set_file_static @ 0x1E3A */
void set_file_static(int val)
{
 file_scope_static = val;
}


/* Function: get_file_static @ 0x1E45 */
int get_file_static()
{
 return file_scope_static;
}


/* Function: set_global_callback @ 0x1E50 */
void set_global_callback(int (*f)(int))
{
 global_func_ptr = f;
}


/* Function: call_global_callback @ 0x1E5C */
int call_global_callback(int x)
{
 if ( global_func_ptr )
 return global_func_ptr(x);
 else
 return -1;
}


/* Function: global_heap_store @ 0x1E7D */
int global_heap_store(int *p)
{
 if ( p )
 return *p;
 else
 return -1;
}


/* Function: static_complex_init @ 0x1E8F */
int static_complex_init()
{
 return 15;
}


/* Function: tls_access @ 0x1E99 */
int tls_access(int val)
{
 return 2 * val;
}


/* Function: init_order_test @ 0x1EA1 */
int init_order_test()
{
 static_depends_0 = 20;
 return 20;
}


/* Function: test_static_global @ 0x1EB5 */
void test_static_global()
{
 int v0; // eax
 int v1; // eax
 int const_data; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int inited; // eax

 puts(asc_3438);
 v0 = global_var_access();
 __printf_chk(1, "STM-L1-01 (global_var_access): %d\n", v0);
 __printf_chk(1, "STM-L1-01 (global_var_read): %d\n", 2 * global_counter);
 __printf_chk(1, "STM-L1-02 (global_array_access): %d\n", 5);
 counter_1 = 1;
 __printf_chk(1, "STM-L1-03 (static_local): %d\n", 1);
 __printf_chk(1, "STM-L1-03 (static_local): %d\n", ++counter_1);
 __printf_chk(1, "STM-L1-04 (call_static_func): %d\n", 11);
 __printf_chk(1, "STM-L2-01 (access_extern_global): %d\n", extern_global_var + 100);
 v1 = call_extern_func();
 __printf_chk(1, "STM-L2-02 (call_extern_func): %d\n", v1);
 const_data = read_const_data();
 __printf_chk(1, "STM-L2-03 (read_const_data): %d\n", const_data);
 __printf_chk(1, "STM-L2-04 (access_bss_var): %d\n", 0);
 __printf_chk(1, "STM-L2-04 (access_bss_buffer): %d\n", 0);
 v3 = global_struct_access();
 __printf_chk(1, "STM-L2-05 (global_struct_access): %d\n", v3);
 file_scope_static = 50;
 __printf_chk(1, "STM-L2-06 (file_static): %d\n", 50);
 global_func_ptr = double_value;
 v4 = call_global_callback(5);
 __printf_chk(1, "STM-L2-07 (global_func_ptr): %d\n", v4);
 __printf_chk(1, "STM-L2-08 (global_heap_store): %d\n", 100);
 v5 = static_complex_init();
 __printf_chk(1, "STM-L2-09 (static_complex_init): %d\n", v5);
 __printf_chk(1, "STM-L3-01 (tls_access): %d\n", 20);
 inited = init_order_test();
 __printf_chk(1, "STM-L3-02 (init_order_test): %d\n", inited);
}


/* Function: memop_memset @ 0x2112 */
int memop_memset(void *buf, size_t size, int fill_value)
{
 if ( !buf )
 return -1;
 if ( !size )
 return -1;
 memset(buf, fill_value, size);
 return *(unsigned char *)buf;
}


/* Function: memop_memcpy @ 0x2143 */
int memop_memcpy(void *dst, const void *src, size_t n)
{
 if ( n == 0 || src == 0 || !dst )
 return -1;
 memcpy(dst, src, n);
 return *(unsigned int *)((char *)dst + (n & 0xFFFFFFFFFFFFFFFCLL) - 4);
}


/* Function: memop_memmove @ 0x2186 */
int memop_memmove(void *buf, size_t n)
{
 if ( !buf )
 return -1;
 if ( n <= 1 )
 return -1;
 memmove((char *)buf + 1, buf, n - 1);
 return *((char *)buf + 1);
}


/* Function: memop_memcmp @ 0x21BC */
int memop_memcmp(const void *p1, const void *p2, size_t n)
{
 int v3; // eax
 int v4; // edx
 bool v5; // cc
 int result; // eax

 if ( n == 0 || p2 == 0 || !p1 )
 return 0;
 v3 = memcmp(p1, p2, n);
 v4 = v3 >> 31;
 v5 = v3 <= 0;
 result = 1;
 if ( v5 )
 return v4;
 return result;
}


/* Function: memop_bzero @ 0x21F4 */
int memop_bzero(void *buf, size_t n)
{
 if ( !buf )
 return -1;
 memset(buf, 0, n);
 return *(unsigned char *)buf;
}


/* Function: memop_bcopy @ 0x2219 */
int memop_bcopy(const void *src, void *dst, size_t n)
{
 if ( n == 0 || dst == 0 )
 return -1;
 if ( !src )
 return -1;
 memmove(dst, src, n);
 return *(unsigned char *)dst;
}


/* Function: memop_unaligned_access @ 0x2253 */
int memop_unaligned_access(const char *buf)
{
 if ( buf )
 return *(unsigned int *)(buf + 1);
 else
 return -1;
}


/* Function: memop_memory_barrier @ 0x2266 */
int memop_memory_barrier(volatile int *flag)
{
 volatile int v1; // edx
 _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

 if ( !flag )
 return -1;
 v1 = *flag;
 _InterlockedOr64((volatile signed long long *)&retaddr, 0);
 return v1 + *flag;
}


/* Function: test_memory_op_functions @ 0x2282 */
void test_memory_op_functions()
{
 int v0; // eax
 int v1; // eax
 unsigned int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int flag; // [rsp+4h] [rbp-194h] BYREF
 int cmp_a[3]; // [rsp+8h] [rbp-190h] BYREF
 int cmp_b[3]; // [rsp+14h] [rbp-184h] BYREF
 int int_src[8]; // [rsp+20h] [rbp-178h] BYREF
 int int_dst[5]; // [rsp+40h] [rbp-158h] BYREF
 char bcopy_src[4]; // [rsp+63h] [rbp-135h] BYREF
 char bcopy_dst[4]; // [rsp+67h] [rbp-131h] BYREF
 char zero_buf[10]; // [rsp+6Bh] [rbp-12Dh] BYREF
 char move_buf[11]; // [rsp+75h] [rbp-123h] BYREF
 char buffer[256]; // [rsp+80h] [rbp-118h] BYREF
 unsigned long long v17; // [rsp+188h] [rbp-10h]

 v17 = __readfsqword(0x28u);
 puts(asc_3688);
 int_src[0] = 10;
 int_src[1] = 20;
 int_src[2] = 30;
 int_src[3] = 40;
 int_src[4] = 50;
 memset(int_dst, 0, sizeof(int_dst));
 v0 = memop_memset(buffer, 0xAu, 65);
 __printf_chk(1, "MEMOP-L2-01: %d\n", v0);
 v1 = memop_memcpy(int_dst, int_src, 0x14u);
 __printf_chk(1, "MEMOP-L2-02: %d\n", v1);
 strcpy(move_buf, "HelloWorld");
 v2 = memop_memmove(move_buf, 0xAu);
 __printf_chk(1, "MEMOP-L2-03: %c\n", v2);
 cmp_a[0] = 1;
 cmp_a[1] = 2;
 cmp_a[2] = 3;
 cmp_b[0] = 1;
 cmp_b[1] = 2;
 cmp_b[2] = 4;
 v3 = memop_memcmp(cmp_a, cmp_b, 0xCu);
 __printf_chk(1, "MEMOP-L2-04: %d\n", v3);
 v4 = memop_bzero(zero_buf, 0xAu);
 __printf_chk(1, "MEMOP-L2-05: %d\n", v4);
 *(unsigned int *)bcopy_src = 67305985;
 *(unsigned int *)bcopy_dst = 0;
 v5 = memop_bcopy(bcopy_src, bcopy_dst, 4u);
 __printf_chk(1, "MEMOP-L2-06: %d\n", v5);
 __printf_chk(1, "MEMOP-L3-01: 0x%x\n", 67305985);
 flag = 5;
 v6 = memop_memory_barrier(&flag);
 __printf_chk(1, "MEMOP-L3-02: %d\n", v6);
}


/* Function: main @ 0x24AF */
int main(int argc, const char **argv, const char **envp)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}





/* Function: .term_proc @ 0x24F4 */
static void term_proc(void)
{
}



