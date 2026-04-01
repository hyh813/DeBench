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
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Standard C library headers */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <typeinfo>

/* Macro for HIBYTE - extracts high byte of a 16-bit value */
#define HIBYTE(x) (((x) >> 8) & 0xFF)

/* External CRT/runtime symbols */
extern void _gmon_start__(void);
extern void frame_dummy(void);
extern int _do_global_ctors_aux(void);
extern void _do_global_dtors_aux(void);

/* String constants from decompiled code */
static const char asc_21D8[] = "Testing C++ OO Features:\n";
static const char aCppL301D[] = "Member Func: %zu\n";
static const char aCppL302D[] = "Constructor: %d\n";
static const char aCppL303D[] = "Virtual Func: %d\n";
static const char aCppL304D[] = "Multiple Inheritance: %d\n";
static const char aCppL305D[] = "Diamond Inheritance: %d\n";
static const char aCppL306D[] = "Operator Overload: %d\n";
static const char aCppL307D[] = "Template Func: %d\n";
static const char aCppL308D[] = "Template Class: %d\n";
static const char aCppL309D[] = "Lambda: %d\n";

/* C++ runtime symbols */
extern void *__dso_handle;
extern int __cxa_atexit(void (*)(void *), void *, void *);

/* Stub for LifecycleClass */
class LifecycleClass {
public:
    static int instance_count;
};

/* Definition of static member */
int LifecycleClass::instance_count = 0;

namespace std {
namespace ios_base {
class Init {
public:
    Init();
    ~Init();
};
}
}

/* Global C++ IO init object */
static std::ios_base::Init __ioinit;
extern void *_ZSt4Init;  /* Actual symbol name for global Init object */

/* Wrapper for std::ios_base::Init destructor for __cxa_atexit */
static void ioinit_destructor_wrapper(void *ptr) {
    static_cast<std::ios_base::Init*>(ptr)->~Init();
}

/* RTTI type info symbols */
extern void *off_3ECC;  /* typeinfo for RTTIBase */
extern void *off_3EE0;  /* typeinfo for RTTIDerivedB or similar */

/* Forward declarations for RTTI classes */
struct type_info {
    virtual ~type_info();
    const char* name() const;
    bool operator==(const type_info&) const;
    bool operator!=(const type_info&) const;
};

/* Stub implementations for type_info methods */
type_info::~type_info()
{
}

const char* type_info::name() const
{
    return "unknown";
}

bool type_info::operator==(const type_info& other) const
{
    return this == &other;
}

bool type_info::operator!=(const type_info& other) const
{
    return !(*this == other);
}

/* Vtable for type_info */
extern void* _ZTVSt9type_info[];

/* Typeinfo symbols used in exception handling and RTTI */
static struct type_info typeinfo_for_int;
extern struct type_info typeinfo_for_RTTIBase;
extern struct type_info typeinfo_for_RTTIDerivedA;
extern struct type_info typeinfo_for_RTTIDerivedB;

/* GCC's internal type_info base class for dynamic_cast */
struct __class_type_info : public type_info {};

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

/* Template class Container forward declaration */
template<typename T>
class Container {
public:
    Container();
    int push(T value);
    T get(int index);
    int getSize();
    unsigned int _size;
    T _data[10];
};

/* C++ operator new/delete */
extern void *operator new(size_t);
extern void *operator new(size_t, void *ptr) { return ptr; }  /* placement new */
extern void operator delete(void *);

/* C++ runtime function implementations */
void* __cxa_allocate_exception(size_t size)
{
    return malloc(size);
}

void __cxa_throw(void *exception, struct type_info *tinfo, void *dest)
{
    /* Stub: this would normally unwind and terminate */
    fprintf(stderr, "Exception thrown (type: %s)\n", tinfo ? tinfo->name() : "unknown");
    abort();
}

/* Simple stub for __cxa_atexit - registration of exit handlers */
static struct {
    void (*func)(void*);
    void *arg;
    void *dso_handle;
} atexit_handlers[32];
static int atexit_handler_count = 0;

int __cxa_atexit(void (*func)(void*), void *arg, void *dso_handle)
{
    if (atexit_handler_count < 32) {
        atexit_handlers[atexit_handler_count].func = func;
        atexit_handlers[atexit_handler_count].arg = arg;
        atexit_handlers[atexit_handler_count].dso_handle = dso_handle;
        atexit_handler_count++;
        return 0;
    }
    return -1;
}

/* Exception handling */
extern void *__cxa_allocate_exception(size_t);
extern void __cxa_throw(void *, struct type_info *, void *);
extern void *__dynamic_cast(const void *, const struct __class_type_info *, const struct __class_type_info *, ptrdiff_t);

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-1/5-1_clang_O3_no_g
 * Processor: pc
 */




/* Function: sub_1030 @ 0x1030 */
void __attribute__((noinline)) sub_1030()
{
 /* Stub for indirect jump through vtable */
}


/* Function: sub_1130 @ 0x1130 */
int sub_1130(int a1)
{
 return (*(int (**)(void))(a1 - 24))();
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x1140 */
int GLOBAL__sub_I_5_1_cpp()
{
 /* Use placement new to construct the global Init object */
 new (&__ioinit) std::ios_base::Init();
 /* Register destructor for program exit */
 return __cxa_atexit(ioinit_destructor_wrapper, &__ioinit, &__dso_handle);
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_11AC @ 0x11AC */
void sub_11AC()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x11B0 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x12E9 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x12ED */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: _Z20test_cpp_member_funcv @ 0x1300 */
size_t test_cpp_member_func(void)
{
 unsigned short s[4]; // [esp+14h] [ebp-28h] BYREF
 int v2; // [esp+1Ch] [ebp-20h]
 int v3; // [esp+20h] [ebp-1Ch]
 int v4; // [esp+24h] [ebp-18h]
 int v5; // [esp+28h] [ebp-14h]
 unsigned char v6[8]; // [esp+2Ch] [ebp-10h] BYREF

 memset(v6, 0, sizeof(v6));
 v5 = 0;
 v4 = 0;
 v3 = 0;
 v2 = 0;
 s[2] &= 0x00FF;  /* Clear high byte */
 s[3] = 0;
 strcpy((char *)s, "Test");
 return strlen((const char *)s) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1380 */
int test_cpp_constructor(void)
{
 return 1001 * LifecycleClass::instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x13A0 */
int call_virtual_func(void *a1, int a2)
{
 return (*(int (**)(void *, int))a1)(a1, a2);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x13D0 */
int test_cpp_virtual_func(void)
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x13E0 */
int test_cpp_multiple_inheritance(void)
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x13F0 */
int test_cpp_diamond_inheritance(void)
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1400 */
int test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1410 */
int test_cpp_template_func(void)
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0x1420 */
int test_cpp_template_class(void)
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x1430 */
int test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x1440 */
void test_cpp_exception(void)
{
 unsigned int *exception; // eax

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, &typeinfo_for_int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1530 */
int test_cpp_smart_ptr(void)
{
 return 703;
}





/* Function: _Z20test_cpp_oo_featuresv @ 0x1600 */
void test_cpp_oo_features(void)
{
 size_t v0; // eax
 char s[6]; // [esp+Ch] [ebp-30h] BYREF
 short v2; // [esp+12h] [ebp-2Ah]
 int v3; // [esp+14h] [ebp-28h]
 int v4; // [esp+18h] [ebp-24h]
 int v5; // [esp+1Ch] [ebp-20h]
 int v6; // [esp+20h] [ebp-1Ch]
 unsigned char v7[8]; // [esp+24h] [ebp-18h] BYREF

 puts(asc_21D8);
 memset(v7, 0, sizeof(v7));
 v6 = 0;
 v5 = 0;
 v4 = 0;
 v3 = 0;
 s[5] = 0;
 v2 = 0;
 strcpy(s, "Test");
 v0 = strlen(s);
 printf(aCppL301D, v0 + 4700);
 printf(aCppL302D, 1001 * LifecycleClass::instance_count + 21);
 printf(aCppL303D, 42);
 printf(aCppL304D, 71);
 printf(aCppL305D, 650);
 printf(aCppL306D, 22);
 printf(aCppL307D, 39);
 printf(aCppL308D, 16);
 printf(aCppL309D, 85);
 test_cpp_exception();
}


/* Function: main @ 0x1810 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1830 */
int template_max_int(int a1, int a2)
{
 int result; // eax

 result = a2;
 if ( a1 > a2 )
 return a1;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1840 */
long double template_max_double(double a1, double a2)
{
 long double v2; // fst6

 v2 = a2;
 if ( a1 > (long double)a2 )
 return a1;
 return v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1860 */
unsigned int * template_swap_int(int *a1, unsigned int *a2)
{
 unsigned int *result; // eax
 int v3; // edx

 result = a2;
 v3 = *a1;
 *a1 = *a2;
 *a2 = v3;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1880 */
int Container_int__Container(int a1)
{
 int result; // eax

 result = a1;
 *(unsigned int *)(a1 + 40) = 0;
 return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1890 */
int Container_int__push(int a1, int a2)
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


/* Function: _ZNK9ContainerIiE3getEi @ 0x18B0 */
int Container_int__get(int a1, int a2)
{
 int result; // eax

 result = 0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 40) > a2 )
 return *(unsigned int *)(a1 + 4 * a2);
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x18D0 */
int Container_int__getSize(int a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x18E0 */
int Container_double__Container(int a1)
{
 int result; // eax

 result = a1;
 *(unsigned int *)(a1 + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x18F0 */
int Container_double__push(int a1, double a2)
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


/* Function: _ZNK9ContainerIdE3getEi @ 0x1910 */
long double Container_double__get(int a1, int a2)
{
 long double result; // fst7

 result = 0.0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 80) > a2 )
 return *(double *)(a1 + 8 * a2);
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1930 */
int Container_double__getSize(int a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1940 */
void RTTIDerivedA__delete_destructor(RTTIDerivedA *obj)
{
 operator delete(obj);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1970 */
int RTTIDerivedA__getType(RTTIDerivedA *obj)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x1980 */
void RTTIBase__destructor(RTTIBase *obj)
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1990 */
void RTTIDerivedB__delete_destructor(RTTIDerivedB *obj)
{
 operator delete(obj);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x19C0 */
int RTTIDerivedB__getType(RTTIDerivedB *obj)
{
 return 2;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */






/* FAILED to decompile: _Znwj @ 0x4078 */

/* FAILED to decompile: __cxa_finalize @ 0x407C */

/* FAILED to decompile: __cxa_begin_catch @ 0x4080 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x4084 */

/* FAILED to decompile: strlen @ 0x4088 */

/* FAILED to decompile: __cxa_atexit @ 0x408C */

/* FAILED to decompile: __libc_start_main @ 0x4094 */

/* FAILED to decompile: _ZdlPv @ 0x4098 */

/* FAILED to decompile: __dynamic_cast @ 0x409C */

/* FAILED to decompile: printf @ 0x40A4 */

/* FAILED to decompile: __cxa_rethrow @ 0x40A8 */

/* FAILED to decompile: puts @ 0x40AC */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x40B0 */

/* FAILED to decompile: __cxa_end_catch @ 0x40B4 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x40B8 */

/* FAILED to decompile: __cxa_throw @ 0x40BC */

/* FAILED to decompile: _Unwind_Resume @ 0x40C0 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x40C4 */

/* Total functions decompiled: 46, failed: 18 */
