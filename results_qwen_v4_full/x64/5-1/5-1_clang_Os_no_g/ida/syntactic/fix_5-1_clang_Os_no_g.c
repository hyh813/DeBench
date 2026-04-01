/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_clang_Os_no_g
 * Processor: pc
 */

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <math.h>

/* External declarations */
static void *_dso_handle = 0;
extern void *__cxa_allocate_exception(size_t);
extern void __cxa_throw(void *exception, void *type_info, void *dest);
extern int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
extern void *operator new(size_t);
extern void *operator new[](size_t);
extern void operator delete(void *);
extern void operator delete[](void *);
extern void *__dynamic_cast(void *src, const void *src_type, const void *dst_type, size_t src_dst_distance);
extern size_t strlen(const char *s);
extern int printf(const char *format, ...);
extern int puts(const char *s);
extern double fmax(double x, double y);

/* Global variables */
static int LifecycleClass_instance_count = 0;
struct LifecycleClassStruct { int instance_count; };
#define LifecycleClass ((struct LifecycleClassStruct *)&LifecycleClass_instance_count)

/* Macros */
#define JUMPOUT(x) return

/* C++ std namespace stubs */
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

/* External data references */
static const char s[] = "test";
static const char format[] = "%d\n";
static const char aCppL302D[] = "cpp_l302: %d\n";
static const char aCppL303D[] = "cpp_l303: %d\n";
static const char aCppL304D[] = "cpp_l304: %d\n";
static const char aCppL305D[] = "cpp_l305: %d\n";
static const char aCppL306D[] = "cpp_l306: %d\n";
static const char aCppL307D[] = "cpp_l307: %d\n";
static const char aCppL308D[] = "cpp_l308: %d\n";
static const char aCppL309D[] = "cpp_l309: %d\n";

/* C++ runtime symbols */
static void *std___ioinit = 0;
static void *typeinfo_for_int = 0;
static void *typeinfo_for_RTTIBase = 0;
static void *typeinfo_for_RTTIDerivedA = 0;
static void *typeinfo_for_RTTIDerivedB = 0;

/* Define xmmword_21F8 */
static unsigned long long xmmword_21F8 = 0x7473657400000000ULL;

/* Stub implementations for C++ runtime functions */
void __cxa_throw(void *exception, void *type_info, void *dest)
{
 (void)exception;
 (void)type_info;
 (void)dest;
}

int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle)
{
 (void)func;
 (void)arg;
 (void)dso_handle;
 return 0;
}

void *__cxa_allocate_exception(size_t size)
{
 return operator new(size);
}

/* Class declarations */
struct RTTIBase {
    virtual ~RTTIBase();
    virtual long long getType();
};

struct RTTIDerivedA : RTTIBase {
    virtual ~RTTIDerivedA();
    virtual long long getType();
};

struct RTTIDerivedB : RTTIBase {
    virtual ~RTTIDerivedB();
    virtual long long getType();
};

template<typename T>
struct Container {
    Container(long long a1);
    long long push(long long a1, T value);
    T get(long long a1, int index);
    long long getSize(long long a1);
};







/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x1140 */
int GLOBAL__sub_I_5_1_cpp()
{
 return __cxa_atexit((void (*)(void *))0, &std___ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x125C */
long long test_cpp_member_func(void)
{
 char s[36]; // [rsp+4h] [rbp-24h] BYREF

 memset(&s[15], 0, 17);
 *(unsigned long long *)s = xmmword_21F8;
 return (unsigned int)strlen(s) + 4700;
}


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
 ++LifecycleClass->instance_count;
 v3 = v0[2] + LifecycleClass->instance_count;
 operator delete[](v0);
 --LifecycleClass->instance_count;
 return (unsigned int)(v3 + 1000 * LifecycleClass->instance_count);
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x12E5 */
long long call_virtual_func(long long ( ***a1)(unsigned long long))
{
 return (**a1)((unsigned long long)a1);
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

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, typeinfo_for_int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x13D7 */
long long test_cpp_smart_ptr(void)
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x13DD */
long long test_cpp_rtti(void)
{
 return 144;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x147F */
void test_cpp_oo_features(void)
{
 int v0; // eax
 unsigned int v1; // eax
 char s[36]; // [rsp+4h] [rbp-24h] BYREF

 puts(::s);
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


/* Primary template declaration */
template<typename T>
T template_max(T a1, T a2);

template<typename T>
void template_swap(T *a1, T *a2);

/* Function: _Z12template_maxIiET_S0_S0_ @ 0x15B2 */
template<>
int template_max<int>(int a1, int a2)
{
 int result; // rax

 result = a2;
 if ( a1 > a2 )
 return a1;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x15BA */
template<>
double template_max<double>(double a1, double a2)
{
 return fmax(a1, a2);
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x15BF */
template<>
void template_swap<int>(int *a1, int *a2)
{
 int result; // rax

 result = *a1;
 *a1 = *a2;
 *a2 = result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x15C8 */
template<>
Container<int>::Container(long long a1)
{
 *(unsigned int *)(a1 + 40) = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x15D0 */
template<>
long long Container<int>::push(long long a1, int a2)
{
 long long result; // rax

 result = *(int *)(a1 + 40);
 if ( result <= 9 )
 {
 *(unsigned int *)(a1 + 40) = result + 1;
 *(unsigned int *)(a1 + 4 * result) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x15E4 */
template<>
int Container<int>::get(long long a1, int a2)
{
 int result; // rax

 result = 0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 40) > a2 )
 return *(unsigned int *)(a1 + 4LL * (unsigned int)a2);
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x15F6 */
template<>
long long Container<int>::getSize(long long a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x15FA */
template<>
Container<double>::Container(long long a1)
{
 *(unsigned int *)(a1 + 80) = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1602 */
template<>
long long Container<double>::push(long long a1, double a2)
{
 long long result; // rax

 result = *(int *)(a1 + 80);
 if ( result <= 9 )
 {
 *(unsigned int *)(a1 + 80) = result + 1;
 *(double *)(a1 + 8 * result) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1618 */
template<>
double Container<double>::get(long long a1, int a2)
{
 double result; // xmm0_8

 result = 0.0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 80) > a2 )
 return *(double *)(a1 + 8LL * (unsigned int)a2);
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x162C */
template<>
long long Container<double>::getSize(long long a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1630 */
// attributes: thunk
RTTIDerivedA::~RTTIDerivedA()
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1636 */
long long RTTIDerivedA::getType()
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x163C */
RTTIBase::~RTTIBase()
{
 ;
}

/* Function: RTTIBase::getType */
long long RTTIBase::getType()
{
 return 0;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x163E */
// attributes: thunk
RTTIDerivedB::~RTTIDerivedB()
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1644 */
long long RTTIDerivedB::getType()
{
 return 2;
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
