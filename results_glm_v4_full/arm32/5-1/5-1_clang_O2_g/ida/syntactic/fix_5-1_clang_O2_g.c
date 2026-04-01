#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <new>

/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;

/* Standard C/C++ types */

typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Define HIBYTE macros */
#define HIBYTE(x) ((unsigned char)((unsigned int)(x) >> 8))
#define SET_HIBYTE(x, val) do { ((unsigned char *)&(x))[1] = (val); } while(0)

/* Define LODWORD macro for extracting low 32 bits */
#define LODWORD(x) (*(unsigned int*)&(x))

/* External variables */
extern unsigned char unk_1375;
extern unsigned short unk_1376;
extern void *off_11ED8;
extern void *off_11EEC;

/* RTTI type_info objects */
extern struct type_info typeinfo_for_RTITIBase;
extern struct type_info typeinfo_for_RTITIDerivedA;
extern struct type_info typeinfo_for_RTITIDerivedB;

/* Forward declarations for missing types */
struct Base {
 void **_vptr$Base;
};

/* RTTI-related structures */
struct RTTIBase {
 void **_vptr$RTTIBase;
 virtual ~RTTIBase();
};

struct RTTIDerivedA : RTTIBase {
 void **_vptr$RTTIBase;
 virtual ~RTTIDerivedA();
 int getType() const;
};

struct RTTIDerivedB : RTTIDerivedA {
 void **_vptr$RTTIBase;
 virtual ~RTTIDerivedB();
 int getType() const;
};

/* Lifecycle class for testing */
struct LifecycleClass {
 static int instance_count;
};

/* Define static member */
int LifecycleClass::instance_count = 0;

/* Define format strings */
static const char asc_134C[] = "Testing C++ Object-Oriented Features\n";
static const char aCppL301D[] = "test_cpp_member_func: %zu\n";
static const char aCppL302D[] = "test_cpp_constructor: %d\n";
static const char aCppL303D[] = "test_cpp_virtual_func: %d\n";
static const char aCppL304D[] = "test_cpp_multiple_inheritance: %d\n";
static const char aCppL305D[] = "test_cpp_diamond_inheritance: %d\n";
static const char aCppL306D[] = "test_cpp_operator_overload: %d\n";
static const char aCppL307D[] = "test_cpp_template_func: %d\n";
static const char aCppL308D[] = "test_cpp_template_class: %d\n";
static const char aCppL309D[] = "test_cpp_lambda: %d\n";

/* Container template definition */
template<typename T>
struct Container {
 int size;
 T data[10];
 Container();
 void push(T value);
 T get(int idx) const;
 int getSize() const;
};

namespace std {
 namespace ios_base {
  struct Init {
   Init();
   ~Init();
  };
 }
}

/* External variables */
using std::ios_base::Init;
extern void *_dso_handle;

/* Define global variables */
std::ios_base::Init __ioinit;
void *_dso_handle = NULL;

/* Wrapper for std::ios_base::Init destructor */
extern "C" void std_ios_base_Init_dtor_wrapper(void *arg) {
    ((std::ios_base::Init*)arg)->~Init();
}

/* Function declarations */
extern int call_weak_fn(void);

/* Stub implementation for weak function */
int call_weak_fn(void) {
    return 0;
}

/* Global operator new/delete implementations */
inline void *operator new(size_t size) {
    void *p = malloc(size);
    if (!p) throw std::bad_alloc();
    return p;
}

inline void operator delete(void *ptr) {
    free(ptr);
}

/* Basic type_info structure */
struct type_info {
    const char *name;
};

/* C++ runtime function declarations */
extern void *_cxa_allocate_exception(size_t);
extern void _cxa_throw(void *, struct type_info *, void (*)(void *));
extern int _cxa_atexit(void (*)(void *), void *, void *);
extern void *_dynamic_cast(const void *, const struct __class_type_info *, 
                          const struct __class_type_info *, ptrdiff_t);
extern struct type_info *typeinfo_for_int;

/* Stub implementations for C++ runtime functions */
void *_cxa_allocate_exception(size_t size) {
    return malloc(size);
}

void _cxa_throw(void *obj, struct type_info *tinfo, void (*dest)(void *)) {
    /* Stub: just free the exception object for now */
    if (obj) {
        free(obj);
    }
}

int _cxa_atexit(void (*)(void *), void *, void *) {
    return 0;
}

/* Define type_info for int */
static type_info typeinfo_for_int_obj = {
    /* name */ "i"
};

struct type_info *typeinfo_for_int = &typeinfo_for_int_obj;

/* Macro for JUMPOUT */
#define JUMPOUT(x) return

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/5-1/5-1_clang_O2_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x848 */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_854 @ 0x854 */
void sub_854()
{
 JUMPOUT(0);
}


/* Function: _ZN12RTTIDerivedAD0Ev_0 @ 0x8BC */
RTTIDerivedA::~RTTIDerivedA()
{
 operator delete(this);
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x958 */
void GLOBAL__sub_I_5_1_cpp()
{
 new(&__ioinit) std::ios_base::Init();
 _cxa_atexit(std_ios_base_Init_dtor_wrapper, &__ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0xAFC */
size_t test_cpp_member_func()
{
 return strlen("Test") + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0xB64 */
int test_cpp_constructor()
{
 return 1001 * LifecycleClass::instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0xB80 */
int call_virtual_func(Base *obj, int x)
{
 return ((int ( *)(Base *, int))*obj->_vptr$Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0xB8C */
int test_cpp_virtual_func()
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0xB94 */
int test_cpp_multiple_inheritance()
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0xB9C */
int test_cpp_diamond_inheritance()
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0xBA8 */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0xBB0 */
int test_cpp_template_func()
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0xBB8 */
int test_cpp_template_class()
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0xBC0 */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0xBC8 */
void test_cpp_exception()
{
 void *exception; // r0

 exception = _cxa_allocate_exception(4u);
 *(unsigned int *)exception = 42;
 _cxa_throw(exception, typeinfo_for_int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0xC98 */
int test_cpp_smart_ptr()
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0xCA4 */
int test_cpp_rtti()
{
 return 144;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0xD70 */
void test_cpp_oo_features()
{
	puts(asc_134C);
	printf(aCppL301D, strlen("Test") + 4700);
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


/* Function: main @ 0xFAC */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0xFC0 */
int template_max_int(int a, int b)
{
 if ( a <= b )
 return b;
 return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0xFCC */
int template_max_double(double a, double b)
{
 int v2; // r5

 v2 = LODWORD(b);
 if ( a > b )
 return LODWORD(a);
 return v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1000 */
template<typename T>
void template_swap(T *a, T *b)
{
 int v2; // r2

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1014 */
template<>
Container<int>::Container()
{
 size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1020 */
template<>
void Container<int>::push(int value)
{
 int size; // r2

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x1038 */
template<>
int Container<int>::get(int idx) const
{
 int result; // r0

 result = 0;
 if ( idx >= 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1058 */
template<>
int Container<int>::getSize() const
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1060 */
template<>
Container<double>::Container()
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x106C */
template<>
void Container<double>::push(double value)
{
 int size; // r12

 size = this->size;
 if ( size <= 9 )
 {
 this->data[size] = value;
 this->size = size + 1;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1090 */
template<>
double Container<double>::get(int idx) const
{
 double result; // r0

 result = 0.0;
 if ( idx >= 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x10BC */
template<>
int Container<double>::getSize() const
{
 return this->size;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x10C8 */
int RTTIDerivedA::getType() const
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x10D0 */
RTTIBase::~RTTIBase()
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x10D4 */
// attributes: thunk
RTTIDerivedB::~RTTIDerivedB()
{
 RTTIDerivedA::~RTTIDerivedA();
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x10D8 */
int RTTIDerivedB::getType() const
{
 return 2;
}


/* Function: .term_proc @ 0x10E0 */
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

/* FAILED to decompile: _ZdlPv @ 0x120E0 */

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

/* Total functions decompiled: 41, failed: 22 */
