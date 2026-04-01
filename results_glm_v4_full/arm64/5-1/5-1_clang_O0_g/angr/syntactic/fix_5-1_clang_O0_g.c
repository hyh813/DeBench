// Angr Decompilation of 5-1_clang_O0_g
// Platform: AARCH64


#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/* Forward declarations for C++ classes */
struct SimpleClass {
  SimpleClass(int, const char*);
  void setValue(int);
  int getValue();
  int compute(int);
  void getClassID();
};

/* C-style forward declarations for SimpleClass methods */
long long SimpleClass_SimpleClass(void *ptr, int arg0, const char *arg1);
long long SimpleClass_setValue(void *ptr, int arg0);
long long SimpleClass_getValue(void *ptr);
long long SimpleClass_compute(void *ptr, int arg0);
void SimpleClass_getClassID(void *ptr);

/* C-style forward declarations for LifecycleClass methods */
long long LifecycleClass_LifecycleClass(void *ptr, unsigned long arg0);
long long LifecycleClass_getData(void *ptr, unsigned long arg0);
long long LifecycleClass_getInstanceCount(void *ptr);
long long LifecycleClass_Destructor(void *ptr);

/* C-style forward declarations for Base/Derived methods */
long long Base_Base(void *ptr);
long long Base_virtual_func(void *ptr, int arg0);
void Base_getName(void *ptr);
long long Base_Destructor(void *ptr);

long long Derived_Derived(void *ptr, int arg0);
long long Derived_virtual_func(void *ptr, int arg0);
void Derived_getName(void *ptr);
long long Derived_Destructor(void *ptr);

/* C-style forward declarations for MultiDerived methods */
long long MultiDerived_MultiDerived(void *ptr);
void MultiDerived_funcA(void *ptr);
void MultiDerived_funcB(void *ptr);
long long MultiDerived_Destructor(void *ptr);

/* C-style forward declarations for MiddleA methods */
void MiddleA_func(void *ptr);
long long MiddleA_Destructor(void *ptr);

/* C-style forward declarations for MiddleB methods */
void MiddleB_func(void *ptr);
long long MiddleB_Destructor(void *ptr);

/* C-style forward declarations for DiamondDerived methods */
long long DiamondDerived_DiamondDerived(void *ptr);
void DiamondDerived_func(void *ptr);
long long DiamondDerived_Destructor(void *ptr);

/* C-style forward declarations for Point methods */
long long Point_Point(void *ptr, int arg0, int arg1);
long long Point_operator_plus(void *result, void *a, void *b);
long long Point_operator_equal(void *a, void *b);
long long Point_operator_increment(void *ptr);

/* C-style forward declarations for Container methods */
long long Container_int_Container(void *ptr);
void Container_int_push(void *ptr, int arg0);
long long Container_int_get(void *ptr, int arg0);
long long Container_int_getSize(void *ptr);

long long Container_double_Container(void *ptr);
long long Container_double_push(void *ptr);
long long Container_double_get(void *ptr, int arg0);
void Container_double_getSize(void *ptr);

/* Forward declarations for template functions */
int template_max_int(int arg_0, int arg_1);
double template_max_double(double arg_0, double arg_1);
long long template_swap_int(unsigned int *ptr, unsigned int *p);

/* Forward declarations for lambda functions */
long long test_cpp_lambda___dollar__1_operator(int arg_0);
long long _ZZ15test_cpp_lambdavENK3__dollar__0clIiiEEDaT_T0_(unsigned int arg_0, unsigned int arg_1);

/* Forward declarations for std library functions */
void std___uniq_ptr_data_int_default_delete_true_true___uniq_ptr_data(void *ptr, void *arg);
long long std___uniq_ptr_impl_int_default_delete___uniq_ptr_impl(void);
void std___uniq_ptr_impl_int_default_delete___uniq_ptr_impl_move(void *ptr, void *arg);
void std_default_delete_int_operator_paren(void *ptr, int *arg_0);
long long std___uniq_ptr_impl_int_array_default_delete___uniq_ptr_impl(void *ptr, int *arg_0);
long long std__Tuple_impl_0ul_int_ptr_array_default_delete___Tuple_impl(void *ptr);
long long std_move_int_ptr(void);
void std_forward_int_ptr(void);
long long std_unique_ptr_int_default_delete_unique_ptr_int_default_delete_void(char *ptr, void *addr);
long long std_unique_ptr_int_default_delete_operator_star(void *ptr);
long long std_move_std_unique_ptr_int_default_delete_ref(void);
long long std_unique_ptr_int_default_delete_unique_ptr_move(void *ptr);
long long std_unique_ptr_int_array_default_delete_unique_ptr_int_ptr_default_delete_void_bool(char *ptr, void *addr_ptr);
long long std_unique_ptr_int_array_default_delete_operator_index(void *ptr, unsigned long idx);
long long std_unique_ptr_int_default_delete_get(void *ptr);
void * std_unique_ptr_int_default_delete_get_deleter(void *ptr);
long long std_move_tuple_int_ptr_default_delete(void *a0, void *a1);
long long std_tuple_int_ptr_default_delete__tuple(void *a0, void *a1);
long long std___get_helper_1ul_default_delete(void *a0, void *a1);
void std__Tuple_impl_1ul_default_delete___M_head(void *a0, void *a1);
long long std__Head_base_1ul_default_delete_true__M_head(void *a0);
long long std__Tuple_impl_0ul_int_ptr_default_delete_const__M_head(void *a0);
long long std__Head_base_0ul_int_ptr_false_const__M_head(void *a0);
int * const std___get_helper_0ul_int_ptr_default_delete_const(void *a0, void *a1);
long long std_get_0ul_int_ptr_default_delete_const(void *a0, void *a1);
long long std__Tuple_impl_0ul_int_ptr_default_delete___M_head_const(void *a0, void *a1);
void * std__uniq_ptr_impl_int_default_delete___M_ptr(void *a0);
void * std__uniq_ptr_impl_int_default_delete___M_deleter(void *a0);
long long std__uniq_ptr_impl_int_default_delete___M_ptr_const(void *a0);
long long std_move_tuple_int_ptr_default_delete(void *a0, void *a1);
long long std_tuple_int_ptr_default_delete__tuple(void *a0, void *a1);
long long std___uniq_ptr_impl_int_default_delete___uniq_ptr_impl_move(void *a0, void *a1);

/* Forward declarations for std::tuple helper functions */
int ** std___get_helper_0ul_int_ptr_default_delete(void *a0, void *a1);
int * std__Head_base_0ul_int_ptr_false__M_head(void *a0);
void std__Tuple_impl_0ul_int_ptr_default_delete___M_head(void *a0, void *a1);
long long std__Tuple_impl_0ul_int_ptr_default_delete__Tuple_impl(void *a0, void *a1);
long long std_get_0ul_int_ptr_default_delete(void *a0, void *a1);
int * std_forward_int_ptr_ref(void *a0);
long long std__Tuple_impl_1ul_default_delete__Tuple_impl(void *a0);
long long std__Head_base_1ul_default_delete_true__Head_base(void *a0, void *a1);
long long std_get_1ul_int_ptr_default_delete(void *a0);
void * std___get_helper_1ul_default_delete(void *a0, void *a1);
void std__Tuple_impl_1ul_default_delete___M_head(void *a0, void *a1);
long long std__Head_base_1ul_default_delete_true__M_head(void *a0);
long long std__Tuple_impl_0ul_int_ptr_default_delete_const__M_head(void *a0);
long long std__Head_base_0ul_int_ptr_false_const__M_head(void *a0);
int * const std___get_helper_0ul_int_ptr_default_delete_const(void *a0, void *a1);
long long std_get_0ul_int_ptr_default_delete_const(void *a0, void *a1);
long long std__Tuple_impl_0ul_int_ptr_default_delete___M_head_const(void *a0, void *a1);
void * std__uniq_ptr_impl_int_default_delete___M_ptr(void *a0);
void * std__uniq_ptr_impl_int_default_delete___M_deleter(void *a0);
long long std_move_tuple_int_ptr_default_delete(void *a0, void *a1);
long long std_tuple_int_ptr_default_delete__tuple(void *a0, void *a1);
long long std__uniq_ptr_impl_int_default_delete___uniq_ptr_impl_move(void *a0, void *a1);
long long std_unique_ptr_int_default_delete_get(void *a0);
void * std_unique_ptr_int_default_delete_get_deleter(void *a0);
long long std_tuple_int_ptr_default_delete_tuple_true_true(void *a0);
long long std__Tuple_impl_0ul_int_ptr_default_delete___Tuple_impl(void *a0);
long long std__Tuple_impl_1ul_default_delete___Tuple_impl(void *a0);
long long std__Head_base_0ul_int_ptr_false___Head_base(void *a0);
long long std__Head_base_1ul_default_delete_true___Head_base(void *a0);

/* Forward declarations for test_cpp_smart_ptr tuple functions */
long long std__Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr__dollar__2___Tuple_impl(void *a0, void *a1, void *a2);
long long std__Tuple_impl_1ul_test_cpp_smart_ptr__dollar__2__Tuple_impl(void *a0, void *a1);
long long std__Tuple_impl_1ul_test_cpp_smart_ptr__dollar__2__Tuple_impl(void *a0, void *a1);
long long std__Head_base_0ul_int_ptr_false__Head_base(void *a0, void *a1);
long long std__Head_base_1ul_test_cpp_smart_ptr__dollar__2__Head_base(void *a0, void *a1);
long long std_get_0ul_int_ptr_test_cpp_smart_ptr__dollar__2(void *a0);
long long std_get_1ul_int_ptr_test_cpp_smart_ptr__dollar__2(void *a0);
long long std___get_helper_0ul_int_ptr_test_cpp_smart_ptr__dollar__2(void *a0);
long long std___get_helper_1ul_test_cpp_smart_ptr__dollar__2(void *a0);
long long std__Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr__dollar__2___M_head(void *a0);
long long std__Tuple_impl_1ul_test_cpp_smart_ptr__dollar__2___M_head(void *a0);
long long std__Head_base_0ul_int_ptr_false__M_head(void *a0);
long long std__Head_base_1ul_test_cpp_smart_ptr__dollar__2_true___M_head(void *a0);
long long std_get_0ul_int_ptr_test_cpp_smart_ptr__dollar__2_const(void *a0);
long long std___get_helper_0ul_int_ptr_test_cpp_smart_ptr__dollar__2_const(void *a0);
long long std__Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr__dollar__2___M_head_const(void *a0);
long long std___uniq_ptr_impl_int_test_cpp_smart_ptr__dollar__2__M_deleter(void *a0);
long long std___uniq_ptr_impl_int_test_cpp_smart_ptr__dollar__2__M_ptr_const(void *a0);

/* Forward declarations for additional std library functions */
long long std_unique_ptr_int_array_default_delete_get_deleter(void *ptr);
long long std___uniq_ptr_data_int_test_cpp_smart_ptr_v_3__dollar__2_true_false___uniq_ptr_data(void *ptr, void *arg);
long long std_unique_ptr_int_test_cpp_smart_ptr_v_3__dollar__2_get(void *ptr);
long long std_unique_ptr_int_test_cpp_smart_ptr_v_3__dollar__2_get_deleter(void *ptr);
long long std_unique_ptr_int_test_cpp_smart_ptr_v_3__dollar__2_Destructor(void *ptr);
long long std_unique_ptr_int_test_cpp_smart_ptr_v_3__dollar__2_unique_ptr(void *ptr, void *arg);
long long std_unique_ptr_int_test_cpp_smart_ptr_v_3__dollar__2_operator_star(void *ptr);
long long std___uniq_ptr_impl_int_test_cpp_smart_ptr_v_3__dollar__2__M_ptr(void *ptr);
long long std___uniq_ptr_impl_int_test_cpp_smart_ptr_v_3__dollar__2__M_deleter(void *ptr);
long long std___uniq_ptr_impl_int_test_cpp_smart_ptr_v_3__dollar__2___M_ptr_const(void *ptr);
unsigned long long std_unique_ptr_int_test_cpp_smart_ptr_v_3__dollar__2_get_const(unsigned long long a0);
long long std___uniq_ptr_impl_int_test_cpp_smart_ptr__dollar__2___uniq_ptr_impl(unsigned long long a0, unsigned long long a1, unsigned long long a2);
void __clang_call_terminate(void);
long long test_cpp_smart_ptr(void *ptr, void *arg1, void *arg2);
long long test_cpp_smart_ptr___dollar__2_operator(unsigned long long a0, unsigned int *ptr);

/* Forward declarations for std library array functions */
long long std___uniq_ptr_impl_int_array_default_delete___M_ptr(void *a0);
long long std___uniq_ptr_impl_int_array_default_delete___M_ptr_const(void *a0);
long long std___uniq_ptr_impl_int_array_default_delete___M_deleter(void *a0);
long long std___get_helper_0ul_int_ptr_array_default_delete(void *a0);
long long std___get_helper_0ul_int_ptr_array_default_delete_const(void *a0);
long long std__Tuple_impl_0ul_int_ptr_array_default_delete___M_head(void *a0);
long long std__Tuple_impl_0ul_int_ptr_array_default_delete___M_head_const(void *a0);
long long std_get_1ul_int_ptr_array_default_delete(void *a0);
long long std___get_helper_1ul_default_delete_array(void *a0);

/* Forward declaration for std::type_info */
struct std_type_info {
  const char* name;
};

/* Forward declaration for type_info comparison function */
int std_type_info_operator_equal(const struct std_type_info* a, const struct std_type_info* b);

/* C-style forward declarations for RTTI methods */
long long RTTIBase_RTTIBase(void *ptr);
void RTTIBase_getType(void *ptr);
long long RTTIBase_Destructor(void *ptr);

long long RTTIDerivedA_RTTIDerivedA(void *ptr);
void RTTIDerivedA_getType(void *ptr);
long long RTTIDerivedA_derivedA_data(void *ptr);
long long RTTIDerivedA_Destructor(void *ptr);

long long RTTIDerivedB_RTTIDerivedB(void *ptr);
void RTTIDerivedB_getType(void *ptr);
long long RTTIDerivedB_derivedB_data(void *ptr);
long long RTTIDerivedB_Destructor(void *ptr);
long long RTTIDerivedA_derivedA_data(void *ptr);

struct LifecycleClass {
  LifecycleClass(unsigned long);
  int getData(unsigned long);
  void getInstanceCount();
  ~LifecycleClass();
};

struct Base {
  Base();
  virtual int virtual_func(int);
  void getName();
  virtual ~Base();
};

struct Derived : Base {
  Derived(int);
  int virtual_func(int);
  void getName();
  ~Derived();
};

struct BaseA {
  BaseA();
  void funcA();
  ~BaseA();
};

struct BaseB {
  BaseB();
  void funcB();
  ~BaseB();
};

struct MultiDerived : BaseA, BaseB {
  MultiDerived();
  void funcA();
  void funcB();
  ~MultiDerived();
};

struct VirtualBase {
  VirtualBase();
  void func();
  ~VirtualBase();
};

struct MiddleA : virtual VirtualBase {
  MiddleA();
  void func();
  ~MiddleA();
};

struct MiddleB : virtual VirtualBase {
  MiddleB();
  void func();
  ~MiddleB();
};

struct DiamondDerived : MiddleA, MiddleB {
  DiamondDerived();
  void func();
  ~DiamondDerived();
};

struct Point {
  Point(int, int);
  Point operator+(Point const&);
  int operator==(Point const&);
  Point operator++();
};

template<typename T> struct Container {
  Container();
  void push(T);
  T get(int);
  int getSize();
};

struct RTTIBase {
  RTTIBase();
  void getType();
  ~RTTIBase();
};

struct RTTIDerivedA : RTTIBase {
  RTTIDerivedA();
  void getType();
  int derivedA_data();
  ~RTTIDerivedA();
};

struct RTTIDerivedB : RTTIBase {
  RTTIDerivedB();
  void getType();
  int derivedB_data();
  ~RTTIDerivedB();
};



/* CRT stub function _init removed by preprocessor */



// Function: __dollar_x at 0x4019a0
extern unsigned long long g_417ff8;

long long __dollar_x()
{
 unsigned long long v2; // x16
 unsigned long long v3; // x30
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]

 v0 = v2;
 v1 = v3;
 goto g_417ff8;
}


// Function: sub_4019b4 at 0x4019b4
extern void* operatornew[](unsigned long size);

int sub_4019b4()
{
 unsigned int v0; // x0

 return operatornew[](v0);
}


// Function: __dollar_x_0 at 0x401b40
extern void __dollar_d_177;
extern char _ZNSt8ios_base4InitD1Ev;
extern unsigned long long __dso_handle;
extern void std_ios_base_Init_Init(void* arg);
extern void std_ios_base_Init_D1Ev(void* arg);

extern int __cxa_atexit(void (*func)(void*), void* arg, void* dso_handle);
extern void* operatornew(unsigned long size);
extern void operatordelete(void* ptr);
extern void operatordelete[](void* ptr);
extern void* __cxa_allocate_exception(unsigned long size);
extern void __cxa_throw(void* exception, void* type_info, void* destructor);
extern void* __cxa_begin_catch(void* exception);
extern void __cxa_rethrow(void);
extern void __cxa_end_catch(void);
extern void __cxa_bad_typeid(void);
extern void* __dynamic_cast(void* obj, void* src_type, void* dst_type, long offset);
extern void std_terminate(void);
extern void* std_move(void* arg);
extern void* std_forward(void* arg);
extern long CmpF(double a, double b);
extern unsigned long arm64g_calculate_condition(unsigned long cond, unsigned long a, unsigned long b, unsigned long c);
extern void abort(void);
extern void _start(void);
extern void deregister_tm_clones(void);
extern void _Unwind_Resume(void* exc_ptr);
extern void __do_global_dtors_aux(void);
extern void frame_dummy(void);
extern void register_tm_clones(void);

long long __dollar_x_0()
{
 unsigned long long v3; // x0
 void* v0; // [bp-0x18]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 v0 = &__dollar_d_177;
 std_ios_base_Init_Init(&__dollar_d_177);
 v3 = __cxa_atexit(&_ZNSt8ios_base4InitD1Ev, v0, &__dso_handle);
 return __cxa_atexit(&_ZNSt8ios_base4InitD1Ev, v0, &__dso_handle);
}


// Function: _GLOBAL__sub_I_5_1.cpp at 0x401b80
unsigned long long _GLOBAL__sub_I_5_1.cpp()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = __dollar_x_0();
 return __dollar_x_0();
}


// Function: sub_401b94 at 0x401b94
void sub_401b94(unsigned long a0)
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_401bf0 at 0x401bf0
void sub_401bf0()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */



// Function: sub_401c08 at 0x401c08
void sub_401c08()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_401c7c at 0x401c7c
void sub_401c7c()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_401cc8 at 0x401cc8
long long sub_401cc8()
{
 unsigned long long v0; // x0

 v0 = 0;
 return 0;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: _Z20test_cpp_member_funcv at 0x401cd4
void test_cpp_member_func()
{
 char *v0; // [bp-0x48]
 unsigned int v1; // [bp-0x3c]
 unsigned int v2; // [bp-0x38]
 char v3; // [bp-0x34]
 char *v4; // [bp-0x10]
 char v5; // [bp+0x0]

 v4 = &v5;
 v0 = &v3;
 SimpleClass_SimpleClass(&v3, 5, "Test");
 SimpleClass_setValue(v0, 10);
 v2 = SimpleClass_getValue(v0);
 v1 = SimpleClass_compute(v0, 3);
 SimpleClass_getClassID(v1, 3);
 return;
}


// Function: _Z20test_cpp_constructorv at 0x401d4c
void test_cpp_constructor()
{
 unsigned int v0; // [bp-0x44]
 char *v1; // [bp-0x40]
 unsigned int v2; // [bp-0x38]
 char v3; // [bp-0x28]
 unsigned int v4; // [bp-0x14]
 unsigned long long v7; // x0
 char *v5; // [bp-0x10]
 char v6; // [bp+0x0]

 v5 = &v6;
 v4 = 0;
 v1 = &v3;
 LifecycleClass_LifecycleClass(&v3, 5);
 v2 = LifecycleClass_getData(v1, 2);
 v4 += v2;
 v0 = LifecycleClass_getInstanceCount(v1);
 v4 += v0;
 v0 = LifecycleClass_getInstanceCount(v1);
 return;
}


// Function: sub_401ddc at 0x401ddc
long long sub_401ddc(unsigned long long a0, unsigned int a1)
{
 unsigned int v0; // [bp+0x1c]

 v0 = a1;
 _Unwind_Resume(a0); /* do not return */
}


// Function: _Z17call_virtual_funcP4Basei at 0x401dfc
struct Base {
} Base;

void call_virtual_func(struct Base *arg_0, int arg_1)
{
 char v0; // [bp-0x18]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 (*((long long *)*((long long *)*((long long *)&v0))))(arg_0, arg_1);
 return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x401e30
struct Base {
} Base;

void test_cpp_virtual_func()
{
 unsigned int v0; // [bp-0x6c]
 unsigned int v1; // [bp-0x68]
 unsigned int v2; // [bp-0x64]
 unsigned int v3; // [bp-0x60]
 unsigned int v4; // [bp-0x5c]
 unsigned int v5; // [bp-0x58]
 unsigned int v6; // [bp-0x54]
 struct Base *v7; // [bp-0x50]
 struct Base *v8; // [bp-0x48]
 unsigned int v9; // [bp-0x3c]
 unsigned int v10; // [bp-0x38]
 char v11; // [bp-0x28]
 char v12; // [bp-0x18]
 char *v13; // [bp-0x10]
 char v14; // [bp+0x0]

 v13 = &v14;
 Base_Base(&v12);
 Derived_Derived(&v11, 3);
 v4 = Base_virtual_func(&v12, 5);
 v10 = v4;
 v3 = Derived_virtual_func(&v11, 5);
 v9 = v3;
 v8 = &v12;
 v7 = &v11;
 v2 = (unsigned long long)call_virtual_func(v8, 5);
 v6 = v2;
 v1 = (unsigned long long)call_virtual_func(v7, 5);
 v5 = v1;
 v0 = v10 + v9 + v6 + v5;
 return;
}


// Function: sub_401f14 at 0x401f14
long long sub_401f14(unsigned long long a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x24]

 v0 = a1;
 _Unwind_Resume(a0); /* do not return */
}


// Function: sub_401f24 at 0x401f24
long long sub_401f24(unsigned long long a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x24]
 unsigned long long v1; // [bp-0x20]

 v1 = a0;
 v0 = a1;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x401f50
typedef struct struct_1 {
 struct struct_0 *field_0;
} struct_1;

typedef struct struct_0 {
 unsigned long long field_0;
} struct_0;

void test_cpp_multiple_inheritance()
{
 unsigned int v16; // w8
 unsigned int v0; // [bp-0x7c]
 unsigned int v1; // [bp-0x78]
 unsigned int v2; // [bp-0x74]
 struct_1 **v3; // [bp-0x70]
 struct_1 **v4; // [bp-0x68]
 unsigned int v5; // [bp-0x5c]
 unsigned int v6; // [bp-0x58]
 unsigned int v7; // [bp-0x44]
 struct_1 **v8; // [bp-0x40]
 struct_1 **v9; // [bp-0x38]
 char v10; // [bp-0x30]
 unsigned int v11; // [bp-0x28]
 char v12; // [bp-0x20]
 unsigned int v13; // [bp-0x18]
 char *v14; // [bp-0x10]
 char v15; // [bp+0x0]

 v14 = &v15;
 v3 = &v10;
 MultiDerived_MultiDerived(&v10);
 v11 = 100;
 v13 = 200;
 v9 = v3;
 v4 = NULL;
 if (v3)
 v4 = &v12;
 v8 = v4;
 v2 = *(v9)->field_0(v9);
 v7 = v2;
 v1 = *(v8)->field_0(v8);
 v6 = v1;
 if (v9 == v8)
 v16 = 0;
 else
 v16 = 1;
 v5 = v16;
 v0 = v7 + v6 + v5;
 return;
}


// Function: sub_402030 at 0x402030
long long sub_402030(unsigned long long a0, unsigned int a1)
{
 unsigned int v0; // [bp+0x2c]

 v0 = a1;
 _Unwind_Resume(a0); /* do not return */
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x402050
typedef struct struct_1 {
 struct struct_0 *field_0;
} struct_1;

typedef struct struct_0 {
 unsigned long long field_0;
} struct_0;

void test_cpp_diamond_inheritance()
{
 unsigned int v0; // [bp-0x7c]
 unsigned int v1; // [bp-0x78]
 unsigned int v2; // [bp-0x74]
 char *v3; // [bp-0x70]
 struct_1 **v4; // [bp-0x68]
 unsigned int v5; // [bp-0x60]
 unsigned int v6; // [bp-0x4c]
 struct_1 **v7; // [bp-0x48]
 void* ptr; // [bp-0x40], Other Possible Types: char
 char v9; // [bp-0x38]
 char *v10; // [bp-0x10]
 char v11; // [bp+0x0]

 v10 = &v11;
 v3 = &ptr;
 DiamondDerived_DiamondDerived(&ptr);
 *((unsigned int *)&v3[8 + ptr[24]]) = 50;
 v4 = NULL;
 if (v3)
 v4 = &(&ptr)[ptr[24]];
 v7 = v4;
 v2 = *(v7)->field_0(v7);
 v6 = v2;
 *((unsigned int *)&(&v9)[ptr[24]]) = 100;
 v1 = *(v7)->field_0(v7);
 v5 = v1;
 v0 = v6 + v5;
 return;
}


// Function: sub_402134 at 0x402134
long long sub_402134(unsigned long long a0, unsigned int a1)
{
 unsigned int v0; // [bp+0x24]

 v0 = a1;
 _Unwind_Resume(a0); /* do not return */
}


// Function: _Z26test_cpp_operator_overloadv at 0x402154
void test_cpp_operator_overload()
{
 unsigned long long v11; // x30
 char *v0; // [bp-0x50]
 char *v1; // [bp-0x48]
 unsigned int result; // [bp-0x3c]
 char *v3; // [bp-0x38]
 char v4; // [bp-0x29]
 char v5; // [bp-0x28], Other Possible Types: unsigned long long
 char v6; // [bp-0x20]
 char v7; // [bp-0x18]
 char *v8; // [bp-0x10]
 unsigned long long v9; // [bp-0x8]
 char v10; // [bp+0x0]

 v8 = &v10;
 v9 = v11;
 v1 = &v7;
 result = 1;
 Point_Point(&v7, 1, 2);
 v0 = &v6;
 Point_Point(&v6, 3, 4);
 v3 = &v5;
 v5 = Point_operator_plus(v3, v1, v0);
 v4 = (char)Point_operator_equal(v1, v0) & (char)result;
 Point_operator_increment(v3);
 if (!((char)arm64g_calculate_condition(25, (unsigned long long)(v4 & 1), 0, 0)))
 return;
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x4021fc
void test_cpp_template_func()
{
 unsigned int v0; // [bp-0x28]
 unsigned int v1; // [bp-0x24]
 unsigned long long v2; // [bp-0x20]
 unsigned int v3; // [bp-0x14]
 char *v4; // [bp-0x10]
 char v5; // [bp+0x0]

 v4 = &v5;
 v3 = template_max_int(3, 7);
 template_max_double(v3, 7);
 v2 = 0x4004000000000000;
 v1 = 10;
 v0 = 20;
 template_swap_int(&v1, &v0);
 return;
}


// Function: _Z23test_cpp_template_classv at 0x402270
void test_cpp_template_class()
{
 char *v0; // [bp-0xc0]
 char *v1; // [bp-0xb8]
 unsigned int result; // [bp-0xac]
 char v3; // [bp-0xa0]
 unsigned int v4; // [bp-0x44]
 unsigned int v5; // [bp-0x40]
 char v6; // [bp-0x3c]
 char *v7; // [bp-0x10]
 char v8; // [bp+0x0]

 v7 = &v8;
 v0 = &v6;
 Container_int_Container(&v6);
 Container_int_push(v0, 10);
 Container_int_push(v0, 20);
 Container_int_push(v0, 30);
 result = 0;
 v5 = Container_int_get(v0, 0);
 v4 = Container_int_getSize(v0);
 v1 = &v3;
 Container_double_Container(&v3);
 Container_double_push(v1);
 Container_double_get(v1, result);
 return;
}


// Function: _Z15test_cpp_lambdav at 0x402330
void test_cpp_lambda()
{
 unsigned int v0; // [bp-0x3c]
 unsigned int v1; // [bp-0x38]
 unsigned int v2; // [bp-0x30]
 char v3; // [bp-0x29]
 unsigned int v4; // [bp-0x28]
 char *v5; // [bp-0x20]
 unsigned int v6; // [bp-0x18]
 unsigned int v7; // [bp-0x14]
 char *v8; // [bp-0x10]
 char v9; // [bp+0x0]

 v8 = &v9;
 v0 = 10;
 v7 = 10;
 v1 = 20;
 v6 = 20;
 v4 = v7;
 v5 = &v6;
 v2 = test_cpp_lambda___dollar__1_operator(&v4, 3);
 _ZZ15test_cpp_lambdavENK3__dollar__0clIiiEEDaT_T0_(&v3, v0, v1);
 return;
}


// Function: _ZZ15test_cpp_lambdavENK3__dollar__1clEi at 0x4023a0
typedef struct struct_0 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_1 *field_8;
} struct_0;

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

long long test_cpp_lambda___dollar__1_operator(int)
{
 struct_0 *idx; // x0
 unsigned int v1; // w1

 idx->field_8->field_0 = idx->field_8->field_0 + 5;
 return idx->field_0 * v1 + idx->field_8->field_0;
}


// Function: _ZZ15test_cpp_lambdavENK3__dollar__0clIiiEEDaT_T0_ at 0x4023e0
long long _ZZ15test_cpp_lambdavENK3__dollar__0clIiiEEDaT_T0_()
{
 unsigned int v0; // w1
 unsigned int v1; // w2

 return v0 + v1;
}


// Function: _Z18test_cpp_exceptionv at 0x402404
extern char _ZTIi;

void test_cpp_exception()
{
 unsigned long long v4; // x30
 unsigned int *ptr; // x0
 unsigned int result; // [bp-0x14]
 char *v1; // [bp-0x10]
 unsigned long long v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v1 = &v3;
 v2 = v4;
 result = 0;
 ptr = __cxa_allocate_exception(4);
 *(ptr) = 42;
 test_cpp_smart_ptr(__cxa_throw(ptr, &_ZTIi, 0), &_ZTIi, 0);
 return;
}


// Function: sub_402438 at 0x402438
extern unsigned long long _ZTIZ18test_cpp_exceptionvE16DerivedException;

long long sub_402438(unsigned long long a0, unsigned int a1)
{
 unsigned int *p; // x0
 unsigned long long v4; // x0
 unsigned int *ptr; // x0
 unsigned long long v6; // x0
 unsigned long long v7; // x0
 unsigned int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 unsigned int v2; // [bp-0x4]

 if (a1 == 1)
 {
 p = __cxa_begin_catch(a0);
 v1 = *(p);
 v2 += v1;
 v4 = test_cpp_smart_ptr(__cxa_rethrow(p));
 return test_cpp_smart_ptr(__cxa_rethrow(p));
 }
 else if (a1 == 1)
 {
 ptr = __cxa_begin_catch(a0);
 v0 = *(ptr);
 v2 += v0 * 2;
 __cxa_end_catch(ptr);
 v6 = __cxa_throw(__cxa_allocate_exception(1), &_ZTIZ18test_cpp_exceptionvE16DerivedException, 0);
 v7 = test_cpp_smart_ptr(v6, &_ZTIZ18test_cpp_exceptionvE16DerivedException, 0);
 return test_cpp_smart_ptr(v6, &_ZTIZ18test_cpp_exceptionvE16DerivedException, 0);
 }
 else
 {
 _Unwind_Resume(a0); /* do not return */
 }
}


// Function: sub_402480 at 0x402480
void sub_402480(unsigned long long a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x14]
 unsigned long long v1; // [bp-0x10]

 v1 = a0;
 v0 = a1;
 __cxa_end_catch();
}


// Function: sub_4024e8 at 0x4024e8
int sub_4024e8(unsigned long long a0, unsigned int a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9, unsigned long a10, unsigned long a11, unsigned long a12, unsigned long a13, unsigned long a14, unsigned long a15, unsigned long a16, unsigned long a17)
{
 unsigned int v0; // [bp-0x4]

 if (a1 != 3)
 {
 if (a1 != 2)
 goto LABEL_0x40256c;
 __cxa_begin_catch(a0);
 v0 += 200;
 __cxa_end_catch(a11);
 return v0;
 }
 a10 = __cxa_begin_catch(a0);
 v0 += 100;
 __cxa_end_catch(a10);
 return v0;
}


// Function: _Z18test_cpp_smart_ptrv at 0x402574
void test_cpp_smart_ptr()
{
 unsigned int *addr; // x0
 unsigned int v0; // [bp-0xac]
 char *v1; // [bp-0xa8]
 unsigned int *p; // [bp-0xa0]
 unsigned int *ptr4; // [bp-0x98]
 char *v4; // [bp-0x90]
 unsigned int *ptr6; // [bp-0x88]
 unsigned int ptr[5]; // [bp-0x80]
 char *v7; // [bp-0x78]
 unsigned int *ptr5; // [bp-0x70]
 char *v9; // [bp-0x68]
 unsigned int *ptr3; // [bp-0x60]
 unsigned int v11; // [bp-0x54]
 char v12; // [bp-0x50]
 char v13; // [bp-0x45]
 unsigned int v14; // [bp-0x44]
 char v15; // [bp-0x40]
 unsigned int v16; // [bp-0x34]
 char v17; // [bp-0x30]
 char v18; // [bp-0x18]
 char *v19; // [bp-0x10]
 char v20; // [bp+0x0]

 v19 = &v20;
 addr = operatornew(4);
 *(addr) = 100;
 v9 = &v18;
 std_unique_ptr_int_default_delete_unique_ptr_int_default_delete_void(&v18, addr);
 ptr3 = std_unique_ptr_int_default_delete_operator_star(v9);
 *(ptr3) = 200;
 v7 = &v17;
 std_unique_ptr_int_default_delete_unique_ptr_move(&v17, std_move_std_unique_ptr_int_default_delete_ref(&v18));
 ptr5 = std_unique_ptr_int_default_delete_operator_star(v7);
 v16 = *(ptr5);
 *((long long *)&ptr[0]) = operatornew[](20);
 ptr[0] = 1;
 ptr[1] = 2;
 ptr[2] = 3;
 ptr[3] = 4;
 ptr[4] = 5;
 v4 = &v15;
 std_unique_ptr_int_array_default_delete_unique_ptr_int_ptr_default_delete_void_bool(&v15, ptr);
 ptr6 = std_unique_ptr_int_array_default_delete_operator_index(v4, 2);
 v14 = *(ptr6);
 ptr4 = operatornew(4);
 *(ptr4) = 500;
 v1 = &v12;
 std_unique_ptr_int_test_cpp_smart_ptr_v_3__dollar__2_unique_ptr(&v12, ptr4);
 p = std_unique_ptr_int_test_cpp_smart_ptr_v_3__dollar__2_operator_star(v1);
 v11 = *(p);
 v0 = v16 + v14 + v11;
 return;
}


// Function: sub_4026e8 at 0x4026e8
long long sub_4026e8(unsigned long long a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x14]

 v0 = a1;
 _Unwind_Resume(a0); /* do not return */
}


// Function: sub_4026f8 at 0x4026f8
long long sub_4026f8(unsigned long long a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x14]
 unsigned long long v1; // [bp-0x10]

 v1 = a0;
 v0 = a1;
}


// Function: sub_402708 at 0x402708
long long sub_402708(unsigned long long a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x14]
 unsigned long long v1; // [bp-0x10]

 v1 = a0;
 v0 = a1;
}


// Function: sub_402718 at 0x402718
long long sub_402718(unsigned long long a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x14]
 unsigned long long v1; // [bp-0x10]

 v1 = a0;
 v0 = a1;
}


// Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3__dollar__2EC2IS0_vEEPiRKS0_ at 0x40275c
long long std_unique_ptr_int_test_cpp_smart_ptr_v_3__dollar__2_unique_ptr(void* a0, unsigned int *a1)
{
 unsigned long long v2; // x2
 unsigned long long v3; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v3 = std___uniq_ptr_data_int_test_cpp_smart_ptr_v_3__dollar__2_true_false___uniq_ptr_data(a0, a1, v2);
 return std___uniq_ptr_data_int_test_cpp_smart_ptr_v_3__dollar__2_true_false___uniq_ptr_data(a0, a1, v2);
}


// Function: sub_402794 at 0x402794
void sub_402794()
{
 __clang_call_terminate(); /* do not return */
}


// Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3__dollar__2EdeEv at 0x402798
long long std_unique_ptr_int_test_cpp_smart_ptr_v_3__dollar__2_operator_star()
{
 unsigned long long v2; // x0
 unsigned long long v3; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v3 = std_unique_ptr_int_test_cpp_smart_ptr_v_3__dollar__2_get(v2);
 return std_unique_ptr_int_test_cpp_smart_ptr_v_3__dollar__2_get(v2);
}


// Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3__dollar__2ED2Ev at 0x4027cc
unsigned long long * std_unique_ptr_int_test_cpp_smart_ptr_v_3__dollar__2_Destructor(unsigned long long a0)
{
 unsigned long long *v5; // x0
 unsigned long long v0; // [bp-0x38]
 unsigned long long *v1; // [bp-0x28]
 unsigned long long *ptr; // [bp-0x20]
 char *v3; // [bp-0x10]
 char v4; // [bp+0x0]

 v3 = &v4;
 v5 = std___uniq_ptr_impl_int_test_cpp_smart_ptr_v_3__dollar__2__M_ptr(a0);
 v1 = v5;
 ptr = v1;
 if (*(ptr))
 {
 v0 = std_unique_ptr_int_test_cpp_smart_ptr_v_3__dollar__2_get_deleter(a0);
 v5 = test_cpp_smart_ptr___dollar__2_operator(v0, *((long long *)ptr));
 }
 *(ptr) = 0;
 return v5;
}


// Function: sub_402848 at 0x402848
void sub_402848()
{
 __clang_call_terminate(); /* do not return */
}


// Function: _Z13test_cpp_rttiv at 0x40284c
extern unsigned long long _ZTI12RTTIDerivedA;
extern unsigned long long _ZTI12RTTIDerivedB;
extern unsigned long long _ZTI8RTTIBase;

void test_cpp_rtti()
{
 void* *v0; // [bp-0x98]
 void* *v1; // [bp-0x90]
 void* *v2; // [bp-0x88]
 unsigned long long v3; // [bp-0x80]
 void* *v4; // [bp-0x78]
 unsigned long long v5; // [bp-0x70]
 void* *v6; // [bp-0x68]
 void* *v7; // [bp-0x60]
 void* *ptr; // [bp-0x58]
 unsigned long long v9; // [bp-0x50]
 void* *p; // [bp-0x48]
 void* *v11; // [bp-0x40]
 unsigned long long v12; // [bp-0x38]
 unsigned long long v13; // [bp-0x30]
 unsigned int cur; // [bp-0x24]
 void* *flag1; // [bp-0x20]
 void* *result; // [bp-0x18]
 char *v17; // [bp-0x10]
 char v18; // [bp+0x0]

 v17 = &v18;
	v9 = 8;
	ptr = operatornew(8);
	*(ptr) = 0;
	RTTIDerivedA_RTTIDerivedA(ptr);
	result = ptr;
	p = operatornew(v9);
	*(p) = 0;
	RTTIDerivedB_RTTIDerivedB(p);
	flag1 = p;
 cur = 0;
	v11 = result;
	if (!result)
	__cxa_bad_typeid();
	if (((char)std_type_info_operator_equal((const struct std_type_info*)((long long)(*(v11))[8]), (const struct std_type_info*)&_ZTI12RTTIDerivedA) & 1))
	cur += 10;
	v7 = flag1;
	if (!flag1)
	__cxa_bad_typeid();
	if (((char)std_type_info_operator_equal((const struct std_type_info*)((long long)(*(v7))[8]), (const struct std_type_info*)&_ZTI12RTTIDerivedB) & 1))
	cur += 20;
 v6 = result;
 if (result)
 v5 = __dynamic_cast(v6, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, 0);
 else
 v5 = 0;
 v13 = v5;
 if (v13)
 cur += RTTIDerivedA_derivedA_data(v13);
 v4 = flag1;
 if (flag1)
 v3 = __dynamic_cast(v4, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedB, 0);
 else
 v3 = 0;
 v12 = v3;
 if (v12)
 cur += RTTIDerivedB_derivedB_data(v12);
	v2 = result;
	if (!result)
	__cxa_bad_typeid();
	cur += (unsigned int)strlen((const char*)(((struct std_type_info*)((long long)(*(v2))[8]))->name));
	v1 = result;
	if (result)
	(long long)(*(v1))[8](v1);
 v0 = flag1;
 if (!flag1)
 return;
 (long long)(*(v0))[8](v0);
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x402a84
extern char g_404bd5;
extern char g_404bfa;
extern char g_404c18;
extern char g_404c34;
extern char g_404c50;
extern char g_404c6c;
extern char g_404c89;
extern char g_404ca5;
extern char g_404cc1;
extern char g_404cdd;
extern char g_404cf9;
extern char g_404d16;
extern char g_404d33;

void test_cpp_oo_features()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 printf(&g_404bd5);
 printf(&g_404bfa, (unsigned long long)test_cpp_member_func() & 4294967295);
 printf(&g_404c18, (unsigned long long)test_cpp_constructor() & 4294967295);
 printf(&g_404c34, (unsigned long long)test_cpp_virtual_func() & 4294967295);
 printf(&g_404c50, (unsigned long long)test_cpp_multiple_inheritance() & 4294967295);
 printf(&g_404c6c, (unsigned long long)test_cpp_diamond_inheritance() & 4294967295);
 printf(&g_404c89, (unsigned long long)test_cpp_operator_overload() & 4294967295);
 printf(&g_404ca5, (unsigned long long)test_cpp_template_func() & 4294967295);
 printf(&g_404cc1, (unsigned long long)test_cpp_template_class() & 4294967295);
 printf(&g_404cdd, (unsigned long long)test_cpp_lambda() & 4294967295);
 printf(&g_404cf9, (unsigned long long)test_cpp_exception() & 4294967295);
 printf(&g_404d16, (unsigned long long)test_cpp_smart_ptr() & 4294967295);
 printf(&g_404d33, (unsigned long long)test_cpp_rtti() & 4294967295);
 return;
}


// Function: main at 0x402b90
unsigned int main()
{
 unsigned int result; // [bp-0x18]
 unsigned int flag1; // [bp-0x14]
 char *v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v2 = &v3;
 result = 0;
 flag1 = 0;
 test_cpp_oo_features();
 return 0;
}


// Function: _ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3__dollar__2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_ at 0x402bbc
long long std___uniq_ptr_data_int_test_cpp_smart_ptr__dollar__2_true_false___uniq_ptr_data(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = std___uniq_ptr_impl_int_test_cpp_smart_ptr__dollar__2___uniq_ptr_impl(a0, a1, a2);
 return std___uniq_ptr_impl_int_test_cpp_smart_ptr__dollar__2___uniq_ptr_impl(a0, a1, a2);
}


// Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3__dollar__2EC2IRKS0_EEPiOT_ at 0x402bf0
long long std___uniq_ptr_impl_int_test_cpp_smart_ptr__dollar__2___uniq_ptr_impl(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
 unsigned long long v4; // x0
 char *v0; // [bp-0x38]
 char v1; // [bp-0x20], Other Possible Types: unsigned long long
 char *v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v2 = &v3;
 v0 = &v1;
 v1 = a1;
 v4 = std::tuple<int*, test_cpp_smart_ptr()::__dollar__2>::tuple<int*&, test_cpp_smart_ptr()::__dollar__2 const&, true>(int*&, test_cpp_smart_ptr()::__dollar__2 const&)(a0, v0, test_cpp_smart_ptr()::__dollar__2 const& std::forward<test_cpp_smart_ptr()::__dollar__2 const&>(std::remove_reference<test_cpp_smart_ptr()::__dollar__2 const&>::type&)(a2));
 return std::tuple<int*, test_cpp_smart_ptr()::__dollar__2>::tuple<int*&, test_cpp_smart_ptr()::__dollar__2 const&, true>(int*&, test_cpp_smart_ptr()::__dollar__2 const&)(a0, v0, test_cpp_smart_ptr()::__dollar__2 const& std::forward<test_cpp_smart_ptr()::__dollar__2 const&>(std::remove_reference<test_cpp_smart_ptr()::__dollar__2 const&>::type&)(a2));
}


// Function: _ZSt7forwardIRKZ18test_cpp_smart_ptrvE3__dollar__2EOT_RNSt16remove_referenceIS3_E4typeE at 0x402c3c
long long std_forward_test_cpp_smart_ptr__dollar__2_const_ref(unsigned long a0)
{
 return a0;
}


// Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvE3__dollar__2EEC2IRS0_RKS1_Lb1EEEOT_OT0_ at 0x402c50
long long std_tuple_int_ptr_test_cpp_smart_ptr__dollar__2__tuple(unsigned long long a0, unsigned long long a1, unsigned int a2)
{
 unsigned long long v3; // x0
 unsigned long long v4; // x0
 unsigned long long v0; // [bp-0x38]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 v0 = std_forward_int_ptr_ref(a1);
 v3 = std_forward_test_cpp_smart_ptr__dollar__2_const_ref(a2);
 v4 = std__Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr__dollar__2___Tuple_impl(a0, v0, a2);
 return std__Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr__dollar__2___Tuple_impl(a0, v0, a2);
}


// Function: sub_402ca4 at 0x402ca4
void sub_402ca4()
{
 __clang_call_terminate(); /* do not return */
}


// Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3__dollar__2EEC2IRS0_JRKS1_EvEEOT_DpOT0_ at 0x402ca8
long long std__Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr__dollar__2___Tuple_impl(unsigned long long a0, unsigned long long a1, unsigned int a2)
{
 unsigned long long v3; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 std__Tuple_impl_1ul_test_cpp_smart_ptr__dollar__2__Tuple_impl(a0, a2);
 v3 = std__Head_base_0ul_int_ptr_false__Head_base(a0, a1);
 return std__Head_base_0ul_int_ptr_false__Head_base(a0, a1);
}


// Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvE3__dollar__2EEC2ERKS0_ at 0x402cfc
long long std__Tuple_impl_1ul_test_cpp_smart_ptr__dollar__2__Tuple_impl(unsigned long long a0, unsigned long long a1)
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = std__Head_base_1ul_test_cpp_smart_ptr__dollar__2__Head_base(a0, a1);
 return std__Head_base_1ul_test_cpp_smart_ptr__dollar__2__Head_base(a0, a1);
}


// Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvE3__dollar__2Lb1EEC2ERKS0_ at 0x402d28
long long std__Head_base_1ul_test_cpp_smart_ptr__dollar__2__Head_base(unsigned long a0, unsigned long a1)
{
 return a0;
}


// Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3__dollar__2E6_M_ptrEv at 0x402d3c
long long std___uniq_ptr_impl_int_test_cpp_smart_ptr__dollar__2___M_ptr(unsigned long long a0)
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = std_get_0ul_int_ptr_test_cpp_smart_ptr__dollar__2(a0);
 return v2;
}


// Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3__dollar__2E11get_deleterEv at 0x402d60
unsigned long long std_unique_ptr_int_test_cpp_smart_ptr__dollar__2_get_deleter(unsigned long long a0)
{
 unsigned long long v0; // [bp-0x20]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 v0 = std___uniq_ptr_impl_int_test_cpp_smart_ptr__dollar__2__M_deleter(a0);
 return v0;
}


// Function: sub_402d90 at 0x402d90
void sub_402d90()
{
 __clang_call_terminate(); /* do not return */
}


// Function: _ZZ18test_cpp_smart_ptrvENK3__dollar__2clEPi at 0x402d94
int test_cpp_smart_ptr___dollar__2_operator(unsigned long long a0, unsigned int *ptr)
{
 unsigned long long v0; // [bp-0x18]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 v0 = a0;
 *(ptr) = 4294967295;
 if (!ptr)
 return a0;
 return operatordelete(ptr);
}


// Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvE3__dollar__2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ at 0x402ddc
long long std_get_0ul_int_ptr_test_cpp_smart_ptr__dollar__2(unsigned long long a0)
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = std___get_helper_0ul_int_ptr_test_cpp_smart_ptr__dollar__2(a0);
 return v2;
}


// Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvE3__dollar__2EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x402e00
long long std___get_helper_0ul_int_ptr_test_cpp_smart_ptr__dollar__2(unsigned long long a0)
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = std__Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr__dollar__2___M_head(a0);
 return v2;
}


// Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3__dollar__2EE7_M_headERS2_ at 0x402e24
long long std__Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr__dollar__2___M_head(unsigned long long a0)
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = std__Head_base_0ul_int_ptr_false__M_head(a0);
 return std__Head_base_0ul_int_ptr_false__M_head(a0);
}


// Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3__dollar__2E10_M_deleterEv at 0x402e48
long long std___uniq_ptr_impl_int_test_cpp_smart_ptr__dollar__2___M_deleter(unsigned long long a0)
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = std_get_1ul_int_ptr_test_cpp_smart_ptr__dollar__2(a0);
 return v2;
}


// Function: _ZSt3getILm1EJPiZ18test_cpp_smart_ptrvE3__dollar__2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ at 0x402e6c
long long std_get_1ul_int_ptr_test_cpp_smart_ptr__dollar__2(unsigned long long a0)
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = std___get_helper_1ul_test_cpp_smart_ptr__dollar__2(a0);
 return v2;
}


// Function: _ZSt12__get_helperILm1EZ18test_cpp_smart_ptrvE3__dollar__2JEERT0_RSt11_Tuple_implIXT_EJS1_DpT1_EE at 0x402e90
long long std___get_helper_1ul_test_cpp_smart_ptr__dollar__2(unsigned long long a0)
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = std__Tuple_impl_1ul_test_cpp_smart_ptr__dollar__2___M_head(a0);
 return v2;
}


// Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvE3__dollar__2EE7_M_headERS1_ at 0x402eb4
long long std__Tuple_impl_1ul_test_cpp_smart_ptr__dollar__2___M_head(unsigned long long a0)
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = std__Head_base_1ul_test_cpp_smart_ptr__dollar__2_true___M_head(a0);
 return std__Head_base_1ul_test_cpp_smart_ptr__dollar__2_true___M_head(a0);
}


// Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvE3__dollar__2Lb1EE7_M_headERS1_ at 0x402ed8
long long std__Head_base_1ul_test_cpp_smart_ptr__dollar__2_true___M_head(unsigned long a0)
{
 return a0;
}


// Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3__dollar__2E3getEv at 0x402eec
unsigned long long std_unique_ptr_int_test_cpp_smart_ptr__dollar__2_get_const(unsigned long long a0)
{
 unsigned long long v0; // [bp-0x20]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 v0 = std___uniq_ptr_impl_int_test_cpp_smart_ptr__dollar__2__M_ptr_const(a0);
 return v0;
}


// Function: sub_402f1c at 0x402f1c
void sub_402f1c()
{
 __clang_call_terminate(); /* do not return */
}


// Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3__dollar__2E6_M_ptrEv at 0x402f20
long long std___uniq_ptr_impl_int_test_cpp_smart_ptr__dollar__2__M_ptr_const(unsigned long long a0)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]
 unsigned long long v2; // x0

 v0 = &v1;
 v2 = std_get_0ul_int_ptr_test_cpp_smart_ptr__dollar__2_const(a0);
 return *((long long *)v2);
}


// Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvE3__dollar__2EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ at 0x402f48
long long std_get_0ul_int_ptr_test_cpp_smart_ptr__dollar__2_const(unsigned long long a0)
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = std___get_helper_0ul_int_ptr_test_cpp_smart_ptr__dollar__2_const(a0);
 return std___get_helper_0ul_int_ptr_test_cpp_smart_ptr__dollar__2_const(a0);
}


// Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvE3__dollar__2EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x402f6c
long long std___get_helper_0ul_int_ptr_test_cpp_smart_ptr__dollar__2_const(unsigned long long a0)
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = std__Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr__dollar__2___M_head_const(a0);
 return v2;
}


// Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3__dollar__2EE7_M_headERKS2_ at 0x402f90
long long std__Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr__dollar__2___M_head_const(unsigned long long a0)
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = std__Head_base_0ul_int_ptr_false__M_head(a0);
 return std__Head_base_0ul_int_ptr_false__M_head(a0);
}


// Function: _ZN11SimpleClassC2EiPKc at 0x402fb4
typedef struct struct_0 {
 unsigned int field_0;
 char padding_4[31];
 char field_23;
} struct_0;

long long SimpleClass_SimpleClass()
{
 struct_0 *ptr; // x0
 unsigned int v3; // w1
 char *v4; // x2
 unsigned long long dst; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr->field_0 = v3;
 dst = strncpy(&ptr->padding_4, v4, 31);
 ptr->field_23 = 0;
 return dst;
}


// Function: _ZN11SimpleClass8setValueEi at 0x403000
long long SimpleClass_setValue()
{
 unsigned int *ptr; // x0
 unsigned int v1; // w1

 *(ptr) = v1;
 return ptr;
}


// Function: _ZNK11SimpleClass8getValueEv at 0x403020
long long SimpleClass_getValue()
{
 unsigned int *v0; // x0

 return *(v0);
}


// Function: _ZNK11SimpleClass7computeEi at 0x403038
long long SimpleClass_compute()
{
 unsigned int v3; // w1
 unsigned int *ptr; // x0
 unsigned int v0; // [bp-0x20]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 v0 = v3 * *(ptr);
 return (strlen(ptr + 1) & 4294967295) + v0 & 4294967295;
}


// Function: _ZN11SimpleClass10getClassIDEv at 0x403080
void SimpleClass_getClassID(void* this)
{
 return;
}


// Function: _ZN14LifecycleClassC2Em at 0x403088
extern unsigned int _ZN14LifecycleClass14instance_countE;

long long LifecycleClass_LifecycleClass()
{
 unsigned long long ptr[2]; // x0
 unsigned long long v4; // x1
 unsigned long long v5; // x0
 unsigned long long v6; // x0
 unsigned long long idx; // [bp-0x28]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 ptr[1] = v4;
 if (!v4 * 4 >> 64)
 v5 = 4 * v4;
 else
 v5 = 18446744073709551615;
 v6 = operatornew[](v5);
 ptr[0] = v6;
 for (idx = 0; v4 > idx; idx += 1)
 {
 *((unsigned int *)(ptr[0] + idx * 4)) = 10 * (unsigned int)idx;
 }
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
 return v6;
}


// Function: _ZNK14LifecycleClass7getDataEm at 0x403138
long long LifecycleClass_getData()
{
 unsigned long long v1[2]; // x0
 unsigned long idx; // x1
 unsigned int v0; // [bp-0x1c]

 if (v1[1] <= idx)
 {
 v0 = 4294967295;
 return v0;
 }
 v0 = *((int *)(v1[0] + idx * 4));
 return v0;
}


// Function: _ZN14LifecycleClass16getInstanceCountEv at 0x403190
void LifecycleClass_getInstanceCount(void* this)
{
 return;
}


// Function: _ZN14LifecycleClassD2Ev at 0x40319c
extern unsigned int _ZN14LifecycleClass14instance_countE;

int LifecycleClass_Destructor(void* ptr)
{
 unsigned long v0; // [bp-0x20]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 v0 = *((long long *)ptr);
 if (*((long long *)ptr))
 operatordelete[](v0);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
 return;
}


// Function: _ZN4BaseC2Ev at 0x4031e8
extern char g_417858;

long long Base_Base()
{
 unsigned long ptr; // x0

 *((char **)ptr) = &g_417858;
 return ptr;
}


// Function: _ZN7DerivedC2Ei at 0x40320c
typedef struct struct_0 {
 char padding_0[8];
 unsigned int field_8;
} struct_0;

extern unsigned long long g_417898;

long long Derived_Derived()
{
 unsigned long long v3; // x0
 struct_0 *ptr; // x0
 unsigned int v5; // w1
 unsigned long long v0; // [bp-0x30]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 v0 = &g_417898;
 v3 = Base_Base();
 *((unsigned long long *)&ptr->padding_0[0]) = v0;
 ptr->field_8 = v5;
 return v3;
}


// Function: _ZN4Base12virtual_funcEi at 0x40325c
long long Base_virtual_func()
{
 unsigned int v0; // w1

 return v0 + 1;
}


// Function: _ZN7Derived12virtual_funcEi at 0x403278
typedef struct struct_0 {
 char padding_0[8];
 unsigned int field_8;
} struct_0;

long long Derived_virtual_func()
{
 struct_0 *v0; // x0
 unsigned int v1; // w1

 return v0->field_8 * v1;
}


// Function: _ZN7DerivedD2Ev at 0x40329c
int Derived_Destructor(void* this)
{
 void* v0; // [bp-0x18]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 v0 = this;
 return;
}


// Function: _ZN4BaseD2Ev at 0x4032c0
int Base_Destructor(void* this)
{
 return;
}


// Function: _ZN12MultiDerivedC2Ev at 0x4032d0
extern unsigned long long g_4178e0;
extern unsigned long long g_417910;

long long MultiDerived_MultiDerived()
{
 unsigned long long ptr; // x0
 unsigned long long v5; // x0
 unsigned long long v0; // [bp-0x30]
 unsigned long long v1; // [bp-0x28]
 char *v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v2 = &v3;
 v0 = &g_4178e0;
 v1 = &g_417910;
 BaseA_BaseA(ptr);
 v5 = BaseB_BaseB(ptr + 16);
 *((unsigned long long *)ptr) = v0;
 *((unsigned long long *)(ptr + 16)) = v1;
 return v5;
}


// Function: _ZN12MultiDerivedD2Ev at 0x403330
int MultiDerived_Destructor(void* this)
{
 void* v0; // [bp-0x20]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 v0 = this;
 return;
}


// Function: _ZN14DiamondDerivedC1Ev at 0x403364
extern unsigned long long g_4179e8;
extern unsigned long long g_417a18;
extern unsigned long long g_417a50;
extern unsigned long long g_417a70;
extern unsigned long long g_417a80;

long long DiamondDerived_DiamondDerived()
{
 unsigned long long ptr; // x0
 unsigned long long v8; // x0
 unsigned long long v0; // [bp-0x48]
 unsigned long long v1; // [bp-0x40]
 unsigned long long v2; // [bp-0x38]
 unsigned long long v3; // [bp-0x30]
 unsigned long long v4; // [bp-0x28]
 char *v5; // [bp-0x10]
 char v6; // [bp+0x0]

 v5 = &v6;
 v0 = &g_417a70;
 v1 = &g_417a80;
 v2 = &g_4179e8;
 v3 = &g_417a50;
 v4 = &g_417a18;
 VirtualBase_VirtualBase(ptr + 32);
 MiddleA_MiddleA(ptr, v0);
 v8 = MiddleB_MiddleB(ptr + 16, v1);
 *((unsigned long long *)ptr) = v2;
 *((unsigned long long *)(ptr + 32)) = v3;
 *((unsigned long long *)(ptr + 16)) = v4;
 return v8;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x403400
int DiamondDerived_Destructor(void* this)
{
 void* v0; // [bp-0x20]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 v0 = this;
 return;
}


// Function: _ZN5PointC2Eii at 0x40343c
int Point_Point(void* ptr, int arg_0, int arg_1)
{
 *((int *)ptr) = arg_0;
 *((int *)&ptr[4]) = arg_1;
 return;
}


// Function: _ZNK5PointplERKS_ at 0x403468
long long Point_operator_plus(char *a0)
{
 unsigned int v3[2]; // x1
 char v0; // [bp-0x18], Other Possible Types: unsigned long
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 Point_Point(&v0, *((int *)&a0) + v3[0], *((int *)&a0[4]) + v3[1]);
 return v0;
}


// Function: _ZNK5PointeqERKS_ at 0x4034b8
long long Point_operator_equal(char *a0)
{
 unsigned long v1; // x1
 unsigned int v2; // w8
 unsigned int v0; // [bp-0x14]

 v0 = 0;
 if (*((int *)&a0) == *((int *)v1))
 {
 if (*((int *)&a0[4]) != *((int *)(v1 + 4)))
 v2 = 0;
 else
 v2 = 1;
 v0 = v2;
 }
 return v0 & 1;
}


// Function: _ZN5PointppEv at 0x40351c
long long Point_operator_increment()
{
 unsigned int ptr[2]; // x0

 ptr[0] = ptr[0] + 1;
 ptr[1] = ptr[1] + 1;
 return ptr;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x403548
int template_max_int(int arg_0, int arg_1)
{
 unsigned int v0; // [bp-0xc]

 if (arg_0 <= arg_1)
 {
 v0 = arg_1;
 return v0;
 }
 v0 = arg_0;
 return v0;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x40358c
double template_max_double(double arg_0, double arg_1)
{
 unsigned long long v1; // d0
 unsigned long long v2; // d1
 unsigned long v3; // x0
 unsigned long long v0; // [bp-0x18]

 if ((char)arm64g_calculate_condition(208, (((((unsigned long long)(char)(CmpF(v1, v2)) >> 5 & 3 | (unsigned long long)(CmpF(v1, v2) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(v1, v2)) >> 5 & 3 | (unsigned long long)(CmpF(v1, v2) & 1)) & ((unsigned long long)(char)(CmpF(v1, v2)) >> 5 & 3 | (unsigned long long)(CmpF(v1, v2) & 1)) >> 1 & 1)) * 0x10000000, 0, 0))
 {
 v0 = v2;
 return v3;
 }
 v0 = v1;
 return v3;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x4035d4
long long template_swap_int(unsigned int *ptr)
{
 unsigned int *p; // x1
 unsigned int v0; // [bp-0x14]

 v0 = *(ptr);
 *(ptr) = *(p);
 *(p) = v0;
 return ptr;
}


// Function: _ZN9ContainerIiEC2Ev at 0x403610
typedef struct struct_0 {
 char padding_0[40];
 unsigned int field_28;
} struct_0;

long long Container_int_Container()
{
 struct_0 *ptr; // x0

 ptr->field_28 = 0;
 return ptr;
}


// Function: _ZN9ContainerIiE4pushEi at 0x403628
void Container_int_push(void* ptr, int arg_0)
{
 unsigned long index; // x10

 if (10 > (int)ptr[40])
 {
 index = (int)ptr[40];
 *((unsigned int *)&ptr[40]) = (unsigned int)index + 1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x403674
long long Container_int_get()
{
 unsigned int v1; // w1
 unsigned int *ptr; // x0
 unsigned int v0; // [bp-0x4]

 if (!((char)(v1 >> 31) & 1) && ptr[10] > v1)
 {
 v0 = ptr[v1];
 return v0;
 }
 v0 = 0;
 return v0;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x4036d4
typedef struct struct_0 {
 char padding_0[40];
 unsigned int field_28;
} struct_0;

long long Container_int_getSize()
{
 struct_0 *v0; // x0

 return v0->field_28;
}


// Function: _ZN9ContainerIdEC1Ev at 0x4036ec
typedef struct struct_0 {
 char padding_0[80];
 unsigned int field_50;
} struct_0;

long long Container_double_Container()
{
 struct_0 *ptr; // x0

 ptr->field_50 = 0;
 return ptr;
}


// Function: _ZN9ContainerIdE4pushEd at 0x403704
typedef struct struct_0 {
 unsigned long long field_0;
 char padding_8[72];
 unsigned int field_50;
} struct_0;

long long Container_double_push()
{
 struct_0 *ptr; // x0
 unsigned long index; // x10
 unsigned long v2; // d0

 if (10 > ptr->field_50)
 {
 index = ptr->field_50;
 ptr->field_50 = (unsigned int)index + 1;
 (&ptr->field_0)[index] = v2;
 }
 return ptr;
}


// Function: _ZNK9ContainerIdE3getEi at 0x403750
long long Container_double_get()
{
 unsigned int v1; // w1
 unsigned long long *ptr; // x0
 unsigned long v0; // [bp-0x8], Other Possible Types: unsigned long long

 if (!((char)(v1 >> 31) & 1) && (int)ptr[10] > v1)
 {
 v0 = ptr[v1];
 return ptr;
 }
 v0 = 0;
 return ptr;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x4037b4
void Container_double_getSize(void* this)
{
 return;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi at 0x4037cc
long long std_unique_ptr_int_default_delete_unique_ptr_int_default_delete_void(char *a0)
{
 unsigned long long v2; // x1
 unsigned long long v3; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v3 = std___uniq_ptr_data_int_default_delete_true_true___uniq_ptr_data(a0, v2);
 return std___uniq_ptr_data_int_default_delete_true_true___uniq_ptr_data(a0, v2);
}


// Function: sub_4037fc at 0x4037fc
void sub_4037fc()
{
 __clang_call_terminate(); /* do not return */
}


// Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv at 0x403800
void std_unique_ptr_int_default_delete_operator_star(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]
 unsigned long long v2; // x0

 v0 = &v1;
 v2 = std_unique_ptr_int_default_delete_get(this);
 return;
}


// Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ at 0x403834
long long std_move_std_unique_ptr_int_default_delete_ref(void)
{
 unsigned long v0; // x0

 return v0;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_ at 0x403848
long long std_unique_ptr_int_default_delete_unique_ptr_move(void* ptr)
{
 unsigned long long v2; // x0
 unsigned long long v3; // x1
 unsigned long long v4; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v4 = std___uniq_ptr_data_int_default_delete_true_true___uniq_ptr_data(ptr, v2);
 return std___uniq_ptr_data_int_default_delete_true_true___uniq_ptr_data(ptr, v2);
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ at 0x403874
long long std_unique_ptr_int_array_default_delete_unique_ptr_int_ptr_default_delete_void_bool(char *a0)
{
 unsigned long long v2; // x1
 unsigned long long v3; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v3 = std___uniq_ptr_impl_int_default_delete___uniq_ptr_impl(a0, v2);
 return std___uniq_ptr_impl_int_default_delete___uniq_ptr_impl(a0, v2);
}


// Function: sub_4038a4 at 0x4038a4
void sub_4038a4()
{
 __clang_call_terminate(); /* do not return */
}


// Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEm at 0x4038a8
long long std_unique_ptr_int_array_default_delete_operator_index(void* ptr, unsigned long idx)
{
 unsigned long long v2; // x0
 unsigned long v3; // x1
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return v2 + v3 * 4;
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev at 0x4038e8
int std_unique_ptr_int_array_default_delete_Destructor(void* this)
{
 unsigned long long v3; // x0
 unsigned long long *ptr; // [bp-0x20]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 ptr = (unsigned long long *)std___uniq_ptr_impl_int_array_default_delete___M_ptr(this);
 if (*(ptr))
 {
 v3 = std_unique_ptr_int_array_default_delete_get_deleter(this);
 std_default_delete_int_operator_paren((void*)v3, (int *)*(ptr));
 }
 *(ptr) = 0;
 return;
}


// Function: sub_403948 at 0x403948
void sub_403948()
{
 __clang_call_terminate(); /* do not return */
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev at 0x40394c
int std_unique_ptr_int_default_delete_Destructor(void* ptr)
{
 unsigned long long *v4; // x0
 unsigned long long v0; // [bp-0x30]
 unsigned long long *v1; // [bp-0x20]
 char *v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v2 = &v3;
 v1 = (unsigned long long *)std__uniq_ptr_impl_int_default_delete___M_ptr(ptr);
 if (*(v1))
 {
 v0 = std_unique_ptr_int_default_delete_get_deleter(ptr);
 v4 = (unsigned long long *)std_forward_int_ptr_ref(v1);
 std_default_delete_int_operator_paren((void*)v0, (int *)*(v4));
 }
 *(v1) = 0;
 return;
}


// Function: sub_4039bc at 0x4039bc
void sub_4039bc()
{
 __clang_call_terminate(); /* do not return */
}


// Function: _ZN12RTTIDerivedAC2Ev at 0x4039c0
extern unsigned long long g_417d30;

long long RTTIDerivedA_RTTIDerivedA()
{
 unsigned long long ptr; // x0
 unsigned long long v4; // x0
 unsigned long long v0; // [bp-0x28]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 v0 = &g_417d30;
 v4 = RTTIBase_RTTIBase(ptr);
 *((unsigned long long *)ptr) = v0;
 return v4;
}


// Function: _ZN12RTTIDerivedBC2Ev at 0x403a04
extern unsigned long long g_417d80;

long long RTTIDerivedB_RTTIDerivedB()
{
 unsigned long long ptr; // x0
 unsigned long long v4; // x0
 unsigned long long v0; // [bp-0x28]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 v0 = &g_417d80;
 v4 = RTTIBase_RTTIBase(ptr);
 *((unsigned long long *)ptr) = v0;
 return v4;
}


// Function: _ZNKSt9type_infoeqERKS_ at 0x403a48
int std_type_info_operator_equal(const struct std_type_info* this_ptr, const struct std_type_info* arg_0)
{
 unsigned int v4; // w8
 unsigned int v0; // [bp-0x34]
 unsigned int v1; // [bp-0x24]
 char *v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v2 = &v3;
 v1 = 1;
 if ((long long)this_ptr[8] == *((long long *)(arg_0 + 8)))
 return v1;
 v0 = 0;
 if (*((char *)(long long)this_ptr[8]) != 42)
 {
 if (strcmp((long long)this_ptr[8], *((long long *)(arg_0 + 8))))
 v4 = 0;
 else
 v4 = 1;
 v0 = v4;
 }
 v1 = v0;
 return v1;
}


// Function: _ZNK12RTTIDerivedA13derivedA_dataEv at 0x403ae8
void RTTIDerivedA_derivedA_data(void* this)
{
 return;
}


// Function: _ZNK12RTTIDerivedB13derivedB_dataEv at 0x403afc
void RTTIDerivedB_derivedB_data(void* this)
{
 return;
}


// Function: _ZNKSt9type_info4nameEv at 0x403b10
void std::type_info::name(void* ptr)
{
 char *v0; // [bp-0x18], Other Possible Types: unsigned long

 if (*((char *)(long long)ptr[8]) != 42)
 {
 v0 = (long long)ptr[8];
 return;
 }
 v0 = (long long)ptr[8] + 1;
 return;
}


// Function: _ZNK4Base7getNameEv at 0x403b64
void Base_getName(void* this)
{
 return;
}


// Function: _ZN4BaseD0Ev at 0x403b7c
int Base_Destructor_0(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this);
 return;
}


// Function: _ZNK7Derived7getNameEv at 0x403bac
void Derived_getName(void* this)
{
 return;
}


// Function: _ZN7DerivedD0Ev at 0x403bc4
int Derived_Destructor_0(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this);
 return;
}


// Function: _ZN5BaseAC2Ev at 0x403bf4
extern char g_417990;

int BaseA_BaseA(void* ptr)
{
 *((char **)ptr) = &g_417990;
 return;
}


// Function: _ZN5BaseBC2Ev at 0x403c18
extern char g_4179b8;

int BaseB_BaseB(void* ptr)
{
 *((char **)ptr) = &g_4179b8;
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x403c3c
void MultiDerived_funcA(void* this)
{
 return;
}


// Function: _ZN12MultiDerivedD0Ev at 0x403c50
int MultiDerived_Destructor_0(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this);
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x403c80
void MultiDerived_funcB(void* this)
{
 return;
}


// Function: _ZThn16_N12MultiDerived5funcBEv at 0x403c94
long long non_virtual_thunk_to_MultiDerived_funcB(void* a0)
{
 unsigned long v0; // x0

 v0 = (unsigned long long)MultiDerived_funcB(a0 - 16);
 return (unsigned long long)MultiDerived_funcB(a0 - 16);
}


// Function: _ZThn16_N12MultiDerivedD1Ev at 0x403cac
long long non_virtual_thunk_to_MultiDerived_Destructor(unsigned long long a0)
{
 unsigned long v1; // x0
 unsigned long long v0; // [bp-0x8]

 v0 = a0;
 return v1;
}


// Function: _ZThn16_N12MultiDerivedD0Ev at 0x403cc4
long long non_virtual_thunk_to_MultiDerived_Destructor_0(unsigned long long a0)
{
 unsigned long v1; // x0
 unsigned long long v0; // [bp-0x8]

 v0 = a0;
 return v1;
}


// Function: _ZN5BaseA5funcAEv at 0x403cdc
void BaseA_funcA(void* this)
{
 return;
}


// Function: _ZN5BaseAD2Ev at 0x403cf0
int BaseA_Destructor(void* this)
{
 return;
}


// Function: _ZN5BaseAD0Ev at 0x403d00
int BaseA_Destructor_0(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this);
 return;
}


// Function: _ZN5BaseB5funcBEv at 0x403d30
void BaseB_funcB(void* this)
{
 return;
}


// Function: _ZN5BaseBD2Ev at 0x403d44
int BaseB_Destructor(void* this)
{
 return;
}


// Function: _ZN5BaseBD0Ev at 0x403d54
int BaseB_Destructor_0(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this);
 return;
}


// Function: _ZN11VirtualBaseC2Ev at 0x403d84
extern char g_417c18;

int VirtualBase_VirtualBase(void* ptr)
{
 *((char **)ptr) = &g_417c18;
 return;
}


// Function: _ZN7MiddleAC2Ev at 0x403da8
int MiddleA_MiddleA(void* ptr)
{
 unsigned long long idx[2]; // x1

 *((unsigned long long *)ptr) = idx[0];
 *((unsigned long long *)((char *)ptr + *((long long *)(*((long long *)ptr) - 24)))) = idx[1];
 return;
}


// Function: _ZN7MiddleBC2Ev at 0x403ddc
int MiddleB_MiddleB(void* ptr)
{
 unsigned long long idx[2]; // x1

 *((unsigned long long *)ptr) = idx[0];
 *((unsigned long long *)((char *)ptr + *((long long *)(*((long long *)ptr) - 24)))) = idx[1];
 return;
}


// Function: _ZN7MiddleA4funcEv at 0x403e10
void MiddleA_func(void* this)
{
 return;
}


// Function: _ZN7MiddleAD1Ev at 0x403e38
int MiddleA_Destructor(void* this)
{
 void* v0; // [bp-0x20]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 v0 = this;
 return;
}


// Function: _ZN7MiddleAD0Ev at 0x403e74
int MiddleA_Destructor_0(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this);
 return;
}


// Function: _ZTv0_n24_N7MiddleA4funcEv at 0x403ea4
long long thunk_to_MiddleA_func(void* *a0)
{
 unsigned long v0; // x0

 v0 = (unsigned long long)MiddleA_func((char *)a0 + (*(a0))[24]);
 return v0;
}


// Function: _ZTv0_n32_N7MiddleAD1Ev at 0x403ec4
long long thunk_to_MiddleA_Destructor(unsigned long long a0)
{
 unsigned long v1; // x0
 unsigned long long v0; // [bp-0x8]

 v0 = a0;
 return v1;
}


// Function: _ZTv0_n32_N7MiddleAD0Ev at 0x403ee4
long long thunk_to_MiddleA_Destructor_0(unsigned long long a0)
{
 unsigned long v1; // x0
 unsigned long long v0; // [bp-0x8]

 v0 = a0;
 return v1;
}


// Function: _ZN7MiddleB4funcEv at 0x403f04
void MiddleB_func(void* this)
{
 return;
}


// Function: _ZN7MiddleBD1Ev at 0x403f2c
int MiddleB_Destructor(void* this)
{
 void* v0; // [bp-0x20]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 v0 = this;
 return;
}


// Function: _ZN7MiddleBD0Ev at 0x403f68
int MiddleB_Destructor_0(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this);
 return;
}


// Function: _ZTv0_n24_N7MiddleB4funcEv at 0x403f98
long long thunk_to_MiddleB_func(void* *a0)
{
 unsigned long v0; // x0

 v0 = (unsigned long long)MiddleB_func((char *)a0 + (*(a0))[24]);
 return v0;
}


// Function: _ZTv0_n32_N7MiddleBD1Ev at 0x403fb8
long long thunk_to_MiddleB_Destructor(unsigned long long a0)
{
 unsigned long v1; // x0
 unsigned long long v0; // [bp-0x8]

 v0 = a0;
 return v1;
}


// Function: _ZTv0_n32_N7MiddleBD0Ev at 0x403fd8
long long thunk_to_MiddleB_Destructor_0(unsigned long long a0)
{
 unsigned long v1; // x0
 unsigned long long v0; // [bp-0x8]

 v0 = a0;
 return v1;
}


// Function: _ZN14DiamondDerived4funcEv at 0x403ff8
void DiamondDerived_func(void* this)
{
 return;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x404020
int DiamondDerived_Destructor_0(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this);
 return;
}


// Function: _ZThn16_N14DiamondDerived4funcEv at 0x404050
long long non_virtual_thunk_to_DiamondDerived_func(void* a0)
{
 unsigned long v0; // x0

 v0 = (unsigned long long)DiamondDerived_func(a0 - 16);
 return (unsigned long long)DiamondDerived_func(a0 - 16);
}


// Function: _ZThn16_N14DiamondDerivedD1Ev at 0x404068
long long non_virtual_thunk_to_DiamondDerived_Destructor(unsigned long long a0)
{
 unsigned long v1; // x0
 unsigned long long v0; // [bp-0x8]

 v0 = a0;
 return v1;
}


// Function: _ZThn16_N14DiamondDerivedD0Ev at 0x404080
long long non_virtual_thunk_to_DiamondDerived_Destructor_0(unsigned long long a0)
{
 unsigned long v1; // x0
 unsigned long long v0; // [bp-0x8]

 v0 = a0;
 return v1;
}


// Function: _ZTv0_n24_N14DiamondDerived4funcEv at 0x404098
long long thunk_to_DiamondDerived_func(void* *a0)
{
 unsigned long v0; // x0

 v0 = (unsigned long long)DiamondDerived_func((char *)a0 + (*(a0))[24]);
 return (unsigned long long)DiamondDerived_func((char *)a0 + (*(a0))[24]);
}


// Function: _ZTv0_n32_N14DiamondDerivedD1Ev at 0x4040b8
long long thunk_to_DiamondDerived_Destructor(unsigned long long a0)
{
 unsigned long v1; // x0
 unsigned long long v0; // [bp-0x8]

 v0 = a0;
 return v1;
}


// Function: _ZTv0_n32_N14DiamondDerivedD0Ev at 0x4040d8
long long thunk_to_DiamondDerived_Destructor_0(unsigned long long a0)
{
 unsigned long v1; // x0
 unsigned long long v0; // [bp-0x8]

 v0 = a0;
 return v1;
}


// Function: _ZN11VirtualBase4funcEv at 0x4040f8
void VirtualBase_func(void* this)
{
 return;
}


// Function: _ZN11VirtualBaseD2Ev at 0x40410c
int VirtualBase_Destructor(void* this)
{
 return;
}


// Function: _ZN11VirtualBaseD0Ev at 0x40411c
int VirtualBase_Destructor_0(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this);
 return;
}


// Function: _ZN7MiddleAD2Ev at 0x40414c
int MiddleA_Destructor_1(void* this)
{
 return;
}


// Function: _ZN7MiddleBD2Ev at 0x404160
int MiddleB_Destructor_1(void* this)
{
 return;
}


// Function: _ZN14DiamondDerivedD2Ev at 0x404174
int DiamondDerived_Destructor_1(void* this)
{
 unsigned long long v4; // x1
 unsigned long long v0; // [bp-0x30]
 void* v1; // [bp-0x28]
 char *v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v2 = &v3;
 v1 = this;
 v0 = v4;
 return;
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ at 0x4041c0
int std___uniq_ptr_data___uniq_ptr_data(void* ptr, void* arg_0)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 std___uniq_ptr_impl_int_default_delete___uniq_ptr_impl_move(ptr, arg_0);
 return (int)ptr;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_ at 0x4041ec
long long std___uniq_ptr_impl_int_default_delete___uniq_ptr_impl_move(void* ptr, void* arg)
{
 unsigned long long v3; // x1
 unsigned long long v5; // x0
 unsigned long long *ptr_loc; // [bp-0x28]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 v5 = std_tuple_int_ptr_default_delete__tuple(ptr, std_move_tuple_int_ptr_default_delete(ptr, v3));
 ptr_loc = (unsigned long long *)std__uniq_ptr_impl_int_default_delete___M_ptr(v3);
 *(ptr_loc) = 0;
 return v5;
}


// Function: sub_404240 at 0x404240
void sub_404240()
{
 __clang_call_terminate(); /* do not return */
}


// Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ at 0x404244
void* std_move_tuple_int_ptr_default_delete(void* this, void* arg_0)
{
 return this;
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_ at 0x404258
int std_tuple_int_ptr_default_delete__tuple(void* this, void* arg_0)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 std__Tuple_impl_0ul_int_ptr_default_delete___Tuple_impl(this, arg_0);
 return this;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv at 0x404284
long long std__uniq_ptr_impl_int_default_delete___M_ptr(void* a0)
{
 unsigned long long v2; // x0
 unsigned long long v3; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = std_get_0ul_int_ptr_default_delete(a0);
 return std_get_0ul_int_ptr_default_delete(a0);
}


// Function: __clang_call_terminate at 0x4042a8
void __clang_call_terminate()
{
 unsigned long long v1; // x30
 unsigned long long v0; // [bp-0x10]

 v0 = v1;
 std_terminate(__cxa_begin_catch()); /* do not return */
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2EOS3_ at 0x4042b4
long long std__Tuple_impl_0ul_int_ptr_default_delete___Tuple_impl(void* a0, void* a1)
{
 unsigned long long *ptr; // x0
 unsigned long long *v3; // x1
 unsigned long long v4; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = a0;
 v3 = a1;
 v4 = std__Tuple_impl_1ul_default_delete__Tuple_impl(a0);
 *(ptr) = *(v3);
 return v4;
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2EOS2_ at 0x4042f4
long long std__Tuple_impl_1ul_default_delete__Tuple_impl(void* a0)
{
 return a0;
}


// Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ at 0x404308
int ** std_get_0ul_int_ptr_default_delete(void* a0)
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = std___get_helper_0ul_int_ptr_default_delete(a0);
 return (int **)v2;
}


// Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x40432c
int ** std___get_helper_0ul_int_ptr_default_delete(void* a0)
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = std__Tuple_impl_0ul_int_ptr_default_delete___M_head(a0);
 return v2;
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERS3_ at 0x404350
int ** std__Tuple_impl_0ul_int_ptr_default_delete___M_head(void* a0)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return (int **)std__Head_base_0ul_int_ptr_false__M_head(a0);
}


// Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_ at 0x404374
long long std__Head_base_0ul_int_ptr_false__M_head(void* a0)
{
 unsigned long v0; // x0

 return v0;
}


// Function: _ZN8RTTIBaseC2Ev at 0x404388
extern char g_417d58;

int RTTIBase_RTTIBase(void* ptr)
{
 *((char **)ptr) = &g_417d58;
 return;
}


// Function: _ZN12RTTIDerivedAD2Ev at 0x4043ac
int RTTIDerivedA_Destructor(void* this)
{
 void* v0; // [bp-0x18]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 v0 = this;
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x4043d0
int RTTIDerivedA_Destructor_0(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this);
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x404400
void RTTIDerivedA_getType(void* this)
{
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x404414
int RTTIBase_Destructor(void* this)
{
 return;
}


// Function: _ZN8RTTIBaseD0Ev at 0x404424
int RTTIBase_Destructor_0(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this);
 return;
}


// Function: _ZNK8RTTIBase7getTypeEv at 0x404454
void RTTIBase_getType(void* this)
{
 return;
}


// Function: _ZN12RTTIDerivedBD2Ev at 0x404468
int RTTIDerivedB_Destructor(void* this)
{
 void* v0; // [bp-0x18]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 v0 = this;
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x40448c
int RTTIDerivedB_Destructor_0(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this);
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x4044bc
void RTTIDerivedB_getType(void* this)
{
 return;
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi at 0x4044d0
int std___uniq_ptr_data_int_default_delete_true_true___uniq_ptr_data(void* ptr, int* arg)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 std___uniq_ptr_impl_int_default_delete___uniq_ptr_impl(ptr, arg);
 return (int)ptr;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi at 0x4044fc
long long std___uniq_ptr_impl_int_default_delete___uniq_ptr_impl(void* a0, int* ptr_arg)
{
 unsigned long long *ptr; // x0
 unsigned long v4; // x1
 void* v0; // [bp-0x30]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 v0 = a0;
 v4 = (unsigned long)ptr_arg;
 std_tuple_int_ptr_default_delete_tuple_true_true(a0);
 ptr = (unsigned long long *)std__uniq_ptr_impl_int_default_delete___M_ptr(a0);
 *(ptr) = v4;
 return (long long)ptr;
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv at 0x404540
long long std_tuple_int_ptr_default_delete_tuple_true_true(void* a0)
{
 unsigned long long v2; // x0
 unsigned long long v3; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = std__Tuple_impl_0ul_int_ptr_default_delete___Tuple_impl(a0);
 return v2;
}


// Function: sub_404568 at 0x404568
void sub_404568()
{
 __clang_call_terminate(); /* do not return */
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2Ev at 0x40456c
int std__Tuple_impl_0ul_int_ptr_default_delete___Tuple_impl(void* a0)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 std__Tuple_impl_1ul_default_delete___Tuple_impl(a0);
 std__Head_base_0ul_int_ptr_false___Head_base(a0);
 return (int)a0;
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2Ev at 0x40459c
long long std__Tuple_impl_1ul_default_delete___Tuple_impl(void* a0)
{
 unsigned long long v2; // x0
 unsigned long long v3; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = std__Head_base_1ul_default_delete_true___Head_base(a0);
 return std__Head_base_1ul_default_delete_true___Head_base(a0);
}


// Function: _ZNSt10_Head_baseILm0EPiLb0EEC2Ev at 0x4045c0
long long std__Head_base_0ul_int_ptr_false___Head_base(void* a0)
{
 unsigned long long *ptr; // x0

 *(ptr) = 0;
 return (long long)ptr;
}


// Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EEC2Ev at 0x4045d8
int std__Head_base_1ul_default_delete_true___Head_base(void* a0)
{
 return 0;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv at 0x4045e8
long long std_unique_ptr_int_default_delete_get_deleter(void* a0)
{
 unsigned long long v3; // x0
 unsigned long long v0; // [bp-0x20]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 v0 = std__uniq_ptr_impl_int_default_delete___M_deleter(v3);
 return v0;
}


// Function: sub_404618 at 0x404618
void sub_404618()
{
 __clang_call_terminate(); /* do not return */
}


// Function: _ZNKSt14default_deleteIiEclEPi at 0x40461c
void std_default_delete_int_operator_paren(void* this, int *arg_0)
{
 void* v0; // [bp-0x18]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 v0 = this;
 if (!arg_0)
 return;
 operatordelete(arg_0);
 return;
}


// Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ at 0x404658
long long std_forward_int_ptr_ref(void* a0)
{
 unsigned long v0; // x0

 return v0;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv at 0x40466c
void std__uniq_ptr_impl_int_default_delete___M_deleter(void* a0)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 std_get_1ul_int_ptr_default_delete(a0);
 return;
}


// Function: _ZSt3getILm1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ at 0x404690
long long std_get_1ul_int_ptr_default_delete(void* a0)
{
 unsigned long long v2; // x0
 unsigned long long v3; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = std___get_helper_1ul_default_delete(a0);
 return v2;
}


// Function: _ZSt12__get_helperILm1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x4046b4
void * std___get_helper_1ul_default_delete(void* a0, void* a1)
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = std__Tuple_impl_1ul_default_delete___M_head(a0);
 return (void*)v2;
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEE7_M_headERS2_ at 0x4046d8
void std__Tuple_impl_1ul_default_delete___M_head(void* a0, void* a1)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 std__Head_base_1ul_default_delete_true__M_head(a0);
 return;
}


// Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EE7_M_headERS2_ at 0x4046fc
long long std__Head_base_1ul_default_delete_true__M_head(void* a0)
{
 unsigned long v0; // x0

 return v0;
}


// Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv at 0x404710
long long std_unique_ptr_int_default_delete_get(void* a0)
{
 unsigned long long v3; // x0
 unsigned long long v0; // [bp-0x20]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 v3 = std__uniq_ptr_impl_int_default_delete___M_ptr_const(a0);
 return v3;
}


// Function: sub_404740 at 0x404740
void sub_404740()
{
 __clang_call_terminate(); /* do not return */
}


// Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv at 0x404744
long long std__uniq_ptr_impl_int_default_delete___M_ptr_const(void* a0)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]
 unsigned long long v2; // x0

 v0 = &v1;
 v2 = std_get_0ul_int_ptr_default_delete_const(a0);
 return v2;
}


// Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ at 0x40476c
long long std_get_0ul_int_ptr_default_delete_const(void* a0)
{
 unsigned long long v2; // x0
 unsigned long long v3; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = std___get_helper_0ul_int_ptr_default_delete_const(a0);
 return v2;
}


// Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x404790
int * const std___get_helper_0ul_int_ptr_default_delete_const(void* a0)
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = std__Tuple_impl_0ul_int_ptr_default_delete___M_head_const(a0);
 return (int * const)v2;
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERKS3_ at 0x4047b4
long long std__Tuple_impl_0ul_int_ptr_default_delete___M_head_const(void* a0)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return std__Head_base_0ul_int_ptr_false_const__M_head(a0);
}


// Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_ at 0x4047d8
long long std__Head_base_0ul_int_ptr_false_const__M_head(void* a0)
{
 unsigned long v0; // x0

 return v0;
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi at 0x4047ec
int std___uniq_ptr_data_int_array_default_delete___uniq_ptr_data(void* ptr, int *arg_0)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 std___uniq_ptr_impl_int_array_default_delete___uniq_ptr_impl(ptr, arg_0);
 return (int)ptr;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi at 0x404818
long long std___uniq_ptr_impl_int_array_default_delete___uniq_ptr_impl(void* a0, int* ptr_arg)
{
 unsigned long long *ptr; // x0
 unsigned long v3; // x1
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v3 = (unsigned long)ptr_arg;
 std_tuple_int_ptr_array_default_delete___tuple(a0);
 ptr = (unsigned long long *)std___uniq_ptr_impl_int_array_default_delete___M_ptr(a0);
 *(ptr) = v3;
 return (long long)ptr;
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv at 0x40485c
long long std_tuple_int_ptr_array_default_delete___tuple(void* a0)
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = std__Tuple_impl_0ul_int_ptr_array_default_delete___Tuple_impl(a0);
 return std__Tuple_impl_0ul_int_ptr_array_default_delete___Tuple_impl(a0);
}


// Function: sub_404884 at 0x404884
void sub_404884()
{
 __clang_call_terminate(); /* do not return */
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv at 0x404888
long long std___uniq_ptr_impl_int_array_default_delete___M_ptr(void* a0)
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = std_get_0ul_int_ptr_default_delete(a0);
 return std_get_0ul_int_ptr_default_delete(a0);
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEEC2Ev at 0x4048ac
int std__Tuple_impl_0ul_int_ptr_array_default_delete___Tuple_impl(void* a0)
{
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 std__Tuple_impl_1ul_default_delete___Tuple_impl(a0);
 std__Head_base_0ul_int_ptr_false___Head_base(a0);
 return (int)a0;
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEEC2Ev at 0x4048dc
long long std__Tuple_impl_1ul_default_delete___Tuple_impl(void* a0)
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = std__Head_base_1ul_default_delete_true___Head_base(a0);
 return std__Head_base_1ul_default_delete_true___Head_base(a0);
}


// Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EEC2Ev at 0x404900
int std__Head_base_1ul_default_delete_array_true___Head_base(void* a0)
{
 return 0;
}


// Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ at 0x404910
int ** std_get_0ul_int_ptr_array_default_delete(void* a0)
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = std___get_helper_0ul_int_ptr_array_default_delete(a0);
 return (int **)v2;
}


// Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE at 0x404934
int ** std___get_helper_0ul_int_ptr_array_default_delete(void* a0)
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = std__Tuple_impl_0ul_int_ptr_array_default_delete___M_head(a0);
 return v2;
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ at 0x404958
int ** std__Tuple_impl_0ul_int_ptr_array_default_delete___M_head(void* a0)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return (int **)std__Head_base_0ul_int_ptr_false__M_head(a0);
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv at 0x40497c
long long std_unique_ptr_int_array_default_delete_get_deleter(void* a0)
{
 unsigned long long v3; // x0
 unsigned long long v0; // [bp-0x20]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 v0 = std___uniq_ptr_impl_int_array_default_delete___M_deleter(a0);
 return v0;
}


// Function: sub_4049ac at 0x4049ac
void sub_4049ac()
{
 __clang_call_terminate(); /* do not return */
}


// Failed to decompile function _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_ at 0x4049b0
// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv at 0x4049ec
void std___uniq_ptr_impl_int_array_default_delete___M_deleter(void* a0)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 std_get_1ul_int_ptr_array_default_delete(a0);
 return;
}


// Function: _ZSt3getILm1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ at 0x404a10
long long std_get_1ul_int_ptr_array_default_delete(void* a0)
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = std___get_helper_1ul_default_delete_array(a0);
 return v2;
}


// Function: _ZSt12__get_helperILm1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x404a34
void* std___get_helper_1ul_default_delete_array(void* a0)
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = std__Tuple_impl_1ul_default_delete___M_head(a0);
 return (void*)v2;
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEE7_M_headERS3_ at 0x404a58
void* std__Tuple_impl_1ul_default_delete___M_head(void* a0)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return (void*)std__Head_base_1ul_default_delete_true__M_head(a0);
}


// Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EE7_M_headERS3_ at 0x404a7c
long long std__Head_base_1ul_default_delete_array_true___M_head(void* a0)
{
 unsigned long v0; // x0

 return v0;
}


// Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv at 0x404a90
void std_unique_ptr_int_array_default_delete_get(void* a0)
{
 unsigned long long v0; // [bp-0x20]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 v0 = std___uniq_ptr_impl_int_array_default_delete___M_ptr_const(a0);
 return;
}


// Function: sub_404ac0 at 0x404ac0
void sub_404ac0()
{
 __clang_call_terminate(); /* do not return */
}


// Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv at 0x404ac4
long long std___uniq_ptr_impl_int_array_default_delete___M_ptr_const(void* a0)
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = std_get_0ul_int_ptr_default_delete(a0);
 return *((long long *)v2);
}


// Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ at 0x404aec
int * const std_get_0ul_int_ptr_array_default_delete_const(void* a0)
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = std___get_helper_0ul_int_ptr_array_default_delete_const(a0);
 return v2;
}


// Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE at 0x404b10
int * const std___get_helper_0ul_int_ptr_array_default_delete_const(void* a0)
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = std__Tuple_impl_0ul_int_ptr_array_default_delete___M_head_const(a0);
 return v2;
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ at 0x404b34
int * const std__Tuple_impl_0ul_int_ptr_array_default_delete___M_head_const(void* a0)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return (int * const)std__Head_base_0ul_int_ptr_false__M_head(a0);
}


// Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE at 0x404b58
void* std_forward_int_ptr_ref_array(void* this, void* arg_0)
{
 return this;
}


// Function: _ZNSt10_Head_baseILm0EPiLb0EEC2IRS0_EEOT_ at 0x404b6c
int std__Head_base_0ul_int_ptr_false_int_star_ref(void* ptr, int *arg_0)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 *((long long *)ptr) = (unsigned long)arg_0;
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


