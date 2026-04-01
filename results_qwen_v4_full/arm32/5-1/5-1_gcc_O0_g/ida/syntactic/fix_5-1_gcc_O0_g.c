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

/* Forward declarations and struct definitions */
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
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;
typedef struct std_unique_ptr std_unique_ptr;
typedef struct std_uniq_ptr_impl std_uniq_ptr_impl;
typedef struct std_uniq_ptr_impl_array std_uniq_ptr_impl_array;
typedef struct std_unique_ptr_array std_unique_ptr_array;
typedef struct RTTIBase RTTIBase;
typedef struct std_gap0_struct { unsigned char gap0; } std_gap0_struct;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;

/* Global variables */
int LifecycleClass_instance_count = 0;

struct SimpleClass {
    int value;
    char name[32];
};

struct LifecycleClass {
    size_t size;
    int *data;
};

struct Base {
    int (*_vptr_Base)(...);
};

/* External symbol declarations */
extern int off_145F0;
extern int off_145D8;
extern int off_145C4;
extern int off_145B0;
extern int off_1459C;
extern int off_14584;
extern int off_14570;
extern int off_144F0;
extern int off_144D8;
extern int off_144BC;
extern int off_144A4;
extern int off_1448C;
extern int off_14478;
extern int off_14464;
extern int _vtt_parm;
extern int _dso_handle;
extern void *std___ioinit;

/* Forward declarations */
void * operator_new(size_t size);
void * operator_new_array(size_t size);
void operator_delete(void *ptr, size_t size);
void operator_delete_array(void *ptr);
void _cxa_bad_typeid();
void _cxa_throw_bad_array_new_length();
extern void *_typeinfo_for_RTTIDerivedA;
extern void *_typeinfo_for_RTTIDerivedB;
int std_type_info_operator_eq(const void *a, const void *b);
size_t strlen(const char *s);
int ** std_move_int_ptr(int **__t);

struct Derived {
    int (*_vptr_Base)(...);
    int multiplier;
};

struct BaseA {
    int (*_vptr_BaseA)(...);
};

struct BaseB {
    int (*_vptr_BaseB)(...);
};

struct MultiDerived {
    int (*_vptr_BaseA)(...);
    BaseA BaseA_part;
    BaseB BaseB;
    int dataA;
    int dataB;
};

struct VirtualBase {
    int (*_vptr_VirtualBase)(...);
};

struct MiddleA {
    int (*_vptr_MiddleA)(...);
    int dataA;
};

struct MiddleB {
    int (*_vptr_MiddleB)(...);
    int dataB;
};

struct DiamondDerived {
    int (*_vptr_MiddleA)(...);
    int (*_vptr_MiddleB)(...);
    VirtualBase MiddleB;
    MiddleA MiddleA_part;
    int dataA;
    int dataB;
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

struct std_uniq_ptr_impl {
    void *_M_t;
};

struct std_uniq_ptr_impl_array {
    void *_M_t;
};

struct std_unique_ptr {
    std_uniq_ptr_impl _M_t;
};

struct std_unique_ptr_array {
    std_uniq_ptr_impl_array _M_t;
};

struct RTTIBase {
    int (*_vptr_RTTIBase)(...);
};

struct RTTIDerivedA {
    int (*_vptr_RTTIBase)(...);
};

struct RTTIDerivedB {
    int (*_vptr_RTTIBase)(...);
};

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/5-1/5-1_gcc_O0_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x10A5C */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_10A68 @ 0x10A68 */
void sub_10A68()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x10CC4 */
int test_cpp_member_func()
{
 int r1; // [sp+4h] [bp-38h]
 int r2; // [sp+8h] [bp-34h]
 SimpleClass obj; // [sp+10h] [bp-2Ch] BYREF

 SimpleClass::SimpleClass(&obj, 5, "Test");
 SimpleClass::setValue(&obj, 10);
 r1 = SimpleClass::getValue(&obj);
 r2 = SimpleClass::compute(&obj, 3);
 return r1 + r2 + SimpleClass::getClassID();
}


/* Function: _Z20test_cpp_constructorv @ 0x10D74 */
int test_cpp_constructor()
{
 int result; // [sp+0h] [bp-14h]
 int resulta; // [sp+0h] [bp-14h]
 LifecycleClass obj; // [sp+4h] [bp-10h] BYREF

 LifecycleClass::LifecycleClass(&obj, 5u);
 result = LifecycleClass::getData(&obj, 2u);
 resulta = result + LifecycleClass_getInstanceCount();
 LifecycleClass::~LifecycleClass(&obj);
 return resulta + 1000 * LifecycleClass_getInstanceCount();
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x10E48 */
int call_virtual_func(Base *obj, int x)
{
 return (*obj->_vptr.Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x10E84 */
int test_cpp_virtual_func()
{
 int v0; // r4
 Base base; // [sp+0h] [bp-34h] BYREF
 int r1; // [sp+4h] [bp-30h]
 int r2; // [sp+8h] [bp-2Ch]
 Base *pb; // [sp+Ch] [bp-28h]
 Base *pd; // [sp+10h] [bp-24h]
 int r3; // [sp+14h] [bp-20h]
 int r4; // [sp+18h] [bp-1Ch]
 Derived derived; // [sp+1Ch] [bp-18h] BYREF

 base._vptr_Base = (int (*)(...))&off_145F0;
 Derived_Derived(&derived, 3);
 r1 = Base_virtual_func(&base, 5);
 r2 = Derived_virtual_func(&derived, 5);
 pb = &base;
 pd = &derived;
 r3 = call_virtual_func(&base, 5);
 r4 = call_virtual_func(pd, 5);
 v0 = r1 + r2 + r3 + r4;
 Derived_Derived_destructor(&derived);
 Base_destructor(&base);
 return v0;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x10FA0 */
int test_cpp_multiple_inheritance()
{
 int v0; // r4
 int r1; // [sp+8h] [bp-2Ch]
 MultiDerived obj; // [sp+14h] [bp-20h] BYREF

 MultiDerived::MultiDerived(&obj);
 obj.dataA = 100;
 obj.dataB = 200;
 r1 = (*obj._vptr_BaseA)(&obj);
 v0 = r1 + (*obj.BaseB._vptr_BaseB)(&obj.BaseB) + (&obj != (MultiDerived *)&obj.BaseB);
 MultiDerived::~MultiDerived(&obj);
 return v0;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x110A4 */
int test_cpp_diamond_inheritance()
{
 int v0; // r4
 int r1; // [sp+4h] [bp-30h]
 DiamondDerived obj; // [sp+Ch] [bp-28h] BYREF

 DiamondDerived::DiamondDerived(&obj);
 obj.dataB = 50;
 r1 = (*obj._vptr_MiddleB)(&obj.MiddleB);
 obj.dataB = 100;
 v0 = r1 + (*obj._vptr_MiddleB)(&obj.MiddleB);
 DiamondDerived::~DiamondDerived(&obj);
 return v0;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1117C */
int test_cpp_operator_overload()
{
 int v0; // r2
 bool eq; // [sp+3h] [bp-21h]
 Point p1; // [sp+4h] [bp-20h] BYREF
 Point p2; // [sp+Ch] [bp-18h] BYREF
 Point p3; // [sp+14h] [bp-10h] BYREF

 Point_Point(&p1, 1, 2);
 Point_Point(&p2, 3, 4);
 Point::operator+(&p3, &p1, &p2);
 eq = Point::operator==(&p1, &p2);
 Point::operator++(&p3);
 if ( eq )
 v0 = 0;
 else
 v0 = 10;
 return v0 + p3.x + p3.y;
}


/* Function: _Z22test_cpp_template_funcv @ 0x11250 */
int test_cpp_template_func()
{
 int a; // [sp+4h] [bp-20h] BYREF
 int b; // [sp+8h] [bp-1Ch] BYREF
 int r1; // [sp+Ch] [bp-18h]
 double r2; // [sp+10h] [bp-14h]

 r1 = template_max_int(3, 7);
 r2 = template_max_double(2.5, 1.5);
 a = 10;
 b = 20;
 template_swap_int(&a, &b);
 return (int)r2 + r1 + a + b;
}


/* Function: _Z23test_cpp_template_classv @ 0x11324 */
int test_cpp_template_class()
{
 int r1; // [sp+0h] [bp-ACh]
 int r2; // [sp+4h] [bp-A8h]
 Container_int int_container; // [sp+14h] [bp-98h] BYREF
 Container_double double_container; // [sp+40h] [bp-6Ch] BYREF

 Container_int_Container(&int_container);
 Container_int_push(&int_container, 10);
 Container_int_push(&int_container, 20);
 Container_int_push(&int_container, 30);
 r1 = Container_int_get(&int_container, 0);
 r2 = Container_int_getSize(&int_container);
 Container_double_Container(&double_container);
 Container_double_push(&double_container, 3.14);
 return r1 + r2 + (int)Container_double_get(&double_container, 0);
}


/* Function: _ZZ15test_cpp_lambdavENKUliE_clEi @ 0x1143C */
int test_cpp_lambda_operator(
 const struct {int __capture_by_value;int *__capture_by_ref;} *__closure,
 int x)
{
 __closure->__capture_by_ref += 5;
 return __closure->__capture_by_value * x + *__closure->__capture_by_ref;
}


/* Function: _Z15test_cpp_lambdav @ 0x1149C */
int test_cpp_lambda()
{
 int capture_by_ref; // [sp+4h] [bp-20h] BYREF
 int capture_by_value; // [sp+8h] [bp-1Ch]
 int lambda2; // [sp+14h] [bp-10h] OVERLAPPED BYREF
 int *p_capture_by_ref; // [sp+18h] [bp-Ch]

 capture_by_value = 10;
 capture_by_ref = 20;
 lambda2 = 10;
 p_capture_by_ref = &capture_by_ref;
 return test_cpp_lambda_operator(
 (const struct {int __capture_by_value;int *__capture_by_ref;} *const)&lambda2,
 3)
 + 30;
}


/* Function: _Z18test_cpp_exceptionv @ 0x1152C */
void test_cpp_exception()
{
 unsigned int *exception; // r0

 exception = (unsigned int *)_cxa_allocate_exception(4u);
 *exception = 42;
 _cxa_throw(exception, (struct type_info *)0, 0);
}


/* Function: _ZZ18test_cpp_smart_ptrvENKUlPiE_clES_ @ 0x1169C */
void test_cpp_smart_ptr_lambda(
 void *__closure,
 int *p)
{
 *p = -1;
 if ( p )
 operator_delete(p, 4u);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x116E0 */
int test_cpp_smart_ptr()
{
 int *v0; // r0
 int *v1; // r0
 int *v2; // r0
 int *v3; // r0
 int v4; // r4
 int deleter; // [sp+4h] [bp-30h] BYREF
 int ptr2; // [sp+8h] [bp-2Ch] BYREF
 int ptr3; // [sp+10h] [bp-24h] BYREF
 int r1; // [sp+18h] [bp-1Ch]
 int r2; // [sp+1Ch] [bp-18h]
 int r3; // [sp+20h] [bp-14h]

 v0 = (int *)operator_new(4u);
 *v0 = 100;
 unique_ptr_int_unique_ptr(&ptr2, v0);
 *unique_ptr_int_operator_deref(&ptr2) = 200;
 v1 = move_unique_ptr_int(&ptr2);
 unique_ptr_int_unique_ptr_copy(&ptr2, v1);
 r1 = *unique_ptr_int_operator_deref(&ptr2);
 v2 = (int *)operator_new_array(0x14u);
 *v2 = 1;
 v2[1] = 2;
 v2[2] = 3;
 v2[3] = 4;
 v2[4] = 5;
 unique_ptr_int_array_unique_ptr(&ptr3, v2);
 r2 = *unique_ptr_int_array_operator_index(&ptr3, 2u);
 v3 = (int *)operator_new(4u);
 *v3 = 500;
 unique_ptr_int_custom_unique_ptr(&ptr3, v3, &deleter);
 r3 = *unique_ptr_int_custom_operator_deref(&ptr3);
 v4 = r1 + r2 + r3;
 unique_ptr_int_custom_destructor(&ptr3);
 unique_ptr_int_array_destructor(&ptr3);
 unique_ptr_int_destructor(&ptr2);
 return v4;
}


/* Function: _Z13test_cpp_rttiv @ 0x118C4 */
int test_cpp_rtti()
{
 RTTIDerivedA *v0; // r4
 RTTIDerivedB *v1; // r4
 const RTTIDerivedA *v2; // r3
 const RTTIDerivedB *v3; // r3
 const char *v4; // r0
 int result; // [sp+4h] [bp-20h]
 int resulta; // [sp+4h] [bp-20h]
 RTTIBase *obj1; // [sp+8h] [bp-1Ch]

 v0 = (RTTIDerivedA *)operator_new(4u);
 v0->_vptr_RTTIBase = (int (*)(...))0;
 RTTIDerivedA::RTTIDerivedA(v0);
 obj1 = v0;
 v1 = (RTTIDerivedB *)operator_new(4u);
 v1->_vptr_RTTIBase = (int (*)(...))0;
 RTTIDerivedB::RTTIDerivedB(v1);
 result = 0;
 if ( !obj1 )
 _cxa_bad_typeid();
 if ( std_type_info_operator_eq(*((const void **)obj1->_vptr_RTTIBase - 1), &_typeinfo_for_RTTIDerivedA) )
 result = 10;
 if ( !v1 )
 _cxa_bad_typeid();
 if ( std_type_info_operator_eq(*((const void **)v1->_vptr_RTTIBase - 1), &_typeinfo_for_RTTIDerivedB) )
 result += 20;
 v2 = (const RTTIDerivedA *)_dynamic_cast(
 obj1,
 (const struct __class_type_info *)&_typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&_typeinfo_for_RTTIDerivedA,
 0);
 if ( v2 )
 result += RTTIDerivedA::derivedA_data(v2);
 v3 = (const RTTIDerivedB *)_dynamic_cast(
 v1,
 (const struct __class_type_info *)&_typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&_typeinfo_for_RTTIDerivedB,
 0);
 if ( v3 )
 result += RTTIDerivedB::derivedB_data(v3);
 v4 = std_type_info_name(*((const void *const *)obj1->_vptr_RTTIBase - 1));
 resulta = strlen(v4) + result;
 (*((void ( **)(RTTIBase *))obj1->_vptr_RTTIBase + 1))(obj1);
 (*((void ( **)(RTTIDerivedB *))v1->_vptr_RTTIBase + 1))(v1);
 return resulta;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x11ADC */
void test_cpp_oo_features()
{
 int v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r0
 int v5; // r0
 int v6; // r0
 int v7; // r0
 int v8; // r0

 puts(s);
 v0 = test_cpp_member_func();
 printf(format, v0);
 v1 = test_cpp_constructor();
 printf(aCppL302D, v1);
 v2 = test_cpp_virtual_func();
 printf(aCppL303D, v2);
 v3 = test_cpp_multiple_inheritance();
 printf(aCppL304D, v3);
 v4 = test_cpp_diamond_inheritance();
 printf(aCppL305D, v4);
 v5 = test_cpp_operator_overload();
 printf(aCppL306D, v5);
 v6 = test_cpp_template_func();
 printf(aCppL307D, v6);
 v7 = test_cpp_template_class();
 printf(aCppL308D, v7);
 v8 = test_cpp_lambda();
 printf(aCppL309D, v8);
 test_cpp_exception();
}


/* Function: main @ 0x11C18 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: std_uniq_ptr_data_constructor @ 0x11C30 */
void * std_uniq_ptr_data_constructor(
 std_uniq_ptr_impl *this_ptr,
 void *a2,
 void *a3)
{
 std_uniq_ptr_impl_constructor(
 this_ptr,
 a2,
 a3);
 return this_ptr;
}


/* Function: std_unique_ptr_constructor @ 0x11C6C */
void * std_unique_ptr_constructor(
 std_unique_ptr *_this,
 int *__p,
 void *__d)
{
 std_uniq_ptr_data_constructor(
 &_this->_M_t,
 __p,
 __d);
 return _this;
}


/* Function: std_unique_ptr_destructor @ 0x11CA8 */
void * std_unique_ptr_destructor(
 std_unique_ptr *_this)
{
 void *deleter; // r4
 int **v2; // r0
 int **__ptr; // [sp+Ch] [bp-10h]

 __ptr = std_uniq_ptr_impl_M_ptr(&_this->_M_t);
 if ( *__ptr )
 {
 deleter = std_unique_ptr_get_deleter(_this);
 v2 = std_move_int_ptr(__ptr);
 test_cpp_smart_ptr_lambda(deleter, *v2);
 }
 *__ptr = 0;
 return _this;
}


/* Function: std_unique_ptr_deref @ 0x11D1C */
int * std_unique_ptr_deref(
 std_unique_ptr *_this)
{
 return std_unique_ptr_get(_this);
}


/* Function: std_uniq_ptr_impl_constructor @ 0x11D4C */
void * std_uniq_ptr_impl_constructor(
 std_uniq_ptr_impl *_this,
 int *__p,
 void *__d)
{
 void *v4; // r0
 int *__pa; // [sp+8h] [bp-14h] BYREF
 std_uniq_ptr_impl *thisa; // [sp+Ch] [bp-10h]

 thisa = _this;
 __pa = __p;
 v4 = std_forward_const_lambda(__d);
 std_tuple_constructor(
 &_this->_M_t,
 &__pa,
 v4);
 return thisa;
}


/* Forward declarations */
int ** std_get_0(void *__t);
std_gap0_struct * std_get_1(void *__t);
int *const * std_get_0_const(const void *__t);
void * std_head_base_0_constructor_default_int(void *this_ptr);

/* Function: std_uniq_ptr_impl_M_ptr @ 0x11D94 */
int ** std_uniq_ptr_impl_M_ptr(
 std_uniq_ptr_impl *_this)
{
 return (int **)std_get_0(&_this->_M_t);
}


/* Function: std_uniq_ptr_impl_M_ptr @ 0x13668 */
int ** std_uniq_ptr_impl_M_ptr(
 void *const this_ptr)
{
 return (int **)std_get_0(&((std_uniq_ptr_impl *)this_ptr)->_M_t);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x13668 */
int ** std_uniq_ptr_impl_M_ptr_v2(
 void *const this_ptr)
{
 return (int **)std_get_0(&((std_uniq_ptr_impl *)this_ptr)->_M_t);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv @ 0x138E8 */
void * std_uniq_ptr_impl_M_deleter_v2(
 std_uniq_ptr_impl *const this_ptr)
{
 return (void *)std_get_1(&this_ptr->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x13914 */
int * std_uniq_ptr_impl_M_ptr_const_v2(
 const std_uniq_ptr_impl *const this_ptr)
{
 return *std_get_0_const(&this_ptr->_M_t);
}


/* Function: std_unique_ptr_get_deleter @ 0x11DC0 */
void * std_unique_ptr_get_deleter(
 std_unique_ptr *_this)
{
 return (void *)std_uniq_ptr_impl_M_deleter(&_this->_M_t);
}


/* Function: std_unique_ptr_get @ 0x11DEC */
int * std_unique_ptr_get(
 std_unique_ptr *_this)
{
 return std_uniq_ptr_impl_M_ptr_const(&_this->_M_t);
}


/* Function: std_forward_const_lambda @ 0x11E18 */
std_gap0_struct * std_forward_const_lambda(
 std_gap0_struct *__t)
{
 return (std_gap0_struct *)__t;
}


/* Function: std_tuple_constructor @ 0x11E3C */
void * std_tuple_constructor(
 void *const this_ptr,
 int **__a1,
 const std_gap0_struct *__a2)
{
 int **v4; // r5
 const std_gap0_struct *v5; // r0

 v4 = __a1;
 v5 = __a2;
 std_tuple_impl_constructor(
 this_ptr,
 v4,
 v5);
 return this_ptr;
}


/* Forward declaration */
void * std_tuple_impl_constructor(void *const this_ptr, int **__head, const std_gap0_struct *__a2);
void * std_get_helper_0(void *__t);
int *const * std_get_helper_0_const(const void *__t);
std_gap0_struct * std_get_helper_1(void *__t);
void * std_tuple_impl_0_M_head(void *this_ptr);
int *const * std_tuple_impl_0_M_head_const(const void *__t);
std_gap0_struct * std_tuple_impl_1_M_head(void *this_ptr);
void * std_head_base_0_M_head(void *__b);
int *const * std_head_base_0_M_head_const(const void *__b);
std_gap0_struct * std_head_base_1_M_head(void *__b);


/* Function: std_get_0 @ 0x11E90 */
int ** std_get_0(
 void *__t)
{
 return std_get_helper_0(__t);
}


/* Function: std_uniq_ptr_impl_M_deleter @ 0x11EBC */
std_gap0_struct * std_uniq_ptr_impl_M_deleter(
 std_uniq_ptr_impl *const this_ptr)
{
 return (std_gap0_struct *)std_get_1(&this_ptr->_M_t);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv @ 0x138E8 */
void * std_uniq_ptr_impl_M_deleter_v2(
 std_uniq_ptr_impl *const this_ptr)
{
 return (void *)std_get_1(&this_ptr->_M_t);
}


/* Function: std_uniq_ptr_impl_M_ptr_const @ 0x11EE8 */
int * std_uniq_ptr_impl_M_ptr_const(
 const std_uniq_ptr_impl *const this_ptr)
{
 return (int *)*std_get_0_const(&this_ptr->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x13914 */
int * std_uniq_ptr_impl_M_ptr_const_v2(
 const std_uniq_ptr_impl *const this_ptr)
{
 return *std_get_0_const(&this_ptr->_M_t);
}


/* Function: std_tuple_impl_constructor @ 0x11F18 */
void * std_tuple_impl_constructor(
 void *const this_ptr,
 int **__head,
 const std_gap0_struct *a3)
{
 const std_gap0_struct *v3; // r0
 int **v4; // r0

 v3 = a3;
 std_tuple_impl_1_constructor((void *)this_ptr, v3);
 v4 = __head;
 std_head_base_0_constructor((void *)this_ptr, v4);
 return this_ptr;
}





/* Function: std_get_1 @ 0x11F9C */
std_gap0_struct * std_get_1(
 void *__t)
{
 return (std_gap0_struct *)std_get_helper_1_test_cpp_smart_ptr_lambda(__t);
}


/* Function: std_get_0_const @ 0x11FC4 */
int *const * std_get_0_const(
 const void *__t)
{
 return std_get_helper_0_const(__t);
}


/* Function: std_tuple_impl_1_constructor @ 0x11FF0 */
void * std_tuple_impl_1_constructor(
 void *const this_ptr,
 const std_gap0_struct *__head)
{
 std_head_base_1_constructor(this_ptr, __head);
 return this_ptr;
}


/* Function: std_tuple_impl_0_M_head @ 0x12020 */
int ** std_tuple_impl_0_M_head(
 void *this_ptr)
{
 return (int **)std_head_base_0_M_head(this_ptr);
}


/* Function: std_get_helper_1_test_cpp_smart_ptr_lambda @ 0x1204C */
std_gap0_struct * std_get_helper_1_test_cpp_smart_ptr_lambda(
 void *__t)
{
 return (std_gap0_struct *)std_get_helper_1(__t);
}


/* Function: std_head_base_1_constructor @ 0x1209C */
void * std_head_base_1_constructor(
 void *const this_ptr,
 const std_gap0_struct *__h)
{
 return this_ptr;
}


/* Function: std_tuple_impl_1_M_head @ 0x120C4 */
std_gap0_struct * std_tuple_impl_1_M_head(
 void *this_ptr)
{
 return (std_gap0_struct *)std_head_base_1_M_head((void *)this_ptr);
}


/* Function: std_tuple_impl_0_M_head_const @ 0x120EC */
void * std_tuple_impl_0_M_head_const(
 const void *__t)
{
 return (void *)std_head_base_0_M_head_const(__t);
}


/* Function: std_head_base_1_M_head @ 0x12118 */
std_gap0_struct * std_head_base_1_M_head(
 void *this_ptr)
{
 return (std_gap0_struct *)(void *)this_ptr;
}








/* Function: _Z41__static_initialization_and_destruction_0ii @ 0x1213C */
void __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
 if ( __initialize_p == 1 && __priority == 0xFFFF )
 {
 std_ios_base_Init_Init((void *)&std___ioinit);
 _aeabi_atexit((void *)&std___ioinit, std_ios_base_Init_destructor, &_dso_handle);
 }
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x121A0 */
void GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 __static_initialization_and_destruction_0(1, 0xFFFF);
}


/* Function: _ZNKSt9type_info4nameEv @ 0x121BC */
const char * std_type_info_name(const void *const this_ptr)
{
 if ( **((unsigned char **)this_ptr + 1) == 42 )
 return (const char *)(((unsigned int *)this_ptr)[1] + 1);
 else
 return (const char *)((unsigned int *)this_ptr)[1];
}


/* Function: _ZN11SimpleClassC2EiPKc @ 0x12208 */
SimpleClass * SimpleClass_SimpleClass(SimpleClass *const this_ptr, int v, const char *n)
{
 this_ptr->value = v;
 strncpy(this_ptr->name, n, 0x1Fu);
 this_ptr->name[31] = 0;
 return this_ptr;
}


/* Function: _ZNK11SimpleClass8getValueEv @ 0x12260 */
int SimpleClass_getValue(const SimpleClass *const this_ptr)
{
 return this_ptr->value;
}


/* Function: _ZN11SimpleClass8setValueEi @ 0x12288 */
void SimpleClass_setValue(SimpleClass *const this_ptr, int v)
{
 this_ptr->value = v;
}


/* Function: _ZNK11SimpleClass7computeEi @ 0x122B8 */
int SimpleClass_compute(const SimpleClass *const this_ptr, int x)
{
 return x * this_ptr->value + strlen(this_ptr->name);
}


/* Function: _ZN11SimpleClass10getClassIDEv @ 0x12304 */
int SimpleClass::getClassID()
{
 return 4660;
}


/* Function: _ZN14LifecycleClassC2Ej @ 0x12324 */
LifecycleClass * LifecycleClass_LifecycleClass(LifecycleClass *const this_ptr, size_t s)
{
 size_t i; // [sp+Ch] [bp-8h]

 this_ptr->size = s;
 if ( s > 0x1FFFFFFE )
 _cxa_throw_bad_array_new_length();
 this_ptr->data = (int *)operator_new_array(4 * s);
 for ( i = 0; i < s; ++i )
 this_ptr->data[i] = 10 * i;
 ++LifecycleClass_instance_count;
 return this_ptr;
}




/* Function: _ZN14LifecycleClassD2Ev @ 0x123F4 */
void * LifecycleClass_destructor(LifecycleClass *const this_ptr)
{
 if ( this_ptr->data )
 operator_delete_array(this_ptr->data);
 --LifecycleClass_instance_count;
 return this_ptr;
}

void operator_delete_array(void *ptr);


/* Function: _ZNK14LifecycleClass7getDataEj @ 0x1244C */
int LifecycleClass_getData(const LifecycleClass *const this_ptr, size_t idx)
{
 if ( idx >= this_ptr->size )
 return -1;
 else
 return this_ptr->data[idx];
}


/* Function: _ZN14LifecycleClass16getInstanceCountEv @ 0x124A4 */
int LifecycleClass_getInstanceCount()
{
 return LifecycleClass_instance_count;
}


/* Function: _ZN4Base12virtual_funcEi @ 0x124C8 */
int Base_virtual_func(Base *const this_ptr, int x)
{
 return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x124F4 */
const char * Base_getName(const Base *const this_ptr)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x1251C */
void * Base_destructor(Base *const this_ptr)
{
 this_ptr->_vptr_Base = (int (*)(...))&off_145F0;
 return this_ptr;
}


/* Function: _ZN4BaseD0Ev @ 0x12550 */
void * Base_destructorDeleting(Base *const this_ptr)
{
 Base_destructor(this_ptr);
 operator_delete(this_ptr, 4u);
 return this_ptr;
}


/* Function: _ZN4BaseC2Ev @ 0x12584 */
Base * Base_Base(Base *const this_ptr)
{
 this_ptr->_vptr_Base = (int (*)(...))&off_145F0;
 return this_ptr;
}


/* Function: _ZN7DerivedC2Ei @ 0x125B8 */
Derived * Derived_Derived(Derived *const this_ptr, int m)
{
 Base_Base(this_ptr);
 this_ptr->_vptr_Base = (int (*)())&off_145D8;
 this_ptr->multiplier = m;
 return this_ptr;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x12604 */
int Derived_virtual_func(Derived *const this_ptr, int x)
{
 return x * this_ptr->multiplier;
}


/* Function: _ZNK7Derived7getNameEv @ 0x12638 */
const char * Derived_getName(const Derived *const this_ptr)
{
 return "Derived";
}


/* Function: _ZN5BaseA5funcAEv @ 0x12660 */
int BaseA_funcA(BaseA *const this_ptr)
{
 return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x12684 */
void * BaseA_destructor(BaseA *const this_ptr)
{
 this_ptr->_vptr_BaseA = (int (*)(...))&off_145C4;
 return this_ptr;
}


/* Function: _ZN5BaseAD0Ev @ 0x126B8 */
void * BaseA_destructorDeleting(BaseA *const this_ptr)
{
 BaseA_destructor(this_ptr);
 operator_delete(this_ptr, 8u);
 return this_ptr;
}


/* Function: _ZN5BaseB5funcBEv @ 0x126EC */
int BaseB_funcB(BaseB *const this_ptr)
{
 return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x12710 */
void * BaseB_destructor(BaseB *const this_ptr)
{
 this_ptr->_vptr_BaseB = (int (*)(...))&off_145B0;
 return this_ptr;
}


/* Function: _ZN5BaseBD0Ev @ 0x12744 */
void * BaseB_destructorDeleting(BaseB *const this_ptr)
{
 BaseB_destructor(this_ptr);
 operator_delete(this_ptr, 8u);
 return this_ptr;
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x12778 */
int MultiDerived_funcA(MultiDerived *const this_ptr)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x1279C */
int MultiDerived_funcB(MultiDerived *const this_ptr)
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x127C0 */
int MultiDerived_funcB_thunk(MultiDerived *this_ptr)
{
 return MultiDerived_funcB((MultiDerived *)((char *)this_ptr - 8));
}


/* Function: _ZN5BaseAC2Ev @ 0x127C8 */
BaseA * BaseA_BaseA(BaseA *const this_ptr)
{
 this_ptr->_vptr_BaseA = (int (*)(...))&off_145C4;
 return this_ptr;
}


/* Function: _ZN5BaseBC2Ev @ 0x127FC */
BaseB * BaseB_BaseB(BaseB *const this_ptr)
{
 this_ptr->_vptr_BaseB = (int (*)(...))&off_145B0;
 return this_ptr;
}


/* Function: _ZN12MultiDerivedC2Ev @ 0x12830 */
MultiDerived * MultiDerived_MultiDerived(MultiDerived *const this_ptr)
{
 BaseA_BaseA(this_ptr);
 BaseB_BaseB(&this_ptr->BaseB);
 this_ptr->_vptr_BaseA = (int (*)(...))&off_14584;
 this_ptr->BaseB._vptr_BaseB = (int (*)(...))&off_1459C;
 return this_ptr;
}


/* Function: _ZN11VirtualBase4funcEv @ 0x1288C */
int VirtualBase_func(VirtualBase *const this_ptr)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x128B0 */
void * VirtualBase_destructor(VirtualBase *const this_ptr)
{
 this_ptr->_vptr_VirtualBase = (int (*)(...))&off_14570;
 return this_ptr;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x128E4 */
void * VirtualBase_destructorDeleting(VirtualBase *const this_ptr)
{
 VirtualBase_destructor(this_ptr);
 operator_delete(this_ptr, 8u);
 return this_ptr;
}


/* Function: _ZN7MiddleA4funcEv @ 0x12918 */
int MiddleA_func(MiddleA *const this_ptr)
{
 return *(int *)((char *)&this_ptr->dataA + *((unsigned int *)this_ptr->_vptr_MiddleA - 3)) + 150;
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x1295C */
int MiddleA_func_virtual_thunk(MiddleA *this_ptr)
{
 return MiddleA_func((MiddleA *)((char *)this_ptr + *((unsigned int *)this_ptr->_vptr_MiddleA - 3)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x12970 */
int MiddleB_func(MiddleB *const this_ptr)
{
 return *(int *)((char *)&this_ptr->dataB + *((unsigned int *)this_ptr->_vptr_MiddleB - 3)) + 200;
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x129B4 */
int MiddleB_func_virtual_thunk(MiddleB *this_ptr)
{
 return MiddleB_func((MiddleB *)((char *)this_ptr + *((unsigned int *)this_ptr->_vptr_MiddleB - 3)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x129C8 */
int DiamondDerived_func(DiamondDerived *const this_ptr)
{
 return *(int *)((char *)&this_ptr->dataA + *((unsigned int *)this_ptr->_vptr.MiddleA - 3)) + 250;
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x12A0C */
int DiamondDerived_func_virtual_thunk(DiamondDerived *this_ptr)
{
 return DiamondDerived_func((DiamondDerived *)((char *)this_ptr + *((unsigned int *)this_ptr->_vptr.MiddleA - 3)));
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x12A20 */
int DiamondDerived_func_nonvirtual_thunk(DiamondDerived *this_ptr)
{
 return DiamondDerived_func((DiamondDerived *)((char *)this_ptr - 8));
}


/* Function: _ZN11VirtualBaseC2Ev @ 0x12A28 */
VirtualBase * VirtualBase_VirtualBase(VirtualBase *const this_ptr)
{
 this_ptr->_vptr.VirtualBase = (int (*)(...))&off_14570;
 return this_ptr;
}


/* Function: _ZN7MiddleAC2Ev @ 0x12A5C */
MiddleA * MiddleA_MiddleA(MiddleA *const this_ptr, const void **const __vtt_parm)
{
 this_ptr->_vptr_MiddleA = (int (*)(...))*__vtt_parm;
 *(int (**)(...))((char *)&this_ptr->_vptr_MiddleA + *((unsigned int *)this_ptr->_vptr_MiddleA - 3)) = (int (*)(...))__vtt_parm[1];
 return this_ptr;
}


/* Function: _ZN7MiddleAD2Ev @ 0x12ABC */
void * MiddleA_destructor(MiddleA *const this_ptr, const void **const __vtt_parm)
{
 this_ptr->_vptr_MiddleA = (int (*)(...))*__vtt_parm;
 *(int (**)(...))((char *)&this_ptr->_vptr_MiddleA + *((unsigned int *)this_ptr->_vptr_MiddleA - 3)) = (int (*)(...))__vtt_parm[1];
 return this_ptr;
}


/* Function: _ZN7MiddleBC2Ev @ 0x12B1C */
MiddleB * MiddleB_MiddleB(MiddleB *const this_ptr, const void **const __vtt_parm)
{
 this_ptr->_vptr_MiddleB = (int (*)(...))*__vtt_parm;
 *(int (**)(...))((char *)&this_ptr->_vptr_MiddleB + *((unsigned int *)this_ptr->_vptr_MiddleB - 3)) = (int (*)(...))__vtt_parm[1];
 return this_ptr;
}


/* Function: _ZN7MiddleBD2Ev @ 0x12B7C */
void * MiddleB_destructor(MiddleB *const this_ptr, const void **const __vtt_parm)
{
 this_ptr->_vptr_MiddleB = (int (*)(...))*__vtt_parm;
 *(int (**)(...))((char *)&this_ptr->_vptr_MiddleB + *((unsigned int *)this_ptr->_vptr_MiddleB - 3)) = (int (*)(...))__vtt_parm[1];
 return this_ptr;
}


/* Function: _ZN14DiamondDerivedC1Ev @ 0x12BDC */
DiamondDerived * DiamondDerived_DiamondDerived(DiamondDerived *const this_ptr)
{
 VirtualBase_VirtualBase((VirtualBase *const)&this_ptr->MiddleB);
 MiddleA_MiddleA(this_ptr, (const void **const)&_vtt_parm);
 MiddleB_MiddleB((MiddleB *const)((char*)&this_ptr->dataA + 4), (const void **const)&off_144F0);
 this_ptr->_vptr_MiddleA = (int (*)(...))&off_144A4;
 this_ptr->_vptr_MiddleB = (int (*)(...))&off_144D8;
 *((int*)((char*)&this_ptr->dataA + 4)) = (int)&off_144BC;
 return this_ptr;
}


/* Function: _ZN5PointC2Eii @ 0x12C74 */
Point * Point_Point(Point *const this_ptr, int _x, int _y)
{
 this_ptr->x = _x;
 this_ptr->y = _y;
 return this_ptr;
}


/* Function: _ZNK5PointplERKS_ @ 0x12CB8 */
Point * Point_operator_add(Point *__return_ptr retstr, const Point *const this_ptr, const Point *other)
{
 Point_Point(retstr, this_ptr->x + other->x, this_ptr->y + other->y);
 return retstr;
}


/* Function: _ZNK5PointeqERKS_ @ 0x12D10 */
bool Point_operator_eq(const Point *const this_ptr, const Point *other)
{
 return this_ptr->x == other->x && this_ptr->y == other->y;
}


/* Function: _ZN5PointppEv @ 0x12D70 */
Point * Point_operator_inc(Point *const this_ptr)
{
 ++this_ptr->x;
 ++this_ptr->y;
 return this_ptr;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x12DBC */
int template_max_int(int a, int b)
{
 if ( a <= b )
 return b;
 else
 return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x12DFC */
double template_max_double(double a, double b)
{
 if ( a > b )
 return a;
 return b;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x12E5C */
void template_swap_int(int *a, int *b)
{
 int temp; // [sp+Ch] [bp-8h]

 temp = *a;
 *a = *b;
 *b = temp;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x12EA8 */
Container_int * Container_int_Container(Container_int *const this_ptr)
{
 this_ptr->size = 0;
 return this_ptr;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x12ED8 */
void Container_int_push(Container_int *const this_ptr, int value)
{
 int size; // r3

 if ( this_ptr->size <= 9 )
 {
 size = this_ptr->size;
 this_ptr->size = size + 1;
 this_ptr->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x12F2C */
int Container_int_get(const Container_int *const this_ptr, int idx)
{
 if ( idx < 0 || idx >= this_ptr->size )
 return 0;
 else
 return this_ptr->data[idx];
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x12F84 */
int Container_int_getSize(const Container_int *const this_ptr)
{
 return this_ptr->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x12FAC */
Container_double * Container_double_Container(Container_double *const this_ptr)
{
 this_ptr->size = 0;
 return this_ptr;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x12FDC */
void Container_double_push(Container_double *const this_ptr, double value)
{
 int size; // r1

 if ( this_ptr->size <= 9 )
 {
 size = this_ptr->size;
 this_ptr->size = size + 1;
 this_ptr->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x13040 */
double Container_double_get(const Container_double *const this_ptr, int idx)
{
 if ( idx < 0 || idx >= this_ptr->size )
 return 0.0;
 else
 return this_ptr->data[idx];
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x130A8 */
int Container_double_getSize(const Container_double *const this_ptr)
{
 return this_ptr->size;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ @ 0x130D0 */
void * std_uniq_ptr_data___uniq_ptr_data(
 void *this_ptr,
 void *a2)
{
 std_uniq_ptr_impl_constructor_ptr(this_ptr, a2);
 return this_ptr;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_ @ 0x13108 */
void * std_unique_ptr_unique_ptr(
 void *this_ptr,
 void *a2)
{
 std_uniq_ptr_data___uniq_ptr_data(&((std_unique_ptr *)this_ptr)->_M_t, &((std_unique_ptr *)a2)->_M_t);
 return this_ptr;
}


/* Function: _ZNK8RTTIBase7getTypeEv @ 0x13140 */
int RTTIBase_getType(const RTTIBase *const this_ptr)
{
 return 0;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x13164 */
int RTTIDerivedA_getType(const RTTIDerivedA *const this_ptr)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedA13derivedA_dataEv @ 0x13188 */
int RTTIDerivedA_derivedA_data(const RTTIDerivedA *const this_ptr)
{
 return 100;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x131AC */
int RTTIDerivedB_getType(const RTTIDerivedB *const this_ptr)
{
 return 2;
}


/* Function: _ZNK12RTTIDerivedB13derivedB_dataEv @ 0x131D0 */
int RTTIDerivedB_derivedB_data(const RTTIDerivedB *const this_ptr)
{
 return 200;
}


/* Function: _ZN8RTTIBaseC2Ev @ 0x131F4 */
RTTIBase * RTTIBase_RTTIBase(RTTIBase *const this_ptr)
{
 this_ptr->_vptr_RTTIBase = (int (*)(...))&off_1448C;
 return this_ptr;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x13228 */
void * RTTIBase_destructor(RTTIBase *const this_ptr)
{
 this_ptr->_vptr_RTTIBase = (int (*)(...))&off_1448C;
 return this_ptr;
}


/* Function: _ZN8RTTIBaseD0Ev @ 0x1325C */
void * RTTIBase_destructorDeleting(RTTIBase *const this_ptr)
{
 RTTIBase_destructor(this_ptr);
 operator_delete(this_ptr, 4u);
 return this_ptr;
}


/* Function: _ZN12RTTIDerivedAC2Ev @ 0x13290 */
RTTIDerivedA * RTTIDerivedA_RTTIDerivedA(RTTIDerivedA *const this_ptr)
{
 RTTIBase_RTTIBase(this_ptr);
 this_ptr->_vptr_RTTIBase = (int (*)(...))&off_14478;
 return this_ptr;
}


/* Function: _ZN12RTTIDerivedBC2Ev @ 0x132CC */
RTTIDerivedB * RTTIDerivedB_RTTIDerivedB(RTTIDerivedB *const this_ptr)
{
 RTTIBase_RTTIBase(this_ptr);
 this_ptr->_vptr_RTTIBase = (int (*)(...))&off_14464;
 return this_ptr;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi @ 0x13308 */
void * std_uniq_ptr_data___uniq_ptr_data_ptr(
 void *const this,
 int *a2)
{
 std_uniq_ptr_impl___uniq_ptr_impl(this, a2);
 return this;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi @ 0x13340 */
void * std_unique_ptr_unique_ptr_ptr(
 void *const this_ptr,
 int *__p)
{
 std_uniq_ptr_data___uniq_ptr_data_ptr(&((std_unique_ptr *)this_ptr)->_M_t, __p);
 return this_ptr;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x13374 */
void * std_unique_ptr_int_destructor(std_unique_ptr *const this_ptr)
{
 void *deleter; // r4
 int **v2; // r0
 int **__ptr; // [sp+Ch] [bp-10h]

 __ptr = std_uniq_ptr_impl_M_ptr(&this_ptr->_M_t);
 if ( *__ptr )
 {
 deleter = std_unique_ptr_int_get_deleter(this_ptr);
 v2 = std_move_int_ptr(__ptr);
 std_default_delete_int_operator_call(deleter, *v2);
 }
 *__ptr = 0;
 return this_ptr;
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv @ 0x133E8 */
int * std_unique_ptr_int_operator_deref(
 const std_unique_ptr *const this_ptr)
{
 return std_unique_ptr_int_get(this_ptr);
}


/* Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ @ 0x13418 */
std_unique_ptr * std_move_unique_ptr_int(
 std_unique_ptr *__t)
{
 return __t;
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2EOS3_ @ 0x1343C */
void * std_tuple_impl_0_constructor(
 void *const this_ptr,
 void *a2)
{
 std_tuple_impl_1_constructor(this_ptr, a2);
 return this_ptr;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_ @ 0x1347C */
void * std_tuple_constructor_copy(
 void *const this_ptr,
 void *a2)
{
 std_tuple_impl_0_constructor(this_ptr, a2);
 return this_ptr;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_ @ 0x134B4 */
void * std_uniq_ptr_impl_copy_constructor(
 void *const this_ptr,
 void *__u)
{
 void *v3; // r0

 v3 = std_move_tuple(&__u->_M_t);
 std_tuple_constructor_copy(&this_ptr->_M_t, v3);
 *std_uniq_ptr_impl_M_ptr(__u) = 0;
 return this_ptr;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi @ 0x1350C */
void * std_uniq_ptr_data_array___uniq_ptr_data(
 void *this_ptr,
 int *a2)
{
 std_uniq_ptr_impl_array___uniq_ptr_impl(this_ptr, a2);
 return this_ptr;
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ @ 0x13544 */
void * std_unique_ptr_array_unique_ptr(
 void *this_ptr,
 int *__p)
{
 std_uniq_ptr_data_array___uniq_ptr_data(&((std_unique_ptr_array *)this_ptr)->_M_t, __p);
 return this_ptr;
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x13578 */
void * std_unique_ptr_int_array_destructor(std_unique_ptr_array *const this_ptr)
{
 std_unique_ptr_int_array_deleter_type *deleter; // r0
 int **__ptr; // [sp+Ch] [bp-8h]

 __ptr = std_uniq_ptr_impl_array_M_ptr(&this_ptr->_M_t);
 if ( *__ptr )
 {
 deleter = std_unique_ptr_int_array_get_deleter(this_ptr);
 std_default_delete_int_array_operator_call(deleter, *__ptr);
 }
 *__ptr = 0;
 return this_ptr;
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEj @ 0x135E4 */
int * std_unique_ptr_int_array_operator_index(
 const std_unique_ptr_array *const this_ptr,
 size_t __i)
{
 return &std_unique_ptr_int_array_get(this_ptr)[__i];
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi @ 0x13624 */
void * std_uniq_ptr_impl_constructor_ptr(
 void *const this_ptr,
 int *__p)
{
 std_tuple_impl_0_constructor_default(&this_ptr->_M_t);
 *std_uniq_ptr_impl_M_ptr(this_ptr) = __p;
 return this_ptr;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x13668 */
int ** std_uniq_ptr_impl_M_ptr(
 void *const this_ptr)
{
 return (int **)std_get_0(&this_ptr->_M_t);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv @ 0x13694 */
void * std_unique_ptr_int_get_deleter(std_unique_ptr *const this_ptr)
{
 return std_uniq_ptr_impl_M_deleter(&this_ptr->_M_t);
}


/* Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ @ 0x136C0 */
int ** std_move_int_ptr(int **__t)
{
 return __t;
}


/* Function: _ZNKSt14default_deleteIiEclEPi @ 0x136E4 */
void std_default_delete_int_operator_call(const void *const this_ptr, int *__ptr)
{
 if ( __ptr )
 operator_delete(__ptr, 4u);
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv @ 0x1371C */
int * std_unique_ptr_int_get(const std_unique_ptr *const this_ptr)
{
 return std_uniq_ptr_impl_M_ptr_const(&this_ptr->_M_t);
}


/* Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ @ 0x13748 */
void * std_move_tuple(
 void *__t)
{
 return __t;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2EOS2_ @ 0x1376C */
void * std_tuple_impl_1_constructor(
 void *const this_ptr,
 void *__in)
{
 return this_ptr;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi @ 0x13794 */
void * std_uniq_ptr_impl_array___uniq_ptr_impl(
 void *const this_ptr,
 int *__p)
{
 std_tuple_impl_0_array_constructor_default(&((std_uniq_ptr_impl_array *)this_ptr)->_M_t);
 *(int **)std_uniq_ptr_impl_array_M_ptr((void *const)this_ptr) = __p;
 return (void *)this_ptr;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x137D8 */
int ** std_uniq_ptr_impl_array_M_ptr(
 void *const this_ptr)
{
 return (int **)std_get_0((void *)&((std_uniq_ptr_impl_array *)this_ptr)->_M_t);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv @ 0x1399C */
void * std_uniq_ptr_impl_array_M_deleter(
 void *const this_ptr)
{
 return (void *)std_get_1((void *)&((std_uniq_ptr_impl_array *)this_ptr)->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x139C8 */
int * std_uniq_ptr_impl_array_M_ptr_const(
 const void *const this_ptr)
{
 return (int *)*std_get_0_const((const void *)&((const std_uniq_ptr_impl_array *)this_ptr)->_M_t);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv @ 0x13804 */
void * std_unique_ptr_int_array_get_deleter(
 std_unique_ptr_array *const this_ptr)
{
 return (void *)std_uniq_ptr_impl_array_M_deleter((void *const)&this_ptr->_M_t);
}


/* Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsrSt14is_convertibleIPA_T_PS0_E5valueEvE4typeEPS5_ @ 0x13830 */
void std_default_delete_int_array_operator_call(const void *const this_ptr, int *__ptr)
{
 if ( __ptr )
 operator_delete_array(__ptr);
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv @ 0x13864 */
int * std_unique_ptr_int_array_get(const std_unique_ptr_array *const this_ptr)
{
 return (int *)std_uniq_ptr_impl_array_M_ptr_const(&((const std_uniq_ptr_impl_array *)&this_ptr->_M_t));
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv @ 0x13890 */
void * std_tuple_impl_0_constructor_default(
 void *const this_ptr)
{
 std_tuple_impl_1_constructor_default(this_ptr);
 std_head_base_0_constructor_default_int(this_ptr);
 return this_ptr;
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x138BC */
int ** std_get_helper_0_int(
 void *__t)
{
 return (int **)std_tuple_impl_0_M_head(__t);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv @ 0x138E8 */
void * std_uniq_ptr_impl_M_deleter(
 void *const this_ptr)
{
 return (void *)std_get_1(&this_ptr->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x13914 */
int * std_uniq_ptr_impl_M_ptr_const(
 const void *const this_ptr)
{
 return (int *)*std_get_0_const(&this_ptr->_M_t);
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv @ 0x13944 */
void * std_tuple_impl_0_array_constructor_default(
 void *const this_ptr)
{
 std_tuple_impl_1_array_constructor_default(this_ptr);
 std_head_base_0_constructor_default_int(this_ptr);
 return this_ptr;
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x13970 */
int ** std_get_helper_0_array(
 void *__t)
{
 return (int **)std_tuple_impl_0_M_head(__t);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv @ 0x1399C */
void * std_uniq_ptr_impl_array_M_deleter(
 void *const this_ptr)
{
 return (void *)std_get_1((void *)&((std_uniq_ptr_impl_array *)this_ptr)->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x139C8 */
int * std_uniq_ptr_impl_array_M_ptr_const(
 const void *const this_ptr)
{
 return (int *)*std_get_0_const((const void *)&((const std_uniq_ptr_impl_array *)this_ptr)->_M_t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2Ev @ 0x139F8 */
void * std_tuple_impl_0_constructor_default_int(
 void *const this_ptr)
{
 std_tuple_impl_1_constructor_default(this_ptr);
 std_head_base_0_constructor_default_int(this_ptr);
 return this_ptr;
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x13A2C */
int ** std_get_helper_0_int_2(
 void *__t)
{
 return (int **)std_tuple_impl_0_M_head(__t);
}


/* Function: _ZSt3getILj1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x13A54 */
std_gap0_struct * std_get_1(
 void *__t)
{
 return (std_gap0_struct *)std_get_helper_1(__t);
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ @ 0x13A7C */
int *const * std_get_0_const(
 const void *__t)
{
 return std_get_helper_0_const(__t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEEC2Ev @ 0x13AA8 */
void * std_tuple_impl_0_array_constructor_default_int(
 void *const this_ptr)
{
 std_tuple_impl_1_array_constructor_default(this_ptr);
 std_head_base_0_constructor_default_int(this_ptr);
 return this_ptr;
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x13ADC */
int ** std_get_helper_0_array_2(
 void *__t)
{
 return (int **)std_tuple_impl_0_M_head(__t);
}


/* Function: _ZSt3getILj1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x13B04 */
void * std_get_helper_1(
 void *__t)
{
 return (void *)std_tuple_impl_1_M_head(__t);
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ @ 0x13B2C */
int *const * std_get_0_const(
 const void *__t)
{
 return std_get_helper_0_const(__t);
}


/* Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE @ 0x13B58 */
int ** std_forward_int_ptr(int **__t)
{
 return __t;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2Ev @ 0x13B7C */
void * std_tuple_impl_1_constructor_default(
 void *const this_ptr)
{
 return this_ptr;
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EEC2Ev @ 0x13BA4 */
void * std_head_base_0_constructor_default_int(
 void *this_ptr)
{
 *(int **)this_ptr = 0;
 return this_ptr;
}





/* Function: _ZSt12__get_helperILj1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x13C00 */
std_gap0_struct * std_get_helper_1(
 void *__t)
{
 return (std_gap0_struct *)std_tuple_impl_1_M_head(__t);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x13C28 */
int *const * std_get_helper_0_const(
 const void *__t)
{
 return std_tuple_impl_0_M_head_const(__t);
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEEC2Ev @ 0x13C50 */
void * std_tuple_impl_1_array_constructor_default(
 void *const this_ptr)
{
 return this_ptr;
}





/* Function: _ZSt12__get_helperILj1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x13CA4 */
std_gap0_struct * std_get_helper_1(
 void *__t)
{
 return (std_gap0_struct *)std_tuple_impl_1_M_head(__t);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x13CCC */
int *const * std_get_helper_0_const(
 const void *__t)
{
 return std_tuple_impl_0_M_head_const(__t);
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EEC2IRS0_EEOT_ @ 0x13CF4 */
void * std_head_base_0_constructor(
 void *const this_ptr,
 int **__h)
{
 *(int **)this_ptr = *__h;
 return this_ptr;
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EEC2Ev @ 0x13D30 */
void * std_head_base_1_constructor_default(
 void *this_ptr)
{
 return this_ptr;
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERS1_ @ 0x13D54 */
int ** std_head_base_0_M_head(void *__b)
{
 return (int **)__b;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEE7_M_headERS2_ @ 0x13D78 */
void * std_tuple_impl_1_M_head(
 void *__t)
{
 return std_head_base_1_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERKS3_ @ 0x13DA0 */
const int ** std_tuple_impl_0_M_head_const(
 const void *__t)
{
 return (const int **)std_head_base_0_M_head_const(__t);
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EEC2Ev @ 0x13DCC */
void * std_head_base_1_array_constructor_default(
 void *this_ptr)
{
 return this_ptr;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEE7_M_headERS3_ @ 0x13DF0 */
void * std_tuple_impl_1_M_head(
 void *__t)
{
 return std_head_base_1_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ @ 0x13E18 */
const int ** std_tuple_impl_0_M_head_const(
 const void *__t)
{
 return (const int **)std_head_base_0_M_head_const(__t);
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EE7_M_headERS2_ @ 0x13E44 */
std_gap0_struct * std_head_base_1_M_head(void *__b)
{
 return (std_gap0_struct *)__b;
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERKS1_ @ 0x13E68 */
void * std_head_base_0_M_head_const(const void *__b)
{
 return (void *)__b;
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EE7_M_headERS3_ @ 0x13E8C */
std_gap0_struct * std_head_base_1_M_head(void *__b)
{
 return (std_gap0_struct *)__b;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x13EB0 */
void * RTTIDerivedB_destructor(RTTIDerivedB *const this_ptr)
{
 this_ptr->_vptr_RTTIBase = (int (*)(...))&off_14464;
 RTTIBase_destructor(this_ptr);
 return this_ptr;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x13EEC */
void * RTTIDerivedB_destructorDeleting(RTTIDerivedB *const this_ptr)
{
 RTTIDerivedB_destructor(this_ptr);
 operator_delete(this_ptr, 4u);
 return this_ptr;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x13F20 */
void * RTTIDerivedA_destructor(RTTIDerivedA *const this_ptr)
{
 this_ptr->_vptr_RTTIBase = (int (*)(...))&off_14478;
 RTTIBase_destructor(this_ptr);
 return this_ptr;
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x13F5C */
void * RTTIDerivedA_destructorDeleting(RTTIDerivedA *const this_ptr)
{
 RTTIDerivedA_destructor(this_ptr);
 operator_delete(this_ptr, 4u);
 return this_ptr;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x13F90 */
void * DiamondDerived_DiamondDerived_destructor(DiamondDerived *const this_ptr)
{
 this_ptr->_vptr_MiddleA = (int (*)(...))&off_144A4;
 this_ptr->_vptr_MiddleB = (int (*)(...))&off_144D8;
 *((int*)((char*)&this_ptr->dataA + 4)) = (int)&off_144BC;
 MiddleB_MiddleB_destructor((MiddleB *const)((char *)&this_ptr->dataA + 4), (const void **const)&off_144F0);
 MiddleA_MiddleA_destructor(this_ptr, (const void **const)&_vtt_parm);
 VirtualBase_VirtualBase_destructor((VirtualBase *const)&this_ptr->MiddleB);
 return this_ptr;
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x14028 */
void DiamondDerived_DiamondDerived_destructor_thunk8(DiamondDerived *this_ptr)
{
 DiamondDerived_DiamondDerived_destructor((DiamondDerived *)((char *)this_ptr - 8));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x14030 */
void DiamondDerived_DiamondDerived_destructor_virtual_thunk(DiamondDerived *this_ptr)
{
 DiamondDerived_DiamondDerived_destructor((DiamondDerived *)((char *)this_ptr + (int)*((int *)this_ptr->_vptr_MiddleA - 4)));
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x14044 */
void * DiamondDerived_DiamondDerived_destructorDeleting(DiamondDerived *const this_ptr)
{
 DiamondDerived_DiamondDerived_destructor(this_ptr);
 operator_delete(this_ptr, 0x18u);
 return this_ptr;
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x14078 */
void DiamondDerived_DiamondDerived_destructorDeleting_thunk8(DiamondDerived *this_ptr)
{
 DiamondDerived_DiamondDerived_destructorDeleting((DiamondDerived *)((char *)this_ptr - 8));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x14080 */
void DiamondDerived_DiamondDerived_destructorDeleting_virtual_thunk(DiamondDerived *this_ptr)
{
 DiamondDerived_DiamondDerived_destructorDeleting((DiamondDerived *)((char *)this_ptr + (int)*((int *)this_ptr->_vptr_MiddleA - 4)));
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x14094 */
void * MultiDerived_MultiDerived_destructor(MultiDerived *const this_ptr)
{
 this_ptr->_vptr_BaseA = (int (*)(...))&off_14584;
 this_ptr->BaseB._vptr_BaseB = (int (*)(...))&off_1459C;
 BaseB_BaseB_destructor(&this_ptr->BaseB);
 BaseA_BaseA_destructor(this_ptr);
 return this_ptr;
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x140F0 */
void MultiDerived_MultiDerived_destructor_thunk8(MultiDerived *this_ptr)
{
 MultiDerived_MultiDerived_destructor((MultiDerived *)((char *)this_ptr - 8));
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x140F8 */
void * MultiDerived_MultiDerived_destructorDeleting(MultiDerived *const this_ptr)
{
 MultiDerived_MultiDerived_destructor(this_ptr);
 operator_delete(this_ptr, 0x10u);
 return this_ptr;
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x1412C */
void MultiDerived_MultiDerived_destructorDeleting_thunk8(MultiDerived *this_ptr)
{
 MultiDerived_MultiDerived_destructorDeleting((MultiDerived *)((char *)this_ptr - 8));
}


/* Function: _ZN7DerivedD2Ev @ 0x14134 */
void * Derived_Derived_destructor(Derived *const this_ptr)
{
 this_ptr->_vptr_Base = (int (*)(...))&off_145D8;
 Base_Base_destructor(this_ptr);
 return this_ptr;
}


/* Function: _ZN7DerivedD0Ev @ 0x14170 */
void * Derived_Derived_destructorDeleting(Derived *const this_ptr)
{
 Derived_Derived_destructor(this_ptr);
 operator_delete(this_ptr, 8u);
 return this_ptr;
}


/* Function: .term_proc @ 0x141A4 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __aeabi_unwind_cpp_pr1 @ 0x250A8 */

/* FAILED to decompile: __aeabi_unwind_cpp_pr0 @ 0x250AC */

/* FAILED to decompile: __imp___cxa_end_catch @ 0x250B0 */

/* FAILED to decompile: __imp_strncpy @ 0x250B4 */

/* FAILED to decompile: __imp__ZdaPv @ 0x250B8 */

/* FAILED to decompile: __imp___aeabi_d2iz @ 0x250BC */

/* FAILED to decompile: __imp_abort @ 0x250C0 */

/* FAILED to decompile: __imp___cxa_throw @ 0x250C4 */

/* FAILED to decompile: __imp___libc_start_main @ 0x250C8 */

/* FAILED to decompile: __imp___cxa_end_cleanup @ 0x250CC */

/* FAILED to decompile: __imp___gxx_personality_v0 @ 0x250D0 */

/* FAILED to decompile: __imp___aeabi_atexit @ 0x250D4 */

/* FAILED to decompile: __imp___aeabi_dcmpgt @ 0x250D8 */

/* FAILED to decompile: __imp__ZNSt8ios_base4InitD1Ev @ 0x250DC */

/* FAILED to decompile: __imp___dynamic_cast @ 0x250E0 */

/* FAILED to decompile: __imp__ZNSt8ios_base4InitC1Ev @ 0x250E4 */

/* FAILED to decompile: __imp_strlen @ 0x250E8 */

/* FAILED to decompile: __imp__Znwj @ 0x250EC */

/* FAILED to decompile: __imp__ZNKSt9type_infoeqERKS_ @ 0x250F0 */

/* FAILED to decompile: __imp___cxa_begin_catch @ 0x250F4 */

/* FAILED to decompile: __imp_puts @ 0x250F8 */

/* FAILED to decompile: __imp__ZdlPvj @ 0x250FC */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x25100 */

/* FAILED to decompile: __imp___cxa_bad_typeid @ 0x25104 */

/* FAILED to decompile: __imp___cxa_rethrow @ 0x25108 */

/* FAILED to decompile: __imp___cxa_allocate_exception @ 0x2510C */

/* FAILED to decompile: __imp_printf @ 0x25110 */

/* FAILED to decompile: __imp__Znaj @ 0x25114 */

/* FAILED to decompile: __imp___cxa_throw_bad_array_new_length @ 0x25118 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x25120 */

/* Total functions decompiled: 204, failed: 30 */
