/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_clang_Os_no_g
 * Processor: pc
 */

#include <cstddef>
#include <cstring>
#include <cstdio>
#include <typeinfo>
#include <new>
#include <iostream>
#include <cmath>

// CRT symbols
extern "C" {
    void _gmon_start__(void);
    void *_dso_handle;
    void* __cxa_allocate_exception(size_t);
    void __cxa_throw(void*, const std::type_info*, void*);
    void __cxa_begin_catch(void*);
    void __cxa_end_catch(void);
    void __cxa_rethrow(void);
    int __gxx_personality_v0(int, int, void*, void*);
    void _Unwind_Resume(void*);
    int __cxa_atexit(void (*)(void*), void*, void*);
    void* __dynamic_cast(const void*, const std::type_info*, const std::type_info*, std::ptrdiff_t);
}

// Global constants from binary
static unsigned long long xmmword_21F8 = 0x636C6C6148206C6C; // "Hello world!" (lower 8 bytes)

// Format strings
static const char *format = "%d\n";
static const char *aCppL302D = "CppL30_2D: %d\n";
static const char *aCppL303D = "CppL30_3D: %d\n";
static const char *aCppL304D = "CppL30_4D: %d\n";
static const char *aCppL305D = "CppL30_5D: %d\n";
static const char *aCppL306D = "CppL30_6D: %d\n";
static const char *aCppL307D = "CppL30_7D: %d\n";
static const char *aCppL308D = "CppL30_8D: %d\n";
static const char *aCppL309D = "CppL30_9D: %d\n";

class RTTIBase {
public:
    virtual ~RTTIBase() {}
    virtual long long getType() { return 0; }
};

class RTTIDerivedA : public RTTIBase {
public:
    virtual ~RTTIDerivedA() {}
    virtual long long getType() override { return 1; }
};

class RTTIDerivedB : public RTTIBase {
public:
    virtual ~RTTIDerivedB() {}
    virtual long long getType() override { return 2; }
};

// Vtable pointers for RTTI classes
static void** vtable_RTTIBase;
static void** vtable_RTTIDerivedA;
static void** vtable_RTTIDerivedB;
static RTTIBase* base_vtable;
static RTTIDerivedA* derivedA_vtable;
static RTTIDerivedB* derivedB_vtable;

// iostream initialization (internal CRT variable)
static std::ios_base::Init __ioinit;

// Cleanup function for iostream
static void __ioinit_cleanup(void*) {
    // Empty cleanup - runtime handles this
}

// Class declarations
class LifecycleClass {
public:
    static int instance_count;
};

int LifecycleClass::instance_count = 0;

/* Function: .init_proc @ 0x1000 */
void init_proc()
{
    // Simplified init - original referenced _gmon_start__
}


/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
    // Empty function - was unreachable code in original
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x1140 */
int GLOBAL__sub_I_5_1_cpp()
{
 new (&__ioinit) std::ios_base::Init();
 return __cxa_atexit((void (*)(void *))__ioinit_cleanup, &__ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



template<typename T>
class Container {
public:
    Container();
    long long push(T value);
    T get(int index);
    long long getSize();
};

long long test_cpp_member_func(void);


/* Function: _Z20test_cpp_constructorv @ 0x1294 */
long long test_cpp_constructor(void)
{
 unsigned int *v0; // rax
 long long v1; // rcx
 unsigned int *v2; // rdx
 int v3; // ebx

 v0 = (unsigned int *)operator new[](0x14u);
 v1 = 0;
 v2 = v0;
 do
 {
 *v2 = v1;
 v1 += 10;
 ++v2;
 }
 while ( v1 != 50 );
 ++LifecycleClass::instance_count;
 v3 = v0[2] + LifecycleClass::instance_count;
 operator delete[](v0);
 --LifecycleClass::instance_count;
 return (unsigned int)(v3 + 1000 * LifecycleClass::instance_count);
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x12E5 */
long long call_virtual_func(long long (**a1)(unsigned long long))
{
 return (*a1)(0);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x12ED */
long long test_cpp_virtual_func(void)
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x12F3 */
long long test_cpp_multiple_inheritance(void)
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x12F9 */
long long test_cpp_diamond_inheritance(void)
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x12FF */
long long test_cpp_operator_overload(void)
{
 return 22;
}


// Template function declarations
template<typename T>
T template_max(T a1, T a2);

template<typename T>
T template_swap(T* a1, T* a2);

/* Function: _Z22test_cpp_template_funcv @ 0x1305 */
long long test_cpp_template_func(void)
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0x130B */
long long test_cpp_template_class(void)
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x1311 */
long long test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x1317 */
void test_cpp_exception(void)
{
 unsigned int *exception; // rax

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, &typeid(int), 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x13D7 */
long long test_cpp_smart_ptr(void)
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x13DD */
long long test_cpp_rtti(void)
{
 unsigned long long *v0; // r14
 void *v1; // r12
 int v2; // ebx
 int v3; // ebp

 v0 = (unsigned long long *)operator new(8u);
 base_vtable = (RTTIBase*)&vtable_RTTIBase;
 derivedA_vtable = (RTTIDerivedA*)&vtable_RTTIDerivedA;
 v1 = (void *)operator new(8u);
 derivedB_vtable = (RTTIDerivedB*)&vtable_RTTIDerivedB;
 *(unsigned long long *)v1 = (unsigned long long)derivedB_vtable;
 v2 = 130;
 if ( !__dynamic_cast(
 v0,
 (const std::type_info*)&typeid(RTTIBase),
 (const std::type_info*)&typeid(RTTIDerivedA),
 0) )
 v2 = 30;
 v3 = v2 + 200;
 if ( !__dynamic_cast(
 v1,
 (const std::type_info*)&typeid(RTTIBase),
 (const std::type_info*)&typeid(RTTIDerivedB),
 0) )
 v3 = v2;
 operator delete(v0);
 (*(void ( **)(void *))(*(unsigned long long *)v1 + 8LL))(v1);
 return (unsigned int)(v3 + 14);
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x147F */
void test_cpp_oo_features(void)
{
 int v0; // eax
 unsigned int v1; // eax
 char s[36]; // [rsp+4h] [rbp-24h] BYREF

 puts(s);
 memset(&s[15], 0, 17);
 *(unsigned long long *)s = xmmword_21F8;
 v0 = strlen(s);
 printf(format, (unsigned int)(v0 + 4700));
 v1 = test_cpp_constructor();
 printf(aCppL302D, v1);
 printf(aCppL303D, 42);
 printf(aCppL304D, 71);
 printf(aCppL305D, 650);
 printf(aCppL306D, 22);
 printf(aCppL307D, 39);
 printf(aCppL308D, 16);
 printf(aCppL309D, 85);
 test_cpp_exception();
}


/* Function: main @ 0x15A8 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x15B2 */
template<>
long long template_max<long long>(long long a1, long long a2)
{
 long long result; // rax

 result = a2;
 if ( (int)a1 > (int)a2 )
 return a1;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x15BA */
template<>
double template_max<double>(double a1, double a2)
{
 return fmax(a1, a2);
}


// Template function declarations
template<typename T>
T template_swap(T* a1, T* a2);

/* Function: _Z13template_swapIiEvRT_S1_ @ 0x15BF */
template<>
unsigned int template_swap<unsigned int>(unsigned int *a1, unsigned int *a2)
{
 unsigned int result; // rax

 result = *a1;
 *a1 = *a2;
 *a2 = result;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x15C8 */
template<>
Container<int>::Container()
{
 // Default constructor - member data would be at offset 40
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x15E4 */
template<>
int Container<int>::get(int index)
{
 return 0;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x15F6 */
template<>
long long Container<int>::getSize()
{
 return 0;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x15FA */
template<>
Container<double>::Container()
{
 *(unsigned int *)(this + 80) = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1602 */
template<>
long long Container<double>::push(double value)
{
 return 0;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1618 */
template<>
double Container<double>::get(int index)
{
 return 0.0;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x162C */
template<>
long long Container<double>::getSize()
{
 return 0;
}

















/* Function: .term_proc @ 0x164C */
void term_proc()
{
 ;
}


/* FAILED to decompile: _Znam @ 0x40E0 */

/* FAILED to decompile: printf @ 0x40F0 */

/* FAILED to decompile: __cxa_begin_catch @ 0x40F8 */

/* FAILED to decompile: strlen @ 0x4100 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x4108 */

/* FAILED to decompile: __libc_start_main @ 0x4118 */

/* FAILED to decompile: __cxa_atexit @ 0x4120 */

/* FAILED to decompile: _ZdlPv @ 0x4128 */

/* FAILED to decompile: _Znwm @ 0x4130 */

/* FAILED to decompile: __dynamic_cast @ 0x4138 */

/* FAILED to decompile: _ZdaPv @ 0x4140 */

/* FAILED to decompile: __cxa_rethrow @ 0x4150 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x4158 */

/* FAILED to decompile: puts @ 0x4160 */

/* FAILED to decompile: __cxa_end_catch @ 0x4168 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x4170 */

/* FAILED to decompile: __cxa_throw @ 0x4178 */

/* FAILED to decompile: _Unwind_Resume @ 0x4180 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x4188 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x4190 */

/* FAILED to decompile: __gmon_start__ @ 0x41A0 */

/* Total functions decompiled: 40, failed: 21 */
