/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned int uint;
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
typedef void* undefined;
typedef unsigned int undefined4;
typedef long double longdouble;
#define __thiscall

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ROUND(x) ((int)((x) + 0.5))

/* Forward declarations for C++ classes/structs */
typedef struct SimpleClass SimpleClass;
typedef struct LifecycleClass LifecycleClass;
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct BaseA BaseA;
typedef struct BaseB BaseB;
typedef struct MultiDerived MultiDerived;
typedef struct VirtualBase VirtualBase;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct Point Point;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct type_info type_info;
typedef struct Init Init;
typedef struct __0 __0;
typedef struct __1 __1;
typedef struct __2 __2;
typedef struct type type;
typedef struct tuple tuple;
typedef struct _Tuple_impl _Tuple_impl;
typedef struct _Head_base _Head_base;
typedef struct unique_ptr unique_ptr;
typedef struct __uniq_ptr_impl __uniq_ptr_impl;
typedef struct __uniq_ptr_data __uniq_ptr_data;
typedef struct default_delete default_delete;
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;

/* Struct definitions */
struct SimpleClass { int value; char name[32]; int flag; };
struct LifecycleClass { void* data; uint count; };
struct Base { void** vtable; };
struct Derived { void** vtable; int value; };
struct BaseA { void** vtable; };
struct BaseB { void** vtable; };
struct MultiDerived { BaseA baseA; BaseB baseB; };
struct VirtualBase { void** vtable; };
struct MiddleA { void** vtable; int offset; };
struct MiddleB { void** vtable; int offset; };
struct DiamondDerived { MiddleA middleA; MiddleB middleB; VirtualBase virtualBase; };
struct Point { int x; int y; };
struct RTTIBase { void** vtable; };
struct RTTIDerivedA { RTTIBase base; };
struct RTTIDerivedB { RTTIBase base; };
struct type_info { const char* name; void* data; };
struct Init { int dummy; };
struct __0 { int a; int b; };
struct __1 { int a; int* b; };
struct __2 { int dummy; };
struct type { void* data; };
struct tuple { void* data[2]; };
struct _Tuple_impl { void* data[2]; };
struct _Head_base { void* data; };
struct unique_ptr { void* ptr; void* deleter; };
struct __uniq_ptr_impl { tuple data; };
struct __uniq_ptr_data { __uniq_ptr_impl impl; };
struct default_delete { int dummy; };
struct Container_int { int data[10]; int size; };
struct Container_double { double data[10]; int size; };

/* Global variables */
int instance_count = 0;
Init std_ioinit;
void* __dso_handle;
type_info int_typeinfo;
type_info RTTIBase_typeinfo;
type_info RTTIDerivedA_typeinfo;
type_info RTTIDerivedB_typeinfo;
void* PTR_virtual_func_00018c3c;
void* PTR_virtual_func_00018c5c;
void* PTR_funcA_00018c80;
void* PTR_funcB_00018c98;
void* PTR_funcA_00018cdc;
void* PTR_funcB_00018cf0;
void* PTR__RTTIDerivedA_00018eb8;
void* PTR__RTTIDerivedB_00018ee0;
void* PTR__RTTIBase_00018ecc;
void* PTR_func_00018e2c;
void* _GLOBAL_OFFSET_TABLE_;

/* C++ runtime function declarations */
void __cxa_atexit(void (*func)(void*), void* arg, void* dso);
void* __cxa_allocate_exception(size_t size);
void __cxa_throw(void* exc, void* type, void* dest);
void __cxa_bad_typeid(void);
void* __dynamic_cast(void* src, void* src_type, void* dst_type, int src_type_info);
void std_terminate(void);
void __cxa_begin_catch(void* exc, void* gt);

/* Class method declarations */
void SimpleClass_SimpleClass(SimpleClass* this, int param_1, char* param_2);
void SimpleClass_setValue(SimpleClass* this, int param_1);
undefined4 SimpleClass_getValue(SimpleClass* this);
int SimpleClass_compute(SimpleClass* this, int param_1);
undefined4 SimpleClass_getClassID(void);
void LifecycleClass_LifecycleClass(LifecycleClass* this, uint param_1);
undefined4 LifecycleClass_getData(LifecycleClass* this, uint param_1);
undefined4 LifecycleClass_getInstanceCount(void);
void LifecycleClass_~LifecycleClass(LifecycleClass* this);
void Base_Base(Base* this);
Base* Base_~Base_return_this(Base* this);
int Base_virtual_func(Base* this, int param_1);
void Derived_Derived(Derived* this, int param_1);
void Derived_~Derived(Derived* this);
int Derived_virtual_func(Derived* this, int param_1);
void MultiDerived_MultiDerived(MultiDerived* this);
void MultiDerived_~MultiDerived(MultiDerived* this);
void DiamondDerived_DiamondDerived(DiamondDerived* this);
void DiamondDerived_~DiamondDerived(DiamondDerived* this);
void Point_Point(Point* this, int param_1, int param_2);
Point* Point_operator+(Point* this, Point* param_1);
bool Point_operator==(Point* this, Point* param_1);
void Point_operator++(Point* this);
int template_max_int(int param_1, int param_2);
double template_max_double(double param_1, double param_2);
void template_swap_int(int* param_1, int* param_2);
void Container_int_Container(Container_int* this);
void Container_int_push(Container_int* this, int param_1);
undefined4 Container_int_get(Container_int* this, int param_1);
undefined4 Container_int_getSize(Container_int* this);
void Container_double_Container(Container_double* this);
void Container_double_push(Container_double* this, double param_1);
longdouble Container_double_get(Container_double* this, int param_1);
undefined4 Container_double_getSize(Container_double* this);
void RTTIBase_RTTIBase(RTTIBase* this);
RTTIBase* RTTIBase_~RTTIBase_return_this(RTTIBase* this);
void RTTIDerivedA_RTTIDerivedA(RTTIDerivedA* this);
void RTTIDerivedA_~RTTIDerivedA(RTTIDerivedA* this);
void RTTIDerivedB_RTTIDerivedB(RTTIDerivedB* this);
void RTTIDerivedB_~RTTIDerivedB(RTTIDerivedB* this);
undefined4 RTTIDerivedA_derivedA_data(void);
undefined4 RTTIDerivedB_derivedB_data(void);
void BaseA_BaseA(BaseA* this);
BaseA* BaseA_~BaseA_return_this(BaseA* this);
void BaseB_BaseB(BaseB* this);
BaseB* BaseB_~BaseB_return_this(BaseB* this);
void VirtualBase_VirtualBase(VirtualBase* this);
VirtualBase* VirtualBase_~VirtualBase_return_this(VirtualBase* this);
void MiddleA_MiddleA(MiddleA* this);
MiddleA* MiddleA_~MiddleA_return_this(MiddleA* this);
void MiddleB_MiddleB(MiddleB* this);
MiddleB* MiddleB_~MiddleB_return_this(MiddleB* this);
bool std_type_info_operator==(type_info* this, type_info* param_1);
int std_type_info_name(type_info* this);
void* operator_new(size_t size);
void* operator_new__(size_t size);
void operator_delete(void* ptr);
void operator_delete__(void* ptr);

/* Container type aliases */
/* typedef Container_int Container<int>; */
/* typedef Container_double Container<double>; */

/* Missing helper function declarations */
void* get(unique_ptr* this);
void* get_deleter(unique_ptr* this);
type* move(void** param_1);
type* move_tuple(tuple* param_1);
type* std_move(unique_ptr* param_1);
type* std_move(tuple* param_1);
type* std_move(int** param_1);
type* move_int_ptr_ref(int** param_1);
type* forward(type* param_1);
int** std_forward(type* param_1);
void* _M_ptr(__uniq_ptr_impl* this);
undefined4 _M_ptr_const(__uniq_ptr_impl* this);
undefined4 __M_deleter(__uniq_ptr_impl* this);
void* __M_head(_Head_base* param_1);
_Head_base* _Head_base_const(_Head_base* param_1);
void _Tuple_impl(_Tuple_impl* this);
void _Tuple_impl_copy(_Tuple_impl* this, _Tuple_impl* param_1);
void _Head_base(_Head_base* this);
void _Head_base_with_param(_Head_base* this, void* param_1);
void* __get_helper(_Tuple_impl* param_1);
void tuple_ctor(tuple* this);
void tuple_copy(tuple* this, tuple* param_1);
void tuple_with_params(tuple* this, void** param_1, void* param_2);
void _M_head_tuple(_Tuple_impl* param_1);

/* Smart pointer helper function declarations */
void std_unique_ptr_int_std_default_delete_int__unique_ptr_std_default_delete_int_void(unique_ptr* this, int* param_1);
void* std_unique_ptr_int_std_default_delete_int__operator*(unique_ptr* this);
type* std_move_std_unique_ptr_int_std_default_delete_int_ref(unique_ptr* param_1);
void std_unique_ptr_int_std_default_delete_int__unique_ptr(unique_ptr* this, unique_ptr* param_1);
void std_unique_ptr_int_std_default_delete_int___unique_ptr(unique_ptr* this);
void std_unique_ptr_int_array_std_default_delete_int_array__unique_ptr_int_ptr_std_default_delete_int_array_void_bool(unique_ptr* this, int* param_1);
int __thiscall std_unique_ptr_int_array_std_default_delete_int_array__operator[](unique_ptr* this, uint param_1);
void std_unique_ptr_int_array_std_default_delete_int_array___unique_ptr(unique_ptr* this);
void std_unique_ptr_int_test_cpp_smart_ptr__2_unique_ptr_test_cpp_smart_ptr___2_void(unique_ptr* this, int* param_1, __2* param_2);
void std_unique_ptr_int_test_cpp_smart_ptr__2_operator(unique_ptr* this);
void std_unique_ptr_int_test_cpp_smart_ptr__2_destructor(unique_ptr* this);
void std___uniq_ptr_data_int_test_cpp_smart_ptr___2_true_false___uniq_ptr_impl_test_cpp_smart_ptr___2_const_(__uniq_ptr_data* this, int* param_1, __2* param_2);
void std___uniq_ptr_impl_int_test_cpp_smart_ptr___2___uniq_ptr_impl_test_cpp_smart_ptr___2_const_(__uniq_ptr_impl* this, int* param_1, __2* param_2);
__2* std_forward_test_cpp_smart_ptr___2_const(type* param_1);
void std_tuple_int_ptr_test_cpp_smart_ptr___2__tuple_int_ptr_ref_test_cpp_smart_ptr___2_const_true(tuple* this, int** param_1, __2* param_2);
void std__Tuple_impl_0u_int_ptr_test_cpp_smart_ptr___2__Tuple_impl_int_ptr_ref_test_cpp_smart_ptr___2_const_void(_Tuple_impl* this, int** param_1, __2* param_2);
void std__Tuple_impl_1u_test_cpp_smart_ptr___2__Tuple_impl(__2* param_1);
__2* std__Head_base_1u_test_cpp_smart_ptr___2_true__Head_base(__2* param_1);
void std___uniq_ptr_impl_int_test_cpp_smart_ptr___2__M_ptr(__uniq_ptr_impl* this);
undefined4 std_unique_ptr_int_test_cpp_smart_ptr___2__get_deleter(unique_ptr* this);
void test_cpp_smart_ptr___2_operator_(__2* this, int* param_1);
type* std_get_0u_int_ptr_ref(tuple* param_1);
int** std___get_helper_0u_int_ptr_ref(_Tuple_impl* param_1);
void std__Tuple_impl_0u_int_ptr_ref__M_head(_Tuple_impl* param_1);
void std___uniq_ptr_impl_int_test_cpp_smart_ptr___2__M_deleter(__uniq_ptr_impl* this);
type* std_get_1u_int_ptr_ref(tuple* param_1);
__2* std___get_helper_1u_test_cpp_smart_ptr___2(_Tuple_impl* param_1);
void std__Tuple_impl_1u_test_cpp_smart_ptr___2__M_head(_Tuple_impl* param_1);
_Head_base* std__Head_base_1u_test_cpp_smart_ptr___2_true__M_head(_Head_base* param_1);
_Head_base* std__Head_base_0u_int_ptr_false__M_head(_Head_base* this);
_Head_base* std__Head_base_1u_std_default_delete_int_true__M_head(_Head_base* param_1);
_Head_base* std__Head_base_1u_std_default_delete_int_array_true__M_head(_Head_base* param_1);
undefined4 std_unique_ptr_int_test_cpp_smart_ptr___2__get(unique_ptr* this);
undefined4 std___uniq_ptr_impl_int_test_cpp_smart_ptr___2__M_ptr_const(__uniq_ptr_impl* this);
type* std_get_0u_int_ptr_const(tuple* param_1);
int** std___get_helper_0u_int_ptr_const(_Tuple_impl* param_1);
void std__Tuple_impl_0u_int_ptr_const__M_head(_Tuple_impl* param_1);
void std___uniq_ptr_data_int_std_default_delete_int_true_true___uniq_ptr_data(__uniq_ptr_data* this, __uniq_ptr_data* param_1);
void std___uniq_ptr_impl_int_std_default_delete_int____uniq_ptr_impl(__uniq_ptr_impl* this, __uniq_ptr_impl* param_1);
type* std_move_std_tuple_int_ptr_std_default_delete_int_ref(tuple* param_1);
void std_tuple_int_ptr_std_default_delete_int__tuple(tuple* this, tuple* param_1);
void std___uniq_ptr_impl_int_std_default_delete_int__M_ptr(__uniq_ptr_impl* this);
void std__Tuple_impl_0u_int_ptr_std_default_delete_int__Tuple_impl(_Tuple_impl* this, _Tuple_impl* param_1);
void std__Tuple_impl_1u_std_default_delete_int__Tuple_impl(_Tuple_impl* param_1);
type* std_get_0u_int_ptr_std_default_delete_int(tuple* param_1);
int** std___get_helper_0u_int_ptr_std_default_delete_int(_Tuple_impl* param_1);
void std__Tuple_impl_0u_int_ptr_std_default_delete_int__M_head(_Tuple_impl* param_1);
void std___uniq_ptr_data_int_std_default_delete_int_true_true___uniq_ptr_impl(__uniq_ptr_data* this, int* param_1);
void std___uniq_ptr_impl_int_std_default_delete_int____uniq_ptr_impl(__uniq_ptr_impl* this, int* param_1);
void std_tuple_int_ptr_std_default_delete_int__tuple_true_true(tuple* this);
void std__Tuple_impl_0u_int_ptr_std_default_delete_int__Tuple_impl(_Tuple_impl* this);
void std__Tuple_impl_1u_std_default_delete_int__Tuple_impl(_Tuple_impl* this);
void std__Head_base_0u_int_ptr_false__Head_base(_Head_base* this);
_Head_base* std__Head_base_1u_std_default_delete_int_true__Head_base(_Head_base* this);
undefined4 std_unique_ptr_int_std_default_delete_int__get_deleter(unique_ptr* this);
void std_default_delete_int__operator_(default_delete* this, int* param_1);
void std___uniq_ptr_impl_int_std_default_delete_int__M_deleter(__uniq_ptr_impl* this);
type* std_get_1u_int_ptr_std_default_delete_int(tuple* param_1);
default_delete* std___get_helper_1u_std_default_delete_int(_Tuple_impl* param_1);
void std__Tuple_impl_1u_std_default_delete_int__M_head(_Tuple_impl* param_1);
undefined4 std_unique_ptr_int_std_default_delete_int__get(unique_ptr* this);
undefined4 std___uniq_ptr_impl_int_std_default_delete_int__M_ptr_const(__uniq_ptr_impl* this);
type* std_get_0u_int_ptr_std_default_delete_int_const(tuple* param_1);
int** std___get_helper_0u_int_ptr_std_default_delete_int_const(_Tuple_impl* param_1);
void std__Tuple_impl_0u_int_ptr_std_default_delete_int_const__M_head(_Tuple_impl* param_1);
void std___uniq_ptr_data_int_std_default_delete_int_array_true_true___uniq_ptr_impl(__uniq_ptr_data* this, int* param_1);
void std___uniq_ptr_impl_int_std_default_delete_int_array____uniq_ptr_impl(__uniq_ptr_impl* this, int* param_1);
void std_tuple_int_ptr_std_default_delete_int_array__tuple_true_true(tuple* this);
void std___uniq_ptr_impl_int_std_default_delete_int_array__M_ptr(__uniq_ptr_impl* this);
void std__Tuple_impl_0u_int_ptr_std_default_delete_int_array__Tuple_impl(_Tuple_impl* this);
void std__Tuple_impl_1u_std_default_delete_int_array__Tuple_impl(_Tuple_impl* this);
_Head_base* std__Head_base_1u_std_default_delete_int_array_true__Head_base(_Head_base* this);
type* std_get_0u_int_ptr_std_default_delete_int_array(tuple* param_1);
int** std___get_helper_0u_int_ptr_std_default_delete_int_array(_Tuple_impl* param_1);
void std__Tuple_impl_0u_int_ptr_std_default_delete_int_array__M_head(_Tuple_impl* param_1);
undefined4 std_unique_ptr_int_array_std_default_delete_int_array__get_deleter(unique_ptr* this);
void std_default_delete_int_array__operator_(default_delete* this, int* param_1);
void std___uniq_ptr_impl_int_std_default_delete_int_array__M_deleter(__uniq_ptr_impl* this);
type* std_get_1u_int_ptr_std_default_delete_int_array(tuple* param_1);
default_delete* std___get_helper_1u_std_default_delete_int_array(_Tuple_impl* param_1);
void std__Tuple_impl_1u_std_default_delete_int_array__M_head(_Tuple_impl* param_1);
undefined4 std_unique_ptr_int_array_std_default_delete_int_array__get(unique_ptr* this);
undefined4 std___uniq_ptr_impl_int_std_default_delete_int_array__M_ptr_const(__uniq_ptr_impl* this);
type* std_get_0u_int_ptr_std_default_delete_int_array_const(tuple* param_1);
int** std___get_helper_0u_int_ptr_std_default_delete_int_array_const(_Tuple_impl* param_1);
void std__Tuple_impl_0u_int_ptr_std_default_delete_int_array_const__M_head(_Tuple_impl* param_1);
int** std_forward_int_ptr_ref(type* param_1);
void __thiscall std__Head_base_0u_int_ptr_false__Head_base_int_ptr_ref(_Head_base* this, int** param_1);

/* Undefined data declarations */
extern char DAT_0001500d[];
extern char DAT_00015032[];
extern char DAT_00015050[];
extern char DAT_0001506c[];
extern char DAT_00015088[];
extern char DAT_000150a4[];
extern char DAT_000150c1[];
extern char DAT_000150dd[];
extern char DAT_000150f9[];
extern char DAT_00015115[];
extern char DAT_00015131[];
extern char DAT_0001514e[];
extern char DAT_0001516b[];
extern char DAT_00015189[];

/* Missing function declarations */
int test_cpp_lambda_0_operator()(__0* this, int param_1, int param_2);
int test_cpp_lambda_1_operator()(__1* this, int param_1);
void func(void* this);
void funcA(void);
void funcB(void);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-1/5-1_clang_O0_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: __cxx_global_var_init @ 000111a0 */

void __cxx_global_var_init(void)

{
 /* std_ios_base_Init_Init((Init *)&std_ioinit); */
 /* __cxa_atexit(std_ios_base_Init_~Init,&std_ioinit,&__dso_handle); */
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 000111f0 */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 __cxx_global_var_init();
 return;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 0001123c */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011240 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 00011379 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 0001137d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: test_cpp_member_func @ 00011390 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 SimpleClass local_2c [36];
 
 SimpleClass_SimpleClass(local_2c,5,"Test");
 SimpleClass_setValue(local_2c,10);
 iVar1 = SimpleClass_getValue(local_2c);
 iVar2 = SimpleClass_compute(local_2c,3);
 iVar3 = SimpleClass_getClassID();
 return iVar1 + iVar2 + iVar3;
}



/* Function: test_cpp_constructor @ 00011420 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 int iVar1;
 LifecycleClass local_14 [8];
 int local_c;
 
 local_c = 0;
 LifecycleClass_LifecycleClass(local_14,5);
 /* try { // try from 00011459 to 00011483 has its CatchHandler @ 000114c0 */
 iVar1 = LifecycleClass_getData(local_14,2);
 local_c = local_c + iVar1;
 iVar1 = LifecycleClass_getInstanceCount();
 local_c = iVar1 + local_c;
 LifecycleClass_~LifecycleClass(local_14);
 iVar1 = LifecycleClass_getInstanceCount();
 return iVar1 * 1000 + local_c;
}



/* Function: call_virtual_func @ 000114f0 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 (*(code *)**(undefined4 **)param_1)(param_1,param_2);
 return;
}



/* Function: test_cpp_virtual_func @ 00011520 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

int test_cpp_virtual_func(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 Derived local_14 [8];
 Base local_c [4];
 
 Base_Base(local_c);
 /* try { // try from 00011545 to 00011557 has its CatchHandler @ 0001162d */
 Derived_Derived(local_14,3);
 /* try { // try from 0001155d to 000115ea has its CatchHandler @ 00011638 */
 iVar1 = Base_virtual_func(local_c,5);
 iVar2 = Derived_virtual_func(local_14,5);
 iVar3 = call_virtual_func(local_c,5);
 iVar4 = call_virtual_func((Base *)local_14,5);
 Derived_~Derived(local_14);
 Base_~Base(local_c);
 return iVar1 + iVar2 + iVar3 + iVar4;
}



/* Function: test_cpp_multiple_inheritance @ 00011670 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

int test_cpp_multiple_inheritance(void)

{
 int iVar1;
 int iVar2;
 undefined4 **local_3c;
 undefined4 *local_1c;
 undefined4 local_18;
 undefined4 *local_14;
 undefined4 local_10;
 
 MultiDerived_MultiDerived((MultiDerived *)&local_1c);
 local_18 = 100;
 local_10 = 200;
 local_3c = (undefined4 **)0x0;
 if (&stack0x00000000 != (undefined1 *)0x1c) {
 local_3c = &local_14;
 }
 /* try { // try from 000116d0 to 000116f3 has its CatchHandler @ 0001173b */
 iVar1 = (*(code *)*local_1c)(&local_1c);
 iVar2 = (*(code *)**local_3c)(local_3c);
 MultiDerived_~MultiDerived((MultiDerived *)&local_1c);
 return iVar1 + iVar2 + (uint)(&local_1c != local_3c);
}



/* Function: test_cpp_diamond_inheritance @ 00011760 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
 int iVar1;
 int iVar2;
 undefined4 *local_3c;
 int local_24 [7];
 
 DiamondDerived_DiamondDerived((DiamondDerived *)local_24);
 *(undefined4 *)((int)local_24 + *(int *)(local_24[0] + -0xc) + 4) = 0x32;
 local_3c = (undefined4 *)0x0;
 if (&stack0x00000000 != (undefined1 *)0x24) {
 local_3c = (undefined4 *)((int)local_24 + *(int *)(local_24[0] + -0xc));
 }
 /* try { // try from 000117be to 000117ef has its CatchHandler @ 0001181e */
 iVar1 = (**(code **)*local_3c)(local_3c);
 *(undefined4 *)((int)local_24 + *(int *)(local_24[0] + -0xc) + 4) = 100;
 iVar2 = (**(code **)*local_3c)(local_3c);
 DiamondDerived_~DiamondDerived((DiamondDerived *)local_24);
 return iVar1 + iVar2;
}



/* Function: test_cpp_operator_overload @ 00011840 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

int test_cpp_operator_overload(void)

{
 byte bVar1;
 int iVar2;
 int local_24;
 int local_20;
 Point local_1c [8];
 Point local_14 [12];
 
 Point_Point(local_14,1,2);
 Point_Point(local_1c,3,4);
 Point_operator+((Point *)&local_24,local_14);
 bVar1 = Point_operator==(local_14,local_1c);
 Point_operator++((Point *)&local_24);
 iVar2 = 10;
 if ((bVar1 & 1) != 0) {
 iVar2 = 0;
 }
 return local_24 + local_20 + iVar2;
}



/* Function: test_cpp_template_func @ 00011900 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

int test_cpp_template_func(void)

{
 int local_1c;
 int local_18;
 double local_14;
 int local_c;
 
 local_c = template_max_int(3,7);
 local_14 = template_max_double(2.5,1.5);
 local_18 = 10;
 local_1c = 0x14;
 template_swap_int(&local_18,&local_1c);
 return local_c + (int)ROUND(local_14) + local_18 + local_1c;
}



/* Function: test_cpp_template_class @ 000119b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

int test_cpp_template_class(void)

{
 longdouble lVar1;
 Container_double local_94 [88];
 int local_3c;
 int local_38;
 Container_int local_34 [44];
 
 Container_int_Container(local_34);
 Container_int_push(local_34,10);
 Container_int_push(local_34,0x14);
 Container_int_push(local_34,0x1e);
 local_38 = Container_int_get(local_34,0);
 local_3c = Container_int_getSize(local_34);
 Container_double_Container(local_94);
 Container_double_push(local_94,3.14);
 lVar1 = (longdouble)Container_double_get(local_94,0);
 return local_38 + local_3c + (int)ROUND((double)lVar1);
}



/* Function: test_cpp_lambda @ 00011b20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

int test_cpp_lambda(void)

{
 int iVar1;
 int iVar2;
 __0 local_24 [8];
 undefined4 local_1c;
 undefined4 *local_18;
 undefined4 local_10;
 undefined4 local_c;
 
 local_c = 10;
 local_10 = 0x14;
 local_1c = 10;
 local_18 = &local_10;
 iVar1 = test_cpp_lambda_1_operator()((__1 *)&local_1c,3);
 iVar2 = test_cpp_lambda_0_operator()(local_24,10,0x14);
 return iVar1 + iVar2;
}



/* Function: operator() @ 00011ba0 */

/* test_cpp_lambda_1_TEMPNAMEPLACEHOLDERVALUE(int) const */

int __thiscall test_cpp_lambda_1_operator()(__1 *this,int param_1)

{
 **(int **)(this + 4) = **(int **)(this + 4) + 5;
 return param_1 * *(int *)this + **(int **)(this + 4);
}



/* Function: operator() @ 00011bd0 */

/* auto test_cpp_lambda_0_TEMPNAMEPLACEHOLDERVALUE(int, int) const */

int __thiscall test_cpp_lambda_0_operator()(__0 *this,int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: test_cpp_exception @ 00011bf0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* try { // try from 00011c25 to 00011c3d has its CatchHandler @ 00011c43 */
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,&int_typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 00011d90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

int test_cpp_smart_ptr(void)

{
 int iVar1;
 int *piVar2;
 undefined4 *puVar3;
 type *ptVar4;
 int iVar5;
 unique_ptr local_34 [8];
 __2 local_2c [4];
 int local_28;
 unique_ptr local_24 [4];
 int local_20;
 unique_ptr local_1c [16];
 unique_ptr local_c [4];
 
 piVar2 = operator_new(4);
 *piVar2 = 100;
 std_unique_ptr_int_std_default_delete_int__unique_ptr_std_default_delete_int_void
 (local_c,piVar2);
 /* try { // try from 00011dd6 to 00011dde has its CatchHandler @ 00011f55 */
 puVar3 = (undefined4 *)std_unique_ptr_int_std_default_delete_int__operator*(local_c);
 *puVar3 = 200;
 ptVar4 = std_move_std_unique_ptr_int_std_default_delete_int_ref((unique_ptr *)local_c);
 std_unique_ptr_int_std_default_delete_int__unique_ptr(local_1c,(unique_ptr *)ptVar4);
 /* try { // try from 00011e1c to 00011e44 has its CatchHandler @ 00011f60 */
 piVar2 = (int *)std_unique_ptr_int_std_default_delete_int__operator*(local_1c);
 local_20 = *piVar2;
 piVar2 = operator_new__(0x14);
 *piVar2 = 1;
 piVar2[1] = 2;
 piVar2[2] = 3;
 piVar2[3] = 4;
 piVar2[4] = 5;
 std_unique_ptr_int_array_std_default_delete_int_array__unique_ptr_int_ptr_std_default_delete_int_array_void_bool(local_24,piVar2);
 /* try { // try from 00011e8d to 00011ebc has its CatchHandler @ 00011f6b */
 piVar2 = (int *)std_unique_ptr_int_array_std_default_delete_int_array__operator[](local_24,2);
 local_28 = *piVar2;
 piVar2 = operator_new(4);
 *piVar2 = 500;
 std_unique_ptr_int_test_cpp_smart_ptr__2_unique_ptr_test_cpp_smart_ptr___2_void
 (local_34,piVar2,local_2c);
 /* try { // try from 00011eef to 00011ef7 has its CatchHandler @ 00011f76 */
 piVar2 = (int *)std_unique_ptr_int_test_cpp_smart_ptr__2_operator(local_34);
 iVar1 = *piVar2;
 iVar5 = local_20 + local_28;
 std_unique_ptr_int_test_cpp_smart_ptr__2_destructor(local_34);
 std_unique_ptr_int_array_std_default_delete_int_array___unique_ptr(local_24);
 std_unique_ptr_int_std_default_delete_int__unique_ptr(local_1c);
 std_unique_ptr_int_std_default_delete_int__unique_ptr(local_c);
 return iVar5 + iVar1;
}



/* Function: unique_ptr<test_cpp_smart_ptr()_$_2,void> @ 00011fd0 */

/* std_unique_ptr<int, test_cpp_smart_ptr()_$_2>_unique_ptr<test_cpp_smart_ptr()_$_2,
 void>(int*, test_cpp_smart_ptr()_$_2 const&) */

void __thiscall
std_unique_ptr_int_test_cpp_smart_ptr__2_unique_ptr_test_cpp_smart_ptr___2_void
 (unique_ptr *this,int *param_1,__2 *param_2)

{
 /* try { // try from 00011ff9 to 00012007 has its CatchHandler @ 00012014 */
 __uniq_ptr_data<int,test_cpp_smart_ptr()_$_2,true,false>_
 __uniq_ptr_impl<test_cpp_smart_ptr()___2_const&>
 ((__uniq_ptr_data<int,test_cpp_smart_ptr()___2,true,false> *)this,param_1,param_2);
 return;
}



/* Function: operator* @ 00012020 */

/* std_unique_ptr<int, test_cpp_smart_ptr()_$_2>_TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall
std_unique_ptr_int_test_cpp_smart_ptr__2_operator
 (unique_ptr *this)

{
 get(this);
 return;
}



/* Function: ~unique_ptr @ 00012060 */

/* std_unique_ptr<int, test_cpp_smart_ptr()_$_2>_~unique_ptr() */

void __thiscall
std_unique_ptr_int_test_cpp_smart_ptr__2_destructor
 (unique_ptr *this)

{
 int **ppiVar1;
 __2 *this_00;
 type *ptVar2;
 
 /* try { // try from 0001207f to 000120d6 has its CatchHandler @ 000120f0 */
 ppiVar1 = (int **)std___uniq_ptr_impl_int_test_cpp_smart_ptr___2__M_ptr
 ((__uniq_ptr_impl<int,test_cpp_smart_ptr()___2> *)this);
 if (*ppiVar1 != (int *)0x0) {
 this_00 = (__2 *)get_deleter(this);
 ptVar2 = std_move_int_ptr_ref(ppiVar1);
 test_cpp_smart_ptr()_$_2_operator()(this_00,*(int **)ptVar2);
 }
 *ppiVar1 = (int *)0x0;
 return;
}



/* Function: test_cpp_rtti @ 00012100 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 RTTIDerivedA *this;
 RTTIDerivedB *this_00;
 uint uVar1;
 int iVar2;
 char *__s;
 size_t sVar3;
 type_info *this_01;
 type_info *local_44;
 type_info *local_3c;
 int local_18;
 
 this = operator_new(4);
 memset(this,0,4);
 RTTIDerivedA_RTTIDerivedA(this);
 this_00 = operator_new(4);
 memset(this_00,0,4);
 RTTIDerivedB_RTTIDerivedB(this_00);
 local_18 = 0;
 if (this == (RTTIDerivedA *)0x0) {
 __cxa_bad_typeid();
 }
 uVar1 = std_type_info_operator==
 (*(type_info **)(*(int *)this + -4),(type_info *)&RTTIDerivedA_typeinfo);
 if ((uVar1 & 1) != 0) {
 local_18 = 10;
 }
 if (this_00 == (RTTIDerivedB *)0x0) {
 __cxa_bad_typeid();
 }
 this_01 = *(type_info **)(*(int *)this_00 + -4);
 uVar1 = std_type_info_operator==(this_01,(type_info *)&RTTIDerivedB_typeinfo);
 if ((uVar1 & 1) != 0) {
 local_18 = local_18 + 0x14;
 }
 if (this == (RTTIDerivedA *)0x0) {
 local_3c = (type_info *)0x0;
 }
 else {
 this_01 = (type_info *)this;
 local_3c = (type_info *)__dynamic_cast(this,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 }
 if (local_3c != (type_info *)0x0) {
 iVar2 = RTTIDerivedA_derivedA_data();
 local_18 = iVar2 + local_18;
 this_01 = local_3c;
 }
 if (this_00 == (RTTIDerivedB *)0x0) {
 local_44 = (type_info *)0x0;
 }
 else {
 this_01 = (type_info *)this_00;
 local_44 = (type_info *)__dynamic_cast(this_00,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 }
 if (local_44 != (type_info *)0x0) {
 iVar2 = RTTIDerivedB_derivedB_data();
 local_18 = iVar2 + local_18;
 this_01 = local_44;
 }
 if (this == (RTTIDerivedA *)0x0) {
 __cxa_bad_typeid(this_01);
 }
 __s = (char *)std_type_info_name(*(type_info **)(*(int *)this + -4));
 sVar3 = strlen(__s);
 if (this != (RTTIDerivedA *)0x0) {
 (**(code **)(*(int *)this + 4))(this);
 }
 if (this_00 != (RTTIDerivedB *)0x0) {
 (**(code **)(*(int *)this_00 + 4))(this_00);
 }
 return sVar3 + local_18;
}



/* Function: test_cpp_oo_features @ 000123a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 undefined4 uVar1;
 
 printf(&DAT_0001500d);
 uVar1 = test_cpp_member_func();
 printf(&DAT_00015032,uVar1);
 uVar1 = test_cpp_constructor();
 printf(&DAT_00015050,uVar1);
 uVar1 = test_cpp_virtual_func();
 printf(&DAT_0001506c,uVar1);
 uVar1 = test_cpp_multiple_inheritance();
 printf(&DAT_00015088,uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 printf(&DAT_000150a4,uVar1);
 uVar1 = test_cpp_operator_overload();
 printf(&DAT_000150c1,uVar1);
 uVar1 = test_cpp_template_func();
 printf(&DAT_000150dd,uVar1);
 uVar1 = test_cpp_template_class();
 printf(&DAT_000150f9,uVar1);
 uVar1 = test_cpp_lambda();
 printf(&DAT_00015115,uVar1);
 uVar1 = test_cpp_exception();
 printf(&DAT_00015131,uVar1);
 uVar1 = test_cpp_smart_ptr();
 printf(&DAT_0001514e,uVar1);
 uVar1 = test_cpp_rtti();
 printf(&DAT_0001516b,uVar1);
 return;
}



/* Function: main @ 00012530 */

undefined4 main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: __uniq_ptr_impl<test_cpp_smart_ptr()_$_2_const&> @ 00012560 */

/* std___uniq_ptr_data<int, test_cpp_smart_ptr()_$_2, true,
 false>___uniq_ptr_impl<test_cpp_smart_ptr()_$_2 const&>(int*, test_cpp_smart_ptr()_$_2 const&)
 */

void __thiscall
std___uniq_ptr_data_int_test_cpp_smart_ptr___2_true_false___uniq_ptr_impl_test_cpp_smart_ptr___2_const_
 (__uniq_ptr_data *this,int *param_1,__2 *param_2
 )

{
 __uniq_ptr_impl<int,test_cpp_smart_ptr()_$_2>___uniq_ptr_impl<test_cpp_smart_ptr()___2_const&>
 ((__uniq_ptr_impl<int,test_cpp_smart_ptr()___2> *)this,param_1,param_2);
 return;
}



/* Function: __uniq_ptr_impl<test_cpp_smart_ptr()_$_2_const&> @ 000125a0 */

/* std___uniq_ptr_impl<int, test_cpp_smart_ptr()_$_2>___uniq_ptr_impl<test_cpp_smart_ptr()_$_2
 const&>(int*, test_cpp_smart_ptr()_$_2 const&) */

void __thiscall
std___uniq_ptr_impl_int_test_cpp_smart_ptr___2___uniq_ptr_impl_test_cpp_smart_ptr___2_const_
 (__uniq_ptr_impl *this,int *param_1,__2 *param_2)

{
 __2 *p_Var1;
 
 p_Var1 = std_forward_test_cpp_smart_ptr___2_const((type *)param_2);
 std_tuple_int_ptr_test_cpp_smart_ptr___2__tuple_int_ptr_ref_test_cpp_smart_ptr___2_const_true
 ((tuple *)this,&param_1,p_Var1);
 return;
}



/* Function: forward<test_cpp_smart_ptr()_$_2_const&> @ 000125f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr()_$_2 const& std_forward<test_cpp_smart_ptr()_$_2
 const&>(std_remove_reference<test_cpp_smart_ptr()_$_2 const&>_type&) */

__2 * std_forward_test_cpp_smart_ptr___2_const(type *param_1)

{
 return (__2 *)param_1;
}



/* Function: tuple<int*&,test_cpp_smart_ptr()_$_2_const&,true> @ 00012600 */

/* std_tuple<int*, test_cpp_smart_ptr()_$_2>_tuple<int*&, test_cpp_smart_ptr()_$_2 const&,
 true>(int*&, test_cpp_smart_ptr()_$_2 const&) */

void __thiscall
std_tuple_int_ptr_test_cpp_smart_ptr___2__tuple_int_ptr_ref_test_cpp_smart_ptr___2_const_true
 (tuple *this,int **param_1,__2 *param_2)

{
 int **ppiVar1;
 __2 *p_Var2;
 
 ppiVar1 = std_forward_int_ptr_ref((type *)param_1);
 p_Var2 = std_forward_test_cpp_smart_ptr___2_const((type *)param_2);
 /* try { // try from 0001264f to 0001265d has its CatchHandler @ 0001266a */
 std__Tuple_impl_0u_int_ptr_test_cpp_smart_ptr___2__Tuple_impl_int_ptr_ref_test_cpp_smart_ptr___2_const_void
 ((_Tuple_impl *)this,ppiVar1,p_Var2);
 return;
}



/* Function: _Tuple_impl<int*&,test_cpp_smart_ptr()_$_2_const&,void> @ 00012680 */

/* std__Tuple_impl<0u, int*, test_cpp_smart_ptr()_$_2>__Tuple_impl<int*&,
 test_cpp_smart_ptr()_$_2 const&, void>(int*&, test_cpp_smart_ptr()_$_2 const&) */

void __thiscall
std__Tuple_impl_0u_int_ptr_test_cpp_smart_ptr___2__Tuple_impl_int_ptr_ref_test_cpp_smart_ptr___2_const_void
 (_Tuple_impl *this,int **param_1,__2 *param_2)

{
 int **ppiVar1;
 
 std_forward_test_cpp_smart_ptr___2_const((type *)param_2);
 std__Tuple_impl_1u_test_cpp_smart_ptr___2__Tuple_impl((__2 *)this);
 ppiVar1 = std_forward_int_ptr_ref((type *)param_1);
 std__Head_base_0u_int_ptr_false__Head_base_int_ptr_ref((_Head_base *)this,ppiVar1);
 return;
}



/* Function: _Tuple_impl @ 00012700 */

/* std__Tuple_impl<1u, test_cpp_smart_ptr()_$_2>__Tuple_impl(test_cpp_smart_ptr()_$_2 const&) */

void __thiscall std__Tuple_impl_1u_test_cpp_smart_ptr___2__Tuple_impl(__2 *param_1)

{
 _Head_base<1u,test_cpp_smart_ptr()_$_2,true>__Head_base(param_1);
 return;
}



/* Function: _Head_base @ 00012740 */

/* std__Head_base<1u, test_cpp_smart_ptr()_$_2, true>__Head_base(test_cpp_smart_ptr()_$_2
 const&) */

__2 * __thiscall std__Head_base_1u_test_cpp_smart_ptr___2_true__Head_base(__2 *param_1)

{
 return param_1;
}



/* Function: _M_ptr @ 00012750 */

/* std___uniq_ptr_impl<int, test_cpp_smart_ptr()_$_2>__M_ptr() */

void __thiscall
std___uniq_ptr_impl_int_test_cpp_smart_ptr___2__M_ptr
 (__uniq_ptr_impl *this)

{
 std_get_0u_int_ptr_ref((tuple *)this);
 return;
}



/* Function: get_deleter @ 00012780 */

/* std_unique_ptr<int, test_cpp_smart_ptr()_$_2>_get_deleter() */

undefined4 __thiscall
std_unique_ptr_int_test_cpp_smart_ptr___2__get_deleter
 (unique_ptr *this)

{
 undefined4 uVar1;
 
 /* try { // try from 0001279c to 000127a4 has its CatchHandler @ 000127b6 */
 uVar1 = __uniq_ptr_impl<int,test_cpp_smart_ptr()_$_2>__M_deleter
 ((__uniq_ptr_impl<int,test_cpp_smart_ptr()___2> *)this);
 return uVar1;
}



/* Function: operator() @ 000127d0 */

/* test_cpp_smart_ptr()_$_2_TEMPNAMEPLACEHOLDERVALUE(int*) const */

void __thiscall test_cpp_smart_ptr()_$_2_operator()(__2 *this,int *param_1)

{
 *param_1 = -1;
 if (param_1 != (int *)0x0) {
 operator_delete(param_1);
 }
 return;
}



/* Function: get<0u,int*,test_cpp_smart_ptr()_$_2> @ 00012820 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std_tuple_element<0u, std_tuple<int*, test_cpp_smart_ptr()_$_2> >_type& std_get<0u, int*,
 test_cpp_smart_ptr()_$_2>(std_tuple<int*, test_cpp_smart_ptr()_$_2>&) */

type * std_get_0u_int_ptr_ref(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)std___get_helper_0u_int_ptr_ref((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: __get_helper<0u,int*,test_cpp_smart_ptr()_$_2> @ 00012850 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std___get_helper<0u, int*, test_cpp_smart_ptr()_$_2>(std__Tuple_impl<0u, int*,
 test_cpp_smart_ptr()_$_2>&) */

int ** std___get_helper_0u_int_ptr_ref(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)std__Tuple_impl_0u_int_ptr_test_cpp_smart_ptr___2__M_head(param_1);
 return ppiVar1;
}



/* Function: _M_head @ 00012880 */

/* std__Tuple_impl<0u, int*, test_cpp_smart_ptr()_$_2>__M_head(std__Tuple_impl<0u, int*,
 test_cpp_smart_ptr()_$_2>&) */

void __thiscall std__Tuple_impl_0u_int_ptr_test_cpp_smart_ptr___2__M_head(_Tuple_impl *this)

{
 std__Head_base_0u_int_ptr_false__M_head((_Head_base *)this);
 return;
}



/* Function: _M_deleter @ 000128b0 */

/* std___uniq_ptr_impl<int, test_cpp_smart_ptr()_$_2>__M_deleter() */

void __thiscall
std___uniq_ptr_impl_int_test_cpp_smart_ptr___2__M_deleter
 (__uniq_ptr_impl *this)

{
 std_get_1u_int_ptr_ref((tuple *)this);
 return;
}



/* Function: get<1u,int*,test_cpp_smart_ptr()_$_2> @ 000128e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std_tuple_element<1u, std_tuple<int*, test_cpp_smart_ptr()_$_2> >_type& std_get<1u, int*,
 test_cpp_smart_ptr()_$_2>(std_tuple<int*, test_cpp_smart_ptr()_$_2>&) */

type * std_get_1u_int_ptr_ref(tuple *param_1)

{
 __2 *p_Var1;
 
 p_Var1 = std___get_helper_1u_test_cpp_smart_ptr___2((_Tuple_impl *)param_1);
 return (type *)p_Var1;
}



/* Function: __get_helper<1u,test_cpp_smart_ptr()_$_2> @ 00012910 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr()_$_2& std___get_helper<1u, test_cpp_smart_ptr()_$_2>(std__Tuple_impl<1u,
 test_cpp_smart_ptr()_$_2>&) */

__2 * std___get_helper_1u_test_cpp_smart_ptr___2(_Tuple_impl *param_1)

{
 __2 *p_Var1;
 
 p_Var1 = (__2 *)std__Tuple_impl_1u_test_cpp_smart_ptr___2__M_head(param_1);
 return p_Var1;
}



/* Function: _M_head @ 00012940 */

/* std__Tuple_impl<1u, test_cpp_smart_ptr()_$_2>__M_head(std__Tuple_impl<1u,
 test_cpp_smart_ptr()_$_2>&) */

void __thiscall std__Tuple_impl_1u_test_cpp_smart_ptr___2__M_head(_Tuple_impl *this)

{
 std__Head_base_1u_test_cpp_smart_ptr___2_true__M_head((_Head_base *)this);
 return;
}



/* Function: _M_head @ 00012970 */

/* std__Head_base<1u, test_cpp_smart_ptr()_$_2, true>__M_head(std__Head_base<1u,
 test_cpp_smart_ptr()_$_2, true>&) */

_Head_base * std__Head_base_1u_test_cpp_smart_ptr___2_true__M_head(_Head_base *this)

{
 return this;
}



/* Function: get @ 00012980 */

/* std_unique_ptr<int, test_cpp_smart_ptr()_$_2>_get() const */

undefined4 __thiscall
std_unique_ptr_int_test_cpp_smart_ptr___2__get(unique_ptr *this)

{
 undefined4 uVar1;
 
 /* try { // try from 0001299c to 000129a4 has its CatchHandler @ 000129b6 */
 uVar1 = __uniq_ptr_impl<int,test_cpp_smart_ptr()_$_2>__M_ptr
 ((__uniq_ptr_impl<int,test_cpp_smart_ptr()___2> *)this);
 return uVar1;
}



/* Function: _M_ptr @ 000129d0 */

/* std___uniq_ptr_impl<int, test_cpp_smart_ptr()_$_2>__M_ptr() const */

undefined4 __thiscall
std___uniq_ptr_impl_int_test_cpp_smart_ptr___2__M_ptr_const
 (__uniq_ptr_impl *this)

{
 type *ptVar1;
 
 ptVar1 = get<0u,int*,test_cpp_smart_ptr()___2>((tuple *)this);
 return *(undefined4 *)ptVar1;
}



/* Function: get<0u,int*,test_cpp_smart_ptr()_$_2> @ 00012a00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std_tuple_element<0u, std_tuple<int*, test_cpp_smart_ptr()_$_2> >_type const& std_get<0u,
 int*, test_cpp_smart_ptr()_$_2>(std_tuple<int*, test_cpp_smart_ptr()_$_2> const&) */

type * std_get_0u_int_ptr_std_default_delete_int_const(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)std___get_helper_0u_int_ptr_std_default_delete_int_const((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: __get_helper<0u,int*,test_cpp_smart_ptr()_$_2> @ 00012a30 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* const& std___get_helper<0u, int*, test_cpp_smart_ptr()_$_2>(std__Tuple_impl<0u, int*,
 test_cpp_smart_ptr()_$_2> const&) */

int ** std___get_helper_0u_int_ptr_std_default_delete_int_const(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)std__Tuple_impl_0u_int_ptr_std_default_delete_int_const__M_head(param_1);
 return ppiVar1;
}



/* Function: _M_head @ 00012a60 */

/* std__Tuple_impl<0u, int*, test_cpp_smart_ptr()_$_2>__M_head(std__Tuple_impl<0u, int*,
 test_cpp_smart_ptr()_$_2> const&) */

void __thiscall std__Tuple_impl_0u_int_ptr_std_default_delete_int_const__M_head(_Tuple_impl *this)

{
 std__Head_base_0u_int_ptr_false__M_head((_Head_base *)this);
 return;
}



/* Function: SimpleClass @ 00012a90 */

/* SimpleClass_SimpleClass(int, char const*) */

void __thiscall SimpleClass_SimpleClass(SimpleClass *this,int param_1,char *param_2)

{
 *(int *)this = param_1;
 strncpy((char *)(this + 4),param_2,0x1f);
 this[0x23] = (SimpleClass)0x0;
 return;
}



/* Function: setValue @ 00012ae0 */

/* SimpleClass_setValue(int) */

void __thiscall SimpleClass_setValue(SimpleClass *this,int param_1)

{
 *(int *)this = param_1;
 return;
}



/* Function: getValue @ 00012b00 */

/* SimpleClass_getValue() const */

undefined4 __thiscall SimpleClass_getValue(SimpleClass *this)

{
 return *(undefined4 *)this;
}



/* Function: compute @ 00012b10 */

/* SimpleClass_compute(int) const */

int __thiscall SimpleClass_compute(SimpleClass *this,int param_1)

{
 int iVar1;
 size_t sVar2;
 
 iVar1 = *(int *)this;
 sVar2 = strlen((char *)(this + 4));
 return iVar1 * param_1 + sVar2;
}



/* Function: getClassID @ 00012b50 */

/* SimpleClass_getClassID() */

undefined4 SimpleClass_getClassID(void)

{
 return 0x1234;
}



/* Function: LifecycleClass @ 00012b60 */

/* LifecycleClass_LifecycleClass(unsigned int) */

void __thiscall LifecycleClass_LifecycleClass(LifecycleClass *this,uint param_1)

{
 uint uVar1;
 void *pvVar2;
 uint local_c;
 
 *(uint *)(this + 4) = param_1;
 uVar1 = (uint)((ulonglong)param_1 * 4);
 if ((int)((ulonglong)param_1 * 4 >> 0x20) != 0) {
 uVar1 = 0xffffffff;
 }
 pvVar2 = operator_new__(uVar1);
 *(void **)this = pvVar2;
 for (local_c = 0; local_c < param_1; local_c = local_c + 1) {
 *(uint *)(*(int *)this + local_c * 4) = local_c * 10;
 }
 instance_count = instance_count + 1;
 return;
}



/* Function: getData @ 00012c00 */

/* LifecycleClass_getData(unsigned int) const */

undefined4 __thiscall LifecycleClass_getData(LifecycleClass *this,uint param_1)

{
 undefined4 local_c;
 
 if (param_1 < *(uint *)(this + 4)) {
 local_c = *(undefined4 *)(*(int *)this + param_1 * 4);
 }
 else {
 local_c = 0xffffffff;
 }
 return local_c;
}



/* Function: getInstanceCount @ 00012c50 */

/* LifecycleClass_getInstanceCount() */

undefined4 LifecycleClass_getInstanceCount(void)

{
 return instance_count;
}



/* Function: ~LifecycleClass @ 00012c70 */

/* LifecycleClass_~LifecycleClass() */

void __thiscall LifecycleClass_~LifecycleClass(LifecycleClass *this)

{
 if (*(void **)this != (void *)0x0) {
 operator_delete__(*(void **)this);
 }
 instance_count = instance_count + -1;
 return;
}



/* Function: Base @ 00012cc0 */

/* Base_Base() */

void __thiscall Base_Base(Base *this)

{
 *(undefined ***)this = &PTR_virtual_func_00018c3c;
 return;
}



/* Function: Derived @ 00012cf0 */

/* Derived_Derived(int) */

void __thiscall Derived_Derived(Derived *this,int param_1)

{
 Base_Base((Base *)this);
 *(undefined ***)this = &PTR_virtual_func_00018c5c;
 *(int *)(this + 4) = param_1;
 return;
}



/* Function: virtual_func @ 00012d40 */

/* Base_virtual_func(int) */

int __thiscall Base_virtual_func(Base *this,int param_1)

{
 return param_1 + 1;
}



/* Function: virtual_func @ 00012d60 */

/* Derived_virtual_func(int) */

int __thiscall Derived_virtual_func(Derived *this,int param_1)

{
 return param_1 * *(int *)(this + 4);
}



/* Function: ~Derived @ 00012d80 */

/* Derived_~Derived() */

void __thiscall Derived_~Derived(Derived *this)

{
 Base_~Base((Base *)this);
 return;
}



/* Function: ~Base @ 00012db0 */

/* Base_~Base() */

Base * Base_~Base_return_this(Base *this)

{
 return this;
}



/* Function: MultiDerived @ 00012dc0 */

/* MultiDerived_MultiDerived() */

void __thiscall MultiDerived_MultiDerived(MultiDerived *this)

{
 BaseA_BaseA((BaseA *)this);
 BaseB_BaseB((BaseB *)(this + 8));
 *(undefined ***)this = &PTR_funcA_00018c80;
 *(undefined ***)(this + 8) = &PTR_funcB_00018c98;
 return;
}



/* Function: ~MultiDerived @ 00012e20 */

/* MultiDerived_~MultiDerived() */

void __thiscall MultiDerived_~MultiDerived(MultiDerived *this)

{
 BaseB_~BaseB((BaseB *)(this + 8));
 BaseA_~BaseA((BaseA *)this);
 return;
}



/* Function: DiamondDerived @ 00012e60 */

/* DiamondDerived_DiamondDerived() */

void __thiscall DiamondDerived_DiamondDerived(DiamondDerived *this)

{
 VirtualBase_VirtualBase((VirtualBase *)(this + 0x10));
 MiddleA_MiddleA((MiddleA *)this);
 MiddleB_MiddleB((MiddleB *)(this + 8));
 *(undefined4 *)this = 0x18d08;
 *(undefined4 *)(this + 0x10) = 0x18d3c;
 *(undefined4 *)(this + 8) = 0x18d20;
 return;
}



/* Function: ~DiamondDerived @ 00012f00 */

/* DiamondDerived_~DiamondDerived() */

void __thiscall DiamondDerived_~DiamondDerived(DiamondDerived *this)

{
 VirtualBase_~VirtualBase((VirtualBase *)(this + 0x10));
 return;
}



/* Function: Point @ 00012f50 */

/* Point_Point(int, int) */

void __thiscall Point_Point(Point *this,int param_1,int param_2)

{
 *(int *)this = param_1;
 *(int *)(this + 4) = param_2;
 return;
}



/* Function: operator+ @ 00012f70 */

/* Point_TEMPNAMEPLACEHOLDERVALUE(Point const&) const */

Point * __thiscall Point_operator+(Point *this,Point *param_1)

{
 Point *in_stack_0000000c = (Point *)((char *)&param_1 + 8);
 
 Point_Point(this,*(int *)param_1 + *(int *)in_stack_0000000c,*(int *)(param_1 + 4) + *(int *)(in_stack_0000000c + 1));
 return this;
}



/* Function: operator== @ 00012fd0 */

/* Point_TEMPNAMEPLACEHOLDERVALUE(Point const&) const */

bool __thiscall Point_operator==(Point *this,Point *param_1)

{
 bool local_5;
 
 local_5 = false;
 if (*(int *)this == *(int *)param_1) {
 local_5 = *(int *)(this + 4) == *(int *)(param_1 + 4);
 }
 return local_5;
}



/* Function: operator++ @ 00013020 */

/* Point_TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall Point_operator++(Point *this)

{
 *(int *)this = *(int *)this + 1;
 *(int *)(this + 4) = *(int *)(this + 4) + 1;
 return;
}



/* Function: template_max_int @ 00013040 */

/* int template_max_int(int, int) */

int template_max_int(int param_1,int param_2)

{
 undefined4 local_8;
 
 if (param_2 < param_1) {
 local_8 = param_1;
 }
 else {
 local_8 = param_2;
 }
 return local_8;
}



/* Function: template_max_double @ 00013070 */

/* double template_max_double(double, double) */

double template_max_double(double param_1,double param_2)

{
 undefined8 local_c;
 
 if (param_1 <= param_2) {
 local_c = param_2;
 }
 else {
 local_c = param_1;
 }
 return local_c;
}



/* Function: template_swap_int @ 000130b0 */

/* void template_swap_int(int*, int*) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container_int @ 000130e0 */

/* Container_int_Container_int() */

void __thiscall Container_int_Container(Container_int *this)

{
 *(undefined4 *)(this + 0x28) = 0;
 return;
}



/* Function: push @ 00013100 */

/* Container_int_push(int) */

void __thiscall Container_int_push(Container_int *this,int param_1)

{
 int iVar1;
 
 if (*(int *)(this + 0x28) < 10) {
 iVar1 = *(int *)(this + 0x28);
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get @ 00013140 */

/* Container_int_get(int) */

undefined4 __thiscall Container_int_get(Container_int *this,int param_1)

{
 undefined4 local_8;
 
 if ((param_1 < 0) || (*(int *)(this + 0x28) <= param_1)) {
 local_8 = 0;
 }
 else {
 local_8 = *(undefined4 *)(this + param_1 * 4);
 }
 return local_8;
}



/* Function: getSize @ 00013190 */

/* Container_int_getSize() */

undefined4 __thiscall Container_int_getSize(Container_int *this)

{
 return *(undefined4 *)(this + 0x28);
}



/* Function: Container_double @ 000131a0 */

/* Container_double_Container_double() */

void __thiscall Container_double_Container(Container_double *this)

{
 *(undefined4 *)(this + 0x50) = 0;
 return;
}



/* Function: push @ 000131c0 */

/* Container_double_push(double) */

void __thiscall Container_double_push(Container_double *this,double param_1)

{
 int iVar1;
 
 if (*(int *)(this + 0x50) < 10) {
 iVar1 = *(int *)(this + 0x50);
 *(int *)(this + 0x50) = iVar1 + 1;
 *(double *)(this + iVar1 * 8) = param_1;
 }
 return;
}



/* Function: get @ 00013200 */

/* Container_double_get(int) */

longdouble __thiscall Container_double_get(Container_double *this,int param_1)

{
 double local_c;
 
 if ((param_1 < 0) || (*(int *)(this + 0x50) <= param_1)) {
 local_c = 0.0;
 }
 else {
 local_c = *(double *)(this + param_1 * 8);
 }
 return (longdouble)local_c;
}



/* Function: getSize @ 00013260 */

/* Container_double_getSize() const */

undefined4 __thiscall Container_double_getSize(Container_double *this)

{
 return *(undefined4 *)(this + 0x50);
}



/* Function: unique_ptr<std_default_delete<int>,void> @ 00013270 */

/* std_unique_ptr<int, std_default_delete<int> >_unique_ptr<std_default_delete<int>, void>(int*)
 */

void __thiscall
std_unique_ptr_int_std_default_delete_int__unique_ptr_std_default_delete_int_void
 (unique_ptr *this,int *param_1)

{
 /* try { // try from 00013292 to 0001329d has its CatchHandler @ 000132a9 */
 __uniq_ptr_data<int,std_default_delete<int>,true,true>___uniq_ptr_impl
 ((__uniq_ptr_data<int,std_default_delete<int>,true,true> *)this,param_1);
 return;
}



/* Function: operator* @ 000132c0 */

/* std_unique_ptr<int, std_default_delete<int> >_TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall
std_unique_ptr_int_std_default_delete_int__operator*
 (unique_ptr *this)

{
 get(this);
 return;
}



/* Function: move<std_unique_ptr<int,std_default_delete<int>>&> @ 00013300 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std_remove_reference<std_unique_ptr<int, std_default_delete<int> >&>_type&&
 std_move<std_unique_ptr<int, std_default_delete<int> >&>(std_unique_ptr<int,
 std_default_delete<int> >&) */

type * std_move_std_unique_ptr_int_std_default_delete_int_ref(unique_ptr *param_1)

{
 return (type *)param_1;
}



/* Function: unique_ptr @ 00013310 */

/* std_unique_ptr<int, std_default_delete<int> >_unique_ptr(std_unique_ptr<int,
 std_default_delete<int> >&&) */

void __thiscall
std_unique_ptr_int_std_default_delete_int__unique_ptr
 (unique_ptr *this,unique_ptr *param_1)

{
 __uniq_ptr_data<int,std_default_delete<int>,true,true>___uniq_ptr_data
 ((__uniq_ptr_data<int,std_default_delete<int>,true,true> *)this,
 (__uniq_ptr_data *)param_1);
 return;
}



/* Function: unique_ptr<int*,std_default_delete<int[]>,void,bool> @ 00013350 */

/* std_unique_ptr<int [], std_default_delete<int []> >_unique_ptr<int*, std_default_delete<int
 []>, void, bool>(int*) */

void __thiscall
std_unique_ptr_int_array_std_default_delete_int_array__unique_ptr_int_ptr_std_default_delete_int_array_void_bool
 (unique_ptr *this,int *param_1)

{
 /* try { // try from 00013372 to 0001337d has its CatchHandler @ 00013389 */
 __uniq_ptr_data<int,std_default_delete<int[]>,true,true>___uniq_ptr_impl
 ((__uniq_ptr_data<int,std_default_delete<int[]>,true,true> *)this,param_1);
 return;
}



/* Function: operator[] @ 000133a0 */

/* std_unique_ptr<int [], std_default_delete<int []> >_operator[](unsigned int) const */

int __thiscall
std_unique_ptr_int_array_std_default_delete_int_array__operator[]
 (unique_ptr *this,uint param_1)

{
 int iVar1;
 
 iVar1 = get(this);
 return iVar1 + param_1 * 4;
}



/* Function: ~unique_ptr @ 000133f0 */

/* std_unique_ptr<int [], std_default_delete<int []> >_~unique_ptr() */

void __thiscall
std_unique_ptr_int_array_std_default_delete_int_array__unique_ptr
 (unique_ptr *this)

{
 int *piVar1;
 default_delete<int[]> *this_00;
 
 piVar1 = (int *)__uniq_ptr_impl<int,std_default_delete<int[]>>__M_ptr
 ((__uniq_ptr_impl<int,std_default_delete<int[]>> *)this);
 if (*piVar1 != 0) {
 this_00 = (default_delete<int[]> *)get_deleter(this);
 /* try { // try from 0001343f to 0001344a has its CatchHandler @ 00013464 */
 default_delete<int[]>_operator()(this_00,(int *)*piVar1);
 }
 *piVar1 = 0;
 return;
}



/* Function: ~unique_ptr @ 00013470 */

/* std_unique_ptr<int, std_default_delete<int> >_~unique_ptr() */

void __thiscall
std_unique_ptr_int_std_default_delete_int__unique_ptr
 (unique_ptr *this)

{
 int **ppiVar1;
 default_delete<int> *this_00;
 type *ptVar2;
 
 ppiVar1 = (int **)__uniq_ptr_impl<int,std_default_delete<int>>__M_ptr
 ((__uniq_ptr_impl<int,std_default_delete<int>> *)this);
 if (*ppiVar1 != (int *)0x0) {
 this_00 = (default_delete<int> *)get_deleter(this);
 ptVar2 = move_int_ptr_ref(ppiVar1);
 /* try { // try from 000134cf to 000134da has its CatchHandler @ 000134f4 */
 std_default_delete_int__operator()(this_00,*(int **)ptVar2);
 }
 *ppiVar1 = (int *)0x0;
 return;
}



/* Function: RTTIDerivedA @ 00013500 */

/* RTTIDerivedA_RTTIDerivedA() */

void __thiscall RTTIDerivedA_RTTIDerivedA(RTTIDerivedA *this)

{
 RTTIBase_RTTIBase((RTTIBase *)this);
 *(undefined ***)this = &PTR__RTTIDerivedA_00018eb8;
 return;
}



/* Function: RTTIDerivedB @ 00013540 */

/* RTTIDerivedB_RTTIDerivedB() */

void __thiscall RTTIDerivedB_RTTIDerivedB(RTTIDerivedB *this)

{
 RTTIBase_RTTIBase((RTTIBase *)this);
 *(undefined ***)this = &PTR__RTTIDerivedB_00018ee0;
 return;
}



/* Function: operator== @ 00013580 */

/* std_type_info_TEMPNAMEPLACEHOLDERVALUE(std_type_info const&) const */

bool __thiscall std_type_info_operator==(type_info *this,type_info *param_1)

{
 int iVar1;
 bool local_15;
 bool local_9;
 
 local_9 = true;
 if (*(int *)(this + 4) != *(int *)(param_1 + 4)) {
 local_15 = false;
 if (**(char **)(this + 4) != '*') {
 iVar1 = strcmp(*(char **)(this + 4),*(char **)(param_1 + 4));
 local_15 = iVar1 == 0;
 }
 local_9 = local_15;
 }
 return local_9;
}



/* Function: derivedA_data @ 00013610 */

/* RTTIDerivedA_derivedA_data() const */

undefined4 RTTIDerivedA_derivedA_data(void)

{
 return 100;
}



/* Function: derivedB_data @ 00013620 */

/* RTTIDerivedB_derivedB_data() const */

undefined4 RTTIDerivedB_derivedB_data(void)

{
 return 200;
}



/* Function: name @ 00013630 */

/* std_type_info_name() const */

int __thiscall std_type_info_name(type_info *this)

{
 int local_c;
 
 if (**(char **)(this + 4) == '*') {
 local_c = *(int *)(this + 4) + 1;
 }
 else {
 local_c = *(int *)(this + 4);
 }
 return local_c;
}



/* Function: getName @ 00013670 */

/* Base_getName() const */

undefined * Base_getName(void)

{
 return &DAT_00015189;
}



/* Function: ~Base @ 00013690 */

/* Base_~Base() */

void __thiscall Base_~Base(Base *this)

{
 operator_delete(this);
 return;
}



/* Function: getName @ 000136d0 */

/* Derived_getName() const */

char * Derived_getName(void)

{
 return "Derived";
}



/* Function: ~Derived @ 000136f0 */

/* Derived_~Derived() */

void __thiscall Derived_~Derived(Derived *this)

{
 operator_delete(this);
 return;
}



/* Function: BaseA @ 00013730 */

/* BaseA_BaseA() */

void __thiscall BaseA_BaseA(BaseA *this)

{
 *(undefined ***)this = &PTR_funcA_00018cdc;
 return;
}



/* Function: BaseB @ 00013760 */

/* BaseB_BaseB() */

void __thiscall BaseB_BaseB(BaseB *this)

{
 *(undefined ***)this = &PTR_funcB_00018cf0;
 return;
}



/* Function: funcA @ 00013790 */

/* MultiDerived_funcA() */

undefined4 MultiDerived_funcA(void)

{
 return 0x1e;
}



/* Function: ~MultiDerived @ 000137a0 */

/* MultiDerived_~MultiDerived() */

void __thiscall MultiDerived_~MultiDerived(MultiDerived *this)

{
 operator_delete(this);
 return;
}



/* Function: funcB @ 000137e0 */

/* MultiDerived_funcB() */

undefined4 MultiDerived_funcB(void)

{
 return 0x28;
}



/* Function: funcB @ 000137f0 */

/* non-virtual thunk to MultiDerived_funcB() */

void __thiscall MultiDerived_funcB(MultiDerived *this)

{
 funcB();
 return;
}



/* Function: ~MultiDerived @ 00013820 */

/* non-virtual thunk to MultiDerived_~MultiDerived() */

void __thiscall MultiDerived_~MultiDerived_thunk1(MultiDerived *this)

{
 MultiDerived_~MultiDerived(this + -8);
 return;
}



/* Function: ~MultiDerived @ 00013850 */

/* non-virtual thunk to MultiDerived_~MultiDerived() */

void __thiscall MultiDerived_~MultiDerived_thunk2(MultiDerived *this)

{
 MultiDerived_~MultiDerived(this + -8);
 return;
}



/* Function: funcA @ 00013880 */

/* BaseA_funcA() */

undefined4 BaseA_funcA(void)

{
 return 10;
}



/* Function: ~BaseA @ 00013890 */

/* BaseA_~BaseA() */

BaseA * BaseA_~BaseA_return_this(BaseA *this)

{
 return this;
}



/* Function: ~BaseA @ 000138a0 */

/* BaseA_~BaseA() */

void __thiscall BaseA_~BaseA(BaseA *this)

{
 operator_delete(this);
 return;
}



/* Function: funcB @ 000138e0 */

/* BaseB_funcB() */

undefined4 BaseB_funcB(void)

{
 return 0x14;
}



/* Function: ~BaseB @ 000138f0 */

/* BaseB_~BaseB() */

BaseB * BaseB_~BaseB_return_this(BaseB *this)

{
 return this;
}



/* Function: ~BaseB @ 00013900 */

/* BaseB_~BaseB() */

void __thiscall BaseB_~BaseB(BaseB *this)

{
 operator_delete(this);
 return;
}



/* Function: VirtualBase @ 00013940 */

/* VirtualBase_VirtualBase() */

void __thiscall VirtualBase_VirtualBase(VirtualBase *this)

{
 *(undefined ***)this = &PTR_func_00018e2c;
 return;
}



/* Function: MiddleA @ 00013970 */

/* MiddleA_MiddleA() */

void __thiscall MiddleA_MiddleA(MiddleA *this)

{
 undefined4 *in_stack_00000008 = (undefined4 *)((char *)&this + 4);
 
 *(undefined4 *)this = *in_stack_00000008;
 *(undefined4 *)(this + *(int *)(*(int *)this + -0xc)) = in_stack_00000008[1];
 return;
}



/* Function: MiddleB @ 00013990 */

/* MiddleB_MiddleB() */

void __thiscall MiddleB_MiddleB(MiddleB *this)

{
 undefined4 *in_stack_00000008 = (undefined4 *)((char *)&this + 4);
 
 *(undefined4 *)this = *in_stack_00000008;
 *(undefined4 *)(this + *(int *)(*(int *)this + -0xc)) = in_stack_00000008[1];
 return;
}



/* Function: func @ 000139b0 */

/* MiddleA_func() */

int __thiscall MiddleA_func(MiddleA *this)

{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0x96;
}



/* Function: ~MiddleA @ 000139d0 */

/* MiddleA_~MiddleA() */

void __thiscall MiddleA_~MiddleA_thunk1(MiddleA *this)

{
 MiddleA_~MiddleA(this);
 VirtualBase_~VirtualBase((VirtualBase *)(this + 8));
 return;
}



/* Function: ~MiddleA @ 00013a20 */

/* MiddleA_~MiddleA() */

void __thiscall MiddleA_~MiddleA(MiddleA *this)

{
 operator_delete(this);
 return;
}



/* Function: func @ 00013a60 */

/* virtual thunk to MiddleA_func() */

void __thiscall MiddleA_func_thunk(MiddleA *this)

{
 func(this + *(int *)(*(int *)this + -0xc));
 return;
}



/* Function: ~MiddleA @ 00013a90 */

/* virtual thunk to MiddleA_~MiddleA() */

void __thiscall MiddleA_~MiddleA_thunk2(MiddleA *this)

{
 MiddleA_~MiddleA(this + *(int *)(*(int *)this + -0x10));
 return;
}



/* Function: ~MiddleA @ 00013ac0 */

/* virtual thunk to MiddleA_~MiddleA() */

void __thiscall MiddleA_~MiddleA_thunk3(MiddleA *this)

{
 MiddleA_~MiddleA(this + *(int *)(*(int *)this + -0x10));
 return;
}



/* Function: func @ 00013af0 */

/* MiddleB_func() */

int __thiscall MiddleB_func(MiddleB *this)

{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 200;
}



/* Function: ~MiddleB @ 00013b10 */

/* MiddleB_~MiddleB() */

void __thiscall MiddleB_~MiddleB_thunk1(MiddleB *this)

{
 MiddleB_~MiddleB(this);
 VirtualBase_~VirtualBase((VirtualBase *)(this + 8));
 return;
}



/* Function: ~MiddleB @ 00013b60 */

/* MiddleB_~MiddleB() */

void __thiscall MiddleB_~MiddleB(MiddleB *this)

{
 operator_delete(this);
 return;
}



/* Function: func @ 00013ba0 */

/* virtual thunk to MiddleB_func() */

void __thiscall MiddleB_func_thunk(MiddleB *this)

{
 func(this + *(int *)(*(int *)this + -0xc));
 return;
}



/* Function: ~MiddleB @ 00013bd0 */

/* virtual thunk to MiddleB_~MiddleB() */

void __thiscall MiddleB_~MiddleB_thunk2(MiddleB *this)

{
 MiddleB_~MiddleB(this + *(int *)(*(int *)this + -0x10));
 return;
}



/* Function: ~MiddleB @ 00013c00 */

/* virtual thunk to MiddleB_~MiddleB() */

void __thiscall MiddleB_~MiddleB_thunk3(MiddleB *this)

{
 MiddleB_~MiddleB(this + *(int *)(*(int *)this + -0x10));
 return;
}



/* Function: func @ 00013c30 */

/* DiamondDerived_func() */

int __thiscall DiamondDerived_func(DiamondDerived *this)

{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0xfa;
}



/* Function: ~DiamondDerived @ 00013c50 */

/* DiamondDerived_~DiamondDerived() */

void __thiscall DiamondDerived_~DiamondDerived(DiamondDerived *this)

{
 operator_delete(this);
 return;
}



/* Function: func @ 00013c90 */

/* non-virtual thunk to DiamondDerived_func() */

void __thiscall DiamondDerived_func_thunk1(DiamondDerived *this)

{
 func(this + -8);
 return;
}



/* Function: ~DiamondDerived @ 00013cc0 */

/* non-virtual thunk to DiamondDerived_~DiamondDerived() */

void __thiscall DiamondDerived_~DiamondDerived_thunk1(DiamondDerived *this)

{
 DiamondDerived_~DiamondDerived(this + -8);
 return;
}



/* Function: ~DiamondDerived @ 00013cf0 */

/* non-virtual thunk to DiamondDerived_~DiamondDerived() */

void __thiscall DiamondDerived_~DiamondDerived_thunk2(DiamondDerived *this)

{
 DiamondDerived_~DiamondDerived(this + -8);
 return;
}



/* Function: func @ 00013d20 */

/* virtual thunk to DiamondDerived_func() */

void __thiscall DiamondDerived_func_thunk2(DiamondDerived *this)

{
 func(this + *(int *)(*(int *)this + -0xc));
 return;
}



/* Function: ~DiamondDerived @ 00013d50 */

/* virtual thunk to DiamondDerived_~DiamondDerived() */

void __thiscall DiamondDerived_~DiamondDerived_thunk3(DiamondDerived *this)

{
 DiamondDerived_~DiamondDerived(this + *(int *)(*(int *)this + -0x10));
 return;
}



/* Function: ~DiamondDerived @ 00013d80 */

/* virtual thunk to DiamondDerived_~DiamondDerived() */

void __thiscall DiamondDerived_~DiamondDerived_thunk4(DiamondDerived *this)

{
 DiamondDerived_~DiamondDerived(this + *(int *)(*(int *)this + -0x10));
 return;
}



/* Function: func @ 00013db0 */

/* VirtualBase_func() */

undefined4 VirtualBase_func(void)

{
 return 100;
}



/* Function: ~VirtualBase @ 00013dc0 */

/* VirtualBase_~VirtualBase() */

VirtualBase * VirtualBase_~VirtualBase_return_this(VirtualBase *this)

{
 return this;
}



/* Function: ~VirtualBase @ 00013dd0 */

/* VirtualBase_~VirtualBase() */

void __thiscall VirtualBase_~VirtualBase(VirtualBase *this)

{
 operator_delete(this);
 return;
}



/* Function: ~MiddleA @ 00013e10 */

/* MiddleA_~MiddleA() */

MiddleA * MiddleA_~MiddleA_return_this(MiddleA *this)

{
 return this;
}



/* Function: ~MiddleB @ 00013e20 */

/* MiddleB_~MiddleB() */

MiddleB * MiddleB_~MiddleB_return_this(MiddleB *this)

{
 return this;
}



/* Function: ~DiamondDerived @ 00013e30 */

/* DiamondDerived_~DiamondDerived() */

void __thiscall DiamondDerived_~DiamondDerived(DiamondDerived *this)

{
 MiddleB_~MiddleB((MiddleB *)(this + 8));
 MiddleA_~MiddleA((MiddleA *)this);
 return;
}



/* Function: __uniq_ptr_data @ 00013e90 */

/* std___uniq_ptr_data<int, std_default_delete<int>, true,
 true>___uniq_ptr_data(std___uniq_ptr_data<int, std_default_delete<int>, true, true>&&) */

void __thiscall
std___uniq_ptr_data_int_std_default_delete_int_true_true___uniq_ptr_data
 (__uniq_ptr_data *this,__uniq_ptr_data *param_1)

{
 std___uniq_ptr_impl_int_std_default_delete_int____uniq_ptr_impl
 ((__uniq_ptr_impl *)this,(__uniq_ptr_impl *)param_1);
 return;
}



/* Function: __uniq_ptr_impl @ 00013ed0 */

/* std___uniq_ptr_impl<int, std_default_delete<int> >___uniq_ptr_impl(std___uniq_ptr_impl<int,
 std_default_delete<int> >&&) */

void __thiscall
std___uniq_ptr_impl_int_std_default_delete_int____uniq_ptr_impl
 (__uniq_ptr_impl *this,__uniq_ptr_impl *param_1)

{
 type *ptVar1;
 undefined4 *puVar2;
 
 ptVar1 = std_move_std_tuple_int_ptr_std_default_delete_int_ref((tuple *)param_1);
 std_tuple_int_ptr_std_default_delete_int__tuple
 ((tuple *)this,(tuple *)ptVar1);
 /* try { // try from 00013f18 to 00013f20 has its CatchHandler @ 00013f38 */
 puVar2 = (undefined4 *)_M_ptr((__uniq_ptr_impl *)param_1);
 *puVar2 = 0;
 return;
}



/* Function: move<std_tuple<int*,std_default_delete<int>>&> @ 00013f50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std_remove_reference<std_tuple<int*, std_default_delete<int> >&>_type&&
 std_move<std_tuple<int*, std_default_delete<int> >&>(std_tuple<int*, std_default_delete<int>
 >&) */

type * std_move_std_tuple_int_ptr_std_default_delete_int_ref(tuple *param_1)

{
 return (type *)param_1;
}



/* Function: tuple @ 00013f60 */

/* std_tuple<int*, std_default_delete<int> >_tuple(std_tuple<int*, std_default_delete<int> >&&)
 */

void __thiscall
std_tuple_int_ptr_std_default_delete_int__tuple
 (tuple *this,tuple *param_1)

{
 std__Tuple_impl_0u_int_ptr_std_default_delete_int__Tuple_impl
 ((_Tuple_impl *)this,(_Tuple_impl *)param_1);
 return;
}



/* Function: _M_ptr @ 00013fa0 */

/* std___uniq_ptr_impl<int, std_default_delete<int> >__M_ptr() */

void __thiscall
std___uniq_ptr_impl_int_std_default_delete_int__M_ptr
 (__uniq_ptr_impl *this)

{
 std_get_0u_int_ptr_std_default_delete_int((tuple *)this);
 return;
}



/* Function: __clang_call_terminate @ 00013fd0 */

void __clang_call_terminate(undefined4 param_1)

{
 __cxa_begin_catch(param_1,&_GLOBAL_OFFSET_TABLE_);
 /* WARNING: Subroutine does not return */
 std_terminate();
}



/* Function: _Tuple_impl @ 00014000 */

/* std__Tuple_impl<0u, int*, std_default_delete<int> >__Tuple_impl(std__Tuple_impl<0u, int*,
 std_default_delete<int> >&&) */

void __thiscall
std__Tuple_impl_0u_int_ptr_std_default_delete_int__Tuple_impl
 (_Tuple_impl *this,_Tuple_impl *param_1)

{
 std__Tuple_impl_1u_std_default_delete_int__Tuple_impl((_Tuple_impl *)this);
 *(undefined4 *)this = *(undefined4 *)param_1;
 return;
}



/* Function: _Tuple_impl @ 00014040 */

/* std__Tuple_impl<1u, std_default_delete<int> >__Tuple_impl(std__Tuple_impl<1u,
 std_default_delete<int> >&&) */

void __thiscall std__Tuple_impl_1u_std_default_delete_int__Tuple_impl(_Tuple_impl *this)

{
 return;
}



/* Function: get<0u,int*,std_default_delete<int>> @ 00014050 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std_tuple_element<0u, std_tuple<int*, std_default_delete<int> > >_type& std_get<0u, int*,
 std_default_delete<int> >(std_tuple<int*, std_default_delete<int> >&) */

type * std_get_0u_int_ptr_std_default_delete_int(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)std___get_helper_0u_int_ptr_std_default_delete_int((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: __get_helper<0u,int*,std_default_delete<int>> @ 00014080 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std___get_helper<0u, int*, std_default_delete<int> >(std__Tuple_impl<0u, int*,
 std_default_delete<int> >&) */

int ** std___get_helper_0u_int_ptr_std_default_delete_int(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)std__Tuple_impl_0u_int_ptr_std_default_delete_int__M_head(param_1);
 return ppiVar1;
}



/* Function: _M_head @ 000140b0 */

/* std__Tuple_impl<0u, int*, std_default_delete<int> >__M_head(std__Tuple_impl<0u, int*,
 std_default_delete<int> >&) */

void __thiscall std__Tuple_impl_0u_int_ptr_std_default_delete_int__M_head(_Tuple_impl *this)

{
 std__Head_base_0u_int_ptr_false__M_head((_Head_base *)this);
 return;
}



/* Function: _M_head @ 000140e0 */

/* std__Head_base<0u, int*, false>__M_head(std__Head_base<0u, int*, false>&) */

_Head_base * __thiscall std__Head_base_0u_int_ptr_false__M_head(_Head_base *this)

{
 return this;
}



/* Function: RTTIBase @ 000140f0 */

/* RTTIBase_RTTIBase() */

void __thiscall RTTIBase_RTTIBase(RTTIBase *this)

{
 *(undefined ***)this = &PTR__RTTIBase_00018ecc;
 return;
}



/* Function: ~RTTIDerivedA @ 00014120 */

/* RTTIDerivedA_~RTTIDerivedA() */

void RTTIDerivedA_~RTTIDerivedA_chain(RTTIDerivedA *this)

{
 RTTIBase_~RTTIBase((RTTIBase *)this);
 return;
}



/* Function: ~RTTIDerivedA @ 00014150 */

/* RTTIDerivedA_~RTTIDerivedA() */

void __thiscall RTTIDerivedA_~RTTIDerivedA(RTTIDerivedA *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 00014190 */

/* RTTIDerivedA_getType() const */

undefined4 RTTIDerivedA_getType(void)

{
 return 1;
}



/* Function: ~RTTIBase @ 000141a0 */

/* RTTIBase_~RTTIBase() */

RTTIBase * RTTIBase_~RTTIBase_return_this(RTTIBase *this)

{
 return this;
}



/* Function: ~RTTIBase @ 000141b0 */

/* RTTIBase_~RTTIBase() */

void __thiscall RTTIBase_~RTTIBase(RTTIBase *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 000141f0 */

/* RTTIBase_getType() const */

undefined4 RTTIBase_getType(void)

{
 return 0;
}



/* Function: ~RTTIDerivedB @ 00014200 */

/* RTTIDerivedB_~RTTIDerivedB() */

void RTTIDerivedB_~RTTIDerivedB_chain(RTTIDerivedB *this)

{
 RTTIBase_~RTTIBase((RTTIBase *)this);
 return;
}



/* Function: ~RTTIDerivedB @ 00014230 */

/* RTTIDerivedB_~RTTIDerivedB() */

void __thiscall RTTIDerivedB_~RTTIDerivedB(RTTIDerivedB *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 00014270 */

/* RTTIDerivedB_getType() const */

undefined4 RTTIDerivedB_getType(void)

{
 return 2;
}



/* Function: __uniq_ptr_impl @ 00014280 */

/* std___uniq_ptr_data<int, std_default_delete<int>, true, true>___uniq_ptr_impl(int*) */

void __thiscall
std___uniq_ptr_data_int_std_default_delete_int_true_true___uniq_ptr_impl
 (__uniq_ptr_data *this,int *param_1)

{
 std___uniq_ptr_impl_int_std_default_delete_int____uniq_ptr_impl
 ((__uniq_ptr_impl *)this,param_1);
 return;
}



/* Function: __uniq_ptr_impl @ 000142c0 */

/* std___uniq_ptr_impl<int, std_default_delete<int> >___uniq_ptr_impl(int*) */

void __thiscall
std___uniq_ptr_impl_int_std_default_delete_int____uniq_ptr_impl
 (__uniq_ptr_impl *this,int *param_1)

{
 undefined4 *puVar1;
 
 std_tuple_int_ptr_std_default_delete_int__tuple_true_true
 ((tuple *)this);
 puVar1 = (undefined4 *)_M_ptr(this);
 *puVar1 = param_1;
 return;
}



/* Function: tuple<true,true> @ 00014310 */

/* std_tuple<int*, std_default_delete<int> >_tuple<true, true>() */

void __thiscall
std_tuple_int_ptr_std_default_delete_int__tuple_true_true
 (tuple *this)

{
 /* try { // try from 0001432c to 00014334 has its CatchHandler @ 00014340 */
 std__Tuple_impl_0u_int_ptr_std_default_delete_int__Tuple_impl
 ((_Tuple_impl *)this);
 return;
}



/* Function: _Tuple_impl @ 00014350 */

/* std__Tuple_impl<0u, int*, std_default_delete<int> >__Tuple_impl() */

void __thiscall
std__Tuple_impl_0u_int_ptr_std_default_delete_int__Tuple_impl
 (_Tuple_impl *this)

{
 std__Tuple_impl_1u_std_default_delete_int__Tuple_impl
 ((_Tuple_impl *)this);
 std__Head_base_0u_int_ptr_false__Head_base((_Head_base *)this);
 return;
}



/* Function: _Tuple_impl @ 00014390 */

/* std__Tuple_impl<1u, std_default_delete<int> >__Tuple_impl() */

void __thiscall
std__Tuple_impl_1u_std_default_delete_int__Tuple_impl
 (_Tuple_impl *this)

{
 std__Head_base_1u_std_default_delete_int_true__Head_base
 ((_Head_base *)this);
 return;
}



/* Function: _Head_base @ 000143c0 */

/* std__Head_base<0u, int*, false>__Head_base() */

void __thiscall std__Head_base_0u_int_ptr_false__Head_base(_Head_base *this)

{
 *(undefined4 *)this = 0;
 return;
}



/* Function: _Head_base @ 000143e0 */

/* std__Head_base<1u, std_default_delete<int>, true>__Head_base() */

_Head_base * __thiscall std__Head_base_1u_std_default_delete_int_true__Head_base
 (_Head_base *this)

{
 return this;
}



/* Function: get_deleter @ 000143f0 */

/* std_unique_ptr<int, std_default_delete<int> >_get_deleter() */

undefined4 __thiscall
std_unique_ptr_int_std_default_delete_int__get_deleter
 (unique_ptr *this)

{
 undefined4 uVar1;
 
 /* try { // try from 0001440c to 00014414 has its CatchHandler @ 00014426 */
 uVar1 = __uniq_ptr_impl<int,std_default_delete<int>>__M_deleter
 ((__uniq_ptr_impl<int,std_default_delete<int>> *)this);
 return uVar1;
}



/* Function: operator() @ 00014440 */

/* std_default_delete<int>_TEMPNAMEPLACEHOLDERVALUE(int*) const */

void __thiscall std_default_delete<int>_operator()(default_delete<int> *this,int *param_1)

{
 if (param_1 != (int *)0x0) {
 operator_delete(param_1);
 }
 return;
}







/* Function: _M_deleter @ 00014490 */

/* std___uniq_ptr_impl<int, std_default_delete<int> >__M_deleter() */

void __thiscall
std___uniq_ptr_impl_int_std_default_delete_int__M_deleter
 (__uniq_ptr_impl *this)

{
 std_get_1u_int_ptr_std_default_delete_int((tuple *)this);
 return;
}



/* Function: get<1u,int*,std_default_delete<int>> @ 000144c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std_tuple_element<1u, std_tuple<int*, std_default_delete<int> > >_type& std_get<1u, int*,
 std_default_delete<int> >(std_tuple<int*, std_default_delete<int> >&) */

type * std_get_1u_int_ptr_std_default_delete_int(tuple *param_1)

{
 default_delete *pdVar1;
 
 pdVar1 = std___get_helper_1u_std_default_delete_int((_Tuple_impl *)param_1);
 return (type *)pdVar1;
}



/* Function: __get_helper<1u,std_default_delete<int>> @ 000144f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std_default_delete<int>& std___get_helper<1u, std_default_delete<int>>(std__Tuple_impl<1u,
 std_default_delete<int>>&) */

default_delete * std___get_helper_1u_std_default_delete_int(_Tuple_impl *param_1)

{
 default_delete *pdVar1;
 
 pdVar1 = (default_delete *)std__Tuple_impl_1u_std_default_delete_int__M_head(param_1);
 return pdVar1;
}



/* Function: _M_head @ 00014520 */

/* std__Tuple_impl<1u, std_default_delete<int> >__M_head(std__Tuple_impl<1u,
 std_default_delete<int> >&) */

void __thiscall std__Tuple_impl_1u_std_default_delete_int__M_head(_Tuple_impl *this)

{
 std__Head_base_1u_std_default_delete_int_true__M_head((_Head_base *)this);
 return;
}



/* Function: _M_head @ 00014550 */

/* std__Head_base<1u, std_default_delete<int>, true>__M_head(std__Head_base<1u,
 std_default_delete<int>, true>&) */

_Head_base * std__Head_base_1u_std_default_delete_int_true__M_head(_Head_base *param_1)

{
 return param_1;
}



/* Function: get @ 00014560 */

/* std_unique_ptr<int, std_default_delete<int> >_get() const */

undefined4 __thiscall
std_unique_ptr_int_std_default_delete_int__get(unique_ptr *this)

{
 undefined4 uVar1;
 
 /* try { // try from 0001457c to 00014584 has its CatchHandler @ 00014596 */
 uVar1 = __uniq_ptr_impl<int,std_default_delete<int>>__M_ptr
 ((__uniq_ptr_impl<int,std_default_delete<int>> *)this);
 return uVar1;
}



/* Function: _M_ptr @ 000145b0 */

/* std___uniq_ptr_impl<int, std_default_delete<int> >__M_ptr() const */

undefined4 __thiscall
std___uniq_ptr_impl<int,std_default_delete<int>>__M_ptr
 (__uniq_ptr_impl<int,std_default_delete<int>> *this)

{
 type *ptVar1;
 
 ptVar1 = get<0u,int*,std_default_delete<int>>((tuple *)this);
 return *(undefined4 *)ptVar1;
}



/* Function: get<0u,int*,std_default_delete<int>> @ 000145e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std_tuple_element<0u, std_tuple<int*, std_default_delete<int> > >_type const& std_get<0u,
 int*, std_default_delete<int> >(std_tuple<int*, std_default_delete<int> > const&) */

type * std_get_0u_int_ptr_std_default_delete_int_const(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)std___get_helper_0u_int_ptr_std_default_delete_int_const((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: __get_helper<0u,int*,std_default_delete<int>> @ 00014610 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* const& std___get_helper<0u, int*, std_default_delete<int> >(std__Tuple_impl<0u, int*,
 std_default_delete<int> > const&) */

int ** std___get_helper_0u_int_ptr_std_default_delete_int_const(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)std__Tuple_impl_0u_int_ptr_std_default_delete_int_const__M_head(param_1);
 return ppiVar1;
}



/* Function: _M_head @ 00014640 */

/* std__Tuple_impl<0u, int*, std_default_delete<int> >__M_head(std__Tuple_impl<0u, int*,
 std_default_delete<int> > const&) */

void __thiscall std__Tuple_impl_0u_int_ptr_std_default_delete_int_const__M_head(_Tuple_impl *this)

{
 std__Head_base_0u_int_ptr_false__M_head((_Head_base *)this);
 return;
}







/* Function: __uniq_ptr_impl @ 00014680 */

/* std___uniq_ptr_data<int, std_default_delete<int []>, true, true>___uniq_ptr_impl(int*) */

void __thiscall
std___uniq_ptr_data_int_std_default_delete_int_array_true_true___uniq_ptr_impl
 (__uniq_ptr_data *this,int *param_1)

{
 std___uniq_ptr_impl_int_std_default_delete_int_array____uniq_ptr_impl
 ((__uniq_ptr_impl *)this,param_1);
 return;
}



/* Function: __uniq_ptr_impl @ 000146c0 */

/* std___uniq_ptr_impl<int, std_default_delete<int []> >___uniq_ptr_impl(int*) */

void __thiscall
std___uniq_ptr_impl_int_std_default_delete_int_array____uniq_ptr_impl
 (__uniq_ptr_impl *this,int *param_1)

{
 undefined4 *puVar1;
 
 std_tuple_int_ptr_std_default_delete_int_array__tuple_true_true
 ((tuple *)this);
 puVar1 = (undefined4 *)_M_ptr(this);
 *puVar1 = param_1;
 return;
}



/* Function: tuple<true,true> @ 00014710 */

/* std_tuple<int*, std_default_delete<int []> >_tuple<true, true>() */

void __thiscall std_tuple_int_ptr_std_default_delete_int_array__tuple_true_true
 (tuple *this)

{
 /* try { // try from 0001472c to 00014734 has its CatchHandler @ 00014740 */
 std__Tuple_impl_0u_int_ptr_std_default_delete_int_array__Tuple_impl
 ((_Tuple_impl *)this);
 return;
}



/* Function: _M_ptr @ 00014750 */

/* std___uniq_ptr_impl<int, std_default_delete<int []> >__M_ptr() */

void __thiscall
std___uniq_ptr_impl_int_std_default_delete_int_array__M_ptr
 (__uniq_ptr_impl *this)

{
 std_get_0u_int_ptr_std_default_delete_int_array((tuple *)this);
 return;
}



/* Function: _Tuple_impl @ 00014780 */

/* std__Tuple_impl<0u, int*, std_default_delete<int []> >__Tuple_impl() */

void __thiscall std__Tuple_impl_0u_int_ptr_std_default_delete_int_array__Tuple_impl
 (_Tuple_impl *this)

{
 std__Tuple_impl_1u_std_default_delete_int_array__Tuple_impl
 ((_Tuple_impl *)this);
 std__Head_base_0u_int_ptr_false__Head_base((_Head_base *)this);
 return;
}



/* Function: _Tuple_impl @ 000147c0 */

/* std__Tuple_impl<1u, std_default_delete<int []> >__Tuple_impl() */

void __thiscall std__Tuple_impl_1u_std_default_delete_int_array__Tuple_impl
 (_Tuple_impl *this)

{
 std__Head_base_1u_std_default_delete_int_array_true__Head_base
 ((_Head_base *)this);
 return;
}



/* Function: _Head_base @ 000147f0 */

/* std__Head_base<1u, std_default_delete<int []>, true>__Head_base() */

_Head_base * __thiscall std__Head_base_1u_std_default_delete_int_array_true__Head_base
 (_Head_base *this)

{
 return this;
}



/* Function: get<0u,int*,std_default_delete<int[]>> @ 00014800 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std_tuple_element<0u, std_tuple<int*, std_default_delete<int []> > >_type& std_get<0u, int*,
 std_default_delete<int []> >(std_tuple<int*, std_default_delete<int []> >&) */

type * std_get_0u_int_ptr_std_default_delete_int_array(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)std___get_helper_0u_int_ptr_std_default_delete_int_array((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: __get_helper<0u,int*,std_default_delete<int[]>> @ 00014830 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std___get_helper<0u, int*, std_default_delete<int []> >(std__Tuple_impl<0u, int*,
 std_default_delete<int []> >&) */

int ** std___get_helper_0u_int_ptr_std_default_delete_int_array(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)std__Tuple_impl_0u_int_ptr_std_default_delete_int_array__M_head(param_1);
 return ppiVar1;
}



/* Function: _M_head @ 00014860 */

/* std__Tuple_impl<0u, int*, std_default_delete<int []> >__M_head(std__Tuple_impl<0u, int*,
 std_default_delete<int []> >&) */

void __thiscall std__Tuple_impl_0u_int_ptr_std_default_delete_int_array__M_head(_Tuple_impl *this)

{
 std__Head_base_0u_int_ptr_false__M_head((_Head_base *)this);
 return;
}



/* Function: get_deleter @ 00014890 */

/* std_unique_ptr<int [], std_default_delete<int []> >_get_deleter() */

undefined4 __thiscall
std_unique_ptr_int_array_std_default_delete_int_array__get_deleter
 (unique_ptr *this)

{
 undefined4 uVar1;
 
 /* try { // try from 000148ac to 000148b4 has its CatchHandler @ 000148c6 */
 uVar1 = __uniq_ptr_impl<int,std_default_delete<int[]>>__M_deleter
 ((__uniq_ptr_impl<int,std_default_delete<int[]>> *)this);
 return uVar1;
}



/* Function: operator() @ 000148e0 */

/* std_enable_if<is_convertible<int (*) [], int (*) []>_value, void>_type std_default_delete<int
 []>_TEMPNAMEPLACEHOLDERVALUE(int*) const */

void __thiscall std_default_delete<int[]>_operator()(default_delete<int[]> *this,int *param_1)

{
 if (param_1 != (int *)0x0) {
 operator_delete__(param_1);
 }
 return;
}



/* Function: _M_deleter @ 00014920 */

/* std___uniq_ptr_impl<int, std_default_delete<int []> >__M_deleter() */

void __thiscall
std___uniq_ptr_impl_int_std_default_delete_int_array__M_deleter
 (__uniq_ptr_impl *this)

{
 std_get_1u_int_ptr_std_default_delete_int_array((tuple *)this);
 return;
}



/* Function: get<1u,int*,std_default_delete<int[]>> @ 00014950 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std_tuple_element<1u, std_tuple<int*, std_default_delete<int []> > >_type& std_get<1u, int*,
 std_default_delete<int []> >(std_tuple<int*, std_default_delete<int []> >&) */

type * std_get_1u_int_ptr_std_default_delete_int_array(tuple *param_1)

{
 default_delete *pdVar1;
 
 pdVar1 = std___get_helper_1u_std_default_delete_int_array((_Tuple_impl *)param_1);
 return (type *)pdVar1;
}



/* Function: __get_helper<1u,std_default_delete<int[]>> @ 00014980 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std_default_delete<int []>& std___get_helper<1u, std_default_delete<int
 []>>(std__Tuple_impl<1u, std_default_delete<int []>>&) */

default_delete * std___get_helper_1u_std_default_delete_int_array(_Tuple_impl *param_1)

{
 default_delete *pdVar1;
 
 pdVar1 = (default_delete *)std__Tuple_impl_1u_std_default_delete_int_array__M_head(param_1);
 return pdVar1;
}



/* Function: _M_head @ 000149b0 */

/* std__Tuple_impl<1u, std_default_delete<int []> >__M_head(std__Tuple_impl<1u,
 std_default_delete<int []> >&) */

void __thiscall std__Tuple_impl_1u_std_default_delete_int_array__M_head(_Tuple_impl *this)

{
 std__Head_base_1u_std_default_delete_int_array_true__M_head((_Head_base *)this);
 return;
}



/* Function: _M_head @ 000149e0 */

/* std__Head_base<1u, std_default_delete<int []>, true>__M_head(std__Head_base<1u,
 std_default_delete<int []>, true>&) */

_Head_base * std__Head_base_1u_std_default_delete_int_array_true__M_head(_Head_base *param_1)

{
 return param_1;
}



/* Function: get @ 000149f0 */

/* std_unique_ptr<int [], std_default_delete<int []> >_get() const */

undefined4 __thiscall
std_unique_ptr_int_array_std_default_delete_int_array__get
 (unique_ptr *this)

{
 undefined4 uVar1;
 
 /* try { // try from 00014a0c to 00014a14 has its CatchHandler @ 00014a26 */
 uVar1 = __uniq_ptr_impl<int,std_default_delete<int[]>>__M_ptr
 ((__uniq_ptr_impl<int,std_default_delete<int[]>> *)this);
 return uVar1;
}



/* Function: _M_ptr @ 00014a40 */

/* std___uniq_ptr_impl<int, std_default_delete<int []> >__M_ptr() const */

undefined4 __thiscall
std___uniq_ptr_impl<int,std_default_delete<int[]>>__M_ptr
 (__uniq_ptr_impl<int,std_default_delete<int[]>> *this)

{
 type *ptVar1;
 
 ptVar1 = get<0u,int*,std_default_delete<int[]>>((tuple *)this);
 return *(undefined4 *)ptVar1;
}



/* Function: get<0u,int*,std_default_delete<int[]>> @ 00014a70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std_tuple_element<0u, std_tuple<int*, std_default_delete<int []> > >_type const& std_get<0u,
 int*, std_default_delete<int []> >(std_tuple<int*, std_default_delete<int []> > const&) */

type * std_get_0u_int_ptr_std_default_delete_int_array_const(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)std___get_helper_0u_int_ptr_std_default_delete_int_array_const((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: __get_helper<0u,int*,std_default_delete<int[]>> @ 00014aa0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* const& std___get_helper<0u, int*, std_default_delete<int []> >(std__Tuple_impl<0u, int*,
 std_default_delete<int []> > const&) */

int ** std___get_helper_0u_int_ptr_std_default_delete_int_array_const(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)std__Tuple_impl_0u_int_ptr_std_default_delete_int_array_const__M_head(param_1);
 return ppiVar1;
}



/* Function: _M_head @ 00014ad0 */

/* std__Tuple_impl<0u, int*, std_default_delete<int []> >__M_head(std__Tuple_impl<0u, int*,
 std_default_delete<int []> > const&) */

void __thiscall std__Tuple_impl_0u_int_ptr_std_default_delete_int_array_const__M_head(_Tuple_impl *this)

{
 std__Head_base_0u_int_ptr_false__M_head((_Head_base *)this);
 return;
}



/* Function: forward @ 00014b00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ** std_forward_int_ptr_ref(type *param_1)

{
 return (int **)param_1;
}



/* Function: _Head_base @ 00014b10 */

void __thiscall std__Head_base_0u_int_ptr_false__Head_base_int_ptr_ref(_Head_base *this,int **param_1)

{
 int **ppiVar1;
 
 ppiVar1 = std_forward_int_ptr_ref((type *)param_1);
 *(int **)this = *ppiVar1;
 return;
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 219 */
