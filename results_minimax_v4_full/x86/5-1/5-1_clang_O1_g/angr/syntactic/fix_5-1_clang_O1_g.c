// Angr Decompilation of 5-1_clang_O1_g
// Platform: X86

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <new>
#include <stdint.h>
#include <exception>
#include <cxxabi.h>

// Define missing runtime functions
extern "C" {
void* __cxa_allocate_exception(size_t thrown_size);
void __cxa_throw(void* thrown_exception, void* type_info, void* destructor);
void* __cxa_begin_catch(void* exc_ptr);
void __cxa_end_catch();
void __cxa_rethrow();
void _Unwind_Resume(void* exc_ptr);
}

// Forward declarations for functions called but not defined
void frame_dummy(void);
unsigned int __do_global_ctors_aux(void);
unsigned int * deregister_tm_clones(void);
void register_tm_clones(void);
unsigned int * __do_global_dtors_aux(void);
void test_cpp_member_func(void);
void call_virtual_func(void);
void test_cpp_virtual_func(void);
void test_cpp_multiple_inheritance(void);
void test_cpp_diamond_inheritance(void);
void test_cpp_operator_overload(void);
void test_cpp_template_func(void);
void test_cpp_template_class(void);
void test_cpp_lambda(void);
void test_cpp_exception(void);
void test_cpp_smart_ptr(void);
void test_cpp_rtti(void);
void test_cpp_oo_features(void);

// Forward declarations for classes
class Base {
public:
    virtual void virtual_func(int);
    virtual void getName();
    virtual ~Base();
};

class Derived : public Base {
public:
    virtual void virtual_func(int);
    virtual void getName();
    virtual ~Derived();
};

class MultiDerived : public Base, public Derived {
public:
    int funcA();
    void funcB();
    virtual ~MultiDerived();
};

class DiamondDerived : public MiddleA, public MiddleB {
public:
    void func();
    virtual ~DiamondDerived();
};

class BaseA {
public:
    void funcA();
    virtual ~BaseA();
};

class BaseB {
public:
    void funcB();
    virtual ~BaseB();
};

class VirtualBase {
public:
    virtual void func();
    virtual ~VirtualBase();
};

class MiddleA : virtual public VirtualBase {
public:
    void func();
    virtual ~MiddleA();
};

class MiddleB : virtual public VirtualBase {
public:
    void func();
    virtual ~MiddleB();
};

class RTTIBase {
public:
    virtual ~RTTIBase();
};

class RTTIDerivedA : public RTTIBase {
public:
    void getType();
    virtual ~RTTIDerivedA();
};

class RTTIDerivedB : public RTTIBase {
public:
    void getType();
    virtual ~RTTIDerivedB();
};

class LifecycleClass {
public:
    static unsigned int instance_count;
};

template<class T> class Container {
public:
    Container();
    void push(T);
    T get(int);
    int getSize();
};

// Template function declarations - will be instantiated as needed
template<class T> T template_max(T a, T b);
template<class T> void template_swap(T& a, T& b);

// Explicit template instantiations
template int template_max<int>(int, int);
template void template_swap<int>(int&, int&);

/* CRT stub function _init removed by preprocessor */
// Forward declarations for structs used in the code
struct struct_0 {
    char padding_0[256];
};

struct struct_1 {
    char padding_0[256];
};

struct struct_2 {
    char padding_0[256];
};

struct struct_3 {
    char padding_0[256];
};

extern struct_0 *g_405ff4;

int _init()
{
 if (g_405ff4)
 g_405ff4();
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
 return 0;
}


// Function: sub_401160 at 0x401160
int sub_401160()
{
 void* v1; // ebx

 return 0;
}


// Function: sub_401166 at 0x401166
void sub_401166()
{
}


// Function: _GLOBAL__sub_I_5_1.cpp at 0x401170
extern char _ZNSt8ios_base4InitD1Ev;
extern void _ZStL8__ioinit;
extern unsigned int __dso_handle;

int _GLOBAL__sub_I_5_1.cpp()
{
 unsigned int v2; // eax
 unsigned int v0; // [bp-0xc]

 v0 = v2;
 std::ios_base::Init::Init(&_ZStL8__ioinit);
 return __cxa_atexit(&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
}


// Function: sub_4011ab at 0x4011ab
void sub_4011ab()
{
 // _start() was removed by preprocessor
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4011db at 0x4011db
void sub_4011db()
{
 // Unsupported jumpkind Ijk_SigTRAP at address 4198875
}


// Function: sub_4011dc at 0x4011dc
void sub_4011dc()
{
 return;
}


// Function: __x86.get_pc_thunk_bx at 0x4011e0
void __x86.get_pc_thunk_bx()
{
 return;
}


// Function: sub_4011e4 at 0x4011e4
void sub_4011e4()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_401223 at 0x401223
void sub_401223()
{
}


// Function: sub_401229 at 0x401229
void sub_401229()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */

void register_tm_clones()
{
 // Function removed - stub only
 return;
}


// Function: sub_401277 at 0x401277
void sub_401277()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

unsigned int * __do_global_dtors_aux()
{
 unsigned int *v5; // eax
 struct_0 *v6; // edi
 struct_0 *ptr; // edi
 unsigned int v8; // esi
 unsigned int v9; // ebx
 struct_0 *v10; // esi
 unsigned int v11; // eax
 unsigned int i; // ebx
 unsigned int v13; // eax
 unsigned int *v14; // eax
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 char v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v5 = __x86.get_pc_thunk_di(*((int *)&v2), &v3);
 ptr = &v6->padding_4d5f[19];
 v1 = v8;
 v0 = v9;
 if (ptr->padding_0[108])
 return v5;
 if (*((int *)&ptr->padding_0[24]))
 sub_401160(*((int *)&ptr->padding_0[88]));
 v10 = &ptr->padding_0[864];
 v11 = *((int *)&ptr->padding_0[112]);
 i = (&ptr->padding_0[860] - v10 >> 2) - 1;
 if (*((int *)&ptr->padding_0[112]) < i)
 {
 do
 {
 v13 = v11 + 1;
 *((unsigned int *)&ptr->padding_0[112]) = v13;
 (*((int *)&v10->padding_0[4 * v13]))();
 v11 = *((int *)&ptr->padding_0[112]);
 } while (*((int *)&ptr->padding_0[112]) < i);
 }
 v14 = deregister_tm_clones();
 ptr->padding_0[108] = 1;
 return v14;
}


// Function: sub_40130a at 0x40130a
void sub_40130a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86.get_pc_thunk_dx at 0x401319
void __x86.get_pc_thunk_dx()
{
 return;
}


// Function: __x86.get_pc_thunk_di at 0x40131d
int __x86.get_pc_thunk_di(int a0)
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_401321 at 0x401321
int sub_401321()
{
 test_cpp_member_func();
 return;
}


// Function: _Z20test_cpp_member_funcv at 0x401330
void test_cpp_member_func()
{
 char v1[32]; // [bp-0x28]
 char v2[32]; // [bp-0x24]
 unsigned int result; // [bp-0xd]
 char flag1; // [bp-0x9]
 unsigned int v0; // [bp-0x2c]

 strncpy(v1, "Test", 4);
 memset(v2, 0, 20);
 result = 0;
 flag1 = 0;
 v0 = 10;
 (void)strlen(v1);
 (void)v0;
 return;
}


// Function: sub_4013a3 at 0x4013a3
int sub_4013a3()
{
 test_cpp_constructor();
 return;
}


// Function: _Z20test_cpp_constructorv at 0x4013b0
extern unsigned int _ZN14LifecycleClass14instance_countE;

int test_cpp_constructor()
{
 unsigned int i; // esi
 unsigned int *v2; // eax
 unsigned int *ptr; // ecx

 i = 0;
 v2 = (unsigned int*)malloc(20);
 ptr = v2;
 do
 {
 *(ptr) = i;
 i += 10;
 ptr += 1;
 } while (i != 50);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
 free(v2);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
 return;
}


// Function: sub_401414 at 0x401414
int sub_401414()
{
 call_virtual_func();
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x401420

void call_virtual_func(class Base *arg_0, int arg_1)
{
 (*((int *)*((int *)arg_0)))(arg_0, arg_1);
 return;
}


// Function: sub_401445 at 0x401445
int sub_401445()
{
 test_cpp_virtual_func();
 return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x401450
class Base;

extern char g_405ce4;
extern class Base *g_405d04;

void test_cpp_virtual_func()
{
 struct_0 **v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]
 unsigned int v2; // [bp-0xc]

 v2 = &g_405ce4;
 v0 = &g_405d04;
 v1 = 3;
 Base::virtual_func(&v2, 5);
 (*(v0))(&v0, 5);
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x4014b0

extern char g_405d28;
extern struct_0 *g_405d40;

void test_cpp_multiple_inheritance()
{
 unsigned int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 struct_0 **v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]

 v0 = &g_405d28;
 v2 = &g_405d40;
 v1 = 100;
 v3 = 200;
 MultiDerived::funcA(&v0);
 (*(v2))(&v2);
 return;
}


// Function: sub_40150e at 0x40150e
int sub_40150e()
{
 test_cpp_diamond_inheritance();
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x401510
extern void g_405db0;
extern unsigned int g_405dc8;
extern unsigned int *g_405de4;

void test_cpp_diamond_inheritance()
{
 void* v0; // [bp-0x24]
 char v1; // [bp-0x20]
 unsigned int v2; // [bp-0x1c]
 struct_0 **v3; // [bp-0x14]
 unsigned int v4; // [bp-0x10]

 v0 = &g_405db0;
 v3 = &g_405de4;
 v2 = &g_405dc8;
 v4 = 50;
 thunk to DiamondDerived::func()(&v3);
 *((unsigned int *)&(&v1)[v0[12]]) = 100;
 (*(v3))(&v3);
 return;
}


// Function: sub_401578 at 0x401578
void sub_401578()
{
 test_cpp_operator_overload();
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x401580
void test_cpp_operator_overload()
{
 return;
}


// Function: sub_401586 at 0x401586
void sub_401586()
{
 test_cpp_template_func();
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x401590
void test_cpp_template_func()
{
 return;
}


// Function: sub_401596 at 0x401596
void sub_401596()
{
 test_cpp_template_class();
 return;
}


// Function: _Z23test_cpp_template_classv at 0x4015a0
void test_cpp_template_class()
{
 return;
}


// Function: sub_4015a6 at 0x4015a6
void sub_4015a6()
{
 test_cpp_lambda();
 return;
}


// Function: _Z15test_cpp_lambdav at 0x4015b0
void test_cpp_lambda()
{
 return;
}


// Function: sub_4015b6 at 0x4015b6
int sub_4015b6()
{
 test_cpp_exception();
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x4015c0
extern char _ZTIi;

void test_cpp_exception()
{
 unsigned int *ptr; // eax
 unsigned int v2; // esi
 unsigned int v3; // edx

 ptr = __cxa_allocate_exception(4);
 *(ptr) = 42;
 v2 = __cxa_throw(ptr, &_ZTIi, 0);
 if (v3 != 3 && v3 != 2)
 _Unwind_Resume(v2); /* do not return */
 __cxa_begin_catch(v2);
 __cxa_end_catch(v2);
 return;
}


// Function: sub_401601 at 0x401601
int sub_401601()
{
 unsigned int result; // edx
 unsigned int v3; // eax
 unsigned int v5; // ebx

 if (result != 1)
 {
 if (result != 1)
 goto LABEL_0x40169e;
 __cxa_begin_catch(v3);
 __cxa_end_catch(v3);
 __cxa_throw(__cxa_allocate_exception(1), v5 - 848, 0);
 }
 __cxa_begin_catch(v3);
 __cxa_rethrow(v3);
}


// Function: sub_40161f at 0x40161f
void sub_40161f()
{
 __cxa_end_catch();
}


// Function: sub_4016a6 at 0x4016a6
void sub_4016a6()
{
 test_cpp_smart_ptr();
 return;
}


// Function: _Z18test_cpp_smart_ptrv at 0x4016b0
void test_cpp_smart_ptr()
{
 return;
}


// Function: sub_4016b6 at 0x4016b6
int sub_4016b6()
{
 test_cpp_rtti();
 return;
}


// Function: _Z13test_cpp_rttiv at 0x4016c0
typedef struct struct_4 {
 char padding_0[4];
 struct struct_5 *field_4;
} struct_4;

typedef struct struct_5 {
 unsigned int field_0;
} struct_5;

extern unsigned int _ZTI12RTTIDerivedA;
extern unsigned int _ZTI12RTTIDerivedB;
extern char _ZTS12RTTIDerivedB;
extern char g_405ecc;
extern char g_405ee0;

void test_cpp_rtti()
{
 void** ptr; // edi
 void** p; // ebp
 char *v8; // eax
 char result; // al
 unsigned int v0; // [bp-0x24]
 unsigned int v1; // [bp-0x20]
 char *v2; // [bp-0x1c]
 void** v3; // [bp-0x18]
 struct_4 **v4; // [bp-0x14]

 ptr = (void**)operator new(4);
 *(ptr) = &g_405ecc;
 p = (void**)operator new(4);
 *(p) = &g_405ee0;
 v2 = (char *)*((int *)(*(int*)ptr + 4) + 1);
 v8 = (char *)*((int *)(*(int*)p + 4) + 1);
 if (v8 == &_ZTS12RTTIDerivedB)
 {
 result = 1;
 }
 else if (*(v8) == 42)
 {
 result = 0;
 }
 else
 {
 result = !strcmp(v8, &_ZTS12RTTIDerivedB);
 }
 v1 = 0;
 v0 = &_ZTI12RTTIDerivedA;
 v3 = ptr;
 v1 = 0;
 v0 = &_ZTI12RTTIDerivedB;
 strlen(&v2[*(v2) == 42]);
 // RTTI type info call - simplified
 v3 = v3;
 v4 = v4;
 return;
}


// Function: sub_40180d at 0x40180d
int sub_40180d()
{
 test_cpp_oo_features();
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x401810
// struct_0, struct_1, struct_2, struct_3 already defined globally

extern unsigned int _ZN14LifecycleClass14instance_countE;
extern char g_403081;
extern char g_40309f;
extern char g_4030bb;
extern char g_4030d7;
extern char g_4030f3;
extern char g_403110;
extern char g_40312c;
extern char g_403148;
extern char g_403164;
extern char g_403180;
extern char g_40319d;
extern char g_4031ba;
extern char g_4031e5;
extern struct_0 *g_405ce4;
extern struct_1 *g_405d04;
extern unsigned int g_405d28;
extern struct_2 *g_405d40;
extern void g_405db0;
extern unsigned int g_405dc8;
extern struct_3 *g_405de4;

void test_cpp_oo_features()
{
 unsigned int i; // esi
 unsigned int *v11; // eax
 unsigned int *ptr; // ecx
 struct_1 **v0; // [bp-0x3c], Other Possible Types: void*, unsigned int
 char v1; // [bp-0x38], Other Possible Types: unsigned int
 struct_2 **v2; // [bp-0x34], Other Possible Types: char, unsigned int
 unsigned int v3; // [bp-0x30]
 struct_3 **v4; // [bp-0x2c]
 unsigned int v5; // [bp-0x28]
 unsigned int result; // [bp-0x1d]
 char flag1; // [bp-0x19]
 struct_0 **v8; // [bp-0x14]

 puts(&g_4031e5);
 strncpy(&v1, "Test", 4);
 memset(&v2, 0, 20);
 result = 0;
 flag1 = 0;
 v0 = 10;
 strlen(&v1);
 printf(&g_403081);
 i = 0;
 v11 = (unsigned int*)operator new[](20);
 ptr = v11;
 do
 {
 *(ptr) = i;
 i += 10;
 ptr += 1;
 } while (i != 50);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
 operator delete[](v11);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
 printf(&g_40309f);
 v8 = &g_405ce4;
 v0 = &g_405d04;
 v1 = 3;
 g_405ce4(&v8, 5);
 (*(v0))(&v0, 5);
 printf(&g_4030bb);
 v0 = &g_405d28;
 v2 = &g_405d40;
 v1 = 100;
 v3 = 200;
 g_405d40(&v2);
 printf(&g_4030d7);
 v0 = &g_405db0;
 v4 = &g_405de4;
 v2 = &g_405dc8;
 v5 = 50;
 g_405de4(&v4);
 *((unsigned int *)((char *)&v1 + v0[12])) = 100;
 (*(v4))(&v4);
 printf(&g_4030f3);
 printf(&g_403110);
 printf(&g_40312c);
 printf(&g_403148);
 printf(&g_403164);
 test_cpp_exception();
 printf(&g_403180);
 printf(&g_40319d);
 test_cpp_rtti();
 printf(&g_4031ba);
 return;
}


// Function: sub_401aa9 at 0x401aa9
int sub_401aa9()
{
 main();
 return;
}


// Function: main at 0x401ab0
unsigned int main()
{
 test_cpp_oo_features();
 return 0;
}


// Function: sub_401acc at 0x401acc
void sub_401acc(unsigned int a0, unsigned int a1)
{
 Base::virtual_func();
 return;
}


// Function: _ZN4Base12virtual_funcEi at 0x401ad0
void Base::virtual_func(int arg_1)
{
 // Empty function body
}


// Function: sub_401ad8 at 0x401ad8
void sub_401ad8(unsigned int a0, unsigned int a1)
{
 Derived::virtual_func();
 return;
}


// Function: _ZN7Derived12virtual_funcEi at 0x401ae0
void Derived::virtual_func(void* this, int arg_0)
{
 return;
}


// Function: sub_401aed at 0x401aed
void sub_401aed()
{
 return;
}


// Function: _ZN4BaseD2Ev at 0x401af0
int Base::~Base(void* this)
{
 return;
}


// Function: sub_401af1 at 0x401af1
void sub_401af1()
{
 return;
}


// Function: _ZN12MultiDerivedD2Ev at 0x401b00
int MultiDerived::~MultiDerived(void* this)
{
 return;
}


// Function: sub_401b01 at 0x401b01
void sub_401b01()
{
 return;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x401b10
int DiamondDerived::~DiamondDerived(void* this)
{
 return;
}


// Function: sub_401b11 at 0x401b11
void sub_401b11(unsigned int a0, unsigned int a1)
{
 template_max<int>();
 return;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x401b20
int template_max<int>(int arg_0, int arg_1)
{
 if (arg_0 <= arg_1)
 return arg_1;
 return arg_0;
}


// Function: sub_401b2e at 0x401b2e
void sub_401b2e(unsigned int a0)
{
 template_max<double>();
 return;
}


// Failed to decompile function _Z12template_maxIdET_S0_S0_ at 0x401b30
// Function: sub_401b41 at 0x401b41
void sub_401b41(unsigned int a0, unsigned int a1)
{
 template_swap<int>();
 return;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x401b50
void template_swap<int>(int &ptr, int &p)
{
 unsigned int v0; // edx

 v0 = *((int *)ptr);
 *((int *)ptr) = *((int *)p);
 *((unsigned int *)p) = v0;
 return;
}


// Function: sub_401b63 at 0x401b63
void sub_401b63(unsigned int a0)
{
 Container<int>::Container();
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x401b70
int Container<int>::Container(void* ptr)
{
 *((unsigned int *)&ptr[40]) = 0;
 return;
}


// Function: sub_401b7c at 0x401b7c
void sub_401b7c(unsigned int a0)
{
 Container<int>::push();
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x401b80
void Container<int>::push(void* ptr, int arg_0)
{
 unsigned int index; // ecx

 index = (int)ptr[40];
 if (index <= 9)
 {
 *((unsigned int *)&ptr[40]) = index + 1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 }
 return;
}


// Function: sub_401b9c at 0x401b9c
void sub_401b9c(unsigned int a0, unsigned int a1)
{
 Container<int>::get();
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x401ba0
void Container<int>::get(void* this, int arg_0)
{
 return;
}


// Function: sub_401bb7 at 0x401bb7
void sub_401bb7(unsigned int a0)
{
 Container<int>::getSize();
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x401bc0
void Container<int>::getSize(void* this)
{
 return;
}


// Function: sub_401bc8 at 0x401bc8
void sub_401bc8(unsigned int a0)
{
 Container<double>::Container();
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x401bd0
int Container<double>::Container(void* ptr)
{
 *((unsigned int *)&ptr[80]) = 0;
 return;
}


// Function: sub_401bdc at 0x401bdc
void sub_401bdc(unsigned int a0)
{
 Container<double>::push();
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x401be0
void Container<double>::push(void* ptr)
{
 unsigned int idx; // ecx

 // Note: Unable to decompile complex expression, simplified version
 idx = (int)((unsigned int*)ptr)[20];  // ptr[80] / 4
 if (idx <= 9)
 {
 *((unsigned int *)&ptr[80]) = idx + 1;
 *((unsigned long long *)((char *)ptr + 8 * idx)) = 0;  // nan placeholder
 }
 return;
}


// Function: sub_401bfe at 0x401bfe
void sub_401bfe(unsigned int a0, unsigned int a1)
{
 Container<double>::get();
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x401c00
double Container<double>::get(void* this_ptr, int arg_0)
{
 void* this = this_ptr;
 // Simplified implementation
 unsigned int size = *((unsigned int *)((char *)this + 80));
 if (arg_0 >= 0 && (int)size > arg_0)
 {
 return 0.0; // nan placeholder
 }
 return 0.0;
}


// Function: sub_401c19 at 0x401c19
void sub_401c19(unsigned int a0)
{
 Container<double>::getSize();
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x401c20
void Container<double>::getSize(void* this)
{
 return;
}


// Function: sub_401c28 at 0x401c28
void sub_401c28()
{
 Base::getName();
 return;
}


// Function: _ZNK4Base7getNameEv at 0x401c30
void Base::getName(void* this)
{
 return;
}


// Function: sub_401c43 at 0x401c43
int sub_401c43()
{
 return;
}


// Function: _ZN4BaseD0Ev at 0x401c50
int Base::~Base(void* this)
{
 operator delete(this);
 return;
}


// Function: sub_401c71 at 0x401c71
void sub_401c71()
{
 Derived::getName();
 return;
}


// Function: _ZNK7Derived7getNameEv at 0x401c80
void Derived::getName(void* this)
{
 return;
}


// Function: sub_401c93 at 0x401c93
int sub_401c93()
{
 return;
}


// Function: _ZN7DerivedD0Ev at 0x401ca0
int Derived::~Derived(void* this)
{
 operator delete(this);
 return;
}


// Function: sub_401cc1 at 0x401cc1
void sub_401cc1()
{
 MultiDerived::funcA();
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x401cd0
int MultiDerived::funcA()
{
 return 30;
}


// Function: sub_401cd6 at 0x401cd6
int sub_401cd6()
{
 return;
}


// Function: _ZN12MultiDerivedD0Ev at 0x401ce0
int MultiDerived::~MultiDerived(void* this)
{
 operator delete(this);
 return;
}


// Function: sub_401d01 at 0x401d01
void sub_401d01()
{
 MultiDerived::funcB();
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x401d10
void MultiDerived::funcB(void* this)
{
 return;
}


// Function: sub_401d16 at 0x401d16
void sub_401d16()
{
 non-virtual thunk to MultiDerived::funcB()();
 return;
}


// Function: _ZThn8_N12MultiDerived5funcBEv at 0x401d20
unsigned int non-virtual thunk to MultiDerived::funcB()()
{
 return 40;
}


// Function: sub_401d26 at 0x401d26
void sub_401d26()
{
 return;
}


// Function: _ZThn8_N12MultiDerivedD1Ev at 0x401d30
void non-virtual thunk to MultiDerived::~MultiDerived()()
{
 return;
}


// Function: sub_401d31 at 0x401d31
int sub_401d31()
{
 return;
}


// Function: _ZThn8_N12MultiDerivedD0Ev at 0x401d40
unsigned int non-virtual thunk to MultiDerived::~MultiDerived()(void* a0)
{
 return operator delete(a0 - 8);
}


// Function: sub_401d64 at 0x401d64
void sub_401d64()
{
 BaseA::funcA();
 return;
}


// Function: _ZN5BaseA5funcAEv at 0x401d70
void BaseA::funcA(void* this)
{
 return;
}


// Function: sub_401d76 at 0x401d76
void sub_401d76()
{
 return;
}


// Function: _ZN5BaseAD2Ev at 0x401d80
int BaseA::~BaseA(void* this)
{
 return;
}


// Function: sub_401d81 at 0x401d81
int sub_401d81()
{
 return;
}


// Function: _ZN5BaseAD0Ev at 0x401d90
int BaseA::~BaseA(void* this)
{
 operator delete(this);
 return;
}


// Function: sub_401db1 at 0x401db1
void sub_401db1()
{
 BaseB::funcB();
 return;
}


// Function: _ZN5BaseB5funcBEv at 0x401dc0
void BaseB::funcB(void* this)
{
 return;
}


// Function: sub_401dc6 at 0x401dc6
void sub_401dc6()
{
 return;
}


// Function: _ZN5BaseBD2Ev at 0x401dd0
int BaseB::~BaseB(void* this)
{
 return;
}


// Function: sub_401dd1 at 0x401dd1
int sub_401dd1()
{
 return;
}


// Function: _ZN5BaseBD0Ev at 0x401de0
int BaseB::~BaseB(void* this)
{
 operator delete(this);
 return;
}


// Function: sub_401e01 at 0x401e01
void sub_401e01(unsigned int a0)
{
 MiddleA::func();
 return;
}


// Function: _ZN7MiddleA4funcEv at 0x401e10
void MiddleA::func(void* this)
{
 return;
}


// Function: sub_401e23 at 0x401e23
void sub_401e23()
{
 return;
}


// Function: _ZN7MiddleAD1Ev at 0x401e30
int MiddleA::~MiddleA(void* this)
{
 return;
}


// Function: sub_401e31 at 0x401e31
int sub_401e31()
{
 return;
}


// Function: _ZN7MiddleAD0Ev at 0x401e40
int MiddleA::~MiddleA(void* this)
{
 operator delete(this);
 return;
}


// Function: sub_401e61 at 0x401e61
void sub_401e61(unsigned int a0)
{
 thunk to MiddleA::func()();
 return;
}


// Function: _ZTv0_n12_N7MiddleA4funcEv at 0x401e70
int thunk to MiddleA::func()(void* *a0)
{
 return 150 + *((int *)(4 + *((int *)(*((int *)((char *)a0 + (*(a0))[12])) - 12)) + (char *)a0 + (*(a0))[12]));
}


// Function: sub_401e8c at 0x401e8c
void sub_401e8c()
{
 return;
}


// Function: _ZTv0_n16_N7MiddleAD1Ev at 0x401e90
void thunk to MiddleA::~MiddleA()()
{
 return;
}


// Function: sub_401e91 at 0x401e91
int sub_401e91()
{
 return;
}


// Function: _ZTv0_n16_N7MiddleAD0Ev at 0x401ea0
unsigned int thunk to MiddleA::~MiddleA()(void* *a0)
{
 return operator delete((char *)a0 + (*(a0))[16]);
}


// Function: sub_401ec6 at 0x401ec6
void sub_401ec6(unsigned int a0)
{
 MiddleB::func();
 return;
}


// Function: _ZN7MiddleB4funcEv at 0x401ed0
void MiddleB::func(void* this)
{
 return;
}


// Function: sub_401ee3 at 0x401ee3
void sub_401ee3()
{
 return;
}


// Function: _ZN7MiddleBD1Ev at 0x401ef0
int MiddleB::~MiddleB(void* this)
{
 return;
}


// Function: sub_401ef1 at 0x401ef1
int sub_401ef1()
{
 return;
}


// Function: _ZN7MiddleBD0Ev at 0x401f00
int MiddleB::~MiddleB(void* this)
{
 operator delete(this);
 return;
}


// Function: sub_401f21 at 0x401f21
void sub_401f21(unsigned int a0)
{
 thunk to MiddleB::func()();
 return;
}


// Function: _ZTv0_n12_N7MiddleB4funcEv at 0x401f30
int thunk to MiddleB::func()(void* *a0)
{
 return 200 + *((int *)(4 + *((int *)(*((int *)((char *)a0 + (*(a0))[12])) - 12)) + (char *)a0 + (*(a0))[12]));
}


// Function: sub_401f4c at 0x401f4c
void sub_401f4c()
{
 return;
}


// Function: _ZTv0_n16_N7MiddleBD1Ev at 0x401f50
void thunk to MiddleB::~MiddleB()()
{
 return;
}


// Function: sub_401f51 at 0x401f51
int sub_401f51()
{
 return;
}


// Function: _ZTv0_n16_N7MiddleBD0Ev at 0x401f60
unsigned int thunk to MiddleB::~MiddleB()(void* *a0)
{
 return operator delete((char *)a0 + (*(a0))[16]);
}


// Function: sub_401f86 at 0x401f86
void sub_401f86(unsigned int a0)
{
 DiamondDerived::func();
 return;
}


// Function: _ZN14DiamondDerived4funcEv at 0x401f90
void DiamondDerived::func(void* this)
{
 return;
}


// Function: sub_401fa3 at 0x401fa3
int sub_401fa3()
{
 return;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x401fb0
int DiamondDerived::~DiamondDerived(void* this)
{
 operator delete(this);
 return;
}


// Function: sub_401fd1 at 0x401fd1
void sub_401fd1(unsigned int a0)
{
 non-virtual thunk to DiamondDerived::func()();
 return;
}


// Function: _ZThn8_N14DiamondDerived4funcEv at 0x401fe0
int non-virtual thunk to DiamondDerived::func()(void* a0)
{
 return 250 + *((int *)(-4 + (char *)a0 + *((int *)((int)a0[8] - 12))));
}


// Function: sub_401ff4 at 0x401ff4
void sub_401ff4()
{
 return;
}


// Function: _ZThn8_N14DiamondDerivedD1Ev at 0x402000
void non-virtual thunk to DiamondDerived::~DiamondDerived()()
{
 return;
}


// Function: sub_402001 at 0x402001
int sub_402001()
{
 return;
}


// Function: _ZThn8_N14DiamondDerivedD0Ev at 0x402010
unsigned int non-virtual thunk to DiamondDerived::~DiamondDerived()(void* a0)
{
 return operator delete(a0 - 8);
}


// Function: sub_402034 at 0x402034
void sub_402034(unsigned int a0)
{
 thunk to DiamondDerived::func()();
 return;
}


// Function: _ZTv0_n12_N14DiamondDerived4funcEv at 0x402040
int thunk to DiamondDerived::func()()
{
 void* *v1; // eax
 void* *v0; // [bp+0x4]

 v1 = v0;
 return 250 + *((int *)(4 + *((int *)(*((int *)((char *)v1 + (*(v1))[12])) - 12)) + (char *)v1 + (*(v1))[12]));
}


// Function: sub_40205c at 0x40205c
void sub_40205c()
{
 return;
}


// Function: _ZTv0_n16_N14DiamondDerivedD1Ev at 0x402060
void thunk to DiamondDerived::~DiamondDerived()()
{
 return;
}


// Function: sub_402061 at 0x402061
int sub_402061()
{
 return;
}


// Function: _ZTv0_n16_N14DiamondDerivedD0Ev at 0x402070
unsigned int thunk to DiamondDerived::~DiamondDerived()(void* *a0)
{
 return operator delete((char *)a0 + (*(a0))[16]);
}


// Function: sub_402096 at 0x402096
void sub_402096()
{
 VirtualBase::func();
 return;
}


// Function: _ZN11VirtualBase4funcEv at 0x4020a0
void VirtualBase::func(void* this)
{
 return;
}


// Function: sub_4020a6 at 0x4020a6
void sub_4020a6()
{
 return;
}


// Function: _ZN11VirtualBaseD2Ev at 0x4020b0
int VirtualBase::~VirtualBase(void* this)
{
 return;
}


// Function: sub_4020b1 at 0x4020b1
int sub_4020b1()
{
 return;
}


// Function: _ZN11VirtualBaseD0Ev at 0x4020c0
int VirtualBase::~VirtualBase(void* this)
{
 operator delete(this);
 return;
}


// Function: sub_4020e1 at 0x4020e1
int sub_4020e1()
{
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x4020f0
int RTTIDerivedA::~RTTIDerivedA(void* this)
{
 operator delete(this);
 return;
}


// Function: sub_402111 at 0x402111
void sub_402111()
{
 RTTIDerivedA::getType();
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x402120
void RTTIDerivedA::getType(void* this)
{
 return;
}


// Function: sub_402126 at 0x402126
void sub_402126()
{
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x402130
int RTTIBase::~RTTIBase(void* this)
{
 return;
}


// Function: sub_402131 at 0x402131
int sub_402131()
{
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x402140
int RTTIDerivedB::~RTTIDerivedB(void* this)
{
 operator delete(this);
 return;
}


// Function: sub_402161 at 0x402161
void sub_402161()
{
 RTTIDerivedB::getType();
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x402170
void RTTIDerivedB::getType(void* this)
{
 return;
}


// Function: sub_402176 at 0x402176
void sub_402176()
{
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

unsigned int __do_global_ctors_aux()
{
 struct_0 *v2; // edx
 struct_0 *ptr; // edx
 unsigned int *v4; // eax
 unsigned int v5; // ebx
 struct_0 *v6; // ebx
 struct_0 *p; // ebx
 unsigned int v0; // [bp-0x8]

 __x86.get_pc_thunk_dx();
 ptr = &v2[1].padding_0[867];
 v4 = *((int *)&ptr->padding_0[872]);
 if (*((int *)&ptr->padding_0[872]) == 0xffffffff)
 return 4294967295;
 v0 = v5;
 v6 = &ptr->padding_0[872];
 do
 {
 p = v6;
 v4();
 v4 = *((int *)&p->padding_0[4]);
 v6 = &p->padding_0[4];
 } while (*((int *)&p->padding_0[4]) != 0xffffffff);
 return 4294967295;
}


// Function: sub_4021c2 at 0x4021c2
void sub_4021c2()
{
}



/* CRT stub function _fini removed by preprocessor */


