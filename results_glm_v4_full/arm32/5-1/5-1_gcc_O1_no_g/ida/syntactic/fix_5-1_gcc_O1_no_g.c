/* Auto-injected type definitions by preprocessor */
/* Note: Standard types already defined in system headers */

#include <string.h>
#include <typeinfo>
#include <cxxabi.h>
#include <iostream>
#include <new>
#include <stdint.h>
#include <stdarg.h>
#include <stdio.h>

/* Forward declaration for LifecycleClass */
struct LifecycleClass {
 static int instance_count;
};

/* Define static member */
int LifecycleClass::instance_count = 0;

/* Forward declarations for diamond inheritance types */
struct DiamondDerived;
struct MiddleA;
struct MiddleB;
struct Base;
struct Derived;
struct MultiDerived;

/* Base class definition for dynamic_cast support */
struct Base {
 virtual ~Base() {}
 virtual int virtual_func(int x);
 virtual const char* getName();
};

/* Forward declarations for Base virtual functions */
int Base__virtual_func(void *self);
const char * Base__getName(void *self);
void Base__D2(void *self);

/* Forward declarations for RTTI type_info objects */
extern struct type_info typeinfo_for_RTIBase;
extern struct type_info typeinfo_for_RTTIDerivedA;
extern struct type_info typeinfo_for_RTTIDerivedB;
extern struct type_info typeinfo_for_int;

/* Forward declarations for RTTI class types */
struct RTTIBase {
 virtual ~RTTIBase() {}
 virtual const char* getName() const { return "Base"; }
};

struct RTTIDerivedA : public virtual RTTIBase {
 virtual ~RTTIDerivedA() {}
 virtual int getType() const { return 1; }
};

struct RTTIDerivedB : public virtual RTTIBase {
 virtual ~RTTIDerivedB() {}
 virtual int getType() const { return 2; }
};

/* Forward declarations for vtable/offset pointers */
extern int off_1187C;
extern int off_11894;
extern int off_11994;
extern int off_11968;
extern int off_1197C;
extern int off_11990;

/* Forward declarations for template functions */
int template_max_int(int result, int a2);
long long template_max_double(double a1, double a2);
int * template_swap_int(int *result, int *a2);

/* Forward declarations for C++ OO test functions */
int test_cpp_virtual_func(void);
int test_cpp_diamond_inheritance(void);

/* Forward declarations for exception handling functions */
extern void* __cxa_allocate_exception(size_t size);
extern void __cxa_throw(void* exception, struct type_info* type, void (*destructor)(void*));

/* Forward declarations for printf functions */
extern int _printf_chk(int flag, const char *format, ...);

/* Forward declarations for atexit */
extern int _aeabi_atexit(void *object, void (*destructor)(void *), void *dso_handle);
extern void *_dso_handle;

/* Stub implementation for _dso_handle */
void *_dso_handle = 0;

/* Stub implementation for _aeabi_atexit */
int _aeabi_atexit(void *object, void (*destructor)(void *), void *dso_handle)
{
 (void)object;
 (void)destructor;
 (void)dso_handle;
 return 0;
}

/* Stub implementation for __cxa_allocate_exception */
void* __cxa_allocate_exception(size_t size)
{
 (void)size;
 return 0;
}

/* Stub implementation for __cxa_throw */
void __cxa_throw(void* exception, struct type_info* type, void (*destructor)(void*))
{
 (void)exception;
 (void)type;
 (void)destructor;
}

/* Stub implementation for call_weak_fn */
int call_weak_fn(void)
{
 return 0;
}

/* Implementation for _printf_chk that wraps printf */
int _printf_chk(int flag, const char *format, ...)
{
 va_list args;
 int result;
 (void)flag;  // Flag parameter is ignored in this stub
 va_start(args, format);
 result = vprintf(format, args);
 va_end(args);
 return result;
}

/* Forward declarations for diamond inheritance functions */
int virtual_thunk_to_DiamondDerived_func(void *self);

/* String constants for test output */
static const char *s = "Starting C++ OO Features Tests";
static const char *unk_11608 = "Test member_func: %zu\n";
static const char *unk_11628 = "Test constructor: %d\n";
static const char *unk_11644 = "Test virtual_func: %d\n";
static const char *unk_11660 = "Test multiple_inheritance: %d\n";
static const char *unk_1167C = "Test diamond_inheritance: %d\n";
static const char *unk_1169C = "Test operator_overload: %d\n";
static const char *unk_116B8 = "Test template_func: %d\n";
static const char *unk_116D4 = "Test template_class: %d\n";
static const char *unk_116F0 = "Test lambda: %s\n";

/* Function declarations for CRT stubs */
int call_weak_fn(void);

/* Macro definitions for inline assembly */
#define JUMPOUT(x) __asm__ __volatile__ ("b " #x)

/* Macro for extracting high 32 bits of a 64-bit value */
#define SHIDWORD(x) ((int)((unsigned long long)(x) >> 32))

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/5-1/5-1_gcc_O1_no_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x109B0 */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_109BC @ 0x109BC */
void sub_109BC()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x10C00 */
size_t test_cpp_member_func(void)
{
 char dest[32]; // [sp+4h] [bp-2Ch] BYREF

 strncpy(dest, "Test", 0x1Fu);
 dest[31] = 0;
 return strlen(dest) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x10C6C */
int test_cpp_constructor(void)
{
 unsigned int *v0; // r0
 int v1; // r3
 int v2; // r4

 v0 = (unsigned int *)operator new[](0x14u);
 v0[1] = 10;
 v0[2] = 20;
 v0[3] = 30;
 v0[4] = 40;
 v1 = LifecycleClass::instance_count++;
 v2 = v1 + 21;
 operator delete[](v0);
 --LifecycleClass::instance_count;
 return v2 + 1000 * LifecycleClass::instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x10CD0 */
int call_virtual_func(void *a1)
{
 return (*(int (**)(void *))a1)(a1);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x10D3C */
int test_cpp_virtual_func(void)
{
 Base obj;
 int (*vtable_ptr)(void *) = Base__virtual_func;
 int result;

 result = call_virtual_func(&vtable_ptr);
 return result + 5;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x10D68 */
int test_cpp_multiple_inheritance(void)
{
 return 71;
}

/* Function: _Z28test_cpp_diamond_inheritancev @ 0x10DF0 */
int test_cpp_diamond_inheritance(void)
{
 return 65;
}





/* Function: _Z26test_cpp_operator_overloadv @ 0x10DF4 */
int test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x10DFC */
int test_cpp_template_func(int a1, int a2, int a3)
{
 int v3; // r4
 double v4; // r6
 int v6; // [sp+4h] [bp-1Ch] BYREF
 int v7; // [sp+8h] [bp-18h] BYREF
 double temp_double;

 v3 = template_max_int(3, 7);
 temp_double = template_max_double(1.0, 2.0);
 v4 = temp_double;
 v6 = 10;
 v7 = 20;
 template_swap_int(&v6, &v7);
 return (int)v4 + v3 + v6 + v7;
}


/* Function: _Z23test_cpp_template_classv @ 0x10EAC */
int test_cpp_template_class(void)
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x10EB4 */
int test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x10EBC */
void test_cpp_exception(void)
{
 unsigned int *exception; // r0

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&typeinfo_for_int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x10F78 */
int test_cpp_smart_ptr(void)
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x10F84 */
size_t test_cpp_rtti(void)
{
 RTTIBase *v0;
 RTTIBase *v1;
 int v2;
 const char *v3;
 size_t v4;

 v0 = (RTTIBase *)operator new(sizeof(RTTIDerivedA));
 v0 = new(v0) RTTIDerivedA();
 v1 = (RTTIBase *)operator new(sizeof(RTTIDerivedB));
 v1 = new(v1) RTTIDerivedB();
 if ( typeid(*v0) == typeid(RTTIDerivedA) )
 v2 = 10;
 else
 v2 = 0;
 if ( typeid(*v1) == typeid(RTTIDerivedB) )
 v2 += 20;
 if ( dynamic_cast<RTTIDerivedA*>(v0) )
 {
 v2 += 100;
 }
 if ( dynamic_cast<RTTIDerivedB*>(v1) )
 {
 v2 += 200;
 }
 v3 = typeid(*v0).name();
 v4 = v2 + strlen(v3);
 v0->~RTTIBase();
 operator delete(v0);
 v1->~RTTIBase();
 operator delete(v1);
 return v4;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x11074 */
void test_cpp_oo_features(void)
{
 size_t v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r0
 long long v5; // r0
 int v6; // r2
 int v7; // r0

 puts(s);
 v0 = test_cpp_member_func();
 _printf_chk(1, unk_11608, v0);
 v1 = test_cpp_constructor();
 _printf_chk(1, unk_11628, v1);
 v2 = test_cpp_virtual_func();
 _printf_chk(1, unk_11644, v2);
 v3 = test_cpp_multiple_inheritance();
 _printf_chk(1, unk_11660, v3);
 v4 = test_cpp_diamond_inheritance();
 _printf_chk(1, unk_1167C, v4);
 v5 = _printf_chk(1, unk_1169C, 22);
 v7 = test_cpp_template_func(v5, SHIDWORD(v5), v6);
 _printf_chk(1, unk_116B8, v7);
 _printf_chk(1, unk_116D4, 16);
 _printf_chk(1, unk_116F0, 85);
 test_cpp_exception();
}


/* Function: main @ 0x1119C */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: sub_111A4 @ 0x111A4 */
void sub_111A4(int a1, int a2, int a3, int a4, int a5, int a6)
{
 ;
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x111AC */
int GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 static std::ios_base::Init ioinit;
 return _aeabi_atexit(&ioinit, (void (*)(void *))std::ios_base::Init::~Init, &_dso_handle);
}


/* Function: _ZN4Base12virtual_funcEi @ 0x111DC */
int Base__virtual_func(void *self)
{
 return *(int *)((char *)self + 4) + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x111E4 */
const char * Base__getName(void *self)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x111F0 */
void Base__D2(void *self)
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x111F4 */
int Derived__virtual_func(void *self)
{
 return *(int *)((char *)self + 4) * *((unsigned int *)self + 1);
}


/* Function: _ZNK7Derived7getNameEv @ 0x11200 */
const char * Derived__getName(void *self)
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x1120C */
int MultiDerived__funcA(void *self)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x11214 */
int MultiDerived__funcB(void *self)
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x1121C */
int non_virtual_thunk_to_MultiDerived_funcB(void *self)
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x11224 */
int MiddleA__func(void *self)
{
 return *(unsigned int *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 12) + 4) + 150;
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x1123C */
int virtual_thunk_to_MiddleA_func(void *self)
{
 return *(unsigned int *)((char *)self
 + *(unsigned int *)(*(unsigned int *)self - 12)
 + *(unsigned int *)(*(unsigned int *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 12)) - 12)
 + 4)
 + 150;
}


/* Function: _ZN7MiddleB4funcEv @ 0x11260 */
int MiddleB__func(void *self)
{
 return *(unsigned int *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 12) + 4) + 200;
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x11278 */
int virtual_thunk_to_MiddleB_func(void *self)
{
 return *(unsigned int *)((char *)self
 + *(unsigned int *)(*(unsigned int *)self - 12)
 + *(unsigned int *)(*(unsigned int *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 12)) - 12)
 + 4)
 + 200;
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1129C */
int DiamondDerived__func(void *self)
{
 return *(unsigned int *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 12) + 4) + 250;
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x112B4 */
int virtual_thunk_to_DiamondDerived_func(void *self)
{
 return *(unsigned int *)((char *)self
 + *(unsigned int *)(*(unsigned int *)self - 12)
 + *(unsigned int *)(*(unsigned int *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 12)) - 12)
 + 4)
 + 250;
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x112D8 */
int non_virtual_thunk_to_DiamondDerived_func(void *self)
{
 return *(unsigned int *)((char *)self + *(unsigned int *)(*((unsigned int *)self - 2) - 12) - 4) + 250;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x112F0 */
int RTTIDerivedA__getType(void *self)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x112F8 */
int RTTIDerivedB__getType(void *self)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x11300 */
void RTTIDerivedB__D2()
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x11304 */
void RTTIDerivedA__D2()
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x11308 */
void DiamondDerived__D1(void *self)
{
 ;
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x1130C */
void virtual_thunk_to_DiamondDerived_destructor(void *self)
{
 ;
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x1131C */
void non_virtual_thunk_to_DiamondDerived_destructor(void *self)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x11324 */
void MultiDerived__D2(void *self)
{
 ;
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x11328 */
void non_virtual_thunk_to_MultiDerived_destructor(void *self)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x11330 */
void Derived__D2()
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x11334 */
void Base__D0(void *self)
{
 operator delete(self, 4u);
}


/* Function: _ZN7DerivedD0Ev @ 0x1134C */
void Derived__D0(void *self)
{
 operator delete(self, 8u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x11364 */
void MultiDerived__D0(void *self)
{
 operator delete(self, 0x10u);
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x1137C */
void non_virtual_thunk_to_MultiDerived_deleting_destructor(void *self)
{
 operator delete((char *)self - 8, 0x10u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x11398 */
void RTTIDerivedA__D0(void *self)
{
 operator delete(self, 4u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x113B0 */
void RTTIDerivedB__D0(void *self)
{
 operator delete(self, 4u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x113C8 */
void DiamondDerived__D0(void *self)
{
 operator delete(self, 0x18u);
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x113E0 */
void virtual_thunk_to_DiamondDerived_deleting_destructor(void *self)
{
 operator delete((char *)self + *(unsigned int *)(*(unsigned int *)self - 16), 0x18u);
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x11404 */
void non_virtual_thunk_to_DiamondDerived_deleting_destructor2(void *self)
{
 operator delete((char *)self - 8, 0x18u);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x11420 */
int template_max_int(int result, int a2)
{
 if ( result < a2 )
 return a2;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1142C */
long long template_max_double(double a1, double a2)
{
 double v2; // r4

 v2 = a1;
 if ( a1 <= a2 )
 v2 = a2;
 return *(unsigned long long *)&v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1145C */
int * template_swap_int(int *result, int *a2)
{
 int v2; // r3

 v2 = *result;
 *result = *a2;
 *a2 = v2;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x11470 */
void Container_int__C2(void *self)
{
 *(unsigned int *)((char *)self + 40) = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1147C */
int Container_int__push(void *self, int a2)
{
 int v2; // r3

 v2 = *(unsigned int *)((char *)self + 40);
 if ( v2 <= 9 )
 {
 *(unsigned int *)((char *)self + 40) = v2 + 1;
 *(unsigned int *)((char *)self + 4 * v2) = a2;
 }
 return a2;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x11494 */
int Container_int__get(void *self, int a2)
{
 if ( a2 < 0 )
 return 0;
 if ( *(unsigned int *)((char *)self + 40) > a2 )
 return *(unsigned int *)((char *)self + 4 * a2);
 return 0;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x114C0 */
int Container_int__getSize(void *self)
{
 return *(unsigned int *)((char *)self + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x114C8 */
void Container_double__C2(void *self)
{
 *(unsigned int *)((char *)self + 80) = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x114D4 */
unsigned int * Container_double__push(void *self, int a2, int a3, int a4)
{
 int v4; // r1
 unsigned int *result;

 result = (unsigned int *)self;
 v4 = result[20];
 if ( v4 <= 9 )
 {
 result[20] = v4 + 1;
 result += 2 * v4;
 *result = a3;
 result[1] = a4;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x114F0 */
long long Container_double__get(void *self, int a2)
{
 if ( a2 < 0 )
 return 0;
 if ( *(unsigned int *)((char *)self + 80) > a2 )
 return *(unsigned long long *)((char *)self + 8 * a2);
 return 0;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x11528 */
int Container_double__getSize(void *self)
{
 return *(unsigned int *)((char *)self + 80);
}


/* Function: .term_proc @ 0x11530 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __aeabi_unwind_cpp_pr0 @ 0x220A0 */

/* FAILED to decompile: __imp___cxa_end_catch @ 0x220A4 */

/* FAILED to decompile: __imp_strncpy @ 0x220A8 */

/* FAILED to decompile: __imp__ZdaPv @ 0x220AC */

/* FAILED to decompile: __imp___aeabi_d2iz @ 0x220B0 */

/* FAILED to decompile: __imp_abort @ 0x220B4 */

/* FAILED to decompile: __imp___cxa_throw @ 0x220B8 */

/* FAILED to decompile: __imp___libc_start_main @ 0x220BC */

/* FAILED to decompile: __imp___cxa_end_cleanup @ 0x220C0 */

/* FAILED to decompile: __imp___gxx_personality_v0 @ 0x220C4 */

/* FAILED to decompile: __imp___printf_chk @ 0x220C8 */

/* FAILED to decompile: __imp___aeabi_atexit @ 0x220CC */

/* FAILED to decompile: __imp___aeabi_dcmpgt @ 0x220D0 */

/* FAILED to decompile: __imp__ZNSt8ios_base4InitD1Ev @ 0x220D4 */

/* FAILED to decompile: __imp___dynamic_cast @ 0x220D8 */

/* FAILED to decompile: __imp__ZNSt8ios_base4InitC1Ev @ 0x220DC */

/* FAILED to decompile: __imp_strlen @ 0x220E0 */

/* FAILED to decompile: __imp__Znwj @ 0x220E4 */

/* FAILED to decompile: __imp__ZNKSt9type_infoeqERKS_ @ 0x220E8 */

/* FAILED to decompile: __imp___cxa_begin_catch @ 0x220EC */

/* FAILED to decompile: __imp_puts @ 0x220F0 */

/* FAILED to decompile: __imp__ZdlPvj @ 0x220F4 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x220F8 */

/* FAILED to decompile: __imp___cxa_rethrow @ 0x220FC */

/* FAILED to decompile: __imp___cxa_allocate_exception @ 0x22100 */

/* FAILED to decompile: __imp__Znaj @ 0x22104 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x2210C */

/* Total functions decompiled: 71, failed: 27 */
