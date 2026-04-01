/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;

/* External symbol declarations */
extern void _gmon_start__(void);
extern void frame_dummy(void);
extern void _do_global_ctors_aux(void);
extern void _do_global_dtors_aux(void);

/* Global vtable pointers */
extern void *off_8DA8;
extern void *off_8D90;
extern void *off_8D7C;
extern void *off_8D68;
extern void *off_8D28;
extern void *off_8C44;

/* Forward declarations for std::ios_base */
struct std_ios_base_Init;
extern struct std_ios_base_Init std___ioinit;
void std_ios_base_Init_Init(struct std_ios_base_Init *this_obj);
void std_ios_base_Init_destructor(struct std_ios_base_Init *this_obj);
extern void *_dso_handle;

/* Missing function declarations */
void __cxa_bad_typeid(void);
#include <string.h>

/* Forward declarations for std::type_info */
struct type_info;
struct SimpleClass;
struct Base;
struct Derived;
struct LifecycleClass;
struct Point;
struct Container_int;
struct Container_double;
struct std_type_info {
    unsigned char _dummy;
};

bool std_type_info_operator_equal(const struct std_type_info *this_obj, const struct std_type_info *__arg);
int ** std_move_int_ptr(int **__t);
int ** std_forward_int_ptr(int **__t);
extern const struct type_info typeinfo_for_RTTIDerivedA;
extern const struct type_info typeinfo_for_RTTIDerivedB;
extern const struct type_info typeinfo_for_RTTIBase;
int * std_Head_base_0_int_false_M_head(void *this_obj);
int ** std_Head_base_0_int_false_M_head_int_ptr(void *this_obj);
const int * std_Head_base_0_int_false_M_head_const(const void *this_obj);
void std_Head_base_0_int_false_ctor(void *this_obj);
void SimpleClass_SimpleClass(SimpleClass *const this_obj, int v, const char *n);
void SimpleClass_setValue(SimpleClass *const this_obj, int v);
int SimpleClass_getValue(const SimpleClass *const _this);
int SimpleClass_compute(const SimpleClass *const this_obj, int x);
int SimpleClass_getClassID(void);
void Point_Constructor(Point *const self, int _x, int _y);
void Point_operator_plus(Point *retstr, const Point *const self, const Point *other);
bool Point_operator_eq(const Point *const self, const Point *other);
Point * Point_operator_increment(Point *const this_obj);
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);
void Container_int__ctor(Container_int *const this_obj);
void Container_int__push(Container_int *const this_obj, int value);
int Container_int__get(const Container_int *const this_obj, int idx);
int Container_int__getSize(const Container_int *const this_obj);
void Container_double__ctor(Container_double *const this_obj);
void Container_double__push(Container_double *const this_obj, double value);
double Container_double__get(const Container_double *const this_obj, int idx);
int Container_double__getSize(const Container_double *const this_obj);
void Base_Constructor(Base *const this_obj);
int Base_virtual_func(Base *const _this, int x);
const char * Base_getName(const Base *const _this);
void Base_destructor(Base *const _this);
void Base_deleting_destructor(Base *const this_obj);
void Derived_Constructor(Derived *const this, int m);
int Derived_virtual_func(Derived *const this, int x);
const char * Derived_getName(const Derived *const _this);
void Derived_destructor(Derived *const _this);
void Derived_deleting_destructor(Derived *const _this);
void LifecycleClass_LifecycleClass(LifecycleClass *const this_obj, size_t s);
void LifecycleClass_destructor(LifecycleClass *const this_obj);
int LifecycleClass_getData(const LifecycleClass *const this_obj, size_t idx);
int LifecycleClass_getInstanceCount(void);

/* Macros for accessing low/high 32-bit parts of 64-bit values */
#define LODWORD(x) (*((uint32_t*)&(x)))
#define HIDWORD(x) (*(((uint32_t*)&(x)) + 1))

/* GCC stack canary intrinsic for C compatibility */
static inline unsigned int __readgsdword(unsigned int offset) {
    unsigned int value;
    __asm__ __volatile__("movl %%gs:%1,%0" : "=r"(value) : "m"(*(unsigned int *)(offset)));
    return value;
}

typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;

typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Container struct definitions (must be defined before their function declarations) */
struct Container_int {
  int size;
  int data[10];
};

struct Container_double {
  int size;
  double data[10];
};

/* Forward declarations for tuple types */
typedef struct std_Tuple_impl_0_int_deleter std_Tuple_impl_0_int_deleter;
typedef struct std_Tuple_impl_0_int_deleter_array std_Tuple_impl_0_int_deleter_array;
typedef struct std_Tuple_impl_0_int_lambda std_Tuple_impl_0_int_lambda;
typedef struct std_Tuple_impl_1_deleter std_Tuple_impl_1_deleter;
typedef struct std_Tuple_impl_1_deleter_array std_Tuple_impl_1_deleter_array;
typedef struct std_Tuple_impl_1_lambda std_Tuple_impl_1_lambda;
typedef struct std_Head_base_0_int_false std_Head_base_0_int_false;
typedef struct std_Head_base_1_deleter_true std_Head_base_1_deleter_true;
typedef struct std_Head_base_1_deleter_array_true std_Head_base_1_deleter_array_true;
typedef struct std_Head_base_1_lambda_true std_Head_base_1_lambda_true;

/* C++ Standard Library Type Definitions (simplified for C) */
typedef struct { void *_M_ptr; } std_unique_ptr_int;
typedef struct { void *_M_ptr; } std_unique_ptr_int_lambda;
typedef struct { void *_M_ptr; } std_unique_ptr_int_array;
typedef struct { void *_M_head_impl; } std_head_base_int;
typedef struct { void *_M_head_impl; } std_head_base_deleter;
typedef struct { void *_M_head_impl; } std_head_base_deleter_array;
typedef struct { void *_M_head_impl; } std_head_base_lambda;
typedef struct { 
  std_head_base_int _M_head_impl_0;
  std_head_base_deleter _M_head_impl_1;
} std_tuple_impl_int_deleter;
typedef struct { 
  std_head_base_int _M_head_impl_0;
  std_head_base_deleter_array _M_head_impl_1;
} std_tuple_impl_int_deleter_array;
typedef struct { 
  std_head_base_int _M_head_impl_0;
  std_head_base_lambda _M_head_impl_1;
} std_tuple_impl_int_lambda;
typedef struct { 
  std_tuple_impl_int_deleter _M_t;
} std_uniq_ptr_impl_int;
typedef struct { 
  std_tuple_impl_int_deleter_array _M_t;
} std_uniq_ptr_impl_int_array;
typedef struct { 
  std_tuple_impl_int_lambda _M_t;
} std_uniq_ptr_impl_int_lambda;
typedef struct { 
  std_uniq_ptr_impl_int _M_t;
} std_uniq_ptr_data_int;
typedef struct { 
  std_uniq_ptr_impl_int_array _M_t;
} std_uniq_ptr_data_int_array;
typedef struct { 
  std_uniq_ptr_impl_int_lambda _M_t;
} std_uniq_ptr_data_int_lambda;
typedef struct { unsigned char gap0; } std_default_delete_int;
typedef struct { unsigned char gap0; } std_default_delete_int_array;
typedef struct test_cpp_smart_ptr_lambda test_cpp_smart_ptr_lambda;
typedef struct std_remove_reference_const_test_cpp_smart_ptr_lambda_ref_type std_remove_reference_const_test_cpp_smart_ptr_lambda_ref_type;
typedef struct const_lambda_closure const_lambda_closure;

struct test_cpp_smart_ptr_lambda {
  unsigned char gap0;
};

struct std_remove_reference_const_test_cpp_smart_ptr_lambda_ref_type {
  unsigned char gap0;
};

struct const_lambda_closure {
  unsigned char gap0;
};

/* Struct definitions */
struct Point {
  int x;
  int y;
};

struct SimpleClass {
  int value;
  char name[32];
};

struct LifecycleClass {
  size_t size;
  int *data;
};

/* Static instance count for LifecycleClass */
int LifecycleClass_instance_count;

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
  int (**_vptr_MiddleA)(...);
  int dataA;
  int (**_vptr_MiddleB)(...);
  int dataB;
  struct MiddleB MiddleB;
};

struct MultiDerived {
  int (**_vptr_BaseA)(...);
  int dataA;
  struct BaseB baseB_obj;
  int (**_vptr_BaseB)(...);
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

typedef std_unique_ptr_int std_remove_reference_std_unique_ptr_int_ref_type;
typedef int * std___tuple_element_t;
typedef int * std___tuple_element_t_0;
typedef int * std___tuple_element_t_1;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-1/5-1_gcc_O0_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x1000 */
int init_proc()
{
 if ( &_gmon_start__ )
 ((void (*)(void))_gmon_start__)();
 frame_dummy();
 return _do_global_ctors_aux();
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile ("jmp *8(%%ebx)" ::: "memory");
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
 sub_1030();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
 sub_1030();
}


/* Function: sub_1060 @ 0x1060 */
void sub_1060()
{
 sub_1030();
}


/* Function: sub_1070 @ 0x1070 */
void sub_1070()
{
 sub_1030();
}


/* Function: sub_1080 @ 0x1080 */
void sub_1080()
{
 sub_1030();
}


/* Function: sub_1090 @ 0x1090 */
void sub_1090()
{
 sub_1030();
}


/* Function: sub_10A0 @ 0x10A0 */
void sub_10A0()
{
 sub_1030();
}


/* Function: sub_10B0 @ 0x10B0 */
void sub_10B0()
{
 sub_1030();
}


/* Function: sub_10C0 @ 0x10C0 */
void sub_10C0()
{
 sub_1030();
}


/* Function: sub_10D0 @ 0x10D0 */
void sub_10D0()
{
 sub_1030();
}


/* Function: sub_10E0 @ 0x10E0 */
void sub_10E0()
{
 sub_1030();
}


/* Function: sub_10F0 @ 0x10F0 */
void sub_10F0()
{
 sub_1030();
}


/* Function: sub_1100 @ 0x1100 */
void sub_1100()
{
 sub_1030();
}


/* Function: sub_1110 @ 0x1110 */
void sub_1110()
{
 sub_1030();
}


/* Function: sub_1120 @ 0x1120 */
void sub_1120()
{
 sub_1030();
}


/* Function: sub_1130 @ 0x1130 */
void sub_1130()
{
 sub_1030();
}


/* Function: sub_1140 @ 0x1140 */
void sub_1140()
{
 sub_1030();
}


/* Function: sub_1150 @ 0x1150 */
void sub_1150()
{
 sub_1030();
}


/* Function: sub_1160 @ 0x1160 */
void sub_1160()
{
 sub_1030();
}


/* Function: sub_1170 @ 0x1170 */
void sub_1170()
{
 sub_1030();
}


/* Function: sub_1180 @ 0x1180 */
void sub_1180()
{
 sub_1030();
}


/* Function: sub_1190 @ 0x1190 */
void sub_1190()
{
 sub_1030();
}


/* Function: sub_11A0 @ 0x11A0 */
int sub_11A0(int a1)
{
 return (*(int (**)(void))(a1 + 104))();
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_133C @ 0x133C */
void sub_133C()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1340 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1479 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x147D */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: _Z20test_cpp_member_funcv @ 0x1482 */
long long test_cpp_member_func()
{
 long long result; // rax
 int r1; // [esp+Ch] [ebp-3Ch]
 int r2; // [esp+10h] [ebp-38h]
 SimpleClass obj; // [esp+18h] [ebp-30h] BYREF
 unsigned int v4; // [esp+3Ch] [ebp-Ch]

 v4 = __readgsdword(0x14u);
 SimpleClass_SimpleClass(&obj, 5, "Test");
 SimpleClass_setValue(&obj, 10);
 r1 = SimpleClass_getValue(&obj);
 r2 = SimpleClass_compute(&obj, 3);
 LODWORD(result) = r2 + r1 + SimpleClass_getClassID();
 HIDWORD(result) = v4 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z20test_cpp_constructorv @ 0x1519 */
long long test_cpp_constructor()
{
 long long v0; // rax
 int result; // [esp+0h] [ebp-18h]
 int resulta; // [esp+0h] [ebp-18h]
 LifecycleClass obj; // [esp+4h] [ebp-14h] BYREF
 unsigned int v4; // [esp+Ch] [ebp-Ch]

 v4 = __readgsdword(0x14u);
 LifecycleClass_LifecycleClass(&obj, 5u);
 result = LifecycleClass_getData(&obj, 2u);
 resulta = LifecycleClass_getInstanceCount() + result;
 LifecycleClass_destructor(&obj);
 LODWORD(v0) = 1000 * LifecycleClass_getInstanceCount() + resulta;
 HIDWORD(v0) = v4 - __readgsdword(0x14u);
 return v0;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x159F */
int call_virtual_func(Base *obj, int x)
{
 return (*obj->_vptr_Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x15CA */
long long test_cpp_virtual_func()
{
 int v0; // ebx
 long long result; // rax
 Base base; // [esp+8h] [ebp-30h] BYREF
 int r1; // [esp+Ch] [ebp-2Ch]
 int r2; // [esp+10h] [ebp-28h]
 Base *pb; // [esp+14h] [ebp-24h]
 Base *pd; // [esp+18h] [ebp-20h]
 int r3; // [esp+1Ch] [ebp-1Ch]
 int r4; // [esp+20h] [ebp-18h]
 Derived derived; // [esp+24h] [ebp-14h] BYREF
 unsigned int v10; // [esp+2Ch] [ebp-Ch]

 v10 = __readgsdword(0x14u);
 base._vptr_Base = (int (**)(...))&off_8DA8;
 Derived_Constructor(&derived, 3);
 this->multiplier = 3;
 r1 = Base_virtual_func(&base, 5);
 r2 = Derived_virtual_func(&derived, 5, 0);
 pb = &base;
 pd = &derived;
 r3 = call_virtual_func(&base, 5);
 r4 = call_virtual_func(pd, 5);
 v0 = r3 + r2 + r1 + r4;
 Derived_destructor(&derived);
 Base_destructor(&base);
 LODWORD(result) = v0;
 HIDWORD(result) = v10 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x16DE */
long long test_cpp_multiple_inheritance()
{
 int v0; // ebx
 long long result; // rax
 int r1; // [esp+10h] [ebp-28h]
 MultiDerived obj; // [esp+1Ch] [ebp-1Ch] BYREF
 unsigned int v4; // [esp+2Ch] [ebp-Ch]

 v4 = __readgsdword(0x14u);
 MultiDerived_Constructor(&obj);
 obj.dataA = 100;
 obj.dataB = 200;
r1 = ((int (*)(MultiDerived *))obj._vptr_BaseA)(&obj);
  v0 = ((int (*)(BaseB *))obj._vptr_BaseB)(&obj.baseB_obj) + r1 + (&obj != (MultiDerived *)&obj.baseB_obj);
  MultiDerived_destructor(&obj);
 LODWORD(result) = v0;
 HIDWORD(result) = v4 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x17C0 */
long long test_cpp_diamond_inheritance()
{
 int v0; // ebx
 long long result; // rax
 int r1; // [esp+Ch] [ebp-2Ch]
 DiamondDerived obj; // [esp+14h] [ebp-24h] BYREF

 *(&obj.dataB + 1) = __readgsdword(0x14u);
 DiamondDerived_Constructor(&obj);
 obj.dataB = 50;
 r1 = ((int (*)(MiddleB *))obj._vptr_MiddleB)(&obj.MiddleB);
 obj.dataB = 100;
 v0 = r1 + ((int (*)(MiddleB *))obj._vptr_MiddleB)(&obj.MiddleB);
 DiamondDerived_Destructor(&obj);
 LODWORD(result) = v0;
 HIDWORD(result) = *(&obj.dataB + 1) - __readgsdword(0x14u);
 return result;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1888 */
long long test_cpp_operator_overload()
{
 int v0; // edx
 long long result; // rax
 bool eq; // [esp+3h] [ebp-25h]
 Point p1; // [esp+4h] [ebp-24h] BYREF
 Point p2; // [esp+Ch] [ebp-1Ch] BYREF
 Point p3; // [esp+14h] [ebp-14h] BYREF
 unsigned int v6; // [esp+1Ch] [ebp-Ch]

 v6 = __readgsdword(0x14u);
Point_Constructor(&p1, 1, 2);
  Point_Constructor(&p2, 3, 4);
  Point_operator_plus(&p3, &p1, &p2);
 eq = Point_operator_eq(&p1, &p2);
 Point_operator_increment(&p3);
 if ( eq )
 v0 = 0;
 else
 v0 = 10;
 LODWORD(result) = v0 + p3.x + p3.y;
 HIDWORD(result) = v6 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1938 */
long long test_cpp_template_func()
{
 long long result; // rax
 int a; // [esp+14h] [ebp-24h] BYREF
 int b; // [esp+18h] [ebp-20h] BYREF
 int r1; // [esp+1Ch] [ebp-1Ch]
 double r2; // [esp+20h] [ebp-18h]
 unsigned int v5; // [esp+2Ch] [ebp-Ch]

 v5 = __readgsdword(0x14u);
 r1 = template_max_int(3, 7);
 r2 = template_max_double(2.5, 1.5);
 a = 10;
 b = 20;
 template_swap_int(&a, &b);
 LODWORD(result) = a + r1 + (int)r2 + b;
 HIDWORD(result) = v5 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z23test_cpp_template_classv @ 0x19F3 */
long long test_cpp_template_class()
{
 long long result; // rax
 int r1; // [esp+18h] [ebp-A0h]
 int r2; // [esp+1Ch] [ebp-9Ch]
 Container_int int_container; // [esp+2Ch] [ebp-8Ch] BYREF
 Container_double double_container; // [esp+58h] [ebp-60h] BYREF
 unsigned int v5; // [esp+ACh] [ebp-Ch]

 v5 = __readgsdword(0x14u);
 Container_int__ctor(&int_container);
 Container_int__push(&int_container, 10);
 Container_int__push(&int_container, 20);
 Container_int__push(&int_container, 30);
 r1 = Container_int__get(&int_container, 0);
 r2 = Container_int__getSize(&int_container);
 Container_double__ctor(&double_container);
 Container_double__push(&double_container, 3.14);
 LODWORD(result) = r2 + r1 + (int)Container_double__get(&double_container, 0);
 HIDWORD(result) = v5 - __readgsdword(0x14u);
 return result;
}


struct LambdaClosure1 {
 int __capture_by_value;
 int *__capture_by_ref;
};

int lambda1_operator(LambdaClosure1 *__closure, int x)
{
 (*__closure->__capture_by_ref) += 5;
 return x * __closure->__capture_by_value + (*__closure->__capture_by_ref);
}


/* Function: _Z15test_cpp_lambdav @ 0x1B6B */
// local variable allocation has failed, the output may be wrong!
long long test_cpp_lambda()
{
 long long result; // rax
 int capture_by_ref; // [esp+4h] [ebp-24h] BYREF
 int capture_by_value; // [esp+8h] [ebp-20h]
 int r1; // [esp+Ch] [ebp-1Ch]
 int *p_capture_by_ref; // [esp+18h] [ebp-10h]
 unsigned int v6; // [esp+1Ch] [ebp-Ch]

 v6 = __readgsdword(0x14u);
 capture_by_value = 10;
 capture_by_ref = 20;
 p_capture_by_ref = &capture_by_ref;
 {
  LambdaClosure1 closure;
  closure.__capture_by_value = capture_by_value;
  closure.__capture_by_ref = p_capture_by_ref;
  r1 = lambda1_operator(&closure, 3);
 }
 LODWORD(result) = r1 + 30;
 HIDWORD(result) = v6 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z18test_cpp_exceptionv @ 0x1BD7 */
void test_cpp_exception()
{
 unsigned int *exception; // eax

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&typeinfo_for_int, 0);
}


/* Function: _ZZ18test_cpp_smart_ptrvENKUlPiE_clES_ @ 0x1D26 */
void test_cpp_smart_ptr_lambda_operator(
 test_cpp_smart_ptr_lambda *const __closure,
 int *p)
{
 *p = -1;
 if ( p )
 operator delete(p, 4u);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1D5E */
long long test_cpp_smart_ptr()
{
 int *v0;
 std_remove_reference_std_unique_ptr_int_ref_type *v1;
 int *v2;
 int *v3;
 int v4;
 long long result;
 test_cpp_smart_ptr_lambda deleter;
 std_unique_ptr_int ptr2;
 std_unique_ptr_int_array ptr3_alt;
 std_unique_ptr_int_lambda ptr3;
 int r1;
 int r2;
 int r3;
 unsigned int v12;

 v12 = __readgsdword(0x14u);
 v0 = (int *)operator new(4u);
 *v0 = 100;
 std_unique_ptr_int_ctor(&ptr2, v0);
 __asm__ volatile ("" ::: "memory");
 *std_unique_ptr_int_deref(&ptr2) = 200;
 v1 = std_move_unique_ptr_int(&ptr2);
 std_unique_ptr_int_unique_ptr_move(&ptr2, v1);
 r1 = *std_unique_ptr_int_deref(&ptr2);
 v2 = (int *)operator new[](0x14u);
 *v2 = 1;
 v2[1] = 2;
 v2[2] = 3;
 v2[3] = 4;
 v2[4] = 5;
 std_unique_ptr_int_array_ctor(&ptr3_alt, v2);
 r2 = std_unique_ptr_int_array_index(&ptr3_alt, 2u);
 v3 = (int *)operator new(4u);
 *v3 = 500;
 std_unique_ptr_int_lambda_ctor(&ptr3, v3, &deleter);
 r3 = *std_unique_ptr_int_lambda_deref(&ptr3);
 v4 = r2 + r1 + r3;
 std_unique_ptr_int_lambda_destructor(&ptr3);
 std_unique_ptr_int_array_destructor(&ptr3_alt);
 std_unique_ptr_int_destructor(&ptr2);
 LODWORD(result) = v4;
 HIDWORD(result) = v12 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z13test_cpp_rttiv @ 0x1F3B */
int test_cpp_rtti()
{
 RTTIDerivedA *v0; // esi
 RTTIDerivedB *v1; // esi
 const RTTIDerivedA *v2; // eax
 const RTTIDerivedB *v3; // eax
 const char *v4; // eax
 int result; // [esp+Ch] [ebp-1Ch]
 int resulta; // [esp+Ch] [ebp-1Ch]
 RTTIBase *obj1; // [esp+10h] [ebp-18h]

 v0 = (RTTIDerivedA *)operator new(4u);
 v0->_vptr_RTTIBase = 0;
 RTTIDerivedA::RTTIDerivedA(v0);
 obj1 = v0;
 v1 = (RTTIDerivedB *)operator new(4u);
 v1->_vptr_RTTIBase = 0;
 RTTIDerivedB::RTTIDerivedB(v1);
 result = 0;
 if ( !obj1 )
 __cxa_bad_typeid();
 if ( std_type_info_operator_equal(
 (const struct std_type_info *)(*((const std::type_info *const *)obj1->_vptr_RTTIBase - 1)),
 (const struct std_type_info *)&typeinfo_for_RTTIDerivedA) )
 {
 result = 10;
 }
 if ( !v1 )
 __cxa_bad_typeid();
 if ( std_type_info_operator_equal(
 *((const std::type_info *const *)v1->_vptr_RTTIBase - 1),
 (const std::type_info *)&typeinfo_for_RTTIDerivedB) )
 {
 result += 20;
 }
 v2 = (const RTTIDerivedA *)__dynamic_cast(
 obj1,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedA,
 0);
 if ( v2 )
 result += RTTIDerivedA::derivedA_data(v2);
 v3 = (const RTTIDerivedB *)__dynamic_cast(
 v1,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedB,
 0);
 if ( v3 )
 result += RTTIDerivedB::derivedB_data(v3);
 v4 = std_type_info_name(*((const std::type_info *const *)obj1->_vptr_RTTIBase - 1));
 resulta = result + strlen(v4);
 (*((void ( **)(RTTIBase *))obj1->_vptr_RTTIBase + 1))(obj1);
 (*((void ( **)(RTTIDerivedB *))v1->_vptr_RTTIBase + 1))(v1);
 return resulta;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x20EA */
void test_cpp_oo_features()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax
 int v8; // eax

 puts(asc_503C);
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


/* Function: main @ 0x2238 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: std::__uniq_ptr_data_int_test_cpp_smart_ptr()::_lambda(int_)__true_false_::__uniq_ptr_data_const_test_cpp_smart_ptr()::_lambda(int_)_&_ @ 0x2258 */
void std___uniq_ptr_data_int_test_cpp_smart_ptr_lambda_const(
 void *_this,
 int *__p,
 const struct {unsigned char gap0;} *a3)
{
 std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_const(
 _this,
 __p,
 a3);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EC2IS1_vEES0_RKS1_ @ 0x2282 */
void std_unique_ptr_int_test_cpp_smart_ptr_lambda_ctor(
 void *_this,
 int *__p,
 const test_cpp_smart_ptr_lambda *__d)
{
 std___uniq_ptr_data_int_test_cpp_smart_ptr_lambda_const(
 _this,
 __p,
 __d);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_ED2Ev @ 0x22AA */
void std_unique_ptr_int_lambda_destructor(
 void *_this)
{
 test_cpp_smart_ptr_lambda *deleter; // ebx
 int **v2; // eax
 int **__ptr; // [esp+Ch] [ebp-Ch]

 __ptr = std___uniq_ptr_impl_int_lambda_M_ptr(_this);
 if ( *__ptr )
 {
 deleter = std_unique_ptr_int_lambda_get_deleter(_this);
 v2 = std_move_int_ptr(__ptr);
 test_cpp_smart_ptr_lambda_operator(deleter, *v2);
 }
 *__ptr = 0;
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EdeEv @ 0x2312 */
int * std_unique_ptr_int_lambda_deref(
 const void *_this)
{
 return std_unique_ptr_int_lambda_get(_this);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_EC2IRKS1_EES0_OT_ @ 0x233A */
void std___uniq_ptr_impl_int_lambda_ctor(
 void *_this,
 int *__p,
 const test_cpp_smart_ptr_lambda *__d)
{
 const test_cpp_smart_ptr_lambda *v3; // eax

 v3 = std_forward_lambda_const(__d);
 std_tuple_int_lambda_ctor(
 _this,
 &__p,
 v3);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv @ 0x2374 */
int ** std___uniq_ptr_impl_int_lambda_M_ptr(
 void *_this)
{
 return std_get_int_tuple_0(_this);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E11get_deleterEv @ 0x2396 */
test_cpp_smart_ptr_lambda * std_unique_ptr_int_lambda_get_deleter(
 void *this_obj)
{
 return (test_cpp_smart_ptr_lambda *)std___uniq_ptr_impl_int_lambda_M_deleter(this_obj);
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E3getEv @ 0x23B8 */
int * std_unique_ptr_int_lambda_get(
 const void *_this)
{
 return std___uniq_ptr_impl_int_lambda_M_ptr_const(_this);
}


/* Function: _ZSt7forwardIRKZ18test_cpp_smart_ptrvEUlPiE_EOT_RNSt16remove_referenceIS4_E4typeE @ 0x23D9 */
const test_cpp_smart_ptr_lambda * std_forward_lambda_const(
 const test_cpp_smart_ptr_lambda *__t)
{
 return (const test_cpp_smart_ptr_lambda *)__t;
}


/* Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_RKS1_Lb1EEEOT_OT0_ @ 0x23EC */
void std_tuple_int_lambda_ctor(
 void *_this,
 int **__a1,
 const test_cpp_smart_ptr_lambda *__a2)
{
 const test_cpp_smart_ptr_lambda *v3; // ebx
 int **v4; // eax

 v3 = std_forward_lambda_const(__a2);
 v4 = std_forward_int_ptr(__a1);
 std_Tuple_impl_int_lambda_ctor(
 _this,
 v4,
 v3);
}


/* Function: _ZSt3getILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x242F */
int ** std_get_int_tuple_0(
 void *__t)
{
 return std___get_helper_0_int_lambda(__t);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E10_M_deleterEv @ 0x2450 */
test_cpp_smart_ptr_lambda * std___uniq_ptr_impl_int_lambda_M_deleter(
 void *this_obj)
{
 return (test_cpp_smart_ptr_lambda *)std_get_1_int_lambda(this_obj);
}


/* Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv @ 0x2472 */
int * std___uniq_ptr_impl_int_lambda_M_ptr_const(
 const void *_this)
{
 return *std_get_int_tuple_0_const(_this);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_JRKS1_EvEEOT_DpOT0_ @ 0x2496 */
void std_Tuple_impl_int_lambda_ctor(
 void *_this,
 int **__head,
 const test_cpp_smart_ptr_lambda *__t)
{
 const test_cpp_smart_ptr_lambda *v3; // eax
 int **v4; // eax

 v3 = std_forward_lambda_const(__t);
 std_Tuple_impl_1_lambda_ctor(_this, v3);
 v4 = std_forward_int_ptr(__head);
 std_Head_base_int_ctor((void *)_this, v4);
}


/* Function: _ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x24E5 */
int ** std___get_helper_0_int_lambda(
 void *__t)
{
 return std_Tuple_impl_int_lambda_M_head(__t);
}


/* Function: _ZSt3getILj1EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x2505 */
test_cpp_smart_ptr_lambda * std_get_1_int_lambda(
 void *__t)
{
 return std___get_helper_1_test_cpp_smart_ptr_lambda(__t);
}


/* Function: _ZSt3getILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ @ 0x2525 */
const int * std_get_int_tuple_0_const(
 const void *__t)
{
 return std___get_helper_0_int_lambda_const(__t);
}


/* Function: _ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvEUlPiE_EEC2ERKS1_ @ 0x2546 */
void std_Tuple_impl_1_lambda_ctor(
 void *_this_obj,
 const test_cpp_smart_ptr_lambda *__head)
{
 std_Head_base_1_lambda_ctor(_this_obj, __head);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERS2_ @ 0x256A */
int ** std_Tuple_impl_int_lambda_M_head(
 void *__t)
{
 std_head_base_int *base = (std_head_base_int *)__t;
 return (int **)base->_M_head_impl;
}


/* Function: std::__get_helper_1_test_cpp_smart_ptr()::_lambda(int_)___ @ 0x258B */
test_cpp_smart_ptr_lambda * std___get_helper_1_test_cpp_smart_ptr_lambda(
 void *this_obj)
{
 std_head_base_lambda *base = (std_head_base_lambda *)this_obj;
 return (test_cpp_smart_ptr_lambda *)&base->_M_head_impl;
}


/* Function: _ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x25AB */
const int * std___get_helper_0_int_lambda_const(
 const void *__t)
{
 return std_Tuple_impl_0_int_lambda_M_head_const(__t);
}


/* Function: _ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EEC2ERKS1_ @ 0x25CC */
void std_Head_base_1_lambda_ctor(
 void *_this_obj,
 const test_cpp_smart_ptr_lambda *__h)
{
 ;
}


/* Function: _ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvEUlPiE_EE7_M_headERS2_ @ 0x25DC */
test_cpp_smart_ptr_lambda * std_Tuple_impl_1_lambda_M_head(
 void *_this_obj)
{
 std_head_base_lambda *base = (std_head_base_lambda *)_this_obj;
 return (test_cpp_smart_ptr_lambda *)&base->_M_head_impl;
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERKS2_ @ 0x25FC */
const int * std_Tuple_impl_0_int_lambda_M_head_const(
 const void *__t)
{
 const std_head_base_int *base = (const std_head_base_int *)__t;
 return (const int *)&base->_M_head_impl;
}


/* Function: _ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EE7_M_headERS2_ @ 0x261D */
test_cpp_smart_ptr_lambda * std_Head_base_1_lambda_true_M_head(
 void *base_obj)
{
 std_head_base_lambda *base = (std_head_base_lambda *)base_obj;
 return (test_cpp_smart_ptr_lambda *)&base->_M_head_impl;
}


/* Function: _Z41__static_initialization_and_destruction_0ii @ 0x262F */
void __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
 if ( __initialize_p == 1 && __priority == 0xFFFF )
 {
 std_ios_base_Init_Init(&std___ioinit);
 __cxa_atexit((void (*)(void *))&std_ios_base_Init_destructor, &std___ioinit, &_dso_handle);
 }
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x268C */
void GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 __static_initialization_and_destruction_0(1, 0xFFFF);
}


/* Function: _ZNKSt9type_info4nameEv @ 0x26B4 */
const char * std_type_info_name(const struct std_type_info *this_obj)
{
 if ( **((unsigned char **)this_obj + 1) == 42 )
 return (const char *)(*((unsigned int *)this_obj + 1) + 1);
 else
 return (const char *)*((unsigned int *)this_obj + 1);
}


/* Function: _ZNKSt9type_infoeqERKS_ @ 0x26E6 */
bool std_type_info_operator_equal(const struct std_type_info *this_obj, const struct std_type_info *__arg)
{
 return *((unsigned int *)this_obj + 1) == *((unsigned int *)__arg + 1)
 || **((unsigned char **)this_obj + 1) != 42 && !strcmp(*((const char **)this_obj + 1), *((const char **)__arg + 1));
}


/* Function: _ZN11SimpleClassC2EiPKc @ 0x274A */
void SimpleClass_SimpleClass(SimpleClass *const this_obj, int v, const char *n)
{
 this_obj->value = v;
 strncpy(this_obj->name, n, 0x1Fu);
 this_obj->name[31] = 0;
}


/* Function: _ZNK11SimpleClass8getValueEv @ 0x278E */
int SimpleClass_getValue(const SimpleClass *const _this)
{
 return _this->value;
}


/* Function: _ZN11SimpleClass8setValueEi @ 0x27A6 */
void SimpleClass_setValue(SimpleClass *const this_obj, int v)
{
 this_obj->value = v;
}


/* Function: _ZNK11SimpleClass7computeEi @ 0x27C2 */
int SimpleClass_compute(const SimpleClass *const _this, int x)
{
 int v2; // esi

 v2 = x * _this->value;
 return v2 + strlen(_this->name);
}


/* Function: _ZN11SimpleClass10getClassIDEv @ 0x27FD */
int SimpleClass_getClassID()
{
 return 4660;
}


/* Function: _ZN14LifecycleClassC2Ej @ 0x2816 */
void LifecycleClass_LifecycleClass(LifecycleClass *const _this, size_t s)
{
 size_t i; // [esp+Ch] [ebp-Ch]

 _this->size = s;
 if ( s > 0x1FFFFFFF )
 __cxa_throw_bad_array_new_length();
 _this->data = (int *)operator new[](4 * s);
 for ( i = 0; i < s; ++i )
 _this->data[i] = 10 * i;
 ++LifecycleClass_instance_count;
}


/* Function: _ZN14LifecycleClassD2Ev @ 0x28A4 */
void LifecycleClass_destructor(LifecycleClass *const _this)
{
 if ( _this->data )
 operator delete[](_this->data);
 --LifecycleClass_instance_count;
}


/* Function: _ZNK14LifecycleClass7getDataEj @ 0x28EA */
int LifecycleClass_getData(const LifecycleClass *const _this, size_t idx)
{
 if ( idx >= _this->size )
 return -1;
 else
 return _this->data[idx];
}


/* Function: _ZN14LifecycleClass16getInstanceCountEv @ 0x291E */
int LifecycleClass_getInstanceCount()
{
 return LifecycleClass_instance_count;
}


/* Function: _ZN4Base12virtual_funcEi @ 0x2938 */
int Base_virtual_func(Base *const this_obj, int x)
{
 return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x2952 */
const char * Base_getName(const Base *const _this)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x296C */
void Base_destructor(Base *const this_obj)
{
 this_obj->_vptr_Base = (int (**)(...))&off_8DA8;
}


/* Function: _ZN4BaseD0Ev @ 0x298C */
void Base_deleting_destructor(Base *const this_obj)
{
 Base_destructor(this_obj);
 operator delete(this_obj, 4u);
}


/* Function: _ZN4BaseC2Ev @ 0x29C6 */
void Base_Constructor(Base *const _this)
{
 _this->_vptr_Base = (int (**)(...))&off_8DA8;
}


/* Function: _ZN7DerivedC2Ei @ 0x29E6 */
void Derived_Constructor(Derived *const this, int m)
{
 Base_Constructor(this);
 this->_vptr_Base = (int (**)(...))&off_8D90;
 this->multiplier = m;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x2A26 */
int Derived_virtual_func(Derived *const this, int x)
{
 return x * this->multiplier;
}


/* Function: _ZNK7Derived7getNameEv @ 0x2A44 */
const char * Derived_getName(const Derived *const _this)
{
 return "Derived";
}


/* Function: _ZN5BaseA5funcAEv @ 0x2A5E */
int BaseA_funcA(BaseA *const this_obj)
{
 return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x2A76 */
void BaseA_destructor(BaseA *const this_obj)
{
 this_obj->_vptr_BaseA = (int (**)(...))&off_8D7C;
}


/* Function: _ZN5BaseAD0Ev @ 0x2A96 */
void BaseA_deleting_destructor(BaseA *const this_obj)
{
 BaseA_destructor(this_obj);
 operator delete(this_obj, 8u);
}


/* Function: _ZN5BaseB5funcBEv @ 0x2AD0 */
int BaseB_funcB(BaseB *const this_obj)
{
 return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x2AE8 */
void BaseB_destructor(BaseB *const this_obj)
{
 this_obj->_vptr_BaseB = (int (**)(...))&off_8D68;
}


/* Function: _ZN5BaseBD0Ev @ 0x2B08 */
void BaseB_deleting_destructor(BaseB *const this_obj)
{
 BaseB_destructor(this_obj);
 operator delete(this_obj, 8u);
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x2B42 */
int MultiDerived_funcA(MultiDerived *const this_obj)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x2B5A */
int MultiDerived_funcB(MultiDerived *const this_obj)
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x2B72 */
int non_virtual_thunk_to_MultiDerived_funcB(MultiDerived *_this)
{
 return MultiDerived_funcB((MultiDerived *)((char *)_this - 8));
}


/* Function: _ZN5BaseAC2Ev @ 0x2B7E */
void BaseA_Constructor(BaseA *const this_obj)
{
 this_obj->_vptr_BaseA = (int (**)(...))&off_8D7C;
}


/* Function: _ZN5BaseBC2Ev @ 0x2B9E */
void BaseB_Constructor(BaseB *const this_obj)
{
 this_obj->_vptr_BaseB = (int (**)(...))&off_8D68;
}


/* Function: _ZN12MultiDerivedC2Ev @ 0x2BBE */
void MultiDerived_Constructor(MultiDerived *const this_obj)
{
 BaseA_Constructor(this_obj);
 BaseB_Constructor(&this_obj->baseB_obj);
 this_obj->_vptr_BaseA = (int (**)(...))&off_8D3C;
 this_obj->_vptr_BaseB = (int (**)(...))&off_8D54;
}


/* Function: _ZN11VirtualBase4funcEv @ 0x2C12 */
int VirtualBase_func(VirtualBase *const this_obj)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x2C2A */
void VirtualBase_destructor(VirtualBase *const this_obj)
{
 this_obj->_vptr_VirtualBase = (int (**)(...))&off_8D28;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x2C4A */
void VirtualBase_deleting_destructor(VirtualBase *const this_obj)
{
 VirtualBase_destructor(this_obj);
 operator delete(this_obj, 8u);
}


/* Function: _ZN7MiddleA4funcEv @ 0x2C84 */
int MiddleA_func(MiddleA *const this_obj)
{
 return *(int *)((char *)&this_obj->dataA + *((unsigned int *)this_obj->_vptr_MiddleA - 3)) + 150;
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x2CB0 */
int virtual_thunk_to_MiddleA_func(MiddleA *_this)
{
 return MiddleA_func((MiddleA *)((char *)_this + *((unsigned int *)_this->_vptr_MiddleA - 3)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x2CC4 */
int MiddleB_func(MiddleB *const this_obj)
{
 return *(int *)((char *)&this_obj->dataB + *((unsigned int *)this_obj->_vptr_MiddleB - 3)) + 200;
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x2CF0 */
int virtual_thunk_to_MiddleB_func(MiddleB *_this)
{
 return MiddleB_func((MiddleB *)((char *)_this + *((unsigned int *)_this->_vptr_MiddleB - 3)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x2D04 */
int DiamondDerived_func(DiamondDerived *const this_obj)
{
 return *(int *)((char *)&this_obj->dataA + *((unsigned int *)this_obj->_vptr_MiddleA - 3)) + 250;
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x2D30 */
int virtual_thunk_to_DiamondDerived_func(DiamondDerived *_this)
{
 return DiamondDerived_func((DiamondDerived *)((char *)_this + *((unsigned int *)_this->_vptr_MiddleA - 3)));
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x2D43 */
int non_virtual_thunk_to_DiamondDerived_func(DiamondDerived *_this)
{
 return DiamondDerived_func((DiamondDerived *)((char *)_this - 8));
}


/* Function: _ZN11VirtualBaseC2Ev @ 0x2D4E */
void VirtualBase_Constructor(VirtualBase *const this_obj)
{
 this_obj->_vptr_VirtualBase = (int (**)(...))&off_8D28;
}


/* Function: _ZN7MiddleAC2Ev @ 0x2D6E */
void MiddleA_Constructor(MiddleA *const this_obj, const void **const __vtt_parm)
{
 this_obj->_vptr_MiddleA = (int (**)(...))*__vtt_parm;
 *(int (***)(...))((char *)&this_obj->_vptr_MiddleA + *((unsigned int *)this_obj->_vptr_MiddleA - 3)) = (int (**)(...))__vtt_parm[1];
}


/* Function: _ZN7MiddleAD2Ev @ 0x2DA6 */
void MiddleA_destructor(MiddleA *const this_obj, const void **const __vtt_parm)
{
 this_obj->_vptr_MiddleA = (int (**)(...))*__vtt_parm;
 *(int (***)(...))((char *)&this_obj->_vptr_MiddleA + *((unsigned int *)this_obj->_vptr_MiddleA - 3)) = (int (**)(...))__vtt_parm[1];
}


/* Function: _ZN7MiddleBC2Ev @ 0x2DDE */
void MiddleB_Constructor(MiddleB *const this_obj, const void **const __vtt_parm)
{
 this_obj->_vptr_MiddleB = (int (**)(...))*__vtt_parm;
 *(int (***)(...))((char *)&this_obj->_vptr_MiddleB + *((unsigned int *)this_obj->_vptr_MiddleB - 3)) = (int (**)(...))__vtt_parm[1];
}


/* Function: _ZN7MiddleBD2Ev @ 0x2E16 */
void MiddleB_destructor(MiddleB *const this_obj, const void **const __vtt_parm)
{
 this_obj->_vptr_MiddleB = (int (**)(...))*__vtt_parm;
 *(int (***)(...))((char *)&this_obj->_vptr_MiddleB + *((unsigned int *)this_obj->_vptr_MiddleB - 3)) = (int (**)(...))__vtt_parm[1];
}


/* Function: _ZN14DiamondDerivedC1Ev @ 0x2E4E */
void DiamondDerived_Constructor(DiamondDerived *const this_obj)
{
 VirtualBase_Constructor((VirtualBase *const)&this_obj->MiddleB);
 MiddleA_Constructor(this_obj, (const void **const)off_8CA0);
 MiddleB_Constructor((MiddleB *const)(&this_obj->dataA + 1), (const void **const)off_8CA8);
 this_obj->_vptr_MiddleA = (int (**)(...))&off_8C5C;
 this_obj->_vptr_MiddleB = (int (**)(...))&off_8C90;
 *(&this_obj->dataA + 1) = (int)&off_8C74;
}


/* Function: _ZN5PointC2Eii @ 0x2ED0 */
void Point_Constructor(Point *const _this, int _x, int _y)
{
 _this->x = _x;
 _this->y = _y;
}


/* Function: _ZNK5PointplERKS_ @ 0x2EF6 */
void Point_operator_plus(Point *retstr, const Point *const this_obj, const Point *other)
{
 Point_Constructor(retstr, this_obj->x + other->x, other->y + this_obj->y);
}


/* Function: _ZNK5PointeqERKS_ @ 0x2F3C */
bool Point_operator_eq(const Point *const this_obj, const Point *other)
{
 return this_obj->x == other->x && this_obj->y == other->y;
}


/* Function: _ZN5PointppEv @ 0x2F7A */
Point * Point_operator_increment(Point *const this_obj)
{
 ++this_obj->x;
 ++this_obj->y;
 return this_obj;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x2FAC */
int template_max_int(int a, int b)
{
 if ( a <= b )
 return b;
 else
 return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x2FCF */
double template_max_double(double a, double b)
{
 if ( a <= (long double)b )
 return b;
 else
 return a;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x3011 */
void template_swap_int(int *a, int *b)
{
 int temp; // [esp+Ch] [ebp-4h]

 temp = *a;
 *a = *b;
 *b = temp;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x3042 */
void Container_int__ctor(Container_int *const this_obj)
{
 this_obj->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x3060 */
void Container_int__push(Container_int *const this_obj, int value)
{
 int size; // eax

 if ( this_obj->size <= 9 )
 {
 size = this_obj->size;
 this_obj->size = size + 1;
 this_obj->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x309C */
int Container_int__get(const Container_int *const this_obj, int idx)
{
 if ( idx < 0 || idx >= this_obj->size )
 return 0;
 else
 return this_obj->data[idx];
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x30D0 */
int Container_int__getSize(const Container_int *const this_obj)
{
 return this_obj->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x30EA */
void Container_double__ctor(Container_double *const this_obj)
{
 this_obj->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x3108 */
void Container_double__push(Container_double *const this_obj, double value)
{
 int size; // eax

 if ( this_obj->size <= 9 )
 {
 size = this_obj->size;
 this_obj->size = size + 1;
 this_obj->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x314E */
double Container_double__get(const Container_double *const this_obj, int idx)
{
 if ( idx < 0 || idx >= this_obj->size )
 return 0.0;
 else
 return this_obj->data[idx];
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x3180 */
int Container_double__getSize(const Container_double *const this_obj)
{
 return this_obj->size;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ @ 0x319A */
void std___uniq_ptr_data_int_deleter_true_true_ctor(
 void *this_obj,
 void *a2)
{
 std___uniq_ptr_impl_int_deleter_ctor(this_obj, a2);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_ @ 0x31C4 */
void std_unique_ptr_int_unique_ptr_move(void *this_obj, void *a2)
{
 std___uniq_ptr_data_int_deleter_true_true_ctor(this_obj, a2);
}


/* Function: _ZNK8RTTIBase7getTypeEv @ 0x31EE */
int RTTIBase_getType(const RTTIBase *const this_obj)
{
 return 0;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x3206 */
int RTTIDerivedA_getType(const RTTIDerivedA *const this_obj)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedA13derivedA_dataEv @ 0x321E */
int RTTIDerivedA_derivedA_data(const RTTIDerivedA *const this_obj)
{
 return 100;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x3236 */
int RTTIDerivedB_getType(const RTTIDerivedB *const this_obj)
{
 return 2;
}


/* Function: _ZNK12RTTIDerivedB13derivedB_dataEv @ 0x324E */
int RTTIDerivedB_derivedB_data(const RTTIDerivedB *const this_obj)
{
 return 200;
}


/* Function: _ZN8RTTIBaseC2Ev @ 0x3266 */
void RTTIBase_Constructor(RTTIBase *const _this)
{
 _this->_vptr_RTTIBase = (int (**)(...))off_8C44;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x3286 */
void RTTIBase_destructor(RTTIBase *const _this)
{
 _this->_vptr_RTTIBase = (int (**)(...))off_8C44;
}


/* Function: _ZN8RTTIBaseD0Ev @ 0x32A6 */
void RTTIBase_deleting_destructor(RTTIBase *const this_obj)
{
 RTTIBase_destructor(this_obj);
 operator delete(this_obj, 4u);
}


/* Function: _ZN12RTTIDerivedAC2Ev @ 0x32E0 */
void RTTIDerivedA_Constructor(RTTIDerivedA *const this_obj)
{
 RTTIBase_Constructor(this_obj);
 this_obj->_vptr_RTTIBase = (int (**)(...))off_8C30;
}


/* Function: _ZN12RTTIDerivedBC2Ev @ 0x3316 */
void RTTIDerivedB_Constructor(RTTIDerivedB *const this_obj)
{
 RTTIBase_Constructor(this_obj);
 this_obj->_vptr_RTTIBase = (int (**)(...))off_8C1C;
}


/* Additional vtable offset declarations */
extern void *off_8C30;
extern void *off_8C1C;
extern void *off_8CA0;
extern void *off_8CA8;
extern void *off_8C5C;
extern void *off_8C90;
extern void *off_8C74;
extern void *off_8D3C;
extern void *off_8D54;
extern void *off_8D68;
extern void *off_8C44;
extern void *off_8D28;

/* Missing function declarations */
int ** std___uniq_ptr_impl_int__M_ptr(void *this_obj);
int ** std___uniq_ptr_impl_int_array__M_ptr(void *this_obj);
const int * std___uniq_ptr_impl_int__M_ptr_const(const void *this_obj);
const int * std___uniq_ptr_impl_int_array__M_ptr_const(const void *this_obj);
void MultiDerived_Constructor(MultiDerived *const this_obj);
void DiamondDerived_Constructor(DiamondDerived *const this_obj);
void DiamondDerived_Destructor(DiamondDerived *const this_obj);


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi @ 0x334C */
void ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(
 void *this_obj,
 int *__p)
{
 std___uniq_ptr_impl_int_deleter_ctor_from_ptr(this_obj, __p);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi @ 0x3376 */
void std_unique_ptr_int_ctor(
 void *this_obj,
 int *__p)
{
 ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(this_obj, __p);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x33A0 */
void std_unique_ptr_int_destructor(void *this_obj)
{
 std_default_delete_int *deleter; // ebx
 int **v2; // eax
 int **__ptr; // [esp+Ch] [ebp-Ch]

 __ptr = std___uniq_ptr_impl_int__M_ptr(this_obj);
 if ( *__ptr )
 {
 deleter = std_unique_ptr_int_get_deleter(this_obj);
 v2 = std_move_int_ptr(__ptr);
 std_default_delete_int_operator(deleter, *v2);
 }
 *__ptr = 0;
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv @ 0x340C */
int * std_unique_ptr_int_deref(
 const void *_this)
{
 return std_unique_ptr_int_get(_this);
}


/* Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ @ 0x3437 */
std_remove_reference_std_unique_ptr_int_ref_type * std_move_unique_ptr_int(
 std_remove_reference_std_unique_ptr_int_ref_type *__t)
{
 return __t;
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2EOS3_ @ 0x344E */
void std_Tuple_impl_0_int_deleter_move_ctor(
 void *this_obj,
 void *a2)
{
 std_Tuple_impl_1_deleter_move_ctor(this_obj, a2);
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_ @ 0x3480 */
void std_tuple_int_deleter_move_ctor(
 void *this_obj,
 void *a2)
{
 std_Tuple_impl_0_int_deleter_move_ctor(this_obj, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_ @ 0x34AA */
void std___uniq_ptr_impl_int_deleter_ctor(
 void *this_obj,
 void *__u)
{
 std_tuple_int_deleter_move_ctor(this_obj, __u);
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi @ 0x34F8 */
void ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(
 void *this_obj,
 int *__p)
{
 std___uniq_ptr_impl_int_array_ctor_from_ptr(this_obj, __p);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ @ 0x3522 */
void std_unique_ptr_int_array_ctor(
 void *this_obj,
 int *__p)
{
 ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(this_obj, __p);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x354C */
void std_unique_ptr_int_array_destructor(void *this_obj)
{
 std_default_delete_int_array *deleter; // eax
 int **__ptr; // [esp+Ch] [ebp-Ch]

 __ptr = std___uniq_ptr_impl_int_array__M_ptr(this_obj);
 if ( *__ptr )
 {
 deleter = std_unique_ptr_int_array_get_deleter(this_obj);
 std_default_delete_int_array_operator_int(deleter, *__ptr);
 }
 *__ptr = 0;
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEj @ 0x35A8 */
int * std_unique_ptr_int_array_index(
 const void *_this,
 size_t __i)
{
 return &std_unique_ptr_int_array_get(_this)[__i];
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi @ 0x35DE */
void std___uniq_ptr_impl_int_deleter_ctor_from_ptr(
 void *this_obj,
 int *__p)
{
 std_tuple_int_deleter_ctor(this_obj);
 *std___uniq_ptr_impl_int__M_ptr(this_obj) = __p;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x361C */
int ** std___uniq_ptr_impl_int__M_ptr(
 void *_this_obj)
{
 return std_get_0_int_deleter_int_ptr(_this_obj);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv @ 0x3642 */
std_default_delete_int * std_unique_ptr_int_get_deleter(
 void *this_obj)
{
 return std___uniq_ptr_impl_int__M_deleter(this_obj);
}


/* Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ @ 0x3667 */
int ** std_move_int_ptr(int **__t)
{
 return __t;
}


/* Function: _ZNKSt14default_deleteIiEclEPi @ 0x367E */
void std_default_delete_int_operator(
 const std_default_delete_int *const _this,
 int *__ptr)
{
 if ( __ptr )
 operator delete(__ptr, 4u);
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv @ 0x36B2 */
const int * std_unique_ptr_int_get(
 const void *this_obj)
{
 return std___uniq_ptr_impl_int__M_ptr_const(this_obj);
}

/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE3getEv - non-const version */
int * std_unique_ptr_int_get_non_const(void *this_obj)
{
 return std___uniq_ptr_impl_int__M_ptr_const_non_cast(this_obj);
}


/* Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ @ 0x36D7 */
void * std_move_tuple_int_deleter(
 void *__t)
{
 return __t;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2EOS2_ @ 0x36EE */
void std_Tuple_impl_1_deleter_move_ctor(
 void *_this,
 void *__in)
{
 ;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi @ 0x3702 */
void std___uniq_ptr_impl_int_array_ctor_from_ptr(
 void *this_obj,
 int *__p)
{
 std_tuple_int_deleter_array_ctor(this_obj);
 *std___uniq_ptr_impl_int_array__M_ptr(this_obj) = __p;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x3740 */
int ** std___uniq_ptr_impl_int_array__M_ptr(
 void *_this_obj)
{
 return std_get_0_int_deleter_array_int_ptr(_this_obj);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv @ 0x3766 */
std_default_delete_int_array * std_unique_ptr_int_array_get_deleter(
 void *this_obj)
{
 return std___uniq_ptr_impl_int_array__M_deleter(this_obj);
}


/* Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsrSt14is_convertibleIPA_T_PS0_E5valueEvE4typeEPS5_ @ 0x378C */
void std_default_delete_int_array_operator_int(
 const std_default_delete_int_array *const _this,
 int *__ptr)
{
 if ( __ptr )
 operator delete[](__ptr);
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv @ 0x37BE */
const int * std_unique_ptr_int_array_get(
 const void *this_obj)
{
 return std___uniq_ptr_impl_int_array__M_ptr_const(this_obj);
}

/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv - non-const version */
int * std_unique_ptr_int_array_get_non_const(void *this_obj)
{
 return std___uniq_ptr_impl_int_array__M_ptr_const_non_cast(this_obj);
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv @ 0x37E4 */
void std_tuple_int_deleter_ctor(
 void *this_obj)
{
 std_Tuple_impl_0_int_deleter_ctor(this_obj);
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x380A */
std___tuple_element_t std_get_0_int_deleter(
 void *__t)
{
 return std___get_helper_0_int_deleter(__t);
}

/* Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ - int** version */
int ** std_get_0_int_deleter_int_ptr(void *__t)
{
 return std___get_helper_0_int_deleter_int_ptr(__t);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv @ 0x3830 */
std_default_delete_int * std___uniq_ptr_impl_int__M_deleter(
 void *this_obj)
{
 std_default_delete_int *result = std_get_1_int_deleter(this_obj);
 return result;
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x3856 */
const int * std___uniq_ptr_impl_int__M_ptr_const(
 const void *this_obj)
{
 return std_Head_base_0_int_false_M_head_const(std_get_0_int_deleter_const(this_obj));
}

int * std___uniq_ptr_impl_int__M_ptr_const_non_cast(const void *this_obj)
{
 return (int *)std___uniq_ptr_impl_int__M_ptr_const(this_obj);
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv @ 0x387E */
void std_tuple_int_deleter_array_ctor(
 void *this_obj)
{
 std_Tuple_impl_0_int_deleter_array_ctor(this_obj);
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x38A4 */
std___tuple_element_t std_get_0_int_deleter_array(
 void *__t)
{
 return std___get_helper_0_int_deleter_array(__t);
}

/* Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ - int** version */
int ** std_get_0_int_deleter_array_int_ptr(void *__t)
{
 return std___get_helper_0_int_deleter_array_int_ptr(__t);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv @ 0x38CA */
std_default_delete_int_array * std___uniq_ptr_impl_int_array__M_deleter(
 void *this_obj)
{
 std_default_delete_int_array *result = std_get_1_int_deleter_array(this_obj);
 return result;
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x38F0 */
const int * std___uniq_ptr_impl_int_array__M_ptr_const(
 const void *this_obj)
{
 return std_Head_base_0_int_false_M_head_const(std_get_0_int_deleter_array_const(this_obj));
}

int * std___uniq_ptr_impl_int_array__M_ptr_const_non_cast(const void *this_obj)
{
 return (int *)std___uniq_ptr_impl_int_array__M_ptr_const(this_obj);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2Ev @ 0x3918 */
void std_Tuple_impl_0_int_deleter_ctor(
 void *this_obj)
{
 std_Tuple_impl_1_deleter_ctor(this_obj);
 std_Head_base_0_int_false_ctor(this_obj);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x394C */
int * std___get_helper_0_int_deleter(
 void *__t)
{
 return std_Tuple_impl_0_int_deleter_M_head(__t);
}

/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERTPi - int** version */
int ** std___get_helper_0_int_deleter_int_ptr(void *__t)
{
 return std_Tuple_impl_0_int_deleter_M_head_int_ptr(__t);
}


/* Function: _ZSt3getILj1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x3970 */
std_default_delete_int * std_get_1_int_deleter(
 void *__t)
{
 return std___get_helper_1_int_deleter(__t);
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ @ 0x3994 */
const int * std_get_0_int_deleter_const(
 const void *__t)
{
 return std___get_helper_0_int_deleter_const(__t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEEC2Ev @ 0x39BA */
void std_Tuple_impl_0_int_deleter_array_ctor(
 void *this_obj)
{
 std_Tuple_impl_1_deleter_array_ctor(this_obj);
 std_Head_base_0_int_false_ctor(this_obj);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x39EE */
int * std___get_helper_0_int_deleter_array(
 void *__t)
{
 return std_Tuple_impl_0_int_deleter_array_M_head(__t);
}

/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERTPi - int** version */
int ** std___get_helper_0_int_deleter_array_int_ptr(void *__t)
{
 return std_Tuple_impl_0_int_deleter_array_M_head_int_ptr(__t);
}


/* Function: _ZSt3getILj1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x3A12 */
std_default_delete_int_array * std_get_1_int_deleter_array(
 void *__t)
{
 return std___get_helper_1_int_deleter_array(__t);
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ @ 0x3A36 */
const int * std_get_0_int_deleter_array_const(
 const void *__t)
{
 return std___get_helper_0_int_deleter_array_const(__t);
}


/* Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE @ 0x3A5B */
int ** std_forward_int_ptr(int **__t)
{
 return __t;
}

/* Function: _ZSt7forwardIiEOT_RNSt16remove_referenceIS0_E4typeE @ 0x3A60 */
int * std_forward_int(int *__t)
{
 return __t;
}

/* Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERKS1_ @ 0x3CD7 */
const int * std_Head_base_0_int_false_M_head_const(const void *this_obj)
{
 const std_head_base_int *base = (const std_head_base_int *)this_obj;
 return (const int *)&base->_M_head_impl;
}

/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERKS3_ @ 0x3C2E */
const int * std_Tuple_impl_0_int_deleter_M_head_const(const void *_this)
{
 const std_head_base_int *base = (const std_head_base_int *)_this;
 return (const int *)&base->_M_head_impl;
}

/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ @ 0x3C8C */
const int * std_Tuple_impl_0_int_deleter_array_M_head_const(const void *_this)
{
 const std_head_base_int *base = (const std_head_base_int *)_this;
 return (const int *)&base->_M_head_impl;
}

/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2Ev @ 0x3A72 */
void std_Tuple_impl_1_deleter_ctor(
 void *this_obj)
{
 std_Head_base_1_deleter_true_ctor(this_obj);
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EEC2Ev @ 0x3A98 */
void std_Head_base_0_int_false_ctor(
 void *this_obj)
{
 std_head_base_int *base = (std_head_base_int *)this_obj;
 base->_M_head_impl = 0;
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERS3_ @ 0x3AB5 */
int * std_Tuple_impl_0_int_deleter_M_head(
 void *__t)
{
 std_head_base_int *base = (std_head_base_int *)__t;
 return (int *)base->_M_head_impl;
}

/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERPiS3_ - int** version */
int ** std_Tuple_impl_0_int_deleter_M_head_int_ptr(void *__t)
{
 return std_Head_base_0_int_false_M_head_int_ptr(__t);
}


/* Function: _ZSt12__get_helperILj1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x3ADA */
std_default_delete_int * std___get_helper_1_int_deleter(
 void *__t)
{
 return std_Tuple_impl_1_deleter_M_head(__t);
}

/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x3AFE */
const int * std___get_helper_0_int_deleter_const(
 const void *__t)
{
 return std_Tuple_impl_0_int_deleter_M_head_const(__t);
}

/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEEC2Ev @ 0x3B22 */
void std_Tuple_impl_1_deleter_array_ctor(
	void *_this_obj)
{
 std_Head_base_1_deleter_array_true_ctor(this_obj);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ @ 0x3B47 */
int * std_Tuple_impl_0_int_deleter_array_M_head(
 void *__t)
{
 std_head_base_int *base = (std_head_base_int *)__t;
 return (int *)base->_M_head_impl;
}

/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ - int** version */
int ** std_Tuple_impl_0_int_deleter_array_M_head_int_ptr(void *__t)
{
 return std_Head_base_0_int_false_M_head_int_ptr(__t);
}


/* Function: _ZSt12__get_helperILj1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x3B6C */
std_default_delete_int_array * std___get_helper_1_int_deleter_array(
 void *__t)
{
 return std_Tuple_impl_1_deleter_array_M_head(__t);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x3B90 */
const int * std___get_helper_0_int_deleter_array_const(
 const void *__t)
{
 return std_Tuple_impl_0_int_deleter_array_M_head_const(__t);
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EEC2IRS0_EEOT_ @ 0x3BB4 */
void std_Head_base_int_ctor(
 void *this_obj, int **__h)
{
 std_head_base_int *base = (std_head_base_int *)this_obj;
 base->_M_head_impl = *__h;
}

/* Function: _ZNSt10_Head_baseILj0EPiLb0EEC2Ev @ 0x3A98 */
void std_Head_base_0_int_false_ctor(
 void *this_obj)
{
 std_head_base_int *base = (std_head_base_int *)this_obj;
 base->_M_head_impl = 0;
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EEC2Ev @ 0x3BE0 */
void std_Head_base_1_deleter_true_ctor(
 void *this_obj)
{
 ;
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERS1_ @ 0x3BF4 */
int * std_Head_base_0_int_false_M_head(void *this_obj)
{
 std_head_base_int *base = (std_head_base_int *)this_obj;
 return (int *)base->_M_head_impl;
}

/* Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERS1_ @ 0x3BF4 duplicate for int** version */
int ** std_Head_base_0_int_false_M_head_int_ptr(void *this_obj)
{
 std_head_base_int *base = (std_head_base_int *)this_obj;
 return (int **)base->_M_head_impl;
}

/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEE7_M_headERS2_ @ 0x3C0A */
std_default_delete_int * std_Tuple_impl_1_deleter_M_head(void *base_obj)
{
 std_head_base_deleter *base = (std_head_base_deleter *)base_obj;
 return (std_default_delete_int *)&base->_M_head_impl;
}

/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERKS3_ @ 0x3C2E */
const int * std_Tuple_impl_0_int_deleter_M_head_const(
 const void *__t)
{
 return std_Head_base_0_int_false_M_head_const(__t);
}

/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EEC2Ev @ 0x3C54 */
void std_Head_base_1_deleter_array_true_ctor(
 void *this_obj)
{
 ;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEE7_M_headERS3_ @ 0x3C68 */
std_default_delete_int_array * std_Tuple_impl_1_deleter_array_M_head(void *this_obj)
{
 return std_Head_base_1_deleter_array_true_M_head(this_obj);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ @ 0x3C8C */
const int * std_Tuple_impl_0_int_deleter_array_M_head_const(
 const void *__t)
{
 return std_Head_base_0_int_false_M_head_const(__t);
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EE7_M_headERS2_ @ 0x3CB1 */
std_default_delete_int * std_Head_base_1_deleter_true_M_head(
 void *this_obj)
{
 std_head_base_deleter *base = (std_head_base_deleter *)this_obj;
 return (std_default_delete_int *)&base->_M_head_impl;
}





/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EE7_M_headERS3_ @ 0x3CDD */
std_default_delete_int_array * std_Head_base_1_deleter_array_true_M_head(
 void *this_obj)
{
 std_head_base_deleter_array *base = (std_head_base_deleter_array *)this_obj;
 return (std_default_delete_int_array *)&base->_M_head_impl;
}



{
 const std_head_base_int *base = (const std_head_base_int *)this_obj;
 return (const int *)base->_M_head_impl;
}




/* Function: _ZN12RTTIDerivedBD2Ev @ 0x3CF4 */
void RTTIDerivedB_destructor(RTTIDerivedB *const _this)
{
 _this->_vptr_RTTIBase = (int (**)(...))off_8C1C;
 RTTIBase_destructor(_this);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x3D26 */
void RTTIDerivedB_deleting_destructor(RTTIDerivedB *const _this)
{
 RTTIDerivedB_destructor(_this);
 operator delete(_this, 4u);
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x3D60 */
void RTTIDerivedA_destructor(RTTIDerivedA *const _this)
{
 _this->_vptr_RTTIBase = (int (**)(...))off_8C30;
 RTTIBase_destructor(_this);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x3D92 */
void RTTIDerivedA_deleting_destructor(RTTIDerivedA *const _this)
{
 RTTIDerivedA_destructor(_this);
 operator delete(_this, 4u);
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x3DCC */
void DiamondDerived_destructor(DiamondDerived *const _this)
{
 _this->_vptr_MiddleA = (int (**)(...))&off_8C5C;
 _this->_vptr_MiddleB = (int (**)(...))&off_8C90;
 *(&_this->dataA + 1) = (int)&off_8C74;
 MiddleB_destructor((MiddleB *const)(&_this->dataA + 1), (const void **const)off_8CA8);
 MiddleA_destructor(_this, (const void **const)off_8CA0);
 VirtualBase_destructor((VirtualBase *const)&_this->MiddleB);
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x3E4E */
void non_virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *_this)
{
 DiamondDerived_destructor((DiamondDerived *)((char *)_this - 8));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x3E5C */
void virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *_this)
{
 DiamondDerived_destructor((DiamondDerived *)((char *)_this + *((unsigned int *)_this->_vptr_MiddleA - 4)));
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x3E72 */
void DiamondDerived_deleting_destructor(DiamondDerived *const _this)
{
 DiamondDerived_destructor(_this);
 operator delete(_this, 0x18u);
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x3EAB */
void non_virtual_thunk_to_DiamondDerived_deleting_destructor(DiamondDerived *_this)
{
 DiamondDerived_deleting_destructor((DiamondDerived *)((char *)_this - 8));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x3EB6 */
void virtual_thunk_to_DiamondDerived_deleting_destructor(DiamondDerived *_this)
{
 DiamondDerived_deleting_destructor((DiamondDerived *)((char *)_this + *((unsigned int *)_this->_vptr_MiddleA - 4)));
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x3ECA */
void MultiDerived_destructor(MultiDerived *const _this)
{
 _this->_vptr_BaseA = (int (**)(...))&off_8D3C;
 _this->_vptr_BaseB = (int (**)(...))&off_8D54;
 BaseB_destructor(&_this->baseB_obj);
 BaseA_destructor(_this);
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x3F19 */
void non_virtual_thunk_to_MultiDerived_destructor(MultiDerived *_this)
{
 MultiDerived_destructor((MultiDerived *)((char *)_this - 8));
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x3F24 */
void MultiDerived_deleting_destructor(MultiDerived *const _this)
{
 MultiDerived_destructor(_this);
 operator delete(_this, 0x10u);
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x3F5D */
void non_virtual_thunk_to_MultiDerived_deleting_destructor(MultiDerived *_this)
{
 MultiDerived_deleting_destructor((MultiDerived *)((char *)_this - 8));
}


/* Function: _ZN7DerivedD2Ev @ 0x3F68 */
void Derived_destructor(Derived *const _this)
{
 _this->_vptr_Base = (int (**)(...))&off_8D90;
 Base_destructor(_this);
}


/* Function: _ZN7DerivedD0Ev @ 0x3F9A */
void Derived_deleting_destructor(Derived *const _this)
{
 Derived_destructor(_this);
 operator delete(_this, 8u);
}


/* Function: __x86.get_pc_thunk.ax @ 0x3FD3 */
void *_x86_get_pc_thunk_ax()
{
 _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]

 return retaddr;
}


/* Function: __x86.get_pc_thunk.si @ 0x3FD7 */
void _x86_get_pc_thunk_si()
{
 ;
}


/* Function: __stack_chk_fail_local @ 0x3FE0 */
void _stack_chk_fail_local()
{
 __asm { add ebx, (offset _GLOBAL_OFFSET_TABLE_ - $) }
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x404C */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: _Znwj @ 0x9030 */

/* FAILED to decompile: __cxa_finalize @ 0x9034 */

/* FAILED to decompile: __cxa_begin_catch @ 0x9038 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x903C */

/* FAILED to decompile: strlen @ 0x9040 */

/* FAILED to decompile: __cxa_atexit @ 0x9044 */

/* FAILED to decompile: _ZdlPvj @ 0x9048 */

/* FAILED to decompile: strcmp @ 0x9050 */

/* FAILED to decompile: __libc_start_main @ 0x9054 */

/* FAILED to decompile: _Znaj @ 0x9058 */

/* FAILED to decompile: strncpy @ 0x905C */

/* FAILED to decompile: __cxa_bad_typeid @ 0x9060 */

/* FAILED to decompile: __stack_chk_fail @ 0x9064 */

/* FAILED to decompile: __dynamic_cast @ 0x9068 */

/* FAILED to decompile: _ZdaPv @ 0x906C */

/* FAILED to decompile: __cxa_throw_bad_array_new_length @ 0x9074 */

/* FAILED to decompile: printf @ 0x9078 */

/* FAILED to decompile: __cxa_rethrow @ 0x907C */

/* FAILED to decompile: puts @ 0x9080 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x9084 */

/* FAILED to decompile: __cxa_end_catch @ 0x9088 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x908C */

/* FAILED to decompile: __cxa_throw @ 0x9090 */

/* FAILED to decompile: _Unwind_Resume @ 0x9098 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x909C */

/* Total functions decompiled: 235, failed: 25 */
