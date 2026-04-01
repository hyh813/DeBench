// Angr Decompilation of 5-1_clang_O1_g
// Platform: AMD64


/* CRT stub function _init removed by preprocessor */

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <new>
#include <exception>
#include <cxxabi.h>
#include <typeinfo>
#include <iostream>
#include <unwind.h>
#include <new>

using namespace std;

// Forward declarations
struct struct_0 {
    int dummy;
};

extern struct struct_0 *g_405fe8;

// Forward declarations for classes
class Base;
class Derived;
class MultiDerived;
class DiamondDerived;
class LifecycleClass;
class BaseA;
class BaseB;
class MiddleA;
class MiddleB;
class VirtualBase;
class RTTIDerivedA;
class RTTIBase;
class RTTIDerivedB;

template<typename T> class Container;

// Class definitions
class Base {
public:
    virtual void virtual_func(int arg_0);
    virtual const char* getName();
    virtual ~Base();
    static long long static_virtual_func(int arg_0);
};

class Derived : public Base {
public:
    virtual void virtual_func(int arg_0);
    virtual const char* getName();
    virtual ~Derived();
};

class MultiDerived {
public:
    virtual ~MultiDerived();
    long long funcA();
    virtual void funcB();
    long long non_virtual_thunk_funcB();
    void non_virtual_thunk_dtor();
    long long non_virtual_thunk_d0(void* a0);
};

class DiamondDerived {
public:
    virtual ~DiamondDerived();
    virtual void func();
    int non_virtual_thunk_func(void* a0);
    void non_virtual_thunk_dtor();
    long long non_virtual_thunk_d0(void* a0);
    long long thunk_func(void* a0);
    void thunk_dtor();
    long long thunk_d0(void* a0);
};

class LifecycleClass {
public:
    static unsigned int instance_countE;
};

// Static member definition
unsigned int LifecycleClass::instance_countE = 0;

class BaseA {
public:
    virtual void funcA();
    virtual ~BaseA();
};

class BaseB {
public:
    virtual void funcB();
    virtual ~BaseB();
};

class MiddleA {
public:
    virtual void func();
    virtual ~MiddleA();
    int thunk_func(void* a0);
    void thunk_dtor();
    long long thunk_d0(void* a0);
};

class MiddleB {
public:
    virtual void func();
    virtual ~MiddleB();
    int thunk_func(void* a0);
    void thunk_dtor();
    long long thunk_d0(void* a0);
};

class VirtualBase {
public:
    virtual void func();
    virtual ~VirtualBase();
};

class RTTIDerivedA {
public:
    virtual ~RTTIDerivedA();
    virtual void getType();
};

class RTTIBase {
public:
    virtual ~RTTIBase();
};

class RTTIDerivedB {
public:
    virtual ~RTTIDerivedB();
    virtual void getType();
};

// Template function declarations
template<typename T>
T template_max(T arg_0, T arg_1);

template<typename T>
void template_swap(T &ptr, T &p);

template<typename T>
class Container {
public:
    static int Container_(void* ptr);
    static void push(void* ptr, T arg_0);
    static void get(void* _this, int arg_0);
    static void getSize(void* _this);
};

// Template instantiations for Container - removed invalid specializations

// C++ runtime stubs
extern "C" void __cxa_atexit(void (*func)(void*), void* arg, void* dso_handle);
extern "C" void* __cxa_allocate_exception(size_t size);
extern "C" void __cxa_throw(void* obj, void* type, void* dest);
extern "C" void __cxa_begin_catch(void* obj);
extern "C" void __cxa_end_catch();
extern "C" void __cxa_rethrow();
extern "C" void _Unwind_Resume(void* exc);

// C++ memory operators
void* operator new(size_t size);
void operator delete(void* ptr);
void* operator new[](size_t size);
void operator delete[](void* ptr);

// Forward declarations for thunk functions
long long _ZN12MultiDerived5funcBEv_thunk();
void _ZN12MultiDerivedD1Ev_thunk();
long long _ZN12MultiDerivedD0Ev_thunk(void* a0);
int _ZN7MiddleA4funcEv_thunk(void* *a0);
void _ZN7MiddleAD1Ev_thunk();
long long _ZN7MiddleAD0Ev_thunk(void* *a0);
int _ZN7MiddleB4funcEv_thunk(void* * *a0);
void _ZN7MiddleBD1Ev_thunk();
long long _ZN7MiddleBD0Ev_thunk(void* *a0);
int _ZN14DiamondDerived4funcEv_nonvirtual_thunk(void* a0);
void _ZN14DiamondDerivedD1Ev_thunk();
long long _ZN14DiamondDerivedD0Ev_thunk(void* a0);
long long _ZN14DiamondDerived4funcEv_thunk(void** a0);
void _ZN14DiamondDerivedD1Ev_thunk2();
long long _ZN14DiamondDerivedD0Ev_thunk2(void* *a0);

// Forward declarations for template functions - removed invalid syntax

// Forward declarations for test functions
void test_cpp_exception();
void test_cpp_rtti();
void test_cpp_member_func();
void test_cpp_constructor();
void test_cpp_virtual_func();
void test_cpp_multiple_inheritance();
void test_cpp_diamond_inheritance();
void test_cpp_operator_overload();
void test_cpp_template_func();
void test_cpp_template_class();
void test_cpp_lambda();
void test_cpp_oo_features();
void call_virtual_func(void *arg_0, int arg_1);

// Stub functions
void _start() {}
void deregister_tm_clones() {}
void register_tm_clones() {}
void __do_global_dtors_aux() {}
void frame_dummy() {}
unsigned long long MaxV(unsigned long long a, unsigned long long b) { return a > b ? a : b; }

// C++ memory operators implementations
void* operator new(size_t size) {
    return malloc(size);
}

void operator delete(void* ptr) {
    free(ptr);
}

void* operator new[](size_t size) {
    return malloc(size);
}

void operator delete[](void* ptr) {
    free(ptr);
}

unsigned long long * _init()
{
 unsigned long long *v1; // rax

 v1 = g_405fe8;
 if (g_405fe8)
     v1 = (unsigned long long *)g_405fe8;
 return v1;
}


// Function: sub_402020 at 0x402020
extern unsigned long long g_406008;
extern unsigned long long g_406010;

void sub_402020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_406008;
 goto g_406010;
}


// Function: sub_40202c at 0x40202c
int sub_40202c()
{
 size_t v1 = 20; // Provide a default size

 return (int)(unsigned long long)operator new[](v1);
}


// Function: _GLOBAL__sub_I_5_1.cpp at 0x402150
extern char _ZNSt8ios_base4InitD1Ev;
extern void _ZStL8__ioinit;
extern unsigned long long __dso_handle;

void _GLOBAL__sub_I_5_1.cpp()
{
 // std::ios_base::Init initialization
 __cxa_atexit((void (*)(void*))&std::ios_base::~Init, &_ZStL8__ioinit, &__dso_handle);
 return;
}


// Function: sub_402178 at 0x402178
void sub_402178(unsigned long a0, unsigned long a1, unsigned long a2)
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4021a5 at 0x4021a5
void sub_4021a5()
{
 __builtin_trap();
}


// Function: sub_4021a6 at 0x4021a6
void sub_4021a6()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_4021d9 at 0x4021d9
void sub_4021d9()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_402219 at 0x402219
void sub_402219()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_402255 at 0x402255
void sub_402255()
{
}


// Function: sub_402259 at 0x402259
void sub_402259()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_402269 at 0x402269
void sub_402269()
{
 test_cpp_member_func();
 return;
}


// Function: _Z20test_cpp_member_funcv at 0x402270
void test_cpp_member_func()
{
 unsigned int v0; // [bp-0x28]
 char v1[15]; // [bp-0x24]
 unsigned long long flag1; // [bp-0x15]
 char result; // [bp-0x5]

 strncpy(&v1, "Test", 4);
 flag1 = 0;
 result = 0;
 v0 = 10;
 strlen(&v1);
 return;
}


// Function: sub_4022ac at 0x4022ac
void sub_4022ac()
{
 test_cpp_constructor();
 return;
}


// Function: _Z20test_cpp_constructorv at 0x4022b0
extern unsigned int _ZN14LifecycleClass14instance_countE;

void test_cpp_constructor()
{
 unsigned int *v1; // rax
 unsigned long long i; // rcx
 unsigned int *ptr; // rdx

 v1 = operator new[](20);
 i = 0;
 ptr = v1;
 do
 {
 *(ptr) = i;
 i += 10;
 ptr += 1;
 } while (i != 50);
 LifecycleClass::instance_countE = LifecycleClass::instance_countE + 1;
 operator delete[](v1);
 LifecycleClass::instance_countE = LifecycleClass::instance_countE - 1;
 return;
}


// Function: sub_402303 at 0x402303
void sub_402303(unsigned long a0)
{
 call_virtual_func((void*)a0, 0);
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x402310

void call_virtual_func(void *arg_0, int arg_1)
{
 Base* obj = (Base*)arg_0;
 obj->virtual_func(arg_1);
 return;
}


// Function: sub_402318 at 0x402318
void sub_402318()
{
 test_cpp_virtual_func();
 return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x402320
extern char g_4059c8;
extern struct_0 *g_405a08;

void test_cpp_virtual_func()
{
 struct_0 **v0; // [bp-0x20]
 unsigned int v1; // [bp-0x18]
 unsigned long v2; // [bp-0x10]

 v2 = (unsigned long)&g_4059c8;
 v0 = &g_405a08;
 v1 = 3;
 Base* obj = (Base*)&v2;
 obj->virtual_func(5);
 return;
}


// Function: sub_402373 at 0x402373
void sub_402373()
{
 test_cpp_multiple_inheritance();
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x402380
extern char g_405a50;
extern struct_0 *g_405a80;

void test_cpp_multiple_inheritance()
{
 unsigned long v0; // [bp-0x30]
 unsigned int v1; // [bp-0x28]
 struct_0 **v2; // [bp-0x20]
 unsigned int v3; // [bp-0x18]

 v0 = &g_405a50;
 v2 = &g_405a80;
 v1 = 100;
 v3 = 200;
 MultiDerived* obj = (MultiDerived*)&v0;
 obj->funcA();
 return;
}


// Function: sub_4023d8 at 0x4023d8
void sub_4023d8()
{
 test_cpp_diamond_inheritance();
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x4023e0
extern void g_405b58;
extern unsigned long long g_405b88;
extern struct_0 *g_405bc0;

void test_cpp_diamond_inheritance()
{
 void* v0; // [bp-0x40]
 char v1; // [bp-0x38]
 unsigned long long v2; // [bp-0x30]
 struct_0 **v3; // [bp-0x20]
 unsigned int v4; // [bp-0x18]

 v0 = &g_405b58;
 v3 = &g_405bc0;
 v2 = &g_405b88;
 v4 = 50;
 _ZN14DiamondDerived4funcEv_thunk(&v3);
 return;
}


// Function: sub_402446 at 0x402446
void sub_402446()
{
 test_cpp_operator_overload();
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x402450
void test_cpp_operator_overload()
{
 return;
}


// Function: sub_402456 at 0x402456
void sub_402456()
{
 test_cpp_template_func();
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x402460
void test_cpp_template_func()
{
 return;
}


// Function: sub_402466 at 0x402466
void sub_402466()
{
 test_cpp_template_class();
 return;
}


// Function: _Z23test_cpp_template_classv at 0x402470
void test_cpp_template_class()
{
 return;
}


// Function: sub_402476 at 0x402476
void sub_402476()
{
 test_cpp_lambda();
 return;
}


// Function: _Z15test_cpp_lambdav at 0x402480
void test_cpp_lambda()
{
 return;
}


// Function: sub_402486 at 0x402486
void sub_402486()
{
 test_cpp_exception();
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x402490
extern char _ZTIi;

void test_cpp_exception()
{
 unsigned int *ptr; // rax
 unsigned long long v2; // r14
 unsigned int v3; // edx
 unsigned long long v4; // rdi
 unsigned long long v5; // rsi
 unsigned long long v6; // rdx
 unsigned long long v7; // rcx
 unsigned long long v8; // r8
 unsigned long long v9; // r9

 ptr = __cxa_allocate_exception(4);
 *(ptr) = 42;
 v2 = __cxa_throw(ptr, &_ZTIi, 0);
 if (v3 != 3 && v3 != 2)
 _Unwind_Resume(v2); /* do not return */
 __cxa_begin_catch(v2);
 __cxa_end_catch();
 return;
}


// Function: sub_4024bb at 0x4024bb
extern unsigned long long _ZTIZ18test_cpp_exceptionvE16DerivedException;

long long sub_4024bb(unsigned long long a0, unsigned long long a1, unsigned long long a2)
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
 goto LABEL_0x402548;
 __cxa_begin_catch(v6);
 __cxa_end_catch();
 __cxa_throw(__cxa_allocate_exception(1), &_ZTIZ18test_cpp_exceptionvE16DerivedException, 0);
 }
 __cxa_begin_catch(v6);
 __cxa_rethrow();
}


// Function: sub_4024d8 at 0x4024d8
void sub_4024d8(unsigned long a0, unsigned long a1, unsigned long a2)
{
 __cxa_end_catch();
}


// Function: _Z18test_cpp_smart_ptrv at 0x402550
void test_cpp_smart_ptr()
{
 return;
}


// Function: sub_402556 at 0x402556
void sub_402556()
{
 test_cpp_rtti();
 return;
}


// Function: _Z13test_cpp_rttiv at 0x402560
extern char g_405d78;
extern char g_405da0;

void test_cpp_rtti()
{
 void* *p; // r14
 void* *ptr; // r13
 char *v5; // r15
 char result; // al

 p = (void* *)operator new(8);
 *(p) = &g_405d78;
 ptr = (void* *)operator new(8);
 *(ptr) = &g_405da0;
 {
     void* p_vtable = *(p);
     char* p_vtable_char = (char*)p_vtable;
     v5 = *(char **)(p_vtable_char + 8);
 }
 {
     void* ptr_vtable = *(ptr);
     char* ptr_vtable_char = (char*)ptr_vtable;
     char* type_name = *(char **)(ptr_vtable_char + 8);
     if (type_name == (char *)"12RTTIDerivedB")
     {
         result = 1;
     }
 else if (*type_name == 42)
     {
         result = 0;
     }
     else
     {
         result = !strcmp(type_name, "12RTTIDerivedB");
     }
 }
 strlen(&v5[*(v5) == 42]);
 {
     void* p_vtable = *(p);
     void** p_vtable_vpp = (void**)p_vtable;
     ((void (*)(void* ))p_vtable_vpp[8])(p);
 }
 {
     void* ptr_vtable = *(ptr);
     void** ptr_vtable_vpp = (void**)ptr_vtable;
     ((void (*)(void* ))ptr_vtable_vpp[8])(ptr);
 }
 return;
}


// Function: sub_40269a at 0x40269a
void sub_40269a()
{
 test_cpp_oo_features();
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x4026a0
typedef struct struct_1 {
 unsigned long long field_0;
} struct_1;
extern const char g_40307d[];
extern const char g_40309b[];
extern const char g_4030b7[];
extern const char g_4030d3[];
extern const char g_4030ef[];
extern const char g_40310c[];
extern const char g_403128[];
extern const char g_403144[];
extern const char g_403160[];
extern const char g_40317c[];
extern const char g_403199[];
extern const char g_4031b6[];
extern const char g_4031e1[];
extern char g_4059c8;
extern struct_0 *g_405a08;
extern char g_405a50;
extern char g_405a80;
extern void g_405b58;
extern char g_405b88;
extern struct_1 *g_405bc0;

void test_cpp_oo_features()
{
 unsigned long long i; // rbx
 unsigned int *p; // rax
 unsigned int *ptr; // rcx
 unsigned long v19; // rbx
 unsigned int v20; // eax
 unsigned long long v23; // rax
 void* v0; // [bp-0x48]
 struct_0 **v2; // [bp-0x48]
 unsigned long v3; // [bp-0x48]
 char char_local; // [bp-0x44]
 unsigned int v5; // [bp-0x40]
 unsigned long v6; // [bp-0x38]
 unsigned long long v7; // [bp-0x35]
 unsigned int v8; // [bp-0x30]
 struct_1 **v9; // [bp-0x28]
 char result; // [bp-0x25]
 unsigned int v11; // [bp-0x20]
 unsigned long v12; // [bp-0x18]

 puts(g_4031e1);
 strncpy(&char_local, "Test", 4);
 v7 = 0;
 result = 0;
 v12 = 10;
 i = 0;
 printf(g_40307d, (unsigned int)strlen(&char_local) + 4700);
 p = (unsigned int*)operator new[](20);
 ptr = p;
 do
 {
 ptr[0] = i;
 i += 10;
 ptr = &ptr[1];
 } while (i != 50);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
 v19 = _ZN14LifecycleClass14instance_countE + p[2];
 operator delete[](p);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
 printf(g_40309b, _ZN14LifecycleClass14instance_countE * 1000 + v19);
 v12 = (unsigned long)(char*)&g_4059c8;
 v2 = (struct_0**)&g_405a08;
 v5 = 3;
 v20 = (unsigned int)Base::static_virtual_func(5);
 printf(g_4030b7, v20 + Base::static_virtual_func(5) + 21);
 v3 = (unsigned long)(char*)&g_405a50;
 v6 = (unsigned long)(char*)&g_405a80;
 v5 = 100;
 v8 = 200;
 printf(g_4030d3, (int)_ZN12MultiDerived5funcBEv_thunk((void**)&v6) + 31);
 v0 = &g_405b58;
 v9 = &g_405bc0;
 v6 = (unsigned long)(char*)&g_405b88;
 v11 = 50;
 v23 = _ZN14DiamondDerived4funcEv_thunk((void**)v9);
 {
     char* v0_char = (char*)v0;
     *((unsigned int *)((char *)&v5 + v0_char[24])) = 100;
 }
 printf(g_4030ef, (v23 & 4294967295) + (*(long long (*)())(*v9))() & 4294967295 & 4294967295);
 printf(g_40310c, 22);
 printf(g_403128, 39);
 printf(g_403144, 16);
 printf(g_403160, 85);
 printf(g_40317c, 0);
 printf(g_403199, 703);
 printf(g_4031b6, 0);
 return;
}


// Function: sub_4028ec at 0x4028ec
void sub_4028ec()
{
 main();
 return;
}


// Function: main at 0x4028f0
unsigned int main()
{
 test_cpp_oo_features();
 return 0;
}


// Function: sub_4028fa at 0x4028fa






// Function: _ZN4Base12virtual_funcEi at 0x402910
void Base::virtual_func(int arg_0)
{
    return;
}

// Function: _ZN7Derived12virtual_funcEi at 0x402910
void Derived::virtual_func(int arg_0)
{
    return;
}


// Function: sub_402917 at 0x402917
void sub_402917()
{
 return;
}


// Function: _ZN4BaseD2Ev at 0x402920
Base::~Base()
{
 return;
}


// Function: sub_402921 at 0x402921
void sub_402921()
{
 return;
}


// Function: _ZN12MultiDerivedD2Ev at 0x402930
MultiDerived::~MultiDerived()
{
 return;
}


// Function: sub_402931 at 0x402931
void sub_402931()
{
 return;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x402940
DiamondDerived::~DiamondDerived()
{
 return;
}


// Function: sub_402941 at 0x402941
void sub_402941(unsigned long a0, unsigned long a1)
{
 template_max<int>(a0, a1);
 return;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x402950
template<>
int template_max<int>(int arg_0, int arg_1)
{
 if (arg_1 >= arg_0)
 return arg_1;
 return arg_0;
}


// Function: sub_402958 at 0x402958
void sub_402958()
{
 template_max<double>(0.0, 0.0);
 return;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x402960
template<>
double template_max<double>(double arg_0, double arg_1)
{
 return (unsigned long long)(MaxV((unsigned long long)arg_0, (unsigned long long)arg_1));
}


// Function: sub_402965 at 0x402965
void sub_402965(unsigned long a0, unsigned long a1)
{
 int *p1 = (int*)a0;
 int *p2 = (int*)a1;
 template_swap<int>(*p1, *p2);
 return;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x402970
template<>
void template_swap<int>(int &ptr, int &p)
{
 unsigned int v1; // eax

 v1 = ptr;
 ptr = p;
 p = v1;
 return;
}


// Function: sub_402979 at 0x402979
void sub_402979(unsigned long a0)
{
 Container<int>::Container_((void*)a0);
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x402980
int Container<int>::Container_(void* ptr)
{
 *((unsigned int *)((char *)ptr + 40)) = 0;
 return;
}


// Function: sub_402988 at 0x402988
void sub_402988(unsigned long a0)
{
 Container<int>::push((void*)a0, 0);
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x402990
void Container<int>::push(void* ptr, int arg_0)
{
 unsigned long index; // rax

 index = *((unsigned int *)((char *)ptr + 40));
 if (index <= 9)
 {
 *((unsigned int *)((char *)ptr + 40)) = (unsigned int)index + 1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 }
 return;
}


// Function: sub_4029a4 at 0x4029a4
void sub_4029a4(unsigned long a0, unsigned long a1)
{
 Container<int>::get((void*)a0, (int)a1);
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x4029b0
void Container<int>::get(void* _this, int arg_0)
{
 return;
}


// Function: sub_4029c2 at 0x4029c2
void sub_4029c2(unsigned long a0)
{
 Container<int>::getSize((void*)a0);
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x4029d0
void Container<int>::getSize(void* _this)
{
 return;
}


// Function: sub_4029d4 at 0x4029d4
void sub_4029d4(unsigned long a0)
{
 Container<double>::Container_((void*)a0);
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x4029e0
int Container<double>::Container_(void* ptr)
{
 *((unsigned int *)((char *)ptr + 80)) = 0;
 return;
}


// Function: sub_4029e8 at 0x4029e8
void sub_4029e8(unsigned long a0)
{
 Container<double>::push((void*)a0, 0.0);
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x4029f0
void Container<double>::push(void* ptr, double arg_0)
{
 unsigned long index; // rax

 index = *((unsigned int *)((char *)ptr + 80));
 if (index <= 9)
 {
 *((unsigned int *)((char *)ptr + 80)) = (unsigned int)index + 1;
 *((double *)((char *)ptr + 8 * index)) = arg_0;
 }
 return;
}


// Function: sub_402a06 at 0x402a06
void sub_402a06(unsigned long a0, unsigned long a1)
{
 Container<double>::get((void*)a0, (int)a1);
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x402a10
void Container<double>::get(void* _this, int arg_0)
{
 return;
}


// Function: sub_402a25 at 0x402a25
void sub_402a25(unsigned long a0)
{
 Container<double>::getSize((void*)a0);
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x402a30
void Container<double>::getSize(void* _this)
{
 return;
}


// Function: sub_402a34 at 0x402a34
void sub_402a34()
{
 return;
}


// Function: _ZNK4Base7getNameEv at 0x402a40
const char* Base::getName()
{
    return "Base";
}

// Function: Base::static_virtual_func at 0x402a42
long long Base::static_virtual_func(int arg_0)
{
    return arg_0 * 2;
}


// Function: sub_402a48 at 0x402a48
void sub_402a48()
{
 return;
}


// Deleting destructor for Base at 0x402a50
int Base_D0Ev(void* _this)
{
    Base::~Base((Base*)_this);
    operator delete(_this);
    return 0;
}


// Function: sub_402a58 at 0x402a58
void sub_402a58()
{
 return;
}


// Function: _ZNK7Derived7getNameEv at 0x402a60
const char* Derived::getName()
{
    return "Derived";
}


// Function: sub_402a68 at 0x402a68
void sub_402a68()
{
 return;
}


// Deleting destructor for Derived at 0x402a70
int Derived_D0Ev(void* _this)
{
    Derived::~Derived((Derived*)_this);
    operator delete(_this);
    return 0;
}


// Function: sub_402a78 at 0x402a78
void sub_402a78()
{
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x402a80
long long MultiDerived::funcA()
{
 return 30;
}


// Function: sub_402a86 at 0x402a86
void sub_402a86()
{
 return;
}


// Function: _ZN12MultiDerivedD0Ev at 0x402a90
int MultiDerived_D0Ev(void* _this)
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 operator delete(_this);
 return;
}


// Function: sub_402a98 at 0x402a98
void sub_402a98()
{
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x402aa0
void MultiDerived::funcB()
{
 return;
}


// Function: sub_402aa6 at 0x402aa6
void sub_402aa6()
{
 _ZN12MultiDerived5funcBEv_thunk();
 return;
}


// Function: _ZThn16_N12MultiDerived5funcBEv at 0x402ab0
long long _ZN12MultiDerived5funcBEv_thunk()
{
 return 40;
}


// Function: sub_402ab6 at 0x402ab6
void sub_402ab6()
{
 return;
}


// Function: _ZThn16_N12MultiDerivedD1Ev at 0x402ac0
void _ZN12MultiDerivedD1Ev_thunk()
{
 return;
}


// Function: sub_402ac1 at 0x402ac1
void sub_402ac1(unsigned long a0)
{
 return;
}


// Function: _ZThn16_N12MultiDerivedD0Ev at 0x402ad0
long long _ZN12MultiDerivedD0Ev_thunk(void* a0)
{
 unsigned long v1; // rax

 operator delete(a0 - 16);
 return v1;
}


// Function: sub_402adc at 0x402adc
void sub_402adc()
{
 return;
}


// Function: _ZN5BaseA5funcAEv at 0x402ae0
void BaseA::funcA()
{
    return;
}


// Function: sub_402ae6 at 0x402ae6
void sub_402ae6()
{
 return;
}


// Function: _ZN5BaseAD2Ev at 0x402af0
void BaseA::~BaseA()
{
    return;
}


// Function: sub_402af1 at 0x402af1
void sub_402af1()
{
 return;
}


// Deleting destructor for BaseA at 0x402b00
int BaseA_D0Ev(void* _this)
{
    BaseA::~BaseA((BaseA*)_this);
    operator delete(_this);
    return 0;
}


// Function: sub_402b08 at 0x402b08
void sub_402b08()
{
 return;
}


// Function: _ZN5BaseB5funcBEv at 0x402b10
void BaseB::funcB()
{
    return;
}


// Function: sub_402b16 at 0x402b16
void sub_402b16()
{
 return;
}


// Function: _ZN5BaseBD2Ev at 0x402b20
void BaseB::~BaseB()
{
    return;
}


// Function: sub_402b21 at 0x402b21
void sub_402b21()
{
 return;
}


// Deleting destructor for BaseB at 0x402b30
int BaseB_D0Ev(void* _this)
{
    BaseB::~BaseB((BaseB*)_this);
    operator delete(_this);
    return 0;
}


// Function: sub_402b38 at 0x402b38
void sub_402b38(unsigned long a0)
{
    MiddleA* obj = (MiddleA*)a0;
    obj->func();
    return;
}


// Function: _ZN7MiddleA4funcEv at 0x402b40
void MiddleA::func()
{
    return;
}


// Function: sub_402b51 at 0x402b51
void sub_402b51()
{
 return;
}


// Function: _ZN7MiddleAD1Ev at 0x402b60
void MiddleA::~MiddleA()
{
    return;
}


// Function: sub_402b61 at 0x402b61
void sub_402b61()
{
 return;
}


// Deleting destructor for MiddleA at 0x402b70
int MiddleA_D0Ev(void* _this)
{
    MiddleA::~MiddleA((MiddleA*)_this);
    operator delete(_this);
    return 0;
}


// Function: sub_402b78 at 0x402b78
void sub_402b78(unsigned long a0)
{
 _ZN7MiddleA4funcEv_thunk(&a0);
 return;
}


// Function: _ZTv0_n24_N7MiddleA4funcEv at 0x402b80
int _ZN7MiddleA4funcEv_thunk(void* *a0)
{
 return 150;
}


// Function: sub_402b9d at 0x402b9d
void sub_402b9d()
{
 return;
}


// Function: _ZTv0_n32_N7MiddleAD1Ev at 0x402ba0
void _ZN7MiddleAD1Ev_thunk()
{
 return;
}


// Function: sub_402ba1 at 0x402ba1
void sub_402ba1(unsigned long a0)
{
 return;
}


// Function: _ZTv0_n32_N7MiddleAD0Ev at 0x402bb0
long long _ZN7MiddleAD0Ev_thunk(void* *a0)
{
 unsigned long v1; // rax
 {
     void* a0_vtable = *(a0);
     char* a0_vtable_char = (char*)a0_vtable;
     operator delete((char *)a0 + a0_vtable_char[32]);
 }
 return v1;
}


// Function: sub_402bbf at 0x402bbf
void sub_402bbf(unsigned long a0)
{
    MiddleB* obj = (MiddleB*)a0;
    obj->func();
    return;
}


// Function: _ZN7MiddleB4funcEv at 0x402bc0
void MiddleB::func()
{
    return;
}


// Function: sub_402bd1 at 0x402bd1
void sub_402bd1()
{
 return;
}


// Function: _ZN7MiddleBD1Ev at 0x402be0
void MiddleB::~MiddleB()
{
    return;
}


// Function: sub_402be1 at 0x402be1
void sub_402be1()
{
 return;
}


// Deleting destructor for MiddleB at 0x402bf0
int MiddleB_D0Ev(void* _this)
{
    MiddleB::~MiddleB((MiddleB*)_this);
    operator delete(_this);
    return 0;
}


// Function: sub_402bf8 at 0x402bf8
void sub_402bf8(unsigned long a0)
{
    void* ptr = (void*)a0;
    int result = _ZN7MiddleB4funcEv_thunk(&ptr);
    return;
}


// Function: _ZTv0_n24_N7MiddleB4funcEv at 0x402c00
int _ZN7MiddleB4funcEv_thunk(void* *a0)
{
 return 200;
}


// Function: sub_402c1d at 0x402c1d
void sub_402c1d()
{
 return;
}


// Function: _ZTv0_n32_N7MiddleBD1Ev at 0x402c20
void _ZN7MiddleBD1Ev_thunk()
{
 return;
}


// Function: sub_402c21 at 0x402c21
void sub_402c21(unsigned long a0)
{
 return;
}


// Function: _ZTv0_n32_N7MiddleBD0Ev at 0x402c30
long long _ZN7MiddleBD0Ev_thunk(void* *a0)
{
 unsigned long v1; // rax
 {
     void* a0_vtable = *(a0);
     char* a0_vtable_char = (char*)a0_vtable;
     operator delete((char *)a0 + a0_vtable_char[32]);
 }
 return v1;
}


// Function: sub_402c3f at 0x402c3f
void sub_402c3f(unsigned long a0)
{
    DiamondDerived* obj = (DiamondDerived*)a0;
    obj->func();
    return;
}


// Function: _ZN14DiamondDerived4funcEv at 0x402c40
void DiamondDerived::func()
{
    return;
}


// Function: sub_402c51 at 0x402c51
void sub_402c51()
{
 return;
}


// Deleting destructor for DiamondDerived at 0x402c60
int DiamondDerived_D0Ev(void* _this)
{
    DiamondDerived::~DiamondDerived((DiamondDerived*)_this);
    operator delete(_this);
    return 0;
}


// Function: sub_402c68 at 0x402c68
void sub_402c68(unsigned long a0)
{
    void* ptr = (void*)a0;
    _ZN14DiamondDerived4funcEv_nonvirtual_thunk(ptr);
    return;
}


// Function: _ZThn16_N14DiamondDerived4funcEv at 0x402c70
int _ZN14DiamondDerived4funcEv_nonvirtual_thunk(void* a0)
{
 return 250;
}


// Function: sub_402c82 at 0x402c82
void sub_402c82()
{
 return;
}


// Function: _ZThn16_N14DiamondDerivedD1Ev at 0x402c90
void _ZN14DiamondDerivedD1Ev_thunk()
{
 return;
}


// Function: sub_402c91 at 0x402c91
void sub_402c91(unsigned long a0)
{
 return;
}


// Function: _ZThn16_N14DiamondDerivedD0Ev at 0x402ca0
long long _ZN14DiamondDerivedD0Ev_thunk(void* a0)
{
 unsigned long v1; // rax

 operator delete(a0 - 16);
 return v1;
}


// Function: sub_402cac at 0x402cac
void sub_402cac(unsigned long a0)
{
 _ZN14DiamondDerived4funcEv_thunk((void**)&a0);
 return;
}


// Function: _ZTv0_n24_N14DiamondDerived4funcEv at 0x402cb0
long long _ZN14DiamondDerived4funcEv_thunk(void** a0)
{
 return 250;
}


// Function: sub_402ccd at 0x402ccd
void sub_402ccd()
{
 return;
}


// Function: _ZTv0_n32_N14DiamondDerivedD1Ev at 0x402cd0
void _ZN14DiamondDerivedD1Ev_thunk2()
{
 return;
}


// Function: sub_402cd1 at 0x402cd1
void sub_402cd1(unsigned long a0)
{
 return;
}


// Function: _ZTv0_n32_N14DiamondDerivedD0Ev at 0x402ce0
long long _ZN14DiamondDerivedD0Ev_thunk2(void* *a0)
{
 unsigned long v1; // rax
 {
     void* a0_vtable = *(a0);
     char* a0_vtable_char = (char*)a0_vtable;
     operator delete((char *)a0 + a0_vtable_char[32]);
 }
 return v1;
}


// Function: sub_402cef at 0x402cef
void sub_402cef()
{
 return;
}


// Function: _ZN11VirtualBase4funcEv at 0x402cf0
void VirtualBase::func()
{
    return;
}


// Function: sub_402cf6 at 0x402cf6
void sub_402cf6()
{
 return;
}


// Function: _ZN11VirtualBaseD2Ev at 0x402d00
void VirtualBase::~VirtualBase()
{
    return;
}


// Function: sub_402d01 at 0x402d01
void sub_402d01()
{
 return;
}


// Deleting destructor for VirtualBase at 0x402d10
int VirtualBase_D0Ev(void* _this)
{
    VirtualBase::~VirtualBase((VirtualBase*)_this);
    operator delete(_this);
    return 0;
}


// Function: sub_402d18 at 0x402d18
void sub_402d18()
{
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x402d20
int RTTIDerivedA_D0Ev(void* _this)
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 operator delete(_this);
 return;
}


// Function: sub_402d28 at 0x402d28
void sub_402d28()
{
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x402d30
void RTTIDerivedA::getType()
{
    return;
}


// Function: sub_402d36 at 0x402d36
void sub_402d36()
{
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x402d40
RTTIBase::~RTTIBase()
{
    return;
}


// Function: sub_402d41 at 0x402d41
void sub_402d41()
{
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x402d50
int RTTIDerivedB_D0Ev(void* _this)
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 operator delete(_this);
 return;
}


// Function: sub_402d58 at 0x402d58
void sub_402d58()
{
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x402d60
void RTTIDerivedB::getType()
{
    return;
}



/* CRT stub function _fini removed by preprocessor */


