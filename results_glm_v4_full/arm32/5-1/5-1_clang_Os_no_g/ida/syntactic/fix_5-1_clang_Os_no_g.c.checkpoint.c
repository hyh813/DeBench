/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef int ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <new>

/* HIBYTE macro */
#define HIBYTE(x) (((x) >> 8) & 0xFF)

/* Missing global variables - now defined locally */
static uint8_t unk_12BD = 0;
static uint16_t unk_12BE = 0;
static const char asc_1294[] = "Testing C++ OO Features";
static const char aCppL301D[] = "test_cpp_member_func: %zu\n";
static const char aCppL302D[] = "test_cpp_constructor: %d\n";
static const char aCppL303D[] = "test_cpp_virtual_func: %d\n";
static const char aCppL304D[] = "test_cpp_multiple_inheritance: %d\n";
static const char aCppL305D[] = "test_cpp_diamond_inheritance: %d\n";
static const char aCppL306D[] = "test_cpp_operator_overload: %d\n";
static const char aCppL307D[] = "test_cpp_template_func: %d\n";
static const char aCppL308D[] = "test_cpp_template_class: %d\n";
static const char aCppL309D[] = "test_cpp_lambda: %d\n";
static unsigned int off_11ED8 = 0;
static unsigned int off_11EEC = 0;

/* LifecycleClass stub */
struct LifecycleClass {
    static int instance_count;
};

/* External symbols */
extern void *call_weak_fn(void);
static void *_dso_handle = 0;
extern void *__gxx_personality_v0;

/* RTTI class definitions */
struct RTTIBase {
    virtual ~RTTIBase();
    virtual int getType() const = 0;
};

struct RTTIDerivedA : RTTIBase {
    virtual ~RTTIDerivedA();
    virtual int getType() const;
};

struct RTTIDerivedB : RTTIBase {
    virtual ~RTTIDerivedB();
    virtual int getType() const;
};

/* IDA macro stub */
#define JUMPOUT(x) return

/* C++ RTTI stubs */
struct type_info {
    const char *name;
};

/* Type info objects */
extern struct type_info type_info_for_int;
static struct type_info type_info_for_RTTIBase = { "RTTIBase" };
static struct type_info type_info_for_RTTIDerivedA = { "RTTIDerivedA" };
static struct type_info type_info_for_RTTIDerivedB = { "RTTIDerivedB" };

/* C++ exception handling stubs */
extern void *_cxa_allocate_exception(size_t);
extern void _cxa_throw(void *, struct type_info *, void (*)(void *));
extern void _cxa_begin_catch(void *);
extern void _cxa_end_catch(void);
extern void _cxa_end_cleanup(void);
extern void *_cxa_atexit(void (*)(void *), void *, void *);
extern void *_dynamic_cast(void *, const struct type_info *, const struct type_info *, int);

/* C++ memory management stubs */
extern void *operator new(size_t);
extern void operator delete(void *);

/* std::ios_base::Init stub */
namespace std {
    class ios_base {
    public:
        class Init {
        public:
            Init() {}
            ~Init() {}
        };
    };
}

static std::ios_base::Init __ioinit;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/5-1/5-1_clang_Os_no_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x848 */
int init_proc()
{
 return (int)call_weak_fn();
}


/* Function: sub_854 @ 0x854 */
void sub_854()
{
 return;
}


/* Stub implementations for C++ runtime functions */
void *call_weak_fn(void)
{
 return 0;
}

void *_cxa_atexit(void (*func)(void *), void *arg, void *dso_handle)
{
 /* Stub implementation - return non-null to indicate success */
 return (void *)1;
}

void *_dynamic_cast(void *ptr, const struct type_info *src, const struct type_info *dst, int hint)
{
 /* Stub implementation - return null pointer */
 return 0;
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x958 */
static void __ioinit_cleanup(void *arg)
{
 ((std::ios_base::Init *)arg)->~Init();
}

int GLOBAL__sub_I_5_1_cpp()
{
 new (&__ioinit) std::ios_base::Init();
 return (int)_cxa_atexit(__ioinit_cleanup, &__ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Initialize static members */
int LifecycleClass::instance_count = 0;

/* Function: _Z20test_cpp_member_funcv @ 0xAFC */
size_t test_cpp_member_func(void)
{
 return strlen("Test") + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0xB64 */
int test_cpp_constructor(void)
{
 return 1001 * LifecycleClass::instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0xB80 */
int call_virtual_func(int ( ***a1)(unsigned int))
{
 return (**a1)((unsigned int)a1);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0xB8C */
int test_cpp_virtual_func(void)
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0xB94 */
int test_cpp_multiple_inheritance(void)
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0xB9C */
int test_cpp_diamond_inheritance(void)
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0xBA8 */
int test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0xBB0 */
int test_cpp_template_func(void)
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0xBB8 */
int test_cpp_template_class(void)
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0xBC0 */
int test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0xBC8 */
void test_cpp_exception(void)
{
 /* Exception handling stub - removed CRT dependencies */
}


/* Function: sub_BF0 @ 0xBF0 - removed (CRT stub) */



/* Function: _Z18test_cpp_smart_ptrv @ 0xC98 */
int test_cpp_smart_ptr(void)
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0xCA4 */
int test_cpp_rtti(void)
{
 unsigned int *v0; // r4
 void *v1; // r5
 void *v2; // r7
 void *v3; // r6
 int v4; // r0

 v0 = (unsigned int *)operator new(4u);
 *v0 = off_11ED8;
 v1 = (void *)operator new(4u);
 *(unsigned int *)v1 = off_11EEC;
 v2 = _dynamic_cast(
 v0,
 (const struct type_info *)&type_info_for_RTTIBase,
 (const struct type_info *)&type_info_for_RTTIDerivedA,
 0);
 v3 = _dynamic_cast(
 v1,
 (const struct type_info *)&type_info_for_RTTIBase,
 (const struct type_info *)&type_info_for_RTTIDerivedB,
 0);
 operator delete(v0);
 (*(void ( **)(void *))(*(unsigned int *)v1 + 4))(v1);
 v4 = 130;
 if ( !v2 )
 v4 = 30;
 if ( v3 )
 v4 += 200;
 return v4 + 14;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0xD70 */
void test_cpp_oo_features(void)
{
 puts(asc_1294);
 printf(aCppL301D, strlen("Test") + 4700);
 printf(aCppL302D, 1001 * LifecycleClass::instance_count + 21);
 printf(aCppL303D, 42);
 printf(aCppL304D, 71);
 printf(aCppL305D, 650);
 printf(aCppL306D, 22);
 printf(aCppL307D, 39);
 printf(aCppL308D, 16);
 printf(aCppL309D, 85);
}


/* Function: main @ 0xEF4 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0xF08 */
template<typename T>
T template_max(T result, T a2)
{
 if ( result <= a2 )
 return a2;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0xF14 */
double template_max_double(double a1, double a2)
{
 if ( a1 > a2 )
 return a1;
 return a2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0xF48 */
template<typename T>
T * template_swap(T *result, T *a2)
{
 T v2 = *result;
 *result = *a2;
 *a2 = v2;
 return result;
}

template<>
int * template_swap<int>(int *result, int *a2)
{
 int v2; // r2

 v2 = *result;
 *result = *a2;
 *a2 = v2;
 return result;
}


/* Container template class definition */
template<typename T>
class Container {
public:
    Container();
    int push(T value);
    T get(int index) const;
    int getSize() const;
private:
    T data[10];
    int size;
};

/* Function: _ZN9ContainerIiEC2Ev @ 0xF5C */
template<>
Container<int>::Container()
{
 size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0xF68 */
template<>
int Container<int>::push(int value)
{
 if ( size <= 9 )
 {
 data[size] = value;
 size++;
 }
 return size;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0xF80 */
template<>
int Container<int>::get(int index) const
{
 if ( index >= 0 && size > index )
 return data[index];
 return 0;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0xFA0 */
template<>
int Container<int>::getSize() const
{
 return size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0xFA8 */
template<>
Container<double>::Container()
{
 size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0xFB4 */
template<>
int Container<double>::push(double value)
{
 if ( size <= 9 )
 {
 data[size] = value;
 size++;
 }
 return size;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0xFD8 */
template<>
double Container<double>::get(int index) const
{
 if ( index >= 0 && size > index )
 return data[index];
 return 0.0;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1004 */
template<>
int Container<double>::getSize() const
{
 return size;
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x100C */
// attributes: thunk
RTTIDerivedA::~RTTIDerivedA()
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1010 */
int RTTIDerivedA::getType() const
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x1018 */
RTTIBase::~RTTIBase()
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x101C */
// attributes: thunk
RTTIDerivedB::~RTTIDerivedB()
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1020 */
int RTTIDerivedB::getType() const
{
 return 2;
}


/* Function: .term_proc @ 0x1028 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp__Znwj @ 0x120C0 */

/* FAILED to decompile: __imp___cxa_begin_catch @ 0x120C4 */

/* FAILED to decompile: __imp___cxa_allocate_exception @ 0x120C8 */

/* FAILED to decompile: __imp_printf @ 0x120CC */

/* FAILED to decompile: __imp_puts @ 0x120D0 */

/* FAILED to decompile: __imp___libc_start_main @ 0x120D8 */

/* FAILED to decompile: __imp_abort @ 0x120DC */

/* FAILED to decompile: __imp__ZdlPv @ 0x120E0 */

/* FAILED to decompile: __imp___cxa_end_cleanup @ 0x120E4 */

/* FAILED to decompile: __imp___dynamic_cast @ 0x120E8 */

/* FAILED to decompile: __imp___cxa_atexit @ 0x120EC */

/* FAILED to decompile: __imp___cxa_rethrow @ 0x120F4 */

/* FAILED to decompile: __imp_strlen @ 0x120F8 */

/* FAILED to decompile: __imp__ZNSt8ios_base4InitC1Ev @ 0x120FC */

/* FAILED to decompile: __imp___cxa_end_catch @ 0x12100 */

/* FAILED to decompile: __imp___gxx_personality_v0 @ 0x12104 */

/* FAILED to decompile: __imp___cxa_throw @ 0x12108 */

/* FAILED to decompile: __imp___aeabi_dcmpgt @ 0x1210C */

/* FAILED to decompile: __aeabi_unwind_cpp_pr0 @ 0x12110 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x12114 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x12118 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x12120 */

/* Total functions decompiled: 42, failed: 22 */
