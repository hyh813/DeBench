// Angr Decompilation of 5-1_clang_O0_no_g
// Platform: AMD64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

/* Forward declarations for test functions */
void test_cpp_member_func();
void test_cpp_constructor();
void test_cpp_virtual_func();

/* Base struct for virtual functions */
typedef struct Base {
 long long* vtable;
} Base;

void call_virtual_func(Base *arg_0, int arg_1);
void test_cpp_multiple_inheritance();
void test_cpp_diamond_inheritance();
void test_cpp_operator_overload();
void test_cpp_template_func();
void test_cpp_template_class();
void test_cpp_lambda();
void test_cpp_exception();
void test_cpp_smart_ptr();
void test_cpp_rtti();
void test_cpp_oo_features();

/* Forward declarations for C++ runtime functions */
void* operatornew(unsigned long);
void* operatornew[](unsigned long);
void operatordelete(void*);
void operatordelete[](void*);

/* Global variable declarations */
extern unsigned int g_lifecycle_instance_count;
extern struct_0_main *g_408fe8;
extern unsigned long long g_409008;
extern unsigned long long g_409010;
extern char g_408878;
extern char g_4088b8;
extern char g_408900;
extern char g_408930;
extern char g_4089b0;
extern char g_4089d8;
extern char g_408a08;
extern char g_408a38;
extern char g_408a70;
extern unsigned long long g_408a90;
extern unsigned long long g_408aa0;
extern char g_408c38;
extern char g_408d50;
extern char g_408da0;
extern char g_408d78;
extern unsigned long long _ZTIi;
extern unsigned long long _ZTIZ18test_cpp_exceptionvE16DerivedException;
extern unsigned long long _ZTI12RTTIDerivedA;
extern unsigned long long _ZTI12RTTIDerivedB;
extern unsigned long long _ZTI8RTTIBase;
extern char g_405025;
extern char g_40504a;
extern char g_405068;
extern char g_405084;
extern char g_4050a0;
extern char g_4050bc;
extern char g_4050d9;
extern char g_4050f5;
extern char g_405111;
extern char g_40512d;
extern char g_405149;
extern char g_405166;
extern char g_405183;
int __cxa_atexit(void (*func)(void), void* arg, void* dso_handle);
void* __cxa_allocate_exception(unsigned long);
void __cxa_throw(void* exc, void* type_info, void* dest);
void* __cxa_begin_catch(void*);
void __cxa_end_catch();
void __cxa_rethrow();
void __cxa_bad_typeid();
void* __dynamic_cast(void*, void*, void*, void*);
void std_terminate(void*);
int strcmp(const char*, const char*);
size_t strlen(const char*);
char* strncpy(char*, const char*, size_t);
void* memset(void*, int, size_t);
void _Unwind_Resume(unsigned long long);
void __clang_call_terminate(void*);

/* Additional forward declarations */
typedef struct struct_0 {
 unsigned char data[256];
} struct_0;

/* std namespace function declarations */
void* std_move_unique_ptr_int_default_delete(void* this);
void* std_move_tuple_int_default_delete(void* this);
void* std_forward_int_ptr(void* this);
void* std_forward_dollar_2_const_ref(void* this);
void std_default_delete_int_operator_call(void* this, unsigned int* ptr);
void std_default_delete_int_array_operator_call(void* this, unsigned int* ptr);
void std_default_delete_int_array_operator_call(void *this, unsigned int *ptr);
void* std_get_0ul_int_default_delete(void* this);
void* std_get_1ul_int_default_delete(void* this);
void* std_get_0ul_int_default_delete_array(void* this);
void* std_get_1ul_int_default_delete_array(void* this);
void* std__uniq_ptr_impl_int_default_delete_M_ptr(void* this);
void* std__uniq_ptr_impl_int_default_delete_M_deleter(void* this);
void* std__uniq_ptr_impl_int_default_delete_array_M_ptr(void* this);
void* std__uniq_ptr_impl_int_default_delete_array_M_deleter(void* this);
void* std__uniq_ptr_impl_int_default_delete_M_deleter(void *this);
void* std__uniq_ptr_impl_int_default_delete_array_M_deleter(void *this);
void* std_unique_ptr_int_default_delete_get(void* this);
void* std_unique_ptr_int_array_default_delete_get(void* this);
void* std_unique_ptr_int_default_delete_get_deleter(void* this);
void* std_unique_ptr_int_array_default_delete_get_deleter(void* this);
void* std_unique_ptr_int_dollar_2_get(void* this);
void* std_unique_ptr_int_dollar_2_get_deleter(void* this);
void* std_type_info_operator_eq(void* this, void* other);
void std_unique_ptr_int_default_delete_unique_ptr_copy(char *this, char *src);
void* std__uniq_ptr_data_int_default_delete_true_true___uniq_ptr_data(void *this, unsigned long long v1);
void* std__uniq_ptr_impl_int_default_delete_array_true_true___uniq_ptr_data(void *this, unsigned long long v1);
void* std_unique_ptr_int_array_default_delete_get(void *this);
void std_default_delete_int_array_operator_call(void *this, unsigned int *ptr);
void* std_move_int_ptr(void *ptr);
void* std__uniq_ptr_impl_int_default_delete_M_deleter(void *this);
void* std_get_1ul_int_default_delete(void *this);
void* std__get_helper_1ul_default_delete_int(void *this);
void* std_Tuple_impl_1ul_default_delete_int_M_head(void *this);
void std_Head_base_1ul_default_delete_int_true_M_head(void *this);
void* std__uniq_ptr_impl_int_default_delete_M_ptr(void *this);
void* std_get_0ul_int_default_delete(void *this);
void* std__get_helper_0ul_int_default_delete(void *this);
void* std_Tuple_impl_0ul_int_default_delete_M_head(void *this);
void std_Head_base_0ul_int_false_M_head(void *this);
void* std__uniq_ptr_impl_int_default_delete_array_M_deleter(void *this);
void* std_get_1ul_int_default_delete_array(void *this);
void* std__get_helper_1ul_default_delete_int_array(void *this);
void* std_Tuple_impl_1ul_default_delete_int_array_M_head(void *this);
void std_Head_base_1ul_default_delete_int_array_true_M_head(void *this);
void* std_get_0ul_int_default_delete_int_array(void *this);
void* std__get_helper_0ul_int_default_delete_int_array(void *this);
void* std_Tuple_impl_0ul_int_default_delete_int_array_M_head(void *this);
void* std_get_0ul_int_default_delete_int_array_const(void *this);
void* std__get_helper_0ul_int_default_delete_int_array_const(void *this);
void* std_Tuple_impl_0ul_int_default_delete_int_array_M_head_const(void *this);
void std_Head_base_0ul_int_false_M_head_const(void *this);
void* std_Tuple_impl_1ul_default_delete_int_array_Tuple_impl(unsigned long long v1);
void* std_Head_base_1ul_default_delete_int_array_true_Head_base(unsigned long long v1);
void* std_Tuple_impl_0ul_int_default_delete_int_array_Tuple_impl(void *this);
void* std_Tuple_impl_1ul_default_delete_int_array_Tuple_impl_func(void *this);
void* std_Head_base_0ul_int_false_Head_base_func(void);
void* std_Tuple_impl_0ul_int_default_delete_tuple(unsigned long long *ptr, unsigned long long *v2);
void* std_Tuple_impl_1ul_default_delete_tuple(unsigned long long *a0);
void* std_Head_base_1ul_default_delete_int_true_Head_base_func(void *this);
void* std_Head_base_0ul_int_false_Head_base_int_ptr_ref(void *ptr, int **arg_0);
char* std_type_info_name(void* this);
void* std_move_unique_ptr_int_dollar_2(void* this);
void* std_forward_int_ptr_ref(void* this);
void std_default_delete_int_array_operator_call(void* this, unsigned int* ptr);
void* std_get_0ul_int_default_delete_int(void* this);
void* std_get_1ul_int_default_delete_int(void* this);
void* std__uniq_ptr_impl_int_default_delete_M_ptr_const(void* this);
void* std__uniq_ptr_impl_int_default_delete_M_deleter_const(void* this);
void* std_unique_ptr_int_default_delete_get_const(void* this);
void* std_unique_ptr_int_array_default_delete_get_const(void* this);
void* std_get_0ul_int_default_delete_const(void* this);
void* std_get_1ul_int_default_delete_const(void* this);
void* std__uniq_ptr_impl_int_default_delete_array_M_ptr_const(void* this);
void* std__uniq_ptr_impl_int_default_delete_array_M_deleter_const(void* this);
void* std_unique_ptr_int_dollar_2_get_const(void* this);
void* std_unique_ptr_int_array_dollar_2_get(void* this);
void* std_unique_ptr_int_array_dollar_2_get_deleter(void* this);
void* std_get_0ul_int_dollar_2(void* this);
void* std_get_1ul_int_dollar_2(void* this);
void* std__uniq_ptr_impl_int_dollar_2_M_ptr(void* this);
void* std__uniq_ptr_impl_int_dollar_2_M_deleter(void* this);
void* std__uniq_ptr_impl_int_dollar_2_M_ptr_const(void* this);
void* std__uniq_ptr_impl_int_dollar_2_M_deleter_const(void* this);
void* std_get_0ul_int_dollar_2_const(void* this);
void* std_get_1ul_int_dollar_2_const(void* this);
void* std__get_helper_0ul_int_dollar_2(void* this);
void* std__get_helper_1ul_dollar_2(void* this);
void* std_tuple_element_0ul_int_dollar_2(void* this);
void* std_tuple_element_1ul_dollar_2(void* this);
void* std_remove_reference_tuple(void* this);
void* std_enable_if_default_delete_array(void* this, unsigned int* ptr);

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

int _ccall(int, int, unsigned long, int, unsigned long);
int CmpF(double, double);

/* Template function declarations */
int template_max_int(int arg_0, int arg_1);
double template_max_double(double arg_0, double arg_1);
void template_swap_int(unsigned int *ptr, unsigned int *p);

/* Container<int> method declarations */
void Container_int_Container(char *this);
void Container_int_push(void *this, int arg_0);
int Container_int_get(void *this, int idx);
int Container_int_getSize(void *this);

/* Container<double> method declarations */
void Container_double_Container(char *this);
void Container_double_push(void *this, double val);
double Container_double_get(void *this, int idx);
int Container_double_getSize(void *this);

/* Lambda helper declarations */
int test_cpp_lambda_dollar_1_operator()(char *this, int val);
int test_cpp_lambda_dollar_0_cl_ii(char *this, int a, int b);

/* Smart pointer helper declarations */
void std_unique_ptr_int_default_delete_unique_ptr(char *this, unsigned int *ptr);
unsigned int* std_unique_ptr_int_default_delete_operator_star(void *this);
void std_unique_ptr_int_array_default_delete_unique_ptr(char *this, unsigned int *ptr);
unsigned int* std_unique_ptr_int_array_default_delete_operator_index(void *this, int idx);
void std_unique_ptr_int_custom_deleter_unique_ptr(char *this, unsigned int *ptr, char *deleter);
unsigned int* std_unique_ptr_int_custom_deleter_operator_star(void *this);

/* RTTI declarations */
char* std_type_info_name(void *this);

/* Multiple inheritance declarations */
void MultiDerived_MultiDerived(char *this);
int MultiDerived_funcA(void *this);
int MultiDerived_funcB(void *this);

/* Diamond inheritance declarations */
void DiamondDerived_DiamondDerived(void **this);
int DiamondDerived_func(void *this);

/* Point class declarations */
void Point_Point(void *this, int x, int y);
long long Point_operator_plus(void *this, void *other);
long long Point_operator_eq(void *this, void *other);
long long Point_operator_inc(void *this);

/* Lifecycle class declarations */
void LifecycleClass_LifecycleClass(char *this, unsigned long size);
int LifecycleClass_getData(void *this, unsigned long idx);
int LifecycleClass_getInstanceCount(void);

/* Base/Derived class declarations */
void Base_Base(char *this);
void Derived_Derived(char *this, int val);
int Base_virtual_func(void *this, int val);
int Derived_virtual_func(void *this, int val);

/* SimpleClass declarations */
void SimpleClass_SimpleClass(char *this, int a, const char *b);
void SimpleClass_setValue(char *this, int val);
int SimpleClass_getValue(void *this);
int SimpleClass_compute(void *this, int val);
void SimpleClass_getClassID(void);

/* RTTI class declarations */
void RTTIDerivedA_RTTIDerivedA(void *this);
void RTTIDerivedB_RTTIDerivedB(void *this);
int RTTIDerivedA_derivedA_data(void *this);
int RTTIDerivedB_derivedB_data(void *this);

/* Additional class declarations */
void BaseA_BaseA(void *ptr);
void BaseB_BaseB(void *ptr);
void VirtualBase_VirtualBase(void *ptr);
void MiddleA_MiddleA(void *ptr, void *arg);
void MiddleB_MiddleB(void *ptr, void *arg);
void RTTIBase_RTTIBase(void *ptr);

/* CRT stub function _init removed by preprocessor */

typedef struct struct_0_main {
 unsigned int field_0;
 char padding_4[4];
 struct_1 *field_8;
} struct_0_main;


unsigned long long * _init()
{
 unsigned long long *v1; // rax

 v1 = (unsigned long long *)g_408fe8;
 return v1;
}


// Function: sub_402020 at 0x402020
void sub_402020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_409008;
 goto g_409010;
}


// Function: sub_40202c at 0x40202c
extern void* operatornew[](unsigned long);
extern void* operatornew(unsigned long);
extern void operatordelete(void*);
extern void operatordelete[](void*);

int sub_40202c()
{
 unsigned int v1 = 0; // rdi

 return (int)operatornew[](v1);
}


// Function: __cxx_global_var_init at 0x402180
extern char _ZNSt8ios_base4InitD1Ev;
extern void _ZStL8__ioinit;
extern unsigned long long __dso_handle;
extern int __cxa_atexit(void (*func)(void), void* arg, void* dso_handle);

void __cxx_global_var_init()
{
 // std::ios_base::Init::Init(&_ZStL8__ioinit);
 __cxa_atexit((void (*)(void))&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, (void*)&__dso_handle);
 return;
}


// Function: sub_4021ac at 0x4021ac
void _GLOBAL__sub_I_5_1_cpp();
void sub_4021ac()
{
 _GLOBAL__sub_I_5_1_cpp();
 return;
}


// Function: _GLOBAL__sub_I_5_1.cpp at 0x4021b0
void _GLOBAL__sub_I_5_1_cpp()
{
 __cxx_global_var_init();
 return;
}


// Function: sub_4021bb at 0x4021bb
void _start();
void sub_4021bb(unsigned long a0, unsigned long a1, unsigned long a2)
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4021e5 at 0x4021e5
void sub_4021e5()
{
}


// Function: sub_4021e6 at 0x4021e6
void deregister_tm_clones();
void sub_4021e6()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_402219 at 0x402219
void register_tm_clones();
void sub_402219()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_402259 at 0x402259
void __do_global_dtors_aux();
void sub_402259()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_402295 at 0x402295
void sub_402295()
{
}


// Function: sub_402299 at 0x402299
void frame_dummy();
void sub_402299()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_4022a9 at 0x4022a9
void sub_4022a9()
{
 test_cpp_member_func();
 return;
}


// Function: _Z20test_cpp_member_funcv at 0x4022b0
extern void SimpleClass_SimpleClass(char* this, int a, const char* b);
extern void SimpleClass_setValue(char* this, int val);
extern int SimpleClass_getValue(char* this);
extern int SimpleClass_compute(char* this, int val);
extern void SimpleClass_getClassID();

void test_cpp_member_func()
{
 unsigned long long v4; // rdi
 unsigned long long v5; // rsi
 unsigned long long v6; // rdx
 unsigned long long v7; // rcx
 unsigned long long v8; // r8
 unsigned long long v9; // r9
 unsigned int v0; // [bp-0x38]
 unsigned int v1; // [bp-0x34]
 char v2; // [bp-0x30]

 SimpleClass_SimpleClass(&v2, 5, "Test");
 SimpleClass_setValue(&v2, 10);
 v1 = SimpleClass_getValue(&v2);
 v0 = SimpleClass_compute(&v2, 3);
 SimpleClass_getClassID();
 return;
}


// Function: sub_40230f at 0x40230f
void sub_40230f()
{
 test_cpp_constructor();
 return;
}


// Function: _Z20test_cpp_constructorv at 0x402310
extern void LifecycleClass_LifecycleClass(char* this, unsigned long size);
extern int LifecycleClass_getData(char* this, unsigned long idx);
extern int LifecycleClass_getInstanceCount();

void test_cpp_constructor()
{
 unsigned long long v6; // rdi
 unsigned long long v7; // rsi
 unsigned long long v8; // rdx
 unsigned long long v9; // rcx
 unsigned long long v10; // r8
 unsigned long long v11; // r9
 unsigned int v0; // [bp-0x3c]
 char *v1; // [bp-0x38]
 unsigned int v2; // [bp-0x30]
 char v3; // [bp-0x20]
 unsigned int v4; // [bp-0xc]

 v4 = 0;
 v1 = &v3;
 LifecycleClass_LifecycleClass(&v3, 5);
 v2 = LifecycleClass_getData(v1, 2);
 v4 += v2;
 v0 = LifecycleClass_getInstanceCount();
 v4 += v0;
 LifecycleClass_getInstanceCount();
 return;
}


// Function: sub_40238b at 0x40238b
int sub_40238b(unsigned long a0, unsigned long a1, unsigned int a2)
{
 unsigned long long v3; // rax
 unsigned int v1; // [bp+0xfffe4]
 unsigned long long v2; // [bp+0xfffe8]

 v2 = v3;
 v1 = a2;
 _Unwind_Resume(v2); /* do not return */
}


// Function: sub_4023a9 at 0x4023a9
void sub_4023a9(unsigned long a0, unsigned long a1)
{
 call_virtual_func();
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x4023b0
void call_virtual_func(Base *arg_0, int arg_1)
{
 if (arg_0 && arg_0->vtable)
 ((void (*)(Base*, int))arg_0->vtable[0])(arg_0, arg_1);
 return;
}


// Function: sub_4023d1 at 0x4023d1
void sub_4023d1()
{
 test_cpp_virtual_func();
 return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x4023e0
extern void Base_Base(char* this);
extern void Derived_Derived(char* this, int val);
extern int Base_virtual_func(char* this, int val);
extern int Derived_virtual_func(char* this, int val);

void test_cpp_virtual_func()
{
 unsigned int v0; // [bp-0x64]
 unsigned int v1; // [bp-0x60]
 unsigned int v2; // [bp-0x5c]
 unsigned int v3; // [bp-0x58]
 unsigned int v4; // [bp-0x54]
 unsigned int v5; // [bp-0x50]
 unsigned int v6; // [bp-0x4c]
 Base *v7; // [bp-0x48]
 Base *v8; // [bp-0x40]
 unsigned int v9; // [bp-0x34]
 unsigned int v10; // [bp-0x30]
 char v11; // [bp-0x20]
 char v12; // [bp-0x10]

 Base_Base(&v12);
 Derived_Derived(&v11, 3);
 v4 = Base_virtual_func(&v12, 5);
 v10 = v4;
 v3 = Derived_virtual_func(&v11, 5);
 v9 = v3;
 v8 = (Base*)&v12;
 v7 = (Base*)&v11;
 v2 = (unsigned long long)call_virtual_func(v8, 5);
 v6 = v2;
 v1 = (unsigned long long)call_virtual_func(v7, 5);
 v5 = v1;
 v0 = v10 + v9 + v6 + v5;
 return;
}


// Function: sub_4024ae at 0x4024ae
int sub_4024ae(unsigned long a0, unsigned long a1, unsigned int a2)
{
 unsigned long long v3; // rax
 unsigned int v1; // [bp+0xfffe4]
 unsigned long long v2; // [bp+0xfffe8]

 v2 = v3;
 v1 = a2;
 _Unwind_Resume(v2); /* do not return */
}


// Function: sub_4024bf at 0x4024bf
int sub_4024bf(unsigned long a0, unsigned long a1, unsigned int a2)
{
 unsigned long v3; // rax
 unsigned int v1; // [bp+0xfffe4]
 unsigned long v2; // [bp+0xfffe8]

 v2 = v3;
 v1 = a2;
}


// Function: sub_4024e6 at 0x4024e6
void sub_4024e6()
{
 test_cpp_multiple_inheritance();
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x4024f0
extern void MultiDerived_MultiDerived(char* this);
extern int MultiDerived_funcA(char* this);
extern int MultiDerived_funcB(char* this);

void test_cpp_multiple_inheritance()
{
 unsigned int v0; // [bp-0x6c]
 unsigned int v1; // [bp-0x68]
 unsigned int v2; // [bp-0x64]
 struct_1 **v3; // [bp-0x60]
 unsigned int v4; // [bp-0x54]
 unsigned int v5; // [bp-0x50]
 unsigned int v6; // [bp-0x3c]
 struct_1 **v7; // [bp-0x38]
 struct_1 **v8; // [bp-0x30]
 char v9; // [bp-0x28]
 unsigned int v10; // [bp-0x20]
 char v11; // [bp-0x18]
 unsigned int v12; // [bp-0x10]

 MultiDerived_MultiDerived(&v9);
 v10 = 100;
 v12 = 200;
 v8 = &v9;
 v3 = NULL;
 if (&v9)
 v3 = &v11;
 v7 = v3;
 v2 = (*((long long *)*((long long *)&v9)))(v8);
 v6 = v2;
 v1 = *(v7)->field_0(v7);
 v5 = v1;
 v4 = (v8 == v7 ? 0 : 1);
 v0 = v6 + v5 + v4;
 return;
}


// Function: sub_4025a9 at 0x4025a9
int sub_4025a9(unsigned long a0, unsigned long a1, unsigned int a2)
{
 unsigned long long v3; // rax
 unsigned int v1; // [bp+0xfffc4]
 unsigned long long v2; // [bp+0xfffc8]

 v2 = v3;
 v1 = a2;
 _Unwind_Resume(v2); /* do not return */
}


// Function: sub_4025c7 at 0x4025c7
void sub_4025c7()
{
 test_cpp_diamond_inheritance();
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x4025d0
extern void DiamondDerived_DiamondDerived(void** this);
extern int DiamondDerived_func(void* this);

void test_cpp_diamond_inheritance()
{
 unsigned int v0; // [bp-0x6c]
 unsigned int v1; // [bp-0x68]
 unsigned int v2; // [bp-0x64]
 struct_1 **v3; // [bp-0x60]
 unsigned int v4; // [bp-0x58]
 unsigned int v5; // [bp-0x44]
 struct_1 **v6; // [bp-0x40]
 void* ptr; // [bp-0x38], Other Possible Types: char
 char v8; // [bp-0x30]

 DiamondDerived_DiamondDerived(&ptr);
 *((unsigned int *)&(&v8)[ptr[24]]) = 50;
 v3 = NULL;
 if (&ptr)
 v3 = &(&ptr)[ptr[24]];
 v6 = v3;
 v2 = *(v6)->field_0(v6);
 v5 = v2;
 *((unsigned int *)&(&v8)[ptr[24]]) = 100;
 v1 = *(v6)->field_0(v6);
 v4 = v1;
 v0 = v5 + v4;
 return;
}


// Function: sub_40267f at 0x40267f
int sub_40267f(unsigned long a0, unsigned long a1, unsigned int a2)
{
 unsigned long long v3; // rax
 unsigned int v1; // [bp+0xfffbc]
 unsigned long long v2; // [bp+0xfffc0]

 v2 = v3;
 v1 = a2;
 _Unwind_Resume(v2); /* do not return */
}


// Function: sub_40269d at 0x40269d
void sub_40269d()
{
 test_cpp_operator_overload();
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x4026a0
extern void Point_Point(char* this, int x, int y);
extern long long Point_operator_plus(char* this, char* other);
extern long long Point_operator_eq(char* this, char* other);
extern long long Point_operator_inc(char* this);

void test_cpp_operator_overload()
{
 char v0; // [bp-0x21]
 unsigned long v1; // [bp-0x20]
 char v2; // [bp-0x18]
 char v3; // [bp-0x10]

 Point_Point(&v3, 1, 2);
 Point_Point(&v2, 3, 4);
 v1 = Point_operator_plus(&v3, &v2);
 v0 = (char)Point_operator_eq(&v3, &v2) & 1;
 Point_operator_inc((char*)&v1);
 if (!(v0 & 1))
 return;
 return;
}


// Function: sub_40271a at 0x40271a
void sub_40271a()
{
 test_cpp_template_func();
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x402720
void test_cpp_template_func()
{
 unsigned long long v5; // rdi
 unsigned long long v6; // rsi
 unsigned long long v7; // rdx
 unsigned long long v8; // rcx
 unsigned long long v9; // r8
 unsigned long long v10; // r9
 unsigned int v0; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]
 unsigned long long v2; // [bp-0x18]
 unsigned int v3; // [bp-0xc]

 v3 = template_max_int(3, 7);
 template_max_double(v5, v6, v7, v8, v9, v10);
 v2 = 0x4004000000000000;
 v1 = 10;
 v0 = 20;
 template_swap_int(&v1, &v0);
 return;
}


// Function: sub_402785 at 0x402785
void sub_402785()
{
 test_cpp_template_class();
 return;
}


// Function: _Z23test_cpp_template_classv at 0x402790
void test_cpp_template_class()
{
 char v0; // [bp-0x98]
 unsigned int v1; // [bp-0x40]
 unsigned int v2; // [bp-0x3c]
 char v3; // [bp-0x38]

 Container_int_Container(&v3);
 Container_int_push(&v3, 10);
 Container_int_push(&v3, 20);
 Container_int_push(&v3, 30);
 v2 = Container_int_get(&v3, 0);
 v1 = Container_int_getSize(&v3);
 Container_double_Container(&v0);
 Container_double_push(&v0, 0.0);
 Container_double_get(&v0, 0);
 return;
}


// Function: sub_402837 at 0x402837
void sub_402837()
{
 test_cpp_lambda();
 return;
}


// Function: _Z15test_cpp_lambdav at 0x402840
void test_cpp_lambda()
{
 unsigned int v0; // [bp-0x2c]
 char v1; // [bp-0x28]
 unsigned int v2; // [bp-0x20]
 char *v3; // [bp-0x18]
 unsigned int v4; // [bp-0x10]
 unsigned int v5; // [bp-0xc]

 v5 = 10;
 v4 = 20;
 v2 = v5;
 v3 = &v4;
 v0 = test_cpp_lambda_dollar_1_operator()(&v2, 3);
 test_cpp_lambda_dollar_0_cl_ii(&v1, 10, 20);
 return;
}


// Function: sub_402897 at 0x402897
void sub_402897(unsigned long a0, unsigned long a1)
{
 test_cpp_lambda_dollar_1_operator()();
 return;
}


// Function: _ZZ15test_cpp_lambdavENK3__dollar__1clEi at 0x4028a0
long long test_cpp_lambda_dollar_1_operator()(char *this, int val)
{
 struct_1 *idx; // rdi
 unsigned int v2; // esi

 idx = *(struct_1**)this;
 v2 = (unsigned int)val;
 return idx->field_0 * v2;
}


// Function: sub_4028c8 at 0x4028c8
void sub_4028c8(unsigned long a0, unsigned long a1, unsigned long a2)
{
 test_cpp_lambda_dollar_0_cl_ii();
 return;
}


// Function: _ZZ15test_cpp_lambdavENK3__dollar__0clIiiEEDaT_T0_ at 0x4028d0
long long test_cpp_lambda_dollar_0_cl_ii(char *this, int a, int b)
{
 unsigned int v1; // esi
 unsigned int v2; // edx

 v1 = (unsigned int)a;
 v2 = (unsigned int)b;
 return v1 + v2;
}


// Function: sub_4028e6 at 0x4028e6
void sub_4028e6()
{
 test_cpp_exception();
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x4028f0
void test_cpp_exception()
{
 unsigned int result; // [bp-0xc]

 result = 0;
 *((unsigned int *)__cxa_allocate_exception(4)) = 42;
 __cxa_throw(__cxa_allocate_exception(4), &_ZTIi, 0);
 test_cpp_smart_ptr();
 return;
}


// Function: sub_402927 at 0x402927
long long sub_402927(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
 unsigned long long v6; // rax
 unsigned long v7; // rcx
 unsigned long long v8; // r8
 unsigned long long v9; // r9
 unsigned long long v10; // rcx
 unsigned long long v11; // r8
 unsigned long long v12; // r9
 unsigned int v1; // [bp+0xfffec]
 unsigned int v2; // [bp+0xffff0]
 unsigned int result; // [bp+0xffff4]
 unsigned long long v4; // [bp+0xffff8]
 unsigned int v5; // [bp+0x100004]

 v4 = v6;
 result = a2;
 if (result == 1)
 {
 v2 = *((int *)__cxa_begin_catch(v4));
 v7 = v2;
 v5 += v2;
 __cxa_rethrow(a0, a1, a2, v7, v8, v9);
 }
 else if (result == 1)
 {
 v1 = *((int *)__cxa_begin_catch(v4));
 v5 += v1 * 2;
 __cxa_end_catch(a0, a1, a2, v10, v11, v12);
 __cxa_throw(__cxa_allocate_exception(1), &_ZTIZ18test_cpp_exceptionvE16DerivedException, 0);
 }
 else
 {
 _Unwind_Resume(v4); /* do not return */
 }
}


// Function: sub_402966 at 0x402966
int sub_402966(unsigned long a0, unsigned long a1, unsigned int a2)
{
 unsigned long v3; // rax
 unsigned int v1; // [bp+0xffff4]
 unsigned long v2; // [bp+0xffff8]

 v2 = v3;
 v1 = a2;
 __cxa_end_catch();
}


// Function: sub_4029c8 at 0x4029c8
int sub_4029c8()
{
 unsigned long long v7; // rax
 unsigned int v8; // edx
 unsigned long long v17; // rsi
 unsigned long long v18; // rdx
 unsigned long long v19; // rcx
 unsigned long long v20; // r8
 unsigned long long v21; // r9
 unsigned int v9; // eax
 unsigned long long v10; // rdi
 unsigned long long v11; // rsi
 unsigned long long v12; // rdx
 unsigned long long v13; // rcx
 unsigned long long v14; // r8
 unsigned long long v15; // r9
 unsigned long long v16; // rdi
 unsigned int v1; // [bp+0xfffd4]
 unsigned long v2; // [bp+0xfffd8]
 unsigned long v3; // [bp+0xfffe0]
 unsigned int v4; // [bp+0xffff4]
 unsigned long long v5; // [bp+0xffff8]
 unsigned int v6; // [bp+0x100004]

 v5 = v7;
 v4 = v8;
 v9 = v4;
 v1 = v9;
 if (v9 != 3)
 {
 if (v1 != 2)
 goto LABEL_0x402a3d;
 v3 = __cxa_begin_catch(v5);
 v6 += 200;
 __cxa_end_catch(v16, v17, v18, v19, v20, v21);
 return;
 }
 v2 = __cxa_begin_catch(v5);
 v6 += 100;
 __cxa_end_catch(v10, v11, v12, v13, v14, v15);
 return;
}


// Function: _Z18test_cpp_smart_ptrv at 0x402a50
void test_cpp_smart_ptr()
{
 unsigned int *addr; // rax
 unsigned int v0; // [bp-0xa4]
 char *v1; // [bp-0xa0]
 unsigned int *p; // [bp-0x98]
 unsigned int *ptr4; // [bp-0x90]
 char *v4; // [bp-0x88]
 unsigned int *ptr6; // [bp-0x80]
 unsigned int ptr[5]; // [bp-0x78]
 char *v7; // [bp-0x70]
 unsigned int *ptr5; // [bp-0x68]
 char *v9; // [bp-0x60]
 unsigned int *ptr3; // [bp-0x58]
 unsigned int v11; // [bp-0x4c]
 char v12; // [bp-0x48]
 char v13; // [bp-0x40]
 unsigned int v14; // [bp-0x3c]
 char v15; // [bp-0x38]
 unsigned int v16; // [bp-0x2c]
 char v17; // [bp-0x28]
 char v18; // [bp-0x10]

 addr = operatornew(4);
 *(addr) = 100;
 v9 = &v18;
 std_unique_ptr_int_default_delete_unique_ptr(&v18, addr);
 ptr3 = std_unique_ptr_int_default_delete_operator_star(v9);
 *(ptr3) = 200;
 v7 = &v17;
 std_unique_ptr_int_default_delete_unique_ptr_copy(&v17, std_move_unique_ptr_int_default_delete(&v18));
 ptr5 = std_unique_ptr_int_default_delete_operator_star(v7);
 v16 = *(ptr5);
 *((long long *)&ptr[0]) = operatornew[](20);
 ptr[0] = 1;
 ptr[1] = 2;
 ptr[2] = 3;
 ptr[3] = 4;
 ptr[4] = 5;
 v4 = &v15;
 std_unique_ptr_int_array_default_delete_unique_ptr(&v15, ptr);
 ptr6 = std_unique_ptr_int_array_default_delete_operator_index(v4, 2);
 v14 = *(ptr6);
 ptr4 = operatornew(4);
 *(ptr4) = 500;
 v1 = &v12;
 std_unique_ptr_int_custom_deleter_unique_ptr(&v12, ptr4, &v13);
 p = std_unique_ptr_int_custom_deleter_operator_star(v1);
 v11 = *(p);
 v0 = v16 + v14 + v11;
 return;
}


// Function: sub_402bce at 0x402bce
int sub_402bce(unsigned long a0, unsigned long a1, unsigned int a2)
{
 unsigned long long v3; // rax
 unsigned int v1; // [bp+0xffff4]
 unsigned long long v2; // [bp+0xffff8]

 v2 = v3;
 v1 = a2;
 _Unwind_Resume(v2); /* do not return */
}


// Function: sub_402bdf at 0x402bdf
int sub_402bdf(unsigned long a0, unsigned long a1, unsigned int a2)
{
 unsigned long v3; // rax
 unsigned int v1; // [bp+0xffff4]
 unsigned long v2; // [bp+0xffff8]

 v2 = v3;
 v1 = a2;
}


// Function: sub_402bf0 at 0x402bf0
int sub_402bf0(unsigned long a0, unsigned long a1, unsigned int a2)
{
 unsigned long v3; // rax
 unsigned int v1; // [bp+0xffff4]
 unsigned long v2; // [bp+0xffff8]

 v2 = v3;
 v1 = a2;
}


// Function: sub_402c01 at 0x402c01
int sub_402c01(unsigned long a0, unsigned long a1, unsigned int a2)
{
 unsigned long v3; // rax
 unsigned int v1; // [bp+0xffff4]
 unsigned long v2; // [bp+0xffff8]

 v2 = v3;
 v1 = a2;
}


// Function: sub_402c3a at 0x402c3a
void sub_402c3a(unsigned long a0, unsigned long a1, unsigned long a2)
{
 std_unique_ptr_int_custom_deleter_unique_ptr(a0, a1, a2);
 return;
}


// Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3__dollar__2EC2IS0_vEEPiRKS0_ at 0x402c40
long long std_unique_ptr_int_custom_deleter_unique_ptr(char *a0, unsigned int *a1, char *deleter)
{
 (void)a1;
 (void)deleter;
 return (long long)a0;
}

// Stub for C++ template function
long long std_unique_ptr_int_custom_deleter_unique_ptr_copy(char *a0, char *a1)
{
 (void)a0;
 (void)a1;
 return 0;
}


// Function: sub_402c70 at 0x402c70
void sub_402c70()
{
 unsigned long long v1; // rax

 __clang_call_terminate(v1); /* do not return */
}


// Function: sub_402c78 at 0x402c78
void sub_402c78(unsigned long a0)
{
 std_unique_ptr_int_custom_deleter_operator_star(a0);
 return;
}


// Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3__dollar__2EdeEv at 0x402c80
unsigned int* std_unique_ptr_int_custom_deleter_operator_star(void *this)
{
 return (unsigned int*)*((void**)this);
}


// Function: sub_402ca8 at 0x402ca8
void sub_402ca8(unsigned long a0)
{
 return;
}


// Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3__dollar__2ED2Ev at 0x402cb0
unsigned long long * std_unique_ptr_int_custom_deleter_destructor(unsigned long long a0)
{
 unsigned long long *v4; // rax
 unsigned long long v0; // [bp-0x30]
 unsigned long long *v1; // [bp-0x20]
 unsigned long long *ptr; // [bp-0x18]

 (void)v4;
 (void)v0;
 (void)v1;
 ptr = (unsigned long long*)a0;
 if (ptr && *ptr)
 {
 operatordelete((void*)*ptr);
 }
 return ptr;
}


// Function: sub_402d25 at 0x402d25
void sub_402d25()
{
 unsigned long long v1; // rax

 __clang_call_terminate(v1); /* do not return */
}


// Function: sub_402d2d at 0x402d2d
void sub_402d2d()
{
 test_cpp_rtti();
 return;
}


// Function: _Z13test_cpp_rttiv at 0x402d30
void test_cpp_rtti()
{
 void* *v0; // [bp-0x88]
 void* *v1; // [bp-0x80]
 void* *v2; // [bp-0x78]
 unsigned long long v3; // [bp-0x70]
 void* *v4; // [bp-0x68]
 unsigned long long v5; // [bp-0x60]
 void* *v6; // [bp-0x58]
 void* *v7; // [bp-0x50]
 void* *v8; // [bp-0x48]
 void* *v9; // [bp-0x40]
 void* *v10; // [bp-0x38]
 unsigned long long v11; // [bp-0x30]
 unsigned long long v12; // [bp-0x28]
 unsigned int cur; // [bp-0x1c]
 void* *flag1; // [bp-0x18]
 void* *result; // [bp-0x10]

 v8 = operatornew(8);
 memset(v8, 0, 8);
 RTTIDerivedA_RTTIDerivedA(v8);
 result = v8;
 v9 = operatornew(8);
 memset(v9, 0, 8);
 RTTIDerivedB_RTTIDerivedB(v9);
 flag1 = v9;
 cur = 0;
 v10 = result;
 if (!result)
 __cxa_bad_typeid();
 if (((char)std_type_info_operator_eq((void*)(*(v10))[8], (void*)&_ZTI12RTTIDerivedA) & 1))
 cur += 10;
 v7 = flag1;
 if (!flag1)
 __cxa_bad_typeid();
 if (((char)std_type_info_operator_eq((void*)(*(v7))[8], (void*)&_ZTI12RTTIDerivedB) & 1))
 cur += 20;
 v6 = result;
 v5 = (!result ? NULL : __dynamic_cast(v6, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, NULL));
 v12 = v5;
 if (v12)
 cur += RTTIDerivedA_derivedA_data(v12);
 v4 = flag1;
 v3 = (!flag1 ? NULL : __dynamic_cast(v4, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedB, NULL));
 v11 = v3;
 if (v11)
 cur += RTTIDerivedB_derivedB_data(v11);
 v2 = result;
 if (!result)
 __cxa_bad_typeid();
 cur += (unsigned int)strlen(std_type_info_name((void*)(*(v2))[8]));
 v1 = result;
 if (result)
 (long long)(*(v1))[8](v1);
 v0 = flag1;
 if (flag1)
 (long long)(*(v0))[8](v0);
 return;
}


// Function: sub_402f6c at 0x402f6c
void sub_402f6c()
{
 test_cpp_oo_features();
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x402f70
void test_cpp_oo_features()
{
 printf(&g_405025);
 printf(&g_40504a, (unsigned long long)test_cpp_member_func() & 4294967295);
 printf(&g_405068, (unsigned long long)test_cpp_constructor() & 4294967295);
 printf(&g_405084, (unsigned long long)test_cpp_virtual_func() & 4294967295);
 printf(&g_4050a0, (unsigned long long)test_cpp_multiple_inheritance() & 4294967295);
 printf(&g_4050bc, (unsigned long long)test_cpp_diamond_inheritance() & 4294967295);
 printf(&g_4050d9, (unsigned long long)test_cpp_operator_overload() & 4294967295);
 printf(&g_4050f5, (unsigned long long)test_cpp_template_func() & 4294967295);
 printf(&g_405111, (unsigned long long)test_cpp_template_class() & 4294967295);
 printf(&g_40512d, (unsigned long long)test_cpp_lambda() & 4294967295);
 printf(&g_405149, (unsigned long long)test_cpp_exception() & 4294967295);
 printf(&g_405166, (unsigned long long)test_cpp_smart_ptr() & 4294967295);
 printf(&g_405183, (unsigned long long)test_cpp_rtti() & 4294967295);
 return;
}


// Function: main at 0x403080
unsigned int main()
{
 unsigned int result; // [bp-0xc]

 result = 0;
 test_cpp_oo_features();
 return 0;
}


// Function: sub_40309c at 0x40309c
void sub_40309c(unsigned long a0, unsigned long a1, unsigned long a2)
{
 std_uniq_ptr_data_int_dollar_2_true_false___uniq_ptr_data(a0, a1, a2);
 return;
}


// Function: _ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3__dollar__2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_ at 0x4030a0
long long std_uniq_ptr_data_int_dollar_2_true_false___uniq_ptr_data(char *a0, unsigned long long v1, unsigned long long v2);
long long std_uniq_ptr_data_int_dollar_2_true_false___uniq_ptr_data(char *a0, unsigned long long v1, unsigned long long v2)
{
 (void)v1;
 (void)v2;
 return std_uniq_ptr_impl_int_dollar_2__uniq_ptr_impl(a0, v1, v2);
}


// Function: sub_4030cb at 0x4030cb
void sub_4030cb(unsigned long a0, unsigned long a1, unsigned long a2)
{
 std_uniq_ptr_impl_int_dollar_2__uniq_ptr_impl(a0, a1, a2);
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3__dollar__2EC2IRKS0_EEPiOT_ at 0x4030d0
// C++ template function - stub
long long std_uniq_ptr_impl_int_dollar_2__uniq_ptr_impl(unsigned long long a0, unsigned long long v1, unsigned long long v2);
long long std_uniq_ptr_impl_int_dollar_2__uniq_ptr_impl(unsigned long long a0, unsigned long long v1, unsigned long long v2)
{
 (void)v1;
 (void)v2;
 return a0;
}


// Function: sub_40310b at 0x40310b
void sub_40310b(unsigned long a0)
{
 std_forward_dollar_2(a0);
 return;
}


// Function: _ZSt7forwardIRKZ18test_cpp_smart_ptrvE3__dollar__2EOT_RNSt16remove_referenceIS3_E4typeE at 0x403110
// C++ template function - stub
long long std_forward_dollar_2(unsigned long a0);
long long std_forward_dollar_2(unsigned long a0)
{
 (void)a0;
 return a0;
}


// Function: sub_40311e at 0x40311e
void sub_40311e(unsigned long a0, unsigned long a1, unsigned long a2)
{
 std_tuple_int_dollar_2_tuple(a0, a1, a2);
 return;
}


// Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvE3__dollar__2EEC2IRS0_RKS1_Lb1EEEOT_OT0_ at 0x403120
// C++ template function - stub
long long std_tuple_int_dollar_2_tuple(unsigned long long a0, unsigned long long a1, unsigned int a2);
long long std_tuple_int_dollar_2_tuple(unsigned long long a0, unsigned long long a1, unsigned int a2)
{
 (void)a0;
 (void)a1;
 (void)a2;
 return a0;
}


// Function: sub_40316d at 0x40316d
void sub_40316d()
{
 unsigned long long v1; // rax

 __clang_call_terminate(v1); /* do not return */
}


// Function: sub_403175 at 0x403175
void sub_403175(unsigned long a0, unsigned long a1, unsigned long a2)
{
 std_Tuple_impl_0ul_int_dollar_2_Tuple_impl(a0, a1, a2);
 return;
}


// Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3__dollar__2EEC2IRS0_JRKS1_EvEEOT_DpOT0_ at 0x403180
// C++ template function - stub
long long std_Tuple_impl_0ul_int_dollar_2_Tuple_impl(unsigned long long a0, unsigned long long a1, unsigned int a2);
long long std_Tuple_impl_0ul_int_dollar_2_Tuple_impl(unsigned long long a0, unsigned long long a1, unsigned int a2)
{
 (void)a0;
 (void)a1;
 (void)a2;
 return a0;
}


// Function: sub_4031d8 at 0x4031d8
void sub_4031d8(unsigned long a0, unsigned long a1)
{
 std_Tuple_impl_1ul_dollar_2_Tuple_impl(a0, a1);
 return;
}


// Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvE3__dollar__2EEC2ERKS0_ at 0x4031e0
// C++ template function - stub
void std_Tuple_impl_1ul_dollar_2_Tuple_impl(unsigned long long a0, unsigned long long a1);
void std_Tuple_impl_1ul_dollar_2_Tuple_impl(unsigned long long a0, unsigned long long a1)
{
 (void)a0;
 (void)a1;
 return;
}


// Function: sub_403203 at 0x403203
void sub_403203(unsigned long a0, unsigned long a1)
{
 std_Head_base_1ul_dollar_2_Head_base(a0, a1);
 return;
}


// Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvE3__dollar__2Lb1EEC2ERKS0_ at 0x403210
// C++ template function - stub
void std_Head_base_1ul_dollar_2_Head_base(unsigned long a0, unsigned long a1);
void std_Head_base_1ul_dollar_2_Head_base(unsigned long a0, unsigned long a1)
{
 (void)a0;
 (void)a1;
 return;
}


// Function: sub_40321e at 0x40321e
void sub_40321e(unsigned long a0)
{
 std_uniq_ptr_impl_int_dollar_2_M_ptr(a0);
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3__dollar__2E6_M_ptrEv at 0x403220
// C++ template function - stub
void std_uniq_ptr_impl_int_dollar_2_M_ptr(unsigned long long a0);
void std_uniq_ptr_impl_int_dollar_2_M_ptr(unsigned long long a0)
{
 (void)a0;
 return;
}


// Function: sub_40323b at 0x40323b
void sub_40323b(unsigned long a0)
{
 std_unique_ptr_int_dollar_2_get_deleter_func(a0);
 return;
}


// Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3__dollar__2E11get_deleterEv at 0x403240
// C++ template function - stub
unsigned long long std_unique_ptr_int_dollar_2_get_deleter_func(unsigned long long a0);
unsigned long long std_unique_ptr_int_dollar_2_get_deleter_func(unsigned long long a0)
{
 (void)a0;
 return a0;
}


// Function: sub_403268 at 0x403268
void sub_403268()
{
 unsigned long long v1; // rax

 __clang_call_terminate(v1); /* do not return */
}


// Function: _ZZ18test_cpp_smart_ptrvENK3__dollar__2clEPi at 0x403270
unsigned int * test_cpp_smart_ptr_dollar_2_operator(unsigned long long a0, unsigned int *ptr)
{
 unsigned int *v3; // rax
 unsigned int *v0; // [bp-0x20]
 unsigned long long v1; // [bp-0x10]

 (void)v3;
 (void)v0;
 v1 = a0;
 if (ptr)
 {
 *ptr = 4294967295;
 operatordelete(ptr);
 }
 (void)v1;
 return 0;
}


// Function: sub_4032ab at 0x4032ab
void sub_4032ab(unsigned long a0)
{
 std_get_0ul_int_dollar_2_func(a0);
 return;
}


// Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvE3__dollar__2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ at 0x4032b0
// C++ template function - stub
void std_get_0ul_int_dollar_2_func(unsigned long long a0);
void std_get_0ul_int_dollar_2_func(unsigned long long a0)
{
 (void)a0;
 return;
}


// Function: sub_4032cb at 0x4032cb
void sub_4032cb(unsigned long a0)
{
 std__get_helper_0ul_int_dollar_2(a0);
 return;
}


// Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvE3__dollar__2EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x4032d0
void* std__get_helper_0ul_int_dollar_2(unsigned long long a0);
void std_Tuple_impl_0ul_int_dollar_2_M_head(unsigned long long a0);

void* std__get_helper_0ul_int_dollar_2(unsigned long long a0)
{
 std_Tuple_impl_0ul_int_dollar_2_M_head(a0);
 return (void*)a0;
}


// Function: sub_4032eb at 0x4032eb
void sub_4032eb(unsigned long a0)
{
 std_Tuple_impl_0ul_int_dollar_2_M_head(a0);
 return;
}


// Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3__dollar__2EE7_M_headERS2_ at 0x4032f0
void std_Tuple_impl_0ul_int_dollar_2_M_head(unsigned long long a0);
void std_Head_base_0ul_int_false_M_head(unsigned long long a0);

void std_Tuple_impl_0ul_int_dollar_2_M_head(unsigned long long a0)
{
 std_Head_base_0ul_int_false_M_head(a0);
 return;
}


// Function: sub_40330b at 0x40330b
void sub_40330b(unsigned long a0)
{
 std_uniq_ptr_impl_int_dollar_2_M_deleter(a0);
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3__dollar__2E10_M_deleterEv at 0x403310
void std_uniq_ptr_impl_int_dollar_2_M_deleter(unsigned long long a0);
void std_get_1ul_int_dollar_2(unsigned long long a0);

void std_uniq_ptr_impl_int_dollar_2_M_deleter(unsigned long long a0)
{
 std_get_1ul_int_dollar_2(a0);
 return;
}


// Function: sub_40332b at 0x40332b
void sub_40332b(unsigned long a0)
{
 std_get_1ul_int_dollar_2(a0);
 return;
}


// Function: _ZSt3getILm1EJPiZ18test_cpp_smart_ptrvE3__dollar__2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ at 0x403330
void std_get_1ul_int_dollar_2(unsigned long long a0);
void std__get_helper_1ul_dollar_2(unsigned long long a0);

void std_get_1ul_int_dollar_2(unsigned long long a0)
{
 std__get_helper_1ul_dollar_2(a0);
 return;
}


// Function: sub_40334b at 0x40334b
void sub_40334b(unsigned long a0)
{
 std__get_helper_1ul_dollar_2(a0);
 return;
}


// Function: _ZSt12__get_helperILm1EZ18test_cpp_smart_ptrvE3__dollar__2JEERT0_RSt11_Tuple_implIXT_EJS1_DpT1_EE at 0x403350
void std__get_helper_1ul_dollar_2(unsigned long long a0);
void std_Tuple_impl_1ul_dollar_2_M_head(unsigned long long a0);

void std__get_helper_1ul_dollar_2(unsigned long long a0)
{
 std_Tuple_impl_1ul_dollar_2_M_head(a0);
 return;
}


// Function: sub_40336b at 0x40336b
void sub_40336b(unsigned long a0)
{
 std_Tuple_impl_1ul_dollar_2_M_head(a0);
 return;
}


// Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvE3__dollar__2EE7_M_headERS1_ at 0x403370
void std_Tuple_impl_1ul_dollar_2_M_head(unsigned long long a0);
long long std_Head_base_1ul_dollar_2_M_head(unsigned long a0, unsigned long a1);

void std_Tuple_impl_1ul_dollar_2_M_head(unsigned long long a0)
{
 std_Head_base_1ul_dollar_2_M_head(a0, a0);
 return;
}


// Function: sub_40338b at 0x40338b
void sub_40338b(unsigned long a0)
{
 std_Head_base_1ul_dollar_2_M_head(a0, a0);
 return;
}


// Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvE3__dollar__2Lb1EE7_M_headERS1_ at 0x403390
long long std_Head_base_1ul_dollar_2_M_head(unsigned long a0, unsigned long a1);

long long std_Head_base_1ul_dollar_2_M_head(unsigned long a0, unsigned long a1)
{
 (void)a1;
 return a0;
}


// Function: sub_40339e at 0x40339e
void sub_40339e(unsigned long a0)
{
 std_unique_ptr_int_dollar_2_get_const(a0);
 return;
}


// Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3__dollar__2E3getEv at 0x4033a0
unsigned long long std_unique_ptr_int_dollar_2_get_const(unsigned long long a0);
unsigned long long std__uniq_ptr_impl_int_dollar_2_M_ptr_const(unsigned long long a0);

unsigned long long std_unique_ptr_int_dollar_2_get_const(unsigned long long a0)
{
 unsigned long long v0; // [bp-0x18]

 v0 = std__uniq_ptr_impl_int_dollar_2_M_ptr_const(a0);
 return v0;
}


// Function: sub_4033c8 at 0x4033c8
void sub_4033c8()
{
 unsigned long long v1; // rax

 __clang_call_terminate(v1); /* do not return */
}


// Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3__dollar__2E6_M_ptrEv at 0x4033d0
long long std__uniq_ptr_impl_int_dollar_2_M_ptr_const(unsigned long long a0);
void* std_get_0ul_int_dollar_2_const(unsigned long long a0);

long long std__uniq_ptr_impl_int_dollar_2_M_ptr_const(unsigned long long a0)
{
 return *((long long *)std_get_0ul_int_dollar_2_const(a0));
}


// Function: sub_4033ee at 0x4033ee
void sub_4033ee(unsigned long a0)
{
 std_get_0ul_int_dollar_2_const(a0);
 return;
}


// Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvE3__dollar__2EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ at 0x4033f0
void* std_get_0ul_int_dollar_2_const(unsigned long long a0);
void* std__get_helper_0ul_int_dollar_2_const(unsigned long long a0);

void* std_get_0ul_int_dollar_2_const(unsigned long long a0)
{
 return std__get_helper_0ul_int_dollar_2_const(a0);
}


// Function: sub_40340b at 0x40340b
void sub_40340b(unsigned long a0)
{
 std__get_helper_0ul_int_dollar_2_const(a0);
 return;
}


// Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvE3__dollar__2EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x403410
void* std__get_helper_0ul_int_dollar_2_const(unsigned long long a0);
void std_Tuple_impl_0ul_int_dollar_2_M_head_const(unsigned long long a0);

void* std__get_helper_0ul_int_dollar_2_const(unsigned long long a0)
{
 std_Tuple_impl_0ul_int_dollar_2_M_head_const(a0);
 return (void*)a0;
}


// Function: sub_40342b at 0x40342b
void sub_40342b(unsigned long a0)
{
 std_Tuple_impl_0ul_int_dollar_2_M_head_const(a0);
 return;
}


// Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3__dollar__2EE7_M_headERKS2_ at 0x403430
void std_Tuple_impl_0ul_int_dollar_2_M_head_const(unsigned long long a0);

void std_Tuple_impl_0ul_int_dollar_2_M_head_const(unsigned long long a0)
{
 std_Head_base_0ul_int_false_M_head(a0);
 return;
}


// Function: sub_40344b at 0x40344b
void sub_40344b(unsigned long a0, unsigned long a1, unsigned long a2)
{
 SimpleClass_SimpleClass((char*)a0, (int)a1, (const char*)a2);
 return;
}


// Function: _ZN11SimpleClassC2EiPKc at 0x403450
typedef struct SimpleClass_struct {
 unsigned int field_0;
 char padding_4[31];
 char field_23;
} SimpleClass_struct;

long long SimpleClass_SimpleClass_func(char *ptr, unsigned int v2, char *v3)
{
 ((SimpleClass_struct*)ptr)->field_0 = v2;
 strncpy(((SimpleClass_struct*)ptr)->padding_4, v3, 31);
 ((SimpleClass_struct*)ptr)->field_23 = 0;
 return (long long)ptr;
}


// Function: _ZN11SimpleClass8setValueEi at 0x403490
long long SimpleClass_setValue_func(char *ptr, unsigned int v2)
{
 *(unsigned int*)ptr = v2;
 return (long long)ptr;
}


// Function: sub_4034a6 at 0x4034a6
void sub_4034a6(unsigned long a0)
{
 SimpleClass_getValue_func((void*)a0);
 return;
}


// Function: _ZNK11SimpleClass8getValueEv at 0x4034b0
long long SimpleClass_getValue_func(void *v1)
{
 return *(unsigned int*)v1;
}


// Function: _ZNK11SimpleClass7computeEi at 0x4034c0
long long SimpleClass_compute_func(void *ptr, unsigned int v2)
{
 unsigned long v0;
 v0 = v2 * *(unsigned int*)ptr;
 return v0 + strlen((char*)ptr + 4);
}


// Function: sub_4034f8 at 0x4034f8
void sub_4034f8()
{
 SimpleClass_getClassID_func();
 return;
}


// Function: _ZN11SimpleClass10getClassIDEv at 0x403500
void SimpleClass_getClassID_func(void* this)
{
 return;
}


// Function: sub_40350b at 0x40350b
void sub_40350b(unsigned long a0, unsigned long a1)
{
 LifecycleClass_LifecycleClass_func((char*)a0, a1);
 return;
}


// Function: _ZN14LifecycleClassC2Em at 0x403510
long long LifecycleClass_LifecycleClass_func(char *ptr, unsigned long v3)
{
 unsigned long v4;
 unsigned long long idx;

 v4 = v3 * 4;
 if ((char)_ccall(0, 48, v3, 4, 0))
 v4 = 18446744073709551615;
 *(unsigned long long*)ptr = operatornew[](v4);
 ((unsigned long*)ptr)[1] = v3;
 for (idx = 0; idx < v3; idx += 1)
 {
 ((unsigned int*)*(unsigned long long*)ptr)[idx] = (unsigned int)idx * 10;
 }
 g_lifecycle_instance_count = g_lifecycle_instance_count + 1;
 return g_lifecycle_instance_count + 1;
}


// Function: sub_4035ad at 0x4035ad
void sub_4035ad(unsigned long a0, unsigned long a1)
{
 LifecycleClass_getData_func((void*)a0, a1);
 return;
}


// Function: _ZNK14LifecycleClass7getDataEm at 0x4035b0
long long LifecycleClass_getData_func(void *v3, unsigned long v2)
{
 unsigned int v0;
 unsigned long long *ptr = (unsigned long long*)v3;

 v0 = (v2 < ptr[1] ? *((int *)(ptr[0] + v2 * 4)) : 4294967295);
 return v0;
}


// Function: sub_4035fa at 0x4035fa
void sub_4035fa()
{
 LifecycleClass_getInstanceCount_func();
 return;
}


// Function: _ZN14LifecycleClass16getInstanceCountEv at 0x403600
void LifecycleClass_getInstanceCount_func(void* this)
{
 return;
}


// Function: sub_40360c at 0x40360c
void sub_40360c(unsigned long a0)
{
 return;
}


// Function: _ZN14LifecycleClassD2Ev at 0x403610
int LifecycleClass_destructor_func(void* ptr)
{
 unsigned long v0;

 v0 = *((long long *)ptr);
 if (v0)
 operatordelete[]((void*)v0);
 g_lifecycle_instance_count = g_lifecycle_instance_count - 1;
 return 0;
}


// Function: sub_40364f at 0x40364f
void sub_40364f(unsigned long a0)
{
 Base_Base_func((char*)a0);
 return;
}


// Function: _ZN4BaseC2Ev at 0x403650
long long Base_Base_func(char *ptr)
{
 *(char **)ptr = &g_408878;
 return (long long)ptr;
}


// Function: sub_40366c at 0x40366c
void sub_40366c(unsigned long a0, unsigned long a1)
{
 Derived_Derived_func((char*)a0, (unsigned int)a1);
 return;
}


// Function: _ZN7DerivedC2Ei at 0x403670
typedef struct Derived_struct {
 char padding_0[8];
 unsigned int field_8;
} Derived_struct;

long long Derived_Derived_func(char *ptr, unsigned int v2)
{
 Base_Base_func(ptr);
 *(char **)ptr = &g_4088b8;
 ((Derived_struct*)ptr)->field_8 = v2;
 return (long long)ptr;
}


// Function: sub_4036aa at 0x4036aa
void sub_4036aa(unsigned long a0, unsigned long a1)
{
 Base_virtual_func_func((void*)a0, (unsigned int)a1);
 return;
}


// Function: _ZN4Base12virtual_funcEi at 0x4036b0
long long Base_virtual_func_func(void *this, unsigned int v1)
{
 return v1 + 1;
}


// Function: sub_4036c3 at 0x4036c3
void sub_4036c3(unsigned long a0, unsigned long a1)
{
 Derived_virtual_func_func((void*)a0, (unsigned int)a1);
 return;
}


// Function: _ZN7Derived12virtual_funcEi at 0x4036d0
long long Derived_virtual_func_func(void *v1, unsigned int v2)
{
 return ((Derived_struct*)v1)->field_8 * v2;
}


// Function: sub_4036e8 at 0x4036e8
void sub_4036e8(unsigned long a0)
{
 return;
}


// Function: _ZN7DerivedD2Ev at 0x4036f0
int Derived_destructor_func(void* this)
{
 void* v0; // [bp-0x10]

 v0 = this;
 return;
}


// Function: sub_40370b at 0x40370b
void sub_40370b(unsigned long a0)
{
 return;
}


// Function: _ZN4BaseD2Ev at 0x403710
int Base_destructor_func(void* this)
{
 return;
}


// Function: sub_40371a at 0x40371a
void sub_40371a(unsigned long a0)
{
 MultiDerived_MultiDerived();
 return;
}


// Function: _ZN12MultiDerivedC2Ev at 0x403720
long long MultiDerived_MultiDerived()
{
 unsigned long long ptr; // rdi

 BaseA_BaseA(ptr);
 BaseB_BaseB(ptr + 16);
 *((char **)ptr) = &g_408900;
 *((char **)(ptr + 16)) = &g_408930;
 return ptr;
}


// Function: sub_40376d at 0x40376d
void sub_40376d(unsigned long a0)
{
 return;
}


// Function: _ZN12MultiDerivedD2Ev at 0x403770
int MultiDerived::~MultiDerived(void* this)
{
 void* v0; // [bp-0x18]

 v0 = this;
 return;
}


// Function: sub_40379c at 0x40379c
void sub_40379c(unsigned long a0)
{
 DiamondDerived_DiamondDerived();
 return;
}


// Function: _ZN14DiamondDerivedC1Ev at 0x4037a0
long long DiamondDerived_DiamondDerived()
{
 unsigned long long ptr; // rdi

 VirtualBase_VirtualBase(ptr + 32);
 MiddleA_MiddleA(ptr, &g_408a90);
 MiddleB_MiddleB(ptr + 16, &g_408aa0);
 *((char **)ptr) = &g_408a08;
 *((char **)(ptr + 32)) = &g_408a70;
 *((char **)(ptr + 16)) = &g_408a38;
 return ptr;
}


// Function: sub_403822 at 0x403822
void sub_403822(unsigned long a0)
{
 return;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x403830
int DiamondDerived::~DiamondDerived(void* this)
{
 void* v0; // [bp-0x18]

 v0 = this;
 return;
}


// Function: sub_403863 at 0x403863
void sub_403863(unsigned long a0, unsigned long a1, unsigned long a2)
{
 Point_Point();
 return;
}


// Function: _ZN5PointC2Eii at 0x403870
int Point_Point(void* ptr, int arg_0, int arg_1)
{
 *((int *)ptr) = arg_0;
 *((int *)&ptr[4]) = arg_1;
 return;
}


// Function: sub_40388f at 0x40388f
void sub_40388f(unsigned long a0, unsigned long a1)
{
 Point_operator_plus();
 return;
}


// Function: _ZNK5PointplERKS_ at 0x403890
long long Point_operator_plus(char *a0)
{
 unsigned int v2[2]; // rsi
 char v0; // [bp-0x10], Other Possible Types: unsigned long

 Point_Point(&v0, *((int *)&a0) + v2[0], *((int *)&a0[4]) + v2[1]);
 return v0;
}


// Function: sub_4038c9 at 0x4038c9
void sub_4038c9(unsigned long a0, unsigned long a1)
{
 Point_operator_eq();
 return;
}


// Function: _ZNK5PointeqERKS_ at 0x4038d0
long long Point_operator_eq(char *ptr)
{
 unsigned long p; // rsi
 char v0; // [bp-0x19]

 v0 = 0;
 if (*((int *)&ptr) == *((int *)p))
 v0 = *((int *)&ptr[4]) == *((int *)(p + 4));
 return v0 & 1;
}


// Function: sub_403915 at 0x403915
void sub_403915(unsigned long a0)
{
 Point_operator_inc();
 return;
}


// Function: _ZN5PointppEv at 0x403920
long long Point_operator_inc()
{
 unsigned int ptr[2]; // rdi

 ptr[0] = ptr[0] + 1;
 ptr[1] = ptr[1] + 1;
 return ptr;
}


// Function: sub_40393e at 0x40393e
void sub_40393e(unsigned long a0, unsigned long a1)
{
 template_max_int();
 return;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x403940
int template_max<int>(int arg_0, int arg_1)
{
 unsigned int v0; // [bp-0x14]

 v0 = (arg_0 <= arg_1 ? arg_1 : arg_0);
 return v0;
}


// Function: sub_40396c at 0x40396c
void sub_40396c()
{
 template_max_double();
 return;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x403970
double template_max<double>(double arg_0, double arg_1)
{
 unsigned long v0; // [bp-0x20]

 *((double *)&v0) = (((CmpF(arg_0, arg_1) & 69 | (CmpF(arg_0, arg_1) & 69) >> 6) & 1) == 1 ? arg_1 : arg_0);
 return v0;
}


// Function: sub_4039ae at 0x4039ae
void sub_4039ae(unsigned long a0, unsigned long a1)
{
 template_swap_int();
 return;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x4039b0
long long template_swap<int>(unsigned int *ptr)
{
 unsigned int *p; // rsi
 unsigned int v0; // [bp-0x1c]

 v0 = *(ptr);
 *(ptr) = *(p);
 *(p) = v0;
 return p;
}


// Function: sub_4039dc at 0x4039dc
void sub_4039dc(unsigned long a0)
{
 Container_int_Container();
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x4039e0
typedef struct Container_int_struct {
 char padding_0[40];
 unsigned int field_28;
} Container_int_struct;

void Container_int_Container(char *this)
{
 ((Container_int_struct*)this)->field_28 = 0;
 return;
}


// Function: sub_4039f5 at 0x4039f5
void sub_4039f5(unsigned long a0, unsigned long a1)
{
 Container_int_push();
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x403a00
void Container_int_push(void* ptr, int arg_0)
{
 unsigned int v1; // ecx

 if ((int)ptr[40] < 10)
 {
 v1 = (int)ptr[40];
 *((unsigned int *)&ptr[40]) = v1 + 1;
 *((int *)((char *)ptr + 4 * v1)) = arg_0;
 }
 return;
}


// Function: sub_403a37 at 0x403a37
void sub_403a37(unsigned long a0, unsigned long a1)
{
 Container_int_get();
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x403a40
int Container_int_get(void* this, int idx)
{
 unsigned int v0;
 Container_int_struct *ptr = (Container_int_struct*)this;

 if (idx >= 0 && (unsigned int)idx < ptr->field_28)
 {
 v0 = ((unsigned int*)((char*)ptr + 4 * idx))[0];
 return v0;
 }
 v0 = 0;
 return v0;
}


// Function: sub_403a8c at 0x403a8c
void sub_403a8c(unsigned long a0)
{
 Container_int_getSize();
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x403a90
int Container_int_getSize(void* this)
{
 return ((Container_int_struct*)this)->field_28;
}


// Function: sub_403aa1 at 0x403aa1
void sub_403aa1(unsigned long a0)
{
 Container_double_Container();
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x403ab0
typedef struct Container_double_struct {
 char padding_0[80];
 unsigned int field_50;
} Container_double_struct;

void Container_double_Container(char *this)
{
 ((Container_double_struct*)this)->field_50 = 0;
 return;
}


// Function: sub_403ac5 at 0x403ac5
void sub_403ac5(unsigned long a0)
{
 Container_double_push();
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x403ad0
long long Container_double_push()
{
 struct_0 *v2; // rdi
 struct_0 *ptr; // rax
 unsigned int v4; // ecx
 unsigned long v5; // xmm0lq
 struct_0 *v0; // [bp-0x20]

 ptr = v2;
 v0 = ptr;
 if (ptr->field_50 < 10)
 {
 ptr = v0;
 v4 = ptr->field_50;
 ptr->field_50 = v4 + 1;
 (&ptr->field_0)[v4] = v5;
 }
 return ptr;
}


// Function: sub_403b0d at 0x403b0d
void sub_403b0d(unsigned long a0, unsigned long a1)
{
 Container_double_get();
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x403b10
double Container_double_get(void* this, int idx)
{
 Container_double_struct *ptr = (Container_double_struct*)this;
 double v1;

 if (idx >= 0 && (unsigned int)idx < ptr->field_50)
 {
 v1 = ((double*)((char*)ptr + 8 * idx))[0];
 return v1;
 }
 v1 = 0.0;
 return v1;
}


// Function: sub_403b63 at 0x403b63
void sub_403b63(unsigned long a0)
{
 Container_double_getSize();
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x403b70
int Container_double_getSize(void* this)
{
 return ((Container_double_struct*)this)->field_50;
}


// Function: sub_403b81 at 0x403b81
void sub_403b81(unsigned long a0, unsigned long a1)
{
 std_unique_ptr_int_default_delete_unique_ptr(a0);
 return;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi at 0x403b90
long long std_unique_ptr_int_default_delete_unique_ptr(char *a0)
{
 unsigned long long v1; // rsi

 return std__uniq_ptr_data_int_default_delete_true_true___uniq_ptr_data(a0, v1);
}


// Function: sub_403bb8 at 0x403bb8
void sub_403bb8()
{
 unsigned long long v1; // rax

 __clang_call_terminate(v1); /* do not return */
}


// Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv at 0x403bc0
unsigned int* std_unique_ptr_int_default_delete_operator_star(void* this)
{
 return (unsigned int*)std_unique_ptr_int_default_delete_get(this);
}


// Function: sub_403be8 at 0x403be8
void sub_403be8(unsigned long a0)
{
 std_move_unique_ptr_int_default_delete();
 return;
}


// Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ at 0x403bf0
void* std_move_unique_ptr_int_default_delete(void* this)
{
 return this;
}


// Function: sub_403bfe at 0x403bfe
void sub_403bfe(unsigned long a0, unsigned long a1)
{
 std_unique_ptr_int_default_delete_unique_ptr_copy();
 return;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_ at 0x403c00
void std_unique_ptr_int_default_delete_unique_ptr_copy(char *this, char *src)
{
 (void)this;
 (void)src;
 return;
}


// Function: sub_403c23 at 0x403c23
void sub_403c23(unsigned long a0, unsigned long a1)
{
 std_unique_ptr_int_array_default_delete_unique_ptr(a0);
 return;
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ at 0x403c30
long long std_unique_ptr_int_array_default_delete_unique_ptr(char *a0)
{
 unsigned long long v1; // rsi

 return std__uniq_ptr_data_int_default_delete_array_true_true___uniq_ptr_data(a0, v1);
}


// Function: sub_403c58 at 0x403c58
void sub_403c58()
{
 unsigned long long v1; // rax

 __clang_call_terminate(v1); /* do not return */
}


// Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEm at 0x403c60
unsigned int* std_unique_ptr_int_array_default_delete_operator_index(void* this, int idx)
{
 return (unsigned int*)((char*)std_unique_ptr_int_array_default_delete_get(this) + idx * 4);
}


// Function: sub_403c97 at 0x403c97
void sub_403c97(unsigned long a0)
{
 return;
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev at 0x403ca0
int std_unique_ptr_int_array_default_delete_destructor(void* this)
{
 unsigned long long v2; // rax
 unsigned long long *ptr; // [bp-0x18]

 ptr = std__uniq_ptr_impl_int_default_delete_array_M_ptr(this);
 if (*(ptr))
 {
 v2 = std_unique_ptr_int_array_default_delete_get_deleter(this);
 std_default_delete_int_array_operator_call(v2, *(ptr));
 }
 *(ptr) = 0;
 return;
}


// Function: sub_403cfe at 0x403cfe
void sub_403cfe()
{
 unsigned long long v1; // rax

 __clang_call_terminate(v1); /* do not return */
}


// Function: sub_403d06 at 0x403d06
void sub_403d06(unsigned long a0)
{
 return;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev at 0x403d10
int std_unique_ptr_int_default_delete_destructor(void* this)
{
 unsigned long long *v3; // rax
 unsigned long long v0; // [bp-0x28]
 unsigned long long *ptr; // [bp-0x18]

 ptr = std__uniq_ptr_impl_int_default_delete_M_ptr(this);
 if (*(ptr))
 {
 v0 = std_unique_ptr_int_default_delete_get_deleter(this);
 v3 = std_move_int_ptr(ptr);
 std_default_delete_int_operator_call(v0, *(v3));
 }
 *(ptr) = 0;
 return;
}


// Function: sub_403d78 at 0x403d78
void sub_403d78()
{
 unsigned long long v1; // rax

 __clang_call_terminate(v1); /* do not return */
}


// Function: _ZN12RTTIDerivedAC2Ev at 0x403d80
long long RTTIDerivedA_RTTIDerivedA_func()
{
 unsigned long long ptr; // rdi

 RTTIBase_RTTIBase_func((void*)ptr);
 *((char **)ptr) = &g_408d50;
 return ptr;
}


// Function: sub_403db1 at 0x403db1
void sub_403db1(unsigned long a0)
{
 RTTIDerivedB::RTTIDerivedB();
 return;
}


// Function: _ZN12RTTIDerivedBC2Ev at 0x403dc0
long long RTTIDerivedB_RTTIDerivedB_func()
{
 unsigned long long ptr; // rdi

 RTTIBase_RTTIBase_func((void*)ptr);
 *((char **)ptr) = &g_408da0;
 return ptr;
}


// Function: sub_403df1 at 0x403df1
void sub_403df1(unsigned long a0, unsigned long a1)
{
 std_type_info_operator_eq(a0, a1);
 return;
}


// Function: _ZNKSt9type_infoeqERKS_ at 0x403e00
int std_type_info_operator_eq(void* this, void* arg_0)
{
 char v0; // [bp-0x29]
 char v1; // [bp-0x19]

 v1 = 1;
 if ((long long)((void**)this)[8] == *((long long *)((char*)arg_0 + 8)))
 return v1;
 v0 = 0;
 if (*((char *)(long long)((void**)this)[8]) != 42)
 v0 = !strcmp((char*)((void**)this)[8], (char*)((void**)arg_0)[8]);
 v1 = v0;
 return v1;
}


// Function: sub_403e7a at 0x403e7a
void sub_403e7a(unsigned long a0)
{
 RTTIDerivedA_derivedA_data();
 return;
}


// Function: _ZNK12RTTIDerivedA13derivedA_dataEv at 0x403e80
void RTTIDerivedA::derivedA_data(void* this)
{
 return;
}


// Function: sub_403e8f at 0x403e8f
void sub_403e8f(unsigned long a0)
{
 RTTIDerivedB_derivedB_data();
 return;
}


// Function: _ZNK12RTTIDerivedB13derivedB_dataEv at 0x403e90
void RTTIDerivedB::derivedB_data(void* this)
{
 return;
}


// Function: sub_403e9f at 0x403e9f
void sub_403e9f(unsigned long a0)
{
 std_type_info_name_func(a0);
 return;
}


// Function: _ZNKSt9type_info4nameEv at 0x403ea0
char* std_type_info_name_func(void* ptr)
{
 char *v0; // [bp-0x20], Other Possible Types: unsigned long

 if (*((char *)(long long)((void**)ptr)[8]) != 42)
 {
 v0 = (char*)((void**)ptr)[8];
 return v0;
 }
 v0 = (char*)((void**)ptr)[8] + 1;
 return v0;
}


// Function: sub_403ee7 at 0x403ee7
void sub_403ee7(unsigned long a0)
{
 Base::getName();
 return;
}


// Function: _ZNK4Base7getNameEv at 0x403ef0
void Base_getName(void* this)
{
 return;
}


// Function: sub_403f01 at 0x403f01
void sub_403f01(unsigned long a0)
{
 return;
}


// Function: _ZN4BaseD0Ev at 0x403f10
int Base::~Base(void* this)
{
 operatordelete(this);
 return;
}


// Function: sub_403f38 at 0x403f38
void sub_403f38(unsigned long a0)
{
 Derived_getName();
 return;
}


// Function: _ZNK7Derived7getNameEv at 0x403f40
void Derived_getName(void* this)
{
 return;
}


// Function: sub_403f51 at 0x403f51
void sub_403f51(unsigned long a0)
{
 return;
}


// Function: _ZN7DerivedD0Ev at 0x403f60
int Derived::~Derived(void* this)
{
 operatordelete(this);
 return;
}


// Function: sub_403f88 at 0x403f88
void sub_403f88(unsigned long a0)
{
 BaseA_BaseA();
 return;
}


// Function: _ZN5BaseAC2Ev at 0x403f90
int BaseA_BaseA_func(void* ptr)
{
 *((char **)ptr) = &g_4089b0;
 return 0;
}


// Function: sub_403fac at 0x403fac
void sub_403fac(unsigned long a0)
{
 BaseB_BaseB();
 return;
}


// Function: _ZN5BaseBC2Ev at 0x403fb0
int BaseB_BaseB_func(void* ptr)
{
 *((char **)ptr) = &g_4089d8;
 return 0;
}


// Function: sub_403fcc at 0x403fcc
void sub_403fcc(unsigned long a0)
{
 MultiDerived_funcA();
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x403fd0
void MultiDerived_funcA(void* this)
{
 return;
}


// Function: sub_403fdf at 0x403fdf
void sub_403fdf(unsigned long a0)
{
 return;
}


// Function: _ZN12MultiDerivedD0Ev at 0x403fe0
int MultiDerived::~MultiDerived(void* this)
{
 operatordelete(this);
 return;
}


// Function: sub_404008 at 0x404008
void sub_404008(unsigned long a0)
{
 MultiDerived_funcB();
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x404010
void MultiDerived_funcB(void* this)
{
 return;
}


// Function: sub_40401f at 0x40401f
void sub_40401f(unsigned long a0)
{
 non-virtual thunk to MultiDerived::funcB()();
 return;
}


// Function: _ZThn16_N12MultiDerived5funcBEv at 0x404020
void non_virtual_thunk_to_MultiDerived_funcB(void* a0)
{
 MultiDerived_funcB((char*)a0 - 16);
 return;
}


// Function: sub_404036 at 0x404036
void sub_404036(unsigned long a0)
{
 return;
}


// Function: _ZThn16_N12MultiDerivedD1Ev at 0x404040
void non-virtual thunk to MultiDerived::~MultiDerived()(unsigned long long a0)
{
 unsigned long long v0; // [bp-0x10]

 v0 = a0;
 return;
}


// Function: sub_404056 at 0x404056
void sub_404056(unsigned long a0)
{
 return;
}


// Function: _ZThn16_N12MultiDerivedD0Ev at 0x404060
void non-virtual thunk to MultiDerived::~MultiDerived()(unsigned long long a0)
{
 unsigned long long v0; // [bp-0x10]

 v0 = a0;
 return;
}


// Function: sub_404076 at 0x404076
void sub_404076(unsigned long a0)
{
 BaseA_funcA();
 return;
}


// Function: _ZN5BaseA5funcAEv at 0x404080
void BaseA_funcA(void* this);
void BaseA_funcA(void* this)
{
 return;
}


// Function: sub_40408f at 0x40408f
void sub_40408f(unsigned long a0)
{
 return;
}


// Function: _ZN5BaseAD2Ev at 0x404090
int BaseA::~BaseA(void* this)
{
 return;
}


// Function: sub_40409a at 0x40409a
void sub_40409a(unsigned long a0)
{
 return;
}


// Function: _ZN5BaseAD0Ev at 0x4040a0
int BaseA::~BaseA(void* this)
{
 operatordelete(this);
 return;
}


// Function: sub_4040c8 at 0x4040c8
void sub_4040c8(unsigned long a0)
{
 BaseB_funcB();
 return;
}


// Function: _ZN5BaseB5funcBEv at 0x4040d0
void BaseB_funcB(void* this);
void BaseB_funcB(void* this)
{
 return;
}


// Function: sub_4040df at 0x4040df
void sub_4040df(unsigned long a0)
{
 return;
}


// Function: _ZN5BaseBD2Ev at 0x4040e0
int BaseB::~BaseB(void* this)
{
 return;
}


// Function: sub_4040ea at 0x4040ea
void sub_4040ea(unsigned long a0)
{
 return;
}


// Function: _ZN5BaseBD0Ev at 0x4040f0
int BaseB::~BaseB(void* this)
{
 operatordelete(this);
 return;
}


// Function: sub_404118 at 0x404118
void sub_404118(unsigned long a0)
{
 VirtualBase_VirtualBase();
 return;
}


// Function: _ZN11VirtualBaseC2Ev at 0x404120
int VirtualBase_VirtualBase_func(void* ptr)
{
 *((char **)ptr) = &g_408c38;
 return 0;
}


// Function: sub_40413c at 0x40413c
void sub_40413c(unsigned long a0, unsigned long a1)
{
 MiddleA_MiddleA();
 return;
}


// Function: _ZN7MiddleAC2Ev at 0x404140
int MiddleA_MiddleA_func(void* ptr)
{
 unsigned long long idx[2]; // rsi

 *((unsigned long long *)ptr) = idx[0];
 *((unsigned long long *)((char *)ptr + *((long long *)(*((long long *)ptr) - 24)))) = idx[1];
 return 0;
}


// Function: sub_40416b at 0x40416b
void sub_40416b(unsigned long a0, unsigned long a1)
{
 MiddleB_MiddleB();
 return;
}


// Function: _ZN7MiddleBC2Ev at 0x404170
int MiddleB_MiddleB_func(void* ptr)
{
 unsigned long long idx[2]; // rsi

 *((unsigned long long *)ptr) = idx[0];
 *((unsigned long long *)((char *)ptr + *((long long *)(*((long long *)ptr) - 24)))) = idx[1];
 return 0;
}


// Function: sub_40419b at 0x40419b
void sub_40419b(unsigned long a0)
{
 MiddleA_func();
 return;
}


// Function: _ZN7MiddleA4funcEv at 0x4041a0
void MiddleA_func(void* this);
void MiddleA_func(void* this)
{
 return;
}


// Function: sub_4041be at 0x4041be
void sub_4041be(unsigned long a0)
{
 return;
}


// Function: _ZN7MiddleAD1Ev at 0x4041c0
int MiddleA::~MiddleA(void* this)
{
 void* v0; // [bp-0x18]

 v0 = this;
 return;
}


// Function: sub_4041f3 at 0x4041f3
void sub_4041f3(unsigned long a0)
{
 return;
}


// Function: _ZN7MiddleAD0Ev at 0x404200
int MiddleA::~MiddleA(void* this)
{
 operatordelete(this);
 return;
}


// Function: sub_404228 at 0x404228
void sub_404228(unsigned long a0)
{
 thunk to MiddleA::func()();
 return;
}


// Function: _ZTv0_n24_N7MiddleA4funcEv at 0x404230
long long thunk_to_MiddleA_func(void* *a0)
{
 return (unsigned long long)MiddleA_func((char *)a0 + (*(a0))[24]);
}


// Function: sub_40424c at 0x40424c
void sub_40424c(unsigned long a0)
{
 return;
}


// Function: _ZTv0_n32_N7MiddleAD1Ev at 0x404250
long long thunk_to_MiddleA_destructor(unsigned long long a0)
{
 unsigned long v2; // rax
 unsigned long long v0; // [bp-0x10]

 v0 = a0;
 return v2;
}


// Function: sub_40426c at 0x40426c
void sub_40426c(unsigned long a0)
{
 return;
}


// Function: _ZTv0_n32_N7MiddleAD0Ev at 0x404270
long long thunk_to_MiddleA_destructor0(unsigned long long a0)
{
 unsigned long v2; // rax
 unsigned long long v0; // [bp-0x10]

 v0 = a0;
 return v2;
}


// Function: sub_40428c at 0x40428c
void sub_40428c(unsigned long a0)
{
 MiddleB_func();
 return;
}


// Function: _ZN7MiddleB4funcEv at 0x404290
void MiddleB_func(void* this);
void MiddleB_func(void* this)
{
 return;
}


// Function: sub_4042ae at 0x4042ae
void sub_4042ae(unsigned long a0)
{
 return;
}


// Function: _ZN7MiddleBD1Ev at 0x4042b0
int MiddleB::~MiddleB(void* this)
{
 void* v0; // [bp-0x18]

 v0 = this;
 return;
}


// Function: sub_4042e3 at 0x4042e3
void sub_4042e3(unsigned long a0)
{
 return;
}


// Function: _ZN7MiddleBD0Ev at 0x4042f0
int MiddleB::~MiddleB(void* this)
{
 operatordelete(this);
 return;
}


// Function: sub_404318 at 0x404318
void sub_404318(unsigned long a0)
{
 thunk to MiddleB::func()();
 return;
}


// Function: _ZTv0_n24_N7MiddleB4funcEv at 0x404320
long long thunk_to_MiddleB_func(void* *a0)
{
 return (unsigned long long)MiddleB_func((char *)a0 + (*(a0))[24]);
}


// Function: sub_40433c at 0x40433c
void sub_40433c(unsigned long a0)
{
 return;
}


// Function: _ZTv0_n32_N7MiddleBD1Ev at 0x404340
long long thunk_to_MiddleB_destructor(unsigned long long a0)
{
 unsigned long v2; // rax
 unsigned long long v0; // [bp-0x10]

 v0 = a0;
 return v2;
}


// Function: sub_40435c at 0x40435c
void sub_40435c(unsigned long a0)
{
 return;
}


// Function: _ZTv0_n32_N7MiddleBD0Ev at 0x404360
long long thunk_to_MiddleB_destructor0(unsigned long long a0)
{
 unsigned long v2; // rax
 unsigned long long v0; // [bp-0x10]

 v0 = a0;
 return v2;
}


// Function: sub_40437c at 0x40437c
void sub_40437c(unsigned long a0)
{
 DiamondDerived_func();
 return;
}


// Function: _ZN14DiamondDerived4funcEv at 0x404380
void DiamondDerived_func(void* this);
void DiamondDerived_func(void* this)
{
 return;
}


// Function: sub_40439e at 0x40439e
void sub_40439e(unsigned long a0)
{
 return;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x4043a0
int DiamondDerived::~DiamondDerived(void* this)
{
 operatordelete(this);
 return;
}


// Function: sub_4043c8 at 0x4043c8
void sub_4043c8(unsigned long a0)
{
 non-virtual thunk to DiamondDerived::func()();
 return;
}


// Function: _ZThn16_N14DiamondDerived4funcEv at 0x4043d0
void non_virtual_thunk_to_DiamondDerived_func(void* a0)
{
 DiamondDerived_func((char*)a0 - 16);
 return;
}


// Function: sub_4043e6 at 0x4043e6
void sub_4043e6(unsigned long a0)
{
 return;
}


// Function: _ZThn16_N14DiamondDerivedD1Ev at 0x4043f0
void non-virtual thunk to DiamondDerived::~DiamondDerived()(unsigned long long a0)
{
 unsigned long long v0; // [bp-0x10]

 v0 = a0;
 return;
}


// Function: sub_404406 at 0x404406
void sub_404406(unsigned long a0)
{
 return;
}


// Function: _ZThn16_N14DiamondDerivedD0Ev at 0x404410
void non-virtual thunk to DiamondDerived::~DiamondDerived()(unsigned long long a0)
{
 unsigned long long v0; // [bp-0x10]

 v0 = a0;
 return;
}


// Function: sub_404426 at 0x404426
void sub_404426(unsigned long a0)
{
 thunk to DiamondDerived::func()();
 return;
}


// Function: _ZTv0_n24_N14DiamondDerived4funcEv at 0x404430
long long thunk_to_DiamondDerived_func(void* *a0)
{
 return (unsigned long long)DiamondDerived_func((char *)a0 + (*(a0))[24]);
}


// Function: sub_40444c at 0x40444c
void sub_40444c(unsigned long a0)
{
 return;
}


// Function: _ZTv0_n32_N14DiamondDerivedD1Ev at 0x404450
long long thunk_to_DiamondDerived_destructor(unsigned long long a0)
{
 unsigned long v2; // rax
 unsigned long long v0; // [bp-0x10]

 v0 = a0;
 return v2;
}


// Function: sub_40446c at 0x40446c
void sub_40446c(unsigned long a0)
{
 return;
}


// Function: _ZTv0_n32_N14DiamondDerivedD0Ev at 0x404470
long long thunk_to_DiamondDerived_destructor0(unsigned long long a0)
{
 unsigned long v2; // rax
 unsigned long long v0; // [bp-0x10]

 v0 = a0;
 return v2;
}


// Function: sub_40448c at 0x40448c
void sub_40448c(unsigned long a0)
{
 VirtualBase_func();
 return;
}


// Function: _ZN11VirtualBase4funcEv at 0x404490
void VirtualBase_func(void* this);
void VirtualBase_func(void* this)
{
 return;
}


// Function: sub_40449f at 0x40449f
void sub_40449f(unsigned long a0)
{
 return;
}


// Function: _ZN11VirtualBaseD2Ev at 0x4044a0
int VirtualBase::~VirtualBase(void* this)
{
 return;
}


// Function: sub_4044aa at 0x4044aa
void sub_4044aa(unsigned long a0)
{
 return;
}


// Function: _ZN11VirtualBaseD0Ev at 0x4044b0
int VirtualBase::~VirtualBase(void* this)
{
 operatordelete(this);
 return;
}


// Function: sub_4044d8 at 0x4044d8
void sub_4044d8(unsigned long a0, unsigned long a1)
{
 return;
}


// Function: _ZN7MiddleAD2Ev at 0x4044e0
int MiddleA::~MiddleA(void* this)
{
 return;
}


// Function: sub_4044ee at 0x4044ee
void sub_4044ee(unsigned long a0, unsigned long a1)
{
 return;
}


// Function: _ZN7MiddleBD2Ev at 0x4044f0
int MiddleB::~MiddleB(void* this)
{
 return;
}


// Function: sub_4044fe at 0x4044fe
void sub_4044fe(unsigned long a0, unsigned long a1)
{
 return;
}


// Function: _ZN14DiamondDerivedD2Ev at 0x404500
int DiamondDerived::~DiamondDerived(void* this)
{
 unsigned long long v3; // rsi
 void* v0; // [bp-0x28]
 unsigned long long v1; // [bp-0x20]

 v0 = this;
 v1 = v3;
 return;
}


// Function: sub_404544 at 0x404544
void sub_404544(unsigned long a0, unsigned long a1)
{
 std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_data();
 return;
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ at 0x404550
// C++ template function - stub
int std_uniq_ptr_data_int_default_delete_true_true___uniq_ptr_data(void* this, void* arg_0)
{
 (void)this;
 (void)arg_0;
 return 0;
}


// Function: sub_404573 at 0x404573
void sub_404573(unsigned long a0, unsigned long a1)
{
 std::__uniq_ptr_impl<int, std::default_delete<int>>::__uniq_ptr_impl();
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_ at 0x404580
// C++ template function - stub
long long std__uniq_ptr_impl_int_default_delete__uniq_ptr_impl(unsigned long long v4, unsigned long long v2)
{
 (void)v4;
 (void)v2;
 return 0;
}


// Function: sub_4045d0 at 0x4045d0
void sub_4045d0()
{
 unsigned long long v1; // rax

 __clang_call_terminate(v1); /* do not return */
}


// Function: sub_4045d8 at 0x4045d8
void sub_4045d8(unsigned long a0)
{
 std_move_tuple_int_default_delete(a0, a0);
 return;
}


// Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ at 0x4045e0
void* std_move_tuple_int_default_delete(void* this, void* arg_0)
{
 (void)arg_0;
 return this;
}


// Function: sub_4045ee at 0x4045ee
void sub_4045ee(unsigned long a0, unsigned long a1)
{
 std_tuple_int_default_delete_tuple(a0, a1);
 return;
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_ at 0x4045f0
// C++ template function - stub
int std_tuple_int_default_delete_tuple(void* this, void* arg_0)
{
 (void)this;
 (void)arg_0;
 return 0;
}


// Function: sub_404613 at 0x404613
void sub_404613(unsigned long a0)
{
 std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_ptr();
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv at 0x404620
// C++ template function - stub
long long std__uniq_ptr_impl_int_default_delete_M_ptr(unsigned long long v1)
{
 (void)v1;
 return 0;
}


// Function: sub_40463b at 0x40463b
void sub_40463b()
{
 __clang_call_terminate(); /* do not return */
}


// Function: __clang_call_terminate at 0x404640
void __clang_call_terminate(void* a0)
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 __cxa_begin_catch();
 std_terminate(a0); /* do not return */
}


// Function: sub_40464b at 0x40464b
void sub_40464b(unsigned long a0, unsigned long a1)
{
 std::_Tuple_impl<0ul, int*, std::default_delete<int>>::_Tuple_impl();
 return;
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2EOS3_ at 0x404650
// C++ template function - stub
long long std_Tuple_impl_0ul_int_default_delete_tuple(unsigned long long *ptr, unsigned long long *v2)
{
 (void)ptr;
 (void)v2;
 return 0;
}


// Function: sub_404685 at 0x404685
void sub_404685(unsigned long a0, unsigned long a1)
{
 std::_Tuple_impl<1ul, std::default_delete<int>>::_Tuple_impl();
 return;
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2EOS2_ at 0x404690
// C++ template function - stub
long long std_Tuple_impl_1ul_default_delete_tuple(unsigned long long *a0)
{
 (void)a0;
 return 0;
}


// Function: sub_40469e at 0x40469e
void sub_40469e(unsigned long a0)
{
 std_get_0ul_int_default_delete(a0, a0);
 return;
}


// Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ at 0x4046a0
// C++ template function - stub
void* std_get_0ul_int_default_delete(void* this, void* arg_0)
{
 (void)this;
 (void)arg_0;
 return NULL;
}


// Function: sub_4046bb at 0x4046bb
void sub_4046bb(unsigned long a0)
{
 std::__get_helper<0ul, int*, std::default_delete<int>>();
 return;
}


// Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x4046c0
// C++ template function - stub
long long std__get_helper_0ul_int_default_delete(unsigned long long v1)
{
 (void)v1;
 return 0;
}


// Function: sub_4046db at 0x4046db
void sub_4046db(unsigned long a0)
{
 std::_Tuple_impl<0ul, int*, std::default_delete<int>>::_M_head();
 return;
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERS3_ at 0x4046e0
// C++ template function - stub
void std_Tuple_impl_0ul_int_default_delete_M_head(void* this, void* arg_0)
{
 (void)this;
 (void)arg_0;
 return;
}


// Function: sub_4046fb at 0x4046fb
void sub_4046fb(unsigned long a0)
{
 std::_Head_base<0ul, int*, false>::_M_head();
 return;
}


// Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_ at 0x404700
// C++ template function - stub
long long std_Head_base_0ul_int_false_M_head()
{
 return 0;
}


// Function: sub_40470e at 0x40470e
void sub_40470e(unsigned long a0)
{
 RTTIBase_RTTIBase();
 return;
}


// Function: _ZN8RTTIBaseC2Ev at 0x404710
int RTTIBase_RTTIBase_func(void* ptr)
{
 *((char **)ptr) = &g_408d78;
 return 0;
}


// Function: sub_40472c at 0x40472c
void sub_40472c(unsigned long a0)
{
 return;
}


// Function: _ZN12RTTIDerivedAD2Ev at 0x404730
int RTTIDerivedA::~RTTIDerivedA(void* this)
{
 void* v0; // [bp-0x10]

 v0 = this;
 return;
}


// Function: sub_40474b at 0x40474b
void sub_40474b(unsigned long a0)
{
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x404750
int RTTIDerivedA::~RTTIDerivedA(void* this)
{
 operatordelete(this);
 return;
}


// Function: sub_404778 at 0x404778
void sub_404778(unsigned long a0)
{
 RTTIDerivedA_getType();
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x404780
void RTTIDerivedA::getType(void* this)
{
 return;
}


// Function: sub_40478f at 0x40478f
void sub_40478f(unsigned long a0)
{
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x404790
int RTTIBase::~RTTIBase(void* this)
{
 return;
}


// Function: sub_40479a at 0x40479a
void sub_40479a(unsigned long a0)
{
 return;
}


// Function: _ZN8RTTIBaseD0Ev at 0x4047a0
int RTTIBase::~RTTIBase(void* this)
{
 operatordelete(this);
 return;
}


// Function: sub_4047c8 at 0x4047c8
void sub_4047c8(unsigned long a0)
{
 RTTIBase_getType();
 return;
}


// Function: _ZNK8RTTIBase7getTypeEv at 0x4047d0
void RTTIBase::getType(void* this)
{
 return;
}


// Function: sub_4047dc at 0x4047dc
void sub_4047dc(unsigned long a0)
{
 return;
}


// Function: _ZN12RTTIDerivedBD2Ev at 0x4047e0
int RTTIDerivedB::~RTTIDerivedB(void* this)
{
 void* v0; // [bp-0x10]

 v0 = this;
 return;
}


// Function: sub_4047fb at 0x4047fb
void sub_4047fb(unsigned long a0)
{
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x404800
int RTTIDerivedB::~RTTIDerivedB(void* this)
{
 operatordelete(this);
 return;
}


// Function: sub_404828 at 0x404828
void sub_404828(unsigned long a0)
{
 RTTIDerivedB_getType();
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x404830
void RTTIDerivedB::getType(void* this)
{
 return;
}


// Function: sub_40483f at 0x40483f
void sub_40483f(unsigned long a0, unsigned long a1)
{
 std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_data();
 return;
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi at 0x404840
long long std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_data()
{
 unsigned long long v1; // rdi
 unsigned long long v2; // rsi

 return std::__uniq_ptr_impl<int, std::default_delete<int>>::__uniq_ptr_impl(v1, v2);
}


// Function: sub_404863 at 0x404863
void sub_404863(unsigned long a0, unsigned long a1)
{
 std::__uniq_ptr_impl<int, std::default_delete<int>>::__uniq_ptr_impl();
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi at 0x404870
int std__uniq_ptr_impl_int_default_delete__uniq_ptr_impl_func(void* this, int *arg_0)
{
 void* v0; // [bp-0x28]

 v0 = this;
 std_tuple_int_default_delete_int_array_tuple_true_true();
 *((int **)std__uniq_ptr_impl_int_default_delete_M_ptr(this)) = arg_0;
 return;
}


// Function: sub_4048ab at 0x4048ab
void sub_4048ab(unsigned long a0)
{
 std::tuple<int*, std::default_delete<int>>::tuple<true, true>();
 return;
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv at 0x4048b0
long long std_tuple_int_default_delete_int_array_tuple_true_true()
{
 unsigned long long v1; // rdi

 return std_Tuple_impl_0ul_int_default_delete_int_array_Tuple_impl(v1);
}


// Function: sub_4048d0 at 0x4048d0
void sub_4048d0()
{
 void* v1; // rax

 __clang_call_terminate(v1); /* do not return */
}


// Function: sub_4048d8 at 0x4048d8
void sub_4048d8(unsigned long a0)
{
 std::_Tuple_impl<0ul, int*, std::default_delete<int>>::_Tuple_impl();
 return;
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2Ev at 0x4048e0
int std_Tuple_impl_0ul_int_default_delete_tuple_func(void* this)
{
 std_Tuple_impl_1ul_default_delete_int_Tuple_impl();
 std_Head_base_0ul_int_false_Head_base();
 return;
}


// Function: sub_404908 at 0x404908
void sub_404908(unsigned long a0)
{
 std::_Tuple_impl<1ul, std::default_delete<int>>::_Tuple_impl();
 return;
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2Ev at 0x404910
long long std_Tuple_impl_1ul_default_delete_int_Tuple_impl()
{
 unsigned long long v1; // rdi

 return std_Head_base_1ul_default_delete_int_true_Head_base(v1);
}


// Function: sub_40492b at 0x40492b
void sub_40492b(unsigned long a0)
{
 std::_Head_base<0ul, int*, false>::_Head_base();
 return;
}


// Function: _ZNSt10_Head_baseILm0EPiLb0EEC2Ev at 0x404930
long long std_Head_base_0ul_int_false_Head_base_func()
{
 unsigned long long *ptr; // rdi

 if (ptr) *(ptr) = 0;
 return (long long)ptr;
}


// Function: sub_404945 at 0x404945
void sub_404945(unsigned long a0)
{
 std::_Head_base<1ul, std::default_delete<int>, true>::_Head_base();
 return;
}


// Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EEC2Ev at 0x404950
int std_Head_base_1ul_default_delete_int_true_Head_base_func(void* this)
{
 (void)this;
 return 0;
}


// Function: sub_40495a at 0x40495a
void sub_40495a(unsigned long a0)
{
 std_unique_ptr_int_default_delete_get_deleter(a0);
 return;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv at 0x404960
long long std_unique_ptr_int_default_delete_get_deleter()
{
 unsigned long long v2; // rdi
 unsigned long long v0; // [bp-0x18]

 v0 = std__uniq_ptr_impl_int_default_delete_M_deleter(v2);
 return v0;
}


// Function: sub_404988 at 0x404988
void sub_404988()
{
 void* v1; // rax

 __clang_call_terminate(v1); /* do not return */
}


// Function: _ZNKSt14default_deleteIiEclEPi at 0x404990
void std_default_delete_int_operator_call(void* this, int *arg_0)
{
 void* v0; // [bp-0x10]

 v0 = this;
 if (arg_0)
 operatordelete(arg_0);
 return;
}


// Function: sub_4049c1 at 0x4049c1
void sub_4049c1(unsigned long a0)
{
 std_move_int_ptr(a0);
 return;
}


// Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ at 0x4049d0
long long std_move_int_ptr()
{
 unsigned long v1; // rdi

 return v1;
}


// Function: sub_4049de at 0x4049de
void sub_4049de(unsigned long a0)
{
 std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_deleter();
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv at 0x4049e0
void std__uniq_ptr_impl_int_default_delete_M_deleter(void* this)
{
 std_get_1ul_int_default_delete(this);
 return;
}


// Function: sub_4049fb at 0x4049fb
void sub_4049fb(unsigned long a0)
{
 std_get_1ul_int_default_delete(a0, a0);
 return;
}


// Function: _ZSt3getILm1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ at 0x404a00
long long std_get_1ul_int_default_delete()
{
 unsigned long long v1; // rdi

 return std__get_helper_1ul_default_delete_int(v1);
}


// Function: sub_404a1b at 0x404a1b
void sub_404a1b(unsigned long a0)
{
 std::__get_helper<1ul, std::default_delete<int>>();
 return;
}


// Function: _ZSt12__get_helperILm1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x404a20
void* std__get_helper_1ul_default_delete_int(void* this)
{
 return std_Tuple_impl_1ul_default_delete_int_M_head(this);
}


// Function: sub_404a3b at 0x404a3b
void sub_404a3b(unsigned long a0)
{
 std::_Tuple_impl<1ul, std::default_delete<int>>::_M_head();
 return;
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEE7_M_headERS2_ at 0x404a40
long long std_Tuple_impl_1ul_default_delete_int_M_head()
{
 unsigned long long v1; // rdi

 return std_Head_base_1ul_default_delete_int_true_M_head(v1);
}


// Function: sub_404a5b at 0x404a5b
void sub_404a5b(unsigned long a0)
{
 std::_Head_base<1ul, std::default_delete<int>, true>::_M_head();
 return;
}


// Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EE7_M_headERS2_ at 0x404a60
void std_Head_base_1ul_default_delete_int_true_M_head(void* this)
{
 (void)this;
 return;
}


// Function: sub_404a6e at 0x404a6e
void sub_404a6e(unsigned long a0)
{
 std_unique_ptr_int_default_delete_get(a0);
 return;
}


// Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv at 0x404a70
long long std_unique_ptr_int_default_delete_get()
{
 unsigned long long v2; // rdi
 unsigned long long v0; // [bp-0x18]

 v0 = std__uniq_ptr_impl_int_default_delete_M_ptr(v2);
 return v0;
}


// Function: sub_404a98 at 0x404a98
void sub_404a98()
{
 void* v1; // rax

 __clang_call_terminate(v1); /* do not return */
}


// Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv at 0x404aa0
void std__uniq_ptr_impl_int_default_delete_M_ptr(void* this)
{
 std_get_0ul_int_default_delete(this);
 return;
}


// Function: sub_404abe at 0x404abe
void sub_404abe(unsigned long a0)
{
 std_get_0ul_int_default_delete(a0, a0);
 return;
}


// Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ at 0x404ac0
long long std_get_0ul_int_default_delete()
{
 unsigned long long v1; // rdi

 return std__get_helper_0ul_int_default_delete(v1);
}


// Function: sub_404adb at 0x404adb
void sub_404adb(unsigned long a0)
{
 std::__get_helper<0ul, int*, std::default_delete<int>>();
 return;
}


// Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x404ae0
void* std__get_helper_0ul_int_default_delete(void* this)
{
 return std_Tuple_impl_0ul_int_default_delete_M_head(this);
}


// Function: sub_404afb at 0x404afb
void sub_404afb(unsigned long a0)
{
 std::_Tuple_impl<0ul, int*, std::default_delete<int>>::_M_head();
 return;
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERKS3_ at 0x404b00
long long std_Tuple_impl_0ul_int_default_delete_M_head()
{
 unsigned long long v1; // rdi

 return std_Head_base_0ul_int_false_M_head(v1);
}


// Function: sub_404b1b at 0x404b1b
void sub_404b1b(unsigned long a0)
{
 std::_Head_base<0ul, int*, false>::_M_head();
 return;
}


// Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_ at 0x404b20
void std_Head_base_0ul_int_false_M_head_const(void* this)
{
 (void)this;
 return;
}


// Function: sub_404b2e at 0x404b2e
void sub_404b2e(unsigned long a0, unsigned long a1)
{
 std::__uniq_ptr_data<int, std::default_delete<int[]>, true, true>::__uniq_ptr_data();
 return;
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi at 0x404b30
long long std_uniq_ptr_data_int_default_delete_array_true_true___uniq_ptr_data()
{
 unsigned long long v1; // rdi
 unsigned long long v2; // rsi

 return std__uniq_ptr_impl_int_default_delete_array__uniq_ptr_impl(v1, v2);
}


// Function: sub_404b53 at 0x404b53
void sub_404b53(unsigned long a0, unsigned long a1)
{
 std::__uniq_ptr_impl<int, std::default_delete<int[]>>::__uniq_ptr_impl();
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi at 0x404b60
int std__uniq_ptr_impl_int_default_delete_array__uniq_ptr_impl_func(void* this, int *arg_0)
{
 std_tuple_int_default_delete_int_array_tuple_true_true();
 *((int **)std__uniq_ptr_impl_int_default_delete_array_M_ptr(this)) = arg_0;
 return;
}


// Function: sub_404b9b at 0x404b9b
void sub_404b9b(unsigned long a0)
{
 std::tuple<int*, std::default_delete<int[]>>::tuple<true, true>();
 return;
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv at 0x404ba0
long long std_tuple_int_default_delete_int_array_tuple_true_true()
{
 unsigned long long v1; // rdi

 return std_Tuple_impl_0ul_int_default_delete_int_array_Tuple_impl(v1);
}


// Function: sub_404bc0 at 0x404bc0
void sub_404bc0()
{
 void* v1; // rax

 __clang_call_terminate(v1); /* do not return */
}


// Function: sub_404bc8 at 0x404bc8
void sub_404bc8(unsigned long a0)
{
 std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_ptr();
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv at 0x404bd0
long long std__uniq_ptr_impl_int_default_delete_array_M_ptr()
{
 unsigned long long v1; // rdi

 return std_get_0ul_int_default_delete_int_array(v1, v1);
}


// Function: sub_404beb at 0x404beb
void sub_404beb(unsigned long a0)
{
 std::_Tuple_impl<0ul, int*, std::default_delete<int[]>>::_Tuple_impl();
 return;
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEEC2Ev at 0x404bf0
int std_Tuple_impl_0ul_int_default_delete_int_array_Tuple_impl_func(void* this)
{
 void* v0; // [bp-0x18]

 v0 = this;
 std_Tuple_impl_1ul_default_delete_int_array_Tuple_impl();
 std_Head_base_0ul_int_false_Head_base_func();
 return;
}


// Function: sub_404c18 at 0x404c18
void sub_404c18(unsigned long a0)
{
 std::_Tuple_impl<1ul, std::default_delete<int[]>>::_Tuple_impl();
 return;
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEEC2Ev at 0x404c20
long long std_Tuple_impl_1ul_default_delete_int_array_Tuple_impl()
{
 unsigned long long v1; // rdi

 return std_Head_base_1ul_default_delete_int_array_true_Head_base(v1);
}


// Function: sub_404c3b at 0x404c3b
void sub_404c3b(unsigned long a0)
{
 std::_Head_base<1ul, std::default_delete<int[]>, true>::_Head_base();
 return;
}


// Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EEC2Ev at 0x404c40
long long std_Head_base_1ul_default_delete_int_array_true_Head_base(unsigned long long v1)
{
 (void)v1;
 return v1;
}


// Function: sub_404c4a at 0x404c4a
void sub_404c4a(unsigned long a0)
{
 std_get_0ul_int_default_delete_int_array(a0, a0);
 return;
}


// Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ at 0x404c50
void* std_get_0ul_int_default_delete_int_array(void* this)
{
 return std__get_helper_0ul_int_default_delete_int_array(this);
}


// Function: sub_404c6b at 0x404c6b
void sub_404c6b(unsigned long a0)
{
 std::__get_helper<0ul, int*, std::default_delete<int[]>>();
 return;
}


// Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE at 0x404c70
void* std__get_helper_0ul_int_default_delete_int_array(unsigned long long v1)
{
 return (void*)std_Tuple_impl_0ul_int_default_delete_int_array_M_head(v1);
}


// Function: sub_404c8b at 0x404c8b
void sub_404c8b(unsigned long a0)
{
 std::_Tuple_impl<0ul, int*, std::default_delete<int[]>>::_M_head();
 return;
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ at 0x404c90
void std_Tuple_impl_0ul_int_default_delete_int_array_M_head_func(void* this)
{
 void* v0; // [bp-0x10]

 v0 = this;
 std_Head_base_0ul_int_false_M_head_func();
 return;
}


// Function: sub_404cab at 0x404cab
void sub_404cab(unsigned long a0)
{
 std_unique_ptr_int_array_default_delete_get_deleter(a0);
 return;
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv at 0x404cb0
long long std_unique_ptr_int_array_default_delete_get_deleter()
{
 unsigned long long v2; // rdi
 unsigned long long v0; // [bp-0x18]

 v0 = std__uniq_ptr_impl_int_default_delete_array_M_deleter(v2);
 return v0;
}


// Function: sub_404cd8 at 0x404cd8
void sub_404cd8()
{
 void* v1; // rax

 __clang_call_terminate(v1); /* do not return */
}


// Failed to decompile function _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_ at 0x404ce0
// Function: sub_404d11 at 0x404d11
void sub_404d11(unsigned long a0)
{
 std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_deleter();
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv at 0x404d20
void std__uniq_ptr_impl_int_default_delete_array_M_deleter(void* this)
{
 std_get_1ul_int_default_delete_array(this, this);
 return;
}


// Function: sub_404d3b at 0x404d3b
void sub_404d3b(unsigned long a0)
{
 std_get_1ul_int_default_delete_array(a0, a0);
 return;
}


// Function: _ZSt3getILm1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ at 0x404d40
long long std_get_1ul_int_default_delete_array()
{
 unsigned long long v1; // rdi

 return std__get_helper_1ul_default_delete_int_array(v1);
}


// Function: sub_404d5b at 0x404d5b
void sub_404d5b(unsigned long a0)
{
 std::__get_helper<1ul, std::default_delete<int[]>>();
 return;
}


// Function: _ZSt12__get_helperILm1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x404d60
void* std__get_helper_1ul_default_delete_int_array(void* this)
{
 return std_Tuple_impl_1ul_default_delete_int_array_M_head(this);
}


// Function: sub_404d7b at 0x404d7b
void sub_404d7b(unsigned long a0)
{
 std::_Tuple_impl<1ul, std::default_delete<int[]>>::_M_head();
 return;
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEE7_M_headERS3_ at 0x404d80
long long std_Tuple_impl_1ul_default_delete_int_array_M_head()
{
 unsigned long long v1; // rdi

 return std_Head_base_1ul_default_delete_int_array_true_M_head(v1);
}


// Function: sub_404d9b at 0x404d9b
void sub_404d9b(unsigned long a0)
{
 std::_Head_base<1ul, std::default_delete<int[]>, true>::_M_head();
 return;
}


// Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EE7_M_headERS3_ at 0x404da0
void std_Head_base_1ul_default_delete_int_array_true_M_head(void* this)
{
 (void)this;
 return;
}


// Function: sub_404dae at 0x404dae
void sub_404dae(unsigned long a0)
{
 std_unique_ptr_int_array_default_delete_get(a0);
 return;
}


// Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv at 0x404db0
void std_unique_ptr_int_array_default_delete_get(void* this)
{
 unsigned long long v0; // [bp-0x18]

 v0 = std__uniq_ptr_impl_int_default_delete_array_M_ptr(this);
 return;
}


// Function: sub_404dd8 at 0x404dd8
void sub_404dd8()
{
 void* v1; // rax

 __clang_call_terminate(v1); /* do not return */
}


// Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv at 0x404de0
long long std__uniq_ptr_impl_int_default_delete_array_M_ptr()
{
 unsigned long long v1; // rdi

 return *((long long *)std_get_0ul_int_default_delete_int_array(v1, v1));
}


// Function: sub_404dfe at 0x404dfe
void sub_404dfe(unsigned long a0)
{
 std_get_0ul_int_default_delete_int_array_const(a0, a0);
 return;
}


// Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ at 0x404e00
void* std_get_0ul_int_default_delete_int_array_const(void* this)
{
 return std__get_helper_0ul_int_default_delete_int_array_const(this);
}


// Function: sub_404e1b at 0x404e1b
void sub_404e1b(unsigned long a0)
{
 std::__get_helper<0ul, int*, std::default_delete<int[]>>();
 return;
}


// Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE at 0x404e20
void* std__get_helper_0ul_int_default_delete_int_array_const(unsigned long long v1)
{
 return (void*)std_Tuple_impl_0ul_int_default_delete_int_array_M_head_const(v1);
}


// Function: sub_404e3b at 0x404e3b
void sub_404e3b(unsigned long a0)
{
 std::_Tuple_impl<0ul, int*, std::default_delete<int[]>>::_M_head();
 return;
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ at 0x404e40
void std_Tuple_impl_0ul_int_default_delete_int_array_M_head_const(void* this)
{
 std_Head_base_0ul_int_false_M_head_const(this);
 return;
}


// Function: sub_404e5b at 0x404e5b
void sub_404e5b(unsigned long a0)
{
 std_forward_int_ptr_ref(a0, a0);
 return;
}


// Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE at 0x404e60
int** std_forward_int_ptr_ref(void* this)
{
 return (int**)this;
}


// Function: sub_404e6e at 0x404e6e
void sub_404e6e(unsigned long a0, unsigned long a1)
{
 std::_Head_base<0ul, int*, false>::_Head_base<int*&>();
 return;
}


// Function: _ZNSt10_Head_baseILm0EPiLb0EEC2IRS0_EEOT_ at 0x404e70
int std_Head_base_0ul_int_false_Head_base_int_ptr_ref(void* ptr, int** arg_0)
{
 if (ptr && arg_0)
 *((long long *)ptr) = *((long long *)std_forward_int_ptr_ref(arg_0));
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


