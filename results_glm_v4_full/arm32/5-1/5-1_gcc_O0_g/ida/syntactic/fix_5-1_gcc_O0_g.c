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
#define true 1
#define false 0

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/5-1/5-1_gcc
 * Processor: arm
 */

/* Forward declarations for C++ classes */
typedef struct SimpleClass SimpleClass;
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
typedef struct std__ios_base std__ios_base;

/* Forward declaration for std::ios_base */
namespace std {
  class ios_base {
  public:
    class Init {
    public:
      Init();
      ~Init();
    };
  };
  static class ios_base::Init __ioinit;
}

/* Complete structure definitions */
struct Base {
 int (**_vptr_Base)(...);
};

struct Derived {
 struct Base Base;
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
 int (**_vptr_BaseB)(...);
 struct BaseA BaseA;
 struct BaseB BaseB;
 int dataA;
 int dataB;
};

struct VirtualBase {
 int (**_vptr_VirtualBase)(...);
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
 union {
 struct MiddleB MiddleB;
 struct {
 void *_vptr_MiddleA;
 int dataA;
 };
 };
 void *_vptr_MiddleB;
};

struct Point {
 int x;
 int y;
};

struct RTTIBase {
 void *_vptr_RTTIBase;
};

struct RTTIDerivedA {
 struct RTTIBase base;
};

struct RTTIDerivedB {
 struct RTTIBase base;
};

/* Define incomplete structures */
struct SimpleClass {
 int value;
 char name[32];
};

/* LifecycleClass definition - was incomplete */
typedef struct LifecycleClass {
 int *data;
 size_t size;
} LifecycleClass;

/* Template type replacements for C */
typedef struct Container_int { int data[10]; int size; } Container_int;
typedef struct Container_double { double data[10]; int size; } Container_double;

/* std::unique_ptr replacements for C */
typedef struct std_default_delete_int { unsigned char gap0; } std_default_delete_int;
typedef struct std_default_delete_int_array { unsigned char gap0; } std_default_delete_int_array;
typedef struct std_tuple_ptr_int_delete_int { int *_M_head_impl; std_default_delete_int _M_head_impl2; } std_tuple_ptr_int_delete_int;
typedef struct std_tuple_ptr_int_delete_int_array { int *_M_head_impl; std_default_delete_int_array _M_head_impl2; } std_tuple_ptr_int_delete_int_array;
typedef struct std_uniq_ptr_impl_int_default_delete { std_tuple_ptr_int_delete_int _M_t; } std_uniq_ptr_impl_int_default_delete;
typedef struct std_uniq_ptr_impl_int_default_delete_array { std_tuple_ptr_int_delete_int_array _M_t; } std_uniq_ptr_impl_int_default_delete_array;
typedef struct std_uniq_ptr_data_int_default_delete { std_uniq_ptr_impl_int_default_delete _M_t; } std_uniq_ptr_data_int_default_delete;
typedef struct std_uniq_ptr_data_int_default_delete_array { std_uniq_ptr_impl_int_default_delete_array _M_t; } std_uniq_ptr_data_int_default_delete_array;
typedef struct std_unique_ptr_int { std_uniq_ptr_data_int_default_delete _M_t; } std_unique_ptr_int;
typedef struct std_unique_ptr_int_array { std_uniq_ptr_data_int_default_delete_array _M_t; } std_unique_ptr_int_array;

/* Lambda capture structure */
typedef struct lambda_capture_int { int __capture_by_value; int *__capture_by_ref; } lambda_capture_int;
typedef struct lambda_capture_empty lambda_capture_empty;
struct lambda_capture_empty { unsigned char gap0[1]; };

/* Lambda-based unique_ptr types */
typedef struct std_tuple_int_test_cpp_smart_ptr_lambda { int *_M_head_impl; struct lambda_capture_empty _M_head_impl2; } std_tuple_int_test_cpp_smart_ptr_lambda;
typedef struct std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda { std_tuple_int_test_cpp_smart_ptr_lambda _M_t; } std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda;
typedef struct std_uniq_ptr_data_int_test_cpp_smart_ptr_lambda { std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda _M_t; } std_uniq_ptr_data_int_test_cpp_smart_ptr_lambda;
typedef struct std_unique_ptr_int_lambda { std_uniq_ptr_data_int_test_cpp_smart_ptr_lambda _M_t; } std_unique_ptr_int_lambda;

/* Vtable pointer declarations */
extern int (**off_1448C)(...);
extern int (**off_14464)(...);
extern int (**off_14478)(...);
extern int (**off_144A4)(...);
extern int (**off_144BC)(...);
extern int (**off_144D8)(...);
extern int (**off_144F0)(...);
extern int (**off_14570)(...);
extern int (**off_14584)(...);
extern int (**off_1459C)(...);
extern int (**off_145B0)(...);
extern int (**off_145C4)(...);
extern int (**off_145D8)(...);
extern int (**off_145F0)(...);

extern const void *_vtt_parm;
extern int LifecycleClass_instance_count;

/* Function prototypes */
void _cxa_bad_typeid(void);
size_t strlen(const char *s);

int SimpleClass_SimpleClass(SimpleClass *self, int v, const char *n);
int SimpleClass_getValue(const SimpleClass *self);
void SimpleClass_setValue(SimpleClass *self, int v);
int SimpleClass_compute(const SimpleClass *self, int x);
int SimpleClass_getClassID(void);

int LifecycleClass_LifecycleClass(LifecycleClass *self, size_t s);
void *LifecycleClass_dtor(LifecycleClass *self);
int LifecycleClass_getData(const LifecycleClass *self, size_t idx);
int LifecycleClass_getInstanceCount(void);

int Base_virtual_func(Base *self, int x);
const char *Base_getName(const Base *self);
void *Base_dtor(Base *self);
Base *Base_ctor(Base *self);

int Derived_virtual_func(Derived *self, int x);
const char *Derived_getName(const Derived *self);
Derived *Derived_ctor(Derived *self, int m);
void *Derived_dtor(Derived *self);
void template_swap_int(int *a, int *b);

int BaseA_funcA(BaseA *self);
void *BaseA_dtor(BaseA *self);
BaseA *BaseA_ctor(BaseA *self);

int BaseB_funcB(BaseB *self);
void *BaseB_dtor(BaseB *self);
BaseB *BaseB_ctor(BaseB *self);

int MultiDerived_funcA(MultiDerived *self);
int MultiDerived_funcB(MultiDerived *self);
void *MultiDerived_dtor(MultiDerived *self);
MultiDerived *MultiDerived_ctor(MultiDerived *self);

int VirtualBase_func(VirtualBase *self);
void *VirtualBase_dtor(VirtualBase *self);
VirtualBase *VirtualBase_ctor(VirtualBase *self);

int MiddleA_func(MiddleA *self);
void *MiddleA_dtor(MiddleA *self);
MiddleA *MiddleA_ctor(MiddleA *self);

int MiddleB_func(MiddleB *self);
void *MiddleB_dtor(MiddleB *self);
MiddleB *MiddleB_ctor(MiddleB *self);

int DiamondDerived_func(DiamondDerived *self);
void *DiamondDerived_dtor(DiamondDerived *self);
DiamondDerived *DiamondDerived_ctor(DiamondDerived *self);

Point *Point_ctor(Point *self, int x, int y);
Point *Point_operator_plus(Point *ret, const Point *self, const Point *other);
int Point_operator_eq(const Point *self, const Point *other);
Point *Point_operator_inc(Point *self);

void Container_int_ctor(Container_int *self);
void Container_int_push(Container_int *self, int value);
int Container_int_get(const Container_int *self, int idx);
int Container_int_getSize(const Container_int *self);

void Container_double_ctor(Container_double *self);
void Container_double_push(Container_double *self, double value);
double Container_double_get(const Container_double *self, int idx);
int Container_double_getSize(const Container_double *self);

int RTTIBase_getType(const RTTIBase *self);
int RTTIDerivedA_getType(const RTTIDerivedA *self);
int RTTIDerivedA_derivedA_data(const RTTIDerivedA *self);
int RTTIDerivedB_getType(const RTTIDerivedB *self);
int RTTIDerivedB_derivedB_data(const RTTIDerivedB *self);
RTTIBase *RTTIBase_ctor(RTTIBase *self);
void *RTTIBase_dtor(RTTIBase *self);
int ** std_uniq_ptr_impl_int_default_delete_M_ptr(const std_uniq_ptr_impl_int_default_delete *const self);
int ** std_uniq_ptr_impl_int_default_delete_array_M_ptr(const std_uniq_ptr_impl_int_default_delete_array *const self);
int * std_unique_ptr_int_array_get(const std_unique_ptr_int_array *self);
RTTIDerivedA *RTTIDerivedA_ctor(RTTIDerivedA *self);
RTTIDerivedB *RTTIDerivedB_ctor(RTTIDerivedB *self);
extern int call_weak_fn(void);
int template_max_int(int a, int b);
double template_max_double(double a, double b);

/* Function: template functions */
void *_cxa_allocate_exception(size_t);
void _cxa_throw(void *, struct type_info *, void (*)(void *));
int std_type_info_operator_eq(const void *, const struct type_info *);
void *_dynamic_cast(void *, const struct __class_type_info *, const struct __class_type_info *, int);

extern const struct type_info typeinfo_for_int;
extern const struct type_info typeinfo_for_RTTIDerivedA;
extern const struct type_info typeinfo_for_RTTIDerivedB;
extern const struct type_info typeinfo_for_RTTIBase;

/* Function: .init_proc @ 0x10A5C */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_10A68 @ 0x10A68 */
void sub_10A68()
{
 /* JUMPOUT stub */
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */
extern int call_weak_fn(void);




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

 SimpleClass_SimpleClass(&obj, 5, "Test");
 SimpleClass_setValue(&obj, 10);
 r1 = SimpleClass_getValue(&obj);
 r2 = SimpleClass_compute(&obj, 3);
 return r1 + r2 + SimpleClass_getClassID();
}


/* Function: _Z20test_cpp_constructorv @ 0x10D74 */
int test_cpp_constructor()
{
 int result; // [sp+0h] [bp-14h]
 int resulta; // [sp+0h] [bp-14h]
 LifecycleClass obj; // [sp+4h] [bp-10h] BYREF

 LifecycleClass_LifecycleClass(&obj, 5u);
 result = LifecycleClass_getData(&obj, 2u);
 resulta = result + LifecycleClass_getInstanceCount();
 LifecycleClass_dtor(&obj);
 return resulta + 1000 * LifecycleClass_getInstanceCount();
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x10E48 */
int call_virtual_func(Base *obj, int x)
{
 return (*obj->_vptr_Base)(obj, x);
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

 base._vptr_Base = (int (**)(...))&off_145F0;
 Derived_ctor(&derived, 3);
 r1 = Base_virtual_func(&base, 5);
 r2 = Derived_virtual_func(&derived, 5);
 pb = &base;
 pd = (Base *)&derived;
 r3 = call_virtual_func(&base, 5);
 r4 = call_virtual_func(pd, 5);
 v0 = r1 + r2 + r3 + r4;
 Derived_dtor(&derived);
 Base_dtor(&base);
 return v0;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x10FA0 */
int test_cpp_multiple_inheritance()
{
 int v0; // r4
 int r1; // [sp+8h] [bp-2Ch]
 MultiDerived obj; // [sp+14h] [bp-20h] BYREF

 MultiDerived_ctor(&obj);
 obj.dataA = 100;
 obj.dataB = 200;
 r1 = (*obj._vptr_BaseA)(&obj);
 v0 = r1 + (*obj._vptr_BaseB)(&obj.BaseB) + (&obj != (MultiDerived *)&obj.BaseB);
 MultiDerived_dtor(&obj);
 return v0;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x110A4 */
int test_cpp_diamond_inheritance()
{
 int v0; // r4
 int r1; // [sp+4h] [bp-30h]
 DiamondDerived obj; // [sp+Ch] [bp-28h] BYREF

 DiamondDerived_ctor(&obj);
 obj.MiddleB.dataB = 50;
 r1 = (*obj._vptr_MiddleB)(&obj.MiddleB);
 obj.MiddleB.dataB = 100;
 v0 = r1 + (*obj._vptr_MiddleB)(&obj.MiddleB);
 DiamondDerived_dtor(&obj);
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

 Point_ctor(&p1, 1, 2);
 Point_ctor(&p2, 3, 4);
 Point_operator_plus(&p3, &p1, &p2);
 eq = Point_operator_eq(&p1, &p2);
 Point_operator_inc(&p3);
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

 Container_int_ctor(&int_container);
 Container_int_push(&int_container, 10);
 Container_int_push(&int_container, 20);
 Container_int_push(&int_container, 30);
 r1 = Container_int_get(&int_container, 0);
 r2 = Container_int_getSize(&int_container);
 Container_double_ctor(&double_container);
 Container_double_push(&double_container, 3.14);
 return r1 + r2 + (int)Container_double_get(&double_container, 0);
}


/* Function: _ZZ15test_cpp_lambdavENKUliE_clEi @ 0x1143C */
int test_cpp_lambda_operator(
 const lambda_capture_int *const __closure,
 int x)
{
 *__closure->__capture_by_ref += 5;
 return __closure->__capture_by_value * x + *__closure->__capture_by_ref;
}


/* Function: _Z15test_cpp_lambdav @ 0x1149C */
// local variable allocation has failed, the output may be wrong!
int test_cpp_lambda()
{
 int capture_by_ref; // [sp+4h] [bp-20h] BYREF
 int capture_by_value; // [sp+8h] [bp-1Ch]
 lambda_capture_int lambda2; // [sp+14h] [bp-10h] OVERLAPPED BYREF
 int *p_capture_by_ref; // [sp+18h] [bp-Ch]

 capture_by_value = 10;
 capture_by_ref = 20;
 lambda2.__capture_by_value = 10;
 lambda2.__capture_by_ref = &capture_by_ref;
 return test_cpp_lambda_operator(
 (const lambda_capture_int *const)&lambda2,
 3)
 + 30;
}


/* Function: _Z18test_cpp_exceptionv @ 0x1152C */
void test_cpp_exception()
{
 unsigned int *exception; // r0

 exception = (unsigned int *)_cxa_allocate_exception(4u);
 *exception = 42;
  _cxa_throw(exception, (struct type_info *)&typeinfo_for_int, 0);
}


/* Function: _ZZ18test_cpp_smart_ptrvENKUlPiE_clES_ @ 0x1169C */
void test_cpp_smart_ptr_lambda_int_ptr_operator()(
 const struct {unsigned char gap0;} *const __closure,
 int *p)
{
 *p = -1;
 if ( p )
 operator delete((void *)p, 4u);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x116E0 */
int test_cpp_smart_ptr()
{
 int *v0;
 std_unique_ptr_int *v1;
 int *v2;
 int *v3;
 int v4;
 lambda_capture_empty deleter;
 std_unique_ptr_int ptr2;
 std_unique_ptr_int_array ptr3;
 int r1;
 int r2;
 int r3;

 v0 = (int *)operator new(4u);
 *v0 = 100;
 std_unique_ptr_int_unique_ptr_default_delete_void(&ptr2, v0);
 *std_unique_ptr_int_operator_star(&ptr2) = 200;
 v1 = &ptr2;
 std_unique_ptr_int_unique_ptr_move(&ptr2, v1);
 r1 = *std_unique_ptr_int_operator_star_const(&ptr2);
 v2 = (int *)operator new[](0x14u);
 *v2 = 1;
 v2[1] = 2;
 v2[2] = 3;
 v2[3] = 4;
 v2[4] = 5;
 std_unique_ptr_int_array_unique_ptr(&ptr3, v2);
 r2 = *std_unique_ptr_int_array_operator_index(&ptr3, 2u);
 v3 = (int *)operator new(4u);
 *v3 = 500;
 std_unique_ptr_int_array_unique_ptr_with_deleter(&ptr3, v3, &deleter);
 r3 = *std_unique_ptr_int_array_operator_dereference(&ptr3);
 v4 = r1 + r2 + r3;
 std_unique_ptr_int_array_destructor(&ptr3);
 std_unique_ptr_int_array_destructor(&ptr3);
 std_unique_ptr_int_destructor(&ptr2);
 std_unique_ptr_int_destructor(&ptr2);
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
 RTTIDerivedA *obj1; // [sp+8h] [bp-1Ch]

 v0 = (RTTIDerivedA *)operator new(4u);
 v0->base._vptr_RTTIBase = 0;
 RTTIDerivedA_ctor(v0);
 obj1 = v0;
 v1 = (RTTIDerivedB *)operator new(4u);
 v1->base._vptr_RTTIBase = 0;
 RTTIDerivedB_ctor(v1);
 result = 0;
 if ( !obj1 )
 _cxa_bad_typeid();
 if ( std_type_info_operator_eq((const void *)(*((unsigned int *)obj1->base._vptr_RTTIBase - 1)), &typeinfo_for_RTTIDerivedA) )
 result = 10;
 if ( !v1 )
 _cxa_bad_typeid();
 if ( std_type_info_operator_eq((const void *)(*((unsigned int *)v1->base._vptr_RTTIBase - 1)), &typeinfo_for_RTTIDerivedB) )
 result += 20;
 v2 = (const RTTIDerivedA *)(const void *)_dynamic_cast(
 obj1,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedA,
 0);
 if ( v2 )
 result += RTTIDerivedA_derivedA_data(v2);
 v3 = (const RTTIDerivedB *)(const void *)_dynamic_cast(
 v1,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedB,
 0);
 if ( v3 )
 result += RTTIDerivedB_derivedB_data(v3);
 v4 = std_type_info_name(*((const void *const *)((const char **)obj1->base._vptr_RTTIBase - 1)));
 resulta = strlen(v4) + result;
 ((void (*)(RTTIBase *))(*((void (**)())obj1->base._vptr_RTTIBase + 1)))(obj1);
 ((void (*)(RTTIDerivedB *))(*((void (**)())v1->base._vptr_RTTIBase + 1)))(v1);
 return resulta;
}


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


/* Function: std::__uniq_ptr_data_int_test_cpp_smart_ptr()::_lambda(int_)__true_false_::__uniq_ptr_data_const_test_cpp_smart_ptr()::_lambda(int_)_&_ @ 0x11C30 */
std_uniq_ptr_data_int_test_cpp_smart_ptr_lambda * std_uniq_ptr_data_int_test_cpp_smart_ptr_lambda_copy(
 std_uniq_ptr_data_int_test_cpp_smart_ptr_lambda *const self,
 int *a2,
 const lambda_capture_empty *a3)
{
 std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_constructor(
 &self->_M_t,
 a2,
 a3);
 return self;
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EC2IS1_vEES0_RKS1_ @ 0x11C6C */
std_unique_ptr_int_lambda * std_unique_ptr_int_lambda_constructor(
 std_unique_ptr_int_lambda *const self,
 int *__p,
 const lambda_capture_empty *__d)
{
 std_uniq_ptr_data_int_test_cpp_smart_ptr_lambda_constructor(
 &self->_M_t,
 __p,
 __d);
 return self;
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_ED2Ev @ 0x11CA8 */
void * std_unique_ptr_int_lambda_destructor(
 std_unique_ptr_int_lambda *const self)
{
 lambda_capture_empty *deleter; // r4
 int **v2; // r0
 int **__ptr; // [sp+Ch] [bp-10h]

 __ptr = std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_M_ptr(&self->_M_t);
 if ( *__ptr )
 {
 deleter = std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_M_deleter(&self->_M_t);
 v2 = __ptr;
 test_cpp_smart_ptr_lambda_int_ptr_operator(deleter, *v2);
 }
 *__ptr = 0;
 return self;
}


/* Function: std_unique_ptr_int_lambda_operator_star */
int * std_unique_ptr_int_lambda_operator_star(
 std_unique_ptr_int_lambda *self)
{
 return self->_M_t._M_t._M_head_impl;
}


typedef struct lambda_capture_empty lambda_capture_empty;

/* Function: std_unique_ptr_int_array_unique_ptr_with_deleter */
std_unique_ptr_int_array * std_unique_ptr_int_array_unique_ptr_with_deleter(
 std_unique_ptr_int_array *const self,
 int *__p,
 const lambda_capture_empty *__d)
{
 std_uniq_ptr_data_int_default_delete_array_constructor_with_deleter(&self->_M_t, __p, (const void *)__d);
 return self;
}


/* Function: std_unique_ptr_int_array_operator_dereference */
int * std_unique_ptr_int_array_operator_dereference(std_unique_ptr_int_array *self)
{
 return std_unique_ptr_int_array_get(self);
}


/* Function: std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_constructor_2 */
std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda * std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_constructor(
 std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda *self,
 int *__p,
 const lambda_capture_empty *__d)
{
 std_tuple_int_test_cpp_smart_ptr_lambda_constructor(
 &self->_M_t,
 &__p,
 __d);
 return self;
}


/* Function: std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_M_ptr */
int ** std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_M_ptr(
 std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda *self)
{
 return &self->_M_t._M_head_impl;
}

/* Function: std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_M_deleter */
lambda_capture_empty * std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_M_deleter(
 std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda *self)
{
 return self;
}

/* Function: std_unique_ptr_int_lambda_get_deleter */
lambda_capture_empty * std_unique_ptr_int_lambda_get_deleter(
 std_unique_ptr_int_lambda *self)
{
 return (lambda_capture_empty *)&self->_M_t._M_t;
}


/* Function: std_unique_ptr_int_lambda_get */
int * std_unique_ptr_int_lambda_get(
 const std_unique_ptr_int_lambda *self)
{
 return self->_M_t._M_t._M_head_impl;
}


/* Function: std_forward_test_cpp_smart_ptr_lambda */
const lambda_capture_empty * std_forward_test_cpp_smart_ptr_lambda(
 const lambda_capture_empty *__t)
{
 return __t;
}


/* Function: std_tuple_int_test_cpp_smart_ptr_lambda_constructor */
std_tuple_int_test_cpp_smart_ptr_lambda * std_tuple_int_test_cpp_smart_ptr_lambda_constructor(
 std_tuple_int_test_cpp_smart_ptr_lambda *self,
 int **__a1,
 const lambda_capture_empty *__a2)
{
 std_Tuple_impl_0_int_test_cpp_smart_ptr_lambda_constructor(
 self,
 __a1,
 __a2);
 return self;
}


/* Function: std_get_0_int_test_cpp_smart_ptr_lambda */
int ** std_get_0_int_test_cpp_smart_ptr_lambda(
 std_tuple_int_test_cpp_smart_ptr_lambda *__t)
{
 return &__t->_M_head_impl;
}


/* Function: std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_M_deleter */
lambda_capture_empty * std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_M_deleter(
 std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda *self)
{
 return self;
}


/* Function: std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_M_ptr_const */
int * std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_M_ptr_const(
 std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda *self)
{
 return self->_M_t._M_head_impl;
}


/* Function: std_Tuple_impl_0_int_test_cpp_smart_ptr_lambda_constructor */
std_tuple_int_test_cpp_smart_ptr_lambda * std_Tuple_impl_0_int_test_cpp_smart_ptr_lambda_constructor(
 std_tuple_int_test_cpp_smart_ptr_lambda *self,
 int **__head,
 const lambda_capture_empty *a3)
{
 self->_M_head_impl2 = *a3;
 self->_M_head_impl = *__head;
 return self;
}


/* Function: std_get_helper_0_int_test_cpp_smart_ptr_lambda */
int ** std_get_helper_0_int_test_cpp_smart_ptr_lambda(
 std_tuple_int_test_cpp_smart_ptr_lambda *__t)
{
 return &__t->_M_head_impl;
}


/* Function: std_get_1_int_test_cpp_smart_ptr_lambda */
lambda_capture_empty * std_get_1_int_test_cpp_smart_ptr_lambda(
 std_tuple_int_test_cpp_smart_ptr_lambda *__t)
{
 return &__t->_M_head_impl2;
}


/* Function: std_get_0_int_test_cpp_smart_ptr_lambda_const */
int *const * std_get_0_int_test_cpp_smart_ptr_lambda_const(
 const std_tuple_int_test_cpp_smart_ptr_lambda *__t)
{
 return &__t->_M_head_impl;
}


/* Function: std_Tuple_impl_1_test_cpp_smart_ptr_lambda_constructor */
lambda_capture_empty * std_Tuple_impl_1_test_cpp_smart_ptr_lambda_constructor(
 lambda_capture_empty *self,
 const lambda_capture_empty *__head)
{
 return self;
}


/* Function: std_Tuple_impl_0_int_test_cpp_smart_ptr_lambda_M_head */
int ** std_Tuple_impl_0_int_test_cpp_smart_ptr_lambda_M_head(
 std_tuple_int_test_cpp_smart_ptr_lambda *__t)
{
 return &__t->_M_head_impl;
}


/* Function: std::__get_helper_1_test_cpp_smart_ptr()::_lambda(int_)___ */
lambda_capture_empty * std_get_helper_1_test_cpp_smart_ptr_lambda(
 lambda_capture_empty *__t)
{
 return __t;
}


/* Function: std_get_helper_0_int_test_cpp_smart_ptr_lambda_const */
int ** std_get_helper_0_int_test_cpp_smart_ptr_lambda_const(
 std_tuple_int_test_cpp_smart_ptr_lambda *__t)
{
 return &__t->_M_head_impl;
}


/* Function: std_Head_base_1_test_cpp_smart_ptr_lambda_constructor */
lambda_capture_empty * std_Head_base_1_test_cpp_smart_ptr_lambda_constructor(
 lambda_capture_empty *self,
 const lambda_capture_empty *__h)
{
 return self;
}


/* Function: std_Tuple_impl_1_test_cpp_smart_ptr_lambda_M_head */
lambda_capture_empty * std_Tuple_impl_1_test_cpp_smart_ptr_lambda_M_head(
 lambda_capture_empty *__t)
{
 return __t;
}


/* Function: std_Tuple_impl_0_int_test_cpp_smart_ptr_lambda_M_head_const */
int ** std_Tuple_impl_0_int_test_cpp_smart_ptr_lambda_M_head_const(
 std_tuple_int_test_cpp_smart_ptr_lambda *__t)
{
 return &__t->_M_head_impl;
}


/* Function: std_Head_base_1_test_cpp_smart_ptr_lambda_M_head */
lambda_capture_empty * std_Head_base_1_test_cpp_smart_ptr_lambda_M_head(
 lambda_capture_empty *__b)
{
 return __b;
}


/* Function: _Z41__static_initialization_and_destruction_0ii @ 0x1213C */
void __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
 if ( __initialize_p == 1 && __priority == 0xFFFF )
 {
 std::ios_base::Init::Init(&std::__ioinit);
 _aeabi_atexit(&std::__ioinit, std::ios_base::Init::~Init, &_dso_handle);
 }
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x121A0 */
void GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 __static_initialization_and_destruction_0(1, 0xFFFF);
}


/* Function: std_type_info_name */
const char * std_type_info_name(const void *_this)
{
 if ( **((unsigned char **)_this + 1) == 42 )
 return (const char *)(*((unsigned int *)_this + 1) + 1);
 else
 return (const char *)*((unsigned int *)_this + 1);
}


/* Function: _ZN11SimpleClassC2EiPKc @ 0x12208 */
SimpleClass * SimpleClass_SimpleClass(SimpleClass *self, int v, const char *n)
{
 self->value = v;
 strncpy(self->name, n, 0x1Fu);
 self->name[31] = 0;
 return self;
}


/* Function: _ZNK11SimpleClass8getValueEv @ 0x12260 */
int SimpleClass_getValue(SimpleClass *self)
{
 return self->value;
}


/* Function: _ZN11SimpleClass8setValueEi @ 0x12288 */
void SimpleClass_setValue(SimpleClass *self, int v)
{
 self->value = v;
}


/* Function: _ZNK11SimpleClass7computeEi @ 0x122B8 */
int SimpleClass_compute(SimpleClass *self, int x)
{
 return x * self->value + (int)strlen(self->name);
}


/* Function: _ZN11SimpleClass10getClassIDEv @ 0x12304 */
int SimpleClass_getClassID()
{
 return 4660;
}


/* Function: _ZN14LifecycleClassC2Ej @ 0x12324 */
LifecycleClass * LifecycleClass_LifecycleClass(LifecycleClass *self, size_t s)
{
 size_t i;

 self->size = s;
 if ( s > 0x1FFFFFFE )
 _cxa_throw_bad_array_new_length();
 self->data = (int *)operator new[](4 * s);
 for ( i = 0; i < s; ++i )
 self->data[i] = 10 * i;
 ++LifecycleClass_instance_count;
 return self;
}


/* Function: _ZN14LifecycleClassD2Ev @ 0x123F4 */
void * LifecycleClass_dtor(LifecycleClass *self)
{
 if ( self->data )
 operator delete[](self->data);
 --LifecycleClass_instance_count;
 return self;
}


/* Function: _ZNK14LifecycleClass7getDataEj @ 0x1244C */
int LifecycleClass_getData(LifecycleClass *self, size_t idx)
{
 if ( idx >= self->size )
 return -1;
 else
 return self->data[idx];
}


/* Function: _ZN14LifecycleClass16getInstanceCountEv @ 0x124A4 */
int LifecycleClass_getInstanceCount()
{
 return LifecycleClass_instance_count;
}


/* Function: _ZN4Base12virtual_funcEi @ 0x124C8 */
int Base_virtual_func(Base *self, int x)
{
 return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x124F4 */
const char * Base_getName(Base *self)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x1251C */
void * Base_dtor(Base *self)
{
 self->_vptr_Base = (int (**)(...))&off_145F0;
 return self;
}


/* Function: _ZN4BaseD0Ev @ 0x12550 */
void * Base_del_dtor(Base *self)
{
 Base_dtor(self);
 operator delete(self, 4u);
 return self;
}


/* Function: _ZN4BaseC2Ev @ 0x12584 */
Base * Base_ctor(Base *self)
{
 self->_vptr_Base = (int (**)(...))&off_145F0;
 return self;
}


/* Function: _ZN7DerivedC2Ei @ 0x125B8 */
Derived * Derived_ctor(Derived *self, int m)
{
 Base_ctor(self);
 self->_vptr_Base = (int (**)(...))&off_145D8;
 self->multiplier = m;
 return self;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x12604 */
int Derived_virtual_func(Derived *self, int x)
{
 return x * self->multiplier;
}


/* Function: _ZNK7Derived7getNameEv @ 0x12638 */
const char * Derived_getName(Derived *self)
{
 return "Derived";
}


/* Function: _ZN5BaseA5funcAEv @ 0x12660 */
int BaseA_funcA(BaseA *self)
{
 return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x12684 */
void * BaseA_dtor(BaseA *self)
{
 self->_vptr_BaseA = (int (**)(...))&off_145C4;
 return self;
}


/* Function: _ZN5BaseAD0Ev @ 0x126B8 */
void * BaseA_del_dtor(BaseA *self)
{
 BaseA_dtor(self);
 operator delete(self, 8u);
 return self;
}


/* Function: _ZN5BaseB5funcBEv @ 0x126EC */
int BaseB_funcB(BaseB *self)
{
 return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x12710 */
void * BaseB_dtor(BaseB *self)
{
 self->_vptr_BaseB = (int (**)(...))&off_145B0;
 return self;
}


/* Function: _ZN5BaseBD0Ev @ 0x12744 */
void * BaseB_del_dtor(BaseB *self)
{
 BaseB_dtor(self);
 operator delete(self, 8u);
 return self;
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x12778 */
int MultiDerived_funcA(MultiDerived *self)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x1279C */
int MultiDerived_funcB(MultiDerived *self)
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x127C0 */
int MultiDerived_funcB_thunk(MultiDerived *self)
{
 return MultiDerived_funcB((MultiDerived *)((char *)self - 8));
}


/* Function: _ZN5BaseAC2Ev @ 0x127C8 */
BaseA * BaseA_ctor(BaseA *self)
{
 self->_vptr_BaseA = (int (**)(...))&off_145C4;
 return self;
}


/* Function: _ZN5BaseBC2Ev @ 0x127FC */
BaseB * BaseB_ctor(BaseB *self)
{
 self->_vptr_BaseB = (int (**)(...))&off_145B0;
 return self;
}


/* Function: _ZN12MultiDerivedC2Ev @ 0x12830 */
MultiDerived * MultiDerived_ctor(MultiDerived *self)
{
 BaseA_ctor(self);
 BaseB_ctor(&self->BaseB);
 self->_vptr_BaseA = (int (**)(...))&off_14584;
 self->_vptr_BaseB = (int (**)(...))&off_1459C;
 return self;
}


/* Function: _ZN11VirtualBase4funcEv @ 0x1288C */
int VirtualBase_func(VirtualBase *self)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x128B0 */
void * VirtualBase_dtor(VirtualBase *self)
{
 self->_vptr_VirtualBase = (int (**)(...))&off_14570;
 return self;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x128E4 */
void * VirtualBase_del_dtor(VirtualBase *self)
{
 VirtualBase_dtor(self);
 operator delete(self, 8u);
 return self;
}


/* Function: _ZN7MiddleA4funcEv @ 0x12918 */
int MiddleA_func(MiddleA *self)
{
 return *(int *)((char *)&self->dataA + *((unsigned int *)self->_vptr_MiddleA - 3)) + 150;
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x1295C */
int MiddleA_func_vthunk(MiddleA *self)
{
 return MiddleA_func((MiddleA *)((char *)self + *((unsigned int *)self->_vptr_MiddleA - 3)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x12970 */
int MiddleB_func(MiddleB *self)
{
 return *(int *)((char *)&self->dataB + *((unsigned int *)self->_vptr_MiddleB - 3)) + 200;
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x129B4 */
int MiddleB_func_vthunk(MiddleB *self)
{
 return MiddleB_func((MiddleB *)((char *)self + *((unsigned int *)self->_vptr_MiddleB - 3)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x129C8 */
int DiamondDerived_func(DiamondDerived *self)
{
 return *(int *)((char *)&self->dataA + *((unsigned int *)self->_vptr_MiddleA - 3)) + 250;
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x12A0C */
int DiamondDerived_func_vthunk(DiamondDerived *self)
{
 return DiamondDerived_func((DiamondDerived *)((char *)self + *((unsigned int *)self->_vptr_MiddleA - 3)));
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x12A20 */
int DiamondDerived_func_thunk(DiamondDerived *self)
{
 return DiamondDerived_func((DiamondDerived *)((char *)self - 8));
}


/* Function: _ZN11VirtualBaseC2Ev @ 0x12A28 */
VirtualBase * VirtualBase_ctor(VirtualBase *self)
{
 self->_vptr_VirtualBase = (int (**)(...))&off_14570;
 return self;
}


/* Function: _ZN7MiddleAC2Ev @ 0x12A5C */
MiddleA * MiddleA_ctor(MiddleA *self, const void **__vtt_parm)
{
 self->_vptr_MiddleA = (int (**)(...))(const void *)__vtt_parm;
 *(int (***)(...))((char *)&self->_vptr_MiddleA + *((unsigned int *)self->_vptr_MiddleA - 3)) = (int (**)(...))__vtt_parm[1];
 return self;
}


/* Function: _ZN7MiddleAD2Ev @ 0x12ABC */
void * MiddleA_dtor(MiddleA *self, const void **__vtt_parm)
{
 self->_vptr_MiddleA = (int (**)(...))*__vtt_parm;
 *(int (***)(...))((char *)&self->_vptr_MiddleA + *((unsigned int *)self->_vptr_MiddleA - 3)) = (int (**)(...))__vtt_parm[1];
 return self;
}


/* Function: _ZN7MiddleBC2Ev @ 0x12B1C */
MiddleB * MiddleB_ctor(MiddleB *self, const void **__vtt_parm)
{
 self->_vptr_MiddleB = (int (**)(...))(const void *)__vtt_parm;
 *(int (***)(...))((char *)&self->_vptr_MiddleB + *((unsigned int *)self->_vptr_MiddleB - 3)) = (int (**)(...))__vtt_parm[1];
 return self;
}


/* Function: _ZN7MiddleBD2Ev @ 0x12B7C */
void * MiddleB_dtor(MiddleB *self, const void **__vtt_parm)
{
 self->_vptr_MiddleB = (int (**)(...))*__vtt_parm;
 *(int (***)(...))((char *)&self->_vptr_MiddleB + *((unsigned int *)self->_vptr_MiddleB - 3)) = (int (**)(...))__vtt_parm[1];
 return self;
}


/* Function: _ZN14DiamondDerivedC1Ev @ 0x12BDC */
DiamondDerived * DiamondDerived_ctor(DiamondDerived *self)
{
 VirtualBase_ctor((VirtualBase *)&self->MiddleB);
 MiddleA_ctor(self, (const void **)_vtt_parm);
 MiddleB_ctor((MiddleB *)(&self->dataA + 1), (const void **)&off_144F0);
 self->_vptr_MiddleA = (int (**)(...))&off_144A4;
 self->_vptr_MiddleB = (int (**)(...))&off_144D8;
 *(&self->dataA + 1) = (int)&off_144BC;
 return self;
}


/* Function: _ZN5PointC2Eii @ 0x12C74 */
Point * Point_ctor(Point *self, int _x, int _y)
{
 self->x = _x;
 self->y = _y;
 return self;
}


/* Function: _ZNK5PointplERKS_ @ 0x12CB8 */
Point * Point_operator_plus(Point *retstr, Point *self, const Point *other)
{
 Point_ctor(retstr, self->x + other->x, self->y + other->y);
 return retstr;
}


/* Function: _ZNK5PointeqERKS_ @ 0x12D10 */
bool Point_operator_eq(Point *self, const Point *other)
{
 return self->x == other->x && self->y == other->y;
}


/* Function: _ZN5PointppEv @ 0x12D70 */
Point * Point_operator_inc(Point *self)
{
 ++self->x;
 ++self->y;
 return self;
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
Container_int * Container_int_ctor(Container_int *self)
{
 self->size = 0;
 return self;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x12ED8 */
void Container_int_push(Container_int *self, int value)
{
 int size;

 if ( self->size <= 9 )
 {
 size = self->size;
 self->size = size + 1;
 self->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x12F2C */
int Container_int_get(Container_int *self, int idx)
{
 if ( idx < 0 || idx >= self->size )
 return 0;
 else
 return self->data[idx];
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x12F84 */
int Container_int_getSize(Container_int *self)
{
 return self->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x12FAC */
Container_double * Container_double_ctor(Container_double *self)
{
 self->size = 0;
 return self;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x12FDC */
void Container_double_push(Container_double *self, double value)
{
 int size;

 if ( self->size <= 9 )
 {
 size = self->size;
 self->size = size + 1;
 self->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x13040 */
double Container_double_get(Container_double *self, int idx)
{
 if ( idx < 0 || idx >= self->size )
 return 0.0;
 else
 return self->data[idx];
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x130A8 */
int Container_double_getSize(Container_double *self)
{
 return self->size;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ @ 0x130D0 */
std_uniq_ptr_data_int_default_delete * std_uniq_ptr_data_int_default_delete_move_constructor(
 std_uniq_ptr_data_int_default_delete *const self,
 std_uniq_ptr_data_int_default_delete *a2)
{
 std_uniq_ptr_impl_int_default_delete_move_constructor(self, a2);
 return self;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_ @ 0x13108 */
std_unique_ptr_int * std_unique_ptr_int_unique_ptr_move(
 std_unique_ptr_int *const self,
 std_unique_ptr_int *a2)
{
 std_uniq_ptr_data_int_default_delete_move_constructor(&self->_M_t, &a2->_M_t);
 return self;
}


/* Forward declarations for std::unique_ptr helper functions */
std_unique_ptr_int * std_unique_ptr_int_unique_ptr_default_delete_Pi(std_unique_ptr_int *const self, int *__p);

/* Function: _ZNK8RTTIBase7getTypeEv @ 0x13140 */
int RTTIBase_getType(const RTTIBase *self)
{
 return 0;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x13164 */
int RTTIDerivedA_getType(const RTTIDerivedA *self)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedA13derivedA_dataEv @ 0x13188 */
int RTTIDerivedA_derivedA_data(const RTTIDerivedA *self)
{
 return 100;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x131AC */
int RTTIDerivedB_getType(const RTTIDerivedB *self)
{
 return 2;
}


/* Function: _ZNK12RTTIDerivedB13derivedB_dataEv @ 0x131D0 */
int RTTIDerivedB_derivedB_data(const RTTIDerivedB *self)
{
 return 200;
}


/* Function: _ZN8RTTIBaseC2Ev @ 0x131F4 */
RTTIBase * RTTIBase_ctor(RTTIBase *self)
{
 self->_vptr_RTTIBase = (void *)off_1448C;
 return self;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x13228 */
void * RTTIBase_dtor(RTTIBase *self)
{
 self->_vptr_RTTIBase = (void *)off_1448C;
 return self;
}


/* Function: _ZN8RTTIBaseD0Ev @ 0x1325C */
void * RTTIBase_del_dtor(RTTIBase *self)
{
 RTTIBase_dtor(self);
 operator delete(self, 4u);
 return self;
}


/* Function: _ZN12RTTIDerivedAC2Ev @ 0x13290 */
RTTIDerivedA * RTTIDerivedA_ctor(RTTIDerivedA *self)
{
 RTTIBase_ctor(&self->base);
 self->base._vptr_RTTIBase = (void *)off_14478;
 return self;
}


/* Function: _ZN12RTTIDerivedBC2Ev @ 0x132CC */
RTTIDerivedB * RTTIDerivedB_ctor(RTTIDerivedB *self)
{
 RTTIBase_ctor(&self->base);
 self->base._vptr_RTTIBase = (void *)off_14464;
 return self;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi @ 0x13308 */
std_uniq_ptr_data_int_default_delete * std_uniq_ptr_data_int_default_delete_constructor(
 std_uniq_ptr_data_int_default_delete *const self,
 int *a2)
{
 std_uniq_ptr_impl_int_default_delete_constructor(self, a2);
 return self;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi @ 0x13340 */
std_unique_ptr_int * std_unique_ptr_int_unique_ptr_default_delete_void(
 std_unique_ptr_int *const self,
 int *__p)
{
 std_uniq_ptr_data_int_default_delete_constructor(&self->_M_t, __p);
 return self;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x13374 */
void * std_unique_ptr_int_destructor(std_unique_ptr_int *self)
{
 std_default_delete_int *deleter;
 int **v2;
 int **__ptr;

 __ptr = std_uniq_ptr_impl_int_default_delete_M_ptr(&self->_M_t);
 if ( *__ptr )
 {
 deleter = std_unique_ptr_int_get_deleter(self);
 v2 = std_move_int_ptr(__ptr);
 std_default_delete_int_operator(deleter, *v2);
 }
 *__ptr = 0;
 return self;
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv @ 0x133E8 */
int * std_unique_ptr_int_operator_star_const(const std_unique_ptr_int *self)
{
 return std_unique_ptr_int_get(self);
}


/* Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ @ 0x13418 */
std_unique_ptr_int * std_move_unique_ptr_int(std_unique_ptr_int *__t)
{
 return __t;
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2EOS3_ @ 0x1343C */
std_tuple_ptr_int_delete_int * std_Tuple_impl_0_int_default_delete_move(
 std_tuple_ptr_int_delete_int *const self,
 std_tuple_ptr_int_delete_int *a2)
{
 std_Tuple_impl_1_default_delete_move(&self->_M_head_impl2, &a2->_M_head_impl2);
 self->_M_head_impl = a2->_M_head_impl;
 a2->_M_head_impl = 0;
 return self;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_ @ 0x1347C */
std_tuple_ptr_int_delete_int * std_tuple_int_default_delete_move(
 std_tuple_ptr_int_delete_int *const self,
 std_tuple_ptr_int_delete_int *a2)
{
 std_Tuple_impl_0_int_default_delete_move(self, a2);
 return self;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_ @ 0x134B4 */
std_uniq_ptr_impl_int_default_delete * std_uniq_ptr_impl_int_default_delete_move_constructor(
 std_uniq_ptr_impl_int_default_delete *const self,
 std_uniq_ptr_impl_int_default_delete *__u)
{
 std_tuple_ptr_int_delete_int *v3; // r0

 v3 = std_move_tuple_ptr_int_delete_int(&__u->_M_t);
 std_tuple_int_default_delete_move(&self->_M_t, v3);
 *std_uniq_ptr_impl_int_default_delete_M_ptr(__u) = 0;
 return self;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi @ 0x1350C */
std_uniq_ptr_data_int_default_delete_array * std_uniq_ptr_data_int_default_delete_array_constructor(
 std_uniq_ptr_data_int_default_delete_array *const self,
 int *a2)
{
 std_uniq_ptr_impl_int_default_delete_array_constructor(self, a2);
 return self;
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ @ 0x13544 */
std_unique_ptr_int_array * std_unique_ptr_int_array_unique_ptr(
 std_unique_ptr_int_array *const self,
 int *__p)
{
 std_uniq_ptr_data_int_default_delete_array_constructor(&self->_M_t, __p);
 return self;
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x13578 */
void * std_unique_ptr_int_array_destructor(std_unique_ptr_int_array *self)
{
 std_default_delete_int_array *deleter;
 int **__ptr;

 __ptr = std_uniq_ptr_impl_int_default_delete_array_M_ptr(&self->_M_t);
 if ( *__ptr )
 {
 deleter = std_unique_ptr_int_array_get_deleter(self);
 std_default_delete_int_array_operator_int(deleter, *__ptr);
 }
 *__ptr = 0;
 return self;
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEj @ 0x135E4 */
int * std_unique_ptr_int_array_operator_index(const std_unique_ptr_int_array *self,
 size_t __i)
{
 return &std_unique_ptr_int_array_get(self)[__i];
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi @ 0x13624 */
std_uniq_ptr_impl_int_default_delete * std_uniq_ptr_impl_int_default_delete_constructor(
 std_uniq_ptr_impl_int_default_delete *const self,
 int *__p)
{
 std_tuple_ptr_int_delete_int_constructor(&self->_M_t);
 *std_uniq_ptr_impl_int_default_delete_M_ptr(self) = __p;
 return self;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x13668 */
int ** std_uniq_ptr_impl_int_default_delete_M_ptr(
 std_uniq_ptr_impl_int_default_delete *const self)
{
 return std_get_0_int_default_delete(&self->_M_t);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv @ 0x13694 */
std_default_delete_int * std_unique_ptr_int_get_deleter(std_unique_ptr_int *const self)
{
 return std_uniq_ptr_impl_int_default_delete_M_deleter(&self->_M_t);
}


/* Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ @ 0x136C0 */
int ** std_move_int_ptr(int **__t)
{
 return __t;
}


/* Function: _ZNKSt14default_deleteIiEclEPi @ 0x136E4 */
void std_default_delete_int_operator(const std_default_delete_int *self, int *__ptr)
{
 if ( __ptr )
 operator delete((void *)__ptr, 4u);
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv @ 0x1371C */
int * std_unique_ptr_int_get(const std_unique_ptr_int *self)
{
 return *std_uniq_ptr_impl_int_default_delete_M_ptr_const(&self->_M_t);
}


/* Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ @ 0x13748 */
std_tuple_ptr_int_delete_int * std_move_tuple_ptr_int_delete_int(std_tuple_ptr_int_delete_int *__t)
{
 return __t;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2EOS2_ @ 0x1376C */
std_default_delete_int * std_Tuple_impl_1_default_delete_move(
 std_default_delete_int *const self,
 std_default_delete_int *__in)
{
 return self;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi @ 0x13794 */
std_uniq_ptr_impl_int_default_delete_array * std_uniq_ptr_impl_int_default_delete_array_constructor(
 std_uniq_ptr_impl_int_default_delete_array *const self,
 int *__p)
{
 std_tuple_ptr_int_delete_int_array_constructor(&self->_M_t);
 *std_uniq_ptr_impl_int_default_delete_array_M_ptr(self) = __p;
 return self;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x137D8 */
int ** std_uniq_ptr_impl_int_default_delete_array_M_ptr(
 std_uniq_ptr_impl_int_default_delete_array *const self)
{
 return std_get_0_int_default_delete_array(&self->_M_t);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv @ 0x13804 */
std_default_delete_int_array * std_unique_ptr_int_array_get_deleter(
 std_unique_ptr_int_array *const self)
{
 return std_uniq_ptr_impl_int_default_delete_array_M_deleter(&self->_M_t);
}


/* Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsrSt14is_convertibleIPA_T_PS0_E5valueEvE4typeEPS5_ @ 0x13830 */
void std_default_delete_int_array_operator_int(const std_default_delete_int_array *self, int *__ptr)
{
 if ( __ptr )
 operator delete[](__ptr);
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv @ 0x13864 */
int * std_unique_ptr_int_array_get(const std_unique_ptr_int_array *self)
{
 return *std_uniq_ptr_impl_int_default_delete_array_M_ptr_const(&self->_M_t);
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv @ 0x13890 */
std_tuple_ptr_int_delete_int * std_tuple_ptr_int_delete_int_constructor(
 std_tuple_ptr_int_delete_int *const self)
{
 std_Tuple_impl_0_int_default_delete_constructor(self);
 return self;
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x138BC */
int ** std_get_0_int_default_delete(
 std_tuple_ptr_int_delete_int *__t)
{
 return std_get_helper_0_int_default_delete(__t);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv @ 0x138E8 */
std_default_delete_int * std_uniq_ptr_impl_int_default_delete_M_deleter(
 std_uniq_ptr_impl_int_default_delete *const self)
{
 return (std_default_delete_int *)std_get_1_int_default_delete(&self->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x13914 */
int * std_uniq_ptr_impl_int_default_delete_M_ptr_const(
 const std_uniq_ptr_impl_int_default_delete *const self)
{
 return *std_get_0_int_default_delete(&self->_M_t);
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv @ 0x13944 */
std_tuple_ptr_int_delete_int_array * std_tuple_ptr_int_delete_int_array_constructor(
 std_tuple_ptr_int_delete_int_array *const self)
{
 std_Tuple_impl_0_int_default_delete_array_constructor(self);
 return self;
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x13970 */
int ** std_get_0_int_default_delete_array(
 std_tuple_ptr_int_delete_int_array *__t)
{
 return std_get_helper_0_int_default_delete_array(__t);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv @ 0x1399C */
std_default_delete_int_array * std_uniq_ptr_impl_int_default_delete_array_M_deleter(
 std_uniq_ptr_impl_int_default_delete_array *const self)
{
 return (std_default_delete_int_array *)std_get_1_int_default_delete_array(&self->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x139C8 */
int * std_uniq_ptr_impl_int_default_delete_array_M_ptr_const(
 const std_uniq_ptr_impl_int_default_delete_array *const self)
{
 return *std_get_0_int_default_delete_array(&self->_M_t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2Ev @ 0x139F8 */
std_tuple_ptr_int_delete_int * std_Tuple_impl_0_int_default_delete_constructor(
 std_tuple_ptr_int_delete_int *const self)
{
 std_Tuple_impl_1_default_delete_constructor(&self->_M_head_impl2);
 self->_M_head_impl = 0;
 return self;
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x13A2C */
int ** std_get_helper_0_int_default_delete(
 std_tuple_ptr_int_delete_int *__t)
{
 return std_Tuple_impl_0_int_default_delete_M_head(__t);
}


/* Function: _ZSt3getILj1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x13A54 */
std_default_delete_int * std_get_1_int_default_delete(
 std_tuple_ptr_int_delete_int *__t)
{
 return (std_default_delete_int *)std_get_helper_1_int_default_delete(__t);
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ @ 0x13A7C */
int *const * std_get_0_int_default_delete_const(
 const std_tuple_ptr_int_delete_int *__t)
{
 return std_get_helper_0_int_default_delete_const(__t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEEC2Ev @ 0x13AA8 */
std_tuple_ptr_int_delete_int_array * std_Tuple_impl_0_int_default_delete_array_constructor(
 std_tuple_ptr_int_delete_int_array *const self)
{
 std_Tuple_impl_1_default_delete_array_constructor(&self->_M_head_impl2);
 self->_M_head_impl = 0;
 return self;
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x13ADC */
int ** std_get_helper_0_int_default_delete_array(
 std_tuple_ptr_int_delete_int_array *__t)
{
 return std_Tuple_impl_0_int_default_delete_array_M_head(__t);
}


/* Function: _ZSt3getILj1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x13B04 */
std_default_delete_int_array * std_get_1_int_default_delete_array(
 std_tuple_ptr_int_delete_int_array *__t)
{
 return (std_default_delete_int_array *)std_get_helper_1_int_default_delete_array(__t);
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ @ 0x13B2C */
int *const * std_get_0_int_default_delete_array_const(
 const std_tuple_ptr_int_delete_int_array *__t)
{
 return std_get_helper_0_int_default_delete_array_const(__t);
}


/* Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE @ 0x13B58 */
int ** std_forward_int_ptr(int **__t)
{
 return __t;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2Ev @ 0x13B7C */
std_default_delete_int * std_Tuple_impl_1_default_delete_constructor(
 std_default_delete_int *const self)
{
 return self;
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EEC2Ev @ 0x13BA4 */
int * std_Head_base_0_int_false_constructor(int *self)
{
 *self = 0;
 return self;
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERS3_ @ 0x13BD4 */
int ** std_Tuple_impl_0_int_default_delete_M_head(
 std_tuple_ptr_int_delete_int *__t)
{
 return std_Head_base_0_int_false_M_head(__t);
}


/* Function: _ZSt12__get_helperILj1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x13C00 */
std_default_delete_int * std_get_helper_1_int_default_delete(
 std_default_delete_int *__t)
{
 return std_Tuple_impl_1_default_delete_M_head(__t);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x13C28 */
int *const * std_get_helper_0_int_default_delete_const(
 const std_tuple_ptr_int_delete_int *__t)
{
 return std_Tuple_impl_0_int_default_delete_M_head_const(__t);
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEEC2Ev @ 0x13C50 */
std_default_delete_int_array * std_Tuple_impl_1_default_delete_array_constructor(
 std_default_delete_int_array *const self)
{
 return self;
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ @ 0x13C78 */
int ** std_Tuple_impl_0_int_default_delete_array_M_head(
 std_tuple_ptr_int_delete_int_array *__t)
{
 return std_Head_base_0_int_false_M_head_array(__t);
}


/* Function: _ZSt12__get_helperILj1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x13CA4 */
std_default_delete_int_array * std_get_helper_1_int_default_delete_array(
 std_default_delete_int_array *__t)
{
 return std_Tuple_impl_1_default_delete_array_M_head(__t);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x13CCC */
int *const * std_get_helper_0_int_default_delete_array_const(
 const std_tuple_ptr_int_delete_int_array *__t)
{
 return std_Tuple_impl_0_int_default_delete_array_M_head_const(__t);
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EEC2IRS0_EEOT_ @ 0x13CF4 */
int * std_Head_base_0_int_false_constructor_ptr(
 int *self,
 int **__h)
{
 *self = *__h;
 return self;
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EEC2Ev @ 0x13D30 */
std_default_delete_int * std_Head_base_1_default_delete_int_constructor(
 std_default_delete_int *const self)
{
 return self;
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERS1_ @ 0x13D54 */
int ** std_Head_base_0_int_false_M_head(int *__b)
{
 return (int **)&__b;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEE7_M_headERS2_ @ 0x13D78 */
std_default_delete_int * std_Tuple_impl_1_default_delete_M_head(
 std_default_delete_int *__t)
{
 return std_Head_base_1_default_delete_int_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERKS3_ @ 0x13DA0 */
int *const * std_Tuple_impl_0_int_default_delete_M_head_const(
 const std_tuple_ptr_int_delete_int *__t)
{
 return (int *const *)&__t->_M_head_impl;
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EEC2Ev @ 0x13DCC */
std_default_delete_int_array * std_Head_base_1_default_delete_int_array_constructor(
 std_default_delete_int_array *const self)
{
 return self;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEE7_M_headERS3_ @ 0x13DF0 */
std_default_delete_int_array * std_Tuple_impl_1_default_delete_array_M_head(
 std_default_delete_int_array *__t)
{
 return std_Head_base_1_default_delete_int_array_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ @ 0x13E18 */
int *const * std_Tuple_impl_0_int_default_delete_array_M_head_const(
 const std_tuple_ptr_int_delete_int_array *__t)
{
 return (int *const *)&__t->_M_head_impl;
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EE7_M_headERS2_ @ 0x13E44 */
std_default_delete_int * std_Head_base_1_default_delete_int_M_head(
 std_default_delete_int *__b)
{
 return __b;
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERKS1_ @ 0x13E68 */
int *const * std_Head_base_0_int_false_M_head_const(
 const int *__b)
{
 return (int *const *)&__b;
}

/* Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERKS1_ @ 0x13E68 (const version for tuple) */
int *const * std_Head_base_0_int_false_M_head_const(
 const std_tuple_ptr_int_delete_int *__b)
{
 return (int *const *)&__b->_M_head_impl;
}

/* Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERKS1_ @ 0x13E68 (const version for array tuple) */
int *const * std_Head_base_0_int_false_M_head_const_array(
 const std_tuple_ptr_int_delete_int_array *__b)
{
 return (int *const *)&__b->_M_head_impl;
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EE7_M_headERS3_ @ 0x13E8C */
std_default_delete_int_array * std_Head_base_1_default_delete_int_array_M_head(
 std_default_delete_int_array *__b)
{
 return __b;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x13EB0 */
void * RTTIDerivedB_dtor(RTTIDerivedB *self)
{
 self->base._vptr_RTTIBase = (void *)off_14464;
 RTTIBase_dtor(&self->base);
 return self;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x13EEC */
void * RTTIDerivedB_del_dtor(RTTIDerivedB *self)
{
 RTTIDerivedB_dtor(self);
 operator delete(self, 4u);
 return self;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x13F20 */
void * RTTIDerivedA_dtor(RTTIDerivedA *self)
{
 self->base._vptr_RTTIBase = (void *)off_14478;
 RTTIBase_dtor(&self->base);
 return self;
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x13F5C */
void * RTTIDerivedA_del_dtor(RTTIDerivedA *self)
{
 RTTIDerivedA_dtor(self);
 operator delete(self, 4u);
 return self;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x13F90 */
void * DiamondDerived_dtor(DiamondDerived *self)
{
 self->_vptr_MiddleA = (int (**)(...))&off_144A4;
 self->_vptr_MiddleB = (int (**)(...))&off_144D8;
 *(&self->dataA + 1) = (int)&off_144BC;
 MiddleB_dtor((MiddleB *)(&self->dataA + 1), (const void **)&off_144F0);
 MiddleA_dtor(self, (const void **)&_vtt_parm);
 VirtualBase_dtor((VirtualBase *)&self->MiddleB);
 return self;
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x14028 */
void DiamondDerived_dtor_thunk(DiamondDerived *self)
{
 DiamondDerived_dtor((DiamondDerived *)((char *)self - 8));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x14030 */
void DiamondDerived_dtor_vthunk(DiamondDerived *self)
{
 DiamondDerived_dtor((DiamondDerived *)((char *)self + *((unsigned int *)self->MiddleB._vptr_MiddleB - 4)));
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x14044 */
void * DiamondDerived_del_dtor(DiamondDerived *self)
{
 DiamondDerived_dtor(self);
 operator delete(self, 0x18u);
 return self;
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x14078 */
void DiamondDerived_del_dtor_thunk(DiamondDerived *self)
{
 DiamondDerived_del_dtor((DiamondDerived *)((char *)self - 8));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x14080 */
void DiamondDerived_del_dtor_vthunk(DiamondDerived *self)
{
 DiamondDerived_del_dtor((DiamondDerived *)((char *)self + *((unsigned int *)self->MiddleB._vptr_MiddleB - 4)));
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x14094 */
void * MultiDerived_dtor(MultiDerived *self)
{
 self->BaseA._vptr_BaseA = (int (**)(...))&off_14584;
 self->BaseB._vptr_BaseB = (int (**)(...))&off_1459C;
 BaseB_dtor(&self->BaseB);
 BaseA_dtor(self);
 return self;
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x140F0 */
void MultiDerived_dtor_thunk(MultiDerived *self)
{
 MultiDerived_dtor((MultiDerived *)((char *)self - 8));
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x140F8 */
void * MultiDerived_del_dtor(MultiDerived *self)
{
 MultiDerived_dtor(self);
 operator delete(self, 0x10u);
 return self;
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x1412C */
void MultiDerived_del_dtor_thunk(MultiDerived *self)
{
 MultiDerived_del_dtor((MultiDerived *)((char *)self - 8));
}


/* Function: _ZN7DerivedD2Ev @ 0x14134 */
void * Derived_dtor(Derived *self)
{
 self->Base._vptr_Base = (int (**)(...))&off_145D8;
 Base_dtor(self);
 return self;
}


/* Function: _ZN7DerivedD0Ev @ 0x14170 */
void * Derived_del_dtor(Derived *self)
{
 Derived_dtor(self);
 operator delete(self, 8u);
 return self;
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
