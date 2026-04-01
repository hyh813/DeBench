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
#define NULL ((void *)0)

/* Compiler intrinsics and macros */
#define BYTE1(x) (((x) >> 8) & 0xFF)
static inline unsigned long long __readfsqword(unsigned int offset) {
    unsigned long long val;
    __asm__ __volatile__("movq %%fs:%1,%0" : "=r" (val) : "m" (*(unsigned long long *)(offset)));
    return val;
}
static inline unsigned int __readfsdword(unsigned int offset) {
    unsigned int val;
    __asm__ __volatile__("movl %%fs:%1,%0" : "=r" (val) : "m" (*(unsigned int *)(offset)));
    return val;
}
static inline void __writefsdword(unsigned int offset, unsigned int val) {
    __asm__ __volatile__("movl %0,%%fs:%1" : : "r" (val), "m" (*(unsigned int *)(offset)));
}
#define _InterlockedOr64(addr, val) __sync_fetch_and_or(addr, val)

/* Global variables */
unsigned int global_counter = 0;
static unsigned int file_scope_static = 0;
long long (*global_func_ptr)(unsigned int) = NULL;
extern long long (**_gmon_start__(void))(void);
extern long long extern_function(int);
const char *const_string = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const char *s = "Testing stack memory operations:";
const char *asc_3160 = "Testing heap memory operations:";
const char *aD = "%d\n";
const char *aFork_0 = "fork";
const char *asc_3360 = "Testing static and global variable operations:";
const char *asc_3610 = "Testing memory operation functions:";
unsigned int global_array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
static unsigned int counter_1 = 0;
extern unsigned int extern_global_var;
const char byte_32D8[] = "Exit status: %d\n";
const char byte_3300[] = "Signal: %d\n";
unsigned int bss_var = 0;
unsigned int bss_buffer[4] = {0};
unsigned int global_point = 0;
unsigned int dword_604C = 0;
unsigned int dword_6068 = 0;
unsigned int complex_init = 0;
unsigned int dword_6070 = 0;
void *global_heap_ptr = NULL;
static unsigned int static_depends_0 = 0;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/3/3_gcc_O0_no_g
 * Processor: pc
 */





/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: double_value @ 0x1309 */
long long double_value(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: local_vars @ 0x131B */
long long local_vars(int a1)
{
 return (unsigned int)(2 * a1 + 10);
}


/* Function: local_array @ 0x1342 */
long long local_array(int a1)
{
 int i; // [rsp+1Ch] [rbp-34h]
 unsigned int v3[10]; // [rsp+20h] [rbp-30h]
 unsigned long long v4; // [rsp+48h] [rbp-8h]

 v4 = __readfsqword(0x28u);
 for ( i = 0; i <= 9; ++i )
 v3[i] = a1 * i;
 return v3[5];
}


/* Function: local_struct @ 0x139E */
long long local_struct(int a1)
{
 return (unsigned int)(3 * a1);
}


/* Function: address_of_local @ 0x13C1 */
long long address_of_local(unsigned int *a1)
{
 *a1 = 42;
 return 42;
}


/* Function: address_of_array @ 0x13E2 */
long long address_of_array(unsigned int *a1)
{
 return (unsigned int)(2 * *a1);
}


/* Function: large_stack_frame @ 0x140E */
long long large_stack_frame()
{
 int i; // [rsp+Ch] [rbp-814h]
 unsigned char v2[2056]; // [rsp+10h] [rbp-810h]
 unsigned long long v3; // [rsp+818h] [rbp-8h]

 v3 = __readfsqword(0x28u);
 for ( i = 0; i <= 2047; ++i )
 v2[i] = i;
 return v2[1024];
}


/* Function: vla_stack @ 0x1482 */
long long vla_stack(int a1)
{
 unsigned long long v2; // rax
 void *v3; // rsp
 unsigned char v4[12]; // [rsp+8h] [rbp-40h] BYREF
 int v5; // [rsp+14h] [rbp-34h]
 int i; // [rsp+1Ch] [rbp-2Ch]
 long long v7; // [rsp+20h] [rbp-28h]
 unsigned char *v8; // [rsp+28h] [rbp-20h]
 unsigned long long v9; // [rsp+30h] [rbp-18h]

 v5 = a1;
 v9 = __readfsqword(0x28u);
 if ( a1 <= 0 || v5 > 1000 )
 return 0xFFFFFFFFLL;
 v7 = v5 - 1LL;
 v2 = 16 * ((4LL * v5 + 15) / 0x10uLL);
 while ( v4 != &v4[-(v2 & 0xFFFFFFFFFFFFF000LL)] )
 ;
 v3 = alloca(v2 & 0xFFF);
 if ( (v2 & 0xFFF) != 0 )
 *(unsigned long long *)&v4[(v2 & 0xFFF) - 8] = *(unsigned long long *)&v4[(v2 & 0xFFF) - 8];
 v8 = v4;
 for ( i = 0; i < v5; ++i )
 *(unsigned int *)&v8[4 * i] = 2 * i;
 return *(unsigned int *)&v8[4 * (v5 / 2)];
}


/* Function: alloca_usage @ 0x15CD */
long long alloca_usage(int a1)
{
 unsigned long long v2; // rax
 void *v3; // rsp
 unsigned char v4[12]; // [rsp+8h] [rbp-30h] BYREF
 int v5; // [rsp+14h] [rbp-24h]
 int i; // [rsp+24h] [rbp-14h]
 unsigned char *v7; // [rsp+28h] [rbp-10h]
 unsigned long long v8; // [rsp+30h] [rbp-8h]

 v5 = a1;
 v8 = __readfsqword(0x28u);
 if ( a1 <= 0 )
 return 0xFFFFFFFFLL;
 v2 = 16 * ((4LL * v5 + 23) / 0x10uLL);
 while ( v4 != &v4[-(v2 & 0xFFFFFFFFFFFFF000LL)] )
 ;
 v3 = alloca(v2 & 0xFFF);
 if ( (v2 & 0xFFF) != 0 )
 *(unsigned long long *)&v4[(v2 & 0xFFF) - 8] = *(unsigned long long *)&v4[(v2 & 0xFFF) - 8];
 v7 = v4;
 for ( i = 0; i < v5; ++i )
 *(unsigned int *)&v7[4 * i] = 3 * i;
 return *(unsigned int *)&v7[4 * (v5 / 2)];
}


/* Function: stack_alias @ 0x16F3 */
long long stack_alias()
{
 int v1; // [rsp+14h] [rbp-Ch] BYREF
 unsigned long long v2; // [rsp+18h] [rbp-8h]

 v2 = __readfsqword(0x28u);
 v1 = 10;
 if ( !&v1 )
 return 0xFFFFFFFFLL;
 v1 = 20;
 return 20;
}


/* Function: test_stack_memory @ 0x176B */
unsigned long long test_stack_memory()
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
 int v10; // [rsp+8h] [rbp-38h] BYREF
 int v11; // [rsp+Ch] [rbp-34h] BYREF
 unsigned long long v12[5]; // [rsp+10h] [rbp-30h] BYREF
 unsigned long long v13; // [rsp+38h] [rbp-8h]

 v13 = __readfsqword(0x28u);
 puts(s);
 v0 = local_vars(5);
 printf("MEM-L1-01 (local_vars): %d\n", v0);
 v1 = local_array(2);
 printf("MEM-L1-02 (local_array): %d\n", v1);
 v2 = local_struct(5);
 printf("MEM-L1-03 (local_struct): %d\n", v2);
 v3 = address_of_local(&v10);
 printf("MEM-L1-04 (address_of_local): %d\n", v3);
 v12[0] = 0x200000001LL;
 v12[1] = 3;
 memset(&v12[2], 0, 24);
 v4 = address_of_array(v12);
 printf("MEM-L1-05 (address_of_array): %d\n", v4);
 v5 = large_stack_frame();
 printf("MEM-L2-01 (large_stack_frame): %d\n", v5);
 v6 = vla_stack(10);
 printf("MEM-L2-02 (vla_stack): %d\n", v6);
 v7 = alloca_usage(10);
 printf("MEM-L2-03 (alloca_usage): %d\n", v7);
 v11 = 0;
 v8 = stack_alias(&v11, &v11);
 printf("MEM-L2-04 (stack_alias): %d\n", v8);
 return v13 - __readfsqword(0x28u);
}


/* Function: heap_basic @ 0x191D */
long long heap_basic(int a1)
{
 int i; // [rsp+10h] [rbp-10h]
 unsigned int v3; // [rsp+14h] [rbp-Ch]
 unsigned int *ptr; // [rsp+18h] [rbp-8h]

 ptr = malloc(4LL * a1);
 if ( !ptr )
 return 0xFFFFFFFFLL;
 for ( i = 0; i < a1; ++i )
 ptr[i] = 2 * i;
 v3 = ptr[a1 / 2];
 free(ptr);
 return v3;
}


/* Function: heap_calloc @ 0x19B2 */
long long heap_calloc(int a1)
{
 unsigned int v2; // [rsp+10h] [rbp-10h]
 int i; // [rsp+14h] [rbp-Ch]
 unsigned int *ptr; // [rsp+18h] [rbp-8h]

 ptr = calloc(a1, 4u);
 if ( !ptr )
 return 0xFFFFFFFFLL;
 v2 = 0;
 for ( i = 0; i < a1; ++i )
 v2 += ptr[i];
 free(ptr);
 return v2;
}


/* Function: heap_realloc @ 0x1A2B */
long long heap_realloc()
{
 int v1; // eax
 int i; // [rsp+0h] [rbp-20h]
 int j; // [rsp+4h] [rbp-1Ch]
 int v4; // [rsp+8h] [rbp-18h]
 unsigned int v5; // [rsp+Ch] [rbp-14h]
 unsigned int *ptr; // [rsp+10h] [rbp-10h]
 unsigned int *v7; // [rsp+18h] [rbp-8h]

 ptr = malloc(0x14u);
 if ( !ptr )
 return 0xFFFFFFFFLL;
 for ( i = 0; i <= 4; ++i )
 ptr[i] = i + 1;
 v4 = ptr[2];
 v7 = realloc(ptr, 0x28u);
 if ( v7 )
 {
 for ( j = 5; j <= 9; ++j )
 v7[j] = 10 * j;
 if ( v4 == v7[2] )
 v1 = v7[5];
 else
 v1 = -3;
 v5 = v1;
 free(v7);
 return v5;
 }
 else
 {
 free(ptr);
 return 4294967294LL;
 }
}


/* Function: heap_array @ 0x1B2D */
long long heap_array(int a1)
{
 int i; // [rsp+10h] [rbp-10h]
 unsigned int v3; // [rsp+14h] [rbp-Ch]
 unsigned int *ptr; // [rsp+18h] [rbp-8h]

 ptr = malloc(4LL * a1);
 if ( !ptr )
 return 0xFFFFFFFFLL;
 for ( i = 0; i < a1; ++i )
 ptr[i] = 3 * i;
 v3 = ptr[a1 / 2];
 free(ptr);
 return v3;
}


/* Function: heap_struct @ 0x1BC7 */
long long heap_struct(int a1)
{
 unsigned int v2; // [rsp+14h] [rbp-Ch]
 unsigned int *ptr; // [rsp+18h] [rbp-8h]

 ptr = malloc(8u);
 if ( !ptr )
 return 0xFFFFFFFFLL;
 *ptr = a1;
 ptr[1] = 2 * a1;
 v2 = *ptr + ptr[1];
 free(ptr);
 return v2;
}


/* Function: heap_nested @ 0x1C2B */
long long heap_nested(void **a1)
{
 unsigned long long *v2; // rbx

 *a1 = malloc(0x10u);
 if ( !*a1 )
 return 0xFFFFFFFFLL;
 *(unsigned int *)*a1 = 10;
 v2 = *a1;
 v2[1] = malloc(0x10u);
 if ( *((unsigned long long *)*a1 + 1) )
 {
 **((unsigned int **)*a1 + 1) = 20;
 *(unsigned long long *)(*((unsigned long long *)*a1 + 1) + 8LL) = 0;
 return 0;
 }
 else
 {
 free(*a1);
 return 4294967294LL;
 }
}


/* Function: linked_list_heap @ 0x1CDA */
long long linked_list_heap()
{
 int i; // [rsp+8h] [rbp-38h]
 unsigned int v2; // [rsp+Ch] [rbp-34h]
 unsigned long long *v3; // [rsp+10h] [rbp-30h]
 unsigned long long *v4; // [rsp+18h] [rbp-28h]
 unsigned long long *j; // [rsp+20h] [rbp-20h]
 void *v6; // [rsp+28h] [rbp-18h]
 unsigned long long *v7; // [rsp+30h] [rbp-10h]
 void *ptr; // [rsp+38h] [rbp-8h]

 v3 = 0;
 v4 = 0;
 for ( i = 0; ; ++i )
 {
 if ( i > 4 )
 {
 v2 = 0;
 for ( j = v3; j; j = (unsigned long long *)j[1] )
 v2 += *(unsigned int *)j;
 while ( v3 )
 {
 v6 = v3;
 v3 = (unsigned long long *)v3[1];
 free(v6);
 }
 return v2;
 }
 v7 = malloc(0x10u);
 if ( !v7 )
 break;
 *(unsigned int *)v7 = 10 * i;
 v7[1] = 0;
 if ( v3 )
 v4[1] = v7;
 else
 v3 = v7;
 v4 = v7;
 }
 while ( v3 )
 {
 ptr = v3;
 v3 = (unsigned long long *)v3[1];
 free(ptr);
 }
 return 0xFFFFFFFFLL;
}


/* Function: create_tree_node @ 0x1E00 */
unsigned long long * create_tree_node(int a1)
{
 unsigned long long *v2; // [rsp+18h] [rbp-8h]

 v2 = malloc(0x18u);
 if ( v2 )
 {
 *(unsigned int *)v2 = a1;
 v2[1] = 0;
 v2[2] = 0;
 }
 return v2;
}


/* Function: tree_heap_traversal @ 0x1E4B */
long long tree_heap_traversal()
{
 unsigned int v1; // [rsp+4h] [rbp-Ch]
 void **ptr; // [rsp+8h] [rbp-8h]

 ptr = (void **)create_tree_node(10);
 if ( !ptr )
 return 0xFFFFFFFFLL;
 ptr[1] = create_tree_node(20);
 ptr[2] = create_tree_node(30);
 if ( ptr[1] && ptr[2] )
 {
 v1 = *(unsigned int *)ptr[1] + *(unsigned int *)ptr + *(unsigned int *)ptr[2];
 free(ptr[1]);
 free(ptr[2]);
 free(ptr);
 return v1;
 }
 else
 {
 if ( ptr[1] )
 free(ptr[1]);
 if ( ptr[2] )
 free(ptr[2]);
 free(ptr);
 return 4294967294LL;
 }
}


/* Function: memory_leak @ 0x1F53 */
long long memory_leak(int a1)
{
 int i; // [rsp+14h] [rbp-Ch]
 unsigned int *v3; // [rsp+18h] [rbp-8h]

 v3 = malloc(4LL * a1);
 if ( !v3 )
 return 0xFFFFFFFFLL;
 for ( i = 0; i < a1; ++i )
 v3[i] = i;
 return (unsigned int)v3[a1 / 2];
}


/* Function: dangling_pointer @ 0x1FD4 */
long long dangling_pointer()
{
 unsigned int *ptr; // [rsp+8h] [rbp-8h]

 ptr = (unsigned int *)malloc(4u);
 if ( !ptr )
 return 0xFFFFFFFFLL;
 *ptr = 42;
 printf("value before free: %d\n", *ptr);
 free(ptr);
 return *ptr;
}


/* Function: double_free @ 0x2042 */
long long double_free(unsigned int *a1)
{
 unsigned int *ptr; // [rsp+18h] [rbp-8h]

 if ( a1 )
 return *a1;
 ptr = malloc(4u);
 if ( !ptr )
 return 0xFFFFFFFFLL;
 *ptr = 10;
 free(ptr);
 free(ptr);
 return 4294967294LL;
}


/* Function: heap_overflow @ 0x20A6 */
long long heap_overflow()
{
 int i; // [rsp+0h] [rbp-10h]
 unsigned int v2; // [rsp+4h] [rbp-Ch]
 unsigned int *ptr; // [rsp+8h] [rbp-8h]

 ptr = (unsigned int *)malloc(0x28u);
 if ( !ptr )
 return 0xFFFFFFFFLL;
 for ( i = 0; i <= 10; ++i )
 ptr[i] = 100 * i;
 v2 = *ptr;
 free(ptr);
 return v2;
}


/* Function: test_heap_memory @ 0x2117 */
unsigned long long test_heap_memory()
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
 int stat_loc; // [rsp+4h] [rbp-1Ch] BYREF
 __pid_t pid; // [rsp+8h] [rbp-18h]
 unsigned int v12; // [rsp+Ch] [rbp-14h]
 void *ptr; // [rsp+10h] [rbp-10h] BYREF
 unsigned long long v14; // [rsp+18h] [rbp-8h]

 v14 = __readfsqword(0x28u);
 puts(asc_3160);
 v0 = heap_basic(10);
 printf("HEAP-L2-01 (heap_basic): %d\n", v0);
 v1 = heap_calloc(5);
 printf("HEAP-L2-02 (heap_calloc): %d\n", v1);
 v2 = heap_realloc();
 printf("HEAP-L2-03 (heap_realloc): %d\n", v2);
 v3 = heap_array(10);
 printf("HEAP-L2-04 (heap_array): %d\n", v3);
 v4 = heap_struct(5);
 printf("HEAP-L2-05 (heap_struct): %d\n", v4);
 ptr = 0;
 v5 = heap_nested(&ptr);
 printf("HEAP-L2-06 (heap_nested): %d\n", v5);
 if ( ptr )
 {
 free(*((void **)ptr + 1));
 free(ptr);
 }
 v6 = linked_list_heap();
 printf("HEAP-L3-01 (linked_list_heap): %d\n", v6);
 v7 = tree_heap_traversal();
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n", v7);
 v8 = memory_leak(5);
 printf("HEAP-L3-03 (memory_leak): %d\n", v8);
 printf("HEAP-L3-04 (dangling_pointer): ");
 pid = fork();
 if ( !pid )
 {
 v12 = dangling_pointer();
 printf(aD, v12);
 exit(0);
 }
 if ( pid <= 0 )
 {
 perror(aFork_0);
 }
 else
 {
 waitpid(pid, &stat_loc, 0);
 if ( (stat_loc & 0x7F) != 0 )
 {
 if ( (char)((stat_loc & 0x7F) + 1) >> 1 > 0 )
 printf(&byte_3300, stat_loc & 0x7F);
 }
 else
 {
 printf(&byte_32D8, BYTE1(stat_loc));
 }
 }
 return v14 - __readfsqword(0x28u);
}


/* Function: global_var_access @ 0x237C */
long long global_var_access()
{
 return (unsigned int)++global_counter;
}


/* Function: global_var_read @ 0x239B */
long long global_var_read()
{
 return (unsigned int)(2 * global_counter);
}


/* Function: global_array_access @ 0x23AD */
long long global_array_access(unsigned int a1)
{
 if ( a1 < 0xA )
 return global_array[a1];
 else
 return 0xFFFFFFFFLL;
}


/* Function: static_local @ 0x23E4 */
long long static_local(int a1)
{
 if ( a1 )
 {
 counter_1 = 0;
 return 0;
 }
 else
 {
 return (unsigned int)++counter_1;
 }
}


/* Function: static_helper @ 0x241D */
long long static_helper(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: call_static_func @ 0x242F */
long long call_static_func(int a1)
{
 return (unsigned int)static_helper(a1) + 1;
}


/* Function: access_extern_global @ 0x244D */
long long access_extern_global()
{
 return (unsigned int)(extern_global_var + 100);
}

/* Function: call_extern_func @ 0x2460 */
long long call_extern_func()
{
 return extern_function(5);
}


/* Function: read_const_data @ 0x2474 */
long long read_const_data()
{
 return (unsigned int)(const_string[4] + 42);
}


/* Function: access_bss_var @ 0x2496 */
long long access_bss_var()
{
 return (unsigned int)bss_var;
}


/* Function: access_bss_buffer @ 0x24A6 */
long long access_bss_buffer()
{
 return (unsigned int)bss_buffer;
}


/* Function: global_struct_access @ 0x24BA */
long long global_struct_access()
{
 return (unsigned int)(global_point + dword_604C);
}


/* Function: set_file_static @ 0x24D2 */
long long set_file_static(unsigned int a1)
{
 long long result; // rax

 result = a1;
 file_scope_static = a1;
 return result;
}


/* Function: get_file_static @ 0x24E9 */
long long get_file_static()
{
 return (unsigned int)file_scope_static;
}


/* Function: set_global_callback @ 0x24F9 */
long long set_global_callback(long long a1)
{
 long long result; // rax

 result = a1;
 global_func_ptr = a1;
 return result;
}


/* Function: call_global_callback @ 0x2513 */
long long call_global_callback(unsigned int a1)
{
 if ( global_func_ptr )
 return global_func_ptr(a1);
 else
 return 0xFFFFFFFFLL;
}


/* Function: global_heap_store @ 0x2545 */
long long global_heap_store(long long a1)
{
 global_heap_ptr = a1;
 if ( a1 )
 return *(unsigned int *)global_heap_ptr;
 else
 return 0xFFFFFFFFLL;
}


/* Function: static_complex_init @ 0x257A */
long long static_complex_init()
{
 return (unsigned int)(dword_6068 + complex_init + dword_6070);
}


/* Function: tls_access @ 0x259A */
long long tls_access(unsigned int a1)
{
 __writefsdword(0xFFFFFFFC, a1);
 return 2 * __readfsdword(0xFFFFFFFC);
}


/* Function: init_depends_on @ 0x25BC */
long long init_depends_on(int *a1)
{
 if ( a1 )
 static_depends_0 = *a1;
 return (unsigned int)static_depends_0;
}


/* Function: init_order_test @ 0x25E3 */
long long init_order_test()
{
 int v1; // [rsp+4h] [rbp-Ch] BYREF
 unsigned long long v2; // [rsp+8h] [rbp-8h]

 v2 = __readfsqword(0x28u);
 v1 = 20;
 return init_depends_on(&v1);
}


/* Function: test_static_global @ 0x2627 */
unsigned long long test_static_global()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax
 int const_data; // eax
 int v9; // eax
 int v10; // eax
 int v11; // eax
 int file_static; // eax
 int v13; // eax
 int v14; // eax
 int v15; // eax
 int v16; // eax
 int inited; // eax
 int v19; // [rsp+4h] [rbp-Ch] BYREF
 unsigned long long v20; // [rsp+8h] [rbp-8h]

 v20 = __readfsqword(0x28u);
 puts(asc_3360);
 v0 = global_var_access();
 printf("STM-L1-01 (global_var_access): %d\n", v0);
 v1 = global_var_read();
 printf("STM-L1-01 (global_var_read): %d\n", v1);
 v2 = global_array_access(5u);
 printf("STM-L1-02 (global_array_access): %d\n", v2);
 static_local(1);
 v3 = static_local(0);
 printf("STM-L1-03 (static_local): %d\n", v3);
 v4 = static_local(0);
 printf("STM-L1-03 (static_local): %d\n", v4);
 v5 = call_static_func(5);
 printf("STM-L1-04 (call_static_func): %d\n", v5);
 v6 = access_extern_global();
 printf("STM-L2-01 (access_extern_global): %d\n", v6);
 v7 = call_extern_func();
 printf("STM-L2-02 (call_extern_func): %d\n", v7);
 const_data = read_const_data();
 printf("STM-L2-03 (read_const_data): %d\n", const_data);
 v9 = access_bss_var();
 printf("STM-L2-04 (access_bss_var): %d\n", v9);
 v10 = access_bss_buffer();
 printf("STM-L2-04 (access_bss_buffer): %d\n", v10);
 v11 = global_struct_access();
 printf("STM-L2-05 (global_struct_access): %d\n", v11);
 set_file_static(0x32u);
 file_static = get_file_static();
 printf("STM-L2-06 (file_static): %d\n", file_static);
 set_global_callback((long long)double_value);
 v13 = call_global_callback(5u);
 printf("STM-L2-07 (global_func_ptr): %d\n", v13);
 v19 = 100;
 v14 = global_heap_store((long long)&v19);
 printf("STM-L2-08 (global_heap_store): %d\n", v14);
 v15 = static_complex_init();
 printf("STM-L2-09 (static_complex_init): %d\n", v15);
 v16 = tls_access(0xAu);
 printf("STM-L3-01 (tls_access): %d\n", v16);
 inited = init_order_test();
 printf("STM-L3-02 (init_order_test): %d\n", inited);
 return v20 - __readfsqword(0x28u);
}


/* Function: memop_memset @ 0x28D4 */
long long memop_memset(unsigned char *a1, size_t a2, int a3)
{
 if ( !a1 || !a2 )
 return 0xFFFFFFFFLL;
 memset(a1, a3, a2);
 return *a1;
}


/* Function: memop_memcpy @ 0x2921 */
long long memop_memcpy(char *a1, const void *a2, size_t a3)
{
 if ( !a1 || !a2 || !a3 )
 return 0xFFFFFFFFLL;
 memcpy(a1, a2, a3);
 return *(unsigned int *)&a1[(a3 & 0xFFFFFFFFFFFFFFFCLL) - 4];
}


/* Function: memop_memmove @ 0x2983 */
long long memop_memmove(long long a1, unsigned long long a2)
{
 if ( !a1 || a2 <= 1 )
 return 0xFFFFFFFFLL;
 memmove((void *)(a1 + 1), (const void *)a1, a2 - 1);
 return (unsigned int)*(char *)(a1 + 1);
}


/* Function: memop_memcmp @ 0x29DB */
long long memop_memcmp(const void *a1, const void *a2, size_t a3)
{
 int v4; // [rsp+2Ch] [rbp-4h]

 if ( !a1 || !a2 || !a3 )
 return 0;
 v4 = memcmp(a1, a2, a3);
 if ( v4 > 0 )
 return 1;
 if ( v4 >= 0 )
 return 0;
 return 0xFFFFFFFFLL;
}


/* Function: memop_bzero @ 0x2A4A */
long long memop_bzero(unsigned char *a1, size_t a2)
{
 if ( !a1 )
 return 0xFFFFFFFFLL;
 memset(a1, 0, a2);
 return *a1;
}


/* Function: memop_bcopy @ 0x2A93 */
long long memop_bcopy(const void *a1, unsigned char *a2, size_t a3)
{
 if ( !a1 || !a2 || !a3 )
 return 0xFFFFFFFFLL;
 memmove(a2, a1, a3);
 return *a2;
}


/* Function: memop_unaligned_access @ 0x2AEA */
long long memop_unaligned_access(long long a1)
{
 if ( a1 )
 return *(unsigned int *)(a1 + 1);
 else
 return 0xFFFFFFFFLL;
}


/* Function: memop_memory_barrier @ 0x2B3D */
long long memop_memory_barrier(int *a1)
{
 int v2; // [rsp+14h] [rbp-4h]
 signed long long vars0; // [rsp+18h] [rbp+0h] BYREF

 if ( !a1 )
 return 0xFFFFFFFFLL;
 v2 = *a1;
 _InterlockedOr64(&vars0, 0);
 return (unsigned int)(*a1 + v2);
}


/* Function: test_memory_op_functions @ 0x2B73 */
unsigned long long test_memory_op_functions()
{
 int v0; // eax
 int v1; // eax
 unsigned int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax
 int v9; // [rsp+4h] [rbp-18Ch] BYREF
 unsigned int v10[3]; // [rsp+8h] [rbp-188h] BYREF
 unsigned int v11[3]; // [rsp+14h] [rbp-17Ch] BYREF
 unsigned int v12[8]; // [rsp+20h] [rbp-170h] BYREF
 unsigned long long v13[2]; // [rsp+40h] [rbp-150h] BYREF
 int v14; // [rsp+50h] [rbp-140h]
 int v15; // [rsp+5Bh] [rbp-135h] BYREF
 int v16; // [rsp+5Fh] [rbp-131h] BYREF
 long long v17; // [rsp+63h] [rbp-12Dh] BYREF
 unsigned char v18[10]; // [rsp+6Bh] [rbp-125h] BYREF
 char v19[275]; // [rsp+75h] [rbp-11Bh] BYREF
 unsigned long long v20; // [rsp+188h] [rbp-8h]

 v20 = __readfsqword(0x28u);
 puts(asc_3610);
 v12[0] = 10;
 v12[1] = 20;
 v12[2] = 30;
 v12[3] = 40;
 v12[4] = 50;
 v13[0] = 0;
 v13[1] = 0;
 v14 = 0;
 v0 = memop_memset((unsigned char *)&v19[11], 0xAu, 65);
 printf("MEMOP-L2-01: %d\n", v0);
 v1 = memop_memcpy((char *)v13, v12, 0x14u);
 printf("MEMOP-L2-02: %d\n", v1);
 strcpy(v19, "HelloWorld");
 v2 = memop_memmove((long long)v19, 0xAu);
 printf("MEMOP-L2-03: %c\n", v2);
 v10[0] = 1;
 v10[1] = 2;
 v10[2] = 3;
 v11[0] = 1;
 v11[1] = 2;
 v11[2] = 4;
 v3 = memop_memcmp(v10, v11, 0xCu);
 printf("MEMOP-L2-04: %d\n", v3);
 v4 = memop_bzero(v18, 0xAu);
 printf("MEMOP-L2-05: %d\n", v4);
 v15 = 67305985;
 v16 = 0;
 v5 = memop_bcopy(&v15, (unsigned char *)&v16, 4u);
 printf("MEMOP-L2-06: %d\n", v5);
 v17 = 0x706050403020100LL;
 v6 = memop_unaligned_access((long long)&v17);
 printf("MEMOP-L3-01: 0x%x\n", v6);
 v9 = 5;
 v7 = memop_memory_barrier(&v9);
 printf("MEMOP-L3-02: %d\n", v7);
 return v20 - __readfsqword(0x28u);
}


/* Function: main @ 0x2DFE */
int main(int argc, const char **argv, const char **envp)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}





/* Function: .term_proc @ 0x2E4C */
void term_proc()
{
 ;
}


/* FAILED to decompile: free @ 0x6178 */

/* FAILED to decompile: __libc_start_main @ 0x6180 */

/* FAILED to decompile: puts @ 0x6188 */

/* FAILED to decompile: __stack_chk_fail @ 0x6190 */

/* FAILED to decompile: printf @ 0x6198 */

/* FAILED to decompile: memset @ 0x61A0 */

/* FAILED to decompile: memcmp @ 0x61A8 */

/* FAILED to decompile: calloc @ 0x61B0 */

/* FAILED to decompile: memcpy @ 0x61B8 */

/* FAILED to decompile: malloc @ 0x61C0 */

/* FAILED to decompile: realloc @ 0x61C8 */

/* FAILED to decompile: memmove @ 0x61D0 */

/* FAILED to decompile: waitpid @ 0x61D8 */

/* FAILED to decompile: perror @ 0x61E0 */

/* FAILED to decompile: exit @ 0x61E8 */

/* FAILED to decompile: fork @ 0x61F0 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x61F8 */

/* FAILED to decompile: __gmon_start__ @ 0x6208 */

/* Total functions decompiled: 81, failed: 18 */
