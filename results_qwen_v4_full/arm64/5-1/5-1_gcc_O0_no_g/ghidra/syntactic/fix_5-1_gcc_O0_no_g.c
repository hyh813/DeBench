#include <string.h>
#include <stdio.h>

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

/* Ghidra decompiler types */
typedef unsigned char undefined;
typedef unsigned int undefined4;
typedef unsigned long undefined8;
typedef void type;
typedef unsigned long ulong;
typedef unsigned int uint;
typedef void (*code)(void);
#define __thiscall

/* Stack protection globals */
extern unsigned long ___stack_chk_guard;
extern unsigned long __stack_chk_guard;

/* Global pointers for vtables */
extern undefined8 *PTR_virtual_func_00116b10;
extern undefined8 *PTR_virtual_func_00116ae0;
extern undefined8 *PTR_funcA_00116ab8;
extern undefined8 *PTR_funcB_00116a90;
extern undefined8 *PTR_funcA_00116a38;
extern undefined8 *PTR_funcB_00116a68;
extern undefined8 *PTR_func_00116a10;
extern undefined8 *PTR_func_00116878;
extern undefined8 *PTR_func_001168e0;
extern undefined8 *PTR_func_001168a8;
extern undefined8 *PTR__RTTIBase_00116848;
extern undefined8 *PTR__RTTIDerivedA_00116820;
extern undefined8 *PTR__RTTIDerivedB_001167f8;

/* C++ runtime and initialization globals */
extern void __cxa_finalize(void *);
extern void *__dso_handle;
extern void deregister_tm_clones(void);
extern void __stack_chk_fail(void *, int, int, long);
extern void *__cxa_allocate_exception(size_t);
extern void __cxa_throw(void *, void *, void *);
extern void __cxa_bad_typeid(void);
extern long __dynamic_cast(void *, void *, void *, long);
extern int __cxa_atexit(void (*)(void *), void *, void *);
extern void __cxa_throw_bad_array_new_length(void);
extern void *operator_new(size_t);
extern void *operator_new__(size_t);
extern void operator_delete(void *, size_t);
extern void operator_delete__(void *);
static char completed_0 = 0;

/* Global variables */
extern int instance_count;
extern void *std___ioinit;
extern char DAT_001045d8[];
extern char DAT_001045e8[];
extern char DAT_00104610[];
extern char DAT_00104630[];
extern char DAT_00104650[];
extern char DAT_00104670[];
extern char DAT_00104690[];
extern char DAT_001046b0[];
extern char DAT_001046d0[];
extern char DAT_001046f0[];
extern char DAT_00104710[];
extern char DAT_00104730[];
extern char DAT_00104750[];
extern char DAT_00104770[];

/* Forward declarations for C++ classes */
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
typedef struct _lambda_int__1_ _lambda_int__1_;
typedef struct _lambda_int___1_ _lambda_int___1_;
typedef struct _Tuple_impl _Tuple_impl;
typedef struct _Head_base _Head_base;
typedef struct tuple tuple;
typedef struct unique_ptr unique_ptr;
typedef struct __uniq_ptr_impl __uniq_ptr_impl;
typedef struct __uniq_ptr_data __uniq_ptr_data;
typedef struct default_delete default_delete;
typedef struct type_info type_info;
typedef struct Init Init;

/* Struct definitions */
struct SimpleClass {
 int value;
 char name[32];
 int padding;
};

struct LifecycleClass {
 void *data;
 ulong size;
};

struct Base {
 undefined8 **vtable;
};

struct Derived {
 undefined8 **vtable;
 int data;
};

struct BaseA {
 undefined8 **vtable;
};

struct BaseB {
 undefined8 **vtable;
};

struct MultiDerived {
 undefined8 **vtable;
 BaseA baseA;
 BaseB baseB;
};

struct VirtualBase {
 undefined8 **vtable;
};

struct MiddleA {
 undefined8 **vtable;
 VirtualBase *virtual_base;
 int data;
};

struct MiddleB {
 undefined8 **vtable;
 VirtualBase *virtual_base;
 int data;
};

struct DiamondDerived {
 undefined8 **vtable;
 MiddleA middleA;
 MiddleB middleB;
 VirtualBase virtualBase;
};

struct Point {
 int x;
 int y;
};

struct RTTIBase {
 undefined8 **vtable;
};

struct RTTIDerivedA {
 undefined8 **vtable;
};

struct RTTIDerivedB {
 undefined8 **vtable;
};

struct _lambda_int__1_ {
 int multiplier;
 int *captured;
};

struct _lambda_int___1_ {
 int dummy;
};

struct _Tuple_impl {
 undefined8 data[2];
};

struct _Head_base {
 undefined8 data;
};

struct tuple {
 undefined8 data[2];
};

struct unique_ptr {
 undefined8 data[2];
};

struct __uniq_ptr_impl {
 undefined8 data[2];
};

struct __uniq_ptr_data {
 undefined8 data[2];
};

struct default_delete {
 int dummy;
};

struct type_info {
 undefined8 **vtable;
 char *name;
};

struct Init {
 int dummy;
};

struct Container_int {
 int data[10];
 int size;
};

struct Container_double {
 double data[10];
 int size;
};

/* Template function declarations */
int template_max(int, int);
double template_max_double(double, double);
void template_swap(int*, int*);

/* Helper function declarations */
type * move(type *);
void __uniq_ptr_impl_test_cpp_smart_ptr_lambda_2(__uniq_ptr_impl *,int *,_lambda_int___1_ *);
void _Tuple_impl_1ul_default_delete___Tuple_impl(_Tuple_impl *);
type * move_tuple(tuple *);
void default_delete_array_operator()(default_delete *,int *);
void _M_ptr_test_cpp_smart_ptr_lambda(__uniq_ptr_impl *);
void get_deleter_test_cpp_smart_ptr_lambda(unique_ptr *);
void get_test_cpp_smart_ptr_lambda(unique_ptr *);
_lambda_int___1_ * forward(type *);
void tuple_test_cpp_smart_ptr_lambda(tuple *,int **,_lambda_int___1_ *);
type * get_0ul_int_test_cpp_smart_ptr_lambda(tuple *);
void _M_deleter_test_cpp_smart_ptr_lambda(__uniq_ptr_impl *);
void _Tuple_impl_0ul_int_test_cpp_smart_ptr_lambda(_Tuple_impl *,int **,_lambda_int___1_ *);
void std_uniq_ptr_impl___uniq_ptr_impl(__uniq_ptr_impl *,__uniq_ptr_impl *);
void get_deleter(unique_ptr *);
void default_delete_operator()(default_delete *,int *);
void get(unique_ptr *);
void std_uniq_ptr_impl__M_ptr(__uniq_ptr_impl *);
void std_uniq_ptr_impl_array___uniq_ptr_impl(__uniq_ptr_impl *,int *);
void std_uniq_ptr_impl_array__M_ptr(__uniq_ptr_impl *);
void _Head_base_0ul_int(_Head_base *,int **);
void _Head_base_0ul_int__M_head(_Head_base *);
void _Head_base_1ul_test_cpp_smart_ptr_lambda(_lambda_int___1_ *);
_Head_base * _Head_base_1ul_test_cpp_smart_ptr_lambda__M_head(_Head_base *);
void _Tuple_impl_1ul_test_cpp_smart_ptr_lambda(_lambda_int___1_ *);
void tuple_int_default_delete_tuple_true_true(tuple *);
type * get_0ul_int_default_delete(tuple *);
void std_uniq_ptr_impl__M_deleter(__uniq_ptr_impl *);
void _Tuple_impl_1ul_test_cpp_smart_ptr_lambda__M_head(_Tuple_impl *);
void _Tuple_impl_0ul_int_const_test_cpp_smart_ptr_lambda__M_head(_Tuple_impl *);
int ** __get_helper_0ul_int_const_test_cpp_smart_ptr_lambda(_Tuple_impl *);
int ** __get_helper_0ul_int_test_cpp_smart_ptr_lambda(_Tuple_impl *);
type * get_1ul_test_cpp_smart_ptr_lambda(tuple *);
void _Tuple_impl_0ul_int_test_cpp_smart_ptr_lambda__M_head(_Tuple_impl *);
_lambda_int___1_ * __get_helper_1ul_test_cpp_smart_ptr_lambda(_Tuple_impl *);
void tuple_int_default_delete_array_tuple_true_true(tuple *);
type * get_0ul_int_default_delete_array(tuple *);
void std_uniq_ptr_impl_array__M_deleter(__uniq_ptr_impl *);
int ** __get_helper_0ul_int_default_delete(_Tuple_impl *);
type * get_1ul_int_default_delete(tuple *);
void _Tuple_impl_0ul_int_default_delete_array___Tuple_impl(_Tuple_impl *this);
void _Tuple_impl_0ul_int_default_delete___M_head(_Tuple_impl *);
void _Head_base_0ul_int_false__Head_base(_Head_base *this, int **param_1);
_Head_base * _Head_base_0ul_int_false__M_head(_Head_base *);
void _Tuple_impl_1ul_default_delete___Tuple_impl_ctor(void);
void _Head_base_1ul_default_delete_true__Head_base(_Head_base *this);
void _Tuple_impl_1ul_default_delete___M_head(_Tuple_impl *);
_Head_base * _Head_base_1ul_default_delete_true__M_head(_Head_base *);
void _Tuple_impl_0ul_int_default_delete___M_head_const(_Tuple_impl *);
_Head_base * _Head_base_0ul_int_false__M_head_const(_Head_base *);
void _Tuple_impl_1ul_default_delete_array___Tuple_impl_ctor(void);
void _Head_base_1ul_default_delete_array_true__Head_base(_Head_base *this);
void _Tuple_impl_1ul_default_delete_array___M_head(_Tuple_impl *);
_Head_base * _Head_base_1ul_default_delete_array_true__M_head(_Head_base *);
void _Tuple_impl_0ul_int_default_delete_array___M_head(_Tuple_impl *);
void _Tuple_impl_0ul_int_default_delete_array___M_head_const(_Tuple_impl *);
int ** __get_helper_0ul_int_default_delete_array(_Tuple_impl *);
type * get_1ul_int_default_delete_array(tuple *);
default_delete * __get_helper_1ul_default_delete(_Tuple_impl *);
default_delete * __get_helper_1ul_default_delete_array(_Tuple_impl *);
int ** __get_helper_0ul_int_default_delete_const(_Tuple_impl *);
int ** __get_helper_0ul_int_default_delete_array_const(_Tuple_impl *);
void _Head_base_0ul_int_false__Head_base_int_ptr(_Head_base *,int **);

/* Point class function declarations */
void Point_Point(Point *this,int param_1,int param_2);
undefined8 Point_operator_add(Point *this,Point *param_1);
undefined8 Point_operator_eq(Point *this,Point *param_1);
Point * Point_operator_inc(Point *this);

/* Template class declarations */
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;

/* Container_int function declarations */
void Container_int_Container(Container_int *this);
void Container_int_push(Container_int *this,int param_1);
undefined4 Container_int_get(Container_int *this,int param_1);
undefined4 Container_int_getSize(Container_int *this);

/* Container_double function declarations */
void Container_double_Container(Container_double *this);
void Container_double_push(Container_double *this,double param_1);
double Container_double_get(Container_double *this,int param_1);
undefined4 Container_double_getSize(Container_double *this);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-1/5-1_gcc_O0_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101840 @ 00101840 */

void FUN_00101840(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_00101abc @ 00101abc */

void FUN_00101abc(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00101b14 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 SimpleClass aSStack_30 [40];
 long local_8;
 
 local_8 = ___stack_chk_guard;
 SimpleClass::SimpleClass(aSStack_30,5,"Test");
 SimpleClass::setValue(aSStack_30,10);
 iVar1 = SimpleClass::getValue(aSStack_30);
 iVar2 = SimpleClass::compute(aSStack_30,3);
 iVar3 = SimpleClass::getClassID();
 iVar3 = iVar1 + iVar2 + iVar3;
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,iVar3,0,local_8 - ___stack_chk_guard);
 }
 return iVar3;
}



/* Function: test_cpp_constructor @ 00101bbc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 LifecycleClass aLStack_18 [16];
 long local_8;
 
 local_8 = ___stack_chk_guard;
 LifecycleClass::LifecycleClass(aLStack_18,5);
 iVar1 = LifecycleClass::getData(aLStack_18,2);
 iVar2 = LifecycleClass::getInstanceCount();
 LifecycleClass::~LifecycleClass(aLStack_18);
 iVar3 = LifecycleClass::getInstanceCount();
 iVar1 = iVar1 + iVar2 + iVar3 * 1000;
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,iVar1,0,local_8 - ___stack_chk_guard);
 }
 return iVar1;
}



/* Function: call_virtual_func @ 00101c70 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 (*(code *)**(undefined8 **)param_1)(param_1,param_2);
 return;
}

/* Forward declarations for Base and Derived classes */
void Derived_Derived(Derived *this,int param_1);
int Base_virtual_func(Base *this,int param_1);
int Derived_virtual_func(Derived *this,int param_1);
void Derived_destructor(Derived *this);
void Base_destructor(Base *this);

/* Forward declarations for MultiDerived class */
void MultiDerived_MultiDerived(MultiDerived *this);
void MultiDerived_destructor(MultiDerived *this);

/* Forward declarations for DiamondDerived class */
void DiamondDerived_DiamondDerived(DiamondDerived *this);
void DiamondDerived_destructor(DiamondDerived *this);

/* Function: test_cpp_virtual_func @ 00101ca0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

int test_cpp_virtual_func(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 undefined **local_30;
 Base *local_28;
 Base *local_20;
 Derived aDStack_18 [16];
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_30 = &PTR_virtual_func_00116b10;
 Derived_Derived(aDStack_18,3);
 iVar1 = Base_virtual_func((Base *)&local_30,5);
 iVar2 = Derived_virtual_func(aDStack_18,5);
 local_28 = (Base *)&local_30;
 local_20 = (Base *)aDStack_18;
 /* try { // try from 00101d10 to 00101d23 has its CatchHandler @ 00101d78 */
 iVar3 = call_virtual_func(local_28,5);
 iVar4 = call_virtual_func(local_20,5);
 iVar4 = iVar1 + iVar2 + iVar3 + iVar4;
 Derived_destructor(aDStack_18);
 Base_destructor((Base *)&local_30);
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,iVar4,0,local_8 - ___stack_chk_guard);
 }
 return iVar4;
}



/* Function: test_cpp_multiple_inheritance @ 00101da8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

int test_cpp_multiple_inheritance(void)

{
 int iVar1;
 int iVar2;
 undefined8 *local_28;
 undefined4 local_20;
 undefined8 *local_18;
 undefined4 local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 MultiDerived_MultiDerived((MultiDerived *)&local_28);
 local_20 = 100;
 local_10 = 200;
 /* try { // try from 00101e04 to 00101e1f has its CatchHandler @ 00101e7c */
 iVar1 = (*(code *)*local_28)(&local_28);
 iVar2 = (*(code *)*local_18)(&local_18);
 iVar1 = iVar1 + iVar2 + (uint)(&local_28 != &local_18);
 MultiDerived_destructor((MultiDerived *)&local_28);
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,iVar1,0,local_8 - ___stack_chk_guard);
 }
 return iVar1;
}



/* Function: test_cpp_diamond_inheritance @ 00101ea4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
 int iVar1;
 int iVar2;
 DiamondDerived aDStack_38 [32];
 undefined8 *local_18;
 undefined4 local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 DiamondDerived_DiamondDerived(aDStack_38);
 local_10 = 0x32;
 /* try { // try from 00101ef0 to 00101f13 has its CatchHandler @ 00101f50 */
 iVar1 = (*(code *)*local_18)(&local_18);
 local_10 = 100;
 iVar2 = (*(code *)*local_18)(&local_18);
 DiamondDerived_destructor(aDStack_38);
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,iVar1 + iVar2,0,local_8 - ___stack_chk_guard);
 }
 return iVar1 + iVar2;
}



/* Function: test_cpp_operator_overload @ 00101f78 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

int test_cpp_operator_overload(void)

{
 char cVar1;
 int iVar2;
 Point aPStack_20 [8];
 Point aPStack_18 [8];
 undefined8 local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 Point_Point(aPStack_20,1,2);
 Point_Point(aPStack_18,3,4);
 local_10 = Point_operator_add(aPStack_20,aPStack_18);
 cVar1 = Point_operator_eq(aPStack_20,aPStack_18);
 Point_operator_inc((Point *)&local_10);
 if (cVar1 == '\0') {
 iVar2 = 10;
 }
 else {
 iVar2 = 0;
 }
 iVar2 = iVar2 + (int)local_10 + local_10._4_4_;
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,iVar2,0,local_8 - ___stack_chk_guard);
 }
 return iVar2;
}



/* Function: test_cpp_template_func @ 00102034 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

int test_cpp_template_func(void)

{
 int iVar1;
 int local_1c;
 int local_18;
 int local_14;
 double local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_14 = template_max(3,7);
 local_10 = template_max_double(2.5,1.5);
 local_1c = 10;
 local_18 = 0x14;
 template_swap(&local_1c,&local_18);
 iVar1 = (int)local_10 + local_14 + local_1c + local_18;
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,iVar1,0,local_8 - ___stack_chk_guard);
 }
 return iVar1;
}



/* Function: test_cpp_template_class @ 001020dc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

int test_cpp_template_class(void)

{
 int iVar1;
 int iVar2;
 double dVar3;
 Container_int aCStack_90 [48];
 Container_double aCStack_60 [88];
 long local_8;
 
 local_8 = ___stack_chk_guard;
 Container_int_Container(aCStack_90);
 Container_int_push(aCStack_90,10);
 Container_int_push(aCStack_90,0x14);
 Container_int_push(aCStack_90,0x1e);
 iVar1 = Container_int_get(aCStack_90,0);
 iVar2 = Container_int_getSize(aCStack_90);
 Container_double_Container(aCStack_60);
 Container_double_push(aCStack_60,3.14);
 dVar3 = Container_double_get(aCStack_60,0);
 iVar1 = iVar1 + iVar2 + (int)dVar3;
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,iVar1,0,local_8 - ___stack_chk_guard);
 }
 return iVar1;
}



/* Function: operator() @ 001021b0 */

/* test_cpp_lambda()::{lambda(int)#1}::TEMPNAMEPLACEHOLDERVALUE(int) const */

int _lambda_int__1__operator()(_lambda_int__1_ *this,int param_1)

{
 **(int **)(this + 8) = **(int **)(this + 8) + 5;
 return *(int *)this * param_1 + **(int **)(this + 8);
}



/* Function: test_cpp_lambda @ 00102200 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

int test_cpp_lambda(void)

{
 undefined4 local_28;
 undefined4 local_24;
 int local_20;
 undefined4 local_1c;
 undefined4 local_18 [2];
 undefined4 *local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_24 = 10;
 local_28 = 0x14;
 local_18[0] = 10;
 local_10 = &local_28;
 local_20 = _lambda_int__1__operator()((_lambda_int__1_ *)local_18,3);
 local_1c = 0x1e;
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,local_20 + 0x1e,0,local_8 - ___stack_chk_guard);
 }
 return local_20 + 0x1e;
}



/* Function: test_cpp_exception @ 00102290 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 extern void *int_typeinfo;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 001022bc to 001022bf has its CatchHandler @ 001022c8 */
 __cxa_throw(puVar1,&int_typeinfo,0);
}



/* Function: operator() @ 001023b4 */

/* test_cpp_smart_ptr()::{lambda(int*)#1}::TEMPNAMEPLACEHOLDERVALUE(int*) const */

void _lambda_int___1__operator()(_lambda_int___1_ *this,int *param_1)

{
 *param_1 = -1;
 if (param_1 != (int *)0x0) {
 operator_delete(param_1,4);
 }
 return;
}



/* Function: test_cpp_smart_ptr @ 001023f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

int test_cpp_smart_ptr(void)

{
 int iVar1;
 int *piVar2;
 undefined4 *puVar3;
 type *ptVar4;
 _lambda_int___1_ a_Stack_38 [4];
 int local_34;
 int local_30;
 int local_2c;
 unique_ptr auStack_28 [8];
 unique_ptr auStack_20 [8];
 unique_ptr auStack_18 [8];
 unique_ptr auStack_10 [8];
 long local_8;
 
 local_8 = ___stack_chk_guard;
 piVar2 = operator_new(4);
 *piVar2 = 100;
 unique_ptr<int,std::default_delete<int>>::unique_ptr<std::default_delete<int>,void>
 (auStack_28,piVar2);
 puVar3 = (undefined4 *)unique_ptr<int,default_delete<int>>::operator*(auStack_28);
 *puVar3 = 200;
 ptVar4 = move((unique_ptr *)auStack_28);
 unique_ptr<int,default_delete<int>>::unique_ptr(auStack_20,(unique_ptr *)ptVar4);
 piVar2 = (int *)unique_ptr<int,default_delete<int>>::operator*(auStack_20);
 local_34 = *piVar2;
 /* try { // try from 0010246c to 0010246f has its CatchHandler @ 00102570 */
 piVar2 = operator_new__(0x14);
 *piVar2 = 1;
 piVar2[1] = 2;
 piVar2[2] = 3;
 piVar2[3] = 4;
 piVar2[4] = 5;
 unique_ptr<int[],default_delete<int[]>>::
 unique_ptr<int*,default_delete<int[]>,void,bool>(auStack_18,piVar2);
 piVar2 = (int *)unique_ptr<int[],default_delete<int[]>>::operator[](auStack_18,2);
 local_30 = *piVar2;
 /* try { // try from 001024d4 to 001024d7 has its CatchHandler @ 00102560 */
 piVar2 = operator_new(4);
 *piVar2 = 500;
 unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::
 unique_ptr<test_cpp_smart_ptr()::_lambda(int*)_1_,void>(auStack_10,piVar2,a_Stack_38);
 piVar2 = (int *)unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::operator*(auStack_10)
 ;
 local_2c = *piVar2;
 iVar1 = local_34 + local_30 + local_2c;
 unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::~unique_ptr(auStack_10);
 unique_ptr<int[],default_delete<int[]>>::~unique_ptr(auStack_18);
 unique_ptr<int,default_delete<int>>::~unique_ptr(auStack_20);
 unique_ptr<int,default_delete<int>>::~unique_ptr(auStack_28);
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,iVar1,0,local_8 - ___stack_chk_guard);
 }
 return iVar1;
}



/* Function: test_cpp_rtti @ 001025a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 char cVar1;
 int iVar2;
 RTTIDerivedA *this;
 RTTIDerivedB *this_00;
 long lVar3;
 char *__s;
 size_t sVar4;
 int local_24;
 
 this = operator_new(8);
 *(undefined8 *)this = 0;
 RTTIDerivedA::RTTIDerivedA(this);
 this_00 = operator_new(8);
 *(undefined8 *)this_00 = 0;
 RTTIDerivedB::RTTIDerivedB(this_00);
 local_24 = 0;
 if (this == (RTTIDerivedA *)0x0) {
 __cxa_bad_typeid();
LAB_00102620:
 local_24 = 10;
 }
 else {
 cVar1 = type_info::operator==
 (*(type_info **)(*(long *)this + -8),(type_info *)&RTTIDerivedA::typeinfo);
 if (cVar1 != '\0') goto LAB_00102620;
 }
 if (this_00 == (RTTIDerivedB *)0x0) {
 __cxa_bad_typeid();
LAB_00102664:
 local_24 = local_24 + 0x14;
 }
 else {
 cVar1 = type_info::operator==
 (*(type_info **)(*(long *)this_00 + -8),(type_info *)&RTTIDerivedB::typeinfo);
 if (cVar1 != '\0') goto LAB_00102664;
 }
 if (this == (RTTIDerivedA *)0x0) {
 lVar3 = 0;
 }
 else {
 lVar3 = __dynamic_cast(this,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 }
 if (lVar3 != 0) {
 iVar2 = RTTIDerivedA::derivedA_data();
 local_24 = local_24 + iVar2;
 }
 if (this_00 == (RTTIDerivedB *)0x0) {
 lVar3 = 0;
 }
 else {
 lVar3 = __dynamic_cast(this_00,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 }
 if (lVar3 != 0) {
 iVar2 = RTTIDerivedB::derivedB_data();
 local_24 = local_24 + iVar2;
 }
 if (this == (RTTIDerivedA *)0x0) {
 this = (RTTIDerivedA *)__cxa_bad_typeid();
 }
 else {
 __s = (char *)type_info::name(*(type_info **)(*(long *)this + -8));
 sVar4 = strlen(__s);
 local_24 = (int)sVar4 + local_24;
 if (this == (RTTIDerivedA *)0x0) goto LAB_00102768;
 }
 (**(code **)(*(long *)this + 8))();
LAB_00102768:
 if (this_00 != (RTTIDerivedB *)0x0) {
 (**(code **)(*(long *)this_00 + 8))();
 }
 return local_24;
}



/* Function: test_cpp_oo_features @ 00102794 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

int test_cpp_oo_features(void)

{
 int iVar1;
 ulong uVar2;
 
 puts(&DAT_001045e8);
 uVar2 = test_cpp_member_func();
 printf(&DAT_00104610,uVar2 & 0xffffffff);
 uVar2 = test_cpp_constructor();
 printf(&DAT_00104630,uVar2 & 0xffffffff);
 uVar2 = test_cpp_virtual_func();
 printf(&DAT_00104650,uVar2 & 0xffffffff);
 uVar2 = test_cpp_multiple_inheritance();
 printf(&DAT_00104670,uVar2 & 0xffffffff);
 uVar2 = test_cpp_diamond_inheritance();
 printf(&DAT_00104690,uVar2 & 0xffffffff);
 uVar2 = test_cpp_operator_overload();
 printf(&DAT_001046b0,uVar2 & 0xffffffff);
 uVar2 = test_cpp_template_func();
 printf(&DAT_001046d0,uVar2 & 0xffffffff);
 uVar2 = test_cpp_template_class();
 printf(&DAT_001046f0,uVar2 & 0xffffffff);
 uVar2 = test_cpp_lambda();
 printf(&DAT_00104710,uVar2 & 0xffffffff);
 uVar2 = test_cpp_exception();
 printf(&DAT_00104730,uVar2 & 0xffffffff);
 uVar2 = test_cpp_smart_ptr();
 printf(&DAT_00104750,uVar2 & 0xffffffff);
 uVar2 = test_cpp_rtti();
 iVar1 = printf(&DAT_00104770,uVar2 & 0xffffffff);
 return iVar1;
}



/* Function: main @ 001028a4 */

undefined8 main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: __uniq_ptr_impl_test_cpp_smart_ptr_lambda @ 001028bc */

void __uniq_ptr_impl_test_cpp_smart_ptr_lambda(__uniq_ptr_data *this,int *param_1,_lambda_int___1_ *param_2)

{
 __uniq_ptr_impl_test_cpp_smart_ptr_lambda_2
 ((__uniq_ptr_impl *)this,param_1,param_2);
 return;
}



/* Function: unique_ptr_test_cpp_smart_ptr_lambda @ 001028ec */

void unique_ptr_test_cpp_smart_ptr_lambda(unique_ptr *this,int *param_1,_lambda_int___1_ *param_2)

{
 __uniq_ptr_impl_test_cpp_smart_ptr_lambda
 ((__uniq_ptr_data *)this,param_1,
 param_2);
 return;
}



/* Function: _unique_ptr_test_cpp_smart_ptr_lambda @ 0010291c */

void _unique_ptr_test_cpp_smart_ptr_lambda(unique_ptr *this)

{
 int **ppiVar1;
 _lambda_int___1_ *this_00;
 type *ptVar2;
 
 ppiVar1 = (int **)_M_ptr_test_cpp_smart_ptr_lambda
 ((__uniq_ptr_impl *)this);
 if (*ppiVar1 != (int *)0x0) {
 this_00 = (_lambda_int___1_ *)get_deleter_test_cpp_smart_ptr_lambda(this);
 ptVar2 = move(ppiVar1);
 _lambda_int___1__operator()(this_00,*(int **)ptVar2);
 }
 *ppiVar1 = (int *)0x0;
 return;
}



/* Function: operator_star_test_cpp_smart_ptr_lambda @ 00102984 */

void operator_star_test_cpp_smart_ptr_lambda(unique_ptr *this)

{
 get_test_cpp_smart_ptr_lambda(this);
 return;
}



/* Function: __uniq_ptr_impl_test_cpp_smart_ptr_lambda_2 @ 001029a8 */

void __uniq_ptr_impl_test_cpp_smart_ptr_lambda_2(__uniq_ptr_impl *this,int *param_1,_lambda_int___1_ *param_2)

{
 _lambda_int___1_ *p_Var1;
 int *local_10;
 __uniq_ptr_impl *local_8;
 
 local_10 = param_1;
 local_8 = this;
 p_Var1 = forward((type *)param_2);
 tuple_test_cpp_smart_ptr_lambda
 ((tuple *)this,&local_10,p_Var1);
 return;
}



/* Function: _M_ptr_test_cpp_smart_ptr_lambda @ 001029f4 */

void _M_ptr_test_cpp_smart_ptr_lambda(__uniq_ptr_impl *this)

{
 get_0ul_int_test_cpp_smart_ptr_lambda((tuple *)this);
 return;
}



/* Function: get_deleter_test_cpp_smart_ptr_lambda @ 00102a10 */

void get_deleter_test_cpp_smart_ptr_lambda(unique_ptr *this)

{
 _M_deleter_test_cpp_smart_ptr_lambda
 ((__uniq_ptr_impl *)this);
 return;
}



/* Function: get_test_cpp_smart_ptr_lambda @ 00102a2c */

void get_test_cpp_smart_ptr_lambda(unique_ptr *this)

{
 _M_ptr_test_cpp_smart_ptr_lambda
 ((__uniq_ptr_impl *)this);
 return;
}



/* Function: forward_test_cpp_smart_ptr_lambda @ 00102a48 */

_lambda_int___1_ * forward(type *param_1)

{
 return (_lambda_int___1_ *)param_1;
}



/* Function: tuple_test_cpp_smart_ptr_lambda @ 00102a5c */

void tuple_test_cpp_smart_ptr_lambda(tuple *this,int **param_1,_lambda_int___1_ *param_2)

{
 int **ppiVar1;
 _lambda_int___1_ *p_Var2;
 
 ppiVar1 = forward((type *)param_1);
 p_Var2 = forward((type *)param_2);
 _Tuple_impl_0ul_int_test_cpp_smart_ptr_lambda
 ((_Tuple_impl *)this,ppiVar1,p_Var2);
 return;
}



/* Function: get_0ul_int_test_cpp_smart_ptr_lambda @ 00102aac */

type * get_0ul_int_test_cpp_smart_ptr_lambda(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)__get_helper_0ul_int_test_cpp_smart_ptr_lambda
 ((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: _M_deleter_test_cpp_smart_ptr_lambda @ 00102ac8 */

void _M_deleter_test_cpp_smart_ptr_lambda(__uniq_ptr_impl *this)

{
 get_1ul_test_cpp_smart_ptr_lambda((tuple *)this);
 return;
}



/* Function: _M_ptr_const_test_cpp_smart_ptr_lambda @ 00102ae4 */

undefined8 _M_ptr_const_test_cpp_smart_ptr_lambda(__uniq_ptr_impl *this)

{
 type *ptVar1;
 
 ptVar1 = get_0ul_int_test_cpp_smart_ptr_lambda((tuple *)this);
 return *(undefined8 *)ptVar1;
}



/* Function: _Tuple_impl_0ul_int_test_cpp_smart_ptr_lambda @ 00102b04 */

void _Tuple_impl_0ul_int_test_cpp_smart_ptr_lambda(_Tuple_impl *this,int **param_1,_lambda_int___1_ *param_2)

{
 int **ppiVar1;
 
 forward((type *)param_2);
 _Tuple_impl_1ul_test_cpp_smart_ptr_lambda((_lambda_int___1_ *)this);
 ppiVar1 = forward((type *)param_1);
 _Head_base_0ul_int(this,ppiVar1);
 return;
}



/* Function: __get_helper_0ul_int_test_cpp_smart_ptr_lambda @ 00102b58 */

int ** __get_helper_0ul_int_test_cpp_smart_ptr_lambda(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)_Tuple_impl_0ul_int_test_cpp_smart_ptr_lambda__M_head(param_1);
 return ppiVar1;
}



/* Function: get_1ul_test_cpp_smart_ptr_lambda @ 00102b74 */

type * get_1ul_test_cpp_smart_ptr_lambda(tuple *param_1)

{
 _lambda_int___1_ *p_Var1;
 
 p_Var1 = __get_helper_1ul_test_cpp_smart_ptr_lambda((_Tuple_impl *)param_1);
 return (type *)p_Var1;
}



/* Function: get_0ul_int_const_test_cpp_smart_ptr_lambda @ 00102b90 */

type * get_0ul_int_const_test_cpp_smart_ptr_lambda(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)__get_helper_0ul_int_const_test_cpp_smart_ptr_lambda
 ((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: _Tuple_impl_1ul_test_cpp_smart_ptr_lambda @ 00102bac */

void _Tuple_impl_1ul_test_cpp_smart_ptr_lambda
 (_lambda_int___1_ *param_1)

{
 _Head_base_1ul_test_cpp_smart_ptr_lambda(param_1);
 return;
}



/* Function: _Tuple_impl_0ul_int_test_cpp_smart_ptr_lambda__M_head @ 00102bd4 */

void _Tuple_impl_0ul_int_test_cpp_smart_ptr_lambda__M_head
 (_Tuple_impl *param_1)

{
 _Head_base_0ul_int__M_head((_Head_base *)param_1);
 return;
}



/* Function: __get_helper_1ul_test_cpp_smart_ptr_lambda @ 00102bf0 */

_lambda_int___1_ *
__get_helper_1ul_test_cpp_smart_ptr_lambda(_Tuple_impl *param_1)

{
 _lambda_int___1_ *p_Var1;
 
 p_Var1 = (_lambda_int___1_ *)
 _Tuple_impl_1ul_test_cpp_smart_ptr_lambda__M_head(param_1);
 return p_Var1;
}



/* Function: __get_helper_0ul_int_const_test_cpp_smart_ptr_lambda @ 00102c0c */

int ** __get_helper_0ul_int_const_test_cpp_smart_ptr_lambda(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)_Tuple_impl_0ul_int_test_cpp_smart_ptr_lambda__M_head(param_1);
 return ppiVar1;
}



/* Function: _Head_base_1ul_test_cpp_smart_ptr_lambda @ 00102c28 */

void _Head_base_1ul_test_cpp_smart_ptr_lambda
 (_lambda_int___1_ *param_1)

{
 return;
}



/* Function: _Tuple_impl_1ul_test_cpp_smart_ptr_lambda__M_head @ 00102c40 */

void _Tuple_impl_1ul_test_cpp_smart_ptr_lambda__M_head(_Tuple_impl *param_1)

{
 _Head_base_1ul_test_cpp_smart_ptr_lambda__M_head((_Head_base *)param_1);
 return;
}



/* Function: _Tuple_impl_0ul_int_const_test_cpp_smart_ptr_lambda__M_head @ 00102c5c */

void _Tuple_impl_0ul_int_const_test_cpp_smart_ptr_lambda__M_head
 (_Tuple_impl *param_1)

{
 _Head_base_0ul_int__M_head((_Head_base *)param_1);
 return;
}



/* Function: _Head_base_1ul_test_cpp_smart_ptr_lambda__M_head @ 00102c78 */

_Head_base *
_Head_base_1ul_test_cpp_smart_ptr_lambda__M_head(_Head_base *param_1)

{
 return param_1;
}



/* Function: __static_initialization_and_destruction_0 @ 00102c8c */

/* __static_initialization_and_destruction_0(int, int) */

void __static_initialization_and_destruction_0(int param_1,int param_2)

{
 if ((param_1 == 1) && (param_2 == 0xffff)) {
 Init::Init((Init *)&__ioinit);
 __cxa_atexit(Init::~Init,&__ioinit,&__dso_handle);
 }
 return;
}



/* Function: _GLOBAL__sub_I_test_cpp_member_func @ 00102cec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

void _GLOBAL__sub_I_test_cpp_member_func(void)

{
 __static_initialization_and_destruction_0(1,0xffff);
 return;
}



/* Function: name @ 00102d08 */

/* std::type_info::name() const */

long __thiscall std_type_info_name(type_info *this)

{
 long lVar1;
 
 if (**(char **)(this + 8) == '*') {
 lVar1 = *(long *)(this + 8) + 1;
 }
 else {
 lVar1 = *(long *)(this + 8);
 }
 return lVar1;
}



/* Function: operator== @ 00102d44 */

/* std::type_info::TEMPNAMEPLACEHOLDERVALUE(std::type_info const&) const */

undefined8 __thiscall std_type_info_operator_eq(type_info *this,type_info *param_1)

{
 int iVar1;
 undefined8 uVar2;
 
 if ((*(long *)(this + 8) == *(long *)(param_1 + 8)) ||
 ((**(char **)(this + 8) != '*' &&
 (iVar1 = strcmp(*(char **)(this + 8),*(char **)(param_1 + 8)), iVar1 == 0)))) {
 uVar2 = 1;
 }
 else {
 uVar2 = 0;
 }
 return uVar2;
}



/* Function: SimpleClass @ 00102db8 */

/* SimpleClass::SimpleClass(int, char const*) */

void __thiscall SimpleClass_SimpleClass(SimpleClass *this,int param_1,char *param_2)

{
 *(int *)this = param_1;
 strncpy((char *)(this + 4),param_2,0x1f);
 *(int *)((char *)this + 0x8c) = 0;
 return;
}



/* Function: getValue @ 00102e00 */

/* SimpleClass::getValue() const */

undefined4 __thiscall SimpleClass_getValue(SimpleClass *this)

{
 return *(undefined4 *)this;
}



/* Function: setValue @ 00102e18 */

/* SimpleClass::setValue(int) */

void __thiscall SimpleClass_setValue(SimpleClass *this,int param_1)

{
 *(int *)this = param_1;
 return;
}



/* Function: compute @ 00102e3c */

/* SimpleClass::compute(int) const */

int __thiscall SimpleClass_compute(SimpleClass *this,int param_1)

{
 int iVar1;
 size_t sVar2;
 
 iVar1 = *(int *)this;
 sVar2 = strlen((char *)this + 4);
 return iVar1 * param_1 + (int)sVar2;
}



/* Function: getClassID @ 00102e80 */

/* SimpleClass::getClassID() */

undefined8 SimpleClass_getClassID(void)

{
 return 0x1234;
}



/* Function: LifecycleClass @ 00102e88 */

/* LifecycleClass::LifecycleClass(unsigned long) */

void __thiscall LifecycleClass_LifecycleClass(LifecycleClass *this,ulong param_1)

{
 void *pvVar1;
 ulong local_8;
 
 *(ulong *)(this + 8) = param_1;
 if (param_1 < 0x1fffffffffffffff) {
 pvVar1 = operator_new__(param_1 << 2);
 *(void **)this = pvVar1;
 for (local_8 = 0; local_8 < param_1; local_8 = local_8 + 1) {
LAB_00102ed4:
 *(int *)(*(long *)this + local_8 * 4) = (int)local_8 * 10;
 }
 instance_count = instance_count + 1;
 return;
 }
 __cxa_throw_bad_array_new_length();
 goto LAB_00102ed4;
}



/* Function: ~LifecycleClass @ 00102f50 */

/* LifecycleClass::~LifecycleClass() */

void __thiscall LifecycleClass_destructor(LifecycleClass *this)

{
 if (*(long *)this != 0) {
 operator_delete__(*(void **)this);
 }
 instance_count = instance_count + -1;
 return;
}



/* Function: getData @ 00102fa0 */

/* LifecycleClass::getData(unsigned long) const */

undefined4 __thiscall LifecycleClass_getData(LifecycleClass *this,ulong param_1)

{
 undefined4 uVar1;
 
 if (param_1 < *(ulong *)(this + 8)) {
 uVar1 = *(undefined4 *)(*(long *)this + param_1 * 4);
 }
 else {
 uVar1 = 0xffffffff;
 }
 return uVar1;
}



/* Function: getInstanceCount @ 00102fe8 */

/* LifecycleClass::getInstanceCount() */

undefined4 LifecycleClass_getInstanceCount(void)

{
 return instance_count;
}



/* Function: virtual_func @ 00102ff8 */

/* Base::virtual_func(int) */

int __thiscall Base_virtual_func(Base *this,int param_1)

{
 return param_1 + 1;
}



/* Function: getName @ 00103014 */

/* Base::getName() const */

undefined * Base_getName(void)

{
 return &DAT_001045d8;
}



/* Function: ~Base @ 0010302c */

/* Base::~Base() */

void __thiscall Base_destructor(Base *this)

{
 *(undefined ***)this = &PTR_virtual_func_00116b10;
 return;
}



/* Function: ~Base @ 00103050 */

/* Base::~Base() */

void __thiscall Base_destructor_delete(Base *this)

{
 Base_destructor(this);
 operator_delete(this,8);
 return;
}



/* Function declarations for Base and Derived classes */
void Derived_Derived(Derived *this,int param_1);
int Base_virtual_func(Base *this,int param_1);
int Derived_virtual_func(Derived *this,int param_1);
void Derived_destructor(Derived *this);
void Base_destructor(Base *this);
void Base_destructor_delete(Base *this);

/* Function declarations for BaseA and BaseB classes */
void BaseA_BaseA(BaseA *this);
void BaseA_destructor(BaseA *this);
void BaseB_BaseB(BaseB *this);
void BaseB_destructor(BaseB *this);
undefined8 BaseA_funcA(void);
undefined8 BaseB_funcB(void);

/* Function declarations for MultiDerived class */
void MultiDerived_MultiDerived(MultiDerived *this);
void MultiDerived_destructor(MultiDerived *this);
void MultiDerived_destructor_delete(MultiDerived *this);
undefined8 MultiDerived_funcA(void);
undefined8 MultiDerived_funcB(void);
void MultiDerived_funcB_thunk(MultiDerived *this);
void MultiDerived_destructor_thunk(MultiDerived *this);
void MultiDerived_destructor_thunk2(MultiDerived *this);
void MultiDerived_MultiDerived(MultiDerived *this);
void MultiDerived_destructor(MultiDerived *this);

/* Function declarations for DiamondDerived class */
void DiamondDerived_DiamondDerived(DiamondDerived *this);
void DiamondDerived_destructor(DiamondDerived *this);
void DiamondDerived_destructor_delete(DiamondDerived *this);
void DiamondDerived_DiamondDerived(DiamondDerived *this);
void DiamondDerived_destructor(DiamondDerived *this);

/* Function declarations for VirtualBase and diamond inheritance classes */
void VirtualBase_VirtualBase(VirtualBase *this);
void VirtualBase_destructor(VirtualBase *this);
void VirtualBase_destructor_delete(VirtualBase *this);
void MiddleA_MiddleA(MiddleA *this, undefined8 *param_1);
void MiddleB_MiddleB(MiddleB *this, undefined8 *param_1);
void MiddleA_destructor(MiddleA *this, undefined8 *param_1);
void MiddleB_destructor(MiddleB *this, undefined8 *param_1);
void DiamondDerived_DiamondDerived(DiamondDerived *this);
void DiamondDerived_destructor(DiamondDerived *this);
void DiamondDerived_destructor_delete(DiamondDerived *this);
int DiamondDerived_func(DiamondDerived *this);
int MiddleA_func(MiddleA *this);
int MiddleB_func(MiddleB *this);
undefined8 VirtualBase_func(void);
void DiamondDerived_destructor_thunk(DiamondDerived *this);
void DiamondDerived_destructor_vthunk(DiamondDerived *this);
void DiamondDerived_destructor_thunk2(DiamondDerived *this);
void DiamondDerived_destructor_vthunk2(DiamondDerived *this);
void DiamondDerived_func_thunk(DiamondDerived *this);
void DiamondDerived_func_thunk2(DiamondDerived *this);
void MiddleA_func_thunk(MiddleA *this);
void MiddleB_func_thunk(MiddleB *this);

/* Function declarations for Point class */
void Point_Point(Point *this,int param_1,int param_2);
undefined8 Point_operator_add(Point *this,Point *param_1);
undefined8 Point_operator_eq(Point *this,Point *param_1);
Point * Point_operator_inc(Point *this);

/* Function declarations for RTTI classes */
void RTTIBase_RTTIBase(RTTIBase *this);
void RTTIBase_destructor(RTTIBase *this);
void RTTIDerivedA_RTTIDerivedA(RTTIDerivedA *this);
void RTTIDerivedA_destructor(RTTIDerivedA *this);
void RTTIDerivedB_RTTIDerivedB(RTTIDerivedB *this);
void RTTIDerivedB_destructor(RTTIDerivedB *this);
undefined8 RTTIBase_getType(void);
undefined8 RTTIDerivedA_getType(void);
undefined8 RTTIDerivedB_getType(void);
undefined8 RTTIDerivedA_derivedA_data(void);
undefined8 RTTIDerivedB_derivedB_data(void);

/* Function declarations for SimpleClass */
void SimpleClass_SimpleClass(SimpleClass *this,int param_1,char *param_2);
undefined4 SimpleClass_getValue(SimpleClass *this);
void SimpleClass_setValue(SimpleClass *this,int param_1);
int SimpleClass_compute(SimpleClass *this,int param_1);
undefined8 SimpleClass_getClassID(void);

/* Function declarations for LifecycleClass */
void LifecycleClass_LifecycleClass(LifecycleClass *this,ulong param_1);
void LifecycleClass_destructor(LifecycleClass *this);
undefined4 LifecycleClass_getData(LifecycleClass *this,ulong param_1);
undefined4 LifecycleClass_getInstanceCount(void);

/* Function: Base @ 00103078 */

/* Base::Base() */

void __thiscall Base_Base(Base *this)

{
 *(undefined ***)this = &PTR_virtual_func_00116b10;
 return;
}



/* Function: Derived @ 0010309c */

/* Derived::Derived(int) */

void __thiscall Derived_Derived(Derived *this,int param_1)

{
 Base_Base((Base *)this);
 *(undefined ***)this = &PTR_virtual_func_00116ae0;
 *(int *)(this + 8) = param_1;
 return;
}



/* Function: virtual_func @ 001030dc */

/* Derived::virtual_func(int) */

int __thiscall Derived_virtual_func(Derived *this,int param_1)

{
 return *(int *)(this + 8) * param_1;
}



/* Function: getName @ 00103100 */

/* Derived::getName() const */

char * Derived_getName(void)

{
 return "Derived";
}



/* Function: funcA @ 00103118 */

/* BaseA::funcA() */

undefined8 BaseA_funcA(void)

{
 return 10;
}



/* Function: ~BaseA @ 0010312c */

/* BaseA::~BaseA() */

void __thiscall BaseA_destructor(BaseA *this)

{
 *(undefined ***)this = &PTR_funcA_00116ab8;
 return;
}



/* Function: ~BaseA @ 00103150 */

/* BaseA::~BaseA() */

void __thiscall BaseA_destructor_delete(BaseA *this)

{
 BaseA_destructor(this);
 operator_delete(this,0x10);
 return;
}



/* Function: funcB @ 00103178 */

/* BaseB::funcB() */

undefined8 BaseB_funcB(void)

{
 return 0x14;
}



/* Function: ~BaseB @ 0010318c */

/* BaseB::~BaseB() */

void __thiscall BaseB_destructor(BaseB *this)

{
 *(undefined ***)this = &PTR_funcB_00116a90;
 return;
}



/* Function: ~BaseB @ 001031b0 */

/* BaseB::~BaseB() */

void __thiscall BaseB_destructor_delete(BaseB *this)

{
 BaseB_destructor(this);
 operator_delete(this,0x10);
 return;
}



/* Function: funcA @ 001031d8 */

/* MultiDerived::funcA() */

undefined8 MultiDerived_funcA(void)

{
 return 0x1e;
}



/* Function: funcB @ 001031ec */

/* MultiDerived::funcB() */

undefined8 MultiDerived_funcB(void)

{
 return 0x28;
}



/* Function: funcB @ 00103200 */

/* non-virtual thunk to MultiDerived::funcB() */

void __thiscall MultiDerived_funcB_thunk(MultiDerived *this)

{
 MultiDerived_funcB();
 return;
}



/* Function: BaseA @ 00103208 */

/* BaseA::BaseA() */

void __thiscall BaseA_BaseA(BaseA *this)

{
 *(undefined ***)this = &PTR_funcA_00116ab8;
 return;
}



/* Function: BaseB @ 0010322c */

/* BaseB::BaseB() */

void __thiscall BaseB_BaseB(BaseB *this)

{
 *(undefined ***)this = &PTR_funcB_00116a90;
 return;
}



/* Function: MultiDerived @ 00103250 */

/* MultiDerived::MultiDerived() */

void __thiscall MultiDerived_MultiDerived(MultiDerived *this)

{
 BaseA_BaseA((BaseA *)this);
 BaseB_BaseB((BaseB *)(this + 0x10));
 *(undefined ***)this = &PTR_funcA_00116a38;
 *(undefined ***)(this + 0x10) = &PTR_funcB_00116a68;
 return;
}



/* Function: func @ 0010329c */

/* VirtualBase::func() */

undefined8 VirtualBase_func(void)

{
 return 100;
}



/* Function: ~VirtualBase @ 001032b0 */

/* VirtualBase::~VirtualBase() */

void __thiscall VirtualBase_destructor(VirtualBase *this)

{
 *(undefined ***)this = &PTR_func_00116a10;
 return;
}



/* Function: ~VirtualBase @ 001032d4 */

/* VirtualBase::~VirtualBase() */

void __thiscall VirtualBase_destructor_delete(VirtualBase *this)

{
 VirtualBase_destructor(this);
 operator_delete(this,0x10);
 return;
}



/* Function: func @ 001032fc */

/* MiddleA::func() */

int __thiscall MiddleA_func(MiddleA *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}



/* Function: func @ 00103330 */

/* virtual thunk to MiddleA::func() */

void __thiscall MiddleA_func_thunk(MiddleA *this)

{
 MiddleA_func(this + *(long *)(*(long *)this + -0x18));
 return;
}



/* Function: func @ 00103340 */

/* MiddleB::func() */

int __thiscall MiddleB_func(MiddleB *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}



/* Function: func @ 00103374 */

/* virtual thunk to MiddleB::func() */

void __thiscall MiddleB_func_thunk(MiddleB *this)

{
 MiddleB_func(this + *(long *)(*(long *)this + -0x18));
 return;
}



/* Function: func @ 00103384 */

/* DiamondDerived::func() */

int __thiscall DiamondDerived_func(DiamondDerived *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}



/* Function: func @ 001033b8 */

/* virtual thunk to DiamondDerived::func() */

void __thiscall DiamondDerived_func_thunk(DiamondDerived *this)

{
 DiamondDerived_func(this + *(long *)(*(long *)this + -0x18));
 return;
}



/* Function: func @ 001033c8 */

/* non-virtual thunk to DiamondDerived::func() */

void __thiscall DiamondDerived_func_thunk2(DiamondDerived *this)

{
 DiamondDerived_func(this + -0x10);
 return;
}



/* Function: VirtualBase @ 001033d0 */

/* VirtualBase::VirtualBase() */

void __thiscall VirtualBase_VirtualBase(VirtualBase *this)

{
 *(undefined ***)this = &PTR_func_00116a10;
 return;
}



/* Function: MiddleA @ 001033f4 */

/* MiddleA::MiddleA() */

void MiddleA_MiddleA(MiddleA *this, undefined8 *param_1)

{
 *(undefined8 *)this = *param_1;
 *(undefined8 *)(this + *(long *)(*(long *)this + -0x18)) = param_1[1];
 return;
}



/* Function: ~MiddleA @ 00103444 */

/* MiddleA::~MiddleA() */

void MiddleA_destructor(MiddleA *this, undefined8 *param_1)

{
 *(undefined8 *)this = *param_1;
 *(undefined8 *)(this + *(long *)(*(long *)this + -0x18)) = param_1[1];
 return;
}



/* Function: MiddleB @ 00103494 */

/* MiddleB::MiddleB() */

void MiddleB_MiddleB(MiddleB *this, undefined8 *param_1)

{
 *(undefined8 *)this = *param_1;
 *(undefined8 *)(this + *(long *)(*(long *)this + -0x18)) = param_1[1];
 return;
}



/* Function: ~MiddleB @ 001034e4 */

/* MiddleB::~MiddleB() */

void MiddleB_destructor(MiddleB *this, undefined8 *param_1)

{
 *(undefined8 *)this = *param_1;
 *(undefined8 *)(this + *(long *)(*(long *)this + -0x18)) = param_1[1];
 return;
}



/* Function: DiamondDerived @ 00103534 */

/* DiamondDerived::DiamondDerived() */

void __thiscall DiamondDerived_DiamondDerived(DiamondDerived *this)

{
 VirtualBase_VirtualBase((VirtualBase *)(this + 0x20));
 MiddleA_MiddleA((MiddleA *)this);
 MiddleB_MiddleB((MiddleB *)(this + 0x10));
 *(undefined ***)this = &PTR_func_00116878;
 *(undefined ***)(this + 0x20) = &PTR_func_001168e0;
 *(undefined ***)(this + 0x10) = &PTR_func_001168a8;
 return;
}



/* Function: Point @ 001035c0 */

/* Point::Point(int, int) */

void __thiscall Point_Point(Point *this,int param_1,int param_2)

{
 *(int *)this = param_1;
 *(int *)(this + 4) = param_2;
 return;
}



/* Function: operator+ @ 001035f4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Point::TEMPNAMEPLACEHOLDERVALUE(Point const&) const */

undefined8 __thiscall Point_operator_add(Point *this,Point *param_1)

{
 undefined8 local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 Point_Point((Point *)&local_10,*(int *)this + *(int *)param_1,*(int *)(this + 4) + *(int *)(param_1 + 4)
 );
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,local_10,0,local_8 - ___stack_chk_guard);
 }
 return local_10;
}



/* Function: operator== @ 00103684 */

/* Point::TEMPNAMEPLACEHOLDERVALUE(Point const&) const */

undefined8 __thiscall Point_operator_eq(Point *this,Point *param_1)

{
 undefined8 uVar1;
 
 if ((*(int *)this == *(int *)param_1) && (*(int *)(this + 4) == *(int *)(param_1 + 4))) {
 uVar1 = 1;
 }
 else {
 uVar1 = 0;
 }
 return uVar1;
}



/* Function: operator++ @ 001036d4 */

/* Point::TEMPNAMEPLACEHOLDERVALUE() */

Point * __thiscall Point_operator_inc(Point *this)

{
 *(int *)this = *(int *)this + 1;
 *(int *)(this + 4) = *(int *)(this + 4) + 1;
 return this;
}



/* Function: template_max<int> @ 00103710 */

/* int template_max<int>(int, int) */

int template_max<int>(int param_1,int param_2)

{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: template_max<double> @ 00103740 */

/* double template_max<double>(double, double) */

double template_max<double>(double param_1,double param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap<int> @ 00103774 */

/* void template_swap<int>(int&, int&) */

void template_swap<int>(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 001037b4 */

/* Container<int>::Container() */

void __thiscall Container_int_Container(Container_int *this)

{
 *(undefined4 *)(this + 0x28) = 0;
 return;
}



/* Function: push @ 001037d0 */

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



/* Function: get @ 0010381c */

/* Container<int>::get(int) const */

undefined4 __thiscall Container_int_get(Container_int *this,int param_1)

{
 undefined4 uVar1;
 
 if ((param_1 < 0) || (*(int *)(this + 0x28) <= param_1)) {
 uVar1 = 0;
 }
 else {
 uVar1 = *(undefined4 *)(this + (long)param_1 * 4);
 }
 return uVar1;
}



/* Function: getSize @ 00103864 */

/* Container<int>::getSize() const */

undefined4 __thiscall Container_int_getSize(Container_int *this)

{
 return *(undefined4 *)(this + 0x28);
}



/* Function: Container @ 0010387c */

/* Container<double>::Container() */

void __thiscall Container_double_Container(Container_double *this)

{
 *(undefined4 *)(this + 0x50) = 0;
 return;
}



/* Function: push @ 00103898 */

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



/* Function: get @ 001038e4 */

/* Container<double>::get(int) const */

double __thiscall Container_double_get(Container_double *this,int param_1)

{
 ulong uVar1;
 double dVar2;
 
 if ((param_1 < 0) || (*(int *)(this + 0x50) <= param_1)) {
 uVar1 = 0;
 }
 else {
 uVar1 = *(ulong *)(this + (long)param_1 * 8);
 }
 dVar2 = *(double *)&uVar1;
 return dVar2;
}



/* Function: getSize @ 0010392c */

/* Container<double>::getSize() const */

undefined4 __thiscall Container_double_getSize(Container_double *this)

{
 return *(undefined4 *)(this + 0x50);
}



/* Function: __uniq_ptr_data @ 00103944 */

/* std::__uniq_ptr_data<int, std::default_delete<int>, true,
 true>::__uniq_ptr_data(std::__uniq_ptr_data<int, std::default_delete<int>, true, true>&&) */

void __thiscall
std_uniq_ptr_data___uniq_ptr_data
 (__uniq_ptr_data *this,__uniq_ptr_data *param_1)

{
 std_uniq_ptr_impl___uniq_ptr_impl
 ((__uniq_ptr_impl *)this,(__uniq_ptr_impl *)param_1);
 return;
}



/* Function: unique_ptr @ 0010396c */

/* std::unique_ptr<int, std::default_delete<int> >::unique_ptr(std::unique_ptr<int,
 std::default_delete<int> >&&) */

void __thiscall
std_unique_ptr_unique_ptr
 (unique_ptr *this,unique_ptr *param_1)

{
 std_uniq_ptr_data___uniq_ptr_data
 ((__uniq_ptr_data *)this,
 (__uniq_ptr_data *)param_1);
 return;
}



/* Function: getType @ 00103994 */

/* RTTIBase::getType() const */

undefined8 RTTIBase_getType(void)

{
 return 0;
}



/* Function: getType @ 001039a8 */

/* RTTIDerivedA::getType() const */

undefined8 RTTIDerivedA_getType(void)

{
 return 1;
}



/* Function: derivedA_data @ 001039bc */

/* RTTIDerivedA::derivedA_data() const */

undefined8 RTTIDerivedA_derivedA_data(void)

{
 return 100;
}



/* Function: getType @ 001039d0 */

/* RTTIDerivedB::getType() const */

undefined8 RTTIDerivedB_getType(void)

{
 return 2;
}



/* Function: derivedB_data @ 001039e4 */

/* RTTIDerivedB::derivedB_data() const */

undefined8 RTTIDerivedB_derivedB_data(void)

{
 return 200;
}



/* Function: RTTIBase @ 001039f8 */

/* RTTIBase::RTTIBase() */

void __thiscall RTTIBase_RTTIBase(RTTIBase *this)

{
 *(undefined ***)this = &PTR__RTTIBase_00116848;
 return;
}



/* Function: ~RTTIBase @ 00103a1c */

/* RTTIBase::~RTTIBase() */

void __thiscall RTTIBase_destructor(RTTIBase *this)

{
 *(undefined ***)this = &PTR__RTTIBase_00116848;
 return;
}



/* Function: ~RTTIBase @ 00103a40 */

/* RTTIBase::~RTTIBase() */

void __thiscall RTTIBase_destructor_delete(RTTIBase *this)

{
 RTTIBase_destructor(this);
 operator_delete(this,8);
 return;
}



/* Function: RTTIDerivedA @ 00103a68 */

/* RTTIDerivedA::RTTIDerivedA() */

void __thiscall RTTIDerivedA_RTTIDerivedA(RTTIDerivedA *this)

{
 RTTIBase_RTTIBase((RTTIBase *)this);
 *(undefined ***)this = &PTR__RTTIDerivedA_00116820;
 return;
}



/* Function: RTTIDerivedB @ 00103a98 */

/* RTTIDerivedB::RTTIDerivedB() */

void __thiscall RTTIDerivedB_RTTIDerivedB(RTTIDerivedB *this)

{
 RTTIBase_RTTIBase((RTTIBase *)this);
 *(undefined ***)this = &PTR__RTTIDerivedB_001167f8;
 return;
}



/* Function: __uniq_ptr_impl @ 00103ac8 */

/* std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_impl(int*) */

void __thiscall
std_uniq_ptr_data___uniq_ptr_impl
 (__uniq_ptr_data *this,int *param_1)

{
 std_uniq_ptr_impl___uniq_ptr_impl
 ((__uniq_ptr_impl *)this,param_1);
 return;
}



/* Function: unique_ptr<std::default_delete<int>,void> @ 00103af0 */

/* std::unique_ptr<int, std::default_delete<int> >::unique_ptr<std::default_delete<int>, void>(int*)
 */

void __thiscall
std_unique_ptr_unique_ptr_default_delete_void
 (unique_ptr *this,int *param_1)

{
 std_uniq_ptr_data___uniq_ptr_impl
 ((__uniq_ptr_data *)this,param_1);
 return;
}



/* Function: ~unique_ptr @ 00103b18 */

/* std::unique_ptr<int, std::default_delete<int> >::~unique_ptr() */

void __thiscall
std_unique_ptr_destructor
 (unique_ptr *this)

{
 int **ppiVar1;
 default_delete *this_00;
 type *ptVar2;
 
 ppiVar1 = (int **)std_uniq_ptr_impl__M_ptr
 ((__uniq_ptr_impl *)this);
 if (*ppiVar1 != (int *)0x0) {
 this_00 = (default_delete *)get_deleter(this);
 ptVar2 = move(ppiVar1);
 default_delete_operator()(this_00,*(int **)ptVar2);
 }
 *ppiVar1 = (int *)0x0;
 return;
}



/* Function: operator* @ 00103b80 */

/* std::unique_ptr<int, std::default_delete<int> >::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall
std_unique_ptr_operator_star
 (unique_ptr *this)

{
 get(this);
 return;
}



/* Function: move<std::unique_ptr<int,std::default_delete<int>>&> @ 00103ba4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<std::unique_ptr<int, std::default_delete<int> >&>::type&&
 std::move<std::unique_ptr<int, std::default_delete<int> >&>(std::unique_ptr<int,
 std::default_delete<int> >&) */

type * move_unique_ptr(unique_ptr *param_1)

{
 return (type *)param_1;
}



/* Function: _Tuple_impl @ 00103bb8 */

/* std::_Tuple_impl<0ul, int*, std::default_delete<int> >::_Tuple_impl(std::_Tuple_impl<0ul, int*,
 std::default_delete<int> >&&) */

void __thiscall
_Tuple_impl_0ul_int_default_delete___Tuple_impl
 (_Tuple_impl *this,_Tuple_impl *param_1)

{
 _Tuple_impl_1ul_default_delete___Tuple_impl((_Tuple_impl *)this);
 *(undefined8 *)this = *(undefined8 *)param_1;
 return;
}



/* Function: tuple @ 00103bf0 */

/* std::tuple<int*, std::default_delete<int> >::tuple(std::tuple<int*, std::default_delete<int> >&&)
 */

void __thiscall
tuple_int_default_delete_tuple
 (tuple *this,tuple *param_1)

{
 _Tuple_impl_0ul_int_default_delete___Tuple_impl
 ((_Tuple_impl *)this,(_Tuple_impl *)param_1);
 return;
}



/* Function: __uniq_ptr_impl @ 00103c18 */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::__uniq_ptr_impl(std::__uniq_ptr_impl<int,
 std::default_delete<int> >&&) */

void __thiscall
std_uniq_ptr_impl___uniq_ptr_impl
 (__uniq_ptr_impl *this,__uniq_ptr_impl *param_1)

{
 type *ptVar1;
 undefined8 *puVar2;
 
 ptVar1 = move_tuple((tuple *)param_1);
 tuple_int_default_delete_tuple
 ((tuple *)this,(tuple *)ptVar1);
 puVar2 = (undefined8 *)std_uniq_ptr_impl__M_ptr((__uniq_ptr_impl *)param_1);
 *puVar2 = 0;
 return;
}



/* Function: __uniq_ptr_impl @ 00103c60 */

/* std::__uniq_ptr_data<int, std::default_delete<int []>, true, true>::__uniq_ptr_impl(int*) */

void __thiscall
std_uniq_ptr_data_array___uniq_ptr_impl
 (__uniq_ptr_data *this,int *param_1)

{
 std_uniq_ptr_impl_array___uniq_ptr_impl
 ((__uniq_ptr_impl *)this,param_1);
 return;
}



/* Function: unique_ptr<int*,std::default_delete<int[]>,void,bool> @ 00103c88 */

/* std::unique_ptr<int [], std::default_delete<int []> >::unique_ptr<int*, std::default_delete<int
 []>, void, bool>(int*) */

void __thiscall
unique_ptr_array_unique_ptr
 (unique_ptr *this,int *param_1)

{
 std_uniq_ptr_data_array___uniq_ptr_impl
 ((__uniq_ptr_data *)this,param_1);
 return;
}



/* Function: ~unique_ptr @ 00103cb0 */

/* std::unique_ptr<int [], std::default_delete<int []> >::~unique_ptr() */

void __thiscall
unique_ptr_array_destructor
 (unique_ptr *this)

{
 long *plVar1;
 default_delete *this_00;
 
 plVar1 = (long *)std_uniq_ptr_impl_array__M_ptr
 ((__uniq_ptr_impl *)this);
 if (*plVar1 != 0) {
 this_00 = (default_delete *)get_deleter(this);
 default_delete_array_operator()(this_00,(int *)*plVar1);
 }
 *plVar1 = 0;
 return;
}



/* Function: operator[] @ 00103d0c */

/* std::unique_ptr<int [], std::default_delete<int []> >::operator[](unsigned long) const */

long __thiscall
unique_ptr_array_operator_bracket
 (unique_ptr *this,ulong param_1)

{
 long lVar1;
 
 lVar1 = get(this);
 return lVar1 + param_1 * 4;
}



/* Function: __uniq_ptr_impl @ 00103d44 */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::__uniq_ptr_impl(int*) */

void __thiscall
std_uniq_ptr_impl___uniq_ptr_impl_int
 (__uniq_ptr_impl *this,int *param_1)

{
 undefined8 *puVar1;
 
 tuple_int_default_delete_tuple_true_true
 ((tuple *)this);
 puVar1 = (undefined8 *)std_uniq_ptr_impl__M_ptr(this);
 *puVar1 = param_1;
 return;
}



/* Function: _M_ptr @ 00103d80 */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::_M_ptr() */

void __thiscall
std_uniq_ptr_impl__M_ptr
 (__uniq_ptr_impl *this)

{
 get_0ul_int_default_delete((tuple *)this);
 return;
}



/* Function: get_deleter @ 00103d9c */

/* std::unique_ptr<int, std::default_delete<int> >::get_deleter() */

void __thiscall
unique_ptr_get_deleter
 (unique_ptr *this)

{
 std_uniq_ptr_impl__M_deleter
 ((__uniq_ptr_impl *)this);
 return;
}



/* Function: move<int*&> @ 00103db8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<int*&>::type&& std::move<int*&>(int*&) */

type * move_int_ptr(int **param_1)

{
 return (type *)param_1;
}



/* Function: operator() @ 00103dcc */

/* std::default_delete<int>::TEMPNAMEPLACEHOLDERVALUE(int*) const */

void __thiscall default_delete_operator()(default_delete *this,int *param_1)

{
 if (param_1 != (int *)0x0) {
 operator_delete(param_1,4);
 }
 return;
}



/* Function: get @ 00103dfc */

/* std::unique_ptr<int, std::default_delete<int> >::get() const */

void __thiscall
unique_ptr_get(unique_ptr *this)

{
 std_uniq_ptr_impl__M_ptr
 ((__uniq_ptr_impl *)this);
 return;
}



/* Function: move<std::tuple<int*,std::default_delete<int>>&> @ 00103e18 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<std::tuple<int*, std::default_delete<int> >&>::type&&
 std::move<std::tuple<int*, std::default_delete<int> >&>(std::tuple<int*, std::default_delete<int>
 >&) */

type * move_tuple(tuple *param_1)

{
 return (type *)param_1;
}



/* Function: _Tuple_impl @ 00103e2c */

/* std::_Tuple_impl<1ul, std::default_delete<int> >::_Tuple_impl(std::_Tuple_impl<1ul,
 std::default_delete<int> >&&) */

void _Tuple_impl_1ul_default_delete___Tuple_impl(_Tuple_impl *this)

{
 return;
}



/* Function: __uniq_ptr_impl @ 00103e44 */

/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::__uniq_ptr_impl(int*) */

void __thiscall
std_uniq_ptr_impl_array___uniq_ptr_impl
 (__uniq_ptr_impl *this,int *param_1)

{
 undefined8 *puVar1;
 
 tuple_int_default_delete_array_tuple_true_true
 ((tuple *)this);
 puVar1 = (undefined8 *)std_uniq_ptr_impl_array__M_ptr(this);
 *puVar1 = (undefined8)param_1;
 return;
}



/* Function: _M_ptr @ 00103e80 */

/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr() */

undefined8 __thiscall
std_uniq_ptr_impl_array__M_ptr
 (__uniq_ptr_impl *this)

{
 type *ptVar1;
 
 ptVar1 = get_0ul_int_default_delete_array((tuple *)this);
 return *(undefined8 *)ptVar1;
}



/* Function: get_deleter @ 00103e9c */

/* std::unique_ptr<int [], std::default_delete<int []> >::get_deleter() */

void __thiscall
unique_ptr_array_get_deleter
 (unique_ptr *this)

{
 std_uniq_ptr_impl_array__M_deleter
 ((__uniq_ptr_impl *)this);
 return;
}



/* Function: operator() @ 00103eb8 */

/* enable_if<is_convertible<int (*) [], int (*) []>::value, void>::type
 std::default_delete<int []>::TEMPNAMEPLACEHOLDERVALUE(int*) const */

void __thiscall default_delete_array_operator()(default_delete *this,int *param_1)

{
 if (param_1 != (int *)0x0) {
 operator_delete__(param_1);
 }
 return;
}



/* Function: get @ 00103ee8 */

/* std::unique_ptr<int [], std::default_delete<int []> >::get() const */

void __thiscall
unique_ptr_array_get
 (unique_ptr *this)

{
 std_uniq_ptr_impl_array__M_ptr
 ((__uniq_ptr_impl *)this);
 return;
}



/* Function: tuple<true,true> @ 00103f04 */

/* std::tuple<int*, std::default_delete<int> >::tuple<true, true>() */

void __thiscall
tuple_int_default_delete_tuple_true_true
 (tuple *this)

{
 _Tuple_impl_0ul_int_default_delete___Tuple_impl
 ((_Tuple_impl *)this);
 return;
}



/* Function: get<0ul,int*,std::default_delete<int>> @ 00103f24 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0ul, std::tuple<int*, std::default_delete<int> > >::type& std::get<0ul, int*,
 std::default_delete<int> >(std::tuple<int*, std::default_delete<int> >&) */

type * get_0ul_int_default_delete(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)__get_helper_0ul_int_default_delete((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: _M_deleter @ 00103f40 */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::_M_deleter() */

void __thiscall
std_uniq_ptr_impl__M_deleter
 (__uniq_ptr_impl *this)

{
 get_1ul_int_default_delete((tuple *)this);
 return;
}



/* Function: _M_ptr @ 00103f5c */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::_M_ptr() const */

undefined8 __thiscall
std_uniq_ptr_impl__M_ptr_const
 (__uniq_ptr_impl *this)

{
 type *ptVar1;
 
 ptVar1 = get_0ul_int_default_delete((tuple *)this);
 return *(undefined8 *)ptVar1;
}



/* Function: tuple<true,true> @ 00103f7c */

/* std::tuple<int*, std::default_delete<int []> >::tuple<true, true>() */

void __thiscall
tuple_int_default_delete_array_tuple_true_true
 (tuple *this)

{
 _Tuple_impl_0ul_int_default_delete_array___Tuple_impl
 ((_Tuple_impl *)this);
 return;
}



/* Function: get<0ul,int*,std::default_delete<int[]>> @ 00103f9c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0ul, std::tuple<int*, std::default_delete<int []> > >::type& std::get<0ul,
 int*, std::default_delete<int []> >(std::tuple<int*, std::default_delete<int []> >&) */

type * get_0ul_int_default_delete_array(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)__get_helper_0ul_int_default_delete_array((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: _M_deleter @ 00103fb8 */

/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::_M_deleter() */

type * __thiscall
std_uniq_ptr_impl_array__M_deleter
 (__uniq_ptr_impl *this)

{
 return get_1ul_int_default_delete_array((tuple *)this);
}



/* Function: _M_ptr @ 00103fd4 */

/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr() const */

undefined8 __thiscall
std_uniq_ptr_impl_array__M_ptr_const
 (__uniq_ptr_impl *this)

{
 type *ptVar1;
 
 ptVar1 = get_0ul_int_default_delete_array((tuple *)this);
 return *(undefined8 *)ptVar1;
}



/* Function: _Tuple_impl @ 00103ff4 */

/* std::_Tuple_impl<0ul, int*, std::default_delete<int> >::_Tuple_impl() */

void __thiscall
_Tuple_impl_0ul_int_default_delete___Tuple_impl_ctor
 (_Tuple_impl *this)

{
 _Tuple_impl_1ul_default_delete___Tuple_impl_ctor();
 _Head_base_0ul_int_false__Head_base((_Head_base *)this);
 return;
}



/* Function: __get_helper<0ul,int*,std::default_delete<int>> @ 0010401c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std::__get_helper<0ul, int*, std::default_delete<int> >(std::_Tuple_impl<0ul, int*,
 std::default_delete<int> >&) */

int ** __get_helper_0ul_int_default_delete(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)_Tuple_impl_0ul_int_default_delete___M_head(param_1);
 return ppiVar1;
}



/* Function: get<1ul,int*,std::default_delete<int>> @ 00104038 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<1ul, std::tuple<int*, std::default_delete<int> > >::type& std::get<1ul, int*,
 std::default_delete<int> >(std::tuple<int*, std::default_delete<int> >&) */

type * get_1ul_int_default_delete(tuple *param_1)

{
 default_delete *pdVar1;
 
 pdVar1 = __get_helper_1ul_default_delete((_Tuple_impl *)param_1);
 return (type *)pdVar1;
}



/* Function: get<0ul,int*,std::default_delete<int>> @ 00104054 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0ul, std::tuple<int*, std::default_delete<int> > >::type const& std::get<0ul,
 int*, std::default_delete<int> >(std::tuple<int*, std::default_delete<int> > const&) */

type * get_0ul_int_default_delete_const(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)__get_helper_0ul_int_default_delete((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: _Tuple_impl @ 00104070 */

/* std::_Tuple_impl<0ul, int*, std::default_delete<int []> >::_Tuple_impl() */

void __thiscall
_Tuple_impl_0ul_int_default_delete_array___Tuple_impl_ctor
 (_Tuple_impl *this)

{
 _Tuple_impl_1ul_default_delete_array___Tuple_impl_ctor();
 _Head_base_0ul_int_false__Head_base((_Head_base *)this);
 return;
}



/* Function: __get_helper<0ul,int*,std::default_delete<int[]>> @ 00104098 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std::__get_helper<0ul, int*, std::default_delete<int []> >(std::_Tuple_impl<0ul, int*,
 std::default_delete<int []> >&) */

int ** __get_helper_0ul_int_default_delete_array(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)_Tuple_impl_0ul_int_default_delete_array___M_head(param_1);
 return ppiVar1;
}



/* Function: get<1ul,int*,std::default_delete<int[]>> @ 001040b4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<1ul, std::tuple<int*, std::default_delete<int []> > >::type& std::get<1ul,
 int*, std::default_delete<int []> >(std::tuple<int*, std::default_delete<int []> >&) */

type * get_1ul_int_default_delete_array(tuple *param_1)

{
 default_delete *pdVar1;
 
 pdVar1 = __get_helper_1ul_default_delete_array((_Tuple_impl *)param_1);
 return (type *)pdVar1;
}



/* Function: get<0ul,int*,std::default_delete<int[]>> @ 001040d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0ul, std::tuple<int*, std::default_delete<int []> > >::type const&
 std::get<0ul, int*, std::default_delete<int []> >(std::tuple<int*, std::default_delete<int []> >
 const&) */

type * get_0ul_int_default_delete_array_const(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)__get_helper_0ul_int_default_delete_array((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: forward<int*&> @ 001040ec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std::forward<int*&>(std::remove_reference<int*&>::type&) */

int ** forward_int_ptr(type *param_1)

{
 return (int **)param_1;
}



/* Function: _Tuple_impl @ 00104100 */

/* std::_Tuple_impl<1ul, std::default_delete<int> >::_Tuple_impl() */

void _Tuple_impl_1ul_default_delete___Tuple_impl_ctor(_Tuple_impl *this)

{
 _Head_base_1ul_default_delete_true__Head_base();
 return;
}



/* Function: _Head_base @ 00104120 */

/* std::_Head_base<0ul, int*, false>::_Head_base() */

void __thiscall _Head_base_0ul_int_false__Head_base(_Head_base *this, int **param_1)

{
 *(undefined8 *)this = 0;
 return;
}



/* Function: _M_head @ 0010413c */

/* std::_Tuple_impl<0ul, int*, std::default_delete<int> >::_M_head(std::_Tuple_impl<0ul, int*,
 std::default_delete<int> >&) */

_Head_base * _Tuple_impl_0ul_int_default_delete___M_head(_Tuple_impl *param_1)

{
 return _Head_base_0ul_int_false__M_head((_Head_base *)param_1);
}



/* Function: __get_helper<1ul,std::default_delete<int>> @ 00104158 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::default_delete<int>& std::__get_helper<1ul, std::default_delete<int>>(std::_Tuple_impl<1ul,
 std::default_delete<int>>&) */

default_delete * __get_helper_1ul_default_delete(_Tuple_impl *param_1)

{
 default_delete *pdVar1;
 
 pdVar1 = (default_delete *)_Tuple_impl_1ul_default_delete___M_head(param_1);
 return pdVar1;
}



/* Function: __get_helper<0ul,int*,std::default_delete<int>> @ 00104174 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* const& std::__get_helper<0ul, int*, std::default_delete<int> >(std::_Tuple_impl<0ul, int*,
 std::default_delete<int> > const&) */

int ** __get_helper_0ul_int_default_delete_const(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)_Tuple_impl_0ul_int_default_delete___M_head(param_1);
 return ppiVar1;
}



/* Function: _Tuple_impl @ 00104190 */

/* std::_Tuple_impl<1ul, std::default_delete<int []> >::_Tuple_impl() */

void _Tuple_impl_1ul_default_delete_array___Tuple_impl_ctor(_Tuple_impl *this)

{
 _Head_base_1ul_default_delete_array_true__Head_base((_Head_base *)this);
 return;
}



/* Function: _M_head @ 001041b0 */

/* std::_Tuple_impl<0ul, int*, std::default_delete<int []> >::_M_head(std::_Tuple_impl<0ul, int*,
 std::default_delete<int []> >&) */

void _Tuple_impl_0ul_int_default_delete_array___M_head(_Tuple_impl *param_1)

{
 _Head_base_0ul_int_false__M_head((_Head_base *)param_1);
 return;
}



/* Function: __get_helper<1ul,std::default_delete<int[]>> @ 001041cc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::default_delete<int []>& std::__get_helper<1ul, std::default_delete<int
 []>>(std::_Tuple_impl<1ul, std::default_delete<int []>>&) */

default_delete * __get_helper_1ul_default_delete_array(_Tuple_impl *param_1)

{
 default_delete *pdVar1;
 
 pdVar1 = (default_delete *)_Tuple_impl_1ul_default_delete_array___M_head(param_1);
 return pdVar1;
}



/* Function: __get_helper<0ul,int*,std::default_delete<int[]>> @ 001041e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* const& std::__get_helper<0ul, int*, std::default_delete<int []> >(std::_Tuple_impl<0ul,
 int*, std::default_delete<int []> > const&) */

int ** __get_helper_0ul_int_default_delete_array_const(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)_Tuple_impl_0ul_int_default_delete_array___M_head(param_1);
 return ppiVar1;
}



/* Function: _Head_base<int*&> @ 00104204 */

/* std::_Head_base<0ul, int*, false>::_Head_base<int*&>(int*&) */

void _Head_base_0ul_int_false__Head_base_int_ptr(_Head_base *this,int **param_1)

{
 int **ppiVar1;
 
 ppiVar1 = forward_int_ptr((type *)param_1);
 *(int **)this = *ppiVar1;
 return;
}



/* Function: _Head_base @ 00104234 */

/* std::_Head_base<1ul, std::default_delete<int>, true>::_Head_base() */

void _Head_base_1ul_default_delete_true__Head_base(_Head_base *this)

{
 return;
}



/* Function: _M_head @ 00104248 */

/* std::_Head_base<0ul, int*, false>::_M_head(std::_Head_base<0ul, int*, false>&) */

_Head_base * _Head_base_0ul_int_false__M_head(_Head_base *param_1)

{
 return param_1;
}



/* Function: _M_head @ 0010425c */

/* std::_Tuple_impl<1ul, std::default_delete<int> >::_M_head(std::_Tuple_impl<1ul,
 std::default_delete<int> >&) */

void _Tuple_impl_1ul_default_delete___M_head(_Tuple_impl *param_1)

{
 _Head_base_1ul_default_delete_true__M_head((_Head_base *)param_1);
 return;
}



/* Function: _M_head @ 00104278 */

/* std::_Tuple_impl<0ul, int*, std::default_delete<int> >::_M_head(std::_Tuple_impl<0ul, int*,
 std::default_delete<int> > const&) */

void _Tuple_impl_0ul_int_default_delete___M_head_const(_Tuple_impl *param_1)

{
 _Head_base_0ul_int_false__M_head((_Head_base *)param_1);
 return;
}



/* Function: _Head_base @ 00104294 */

/* std::_Head_base<1ul, std::default_delete<int []>, true>::_Head_base() */

void _Head_base_1ul_default_delete_array_true__Head_base(_Head_base *this)

{
 return;
}



/* Function: _M_head @ 001042a8 */

/* std::_Tuple_impl<1ul, std::default_delete<int []> >::_M_head(std::_Tuple_impl<1ul,
 std::default_delete<int []> >&) */

void _Tuple_impl_1ul_default_delete_array___M_head(_Tuple_impl *param_1)

{
 _Head_base_1ul_default_delete_array_true__M_head((_Head_base *)param_1);
 return;
}



/* Function: _M_head @ 001042c4 */

/* std::_Tuple_impl<0ul, int*, std::default_delete<int []> >::_M_head(std::_Tuple_impl<0ul, int*,
 std::default_delete<int []> > const&) */

void _Tuple_impl_0ul_int_default_delete_array___M_head_const(_Tuple_impl *param_1)

{
 _Head_base_0ul_int_false__M_head((_Head_base *)param_1);
 return;
}



/* Function: _M_head @ 001042e0 */

/* std::_Head_base<1ul, std::default_delete<int>, true>::_M_head(std::_Head_base<1ul,
 std::default_delete<int>, true>&) */

_Head_base * _Head_base_1ul_default_delete_true__M_head(_Head_base *param_1)

{
 return param_1;
}



/* Function: _M_head @ 001042f4 */

/* std::_Head_base<0ul, int*, false>::_M_head(std::_Head_base<0ul, int*, false> const&) */

_Head_base * _Head_base_0ul_int_false__M_head_const(_Head_base *param_1)

{
 return param_1;
}



/* Function: _M_head @ 00104308 */

/* std::_Head_base<1ul, std::default_delete<int []>, true>::_M_head(std::_Head_base<1ul,
 std::default_delete<int []>, true>&) */

_Head_base * _Head_base_1ul_default_delete_array_true__M_head(_Head_base *param_1)

{
 return param_1;
}



/* Function: ~RTTIDerivedB @ 0010431c */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB_destructor(RTTIDerivedB *this)

{
 *(undefined ***)this = &PTR__RTTIDerivedB_001167f8;
 RTTIBase_destructor((RTTIBase *)this);
 return;
}



/* Function: ~RTTIDerivedB @ 0010434c */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB_destructor_delete(RTTIDerivedB *this)

{
 RTTIDerivedB_destructor(this);
 operator_delete(this,8);
 return;
}



/* Function: ~RTTIDerivedA @ 00104374 */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA_destructor(RTTIDerivedA *this)

{
 *(undefined ***)this = &PTR__RTTIDerivedA_00116820;
 RTTIBase_destructor((RTTIBase *)this);
 return;
}



/* Function: ~RTTIDerivedA @ 001043a4 */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA_destructor_delete(RTTIDerivedA *this)

{
 RTTIDerivedA_destructor(this);
 operator_delete(this,8);
 return;
}



/* Function: ~DiamondDerived @ 001043cc */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived_destructor(DiamondDerived *this)

{
 *(undefined ***)this = &PTR_func_00116878;
 *(undefined ***)(this + 0x20) = &PTR_func_001168e0;
 *(undefined ***)(this + 0x10) = &PTR_func_001168a8;
 MiddleB_destructor((MiddleB *)(this + 0x10));
 MiddleA_destructor((MiddleA *)this);
 VirtualBase_destructor((VirtualBase *)(this + 0x20));
 return;
}



/* Function: ~DiamondDerived @ 00104458 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived_destructor_thunk(DiamondDerived *this)

{
 DiamondDerived_destructor(this + -0x10);
 return;
}



/* Function: ~DiamondDerived @ 00104460 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived_destructor_vthunk(DiamondDerived *this)

{
 DiamondDerived_destructor(this + *(long *)(*(long *)this + -0x20));
 return;
}



/* Function: ~DiamondDerived @ 00104470 */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived_destructor_delete(DiamondDerived *this)

{
 DiamondDerived_destructor(this);
 operator_delete(this,0x30);
 return;
}



/* Function: ~DiamondDerived @ 00104498 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived_destructor_thunk2(DiamondDerived *this)

{
 DiamondDerived_destructor(this + -0x10);
 return;
}



/* Function: ~DiamondDerived @ 001044a0 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived_destructor_vthunk2(DiamondDerived *this)

{
 DiamondDerived_destructor(this + *(long *)(*(long *)this + -0x20));
 return;
}



/* Function: ~MultiDerived @ 001044b0 */

/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived_destructor(MultiDerived *this)

{
 *(undefined ***)this = &PTR_funcA_00116a38;
 *(undefined ***)(this + 0x10) = &PTR_funcB_00116a68;
 BaseB_destructor((BaseB *)(this + 0x10));
 BaseA_destructor((BaseA *)this);
 return;
}



/* Function: ~MultiDerived @ 001044fc */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived_destructor_thunk(MultiDerived *this)

{
 MultiDerived_destructor(this + -0x10);
 return;
}



/* Function: ~MultiDerived @ 00104504 */

/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived_destructor_delete(MultiDerived *this)

{
 MultiDerived_destructor(this);
 operator_delete(this,0x20);
 return;
}



/* Function: ~MultiDerived @ 0010452c */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived_destructor_thunk2(MultiDerived *this)

{
 MultiDerived_destructor(this + -0x10);
 return;
}



/* Function: ~Derived @ 00104534 */

/* Derived::~Derived() */

void __thiscall Derived_destructor(Derived *this)

{
 *(undefined ***)this = &PTR_virtual_func_00116ae0;
 Base_destructor((Base *)this);
 return;
}



/* Function: ~Derived @ 00104564 */

/* Derived::~Derived() */

void __thiscall Derived_destructor_delete(Derived *this)

{
 Derived_destructor(this);
 operator_delete(this,0x10);
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 205 */
