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

/* External function declarations */
unsigned long long __readfsqword(unsigned int offset);
void *operator new(size_t size);
void *operator new[](size_t size);
void operator_delete(void *ptr, size_t size);
void operator_delete_array(void *ptr);
void *operator_delete(void *ptr);

/* External variable declarations */
extern void *off_8B50;
extern void *off_8B20;
extern void *off_8AF8;
extern void *off_8AD0;
extern void *off_8A78;
extern void *off_8AA8;
extern void *off_8A50;
extern void *off_88B8;
extern void *off_8920;
extern void *off_88E8;
extern void *off_8950;
extern void *off_8888;
extern void *off_8860;
extern void *off_8838;
extern void *_vtt_parm;
extern void *std___ioinit;
extern void *_dso_handle;
extern int LifecycleClass_instance_count;
extern const char *s;
extern const char *format;
extern const char *aCppL302D;
extern const char *aCppL303D;
extern const char *aCppL304D;
extern const char *aCppL305D;
extern const char *aCppL306D;
extern const char *aCppL307D;
extern const char *aCppL308D;
extern const char *aCppL309D;
extern const struct __class_type_info typeinfo_for_RTTIBase;
extern const struct __class_type_info typeinfo_for_RTTIDerivedA;
extern const struct __class_type_info typeinfo_for_RTTIDerivedB;

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
typedef struct std_type_info std_type_info;
typedef struct std_unique_ptr_int std_unique_ptr_int;
typedef struct std_unique_ptr_int_array std_unique_ptr_int_array;
typedef struct std_unique_ptr_int_test_cpp_smart_ptr_lambda std_unique_ptr_int_test_cpp_smart_ptr_lambda;
typedef struct std_lambda_capture_test_cpp_lambda std_lambda_capture_test_cpp_lambda;
typedef struct std_deleter_test_cpp_smart_ptr_lambda std_deleter_test_cpp_smart_ptr_lambda;
typedef struct std_uniq_ptr_data_int_default_delete_true_true std_uniq_ptr_data_int_default_delete_true_true;
typedef struct std_uniq_ptr_data_int_array_default_delete std_uniq_ptr_data_int_array_default_delete;
typedef struct std_uniq_ptr_data_int_test_cpp_smart_ptr_lambda_true_false std_uniq_ptr_data_int_test_cpp_smart_ptr_lambda_true_false;
typedef struct std_uniq_ptr_impl_int_default_delete_int std_uniq_ptr_impl_int_default_delete_int;
typedef struct std_uniq_ptr_impl_int_default_delete_int_array std_uniq_ptr_impl_int_default_delete_int_array;
typedef struct std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda;
typedef struct std_tuple_int_default_delete_int std_tuple_int_default_delete_int;
typedef struct std_tuple_int_default_delete_int_array std_tuple_int_default_delete_int_array;
typedef struct std_tuple_int_test_cpp_smart_ptr_lambda std_tuple_int_test_cpp_smart_ptr_lambda;
typedef struct std_Tuple_impl_0_int_default_delete_int std_Tuple_impl_0_int_default_delete_int;
typedef struct std_Tuple_impl_0_int_default_delete_int_array std_Tuple_impl_0_int_default_delete_int_array;
typedef struct std_Tuple_impl_0_int_test_cpp_smart_ptr_lambda std_Tuple_impl_0_int_test_cpp_smart_ptr_lambda;
typedef struct std_Tuple_impl_1_default_delete_int std_Tuple_impl_1_default_delete_int;
typedef struct std_Tuple_impl_1_default_delete_int_array std_Tuple_impl_1_default_delete_int_array;
typedef struct std_Tuple_impl_1_test_cpp_smart_ptr_lambda std_Tuple_impl_1_test_cpp_smart_ptr_lambda;
typedef struct std_Head_base_0_int_false std_Head_base_0_int_false;
typedef struct std_Head_base_1_default_delete_int_true std_Head_base_1_default_delete_int_true;
typedef struct std_Head_base_1_default_delete_int_array_true std_Head_base_1_default_delete_int_array_true;
typedef struct std_Head_base_1_test_cpp_smart_ptr_lambda_true std_Head_base_1_test_cpp_smart_ptr_lambda_true;
typedef struct std_default_delete_int std_default_delete_int;
typedef struct std_default_delete_int_array std_default_delete_int_array;
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;
typedef struct $44B1EA910F358000232221CCB0AF3F67 $44B1EA910F358000232221CCB0AF3F67;

/* Struct definitions */
struct SimpleClass {
    int value;
    char name[32];
};

struct LifecycleClass {
    size_t size;
    int *data;
};

struct Base {
    int (**_vptr_Base)(...);
};

struct Derived {
    int (**_vptr_Base)(...);
    int multiplier;
};

struct BaseA {
    int (**_vptr_BaseA)(...);
};

struct BaseB {
    int (**_vptr_BaseB)(...);
};

struct MultiDerived {
    int (**_vptr_BaseA)(...);
    BaseA BaseA_part;
    BaseB BaseB;
    int (**_vptr_BaseB)(...);
    int dataA;
    int dataB;
};

struct VirtualBase {
    int (**_vptr_VirtualBase)(...);
    int data;
};

struct MiddleA {
    int (**_vptr_MiddleA)(...);
    int dataA;
};

struct MiddleB {
    int (**_vptr_MiddleB)(...);
    int dataB;
};

struct DiamondDerived {
    int (**_vptr_MiddleA)(...);
    MiddleA MiddleA_part;
    VirtualBase MiddleB;
    MiddleB MiddleB_part;
    int (**_vptr_MiddleB)(...);
    int dataA;
    int dataB;
};

struct Point {
    int x;
    int y;
};

struct RTTIBase {
    int (**_vptr_RTTIBase)(...);
};

struct RTTIDerivedA {
    int (**_vptr_RTTIBase)(...);
};

struct RTTIDerivedB {
    int (**_vptr_RTTIBase)(...);
};

struct std_type_info {
    void *_vptr;
    const char *name;
};

struct std_Head_base_0_int_false {
    int *_M_head_impl;
};

struct std_Head_base_1_default_delete_int_true {
    std_default_delete_int *_M_head_impl;
};

struct std_Head_base_1_default_delete_int_array_true {
    std_default_delete_int_array *_M_head_impl;
};

struct std_Head_base_1_test_cpp_smart_ptr_lambda_true {
    void *_M_head_impl;
};

struct std_default_delete_int {
    void *_vptr;
};

struct std_default_delete_int_array {
    void *_vptr;
};

struct std_Tuple_impl_1_default_delete_int {
    std_Head_base_1_default_delete_int_true _M_head_impl;
};

struct std_Tuple_impl_1_default_delete_int_array {
    std_Head_base_1_default_delete_int_array_true _M_head_impl;
};

struct std_Tuple_impl_1_test_cpp_smart_ptr_lambda {
    std_Head_base_1_test_cpp_smart_ptr_lambda_true _M_head_impl;
};

struct std_Tuple_impl_0_int_default_delete_int {
    std_Head_base_0_int_false _M_head_impl;
    std_Tuple_impl_1_default_delete_int _M_rest;
};

struct std_Tuple_impl_0_int_default_delete_int_array {
    std_Head_base_0_int_false _M_head_impl;
    std_Tuple_impl_1_default_delete_int_array _M_rest;
};

struct std_Tuple_impl_0_int_test_cpp_smart_ptr_lambda {
    std_Head_base_0_int_false _M_head_impl;
    std_Tuple_impl_1_test_cpp_smart_ptr_lambda _M_rest;
};

struct std_tuple_int_default_delete_int {
    std_Tuple_impl_0_int_default_delete_int _M_t;
};

struct std_tuple_int_default_delete_int_array {
    std_Tuple_impl_0_int_default_delete_int_array _M_t;
};

struct std_tuple_int_test_cpp_smart_ptr_lambda {
    std_Tuple_impl_0_int_test_cpp_smart_ptr_lambda _M_t;
};

struct std_uniq_ptr_impl_int_default_delete_int {
    std_tuple_int_default_delete_int _M_t;
};

struct std_uniq_ptr_impl_int_default_delete_int_array {
    std_tuple_int_default_delete_int_array _M_t;
};

struct std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda {
    std_tuple_int_test_cpp_smart_ptr_lambda _M_t;
};

struct std_uniq_ptr_data_int_default_delete_true_true {
    std_uniq_ptr_impl_int_default_delete_int _M_t;
};

struct std_uniq_ptr_data_int_array_default_delete {
    std_uniq_ptr_impl_int_default_delete_int_array _M_t;
};

struct std_uniq_ptr_data_int_test_cpp_smart_ptr_lambda_true_false {
    std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda _M_t;
};

struct std_unique_ptr_int {
    std_uniq_ptr_data_int_default_delete_true_true _M_t;
};

struct std_unique_ptr_int_array {
    std_uniq_ptr_data_int_array_default_delete _M_t;
};

struct std_unique_ptr_int_test_cpp_smart_ptr_lambda {
    std_uniq_ptr_data_int_test_cpp_smart_ptr_lambda_true_false _M_t;
};

struct std_lambda_capture_test_cpp_lambda {
    int __capture_by_value;
    int *__capture_by_ref;
};

struct std_deleter_test_cpp_smart_ptr_lambda {
    unsigned char gap0;
};

struct Container_int {
    int size;
    int data[10];
};

struct Container_double {
    int size;
    double data[10];
};

struct $44B1EA910F358000232221CCB0AF3F67 {
    unsigned char gap0;
};

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
 Point_Point(&p1, 1, 2);
 Point_Point(&p2, 3, 4);
 p3 = Point_operator_plus(&p1, &p2);
 eq = Point_operator_eq(&p1, &p2);
 Point_operator_inc(&p3);
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
 int b; // [rsp+8h] [rbp-18h] BYREF
 int r1; // [rsp+Ch] [rbp-14h]
 double r2; // [rsp+10h] [rbp-10h]
 unsigned long long v5; // [rsp+18h] [rbp-8h]

 v5 = __readfsqword(0x28u);
 r1 = template_max_int(3, 7);
 r2 = template_max_double(2.5, 1.5);
 a = 10;
 b = 20;
 template_swap<int>(&a, &b);
 return a + r1 + (int)r2 + b;
}


/* Function: _Z23test_cpp_template_classv @ 0x2906 */
int test_cpp_template_class()
{
 int r1; // [rsp+0h] [rbp-A0h]
 int r2; // [rsp+4h] [rbp-9Ch]
 Container<int> int_container; // [rsp+10h] [rbp-90h] BYREF
 Container<double> double_container; // [rsp+40h] [rbp-60h] BYREF
 unsigned long long v5; // [rsp+98h] [rbp-8h]

 v5 = __readfsqword(0x28u);
 Container_int_Container(&int_container);
 Container_int_push(&int_container, 10);
 Container_int_push(&int_container, 20);
 Container_int_push(&int_container, 30);
 r1 = Container_int_get(&int_container, 0);
 r2 = Container_int_getSize(&int_container);
 Container_double_Container(&double_container);
 Container_double_push(&double_container, 3.14);
 return r2 + r1 + (int)Container_double_get(&double_container, 0);
}


/* Function: _ZZ15test_cpp_lambdavENKUliE_clEi @ 0x2A12 */
int test_cpp_lambda_lambda1_operator()(
 const std_lambda_capture_test_cpp_lambda *__closure,
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
 return test_cpp_lambda_lambda1_operator()(
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
 __cxa_throw(exception, (void *)&typeinfo_for_int, 0);
}


/* Function: _ZZ18test_cpp_smart_ptrvENKUlPiE_clES_ @ 0x2BE4 */
void test_cpp_smart_ptr_lambda1_operator()(
 const std_deleter_test_cpp_smart_ptr_lambda *__closure,
 int *p)
{
 *p = -1;
 if ( p )
 operator_delete(p, 4u);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x2C17 */
int test_cpp_smart_ptr()
{
 int *v0; // rax
 std_unique_ptr_int *v1; // rax
 int *v2; // rdx
 int *v3; // rax
 int v4; // ebx
 $44B1EA910F358000232221CCB0AF3F67 deleter; // [rsp+Bh] [rbp-45h] BYREF
 int r1; // [rsp+Ch] [rbp-44h]
 int r2; // [rsp+10h] [rbp-40h]
 int r3; // [rsp+14h] [rbp-3Ch]
 std_unique_ptr_int ptr2; // [rsp+18h] [rbp-38h] BYREF
 std_unique_ptr_int_test_cpp_smart_ptr_lambda ptr3; // [rsp+28h] [rbp-28h] BYREF
 unsigned long long v12; // [rsp+38h] [rbp-18h]

 v12 = __readfsqword(0x28u);
 v0 = (int *)operator new(4u);
 *v0 = 100;
 std_unique_ptr_int_unique_ptr_default_delete_int_void(&ptr2, v0);
 *std_unique_ptr_int_operator_deref(&ptr2) = 200;
 v1 = std_move_unique_ptr_int(&ptr2);
 std_unique_ptr_int_unique_ptr((std_unique_ptr_int *const)&ptr2._M_t._M_t._M_head_impl, v1);
 r1 = *std_unique_ptr_int_operator_deref((const std_unique_ptr_int *const)&ptr2._M_t._M_t._M_head_impl);
 v2 = (int *)operator new[](0x14u);
 *v2 = 1;
 v2[1] = 2;
 v2[2] = 3;
 v2[3] = 4;
 v2[4] = 5;
 std_unique_ptr_int_array_unique_ptr_int_ptr_default_delete_int_array_void_bool(
 (std_unique_ptr_int_array *const)&ptr3,
 v2);
 r2 = *std_unique_ptr_int_array_operator_index((const std_unique_ptr_int_array *const)&ptr3, 2u);
 v3 = (int *)operator new(4u);
 *v3 = 500;
 std_unique_ptr_int_test_cpp_smart_ptr_lambda_unique_ptr(
 (std_unique_ptr_int_test_cpp_smart_ptr_lambda *const)&ptr3._M_t._M_t._M_head_impl,
 v3,
 (const struct {unsigned char gap0;} *)&deleter);
 r3 = *std_unique_ptr_int_test_cpp_smart_ptr_lambda_operator_deref((const std_unique_ptr_int_test_cpp_smart_ptr_lambda *const)&ptr3._M_t._M_t._M_head_impl);
 v4 = r2 + r1 + r3;
 std_unique_ptr_int_test_cpp_smart_ptr_lambda_destructor((std_unique_ptr_int_test_cpp_smart_ptr_lambda *const)&ptr3._M_t._M_t._M_head_impl);
 std_unique_ptr_int_array_destructor((std_unique_ptr_int_array *const)&ptr3);
 std_unique_ptr_int_destructor((std_unique_ptr_int *const)&ptr2._M_t._M_t._M_head_impl);
 std_unique_ptr_int_destructor(&ptr2);
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
 if ( std_type_info_operator_eq(
 *((const std_type_info *const *)obj1->_vptr_RTTIBase - 1),
 (const std_type_info *)&typeinfo_for_RTTIDerivedA) )
 {
 result = 10;
 }
 if ( !v1 )
 __cxa_bad_typeid();
 if ( std_type_info_operator_eq(
 *((const std_type_info *const *)v1->_vptr_RTTIBase - 1),
 (const std_type_info *)&typeinfo_for_RTTIDerivedB) )
 {
 result += 20;
 }
 v2 = (const RTTIDerivedA *)__dynamic_cast(
 obj1,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedA,
 0);
 if ( v2 )
 result += RTTIDerivedA_derivedA_data(v2);
 v3 = (const RTTIDerivedB *)__dynamic_cast(
 v1,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedB,
 0);
 if ( v3 )
 result += RTTIDerivedB_derivedB_data(v3);
 v4 = std_type_info_name(*((const std_type_info *const *)obj1->_vptr_RTTIBase - 1));
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


/* Function: std_uniq_ptr_data_int_test_cpp_smart_ptr_lambda_true_false @ 0x30E2 */
void std_uniq_ptr_data_int_test_cpp_smart_ptr_lambda_true_false(
 std_uniq_ptr_data_int_test_cpp_smart_ptr_lambda_true_false *this_ptr,
 int **a2,
 const std_deleter_test_cpp_smart_ptr_lambda *a3)
{
 std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_uniq_ptr_impl(&this_ptr->_M_t, a2, a3);
}


/* Function: std_unique_ptr_int_test_cpp_smart_ptr_lambda_unique_ptr @ 0x3110 */
void std_unique_ptr_int_test_cpp_smart_ptr_lambda_unique_ptr(
 std_unique_ptr_int_test_cpp_smart_ptr_lambda *this_ptr,
 int *__p,
 std_deleter_test_cpp_smart_ptr_lambda *__d)
{
 std_uniq_ptr_data_int_test_cpp_smart_ptr_lambda_true_false(&this_ptr->_M_t, &__p, __d);
}


/* Function: std_unique_ptr_int_test_cpp_smart_ptr_lambda_destructor @ 0x313E */
void std_unique_ptr_int_test_cpp_smart_ptr_lambda_destructor(
 std_unique_ptr_int_test_cpp_smart_ptr_lambda *this_ptr)
{
 std_deleter_test_cpp_smart_ptr_lambda *deleter;
 int **v2;
 int **__ptr;

 __ptr = std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_M_ptr(&this_ptr->_M_t._M_t);
 if ( *__ptr )
 {
 deleter = std_unique_ptr_int_test_cpp_smart_ptr_lambda_get_deleter(this_ptr);
 v2 = __ptr;
 test_cpp_smart_ptr_lambda1_operator()(deleter, *v2);
 }
 *__ptr = 0;
}


/* Function: std_unique_ptr_int_test_cpp_smart_ptr_lambda_operator_deref @ 0x31A2 */
int *std_unique_ptr_int_test_cpp_smart_ptr_lambda_operator_deref(
 const std_unique_ptr_int_test_cpp_smart_ptr_lambda *this_ptr)
{
 return std_unique_ptr_int_test_cpp_smart_ptr_lambda_get(this_ptr);
}


/* Function: std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_uniq_ptr_impl @ 0x31C4 */
void std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_uniq_ptr_impl(
 std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda *this_ptr,
 int **__p,
 std_deleter_test_cpp_smart_ptr_lambda *__d)
{
 std_tuple_int_test_cpp_smart_ptr_lambda_tuple_default(&this_ptr->_M_t);
 *std_get_0ul_int_test_cpp_smart_ptr_lambda(&this_ptr->_M_t) = __p;
 *std_get_1ul_int_test_cpp_smart_ptr_lambda(&this_ptr->_M_t) = __d;
}


/* Function: std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_M_ptr @ 0x3202 */
int ** std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_M_ptr(
 std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda *this_ptr)
{
 return std_get_0ul_int_test_cpp_smart_ptr_lambda(&this_ptr->_M_t);
}


/* Function: std_unique_ptr_int_test_cpp_smart_ptr_lambda_get_deleter @ 0x321C */
std_deleter_test_cpp_smart_ptr_lambda * std_unique_ptr_int_test_cpp_smart_ptr_lambda_get_deleter(
 std_unique_ptr_int_test_cpp_smart_ptr_lambda *this_ptr)
{
 return std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_M_deleter(&this_ptr->_M_t._M_t);
}


/* Function: std_unique_ptr_int_test_cpp_smart_ptr_lambda_get @ 0x3236 */
int * std_unique_ptr_int_test_cpp_smart_ptr_lambda_get(
 const std_unique_ptr_int_test_cpp_smart_ptr_lambda *this_ptr)
{
 return std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_M_ptr_const(&this_ptr->_M_t._M_t);
}


/* Function: std_forward_test_cpp_smart_ptr_lambda_const @ 0x3250 */
const std_deleter_test_cpp_smart_ptr_lambda * std_forward_test_cpp_smart_ptr_lambda_const(
 std_deleter_test_cpp_smart_ptr_lambda *__t)
{
 return __t;
}


/* Function: std_tuple_int_test_cpp_smart_ptr_lambda_tuple @ 0x325E */
void std_tuple_int_test_cpp_smart_ptr_lambda_tuple(
 std_tuple_int_test_cpp_smart_ptr_lambda *this_ptr,
 int **__a1,
 const std_deleter_test_cpp_smart_ptr_lambda *__a2)
{
 std_Tuple_impl_0ul_int_test_cpp_smart_ptr_lambda_Tuple_impl(&this_ptr->_M_t, __a1, __a2);
}


/* Function: std_get_0ul_int_test_cpp_smart_ptr_lambda @ 0x32AC */
int ** std_get_0ul_int_test_cpp_smart_ptr_lambda(
 std_tuple_int_test_cpp_smart_ptr_lambda *__t)
{
 return std__get_helper_0ul_int_test_cpp_smart_ptr_lambda(&__t->_M_t);
}


/* Function: std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_M_deleter @ 0x32C6 */
std_deleter_test_cpp_smart_ptr_lambda * std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_M_deleter(
 std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda *this_ptr)
{
 return std_get_1ul_int_test_cpp_smart_ptr_lambda(&this_ptr->_M_t);
}


/* Function: std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_M_ptr_const @ 0x32E0 */
int * std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_M_ptr_const(
 const std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda *this_ptr)
{
 return *std_get_0ul_int_test_cpp_smart_ptr_lambda_const(&this_ptr->_M_t);
}


/* Function: std_Tuple_impl_0ul_int_test_cpp_smart_ptr_lambda_Tuple_impl @ 0x32FE */
void std_Tuple_impl_0ul_int_test_cpp_smart_ptr_lambda_Tuple_impl(
 std_Tuple_impl_0_int_test_cpp_smart_ptr_lambda *this_ptr,
 int **__head,
 const std_deleter_test_cpp_smart_ptr_lambda *a3)
{
 std_Head_base_0ul_int_false_Head_base_int_ptr(&this_ptr->_M_head_impl, __head);
 std_Tuple_impl_1ul_test_cpp_smart_ptr_lambda_Tuple_impl(&this_ptr->_M_rest, a3);
}


/* Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x3353 */
int ** std__get_helper_0ul_int_test_cpp_smart_ptr_lambda(
 std_Tuple_impl_0_int_test_cpp_smart_ptr_lambda *__t)
{
 return std_Tuple_impl_0ul_int_test_cpp_smart_ptr_lambda_M_head(__t);
}


/* Function: _ZSt3getILm1EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x336D */
std_deleter_test_cpp_smart_ptr_lambda * std_get_1ul_int_test_cpp_smart_ptr_lambda(
 std_tuple_int_test_cpp_smart_ptr_lambda *__t)
{
 return std__get_helper_1_test_cpp_smart_ptr_lambda(&__t->_M_t._M_rest);
}


/* Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ @ 0x3387 */
const int *const * std_get_0ul_int_test_cpp_smart_ptr_lambda_const(
 const std_tuple_int_test_cpp_smart_ptr_lambda *__t)
{
 return std__get_helper_0ul_int_test_cpp_smart_ptr_lambda_const(&__t->_M_t);
}


/* Function: std_Tuple_impl_1ul_test_cpp_smart_ptr_lambda_Tuple_impl @ 0x33A2 */
void std_Tuple_impl_1ul_test_cpp_smart_ptr_lambda_Tuple_impl(
 std_Tuple_impl_1_test_cpp_smart_ptr_lambda *this_ptr,
 const std_deleter_test_cpp_smart_ptr_lambda *__head)
{
 std_Head_base_1ul_test_cpp_smart_ptr_lambda_true_Head_base(&this_ptr->_M_head_impl, __head);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERS2_ @ 0x33C8 */
int ** std_Tuple_impl_0ul_int_test_cpp_smart_ptr_lambda_M_head(
 std_Tuple_impl_0_int_test_cpp_smart_ptr_lambda *__t)
{
 return std_Head_base_0ul_int_false_M_head(&__t->_M_head_impl);
}


/* Function: std::__get_helper_1_test_cpp_smart_ptr()::_lambda(int_)___ @ 0x33E2 */
std_deleter_test_cpp_smart_ptr_lambda * std__get_helper_1_test_cpp_smart_ptr_lambda(
 std_Tuple_impl_1_test_cpp_smart_ptr_lambda *__t)
{
 return std_Tuple_impl_1ul_test_cpp_smart_ptr_lambda_M_head(__t);
}


/* Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x33FC */
int *const * std__get_helper_0ul_int_test_cpp_smart_ptr_lambda_const(
 const std_Tuple_impl_0_int_test_cpp_smart_ptr_lambda *__t)
{
 return std_Tuple_impl_0ul_int_test_cpp_smart_ptr_lambda_M_head_const(__t);
}


/* Function: std_Head_base_1ul_test_cpp_smart_ptr_lambda_true_Head_base @ 0x3416 */
void std_Head_base_1ul_test_cpp_smart_ptr_lambda_true_Head_base(
 std_Head_base_1_test_cpp_smart_ptr_lambda_true *this_ptr,
 const std_deleter_test_cpp_smart_ptr_lambda *__h)
{
 this_ptr->_M_head_impl = (std_deleter_test_cpp_smart_ptr_lambda *)__h;
}


/* Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvEUlPiE_EE7_M_headERS2_ @ 0x3425 */
std_deleter_test_cpp_smart_ptr_lambda * std_Tuple_impl_1ul_test_cpp_smart_ptr_lambda_M_head(
 std_Tuple_impl_1_test_cpp_smart_ptr_lambda *__t)
{
 return std_Head_base_1ul_test_cpp_smart_ptr_lambda_true_M_head(&__t->_M_head_impl);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERKS2_ @ 0x343F */
int *const * std_Tuple_impl_0ul_int_test_cpp_smart_ptr_lambda_M_head_const(
 const std_Tuple_impl_0_int_test_cpp_smart_ptr_lambda *__t)
{
 return std_Head_base_0ul_int_false_M_head_const(&__t->_M_head_impl);
}


/* Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EE7_M_headERS2_ @ 0x3459 */
std_deleter_test_cpp_smart_ptr_lambda * std_Head_base_1ul_test_cpp_smart_ptr_lambda_true_M_head(
 std_Head_base_1_test_cpp_smart_ptr_lambda_true *__b)
{
 return __b->_M_head_impl;
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
const char * std_type_info_name(const std_type_info *this_ptr)
{
 if ( **((unsigned char **)this_ptr + 1) == 42 )
 return (const char *)(*((unsigned long long *)this_ptr + 1) + 1LL);
 else
 return (const char *)*((unsigned long long *)this_ptr + 1);
}


/* Function: _ZNKSt9type_infoeqERKS_ @ 0x350A */
bool std_type_info_operator_eq(const std_type_info *this_ptr, const std_type_info *__arg)
{
 return *((unsigned long long *)this_ptr + 1) == *((unsigned long long *)__arg + 1)
 || **((unsigned char **)this_ptr + 1) != 42 && !strcmp(*((const char **)this_ptr + 1), *((const char **)__arg + 1));
}


/* Function: _ZN11SimpleClassC2EiPKc @ 0x3570 */
void SimpleClass_SimpleClass(SimpleClass *this_ptr, int v, const char *n)
{
 this_ptr->value = v;
 strncpy(this_ptr->name, n, 0x1Fu);
 this_ptr->name[31] = 0;
}


/* Function: _ZNK11SimpleClass8getValueEv @ 0x35B8 */
int SimpleClass_getValue(const SimpleClass *this_ptr)
{
 return this_ptr->value;
}


/* Function: _ZN11SimpleClass8setValueEi @ 0x35CC */
void SimpleClass_setValue(SimpleClass *this_ptr, int v)
{
 this_ptr->value = v;
}


/* Function: _ZNK11SimpleClass7computeEi @ 0x35E8 */
int SimpleClass_compute(const SimpleClass *this_ptr, int x)
{
 int v2; // ebx

 v2 = x * this_ptr->value;
 return v2 + strlen(this_ptr->name);
}


/* Function: _ZN11SimpleClass10getClassIDEv @ 0x3620 */
int SimpleClass_getClassID()
{
 return 4660;
}


/* Function: _ZN14LifecycleClassC2Em @ 0x3630 */
void LifecycleClass_LifecycleClass(LifecycleClass *this_ptr, size_t s)
{
 size_t i; // [rsp+18h] [rbp-8h]

 this_ptr->size = s;
 if ( s > 0x1FFFFFFFFFFFFFFELL )
 __cxa_throw_bad_array_new_length();
 this_ptr->data = (int *)operator_new_array(4 * s);
 for ( i = 0; i < s; ++i )
 this_ptr->data[i] = 10 * i;
 ++LifecycleClass_instance_count;
}


/* Function: _ZN14LifecycleClassD2Ev @ 0x36D0 */
void LifecycleClass_LifecycleClass_destructor(LifecycleClass *this_ptr)
{
 if ( this_ptr->data )
 operator_delete_array(this_ptr->data);
 --LifecycleClass_instance_count;
}


/* Function: _ZNK14LifecycleClass7getDataEm @ 0x370E */
int LifecycleClass_getData(const LifecycleClass *this_ptr, size_t idx)
{
 if ( idx >= this_ptr->size )
 return -1;
 else
 return this_ptr->data[idx];
}


/* Function: _ZN14LifecycleClass16getInstanceCountEv @ 0x3749 */
int LifecycleClass_getInstanceCount()
{
 return LifecycleClass_instance_count;
}


/* Function: _ZN4Base12virtual_funcEi @ 0x375A */
int Base_virtual_func(Base *this_ptr, int x)
{
 return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x3772 */
const char * Base_getName(const Base *this_ptr)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x3788 */
void Base_destructor(Base *this_ptr)
{
 this[0]._vptr_Base = (int (**)(...))&off_8B50;
}


/* Function: _ZN4BaseD0Ev @ 0x37A6 */
void Base_destructorDeleting(Base *this_ptr)
{
 Base_destructor(this_ptr);
 operator_delete(this_ptr, 8u);
}


/* Function: _ZN4BaseC2Ev @ 0x37D6 */
void Base_Constructor(Base *this_ptr)
{
 this[0]._vptr_Base = (int (**)(...))&off_8B50;
}


/* Function: _ZN7DerivedC2Ei @ 0x37F4 */
void Derived_Constructor(Derived *this_ptr, int m)
{
 Base_Constructor(this_ptr);
 this_ptr[0]._vptr_Base = (int (**)(...))&off_8B20;
 this_ptr[0].multiplier = m;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x382E */
int Derived_virtual_func(Derived *this_ptr, int x)
{
 return x * this_ptr->multiplier;
}


/* Function: _ZNK7Derived7getNameEv @ 0x384A */
const char * Derived_getName(const Derived *this_ptr)
{
 return "Derived";
}


/* Function: _ZN5BaseA5funcAEv @ 0x3860 */
int BaseA_funcA(BaseA *this_ptr)
{
 return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x3874 */
void BaseA_destructor(BaseA *this_ptr)
{
 this_ptr[0]._vptr_BaseA = (int (**)(...))&off_8AF8;
}


/* Function: _ZN5BaseAD0Ev @ 0x3892 */
void BaseA_destructorDeleting(BaseA *this_ptr)
{
 BaseA_destructor(this_ptr);
 operator_delete(this_ptr, 0x10u);
}


/* Function: _ZN5BaseB5funcBEv @ 0x38C2 */
int BaseB_funcB(BaseB *this_ptr)
{
 return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x38D6 */
void BaseB_destructor(BaseB *this_ptr)
{
 this_ptr[0]._vptr_BaseB = (int (**)(...))&off_8AD0;
}


/* Function: _ZN5BaseBD0Ev @ 0x38F4 */
void BaseB_destructorDeleting(BaseB *this_ptr)
{
 BaseB_destructor(this_ptr);
 operator_delete(this_ptr, 0x10u);
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x3924 */
int MultiDerived_funcA(MultiDerived *this_ptr)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x3938 */
int MultiDerived_funcB(MultiDerived *this_ptr)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x394B */
int non_virtual_thunk_to_MultiDerived_funcB(MultiDerived *this_ptr)
{
 return MultiDerived_funcB((MultiDerived *)((char *)this_ptr - 16));
}


/* Function: _ZN5BaseAC2Ev @ 0x3956 */
void BaseA_Constructor(BaseA *this_ptr)
{
 this_ptr[0]._vptr_BaseA = (int (**)(...))&off_8AF8;
}


/* Function: _ZN5BaseBC2Ev @ 0x3974 */
void BaseB_Constructor(BaseB *this_ptr)
{
 this_ptr[0]._vptr_BaseB = (int (**)(...))&off_8AD0;
}


/* Function: _ZN12MultiDerivedC2Ev @ 0x3992 */
void MultiDerived_Constructor(MultiDerived *this_ptr)
{
 BaseA_Constructor(this_ptr);
 BaseB_Constructor(&this_ptr[0].BaseB);
 this_ptr[0]._vptr_BaseA = (int (**)(...))&off_8A78;
 this_ptr[0]._vptr_BaseB = (int (**)(...))&off_8AA8;
}


/* Function: _ZN11VirtualBase4funcEv @ 0x39DE */
int VirtualBase_func(VirtualBase *this_ptr)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x39F2 */
void VirtualBase_destructor(VirtualBase *this_ptr)
{
 this_ptr[0]._vptr_VirtualBase = (int (**)(...))&off_8A50;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x3A10 */
void VirtualBase_destructorDeleting(VirtualBase *this_ptr)
{
 VirtualBase_destructor(this_ptr);
 operator_delete(this_ptr, 0x10u);
}


/* Function: _ZN7MiddleA4funcEv @ 0x3A40 */
int MiddleA_func(MiddleA *this_ptr)
{
 return *(int *)((char *)&this_ptr[0].dataA + *((unsigned long long *)this_ptr[0]._vptr_MiddleA - 3)) + 150;
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x3A6E */
int virtual_thunk_to_MiddleA_func(MiddleA *this_ptr)
{
 return MiddleA_func((MiddleA *)((char *)this_ptr + *((unsigned long long *)this_ptr[0]._vptr_MiddleA - 3)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x3A7C */
int MiddleB_func(MiddleB *this_ptr)
{
 return *(int *)((char *)&this_ptr[0].dataB + *((unsigned long long *)this_ptr[0]._vptr_MiddleB - 3)) + 200;
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x3AAA */
int virtual_thunk_to_MiddleB_func(MiddleB *this_ptr)
{
 return MiddleB_func((MiddleB *)((char *)this_ptr + *((unsigned long long *)this_ptr[0]._vptr_MiddleB - 3)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x3AB8 */
int DiamondDerived_func(DiamondDerived *this_ptr)
{
 return *(int *)((char *)&this_ptr[0].dataA + *((unsigned long long *)this_ptr[0]._vptr_MiddleA - 3)) + 250;
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x3AE6 */
int virtual_thunk_to_DiamondDerived_func(DiamondDerived *this_ptr)
{
 return DiamondDerived_func((DiamondDerived *)((char *)this_ptr + *((unsigned long long *)this_ptr[0]._vptr_MiddleA - 3)));
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x3AF3 */
int non_virtual_thunk_to_DiamondDerived_func(DiamondDerived *this_ptr)
{
 return DiamondDerived_func((DiamondDerived *)((char *)this_ptr - 16));
}


/* Function: _ZN11VirtualBaseC2Ev @ 0x3AFE */
void VirtualBase_VirtualBase(VirtualBase *this_ptr)
{
 this_ptr[0]._vptr_VirtualBase = (int (**)(...))&off_8A50;
}


/* Function: _ZN7MiddleAC2Ev @ 0x3B1C */
void MiddleA_MiddleA(MiddleA *this_ptr, const void **const __vtt_parm)
{
 this_ptr[0]._vptr_MiddleA = (int (**)(...))*__vtt_parm;
 *(int (***)(...))((char *)&this_ptr[0]._vptr_MiddleA + *((unsigned long long *)this_ptr[0]._vptr_MiddleA - 3)) = (int (**)(...))__vtt_parm[1];
}


/* Function: _ZN7MiddleAD2Ev @ 0x3B60 */
void MiddleA_MiddleA_destructor(MiddleA *this_ptr, const void **const __vtt_parm)
{
 this_ptr[0]._vptr_MiddleA = (int (**)(...))*__vtt_parm;
 *(int (***)(...))((char *)&this_ptr[0]._vptr_MiddleA + *((unsigned long long *)this_ptr[0]._vptr_MiddleA - 3)) = (int (**)(...))__vtt_parm[1];
}


/* Function: _ZN7MiddleBC2Ev @ 0x3BA4 */
void MiddleB_MiddleB(MiddleB *this_ptr, const void **const __vtt_parm)
{
 this_ptr[0]._vptr_MiddleB = (int (**)(...))*__vtt_parm;
 *(int (***)(...))((char *)&this_ptr[0]._vptr_MiddleB + *((unsigned long long *)this_ptr[0]._vptr_MiddleB - 3)) = (int (**)(...))__vtt_parm[1];
}


/* Function: _ZN7MiddleBD2Ev @ 0x3BE8 */
void MiddleB_MiddleB_destructor(MiddleB *this_ptr, const void **const __vtt_parm)
{
 this_ptr[0]._vptr_MiddleB = (int (**)(...))*__vtt_parm;
 *(int (***)(...))((char *)&this_ptr[0]._vptr_MiddleB + *((unsigned long long *)this_ptr[0]._vptr_MiddleB - 3)) = (int (**)(...))__vtt_parm[1];
}


/* Function: _ZN14DiamondDerivedC1Ev @ 0x3C2C */
void DiamondDerived_DiamondDerived(DiamondDerived *this_ptr)
{
 VirtualBase_VirtualBase((VirtualBase *const)&this_ptr[0].MiddleB);
 MiddleA_MiddleA(this_ptr, (const void **const)&_vtt_parm);
 MiddleB_MiddleB((MiddleB *const)(&this_ptr[0].dataA + 2), (const void **const)&off_8950);
 this_ptr[0]._vptr_MiddleA = (int (**)(...))&off_88B8;
 this_ptr[0]._vptr_MiddleB = (int (**)(...))&off_8920;
 *((unsigned long long *)&this_ptr[0].dataA + 1) = &off_88E8;
}


/* Function: _ZN5PointC2Eii @ 0x3CAE */
void Point_Point(Point *this_ptr, int _x, int _y)
{
 this_ptr[0].x = _x;
 this_ptr[0].y = _y;
}


/* Function: _ZNK5PointplERKS_ @ 0x3CD6 */
Point Point_operator_plus(const Point *this_ptr, const Point *other)
{
 Point v3; // [rsp+10h] [rbp-10h] BYREF
 unsigned long long v4; // [rsp+18h] [rbp-8h]

 v4 = __readfsqword(0x28u);
 v3.x = other->x + this_ptr[0].x;
 v3.y = other->y + this_ptr[0].y;
 return v3;
}


/* Function: _ZNK5PointeqERKS_ @ 0x3D40 */
bool Point_operator_eq(const Point *this_ptr, const Point *other)
{
 return this_ptr[0].x == other->x && this_ptr[0].y == other->y;
}


/* Function: _ZN5PointppEv @ 0x3D80 */
Point * Point_operator_inc(Point *this_ptr)
{
 ++this_ptr[0].x;
 ++this_ptr[0].y;
 return this_ptr;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x3DB2 */
int template_max_int(int a, int b)
{
 if ( a <= b )
 return b;
 else
 return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x3DD2 */
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
void Container_int_Container(Container_int *this_ptr)
{
 this[0].size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x3E54 */
void Container_int_push(Container_int *this_ptr, int value)
{
 int size; // eax

 if ( this[0].size <= 9 )
 {
 size = this[0].size;
 this[0].size = size + 1;
 this[0].data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x3E90 */
int Container_int_get(const Container_int *this_ptr, int idx)
{
 if ( idx < 0 || idx >= this[0].size )
 return 0;
 else
 return this[0].data[idx];
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x3EC8 */
int Container_int_getSize(const Container_int *this_ptr)
{
 return this[0].size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x3EDE */
void Container_double_Container(Container_double *this_ptr)
{
 this[0].size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x3EF8 */
void Container_double_push(Container_double *this_ptr, double value)
{
 int size; // eax

 if ( this[0].size <= 9 )
 {
 size = this[0].size;
 this[0].size = size + 1;
 this[0].data[size] = value;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x3F3A */
double Container_double_get(const Container_double *this_ptr, int idx)
{
 if ( idx < 0 || idx >= this[0].size )
 return 0.0;
 else
 return this[0].data[idx];
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x3F7C */
int Container_double_getSize(const Container_double *this_ptr)
{
 return this[0].size;
}


/* Function: std_uniq_ptr_data_int_default_delete_true_true @ 0x3F92 */
void std_uniq_ptr_data_int_default_delete_true_true(
 std_uniq_ptr_data_int_default_delete_true_true *this_ptr,
 std_uniq_ptr_data_int_default_delete_true_true *a2)
{
 std_uniq_ptr_impl_int_default_delete_int_uniq_ptr_impl(this_ptr, a2);
}


/* Function: std_unique_ptr_int_unique_ptr_copy @ 0x3FBC */
void std_unique_ptr_int_unique_ptr_copy(
 std_unique_ptr_int *this_ptr,
 std_unique_ptr_int *a2)
{
 std_uniq_ptr_data_int_default_delete_true_true(&this_ptr[0]._M_t, &a2->_M_t);
}


/* Function: _ZNK8RTTIBase7getTypeEv @ 0x3FE6 */
int RTTIBase_getType(const RTTIBase *this_ptr)
{
 return 0;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x3FFA */
int RTTIDerivedA_getType(const RTTIDerivedA *this_ptr)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedA13derivedA_dataEv @ 0x400E */
int RTTIDerivedA_derivedA_data(const RTTIDerivedA *this_ptr)
{
 return 100;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x4022 */
int RTTIDerivedB_getType(const RTTIDerivedB *this_ptr)
{
 return 2;
}


/* Function: _ZNK12RTTIDerivedB13derivedB_dataEv @ 0x4036 */
int RTTIDerivedB_derivedB_data(const RTTIDerivedB *this_ptr)
{
 return 200;
}


/* Function: _ZN8RTTIBaseC2Ev @ 0x404A */
void RTTIBase_RTTIBase(RTTIBase *this_ptr)
{
 this_ptr[0]._vptr_RTTIBase = (int (**)(...))off_8888;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x4068 */
void RTTIBase_destructor(RTTIBase *this_ptr)
{
 this_ptr[0]._vptr_RTTIBase = (int (**)(...))off_8888;
}


/* Function: _ZN8RTTIBaseD0Ev @ 0x4086 */
void RTTIBase_destructorDeleting(RTTIBase *this_ptr)
{
 RTTIBase_destructor(this_ptr);
 operator_delete(this_ptr, 8u);
}


/* Function: _ZN12RTTIDerivedAC2Ev @ 0x40B6 */
void RTTIDerivedA_RTTIDerivedA(RTTIDerivedA *this_ptr)
{
 RTTIBase_RTTIBase(this_ptr);
 this_ptr[0]._vptr_RTTIBase = (int (**)(...))off_8860;
}


/* Function: _ZN12RTTIDerivedBC2Ev @ 0x40E4 */
void RTTIDerivedB_RTTIDerivedB(RTTIDerivedB *this_ptr)
{
 RTTIBase_RTTIBase(this_ptr);
 this_ptr[0]._vptr_RTTIBase = (int (**)(...))off_8838;
}


/* Function: std_uniq_ptr_data_int_default_delete_construct @ 0x4112 */
void std_uniq_ptr_data_int_default_delete_construct(
 std_uniq_ptr_data_int_default_delete_true_true *this_ptr,
 int *a2)
{
 std_uniq_ptr_impl_int_default_delete_int_uniq_ptr_impl(this_ptr, a2);
}


/* Function: std_unique_ptr_int_unique_ptr @ 0x413C */
void std_unique_ptr_int_unique_ptr(
 std_unique_ptr_int *this_ptr,
 int *__p)
{
 std_uniq_ptr_data_int_default_delete_construct(&this_ptr[0]._M_t, __p);
}


/* Function: std_unique_ptr_int_destructor @ 0x4166 */
void std_unique_ptr_int_destructor(std_unique_ptr_int *this_ptr)
{
 std_default_delete_int *deleter; // rbx
 int **v2; // rax
 int **__ptr; // [rsp+18h] [rbp-18h]

 __ptr = std_uniq_ptr_impl_int_default_delete_int_M_ptr(&this_ptr[0]._M_t);
 if ( *__ptr )
 {
 deleter = std_unique_ptr_int_get_deleter(this_ptr);
 v2 = __ptr;
 std_default_delete_int_operator(deleter, *v2);
 }
 *__ptr = 0;
}


/* Function: std_unique_ptr_int_operator_deref @ 0x41CE */
int *std_unique_ptr_int_operator_deref(
 const std_unique_ptr_int *this_ptr)
{
 return std_unique_ptr_int_get(this_ptr);
}


/* Function: std_move_unique_ptr_int @ 0x41F3 */
std_unique_ptr_int *std_move_unique_ptr_int(
 std_unique_ptr_int *__t)
{
 return __t;
}


/* Function: std_Tuple_impl_0ul_int_default_delete_int_Tuple_impl @ 0x4206 */
void std_Tuple_impl_0ul_int_default_delete_int_Tuple_impl(
 std_Tuple_impl_0_int_default_delete_int *this_ptr,
 std_Tuple_impl_0_int_default_delete_int *a2)
{
 std_Tuple_impl_1ul_default_delete_int_Tuple_impl(this_ptr, a2);
}


/* Function: std_tuple_int_default_delete_int_tuple @ 0x423E */
void std_tuple_int_default_delete_int_tuple(
 std_tuple_int_default_delete_int *this_ptr,
 std_tuple_int_default_delete_int *a2)
{
 std_Tuple_impl_0ul_int_default_delete_int_Tuple_impl(this_ptr, a2);
}


/* Function: std_uniq_ptr_impl_int_default_delete_int_uniq_ptr_impl @ 0x4268 */
void std_uniq_ptr_impl_int_default_delete_int_uniq_ptr_impl(
 std_uniq_ptr_impl_int_default_delete_int *this_ptr,
 int **__p)
{
 std_tuple_int_default_delete_int_tuple_default(&this_ptr->_M_t);
 *std_get_0ul_int_default_delete_int(&this_ptr->_M_t) = *__p;
}

/* Function: std_uniq_ptr_impl_int_default_delete_int_M_ptr @ 0x43D6 */
int ** std_uniq_ptr_impl_int_default_delete_int_M_ptr(
 std_uniq_ptr_impl_int_default_delete_int *this_ptr)
{
 return std_get_0ul_int_default_delete_int(&this_ptr->_M_t);
}

/* Function: std_uniq_ptr_impl_int_default_delete_int_M_ptr @ 0x43D6 */
int ** std_uniq_ptr_impl_int_default_delete_int_M_ptr(
 std_uniq_ptr_impl_int_default_delete_int *this_ptr);


/* Function: std_uniq_ptr_data_int_array_default_delete @ 0x42B2 */
void std_uniq_ptr_data_int_array_default_delete(
 std_uniq_ptr_data_int_array_default_delete *this_ptr,
 int **a2)
{
 std_uniq_ptr_impl_int_default_delete_int_array_uniq_ptr_impl(this_ptr, a2);
}


/* Function: std_unique_ptr_int_array_unique_ptr @ 0x42DC */
void std_unique_ptr_int_array_unique_ptr(
 std_unique_ptr_int_array *this_ptr,
 int *__p)
{
 std_uniq_ptr_data_int_array_default_delete(&this_ptr[0]._M_t, __p);
}


/* Function: std_unique_ptr_int_array_destructor @ 0x4306 */
void std_unique_ptr_int_array_destructor(std_unique_ptr_int_array *this_ptr)
{
 std_default_delete_int_array *deleter; // rax
 int **__ptr; // [rsp+18h] [rbp-8h]

 __ptr = std_uniq_ptr_impl_int_default_delete_int_array_M_ptr(&this_ptr[0]._M_t);
 if ( *__ptr )
 {
 deleter = std_unique_ptr_int_array_get_deleter(this_ptr);
 std_default_delete_int_array_operator(deleter, *__ptr);
 }
 *__ptr = 0;
}


/* Function: std_unique_ptr_int_array_operator_index @ 0x4362 */
int *std_unique_ptr_int_array_operator_index(
 const std_unique_ptr_int_array *this_ptr,
 size_t __i)
{
 return &std_unique_ptr_int_array_get(this_ptr)[__i];
}


/* Function: std_uniq_ptr_impl_int_default_delete_int_uniq_ptr_impl_ptr @ 0x439A */
void std_uniq_ptr_impl_int_default_delete_int_uniq_ptr_impl_ptr(
 std_uniq_ptr_impl_int_default_delete_int *this_ptr,
 int **__p)
{
 std_uniq_ptr_impl_int_default_delete_int_uniq_ptr_impl(this_ptr, __p);
}


/* Function: std_uniq_ptr_impl_int_default_delete_int_M_ptr @ 0x43D6 */
int ** std_uniq_ptr_impl_int_default_delete_int_M_ptr(
 std_uniq_ptr_impl_int_default_delete_int *this_ptr);


/* Function: std_uniq_ptr_impl_int_default_delete_int_M_deleter @ 0x4594 */
std_default_delete_int * std_uniq_ptr_impl_int_default_delete_int_M_deleter(
 std_uniq_ptr_impl_int_default_delete_int *this_ptr)
{
 return (std_default_delete_int *)std_get_1ul_int_default_delete_int(&this_ptr->_M_t);
}


/* Function: std_uniq_ptr_impl_int_default_delete_int_M_ptr_const @ 0x45B2 */
int * std_uniq_ptr_impl_int_default_delete_int_M_ptr_const(
 const std_uniq_ptr_impl_int_default_delete_int *this_ptr)
{
 return *std_get_0ul_int_default_delete_int(&this_ptr->_M_t);
}


/* Function: std_unique_ptr_int_get_deleter @ 0x43F4 */
std_default_delete_int * std_unique_ptr_int_get_deleter(
 std_unique_ptr_int *this_ptr)
{
 return std_uniq_ptr_impl_int_default_delete_int_M_deleter(&this_ptr[0]._M_t);
}


/* Function: std_move_int_ptr @ 0x4412 */
int **std_move_int_ptr(int **__t)
{
 return __t;
}


/* Function: std_default_delete_int_operator @ 0x4424 */
void std_default_delete_int_operator(
 const std_default_delete_int *this_ptr,
 int *__ptr)
{
 if ( __ptr )
 operator_delete(__ptr, 4u);
}


/* Function: std_unique_ptr_int_get @ 0x4452 */
int * std_unique_ptr_int_get(
 const std_unique_ptr_int *this_ptr)
{
 return std_uniq_ptr_impl_int_default_delete_int_M_ptr_const(&this_ptr[0]._M_t);
}


/* Function: std_move_tuple_int_default_delete_int @ 0x4470 */
std_tuple_int_default_delete_int *std_move_tuple_int_default_delete_int(
 std_tuple_int_default_delete_int *__t)
{
 return __t;
}


/* Function: std_Tuple_impl_1ul_default_delete_int_Tuple_impl @ 0x4482 */
void std_Tuple_impl_1ul_default_delete_int_Tuple_impl(
 std_Tuple_impl_1_default_delete_int *this_ptr,
 std_Tuple_impl_1_default_delete_int *__in)
{
 std_Head_base_1ul_default_delete_int_true_Head_base_default(&this_ptr->_M_head_impl);
 (void)__in;
}


/* Function: std_uniq_ptr_impl_int_default_delete_int_array_uniq_ptr_impl @ 0x4496 */
void std_uniq_ptr_impl_int_default_delete_int_array_uniq_ptr_impl(
 std_uniq_ptr_impl_int_default_delete_int_array *this_ptr,
 int **__p)
{
 std_tuple_int_default_delete_int_array_tuple_default(&this_ptr->_M_t);
 *std_get_0ul_int_default_delete_int_array(&this_ptr->_M_t) = __p;
}


/* Function: std_uniq_ptr_impl_int_default_delete_int_array_M_ptr @ 0x44D2 */
int ** std_uniq_ptr_impl_int_default_delete_int_array_M_ptr(
 std_uniq_ptr_impl_int_default_delete_int_array *this_ptr)
{
 return std_get_0ul_int_default_delete_int_array(&this_ptr->_M_t);
}


/* Function: std_unique_ptr_int_array_get_deleter @ 0x44F0 */
std_default_delete_int_array * std_unique_ptr_int_array_get_deleter(
 std_unique_ptr_int_array *this_ptr)
{
 return std_uniq_ptr_impl_int_default_delete_int_array_M_deleter(&this_ptr[0]._M_t);
}


/* Function: std_default_delete_int_array_operator @ 0x450E */
void std_default_delete_int_array_operator(
 const std_default_delete_int_array *this_ptr,
 int *__ptr)
{
 if ( __ptr )
 operator_delete_array(__ptr);
}


/* Function: std_unique_ptr_int_array_get @ 0x4538 */
int * std_unique_ptr_int_array_get(
 const std_unique_ptr_int_array *this_ptr)
{
 return std_uniq_ptr_impl_int_default_delete_int_array_M_ptr_const(&this_ptr[0]._M_t);
}


/* Function: std_tuple_int_default_delete_int_tuple_default @ 0x4556 */
void std_tuple_int_default_delete_int_tuple_default(
 std_tuple_int_default_delete_int *this_ptr)
{
 std_Tuple_impl_0ul_int_default_delete_int_Tuple_impl_default(this_ptr);
}


/* Function: std_get_0ul_int_default_delete_int @ 0x4575 */
int **std_get_0ul_int_default_delete_int(
 std_tuple_int_default_delete_int *__t)
{
 return std__get_helper_0ul_int_default_delete_int(__t);
}


/* Function: std_uniq_ptr_impl_int_default_delete_int_M_deleter @ 0x4594 */
std_default_delete_int * std_uniq_ptr_impl_int_default_delete_int_M_deleter(
 std_uniq_ptr_impl_int_default_delete_int *this_ptr)
{
 return (std_default_delete_int *)std_get_1ul_int_default_delete_int(&this_ptr->_M_t);
}


/* Function: std_uniq_ptr_impl_int_default_delete_int_M_ptr_const @ 0x45B2 */
int * std_uniq_ptr_impl_int_default_delete_int_M_ptr_const(
 const std_uniq_ptr_impl_int_default_delete_int *this_ptr)
{
 return *std_get_0ul_int_default_delete_int(&this_ptr->_M_t);
}


/* Function: std_tuple_int_default_delete_int_array_tuple_default @ 0x45D4 */
void std_tuple_int_default_delete_int_array_tuple_default(
 std_tuple_int_default_delete_int_array *this_ptr)
{
 std_Tuple_impl_0ul_int_default_delete_int_array_Tuple_impl_default(this_ptr);
}


/* Function: std_get_0ul_int_default_delete_int_array @ 0x45F3 */
int **std_get_0ul_int_default_delete_int_array(
 std_tuple_int_default_delete_int_array *__t)
{
 return std__get_helper_0ul_int_default_delete_int_array(__t);
}


/* Function: std_uniq_ptr_impl_int_default_delete_int_array_M_deleter @ 0x4612 */
std_default_delete_int_array * std_uniq_ptr_impl_int_default_delete_int_array_M_deleter(
 std_uniq_ptr_impl_int_default_delete_int_array *this_ptr)
{
 return std_get_1ul_int_default_delete_int_array(&this_ptr->_M_t);
}


/* Function: std_uniq_ptr_impl_int_default_delete_int_array_M_ptr_const @ 0x4630 */
int * std_uniq_ptr_impl_int_default_delete_int_array_M_ptr_const(
 const std_uniq_ptr_impl_int_default_delete_int_array *this_ptr)
{
 return std_get_0ul_int_default_delete_int_array_const(&this_ptr->_M_t);
}


/* Function: std_Tuple_impl_0ul_int_default_delete_int_Tuple_impl_default @ 0x4652 */
void std_Tuple_impl_0ul_int_default_delete_int_Tuple_impl_default(
 std_Tuple_impl_0_int_default_delete_int *this_ptr)
{
 std_Head_base_0ul_int_false_Head_base_default(&this_ptr->_M_head_impl);
 std_Tuple_impl_1ul_default_delete_int_Tuple_impl_default(&this_ptr->_M_rest);
}


/* Function: std__get_helper_0ul_int_default_delete_int @ 0x467D */
int **std__get_helper_0ul_int_default_delete_int(
 std_Tuple_impl_0_int_default_delete_int *__t)
{
 return std_Tuple_impl_0ul_int_default_delete_int_M_head(__t);
}


/* Function: std_get_1ul_int_default_delete_int @ 0x469B */
std_default_delete_int *std_get_1ul_int_default_delete_int(
 std_tuple_int_default_delete_int *__t)
{
 return std__get_helper_1ul_default_delete_int(&__t->_M_t._M_rest);
}


/* Function: std_get_0ul_int_default_delete_int_const @ 0x46B9 */
const int *const *std_get_0ul_int_default_delete_int_const(
 const std_tuple_int_default_delete_int *__t)
{
 return std__get_helper_0ul_int_default_delete_int_const(&__t->_M_t);
}


/* Function: std_Tuple_impl_0ul_int_default_delete_int_array_Tuple_impl_default @ 0x46D8 */
void std_Tuple_impl_0ul_int_default_delete_int_array_Tuple_impl_default(
 std_Tuple_impl_0_int_default_delete_int_array *this_ptr)
{
 std_Head_base_0ul_int_false_Head_base_default(&this_ptr->_M_head_impl);
 std_Tuple_impl_1ul_default_delete_int_array_Tuple_impl_default(&this_ptr->_M_rest);
}


/* Function: std__get_helper_0ul_int_default_delete_int_array @ 0x4703 */
int **std__get_helper_0ul_int_default_delete_int_array(
 std_Tuple_impl_0_int_default_delete_int_array *__t)
{
 return std_Tuple_impl_0ul_int_default_delete_int_array_M_head(__t);
}


/* Function: std_get_1ul_int_default_delete_int_array @ 0x4721 */
std_default_delete_int_array *std_get_1ul_int_default_delete_int_array(
 std_tuple_int_default_delete_int_array *__t)
{
 return std__get_helper_1ul_default_delete_int_array(&__t->_M_t._M_rest);
}


/* Function: std_get_0ul_int_default_delete_int_array_const @ 0x473F */
const int *const *std_get_0ul_int_default_delete_int_array_const(
 const std_tuple_int_default_delete_int_array *__t)
{
 return std__get_helper_0ul_int_default_delete_int_array_const(&__t->_M_t);
}


/* Function: std_forward_int_ptr @ 0x475D */
int **std_forward_int_ptr(int **__t)
{
 return __t;
}


/* Function: std_Tuple_impl_1ul_default_delete_int_Tuple_impl_default @ 0x4770 */
void std_Tuple_impl_1ul_default_delete_int_Tuple_impl_default(
 std_Tuple_impl_1_default_delete_int *this_ptr)
{
 std_Head_base_1ul_default_delete_int_true_Head_base_default(&this_ptr->_M_head_impl);
}


/* Function: std_Head_base_0ul_int_false_Head_base_default @ 0x4790 */
void std_Head_base_0ul_int_false_Head_base_default(std_Head_base_0_int_false *this_ptr)
{
 this_ptr->_M_head_impl = 0;
}


/* Function: std_Tuple_impl_0ul_int_default_delete_int_M_head @ 0x47AA */
int **std_Tuple_impl_0ul_int_default_delete_int_M_head(
 std_Tuple_impl_0_int_default_delete_int *__t)
{
 return std_Head_base_0ul_int_false_M_head(&__t->_M_head_impl);
}


/* Function: std__get_helper_1ul_default_delete_int @ 0x47C8 */
std_default_delete_int *std__get_helper_1ul_default_delete_int(
 std_Tuple_impl_1_default_delete_int *__t)
{
 return std_Tuple_impl_1ul_default_delete_int_M_head(__t);
}


/* Function: std__get_helper_0ul_int_default_delete_int_const @ 0x47E6 */
int *const *std__get_helper_0ul_int_default_delete_int_const(
 const std_Tuple_impl_0_int_default_delete_int *__t)
{
 return std_Tuple_impl_0ul_int_default_delete_int_M_head_const(__t);
}


/* Function: std_Tuple_impl_1ul_default_delete_int_array_Tuple_impl_default @ 0x4804 */
void std_Tuple_impl_1ul_default_delete_int_array_Tuple_impl_default(
 std_Tuple_impl_1_default_delete_int_array *this_ptr)
{
 std_Head_base_1ul_default_delete_int_array_true_Head_base_default(&this_ptr->_M_head_impl);
}


/* Function: std_Tuple_impl_0ul_int_default_delete_int_array_M_head @ 0x4823 */
int **std_Tuple_impl_0ul_int_default_delete_int_array_M_head(
 std_Tuple_impl_0_int_default_delete_int_array *__t)
{
 return std_Head_base_0ul_int_false_M_head(&__t->_M_head_impl);
}


/* Function: std__get_helper_1ul_default_delete_int_array @ 0x4841 */
std_default_delete_int_array *std__get_helper_1ul_default_delete_int_array(
 std_Tuple_impl_1_default_delete_int_array *__t)
{
 return std_Tuple_impl_1ul_default_delete_int_array_M_head(__t);
}


/* Function: std__get_helper_0ul_int_default_delete_int_array_const @ 0x485F */
int *const *std__get_helper_0ul_int_default_delete_int_array_const(
 const std_Tuple_impl_0_int_default_delete_int_array *__t)
{
 return std_Tuple_impl_0ul_int_default_delete_int_array_M_head_const(__t);
}


/* Function: std_Head_base_0ul_int_false_Head_base_int_ptr @ 0x487E */
void std_Head_base_0ul_int_false_Head_base_int_ptr(std_Head_base_0_int_false *this_ptr, int **__h)
{
 this_ptr->_M_head_impl = *__h;
}


/* Function: std_Head_base_1ul_default_delete_int_true_Head_base_default @ 0x48AC */
void std_Head_base_1ul_default_delete_int_true_Head_base_default(
 std_Head_base_1_default_delete_int_true *this_ptr)
{
 this_ptr->_M_head_impl = 0;
}


/* Function: std_Head_base_0ul_int_false_M_head @ 0x48BB */
int **std_Head_base_0ul_int_false_M_head(std_Head_base_0_int_false *__b)
{
 return &__b->_M_head_impl;
}


/* Function: std_Tuple_impl_1ul_default_delete_int_M_head @ 0x48CD */
std_default_delete_int *std_Tuple_impl_1ul_default_delete_int_M_head(
 std_Tuple_impl_1_default_delete_int *__t)
{
 return std_Head_base_1ul_default_delete_int_true_M_head(&__t->_M_head_impl);
}


/* Function: std_Tuple_impl_0ul_int_default_delete_int_M_head_const @ 0x48EB */
int *const *std_Tuple_impl_0ul_int_default_delete_int_M_head_const(
 const std_Tuple_impl_0_int_default_delete_int *__t)
{
 return std_Head_base_0ul_int_false_M_head_const(&__t->_M_head_impl);
}


/* Function: std_Head_base_1ul_default_delete_int_array_true_Head_base_default @ 0x490A */
void std_Head_base_1ul_default_delete_int_array_true_Head_base_default(
 std_Head_base_1_default_delete_int_array_true *this_ptr)
{
 this_ptr->_M_head_impl = 0;
}


/* Function: std_Tuple_impl_1ul_default_delete_int_array_M_head @ 0x4919 */
std_default_delete_int_array *std_Tuple_impl_1ul_default_delete_int_array_M_head(
 std_Tuple_impl_1_default_delete_int_array *__t)
{
 return std_Head_base_1ul_default_delete_int_array_true_M_head(&__t->_M_head_impl);
}


/* Function: std_Tuple_impl_0ul_int_default_delete_int_array_M_head_const @ 0x4937 */
int *const *std_Tuple_impl_0ul_int_default_delete_int_array_M_head_const(
 const std_Tuple_impl_0_int_default_delete_int_array *__t)
{
 return std_Head_base_0ul_int_false_M_head_const(&__t->_M_head_impl);
}


/* Function: std_Head_base_1ul_default_delete_int_true_M_head @ 0x4955 */
std_default_delete_int *std_Head_base_1ul_default_delete_int_true_M_head(
 std_Head_base_1_default_delete_int_true *__b)
{
 return __b->_M_head_impl;
}


/* Function: std_Head_base_0ul_int_false_M_head_const @ 0x4967 */
int *const *std_Head_base_0ul_int_false_M_head_const(const std_Head_base_0_int_false *__b)
{
 return &__b->_M_head_impl;
}


/* Function: std_Head_base_1ul_default_delete_int_array_true_M_head @ 0x4979 */
std_default_delete_int_array *std_Head_base_1ul_default_delete_int_array_true_M_head(
 std_Head_base_1_default_delete_int_array_true *__b)
{
 return __b->_M_head_impl;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x498C */
void RTTIDerivedB_destructor(RTTIDerivedB *this_ptr)
{
 this_ptr[0]._vptr_RTTIBase = (int (**)(...))off_8838;
 RTTIBase_destructor(this_ptr);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x49BA */
void RTTIDerivedB_destructorDeleting(RTTIDerivedB *this_ptr)
{
 RTTIDerivedB_destructor(this_ptr);
 operator_delete(this_ptr, 8u);
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x49EA */
void RTTIDerivedA_destructor(RTTIDerivedA *this_ptr)
{
 this_ptr[0]._vptr_RTTIBase = (int (**)(...))off_8860;
 RTTIBase_destructor(this_ptr);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x4A18 */
void RTTIDerivedA_destructorDeleting(RTTIDerivedA *this_ptr)
{
 RTTIDerivedA_destructor(this_ptr);
 operator_delete(this_ptr, 8u);
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x4A48 */
void DiamondDerived_destructor(DiamondDerived *this_ptr)
{
 this_ptr[0]._vptr_MiddleA = (int (**)(...))&off_88B8;
 this_ptr[0]._vptr_MiddleB = (int (**)(...))&off_8920;
 *((unsigned long long *)&this_ptr[0].dataA + 1) = &off_88E8;
 MiddleB_destructor((MiddleB *)(&this_ptr[0].dataA + 2), (const void **)&off_8950);
 MiddleA_destructor(this_ptr, (const void **)&_vtt_parm);
 VirtualBase_destructor((VirtualBase *)&this_ptr[0].MiddleB);
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x4ACA */
void non_virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *this_ptr)
{
 DiamondDerived_destructor((DiamondDerived *)((char *)this_ptr - 16));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x4AD7 */
void virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *this_ptr)
{
 DiamondDerived_destructor((DiamondDerived *)((char *)this_ptr + *((unsigned long long *)this_ptr[0]._vptr_MiddleA - 4)));
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x4AE8 */
void DiamondDerived_destructorDeleting(DiamondDerived *this_ptr)
{
 DiamondDerived_destructor(this_ptr);
 operator_delete(this_ptr, 0x30u);
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x4B17 */
void non_virtual_thunk_to_DiamondDerived_destructorDeleting(DiamondDerived *this_ptr)
{
 DiamondDerived_destructor((DiamondDerived *)((char *)this_ptr - 16));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x4B21 */
void virtual_thunk_to_DiamondDerived_destructorDeleting(DiamondDerived *this_ptr)
{
 DiamondDerived_destructor((DiamondDerived *)((char *)this_ptr + *((unsigned long long *)this_ptr[0]._vptr_MiddleA - 4)));
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x4B2E */
void MultiDerived_destructor(MultiDerived *this_ptr)
{
 this_ptr[0]._vptr_BaseA = (int (**)(...))&off_8A78;
 this_ptr[0]._vptr_BaseB = (int (**)(...))&off_8AA8;
 BaseB_destructor(&this_ptr[0].BaseB);
 BaseA_destructor(this_ptr);
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x4B7A */
void non_virtual_thunk_to_MultiDerived_destructor(MultiDerived *this_ptr)
{
 MultiDerived_destructor((MultiDerived *)((char *)this_ptr - 16));
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x4B84 */
void MultiDerived_destructorDeleting(MultiDerived *this_ptr)
{
 MultiDerived_destructor(this_ptr);
 operator_delete(this_ptr, 0x20u);
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x4BB3 */
void non_virtual_thunk_to_MultiDerived_destructorDeleting(MultiDerived *this_ptr)
{
 MultiDerived_destructor((MultiDerived *)((char *)this_ptr - 16));
}


/* Function: _ZN7DerivedD2Ev @ 0x4BBE */
void Derived_destructor(Derived *this_ptr)
{
 this_ptr[0]._vptr_Base = (int (**)(...))&off_8B20;
 Base_destructor(this_ptr);
}


/* Function: _ZN7DerivedD0Ev @ 0x4BEC */
void Derived_destructorDeleting(Derived *this_ptr)
{
 Derived_destructor(this_ptr);
 operator_delete(this_ptr, 0x10u);
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
