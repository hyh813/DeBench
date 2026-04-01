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
 * Binary: build/x86/5-1/5-1_clang_O1_no_g
 * Processor: pc
 */

/* Standard C Includes */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <math.h>

/* C++ Standard Library */
#include <new>
#include <typeinfo>
#include <iostream>

/* C++ operators - must be declared before use */
void* operator new(size_t size) noexcept;
void* operator new[](size_t size) noexcept;
void operator delete(void* ptr) noexcept;
void operator delete[](void* ptr) noexcept;
void operator delete(void* ptr, size_t) noexcept;
void operator delete[](void* ptr, size_t) noexcept;

/* C++ operator implementations */
void* operator new(size_t size) noexcept {
    return malloc(size);
}

void* operator new[](size_t size) noexcept {
    return malloc(size);
}

void operator delete(void* ptr) noexcept {
    free(ptr);
}

void operator delete[](void* ptr) noexcept {
    free(ptr);
}

void operator delete(void* ptr, size_t) noexcept {
    free(ptr);
}

void operator delete[](void* ptr, size_t) noexcept {
    free(ptr);
}

/* External CRT functions */
extern void _gmon_start__(void);
extern void frame_dummy(void);
extern int _do_global_ctors_aux(void);
extern void _do_global_dtors_aux(void);

/* C++ Exception handling and runtime functions */
extern "C" {
void* __cxa_allocate_exception(size_t thrown_size);
void __cxa_throw(void* thrown_exception, const void* typeinfo, void* destructor);
void* __cxa_begin_catch(void* exception_header);
void __cxa_end_catch(void);
void __cxa_rethrow(void);
void __cxa_atexit(void (*destructor)(void*), void* arg, void* dso_handle);
int __cxa_finalize(void* ptr);
int __gxx_personality_v0(int version, int actions, unsigned long long exception_class, void* exception_object, unsigned long long);
}

void* __dynamic_cast(const void* src_ptr, const void* src_type, const void* dst_type, ptrdiff_t src2dst);

/* RTTI type info structures */
struct __class_type_info {};
struct __si_class_type_info : __class_type_info {};
struct __vmi_class_type_info : __class_type_info {};

/* Global variables referenced in code */
extern char asc_31E5[];
extern char aCppL301D[];
extern char aCppL302D[];
extern char aCppL303D[];
extern char aCppL304D[];
extern char aCppL305D[];
extern char aCppL306D[];
extern char aCppL307D[];
extern char aCppL308D[];
extern char aCppL309D[];

/* Placeholder vtable pointers - these would normally come from the binary */
unsigned int off_5CE4_data[2] = {0, 0};
unsigned int off_5D04_data[2] = {0, 0};
unsigned int off_5D28_data[2] = {0, 0};
unsigned int off_5D40_data[2] = {0, 0};
unsigned int off_5DB0_data[2] = {0, 0};
unsigned int off_5DC8_data[2] = {0, 0};
unsigned int off_5DE4_data[2] = {0, 0};
unsigned int off_5ECC_data[2] = {0, 0};
unsigned int off_5EE0_data[2] = {0, 0};

unsigned int *off_5CE4 = off_5CE4_data;
unsigned int *off_5D04 = off_5D04_data;
unsigned int *off_5D28 = off_5D28_data;
unsigned int *off_5D40 = off_5D40_data;
unsigned int *off_5DB0 = off_5DB0_data;
unsigned int *off_5DC8 = off_5DC8_data;
unsigned int *off_5DE4 = off_5DE4_data;
unsigned int *off_5ECC = off_5ECC_data;
unsigned int *off_5EE0 = off_5EE0_data;

unsigned char byte_9 = 0;
void *_dso_handle = 0;

/* Global string variables */
char asc_31E5[] = "Testing C++ OOP Features:\n";
char aCppL301D[] = "String length: %zu\n";
char aCppL302D[] = "Constructor result: %d\n";
char aCppL303D[] = "Virtual function: %d\n";
char aCppL304D[] = "Multiple inheritance: %d\n";
char aCppL305D[] = "Diamond inheritance: %d\n";
char aCppL306D[] = "Operator overload: %d\n";
char aCppL307D[] = "Template function: %d\n";
char aCppL308D[] = "Template class: %d\n";
char aCppL309D[] = "Lambda: %d\n";

/* Static member variable definition */
int LifecycleClass::instance_count = 0;

/* RTTI type info declarations */
extern const __class_type_info typeid_RTTIBase;
extern const __class_type_info typeid_RTTIDerivedA;
extern const __class_type_info typeid_RTTIDerivedB;

/* std::ios_base::Init singleton for iostream */
namespace std {
    class ios_base {
    public:
        class Init {
        public:
            Init();
            ~Init();
        };
    };
}

/* std::ios_base::Init instance - defined in libstdc++ */
extern std::ios_base::Init __ioinit;

/* Classes */
class Base {
public:
    virtual int virtual_func(int a2);
    virtual ~Base();
    const char *getName();
};

class Derived : public Base {
public:
    virtual int virtual_func(int a2);
    const char *getName();
    int value;
};

class LifecycleClass {
public:
    static int instance_count;
};

class BaseA {
public:
    virtual int funcA();
    virtual ~BaseA();
};

class BaseB {
public:
    virtual int funcB();
    virtual ~BaseB();
};

class MiddleA : public BaseA {
public:
    virtual int func();
    virtual ~MiddleA();
};

class MiddleB : public BaseB {
public:
    virtual int func();
    virtual ~MiddleB();
};

class MultiDerived : public MiddleA, public MiddleB {
public:
    virtual int funcA();
    virtual int funcB();
    virtual ~MultiDerived();
};

class DiamondDerived : public MiddleA, public MiddleB {
public:
    virtual int func();
    virtual ~DiamondDerived();
};

class VirtualBase {
public:
    virtual int func();
    virtual ~VirtualBase();
};

class RTTIBase {
public:
    virtual ~RTTIBase();
};

class RTTIDerivedA : public RTTIBase {
public:
    virtual ~RTTIDerivedA();
    virtual int getType();
};

class RTTIDerivedB : public RTTIBase {
public:
    virtual ~RTTIDerivedB();
    virtual int getType();
};

template<typename T>
class Container {
public:
    Container();
    int push(T value);
    T get(int index);
    int getSize();
};

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
    // Assembly stub - jump to address in ebx
    #ifdef __i386__
    __asm__ volatile ("jmp *%%ebx" : : "b" ((void*)8));
    #else
    // Fallback for non-x86 - do nothing
    #endif
}


/* Function: sub_1160 @ 0x1160 */
int sub_1160(int a1)
{
 return (*(int (**)(void))(a1 - 24))();
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x1170 */
int GLOBAL__sub_I_5_1_cpp()
{
 std::ios_base::Init::Init((std::ios_base::Init *)&std::__ioinit);
 return __cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_11DC @ 0x11DC */
void sub_11DC()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x11E0 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1319 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x131D */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: _Z20test_cpp_member_funcv @ 0x1330 */
size_t test_cpp_member_func(void)
{
 unsigned short s[4]; // [esp+14h] [ebp-28h] BYREF
 int v2; // [esp+1Ch] [ebp-20h]
 int v3; // [esp+20h] [ebp-1Ch]
 int v4; // [esp+24h] [ebp-18h]
 int v5; // [esp+28h] [ebp-14h]
 unsigned char v6[8]; // [esp+2Ch] [ebp-10h] BYREF

 strcpy((char *)s, "Test");
 *((unsigned char *)&s[2] + 1) = 0;
 s[3] = 0;
 v2 = 0;
 v3 = 0;
 v4 = 0;
 v5 = 0;
 memset(v6, 0, sizeof(v6));
 return strlen((const char *)s) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x13B0 */
int test_cpp_constructor(void)
{
 int v0; // esi
 unsigned int *v1; // eax
 unsigned int *v2; // ecx
 int v3; // esi

 v0 = 0;
 v1 = (unsigned int *)operator new[](0x14u);
 v2 = v1;
 do
 {
 *v2 = v0;
 v0 += 10;
 ++v2;
 }
 while ( v0 != 50 );
 ++LifecycleClass::instance_count;
 v3 = v1[2] + LifecycleClass::instance_count;
 operator delete[](v1);
 --LifecycleClass::instance_count;
 return v3 + 1000 * LifecycleClass::instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x1420 */
int call_virtual_func(Base *a1, int a2)
{
 return (**(int ( ***)(Base *, int))a1)(a1, a2);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1450 */
int test_cpp_virtual_func(void)
{
 int v0; // esi
 unsigned int v2[2]; // [esp+8h] [ebp-14h] BYREF
 unsigned int ( **v3)(Base *__hidden, int); // [esp+10h] [ebp-Ch] BYREF

 v3 = *off_5CE4;
 v2[1] = 3;
 v0 = (**(int ( ***)(Base *, int))v3)((Base *)v2, 5);
 return v0 + Derived::virtual_func((Derived *)v2, 5) + 21;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x14B0 */
int test_cpp_multiple_inheritance(void)
{
 int v0; // eax
 unsigned int v2[2]; // [esp+10h] [ebp-1Ch] BYREF
 unsigned int v3[5]; // [esp+18h] [ebp-14h] BYREF

 v2[0] = &off_5D28;
 v3[0] = &off_5D40;
 v2[1] = 100;
 v3[1] = 200;
 MultiDerived::funcA((MultiDerived *)v2);
 return v0 + (*(int ( **)(unsigned int *))v3[0])(v3) + 1;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1510 */
int test_cpp_diamond_inheritance(void)
{
 int v0; // esi
 unsigned int v2[3]; // [esp+Ch] [ebp-20h]
 unsigned int v3[5]; // [esp+18h] [ebp-14h] BYREF

 v3[0] = (unsigned int)&off_5DE4;
 v2[1] = (unsigned int)&off_5DC8;
 v3[1] = 50;
 v0 = virtual_thunk_to_DiamondDerived_func((DiamondDerived *)(void *)v3);
 *(unsigned int *)((char *)v2 + (unsigned int)*(unsigned int *)((char *)&off_5DB0 - 3)) = 100;
 return v0 + (*(int ( **)(unsigned int *))v3[0])(v3);
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1580 */
int test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1590 */
int test_cpp_template_func(void)
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0x15A0 */
int test_cpp_template_class(void)
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x15B0 */
int test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x15C0 */
void test_cpp_exception(void)
{
 unsigned int *exception; // eax

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, &typeid_RTTIBase, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x16B0 */
int test_cpp_smart_ptr(void)
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x16C0 */
size_t test_cpp_rtti(void)
{
 unsigned int *v0; // edi
 unsigned int *v1; // ebp
 const char *v2; // ecx
 int v3; // esi
 char *v4; // eax
 bool v5; // al
 int v6; // ebp
 void *v7; // eax
 int v8; // edi
 void *v9; // eax
 int v10; // ecx
 int v11; // edi
 size_t v12; // ebp
 char *s1; // [esp+0h] [ebp-1Ch]
 unsigned int *v15; // [esp+4h] [ebp-18h]
 void *lpsrc; // [esp+8h] [ebp-14h]

 v0 = (unsigned int *)operator new(4u);
 *v0 = off_5ECC;
 v1 = (unsigned int *)operator new(4u);
 *v1 = off_5EE0;
 v2 = *(const char **)(*(unsigned int *)(*v0 - 4) + 4);
 s1 = (char *)v2;
 if ( v2 == "12RTTIDerivedA" )
 {
 v3 = 10;
 }
 else
 {
 v3 = 0;
 if ( *v2 != 42 )
 {
 v3 = 10;
 if ( strcmp(v2, "12RTTIDerivedA") )
 v3 = 0;
 }
 }
 v4 = *(char **)(*(unsigned int *)(*v1 - 4) + 4);
 lpsrc = v1;
 v5 = *v4 == 42 || strcmp(v4, "12RTTIDerivedB") == 0;
 v6 = v3 | 0x14;
 if ( !v5 )
 v6 = v3;
 v7 = __dynamic_cast(
 v0,
 (const struct __class_type_info *)&typeid_RTTIBase,
 (const struct __class_type_info *)&typeid_RTTIDerivedA,
 0);
 v15 = v0;
 v8 = v6 + 100;
 if ( !v7 )
 v8 = v6;
 v9 = __dynamic_cast(
 lpsrc,
 (const struct __class_type_info *)&typeid_RTTIBase,
 (const struct __class_type_info *)&typeid_RTTIDerivedB,
 0);
 v10 = v8 + 200;
 if ( !v9 )
 v10 = v8;
 v11 = v10;
 v12 = strlen(&s1[*s1 == 42]);
 (*(void ( **)(unsigned int *))(*v15 + 4))(v15);
 (*(void ( **)(void *))(*(unsigned int *)lpsrc + 4))(lpsrc);
 return v11 + v12;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1810 */
void test_cpp_oo_features(void)
{
 size_t v0; // eax
 int v1; // esi
 unsigned int *v2; // eax
 unsigned int *v3; // ecx
 int v4; // esi
 int v5; // esi
 int v6; // eax
 int v7; // eax
 int v8; // esi
 int v9; // eax
 unsigned int ( **v10)(MultiDerived *__hidden); // [esp+10h] [ebp-3Ch] BYREF
 unsigned int s[2]; // [esp+14h] [ebp-38h] BYREF
 int v12; // [esp+1Ch] [ebp-30h]
 unsigned int ( **v13)(DiamondDerived *__hidden); // [esp+20h] [ebp-2Ch] BYREF
 int v14; // [esp+24h] [ebp-28h]
 int v15; // [esp+28h] [ebp-24h]
 unsigned char v16[8]; // [esp+2Ch] [ebp-20h] BYREF
 unsigned int ( **v17)(Base *__hidden, int); // [esp+38h] [ebp-14h] BYREF

 puts(asc_31E5);
 strcpy((char *)s, "Test");
 *((unsigned char *)&s[1] + 1) = 0;
 *((unsigned short *)&s[1] + 1) = 0;
 v12 = 0;
 v13 = 0;
 v14 = 0;
 v15 = 0;
 memset(v16, 0, sizeof(v16));
 v10 = (unsigned int ( **)(MultiDerived *__hidden))(byte_9 + 1);
 v0 = strlen((const char *)s);
 printf(aCppL301D, v0 + 4700);
 v1 = 0;
 v2 = (unsigned int *)operator new[](0x14u);
 v3 = v2;
 do
 {
 *v3 = v1;
 v1 += 10;
 ++v3;
 }
 while ( v1 != 50 );
 ++LifecycleClass::instance_count;
 v4 = v2[2] + LifecycleClass::instance_count;
 operator delete[](v2);
 --LifecycleClass::instance_count;
 printf(aCppL302D, v4 + 1000 * LifecycleClass::instance_count);
 v17 = &off_5CE4;
 v10 = (unsigned int ( **)(MultiDerived *__hidden))&off_5D04;
 s[0] = 3;
 v5 = Base::virtual_func((Base *)&v17, 5);
 v6 = Derived::virtual_func((Derived *)&v10, 5);
 printf(aCppL303D, v5 + v6 + 21);
 v10 = &off_5D28;
 s[1] = &off_5D40;
 s[0] = 100;
 v12 = 200;
 v7 = non_virtual_thunk_to_MultiDerived_funcB((MultiDerived *)&s[1]);
 printf(aCppL304D, v7 + 31);
 v10 = &off_5DB0;
 v13 = &off_5DE4;
 s[1] = &off_5DC8;
 v14 = 50;
 v8 = virtual_thunk_to_DiamondDerived_func((DiamondDerived *)&v13);
 *(unsigned int *)((char *)s + (unsigned int)*(v10 - 3)) = 100;
 v9 = (*v13)((DiamondDerived *)&v13);
 printf(aCppL305D, v8 + v9);
 printf(aCppL306D, 22);
 printf(aCppL307D, 39);
 printf(aCppL308D, 16);
 printf(aCppL309D, 85);
 test_cpp_exception();
}


/* Function: main @ 0x1AB0 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x1AD0 */
int Base::virtual_func(Base *this, int a2)
{
 return a2 + 1;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1AE0 */
int Derived::virtual_func(Derived *this, int a2)
{
 return a2 * *((unsigned int *)this + 1);
}


/* Function: _ZN4BaseD2Ev @ 0x1AF0 */
void Base::~Base()
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1B00 */
void MultiDerived::~MultiDerived()
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x1B10 */
void DiamondDerived::~DiamondDerived()
{
 ;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1B20 */
int template_max<int>(int a1, int a2)
{
 int result; // eax

 result = a2;
 if ( a1 > a2 )
 return a1;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1B30 */
long double template_max<double>(double a1, double a2)
{
 long double v2; // fst6

 v2 = a2;
 if ( a1 > (long double)a2 )
 return a1;
 return v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1B50 */
unsigned int * template_swap<int>(int *a1, unsigned int *a2)
{
 unsigned int *result; // eax
 int v3; // edx

 result = a2;
 v3 = *a1;
 *a1 = *a2;
 *a2 = v3;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1B70 */
void Container<int>::Container(int a1)
{
 *(unsigned int *)(a1 + 40) = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1B80 */
int Container<int>::push(int a1, int a2)
{
 int result; // eax
 int v3; // ecx

 result = a1;
 v3 = *(unsigned int *)(a1 + 40);
 if ( v3 <= 9 )
 {
 *(unsigned int *)(a1 + 40) = v3 + 1;
 *(unsigned int *)(a1 + 4 * v3) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x1BA0 */
int Container<int>::get(int a1, int a2)
{
 int result; // eax

 result = 0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 40) > a2 )
 return *(unsigned int *)(a1 + 4 * a2);
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1BC0 */
int Container<int>::getSize(int a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1BD0 */
int Container<double>::Container(int a1)
{
 int result; // eax

 result = a1;
 *(unsigned int *)(a1 + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1BE0 */
int Container<double>::push(int a1, double a2)
{
 int result; // eax
 int v3; // ecx

 result = a1;
 v3 = *(unsigned int *)(a1 + 80);
 if ( v3 <= 9 )
 {
 *(unsigned int *)(a1 + 80) = v3 + 1;
 *(double *)(a1 + 8 * v3) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1C00 */
long double Container<double>::get(int a1, int a2)
{
 long double result; // fst7

 result = 0.0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 80) > a2 )
 return *(double *)(a1 + 8 * a2);
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1C20 */
int Container<double>::getSize(int a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: _ZNK4Base7getNameEv @ 0x1C30 */
const char *Base::getName()
{
 return "Base";
}


/* Function: _ZN4BaseD0Ev @ 0x1C50 */
void Base::~Base(Base *this)
{
 operator delete(this);
}


/* Function: _ZNK7Derived7getNameEv @ 0x1C80 */
const char *Derived::getName()
{
 return "Derived";
}


/* Function: _ZN7DerivedD0Ev @ 0x1CA0 */
void Derived::~Derived(Derived *this)
{
 operator delete(this);
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x1CD0 */
int MultiDerived::funcA()
{
 return 30;
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x1CE0 */
void MultiDerived::~MultiDerived(MultiDerived *this)
{
 operator delete(this);
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x1D10 */
int MultiDerived::funcB()
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x1D20 */
int non_virtual_thunk_to_MultiDerived_funcB(MultiDerived *this)
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x1D30 */
void non_virtual_thunk_to_MultiDerived_d1()
{
 ;
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x1D40 */
void non_virtual_thunk_to_MultiDerived_d0(MultiDerived *this)
{
 operator delete((char *)this - 8);
}


/* Function: _ZN5BaseA5funcAEv @ 0x1D70 */
int BaseA::funcA()
{
 return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x1D80 */
void BaseA::~BaseA()
{
 ;
}


/* Function: _ZN5BaseAD0Ev @ 0x1D90 */
void BaseA::~BaseA(BaseA *this)
{
 operator delete(this);
}


/* Function: _ZN5BaseB5funcBEv @ 0x1DC0 */
int BaseB::funcB()
{
 return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x1DD0 */
void BaseB::~BaseB()
{
 ;
}


/* Function: _ZN5BaseBD0Ev @ 0x1DE0 */
void BaseB::~BaseB(BaseB *this)
{
 operator delete(this);
}


/* Function: _ZN7MiddleA4funcEv @ 0x1E10 */
int MiddleA::func(MiddleA *this)
{
 return *(unsigned int *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12) + 4) + 150;
}


/* Function: _ZN7MiddleAD1Ev @ 0x1E30 */
void MiddleA::~MiddleA()
{
 ;
}


/* Function: _ZN7MiddleAD0Ev @ 0x1E40 */
void MiddleA::~MiddleA(MiddleA *this)
{
 operator delete(this);
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x1E70 */
int virtual_thunk_to_MiddleA_func(MiddleA *this)
{
 return *(unsigned int *)((char *)this
 + *(unsigned int *)(*(unsigned int *)this - 12)
 + *(unsigned int *)(*(unsigned int *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12)) - 12)
 + 4)
 + 150;
}


/* Function: _ZTv0_n16_N7MiddleAD1Ev @ 0x1E90 */
void virtual_thunk_to_MiddleA_d1()
{
 ;
}


/* Function: _ZTv0_n16_N7MiddleAD0Ev @ 0x1EA0 */
void virtual_thunk_to_MiddleA_d0(MiddleA *this)
{
 operator delete((char *)this + *(unsigned int *)(*(unsigned int *)this - 16));
}


/* Function: _ZN7MiddleB4funcEv @ 0x1ED0 */
int MiddleB::func(MiddleB *this)
{
 return *(unsigned int *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12) + 4) + 200;
}


/* Function: _ZN7MiddleBD1Ev @ 0x1EF0 */
void MiddleB::~MiddleB()
{
 ;
}


/* Function: _ZN7MiddleBD0Ev @ 0x1F00 */
void MiddleB::~MiddleB(MiddleB *this)
{
 operator delete(this);
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x1F30 */
int virtual_thunk_to_MiddleB_func(MiddleB *this)
{
 return *(unsigned int *)((char *)this
 + *(unsigned int *)(*(unsigned int *)this - 12)
 + *(unsigned int *)(*(unsigned int *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12)) - 12)
 + 4)
 + 200;
}


/* Function: _ZTv0_n16_N7MiddleBD1Ev @ 0x1F50 */
void virtual_thunk_to_MiddleB_d1()
{
 ;
}


/* Function: _ZTv0_n16_N7MiddleBD0Ev @ 0x1F60 */
void virtual_thunk_to_MiddleB_d0(MiddleB *this)
{
 operator delete((char *)this + *(unsigned int *)(*(unsigned int *)this - 16));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1F90 */
int DiamondDerived::func(DiamondDerived *this)
{
 return *(unsigned int *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12) + 4) + 250;
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x1FB0 */
void DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 operator delete(this);
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x1FE0 */
int non_virtual_thunk_to_DiamondDerived_func(DiamondDerived *this)
{
 return *(unsigned int *)((char *)this + *(unsigned int *)(*((unsigned int *)this - 2) - 12) - 4) + 250;
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x2000 */
void non_virtual_thunk_to_DiamondDerived_d1()
{
 ;
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x2010 */
void non_virtual_thunk_to_DiamondDerived_d0(DiamondDerived *this)
{
 operator delete((char *)this - 8);
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x2040 */
int virtual_thunk_to_DiamondDerived_func(DiamondDerived *this)
{
 return *(unsigned int *)((char *)this
 + *(unsigned int *)(*(unsigned int *)this - 12)
 + *(unsigned int *)(*(unsigned int *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12)) - 12)
 + 4)
 + 250;
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x2060 */
void virtual_thunk_to_DiamondDerived_d1()
{
 ;
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x2070 */
void virtual_thunk_to_DiamondDerived_d0(DiamondDerived *this)
{
 operator delete((char *)this + *(unsigned int *)(*(unsigned int *)this - 16));
}


/* Function: _ZN11VirtualBase4funcEv @ 0x20A0 */
int VirtualBase::func()
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x20B0 */
void VirtualBase::~VirtualBase()
{
 ;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x20C0 */
void VirtualBase::~VirtualBase(VirtualBase *this)
{
 operator delete(this);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x20F0 */
void RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x2120 */
int RTTIDerivedA::getType()
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x2130 */
void RTTIBase::~RTTIBase()
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x2140 */
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x2170 */
int RTTIDerivedB::getType()
{
 return 2;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x21CC */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: _Znwj @ 0x6084 */

/* FAILED to decompile: __cxa_finalize @ 0x6088 */

/* FAILED to decompile: __cxa_begin_catch @ 0x608C */

/* FAILED to decompile: __cxa_allocate_exception @ 0x6090 */

/* FAILED to decompile: strlen @ 0x6094 */

/* FAILED to decompile: __cxa_atexit @ 0x6098 */

/* FAILED to decompile: strcmp @ 0x60A0 */

/* FAILED to decompile: __libc_start_main @ 0x60A4 */

/* FAILED to decompile: _Znaj @ 0x60A8 */

/* FAILED to decompile: _ZdlPv @ 0x60AC */

/* FAILED to decompile: __dynamic_cast @ 0x60B0 */

/* FAILED to decompile: _ZdaPv @ 0x60B4 */

/* FAILED to decompile: printf @ 0x60BC */

/* FAILED to decompile: __cxa_rethrow @ 0x60C0 */

/* FAILED to decompile: puts @ 0x60C4 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x60C8 */

/* FAILED to decompile: __cxa_end_catch @ 0x60CC */

/* FAILED to decompile: __gxx_personality_v0 @ 0x60D0 */

/* FAILED to decompile: __cxa_throw @ 0x60D4 */

/* FAILED to decompile: _Unwind_Resume @ 0x60DC */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x60E0 */

/* Total functions decompiled: 90, failed: 21 */
