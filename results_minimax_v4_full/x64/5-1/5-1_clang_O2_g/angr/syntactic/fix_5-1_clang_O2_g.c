// Angr Decompilation of 5-1_clang_O2_g
// Platform: AMD64

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cstdint>
#include <new>
#include <exception>
#include <typeinfo>
#include <cstddef>

/* RTTI type information structures - need these for exception handling */
typedef struct type_info {
    char *_name;
} type_info;

/* CRT stub function _init removed by preprocessor */

/* CRT stub functions removed by preprocessor */

/* External C++ runtime functions */
extern "C" {
void* __cxa_allocate_exception(unsigned long);
void __cxa_throw(void*, void*, void*);
void* __cxa_begin_catch(void*);
void __cxa_end_catch();
void __cxa_rethrow();
void _Unwind_Resume(void*);
int __cxa_atexit(void*, void*, void*);
void* __dynamic_cast(const void*, const void*, const void*, const void*, unsigned long);
void* operator new(unsigned long);
void operator delete(void*);
int puts(const char*);
int printf(const char*, ...);
}

/* Global type definitions */
struct struct_1 {
 unsigned long long field_0;
};

typedef struct struct_0 {
 char padding_0[8];
 struct struct_1 *field_8;
 void (*field_8_func)(struct struct_0*);
} struct_0;

extern struct_0 *g_403fe8;

/* RTTI type info symbols - these are pointers to type_info structures */
extern type_info _ZTIi;
extern type_info _ZTIZ18test_cpp_exceptionvE16DerivedException;
extern type_info _ZTI8RTTIBase;
extern type_info _ZTI12RTTIDerivedA;
extern type_info _ZTI12RTTIDerivedB;

/* Global variables */
extern unsigned long long g_404008;
extern unsigned long long g_404010;
extern unsigned int _ZN14LifecycleClass14instance_countE;
extern char g_40207d;
extern char g_40209b;
extern char g_4020b7;
extern char g_4020d3;
extern char g_4020ef;
extern char g_40210c;
extern char g_402128;
extern char g_402144;
extern char g_402160;
extern char g_40217c;
extern char g_402199;
extern char g_4021b6;
extern char g_4021d4;
extern char g_403d78;
extern char g_403da0;

/* C++ standard library symbols */
extern char _ZNSt8ios_base4InitD1Ev;
extern void _ZStL8__ioinit;
extern unsigned long long __dso_handle;

/* Forward declarations for classes with RTTI */
class RTTIBase {
public:
    virtual void getType();
    virtual ~RTTIBase();
};

class RTTIDerivedA : public RTTIBase {
public:
    virtual void getType() override;
    virtual ~RTTIDerivedA();
};

class RTTIDerivedB : public RTTIBase {
public:
    virtual void getType() override;
    virtual ~RTTIDerivedB();
};

class DerivedException {
public:
    int value;
};

/* Forward declarations for all test functions */
void test_cpp_member_func();
void test_cpp_constructor();
void call_virtual_func(class Base* arg_0, int arg_1);
void test_cpp_virtual_func();
void test_cpp_multiple_inheritance();
void test_cpp_diamond_inheritance();
void test_cpp_operator_overload();
void test_cpp_template_func();
void test_cpp_template_class();
void test_cpp_lambda();
void test_cpp_exception();
void test_cpp_smart_ptr();
void test_cpp_rtti();
void test_cpp_oo_features();
unsigned int main();

/* Template declarations */
template<typename T> T template_max(T a, T b) {
    return (a >= b) ? a : b;
}

template<typename T> void template_swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

template<typename T>
class Container;

/* Template class Container - generic declaration */
template<typename T>
class Container {
public:
    Container();
    void push(T value);
    T get(int index);
    int getSize();
private:
    T data[10];
    int size;
};

/* Container<int> specialization - inline definitions */
template<>
class Container<int> {
public:
    Container() : size(0) {}
    void push(int value) { if (size < 10) data[size++] = value; }
    int get(int index) { return data[index]; }
    int getSize() { return size; }
private:
    int data[10];
    int size;
};

/* Container<double> specialization - inline definitions */
template<>
class Container<double> {
public:
    Container() : size(0) {}
    void push(double value) { if (size < 10) data[size++] = value; }
    double get(int index) { return data[index]; }
    int getSize() { return size; }
private:
    double data[10];
    int size;
};

/* MaxV function used by template_max<double> - implement as simple comparison */
unsigned long long MaxV(unsigned long long a, unsigned long long b) {
    return (a >= b) ? a : b;
}

unsigned long long * _init()
{
 unsigned long long *v1; // rax

 v1 = g_403fe8;
 if (g_403fe8)
 v1 = g_403fe8();
 return v1;
}


// Function: sub_401020 at 0x401020
extern unsigned long long g_404008;
extern unsigned long long g_404010;

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_404008;
 (void)v0;
 // Original was: goto g_404010; - was an indirect jump
 return;
}


// Function: sub_40102c at 0x40102c
int sub_40102c(const char *v1)
{
 return printf("%s", v1);
}


// Function: _GLOBAL__sub_I_5_1.cpp at 0x401120
extern char _ZNSt8ios_base4InitD1Ev;
extern void _ZStL8__ioinit;
extern unsigned long long __dso_handle;

void _GLOBAL__sub_I_5_1.cpp()
{
 std::ios_base::Init::Init(&_ZStL8__ioinit);
 __cxa_atexit(&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
 return;
}


// Function: sub_401147 at 0x401147
void sub_401147(unsigned long a0, unsigned long a1, unsigned long a2)
{
 exit(0); /* do not return */
}



/* CRT stub functions defined as empty */
void deregister_tm_clones() {}
void register_tm_clones() {}
void __do_global_dtors_aux() {}
void frame_dummy() {}
void _start() {}

/* CRT stub function _start removed by preprocessor */



// Function: sub_401175 at 0x401175
void sub_401175()
{
 return;
}


// Function: sub_401176 at 0x401176
void sub_401176()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_4011a9 at 0x4011a9
void sub_4011a9()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_4011e9 at 0x4011e9
void sub_4011e9()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_401225 at 0x401225
void sub_401225()
{
}


// Function: sub_401229 at 0x401229
void sub_401229()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_401239 at 0x401239
void sub_401239()
{
 test_cpp_member_func();
 return;
}


// Function: _Z20test_cpp_member_funcv at 0x401240
void test_cpp_member_func()
{
 unsigned int v0; // [bp-0x28]
 char v1[15]; // [bp-0x24]
 unsigned long long flag1; // [bp-0x15]
 char result; // [bp-0x5]

 flag1 = 0;
 strncpy(&v1, "Test", 4);
 result = 0;
 v0 = 10;
 strlen(&v1);
 return;
}


// Function: sub_40127c at 0x40127c
void sub_40127c()
{
 test_cpp_constructor();
 return;
}


// Function: _Z20test_cpp_constructorv at 0x401280
void test_cpp_constructor()
{
 return;
}


// Function: sub_401292 at 0x401292
void sub_401292(unsigned long a0)
{
 call_virtual_func();
 return;
}


// Forward declaration for Base class
class Base;

// Function: _Z17call_virtual_funcP4Basei at 0x4012a0
class Base {
public:
    virtual void virtual_method();
};

void Base::virtual_method() {}

void call_virtual_func(class Base *arg_0, int arg_1)
{
    arg_0->virtual_method();
}


// Function: sub_4012a8 at 0x4012a8
void sub_4012a8()
{
 test_cpp_virtual_func();
 return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x4012b0
void test_cpp_virtual_func()
{
 return;
}


// Function: sub_4012b6 at 0x4012b6
void sub_4012b6()
{
 test_cpp_multiple_inheritance();
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x4012c0
void test_cpp_multiple_inheritance()
{
 return;
}


// Function: sub_4012c6 at 0x4012c6
void sub_4012c6()
{
 test_cpp_diamond_inheritance();
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x4012d0
void test_cpp_diamond_inheritance()
{
 return;
}


// Function: sub_4012d6 at 0x4012d6
void sub_4012d6()
{
 test_cpp_operator_overload();
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x4012e0
void test_cpp_operator_overload()
{
 return;
}


// Function: sub_4012e6 at 0x4012e6
void sub_4012e6()
{
 test_cpp_template_func();
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x4012f0
void test_cpp_template_func()
{
 return;
}


// Function: sub_4012f6 at 0x4012f6
void sub_4012f6()
{
 test_cpp_template_class();
 return;
}


// Function: _Z23test_cpp_template_classv at 0x401300
void test_cpp_template_class()
{
 return;
}


// Function: sub_401306 at 0x401306
void sub_401306()
{
 test_cpp_lambda();
 return;
}


// Function: _Z15test_cpp_lambdav at 0x401310
void test_cpp_lambda()
{
 return;
}


// Function: sub_401316 at 0x401316
void sub_401316()
{
 test_cpp_exception();
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x401320
extern char _ZTIi;

void test_cpp_exception()
{
 unsigned int *ptr; // rax

 ptr = __cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxa_throw(ptr, &_ZTIi, 0);
 return;
}


// Function: sub_40134b at 0x40134b
extern unsigned long long _ZTIZ18test_cpp_exceptionvE16DerivedException;

long long sub_40134b(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
 unsigned int result; // ebx
 unsigned long long v3; // rcx
 unsigned long long v4; // r8
 unsigned long long v5; // r9
 unsigned long long v6; // rax
 unsigned long long v7; // rcx
 unsigned long long v8; // r8
 unsigned long long v9; // r9

 result = a2;
 if (result != 1)
 {
 if (result != 1)
 goto LABEL_0x4013d8;
 __cxa_begin_catch(v6);
 __cxa_end_catch(a0, a1, a2, v7, v8, v9);
 __cxa_throw(__cxa_allocate_exception(1), &_ZTIZ18test_cpp_exceptionvE16DerivedException, 0);
 }
 __cxa_begin_catch(v6);
 __cxa_rethrow(a0, a1, a2, v3, v4, v5);
}


// Function: sub_401368 at 0x401368
void sub_401368(unsigned long a0, unsigned long a1, unsigned long a2)
{
 __cxa_end_catch();
}


// Function: _Z18test_cpp_smart_ptrv at 0x4013e0
void test_cpp_smart_ptr()
{
 return;
}


// Function: sub_4013e6 at 0x4013e6
void sub_4013e6()
{
 test_cpp_rtti();
 return;
}


// Function: _Z13test_cpp_rttiv at 0x4013f0
extern char g_403d78;
extern char g_403da0;
extern unsigned long long _ZTI8RTTIBase;
extern unsigned long long _ZTI12RTTIDerivedA;

void test_cpp_rtti()
{
 void* ptr; // r14
 struct_0 **p; // r12

 ptr = operator new(8);
 *((char **)ptr) = &g_403d78;
 p = (struct_0**)operator new(8);
 *(p) = &g_403da0;
 // Use __dynamic_cast for RTTI test
 (void)__dynamic_cast(ptr, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, 0);
 operator delete(ptr);
 return;
}


// Function: sub_401492 at 0x401492
void sub_401492()
{
 test_cpp_oo_features();
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x4014a0
extern unsigned int _ZN14LifecycleClass14instance_countE;
extern unsigned long long _ZTI12RTTIDerivedA;
extern unsigned long long _ZTI8RTTIBase;
extern char g_40207d;
extern char g_40209b;
extern char g_4020b7;
extern char g_4020d3;
extern char g_4020ef;
extern char g_40210c;
extern char g_402128;
extern char g_402144;
extern char g_402160;
extern char g_40217c;
extern char g_402199;
extern char g_4021b6;
extern char g_4021d4;
extern char g_403d78;
extern char g_403da0;

void test_cpp_oo_features()
{
 void* ptr; // r14
 struct_0 **p; // r12
 unsigned int v10; // ebx
 unsigned int v11; // ebp
 unsigned int v0; // [bp-0x50]
 char v1; // [bp-0x4c]
 unsigned long long flag1; // [bp-0x3d]
 char result; // [bp-0x2d]

 puts(&g_4021d4);
 flag1 = 0;
 strncpy(&v1, "Test", 4);
 result = 0;
 v0 = 10;
 printf(&g_40207d, (unsigned int)strlen(&v1) + 4700);
 printf(&g_40209b, _ZN14LifecycleClass14instance_countE * 1001 + 21);
 printf(&g_4020b7, 42);
 printf(&g_4020d3, 71);
 printf(&g_4020ef, 650);
 printf(&g_40210c, 22);
 printf(&g_402128, 39);
 printf(&g_402144, 16);
 printf(&g_402160, 85);
 printf(&g_40217c, 0);
 printf(&g_402199, 703);
 ptr = operator new(8);
 *((char **)ptr) = &g_403d78;
 p = operator new(8);
 *(p) = &g_403da0;
 v10 = (!__dynamic_cast(ptr, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, 0) ? 30 : 130);
 v11 = (!__dynamic_cast(ptr, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, 0) ? v10 : v10 + 200);
 operator delete(ptr);
 // Call field_8 on the struct pointed to by p
 if (*p && (*p)->field_8) {
     (*p)->field_8(*p);
 }
 printf(&g_4021b6, v11 + 14);
 return;
}


// Function: sub_401673 at 0x401673
void sub_401673()
{
 main();
 return;
}


// Function: main at 0x401680
unsigned int main()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 0;
 test_cpp_oo_features();
 return 0;
}


// Function: sub_40168a at 0x40168a
void sub_40168a(unsigned long a0, unsigned long a1)
{
 template_max<int>(0, 0);
 return;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x401690
// Using the template implementation directly
template<> int template_max<int>(int arg_0, int arg_1)
{
 if (arg_1 >= arg_0)
 return arg_1;
 return arg_0;
}


// Function: sub_401698 at 0x401698
void sub_401698()
{
 template_max<double>(0.0, 0.0);
 return;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x4016a0
template<> double template_max<double>(double arg_0, double arg_1)
{
 return (double)MaxV((unsigned long long)arg_0, (unsigned long long)arg_1);
}


// Function: sub_4016a5 at 0x4016a5
void sub_4016a5(unsigned long a0, unsigned long a1)
{
 int x = 0, y = 1;
 template_swap<int>(x, y);
 return;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x4016b0
void template_swap<int>(int &ptr, int &p)
{
 int v1; // eax

 v1 = ptr;
 ptr = p;
 p = v1;
 return;
}


// Function: sub_4016b9 at 0x4016b9
void sub_4016b9(unsigned long a0)
{
 // Container<int>::Container() - constructor, no return value
 return;
}


// Function: sub_4016c8 at 0x4016c8
void sub_4016c8(unsigned long a0)
{
 // Container<int>::push() - called via vtable
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x4016d0
void Container<int>::push(void* ptr, int arg_0)
{
 unsigned long index; // rax

 index = (int)ptr[40];
 if (index <= 9)
 {
 *((unsigned int *)&ptr[40]) = (unsigned int)index + 1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 }
 return;
}


// Function: sub_4016e4 at 0x4016e4
void sub_4016e4(unsigned long a0, unsigned long a1)
{
 Container<int>::get();
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x4016f0
void Container<int>::get(void* this, int arg_0)
{
 return;
}


// Function: sub_401701 at 0x401701
void sub_401701(unsigned long a0)
{
 Container<int>::getSize();
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x401710
void Container<int>::getSize(void* this)
{
 return;
}


// Function: sub_401714 at 0x401714
void sub_401714(unsigned long a0)
{
 Container<double>::Container();
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x401720
int Container<double>::Container(void* ptr)
{
 *((unsigned int *)&ptr[80]) = 0;
 return;
}


// Function: sub_401728 at 0x401728
void sub_401728(unsigned long a0)
{
 Container<double>::push();
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x401730
void Container<double>::push(void* ptr, double arg_0)
{
 unsigned long index; // rax

 index = (int)ptr[80];
 if (index <= 9)
 {
 *((unsigned int *)&ptr[80]) = (unsigned int)index + 1;
 *((double *)((char *)ptr + 8 * index)) = arg_0;
 }
 return;
}


// Function: sub_401746 at 0x401746
void sub_401746(unsigned long a0, unsigned long a1)
{
 Container<double>::get();
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x401750
void Container<double>::get(void* this, int arg_0)
{
 return;
}


// Function: sub_401764 at 0x401764
void sub_401764(unsigned long a0)
{
 Container<double>::getSize();
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x401770
void Container<double>::getSize(void* this)
{
 return;
}


// Function: sub_401774 at 0x401774
void sub_401774()
{
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401780
int RTTIDerivedA::~RTTIDerivedA(void* this)
{
 operator delete(this);
 return;
}


// Function: sub_401785 at 0x401785
void sub_401785()
{
 RTTIDerivedA::getType();
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401790
void RTTIDerivedA::getType(void* this)
{
 return;
}


// Function: sub_401796 at 0x401796
void sub_401796()
{
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x4017a0
int RTTIBase::~RTTIBase(void* this)
{
 return;
}


// Function: sub_4017a1 at 0x4017a1
void sub_4017a1()
{
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x4017b0
int RTTIDerivedB::~RTTIDerivedB(void* this)
{
 operator delete(this);
 return;
}


// Function: sub_4017b5 at 0x4017b5
void sub_4017b5()
{
 RTTIDerivedB::getType();
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x4017c0
void RTTIDerivedB::getType(void* this)
{
 return;
}



/* CRT stub function _fini removed by preprocessor */


