// Angr Decompilation of 5-1_gcc_O1_no_g
// Platform: ARMEL

#include <cstring>
#include <cstdio>
#include <cstdlib>

// Forward declarations for template functions
template<typename T> T template_max(T a, T b);
template<typename T> void template_swap(T& a, T& b);
template<typename T> class Container;

// Forward declarations for operators
void* operator new(unsigned int size);
void operator delete(void* ptr);

// Declare missing functions
void __stack_chk_fail(void);
int armg_calculate_condition(int, unsigned int, unsigned int, unsigned int);

// Exception handling functions
void* __cxa_allocate_exception(unsigned int);
void __cxa_throw(void*, void*, void*);
void* __cxa_begin_catch(void*);
void __cxa_end_catch(void*);
void* __cxa_rethrow(void*);
void __cxa_end_cleanup(void);

// Type info
class type_info {
public:
    virtual ~type_info();
    bool operator==(const type_info& other) const;
    bool operator!=(const type_info& other) const;
    int before(const type_info& other) const;
    const char* name() const;
};

/* CRT stub function _init removed by preprocessor */



// Function: sub_109bc at 0x109bc
extern unsigned int g_22008;

int sub_109bc()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 goto g_22008;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_10b40 at 0x10b40
void sub_10b40()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: _Z20test_cpp_member_funcv at 0x10c00
extern unsigned int __glibc___stack_chk_guard;

void test_cpp_member_func()
{
 unsigned int v4; // lr
 char v0[31]; // [bp-0x2c]
 char result; // [bp-0xd]
 unsigned int v2; // [bp-0xc]
 unsigned int v3; // [bp-0x4]

 v3 = v4;
 v2 = __glibc___stack_chk_guard;
 strncpy(&v0, "Test", 31);
 result = 0;
 strlen(&v0);
 if ((v2 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return;
}


// Function: test_cpp_constructor at 0x10c6c
extern unsigned int _ZN14LifecycleClass14instance_countE;

// Forward declarations for operators
void* operator new(unsigned int size);
void operator delete(void* ptr);

void test_cpp_constructor()
{
 int *ptr; // r0

 ptr = (int*)operator new(20);
 ptr[1] = 10;
 ptr[2] = 20;
 ptr[3] = 30;
 ptr[4] = 40;
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
 operator delete(ptr);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x10cd0
void call_virtual_func(void *arg_0, int arg_1)
{
 // Virtual function call through vtable
 int (**vtable)() = *(int (**)()**)arg_0;
 vtable[0]();
 return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x10ce4
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

class MiddleA {
public:
    virtual void func();
};

class MiddleB {
public:
    virtual void func();
};

class DiamondDerived : public MiddleA, public MiddleB {
public:
    virtual void func();
    virtual ~DiamondDerived();
};

class MultiDerived : public Base {
public:
    virtual void funcA();
    virtual void funcB();
    virtual ~MultiDerived();
};

class RTTIDerivedA {
public:
    virtual void getType();
    virtual ~RTTIDerivedA();
};

class RTTIDerivedB {
public:
    virtual void getType();
    virtual ~RTTIDerivedB();
};

extern unsigned int __glibc___stack_chk_guard;
extern Base g_1187c;
extern Base g_11894;

void test_cpp_virtual_func()
{
 Base v0; // [bp-0x18]
 Base v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]

 v3 = __glibc___stack_chk_guard;
 *((unsigned int *)&v0) = 71804;
 *((unsigned int *)&v1) = 71828;
 v2 = 3;
 call_virtual_func(&v0, 5);
 call_virtual_func(&v1, 5);
 if ((v3 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x10d68
void test_cpp_multiple_inheritance()
{
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x10d70
extern unsigned int __glibc___stack_chk_guard;
extern unsigned int g_11934;
extern unsigned int g_1194c;
extern char g_11968;

void test_cpp_diamond_inheritance()
{
 unsigned int v0; // [bp-0x24]
 unsigned int v1; // [bp-0x1c]
 unsigned int v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]
 unsigned int v4; // [bp-0xc]

 v4 = __glibc___stack_chk_guard;
 v0 = 71988;
 v2 = 72040;
 v1 = 72012;
 v3 = 50;
 thunk to DiamondDerived::func()(&v2);
 v3 = 100;
 thunk to DiamondDerived::func()(&v2);
 if ((v4 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x10df4
void test_cpp_operator_overload()
{
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x10dfc
extern unsigned int __glibc___stack_chk_guard;

void test_cpp_template_func()
{
 unsigned int v3; // r0
 unsigned int v4; // r1
 unsigned int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 unsigned int v2; // [bp-0x14]

 v2 = __glibc___stack_chk_guard;
 template_max<int>(3, 7);
 v3 = template_max<double>(0, 0x40040000, 0, 0x3ff80000);
 v0 = 10;
 v1 = 20;
 template_swap<int>(&v0, &v1);
 __aeabi_d2iz(v3, v4);
 if ((v2 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return;
}


// Function: _Z23test_cpp_template_classv at 0x10eac
void test_cpp_template_class()
{
 return;
}


// Function: _Z15test_cpp_lambdav at 0x10eb4
void test_cpp_lambda()
{
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x10ebc
extern unsigned int CXXABI_1_3::_ZTIi;
extern unsigned int _ZTIZ18test_cpp_exceptionvE16DerivedException;

void test_cpp_exception()
{
 void* ptr; // r0
 unsigned int result; // r1
 void* v10; // r0
 char v0; // [bp-0x10]
 char v1; // [bp-0xc]
 char v2; // [bp-0x8]
 char v3; // [bp-0x4]

 ptr = __cxa_allocate_exception(4);
 *(int*)ptr = 42;
 __cxa_throw(ptr, (void*)0x21e70, (void*)0);
 v10 = __cxa_begin_catch(ptr);
 if (result != 1)
 {
 if (!((char)armg_calculate_condition(18, result, 1, 0)))
 goto LABEL_10ee8;
 }
 else
 {
 if (!((char)armg_calculate_condition(18, result, 1, 0)))
 {
LABEL_10ee8:
 __cxa_end_catch(__cxa_rethrow());
 }
 }
 if (result != 1)
 __cxa_end_cleanup();
 v10 = __cxa_begin_catch(ptr);
 __cxa_end_catch(v10);
 __cxa_throw(__cxa_allocate_exception(1), (void*)0x1199c, (void*)0);
 if (result != 2)
 {
 if (result != 3)
 {
 __cxa_end_cleanup();
 }
 else
 {
 __cxa_end_catch(__cxa_begin_catch(ptr));
 return;
 }
 }
 __cxa_end_catch(__cxa_begin_catch(ptr));
 return;
}


// Function: _Z18test_cpp_smart_ptrv at 0x10f78
void test_cpp_smart_ptr()
{
 return;
}


// Function: _Z13test_cpp_rttiv at 0x10f84
extern char _ZTI12RTTIDerivedA;
extern char g_1197c;
extern char g_11990;

void test_cpp_rtti()
{
 void* *p; // r5
 void* *ptr; // r4
 unsigned int result; // r0
 char *cur; // r0

 p = operator new(4);
 *(p) = 72060;
 ptr = operator new(4);
 *(ptr) = 72080;
 result = (unsigned int)std::type_info::operator==((int)(*(p))[4], 0x1184c);
 if (!result)
 {
 if (!armg_calculate_condition(18, result, 0, 0))
 goto LABEL_10fca;
LABEL_10fc9:
 }
 else
 {
 if (armg_calculate_condition(18, result, 0, 0))
 goto LABEL_10fc9;
LABEL_10fca:
 }
 cur = *((int *)((int)(*(p))[4] + 4));
 if (*(cur) == 42)
 cur += 1;
 strlen(cur);
 (int)(*(p))[4](p);
 (int)(*(ptr))[4](ptr);
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x11074
extern char g_115e4;
extern char g_11608;
extern char g_11644;
extern char g_11660;
extern char g_1167c;
extern char g_1169c;
extern char g_116b8;
extern char g_116d4;
extern char g_116f0;
extern char g_1170c;
extern char g_1172c;
extern char g_1174c;

void test_cpp_oo_features()
{
 puts((const char*)0x115e4);
 test_cpp_member_func();
 __printf_chk(1, (const char*)0x11608, (unsigned int)test_cpp_constructor());
 test_cpp_virtual_func();
 __printf_chk(1, (const char*)0x11644, 0);
 test_cpp_multiple_inheritance();
 __printf_chk(1, (const char*)0x11660, 0);
 test_cpp_diamond_inheritance();
 __printf_chk(1, (const char*)0x1167c, 0);
 __printf_chk(1, (const char*)0x1169c, 22);
 test_cpp_template_func();
 __printf_chk(1, (const char*)0x116d4, 16);
 __printf_chk(1, (const char*)0x116f0, 85);
 test_cpp_exception();
 test_cpp_smart_ptr();
 __printf_chk(1, (const char*)0x1174c, 0);
 return;
}


// Function: main at 0x1119c
unsigned int main()
{
 test_cpp_oo_features();
 return 0;
}


// Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv at 0x111ac
extern void _ZStL8__ioinit;
extern unsigned int __dso_handle;

int _GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 unsigned int v0; // r0

 v0 = __aeabi_atexit((void*)0x22098, (void(*)())0x22098, (void*)0x2208c);
 return __aeabi_atexit((void*)0x22098, (void(*)())0x22098, (void*)0x2208c);
}


// Function: _ZN4Base12virtual_funcEi at 0x111dc
void Base::virtual_func(int arg_0)
{
 return;
}


// Function: _ZNK4Base7getNameEv at 0x111e4
void Base::getName()
{
 return;
}


// Function: _ZN4BaseD1Ev at 0x111f0
Base::~Base()
{
}


// Function: _ZN7Derived12virtual_funcEi at 0x111f4
void Derived::virtual_func(int arg_0)
{
 return;
}


// Function: _ZNK7Derived7getNameEv at 0x11200
void Derived::getName()
{
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x1120c
void MultiDerived::funcA()
{
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x11214
void MultiDerived::funcB()
{
 return;
}


// Function: _ZThn8_N12MultiDerived5funcBEv at 0x1121c
unsigned int thunk_MultiDerived_funcB(void* a0)
{
 return 40;
}


// Function: _ZN7MiddleA4funcEv at 0x11224
void MiddleA::func()
{
 return;
}

void MiddleA::getName()
{
 return;
}


// Function: _ZTv0_n12_N7MiddleA4funcEv at 0x1123c
int _ZTv0_n12_N7MiddleA4funcEv(void* a0)
{
 int temp1 = ((int*)a0)[3];
 int temp2 = *((int *)((char *)a0 + temp1));
 int temp3 = *(temp2 - 12);
 return *((int *)(4 + (char *)a0 + temp1 + temp3)) + 150;
}


// Function: _ZN7MiddleB4funcEv at 0x11260
void MiddleB::func()
{
 return;
}


// Function: _ZTv0_n12_N7MiddleB4funcEv at 0x11278
int thunk_MiddleB_func(void* a0)
{
 return *((int *)(4 + (char *)a0 + ((int*)a0)[12] + *((int *)(*((int *)((char *)a0 + ((int*)a0)[12])) - 12)))) + 200;
}


// Function: _ZN14DiamondDerived4funcEv at 0x1129c
void DiamondDerived::func()
{
 return;
}


// Function: _ZTv0_n12_N14DiamondDerived4funcEv at 0x112b4
int thunk_DiamondDerived_func(void* a0)
{
 return *((int *)(4 + (char *)a0 + ((int*)a0)[12] + *((int *)(*((int *)((char *)a0 + ((int*)a0)[12])) - 12)))) + 250;
}


// Function: _ZThn8_N14DiamondDerived4funcEv at 0x112d8
int non_virtual_thunk_DiamondDerived_func(void* a0)
{
 return *((int *)(-4 + (char *)a0 + *((int *)((int)a0[8] - 12)))) + 250;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x112f0
void RTTIDerivedA::getType()
{
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x112f8
void RTTIDerivedB::getType()
{
 return;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x11300
RTTIDerivedB::~RTTIDerivedB()
{
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x11304
RTTIDerivedA::~RTTIDerivedA()
{
}


// Function: _ZN14DiamondDerivedD1Ev at 0x11308
DiamondDerived::~DiamondDerived()
{
}


// Function: _ZTv0_n16_N14DiamondDerivedD1Ev at 0x1130c
void* * thunk to DiamondDerived::~DiamondDerived()(void* *a0)
{
 return (char *)a0 + (*(a0))[16];
}


// Function: _ZThn8_N14DiamondDerivedD1Ev at 0x1131c
int non-virtual thunk to DiamondDerived::~DiamondDerived()(unsigned int a0)
{
 return a0 - 8;
}


// Function: _ZN12MultiDerivedD1Ev at 0x11324
MultiDerived::~MultiDerived()
{
}


// Function: _ZThn8_N12MultiDerivedD1Ev at 0x11328
int non-virtual thunk to MultiDerived::~MultiDerived()(unsigned int a0)
{
 return a0 - 8;
}


// Function: _ZN7DerivedD2Ev at 0x11330
Derived::~Derived()
{
}


// Function: _ZN4BaseD0Ev at 0x11334
Base::~Base()
{
 operator delete(this);
}


// Function: _ZN7DerivedD0Ev at 0x1134c
int Derived::~Derived()
{
 operator delete(this);
 return;
}


// Function: _ZN12MultiDerivedD0Ev at 0x11364
int MultiDerived::~MultiDerived(void* this)
{
 operatordelete(this, 16);
 return;
}


// Function: _ZThn8_N12MultiDerivedD0Ev at 0x1137c
void* non-virtual thunk to MultiDerived::~MultiDerived()(void* a0)
{
 operatordelete(a0 - 8, 16);
 return a0 - 8;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x11398
RTTIDerivedA::~RTTIDerivedA()
{
 operator delete(this);
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x113b0
RTTIDerivedB::~RTTIDerivedB()
{
 operator delete(this);
}


// Function: _ZN14DiamondDerivedD0Ev at 0x113c8
DiamondDerived::~DiamondDerived()
{
 operator delete(this);
}


// Function: _ZTv0_n16_N14DiamondDerivedD0Ev at 0x113e0
void* * thunk to DiamondDerived::~DiamondDerived()(void* *a0)
{
 void* *v0; // r4

 v0 = (char *)a0 + (*(a0))[16];
 operatordelete(v0, 24);
 return v0;
}


// Function: _ZThn8_N14DiamondDerivedD0Ev at 0x11404
void* non-virtual thunk to DiamondDerived::~DiamondDerived()(void* a0)
{
 operatordelete(a0 - 8, 24);
 return a0 - 8;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x11420
template<typename T>
T template_max(T arg_0, T arg_1)
{
 if (arg_0 >= arg_1)
 return arg_0;
 return arg_1;
}

// Explicit template instantiations
template int template_max<int>(int, int);
template double template_max<double>(double, double);


// Function: _Z12template_maxIdET_S0_S0_ at 0x1142c
double template_max<double>()
{
 unsigned int v6; // lr
 unsigned int v7; // r8
 unsigned int v8; // r7
 unsigned int v9; // r6
 unsigned int v10; // r5
 unsigned int v11; // r4
 unsigned int result; // r0
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]
 unsigned int v4; // [bp-0x8]
 unsigned int v5; // [bp-0x4]

 v5 = v6;
 v4 = v7;
 v3 = v8;
 v2 = v9;
 v1 = v10;
 v0 = v11;
 result = __aeabi_dcmpgt();
 if (!result)
 {
 if (!armg_calculate_condition(2, result, 0, 0))
 return;
 }
 else
 {
 if (!armg_calculate_condition(2, result, 0, 0))
 return;
 }
 return;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x1145c
int template_swap<int>(unsigned int *ptr)
{
 unsigned int v0; // r3
 unsigned int *p; // r1

 v0 = *(ptr);
 *(ptr) = *(p);
 *(p) = v0;
 return ptr;
}


// Function: _ZN9ContainerIiEC2Ev at 0x11470
int Container<int>::Container(void* ptr)
{
 *((unsigned int *)&ptr[40]) = 0;
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x1147c
void Container<int>::push(void* ptr, int arg_0)
{
 unsigned int index; // r3
 unsigned int v1; // r2

 index = (int)ptr[40];
 if (index <= 9)
 v1 = index + 1;
 *((unsigned int *)&ptr[40]) = v1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x11494
void Container<int>::get(void* this, int arg_0)
{
 if (arg_0 < 0)
 return;
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x114c0
void Container<int>::getSize(void* this)
{
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x114c8
int Container<double>::Container(void* ptr)
{
 *((unsigned int *)&ptr[80]) = 0;
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x114d4
void Container<double>::push(void* ptr)
{
 unsigned int v0; // r1
 unsigned int v1; // r12
 unsigned int v3; // r2
 unsigned int v4; // r3
 unsigned int v5; // r2
 unsigned int v6; // r3

 v0 = (int)ptr[80];
 if (v0 <= 9)
 v1 = v0 + 1;
 *((unsigned int *)&ptr[80]) = v1;
 if (!armg_calculate_condition(210, v0, 9, 0))
 {
 if (!((char)armg_calculate_condition(210, v0, 9, 0)))
 goto LABEL_0x114ec;
 else
 goto LABEL_0x114ec;
 *((unsigned int *)ptr) = v5;
 *((unsigned int *)&ptr[4]) = v6;
 return;
 }
 if (!((char)armg_calculate_condition(210, v0, 9, 0)))
 goto LABEL_0x114ec;
 else
 goto LABEL_0x114ec;
 *((unsigned int *)((char *)ptr + 8 * v0)) = v3;
 *((unsigned int *)(4 + (char *)ptr + 8 * v0)) = v4;
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x114f0
void Container<double>::get(void* this, int arg_0)
{
 if (arg_0 < 0)
 return;
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x11528
void Container<double>::getSize(void* this)
{
 return;
}



/* CRT stub function _fini removed by preprocessor */


