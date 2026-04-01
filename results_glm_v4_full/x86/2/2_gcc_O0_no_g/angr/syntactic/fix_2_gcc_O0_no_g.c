// Angr Decompilation of 2_gcc_O0_no_g
// Platform: X86


/* CRT stub function _init removed by preprocessor */

#include <stddef.h>
#include <math.h>

typedef struct struct_0_base {
 char padding_0[32];
 unsigned int field_20;
 struct struct_0_base *field_4;
 unsigned int field_0;
} struct_0;

extern struct_0 *g_405ff4;

/* Global variable definitions */
unsigned int g_403010 = 0;
unsigned int g_40317c = 0;
unsigned int g_40329a = 0;
unsigned int g_40343e = 0;

/* Stack canary access function - decompiler artifact for reading gs:20 */
void* _ccall(unsigned long ldt, unsigned long gdt, unsigned int seg, unsigned int offset)
{
 unsigned int value;
 __asm__("movl %%gs:%1, %0" : "=r"(value) : "i"(20));
 return (void*)(unsigned long)value;
}

int _init()
{
 if (g_405ff4)
 ((void(*)())g_405ff4)();
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
 unsigned int ptr[3]; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 if (ptr[2])
 ((void(*)())ptr[2])();
}


// Function: sub_401040 at 0x401040
int sub_401040()
{
 sub_401030(0);
 return;
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
 return;
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
 return;
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
 return;
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
 struct_0 *v1; // ebx

 return 0;
}


// Function: sub_40108a at 0x40108a
int sub_40108a()
{
 sub_401090();
 return;
}


// Function: sub_401090 at 0x401090
int sub_401090()
{
 struct_0 *v1; // ebx

 return 0;
}


// Function: sub_40109a at 0x40109a
int sub_40109a()
{
 sub_4010a0();
 return;
}


// Function: sub_4010a0 at 0x4010a0
int sub_4010a0()
{
 struct_0 *v1; // ebx

 return 0;
}


// Function: sub_4010aa at 0x4010aa
int sub_4010aa()
{
 sub_4010b0();
 return;
}


// Function: sub_4010b0 at 0x4010b0
int sub_4010b0()
{
 struct_0 *v1; // ebx

 return 0;
}


// Function: sub_4010ba at 0x4010ba
int sub_4010ba()
{
 sub_4010c0();
 return;
}


// Function: sub_4010c0 at 0x4010c0
int sub_4010c0()
{
 struct_0 *v1; // ebx

 return 0;
}


// Function: sub_4010ca at 0x4010ca
void sub_4010ca()
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4010fc at 0x4010fc
void sub_4010fc()
{
 return;
}


// Function: __x86_get_pc_thunk_bx at 0x401100
void __x86_get_pc_thunk_bx()
{
 return;
}


// Function: sub_401104 at 0x401104
void sub_401104()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

void deregister_tm_clones()
{
 unsigned int *ptr; // edx

 __x86_get_pc_thunk_dx();
}


// Function: sub_401143 at 0x401143
void sub_401143()
{
}


// Function: sub_401149 at 0x401149
void sub_401149()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */

void register_tm_clones()
{
 struct_0 *v2; // edx
 struct_0 *v3; // edx
 unsigned int v4; // ebx
 unsigned int v0; // [bp-0x8]
 int (*func_ptr)(int, int); // Function pointer

 __x86_get_pc_thunk_dx();
 v3 = &v2->padding_0[20091];
 v0 = v4;
 if (!(&v3->padding_0[56] - &v3->padding_0[56] >> 31) + (&v3->padding_0[56] - &v3->padding_0[56] >> 2) >> 1)
 {
 return;
 }
 else if (*((int *)&v3->padding_0[44]))
 {
 int (*fp)(int, int) = (int (*)(int, int))*(unsigned int *)&v3->padding_0[44];
 if (fp)
 fp(*(int *)&v3->padding_0[56], (&v3->padding_0[56] - &v3->padding_0[56] >> 31) + (&v3->padding_0[56] - &v3->padding_0[56] >> 2) >> 1);
 }
}


// Function: sub_401197 at 0x401197
void sub_401197()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

void __do_global_dtors_aux()
{
 unsigned int *v5; // eax
 struct_0 *v6; // edi
 struct_0 *ptr; // edi
 unsigned int v8; // esi
 unsigned int v9; // ebx
 struct_0 *v10; // esi
 unsigned int v11; // eax
 unsigned int i; // ebx
 unsigned int v13; // eax
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 char v2; // [bp-0x8]
 char v3; // [bp+0x0]

 ptr = (struct_0*)((char*)v6 + 20003);
 v1 = v8;
 v0 = v9;
 if (((char*)ptr)[56])
 return;
 if (*((int *)((char*)ptr + 32)))
 sub_401080(*((int *)((char*)ptr + 52)));
 v10 = (struct_0*)((char*)ptr + 224);
 v11 = *((int *)((char*)ptr + 60));
 i = (((char*)ptr + 220) - (char*)v10 >> 2) - 1;
 if (*((int *)((char*)ptr + 60)) < i)
 {
 do
 {
 v13 = v11 + 1;
 *((unsigned int *)((char*)ptr + 60)) = v13;
 ((void(*)())*((unsigned int *)((char*)v10 + 4 * v13)))();
 v11 = *((int *)((char*)ptr + 60));
 } while (*((int *)((char*)ptr + 60)) < i);
 }
 deregister_tm_clones();
 ((char*)ptr)[56] = 1;
}


// Function: sub_40122a at 0x40122a
void sub_40122a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86_get_pc_thunk_dx at 0x401239
void __x86_get_pc_thunk_dx()
{
 return;
}


// Function: __x86_get_pc_thunk_di at 0x40123d
int __x86_get_pc_thunk_di(int a0, void *a1)
{
 unsigned int v0; // eax

 return v0;
}


// Function: double_value at 0x401241
unsigned int double_value(unsigned int a0)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return a0 * 2;
}


// Function: process_char at 0x401259
int process_char(char a0)
{
 __x86_get_pc_thunk_ax();
 if (a0 > 64 && a0 <= 90)
 return a0 + 32;
 return a0;
}


// Function: process_short at 0x40128e
int process_short(unsigned short a0, unsigned short a1)
{
 __x86_get_pc_thunk_ax();
 return a1 + a0;
}


// Function: process_int at 0x4012bc
int process_int(unsigned int a0)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return a0 * 2 + 1;
}


// Function: process_long at 0x4012d7
unsigned int process_long(unsigned int a0)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return a0 * 2;
}


// Function: process_ll at 0x4012ef
int process_ll(unsigned int a0, unsigned int a1)
{
 __x86_get_pc_thunk_ax();
 return a0 * a0;
}


// Function: process_float at 0x40132e
unsigned int process_float(unsigned int a0)
{
 unsigned int v1; // eax
 char v0; // [bp+0x0]

 v1 = __x86_get_pc_thunk_ax(&v0);
 /* SIMD operations removed - decompiler artifact */
 return v1 + 19606;
}


// Function: process_double at 0x401354
unsigned int process_double(unsigned int a0, unsigned int a1)
{
 unsigned int v2; // eax
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 v2 = __x86_get_pc_thunk_ax();
 v0 = a0;
 v1 = a1;
 /* SIMD operations removed - decompiler artifact */
 return v2 + 19565;
}


// Function: process_ld at 0x401389
unsigned int process_ld()
{
 unsigned int v2; // eax
 char v0; // [bp+0x0]

 v2 = __x86_get_pc_thunk_ax(&v0);
 /* SIMD operations removed - decompiler artifact */
 return v2 + 19515;
}


// Function: process_bool at 0x4013a7
unsigned int process_bool(unsigned int a0)
{
 unsigned int v1; // eax
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 if (a0 > 0 && !((char)a0 & 1))
 v1 = 1;
 else
 v1 = 0;
 return v1 & 1;
}


// Function: const_param at 0x4013d9
int const_param(unsigned int *a0)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return *(a0) + 10;
}


// Function: volatile_access at 0x4013f4
int volatile_access(unsigned int *ptr)
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 v0 = *(ptr);
 v1 = *(ptr);
 return v1 + v0;
}


// Function: test_data_types_l1 at 0x401422
extern unsigned int g_403010;

int test_data_types_l1()
{
 unsigned int v14; // edx
 double v0; // [sp-0x2c], Other Possible Types: unsigned long, unsigned int
 double v1; // [bp-0x28], Other Possible Types: unsigned long
 unsigned int v20; // [bp-0x28]
 unsigned int v2[1]; // [bp-0x18]
 unsigned int v3[1]; // [bp-0x14]
 unsigned int v4; // [bp-0x10]

 __asm__("movl %%gs:20, %0" : "=r"(v4));
 sub_4010c0(&g_403010);
 sub_4010a0("DT-L1-01 (process_char): %c\n", process_char(65) & 255);
 sub_4010a0("DT-L1-01 (process_char): %c\n", process_char(98) & 255);
 sub_4010a0("DT-L1-02 (process_short): %d\n", process_short(100, 200) & 65535);
 sub_4010a0("DT-L1-03 (process_int): %d\n", process_int(5));
 sub_4010a0("DT-L1-04 (process_long): %ld\n", process_long(100));
 v20 = process_ll(100, 0);
 sub_4010a0("DT-L1-05 (process_ll): %lld\n", v20, v14);
 v0 = 0.0;
 process_float(v0);
 v1 = 0.0;
 sub_4010a0("DT-L1-06 (process_float): %.2f\n", v1);
 v0 = 0.0;
 process_double(v0, v20);
 v1 = 0.0;
 sub_4010a0("DT-L1-07 (process_double): %.2f\n", v1);
 process_ld();
 sub_4010a0("DT-L1-08 (process_ld): %.2Lf\n", 0.0L);
 sub_4010a0("DT-L1-09 (process_bool): %d\n", process_bool(4) & 255);
 sub_4010a0("DT-L1-09 (process_bool): %d\n", process_bool(3) & 255);
 sub_4010a0("DT-L1-09 (process_bool): %d\n", process_bool(4294967294) & 255);
 *(unsigned int*)v2 = 5;
 sub_4010a0("DT-L1-10 (const_param): %d\n", const_param(&v2));
 *(unsigned int*)v3 = 10;
 sub_4010a0("DT-L1-11 (volatile_access): %d\n", volatile_access(&v3));
 {
 unsigned int canary;
 __asm__("movl %%gs:20, %0" : "=r"(canary));
 if (v4 == canary)
 return 0;
 }
 return __stack_chk_fail_local();
}


// Function: array_1d_stack at 0x401686
unsigned int array_1d_stack(unsigned int ptr, unsigned int a1)
{
 unsigned int v0; // [bp-0xc]
 unsigned int idx; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 v0 = 0;
 for (idx = 0; idx < a1; idx += 1)
 {
 v0 += *((int *)(ptr + idx * 4));
 }
 return v0;
}


// Function: array_string at 0x4016cf
unsigned int array_string(unsigned int a0)
{
 unsigned int i; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 for (i = 0; *((char *)(a0 + i)); i += 1);
 return i;
}


// Function: array_2d_stack at 0x401704
unsigned int array_2d_stack(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]
 unsigned int idx; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 v0 = 0;
 for (idx = 0; idx <= 9; idx += 1)
 {
 v0 += *((int *)(idx * 40 + a0 + idx * 4));
 }
 return v0;
}


// Function: array_3d at 0x401754
unsigned int array_3d(unsigned int a0)
{
 unsigned int v0; // [bp-0x14]
 unsigned int i; // [bp-0x10]
 unsigned int j; // [bp-0xc]
 unsigned int k; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 v0 = 0;
 for (i = 0; i <= 4; i += 1)
 {
 for (j = 0; j <= 4; j += 1)
 {
 for (k = 0; k <= 4; k += 1)
 {
 v0 += *((int *)(i * 100 + a0 + (j * 5 + k) * 4));
 }
 }
 }
 return v0;
}


// Function: array_vla at 0x4017ce
unsigned int array_vla(unsigned int a0, unsigned int ptr)
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 v0 = 0;
 for (v1 = 0; v1 < a0; v1 += 1)
 {
 v0 += *((int *)(ptr + v1 * 4));
 }
 return v0;
}


// Function: array_pointer at 0x401817
unsigned int array_pointer(unsigned int ptr, unsigned int a1)
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 v0 = 0;
 for (v1 = 0; v1 < a1; v1 += 1)
 {
 v0 += *((int *)(ptr + v1 * 40));
 }
 return v0;
}


// Function: pointer_array at 0x401865
unsigned int pointer_array(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x10]
 unsigned int idx; // [bp-0xc]
 unsigned int v2; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 v0 = 0;
 if (a1 > 10)
 a1 = 10;
 v2 = a1;
 for (idx = 0; idx < v2; idx += 1)
 {
 if (*((int *)(a0 + idx * 4)))
 v0 += *((int *)*((int *)(a0 + idx * 4)));
 }
 return v0;
}


// Function: array_complex_index at 0x4018d5
unsigned int array_complex_index(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 if (a3 >= 0 && a3 < a1 && a4 >= 0 && a4 < a2)
 return *((int *)(a0 + (a3 + a1 * a4) * 4));
 return 4294967295;
}


// Function: array_oob at 0x401927
unsigned int array_oob(unsigned int ptr, unsigned int a1)
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 v0 = 0;
 for (v1 = 0; v1 <= a1; v1 += 1)
 {
 v0 += *((int *)(ptr + v1 * 4));
 }
 return v0;
}


// Function: test_array_types at 0x401970
extern unsigned int g_40317c;

int test_array_types()
{
 unsigned int flag2; // ecx
 unsigned int *cur; // edi
 unsigned int v34; // edx
 unsigned int v0; // [bp-0x524]
 unsigned int v1; // [bp-0x520]
 unsigned int v2; // [bp-0x51c]
 unsigned int i; // [bp-0x518]
 unsigned int n; // [bp-0x514]
 unsigned int j; // [bp-0x510]
 unsigned int i0; // [bp-0x50c]
 unsigned int i1; // [bp-0x508]
 unsigned int index; // [bp-0x504]
 unsigned int idx; // [bp-0x500]
 unsigned int v10; // [bp-0x4fc]
 unsigned int v11; // [bp-0x4f8]
 unsigned int v12; // [bp-0x4f4]
 unsigned int flag1; // [bp-0x4f0]
 unsigned int v14; // [bp-0x4ec]
 unsigned int v15; // [bp-0x4e8]
 unsigned int v16; // [bp-0x4e4]
 unsigned int v17; // [bp-0x4e0]
 char *v19; // [bp-0x4dc]
 char *v20; // [bp-0x4d8]
 char *v21; // [bp-0x4d4]
 unsigned long v22; // [bp-0x4b4]
 unsigned long v23; // [bp-0x464]
 unsigned long v24; // [bp-0x39c]
 unsigned long long v25; // [bp-0x20c]
 char v26[6]; // [bp-0x16]
 unsigned int v27; // [bp-0x10]

 __asm__("movl %%gs:20, %0" : "=r"(v27));
 sub_4010c0(&g_40317c);
 flag1 = 1;
 v14 = 2;
 v15 = 3;
 v16 = 4;
 v17 = 5;
 sub_4010a0("ARR-L1-01 (array_1d_stack): %d\n", array_1d_stack(&flag1, 5));
 strncpy(v26, "hello", 5);
 sub_4010a0("ARR-L1-02 (array_string): %d\n", array_string(&v26));
 for (i = 0; i <= 9; i += 1)
 {
 for (n = 0; n <= 9; n += 1)
 {
 if (i == n)
 v34 = i;
 else
 v34 = 0;
 (&v24)[10 * i + n] = v34;
 }
 }
 sub_4010a0("ARR-L1-03 (array_2d_stack): %d\n", array_2d_stack(&v24));
 for (j = 0; j <= 4; j += 1)
 {
 for (i0 = 0; i0 <= 4; i0 += 1)
 {
 for (i1 = 0; i1 <= 4; i1 += 1)
 {
 *((unsigned int *)((char *)&v25 + 4 * i1 + 20 * i0 + 100 * j)) = 1;
 }
 }
 }
 sub_4010a0("ARR-L1-04 (array_3d): %d\n", array_3d(&v25));
 v10 = 10;
 v11 = 20;
 v12 = 30;
 sub_4010a0("ARR-L2-01 (array_vla): %d\n", array_vla(3, &v10));
 for (index = 0; index <= 4; index += 1)
 {
 (&v23)[10 * index] = index * 10;
 }
 sub_4010a0("ARR-L2-02 (array_pointer): %d\n", array_pointer(&v23, 5));
 v0 = 10;
 v1 = 20;
 v2 = 30;
 flag2 = 10;
 for (cur = &v19; flag2; cur += 1)
 {
 flag2 -= 1;
 *(cur) = 0;
 }
 v19 = &v0;
 v20 = &v1;
 v21 = &v2;
 sub_4010a0("ARR-L2-03 (pointer_array): %d\n", pointer_array(&v19, 3));
 for (idx = 0; idx <= 19; idx += 1)
 {
 (&v22)[idx] = idx;
 }
 sub_4010a0("ARR-L2-04 (array_complex_index): %d\n", array_complex_index(&v22, 5, 4, 2, 3));
 {
 unsigned int canary;
 __asm__("movl %%gs:20, %0" : "=r"(canary));
 if (v27 == canary)
 return 0;
 }
 return __stack_chk_fail_local();
}


// Function: ptr_single at 0x401d1d
int ptr_single(unsigned int *a0)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return *(a0) + 10;
}


// Function: ptr_double at 0x401d38
int ptr_double(unsigned int *a0)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return *(a0) + 5;
}


// Function: ptr_triple at 0x401d55
int ptr_triple(void **a0)
{
 char v0; // [bp+0x0];
 struct_1 *temp;

 __x86_get_pc_thunk_ax(&v0);
 temp = (struct_1 *)*a0;
 return temp->field_0 + 1;
}


// Function: ptr_increment at 0x401d74
unsigned int ptr_increment(unsigned int *cur, unsigned int a1)
{
 unsigned int v0; // [bp-0xc]
 unsigned int i; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 v0 = 0;
 for (i = 0; i < a1; i += 1)
 {
 v0 += *(cur);
 cur += 1;
 }
 return v0;
}


// Function: ptr_offset at 0x401db5
int ptr_offset(unsigned int a0, unsigned int a1)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return *((int *)(a0 + a1 * 4));
}


// Function: ptr_diff at 0x401dd9
unsigned int ptr_diff(unsigned int a0, unsigned int a1)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return a0 - a1 >> 2;
}


// Function: ptr_void at 0x401df5
int ptr_void(void* a0, unsigned int a1)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return (!a1 ? *((int *)a0) : (a1 == 1 ? *((char *)a0) : 4294967295));
}


// Function: ptr_const at 0x401e2b
unsigned int ptr_const(unsigned int *a0)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return *(a0) * 2;
}


// Function: ptr_const_ptr at 0x401e45
int ptr_const_ptr(unsigned int *ptr)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 *(ptr) = *(ptr) + 5;
 return *(ptr);
}


// Function: ptr_func_simple at 0x401e6a
int ptr_func_simple(unsigned int *a0, unsigned int a1)
{
 __x86_get_pc_thunk_ax();
 return ((int(*)(unsigned int))a0)(a1);
}


// Function: ptr_func_complex at 0x401e8e
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
 v0 = v3 - -5112;
 result = 0;
 v7 = ((unsigned int(*)(unsigned int,unsigned int*))a0)(a1, &v0);
 if (v2 == *((int *)_ccall(v4, v5, (unsigned int)v6, 20)))
 return v7;
 return __stack_chk_fail_local();
}


// Function: ptr_cast at 0x401eef
int ptr_cast(unsigned int *a0)
{
 __x86_get_pc_thunk_ax();
 return *(a0);
}


// Function: opaque_handle_create at 0x401f1c
int opaque_handle_create(unsigned int a0)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return a0;
}


// Function: opaque_handle_op at 0x401f32
unsigned int opaque_handle_op(unsigned int a0)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return a0 * 2;
}


// Function: complex_callback at 0x401f4a
char complex_callback(unsigned int *ptr, unsigned int *a1)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 *(ptr) = *(ptr) + 10;
 return *(a1);
}


// Function: test_pointer_types at 0x401f77

typedef struct struct_3 {
 char field_0;
} struct_3;

typedef struct struct_2 {
 struct struct_1 *field_0;
} struct_2;

extern unsigned int g_40329a;

int test_pointer_types()
{
 unsigned long v32; // ldt
 unsigned long v33; // gdt
 unsigned short v34; // gs
 char v0; // [bp-0x85]
 unsigned int v1[1]; // [bp-0x84]
 unsigned int v2; // [bp-0x80]
 char *v3; // [bp-0x7c]
 unsigned int v4; // [bp-0x78]
 char *v5; // [bp-0x74]
 struct_3 **v6; // [bp-0x70]
 unsigned int v7; // [bp-0x6c]
 unsigned int v8[1]; // [bp-0x68]
 unsigned int v9[1]; // [bp-0x64]
 unsigned int v10; // [bp-0x60]
 unsigned int v11[1]; // [bp-0x5c]
 struct_0 **v12; // [bp-0x58]
 struct_2 **v13; // [bp-0x54]
 unsigned int v14; // [bp-0x50]
 unsigned int result[1]; // [bp-0x4c]
 unsigned int v16; // [bp-0x48]
 unsigned int v17; // [bp-0x44]
 unsigned int v18; // [bp-0x40]
 unsigned int v19; // [bp-0x3c]
 unsigned int v20; // [bp-0x38]
 unsigned int v21; // [bp-0x34]
 unsigned int v22; // [bp-0x30]
 unsigned int v23; // [bp-0x2c]
 unsigned int v24; // [bp-0x28]
 unsigned int flag1; // [bp-0x24]
 unsigned int v26; // [bp-0x20]
 unsigned int v27; // [bp-0x1c]
 unsigned int v28; // [bp-0x18]
 unsigned int v29; // [bp-0x14]
 unsigned int v30; // [bp-0x10]

 v30 = *((int *)_ccall(v32, v33, (unsigned int)v34, 20));
 sub_4010c0(&g_40329a);
 *(unsigned int*)v1 = 5;
 sub_4010a0("PTR-L2-01 (ptr_single): %d\n", ptr_single(&v1));
 v2 = 10;
 v3 = &v2;
 v12 = &v3;
 sub_4010a0("PTR-L2-02 (ptr_double): %d\n", ptr_double(v12));
 v4 = 5;
 v5 = &v4;
 v6 = &v5;
 v13 = &v6;
 sub_4010a0("PTR-L2-03 (ptr_triple): %d\n", ptr_triple(v13));
 *(unsigned int*)result = 1;
 v16 = 2;
 v17 = 3;
 v18 = 4;
 v19 = 5;
 sub_4010a0("PTR-L2-04 (ptr_increment): %d\n", ptr_increment(&result, 5));
 v20 = 10;
 v21 = 20;
 v22 = 30;
 v23 = 40;
 v24 = 50;
 sub_4010a0("PTR-L2-05 (ptr_offset): %d\n", ptr_offset(&v20, 2));
 flag1 = 0;
 v26 = 10;
 v27 = 20;
 v28 = 30;
 v29 = 40;
 sub_4010a0("PTR-L2-06 (ptr_diff): %d\n", ptr_diff(&v29, &flag1));
 v7 = 42;
 v0 = 65;
 sub_4010a0("PTR-L2-07 (ptr_void): %d\n", ptr_void(&v7, 0));
 sub_4010a0("PTR-L2-07 (ptr_void): %d\n", ptr_void(&v0, 1));
 *(unsigned int*)v8 = 10;
 sub_4010a0("PTR-L2-08 (ptr_const): %d\n", ptr_const(&v8));
 *(unsigned int*)v9 = 10;
 sub_4010a0("PTR-L2-09 (ptr_const_ptr): %d\n", ptr_const_ptr(&v9));
 sub_4010a0("PTR-L2-10 (ptr_func_simple): %d\n", ptr_func_simple(double_value, 5));
 v10 = 5;
 sub_4010a0("PTR-L2-11 (ptr_func_complex): %d\n", ptr_func_complex(complex_callback, &v10));
 *(unsigned int*)v11 = 305419896;
 sub_4010a0("PTR-L2-12 (ptr_cast): 0x%x\n", ptr_cast(&v11));
 v14 = opaque_handle_create(10);
 sub_4010a0("PTR-L2-13 (opaque_handle_op): %d\n", opaque_handle_op(v14));
 if (v30 == *((int *)_ccall(v32, v33, (unsigned int)v34, 20)))
 return v30 - *((int *)_ccall(v32, v33, (unsigned int)v34, 20));
 return __stack_chk_fail_local();
}


// Function: struct_simple at 0x402291
int struct_simple(unsigned int *a0)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return a0[2] + *(a0) + a0[1];
}


// Function: struct_array at 0x4022b9
unsigned int struct_array(unsigned int ptr, unsigned int a1)
{
 unsigned int v0; // [bp-0xc]
 unsigned int idx; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 v0 = 0;
 for (idx = 0; idx < a1; idx += 1)
 {
 v0 += *((int *)(ptr + idx * 12 + 8)) + *((int *)(ptr + idx * 12)) + *((int *)(ptr + idx * 12 + 4));
 }
 return v0;
}


// Function: struct_nested at 0x402336
int struct_nested(unsigned int *a0)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return a0[3] + *(a0);
}


// Function: struct_deep at 0x402356
int struct_deep(unsigned int *a0)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return a0[5] + a0[2];
}


// Function: struct_with_ptr at 0x402377
int struct_with_ptr(struct_0 *a0)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return (char *)(!a0->field_4 ? NULL : a0->field_4->field_0) + a0->field_0;
}


// Function: struct_bitfields at 0x4023aa
int struct_bitfields(void* a0)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return (*((short *)a0) >> 6) + (*((char *)a0) & 1) + (*((char *)a0) >> 1 & 3) + (*((char *)a0) >> 3 & 7);
}


// Function: union_type at 0x4023f9
int union_type(void* a0, unsigned int a1)
{
 unsigned int v3; // fpround
 unsigned int v0; // [bp-0xc]
 unsigned short v1; // [bp-0x8]
 unsigned short v2; // [bp-0x6]

 __x86_get_pc_thunk_ax();
 if (!a1)
 {
 return *((int *)a0);
 }
 else if (a1 == 1)
 {
 v2 = _ccall(0, 0, v3, 20);
 v1 = v2 & 255 | ((char)(v2 >> 8) | 12) * 0x100;
 v0 = 0;
 return v0;
 }
 else
 {
 return *((char *)a0);
 }
}


// Function: union_array at 0x40244c
unsigned int union_array(unsigned int ptr, unsigned int a1)
{
 unsigned int v0; // [bp-0xc]
 unsigned int idx; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 v0 = 0;
 for (idx = 0; idx < a1; idx += 1)
 {
 v0 += *((int *)(ptr + idx * 4));
 }
 return v0;
}


// Function: enum_type at 0x402495
unsigned int enum_type(unsigned int a0)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return a0 * 10;
}


// Function: enum_switch at 0x4024b4
unsigned int enum_switch(unsigned int a0)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 if (a0 == 3)
 return 4294967295;
 if (a0 > 3)
 return 4294967197;
 if (a0 == 2)
 {
 return 50;
 }
 else if (a0 <= 2)
 {
 if (!a0)
 {
 return 0;
 }
 else if (a0 == 1)
 {
 return 100;
 }
 }
 return 4294967197;
}


// Function: struct_func_ptr at 0x40250e
int struct_func_ptr(struct_0 *a0)
{
 __x86_get_pc_thunk_ax();
 return ((int(*)(unsigned int))a0->field_4)(a0->field_0);
}


// Function: linked_list at 0x402538
unsigned int linked_list(struct_0 *a0)
{
 unsigned int v0; // [bp-0xc]
 struct_0 *v1; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 v0 = 0;
 for (v1 = a0; v1; v1 = v1->field_4)
 {
 v0 += v1->field_0;
 }
 return v0;
}


// Function: doubly_linked_list at 0x402577
unsigned int doubly_linked_list(struct_0 *a0)
{
 unsigned int v0; // [bp-0xc]
 struct_0 *v1; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 v0 = 0;
 for (v1 = a0; v1; v1 = v1->field_4)
 {
 v0 += v1->field_0;
 }
 return v0;
}


// Function: binary_tree_sum at 0x4025b6
unsigned int binary_tree_sum(unsigned int *ptr)
{
 unsigned int v0; // eax
 unsigned int v1; // eax

 __x86_get_pc_thunk_ax();
 if (ptr)
 {
 v0 = binary_tree_sum((unsigned int *)ptr[1]);
 v1 = binary_tree_sum((unsigned int *)ptr[2]) + *(ptr) + v0;
 return v1;
 }
 return 0;
}


// Function: binary_tree at 0x40260a
unsigned int binary_tree(unsigned int *a0)
{
 __x86_get_pc_thunk_ax();
 return binary_tree_sum(a0);
}


// Function: graph_traverse at 0x40262e
unsigned int graph_traverse(struct_0 **ptr)
{
 unsigned int v0; // [bp-0x10]
 unsigned int index; // [bp-0xc]
 unsigned int cur; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 v0 = 0;
 for (index = 0; index < ptr[10]; index += 1)
 {
 for (cur = ptr[index]; cur; cur = *((int *)(cur + 4)))
 {
 v0 += *((int *)cur);
 }
 }
 return v0;
}


// Function: test_composite_types at 0x40268b
extern unsigned int g_40343e;

int test_composite_types()
{
 unsigned long v64; // ldt
 unsigned long v65; // gdt
 unsigned int flag18; // ecx
 unsigned int *cur; // edi
 unsigned short v66; // gs
 unsigned int v0; // [bp-0x118]
 unsigned int flag12; // [bp-0x114]
 unsigned int v2; // [bp-0x110]
 char *v3; // [bp-0x10c]
 char v4; // [bp-0x108]
 unsigned short v5; // [bp-0x108]
 unsigned short v6; // [bp-0x108]
 unsigned int v7; // [bp-0x104]
 unsigned int v8; // [bp-0x100]
 unsigned int v9; // [bp-0xfc]
 unsigned int result; // [bp-0xf8]
 unsigned int flag1; // [bp-0xf4]
 unsigned int flag2[1]; // [bp-0xf0]
 unsigned int v13; // [bp-0xec]
 unsigned int v14; // [bp-0xe8]
 unsigned int v15[1]; // [bp-0xe4]
 unsigned int flag16; // [bp-0xe0]
 unsigned int flag17; // [bp-0xdc]
 unsigned int v18[1]; // [bp-0xd8]
 unsigned int v19; // [bp-0xd4]
 unsigned int flag6; // [bp-0xd0]
 unsigned int v21; // [bp-0xcc]
 unsigned int v22; // [bp-0xc8]
 unsigned int flag7[1]; // [bp-0xc4]
 unsigned int v24; // [bp-0xc0]
 unsigned int v25; // [bp-0xbc]
 unsigned int v26; // [bp-0xb8]
 unsigned int v27; // [bp-0xb4]
 unsigned int v28; // [bp-0xb0]
 unsigned int flag8; // [bp-0xac]
 unsigned int flag9; // [bp-0xa8]
 unsigned int flag10; // [bp-0xa4]
 unsigned int flag11; // [bp-0xa0]
 unsigned int v33; // [bp-0x9c]
 unsigned int v34; // [bp-0x98]
 unsigned int v35; // [bp-0x94]
 unsigned int v36; // [bp-0x90]
 unsigned int v37; // [bp-0x8c]
 unsigned int v38; // [bp-0x88]
 unsigned int flag3; // [bp-0x84]
 unsigned int flag4; // [bp-0x80]
 unsigned int flag5; // [bp-0x7c]
 unsigned int v42; // [bp-0x78]
 unsigned int v43; // [bp-0x74]
 unsigned int v44; // [bp-0x70]
 unsigned int v45; // [bp-0x6c]
 char *v46; // [bp-0x68]
 char v47; // [bp-0x64], Other Possible Types: unsigned int
 char *v48; // [bp-0x60]
 char v49; // [bp-0x5c], Other Possible Types: unsigned int
 unsigned int flag13; // [bp-0x58]
 unsigned int v51; // [bp-0x54]
 char *v52; // [bp-0x50]
 unsigned int flag14; // [bp-0x4c]
 unsigned int v55; // [bp-0x48]
 unsigned int flag15; // [bp-0x44]
 char *v57; // [bp-0x40]
 void* v60[10]; // [bp-0x3c]
 unsigned int v61; // [bp-0x14]
 unsigned int v62; // [bp-0x10]

 v62 = *((int *)_ccall(v64, v65, (unsigned int)v66, 20));
 sub_4010c0(&g_40343e);
 *(unsigned int*)flag2 = 1;
 v13 = 2;
 v14 = 3;
 sub_4010a0("CMP-L2-01 (struct_simple): %d\n", struct_simple(&flag2));
 flag3 = 1;
 flag4 = 1;
 flag5 = 1;
 v42 = 2;
 v43 = 2;
 v44 = 2;
 sub_4010a0("CMP-L2-02 (struct_array): %d\n", struct_array(&flag3, 2));
 *(unsigned int*)v18 = 5;
 v19 = 10;
 flag6 = 0;
 v21 = 100;
 v22 = 200;
 sub_4010a0("CMP-L2-03 (struct_nested): %d\n", struct_nested(&v18));
 *(unsigned int*)flag7 = 1;
 v24 = 2;
 v25 = 3;
 v26 = 10;
 v27 = 20;
 v28 = 255;
 flag8 = 0;
 flag9 = 0;
 flag10 = 0;
 flag11 = 0;
 v33 = 255;
 v34 = 42;
 sub_4010a0("CMP-L2-04 (struct_deep): %d\n", struct_deep(&flag7));
 v0 = 20;
 flag12 = 0;
 v2 = 10;
 v3 = &v0;
 sub_4010a0("CMP-L2-05 (struct_with_ptr): %d\n", struct_with_ptr(&v2));
 v4 |= 1;
 v4 = v4 & 4294967289 | 4;
 *((char *)&v6) = v4 & 4294967239 | 24;
 v6 = v5 & 63 & 255 | ((char)((v5 & 63) >> 8) | 25) * 0x100;
 v7 &= 0xfff00000;
 sub_4010a0("CMP-L2-06 (struct_bitfields): %d\n", struct_bitfields(&v6));
 v35 = 305419896;
 sub_4010a0("CMP-L2-07 (union_type): %d\n", union_type(&v35, 0));
 v36 = 10;
 v37 = 20;
 v38 = 30;
 sub_4010a0("CMP-L2-08 (union_array): %d\n", union_array(&v36, 3));
 sub_4010a0("CMP-L2-09 (enum_type): %d\n", enum_type(1));
 sub_4010a0("CMP-L2-10 (enum_switch): %d\n", enum_switch(2));
v8 = 10;
int (*temp_fp)(unsigned int) = process_int;
*((int (**)(unsigned int))&v9) = temp_fp;
sub_4010a0("CMP-L2-11 (struct_func_ptr): %d\n", struct_func_ptr(&v8));
 v45 = 10;
 v46 = &v47;
 v47 = 20;
 v48 = &v49;
 v49 = 30;
 flag13 = 0;
 sub_4010a0("CMP-L2-12 (linked_list): %d\n", linked_list(&v45));
 v51 = 10;
 v52 = &v55;
 flag14 = 0;
 v55 = 20;
 flag15 = 0;
 v57 = &v51;
 v52 = &v55;
 sub_4010a0("CMP-L2-13 (doubly_linked_list): %d\n", doubly_linked_list(&v51));
 *(unsigned int*)v15 = 100;
 flag16 = 0;
 flag17 = 0;
 sub_4010a0("CMP-L2-14 (binary_tree): %d\n", binary_tree(&v15));
 result = 1;
 flag1 = 0;
 flag18 = 11;
 for (cur = &v60; flag18; cur += 1)
 {
 flag18 -= 1;
 *(cur) = 0;
 }
 v60[0] = &result;
 v61 = 2;
 v60[0] = &result;
 sub_4010a0("CMP-L2-15 (graph_traverse): %d\n", graph_traverse(&v60));
 if (v62 == *((int *)_ccall(v64, v65, (unsigned int)v66, 20)))
 return v62 - *((int *)_ccall(v64, v65, (unsigned int)v66, 20));
 return __stack_chk_fail_local();
}


// Function: main at 0x402b69
unsigned int main()
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}


// Function: __x86_get_pc_thunk_ax at 0x402b98
int __x86_get_pc_thunk_ax()
{
 char v0; // [bp+0x0]

 return *((int *)&v0);
}


// Function: sub_402b9c at 0x402b9c
int sub_402b9c()
{
 __stack_chk_fail_local();
 return;
}


// Function: __stack_chk_fail_local at 0x402ba0
int __stack_chk_fail_local()
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = v2;
 sub_4010b0();
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

void __do_global_ctors_aux()
{
 struct_0 *v2; // edx
 struct_0 *ptr; // edx
 unsigned int *v4; // eax
 unsigned int v5; // ebx
 struct_0 *v6; // ebx
 struct_0 *p; // ebx

 __x86_get_pc_thunk_dx();
 ptr = (struct_0*)((char*)(&v2[1]) + 227);
 v4 = (unsigned int *)*((int *)((char*)ptr + 232));
 if (*((int *)&ptr->padding_0[232]) == 0xffffffff)
 return;
 v6 = &ptr->padding_0[232];
 do
 {
 p = v6;
 ((void(*)())v4)();
 v4 = (unsigned int *)*((int *)&p->padding_0[4]);
 v6 = &p->padding_0[4];
 } while (*((int *)&p->padding_0[4]) != 0xffffffff);
}


// Function: sub_402c02 at 0x402c02
void sub_402c02()
{
}



/* CRT stub function _fini removed by preprocessor */


