// Angr Decompilation of 2_gcc_O2_no_g
// Platform: X86


/* CRT stub function _init removed by preprocessor */

// Forward struct declarations
struct struct_0;
struct struct_1;

// Forward declarations
unsigned int __do_global_ctors_aux(void);
void frame_dummy();
void deregister_tm_clones();
void register_tm_clones();
unsigned int * __do_global_dtors_aux();
void _start();
unsigned int __x86_get_pc_thunk_di(int a0, char *a1);
unsigned int __x86_get_pc_thunk_ax();
void __x86_get_pc_thunk_cx();
void __x86_get_pc_thunk_dx();
void *_ccall(unsigned long a0, unsigned long a1, unsigned int a2, unsigned int a3);
int __stack_chk_fail_local();
int test_data_types_l1();
int test_array_types();
int test_pointer_types();
int test_composite_types();
int sub_401030(unsigned int offset);
int sub_401040();
void sub_40104e();
int sub_401050();
void sub_40105e();
int sub_401060();
void sub_40106e();
int sub_401070();
int sub_40107e();
int sub_401080();
int sub_40108a();
int sub_401090();
int sub_40109a();
int sub_4010a0();
int sub_4010aa();
int sub_4010b0();
int sub_4010ba();
int sub_4010c0(int a0, const char *a1, ...);
void sub_4010ca();
int main();
void sub_4010f2();
void sub_40112c();
void __x86_get_pc_thunk_bx();
void sub_401134();
void sub_401173();
void sub_401179();
void sub_4011c7();
void sub_40125a();
void __x86_get_pc_thunk_dx();
void sub_401271(unsigned int a0);
int process_char(unsigned int a0);
void sub_401295(unsigned short a0, unsigned int a1);
unsigned int process_short(unsigned short a0, unsigned int a1);
void sub_4012ae(unsigned int a0);
int process_int(unsigned int a0);
void sub_4012bd(unsigned int a0);
unsigned int process_long(unsigned int a0);
void sub_4012cb(unsigned int a0, unsigned int a1);
int process_ll(unsigned int a0, unsigned int a1);
void sub_4012e6();
unsigned int process_float(unsigned int a0);
void sub_40131a();
unsigned int process_double();
void sub_40134a();
void process_ld();
void sub_40135f(unsigned int a0);
unsigned int process_bool(unsigned int a0);
void sub_40137a(unsigned int a0);
int const_param(unsigned int *a0);
void sub_40138e(unsigned int a0);
unsigned int volatile_access(unsigned int *a0);
int sub_40139f();
void sub_4014eb(unsigned int a0, unsigned int a1);
unsigned int array_1d_stack(unsigned int *a0, unsigned int a1);
void sub_401514();
void sub_40151d(unsigned int a0);
unsigned int array_string(char *a0);
void sub_40153a();
void sub_401541(unsigned int a0);
unsigned int array_2d_stack(unsigned int *a0);
int sub_40156c();
unsigned int array_3d(unsigned int *a0);
void sub_4015a5(unsigned int a0);
unsigned int array_vla(unsigned int a0, unsigned int *a1);
void sub_4015d4();
void sub_4015dd(unsigned int a0, unsigned int a1);
unsigned int array_pointer(unsigned int *a0, unsigned int a1);
void sub_40160c();
int sub_401615();
unsigned int pointer_array(unsigned int a0, unsigned int a1);
void sub_401655();
int sub_40165f();
unsigned int array_complex_index(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4);
void sub_40168f();
void sub_401697(unsigned int a0, unsigned int a1);
unsigned int array_oob(unsigned int *a0, unsigned int a1);
void sub_4016cc();
int sub_4016d5();
int ptr_single(unsigned int *a0);
void sub_4018de(unsigned int a0);
int ptr_double(struct struct_0 **a0);
int ptr_triple(struct struct_1 **a0);
int sub_401902();
unsigned int ptr_increment(unsigned int ptr, unsigned int i);
void sub_401936();
void sub_401946(unsigned int a0, unsigned int a1);
int ptr_offset(unsigned int a0, unsigned int a1);
unsigned int ptr_diff(unsigned int a0, unsigned int a1);
unsigned int ptr_void(void* a0, unsigned int a1);
void sub_401989();
void sub_401997();
void sub_4019a6(unsigned int a0);
unsigned int ptr_const(unsigned int *a0);
void sub_4019bd(unsigned int a0);
int ptr_const_ptr(unsigned int *ptr);
int ptr_func_simple(unsigned int a0, unsigned int a1);
void sub_4019e2();
unsigned int ptr_func_complex(unsigned int *a0, unsigned int a1);
int ptr_cast(unsigned int *a0);
void sub_401a5b(unsigned int a0);
int opaque_handle_create(unsigned int a0);
void sub_401a69(unsigned int a0);
unsigned int opaque_handle_op(unsigned int a0);
int sub_401a7b();
void sub_401b21();
int struct_simple(unsigned int *a0);
int sub_401c31();
unsigned int struct_array(unsigned int *a0, unsigned int a1);
void sub_401c76();
void sub_401c86(unsigned int a0);
int struct_nested(unsigned int *a0);
void sub_401c9e(unsigned int a0);
int struct_deep(unsigned int *a0);
void sub_401caf(unsigned int a0);
unsigned int struct_with_ptr(struct struct_0 *ptr);
int sub_401cc4();
int struct_bitfields(void* a0);
int union_type(void* a0, unsigned int a1);
void sub_401d1f();
void sub_401d2a();
void sub_401d55(unsigned int a0, unsigned int a1);
unsigned int union_array(unsigned int *a0, unsigned int a1);
void sub_401d84();
void sub_401d8d(unsigned int a0);
unsigned int enum_type(unsigned int a0);
void sub_401d9e();
unsigned int enum_switch(unsigned int a0);
void sub_401dc5(unsigned int a0);
int struct_func_ptr(unsigned int *ptr);
void sub_401de1(unsigned int a0);
unsigned int linked_list(struct struct_0 *ptr);
void sub_401e0c(unsigned int a0);
unsigned int doubly_linked_list(struct struct_0 *ptr);
int sub_401e2c();
unsigned int binary_tree_sum(struct struct_0 *a0);
int sub_402051();
unsigned int binary_tree(struct struct_0 *a0);
int sub_402094();
unsigned int graph_traverse(struct struct_0 *a0);
int sub_4020da();
void sub_40221e();
void sub_402279();
void __x86_get_pc_thunk_cx();
int sub_4022f3();
int __stack_chk_fail_local();
unsigned int __do_global_ctors_aux();
void sub_402362();

typedef struct struct_0 {
 unsigned int field_0;
 unsigned int field_4;
 unsigned int field_8;
 unsigned int field_c;
 unsigned int field_10;
 unsigned int field_14;
 unsigned int field_18;
 unsigned int field_1c;
 unsigned int field_20;
 unsigned int padding_0[1000];
} struct_0;

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

extern struct_0 *g_405ff4;

int _init()
{
 if (g_405ff4)
 ;
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030(unsigned int offset)
{
 unsigned int ptr[3]; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 return ptr[2];
}


// Function: sub_401040 at 0x401040
int sub_401040()
{
 sub_401030(0);
 return 0;
}


// Function: sub_40104e at 0x40104e
void sub_40104e()
{
 sub_401050();
 return;
}


// Function: sub_401050 at 0x401050
int sub_401050()
{
 sub_401030(8);
 return 0;
}


// Function: sub_40105e at 0x40105e
void sub_40105e()
{
 sub_401060();
 return;
}


// Function: sub_401060 at 0x401060
int sub_401060()
{
 sub_401030(16);
 return 0;
}


// Function: sub_40106e at 0x40106e
void sub_40106e()
{
 sub_401070();
 return;
}


// Function: sub_401070 at 0x401070
int sub_401070()
{
 sub_401030(24);
 return 0;
}


// Function: sub_40107e at 0x40107e
int sub_40107e()
{
 sub_401080();
 return;
}


// Function: sub_401080 at 0x401080
int sub_401080()
{
 return 0;
}


// Function: sub_40108a at 0x40108a
int sub_40108a()
{
 sub_401090();
 return 0;
}


// Function: sub_401090 at 0x401090
int sub_401090()
{
 return 0;
}


// Function: sub_40109a at 0x40109a
int sub_40109a()
{
 sub_4010a0();
 return 0;
}


// Function: sub_4010a0 at 0x4010a0
int sub_4010a0()
{
 return 0;
}


// Function: sub_4010aa at 0x4010aa
int sub_4010aa()
{
 sub_4010b0();
 return 0;
}


// Function: sub_4010b0 at 0x4010b0
int sub_4010b0()
{
 return 0;
}


// Function: sub_4010ba at 0x4010ba
int sub_4010ba()
{
 sub_4010c0(0, "");
 return 0;
}


// Function: sub_4010c0 at 0x4010c0
int sub_4010c0(int a0, const char *a1, ...)
{
 return 0;
}


// Function: sub_4010ca at 0x4010ca
void sub_4010ca()
{
 main();
 return;
}


// Function: main at 0x4010d0
int main()
{
 char v0; // [bp+0x0]

 test_data_types_l1(&v0);
 test_array_types(&v0);
 test_pointer_types();
 test_composite_types();
 return 0;
}


// Function: sub_4010f2 at 0x4010f2
void sub_4010f2()
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_40112c at 0x40112c
void sub_40112c()
{
 return;
}


// Function: __x86_get_pc_thunk_bx at 0x401130
void __x86_get_pc_thunk_bx()
{
 return;
}


// Function: sub_401134 at 0x401134
void sub_401134()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */


// Function: sub_401173 at 0x401173
void sub_401173()
{
}


// Function: sub_401179 at 0x401179
void sub_401179()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */


// Function: sub_4011c7 at 0x4011c7
void sub_4011c7()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

unsigned int * __do_global_dtors_aux()
{
 unsigned int *v5; // eax
 struct_0 *ptr; // edi
 unsigned int v8; // esi
 unsigned int v9; // ebx
 struct_0 *v10; // esi
 unsigned int v11; // eax
 unsigned int i; // ebx
 unsigned int v13; // eax
 unsigned int *v14; // eax
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 char v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v5 = __x86_get_pc_thunk_di(*((int *)&v2), &v2);
 ptr = g_405ff4;
 v1 = v8;
 v0 = v9;
 if (ptr->padding_0[56])
 return v5;
 if (*((int *)&ptr->padding_0[32]))
 ((void(*)())(*((int *)&ptr->padding_0[52])))();
 v10 = (struct_0 *)&ptr->padding_0[224];
 v11 = *((int *)&ptr->padding_0[60]);
 i = ((unsigned int *)&ptr->padding_0[220] - (unsigned int *)v10) - 1;
 if (*((int *)&ptr->padding_0[60]) < i)
 {
  do
 {
 v13 = v11 + 1;
 *((unsigned int *)&ptr->padding_0[60]) = v13;
 ((void(*)())(&v10[4 * v13]))();
 v11 = *((int *)&ptr->padding_0[60]);
 } while (*((int *)&ptr->padding_0[60]) < i);
 }
 deregister_tm_clones();
 ptr->padding_0[56] = 1;
 return v5;
}


// Function: sub_40125a at 0x40125a
void sub_40125a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86_get_pc_thunk_dx at 0x401269
void __x86_get_pc_thunk_dx()
{
 return;
}


// Function: __x86_get_pc_thunk_di at 0x40126d
unsigned int __x86_get_pc_thunk_di(int a0, char *a1)
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_401271 at 0x401271
void sub_401271(unsigned int a0)
{
 process_char(a0);
 return;
}


// Function: process_char at 0x401280
int process_char(unsigned int a0)
{
 if (!((a0 - 65 & 255) < 26))
 return a0;
 return a0 + 32;
}


// Function: sub_401295 at 0x401295
void sub_401295(unsigned short a0, unsigned int a1)
{
 process_short(a0, a1);
 return;
}


// Function: process_short at 0x4012a0
unsigned int process_short(unsigned short a0, unsigned int a1)
{
 return a1 & 0xffff0000 | a1 + a0;
}


// Function: sub_4012ae at 0x4012ae
void sub_4012ae(unsigned int a0)
{
 process_int(a0);
 return;
}


// Function: process_int at 0x4012b0
int process_int(unsigned int a0)
{
 return a0 * 2 + 1;
}


// Function: sub_4012bd at 0x4012bd
void sub_4012bd(unsigned int a0)
{
 process_long(a0);
 return;
}


// Function: process_long at 0x4012c0
unsigned int process_long(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_4012cb at 0x4012cb
void sub_4012cb(unsigned int a0, unsigned int a1)
{
 process_ll(a0, a1);
 return;
}


// Function: process_ll at 0x4012d0
int process_ll(unsigned int a0, unsigned int a1)
{
 return a0 * a0;
}


// Function: sub_4012e6 at 0x4012e6
void sub_4012e6()
{
 process_float(0);
 return;
}


// Function: process_float at 0x4012f0
unsigned int process_float(unsigned int a0)
{
 unsigned int v1; // eax
 unsigned int v0; // [bp-0x4]

 v1 = __x86_get_pc_thunk_ax();
 v0 = 0;
 return v1 + 19671;
}


// Function: sub_40131a at 0x40131a
void sub_40131a()
{
 process_double(0);
 return;
}


// Function: process_double at 0x401320
unsigned int process_double()
{
 unsigned int v2; // eax
 double v0; // [bp-0xc], Other Possible Types: unsigned long

 v2 = __x86_get_pc_thunk_ax();
 v0 = 0.0;
 return v2 + 19623;
}


// Function: sub_40134a at 0x40134a
void sub_40134a()
{
 process_ld(0);
 return;
}


// Function: process_ld at 0x401350
void process_ld()
{
 return;
}


// Function: sub_40135f at 0x40135f
void sub_40135f(unsigned int a0)
{
 process_bool(a0);
 return;
}


// Function: process_bool at 0x401360
unsigned int process_bool(unsigned int a0)
{
 if (a0 > 0)
 return ~(a0) & 1;
 return 0;
}


// Function: sub_40137a at 0x40137a
void sub_40137a(unsigned int a0)
{
 const_param(&a0);
 return;
}


// Function: const_param at 0x401380
int const_param(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: sub_40138e at 0x40138e
void sub_40138e(unsigned int a0)
{
 volatile_access(&a0);
 return;
}


// Function: volatile_access at 0x401390
unsigned int volatile_access(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: sub_40139f at 0x40139f
int sub_40139f()
{
 test_data_types_l1();
 return 0;
}


// Function: test_data_types_l1 at 0x4013a0
extern unsigned int g_403008;

int test_data_types_l1()
{
 unsigned int v0; // [bp-0x10]

 sub_4010b0();
 sub_4010c0(1, "DT-L1-01 (process_char): %c\n", 97);
 sub_4010c0(1, "DT-L1-01 (process_char): %c\n", 98);
 sub_4010c0(1, "DT-L1-02 (process_short): %d\n", 300);
 sub_4010c0(1, "DT-L1-03 (process_int): %d\n", 11);
 sub_4010c0(1, "DT-L1-04 (process_long): %ld\n", 200);
 sub_4010c0(1, "DT-L1-05 (process_ll): %lld\n", 10000, 0);
 sub_4010c0(1, "DT-L1-06 (process_float): %.2f\n", 0, 0x400c0000);
 sub_4010c0(1, "DT-L1-07 (process_double): %.2f\n", 3435973837, 1073794252);
 sub_4010c0(1, "DT-L1-08 (process_ld): %.2Lf\n", 0, 0xa0000000, 16386);
 sub_4010c0(1, "DT-L1-09 (process_bool): %d\n", 1);
 sub_4010c0(1, "DT-L1-09 (process_bool): %d\n", 0);
 sub_4010c0(1, "DT-L1-09 (process_bool): %d\n", 0);
 sub_4010c0(1, "DT-L1-10 (const_param): %d\n", 15);
 v0 = 10;
 return sub_4010c0(1, "DT-L1-11 (volatile_access): %d\n", v0 * 2);
}


// Function: sub_4014eb at 0x4014eb
void sub_4014eb(unsigned int a0, unsigned int a1)
{
 array_1d_stack(&a0, a1);
 return;
}


// Function: array_1d_stack at 0x4014f0
unsigned int array_1d_stack(unsigned int *a0, unsigned int a1)
{
 unsigned int v0; // edx
 unsigned int *ptr; // eax

 if (a1 <= 0)
 return 0;
 v0 = 0;
 ptr = a0;
 do
 {
 v0 += *(ptr);
 ptr += 1;
 } while (ptr != &a0[a1]);
 return v0;
}


// Function: sub_401514 at 0x401514
void sub_401514()
{
 unsigned int arr[10] = {0};
 array_1d_stack(arr, 10);
 return;
}


// Function: sub_40151d at 0x40151d
void sub_40151d(unsigned int a0)
{
 array_string(0);
 return;
}


// Function: array_string at 0x401520
unsigned int array_string(char *a0)
{
 unsigned int v0; // eax

 v0 = 0;
 if (!*(a0))
 return 0;
 do
 {
 v0 += 1;
 } while (a0[v0]);
 return v0;
}


// Function: sub_40153a at 0x40153a
void sub_40153a()
{
 unsigned int arr[110] = {0};
 array_2d_stack(arr);
 return;
}


// Function: sub_401541 at 0x401541
void sub_401541(unsigned int a0)
{
 unsigned int arr[110] = {0};
 array_2d_stack(arr);
 return;
}


// Function: array_2d_stack at 0x401550
unsigned int array_2d_stack(unsigned int *a0)
{
 unsigned int v0; // edx
 unsigned int *ptr; // eax

 v0 = 0;
 ptr = a0;
 do
 {
 v0 += *(ptr);
 ptr += 11;
 } while (ptr != a0 + 110);
 return v0;
}


// Function: sub_40156c at 0x40156c
int sub_40156c()
{
 unsigned int arr[150] = {0};
 array_3d(arr);
 return;
}


// Function: array_3d at 0x401570
unsigned int array_3d(unsigned int *a0)
{
 unsigned int v0; // eax
 unsigned int *i; // ecx
 unsigned int *p; // edx
 unsigned int *ptr; // edx

 v0 = 0;
 i = a0 + 25;
 do
 {
 p = i + 5;
 do
 {
 ptr = p + 1;
 v0 = v0 + p[0] + ptr[4] + ptr[3] + ptr[2] + ptr[1];
 p = ptr;
 } while (p != i);
 i = ptr + 5;
 } while (i != a0 + 150);
 return v0;
}


// Function: sub_4015a5 at 0x4015a5
void sub_4015a5(unsigned int a0)
{
 array_vla(a0, 0);
 return;
}


// Function: array_vla at 0x4015b0
unsigned int array_vla(unsigned int a0, unsigned int *a1)
{
 unsigned int v0; // edx
 unsigned int *ptr; // eax

 if (a0 <= 0)
 return 0;
 v0 = 0;
 ptr = a1;
 do
 {
 v0 += *(ptr);
 ptr += 1;
 } while (ptr != &a1[a0]);
 return v0;
}


// Function: sub_4015d4 at 0x4015d4
void sub_4015d4()
{
 unsigned int arr[150] = {0};
 array_3d(arr);
 return;
}


// Function: sub_4015dd at 0x4015dd
void sub_4015dd(unsigned int a0, unsigned int a1)
{
 array_pointer(0, 0);
 return;
}


// Function: array_pointer at 0x4015e0
unsigned int array_pointer(unsigned int *a0, unsigned int a1)
{
 unsigned int v0; // edx
 unsigned int *ptr; // eax

 if (a1 <= 0)
 return 0;
 v0 = 0;
 ptr = a0;
 do
 {
 v0 += *(ptr);
 ptr += 10;
 } while (ptr != &a0[10 * a1]);
 return v0;
}


// Function: sub_40160c at 0x40160c
void sub_40160c()
{
 array_vla(0, 0);
 return;
}


// Function: sub_401615 at 0x401615
int sub_401615()
{
 pointer_array(0, 0);
 return 0;
}


// Function: pointer_array at 0x401620
unsigned int pointer_array(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // eax
 unsigned int v1; // ebx
 unsigned int v3; // ebx
 unsigned int idx; // eax
 unsigned int v5; // ecx

 v0 = a1;
 if (v0 <= 10)
 v1 = v0;
 else
 v1 = 10;
 v3 = v1;
 if (v0 <= 0)
 return 0;
 idx = 0;
 v5 = 0;
 do
 {
 if (*((int *)(a0 + idx * 4)))
 v5 += *((int *)*((int *)(a0 + idx * 4)));
 } while ((idx += 1, v3 > idx));
 return v5;
}


// Function: sub_401655 at 0x401655
void sub_401655()
{
 array_pointer(0, 0);
 return;
}


// Function: sub_40165f at 0x40165f
int sub_40165f()
{
 array_complex_index(0, 0, 0, 0, 0);
 return 0;
}


// Function: array_complex_index at 0x401660
unsigned int array_complex_index(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 if ((a3 | a4) < 0)
 {
 return 4294967295;
 }
 else if (a3 >= a1)
 {
 return 4294967295;
 }
 else if (a4 < a2)
 {
 return *((int *)(a0 + (a4 * a1 + a3) * 4));
 }
 else
 {
 return 4294967295;
 }
}


// Function: sub_40168f at 0x40168f
void sub_40168f()
{
 pointer_array(0, 0);
 return;
}


// Function: sub_401697 at 0x401697
void sub_401697(unsigned int a0, unsigned int a1)
{
 array_oob(0, 0);
 return;
}


// Function: array_oob at 0x4016a0
unsigned int array_oob(unsigned int *a0, unsigned int a1)
{
 unsigned int v0; // edx
 unsigned int *ptr; // eax

 if (a1 < 0)
 return 0;
 v0 = 0;
 ptr = a0;
 do
 {
 v0 += *(ptr);
 ptr += 1;
 } while (ptr != &a0[a1 + 1]);
 return v0;
}


// Function: sub_4016cc at 0x4016cc
void sub_4016cc()
{
 array_complex_index(0, 0, 0, 0, 0);
 return;
}


// Function: sub_4016d5 at 0x4016d5
int sub_4016d5()
{
 test_array_types();
 return 0;
}


// Function: test_array_types at 0x4016e0
extern unsigned int g_4033bd;

int test_array_types()
{
 unsigned long v7; // ldt
 unsigned long v8; // gdt
 unsigned int v17; // edx
 unsigned int v18; // eax
 void* m; // ecx
 void* l; // edx
 void* cur; // eax
 unsigned int v22; // eax
 void* p; // edx
 void* ptr; // edx
 unsigned int idx; // eax
 unsigned short v9; // gs
 unsigned int v10; // eax
 char *iter; // ebp
 unsigned int j; // ecx
 char *v13; // esi
 unsigned int index; // eax
 char *addr; // esi
 unsigned int result; // edx
 unsigned long v26; // [bp-0x3fc]
 char v0; // [bp-0x3b8]
 char v1; // [bp-0x3b7]
 unsigned long v27; // [bp-0x1f4]
 char v2; // [bp-0x1b8]
 char v3[6]; // [bp-0x26]
 unsigned int v4; // [bp-0x20]
 char v6; // [bp+0x3c]

 v4 = *((int *)_ccall(v7, v8, (unsigned int)v9, 20));
 sub_4010b0(&g_4033bd);
 sub_4010c0(1, "ARR-L1-01 (array_1d_stack): %d\n", 15);
 strncpy(v3, "hello", 5);
 v10 = 0;
 do
 {
 v10 += 1;
 } while (v3[v10]);
 sub_4010c0(1, "ARR-L1-02 (array_string): %d\n", v10);
 iter = &v1;
 j = 0;
 v13 = &v1;
 do
 {
 index = 0;
 addr = v13;
 do
 {
 result = 0;
 if (index == j)
 v17 = index;
 else
 v17 = result;
 *((unsigned int *)&addr[4 * index]) = v17;
 index += 1;
 } while (index != 10);
 j += 1;
 v13 = addr + 40;
 } while (j != 10);
 v18 = 0;
 do
 {
 v18 += *(iter);
 iter += 11;
 } while ((char*)&v27 != iter);
 sub_4010c0(1, "ARR-L1-03 (array_2d_stack): %d\n", v18);
 m = &v2;
 l = &v2;
 do
 {
 cur = (void*)((char*)l - 100);
 do
 {
 *((unsigned int *)cur) = 1;
 cur = (void*)((char*)cur + 20);
 *((unsigned int *)&((char*)cur)[16]) = 1;
 *((unsigned int *)&((char*)cur)[12]) = 1;
 *((unsigned int *)&((char*)cur)[8]) = 1;
 *((unsigned int *)&((char*)cur)[4]) = 1;
 } while (l != cur);
 l = (void*)((char*)l + 100);
 } while (&v6 != l);
 v22 = 0;
 do
 {
 p = (void*)((char*)m - 100);
 do
 {
 ptr = (void*)((char*)p + 20);
 v22 = v22 + *((int *)p) + (int)((char*)ptr)[16] + (int)((char*)ptr)[12] + (int)((char*)ptr)[8] + (int)((char*)ptr)[4];
 p = ptr;
 } while (m != p);
 m = (void*)((char*)m + 100);
 } while (m != &v6);
 sub_4010c0(1, "ARR-L1-04 (array_3d): %d\n", v22);
 sub_4010c0(1, "ARR-L2-01 (array_vla): %d\n", 60);
 sub_4010c0(1, "ARR-L2-02 (array_pointer): %d\n", 100);
 sub_4010c0(1, "ARR-L2-03 (pointer_array): %d\n", 60);
 idx = 0;
 do
 {
 (&v26)[idx] = idx;
 idx += 1;
 } while (idx != 20);
 sub_4010c0(1, "ARR-L2-04 (array_complex_index): %d\n", *((int *)&v0));
if (v4 != *((int *)_ccall(v7, v8, (unsigned int)v9, 20)))
{
 __stack_chk_fail_local();
 return ptr_single(0);
}
return v4 - *((int *)_ccall(v7, v8, (unsigned int)v9, 20));
}


// Function: ptr_single at 0x4018d0
int ptr_single(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: sub_4018de at 0x4018de
void sub_4018de(unsigned int a0)
{
 ptr_double(0);
 return;
}


// Function: ptr_double at 0x4018e0
int ptr_double(struct struct_0 **a0)
{
 return (*a0)->field_0 + 5;
}


// Function: ptr_triple at 0x4018f0
int ptr_triple(struct struct_1 **a0)
{
 return (*a0)->field_0 + 1;
}


// Function: sub_401902 at 0x401902
int sub_401902()
{
 ptr_increment(0, 0);
 return 0;
}


// Function: ptr_increment at 0x401910
unsigned int ptr_increment(unsigned int ptr, unsigned int i)
{
 unsigned int idx; // eax
 unsigned int v1; // edx

 if (i <= 0)
 return 0;
 idx = 0;
 v1 = 0;
 do
 {
 v1 += *((int *)(ptr + idx * 4));
 idx += 1;
 } while (i != idx);
 return v1;
}


// Function: sub_401936 at 0x401936
void sub_401936()
{
 ptr_offset(0, 0);
 return;
}


// Function: sub_401946 at 0x401946
void sub_401946(unsigned int a0, unsigned int a1)
{
 ptr_offset(a0, a1);
 return;
}


// Function: ptr_offset at 0x401950
int ptr_offset(unsigned int a0, unsigned int a1)
{
 return *((int *)(a0 + a1 * 4));
}


// Function: ptr_diff at 0x401960
unsigned int ptr_diff(unsigned int a0, unsigned int a1)
{
 return a0 - a1 >> 2;
}


// Function: ptr_void at 0x401970
unsigned int ptr_void(void* a0, unsigned int a1)
{
 if (!a1)
 {
 return *((int *)a0);
 }
 else if (a1 == 1)
 {
 return *((char *)a0);
 }
 else
 {
 return 4294967295;
 }
}


// Function: sub_401989 at 0x401989
void sub_401989()
{
 ptr_diff(0, 0);
 return;
}


// Function: sub_401997 at 0x401997
void sub_401997()
{
 ptr_void(0, 0);
 return;
}


// Function: sub_4019a6 at 0x4019a6
void sub_4019a6(unsigned int a0)
{
 ptr_const(0);
 return;
}


// Function: ptr_const at 0x4019b0
unsigned int ptr_const(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: sub_4019bd at 0x4019bd
void sub_4019bd(unsigned int a0)
{
 ptr_const_ptr(0);
 return;
}


// Function: ptr_const_ptr at 0x4019c0
int ptr_const_ptr(unsigned int *ptr)
{
 *(ptr) = *(ptr) + 5;
 return *(ptr) + 5;
}



// Function: ptr_func_simple at 0x4019d0
int ptr_func_simple(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp+0x4]

 v0 = a1;
 return a0;
}


// Function: sub_4019e2 at 0x4019e2
void sub_4019e2()
{
 ptr_func_complex(0, 0);
 return;
}


// Function: ptr_func_complex at 0x4019f0
unsigned int ptr_func_complex(unsigned int *a0, unsigned int a1)
{
 unsigned int v3; // eax
 unsigned long v4; // ldt
 unsigned long v5; // gdt
 unsigned short v6; // gs
 unsigned int v7; // eax
 unsigned int v0; // [bp-0x18]
 unsigned int result; // [bp-0x14]
 unsigned int v2; // [bp-0x10]

 v3 = __x86_get_pc_thunk_ax();
 v2 = *((int *)_ccall(v4, v5, (unsigned int)v6, 20));
 result = 0;
 v0 = v3 - -6706;
 v7 = ((unsigned int(*)(unsigned int, void*))a0)(a1, &v0);
 if (v2 != *((int *)_ccall(v4, v5, (unsigned int)v6, 20)))
 {
 __stack_chk_fail_local();
 return ptr_cast(0);
 }
 return v7;
}


// Function: ptr_cast at 0x401a50
int ptr_cast(unsigned int *a0)
{
 return *(a0);
}


// Function: sub_401a5b at 0x401a5b
void sub_401a5b(unsigned int a0)
{
 opaque_handle_create(0);
 return;
}


// Function: opaque_handle_create at 0x401a60
int opaque_handle_create(unsigned int a0)
{
 return a0;
}


// Function: sub_401a69 at 0x401a69
void sub_401a69(unsigned int a0)
{
 opaque_handle_op(0);
 return;
}


// Function: opaque_handle_op at 0x401a70
unsigned int opaque_handle_op(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_401a7b at 0x401a7b
int sub_401a7b()
{
 test_pointer_types();
 return 0;
}


// Function: test_pointer_types at 0x401a80
extern unsigned int g_403430;

int test_pointer_types()
{
 unsigned long v7; // ldt
 unsigned long v8; // gdt
 unsigned short v9; // gs
 unsigned int v10; // edx
 unsigned int v11; // ecx
 unsigned int *cur; // eax
 unsigned int result; // [bp-0x24]
 unsigned int v1; // [bp-0x20]
 unsigned int v2; // [bp-0x1c]
 unsigned int v3; // [bp-0x18]
 unsigned int v4; // [bp-0x14]
 unsigned int v5; // [bp-0x10]

 v5 = *((int *)_ccall(v7, v8, (unsigned int)v9, 20));
 sub_4010b0(&g_403430);
 sub_4010c0(1, "PTR-L2-01 (ptr_single): %d\n", 15);
 sub_4010c0(1, "PTR-L2-02 (ptr_double): %d\n", 15);
 sub_4010c0(1, "PTR-L2-03 (ptr_triple): %d\n", 6);
 result = 1;
 v10 = 0;
 v11 = 1;
 v1 = 2;
 v2 = 3;
 v3 = 4;
 v4 = 5;
 cur = &result;
  while (1)
 {
 cur += 1;
 v10 += v11;
 if (cur == &v5)
 break;
 v11 = *(cur);
 }
 sub_4010c0(1, "PTR-L2-04 (ptr_increment): %d\n", v10);
 sub_4010c0(1, "PTR-L2-05 (ptr_offset): %d\n", 30);
 sub_4010c0(1, "PTR-L2-06 (ptr_diff): %d\n", 4);
 sub_4010c0(1, "PTR-L2-07 (ptr_void): %d\n", 42);
 sub_4010c0(1, "PTR-L2-07 (ptr_void): %d\n", 65);
 sub_4010c0(1, "PTR-L2-08 (ptr_const): %d\n", 20);
 sub_4010c0(1, "PTR-L2-09 (ptr_const_ptr): %d\n", 15);
 sub_4010c0(1, "PTR-L2-10 (ptr_func_simple): %d\n", 10);
 sub_4010c0(1, "PTR-L2-11 (ptr_func_complex): %d\n", 1);
 sub_4010c0(1, "PTR-L2-12 (ptr_cast): 0x%x\n", 305419896);
 sub_4010c0(1, "PTR-L2-13 (opaque_handle_op): %d\n", 20);
 if (v5 != *((int *)_ccall(v7, v8, (unsigned int)v9, 20)))
 {
 __stack_chk_fail_local();
 return struct_simple(0);
 }
 return v5 - *((int *)_ccall(v7, v8, (unsigned int)v9, 20));
}


// Function: sub_401b21 at 0x401b21
void sub_401b21()
{
 struct_simple(0);
 return;
}


// Function: struct_simple at 0x401c20
int struct_simple(unsigned int *a0)
{
 return a0[1] + *(a0) + a0[2];
}


// Function: sub_401c31 at 0x401c31
int sub_401c31()
{
 struct_array(0, 0);
 return 0;
}


// Function: struct_array at 0x401c40
unsigned int struct_array(unsigned int *a0, unsigned int a1)
{
 unsigned int v0; // ecx
 unsigned int i[3]; // eax
 unsigned int v2; // ecx
 unsigned int p[3]; // eax
 unsigned int ptr[3]; // eax
 unsigned int v5; // ecx

 if (a1 <= 0)
 return 0;
 v0 = 0;
 i = a0;
 do
 {
 v2 = v0;
 p = i;
 ptr = p + 1;
 v5 = v2 + p[1] + ptr[1] + ptr[1];
 i = ptr;
 v0 = v5;
 } while (&a0[3 * a1] != i);
 return v2 + p[1] + ptr[1] + ptr[1];
}


// Function: sub_401c76 at 0x401c76
void sub_401c76()
{
 struct_array(0, 0);
 return;
}


// Function: sub_401c86 at 0x401c86
void sub_401c86(unsigned int a0)
{
 struct_nested(0);
 return;
}


// Function: struct_nested at 0x401c90
int struct_nested(unsigned int *a0)
{
 return a0[3] + *(a0);
}


// Function: sub_401c9e at 0x401c9e
void sub_401c9e(unsigned int a0)
{
 struct_deep(0);
 return;
}


// Function: struct_deep at 0x401ca0
int struct_deep(unsigned int *a0)
{
 return a0[5] + a0[2];
}


// Function: sub_401caf at 0x401caf
void sub_401caf(unsigned int a0)
{
 struct_with_ptr(0);
 return;
}


// Function: struct_with_ptr at 0x401cb0
unsigned int struct_with_ptr(struct struct_0 *ptr)
{
 unsigned int v0; // eax

 v0 = ptr->field_0;
 if (ptr->field_4)
 v0 = ptr->field_0 + ((struct struct_0*)ptr->field_4)->field_0;
 return v0;
}


// Function: sub_401cc4 at 0x401cc4
int sub_401cc4()
{
 struct_bitfields(0);
 return 0;
}


// Function: struct_bitfields at 0x401cd0
int struct_bitfields(void* a0)
{
 return (*((char *)a0) & 1) + (*((char *)a0) >> 1 & 3) + (*((char *)a0) >> 3 & 7) + (*((short *)a0) >> 6);
}


// Function: union_type at 0x401d00
int union_type(void* a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x8]

 if (!a1)
 {
 return *((int *)a0);
 }
 else if (a1 != 1)
 {
 return *((char *)a0);
 }
 else
 {
 return *((int *)a0);
 }
}


// Function: sub_401d1f at 0x401d1f
void sub_401d1f()
{
 struct_nested(0);
 return;
}


// Function: sub_401d2a at 0x401d2a
void sub_401d2a()
{
 struct_deep(0);
 return;
}


// Function: sub_401d55 at 0x401d55
void sub_401d55(unsigned int a0, unsigned int a1)
{
 union_array(0, 0);
 return;
}


// Function: union_array at 0x401d60
unsigned int union_array(unsigned int *a0, unsigned int a1)
{
 unsigned int v0; // edx
 unsigned int *ptr; // eax

 if (a1 <= 0)
 return 0;
 v0 = 0;
 ptr = a0;
 do
 {
 v0 += *(ptr);
 ptr += 1;
 } while (ptr != &a0[a1]);
 return v0;
}


// Function: sub_401d84 at 0x401d84
void sub_401d84()
{
 union_array(0, 0);
 return;
}


// Function: sub_401d8d at 0x401d8d
void sub_401d8d(unsigned int a0)
{
 enum_type(a0);
 return;
}


// Function: enum_type at 0x401d90
unsigned int enum_type(unsigned int a0)
{
 return a0 * 10;
}


// Function: sub_401d9e at 0x401d9e
void sub_401d9e()
{
 enum_switch(0);
 return;
}


// Function: enum_switch at 0x401da0
unsigned int enum_switch(unsigned int a0)
{
 unsigned int v0; // ecx

 __x86_get_pc_thunk_cx();
 if (a0 > 3)
 return 4294967197;
 return *((int *)(v0 + 16935 + a0 * 4 - 10664));
}


// Function: sub_401dc5 at 0x401dc5
void sub_401dc5(unsigned int a0)
{
 struct_func_ptr(0);
 return;
}


// Function: struct_func_ptr at 0x401dd0
int struct_func_ptr(unsigned int *ptr)
{
 unsigned int v0; // [bp+0x4]

 v0 = *(ptr);
 return ((int(*)())ptr[1])();
}


// Function: sub_401de1 at 0x401de1
void sub_401de1(unsigned int a0)
{
 linked_list(0);
 return;
}


// Function: linked_list at 0x401df0
unsigned int linked_list(struct struct_0 *ptr)
{
 unsigned int v0; // edx

 v0 = 0;
 if (ptr)
 {
 do
 {
 v0 += ptr->field_0;
 ptr = (struct struct_0*)ptr->field_4;
 } while (ptr->field_4);
 }
 return v0;
}


// Function: sub_401e0c at 0x401e0c
void sub_401e0c(unsigned int a0)
{
 doubly_linked_list(0);
 return;
}


// Function: doubly_linked_list at 0x401e10
unsigned int doubly_linked_list(struct struct_0 *ptr)
{
 unsigned int v0; // edx

 v0 = 0;
 if (ptr)
 {
 do
 {
 v0 += ptr->field_0;
 ptr = (struct struct_0*)ptr->field_4;
 } while (ptr->field_4);
 }
 return v0;
}


// Function: sub_401e2c at 0x401e2c
int sub_401e2c()
{
 binary_tree_sum(0);
 return 0;
}


// Function: binary_tree_sum at 0x401e30
unsigned int binary_tree_sum(struct struct_0 *a0)
{
 unsigned int v0; // [bp-0x70]

 v0 = 0;
 if (!a0)
 return v0;
 return a0->field_0;
}


// Function: sub_402051 at 0x402051
int sub_402051()
{
 binary_tree(0);
 return 0;
}


// Function: binary_tree at 0x402060
unsigned int binary_tree(struct struct_0 *a0)
{
 unsigned int v0; // esi
 struct struct_0 *result; // ebx
 struct struct_0 *ptr; // ebx
 unsigned int v3; // eax
 struct struct_0 *v4; // ebx

 v0 = 0;
 result = a0;
 if (!result)
 return 0;
 do
 {
 ptr = result;
 v3 = binary_tree_sum(ptr->field_4);
 v4 = ptr->field_8;
 v0 += v3 + ptr->field_0;
 result = v4;
 } while (ptr->field_8);
 return v0;
}


// Function: sub_402094 at 0x402094
int sub_402094()
{
 graph_traverse(0);
 return 0;
}


// Function: graph_traverse at 0x4020a0


unsigned int graph_traverse(struct struct_0 *a0)
{
 struct struct_0 *v0; // ecx
 unsigned int v1; // edx
 struct struct_0 *v2; // ecx
 struct struct_0 *p; // ecx
 struct struct_0 *ptr; // eax
 struct struct_0 *v6; // ecx

 v0 = a0;
 if (v0->field_4 <= 0)
 return 0;
 v1 = 0;
 v2 = v0;
 do
 {
 p = v2;
 ptr = (struct struct_0*)p->field_0;
 if (p->field_0)
 {
 do
 {
 v1 += ptr->field_0;
 ptr = (struct struct_0*)ptr->field_4;
 } while (ptr->field_4);
 }
 } while ((v2 = (struct struct_0*)((char*)p + 4), v2 != (struct struct_0*)((char*)v0 + v0->field_4 * 4)));
 return v1;
}


// Function: sub_4020da at 0x4020da
int sub_4020da()
{
 test_composite_types();
 return 0;
}


// Function: test_composite_types at 0x4020e0
extern unsigned int g_403526;

int test_composite_types()
{
 unsigned long v15; // ldt
 unsigned long v16; // gdt
 unsigned short v17; // gs
 struct_0 *cur; // eax
 unsigned int v19; // ecx
 unsigned int v20; // edx
 struct_1 *iter; // eax
 unsigned int v22; // ecx
 unsigned int v23; // edx
 unsigned int v0; // [bp-0x40]
 char *v1; // [bp-0x3c]
 unsigned int v2[1]; // [bp-0x38]
 char *v3; // [bp-0x34]
 unsigned int v4[1]; // [bp-0x30]
 unsigned int result[1]; // [bp-0x2c]
 unsigned int v7; // [bp-0x28]
 char *v8; // [bp-0x24]
 unsigned int flag1; // [bp-0x20]
 unsigned int v10; // [bp-0x1c]
 unsigned int flag2; // [bp-0x18]
 char *v12; // [bp-0x14]
 unsigned int v13; // [bp-0x10]
 struct_0 *cur_ptr; // [bp-0xc]
 struct_1 *iter_ptr; // [bp-0x8]

 v13 = *((int *)_ccall(v15, v16, (unsigned int)v17, 20));
 sub_4010b0(&g_403526);
 sub_4010c0(1, "CMP-L2-01 (struct_simple): %d\n", struct_simple(0));
 sub_4010c0(1, "CMP-L2-02 (struct_array): %d\n", struct_array(0, 3));
 sub_4010c0(1, "CMP-L2-03 (struct_nested): %d\n", struct_nested(0));
 sub_4010c0(1, "CMP-L2-04 (struct_deep): %d\n", struct_deep(0));
 sub_4010c0(1, "CMP-L2-05 (struct_with_ptr): %d\n", 30);
 sub_4010c0(1, "CMP-L2-06 (struct_bitfields): %d\n", struct_bitfields(0));
 sub_4010c0(1, "CMP-L2-07 (union_type): %d\n", 305419896);
 sub_4010c0(1, "CMP-L2-08 (union_array): %d\n", 60);
 sub_4010c0(1, "CMP-L2-09 (enum_type): %d\n", 10);
 sub_4010c0(1, "CMP-L2-10 (enum_switch): %d\n", enum_switch(2));
 sub_4010c0(1, "CMP-L2-11 (struct_func_ptr): %d\n", struct_func_ptr(0));
 cur_ptr = (struct_0*)&v2;
 v0 = 10;
 v19 = 10;
 v20 = 0;
v2[0] = 20;
v4[0] = 30;
result[0] = 0;
 while (1)
 {
 v20 += v19;
 if (!cur_ptr || cur_ptr == (struct_0*)0xFFFFFFFF)
 break;
 v19 = cur_ptr->field_0;
 cur_ptr = (struct_0*)cur_ptr->field_4;
 }
 sub_4010c0(1, "CMP-L2-12 (linked_list): %d\n", linked_list(0));
 iter_ptr = (struct_1*)&v7;
 v7 = 10;
 v22 = 10;
 v23 = 0;
flag1 = 0;
v10 = 20;
flag2 = 0;
 while (1)
 {
 iter_ptr = (struct_1*)iter_ptr->field_0;
 v23 += v22;
 if (!iter_ptr || iter_ptr == (struct_1*)0xFFFFFFFF)
 break;
 v22 = iter_ptr->field_0;
 }
 sub_4010c0(1, "CMP-L2-13 (doubly_linked_list): %d\n", doubly_linked_list(0));
 sub_4010c0(1, "CMP-L2-14 (binary_tree): %d\n", binary_tree_sum(0) + 100);
 sub_4010c0(1, "CMP-L2-15 (graph_traverse): %d\n", 1);
 if (v13 == *((int *)_ccall(v15, v16, (unsigned int)v17, 20)))
 return v13 - *((int *)_ccall(v15, v16, (unsigned int)v17, 20));
 __stack_chk_fail_local();
}


// Function: sub_40221e at 0x40221e
void sub_40221e()
{
 struct_bitfields(0);
 return;
}


// Function: sub_402279 at 0x402279
void sub_402279()
{
 union_type(0, 0);
 return;
}


// Function: __x86_get_pc_thunk_ax at 0x4022eb
unsigned int __x86_get_pc_thunk_ax()
{
 char v0; // [bp+0x0]

 return *((int *)&v0);
}


// Function: __x86_get_pc_thunk_cx at 0x4022ef
void __x86_get_pc_thunk_cx()
{
 return;
}


// Function: sub_4022f3 at 0x4022f3
int sub_4022f3()
{
 __stack_chk_fail_local();
 return 0;
}


// Function: __stack_chk_fail_local at 0x402300
int __stack_chk_fail_local()
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = v2;
 sub_4010a0();
 __do_global_ctors_aux();
 return 0;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

unsigned int __do_global_ctors_aux(void)
{
 struct_0 *v2; // edx
 struct_0 *ptr; // edx
 unsigned int *v4; // eax
 unsigned int v5; // ebx
 struct_0 *v6; // ebx
 struct_0 *p; // ebx
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_dx();
 ptr = &v2->padding_0[227];
 v4 = (unsigned int *)ptr;
 if (*v4 == 0xffffffff)
 return 4294967295;
 v0 = v5;
 v6 = ptr;
 do
 {
 p = v6;
 ((void(*)())*v4)();
 v4 = (unsigned int *)((char*)p + 4);
 v6 = (struct_0*)((char*)p + 4);
 } while (*v4 != 0xffffffff);
 return 4294967295;
}


// Function: sub_402362 at 0x402362
void sub_402362()
{
 enum_type(0);
 return;
}



/* CRT stub function _fini removed by preprocessor */


