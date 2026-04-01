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
typedef int bool;
#define true 1
#define false 0

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/3/3_clang_Os_g
 * Processor: pc
 */

/* Standard library function declarations */
int printf(const char *format, ...);
int puts(const char *s);
void *malloc(size_t size);
void free(void *ptr);
void *memset(void *s, int c, size_t n);
void *memcpy(void *dest, const void *src, size_t n);
void *memmove(void *dest, const void *src, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
void *calloc(size_t nmemb, size_t size);
void *realloc(void *ptr, size_t size);
int fork(void);
void exit(int status);
int perror(const char *s);
int waitpid(int pid, int *status, int options);

/* Forward declarations for functions used before defined */
int double_value(int x);
static int extern_function(int x);

/* Macro definitions */
#define BYTE1(x) (((x) >> 8) & 0xFF)

/* Structure definitions */
typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

/* Global variables */
int global_counter;
int global_array[10];
int extern_global_var;
int static_local_counter;
int *file_scope_static;
int global_func_ptr;
int *global_heap_ptr;
char const_string[20];
char asc_35C1[] = "Testing Stack Memory Functions";
char asc_35DF[] = "Testing Heap Memory Functions";
char asc_35FD[] = "Testing Static/Global Variables";
char asc_3621[] = "Testing Memory Operation Functions";
unsigned int unk_3670[4];
unsigned int unk_367C[4];
unsigned int word_32 = 50;
char byte_32A2[] = "%d";
char byte_327D[] = "%d";
char aD[] = "%d";
char aFork_0[] = "fork";

/* Wrapper for memcpy */
#define qmemcpy memcpy




/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__("jmp *8(%ebx)");
}


/* Function: sub_1130 @ 0x1130 */
int sub_1130(int a1)
{
 return (*(int (**)(void))(a1 - 16))();
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_116C @ 0x116C */
void sub_116C()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1170 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x12A9 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x12AD */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: local_vars @ 0x12B4 */
int local_vars(int x)
{
 return 2 * x + 10;
}


/* Function: local_array @ 0x12BE */
int local_array(int n)
{
 int v1; // ecx
 int i; // edx
 unsigned int v4[10]; // [esp+0h] [ebp-28h]

 v1 = 0;
 for ( i = 0; i != 10; ++i )
 {
 v4[i] = v1;
 v1 += n;
 }
 return v4[5];
}


/* Function: local_struct @ 0x12DC */
int local_struct(int x)
{
 return 3 * x;
}


/* Function: address_of_local @ 0x12E4 */
int address_of_local(int *out)
{
 *out = 42;
 return 42;
}


/* Function: address_of_array @ 0x12F4 */
int address_of_array(int *arr)
{
 return 2 * *arr;
}


/* Function: large_stack_frame @ 0x12FD */
int large_stack_frame()
{
 int i; // eax
 unsigned char v2[2048]; // [esp+0h] [ebp-800h]

 for ( i = 0; i != 2048; ++i )
 v2[i] = i;
 return v2[1024];
}


/* Function: vla_stack @ 0x131F */
int vla_stack(int n)
{
 char *v2; // edx
 int v3; // esi
 int v4; // edi
 int v5; // [esp+0h] [ebp-8h] BYREF

 if ( (unsigned int)(n - 1001) < 0xFFFFFC18 )
 return -1;
 v2 = (char *)&v5 - ((4 * n + 15) & 0xFFFFFFF0);
 v3 = 0;
 v4 = n;
 do
 {
 *(unsigned int *)&v2[2 * v3] = v3;
 v3 += 2;
 --v4;
 }
 while ( v4 );
 return *(unsigned int *)&v2[2 * ((n + ((unsigned int)n >> 31)) & 0xFFFFFFFE)];
}


/* Function: alloca_usage @ 0x136F */
int alloca_usage(int n)
{
 int v1; // eax
 char *v2; // ecx
 int v3; // edx
 int i; // esi
 int v6; // [esp-4h] [ebp-8h] BYREF

 v6 = v1;
 if ( n <= 0 )
 return -1;
 v2 = (char *)&v6 - ((4 * n + 15) & 0xFFFFFFF0);
 v3 = 0;
 for ( i = 0; i != n; ++i )
 {
 *(unsigned int *)&v2[4 * i] = v3;
 v3 += 3;
 }
 return *(unsigned int *)&v2[2 * ((n + ((unsigned int)n >> 31)) & 0xFFFFFFFE)];
}


/* Function: stack_alias @ 0x13B2 */
int stack_alias()
{
 return 20;
}


/* Function: test_stack_memory @ 0x13B8 */
void test_stack_memory()
{
 int i; // eax
 int j; // eax
 int k; // ecx
 unsigned int *v3; // esi
 int m; // eax
 unsigned char v5[20]; // [esp+10h] [ebp-80Ch] BYREF
 int v6; // [esp+24h] [ebp-7F8h]
 char v7; // [esp+410h] [ebp-40Ch]

 puts(asc_35C1);
 printf("MEM-L1-01 (local_vars): %d\n", 20);
 for ( i = 0; i != 20; i += 2 )
 *(unsigned int *)&v5[2 * i] = i;
 printf("MEM-L1-02 (local_array): %d\n", v6);
 printf("MEM-L1-03 (local_struct): %d\n", 15);
 printf("MEM-L1-04 (address_of_local): %d\n", 42);
 printf("MEM-L1-05 (address_of_array): %d\n", 2);
 for ( j = 0; j != 2048; ++j )
 v5[j] = j;
 printf("MEM-L2-01 (large_stack_frame): %d\n", v7);
 for ( k = 0; k != 20; k += 2 )
 *(unsigned int *)&v5[2 * k] = k;
 v3 = v5;
 printf("MEM-L2-02 (vla_stack): %d\n", v6);
 for ( m = 0; m != 30; m += 3 )
 *v3++ = m;
 printf("MEM-L2-03 (alloca_usage): %d\n", v6);
 printf("MEM-L2-04 (stack_alias): %d\n", 20);
}


/* Function: heap_basic @ 0x14ED */
int heap_basic(int n)
{
 char *v1; // eax
 int v2; // ecx
 int v3; // edx
 int v4; // esi

 v1 = (char *)malloc(4 * n);
 if ( !v1 )
 return -1;
 if ( n > 0 )
 {
 v2 = 0;
 v3 = n;
 do
 {
 *(unsigned int *)&v1[2 * v2] = v2;
 v2 += 2;
 --v3;
 }
 while ( v3 );
 }
 v4 = *(unsigned int *)&v1[2 * ((n + ((unsigned int)n >> 31)) & 0xFFFFFFFE)];
 free(v1);
 return v4;
}


/* Function: heap_calloc @ 0x1546 */
int heap_calloc(int n)
{
 unsigned int *v1; // eax
 int v2; // esi
 int i; // ecx

 v1 = calloc(n, 4u);
 if ( !v1 )
 return -1;
 v2 = 0;
 if ( n >= 2 )
 {
 v2 = 0;
 for ( i = 1; i != n; ++i )
 v2 += v1[i];
 }
 free(v1);
 return v2;
}


/* Function: heap_realloc @ 0x159A */
int heap_realloc()
{
 unsigned int *v0; // eax
 unsigned int *v1; // esi
 int i; // eax
 int v3; // ebp
 unsigned int *v4; // eax
 int *v5; // ecx
 int j; // edx
 int v7; // edi

 v0 = malloc(0x14u);
 if ( !v0 )
 return -1;
 v1 = v0;
 for ( i = 1; i != 6; ++i )
 v1[i - 1] = i;
 v3 = v1[2];
 v4 = realloc(v1, 0x28u);
 if ( v4 )
 {
 v5 = v4 + 5;
 for ( j = 50; j != 100; j += 10 )
 *v5++ = j;
 v7 = -3;
 if ( v4[2] == v3 )
 v7 = v4[5];
 v1 = v4;
 }
 else
 {
 v7 = -2;
 }
 free(v1);
 return v7;
}


/* Function: heap_array @ 0x1627 */
int heap_array(int n)
{
 unsigned int *v1; // eax
 int v2; // ecx
 int i; // edx
 int v4; // esi

 v1 = malloc(4 * n);
 if ( !v1 )
 return -1;
 if ( n > 0 )
 {
 v2 = 0;
 for ( i = 0; i != n; ++i )
 {
 v1[i] = v2;
 v2 += 3;
 }
 }
 v4 = *(unsigned int *)((char *)v1 + 2 * ((n + ((unsigned int)n >> 31)) & 0xFFFFFFFE));
 free(v1);
 return v4;
}


/* Function: heap_struct @ 0x1682 */
int heap_struct(int x)
{
 return 3 * x;
}


/* Function: heap_nested @ 0x168A */
int heap_nested(Node **head)
{
 Node *v1; // eax
 Node *v2; // esi
 Node *v3; // eax

 v1 = (Node *)malloc(8u);
 *head = v1;
 if ( !v1 )
 return -1;
 v2 = v1;
 v1->data = 10;
 v3 = (Node *)malloc(8u);
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


/* Function: linked_list_heap @ 0x16F7 */
int linked_list_heap()
{
 unsigned int *v0; // eax
 int v1; // ebp
 int v2; // esi
 unsigned int *v3; // edi
 bool v4; // al
 unsigned int *v5; // esi
 int v6; // esi
 unsigned int *v7; // eax
 unsigned int *v8; // ebp
 unsigned int *v10; // [esp+8h] [ebp-14h]
 bool v11; // [esp+8h] [ebp-14h]

 v0 = malloc(8u);
 if ( v0 )
 {
 v1 = 0;
 v2 = 0;
 v10 = 0;
 v3 = 0;
 while ( 1 )
 {
 *v0 = v1;
 v0[1] = 0;
 if ( v3 )
 v10[1] = v0;
 else
 v3 = v0;
 if ( v2 == -4 )
 break;
 v10 = v0;
 v0 = malloc(8u);
 --v2;
 v1 += 10;
 if ( !v0 )
 {
 v4 = (unsigned int)~v2 < 4;
 goto LABEL_10;
 }
 }
 v4 = 0;
 }
 else
 {
 v4 = 1;
 v3 = 0;
LABEL_10:
 if ( v3 )
 {
 v11 = v4;
 do
 {
 v5 = (unsigned int *)v3[1];
 free(v3);
 v3 = v5;
 }
 while ( v5 );
 v3 = 0;
 v4 = v11;
 }
 else
 {
 v3 = 0;
 }
 }
 if ( v4 )
 return -1;
 v6 = 0;
 if ( v3 )
 {
 v7 = v3;
 do
 {
 v6 += *v7;
 v7 = (unsigned int *)v7[1];
 }
 while ( v7 );
 do
 {
 v8 = (unsigned int *)v3[1];
 free(v3);
 v3 = v8;
 }
 while ( v8 );
 }
 return v6;
}


/* Function: create_tree_node @ 0x17D1 */
TreeNode * create_tree_node(int data)
{
 TreeNode *result; // eax

 result = (TreeNode *)malloc(0xCu);
 if ( result )
 {
 result->data = data;
 result->left = 0;
 result->right = 0;
 }
 return result;
}


/* Function: tree_heap_traversal @ 0x1804 */
int tree_heap_traversal()
{
 return 60;
}


/* Function: memory_leak @ 0x180A */
int memory_leak(int n)
{
 unsigned int *v1; // eax
 int i; // ecx

 v1 = malloc(4 * n);
 if ( !v1 )
 return -1;
 if ( n > 0 )
 {
 for ( i = 0; i != n; ++i )
 v1[i] = i;
 }
 return *(unsigned int *)((char *)v1 + 2 * ((n + ((unsigned int)n >> 31)) & 0xFFFFFFFE));
}


/* Function: dangling_pointer @ 0x1856 */
int dangling_pointer()
{
 void *v0; // eax
 void *v1; // esi

 v0 = malloc(4u);
 if ( !v0 )
 return -1;
 v1 = v0;
 printf("value before free: %d\n", 42);
 free(v1);
 return *(unsigned int *)v1;
}


/* Function: double_free @ 0x18A4 */
int double_free(int *p)
{
 if ( p )
 return *p;
 else
 return -2;
}


/* Function: heap_overflow @ 0x18B5 */
int heap_overflow()
{
 unsigned int *v0; // eax
 int v1; // ecx
 unsigned int *v2; // edx
 int v3; // esi

 v0 = malloc(0x28u);
 if ( !v0 )
 return -1;
 v1 = 0;
 v2 = v0;
 do
 {
 *v2 = v1;
 v1 += 100;
 ++v2;
 }
 while ( v1 != 1100 );
 v3 = *v0;
 free(v0);
 return v3;
}


/* Function: test_heap_memory @ 0x18FF */
void test_heap_memory()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 Node *v5; // esi
 int v6; // eax
 unsigned int *v7; // eax
 int i; // ecx
 int v9; // eax
 int v10; // eax
 int v11; // eax
 int stat_loc; // [esp+Ch] [ebp-10h] BYREF
 Node *v13; // [esp+10h] [ebp-Ch] BYREF

 puts(asc_35DF);
 v0 = heap_basic(10);
 printf("HEAP-L2-01 (heap_basic): %d\n", v0);
 v1 = heap_calloc(5);
 printf("HEAP-L2-02 (heap_calloc): %d\n", v1);
 v2 = heap_realloc();
 printf("HEAP-L2-03 (heap_realloc): %d\n", v2);
 v3 = heap_array(10);
 printf("HEAP-L2-04 (heap_array): %d\n", v3);
 printf("HEAP-L2-05 (heap_struct): %d\n", 15);
 v13 = 0;
 v4 = heap_nested(&v13);
 printf("HEAP-L2-06 (heap_nested): %d\n", v4);
 v5 = v13;
 if ( v13 )
 {
 free(v13->next);
 free(v5);
 }
 v6 = linked_list_heap();
 printf("HEAP-L3-01 (linked_list_heap): %d\n", v6);
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n", 60);
 v7 = malloc(0x14u);
 if ( v7 )
 {
 for ( i = 0; i != 5; ++i )
 v7[i] = i;
 v9 = v7[2];
 }
 else
 {
 v9 = -1;
 }
 printf("HEAP-L3-03 (memory_leak): %d\n", v9);
 printf("HEAP-L3-04 (dangling_pointer): ");
 v10 = fork();
 if ( !v10 )
 {
 v11 = dangling_pointer();
 printf(aD, v11);
 exit(0);
 }
 if ( v10 <= 0 )
 {
 perror(aFork_0);
 }
 else
 {
 waitpid(v10, &stat_loc, 0);
 if ( (stat_loc & 0x7F) != 0 )
 {
 if ( ((stat_loc & 0x7F) << 24) + 0x1000000 >= 0x2000000 )
 printf(byte_32A2, stat_loc & 0x7F);
 }
 else
 {
 printf(byte_327D, BYTE1(stat_loc));
 }
 }
}


/* Function: global_var_access @ 0x1AEB */
int global_var_access()
{
 return ++global_counter;
}


/* Function: global_var_read @ 0x1B05 */
int global_var_read()
{
 return 2 * global_counter;
}


/* Function: global_array_access @ 0x1B1A */
int global_array_access(int idx)
{
 if ( (unsigned int)idx <= 9 )
 return global_array[idx];
 else
 return -1;
}


/* Function: static_local @ 0x1B3B */
int static_local(int reset)
{
 int result; // eax

 result = 0;
 if ( !reset )
 result = static_local_counter + 1;
 static_local_counter = result;
 return result;
}


/* Function: call_static_func @ 0x1B5F */
int call_static_func(int x)
{
 return 2 * x + 1;
}


/* Function: access_extern_global @ 0x1B67 */
int access_extern_global()
{
 return extern_global_var + 100;
}


/* Function: call_extern_func @ 0x1B7F */
int call_extern_func()
{
 return extern_function(5);
}


/* Function: read_const_data @ 0x1BA0 */
int read_const_data()
{
 return const_string[4] + 42;
}


/* Function: access_bss_var @ 0x1BBA */
int access_bss_var()
{
 return 0;
}


/* Function: access_bss_buffer @ 0x1BBD */
int access_bss_buffer()
{
 return 0;
}


/* Function: global_struct_access @ 0x1BC0 */
int global_struct_access()
{
 return 30;
}


/* Function: set_file_static @ 0x1BC6 */
void set_file_static(int val)
{
 file_scope_static = (int *)val;
}


/* Function: get_file_static @ 0x1BDD */
int *get_file_static()
{
 return file_scope_static;
}


/* Function: set_global_callback @ 0x1BF0 */
void set_global_callback(int (*f)(int))
{
 global_func_ptr = (int)f;
}


/* Function: call_global_callback @ 0x1C07 */
int call_global_callback(int x)
{
 if ( global_func_ptr )
 return ((int ( *)(int))global_func_ptr)(x);
 else
 return -1;
}


/* Function: global_heap_store @ 0x1C34 */
int global_heap_store(int *p)
{
 global_heap_ptr = (int)p;
 if ( p )
 return *p;
 else
 return -1;
}


/* Function: static_complex_init @ 0x1C55 */
int static_complex_init()
{
 return 15;
}


/* Function: tls_access @ 0x1C5B */
int tls_access(int val)
{
 return 2 * val;
}


/* Function: init_order_test @ 0x1C62 */
int init_order_test()
{
 return 20;
}


/* Function: test_static_global @ 0x1C68 */
void test_static_global()
{
 int v0; // eax
 int v1; // [esp+Ch] [ebp-10h] BYREF

 puts(asc_35FD);
 printf("STM-L1-01 (global_var_access): %d\n", ++global_counter);
 printf("STM-L1-01 (global_var_read): %d\n", 2 * global_counter);
 printf("STM-L1-02 (global_array_access): %d\n", 5);
 static_local_counter = 1;
 printf("STM-L1-03 (static_local): %d\n", 1);
 printf("STM-L1-03 (static_local): %d\n", ++static_local_counter);
 printf("STM-L1-04 (call_static_func): %d\n", 11);
 printf("STM-L2-01 (access_extern_global): %d\n", extern_global_var + 100);
 v0 = extern_function(5);
 printf("STM-L2-02 (call_extern_func): %d\n", v0);
 printf("STM-L2-03 (read_const_data): %d\n", const_string[4] + 42);
 printf("STM-L2-04 (access_bss_var): %d\n", 0);
 printf("STM-L2-04 (access_bss_buffer): %d\n", 0);
 printf("STM-L2-05 (global_struct_access): %d\n", 30);
 file_scope_static = (unsigned int *)&word_32;
 printf("STM-L2-06 (file_static): %d\n", 50);
 global_func_ptr = (int)double_value;
 printf("STM-L2-07 (global_func_ptr): %d\n", 10);
 v1 = 100;
 global_heap_ptr = (int)&v1;
 printf("STM-L2-08 (global_heap_store): %d\n", 100);
 printf("STM-L2-09 (static_complex_init): %d\n", 15);
 printf("STM-L3-01 (tls_access): %d\n", 20);
 printf("STM-L3-02 (init_order_test): %d\n", 20);
}


/* Function: double_value @ 0x1E5B */
int double_value(int x)
{
 return 2 * x;
}


/* Function: memop_memset @ 0x1E62 */
int memop_memset(unsigned char *buf, size_t size, int fill_value)
{
 int result; // eax

 result = -1;
 if ( buf )
 {
 if ( size )
 {
 memset(buf, fill_value, size);
 return *buf;
 }
 }
 return result;
}


/* Function: memop_memcpy @ 0x1E9E */
int memop_memcpy(char *dst, const void *src, size_t n)
{
 int result; // eax

 result = -1;
 if ( dst && src )
 {
 if ( n )
 {
 memcpy(dst, src, n);
 return *(unsigned int *)&dst[(n & 0xFFFFFFFC) - 4];
 }
 }
 return result;
}


/* Function: memop_memmove @ 0x1EE1 */
int memop_memmove(char *buf, size_t n)
{
 int result; // eax

 result = -1;
 if ( buf )
 {
 if ( n >= 2 )
 {
 memmove(buf + 1, buf, n - 1);
 return buf[1];
 }
 }
 return result;
}


/* Function: memop_memcmp @ 0x1F20 */
int memop_memcmp(const void *p1, const void *p2, size_t n)
{
 int result; // eax
 int v4; // ecx

 result = 0;
 if ( p1 && p2 && n )
 {
 v4 = memcmp(p1, p2, n);
 result = 1;
 if ( v4 <= 0 )
 return -(v4 != 0);
 }
 return result;
}


/* Function: memop_bzero @ 0x1F70 */
int memop_bzero(unsigned char *buf, size_t n)
{
 if ( !buf )
 return -1;
 memset(buf, 0, n);
 return *buf;
}


/* Function: memop_bcopy @ 0x1FA7 */
int memop_bcopy(const void *src, unsigned char *dst, size_t n)
{
 int result; // eax

 result = -1;
 if ( src && dst )
 {
 if ( n )
 {
 memmove(dst, src, n);
 return *dst;
 }
 }
 return result;
}


/* Function: memop_unaligned_access @ 0x1FE8 */
int memop_unaligned_access(const char *buf)
{
 if ( buf )
 return *(unsigned int *)(buf + 1);
 else
 return -1;
}


/* Function: memop_memory_barrier @ 0x1FF8 */
int memop_memory_barrier(volatile int *flag)
{
 volatile int v1; // eax

 if ( !flag )
 return -1;
 v1 = *flag;
 __asm__ __volatile__("" : : "r"(&v1));
 return *flag + v1;
}

/* Wrapper for InterlockedOr - cross-platform atomic operation */
static inline int InterlockedOr(volatile int *ptr, int val)
{
    return __sync_fetch_and_or(ptr, val);
}


/* Function: test_memory_op_functions @ 0x200E */
void test_memory_op_functions()
{
 int v0; // eax
 int v1; // edx
 signed int v2; // [esp+0h] [ebp-1Ch] BYREF
 int v3; // [esp+8h] [ebp-14h]
 unsigned int v4[4]; // [esp+Ch] [ebp-10h] BYREF

 puts(asc_3621);
 printf("MEMOP-L2-01: %d\n", 65);
 printf("MEMOP-L2-02: %d\n", 50);
 qmemcpy(v4, "HHelloWorl", 10);
 printf("MEMOP-L2-03: %c\n", 72);
 v0 = memcmp(&unk_3670, &unk_367C, 0xCu);
 v1 = 1;
 if ( v0 <= 0 )
 v1 = -(v0 != 0);
 printf("MEMOP-L2-04: %d\n", v1);
 printf("MEMOP-L2-05: %d\n", 0);
 printf("MEMOP-L2-06: %d\n", 1);
 printf("MEMOP-L3-01: 0x%x\n", 67305985);
 v3 = 5;
 InterlockedOr(&v2, 0);
 printf("MEMOP-L3-02: %d\n", v3 + 5);
}


/* Function: main @ 0x2128 */
int main(int argc, const char **argv, const char **envp)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}


/* Function: extern_function @ 0x2154 */
int extern_function(int x)
{
 return 3 * x;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x21AC */
void term_proc()
{
}

/* Stub for CRT function */
void _do_global_dtors_aux()
{
}


/* FAILED to decompile: __libc_start_main @ 0x6078 */

/* FAILED to decompile: printf @ 0x607C */

/* FAILED to decompile: memmove @ 0x6080 */

/* FAILED to decompile: free @ 0x6084 */

/* FAILED to decompile: memcpy @ 0x6088 */

/* FAILED to decompile: memcmp @ 0x608C */

/* FAILED to decompile: __cxa_finalize @ 0x6090 */

/* FAILED to decompile: perror @ 0x6094 */

/* FAILED to decompile: waitpid @ 0x6098 */

/* FAILED to decompile: realloc @ 0x609C */

/* FAILED to decompile: malloc @ 0x60A0 */

/* FAILED to decompile: puts @ 0x60A4 */

/* FAILED to decompile: exit @ 0x60A8 */

/* FAILED to decompile: memset @ 0x60AC */

/* FAILED to decompile: fork @ 0x60B0 */

/* FAILED to decompile: calloc @ 0x60B4 */

/* Total functions decompiled: 70, failed: 16 */
