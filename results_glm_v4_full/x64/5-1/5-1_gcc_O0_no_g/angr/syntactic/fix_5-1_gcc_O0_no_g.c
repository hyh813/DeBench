// Angr Decompilation of 5-1_gcc_O0_no_g
// Platform: AMD64

#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <new>
#include <typeinfo>
#include <exception>
#include <tuple>
#include <memory>
#include <utility>
#include <unwind.h>

// Forward declarations for STL template classes used in decompiled code
namespace std {
  template<std::size_t __i, typename _Head, bool _IsEmpty> struct _Head_base;
  template<std::size_t __i, typename... _Types> class _Tuple_impl;
  template<typename... _Elements> class tuple;
  template<typename _Tp, typename _Dp> class unique_ptr;
  template<typename _Tp> class default_delete;
  template<typename _Tp> struct remove_reference;
  template<typename _Tp> struct enable_if;
}

/* CRT stub function _init removed by preprocessor */

class SimpleClass {
public:
 unsigned int value;
 char name[32];
 SimpleClass(unsigned int v, const char* n);
 unsigned int getValue();
 void setValue(unsigned int v);
 unsigned int compute(unsigned int v);
 static unsigned int getClassID();
};

class LifecycleClass {
public:
 unsigned int data;
 LifecycleClass(unsigned long long size);
 ~LifecycleClass();
 unsigned int getData(unsigned long index);
 static unsigned int getInstanceCount();
};

class Base {
public:
 virtual int virtual_func(int v);
 virtual const char* getName();
 virtual ~Base();
 Base();
};

class Derived : public Base {
public:
 unsigned int derived_value;
 Derived(unsigned int v);
 int virtual_func(int v) override;
 const char* getName() override;
};

class BaseA {
public:
 virtual void funcA();
 virtual ~BaseA();
 BaseA();
};

class BaseB {
public:
 virtual void funcB();
 virtual ~BaseB();
 BaseB();
};

class MultiDerived : public BaseA, public BaseB {
public:
 MultiDerived();
 void funcA() override;
 void funcB() override;
};

class VirtualBase {
public:
 virtual void func();
 virtual ~VirtualBase();
 VirtualBase();
};

class MiddleA : public virtual VirtualBase {
public:
 MiddleA();
 void func() override;
};

class MiddleB : public virtual VirtualBase {
public:
 MiddleB();
 void func() override;
};

class DiamondDerived : public MiddleA, public MiddleB {
public:
 DiamondDerived();
 void func() override;
};

class Point {
public:
 int x;
 int y;
 Point(int x, int y);
 Point operator+(const Point& other) const;
 bool operator==(const Point& other) const;
 Point& operator++();
};

template<typename T>
class Container {
public:
 T data[10];
 unsigned int size;
 Container();
 void push(T value);
 T get(int index);
 unsigned int getSize();
};

class RTTIBase {
public:
 virtual const char* getType();
 virtual ~RTTIBase();
 RTTIBase();
};

class RTTIDerivedA : public RTTIBase {
public:
 const char* getType() override;
 int derivedA_data();
};

class RTTIDerivedB : public RTTIBase {
public:
 const char* getType() override;
 int derivedB_data();
};

extern struct_0 *g_408fe8;

unsigned long long * _init()
{
 unsigned long long *v1; // rax

 v1 = g_408fe8;
 if (g_408fe8)
 v1 = g_408fe8();
 return v1;
}


// Function: sub_402020 at 0x402020
extern unsigned long long g_408f18;
extern unsigned long long g_408f20;

void sub_402020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_408f18;
 goto g_408f20;
}


// Function: sub_40202d at 0x40202d
void sub_40202d()
{
 sub_402030();
 return;
}


// Function: sub_402030 at 0x402030
void sub_402030()
{
 unsigned long long result; // [bp-0x8]

 result = 0;
 sub_402020();
 return;
}


// Function: sub_40203f at 0x40203f
void sub_40203f()
{
 sub_402040();
 return;
}


// Function: sub_402040 at 0x402040
void sub_402040()
{
 unsigned long long result; // [bp-0x8]

 result = 1;
 sub_402020();
 return;
}


// Function: sub_40204f at 0x40204f
void sub_40204f()
{
 sub_402050();
 return;
}


// Function: sub_402050 at 0x402050
void sub_402050()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 2;
 sub_402020();
 return;
}


// Function: sub_40205f at 0x40205f
void sub_40205f()
{
 sub_402060();
 return;
}


// Function: sub_402060 at 0x402060
void sub_402060()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 3;
 sub_402020();
 return;
}


// Function: sub_40206f at 0x40206f
void sub_40206f()
{
 sub_402070();
 return;
}


// Function: sub_402070 at 0x402070
void sub_402070()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 4;
 sub_402020();
 return;
}


// Function: sub_40207f at 0x40207f
void sub_40207f()
{
 sub_402080();
 return;
}


// Function: sub_402080 at 0x402080
void sub_402080()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 5;
 sub_402020();
 return;
}


// Function: sub_40208f at 0x40208f
void sub_40208f()
{
 sub_402090();
 return;
}


// Function: sub_402090 at 0x402090
void sub_402090()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 6;
 sub_402020();
 return;
}


// Function: sub_40209f at 0x40209f
void sub_40209f()
{
 sub_4020a0();
 return;
}


// Function: sub_4020a0 at 0x4020a0
void sub_4020a0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 7;
 sub_402020();
 return;
}


// Function: sub_4020af at 0x4020af
void sub_4020af()
{
 sub_4020b0();
 return;
}


// Function: sub_4020b0 at 0x4020b0
void sub_4020b0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 8;
 sub_402020();
 return;
}


// Function: sub_4020bf at 0x4020bf
void sub_4020bf()
{
 sub_4020c0();
 return;
}


// Function: sub_4020c0 at 0x4020c0
void sub_4020c0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 9;
 sub_402020();
 return;
}


// Function: sub_4020cf at 0x4020cf
void sub_4020cf()
{
 sub_4020d0();
 return;
}


// Function: sub_4020d0 at 0x4020d0
void sub_4020d0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 10;
 sub_402020();
 return;
}


// Function: sub_4020df at 0x4020df
void sub_4020df()
{
 sub_4020e0();
 return;
}


// Function: sub_4020e0 at 0x4020e0
void sub_4020e0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 11;
 sub_402020();
 return;
}


// Function: sub_4020ef at 0x4020ef
void sub_4020ef()
{
 sub_4020f0();
 return;
}


// Function: sub_4020f0 at 0x4020f0
void sub_4020f0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 12;
 sub_402020();
 return;
}


// Function: sub_4020ff at 0x4020ff
void sub_4020ff()
{
 sub_402100();
 return;
}


// Function: sub_402100 at 0x402100
void sub_402100()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 13;
 sub_402020();
 return;
}


// Function: sub_40210f at 0x40210f
void sub_40210f()
{
 sub_402110();
 return;
}


// Function: sub_402110 at 0x402110
void sub_402110()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 14;
 sub_402020();
 return;
}


// Function: sub_40211f at 0x40211f
void sub_40211f()
{
 sub_402120();
 return;
}


// Function: sub_402120 at 0x402120
void sub_402120()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 15;
 sub_402020();
 return;
}


// Function: sub_40212f at 0x40212f
void sub_40212f()
{
 sub_402130();
 return;
}


// Function: sub_402130 at 0x402130
void sub_402130()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 16;
 sub_402020();
 return;
}


// Function: sub_40213f at 0x40213f
void sub_40213f()
{
 sub_402140();
 return;
}


// Function: sub_402140 at 0x402140
void sub_402140()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 17;
 sub_402020();
 return;
}


// Function: sub_40214f at 0x40214f
void sub_40214f()
{
 sub_402150();
 return;
}


// Function: sub_402150 at 0x402150
void sub_402150()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 18;
 sub_402020();
 return;
}


// Function: sub_40215f at 0x40215f
void sub_40215f()
{
 sub_402160();
 return;
}


// Function: sub_402160 at 0x402160
void sub_402160()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 19;
 sub_402020();
 return;
}


// Function: sub_40216f at 0x40216f
void sub_40216f()
{
 sub_402170();
 return;
}


// Function: sub_402170 at 0x402170
void sub_402170()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 20;
 sub_402020();
 return;
}


// Function: sub_40217f at 0x40217f
void sub_40217f()
{
 __cxa_finalize();
 return;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_402305 at 0x402305
void sub_402305()
{
 [D] Unsupported jumpkind Ijk_SigTRAP at address 4203269()
}


// Function: sub_402306 at 0x402306
void sub_402306()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_402339 at 0x402339
void sub_402339()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_402379 at 0x402379
void sub_402379()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_4023b5 at 0x4023b5
void sub_4023b5()
{
}


// Function: sub_4023b9 at 0x4023b9
void sub_4023b9()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_4023c9 at 0x4023c9
void sub_4023c9()
{
 test_cpp_member_func();
 return;
}


// Function: _Z20test_cpp_member_funcv at 0x4023ca
void test_cpp_member_func()
{
 unsigned int v0; // [bp-0x44]
 unsigned int v1; // [bp-0x40]
 unsigned int v2; // [bp-0x3c]
 char v3; // [bp-0x38]

 SimpleClass::SimpleClass(&v3, 5, "Test");
 SimpleClass::setValue(&v3, 10);
 v0 = SimpleClass::getValue(&v3);
 v1 = SimpleClass::compute(&v3, 3);
 SimpleClass::getClassID();
 return;
}


// Function: _Z20test_cpp_constructorv at 0x40245c
void test_cpp_constructor()
{
 unsigned int v0; // [bp-0x2c]
 char v1; // [bp-0x28]

 v0 = 0;
 LifecycleClass::LifecycleClass(&v1, 5);
 v0 += (int)LifecycleClass::getData(&v1, 2);
 v0 += (int)LifecycleClass::getInstanceCount();
 v0 += (int)LifecycleClass::getInstanceCount() * 1000;
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x4024de
void call_virtual_func(void *arg_0, int arg_1)
{
 (*((long long *)*((long long *)&arg_0)))(arg_0, arg_1, arg_1, *((long long *)*((long long *)&arg_0)));
 return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x40250b
extern char g_408b50;

void test_cpp_virtual_func()
{
 unsigned long ptr; // fs
 unsigned int v0; // [bp-0x60]
 unsigned int v1; // [bp-0x5c]
 unsigned int v2; // [bp-0x58]
 unsigned int v3; // [bp-0x54]
 unsigned long v4; // [bp-0x50]
 Base *v5; // [bp-0x48]
 Base *v6; // [bp-0x40]
 char v7; // [bp-0x38]
 unsigned long v8; // [bp-0x20]

 v8 = *((long long *)(40 + ptr));
 v4 = &g_408b50;
 Derived::Derived(&v7, 3);
 v0 = Base::virtual_func(&v4, 5);
 v1 = Derived::virtual_func(&v7, 5);
 v5 = &v4;
 v6 = &v7;
 v2 = (unsigned long long)call_virtual_func(v5, 5);
 v3 = (unsigned long long)call_virtual_func(v6, 5);
 if (v8 == *((long long *)(40 + ptr)))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: sub_4025e1 at 0x4025e1
long long sub_4025e1()
{
 unsigned long long v1; // rax

 _Unwind_Resume(v1); /* do not return */
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x402616
void test_cpp_multiple_inheritance()
{
 unsigned long ptr; // fs
 unsigned int v0; // [bp-0x64]
 unsigned int v1; // [bp-0x60]
 unsigned int v2; // [bp-0x5c]
 char *v3; // [bp-0x58]
 char *v4; // [bp-0x50]
 char v5; // [bp-0x48]
 unsigned int v6; // [bp-0x40]
 char v7; // [bp-0x38]
 unsigned int v8; // [bp-0x30]
 unsigned long v9; // [bp-0x20]

 v9 = *((long long *)(40 + ptr));
 MultiDerived::MultiDerived(&v5);
 v6 = 100;
 v8 = 200;
 v3 = &v5;
 v4 = &v7;
 v0 = (*((long long *)*((long long *)&v5)))(v3);
 v1 = (*((long long *)*((long long *)&v7)))(v4);
 v2 = v3 != v4;
 if (v9 == *((long long *)(40 + ptr)))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: sub_4026ca at 0x4026ca
long long sub_4026ca()
{
 unsigned long long v1; // rax

 _Unwind_Resume(v1); /* do not return */
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x4026f3
void test_cpp_diamond_inheritance()
{
 unsigned long ptr; // fs
 unsigned int v0; // [bp-0x68]
 unsigned int v1; // [bp-0x64]
 char *v2; // [bp-0x60]
 char v3; // [bp-0x58]
 char v4; // [bp-0x38]
 unsigned int v5; // [bp-0x30]
 unsigned long v6; // [bp-0x20]

 v6 = *((long long *)(40 + ptr));
 DiamondDerived::DiamondDerived(&v3);
 v5 = 50;
 v2 = &v4;
 v0 = (*((long long *)*((long long *)&v4)))(v2);
 v5 = 100;
 v1 = (*((long long *)*((long long *)&v4)))(v2);
 if (v6 == *((long long *)(40 + ptr)))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: sub_402789 at 0x402789
long long sub_402789()
{
 unsigned long long v1; // rax

 _Unwind_Resume(v1); /* do not return */
}


// Function: _Z26test_cpp_operator_overloadv at 0x4027b2
void test_cpp_operator_overload()
{
 Point result; // [bp-0x29]
 Point v1; // [bp-0x28]
 Point v2; // [bp-0x20]

 Point::Point(&v1, 1, 2);
 Point::Point(&v2, 3, 4);
 Point::operator+(&result, &v1, &v2);
 Point::operator++(&result);
 if (!Point::operator==(&v1, &v2))
 return;
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x402864
void test_cpp_template_func()
{
 unsigned long long v5; // rdi
 unsigned long long v6; // rsi
 unsigned long long v7; // rdx
 unsigned long long v8; // rcx
 unsigned long long v9; // r8
 unsigned long long v10; // r9
 unsigned int v0; // [bp-0x24]
 unsigned int v1; // [bp-0x20]
 unsigned int v2; // [bp-0x1c]
 unsigned long long v3; // [bp-0x18]

 v2 = template_max_int(3, 7);
 template_max_double(v5, v6, v7, v8, v9, v10);
 v3 = 0x4004000000000000;
 v0 = 10;
 v1 = 20;
 template_swap_int(&v0, &v1, &v1);
 return;
}


// Function: _Z23test_cpp_template_classv at 0x402906
void test_cpp_template_class()
{
 unsigned int v0; // [bp-0xa8]
 unsigned int v1; // [bp-0xa4]
 unsigned long long v2; // [bp-0xa0]
 char v3; // [bp-0x98]
 char v4; // [bp-0x68]

 Container_Container(&v3);
 Container_push(&v3, 10);
 Container_push(&v3, 20);
 Container_push(&v3, 30);
 v0 = Container_get(&v3, 0);
 v1 = Container_getSize(&v3);
 Container_double_Container(&v4);
 Container_double_push(&v4);
 Container_double_get(&v4, 0);
 v2 = 4614253070214989087;
 return;
}


// Function: sub_402a11 at 0x402a11
void sub_402a11(unsigned long a0, unsigned long a1)
{
 lambda_operator_int();
 return;
}


// Function: _ZZ15test_cpp_lambdavENKUliE_clEi at 0x402a12
typedef struct lambda_capture_struct {
 unsigned int field_0;
 char padding_4[4];
 struct lambda_capture_inner *field_8;
} lambda_capture_struct;

typedef struct lambda_capture_inner {
 unsigned int field_0;
} lambda_capture_inner;

int lambda_operator_int(lambda_capture_struct *idx, unsigned int a1)
{
 idx->field_8->field_0 = idx->field_8->field_0 + 5;
 return idx->field_8->field_0 + a1 * idx->field_0;
}


// Function: _Z15test_cpp_lambdav at 0x402a4e
void test_cpp_lambda()
{
 unsigned int v0; // [bp-0x38]
 unsigned int v1; // [bp-0x34]
 unsigned int v2; // [bp-0x30]
 unsigned int v3; // [bp-0x2c]
 unsigned int v4; // [bp-0x28]
 char *v5; // [bp-0x20]

 v1 = 10;
 v0 = 20;
 v4 = v1;
 v5 = &v0;
 v2 = lambda_operator_int(&v4, 3);
 v3 = 30;
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x402abe
extern unsigned long long CXXABI_1_3::_ZTIi;

void test_cpp_exception()
{
 unsigned int *ptr; // rax
 unsigned int result; // [bp-0x34]

 result = 0;
 ptr = __cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxa_throw(ptr, &CXXABI_1_3::_ZTIi, 0, &CXXABI_1_3::_ZTIi);
 return;
}


// Function: sub_402b03 at 0x402b03
extern unsigned long long _ZTIZ18test_cpp_exceptionvE16DerivedException;

long long sub_402b03(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
 unsigned long long result; // rdx
 unsigned long long v4; // rax
 unsigned long long v5; // rcx
 unsigned long long v6; // r8
 unsigned long long v7; // r9
 unsigned long long v8; // rax
 unsigned long long v9; // rdx
 void* ptr; // rbp
 unsigned long long ptr; // rax
 unsigned long v12; // rax
 unsigned int v1; // [bp+0xfffdc]
 unsigned int v2; // [bp+0xfffe0]

 result = a2;
 if (result == 1)
 {
 v2 = *((int *)__cxa_begin_catch(v4));
 v1 = *((int *)(vvar_10{r56|8b} - 44)) + *((int *)(vvar_10{r56|8b} - 40));
 v8 = __cxa_rethrow(a0, a1, a2, v5, v6, v7);
 __cxa_end_catch(a0, a1, a2, v5, v6, v7);
 result = v9;
 }
 if (result != 1)
 _Unwind_Resume(v8); /* do not return */
 *((int *)&ptr[36]) = *((int *)__cxa_begin_catch(v8));
 *((unsigned int *)&ptr[44]) = (int)ptr[44] + (int)ptr[36] * 2;
 __cxa_end_catch(a0, a1, a2, v5, v6, v7);
 ptr = __cxa_allocate_exception(1);
 v12 = __cxa_throw(ptr, &_ZTIZ18test_cpp_exceptionvE16DerivedException, 0, ptr);
 if (v9 != 2)
 {
 if (v9 != 3)
 _Unwind_Resume(v12); /* do not return */
 *((unsigned long long *)&ptr[32]) = __cxa_begin_catch(v12);
 *((unsigned int *)&ptr[44]) = (int)ptr[44] + 200;
 __cxa_end_catch(a0, a1, a2, v5, v6, v7);
 }
 else
 {
 *((unsigned long long *)&ptr[24]) = __cxa_begin_catch(v12);
 *((unsigned int *)&ptr[44]) = (int)ptr[44] + 100;
 __cxa_end_catch(a0, a1, a2, v5, v6, v7);
 }
}


// Function: sub_402be3 at 0x402be3
void sub_402be3(unsigned long a0, unsigned long a1)
{
 smart_ptr_lambda_operator();
 return;
}


// Function: _ZZ18test_cpp_smart_ptrvENKUlPiE_clES_ at 0x402be4
void smart_ptr_lambda_operator(void* this_ptr, unsigned int *ptr)
{
 *(ptr) = 4294967295;
 if (ptr) {
 delete ptr;
 ptr = NULL;
 }
}


// Function: _Z18test_cpp_smart_ptrv at 0x402c17
void test_cpp_smart_ptr()
{
 unsigned long ptr6; // fs
 unsigned int *p; // rax
 unsigned long long v12; // rax
 unsigned int ptr3[5]; // rax
 unsigned int ptr4[5]; // rax
 unsigned int ptr5[5]; // rax
 unsigned int ptr[5]; // rax
 unsigned int *addr; // rax
 char v0; // [bp-0x4d]
 unsigned int v1; // [bp-0x4c]
 unsigned int v2; // [bp-0x48]
 unsigned int v3; // [bp-0x44]
 char v4; // [bp-0x40]
 char v5; // [bp-0x38]
 char v6; // [bp-0x30]
 char v7; // [bp-0x28]
 unsigned long v8; // [bp-0x20]

 v8 = *((long long *)(40 + ptr6));
 p = operatornew(4);
 *(p) = 100;
 unique_ptr_int_int(&v4, p, &v4);
 *((unsigned int *)unique_ptr_operator_int(&v4)) = 200;
 v12 = move_unique_ptr(&v4);
 unique_ptr_int_int_copy(&v5, v12, v12);
 v1 = *((int *)unique_ptr_operator_int(&v5));
 ptr3 = operatornew[](20);
 ptr3[0] = 1;
 ptr4 = &ptr3[1];
 ptr4[0] = 2;
 ptr5 = &ptr4[1];
 ptr5[0] = 3;
 ptr = &ptr5[1];
 ptr[0] = 4;
 ptr[1] = 5;
 unique_ptr_int_array(&v6, ptr3, ptr3);
 v2 = *((int *)unique_ptr_operator_int_array(&v6, 2));
 addr = operatornew(4);
 *(addr) = 500;
 unique_ptr_int_lambda(&v7, addr, &v0, &v7);
 v3 = *((int *)unique_ptr_operator_int_lambda(&v7));
 if (v8 == *((long long *)(40 + ptr6)))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: sub_402d7b at 0x402d7b
long long sub_402d7b()
{
 unsigned long long v1; // rax

 _Unwind_Resume(v1); /* do not return */
}


// Function: sub_402d90 at 0x402d90
void sub_402d90()
{
}


// Function: _Z13test_cpp_rttiv at 0x402dc5
extern unsigned long long _ZTI12RTTIDerivedA;
extern unsigned long long _ZTI12RTTIDerivedB;
extern unsigned long long _ZTI8RTTIBase;

void test_cpp_rtti()
{
 void* *ptr; // rbx
 void* *p; // rbx
 void* *v10; // rax
 unsigned int cur; // [bp-0x3c]
 void* *result; // [bp-0x38]
 void* *flag1; // [bp-0x30]
 unsigned long long v3; // [bp-0x28]
 unsigned long long v4; // [bp-0x20]

 ptr = operatornew(8);
 *(ptr) = NULL;
 RTTIDerivedA::RTTIDerivedA(ptr);
 result = ptr;
 p = operatornew(8);
 *(p) = NULL;
 RTTIDerivedB::RTTIDerivedB(p);
 flag1 = p;
 cur = 0;
 if (!result)
 {
 __cxa_bad_typeid();
 }
 else if (!(std::type_info::operator==((long long)((*(void **)result))[1], &_ZTI12RTTIDerivedA, &_ZTI12RTTIDerivedA) & 255))
 {
 goto LABEL_402e4a;
 }
 cur += 10;
LABEL_402e4a:
 if (!flag1)
 {
 __cxa_bad_typeid();
 }
 else if (!(std::type_info::operator==((long long)((*(void **)flag1))[1], &_ZTI12RTTIDerivedB, &_ZTI12RTTIDerivedB) & 255))
 {
 goto LABEL_402e7b;
 }
 cur += 20;
LABEL_402e7b:
 v3 = (!result ? NULL : __dynamic_cast(result, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, NULL));
 if (v3)
 cur += RTTIDerivedA::derivedA_data(v3);
 v4 = (!flag1 ? NULL : __dynamic_cast(flag1, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedB, NULL));
 if (v4)
 cur += RTTIDerivedB::derivedB_data(v4);
 if (result)
 {
 cur += (unsigned int)strlen(std::type_info::name((long long)((*(void **)result))[1]));
 v10 = result;
 if (!v10)
 goto LABEL_402f4e;
 }
 else
 {
 v10 = NULL;
 }
LABEL_402f4e:
 if (flag1)
 ((void (*)(void*))((*(void **)flag1))[1])(flag1);
LABEL_402f4e:
 if (flag1)
 (long long)(*(flag1))[8](flag1);
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x402f6f
extern char g_405040;
extern char g_405064;
extern char g_405082;
extern char g_40509e;
extern char g_4050ba;
extern char g_4050d6;
extern char g_4050f3;
extern char g_40510f;
extern char g_40512b;
extern char g_405147;
extern char g_405163;
extern char g_405180;
extern char g_40519d;

void test_cpp_oo_features()
{
 puts(&g_405040);
 printf(&g_405064, (unsigned long long)test_cpp_member_func() & 4294967295);
 printf(&g_405082, (unsigned long long)test_cpp_constructor() & 4294967295);
 printf(&g_40509e, (unsigned long long)test_cpp_virtual_func() & 4294967295);
 printf(&g_4050ba, (unsigned long long)test_cpp_multiple_inheritance() & 4294967295);
 printf(&g_4050d6, (unsigned long long)test_cpp_diamond_inheritance() & 4294967295);
 printf(&g_4050f3, (unsigned long long)test_cpp_operator_overload() & 4294967295);
 printf(&g_40510f, (unsigned long long)test_cpp_template_func() & 4294967295);
 printf(&g_40512b, (unsigned long long)test_cpp_template_class() & 4294967295);
 printf(&g_405147, (unsigned long long)test_cpp_lambda() & 4294967295);
 printf(&g_405163, (unsigned long long)test_cpp_exception() & 4294967295);
 printf(&g_405180, (unsigned long long)test_cpp_smart_ptr() & 4294967295);
 printf(&g_40519d, (unsigned long long)test_cpp_rtti() & 4294967295);
 return;
}


// Function: main at 0x4030cd
unsigned int main()
{
 test_cpp_oo_features();
 return 0;
}


// Function: sub_4030e1 at 0x4030e1
void sub_4030e1(unsigned long a0, unsigned long a1, unsigned long a2)
{
 std::__uniq_ptr_data<int, test_cpp_smart_ptr()::'lambda'(int*), true, false>::__uniq_ptr_data<test_cpp_smart_ptr()::'lambda'(int*) const&>(int*, test_cpp_smart_ptr()::'lambda'(int*) const&)();
 return;
}


// Function: _ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvEUlPiE_E_Lb1ELb0EECI1St15__uniq_ptr_implIiS1_EIRKS1_EES0_OT_ at 0x4030e2
long long uniq_ptr_data_int_lambda(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
 return uniq_ptr_impl_int_lambda_init(a0, a1, a2);
}


// Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E_EC2IS1_vEES0_RKS1_ at 0x403110
void unique_ptr_int_lambda_init(char *a0, unsigned int *a1, char *a2)
{
 uniq_ptr_data_int_lambda((unsigned long long)a0, (unsigned long long)a1, (unsigned long long)a2);
}


// Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E_ED2Ev at 0x40313e
unsigned long long * unique_ptr_int_lambda_dtor(unsigned long long a0)
{
 unsigned long long v2; // rbx
 unsigned int **v3; // rax
 unsigned long long *ptr; // [bp-0x20]

 ptr = std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::'lambda'(int*)>::_M_ptr()(a0);
 if (*(ptr))
 {
 v2 = std::unique_ptr<int, test_cpp_smart_ptr()::'lambda'(int*)>::get_deleter()(a0);
 v3 = std::move<int*&>(ptr);
 test_cpp_smart_ptr()::'lambda'(int*)::operator()(int*) const(v2, *(v3));
 }
 *(ptr) = 0;
 return ptr;
}


// Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E_EdeEv at 0x4031a2
long long unique_ptr_operator_int_lambda(unsigned long long v1)
{
 return std::unique_ptr<int, test_cpp_smart_ptr()::'lambda'(int*)>::get() const(v1);
}


// Function: sub_4031c3 at 0x4031c3
void sub_4031c3(unsigned long a0, unsigned long a1, unsigned long a2)
{
 uniq_ptr_impl_int_lambda_init();
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E_EC2IRKS1_EES0_OT_ at 0x4031c4
long long uniq_ptr_impl_int_lambda_init(unsigned long long a0, unsigned long a1, unsigned long long a2)
{
 unsigned long v0; // [bp-0x28]

 v0 = a1;
 return tuple_int_ptr_lambda((long long)a0);
}


// Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E_E6_M_ptrEv at 0x403202
long long std_M_ptr_lambda(unsigned long long a0)
{
 return get_0_int_ptr_lambda(a0);
}


// Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E_E11get_deleterEv at 0x40321c
long long get_deleter_lambda(unsigned long long a0)
{
 return std_M_deleter_lambda(a0);
}


// Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E_E3getEv at 0x403236
long long get_const_lambda(unsigned long long a0)
{
 return std_M_ptr_const_lambda(a0);
}


// Function: _ZSt7forwardIRKZ18test_cpp_smart_ptrvEUlPiE_E_EOT_RNSt16remove_referenceIS4_E4typeE at 0x403250
unsigned long long forward_lambda_ref(unsigned long long a0)
{
 return a0;
}

// Function: _ZSt7forwardIiEOT_RNSt16remove_referenceIS1_E4typeE at 0x404000
int forward_int(int& a0)
{
 return a0;
}

// Function: _ZSt7forwardIiEOT_RNSt16remove_referenceIS1_E4typeE at 0x404001
int forward_int_ref(int& a0)
{
 return a0;
}

// Function: _ZSt4moveIRiEONSt16remove_referenceIT_E4typeEOS2_ at 0x404002
int& move_int_ref(int& a0)
{
 return a0;
}

// Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ at 0x404412
int* move_int_ptr_ref(int* a0)
{
 return a0;
}


// Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_RKS1_Lb1EEEOT_OT0_ at 0x40325e
long long tuple_int_ptr_lambda(long long a0, unsigned long long a1, unsigned long long a2)
{
 unsigned long long v2;

 v2 = forward_lambda_ref(a2);
 Tuple_impl_0_int_ptr_lambda_init(a0, a1, v2);
 return Tuple_impl_0_int_ptr_lambda_init(a0, a1, v2);
}


// Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ at 0x4032ac
long long get_0_int_ptr_lambda(unsigned long long a0)
{
 return std_M_head_impl_0(a0);
}


// Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E_E10_M_deleterEv at 0x4032c6
long long std_M_deleter_lambda(unsigned long long a0)
{
 return get_1_int_ptr_lambda(a0);
}


// Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E_E6_M_ptrEv at 0x4032e0
long long std_M_ptr_const_lambda(unsigned long long a0)
{
 return *((long long *)std_get_0_int_ptr_lambda_const(a0));
}


// Function: sub_4032fd at 0x4032fd
void sub_4032fd(unsigned long a0, unsigned long a1, unsigned long a2)
{
 Tuple_impl_0_int_ptr_lambda();
 return;
}


// Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_JRKS1_EvEEOT_DpOT0_ at 0x4032fe
long long Tuple_impl_0_int_ptr_lambda_init(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
 unsigned long long v1;

 v1 = forward_lambda_ref(a2);
 Tuple_impl_1_lambda(a0, v1);
 return _Head_base_0_int_init(a0, a1);
}


// Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x403353
long long get_helper_0_int_ptr_lambda(unsigned long long a0)
{
 return std_M_head_impl_0(a0);
}


// Function: _ZSt3getILm1EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ at 0x40336d
long long std_get_1_int_ptr_lambda(unsigned long long a0)
{
 return get_helper_1_lambda(a0);
}


// Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ at 0x403387
long long std_get_0_int_ptr_lambda_const(unsigned long long a0)
{
 return get_helper_0_int_ptr_lambda_const(a0);
}


// Function: sub_4033a1 at 0x4033a1
void sub_4033a1(unsigned long a0, unsigned long a1)
{
 Tuple_impl_1_lambda(a0, a1);
 return;
}


// Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvEUlPiE_E_EEC2ERKS1_ at 0x4033a2
long long Tuple_impl_1_lambda(unsigned long long _this_ptr, unsigned long long a1)
{
 return _Head_base_1_lambda_init(_this_ptr, a1);
}


// Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERS2_ at 0x4033c8
long long std_M_head_impl_0(unsigned long long _this_ptr)
{
	return _this_ptr;
}


// Function: _ZSt12__get_helperILm1EZ18test_cpp_smart_ptrvEUlPiE_E_JEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x4033e2
long long get_helper_1_lambda(unsigned long long _this_ptr)
{
 return Tuple_impl_1_M_head(_this_ptr);
}


// Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x4033fc
long long get_helper_0_int_ptr_lambda_const(unsigned long long _this_ptr)
{
	return _Head_base_0_M_head(_this_ptr);
}


// Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvEUlPiE_E_Lb1EEC2ERKS1_ at 0x403416
long long _Head_base_1_lambda_init(unsigned long _this_ptr, unsigned long a1)
{
	return _this_ptr;
}


// Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvEUlPiE_E_EE7_M_headERS2_ at 0x403425
long long Tuple_impl_1_M_head(unsigned long long _this_ptr)
{
	return _Head_base_1_M_head(_this_ptr);
}


// Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERKS2_ at 0x40343f
long long std_M_head_impl_0_const(void* _this_ptr)
{
	return *(long long*)_this_ptr;
}


// Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvEUlPiE_E_Lb1EE7_M_headERS2_ at 0x403459
long long _Head_base_1_M_head(unsigned long _this_ptr)
{
	return _this_ptr;
}


// Function: _Z41__static_initialization_and_destruction_0ii at 0x403467
extern char _ZNSt8ios_base4InitD1Ev;
extern void _ZStL8__ioinit;
extern unsigned long long __dso_handle;

void __static_initialization_and_destruction_0(int arg_0, int arg_1)
{
 if (arg_0 != 1)
 {
 return;
 }
 else if (arg_1 == 65535)
 {
 std::ios_base::Init::Init(&_ZStL8__ioinit);
 __cxa_atexit(&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
 return;
 }
 else
 {
 return;
 }
}


// Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv at 0x4034bd
void _GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 __static_initialization_and_destruction_0(1, 65535);
 return;
}


// Function: _ZNKSt9type_info4nameEv at 0x4034d6
const char* std_type_info_name(void* ptr)
{
	// Stub implementation
	return "type_info_name";
}


// Function: sub_403509 at 0x403509
void sub_403509(unsigned long a0, unsigned long a1)
{
 std::type_info::operator==();
 return;
}


// Function: _ZNKSt9type_infoeqERKS_ at 0x40350a
int std_type_info_eq(void* ptr1, void* arg_0)
{
	if ((long long)((char**)ptr1)[1] != (long long)((char**)arg_0)[1])
		return 0;
	return 1;
}


// Function: sub_40356f at 0x40356f
void sub_40356f(unsigned long a0, unsigned long a1, unsigned long a2)
{
 SimpleClass::SimpleClass();
 return;
}


// Function: _ZN11SimpleClassC2EiPKc at 0x403570
typedef struct SimpleClass_struct {
 unsigned int field_0;
 char padding_4[31];
 char field_23;
} SimpleClass_struct;

long long SimpleClass_SimpleClass(void *self, unsigned int v2, char *v3)
{
 strncpy(&((SimpleClass_struct*)self)->padding_4, v3, 31);
 ((SimpleClass_struct*)self)->field_23 = 0;
 return (long long)self;
}


// Function: sub_4035b7 at 0x4035b7
void sub_4035b7(unsigned long a0)
{
 SimpleClass::getValue();
 return;
}


// Function: _ZNK11SimpleClass8getValueEv at 0x4035b8
long long SimpleClass_getValue(unsigned int *v1)
{
 return *(v1);
}


// Function: _ZN11SimpleClass8setValueEi at 0x4035cc
long long SimpleClass_setValue(unsigned int *ptr, unsigned int v2)
{
 *(ptr) = v2;
 return (long long)ptr;
}


// Function: sub_4035e7 at 0x4035e7
void sub_4035e7(unsigned long a0, unsigned long a1)
{
 SimpleClass::compute();
 return;
}


// Function: _ZNK11SimpleClass7computeEi at 0x4035e8
long long SimpleClass_compute(unsigned int *v1, unsigned int v3)
{
 unsigned long long len;

 len = strlen((char*)(v1 + 1));
 return len + v3 * *(v1);
}


// Function: _ZN11SimpleClass10getClassIDEv at 0x403620
void SimpleClass_getClassID(void* this_ptr)
{
 return;
}


// Function: sub_40362f at 0x40362f
void sub_40362f(unsigned long a0, unsigned long a1)
{
 LifecycleClass::LifecycleClass();
 return;
}


// Function: _ZN14LifecycleClassC1Em at 0x403630
extern unsigned int _ZN14LifecycleClass14instance_countE;

long long LifecycleClass_LifecycleClass(void *ptr, unsigned long long v3)
{
 unsigned long long i; // [bp-0x10]

 if (v3 <= 2305843009213693950)
 {
 *((unsigned long long *)ptr) = operatornew[](v3 * 4);
 i = 0;
 }
 else
 {
 __cxa_throw_bad_array_new_length();
 }
 for (; i < v3; i += 1)
 {
 *((unsigned int *)(i * 4 + *((unsigned long long *)ptr))) = (unsigned int)i * 10;
 }
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
 return _ZN14LifecycleClass14instance_countE + 1;
}


// Function: _ZN14LifecycleClassD1Ev at 0x4036d0
extern unsigned int _ZN14LifecycleClass14instance_countE;

int LifecycleClass_D1(void* this)
{
 if (*((long long *)this))
 operatordelete[](*((long long *)this));
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
 return 0;
}


// Function: sub_40370d at 0x40370d
void sub_40370d(unsigned long a0, unsigned long a1)
{
 LifecycleClass::getData();
 return;
}


// Function: _ZNK14LifecycleClass7getDataEm at 0x40370e
long long LifecycleClass_getData(void *this, unsigned long v1)
{
 unsigned long long *v2; // rdi

 v2 = (unsigned long long *)this;
 return (v1 < v2[1] ? *((int *)(v1 * 4 + *(v2))) : 4294967295);
}


// Function: _ZN14LifecycleClass16getInstanceCountEv at 0x403749
extern unsigned int _ZN14LifecycleClass14instance_countE;

long long LifecycleClass_getInstanceCount()
{
 return _ZN14LifecycleClass14instance_countE;
}


// Function: sub_403759 at 0x403759
void sub_403759(unsigned long a0, unsigned long a1)
{
 Base::virtual_func();
 return;
}


// Function: _ZN4Base12virtual_funcEi at 0x40375a
long long Base_virtual_func(void *this, unsigned int v1)
{
 return v1 + 1;
}


// Function: sub_403771 at 0x403771
void sub_403771(unsigned long a0)
{
 Base::getName();
 return;
}


// Function: _ZNK4Base7getNameEv at 0x403772
void Base_getName(void* ptr)
{
 return;
}


// Function: sub_403787 at 0x403787
void sub_403787(unsigned long a0)
{
 return;
}


// Function: _ZN4BaseD1Ev at 0x403788
extern char g_408b50;

int Base_D1(void* ptr)
{
 *((char **)ptr) = &g_408b50;
 return 0;
}


// Function: sub_4037a5 at 0x4037a5
void sub_4037a5(unsigned long a0)
{
 return;
}


// Function: _ZN4BaseD0Ev at 0x4037a6
int Base_D0(void* this)
{
 operatordelete(this, 8);
 return 0;
}


// Function: sub_4037d5 at 0x4037d5
void sub_4037d5(unsigned long a0)
{
 Base::Base();
 return;
}


// Function: _ZN4BaseC2Ev at 0x4037d6
extern char g_408b50;

int Base_C2(void* ptr)
{
 *((char **)ptr) = &g_408b50;
 return 0;
}


// Function: sub_4037f3 at 0x4037f3
void sub_4037f3(unsigned long a0, unsigned long a1)
{
 Derived::Derived();
 return;
}


// Function: _ZN7DerivedC1Ei at 0x4037f4
typedef struct Derived_struct {
 char padding_0[8];
 unsigned int field_8;
} Derived_struct;

extern char g_408b20;

long long Derived_Derived(Derived_struct *self, unsigned int v2)
{
 Base_C2(self);
 *((char **)&self->padding_0[0]) = &g_408b20;
 self->field_8 = v2;
 return (long long)self;
}


// Function: _ZN7Derived12virtual_funcEi at 0x40382e
typedef struct struct_0 {
 char padding_0[8];
 unsigned int field_8;
} struct_0;

long long Derived_virtual_func(unsigned int v1, Derived_struct *self)
{
 return v1 * self->field_8;
}


// Function: _ZNK7Derived7getNameEv at 0x40384a
void Derived_getName(void* ptr)
{
 return;
}


// Function: sub_40385f at 0x40385f
void sub_40385f(unsigned long a0)
{
 BaseA::funcA();
 return;
}


// Function: _ZN5BaseA5funcAEv at 0x403860
void BaseA_funcA(void* ptr)
{
 return;
}


// Function: sub_403873 at 0x403873
void sub_403873(unsigned long a0)
{
 return;
}


// Function: _ZN5BaseAD2Ev at 0x403874
extern char g_408af8;

int BaseA_dtor(void* this_ptr)
{
	*((char **)this_ptr) = &g_408af8;
	return 0;
}


// Function: sub_403891 at 0x403891
void sub_403891(unsigned long a0)
{
 return;
}


// Function: _ZN5BaseAD0Ev at 0x403892
int BaseA_dtor2(void* this_ptr)
{
	operator delete(this_ptr, 16);
	return 0;
}


// Function: sub_4038c1 at 0x4038c1
void sub_4038c1(unsigned long a0)
{
 BaseB::funcB();
 return;
}


// Function: _ZN5BaseB5funcBEv at 0x4038c2
void BaseB_funcB(void* ptr)
{
 return;
}


// Function: sub_4038d5 at 0x4038d5
void sub_4038d5(unsigned long a0)
{
 return;
}


// Function: _ZN5BaseBD1Ev at 0x4038d6
extern char g_408ad0;

int BaseB_D1(void* ptr)
{
 *((char **)ptr) = &g_408ad0;
 return 0;
}


// Function: sub_4038f3 at 0x4038f3
void sub_4038f3(unsigned long a0)
{
 return;
}


// Function: _ZN5BaseBD0Ev at 0x4038f4
int BaseB_D0(void* this)
{
 operatordelete(this, 16);
 return 0;
}


// Function: sub_403923 at 0x403923
void sub_403923(unsigned long a0)
{
 MultiDerived::funcA();
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x403924
void MultiDerived_funcA(void* ptr)
{
 return;
}


// Function: sub_403937 at 0x403937
void sub_403937(unsigned long a0)
{
 MultiDerived::funcB();
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x403938
void MultiDerived_funcB(void* ptr)
{
 return;
}


// Function: _ZThn16_N12MultiDerived5funcBEv at 0x40394b
void non_virtual_thunk_to_MultiDerived_funcB(void* a0)
{
 MultiDerived_funcB((char*)a0 - 16);
 return;
}


// Function: sub_403955 at 0x403955
void sub_403955(unsigned long a0)
{
 BaseA::BaseA();
 return;
}


// Function: _ZN5BaseAC1Ev at 0x403956
extern char g_408af8;

int BaseA_ctor(void* this_ptr)
{
	*((char **)this_ptr) = &g_408af8;
	return 0;
}


// Function: sub_403973 at 0x403973
void sub_403973(unsigned long a0)
{
 BaseB::BaseB();
 return;
}


// Function: _ZN5BaseBC2Ev at 0x403974
extern char g_408ad0;

int BaseB_C2(void* ptr)
{
 *((char **)ptr) = &g_408ad0;
 return 0;
}


// Function: sub_403991 at 0x403991
void sub_403991(unsigned long a0)
{
 MultiDerived::MultiDerived();
 return;
}


// Function: _ZN12MultiDerivedC2Ev at 0x403992
extern char g_408a78;
extern char g_408aa8;

long long MultiDerived_MultiDerived(void* ptr)
{
 BaseA_C1(ptr);
 BaseB_C2((char*)ptr + 16);
 *((char **)ptr) = &g_408a78;
 *((char **)((char*)ptr + 16)) = &g_408aa8;
 return (long long)ptr;
}


// Function: _ZN11VirtualBase4funcEv at 0x4039de
void VirtualBase_func(void* ptr)
{
 return;
}


// Function: sub_4039f1 at 0x4039f1
void sub_4039f1(unsigned long a0)
{
 return;
}


// Function: _ZN11VirtualBaseD2Ev at 0x4039f2
extern char g_408a50;

int VirtualBase_dtor(void* this_ptr)
{
	*((char **)this_ptr) = &g_408a50;
	return 0;
}


// Function: sub_403a0f at 0x403a0f
void sub_403a0f(unsigned long a0)
{
 return;
}


// Function: _ZN11VirtualBaseD0Ev at 0x403a10
int VirtualBase_dtor2(void* this_ptr)
{
	operator delete(this_ptr, 16);
	return 0;
}


// Function: sub_403a3f at 0x403a3f
void sub_403a3f(unsigned long a0)
{
 MiddleA::func();
 return;
}


// Function: _ZN7MiddleA4funcEv at 0x403a40
void MiddleA_func(void* ptr)
{
 return;
}


// Function: _ZTv0_n24_N7MiddleA4funcEv at 0x403a6e
void thunk_to_MiddleA_func(void* *a0)
{
 MiddleA_func((char *)a0 + (*(a0))[24]);
 return;
}


// Function: sub_403a7b at 0x403a7b
void sub_403a7b(unsigned long a0)
{
 MiddleB::func();
 return;
}


// Function: _ZN7MiddleB4funcEv at 0x403a7c
void MiddleB_func(void* ptr)
{
 return;
}


// Function: _ZTv0_n24_N7MiddleB4funcEv at 0x403aaa
void thunk_to_MiddleB_func(void* *a0)
{
 MiddleB_func((char *)a0 + (*(a0))[24]);
 return;
}


// Function: sub_403ab7 at 0x403ab7
void sub_403ab7(unsigned long a0)
{
 DiamondDerived::func();
 return;
}


// Function: _ZN14DiamondDerived4funcEv at 0x403ab8
void DiamondDerived_func(void* ptr)
{
 return;
}


// Function: _ZTv0_n24_N14DiamondDerived4funcEv at 0x403ae6
void thunk_to_DiamondDerived_func(void* *a0)
{
 DiamondDerived_func((char *)a0 + (*(a0))[24]);
 return;
}


// Function: _ZThn16_N14DiamondDerived4funcEv at 0x403af3
void non_virtual_thunk_to_DiamondDerived_func(void* a0)
{
 DiamondDerived_func((char*)a0 - 16);
 return;
}


// Function: sub_403afd at 0x403afd
void sub_403afd(unsigned long a0)
{
 VirtualBase::VirtualBase();
 return;
}


// Function: _ZN11VirtualBaseC1Ev at 0x403afe
extern char g_408a50;

int VirtualBase_ctor(void* this_ptr)
{
	*((char **)this_ptr) = &g_408a50;
	return 0;
}


// Function: sub_403b1b at 0x403b1b
void sub_403b1b(unsigned long a0, unsigned long a1)
{
 MiddleA::MiddleA();
 return;
}


// Function: _ZN7MiddleAC2Ev at 0x403b1c
int MiddleA_C2(void* ptr, unsigned long long *idx)
{
 *((unsigned long long *)ptr) = idx[0];
 *((unsigned long long *)(*((long long *)(*((long long *)ptr) - 24)) + (char *)ptr)) = idx[1];
 return 0;
}


// Function: _ZN7MiddleAD2Ev at 0x403b60
void MiddleA_D2(void* ptr, unsigned long long *idx)
{
 *((unsigned long long *)ptr) = idx[0];
 *((unsigned long long *)(*((long long *)(*((long long *)ptr) - 24)) + (char *)ptr)) = idx[1];
}


// Function: _ZN7MiddleBC2Ev at 0x403ba4
void MiddleB_C2(void* ptr, unsigned long long *idx)
{
 *((unsigned long long *)ptr) = idx[0];
 *((unsigned long long *)(*((long long *)(*((long long *)ptr) - 24)) + (char *)ptr)) = idx[1];
}


// Function: _ZN7MiddleBD2Ev at 0x403be8
void MiddleB_D2(void* ptr, unsigned long long *idx)
{
 *((unsigned long long *)ptr) = idx[0];
 *((unsigned long long *)(*((long long *)(*((long long *)ptr) - 24)) + (char *)ptr)) = idx[1];
}


// Function: _ZN14DiamondDerivedC1Ev at 0x403c2c
extern char g_4088b8;
extern char g_4088e8;
extern char g_408920;

long long DiamondDerived_DiamondDerived(void* ptr)
{
 unsigned long long idx[2];
 VirtualBase_C1((char*)ptr + 32);
 MiddleA_C2(ptr, idx);
 MiddleB_C2((char*)ptr + 16, idx);
 *((char **)ptr) = &g_4088b8;
 *((char **)((char*)ptr + 32)) = &g_408920;
 *((char **)((char*)ptr + 16)) = &g_4088e8;
 return (long long)ptr;
}


// Function: _ZN5PointC1Eii at 0x403cae
int Point_Point(Point *this, int arg_0, int arg_1)
{
	this->x = arg_0;
	this->y = arg_1;
	return 0;
}


// Function: _ZNK5PointplERKS_ at 0x403cd6
void Point_operator_plus(Point* result, const Point* _this, const Point* other)
{
	result->x = _this->x + other->x;
	result->y = _this->y + other->y;
}


// Function: sub_403d3f at 0x403d3f
void sub_403d3f(unsigned long a0, unsigned long a1)
{
 Point::operator==();
 return;
}


// Function: _ZNK5PointeqERKS_ at 0x403d40
bool Point_operator_eq(const Point* _this, const Point* other)
{
	return (_this->x == other->x && _this->y == other->y);
}


// Function: _ZN5PointppEv at 0x403d80
Point* Point_operator_inc(Point* _this)
{
	_this->x++;
	_this->y++;
	return _this;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x403db2
int template_max_int(int arg_0, int arg_1)
{
 return (arg_0 <= arg_1 ? arg_1 : arg_0);
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x403dd2
double template_max_double(double arg_0, double arg_1)
{
 if (((CmpF(arg_0, arg_1) & 69 | (char)((CmpF(arg_0, arg_1) & 69) >> 6)) & 1) == 1)
 return arg_1;
 return arg_0;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x403e08
long long template_swap_int(unsigned int *ptr, unsigned int *p)
{
 unsigned int v0; // [bp-0xc]

 v0 = *(ptr);
 *(ptr) = *(p);
 *(p) = v0;
 return p;
}


// Function: sub_403e39 at 0x403e39
void sub_403e39(unsigned long a0)
{
 Container<int>::Container();
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x403e3a
typedef struct Container_int_struct {
 char padding_0[40];
 unsigned int field_28;
} Container_int_struct;

long long Container_int_Container(Container_int_struct *self)
{
 self->field_28 = 0;
 return (long long)self;
}


// Function: _ZN9ContainerIiE4pushEi at 0x403e54
void Container_int_push(void* ptr, int arg_0)
{
 Container_int_struct* self = (Container_int_struct*)ptr;
 unsigned int v1; // eax

 if ((int)self->field_28 <= 9)
 {
 v1 = (int)self->field_28;
 self->field_28 = v1 + 1;
 ((int*)self)[v1 + 10] = arg_0;
 }
 return;
}


// Function: sub_403e8f at 0x403e8f
void sub_403e8f(unsigned long a0, unsigned long a1)
{
 Container<int>::get();
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x403e90
long long Container_int_get(unsigned int v1, unsigned int *v2)
{
	if ((int)v1 >= 0 && v1 < v2[10])
	return (long long)v2[v1];
	return 0;
}


// Function: sub_403ec7 at 0x403ec7
void sub_403ec7(unsigned long a0)
{
 Container<int>::getSize();
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x403ec8
typedef struct Container_int_struct_2 {
 char padding_0[40];
 unsigned int field_28;
} Container_int_struct_2;

long long Container_int_getSize(Container_int_struct_2 *self)
{
 return self->field_28;
}


// Function: sub_403edd at 0x403edd
void sub_403edd(unsigned long a0)
{
 Container<double>::Container();
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x403ede
typedef struct Container_double_struct {
 char padding_0[80];
 unsigned int field_50;
} Container_double_struct;

long long Container_double_Container(Container_double_struct *self)
{
 self->field_50 = 0;
 return (long long)self;
}


// Function: _ZN9ContainerIdE4pushEd at 0x403ef8
typedef struct Container_double_struct_2 {
 unsigned long long field_0;
 char padding_8[72];
 unsigned int field_50;
} Container_double_struct_2;

long long Container_double_push(Container_double_struct_2 *self, unsigned long v4)
{
 unsigned long index;
 unsigned int v3;

 index = self->field_50;
 if ((unsigned int)index <= 9)
 {
 v3 = self->field_50;
 self->field_50 = v3 + 1;
 index = v3;
 ((unsigned long long*)&self->field_0)[index] = v4;
 }
 return index;
}


// Function: sub_403f39 at 0x403f39
void sub_403f39(unsigned long a0, unsigned long a1)
{
 Container<double>::get();
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x403f3a
long long Container_double_get(unsigned int v1, unsigned long long *v2)
{
	if ((int)v1 >= 0 && v1 < (int)((unsigned int*)v2)[10])
	return v2[v1];
	return 0;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x403f7c
void Container_double_getSize(void* ptr)
{
 return;
}


// Function: sub_403f91 at 0x403f91
void sub_403f91(unsigned long a0, unsigned long a1)
{
 std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_data();
 return;
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ at 0x403f92
long long std_uniq_ptr_data_int_default(void* this_ptr, void *arg_0)
{
	return std_uniq_ptr_impl_int_default_init(this_ptr, arg_0);
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC1EOS2_ at 0x403fbc
long long std_unique_ptr_int_default_move(void* v1, void *v2)
{
	return std_uniq_ptr_data_int_default(v1, v2);
}


// Function: _ZNK8RTTIBase7getTypeEv at 0x403fe6
void RTTIBase_getType(void* ptr)
{
	// Stub implementation
}


// Function: sub_403ff9 at 0x403ff9
void sub_403ff9(unsigned long a0)
{
 RTTIDerivedA::getType();
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x403ffa
void RTTIDerivedA_getType(void* ptr)
{
	// Stub implementation
}


// Function: sub_40400d at 0x40400d
void sub_40400d(unsigned long a0)
{
 RTTIDerivedA::derivedA_data();
 return;
}


// Function: _ZNK12RTTIDerivedA13derivedA_dataEv at 0x40400e
int RTTIDerivedA_derivedA_data(void* ptr)
{
	return 0;
}


// Function: sub_404021 at 0x404021
void sub_404021(unsigned long a0)
{
 RTTIDerivedB::getType();
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x404022
void RTTIDerivedB_getType(void* ptr)
{
	// Stub implementation
}


// Function: sub_404035 at 0x404035
void sub_404035(unsigned long a0)
{
 RTTIDerivedB::derivedB_data();
 return;
}


// Function: _ZNK12RTTIDerivedB13derivedB_dataEv at 0x404036
int RTTIDerivedB_derivedB_data(void* ptr)
{
	return 0;
}


// Function: sub_404049 at 0x404049
void sub_404049(unsigned long a0)
{
 RTTIBase::RTTIBase();
 return;
}


// Function: _ZN8RTTIBaseC1Ev at 0x40404a
extern char g_408888;

int RTTIBase_ctor(void* this_ptr)
{
	*((char **)this_ptr) = &g_408888;
	return 0;
}


// Function: sub_404067 at 0x404067
void sub_404067(unsigned long a0)
{
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x404068
extern char g_408888;

int RTTIBase_dtor(void* this_ptr)
{
	*((char **)this_ptr) = &g_408888;
	return 0;
}


// Function: sub_404085 at 0x404085
void sub_404085(unsigned long a0)
{
 return;
}


// Function: _ZN8RTTIBaseD0Ev at 0x404086
int RTTIBase_dtor2(void* this_ptr)
{
	operator delete(this_ptr, 8);
	return 0;
}


// Function: sub_4040b5 at 0x4040b5
void sub_4040b5(unsigned long a0)
{
 RTTIDerivedA::RTTIDerivedA();
 return;
}


// Function: _ZN12RTTIDerivedAC1Ev at 0x4040b6
extern char g_408860;

long long RTTIDerivedA_ctor(void* this_ptr)
{
	RTTIBase_ctor(this_ptr);
	*((char **)this_ptr) = &g_408860;
	return (long long)this_ptr;
}


// Function: sub_4040e3 at 0x4040e3
void sub_4040e3(unsigned long a0)
{
 RTTIDerivedB::RTTIDerivedB();
 return;
}


// Function: _ZN12RTTIDerivedBC2Ev at 0x4040e4
extern char g_408838;

long long RTTIDerivedB_ctor(void* this_ptr)
{
	RTTIBase_ctor(this_ptr);
	*((char **)this_ptr) = &g_408838;
	return (long long)this_ptr;
}


// Function: sub_404111 at 0x404111
void sub_404111(unsigned long a0, unsigned long a1)
{
 std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_data();
 return;
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi at 0x404112
long long std_uniq_ptr_data_int_default_ptr(void* this_ptr, int *arg_0)
{
	return std_uniq_ptr_impl_int_default_ptr_init(this_ptr, arg_0);
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi at 0x40413c
long long std_unique_ptr_int_default_init(char *a0, unsigned int *a1)
{
	return std_uniq_ptr_data_int_default_ptr(a0, (unsigned int *)a1);
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED1Ev at 0x404166
int unique_ptr_int_default_dtor(void* this_ptr)
{
	unsigned long long v2;
	int *v3;
	int *ptr;

	ptr = (int *)std_uniq_ptr_impl_int_default_M_ptr(this_ptr);
	if (ptr)
	{
		v2 = unique_ptr_int_default_get_deleter(this_ptr);
		v3 = (int *)std_move_int_ptr_ref((unsigned long long)&ptr);
		std_default_delete_int_operator((void*)v2, v3);
	}
	std_uniq_ptr_impl_int_default_M_ptr(this_ptr);
	return 0;
}


// Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv at 0x4041ce
long long unique_ptr_int_default_operator_deref(void* this_ptr)
{
 return unique_ptr_int_default_get(this_ptr);
}


// Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ at 0x4041f3
long long std_move_unique_ptr_int_default_ref(unsigned long long v1)
{
 return v1;
}


// Function: sub_404205 at 0x404205
void sub_404205(unsigned long a0, unsigned long a1)
{
 std::_Tuple_impl<0ul, int*, std::default_delete<int>>::_Tuple_impl();
 return;
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC1EOS3_ at 0x404206
long long std_Tuple_impl_0_int_delete_move(void* ptr, void* arg_0)
{
	std_Tuple_impl_1_delete_move(ptr, arg_0);
	*((long long *)ptr) = *((long long *)arg_0);
	return (long long)ptr;
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC1EOS3_ at 0x40423e
long long std_tuple_int_delete_move(void* this_ptr, void* arg_0)
{
	return std_Tuple_impl_0_int_delete_move(this_ptr, arg_0);
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC1EOS2_ at 0x404268
long long std_uniq_ptr_impl_int_delete_move(unsigned long long v1, void* v3)
{
	unsigned long long *ptr; // rax

	std_tuple_int_delete_move(v3, v1);
	ptr = std_uniq_ptr_impl_int_default_M_ptr(v1);
	*(ptr) = 0;
	return v1;
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI1St15__uniq_ptr_implIiS2_EEPi at 0x4042b2
long long std_uniq_ptr_data_int_array_default_ptr(void* this_ptr, int *arg_0)
{
	return std_uniq_ptr_impl_int_array_default_ptr_init(this_ptr, arg_0);
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ at 0x4042dc
long long unique_ptr_int_array_default_init(char *a0, unsigned int *a1)
{
	return std_uniq_ptr_data_int_array_default_ptr(a0, a1);
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev at 0x404306
int unique_ptr_int_array_default_dtor(void* this_ptr)
{
	unsigned long long v2;
	int *ptr;

	ptr = (int *)std_uniq_ptr_impl_int_array_default_M_ptr(this_ptr);
	if (ptr)
	{
		v2 = unique_ptr_int_array_default_get_deleter(this_ptr);
		_ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsrSt14is_convertibleIPA_T_PS0_E5valueEvE4typeEPS5_(v2, ptr);
	}
	std_uniq_ptr_impl_int_array_default_M_ptr(this_ptr);
	return 0;
}


// Function: sub_404361 at 0x404361
void sub_404361(unsigned long a0, unsigned long a1)
{
 unique_ptr_int_array_default_subscript();
 return;
}


// Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEm at 0x404362
long long unique_ptr_int_array_default_subscript(unsigned long v1, unsigned long long v2)
{
 return v1 * 4 + unique_ptr_int_array_default_get(v2);
}


// Function: sub_404399 at 0x404399
void sub_404399(unsigned long a0, unsigned long a1)
{
 std::__uniq_ptr_impl<int, std::default_delete<int>>::__uniq_ptr_impl();
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi at 0x40439a
long long std_uniq_ptr_impl_int_default_ctor(void* this_ptr, int *a1)
{
	unsigned int **ptr;

	std_Tuple_impl_0_int_delete_init(this_ptr);
	ptr = (unsigned int **)std_uniq_ptr_impl_int_default_M_ptr(this_ptr);
	*(ptr) = a1;
	return (long long)this_ptr;
}


// Function: sub_4043d5 at 0x4043d5
void sub_4043d5(unsigned long a0)
{
 std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_ptr();
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv at 0x4043d6
long long std_uniq_ptr_impl_int_default_M_ptr(unsigned long long v1)
{
 return std_get_0_int_default_delete(v1);
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv at 0x4043f4
long long unique_ptr_int_default_get_deleter(unsigned long long v1)
{
 return std_uniq_ptr_impl_int_default_M_deleter(v1);
}


// Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ at 0x404412
long long std_move_int_ptr_ref(unsigned long long v1)
{
 return v1;
}


// Function: _ZNKSt14default_deleteIiEclEPi at 0x404424
void std_default_delete_int_operator(void* this_ptr, int *ptr)
{
 if (ptr)
 operator delete(ptr, 4);
}


// Function: sub_404451 at 0x404451
void sub_404451(unsigned long a0)
{
 unique_ptr_int_default_get();
 return;
}


// Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv at 0x404452
long long unique_ptr_int_default_get(unsigned long long v1)
{
 return std_uniq_ptr_impl_int_default_M_ptr(v1);
}


// Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ at 0x404470
void* std_move_tuple_int_delete(void* this)
{
 return this;
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2EOS2_ at 0x404482
long long std_Tuple_impl_1_delete_move(void* this_ptr, void* arg_0)
{
 return (long long)this_ptr;
}


// Function: sub_404495 at 0x404495
void sub_404495(unsigned long a0, unsigned long a1)
{
 std::__uniq_ptr_impl<int, std::default_delete<int[]>>::__uniq_ptr_impl();
 return;
}


// Function: _ZNSt15__uniq_ptr_impl<int, std::default_delete<int[]>>::__uniq_ptr_impl at 0x404496
long long std_uniq_ptr_impl_int_array_default_ctor(void* ptr, int *a1)
{
	unsigned int **ptr2;

	std_Tuple_impl_0_int_delete_array_init(ptr);
	ptr2 = (unsigned int **)std_uniq_ptr_impl_int_array_default_M_ptr((unsigned long long)ptr);
	*(ptr2) = a1;
	return (long long)ptr;
}


// Function: sub_4044d1 at 0x4044d1
void sub_4044d1(unsigned long a0)
{
 std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_ptr();
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv at 0x4044d2
long long std_uniq_ptr_impl_int_array_default_M_ptr(unsigned long long v1)
{
 return std::get<0ul, int*, std::default_delete<int[]>>(v1);
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv at 0x4044f0
long long unique_ptr_int_array_default_get_deleter(unsigned long long v1)
{
 return std_uniq_ptr_impl_int_array_default_M_deleter(v1);
}


// Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsrSt14is_convertibleIPA_T_PS0_E5valueEvE4typeEPS5_ at 0x40450e
void _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsrSt14is_convertibleIPA_T_PS0_E5valueEvE4typeEPS5_(unsigned long long a0, void* ptr)
{
	unsigned int v2; // eax
	unsigned long long v0; // [bp-0x10]

	v0 = a0;
	if (ptr)
	::operator delete[] ((int*)ptr);
}


// Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv at 0x404538
void* std_unique_ptr_int_array_default_get(void* ptr)
{
	return (void*)std_uniq_ptr_impl_int_array_default_M_ptr((unsigned long long)ptr);
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC1ILb1ELb1EEEv at 0x404556
long long std_tuple_int_delete_true_true(void* this_ptr)
{
	std_Tuple_impl_0_int_delete_init(this_ptr);
	return (long long)this_ptr;
}


// Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ at 0x404575
long long std_get_0_int_delete(void* this, void* arg_0)
{
 return std_get_helper_0_int_delete(this);
}


// Function: sub_404593 at 0x404593
void sub_404593(unsigned long a0)
{
 std_uniq_ptr_impl_int_default_M_deleter();
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv at 0x404594
long long std_uniq_ptr_impl_int_default_M_deleter(void* this)
{
 return std_get_1_int_default_delete(this);
}


// Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv at 0x4045b2
long long std_uniq_ptr_impl_int_default_M_ptr_const(void* this)
{
 return std_get_0_int_default_delete(this);
}


// Function: sub_4045d3 at 0x4045d3
void sub_4045d3(unsigned long a0)
{
 std::tuple<int*, std::default_delete<int[]>>::tuple<true, true>();
 return;
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv at 0x4045d4
long long std_tuple_int_delete_array_true_true(void* this_ptr)
{
	std_Tuple_impl_0_int_delete_array_init(this_ptr);
	return (long long)this_ptr;
}


// Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ at 0x4045f3
long long std_get_0_int_delete_array(void* this, void* arg_0)
{
 return std_get_helper_0_int_delete_array(this);
}


// Function: sub_404611 at 0x404611
void sub_404611(unsigned long a0)
{
 std_uniq_ptr_impl_int_array_default_M_deleter();
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv at 0x404612
long long std_uniq_ptr_impl_int_array_default_M_deleter(void* this)
{
 return std_get_1_int_default_delete_array(this);
}


// Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv at 0x404630
long long std_uniq_ptr_impl_int_array_default_M_ptr_const(unsigned long long v1)
{
 return std_get_0_int_delete_array((void*)v1, NULL);
}


// Function: sub_404651 at 0x404651
void sub_404651(unsigned long a0)
{
 std::_Tuple_impl<0ul, int*, std::default_delete<int>>::_Tuple_impl();
 return;
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC1Ev at 0x404652
long long std_Tuple_impl_0_int_delete_init(void* this_ptr)
{
	std_Tuple_impl_1_delete_init(this_ptr);
	std_Head_base_0_int_init(this_ptr);
	return (long long)this_ptr;
}


// Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x40467d
long long std_get_helper_0_int_delete(unsigned long long v1)
{
 return std_Tuple_impl_0_int_delete_M_head(v1);
}


// Function: _ZSt3getILm1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ at 0x40469b
long long std_get_1_int_default_delete(unsigned long long v1)
{
 return std_get_helper_1_int_default_delete(v1);
}


// Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ at 0x4046b9
long long std_get_0_int_default_delete_const(long long* ptr)
{
	return std_get_helper_0_int_default_delete(ptr);
}


// Function: sub_4046d7 at 0x4046d7
void sub_4046d7(unsigned long a0)
{
 std::_Tuple_impl<0ul, int*, std::default_delete<int[]>>::_Tuple_impl();
 return;
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEEC2Ev at 0x4046d8
long long std_Tuple_impl_0_int_delete_array_init(void* this_ptr)
{
	std_Tuple_impl_1_delete_array_init(this_ptr);
	std_Head_base_0_int_init(this_ptr);
	return (long long)this_ptr;
}


// Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE at 0x404703
long long std_get_helper_0_int_delete_array(unsigned long long v1)
{
 return std_Tuple_impl_0_int_delete_array_M_head(v1);
}


// Function: _ZSt3getILm1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ at 0x404721
long long std_get_1_int_default_delete_array(unsigned long long v1)
{
 return std_get_helper_1_int_default_delete_array(v1);
}


// Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ at 0x40473f
long long std_get_0_int_default_delete_array_const(unsigned long long v1)
{
 return std_get_helper_0_int_default_delete_array_const(v1);
}


// Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE at 0x40475d
int * std_forward_int_ptr_ref(int *ptr)
{
 return ptr;
}


// Function: sub_40476f at 0x40476f
void sub_40476f(unsigned long a0)
{
 std::_Tuple_impl<1ul, std::default_delete<int>>::_Tuple_impl();
 return;
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2Ev at 0x404770
long long std_Tuple_impl_1_delete_init(void* _this_ptr)
{
	_Head_base_1_delete_init(_this_ptr);
	return (long long)_this_ptr;
}


// Function: sub_40478f at 0x40478f
void sub_40478f(unsigned long a0)
{
 std::_Head_base<0ul, int*, false>::_Head_base();
 return;
}


// Function: _ZNSt10_Head_baseILm0EPiLb0EEC1Ev at 0x404790
long long* std_Head_base_0_int_ptr_false_ctor(void* _this_ptr)
{
	unsigned long long *ptr = (unsigned long long *)_this_ptr;

	*(ptr) = 0;
	return ptr;
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERS3_ at 0x4047aa
long long std_Tuple_impl_0_int_delete_M_head(void* _this_ptr, void* arg_0)
{
	return *(long long*)_this_ptr;
}


// Function: _ZSt12__get_helperILm1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x4047c8
long long std_get_helper_1_int_delete(void* _this_ptr, void* arg_0)
{
	return std_Tuple_impl_1_delete_M_head(_this_ptr);
}


// Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x4047e6
long long std_get_helper_0_int_default_delete_const(long long* v1)
{
 return std_M_head_impl_0_const(v1);
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEEC2Ev at 0x404804
void std_Tuple_impl_1_delete_array_init(void* this_ptr)
{
 _Head_base_1_delete_array_init(this_ptr);
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ at 0x404823
long long std_Tuple_impl_0_int_delete_array_M_head(void* ptr, void* arg_0)
{
	return *(long long*)ptr;
}


// Function: _ZSt12__get_helperILm1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x404841
long long std_get_helper_1_int_delete_array(void* ptr, void* arg_0)
{
	return std_Tuple_impl_1_delete_array_M_head(ptr);
}


// Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE at 0x40485f
long long std_get_helper_0_int_default_delete_array_const(long long* v1)
{
 return std_M_head_impl_0_const(v1);
}


// Function: sub_40487d at 0x40487d
void sub_40487d(unsigned long a0, unsigned long a1)
{
 std::_Head_base<0ul, int*, false>::_Head_base<int*&>();
 return;
}


// Function: _ZNSt10_Head_baseILm0EPiLb0EEC2IRS0_EEOT_ at 0x40487e
int std_Head_base_0_int_ref_init(void* _this_ptr, int *arg_0)
{
 *((long long *)_this_ptr) = (long long)arg_0;
 return 0;
}


// Function: sub_4048ab at 0x4048ab
void sub_4048ab(unsigned long a0)
{
 std::_Head_base<1ul, std::default_delete<int>, true>::_Head_base();
 return;
}


// Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EEC2Ev at 0x4048ac
long long _Head_base_1_delete_init(void* _this_ptr)
{
	return (long long)_this_ptr;
}


// Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_ at 0x4048bb
long long std_Head_base_0_M_head(long long* ptr)
{
	return *ptr;
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEE7_M_headERS2_ at 0x4048cd
long long std_Tuple_impl_1_delete_M_head(long long* _this_ptr)
{
	return (long long)_this_ptr;
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERKS3_ at 0x4048eb
long long std_Tuple_impl_0_int_delete_M_head_const(long long* _this_ptr)
{
	return *_this_ptr;
}


// Function: sub_404909 at 0x404909
void sub_404909(unsigned long a0)
{
 std::_Head_base<1ul, std::default_delete<int[]>, true>::_Head_base();
 return;
}


// Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EEC1Ev at 0x40490a
long long _Head_base_1_delete_array_init(void* _this_ptr)
{
	return (long long)_this_ptr;
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEE7_M_headERS3_ at 0x404919
long long std_Tuple_impl_1_delete_array_M_head(long long* _this_ptr)
{
	return (long long)_this_ptr;
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ at 0x404937
long long std_Tuple_impl_0_int_delete_array_M_head_const(long long* _this_ptr)
{
	return *_this_ptr;
}


// Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EE7_M_headERS2_ at 0x404955
long long std_Head_base_1_delete_M_head(long long* _this_ptr)
{
	return (long long)_this_ptr;
}


// Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_ at 0x404967
long long std_Head_base_0_M_head_const(long long* _this_ptr)
{
	return *_this_ptr;
}


// Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EE7_M_headERS3_ at 0x404979
long long std_Head_base_1_delete_array_M_head(long long* _this_ptr)
{
	return (long long)_this_ptr;
}


// Function: sub_40498b at 0x40498b
void sub_40498b(unsigned long a0)
{
 return;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x40498c
extern char g_408838;

int RTTIDerivedB_dtor(void* this_ptr)
{
	*((char **)this_ptr) = &g_408838;
	return 0;
}


// Function: sub_4049b9 at 0x4049b9
void sub_4049b9(unsigned long a0)
{
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x4049ba
int RTTIDerivedB_dtor2(void* this_ptr)
{
	operator delete(this_ptr, 8);
	return 0;
}


// Function: sub_4049e9 at 0x4049e9
void sub_4049e9(unsigned long a0)
{
 return;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x4049ea
extern char g_408860;

int RTTIDerivedA_dtor(void* this_ptr)
{
	*((char **)this_ptr) = &g_408860;
	return 0;
}


// Function: sub_404a17 at 0x404a17
void sub_404a17(unsigned long a0)
{
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x404a18
int RTTIDerivedA_dtor2(void* this_ptr)
{
	operator delete(this_ptr, 8);
	return 0;
}


// Function: sub_404a47 at 0x404a47
void sub_404a47(unsigned long a0)
{
 return;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x404a48
extern char g_4088b8;
extern char g_4088e8;
extern char g_408920;

int DiamondDerived_D1(void* this_ptr)
{
	*((char **)this_ptr) = &g_4088b8;
	*((char **)((char*)this_ptr + 32)) = &g_408920;
	*((char **)((char*)this_ptr + 16)) = &g_4088e8;
	return 0;
}


// Function: _ZThn16_N14DiamondDerivedD1Ev at 0x404aca
void non-virtual thunk to DiamondDerived::~DiamondDerived()(unsigned long a0)
{
 return;
}


// Function: _ZTv0_n32_N14DiamondDerivedD1Ev at 0x404ad7
void thunk to DiamondDerived::~DiamondDerived()(unsigned long a0)
{
 return;
}


// Function: sub_404ae7 at 0x404ae7
void sub_404ae7(unsigned long a0)
{
 return;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x404ae8
int DiamondDerived_D0(void* this_ptr)
{
	operator delete(this_ptr, 48);
	return 0;
}


// Function: _ZThn16_N14DiamondDerivedD0Ev at 0x404b17
void non-virtual thunk to DiamondDerived::~DiamondDerived()(unsigned long a0)
{
 return;
}


// Function: _ZTv0_n32_N14DiamondDerivedD0Ev at 0x404b21
void thunk to DiamondDerived::~DiamondDerived()(unsigned long a0)
{
 return;
}


// Function: _ZN12MultiDerivedD1Ev at 0x404b2e
extern char g_408a78;
extern char g_408aa8;

int MultiDerived_D1(void* this_ptr)
{
	*((char **)this_ptr) = &g_408a78;
	*((char **)((char*)this_ptr + 16)) = &g_408aa8;
	return 0;
}


// Function: _ZThn16_N12MultiDerivedD1Ev at 0x404b7a
void non-virtual thunk to MultiDerived::~MultiDerived()(unsigned long a0)
{
 return;
}


// Function: _ZN12MultiDerivedD0Ev at 0x404b84
int MultiDerived_D0(void* this_ptr)
{
	operator delete(this_ptr, 32);
	return 0;
}


// Function: _ZThn16_N12MultiDerivedD0Ev at 0x404bb3
void non-virtual thunk to MultiDerived::~MultiDerived()(unsigned long a0)
{
 return;
}


// Function: sub_404bbd at 0x404bbd
void sub_404bbd(unsigned long a0)
{
 return;
}


// Function: _ZN7DerivedD2Ev at 0x404bbe
extern char g_408b20;

int Derived_D2(void* this_ptr)
{
	*((char **)this_ptr) = &g_408b20;
	return 0;
}


// Function: sub_404beb at 0x404beb
void sub_404beb(unsigned long a0)
{
 return;
}


// Function: _ZN7DerivedD0Ev at 0x404bec
int Derived_D0(void* this_ptr)
{
	operator delete(this_ptr, 16);
	return 0;
}



/* CRT stub function _fini removed by preprocessor */


