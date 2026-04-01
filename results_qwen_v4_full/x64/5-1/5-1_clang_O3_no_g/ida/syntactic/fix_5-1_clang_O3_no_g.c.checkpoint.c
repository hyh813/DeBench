/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_clang_O3_no_g
 * Processor: pc
 */

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <new>
#include <cmath>

/* External declarations */
extern long long _gmon_start__(void);
extern void *_dso_handle;
unsigned __int128 xmmword_21F8 = 0;
static char *format = "%d\n";
static char *aCppL302D = "%d\n";
static char *aCppL303D = "%d\n";
static char *aCppL304D = "%d\n";
static char *aCppL305D = "%d\n";
static char *aCppL306D = "%d\n";
static char *aCppL307D = "%d\n";
static char *aCppL308D = "%d\n";
static char *aCppL309D = "%d\n";
static char *s = "test";


/* Macro definitions */
#define JUMPOUT(x) do { } while(0)

/* C++ namespace stub */
namespace std {
    class ios_base {
    public:
        class Init {
        public:
            Init();
            ~Init();
        };
    };
    static ios_base::Init __ioinit;
}

/* External C++ functions */
extern "C" {
    int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
    void *__cxa_allocate_exception(unsigned int size);
    void __cxa_throw(void *exc, void *type_info, void *dest);
    void *__dynamic_cast(void *src, const void *src_type, const void *dst_type, int flags);
}

/* C++ operators */
extern void *operator new(unsigned long size);
extern void operator delete(void *ptr);

/* Class declarations */
class LifecycleClass {
public:
    static int instance_count;
};
int LifecycleClass::instance_count = 1;

class RTTIBase {
public:
    virtual ~RTTIBase();
    virtual long long getType();
};
long long RTTIBase::getType() { return 0; }

class RTTIDerivedA : public RTTIBase {
public:
    ~RTTIDerivedA();
    long long getType();
};

class RTTIDerivedB : public RTTIBase {
public:
    ~RTTIDerivedB();
    long long getType();
};

template<typename T>
class Container {
public:
    T data_[10];
    int size_;
    Container();
    long long push(T value);
    T get(int index) const;
    long long getSize() const;
};




/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 JUMPOUT(0);
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x1120 */
int GLOBAL__sub_I_5_1_cpp()
{
 new (&std::__ioinit) std::ios_base::Init();
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x1240 */
long long test_cpp_member_func(void)
{
 unsigned char s[31]; // [rsp+4h] [rbp-24h] BYREF
 char v2; // [rsp+23h] [rbp-5h]

 *(unsigned long long *)&s[15] = *(__int128 *)((char *)&xmmword_21F8 + 15);
 *(unsigned long long *)s = xmmword_21F8;
 v2 = 0;
 return (unsigned int)strlen((char *)s) + 4700;
}


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
 __cxa_throw(exception, (struct type_info *)0, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x13E0 */
long long test_cpp_smart_ptr(void)
{
 return 703;
}





/* Function: _Z20test_cpp_oo_featuresv @ 0x14A0 */
void test_cpp_oo_features(void)
{
 int v0; // eax
 unsigned char s[31]; // [rsp+Ch] [rbp-4Ch] BYREF
 char v2; // [rsp+2Bh] [rbp-2Dh]

 puts(::s);
 *(unsigned long long *)&s[15] = *(__int128 *)((char *)&xmmword_21F8 + 15);
 *(unsigned long long *)s = xmmword_21F8;
 v2 = 0;
 v0 = strlen((char *)s);
 printf(format, (unsigned int)(v0 + 4700));
 printf(aCppL302D, (unsigned int)(1001 * LifecycleClass::instance_count + 21));
 printf(aCppL303D, 42);
 printf(aCppL304D, 71);
 printf(aCppL305D, 650);
 printf(aCppL306D, 22);
 printf(aCppL307D, 39);
 printf(aCppL308D, 16);
 printf(aCppL309D, 85);
 test_cpp_exception();
}


/* Function: main @ 0x1680 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


template<typename T>
long long template_max(T a1, T a2);

template<>
long long template_max<int>(int a1, int a2)
{
 long long result; // rax

 result = a2;
 if ( a1 > a2 )
 return a1;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x16A0 */
template<>
long long template_max<double>(double a1, double a2)
{
 return (long long)fmax(a1, a2);
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x16B0 */
template<typename T>
long long template_swap(T *a1, T *a2);

template<>
long long template_swap<int>(int *a1, int *a2)
{
 long long result; // rax

 result = *a1;
 *a1 = *a2;
 *a2 = result;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x16C0 */
template<>
Container<int>::Container()
{
 size_ = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x16D0 */
template<>
long long Container<int>::push(int value)
{
 long long result; // rax

 result = size_;
 if ( result <= 9 )
 {
 size_ = result + 1;
 data_[result] = value;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x16F0 */
template<>
int Container<int>::get(int index) const
{
 int result; // rax

 result = 0;
 if ( index >= 0 && size_ > index )
 return data_[index];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1710 */
template<>
long long Container<int>::getSize() const
{
 return size_;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1720 */
template<>
Container<double>::Container()
{
 size_ = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1730 */
template<>
long long Container<double>::push(double value)
{
 long long result; // rax

 result = size_;
 if ( result <= 9 )
 {
 size_ = result + 1;
 data_[result] = value;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1750 */
template<>
double Container<double>::get(int index) const
{
 double result; // xmm0_8

 result = 0.0;
 if ( index >= 0 && size_ > index )
 return data_[index];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1770 */
template<>
long long Container<double>::getSize() const
{
 return size_;
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
