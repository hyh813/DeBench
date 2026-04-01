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
typedef long LONG;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Additional type definitions for decompiled code */
typedef struct { int tag; void *ptr; } Elf32_Dyn;
typedef void _UNKNOWN;
typedef void *pointer_t;

/* Global variable declarations */
int global_counter = 0;
int counter_1 = 0;
int file_scope_static = 0;
int extern_global_var = 0;
int global_func_ptr = 0;

/* External function and data declarations */
extern void (*_gmon_start__)(void);

/* String constants used in the code */
extern const char asc_3008[];
extern const char asc_30EA[];
extern const char asc_3428[];
extern const char asc_3650[];
extern const char unk_319C[];
extern const char aFork_0[];
extern const char unk_33E4[];
extern const char unk_33BC[];

/* Global Offset Table - needed for PIC code */
void *GLOBAL_OFFSET_TABLE_[1];

/* External function declarations */
extern int extern_function(int a1);
extern const char const_string[];
extern unsigned int global_array[10];

/* Function prototypes for test functions */
unsigned int test_stack_memory(void);
unsigned int test_heap_memory(void);
unsigned int test_static_global(void);
unsigned int test_memory_op_functions(void);

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/3/3_gcc_O3_no_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x1000 */
int init_proc()
{
 if ( &_gmon_start__ )
 ((void (*)(void))_gmon_start__)();
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
void sub_1120()
{
 sub_1030();
}


/* Function: sub_1130 @ 0x1130 */
void sub_1130()
{
 sub_1030();
}


/* Function: sub_1140 @ 0x1140 */
int sub_1140(int a1)
{
 return (*(int (**)(void))(a1 + 80))();
}


/* Function: main @ 0x1250 */
int main(int argc, const char **argv, const char **envp)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_12AC @ 0x12AC */
void sub_12AC()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x12B0 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x13E9 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x13ED */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: double_value @ 0x1400 */
int double_value(int a1)
{
 return 2 * a1;
}


/* Function: alloca_usage.constprop.0 @ 0x1410 */
int alloca_usage_constprop_0()
{
 return 15;
}


/* Function: local_vars @ 0x1420 */
int local_vars(int a1)
{
 return 2 * a1 + 10;
}


/* Function: local_array @ 0x1430 */
int local_array(int a1)
{
 return 5 * a1;
}


/* Function: local_struct @ 0x1440 */
int local_struct(int a1)
{
 return 3 * a1;
}


/* Function: address_of_local @ 0x1450 */
int address_of_local(unsigned int *a1)
{
 *a1 = 42;
 return 42;
}


/* Function: address_of_array @ 0x1470 */
int address_of_array(unsigned int *a1)
{
 return 2 * *a1;
}


/* Function: large_stack_frame @ 0x1480 */
long long large_stack_frame()
{
 int i; // eax
 long long result; // rax
 unsigned char v2[2048]; // [esp+Ch] [ebp-810h]
 unsigned int v3; // [esp+80Ch] [ebp-10h]

 v3 = __readgsdword(0x14u);
 for ( i = 0; i != 2048; ++i )
 v2[i] = i;
 LODWORD(result) = v2[1024];
 HIDWORD(result) = v3 - __readgsdword(0x14u);
 return result;
}


/* Function: vla_stack @ 0x14E0 */
int vla_stack(int a1)
{
 int v1; // edx
 unsigned short *v2; // ecx
 short v3; // dx
 int v4; // edx
 void *v5; // eax
 int v6; // eax
 unsigned short v8[2048]; // [esp-1000h] [ebp-1018h] BYREF
 unsigned int v9[5]; // [esp+0h] [ebp-18h] BYREF

 v9[3] = __readgsdword(0x14u);
 if ( (unsigned int)(a1 - 1) > 0x3E7 )
 return -1;
 v1 = 4 * a1 + 15;
 v2 = (unsigned short *)((char *)v9 - (v1 & 0xFFFFF000));
 v3 = v1 & 0xFFF0;
 if ( v9 != (unsigned int *)v2 )
 {
 /* Stack realignment loop - empty in optimized code */
 }
 v4 = v3 & 0xFFF;
 v5 = alloca(v4);
 for ( v6 = 0; v6 != 2 * a1; v6 += 2 )
 {
 v8[v6 >> 1] = v6;
 }
 return v8[a1 >> 1];
}


/* Function: alloca_usage @ 0x1590 */
int alloca_usage(int a1)
{
 int v1; // edx
 unsigned int *v2; // ebx
 short v3; // dx
 int v4; // edx
 void *v5; // esp
 int i; // eax
 unsigned int v8[1024]; // [esp-1000h] [ebp-1018h] BYREF
 unsigned int v9[5]; // [esp+0h] [ebp-18h] BYREF

 v9[3] = __readgsdword(0x14u);
 if ( a1 <= 0 )
 return -1;
 v1 = 4 * a1 + 27;
 v2 = (unsigned int *)((char *)v9 - (v1 & 0xFFFFF000));
 v3 = v1 & 0xFFF0;
 if ( v9 != v2 )
 {
 /* Stack realignment loop - empty in optimized code */
 }
 v4 = v3 & 0xFFF;
 v5 = alloca(v4);
 if ( v4 )
 v5 = (void *)0;
 for ( i = 0; i != a1; ++i )
 v8[i] = 3 * i;
 return v8[a1 >> 1];
}


/* Function: stack_alias @ 0x1630 */
int stack_alias()
{
 return 20;
}


/* Function: test_stack_memory @ 0x1640 */
unsigned int test_stack_memory()
{
 int v0; // eax
 int v1; // eax

 puts(asc_3008);
 __printf_chk(1, "MEM-L1-01 (local_vars): %d\n", 20);
 __printf_chk(1, "MEM-L1-02 (local_array): %d\n", 10);
 __printf_chk(1, "MEM-L1-03 (local_struct): %d\n", 15);
 __printf_chk(1, "MEM-L1-04 (address_of_local): %d\n", 42);
 __printf_chk(1, "MEM-L1-05 (address_of_array): %d\n", 2);
 v0 = large_stack_frame();
 __printf_chk(1, "MEM-L2-01 (large_stack_frame): %d\n", v0);
 __printf_chk(1, "MEM-L2-02 (vla_stack): %d\n", 10);
 v1 = alloca_usage_constprop_0();
 __printf_chk(1, "MEM-L2-03 (alloca_usage): %d\n", v1);
 return __printf_chk(1, "MEM-L2-04 (stack_alias): %d\n", 20);
}


/* Function: heap_basic @ 0x1720 */
int heap_basic(int a1)
{
 unsigned int *v1; // eax
 unsigned int *v2; // edx
 int i; // eax
 int v4; // esi

 v1 = malloc(4 * a1);
 if ( !v1 )
 return -1;
 v2 = v1;
 if ( a1 > 0 )
 {
 for ( i = 0; i != a1; ++i )
 v2[i] = i * 2;
 }
 v4 = v2[a1 / 2];
 free(v2);
 return v4;
}


/* Function: heap_calloc @ 0x1790 */
int heap_calloc(int nmemb)
{
 unsigned int *v1; // eax
 unsigned int *v2; // edx
 int v3; // esi

 v1 = calloc(nmemb, 4u);
 if ( !v1 )
 return -1;
 if ( nmemb <= 0 )
 {
 v3 = 0;
 }
 else
 {
 v2 = v1;
 v3 = 0;
 do
 v3 += *v2++;
 while ( &v1[nmemb] != v2 );
 }
 free(v1);
 return v3;
}


/* Function: heap_realloc @ 0x1800 */
int heap_realloc()
{
 unsigned int *v0; // eax
 unsigned int *v1; // esi
 unsigned int *v2; // eax
 int v3; // esi
 void *v5; // [esp-14h] [ebp-1Ch]

 v0 = malloc(0x14u);
 if ( !v0 )
 return -1;
 *v0 = 1;
 v1 = v0;
 v0[1] = 2;
 v0[2] = 3;
 v0[3] = 4;
 v0[4] = 5;
 v2 = realloc(v0, 0x28u);
 if ( v2 )
 {
 v3 = 50;
 if ( v2[2] != 3 )
 v3 = -3;
 free(v2);
 }
 else
 {
 v5 = v1;
 v3 = -2;
 free(v5);
 }
 return v3;
}


/* Function: heap_array @ 0x18A0 */
int heap_array(int a1)
{
 unsigned int *v1; // eax
 unsigned int *v2; // ecx
 int i; // eax
 int v4; // esi

 v1 = malloc(4 * a1);
 if ( !v1 )
 return -1;
 v2 = v1;
 if ( a1 > 0 )
 {
 for ( i = 0; i != a1; ++i )
 v2[i] = 3 * i;
 }
 v4 = v2[a1 / 2];
 free(v2);
 return v4;
}


/* Function: heap_struct @ 0x1910 */
int heap_struct(int a1)
{
 void *v1; // eax
 int v2; // esi

 v1 = malloc(8u);
 if ( !v1 )
 return -1;
 v2 = 3 * a1;
 free(v1);
 return v2;
}


/* Function: heap_nested @ 0x1960 */
int heap_nested(unsigned int *a1)
{
 unsigned int *v1; // esi
 unsigned int *v2; // eax

 v1 = malloc(8u);
 *a1 = v1;
 if ( !v1 )
 return -1;
 *v1 = 10;
 v2 = malloc(8u);
 v1[1] = v2;
 if ( v2 )
 {
 *v2 = 20;
 v2[1] = 0;
 return 0;
 }
 else
 {
 free(v1);
 return -2;
 }
}


/* Function: linked_list_heap @ 0x19E0 */
int linked_list_heap()
{
 int v0; // ebp
 unsigned int *v1; // edi
 unsigned int *v2; // esi
 unsigned int *v3; // eax
 unsigned int *v4; // eax
 int v5; // edi
 void *v6; // eax
 void *v8; // eax

 v0 = 0;
 v1 = 0;
 v2 = 0;
 while ( 1 )
 {
 v3 = malloc(8u);
 if ( !v3 )
 break;
 *v3 = v0;
 v3[1] = 0;
 if ( v2 )
 {
 v0 += 10;
 v1[1] = v3;
 if ( v0 == 50 )
 goto LABEL_7;
 }
 else
 {
 v0 += 10;
 v2 = v3;
 if ( v0 == 50 )
 {
LABEL_7:
 v4 = v2;
 v5 = 0;
 do
 {
 v5 += *v4;
 v4 = (unsigned int *)v4[1];
 }
 while ( v4 );
 do
 {
 v6 = v2;
 v2 = (unsigned int *)v2[1];
 free(v6);
 }
 while ( v2 );
 return v5;
 }
 }
 v1 = v3;
 }
 while ( v2 )
 {
 v8 = v2;
 v2 = (unsigned int *)v2[1];
 free(v8);
 }
 return -1;
}


/* Function: create_tree_node @ 0x1A90 */
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


/* Function: tree_heap_traversal @ 0x1AD0 */
int tree_heap_traversal()
{
 void *v0; // eax
 void *v1; // esi
 void *ptr; // edi
 void *v3; // ebp
 void *v5; // eax

 v0 = malloc(0xCu);
 if ( !v0 )
 return -1;
 v1 = v0;
 ptr = malloc(0xCu);
 if ( !ptr )
 {
 v5 = malloc(0xCu);
 if ( v5 )
 free(v5);
 goto LABEL_7;
 }
 v3 = malloc(0xCu);
 if ( !v3 )
 {
 free(ptr);
LABEL_7:
 free(v1);
 return -2;
 }
 free(ptr);
 free(v3);
 free(v1);
 return 60;
}


/* Function: memory_leak @ 0x1B90 */
int memory_leak(int a1)
{
 unsigned int *v1; // eax
 int i; // edx

 v1 = malloc(4 * a1);
 if ( !v1 )
 return -1;
 if ( a1 > 0 )
 {
 for ( i = 0; i != a1; ++i )
 v1[i] = i;
 }
 return v1[a1 / 2];
}


/* Function: dangling_pointer @ 0x1BF0 */
int dangling_pointer()
{
 void *v0; // eax
 void *ptr; // esi

 v0 = malloc(4u);
 if ( !v0 )
 return -1;
 ptr = v0;
 __printf_chk(1, "value before free: %d\n", 42);
 free(ptr);
 return *(unsigned int *)ptr;
}


/* Function: double_free @ 0x1C40 */
int double_free(int a1)
{
 void *ptr; // eax
 void *v3; // esi

 if ( a1 )
 return *(unsigned int *)a1;
 ptr = malloc(4u);
 v3 = ptr;
 if ( !ptr )
 return -1;
 free(ptr);
 free(v3);
 return -2;
}


/* Function: heap_overflow @ 0x1CA0 */
int heap_overflow()
{
 void *v0; // eax

 v0 = malloc(0x28u);
 if ( !v0 )
 return -1;
 free(v0);
 return 0;
}


/* Function: test_heap_memory @ 0x1CE0 */
unsigned int test_heap_memory()
{
 unsigned int *v0; // eax
 int v1; // eax
 unsigned int *v2; // eax
 int v3; // esi
 int v4; // eax
 unsigned int *v5; // eax
 int v6; // eax
 void *v7; // eax
 int v8; // eax
 void **v9; // esi
 unsigned int *v10; // eax
 int v11; // eax
 int v12; // ebp
 unsigned int *v13; // edi
 unsigned int *v14; // esi
 unsigned int *v15; // eax
 unsigned int *v16; // eax
 int v17; // edi
 void *v18; // eax
 int v19; // eax
 unsigned int *v20; // eax
 int v21; // eax
 int v22; // eax
 unsigned int *v24; // esi
 int v25; // eax
 void *v26; // eax
 int v27; // [esp+8h] [ebp-34h]
 int stat_loc; // [esp+18h] [ebp-24h] BYREF
 unsigned int v29; // [esp+1Ch] [ebp-20h]

 v29 = __readgsdword(0x14u);
 puts(asc_30EA);
 v0 = malloc(0x28u);
 if ( v0 )
 {
 v0[1] = 2;
 v0[2] = 4;
 v0[3] = 6;
 v0[4] = 8;
 v0[5] = 10;
 v0[6] = 12;
 v0[7] = 14;
 v0[8] = 16;
 v0[9] = 18;
 free(v0);
 v1 = 10;
 }
 else
 {
 v1 = -1;
 }
 __printf_chk(1, "HEAP-L2-01 (heap_basic): %d\n", v1);
 v2 = calloc(5u, 4u);
 if ( v2 )
 {
 v3 = v2[4] + v2[3] + v2[2] + *v2 + v2[1];
 free(v2);
 }
 else
 {
 v3 = -1;
 }
 __printf_chk(1, "HEAP-L2-02 (heap_calloc): %d\n", v3);
 v4 = heap_realloc();
 __printf_chk(1, "HEAP-L2-03 (heap_realloc): %d\n", v4);
 v5 = malloc(0x28u);
 if ( v5 )
 {
 v5[1] = 3;
 v5[2] = 6;
 v5[3] = 9;
 v5[4] = 12;
 v5[5] = 15;
 v5[6] = 18;
 v5[7] = 21;
 v5[8] = 24;
 v5[9] = 27;
 free(v5);
 v6 = 15;
 }
 else
 {
 v6 = -1;
 }
 __printf_chk(1, "HEAP-L2-04 (heap_array): %d\n", v6);
 v7 = malloc(8u);
 if ( v7 )
 {
 free(v7);
 v8 = 15;
 }
 else
 {
 v8 = -1;
 }
 __printf_chk(1, "HEAP-L2-05 (heap_struct): %d\n", v8);
 v9 = (void **)malloc(8u);
 if ( v9 )
 {
 v10 = malloc(8u);
 v9[1] = v10;
 if ( v10 )
 {
 *v10 = 20;
 v10[1] = 0;
 v11 = 0;
 }
 else
 {
 free(v9);
 v11 = -2;
 }
 __printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", v11);
 free(v9[1]);
 free(v9);
 }
 else
 {
 __printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", -1);
 }
 v12 = 0;
 v13 = 0;
 v14 = 0;
 while ( 1 )
 {
 v15 = malloc(8u);
 if ( !v15 )
 break;
 *v15 = v12;
 v15[1] = 0;
 if ( v14 )
 {
 v12 += 10;
 v13[1] = v15;
 if ( v12 == 50 )
 goto LABEL_19;
 }
 else
 {
 v12 += 10;
 v14 = v15;
 if ( v12 == 50 )
 {
LABEL_19:
 v16 = v14;
 v17 = 0;
 do
 {
 v17 += *v16;
 v16 = (unsigned int *)v16[1];
 }
 while ( v16 );
 do
 {
 v18 = v14;
 v14 = (unsigned int *)v14[1];
 free(v18);
 }
 while ( v14 );
 goto LABEL_22;
 }
 }
 v13 = v15;
 }
 while ( v14 )
 {
 v26 = v14;
 v14 = (unsigned int *)v14[1];
 free(v26);
 }
 v17 = -1;
LABEL_22:
 __printf_chk(1, "HEAP-L3-01 (linked_list_heap): %d\n", v17);
 v19 = tree_heap_traversal();
 __printf_chk(1, "HEAP-L3-02 (tree_heap_traversal): %d\n", v19);
 v20 = malloc(0x14u);
 if ( v20 )
 {
 *v20 = 0;
 v20[1] = 1;
 v20[2] = 2;
 v20[3] = 3;
 v20[4] = 4;
 v21 = 2;
 }
 else
 {
 v21 = -1;
 }
 __printf_chk(1, "HEAP-L3-03 (memory_leak): %d\n", v21);
 __printf_chk(1, "HEAP-L3-04 (dangling_pointer): %d\n", v27);
 v22 = fork();
 if ( !v22 )
 {
 v24 = malloc(4u);
 if ( v24 )
 {
 __printf_chk(1, "value before free: %d\n", 42);
 free(v24);
 v25 = *v24;
 }
 else
 {
 v25 = -1;
 }
 __printf_chk(1, &unk_319C, v25);
 exit(0);
 }
 if ( v22 <= 0 )
 {
 perror(aFork_0);
 }
 else
 {
 waitpid(v22, &stat_loc, 0);
 if ( (stat_loc & 0x7F) != 0 )
 {
 if ( (char)((stat_loc & 0x7F) + 1) > 1 )
 __printf_chk(1, &unk_33E4, stat_loc & 0x7F);
 }
 else
 {
 __printf_chk(1, &unk_33BC, BYTE1(stat_loc));
 }
 }
 return v29 - __readgsdword(0x14u);
}


/* Function: global_var_access @ 0x2180 */
int global_var_access()
{
 global_counter++;
 return global_counter;
}


/* Function: global_var_read @ 0x21A0 */
int global_var_read()
{
 return 2 * global_counter;
}


/* Function: global_array_access @ 0x21C0 */
int global_array_access(unsigned int a1)
{
 if ( a1 > 9 )
 return -1;
 else
 return global_array[a1];
}


/* Function: static_local @ 0x21F0 */
int static_local(int a1)
{
 int result; // eax

 result = 0;
 if ( !a1 )
 result = counter_1 + 1;
 counter_1 = result;
 return result;
}


/* Function: call_static_func @ 0x2220 */
int call_static_func(int a1)
{
 return 2 * a1 + 1;
}


/* Function: access_extern_global @ 0x2230 */
int access_extern_global()
{
 return extern_global_var + 100;
}


/* Function: call_extern_func @ 0x2250 */
int call_extern_func()
{
 return extern_function(5);
}


/* Function: read_const_data @ 0x2270 */
int read_const_data()
{
 return const_string[4] + 42;
}


/* Function: access_bss_var @ 0x2290 */
int access_bss_var()
{
 return 0;
}


/* Function: access_bss_buffer @ 0x22A0 */
int access_bss_buffer()
{
 return 0;
}


/* Function: global_struct_access @ 0x22B0 */
int global_struct_access()
{
 return 30;
}


/* Function: set_file_static @ 0x22C0 */
Elf32_Dyn ** set_file_static(int a1)
{
 Elf32_Dyn **result; // eax

 result = &GLOBAL_OFFSET_TABLE_;
 file_scope_static = a1;
 return result;
}


/* Function: get_file_static @ 0x22E0 */
int get_file_static()
{
 return file_scope_static;
}


/* Function: set_global_callback @ 0x2300 */
Elf32_Dyn ** set_global_callback(int a1)
{
 Elf32_Dyn **result; // eax

 result = &GLOBAL_OFFSET_TABLE_;
 global_func_ptr = a1;
 return result;
}


/* Function: call_global_callback @ 0x2320 */
int call_global_callback()
{
 if ( global_func_ptr )
 return ((int (*)(void))global_func_ptr)();
 else
 return -1;
}


/* Function: global_heap_store @ 0x2350 */
int global_heap_store(int a1)
{
 if ( a1 )
 return *(unsigned int *)a1;
 else
 return -1;
}


/* Function: static_complex_init @ 0x2370 */
int static_complex_init()
{
 return 15;
}


/* Function: tls_access @ 0x2380 */
int tls_access(int a1)
{
 return 2 * a1;
}


/* Function: init_order_test @ 0x2390 */
int init_order_test()
{
 return 20;
}


/* Function: test_static_global @ 0x23A0 */
unsigned int test_static_global()
{
 int v0; // eax

 puts(asc_3428);
 __printf_chk(1, "STM-L1-01 (global_var_access): %d\n", global_counter + 1);
 global_counter++;
 __printf_chk(1, "STM-L1-02 (global_array_access): %d\n", 5);
 counter_1 = 1;
 __printf_chk(1, "STM-L1-03 (static_local): %d\n", 1);
 __printf_chk(1, "STM-L1-03 (static_local): %d\n", ++counter_1);
 __printf_chk(1, "STM-L1-04 (call_static_func): %d\n", 11);
 __printf_chk(1, "STM-L2-01 (access_extern_global): %d\n", extern_global_var + 100);
 v0 = extern_function(5);
 __printf_chk(1, "STM-L2-02 (call_extern_func): %d\n", v0);
 __printf_chk(1, "STM-L2-03 (read_const_data): %d\n", const_string[4] + 42);
 __printf_chk(1, "STM-L2-04 (access_bss_var): %d\n", 0);
 __printf_chk(1, "STM-L2-04 (access_bss_buffer): %d\n", 0);
 __printf_chk(1, "STM-L2-05 (global_struct_access): %d\n", 30);
 file_scope_static = 50;
 __printf_chk(1, "STM-L2-06 (file_static): %d\n", 50);
 global_func_ptr = (int)double_value;
 __printf_chk(1, "STM-L2-07 (global_func_ptr): %d\n", 10);
 __printf_chk(1, "STM-L2-08 (global_heap_store): %d\n", 100);
 __printf_chk(1, "STM-L2-09 (static_complex_init): %d\n", 15);
 __printf_chk(1, "STM-L3-01 (tls_access): %d\n", 20);
 return __printf_chk(1, "STM-L3-02 (init_order_test): %d\n", 20);
}


/* Function: memop_memset @ 0x2580 */
int memop_memset(unsigned char *s, size_t n, int c)
{
 if ( !s || !n )
 return -1;
 memset(s, c, n);
 return *s;
}


/* Function: memop_memcpy @ 0x25D0 */
int memop_memcpy(char *dest, const void *a2, size_t n)
{
 if ( n == 0 || a2 == 0 || !dest )
 return -1;
 memcpy(dest, a2, n);
 return *(unsigned int *)&dest[(n & 0xFFFFFFFC) - 4];
}


/* Function: memop_memmove @ 0x2630 */
int memop_memmove(char *src, unsigned int a2)
{
 if ( !src || a2 <= 1 )
 return -1;
 memmove(src + 1, src, a2 - 1);
 return src[1];
}


/* Function: memop_memcmp @ 0x2680 */
int memop_memcmp(void *s1, void *s2, size_t n)
{
 int v3; // edx
 int result; // eax

 if ( n == 0 || s2 == 0 || !s1 )
 return 0;
 v3 = memcmp(s1, s2, n);
 result = -(v3 != 0);
 if ( v3 > 0 )
 return 1;
 return result;
}


/* Function: memop_bzero @ 0x26F0 */
int memop_bzero(unsigned char *s, size_t n)
{
 if ( !s )
 return -1;
 memset(s, 0, n);
 return *s;
}


/* Function: memop_bcopy @ 0x2730 */
int memop_bcopy(void *src, unsigned char *dest, size_t n)
{
 if ( n == 0 || dest == 0 || !src )
 return -1;
 memmove(dest, src, n);
 return *dest;
}


/* Function: memop_unaligned_access @ 0x2790 */
int memop_unaligned_access(int a1)
{
 if ( a1 )
 return *(unsigned int *)(a1 + 1);
 else
 return -1;
}


/* Function: memop_memory_barrier @ 0x27B0 */
int memop_memory_barrier(int *a1)
{
 int v1; // edx

 if ( !a1 )
 return -1;
 v1 = *a1;
 return v1 + *a1;
}


/* Function: test_memory_op_functions @ 0x27D0 */
unsigned int test_memory_op_functions()
{
 int v0; // edx
 int v1; // eax
 int v3; // [esp+14h] [ebp-148h]
 unsigned int s1[3]; // [esp+1Ch] [ebp-140h] BYREF
 unsigned int dest[66]; // [esp+41h] [ebp-11Bh] BYREF
 unsigned int v9; // [esp+14Ch] [ebp-10h]

 v9 = __readgsdword(0x14u);
 puts(asc_3650);
 memset((char *)&dest[2] + 3, 65, 10);
 __printf_chk(1, "MEMOP-L2-01: %d\n", 65);
 __printf_chk(1, "MEMOP-L2-02: %d\n", 50);
 strcpy((char *)dest, "HelloWorld");
 memmove((char *)dest + 1, dest, 9u);
 __printf_chk(1, "MEMOP-L2-03: %c\n", 72);
 s1[0] = 1;
 s1[1] = 2;
 s1[2] = 3;
 dest[0] = 1;
 dest[1] = 2;
 dest[2] = 4;
 v0 = memcmp(s1, dest, 0xCu);
 if ( v0 > 0 )
 v1 = 1;
 else if ( v0 < 0 )
 v1 = -1;
 else
 v1 = 0;
 __printf_chk(1, "MEMOP-L2-04: %d\n", v1);
 __printf_chk(1, "MEMOP-L2-05: %d\n", 0);
 __printf_chk(1, "MEMOP-L2-06: %d\n", 1);
 __printf_chk(1, "MEMOP-L3-01: 0x%x\n", 67305985);
 v3 = 0;
 _InterlockedOr((volatile LONG *)&v3, 0);
 return v9 - __readgsdword(0x14u);
}


/* Function: __x86.get_pc_thunk.ax @ 0x298F */
void *_x86_get_pc_thunk_ax()
{
 _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]

 return retaddr;
}


/* Function: extern_function @ 0x29A0 */
int extern_function(int a1)
{
 return 3 * a1;
}


/* Function: __stack_chk_fail_local @ 0x29B0 */
void _stack_chk_fail_local()
{
 /* Inline assembly removed - was: add ebx, (offset _GLOBAL_OFFSET_TABLE_ - $) */
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x2A1C */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: __libc_start_main @ 0x602C */

/* FAILED to decompile: memmove @ 0x6030 */

/* FAILED to decompile: free @ 0x6034 */

/* FAILED to decompile: memcpy @ 0x6038 */

/* FAILED to decompile: memcmp @ 0x603C */

/* FAILED to decompile: __stack_chk_fail @ 0x6040 */

/* FAILED to decompile: __cxa_finalize @ 0x6044 */

/* FAILED to decompile: perror @ 0x6048 */

/* FAILED to decompile: waitpid @ 0x604C */

/* FAILED to decompile: realloc @ 0x6050 */

/* FAILED to decompile: malloc @ 0x6054 */

/* FAILED to decompile: puts @ 0x6058 */

/* FAILED to decompile: exit @ 0x605C */

/* FAILED to decompile: memset @ 0x6060 */

/* FAILED to decompile: __printf_chk @ 0x6064 */

/* FAILED to decompile: fork @ 0x6068 */

/* FAILED to decompile: calloc @ 0x606C */

/* Total functions decompiled: 89, failed: 17 */
