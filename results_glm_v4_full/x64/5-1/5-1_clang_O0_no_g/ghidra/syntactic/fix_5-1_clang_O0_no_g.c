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
typedef unsigned char byte;

/* Ghidra helper macros for arithmetic operations */
#define ZEXT816(x) ((unsigned long)(x))
#define SUB168(x, y) ((x) - (y))

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

/* C++ standard library stubs */
void* operator_new(size_t size);
void* operator_new__(size_t size);
void operator_delete(void* ptr);
void operator_delete__(void* ptr);
int __cxa_atexit(void (*func)(void*), void* arg, void* dso_handle);
void __cxa_begin_catch(void);
void __builtin_unreachable(void);
void std_terminate(void);
void* __cxa_allocate_exception(size_t size);
void __cxa_throw(void* exc, void* type, void* dest);
void __cxa_bad_typeid(void);
void* __dynamic_cast(void* src, void* src_type, void* dst_type, int offset);

/* std::ios_base declarations */
typedef struct std_ios_base std_ios_base;
struct std_ios_base {
    int dummy;
};

typedef struct std_ios_base_Init std_ios_base_Init;
struct std_ios_base_Init {
    void (*_vptr$Init)(void);
};

void std_ios_base_Init_Init(std_ios_base_Init *this);
void std_ios_base_Init_dtor(std_ios_base_Init *this);

/* std::type_info structure */
typedef struct type_info type_info;

typedef struct std_type_info {
    void* vptr;
    const char* _M_name;
    int (*_M_equal)(struct std_type_info*, struct std_type_info*);
} std_type_info;

struct type_info {
    void* vptr;
    const char* _M_name;
    int (*_M_equal)(struct std_type_info*, struct std_type_info*);
};

/* Type definitions for decompiled code */
typedef void (*code)(void);
typedef int undefined4;
typedef long undefined8;
typedef unsigned char undefined1;
typedef int bool;
typedef void type;

/* Forward declarations for classes */
typedef struct SimpleClass SimpleClass;
typedef struct LifecycleClass LifecycleClass;
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct DiamondDerived DiamondDerived;
typedef struct Point Point;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct RTTIBase RTTIBase;
typedef struct BaseA BaseA;
typedef struct BaseB BaseB;
typedef struct VirtualBase VirtualBase;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;

/* Function declarations for C++ class methods */
void SimpleClass_SimpleClass(SimpleClass *this, int param_1, char *param_2);
void SimpleClass_setValue(SimpleClass *this, int param_1);
int SimpleClass_getValue(SimpleClass *this);
long SimpleClass_compute(SimpleClass *this, int param_1);
long SimpleClass_getClassID(void);

void LifecycleClass_LifecycleClass(LifecycleClass *this, unsigned long param_1);
int LifecycleClass_getData(LifecycleClass *this, unsigned long param_1);
int LifecycleClass_getInstanceCount(void);
void LifecycleClass_dtor(LifecycleClass *this);

void Base_Base(Base *this);
int Base_virtual_func(Base *this, int param_1);
void Base_dtor(Base *this);

void Derived_Derived(Derived *this, int param_1);
int Derived_virtual_func(Derived *this, int param_1);
void Derived_dtor(Derived *this);

void MultiDerived_MultiDerived(MultiDerived *this);
void MultiDerived_dtor(MultiDerived *this);

void DiamondDerived_DiamondDerived(DiamondDerived *this);
void DiamondDerived_dtor(DiamondDerived *this);

void Point_Point(Point *this, int param_1, int param_2);
undefined8 Point_operator_add(Point *this, Point *param_1);
bool Point_operator_equal(Point *this, Point *param_1);
void Point_operator_incr(Point *this);

int template_max_int(int param_1, int param_2);
double template_max_double(double param_1, double param_2);
void template_swap_int(int *param_1, int *param_2);

void Container_int_Container(Container_int *this);
void Container_int_push(Container_int *this, int param_1);
int Container_int_get(Container_int *this, int param_1);
int Container_int_getSize(Container_int *this);

void Container_double_Container(Container_double *this);
void Container_double_push(Container_double *this, double param_1);
double Container_double_get(Container_double *this, int param_1);
int Container_double_getSize(Container_double *this);

int test_cpp_lambda____0_operator(__0 *this, int param_1, int param_2);
int test_cpp_lambda____1_operator(__1 *this, int param_1);

void RTTIDerivedA_RTTIDerivedA(RTTIDerivedA *this);
void RTTIDerivedB_RTTIDerivedB(RTTIDerivedB *this);
void RTTIBase_RTTIBase(RTTIBase *this);
long RTTIDerivedA_derivedA_data(void);
long RTTIDerivedB_derivedB_data(void);
long RTTIDerivedA_getType(void);
long RTTIDerivedB_getType(void);
long RTTIBase_getType(void);

bool std_type_info_operator_equal(type_info *this, type_info *param_1);
long std_type_info_name(type_info *this);

void BaseA_BaseA(BaseA *this);
void BaseB_BaseB(BaseB *this);
void VirtualBase_VirtualBase(VirtualBase *this);
void MiddleA_MiddleA(MiddleA *this);
void MiddleB_MiddleB(MiddleB *this);
int MiddleA_func(MiddleA *this);
int MiddleB_func(MiddleB *this);
int DiamondDerived_func(DiamondDerived *this);
long VirtualBase_func(void);
void MiddleA_dtor(MiddleA *this);
void MiddleB_dtor(MiddleB *this);
void VirtualBase_dtor(VirtualBase *this);
void BaseA_dtor(BaseA *this);
void BaseB_dtor(BaseB *this);
void MultiDerived_funcA(void);
void MultiDerived_funcB(void);
type* std_move_int_ptr(int **param_1);
type* std_move_unique_ptr(unique_ptr *param_1);
char* Derived_getName(void);
undefined* Base_getName(void);
undefined8 RTTIDerivedA_getType(void);
undefined8 RTTIDerivedB_getType(void);
undefined8 RTTIBase_getType(void);
undefined8 VirtualBase_func(void);
undefined8 BaseA_funcA(void);
void BaseA_dtor(BaseA *this);
void BaseB_dtor(BaseB *this);
void VirtualBase_dtor(VirtualBase *this);
void MiddleA_dtor(MiddleA *this);
void MiddleB_dtor(MiddleB *this);
void DiamondDerived_dtor(DiamondDerived *this);
undefined8 MiddleA_func(MiddleA *this);
undefined8 MiddleB_func(MiddleB *this);
void MiddleA_dtor_full(MiddleA *this);
void MiddleB_dtor_full(MiddleB *this);
void DiamondDerived_dtor_full(DiamondDerived *this);
void VirtualBase_dtor_full(VirtualBase *this);
void VirtualBase_dtor_simple(VirtualBase *this);
void MiddleA_dtor_delete(MiddleA *this);
void MiddleB_dtor_delete(MiddleB *this);
void MultiDerived_dtor_full(MultiDerived *this);
void BaseA_dtor_full(BaseA *this);
void BaseB_dtor_full(BaseB *this);
void Derived_dtor_full(Derived *this);
void Base_dtor_full(Base *this);
void RTTIDerivedA_dtor_full(RTTIDerivedA *this);
void RTTIDerivedB_dtor_full(RTTIDerivedB *this);
void RTTIBase_dtor_full(RTTIBase *this);
void RTTIDerivedA_dtor_base(RTTIDerivedA *this);
void RTTIDerivedB_dtor_base(RTTIDerivedB *this);
int** std_forward_int_ptr_ref(type *param_1);
__2* std_forward_lambda_2_const_ref(__2 *param_1);
void* std_forward(type *param_1);
type* move(type *param_1);
void* std_forward(type *param_1);
void* get(tuple *param_1);
type* move(type *param_1);
void lambda_2_operator(__2 *this,int *param_1);
undefined8 get_deleter(unique_ptr_int *this);
undefined8 get_deleter_default_delete_int(unique_ptr_default_delete_int *this);
undefined8 get_deleter_default_delete_int_array(unique_ptr_default_delete_int_array *this);
undefined8 DiamondDerived_func(DiamondDerived *this);
type* std_move_unique_ptr(unique_ptr *param_1);
undefined8 std_unique_ptr_int_get(unique_ptr_int *this);
type* std_unique_ptr_int_operator_star(unique_ptr_default_delete_int *this);
long std_unique_ptr_default_delete_int_array_operator_index(unique_ptr_default_delete_int_array *this, ulong param_1);
undefined8 std_unique_ptr_default_delete_int_get(unique_ptr_default_delete_int *this);
undefined8 std_unique_ptr_default_delete_int_array_get(unique_ptr_default_delete_int_array *this);
undefined8 std_unique_ptr_default_delete_int_get_deleter(unique_ptr_default_delete_int *this);
undefined8 std_unique_ptr_default_delete_int_array_get_deleter(unique_ptr_default_delete_int_array *this);
void std_default_delete_int_operator(default_delete_int *this, int *param_1);
void std_default_delete_int_array_operator(default_delete_int_array *this, int *param_1);

/* Forward declarations for unique_ptr and template helper functions */
undefined8 std_unique_ptr_int_get(unique_ptr_int *this);
undefined8 __uniq_ptr_impl_lambda_2_M_ptr(__uniq_ptr_impl *this);
undefined8 __uniq_ptr_impl_lambda_2_M_deleter(void);
undefined8 std_unique_ptr_default_delete_int_get(unique_ptr_default_delete_int *this);
undefined8 __uniq_ptr_impl_default_delete_int_M_ptr(__uniq_ptr_impl *this);
undefined8 __uniq_ptr_impl_default_delete_int_M_deleter(__uniq_ptr_impl *this);
undefined8 std_unique_ptr_default_delete_int_array_get(unique_ptr_default_delete_int_array *this);
undefined8 __uniq_ptr_impl_default_delete_int_array_M_ptr(__uniq_ptr_impl *this);
undefined8 __uniq_ptr_impl_default_delete_int_array_M_deleter(__uniq_ptr_impl *this);
undefined8 std_unique_ptr_default_delete_int_get_deleter(unique_ptr_default_delete_int *this);
undefined8 std_unique_ptr_default_delete_int_array_get_deleter(unique_ptr_default_delete_int_array *this);
undefined8 std_unique_ptr_int_get_deleter(void);
undefined8 __uniq_ptr_impl_default_delete_int_M_ptr_const(const __uniq_ptr_impl *this);
undefined8 __uniq_ptr_impl_default_delete_int_array_M_ptr_const(const __uniq_ptr_impl *this);
undefined8 __uniq_ptr_impl_lambda_2_M_ptr_const(const __uniq_ptr_impl *this);
type* get_0ul_lambda_2(tuple *param_1);
type* get_0ul_default_delete_int(tuple *param_1);
type* get_0ul_default_delete_int_array(tuple *param_1);
type* get_1ul_lambda_2(tuple *param_1);
type* get_1ul_default_delete_int(tuple *param_1);
type* get_1ul_default_delete_int_array(tuple *param_1);
int** __get_helper_0ul_lambda_2(_Tuple_impl *param_1);
int** __get_helper_0ul_default_delete_int(_Tuple_impl *param_1);
int** __get_helper_0ul_default_delete_int_array(_Tuple_impl *param_1);
__2* __get_helper_1ul_lambda_2(_Tuple_impl *param_1);
default_delete* __get_helper_1ul_default_delete_int(_Tuple_impl *param_1);
default_delete* __get_helper_1ul_default_delete_int_array(_Tuple_impl *param_1);
type* std_move_int_ptr(int **param_1);
type* std_move_tuple_default_delete_int(tuple *param_1);
void std_Tuple_impl_0ul_int_ptr_default_delete_int_M_head(_Tuple_impl *param_1);
void std_Tuple_impl_0ul_int_ptr_default_delete_int_array_M_head(_Tuple_impl *param_1);
void std_Tuple_impl_0ul_int_ptr_lambda_2_M_head(_Tuple_impl *param_1);
void std_Tuple_impl_1ul_default_delete_int_M_head(_Tuple_impl *param_1);
void std_Tuple_impl_1ul_default_delete_int_array_M_head(_Tuple_impl *param_1);
void std_Tuple_impl_1ul_lambda_2_M_head(_Tuple_impl *param_1);
void std_Head_base_0ul_int_ptr_false_Head_base(_Head_base *this);
void std_Head_base_0ul_int_ptr_false_Head_base_int_ptr(_Head_base *this, int **param_1);
_Head_base* std_Head_base_0ul_int_ptr_false_M_head(_Head_base *param_1);
_Head_base* std_Head_base_1ul_default_delete_int_true_M_head(_Head_base *param_1);
_Head_base* std_Head_base_1ul_lambda_2_true_M_head(_Head_base *param_1);
_Head_base* std_Head_base_1ul_default_delete_int_array_true_M_head(_Head_base *param_1);
_Head_base* std_Head_base_0ul_int_ptr_false_M_head_const(const _Head_base *param_1);
_Head_base* std_Head_base_0ul_int_ptr_true_M_head_const(const _Head_base *param_1);
_Head_base* std_Head_base_1ul_lambda_2_true_M_head_const(const _Head_base *param_1);
void std_Head_base_int_false_Head_base(_Head_base *this);
void std_Head_base_int_false_Head_base_int_ptr(_Head_base *this, int **param_1);
undefined8 __uniq_ptr_impl_default_delete_int_M_ptr_impl(__uniq_ptr_impl *this);
undefined8 __uniq_ptr_impl_default_delete_int_array_M_ptr_impl(__uniq_ptr_impl *this);
long std_unique_ptr_default_delete_int_array_get(unique_ptr_default_delete_int_array *this);
type* std_forward_lambda_2_const_ref(type *param_1);
type* std_forward_int_ptr_ref(type *param_1);
int** std_forward_int_ptr_ref2(type *param_1);
void std_Tuple_impl_0ul_int_ptr_lambda_2_M_head(_Tuple_impl *param_1);
void std_Tuple_impl_1ul_lambda_2_M_head(_Tuple_impl *param_1);
void std_Tuple_impl_0ul_int_ptr_default_delete_int_M_head_const(_Tuple_impl *param_1);
void std_Tuple_impl_0ul_int_ptr_default_delete_int_array_M_head_const(_Tuple_impl *param_1);
void std_Tuple_impl_0ul_int_ptr_lambda_2_M_head_const(_Tuple_impl *param_1);
void std_Tuple_impl_1ul_default_delete_int_M_head_const(const _Tuple_impl *param_1);
void std_Tuple_impl_1ul_default_delete_int_array_M_head_const(const _Tuple_impl *param_1);
void std_Tuple_impl_1ul_lambda_2_M_head_const(const _Tuple_impl *param_1);

/* Class definitions for compilation */
struct SimpleClass {
    int value;
    char name[32];
};

struct LifecycleClass {
    void* data;
    unsigned long size;
};

struct Base {
    void** vtable;
};

struct Derived {
    void** vtable;
    int derived_value;
};

struct MultiDerived {
    void** vtable_a;
    char _pad1[8];
    void** vtable_b;
};

struct DiamondDerived {
    void* vptr1;
    char _pad1[16];
    void* vptr2;
    char _pad2[8];
    void* vptr3;
};

struct Point {
    int x;
    int y;
};

struct RTTIBase {
    void** vtable;
};

struct RTTIDerivedA {
    void** vtable;
};

struct RTTIDerivedB {
    void** vtable;
};

struct BaseA {
    void** vtable;
};

struct BaseB {
    void** vtable;
};

struct VirtualBase {
    void** vtable;
};

struct MiddleA {
    void* vptr;
};

struct MiddleB {
    void* vptr;
};

/* Template class containers */
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;

/* unique_ptr and related types */
typedef struct unique_ptr unique_ptr;
typedef struct unique_ptr_int unique_ptr_int;
typedef struct unique_ptr_int_array unique_ptr_int_array;
typedef struct unique_ptr_default_delete_int unique_ptr_default_delete_int;
typedef struct unique_ptr_default_delete_int_array unique_ptr_default_delete_int_array;
typedef struct default_delete_int default_delete_int;
typedef struct default_delete_int_array default_delete_int_array;

/* Tuple and related types */
typedef struct tuple_int_ptr_default_delete tuple_int_ptr_default_delete;
typedef struct _Tuple_impl _Tuple_impl;
typedef struct _Head_base _Head_base;

/* C++ types */
typedef struct type_info type_info;
typedef struct Init Init;
typedef struct __uniq_ptr_impl __uniq_ptr_impl;
typedef struct __uniq_ptr_data __uniq_ptr_data;

/* Lambda types */
typedef struct lambda_0 lambda_0;
typedef struct lambda_1 lambda_1;
typedef struct lambda_2 lambda_2;
typedef struct __0 __0;
typedef struct __1 __1;
typedef struct __2 __2;

/* Template class container definitions */
struct Container_int {
    int data[10];
    int count;
};

struct Container_double {
    double data[10];
    int count;
};

/* unique_ptr definitions */
struct unique_ptr_int {
    void* ptr;
};

struct unique_ptr_int_array {
    void* ptr;
};

struct unique_ptr_default_delete_int {
    void* ptr;
};

struct unique_ptr_default_delete_int_array {
    void* ptr;
};

struct default_delete_int {
    int dummy;
};

struct default_delete_int_array {
    int dummy;
};

struct default_delete {
    int dummy;
};

/* __uniq_ptr_data definition */
struct __uniq_ptr_data {
    void* data[2];
};

/* Tuple definitions */
struct tuple {
    void* first;
    void* second;
};

struct tuple_int_ptr_default_delete {
    void* first;
    void* second;
};

struct _Tuple_impl {
    void* data[2];
};

struct _Head_base {
    void* ptr;
};

/* Lambda closure types */
struct __0 {
    int dummy;
};

struct __1 {
    int* captured;
    int* captured2;
};

struct __2 {
    int dummy;
};

struct lambda_0 {
    int dummy;
};

struct lambda_1 {
    int dummy;
};

struct lambda_2 {
    int dummy;
};

/* Global variables */
int instance_count = 0;
Init std___ioinit = {0};
void* __dso_handle = 0;

/* Data symbols */
extern const char DAT_00105025[];
extern const char DAT_0010504a[];
extern const char DAT_00105068[];
extern const char DAT_00105084[];
extern const char DAT_001050a0[];
extern const char DAT_001050bc[];
extern const char DAT_001050d9[];
extern const char DAT_001050f5[];
extern const char DAT_00105111[];
extern const char DAT_0010512d[];
extern const char DAT_00105149[];
extern const char DAT_00105166[];
extern const char DAT_00105183[];
extern const char DAT_001051a1[];

/* Virtual table pointers */
extern void* PTR_virtual_func_00108878;
extern void* PTR_virtual_func_001088b8;
extern void* PTR_funcA_00108900;
extern void* PTR_funcB_00108930;
extern void* PTR_funcA_001089b0;
extern void* PTR_funcB_001089d8;
extern void* PTR_func_00108c38;
extern void* PTR__RTTIDerivedA_00108d50;
extern void* PTR__RTTIDerivedB_00108da0;
extern void* PTR__RTTIBase_00108d78;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-1/5-1_clang_O0_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00102020 @ 00102020 */

void FUN_00102020(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: __cxx_global_var_init @ 00102180 */

void __cxx_global_var_init(void)

{
 std_ios_base_Init_Init((std_ios_base_Init *)&std___ioinit);
 __cxa_atexit((void (*)(void*))std_ios_base_Init_dtor,&std___ioinit,&__dso_handle);
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 001021b0 */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 __cxx_global_var_init();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 001022b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 SimpleClass local_30 [40];
 
 SimpleClass_SimpleClass(local_30,5,"Test");
 SimpleClass_setValue(local_30,10);
 iVar1 = SimpleClass_getValue(local_30);
 iVar2 = SimpleClass_compute(local_30,3);
 iVar3 = SimpleClass_getClassID();
 return iVar1 + iVar2 + iVar3;
}



/* Function: test_cpp_constructor @ 00102310 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 int iVar1;
 LifecycleClass local_20 [20];
 int local_c;
 
 local_c = 0;
 LifecycleClass_LifecycleClass(local_20,5);
 /* try { // try from 00102335 to 00102356 has its CatchHandler @ 0010238b */
 iVar1 = LifecycleClass_getData(local_20,2);
 local_c = local_c + iVar1;
 iVar1 = LifecycleClass_getInstanceCount();
 local_c = iVar1 + local_c;
 LifecycleClass_dtor(local_20);
 iVar1 = LifecycleClass_getInstanceCount();
 return iVar1 * 1000 + local_c;
}



/* Function: call_virtual_func @ 001023b0 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 (*(code *)**(undefined8 **)param_1)(param_1,param_2);
 return;
}



/* Function: test_cpp_virtual_func @ 001023e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

int test_cpp_virtual_func(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 Derived local_20 [16];
 Base local_10 [8];
 
 Base_Base(local_10);
 /* try { // try from 001023f1 to 001023fe has its CatchHandler @ 001024ae */
 Derived_Derived(local_20,3);
 /* try { // try from 00102404 to 00102475 has its CatchHandler @ 001024bf */
 iVar1 = Base_virtual_func(local_10,5);
 iVar2 = Derived_virtual_func(local_20,5);
 iVar3 = call_virtual_func(local_10,5);
 iVar4 = call_virtual_func((Base *)local_20,5);
 Derived_dtor(local_20);
 Base_dtor(local_10);
 return iVar1 + iVar2 + iVar3 + iVar4;
}



/* Function: test_cpp_multiple_inheritance @ 001024f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

int test_cpp_multiple_inheritance(void)

{
 int iVar1;
 int iVar2;
 undefined8 **local_60;
 undefined8 *local_28;
 undefined4 local_20;
 undefined8 *local_18;
 undefined4 local_10;
 
 MultiDerived_MultiDerived((MultiDerived *)&local_28);
 local_20 = 100;
 local_10 = 200;
 local_60 = (undefined8 **)0x0;
 if (&stack0x00000000 != (undefined1 *)0x28) {
 local_60 = &local_18;
 }
 /* try { // try from 00102549 to 00102564 has its CatchHandler @ 001025a9 */
 iVar1 = (*(code *)*local_28)();
 iVar2 = (*(code *)**local_60)();
 MultiDerived_dtor((MultiDerived *)&local_28);
 return iVar1 + iVar2 + (uint)(&local_28 != local_60);
}



/* Function: test_cpp_diamond_inheritance @ 001025d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
 int iVar1;
 int iVar2;
 undefined8 *local_60;
 long local_38;
 undefined4 auStack_30 [10];
 
 DiamondDerived_DiamondDerived((DiamondDerived *)&local_38);
 *(undefined4 *)((long)auStack_30 + *(long *)(local_38 + -0x18)) = 0x32;
 local_60 = (undefined8 *)0x0;
 if (&stack0x00000000 != (undefined1 *)0x38) {
 local_60 = (undefined8 *)((long)auStack_30 + *(long *)(local_38 + -0x18) + -8);
 }
 /* try { // try from 0010262a to 00102655 has its CatchHandler @ 0010267f */
 iVar1 = (**(code **)*local_60)();
 *(undefined4 *)((long)auStack_30 + *(long *)(local_38 + -0x18)) = 100;
 iVar2 = (**(code **)*local_60)();
 DiamondDerived_dtor((DiamondDerived *)&local_38);
 return iVar1 + iVar2;
}



/* Function: test_cpp_operator_overload @ 001026a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

int test_cpp_operator_overload(void)

{
 byte bVar1;
 int iVar2;
 undefined8 local_20;
 Point local_18 [8];
 Point local_10 [8];
 
 Point_Point(local_10,1,2);
 Point_Point(local_18,3,4);
 local_20 = Point_operator_add(local_10,local_18);
 bVar1 = Point_operator_equal(local_10,local_18);
 Point_operator_incr((Point *)&local_20);
 iVar2 = 10;
 if ((bVar1 & 1) != 0) {
 iVar2 = 0;
 }
 {
   Point *p = (Point *)&local_20;
   return (int)local_20 + p->y + iVar2;
 }
}



/* Function: test_cpp_template_func @ 00102720 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

int test_cpp_template_func(void)

{
 int local_20;
 int local_1c;
 double local_18;
 int local_c;
 
 local_c = template_max_int(3,7);
 local_18 = template_max_double(2.5,1.5);
 local_1c = 10;
 local_20 = 0x14;
 template_swap_int(&local_1c,&local_20);
 return local_c + (int)local_18 + local_1c + local_20;
}



/* Function: test_cpp_template_class @ 00102790 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

int test_cpp_template_class(void)

{
 double dVar1;
 Container_double local_98 [88];
 int local_40;
 int local_3c;
 Container_int local_38 [48];
 
 Container_int_Container(local_38);
 Container_int_push(local_38,10);
 Container_int_push(local_38,0x14);
 Container_int_push(local_38,0x1e);
 local_3c = Container_int_get(local_38,0);
 local_40 = Container_int_getSize(local_38);
 Container_double_Container(local_98);
 Container_double_push(local_98,3.14);
 dVar1 = (double)Container_double_get(local_98,0);
 return local_3c + local_40 + (int)dVar1;
}



/* Function: test_cpp_lambda @ 00102840 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

int test_cpp_lambda(void)

{
 int iVar1;
 int iVar2;
 __0 local_28 [8];
 undefined4 local_20 [2];
 undefined4 *local_18;
 undefined4 local_10;
 undefined4 local_c;
 
 local_c = 10;
 local_10 = 0x14;
 local_20[0] = 10;
 local_18 = &local_10;
 iVar1 = test_cpp_lambda____1_operator((__1 *)local_20,3);
 iVar2 = test_cpp_lambda____0_operator(local_28,10,0x14);
 return iVar1 + iVar2;
}



/* Function: operator() @ 001028a0 */

/* test_cpp_lambda()::$_1::TEMPNAMEPLACEHOLDERVALUE(int) const */

int __thiscall test_cpp_lambda__1_operator(__1 *this,int param_1)

{
 **(int **)(this + 8) = **(int **)(this + 8) + 5;
 return param_1 * *(int *)this + **(int **)(this + 8);
}

/* Forward declarations for lambda operators */
int __thiscall test_cpp_lambda__1_operator(__1 *this,int param_1);
int __thiscall test_cpp_lambda__0_operator(__0 *this,int param_1,int param_2);



/* Function: operator() @ 001028d0 */

/* auto test_cpp_lambda()::$_0::TEMPNAMEPLACEHOLDERVALUE(int, int) const */

int __thiscall test_cpp_lambda__0_operator(__0 *this,int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: test_cpp_exception @ 001028f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* try { // try from 00102912 to 00102921 has its CatchHandler @ 00102927 */
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,(void *)&std_type_info,0);
}



/* Function: test_cpp_smart_ptr @ 00102a50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

int test_cpp_smart_ptr(void)

{
 int iVar1;
 int iVar2;
 int *piVar3;
 undefined4 *puVar4;
 type *ptVar5;
 unique_ptr_int local_48 [8];
 __2 local_40 [4];
 int local_3c;
 unique_ptr_int_array local_38 [12];
 int local_2c;
 unique_ptr_default_delete_int local_28 [24];
 unique_ptr_default_delete_int local_10 [8];
 
 piVar3 = operator_new(4);
 *piVar3 = 100;
 std_unique_ptr_int_unique_ptr_default_delete_int
 ((unique_ptr_default_delete_int *)local_10,piVar3);
 /* try { // try from 00102a7f to 00102a83 has its CatchHandler @ 00102bce */
 puVar4 = (undefined4 *)std_unique_ptr_int_operator_star(local_10);
 *puVar4 = 200;
 ptVar5 = std_move_unique_ptr((unique_ptr *)local_10);
 std_unique_ptr_int_unique_ptr_move((unique_ptr_default_delete_int *)local_28,(unique_ptr *)ptVar5);
 /* try { // try from 00102ab4 to 00102ad4 has its CatchHandler @ 00102bdf */
 piVar3 = (int *)std_unique_ptr_int_operator_star(local_28);
 local_2c = *piVar3;
 piVar3 = operator_new__(0x14);
 *piVar3 = 1;
 piVar3[1] = 2;
 piVar3[2] = 3;
 piVar3[3] = 4;
 piVar3[4] = 5;
 std_unique_ptr_int_array_unique_ptr(local_38,piVar3);
 /* try { // try from 00102b15 to 00102b3a has its CatchHandler @ 00102bf0 */
 piVar3 = (int *)std_unique_ptr_int_array_operator_index(local_38,2);
 local_3c = *piVar3;
 piVar3 = operator_new(4);
 *piVar3 = 500;
 std_unique_ptr_int_unique_ptr_lambda_2(local_48,piVar3,local_40);
 /* try { // try from 00102b6f to 00102b73 has its CatchHandler @ 00102c01 */
 piVar3 = (int *)std_unique_ptr_int_operator_star(local_48);
 iVar1 = *piVar3;
 iVar2 = local_2c + local_3c;
 std_unique_ptr_int_dtor(local_48);
 std_unique_ptr_int_array_dtor(local_38);
 std_unique_ptr_int_dtor(local_28);
 std_unique_ptr_int_dtor(local_10);
 return iVar2 + iVar1;
}



/* Function: unique_ptr<lambda_2,void> @ 00102c40 */

/* std::unique_ptr<int, lambda_2>::unique_ptr<lambda_2,
 void>(int*, lambda_2 const&) */

void __thiscall
std_unique_ptr_int_unique_ptr_lambda_2
 (unique_ptr_int *this,int *param_1,__2 *param_2)

{
 /* try { // try from 00102c60 to 00102c64 has its CatchHandler @ 00102c70 */
 __uniq_ptr_data<int,lambda_2,true,false>::
 __uniq_ptr_impl<lambda_2_const&>
 ((__uniq_ptr_data<int,lambda_2,true,false> *)this,param_1,param_2);
 return;
}



/* Function: operator* @ 00102c80 */

/* std::unique_ptr<int, lambda_2>::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall
std_unique_ptr_int_operator_star
 (unique_ptr_int *this)

{
 get(this);
 return;
}



/* Function: ~unique_ptr @ 00102cb0 */

/* std::unique_ptr<int, lambda_2>::~unique_ptr() */

void __thiscall
std_unique_ptr_int_dtor_lambda_2
 (unique_ptr_int *this)

{
 int **ppiVar1;
 __2 *this_00;
 type *ptVar2;
 
 /* try { // try from 00102cc4 to 00102d09 has its CatchHandler @ 00102d25 */
 ppiVar1 = (int **)__uniq_ptr_impl<int,lambda_2>::_M_ptr
 ((__uniq_ptr_impl<int,lambda_2> *)this);
 if (*ppiVar1 != (int *)0x0) {
 this_00 = (__2 *)get_deleter();
 ptVar2 = std_move_int_ptr_rref(ppiVar1);
 lambda_2_operator(this_00,*(int **)ptVar2);
 }
 *ppiVar1 = (int *)0x0;
 return;
}



/* Function: test_cpp_rtti @ 00102d30 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 int iVar1;
 RTTIDerivedA *this;
 RTTIDerivedB *this_00;
 ulong uVar2;
 char *__s;
 size_t sVar3;
 long local_70;
 long local_60;
 int local_1c;
 
 this = operator_new(8);
 memset(this,0,8);
 RTTIDerivedA_RTTIDerivedA(this);
 this_00 = operator_new(8);
 memset(this_00,0,8);
 RTTIDerivedB_RTTIDerivedB(this_00);
 local_1c = 0;
 if (this == (RTTIDerivedA *)0x0) {
 __cxa_bad_typeid();
 }
 uVar2 = std_type_info_operator_equal
 (*(type_info **)(*(long *)this + -8),*(type_info **)&DAT_001051a1);
 if ((uVar2 & 1) != 0) {
 local_1c = 10;
 }
 if (this_00 == (RTTIDerivedB *)0x0) {
 __cxa_bad_typeid();
 }
 uVar2 = std_type_info_operator_equal
 (*(type_info **)(*(long *)this_00 + -8),*(type_info **)&DAT_001051a1);
 if ((uVar2 & 1) != 0) {
 local_1c = local_1c + 0x14;
 }
 if (this == (RTTIDerivedA *)0x0) {
 local_60 = 0;
 }
 else {
 local_60 = __dynamic_cast(this,*(void **)&DAT_001051a1,*(void **)&DAT_001051a1,0);
 }
 if (local_60 != 0) {
 iVar1 = RTTIDerivedA_derivedA_data();
 local_1c = iVar1 + local_1c;
 }
 if (this_00 == (RTTIDerivedB *)0x0) {
 local_70 = 0;
 }
 else {
 local_70 = __dynamic_cast(this_00,*(void **)&DAT_001051a1,*(void **)&DAT_001051a1,0);
 }
 if (local_70 != 0) {
 iVar1 = RTTIDerivedB_derivedB_data();
 local_1c = iVar1 + local_1c;
 }
 if (this == (RTTIDerivedA *)0x0) {
 __cxa_bad_typeid();
 }
 __s = (char *)std_type_info_name(*(type_info **)(*(long *)this + -8));
 sVar3 = strlen(__s);
 if (this != (RTTIDerivedA *)0x0) {
 (**(code **)(*(long *)this + 8))();
 }
 if (this_00 != (RTTIDerivedB *)0x0) {
 (**(code **)(*(long *)this_00 + 8))();
 }
 return local_1c + (int)sVar3;
}



/* Function: test_cpp_oo_features @ 00102f70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 uint uVar1;
 
 printf(&DAT_00105025);
 uVar1 = test_cpp_member_func();
 printf(&DAT_0010504a,(ulong)uVar1);
 uVar1 = test_cpp_constructor();
 printf(&DAT_00105068,(ulong)uVar1);
 uVar1 = test_cpp_virtual_func();
 printf(&DAT_00105084,(ulong)uVar1);
 uVar1 = test_cpp_multiple_inheritance();
 printf(&DAT_001050a0,(ulong)uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 printf(&DAT_001050bc,(ulong)uVar1);
 uVar1 = test_cpp_operator_overload();
 printf(&DAT_001050d9,(ulong)uVar1);
 uVar1 = test_cpp_template_func();
 printf(&DAT_001050f5,(ulong)uVar1);
 uVar1 = test_cpp_template_class();
 printf(&DAT_00105111,(ulong)uVar1);
 uVar1 = test_cpp_lambda();
 printf(&DAT_0010512d,(ulong)uVar1);
 uVar1 = test_cpp_exception();
 printf(&DAT_00105149,(ulong)uVar1);
 uVar1 = test_cpp_smart_ptr();
 printf(&DAT_00105166,(ulong)uVar1);
 uVar1 = test_cpp_rtti();
 printf(&DAT_00105183,(ulong)uVar1);
 return;
}



/* Function: main @ 00103080 */

undefined8 main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: __uniq_ptr_impl<lambda_2_const&> @ 001030a0 */

/* std::__uniq_ptr_data<int, lambda_2, true,
 false>::__uniq_ptr_impl<lambda_2 const&>(int*, lambda_2 const&)
 */

void __thiscall
std::__uniq_ptr_data<int,lambda_2,true,false>::
__uniq_ptr_impl<lambda_2_const&>
 (__uniq_ptr_data<int,lambda_2,true,false> *this,int *param_1,__2 *param_2
 )

{
 __uniq_ptr_impl<int,lambda_2>::__uniq_ptr_impl<lambda_2_const&>
 ((__uniq_ptr_impl<int,lambda_2> *)this,param_1,param_2);
 return;
}



/* Function: __uniq_ptr_impl<lambda_2_const&> @ 001030d0 */

/* std::__uniq_ptr_impl<int, lambda_2>::__uniq_ptr_impl<lambda_2
 const&>(int*, lambda_2 const&) */

void __thiscall
std::__uniq_ptr_impl<int,lambda_2>::
__uniq_ptr_impl<lambda_2_const&>
 (__uniq_ptr_impl<int,lambda_2> *this,int *param_1,__2 *param_2)

{
 __2 *p_Var1;
 int *local_18;
 __uniq_ptr_impl<int,lambda_2> *local_10;
 
 local_18 = param_1;
 local_10 = this;
 p_Var1 = forward<lambda_2_const&>((type *)param_2);
 tuple<int*,lambda_2>::tuple<int*&,lambda_2_const&,true>
 ((tuple<int*,lambda_2> *)local_10,&local_18,p_Var1);
 return;
}



/* Function: forward_lambda_2_const @ 00103110 */

__2 * std_forward_lambda_2_const(type *param_1)

{
 return (__2 *)param_1;
}



/* Function: tuple_int_ptr_lambda_2_const @ 00103120 */

void __thiscall
std_tuple_int_ptr_lambda_2_tuple_const
 (tuple *this,int **param_1,__2 *param_2)

{
 int **ppiVar1;
 __2 *p_Var2;
 
 ppiVar1 = std_forward_int_ptr_ref((type *)param_1);
 p_Var2 = std_forward_lambda_2_const((type *)param_2);
 /* try { // try from 0010315d to 00103161 has its CatchHandler @ 0010316d */
 _Tuple_impl_0ul_int_ptr_lambda_2_impl_const
 ((_Tuple_impl *)this,ppiVar1,p_Var2);
 return;
}



/* Function: _Tuple_impl_0ul_int_ptr_lambda_2_impl_const @ 00103180 */

void __thiscall
_Tuple_impl_0ul_int_ptr_lambda_2_impl_const
 (_Tuple_impl *this,int **param_1,__2 *param_2)

{
 int **ppiVar1;
 
 std_forward_lambda_2_const((type *)param_2);
 _Tuple_impl_1ul_lambda_2_impl((__2 *)this);
 ppiVar1 = std_forward_int_ptr_ref((type *)param_1);
 _Head_base_0ul_int_ptr_false_Head_base_int_ptr((_Head_base *)this,ppiVar1);
 return;
}



/* Function: _Tuple_impl_1ul_lambda_2_impl @ 001031e0 */

void _Tuple_impl_1ul_lambda_2_impl(__2 *param_1)

{
 return;
}



/* Function: _Head_base_1ul_lambda_2_true_Head_base @ 00103210 */

void _Head_base_1ul_lambda_2_true_Head_base(__2 *param_1)

{
 return;
}



/* Function: __uniq_ptr_impl_lambda_2_M_ptr @ 00103220 */

void __thiscall
__uniq_ptr_impl_lambda_2_M_ptr(__uniq_ptr_impl *this)

{
 std_get_0ul_int_ptr_lambda_2((tuple *)this);
 return;
}



/* Function: get_deleter @ 00103240 */

/* std::unique_ptr<int, lambda_2>::get_deleter() */

undefined8 std_unique_ptr_int_get_deleter_lambda_2(void)

{
 undefined8 uVar1;
 
 /* try { // try from 00103250 to 00103254 has its CatchHandler @ 00103268 */
 uVar1 = __uniq_ptr_impl<int,lambda_2>::_M_deleter();
 return uVar1;
}



/* Function: operator() @ 00103270 */

/* lambda_2::TEMPNAMEPLACEHOLDERVALUE(int*) const */

void __thiscall lambda_2_operator(__2 *this,int *param_1)

{
 *param_1 = -1;
 if (param_1 != (int *)0x0) {
 operator_delete(param_1);
 }
 return;
}



/* Function: std_get_0ul_int_ptr_lambda_2 @ 001032b0 */

type * std_get_0ul_int_ptr_lambda_2(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)__get_helper_0ul_int_ptr_lambda_2((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: __get_helper_0ul_int_ptr_lambda_2 @ 001032d0 */

int ** __get_helper_0ul_int_ptr_lambda_2(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)_Tuple_impl_0ul_int_ptr_lambda_2_M_head(param_1);
 return ppiVar1;
}



/* Function: _Tuple_impl_0ul_int_ptr_lambda_2_M_head @ 001032f0 */

void _Tuple_impl_0ul_int_ptr_lambda_2_M_head(_Tuple_impl *param_1)

{
 _Head_base_0ul_int_ptr_false_M_head((_Head_base *)param_1);
 return;
}



/* Function: __uniq_ptr_impl_lambda_2_M_deleter @ 00103310 */

void __uniq_ptr_impl_lambda_2_M_deleter(void)

{
 tuple *in_RDI;
 
 std_get_1ul_int_ptr_lambda_2(in_RDI);
 return;
}



/* Function: std_get_1ul_int_ptr_lambda_2 @ 00103330 */

type * std_get_1ul_int_ptr_lambda_2(tuple *param_1)

{
 __2 *p_Var1;
 
 p_Var1 = __get_helper_1ul_lambda_2((_Tuple_impl *)param_1);
 return (type *)p_Var1;
}



/* Function: __get_helper_1ul_lambda_2 @ 00103350 */

__2 * __get_helper_1ul_lambda_2(_Tuple_impl *param_1)

{
 __2 *p_Var1;
 
 p_Var1 = (__2 *)_Tuple_impl_1ul_lambda_2_M_head(param_1);
 return p_Var1;
}



/* Function: _Tuple_impl_1ul_lambda_2_M_head @ 00103370 */

void _Tuple_impl_1ul_lambda_2_M_head(_Tuple_impl *param_1)

{
 _Head_base_1ul_lambda_2_true_M_head((_Head_base *)param_1);
 return;
}



/* Function: _Head_base_1ul_lambda_2_true_M_head @ 00103390 */

_Head_base * _Head_base_1ul_lambda_2_true_M_head(_Head_base *param_1)

{
 return param_1;
}



/* Function: std_unique_ptr_int_get @ 001033a0 */

undefined8 __thiscall
std_unique_ptr_int_get(unique_ptr_int *this)

{
 undefined8 uVar1;
 
 uVar1 = __uniq_ptr_impl_lambda_2_M_ptr(this);
 return uVar1;
}



/* Function: _M_ptr @ 001033d0 */

/* std::__uniq_ptr_impl<int, lambda_2>::_M_ptr() const */

undefined8 __thiscall
std::__uniq_ptr_impl<int,lambda_2>::_M_ptr
 (__uniq_ptr_impl<int,lambda_2> *this)

{
 type *ptVar1;
 
 ptVar1 = std_get_0ul_int_ptr_lambda_2((tuple *)this);
 return *(undefined8 *)ptVar1;
}



/* Function: get_0ul_int_ptr_lambda_2 @ 001033f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0ul, std::tuple<int*, lambda_2> >::type const& std::get<0ul,
 int*, lambda_2>(std::tuple<int*, lambda_2> const&) */

type * std_get_0ul_int_ptr_lambda_2(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)std___get_helper_0ul_int_ptr_lambda_2((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: __get_helper_0ul_int_ptr_lambda_2 @ 00103410 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* const& std::__get_helper<0ul, int*, lambda_2>(std::_Tuple_impl<0ul, int*,
 lambda_2> const&) */

int ** std___get_helper_0ul_int_ptr_lambda_2(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)std_Tuple_impl_0ul_int_ptr_lambda_2_M_head(param_1);
 return ppiVar1;
}



/* Function: _M_head @ 00103430 */

/* std::_Tuple_impl<0ul, int*, lambda_2>::_M_head(std::_Tuple_impl<0ul, int*,
 lambda_2> const&) */

void std_Tuple_impl_0ul_int_ptr_lambda_2_M_head(_Tuple_impl *param_1)

{
 std_Head_base_0ul_int_ptr_false_M_head((_Head_base *)param_1);
 return;
}



/* Function: SimpleClass @ 00103450 */

/* SimpleClass::SimpleClass(int, char const*) */

void __thiscall SimpleClass_SimpleClass(SimpleClass *this,int param_1,char *param_2)

{
 *(int *)this = param_1;
 strncpy((char *)(this + 4),param_2,0x1f);
 this[0x23] = (SimpleClass)0x0;
 return;
}



/* Function: setValue @ 00103490 */

/* SimpleClass::setValue(int) */

void __thiscall SimpleClass_setValue(SimpleClass *this,int param_1)

{
 *(int *)this = param_1;
 return;
}



/* Function: getValue @ 001034b0 */

/* SimpleClass::getValue() const */

undefined4 __thiscall SimpleClass_getValue(SimpleClass *this)

{
 return *(undefined4 *)this;
}



/* Function: compute @ 001034c0 */

/* SimpleClass::compute(int) const */

long __thiscall SimpleClass_compute(SimpleClass *this,int param_1)

{
 int iVar1;
 size_t sVar2;
 
 iVar1 = *(int *)this;
 sVar2 = strlen((char *)(this + 4));
 return (long)(iVar1 * param_1) + sVar2;
}



/* Function: getClassID @ 00103500 */

/* SimpleClass::getClassID() */

undefined8 SimpleClass_getClassID(void)

{
 return 0x1234;
}



/* Function: LifecycleClass @ 00103510 */

/* LifecycleClass::LifecycleClass(unsigned long) */

void __thiscall LifecycleClass_LifecycleClass(LifecycleClass *this,ulong param_1)

{
 undefined1 auVar1 [16];
 ulong uVar2;
 void *pvVar3;
 ulong local_20;
 
 *(ulong *)(this + 8) = param_1;
 auVar1._8_8_ = 0;
 auVar1._0_8_ = param_1;
 uVar2 = SUB168(auVar1 * ZEXT816(4),0);
 if (SUB168(auVar1 * ZEXT816(4),8) != 0) {
 uVar2 = 0xffffffffffffffff;
 }
 pvVar3 = operator_new__(uVar2);
 *(void **)this = pvVar3;
 for (local_20 = 0; local_20 < param_1; local_20 = local_20 + 1) {
 *(int *)(*(long *)this + local_20 * 4) = (int)local_20 * 10;
 }
 instance_count = instance_count + 1;
 return;
}



/* Function: getData @ 001035b0 */

/* LifecycleClass::getData(unsigned long) const */

undefined4 __thiscall LifecycleClass_getData(LifecycleClass *this,ulong param_1)

{
 undefined4 local_24;
 
 if (param_1 < *(ulong *)(this + 8)) {
 local_24 = *(undefined4 *)(*(long *)this + param_1 * 4);
 }
 else {
 local_24 = 0xffffffff;
 }
 return local_24;
}



/* Function: getInstanceCount @ 00103600 */

/* LifecycleClass::getInstanceCount() */

undefined4 LifecycleClass_getInstanceCount(void)

{
 return instance_count;
}



/* Function: ~LifecycleClass @ 00103610 */

/* LifecycleClass::~LifecycleClass() */

void __thiscall LifecycleClass_dtor(LifecycleClass *this)

{
 if (*(void **)this != (void *)0x0) {
 operator_delete__(*(void **)this);
 }
 instance_count = instance_count + -1;
 return;
}



/* Function: Base @ 00103650 */

/* Base::Base() */

void __thiscall Base_Base(Base *this)

{
 *(undefined ***)this = &PTR_virtual_func_00108878;
 return;
}



/* Function: Derived @ 00103670 */

/* Derived::Derived(int) */

void __thiscall Derived_Derived(Derived *this,int param_1)

{
 Base_Base((Base *)this);
 *(undefined ***)this = &PTR_virtual_func_001088b8;
 *(int *)(this + 8) = param_1;
 return;
}



/* Function: virtual_func @ 001036b0 */

/* Base::virtual_func(int) */

int __thiscall Base_virtual_func(Base *this,int param_1)

{
 return param_1 + 1;
}



/* Function: virtual_func @ 001036d0 */

/* Derived::virtual_func(int) */

int __thiscall Derived_virtual_func(Derived *this,int param_1)

{
 return param_1 * *(int *)(this + 8);
}



/* Function: ~Derived @ 001036f0 */

/* Derived::~Derived() */

void __thiscall Derived_dtor(Derived *this)

{
 Base_dtor((Base *)this);
 return;
}



/* Function: ~Base @ 00103710 */

/* Base::~Base() */

void __thiscall Base_dtor(Base *this)

{
 return;
}



/* Function: MultiDerived @ 00103720 */

/* MultiDerived::MultiDerived() */

void __thiscall MultiDerived_MultiDerived(MultiDerived *this)

{
 BaseA_BaseA((BaseA *)this);
 BaseB_BaseB((BaseB *)(this + 0x10));
 *(undefined ***)this = &PTR_funcA_00108900;
 *(undefined ***)(this + 0x10) = &PTR_funcB_00108930;
 return;
}



/* Function: ~MultiDerived @ 00103770 */

/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived_dtor(MultiDerived *this)

{
 BaseB_dtor((BaseB *)(this + 0x10));
 BaseA_dtor((BaseA *)this);
 return;
}



/* Function: DiamondDerived @ 001037a0 */

/* DiamondDerived::DiamondDerived() */

void __thiscall DiamondDerived_DiamondDerived(DiamondDerived *this)

{
 VirtualBase_VirtualBase((VirtualBase *)(this + 0x20));
 MiddleA_MiddleA((MiddleA *)this);
 MiddleB_MiddleB((MiddleB *)(this + 0x10));
 *(undefined8 *)this = 0x108a08;
 *(undefined8 *)(this + 0x20) = 0x108a70;
 *(undefined8 *)(this + 0x10) = 0x108a38;
 return;
}



/* Function: ~DiamondDerived @ 00103830 */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived_dtor(DiamondDerived *this)

{
 MiddleB_dtor((MiddleB *)(this + 0x10));
 MiddleA_dtor((MiddleA *)this);
 return;
}



/* Function: Point @ 00103870 */

/* Point::Point(int, int) */

void __thiscall Point_Point(Point *this,int param_1,int param_2)

{
 *(int *)this = param_1;
 *(int *)(this + 4) = param_2;
 return;
}



/* Function: operator+ @ 00103890 */

/* Point::TEMPNAMEPLACEHOLDERVALUE(Point const&) const */

undefined8 __thiscall Point_operator_add(Point *this,Point *param_1)

{
 undefined8 local_10;
 
 Point((Point *)&local_10,*(int *)this + *(int *)param_1,*(int *)(this + 4) + *(int *)(param_1 + 4)
 );
 return local_10;
}



/* Function: operator== @ 001038d0 */

/* Point::TEMPNAMEPLACEHOLDERVALUE(Point const&) const */

bool __thiscall Point_operator_equal(Point *this,Point *param_1)

{
 bool local_19;
 
 local_19 = false;
 if (*(int *)this == *(int *)param_1) {
 local_19 = *(int *)(this + 4) == *(int *)(param_1 + 4);
 }
 return local_19;
}



/* Function: operator++ @ 00103920 */

/* Point::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall Point_operator_incr(Point *this)

{
 *(int *)this = *(int *)this + 1;
 *(int *)(this + 4) = *(int *)(this + 4) + 1;
 return;
}



/* Function: template_max<int> @ 00103940 */

/* int template_max<int>(int, int) */

int template_max_int(int param_1,int param_2)

{
 int local_14;
 
 local_14 = param_2;
 if (param_2 < param_1) {
 local_14 = param_1;
 }
 return local_14;
}



/* Function: template_max<double> @ 00103970 */

/* double template_max<double>(double, double) */

double template_max_double(double param_1,double param_2)

{
 double local_20;
 
 local_20 = param_2;
 if (param_2 < param_1) {
 local_20 = param_1;
 }
 return local_20;
}



/* Function: template_swap<int> @ 001039b0 */

/* void template_swap<int>(int&, int&) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 001039e0 */

/* Container<int>::Container() */

void __thiscall Container_int_Container(Container_int *this)

{
 *(undefined4 *)(this + 0x28) = 0;
 return;
}



/* Function: push @ 00103a00 */

/* Container<int>::push(int) */

void __thiscall Container_int_push(Container_int *this,int param_1)

{
 int iVar1;
 
 if (*(int *)(this + 0x28) < 10) {
 iVar1 = *(int *)(this + 0x28);
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + (long)iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get @ 00103a40 */

/* Container<int>::get(int) const */

int __thiscall Container_int_get(Container_int *this,int param_1)

{
 undefined4 local_c;
 
 if ((param_1 < 0) || (*(int *)(this + 0x28) <= param_1)) {
 local_c = 0;
 }
 else {
 local_c = *(undefined4 *)(this + (long)param_1 * 4);
 }
 return local_c;
}



/* Function: getSize @ 00103a90 */

/* Container<int>::getSize() const */

int __thiscall Container_int_getSize(Container_int *this)

{
 return *(undefined4 *)(this + 0x28);
}



/* Function: Container @ 00103ab0 */

/* Container<double>::Container() */

void __thiscall Container_double_Container(Container_double *this)

{
 *(undefined4 *)(this + 0x50) = 0;
 return;
}



/* Function: push @ 00103ad0 */

/* Container<double>::push(double) */

void __thiscall Container_double_push(Container_double *this,double param_1)

{
 int iVar1;
 
 if (*(int *)(this + 0x50) < 10) {
 iVar1 = *(int *)(this + 0x50);
 *(int *)(this + 0x50) = iVar1 + 1;
 *(double *)(this + (long)iVar1 * 8) = param_1;
 }
 return;
}



/* Function: get @ 00103b10 */

/* Container<double>::get(int) const */

double __thiscall Container_double_get(Container_double *this,int param_1)

{
 undefined8 local_10;
 
 if ((param_1 < 0) || (*(int *)(this + 0x50) <= param_1)) {
 local_10 = 0;
 }
 else {
 local_10 = *(undefined8 *)(this + (long)param_1 * 8);
 }
 return local_10;
}



/* Function: getSize @ 00103b70 */

/* Container<double>::getSize() const */

int __thiscall Container_double_getSize(Container_double *this)

{
 return *(undefined4 *)(this + 0x50);
}



/* Function: unique_ptr<std::default_delete<int>,void> @ 00103b90 */

/* std::unique_ptr<int, std::default_delete<int> >::unique_ptr<std::default_delete<int>, void>(int*)
 */

void __thiscall
std_unique_ptr_int_unique_ptr_default_delete_int
 (unique_ptr<int,std::default_delete<int>> *this,int *param_1)

{
 /* try { // try from 00103ba8 to 00103bac has its CatchHandler @ 00103bb8 */
 __uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_impl
 ((__uniq_ptr_data<int,std::default_delete<int>,true,true> *)this,param_1);
 return;
}



/* Function: operator* @ 00103bc0 */

/* std::unique_ptr<int, std::default_delete<int> >::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall
std_unique_ptr_int_operator_star
 (unique_ptr<int,std::default_delete<int>> *this)

{
 get(this);
 return;
}



/* Function: move<std::unique_ptr<int,std::default_delete<int>>&> @ 00103bf0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<std::unique_ptr<int, std::default_delete<int> >&>::type&&
 std::move<std::unique_ptr<int, std::default_delete<int> >&>(std::unique_ptr<int,
 std::default_delete<int> >&) */

type * std_move_unique_ptr_default_delete_int(unique_ptr *param_1)

{
 return (type *)param_1;
}



/* Function: unique_ptr @ 00103c00 */

/* std::unique_ptr<int, std::default_delete<int> >::unique_ptr(std::unique_ptr<int,
 std::default_delete<int> >&&) */

void __thiscall
std_unique_ptr_int_unique_ptr_move
 (unique_ptr<int,std::default_delete<int>> *this,unique_ptr *param_1)

{
 __uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data
 ((__uniq_ptr_data<int,std::default_delete<int>,true,true> *)this,
 (__uniq_ptr_data *)param_1);
 return;
}



/* Function: unique_ptr<int*,std::default_delete<int[]>,void,bool> @ 00103c30 */

/* std::unique_ptr<int [], std::default_delete<int []> >::unique_ptr<int*, std::default_delete<int
 []>, void, bool>(int*) */

void __thiscall
std_unique_ptr_int_array_unique_ptr
 (unique_ptr<int[],std::default_delete<int[]>> *this,int *param_1)

{
 /* try { // try from 00103c48 to 00103c4c has its CatchHandler @ 00103c58 */
 __uniq_ptr_data<int,std::default_delete<int[]>,true,true>::__uniq_ptr_impl
 ((__uniq_ptr_data<int,std::default_delete<int[]>,true,true> *)this,param_1);
 return;
}



/* Function: operator[] @ 00103c60 */

/* std::unique_ptr<int [], std::default_delete<int []> >::operator[](unsigned long) const */

long __thiscall
std_unique_ptr_int_array_operator_index
 (unique_ptr<int[],std::default_delete<int[]>> *this,ulong param_1)

{
 long lVar1;
 
 lVar1 = get(this);
 return lVar1 + param_1 * 4;
}



/* Function: ~unique_ptr @ 00103ca0 */

/* std::unique_ptr<int [], std::default_delete<int []> >::~unique_ptr() */

void __thiscall
std_unique_ptr_int_array_dtor
 (unique_ptr<int[],std::default_delete<int[]>> *this)

{
 long *plVar1;
 default_delete<int[]> *this_00;
 
 plVar1 = (long *)__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
 ((__uniq_ptr_impl<int,std::default_delete<int[]>> *)this);
 if (*plVar1 != 0) {
 this_00 = (default_delete<int[]> *)get_deleter(this);
 /* try { // try from 00103cde to 00103ce2 has its CatchHandler @ 00103cfe */
 default_delete<int[]>::operator()(this_00,(int *)*plVar1);
 }
 *plVar1 = 0;
 return;
}



/* Function: ~unique_ptr @ 00103d10 */

/* std::unique_ptr<int, std::default_delete<int> >::~unique_ptr() */

void __thiscall
std_unique_ptr_int_dtor
 (unique_ptr<int,std::default_delete<int>> *this)

{
 int **ppiVar1;
 default_delete<int> *this_00;
 type *ptVar2;
 
 ppiVar1 = (int **)__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
 ((__uniq_ptr_impl<int,std::default_delete<int>> *)this);
 if (*ppiVar1 != (int *)0x0) {
 this_00 = (default_delete<int> *)get_deleter(this);
 ptVar2 = std_move_int_ptr_rref(ppiVar1);
 /* try { // try from 00103d58 to 00103d5c has its CatchHandler @ 00103d78 */
 std_default_delete_int_operator(this_00,*(int **)ptVar2);
 }
 *ppiVar1 = (int *)0x0;
 return;
}



/* Function: RTTIDerivedA @ 00103d80 */

/* RTTIDerivedA::RTTIDerivedA() */

void __thiscall RTTIDerivedA_RTTIDerivedA(RTTIDerivedA *this)

{
 RTTIBase_RTTIBase((RTTIBase *)this);
 *(undefined ***)this = &PTR__RTTIDerivedA_00108d50;
 return;
}



/* Function: RTTIDerivedB @ 00103dc0 */

/* RTTIDerivedB::RTTIDerivedB() */

void __thiscall RTTIDerivedB_RTTIDerivedB(RTTIDerivedB *this)

{
 RTTIBase_RTTIBase((RTTIBase *)this);
 *(undefined ***)this = &PTR__RTTIDerivedB_00108da0;
 return;
}



/* Function: operator== @ 00103e00 */

/* std::type_info::TEMPNAMEPLACEHOLDERVALUE(std::type_info const&) const */

bool __thiscall std_type_info_before(type_info *this,type_info *param_1)

{
 int iVar1;
 bool local_29;
 bool local_19;
 
 local_19 = true;
 if (*(long *)(this + 8) != *(long *)(param_1 + 8)) {
 local_29 = false;
 if (**(char **)(this + 8) != '*') {
 iVar1 = strcmp(*(char **)(this + 8),*(char **)(param_1 + 8));
 local_29 = iVar1 == 0;
 }
 local_19 = local_29;
 }
 return local_19;
}



/* Function: derivedA_data @ 00103e80 */

/* RTTIDerivedA_derivedA_data() const */

undefined8 RTTIDerivedA_derivedA_data(void)

{
 return 100;
}



/* Function: derivedB_data @ 00103e90 */

/* RTTIDerivedB_derivedB_data() const */

undefined8 RTTIDerivedB_derivedB_data(void)

{
 return 200;
}



/* Function: name @ 00103ea0 */

/* std_type_info_name() const */

long __thiscall std_type_info_name(type_info *this)

{
 long local_20;
 
 if (**(char **)(this + 8) == '*') {
 local_20 = *(long *)(this + 8) + 1;
 }
 else {
 local_20 = *(long *)(this + 8);
 }
 return local_20;
}



/* Function: getName @ 00103ef0 */

/* Base_getName() const */

undefined * Base_getName(void)

{
 return &DAT_001051a1;
}



/* Function: Base_dtor_full @ 00103f10 */

/* Base::~Base() */

void __thiscall Base_dtor_full(Base *this)

{
 Base_dtor(this);
 operator_delete(this);
 return;
}



/* Function: getName @ 00103f40 */

/* Derived_getName() const */

char * Derived_getName(void)

{
 return "Derived";
}



/* Function: Derived_dtor_full @ 00103f60 */

/* Derived::~Derived() */

void __thiscall Derived_dtor_full(Derived *this)

{
 Derived_dtor(this);
 operator_delete(this);
 return;
}



/* Function: BaseA @ 00103f90 */

/* BaseA::BaseA() */

void __thiscall BaseA_BaseA(BaseA *this)

{
 *(undefined ***)this = &PTR_funcA_001089b0;
 return;
}



/* Function: BaseB @ 00103fb0 */

/* BaseB::BaseB() */

void __thiscall BaseB_BaseB(BaseB *this)

{
 *(undefined ***)this = &PTR_funcB_001089d8;
 return;
}



/* Function: funcA @ 00103fd0 */

/* MultiDerived_funcA() */

undefined8 MultiDerived_funcA(void)

{
 return 0x1e;
}



/* Function: MultiDerived_dtor_full @ 00103fe0 */

/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived_dtor_full(MultiDerived *this)

{
 MultiDerived_dtor(this);
 operator_delete(this);
 return;
}



/* Function: funcB @ 00104010 */

/* MultiDerived_funcB() */

undefined8 MultiDerived_funcB(void)

{
 return 0x28;
}



/* Function: funcB @ 00104020 */

/* non-virtual thunk to MultiDerived_funcB() */

void __thiscall MultiDerived_funcB_thunk(MultiDerived *this)

{
 MultiDerived_funcB();
 return;
}



/* Function: ~MultiDerived @ 00104040 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived_dtor_thunk(MultiDerived *this)

{
 MultiDerived_dtor_full(this + -0x10);
 return;
}



/* Function: ~MultiDerived @ 00104060 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived_dtor_thunk2(MultiDerived *this)

{
 MultiDerived_dtor_full(this + -0x10);
 return;
}



/* Function: funcA @ 00104080 */

/* BaseA_funcA() */

undefined8 BaseA_funcA(void)

{
 return 10;
}



/* Function: ~BaseA @ 00104090 */

/* BaseA::~BaseA() */

void __thiscall BaseA::~BaseA(BaseA *this)

{
 return;
}



/* Function: BaseA_dtor_full @ 001040a0 */

/* BaseA::~BaseA() */

void __thiscall BaseA_dtor_full(BaseA *this)

{
 BaseA_dtor(this);
 operator_delete(this);
 return;
}



/* Function: funcB @ 001040d0 */

/* BaseB_funcB() */

undefined8 BaseB_funcB(void)

{
 return 0x14;
}



/* Function: ~BaseB @ 001040e0 */

/* BaseB::~BaseB() */

void __thiscall BaseB::~BaseB(BaseB *this)

{
 return;
}



/* Function: BaseB_dtor_full @ 001040f0 */

/* BaseB::~BaseB() */

void __thiscall BaseB_dtor_full(BaseB *this)

{
 BaseB_dtor(this);
 operator_delete(this);
 return;
}



/* Function: VirtualBase @ 00104120 */

/* VirtualBase::VirtualBase() */

void __thiscall VirtualBase_VirtualBase(VirtualBase *this)

{
 *(undefined ***)this = &PTR_func_00108c38;
 return;
}



/* Function: MiddleA @ 00104140 */

/* MiddleA::MiddleA() */

void __thiscall MiddleA_MiddleA(MiddleA *this)

{
 return;
}



/* Function: MiddleB @ 00104170 */

/* MiddleB::MiddleB() */

void __thiscall MiddleB_MiddleB(MiddleB *this)

{
 return;
}



/* Function: func @ 001041a0 */

/* MiddleA::func() */

int __thiscall MiddleA_func(MiddleA *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}



/* Function: MiddleA_dtor_full @ 001041c0 */

/* MiddleA::~MiddleA() */

void __thiscall MiddleA_dtor_full(MiddleA *this)

{
 MiddleA_dtor(this);
 VirtualBase_dtor((VirtualBase *)(this + 0x10));
 return;
}



/* Function: MiddleA_dtor_delete @ 00104200 */

/* MiddleA::~MiddleA() */

void __thiscall MiddleA_dtor_delete(MiddleA *this)

{
 MiddleA_dtor(this);
 operator_delete(this);
 return;
}



/* Function: func @ 00104230 */

/* virtual thunk to MiddleA::func() */

void __thiscall MiddleA_func_thunk(MiddleA *this)

{
 MiddleA_func(this + *(long *)(*(long *)this + -0x18));
 return;
}



/* Function: ~MiddleA @ 00104250 */

/* virtual thunk to MiddleA::~MiddleA() */

void __thiscall MiddleA_dtor_thunk(MiddleA *this)

{
 MiddleA_dtor_full(this + *(long *)(*(long *)this + -0x20));
 return;
}



/* Function: ~MiddleA @ 00104270 */

/* virtual thunk to MiddleA::~MiddleA() */

void __thiscall MiddleA_dtor_thunk2(MiddleA *this)

{
 MiddleA_dtor_full(this + *(long *)(*(long *)this + -0x20));
 return;
}



/* Function: func @ 00104290 */

/* MiddleB::func() */

int __thiscall MiddleB_func(MiddleB *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}



/* Function: MiddleB_dtor_full @ 001042b0 */

/* MiddleB::~MiddleB() */

void __thiscall MiddleB_dtor_full(MiddleB *this)

{
 MiddleB_dtor(this);
 VirtualBase_dtor((VirtualBase *)(this + 0x10));
 return;
}



/* Function: MiddleB_dtor_delete @ 001042f0 */

/* MiddleB::~MiddleB() */

void __thiscall MiddleB_dtor_delete(MiddleB *this)

{
 MiddleB_dtor(this);
 operator_delete(this);
 return;
}



/* Function: func @ 00104320 */

/* virtual thunk to MiddleB::func() */

void __thiscall MiddleB_func_thunk(MiddleB *this)

{
 MiddleB_func(this + *(long *)(*(long *)this + -0x18));
 return;
}



/* Function: ~MiddleB @ 00104340 */

/* virtual thunk to MiddleB::~MiddleB() */

void __thiscall MiddleB_dtor_thunk(MiddleB *this)

{
 MiddleB_dtor_full(this + *(long *)(*(long *)this + -0x20));
 return;
}



/* Function: ~MiddleB @ 00104360 */

/* virtual thunk to MiddleB::~MiddleB() */

void __thiscall MiddleB_dtor_thunk2(MiddleB *this)

{
 MiddleB_dtor_full(this + *(long *)(*(long *)this + -0x20));
 return;
}



/* Function: func @ 00104380 */

/* DiamondDerived::func() */

int __thiscall DiamondDerived_func(DiamondDerived *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}



/* Function: DiamondDerived_dtor_full @ 001043a0 */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived_dtor_full(DiamondDerived *this)

{
 DiamondDerived_dtor(this);
 operator_delete(this);
 return;
}



/* Function: func @ 001043d0 */

/* non-virtual thunk to DiamondDerived::func() */

void __thiscall DiamondDerived_func_thunk1(DiamondDerived *this)

{
 DiamondDerived_func(this + -0x10);
 return;
}



/* Function: ~DiamondDerived @ 001043f0 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived_dtor_thunk3(DiamondDerived *this)

{
 DiamondDerived_dtor_full(this + -0x10);
 return;
}



/* Function: ~DiamondDerived @ 00104410 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived_dtor_thunk4(DiamondDerived *this)

{
 DiamondDerived_dtor_full(this + -0x10);
 return;
}



/* Function: func @ 00104430 */

/* virtual thunk to DiamondDerived::func() */

void __thiscall DiamondDerived_func_thunk2(DiamondDerived *this)

{
 DiamondDerived_func(this + *(long *)(*(long *)this + -0x18));
 return;
}



/* Function: ~DiamondDerived @ 00104450 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived_dtor_thunk(DiamondDerived *this)

{
 DiamondDerived_dtor_full(this + *(long *)(*(long *)this + -0x20));
 return;
}



/* Function: ~DiamondDerived @ 00104470 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived_dtor_thunk2(DiamondDerived *this)

{
 DiamondDerived_dtor_full(this + *(long *)(*(long *)this + -0x20));
 return;
}



/* Function: func @ 00104490 */

/* VirtualBase_func() */

undefined8 VirtualBase_func(void)

{
 return 100;
}



/* Function: VirtualBase_dtor_simple @ 001044a0 */

/* VirtualBase::~VirtualBase() */

void __thiscall VirtualBase_dtor_simple(VirtualBase *this)

{
 return;
}



/* Function: VirtualBase_dtor_full @ 001044b0 */

/* VirtualBase::~VirtualBase() */

void __thiscall VirtualBase_dtor_full(VirtualBase *this)

{
 VirtualBase_dtor(this);
 operator_delete(this);
 return;
}



/* Function: MiddleA_dtor @ 001044e0 */

/* MiddleA::~MiddleA() */

void __thiscall MiddleA_dtor(MiddleA *this)

{
 return;
}



/* Function: MiddleB_dtor @ 001044f0 */

/* MiddleB::~MiddleB() */

void __thiscall MiddleB_dtor(MiddleB *this)

{
 return;
}



/* Function: DiamondDerived_dtor @ 00104500 */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived_dtor(DiamondDerived *this)

{
 MiddleB_dtor((MiddleB *)(this + 0x10));
 MiddleA_dtor((MiddleA *)this);
 return;
}



/* Function: __uniq_ptr_data @ 00104550 */

/* std::__uniq_ptr_data<int, std::default_delete<int>, true,
 true>::__uniq_ptr_data(std::__uniq_ptr_data<int, std::default_delete<int>, true, true>&&) */

void __thiscall
std___uniq_ptr_data_int_default_delete_int___uniq_ptr_data_move
 (__uniq_ptr_data<int,std::default_delete<int>,true,true> *this,__uniq_ptr_data *param_1)

{
 __uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
 ((__uniq_ptr_impl<int,std::default_delete<int>> *)this,(__uniq_ptr_impl *)param_1);
 return;
}



/* Function: __uniq_ptr_impl @ 00104580 */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::__uniq_ptr_impl(std::__uniq_ptr_impl<int,
 std::default_delete<int> >&&) */

void __thiscall
std___uniq_ptr_impl_int_default_delete_int___uniq_ptr_impl_move
 (__uniq_ptr_impl<int,std::default_delete<int>> *this,__uniq_ptr_impl *param_1)

{
 type *ptVar1;
 undefined8 *puVar2;
 
 ptVar1 = std_move_tuple_default_delete_int((tuple *)param_1);
 std_tuple_int_ptr_default_delete_tuple_move
 ((tuple<int*,std::default_delete<int>> *)this,(tuple *)ptVar1);
 /* try { // try from 001045b1 to 001045b5 has its CatchHandler @ 001045d0 */
 puVar2 = (undefined8 *)_M_ptr((__uniq_ptr_impl<int,std::default_delete<int>> *)param_1);
 *puVar2 = 0;
 return;
}



/* Function: move<std::tuple<int*,std::default_delete<int>>&> @ 001045e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<std::tuple<int*, std::default_delete<int> >&>::type&&
 std::move<std::tuple<int*, std::default_delete<int> >&>(std::tuple<int*, std::default_delete<int>
 >&) */

type * std_move_tuple_int_ptr_default_delete_int(tuple *param_1)

{
 return (type *)param_1;
}



/* Function: tuple @ 001045f0 */

/* std::tuple<int*, std::default_delete<int> >::tuple(std::tuple<int*, std::default_delete<int> >&&)
 */

void __thiscall
std_tuple_int_ptr_default_delete_tuple_move
 (tuple<int*,std::default_delete<int>> *this,tuple *param_1)

{
 _Tuple_impl<0ul,int*,std::default_delete<int>>::_Tuple_impl
 ((_Tuple_impl<0ul,int*,std::default_delete<int>> *)this,(_Tuple_impl *)param_1);
 return;
}



/* Function: _M_ptr @ 00104620 */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::_M_ptr() */

void __thiscall
std___uniq_ptr_impl_default_delete_int_M_ptr
 (__uniq_ptr_impl<int,std::default_delete<int>> *this)

{
 std_get_0ul_int_ptr_default_delete_int((tuple *)this);
 return;
}



/* Function: __clang_call_terminate @ 00104640 */

void __clang_call_terminate(void)

{
 __cxa_begin_catch();
 /* WARNING: Subroutine does not return */
 std::terminate();
}



/* Function: _Tuple_impl @ 00104650 */

/* std::_Tuple_impl<0ul, int*, std::default_delete<int> >::_Tuple_impl(std::_Tuple_impl<0ul, int*,
 std::default_delete<int> >&&) */

void __thiscall
std__Tuple_impl_0ul_int_ptr_default_delete_int__Tuple_impl_move
 (_Tuple_impl<0ul,int*,std::default_delete<int>> *this,_Tuple_impl *param_1)

{
 _Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl((_Tuple_impl *)this);
 *(undefined8 *)this = *(undefined8 *)param_1;
 return;
}



/* Function: _Tuple_impl @ 00104690 */

/* std::_Tuple_impl<1ul, std::default_delete<int> >::_Tuple_impl(std::_Tuple_impl<1ul,
 std::default_delete<int> >&&) */

void std_Tuple_impl_1ul_default_delete_int_Tuple_impl_move(_Tuple_impl *param_1)

{
 return;
}



/* Function: get<0ul,int*,std::default_delete<int>> @ 001046a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0ul, std::tuple<int*, std::default_delete<int> > >::type& std::get<0ul, int*,
 std::default_delete<int> >(std::tuple<int*, std::default_delete<int> >&) */

type * std_get_0ul_int_ptr_default_delete_int(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)__get_helper_0ul_default_delete_int((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: __get_helper<0ul,int*,std::default_delete<int>> @ 001046c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std::__get_helper<0ul, int*, std::default_delete<int> >(std::_Tuple_impl<0ul, int*,
 std::default_delete<int> >&) */

int ** __get_helper_0ul_default_delete_int(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)std_Tuple_impl_0ul_int_ptr_default_delete_int_M_head(param_1);
 return ppiVar1;
}



/* Function: _M_head @ 001046e0 */

/* std::_Tuple_impl<0ul, int*, std::default_delete<int> >::_M_head(std::_Tuple_impl<0ul, int*,
 std::default_delete<int> >&) */

void std_Tuple_impl_0ul_int_ptr_default_delete_int_M_head(_Tuple_impl *param_1)

{
 std_Head_base_0ul_int_ptr_false_M_head((_Head_base *)param_1);
 return;
}



/* Function: _M_head @ 00104700 */

/* std::_Head_base<0ul, int*, false>::_M_head(std::_Head_base<0ul, int*, false>&) */

_Head_base * std_Head_base_0ul_int_ptr_false_M_head(_Head_base *param_1)

{
 return param_1;
}



/* Function: RTTIBase @ 00104710 */

/* RTTIBase::RTTIBase() */

void __thiscall RTTIBase_RTTIBase(RTTIBase *this)

{
 *(undefined ***)this = &PTR__RTTIBase_00108d78;
 return;
}



/* Function: RTTIDerivedA_dtor_base @ 00104730 */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA_dtor_base(RTTIDerivedA *this)

{
 RTTIBase_dtor((RTTIBase *)this);
 return;
}



/* Function: RTTIDerivedA_dtor_full @ 00104750 */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA_dtor_full(RTTIDerivedA *this)

{
 RTTIDerivedA_dtor(this);
 operator_delete(this);
 return;
}



/* Function: getType @ 00104780 */

/* RTTIDerivedA_getType() const */

undefined8 RTTIDerivedA_getType(void)

{
 return 1;
}



/* Function: RTTIBase_dtor @ 00104790 */

/* RTTIBase::~RTTIBase() */

void __thiscall RTTIBase_dtor(RTTIBase *this)

{
 return;
}



/* Function: RTTIBase_dtor_full @ 001047a0 */

/* RTTIBase::~RTTIBase() */

void __thiscall RTTIBase_dtor_full(RTTIBase *this)

{
 RTTIBase_dtor(this);
 operator_delete(this);
 return;
}



/* Function: getType @ 001047d0 */

/* RTTIBase_getType() const */

undefined8 RTTIBase_getType(void)

{
 return 0;
}



/* Function: RTTIDerivedB_dtor_base @ 001047e0 */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB_dtor_base(RTTIDerivedB *this)

{
 RTTIBase_dtor((RTTIBase *)this);
 return;
}



/* Function: RTTIDerivedB_dtor_full @ 00104800 */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB_dtor_full(RTTIDerivedB *this)

{
 RTTIDerivedB_dtor(this);
 operator_delete(this);
 return;
}



/* Function: getType @ 00104830 */

/* RTTIDerivedB_getType() const */

undefined8 RTTIDerivedB_getType(void)

{
 return 2;
}



/* Function: __uniq_ptr_impl @ 00104840 */

/* std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_impl(int*) */

void __thiscall
std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_impl
 (__uniq_ptr_data<int,std::default_delete<int>,true,true> *this,int *param_1)

{
 __uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
 ((__uniq_ptr_impl<int,std::default_delete<int>> *)this,param_1);
 return;
}



/* Function: __uniq_ptr_impl @ 00104870 */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::__uniq_ptr_impl(int*) */

void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
 (__uniq_ptr_impl<int,std::default_delete<int>> *this,int *param_1)

{
 undefined8 *puVar1;
 
 tuple<int*,std::default_delete<int>>::tuple<true,true>
 ((tuple<int*,std::default_delete<int>> *)this);
 puVar1 = (undefined8 *)__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(this);
 *puVar1 = param_1;
 return;
}



/* Function: tuple<true,true> @ 001048b0 */

/* std::tuple<int*, std::default_delete<int> >::tuple<true, true>() */

void __thiscall
std::tuple<int*,std::default_delete<int>>::tuple<true,true>
 (tuple<int*,std::default_delete<int>> *this)

{
 /* try { // try from 001048c0 to 001048c4 has its CatchHandler @ 001048d0 */
 _Tuple_impl<0ul,int*,std::default_delete<int>>::_Tuple_impl
 ((_Tuple_impl<0ul,int*,std::default_delete<int>> *)this);
 return;
}



/* Function: _Tuple_impl @ 001048e0 */

/* std::_Tuple_impl<0ul, int*, std::default_delete<int> >::_Tuple_impl() */

void __thiscall
std::_Tuple_impl<0ul,int*,std::default_delete<int>>::_Tuple_impl
 (_Tuple_impl<0ul,int*,std::default_delete<int>> *this)

{
 _Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl();
 _Head_base<0ul,int*,false>::_Head_base((_Head_base<0ul,int*,false> *)this);
 return;
}



/* Function: _Tuple_impl @ 00104910 */

/* std::_Tuple_impl<1ul, std::default_delete<int> >::_Tuple_impl() */

void std_Tuple_impl_1ul_default_delete_int_Tuple_impl(void)

{
 std_Head_base_1ul_default_delete_int_true_Head_base();
 return;
}



/* Function: _Head_base @ 00104930 */

/* std::_Head_base<0ul, int*, false>::_Head_base() */

void __thiscall std_Head_base_0ul_int_ptr_false_Head_base(_Head_base *this)

{
 *(undefined8 *)this = 0;
 return;
}



/* Function: _Head_base @ 00104950 */

/* std::_Head_base<1ul, std::default_delete<int>, true>::_Head_base() */

void std_Head_base_1ul_default_delete_int_true_Head_base(void)

{
 return;
}



/* Function: get_deleter @ 00104960 */

/* std::unique_ptr<int, std::default_delete<int> >::get_deleter() */

undefined8 __thiscall
std::unique_ptr<int,std::default_delete<int>>::get_deleter
 (unique_ptr<int,std::default_delete<int>> *this)

{
 undefined8 uVar1;
 
 /* try { // try from 00104970 to 00104974 has its CatchHandler @ 00104988 */
 uVar1 = __uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter
 ((__uniq_ptr_impl<int,std::default_delete<int>> *)this);
 return uVar1;
}



/* Function: operator() @ 00104990 */

/* std::default_delete<int>::TEMPNAMEPLACEHOLDERVALUE(int*) const */

void __thiscall std_default_delete_int_operator(default_delete<int> *this,int *param_1)

{
 if (param_1 != (int *)0x0) {
 operator_delete(param_1);
 }
 return;
}



/* Function: move<int*&> @ 001049d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<int*&>::type&& std::move<int*&>(int*&) */

type* std_move_int_ptr_rref(int **param_1)

{
 return (type *)param_1;
}



/* Function: _M_deleter @ 001049e0 */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::_M_deleter() */

void __thiscall
std___uniq_ptr_impl_default_delete_int_M_deleter
 (__uniq_ptr_impl<int,std::default_delete<int>> *this)

{
 std_get_1ul_int_ptr_default_delete_int((tuple *)this);
 return;
}



/* Function: get<1ul,int*,std::default_delete<int>> @ 00104a00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<1ul, std::tuple<int*, std::default_delete<int> > >::type& std::get<1ul, int*,
 std::default_delete<int> >(std::tuple<int*, std::default_delete<int> >&) */

type * std_get_1ul_int_ptr_default_delete_int(tuple *param_1)

{
 default_delete *pdVar1;
 
 pdVar1 = __get_helper_1ul_default_delete_int((_Tuple_impl *)param_1);
 return (type *)pdVar1;
}



/* Function: __get_helper<1ul,std::default_delete<int>> @ 00104a20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::default_delete<int>& std::__get_helper<1ul, std::default_delete<int>>(std::_Tuple_impl<1ul,
 std::default_delete<int>>&) */

default_delete * __get_helper_1ul_default_delete_int(_Tuple_impl *param_1)

{
 default_delete *pdVar1;
 
 pdVar1 = (default_delete *)std_Tuple_impl_1ul_default_delete_int_M_head(param_1);
 return pdVar1;
}



/* Function: _M_head @ 00104a40 */

/* std::_Tuple_impl<1ul, std::default_delete<int> >::_M_head(std::_Tuple_impl<1ul,
 std::default_delete<int> >&) */

void std_Tuple_impl_1ul_default_delete_int_M_head(_Tuple_impl *param_1)

{
 std_Head_base_1ul_default_delete_int_true_M_head((_Head_base *)param_1);
 return;
}



/* Function: _M_head @ 00104a60 */

/* std::_Head_base<1ul, std::default_delete<int>, true>::_M_head(std::_Head_base<1ul,
 std::default_delete<int>, true>&) */

_Head_base * std_Head_base_1ul_default_delete_int_true_M_head(_Head_base *param_1)

{
 return param_1;
}



/* Function: get @ 00104a70 */

/* std::unique_ptr<int, std::default_delete<int> >::get() const */

undefined8 __thiscall
std_unique_ptr_int_get_const(unique_ptr<int,std::default_delete<int>> *this)

{
 undefined8 uVar1;
 
 /* try { // try from 00104a80 to 00104a84 has its CatchHandler @ 00104a98 */
 uVar1 = __uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
 ((__uniq_ptr_impl<int,std::default_delete<int>> *)this);
 return uVar1;
}



/* Function: _M_ptr @ 00104aa0 */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::_M_ptr() const */

undefined8 __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
 (__uniq_ptr_impl<int,std::default_delete<int>> *this)

{
 type *ptVar1;
 
 ptVar1 = get((tuple *)this);
 return *(undefined8 *)ptVar1;
}



/* Function: get<0ul,int*,std::default_delete<int>> @ 00104ac0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0ul, std::tuple<int*, std::default_delete<int> > >::type const& std::get<0ul,
 int*, std::default_delete<int> >(std::tuple<int*, std::default_delete<int> > const&) */

type * std_get_0ul_int_ptr_default_delete_int_const(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)__get_helper_0ul_default_delete_int_const((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: __get_helper<0ul,int*,std::default_delete<int>> @ 00104ae0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* const& std::__get_helper<0ul, int*, std::default_delete<int> >(std::_Tuple_impl<0ul, int*,
 std::default_delete<int> > const&) */

int ** __get_helper_0ul_default_delete_int_const(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)std_Tuple_impl_0ul_int_ptr_default_delete_int_M_head_const(param_1);
 return ppiVar1;
}



/* Function: _M_head @ 00104b00 */

/* std::_Tuple_impl<0ul, int*, std::default_delete<int> >::_M_head(std::_Tuple_impl<0ul, int*,
 std::default_delete<int> > const&) */

void std_Tuple_impl_0ul_int_ptr_default_delete_int_M_head_const(_Tuple_impl *param_1)

{
 std_Head_base_0ul_int_ptr_false_M_head_const((_Head_base *)param_1);
 return;
}



/* Function: _M_head @ 00104b20 */

/* std::_Head_base<0ul, int*, false>::_M_head(std::_Head_base<0ul, int*, false> const&) */

_Head_base * std_Head_base_0ul_int_ptr_false_M_head_const(_Head_base *param_1)

{
 return param_1;
}



/* Function: __uniq_ptr_impl @ 00104b30 */

/* std::__uniq_ptr_data<int, std::default_delete<int []>, true, true>::__uniq_ptr_impl(int*) */

void __thiscall
std___uniq_ptr_data_int_default_delete_int_array___uniq_ptr_impl_int_ptr
 (__uniq_ptr_data<int,std::default_delete<int[]>,true,true> *this,int *param_1)

{
 __uniq_ptr_impl<int,std::default_delete<int[]>>::__uniq_ptr_impl
 ((__uniq_ptr_impl<int,std::default_delete<int[]>> *)this,param_1);
 return;
}



/* Function: __uniq_ptr_impl @ 00104b60 */

/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::__uniq_ptr_impl(int*) */

void __thiscall
std___uniq_ptr_impl_int_default_delete_int_array___uniq_ptr_impl_int_ptr
 (__uniq_ptr_impl<int,std::default_delete<int[]>> *this,int *param_1)

{
 undefined8 *puVar1;
 
 tuple<int*,std::default_delete<int[]>>::tuple<true,true>
 ((tuple<int*,std::default_delete<int[]>> *)this);
 puVar1 = (undefined8 *)__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr(this);
 *puVar1 = param_1;
 return;
}



/* Function: tuple<true,true> @ 00104ba0 */

/* std::tuple<int*, std::default_delete<int []> >::tuple<true, true>() */

void __thiscall
std_tuple_int_ptr_default_delete_int_array_tuple
 (tuple<int*,std::default_delete<int[]>> *this)

{
 /* try { // try from 00104bb0 to 00104bb4 has its CatchHandler @ 00104bc0 */
 _Tuple_impl<0ul,int*,std::default_delete<int[]>>::_Tuple_impl
 ((_Tuple_impl<0ul,int*,std::default_delete<int[]>> *)this);
 return;
}



/* Function: _M_ptr @ 00104bd0 */

/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr() */

void __thiscall
std___uniq_ptr_impl_default_delete_int_array_M_ptr
 (__uniq_ptr_impl<int,std::default_delete<int[]>> *this)

{
 std_get_0ul_int_ptr_default_delete_int_array((tuple *)this);
 return;
}



/* Function: _Tuple_impl @ 00104bf0 */

/* std::_Tuple_impl<0ul, int*, std::default_delete<int []> >::_Tuple_impl() */

void __thiscall
std__Tuple_impl_0ul_int_ptr_default_delete_int_array__Tuple_impl_default
 (_Tuple_impl<0ul,int*,std::default_delete<int[]>> *this)

{
 _Tuple_impl<1ul,std::default_delete<int[]>>::_Tuple_impl();
 _Head_base<0ul,int*,false>::_Head_base((_Head_base<0ul,int*,false> *)this);
 return;
}



/* Function: _Tuple_impl @ 00104c20 */

/* std::_Tuple_impl<1ul, std::default_delete<int []> >::_Tuple_impl() */

void std__Tuple_impl_1ul_default_delete_int_array__Tuple_impl_default(void)

{
 std_Head_base_1ul_default_delete_int_array_true_Head_base();
 return;
}



/* Function: _Head_base @ 00104c40 */

/* std::_Head_base<1ul, std::default_delete<int []>, true>::_Head_base() */

void std_Head_base_1ul_default_delete_int_array_true_Head_base_default(void)

{
 return;
}



/* Function: get<0ul,int*,std::default_delete<int[]>> @ 00104c50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0ul, std::tuple<int*, std::default_delete<int []> > >::type& std::get<0ul,
 int*, std::default_delete<int []> >(std::tuple<int*, std::default_delete<int []> >&) */

type * std_get_0ul_int_ptr_default_delete_int_array(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)__get_helper_0ul_default_delete_int_array((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: __get_helper<0ul,int*,std::default_delete<int[]>> @ 00104c70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std::__get_helper<0ul, int*, std::default_delete<int []> >(std::_Tuple_impl<0ul, int*,
 std::default_delete<int []> >&) */

int ** __get_helper_0ul_default_delete_int_array(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)std_Tuple_impl_0ul_int_ptr_default_delete_int_array_M_head(param_1);
 return ppiVar1;
}



/* Function: _M_head @ 00104c90 */

/* std::_Tuple_impl<0ul, int*, std::default_delete<int []> >::_M_head(std::_Tuple_impl<0ul, int*,
 std::default_delete<int []> >&) */

void std_Tuple_impl_0ul_int_ptr_default_delete_int_array_M_head(_Tuple_impl *param_1)

{
 std_Head_base_0ul_int_ptr_false_M_head((_Head_base *)param_1);
 return;
}



/* Function: get_deleter @ 00104cb0 */

/* std::unique_ptr<int [], std::default_delete<int []> >::get_deleter() */

undefined8 __thiscall
std_unique_ptr_int_array_get_deleter
 (unique_ptr<int[],std::default_delete<int[]>> *this)

{
 undefined8 uVar1;
 
 /* try { // try from 00104cc0 to 00104cc4 has its CatchHandler @ 00104cd8 */
 uVar1 = __uniq_ptr_impl<int,std::default_delete<int[]>>::_M_deleter
 ((__uniq_ptr_impl<int,std::default_delete<int[]>> *)this);
 return uVar1;
}



/* Function: operator() @ 00104ce0 */

/* std::enable_if<is_convertible<int (*) [], int (*) []>::value, void>::type std::default_delete<int
 []>::TEMPNAMEPLACEHOLDERVALUE(int*) const */

void __thiscall std_default_delete_int_array_operator(default_delete<int[]> *this,int *param_1)

{
 if (param_1 != (int *)0x0) {
 operator_delete__(param_1);
 }
 return;
}



/* Function: _M_deleter @ 00104d20 */

/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::_M_deleter() */

void __thiscall
std___uniq_ptr_impl_default_delete_int_array_M_deleter
 (__uniq_ptr_impl<int,std::default_delete<int[]>> *this)

{
 std_get_1ul_int_ptr_default_delete_int_array((tuple *)this);
 return;
}



/* Function: get<1ul,int*,std::default_delete<int[]>> @ 00104d40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<1ul, std::tuple<int*, std::default_delete<int []> > >::type& std::get<1ul,
 int*, std::default_delete<int []> >(std::tuple<int*, std::default_delete<int []> >&) */

type * std_get_1ul_int_ptr_default_delete_int_array(tuple *param_1)

{
 default_delete *pdVar1;
 
 pdVar1 = __get_helper_1ul_default_delete_int_array((_Tuple_impl *)param_1);
 return (type *)pdVar1;
}



/* Function: __get_helper<1ul,std::default_delete<int[]>> @ 00104d60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::default_delete<int []>& std::__get_helper<1ul, std::default_delete<int
 []>>(std::_Tuple_impl<1ul, std::default_delete<int []>>&) */

default_delete * __get_helper_1ul_default_delete_int_array(_Tuple_impl *param_1)

{
 default_delete *pdVar1;
 
 pdVar1 = (default_delete *)std_Tuple_impl_1ul_default_delete_int_array_M_head(param_1);
 return pdVar1;
}



/* Function: _M_head @ 00104d80 */

/* std::_Tuple_impl<1ul, std::default_delete<int []> >::_M_head(std::_Tuple_impl<1ul,
 std::default_delete<int []> >&) */

void std_Tuple_impl_1ul_default_delete_int_array_M_head(_Tuple_impl *param_1)

{
 std_Head_base_1ul_default_delete_int_array_true_M_head((_Head_base *)param_1);
 return;
}



/* Function: _M_head @ 00104da0 */

/* std::_Head_base<1ul, std::default_delete<int []>, true>::_M_head(std::_Head_base<1ul,
 std::default_delete<int []>, true>&) */

_Head_base * std_Head_base_1ul_default_delete_int_array_true_M_head(_Head_base *param_1)

{
 return param_1;
}



/* Function: get @ 00104db0 */

/* std::unique_ptr<int [], std::default_delete<int []> >::get() const */

undefined8 __thiscall
std_unique_ptr_int_array_get_const
 (unique_ptr<int[],std::default_delete<int[]>> *this)

{
 undefined8 uVar1;
 
 /* try { // try from 00104dc0 to 00104dc4 has its CatchHandler @ 00104dd8 */
 uVar1 = __uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
 ((__uniq_ptr_impl<int,std::default_delete<int[]>> *)this);
 return uVar1;
}



/* Function: _M_ptr @ 00104de0 */

/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr() const */

undefined8 __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
 (__uniq_ptr_impl<int,std::default_delete<int[]>> *this)

{
 type *ptVar1;
 
 ptVar1 = get((tuple *)this);
 return *(undefined8 *)ptVar1;
}



/* Function: get<0ul,int*,std::default_delete<int[]>> @ 00104e00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0ul, std::tuple<int*, std::default_delete<int []> > >::type const&
 std::get<0ul, int*, std::default_delete<int []> >(std::tuple<int*, std::default_delete<int []> >
 const&) */

type * std_get_0ul_int_ptr_default_delete_int_array_const(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)__get_helper_0ul_default_delete_int_array_const((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: __get_helper<0ul,int*,std::default_delete<int[]>> @ 00104e20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* const& std::__get_helper<0ul, int*, std::default_delete<int []> >(std::_Tuple_impl<0ul,
 int*, std::default_delete<int []> > const&) */

int ** __get_helper_0ul_default_delete_int_array_const(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)std_Tuple_impl_0ul_int_ptr_default_delete_int_array_M_head_const(param_1);
 return ppiVar1;
}



/* Function: _M_head @ 00104e40 */

/* std::_Tuple_impl<0ul, int*, std::default_delete<int []> >::_M_head(std::_Tuple_impl<0ul, int*,
 std::default_delete<int []> > const&) */

void std_Tuple_impl_0ul_int_ptr_default_delete_int_array_M_head_const(_Tuple_impl *param_1)

{
 std_Head_base_0ul_int_ptr_false_M_head_const((_Head_base *)param_1);
 return;
}



/* Function: forward<int*&> @ 00104e60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std::forward<int*&>(std::remove_reference<int*&>::type&) */

int** std_forward_int_ptr(type *param_1)

{
 return (int **)param_1;
}



/* Function: _Head_base<int*&> @ 00104e70 */

/* std::_Head_base<0ul, int*, false>::_Head_base<int*&>(int*&) */

void __thiscall
std_Head_base_0ul_int_ptr_false_Head_base_int_ptr(_Head_base *this,int **param_1)

{
 int **ppiVar1;
 
 ppiVar1 = std_forward_int_ptr_rref((type *)param_1);
 *(int **)this = *ppiVar1;
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 214 */
