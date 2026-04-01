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
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef void (*code)(void);
typedef void undefined;
typedef void _func_int_varargs;

/* Additional type definitions for decompiled code */
typedef int* pointer;
typedef int* type;
typedef struct { int _M_head_impl; } anon_struct_1_0_00000001_for__M_head_impl;
typedef int* __tuple_element_t;
typedef int* __tuple_element_t_conflict;
typedef struct { int x; int y; } Point;

/* Forward declarations for template functions */
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);

/* Forward declarations for C++ classes */
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct BaseA BaseA;
typedef struct BaseB BaseB;
typedef struct SimpleClass SimpleClass;
typedef struct LifecycleClass LifecycleClass;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct MultiDerived MultiDerived;
typedef struct VirtualBase VirtualBase;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct anon_struct_16_2_484633fb anon_struct_16_2_484633fb;
typedef int deleter_type;
typedef struct BaseException BaseException;
typedef struct DerivedException DerivedException;

/* C++ class definitions */
struct Base {
    _func_int_varargs **_vptr_Base;
};

struct Derived {
    Base super_Base;
    int multiplier;
};

struct BaseA {
    _func_int_varargs **_vptr_BaseA;
    int dataA;
};

struct BaseB {
    _func_int_varargs **_vptr_BaseB;
    int dataB;
};

struct MultiDerived {
    BaseA super_BaseA;
    BaseB super_BaseB;
};

struct VirtualBase {
    _func_int_varargs **_vptr_VirtualBase;
    int data;
};

struct MiddleA {
    _func_int_varargs **_vptr_MiddleA;
    VirtualBase super_VirtualBase;
    int dataA;
    int field_0x10;
};

struct MiddleB {
    _func_int_varargs **_vptr_MiddleB;
    int dataB;
};

struct DiamondDerived {
    MiddleA super_MiddleA;
    MiddleB super_MiddleB;
    int field_0x20;
    int _32_4_;
    int _40_4_;
    long _32_8_;
};

struct RTTIBase {
    _func_int_varargs **_vptr_RTTIBase;
};

struct RTTIDerivedA {
    RTTIBase super_RTTIBase;
};

struct RTTIDerivedB {
    RTTIBase super_RTTIBase;
};

struct SimpleClass {
    int value;
    char name[32];
};

struct LifecycleClass {
    size_t size;
    int *data;
};

struct Point {
    int x;
    int y;
};

struct Container_int {
    int size;
    int data[10];
};

struct Container_double {
    int size;
    double data[10];
};

struct anon_struct_16_2_484633fb {
    int __capture_by_value;
    int *__capture_by_ref;
};

struct BaseException {
    int value;
};

struct DerivedException {
    BaseException super;
};

/* Forward declarations for template classes */
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;

/* Forward declarations for smart_ptr template types */
typedef struct tuple_int_test_cpp_smart_ptr_lambda tuple_int_test_cpp_smart_ptr_lambda;
typedef struct _Tuple_impl_0_int_test_cpp_smart_ptr_lambda _Tuple_impl_0_int_test_cpp_smart_ptr_lambda;
typedef struct _Tuple_impl_1_test_cpp_smart_ptr_lambda _Tuple_impl_1_test_cpp_smart_ptr_lambda;
typedef struct _Head_base_1_test_cpp_smart_ptr_lambda_true _Head_base_1_test_cpp_smart_ptr_lambda_true;
typedef struct _Head_base_0_int_false _Head_base_0_int_false;

/* Forward declarations for unique_ptr types */
typedef struct unique_ptr_int_default_delete unique_ptr_int_default_delete;
typedef struct unique_ptr_int_array_default_delete unique_ptr_int_array_default_delete;
typedef struct unique_ptr_int_lambda unique_ptr_int_lambda;
typedef struct unique_ptr_int_std_default_delete_int unique_ptr_int_std_default_delete_int;

/* Forward declarations for tuple types */
typedef struct tuple_int_ptr_std_default_delete_int tuple_int_ptr_std_default_delete_int;
typedef struct tuple_int_ptr_std_default_delete_int_array tuple_int_ptr_std_default_delete_int_array;
typedef struct _Tuple_impl_0_int_std_default_delete_int _Tuple_impl_0_int_std_default_delete_int;
typedef struct _Tuple_impl_1_std_default_delete_int _Tuple_impl_1_std_default_delete_int;
typedef struct _Tuple_impl_0_int_std_default_delete_int_array _Tuple_impl_0_int_std_default_delete_int_array;
typedef struct _Tuple_impl_1_std_default_delete_int_array _Tuple_impl_1_std_default_delete_int_array;
typedef struct _Head_base_0_int_false _Head_base_0_int_false;
typedef struct _Head_base_1_std_default_delete_int_true _Head_base_1_std_default_delete_int_true;
typedef struct _Head_base_1_std_default_delete_int_array_true _Head_base_1_std_default_delete_int_array_true;
typedef struct __uniq_ptr_impl_int_std_default_delete_int __uniq_ptr_impl_int_std_default_delete_int;
typedef struct __uniq_ptr_impl_int_std_default_delete_int_array __uniq_ptr_impl_int_std_default_delete_int_array;
typedef struct __uniq_ptr_data_int_std_default_delete_int_true_true __uniq_ptr_data_int_std_default_delete_int_true_true;
typedef struct __uniq_ptr_data_int_std_default_delete_int_array_true_true __uniq_ptr_data_int_std_default_delete_int_array_true_true;
typedef struct default_delete_int default_delete_int;
typedef struct default_delete_int_array default_delete_int_array;

/* Forward declarations for operator new/delete functions */
void *operator_new(size_t);
void *operator_new__(size_t);
void operator_delete(void *, size_t);
void operator_delete__(void *);
type *move_unique_ptr_int(unique_ptr_int_default_delete *);

/* Forward declarations for unique_ptr functions */
void unique_ptr_int_default_delete_unique_ptr(unique_ptr_int_default_delete *, pointer);
type unique_ptr_int_default_delete_operator(unique_ptr_int_default_delete *);
void unique_ptr_int_default_delete__unique_ptr(unique_ptr_int_default_delete *, int);
void unique_ptr_int_array_default_delete_unique_ptr(unique_ptr_int_array_default_delete *, pointer);
type unique_ptr_int_array_default_delete_operator(unique_ptr_int_array_default_delete *, size_t);
void unique_ptr_int_array_default_delete__unique_ptr(unique_ptr_int_array_default_delete *, int);
void unique_ptr_int_lambda_unique_ptr(unique_ptr_int_lambda *, pointer, anon_struct_1_0_00000001_for__M_head_impl *);
type unique_ptr_int_lambda_operator(unique_ptr_int_lambda *);
void unique_ptr_int_lambda__unique_ptr(unique_ptr_int_lambda *, int);

/* Forward declaration for type_info */
typedef struct type_info type_info;

/* Forward declarations for type_info functions */
char * type_info_name(type_info *this);
bool type_info_operator_eq(type_info *this, type_info *__arg);

/* Forward declaration for lambda operator function */
int test_cpp_lambda_anon_struct_16_2_484633fb_operator(anon_struct_16_2_484633fb *this, int x);

/* Forward declarations for MultiDerived functions */
void MultiDerived_MultiDerived(MultiDerived *this);
void MultiDerived__MultiDerived(MultiDerived *this, int __in_chrg);

/* Forward declarations for smart_ptr helper functions */
int ** __get_helper_0_int_test_cpp_smart_ptr_lambda(_Tuple_impl_0_int_test_cpp_smart_ptr_lambda *__t);
int ** _Tuple_impl_0_int_test_cpp_smart_ptr_lambda__M_head(_Tuple_impl_0_int_test_cpp_smart_ptr_lambda *__t);
anon_struct_1_0_00000001_for__M_head_impl * __get_helper_1_test_cpp_smart_ptr_lambda(_Tuple_impl_1_test_cpp_smart_ptr_lambda *__t);
int ** _Head_base_0_int_false__M_head(_Head_base_0_int_false *__b);
anon_struct_1_0_00000001_for__M_head_impl * _Tuple_impl_1_test_cpp_smart_ptr_lambda__M_head(_Tuple_impl_1_test_cpp_smart_ptr_lambda *__t);
anon_struct_1_0_00000001_for__M_head_impl * _Head_base_1_test_cpp_smart_ptr_lambda_true__M_head(_Head_base_1_test_cpp_smart_ptr_lambda_true *__b);

/* Forward declarations for default_delete helper functions */
default_delete_int * __get_helper_1_default_delete(_Tuple_impl_1_std_default_delete_int *__t);
default_delete_int_array * __get_helper_1_default_delete_array(_Tuple_impl_1_std_default_delete_int_array *__t);
int ** __get_helper_0_int_default_delete(_Tuple_impl_0_int_std_default_delete_int *__t);
int ** __get_helper_0_int_default_delete_array(_Tuple_impl_0_int_std_default_delete_int_array *__t);

/* Forward declarations for _M_head functions */
int ** _Tuple_impl_0_int_std_default_delete_int__M_head(_Tuple_impl_0_int_std_default_delete_int *__t);
int ** _Tuple_impl_0_int_std_default_delete_int_array__M_head(_Tuple_impl_0_int_std_default_delete_int_array *__t);
default_delete_int * _Tuple_impl_1_std_default_delete_int__M_head(_Tuple_impl_1_std_default_delete_int *__t);
default_delete_int_array * _Tuple_impl_1_std_default_delete_int_array__M_head(_Tuple_impl_1_std_default_delete_int_array *__t);
default_delete_int * _Head_base_1_std_default_delete_int_true__M_head(_Head_base_1_std_default_delete_int_true *__b);
default_delete_int_array * _Head_base_1_std_default_delete_int_array_true__M_head(_Head_base_1_std_default_delete_int_array_true *__b);

/* Forward declarations for SimpleClass functions */
void SimpleClass_SimpleClass(SimpleClass *this, int v, char *n);
void SimpleClass_setValue(SimpleClass *this, int v);
int SimpleClass_getValue(SimpleClass *this);
int SimpleClass_compute(SimpleClass *this, int x);
int SimpleClass_getClassID(void);

/* Forward declarations for LifecycleClass functions */
void LifecycleClass_LifecycleClass(LifecycleClass *this, size_t s);
int LifecycleClass_getData(LifecycleClass *this, size_t idx);
int LifecycleClass_getInstanceCount(void);
void LifecycleClass__LifecycleClass(LifecycleClass *this, int __in_chrg);

/* Forward declarations for DiamondDerived functions */
void DiamondDerived_DiamondDerived(DiamondDerived *this, int __in_chrg, void **__vtt_parm);
void DiamondDerived__DiamondDerived(DiamondDerived *this, int __in_chrg, void **__vtt_parm);

/* Forward declarations for Point functions */
void Point_Point(Point *this, int _x, int _y);
Point Point_operator_plus(Point *this, Point *other);
bool Point_operator_eq(Point *this, Point *other);
Point *Point_operator_inc(Point *this);

/* Forward declarations for Container_int functions */
void Container_int_Container(Container_int *this);
void Container_int_push(Container_int *this, int value);
int Container_int_get(Container_int *this, int idx);
int Container_int_getSize(Container_int *this);

/* Forward declarations for Container_double functions */
void Container_double_Container(Container_double *this);
void Container_double_push(Container_double *this, double value);
double Container_double_get(Container_double *this, int idx);
int Container_double_getSize(Container_double *this);

/* Forward declarations for Derived functions */
void LifecycleClass_LifecycleClass(LifecycleClass *this, size_t s);
int LifecycleClass_getData(LifecycleClass *this, size_t idx);
int LifecycleClass_getInstanceCount(void);
void LifecycleClass__LifecycleClass(LifecycleClass *this, int __in_chrg);

/* Forward declarations for Derived functions */
void Derived_Derived(Derived *this, int m);
void Derived__Derived(Derived *this, int __in_chrg);
int Derived_virtual_func(Derived *this, int x);

/* Forward declarations for Base functions */
int Base_virtual_func(Base *this, int x);
void Base__Base(Base *this, int __in_chrg);

/* Forward declaration for strlen */
int Base_virtual_func(Base *this, int x);
void Base__Base(Base *this, int __in_chrg);

/* Forward declaration for strlen */
size_t strlen(const char *);

/* Global variables for stack protection */
extern long ___stack_chk_guard;
extern long __stack_chk_guard;
extern void __stack_chk_fail(void *, int, int, long);

/* Global variable for LifecycleClass instance count */
int instance_count = 0;

/* Global variables for C++ runtime */
extern char completed_0;
extern void *__dso_handle;
extern void __cxa_finalize(void *);
extern void deregister_tm_clones(void);
extern void *__cxa_allocate_exception(size_t);
extern void __cxa_throw(void *, void *, void *);
extern void __cxa_bad_typeid(void);
extern void *__dynamic_cast(void *, void *, void *, long);
extern void *__ioinit;
extern void ios_base_Init_Init(void *);
extern void ios_base_Init_destroy(void *);

/* External pointers for vtables */
extern void *PTR_virtual_func_00116b10;
extern void *PTR_virtual_func_00116ae0;
extern void *PTR_funcA_00116ab8;
extern void *PTR_funcB_00116a90;
extern void *PTR_funcA_00116a38;
extern void *PTR_funcB_00116a68;
extern void *PTR_func_00116a10;
extern void *PTR_func_00116878;
extern void *PTR_func_001168e0;
extern void *PTR_func_001168a8;
extern void *PTR__RTTIBase_00116848;
extern void *PTR__RTTIDerivedA_00116820;
extern void *PTR__RTTIDerivedB_001167f8;

/* External function declarations for stdio */
extern int puts(const char *);
extern int printf(const char *, ...);

/* External function declarations for C++ runtime */
extern int __cxa_atexit(void *, void *, void *);
extern void __cxa_throw_bad_array_new_length(void);

/* External data for string literals */
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

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-1/5-1_gcc_O0_g
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

int test_cpp_member_func(void)

{
 long lVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int r1;
 int r2;
 int r3;
 SimpleClass obj;
 
 lVar1 = ___stack_chk_guard;
 SimpleClass_SimpleClass(&obj,5,"Test");
 SimpleClass_setValue(&obj,10);
 iVar2 = SimpleClass_getValue(&obj);
 iVar3 = SimpleClass_compute(&obj,3);
 iVar4 = SimpleClass_getClassID();
 iVar4 = iVar2 + iVar3 + iVar4;
 if (lVar1 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,iVar4,0,lVar1 - ___stack_chk_guard);
 }
 return iVar4;
}



/* Function: test_cpp_constructor @ 00101bbc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 long lVar1;
 int iVar2;
 int __in_chrg;
 int iVar3;
 int result;
 LifecycleClass obj;
 
 lVar1 = ___stack_chk_guard;
 LifecycleClass_LifecycleClass(&obj,5);
 iVar2 = LifecycleClass_getData(&obj,2);
 __in_chrg = LifecycleClass_getInstanceCount();
 LifecycleClass__LifecycleClass(&obj,__in_chrg);
 iVar3 = LifecycleClass_getInstanceCount();
 iVar2 = iVar2 + __in_chrg + iVar3 * 1000;
 if (lVar1 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,iVar2,0,lVar1 - ___stack_chk_guard);
 }
 return iVar2;
}



/* Function: call_virtual_func @ 00101c70 */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 int x_local;
 Base *obj_local;
 
 iVar1 = (**obj->_vptr_Base)(obj,(ulong)(uint)x);
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 00101ca0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
 long lVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 int __in_chrg;
 int r1;
 int r2;
 int r3;
 int r4;
 Base base;
 Base *pb;
 Base *pd;
 Derived derived;
 
 lVar1 = ___stack_chk_guard;
 base._vptr_Base = (_func_int_varargs **)&PTR_virtual_func_00116b10;
 Derived_Derived(&derived,3);
 iVar2 = Base_virtual_func(&base,5);
 iVar3 = Derived_virtual_func(&derived,5);
 /* try { // try from 00101d10 to 00101d23 has its CatchHandler @ 00101d78 */
 iVar4 = call_virtual_func(&base,5);
 iVar5 = call_virtual_func((Base*)&derived,5);
 iVar4 = iVar2 + iVar3 + iVar4;
 iVar5 = iVar4 + iVar5;
 Derived__Derived(&derived,iVar4);
 Base__Base(&base,__in_chrg);
 if (lVar1 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,iVar5,0,lVar1 - ___stack_chk_guard);
 }
 return iVar5;
}



/* Function: test_cpp_multiple_inheritance @ 00101da8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
 int iVar1;
 long lVar2;
 int iVar3;
 int iVar4;
 int r1;
 int r2;
 int ptr_equal;
 BaseA *pa;
 BaseB *pb;
 MultiDerived obj;
 
 lVar2 = ___stack_chk_guard;
 MultiDerived_MultiDerived(&obj);
 obj.super_BaseA.dataA = 100;
 obj.super_BaseB.dataB = 200;
 /* try { // try from 00101e04 to 00101e1f has its CatchHandler @ 00101e7c */
 iVar3 = (**obj.super_BaseA._vptr_BaseA)(&obj);
 iVar4 = (**obj.super_BaseB._vptr_BaseB)(&obj.super_BaseB);
 iVar1 = iVar3 + iVar4 + (uint)(&obj != (MultiDerived *)&obj.super_BaseB);
 MultiDerived__MultiDerived(&obj,iVar3 + iVar4);
 if (lVar2 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,iVar1,0,lVar2 - ___stack_chk_guard);
 }
 return iVar1;
}



/* Function: test_cpp_diamond_inheritance @ 00101ea4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

int test_cpp_diamond_inheritance(void)

{
 long lVar1;
 int __in_chrg;
 int iVar2;
 void **in_x2;
 int r1;
 int r2;
 VirtualBase *pb;
 DiamondDerived obj;
 
 lVar1 = ___stack_chk_guard;
 DiamondDerived_DiamondDerived(&obj,0,in_x2);
 obj._40_4_ = 0x32;
 /* try { // try from 00101ef0 to 00101f13 has its CatchHandler @ 00101f50 */
 __in_chrg = ((code*)obj._32_8_)(&obj.field_0x20);
 obj._40_4_ = 100;
 iVar2 = ((code*)obj._32_8_)(&obj.field_0x20);
 DiamondDerived__DiamondDerived(&obj,__in_chrg,in_x2);
 if (lVar1 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,__in_chrg + iVar2,0,lVar1 - ___stack_chk_guard);
 }
 return __in_chrg + iVar2;
}



/* Function: test_cpp_operator_overload @ 00101f78 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 long lVar1;
 bool bVar2;
 int iVar3;
 bool eq;
 Point p1;
 Point p2;
 Point p3;
 
 lVar1 = ___stack_chk_guard;
 Point_Point(&p1,1,2);
 Point_Point(&p2,3,4);
 p3 = Point_operator_plus(&p1,&p2);
 bVar2 = Point_operator_eq(&p1,&p2);
 Point_operator_inc(&p3);
 if (bVar2) {
 iVar3 = 0;
 }
 else {
 iVar3 = 10;
 }
 iVar3 = iVar3 + p3.x + p3.y;
 if (lVar1 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,iVar3,0,lVar1 - ___stack_chk_guard);
 }
 return iVar3;
}



/* Function: test_cpp_template_func @ 00102034 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 int iVar1;
 int a;
 int b;
 int r1;
 double r2;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 r1 = template_max_int(3,7);
 r2 = template_max_double(2.5,1.5);
 a = 10;
 b = 0x14;
 template_swap_int(&a,&b);
 iVar1 = (int)r2 + r1 + a + b;
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,iVar1,0,local_8 - ___stack_chk_guard);
 }
 return iVar1;
}



/* Function: test_cpp_template_class @ 001020dc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
 long lVar1;
 int iVar2;
 int iVar3;
 double dVar4;
 int r1;
 int r2;
 double r3;
 Container_int int_container;
 Container_double double_container;
 
 lVar1 = ___stack_chk_guard;
 Container_int_Container(&int_container);
 Container_int_push(&int_container,10);
 Container_int_push(&int_container,0x14);
 Container_int_push(&int_container,0x1e);
 iVar2 = Container_int_get(&int_container,0);
 iVar3 = Container_int_getSize(&int_container);
 Container_double_Container(&double_container);
 Container_double_push(&double_container,3.14);
 dVar4 = Container_double_get(&double_container,0);
 iVar2 = iVar2 + iVar3 + (int)dVar4;
 if (lVar1 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,iVar2,0,lVar1 - ___stack_chk_guard);
 }
 return iVar2;
}



/* Function: operator() @ 001021b0 */

/* DWARF original prototype: int operator()(anon_struct_16_2_484633fb * __closure, int x) */

int __thiscall
test_cpp_lambda_anon_struct_16_2_484633fb_operator(anon_struct_16_2_484633fb *this,int x)

{
 int x_local;
 int *capture_by_value;
 
 /* Unresolved local var: int * capture_by_ref@[???] */
 *this->__capture_by_ref = *this->__capture_by_ref + 5;
 return this->__capture_by_value * x + *this->__capture_by_ref;
}



/* Function: test_cpp_lambda @ 00102200 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
 long lVar1;
 int capture_by_ref;
 int capture_by_value;
 int r1;
 int r2;
 anon_struct_16_2_484633fb lambda1;
 
 lVar1 = ___stack_chk_guard;
 capture_by_value = 10;
 capture_by_ref = 0x14;
 lambda1.__capture_by_value = 10;
 lambda1.__capture_by_ref = &capture_by_ref;
 r1 = test_cpp_lambda_anon_struct_16_2_484633fb_operator(&lambda1,3);
 r2 = 0x1e;
 if (lVar1 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,r1 + 0x1e,0,lVar1 - ___stack_chk_guard);
 }
 return r1 + 0x1e;
}



/* Function: test_cpp_exception @ 00102290 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 undefined4 *puVar1;
 int result;
 int e;
 int e_1;
 BaseException *e_3;
 DerivedException *e_2;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 001022bc to 001022bf has its CatchHandler @ 001022c8 */
 __cxa_throw(puVar1,(void*)0,0);
}



/* Function: operator() @ 001023b4 */

/* DWARF original prototype: void operator()(anon_struct_1_0_00000001_for__M_head_impl * __closure,
 int * p) */

void __thiscall
std_Head_base_1_test_cpp_smart_ptr_lambda_true_anon_struct_1_0_00000001_for__M_head_impl_operator
 (anon_struct_1_0_00000001_for__M_head_impl *this,int *p);

void __thiscall
std_Head_base_1_test_cpp_smart_ptr_lambda_true_anon_struct_1_0_00000001_for__M_head_impl_operator
 (anon_struct_1_0_00000001_for__M_head_impl *this,int *p)

{
 int *p_local;
 anon_struct_1_0_00000001_for__M_head_impl *this_local;
 
 *p = -1;
 if (p != (int *)0x0) {
 operator_delete(p,4);
 }
 return;
}



/* Function: test_cpp_smart_ptr @ 001023f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 long lVar4;
 pointer __p;
 type piVar5;
 type *ptVar6;
 int *__p_00;
 pointer __p_01;
 int __in_chrg;
 int __in_chrg_00;
 int __in_chrg_01;
 anon_struct_1_0_00000001_for__M_head_impl deleter;
 int r1;
 int r2;
 int r3;
 unique_ptr_int_default_delete ptr1;
 unique_ptr_int_default_delete ptr2;
 unique_ptr_int_array_default_delete arr;
 unique_ptr_int_lambda ptr3;
 
 lVar4 = ___stack_chk_guard;
 __p = operator_new(4);
 *__p = 100;
 unique_ptr_int_default_delete_unique_ptr(&ptr1,__p);
 piVar5 = unique_ptr_int_default_delete_operator(&ptr1);
 *piVar5 = 200;
 ptVar6 = move_unique_ptr_int(&ptr1);
 unique_ptr_int_default_delete_unique_ptr(&ptr2,ptVar6);
 piVar5 = unique_ptr_int_default_delete_operator(&ptr2);
 iVar2 = *piVar5;
 /* try { // try from 0010246c to 0010246f has its CatchHandler @ 00102570 */
 __p_00 = operator_new__(0x14);
 *__p_00 = 1;
 __p_00[1] = 2;
 __p_00[2] = 3;
 __p_00[3] = 4;
 __p_00[4] = 5;
 unique_ptr_int_array_default_delete_unique_ptr(&arr,__p_00);
 piVar5 = unique_ptr_int_array_default_delete_operator(&arr,2);
 iVar3 = *piVar5;
 /* try { // try from 001024d4 to 001024d7 has its CatchHandler @ 00102560 */
 __p_01 = operator_new(4);
 *__p_01 = 500;
 unique_ptr_int_lambda_unique_ptr(&ptr3,__p_01,&deleter);
 piVar5 = unique_ptr_int_lambda_operator(&ptr3);
 iVar1 = iVar2 + iVar3 + *piVar5;
 unique_ptr_int_lambda__unique_ptr(&ptr3,iVar2 + iVar3);
 unique_ptr_int_array_default_delete__unique_ptr(&arr,__in_chrg);
 unique_ptr_int_default_delete__unique_ptr(&ptr2,__in_chrg_00);
 unique_ptr_int_default_delete__unique_ptr(&ptr1,__in_chrg_01);
 if (lVar4 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,iVar1,0,lVar4 - ___stack_chk_guard);
 }
 return iVar1;
}



/* Function: test_cpp_rtti @ 001025a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 bool bVar1;
 int iVar2;
 RTTIDerivedA *this;
 RTTIDerivedB *this_00;
 RTTIDerivedA *this_01;
 RTTIDerivedB *this_02;
 char *__s;
 size_t sVar3;
 int result;
 RTTIBase *obj1;
 RTTIBase *obj2;
 RTTIDerivedA *derivedA;
 RTTIDerivedB *derivedB;
 
 this = operator_new(8);
 (this->super_RTTIBase)._vptr_RTTIBase = (_func_int_varargs **)0x0;
 RTTIDerivedA_RTTIDerivedA(this);
 this_00 = operator_new(8);
 (this_00->super_RTTIBase)._vptr_RTTIBase = (_func_int_varargs **)0x0;
 RTTIDerivedB_RTTIDerivedB(this_00);
 result = 0;
 if (this == (RTTIDerivedA *)0x0) {
 __cxa_bad_typeid();
LAB_00102620:
 result = 10;
 }
 else {
 bVar1 = type_info_operator_eq
           ((type_info *)(this->super_RTTIBase)._vptr_RTTIBase[-1],
            (type_info *)&PTR__RTTIDerivedA_00116820);
 if (bVar1) goto LAB_00102620;
 }
 if (this_00 == (RTTIDerivedB *)0x0) {
 __cxa_bad_typeid();
LAB_00102664:
 result = result + 0x14;
 }
 else {
 bVar1 = type_info_operator_eq
           ((type_info *)(this_00->super_RTTIBase)._vptr_RTTIBase[-1],
            (type_info *)&PTR__RTTIDerivedB_001167f8);
 if (bVar1) goto LAB_00102664;
 }
 if (this == (RTTIDerivedA *)0x0) {
 this_01 = (RTTIDerivedA *)0x0;
 }
 else {
 this_01 = (RTTIDerivedA *)__dynamic_cast(this,(void*)0,(void*)0,0);
 }
 if (this_01 != (RTTIDerivedA *)0x0) {
 iVar2 = RTTIDerivedA::derivedA_data(this_01);
 result = result + iVar2;
 }
 if (this_00 == (RTTIDerivedB *)0x0) {
 this_02 = (RTTIDerivedB *)0x0;
 }
 else {
 this_02 = (RTTIDerivedB *)__dynamic_cast(this_00,(void*)0,(void*)0,0);
 }
 if (this_02 != (RTTIDerivedB *)0x0) {
 iVar2 = RTTIDerivedB::derivedB_data(this_02);
 result = result + iVar2;
 }
 if (this == (RTTIDerivedA *)0x0) {
 __cxa_bad_typeid();
 }
 else {
 __s = type_info_name((type_info *)(this->super_RTTIBase)._vptr_RTTIBase[-1]);
 sVar3 = strlen(__s);
 result = (int)sVar3 + result;
 }
 ((code*)(this->super_RTTIBase)._vptr_RTTIBase[1])();
LAB_00102768:
 if (this_00 != (RTTIDerivedB *)0x0) {
 ((code*)(this_00->super_RTTIBase)._vptr_RTTIBase[1])();
 }
 return result;
}



/* Function: test_cpp_oo_features @ 00102794 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void test_cpp_oo_features(void)

{
 uint uVar1;
 
 puts((const char *)&DAT_001045e8);
 uVar1 = test_cpp_member_func();
 printf((const char *)&DAT_00104610,(ulong)uVar1);
 uVar1 = test_cpp_constructor();
 printf((const char *)&DAT_00104630,(ulong)uVar1);
 uVar1 = test_cpp_virtual_func();
 printf((const char *)&DAT_00104650,(ulong)uVar1);
 uVar1 = test_cpp_multiple_inheritance();
 printf((const char *)&DAT_00104670,(ulong)uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 printf((const char *)&DAT_00104690,(ulong)uVar1);
 uVar1 = test_cpp_operator_overload();
 printf((const char *)&DAT_001046b0,(ulong)uVar1);
 uVar1 = test_cpp_template_func();
 printf((const char *)&DAT_001046d0,(ulong)uVar1);
 uVar1 = test_cpp_template_class();
 printf((const char *)&DAT_001046f0,(ulong)uVar1);
 uVar1 = test_cpp_lambda();
 printf((const char *)&DAT_00104710,(ulong)uVar1);
 uVar1 = test_cpp_exception();
 printf((const char *)&DAT_00104730,(ulong)uVar1);
 uVar1 = test_cpp_smart_ptr();
 printf((const char *)&DAT_00104750,(ulong)uVar1);
 uVar1 = test_cpp_rtti();
 printf((const char *)&DAT_00104770,(ulong)uVar1);
 return;
}



/* Function: main @ 001028a4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: __uniq_ptr_data @ 001028bc */

void __thiscall
__uniq_ptr_data_int_test_cpp_smart_ptr_lambda_true_false___uniq_ptr_data
 (__uniq_ptr_data_int_test_cpp_smart_ptr_lambda_true_false *this,
 pointer param_1,anon_struct_1_0_00000001_for__M_head_impl *param_2)

{
 anon_struct_1_0_00000001_for__M_head_impl *param_2_local;
 pointer param_1_local;
 
 __uniq_ptr_impl_int_test_cpp_smart_ptr_lambda___uniq_ptr_impl
 (&this->super___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda,param_1,
 param_2);
 return;
}



/* Function: unique_ptr @ 001028ec */

void __thiscall
unique_ptr_int_test_cpp_smart_ptr_lambda_unique_ptr
 (unique_ptr_int_test_cpp_smart_ptr_lambda *this,pointer __p,
 deleter_type *__d)

{
 deleter_type *__d_local;
 pointer __p_local;
 
 __uniq_ptr_data_int_test_cpp_smart_ptr_lambda_true_false___uniq_ptr_data(&this->_M_t,__p,__d);
 return;
}



/* Function: unique_ptr_destroy @ 0010291c */

void __thiscall
unique_ptr_int_test_cpp_smart_ptr_lambda__unique_ptr
 (unique_ptr_int_test_cpp_smart_ptr_lambda *this,int __in_chrg)

{
 pointer *__t;
 deleter_type *this_00;
 type *ppiVar1;
 int **__ptr;
 
 __t = __uniq_ptr_impl_int_test_cpp_smart_ptr_lambda__M_ptr
 ((__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda *)this);
 if (*__t != (pointer)0x0) {
 this_00 = get_deleter(this);
 ppiVar1 = move_int_ptr_ref(__t);
 std_Head_base_1_test_cpp_smart_ptr_lambda_true_anon_struct_1_0_00000001_for__M_head_impl_operator(this_00,*ppiVar1);
 }
 *__t = (pointer)0x0;
 return;
}



/* Function: operator* @ 00102984 */

type __thiscall
unique_ptr_int_test_cpp_smart_ptr_lambda_operator
 (unique_ptr_int_test_cpp_smart_ptr_lambda *this)

{
 pointer piVar1;
 
 piVar1 = unique_ptr_int_test_cpp_smart_ptr_lambda_get(this);
 return piVar1;
}



/* Function: __uniq_ptr_impl @ 001029a8 */

void __thiscall
__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda___uniq_ptr_impl
 (__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda *this,pointer __p,
 anon_struct_1_0_00000001_for__M_head_impl *__d)

{
 anon_struct_1_0_00000001_for__M_head_impl *__a2;
 anon_struct_1_0_00000001_for__M_head_impl *__d_local;
 pointer __p_local;
 
 __p_local = __p;
 __a2 = forward_const_test_cpp_smart_ptr_lambda_int_ref(__d);
 tuple_int_test_cpp_smart_ptr_lambda_tuple_int_ptr_ref_const_test_cpp_smart_ptr_lambda_ref(&this->_M_t,&__p_local,__a2);
 return;
}



/* Function: _M_ptr @ 001029f4 */

pointer * __thiscall
__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda__M_ptr
 (__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda *this)

{
 __tuple_element_t *ppiVar1;
 
 ppiVar1 = get_0_int_test_cpp_smart_ptr_lambda(&this->_M_t);
 return ppiVar1;
}



/* Function: get_deleter @ 00102a10 */

deleter_type * __thiscall
unique_ptr_int_test_cpp_smart_ptr_lambda_get_deleter
 (unique_ptr_int_test_cpp_smart_ptr_lambda *this)

{
 anon_struct_1_0_00000001_for__M_head_impl *paVar1;
 
 paVar1 = __uniq_ptr_impl_int_test_cpp_smart_ptr_lambda__M_deleter
 ((__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda *)this);
 return paVar1;
}



/* Function: get @ 00102a2c */

pointer __thiscall
unique_ptr_int_test_cpp_smart_ptr_lambda_get
 (unique_ptr_int_test_cpp_smart_ptr_lambda *this)

{
 pointer piVar1;
 
 piVar1 = __uniq_ptr_impl_int_test_cpp_smart_ptr_lambda__M_ptr
 ((__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda *)this);
 return piVar1;
}



/* Function: forward<const_test_cpp_smart_ptr()::<lambda(int*)>&> @ 00102a48 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: forward<const test_cpp_smart_ptr()::<lambda(int*)>&> */

anon_struct_1_0_00000001_for__M_head_impl *
forward_const_test_cpp_smart_ptr_lambda_int_ref(type *__t)

{
 type *__t_local;
 
 return __t;
}



/* Function: tuple @ 00102a5c */

void __thiscall
tuple_int_test_cpp_smart_ptr_lambda_tuple_int_ptr_ref_const_test_cpp_smart_ptr_lambda_ref
 (tuple_int_test_cpp_smart_ptr_lambda *this,int **__a1,
 anon_struct_1_0_00000001_for__M_head_impl *__a2)

{
 int **__head;
 anon_struct_1_0_00000001_for__M_head_impl *__a2_local;
 int **__a1_local;
 
 __head = forward_int_ptr_ref(__a1);
 forward_const_test_cpp_smart_ptr_lambda_int_ref(__a2);
 _Tuple_impl_0_int_test_cpp_smart_ptr_lambda__Tuple_impl_int_ptr_ref_const_test_cpp_smart_ptr_lambda_ref
 (&this->super__Tuple_impl_0_int_test_cpp_smart_ptr_lambda,__head);
 return;
}



/* Function: get_0_int_test_cpp_smart_ptr_lambda @ 00102aac */

__tuple_element_t *
get_0_int_test_cpp_smart_ptr_lambda
 (tuple_int_test_cpp_smart_ptr_lambda *__t)

{
 int **ppiVar1;
 
 ppiVar1 = __get_helper_0_int_test_cpp_smart_ptr_lambda
 (&__t->super__Tuple_impl_0_int_test_cpp_smart_ptr_lambda);
 return ppiVar1;
}



/* Function: _M_deleter @ 00102ac8 */

anon_struct_1_0_00000001_for__M_head_impl * __thiscall
__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda__M_deleter
 (__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda *this)

{
 __tuple_element_t_conflict *p_Var1;
 
 p_Var1 = get_1_int_test_cpp_smart_ptr_lambda(&this->_M_t);
 return p_Var1;
}



/* Function: _M_ptr @ 00102ae4 */

pointer __thiscall
__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda__M_ptr
 (__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda *this)

{
 __tuple_element_t *ppiVar1;
 
 ppiVar1 = get_0_int_test_cpp_smart_ptr_lambda(&this->_M_t);
 return *ppiVar1;
}



/* Function: _Tuple_impl @ 00102b04 */

void __thiscall
_Tuple_impl_0_int_test_cpp_smart_ptr_lambda__Tuple_impl_int_ptr_ref_const_test_cpp_smart_ptr_lambda_ref
 (_Tuple_impl_0_int_test_cpp_smart_ptr_lambda *this,int **__head)

{
 anon_struct_1_0_00000001_for__M_head_impl *__head_00;
 int **__h;
 type *in_x2;
 int **__head_local;
 
 __head_00 = forward_const_test_cpp_smart_ptr_lambda_int_ref(in_x2);
 _Tuple_impl_1_test_cpp_smart_ptr_lambda__Tuple_impl
 (&this->super__Tuple_impl_1_test_cpp_smart_ptr_lambda,__head_00);
 __h = forward_int_ptr_ref(__head);
 _Head_base_0_int_false__Head_base_int_ptr_ref((_Head_base_0_int_false *)this,__h);
 return;
}



/* Function: __get_helper_0_int_test_cpp_smart_ptr_lambda @ 00102b58 */

int ** __get_helper_0_int_test_cpp_smart_ptr_lambda
 (_Tuple_impl_0_int_test_cpp_smart_ptr_lambda *__t)

{
 int **ppiVar1;
 
 ppiVar1 = _Tuple_impl_0_int_test_cpp_smart_ptr_lambda__M_head(__t);
 return ppiVar1;
}



/* Function: get_1_int_test_cpp_smart_ptr_lambda @ 00102b74 */

__tuple_element_t_conflict *
get_1_int_test_cpp_smart_ptr_lambda
 (tuple_int_test_cpp_smart_ptr_lambda *__t)

{
 anon_struct_1_0_00000001_for__M_head_impl *paVar1;
 
 paVar1 = __get_helper_1_test_cpp_smart_ptr_lambda
 ((_Tuple_impl_1_test_cpp_smart_ptr_lambda *)__t);
 return paVar1;
}



/* Function: get_0_int_test_cpp_smart_ptr_lambda @ 00102b90 */

__tuple_element_t *
get_0_int_test_cpp_smart_ptr_lambda
 (tuple_int_test_cpp_smart_ptr_lambda *__t)

{
 int **ppiVar1;
 
 ppiVar1 = __get_helper_0_int_test_cpp_smart_ptr_lambda
 (&__t->super__Tuple_impl_0_int_test_cpp_smart_ptr_lambda);
 return ppiVar1;
}



/* Function: _Tuple_impl @ 00102bac */

void __thiscall
_Tuple_impl_1_test_cpp_smart_ptr_lambda__Tuple_impl
 (_Tuple_impl_1_test_cpp_smart_ptr_lambda *this,
 anon_struct_1_0_00000001_for__M_head_impl *__head)

{
 anon_struct_1_0_00000001_for__M_head_impl *__head_local;
 
 _Head_base_1_test_cpp_smart_ptr_lambda_true__Head_base
 (&this->super__Head_base_1_test_cpp_smart_ptr_lambda_true,__head);
 return;
}



/* Function: _M_head @ 00102bd4 */

int ** _Tuple_impl_0_int_test_cpp_smart_ptr_lambda__M_head
 (_Tuple_impl_0_int_test_cpp_smart_ptr_lambda *__t)

{
 int **ppiVar1;
 
 ppiVar1 = _Head_base_0_int_false__M_head((_Head_base_0_int_false *)__t);
 return ppiVar1;
}



/* Function: __get_helper_1_test_cpp_smart_ptr_lambda @ 00102bf0 */

anon_struct_1_0_00000001_for__M_head_impl *
__get_helper_1_test_cpp_smart_ptr_lambda
 (_Tuple_impl_1_test_cpp_smart_ptr_lambda *__t)

{
 anon_struct_1_0_00000001_for__M_head_impl *paVar1;
 
 paVar1 = _Tuple_impl_1_test_cpp_smart_ptr_lambda__M_head(__t);
 return paVar1;
}



/* Function: __get_helper_0_int_test_cpp_smart_ptr_lambda @ 00102c0c */

int ** __get_helper_0_int_test_cpp_smart_ptr_lambda
 (_Tuple_impl_0_int_test_cpp_smart_ptr_lambda *__t)

{
 int **ppiVar1;
 
 ppiVar1 = _Tuple_impl_0_int_test_cpp_smart_ptr_lambda__M_head(__t);
 return ppiVar1;
}



/* Function: _Head_base @ 00102c28 */

void __thiscall
_Head_base_1_test_cpp_smart_ptr_lambda_true__Head_base
 (_Head_base_1_test_cpp_smart_ptr_lambda_true *this,
 anon_struct_1_0_00000001_for__M_head_impl *__h)

{
 anon_struct_1_0_00000001_for__M_head_impl *__h_local;
 
 return;
}



/* Function: _M_head @ 00102c40 */

anon_struct_1_0_00000001_for__M_head_impl *
_Tuple_impl_1_test_cpp_smart_ptr_lambda__M_head
 (_Tuple_impl_1_test_cpp_smart_ptr_lambda *__t)

{
 anon_struct_1_0_00000001_for__M_head_impl *paVar1;
 
 paVar1 = _Head_base_1_test_cpp_smart_ptr_lambda_true__M_head
 (&__t->super__Head_base_1_test_cpp_smart_ptr_lambda_true);
 return paVar1;
}



/* Function: _M_head @ 00102c5c */

int ** _Tuple_impl_0_int_test_cpp_smart_ptr_lambda__M_head
 (_Tuple_impl_0_int_test_cpp_smart_ptr_lambda *__t)

{
 int **ppiVar1;
 
 ppiVar1 = _Head_base_0_int_false__M_head((_Head_base_0_int_false *)__t);
 return ppiVar1;
}



/* Function: _M_head @ 00102c78 */

anon_struct_1_0_00000001_for__M_head_impl *
_Head_base_1_test_cpp_smart_ptr_lambda_true__M_head
 (_Head_base_1_test_cpp_smart_ptr_lambda_true *__b)

{
 
 return &__b->_M_head_impl;
}



/* Function: __static_initialization_and_destruction_0 @ 00102c8c */

void __static_initialization_and_destruction_0(int __initialize_p,int __priority)

{
 int __priority_local;
 int __initialize_p_local;
 
 if ((__initialize_p == 1) && (__priority == 0xffff)) {
 ios_base_Init_Init(&__ioinit);
 __cxa_atexit(ios_base_Init_destroy,&__ioinit,&__dso_handle);
 }
 return;
}



/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 00102cec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I__Z20test_cpp_member_funcv(void)

{
 __static_initialization_and_destruction_0(1,0xffff);
 return;
}



/* Function: name @ 00102d08 */

/* DWARF original prototype: char * name(type_info * this) */

char * __thiscall type_info_name(type_info *this)

{
 char *pcVar1;
 type_info *this_local;
 
 if (**(char **)(this + 8) == '*') {
 pcVar1 = (char *)(*(long *)(this + 8) + 1);
 }
 else {
 pcVar1 = *(char **)(this + 8);
 }
 return pcVar1;
}



/* Function: operator== @ 00102d44 */

/* DWARF original prototype: bool operator==(type_info * this, type_info * __arg) */

bool __thiscall type_info_operator_eq(type_info *this,type_info *__arg)

{
 bool bVar1;
 int iVar2;
 type_info *__arg_local;
 type_info *this_local;
 
 if ((*(long *)(this + 8) == *(long *)(__arg + 8)) ||
 ((**(char **)(this + 8) != '*' &&
 (iVar2 = strcmp(*(char **)(this + 8),*(char **)(__arg + 8)), iVar2 == 0)))) {
 bVar1 = true;
 }
 else {
 bVar1 = false;
 }
 return bVar1;
}



/* Function: SimpleClass @ 00102db8 */

/* DWARF original prototype: void SimpleClass(SimpleClass * this, int v, char * n) */

void __thiscall SimpleClass_SimpleClass(SimpleClass *this,int v,char *n)

{
 char *n_local;
 int v_local;
 SimpleClass *this_local;
 
 this->value = v;
 strncpy(this->name,n,0x1f);
 this->name[0x1f] = '\0';
 return;
}



/* Function: getValue @ 00102e00 */

/* DWARF original prototype: int getValue(SimpleClass * this) */

int __thiscall SimpleClass_getValue(SimpleClass *this)

{
 SimpleClass *this_local;
 
 return this->value;
}



/* Function: setValue @ 00102e18 */

/* DWARF original prototype: void setValue(SimpleClass * this, int v) */

void __thiscall SimpleClass_setValue(SimpleClass *this,int v)

{
 int v_local;
 SimpleClass *this_local;
 
 this->value = v;
 return;
}



/* Function: compute @ 00102e3c */

/* DWARF original prototype: int compute(SimpleClass * this, int x) */

int __thiscall SimpleClass_compute(SimpleClass *this,int x)

{
 int iVar1;
 size_t sVar2;
 int x_local;
 SimpleClass *this_local;
 
 iVar1 = this->value;
 sVar2 = strlen(this->name);
 return iVar1 * x + (int)sVar2;
}



/* Function: getClassID @ 00102e80 */

int SimpleClass_getClassID(void)

{
 return 0x1234;
}



/* Function: LifecycleClass @ 00102e88 */

/* DWARF original prototype: void LifecycleClass(LifecycleClass * this, size_t s) */

void __thiscall LifecycleClass_LifecycleClass(LifecycleClass *this,size_t s)

{
 int *piVar1;
 size_t s_local;
 LifecycleClass *this_local;
 size_t i;
 
 this->size = s;
 if (s < 0x1fffffffffffffff) {
 piVar1 = operator_new__(s << 2);
 this->data = piVar1;
 for (i = 0; i < s; i = i + 1) {
LAB_00102ed4:
 this->data[i] = (int)i * 10;
 }
 instance_count = instance_count + 1;
 return;
 }
 __cxa_throw_bad_array_new_length();
 goto LAB_00102ed4;
}



/* Function: ~LifecycleClass @ 00102f50 */

/* DWARF original prototype: void ~LifecycleClass(LifecycleClass * this, int __in_chrg) */

void __thiscall LifecycleClass__LifecycleClass(LifecycleClass *this,int __in_chrg)

{
 LifecycleClass *this_local;
 
 if (this->data != (int *)0x0) {
 operator_delete__(this->data);
 }
 instance_count = instance_count + -1;
 return;
}



/* Function: getData @ 00102fa0 */

/* DWARF original prototype: int getData(LifecycleClass * this, size_t idx) */

int __thiscall LifecycleClass_getData(LifecycleClass *this,size_t idx)

{
 int iVar1;
 size_t idx_local;
 LifecycleClass *this_local;
 
 if (idx < this->size) {
 iVar1 = this->data[idx];
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: getInstanceCount @ 00102fe8 */

int LifecycleClass_getInstanceCount(void)

{
 return instance_count;
}



/* Function: virtual_func @ 00102ff8 */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int __thiscall Base_virtual_func(Base *this,int x)

{
 int x_local;
 Base *this_local;
 
 return x + 1;
}



/* Function: getName @ 00103014 */

/* DWARF original prototype: char * getName(Base * this) */

char * __thiscall Base_getName(Base *this)

{
 Base *this_local;
 
 return "Base";
}



/* Function: ~Base @ 0010302c */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void __thiscall Base__Base(Base *this,int __in_chrg)

{
 Base *this_local;
 
 this->_vptr_Base = (_func_int_varargs **)&PTR_virtual_func_00116b10;
 return;
}



/* Function: ~Base @ 00103050 */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void __thiscall Base::~Base(Base *this,int __in_chrg)

{
 Base *this_local;
 
 ~Base(this,__in_chrg);
 operator_delete(this,8);
 return;
}



/* Function: Base @ 00103078 */

/* DWARF original prototype: void Base(Base * this) */

void __thiscall Base_Base(Base *this)

{
 Base *this_local;
 
 this->_vptr_Base = (_func_int_varargs **)&PTR_virtual_func_00116b10;
 return;
}



/* Function: Derived @ 0010309c */

/* DWARF original prototype: void Derived(Derived * this, int m) */

void __thiscall Derived_Derived(Derived *this,int m)

{
 int m_local;
 Derived *this_local;
 
 Base_Base(&this->super_Base);
 (this->super_Base)._vptr_Base = (_func_int_varargs **)&PTR_virtual_func_00116ae0;
 this->multiplier = m;
 return;
}



/* Function: virtual_func @ 001030dc */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int __thiscall Derived_virtual_func(Derived *this,int x)

{
 int x_local;
 Derived *this_local;
 
 return this->multiplier * x;
}



/* Function: getName @ 00103100 */

/* DWARF original prototype: char * getName(Derived * this) */

char * __thiscall Derived_getName(Derived *this)

{
 Derived *this_local;
 
 return "Derived";
}



/* Function: funcA @ 00103118 */

/* DWARF original prototype: int funcA(BaseA * this) */

int __thiscall BaseA_funcA(BaseA *this)

{
 BaseA *this_local;
 
 return 10;
}



/* Function: ~BaseA @ 0010312c */

/* DWARF original prototype: void ~BaseA(BaseA * this, int __in_chrg) */

void __thiscall BaseA__BaseA(BaseA *this,int __in_chrg)

{
 BaseA *this_local;
 
 this->_vptr_BaseA = (_func_int_varargs **)&PTR_funcA_00116ab8;
 return;
}



/* Function: ~BaseA @ 00103150 */

/* DWARF original prototype: void ~BaseA(BaseA * this, int __in_chrg) */

void __thiscall BaseA::~BaseA(BaseA *this,int __in_chrg)

{
 BaseA *this_local;
 
 ~BaseA(this,__in_chrg);
 operator_delete(this,0x10);
 return;
}



/* Function: funcB @ 00103178 */

/* DWARF original prototype: int funcB(BaseB * this) */

int __thiscall BaseB_funcB(BaseB *this)

{
 BaseB *this_local;
 
 return 0x14;
}



/* Function: ~BaseB @ 0010318c */

/* DWARF original prototype: void ~BaseB(BaseB * this, int __in_chrg) */

void __thiscall BaseB__BaseB(BaseB *this,int __in_chrg)

{
 BaseB *this_local;
 
 this->_vptr_BaseB = (_func_int_varargs **)&PTR_funcB_00116a90;
 return;
}



/* Function: ~BaseB @ 001031b0 */

/* DWARF original prototype: void ~BaseB(BaseB * this, int __in_chrg) */

void __thiscall BaseB::~BaseB(BaseB *this,int __in_chrg)

{
 BaseB *this_local;
 
 ~BaseB(this,__in_chrg);
 operator_delete(this,0x10);
 return;
}



/* Function: funcA @ 001031d8 */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int __thiscall MultiDerived_funcA(MultiDerived *this)

{
 MultiDerived *this_local;
 
 return 0x1e;
}



/* Function: funcB @ 001031ec */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int __thiscall MultiDerived_funcB(MultiDerived *this)

{
 MultiDerived *this_local;
 
 return 0x28;
}



/* Function: funcB @ 00103200 */

/* non-virtual thunk to MultiDerived::funcB() */

int __thiscall MultiDerived_funcB_thunk(MultiDerived *this)

{
 int iVar1;
 
 iVar1 = MultiDerived_funcB((MultiDerived *)&this[-1].super_BaseB);
 return iVar1;
}



/* Function: BaseA @ 00103208 */

/* DWARF original prototype: void BaseA(BaseA * this) */

void __thiscall BaseA_BaseA(BaseA *this)

{
 BaseA *this_local;
 
 this->_vptr_BaseA = (_func_int_varargs **)&PTR_funcA_00116ab8;
 return;
}



/* Function: BaseB @ 0010322c */

/* DWARF original prototype: void BaseB(BaseB * this) */

void __thiscall BaseB_BaseB(BaseB *this)

{
 BaseB *this_local;
 
 this->_vptr_BaseB = (_func_int_varargs **)&PTR_funcB_00116a90;
 return;
}



/* Function: MultiDerived @ 00103250 */

/* DWARF original prototype: void MultiDerived(MultiDerived * this) */

void __thiscall MultiDerived_MultiDerived(MultiDerived *this)

{
 MultiDerived *this_local;
 
 BaseA_BaseA(&this->super_BaseA);
 BaseB_BaseB(&this->super_BaseB);
 (this->super_BaseA)._vptr_BaseA = (_func_int_varargs **)&PTR_funcA_00116a38;
 (this->super_BaseB)._vptr_BaseB = (_func_int_varargs **)&PTR_funcB_00116a68;
 return;
}



/* Function: func @ 0010329c */

/* DWARF original prototype: int func(VirtualBase * this) */

int __thiscall VirtualBase_func(VirtualBase *this)

{
 VirtualBase *this_local;
 
 return 100;
}



/* Function: ~VirtualBase @ 001032b0 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this, int __in_chrg) */

void __thiscall VirtualBase__VirtualBase(VirtualBase *this,int __in_chrg)

{
 VirtualBase *this_local;
 
 this->_vptr_VirtualBase = (_func_int_varargs **)&PTR_func_00116a10;
 return;
}



/* Function: ~VirtualBase @ 001032d4 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this, int __in_chrg) */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this,int __in_chrg)

{
 VirtualBase *this_local;
 
 ~VirtualBase(this,__in_chrg);
 operator_delete(this,0x10);
 return;
}



/* Function: func @ 001032fc */

/* DWARF original prototype: int func(MiddleA * this) */

int __thiscall MiddleA_func(MiddleA *this)

{
 MiddleA *this_local;
 
 return *(int *)((long)&this->dataA + (long)this->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: func @ 00103330 */

/* virtual thunk to MiddleA::func() */

int __thiscall MiddleA_func_thunk(MiddleA *this)

{
 int iVar1;
 
 iVar1 = MiddleA_func((MiddleA *)((long)&this->_vptr_MiddleA + (long)this->_vptr_MiddleA[-3]));
 return iVar1;
}



/* Function: func @ 00103340 */

/* DWARF original prototype: int func(MiddleB * this) */

int __thiscall MiddleB_func(MiddleB *this)

{
 MiddleB *this_local;
 
 return *(int *)((long)&this->dataB + (long)this->_vptr_MiddleB[-3]) + 200;
}



/* Function: func @ 00103374 */

/* virtual thunk to MiddleB::func() */

int __thiscall MiddleB_func_thunk(MiddleB *this)

{
 int iVar1;
 
 iVar1 = MiddleB_func((MiddleB *)((long)&this->_vptr_MiddleB + (long)this->_vptr_MiddleB[-3]));
 return iVar1;
}



/* Function: func @ 00103384 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int __thiscall DiamondDerived_func(DiamondDerived *this)

{
 DiamondDerived *this_local;
 
 return *(int *)((long)&(this->super_MiddleA).dataA + (long)(this->super_MiddleA)._vptr_MiddleA[-3]
 ) + 0xfa;
}



/* Function: func @ 001033b8 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived_func_thunk(DiamondDerived *this)

{
 int iVar1;
 
 iVar1 = DiamondDerived_func((DiamondDerived *)
 ((long)&(this->super_MiddleA)._vptr_MiddleA +
 (long)(this->super_MiddleA)._vptr_MiddleA[-3]));
 return iVar1;
}



/* Function: func @ 001033c8 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived_func_nonvirtual_thunk(DiamondDerived *this)

{
 int iVar1;
 
 iVar1 = DiamondDerived_func((DiamondDerived *)&this[-1].field_0x20);
 return iVar1;
}



/* Function: VirtualBase @ 001033d0 */

/* DWARF original prototype: void VirtualBase(VirtualBase * this) */

void __thiscall VirtualBase_VirtualBase(VirtualBase *this)

{
 VirtualBase *this_local;
 
 this->_vptr_VirtualBase = (_func_int_varargs **)&PTR_func_00116a10;
 return;
}



/* Function: MiddleA @ 001033f4 */

/* DWARF original prototype: void MiddleA(MiddleA * this, int __in_chrg, void * * __vtt_parm) */

void __thiscall MiddleA_MiddleA(MiddleA *this,int __in_chrg,void **__vtt_parm)

{
 void **__vtt_parm_local;
 MiddleA *this_local;
 
 this->_vptr_MiddleA = *(_func_int_varargs ***)(ulong)(uint)__in_chrg;
 *(undefined8 *)((long)&this->_vptr_MiddleA + (long)this->_vptr_MiddleA[-3]) =
 ((undefined8 *)(ulong)(uint)__in_chrg)[1];
 return;
}



/* Function: ~MiddleA @ 00103444 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this, int __in_chrg, void * * __vtt_parm) */

void __thiscall MiddleA__MiddleA(MiddleA *this,int __in_chrg,void **__vtt_parm)

{
 void **__vtt_parm_local;
 MiddleA *this_local;
 
 this->_vptr_MiddleA = *(_func_int_varargs ***)(ulong)(uint)__in_chrg;
 *(undefined8 *)((long)&this->_vptr_MiddleA + (long)this->_vptr_MiddleA[-3]) =
 ((undefined8 *)(ulong)(uint)__in_chrg)[1];
 return;
}



/* Function: MiddleB @ 00103494 */

/* DWARF original prototype: void MiddleB(MiddleB * this, int __in_chrg, void * * __vtt_parm) */

void __thiscall MiddleB_MiddleB(MiddleB *this,int __in_chrg,void **__vtt_parm)

{
 void **__vtt_parm_local;
 MiddleB *this_local;
 
 this->_vptr_MiddleB = *(_func_int_varargs ***)(ulong)(uint)__in_chrg;
 *(undefined8 *)((long)&this->_vptr_MiddleB + (long)this->_vptr_MiddleB[-3]) =
 ((undefined8 *)(ulong)(uint)__in_chrg)[1];
 return;
}



/* Function: ~MiddleB @ 001034e4 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this, int __in_chrg, void * * __vtt_parm) */

void __thiscall MiddleB__MiddleB(MiddleB *this,int __in_chrg,void **__vtt_parm)

{
 void **__vtt_parm_local;
 MiddleB *this_local;
 
 this->_vptr_MiddleB = *(_func_int_varargs ***)(ulong)(uint)__in_chrg;
 *(undefined8 *)((long)&this->_vptr_MiddleB + (long)this->_vptr_MiddleB[-3]) =
 ((undefined8 *)(ulong)(uint)__in_chrg)[1];
 return;
}



/* Function: DiamondDerived @ 00103534 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void __thiscall DiamondDerived_DiamondDerived(DiamondDerived *this,int __in_chrg,void **__vtt_parm)

{
 undefined1 *this_00;
 DiamondDerived *this_local;
 
 VirtualBase_VirtualBase((VirtualBase *)&this->field_0x20);
 MiddleA_MiddleA(&this->super_MiddleA,0x116900,(void **)this);
 this_00 = &(this->super_MiddleA).field_0x10;
 MiddleB_MiddleB((MiddleB *)this_00,0x116910,(void **)this_00);
 (this->super_MiddleA)._vptr_MiddleA = (_func_int_varargs **)&PTR_func_00116878;
 *(undefined ***)&this->field_0x20 = &PTR_func_001168e0;
 *(undefined ***)&(this->super_MiddleA).field_0x10 = &PTR_func_001168a8;
 return;
}



/* Function: Point @ 001035c0 */

/* DWARF original prototype: void Point(Point * this, int _x, int _y) */

void __thiscall Point_Point(Point *this,int _x,int _y)

{
 int _y_local;
 int _x_local;
 Point *this_local;
 
 this->x = _x;
 this->y = _y;
 return;
}



/* Function: operator+ @ 001035f4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DWARF original prototype: Point operator+(Point * this, Point * other) */

Point __thiscall Point_operator_plus(Point *this,Point *other)

{
 Point *other_local;
 Point *this_local;
 Point local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 Point(&local_10,this->x + other->x,this->y + other->y);
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,local_10,0,local_8 - ___stack_chk_guard);
 }
 return local_10;
}



/* Function: operator== @ 00103684 */

/* DWARF original prototype: bool operator==(Point * this, Point * other) */

bool __thiscall Point_operator_eq(Point *this,Point *other)

{
 bool bVar1;
 Point *other_local;
 Point *this_local;
 
 if ((this->x == other->x) && (this->y == other->y)) {
 bVar1 = true;
 }
 else {
 bVar1 = false;
 }
 return bVar1;
}



/* Function: operator++ @ 001036d4 */

/* DWARF original prototype: Point * operator++(Point * this) */

Point * __thiscall Point_operator_inc(Point *this)

{
 Point *this_local;
 
 this->x = this->x + 1;
 this->y = this->y + 1;
 return this;
}



/* Function: template_max<int> @ 00103710 */

int template_max<int>(int a,int b)

{
 int b_local;
 int a_local;
 
 if (b < a) {
 b = a;
 }
 return b;
}



/* Function: template_max<double> @ 00103740 */

double template_max<double>(double a,double b)

{
 double b_local;
 double a_local;
 
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_swap<int> @ 00103774 */

void template_swap<int>(int *a,int *b)

{
 int iVar1;
 int *b_local;
 int *a_local;
 int temp;
 
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container @ 001037b4 */

/* DWARF original prototype: void Container(Container<int> * this) */

void __thiscall Container_int_Container(Container_int *this)

{
 Container_int *this_local;
 
 this->size = 0;
 return;
}



/* Function: push @ 001037d0 */

/* DWARF original prototype: void push(Container<int> * this, int value) */

void __thiscall Container_int_push(Container_int *this,int value)

{
 int iVar1;
 int value_local;
 Container_int *this_local;
 
 if (this->size < 10) {
 iVar1 = this->size;
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 0010381c */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int __thiscall Container_int_get(Container_int *this,int idx)

{
 int iVar1;
 int idx_local;
 Container_int *this_local;
 
 if ((idx < 0) || (this->size <= idx)) {
 iVar1 = 0;
 }
 else {
 iVar1 = this->data[idx];
 }
 return iVar1;
}



/* Function: getSize @ 00103864 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int __thiscall Container_int_getSize(Container_int *this)

{
 Container_int *this_local;
 
 return this->size;
}



/* Function: Container @ 0010387c */

/* DWARF original prototype: void Container(Container<double> * this) */

void __thiscall Container_double_Container(Container_double *this)

{
 Container_double *this_local;
 
 this->size = 0;
 return;
}



/* Function: push @ 00103898 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void __thiscall Container_double_push(Container_double *this,double value)

{
 int iVar1;
 double value_local;
 Container_double *this_local;
 
 if (this->size < 10) {
 iVar1 = this->size;
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 001038e4 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double __thiscall Container_double_get(Container_double *this,int idx)

{
 double dVar1;
 int idx_local;
 Container_double *this_local;
 
 if ((idx < 0) || (this->size <= idx)) {
 dVar1 = 0.0;
 }
 else {
 dVar1 = this->data[idx];
 }
 return dVar1;
}



/* Function: getSize @ 0010392c */

/* DWARF original prototype: int getSize(Container<double> * this) */

int __thiscall Container_double_getSize(Container_double *this)

{
 Container_double *this_local;
 
 return this->size;
}



/* Function: __uniq_ptr_data @ 00103944 */

/* DWARF original prototype: void
 __uniq_ptr_data(__uniq_ptr_data_int_std_default_delete_int_true_true * this,
 __uniq_ptr_data_int_std_default_delete_int_true_true * param_1) */

void __thiscall
__uniq_ptr_data_int_std_default_delete_int_true_true___uniq_ptr_data
 (__uniq_ptr_data_int_std_default_delete_int_true_true *this,
 __uniq_ptr_data_int_std_default_delete_int_true_true *param_1)

{
 __uniq_ptr_data_int_std_default_delete_int_true_true *param_1_local;
 __uniq_ptr_data_int_std_default_delete_int_true_true *this_local;
 
 __uniq_ptr_impl_int_std_default_delete_int___uniq_ptr_impl
 (&this->super___uniq_ptr_impl_int_std_default_delete_int,
 &param_1->super___uniq_ptr_impl_int_std_default_delete_int);
 return;
}



/* Function: unique_ptr @ 0010396c */

/* DWARF original prototype: void unique_ptr(unique_ptr_int_std_default_delete_int * this,
 unique_ptr_int_std_default_delete_int * param_1) */

void __thiscall
unique_ptr_int_std_default_delete_int_unique_ptr
 (unique_ptr_int_std_default_delete_int *this,
 unique_ptr_int_std_default_delete_int *param_1)

{
 unique_ptr_int_std_default_delete_int *param_1_local;
 unique_ptr_int_std_default_delete_int *this_local;
 
 __uniq_ptr_data_int_std_default_delete_int_true_true___uniq_ptr_data
 (&this->_M_t,&param_1->_M_t);
 return;
}



/* Function: getType @ 00103994 */

/* DWARF original prototype: int getType(RTTIBase * this) */

int __thiscall RTTIBase_getType(RTTIBase *this)

{
 RTTIBase *this_local;
 
 return 0;
}



/* Function: getType @ 001039a8 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA_getType(RTTIDerivedA *this)

{
 RTTIDerivedA *this_local;
 
 return 1;
}



/* Function: derivedA_data @ 001039bc */

/* DWARF original prototype: int derivedA_data(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA_derivedA_data(RTTIDerivedA *this)

{
 RTTIDerivedA *this_local;
 
 return 100;
}



/* Function: getType @ 001039d0 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB_getType(RTTIDerivedB *this)

{
 RTTIDerivedB *this_local;
 
 return 2;
}



/* Function: derivedB_data @ 001039e4 */

/* DWARF original prototype: int derivedB_data(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB_derivedB_data(RTTIDerivedB *this)

{
 RTTIDerivedB *this_local;
 
 return 200;
}



/* Function: RTTIBase @ 001039f8 */

/* DWARF original prototype: void RTTIBase(RTTIBase * this) */

void __thiscall RTTIBase_RTTIBase(RTTIBase *this)

{
 RTTIBase *this_local;
 
 this->_vptr_RTTIBase = (_func_int_varargs **)&PTR__RTTIBase_00116848;
 return;
}



/* Function: ~RTTIBase @ 00103a1c */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this, int __in_chrg) */

void __thiscall RTTIBase__RTTIBase(RTTIBase *this,int __in_chrg)

{
 RTTIBase *this_local;
 
 this->_vptr_RTTIBase = (_func_int_varargs **)&PTR__RTTIBase_00116848;
 return;
}



/* Function: ~RTTIBase @ 00103a40 */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this, int __in_chrg) */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this,int __in_chrg)

{
 RTTIBase *this_local;
 
 ~RTTIBase(this,__in_chrg);
 operator_delete(this,8);
 return;
}



/* Function: RTTIDerivedA @ 00103a68 */

/* DWARF original prototype: void RTTIDerivedA(RTTIDerivedA * this) */

void __thiscall RTTIDerivedA_RTTIDerivedA(RTTIDerivedA *this)

{
 RTTIDerivedA *this_local;
 
 RTTIBase_RTTIBase(&this->super_RTTIBase);
 (this->super_RTTIBase)._vptr_RTTIBase = (_func_int_varargs **)&PTR__RTTIDerivedA_00116820;
 return;
}



/* Function: RTTIDerivedB @ 00103a98 */

/* DWARF original prototype: void RTTIDerivedB(RTTIDerivedB * this) */

void __thiscall RTTIDerivedB_RTTIDerivedB(RTTIDerivedB *this)

{
 RTTIDerivedB *this_local;
 
 RTTIBase_RTTIBase(&this->super_RTTIBase);
 (this->super_RTTIBase)._vptr_RTTIBase = (_func_int_varargs **)&PTR__RTTIDerivedB_001167f8;
 return;
}



/* Function: __uniq_ptr_data @ 00103ac8 */

/* DWARF original prototype: void
 __uniq_ptr_data(__uniq_ptr_data_int_std_default_delete_int_true_true * this, pointer
 param_1) */

void __thiscall
__uniq_ptr_data_int_std_default_delete_int_true_true___uniq_ptr_data
 (__uniq_ptr_data_int_std_default_delete_int_true_true *this,pointer param_1)

{
 pointer param_1_local;
 __uniq_ptr_data_int_std_default_delete_int_true_true *this_local;
 
 __uniq_ptr_impl_int_std_default_delete_int___uniq_ptr_impl
 (&this->super___uniq_ptr_impl_int_std_default_delete_int,param_1);
 return;
}



/* Function: unique_ptr<> @ 00103af0 */

/* DWARF original prototype: void unique_ptr<>(unique_ptr_int_std_default_delete_int * this,
 pointer __p) */

void __thiscall
unique_ptr_int_std_default_delete_int_unique_ptr_void
 (unique_ptr_int_std_default_delete_int *this,pointer __p)

{
 pointer __p_local;
 unique_ptr_int_std_default_delete_int *this_local;
 
 __uniq_ptr_data_int_std_default_delete_int_true_true___uniq_ptr_data(&this->_M_t,__p);
 return;
}



/* Function: ~unique_ptr @ 00103b18 */

/* DWARF original prototype: void ~unique_ptr(unique_ptr_int_std_default_delete_int * this, int
 __in_chrg) */

void __thiscall
unique_ptr_int_std_default_delete_int__unique_ptr
 (unique_ptr_int_std_default_delete_int *this,int __in_chrg)

{
 pointer *__t;
 deleter_type *this_00;
 type *ppiVar1;
 unique_ptr_int_std_default_delete_int *this_local;
 int **__ptr;
 
 __t = __uniq_ptr_impl_int_std_default_delete_int__M_ptr
 ((__uniq_ptr_impl_int_std_default_delete_int *)this);
 if (*__t != (pointer)0x0) {
 this_00 = get_deleter(this);
 ppiVar1 = move<int*&>(__t);
 default_delete_int_operator(this_00,*ppiVar1);
 }
 *__t = (pointer)0x0;
 return;
}



/* Function: operator* @ 00103b80 */

/* DWARF original prototype: type operator*(unique_ptr_int_std_default_delete_int * this) */

type __thiscall
unique_ptr_int_std_default_delete_int_operator
 (unique_ptr_int_std_default_delete_int *this)

{
 pointer piVar1;
 unique_ptr_int_std_default_delete_int *this_local;
 
 piVar1 = get(this);
 return piVar1;
}



/* Function: move @ 00103ba4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

type * move_unique_ptr_int_ref(unique_ptr_int_std_default_delete_int *__t);

type * move_unique_ptr_int_ref(unique_ptr_int_std_default_delete_int *__t)

{
 unique_ptr_int_std_default_delete_int *__t_local;
 
 return __t;
}



/* Function: _Tuple_impl @ 00103bb8 */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl_0_int_std_default_delete_int *
 this, _Tuple_impl_0_int_std_default_delete_int * param_1) */

void __thiscall
_Tuple_impl_0_int_std_default_delete_int__Tuple_impl
 (_Tuple_impl_0_int_std_default_delete_int *this,
 _Tuple_impl_0_int_std_default_delete_int *param_1)

{
 _Tuple_impl_0_int_std_default_delete_int *param_1_local;
 _Tuple_impl_0_int_std_default_delete_int *this_local;
 
 _Tuple_impl_1_std_default_delete_int__Tuple_impl
 (&this->super__Tuple_impl_1_std_default_delete_int,
 &param_1->super__Tuple_impl_1_std_default_delete_int);
 *this = *param_1;
 return;
}



/* Function: tuple @ 00103bf0 */

/* DWARF original prototype: void tuple(tuple_int_ptr_std_default_delete_int * this,
 tuple_int_ptr_std_default_delete_int * param_1) */

void __thiscall
tuple_int_ptr_std_default_delete_int_tuple
 (tuple_int_ptr_std_default_delete_int *this,
 tuple_int_ptr_std_default_delete_int *param_1)

{
 tuple_int_ptr_std_default_delete_int *param_1_local;
 tuple_int_ptr_std_default_delete_int *this_local;
 
 _Tuple_impl_0_int_std_default_delete_int__Tuple_impl
 (&this->super__Tuple_impl_0_int_std_default_delete_int,
 &param_1->super__Tuple_impl_0_int_std_default_delete_int);
 return;
}



/* Function: __uniq_ptr_impl @ 00103c18 */

/* DWARF original prototype: void __uniq_ptr_impl(__uniq_ptr_impl_int_std_default_delete_int *
 this, __uniq_ptr_impl_int_std_default_delete_int * __u) */

void __thiscall
__uniq_ptr_impl_int_std_default_delete_int___uniq_ptr_impl
 (__uniq_ptr_impl_int_std_default_delete_int *this,
 __uniq_ptr_impl_int_std_default_delete_int *__u)

{
 type *ptVar1;
 pointer *ppiVar2;
 __uniq_ptr_impl_int_std_default_delete_int *__u_local;
 __uniq_ptr_impl_int_std_default_delete_int *this_local;
 
 ptVar1 = move<std::tuple_int_ptr_std_default_delete_int&>(&__u->_M_t);
 tuple_int_ptr_std_default_delete_int_tuple(&this->_M_t,ptVar1);
 ppiVar2 = _M_ptr(__u);
 *ppiVar2 = (pointer)0x0;
 return;
}



/* Function: __uniq_ptr_data @ 00103c60 */

/* DWARF original prototype: void
 __uniq_ptr_data(__uniq_ptr_data_int_std_default_delete_int_array_true_true * this, pointer
 param_1) */

void __thiscall
__uniq_ptr_data_int_std_default_delete_int_array_true_true___uniq_ptr_data
 (__uniq_ptr_data_int_std_default_delete_int_array_true_true *this,pointer param_1)

{
 pointer param_1_local;
 __uniq_ptr_data_int_std_default_delete_int_array_true_true *this_local;
 
 __uniq_ptr_impl_int_std_default_delete_int_array___uniq_ptr_impl
 (&this->super___uniq_ptr_impl_int_std_default_delete_int_array,param_1);
 return;
}



/* Function: unique_ptr<int*> @ 00103c88 */

/* DWARF original prototype: void unique_ptr<int*>(unique_ptr_int_array_std_default_delete_int_array
 * this, int * __p) */

void __thiscall
unique_ptr_int_array_std_default_delete_int_array_unique_ptr_int_ptr
 (unique_ptr_int_array_std_default_delete_int_array *this,int *__p)

{
 int *__p_local;
 unique_ptr_int_array_std_default_delete_int_array *this_local;
 
 __uniq_ptr_data_int_std_default_delete_int_array_true_true___uniq_ptr_data(&this->_M_t,__p);
 return;
}



/* Function: ~unique_ptr @ 00103cb0 */

/* DWARF original prototype: void ~unique_ptr(unique_ptr_int_array_std_default_delete_int_array *
 this, int __in_chrg) */

void __thiscall
unique_ptr_int_array_std_default_delete_int_array__unique_ptr
 (unique_ptr_int_array_std_default_delete_int_array *this,int __in_chrg)

{
 pointer *ppiVar1;
 deleter_type *this_00;
 unique_ptr_int_array_std_default_delete_int_array *this_local;
 int **__ptr;
 
 ppiVar1 = __uniq_ptr_impl_int_std_default_delete_int_array__M_ptr
 ((__uniq_ptr_impl_int_std_default_delete_int_array *)this);
 if (*ppiVar1 != (pointer)0x0) {
 this_00 = get_deleter(this);
 default_delete_int_array_operator_int(this_00,*ppiVar1);
 }
 *ppiVar1 = (pointer)0x0;
 return;
}



/* Function: operator[] @ 00103d0c */

/* DWARF original prototype: type operator[](unique_ptr_int_array_std_default_delete_int_array *
 this, size_t __i) */

type __thiscall
unique_ptr_int_array_std_default_delete_int_array_operator
 (unique_ptr_int_array_std_default_delete_int_array *this,size_t __i)

{
 pointer piVar1;
 size_t __i_local;
 unique_ptr_int_array_std_default_delete_int_array *this_local;
 
 piVar1 = get(this);
 return piVar1 + __i;
}



/* Function: __uniq_ptr_impl @ 00103d44 */

/* DWARF original prototype: void __uniq_ptr_impl(__uniq_ptr_impl_int_std_default_delete_int *
 this, pointer __p) */

void __thiscall
__uniq_ptr_impl_int_std_default_delete_int___uniq_ptr_impl
 (__uniq_ptr_impl_int_std_default_delete_int *this,pointer __p)

{
 pointer *ppiVar1;
 pointer __p_local;
 __uniq_ptr_impl_int_std_default_delete_int *this_local;
 
 tuple_int_ptr_std_default_delete_int_tuple_void(&this->_M_t);
 ppiVar1 = _M_ptr(this);
 *ppiVar1 = __p;
 return;
}



/* Function: _M_ptr @ 00103d80 */

/* DWARF original prototype: pointer * _M_ptr(__uniq_ptr_impl_int_std_default_delete_int *
 this) */

pointer * __thiscall
__uniq_ptr_impl_int_std_default_delete_int__M_ptr
 (__uniq_ptr_impl_int_std_default_delete_int *this)

{
 __tuple_element_t *ppiVar1;
 __uniq_ptr_impl_int_std_default_delete_int *this_local;
 
 ppiVar1 = get_0_int_default_delete(&this->_M_t);
 return ppiVar1;
}



/* Function: get_deleter @ 00103d9c */

/* DWARF original prototype: deleter_type * get_deleter(unique_ptr_int_std_default_delete_int *
 this) */

deleter_type * __thiscall
unique_ptr_int_std_default_delete_int_get_deleter
 (unique_ptr_int_std_default_delete_int *this)

{
 default_delete_int *pdVar1;
 unique_ptr_int_std_default_delete_int *this_local;
 
 pdVar1 = __uniq_ptr_impl_int_std_default_delete_int__M_deleter
 ((__uniq_ptr_impl_int_std_default_delete_int *)this);
 return pdVar1;
}



/* Function: move @ 00103db8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

type * move_int_ptr_ref(int **__t);

type * move_int_ptr_ref(int **__t)

{
 int **__t_local;
 
 return __t;
}



/* Function: operator() @ 00103dcc */

/* DWARF original prototype: void operator()(default_delete_int * this, int * __ptr) */

void __thiscall default_delete_int_operator(default_delete_int *this,int *__ptr)

{
 int *__ptr_local;
 default_delete_int *this_local;
 
 if (__ptr != (int *)0x0) {
 operator_delete(__ptr,4);
 }
 return;
}



/* Function: get @ 00103dfc */

/* DWARF original prototype: pointer get(unique_ptr_int_std_default_delete_int * this) */

pointer __thiscall
unique_ptr_int_std_default_delete_int_get
 (unique_ptr_int_std_default_delete_int *this)

{
 pointer piVar1;
 unique_ptr_int_std_default_delete_int *this_local;
 
 piVar1 = __uniq_ptr_impl_int_std_default_delete_int__M_ptr
 ((__uniq_ptr_impl_int_std_default_delete_int *)this);
 return piVar1;
}



/* Function: move @ 00103e18 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: move */

type * move_tuple_int_default_delete_ref
 (tuple_int_ptr_std_default_delete_int *__t);

type * move_tuple_int_default_delete_ref
 (tuple_int_ptr_std_default_delete_int *__t)

{
 tuple_int_ptr_std_default_delete_int *__t_local;
 
 return __t;
}



/* Function: _Tuple_impl @ 00103e2c */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl_1_std_default_delete_int * this,
 _Tuple_impl_1_std_default_delete_int * __in) */

void __thiscall
_Tuple_impl_1_std_default_delete_int__Tuple_impl
 (_Tuple_impl_1_std_default_delete_int *this,
 _Tuple_impl_1_std_default_delete_int *__in)

{
 _Tuple_impl_1_std_default_delete_int *__in_local;
 _Tuple_impl_1_std_default_delete_int *this_local;
 
 return;
}



/* Function: __uniq_ptr_impl @ 00103e44 */

/* DWARF original prototype: void __uniq_ptr_impl(__uniq_ptr_impl_int_std_default_delete_int_array
 * this, pointer __p) */

void __thiscall
__uniq_ptr_impl_int_std_default_delete_int_array___uniq_ptr_impl
 (__uniq_ptr_impl_int_std_default_delete_int_array *this,pointer __p)

{
 pointer *ppiVar1;
 pointer __p_local;
 __uniq_ptr_impl_int_std_default_delete_int_array *this_local;
 
 tuple_int_ptr_std_default_delete_int_array_tuple_void(&this->_M_t);
 ppiVar1 = _M_ptr(this);
 *ppiVar1 = __p;
 return;
}



/* Function: _M_ptr @ 00103e80 */

/* DWARF original prototype: pointer * _M_ptr(__uniq_ptr_impl_int_std_default_delete_int_array *
 this) */

pointer * __thiscall
__uniq_ptr_impl_int_std_default_delete_int_array__M_ptr
 (__uniq_ptr_impl_int_std_default_delete_int_array *this)

{
 __tuple_element_t *ppiVar1;
 __uniq_ptr_impl_int_std_default_delete_int_array *this_local;
 
 ppiVar1 = get_0_int_default_delete_array(&this->_M_t);
 return ppiVar1;
}



/* Function: get_deleter @ 00103e9c */

/* DWARF original prototype: deleter_type *
 get_deleter(unique_ptr_int_array_std_default_delete_int_array * this) */

deleter_type * __thiscall
unique_ptr_int_array_std_default_delete_int_array_get_deleter
 (unique_ptr_int_array_std_default_delete_int_array *this)

{
 default_delete_int_array *pdVar1;
 unique_ptr_int_array_std_default_delete_int_array *this_local;
 
 pdVar1 = __uniq_ptr_impl_int_std_default_delete_int_array__M_deleter
 ((__uniq_ptr_impl_int_std_default_delete_int_array *)this);
 return pdVar1;
}



/* Function: operator()<int> @ 00103eb8 */

/* DWARF original prototype: void operator()<int>(default_delete_int_array * this, int * __ptr) */

void __thiscall
default_delete_int_array_operator_int(default_delete_int_array *this,int *__ptr)

{
 int *__ptr_local;
 default_delete_int_array *this_local;
 
 if (__ptr != (int *)0x0) {
 operator_delete__(__ptr);
 }
 return;
}



/* Function: get @ 00103ee8 */

/* DWARF original prototype: pointer get(unique_ptr_int_array_std_default_delete_int_array * this) */

pointer __thiscall
unique_ptr_int_array_std_default_delete_int_array_get
 (unique_ptr_int_array_std_default_delete_int_array *this)

{
 pointer piVar1;
 unique_ptr_int_array_std_default_delete_int_array *this_local;
 
 piVar1 = __uniq_ptr_impl_int_std_default_delete_int_array__M_ptr
 ((__uniq_ptr_impl_int_std_default_delete_int_array *)this);
 return piVar1;
}



/* Function: tuple<> @ 00103f04 */

/* DWARF original prototype: void tuple<>(tuple_int_ptr_std_default_delete_int * this) */

void __thiscall
tuple_int_ptr_std_default_delete_int_tuple_void
 (tuple_int_ptr_std_default_delete_int *this)

{
 tuple_int_ptr_std_default_delete_int *this_local;
 
 _Tuple_impl_0_int_std_default_delete_int__Tuple_impl
 (&this->super__Tuple_impl_0_int_std_default_delete_int);
 return;
}



/* Function: get<0,_int*,_std::default_delete_int_> @ 00103f24 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<0, int*, std::default_delete_int > */

__tuple_element_t *
get_0_int_default_delete(tuple_int_ptr_std_default_delete_int *__t)

{
 int **ppiVar1;
 tuple_int_ptr_std_default_delete_int *__t_local;
 
 ppiVar1 = __get_helper_0_int_default_delete
 (&__t->super__Tuple_impl_0_int_std_default_delete_int);
 return ppiVar1;
}



/* Function: _M_deleter @ 00103f40 */

/* DWARF original prototype: default_delete_int *
 _M_deleter(__uniq_ptr_impl_int_std_default_delete_int * this) */

default_delete_int * __thiscall
__uniq_ptr_impl_int_std_default_delete_int__M_deleter
 (__uniq_ptr_impl_int_std_default_delete_int *this)

{
 __tuple_element_t_conflict *p_Var1;
 __uniq_ptr_impl_int_std_default_delete_int *this_local;
 
 p_Var1 = get_1_int_default_delete(&this->_M_t);
 return (default_delete_int *)p_Var1;
}



/* Function: _M_ptr @ 00103f5c */

/* DWARF original prototype: pointer _M_ptr(__uniq_ptr_impl_int_std_default_delete_int * this)
 */

pointer __thiscall
__uniq_ptr_impl_int_std_default_delete_int__M_ptr
 (__uniq_ptr_impl_int_std_default_delete_int *this)

{
 __tuple_element_t *ppiVar1;
 __uniq_ptr_impl_int_std_default_delete_int *this_local;
 
 ppiVar1 = get_0_int_default_delete(&this->_M_t);
 return *ppiVar1;
}



/* Function: tuple<> @ 00103f7c */

/* DWARF original prototype: void tuple<>(tuple_int_ptr_std_default_delete_int_array * this) */

void __thiscall
tuple_int_ptr_std_default_delete_int_array_tuple_void
 (tuple_int_ptr_std_default_delete_int_array *this)

{
 tuple_int_ptr_std_default_delete_int_array *this_local;
 
 _Tuple_impl_0_int_std_default_delete_int_array__Tuple_impl
 (&this->super__Tuple_impl_0_int_std_default_delete_int_array);
 return;
}



/* Function: get<0,_int*,_std::default_delete_int_array_> @ 00103f9c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<0, int*, std::default_delete<int []> > */

__tuple_element_t *
get_0_int_default_delete_array(tuple_int_ptr_std_default_delete_int_array *__t)

{
 int **ppiVar1;
 tuple_int_ptr_std_default_delete_int_array *__t_local;
 
 ppiVar1 = __get_helper_0_int_default_delete_array
 (&__t->super__Tuple_impl_0_int_std_default_delete_int_array);
 return ppiVar1;
}



/* Function: _M_deleter @ 00103fb8 */

/* DWARF original prototype: default_delete_int_array *
 _M_deleter(__uniq_ptr_impl_int_std_default_delete_int_array * this) */

default_delete_int_array * __thiscall
__uniq_ptr_impl_int_std_default_delete_int_array__M_deleter
 (__uniq_ptr_impl_int_std_default_delete_int_array *this)

{
 __tuple_element_t_conflict *p_Var1;
 __uniq_ptr_impl_int_std_default_delete_int_array *this_local;
 
 p_Var1 = get_1_int_default_delete_array(&this->_M_t);
 return (default_delete_int_array *)p_Var1;
}



/* Function: _M_ptr @ 00103fd4 */

/* DWARF original prototype: pointer _M_ptr(__uniq_ptr_impl_int_std_default_delete_int_array *
 this) */

pointer __thiscall
__uniq_ptr_impl_int_std_default_delete_int_array__M_ptr
 (__uniq_ptr_impl_int_std_default_delete_int_array *this)

{
 __tuple_element_t *ppiVar1;
 __uniq_ptr_impl_int_std_default_delete_int_array *this_local;
 
 ppiVar1 = get_0_int_default_delete_array(&this->_M_t);
 return *ppiVar1;
}



/* Function: _Tuple_impl @ 00103ff4 */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl_0_int_std_default_delete_int *
 this) */

void __thiscall
_Tuple_impl_0_int_std_default_delete_int__Tuple_impl
 (_Tuple_impl_0_int_std_default_delete_int *this)

{
 _Tuple_impl_0_int_std_default_delete_int *this_local;
 
 _Tuple_impl_1_std_default_delete_int__Tuple_impl
 (&this->super__Tuple_impl_1_std_default_delete_int);
 _Head_base_0_int_false__Head_base((_Head_base_0_int_false *)this);
 return;
}



/* Function: __get_helper<0,_int*,_std::default_delete_int_> @ 0010401c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<0, int*, std::default_delete_int > */

int ** __get_helper_0_int_default_delete
 (_Tuple_impl_0_int_std_default_delete_int *__t)

{
 int **ppiVar1;
 _Tuple_impl_0_int_std_default_delete_int *__t_local;
 
 ppiVar1 = _Tuple_impl_0_int_std_default_delete_int__M_head(__t);
 return ppiVar1;
}



/* Function: get<1,_int*,_std::default_delete_int_> @ 00104038 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<1, int*, std::default_delete_int > */

__tuple_element_t_conflict *
get_1_int_default_delete(tuple_int_ptr_std_default_delete_int *__t)

{
 default_delete_int *pdVar1;
 tuple_int_ptr_std_default_delete_int *__t_local;
 
  pdVar1 = __get_helper_1_default_delete
 ((_Tuple_impl_1_std_default_delete_int *)__t);
 return (__tuple_element_t_conflict *)pdVar1;
}



/* Function: get<0,_int*,_std::default_delete_int_> @ 00104054 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<0, int*, std::default_delete_int > */

__tuple_element_t *
get_0_int_default_delete(tuple_int_ptr_std_default_delete_int *__t)

{
 int **ppiVar1;
 tuple_int_ptr_std_default_delete_int *__t_local;
 
 ppiVar1 = __get_helper_0_int_default_delete
 (&__t->super__Tuple_impl_0_int_std_default_delete_int);
 return ppiVar1;
}



/* Function: _Tuple_impl @ 00104070 */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl_0_int_std_default_delete_int_array *
 this) */

void __thiscall
_Tuple_impl_0_int_std_default_delete_int_array__Tuple_impl
 (_Tuple_impl_0_int_std_default_delete_int_array *this)

{
 _Tuple_impl_0_int_std_default_delete_int_array *this_local;
 
 _Tuple_impl_1_std_default_delete_int_array__Tuple_impl
 (&this->super__Tuple_impl_1_std_default_delete_int_array);
 _Head_base_0_int_false__Head_base((_Head_base_0_int_false *)this);
 return;
}



/* Function: __get_helper<0,_int*,_std::default_delete_int_array_> @ 00104098 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<0, int*, std::default_delete<int []> > */

int ** __get_helper_0_int_default_delete_array
 (_Tuple_impl_0_int_std_default_delete_int_array *__t)

{
 int **ppiVar1;
 _Tuple_impl_0_int_std_default_delete_int_array *__t_local;
 
 ppiVar1 = _Tuple_impl_0_int_std_default_delete_int_array__M_head(__t);
 return ppiVar1;
}



/* Function: get<1,_int*,_std::default_delete_int_array_> @ 001040b4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<1, int*, std::default_delete<int []> > */

__tuple_element_t_conflict *
get_1_int_default_delete_array(tuple_int_ptr_std_default_delete_int_array *__t)

{
 default_delete_int_array *pdVar1;
 tuple_int_ptr_std_default_delete_int_array *__t_local;
 
  pdVar1 = __get_helper_1_default_delete_array
 ((_Tuple_impl_1_std_default_delete_int_array *)__t);
 return (__tuple_element_t_conflict *)pdVar1;
}



/* Function: get<0,_int*,_std::default_delete_int_array_> @ 001040d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<0, int*, std::default_delete<int []> > */

__tuple_element_t *
get_0_int_default_delete_array(tuple_int_ptr_std_default_delete_int_array *__t)

{
 int **ppiVar1;
 tuple_int_ptr_std_default_delete_int_array *__t_local;
 
 ppiVar1 = __get_helper_0_int_default_delete_array
 (&__t->super__Tuple_impl_0_int_std_default_delete_int_array);
 return ppiVar1;
}



/* Function: forward @ 001040ec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ** forward_int_ptr_ref(type *__t);

int ** forward_int_ptr_ref(type *__t)

{
 type *__t_local;
 
 return __t;
}



/* Function: _Tuple_impl @ 00104100 */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl_1_std_default_delete_int * this) */

void __thiscall
_Tuple_impl_1_std_default_delete_int__Tuple_impl
 (_Tuple_impl_1_std_default_delete_int *this)

{
 _Tuple_impl_1_std_default_delete_int *this_local;
 
 _Head_base_1_std_default_delete_int_true__Head_base
 (&this->super__Head_base_1_std_default_delete_int_true);
 return;
}



/* Function: _Head_base @ 00104120 */

/* DWARF original prototype: void _Head_base(_Head_base_0_int_false * this) */

void __thiscall _Head_base_0_int_false__Head_base(_Head_base_0_int_false *this)

{
 _Head_base_0_int_false *this_local;
 
 this->_M_head_impl = (int *)0x0;
 return;
}



/* Function: _M_head @ 0010413c */

int ** _Tuple_impl_0_int_std_default_delete_int__M_head
 (_Tuple_impl_0_int_std_default_delete_int *__t)

{
 int **ppiVar1;
 _Tuple_impl_0_int_std_default_delete_int *__t_local;
 
 ppiVar1 = _Head_base_0_int_false__M_head((_Head_base_0_int_false *)__t);
 return ppiVar1;
}



/* Function: __get_helper<1,_std::default_delete_int_> @ 00104158 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<1, std::default_delete_int > */

default_delete_int *
__get_helper_1_default_delete(_Tuple_impl_1_std_default_delete_int *__t)

{
 default_delete_int *pdVar1;
 _Tuple_impl_1_std_default_delete_int *__t_local;
 
 pdVar1 = _Tuple_impl_1_std_default_delete_int__M_head(__t);
 return pdVar1;
}



/* Function: __get_helper<0,_int*,_std::default_delete_int_> @ 00104174 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<0, int*, std::default_delete_int > */

int ** __get_helper_0_int_default_delete
 (_Tuple_impl_0_int_std_default_delete_int *__t)

{
 int **ppiVar1;
 _Tuple_impl_0_int_std_default_delete_int *__t_local;
 
 ppiVar1 = _Tuple_impl_0_int_std_default_delete_int__M_head(__t);
 return ppiVar1;
}



/* Function: _Tuple_impl @ 00104190 */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl_1_std_default_delete_int_array * this)
 */

void __thiscall
_Tuple_impl_1_std_default_delete_int_array__Tuple_impl
 (_Tuple_impl_1_std_default_delete_int_array *this)

{
 _Tuple_impl_1_std_default_delete_int_array *this_local;
 
 _Head_base_1_std_default_delete_int_array_true__Head_base
 (&this->super__Head_base_1_std_default_delete_int_array_true);
 return;
}



/* Function: _M_head @ 001041b0 */

int ** _Tuple_impl_0_int_std_default_delete_int_array__M_head
 (_Tuple_impl_0_int_std_default_delete_int_array *__t)

{
 int **ppiVar1;
 _Tuple_impl_0_int_std_default_delete_int_array *__t_local;
 
 ppiVar1 = _Head_base_0_int_false__M_head((_Head_base_0_int_false *)__t);
 return ppiVar1;
}



/* Function: __get_helper<1,_std::default_delete_int_array_> @ 001041cc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<1, std::default_delete<int []> > */

default_delete_int_array *
__get_helper_1_default_delete_array
 (_Tuple_impl_1_std_default_delete_int_array *__t)

{
 default_delete_int_array *pdVar1;
 _Tuple_impl_1_std_default_delete_int_array *__t_local;
 
 pdVar1 = _Tuple_impl_1_std_default_delete_int_array__M_head(__t);
 return pdVar1;
}



/* Function: __get_helper<0,_int*,_std::default_delete_int_array_> @ 001041e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<0, int*, std::default_delete<int []> > */

int ** __get_helper_0_int_default_delete_array
 (_Tuple_impl_0_int_std_default_delete_int_array *__t)

{
 int **ppiVar1;
 _Tuple_impl_0_int_std_default_delete_int_array *__t_local;
 
 ppiVar1 = _Tuple_impl_0_int_std_default_delete_int_array__M_head(__t);
 return ppiVar1;
}



/* Function: _Head_base @ 00104204 */

/* DWARF original prototype: void _Head_base(_Head_base_0_int_false * this, int * * __h)
 */

void __thiscall
 _Head_base_0_int_false__Head_base_int_ptr_ref(_Head_base_0_int_false *this,int **__h);

void __thiscall
 _Head_base_0_int_false__Head_base_int_ptr_ref(_Head_base_0_int_false *this,int **__h)

{
 int **ppiVar1;
 int **__h_local;
 _Head_base_0_int_false *this_local;
 
 ppiVar1 = forward<int*&>(__h);
 this->_M_head_impl = *ppiVar1;
 return;
}



/* Function: _Head_base @ 00104234 */

/* DWARF original prototype: void _Head_base(_Head_base_1_std_default_delete_int_true * this)
 */

void __thiscall
 _Head_base_1_std_default_delete_int_true__Head_base
 (_Head_base_1_std_default_delete_int_true *this)

{
 _Head_base_1_std_default_delete_int_true *this_local;
 
 return;
}



/* Function: _M_head @ 00104248 */

int ** _Head_base_0_int_false__M_head(_Head_base_0_int_false *__b)

{
 _Head_base_0_int_false *__b_local;
 
 return &__b->_M_head_impl;
}



/* Function: _M_head @ 0010425c */

default_delete_int *
_Tuple_impl_1_std_default_delete_int__M_head
 (_Tuple_impl_1_std_default_delete_int *__t)

{
 default_delete_int *pdVar1;
 _Tuple_impl_1_std_default_delete_int *__t_local;
 
 pdVar1 = _Head_base_1_std_default_delete_int_true__M_head
 (&__t->super__Head_base_1_std_default_delete_int_true);
 return pdVar1;
}



/* Function: _M_head @ 00104278 */

int ** _Tuple_impl_0_int_std_default_delete_int__M_head
 (_Tuple_impl_0_int_std_default_delete_int *__t)

{
 int **ppiVar1;
 _Tuple_impl_0_int_std_default_delete_int *__t_local;
 
 ppiVar1 = _Head_base_0_int_false__M_head((_Head_base_0_int_false *)__t);
 return ppiVar1;
}



/* Function: _Head_base @ 00104294 */

/* DWARF original prototype: void _Head_base(_Head_base_1_std_default_delete_int_array_true *
 this) */

void __thiscall
 _Head_base_1_std_default_delete_int_array_true__Head_base
 (_Head_base_1_std_default_delete_int_array_true *this)

{
 _Head_base_1_std_default_delete_int_array_true *this_local;
 
 return;
}



/* Function: _M_head @ 001042a8 */

default_delete_int_array *
_Tuple_impl_1_std_default_delete_int_array__M_head
 (_Tuple_impl_1_std_default_delete_int_array *__t)

{
 default_delete_int_array *pdVar1;
 _Tuple_impl_1_std_default_delete_int_array *__t_local;
 
 pdVar1 = _Head_base_1_std_default_delete_int_array_true__M_head
 (&__t->super__Head_base_1_std_default_delete_int_array_true);
 return pdVar1;
}



/* Function: _M_head @ 001042c4 */

int ** _Tuple_impl_0_int_std_default_delete_int_array__M_head
 (_Tuple_impl_0_int_std_default_delete_int_array *__t)

{
 int **ppiVar1;
 _Tuple_impl_0_int_std_default_delete_int_array *__t_local;
 
 ppiVar1 = _Head_base_0_int_false__M_head((_Head_base_0_int_false *)__t);
 return ppiVar1;
}



/* Function: _M_head @ 001042e0 */

default_delete_int *
 _Head_base_1_std_default_delete_int_true__M_head
 (_Head_base_1_std_default_delete_int_true *__b)

{
 _Head_base_1_std_default_delete_int_true *__b_local;
 
 return &__b->_M_head_impl;
}



/* Function: _M_head @ 001042f4 */

int ** _Head_base_0_int_false__M_head(_Head_base_0_int_false *__b)

{
 _Head_base_0_int_false *__b_local;
 
 return &__b->_M_head_impl;
}



/* Function: _M_head @ 00104308 */

default_delete_int_array *
 _Head_base_1_std_default_delete_int_array_true__M_head
 (_Head_base_1_std_default_delete_int_array_true *__b)

{
 _Head_base_1_std_default_delete_int_array_true *__b_local;
 
 return &__b->_M_head_impl;
}



/* Function: ~RTTIDerivedB @ 0010431c */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void __thiscall RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this,int __in_chrg)

{
 RTTIDerivedB *this_local;
 
 (this->super_RTTIBase)._vptr_RTTIBase = (_func_int_varargs **)&PTR__RTTIDerivedB_001167f8;
 RTTIBase__RTTIBase(&this->super_RTTIBase,0x1167f8);
 return;
}



/* Function: ~RTTIDerivedB @ 0010434c */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this,int __in_chrg)

{
 RTTIDerivedB *this_local;
 
 ~RTTIDerivedB(this,__in_chrg);
 operator_delete(this,8);
 return;
}



/* Function: ~RTTIDerivedA @ 00104374 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void __thiscall RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this,int __in_chrg)

{
 RTTIDerivedA *this_local;
 
 (this->super_RTTIBase)._vptr_RTTIBase = (_func_int_varargs **)&PTR__RTTIDerivedA_00116820;
 RTTIBase__RTTIBase(&this->super_RTTIBase,0x116820);
 return;
}



/* Function: ~RTTIDerivedA @ 001043a4 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this,int __in_chrg)

{
 RTTIDerivedA *this_local;
 
 ~RTTIDerivedA(this,__in_chrg);
 operator_delete(this,8);
 return;
}



/* Function: ~DiamondDerived @ 001043cc */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void __thiscall
DiamondDerived__DiamondDerived(DiamondDerived *this,int __in_chrg,void **__vtt_parm)

{
 undefined1 *this_00;
 int __in_chrg_00;
 DiamondDerived *this_local;
 
 (this->super_MiddleA)._vptr_MiddleA = (_func_int_varargs **)&PTR_func_00116878;
 *(undefined ***)&this->field_0x20 = &PTR_func_001168e0;
 *(undefined ***)&(this->super_MiddleA).field_0x10 = &PTR_func_001168a8;
 this_00 = &(this->super_MiddleA).field_0x10;
 MiddleB__MiddleB((MiddleB *)this_00,0x116910,(void **)this_00);
 MiddleA__MiddleA(&this->super_MiddleA,0x116900,(void **)this);
 VirtualBase__VirtualBase((VirtualBase *)&this->field_0x20,__in_chrg_00);
 return;
}



/* Function: ~DiamondDerived @ 00104458 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived__DiamondDerived_thunk(DiamondDerived *this)

{
 int in_w1;
 void **in_x2;
 
 DiamondDerived__DiamondDerived((DiamondDerived *)&this[-1].field_0x20,in_w1,in_x2);
 return;
}



/* Function: ~DiamondDerived @ 00104460 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived__DiamondDerived_virtual_thunk(DiamondDerived *this)

{
 int in_w1;
 void **in_x2;
 
 DiamondDerived__DiamondDerived((DiamondDerived *)
 ((long)&(this->super_MiddleA)._vptr_MiddleA +
 (long)(this->super_MiddleA)._vptr_MiddleA[-4]),in_w1,in_x2);
 return;
}



/* Function: ~DiamondDerived @ 00104470 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void __thiscall
DiamondDerived__DiamondDerived_destructor(DiamondDerived *this,int __in_chrg,void **__vtt_parm)

{
 DiamondDerived *this_local;
 
 DiamondDerived__DiamondDerived(this,__in_chrg,__vtt_parm);
 operator_delete(this,0x30);
 return;
}



/* Function: ~DiamondDerived @ 00104498 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived__DiamondDerived_nonvirtual_thunk(DiamondDerived *this)

{
 int in_w1;
 void **in_x2;
 
 DiamondDerived__DiamondDerived((DiamondDerived *)&this[-1].field_0x20,in_w1,in_x2);
 return;
}



/* Function: ~DiamondDerived @ 001044a0 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived__DiamondDerived_virtual_thunk2(DiamondDerived *this)

{
 int in_w1;
 void **in_x2;
 
 DiamondDerived__DiamondDerived((DiamondDerived *)
 ((long)&(this->super_MiddleA)._vptr_MiddleA +
 (long)(this->super_MiddleA)._vptr_MiddleA[-4]),in_w1,in_x2);
 return;
}



/* Function: ~MultiDerived @ 001044b0 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void __thiscall MultiDerived__MultiDerived(MultiDerived *this,int __in_chrg)

{
 int __in_chrg_00;
 MultiDerived *this_local;
 
 (this->super_BaseA)._vptr_BaseA = (_func_int_varargs **)&PTR_funcA_00116a38;
 (this->super_BaseB)._vptr_BaseB = (_func_int_varargs **)&PTR_funcB_00116a68;
 BaseB__BaseB(&this->super_BaseB,0x116a68);
 BaseA__BaseA(&this->super_BaseA,__in_chrg_00);
 return;
}



/* Function: ~MultiDerived @ 001044fc */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived__MultiDerived_nonvirtual_thunk(MultiDerived *this)

{
 int in_w1;
 
 MultiDerived__MultiDerived((MultiDerived *)&this[-1].super_BaseB,in_w1);
 return;
}



/* Function: ~MultiDerived @ 00104504 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void __thiscall MultiDerived__MultiDerived_destructor(MultiDerived *this,int __in_chrg)

{
 MultiDerived *this_local;
 
 MultiDerived__MultiDerived(this,__in_chrg);
 operator_delete(this,0x20);
 return;
}



/* Function: ~MultiDerived @ 0010452c */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived__MultiDerived_nonvirtual_thunk2(MultiDerived *this)

{
 int in_w1;
 
 MultiDerived__MultiDerived((MultiDerived *)&this[-1].super_BaseB,in_w1);
 return;
}



/* Function: ~Derived @ 00104534 */

/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void __thiscall Derived__Derived(Derived *this,int __in_chrg)

{
 Derived *this_local;
 
 (this->super_Base)._vptr_Base = (_func_int_varargs **)&PTR_virtual_func_00116ae0;
 Base__Base(&this->super_Base,0x116ae0);
 return;
}



/* Function: ~Derived @ 00104564 */

/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void __thiscall Derived__Derived_destructor(Derived *this,int __in_chrg)

{
 Derived *this_local;
 
 Derived__Derived(this,__in_chrg);
 operator_delete(this,0x10);
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 205 */
