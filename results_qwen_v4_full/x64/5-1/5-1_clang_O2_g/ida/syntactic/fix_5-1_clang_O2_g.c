/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_clang_O2_g
 * Processor: pc
 */

#include <stddef.h>
#include <math.h>

/* Global declarations for undeclared symbols */
extern long long (*_gmon_start__)(void);
extern unsigned long long xmmword_21F8;
extern void *__dso_handle;
extern size_t strlen(const char *);
extern void *__cxa_allocate_exception(unsigned int);
extern void __cxa_throw(void *exception, void *type_info, void *dest);
extern void *operator new(unsigned long);
extern void operator delete(void *);
extern void *__dynamic_cast(void *, const void *, const void *, int);
extern int printf(const char *, ...);
extern int puts(const char *);
extern void *typeinfo_for_int;
extern void *typeinfo_for_RTTIBase;
extern void *typeinfo_for_RTTIDerivedA;
extern void *typeinfo_for_RTTIDerivedB;

extern double fmax(double, double);

/* Define xmmword_21F8 */
unsigned long long xmmword_21F8 = 0;

/* C++ runtime stubs */
void *__cxa_allocate_exception(unsigned int size) { return 0; }
void __cxa_throw(void *exception, void *type_info, void *dest) { }

/* Standard library stubs */
int printf(const char *format, ...) { return 0; }
int puts(const char *s) { return 0; }
size_t strlen(const char *s) { return 0; }

/* C++ class declarations */
struct Base {
    void *_vptr$Base;
};

struct LifecycleClass {
    static int instance_count;
};

int LifecycleClass::instance_count = 0;

/* Container template class declaration */
template<typename T>
struct Container {
    int size;
    T data[10];
    Container();
    void push(T value);
    T get(int idx) const;
    int getSize() const;
};

/* RTTI class declarations */
struct RTTIBase {
    virtual ~RTTIBase();
    virtual int getType() const;
};

struct RTTIDerivedA : RTTIBase {
    virtual ~RTTIDerivedA();
    virtual int getType() const;
};

struct RTTIDerivedB : RTTIBase {
    virtual ~RTTIDerivedB();
    virtual int getType() const;
};

/* Macro for decompiler stubs */
#define JUMPOUT(x) do { } while(0)

/* std namespace stubs */
namespace std {
    namespace ios_base {
        class Init {
        public:
            Init(void *p);
            ~Init();
        };
    };
    extern char __ioinit;
}







/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x1120 */
void GLOBAL__sub_I_5_1_cpp()
{
 /* std::ios_base::Init::Init((std::ios_base::Init *)&std::__ioinit); */
 /* __cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle); */
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x1240 */
int test_cpp_member_func()
{
 unsigned char s[31]; // [rsp+4h] [rbp-24h] BYREF
 char v2; // [rsp+23h] [rbp-5h]

 *(unsigned long long *)&s[15] = *(__int128 *)((char *)&xmmword_21F8 + 15);
 *(unsigned long long *)s = xmmword_21F8;
 v2 = 0;
 return strlen((const char *)s) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1280 */
int test_cpp_constructor()
{
 return 1001 * LifecycleClass::instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x12A0 */
int call_virtual_func(Base *obj, int x)
{
 return ((long long ( *)(Base *, int))obj->_vptr$Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x12B0 */
int test_cpp_virtual_func()
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x12C0 */
int test_cpp_multiple_inheritance()
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x12D0 */
int test_cpp_diamond_inheritance()
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x12E0 */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x12F0 */
int test_cpp_template_func()
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0x1300 */
int test_cpp_template_class()
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x1310 */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x1320 */
int test_cpp_exception()
{
 unsigned int *exception; // rax

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (void *)&typeinfo_for_int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x13E0 */
int test_cpp_smart_ptr()
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x13F0 */
int test_cpp_rtti()
{
 return 344;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x14A0 */
void test_cpp_oo_features()
{
 int v0; // eax
 unsigned char s[31]; // [rsp+Ch] [rbp-4Ch] BYREF
 char v2; // [rsp+2Bh] [rbp-2Dh]

 puts((const char *)s);
 *(unsigned long long *)&s[15] = *(__int128 *)((char *)&xmmword_21F8 + 15);
 *(unsigned long long *)s = xmmword_21F8;
 v2 = 0;
 v0 = strlen((const char *)s);
 printf("%d", (unsigned int)(v0 + 4700));
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
int template_max_int(int a, int b)
{
 int result; // eax

 result = b;
 if ( a > b )
 return a;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x16A0 */
double template_max_double(double a, double b)
{
 return fmax(a, b);
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x16B0 */
template<typename T>
void template_swap(T *a, T *b);

template<>
void template_swap<int>(int *a, int *b)
{
 int v2; // eax

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x16C0 */
template<>
Container<int>::Container()
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x16D0 */
template<>
void Container<int>::push(int value)
{
 long long size; // rax

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x16F0 */
template<>
int Container<int>::get(int idx) const
{
 int result; // eax

 result = 0;
 if ( idx >= 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1710 */
template<>
int Container<int>::getSize() const
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1720 */
template<>
Container<double>::Container()
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1730 */
template<>
void Container<double>::push(double value)
{
 long long size; // rax

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1750 */
template<>
double Container<double>::get(int idx) const
{
 double result; // xmm0_8

 result = 0.0;
 if ( idx >= 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1770 */
template<>
int Container<double>::getSize() const
{
 return this->size;
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1780 */
// attributes: thunk
RTTIDerivedA::~RTTIDerivedA()
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1790 */
int RTTIDerivedA::getType() const
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x17A0 */
RTTIBase::~RTTIBase()
{
 ;
}

/* Function: _ZNK8RTTIBase7getTypeEv */
int RTTIBase::getType() const
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
int RTTIDerivedB::getType() const
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
