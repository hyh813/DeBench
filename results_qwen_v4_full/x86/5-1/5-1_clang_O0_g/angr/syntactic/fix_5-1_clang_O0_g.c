// Angr Decompilation of 5-1_clang_O0_g
// Platform: X86

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

// Forward declarations for missing functions
void* operatornew(unsigned long size);
void* operatornew[](unsigned long size);
void operatordelete(void* ptr);
void operatordelete[](void* ptr);
void* __cxa_allocate_exception(unsigned long size);
void __cxa_throw(void* exc, void* type, void* destructor);
void* __cxa_begin_catch(void* exc);
void __cxa_end_catch();
void __cxa_rethrow(void* exc);
void __cxa_bad_typeid();
void* __dynamic_cast(void* src, void* src_type, void* dst_type, void* src_ptr);
void _Unwind_Resume(void* exc);
void register_tm_clones();
void deregister_tm_clones();
void frame_dummy();
int __do_global_ctors_aux();
void __do_global_dtors_aux();
void* __cxa_atexit(void*, void*, void*);
void _GLOBAL__sub_I_5_1_cpp();
void _start();
void __clang_call_terminate(void* a0);
void std_terminate(void* a0);

// C++ class method forward declarations
void SimpleClass_SimpleClass(void* this, int val, const char* name);
void SimpleClass_setValue(void* this, int val);
int SimpleClass_getValue(void* this);
int SimpleClass_compute(void* this, int multiplier);
int SimpleClass_getClassID();

void LifecycleClass_LifecycleClass(void* this, unsigned int size);
unsigned int LifecycleClass_getData(void* this, unsigned int index);
unsigned int LifecycleClass_getInstanceCount();
void LifecycleClass_LifecycleClass_dtor(void* this);

void Base_Base(void* this);
void Base_Base_dtor(void* this);
int Base_virtual_func(void* this, int arg);
const char* Base_getName(void* this);

void Derived_Derived(void* this, int val);
void Derived_Derived_dtor(void* this);
int Derived_virtual_func(void* this, int arg);
const char* Derived_getName(void* this);

void BaseA_BaseA(void* this);
void BaseA_BaseA_dtor(void* this);
void BaseA_funcA(void* this);

void BaseB_BaseB(void* this);
void BaseB_BaseB_dtor(void* this);
void BaseB_funcB(void* this);

void MultiDerived_MultiDerived(void* this);
void MultiDerived_MultiDerived_dtor(void* this);
void MultiDerived_funcA(void* this);
void MultiDerived_funcB(void* this);

void VirtualBase_VirtualBase(void* this);
void VirtualBase_VirtualBase_dtor(void* this);
void VirtualBase_func(void* this);

void MiddleA_MiddleA(void* this);
void MiddleA_MiddleA_dtor(void* this);
void MiddleA_func(void* this);

void MiddleB_MiddleB(void* this);
void MiddleB_MiddleB_dtor(void* this);
void MiddleB_func(void* this);

void DiamondDerived_DiamondDerived(void* this);
void DiamondDerived_DiamondDerived_dtor(void* this);
void DiamondDerived_func(void* this);

void Point_Point(void* this, int x, int y);
void Point_operator_plus(void* result, void* this, void* other);
void Point_operator_eq(void* this, void* other);
void Point_operator_inc(void* this);

int template_max_int(int a, int b);
void template_swap_int(int* a, int* b);

void Container_int_Container(void* this);
void Container_int_push(void* this, int value);
int Container_int_get(void* this, unsigned int index);
unsigned int Container_int_getSize(void* this);

void Container_double_Container(void* this);
void Container_double_push(void* this, double value);
double Container_double_get(void* this, unsigned int index);
unsigned int Container_double_getSize(void* this);

void RTTIBase_RTTIBase(void* this);
void RTTIBase_RTTIBase_dtor(void* this);

void RTTIDerivedA_RTTIDerivedA(void* this);
void RTTIDerivedA_RTTIDerivedA_dtor(void* this);
int RTTIDerivedA_derivedA_data(void* this);

void RTTIDerivedB_RTTIDerivedB(void* this);
void RTTIDerivedB_RTTIDerivedB_dtor(void* this);
int RTTIDerivedB_derivedB_data(void* this);

#ifdef __cplusplus
}
#endif

// namespace std {
//     void terminate();
//     class type_info {
//     public:
//         virtual ~type_info();
//         bool operator==(const type_info& other) const;
//         const char* name() const;
//     };
// }

// Smart pointer stubs
void* std_unique_ptr_int_constructor(void* this, void* ptr);
void* std_unique_ptr_int_get(void* this);
void std_unique_ptr_int_destructor(void* this);

void* std_unique_ptr_int_array_constructor(void* this, void* ptr);
void* std_unique_ptr_int_array_get(void* this, unsigned int index);
void std_unique_ptr_int_array_destructor(void* this);

void* std_move_unique_ptr(void* ptr);

// Smart pointer dollar_2 stubs
int std_unique_ptr_int_dollar_2_constructor(char *a0, unsigned int *a1);
int std_unique_ptr_int_dollar_2_deref(void);
unsigned int * std_unique_ptr_int_dollar_2_destructor(unsigned int a0);
unsigned int std_unique_ptr_int_dollar_2_get(unsigned int a0);
unsigned int std_unique_ptr_int_dollar_2_get_deleter(unsigned int a0);
void test_cpp_smart_ptr_dollar_2_operator(unsigned int a0, unsigned int *ptr);

// Unique ptr impl stubs
int std_uniq_ptr_impl_int_dollar_2_M_ptr(unsigned int a0);
int std_uniq_ptr_impl_int_dollar_2_M_deleter(unsigned int a0);
int std_uniq_ptr_impl_int_dollar_2_M_ptr_const(unsigned int a0);
int std_uniq_ptr_impl_int_dollar_2_constructor(char *a0, unsigned int *a1, int a2);
int std_uniq_ptr_data_int_dollar_2_constructor(char *a0, unsigned int *a1, int a2, int a3, int a4, int a5);

// Move and forward stubs
int test_cpp_smart_ptr_dollar_2_forward(unsigned int a0);
void* std_move_tuple_int_ptr_default_delete_int(void* this_ptr, void* arg_0);
// Additional stub function forward declarations - removed duplicates
int SimpleClass_SimpleClass_impl();
int SimpleClass_setValue_impl();
int SimpleClass_getValue_impl();
int SimpleClass_compute_impl();
int SimpleClass_getClassID_impl();
int LifecycleClass_LifecycleClass_impl();
int LifecycleClass_getData_impl();
unsigned int LifecycleClass_getInstanceCount_impl();
int LifecycleClass_LifecycleClass_dtor_impl(void* ptr);
int Base_Base_impl();
int Derived_Derived();
int Base_virtual_func();
int Derived_virtual_func();
int Derived_Derived_dtor(void* this);
int Base_Base_dtor(void* this);
int MultiDerived_MultiDerived();
int MultiDerived_MultiDerived_dtor(void* this);
int DiamondDerived_DiamondDerived();
int DiamondDerived_DiamondDerived_dtor(void* this);
int Point_Point_impl(void* ptr, int arg_0, int arg_1);
int Point_operator_plus_impl(char *a0, char *a1);
void Point_operator_eq(void* ptr, void* p);
int Point_operator_inc_impl();
int template_max_int(int arg_0, int arg_1);
void template_swap_int(int *ptr, int *p);
int Container_int_Container_impl();
void Container_int_push_impl(void* this_ptr, int arg_0);
int Container_int_get_impl();
int Container_int_getSize_impl();
int Container_double_Container_impl();
int Container_double_push_impl();
int Container_double_get_impl();
unsigned int Container_double_getSize_impl();
int std_unique_ptr_int_default_delete_int_constructor(char *a0);
void std_unique_ptr_int_default_delete_int_deref(void* this);
int std_move_unique_ptr_int_default_delete_int();
int std_unique_ptr_int_default_delete_int_copy();
int std_unique_ptr_int_array_default_delete_int_array_constructor(char *a0);
int std_unique_ptr_int_array_default_delete_int_array_index();
int std_unique_ptr_int_array_default_delete_int_array_destructor(void* this);
int std_unique_ptr_int_default_delete_int_destructor(void* this);
int RTTIDerivedA_RTTIDerivedA();
int RTTIDerivedB_RTTIDerivedB();
void std_type_info_operator_eq(void* this_ptr, void* arg_0);
int RTTIDerivedA_derivedA_data_impl();
int RTTIDerivedB_derivedB_data_impl();
void std_type_info_name(void* ptr);
void Base_getName(void* this);
int Base_dtor(void* this);
void Derived_getName(void* this);
int Derived_dtor(void* this);
int BaseA_BaseA(void* ptr);
int BaseB_BaseB(void* ptr);
void MultiDerived_funcA(void* this);
int MultiDerived_dtor(void* this);
void MultiDerived_funcB(void* this);
int non_virtual_thunk_to_MultiDerived_funcB(void* a0);
int non_virtual_thunk_to_MultiDerived_dtor(unsigned int a0);
int non_virtual_thunk_to_MultiDerived_D0Ev(unsigned int a0);
void BaseA_funcA(void* this);
void BaseB_funcB(void* this);
int VirtualBase_VirtualBase(void* ptr);
int MiddleA_MiddleA(void* ptr);
int MiddleB_MiddleB(void* ptr);
void MiddleA_func(void* this);
int thunk_to_MiddleA_func(void* *a0);
int thunk_to_MiddleA_dtor(unsigned int a0);
int thunk_to_MiddleA_D0Ev(unsigned int a0);
void MiddleB_func(void* this);
int thunk_to_MiddleB_func(void* *a0);
int thunk_to_MiddleB_dtor(unsigned int a0);
int thunk_to_MiddleB_D0Ev(unsigned int a0);
void DiamondDerived_func(void* this);
int non_virtual_thunk_to_DiamondDerived_func(void* a0);
int non_virtual_thunk_to_DiamondDerived_dtor(unsigned int a0);
int non_virtual_thunk_to_DiamondDerived_D0Ev(unsigned int a0);
int thunk_to_DiamondDerived_func(void* *a0);
int thunk_to_DiamondDerived_dtor(unsigned int a0);
int thunk_to_DiamondDerived_D0Ev(unsigned int a0);
void VirtualBase_func(void* this);
int std_uniq_ptr_data_int_default_delete_int_copy(void* this, void* arg_0);
int std_uniq_ptr_impl_int_default_delete_int_copy();
int std_tuple_int_ptr_default_delete_int_copy(void* this_ptr, void* arg_0);
int std_Tuple_impl_0u_int_ptr_default_delete_int_copy(void* this_ptr, void* arg_0);
int std_Tuple_impl_0u_int_ptr_default_delete_int_Tuple_impl();
int std_Tuple_impl_1u_default_delete_int_Tuple_impl();
int std_get_0u_int_ptr_default_delete_int(int a0, int a1);
int std__get_helper_0u_int_ptr_default_delete_int(int a0, int a1);
int std_Tuple_impl_0u_int_ptr_default_delete_int_M_head(int a0, int a1);
int std_Head_base_0u_int_ptr_false_M_head(int a0, int a1);
int RTTIBase_RTTIBase(void* ptr);
int RTTIDerivedA_dtor(void* this);
void RTTIDerivedA_getType_impl();
int RTTIBase_dtor(void* this);
void RTTIBase_getType_impl();
int RTTIDerivedB_dtor(void* this);
void RTTIDerivedB_getType_impl();
int std_uniq_ptr_data_int_default_delete_int_true_true_uniq_ptr_data();
int std_uniq_ptr_impl_int_default_delete_int_uniq_ptr_impl(void* this, int *arg_0);
int std_tuple_int_ptr_default_delete_int_tuple_true_true();
int std_Tuple_impl_0u_int_ptr_default_delete_int_Tuple_impl_void(void* this);
int std_Head_base_0u_int_ptr_false_Head_base();
int std_Head_base_1u_default_delete_int_true_Head_base_func(int a0, int a1);
int std_unique_ptr_int_default_delete_int_get_deleter_func(void* this_ptr);
void std_default_delete_int_operator(void* this_ptr, int *arg_0);
int std_move_int_ptr_ref();
int std_uniq_ptr_impl_int_default_delete_int_M_deleter_func(void* this_ptr);
int std_get_1u_int_ptr_default_delete_int(void* a0, int a1);
int std__get_helper_1u_default_delete_int(void* a0, int a1);
int std_Tuple_impl_1u_default_delete_int_M_head(void* a0, int a1);
int std_Head_base_1u_default_delete_int_true_M_head(void* a0, int a1);
int std_unique_ptr_int_default_delete_int_get_func(void* this_ptr);
int std_uniq_ptr_impl_int_default_delete_int_M_ptr_const(void* this_ptr);
int std_get_0u_int_ptr_default_delete_int_const(void* a0, int a1);
int std__get_helper_0u_int_ptr_default_delete_int_const(void* a0, int a1);
int std_Tuple_impl_0u_int_ptr_default_delete_int_M_head_const(void* a0, int a1);
int std_Head_base_0u_int_ptr_false_M_head_const(int a0, int a1);
int std_uniq_ptr_data_int_default_delete_int_array_true_true_uniq_ptr_data();
int std_uniq_ptr_impl_int_default_delete_int_array_uniq_ptr_impl(void* this, int *arg_0);
int std_tuple_int_ptr_default_delete_int_array_tuple_true_true();
int std_Tuple_impl_0u_int_ptr_default_delete_int_array_Tuple_impl_void(void* this);
int std_Tuple_impl_1u_default_delete_int_array_Tuple_impl_void();
int std_Head_base_0u_int_ptr_false_Head_base_void();
int std_Head_base_1u_default_delete_int_array_true_Head_base_void();
int std_get_0u_int_ptr_default_delete_int_array_func(int a0, int a1);
int std__get_helper_0u_int_ptr_default_delete_int_array_func(int a0, int a1);
int std_Tuple_impl_0u_int_ptr_default_delete_int_array_M_head_func(int a0, int a1);
int std_unique_ptr_int_array_default_delete_int_array_get_deleter_func();
void std_default_delete_int_array_operator_int(void* this_ptr, int *arg_0);
void std_uniq_ptr_impl_int_default_delete_int_array_M_deleter(void* this_ptr);
int std_get_1u_int_ptr_default_delete_int_array_func(void* a0, int a1);
int std__get_helper_1u_default_delete_int_array_func(void* a0, int a1);
int std_Tuple_impl_1u_default_delete_int_array_M_head_func(void* a0, int a1);
int std_Head_base_1u_default_delete_int_array_true_M_head_func(void* a0, int a1);
void std_unique_ptr_int_array_default_delete_int_array_get_func(void* this);
int std_uniq_ptr_impl_int_default_delete_int_array_M_ptr_const();
int std_get_0u_int_ptr_default_delete_int_array_func_const(int a0, int a1);
int std__get_helper_0u_int_ptr_default_delete_int_array_func_const(int a0, int a1);
int std_Tuple_impl_0u_int_ptr_default_delete_int_array_M_head_func_const(int a0, int a1);
int* std_forward_int_ptr(void* this_ptr, void* arg_0);
int std_Head_base_0u_int_ptr_false_Head_base_int_ptr_ref(void* ptr, int *arg_0);

// Missing function declarations
void call_virtual_func(void *arg_0, int arg_1);

// Additional missing function declarations
void test_cpp_constructor();
int test_cpp_lambda_dollar_1_operator(int a0, int a1);
int _ZZ15test_cpp_lambdavENK3__dollar__0clIiiEEDaT_T0_(void* this, int a0, int a1);
int std_tuple_int_dollar_2_constructor_2(char *a0, unsigned int *a1, int a2);
int std_Tuple_impl_0u_int_ptr_dollar_2_constructor(char *a0, unsigned int a1, unsigned int a2);
int std_Tuple_impl_1u_dollar_2_constructor(unsigned int a0, unsigned int a1);
int std_Head_base_1u_dollar_2_constructor(unsigned int a0, unsigned int a1);
int std_get_helper_0u_int_ptr_dollar_2(int a0, int a1, int a2);
int std_Tuple_impl_0u_M_head(int a0, int a1, int a2);
int std_Head_base_1u_M_head(int a0, int a1, int a2);
int std_get_0u_int_ptr_dollar_2_const(int a0, int a1, int a2);
int std_get_helper_0u_int_ptr_dollar_2_const(int a0, int a1, int a2);
int std_Tuple_impl_0u_M_head_const(int a0, int a1, int a2);
int std_uniq_ptr_data_int_default_delete_int_array_constructor(char *a0, unsigned int *a1);
int std_uniq_ptr_impl_int_default_delete_int_array_M_ptr(void* this);
int std_unique_ptr_int_array_default_delete_int_array_get_deleter(void* this);
void std_default_delete_int_array_operator_int(void* this_ptr, int *arg_0);
int std_get_1u_int_ptr_default_delete_int_array(void* this_ptr, int a0, char* a1);
int std_Tuple_impl_0u_int_ptr_default_delete_int_array_M_head_func(int a0, int a1);
int std_Head_base_1u_default_delete_int_array_true_Head_base(unsigned int v2, int v0, char* v1);
int std_get_0u_int_ptr_default_delete_int_array_func_const(int a0, int a1);

// Tuple stubs - removed duplicates
// Get helper stubs - removed duplicates
// Head base stubs - removed duplicates

// Default delete stubs - removed duplicates

// Default delete array stubs - removed duplicates
// Move int ptr - removed duplicate
// Lambda stubs - removed duplicates
// Exception handling stubs - removed duplicates

// Stub classes and functions
// class SimpleClass {
// public:
//     SimpleClass(int val, const char* name);
//     void setValue(int val);
//     int getValue() const;
//     int compute(int multiplier) const;
//     static int getClassID();
// private:
//     int value;
//     char name[32];
// };

// class LifecycleClass {
// public:
//     LifecycleClass(unsigned int size);
//     unsigned int getData(unsigned int index) const;
//     static unsigned int getInstanceCount();
//     ~LifecycleClass();
// private:
//     unsigned int* data;
//     unsigned int size;
//     static unsigned int instanceCount;
// };

// class Base {
// public:
//     Base();
//     virtual ~Base();
//     virtual int virtual_func(int arg);
//     virtual const char* getName() const;
// };

// class Derived : public Base {
// public:
//     Derived(int val);
//     ~Derived();
//     int virtual_func(int arg) override;
//     const char* getName() const override;
// private:
//     int value;
// };

// class BaseA {
// public:
//     BaseA();
//     virtual ~BaseA();
//     virtual void funcA();
// };

// class BaseB {
// public:
//     BaseB();
//     virtual ~BaseB();
//     virtual void funcB();
// };

// class MultiDerived : public BaseA, public BaseB {
// public:
//     MultiDerived();
//     ~MultiDerived();
//     void funcA() override;
//     void funcB() override;
// };

// class VirtualBase {
// public:
//     VirtualBase();
//     virtual ~VirtualBase();
//     virtual void func();
// };

// class MiddleA : public virtual VirtualBase {
// public:
//     MiddleA();
//     ~MiddleA();
//     void func() override;
// };

// class MiddleB : public virtual VirtualBase {
// public:
//     MiddleB();
//     ~MiddleB();
//     void func() override;
// };

// class DiamondDerived : public MiddleA, public MiddleB {
// public:
//     DiamondDerived();
//     ~DiamondDerived();
//     void func() override;
// };

// class Point {
// public:
//     Point(int x, int y);
//     Point operator+(const Point& other) const;
//     bool operator==(const Point& other) const;
//     Point& operator++();
// private:
//     int x, y;
// };

// template<typename T>
// T template_max(T a, T b) { return (a > b) ? a : b; }

// template<typename T>
// void template_swap(T& a, T& b) { T temp = a; a = b; b = temp; }

// template<typename T>
// class Container {
// public:
//     Container();
//     void push(T value);
//     T get(unsigned int index) const;
//     unsigned int getSize() const;
// private:
//     T data[10];
//     unsigned int size;
// };

// class RTTIBase {
// public:
//     RTTIBase();
//     virtual ~RTTIBase();
//     virtual const std::type_info& getType() const;
// };

// class RTTIDerivedA : public RTTIBase {
// public:
//     RTTIDerivedA();
//     ~RTTIDerivedA();
//     const std::type_info& getType() const override;
//     int derivedA_data() const;
// };

// class RTTIDerivedB : public RTTIBase {
// public:
//     RTTIDerivedB();
//     ~RTTIDerivedB();
//     const std::type_info& getType() const override;
//     int derivedB_data() const;
// };

/* CRT stub function _init removed by preprocessor */

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[1040];
} struct_0;

extern struct_0 *g_408ff4;
extern void frame_dummy();
extern int __do_global_ctors_aux();

int _init()
{
 if (g_408ff4)
 ((void(*)())g_408ff4)();
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
 unsigned int ptr[3]; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 return 0; // Removed invalid goto
}


// Function: sub_401190 at 0x401190
int sub_401190()
{
 void* v1; // ebx

 return 0; // Removed invalid goto
}


// Function: sub_401196 at 0x401196
void sub_401196()
{
}


// Function: __cxx_global_var_init at 0x4011a0
extern unsigned int _GLOBAL_OFFSET_TABLE_;
extern int _ZStL8__ioinit;
extern int __cxa_atexit(void*, void*, void*);

int __cxx_global_var_init()
{
 void* v0; // [bp-0xc]

 v0 = (void*)&_GLOBAL_OFFSET_TABLE_;
 (void)v0;
 return __cxa_atexit((void*)0, (void*)0, (void*)0);
}


// Function: sub_4011ef at 0x4011ef
int sub_4011ef()
{
 _GLOBAL__sub_I_5_1_cpp();
 return 0;
}


// Function: _GLOBAL__sub_I_5_1.cpp at 0x4011f0
extern unsigned int _GLOBAL__sub_I_5_1_cpp();
unsigned int _GLOBAL__sub_I_5_1_cpp()
{
    unsigned int v2; // eax
    unsigned int v0; // [bp-0xc]

    v0 = v2;
    return __cxx_global_var_init();
}


// Function: sub_40120c at 0x40120c
extern void _start();
void sub_40120c()
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_40123b at 0x40123b
extern void deregister_tm_clones();
void sub_40123b()
{
 deregister_tm_clones();
}


// Function: sub_40123c at 0x40123c
void sub_40123c()
{
 return;
}


// Function: __x86.get_pc_thunk_bx at 0x401240
void __x86.get_pc_thunk_bx()
{
 return;
}


// Function: sub_401244 at 0x401244
void sub_401244()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_401283 at 0x401283
void sub_401283()
{
}


// Function: sub_401289 at 0x401289
void sub_401289()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

extern void __x86.get_pc_thunk_dx();
unsigned int register_tm_clones()
{
 struct_0 *v2; // edx
 struct_0 *v3; // edx
 unsigned int v4; // ebx
 unsigned int v0; // [bp-0x8]

 __x86.get_pc_thunk_dx();
 v3 = (struct_0 *)((char *)&v2 + 4);
 v0 = v4;
 return 0;
}


// Function: sub_4012d7 at 0x4012d7
extern unsigned int* __do_global_dtors_aux();
void sub_4012d7()
{
 __do_global_dtors_aux();
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

unsigned int * __do_global_dtors_aux()
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
 unsigned int *v14; // eax
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 char v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v5 = __x86.get_pc_thunk_di(*((int *)&v2), &v3);
 ptr = (struct_0 *)((char *)&v6 + 1023);
 v1 = v8;
 v0 = v9;
 if (0)
 return v5;
 if (0)
 sub_401190(0);
 v10 = (struct_0 *)((char *)ptr + 1032);
 v11 = 0;
 i = 0;
 if (0 < i)
 {
 do
 {
 v13 = v11 + 1;
 v11 = v13;
 } while (v11 < i);
 }
 v14 = deregister_tm_clones();
 return v14;
}


// Function: sub_40136a at 0x40136a
void sub_40136a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86.get_pc_thunk_dx at 0x401379
void __x86.get_pc_thunk_dx()
{
 return;
}


// Function: __x86.get_pc_thunk_di at 0x40137d
int __x86.get_pc_thunk_di(int a0)
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_401381 at 0x401381
int sub_401381()
{
 return 0;
}


// Function: _Z20test_cpp_member_funcv at 0x401390
extern unsigned int _GLOBAL_OFFSET_TABLE_;

void test_cpp_member_func()
{
 char v3; // [bp-0x2c]

 SimpleClass_SimpleClass(&v3, 5, "Test");
 SimpleClass_setValue(&v3, 10);
 SimpleClass_getValue(&v3);
 SimpleClass_compute(&v3, 3);
 SimpleClass_getClassID();
 return;
}


// Function: sub_40141d at 0x40141d
int sub_40141d()
{
 test_cpp_constructor();
 return;
}


// Function: _Z20test_cpp_constructorv at 0x401420
extern unsigned int _GLOBAL_OFFSET_TABLE_;

void test_cpp_constructor()
{
 unsigned int count; // [bp-0x2c]
 unsigned int v3; // [bp-0x20]
 char v4; // [bp-0x14]
 unsigned int v5; // [bp-0xc]

 (void)&_GLOBAL_OFFSET_TABLE_;
 v5 = 0;
 LifecycleClass_LifecycleClass(&v4, 5);
 v3 = LifecycleClass_getData(&v4, 2);
 v5 += v3;
 count = LifecycleClass_getInstanceCount();
 v5 += count;
 LifecycleClass_LifecycleClass_dtor(&v4);
 return;
}


// Function: sub_4014c0 at 0x4014c0
int sub_4014c0()
{
 unsigned int v3; // eax
 unsigned int v4; // edx
 unsigned int v1; // [bp+0xfffec]
 unsigned int v2; // [bp+0xffff0]

 v2 = v3;
 v1 = v4;
 _Unwind_Resume(v2); /* do not return */
}


// Function: sub_4014e2 at 0x4014e2
int sub_4014e2()
{
 call_virtual_func();
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x4014f0
void call_virtual_func(void *arg_0, int arg_1)
{
 (*((int *)*((int *)arg_0)))(arg_0, arg_1);
 return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x401520
extern unsigned int _GLOBAL_OFFSET_TABLE_;

void test_cpp_virtual_func()
{
 unsigned int v0; // [bp-0x4c]
 unsigned int v4; // [bp-0x3c]
 unsigned int v3; // [bp-0x40]
 unsigned int v2; // [bp-0x44]
 unsigned int v1; // [bp-0x48]
 void *v8; // [bp-0x2c]
 void *v9; // [bp-0x28]
 char v12; // [bp-0x14]
 char v13; // [bp-0xc]

 (void)&_GLOBAL_OFFSET_TABLE_;
 Base_Base(&v13);
 Derived_Derived(&v12, 3);
 v4 = Base_virtual_func(&v13, 5);
 v3 = Derived_virtual_func(&v12, 5);
 v9 = &v13;
 v8 = &v12;
 v2 = (unsigned int)call_virtual_func(v9, 5);
 v1 = (unsigned int)call_virtual_func(v8, 5);
 v0 = v4 + v3 + v2 + v1;
 return;
}


// Function: sub_40162d at 0x40162d
int sub_40162d()
{
 unsigned int v3; // eax
 unsigned int v4; // edx
 unsigned int v1; // [bp+0xfffec]
 unsigned int v2; // [bp+0xffff0]

 v2 = v3;
 v1 = v4;
 _Unwind_Resume(v2); /* do not return */
}


// Function: sub_401638 at 0x401638
int sub_401638()
{
 unsigned int v3; // eax
 unsigned int v4; // edx
 unsigned int v1; // [bp+0xfffec]
 unsigned int v2; // [bp+0xffff0]

 v2 = v3;
 v1 = v4;
 return 0;
}


// Function: sub_401668 at 0x401668
int sub_401668()
{
 test_cpp_multiple_inheritance();
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x401670

extern unsigned int _GLOBAL_OFFSET_TABLE_;

void test_cpp_multiple_inheritance()
{
 unsigned int v0; // [bp-0x4c]
 unsigned int v1; // [bp-0x48]
 unsigned int v2; // [bp-0x44]
 unsigned int v3; // [bp-0x40]
 struct_1 **v4; // [bp-0x3c]
 unsigned int v5; // [bp-0x38]
 unsigned int v6; // [bp-0x34]
 unsigned int v7; // [bp-0x28]
 struct_1 **v8; // [bp-0x24]
 struct_1 **v9; // [bp-0x20]
 char v10; // [bp-0x1c]
 unsigned int v11; // [bp-0x18]
 char v12; // [bp-0x14]
 unsigned int v13; // [bp-0x10]

 v3 = (unsigned int)&_GLOBAL_OFFSET_TABLE_;
 MultiDerived_MultiDerived(&v10);
 v11 = 100;
 v13 = 200;
 v9 = &v10;
 v4 = NULL;
 if (&v10)
 v4 = &v12;
 v8 = v4;
 v2 = (*((int *)*((int *)&v10)))(v9);
 v7 = v2;
 v1 = *(v8)->field_0(v8);
 v6 = v1;
 v5 = (v9 == v8 ? 0 : 1);
 v0 = v7 + v6 + v5;
 return;
}


// Function: sub_40173b at 0x40173b
int sub_40173b()
{
 unsigned int v3; // eax
 unsigned int v4; // edx
 unsigned int v1; // [bp+0xfffd8]
 unsigned int v2; // [bp+0xfffdc]

 v2 = v3;
 v1 = v4;
 _Unwind_Resume(v2); /* do not return */
}


// Function: sub_40175d at 0x40175d
int sub_40175d()
{
 test_cpp_diamond_inheritance();
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x401760

extern unsigned int _GLOBAL_OFFSET_TABLE_;

void test_cpp_diamond_inheritance()
{
 unsigned int v0; // [bp-0x4c]
 unsigned int v1; // [bp-0x48]
 unsigned int v2; // [bp-0x44]
 unsigned int v3; // [bp-0x40]
 struct_1 **v4; // [bp-0x3c]
 unsigned int v5; // [bp-0x38]
 unsigned int v6; // [bp-0x2c]
 struct_1 **v7; // [bp-0x28]
 void* ptr; // [bp-0x24], Other Possible Types: char
 char v9; // [bp-0x20]

 v3 = (unsigned int)&_GLOBAL_OFFSET_TABLE_;
 DiamondDerived_DiamondDerived(&ptr);
 *((unsigned int *)&(&v9)[ptr[12]]) = 50;
 v4 = NULL;
 if (&ptr)
 v4 = &(&ptr)[ptr[12]];
 v7 = v4;
 v2 = *(v7)->field_0(v7);
 v6 = v2;
 *((unsigned int *)&(&v9)[ptr[12]]) = 100;
 v1 = *(v7)->field_0(v7);
 v5 = v1;
 v0 = v6 + v5;
 return;
}


// Function: sub_40181e at 0x40181e
int sub_40181e()
{
 unsigned int v3; // eax
 unsigned int v4; // edx
 unsigned int v1; // [bp+0xfffd4]
 unsigned int v2; // [bp+0xfffd8]

 v2 = v3;
 v1 = v4;
 _Unwind_Resume(v2); /* do not return */
}


// Function: _Z26test_cpp_operator_overloadv at 0x401840
extern unsigned int _GLOBAL_OFFSET_TABLE_;

void test_cpp_operator_overload()
{
 unsigned int v7; // ebx
 char v8; // al
 unsigned int v0; // [bp-0x2c]
 char v1; // [bp-0x25]
 char v2; // [bp-0x24]
 char v3; // [bp-0x1c]
 char v4; // [bp-0x14]
 unsigned int v5; // [bp-0x8]

 v5 = v7;
 v0 = (unsigned int)&_GLOBAL_OFFSET_TABLE_;
 Point_Point(&v4, 1, 2);
 Point_Point(&v3, 3, 4);
 Point_operator_plus(&v2, &v4, &v3);
 v8 = 1;
 v1 = v8 & 1;
 Point_operator_inc(&v2);
 if (!(v1 & 1))
 return;
 return;
}


// Function: sub_4018f4 at 0x4018f4
int sub_4018f4()
{
 test_cpp_template_func();
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x401900
extern unsigned int _GLOBAL_OFFSET_TABLE_;

void test_cpp_template_func()
{
 unsigned int v10; // ebx
 unsigned int v11; // fpround
 unsigned int v0; // [bp-0x28]
 unsigned short v1; // [bp-0x24]
 unsigned short v2; // [bp-0x22]
 unsigned int v3; // [bp-0x20]
 unsigned int v4; // [bp-0x1c]
 unsigned int v5; // [bp-0x18]
 double v6; // [bp-0x14], Other Possible Types: unsigned long
 unsigned int v7; // [bp-0xc]
 unsigned int v8; // [bp-0x8]

 v8 = v10;
 v0 = (unsigned int)&_GLOBAL_OFFSET_TABLE_;
 v7 = template_max_int(3, 7);
 // template_max<double> call removed - invalid decompilation
 v6 = 0.0; // Removed invalid decompilation artifact
 v5 = 10;
 v4 = 20;
 template_swap_int(&v5, &v4);
 // Removed decompilation artifact
 return;
}


// Function: sub_4019a9 at 0x4019a9
int sub_4019a9()
{
 test_cpp_template_class();
 return;
}


// Function: _Z23test_cpp_template_classv at 0x4019b0
extern unsigned int _GLOBAL_OFFSET_TABLE_;

void test_cpp_template_class()
{
 unsigned int v13; // ebx
 unsigned int v14; // fpround
 char *v0; // [bp-0xb0]
 unsigned int v1; // [bp-0xac]
 char *v2; // [bp-0xa8]
 unsigned short v3; // [bp-0xa4]
 unsigned short v4; // [bp-0xa2]
 unsigned int v5; // [bp-0xa0]
 double v6; // [bp-0x9c], Other Possible Types: unsigned long
 char v7; // [bp-0x94]
 unsigned int size; // [bp-0x3c]
 unsigned int v9; // [bp-0x38]
 char v10; // [bp-0x34]
 unsigned int v11; // [bp-0x8]

 v11 = v13;
 v1 = (unsigned int)&_GLOBAL_OFFSET_TABLE_;
 v0 = &v10;
 Container_int_Container(&v10);
 Container_int_push(v0, 10);
 Container_int_push(v0, 20);
 Container_int_push(v0, 30);
 v9 = Container_int_get(v0, 0);
 size = Container_int_getSize(v0);
 v2 = &v7;
 Container_double_Container(&v7);
 Container_double_push(v2, 1.5);
 Container_double_get(v2, 0);
 // Removed decompilation artifact
 return;
}


// Function: sub_401b14 at 0x401b14
int sub_401b14()
{
 test_cpp_lambda();
 return;
}


// Function: _Z15test_cpp_lambdav at 0x401b20
extern unsigned int _GLOBAL_OFFSET_TABLE_;

void test_cpp_lambda()
{
 unsigned int v0; // [bp-0x30]
 unsigned int v1; // [bp-0x28]
 char v2; // [bp-0x24]
 unsigned int v3; // [bp-0x1c]
 char *v4; // [bp-0x18]
 unsigned int v5; // [bp-0x10]
 unsigned int v6; // [bp-0xc]

 v0 = (unsigned int)&_GLOBAL_OFFSET_TABLE_;
 v6 = 10;
 v5 = 20;
 v3 = v6;
 v4 = &v5;
 v1 = test_cpp_lambda_dollar_1_operator(&v3, 3);
 _ZZ15test_cpp_lambdavENK3__dollar__0clIiiEEDaT_T0_(&v2, 10, 20);
 return;
}


// Function: sub_401b93 at 0x401b93
void sub_401b93(unsigned int a0, unsigned int a1)
{
 return;
}


// Function: _ZZ15test_cpp_lambdavENK3__dollar__1clEi at 0x401ba0
typedef struct struct_lambda_0 {
 unsigned int field_0;
 struct struct_lambda_1 *field_4;
} struct_lambda_0;

typedef struct struct_lambda_1 {
 unsigned int field_0;
} struct_lambda_1;

int test_cpp_lambda_dollar_1_operator(int a0, int a1)
{
 struct_lambda_0 *idx; // [bp+0x4]
 char v1; // [bp+0x8]

 idx = (struct_lambda_0*)a0;
 idx->field_4->field_0 = idx->field_4->field_0 + 5;
 return idx->field_0 * a1 + idx->field_4->field_0;
}


// Function: sub_401bc3 at 0x401bc3
void sub_401bc3(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return;
}


// Function: _ZZ15test_cpp_lambdavENK3__dollar__0clIiiEEDaT_T0_ at 0x401bd0
int test_cpp_lambda_dollar_0_operator(int a0, int a1, int a2)
{
 return a1 + a2;
}


// Function: sub_401be4 at 0x401be4
int sub_401be4()
{
 test_cpp_exception();
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x401bf0
extern unsigned int _GLOBAL_OFFSET_TABLE_;

void test_cpp_exception()
{
 unsigned int v4; // ebx
 unsigned int *ptr; // ecx
 void* v0; // [bp-0x28]
 unsigned int result; // [bp-0xc]
 unsigned int v2; // [bp-0x8]

 v2 = v4;
 v0 = (void*)&_GLOBAL_OFFSET_TABLE_;
 result = 0;
 ptr = (unsigned int *)__cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxa_throw(ptr, (void*)((unsigned int*)v0)[28], 0);
 test_cpp_smart_ptr();
 return;
}


// Function: sub_401c43 at 0x401c43
int sub_401c43()
{
 unsigned int v7; // eax
 unsigned int v8; // edx
 unsigned int ptr; // eax
 unsigned int v1; // [bp+0xfffe0]
 unsigned int v2; // [bp+0xfffec]
 unsigned int v3; // [bp+0xffff0]
 unsigned int result; // [bp+0xffff4]
 unsigned int v5; // [bp+0xffff8]
 unsigned int v6; // [bp+0xffffc]

 v5 = v7;
 result = v8;
 if (result == 1)
 {
 v3 = *((int *)__cxa_begin_catch((void*)v5));
 v6 += v3;
 __cxa_rethrow((void*)v5);
 }
 else if (result == 1)
 {
 v2 = *((int *)__cxa_begin_catch((void*)v5));
 v6 += v2 * 2;
 __cxa_end_catch();
 ptr = __cxa_allocate_exception(1);
 __cxa_throw((void*)ptr, (void*)(v1 - 1016), 0);
 }
 else
 {
 _Unwind_Resume((void*)v5); /* do not return */
 }
 return 0;
}


// Function: sub_401c85 at 0x401c85
void sub_401c85()
{
 unsigned int v3; // eax
 unsigned int v4; // edx
 unsigned int v1; // [bp+0xffff4]
 unsigned int v2; // [bp+0xffff8]

 v2 = v3;
 v1 = v4;
 __cxa_end_catch();
}


// Function: sub_401cfd at 0x401cfd
int sub_401cfd(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11, unsigned int a12, unsigned int a13, unsigned int a14)
{
 unsigned int v7; // eax
 unsigned int v8; // edx
 unsigned int v9; // eax
 unsigned int v0; // [bp+0xfffdc]
 unsigned int v1; // [bp+0xfffe4]
 unsigned int v2; // [bp+0xfffe8]
 unsigned int v3; // [bp+0xffff4]
 unsigned int v4; // [bp+0xffff8]
 unsigned int v5; // [bp+0xffffc]
 unsigned int v6; // [bp+0xffffc]

 v4 = v7;
 v3 = v8;
 v9 = v3;
 v0 = v9;
 if (v9 == 3)
 {
 v1 = (unsigned int)__cxa_begin_catch((void*)v4);
 v6 = v5 + 100;
 __cxa_end_catch();
 }
 else
 {
 if (v0 != 2)
 goto LABEL_0x401d7a;
 v2 = (unsigned int)__cxa_begin_catch((void*)v4);
 v6 += 200;
 __cxa_end_catch();
 }
 return v6;
}


// Function: _Z18test_cpp_smart_ptrv at 0x401d90
extern unsigned int _GLOBAL_OFFSET_TABLE_;

void test_cpp_smart_ptr()
{
 unsigned int *ptr3; // ecx
 unsigned int v0; // [bp-0x68]
 char *v1; // [bp-0x64]
 unsigned int *addr; // [bp-0x60]
 unsigned int *ptr6; // [bp-0x5c]
 char *v4; // [bp-0x58]
 unsigned int *ptr5; // [bp-0x54]
 unsigned int ptr[5]; // [bp-0x50]
 char *v7; // [bp-0x4c]
 unsigned int *ptr4; // [bp-0x48]
 unsigned int v9; // [bp-0x44]
 char *v10; // [bp-0x40]
 unsigned int *p; // [bp-0x3c]
 unsigned int v12; // [bp-0x38]
 char v13; // [bp-0x34]
 char v14; // [bp-0x2c]
 unsigned int v15; // [bp-0x28]
 char v16; // [bp-0x24]
 unsigned int v17; // [bp-0x20]
 char v18; // [bp-0x1c]
 char v19; // [bp-0xc]

 v9 = (unsigned int)&_GLOBAL_OFFSET_TABLE_;
 ptr3 = operatornew(4);
 *(ptr3) = 100;
 v10 = &v19;
 std_unique_ptr_int_constructor(v10, ptr3);
 p = std_unique_ptr_int_get(v10);
 *(p) = 200;
 v7 = &v18;
 std_unique_ptr_int_constructor(v7, std_move_unique_ptr(&v19));
 ptr4 = std_unique_ptr_int_get(v7);
 v17 = *(ptr4);
 ptr[0] = operatornew[](20);
 ptr[0] = 1;
 ptr[1] = 2;
 ptr[2] = 3;
 ptr[3] = 4;
 ptr[4] = 5;
 v4 = &v16;
 std_unique_ptr_int_array_constructor(v4, ptr);
 ptr5 = std_unique_ptr_int_array_get(v4, 2);
 v15 = *(ptr5);
 ptr6 = operatornew(4);
 *(ptr6) = 500;
 v1 = &v13;
 std_unique_ptr_int_dollar_2_constructor(v1, ptr6);
 addr = std_unique_ptr_int_dollar_2_deref(v1);
 v12 = *(addr);
 v0 = v17 + v15 + v12;
 return;
}


// Function: sub_401f55 at 0x401f55
int sub_401f55()
{
 unsigned int v3; // eax
 unsigned int v4; // edx
 unsigned int v1; // [bp+0xffff4]
 unsigned int v2; // [bp+0xffff8]

 v2 = v3;
 v1 = v4;
 _Unwind_Resume(v2); /* do not return */
}


// Function: sub_401f60 at 0x401f60
int sub_401f60()
{
 unsigned int v3; // eax
 unsigned int v4; // edx
 unsigned int v1; // [bp+0xffff4]
 unsigned int v2; // [bp+0xffff8]

 v2 = v3;
 v1 = v4;
}


// Function: sub_401f6b at 0x401f6b
int sub_401f6b()
{
 unsigned int v3; // eax
 unsigned int v4; // edx
 unsigned int v1; // [bp+0xffff4]
 unsigned int v2; // [bp+0xffff8]

 v2 = v3;
 v1 = v4;
}


// Function: sub_401f76 at 0x401f76
int sub_401f76()
{
 unsigned int v3; // eax
 unsigned int v4; // edx
 unsigned int v1; // [bp+0xffff4]
 unsigned int v2; // [bp+0xffff8]

 v2 = v3;
 v1 = v4;
}


// Function: sub_401fc2 at 0x401fc2
int sub_401fc2()
{
 std::unique_ptr<int, test_cpp_smart_ptr()::__dollar__2>::unique_ptr<test_cpp_smart_ptr()::__dollar__2, void>(int*, test_cpp_smart_ptr()::__dollar__2 const&)();
 return;
}


// Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3__dollar__2EC2IS0_vEEPiRKS0_ at 0x401fd0
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int std_unique_ptr_int_dollar_2_constructor(char *a0, unsigned int *a1)
{
 char v0; // [bp-0xc]
 char v1; // [bp-0x8]
 char v2; // [bp+0x0]
 char v3; // [bp+0xc]

 (void)a1;
 return std_uniq_ptr_data_int_dollar_2_constructor(a0, a1, *((int *)&v3), (int)&_GLOBAL_OFFSET_TABLE_, *((int *)&v0), *((int *)&v1), &v2);
}


// Function: sub_402014 at 0x402014
void sub_402014()
{
 unsigned int v1; // eax

 __clang_call_terminate(v1); /* do not return */
}


// Function: sub_40201f at 0x40201f
int sub_40201f()
{
 std::unique_ptr<int, test_cpp_smart_ptr()::__dollar__2>::operator*() const();
 return;
}


// Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3__dollar__2EdeEv at 0x402020
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int std_unique_ptr_int_dollar_2_deref()
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp+0x4]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 v1 = v2;
 return std_unique_ptr_int_dollar_2_get(v1);
}


// Function: sub_402058 at 0x402058
int sub_402058()
{
 return;
}


// Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3__dollar__2ED2Ev at 0x402060
extern unsigned int _GLOBAL_OFFSET_TABLE_;

unsigned int * std_unique_ptr_int_dollar_2_destructor(unsigned int a0)
{
 unsigned int *v4; // eax
 unsigned int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 unsigned int *v2; // [bp-0x10]
 unsigned int *ptr; // [bp-0xc]

 v1 = (unsigned int)&_GLOBAL_OFFSET_TABLE_;
 v2 = (unsigned int *)std_uniq_ptr_impl_int_dollar_2_M_ptr(a0);
 ptr = v2;
 if (ptr && *ptr)
 {
 v0 = std_unique_ptr_int_dollar_2_get_deleter(a0);
 v4 = (unsigned int *)std_move_int_ptr(ptr);
 test_cpp_smart_ptr_dollar_2_operator(v0, *v4);
 }
 if (ptr) *ptr = 0;
 return ptr;
}


// Function: sub_4020f0 at 0x4020f0
void sub_4020f0()
{
 unsigned int v1; // eax

 __clang_call_terminate(v1); /* do not return */
}


// Function: sub_4020fb at 0x4020fb
int sub_4020fb()
{
 test_cpp_rtti();
 return;
}


// Function: _Z13test_cpp_rttiv at 0x402100
extern unsigned int _GLOBAL_OFFSET_TABLE_;

void test_cpp_rtti()
{
 void* *v0; // [bp-0x50]
 void* *v1; // [bp-0x4c]
 void* *v2; // [bp-0x48]
 unsigned int v3; // [bp-0x44]
 void* *v4; // [bp-0x40]
 unsigned int v5; // [bp-0x3c]
 void* *v6; // [bp-0x38]
 void* *v7; // [bp-0x34]
 void* *v8; // [bp-0x30]
 unsigned int v9; // [bp-0x2c]
 void* *v10; // [bp-0x28]
 void* *v11; // [bp-0x24]
 unsigned int flag3; // [bp-0x20]
 unsigned int flag2; // [bp-0x1c]
 unsigned int cur; // [bp-0x18]
 void* *flag1; // [bp-0x14]
 void* *result; // [bp-0x10]

 v9 = (unsigned int)&_GLOBAL_OFFSET_TABLE_;
 v8 = operatornew(4);
 memset(v8, 0, 4);
 RTTIDerivedA_RTTIDerivedA(v8);
 result = v8;
 v10 = operatornew(4);
 memset(v10, 0, 4);
 RTTIDerivedB_RTTIDerivedB(v10);
 flag1 = v10;
 cur = 0;
 v11 = result;
 if (!result)
 __cxa_bad_typeid();
 // RTTI type_info comparison stubbed
 v7 = flag1;
 if (!flag1)
 __cxa_bad_typeid();
 // RTTI type_info comparison stubbed
 v6 = result;
 v5 = (!result ? NULL : __dynamic_cast(v6, v9 - 1004, v9 - 996, NULL));
 flag2 = v5;
 if (flag2)
 cur += RTTIDerivedA_derivedA_data(flag2);
 v4 = flag1;
 v3 = (!flag1 ? NULL : __dynamic_cast(v4, v9 - 1004, v9 - 984, NULL));
 flag3 = v3;
 if (flag3)
 cur += RTTIDerivedB_derivedB_data(flag3);
 v2 = result;
 if (!result)
 __cxa_bad_typeid();
 // type_info::name stubbed
 v1 = result;
 if (result)
 RTTIBase_RTTIBase_dtor(v1);
 v0 = flag1;
 if (flag1)
 RTTIBase_RTTIBase_dtor(v0);
 return;
}


// Function: sub_402399 at 0x402399
int sub_402399()
{
 test_cpp_oo_features();
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x4023a0
extern unsigned int _GLOBAL_OFFSET_TABLE_;
extern char g_40500d;

void test_cpp_oo_features()
{
 unsigned int v0; // [bp-0x18]
 char *v1; // [bp-0xc]

 v1 = (char*)&_GLOBAL_OFFSET_TABLE_;
 printf(&g_40500d);
 v0 = (unsigned int)test_cpp_member_func();
 printf(v1 + 16334);
 v0 = (unsigned int)test_cpp_constructor();
 printf(v1 + 16304);
 v0 = (unsigned int)test_cpp_virtual_func();
 printf(v1 + 16276);
 v0 = (unsigned int)test_cpp_multiple_inheritance();
 printf(v1 + 16248);
 v0 = (unsigned int)test_cpp_diamond_inheritance();
 printf(v1 + 16220);
 v0 = (unsigned int)test_cpp_operator_overload();
 printf(v1 + 16191);
 v0 = (unsigned int)test_cpp_template_func();
 printf(v1 + 16163);
 v0 = (unsigned int)test_cpp_template_class();
 printf(v1 + 16135);
 v0 = (unsigned int)test_cpp_lambda();
 printf(v1 + 16107);
 v0 = (unsigned int)test_cpp_exception();
 printf(v1 + 16079);
 v0 = (unsigned int)test_cpp_smart_ptr();
 printf(v1 + 16050);
 v0 = (unsigned int)test_cpp_rtti();
 printf(v1 + 16021);
 return;
}


// Function: sub_402526 at 0x402526
int sub_402526()
{
 main();
 return;
}


// Function: main at 0x402530
unsigned int main()
{
 unsigned int v2; // eax
 unsigned int v0; // [bp-0xc]

 v0 = v2;
 v0 = 0;
 test_cpp_oo_features();
 return 0;
}


// Function: sub_402555 at 0x402555
int sub_402555()
{
 std::__uniq_ptr_data<int, test_cpp_smart_ptr()::__dollar__2, true, false>::__uniq_ptr_data<test_cpp_smart_ptr()::__dollar__2 const&>(int*, test_cpp_smart_ptr()::__dollar__2 const&)();
 return;
}


// Function: _ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3__dollar__2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_ at 0x402560
int std_uniq_ptr_data_int_dollar_2_constructor(char *a0, unsigned int *a1, int a2, int a3, int a4, int a5)
{
 (void)a1; (void)a2; (void)a3; (void)a4; (void)a5;
 return std_uniq_ptr_impl_int_dollar_2_constructor(a0, a1, a2);
}


// Function: sub_40259b at 0x40259b
int sub_40259b()
{
 std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::__dollar__2>::__uniq_ptr_impl<test_cpp_smart_ptr()::__dollar__2 const&>(int*, test_cpp_smart_ptr()::__dollar__2 const&)();
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3__dollar__2EC2IRKS0_EEPiOT_ at 0x4025a0
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int std_uniq_ptr_impl_int_dollar_2_constructor(char *a0, unsigned int *a1, int a2)
{
 unsigned int v0; // [bp-0x10]
 char v1; // [bp+0x8]
 char v2; // [bp+0xc]

 v0 = (unsigned int)&_GLOBAL_OFFSET_TABLE_;
 (void)a1; (void)a2;
 return std_tuple_int_dollar_2_constructor_2(a0, &v1, test_cpp_smart_ptr_dollar_2_forward(*((int *)&v2)));
}


// Function: sub_4025ef at 0x4025ef
void sub_4025ef(unsigned int a0)
{
 test_cpp_smart_ptr()::__dollar__2 const& std::forward<test_cpp_smart_ptr()::__dollar__2 const&>(std::remove_reference<test_cpp_smart_ptr()::__dollar__2 const&>::type&)();
 return;
}


// Function: _ZSt7forwardIRKZ18test_cpp_smart_ptrvE3__dollar__2EOT_RNSt16remove_referenceIS3_E4typeE at 0x4025f0
int test_cpp_smart_ptr_dollar_2_forward(unsigned int a0)
{
 return a0;
}


// Function: sub_4025fb at 0x4025fb
int sub_4025fb()
{
 std::tuple<int*, test_cpp_smart_ptr()::__dollar__2>::tuple<int*&, test_cpp_smart_ptr()::__dollar__2 const&, true>(int*&, test_cpp_smart_ptr()::__dollar__2 const&)();
 return;
}


// Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvE3__dollar__2EEC2IRS0_RKS1_Lb1EEEOT_OT0_ at 0x402600
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int std_tuple_int_dollar_2_constructor_2(char *a0, unsigned int *a1, int a2)
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp+0x8]
 char v3; // [bp+0xc]

 v0 = (unsigned int)&_GLOBAL_OFFSET_TABLE_;
 (void)a0; (void)a1; (void)a2;
 v1 = v2;
 return std_Tuple_impl_0u_int_ptr_dollar_2_constructor(a0, v1, test_cpp_smart_ptr_dollar_2_forward(*((int *)&v3)));
}


// Function: sub_40266a at 0x40266a
void sub_40266a()
{
 unsigned int v1; // eax

 __clang_call_terminate(v1); /* do not return */
}


// Function: sub_402675 at 0x402675
int sub_402675()
{
 std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::__dollar__2>::_Tuple_impl<int*&, test_cpp_smart_ptr()::__dollar__2 const&, void>(int*&, test_cpp_smart_ptr()::__dollar__2 const&)();
 return;
}


// Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvE3__dollar__2EEC2IRS0_JRKS1_EvEEOT_DpOT0_ at 0x402680
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int std_Tuple_impl_0u_int_ptr_dollar_2_constructor(char *a0, unsigned int a1, unsigned int a2)
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]
 unsigned int v4; // [bp+0x4]
 unsigned int v5; // [bp+0x8]
 char v6; // [bp+0xc]

 v2 = (unsigned int)&_GLOBAL_OFFSET_TABLE_;
 (void)a0; (void)a1; (void)a2;
 v1 = v4;
 v0 = v1;
 std_Tuple_impl_1u_dollar_2_constructor(v0, *((int *)&v6));
 v3 = v1;
 (void)v3; (void)v5;
 return 0;
}


// Function: sub_4026f1 at 0x4026f1
int sub_4026f1()
{
 std::_Tuple_impl<1u, test_cpp_smart_ptr()::__dollar__2>::_Tuple_impl(test_cpp_smart_ptr()::__dollar__2 const&)();
 return;
}


// Function: _ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvE3__dollar__2EEC2ERKS0_ at 0x402700
int std_Tuple_impl_1u_dollar_2_constructor(unsigned int a0, unsigned int a1)
{
 return std_Head_base_1u_dollar_2_constructor(a0, a1);
}


// Function: sub_402731 at 0x402731
void sub_402731(unsigned int a0)
{
 std::_Head_base<1u, test_cpp_smart_ptr()::__dollar__2, true>::_Head_base(test_cpp_smart_ptr()::__dollar__2 const&)();
 return;
}


// Function: _ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvE3__dollar__2Lb1EEC2ERKS0_ at 0x402740
int std_Head_base_1u_dollar_2_constructor(unsigned int a0, unsigned int a1)
{
 (void)a0; (void)a1;
 return 0;
}


// Function: sub_40274b at 0x40274b
int sub_40274b()
{
 std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::__dollar__2>::_M_ptr()();
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3__dollar__2E6_M_ptrEv at 0x402750
int std_uniq_ptr_impl_int_dollar_2_M_ptr(unsigned int a0)
{
 char v0; // [bp-0x8]
 char v1; // [bp+0x0]

 (void)v0; (void)v1;
 return (int)a0;
}


// Function: sub_402775 at 0x402775
int sub_402775()
{
 std::unique_ptr<int, test_cpp_smart_ptr()::__dollar__2>::get_deleter()();
 return;
}


// Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3__dollar__2E11get_deleterEv at 0x402780
extern unsigned int _GLOBAL_OFFSET_TABLE_;

unsigned int std_unique_ptr_int_dollar_2_get_deleter(unsigned int a0)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v0 = (unsigned int)&_GLOBAL_OFFSET_TABLE_;
 v1 = (unsigned int)std_uniq_ptr_impl_int_dollar_2_M_deleter(a0);
 return v1;
}


// Function: sub_4027b6 at 0x4027b6
void sub_4027b6()
{
 unsigned int v1; // eax

 __clang_call_terminate(v1); /* do not return */
}


// Function: sub_4027c1 at 0x4027c1
int sub_4027c1()
{
 test_cpp_smart_ptr()::__dollar__2::operator()(int*) const();
 return;
}


// Function: _ZZ18test_cpp_smart_ptrvENK3__dollar__2clEPi at 0x4027d0
extern unsigned int _GLOBAL_OFFSET_TABLE_;

unsigned int * test_cpp_smart_ptr_dollar_2_operator(unsigned int a0, unsigned int *ptr)
{
 unsigned int *result; // eax
 unsigned int v0; // [bp-0x10]
 unsigned int *v1; // [bp-0xc]

 (void)a0;
 v0 = (unsigned int)&_GLOBAL_OFFSET_TABLE_;
 if (ptr) *ptr = 4294967295;
 result = ptr;
 v1 = result;
 if (result)
 operatordelete(v1);
 return 0;
}


// Function: sub_402818 at 0x402818
int sub_402818()
{
 std::tuple_element<0u, std::tuple<int*, test_cpp_smart_ptr()::__dollar__2>>::type& std::get<0u, int*, test_cpp_smart_ptr()::__dollar__2>(std::tuple<int*, test_cpp_smart_ptr()::__dollar__2>&)();
 return;
}


// Function: _ZSt3getILj0EJPiZ18test_cpp_smart_ptrvE3__dollar__2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ at 0x402820
int std_get_0u_int_ptr_dollar_2(int a0, int a1, int a2)
{
 char v0; // [bp-0x8]
 char v1; // [bp+0x0]

 (void)a0; (void)a1; (void)a2; (void)v0; (void)v1;
 return 0;
}


// Function: sub_402845 at 0x402845
int sub_402845()
{
 int*& std::__get_helper<0u, int*, test_cpp_smart_ptr()::__dollar__2>(std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::__dollar__2>&)();
 return;
}


// Function: _ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvE3__dollar__2EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x402850
int std_get_helper_0u_int_ptr_dollar_2(int a0, int a1, int a2)
{
 char v0; // [bp-0x8]
 char v1; // [bp+0x0]

 (void)a0; (void)a1; (void)a2; (void)v0; (void)v1;
 return 0;
}


// Function: sub_402875 at 0x402875
int sub_402875()
{
 std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::__dollar__2>::_M_head(std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::__dollar__2>&)();
 return;
}


// Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvE3__dollar__2EE7_M_headERS2_ at 0x402880
int std_Tuple_impl_0u_M_head(int a0, int a1, int a2)
{
 char v0; // [bp-0x8]
 char v1; // [bp+0x0]

 (void)a0; (void)a1; (void)a2; (void)v0; (void)v1;
 return 0;
}


// Function: sub_4028a5 at 0x4028a5
int sub_4028a5()
{
 std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::__dollar__2>::_M_deleter()();
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3__dollar__2E10_M_deleterEv at 0x4028b0
int std_uniq_ptr_impl_int_dollar_2_M_deleter(unsigned int a0)
{
 char v0; // [bp-0x8]
 char v1; // [bp+0x0]

 (void)a0; (void)v0; (void)v1;
 return 0;
}


// Function: sub_4028d5 at 0x4028d5
int sub_4028d5()
{
 std::tuple_element<1u, std::tuple<int*, test_cpp_smart_ptr()::__dollar__2>>::type& std::get<1u, int*, test_cpp_smart_ptr()::__dollar__2>(std::tuple<int*, test_cpp_smart_ptr()::__dollar__2>&)();
 return;
}


// Function: _ZSt3getILj1EJPiZ18test_cpp_smart_ptrvE3__dollar__2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ at 0x4028e0
int std_get_1u_int_ptr_dollar_2(int a0, int a1, int a2)
{
 char v0; // [bp-0x8]
 char v1; // [bp+0x0]

 (void)a0; (void)a1; (void)a2; (void)v0; (void)v1;
 return 0;
}


// Function: sub_402905 at 0x402905
int sub_402905()
{
 test_cpp_smart_ptr()::__dollar__2& std::__get_helper<1u, test_cpp_smart_ptr()::__dollar__2>(std::_Tuple_impl<1u, test_cpp_smart_ptr()::__dollar__2>&)();
 return;
}


// Function: _ZSt12__get_helperILj1EZ18test_cpp_smart_ptrvE3__dollar__2JEERT0_RSt11_Tuple_implIXT_EJS1_DpT1_EE at 0x402910
int std_get_helper_1u_dollar_2(int a0, int a1, int a2)
{
 char v0; // [bp-0x8]
 char v1; // [bp+0x0]

 (void)a0; (void)a1; (void)a2; (void)v0; (void)v1;
 return 0;
}


// Function: sub_402935 at 0x402935
int sub_402935()
{
 std::_Tuple_impl<1u, test_cpp_smart_ptr()::__dollar__2>::_M_head(std::_Tuple_impl<1u, test_cpp_smart_ptr()::__dollar__2>&)();
 return;
}


// Function: _ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvE3__dollar__2EE7_M_headERS1_ at 0x402940
int std_Tuple_impl_1u_M_head(int a0, int a1, int a2)
{
 char v0; // [bp-0x8]
 char v1; // [bp+0x0]

 (void)a0; (void)a1; (void)a2; (void)v0; (void)v1;
 return 0;
}


// Function: sub_402965 at 0x402965
void sub_402965(unsigned int a0)
{
 std::_Head_base<1u, test_cpp_smart_ptr()::__dollar__2, true>::_M_head(std::_Head_base<1u, test_cpp_smart_ptr()::__dollar__2, true>&)();
 return;
}


// Function: _ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvE3__dollar__2Lb1EE7_M_headERS1_ at 0x402970
int std_Head_base_1u_M_head(int a0, int a1, int a2)
{
 (void)a0; (void)a1; (void)a2;
 return 0;
}


// Function: sub_40297b at 0x40297b
int sub_40297b()
{
 std::unique_ptr<int, test_cpp_smart_ptr()::__dollar__2>::get() const();
 return;
}


// Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3__dollar__2E3getEv at 0x402980
extern unsigned int _GLOBAL_OFFSET_TABLE_;

unsigned int std_unique_ptr_int_dollar_2_get(unsigned int a0)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v0 = (unsigned int)&_GLOBAL_OFFSET_TABLE_;
 v1 = (unsigned int)std_uniq_ptr_impl_int_dollar_2_M_ptr_const(a0);
 return v1;
}


// Function: sub_4029b6 at 0x4029b6
void sub_4029b6()
{
 unsigned int v1; // eax

 __clang_call_terminate(v1); /* do not return */
}


// Function: sub_4029c1 at 0x4029c1
int sub_4029c1()
{
 std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::__dollar__2>::_M_ptr() const();
 return;
}


// Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3__dollar__2E6_M_ptrEv at 0x4029d0
int std_uniq_ptr_impl_int_dollar_2_M_ptr_const(unsigned int a0)
{
 char v0; // [bp-0x8]
 char v1; // [bp+0x0]

 (void)a0; (void)v0; (void)v1;
 return 0;
}


// Function: sub_4029f7 at 0x4029f7
int sub_4029f7()
{
 std::tuple_element<0u, std::tuple<int*, test_cpp_smart_ptr()::__dollar__2>>::type const& std::get<0u, int*, test_cpp_smart_ptr()::__dollar__2>(std::tuple<int*, test_cpp_smart_ptr()::__dollar__2> const&)();
 return;
}


// Function: _ZSt3getILj0EJPiZ18test_cpp_smart_ptrvE3__dollar__2EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ at 0x402a00
int std_get_0u_int_ptr_dollar_2_const(int a0, int a1, int a2)
{
 char v0; // [bp-0x8]
 char v1; // [bp+0x0]

 (void)a0; (void)a1; (void)a2; (void)v0; (void)v1;
 return 0;
}


// Function: sub_402a25 at 0x402a25
int sub_402a25()
{
 int* const& std::__get_helper<0u, int*, test_cpp_smart_ptr()::__dollar__2>(std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::__dollar__2> const&)();
 return;
}


// Function: _ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvE3__dollar__2EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x402a30
int std_get_helper_0u_int_ptr_dollar_2_const(int a0, int a1, int a2)
{
 char v0; // [bp-0x8]
 char v1; // [bp+0x0]

 (void)a0; (void)a1; (void)a2; (void)v0; (void)v1;
 return 0;
}


// Function: sub_402a55 at 0x402a55
int sub_402a55()
{
 std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::__dollar__2>::_M_head(std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::__dollar__2> const&)();
 return;
}


// Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvE3__dollar__2EE7_M_headERKS2_ at 0x402a60
int std_Tuple_impl_0u_M_head_const(int a0, int a1, int a2)
{
 char v0; // [bp-0x8]
 char v1; // [bp+0x0]

 (void)a0; (void)a1; (void)a2; (void)v0; (void)v1;
 return 0;
}


// Function: sub_402a85 at 0x402a85
int sub_402a85()
{
 SimpleClass::SimpleClass();
 return;
}


// Function: _ZN11SimpleClassC2EiPKc at 0x402a90
typedef struct struct_simpleclass_0 {
 unsigned int field_0;
 char padding_4[31];
 char field_23;
} struct_simpleclass_0;

int SimpleClass_SimpleClass_impl()
{
 struct_0 *ptr; // [bp-0xc]
 struct_0 *p; // [bp+0x4]
 unsigned int v2; // [bp+0x8]
 char v3; // [bp+0xc]

 ptr = p;
 p->field_0 = v2;
 strncpy(&p->padding_4, *((int *)&v3), 31);
 ptr->field_23 = 0;
 return ptr;
}


// Function: sub_402ade at 0x402ade
void sub_402ade(unsigned int a0, unsigned int a1)
{
 SimpleClass::setValue();
 return;
}


// Function: _ZN11SimpleClass8setValueEi at 0x402ae0
int SimpleClass_setValue_impl()
{
 unsigned int *ptr; // [bp+0x4]
 char v1; // [bp+0x8]

 *(ptr) = *((int *)&v1);
 return ptr;
}


// Function: sub_402af3 at 0x402af3
void sub_402af3(unsigned int a0)
{
 SimpleClass::getValue();
 return;
}


// Function: _ZNK11SimpleClass8getValueEv at 0x402b00
int SimpleClass_getValue_impl()
{
 unsigned int *v0; // [bp+0x4]

 return *(v0);
}


// Function: sub_402b0d at 0x402b0d
int sub_402b0d()
{
 SimpleClass::compute();
 return;
}


// Function: _ZNK11SimpleClass7computeEi at 0x402b10
int SimpleClass_compute_impl()
{
 unsigned int v0; // [bp-0xc]
 unsigned int *ptr; // [bp+0x4]
 char v2; // [bp+0x8]

 v0 = *((int *)&v2) * *(ptr);
 return v0 + strlen(ptr + 1);
}


// Function: sub_402b4e at 0x402b4e
void sub_402b4e()
{
 SimpleClass::getClassID();
 return;
}


// Function: _ZN11SimpleClass10getClassIDEv at 0x402b50
int SimpleClass_getClassID_impl()
{
 return 4660;
}


// Function: sub_402b5a at 0x402b5a
int sub_402b5a()
{
 LifecycleClass::LifecycleClass();
 return;
}


// Function: _ZN14LifecycleClassC2Ej at 0x402b60
typedef struct struct_lifecycle_0 {
    char padding_0[132];
    unsigned int field_84;
} struct_lifecycle_0;

extern unsigned int _GLOBAL_OFFSET_TABLE_;
extern struct_lifecycle_0 _GLO;

int LifecycleClass_LifecycleClass_impl()
{
 unsigned int v5; // eax
 struct_0 *p; // [bp-0x14]
 unsigned int ptr[2]; // [bp-0x10]
 unsigned int index; // [bp-0xc]
 unsigned int addr[2]; // [bp+0x4]
 char v4; // [bp+0x8]

 p = (struct_0 *)&_GLOBAL_OFFSET_TABLE_;
 ptr[0] = (unsigned int)addr;
 addr[1] = *((int *)&v4);
 v5 = *((int *)&v4) * 4;
 if ((char)(*((int *)&v4) >= 0x20000000 ? 1 : 0))
 v5 = 4294967295;
 ptr[0] = (unsigned int)operatornew[](v5);
 for (index = 0; index < *((int *)&v4); index += 1)
 {
 *((unsigned int *)(ptr[0] + index * 4)) = index * 10;
 }
 p->field_84 = p->field_84 + 1;
 return (int)p;
}


// Function: sub_402bf4 at 0x402bf4
void sub_402bf4(unsigned int a0, unsigned int a1)
{
 LifecycleClass::getData();
 return;
}


// Function: _ZNK14LifecycleClass7getDataEj at 0x402c00
int LifecycleClass_getData_impl()
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1[2]; // [bp-0x8]
 unsigned int v2[2]; // [bp+0x4]
 char v3; // [bp+0x8]

 v1[0] = v2;
 v0 = (*((int *)&v3) < v2[1] ? *((int *)(v1[0] + *((int *)&v3) * 4)) : 4294967295);
 return v0;
}


// Function: sub_402c46 at 0x402c46
void sub_402c46()
{
 LifecycleClass::getInstanceCount();
 return;
}


// Function: _ZN14LifecycleClass16getInstanceCountEv at 0x402c50
unsigned int LifecycleClass_getInstanceCount_impl()
{
 return 0;
}


// Function: sub_402c67 at 0x402c67
int sub_402c67()
{
 return;
}


// Function: _ZN14LifecycleClassD2Ev at 0x402c70

int LifecycleClass_LifecycleClass_dtor_impl(void* ptr)
{
 struct_0 *p; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 p = (struct_0 *)&_GLOBAL_OFFSET_TABLE_;
 v1 = *((int *)ptr);
 if (*((int *)ptr))
 operatordelete[]((void*)v1);
 p->field_84 = p->field_84 - 1;
 return 0;
}


// Function: _ZN4BaseC2Ev at 0x402cc0
extern char g_408c3c;

int Base_Base_impl()
{
 unsigned int ptr; // eax
 unsigned int v0; // [bp+0x4]

 ptr = v0;
 *((char **)ptr) = &g_408c3c;
 return ptr;
}


// Function: sub_402ce2 at 0x402ce2
int sub_402ce2()
{
 Derived::Derived();
 return;
}


// Function: _ZN7DerivedC2Ei at 0x402cf0
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int Derived_Derived()
{
 struct_0 *v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x10]
 struct_0 *ptr; // [bp-0xc]
 struct_0 *v3; // [bp+0x4]
 char v4; // [bp+0x8]

 v1 = &_GLOBAL_OFFSET_TABLE_;
 ptr = v3;
 v0 = ptr;
 Base_Base();
 *((unsigned int *)&ptr->padding_0[0]) = v1 - 932;
 ptr->field_4 = *((int *)&v4);
 return ptr;
}


// Function: sub_402d37 at 0x402d37
void sub_402d37(unsigned int a0, unsigned int a1)
{
 Base::virtual_func();
 return;
}


// Function: _ZN4Base12virtual_funcEi at 0x402d40
int Base_virtual_func()
{
 char v1; // [bp+0x8]

 return *((int *)&v1) + 1;
}


// Function: sub_402d51 at 0x402d51
void sub_402d51(unsigned int a0, unsigned int a1)
{
 Derived::virtual_func();
 return;
}


// Function: _ZN7Derived12virtual_funcEi at 0x402d60
int Derived_virtual_func()
{
 struct_0 *v0; // [bp+0x4]
 char v1; // [bp+0x8]

 return v0->field_4 * *((int *)&v1);
}


// Function: sub_402d75 at 0x402d75
int sub_402d75()
{
 return;
}


// Function: _ZN7DerivedD2Ev at 0x402d80
int Derived_Derived_dtor(void* this)
{
 return 0;
}


// Function: sub_402da5 at 0x402da5
void sub_402da5(unsigned int a0)
{
 return;
}


// Function: _ZN4BaseD2Ev at 0x402db0
int Base_Base_dtor(void* this)
{
 return 0;
}


// Function: sub_402db8 at 0x402db8
int sub_402db8()
{
 MultiDerived::MultiDerived();
 return;
}


// Function: _ZN12MultiDerivedC2Ev at 0x402dc0
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int MultiDerived_MultiDerived()
{
 unsigned int v0; // [bp-0x10]
 unsigned int ptr; // [bp-0xc]
 unsigned int v2; // [bp+0x4]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 ptr = v2;
 BaseA_BaseA(v2);
 BaseB_BaseB(ptr + 8);
 *((unsigned int *)ptr) = v0 - 896;
 *((unsigned int *)(ptr + 8)) = v0 - 872;
 return ptr;
}


// Function: sub_402e1b at 0x402e1b
int sub_402e1b()
{
 return;
}


// Function: _ZN12MultiDerivedD2Ev at 0x402e20
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int MultiDerived_MultiDerived_dtor(void* this)
{
 unsigned int v0; // [bp-0x10]
 void* v1; // [bp-0xc]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 v1 = this;
 return;
}


// Function: sub_402e5e at 0x402e5e
int sub_402e5e()
{
 DiamondDerived::DiamondDerived();
 return;
}


// Function: _ZN14DiamondDerivedC1Ev at 0x402e60
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int DiamondDerived_DiamondDerived()
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp+0x4]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 v1 = v2;
 VirtualBase_VirtualBase(v2 + 16);
 MiddleA_MiddleA(v1, v0 - 692);
 MiddleB_MiddleB(v1 + 8, v0 - 684);
 *((unsigned int *)v1) = v0 - 760;
 *((unsigned int *)(v1 + 16)) = v0 - 708;
 *((unsigned int *)(v1 + 8)) = v0 - 736;
 return v1;
}


// Function: sub_402ef2 at 0x402ef2
int sub_402ef2()
{
 return;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x402f00
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int DiamondDerived_DiamondDerived_dtor(void* this)
{
 unsigned int v0; // [bp-0x10]
 void* v1; // [bp-0xc]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 v1 = this;
 return;
}


// Function: sub_402f48 at 0x402f48
void sub_402f48(unsigned int a0, unsigned int a1, unsigned int a2)
{
 Point::Point();
 return;
}


// Function: _ZN5PointC2Eii at 0x402f50
int Point_Point_impl(void* ptr, int arg_0, int arg_1)
{
 *((int *)ptr) = arg_0;
 *((int *)&ptr[4]) = arg_1;
 return 0;
}


// Function: sub_402f6c at 0x402f6c
int sub_402f6c()
{
 Point::operator+();
 return;
}


// Function: _ZNK5PointplERKS_ at 0x402f70
int Point_operator_plus_impl(char *a0, char *a1)
{
 char v0; // [bp+0xc]

 Point_Point_impl(a0, *((int *)&a1) + *((int *)*((int *)&v0)), *((int *)&a1[4]) + *((int *)(*((int *)&v0) + 4)));
 return (int)a0;
}


// Function: sub_402fc1 at 0x402fc1
void sub_402fc1(unsigned int a0, unsigned int a1)
{
 Point::operator==();
 return;
}


// Function: _ZNK5PointeqERKS_ at 0x402fd0
void Point_operator_eq(void* ptr, void* p)
{
 char v0; // [bp-0x5]

 v0 = 0;
 if (*((int *)ptr) == *((int *)p))
 v0 = (int)ptr[4] == *((int *)(p + 4));
 return;
}


// Function: sub_403013 at 0x403013
void sub_403013(unsigned int a0)
{
 Point::operator++();
 return;
}


// Function: _ZN5PointppEv at 0x403020
int Point_operator_inc_impl()
{
 unsigned int ptr[2]; // eax
 unsigned int v0[2]; // [bp+0x4]

 ptr = v0;
 ptr[0] = ptr[0] + 1;
 ptr[1] = ptr[1] + 1;
 return (int)ptr;
}


// Function: sub_40303b at 0x40303b
void sub_40303b(unsigned int a0, unsigned int a1)
{
 template_max<int>();
 return;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x403040
int template_max_int(int arg_0, int arg_1)
{
 unsigned int v1; // eax
 unsigned int v0; // [bp-0x8]

 v0 = v1;
 v0 = (arg_0 <= arg_1 ? arg_1 : arg_0);
 return v0;
}


// Function: sub_40306f at 0x40306f
void sub_40306f(unsigned int a0)
{
 template_max<double>();
 return;
}


// Failed to decompile function _Z12template_maxIdET_S0_S0_ at 0x403070
// Function: _Z13template_swapIiEvRT_S1_ at 0x4030b0
void template_swap_int(int *ptr, int *p)
{
 unsigned int v0; // [bp-0x8]

 v0 = *((int *)ptr);
 *((int *)ptr) = *((int *)p);
 *((unsigned int *)p) = v0;
 return;
}


// Function: sub_4030d9 at 0x4030d9
void sub_4030d9(unsigned int a0)
{
 Container<int>::Container();
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x4030e0
int Container_int_Container_impl()
{
 struct_0 *ptr; // eax
 struct_0 *v0; // [bp+0x4]

 ptr = v0;
 ptr->field_28 = 0;
 return (int)ptr;
}


// Function: sub_4030f2 at 0x4030f2
void sub_4030f2(unsigned int a0)
{
 Container<int>::push();
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x403100
void Container_int_push_impl(void* this_ptr, int arg_0)
{
 unsigned int v1; // eax
 unsigned int index; // esi
 unsigned int ptr[11]; // [bp-0xc], Other Possible Types: unsigned int

 ptr = v1;
 ptr[0] = (unsigned int)this_ptr;
 if ((int)((unsigned int*)this_ptr)[10] < 10)
 {
 index = ptr[10];
 ptr[10] = index + 1;
 ptr[index] = arg_0;
 }
 return;
}


// Function: sub_403135 at 0x403135
void sub_403135(unsigned int a0, unsigned int a1)
{
 Container<int>::get();
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x403140
int Container_int_get_impl()
{
 unsigned int ptr[11]; // [bp-0xc]
 unsigned int v1; // [bp-0x8]
 unsigned int v2[11]; // [bp+0x4]
 char idx; // [bp+0x8]

 ptr[0] = (unsigned int)v2;
 if (*((int *)&idx) >= 0 && *((int *)&idx) < (int)ptr[10])
 {
 v1 = ptr[*((int *)&idx)];
 return v1;
 }
 v1 = 0;
 return v1;
}


// Function: sub_40318b at 0x40318b
void sub_40318b(unsigned int a0)
{
 Container<int>::getSize();
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x403190
int Container_int_getSize_impl()
{
 struct_0 *v0; // [bp+0x4]

 return v0->field_28;
}


// Function: sub_40319e at 0x40319e
void sub_40319e(unsigned int a0)
{
 Container<double>::Container();
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x4031a0
int Container_double_Container_impl()
{
 struct_0 *ptr; // eax
 struct_0 *v0; // [bp+0x4]

 ptr = v0;
 ptr->field_50 = 0;
 return (int)ptr;
}


// Function: sub_4031b2 at 0x4031b2
void sub_4031b2(unsigned int a0)
{
 Container<double>::push();
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x4031c0
int Container_double_push_impl()
{
 unsigned int idx; // ecx
 struct_0 *ptr; // [bp-0x10]
 double v1; // [bp-0xc], Other Possible Types: unsigned long
 struct_0 *v2; // [bp+0x4]

 // Removed decompilation artifact
 return (int)ptr;
}


// Function: sub_4031f8 at 0x4031f8
void sub_4031f8(unsigned int a0, unsigned int a1)
{
 Container<double>::get();
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x403200
int Container_double_get_impl()
{
 struct_0 *v5; // eax
 struct_0 *v0; // [bp-0x10]
 double v1; // [bp-0xc], Other Possible Types: unsigned int, unsigned long
 unsigned int result; // [bp-0x8]
 struct_0 *v3; // [bp+0x4]
 char v4; // [bp+0x8]

 v5 = v3;
 v0 = v5;
 if (*((int *)&v4) >= 0 && !((v5 = (struct_0*)*((int *)&v4), *((int *)&v4) >= (int)v0->field_50)))
 {
 v5 = v0;
 }
 else
 {
 result = 0;
 v1 = 0;
 }
 return (int)v5;
}


// Function: sub_403252 at 0x403252
void sub_403252(unsigned int a0)
{
 Container<double>::getSize();
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x403260
unsigned int Container_double_getSize_impl()
{
 return 0;
}


// Function: sub_40326e at 0x40326e
int sub_40326e()
{
 std::unique_ptr<int, std::default_delete<int>>::unique_ptr<std::default_delete<int>, void>();
 return;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi at 0x403270
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int std_unique_ptr_int_default_delete_int_constructor(char *a0)
{
 unsigned int v0; // [bp-0xc]
 char v1; // [bp+0x8]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 return std_uniq_ptr_data_int_default_delete_int_constructor(a0, *((int *)&v1));
}


// Function: sub_4032a9 at 0x4032a9
void sub_4032a9()
{
 unsigned int v1; // eax

 __clang_call_terminate(v1); /* do not return */
}


// Function: sub_4032b4 at 0x4032b4
int sub_4032b4()
{
 std::unique_ptr<int, std::default_delete<int>>::operator*();
 return;
}


// Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv at 0x4032c0
extern unsigned int _GLOBAL_OFFSET_TABLE_;

void std_unique_ptr_int_default_delete_int_deref(void* this)
{
 unsigned int v0; // [bp-0x10]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 std_unique_ptr_int_default_delete_int_get(this);
 return;
}


// Function: sub_4032f8 at 0x4032f8
void sub_4032f8(unsigned int a0)
{
 std::move<std::unique_ptr<int, std::default_delete<int>>&>();
 return;
}


// Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ at 0x403300
int std_move_unique_ptr_int_default_delete_int()
{
 unsigned int v0; // [bp+0x4]

 return v0;
}


// Function: sub_40330b at 0x40330b
int sub_40330b()
{
 std::unique_ptr<int, std::default_delete<int>>::unique_ptr();
 return;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_ at 0x403310
int std_unique_ptr_int_default_delete_int_copy()
{
 unsigned int v0; // [bp+0x4]
 char v1; // [bp+0x8]

 return std_uniq_ptr_data_int_default_delete_int_constructor(v0, *((int *)&v1));
}


// Function: sub_403341 at 0x403341
int sub_403341()
{
 std::unique_ptr<int[], std::default_delete<int[]>>::unique_ptr<int*, std::default_delete<int[]>, void, bool>();
 return;
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ at 0x403350
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int std_unique_ptr_int_array_default_delete_int_array_constructor(char *a0)
{
 unsigned int v0; // [bp-0xc]
 char v1; // [bp+0x8]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 return std_uniq_ptr_data_int_default_delete_int_array_constructor(a0, *((int *)&v1));
}


// Function: sub_403389 at 0x403389
void sub_403389()
{
 unsigned int v1; // eax

 __clang_call_terminate(v1); /* do not return */
}


// Function: sub_403394 at 0x403394
int sub_403394()
{
 std::unique_ptr<int[], std::default_delete<int[]>>::operator[]();
 return;
}


// Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEj at 0x4033a0
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int std_unique_ptr_int_array_default_delete_int_array_index()
{
 unsigned int v4; // eax
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp+0x4]
 char v3; // [bp+0x8]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 v1 = v2;
 v4 = std_unique_ptr_int_array_default_delete_int_array_get(v1);
 return v4 + *((int *)&v3) * 4;
}


// Function: sub_4033e3 at 0x4033e3
int sub_4033e3()
{
 return;
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev at 0x4033f0
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int std_unique_ptr_int_array_default_delete_int_array_destructor(void* this)
{
 unsigned int v2; // eax
 unsigned int v0; // [bp-0x14]
 unsigned int *v1; // [bp-0xc]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 v1 = std_uniq_ptr_impl_int_default_delete_int_array_M_ptr(this);
 if (*(v1))
 {
 v2 = std_unique_ptr_int_array_default_delete_int_array_get_deleter(this);
 std_default_delete_int_array_operator_int(v2, *(v1));
 }
 *(v1) = 0;
 return;
}


// Function: sub_403464 at 0x403464
void sub_403464()
{
 unsigned int v1; // eax

 __clang_call_terminate(v1); /* do not return */
}


// Function: sub_40346f at 0x40346f
int sub_40346f()
{
 return;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev at 0x403470
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int std_unique_ptr_int_default_delete_int_destructor(void* this)
{
 unsigned int *v3; // eax
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int *v2; // [bp-0xc]

 v1 = &_GLOBAL_OFFSET_TABLE_;
 v2 = std_uniq_ptr_impl_int_default_delete_int_M_ptr(this);
 if (*(v2))
 {
 v0 = std_unique_ptr_int_default_delete_int_get_deleter(this);
 v3 = std_move_int_ptr(v2);
 std_default_delete_int_operator(v0, *(v3));
 }
 *(v2) = 0;
 return;
}


// Function: sub_4034f4 at 0x4034f4
void sub_4034f4()
{
 unsigned int v1; // eax

 __clang_call_terminate(v1); /* do not return */
}


// Function: sub_4034ff at 0x4034ff
int sub_4034ff()
{
 RTTIDerivedA::RTTIDerivedA();
 return;
}


// Function: _ZN12RTTIDerivedAC2Ev at 0x403500
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int RTTIDerivedA::RTTIDerivedA()
{
 unsigned int v0; // [bp-0x10]
 unsigned int ptr; // [bp-0xc]
 unsigned int v2; // [bp+0x4]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 ptr = v2;
 RTTIBase::RTTIBase(v2);
 *((unsigned int *)ptr) = v0 - 328;
 return ptr;
}


// Function: sub_40353e at 0x40353e
int sub_40353e()
{
 RTTIDerivedB::RTTIDerivedB();
 return;
}


// Function: _ZN12RTTIDerivedBC2Ev at 0x403540
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int RTTIDerivedB::RTTIDerivedB()
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp+0x4]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 v1 = v2;
 RTTIBase::RTTIBase(v2);
 *((unsigned int *)v1) = v0 - 288;
 return v1;
}


// Function: sub_40357e at 0x40357e
int sub_40357e()
{
 std::type_info::operator==();
 return;
}


// Function: _ZNKSt9type_infoeqERKS_ at 0x403580
extern unsigned int _GLOBAL_OFFSET_TABLE_;

void std_type_info_operator_eq(void* this_ptr, void* arg_0)
{
 char v0; // [bp-0x15]
 unsigned int v1; // [bp-0x14]
 char v2; // [bp-0x9]

 v1 = &_GLOBAL_OFFSET_TABLE_;
 v2 = 1;
 if ((int)this_ptr[4] == *((int *)(arg_0 + 4)))
 return;
 v0 = 0;
 if (*((char *)(int)this_ptr[4]) != 42)
 v0 = !strcmp((int)this_ptr[4], *((int *)(arg_0 + 4)));
 v2 = v0;
 return;
}


// Function: sub_403605 at 0x403605
void sub_403605()
{
 RTTIDerivedA::derivedA_data();
 return;
}


// Function: _ZNK12RTTIDerivedA13derivedA_dataEv at 0x403610
int RTTIDerivedA_derivedA_data_impl()
{
 return 0;
}


// Function: sub_40361d at 0x40361d
void sub_40361d()
{
 RTTIDerivedB::derivedB_data();
 return;
}


// Function: _ZNK12RTTIDerivedB13derivedB_dataEv at 0x403620
int RTTIDerivedB_derivedB_data_impl()
{
 return 0;
}


// Function: sub_40362d at 0x40362d
void sub_40362d(unsigned int a0)
{
 std::type_info::name();
 return;
}


// Function: _ZNKSt9type_info4nameEv at 0x403630
void std_type_info_name(void* ptr)
{
 char *v0; // [bp-0xc], Other Possible Types: unsigned int

 if (*((char *)(int)ptr[4]) != 42)
 {
 v0 = (int)ptr[4];
 return;
 }
 v0 = (int)ptr[4] + 1;
 return;
}


// Function: _ZNK4Base7getNameEv at 0x403670
void Base_getName(void* this)
{
 return;
}


// Function: sub_40368a at 0x40368a
int sub_40368a()
{
 return;
}


// Function: _ZN4BaseD0Ev at 0x403690
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int Base_dtor(void* this)
{
 unsigned int v0; // [bp-0x10]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 operatordelete(this);
 return;
}


// Function: sub_4036cb at 0x4036cb
void sub_4036cb(unsigned int a0)
{
 Derived::getName();
 return;
}


// Function: _ZNK7Derived7getNameEv at 0x4036d0
void Derived_getName(void* this)
{
 return;
}


// Function: sub_4036ea at 0x4036ea
int sub_4036ea()
{
 return;
}


// Function: _ZN7DerivedD0Ev at 0x4036f0
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int Derived_dtor(void* this)
{
 unsigned int v0; // [bp-0x10]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 operatordelete(this);
 return;
}


// Function: sub_40372b at 0x40372b
void sub_40372b(unsigned int a0)
{
 BaseA::BaseA();
 return;
}


// Function: _ZN5BaseAC2Ev at 0x403730
extern char g_408cdc;

int BaseA_BaseA(void* ptr)
{
 *((char **)ptr) = &g_408cdc;
 return;
}


// Function: sub_403752 at 0x403752
void sub_403752(unsigned int a0)
{
 BaseB::BaseB();
 return;
}


// Function: _ZN5BaseBC2Ev at 0x403760
extern char g_408cf0;

int BaseB_BaseB(void* ptr)
{
 *((char **)ptr) = &g_408cf0;
 return;
}


// Function: sub_403782 at 0x403782
void sub_403782()
{
 MultiDerived::funcA();
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x403790
void MultiDerived_funcA(void* this)
{
 return;
}


// Function: sub_40379d at 0x40379d
int sub_40379d()
{
 return;
}


// Function: _ZN12MultiDerivedD0Ev at 0x4037a0
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int MultiDerived_dtor(void* this)
{
 unsigned int v0; // [bp-0x10]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 operatordelete(this);
 return;
}


// Function: sub_4037db at 0x4037db
void sub_4037db()
{
 MultiDerived::funcB();
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x4037e0
void MultiDerived_funcB(void* this)
{
 return;
}


// Function: sub_4037ed at 0x4037ed
int sub_4037ed()
{
 non-virtual thunk to MultiDerived::funcB()();
 return;
}


// Function: _ZThn8_N12MultiDerived5funcBEv at 0x4037f0
int non_virtual_thunk_to_MultiDerived_funcB(void* a0)
{
 return (unsigned int)MultiDerived_funcB(a0 - 8);
}


// Function: sub_403819 at 0x403819
int sub_403819()
{
 return;
}


// Function: _ZThn8_N12MultiDerivedD1Ev at 0x403820
int non_virtual_thunk_to_MultiDerived_dtor(unsigned int a0)
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_403849 at 0x403849
int sub_403849()
{
 return;
}


// Function: _ZThn8_N12MultiDerivedD0Ev at 0x403850
int non_virtual_thunk_to_MultiDerived_D0Ev(unsigned int a0)
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_403879 at 0x403879
void sub_403879()
{
 BaseA::funcA();
 return;
}


// Function: _ZN5BaseA5funcAEv at 0x403880
void BaseA_funcA(void* this)
{
 return;
}


// Function: sub_40388d at 0x40388d
void sub_40388d(unsigned int a0)
{
 return;
}


// Function: _ZN5BaseAD2Ev at 0x403890
int BaseA_dtor(void* this)
{
 return 0;
}


// Function: sub_403898 at 0x403898
int sub_403898()
{
 return;
}


// Function: _ZN5BaseAD0Ev at 0x4038a0
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int BaseA_dtor(void* this)
{
 unsigned int v0; // [bp-0x10]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 operatordelete(this);
 return;
}


// Function: sub_4038db at 0x4038db
void sub_4038db()
{
 BaseB::funcB();
 return;
}


// Function: _ZN5BaseB5funcBEv at 0x4038e0
void BaseB_funcB(void* this)
{
 return;
}


// Function: sub_4038ed at 0x4038ed
void sub_4038ed(unsigned int a0)
{
 return;
}


// Function: _ZN5BaseBD2Ev at 0x4038f0
int BaseB_dtor(void* this)
{
 return 0;
}


// Function: sub_4038f8 at 0x4038f8
int sub_4038f8()
{
 return;
}


// Function: _ZN5BaseBD0Ev at 0x403900
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int BaseB_dtor(void* this)
{
 unsigned int v0; // [bp-0x10]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 operatordelete(this);
 return;
}


// Function: sub_40393b at 0x40393b
void sub_40393b(unsigned int a0)
{
 VirtualBase::VirtualBase();
 return;
}


// Function: _ZN11VirtualBaseC2Ev at 0x403940
extern char g_408e2c;

int VirtualBase_VirtualBase(void* ptr)
{
 *((char **)ptr) = &g_408e2c;
 return;
}


// Function: sub_403962 at 0x403962
void sub_403962(unsigned int a0, unsigned int a1)
{
 MiddleA::MiddleA();
 return;
}


// Function: _ZN7MiddleAC2Ev at 0x403970
int MiddleA_MiddleA(void* ptr)
{
 unsigned int idx[2]; // ecx
 char v0; // [bp+0x8]

 idx = *((int *)&v0);
 *((unsigned int *)ptr) = idx[0];
 *((unsigned int *)((char *)ptr + *((int *)(*((int *)ptr) - 12)))) = idx[1];
 return;
}


// Function: _ZN7MiddleBC2Ev at 0x403990
int MiddleB_MiddleB(void* ptr)
{
 unsigned int idx[2]; // ecx
 char v0; // [bp+0x8]

 idx = *((int *)&v0);
 *((unsigned int *)ptr) = idx[0];
 *((unsigned int *)((char *)ptr + *((int *)(*((int *)ptr) - 12)))) = idx[1];
 return;
}


// Function: _ZN7MiddleA4funcEv at 0x4039b0
void MiddleA_func(void* this)
{
 return;
}


// Function: sub_4039c9 at 0x4039c9
int sub_4039c9()
{
 return;
}


// Function: _ZN7MiddleAD1Ev at 0x4039d0
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int MiddleA_dtor(void* this)
{
 unsigned int v0; // [bp-0x10]
 void* v1; // [bp-0xc]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 v1 = this;
 return;
}


// Function: sub_403a18 at 0x403a18
int sub_403a18()
{
 return;
}


// Function: _ZN7MiddleAD0Ev at 0x403a20
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int MiddleA_dtor(void* this)
{
 unsigned int v0; // [bp-0x10]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 operatordelete(this);
 return;
}


// Function: sub_403a5b at 0x403a5b
int sub_403a5b()
{
 thunk to MiddleA::func()();
 return;
}


// Function: _ZTv0_n12_N7MiddleA4funcEv at 0x403a60
int thunk_to_MiddleA_func(void* *a0)
{
 return (unsigned int)MiddleA_func((char *)a0 + (*(a0))[12]);
}


// Function: sub_403a8d at 0x403a8d
int sub_403a8d()
{
 return;
}


// Function: _ZTv0_n16_N7MiddleAD1Ev at 0x403a90
int thunk_to_MiddleA_dtor(unsigned int a0)
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_403abd at 0x403abd
int sub_403abd()
{
 return;
}


// Function: _ZTv0_n16_N7MiddleAD0Ev at 0x403ac0
int thunk_to_MiddleA_D0Ev(unsigned int a0)
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_403aed at 0x403aed
void sub_403aed(unsigned int a0)
{
 MiddleB::func();
 return;
}


// Function: _ZN7MiddleB4funcEv at 0x403af0
void MiddleB_func(void* this)
{
 return;
}


// Function: sub_403b09 at 0x403b09
int sub_403b09()
{
 return;
}


// Function: _ZN7MiddleBD1Ev at 0x403b10
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int MiddleB_dtor(void* this)
{
 unsigned int v0; // [bp-0x10]
 void* v1; // [bp-0xc]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 v1 = this;
 return;
}


// Function: sub_403b58 at 0x403b58
int sub_403b58()
{
 return;
}


// Function: _ZN7MiddleBD0Ev at 0x403b60
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int MiddleB_dtor(void* this)
{
 unsigned int v0; // [bp-0x10]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 operatordelete(this);
 return;
}


// Function: sub_403b9b at 0x403b9b
int sub_403b9b()
{
 thunk to MiddleB::func()();
 return;
}


// Function: _ZTv0_n12_N7MiddleB4funcEv at 0x403ba0
int thunk_to_MiddleB_func(void* *a0)
{
 return (unsigned int)MiddleB_func((char *)a0 + (*(a0))[12]);
}


// Function: sub_403bcd at 0x403bcd
int sub_403bcd()
{
 return;
}


// Function: _ZTv0_n16_N7MiddleBD1Ev at 0x403bd0
int thunk_to_MiddleB_dtor(unsigned int a0)
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_403bfd at 0x403bfd
int sub_403bfd()
{
 return;
}


// Function: _ZTv0_n16_N7MiddleBD0Ev at 0x403c00
int thunk_to_MiddleB_D0Ev(unsigned int a0)
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_403c2d at 0x403c2d
void sub_403c2d(unsigned int a0)
{
 DiamondDerived::func();
 return;
}


// Function: _ZN14DiamondDerived4funcEv at 0x403c30
void DiamondDerived_func(void* this)
{
 return;
}


// Function: sub_403c49 at 0x403c49
int sub_403c49()
{
 return;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x403c50
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int DiamondDerived_dtor(void* this)
{
 unsigned int v0; // [bp-0x10]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 operatordelete(this);
 return;
}


// Function: sub_403c8b at 0x403c8b
int sub_403c8b()
{
 non-virtual thunk to DiamondDerived::func()();
 return;
}


// Function: _ZThn8_N14DiamondDerived4funcEv at 0x403c90
int non_virtual_thunk_to_DiamondDerived_func(void* a0)
{
 return (unsigned int)DiamondDerived_func(a0 - 8);
}


// Function: sub_403cb9 at 0x403cb9
int sub_403cb9()
{
 return;
}


// Function: _ZThn8_N14DiamondDerivedD1Ev at 0x403cc0
int non_virtual_thunk_to_DiamondDerived_dtor(unsigned int a0)
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_403ce9 at 0x403ce9
int sub_403ce9()
{
 return;
}


// Function: _ZThn8_N14DiamondDerivedD0Ev at 0x403cf0
int non_virtual_thunk_to_DiamondDerived_D0Ev(unsigned int a0)
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_403d19 at 0x403d19
int sub_403d19()
{
 thunk to DiamondDerived::func()();
 return;
}


// Function: _ZTv0_n12_N14DiamondDerived4funcEv at 0x403d20
int thunk_to_DiamondDerived_func(void* *a0)
{
 return (unsigned int)DiamondDerived_func((char *)a0 + (*(a0))[12]);
}


// Function: sub_403d4d at 0x403d4d
int sub_403d4d()
{
 return;
}


// Function: _ZTv0_n16_N14DiamondDerivedD1Ev at 0x403d50
int thunk_to_DiamondDerived_dtor(unsigned int a0)
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_403d7d at 0x403d7d
int sub_403d7d()
{
 return;
}


// Function: _ZTv0_n16_N14DiamondDerivedD0Ev at 0x403d80
int thunk_to_DiamondDerived_D0Ev(unsigned int a0)
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_403dad at 0x403dad
void sub_403dad()
{
 VirtualBase::func();
 return;
}


// Function: _ZN11VirtualBase4funcEv at 0x403db0
void VirtualBase_func(void* this)
{
 return;
}


// Function: sub_403dbd at 0x403dbd
void sub_403dbd(unsigned int a0)
{
 return;
}


// Function: _ZN11VirtualBaseD2Ev at 0x403dc0
int VirtualBase_dtor(void* this)
{
 return 0;
}


// Function: sub_403dc8 at 0x403dc8
int sub_403dc8()
{
 return;
}


// Function: _ZN11VirtualBaseD0Ev at 0x403dd0
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int VirtualBase_dtor(void* this)
{
 unsigned int v0; // [bp-0x10]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 operatordelete(this);
 return;
}


// Function: sub_403e0b at 0x403e0b
void sub_403e0b(unsigned int a0)
{
 return;
}


// Function: _ZN7MiddleAD2Ev at 0x403e10
int MiddleA_dtor(void* this)
{
 return 0;
}


// Function: sub_403e1b at 0x403e1b
void sub_403e1b(unsigned int a0)
{
 return;
}


// Function: _ZN7MiddleBD2Ev at 0x403e20
int MiddleB_dtor(void* this)
{
 return 0;
}


// Function: sub_403e2b at 0x403e2b
int sub_403e2b()
{
 return;
}


// Function: _ZN14DiamondDerivedD2Ev at 0x403e30
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int DiamondDerived_dtor(void* this)
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 void* v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]
 char v4; // [bp+0x8]

 v1 = &_GLOBAL_OFFSET_TABLE_;
 v2 = this;
 v3 = *((int *)&v4);
 v0 = *((int *)&v4) + 12;
 v0 = v3 + 4;
 return;
}


// Function: sub_403e88 at 0x403e88
int sub_403e88()
{
 std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_data();
 return;
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ at 0x403e90
int std_uniq_ptr_data_int_default_delete_int_copy(void* this, void* arg_0)
{
 std_uniq_ptr_impl_int_default_delete_int_copy(this, arg_0);
 return;
}


// Function: sub_403ec1 at 0x403ec1
int sub_403ec1()
{
 std_uniq_ptr_impl_int_default_delete_int_constructor();
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_ at 0x403ed0
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int std_uniq_ptr_impl_int_default_delete_int_copy()
{
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]
 unsigned int *ptr; // [bp-0-c]
 unsigned int v3; // [bp+0x4]
 char v4; // [bp+0x8]

 v1 = &_GLOBAL_OFFSET_TABLE_;
 v0 = v3;
 std_tuple_int_ptr_default_delete_int_copy(v0, std_move_tuple_int_ptr_default_delete_int(v0, *((int *)&v4)));
 ptr = std_uniq_ptr_impl_int_default_delete_int_M_ptr(*((int *)&v4));
 *(ptr) = 0;
 return ptr;
}


// Function: sub_403f38 at 0x403f38
void sub_403f38()
{
 unsigned int v1; // eax

 __clang_call_terminate(v1); /* do not return */
}


// Function: sub_403f43 at 0x403f43
void sub_403f43(unsigned int a0)
{
 std_move_tuple_int_ptr_default_delete_int();
 return;
}


// Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ at 0x403f50
void* std_move_tuple_int_ptr_default_delete_int(void* this_ptr, void* arg_0)
{
 (void)arg_0;
 return this_ptr;
}


// Function: sub_403f5b at 0x403f5b
int sub_403f5b()
{
 std_tuple_int_ptr_default_delete_int_constructor();
 return;
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_ at 0x403f60
int std_tuple_int_ptr_default_delete_int_copy(void* this_ptr, void* arg_0)
{
 std_Tuple_impl_0u_int_ptr_default_delete_int_copy(this_ptr, arg_0);
 return;
}


// Function: sub_403f91 at 0x403f91
int sub_403f91()
{
 std_uniq_ptr_impl_int_default_delete_int_M_ptr();
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv at 0x403fa0
int std_uniq_ptr_impl_int_default_delete_int_M_ptr(void* this_ptr)
{
 char v0; // [bp-0x8]
 char v1; // [bp+0x0]
 unsigned int v2; // [bp+0x4]

 (void)this_ptr;
 return std_get_0u_int_ptr_default_delete_int(v2, *((int *)&v0), &v1);
}


// Function: sub_403fc5 at 0x403fc5
int sub_403fc5()
{
 __clang_call_terminate(); /* do not return */
}


// Function: __clang_call_terminate at 0x403fd0
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int __clang_call_terminate(void* a0)
{
 unsigned int v0; // ebx

 __cxa_begin_catch(a0, &_GLOBAL_OFFSET_TABLE_, v0);
 std_terminate(a0); /* do not return */
}


// Function: sub_403ff9 at 0x403ff9
int sub_403ff9()
{
 std::_Tuple_impl<0u, int*, std::default_delete<int>>::_Tuple_impl();
 return;
}


// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2EOS3_ at 0x404000
int std_Tuple_impl_0u_int_ptr_default_delete_int_Tuple_impl()
{
 unsigned int *ptr; // [bp-0xc]
 unsigned int *v1; // [bp+0x4]
 char v2; // [bp+0x8]

 ptr = v1;
 std::_Tuple_impl<1u, std::default_delete<int>>::_Tuple_impl(v1, *((int *)&v2));
 *(ptr) = *((int *)*((int *)&v2));
 return ptr;
}


// Function: sub_40403e at 0x40403e
void sub_40403e(unsigned int a0)
{
 std::_Tuple_impl<1u, std::default_delete<int>>::_Tuple_impl();
 return;
}


// Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2EOS2_ at 0x404040
int std_Tuple_impl_1u_default_delete_int_Tuple_impl()
{
 unsigned int v0; // [bp+0x4]

 return v0;
}


// Function: sub_40404b at 0x40404b
int sub_40404b()
{
 std::get<0u, int*, std::default_delete<int>>();
 return;
}


// Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ at 0x404050
int std_get_0u_int_ptr_default_delete_int(int a0, int a1)
{
 char v0; // [bp-0x8]
 char v1; // [bp+0x0]

 return std::__get_helper<0u, int*, std::default_delete<int>>(a0, *((int *)&v0), &v1);
}


// Function: sub_404075 at 0x404075
int sub_404075()
{
 std::__get_helper<0u, int*, std::default_delete<int>>();
 return;
}


// Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x404080
int std__get_helper_0u_int_ptr_default_delete_int(int a0, int a1)
{
 char v0; // [bp-0x8]
 char v1; // [bp+0x0]

 return std::_Tuple_impl<0u, int*, std::default_delete<int>>::_M_head(a0, *((int *)&v0), &v1);
}


// Function: sub_4040a5 at 0x4040a5
int sub_4040a5()
{
 std::_Tuple_impl<0u, int*, std::default_delete<int>>::_M_head();
 return;
}


// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERS3_ at 0x4040b0
int std_Tuple_impl_0u_int_ptr_default_delete_int_M_head(int a0, int a1)
{
 char v0; // [bp-0x8]
 char v1; // [bp+0x0]

 return std::_Head_base<0u, int*, false>::_M_head(a0, *((int *)&v0), &v1);
}


// Function: sub_4040d5 at 0x4040d5
void sub_4040d5(unsigned int a0)
{
 std::_Head_base<0u, int*, false>::_M_head();
 return;
}


// Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERS1_ at 0x4040e0
int std_Head_base_0u_int_ptr_false_M_head(int a0, int a1)
{
 return a0;
}


// Function: sub_4040eb at 0x4040eb
void sub_4040eb(unsigned int a0)
{
 RTTIBase::RTTIBase();
 return;
}


// Function: _ZN8RTTIBaseC2Ev at 0x4040f0
extern char g_408ecc;

int RTTIBase_RTTIBase(void* ptr)
{
 *((char **)ptr) = &g_408ecc;
 return;
}


// Function: sub_404112 at 0x404112
int sub_404112()
{
 return;
}


// Function: _ZN12RTTIDerivedAD2Ev at 0x404120
int RTTIDerivedA_dtor(void* this)
{
 return 0;
}


// Function: sub_404145 at 0x404145
int sub_404145()
{
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x404150
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int RTTIDerivedA_dtor(void* this)
{
 unsigned int v0; // [bp-0x10]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 operatordelete(this);
 return;
}


// Function: sub_40418b at 0x40418b
void sub_40418b()
{
 RTTIDerivedA::getType();
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x404190
void RTTIDerivedA_getType_impl()
{
 return;
}


// Function: sub_40419d at 0x40419d
void sub_40419d(unsigned int a0)
{
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x4041a0
int RTTIBase_dtor(void* this)
{
 return 0;
}


// Function: sub_4041a8 at 0x4041a8
int sub_4041a8()
{
 return;
}


// Function: _ZN8RTTIBaseD0Ev at 0x4041b0
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int RTTIBase_dtor(void* this)
{
 unsigned int v0; // [bp-0x10]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 operatordelete(this);
 return;
}


// Function: sub_4041eb at 0x4041eb
void sub_4041eb()
{
 RTTIBase::getType();
 return;
}


// Function: _ZNK8RTTIBase7getTypeEv at 0x4041f0
void RTTIBase_getType_impl()
{
 return;
}


// Function: sub_4041fa at 0x4041fa
int sub_4041fa()
{
 return;
}


// Function: _ZN12RTTIDerivedBD2Ev at 0x404200
int RTTIDerivedB_dtor(void* this)
{
 return 0;
}


// Function: sub_404225 at 0x404225
int sub_404225()
{
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x404230
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int RTTIDerivedB_dtor(void* this)
{
 unsigned int v0; // [bp-0x10]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 operatordelete(this);
 return;
}


// Function: sub_40426b at 0x40426b
void sub_40426b()
{
 RTTIDerivedB::getType();
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x404270
void RTTIDerivedB_getType_impl()
{
 return;
}


// Function: sub_40427d at 0x40427d
int sub_40427d()
{
 std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_data();
 return;
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi at 0x404280
int std_uniq_ptr_data_int_default_delete_int_true_true_uniq_ptr_data()
{
 unsigned int v0; // [bp+0x4]
 char v1; // [bp+0x8]

 return std_uniq_ptr_impl_int_default_delete_int_uniq_ptr_impl(v0, *((int *)&v1));
}


// Function: sub_4042b1 at 0x4042b1
int sub_4042b1()
{
 std::__uniq_ptr_impl<int, std::default_delete<int>>::__uniq_ptr_impl();
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi at 0x4042c0
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int std_uniq_ptr_impl_int_default_delete_int_uniq_ptr_impl(void* this, int *arg_0)
{
 unsigned int v0; // [bp-0x14]
 void* v1; // [bp-0x10]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 v1 = this;
 std_tuple_int_ptr_default_delete_int_tuple_true_true(this);
 *((int **)std_uniq_ptr_impl_int_default_delete_int_M_ptr()) = arg_0;
 return;
}


// Function: sub_404309 at 0x404309
int sub_404309()
{
 std::tuple<int*, std::default_delete<int>>::tuple<true, true>();
 return;
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv at 0x404310
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int std_tuple_int_ptr_default_delete_int_tuple_true_true()
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp+0x4]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 return std_Tuple_impl_0u_int_ptr_default_delete_int_Tuple_impl(v1);
}


// Function: sub_404340 at 0x404340
int sub_404340()
{
 void* v1; // eax

 __clang_call_terminate(v1); /* do not return */
}


// Function: sub_40434b at 0x40434b
int sub_40434b()
{
 std::_Tuple_impl<0u, int*, std::default_delete<int>>::_Tuple_impl();
 return;
}


// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2Ev at 0x404350
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int std_Tuple_impl_0u_int_ptr_default_delete_int_Tuple_impl_void(void* this)
{
 unsigned int v0; // [bp-0x10]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 std_Tuple_impl_1u_default_delete_int_Tuple_impl(this);
 std_Head_base_0u_int_ptr_false_Head_base(this);
 return;
}


// Function: sub_40438b at 0x40438b
int sub_40438b()
{
 std::_Tuple_impl<1u, std::default_delete<int>>::_Tuple_impl();
 return;
}


// Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2Ev at 0x404390
int std_Tuple_impl_1u_default_delete_int_Tuple_impl()
{
 char v0; // [bp-0x8]
 char v1; // [bp+0x0]
 unsigned int v2; // [bp+0x4]

 return std_Head_base_1u_default_delete_int_true_Head_base(v2, *((int *)&v0), &v1);
}


// Function: sub_4043b5 at 0x4043b5
void sub_4043b5(unsigned int a0)
{
 std::_Head_base<0u, int*, false>::_Head_base();
 return;
}


// Function: _ZNSt10_Head_baseILj0EPiLb0EEC2Ev at 0x4043c0
int std_Head_base_0u_int_ptr_false_Head_base()
{
 unsigned int *ptr; // eax
 unsigned int *v0; // [bp+0x4]

 ptr = v0;
 *(ptr) = 0;
 return ptr;
}


// Function: sub_4043d1 at 0x4043d1
void sub_4043d1(unsigned int a0)
{
 std::_Head_base<1u, std::default_delete<int>, true>::_Head_base();
 return;
}


// Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EEC2Ev at 0x4043e0
int std_Head_base_1u_default_delete_int_true_Head_base_func(int a0, int a1)
{
 return a0;
}


// Function: sub_4043e8 at 0x4043e8
int sub_4043e8()
{
 std::unique_ptr<int, std::default_delete<int>>::get_deleter();
 return;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv at 0x4043f0
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int std_unique_ptr_int_default_delete_int_get_deleter_func(void* this_ptr)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp+0x4]

 (void)this_ptr;
 v0 = &_GLOBAL_OFFSET_TABLE_;
 v1 = std_uniq_ptr_impl_int_default_delete_int_M_deleter_func(this_ptr);
 return v1;
}


// Function: sub_404426 at 0x404426
int sub_404426()
{
 void* v1; // eax

 __clang_call_terminate(v1); /* do not return */
}


// Function: sub_404431 at 0x404431
int sub_404431()
{
 std::default_delete<int>::operator()();
 return;
}


// Function: _ZNKSt14default_deleteIiEclEPi at 0x404440
extern unsigned int _GLOBAL_OFFSET_TABLE_;

void std_default_delete_int_operator(void* this_ptr, int *arg_0)
{
 unsigned int v0; // [bp-0x10]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 if (arg_0)
 operatordelete(arg_0);
 return;
}


// Function: sub_40447f at 0x40447f
void sub_40447f(unsigned int a0)
{
 std::move<int*&>();
 return;
}


// Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ at 0x404480
int std_move_int_ptr_ref()
{
 unsigned int v0; // [bp+0x4]

 return v0;
}


// Function: sub_40448b at 0x40448b
int sub_40448b()
{
 std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_deleter();
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv at 0x404490
int std_uniq_ptr_impl_int_default_delete_int_M_deleter_func(void* this_ptr)
{
 char v0; // [bp-0x8]
 char v1; // [bp+0x0]

 (void)this_ptr;
 return std_get_1u_int_ptr_default_delete_int(this_ptr, *((int *)&v0), &v1);
}


// Function: sub_4044b5 at 0x4044b5
int sub_4044b5()
{
 std::get<1u, int*, std::default_delete<int>>();
 return;
}


// Function: _ZSt3getILj1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ at 0x4044c0
int std_get_1u_int_ptr_default_delete_int(void* a0, int a1)
{
 char v0; // [bp-0x8]
 char v1; // [bp+0x0]

 return std::__get_helper<1u, std::default_delete<int>>(a0, *((int *)&v0), &v1);
}


// Function: sub_4044e5 at 0x4044e5
int sub_4044e5()
{
 std::__get_helper<1u, std::default_delete<int>>();
 return;
}


// Function: _ZSt12__get_helperILj1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x4044f0
int std__get_helper_1u_default_delete_int(void* a0, int a1)
{
 char v0; // [bp-0x8]
 char v1; // [bp+0x0]

 return std::_Tuple_impl<1u, std::default_delete<int>>::_M_head(a0, *((int *)&v0), &v1);
}


// Function: sub_404515 at 0x404515
int sub_404515()
{
 std::_Tuple_impl<1u, std::default_delete<int>>::_M_head();
 return;
}


// Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEE7_M_headERS2_ at 0x404520
int std_Tuple_impl_1u_default_delete_int_M_head(void* a0, int a1)
{
 char v0; // [bp-0x8]
 char v1; // [bp+0x0]

 return std::_Head_base<1u, std::default_delete<int>, true>::_M_head(a0, *((int *)&v0), &v1);
}


// Function: sub_404545 at 0x404545
void sub_404545(unsigned int a0)
{
 std::_Head_base<1u, std::default_delete<int>, true>::_M_head();
 return;
}


// Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EE7_M_headERS2_ at 0x404550
int std_Head_base_1u_default_delete_int_true_M_head(void* a0, int a1)
{
 return a0;
}


// Function: sub_40455b at 0x40455b
int sub_40455b()
{
 std::unique_ptr<int, std::default_delete<int>>::get();
 return;
}


// Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv at 0x404560
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int std_unique_ptr_int_default_delete_int_get_func(void* this_ptr)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp+0x4]

 (void)this_ptr;
 v0 = &_GLOBAL_OFFSET_TABLE_;
 v1 = std_uniq_ptr_impl_int_default_delete_int_M_ptr(this_ptr);
 return v1;
}


// Function: sub_404596 at 0x404596
int sub_404596()
{
 void* v1; // eax

 __clang_call_terminate(v1); /* do not return */
}


// Function: sub_4045a1 at 0x4045a1
int sub_4045a1()
{
 std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_ptr();
 return;
}


// Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv at 0x4045b0
int std_uniq_ptr_impl_int_default_delete_int_M_ptr_const(void* this_ptr)
{
 char v0; // [bp-0x8]
 char v1; // [bp+0x0]

 (void)this_ptr;
 return std_get_0u_int_ptr_default_delete_int_const(this_ptr, *((int *)&v0), &v1);
}


// Function: sub_4045d7 at 0x4045d7
int sub_4045d7()
{
 std::get<0u, int*, std::default_delete<int>>();
 return;
}


// Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ at 0x4045e0
int std_get_0u_int_ptr_default_delete_int_const(void* a0, int a1)
{
 char v0; // [bp-0x8]
 char v1; // [bp+0x0]

 return std::__get_helper<0u, int*, std::default_delete<int>>(a0, *((int *)&v0), &v1);
}


// Function: sub_404605 at 0x404605
int sub_404605()
{
 std::__get_helper<0u, int*, std::default_delete<int>>();
 return;
}


// Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x404610
int std__get_helper_0u_int_ptr_default_delete_int_const(void* a0, int a1)
{
 char v0; // [bp-0x8]
 char v1; // [bp+0x0]

 return std::_Tuple_impl<0u, int*, std::default_delete<int>>::_M_head(a0, *((int *)&v0), &v1);
}


// Function: sub_404635 at 0x404635
int sub_404635()
{
 std::_Tuple_impl<0u, int*, std::default_delete<int>>::_M_head();
 return;
}


// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERKS3_ at 0x404640
int std_Tuple_impl_0u_int_ptr_default_delete_int_M_head_const(void* a0, int a1)
{
 char v0; // [bp-0x8]
 char v1; // [bp+0x0]

 return std::_Head_base<0u, int*, false>::_M_head(a0, *((int *)&v0), &v1);
}


// Function: sub_404665 at 0x404665
void sub_404665(unsigned int a0)
{
 std::_Head_base<0u, int*, false>::_M_head();
 return;
}


// Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERKS1_ at 0x404670
int std_Head_base_0u_int_ptr_false_M_head_const(int a0, int a1)
{
 return a0;
}


// Function: sub_40467b at 0x40467b
int sub_40467b()
{
 std::__uniq_ptr_data<int, std::default_delete<int[]>, true, true>::__uniq_ptr_data();
 return;
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi at 0x404680
int std_uniq_ptr_data_int_default_delete_int_array_true_true_uniq_ptr_data()
{
 unsigned int v0; // [bp+0x4]
 char v1; // [bp+0x8]

 return std::__uniq_ptr_impl<int, std::default_delete<int[]>>::__uniq_ptr_impl(v0, *((int *)&v1));
}


// Function: sub_4046b1 at 0x4046b1
int sub_4046b1()
{
 std::__uniq_ptr_impl<int, std::default_delete<int[]>>::__uniq_ptr_impl();
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi at 0x4046c0
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int std_uniq_ptr_impl_int_default_delete_int_array_uniq_ptr_impl(void* this, int *arg_0)
{
 unsigned int v0; // [bp-0x14]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 std_tuple_int_ptr_default_delete_int_array_tuple_true_true(this);
 *((int **)std_uniq_ptr_impl_int_default_delete_int_array_M_ptr(this)) = arg_0;
 return;
}


// Function: sub_404709 at 0x404709
int sub_404709()
{
 std::tuple<int*, std::default_delete<int[]>>::tuple<true, true>();
 return;
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv at 0x404710
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int std_tuple_int_ptr_default_delete_int_array_tuple_true_true()
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp+0x4]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 return std::_Tuple_impl<0u, int*, std::default_delete<int[]>>::_Tuple_impl(v1);
}


// Function: sub_404740 at 0x404740
int sub_404740()
{
 void* v1; // eax

 __clang_call_terminate(v1); /* do not return */
}


// Function: sub_40474b at 0x40474b
int sub_40474b()
{
 std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_ptr();
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv at 0x404750
int std_uniq_ptr_impl_int_default_delete_int_array_M_ptr()
{
 char v0; // [bp-0x8]
 char v1; // [bp+0x0]
 unsigned int v2; // [bp+0x4]

 return std_get_0u_int_ptr_default_delete_int_array_func(v2, *((int *)&v0), &v1);
}


// Function: sub_404775 at 0x404775
int sub_404775()
{
 std::_Tuple_impl<0u, int*, std::default_delete<int[]>>::_Tuple_impl();
 return;
}


// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEEC2Ev at 0x404780
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int std_Tuple_impl_0u_int_ptr_default_delete_int_array_Tuple_impl_void(void* this)
{
 unsigned int v0; // [bp-0x10]
 void* v1; // [bp-0xc]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 v1 = this;
 std_Tuple_impl_1u_default_delete_int_array_Tuple_impl_void(this);
 std_Head_base_0u_int_ptr_false_Head_base_void();
 return;
}


// Function: sub_4047bb at 0x4047bb
int sub_4047bb()
{
 std::_Tuple_impl<1u, std::default_delete<int[]>>::_Tuple_impl();
 return;
}


// Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEEC2Ev at 0x4047c0
int std_Tuple_impl_1u_default_delete_int_array_Tuple_impl_void()
{
 char v0; // [bp-0x8]
 char v1; // [bp+0x0]
 unsigned int v2; // [bp+0x4]

 return std_Head_base_1u_default_delete_int_array_true_Head_base(v2, *((int *)&v0), &v1);
}


// Function: sub_4047e5 at 0x4047e5
void sub_4047e5(unsigned int a0)
{
 std::_Head_base<1u, std::default_delete<int[]>, true>::_Head_base();
 return;
}


// Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EEC2Ev at 0x4047f0
int std_Head_base_1u_default_delete_int_array_true_Head_base_void()
{
 return 0;
}


// Function: sub_4047f8 at 0x4047f8
int sub_4047f8()
{
 std::get<0u, int*, std::default_delete<int[]>>();
 return;
}


// Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ at 0x404800
int std_get_0u_int_ptr_default_delete_int_array_func(int a0, int a1)
{
 char v0; // [bp-0x8]
 char v1; // [bp+0x0]

 return std::__get_helper<0u, int*, std::default_delete<int[]>>(a0, *((int *)&v0), &v1);
}


// Function: sub_404825 at 0x404825
int sub_404825()
{
 std::__get_helper<0u, int*, std::default_delete<int[]>>();
 return;
}


// Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE at 0x404830
int std__get_helper_0u_int_ptr_default_delete_int_array_func(int a0, int a1)
{
 char v0; // [bp-0x8]
 char v1; // [bp+0x0]

 return std::_Tuple_impl<0u, int*, std::default_delete<int[]>>::_M_head(a0, *((int *)&v0), &v1);
}


// Function: sub_404855 at 0x404855
int sub_404855()
{
 std::_Tuple_impl<0u, int*, std::default_delete<int[]>>::_M_head();
 return;
}


// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ at 0x404860
int std_Tuple_impl_0u_int_ptr_default_delete_int_array_M_head_func(int a0, int a1)
{
 char v0; // [bp-0x8]

 return std::_Head_base<0u, int*, false>::_M_head(a0, *((int *)&v0));
}


// Function: sub_404885 at 0x404885
int sub_404885()
{
 std::unique_ptr<int[], std::default_delete<int[]>>::get_deleter();
 return;
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv at 0x404890
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int std_unique_ptr_int_array_default_delete_int_array_get_deleter_func()
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp+0x4]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 v1 = std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_deleter(v2);
 return v1;
}


// Function: sub_4048c6 at 0x4048c6
int sub_4048c6()
{
 void* v1; // eax

 __clang_call_terminate(v1); /* do not return */
}


// Function: sub_4048d1 at 0x4048d1
int sub_4048d1()
{
 std::default_delete<int[]>::operator()<int>();
 return;
}


// Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_ at 0x4048e0
extern unsigned int _GLOBAL_OFFSET_TABLE_;

void std_default_delete_int_array_operator_int(void* this_ptr, int *arg_0)
{
 unsigned int v0; // [bp-0x10]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 if (arg_0)
 operatordelete[](arg_0);
 return;
}


// Function: sub_40491f at 0x40491f
int sub_40491f()
{
 std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_deleter();
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv at 0x404920
void std_uniq_ptr_impl_int_default_delete_int_array_M_deleter(void* this_ptr)
{
 char v0; // [bp-0x8]
 char v1; // [bp+0x0]

 std_get_1u_int_ptr_default_delete_int_array(this_ptr, *((int *)&v0), &v1);
 return;
}


// Function: sub_404945 at 0x404945
int sub_404945()
{
 std::get<1u, int*, std::default_delete<int[]>>();
 return;
}


// Function: _ZSt3getILj1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ at 0x404950
int std_get_1u_int_ptr_default_delete_int_array_func(void* a0, int a1)
{
 char v0; // [bp-0x8]
 char v1; // [bp+0x0]

 return std::__get_helper<1u, std::default_delete<int[]>>(a0, *((int *)&v0), &v1);
}


// Function: sub_404975 at 0x404975
int sub_404975()
{
 std::__get_helper<1u, std::default_delete<int[]>>();
 return;
}


// Function: _ZSt12__get_helperILj1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x404980
int std__get_helper_1u_default_delete_int_array_func(void* a0, int a1)
{
 char v0; // [bp-0x8]
 char v1; // [bp+0x0]

 return std::_Tuple_impl<1u, std::default_delete<int[]>>::_M_head(a0, *((int *)&v0), &v1);
}


// Function: sub_4049a5 at 0x4049a5
int sub_4049a5()
{
 std::_Tuple_impl<1u, std::default_delete<int[]>>::_M_head();
 return;
}


// Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEE7_M_headERS3_ at 0x4049b0
int std_Tuple_impl_1u_default_delete_int_array_M_head_func(void* a0, int a1)
{
 char v0; // [bp-0x8]
 char v1; // [bp+0x0]

 return std::_Head_base<1u, std::default_delete<int[]>, true>::_M_head(a0, *((int *)&v0), &v1);
}


// Function: sub_4049d5 at 0x4049d5
void sub_4049d5(unsigned int a0)
{
 std::_Head_base<1u, std::default_delete<int[]>, true>::_M_head();
 return;
}


// Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EE7_M_headERS3_ at 0x4049e0
int std_Head_base_1u_default_delete_int_array_true_M_head_func(void* a0, int a1)
{
 return a0;
}


// Function: sub_4049eb at 0x4049eb
int sub_4049eb()
{
 std::unique_ptr<int[], std::default_delete<int[]>>::get();
 return;
}


// Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv at 0x4049f0
extern unsigned int _GLOBAL_OFFSET_TABLE_;

void std_unique_ptr_int_array_default_delete_int_array_get_func(void* this)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 v1 = std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_ptr(this);
 return;
}


// Function: sub_404a26 at 0x404a26
int sub_404a26()
{
 void* v1; // eax

 __clang_call_terminate(v1); /* do not return */
}


// Function: sub_404a31 at 0x404a31
int sub_404a31()
{
 std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_ptr();
 return;
}


// Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv at 0x404a40
int std_uniq_ptr_impl_int_default_delete_int_array_M_ptr_const()
{
 char v0; // [bp-0x8]
 char v1; // [bp+0x0]
 unsigned int v2; // [bp+0x4]

 return *((int *)std_get_0u_int_ptr_default_delete_int_array_func_const(v2, *((int *)&v0), &v1));
}


// Function: sub_404a67 at 0x404a67
int sub_404a67()
{
 std::get<0u, int*, std::default_delete<int[]>>();
 return;
}


// Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ at 0x404a70
int std_get_0u_int_ptr_default_delete_int_array_func_const(int a0, int a1)
{
 char v0; // [bp-0x8]
 char v1; // [bp+0x0]

 return std::__get_helper<0u, int*, std::default_delete<int[]>>(a0, *((int *)&v0), &v1);
}


// Function: sub_404a95 at 0x404a95
int sub_404a95()
{
 std::__get_helper<0u, int*, std::default_delete<int[]>>();
 return;
}


// Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE at 0x404aa0
int std__get_helper_0u_int_ptr_default_delete_int_array_func_const(int a0, int a1)
{
 char v0; // [bp-0x8]
 char v1; // [bp+0x0]

 return std::_Tuple_impl<0u, int*, std::default_delete<int[]>>::_M_head(a0, *((int *)&v0), &v1);
}


// Function: sub_404ac5 at 0x404ac5
int sub_404ac5()
{
 std::_Tuple_impl<0u, int*, std::default_delete<int[]>>::_M_head();
 return;
}


// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ at 0x404ad0
int std_Tuple_impl_0u_int_ptr_default_delete_int_array_M_head_func_const(int a0, int a1)
{
 char v0; // [bp-0x8]

 return std::_Head_base<0u, int*, false>::_M_head(a0, *((int *)&v0));
}


// Function: sub_404af5 at 0x404af5
void sub_404af5(unsigned int a0)
{
 std::forward<int*&>();
 return;
}


// Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE at 0x404b00
int* std_forward_int_ptr(void* this_ptr, void* arg_0)
{
 return (int*)this_ptr;
}


// Function: sub_404b0b at 0x404b0b
int sub_404b0b()
{
 std::_Head_base<0u, int*, false>::_Head_base<int*&>();
 return;
}


// Function: _ZNSt10_Head_baseILj0EPiLb0EEC2IRS0_EEOT_ at 0x404b10
int std_Head_base_0u_int_ptr_false_Head_base_int_ptr_ref(void* ptr, int *arg_0)
{
 char v0; // [bp-0x18]

 *((int *)ptr) = *((int *)std_forward_int_ptr(arg_0, *((int *)&v0)));
 return;
}


// Function: sub_404b49 at 0x404b49
void sub_404b49()
{
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

unsigned int __do_global_ctors_aux()
{
 struct_0 *v2; // edx
 struct_0 *ptr; // edx
 unsigned int *v4; // eax
 unsigned int v5; // ebx
 struct_0 *v6; // ebx
 struct_0 *p; // ebx
 unsigned int v0; // [bp-0x8]

 __x86.get_pc_thunk_dx();
 ptr = (struct_0 *)((char *)&v2 + 1035);
 v4 = (unsigned int *)((char *)&ptr->padding_0[1040]);
 if (*((int *)&ptr->padding_0[1040]) == 0xffffffff)
 return 4294967295;
 v0 = v5;
 v6 = (struct_0 *)((char *)&ptr->padding_0[1040]);
 do
 {
 p = v6;
 ((void(*)())v4)();
 v4 = (unsigned int *)((char *)&p->padding_0[4]);
 v6 = (struct_0 *)((char *)&p->padding_0[4]);
 } while (*((int *)&p->padding_0[4]) != 0xffffffff);
 return 4294967295;
}


// Function: sub_404b92 at 0x404b92
void sub_404b92()
{
}



/* CRT stub function _fini removed by preprocessor */


