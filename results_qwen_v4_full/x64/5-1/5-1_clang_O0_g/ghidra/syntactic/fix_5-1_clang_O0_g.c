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
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;
typedef struct DerivedException DerivedException;
typedef struct BaseException BaseException;
typedef struct anon_class_1_0_00000001_for__M_head_impl anon_class_1_0_00000001_for__M_head_impl;

/* Type definitions for C++ STL and other types */
typedef struct unique_ptr_int_std_default_delete_int unique_ptr_int_std_default_delete_int;
typedef struct unique_ptr_int_std_default_delete_int_array unique_ptr_int_std_default_delete_int_array;
typedef struct unique_ptr_int_lambda unique_ptr_int_lambda;
typedef struct __uniq_ptr_impl_int_std_default_delete_int __uniq_ptr_impl_int_std_default_delete_int;
typedef struct __uniq_ptr_impl_int_std_default_delete_int_array __uniq_ptr_impl_int_std_default_delete_int_array;
typedef struct __uniq_ptr_impl_int_lambda __uniq_ptr_impl_int_lambda;
typedef struct __uniq_ptr_data_int_std_default_delete_int_true_true __uniq_ptr_data_int_std_default_delete_int_true_true;
typedef struct __uniq_ptr_data_int_std_default_delete_int_array_true_true __uniq_ptr_data_int_std_default_delete_int_array_true_true;
typedef struct __uniq_ptr_data_int_lambda_true_false __uniq_ptr_data_int_lambda_true_false;
typedef struct tuple_int_ptr_std_default_delete_int tuple_int_ptr_std_default_delete_int;
typedef struct tuple_int_ptr_std_default_delete_int_array tuple_int_ptr_std_default_delete_int_array;
typedef struct tuple_int_ptr_lambda tuple_int_ptr_lambda;
typedef struct _Tuple_impl_0UL_int_ptr_std_default_delete_int _Tuple_impl_0UL_int_ptr_std_default_delete_int;
typedef struct _Tuple_impl_1UL_std_default_delete_int _Tuple_impl_1UL_std_default_delete_int;
typedef struct _Tuple_impl_0UL_int_ptr_std_default_delete_int_array _Tuple_impl_0UL_int_ptr_std_default_delete_int_array;
typedef struct _Tuple_impl_1UL_std_default_delete_int_array _Tuple_impl_1UL_std_default_delete_int_array;
typedef struct _Head_base_0UL_int_ptr_false _Head_base_0UL_int_ptr_false;
typedef struct _Head_base_1UL_std_default_delete_int_true _Head_base_1UL_std_default_delete_int_true;
typedef struct _Head_base_1UL_std_default_delete_int_array_true _Head_base_1UL_std_default_delete_int_array_true;
typedef struct default_delete_int default_delete_int;
typedef struct default_delete_int_array default_delete_int_array;
typedef void (*code)(void);
typedef int (*_func_int)(void);
typedef void* pointer;
typedef int* type;
typedef void* deleter_type;
typedef void* Init;
typedef void* type_info;
typedef void* tuple_int_ptr_deleter;
typedef void* tuple_int_ptr_array_deleter;
typedef struct anon_class_1_0_00000001 anon_class_1_0_00000001;
typedef struct anon_class_16_2_b9b285fb anon_class_16_2_b9b285fb;
typedef void undefined;
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined4;
typedef unsigned long undefined8;
typedef unsigned long ulong;
typedef unsigned int uint;

/* std namespace stub */
namespace std {
  namespace ios_base {
    class Init;
  }
}

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-1/5-1_clang_O0_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */


/* Class structure definitions */
struct SimpleClass {
  int value;
  char name[32];
};

struct LifecycleClass {
  size_t size;
  int* data;
};

struct Base {
  void** _vptr_Base;
};

struct Derived {
  Base super_Base;
  int multiplier;
};

struct BaseA {
  void** _vptr_BaseA;
  int dataA;
};

struct BaseB {
  void** _vptr_BaseB;
  int dataB;
};

struct MultiDerived {
  BaseA super_BaseA;
  BaseB super_BaseB;
};

struct VirtualBase {
  void** _vptr_VirtualBase;
};

struct MiddleA {
  void** _vptr_MiddleA;
  int dataA;
  char field_0x10[16];
};

struct MiddleB {
  void** _vptr_MiddleB;
  int dataB;
  char field_0x10[16];
};

struct DiamondDerived {
  MiddleA super_MiddleA;
  char field_0x20[32];
};

struct Point {
  int x;
  int y;
};

struct RTTIBase {
  void** _vptr_RTTIBase;
};

struct RTTIDerivedA {
  RTTIBase super_RTTIBase;
};

struct RTTIDerivedB {
  RTTIBase super_RTTIBase;
};

struct Container_int {
  int size;
  int data[10];
};

struct Container_double {
  int size;
  double data[10];
};

struct anon_class_1_0_00000001 {
  int capture_by_value;
  int* capture_by_ref;
};

struct anon_class_16_2_b9b285fb {
  int capture_by_value;
  int* capture_by_ref;
};

struct anon_class_1_0_00000001_for__M_head_impl {
  int _M_head_impl;
};

struct _Head_base_0UL_int_ptr_false {
  int* _M_head_impl;
};

struct _Head_base_1UL_std_default_delete_int_true {
  anon_class_1_0_00000001_for__M_head_impl _M_head_impl;
};

struct _Head_base_1UL_std_default_delete_int_array_true {
  anon_class_1_0_00000001_for__M_head_impl _M_head_impl;
};

struct _Tuple_impl_1UL_std_default_delete_int {
  _Head_base_1UL_std_default_delete_int_true super__Head_base_1UL_std_default_delete_int_true;
};

struct _Tuple_impl_1UL_std_default_delete_int_array {
  _Head_base_1UL_std_default_delete_int_array_true super__Head_base_1UL_std_default_delete_int_array_true;
};

struct _Tuple_impl_0UL_int_ptr_std_default_delete_int {
  _Tuple_impl_1UL_std_default_delete_int super__Tuple_impl_1UL_std_default_delete_int;
  _Head_base_0UL_int_ptr_false _M_head_impl;
};

struct _Tuple_impl_0UL_int_ptr_std_default_delete_int_array {
  _Tuple_impl_1UL_std_default_delete_int_array super__Tuple_impl_1UL_std_default_delete_int_array;
  _Head_base_0UL_int_ptr_false _M_head_impl;
};

struct tuple_int_ptr_std_default_delete_int {
  _Tuple_impl_0UL_int_ptr_std_default_delete_int super__Tuple_impl_0UL_int_ptr_std_default_delete_int;
};

struct tuple_int_ptr_std_default_delete_int_array {
  _Tuple_impl_0UL_int_ptr_std_default_delete_int_array super__Tuple_impl_0UL_int_ptr_std_default_delete_int_array;
};

struct tuple_int_ptr_lambda {
  _Tuple_impl_0UL_int_ptr_std_default_delete_int super__Tuple_impl_0UL_int_ptr_std_default_delete_int;
};

struct __uniq_ptr_impl_int_std_default_delete_int {
  tuple_int_ptr_std_default_delete_int _M_t;
};

struct __uniq_ptr_impl_int_std_default_delete_int_array {
  tuple_int_ptr_std_default_delete_int_array _M_t;
};

struct __uniq_ptr_impl_int_lambda {
  tuple_int_ptr_lambda _M_t;
};

struct __uniq_ptr_data_int_std_default_delete_int_true_true {
  __uniq_ptr_impl_int_std_default_delete_int super___uniq_ptr_impl_int_std_default_delete_int;
};

struct __uniq_ptr_data_int_std_default_delete_int_array_true_true {
  __uniq_ptr_impl_int_std_default_delete_int_array super___uniq_ptr_impl_int_std_default_delete_int_array;
};

struct __uniq_ptr_data_int_lambda_true_false {
  __uniq_ptr_impl_int_lambda super___uniq_ptr_impl_int_lambda;
};

struct unique_ptr_int_std_default_delete_int {
  __uniq_ptr_data_int_std_default_delete_int_true_true _M_t;
};

struct unique_ptr_int_std_default_delete_int_array {
  __uniq_ptr_data_int_std_default_delete_int_array_true_true _M_t;
};

struct unique_ptr_int_lambda {
  __uniq_ptr_data_int_lambda_true_false _M_t;
};

struct default_delete_int {
  int _M_head_impl;
};

struct default_delete_int_array {
  int _M_head_impl;
};

/* Global variables */
static int instance_count = 0;
static void* VTT = 0;
void* __dso_handle = 0;
void* std___ioinit = 0;
void* stack0x00000000 = 0;

/* Forward declarations */
void* __cxa_allocate_exception(size_t size);
void __cxa_throw(void* exception, void* typeinfo, void* dest);
void* operator_new(size_t size);
void* operator_new__(size_t size);
void operator_delete(void* ptr);
void operator_delete__(void* ptr);
void std_unique_ptr_int_std_default_delete_int_unique_ptr_std_default_delete_int_void
 (unique_ptr_int_std_default_delete_int *this_ptr,pointer __p);
void std_unique_ptr_int_std_default_delete_int_unique_ptr
 (unique_ptr_int_std_default_delete_int *this_ptr,
 unique_ptr_int_std_default_delete_int *param_1);
type std_unique_ptr_int_std_default_delete_int_operator_deref
 (unique_ptr_int_std_default_delete_int *this_ptr);
type std_unique_ptr_int_lambda_operator_deref
 (unique_ptr_int_lambda *this_ptr);
void std_unique_ptr_int_lambda_destructor
 (unique_ptr_int_lambda *this_ptr);
void std_unique_ptr_int_array_std_default_delete_int_array_destructor
 (unique_ptr_int_std_default_delete_int_array *this_ptr);
void std_unique_ptr_int_std_default_delete_int_destructor
 (unique_ptr_int_std_default_delete_int *this_ptr);
void std_unique_ptr_int_lambda_unique_ptr_lambda_void
 (unique_ptr_int_lambda *this_ptr,pointer __p,anon_class_1_0_00000001_for__M_head_impl *__d);
void std___uniq_ptr_data_int_lambda_true_false___uniq_ptr_impl
 (__uniq_ptr_data_int_lambda_true_false *this_ptr,pointer param_1,
 anon_class_1_0_00000001_for__M_head_impl *param_2);
type * std_move_std_unique_ptr_int_std_default_delete_int_ref
 (unique_ptr_int_std_default_delete_int *__t);
type std_unique_ptr_int_lambda_get
 (unique_ptr_int_lambda *this_ptr);
int ** std___uniq_ptr_impl_int_lambda_M_ptr
 (__uniq_ptr_impl_int_lambda *this_ptr);
deleter_type * std_unique_ptr_int_lambda_get_deleter
 (unique_ptr_int_lambda *this_ptr);
int ** std_move_int_ptr_ref(int **__t);
void std_Head_base_1UL_lambda_true_anon_class_1_0_00000001_for__M_head_impl_operator_call
 (anon_class_1_0_00000001_for__M_head_impl *this_ptr,int *p);
void std_unique_ptr_int_array_std_default_delete_int_array_unique_ptr_int_ptr_std_default_delete_int_array_void_bool
 (unique_ptr_int_std_default_delete_int_array *this_ptr,int *__p);
type __thiscall
std_unique_ptr_int_array_std_default_delete_int_array_operator_index
 (unique_ptr_int_std_default_delete_int_array *this_ptr,size_t __i);
int LifecycleClass_getInstanceCount(void);
void SimpleClass_SimpleClass(SimpleClass *this_ptr,int v,char *n);
void SimpleClass_setValue(SimpleClass *this_ptr,int v);
int SimpleClass_getValue(SimpleClass *this_ptr);
int SimpleClass_compute(SimpleClass *this_ptr,int x);
int SimpleClass_getClassID(void);
void LifecycleClass_LifecycleClass(LifecycleClass *this_ptr,size_t s);
int LifecycleClass_getData(LifecycleClass *this_ptr,size_t idx);
void LifecycleClass__LifecycleClass(LifecycleClass *this_ptr);
void Base_Base(Base *this_ptr);
void Derived_Derived(Derived *this_ptr,int m);
int Base_virtual_func(Base *this_ptr,int x);
int Derived_virtual_func(Derived *this_ptr,int x);
void Base__Base(Base *this_ptr);
void Derived__Derived(Derived *this_ptr);
void DiamondDerived_DiamondDerived(DiamondDerived *this_ptr);
void DiamondDerived__DiamondDerived(DiamondDerived *this_ptr);
void Point_Point(Point *this_ptr,int _x,int _y);
Point Point_operator_plus(Point *this_ptr,Point *other);
bool Point_operator_eq(Point *this_ptr,Point *other);
Point * Point_operator_inc(Point *this_ptr);
int template_max_int(int a,int b);
double template_max_double(double a,double b);
void template_swap_int(int *a,int *b);
void MultiDerived_MultiDerived(MultiDerived *this);
void Container_int_Container(Container_int *this);
void Container_int_push(Container_int *this,int value);
int Container_int_get(Container_int *this,int idx);
int Container_int_getSize(Container_int *this);
void Container_double_Container(Container_double *this);
void Container_double_push(Container_double *this,double value);
double Container_double_get(Container_double *this,int idx);
int Container_double_getSize(Container_double *this);
void MultiDerived__MultiDerived(MultiDerived *this_ptr);
int test_cpp_lambda_anon_class_16_2_b9b285fb_operator_call(anon_class_16_2_b9b285fb *this_ptr,int x);
int test_cpp_lambda_anon_class_1_0_00000001_operator_int__int(anon_class_1_0_00000001 *this_ptr,int a,int b);

/* Function: FUN_00102020 @ 00102020 */

void FUN_00102020(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: __cxx_global_var_init @ 00102180 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void __cxx_global_var_init(void)

{
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 001021b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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

int test_cpp_member_func(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int r3;
 int r2;
 int r1;
 SimpleClass obj;
 
 SimpleClass_SimpleClass(&obj,5,"Test");
 SimpleClass_setValue(&obj,10);
 iVar1 = SimpleClass_getValue(&obj);
 iVar2 = SimpleClass_compute(&obj,3);
 iVar3 = SimpleClass_getClassID();
 return iVar1 + iVar2 + iVar3;
}



/* Function: test_cpp_constructor @ 00102310 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void);

int test_cpp_constructor(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 LifecycleClass obj;
 int result;
 
 LifecycleClass_LifecycleClass(&obj,5);
 /* try { // try from 00102335 to 00102356 has its CatchHandler @ 0010238b */
 iVar1 = LifecycleClass_getData(&obj,2);
 iVar2 = LifecycleClass_getInstanceCount();
 LifecycleClass__LifecycleClass(&obj);
 iVar3 = LifecycleClass_getInstanceCount();
 return iVar3 * 1000 + iVar2 + iVar1;
}



/* Function: call_virtual_func @ 001023b0 */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 int x_local;
 Base *obj_local;
 
 iVar1 = ((int (*)(Base *,ulong))(*obj->_vptr_Base))(obj,(ulong)(uint)x);
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 001023e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int r4;
 int r3;
 Base *pd;
 Base *pb;
 int r2;
 int r1;
 Derived derived;
 Base base_obj;
 
 Base_Base(&base_obj);
 /* try { // try from 001023f1 to 001023fe has its CatchHandler @ 001024ae */
 Derived_Derived(&derived,3);
 /* try { // try from 00102404 to 00102475 has its CatchHandler @ 001024bf */
 iVar1 = Base_virtual_func(&base_obj,5);
 iVar2 = Derived_virtual_func(&derived,5);
 iVar3 = call_virtual_func(&base_obj,5);
 iVar4 = call_virtual_func(&derived.super_Base,5);
 Derived__Derived(&derived);
 Base__Base(&base_obj);
 return iVar1 + iVar2 + iVar3 + iVar4;
}



/* Function: test_cpp_multiple_inheritance @ 001024f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
 int iVar1;
 int iVar2;
 MultiDerived *local_60;
 int ptr_equal;
 int r2;
 int r1;
 BaseB *pb;
 BaseA *pa;
 MultiDerived obj;
 
 MultiDerived_MultiDerived(&obj);
 obj.super_BaseA.dataA = 100;
 obj.super_BaseB.dataB = 200;
  local_60 = (MultiDerived *)0x0;
  if ((void *)&stack0x00000000 != (void *)0x28) {
  local_60 = (MultiDerived *)&obj.super_BaseB;
  }
  /* try { // try from 00102549 to 00102564 has its CatchHandler @ 001025a9 */
  iVar1 = ((int (*)())(*obj.super_BaseA._vptr_BaseA))();
  iVar2 = ((int (*)())(*((local_60->super_BaseA)._vptr_BaseA)))();
 MultiDerived__MultiDerived(&obj);
 return iVar1 + iVar2 + (uint)(&obj != local_60);
}



/* Function: test_cpp_diamond_inheritance @ 001025d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

int test_cpp_diamond_inheritance(void)

{
 int iVar1;
 int iVar2;
 _func_int *local_60;
 int r2;
 int r1;
 VirtualBase *pb;
 DiamondDerived obj;
 
 DiamondDerived_DiamondDerived(&obj);
 *(undefined4 *)((long)&obj.super_MiddleA.dataA + (long)obj.super_MiddleA._vptr_MiddleA[-3]) = 0x32;
  local_60 = (_func_int *)0x0;
  if ((void *)&stack0x00000000 != (void *)0x38) {
  local_60 = (_func_int *)((char *)obj.super_MiddleA._vptr_MiddleA[-3] + (long)&obj.super_MiddleA);
  }
  /* try { // try from 0010262a to 00102655 has its CatchHandler @ 0010267f */
  iVar1 = ((int (*)(void))(*local_60))();
 *(undefined4 *)((long)&obj.super_MiddleA.dataA + (long)obj.super_MiddleA._vptr_MiddleA[-3]) = 100;
 iVar2 = ((int (*)(void))(*local_60))();
 DiamondDerived__DiamondDerived(&obj);
 return iVar1 + iVar2;
}



/* Function: test_cpp_operator_overload @ 001026a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 bool bVar1;
 int iVar2;
 bool eq;
 Point p3;
 Point p2;
 Point p1;
 
 Point_Point(&p1,1,2);
 Point_Point(&p2,3,4);
 p3 = Point_operator_plus(&p1,&p2);
 bVar1 = Point_operator_eq(&p1,&p2);
 Point_operator_inc(&p3);
 iVar2 = 10;
 if (bVar1) {
 iVar2 = 0;
 }
 return p3.x + p3.y + iVar2;
}



/* Function: test_cpp_template_func @ 00102720 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 int b;
 int a;
 double r2;
 int r1;
 
 r1 = template_max_int(3,7);
 r2 = template_max_double(2.5,1.5);
 a = 10;
 b = 0x14;
 template_swap_int(&a,&b);
 return r1 + (int)r2 + a + b;
}



/* Function: test_cpp_template_class @ 00102790 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
 int iVar1;
 int iVar2;
 double dVar3;
 double r3;
 Container_double double_container;
 int r2;
 int r1;
 Container_int int_container;
 
 Container_int_Container(&int_container);
 Container_int_push(&int_container,10);
 Container_int_push(&int_container,0x14);
 Container_int_push(&int_container,0x1e);
 iVar1 = Container_int_get(&int_container,0);
 iVar2 = Container_int_getSize(&int_container);
 Container_double_Container(&double_container);
 Container_double_push(&double_container,3.14);
 dVar3 = Container_double_get(&double_container,0);
 return iVar1 + iVar2 + (int)dVar3;
}



/* Function: test_cpp_lambda @ 00102840 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
 int iVar1;
 int iVar2;
 int r2;
 int r1;
 anon_class_1_0_00000001 lambda2;
 anon_class_16_2_b9b285fb lambda1;
 int capture_by_ref;
 int capture_by_value;
 
 capture_by_value = 10;
 capture_by_ref = 0x14;
 lambda1.capture_by_value = 10;
 lambda1.capture_by_ref = &capture_by_ref;
 iVar1 = test_cpp_lambda_anon_class_16_2_b9b285fb_operator_call(&lambda1,3);
 iVar2 = test_cpp_lambda_anon_class_1_0_00000001_operator_int__int(&lambda2,10,0x14);
 return iVar1 + iVar2;
}



/* Function: operator() @ 001028a0 */

/* DWARF original prototype: int operator()(anon_class_16_2_b9b285fb * this, int x) */

int __thiscall
test_cpp_lambda_anon_class_16_2_b9b285fb_operator_call(anon_class_16_2_b9b285fb *this_ptr,int x)

{
 int x_local;
 anon_class_16_2_b9b285fb *this_local;
 
 *this_ptr->capture_by_ref = *this_ptr->capture_by_ref + 5;
 return x * this_ptr->capture_by_value + *this_ptr->capture_by_ref;
}



/* Function: operator()<int,_int> @ 001028d0 */

/* DWARF original name: operator()<int, int>
 DWARF original prototype: int operator()<int,_int>(anon_class_1_0_00000001 * this, int a, int b)
 */

int __thiscall
test_cpp_lambda_anon_class_1_0_00000001_operator_int__int
 (anon_class_1_0_00000001 *this_ptr,int a,int b)

{
 int b_local;
 int a_local;
 anon_class_1_0_00000001 *this_local;
 
 return a + b;
}



/* Function: test_cpp_exception @ 001028f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 undefined4 *puVar1;
 DerivedException *e_1;
 BaseException *e_2;
 int e;
 int e_3;
 int result;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* try { // try from 00102912 to 00102921 has its CatchHandler @ 00102927 */
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 00102a50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 pointer __p;
 type piVar4;
 type *ptVar5;
 int *__p_00;
 pointer __p_01;
 int r3;
 unique_ptr_int_lambda ptr3;
 anon_class_1_0_00000001_for__M_head_impl deleter;
 int r2;
 unique_ptr_int_std_default_delete_int_array arr;
 int r1;
 unique_ptr_int_std_default_delete_int ptr2;
 unique_ptr_int_std_default_delete_int ptr1;
 
 __p = operator_new(4);
 *(int *)__p = 100;
 std_unique_ptr_int_std_default_delete_int_unique_ptr_std_default_delete_int_void
 (&ptr1,__p);
 /* try { // try from 00102a7f to 00102a83 has its CatchHandler @ 00102bce */
 piVar4 = std_unique_ptr_int_std_default_delete_int_operator_deref(&ptr1);
 *(int*)piVar4 = 200;
 ptVar5 = std_move_std_unique_ptr_int_std_default_delete_int_ref(&ptr1);
 std_unique_ptr_int_std_default_delete_int_unique_ptr(&ptr2,ptVar5);
 /* try { // try from 00102ab4 to 00102ad4 has its CatchHandler @ 00102bdf */
 piVar4 = std_unique_ptr_int_std_default_delete_int_operator_deref(&ptr2);
 iVar1 = *(int*)piVar4;
 __p_00 = operator_new__(0x14);
 *__p_00 = 1;
 __p_00[1] = 2;
 __p_00[2] = 3;
 __p_00[3] = 4;
 __p_00[4] = 5;
 std_unique_ptr_int_array_std_default_delete_int_array_unique_ptr_int_ptr_std_default_delete_int_array_void_bool
 (&arr,__p_00);
 /* try { // try from 00102b15 to 00102b3a has its CatchHandler @ 00102bf0 */
 piVar4 = std_unique_ptr_int_array_std_default_delete_int_array_operator_index(&arr,2);
 iVar2 = *piVar4;
 __p_01 = operator_new(4);
 *(int *)__p_01 = 500;
 std_unique_ptr_int_lambda_unique_ptr_lambda_void(&ptr3,__p_01,(anon_class_1_0_00000001_for__M_head_impl *)&deleter);
 /* try { // try from 00102b6f to 00102b73 has its CatchHandler @ 00102c01 */
 piVar4 = std_unique_ptr_int_lambda_operator_deref(&ptr3);
 iVar3 = *(int*)piVar4;
 std_unique_ptr_int_lambda_destructor(&ptr3);
 std_unique_ptr_int_array_std_default_delete_int_array_destructor(&arr);
 std_unique_ptr_int_std_default_delete_int_destructor(&ptr2);
 std_unique_ptr_int_std_default_delete_int_destructor(&ptr1);
 return iVar1 + iVar2 + iVar3;
}



/* Function: unique_ptr<(lambda_at_src/5-1.cpp:445:20),_void> @ 00102c40 */

/* DWARF original name: unique_ptr<(lambda at src/5-1.cpp:445:20), void>
 DWARF original prototype: void
 unique_ptr<(lambda_at_src/5-1.cpp:445:20),_void>(unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)>
 * this_ptr, pointer __p, deleter_type * __d) */

void __thiscall
std_unique_ptr_int_lambda_unique_ptr_lambda_void
 (unique_ptr_int_lambda *this_ptr,pointer __p,anon_class_1_0_00000001_for__M_head_impl *__d)

{
 deleter_type *__d_local;
 pointer __p_local;
 unique_ptr_int_lambda *this_local;
 
 /* try { // try from 00102c60 to 00102c64 has its CatchHandler @ 00102c70 */
 std___uniq_ptr_data_int_lambda_true_false___uniq_ptr_impl
 (&this_ptr->_M_t,__p,__d);
 return;
}



/* Function: operator* @ 00102c80 */

/* DWARF original prototype: int* operator*(unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)> * this_ptr_ptr)
 */

int* __thiscall
std_unique_ptr_int_lambda_operator_deref
 (unique_ptr_int_lambda *this_ptr);

int* __thiscall
std_unique_ptr_int_lambda_operator_deref
 (unique_ptr_int_lambda *this_ptr)

{
 int* piVar1;
 unique_ptr_int_lambda *this_local;
 
 piVar1 = std_unique_ptr_int_lambda_get(this_ptr);
 return piVar1;
}



/* Function: ~unique_ptr @ 00102cb0 */

/* DWARF original prototype: void ~unique_ptr(unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)> *
 this_ptr_ptr) */

void __thiscall
std_unique_ptr_int_lambda_destructor
 (unique_ptr_int_lambda *this_ptr);

void __thiscall
std_unique_ptr_int_lambda_destructor
 (unique_ptr_int_lambda *this_ptr)

{
 int **__t;
 deleter_type *this_00;
 int **ppiVar1;
 int **__ptr;
 unique_ptr_int_lambda *this_local;
 
 /* try { // try from 00102cc4 to 00102d09 has its CatchHandler @ 00102d25 */
 __t = std___uniq_ptr_impl_int_lambda_M_ptr
 ((__uniq_ptr_impl_int_lambda *)this_ptr);
 if (*__t != (pointer)0x0) {
 this_00 = std_unique_ptr_int_lambda_get_deleter(this_ptr);
 ppiVar1 = std_move_int_ptr_ref(__t);
 std_Head_base_1UL_lambda_true_anon_class_1_0_00000001_for__M_head_impl_operator_call
 (this_00,*ppiVar1);
 }
 *__t = (pointer)0x0;
 return;
}



/* Function: test_cpp_rtti @ 00102d30 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 bool bVar1;
 int iVar2;
 RTTIDerivedA *this_ptr;
 RTTIDerivedB *this_00;
 char *__s;
 size_t sVar3;
 RTTIDerivedB *local_70;
 RTTIDerivedA *local_60;
 RTTIDerivedB *derivedB;
 RTTIDerivedA *derivedA;
 int result;
 RTTIBase *obj2;
 RTTIBase *obj1;
 
 this_ptr = operator_new(8);
 memset(this_ptr,0,8);
 RTTIDerivedA::RTTIDerivedA(this_ptr);
 this_00 = operator_new(8);
 memset(this_00,0,8);
 RTTIDerivedB::RTTIDerivedB(this_00);
 result = 0;
 if (this_ptr == (RTTIDerivedA *)0x0) {
 __cxa_bad_typeid();
 }
 bVar1 = std::type_info::operator==
 ((type_info *)(this_ptr->super_RTTIBase)._vptr_RTTIBase[-1],
 (type_info *)&RTTIDerivedA::typeinfo);
 if (bVar1) {
 result = 10;
 }
 if (this_00 == (RTTIDerivedB *)0x0) {
 __cxa_bad_typeid();
 }
 bVar1 = std::type_info::operator==
 ((type_info *)(this_00->super_RTTIBase)._vptr_RTTIBase[-1],
 (type_info *)&RTTIDerivedB::typeinfo);
 if (bVar1) {
 result = result + 0x14;
 }
 if (this_ptr == (RTTIDerivedA *)0x0) {
 local_60 = (RTTIDerivedA *)0x0;
 }
 else {
 local_60 = (RTTIDerivedA *)__dynamic_cast(this_ptr,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 }
 if (local_60 != (RTTIDerivedA *)0x0) {
 iVar2 = RTTIDerivedA::derivedA_data(local_60);
 result = iVar2 + result;
 }
 if (this_00 == (RTTIDerivedB *)0x0) {
 local_70 = (RTTIDerivedB *)0x0;
 }
 else {
 local_70 = (RTTIDerivedB *)__dynamic_cast(this_00,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0)
 ;
 }
 if (local_70 != (RTTIDerivedB *)0x0) {
 iVar2 = RTTIDerivedB::derivedB_data(local_70);
 result = iVar2 + result;
 }
 if (this_ptr == (RTTIDerivedA *)0x0) {
 __cxa_bad_typeid();
 }
 __s = std::type_info::name((type_info *)(this_ptr->super_RTTIBase)._vptr_RTTIBase[-1]);
 sVar3 = strlen(__s);
  if (this_ptr != (RTTIDerivedA *)0x0) {
 ((void (*)())((this_ptr->super_RTTIBase)._vptr_RTTIBase[1]))();
 }
 if (this_00 != (RTTIDerivedB *)0x0) {
 ((void (*)())((this_00->super_RTTIBase)._vptr_RTTIBase[1]))();
 }
 return result + (int)sVar3;
}



/* Function: test_cpp_oo_features @ 00102f70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

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

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: __uniq_ptr_impl @ 001030a0 */

/* DWARF original prototype: void
 __uniq_ptr_impl(__uniq_ptr_data<int,_(lambda_at_src/5-1.cpp:445:20),_true,_false> * this_ptr_ptr, pointer
 param_1, anon_class_1_0_00000001_for__M_head_impl * param_2) */

void __thiscall
std___uniq_ptr_data_int_lambda_true_false___uniq_ptr_impl
 (__uniq_ptr_data_int_lambda_true_false *this_ptr,pointer param_1,
 anon_class_1_0_0001_for__M_head_impl *param_2)

{
 anon_class_1_0_00000001_for__M_head_impl *param_2_local;
 pointer param_1_local;
 __uniq_ptr_data_int_lambda_true_false *this_local;
 
 std___uniq_ptr_impl_int_lambda___uniq_ptr_impl_const_lambda_ref
 (&this_ptr->super___uniq_ptr_impl_int_lambda,param_1,param_2);
 return;
}



/* Function: __uniq_ptr_impl<const_(lambda_at_src/5-1.cpp:445:20)_&> @ 001030d0 */

/* DWARF original name: __uniq_ptr_impl<const (lambda at src/5-1.cpp:445:20) &>
 DWARF original prototype: void
 __uniq_ptr_impl<const_(lambda_at_src/5-1.cpp:445:20)_&>(__uniq_ptr_impl<int,_(lambda_at_src/5-1.cpp:445:20)>
 * this_ptr_ptr, pointer __p, anon_class_1_0_00000001_for__M_head_impl * __d) */

void __thiscall
std___uniq_ptr_impl_int_lambda___uniq_ptr_impl_const_lambda_ref
 (__uniq_ptr_impl_int_lambda *this_ptr,pointer __p,
 anon_class_1_0_00000001_for__M_head_impl *__d)

{
 anon_class_1_0_00000001_for__M_head_impl *__a2;
 anon_class_1_0_00000001_for__M_head_impl *__d_local;
 pointer __p_local;
 __uniq_ptr_impl_int_lambda *this_local;
 
 __p_local = __p;
 this_local = this_ptr;
 __a2 = std_forward_const_lambda_ref(__d);
 std_tuple_int_ptr_lambda_tuple_int_ptr_ref_const_lambda_ref_true(&this_ptr->_M_t,&__p_local,__a2);
 return;
}



/* Function: forward<const_(lambda_at_src/5-1.cpp:445:20)_&> @ 00103110 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: forward<const (lambda at src/5-1.cpp:445:20) &> */

anon_class_1_0_00000001_for__M_head_impl *
std_forward_const_lambda_ref(anon_class_1_0_00000001_for__M_head_impl *__t)

{
 anon_class_1_0_00000001_for__M_head_impl *__t_local;
 
 return __t;
}



/* Function: tuple<int_*&,_const_(lambda_at_src/5-1.cpp:445:20)_&,_true> @ 00103120 */

/* DWARF original name: tuple<int *&, const (lambda at src/5-1.cpp:445:20) &, true>
 DWARF original prototype: void
 tuple<int_*&,_const_(lambda_at_src/5-1.cpp:445:20)_&,_true>(tuple<int_*,_(lambda_at_src/5-1.cpp:445:20)>
 * this_ptr_ptr, int * * __a1, anon_class_1_0_00000001_for__M_head_impl * __a2) */

void __thiscall
std_tuple_int_ptr_lambda_tuple_int_ptr_ref_const_lambda_ref_true
 (tuple_int_ptr_lambda *this_ptr,int **__a1,
 anon_class_1_0_00000001_for__M_head_impl *__a2)

{
 int **__head;
 anon_class_1_0_00000001_for__M_head_impl *__tail;
 anon_class_1_0_00000001_for__M_head_impl *__a2_local;
 int **__a1_local;
 tuple_int_ptr_lambda *this_local;
 
 __head = std_forward_int_ptr_ref(__a1);
 __tail = std_forward_const_lambda_ref(__a2);
 /* try { // try from 0010315d to 00103161 has its CatchHandler @ 0010316d */
 std_Tuple_impl_0UL_int_ptr_lambda_Tuple_impl_int_ptr_ref_const_lambda_ref_void
 (&this_ptr->super__Tuple_impl_0UL_int_ptr_lambda,__head,__tail);
 return;
}



/* Function: _Tuple_impl<int_*&,_const_(lambda_at_src/5-1.cpp:445:20)_&,_void> @ 00103180 */

/* DWARF original name: _Tuple_impl<int *&, const (lambda at src/5-1.cpp:445:20) &, void>
 DWARF original prototype: void
 _Tuple_impl<int_*&,_const_(lambda_at_src/5-1.cpp:445:20)_&,_void>(_Tuple_impl<0UL,_int_*,_(lambda_at_src/5-1.cpp:445:20)>
 * this_ptr_ptr, int * * __head, anon_class_1_0_00000001_for__M_head_impl * __tail) */

void __thiscall
std_Tuple_impl_0UL_int_ptr_lambda_Tuple_impl_int_ptr_ref_const_lambda_ref_void
 (_Tuple_impl_0UL_int_ptr_lambda *this_ptr,int **__head,
 anon_class_1_0_00000001_for__M_head_impl *__tail)

{
 anon_class_1_0_00000001_for__M_head_impl *__head_00;
 int **__h;
 anon_class_1_0_00000001_for__M_head_impl *__tail_local;
 int **__head_local;
 _Tuple_impl_0UL_int_ptr_lambda *this_local;
 
 __head_00 = std_forward_const_lambda_ref(__tail);
 std_Tuple_impl_1UL_lambda_Tuple_impl(&this_ptr->super__Tuple_impl_1UL_lambda,__head_00);
 __h = std_forward_int_ptr_ref(__head);
 std_Head_base_0UL_int_ptr_false_Head_base_int_ptr_ref((_Head_base<0UL,_int_*,_false> *)this_ptr,__h);
 return;
}



/* Function: _Tuple_impl @ 001031e0 */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<1UL,_(lambda_at_src/5-1.cpp:445:20)> *
 this_ptr_ptr, anon_class_1_0_00000001_for__M_head_impl * __head) */

void __thiscall
std_Tuple_impl_1UL_lambda_Tuple_impl
 (_Tuple_impl_1UL_lambda *this_ptr,
 anon_class_1_0_00000001_for__M_head_impl *__head)

{
 anon_class_1_0_00000001_for__M_head_impl *__head_local;
 _Tuple_impl_1UL_lambda *this_local;
 
 std_Head_base_1UL_lambda_true_Head_base
 (&this_ptr->super__Head_base_1UL_lambda_true,__head);
 return;
}



/* Function: _Head_base @ 00103210 */

/* DWARF original prototype: void _Head_base(_Head_base<1UL,_(lambda_at_src/5-1.cpp:445:20),_true> *
 this_ptr_ptr, anon_class_1_0_00000001_for__M_head_impl * __h) */

void __thiscall
std_Head_base_1UL_lambda_true_Head_base
 (_Head_base_1UL_lambda_true *this_ptr,
 anon_class_1_0_00000001_for__M_head_impl *__h)

{
 anon_class_1_0_00000001_for__M_head_impl *__h_local;
 _Head_base_1UL_lambda_true *this_local;
 
 return;
}



/* Function: _M_ptr @ 00103220 */

/* DWARF original prototype: pointer * _M_ptr(__uniq_ptr_impl<int,_(lambda_at_src/5-1.cpp:445:20)> *
 this_ptr_ptr) */

int ** __thiscall
std___uniq_ptr_impl_int_lambda_M_ptr
 (__uniq_ptr_impl_int_lambda *this_ptr)

{
 int **ppiVar1;
 __uniq_ptr_impl_int_lambda *this_local;
 
 ppiVar1 = std_get_0UL_int_ptr_lambda(&this_ptr->_M_t);
 return ppiVar1;
}



/* Function: get_deleter @ 00103240 */

/* DWARF original prototype: deleter_type *
 get_deleter(unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)> * this_ptr_ptr) */

deleter_type * __thiscall
std_unique_ptr_int_lambda_get_deleter
 (unique_ptr_int_lambda *this_ptr)

{
 anon_class_1_0_00000001_for__M_head_impl *paVar1;
 unique_ptr_int_lambda *this_local;
 
 /* try { // try from 00103250 to 00103254 has its CatchHandler @ 00103268 */
 paVar1 = std___uniq_ptr_impl_int_lambda_M_deleter
 ((__uniq_ptr_impl_int_lambda *)this_ptr);
 return paVar1;
}



/* Function: operator() @ 00103270 */

/* DWARF original prototype: void operator()(anon_class_1_0_00000001_for__M_head_impl * this_ptr_ptr, int *
 p) */

void __thiscall
std_Head_base_1UL_lambda_true_anon_class_1_0_00000001_for__M_head_impl_operator_call
 (anon_class_1_0_00000001_for__M_head_impl *this_ptr,int *p)

{
 int *p_local;
 anon_class_1_0_00000001_for__M_head_impl *this_local;
 
 *p = -1;
 if (p != (int *)0x0) {
 operator_delete(p);
 }
 return;
}



/* Function: get<0UL,_int_*,_(lambda_at_src/5-1.cpp:445:20)> @ 001032b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<0UL, int *, (lambda at src/5-1.cpp:445:20)> */

int **
std_get_0UL_int_ptr_lambda
 (tuple_int_ptr_lambda *__t)

{
 int **ppiVar1;
 tuple_int_ptr_lambda *__t_local;
 
 ppiVar1 = std___get_helper_0UL_int_ptr_lambda
 (&__t->super__Tuple_impl_0UL_int_ptr_lambda);
 return ppiVar1;
}



/* Function: __get_helper<0UL,_int_*,_(lambda_at_src/5-1.cpp:445:20)> @ 001032d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<0UL, int *, (lambda at src/5-1.cpp:445:20)> */

int ** std___get_helper_0UL_int_ptr_lambda
 (_Tuple_impl_0UL_int_ptr_lambda *__t)

{
 int **ppiVar1;
 _Tuple_impl_0UL_int_ptr_lambda *__t_local;
 
 ppiVar1 = std_Tuple_impl_0UL_int_ptr_lambda_M_head(__t);
 return ppiVar1;
}



/* Function: _M_head @ 001032f0 */

int ** std_Tuple_impl_0UL_int_ptr_lambda_M_head
 (_Tuple_impl_0UL_int_ptr_lambda *__t)

{
 int **ppiVar1;
 _Tuple_impl_0UL_int_ptr_lambda *__t_local;
 
 ppiVar1 = std_Head_base_0UL_int_ptr_false_M_head((_Head_base<0UL,_int_*,_false> *)__t);
 return ppiVar1;
}



/* Function: _M_deleter @ 00103310 */

/* DWARF original prototype: anon_class_1_0_00000001_for__M_head_impl *
 _M_deleter(__uniq_ptr_impl<int,_(lambda_at_src/5-1.cpp:445:20)> * this_ptr) */

anon_class_1_0_00000001_for__M_head_impl * __thiscall
std___uniq_ptr_impl_int_lambda_M_deleter
 (__uniq_ptr_impl_int_lambda *this_ptr)

{
 anon_class_1_0_00000001_for__M_head_impl *p_Var1;
 __uniq_ptr_impl_int_lambda *this_local;
 
 p_Var1 = std_get_1UL_int_ptr_lambda(&this_ptr->_M_t);
 return p_Var1;
}



/* Function: get<1UL,_int_*,_(lambda_at_src/5-1.cpp:445:20)> @ 00103330 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<1UL, int *, (lambda at src/5-1.cpp:445:20)> */

anon_class_1_0_00000001_for__M_head_impl *
std_get_1UL_int_ptr_lambda
 (tuple_int_ptr_lambda *__t)

{
 anon_class_1_0_00000001_for__M_head_impl *paVar1;
 tuple_int_ptr_lambda *__t_local;
 
 paVar1 = std___get_helper_1UL_lambda
 ((_Tuple_impl<1UL,_(lambda_at_src_5_1_cpp:445:20)> *)__t);
 return paVar1;
}



/* Function: __get_helper<1UL,_(lambda_at_src/5-1.cpp:445:20)> @ 00103350 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<1UL, (lambda at src/5-1.cpp:445:20)> */

anon_class_1_0_00000001_for__M_head_impl *
std___get_helper_1UL_lambda
 (_Tuple_impl_1UL_lambda *__t)

{
 anon_class_1_0_00000001_for__M_head_impl *paVar1;
 _Tuple_impl_1UL_lambda *__t_local;
 
 paVar1 = std_Tuple_impl_1UL_lambda_M_head(__t);
 return paVar1;
}



/* Function: _M_head @ 00103370 */

anon_class_1_0_00000001_for__M_head_impl *
std_Tuple_impl_1UL_lambda_M_head
 (_Tuple_impl_1UL_lambda *__t)

{
 anon_class_1_0_00000001_for__M_head_impl *paVar1;
 _Tuple_impl_1UL_lambda *__t_local;
 
 paVar1 = std_Head_base_1UL_lambda_true_M_head
 (&__t->super__Head_base_1UL_lambda_true);
 return paVar1;
}



/* Function: _M_head @ 00103390 */

anon_class_1_0_00000001_for__M_head_impl *
std_Head_base_1UL_lambda_true_M_head
 (_Head_base_1UL_lambda_true *__b)

{
 _Head_base_1UL_lambda_true *__b_local;
 
 return &__b->_M_head_impl;
}



/* Function: get @ 001033a0 */

/* DWARF original prototype: pointer get(unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)> * this_ptr_ptr) */

int * __thiscall
std_unique_ptr_int_lambda_get
 (unique_ptr_int_lambda *this_ptr)

{
 int *piVar1;
 unique_ptr_int_lambda *this_local;
 
 /* try { // try from 001033b0 to 001033b4 has its CatchHandler @ 001033c8 */
 piVar1 = (int *)std___uniq_ptr_impl_int_lambda_M_ptr
 ((__uniq_ptr_impl_int_lambda *)this_ptr);
 return piVar1;
}



/* Function: _M_ptr @ 001033d0 */

/* DWARF original prototype: pointer _M_ptr(__uniq_ptr_impl<int,_(lambda_at_src/5-1.cpp:445:20)> *
 this_ptr_ptr) */

int * __thiscall
std___uniq_ptr_impl_int_lambda_M_ptr
 (__uniq_ptr_impl_int_lambda *this_ptr)

{
 int **ppiVar1;
 __uniq_ptr_impl_int_lambda *this_local;
 
 ppiVar1 = std_get_0UL_int_ptr_lambda(&this_ptr->_M_t);
 return *ppiVar1;
}



/* Function: get<0UL,_int_*,_(lambda_at_src/5-1.cpp:445:20)> @ 001033f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<0UL, int *, (lambda at src/5-1.cpp:445:20)> */

int **
std_get_0UL_int_ptr_lambda
 (tuple_int_ptr_lambda *__t)

{
 int **ppiVar1;
 tuple_int_ptr_lambda *__t_local;
 
 ppiVar1 = std___get_helper_0UL_int_ptr_lambda
 (&__t->super__Tuple_impl_0UL_int_ptr_lambda);
 return ppiVar1;
}



/* Function: __get_helper<0UL,_int_*,_(lambda_at_src/5-1.cpp:445:20)> @ 00103410 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<0UL, int *, (lambda at src/5-1.cpp:445:20)> */

int ** std___get_helper_0UL_int_ptr_lambda
 (_Tuple_impl_0UL_int_ptr_lambda *__t)

{
 int **ppiVar1;
 _Tuple_impl_0UL_int_ptr_lambda *__t_local;
 
 ppiVar1 = std_Tuple_impl_0UL_int_ptr_lambda_M_head(__t);
 return ppiVar1;
}



/* Function: _M_head @ 00103430 */

int ** std_Tuple_impl_0UL_int_ptr_lambda_M_head
 (_Tuple_impl_0UL_int_ptr_lambda *__t)

{
 int **ppiVar1;
 _Tuple_impl_0UL_int_ptr_lambda *__t_local;
 
 ppiVar1 = std_Head_base_0UL_int_ptr_false_M_head((_Head_base<0UL,_int_*,_false> *)__t);
 return ppiVar1;
}



/* Function: SimpleClass @ 00103450 */

/* DWARF original prototype: void SimpleClass(SimpleClass * this, int v, char * n) */

void __thiscall SimpleClass_SimpleClass(SimpleClass *this_ptr,int v,char *n)

{
 char *n_local;
 int v_local;
 SimpleClass *this_local;
 
 this_ptr->value = v;
 strncpy(this_ptr->name,n,0x1f);
 this_ptr->name[0x1f] = '\0';
 return;
}



/* Function: setValue @ 00103490 */

/* DWARF original prototype: void setValue(SimpleClass * this, int v) */

void __thiscall SimpleClass_setValue(SimpleClass *this_ptr,int v)

{
 int v_local;
 SimpleClass *this_local;
 
 this_ptr->value = v;
 return;
}



/* Function: getValue @ 001034b0 */

/* DWARF original prototype: int getValue(SimpleClass * this) */

int __thiscall SimpleClass_getValue(SimpleClass *this_ptr)

{
 SimpleClass *this_local;
 
 return this_ptr->value;
}



/* Function: compute @ 001034c0 */

/* DWARF original prototype: int compute(SimpleClass * this, int x) */

int __thiscall SimpleClass_compute(SimpleClass *this_ptr,int x)

{
 int iVar1;
 size_t sVar2;
 int x_local;
 SimpleClass *this_local;
 
 iVar1 = this_ptr->value;
 sVar2 = strlen(this_ptr->name);
 return iVar1 * x + (int)sVar2;
}



/* Function: getClassID @ 00103500 */

int SimpleClass::getClassID(void)

{
 return 0x1234;
}



/* Function: LifecycleClass @ 00103510 */

/* DWARF original prototype: void LifecycleClass(LifecycleClass * this, size_t s) */

void __thiscall LifecycleClass_LifecycleClass(LifecycleClass *this_ptr,size_t s)

{
 undefined1 auVar1 [16];
 ulong uVar2;
 int *piVar3;
 size_t i;
 size_t s_local;
 LifecycleClass *this_local;
 
 this_ptr->size = s;
 auVar1._8_8_ = 0;
 auVar1._0_8_ = s;
 uVar2 = SUB168(auVar1 * ZEXT816(4),0);
 if (SUB168(auVar1 * ZEXT816(4),8) != 0) {
 uVar2 = 0xffffffffffffffff;
 }
 piVar3 = operator_new__(uVar2);
 this_ptr->data = piVar3;
 for (i = 0; i < s; i = i + 1) {
 this_ptr->data[i] = (int)i * 10;
 }
 instance_count = instance_count + 1;
 return;
}



/* Function: getData @ 001035b0 */

/* DWARF original prototype: int getData(LifecycleClass * this, size_t idx) */

int __thiscall LifecycleClass_getData(LifecycleClass *this_ptr,size_t idx)

{
 int local_24;
 size_t idx_local;
 LifecycleClass *this_local;
 
 if (idx < this_ptr->size) {
 local_24 = this_ptr->data[idx];
 }
 else {
 local_24 = -1;
 }
 return local_24;
}



/* Function: getInstanceCount @ 00103600 */

int LifecycleClass_getInstanceCount(void)

{
 return instance_count;
}



/* Function: ~LifecycleClass @ 00103610 */

/* DWARF original prototype: void ~LifecycleClass(LifecycleClass * this) */

void __thiscall LifecycleClass__LifecycleClass(LifecycleClass *this_ptr)

{
 LifecycleClass *this_local;
 
 if (this_ptr->data != (int *)0x0) {
 operator_delete__(this_ptr->data);
 }
 instance_count = instance_count + -1;
 return;
}



/* Function: Base @ 00103650 */

/* DWARF original prototype: void Base(Base * this) */

void __thiscall Base_Base(Base *this_ptr)

{
 Base *this_local;
 
 this_ptr->_vptr_Base = &PTR_virtual_func_00108878;
 return;
}



/* Function: Derived @ 00103670 */

/* DWARF original prototype: void Derived(Derived * this, int m) */

void __thiscall Derived_Derived(Derived *this_ptr,int m)

{
 int m_local;
 Derived *this_local;
 
 Base_Base(&this_ptr->super_Base);
 (this_ptr->super_Base)._vptr_Base = &PTR_virtual_func_001088b8;
 this_ptr->multiplier = m;
 return;
}



/* Function: virtual_func @ 001036b0 */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int __thiscall Base_virtual_func(Base *this_ptr,int x)

{
 int x_local;
 Base *this_local;
 
 return x + 1;
}



/* Function: virtual_func @ 001036d0 */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int __thiscall Derived_virtual_func(Derived *this_ptr,int x)

{
 int x_local;
 Derived *this_local;
 
 return x * this_ptr->multiplier;
}



/* Function: ~Derived @ 001036f0 */

/* DWARF original prototype: void ~Derived(Derived * this) */

void __thiscall Derived__Derived(Derived *this_ptr)

{
 Derived *this_local;
 
 Base__Base(&this_ptr->super_Base);
 return;
}



/* Function: ~Base @ 00103710 */

/* DWARF original prototype: void ~Base(Base * this) */

void __thiscall Base__Base(Base *this_ptr)

{
 Base *this_local;
 
 return;
}



/* Function: MultiDerived @ 00103720 */

/* DWARF original prototype: void MultiDerived(MultiDerived * this) */

void __thiscall MultiDerived_MultiDerived(MultiDerived *this_ptr)

{
 MultiDerived *this_local;
 
 BaseA_BaseA(&this_ptr->super_BaseA);
 BaseB_BaseB(&this_ptr->super_BaseB);
 (this_ptr->super_BaseA)._vptr_BaseA = &PTR_funcA_00108900;
 (this_ptr->super_BaseB)._vptr_BaseB = &PTR__ZThn16_N12MultiDerived5funcBEv_00108930;
 return;
}



/* Function: ~MultiDerived @ 00103770 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this) */

void __thiscall MultiDerived__MultiDerived(MultiDerived *this_ptr)

{
 MultiDerived *this_local;
 
 BaseB__BaseB(&this_ptr->super_BaseB);
 BaseA__BaseA(&this_ptr->super_BaseA);
 return;
}



/* Function: DiamondDerived @ 001037a0 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void DiamondDerived(DiamondDerived * this) */

void __thiscall DiamondDerived_DiamondDerived(DiamondDerived *this_ptr)

{
 DiamondDerived *this_local;
 
 VirtualBase_VirtualBase((VirtualBase *)&this_ptr->field_0x20);
 MiddleA_MiddleA(&this_ptr->super_MiddleA,&PTR_construction_vtable_24__00108a90);
 MiddleB_MiddleB((MiddleB *)&(this_ptr->super_MiddleA).field_0x10,
 &PTR_construction_vtable_24__00108aa0);
 (this_ptr->super_MiddleA)._vptr_MiddleA = (void **)0x108a08;
 *(undefined8 *)&this_ptr->field_0x20 = 0x108a70;
 *(undefined8 *)&(this_ptr->super_MiddleA).field_0x10 = 0x108a38;
 return;
}



/* Function: ~DiamondDerived @ 00103830 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this) */

void __thiscall DiamondDerived__DiamondDerived(DiamondDerived *this_ptr)

{
 DiamondDerived *this_local;
 
 DiamondDerived__DiamondDerived(this_ptr,&VTT);
 VirtualBase__VirtualBase((VirtualBase *)&this_ptr->field_0x20);
 return;
}



/* Function: Point @ 00103870 */

/* DWARF original prototype: void Point(Point * this, int _x, int _y) */

void __thiscall Point_Point(Point *this_ptr,int _x,int _y)

{
 int _y_local;
 int _x_local;
 Point *this_local;
 
 this_ptr->x = _x;
 this_ptr->y = _y;
 return;
}



/* Function: operator+ @ 00103890 */

/* DWARF original prototype: Point operator+(Point * this, Point * other) */

Point __thiscall Point_operator_plus(Point *this_ptr,Point *other)

{
 Point *other_local;
 Point *this_local;
 Point local_10;
 
 Point_Point(&local_10,this_ptr->x + other->x,this_ptr->y + other->y);
 return local_10;
}



/* Function: operator== @ 001038d0 */

/* DWARF original prototype: bool operator==(Point * this, Point * other) */

bool __thiscall Point_operator_eq(Point *this_ptr,Point *other)

{
 bool local_19;
 Point *other_local;
 Point *this_local;
 
 local_19 = false;
 if (this_ptr->x == other->x) {
 local_19 = this_ptr->y == other->y;
 }
 return local_19;
}



/* Function: operator++ @ 00103920 */

/* DWARF original prototype: Point * operator++(Point * this) */

Point * __thiscall Point_operator_inc(Point *this_ptr)

{
 Point *this_local;
 
 this_ptr->x = this_ptr->x + 1;
 this_ptr->y = this_ptr->y + 1;
 return this_ptr;
}



/* Function: template_max<int> @ 00103940 */

int template_max_int(int a,int b)

{
 int local_14;
 int b_local;
 int a_local;
 
 local_14 = b;
 if (b < a) {
 local_14 = a;
 }
 return local_14;
}



/* Function: template_max<double> @ 00103970 */

double template_max_double(double a,double b)

{
 double local_20;
 double b_local;
 double a_local;
 
 local_20 = b;
 if (b < a) {
 local_20 = a;
 }
 return local_20;
}



/* Function: template_swap<int> @ 001039b0 */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 int temp;
 int *b_local;
 int *a_local;
 
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container @ 001039e0 */

/* DWARF original prototype: void Container(Container<int> * this) */

void __thiscall Container_int_Container(Container_int *this_ptr)

{
 Container_int *this_local;
 
 this_ptr->size = 0;
 return;
}



/* Function: push @ 00103a00 */

/* DWARF original prototype: void push(Container<int> * this, int value) */

void __thiscall Container_int_push(Container_int *this_ptr,int value)

{
 int iVar1;
 int value_local;
 Container_int *this_local;
 
 if (this_ptr->size < 10) {
 iVar1 = this_ptr->size;
 this_ptr->size = iVar1 + 1;
 this_ptr->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00103a40 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int __thiscall Container_int_get(Container_int *this_ptr,int idx)

{
 int idx_local;
 Container_int *this_local;
 int local_c;
 
 if ((idx < 0) || (this_ptr->size <= idx)) {
 local_c = 0;
 }
 else {
 local_c = this_ptr->data[idx];
 }
 return local_c;
}



/* Function: getSize @ 00103a90 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int __thiscall Container_int_getSize(Container_int *this_ptr)

{
 Container_int *this_local;
 
 return this_ptr->size;
}



/* Function: Container @ 00103ab0 */

/* DWARF original prototype: void Container(Container<double> * this) */

void __thiscall Container_double_Container(Container_double *this_ptr)

{
 Container_double *this_local;
 
 this_ptr->size = 0;
 return;
}



/* Function: push @ 00103ad0 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void __thiscall Container_double_push(Container_double *this_ptr,double value)

{
 int iVar1;
 double value_local;
 Container_double *this_local;
 
 if (this_ptr->size < 10) {
 iVar1 = this_ptr->size;
 this_ptr->size = iVar1 + 1;
 this_ptr->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00103b10 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double __thiscall Container_double_get(Container_double *this_ptr,int idx)

{
 int idx_local;
 Container_double *this_local;
 double local_10;
 
 if ((idx < 0) || (this_ptr->size <= idx)) {
 local_10 = 0.0;
 }
 else {
 local_10 = this_ptr->data[idx];
 }
 return local_10;
}



/* Function: getSize @ 00103b70 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int __thiscall Container_double_getSize(Container_double *this_ptr)

{
 Container_double *this_local;
 
 return this_ptr->size;
}



/* Function: unique_ptr<std::default_delete<int>,_void> @ 00103b90 */

/* DWARF original name: unique_ptr<std::default_delete<int>, void>
 DWARF original prototype: void
 unique_ptr<std::default_delete<int>,_void>(unique_ptr<int,_std::default_delete<int>_> * this,
 pointer __p) */

void __thiscall
std_unique_ptr_int_std_default_delete_int_unique_ptr_std_default_delete_int_void
 (unique_ptr_int_std_default_delete_int *this_ptr,pointer __p)

{
 pointer __p_local;
 unique_ptr_int_std_default_delete_int *this_local;
 
 /* try { // try from 00103ba8 to 00103bac has its CatchHandler @ 00103bb8 */
 std__uniq_ptr_data_int_std_default_delete_int_true_true__uniq_ptr_impl(&this_ptr->_M_t,__p);
 return;
}



/* Function: operator* @ 00103bc0 */

/* DWARF original prototype: type operator*(unique_ptr<int,_std::default_delete<int>_> * this) */

type __thiscall
std_unique_ptr_int_std_default_delete_int_operator_deref
 (unique_ptr_int_std_default_delete_int *this_ptr)

{
 pointer piVar1;
 unique_ptr_int_std_default_delete_int *this_local;
 
 piVar1 = std_unique_ptr_int_std_default_delete_int_get(this_ptr);
 return piVar1;
}



/* Function: move_std_unique_ptr_int_std_default_delete_int_ref @ 00103bf0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: move<std::unique_ptr<int, std::default_delete<int> > &> */

unique_ptr_int_std_default_delete_int * std_move_std_unique_ptr_int_std_default_delete_int_ref
 (unique_ptr_int_std_default_delete_int *__t)

{
 unique_ptr_int_std_default_delete_int *__t_local;
 
 return __t;
}



/* Function: unique_ptr @ 00103c00 */

/* DWARF original prototype: void unique_ptr(unique_ptr<int,_std::default_delete<int>_> * this,
 unique_ptr<int,_std::default_delete<int>_> * param_1) */

void __thiscall
std_unique_ptr_int_std_default_delete_int_unique_ptr
 (unique_ptr_int_std_default_delete_int *this_ptr,
 unique_ptr_int_std_default_delete_int *param_1)

{
 unique_ptr_int_std_default_delete_int *param_1_local;
 unique_ptr_int_std_default_delete_int *this_local;
 
 std__uniq_ptr_data_int_std_default_delete_int_true_true__uniq_ptr_data
 (&this_ptr->_M_t,&param_1->_M_t);
 return;
}



/* Function: unique_ptr<int_*,_std::default_delete<int[]>,_void,_bool> @ 00103c30 */

/* DWARF original name: unique_ptr<int *, std::default_delete<int[]>, void, bool>
 DWARF original prototype: void
 unique_ptr<int_*,_std::default_delete<int[]>,_void,_bool>(unique_ptr<int[],_std::default_delete<int[]>_>
 * this, int * __p) */

void __thiscall
std_unique_ptr_int_array_std_default_delete_int_array_unique_ptr_int_ptr_std_default_delete_int_array_void_bool
 (unique_ptr_int_std_default_delete_int_array *this_ptr,int *__p)

{
 int *__p_local;
 unique_ptr_int_std_default_delete_int_array *this_local;
 
 /* try { // try from 00103c48 to 00103c4c has its CatchHandler @ 00103c58 */
 std__uniq_ptr_data_int_std_default_delete_int_array_true_true__uniq_ptr_impl(&this_ptr->_M_t,__p);
 return;
}



/* Function: operator[] @ 00103c60 */

/* DWARF original prototype: type operator[](unique_ptr<int[],_std::default_delete<int[]>_> * this,
 size_t __i) */

type __thiscall
std_unique_ptr_int_array_std_default_delete_int_array_operator_index
 (unique_ptr_int_std_default_delete_int_array *this_ptr,size_t __i)

{
 pointer piVar1;
 size_t __i_local;
 unique_ptr_int_std_default_delete_int_array *this_local;
 
 piVar1 = std_unique_ptr_int_array_std_default_delete_int_array_get(this_ptr);
 return (type)((char*)piVar1 + __i * sizeof(int));
}



/* Function: ~unique_ptr @ 00103ca0 */

/* DWARF original prototype: void ~unique_ptr(unique_ptr<int[],_std::default_delete<int[]>_> * this)
 */

void __thiscall
std_unique_ptr_int_array_std_default_delete_int_array_destructor
 (unique_ptr_int_std_default_delete_int_array *this_ptr)

{
 pointer *ppiVar1;
 deleter_type *this_00;
 pointer *__ptr;
 unique_ptr_int_std_default_delete_int_array *this_local;
 
 ppiVar1 = std__uniq_ptr_impl_int_std_default_delete_int_array_M_ptr
 ((__uniq_ptr_impl<int,_std::default_delete<int[]>_> *)this_ptr);
 if (*ppiVar1 != (pointer)0x0) {
 this_00 = std_unique_ptr_int_array_std_default_delete_int_array_get_deleter(this_ptr);
 /* try { // try from 00103cde to 00103ce2 has its CatchHandler @ 00103cfe */
 default_delete_int_array_operator_call_int(this_00,(int*)*ppiVar1);
 }
 *ppiVar1 = (pointer)0x0;
 return;
}



/* Function: ~unique_ptr @ 00103d10 */

/* DWARF original prototype: void ~unique_ptr(unique_ptr<int,_std::default_delete<int>_> * this) */

void __thiscall
std_unique_ptr_int_std_default_delete_int_destructor
 (unique_ptr_int_std_default_delete_int *this_ptr)

{
 pointer *__t;
 deleter_type *this_00;
 type *ppiVar1;
 pointer *__ptr;
 unique_ptr_int_std_default_delete_int *this_local;
 
 __t = std__uniq_ptr_impl_int_std_default_delete_int_M_ptr
 ((__uniq_ptr_impl<int,_std::default_delete<int>_> *)this_ptr);
 if (*__t != (pointer)0x0) {
 this_00 = std_unique_ptr_int_std_default_delete_int_get_deleter(this_ptr);
 ppiVar1 = std_move_int_ptr_ref(__t);
 /* try { // try from 00103d58 to 00103d5c has its CatchHandler @ 00103d78 */
 default_delete_int_operator_call(this_00,(int*)*ppiVar1);
 }
 *__t = (pointer)0x0;
 return;
}



/* Function: RTTIDerivedA @ 00103d80 */

/* DWARF original prototype: void RTTIDerivedA(RTTIDerivedA * this) */

void __thiscall RTTIDerivedA_RTTIDerivedA(RTTIDerivedA *this_ptr)

{
 RTTIDerivedA *this_local;
 
 RTTIBase_RTTIBase(&this_ptr->super_RTTIBase);
 (this_ptr->super_RTTIBase)._vptr_RTTIBase = &PTR__RTTIDerivedA_00108d50;
 return;
}



/* Function: RTTIDerivedB @ 00103dc0 */

/* DWARF original prototype: void RTTIDerivedB(RTTIDerivedB * this) */

void __thiscall RTTIDerivedB_RTTIDerivedB(RTTIDerivedB *this_ptr)

{
 RTTIDerivedB *this_local;
 
 RTTIBase_RTTIBase(&this_ptr->super_RTTIBase);
 (this_ptr->super_RTTIBase)._vptr_RTTIBase = &PTR__RTTIDerivedB_00108da0;
 return;
}



/* Function: operator== @ 00103e00 */

/* DWARF original prototype: bool operator==(type_info * this, type_info * __arg) */

bool __thiscall std_type_info_operator_eq(type_info *this_ptr,type_info *__arg)

{
 int iVar1;
 bool local_29;
 bool local_19;
 type_info *__arg_local;
 type_info *this_local;
 
 local_19 = true;
 if (*(long *)(this_ptr + 8) != *(long *)(__arg + 8)) {
 local_29 = false;
 if (**(char **)(this_ptr + 8) != '*') {
 iVar1 = strcmp(*(char **)(this_ptr + 8),*(char **)(__arg + 8));
 local_29 = iVar1 == 0;
 }
 local_19 = local_29;
 }
 return local_19;
}



/* Function: derivedA_data @ 00103e80 */

/* DWARF original prototype: int derivedA_data(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA_derivedA_data(RTTIDerivedA *this_ptr)

{
 RTTIDerivedA *this_local;
 
 return 100;
}



/* Function: derivedB_data @ 00103e90 */

/* DWARF original prototype: int derivedB_data(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB_derivedB_data(RTTIDerivedB *this_ptr)

{
 RTTIDerivedB *this_local;
 
 return 200;
}



/* Function: name @ 00103ea0 */

/* DWARF original prototype: char * name(type_info * this) */

char * __thiscall std_type_info_name(type_info *this_ptr)

{
 char *local_20;
 type_info *this_local;
 
 if (**(char **)(this_ptr + 8) == '*') {
 local_20 = (char *)(*(long *)(this_ptr + 8) + 1);
 }
 else {
 local_20 = *(char **)(this_ptr + 8);
 }
 return local_20;
}



/* Function: getName @ 00103ef0 */

/* DWARF original prototype: char * getName(Base * this) */

char * __thiscall Base_getName(Base *this_ptr)

{
 Base *this_local;
 
 return "Base";
}



/* Function: ~Base @ 00103f10 */

/* DWARF original prototype: void ~Base(Base * this) */

void __thiscall Base_destructor(Base *this_ptr)

{
 Base *this_local;
 
 Base_destructor(this_ptr);
 operator_delete(this_ptr);
 return;
}



/* Function: getName @ 00103f40 */

/* DWARF original prototype: char * getName(Derived * this) */

char * __thiscall Derived_getName(Derived *this_ptr)

{
 Derived *this_local;
 
 return "Derived";
}



/* Function: ~Derived @ 00103f60 */

/* DWARF original prototype: void ~Derived(Derived * this) */

void __thiscall Derived_destructor(Derived *this_ptr)

{
 Derived *this_local;
 
 Derived_destructor(this_ptr);
 operator_delete(this_ptr);
 return;
}



/* Function: BaseA @ 00103f90 */

/* DWARF original prototype: void BaseA(BaseA * this) */

void __thiscall BaseA_BaseA(BaseA *this_ptr)

{
 BaseA *this_local;
 
 this_ptr->_vptr_BaseA = &PTR_funcA_001089b0;
 return;
}



/* Function: BaseB @ 00103fb0 */

/* DWARF original prototype: void BaseB(BaseB * this) */

void __thiscall BaseB_BaseB(BaseB *this_ptr)

{
 BaseB *this_local;
 
 this_ptr->_vptr_BaseB = &PTR_funcB_001089d8;
 return;
}



/* Function: funcA @ 00103fd0 */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int __thiscall MultiDerived_funcA(MultiDerived *this_ptr)

{
 MultiDerived *this_local;
 
 return 0x1e;
}



/* Function: ~MultiDerived @ 00103fe0 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this) */

void __thiscall MultiDerived_destructor(MultiDerived *this_ptr)

{
 MultiDerived *this_local;
 
 MultiDerived_destructor(this_ptr);
 operator_delete(this_ptr);
 return;
}



/* Function: funcB @ 00104010 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int __thiscall MultiDerived_funcB(MultiDerived *this_ptr)

{
 MultiDerived *this_local;
 
 return 0x28;
}



/* Function: _ZThn16_N12MultiDerived5funcBEv @ 00104020 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn16_N12MultiDerived5funcBEv(void)

{
 long in_RDI;
 
 MultiDerived::funcB((MultiDerived *)(in_RDI + -0x10));
 return;
}



/* Function: _ZThn16_N12MultiDerivedD1Ev @ 00104040 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn16_N12MultiDerivedD1Ev(void)

{
 long in_RDI;
 
 MultiDerived::~MultiDerived((MultiDerived *)(in_RDI + -0x10));
 return;
}



/* Function: _ZThn16_N12MultiDerivedD0Ev @ 00104060 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn16_N12MultiDerivedD0Ev(void)

{
 long in_RDI;
 
 MultiDerived::~MultiDerived((MultiDerived *)(in_RDI + -0x10));
 return;
}



/* Function: funcA @ 00104080 */

/* DWARF original prototype: int funcA(BaseA * this) */

int __thiscall BaseA_funcA(BaseA *this_ptr)

{
 BaseA *this_local;
 
 return 10;
}



/* Function: ~BaseA @ 00104090 */

/* DWARF original prototype: void ~BaseA(BaseA * this) */

void __thiscall BaseA_destructor(BaseA *this_ptr)

{
 BaseA *this_local;
 
 return;
}



/* Function: ~BaseA @ 001040a0 */

/* DWARF original prototype: void ~BaseA(BaseA * this) */

void __thiscall BaseA_destructor_wrapper(BaseA *this_ptr)

{
 BaseA *this_local;
 
 BaseA_destructor(this_ptr);
 operator_delete(this_ptr);
 return;
}



/* Function: funcB @ 001040d0 */

/* DWARF original prototype: int funcB(BaseB * this) */

int __thiscall BaseB_funcB(BaseB *this_ptr)

{
 BaseB *this_local;
 
 return 0x14;
}



/* Function: ~BaseB @ 001040e0 */

/* DWARF original prototype: void ~BaseB(BaseB * this) */

void __thiscall BaseB_destructor(BaseB *this_ptr)

{
 BaseB *this_local;
 
 return;
}



/* Function: ~BaseB @ 001040f0 */

/* DWARF original prototype: void ~BaseB(BaseB * this) */

void __thiscall BaseB_destructor_wrapper(BaseB *this_ptr)

{
 BaseB *this_local;
 
 BaseB_destructor(this_ptr);
 operator_delete(this_ptr);
 return;
}



/* Function: VirtualBase @ 00104120 */

/* DWARF original prototype: void VirtualBase(VirtualBase * this) */

void __thiscall VirtualBase_VirtualBase(VirtualBase *this_ptr)

{
 VirtualBase *this_local;
 
 this_ptr->_vptr_VirtualBase = &PTR_func_00108c38;
 return;
}



/* Function: MiddleA @ 00104140 */

/* DWARF original prototype: void MiddleA(MiddleA * this, void * * vtt) */

void __thiscall MiddleA_MiddleA(MiddleA *this_ptr,void **vtt)

{
 void **vtt_local;
 MiddleA *this_local;
 
 this_ptr->_vptr_MiddleA = *vtt;
 *(void **)((long)&this_ptr->_vptr_MiddleA + (long)this_ptr->_vptr_MiddleA[-3]) = vtt[1];
 return;
}



/* Function: MiddleB @ 00104170 */

/* DWARF original prototype: void MiddleB(MiddleB * this, void * * vtt) */

void __thiscall MiddleB_MiddleB(MiddleB *this_ptr,void **vtt)

{
 void **vtt_local;
 MiddleB *this_local;
 
 this_ptr->_vptr_MiddleB = *vtt;
 *(void **)((long)&this_ptr->_vptr_MiddleB + (long)this_ptr->_vptr_MiddleB[-3]) = vtt[1];
 return;
}



/* Function: func @ 001041a0 */

/* DWARF original prototype: int func(MiddleA * this) */

int __thiscall MiddleA_func(MiddleA *this_ptr)

{
 MiddleA *this_local;
 
 return *(int *)((long)&this_ptr->dataA + (long)this_ptr->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: ~MiddleA @ 001041c0 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this) */

void __thiscall MiddleA_destructor(MiddleA *this_ptr)

{
 MiddleA *this_local;
 
 MiddleA_destructor_vtt(this_ptr,&VTT);
 VirtualBase_destructor((VirtualBase *)&this_ptr->field_0x10);
 return;
}



/* Function: ~MiddleA @ 00104200 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this) */

void __thiscall MiddleA_destructor_wrapper(MiddleA *this_ptr)

{
 MiddleA *this_local;
 
 MiddleA_destructor(this_ptr);
 operator_delete(this_ptr);
 return;
}



/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 00104230 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n24_N7MiddleA4funcEv(void)

{
 long *in_RDI;
 
 MiddleA::func((MiddleA *)((long)in_RDI + *(long *)(*in_RDI + -0x18)));
 return;
}



/* Function: _ZTv0_n32_N7MiddleAD1Ev @ 00104250 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n32_N7MiddleAD1Ev(void)

{
 long *in_RDI;
 
 MiddleA::~MiddleA((MiddleA *)((long)in_RDI + *(long *)(*in_RDI + -0x20)));
 return;
}



/* Function: _ZTv0_n32_N7MiddleAD0Ev @ 00104270 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n32_N7MiddleAD0Ev(void)

{
 long *in_RDI;
 
 MiddleA::~MiddleA((MiddleA *)((long)in_RDI + *(long *)(*in_RDI + -0x20)));
 return;
}



/* Function: func @ 00104290 */

/* DWARF original prototype: int func(MiddleB * this) */

int __thiscall MiddleB_func(MiddleB *this_ptr)

{
 MiddleB *this_local;
 
 return *(int *)((long)&this_ptr->dataB + (long)this_ptr->_vptr_MiddleB[-3]) + 200;
}



/* Function: ~MiddleB @ 001042b0 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this) */

void __thiscall MiddleB_destructor(MiddleB *this_ptr)

{
 MiddleB *this_local;
 
 MiddleB_destructor_vtt(this_ptr,&VTT);
 VirtualBase_destructor((VirtualBase *)&this_ptr->field_0x10);
 return;
}



/* Function: ~MiddleB @ 001042f0 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this) */

void __thiscall MiddleB_destructor_wrapper(MiddleB *this_ptr)

{
 MiddleB *this_local;
 
 MiddleB_destructor(this_ptr);
 operator_delete(this_ptr);
 return;
}



/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 00104320 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n24_N7MiddleB4funcEv(void)

{
 long *in_RDI;
 
 MiddleB::func((MiddleB *)((long)in_RDI + *(long *)(*in_RDI + -0x18)));
 return;
}



/* Function: _ZTv0_n32_N7MiddleBD1Ev @ 00104340 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n32_N7MiddleBD1Ev(void)

{
 long *in_RDI;
 
 MiddleB::~MiddleB((MiddleB *)((long)in_RDI + *(long *)(*in_RDI + -0x20)));
 return;
}



/* Function: _ZTv0_n32_N7MiddleBD0Ev @ 00104360 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n32_N7MiddleBD0Ev(void)

{
 long *in_RDI;
 
 MiddleB::~MiddleB((MiddleB *)((long)in_RDI + *(long *)(*in_RDI + -0x20)));
 return;
}



/* Function: func @ 00104380 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int __thiscall DiamondDerived_func(DiamondDerived *this_ptr)

{
 DiamondDerived *this_local;
 
 return *(int *)((long)&(this_ptr->super_MiddleA).dataA + (long)(this_ptr->super_MiddleA)._vptr_MiddleA[-3]
 ) + 0xfa;
}



/* Function: ~DiamondDerived @ 001043a0 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this) */

void __thiscall DiamondDerived_destructor_wrapper(DiamondDerived *this_ptr)

{
 DiamondDerived *this_local;
 
 DiamondDerived_destructor(this_ptr);
 operator_delete(this_ptr);
 return;
}



/* Function: _ZThn16_N14DiamondDerived4funcEv @ 001043d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void _ZThn16_N14DiamondDerived4funcEv(void)

{
 long in_RDI;
 
 DiamondDerived::func((DiamondDerived *)(in_RDI + -0x10));
 return;
}



/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 001043f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void _ZThn16_N14DiamondDerivedD1Ev(void)

{
 long in_RDI;
 
 DiamondDerived::~DiamondDerived((DiamondDerived *)(in_RDI + -0x10));
 return;
}



/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 00104410 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void _ZThn16_N14DiamondDerivedD0Ev(void)

{
 long in_RDI;
 
 DiamondDerived::~DiamondDerived((DiamondDerived *)(in_RDI + -0x10));
 return;
}



/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 00104430 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void _ZTv0_n24_N14DiamondDerived4funcEv(void)

{
 long *in_RDI;
 
 DiamondDerived::func((DiamondDerived *)((long)in_RDI + *(long *)(*in_RDI + -0x18)));
 return;
}



/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 00104450 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void _ZTv0_n32_N14DiamondDerivedD1Ev(void)

{
 long *in_RDI;
 
 DiamondDerived::~DiamondDerived((DiamondDerived *)((long)in_RDI + *(long *)(*in_RDI + -0x20)));
 return;
}



/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 00104470 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void _ZTv0_n32_N14DiamondDerivedD0Ev(void)

{
 long *in_RDI;
 
 DiamondDerived::~DiamondDerived((DiamondDerived *)((long)in_RDI + *(long *)(*in_RDI + -0x20)));
 return;
}



/* Function: func @ 00104490 */

/* DWARF original prototype: int func(VirtualBase * this) */

int __thiscall VirtualBase_func(VirtualBase *this_ptr)

{
 VirtualBase *this_local;
 
 return 100;
}



/* Function: ~VirtualBase @ 001044a0 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this) */

void __thiscall VirtualBase_destructor(VirtualBase *this_ptr)

{
 VirtualBase *this_local;
 
 return;
}



/* Function: ~VirtualBase @ 001044b0 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this) */

void __thiscall VirtualBase_destructor_wrapper(VirtualBase *this_ptr)

{
 VirtualBase *this_local;
 
 VirtualBase_destructor(this_ptr);
 operator_delete(this_ptr);
 return;
}



/* Function: ~MiddleA @ 001044e0 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this, void * * vtt) */

void __thiscall MiddleA__MiddleA_vtt(MiddleA *this_ptr,void **vtt)

{
 void **vtt_local;
 MiddleA *this_local;
 
 return;
}



/* Function: ~MiddleB @ 001044f0 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this, void * * vtt) */

void __thiscall MiddleB__MiddleB_vtt(MiddleB *this_ptr,void **vtt)

{
 void **vtt_local;
 MiddleB *this_local;
 
 return;
}



/* Function: ~DiamondDerived @ 00104500 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, void * * vtt) */

void __thiscall DiamondDerived__DiamondDerived_vtt(DiamondDerived *this_ptr,void **vtt)

{
 void **vtt_local;
 DiamondDerived *this_local;
 
 MiddleB__MiddleB_vtt((MiddleB *)&(this_ptr->super_MiddleA).field_0x10,vtt + 3);
 MiddleA__MiddleA_vtt(&this_ptr->super_MiddleA,vtt + 1);
 return;
}



/* Function: __uniq_ptr_data @ 00104550 */

/* DWARF original prototype: void
 __uniq_ptr_data(__uniq_ptr_data<int,_std::default_delete<int>,_true,_true> * this,
 __uniq_ptr_data<int,_std::default_delete<int>,_true,_true> * param_1) */

void __thiscall
std__uniq_ptr_data_int_std_default_delete_int_true_true__uniq_ptr_data
 (__uniq_ptr_data<int,_std::default_delete<int>,_true,_true> *this_ptr,
 __uniq_ptr_data<int,_std::default_delete<int>,_true,_true> *param_1)

{
 __uniq_ptr_data<int,_std::default_delete<int>,_true,_true> *param_1_local;
 __uniq_ptr_data<int,_std::default_delete<int>,_true,_true> *this_local;
 
 std__uniq_ptr_impl_int_std_default_delete_int___uniq_ptr_impl
 (&this_ptr->super___uniq_ptr_impl<int,_std::default_delete<int>_>,
 &param_1->super___uniq_ptr_impl<int,_std::default_delete<int>_>);
 return;
}



/* Function: __uniq_ptr_impl @ 00104580 */

/* DWARF original prototype: void __uniq_ptr_impl(__uniq_ptr_impl<int,_std::default_delete<int>_> *
 this, __uniq_ptr_impl<int,_std::default_delete<int>_> * __u) */

void __thiscall
std__uniq_ptr_impl_int_std_default_delete_int___uniq_ptr_impl
 (__uniq_ptr_impl<int,_std::default_delete<int>_> *this_ptr,
 __uniq_ptr_impl<int,_std::default_delete<int>_> *__u)

{
 type *ptVar1;
 pointer *ppiVar2;
 __uniq_ptr_impl<int,_std::default_delete<int>_> *__u_local;
 __uniq_ptr_impl<int,_std::default_delete<int>_> *this_local;
 
 ptVar1 = std_move_std_tuple_int_ptr_std_default_delete_int_ref(&__u->_M_t);
 std_tuple_int_ptr_std_default_delete_int_tuple(&this_ptr->_M_t,ptVar1);
 /* try { // try from 001045b1 to 001045b5 has its CatchHandler @ 001045d0 */
 ppiVar2 = std__uniq_ptr_impl_int_std_default_delete_int_M_ptr(__u);
 *ppiVar2 = (pointer)0x0;
 return;
}



/* Function: move<std::tuple<int_*,_std::default_delete<int>_>_&> @ 001045e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: move<std::tuple<int *, std::default_delete<int> > &> */

tuple_int_ptr_std_default_delete_int * std_move_std_tuple_int_ptr_std_default_delete_int_ref
 (tuple<int_*,_std::default_delete<int>_> *__t)

{
 tuple<int_*,_std::default_delete<int>_> *__t_local;
 
 return __t;
}



/* Function: tuple @ 001045f0 */

/* DWARF original prototype: void tuple(tuple<int_*,_std::default_delete<int>_> * this,
 tuple<int_*,_std::default_delete<int>_> * param_1) */

void __thiscall
std_tuple_int_ptr_std_default_delete_int_tuple
 (tuple<int_*,_std::default_delete<int>_> *this_ptr,
 tuple<int_*,_std::default_delete<int>_> *param_1)

{
 tuple<int_*,_std::default_delete<int>_> *param_1_local;
 tuple<int_*,_std::default_delete<int>_> *this_local;
 
 std_Tuple_impl_0UL_int_ptr_std_default_delete_int_Tuple_impl
 (&this_ptr->super__Tuple_impl_0UL_int_ptr_std_default_delete_int,
 &param_1->super__Tuple_impl_0UL_int_ptr_std_default_delete_int);
 return;
}



/* Function: _M_ptr @ 00104620 */

/* DWARF original prototype: pointer * _M_ptr(__uniq_ptr_impl<int,_std::default_delete<int>_> *
 this) */

pointer * __thiscall
std__uniq_ptr_impl_int_std_default_delete_int_M_ptr
 (__uniq_ptr_impl_int_std_default_delete_int *this_ptr)

{
 int **ppiVar1;
 __uniq_ptr_impl_int_std_default_delete_int *this_local;
 
 ppiVar1 = std_get_0UL_int_ptr_std_default_delete_int(&this_ptr->_M_t);
 return ppiVar1;
}



/* Function: __clang_call_terminate @ 00104640 */

void __clang_call_terminate(void)

{
 __cxa_begin_catch();
 /* WARNING: Subroutine does not return */
}



/* Function: _Tuple_impl @ 00104650 */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<0UL,_int_*,_std::default_delete<int>_> *
 this, _Tuple_impl<0UL,_int_*,_std::default_delete<int>_> * param_1) */

void __thiscall
std_Tuple_impl_0UL_int_ptr_std_default_delete_int_Tuple_impl
 (_Tuple_impl_0UL_int_ptr_std_default_delete_int *this_ptr,
 _Tuple_impl_0UL_int_ptr_std_default_delete_int *param_1)

{
 _Tuple_impl_0UL_int_ptr_std_default_delete_int *param_1_local;
 _Tuple_impl_0UL_int_ptr_std_default_delete_int *this_local;
 
 std_Tuple_impl_1UL_std_default_delete_int_Tuple_impl
 (&this_ptr->super__Tuple_impl_1UL_std_default_delete_int,
 &param_1->super__Tuple_impl_1UL_std_default_delete_int);
 *this_ptr = *param_1;
 return;
}



/* Function: _Tuple_impl @ 00104690 */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<1UL,_std::default_delete<int>_> * this,
 _Tuple_impl<1UL,_std::default_delete<int>_> * __in) */

void __thiscall
std_Tuple_impl_1UL_std_default_delete_int_Tuple_impl
 (_Tuple_impl_1UL_std_default_delete_int *this_ptr,
 _Tuple_impl_1UL_std_default_delete_int *__in)

{
 _Tuple_impl_1UL_std_default_delete_int *__in_local;
 _Tuple_impl_1UL_std_default_delete_int *this_local;
 
 return;
}



/* Function: get<0UL,_int_*,_std::default_delete<int>_> @ 001046a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<0UL, int *, std::default_delete<int> > */

int **
std_get_0UL_int_ptr_std_default_delete_int(tuple_int_ptr_std_default_delete_int *__t)

{
 int **ppiVar1;
 tuple_int_ptr_std_default_delete_int *__t_local;
 
 ppiVar1 = std__get_helper_0UL_int_ptr_std_default_delete_int
 (&__t->super__Tuple_impl_0UL_int_ptr_std_default_delete_int);
 return ppiVar1;
}



/* Function: __get_helper<0UL,_int_*,_std::default_delete<int>_> @ 001046c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<0UL, int *, std::default_delete<int> > */

int ** std__get_helper_0UL_int_ptr_std_default_delete_int
 (_Tuple_impl_0UL_int_ptr_std_default_delete_int *__t)

{
 int **ppiVar1;
 _Tuple_impl_0UL_int_ptr_std_default_delete_int *__t_local;
 
 ppiVar1 = std_Tuple_impl_0UL_int_ptr_std_default_delete_int_M_head(__t);
 return ppiVar1;
}



/* Function: _M_head @ 001046e0 */

int ** std_Tuple_impl_0UL_int_ptr_std_default_delete_int_M_head
 (_Tuple_impl_0UL_int_ptr_std_default_delete_int *__t)

{
 int **ppiVar1;
 _Tuple_impl_0UL_int_ptr_std_default_delete_int *__t_local;
 
 ppiVar1 = std_Head_base_0UL_int_ptr_false_M_head((_Head_base_0UL_int_ptr_false *)__t);
 return ppiVar1;
}



/* Function: _M_head @ 00104700 */

int ** std_Head_base_0UL_int_ptr_false_M_head(_Head_base_0UL_int_ptr_false *__b)

{
 _Head_base_0UL_int_ptr_false *__b_local;
 
 return &__b->_M_head_impl;
}



/* Function: RTTIBase @ 00104710 */

/* DWARF original prototype: void RTTIBase(RTTIBase * this) */

void __thiscall RTTIBase_RTTIBase(RTTIBase *this_ptr)

{
 RTTIBase *this_local;
 
 this_ptr->_vptr_RTTIBase = &PTR__RTTIBase_00108d78;
 return;
}



/* Function: ~RTTIDerivedA @ 00104730 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

void __thiscall RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this_ptr)

{
 RTTIDerivedA *this_local;
 
 RTTIBase__RTTIBase(&this_ptr->super_RTTIBase);
 return;
}



/* Function: ~RTTIDerivedA @ 00104750 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

void __thiscall RTTIDerivedA__RTTIDerivedA_wrapper(RTTIDerivedA *this_ptr)

{
 RTTIDerivedA *this_local;
 
 RTTIDerivedA__RTTIDerivedA(this_ptr);
 operator_delete(this_ptr);
 return;
}



/* Function: getType @ 00104780 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA_getType(RTTIDerivedA *this_ptr)

{
 RTTIDerivedA *this_local;
 
 return 1;
}



/* Function: ~RTTIBase @ 00104790 */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this) */

void __thiscall RTTIBase__RTTIBase(RTTIBase *this_ptr)

{
 RTTIBase *this_local;
 
 return;
}



/* Function: ~RTTIBase @ 001047a0 */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this) */

void __thiscall RTTIBase__RTTIBase_wrapper(RTTIBase *this_ptr)

{
 RTTIBase *this_local;
 
 RTTIBase__RTTIBase(this_ptr);
 operator_delete(this_ptr);
 return;
}



/* Function: getType @ 001047d0 */

/* DWARF original prototype: int getType(RTTIBase * this) */

int __thiscall RTTIBase_getType(RTTIBase *this_ptr)

{
 RTTIBase *this_local;
 
 return 0;
}



/* Function: ~RTTIDerivedB @ 001047e0 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

void __thiscall RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this_ptr)

{
 RTTIDerivedB *this_local;
 
 RTTIBase__RTTIBase(&this_ptr->super_RTTIBase);
 return;
}



/* Function: ~RTTIDerivedB @ 00104800 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

void __thiscall RTTIDerivedB__RTTIDerivedB_wrapper(RTTIDerivedB *this_ptr)

{
 RTTIDerivedB *this_local;
 
 RTTIDerivedB__RTTIDerivedB(this_ptr);
 operator_delete(this_ptr);
 return;
}



/* Function: getType @ 00104830 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB_getType(RTTIDerivedB *this_ptr)

{
 RTTIDerivedB *this_local;
 
 return 2;
}



/* Function: __uniq_ptr_impl @ 00104840 */

/* DWARF original prototype: void
 __uniq_ptr_impl(__uniq_ptr_data<int,_std::default_delete<int>,_true,_true> * this, pointer
 param_1) */

void __thiscall
std__uniq_ptr_data_int_std_default_delete_int_true_true__uniq_ptr_impl
 (__uniq_ptr_data_int_std_default_delete_int_true_true *this_ptr,pointer param_1)

{
 pointer param_1_local;
 __uniq_ptr_data_int_std_default_delete_int_true_true *this_local;
 
 std__uniq_ptr_impl_int_std_default_delete_int___uniq_ptr_impl
 (&this_ptr->super___uniq_ptr_impl_int_std_default_delete_int,param_1);
 return;
}



/* Function: __uniq_ptr_impl @ 00104870 */

/* DWARF original prototype: void __uniq_ptr_impl(__uniq_ptr_impl<int,_std::default_delete<int>_> *
 this, pointer __p) */

void __thiscall
std__uniq_ptr_impl_int_std_default_delete_int___uniq_ptr_impl
 (__uniq_ptr_impl_int_std_default_delete_int *this_ptr,pointer __p)

{
 pointer *ppiVar1;
 pointer __p_local;
 __uniq_ptr_impl_int_std_default_delete_int *this_local;
 
 std_tuple_int_ptr_std_default_delete_int_tuple_true_true(&this_ptr->_M_t);
 ppiVar1 = std__uniq_ptr_impl_int_std_default_delete_int_M_ptr(this_ptr);
 *ppiVar1 = __p;
 return;
}



/* Function: tuple<true,_true> @ 001048b0 */

/* DWARF original name: tuple<true, true>
 DWARF original prototype: void tuple<true,_true>(tuple<int_*,_std::default_delete<int>_> * this)
 */

void __thiscall
std_tuple_int_ptr_std_default_delete_int_tuple_true_true
 (tuple_int_ptr_std_default_delete_int *this_ptr)

{
 tuple_int_ptr_std_default_delete_int *this_local;
 
 /* try { // try from 001048c0 to 001048c4 has its CatchHandler @ 001048d0 */
 std_Tuple_impl_0UL_int_ptr_std_default_delete_int_Tuple_impl
 (&this_ptr->super__Tuple_impl_0UL_int_ptr_std_default_delete_int);
 return;
}



/* Function: _Tuple_impl @ 001048e0 */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<0UL,_int_*,_std::default_delete<int>_> *
 this) */

void __thiscall
std_Tuple_impl_0UL_int_ptr_std_default_delete_int_Tuple_impl
 (_Tuple_impl_0UL_int_ptr_std_default_delete_int *this_ptr)

{
 _Tuple_impl_0UL_int_ptr_std_default_delete_int *this_local;
 
 std_Tuple_impl_1UL_std_default_delete_int_Tuple_impl
 (&this_ptr->super__Tuple_impl_1UL_std_default_delete_int);
 std_Head_base_0UL_int_ptr_false_Head_base((_Head_base_0UL_int_ptr_false *)this_ptr);
 return;
}



/* Function: _Tuple_impl @ 00104910 */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<1UL,_std::default_delete<int>_> * this) */

void __thiscall
std_Tuple_impl_1UL_std_default_delete_int_Tuple_impl
 (_Tuple_impl_1UL_std_default_delete_int *this_ptr)

{
 _Tuple_impl_1UL_std_default_delete_int *this_local;
 
 std_Head_base_1UL_std_default_delete_int_true_Head_base
 (&this_ptr->super__Head_base_1UL_std_default_delete_int_true);
 return;
}



/* Function: _Head_base @ 00104930 */

/* DWARF original prototype: void _Head_base(_Head_base<0UL,_int_*,_false> * this) */

void __thiscall std_Head_base_0UL_int_ptr_false_Head_base(_Head_base_0UL_int_ptr_false *this_ptr)

{
 _Head_base_0UL_int_ptr_false *this_local;
 
 this_ptr->_M_head_impl = (int *)0x0;
 return;
}



/* Function: _Head_base @ 00104950 */

/* DWARF original prototype: void _Head_base(_Head_base<1UL,_std::default_delete<int>,_true> * this)
 */

void __thiscall
std_Head_base_1UL_std_default_delete_int_true_Head_base
 (_Head_base_1UL_std_default_delete_int_true *this_ptr)

{
 _Head_base_1UL_std_default_delete_int_true *this_local;
 
 return;
}



/* Function: get_deleter @ 00104960 */

/* DWARF original prototype: deleter_type * get_deleter(unique_ptr<int,_std::default_delete<int>_> *
 this) */

deleter_type * __thiscall
std_unique_ptr_int_std_default_delete_int_get_deleter
 (unique_ptr_int_std_default_delete_int *this_ptr)

{
 default_delete_int *pdVar1;
 unique_ptr_int_std_default_delete_int *this_local;
 
 /* try { // try from 00104970 to 00104974 has its CatchHandler @ 00104988 */
 pdVar1 = std__uniq_ptr_impl_int_std_default_delete_int_M_deleter
 ((__uniq_ptr_impl_int_std_default_delete_int *)this_ptr);
 return pdVar1;
}



/* Function: operator() @ 00104990 */

/* DWARF original prototype: void operator()(default_delete<int> * this, int * __ptr) */

void __thiscall default_delete_int_operator_call(default_delete_int *this_ptr,int *__ptr)

{
 int *__ptr_local;
 default_delete_int *this_local;
 
 if (__ptr != (int *)0x0) {
 operator_delete(__ptr);
 }
 return;
}



/* Function: move<int_*&> @ 001049d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: move<int *&> */

int ** std_move_int_ptr_ref(int **__t)

{
 int **__t_local;
 
 return __t;
}



/* Function: _M_deleter @ 001049e0 */

/* DWARF original prototype: default_delete<int> *
 _M_deleter(__uniq_ptr_impl<int,_std::default_delete<int>_> * this) */

default_delete_int * __thiscall
std__uniq_ptr_impl_int_std_default_delete_int_M_deleter
 (__uniq_ptr_impl_int_std_default_delete_int *this_ptr)

{
 default_delete_int *p_Var1;
 __uniq_ptr_impl_int_std_default_delete_int *this_local;
 
 p_Var1 = std_get_1UL_int_ptr_std_default_delete_int(&this_ptr->_M_t);
 return p_Var1;
}



/* Function: get<1UL,_int_*,_std::default_delete<int>_> @ 00104a00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<1UL, int *, std::default_delete<int> > */

default_delete_int *
std_get_1UL_int_ptr_std_default_delete_int(tuple_int_ptr_std_default_delete_int *__t)

{
 default_delete_int *pdVar1;
 tuple_int_ptr_std_default_delete_int *__t_local;
 
 pdVar1 = std__get_helper_1UL_std_default_delete_int
 ((_Tuple_impl_1UL_std_default_delete_int *)__t);
 return pdVar1;
}



/* Function: __get_helper<1UL,_std::default_delete<int>_> @ 00104a20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<1UL, std::default_delete<int> > */

default_delete_int *
std__get_helper_1UL_std_default_delete_int(_Tuple_impl_1UL_std_default_delete_int *__t)

{
 default_delete_int *pdVar1;
 _Tuple_impl_1UL_std_default_delete_int *__t_local;
 
 pdVar1 = std_Tuple_impl_1UL_std_default_delete_int_M_head(__t);
 return pdVar1;
}



/* Function: _M_head @ 00104a40 */

default_delete_int *
std_Tuple_impl_1UL_std_default_delete_int_M_head
 (_Tuple_impl_1UL_std_default_delete_int *__t)

{
 default_delete_int *pdVar1;
 _Tuple_impl_1UL_std_default_delete_int *__t_local;
 
 pdVar1 = std_Head_base_1UL_std_default_delete_int_true_M_head
 (&__t->super__Head_base_1UL_std_default_delete_int_true);
 return pdVar1;
}



/* Function: _M_head @ 00104a60 */

default_delete_int *
std_Head_base_1UL_std_default_delete_int_true_M_head
 (_Head_base_1UL_std_default_delete_int_true *__b)

{
 _Head_base_1UL_std_default_delete_int_true *__b_local;
 
 return &__b->_M_head_impl;
}



/* Function: get @ 00104a70 */

/* DWARF original prototype: pointer get(unique_ptr<int,_std::default_delete<int>_> * this) */

pointer __thiscall
std_unique_ptr_int_std_default_delete_int_get
 (unique_ptr_int_std_default_delete_int *this_ptr)

{
 pointer piVar1;
 unique_ptr_int_std_default_delete_int *this_local;
 
 /* try { // try from 00104a80 to 00104a84 has its CatchHandler @ 00104a98 */
 piVar1 = std__uniq_ptr_impl_int_std_default_delete_int_M_ptr
 ((__uniq_ptr_impl_int_std_default_delete_int *)this_ptr);
 return piVar1;
}



/* Function: _M_ptr @ 00104aa0 */

/* DWARF original prototype: pointer _M_ptr(__uniq_ptr_impl<int,_std::default_delete<int>_> * this)
 */

pointer __thiscall
std__uniq_ptr_impl_int_std_default_delete_int_M_ptr
 (__uniq_ptr_impl_int_std_default_delete_int *this_ptr)

{
 int **ppiVar1;
 __uniq_ptr_impl_int_std_default_delete_int *this_local;
 
 ppiVar1 = std_get_0UL_int_ptr_std_default_delete_int(&this_ptr->_M_t);
 return *ppiVar1;
}



/* Function: get<0UL,_int_*,_std::default_delete<int>_> @ 00104ac0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<0UL, int *, std::default_delete<int> > */

int **
std_get_0UL_int_ptr_std_default_delete_int(tuple_int_ptr_std_default_delete_int *__t)

{
 int **ppiVar1;
 tuple_int_ptr_std_default_delete_int *__t_local;
 
 ppiVar1 = std__get_helper_0UL_int_ptr_std_default_delete_int
 (&__t->super__Tuple_impl_0UL_int_ptr_std_default_delete_int);
 return ppiVar1;
}



/* Function: __get_helper<0UL,_int_*,_std::default_delete<int>_> @ 00104ae0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<0UL, int *, std::default_delete<int> > */

int ** std__get_helper_0UL_int_ptr_std_default_delete_int
 (_Tuple_impl_0UL_int_ptr_std_default_delete_int *__t)

{
 int **ppiVar1;
 _Tuple_impl_0UL_int_ptr_std_default_delete_int *__t_local;
 
 ppiVar1 = std_Tuple_impl_0UL_int_ptr_std_default_delete_int_M_head(__t);
 return ppiVar1;
}



/* Function: _M_head @ 00104b00 */

int ** std_Tuple_impl_0UL_int_ptr_std_default_delete_int_M_head
 (_Tuple_impl_0UL_int_ptr_std_default_delete_int *__t)

{
 int **ppiVar1;
 _Tuple_impl_0UL_int_ptr_std_default_delete_int *__t_local;
 
 ppiVar1 = std_Head_base_0UL_int_ptr_false_M_head((_Head_base_0UL_int_ptr_false *)__t);
 return ppiVar1;
}



/* Function: _M_head @ 00104b20 */

int ** std_Head_base_0UL_int_ptr_false_M_head(_Head_base_0UL_int_ptr_false *__b)

{
 _Head_base_0UL_int_ptr_false *__b_local;
 
 return &__b->_M_head_impl;
}



/* Function: __uniq_ptr_impl @ 00104b30 */

/* DWARF original prototype: void
 __uniq_ptr_impl(__uniq_ptr_data<int,_std::default_delete<int[]>,_true,_true> * this, pointer
 param_1) */

void __thiscall
std__uniq_ptr_data_int_std_default_delete_int_array_true_true__uniq_ptr_impl
 (__uniq_ptr_data_int_std_default_delete_int_array_true_true *this_ptr,pointer param_1)

{
 pointer param_1_local;
 __uniq_ptr_data_int_std_default_delete_int_array_true_true *this_local;
 
 std__uniq_ptr_impl_int_std_default_delete_int_array___uniq_ptr_impl
 (&this_ptr->super___uniq_ptr_impl_int_std_default_delete_int_array,param_1);
 return;
}



/* Function: __uniq_ptr_impl @ 00104b60 */

/* DWARF original prototype: void __uniq_ptr_impl(__uniq_ptr_impl<int,_std::default_delete<int[]>_>
 * this, pointer __p) */

void __thiscall
std__uniq_ptr_impl_int_std_default_delete_int_array___uniq_ptr_impl
 (__uniq_ptr_impl_int_std_default_delete_int_array *this_ptr,pointer __p)

{
 pointer *ppiVar1;
 pointer __p_local;
 __uniq_ptr_impl_int_std_default_delete_int_array *this_local;
 
 std_tuple_int_ptr_std_default_delete_int_array_tuple_true_true(&this_ptr->_M_t);
 ppiVar1 = std__uniq_ptr_impl_int_std_default_delete_int_array_M_ptr(this_ptr);
 *ppiVar1 = __p;
 return;
}



/* Function: tuple<true,_true> @ 00104ba0 */

/* DWARF original name: tuple<true, true>
 DWARF original prototype: void tuple<true,_true>(tuple<int_*,_std::default_delete<int[]>_> *
 this) */

void __thiscall
std_tuple_int_ptr_std_default_delete_int_array_tuple_true_true
 (tuple_int_ptr_std_default_delete_int_array *this_ptr)

{
 tuple_int_ptr_std_default_delete_int_array *this_local;
 
 /* try { // try from 00104bb0 to 00104bb4 has its CatchHandler @ 00104bc0 */
 std_Tuple_impl_0UL_int_ptr_std_default_delete_int_array_Tuple_impl
 (&this_ptr->super__Tuple_impl_0UL_int_ptr_std_default_delete_int_array);
 return;
}



/* Function: _M_ptr @ 00104bd0 */

/* DWARF original prototype: pointer * _M_ptr(__uniq_ptr_impl<int,_std::default_delete<int[]>_> *
 this) */

pointer * __thiscall
std__uniq_ptr_impl_int_std_default_delete_int_array_M_ptr
 (__uniq_ptr_impl_int_std_default_delete_int_array *this_ptr)

{
 int **ppiVar1;
 __uniq_ptr_impl_int_std_default_delete_int_array *this_local;
 
 ppiVar1 = std_get_0UL_int_ptr_std_default_delete_int_array(&this_ptr->_M_t);
 return ppiVar1;
}



/* Function: _Tuple_impl @ 00104bf0 */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<0UL,_int_*,_std::default_delete<int[]>_> *
 this) */

void __thiscall
std_Tuple_impl_0UL_int_ptr_std_default_delete_int_array_Tuple_impl
 (_Tuple_impl_0UL_int_ptr_std_default_delete_int_array *this_ptr)

{
 _Tuple_impl_0UL_int_ptr_std_default_delete_int_array *this_local;
 
 std_Tuple_impl_1UL_std_default_delete_int_array_Tuple_impl
 (&this_ptr->super__Tuple_impl_1UL_std_default_delete_int_array);
 std_Head_base_0UL_int_ptr_false_Head_base((_Head_base_0UL_int_ptr_false *)this_ptr);
 return;
}



/* Function: _Tuple_impl @ 00104c20 */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<1UL,_std::default_delete<int[]>_> * this)
 */

void __thiscall
std_Tuple_impl_1UL_std_default_delete_int_array_Tuple_impl
 (_Tuple_impl_1UL_std_default_delete_int_array *this_ptr)

{
 _Tuple_impl_1UL_std_default_delete_int_array *this_local;
 
 std_Head_base_1UL_std_default_delete_int_array_true_Head_base
 (&this_ptr->super__Head_base_1UL_std_default_delete_int_array_true);
 return;
}



/* Function: _Head_base @ 00104c40 */

/* DWARF original prototype: void _Head_base(_Head_base<1UL,_std::default_delete<int[]>,_true> *
 this) */

void __thiscall
std_Head_base_1UL_std_default_delete_int_array_true_Head_base
 (_Head_base_1UL_std_default_delete_int_array_true *this_ptr)

{
 _Head_base_1UL_std_default_delete_int_array_true *this_local;
 
 return;
}



/* Function: get<0UL,_int_*,_std::default_delete<int[]>_> @ 00104c50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<0UL, int *, std::default_delete<int[]> > */

int **
std_get_0UL_int_ptr_std_default_delete_int_array
 (tuple_int_ptr_std_default_delete_int_array *__t)

{
 int **ppiVar1;
 tuple_int_ptr_std_default_delete_int_array *__t_local;
 
 ppiVar1 = std__get_helper_0UL_int_ptr_std_default_delete_int_array
 (&__t->super__Tuple_impl_0UL_int_ptr_std_default_delete_int_array);
 return ppiVar1;
}



/* Function: __get_helper<0UL,_int_*,_std::default_delete<int[]>_> @ 00104c70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<0UL, int *, std::default_delete<int[]> > */

int ** std__get_helper_0UL_int_ptr_std_default_delete_int_array
 (_Tuple_impl_0UL_int_ptr_std_default_delete_int_array *__t)

{
 int **ppiVar1;
 _Tuple_impl_0UL_int_ptr_std_default_delete_int_array *__t_local;
 
 ppiVar1 = std_Tuple_impl_0UL_int_ptr_std_default_delete_int_array_M_head(__t);
 return ppiVar1;
}



/* Function: _M_head @ 00104c90 */

int ** std_Tuple_impl_0UL_int_ptr_std_default_delete_int_array_M_head
 (_Tuple_impl_0UL_int_ptr_std_default_delete_int_array *__t)

{
 int **ppiVar1;
 _Tuple_impl_0UL_int_ptr_std_default_delete_int_array *__t_local;
 
 ppiVar1 = std_Head_base_0UL_int_ptr_false_M_head((_Head_base_0UL_int_ptr_false *)__t);
 return ppiVar1;
}



/* Function: get_deleter @ 00104cb0 */

/* DWARF original prototype: deleter_type *
 get_deleter(unique_ptr<int[],_std::default_delete<int[]>_> * this) */

deleter_type * __thiscall
std_unique_ptr_int_array_std_default_delete_int_array_get_deleter
 (unique_ptr_int_std_default_delete_int_array *this_ptr)

{
 default_delete_int_array *pdVar1;
 unique_ptr_int_std_default_delete_int_array *this_local;
 
 /* try { // try from 00104cc0 to 00104cc4 has its CatchHandler @ 00104cd8 */
 pdVar1 = std__uniq_ptr_impl_int_std_default_delete_int_array_M_deleter
 ((__uniq_ptr_impl_int_std_default_delete_int_array *)this_ptr);
 return pdVar1;
}



/* Function: operator()<int> @ 00104ce0 */

/* DWARF original prototype: type operator()<int>(default_delete<int[]> * this, int * __ptr) */

void default_delete_int_array_operator_call_int(default_delete_int_array *this_ptr,int *__ptr)

{
 int *__ptr_local;
 default_delete_int_array *this_local;
 
 if (__ptr != (int *)0x0) {
 operator_delete__(__ptr);
 }
 return;
}



/* Function: _M_deleter @ 00104d20 */

/* DWARF original prototype: default_delete<int[]> *
 _M_deleter(__uniq_ptr_impl<int,_std::default_delete<int[]>_> * this) */

default_delete_int_array * __thiscall
std__uniq_ptr_impl_int_std_default_delete_int_array_M_deleter
 (__uniq_ptr_impl_int_std_default_delete_int_array *this_ptr)

{
 default_delete_int_array *p_Var1;
 __uniq_ptr_impl_int_std_default_delete_int_array *this_local;
 
 p_Var1 = std_get_1UL_int_ptr_std_default_delete_int_array(&this_ptr->_M_t);
 return p_Var1;
}



/* Function: get<1UL,_int_*,_std::default_delete<int[]>_> @ 00104d40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<1UL, int *, std::default_delete<int[]> > */

default_delete_int_array *
std_get_1UL_int_ptr_std_default_delete_int_array(tuple_int_ptr_std_default_delete_int_array *__t)

{
 default_delete_int_array *pdVar1;
 tuple_int_ptr_std_default_delete_int_array *__t_local;
 
 pdVar1 = std__get_helper_1UL_std_default_delete_int_array
 ((_Tuple_impl_1UL_std_default_delete_int_array *)__t);
 return pdVar1;
}



/* Function: __get_helper<1UL,_std::default_delete<int[]>_> @ 00104d60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<1UL, std::default_delete<int[]> > */

default_delete_int_array *
std__get_helper_1UL_std_default_delete_int_array
 (_Tuple_impl_1UL_std_default_delete_int_array *__t)

{
 default_delete_int_array *pdVar1;
 _Tuple_impl_1UL_std_default_delete_int_array *__t_local;
 
 pdVar1 = std_Tuple_impl_1UL_std_default_delete_int_array_M_head(__t);
 return pdVar1;
}



/* Function: _M_head @ 00104d80 */

default_delete_int_array *
std_Tuple_impl_1UL_std_default_delete_int_array_M_head
 (_Tuple_impl_1UL_std_default_delete_int_array *__t)

{
 default_delete_int_array *pdVar1;
 _Tuple_impl_1UL_std_default_delete_int_array *__t_local;
 
 pdVar1 = std_Head_base_1UL_std_default_delete_int_array_true_M_head
 (&__t->super__Head_base_1UL_std_default_delete_int_array_true);
 return pdVar1;
}



/* Function: _M_head @ 00104da0 */

default_delete_int_array *
std_Head_base_1UL_std_default_delete_int_array_true_M_head
 (_Head_base_1UL_std_default_delete_int_array_true *__b)

{
 _Head_base_1UL_std_default_delete_int_array_true *__b_local;
 
 return &__b->_M_head_impl;
}



/* Function: get @ 00104db0 */

/* DWARF original prototype: pointer get(unique_ptr<int[],_std::default_delete<int[]>_> * this) */

pointer __thiscall
std_unique_ptr_int_array_std_default_delete_int_array_get
 (unique_ptr_int_std_default_delete_int_array *this_ptr)

{
 pointer piVar1;
 unique_ptr_int_std_default_delete_int_array *this_local;
 
 /* try { // try from 00104dc0 to 00104dc4 has its CatchHandler @ 00104dd8 */
 piVar1 = std__uniq_ptr_impl_int_std_default_delete_int_array_M_ptr
 ((__uniq_ptr_impl_int_std_default_delete_int_array *)this_ptr);
 return piVar1;
}



/* Function: _M_ptr @ 00104de0 */

/* DWARF original prototype: pointer _M_ptr(__uniq_ptr_impl<int,_std::default_delete<int[]>_> *
 this) */

pointer __thiscall
std__uniq_ptr_impl_int_std_default_delete_int_array_M_ptr
 (__uniq_ptr_impl_int_std_default_delete_int_array *this_ptr)

{
 int **ppiVar1;
 __uniq_ptr_impl_int_std_default_delete_int_array *this_local;
 
 ppiVar1 = std_get_0UL_int_ptr_std_default_delete_int_array(&this_ptr->_M_t);
 return *ppiVar1;
}



/* Function: get<0UL,_int_*,_std::default_delete<int[]>_> @ 00104e00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<0UL, int *, std::default_delete<int[]> > */

int **
std_get_0UL_int_ptr_std_default_delete_int_array
 (tuple_int_ptr_std_default_delete_int_array *__t)

{
 int **ppiVar1;
 tuple_int_ptr_std_default_delete_int_array *__t_local;
 
 ppiVar1 = std__get_helper_0UL_int_ptr_std_default_delete_int_array
 (&__t->super__Tuple_impl_0UL_int_ptr_std_default_delete_int_array);
 return ppiVar1;
}



/* Function: __get_helper<0UL,_int_*,_std::default_delete<int[]>_> @ 00104e20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<0UL, int *, std::default_delete<int[]> > */

int ** std__get_helper_0UL_int_ptr_std_default_delete_int_array
 (_Tuple_impl_0UL_int_ptr_std_default_delete_int_array *__t)

{
 int **ppiVar1;
 _Tuple_impl_0UL_int_ptr_std_default_delete_int_array *__t_local;
 
 ppiVar1 = std_Tuple_impl_0UL_int_ptr_std_default_delete_int_array_M_head(__t);
 return ppiVar1;
}



/* Function: _M_head @ 00104e40 */

int ** std_Tuple_impl_0UL_int_ptr_std_default_delete_int_array_M_head
 (_Tuple_impl_0UL_int_ptr_std_default_delete_int_array *__t)

{
 int **ppiVar1;
 _Tuple_impl_0UL_int_ptr_std_default_delete_int_array *__t_local;
 
 ppiVar1 = std_Head_base_0UL_int_ptr_false_M_head((_Head_base_0UL_int_ptr_false *)__t);
 return ppiVar1;
}



/* Function: forward<int_*&> @ 00104e60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: forward<int *&> */

int ** std_forward_int_ptr_ref(int **__t)

{
 int **__t_local;
 
 return __t;
}



/* Function: _Head_base<int_*&> @ 00104e70 */

/* DWARF original name: _Head_base<int *&>
 DWARF original prototype: void _Head_base<int_*&>(_Head_base<0UL,_int_*,_false> * this, int * *
 __h) */

void __thiscall
std_Head_base_0UL_int_ptr_false_Head_base_int_ptr_ref
 (_Head_base_0UL_int_ptr_false *this_ptr,int **__h)

{
 int **ppiVar1;
 int **__h_local;
 _Head_base_0UL_int_ptr_false *this_local;
 
 ppiVar1 = std_forward_int_ptr_ref(__h);
 this_ptr->_M_head_impl = *ppiVar1;
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 214 */
