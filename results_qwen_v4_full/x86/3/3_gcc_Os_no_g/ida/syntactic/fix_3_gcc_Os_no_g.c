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
typedef int bool;
typedef void _UNKNOWN;
typedef struct { int d_tag; union { int d_val; void *d_ptr; } d_un; } Elf32_Dyn;

/* Macros for accessing low/high parts of 64-bit values */
#define LODWORD(x) (*(int*)&(x))
#define HIDWORD(x) (*(((int*)&(x))+1))
#define BYTE1(x) (((x) >> 8) & 0xFF)
#define LOBYTE(x) (*(unsigned char*)&(x))

/* Global variable declarations */
int global_counter;
int counter_1;
unsigned int global_array[10];
int extern_global_var;
int global_func_ptr;
int file_scope_static;
unsigned char const_string[100];
Elf32_Dyn *GLOBAL_OFFSET_TABLE_;
char *asc_3008;
char *asc_3151;
char *unk_32A9;
char *aFork_0;
char *unk_32B9;
char *unk_32DE;
char *asc_332A;
char *asc_358C;

/* External function declarations */
extern int extern_function(int a1);

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/3/3_gcc_Os_no_g
 * Processor: pc
 */

/* CRT stub functions */
void frame_dummy() { }
int _do_global_ctors_aux() { return 0; }
void _do_global_dtors_aux() { }

/* Stub functions for undefined references */
unsigned int __readgsdword(unsigned int offset) { return 0; }
int _InterlockedOr(int *ptr, int value) { return *ptr | value; }

/* Function: .init_proc @ 0x1000 */
int init_proc()
{
 frame_dummy();
 return _do_global_ctors_aux();
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
 sub_1030();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
 sub_1030();
}


/* Function: sub_1060 @ 0x1060 */
void sub_1060()
{
 sub_1030();
}


/* Function: sub_1070 @ 0x1070 */
void sub_1070()
{
 sub_1030();
}


/* Function: sub_1080 @ 0x1080 */
void sub_1080()
{
 sub_1030();
}


/* Function: sub_1090 @ 0x1090 */
void sub_1090()
{
 sub_1030();
}


/* Function: sub_10A0 @ 0x10A0 */
void sub_10A0()
{
 sub_1030();
}


/* Function: sub_10B0 @ 0x10B0 */
void sub_10B0()
{
 sub_1030();
}


/* Function: sub_10C0 @ 0x10C0 */
void sub_10C0()
{
 sub_1030();
}


/* Function: sub_10D0 @ 0x10D0 */
void sub_10D0()
{
 sub_1030();
}


/* Function: sub_10E0 @ 0x10E0 */
void sub_10E0()
{
 sub_1030();
}


/* Function: sub_10F0 @ 0x10F0 */
void sub_10F0()
{
 sub_1030();
}


/* Function: sub_1100 @ 0x1100 */
void sub_1100()
{
 sub_1030();
}


/* Function: sub_1110 @ 0x1110 */
void sub_1110()
{
 sub_1030();
}


/* Function: sub_1120 @ 0x1120 */
int sub_1120(int a1)
{
 return (*(int (**)(void))(a1 + 72))();
}


/* Function: main @ 0x1210 */
int main(int argc, const char **argv, const char **envp)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_126C @ 0x126C */
void sub_126C()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1270 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x13A9 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x13AD */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: double_value @ 0x13B1 */
int double_value(int a1)
{
 return 2 * a1;
}


/* Function: local_vars @ 0x13BF */
int local_vars(int a1)
{
 return 2 * a1 + 10;
}


/* Function: local_array @ 0x13D0 */
long long local_array(int a1)
{
 int v1; // edx
 int i; // eax
 long long result; // rax
 unsigned int v4[10]; // [esp+4h] [ebp-34h]
 unsigned int v5; // [esp+2Ch] [ebp-Ch]

 v1 = 0;
 v5 = __readgsdword(0x14u);
 for ( i = 0; i != 10; ++i )
 {
 v4[i] = v1;
 v1 += a1;
 }
 LODWORD(result) = v4[5];
 HIDWORD(result) = v5 - __readgsdword(0x14u);
 return result;
}


/* Function: local_struct @ 0x140A */
int local_struct(int a1)
{
 return 3 * a1;
}


/* Function: address_of_local @ 0x1417 */
int address_of_local(unsigned int *a1)
{
 *a1 = 42;
 return 42;
}


/* Function: address_of_array @ 0x142E */
int address_of_array(unsigned int *a1)
{
 return 2 * *a1;
}


/* Function: large_stack_frame @ 0x143E */
long long large_stack_frame()
{
 int i; // eax
 long long result; // rax
 unsigned char v2[2048]; // [esp+Ch] [ebp-80Ch]
 unsigned int v3; // [esp+80Ch] [ebp-Ch]

 v3 = __readgsdword(0x14u);
 for ( i = 0; i != 2048; ++i )
 v2[i] = i;
 LODWORD(result) = v2[1024];
 HIDWORD(result) = v3 - __readgsdword(0x14u);
 return result;
}


/* Function: vla_stack @ 0x147F */
int vla_stack(int a1)
{
 int v1; // edx
 int v2; // edx
 unsigned int v3; // ecx
 short v4; // dx
 int v5; // edx
 void *v6; // esp
 int v7; // edx
 unsigned char v9[4]; // [esp-4h] [ebp-1Ch]
 unsigned int v10[5]; // [esp+0h] [ebp-18h] BYREF

 v10[3] = __readgsdword(0x14u);
 v1 = -1;
 if ( (unsigned int)(a1 - 1) <= 0x3E7 )
 {
 v2 = 4 * a1 + 15;
 v3 = v2 & 0xFFFFF000;
 v4 = v2 & 0xFFF0;
 while ( v10 != (unsigned int *)((char *)v10 - v3) )
 ;
 v5 = v4 & 0xFFF;
 v6 = alloca(v5);
 if ( v5 )
 *(unsigned int *)&v9[v5] = *(unsigned int *)&v9[v5];
 v7 = 0;
 do
 {
 v10[v7] = 2 * v7;
 ++v7;
 }
 while ( a1 != v7 );
 return v10[a1 >> 1];
 }
 return v1;
}


/* Function: alloca_usage @ 0x150E */
int alloca_usage(int a1)
{
 int v1; // edx
 int v2; // edx
 unsigned int v3; // ecx
 short v4; // dx
 int v5; // edx
 void *v6; // esp
 int i; // edx
 unsigned char v9[4]; // [esp-4h] [ebp-1Ch]
 unsigned int v10[5]; // [esp+0h] [ebp-18h] BYREF

 v10[3] = __readgsdword(0x14u);
 v1 = -1;
 if ( a1 > 0 )
 {
 v2 = 4 * a1 + 27;
 v3 = v2 & 0xFFFFF000;
 v4 = v2 & 0xFFF0;
 while ( v10 != (unsigned int *)((char *)v10 - v3) )
 ;
 v5 = v4 & 0xFFF;
 v6 = alloca(v5);
 if ( v5 )
 *(unsigned int *)&v9[v5] = *(unsigned int *)&v9[v5];
 for ( i = 0; i != a1; ++i )
 v10[i] = 3 * i;
 return v10[a1 >> 1];
 }
 return v1;
}


/* Function: stack_alias @ 0x159B */
int stack_alias()
{
 return 20;
}


/* Function: test_stack_memory @ 0x15A5 */
int test_stack_memory()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax

 puts(asc_3008);
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
 return __printf_chk(1, "MEM-L2-04 (stack_alias): %d\n", 20);
}


/* Function: heap_basic @ 0x169F */
int heap_basic(int a1)
{
 unsigned int *v1; // ecx
 int v2; // eax
 int v4; // [esp+0h] [ebp-1Ch]

 v1 = malloc(4 * a1);
 v2 = 0;
 if ( !v1 )
 return -1;
 while ( v2 < a1 )
 {
 v1[v2] = 2 * v2;
 ++v2;
 }
 v4 = v1[a1 / 2];
 free(v1);
 return v4;
}


/* Function: heap_calloc @ 0x170B */
int heap_calloc(signed int nmemb)
{
 int v1; // edi
 unsigned int *v2; // eax
 signed int v3; // edx

 v1 = -1;
 v2 = calloc(nmemb, 4u);
 if ( v2 )
 {
 v3 = 0;
 v1 = 0;
 while ( v3 < nmemb )
 v1 += v2[v3++];
 free(v2);
 }
 return v1;
}


/* Function: heap_realloc @ 0x175C */
int heap_realloc()
{
 unsigned int *v0; // esi
 int result; // eax
 void *v2; // eax
 void *v3; // ecx
 int v4; // zf
 int v5; // eax
 int v6; // [esp+0h] [ebp-Ch]

 v0 = malloc(0x14u);
 result = -1;
 if ( v0 )
 {
 *v0 = 1;
 v0[1] = 2;
 v0[2] = 3;
 v0[3] = 4;
 v0[4] = 5;
 v2 = realloc(v0, 0x28u);
 v3 = v2;
 if ( v2 )
 {
 v4 = *((unsigned int *)v2 + 2) == 3;
 v5 = -3;
 if ( v4 )
 v5 = 50;
 v6 = v5;
 free(v3);
 return v6;
 }
 else
 {
 free(v0);
 return -2;
 }
 }
 return result;
}


/* Function: heap_array @ 0x17F8 */
int heap_array(int a1)
{
 unsigned int *v1; // ecx
 int v2; // eax
 int v4; // [esp+0h] [ebp-1Ch]

 v1 = malloc(4 * a1);
 v2 = 0;
 if ( !v1 )
 return -1;
 while ( v2 < a1 )
 {
 v1[v2] = 3 * v2;
 ++v2;
 }
 v4 = v1[a1 / 2];
 free(v1);
 return v4;
}


/* Function: heap_struct @ 0x1864 */
int heap_struct(int a1)
{
 int v1; // esi
 void *v2; // eax

 v1 = -1;
 v2 = malloc(8u);
 if ( v2 )
 {
 v1 = 3 * a1;
 free(v2);
 }
 return v1;
}


/* Function: heap_nested @ 0x18A5 */
int heap_nested(unsigned int *a1)
{
 unsigned int *v1; // esi
 int result; // eax
 unsigned int *v3; // eax

 v1 = malloc(8u);
 *a1 = v1;
 result = -1;
 if ( v1 )
 {
 *v1 = 10;
 v3 = malloc(8u);
 v1[1] = v3;
 if ( v3 )
 {
 *v3 = 20;
 v3[1] = 0;
 return 0;
 }
 else
 {
 free(v1);
 return -2;
 }
 }
 return result;
}


/* Function: linked_list_heap @ 0x1917 */
int linked_list_heap()
{
 unsigned int *v0; // eax
 int v1; // edi
 unsigned int *v2; // esi
 int result; // eax
 unsigned int *v4; // edx
 void *v5; // edx
 void *v6; // [esp-1Ch] [ebp-38h]
 unsigned int *v7; // [esp+0h] [ebp-1Ch]
 int v8; // [esp+0h] [ebp-1Ch]

 v0 = 0;
 v1 = 0;
 v2 = 0;
 while ( 1 )
 {
 v7 = v0;
 v0 = malloc(8u);
 if ( !v0 )
 break;
 *v0 = v1;
 v0[1] = 0;
 if ( v2 )
 v7[1] = v0;
 else
 v2 = v0;
 v1 += 10;
 if ( v1 == 50 )
 {
 v4 = v2;
 result = 0;
 do
 {
 result += *v4;
 v4 = (unsigned int *)v4[1];
 }
 while ( v4 );
 do
 {
 v5 = v2;
 v2 = (unsigned int *)v2[1];
 v8 = result;
 free(v5);
 result = v8;
 }
 while ( v2 );
 return result;
 }
 }
 while ( v2 )
 {
 v6 = v2;
 v2 = (unsigned int *)v2[1];
 free(v6);
 }
 return -1;
}


/* Function: create_tree_node @ 0x19B4 */
unsigned int * create_tree_node(int a1)
{
 unsigned int *result; // eax

 result = malloc(0xCu);
 if ( result )
 {
 result[1] = 0;
 result[2] = 0;
 *result = a1;
 }
 return result;
}


/* Function: tree_heap_traversal @ 0x19F0 */
int tree_heap_traversal()
{
 unsigned int **tree_node; // esi
 int result; // eax
 unsigned int *v2; // eax
 unsigned int *v3; // edx
 int v4; // [esp+0h] [ebp-Ch]

 tree_node = create_tree_node(10);
 result = -1;
 if ( tree_node )
 {
 tree_node[1] = create_tree_node(20);
 v2 = create_tree_node(30);
 v3 = tree_node[1];
 tree_node[2] = v2;
 if ( v3 )
 {
 if ( v2 )
 {
 v4 = (int)*tree_node + *v3 + *v2;
 free(v3);
 free(tree_node[2]);
 free(tree_node);
 return v4;
 }
 free(v3);
 }
 if ( tree_node[2] )
 free(tree_node[2]);
 free(tree_node);
 return -2;
 }
 return result;
}


/* Function: memory_leak @ 0x1AAC */
int memory_leak(int a1)
{
 unsigned int *v1; // ecx
 int v2; // eax

 v1 = malloc(4 * a1);
 v2 = 0;
 if ( !v1 )
 return -1;
 while ( v2 < a1 )
 {
 v1[v2] = v2;
 ++v2;
 }
 return v1[a1 / 2];
}


/* Function: dangling_pointer @ 0x1B01 */
int dangling_pointer()
{
 void *v0; // esi
 int result; // eax

 v0 = malloc(4u);
 result = -1;
 if ( v0 )
 {
 __printf_chk(1, "value before free: %d\n", 42);
 free(v0);
 return *(unsigned int *)v0;
 }
 return result;
}


/* Function: double_free @ 0x1B50 */
int double_free(int a1)
{
 void *v1; // esi
 int result; // eax

 if ( a1 )
 return *(unsigned int *)a1;
 v1 = malloc(4u);
 result = -1;
 if ( v1 )
 {
 free(v1);
 free(v1);
 return -2;
 }
 return result;
}


/* Function: heap_overflow @ 0x1BA5 */
int heap_overflow()
{
 int v0; // esi
 int *v1; // eax
 int i; // edx

 v0 = -1;
 v1 = (int *)malloc(0x28u);
 if ( v1 )
 {
 for ( i = 0; i != 11; ++i )
 v1[i] = 100 * i;
 v0 = *v1;
 free(v1);
 }
 return v0;
}


/* Function: test_heap_memory @ 0x1BF2 */
int test_heap_memory()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // ecx
 int v8; // eax
 int v9; // eax
 int v10; // eax
 int v11; // ecx
 int v12; // eax
 int v13; // edx
 int v14; // edx
 void *v15; // eax
 int v16; // eax
 void *ptr; // [esp+0h] [ebp-14h] BYREF
 int stat_loc; // [esp+4h] [ebp-10h] BYREF
 int v20; // [esp+8h] [ebp-Ch]
 int v21; // [esp+Ch] [ebp-8h]
 unsigned int v19; // [esp+10h] [ebp-4h]

 v19 = __readgsdword(0x14u);
 puts(asc_3151);
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
 v5 = heap_nested(&ptr);
 __printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", v5);
 if ( ptr )
 {
 free(*((void **)ptr + 1));
 free(ptr);
 }
 v6 = linked_list_heap();
 __printf_chk(1, "HEAP-L3-01 (linked_list_heap): %d\n", v6);
 v8 = tree_heap_traversal();
 __printf_chk(1, "HEAP-L3-02 (tree_heap_traversal): %d\n", v8);
 v9 = memory_leak(5);
 __printf_chk(1, "HEAP-L3-03 (memory_leak): %d\n", v9);
 __printf_chk(1, "HEAP-L3-04 (dangling_pointer): ", v20);
 v10 = fork();
 if ( !v10 )
 {
 v12 = dangling_pointer();
 __printf_chk(1, &unk_32A9, v12);
 exit(0);
 }
 if ( v10 <= 0 )
 {
 perror(aFork_0);
 return v19 - __readgsdword(0x14u);
 }
 waitpid(v10, &stat_loc, 0);
 v14 = stat_loc & 0x7F;
 if ( (stat_loc & 0x7F) == 0 )
 {
 v20 = BYTE1(stat_loc);
 v15 = &unk_32B9;
LABEL_10:
 __printf_chk(1, v15, v20);
 return v19 - __readgsdword(0x14u);
 }
 v16 = v14 + 1;
 if ( (char)(v14 + 1) > 1 )
 {
 LOBYTE(v16) = stat_loc & 0x7F;
 v15 = &unk_32DE;
 v20 = stat_loc & 0x7F;
 goto LABEL_10;
 }
 return v19 - __readgsdword(0x14u);
}


/* Function: global_var_access @ 0x1DE4 */
int global_var_access()
{
 return ++global_counter;
}


/* Function: global_var_read @ 0x1E01 */
int global_var_read()
{
 return 2 * global_counter;
}


/* Function: global_array_access @ 0x1E18 */
int global_array_access(unsigned int a1)
{
 int result; // eax

 result = -1;
 if ( a1 <= 9 )
 return global_array[a1];
 return result;
}


/* Function: static_local @ 0x1E3E */
int static_local(int a1)
{
 int result; // eax

 result = 0;
 if ( !a1 )
 result = counter_1 + 1;
 counter_1 = result;
 return result;
}


/* Function: call_static_func @ 0x1E67 */
int call_static_func(int a1)
{
 return 2 * a1 + 1;
}


/* Function: access_extern_global @ 0x1E76 */
int access_extern_global()
{
 return extern_global_var + 100;
}


/* Function: call_extern_func @ 0x1E90 */
int call_extern_func()
{
 return extern_function(5);
}


/* Function: read_const_data @ 0x1EB2 */
int read_const_data()
{
 return const_string[4] + 42;
}


/* Function: access_bss_var @ 0x1ECE */
int access_bss_var()
{
 return 0;
}


/* Function: access_bss_buffer @ 0x1ED5 */
int access_bss_buffer()
{
 return 0;
}


/* Function: global_struct_access @ 0x1EDC */
int global_struct_access()
{
 return 30;
}


/* Function: set_file_static @ 0x1EE6 */
Elf32_Dyn ** set_file_static(int a1)
{
 Elf32_Dyn **result; // eax

 result = &GLOBAL_OFFSET_TABLE_;
 file_scope_static = a1;
 return result;
}


/* Function: get_file_static @ 0x1F02 */
int get_file_static()
{
 return file_scope_static;
}


/* Function: set_global_callback @ 0x1F17 */
Elf32_Dyn ** set_global_callback(int a1)
{
 Elf32_Dyn **result; // eax

 result = &GLOBAL_OFFSET_TABLE_;
 global_func_ptr = a1;
 return result;
}


/* Function: call_global_callback @ 0x1F33 */
int call_global_callback()
{
 if ( global_func_ptr )
 return ((int (*)(void))global_func_ptr)();
 else
 return -1;
}


/* Function: global_heap_store @ 0x1F5C */
int global_heap_store(int a1)
{
 int result; // eax

 result = -1;
 if ( a1 )
 return *(unsigned int *)a1;
 return result;
}


/* Function: static_complex_init @ 0x1F71 */
int static_complex_init()
{
 return 15;
}


/* Function: tls_access @ 0x1F7B */
int tls_access(int a1)
{
 return 2 * a1;
}


/* Function: init_order_test @ 0x1F89 */
int init_order_test()
{
 return 20;
}


/* Function: test_static_global @ 0x1F93 */
int test_static_global()
{
 int v0; // eax
 int v1; // eax
 int const_data; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax

 puts(asc_332A);
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
 global_func_ptr = (int)double_value;
 v4 = call_global_callback();
 __printf_chk(1, "STM-L2-07 (global_func_ptr): %d\n", v4);
 __printf_chk(1, "STM-L2-08 (global_heap_store): %d\n", 100);
 v5 = static_complex_init();
 __printf_chk(1, "STM-L2-09 (static_complex_init): %d\n", v5);
 __printf_chk(1, "STM-L3-01 (tls_access): %d\n", 20);
 return __printf_chk(1, "STM-L3-02 (init_order_test): %d\n", 20);
}


/* Function: memop_memset @ 0x216C */
int memop_memset(unsigned char *a1, unsigned int a2, char a3)
{
 if ( !a1 || !a2 )
 return -1;
 memset(a1, a3, a2);
 return *a1;
}


/* Function: memop_memcpy @ 0x2194 */
int memop_memcpy(char *a1, const void *a2, unsigned int a3)
{
 if ( a2 == 0 || a3 == 0 || !a1 )
 return -1;
 memcpy(a1, a2, a3);
 return *(unsigned int *)&a1[(a3 & 0xFFFFFFFC) - 4];
}


/* Function: memop_memmove @ 0x21D0 */
int memop_memmove(char *src, unsigned int a2)
{
 if ( !src || a2 <= 1 )
 return -1;
 memmove(src + 1, src, a2 - 1);
 return src[1];
}


/* Function: memop_memcmp @ 0x2213 */
int memop_memcmp(void *s1, void *s2, size_t n)
{
 int v3; // edx
 int result; // eax

 if ( s2 == 0 || n == 0 || !s1 )
 return 0;
 v3 = memcmp(s1, s2, n);
 result = 1;
 if ( v3 <= 0 )
 return -(v3 != 0);
 return result;
}


/* Function: memop_bzero @ 0x2271 */
int memop_bzero(unsigned char *a1, unsigned int a2)
{
 int result; // eax

 result = -1;
 if ( a1 )
 {
 memset(a1, 0, a2);
 return *a1;
 }
 return result;
}


/* Function: memop_bcopy @ 0x2292 */
int memop_bcopy(void *src, unsigned char *dest, size_t n)
{
 if ( dest == 0 || n == 0 || !src )
 return -1;
 memmove(dest, src, n);
 return *dest;
}


/* Function: memop_unaligned_access @ 0x22E1 */
int memop_unaligned_access(int a1)
{
 int result; // eax

 result = -1;
 if ( a1 )
 return *(unsigned int *)(a1 + 1);
 return result;
}


/* Function: memop_memory_barrier @ 0x22F7 */
int memop_memory_barrier(int *a1)
{
 int result; // eax
 int v2; // ecx
 signed int savedregs; // [esp+0h] [ebp+0h] BYREF

 result = -1;
 if ( a1 )
 {
 v2 = *a1;
 _InterlockedOr(&savedregs, 0);
 return v2 + *a1;
 }
 return result;
}


/* Function: test_memory_op_functions @ 0x2315 */
// bad sp value at call has been detected, the output may be wrong!
int test_memory_op_functions()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // edx
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax
 int v9; // [esp+0h] [ebp-180h] BYREF
 unsigned int s1[3]; // [esp+4h] [ebp-17Ch] BYREF
 unsigned int s2[3]; // [esp+10h] [ebp-170h] BYREF
 unsigned char v12[20]; // [esp+1Ch] [ebp-164h] BYREF
 char v13[23]; // [esp+30h] [ebp-150h] BYREF
 int v14; // [esp+47h] [ebp-139h] BYREF
 int dest; // [esp+4Bh] [ebp-135h] BYREF
 unsigned char v16[10]; // [esp+4Fh] [ebp-131h] BYREF
 char src[11]; // [esp+59h] [ebp-127h] BYREF
 unsigned char v18[256]; // [esp+64h] [ebp-11Ch] BYREF
 unsigned int v19; // [esp+164h] [ebp-1Ch]
 int v20; // [esp+170h] [ebp-10h]

 v19 = __readgsdword(0x14u);
 puts(asc_358C);
 memcpy(v12, "\n", sizeof(v12));
 memset(v13, 0, 0x14u);
 v0 = memop_memset(v18, 0xAu, 65);
 __printf_chk(1, "MEMOP-L2-01: %d\n", v0);
 v1 = memop_memcpy(v13, v12, 0x14u);
 __printf_chk(1, "MEMOP-L2-02: %d\n", v1);
 strcpy(src, "HelloWorld");
 v2 = memop_memmove(src, 0xAu);
 __printf_chk(1, "MEMOP-L2-03: %c\n", v2);
 s1[0] = 1;
 s1[1] = 2;
 s1[2] = 3;
 s2[0] = 1;
 s2[1] = 2;
 s2[2] = 4;
 v3 = memcmp(s1, s2, 0xCu);
 v4 = 1;
 if ( v3 <= 0 )
 v4 = -(v3 != 0);
 v20 = v3;
 __printf_chk(1, "MEMOP-L2-04: %d\n", v4);
 v5 = memop_bzero(v16, 0xAu);
 __printf_chk(1, "MEMOP-L2-05: %d\n", v5);
 v6 = memop_bcopy(&v14, (unsigned char *)&dest, 4u);
 __printf_chk(1, "MEMOP-L2-06: %d\n", v6);
 __printf_chk(1, "MEMOP-L3-01: 0x%x\n", 67305985);
 v7 = memop_memory_barrier(&v9);
 __printf_chk(1, "MEMOP-L3-02: %d\n", v7);
 return v19 - __readgsdword(0x14u);
}


/* Function: __x86.get_pc_thunk.ax @ 0x2523 */
void *_x86_get_pc_thunk_ax()
{
 void *retaddr; // [esp+0h] [ebp+0h]

 return retaddr;
}


/* Function: __x86.get_pc_thunk.cx @ 0x2527 */
void _x86_get_pc_thunk_cx()
{
 ;
}





/* Function: __stack_chk_fail_local @ 0x2540 */
void _stack_chk_fail_local()
{
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x25AC */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: __libc_start_main @ 0x602C */

/* FAILED to decompile: memmove @ 0x6030 */

/* FAILED to decompile: free @ 0x6034 */

/* FAILED to decompile: memcmp @ 0x6038 */

/* FAILED to decompile: __stack_chk_fail @ 0x603C */

/* FAILED to decompile: __cxa_finalize @ 0x6040 */

/* FAILED to decompile: perror @ 0x6044 */

/* FAILED to decompile: waitpid @ 0x6048 */

/* FAILED to decompile: realloc @ 0x604C */

/* FAILED to decompile: malloc @ 0x6050 */

/* FAILED to decompile: puts @ 0x6054 */

/* FAILED to decompile: exit @ 0x6058 */

/* FAILED to decompile: __printf_chk @ 0x605C */

/* FAILED to decompile: fork @ 0x6060 */

/* FAILED to decompile: calloc @ 0x6064 */

/* Total functions decompiled: 87, failed: 15 */
