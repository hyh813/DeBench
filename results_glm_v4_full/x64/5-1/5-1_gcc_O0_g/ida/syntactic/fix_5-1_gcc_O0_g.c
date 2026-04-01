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

/* Forward declarations for classes */
struct SimpleClass;
struct LifecycleClass;
struct Base;
struct Derived;
struct BaseA;
struct BaseB;
struct MultiDerived;
struct VirtualBase;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct Point;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct std__type_info;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_gcc_O0_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x2000 */
long long (**init_proc())(void)
{
 long long (**result)(void); // rax

 result = &_gmon_start__;
 if ( &_gmon_start__ )
 return (long long (**)(void))_gmon_start__();
 return result;
}


/* Function: sub_2020 @ 0x2020 */
void sub_2020()
{
 JUMPOUT(0);
}


/* Function: sub_2030 @ 0x2030 */
void sub_2030()
{
 sub_2020();
}


/* Function: sub_2040 @ 0x2040 */
void sub_2040()
{
 sub_2020();
}


/* Function: sub_2050 @ 0x2050 */
void sub_2050()
{
 sub_2020();
}


/* Function: sub_2060 @ 0x2060 */
void sub_2060()
{
 sub_2020();
}


/* Function: sub_2070 @ 0x2070 */
void sub_2070()
{
 sub_2020();
}


/* Function: sub_2080 @ 0x2080 */
void sub_2080()
{
 sub_2020();
}


/* Function: sub_2090 @ 0x2090 */
void sub_2090()
{
 sub_2020();
}


/* Function: sub_20A0 @ 0x20A0 */
void sub_20A0()
{
 sub_2020();
}


/* Function: sub_20B0 @ 0x20B0 */
void sub_20B0()
{
 sub_2020();
}


/* Function: sub_20C0 @ 0x20C0 */
void sub_20C0()
{
 sub_2020();
}


/* Function: sub_20D0 @ 0x20D0 */
void sub_20D0()
{
 sub_2020();
}


/* Function: sub_20E0 @ 0x20E0 */
void sub_20E0()
{
 sub_2020();
}


/* Function: sub_20F0 @ 0x20F0 */
void sub_20F0()
{
 sub_2020();
}


/* Function: sub_2100 @ 0x2100 */
void sub_2100()
{
 sub_2020();
}


/* Function: sub_2110 @ 0x2110 */
void sub_2110()
{
 sub_2020();
}


/* Function: sub_2120 @ 0x2120 */
void sub_2120()
{
 sub_2020();
}


/* Function: sub_2130 @ 0x2130 */
void sub_2130()
{
 sub_2020();
}


/* Function: sub_2140 @ 0x2140 */
void sub_2140()
{
 sub_2020();
}


/* Function: sub_2150 @ 0x2150 */
void sub_2150()
{
 sub_2020();
}


/* Function: sub_2160 @ 0x2160 */
void sub_2160()
{
 sub_2020();
}


/* Function: sub_2170 @ 0x2170 */
void sub_2170()
{
 sub_2020();
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x23CA */
int test_cpp_member_func()
{
 int r1; // [rsp+4h] [rbp-3Ch]
 int r2; // [rsp+8h] [rbp-38h]
 SimpleClass obj; // [rsp+10h] [rbp-30h] BYREF
 unsigned long long v4; // [rsp+38h] [rbp-8h]

 v4 = __readfsqword(0x28u);
 SimpleClass::SimpleClass(&obj, 5, "Test");
 SimpleClass::setValue(&obj, 10);
 r1 = SimpleClass::getValue(&obj);
 r2 = SimpleClass::compute(&obj, 3);
 return r2 + r1 + SimpleClass::getClassID();
}


/* Function: _Z20test_cpp_constructorv @ 0x245C */
int test_cpp_constructor()
{
 int result; // [rsp+Ch] [rbp-24h]
 int resulta; // [rsp+Ch] [rbp-24h]
 LifecycleClass obj; // [rsp+10h] [rbp-20h] BYREF
 unsigned long long v4; // [rsp+28h] [rbp-8h]

 v4 = __readfsqword(0x28u);
 LifecycleClass::LifecycleClass(&obj, 5u);
 result = LifecycleClass::getData(&obj, 2u);
 resulta = LifecycleClass::getInstanceCount() + result;
 LifecycleClass::~LifecycleClass(&obj);
 return 1000 * LifecycleClass::getInstanceCount() + resulta;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x24DE */
int call_virtual_func(Base *obj, int x)
{
 return (*obj->_vptr_Base)(obj, (unsigned int)x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x250B */
int test_cpp_virtual_func()
{
 int v0; // ebx
 int r1; // [rsp+8h] [rbp-58h]
 int r2; // [rsp+Ch] [rbp-54h]
 int r3; // [rsp+10h] [rbp-50h]
 Base base; // [rsp+18h] [rbp-48h] BYREF
 Base *pb; // [rsp+20h] [rbp-40h]
 Base *pd; // [rsp+28h] [rbp-38h]
 Derived derived; // [rsp+30h] [rbp-30h] BYREF
 unsigned long long v9; // [rsp+48h] [rbp-18h]

 v9 = __readfsqword(0x28u);
 base._vptr_Base = (int (**)(...))&off_8B50;
 Derived::Derived(&derived, 3);
 r1 = Base::virtual_func(&base, 5);
 r2 = Derived::virtual_func(&derived, 5);
 pb = &base;
 pd = &derived;
 r3 = call_virtual_func(&base, 5);
 v0 = r3 + r2 + r1 + call_virtual_func(pd, 5);
 Derived::~Derived(&derived);
 Base::~Base(&base);
 return v0;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x2616 */
int test_cpp_multiple_inheritance()
{
 int v0; // ebx
 int r1; // [rsp+4h] [rbp-5Ch]
 MultiDerived obj; // [rsp+20h] [rbp-40h] BYREF
 unsigned long long v4; // [rsp+48h] [rbp-18h]

 v4 = __readfsqword(0x28u);
 MultiDerived::MultiDerived(&obj);
 obj.dataA = 100;
 obj.dataB = 200;
 r1 = (*obj._vptr_BaseA)(&obj);
 v0 = (*(long long ( **)(BaseB *))obj._vptr_BaseB)(&obj.BaseB) + r1 + (&obj != (MultiDerived *)&obj.BaseB);
 MultiDerived::~MultiDerived(&obj);
 return v0;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x26F3 */
int test_cpp_diamond_inheritance()
{
 int v0; // ebx
 int r1; // [rsp+0h] [rbp-60h]
 DiamondDerived obj; // [rsp+10h] [rbp-50h] BYREF

 *((unsigned long long *)&obj.dataB + 2) = __readfsqword(0x28u);
 DiamondDerived::DiamondDerived(&obj);
 obj.dataB = 50;
 r1 = (*obj._vptr_MiddleB)(&obj.MiddleB);
 obj.dataB = 100;
 v0 = r1 + (*(long long ( **)(MiddleB *))obj._vptr_MiddleB)(&obj.MiddleB);
 DiamondDerived::~DiamondDerived(&obj);
 return v0;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x27B2 */
int test_cpp_operator_overload()
{
 int v0; // edx
 bool eq; // [rsp+Fh] [rbp-21h]
 Point p1; // [rsp+10h] [rbp-20h] BYREF
 Point p2; // [rsp+18h] [rbp-18h] BYREF
 Point p3; // [rsp+20h] [rbp-10h] BYREF
 unsigned long long v6; // [rsp+28h] [rbp-8h]

 v6 = __readfsqword(0x28u);
 Point::Point(&p1, 1, 2);
 Point::Point(&p2, 3, 4);
 p3 = Point::operator+(&p1, &p2);
 eq = Point::operator==(&p1, &p2);
 Point::operator++(&p3);
 if ( eq )
 v0 = 0;
 else
 v0 = 10;
 return v0 + p3.x + p3.y;
}


/* Function: _Z22test_cpp_template_funcv @ 0x2864 */
int test_cpp_template_func()
{
 int a; // [rsp+4h] [rbp-1Ch] BYREF
 int b; // [rsp+8h] [rbp-18h] BYREFr
 int r1; // [rsp+Ch] [rbp-14h]
 double r2; // [rsp+10h] [rbp-10h]
 unsigned long long v5; // [rsp+18h] [rbp-8h]

 v5 = __readfsqword(0x28u);
 r1 = template_max_int(3, 7);
 r2 = template_max_double(2.5, 1.5);
 a = 10;
 b = 20;
 template_swap_int(&a, &b);
 return a + r1 + (int)r2 + b;
}


/* Function: _Z23test_cpp_template_classv @ 0x2906 */
int test_cpp_template_class()
{
 int r1; // [rsp+0h] [rbp-Ara0h]
 int r2; // [rsp+4h] [rbp-9Ch]
 Container<int> int_container; // [rsp+10h] [rbp-90h] BYREF
 Container<double> double_container; // [rsp+40h] [rbp-60h] BYREF
 unsigned long long v5; // [rsp+98h] [rbp-8h]

 v5 = __readfsqword(0x28u);
 _ZN9ContainerIiEC2Ev(&int_container);
 _ZN9ContainerIiE4pushEi(&int_container, 10);
 _ZN9ContainerIiE4pushEi(&int_container, 20);
 _ZN9ContainerIiE4pushEi(&int_container, 30);
 r1 = _ZNK9ContainerIiE3getEi(&int_container, 0);
 r2 = _ZNK9ContainerIiE7getSizeEv(&int_container);
 _ZN9ContainerIdEC2Ev(&double_container);
 _ZN9ContainerIdE4pushEd(&double_container, 3.14);
 return r2 + r1 + (int)_ZNK9ContainerIdE3getEi(&double_container, 0);
}


/* Function: _ZZ15test_cpp_lambdavENKUliE_cl_clEi @ 0x2A12 */
int test_cpp_lambda_lambda_int__operator__(
 const void *__closure,
 int x)
{
 *__closure->__capture_by_ref += 5;
 return x * __closure->__capture_by_value + *__closure->__capture_by_ref;
}


/* Function: _Z15test_cpp_lambdav @ 0x2A4E */
// local variable allocation has failed, the output may be wrong!
int test_cpp_lambda()
{
 int capture_by_ref; // [rsp+0h] [rbp-30h] BYREF
 int capture_by_value; // [rsp+4h] [rbp-2Ch]
 int lambda2; // [rsp+10h] [rbp-20h] OVERLAPPED BYREF
 int *p_capture_by_ref; // [rsp+18h] [rbp-18h]
 unsigned long long v5; // [rsp+28h] [rbp-8h]

 v5 = __readfsqword(0x28u);
 capture_by_value = 10;
 capture_by_ref = 20;
 lambda2 = 10;
 p_capture_by_ref = &capture_by_ref;
 return test_cpp_lambda_lambda_int__operator()(
 (const struct {int __capture_by_value;int *__capture_by_ref;} *const)&lambda2,
 3)
 + 30;
}


/* Function: _Z18test_cpp_exceptionv @ 0x2ABE */
int test_cpp_exception()
{
 unsigned int *exception; // rax

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&`typeinfo for'int, 0);
}


/* Function: _ZZ18test_cpp_smart_ptrvENKUlPiE_clES_ @ 0x2BE4 */
void test_cpp_smart_ptr_lambda_int_ptr__operator__(
 const struct {unsigned char gap0;} *const __closure,
 int *p)
{
 *p = -1;
 if ( p )
 operator delete(p, 4u);
}


/* Typedefs for complex template types */
typedef struct std__unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_ std__unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_;
typedef int* std__uniq_ptr_impl_pointer_int_;
typedef struct {unsigned char gap0;} test_cpp_smart_ptr_lambda_const_t;
typedef int std__add_lvalue_reference_int_t;

/* Forward declarations for template structs */
struct std__remove_reference_int_ptr__type;
struct std__remove_reference_std__unique_ptr_int___type;
struct std__add_lvalue_reference_helper_int_true_;
struct std__Head_base_0_int_ptr_false_;
struct std__Head_base_1_int_true_;
struct std__Tuple_impl_0_int_std__default_delete_int_;
struct std__tuple_int_ptr_std__default_delete_int_;
struct std__uniq_ptr_impl_int_std__default_delete_int_;
struct std__uniq_ptr_data_int_std__default_delete_int_;
struct std____unique_ptr_int_;
struct std__unique_ptr_int_;
struct std__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr_;
struct std__unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_;
struct std__unique_ptr_int_array_;

/* Additional type definitions for template usage */
typedef void* std__tuple_element_t;
typedef void* std__tuple_element_t_0;
typedef void* std__tuple_element_t_1;
typedef struct { void *_M_head_impl; } std__Head_base_0_int_ptr_false_;
typedef struct { int _M_head_impl; } std__Head_base_1_int_true_;
typedef struct std__Head_base_0_int_ptr_false_ std__remove_reference_int_ptr__type;
typedef struct std__unique_ptr_int_ std__remove_reference_std__unique_ptr_int___type;
typedef struct { void *gap0; } std__add_lvalue_reference_helper_int_true_;

/* Tuple and unique ptr implementation structures */
typedef struct {
    std__Head_base_0_int_ptr_false_ _M_head_impl;
} std__Tuple_impl_0_int_std__default_delete_int_;

typedef struct {
    std__Tuple_impl_0_int_std__default_delete_int_ _M_impl;
} std__tuple_int_ptr_std__default_delete_int_;

typedef struct {
    std__tuple_int_ptr_std__default_delete_int_ _M_t;
} std__uniq_ptr_impl_int_std__default_delete_int_;

typedef struct {
    std__uniq_ptr_impl_int_std__default_delete_int_ _M_t;
} std__uniq_ptr_data_int_std__default_delete_int_;

typedef struct {
    std__uniq_ptr_data_int_std__default_delete_int_ _M_t;
} std____unique_ptr_int_;

typedef struct {
    std__uniq_ptr_data_int_std__default_delete_int_ _M_t;
} std__unique_ptr_int_;

/* Array unique_ptr types */
typedef struct {
    std__tuple_int_ptr_std__default_delete_int_ _M_t;
} std__uniq_ptr_impl_int_std__default_delete_int_array_;

typedef struct {
    std__uniq_ptr_impl_int_std__default_delete_int_array_ _M_t;
} std__unique_ptr_int_array_;

/* Function: _Z18test_cpp_smart_ptrv @ 0x2C17 */
int test_cpp_smart_ptr()
{
 int *v0; // rax
 std____unique_ptr_int_ *v1; // rax
 int *v2; // rdx
 int *v3; // rax
 int v4; // ebx
 struct {unsigned char gap0;} deleter; // [rsp+Bh] [rbp-45h] BYREF
 int r1; // [rsp+Ch] [rbp-44h]
 int r2; // [rsp+10h] [rbp-40h]
 int r3; // [rsp+14h] [rbp-3Ch]
 std__unique_ptr_int_ ptr2; // [rsp+18h] [rbp-38h] BYREF
 std__unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_ ptr3; // [rsp+28h] [rbp-28h] BYREF
 unsigned long long v12; // [rsp+38h] [rbp-18h]

 v12 = __readfsqword(0x28u);
 v0 = (int *)operator new(4u);
 *v0 = 100;
 std__unique_ptr_int_::unique_ptr<std__default_delete_int_,void>(&ptr2, v0);
 *std__unique_ptr_int_::operator*(&ptr2) = 200;
 v1 = std__move<std__unique_ptr_int_ &>(&ptr2);
 std__unique_ptr_int_::unique_ptr((std__unique_ptr_int_ *const)&ptr2._M_t._M_t.std::_Head_base<0,int*,false>, v1);
 r1 = *std__unique_ptr_int_::operator*((const std__unique_ptr_int_ *const)&ptr2._M_t._M_t.std::_Head_base<0,int*,false>);
 v2 = (int *)operator new[](0x14u);
 *v2 = 1;
 v2[1] = 2;
 v2[2] = 3;
 v2[3] = 4;
 v2[4] = 5;
 std__unique_ptr_int_array_::unique_ptr<int *,std__default_delete_int_array_,void,bool>(
 (std__unique_ptr_int_array_ *const)&ptr3,
 v2);
 r2 = *std__unique_ptr_int_array_::operator[]((const std__unique_ptr_int_array_ *const)&ptr3, 2u);
 v3 = (int *)operator new(4u);
 *v3 = 500;
 std__unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr___unique_ptr_lambda_void(
 (std__unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_ *const)&ptr3._M_t._M_t.std::_Head_base<0,int*,false>,
 v3,
 (const std__unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_::deleter_type *)&deleter);
 r3 = *std__unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr__operator__((const std__unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_ *const)&ptr3._M_t._M_t.std__Head_base_0_int_ptr__false_);
 v4 = r2 + r1 + r3;
 std__unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr___unique_ptr((std__unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_ *)&ptr3._M_t._M_t.std__Head_base_0_int_ptr__false_);
 std__unique_ptr_int_::~unique_ptr((std__unique_ptr_int_ *const)&ptr2._M_t._M_t.std::_Head_base<0,int*,false>);
 std__unique_ptr_int_::~unique_ptr(&ptr2);
 return v4;
}


/* Function: _Z13test_cpp_rttiv @ 0x2DC5 */
int test_cpp_rtti()
{
 RTTIDerivedA *v0; // rbx
 RTTIDerivedB *v1; // rbx
 const RTTIDerivedA *v2; // rax
 const RTTIDerivedB *v3; // rax
 const char *v4; // rax
 int result; // [rsp+Ch] [rbp-34h]
 int resulta; // [rsp+Ch] [rbp-34h]
 RTTIBase *obj1; // [rsp+10h] [rbp-30h]

 v0 = (RTTIDerivedA *)operator new(8u);
 v0->_vptr_RTTIBase = 0;
 RTTIDerivedA::RTTIDerivedA(v0);
 obj1 = v0;
 v1 = (RTTIDerivedB *)operator new(8u);
 v1->_vptr_RTTIBase = 0;
 RTTIDerivedB::RTTIDerivedB(v1);
 result = 0;
 if ( !obj1 )
 __cxa_bad_typeid();
 if ( std::type_info::operator==(
 *((const std::type_info *const *)obj1->_vptr_RTTIBase - 1),
 (const std::type_info *)&`typeinfo for'RTTIDerivedA) )
 {
 result = 10;
 }
 if ( !v1 )
 __cxa_bad_typeid();
 if ( std::type_info::operator==(
 *((const std::type_info *const *)v1->_vptr_RTTIBase - 1),
 (const std::type_info *)&`typeinfo for'RTTIDerivedB) )
 {
 result += 20;
 }
 v2 = (const RTTIDerivedA *)__dynamic_cast(
 obj1,
 (const struct __class_type_info *)&`typeinfo for'RTTIBase,
 (const struct __class_type_info *)&`typeinfo for'RTTIDerivedA,
 0);
 if ( v2 )
 result += RTTIDerivedA::derivedA_data(v2);
 v3 = (const RTTIDerivedB *)__dynamic_cast(
 v1,
 (const struct __class_type_info *)&`typeinfo for'RTTIBase,
 (const struct __class_type_info *)&`typeinfo for'RTTIDerivedB,
 0);
 if ( v3 )
 result += RTTIDerivedB::derivedB_data(v3);
 v4 = std::type_info::name(*((const std::type_info *const *)obj1->_vptr_RTTIBase - 1));
 resulta = strlen(v4) + result;
 (*((void ( **)(RTTIBase *))obj1->_vptr_RTTIBase + 1))(obj1);
 (*((void ( **)(RTTIDerivedB *))v1->_vptr_RTTIBase + 1))(v1);
 return resulta;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x2F6F */
void test_cpp_oo_features()
{
 unsigned int v0; // eax
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax
 unsigned int v4; // eax
 unsigned int v5; // eax
 unsigned int v6; // eax
 unsigned int v7; // eax
 unsigned int v8; // eax

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


/* Function: main @ 0x30CD */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: std::__uniq_ptr_data_int_test_cpp_smart_ptr()::_lambda(int_)__true_false_::__uniq_ptr_data_const_test_cpp_smart_ptr()::_lambda(int_)_&_ @ 0x30E2 */
void std__uniq_ptr_data_int_test_cpp_smart_ptr____lambda_int____true_false_____uniq_ptr_data_const_test_cpp_smart_ptr____lambda_int_____(
 void *const __this,
 void *a2,
 const struct {unsigned char gap0;} *a3)
{
 std__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr_____uniq_ptr_data_const_ref_(
 this,
 a2,
 a3);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EC2IS1_vEES0_RKS1_ @ 0x3110 */
void std__unique_ptr_int_test_cpp_smart_ptr_lambda_____unique_ptr(
 void *const __this,
 void *__p,
 const void *__d)
{
 std::__uniq_ptr_data_int_test_cpp_smart_ptr__::_lambda_int____true_false_::__uniq_ptr_data_const_test_cpp_smart_ptr__::_lambda_int_____(
 &((std__unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_*)__this)->_M_t,
 __p,
 __d);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_ED2Ev @ 0x313E */
void std__unique_ptr_int_test_cpp_smart_ptr_lambda_____unique_ptr(
 void *const __this)
{
 std__unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_::deleter_type *deleter; // rbx
 int **v2; // rax
 std::__uniq_ptr_impl<int,test_cpp_smart_ptr_lambda_int_ptr_ >::pointer *__ptr; // [rsp+18h] [rbp-18h]

 __ptr = std::__uniq_ptr_impl<int,test_cpp_smart_ptr_lambda_int_ptr_>::_M_ptr(&((std__unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_*)__this)->_M_t);
 if ( *__ptr )
 {
 deleter = std::unique_ptr<int,test_cpp_smart_ptr_lambda_int_ptr_>::get_deleter(__this);
 v2 = std__move<int *&>(__ptr);
 test_cpp_smart_ptr_lambda_int_ptr_::operator()(deleter, *v2);
 }
 *__ptr = 0;
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EdeEv @ 0x31A2 */
int * std__unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr___operator_star(
 const void *const __this)
{
 return (int *)std__unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr__get(__this);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_EC2IRKS1_EES0_OT_ @ 0x31C4 */
void std__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr_____uniq_ptr_impl_const_ref_(
 void *const __this,
 int *__p,
 void *__d)
{
 test_cpp_smart_ptr_lambda_const_t *v3; // rax
 int *__pa; // [rsp+10h] [rbp-20h] BYREF
 void *thisa; // [rsp+18h] [rbp-18h]

 thisa = this;
 __pa = __p;
 v3 = (test_cpp_smart_ptr_lambda_const_t *)__d;
 std__tuple_int_ptr_test_cpp_smart_ptr_lambda___tuple_int_ptr_ref_const_ref_true(
 this,
 &__pa,
 v3);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv @ 0x3202 */
void * std____uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr_____M_ptr(
 void *const __this)
{
 return std__get_0_int_ptr_test_cpp_smart_ptr_lambda_(((std__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr_*)__this)->_M_t);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E11get_deleterEv @ 0x321C */
void * std__unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr___get_deleter(
 void *const __this)
{
 return std__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr___M_deleter(((std__unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_*)__this)->_M_t);
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E3getEv @ 0x3236 */
int * std__unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr__get(
 const void *const __this)
{
 return (int *)std__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr___M_ptr(((const std__unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_*)__this)->_M_t);
}


/* Function: _ZSt7forwardIRKZ18test_cpp_smart_ptrvEUlPiE_EOT_RNSt16remove_referenceIS4_E4typeE @ 0x3250 */
void * std__forward_test_cpp_smart_ptr_lambda_const_ref(void *__t)
{
 return __t;
}


/* Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_RKS1_Lb1EEEOT_OT0_ @ 0x325E */
void std__tuple_int_ptr_test_cpp_smart_ptr_lambda___tuple_int_ptr_ref_const_ref_true(
 void *const __this,
 int **__a1,
 const void *__a2)
{
 std::_Tuple_impl_0_int_ptr_test_cpp_smart_ptr_lambda____Tuple_impl_int_ptr_ref_const_void(this, __a1, __a2);
}


/* Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x32AC */
void * std__get_0_int_ptr_test_cpp_smart_ptr_lambda_(void *__t)
{
 return std__get_helper_0_int_ptr_test_cpp_smart_ptr_lambda_(__t);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E10_M_deleterEv @ 0x32C6 */
void * std__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr___M_deleter(void *const this)
{
 return std__get_1_int_ptr_test_cpp_smart_ptr_lambda_(this->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv @ 0x32E0 */
void * std____uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr_____M_ptr_const(const void *const __this)
{
 return std__get_0_int_ptr_test_cpp_smart_ptr_lambda_(__this->_M_t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_JRKS1_EvEEOT_DpOT0_ @ 0x32FE */
void std__Tuple_impl_0_int_ptr_test_cpp_smart_ptr_lambda_int_ptr____Tuple_impl_int_ptr_ref_const_void(
 void *const __this,
 int **__head,
 const void *a3)
{
 const void *v3; // rdx
 int **v4; // rax

 v3 = std__forward_test_cpp_smart_ptr_lambda_const_ref((void *)a3);
 std__Tuple_impl_1_test_cpp_smart_ptr_lambda_int_ptr____Tuple_impl(__this, v3);
 v4 = std__forward_int_ptr_ref(__head);
 std__Head_base_0_int_ptr_false___Head_base_int_ptr_ref((void *)__this, v4);
}


/* Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x3353 */
int ** std__get_helper_0ul_int_ptr_test_cpp_smart_ptr_lambda_(
 void *__t)
{
 return std__Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr_lambda___M_head(__t);
}


/* Function: _ZSt3getILm1EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x336D */
void * std__get_1_int_ptr_test_cpp_smart_ptr_lambda_(
 void *__t)
{
 return std__get_helper_1_test_cpp_smart_ptr___lambda_int____(__t);
}


/* Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ @ 0x3387 */
const void * std__get_0ul_int_ptr_test_cpp_smart_ptr_lambda_(
 const void *__t)
{
 return std__get_helper_0ul_int_ptr_test_cpp_smart_ptr_lambda_const_(__t);
}


/* Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvEUlPiE_EEC2ERKS1_ @ 0x33A2 */
void std__Tuple_impl_1ul_test_cpp_smart_ptr_lambda_int_ptr____Tuple_impl(
 void *const __this,
 const void *__head)
{
 std__Head_base_1ul_test_cpp_smart_ptr_lambda_int_ptr__true___Head_base(__this, __head);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERS2_ @ 0x33C8 */
int ** std__Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr_lambda___M_head(
 void *__t)
{
 return std__Head_base_0ul_int_ptr_false___M_head(__t);
}


/* Function: std::__get_helper_1_test_cpp_smart_ptr()::_lambda(int_)___ @ 0x33E2 */
struct {unsigned char gap0;} * std::__get_helper_1_test_cpp_smart_ptr__::_lambda_int_____(
 std::_Tuple_impl<1,test_cpp_smart_ptr_lambda_int_ptr_ > *__t)
{
 return std::_Tuple_impl<1ul,test_cpp_smart_ptr_lambda_int_ptr_>::_M_head(__t);
}


/* Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x33FC */
int *const * std::__get_helper<0ul,int *,test_cpp_smart_ptr_lambda_int_ptr_>(
 const std::_Tuple_impl<0,int*,test_cpp_smart_ptr_lambda_int_ptr_ > *__t)
{
 return std::_Tuple_impl<0ul,int *,test_cpp_smart_ptr_lambda_int_ptr_>::_M_head(__t);
}


/* Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EEC2ERKS1_ @ 0x3416 */
void std__Head_base_1ul_test_cpp_smart_ptr_lambda_int_ptr__true___Head_base(
 void *__this,
 const void *__h)
{
 ;
}


/* Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvEUlPiE_EE7_M_headERS2_ @ 0x3425 */
struct {unsigned char gap0;} * std::_Tuple_impl<1ul,test_cpp_smart_ptr_lambda_int_ptr_>::_M_head(
 std::_Tuple_impl<1,test_cpp_smart_ptr_lambda_int_ptr_ > *__t)
{
 return std::_Head_base<1ul,test_cpp_smart_ptr_lambda_int_ptr_,true>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERKS2_ @ 0x343F */
const void * std__Tuple_impl_0ul_int_int_ptr_test_cpp_smart_ptr_lambda_int_ptr_____M_head(
 const void *__t)
{
 return std__Head_base_0ul_int_ptr_false___M_head(__t);
}


/* Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EE7_M_headERS2_ @ 0x3459 */
void * std__Head_base_1ul_test_cpp_smart_ptr_lambda_int_ptr__true___M_head(
 void *__b)
{
 return __b;
}


/* Function: _Z41__static_initialization_and_destruction_0ii @ 0x3467 */
void __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
 if ( __initialize_p == 1 && __priority == 0xFFFF )
 {
 std::ios_base::Init::Init(&std::__ioinit);
 __cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
 }
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x34BD */
void GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 __static_initialization_and_destruction_0(1, 0xFFFF);
}


/* Function: _ZNKSt9type_info4nameEv @ 0x34D6 */
const char * std__type_info__name(const std__type_info *const __this)
{
 if ( **((unsigned char **)__this + 1) == 42 )
 return (const char *)(*((unsigned long long *)__this + 1) + 1LL);
 else
 return (const char *)*((unsigned long long *)__this + 1);
}


/* Function: _ZNKSt9type_infoeqERKS_ @ 0x350A */
bool std__type_info__operator_eq(const std__type_info *const __this, const std__type_info *__arg)
{
 return *((unsigned long long *)__this + 1) == *((unsigned long long *)__arg + 1)
 || **((unsigned char **)__this + 1) != 42 && !strcmp(*((const char **)__this + 1), *((const char **)__arg + 1));
}


/* Function: _ZN11SimpleClassC2EiPKc @ 0x3570 */
void SimpleClass_SimpleClass(SimpleClass *const __this, int v, const char *n)
{
 __this->value = v;
 strncpy(__this->name, n, 0x1Fu);
 __this->name[31] = 0;
}


/* Function: _ZNK11SimpleClass8getValueEv @ 0x35B8 */
int SimpleClass_getValue(const SimpleClass *const __this)
{
 return __this->value;
}


/* Function: _ZN11SimpleClass8setValueEi @ 0x35CC */
void SimpleClass_setValue(SimpleClass *const __this, int v)
{
 __this->value = v;
}


/* Function: _ZNK11SimpleClass7computeEi @ 0x35E8 */
int SimpleClass_compute(const SimpleClass *const __this, int x)
{
 int v2; // ebx



 v2 = x * __this->value;
 return v2 + strlen(__this->name);
}


/* Function: _ZN11SimpleClass10getClassIDEv @ 0x3620 */
int SimpleClass_getClassID()
{
 return 4660;
}


/* Function: _ZN14LifecycleClassC2Em @ 0x3630 */
void LifecycleClass_LifecycleClass(LifecycleClass *const __this, size_t s)
{
 size_t i; // [rsp+18h] [rbp-8h]

 __this->size = s;
 if ( s > 0x1FFFFFFFFFFFFFFELL )
 __cxa_throw_bad_array_new_length();
 __this->data = (int *)operator new[](4 * s);
 for ( i = 0; i < s; ++i )
 __this->data[i] = 10 * i;
 ++LifecycleClass_instance_count;
}


/* Function: _ZN14LifecycleClassD2Ev @ 0x36D0 */
void LifecycleClass_destructor(LifecycleClass *const __this)
{
 if ( __this->data )
 operator delete[](__this->data);
 --LifecycleClass_instance_count;
}


/* Function: _ZNK14LifecycleClass7getDataEm @ 0x370E */
int LifecycleClass_getData(const LifecycleClass *const __this, size_t idx)
{
 if ( idx >= __this->size )
 return -1;
 else
 return __this->data[idx];
}


/* Function: _ZN14LifecycleClass16getInstanceCountEv @ 0x3749 */
int LifecycleClass_getInstanceCount()
{
 return LifecycleClass_instance_count;
}


/* Function: _ZN4Base12virtual_funcEi @ 0x375A */
int Base::virtual_func(Base *const __this, int x)
{
 return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x3772 */
const char * Base::getName(const Base *const __this)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x3788 */
void Base::~Base(Base *const __this)
{
 __this->_vptr_Base = (int (**)(...))&off_8B50;
}


/* Function: _ZN4BaseD0Ev @ 0x37A6 */
void Base::~Base(Base *const __this)
{
 Base::~Base(__this);
 operator delete(__this, 8u);
}


/* Function: _ZN4BaseC2Ev @ 0x37D6 */
void Base::Base(Base *const __this)
{
 __this->vptr_Base = (int (**)(...))&off_8B50;
}


/* Function: _ZN7DerivedC2Ei @ 0x37F4 */
void Derived::Derived(Derived *const __this, int m)
{
 Base::Base(this);
 this->_vptr_Base = (int (**)(...))&off_8B20;
 this->multiplier = m;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x382E */
int Derived::virtual_func(Derived *const __this, int x)
{
 return x * this->multiplier;
}


/* Function: _ZNK7Derived7getNameEv @ 0x384A */
const char * Derived::getName(const Derived *const __this)
{
 return "Derived";
}


/* Function: _ZN5BaseA5funcAEv @ 0x3860 */
int BaseA::funcA(BaseA *const __this)
{
 return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x3874 */
void BaseA::~BaseA(BaseA *const __this)
{
 __this->_vptr_BaseA = (int (**)(...))&off_8AF8;
}


/* Function: _ZN5BaseAD0Ev @ 0x3892 */
void BaseA::~BaseA(BaseA *const __this)
{
 BaseA::~BaseA(__this);
 operator delete(__this, 0x10u);
}


/* Function: _ZN5BaseB5funcBEv @ 0x38C2 */
int BaseB::funcB(BaseB *const __this)
{
 return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x38D6 */
void BaseB::~BaseB(BaseB *const __this)
{
 __this->_vptr_BaseB = (int (**)(...))&off_8AD0;
}


/* Function: _ZN5BaseBD0Ev @ 0x38F4 */
void BaseB::~BaseB(BaseB *const __this)
{
 BaseB::~BaseB(__this);
 operator delete(__this, 0x10u);
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x3924 */
int MultiDerived::funcA(MultiDerived *const __this)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x3938 */
int MultiDerived::funcB(MultiDerived *const __this)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x394B */
int thunk_to_MultiDerived_funcB(MultiDerived *this)
{
 return MultiDerived::funcB((MultiDerived *)((char *)this - 16));
}


/* Function: _ZN5BaseAC2Ev @ 0x3956 */
void BaseA::BaseA(BaseA *const __this)
{
 __this->_vptr_BaseA = (int (**)(...))&off_8AF8;
}


/* Function: _ZN5BaseBC2Ev @ 0x3974 */
void BaseB::BaseB(BaseB *const __this)
{
 __this->_vptr_BaseB = (int (**)(...))&off_8AD0;
}


/* Function: _ZN12MultiDerivedC2Ev @ 0x3992 */
void MultiDerived::MultiDerived(MultiDerived *const __this)
{
 BaseA::BaseA(this);
 BaseB::BaseB(&this->BaseB);
 this->_vptr_BaseA = (int (**)(...))&off_8A78;
 this->_vptr_BaseB = (int (**)(...))&off_8AA8;
}


/* Function: _ZN11VirtualBase4funcEv @ 0x39DE */
int VirtualBase::func(VirtualBase *const __this)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x39F2 */
void VirtualBase::~VirtualBase(VirtualBase *const __this)
{
 __this->_vptr_VirtualBase = (int (**)(...))&off_8A50;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x3A10 */
void VirtualBase::~VirtualBase(VirtualBase *const __this)
{
 VirtualBase::~VirtualBase(__this);
 operator delete(__this, 0x10u);
}


/* Function: _ZN7MiddleA4funcEv @ 0x3A40 */
int MiddleA::func(MiddleA *const __this)
{
 return *(int *)((char *)&__this->dataA + *((unsigned long long *)__this->_vptr_MiddleA - 3)) + 150;
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x3A6E */
int virtual_thunk_to_MiddleA_func(MiddleA *this)
{
 return MiddleA::func((MiddleA *)((char *)this + *((unsigned long long *)this->_vptr_MiddleA - 3)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x3A7C */
int MiddleB::func(MiddleB *const __this)
{
 return *(int *)((char *)&__this->dataB + *((unsigned long long *)__this->_vptr_MiddleB - 3)) + 200;
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x3AAA */
int virtual_thunk_to_MiddleB_func(MiddleB *this)
{
 return MiddleB::func((MiddleB *)((char *)this + *((unsigned long long *)this->_vptr_MiddleB - 3)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x3AB8 */
int DiamondDerived::func(DiamondDerived *const __this)
{
 return *(int *)((char *)&__this->dataA + *((unsigned long long *)__this->_vptr_MiddleA - 3)) + 250;
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x3AE6 */
int virtual_thunk_to_DiamondDerived_func(DiamondDerived *this)
{
 return DiamondDerived::func((DiamondDerived *)((char *)this + *((unsigned long long *)this->_vptr_MiddleA - 3)));
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x3AF3 */
int nonvirtual_thunk_to_DiamondDerived_func(DiamondDerived *this)
{
 return DiamondDerived::func((DiamondDerived *)((char *)this - 16));
}


/* Function: _ZN11VirtualBaseC2Ev @ 0x3AFE */
void VirtualBase::VirtualBase(VirtualBase *const __this)
{
 __this->_vptr_VirtualBase = (int (**)(...))&off_8A50;
}


/* Function: _ZN7MiddleAC2Ev @ 0x3B1C */
void MiddleA::MiddleA(MiddleA *const __this, const void **const __vtt_parm)
{
 __this->_vptr_MiddleA = (int (**)(...))*__vtt_parm;
 *(int (***)(...))((char *)&__this->_vptr_MiddleA + *((unsigned long long *)__this->_vptr_MiddleA - 3)) = (int (**)(...))__vtt_parm[1];
}


/* Function: _ZN7MiddleAD2Ev @ 0x3B60 */
void MiddleA::~MiddleA(MiddleA *const __this, const void **const __vtt_parm)
{
 __this->_vptr_MiddleA = (int (**)(...))*__vtt_parm;
 *(int (***)(...))((char *)&__this->_vptr_MiddleA + *((unsigned long long *)__this->_vptr_MiddleA - 3)) = (int (**)(...))__vtt_parm[1];
}


/* Function: _ZN7MiddleBC2Ev @ 0x3BA4 */
void MiddleB::MiddleB(MiddleB *const __this, const void **const __vtt_parm)
{
 __this->_vptr_MiddleB = (int (**)(...))*__vtt_parm;
 *(int (***)(...))((char *)&__this->_vptr_MiddleB + *((unsigned long long *)__this->_vptr_MiddleB - 3)) = (int (**)(...))__vtt_parm[1];
}


/* Function: _ZN7MiddleBD2Ev @ 0x3BE8 */
void MiddleB::~MiddleB(MiddleB *const __this, const void **const __vtt_parm)
{
 __this->_vptr_MiddleB = (int (**)(...))*__vtt_parm;
 *(int (***)(...))((char *)&__this->_vptr_MiddleB + *((unsigned long long *)__this->_vptr_MiddleB - 3)) = (int (**)(...))__vtt_parm[1];
}


/* Function: _ZN14DiamondDerivedC1Ev @ 0x3C2C */
void DiamondDerived::DiamondDerived(DiamondDerived *const __this)
{
 VirtualBase::VirtualBase((VirtualBase *const)&this->MiddleB);
 MiddleA::MiddleA(this, (const void **const)&_vtt_parm);
 MiddleB::MiddleB((MiddleB *const)(&this->dataA + 2), (const void **const)&off_8950);
 this->_vptr_MiddleA = (int (**)(...))&off_88B8;
 this->_vptr_MiddleB = (int (**)(...))&off_8920;
 *((unsigned long long *)&this->dataA + 1) = &off_88E8;
}


/* Function: _ZN5PointC2Eii @ 0x3CAE */
void Point::Point(Point *const __this, int _x, int _y)
{
 __this->x = _x;
 __this->y = _y;
}


/* Function: _ZNK5PointplERKS_ @ 0x3CD6 */
Point Point::operator+(const Point *const __this, const Point *other)
{
 Point v3; // [rsp+10h] [rbp-10h] BYREF
 unsigned long long v4; // [rsp+18h] [rbp-8h]

 v4 = __readfsqword(0x28u);
 Point::Point(&v3, other->x + this->x, other->y + this->y);
 return v3;
}


/* Function: _ZNK5PointeqERKS_ @ 0x3D40 */
bool Point::operator==(const Point *const __this, const Point *other)
{
 return this->x == other->x && this->y == other->y;
}


/* Function: _ZN5PointppEv @ 0x3D80 */
Point * Point::operator++(Point *const __this)
{
 ++__this->x;
 ++__this->y;
 return __this;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x3DB2 */
int template_max_int(int a, int b)
{
 if ( a <= b )
 return b;
 else
 return a;
}


/*/* Function: _Z12template_maxIdET_S0_S0_ @ 0x3DD2 */
double template_max_double(double a, double b)
{
 if ( a <= b )
 return b;
 return a;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x3E08 */
void template_swap_int(int *a, int *b)
{
 int temp; // [rsp+1Ch] [rbp-4h]

 temp = *a;
 *a = *b;
 *b = temp;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x3E3A */
void _ZN9ContainerIiEC2Ev(void *const __this)
{
 ((struct {int size; int data[10];} *)__this)->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x3E54 */
void _ZN9ContainerIiE4pushEi(void *const __this, int value)
{
 int size;
 struct Container_int { int size; int data[10]; } *obj = (struct Container_int *)__this;

 if ( obj->size <= 9 )
 {
 size = obj->size;
 obj->size = size + 1;
 obj->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x3E90 */
int _ZNK9ContainerIiE3getEi(const void *const __this, int idx)
{
 const struct Container_int { int size; int data[10]; } *obj = (const struct Container_int *)__this;
 if ( idx < 0 || idx >= obj->size )
 return 0;
 else
 return obj->data[idx];
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x3EC8 */
int _ZNK9ContainerIiE7getSizeEv(const void *const __this)
{
 return ((const struct {int size; int data[10];} *)__this)->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x3EDE */
void _ZN9ContainerIdEC2Ev(void *const __this)
{
 ((struct {int size; double data[10];} *)__this)->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x3EF8 */
void _ZN9ContainerIdE4pushEd(void *const __this, double value)
{
 int size;
 struct Container_double { int size; double data[10]; } *obj = (struct Container_double *)__this;

 if ( obj->size <= 9 )
 {
 size = obj->size;
 obj->size = size + 1;
 obj->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x3F3A */
double _ZNK9ContainerIdE3getEi(const void *const __this, int idx)
{
 const struct Container_double { int size; double data[10]; } *obj = (const struct Container_double *)__this;
 if ( idx < 0 || idx >= obj->size )
 return 0.0;
 else
 return obj->data[idx];
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x3F7C */
int _ZNK9ContainerIdE7getSizeEv(const void *const __this)
{
 return ((const struct {int size; double data[10];} *)__this)->size;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ @ 0x3F92 */
void std::__uniq_ptr_data<int,std__default_delete_int_,true,true>::__uniq_ptr_data(
 std::__uniq_ptr_data<int,std__default_delete_int_,true,true> *const __this,
 std::__uniq_ptr_data<int,std__default_delete_int_,true,true> *a2)
{
 std::__uniq_ptr_impl<int,std__default_delete_int_>::__uniq_ptr_impl(this, a2);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_ @ 0x3FBC */
void std__unique_ptr_int_::unique_ptr(std__unique_ptr_int_ *const __this, std__unique_ptr_int_ *a2)
{
 std__uniq_ptr_data_int_std__default_delete_int____true_true___uniq_ptr_data(&__this->_M_t, &a2->_M_t);
}


/* Function: _ZNK8RTTIBase7getTypeEv @ 0x3FE6 */
int RTTIBase::getType(const RTTIBase *const __this)
{
 return 0;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x3FFA */
int RTTIDerivedA::getType(const RTTIDerivedA *const this)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedA13derivedA_dataEv @ 0x400E */
int RTTIDerivedA::derivedA_data(const RTTIDerivedA *const this)
{
 return 100;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x4022 */
int RTTIDerivedB::getType(const RTTIDerivedB *const this)
{
 return 2;
}


/* Function: _ZNK12RTTIDerivedB13derivedB_dataEv @ 0x4036 */
int RTTIDerivedB::derivedB_data(const RTTIDerivedB *const this)
{
 return 200;
}


/* Function: _ZN8RTTIBaseC2Ev @ 0x404A */
void RTTIBase::RTTIBase(RTTIBase *const __this)
{
 __this->_vptr_RTTIBase = (int (**)(...))off_8888;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x4068 */
void RTTIBase::~RTTIBase(RTTIBase *const __this)
{
 __this->_vptr_RTTIBase = (int (**)(...))off_8888;
}


/* Function: _ZN8RTTIBaseD0Ev @ 0x4086 */
void RTTIBase::~RTTIBase(RTTIBase *const __this)
{
 RTTIBase::~RTTIBase(this);
 operator delete(this, 8u);
}


/* Function: _ZN12RTTIDerivedAC2Ev @ 0x40B6 */
void RTTIDerivedA::RTTIDerivedA(RTTIDerivedA *const this)
{
 RTTIBase::RTTIBase(this);
 this->_vptr_RTTIBase = (int (**)(...))off_8860;
}


/* Function: _ZN12RTTIDerivedBC2Ev @ 0x40E4 */
void RTTIDerivedB::RTTIDerivedB(RTTIDerivedB *const this)
{
 RTTIBase::RTTIBase(this);
 this->_vptr_RTTIBase = (int (**)(...))off_8838;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi @ 0x4112 */
void ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(
 void *const __this,
 void *a2)
{
 std____uniq_ptr_impl_int_std__default_delete_int____uniq_ptr_impl(this, a2);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi @ 0x413C */
void std__unique_ptr_int___unique_ptr_int__default_delete_void(
 std__unique_ptr_int_ *const __this,
 void *__p)
{
 ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(&this->_M_t, __p);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x4166 */
void std__unique_ptr_int_::~unique_ptr(std__unique_ptr_int_ *this_ptr)
{
 std__unique_ptr_int___deleter_type *deleter; // rbx
 int **v2; // rax
 void *__ptr; // [rsp+18h] [rbp-18h]

 __ptr = std__uniq_ptr_impl_int_std__default_delete_int____M_ptr(&this_ptr->_M_t);
 if ( *__ptr )
 {
 deleter = std__unique_ptr_int_::get_deleter(this_ptr);
 v2 = (int **)__ptr;
 std__default_delete_int__operator()(deleter, *v2);
 }
 *((int **)__ptr) = 0;
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv @ 0x41CE */
int * std__unique_ptr_int___operator_star(
 const std__unique_ptr_int_ *const __this)
{
 return std__unique_ptr_int__get(__this);
}


/* Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ @ 0x41F3 */
std__remove_reference<std__unique_ptr_int_&>::type * std__move<std__unique_ptr_int_ &>(
 std__unique_ptr_int_ *__t)
{
 return __t;
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2EOS3_ @ 0x4206 */
void std__Tuple_impl_0_int_ptr_std__default_delete_int___Tuple_impl(
 void *const __this,
 void *a2)
{
 std__Tuple_impl_1_std__default_delete_int___Tuple_impl(this, a2);
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_ @ 0x423E */
void std__tuple_int_ptr_std__default_delete_int___tuple(
 std__tuple_int_ptr_std__default_delete_int_ *const __this,
 std__tuple_int_ptr_std__default_delete_int_ *a2)
{
 std__Tuple_impl_0_int_ptr_std__default_delete_int___Tuple_impl(this, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_ @ 0x4268 */
void std____uniq_ptr_impl_int_std__default_delete_int____uniq_ptr_impl(
 void *const __this,
 void *__u)
{
 void *v2; // rax

 v2 = std__move_std__tuple_int_ptr_std__default_delete_int__ref_(__u);
 std__tuple_int_ptr_std__default_delete_int___tuple(this, v2);
 std____uniq_ptr_impl_int_std__default_delete_int_____M_ptr(__u) = 0;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi @ 0x42B2 */
void ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(
 std::__uniq_ptr_data<int,std__default_delete_int_array_,true,true> *const __this,
 std::__uniq_ptr_impl<int,std__default_delete_int_array_ >::pointer a2)
{
 std::__uniq_ptr_impl<int,std__default_delete_int_array_>::__uniq_ptr_impl(this, a2);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ @ 0x42DC */
void std__unique_ptr_int_array___unique_ptr_int_ptr_std__default_delete_int_array_void_bool(
 std__unique_ptr_int_array_ *const __this,
 int *__p)
{
 ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(&this->_M_t, __p);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x4306 */
void std__unique_ptr_int_array_::~unique_ptr(std__unique_ptr_int_array_ *const this)
{
 std__unique_ptr_int_array___deleter_type *deleter; // rax
 std::__uniq_ptr_impl<int,std__default_delete_int_array_ >::pointer *__ptr; // [rsp+18h] [rbp-8h]

 __ptr = std::__uniq_ptr_impl<int,std__default_delete_int_array_>::_M_ptr(&this->_M_t);
 if ( *__ptr )
 {
 deleter = std__unique_ptr_int_array_::get_deleter(this);
 std__default_delete_int_array_::operator()<int>(deleter, *__ptr);
 }
 *__ptr = 0;
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEm @ 0x4362 */
int* std__unique_ptr_int_array___operator_idx(
 const std__unique_ptr_int_array_ *const __this,
 std::size_t __i)
{
 return &std__unique_ptr_int_array__get(this)[__i];
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi @ 0x439A */
void std____uniq_ptr_impl_int_std__default_delete_int___uniq_ptr_int_ptr(
 void *const __this,
 void *__p)
{
 std__tuple_int_ptr_std__default_delete_int____tuple_true_true_(&__this);
 std____uniq_ptr_impl_int_std__default_delete_int_____M_ptr(__this) = __p;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x43D6 */
int** std____uniq_ptr_impl_int_std__default_delete_int_____M_ptr(
 void *const this)
{
 return std__get_0_int_ptr_std__default_delete_int_(&((std__uniq_ptr_data_int_std__default_delete_int_*)this)->_M_t);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv @ 0x43F4 */
void * std__unique_ptr_int___get_deleter(std__unique_ptr_int_ *const __this)
{
 return std__uniq_ptr_impl_int_std__default_delete_int___M_deleter(&__this->_M_t);
}


/* Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ @ 0x4412 */
int_ptr * std__move<int *&>(int **__t)
{
 return __t;
}


/* Function: _ZNKSt14default_deleteIiEclEPi @ 0x4424 */
void std__default_delete_int_::operator()(const std__default_delete_int_ *const __this, int *__ptr)
{
 if ( __ptr )
 operator delete(__ptr, 4u);
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv @ 0x4452 */
std__unique_ptr_int_::pointer std__unique_ptr_int_::get(const std__unique_ptr_int_ *const __this)
{
 return std::__uniq_ptr_impl<int,std__default_delete_int_>::_M_ptr(&__this->_M_t);
}


/* Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ @ 0x4470 */
std__remove_reference<std::tuple<int*,std__default_delete_int_ >&>::type * std__move<std::tuple<int *,std__default_delete_int_> &>(
 std::tuple<int*,std__default_delete_int_ > *__t)
{
 return __t;
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2EOS2_ @ 0x4482 */
void std::_Tuple_impl<1ul,std__default_delete_int_>::_Tuple_impl(
 std::_Tuple_impl<1,std__default_delete_int_ > *const __this,
 std::_Tuple_impl<1,std__default_delete_int_ > *__in)
{
 ;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi @ 0x4496 */
void std____uniq_ptr_impl_int_std__default_delete_int_array___uniq_ptr_int_ptr(
 void *const __this,
 void *__p)
{
 std__tuple_int_ptr_std__default_delete_int_array____tuple_true_true_(&__this);
 std____uniq_ptr_impl_int_std__default_delete_int_array_____M_ptr(__this) = __p;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x44D2 */
int** std____uniq_ptr_impl_int_std__default_delete_int_array_____M_ptr(
 void *const this)
{
 return std__get_0_int_ptr_std__default_delete_int_array_(&((std__uniq_ptr_impl_int_std__default_delete_int_array_*)this)->_M_t);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv @ 0x44F0 */
std__unique_ptr_int_array___deleter_type * std__unique_ptr_int_array_::get_deleter(
 std__unique_ptr_int_array_ *const this)
{
 return std::__uniq_ptr_impl<int,std__default_delete_int_array_>::_M_deleter(&this->_M_t);
}


/* Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsrSt14is_convertibleIPA_T_PS0_E5valueEvE4typeEPS5_ @ 0x450E */
void std__default_delete_int_array__operator_int(const std__default_delete_int_array_ *const __this, int *__ptr)
{
 if ( __ptr )
 operator delete[](__ptr);
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv @ 0x4538 */
int* std__unique_ptr_int_array__get(const std__unique_ptr_int_array_ *const __this)
{
 return std____uniq_ptr_impl_int_std__default_delete_int_array_____M_ptr(&__this->_M_t);
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv @ 0x4556 */
void std__tuple_int_ptr_std__default_delete_int____tuple_true_true_(
 void *const __this)
{
 std__Tuple_impl_0ul_int_ptr_std__default_delete_int___Tuple_impl(__this);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x4575 */
void * std__get_0ul_int_ptr_std__default_delete_int_(
 void *__t)
{
 return std__get_helper_0ul_int_ptr_std__default_delete_int_(__t);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv @ 0x4594 */
void * std____uniq_ptr_impl_int_std__default_delete_int___M_deleter(
 void *const this)
{
 return std__get_1_int_ptr_std__default_delete_int_(&((std____uniq_ptr_impl_int_std__default_delete_int__*)this)->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x45B2 */
void * std____uniq_ptr_impl_int_std__default_delete_int_____M_ptr_const(
 const void *const this)
{
 return std__get_0_int_ptr_std__default_delete_int_(&((const std____uniq_ptr_impl_int_std__default_delete_int__*)this)->_M_t);
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv @ 0x45D4 */
void std__tuple_int_ptr_std__default_delete_int_array____tuple_true_true_(
 void *const __this)
{
 std__Tuple_impl_0ul_int_ptr_std__default_delete_int_array___Tuple_impl(__this);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x45F3 */
std::__tuple_element_t_0 * std::get<0ul,int *,std__default_delete_int_array_>(
 std::tuple<int*,std__default_delete_int_array_ > *__t)
{
 return std::__get_helper<0ul,int *,std__default_delete_int_array_>(__t);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv @ 0x4612 */
void * std____uniq_ptr_impl_int_std__default_delete_int_array___M_deleter(
 void *const this)
{
 return std__get_1_int_ptr_std__default_delete_int_array_(&((std____uniq_ptr_impl_int_std__default_delete_int_array__*)this)->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x4630 */
void * std____uniq_ptr_impl_int_std__default_delete_int_array_____M_ptr_const(
 const void *const this)
{
 return std__get_0_int_ptr_std__default_delete_int_array_(&((const std____uniq_ptr_impl_int_std__default_delete_int_array__*)this)->_M_t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2Ev @ 0x4652 */
void std__Tuple_impl_0ul_int_ptr_std__default_delete_int___Tuple_impl(
 void *const __this)
{
 std__Tuple_impl_1ul_std__default_delete_int___Tuple_impl(__this);
 std__Head_base_0ul_int_ptr_false____Head_base(__this);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x467D */
int ** std__get_helper_0ul_int_ptr_std__default_delete_int_(
 void *__t)
{
 return std__Tuple_impl_0ul_int_ptr_std__default_delete_int___M_head(__t);
}


/* Function: _ZSt3getILm1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x469B */
void * std__get_1ul_int_ptr_std__default_delete_int_(
 void *__t)
{
 return std__get_helper_1ul_std__default_delete_int_(__t);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ @ 0x46B9 */
const void * std__get_0ul_int_ptr_std__default_delete_int__const(
 const void *__t)
{
 return std__get_helper_0ul_int_ptr_std__default_delete_int__const(__t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEEC2Ev @ 0x46D8 */
void std__Tuple_impl_0ul_int_ptr_std__default_delete_int_array___Tuple_impl(
 void *const __this)
{
 std__Tuple_impl_1ul_std__default_delete_int_array___Tuple_impl(__this);
 std__Head_base_0ul_int_ptr_false____Head_base(__this);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x4703 */
int ** std__get_helper_0ul_int_ptr_std__default_delete_int_array_(
 void *__t)
{
 return std__Tuple_impl_0ul_int_ptr_std__default_delete_int_array___M_head(__t);
}


/* Function: _ZSt3getILm1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x4721 */
std::__tuple_element_t * std::get<1ul,int *,std__default_delete_int_array_>(
 std::tuple<int*,std__default_delete_int_array_ > *__t)
{
 return (std::__tuple_element_t *)std::__get_helper<1ul,std__default_delete_int_array_>(__t);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ @ 0x473F */
const std::__tuple_element_t_0 * std::get<0ul,int *,std__default_delete_int_array_>(
 const std::tuple<int*,std__default_delete_int_array_ > *__t)
{
 return std::__get_helper<0ul,int *,std__default_delete_int_array_>(__t);
}


/* Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE @ 0x475D */
int ** std__forward<int *&>(int_ptr *__t)
{
 return __t;
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2Ev @ 0x4770 */
void std__Tuple_impl_1ul_std__default_delete_int___Tuple_impl(
 void *const __this)
{
 std__Head_base_1ul_std__default_delete_int__true___Head_base(__this);
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EEC2Ev @ 0x4790 */
void std__Head_base_0ul_int_ptr_false____Head_base(std__Head_base_0_int_ptr_false_ *const __this)
{
 __this->_M_head_impl = 0;
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERS3_ @ 0x47AA */
int ** std::_Tuple_impl<0ul,int *,std__default_delete_int_>::_M_head(
 std::_Tuple_impl<0,int*,std__default_delete_int_ > *__t)
{
 return std::_Head_base<0ul,int *,false>::_M_head((std::_Head_base<0,int*,false> *)__t);
}


/* Function: _ZSt12__get_helperILm1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x47C8 */
std__default_delete_int_ * std::__get_helper<1ul,std__default_delete_int_>(
 std::_Tuple_impl<1,std__default_delete_int_ > *__t)
{
 return std::_Tuple_impl<1ul,std__default_delete_int_>::_M_head(__t);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x47E6 */
int *const * std::__get_helper<0ul,int *,std__default_delete_int_>(
 const std::_Tuple_impl<0,int*,std__default_delete_int_ > *__t)
{
 return std::_Tuple_impl<0ul,int *,std__default_delete_int_>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEEC2Ev @ 0x4804 */
void std__Tuple_impl_1ul_std__default_delete_int_array___Tuple_impl(
 void *const __this)
{
 std__Head_base_1ul_std__default_delete_int_array__true___Head_base(__this);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ @ 0x4823 */
int ** std::_Tuple_impl<0ul,int *,std__default_delete_int_array_>::_M_head(
 std::_Tuple_impl<0,int*,std__default_delete_int_array_ > *__t)
{
 return std::_Head_base<0ul,int *,false>::_M_head((std::_Head_base<0,int*,false> *)__t);
}


/* Function: _ZSt12__get_helperILm1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x4841 */
std__default_delete_int_array_ * std::__get_helper<1ul,std__default_delete_int_array_>(
 std::_Tuple_impl<1,std__default_delete_int_array_ > *__t)
{
 return std::_Tuple_impl<1ul,std__default_delete_int_array_>::_M_head(__t);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x485F */
int *const * std::__get_helper<0ul,int *,std__default_delete_int_array_>(
 const std::_Tuple_impl<0,int*,std__default_delete_int_array_ > *__t)
{
 return std::_Tuple_impl<0ul,int *,std__default_delete_int_array_>::_M_head(__t);
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EEC2IRS0_EEOT_ @ 0x487E */
void std__Head_base_0ul_int_ptr_false____Head_base_int_ptr_ref(std__Head_base_0_int_ptr_false_ *const __this, int **__h)
{
 __this->_M_head_impl = *std__forward<int *&>(__h);
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EEC2Ev @ 0x48AC */
void std__Head_base_1ul_std__default_delete_int__true___Head_base(
 std__Head_base_1_std__default_delete_int__true_ *const __this)
{
 ;
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_ @ 0x48BB */
int ** std::_Head_base<0ul,int *,false>::_M_head(std::_Head_base<0,int*,false> *__b)
{
 return &__b->_M_head_impl;
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEE7_M_headERS2_ @ 0x48CD */
std__default_delete_int_ * std__Tuple_impl_1ul_std__default_delete_int___M_head(
 std__Tuple_impl_1_std__default_delete_int_ *__t)
{
 return std__Head_base_1ul_std__default_delete_int__true___M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERKS3_ @ 0x48EB */
int *const * std::_Tuple_impl<0ul,int *,std__default_delete_int_>::_M_head(
 const std::_Tuple_impl<0,int*,std__default_delete_int_ > *__t)
{
 return std::_Head_base<0ul,int *,false>::_M_head((const std::_Head_base<0,int*,false> *)__t);
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EEC2Ev @ 0x490A */
void std__Head_base_1ul_std__default_delete_int_array__true___Head_base(
 std__Head_base_1_std__default_delete_int_array__true_ *const __this)
{
 ;
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEE7_M_headERS3_ @ 0x4919 */
std__default_delete_int_array_ * std::_Tuple_impl<1ul,std__default_delete_int_array_>::_M_head(
 std::_Tuple_impl<1,std__default_delete_int_array_ > *__t)
{
 return std::_Head_base<1ul,std__default_delete_int_array_,true>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ @ 0x4937 */
int *const * std::_Tuple_impl<0ul,int *,std__default_delete_int_array_>::_M_head(
 const std::_Tuple_impl<0,int*,std__default_delete_int_array_ > *__t)
{
 return std::_Head_base<0ul,int *,false>::_M_head((const std::_Head_base<0,int*,false> *)__t);
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EE7_M_headERS2_ @ 0x4955 */
std__default_delete_int_ * std::_Head_base<1ul,std__default_delete_int_,true>::_M_head(
 std::_Head_base<1,std__default_delete_int_,true> *__b)
{
 return &__b->_M_head_impl;
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_ @ 0x4967 */
int *const * std__Head_base_0ul_int_ptr_false___M_head(const std__Head_base_0_int_ptr_false_ *__b)
{
 return &__b->_M_head_impl;
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EE7_M_headERS3_ @ 0x4979 */
std__default_delete_int_array_ * std__Head_base_1ul_std__default_delete_int_array__true___M_head(
 std__Head_base_1_std__default_delete_int_array__true_ *__b)
{
 return &__b->_M_head_impl;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x498C */
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *const __this)
{
 __this->_vptr_RTTIBase = (int (**)(...))off_8838;
 RTTIBase::~RTTIBase(__this);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x49BA */
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *const __this)
{
 RTTIDerivedB::~RTTIDerivedB(__this);
 operator delete(__this, 8u);
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x49EA */
void RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *const __this)
{
 __this->_vptr_RTTIBase = (int (**)(...))off_8860;
 RTTIBase::~RTTIBase(__this);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x4A18 */
void RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *const __this)
{
 RTTIDerivedA::~RTTIDerivedA(__this);
 operator delete(__this, 8u);
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x4A48 */
void DiamondDerived::~DiamondDerived(DiamondDerived *const __this)
{
 this->_vptr_MiddleA = (int (**)(...))&off_88B8;
 this->_vptr_MiddleB = (int (**)(...))&off_8920;
 *((unsigned long long *)&this->dataA + 1) = &off_88E8;
 MiddleB::~MiddleB((MiddleB *const)(&this->dataA + 2), (const void **const)&off_8950);
 MiddleA::~MiddleA(this, (const void **const)&_vtt_parm);
 VirtualBase::~VirtualBase((VirtualBase *const)&this->MiddleB);
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x4ACA */
void nonvirtual_thunk_to_DiamondDerived_destructor(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this - 16));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x4AD7 */
void virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this + *((unsigned long long *)this->_vptr_MiddleA - 4)));
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x4AE8 */
void DiamondDerived::~DiamondDerived(DiamondDerived *const __this)
{
 DiamondDerived::~DiamondDerived(__this);
 operator delete(__this, 0x30u);
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x4B17 */
void `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this - 16));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x4B21 */
void `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this + *((unsigned long long *)this->_vptr_MiddleA - 4)));
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x4B2E */
void MultiDerived::~MultiDerived(MultiDerived *const __this)
{
 this->_vptr_BaseA = (int (**)(...))&off_8A78;
 this->_vptr_BaseB = (int (**)(...))&off_8AA8;
 BaseB::~BaseB(&this->BaseB);
 BaseA::~BaseA(this);
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x4B7A */
void nonvirtual_thunk_to_MultiDerived_destructor(MultiDerived *this)
{
 MultiDerived::~MultiDerived((MultiDerived *)((char *)this - 16));
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x4B84 */
void MultiDerived::~MultiDerived(MultiDerived *const __this)
{
 MultiDerived::~MultiDerived(__this);
 operator delete(__this, 0x20u);
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x4BB3 */
void `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
 MultiDerived::~MultiDerived((MultiDerived *)((char *)this - 16));
}


/* Function: _ZN7DerivedD2Ev @ 0x4BBE */
void Derived::~Derived(Derived *const __this)
{
 __this->_vptr_Base = (int (**)(...))&off_8B20;
 Base::~Base(__this);
}


/* Function: _ZN7DerivedD0Ev @ 0x4BEC */
void Derived::~Derived(Derived *const __this)
{
 Derived::~Derived(__this);
 operator delete(__this, 0x10u);
}


/* Function: .term_proc @ 0x4C1C */
void term_proc()
{
 ;
}


/* FAILED to decompile: _Znam @ 0x9048 */

/* FAILED to decompile: printf @ 0x9050 */

/* FAILED to decompile: __cxa_begin_catch @ 0x9058 */

/* FAILED to decompile: strlen @ 0x9060 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x9068 */

/* FAILED to decompile: strncpy @ 0x9070 */

/* FAILED to decompile: __libc_start_main @ 0x9080 */

/* FAILED to decompile: __cxa_atexit @ 0x9088 */

/* FAILED to decompile: _Znwm @ 0x9090 */

/* FAILED to decompile: _ZdlPvm @ 0x9098 */

/* FAILED to decompile: __cxa_bad_typeid @ 0x90A0 */

/* FAILED to decompile: __stack_chk_fail @ 0x90A8 */

/* FAILED to decompile: __dynamic_cast @ 0x90B0 */

/* FAILED to decompile: _ZdaPv @ 0x90B8 */

/* FAILED to decompile: strcmp @ 0x90C8 */

/* FAILED to decompile: __cxa_throw_bad_array_new_length @ 0x90D0 */

/* FAILED to decompile: __cxa_rethrow @ 0x90D8 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x90E0 */

/* FAILED to decompile: puts @ 0x90E8 */

/* FAILED to decompile: __cxa_end_catch @ 0x90F0 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x90F8 */

/* FAILED to decompile: __cxa_throw @ 0x9100 */

/* FAILED to decompile: _Unwind_Resume @ 0x9110 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x9118 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x9120 */

/* FAILED to decompile: __gmon_start__ @ 0x9130 */

/* Total functions decompiled: 225, failed: 26 */
