// Angr Decompilation of 5-1_gcc_O2_no_g
// Platform: ARMEL


/* CRT stub function _init removed by preprocessor */



// Function: sub_1092c at 0x1092c
extern unsigned int g_22008;

int sub_1092c()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 goto g_22008;
}


// Forward declarations for operators
#include <stddef.h>
#include <cstring>
#include <cstdint>
#include <cstdio>
#include <ios>
extern "C" void* operator new(size_t);
extern "C" void operatordelete(void*);
extern "C" void* operator new[](size_t);
extern "C" void operatordelete[](void*);
extern "C" void __stack_chk_fail(void) __attribute__((noreturn));
extern "C" int __aeabi_atexit(void*, void*, void*);
extern "C" int __aeabi_d2iz(double, unsigned int);
extern "C" int __aeabi_dcmpgt();
extern "C" void abort(void) __attribute__((noreturn));
extern "C" int puts(const char*);
extern "C" int __printf_chk(int, const char*, ...);

// Forward declaration for armg_calculate_condition
int armg_calculate_condition(int, unsigned int, int, int);

// Function: test_cpp_exception
extern "C" void* __cxa_allocate_exception(size_t);
extern "C" void __cxa_throw(void*, void*, void*);
extern "C" void* __cxa_begin_catch(void*);
extern "C" void __cxa_end_catch();
extern "C" void __cxa_rethrow();
extern "C" void __cxa_end_cleanup();

void test_cpp_exception()
{
 unsigned int *ptr; // r0
 unsigned int flag1; // r1
 unsigned int v14; // r2
 unsigned int v15; // r1
 unsigned int v16; // r0
 unsigned int v6; // r2
 unsigned int v7; // r3
 unsigned int result; // r4
 unsigned int *v10; // r0
 unsigned int v11; // r0
 unsigned int v13; // r3
 char v0; // [bp-0x10]
 char v1; // [bp-0xc]
 char v2; // [bp-0x8]
 char v3; // [bp-0x4]

 ptr = (unsigned int*)__cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxa_throw(ptr, (void*)0x21e98, (void*)0);
 // WARNING: Unreachable code below - kept for structure
 (void)flag1;
 (void)v14;
 (void)v15;
 (void)v16;
 (void)v6;
 (void)v7;
 (void)result;
 (void)v10;
 (void)v11;
 (void)v13;
 (void)v0;
 (void)v1;
 (void)v2;
 (void)v3;
 return;
}


// Function: main at 0x10b18
unsigned int main()
{
 test_cpp_oo_features();
 return 0;
}


// Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv at 0x10b28
extern void _ZStL8__ioinit;
extern unsigned int __dso_handle;

int _GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 unsigned int v0; // r0

 std::ios_base::Init::Init(0x22090);
 v0 = __aeabi_atexit(0x22090, std::ios_base::Init::~Init, 0x22084);
 return __aeabi_atexit(0x22090, std::ios_base::Init::~Init, 0x22084);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_10b90 at 0x10b90
void sub_10b90()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: _Z20test_cpp_member_funcv at 0x10c50
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
 strncpy(v0, "Test", 31);
 result = 0;
 strlen(v0);
 if ((v2 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return;
}


// Function: _Z20test_cpp_constructorv at 0x10cbc
void test_cpp_constructor()
{
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x10cdc
class Base {
public:
    virtual void virtual_func(int);
    virtual const char* getName();
    virtual ~Base();
};

class Derived : public Base {
public:
    virtual void virtual_func(int);
    virtual const char* getName();
    virtual ~Derived();
};

class MultiDerived : public Base {
public:
    virtual void funcA();
    virtual void funcB();
    virtual ~MultiDerived();
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

// Forward declarations for template functions
template<typename T> T template_max(T a, T b);
template<typename T> void template_swap(T* a, T* b);

// Template function instantiations
template int template_max<int>(int a, int b);
template void template_swap<int>(int* a, int* b);

void call_virtual_func(class Base *arg_0, int arg_1)
{
 goto *((int *)*((int *)arg_0));
}


// Function: _Z21test_cpp_virtual_funcv at 0x10ce8
void test_cpp_virtual_func()
{
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x10cf0
void test_cpp_multiple_inheritance()
{
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x10cf8
void test_cpp_diamond_inheritance()
{
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x10d04
void test_cpp_operator_overload()
{
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x10d0c
extern unsigned int __glibc___stack_chk_guard;

void test_cpp_template_func()
{
 unsigned int v3; // r0
 unsigned int v4; // r1
 unsigned int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 unsigned int v2; // [bp-0x14]

 v2 = __glibc___stack_chk_guard;
 v3 = template_max_int(3, 7);
 v0 = 10;
 v1 = 20;
 template_swap_int(&v0, &v1);
 __aeabi_d2iz(v3, v4);
 if ((v2 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return;
}


// Function: _Z23test_cpp_template_classv at 0x10db4
void test_cpp_template_class()
{
 return;
}


// Function: _Z15test_cpp_lambdav at 0x10dbc
void test_cpp_lambda()
{
 return;
}


// Function: _Z18test_cpp_smart_ptrv at 0x10dc4
void test_cpp_smart_ptr()
{
 return;
}


// Function: _Z13test_cpp_rttiv at 0x10dd0
typedef struct struct_0 {
 char padding_0[4];
 struct struct_1 *field_4;
} struct_0;

typedef struct struct_1 {
 char field_0;
} struct_1;

extern char _ZTI12RTTIDerivedA;
extern char g_1162c;
extern char g_11640;

void test_cpp_rtti()
{
 unsigned int *ptr; // r5
 unsigned int *p; // r4
 struct_0 *v2; // r0
 unsigned int result; // r3
 char *cur; // r0

 ptr = (unsigned int*)operator new(4);
 *(ptr) = 71212;
 p = (unsigned int*)operator new(4);
 v2 = (struct_0*)((char*)ptr + 4);
 *(p) = 71232;
 result = (unsigned int)std::type_info::operator==(v2, 0x115fc);
 if (result)
 {
 if (!armg_calculate_condition(2, result, 0, 0))
 goto LABEL_10e26;
LABEL_10e25:
 }
 else
 {
 if (armg_calculate_condition(2, result, 0, 0))
 goto LABEL_10e25;
LABEL_10e26:
 }
 cur = *((char**)((char*)ptr + 4) + 1);
 if (*(cur) == 42)
 cur += 1;
 strlen(cur);
 ((void(*)(void*))(*(unsigned int*)((char*)ptr + 4)))(ptr);
 ((void(*)(void*))(*(unsigned int*)((char*)p + 4)))(p);
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x10ec8
extern unsigned int __glibc___stack_chk_guard;
extern char g_11474;
extern char g_11494;
extern char g_114b0;
extern char g_114cc;
extern char g_114e8;
extern char g_11508;
extern char g_11524;
extern char g_11540;
extern char g_1155c;
extern char g_11578;
extern char g_11598;
extern char g_115b8;

void test_cpp_oo_features()
{
 unsigned int v9; // r0
 char v0[1][31]; // [bp-0x2c]
 char result; // [bp-0xd]
 unsigned int v2; // [bp-0xc]

 v2 = __glibc___stack_chk_guard;
 puts("=== ");
 strncpy(&v0, "Test", 31);
 result = 0;
 __printf_chk(1, 0x11474, strlen(&v0) + 4700);
 __printf_chk(1, 0x11494, (unsigned int)test_cpp_constructor());
 __printf_chk(1, 0x114b0, 42);
 __printf_chk(1, 0x114cc, 71);
 __printf_chk(1, 0x114e8, (unsigned int)test_cpp_diamond_inheritance());
 __printf_chk(1, 0x11508, 22);
 __printf_chk(1, 0x11524, (unsigned int)test_cpp_template_func());
 __printf_chk(1, 0x11540, 16);
 __printf_chk(1, 0x1155c, 85);
 __printf_chk(1, 0x11578, (unsigned int)test_cpp_exception());
 __printf_chk(1, 0x11598, (unsigned int)test_cpp_smart_ptr());
 v9 = (unsigned int)test_cpp_rtti();
 if ((v2 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 __printf_chk(1, 0x115b8, v9);
 return;
}


// Function: _ZN4Base12virtual_funcEi at 0x11048
void Base::virtual_func(int arg_0)
{
 return;
}


// Function: _ZNK4Base7getNameEv at 0x11050
void Base::getName() const
{
 return;
}


// Function: _ZN4BaseD1Ev at 0x1105c
Base::~Base()
{
}


// Function: _ZN7Derived12virtual_funcEi at 0x11060
void Derived::virtual_func(int arg_0)
{
 return;
}


// Function: _ZNK7Derived7getNameEv at 0x1106c
void Derived::getName()
{
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x11078
void MultiDerived::funcA()
{
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x11080
void MultiDerived::funcB()
{
 return;
}


// Function: _ZThn8_N12MultiDerived5funcBEv at 0x11088
unsigned int non-virtual thunk to MultiDerived::funcB()()
{
 return 40;
}


// Function: _ZN7MiddleA4funcEv at 0x11090
void MiddleA::func()
{
 return;
}


// Function: _ZTv0_n12_N7MiddleA4funcEv at 0x110a8
int thunk_to_MiddleA_func(void* *a0)
{
 return *((int *)(4 + (char *)a0 + (*(a0))[12] + *((int *)(*((int *)((char *)a0 + (*(a0))[12])) - 12)))) + 150;
}


// Function: _ZN7MiddleB4funcEv at 0x110cc
void MiddleB::func()
{
 return;
}


// Function: _ZTv0_n12_N7MiddleB4funcEv at 0x110e4
int thunk_to_MiddleB_func(void* *a0)
{
 return *((int *)(4 + (char *)a0 + (*(a0))[12] + *((int *)(*((int *)((char *)a0 + (*(a0))[12])) - 12)))) + 200;
}


// Function: _ZN14DiamondDerived4funcEv at 0x11108
void DiamondDerived::func()
{
 return;
}


// Function: _ZTv0_n12_N14DiamondDerived4funcEv at 0x11120
int thunk_to_DiamondDerived_func(void* *a0)
{
 return *((int *)(4 + (char *)a0 + (*(a0))[12] + *((int *)(*((int *)((char *)a0 + (*(a0))[12])) - 12)))) + 250;
}


// Function: _ZThn8_N14DiamondDerived4funcEv at 0x11144
int non_virtual_thunk_to_DiamondDerived_func(void* a0)
{
 return *((int *)(-4 + (char *)a0 + *((int *)((int)a0[8] - 12)))) + 250;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x1115c
void RTTIDerivedA::getType()
{
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x11164
void RTTIDerivedB::getType()
{
 return;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x1116c
RTTIDerivedB::~RTTIDerivedB()
{
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x11170
RTTIDerivedA::~RTTIDerivedA()
{
}


// Function: _ZN14DiamondDerivedD1Ev at 0x11174
DiamondDerived::~DiamondDerived()
{
}


// Function: _ZTv0_n16_N14DiamondDerivedD1Ev at 0x11178
void* * thunk_to_DiamondDerived_dtor(void* *a0)
{
 return (char *)a0 + (*(a0))[16];
}


// Function: _ZThn8_N14DiamondDerivedD1Ev at 0x11188
int non_virtual_thunk_to_DiamondDerived_dtor(unsigned int a0)
{
 return a0 - 8;
}


// Function: _ZN12MultiDerivedD1Ev at 0x11190
MultiDerived::~MultiDerived()
{
}


// Function: _ZThn8_N12MultiDerivedD1Ev at 0x11194
int non-virtual thunk to MultiDerived::~MultiDerived()(unsigned int a0)
{
 return a0 - 8;
}


// Function: _ZN7DerivedD2Ev at 0x1119c
Derived::~Derived()
{
}


// Function: _ZN4BaseD0Ev at 0x111a0
void Base::~Base()
{
 operatordelete(this);
}


// Function: _ZN7DerivedD0Ev at 0x111b8
void Derived::~Derived()
{
 operatordelete(this);
}


// Function: _ZN12MultiDerivedD0Ev at 0x111d0
void MultiDerived::~MultiDerived()
{
 operatordelete(this);
}


// Function: _ZThn8_N12MultiDerivedD0Ev at 0x111e8
void* non_virtual_thunk_to_MultiDerived_dtor(void* a0)
{
 void* result = (char*)a0 - 8;
 operatordelete(result);
 return result;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x11204
int RTTIDerivedB::~RTTIDerivedB(void* this)
{
 operatordelete(this, 4);
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x1121c
int RTTIDerivedA::~RTTIDerivedA(void* this)
{
 operatordelete(this, 4);
 return;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x11234
int DiamondDerived::~DiamondDerived(void* this)
{
 operatordelete(this, 24);
 return;
}


// Function: _ZTv0_n16_N14DiamondDerivedD0Ev at 0x1124c
void* * thunk to DiamondDerived::~DiamondDerived()(void* *a0)
{
 void* *v0; // r4

 v0 = (char *)a0 + (*(a0))[16];
 operatordelete(v0, 24);
 return v0;
}


// Function: _ZThn8_N14DiamondDerivedD0Ev at 0x11270
void* non-virtual thunk to DiamondDerived::~DiamondDerived()(void* a0)
{
 operatordelete(a0 - 8, 24);
 return a0 - 8;
}


// Function: template_max_int at 0x1128c
int template_max_int(int arg_0, int arg_1)
{
 if (arg_0 >= arg_1)
 return arg_0;
 return arg_1;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x11298
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


// Function: _Z13template_swapIiEvRT_S1_ at 0x112c8
int template_swap<int>(unsigned int *ptr)
{
 unsigned int v0; // r3
 unsigned int *p; // r1

 v0 = *(ptr);
 *(ptr) = *(p);
 *(p) = v0;
 return ptr;
}


// Function: _ZN9ContainerIiEC2Ev at 0x112dc
int Container<int>::Container(void* ptr)
{
 *((unsigned int *)&ptr[40]) = 0;
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x112e8
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


// Function: _ZNK9ContainerIiE3getEi at 0x11300
void Container<int>::get(void* this, int arg_0)
{
 if (arg_0 < 0)
 return;
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x11324
void Container<int>::getSize(void* this)
{
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x1132c
int Container<double>::Container(void* ptr)
{
 *((unsigned int *)&ptr[80]) = 0;
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x11338
void Container<double>::push(void* p)
{
 unsigned int v0; // r3
 unsigned int ptr[2]; // r3
 unsigned int v2; // r2
 unsigned int v3; // r3

 v0 = (int)p[80];
 if (9 >= v0)
 {
 ptr = p + v0 * 8;
 *((unsigned int *)&p[80]) = v0 + 1;
 ptr[0] = v2;
 ptr[1] = v3;
 }
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x11368
void Container<double>::get(void* this, int arg_0)
{
 if (arg_0 < 0)
 return;
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x11394
void Container<double>::getSize(void* this)
{
 return;
}



/* CRT stub function _fini removed by preprocessor */


