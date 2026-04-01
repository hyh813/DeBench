/* Types for C compilation */
#include <stddef.h>  /* for size_t */
#include <string.h>  /* for strncpy, strcmp, strlen */

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

struct SimpleClass { int value; char name[32]; };
struct LifecycleClass { size_t size; int *data; int instance_count; };
struct Base { int (**_vptr_Base)(...); };
struct Derived { int (**_vptr_Base)(...); int multiplier; };
struct BaseA { int (**_vptr_BaseA)(...); };
struct BaseB { int (**_vptr_BaseB)(...); };
struct MultiDerived { int (**_vptr_BaseA)(...); int (**_vptr_BaseB)(...); int dataA; int dataB; struct BaseB BaseB; };
struct VirtualBase { int (**_vptr_VirtualBase)(...); };
struct MiddleA { int (**_vptr_MiddleA)(...); int dataA; };
struct MiddleB { int (**_vptr_MiddleB)(...); int dataB; };
struct DiamondDerived { int (**_vptr_MiddleA)(...); int (**_vptr_MiddleB)(...); int dataA; int dataB; struct VirtualBase MiddleB; };
struct Point { int x; int y; };
struct RTTIBase { int (**_vptr_RTTIBase)(...); };
struct RTTIDerivedA { int (**_vptr_RTTIBase)(...); };
struct RTTIDerivedB { int (**_vptr_RTTIBase)(...); };

/* Template class containers */
struct Container_int { int size; int data[10]; };
struct Container_double { int size; double data[10]; };

/* std::unique_ptr replacement structures */
struct std_unique_ptr_int { int *_M_ptr; };
struct std_unique_ptr_int_array { int *_M_ptr; };
struct std_unique_ptr_int_lambda { int *_M_ptr; };

/* Tuple replacement structures */
struct std_tuple_int_ptr { int *_M_head_impl; };
struct std_tuple_int_ptr_deleter { int *_M_head_impl; void *_M_head_impl2; };

/* Virtual table pointers */
extern int (**off_8B50)(...);
extern int (**off_8B20)(...);
extern int (**off_8AF8)(...);
extern int (**off_8AD0)(...);
extern int (**off_8A78)(...);
extern int (**off_8AA8)(...);
extern int (**off_8A50)(...);
extern int (**off_8950)(...);
extern int (**off_88B8)(...);
extern int (**off_8920)(...);
extern int (**off_88E8)(...);
extern int (**off_8888)(...);
extern int (**off_8860)(...);
extern int (**off_8838)(...);

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_gcc_O0_g
 * Processor: pc
 */

/* Function: .init_proc */
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





/* Function: test_cpp_member_func */
int test_cpp_member_func()
{
 int r1; // [rsp+4h] [rbp-3Ch]
 int r2; // [rsp+8h] [rbp-38h]
 SimpleClass obj; // [rsp+10h] [rbp-30h] BYREF
 unsigned long long v4; // [rsp+38h] [rbp-8h]

 v4 = __readfsqword(0x28u);
 SimpleClass_Constructor(&obj, 5, "Test");
 SimpleClass_setValue(&obj, 10);
 r1 = SimpleClass_getValue(&obj);
 r2 = SimpleClass_compute(&obj, 3);
 return r2 + r1 + SimpleClass_getClassID();
}


/* Function: test_cpp_constructor */
int test_cpp_constructor()
{
 int result; // [rsp+Ch] [rbp-24h]
 int resulta; // [rsp+Ch] [rbp-24h]
 LifecycleClass obj; // [rsp+10h] [rbp-20h] BYREF
 unsigned long long v4; // [rsp+28h] [rbp-8h]

 v4 = __readfsqword(0x28u);
 LifecycleClass_Constructor(&obj, 5u);
 result = LifecycleClass_getData(&obj, 2u);
 resulta = LifecycleClass_getInstanceCount() + result;
 LifecycleClass_destructor(&obj);
 return 1000 * LifecycleClass_getInstanceCount() + resulta;
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


/* Function: test_cpp_template_func */
int test_cpp_template_func()
{
 int a; // [rsp+4h] [rbp-1Ch] BYREF
 int b; // [rsp+8h] [rbp-18h] BYREF
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


/* Function: test_cpp_template_class */
int test_cpp_template_class()
{
 int r1; // [rsp+0h] [rbp-A0h]
 int r2; // [rsp+4h] [rbp-9Ch]
 Container_int int_container; // [rsp+10h] [rbp-90h] BYREF
 Container_double double_container; // [rsp+40h] [rbp-60h] BYREF
 unsigned long long v5; // [rsp+98h] [rbp-8h]

 v5 = __readfsqword(0x28u);
 Container_int_Constructor(&int_container);
 Container_int_push(&int_container, 10);
 Container_int_push(&int_container, 20);
 Container_int_push(&int_container, 30);
 r1 = Container_int_get(&int_container, 0);
 r2 = Container_int_getSize(&int_container);
 Container_double_Constructor(&double_container);
 Container_double_push(&double_container, 3.14);
 return r2 + r1 + (int)Container_double_get(&double_container, 0);
}


/* Function: test_cpp_lambda::<lambda> */
typedef int lambda_deleter;

int lambda_operator(
 const struct {int __capture_by_value; int *__capture_by_ref;} *const __closure,
 int x)
{
 *__closure->__capture_by_ref += 5;
 return x * __closure->__capture_by_value + *__closure->__capture_by_ref;
}


/* Function: test_cpp_lambda */
int test_cpp_lambda()
{
 int capture_by_ref; // [rsp+0h] [rbp-30h] BYREF
 int capture_by_value; // [rsp+4h] [rbp-2Ch]
 struct {int __capture_by_value; int *__capture_by_ref;} lambda2; // [rsp+10h] [rbp-20h] OVERLAPPED BYREF
 int *p_capture_by_ref; // [rsp+18h] [rbp-18h]
 unsigned long long v5; // [rsp+28h] [rbp-8h]

 v5 = __readfsqword(0x28u);
 capture_by_value = 10;
 capture_by_ref = 20;
 lambda2.__capture_by_value = 10;
 lambda2.__capture_by_ref = &capture_by_ref;
 p_capture_by_ref = &capture_by_ref;
 return lambda_operator(&lambda2, 3) + 30;
}


/* Function: _Z18test_cpp_exceptionv @ 0x2ABE */
int test_cpp_exception()
{
 unsigned int *exception; // rax

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&`typeinfo for'int, 0);
}


/* Function: test_cpp_smart_ptr::<lambda> */
void test_cpp_smart_ptr_lambda_operator(
 const struct {unsigned char gap0;} *const __closure,
 int *p)
{
 *p = -1;
 if ( p )
 operator delete(p, 4u);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x2C17 */
int test_cpp_smart_ptr()
{
 int *v0; // rax
 std::remove_reference<std::unique_ptr<int>&>::type *v1; // rax
 int *v2; // rdx
 int *v3; // rax
 int v4; // ebx
 $44B1EA910F358000232221CCB0AF3F67 deleter; // [rsp+Bh] [rbp-45h] BYREF
 int r1; // [rsp+Ch] [rbp-44h]
 int r2; // [rsp+10h] [rbp-40h]
 int r3; // [rsp+14h] [rbp-3Ch]
 std::unique_ptr<int> ptr2; // [rsp+18h] [rbp-38h] BYREF
 std::unique_ptr_int_lambda ptr3; // [rsp+28h] [rbp-28h] BYREF
 unsigned long long v12; // [rsp+38h] [rbp-18h]

 v12 = __readfsqword(0x28u);
 v0 = (int *)operator new(4u);
 *v0 = 100;
 std::unique_ptr<int>::unique_ptr<std::default_delete<int>,void>(&ptr2, v0);
 *std::unique_ptr<int>::operator*(&ptr2) = 200;
 v1 = std::move<std::unique_ptr<int>&>(&ptr2);
 std::unique_ptr<int>::unique_ptr((std::unique_ptr<int> *const)&ptr2._M_t._M_t.std::_Head_base<0,int*,false>, v1);
 r1 = *std::unique_ptr<int>::operator*((const std::unique_ptr<int> *const)&ptr2._M_t._M_t.std::_Head_base<0,int*,false>);
 v2 = (int *)operator new[](0x14u);
 *v2 = 1;
 v2[1] = 2;
 v2[2] = 3;
 v2[3] = 4;
 v2[4] = 5;
 std::unique_ptr<int []>::unique_ptr<int *,std::default_delete<int []>,void,bool>(
 (std::unique_ptr<int []> *const)&ptr3,
 v2);
 r2 = *std::unique_ptr<int []>::operator[]((const std::unique_ptr<int []> *const)&ptr3, 2u);
 v3 = (int *)operator new(4u);
 *v3 = 500;
 std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::unique_ptr<test_cpp_smart_ptr(void)::{lambda(int *)#1},void>(
 (std::unique_ptr_int_lambda *const)&ptr3._M_t._M_t.std::_Head_base<0,int*,false>,
 v3,
 (const std::unique_ptr_int_lambda::deleter_type *)&deleter);
 r3 = *std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::operator*((const std::unique_ptr_int_lambda *const)&ptr3._M_t._M_t.std::_Head_base<0,int*,false>);
 v4 = r2 + r1 + r3;
 std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::~unique_ptr((std::unique_ptr_int_lambda *const)&ptr3._M_t._M_t.std::_Head_base<0,int*,false>);
 std::unique_ptr<int []>::~unique_ptr((std::unique_ptr<int []> *const)&ptr3);
 std::unique_ptr<int>::~unique_ptr((std::unique_ptr<int> *const)&ptr2._M_t._M_t.std::_Head_base<0,int*,false>);
 std::unique_ptr<int>::~unique_ptr(&ptr2);
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
void std::__uniq_ptr_data_int_test_cpp_smart_ptr__::_lambda_int____true_false_::__uniq_ptr_data_const_test_cpp_smart_ptr__::_lambda_int_____(
 std::__uniq_ptr_data<int,test_cpp_smart_ptr()::<lambda(int*)>,true,false> *const this,
 std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::<lambda(int*)> >::pointer a2,
 const struct {unsigned char gap0;} *a3)
{
 std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::__uniq_ptr_impl<test_cpp_smart_ptr(void)::{lambda(int *)#1} const&>(
 this,
 a2,
 a3);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EC2IS1_vEES0_RKS1_ @ 0x3110 */
void std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::unique_ptr<test_cpp_smart_ptr(void)::{lambda(int *)#1},void>(
 std::unique_ptr_int_lambda *const this,
 std::unique_ptr_int_lambda::pointer __p,
 const std::unique_ptr_int_lambda::deleter_type *__d)
{
 std::__uniq_ptr_data_int_test_cpp_smart_ptr__::_lambda_int____true_false_::__uniq_ptr_data_const_test_cpp_smart_ptr__::_lambda_int_____(
 &this->_M_t,
 __p,
 __d);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_ED2Ev @ 0x313E */
void std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::~unique_ptr(
 std::unique_ptr_int_lambda *const this)
{
 std::unique_ptr_int_lambda::deleter_type *deleter; // rbx
 int **v2; // rax
 std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::<lambda(int*)> >::pointer *__ptr; // [rsp+18h] [rbp-18h]

 __ptr = std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_ptr(&this->_M_t);
 if ( *__ptr )
 {
 deleter = std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::get_deleter(this);
 v2 = std::move<int *&>(__ptr);
 test_cpp_smart_ptr(void)::{lambda(int *)#1}::operator()(deleter, *v2);
 }
 *__ptr = 0;
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EdeEv @ 0x31A2 */
std::__add_lvalue_reference_helper<int,true>::type std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::operator*(
 const std::unique_ptr_int_lambda *const this)
{
 return std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::get(this);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_EC2IRKS1_EES0_OT_ @ 0x31C4 */
void std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::__uniq_ptr_impl<test_cpp_smart_ptr(void)::{lambda(int *)#1} const&>(
 std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::<lambda(int*)> > *const this,
 std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::<lambda(int*)> >::pointer __p,
 const struct {unsigned char gap0;} *__d)
{
 const struct {unsigned char gap0;} *v3; // rax
 std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::<lambda(int*)> >::pointer __pa; // [rsp+10h] [rbp-20h] BYREF
 std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::<lambda(int*)> > *thisa; // [rsp+18h] [rbp-18h]

 thisa = this;
 __pa = __p;
 v3 = std::forward<test_cpp_smart_ptr(void)::{lambda(int *)#1} const&>((std::remove_reference<const test_cpp_smart_ptr()::<lambda(int*)>&>::type *)__d);
 std::tuple<int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::tuple<int *&,test_cpp_smart_ptr(void)::{lambda(int *)#1} const&,true>(
 &this->_M_t,
 &__pa,
 v3);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv @ 0x3202 */
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::<lambda(int*)> >::pointer * std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_ptr(
 std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::<lambda(int*)> > *const this)
{
 return std::get<0ul,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(&this->_M_t);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E11get_deleterEv @ 0x321C */
std::unique_ptr_int_lambda::deleter_type * std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::get_deleter(
 std::unique_ptr_int_lambda *const this)
{
 return (std::unique_ptr_int_lambda::deleter_type *)std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_deleter(&this->_M_t);
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E3getEv @ 0x3236 */
std::unique_ptr_int_lambda::pointer std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::get(
 const std::unique_ptr_int_lambda *const this)
{
 return std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_ptr(&this->_M_t);
}


/* Function: _ZSt7forwardIRKZ18test_cpp_smart_ptrvEUlPiE_EOT_RNSt16remove_referenceIS4_E4typeE @ 0x3250 */
const struct {unsigned char gap0;} * std::forward<test_cpp_smart_ptr(void)::{lambda(int *)#1} const&>(
 std::remove_reference<const test_cpp_smart_ptr()::<lambda(int*)>&>::type *__t)
{
 return (const struct {unsigned char gap0;} *)__t;
}


/* Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_RKS1_Lb1EEEOT_OT0_ @ 0x325E */
void std::tuple<int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::tuple<int *&,test_cpp_smart_ptr(void)::{lambda(int *)#1} const&,true>(
 std::tuple<int*,test_cpp_smart_ptr()::<lambda(int*)> > *const this,
 int **__a1,
 const struct {unsigned char gap0;} *__a2)
{
 const struct {unsigned char gap0;} *v3; // r12
 int **v4; // rax

 v3 = std::forward<test_cpp_smart_ptr(void)::{lambda(int *)#1} const&>((std::remove_reference<const test_cpp_smart_ptr()::<lambda(int*)>&>::type *)__a2);
 v4 = std::forward<int *&>(__a1);
 std::_Tuple_impl<0ul,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_Tuple_impl<int *&,test_cpp_smart_ptr(void)::{lambda(int *)#1} const&,void>(
 this,
 v4,
 v3);
}


/* Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x32AC */
std::__tuple_element_t_1 * std::get<0ul,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(
 std::tuple<int*,test_cpp_smart_ptr()::<lambda(int*)> > *__t)
{
 return std::__get_helper<0ul,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(__t);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E10_M_deleterEv @ 0x32C6 */
struct {unsigned char gap0;} * std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_deleter(
 std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::<lambda(int*)> > *const this)
{
 return (struct {unsigned char gap0;} *)std::get<1ul,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(&this->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv @ 0x32E0 */
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::<lambda(int*)> >::pointer std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_ptr(
 const std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::<lambda(int*)> > *const this)
{
 return *std::get<0ul,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(&this->_M_t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_JRKS1_EvEEOT_DpOT0_ @ 0x32FE */
void std::_Tuple_impl<0ul,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_Tuple_impl<int *&,test_cpp_smart_ptr(void)::{lambda(int *)#1} const&,void>(
 std::_Tuple_impl<0,int*,test_cpp_smart_ptr()::<lambda(int*)> > *const this,
 int **__head,
 const struct {unsigned char gap0;} *a3)
{
 const struct {unsigned char gap0;} *v3; // rdx
 int **v4; // rax

 v3 = std::forward<test_cpp_smart_ptr(void)::{lambda(int *)#1} const&>((std::remove_reference<const test_cpp_smart_ptr()::<lambda(int*)>&>::type *)a3);
 std::_Tuple_impl<1ul,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_Tuple_impl(this, v3);
 v4 = std::forward<int *&>(__head);
 std::_Head_base<0ul,int *,false>::_Head_base<int *&>((std::_Head_base<0,int*,false> *const)this, v4);
}


/* Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x3353 */
int ** std::__get_helper<0ul,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(
 std::_Tuple_impl<0,int*,test_cpp_smart_ptr()::<lambda(int*)> > *__t)
{
 return std::_Tuple_impl<0ul,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_head(__t);
}


/* Function: _ZSt3getILm1EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x336D */
std::__tuple_element_t * std::get<1ul,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(
 std::tuple<int*,test_cpp_smart_ptr()::<lambda(int*)> > *__t)
{
 return (std::__tuple_element_t *)std::__get_helper_1_test_cpp_smart_ptr__::_lambda_int_____(__t);
}


/* Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ @ 0x3387 */
const std::__tuple_element_t_1 * std::get<0ul,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(
 const std::tuple<int*,test_cpp_smart_ptr()::<lambda(int*)> > *__t)
{
 return std::__get_helper<0ul,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(__t);
}


/* Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvEUlPiE_EEC2ERKS1_ @ 0x33A2 */
void std::_Tuple_impl<1ul,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_Tuple_impl(
 std::_Tuple_impl<1,test_cpp_smart_ptr()::<lambda(int*)> > *const this,
 const struct {unsigned char gap0;} *__head)
{
 std::_Head_base<1ul,test_cpp_smart_ptr(void)::{lambda(int *)#1},true>::_Head_base(this, __head);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERS2_ @ 0x33C8 */
int ** std::_Tuple_impl<0ul,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_head(
 std::_Tuple_impl<0,int*,test_cpp_smart_ptr()::<lambda(int*)> > *__t)
{
 return std::_Head_base<0ul,int *,false>::_M_head((std::_Head_base<0,int*,false> *)__t);
}


/* Function: std::__get_helper_1_test_cpp_smart_ptr()::_lambda(int_)___ @ 0x33E2 */
struct {unsigned char gap0;} * std::__get_helper_1_test_cpp_smart_ptr__::_lambda_int_____(
 std::_Tuple_impl<1,test_cpp_smart_ptr()::<lambda(int*)> > *__t)
{
 return std::_Tuple_impl<1ul,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_head(__t);
}


/* Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x33FC */
int *const * std::__get_helper<0ul,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(
 const std::_Tuple_impl<0,int*,test_cpp_smart_ptr()::<lambda(int*)> > *__t)
{
 return std::_Tuple_impl<0ul,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_head(__t);
}


/* Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EEC2ERKS1_ @ 0x3416 */
void std::_Head_base<1ul,test_cpp_smart_ptr(void)::{lambda(int *)#1},true>::_Head_base(
 std::_Head_base<1,test_cpp_smart_ptr()::<lambda(int*)>,true> *const this,
 const struct {unsigned char gap0;} *__h)
{
 ;
}


/* Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvEUlPiE_EE7_M_headERS2_ @ 0x3425 */
struct {unsigned char gap0;} * std::_Tuple_impl<1ul,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_head(
 std::_Tuple_impl<1,test_cpp_smart_ptr()::<lambda(int*)> > *__t)
{
 return std::_Head_base<1ul,test_cpp_smart_ptr(void)::{lambda(int *)#1},true>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERKS2_ @ 0x343F */
int *const * std::_Tuple_impl<0ul,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_head(
 const std::_Tuple_impl<0,int*,test_cpp_smart_ptr()::<lambda(int*)> > *__t)
{
 return std::_Head_base<0ul,int *,false>::_M_head((const std::_Head_base<0,int*,false> *)__t);
}


/* Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EE7_M_headERS2_ @ 0x3459 */
struct {unsigned char gap0;} * std::_Head_base<1ul,test_cpp_smart_ptr(void)::{lambda(int *)#1},true>::_M_head(
 std::_Head_base<1,test_cpp_smart_ptr()::<lambda(int*)>,true> *__b)
{
 return (struct {unsigned char gap0;} *)__b;
}



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
const char * std::type_info::name(const std::type_info *const this)
{
 if ( **((unsigned char **)this + 1) == 42 )
 return (const char *)(*((unsigned long long *)this + 1) + 1LL);
 else
 return (const char *)*((unsigned long long *)this + 1);
}


/* Function: _ZNKSt9type_infoeqERKS_ @ 0x350A */
bool std::type_info::operator==(const std::type_info *const this, const std::type_info *__arg)
{
 return *((unsigned long long *)this + 1) == *((unsigned long long *)__arg + 1)
 || **((unsigned char **)this + 1) != 42 && !strcmp(*((const char **)this + 1), *((const char **)__arg + 1));
}


/* Function: SimpleClass_Constructor */
void SimpleClass_Constructor(SimpleClass *this, int v, const char *n)
{
 this->value = v;
 strncpy(this->name, n, 0x1Fu);
 this->name[31] = 0;
}


/* Function: _ZNK11SimpleClass8getValueEv @ 0x35B8 */
int SimpleClass_getValue(const SimpleClass *this)
{
 return this->value;
}


/* Function: _ZN11SimpleClass8setValueEi @ 0x35CC */
void SimpleClass_setValue(SimpleClass *this, int v)
{
 this->value = v;
}


/* Function: _ZNK11SimpleClass7computeEi @ 0x35E8 */
int SimpleClass_compute(const SimpleClass *this, int x)
{
 int v2; // ebx

 v2 = x * this->value;
 return v2 + strlen(this->name);
}


/* Function: SimpleClass_getClassID */
int SimpleClass_getClassID()
{
 return 4660;
}


/* Function: LifecycleClass_Constructor */
void LifecycleClass_Constructor(LifecycleClass *this, size_t s)
{
 size_t i; // [rsp+18h] [rbp-8h]

 this->size = s;
 if ( s > 0x1FFFFFFFFFFFFFFELL )
 __cxa_throw_bad_array_new_length();
 this->data = (int *)operator new[](4 * s);
 for ( i = 0; i < s; ++i )
 this->data[i] = 10 * i;
 ++LifecycleClass::instance_count;
}


/* Function: _ZN14LifecycleClassD2Ev @ 0x36D0 */
void LifecycleClass::~LifecycleClass()
{
 if ( this->data )
 operator delete[](this->data);
 --LifecycleClass::instance_count;
}


/* Function: _ZNK14LifecycleClass7getDataEm @ 0x370E */
int LifecycleClass::getData(const LifecycleClass *const this, size_t idx)
{
 if ( idx >= this->size )
 return -1;
 else
 return this->data[idx];
}


/* Function: _ZN14LifecycleClass16getInstanceCountEv @ 0x3749 */
int LifecycleClass::getInstanceCount()
{
 return LifecycleClass::instance_count;
}


/* Function: Base_virtual_func */
int Base_virtual_func(Base *this, int x)
{
 return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x3772 */
const char * Base::getName(const Base *this)
{
    return "Base";
}


/* Function: Base_destructor */
void Base_destructor(Base *this)
{
 this->_vptr_Base = (int (**)(...))&off_8B50;
}


/* Function: _ZN4BaseD0Ev @ 0x37A6 */
void Base::~Base()
{
 Base::~Base(this);
 operator delete(this, 8u);
}


/* Function: _ZN4BaseC2Ev @ 0x37D6 */
void Base::Base(Base *)
{
 this->_vptr_Base = (int (**)(...))&off_8B50;
}


/* Function: _ZN7DerivedC2Ei @ 0x37F4 */
void Derived::Derived(Derived *const this, int m)
{
 Base::Base(this);
 this->_vptr_Base = (int (**)(...))&off_8B20;
 this->multiplier = m;
}


/* Function: Derived_virtual_func */
int Derived_virtual_func(Derived *this, int x)
{
 return x * this->multiplier;
}


/* Function: _ZNK7Derived7getNameEv @ 0x384A */
const char * Derived::getName(const Derived *const this)
{
 return "Derived";
}


/* Function: _ZN5BaseA5funcAEv @ 0x3860 */
int BaseA::funcA(BaseA *const this)
{
 return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x3874 */
void BaseA::~BaseA(BaseA *const this)
{
 this->_vptr_BaseA = (int (**)(...))&off_8AF8;
}


/* Function: _ZN5BaseAD0Ev @ 0x3892 */
void BaseA::~BaseA(BaseA *const this)
{
 BaseA::~BaseA(this);
 operator delete(this, 0x10u);
}


/* Function: _ZN5BaseB5funcBEv @ 0x38C2 */
int BaseB::funcB(BaseB *const this)
{
 return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x38D6 */
void BaseB::~BaseB(BaseB *const this)
{
 this->_vptr_BaseB = (int (**)(...))&off_8AD0;
}


/* Function: _ZN5BaseBD0Ev @ 0x38F4 */
void BaseB::~BaseB(BaseB *const this)
{
 BaseB::~BaseB(this);
 operator delete(this, 0x10u);
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x3924 */
int MultiDerived::funcA(MultiDerived *const this)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x3938 */
int MultiDerived::funcB(MultiDerived *const this)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x394B */
int `non-virtual thunk to'MultiDerived::funcB(MultiDerived *this)
{
 return MultiDerived::funcB((MultiDerived *)((char *)this - 16));
}


/* Function: _ZN5BaseAC2Ev @ 0x3956 */
void BaseA::BaseA(BaseA *const this)
{
 this->_vptr_BaseA = (int (**)(...))&off_8AF8;
}


/* Function: _ZN5BaseBC2Ev @ 0x3974 */
void BaseB::BaseB(BaseB *const this)
{
 this->_vptr_BaseB = (int (**)(...))&off_8AD0;
}


/* Function: _ZN12MultiDerivedC2Ev @ 0x3992 */
void MultiDerived::MultiDerived(MultiDerived *const this)
{
 BaseA::BaseA(this);
 BaseB::BaseB(&this->BaseB);
 this->_vptr_BaseA = (int (**)(...))&off_8A78;
 this->_vptr_BaseB = (int (**)(...))&off_8AA8;
}


/* Function: _ZN11VirtualBase4funcEv @ 0x39DE */
int VirtualBase::func(VirtualBase *)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x39F2 */
void VirtualBase::~VirtualBase(VirtualBase *)
{
 this->_vptr_VirtualBase = (int (**)(...))&off_8A50;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x3A10 */
void VirtualBase::~VirtualBase(VirtualBase *)
{
 VirtualBase::~VirtualBase(this);
 operator delete(this, 0x10u);
}


/* Function: _ZN7MiddleA4funcEv @ 0x3A40 */
int MiddleA::func(MiddleA *const this)
{
 return *(int *)((char *)&this->dataA + *((unsigned long long *)this->_vptr_MiddleA - 3)) + 150;
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x3A6E */
int `virtual thunk to'MiddleA::func(MiddleA *this)
{
 return MiddleA::func((MiddleA *)((char *)this + *((unsigned long long *)this->_vptr_MiddleA - 3)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x3A7C */
int MiddleB::func(MiddleB *const this)
{
 return *(int *)((char *)&this->dataB + *((unsigned long long *)this->_vptr_MiddleB - 3)) + 200;
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x3AAA */
int `virtual thunk to'MiddleB::func(MiddleB *this)
{
 return MiddleB::func((MiddleB *)((char *)this + *((unsigned long long *)this->_vptr_MiddleB - 3)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x3AB8 */
int DiamondDerived::func(DiamondDerived *const this)
{
 return *(int *)((char *)&this->dataA + *((unsigned long long *)this->_vptr_MiddleA - 3)) + 250;
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x3AE6 */
int `virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
 return DiamondDerived::func((DiamondDerived *)((char *)this + *((unsigned long long *)this->_vptr_MiddleA - 3)));
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x3AF3 */
int `non-virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
 return DiamondDerived::func((DiamondDerived *)((char *)this - 16));
}


/* Function: _ZN11VirtualBaseC2Ev @ 0x3AFE */
void VirtualBase::VirtualBase(VirtualBase *)
{
 this->_vptr_VirtualBase = (int (**)(...))&off_8A50;
}


/* Function: _ZN7MiddleAC2Ev @ 0x3B1C */
void MiddleA::MiddleA(MiddleA *const this, const void **const __vtt_parm)
{
 this->_vptr_MiddleA = (int (**)(...))*__vtt_parm;
 *(int (***)(...))((char *)&this->_vptr_MiddleA + *((unsigned long long *)this->_vptr_MiddleA - 3)) = (int (**)(...))__vtt_parm[1];
}


/* Function: _ZN7MiddleAD2Ev @ 0x3B60 */
void MiddleA::~MiddleA(MiddleA *const this, const void **const __vtt_parm)
{
 this->_vptr_MiddleA = (int (**)(...))*__vtt_parm;
 *(int (***)(...))((char *)&this->_vptr_MiddleA + *((unsigned long long *)this->_vptr_MiddleA - 3)) = (int (**)(...))__vtt_parm[1];
}


/* Function: _ZN7MiddleBC2Ev @ 0x3BA4 */
void MiddleB::MiddleB(MiddleB *const this, const void **const __vtt_parm)
{
 this->_vptr_MiddleB = (int (**)(...))*__vtt_parm;
 *(int (***)(...))((char *)&this->_vptr_MiddleB + *((unsigned long long *)this->_vptr_MiddleB - 3)) = (int (**)(...))__vtt_parm[1];
}


/* Function: _ZN7MiddleBD2Ev @ 0x3BE8 */
void MiddleB::~MiddleB(MiddleB *const this, const void **const __vtt_parm)
{
 this->_vptr_MiddleB = (int (**)(...))*__vtt_parm;
 *(int (***)(...))((char *)&this->_vptr_MiddleB + *((unsigned long long *)this->_vptr_MiddleB - 3)) = (int (**)(...))__vtt_parm[1];
}


/* Function: _ZN14DiamondDerivedC1Ev @ 0x3C2C */
void DiamondDerived::DiamondDerived(DiamondDerived *const this)
{
 VirtualBase::VirtualBase((VirtualBase *const)&this->MiddleB);
 MiddleA::MiddleA(this, (const void **const)&_vtt_parm);
 MiddleB::MiddleB((MiddleB *const)(&this->dataA + 2), (const void **const)&off_8950);
 this->_vptr_MiddleA = (int (**)(...))&off_88B8;
 this->_vptr_MiddleB = (int (**)(...))&off_8920;
 *((unsigned long long *)&this->dataA + 1) = &off_88E8;
}


/* Function: _ZN5PointC2Eii @ 0x3CAE */
void Point::Point(Point *const this, int _x, int _y)
{
 this->x = _x;
 this->y = _y;
}


/* Function: _ZNK5PointplERKS_ @ 0x3CD6 */
Point Point::operator+(const Point *const this, const Point *other)
{
 Point v3; // [rsp+10h] [rbp-10h] BYREF
 unsigned long long v4; // [rsp+18h] [rbp-8h]

 v4 = __readfsqword(0x28u);
 Point::Point(&v3, other->x + this->x, other->y + this->y);
 return v3;
}


/* Function: _ZNK5PointeqERKS_ @ 0x3D40 */
bool Point::operator==(const Point *const this, const Point *other)
{
 return this->x == other->x && this->y == other->y;
}


/* Function: _ZN5PointppEv @ 0x3D80 */
Point * Point::operator++(Point *const this)
{
 ++this->x;
 ++this->y;
 return this;
}


int template_max_int(int a, int b)
{
 if ( a <= b )
 return b;
 else
 return a;
}

int template_max_double(double a, double b)
{
 if ( a <= b )
 return b;
 return a;
}

void template_swap_int(int *a, int *b)
{
 int temp; // [rsp+1Ch] [rbp-4h]

 temp = *a;
 *a = *b;
 *b = temp;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x3E3A */
void Container<int>::Container(Container<int> *const this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x3E54 */
void Container<int>::push(Container<int> *const this, int value)
{
 int size; // eax

 if ( this->size <= 9 )
 {
 size = this->size;
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x3E90 */
int Container<int>::get(const Container<int> *const this, int idx)
{
 if ( idx < 0 || idx >= this->size )
 return 0;
 else
 return this->data[idx];
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x3EC8 */
int Container<int>::getSize(const Container<int> *const this)
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x3EDE */
void Container<double>::Container(Container<double> *const this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x3EF8 */
void Container<double>::push(Container<double> *const this, double value)
{
 int size; // eax

 if ( this->size <= 9 )
 {
 size = this->size;
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x3F3A */
double Container<double>::get(const Container<double> *const this, int idx)
{
 if ( idx < 0 || idx >= this->size )
 return 0.0;
 else
 return this->data[idx];
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x3F7C */
int Container<double>::getSize(const Container<double> *const this)
{
 return this->size;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ @ 0x3F92 */
void std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data(
 std::__uniq_ptr_data<int,std::default_delete<int>,true,true> *const this,
 std::__uniq_ptr_data<int,std::default_delete<int>,true,true> *a2)
{
 std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(this, a2);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_ @ 0x3FBC */
void std::unique_ptr<int>::unique_ptr(std::unique_ptr<int> *const this, std::unique_ptr<int> *a2)
{
 std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data(&this->_M_t, &a2->_M_t);
}


/* Function: _ZNK8RTTIBase7getTypeEv @ 0x3FE6 */
int RTTIBase::getType(const RTTIBase *)
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
void RTTIBase::RTTIBase(RTTIBase *)
{
 this->_vptr_RTTIBase = (int (**)(...))off_8888;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x4068 */
void RTTIBase::~RTTIBase(RTTIBase *)
{
 this->_vptr_RTTIBase = (int (**)(...))off_8888;
}


/* Function: _ZN8RTTIBaseD0Ev @ 0x4086 */
void RTTIBase::~RTTIBase(RTTIBase *)
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
 std::__uniq_ptr_data<int,std::default_delete<int>,true,true> *const this,
 std::__uniq_ptr_impl<int,std::default_delete<int> >::pointer a2)
{
 std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(this, a2);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi @ 0x413C */
void std::unique_ptr<int>::unique_ptr<std::default_delete<int>,void>(
 std::unique_ptr<int> *const this,
 std::unique_ptr<int>::pointer __p)
{
 ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(&this->_M_t, __p);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x4166 */
void std::unique_ptr<int>::~unique_ptr(std::unique_ptr<int> *const this)
{
 std::unique_ptr<int>::deleter_type *deleter; // rbx
 int **v2; // rax
 std::__uniq_ptr_impl<int,std::default_delete<int> >::pointer *__ptr; // [rsp+18h] [rbp-18h]

 __ptr = std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(&this->_M_t);
 if ( *__ptr )
 {
 deleter = std::unique_ptr<int>::get_deleter(this);
 v2 = std::move<int *&>(__ptr);
 std::default_delete<int>::operator()(deleter, *v2);
 }
 *__ptr = 0;
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv @ 0x41CE */
std::__add_lvalue_reference_helper<int,true>::type std::unique_ptr<int>::operator*(
 const std::unique_ptr<int> *const this)
{
 return std::unique_ptr<int>::get(this);
}


/* Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ @ 0x41F3 */
std::remove_reference<std::unique_ptr<int>&>::type * std::move<std::unique_ptr<int>&>(
 std::unique_ptr<int> *__t)
{
 return __t;
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2EOS3_ @ 0x4206 */
void std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_Tuple_impl(
 std::_Tuple_impl<0,int*,std::default_delete<int> > *const this,
 std::_Tuple_impl<0,int*,std::default_delete<int> > *a2)
{
 std::_Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl(this, a2);
 *(unsigned long long *)&this->std::_Tuple_impl<1,std::default_delete<int> >::std::_Head_base<1,std::default_delete<int>,true>::_M_head_impl.gap0 = *(unsigned long long *)&a2->std::_Tuple_impl<1,std::default_delete<int> >::std::_Head_base<1,std::default_delete<int>,true>::_M_head_impl.gap0;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_ @ 0x423E */
void std::tuple<int *,std::default_delete<int>>::tuple(
 std::tuple<int*,std::default_delete<int> > *const this,
 std::tuple<int*,std::default_delete<int> > *a2)
{
 std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_Tuple_impl(this, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_ @ 0x4268 */
void std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(
 std::__uniq_ptr_impl<int,std::default_delete<int> > *const this,
 std::__uniq_ptr_impl<int,std::default_delete<int> > *__u)
{
 std::tuple<int*,std::default_delete<int> > *v2; // rax

 v2 = std::move<std::tuple<int *,std::default_delete<int>> &>(&__u->_M_t);
 std::tuple<int *,std::default_delete<int>>::tuple(&this->_M_t, v2);
 *std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(__u) = 0;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi @ 0x42B2 */
void ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(
 std::__uniq_ptr_data<int,std::default_delete<int []>,true,true> *const this,
 std::__uniq_ptr_impl<int,std::default_delete<int []> >::pointer a2)
{
 std::__uniq_ptr_impl<int,std::default_delete<int []>>::__uniq_ptr_impl(this, a2);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ @ 0x42DC */
void std::unique_ptr<int []>::unique_ptr<int *,std::default_delete<int []>,void,bool>(
 std::unique_ptr<int []> *const this,
 int *__p)
{
 ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(&this->_M_t, __p);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x4306 */
void std::unique_ptr<int []>::~unique_ptr(std::unique_ptr<int []> *const this)
{
 std::unique_ptr<int []>::deleter_type *deleter; // rax
 std::__uniq_ptr_impl<int,std::default_delete<int []> >::pointer *__ptr; // [rsp+18h] [rbp-8h]

 __ptr = std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(&this->_M_t);
 if ( *__ptr )
 {
 deleter = std::unique_ptr<int []>::get_deleter(this);
 std::default_delete<int []>::operator()<int>(deleter, *__ptr);
 }
 *__ptr = 0;
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEm @ 0x4362 */
std::__add_lvalue_reference_helper<int,true>::type std::unique_ptr<int []>::operator[](
 const std::unique_ptr<int []> *const this,
 std::size_t __i)
{
 return &std::unique_ptr<int []>::get(this)[__i];
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi @ 0x439A */
void std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(
 std::__uniq_ptr_impl<int,std::default_delete<int> > *const this,
 std::__uniq_ptr_impl<int,std::default_delete<int> >::pointer __p)
{
 std::tuple<int *,std::default_delete<int>>::tuple<true,true>(&this->_M_t);
 *std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(this) = __p;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x43D6 */
std::__uniq_ptr_impl<int,std::default_delete<int> >::pointer * std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(
 std::__uniq_ptr_impl<int,std::default_delete<int> > *const this)
{
 return std::get<0ul,int *,std::default_delete<int>>(&this->_M_t);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv @ 0x43F4 */
std::unique_ptr<int>::deleter_type * std::unique_ptr<int>::get_deleter(std::unique_ptr<int> *const this)
{
 return std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter(&this->_M_t);
}


/* Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ @ 0x4412 */
std::remove_reference<int*&>::type * std::move<int *&>(int **__t)
{
 return __t;
}


/* Function: _ZNKSt14default_deleteIiEclEPi @ 0x4424 */
void std::default_delete<int>::operator()(const std::default_delete<int> *const this, int *__ptr)
{
 if ( __ptr )
 operator delete(__ptr, 4u);
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv @ 0x4452 */
std::unique_ptr<int>::pointer std::unique_ptr<int>::get(const std::unique_ptr<int> *const this)
{
 return std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(&this->_M_t);
}


/* Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ @ 0x4470 */
std::remove_reference<std::tuple<int*,std::default_delete<int> >&>::type * std::move<std::tuple<int *,std::default_delete<int>> &>(
 std::tuple<int*,std::default_delete<int> > *__t)
{
 return __t;
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2EOS2_ @ 0x4482 */
void std::_Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl(
 std::_Tuple_impl<1,std::default_delete<int> > *const this,
 std::_Tuple_impl<1,std::default_delete<int> > *__in)
{
 ;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi @ 0x4496 */
void std::__uniq_ptr_impl<int,std::default_delete<int []>>::__uniq_ptr_impl(
 std::__uniq_ptr_impl<int,std::default_delete<int []> > *const this,
 std::__uniq_ptr_impl<int,std::default_delete<int []> >::pointer __p)
{
 std::tuple<int *,std::default_delete<int []>>::tuple<true,true>(&this->_M_t);
 *std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(this) = __p;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x44D2 */
std::__uniq_ptr_impl<int,std::default_delete<int []> >::pointer * std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(
 std::__uniq_ptr_impl<int,std::default_delete<int []> > *const this)
{
 return std::get<0ul,int *,std::default_delete<int []>>(&this->_M_t);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv @ 0x44F0 */
std::unique_ptr<int []>::deleter_type * std::unique_ptr<int []>::get_deleter(
 std::unique_ptr<int []> *const this)
{
 return std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_deleter(&this->_M_t);
}


/* Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsrSt14is_convertibleIPA_T_PS0_E5valueEvE4typeEPS5_ @ 0x450E */
void std::default_delete<int []>::operator()<int>(const std::default_delete<int []> *const this, int *__ptr)
{
 if ( __ptr )
 operator delete[](__ptr);
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv @ 0x4538 */
std::unique_ptr<int []>::pointer std::unique_ptr<int []>::get(const std::unique_ptr<int []> *const this)
{
 return std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(&this->_M_t);
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv @ 0x4556 */
void std::tuple<int *,std::default_delete<int>>::tuple<true,true>(
 std::tuple<int*,std::default_delete<int> > *const this)
{
 std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_Tuple_impl(this);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x4575 */
std::__tuple_element_t * std::get<0ul,int *,std::default_delete<int>>(
 std::tuple<int*,std::default_delete<int> > *__t)
{
 return std::__get_helper<0ul,int *,std::default_delete<int>>(__t);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv @ 0x4594 */
std::default_delete<int> * std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter(
 std::__uniq_ptr_impl<int,std::default_delete<int> > *const this)
{
 return (std::default_delete<int> *)std::get<1ul,int *,std::default_delete<int>>(&this->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x45B2 */
std::__uniq_ptr_impl<int,std::default_delete<int> >::pointer std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(
 const std::__uniq_ptr_impl<int,std::default_delete<int> > *const this)
{
 return *std::get<0ul,int *,std::default_delete<int>>(&this->_M_t);
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv @ 0x45D4 */
void std::tuple<int *,std::default_delete<int []>>::tuple<true,true>(
 std::tuple<int*,std::default_delete<int []> > *const this)
{
 std::_Tuple_impl<0ul,int *,std::default_delete<int []>>::_Tuple_impl(this);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x45F3 */
std::__tuple_element_t_0 * std::get<0ul,int *,std::default_delete<int []>>(
 std::tuple<int*,std::default_delete<int []> > *__t)
{
 return std::__get_helper<0ul,int *,std::default_delete<int []>>(__t);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv @ 0x4612 */
std::default_delete<int []> * std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_deleter(
 std::__uniq_ptr_impl<int,std::default_delete<int []> > *const this)
{
 return (std::default_delete<int []> *)std::get<1ul,int *,std::default_delete<int []>>(&this->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x4630 */
std::__uniq_ptr_impl<int,std::default_delete<int []> >::pointer std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(
 const std::__uniq_ptr_impl<int,std::default_delete<int []> > *const this)
{
 return *std::get<0ul,int *,std::default_delete<int []>>(&this->_M_t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2Ev @ 0x4652 */
void std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_Tuple_impl(
 std::_Tuple_impl<0,int*,std::default_delete<int> > *const this)
{
 std::_Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl(this);
 std::_Head_base<0ul,int *,false>::_Head_base((std::_Head_base<0,int*,false> *const)this);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x467D */
int ** std::__get_helper<0ul,int *,std::default_delete<int>>(
 std::_Tuple_impl<0,int*,std::default_delete<int> > *__t)
{
 return std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_M_head(__t);
}


/* Function: _ZSt3getILm1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x469B */
std::__tuple_element_t * std::get<1ul,int *,std::default_delete<int>>(
 std::tuple<int*,std::default_delete<int> > *__t)
{
 return (std::__tuple_element_t *)std::__get_helper<1ul,std::default_delete<int>>(__t);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ @ 0x46B9 */
const std::__tuple_element_t * std::get<0ul,int *,std::default_delete<int>>(
 const std::tuple<int*,std::default_delete<int> > *__t)
{
 return std::__get_helper<0ul,int *,std::default_delete<int>>(__t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEEC2Ev @ 0x46D8 */
void std::_Tuple_impl<0ul,int *,std::default_delete<int []>>::_Tuple_impl(
 std::_Tuple_impl<0,int*,std::default_delete<int []> > *const this)
{
 std::_Tuple_impl<1ul,std::default_delete<int []>>::_Tuple_impl(this);
 std::_Head_base<0ul,int *,false>::_Head_base((std::_Head_base<0,int*,false> *const)this);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x4703 */
int ** std::__get_helper<0ul,int *,std::default_delete<int []>>(
 std::_Tuple_impl<0,int*,std::default_delete<int []> > *__t)
{
 return std::_Tuple_impl<0ul,int *,std::default_delete<int []>>::_M_head(__t);
}


/* Function: _ZSt3getILm1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x4721 */
std::__tuple_element_t * std::get<1ul,int *,std::default_delete<int []>>(
 std::tuple<int*,std::default_delete<int []> > *__t)
{
 return (std::__tuple_element_t *)std::__get_helper<1ul,std::default_delete<int []>>(__t);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ @ 0x473F */
const std::__tuple_element_t_0 * std::get<0ul,int *,std::default_delete<int []>>(
 const std::tuple<int*,std::default_delete<int []> > *__t)
{
 return std::__get_helper<0ul,int *,std::default_delete<int []>>(__t);
}


/* Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE @ 0x475D */
int ** std::forward<int *&>(std::remove_reference<int*&>::type *__t)
{
 return __t;
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2Ev @ 0x4770 */
void std::_Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl(
 std::_Tuple_impl<1,std::default_delete<int> > *const this)
{
 std::_Head_base<1ul,std::default_delete<int>,true>::_Head_base(this);
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EEC2Ev @ 0x4790 */
void std::_Head_base<0ul,int *,false>::_Head_base(std::_Head_base<0,int*,false> *const this)
{
 this->_M_head_impl = 0;
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERS3_ @ 0x47AA */
int ** std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_M_head(
 std::_Tuple_impl<0,int*,std::default_delete<int> > *__t)
{
 return std::_Head_base<0ul,int *,false>::_M_head((std::_Head_base<0,int*,false> *)__t);
}


/* Function: _ZSt12__get_helperILm1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x47C8 */
std::default_delete<int> * std::__get_helper<1ul,std::default_delete<int>>(
 std::_Tuple_impl<1,std::default_delete<int> > *__t)
{
 return std::_Tuple_impl<1ul,std::default_delete<int>>::_M_head(__t);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x47E6 */
int *const * std::__get_helper<0ul,int *,std::default_delete<int>>(
 const std::_Tuple_impl<0,int*,std::default_delete<int> > *__t)
{
 return std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEEC2Ev @ 0x4804 */
void std::_Tuple_impl<1ul,std::default_delete<int []>>::_Tuple_impl(
 std::_Tuple_impl<1,std::default_delete<int []> > *const this)
{
 std::_Head_base<1ul,std::default_delete<int []>,true>::_Head_base(this);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ @ 0x4823 */
int ** std::_Tuple_impl<0ul,int *,std::default_delete<int []>>::_M_head(
 std::_Tuple_impl<0,int*,std::default_delete<int []> > *__t)
{
 return std::_Head_base<0ul,int *,false>::_M_head((std::_Head_base<0,int*,false> *)__t);
}


/* Function: _ZSt12__get_helperILm1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x4841 */
std::default_delete<int []> * std::__get_helper<1ul,std::default_delete<int []>>(
 std::_Tuple_impl<1,std::default_delete<int []> > *__t)
{
 return std::_Tuple_impl<1ul,std::default_delete<int []>>::_M_head(__t);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x485F */
int *const * std::__get_helper<0ul,int *,std::default_delete<int []>>(
 const std::_Tuple_impl<0,int*,std::default_delete<int []> > *__t)
{
 return std::_Tuple_impl<0ul,int *,std::default_delete<int []>>::_M_head(__t);
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EEC2IRS0_EEOT_ @ 0x487E */
void std::_Head_base<0ul,int *,false>::_Head_base<int *&>(std::_Head_base<0,int*,false> *const this, int **__h)
{
 this->_M_head_impl = *std::forward<int *&>(__h);
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EEC2Ev @ 0x48AC */
void std::_Head_base<1ul,std::default_delete<int>,true>::_Head_base(
 std::_Head_base<1,std::default_delete<int>,true> *const this)
{
 ;
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_ @ 0x48BB */
int ** std::_Head_base<0ul,int *,false>::_M_head(std::_Head_base<0,int*,false> *__b)
{
 return &__b->_M_head_impl;
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEE7_M_headERS2_ @ 0x48CD */
std::default_delete<int> * std::_Tuple_impl<1ul,std::default_delete<int>>::_M_head(
 std::_Tuple_impl<1,std::default_delete<int> > *__t)
{
 return std::_Head_base<1ul,std::default_delete<int>,true>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERKS3_ @ 0x48EB */
int *const * std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_M_head(
 const std::_Tuple_impl<0,int*,std::default_delete<int> > *__t)
{
 return std::_Head_base<0ul,int *,false>::_M_head((const std::_Head_base<0,int*,false> *)__t);
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EEC2Ev @ 0x490A */
void std::_Head_base<1ul,std::default_delete<int []>,true>::_Head_base(
 std::_Head_base<1,std::default_delete<int []>,true> *const this)
{
 ;
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEE7_M_headERS3_ @ 0x4919 */
std::default_delete<int []> * std::_Tuple_impl<1ul,std::default_delete<int []>>::_M_head(
 std::_Tuple_impl<1,std::default_delete<int []> > *__t)
{
 return std::_Head_base<1ul,std::default_delete<int []>,true>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ @ 0x4937 */
int *const * std::_Tuple_impl<0ul,int *,std::default_delete<int []>>::_M_head(
 const std::_Tuple_impl<0,int*,std::default_delete<int []> > *__t)
{
 return std::_Head_base<0ul,int *,false>::_M_head((const std::_Head_base<0,int*,false> *)__t);
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EE7_M_headERS2_ @ 0x4955 */
std::default_delete<int> * std::_Head_base<1ul,std::default_delete<int>,true>::_M_head(
 std::_Head_base<1,std::default_delete<int>,true> *__b)
{
 return &__b->_M_head_impl;
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_ @ 0x4967 */
int *const * std::_Head_base<0ul,int *,false>::_M_head(const std::_Head_base<0,int*,false> *__b)
{
 return &__b->_M_head_impl;
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EE7_M_headERS3_ @ 0x4979 */
std::default_delete<int []> * std::_Head_base<1ul,std::default_delete<int []>,true>::_M_head(
 std::_Head_base<1,std::default_delete<int []>,true> *__b)
{
 return &__b->_M_head_impl;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x498C */
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *const this)
{
 this->_vptr_RTTIBase = (int (**)(...))off_8838;
 RTTIBase::~RTTIBase(this);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x49BA */
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *const this)
{
 RTTIDerivedB::~RTTIDerivedB(this);
 operator delete(this, 8u);
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x49EA */
void RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *const this)
{
 this->_vptr_RTTIBase = (int (**)(...))off_8860;
 RTTIBase::~RTTIBase(this);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x4A18 */
void RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *const this)
{
 RTTIDerivedA::~RTTIDerivedA(this);
 operator delete(this, 8u);
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x4A48 */
void DiamondDerived::~DiamondDerived(DiamondDerived *const this)
{
 this->_vptr_MiddleA = (int (**)(...))&off_88B8;
 this->_vptr_MiddleB = (int (**)(...))&off_8920;
 *((unsigned long long *)&this->dataA + 1) = &off_88E8;
 MiddleB::~MiddleB((MiddleB *const)(&this->dataA + 2), (const void **const)&off_8950);
 MiddleA::~MiddleA(this, (const void **const)&_vtt_parm);
 VirtualBase::~VirtualBase((VirtualBase *const)&this->MiddleB);
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x4ACA */
void `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this - 16));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x4AD7 */
void `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this + *((unsigned long long *)this->_vptr_MiddleA - 4)));
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x4AE8 */
void DiamondDerived::~DiamondDerived(DiamondDerived *const this)
{
 DiamondDerived::~DiamondDerived(this);
 operator delete(this, 0x30u);
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
void MultiDerived::~MultiDerived(MultiDerived *const this)
{
 this->_vptr_BaseA = (int (**)(...))&off_8A78;
 this->_vptr_BaseB = (int (**)(...))&off_8AA8;
 BaseB::~BaseB(&this->BaseB);
 BaseA::~BaseA(this);
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x4B7A */
void `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
 MultiDerived::~MultiDerived((MultiDerived *)((char *)this - 16));
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x4B84 */
void MultiDerived::~MultiDerived(MultiDerived *const this)
{
 MultiDerived::~MultiDerived(this);
 operator delete(this, 0x20u);
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x4BB3 */
void `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
 MultiDerived::~MultiDerived((MultiDerived *)((char *)this - 16));
}


/* Function: _ZN7DerivedD2Ev @ 0x4BBE */
void Derived::~Derived(Derived *const this)
{
 this->_vptr_Base = (int (**)(...))&off_8B20;
 Base::~Base(this);
}


/* Function: _ZN7DerivedD0Ev @ 0x4BEC */
void Derived::~Derived(Derived *const this)
{
 Derived::~Derived(this);
 operator delete(this, 0x10u);
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
