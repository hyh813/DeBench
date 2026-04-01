/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_clang_O2_no_g
 * Processor: pc
 */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/* External declarations */
extern void *_dso_handle;
void *_dso_handle = 0;
extern void *_ZTI8RTTIBase;
extern void *_ZTI12RTTIDerivedA;
extern void *_ZTI12RTTIDerivedB;

/* C++ runtime declarations */
extern "C" void *__cxa_allocate_exception(unsigned long size);
extern "C" void __cxa_throw(void *exception, void *type_info, void *dest);
void *operator new(unsigned long size);
void operator delete(void *ptr);
extern "C" void *__dynamic_cast(void *src, const void *src_type, const void *dst_type, int flags);

/* LifecycleClass forward declaration */
class LifecycleClass {
public:
    static int instance_count;
};
int LifecycleClass::instance_count = 0;

/* RTTI class forward declarations */
class RTTIBase {
public:
    virtual ~RTTIBase();
    virtual long long getType();
};

class RTTIDerivedA : public RTTIBase {
public:
    virtual ~RTTIDerivedA();
    virtual long long getType();
};

class RTTIDerivedB : public RTTIBase {
public:
    virtual ~RTTIDerivedB();
    virtual long long getType();
};

/* Container template class */
template<typename T>
class Container {
public:
    unsigned int size;
    T data[10];
    Container();
    long long push(T value);
    long long get(int index) const;
    long long getSize() const;
};

/* C++ namespace stubs */
namespace std {
    class ios_base {
    public:
        class Init {
        public:
            Init();
            ~Init();
        };
    };
    extern ios_base::Init __ioinit;
}

extern "C" int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);

/* Macro definitions */
#define JUMPOUT(x) do { } while(0)

/* Define std::__ioinit */
namespace std {
    ios_base::Init __ioinit;
}







/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x1120 */
void __ios_base_init_dtor(void *arg)
{
 ((std::ios_base::Init *)arg)->~Init();
}

int GLOBAL__sub_I_5_1_cpp()
{
 return __cxa_atexit(__ios_base_init_dtor, &std::__ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */






/* Function: _Z20test_cpp_constructorv @ 0x1280 */
long long test_cpp_constructor(void)
{
 return (unsigned int)(1001 * LifecycleClass::instance_count + 21);
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x12A0 */
long long call_virtual_func(long long ( ***a1)(unsigned long long))
{
 return (**a1)((unsigned long long)a1);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x12B0 */
long long test_cpp_virtual_func(void)
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x12C0 */
long long test_cpp_multiple_inheritance(void)
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x12D0 */
long long test_cpp_diamond_inheritance(void)
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x12E0 */
long long test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x12F0 */
long long test_cpp_template_func(void)
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0x1300 */
long long test_cpp_template_class(void)
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x1310 */
long long test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x1320 */
void test_cpp_exception(void)
{
 unsigned int *exception; // rax

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (void *)0, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x13E0 */
long long test_cpp_smart_ptr(void)
{
 return 703;
}





/* Function: _Z20test_cpp_oo_featuresv @ 0x14A0 */
void test_cpp_oo_features(void)
{
 puts("test");
 printf("%d", (unsigned int)(1001 * LifecycleClass::instance_count + 21));
 printf("%d", 42);
 printf("%d", 71);
 printf("%d", 650);
 printf("%d", 22);
 printf("%d", 39);
 printf("%d", 16);
 printf("%d", 85);
 test_cpp_exception();
}


/* Function: main @ 0x1680 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1690 */
template<typename T>
T template_max(T a1, T a2);

template<>
int template_max<int>(int a1, int a2)
{
 int result; // rax

 result = a2;
 if ( a1 > a2 )
 return a1;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x16A0 */
template<>
double template_max<double>(double a1, double a2)
{
 return fmax(a1, a2);
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x16B0 */
template<typename T>
void template_swap(T *a1, T *a2);

template<>
void template_swap<int>(int *a1, int *a2)
{
 int temp; // rax

 temp = *a1;
 *a1 = *a2;
 *a2 = temp;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x16C0 */
template<>
Container<int>::Container()
{
 size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x16D0 */
template<>
long long Container<int>::push(int a2)
{
 long long result; // rax

 result = size;
 if ( result <= 9 )
 {
 size = result + 1;
 data[result] = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x16F0 */
template<>
long long Container<int>::get(int a2) const
{
 long long result; // rax

 result = 0;
 if ( a2 >= 0 && size > (unsigned int)a2 )
 return data[a2];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1710 */
template<>
long long Container<int>::getSize() const
{
 return size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1720 */
template<>
Container<double>::Container()
{
 size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1730 */
template<>
long long Container<double>::push(double a2)
{
 long long result; // rax

 result = size;
 if ( result <= 9 )
 {
 size = result + 1;
 data[result] = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1750 */
template<>
long long Container<double>::get(int a2) const
{
 long long result;

 result = 0;
 if ( a2 >= 0 && size > (unsigned int)a2 )
 return data[a2];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1770 */
template<>
long long Container<double>::getSize() const
{
 return size;
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1780 */
// attributes: thunk
RTTIDerivedA::~RTTIDerivedA()
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1790 */
long long RTTIDerivedA::getType()
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x17A0 */
RTTIBase::~RTTIBase()
{
 ;
}

/* Function: _ZNK8RTTIBase7getTypeEv @ 0x17A8 */
long long RTTIBase::getType()
{
 return 0;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x17B0 */
// attributes: thunk
RTTIDerivedB::~RTTIDerivedB()
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x17C0 */
long long RTTIDerivedB::getType()
{
 return 2;
}


/* Function: .term_proc @ 0x17C8 */
void term_proc()
{
 ;
}


/* FAILED to decompile: printf @ 0x40D8 */

/* FAILED to decompile: __cxa_begin_catch @ 0x40E0 */

/* FAILED to decompile: strlen @ 0x40E8 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x40F0 */

/* FAILED to decompile: __libc_start_main @ 0x4100 */

/* FAILED to decompile: __cxa_atexit @ 0x4108 */

/* FAILED to decompile: _ZdlPv @ 0x4110 */

/* FAILED to decompile: _Znwm @ 0x4118 */

/* FAILED to decompile: __dynamic_cast @ 0x4120 */

/* FAILED to decompile: __cxa_rethrow @ 0x4130 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x4138 */

/* FAILED to decompile: puts @ 0x4140 */

/* FAILED to decompile: __cxa_end_catch @ 0x4148 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x4150 */

/* FAILED to decompile: __cxa_throw @ 0x4158 */

/* FAILED to decompile: _Unwind_Resume @ 0x4160 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x4168 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x4170 */

/* FAILED to decompile: __gmon_start__ @ 0x4180 */

/* Total functions decompiled: 40, failed: 19 */
