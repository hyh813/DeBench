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

/* SimpleClass definition */
struct SimpleClass {
 int value;
 char name[32];
};

/* LifecycleClass definition */
struct LifecycleClass {
 size_t size;
 int *data;
};
extern int LifecycleClass_instance_count;

/* Point definition */
struct Point {
 int x;
 int y;
};

/* Base struct definition */
struct Base {
 int (**_vptr_Base)(void);
};

/* Derived struct definition */
struct Derived {
 int (**_vptr_Base)(void);
 int multiplier;
};

/* BaseA struct definition */
struct BaseA {
 int (**_vptr_BaseA)(void);
};

/* BaseB struct definition */
struct BaseB {
 int (**_vptr_BaseB)(void);
};

/* MultiDerived struct definition */
struct MultiDerived {
 int (**_vptr_BaseA)(void);
 BaseA BaseA_part;
 int (**_vptr_BaseB)(void);
 BaseB BaseB;
 int dataA;
 int dataB;
};

/* VirtualBase struct definition */
struct VirtualBase {
 int (**_vptr_VirtualBase)(void);
};

/* VirtualBase method forward declarations */
void VirtualBase_VirtualBase(VirtualBase *this);
void VirtualBase__dtor(VirtualBase *this);

/* MiddleA struct definition */
struct MiddleA {
 int (**_vptr_MiddleA)(void);
 int dataA;
};

/* MiddleB struct definition */
struct MiddleB {
 int (**_vptr_MiddleB)(void);
 int dataB;
};

/* DiamondDerived struct definition */
struct DiamondDerived {
 int (**_vptr_MiddleA)(void);
 MiddleA MiddleA_part;
 int (**_vptr_MiddleB)(void);
 MiddleB MiddleB;
 int dataA;
};

/* RTTIBase struct definition */
struct RTTIBase {
 int (**_vptr_RTTIBase)(void);
};

/* RTTIDerivedA struct definition */
struct RTTIDerivedA {
 int (**_vptr_RTTIBase)(void);
};

/* RTTIDerivedB struct definition */
struct RTTIDerivedB {
 int (**_vptr_RTTIBase)(void);
};

/* SimpleClass method forward declarations */
void SimpleClass_SimpleClass(SimpleClass *this_ptr, int v, const char *n);
void SimpleClass_setValue(SimpleClass *this_ptr, int v);
int SimpleClass_getValue(const SimpleClass *this_ptr);
size_t SimpleClass_compute(const SimpleClass *this_ptr, int x);
int SimpleClass_getClassID(void);

/* LifecycleClass method forward declarations */
void LifecycleClass_LifecycleClass(LifecycleClass *this_ptr, size_t s);
int LifecycleClass_getData(const LifecycleClass *this_ptr, size_t idx);
void LifecycleClass_LifecycleClass_dtor(LifecycleClass *this_ptr);
int LifecycleClass_getInstanceCount(void);

/* Base method forward declarations */
void Base_Base(Base *this_ptr);
void Base_Base_dtor(Base *this_ptr);
int Base_virtual_func(Base *this_ptr, int x);

/* Derived method forward declarations */
void Derived_Derived(Derived *this_ptr, int m);
int Derived_virtual_func(Derived *this_ptr, int x);
void Derived_Derived_dtor(Derived *this_ptr);

/* MultiDerived method forward declarations */
void MultiDerived_MultiDerived(MultiDerived *this_ptr);
void MultiDerived__dtor(MultiDerived *this_ptr);

/* DiamondDerived method forward declarations */
void DiamondDerived_DiamondDerived(DiamondDerived *this_ptr);
void DiamondDerived__dtor(DiamondDerived *this_ptr);

/* Point method forward declarations */
void Point_Point(Point *this_ptr, int x, int y);
void Point_operator_plus(Point *ret, const Point *this_ptr, const Point *other);
int Point_operator_eq(const Point *this_ptr, const Point *other);
Point *Point_operator_inc(Point *this_ptr);

/* Template function forward declarations */
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);

/* std namespace stubs */
typedef struct {
 int dummy;
} std_ios_base_Init;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/5-1/5-1_clang_O0_g
 * Processor: arm
 */

/* CRT stub functions */
static int call_weak_fn(void) { return 0; }
#define JUMPOUT(x) do { } while(0)

/* Function: .init_proc @ 0xD2C */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_D38 @ 0xD38 */
void sub_D38()
{
 JUMPOUT(0);
}


/* Function: __cxx_global_var_init @ 0xE84 */
void _cxx_global_var_init()
{
 /* C++ static initialization stub - no-op in C */
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0xED0 */
void GLOBAL__sub_I_5_1_cpp()
{
 _cxx_global_var_init();
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x104C */
int test_cpp_member_func()
{
 int v1; // [sp+Ch] [bp-2Ch]
 int Value; // [sp+10h] [bp-28h]
 SimpleClass v3; // [sp+14h] [bp-24h] BYREF

 SimpleClass_SimpleClass(&v3, 5, "Test");
 SimpleClass_setValue(&v3, 10);
 Value = SimpleClass_getValue(&v3);
 v1 = SimpleClass_compute(&v3, 3);
 return Value + v1 + SimpleClass_getClassID();
}


/* Function: _Z20test_cpp_constructorv @ 0x10C8 */
int test_cpp_constructor()
{
 int Data; // [sp+8h] [bp-18h]
 LifecycleClass obj; // [sp+14h] [bp-Ch] BYREF
 int result; // [sp+1Ch] [bp-4h]

 result = 0;
 LifecycleClass_LifecycleClass(&obj, 5u);
 Data = LifecycleClass_getData(&obj, 2u);
 result += Data;
 result += LifecycleClass_getInstanceCount();
 LifecycleClass_LifecycleClass_dtor(&obj);
 return result + 1000 * LifecycleClass_getInstanceCount();
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x1174 */
int call_virtual_func(Base *obj, int x)
{
 return ((int ( *)(Base *, int))*obj->_vptr_Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x11AC */
int test_cpp_virtual_func()
{
 int v1; // [sp+0h] [bp-40h]
 int v2; // [sp+18h] [bp-28h]
 int r2; // [sp+24h] [bp-1Ch]
 int r1; // [sp+28h] [bp-18h]
 Derived derived; // [sp+34h] [bp-Ch] BYREF
 Base base; // [sp+3Ch] [bp-4h] BYREF

 Base_Base(&base);
 Derived_Derived(&derived, 3);
 r1 = Base_virtual_func(&base, 5);
 r2 = Derived_virtual_func(&derived, 5);
 v2 = call_virtual_func(&base, 5);
 v1 = r1 + r2 + v2 + call_virtual_func((Base*)&derived, 5);
 Derived_Derived_dtor(&derived);
 Base_Base_dtor(&base);
 return v1;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x12C0 */
int test_cpp_multiple_inheritance()
{
 int v1; // [sp+0h] [bp-40h]
 MultiDerived *v2; // [sp+10h] [bp-30h]
 int r1; // [sp+24h] [bp-1Ch]
 MultiDerived obj; // [sp+30h] [bp-10h] BYREF

 MultiDerived_MultiDerived(&obj);
 obj.dataA = 100;
 obj.dataB = 200;
 v2 = 0;
 if ( &obj )
 v2 = (MultiDerived *)&obj.BaseB;
 r1 = ((int ( *)(MultiDerived *))*obj._vptr_BaseA)(&obj);
 v1 = r1 + (*(int ( **)(MultiDerived *))v2->_vptr_BaseA)(v2) + (&obj != v2);
 MultiDerived__dtor(&obj);
 return v1;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x13C0 */
int test_cpp_diamond_inheritance()
{
 int v1; // [sp+0h] [bp-40h]
 int ( ***v2)(void); // [sp+10h] [bp-30h]
 int v3; // [sp+20h] [bp-20h]
 DiamondDerived var18; // [sp+28h] [bp-18h] BYREF

 DiamondDerived_DiamondDerived(&var18);
 *(int *)((char *)&var18.dataA + *((unsigned int *)var18._vptr_MiddleA - 3)) = 50;
 v2 = 0;
 if ( &var18 )
 v2 = (int ( ***)(void))((char *)&var18 + (ptrdiff_t)*((unsigned int *)var18._vptr_MiddleA - 3));
 v3 = (**v2)();
 *(int *)((char *)&var18.dataA + *((unsigned int *)var18._vptr_MiddleA - 3)) = 100;
 v1 = v3 + (**v2)();
 DiamondDerived__dtor(&var18);
 return v1;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x14C4 */
int test_cpp_operator_overload()
{
 int result; // r0
 bool v1; // [sp+Fh] [bp-19h]
 Point v2; // [sp+10h] [bp-18h] BYREF
 Point p2; // [sp+18h] [bp-10h] BYREF
 Point p1; // [sp+20h] [bp-8h] BYREF

 Point_Point(&p1, 1, 2);
 Point_Point(&p2, 3, 4);
 Point_operator_plus(&v2, &p1, &p2);
 v1 = Point_operator_eq(&p1, &p2);
 Point_operator_inc(&v2);
 result = v2.x + v2.y + 10;
 if ( v1 )
 return v2.x + v2.y;
 return result;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1550 */
int test_cpp_template_func()
{
 int b; // [sp+8h] [bp-18h] BYREF
 int a; // [sp+Ch] [bp-14h] BYREF
 double v3; // [sp+10h] [bp-10h]
 int r1; // [sp+1Ch] [bp-4h]

 r1 = template_max_int(3, 7);
 v3 = template_max_double(2.5, 1.5);
 a = 10;
 b = 20;
 template_swap_int(&a, &b);
 return r1 + (int)v3 + a + b;
}


/* Container template instantiations */
struct Container_int {
 int size;
 int data[10];
};

struct Container_double {
 int size;
 double data[10];
};

/* Container<int> method forward declarations */
void Container_int_Container(Container_int *this);
void Container_int_push(Container_int *this, int value);
int Container_int_get(const Container_int *this, int idx);
int Container_int_getSize(const Container_int *this);

/* Container<double> method forward declarations */
void Container_double_Container(Container_double *this);
void Container_double_push(Container_double *this, double value);
double Container_double_get(const Container_double *this, int idx);
int Container_double_getSize(const Container_double *this);

/* Function: _Z23test_cpp_template_classv @ 0x15E8 */
int test_cpp_template_class()
{
 double v1; // [sp+10h] [bp-98h]
 Container_double v2; // [sp+18h] [bp-90h] BYREF
 int r2; // [sp+74h] [bp-34h]
 int r1; // [sp+78h] [bp-30h]
 Container_int int_container; // [sp+7Ch] [bp-2Ch] BYREF

 Container_int_Container(&int_container);
 Container_int_push(&int_container, 10);
 Container_int_push(&int_container, 20);
 Container_int_push(&int_container, 30);
 r1 = Container_int_get(&int_container, 0);
 r2 = Container_int_getSize(&int_container);
 Container_double_Container(&v2);
 Container_double_push(&v2, 3.14);
 v1 = Container_double_get(&v2, 0);
 return r1 + r2 + (int)v1;
}


/* Lambda type definitions */
typedef struct {unsigned char gap0;} LambdaType_0;
typedef struct {int capture_by_value;int *capture_by_ref;} LambdaType_1;

/* Lambda operator forward declarations */
int test_cpp_lambda_1_operator(
 const LambdaType_1 *this,
 int x);
void test_cpp_lambda_0_operator_int_int(const LambdaType_0 *this, int a, int b);

/* Smart pointer type definitions */
typedef struct {
 int _M_head_impl;
} std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_pointer_holder;

typedef struct {
 std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_pointer_holder _M_t;
} std_unique_ptr_int_test_cpp_smart_ptr_lambda;

typedef int *std_unique_ptr_int_test_cpp_smart_ptr_lambda_pointer;
typedef int *std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_pointer;

typedef struct {
 unsigned char gap0;
} std_unique_ptr_int_test_cpp_smart_ptr_lambda_deleter_type;

typedef struct {
 std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_pointer_holder _M_t;
} std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda;

/* std namespace helper types */
typedef struct {
 int _M_t;
} std_unique_ptr_int_impl;

typedef struct {
 int _M_t;
} std_unique_ptr_int_array_impl;

/* Smart pointer helper function forward declarations */
std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_pointer *std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_M_ptr(
 std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda *this);
std_unique_ptr_int_test_cpp_smart_ptr_lambda_deleter_type *std_unique_ptr_int_test_cpp_smart_ptr_lambda_get_deleter(
 std_unique_ptr_int_test_cpp_smart_ptr_lambda *this);
int std_unique_ptr_int_test_cpp_smart_ptr_lambda_get(
 const std_unique_ptr_int_test_cpp_smart_ptr_lambda *this);
void test_cpp_smart_ptr_lambda2_operator(
 const LambdaType_0 *this, int *p);
int **std_move_int_ref(std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_pointer **__t);

/* std namespace helper forward declarations */
void std_unique_ptr_int_unique_ptr(std_unique_ptr_int_impl *this, int *__p);
int *std_unique_ptr_int_operator_deref(const std_unique_ptr_int_impl *this);
void *std_move_unique_ptr_int(std_unique_ptr_int_impl *__t);
void std_unique_ptr_int_dtor(std_unique_ptr_int_impl *this);
void std_unique_ptr_int_array_unique_ptr(std_unique_ptr_int_array_impl *this, int *__p);
int std_unique_ptr_int_array_operator_index(const std_unique_ptr_int_array_impl *this, unsigned int idx);
void std_unique_ptr_int_array_dtor(std_unique_ptr_int_array_impl *this);

/* Container<int> method forward declarations */
void Container_int_Container(Container_int *this);
void Container_int_push(Container_int *this, int value);
int Container_int_get(const Container_int *this, int idx);
int Container_int_getSize(const Container_int *this);

/* Container<double> method forward declarations */
void Container_double_Container(Container_double *this);
void Container_double_push(Container_double *this, double value);
double Container_double_get(const Container_double *this, int idx);
int Container_double_getSize(const Container_double *this);

/* Function: _Z15test_cpp_lambdav @ 0x16B4 */
int test_cpp_lambda()
{
 int v0; // r0
 int v2; // [sp+10h] [bp-18h]
 LambdaType_0 v3; // [sp+14h] [bp-14h] BYREF
 LambdaType_1 lambda1; // [sp+18h] [bp-10h] BYREF
 int capture_by_ref; // [sp+20h] [bp-8h] BYREF
 int capture_by_value; // [sp+24h] [bp-4h]

 capture_by_value = 10;
 capture_by_ref = 20;
 lambda1.capture_by_value = 10;
 lambda1.capture_by_ref = &capture_by_ref;
 v2 = test_cpp_lambda_1_operator(
 (const LambdaType_1 *)&lambda1,
 3);
 test_cpp_lambda_0_operator_int_int(&v3, 10, 20);
 return v2 + v0;
}


/* Function: _ZZ15test_cpp_lambdavENK3$_1clEi @ 0x1724 */
int test_cpp_lambda_1_operator(
 const LambdaType_1 *this,
 int x)
{
 *this->capture_by_ref += 5;
 return *this->capture_by_ref + x * this->capture_by_value;
}


/* Function: _ZZ15test_cpp_lambdavENK3$_0clIiiEEDaT_T0_ @ 0x1760 */
void test_cpp_lambda_0_operator_int_int(const LambdaType_0 *this, int a, int b)
{
 ;
}


/* Function: _Z18test_cpp_exceptionv @ 0x1784 */
void test_cpp_exception()
{
 unsigned int *exception; // r0

 exception = _cxa_allocate_exception(4u);
 *exception = 42;
 _cxa_throw(exception, (struct type_info *)&`typeinfo for'int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x18F4 */
char *test_cpp_smart_ptr()
{
 int *v0; // r0
 std_unique_ptr_int_impl *v1; // r0
 char *v3; // [sp+0h] [bp-58h]
 int v4; // [sp+8h] [bp-50h]
 std_unique_ptr_int_test_cpp_smart_ptr_lambda_pointer v5; // [sp+Ch] [bp-4Ch]
 int *__p; // [sp+1Ch] [bp-3Ch]
 std_unique_ptr_int_test_cpp_smart_ptr_lambda v7; // [sp+34h] [bp-24h] BYREF
 int r2; // [sp+3Ch] [bp-1Ch]
 std_unique_ptr_int_array_impl v9; // [sp+40h] [bp-18h] BYREF
 std_unique_ptr_int_impl ptr2; // [sp+48h] [bp-10h] BYREF
 std_unique_ptr_int_impl __t; // [sp+54h] [bp-4h] BYREF

 v0 = (int *)operator new(4u);
 *v0 = 100;
 std_unique_ptr_int_unique_ptr(&__t, v0);
 *std_unique_ptr_int_operator_deref(&__t) = 200;
 v1 = std_move_unique_ptr_int(&__t);
 std_unique_ptr_int_unique_ptr(&ptr2, v1);
 v9._M_t._M_t._M_head_impl = (int *)*std_unique_ptr_int_operator_deref(&ptr2);
 __p = (int *)operator new[](0x14u);
 *__p = 1;
 __p[1] = 2;
 __p[2] = 3;
 __p[3] = 4;
 __p[4] = 5;
 std_unique_ptr_int_array_unique_ptr(&v9, __p);
 r2 = std_unique_ptr_int_array_operator_index(&v9, 2u);
 v5 = (std_unique_ptr_int_test_cpp_smart_ptr_lambda_pointer)operator new(4u);
 *v5 = 500;
 std_unique_ptr_int_test_cpp_smart_ptr_lambda_unique_ptr(
 &v7,
 v5,
 (const std_unique_ptr_int_test_cpp_smart_ptr_lambda_deleter_type *)&v7._M_t._M_t);
 v4 = std_unique_ptr_int_test_cpp_smart_ptr_lambda_operator_deref(&v7);
 v3 = (char *)v9._M_t._M_t._M_head_impl + r2 + v4;
 std_unique_ptr_int_test_cpp_smart_ptr_lambda_dtor(&v7);
 std_unique_ptr_int_array_dtor(&v9);
 std_unique_ptr_int_dtor(&ptr2);
 std_unique_ptr_int_dtor(&__t);
 return v3;
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EC2IS0_vEEPiRKS0_ @ 0x1ACC */
void std_unique_ptr_int_test_cpp_smart_ptr_lambda_unique_ptr(
 std_unique_ptr_int_test_cpp_smart_ptr_lambda *this,
 std_unique_ptr_int_test_cpp_smart_ptr_lambda_pointer __p,
 const std_unique_ptr_int_test_cpp_smart_ptr_lambda_deleter_type *__d)
{
 ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3__2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_(
 &this->_M_t,
 __p,
 __d);
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EdeEv @ 0x1B10 */
int std_unique_ptr_int_test_cpp_smart_ptr_lambda_operator_deref(
 const std_unique_ptr_int_test_cpp_smart_ptr_lambda *this)
{
 return std_unique_ptr_int_test_cpp_smart_ptr_lambda_get(this);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2ED2Ev @ 0x1B44 */
void std_unique_ptr_int_test_cpp_smart_ptr_lambda_dtor(
 std_unique_ptr_int_test_cpp_smart_ptr_lambda *this)
{
 int **v1; // r0
 std_unique_ptr_int_test_cpp_smart_ptr_lambda_deleter_type *deleter; // [sp+0h] [bp-18h]
 std_unique_ptr_int_test_cpp_smart_ptr_lambda_pointer *__t; // [sp+Ch] [bp-Ch]

 __t = std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_M_ptr(&this->_M_t);
 if ( *__t )
 {
 deleter = std_unique_ptr_int_test_cpp_smart_ptr_lambda_get_deleter(this);
 v1 = std_move_int_ref(__t);
 test_cpp_smart_ptr_lambda2_operator()(deleter, *v1);
 }
 *__t = 0;
}


/* Function: _Z13test_cpp_rttiv @ 0x1BD4 */
int test_cpp_rtti()
{
 const char *v0; // r0
 const RTTIDerivedB *v2; // [sp+Ch] [bp-3Ch]
 const RTTIDerivedA *v3; // [sp+14h] [bp-34h]
 RTTIDerivedA *v4; // [sp+24h] [bp-24h]
 RTTIDerivedB *v5; // [sp+2Ch] [bp-1Ch]
 int result; // [sp+3Ch] [bp-Ch]
 int resulta; // [sp+3Ch] [bp-Ch]

 v4 = (RTTIDerivedA *)operator new(4u);
 v4->_vptr_RTTIBase = 0;
 RTTIDerivedA_RTTIDerivedA(v4);
 v5 = (RTTIDerivedB *)operator new(4u);
 v5->_vptr_RTTIBase = 0;
 RTTIDerivedB_RTTIDerivedB(v5);
 result = 0;
 if ( !v4 )
 _cxa_bad_typeid();
 if ( std_type_info_operator_eq(
 *((const std_type_info **)v4->_vptr$RTTIBase - 1),
 (const std_type_info *)&`typeinfo for'RTTIDerivedA) )
 {
 result = 10;
 }
 if ( !v5 )
 _cxa_bad_typeid();
 if ( std_type_info_operator_eq(
 *((const std_type_info **)v5->_vptr$RTTIBase - 1),
 (const std_type_info *)&`typeinfo for'RTTIDerivedB) )
 {
 result += 20;
 }
 v3 = (const RTTIDerivedA *)_dynamic_cast(
 v4,
 (const struct __class_type_info *)&`typeinfo for'RTTIBase,
 (const struct __class_type_info *)&`typeinfo for'RTTIDerivedA,
 0);
 if ( v3 )
 result += RTTIDerivedA_derivedA_data(v3);
 v2 = (const RTTIDerivedB *)_dynamic_cast(
 v5,
 (const struct __class_type_info *)&`typeinfo for'RTTIBase,
 (const struct __class_type_info *)&`typeinfo for'RTTIDerivedB,
 0);
 if ( v2 )
 result += RTTIDerivedB_derivedB_data(v2);
 v0 = std_type_info_name(*((const std_type_info **)v4->_vptr$RTTIBase - 1));
 resulta = result + strlen(v0);
 (*((void ( **)(RTTIDerivedA *))v4->_vptr$RTTIBase + 1))(v4);
 (*((void ( **)(RTTIDerivedB *))v5->_vptr$RTTIBase + 1))(v5);
 return resulta;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1E74 */
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

 printf(asc_4221);
 v0 = test_cpp_member_func();
 printf(aCppL301D, v0);
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


/* Function: sub_1F40 @ 0x1F40 */
// positive sp value has been detected, the output may be wrong!
int sub_1F40(int a1)
{
 char *v1; // r0
 int v2; // r0
 int v3; // r0
 int ( *v5)(int); // [sp-4h] [bp-4h]

 printf(aCppL401D, a1);
 v1 = test_cpp_smart_ptr();
 printf(aCppL402D, v1);
 v2 = test_cpp_rtti();
 v3 = printf(aCppL403D, v2);
 return v5(v3);
}


/* Function: main @ 0x1FB4 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: sub_1FD0 @ 0x1FD0 */
// positive sp value has been detected, the output may be wrong!
int sub_1FD0()
{
 int ( *v1)(); // [sp-4h] [bp-4h]

 return v1();
}


/* Function: _ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3$_2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_ @ 0x1FE0 */
void ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3__2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_(
 std_uniq_ptr_data_int_test_cpp_smart_ptr_lambda *this,
 std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_pointer a2,
 const LambdaType_0 *a3)
{
 std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda___uniq_ptr_impl(
 this,
 a2,
 a3);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2EC2IRKS0_EEPiOT_ @ 0x201C */
void std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda___uniq_ptr_impl(
 std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda *this,
 std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_pointer __p,
 const LambdaType_0 *__d)
{
 const LambdaType_0 *v3; // r0
 int *__a1; // [sp+8h] [bp-8h] BYREF
 std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda *thisa; // [sp+Ch] [bp-4h]

 thisa = this;
 __a1 = __p;
 v3 = std_forward(__d);
 std_tuple_int_test_cpp_smart_ptr_lambda_tuple(
 &this->_M_t,
 &__a1,
 v3);
}


/* Function: _ZSt7forwardIRKZ18test_cpp_smart_ptrvE3$_2EOT_RNSt16remove_referenceIS3_E4typeE @ 0x2064 */
void std_forward(
 const LambdaType_0 *__t)
{
 ;
}


/* Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_RKS1_Lb1EEEOT_OT0_ @ 0x2078 */
void std_tuple_int_test_cpp_smart_ptr_lambda_tuple(
 std_tuple_int_test_cpp_smart_ptr_lambda *this,
 int **__a1,
 const LambdaType_0 *__a2)
{
 const LambdaType_0 *v3; // r0
 int **__head; // [sp+4h] [bp-14h]

 __head = std_forward_int_ref(__a1);
 std_forward(__a2);
 std_Tuple_impl_0u_int_test_cpp_smart_ptr_lambda__Tuple_impl(
 this,
 __head,
 v3);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_JRKS1_EvEEOT_DpOT0_ @ 0x20D4 */
void std_Tuple_impl_0u_int_test_cpp_smart_ptr_lambda__Tuple_impl(
 std_Tuple_impl_0u_int_test_cpp_smart_ptr_lambda *this,
 int **__head,
 const LambdaType_0 *__tail)
{
 const LambdaType_0 *v3; // r0
 int **v4; // r0

 std_forward(__tail);
 std_Tuple_impl_1u_test_cpp_smart_ptr_lambda__Tuple_impl(this, v3);
 v4 = std_forward_int_ref(__head);
 std_Head_base_0u_int_false__Head_base((std_Head_base_0u_int_false *)this, v4);
}


/* Function: _ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvE3$_2EEC2ERKS0_ @ 0x212C */
void std_Tuple_impl_1u_test_cpp_smart_ptr_lambda__Tuple_impl(
 std_Tuple_impl_1u_test_cpp_smart_ptr_lambda *this,
 const LambdaType_0 *__head)
{
 std_Head_base_1u_test_cpp_smart_ptr_lambda_true__Head_base(this, __head);
}


/* Function: _ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvE3$_2Lb1EEC2ERKS0_ @ 0x2160 */
void std_Head_base_1u_test_cpp_smart_ptr_lambda_true__Head_base(
 std_Head_base_1u_test_cpp_smart_ptr_lambda_true *this,
 const LambdaType_0 *__h)
{
 ;
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv @ 0x2178 */
std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_pointer * std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda__M_ptr(
 std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda *this)
{
 return std_get_0u_int_test_cpp_smart_ptr_lambda(&this->_M_t);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E11get_deleterEv @ 0x219C */
std_unique_ptr_int_test_cpp_smart_ptr_lambda_deleter_type * std_unique_ptr_int_test_cpp_smart_ptr_lambda_get_deleter(
 std_unique_ptr_int_test_cpp_smart_ptr_lambda *this)
{
 return (std_unique_ptr_int_test_cpp_smart_ptr_lambda_deleter_type *)std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda__M_deleter(&this->_M_t);
}


/* Function: _ZZ18test_cpp_smart_ptrvENK3$_2clEPi @ 0x21D0 */
void test_cpp_smart_ptr_lambda2_operator(
 const LambdaType_0 *this, int *p)
{
 *p = -1;
 if ( p )
 operator_delete(p);
}


/* Function: _ZSt3getILj0EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x221C */
int ** std_get_0u_int_test_cpp_smart_ptr_lambda(
 std_tuple_int_test_cpp_smart_ptr_lambda *__t)
{
 return std__get_helper_0u_int_test_cpp_smart_ptr_lambda(__t);
}


/* Function: _ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvE3$_2EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x2240 */
int ** std__get_helper_0u_int_test_cpp_smart_ptr_lambda(
 std_Tuple_impl_0u_int_test_cpp_smart_ptr_lambda *__t)
{
 return std_Tuple_impl_0u_int_test_cpp_smart_ptr_lambda__M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS2_ @ 0x2264 */
int ** std_Tuple_impl_0u_int_test_cpp_smart_ptr_lambda__M_head(
 std_Head_base_0u_int_false *__t)
{
 return std_Head_base_0u_int_false__M_head(__t);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E10_M_deleterEv @ 0x2288 */
LambdaType_0 * std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda__M_deleter(
 std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda *this)
{
 return (LambdaType_0 *)std_get_1u_int_test_cpp_smart_ptr_lambda(&this->_M_t);
}


/* Function: _ZSt3getILj1EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x22AC */
LambdaType_0 * std_get_1u_int_test_cpp_smart_ptr_lambda(
 std_tuple_int_test_cpp_smart_ptr_lambda *__t)
{
 return (LambdaType_0 *)std__get_helper_1u_test_cpp_smart_ptr_lambda(__t);
}


/* Function: _ZSt12__get_helperILj1EZ18test_cpp_smart_ptrvE3$_2JEERT0_RSt11_Tuple_implIXT_EJS1_DpT1_EE @ 0x22D0 */
LambdaType_0 * std__get_helper_1u_test_cpp_smart_ptr_lambda(
 std_Tuple_impl_1u_test_cpp_smart_ptr_lambda *__t)
{
 return std_Tuple_impl_1u_test_cpp_smart_ptr_lambda__M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS1_ @ 0x22F4 */
LambdaType_0 * std_Tuple_impl_1u_test_cpp_smart_ptr_lambda__M_head(
 std_Tuple_impl_1u_test_cpp_smart_ptr_lambda *__t)
{
 return std_Head_base_1u_test_cpp_smart_ptr_lambda_true__M_head(__t);
}


/* Function: _ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvE3$_2Lb1EE7_M_headERS1_ @ 0x2318 */
LambdaType_0 * std_Head_base_1u_test_cpp_smart_ptr_lambda_true__M_head(
 std_Head_base_1u_test_cpp_smart_ptr_lambda_true *__b)
{
 return (LambdaType_0 *)0;
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E3getEv @ 0x232C */
std_unique_ptr_int_test_cpp_smart_ptr_lambda_pointer std_unique_ptr_int_test_cpp_smart_ptr_lambda_get(
 const std_unique_ptr_int_test_cpp_smart_ptr_lambda *this)
{
 return std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda__M_ptr(&this->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv @ 0x2360 */
std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_pointer std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda__M_ptr_const(
 const std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda *this)
{
 return *std_get_0u_int_test_cpp_smart_ptr_lambda_const(&this->_M_t);
}


/* Function: _ZSt3getILj0EJPiZ18test_cpp_smart_ptrvE3$_2EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ @ 0x2388 */
const int ** std_get_0u_int_test_cpp_smart_ptr_lambda_const(
 const std_tuple_int_test_cpp_smart_ptr_lambda *__t)
{
 return std__get_helper_0u_int_test_cpp_smart_ptr_lambda_const(__t);
}


/* Function: _ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvE3$_2EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x23AC */
int *const * std__get_helper_0u_int_test_cpp_smart_ptr_lambda_const(
 const std_Tuple_impl_0u_int_test_cpp_smart_ptr_lambda *__t)
{
 return std_Tuple_impl_0u_int_test_cpp_smart_ptr_lambda__M_head_const(__t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERKS2_ @ 0x23D0 */
int *const * std_Tuple_impl_0u_int_test_cpp_smart_ptr_lambda__M_head_const(
 const std_Head_base_0u_int_false *__t)
{
 return std_Head_base_0u_int_false__M_head_const(__t);
}


/* Function: _ZN11SimpleClassC2EiPKc @ 0x23F4 */
void SimpleClass_SimpleClass(SimpleClass *this, int v, const char *n)
{
 this->value = v;
 strncpy(this->name, n, 0x1Fu);
 this->name[31] = 0;
}


/* Function: _ZN11SimpleClass8setValueEi @ 0x2444 */
void SimpleClass_setValue(SimpleClass *this, int v)
{
 this->value = v;
}


/* Function: _ZNK11SimpleClass8getValueEv @ 0x2464 */
int SimpleClass_getValue(const SimpleClass *this)
{
 return this->value;
}


/* Function: _ZNK11SimpleClass7computeEi @ 0x247C */
size_t SimpleClass_compute(const SimpleClass *this, int x)
{
 return strlen(this->name) + this->value * x;
}


/* Function: _ZN11SimpleClass10getClassIDEv @ 0x24C4 */
int SimpleClass_getClassID()
{
 return 4660;
}


/* Function: _ZN14LifecycleClassC2Ej @ 0x24D0 */
void LifecycleClass_LifecycleClass(LifecycleClass *this, size_t s)
{
 unsigned int v2; // r0
 size_t i; // [sp+8h] [bp-10h]

 this->size = s;
 v2 = 4 * s;
 if ( s != (s & 0x3FFFFFFF) )
 v2 = -1;
 this->data = (int *)operator new[](v2);
 for ( i = 0; i < s; ++i )
 this->data[i] = 10 * i;
 ++LifecycleClass_instance_count;
}


/* Function: _ZNK14LifecycleClass7getDataEj @ 0x259C */
int LifecycleClass_getData(const LifecycleClass *this, size_t idx)
{
 if ( idx >= this->size )
 return -1;
 else
 return this->data[idx];
}


/* Function: _ZN14LifecycleClass16getInstanceCountEv @ 0x25F4 */
int LifecycleClass_getInstanceCount()
{
 return LifecycleClass_instance_count;
}


/* Function: _ZN14LifecycleClassD2Ev @ 0x2604 */
void LifecycleClass_LifecycleClass_dtor(LifecycleClass *this)
{
 if ( this->data )
 operator delete[](this->data);
 --LifecycleClass_instance_count;
}


/* Function: _ZN4BaseC2Ev @ 0x266C */
void Base_Base(Base *this)
{
 this->_vptr_Base = (int (**)(void))&off_14C48;
}


/* Function: _ZN7DerivedC2Ei @ 0x2694 */
void Derived_Derived(Derived *this, int m)
{
 Base_Base(this);
 this->_vptr$Base = (int (**)(void))&off_14C68;
 this->multiplier = m;
}


/* Function: _ZN4Base12virtual_funcEi @ 0x26E0 */
int Base_virtual_func(Base *this, int x)
{
 return x + 1;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x26FC */
int Derived_virtual_func(Derived *this, int x)
{
 return x * this->multiplier;
}


/* Function: _ZN7DerivedD2Ev @ 0x2720 */
void Derived_Derived_dtor(Derived *this)
{
 Base_Base_dtor(this);
}


/* Function: _ZN4BaseD2Ev @ 0x274C */
void Base_Base_dtor(Base *this)
{
 ;
}


/* Function: _ZN12MultiDerivedC2Ev @ 0x2760 */
void MultiDerived_MultiDerived(MultiDerived *this)
{
 BaseA_BaseA(this);
 BaseB_BaseB(&this->BaseB);
 this->_vptr_BaseA = (int (**)(void))&off_14C8C;
 this->_vptr_BaseB = (int (**)(void))&off_14CA4;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x27B4 */
void MultiDerived__dtor(MultiDerived *this)
{
 BaseB_BaseB_dtor(&this->BaseB);
 BaseA_BaseA_dtor(this);
}


/* Function: _ZN14DiamondDerivedC1Ev @ 0x27EC */
void DiamondDerived_DiamondDerived(DiamondDerived *this)
{
 VirtualBase_VirtualBase((VirtualBase *)&this->MiddleB);
 MiddleA_MiddleA(this, (int (***)(void))off_14D58);
 MiddleB_MiddleB((MiddleB *)(&this->dataA + 1), (int (***)(void))off_14D60);
 this->_vptr_MiddleA = (int (**)(void))&off_14D14;
 this->_vptr_MiddleB = (int (**)(void))&off_14D48;
 *(&this->dataA + 1) = (int)&off_14D2C;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x2870 */
void DiamondDerived__dtor(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived(this, (void **)&`VTT for'DiamondDerived);
 VirtualBase::~VirtualBase((VirtualBase *)&this->MiddleB);
}


/* Function: _ZN5PointC2Eii @ 0x28B4 */
void Point_Point(Point *this, int _x, int _y)
{
 this->x = _x;
 this->y = _y;
}


/* Function: _ZNK5PointplERKS_ @ 0x28E0 */
void Point_operator_plus(Point *retstr, const Point *this, const Point *other)
{
 Point::Point(retstr, this->x + other->x, this->y + other->y);
}


/* Function: _ZNK5PointeqERKS_ @ 0x2924 */
int Point_operator_eq(const Point *this, const Point *other)
{
 int v3; // [sp+4h] [bp-Ch]

 LOBYTE(v3) = 0;
 if ( this->x == other->x )
 v3 = other->y - this->y + (this->y == other->y) + this->y - other->y;
 return v3 & 1;
}


/* Function: _ZN5PointppEv @ 0x298C */
Point *Point_operator_inc(Point *this)
{
 ++this->x;
 ++this->y;
 return this;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x29B8 */
int template_max_int(int a, int b)
{
 if ( a <= b )
 return b;
 else
 return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x29FC */
double template_max_double(double a, double b)
{
 if ( a <= b )
 return b;
 else
 return a;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x2A74 */
void template_swap_int(int *a, int *b)
{
 int v2; // [sp+0h] [bp-Ch]

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x2AB0 */
void Container_int_Container(Container_int *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x2ACC */
void Container_int_push(Container_int *this, int value)
{
 int size; // r2

 if ( this->size <= 9 )
 {
 size = this->size;
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x2B14 */
int Container_int_get(const Container_int *this, int idx)
{
 if ( idx < 0 || idx >= this->size )
 return 0;
 else
 return this->data[idx];
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x2B7C */
int Container_int_getSize(const Container_int *this)
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x2B94 */
void Container_double_Container(Container_double *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x2BB0 */
void Container_double_push(Container_double *this, double value)
{
 int v3; // [sp+Ch] [bp-Ch]

 v3 = HIDWORD(value);
 if ( this->size <= 9 )
 {
 HIDWORD(value) = this->size;
 this->size = HIDWORD(value) + 1;
 LODWORD(this->data[HIDWORD(value)]) = LODWORD(value);
 HIDWORD(this->data[HIDWORD(value)]) = v3;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x2C04 */
double Container_double_get(const Container_double *this, int idx)
{
 if ( idx < 0 || idx >= this->size )
 return 0.0;
 else
 return this->data[idx];
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x2C7C */
int Container_double_getSize(const Container_double *this)
{
 return this->size;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi @ 0x2C94 */
void std_unique_ptr_int_unique_ptr_S1_v(
 std_unique_ptr_int_impl *this,
 int *__p)
{
 ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(&this->_M_t, __p);
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv @ 0x2CD0 */
int std_unique_ptr_int_operator_deref(
 const std_unique_ptr_int_impl *this)
{
 return std_unique_ptr_int_get(this);
}


/* Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ @ 0x2D04 */
void std_move_unique_ptr_int(std_unique_ptr_int_impl *__t)
{
 ;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_ @ 0x2D18 */
void std_unique_ptr_int_unique_ptr_move(std_unique_ptr_int_impl *this, std_unique_ptr_int_impl *a2)
{
 std_uniq_ptr_data_int_default_delete___uniq_ptr_data(&this->_M_t, &a2->_M_t);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ @ 0x2D4C */
void std_unique_ptr_int_array_unique_ptr(
 std_unique_ptr_int_array_impl *this,
 int *__p)
{
 ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(&this->_M_t, __p);
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEj @ 0x2D88 */
int std_unique_ptr_int_array_operator_index(
 const std_unique_ptr_int_array_impl *this,
 unsigned int __i)
{
 return std_unique_ptr_int_array_get(this)[__i];
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x2DC8 */
void std_unique_ptr_int_array_dtor(std_unique_ptr_int_array_impl *this)
{
 const void *deleter; // r0
 int **v3; // [sp+4h] [bp-Ch]

 v3 = std_uniq_ptr_impl_int_array__M_ptr(&this->_M_t);
 if ( *v3 )
 {
 deleter = std_unique_ptr_int_array_get_deleter(this);
 std_default_delete_int_array_operator(deleter, *v3);
 }
 *v3 = 0;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x2E3C */
void std_unique_ptr_int_dtor(std_unique_ptr_int_impl *this)
{
 int **v1; // r0
 void *deleter; // [sp+4h] [bp-14h]
 int **__t; // [sp+Ch] [bp-Ch]

 __t = std_uniq_ptr_impl_int__M_ptr(&this->_M_t);
 if ( *__t )
 {
 deleter = std_unique_ptr_int_get_deleter(this);
 v1 = std_move_int_ref(__t);
 std_default_delete_int_operator(deleter, *v1);
 }
 *__t = 0;
}


/* Function: _ZN12RTTIDerivedAC2Ev @ 0x2EC0 */
void RTTIDerivedA_RTTIDerivedA(RTTIDerivedA *this)
{
 RTTIBase_RTTIBase(this);
 this->_vptr$RTTIBase = (int (**)(void))off_14EC4;
}


/* Function: _ZN12RTTIDerivedBC2Ev @ 0x2F00 */
void RTTIDerivedB_RTTIDerivedB(RTTIDerivedB *this)
{
 RTTIBase_RTTIBase(this);
 this->_vptr$RTTIBase = (int (**)(void))off_14EEC;
}


/* Function: _ZNKSt9type_infoeqERKS_ @ 0x2F40 */
bool std_type_info_operator_eq(const std_type_info *this, const std_type_info *__arg)
{
 bool v3; // [sp+4h] [bp-14h]
 bool v4; // [sp+Ch] [bp-Ch]

 v4 = 1;
 if ( *((unsigned int *)this + 1) != *((unsigned int *)__arg + 1) )
 {
 v3 = 0;
 if ( **((unsigned char **)this + 1) != 42 )
 return strcmp(*((const char **)this + 1), *((const char **)__arg + 1)) == 0;
 return v3;
 }
 return v4;
}


/* Function: _ZNK12RTTIDerivedA13derivedA_dataEv @ 0x2FE0 */
int RTTIDerivedA_derivedA_data(const RTTIDerivedA *this)
{
 return 100;
}


/* Function: _ZNK12RTTIDerivedB13derivedB_dataEv @ 0x2FF4 */
int RTTIDerivedB_derivedB_data(const RTTIDerivedB *this)
{
 return 200;
}


/* Function: _ZNKSt9type_info4nameEv @ 0x3008 */
const char * std_type_info_name(const std_type_info *this)
{
 if ( **((unsigned char **)this + 1) == 42 )
 return (const char *)(*((unsigned int *)this + 1) + 1);
 else
 return (const char *)*((unsigned int *)this + 1);
}


/* Function: _ZNK4Base7getNameEv @ 0x305C */
const char * Base_getName(const Base *this)
{
 return "Base";
}


/* Function: _ZN4BaseD0Ev @ 0x3078 */
void Base_Base_dtor(Base *this)
{
 Base::~Base(this);
 operator delete(this);
}


/* Function: _ZNK7Derived7getNameEv @ 0x30A8 */
const char * Derived_getName(const Derived *this)
{
 return "Derived";
}


/* Function: _ZN7DerivedD0Ev @ 0x30C4 */
void Derived::~Derived(Derived *this)
{
 Derived::~Derived(this);
 operator delete(this);
}


/* Function: _ZN5BaseAC2Ev @ 0x30F4 */
void BaseA::BaseA(BaseA *this)
{
 this->_vptr$BaseA = (int (**)(void))&off_14CE8;
}


/* Function: _ZN5BaseBC2Ev @ 0x311C */
void BaseB::BaseB(BaseB *this)
{
 this->_vptr$BaseB = (int (**)(void))&off_14CFC;
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x3144 */
int MultiDerived_funcA(MultiDerived *this)
{
 return 30;
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x3158 */
void MultiDerived::~MultiDerived(MultiDerived *this)
{
 MultiDerived::~MultiDerived(this);
 operator delete(this);
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x3188 */
int MultiDerived_funcB(MultiDerived *this)
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x319C */
void `non-virtual thunk to'MultiDerived::funcB(int a1)
{
 MultiDerived::funcB((MultiDerived *)(a1 - 8));
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x31B4 */
void `non-virtual thunk to'MultiDerived::~MultiDerived(int a1)
{
 MultiDerived::~MultiDerived((MultiDerived *)(a1 - 8));
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x31D0 */
void `non-virtual thunk to'MultiDerived::~MultiDerived(int a1)
{
 MultiDerived::~MultiDerived((MultiDerived *)(a1 - 8));
}


/* Function: _ZN5BaseA5funcAEv @ 0x31E8 */
int BaseA_funcA(BaseA *this)
{
 return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x31FC */
void BaseA::~BaseA(BaseA *this)
{
 ;
}


/* Function: _ZN5BaseAD0Ev @ 0x3210 */
void BaseA::~BaseA(BaseA *this)
{
 BaseA::~BaseA(this);
 operator delete(this);
}


/* Function: _ZN5BaseB5funcBEv @ 0x3240 */
int BaseB_funcB(BaseB *this)
{
 return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x3254 */
void BaseB::~BaseB(BaseB *this)
{
 ;
}


/* Function: _ZN5BaseBD0Ev @ 0x3268 */
void BaseB::~BaseB(BaseB *this)
{
 BaseB::~BaseB(this);
 operator delete(this);
}


/* Function: _ZN11VirtualBaseC2Ev @ 0x3298 */
void VirtualBase::VirtualBase(VirtualBase *this)
{
 this->_vptr_VirtualBase = (int (**)(void))&off_14E38;
}


/* Function: _ZN7MiddleAC2Ev @ 0x32C0 */
void MiddleA::MiddleA(MiddleA *this, int (***vtt)(void))
{
 this->_vptr$MiddleA = *vtt;
 *(int (***)(void))((char *)&this->_vptr$MiddleA + *((unsigned int *)this->_vptr$MiddleA - 3)) = vtt[1];
}


/* Function: _ZN7MiddleBC2Ev @ 0x32F4 */
void MiddleB::MiddleB(MiddleB *this, int (***vtt)(void))
{
 this->_vptr$MiddleB = *vtt;
 *(int (***)(void))((char *)&this->_vptr$MiddleB + *((unsigned int *)this->_vptr$MiddleB - 3)) = vtt[1];
}


/* Function: _ZN7MiddleA4funcEv @ 0x3328 */
int MiddleA_func(MiddleA *this)
{
 return *(int *)((char *)&this->dataA + *((unsigned int *)this->_vptr_MiddleA - 3)) + 150;
}


/* Function: _ZN7MiddleAD1Ev @ 0x3350 */
void MiddleA::~MiddleA(MiddleA *this)
{
 MiddleA::~MiddleA(this, (void **)`VTT for'MiddleA);
 VirtualBase::~VirtualBase((VirtualBase *)(&this->dataA + 1));
}


/* Function: _ZN7MiddleAD0Ev @ 0x3394 */
void MiddleA::~MiddleA(MiddleA *this)
{
 MiddleA::~MiddleA(this);
 operator delete(this);
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x33C4 */
void `virtual thunk to'MiddleA::func(unsigned int *a1)
{
 MiddleA::func((MiddleA *)((char *)a1 + *(unsigned int *)(*a1 - 12)));
}


/* Function: _ZTv0_n16_N7MiddleAD1Ev @ 0x33E4 */
void `virtual thunk to'MiddleA::~MiddleA(unsigned int *a1)
{
 MiddleA::~MiddleA((MiddleA *)((char *)a1 + *(unsigned int *)(*a1 - 16)));
}


/* Function: _ZTv0_n16_N7MiddleAD0Ev @ 0x3408 */
void `virtual thunk to'MiddleA::~MiddleA(unsigned int *a1)
{
 MiddleA::~MiddleA((MiddleA *)((char *)a1 + *(unsigned int *)(*a1 - 16)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x3428 */
int MiddleB_func(MiddleB *this)
{
 return *(int *)((char *)&this->dataB + *((unsigned int *)this->_vptr_MiddleB - 3)) + 200;
}


/* Function: _ZN7MiddleBD1Ev @ 0x3450 */
void MiddleB::~MiddleB(MiddleB *this)
{
 MiddleB::~MiddleB(this, (void **)`VTT for'MiddleB);
 VirtualBase::~VirtualBase((VirtualBase *)(&this->dataB + 1));
}


/* Function: _ZN7MiddleBD0Ev @ 0x3494 */
void MiddleB::~MiddleB(MiddleB *this)
{
 MiddleB::~MiddleB(this);
 operator delete(this);
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x34C4 */
void `virtual thunk to'MiddleB::func(unsigned int *a1)
{
 MiddleB::func((MiddleB *)((char *)a1 + *(unsigned int *)(*a1 - 12)));
}


/* Function: _ZTv0_n16_N7MiddleBD1Ev @ 0x34E4 */
void `virtual thunk to'MiddleB::~MiddleB(unsigned int *a1)
{
 MiddleB::~MiddleB((MiddleB *)((char *)a1 + *(unsigned int *)(*a1 - 16)));
}


/* Function: _ZTv0_n16_N7MiddleBD0Ev @ 0x3508 */
void `virtual thunk to'MiddleB::~MiddleB(unsigned int *a1)
{
 MiddleB::~MiddleB((MiddleB *)((char *)a1 + *(unsigned int *)(*a1 - 16)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x3528 */
int DiamondDerived_func(DiamondDerived *this)
{
 return *(int *)((char *)&this->dataA + *((unsigned int *)this->_vptr_MiddleA - 3)) + 250;
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x3550 */
void DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived(this);
 operator delete(this);
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x3580 */
void `non-virtual thunk to'DiamondDerived::func(int a1)
{
 DiamondDerived::func((DiamondDerived *)(a1 - 8));
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x3598 */
void `non-virtual thunk to'DiamondDerived::~DiamondDerived(int a1)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)(a1 - 8));
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x35B4 */
void `non-virtual thunk to'DiamondDerived::~DiamondDerived(int a1)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)(a1 - 8));
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x35CC */
void `virtual thunk to'DiamondDerived::func(unsigned int *a1)
{
 DiamondDerived::func((DiamondDerived *)((char *)a1 + *(unsigned int *)(*a1 - 12)));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x35EC */
void `virtual thunk to'DiamondDerived::~DiamondDerived(unsigned int *a1)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)a1 + *(unsigned int *)(*a1 - 16)));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x3610 */
void `virtual thunk to'DiamondDerived::~DiamondDerived(unsigned int *a1)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)a1 + *(unsigned int *)(*a1 - 16)));
}


/* Function: _ZN11VirtualBase4funcEv @ 0x3630 */
int VirtualBase_func(VirtualBase *this)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x3644 */
void VirtualBase::~VirtualBase(VirtualBase *this)
{
 ;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x3658 */
void VirtualBase::~VirtualBase(VirtualBase *this)
{
 VirtualBase::~VirtualBase(this);
 operator delete(this);
}


/* Function: _ZN7MiddleAD2Ev @ 0x3688 */
void MiddleA::~MiddleA(MiddleA *this, void **vtt)
{
 ;
}


/* Function: _ZN7MiddleBD2Ev @ 0x36A0 */
void MiddleB::~MiddleB(MiddleB *this, void **vtt)
{
 ;
}


/* Function: _ZN14DiamondDerivedD2Ev @ 0x36B8 */
void DiamondDerived::~DiamondDerived(DiamondDerived *this, void **vtt)
{
 MiddleB::~MiddleB((MiddleB *)(&this->dataA + 1), vtt + 3);
 MiddleA::~MiddleA(this, vtt + 1);
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ @ 0x3708 */
void std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data(
 std::__uniq_ptr_data<int,std::default_delete<int>,true,true> *this,
 std::__uniq_ptr_data<int,std::default_delete<int>,true,true> *a2)
{
 std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(this, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_ @ 0x373C */
void std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(
 std::__uniq_ptr_impl<int,std::default_delete<int> > *this,
 std::__uniq_ptr_impl<int,std::default_delete<int> > *__u)
{
 std::tuple<int *,std::default_delete<int> > *v2; // r0

 v2 = std::move<std::tuple<int *,std::default_delete<int>> &>(&__u->_M_t);
 std::tuple<int *,std::default_delete<int>>::tuple(&this->_M_t, v2);
 *std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(__u) = 0;
}


/* Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ @ 0x379C */
void std::move<std::tuple<int *,std::default_delete<int>> &>(
 std::tuple<int *,std::default_delete<int> > *__t)
{
 ;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_ @ 0x37B0 */
void std::tuple<int *,std::default_delete<int>>::tuple(
 std::tuple<int *,std::default_delete<int> > *this,
 std::tuple<int *,std::default_delete<int> > *a2)
{
 std::_Tuple_impl<0u,int *,std::default_delete<int>>::_Tuple_impl(this, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x37E4 */
std::__uniq_ptr_impl<int,std::default_delete<int> >::pointer * std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(
 std::__uniq_ptr_impl<int,std::default_delete<int> > *this)
{
 return std::get<0u,int *,std::default_delete<int>>(&this->_M_t);
}


/* Function: __clang_call_terminate @ 0x3808 */
void _clang_call_terminate(void *a1)
{
 _cxa_begin_catch(a1);
 std::terminate();
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2EOS3_ @ 0x3810 */
void std::_Tuple_impl<0u,int *,std::default_delete<int>>::_Tuple_impl(
 std::_Tuple_impl<0U,int *,std::default_delete<int> > *this,
 std::_Tuple_impl<0U,int *,std::default_delete<int> > *a2)
{
 std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(this, a2);
 *(unsigned int *)&this->std::_Tuple_impl<1U,std::default_delete<int> >::std::_Head_base<1U,std::default_delete<int>,true>::_M_head_impl.gap0 = *(unsigned int *)&a2->std::_Tuple_impl<1U,std::default_delete<int> >::std::_Head_base<1U,std::default_delete<int>,true>::_M_head_impl.gap0;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2EOS2_ @ 0x3850 */
void std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(
 std::_Tuple_impl<1U,std::default_delete<int> > *this,
 std::_Tuple_impl<1U,std::default_delete<int> > *__in)
{
 ;
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x3868 */
std::__tuple_element_t<0U,std::tuple<int *,std::default_delete<int> > > * std::get<0u,int *,std::default_delete<int>>(
 std::tuple<int *,std::default_delete<int> > *__t)
{
 return std::__get_helper<0u,int *,std::default_delete<int>>(__t);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x388C */
int ** std::__get_helper<0u,int *,std::default_delete<int>>(
 std::_Tuple_impl<0U,int *,std::default_delete<int> > *__t)
{
 return std::_Tuple_impl<0u,int *,std::default_delete<int>>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERS3_ @ 0x38B0 */
int ** std::_Tuple_impl<0u,int *,std::default_delete<int>>::_M_head(std::_Head_base<0U,int *,false> *__t)
{
 return std::_Head_base<0u,int *,false>::_M_head(__t);
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERS1_ @ 0x38D4 */
void std_Head_base_0u_int_false__M_head(std_Head_base_0u_int_false *__b)
{
 ;
}


/* Function: _ZN8RTTIBaseC2Ev @ 0x38E8 */
void RTTIBase::RTTIBase(RTTIBase *this)
{
 this->_vptr$RTTIBase = (int (**)(void))off_14ED8;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x3910 */
void RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
 RTTIBase::~RTTIBase(this);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x393C */
void RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
 RTTIDerivedA::~RTTIDerivedA(this);
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x396C */
int RTTIDerivedA_getType(const RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x3980 */
void RTTIBase::~RTTIBase(RTTIBase *this)
{
 ;
}


/* Function: _ZN8RTTIBaseD0Ev @ 0x3994 */
void RTTIBase::~RTTIBase(RTTIBase *this)
{
 RTTIBase::~RTTIBase(this);
 operator delete(this);
}


/* Function: _ZNK8RTTIBase7getTypeEv @ 0x39C4 */
int RTTIBase_getType(const RTTIBase *this)
{
 return 0;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x39D8 */
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
 RTTIBase::~RTTIBase(this);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x3A04 */
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
 RTTIDerivedB::~RTTIDerivedB(this);
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x3A34 */
int RTTIDerivedB_getType(const RTTIDerivedB *this)
{
 return 2;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi @ 0x3A48 */
void ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(
 std::__uniq_ptr_data<int,std::default_delete<int>,true,true> *this,
 std::__uniq_ptr_impl<int,std::default_delete<int> >::pointer a2)
{
 std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(this, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi @ 0x3A7C */
void std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(
 std::__uniq_ptr_impl<int,std::default_delete<int> > *this,
 std::__uniq_ptr_impl<int,std::default_delete<int> >::pointer __p)
{
 std::tuple<int *,std::default_delete<int>>::tuple<true,true>(&this->_M_t);
 *std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(this) = __p;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv @ 0x3AC8 */
void std::tuple<int *,std::default_delete<int>>::tuple<true,true>(
 std::tuple<int *,std::default_delete<int> > *this)
{
 std::_Tuple_impl<0u,int *,std::default_delete<int>>::_Tuple_impl(this);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2Ev @ 0x3AFC */
void std::_Tuple_impl<0u,int *,std::default_delete<int>>::_Tuple_impl(
 std::_Tuple_impl<0U,int *,std::default_delete<int> > *this)
{
 std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(this);
 std::_Head_base<0u,int *,false>::_Head_base((std::_Head_base<0U,int *,false> *)this);
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2Ev @ 0x3B30 */
void std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(
 std::_Tuple_impl<1U,std::default_delete<int> > *this)
{
 std::_Head_base<1u,std::default_delete<int>,true>::_Head_base(this);
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EEC2Ev @ 0x3B5C */
void std_Head_base_0u_int_false__Head_base(std_Head_base_0u_int_false *this)
{
 this->_M_head_impl = 0;
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EEC2Ev @ 0x3B78 */
void std_Head_base_1u_default_delete_int_true__Head_base(
 std_Head_base_1u_default_delete_int_true *this)
{
 ;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv @ 0x3B8C */
std_unique_ptr_int_deleter_type * std_unique_ptr_int_get_deleter(std_unique_ptr_int_impl *this)
{
 return std_uniq_ptr_impl_int_default_delete__M_deleter(&this->_M_t);
}


/* Function: _ZNKSt14default_deleteIiEclEPi @ 0x3BC0 */
void std_default_delete_int_operator(const std_default_delete_int *this, int *__ptr)
{
 if ( __ptr )
 operator_delete(__ptr);
}


/* Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ @ 0x3C00 */
void std_move_int_ref(int **__t)
{
 ;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv @ 0x3C14 */
std_default_delete_int * std_uniq_ptr_impl_int_default_delete__M_deleter(
 std_uniq_ptr_impl_int_default_delete *this)
{
 return std_get_1u_int_default_delete(&this->_M_t);
}


/* Function: _ZSt3getILj1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x3C38 */
std_default_delete_int * std_get_1u_int_default_delete(
 std_tuple_int_default_delete *__t)
{
 return std__get_helper_1u_default_delete(__t);
}


/* Function: _ZSt12__get_helperILj1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x3C5C */
std_default_delete_int * std__get_helper_1u_default_delete(
 std_Tuple_impl_1u_default_delete *__t)
{
 return std_Tuple_impl_1u_default_delete__M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEE7_M_headERS2_ @ 0x3C80 */
std_default_delete_int * std_Tuple_impl_1u_default_delete__M_head(
 std_Tuple_impl_1u_default_delete *__t)
{
 return std_Head_base_1u_default_delete_true__M_head(__t);
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EE7_M_headERS2_ @ 0x3CA4 */
std_default_delete_int * std_Head_base_1u_default_delete_int_true__M_head(
 std_Head_base_1u_default_delete_int_true *__b)
{
 return (std_default_delete_int *)0;
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv @ 0x3CB8 */
int * std_unique_ptr_int_get(const std_unique_ptr_int_impl *this)
{
 return std_uniq_ptr_impl_int_default_delete__M_ptr(&this->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x3CEC */
int * std_uniq_ptr_impl_int_default_delete__M_ptr(
 const std_uniq_ptr_impl_int_default_delete *this)
{
 return *std_get_0u_int_default_delete(&this->_M_t);
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ @ 0x3D14 */
const int ** std_get_0u_int_default_delete(
 const std_tuple_int_default_delete *__t)
{
 return std__get_helper_0u_int_default_delete(__t);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x3D38 */
int *const * std__get_helper_0u_int_default_delete(
 const std_Tuple_impl_0u_int_default_delete *__t)
{
 return std_Tuple_impl_0u_int_default_delete__M_head_const(__t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERKS3_ @ 0x3D5C */
int *const * std_Tuple_impl_0u_int_default_delete__M_head_const(
 const std_Head_base_0u_int_false *__t)
{
 return std_Head_base_0u_int_false__M_head_const(__t);
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERKS1_ @ 0x3D80 */
int *const * std_Head_base_0u_int_false__M_head_const(const std_Head_base_0u_int_false *__b)
{
 return (int *const *)&__b->_M_head_impl;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi @ 0x3D94 */
void ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(
 std::__uniq_ptr_data<int,std::default_delete<int[]>,true,true> *this,
 std::__uniq_ptr_impl<int,std::default_delete<int[]> >::pointer a2)
{
 std::__uniq_ptr_impl<int,std::default_delete<int []>>::__uniq_ptr_impl(this, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi @ 0x3DC8 */
void std::__uniq_ptr_impl<int,std::default_delete<int []>>::__uniq_ptr_impl(
 std::__uniq_ptr_impl<int,std::default_delete<int[]> > *this,
 std::__uniq_ptr_impl<int,std::default_delete<int[]> >::pointer __p)
{
 std::tuple<int *,std::default_delete<int []>>::tuple<true,true>(&this->_M_t);
 *std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(this) = __p;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv @ 0x3E14 */
void std::tuple<int *,std::default_delete<int []>>::tuple<true,true>(
 std::tuple<int *,std::default_delete<int[]> > *this)
{
 std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_Tuple_impl(this);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x3E48 */
std::__uniq_ptr_impl<int,std::default_delete<int[]> >::pointer * std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(
 std::__uniq_ptr_impl<int,std::default_delete<int[]> > *this)
{
 return std::get<0u,int *,std::default_delete<int []>>(&this->_M_t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEEC2Ev @ 0x3E6C */
void std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_Tuple_impl(
 std::_Tuple_impl<0U,int *,std::default_delete<int[]> > *this)
{
 std::_Tuple_impl<1u,std::default_delete<int []>>::_Tuple_impl(this);
 std::_Head_base<0u,int *,false>::_Head_base((std::_Head_base<0U,int *,false> *)this);
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEEC2Ev @ 0x3EA0 */
void std::_Tuple_impl<1u,std::default_delete<int []>>::_Tuple_impl(
 std::_Tuple_impl<1U,std::default_delete<int[]> > *this)
{
 std::_Head_base<1u,std::default_delete<int []>,true>::_Head_base(this);
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EEC2Ev @ 0x3ECC */
void std_Head_base_1u_default_delete_int_array_true__Head_base(
 std_Head_base_1u_default_delete_int_array_true *this)
{
 ;
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x3EE0 */
std::__tuple_element_t<0U,std::tuple<int *,std::default_delete<int[]> > > * std::get<0u,int *,std::default_delete<int []>>(
 std::tuple<int *,std::default_delete<int[]> > *__t)
{
 return std::__get_helper<0u,int *,std::default_delete<int []>>(__t);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x3F04 */
int ** std::__get_helper<0u,int *,std::default_delete<int []>>(
 std::_Tuple_impl<0U,int *,std::default_delete<int[]> > *__t)
{
 return std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ @ 0x3F28 */
void std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_M_head(std::_Head_base<0U,int *,false> *__t)
{
 std::_Head_base<0u,int *,false>::_M_head(__t);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv @ 0x3F4C */
std::unique_ptr<int[]>::deleter_type * std::unique_ptr<int []>::get_deleter(std::unique_ptr<int[]> *this)
{
 return std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_deleter(&this->_M_t);
}


/* Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_ @ 0x3F80 */
void std::default_delete<int []>::operator()<int>(const std::default_delete<int[]> *this, int *__ptr)
{
 if ( __ptr )
 operator delete[](__ptr);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv @ 0x3FC0 */
std::default_delete<int[]> * std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_deleter(
 std::__uniq_ptr_impl<int,std::default_delete<int[]> > *this)
{
 return std::get<1u,int *,std::default_delete<int []>>(&this->_M_t);
}


/* Function: _ZSt3getILj1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x3FE4 */
std::__tuple_element_t<1U,std::tuple<int *,std::default_delete<int[]> > > * std::get<1u,int *,std::default_delete<int []>>(
 std::tuple<int *,std::default_delete<int[]> > *__t)
{
 return std::__get_helper<1u,std::default_delete<int []>>(__t);
}


/* Function: _ZSt12__get_helperILj1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x4008 */
std::default_delete<int[]> * std::__get_helper<1u,std::default_delete<int []>>(
 std::_Tuple_impl<1U,std::default_delete<int[]> > *__t)
{
 return std::_Tuple_impl<1u,std::default_delete<int []>>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEE7_M_headERS3_ @ 0x402C */
std::default_delete<int[]> * std::_Tuple_impl<1u,std::default_delete<int []>>::_M_head(
 std::_Tuple_impl<1U,std::default_delete<int[]> > *__t)
{
 return std::_Head_base<1u,std::default_delete<int []>,true>::_M_head(__t);
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EE7_M_headERS3_ @ 0x4050 */
void std_Head_base_1u_default_delete_int_array_true__M_head(
 std_Head_base_1u_default_delete_int_array_true *__b)
{
 ;
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv @ 0x4064 */
std::unique_ptr<int[]>::pointer std::unique_ptr<int []>::get(const std::unique_ptr<int[]> *this)
{
 return std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(&this->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x4098 */
std::__uniq_ptr_impl<int,std::default_delete<int[]> >::pointer std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(
 const std::__uniq_ptr_impl<int,std::default_delete<int[]> > *this)
{
 return *std::get<0u,int *,std::default_delete<int []>>(&this->_M_t);
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ @ 0x40C0 */
const std::__tuple_element_t<0U,std::tuple<int *,std::default_delete<int[]> > > * std::get<0u,int *,std::default_delete<int []>>(
 const std::tuple<int *,std::default_delete<int[]> > *__t)
{
 return std::__get_helper<0u,int *,std::default_delete<int []>>(__t);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x40E4 */
int *const * std::__get_helper<0u,int *,std::default_delete<int []>>(
 const std::_Tuple_impl<0U,int *,std::default_delete<int[]> > *__t)
{
 return std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ @ 0x4108 */
void std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_M_head(
 const std::_Head_base<0U,int *,false> *__t)
{
 std::_Head_base<0u,int *,false>::_M_head(__t);
}


/* Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE @ 0x412C */
void std_forward_int_ref(int **__t)
{
 ;
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EEC2IRS0_EEOT_ @ 0x4140 */
void std_Head_base_0u_int_false__Head_base_int_ref(std_Head_base_0u_int_false *this, int **__h)
{
 int **v2; // r0

 std_forward_int_ref(__h);
 this->_M_head_impl = *v2;
}


/* Function: .term_proc @ 0x4180 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp__Znwj @ 0x150D8 */

/* FAILED to decompile: __imp__ZSt9terminatev @ 0x150DC */

/* FAILED to decompile: __imp___cxa_begin_catch @ 0x150E0 */

/* FAILED to decompile: __imp___cxa_allocate_exception @ 0x150E4 */

/* FAILED to decompile: __imp_printf @ 0x150E8 */

/* FAILED to decompile: __imp___libc_start_main @ 0x150F0 */

/* FAILED to decompile: __imp__Znaj @ 0x150F4 */

/* FAILED to decompile: __imp_abort @ 0x150F8 */

/* FAILED to decompile: __imp__ZdlPv @ 0x150FC */

/* FAILED to decompile: __imp___cxa_bad_typeid @ 0x15100 */

/* FAILED to decompile: __imp___cxa_end_cleanup @ 0x15104 */

/* FAILED to decompile: __imp___dynamic_cast @ 0x15108 */

/* FAILED to decompile: __imp___cxa_atexit @ 0x1510C */

/* FAILED to decompile: __imp__ZdaPv @ 0x15110 */

/* FAILED to decompile: __imp___cxa_rethrow @ 0x15118 */

/* FAILED to decompile: __imp_strlen @ 0x1511C */

/* FAILED to decompile: __imp__ZNSt8ios_base4InitC1Ev @ 0x15120 */

/* FAILED to decompile: __imp___aeabi_d2iz @ 0x15124 */

/* FAILED to decompile: __imp___cxa_end_catch @ 0x15128 */

/* FAILED to decompile: __imp___gxx_personality_v0 @ 0x1512C */

/* FAILED to decompile: __imp_strcmp @ 0x15130 */

/* FAILED to decompile: __imp___cxa_throw @ 0x15134 */

/* FAILED to decompile: __imp___aeabi_dcmpgt @ 0x15138 */

/* FAILED to decompile: __imp_strncpy @ 0x1513C */

/* FAILED to decompile: __aeabi_unwind_cpp_pr0 @ 0x15144 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x15148 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x1514C */

/* FAILED to decompile: __imp___gmon_start__ @ 0x15154 */

/* Total functions decompiled: 218, failed: 28 */
