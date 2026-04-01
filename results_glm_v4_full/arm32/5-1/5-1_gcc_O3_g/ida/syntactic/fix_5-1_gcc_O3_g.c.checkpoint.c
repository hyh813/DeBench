/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
#ifndef size_t
typedef unsigned int size_t;
#endif
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Standard library includes */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <typeinfo>
#include <new>

/* Forward declarations for std::ios_base and static init object */
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

/* Implementations for std::ios_base::Init */
namespace std {
 ios_base::Init __ioinit;
}

void std_ios_base_Init_ctor(std::ios_base::Init *this_) {
 new (this_) std::ios_base::Init();
}

extern "C" void std_ios_base_Init_dtor(std::ios_base::Init *this_) {
 /* Trivial destructor - nothing to do */
 (void)this_;
}

std::ios_base::Init::Init() {}

std::ios_base::Init::~Init() {}

/* External symbols */
void *_dso_handle = 0;

/* Function prototype for weak stub */
extern int call_weak_fn();

/* Stub implementation for weak function */
int call_weak_fn() {
 return 0;
}

/* Forward declarations for test functions */
void test_cpp_oo_features();

/* Forward declaration for LifecycleClass */
typedef struct LifecycleClass LifecycleClass;

/* C++ runtime operator new/delete declarations */
void *operator new(size_t size);
void operator delete(void *ptr, size_t size);

/* Placement new operator (must be declared without extern "C") */
void *operator new(size_t, void *ptr);

/* Implementations for operator new/delete */
void *operator new(size_t size) {
 return malloc(size);
}

void operator delete(void *ptr, size_t size) {
 (void)size;
 free(ptr);
}

/* ARM C++ runtime ABI atexit function */
extern "C" int __aeabi_atexit(void *object, void (*destructor)(void *), void *dso_handle);

/* Macro for JUMPOUT */
#define JUMPOUT(x) __builtin_unreachable()

/* Macros for 64-bit value manipulation */
#define HIDWORD(x) ((unsigned int)((uint64_t)(x) >> 32))
#define LODWORD(x) ((unsigned int)((uint64_t)(x)))
#define SHIDWORD(x) ((int)((int64_t)(x) >> 32))

/* External C++ runtime functions */
extern "C" void *_cxa_allocate_exception(size_t size);
extern "C" void _cxa_throw(void *exception, void *type_info, void *dest);

/* Stub implementations for exception handling */
extern "C" void *_cxa_allocate_exception(size_t size) {
 (void)size;
 return malloc(size);
}

extern "C" void _cxa_throw(void *exception, void *type_info, void *dest) {
 (void)exception;
 (void)type_info;
 (void)dest;
 __builtin_unreachable();
}

/* GNU libc printf with format checking */
extern int _printf_chk(int flag, const char *fmt, ...);


/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/5-1/5-1_gcc_O3_g
 * Processor: arm
 */

/* Forward declarations for C++ classes */
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct SimpleClass SimpleClass;
typedef struct LifecycleClass LifecycleClass;
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;

/* Template function declarations */
#define template_max(type) template_max_##type
#define template_swap(type) template_swap_##type

int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);

/* Struct definitions for incomplete types */
struct Base {
 void **vptr;
};

struct Derived {
 void **vptr;
 int multiplier;
};

struct MiddleA {
 void **vptr;
 int dataA;
};

struct MiddleB {
 void **vptr;
 int dataB;
};

struct DiamondDerived {
 void **vptr;
 int dataA;
 int dataB;
};

struct MultiDerived {
 struct Base BaseB;
 void **vptr;
};

struct RTTIDerivedA {
 void **vptr;
};

struct RTTIDerivedB {
 void **vptr;
};

struct SimpleClass {
 char name[32];
};

struct LifecycleClass {
 static int instance_count;
};

/* Static member definition for LifecycleClass */
int LifecycleClass::instance_count = 0;

struct Container_int {
 int data[10];
 int size;
};

struct Container_double {
 double data[10];
 int size;
};

/* External declarations for RTTI typeinfo */
extern const void *typeinfo_for_RTTLIBase;
extern const void *typeinfo_for_RTTIDerivedA;
extern const void *typeinfo_for_RTTIDerivedB;

/* String constants */
static const char s[] = "C++ OO Features Test";

/* Vtable external symbols */
extern void *off_116B4;
extern void *off_116C8;

/* External C++ runtime functions */
extern "C" void *_dynamic_cast(void *src_ptr,
                                const struct __class_type_info *src_type,
                                const struct __class_type_info *dst_type,
                                int src2dst_offset);

/* Function: .init_proc @ 0x10920 */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_1092C @ 0x1092C */
void sub_1092C()
{
 JUMPOUT(0);
}


/* Function: _Z18test_cpp_exceptionv @ 0x10A60 */
void test_cpp_exception()
{
 unsigned int *exception; // r0

 exception = (unsigned int *)_cxa_allocate_exception(4u);
 *exception = 42;
 _cxa_throw(exception, (void *)0, 0);
}


/* Function: main @ 0x10B18 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x10B28 */
void GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 new (&std::__ioinit) std::ios_base::Init();
 __aeabi_atexit(&std::__ioinit, (void (*)(void *))std_ios_base_Init_dtor, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x10C50 */
size_t test_cpp_member_func()
{
 SimpleClass obj; // [sp+0h] [bp-30h] BYREF

 strncpy(obj.name, "Test", 0x1Fu);
 obj.name[31] = 0;
 return strlen(obj.name) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x10CBC */
int test_cpp_constructor()
{
 return LifecycleClass::instance_count + 21 + 1000 * LifecycleClass::instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x10CDC */
int call_virtual_func(Base *obj, int x)
{
 typedef int (*VirtualFunc)(Base*, int);
 return ((VirtualFunc)(*obj->vptr))(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x10CE8 */
int test_cpp_virtual_func()
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x10CF0 */
int test_cpp_multiple_inheritance()
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x10CF8 */
int test_cpp_diamond_inheritance()
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x10D04 */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x10D0C */
int test_cpp_template_func()
{
 int v0; // r4
 double v1; // r6
 int a; // [sp+4h] [bp-1Ch] BYREF
 int b; // [sp+8h] [bp-18h] BYREF

 v0 = template_max_int(3, 7);
 v1 = template_max_double(2.5, 1.5);
 a = 10;
 b = 20;
 template_swap_int(&a, &b);
 return (int)v1 + v0 + a + b;
}


/* Function: _Z23test_cpp_template_classv @ 0x10DB4 */
int test_cpp_template_class()
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x10DBC */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x10DC4 */
int test_cpp_smart_ptr()
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x10DD0 - REMOVED (uses CRT artifacts) */


/* Function: _Z20test_cpp_oo_featuresv @ 0x10ED4 - REMOVED (uses CRT artifacts) */
/* Stub implementation */
void test_cpp_oo_features()
{
 int v0;
 int v1;
 int v2;
 int v3;
 int v4;
 int v5;
 int v6;
 int v7;
 int v8;
 int v9;
 
 v0 = test_cpp_member_func();
 v1 = test_cpp_constructor();
 v2 = test_cpp_virtual_func();
 v3 = test_cpp_multiple_inheritance();
 v4 = test_cpp_diamond_inheritance();
 v5 = test_cpp_operator_overload();
 v6 = test_cpp_template_func();
 v7 = test_cpp_template_class();
 v8 = test_cpp_lambda();
 v9 = test_cpp_smart_ptr();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x110D0 */
int Base_virtual_func(Base *self, int x)
{
 return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x110D8 */
const char * Base_getName(const Base *self)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x110E4 */
void * Base_destructor(Base *self)
{
 return self;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x110E8 */
int Derived_virtual_func(Derived *self, int x)
{
 return x * self->multiplier;
}


/* Function: _ZNK7Derived7getNameEv @ 0x110F4 */
const char * Derived_getName(const Derived *self)
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x11100 */
int MultiDerived_funcA(MultiDerived *self)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x11108 */
int MultiDerived_funcB(MultiDerived *self)
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x11110 */
int thunk_MultiDerived_funcB(MultiDerived *self)
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x11118 */
int MiddleA_func(MiddleA *self)
{
 return *(int *)((char *)&self->dataA + *((unsigned int *)self->vptr - 3)) + 150;
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x11130 */
int thunk_MiddleA_func(MiddleA *self)
{
 return *(int *)((char *)&self->dataA
 + *((unsigned int *)self->vptr - 3)
 + *(*(unsigned int **)((char *)&self->vptr + *((unsigned int *)self->vptr - 3)) - 3))
 + 150;
}


/* Function: _ZN7MiddleB4funcEv @ 0x11154 */
int MiddleB_func(MiddleB *self)
{
 return *(int *)((char *)&self->dataB + *((unsigned int *)self->vptr - 3)) + 200;
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x1116C */
int thunk_MiddleB_func(MiddleB *self)
{
 return *(int *)((char *)&self->dataB
 + *((unsigned int *)self->vptr - 3)
 + *(*(unsigned int **)((char *)&self->vptr + *((unsigned int *)self->vptr - 3)) - 3))
 + 200;
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x11190 */
int DiamondDerived_func(DiamondDerived *self)
{
 return *(int *)((char *)&self->dataA + *((unsigned int *)self->vptr - 3)) + 250;
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x111A8 */
int thunk_DiamondDerived_func(DiamondDerived *self)
{
 return *(int *)((char *)&self->dataA
 + *((unsigned int *)self->vptr - 3)
 + *(*(unsigned int **)((char *)&self->vptr + *((unsigned int *)self->vptr - 3)) - 3))
 + 250;
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x111CC */
int thunk2_DiamondDerived_func(DiamondDerived *self)
{
 return *(unsigned int *)((char *)self + *(unsigned int *)(*(&self[-1].dataB + 1) - 12) - 4) + 250;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x111E4 */
int RTTIDerivedA_getType(const RTTIDerivedA *self)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x111EC */
int RTTIDerivedB_getType(const RTTIDerivedB *self)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x111F4 */
void * RTTIDerivedB_destructor(RTTIDerivedB *self)
{
 return self;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x111F8 */
void * RTTIDerivedA_destructor(RTTIDerivedA *self)
{
 return self;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x111FC */
void * DiamondDerived_destructor(DiamondDerived *self)
{
 return self;
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x11200 */
void thunk_DiamondDerived_destructor(DiamondDerived *self)
{
 ;
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x11210 */
void thunk2_DiamondDerived_destructor(DiamondDerived *self)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x11218 */
void * MultiDerived_destructor(MultiDerived *self)
{
 return self;
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x1121C */
void thunk_MultiDerived_destructor(MultiDerived *self)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x11224 */
void * Derived_destructor(Derived *self)
{
 return self;
}


/* Function: _ZN4BaseD0Ev @ 0x11228 */
void * Base_deleting_destructor(Base *self)
{
 operator delete(self, 4u);
 return self;
}


/* Function: _ZN7DerivedD0Ev @ 0x11240 */
void * Derived_deleting_destructor(Derived *self)
{
 operator delete(self, 8u);
 return self;
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x11258 */
void * MultiDerived_deleting_destructor2(MultiDerived *self)
{
 operator delete(self, 0x10u);
 return self;
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x11270 */
void thunk_MultiDerived_deleting_destructor(MultiDerived *self)
{
 operator delete(&self[-1].BaseB, 0x10u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1128C */
void * RTTIDerivedB_deleting_destructor(RTTIDerivedB *self)
{
 operator delete(self, 4u);
 return self;
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x112A4 */
void * RTTIDerivedA_deleting_destructor(RTTIDerivedA *self)
{
 operator delete(self, 4u);
 return self;
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x112BC */
void * DiamondDerived_deleting_destructor2(DiamondDerived *self)
{
 operator delete(self, 0x18u);
 return self;
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x112D4 */
void thunk_DiamondDerived_deleting_destructor(DiamondDerived *self)
{
 operator delete((char *)self + *((unsigned int *)self->vptr - 4), 0x18u);
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x112F8 */
void thunk2_DiamondDerived_deleting_destructor(DiamondDerived *self)
{
 operator delete(&self[-1].dataB + 1, 0x18u);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x11314 */
int template_max_int(int a, int b)
{
 if ( a < b )
 return b;
 return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x11320 */
double template_max_double(double a, double b)
{
 double v2; // r4

 v2 = a;
 if ( a <= b )
 return b;
 return v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x11350 */
void template_swap_int(int *a, int *b)
{
 int v2; // r3

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x11364 */
Container_int * Container_int_Constructor(Container_int *self)
{
 self->size = 0;
 return self;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x11370 */
void Container_int_push(Container_int *self, int value)
{
 int size; // r3

 size = self->size;
 if ( size <= 9 )
 {
 self->size = size + 1;
 self->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x11388 */
int Container_int_get(const Container_int *self, int idx)
{
 if ( idx >= 0 && self->size > idx )
 return self->data[idx];
 else
 return 0;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x113AC */
int Container_int_getSize(const Container_int *self)
{
 return self->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x113B4 */
Container_double * Container_double_Constructor(Container_double *self)
{
 self->size = 0;
 return self;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x113C0 */
void Container_double_push(Container_double *self, int a2, double value)
{
 double v3; // r4
 uint64_t v3_int;
 uint64_t value_int;

 v3_int = *(uint64_t *)&v3;
 value_int = *(uint64_t *)&value;
 v3_int = (v3_int & 0xFFFFFFFFULL) | ((uint64_t)((unsigned int)((value_int >> 32))) << 32);
 value_int = (value_int & 0xFFFFFFFFULL) | ((uint64_t)self->size << 32);
 if ( (int)((value_int >> 32)) <= 9 )
 {
 v3_int = (v3_int & 0xFFFFFFFF00000000ULL) | (uint64_t)(unsigned int)value_int;
 self->size = (int)((value_int >> 32)) + 1;
 *(uint64_t *)&self->data[(int)((value_int >> 32))] = v3_int;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x113F0 */
double Container_double_get(const Container_double *self, int idx)
{
 if ( idx < 0 || self->size <= idx )
 return 0.0;
 return self->data[idx];
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1141C */
int Container_double_getSize(const Container_double *self)
{
 return self->size;
}


/* Function: .term_proc @ 0x11424 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __aeabi_unwind_cpp_pr0 @ 0x22098 */

/* FAILED to decompile: __imp___cxa_end_catch @ 0x2209C */

/* FAILED to decompile: __imp_strncpy @ 0x220A0 */

/* FAILED to decompile: __imp___aeabi_d2iz @ 0x220A4 */

/* FAILED to decompile: __imp_abort @ 0x220A8 */

/* FAILED to decompile: __imp___cxa_throw @ 0x220AC */

/* FAILED to decompile: __imp___libc_start_main @ 0x220B0 */

/* FAILED to decompile: __imp___cxa_end_cleanup @ 0x220B4 */

/* FAILED to decompile: __imp___gxx_personality_v0 @ 0x220B8 */

/* FAILED to decompile: __imp___printf_chk @ 0x220BC */

/* FAILED to decompile: __imp___aeabi_atexit @ 0x220C0 */

/* FAILED to decompile: __imp___aeabi_dcmpgt @ 0x220C4 */

/* FAILED to decompile: __imp__ZNSt8ios_base4InitD1Ev @ 0x220C8 */

/* FAILED to decompile: __imp___dynamic_cast @ 0x220CC */

/* FAILED to decompile: __imp__ZNSt8ios_base4InitC1Ev @ 0x220D0 */

/* FAILED to decompile: __imp_strlen @ 0x220D4 */

/* FAILED to decompile: __imp__Znwj @ 0x220D8 */

/* FAILED to decompile: __imp__ZNKSt9type_infoeqERKS_ @ 0x220DC */

/* FAILED to decompile: __imp___cxa_begin_catch @ 0x220E0 */

/* FAILED to decompile: __imp_puts @ 0x220E4 */

/* FAILED to decompile: __imp__ZdlPvj @ 0x220E8 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x220EC */

/* FAILED to decompile: __imp___cxa_rethrow @ 0x220F0 */

/* FAILED to decompile: __imp___cxa_allocate_exception @ 0x220F4 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x220FC */

/* Total functions decompiled: 70, failed: 25 */
