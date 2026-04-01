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

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-1/5-1_gcc_O0_g
 * Processor: arm
 */

/* Forward declarations and class definitions */
typedef struct Base Base;
typedef struct SimpleClass SimpleClass;
typedef struct LifecycleClass LifecycleClass;
typedef struct Derived Derived;
typedef struct Point Point;
typedef struct MultiDerived MultiDerived;
typedef struct DiamondDerived DiamondDerived;
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;
typedef struct BaseA BaseA;
typedef struct BaseB BaseB;
typedef struct VirtualBase VirtualBase;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct std_unique_ptr_int std_unique_ptr_int;

struct Base {
 int (**_vptr_Base)(...);
};

struct SimpleClass {
 int value;
 char name[32];
};

struct LifecycleClass {
 size_t size;
 int *data;
 static int instance_count;
};

struct Derived {
 int (**_vptr_Base)(...);
 int multiplier;
};

struct Point {
 int x;
 int y;
};

struct BaseA {
 int (**_vptr_BaseA)(...);
};

struct BaseB {
 int (**_vptr_BaseB)(...);
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

struct MultiDerived {
 int (**_vptr_BaseA)(...);
 int (**_vptr_BaseB)(...);
 BaseA BaseA;
 BaseB BaseB;
 int dataA;
 int dataB;
};

struct DiamondDerived {
 int (**_vptr_MiddleA)(...);
 int (**_vptr_MiddleB)(...);
 unsigned long long vptr_offset;
 int dataA;
 int dataB;
};

/* Template Container as C structs */
struct Container_int {
 int size;
 int data[10];
};

struct Container_double {
 int size;
 double data[10];
};

struct RTTIBase {
 int (**_vptr)(...);
};

struct RTTIDerivedA {
 int (**_vptr)(...);
};

struct RTTIDerivedB {
 int (**_vptr)(...);
};

/* Tuple element types */
struct std___tuple_element_t {
 int **ptr;
};

struct std___tuple_element_t_0 {
 int **ptr;
};

struct std___tuple_element_t_1 {
 struct std_default_delete_int del;
};

/* std::unique_ptr definition for int */
struct std_unique_ptr_int {
 union {
  struct {int **ptr; struct std_default_delete_int del;} _M_t_std_default_delete_int;
  struct {int **ptr; struct std_default_delete_int___ del;} _M_t_std_default_delete_int_array;
  struct {int **ptr; struct {unsigned char gap0;} del;} _M_t_lambda;
  struct {int **ptr; struct {unsigned char gap0;} del;} _M_t_impl;
 } _M_t;
};

/* Vtable external declarations */
extern int (*off_16B10)(...);
extern int (*off_16AE0)(...);
extern int (*off_16AB8)(...);
extern int (*off_16A90)(...);
extern int (*off_16A38)(...);
extern int (*off_16A68)(...);
extern int (*off_16A10)(...);
extern int (*off_16878)(...);
extern int (*off_168E0)(...);
extern int (*off_168A8)(...);
extern int (*off_16848)(...);
extern int (*off_16820)(...);
extern int (*off_167F8)(...);
extern const void *off_16900;
extern const void *off_16910;

/* Template function declarations (as C functions) */
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);

/* Additional type declarations for smart_ptr functions */
typedef struct std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_;
typedef int * std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int__pointer;

struct std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ {
 struct {int **ptr; struct {unsigned char gap0;} del;} _M_t;
};

/* Forward declare and define default_delete types */
struct std_default_delete_int {
 char _M_head_impl[0];
};

struct std_default_delete_int___ {
 char _M_head_impl[0];
};

/* Head base types */
struct std_Head_base_0ul_int_ptr_false {
 int *_M_head_impl;
};

struct std_Head_base_1ul_std_default_delete_int_true {
 char _M_head_impl[0];
};

struct std_Head_base_1ul_std_default_delete_int_array_true {
 char _M_head_impl[0];
};

/* Standard library function declarations */
size_t strlen(const char *s);
int puts(const char *s);
int strcmp(const char *s1, const char *s2);
int printf(const char *format, ...);

/* String constants */
extern const char asc_45E8[];
char *strncpy(char *dest, const char *src, size_t n);
extern const char aCppL301D[];
extern const char aCppL302D[];
extern const char aCppL303D[];
extern const char aCppL304D[];
extern const char aCppL305D[];
extern const char aCppL306D[];
extern const char aCppL307D[];
extern const char aCppL308D[];
extern const char aCppL309D[];

/* Builtin memory allocation functions */
void *__builtin_new(unsigned long size);
void __builtin_delete(void *ptr, unsigned long size);
void *__builtin_new_array(unsigned long size);
void __builtin_delete_array(void *ptr);

/* std::unique_ptr wrapper functions */
struct std_unique_ptr_int * std_move_unique_ptr_int(struct std_unique_ptr_int *__t);
void std_tuple_int_ptr_std_default_delete_int___tuple(struct {int **ptr; struct std_default_delete_int del;} *const this);
void std_tuple_int_ptr_std_default_delete_int___tuple_true_true_(struct {int **ptr; struct std_default_delete_int del;} *const this);
void std_tuple_int_ptr_std_default_delete_int_array___tuple_true_true_(struct {int **ptr; struct std_default_delete_int___ del;} *const this);
void std__tuple_int_ptr_std_default_delete_int___tuple(struct {int **ptr; struct std_default_delete_int del;} *const this, struct {int **ptr; struct std_default_delete_int del;} *a2);
void std_unique_ptr_int_unique_ptr2(struct std_unique_ptr_int *const this, struct std_unique_ptr_int *other);
int *std_unique_ptr_int_operator_star(const struct std_unique_ptr_int *const this);
void std_unique_ptr_int_array_unique_ptr(struct std_unique_ptr_int *const this, int *ptr);
int *std_unique_ptr_int_array_operator_index(const struct std_unique_ptr_int *const this, unsigned long idx);
void std_unique_ptr_int_custom_destructor(struct std_unique_ptr_int *const this);
void std_unique_ptr_int_array_destructor(struct std_unique_ptr_int *const this);
void std_unique_ptr_int_destructor2(struct std_unique_ptr_int *const this);
void std_unique_ptr_int_destructor(struct std_unique_ptr_int *const this);
int *std_unique_ptr_int_custom_operator_star(const struct std_unique_ptr_int *const this);
void RTTIDerivedA_RTTIDerivedA(RTTIDerivedA *const this);
void std_unique_ptr_int_test_cpp_smart_ptr_void___lambda_int_p___unique_ptr_test_cpp_smart_ptr_void___lambda_int_p___void_(
 std_unique_ptr_int *const this,
 int *ptr,
 const struct {unsigned char gap0;} *__d);

/* Lambda-based unique_ptr helper functions */
int ** std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_p_M_ptr(std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ *const this);
struct {unsigned char gap0;} * std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_get_deleter(std_unique_ptr_int *const this);
int * std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_get(const std_unique_ptr_int *const this);
void test_cpp_smart_ptr_lambda_int__operator()(const struct {unsigned char gap0;} *const __closure, int *p);
const struct {unsigned char gap0;} * std_forward_test_cpp_smart_ptr_void___lambda_int_p__const_(const struct {unsigned char gap0;} *__t);
void std_tuple_int_ptr_test_cpp_smart_ptr_lambda_int_p__tuple(
 struct {int **ptr; struct {unsigned char gap0;} del;} *const this,
 int **__head,
 const struct {unsigned char gap0;} *a3);
void std__Tuple_impl_1ul_test_cpp_smart_ptr_lambda_int_p___Tuple_impl(
 struct {struct {unsigned char gap0;} head;} *const this,
 const struct {unsigned char gap0;} *__head);
void std__Head_base_0ul_int_ptr_false__Head_base_int_ptr__(
 struct {int *ptr;} *const this,
 int **__h);

/* std::type_info functions */
struct type_info;
const char *std_type_info_name(const struct type_info *ti);
bool std_type_info_operator_equal(const struct type_info *a, const struct type_info *b);

/* Additional missing function declarations */
struct {unsigned char gap0;} * std_get_1ul_int_ptr_test_cpp_smart_ptr_lambda_int_p_(
 struct {int **ptr; struct {unsigned char gap0;} del;} *__t);
struct std_default_delete_int * std_unique_ptr_int_get_deleter(std_unique_ptr_int *const this);
int * std_unique_ptr_int_get(const std_unique_ptr_int *const this);
int * std_unique_ptr_int_array_get(const std_unique_ptr_int *const this);
void std_default_delete_int_array_operator_int(const struct std_default_delete_int___ *const this, int *__ptr);
int ** std_move_int_ptr_ptr(int **__t);
void std__Tuple_impl_1ul_std_default_delete_int___Tuple_impl(
 struct {int **ptr; struct std_default_delete_int del;} *const this);
void std__Tuple_impl_1ul_std_default_delete_int___Tuple_impl_(
 struct {int **ptr; struct std_default_delete_int del;} *const this);
void std__Tuple_impl_1ul_std_default_delete_int_array___Tuple_impl(
 struct {int **ptr; struct std_default_delete_int___ del;} *const this);
int ** std__get_1ul_int_ptr_std_default_delete_int_(
 struct {int **ptr; struct std_default_delete_int del;} *__t);
int ** std__get_1ul_int_ptr_std_default_delete_int_array_(
 struct {int **ptr; struct std_default_delete_int___ del;} *__t);
struct std_default_delete_int___ * std_unique_ptr_int_array_get_deleter_(
 std_unique_ptr_int *const this);
struct std_default_delete_int___ * std___uniq_ptr_impl_int_std_default_delete_int_array___M_deleter(
 struct {int **ptr; struct std_default_delete_int___ del;} *const this);
void std___uniq_ptr_impl_int_std_default_delete_int_____uniq_ptr_impl_2(
 struct {int **ptr; struct std_default_delete_int del;} *const this, int *__p);

/* RTTIDerived additional function declarations */
void RTTIDerivedB_RTTIDerivedB(RTTIDerivedB *const this);
int RTTIDerivedA_derivedA_data(const RTTIDerivedA *const this);
int RTTIDerivedB_derivedB_data(const RTTIDerivedB *const this);

/* std::ios_base::Init functions */
struct std_ios_base_Init;
void std_ios_base_Init_Init(struct std_ios_base_Init *this);
void std_ios_base_Init_destructor(struct std_ios_base_Init *this);

/* std::tuple helper functions */
struct std_tuple_element_t;
struct std_tuple_element_t_0;
struct std_tuple_element_t_1;
struct std___tuple_element_t;

/* Additional function declarations for tuple helpers */
void std_tuple_int__test_cpp_smart_ptr_void___lambda_int_p___tuple(
 struct {int **ptr; struct {unsigned char gap0;} del;} *const this,
 int **__a1,
 const struct {unsigned char gap0;} *__a2);
int ** std_get_0ul_int__test_cpp_smart_ptr_void___lambda_int_p_(
 struct {int **ptr; struct {unsigned char gap0;} del;} *__t);
struct {unsigned char gap0;} * std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int__M_deleter(
 std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ *const this);
struct {unsigned char gap0;} * std__get_helper_1ul_std_default_delete_int_(
 struct {struct {unsigned char gap0;} head;} *__t);
struct {unsigned char gap0;} * std__get_helper_1ul_std_default_delete_int_array_(
 struct {struct {unsigned char gap0;} head;} *__t);

/* std::forward and std::move templates */
int **std_move_int_ptr_ptr(int **__t);
int **std_forward_int_ptr_ptr(int **__t);

/* std::default_delete functions */
struct std_default_delete_int;
void std_default_delete_int_operator(struct std_default_delete_int *this, int *ptr);

/* Exception handling functions */
void __cxa_bad_typeid(void);
void *__dynamic_cast(void *src_ptr, const struct __class_type_info *src_type, const struct __class_type_info *dst_type, int src2dst_offset);

/* Global objects */
extern struct std_ios_base_Init std___ioinit;
extern void *_dso_handle;
extern void __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);

/* SimpleClass function declarations */
void SimpleClass_SimpleClass(SimpleClass *const this, int v, const char *n);
int SimpleClass_getValue(const SimpleClass *const this);
void SimpleClass_setValue(SimpleClass *const this, int v);
int SimpleClass_compute(const SimpleClass *const this, int x);
int SimpleClass_getClassID(void);

/* std namespace forward declarations removed - C does not support namespaces */

/* Container template class function declarations */
void Container_int_Container(struct Container_int *const this);
void Container_int_push(struct Container_int *const this, int value);
int Container_int_get(const struct Container_int *const this, int idx);
int Container_int_getSize(const struct Container_int *const this);
void Container_double_Container(struct Container_double *const this);
void Container_double_push(struct Container_double *const this, double value);
double Container_double_get(const struct Container_double *const this, int idx);
int Container_double_getSize(const struct Container_double *const this);

/* Static member initialization */
int LifecycleClass_instance_count = 0;

/* Forward function declarations */
long long call_weak_fn(void);

/* Function: .init_proc @ 0x1820 */
long long init_proc()
{
 return call_weak_fn();
}


/* JUMPOUT is a decompiler macro - define as unreachable */
#define JUMPOUT(x) __builtin_unreachable()

/* Function: sub_1840 @ 0x1840 */
void sub_1840()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x1B14 */
int test_cpp_member_func()
{
 int r1; // [xsp+14h] [xbp+14h]
 int r2; // [xsp+18h] [xbp+18h]
 SimpleClass obj; // [xsp+20h] [xbp+20h] BYREF

 SimpleClass_SimpleClass(&obj, 5, (const char*)"Test");
 SimpleClass_setValue(&obj, 10);
 r1 = SimpleClass_getValue(&obj);
 r2 = SimpleClass_compute(&obj, 3);
 return r1 + r2 + SimpleClass_getClassID();
}


/* Function: _Z20test_cpp_constructorv @ 0x1BBC */
int test_cpp_constructor()
{
 int result; // [xsp+14h] [xbp+14h]
 int resulta; // [xsp+14h] [xbp+14h]
 LifecycleClass obj; // [xsp+18h] [xbp+18h] BYREF

 /* Use external constructor function */
 extern void LifecycleClass_LifecycleClass(LifecycleClass *this, size_t s);
 extern int LifecycleClass_getData(const LifecycleClass *this, size_t idx);
 extern int LifecycleClass_getInstanceCount(void);
 extern void LifecycleClass_destructor(LifecycleClass *this);
 
 LifecycleClass_LifecycleClass(&obj, 5u);
 result = LifecycleClass_getData(&obj, 2u);
 resulta = result + LifecycleClass_getInstanceCount();
 LifecycleClass_destructor(&obj);
 return resulta + 1000 * LifecycleClass_getInstanceCount();
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x1C70 */
int call_virtual_func(Base *obj, int x)
{
 return (*obj->_vptr_Base)(obj, (unsigned int)x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1CA0 */
int test_cpp_virtual_func()
{
 int v0; // w19
 int r1; // [xsp+20h] [xbp+20h]
 int r2; // [xsp+24h] [xbp+24h]
 int r3; // [xsp+28h] [xbp+28h]
 Base base; // [xsp+30h] [xbp+30h] BYREF
 Base *pb; // [xsp+38h] [xbp+38h]
 Base *pd; // [xsp+40h] [xbp+40h]
 Derived derived; // [xsp+48h] [xbp+48h] BYREF

 extern void Base_Base(Base *this);
 extern void Derived_Derived(Derived *this, int m);
 extern int Base_virtual_func(Base *this, int x);
 extern int Derived_virtual_func(Derived *this, int x);
 extern void Derived_destructor(Derived *this);
 extern void Base_destructor(Base *this);

 base._vptr_Base = (int (**)(...))&off_16B10;
 Base_Base(&base);
 Derived_Derived(&derived, 3);
 r1 = Base_virtual_func(&base, 5);
 r2 = Derived_virtual_func(&derived, 5);
 pb = &base;
 pd = &derived;
 r3 = call_virtual_func(&base, 5);
 v0 = r1 + r2 + r3 + call_virtual_func(pd, 5);
 Derived_destructor(&derived);
 Base_destructor(&base);
 return v0;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1DA8 */
int test_cpp_multiple_inheritance()
{
 int v0; // w19
 int r1; // [xsp+2Ch] [xbp+2Ch]
 MultiDerived obj; // [xsp+48h] [xbp+48h] BYREF
 extern void MultiDerived_MultiDerived(MultiDerived *this);
 extern void MultiDerived_destructor(MultiDerived *this);

 MultiDerived_MultiDerived(&obj);
 obj.dataA = 100;
 obj.dataB = 200;
 r1 = (*obj._vptr_BaseA)(&obj);
 v0 = r1 + (*(long long ( **)(BaseB *))obj._vptr_BaseB)(&obj.BaseB) + (&obj != (MultiDerived *)&obj.BaseB);
 MultiDerived_destructor(&obj);
 return v0;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1EA4 */
int test_cpp_diamond_inheritance()
{
 int v0; // w19
 int r1; // [xsp+28h] [xbp+28h]
 unsigned char obj[44]; // [xsp+38h] [xbp+38h] BYREF
 extern void DiamondDerived_DiamondDerived(DiamondDerived *this);
 extern void DiamondDerived_destructor(DiamondDerived *this);

 DiamondDerived_DiamondDerived((DiamondDerived *const)obj);
 *(unsigned int *)&obj[40] = 50;
 r1 = (**(long long ( ***)(unsigned char *))&obj[32])(&obj[32]);
 *(unsigned int *)&obj[40] = 100;
 v0 = r1 + (**(long long ( ***)(unsigned char *))&obj[32])(&obj[32]);
 DiamondDerived_destructor((DiamondDerived *const)obj);
 return v0;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1F78 */
int test_cpp_operator_overload()
{
 int v0; // w0
 int eq; // [xsp+1Fh] [xbp+1Fh]
 Point p1; // [xsp+20h] [xbp+20h] BYREF
 Point p2; // [xsp+28h] [xbp+28h] BYREF
 Point p3; // [xsp+30h] [xbp+30h] BYREF
 extern void Point_Point(Point *this, int _x, int _y);
 extern Point Point_operator_plus(const Point *this, const Point *other);
 extern int Point_operator_equals(const Point *this, const Point *other);
 extern Point *Point_operator_increment(Point *this);

 Point_Point(&p1, 1, 2);
 Point_Point(&p2, 3, 4);
 p3 = Point_operator_plus(&p1, &p2);
 eq = Point_operator_equals(&p1, &p2);
 Point_operator_increment(&p3);
 if ( eq )
 v0 = 0;
 else
 v0 = 10;
 return v0 + p3.x + p3.y;
}


/* Function: _Z22test_cpp_template_funcv @ 0x2034 */
int test_cpp_template_func()
{
 int a; // [xsp+14h] [xbp+14h] BYREF
 int b; // [xsp+18h] [xbp+18h] BYREF
 int r1; // [xsp+1Ch] [xbp+1Ch]
 double r2; // [xsp+20h] [xbp+20h]

 r1 = template_max_int(3, 7);
 r2 = template_max_double(2.5, 1.5);
 a = 10;
 b = 20;
 template_swap_int(&a, &b);
 return (int)r2 + r1 + a + b;
}


/* Function: _Z23test_cpp_template_classv @ 0x20DC */
int test_cpp_template_class()
{
 int r1; // [xsp+10h] [xbp+10h]
 int r2; // [xsp+14h] [xbp+14h]
 struct Container_int int_container; // [xsp+20h] [xbp+20h] BYREF
 struct Container_double double_container; // [xsp+50h] [xbp+50h] BYREF

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


/* Function: _ZZ15test_cpp_lambdavENKUliE_clEi @ 0x21B0 */
/* Lambda function - defined in C style */
int test_cpp_lambda_operator(
 const struct {int __capture_by_value;int *__capture_by_ref;} *const __closure,
 int x)
{
 *__closure->__capture_by_ref += 5;
 return __closure->__capture_by_value * x + *__closure->__capture_by_ref;
}


/* Function: _Z15test_cpp_lambdav @ 0x2200 */
// local variable allocation has failed, the output may be wrong!
int test_cpp_lambda()
{
 int capture_by_ref; // [xsp+18h] [xbp+18h] BYREF
 int capture_by_value; // [xsp+1Ch] [xbp+1Ch]
 struct lambda_closure {int __capture_by_value;int *__capture_by_ref;} lambda2; // [xsp+28h] [xbp+28h] OVERLAPPED BYREF
 int *p_capture_by_ref; // [xsp+30h] [xbp+30h]

 capture_by_value = 10;
 capture_by_ref = 20;
 lambda2.__capture_by_value = 10;
 p_capture_by_ref = &capture_by_ref;
 lambda2.__capture_by_ref = p_capture_by_ref;
 return test_cpp_lambda_operator(
 (const struct lambda_closure *)&lambda2,
 3)
 + 30;
}


/* Function: _Z18test_cpp_exceptionv @ 0x2290 */
/* External declarations for C++ exception handling */
extern void *__cxa_allocate_exception(unsigned int);
extern void __cxa_throw(void *, struct type_info *, void (*)(void *));

int test_cpp_exception()
{
 unsigned int *exception; // x0

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)"typeinfo for int", 0);
}


/* Function: _ZZ18test_cpp_smart_ptrvENKUlPiE_clES_ @ 0x23B4 */
void test_cpp_smart_ptr_lambda_int__operator()(
 const struct {unsigned char gap0;} *const __closure)
{
 int *ptr;
 int *p;
 ptr = p;
 if ( ptr )
 {
 *ptr = -1;
 __builtin_delete(ptr, 4u);
 }
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x23F0 */
int test_cpp_smart_ptr()
{
 int *v0; // x0
 struct std_unique_ptr_int *v1; // x0
 int *p; // x2
 int *v2; // x2
 int *v3; // x0
 int v4; // w19
 struct {unsigned char gap0;} deleter; // [xsp+28h] [xbp+28h] BYREF
 int r1; // [xsp+2Ch] [xbp+2Ch]
 int r2; // [xsp+30h] [xbp+30h]
 int r3; // [xsp+34h] [xbp+34h]
 struct std_unique_ptr_int ptr2; // [xsp+38h] [xbp+38h] BYREF
 struct std_unique_ptr_int ptr3; // [xsp+48h] [xbp+48h] BYREF

 v0 = (int *)__builtin_new(4u);
 *v0 = 100;
 std_unique_ptr_int_unique_ptr2(&ptr2, v0);
 *std_unique_ptr_int_operator_star(&ptr2) = 200;
 v1 = std_move_unique_ptr_int(&ptr2);
 std_unique_ptr_int_unique_ptr2((struct std_unique_ptr_int *const)&ptr2, v1);
 r1 = *std_unique_ptr_int_operator_star((const struct std_unique_ptr_int *const)&ptr2);
 v2 = (int *)__builtin_new_array(0x14u);
 *v2 = 1;
 v2[1] = 2;
 v2[2] = 3;
 v2[3] = 4;
 v2[4] = 5;
 std_unique_ptr_int_array_unique_ptr(
 (struct std_unique_ptr_int *const)&ptr3,
 v2);
 r2 = *std_unique_ptr_int_array_operator_index((const struct std_unique_ptr_int *const)&ptr3, 2u);
 v3 = (int *)__builtin_new(4u);
 *v3 = 500;
 std_unique_ptr_int_test_cpp_smart_ptr_void___lambda_int_p___unique_ptr_test_cpp_smart_ptr_void___lambda_int_p___void_(
 (std_unique_ptr_int *)&ptr3._M_t,
 v3,
 (const const struct {unsigned char gap0;} *)&deleter);
 r3 = *std_unique_ptr_int_custom_operator_star((const struct std_unique_ptr_int *const)&ptr3);
 v4 = r1 + r2 + r3;
 std_unique_ptr_int_custom_destructor((struct std_unique_ptr_int *const)&ptr3);
 std_unique_ptr_int_array_destructor((struct std_unique_ptr_int *const)&ptr3);
 std_unique_ptr_int_destructor2((struct std_unique_ptr_int *const)&ptr2);
 std_unique_ptr_int_destructor(&ptr2);
 return v4;
}


/* Function: _Z13test_cpp_rttiv @ 0x25A0 */
int test_cpp_rtti()
{
 RTTIDerivedA *v0; // x19
 RTTIDerivedB *v1; // x19
 const RTTIDerivedA *v2; // x0
 const RTTIDerivedB *v3; // x0
 const char *v4; // x0
 int result; // [xsp+2Ch] [xbp+2Ch]
 int resulta; // [xsp+2Ch] [xbp+2Ch]
 RTTIBase *obj1; // [xsp+30h] [xbp+30h]

 v0 = (RTTIDerivedA *)__builtin_new(8u);
 v0->_vptr = 0;
 RTTIDerivedA_RTTIDerivedA(v0);
 obj1 = v0;
 v1 = (RTTIDerivedB *)__builtin_new(8u);
 v1->_vptr = 0;
 RTTIDerivedB_RTTIDerivedB(v1);
 result = 0;
 if ( !obj1 )
 __cxa_bad_typeid();
 if ( std_type_info_operator_equal(
 *((const struct type_info *const *)obj1->_vptr - 1),
 (const struct type_info *)"typeinfo for RTTIDerivedA") )
 {
 result = 10;
 }
 if ( !v1 )
 __cxa_bad_typeid();
 if ( std_type_info_operator_equal(
 *((const struct type_info *const *)v1->_vptr - 1),
 (const struct type_info *)"typeinfo for RTTIDerivedB") )
 {
 result += 20;
 }
 v2 = (const RTTIDerivedA *)__dynamic_cast(
 obj1,
 (const struct __class_type_info *)"typeinfo for RTTIBase",
 (const struct __class_type_info *)"typeinfo for RTTIDerivedA",
 0);
 if ( v2 )
 result += RTTIDerivedA_derivedA_data(v2);
 v3 = (const RTTIDerivedB *)__dynamic_cast(
 v1,
 (const struct __class_type_info *)"typeinfo for RTTIBase",
 (const struct __class_type_info *)"typeinfo for RTTIDerivedB",
 0);
 if ( v3 )
 result += RTTIDerivedB_derivedB_data(v3);
 v4 = std_type_info_name(*((const struct type_info *const *)obj1->_vptr - 1));
 resulta = strlen(v4) + result;
 (*((void (**)(void))obj1->_vptr + 1))();
 (*((void ( **)(RTTIDerivedB *))v1->_vptr + 1))(v1);
 return resulta;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x2794 */
void test_cpp_oo_features()
{
 unsigned int v0; // w0
 unsigned int v1; // w0
 unsigned int v2; // w0
 unsigned int v3; // w0
 unsigned int v4; // w0
 unsigned int v5; // w0
 unsigned int v6; // w0
 unsigned int v7; // w0
 unsigned int v8; // w0

 puts(asc_45E8);
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


/* Function: main @ 0x28A4 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: std::__uniq_ptr_data_int_test_cpp_smart_ptr()::_lambda(int_)__true_false_::__uniq_ptr_data_const_test_cpp_smart_ptr()::_lambda(int_)_&_ @ 0x28BC */
void std___uniq_ptr_data_int_test_cpp_smart_ptr___lambda_int____true_false______uniq_ptr_data_const_test_cpp_smart_ptr___lambda_int_____(
 std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ *const this,
 int **a2,
 const const struct {unsigned char gap0;} *a3);

/* Function: std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::lambda(int)>::__uniq_ptr_impl */
void std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_____uniq_ptr_impl_(
 std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ *const this,
 int **__p,
 const const struct {unsigned char gap0;} *__d)
{
 const const struct {unsigned char gap0;} *v4; // x0
 int **__pa; // [xsp+30h] [xbp+30h] BYREF
 std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ *thisa; // [xsp+38h] [xbp+38h]

 thisa = this;
 __pa = __p;
 v4 = std_forward_test_cpp_smart_ptr_void___lambda_int_p__const_(__d);
 std_tuple_int__test_cpp_smart_ptr_void___lambda_int_p___tuple(
 &this->_M_t,
 __pa,
 v4);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EC2IS1_vEES0_RKS1_ @ 0x28EC */
void std_unique_ptr_int_test_cpp_smart_ptr_void___lambda_int_p___unique_ptr_test_cpp_smart_ptr_void___lambda_int_p___void_(
 std_unique_ptr_int *const this,
 int **__p,
 const struct {unsigned char gap0;} *__d)
{
 std___uniq_ptr_data_int_test_cpp_smart_ptr___lambda_int____true_false______uniq_ptr_data_const_test_cpp_smart_ptr___lambda_int_____(
 &this->_M_t,
 __p,
 __d);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_ED2Ev @ 0x291C */
void std_unique_ptr_int_test_cpp_smart_ptr_lambda_int___unique_ptr(
 std_unique_ptr_int *const this)
{
 struct {unsigned char gap0;} *deleter; // x19
 int **v2; // x0
 int **__ptr; // [xsp+38h] [xbp+38h]

 __ptr = std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_p_M_ptr(&this->_M_t);
 if ( *__ptr )
 {
 deleter = std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_get_deleter(this);
 v2 = std_move_int_ptr_ptr(__ptr);
 test_cpp_smart_ptr_lambda_int__operator()(deleter, *v2);
 }
 *__ptr = 0;
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EdeEv @ 0x2984 */
int std_unique_ptr_int_test_cpp_smart_ptr_lambda_int__operator_star(
 const std_unique_ptr_int *const this)
{
 return *std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_get(this);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_EC2IRKS1_EES0_OT_ @ 0x29A8 */
void std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_____uniq_ptr_impl(
 std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ *const this,
 int **__p,
 const const struct {unsigned char gap0;} *__d)
{
 const const struct {unsigned char gap0;} *v4; // x0
 int **__pa; // [xsp+30h] [xbp+30h] BYREF
 std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ *thisa; // [xsp+38h] [xbp+38h]

 thisa = this;
 __pa = __p;
 v4 = std_forward_test_cpp_smart_ptr_void___lambda_int_p__const_(__d);
 std_tuple_int_ptr_test_cpp_smart_ptr_lambda_int_p__tuple(
 &this->_M_t,
 *v4,
 __pa);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv @ 0x29F4 */
int ** std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int__M_ptr(
 std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ *const this)
{
 return std_get_0ul_int__test_cpp_smart_ptr_void___lambda_int_p_((struct {int **ptr; struct {unsigned char gap0;} del;} *)&this->_M_t);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E11get_deleterEv @ 0x2A10 */
struct {unsigned char gap0;} * std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_get_deleter(
 std_unique_ptr_int *const this)
{
 return (struct {unsigned char gap0;} *)std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int__M_deleter(&this->_M_t);
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E3getEv @ 0x2A2C */
int * std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_get(
 const std_unique_ptr_int *const this)
{
 return *std_get_0ul_int__test_cpp_smart_ptr_void___lambda_int_p_((struct {int **ptr; struct {unsigned char gap0;} del;} *)&this->_M_t);
}


/* Function: _ZSt7forwardIRKZ18test_cpp_smart_ptrvEUlPiE_EOT_RNSt16remove_referenceIS4_E4typeE @ 0x2A48 */
const struct {unsigned char gap0;} * std_forward_test_cpp_smart_ptr_lambda_int_p_const_(
 const struct {unsigned char gap0;} *__t)
{
 return __t;
}


/* Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_RKS1_Lb1EEEOT_OT0_ @ 0x2A5C */
void std_tuple_int_ptr_test_cpp_smart_ptr_lambda_int_p__tuple(
 struct {int **ptr; struct {unsigned char gap0;} del;} *const this,
 int **__a1,
 const struct {unsigned char gap0;} *__a2)
{
 int **v4; // x20
 const struct {unsigned char gap0;} *v5; // x0

 v4 = __a1;
 v5 = std_forward_test_cpp_smart_ptr_lambda_int_p_const_(__a2);
 std__Head_base_0ul_int_ptr_false__Head_base_int_ptr__((struct {int *ptr;} *const)this, *v4);
 std__Tuple_impl_1ul_test_cpp_smart_ptr_lambda_int_p___Tuple_impl((struct {struct {unsigned char gap0;} head;} *const)this, v5);
}

/* Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EEC2ERKS1_ */
void std__Head_base_1ul_test_cpp_smart_ptr_lambda_int_p_true___Head_base(
 struct {struct {unsigned char gap0;} head;} *const this,
 const struct {unsigned char gap0;} *__h)
{
 this->head = *__h;
}


/* Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x2AAC */
int ** std_get_0ul_int_ptr_test_cpp_smart_ptr_lambda_int_p_(
 struct {int **ptr; struct {unsigned char gap0;} del;} *__t)
{
 return __t->ptr;
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E10_M_deleterEv @ 0x2AC8 */
struct {unsigned char gap0;} * std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int__M_deleter(
 std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ *const this)
{
 return (struct {unsigned char gap0;} *)std_get_1ul_int_ptr_test_cpp_smart_ptr_lambda_int_p_((struct {int **ptr; struct {unsigned char gap0;} del;} *)&this->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv @ 0x2AE4 */
int * std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int__M_ptr_const(
 const std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ *const this)
{
 return *std_get_0ul_int_ptr_test_cpp_smart_ptr_lambda_int_p_((struct {int **ptr; struct {unsigned char gap0;} del;} *)&this->_M_t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_JRKS1_EvEEOT_DpOT0_ @ 0x2B04 */
void std__Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr_lambda_int_p___Tuple_impl(
 struct {struct {unsigned char gap0;} head;} *const this,
 int **__head,
 const struct {unsigned char gap0;} *a3)
{
 const struct {unsigned char gap0;} *v3; // x0
 int **v4; // x0

 v3 = std_forward_test_cpp_smart_ptr_lambda_int_p_const_(a3);
 std__Tuple_impl_1ul_test_cpp_smart_ptr_lambda_int_p___Tuple_impl(this, v3);
 v4 = __head;
 std__Head_base_0ul_int_ptr_false__Head_base_int_ptr__((struct {int *ptr;} *const)this, *v4);
}


/* Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x2B58 */
int ** std__get_helper_0ul_int_ptr_test_cpp_smart_ptr_lambda_int_p_(
 struct {int **ptr; struct {unsigned char gap0;} del;} *__t)
{
 return __t->ptr;
}


/* Function: _ZSt3getILm1EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x2B74 */
struct {unsigned char gap0;} * std_get_1ul_int_ptr_test_cpp_smart_ptr_lambda_int_p_(
 struct {int **ptr; struct {unsigned char gap0;} del;} *__t)
{
 return &__t->del;
}


/* Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ @ 0x2B90 */
int *const * std_get_0ul_int_ptr_test_cpp_smart_ptr_lambda_int_p__const(
 const struct {int **ptr; struct {unsigned char gap0;} del;} *__t)
{
 return (int *const *)__t->ptr;
}


/* Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvEUlPiE_EEC2ERKS1_ @ 0x2BAC */
void std__Tuple_impl_1ul_test_cpp_smart_ptr_lambda_int_p___Tuple_impl(
 struct {struct {unsigned char gap0;} head;} *const this,
 const struct {unsigned char gap0;} *__head)
{
 std__Head_base_1ul_test_cpp_smart_ptr_lambda_int_p_true___Head_base(this, __head);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERS2_ @ 0x2BD4 */
int ** std__Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr_lambda_int_p___M_head(
 struct {int **ptr; struct {unsigned char gap0;} del;} *__t)
{
 return __t->ptr;
}


/* Function: std::__get_helper_1_test_cpp_smart_ptr()::_lambda(int_)___ @ 0x2BF0 */
struct {unsigned char gap0;} * std__get_helper_1ul_test_cpp_smart_ptr_lambda_int_p_(
 struct {struct {unsigned char gap0;} head;} *__t)
{
 return &__t->head;
}


/* Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x2C0C */
int *const * std__get_helper_0ul_int_ptr_test_cpp_smart_ptr_lambda_int_p__const(
 const struct {int **ptr; struct {unsigned char gap0;} del;} *__t)
{
 return &__t->ptr;
}


/* Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EEC2ERKS1_ @ 0x2C28 */
void std__Head_base_1ul_test_cpp_smart_ptr_lambda_int_p_true___Head_base(
 struct {struct {unsigned char gap0;} head;} *const this,
 const struct {unsigned char gap0;} *__h)
{
 this->head = *__h;
}


/* Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvEUlPiE_EE7_M_headERS2_ @ 0x2C40 */
struct {unsigned char gap0;} * std__Tuple_impl_1ul_test_cpp_smart_ptr_lambda_int_p___M_head(
 struct {struct {unsigned char gap0;} head;} *__t)
{
 return &__t->head;
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERKS2_ @ 0x2C5C */
int *const * std__Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr_lambda_int_p___M_head_const(
 const struct {int **ptr; struct {unsigned char gap0;} del;} *__t)
{
 return &__t->ptr;
}


/* Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EE7_M_headERS2_ @ 0x2C78 */
struct {unsigned char gap0;} * std__Head_base_1ul_test_cpp_smart_ptr_lambda_int_p_true___M_head(
 struct {struct {unsigned char gap0;} head;} *__b)
{
 return &__b->head;
}


/* Function: _Z41__static_initialization_and_destruction_0ii @ 0x2C8C */
void __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
 if ( __initialize_p == 1 && __priority == 0xFFFF )
 {
 std_ios_base_Init_Init(&std___ioinit);
 __cxa_atexit((void (*)(void *))&std_ios_base_Init_destructor, &std___ioinit, &_dso_handle);
 }
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x2CEC */
void GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 __static_initialization_and_destruction_0(1, 0xFFFF);
}


/* Function: _ZNKSt9type_info4nameEv @ 0x2D08 */
const char * std_type_info_name(const struct type_info *const this)
{
 if ( **((unsigned char **)this + 1) == 42 )
 return (const char *)(*((unsigned long long *)this + 1) + 1LL);
 else
 return (const char *)*((unsigned long long *)this + 1);
}


/* Function: _ZNKSt9type_infoeqERKS_ @ 0x2D44 */
bool std_type_info_operator_equal(const struct type_info *const this, const struct type_info *__arg)
{
 return *((unsigned long long *)this + 1) == *((unsigned long long *)__arg + 1)
 || **((unsigned char **)this + 1) != 42 && !strcmp(*((const char **)this + 1), *((const char **)__arg + 1));
}


/* Function: _ZN11SimpleClassC2EiPKc @ 0x2DB8 */
void SimpleClass_SimpleClass(SimpleClass *const this, int v, const char *n)
{
 this->value = v;
 strncpy(this->name, n, 0x1Fu);
 this->name[31] = 0;
}


/* Function: _ZNK11SimpleClass8getValueEv @ 0x2E00 */
int SimpleClass_getValue(const SimpleClass *const this)
{
 return this->value;
}


/* Function: _ZN11SimpleClass8setValueEi @ 0x2E18 */
void SimpleClass_setValue(SimpleClass *const this, int v)
{
 this->value = v;
}


/* Function: _ZNK11SimpleClass7computeEi @ 0x2E3C */
int SimpleClass_compute(const SimpleClass *const this, int x)
{
 int v2; // w19

 v2 = this->value * x;
 return v2 + strlen(this->name);
}


/* Function: _ZN11SimpleClass10getClassIDEv @ 0x2E80 */
int SimpleClass_getClassID()
{
 return 4660;
}


/* Function: _ZN14LifecycleClassC2Em @ 0x2E88 */
void LifecycleClass_LifecycleClass(LifecycleClass *const this, size_t s)
{
 size_t i; // [xsp+28h] [xbp+28h]

 this->size = s;
 if ( s > 0x1FFFFFFFFFFFFFFELL )
 __builtin_delete(0, 0);
 this->data = (int *)__builtin_new_array(4 * s);
 for ( i = 0; i < s; ++i )
 this->data[i] = 10 * i;
 ++LifecycleClass_instance_count;
}


/* Function: _ZN14LifecycleClassD2Ev @ 0x2F50 */
void LifecycleClass_destructor(LifecycleClass *const this)
{
 if ( this->data )
 __builtin_delete_array(this->data);
 --LifecycleClass_instance_count;
}


/* Function: _ZNK14LifecycleClass7getDataEm @ 0x2FA0 */
int LifecycleClass_getData(const LifecycleClass *const this, size_t idx)
{
 if ( idx >= this->size )
 return -1;
 else
 return this->data[idx];
}


/* Function: _ZN14LifecycleClass16getInstanceCountEv @ 0x2FE8 */
int LifecycleClass_getInstanceCount()
{
 return LifecycleClass_instance_count;
}


/* Function: _ZN4Base12virtual_funcEi @ 0x2FF8 */
int Base_virtual_func(Base *const this, int x)
{
 return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x3014 */
const char * Base_getName(const Base *const this)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x302C */
void Base_destructor(Base *const this)
{
 this->_vptr_Base = (int (**)(...))&off_16B10;
}


/* Function: _ZN4BaseD0Ev @ 0x3050 */
void Base_destructor_complete(Base *const this)
{
 Base_destructor(this);
 __builtin_delete(this, 8u);
}


/* Function: _ZN4BaseC2Ev @ 0x3078 */
void Base_Base(Base *const this)
{
 this->_vptr_Base = (int (**)(...))&off_16B10;
}


/* Function: _ZN7DerivedC2Ei @ 0x309C */
void Derived_Derived(Derived *const this, int m)
{
 Base_Base(this);
 this->_vptr_Base = (int (**)(...))&off_16AE0;
 this->multiplier = m;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x30DC */
int Derived_virtual_func(Derived *const this, int x)
{
 return this->multiplier * x;
}


/* Function: _ZNK7Derived7getNameEv @ 0x3100 */
const char * Derived_getName(const Derived *const this)
{
 return "Derived";
}


/* Function: _ZN5BaseA5funcAEv @ 0x3118 */
int BaseA_funcA(BaseA *const this)
{
 return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x312C */
void BaseA_destructor(BaseA *const this)
{
 this->_vptr_BaseA = (int (**)(...))&off_16AB8;
}


/* Function: _ZN5BaseAD0Ev @ 0x3150 */
void BaseA_destructor_complete(BaseA *const this)
{
 BaseA_destructor(this);
 __builtin_delete(this, 0x10u);
}


/* Function: _ZN5BaseB5funcBEv @ 0x3178 */
int BaseB_funcB(BaseB *const this)
{
 return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x318C */
void BaseB_destructor(BaseB *const this)
{
 this->_vptr_BaseB = (int (**)(...))&off_16A90;
}


/* Function: _ZN5BaseBD0Ev @ 0x31B0 */
void BaseB_destructor_complete(BaseB *const this)
{
 BaseB_destructor(this);
 __builtin_delete(this, 0x10u);
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x31D8 */
int MultiDerived_funcA(MultiDerived *const this)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x31EC */
int MultiDerived_funcB(MultiDerived *const this)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x3200 */
long long thunk_MultiDerived_funcB(MultiDerived *this)
{
 return MultiDerived_funcB((MultiDerived *)((char *)this - 16));
}


/* Function: _ZN5BaseAC2Ev @ 0x3208 */
void BaseA_BaseA(BaseA *const this)
{
 this->_vptr_BaseA = (int (**)(...))&off_16AB8;
}


/* Function: _ZN5BaseBC2Ev @ 0x322C */
void BaseB_BaseB(BaseB *const this)
{
 this->_vptr_BaseB = (int (**)(...))&off_16A90;
}


/* Function: _ZN12MultiDerivedC2Ev @ 0x3250 */
void MultiDerived_MultiDerived(MultiDerived *const this)
{
 BaseA_BaseA(this);
 BaseB_BaseB(&this->BaseB);
 this->_vptr_BaseA = (int (**)(...))&off_16A38;
 this->_vptr_BaseB = (int (**)(...))&off_16A68;
}


/* Function: _ZN11VirtualBase4funcEv @ 0x329C */
int VirtualBase_func(VirtualBase *const this)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x32B0 */
void VirtualBase_destructor(VirtualBase *const this)
{
 this->_vptr_VirtualBase = (int (**)(...))&off_16A10;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x32D4 */
void VirtualBase_destructor_complete(VirtualBase *const this)
{
 VirtualBase_destructor(this);
 __builtin_delete(this, 0x10u);
}


/* Function: _ZN7MiddleA4funcEv @ 0x32FC */
int MiddleA_func(MiddleA *const this)
{
 return *(int *)((char *)&this->dataA + *((unsigned long long *)this->_vptr_MiddleA - 3)) + 150;
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x3330 */
long long thunk_MiddleA_func(MiddleA *this)
{
 return MiddleA_func((MiddleA *)((char *)this + *((unsigned long long *)this->_vptr_MiddleA - 3)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x3340 */
int MiddleB_func(MiddleB *const this)
{
 return *(int *)((char *)&this->dataB + *((unsigned long long *)this->_vptr_MiddleB - 3)) + 200;
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x3374 */
long long thunk_MiddleB_func(MiddleB *this)
{
 return MiddleB_func((MiddleB *)((char *)this + *((unsigned long long *)this->_vptr_MiddleB - 3)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x3384 */
int DiamondDerived_func(DiamondDerived *const this)
{
 return *(int *)((char *)&this->dataA + *((unsigned long long *)this->_vptr_MiddleA - 3)) + 250;
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x33B8 */
long long thunk_DiamondDerived_func(DiamondDerived *this)
{
 return DiamondDerived_func((DiamondDerived *)((char *)this + *((unsigned long long *)this->_vptr_MiddleA - 3)));
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x33C8 */
long long thunk_nov_DiamondDerived_func(DiamondDerived *this)
{
 return DiamondDerived_func((DiamondDerived *)((char *)this - 16));
}


/* Function: _ZN11VirtualBaseC2Ev @ 0x33D0 */
void VirtualBase_VirtualBase(VirtualBase *const this)
{
 this->_vptr_VirtualBase = (int (**)(...))&off_16A10;
}


/* Function: _ZN7MiddleAC2Ev @ 0x33F4 */
void MiddleA_MiddleA(MiddleA *const this, const void **const __vtt_parm)
{
 this->_vptr_MiddleA = (int (**)(...))*__vtt_parm;
 *(int (***)(...))((char *)&this->_vptr_MiddleA + *((unsigned long long *)this->_vptr_MiddleA - 3)) = (int (**)(...))__vtt_parm[1];
}


/* Function: _ZN7MiddleAD2Ev @ 0x3444 */
void MiddleA_destructor(MiddleA *const this, const void **const __vtt_parm)
{
 this->_vptr_MiddleA = (int (**)(...))*__vtt_parm;
 *(int (***)(...))((char *)&this->_vptr_MiddleA + *((unsigned long long *)this->_vptr_MiddleA - 3)) = (int (**)(...))__vtt_parm[1];
}


/* Function: _ZN7MiddleBC2Ev @ 0x3494 */
void MiddleB_MiddleB(MiddleB *const this, const void **const __vtt_parm)
{
 this->_vptr_MiddleB = (int (**)(...))*__vtt_parm;
 *(int (***)(...))((char *)&this->_vptr_MiddleB + *((unsigned long long *)this->_vptr_MiddleB - 3)) = (int (**)(...))__vtt_parm[1];
}


/* Function: _ZN7MiddleBD2Ev @ 0x34E4 */
void MiddleB_destructor(MiddleB *const this, const void **const __vtt_parm)
{
 this->_vptr_MiddleB = (int (**)(...))*__vtt_parm;
 *(int (***)(...))((char *)&this->_vptr_MiddleB + *((unsigned long long *)this->_vptr_MiddleB - 3)) = (int (**)(...))__vtt_parm[1];
}


/* Function: _ZN14DiamondDerivedC1Ev @ 0x3534 */
void DiamondDerived_DiamondDerived(DiamondDerived *const this)
{
 VirtualBase_VirtualBase((VirtualBase *const)&this->MiddleB);
 MiddleA_MiddleA(this, (const void **const)off_16900);
 MiddleB_MiddleB((MiddleB *const)(&this->dataA + 2), (const void **const)off_16910);
 this->_vptr_MiddleA = (int (**)(...))&off_16878;
 this->_vptr_MiddleB = (int (**)(...))&off_168E0;
 *((unsigned long long *)&this->dataA + 1) = &off_168A8;
}


/* Function: _ZN5PointC2Eii @ 0x35C0 */
void Point_Point(Point *const this, int _x, int _y)
{
 this->x = _x;
 this->y = _y;
}


/* Function: _ZNK5PointplERKS_ @ 0x35F4 */
Point Point_operator_plus(const Point *const this, const Point *other)
{
 Point v3; // [xsp+20h] [xbp+20h] BYREF

 Point_Point(&v3, this->x + other->x, this->y + other->y);
 return v3;
}


/* Function: _ZNK5PointeqERKS_ @ 0x3684 */
int Point_operator_equals(const Point *const this, const Point *other)
{
 return this->x == other->x && this->y == other->y;
}


/* Function: _ZN5PointppEv @ 0x36D4 */
Point * Point_operator_increment(Point *const this)
{
 ++this->x;
 ++this->y;
 return this;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x3710 */
int template_max_int(int a, int b)
{
 if ( a <= b )
 return b;
 return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x3740 */
double template_max_double(double a, double b)
{
 if ( a <= b )
 return b;
 return a;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x3774 */
void template_swap_int(int *a, int *b)
{
 int temp; // [xsp+1Ch] [xbp-4h]

 temp = *a;
 *a = *b;
 *b = temp;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x37B4 */
void Container_int_Container(struct Container_int *const this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x37D0 */
void Container_int_push(struct Container_int *const this, int value)
{
 int size; // w0

 if ( this->size <= 9 )
 {
 size = this->size;
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x381C */
int Container_int_get(const struct Container_int *const this, int idx)
{
 if ( idx < 0 || idx >= this->size )
 return 0;
 else
 return this->data[idx];
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x3864 */
int Container_int_getSize(const struct Container_int *const this)
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x387C */
void Container_double_Container(struct Container_double *const this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x3898 */
void Container_double_push(struct Container_double *const this, double value)
{
 int size; // w0

 if ( this->size <= 9 )
 {
 size = this->size;
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x38E4 */
double Container_double_get(const struct Container_double *const this, int idx)
{
 if ( idx < 0 || idx >= this->size )
 return 0.0;
 else
 return this->data[idx];
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x392C */
int Container_double_getSize(const struct Container_double *const this)
{
 return this->size;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ @ 0x3944 */
/* Forward declaration */
void std___uniq_ptr_impl_int_std_default_delete_int___uniq_ptr_impl_3(
 struct {int **ptr; struct std_default_delete_int del;} *const this,
 struct {int **ptr; struct std_default_delete_int del;} *__u);
void std__Tuple_impl_1ul_std_default_delete_int___Tuple_impl_(
 struct {int **ptr; struct std_default_delete_int del;} *const this,
 struct {int **ptr; struct std_default_delete_int del;} *a2);
int ** std___uniq_ptr_impl_int_std_default_delete_int___M_ptr(
 struct {int **ptr; struct std_default_delete_int del;} *const this);
struct std_default_delete_int * std___uniq_ptr_impl_int_std_default_delete_int___M_deleter(
 struct {int **ptr; struct std_default_delete_int del;} *const this);
int * std___uniq_ptr_impl_int_std_default_delete_int___M_ptr_const(
 const struct {int **ptr; struct std_default_delete_int del;} *const this);
void std___uniq_ptr_impl_int_std_default_delete_int_array_____uniq_ptr_impl_(
 struct {int **ptr; struct std_default_delete_int___ del;} *const this,
 int *__p);
int ** std___uniq_ptr_impl_int_std_default_delete_int_array___M_ptr(
 struct {int **ptr; struct std_default_delete_int___ del;} *const this);
int * std___uniq_ptr_impl_int_std_default_delete_int_array___M_ptr_const(
 const struct {int **ptr; struct std_default_delete_int___ del;} *const this);
int ** std__get_helper_0ul_int_ptr_std_default_delete_int_(
 struct {int **ptr; struct std_default_delete_int del;} *__t);
struct std_default_delete_int * std__get_helper_1ul_int_ptr_std_default_delete_int_(
 struct {int **ptr; struct std_default_delete_int del;} *__t);
int *const * std__get_helper_0ul_int_ptr_std_default_delete_int__const(
 const struct {int **ptr; struct std_default_delete_int del;} *__t);
int ** std__get_1ul_int_ptr_std_default_delete_int_(
 struct {int **ptr; struct std_default_delete_int del;} *__t);
void std__Tuple_impl_1ul_std_default_delete_int___Tuple_impl(
 struct {int **ptr; struct std_default_delete_int del;} *const this);
void std__Tuple_impl_1ul_std_default_delete_int_array___Tuple_impl(
 struct {int **ptr; struct std_default_delete_int___ del;} *const this);
void std__Tuple_impl_0ul_int_ptr_std_default_delete_int___Tuple_impl_(
 struct {int **ptr; struct std_default_delete_int del;} *const this);
void std__Tuple_impl_0ul_int_ptr_std_default_delete_int_array___Tuple_impl_(
 struct {int **ptr; struct std_default_delete_int___ del;} *const this);
int ** std__Tuple_impl_0ul_int_ptr_std_default_delete_int___M_head(
 struct {int **ptr; struct std_default_delete_int del;} *__t);
int *const * std__Tuple_impl_0ul_int_ptr_std_default_delete_int___M_head_const(
 const struct {int **ptr; struct std_default_delete_int del;} *__t);
int ** std__Tuple_impl_0ul_int_ptr_std_default_delete_int_array___M_head(
 struct {int **ptr; struct std_default_delete_int___ del;} *__t);
int *const * std__Tuple_impl_0ul_int_ptr_std_default_delete_int_array___M_head_const(
 const struct {int **ptr; struct std_default_delete_int___ del;} *__t);
struct std_default_delete_int * std__Tuple_impl_1ul_std_default_delete_int___M_head(
 struct {struct {unsigned char gap0;} head;} *__t);
struct std_default_delete_int___ * std__Tuple_impl_1ul_std_default_delete_int_array___M_head(
 struct {struct {unsigned char gap0;} head;} *__t);
struct std_default_delete_int * std__Head_base_1ul_std_default_delete_int_true___M_head(
 struct {char _M_head_impl[0];} *__b);
struct std_default_delete_int___ * std__Head_base_1ul_std_default_delete_int_array_true___M_head(
 struct {char _M_head_impl[0];} *__b);
int *const * std__Head_base_0ul_int_ptr_false___M_head_const(const struct {int *ptr;} *__b);
struct {int **ptr; struct std_default_delete_int del;} * std__move_tuple_int_ptr_std_default_delete_int_(
 struct {int **ptr; struct std_default_delete_int del;} *__t);
void std_tuple_int_ptr_std_default_delete_int___tuple(
 struct {int **ptr; struct std_default_delete_int del;} *const this,
 struct {int **ptr; struct std_default_delete_int del;} *a2);
void std_tuple_int_ptr_std_default_delete_int___tuple_true_true_(
 struct {int **ptr; struct std_default_delete_int del;} *const this);
void std_tuple_int_ptr_std_default_delete_int_array___tuple_true_true_(
 struct {int **ptr; struct std_default_delete_int___ del;} *const this);
int ** std__get_helper_0ul_int_ptr_std_default_delete_int_array_(
 struct {int **ptr; struct std_default_delete_int___ del;} *__t);
struct std_default_delete_int___ * std__get_helper_1ul_int_ptr_std_default_delete_int_array_(
 struct {int **ptr; struct std_default_delete_int___ del;} *__t);
int *const * std__get_helper_0ul_int_ptr_std_default_delete_int_array__const(
 const struct {int **ptr; struct std_default_delete_int___ del;} *__t);
int ** std__get_helper_0ul_int_ptr_std_default_delete_int_(
 struct {int **ptr; struct std_default_delete_int del;} *__t);
int ** std__get_0ul_int_ptr_std_default_delete_int_(
 struct {int **ptr; struct std_default_delete_int del;} *__t);
int ** std__get_helper_0ul_int_ptr_std_default_delete_int_(
 struct {int **ptr; struct std_default_delete_int del;} *__t);

void std___uniq_ptr_data_int_std_default_delete_int_true_true____uniq_ptr_data(
 void *const this,
 void *a2)
{
 std___uniq_ptr_impl_int_std_default_delete_int___uniq_ptr_impl_3(this, a2);
}

/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_ @ 0x3C18 */
void std___uniq_ptr_impl_int_std_default_delete_int___uniq_ptr_impl_3(
 struct {int **ptr; struct std_default_delete_int del;} *const this,
 struct {int **ptr; struct std_default_delete_int del;} *__u)
{
 struct {int **ptr; struct std_default_delete_int del;} *v3; // x0

 v3 = __u;
 std__tuple_int_ptr_std_default_delete_int___tuple(&this->_M_t, &v3->_M_t);
 *std__get_helper_0ul_int_ptr_std_default_delete_int_(__u) = 0;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_ @ 0x396C */
void std_unique_ptr_int_unique_ptr_unique_ptr_int(std_unique_ptr_int *const this, std_unique_ptr_int *a2)
{
 std___uniq_ptr_impl_int_std_default_delete_int___uniq_ptr_impl_3(&this->_M_t._M_t_std_default_delete_int, &a2->_M_t._M_t_std_default_delete_int);
}


/* Function: _ZNK8RTTIBase7getTypeEv @ 0x3994 */
int RTTIBase_getType(const RTTIBase *const this)
{
 return 0;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x39A8 */
int RTTIDerivedA_getType(const RTTIDerivedA *const this)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedA13derivedA_dataEv @ 0x39BC */
int RTTIDerivedA_derivedA_data(const RTTIDerivedA *const this)
{
 return 100;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x39D0 */
int RTTIDerivedB_getType(const RTTIDerivedB *const this)
{
 return 2;
}


/* Function: _ZNK12RTTIDerivedB13derivedB_dataEv @ 0x39E4 */
int RTTIDerivedB_derivedB_data(const RTTIDerivedB *const this)
{
 return 200;
}


/* Function: _ZN8RTTIBaseC2Ev @ 0x39F8 */
void RTTIBase_RTTIBase(RTTIBase *const this)
{
 this->_vptr = (int (**)(...))off_16848;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x3A1C */
void RTTIBase_destructor(RTTIBase *const this)
{
 this->_vptr = (int (**)(...))off_16848;
}


/* Function: _ZN8RTTIBaseD0Ev @ 0x3A40 */
void RTTIBase_destructor_complete(RTTIBase *const this)
{
 RTTIBase_destructor(this);
 __builtin_delete(this, 8u);
}


/* Function: _ZN12RTTIDerivedAC2Ev @ 0x3A68 */
void RTTIDerivedA_RTTIDerivedA(RTTIDerivedA *const this)
{
 RTTIBase_RTTIBase(this);
 this->_vptr = (int (**)(...))off_16820;
}


/* Function: _ZN12RTTIDerivedBC2Ev @ 0x3A98 */
void RTTIDerivedB_RTTIDerivedB(RTTIDerivedB *const this)
{
 RTTIBase_RTTIBase(this);
 this->_vptr = (int (**)(...))off_167F8;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi @ 0x3AC8 */
void ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(
 void *const this,
 int *a2)
{
 std___uniq_ptr_impl_int_std_default_delete_int_____uniq_ptr_impl_2(this, a2);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi @ 0x3AF0 */
/* Forward declaration */
void ZNSt15__uniq_ptr_dataIiCI2_EEPi(struct {int **ptr; struct std_default_delete_int del;} *this, int *__p);

void std_unique_ptr_int_unique_ptr_std_default_delete_int_void(
 std_unique_ptr_int *const this,
 int *__p)
{
 ZNSt15__uniq_ptr_dataIiCI2_EEPi(&this->_M_t._M_t_std_default_delete_int, __p);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x3B18 */
void std_unique_ptr_int_destructor(std_unique_ptr_int *const this)
{
 struct std_default_delete_int *deleter; // x19
 int **v2; // x0
 int **__ptr; // [xsp+38h] [xbp+38h]

 __ptr = std___uniq_ptr_impl_int_std_default_delete_int___M_ptr(&this->_M_t._M_t_std_default_delete_int);
 if ( *__ptr )
 {
 deleter = std_unique_ptr_int_get_deleter(this);
 v2 = std_move_int_ptr_ptr(__ptr);
 std_default_delete_int_operator(deleter, *v2);
 }
 *__ptr = 0;
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv @ 0x3B80 */
int std_unique_ptr_int_operator_star(
 const std_unique_ptr_int *const this)
{
 return *std_unique_ptr_int_get(this);
}

/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv @ 0x3D9C */
struct std_default_delete_int * std_unique_ptr_int_get_deleter(std_unique_ptr_int *const this)
{
 return std___uniq_ptr_impl_int_std_default_delete_int___M_deleter(&this->_M_t._M_t_std_default_delete_int);
}

/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv @ 0x3DFC */
int * std_unique_ptr_int_get(const std_unique_ptr_int *const this)
{
 return *std__get_0ul_int_ptr_std_default_delete_int_((const struct {int **ptr; struct std_default_delete_int del;} *)&this->_M_t._M_t_std_default_delete_int);
}


/* Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ @ 0x3BA4 */
struct std_unique_ptr_int * std_move_unique_ptr_int(
 struct std_unique_ptr_int *__t)
{
 return __t;
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2EOS3_ @ 0x3BB8 */
void std__Tuple_impl_0ul_int_ptr_std_default_delete_int___Tuple_impl(
 struct {int **ptr; struct std_default_delete_int del;} *const this,
 struct {int **ptr; struct std_default_delete_int del;} *a2)
{
 std__Tuple_impl_1ul_std_default_delete_int___Tuple_impl_(this, a2);
 this->del = a2->del;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_ @ 0x3BF0 */
void std_tuple_int_ptr_std_default_delete_int___tuple(
 struct {int **ptr; struct std_default_delete_int del;} *const this,
 struct {int **ptr; struct std_default_delete_int del;} *a2)
{
 std__Tuple_impl_0ul_int_ptr_std_default_delete_int___Tuple_impl(this, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_ @ 0x3C18 */
void std___uniq_ptr_impl_int_std_default_delete_int_____uniq_ptr_impl_(
 struct {int **ptr; struct std_default_delete_int del;} *const this,
 struct {int **ptr; struct std_default_delete_int del;} *__u)
{
 struct {int **ptr; struct std_default_delete_int del;} *v3; // x0

 v3 = std__move_tuple_int_ptr_std_default_delete_int_(&__u->_M_t);
 std__tuple_int_ptr_std_default_delete_int___tuple(&this->_M_t, v3);
 *std__get_helper_0ul_int_ptr_std_default_delete_int_(__u) = 0;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi @ 0x3C60 */
void ZNSt15__uniq_ptr_data_IiCI2(
 struct {int **ptr; struct std_default_delete_int___ del;} *const this,
 int *a2)
{
 std___uniq_ptr_impl_int_std_default_delete_int_array_____uniq_ptr_impl_(this, a2);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ @ 0x3C88 */
void std_unique_ptr_int_array_unique_ptr_int_ptr(
 std_unique_ptr_int *const this,
 int *__p)
{
 ZNSt15__uniq_ptr_data_IiCI2(&this->_M_t._M_t_std_default_delete_int_array, __p);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x3CB0 */
void std_unique_ptr_int_array_destructor(std_unique_ptr_int *const this)
{
 struct std_default_delete_int___ *deleter; // x0
 int **__ptr; // [xsp+28h] [xbp+28h]

 __ptr = std___uniq_ptr_impl_int_std_default_delete_int_array___M_ptr(&this->_M_t._M_t_std_default_delete_int_array);
 if ( *__ptr )
 {
 deleter = std_unique_ptr_int_array_get_deleter_(this);
 std_default_delete_int_array_operator_int(deleter, *__ptr);
 }
 *__ptr = 0;
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEm @ 0x3D0C */
int std_unique_ptr_int_array_operator_index(
 const std_unique_ptr_int *const this,
 unsigned long __i)
{
 return std_unique_ptr_int_array_get(this)[__i];
}

/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv @ 0x3E9C */
struct std_default_delete_int___ * std_unique_ptr_int_array_get_deleter_(
 std_unique_ptr_int *const this)
{
 return std___uniq_ptr_impl_int_std_default_delete_int_array___M_deleter(&this->_M_t._M_t_std_default_delete_int_array);
}

/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv @ 0x3EE8 */
int * std_unique_ptr_int_array_get(const std_unique_ptr_int *const this)
{
 return *std__get_helper_0ul_int_ptr_std_default_delete_int_array_((const struct {int **ptr; struct std_default_delete_int___ del;} *)&this->_M_t._M_t_std_default_delete_int_array);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi @ 0x3D44 */
void std___uniq_ptr_impl_int_std_default_delete_int_____uniq_ptr_impl_2(
 struct {int **ptr; struct std_default_delete_int del;} *const this,
 int *__p)
{
 std_tuple_int_ptr_std_default_delete_int___tuple_true_true_(&this->_M_t);
 *std__get_helper_0ul_int_ptr_std_default_delete_int_(this) = __p;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x3D80 */
int ** std___uniq_ptr_impl_int_std_default_delete_int___M_ptr(
 struct {int **ptr; struct std_default_delete_int del;} *const this)
{
 return std__get_0ul_int_ptr_std_default_delete_int_(&this->_M_t);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv @ 0x3D9C */
struct std_default_delete_int * std_unique_ptr_int_get_deleter(std_unique_ptr_int *const this)
{
 return std___uniq_ptr_impl_int_std_default_delete_int___M_deleter(&this->_M_t);
}


/* Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ @ 0x3DB8 */
int ** std_move_int_ptr_ptr(int **__t)
{
 return __t;
}


/* Function: _ZNKSt14default_deleteIiEclEPi @ 0x3DCC */
void std_default_delete_int_operator(const struct std_default_delete_int *const this, int *__ptr)
{
 if ( __ptr )
 __builtin_delete(__ptr, 4u);
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv @ 0x3DFC */
int * std_unique_ptr_int_get(const std_unique_ptr_int *const this)
{
 return *std__get_0ul_int_ptr_std_default_delete_int_((const struct {int **ptr; struct std_default_delete_int del;} *)&this->_M_t);
}


/* Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ @ 0x3E18 */
struct {int **ptr; struct std_default_delete_int del;} * std__move_tuple_int_ptr_std_default_delete_int_(
 struct {int **ptr; struct std_default_delete_int del;} *__t)
{
 return __t;
}

/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_ @ 0x3BF0 */
void std__tuple_int_ptr_std_default_delete_int___tuple(struct {int **ptr; struct std_default_delete_int del;} *const this, struct {int **ptr; struct std_default_delete_int del;} *a2)
{
 std__Tuple_impl_0ul_int_ptr_std_default_delete_int___Tuple_impl(this, a2);
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2EOS2_ @ 0x3E2C */
void std__Tuple_impl_1ul_std_default_delete_int___Tuple_impl(
 struct {int **ptr; struct std_default_delete_int del;} *const this,
 struct {int **ptr; struct std_default_delete_int del;} *__in)
{
 ;
}

/* Function: _ZSt12__get_helperILm1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE */
struct std_default_delete_int * std__get_helper_1ul_std_default_delete_int_(
 struct {struct {unsigned char gap0;} head;} *__t)
{
 return (struct std_default_delete_int *)__t;
}

/* Function: _ZSt12__get_helperILm1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE */
struct std_default_delete_int___ * std__get_helper_1ul_std_default_delete_int_array_(
 struct {struct {unsigned char gap0;} head;} *__t)
{
 return (struct std_default_delete_int___ *)__t;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi @ 0x3E44 */
void std___uniq_ptr_impl_int_std_default_delete_int_array_____uniq_ptr_impl_(
 struct {int **ptr; struct std_default_delete_int___ del;} *const this,
 int *__p)
{
 std_tuple_int_ptr_std_default_delete_int_array___tuple_true_true_(&this->_M_t);
 *std__get_helper_0ul_int_ptr_std_default_delete_int_array_(this) = __p;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x3E80 */
int ** std___uniq_ptr_impl_int_std_default_delete_int_array___M_ptr(
 struct {int **ptr; struct std_default_delete_int___ del;} *const this)
{
 return std__get_helper_0ul_int_ptr_std_default_delete_int_array_(&this->_M_t);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv @ 0x3E9C */
struct std_default_delete_int___ * std_unique_ptr_int_array_get_deleter_(
 std_unique_ptr_int *const this)
{
 return std___uniq_ptr_impl_int_std_default_delete_int_array___M_deleter(&this->_M_t);
}


/* Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsrSt14is_convertibleIPA_T_PS0_E5valueEvE4typeEPS5_ @ 0x3EB8 */
void std_default_delete_int_array_operator_int(const struct std_default_delete_int___ *const this, int *__ptr)
{
 if ( __ptr )
 __builtin_delete_array(__ptr);
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv @ 0x3EE8 */
int * std_unique_ptr_int_array_get(const std_unique_ptr_int *const this)
{
 return *std__get_helper_0ul_int_ptr_std_default_delete_int_array_((const struct {int **ptr; struct std_default_delete_int___ del;} *)&this->_M_t);
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv @ 0x3F04 */
void std_tuple_int_ptr_std_default_delete_int___tuple_true_true_(
 struct {int **ptr; struct std_default_delete_int del;} *const this)
{
 std__Tuple_impl_0ul_int_ptr_std_default_delete_int___Tuple_impl_(this);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x3F24 */
int ** std__get_0ul_int_ptr_std_default_delete_int_(
 struct {int **ptr; struct std_default_delete_int del;} *__t)
{
 return std__get_helper_0ul_int_ptr_std_default_delete_int_(__t);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv @ 0x3F40 */
struct std_default_delete_int * std___uniq_ptr_impl_int_std_default_delete_int___M_deleter(
 struct {int **ptr; struct std_default_delete_int del;} *const this)
{
 return (struct std_default_delete_int *)std__get_1ul_int_ptr_std_default_delete_int_(&this->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x3F5C */
int * std___uniq_ptr_impl_int_std_default_delete_int___M_ptr_const(
 const struct {int **ptr; struct std_default_delete_int del;} *const this)
{
 return *std__get_0ul_int_ptr_std_default_delete_int_((struct {int **ptr; struct std_default_delete_int del;} *)&this->_M_t);
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv @ 0x3F7C */
void std_tuple_int_ptr_std_default_delete_int_array___tuple_true_true_(
 struct {int **ptr; struct std_default_delete_int___ del;} *const this)
{
 std__Tuple_impl_0ul_int_ptr_std_default_delete_int_array___Tuple_impl_(this);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x3F9C */
int ** std__get_0ul_int_ptr_std_default_delete_int_array_(
 struct {int **ptr; struct std_default_delete_int___ del;} *__t)
{
 return std__get_helper_0ul_int_ptr_std_default_delete_int_array_(__t);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv @ 0x3FB8 */
struct std_default_delete_int___ * std___uniq_ptr_impl_int_std_default_delete_int_array___M_deleter(
 struct {int **ptr; struct std_default_delete_int___ del;} *const this)
{
 return (struct std_default_delete_int___ *)std__get_1ul_int_ptr_std_default_delete_int_array_(&this->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x3FD4 */
int * std___uniq_ptr_impl_int_std_default_delete_int_array___M_ptr_const(
 const struct {int **ptr; struct std_default_delete_int___ del;} *const this)
{
 return *std__get_helper_0ul_int_ptr_std_default_delete_int_array_((struct {int **ptr; struct std_default_delete_int___ del;} *)&this->_M_t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2Ev @ 0x3FF4 */
void std__Tuple_impl_0ul_int_ptr_std_default_delete_int___Tuple_impl_(
 struct {int **ptr; struct std_default_delete_int del;} *const this)
{
 std__Tuple_impl_1ul_std_default_delete_int___Tuple_impl(this);
 this->ptr = 0;
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x401C */
int ** std__get_helper_0ul_int_ptr_std_default_delete_int_(
 struct {int **ptr; struct std_default_delete_int del;} *__t)
{
 return std__Tuple_impl_0ul_int_ptr_std_default_delete_int___M_head(__t);
}


/* Function: _ZSt3getILm1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x4038 */
struct std_default_delete_int * std__get_1ul_int_ptr_std_default_delete_int_(
 struct {int **ptr; struct std_default_delete_int del;} *__t)
{
 return std__get_helper_1ul_std_default_delete_int_(__t);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ @ 0x4054 */
int *const * std__get_0ul_int_ptr_std_default_delete_int__const(
 const struct {int **ptr; struct std_default_delete_int del;} *__t)
{
 return std__get_helper_0ul_int_ptr_std_default_delete_int__const(__t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEEC2Ev @ 0x4070 */
void std__Tuple_impl_0ul_int_ptr_std_default_delete_int_array___Tuple_impl_(
 struct {int **ptr; struct std_default_delete_int___ del;} *const this)
{
 std__Tuple_impl_1ul_std_default_delete_int_array___Tuple_impl(this);
 this->ptr = 0;
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x4098 */
int ** std__get_helper_0ul_int_ptr_std_default_delete_int_array_(
 struct {int **ptr; struct std_default_delete_int___ del;} *__t)
{
 return std__Tuple_impl_0ul_int_ptr_std_default_delete_int_array___M_head(__t);
}


/* Function: _ZSt3getILm1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x40B4 */
struct std_default_delete_int___ * std__get_1ul_int_ptr_std_default_delete_int_array_(
 struct {int **ptr; struct std_default_delete_int___ del;} *__t)
{
 return std__get_helper_1ul_std_default_delete_int_array_(__t);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ @ 0x40D0 */
int *const * std__get_0ul_int_ptr_std_default_delete_int_array__const(
 const struct {int **ptr; struct std_default_delete_int___ del;} *__t)
{
 return std__get_helper_0ul_int_ptr_std_default_delete_int_array__const(__t);
}


/* Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE @ 0x40EC */
int ** std_forward_int_ptr_ptr(int **__t)
{
 return __t;
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2Ev @ 0x4100 */
void std__Tuple_impl_1ul_std_default_delete_int___Tuple_impl_(
 struct {int **ptr; struct std_default_delete_int del;} *const this)
{
 ;
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EEC2Ev @ 0x4120 */
void std__Head_base_0ul_int_ptr_false___Head_base_(
 struct {int *ptr;} *const this)
{
 this->ptr = 0;
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERS3_ @ 0x413C */
int ** std__Tuple_impl_0ul_int_ptr_std_default_delete_int___M_head(
 struct {int **ptr; struct std_default_delete_int del;} *__t)
{
 return &__t->ptr;
}


/* Function: _ZSt12__get_helperILm1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x4158 */
struct std_default_delete_int * std__get_helper_1ul_std_default_delete_int_(
 struct {struct {unsigned char gap0;} head;} *__t)
{
 return std__Tuple_impl_1ul_std_default_delete_int___M_head(__t);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x4174 */
int *const * std__get_helper_0ul_int_ptr_std_default_delete_int__const(
 const struct {int **ptr; struct std_default_delete_int del;} *__t)
{
 return std__Tuple_impl_0ul_int_ptr_std_default_delete_int___M_head_const(__t);
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEEC2Ev @ 0x4190 */
void std__Tuple_impl_1ul_std_default_delete_int_array___Tuple_impl_(
 struct {int **ptr; struct std_default_delete_int___ del;} *const this)
{
 ;
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ @ 0x41B0 */
int ** std__Tuple_impl_0ul_int_ptr_std_default_delete_int_array___M_head(
 struct {int **ptr; struct std_default_delete_int___ del;} *__t)
{
 return &__t->ptr;
}


/* Function: _ZSt12__get_helperILm1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x41CC */
struct std_default_delete_int___ * std__get_helper_1ul_std_default_delete_int_array_(
 struct {struct {unsigned char gap0;} head;} *__t)
{
 return std__Tuple_impl_1ul_std_default_delete_int_array___M_head(__t);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x41E8 */
int *const * std__get_helper_0ul_int_ptr_std_default_delete_int_array__const(
 const struct {int **ptr; struct std_default_delete_int___ del;} *__t)
{
 return std__Tuple_impl_0ul_int_ptr_std_default_delete_int_array___M_head_const(__t);
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EEC2IRS0_EEOT_ @ 0x4204 */
void std__Head_base_0ul_int_ptr_false___Head_base_int_ptr_(
 struct {int *ptr;} *const this, int **__h)
{
 this->ptr = *std_forward_int_ptr_ptr(__h);
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EEC2Ev @ 0x4234 */
void std__Head_base_1ul_std_default_delete_int_true___Head_base(
 struct {char _M_head_impl[0];} *const this)
{
 ;
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_ @ 0x4248 */
int ** std__Head_base_0ul_int_ptr_false___M_head(struct {int *ptr;} *__b)
{
 return &__b->ptr;
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEE7_M_headERS2_ @ 0x425C */
struct std_default_delete_int * std__Tuple_impl_1ul_std_default_delete_int___M_head(
 struct {struct {unsigned char gap0;} head;} *__t)
{
 return std__Head_base_1ul_std_default_delete_int_true___M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERKS3_ @ 0x4278 */
int *const * std__Tuple_impl_0ul_int_ptr_std_default_delete_int___M_head_const(
 const struct {int **ptr; struct std_default_delete_int del;} *__t)
{
 return &__t->ptr;
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EEC2Ev @ 0x4294 */
void std__Head_base_1ul_std_default_delete_int_array_true___Head_base(
 struct {char _M_head_impl[0];} *const this)
{
 ;
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEE7_M_headERS3_ @ 0x42A8 */
struct std_default_delete_int___ * std__Tuple_impl_1ul_std_default_delete_int_array___M_head(
 struct {struct {unsigned char gap0;} head;} *__t)
{
 return std__Head_base_1ul_std_default_delete_int_array_true___M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ @ 0x42C4 */
int *const * std__Tuple_impl_0ul_int_ptr_std_default_delete_int_array___M_head_const(
 const struct {int **ptr; struct std_default_delete_int___ del;} *__t)
{
 return &__t->ptr;
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EE7_M_headERS2_ @ 0x42E0 */
struct std_default_delete_int * std__Head_base_1ul_std_default_delete_int_true___M_head(
 struct {char _M_head_impl[0];} *__b)
{
 return (struct std_default_delete_int *)__b;
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_ @ 0x42F4 */
int *const * std__Head_base_0ul_int_ptr_false___M_head_const(const struct {int *ptr;} *__b)
{
 return &__b->ptr;
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EE7_M_headERS3_ @ 0x4308 */
struct std_default_delete_int___ * std__Head_base_1ul_std_default_delete_int_array_true___M_head(
 struct {char _M_head_impl[0];} *__b)
{
 return (struct std_default_delete_int___ *)__b;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x431C */
void RTTIDerivedB_destructor(RTTIDerivedB *const this)
{
 this->_vptr = (int (**)(...))off_167F8;
 RTTIBase_destructor(this);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x434C */
void RTTIDerivedB_destructor_complete(RTTIDerivedB *const this)
{
 RTTIDerivedB_destructor(this);
 __builtin_delete(this, 8u);
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x4374 */
void RTTIDerivedA_destructor(RTTIDerivedA *const this)
{
 this->_vptr = (int (**)(...))off_16820;
 RTTIBase_destructor(this);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x43A4 */
void RTTIDerivedA_destructor_complete(RTTIDerivedA *const this)
{
 RTTIDerivedA_destructor(this);
 __builtin_delete(this, 8u);
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x43CC */
void DiamondDerived_destructor(DiamondDerived *const this)
{
 this->_vptr_MiddleA = (int (**)(...))&off_16878;
 this->_vptr_MiddleB = (int (**)(...))&off_168E0;
 *((unsigned long long *)&this->dataA + 1) = &off_168A8;
 MiddleB_destructor((MiddleB *const)(&this->dataA + 2), (const void **const)off_16910);
 MiddleA_destructor(this, (const void **const)off_16900);
 VirtualBase_destructor((VirtualBase *const)&this->MiddleB);
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x4458 */
void thunk_DiamondDerived_destructor(DiamondDerived *this)
{
 DiamondDerived_destructor((DiamondDerived *)((char *)this - 16));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x4460 */
void thunk_virt_DiamondDerived_destructor(DiamondDerived *this)
{
 DiamondDerived_destructor((DiamondDerived *)((char *)this + *((unsigned long long *)this->_vptr_MiddleA - 4)));
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x4470 */
void DiamondDerived_destructor_complete(DiamondDerived *const this)
{
 DiamondDerived_destructor(this);
 __builtin_delete(this, 0x30u);
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x4498 */
void thunk_DiamondDerived_destructor0(DiamondDerived *this)
{
 DiamondDerived_destructor((DiamondDerived *)((char *)this - 16));
 __builtin_delete(this, 0x30u);
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x44A0 */
void thunk_virt_DiamondDerived_destructor0(DiamondDerived *this)
{
 DiamondDerived_destructor((DiamondDerived *)((char *)this + *((unsigned long long *)this->_vptr_MiddleA - 4)));
 __builtin_delete(this, 0x30u);
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x44B0 */
void MultiDerived_destructor(MultiDerived *const this)
{
 this->_vptr_BaseA = (int (**)(...))&off_16A38;
 this->_vptr_BaseB = (int (**)(...))&off_16A68;
 BaseB_destructor(&this->BaseB);
 BaseA_destructor(this);
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x44FC */
void thunk_MultiDerived_destructor(MultiDerived *this)
{
 MultiDerived_destructor((MultiDerived *)((char *)this - 16));
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x4504 */
void MultiDerived_destructor_complete(MultiDerived *const this)
{
 MultiDerived_destructor(this);
 __builtin_delete(this, 0x20u);
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x452C */
void thunk_MultiDerived_destructor0(MultiDerived *this)
{
 MultiDerived_destructor((MultiDerived *)((char *)this - 16));
 __builtin_delete(this, 0x20u);
}


/* Function: _ZN7DerivedD2Ev @ 0x4534 */
void Derived_destructor(Derived *const this)
{
 this->_vptr_Base = (int (**)(...))&off_16AE0;
 Base_destructor(this);
}


/* Function: _ZN7DerivedD0Ev @ 0x4564 */
void Derived_destructor_complete(Derived *const this)
{
Derived_destructor(this);
	__builtin_delete(this, 0x10u);
}

/* Function: .term_proc @ 0x458C */
void term_proc()
{
 ;
}


/* FAILED to decompile: _Znam @ 0x17098 */

/* FAILED to decompile: puts @ 0x170A8 */

/* FAILED to decompile: strlen @ 0x170B0 */

/* FAILED to decompile: __stack_chk_fail @ 0x170B8 */

/* FAILED to decompile: __cxa_begin_catch @ 0x170C0 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x170D0 */

/* FAILED to decompile: __cxa_finalize @ 0x170D8 */

/* FAILED to decompile: __libc_start_main @ 0x170E8 */

/* FAILED to decompile: _Znwm @ 0x170F0 */

/* FAILED to decompile: _ZdlPvm @ 0x170F8 */

/* FAILED to decompile: strncpy @ 0x17100 */

/* FAILED to decompile: __cxa_bad_typeid @ 0x17108 */

/* FAILED to decompile: __dynamic_cast @ 0x17110 */

/* FAILED to decompile: __cxa_atexit @ 0x17118 */

/* FAILED to decompile: _ZdaPv @ 0x17120 */

/* FAILED to decompile: __cxa_throw_bad_array_new_length @ 0x17130 */

/* FAILED to decompile: strcmp @ 0x17138 */

/* FAILED to decompile: __cxa_rethrow @ 0x17140 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x17148 */

/* FAILED to decompile: abort @ 0x17150 */

/* FAILED to decompile: __cxa_end_catch @ 0x17158 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x17160 */

/* FAILED to decompile: __cxa_throw @ 0x17168 */

/* FAILED to decompile: _Unwind_Resume @ 0x17178 */

/* FAILED to decompile: printf @ 0x17180 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x17188 */

/* FAILED to decompile: __gmon_start__ @ 0x17198 */

/* Total functions decompiled: 205, failed: 27 */
