/* Auto-injected type definitions by preprocessor */
#include <string.h>
#include <stdio.h>

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
/* typedef unsigned long size_t; */ /* Already defined in standard headers */
/* typedef long ssize_t; */ /* Already defined in standard headers */
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Forward declarations for C++ classes */
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct SimpleClass SimpleClass;
typedef struct LifecycleClass LifecycleClass;
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;

/* Struct definitions */
struct Base {
 int (**_vtable)(...);
};

struct Derived {
 int (**_vtable)(...);
 int multiplier;
};

struct MultiDerived {
 Base BaseA;
 Base BaseB;
};

struct MiddleA {
 int (**_vtable)(...);
 int dataA;
};

struct MiddleB {
 int (**_vtable)(...);
 int dataB;
};

struct DiamondDerived {
 MiddleA middleA;
 MiddleB middleB;
 int dataA;
 int dataB;
 int base_offset;
};

struct RTTIBase {
 int (**_vtable)(...);
};

struct RTTIDerivedA {
 int (**_vtable)(...);
};

struct RTTIDerivedB {
 int (**_vtable)(...);
};

struct SimpleClass {
 char name[32];
};

struct LifecycleClass {
 int dummy;
};

/* Global variable for LifecycleClass */
int LifecycleClass_instance_count = 0;

/* Forward declarations for typeinfo */
extern struct type_info typeinfo_for_int;
extern struct type_info typeinfo_for_RTTIBase;
extern struct type_info typeinfo_for_RTTIDerivedA;
extern struct type_info typeinfo_for_RTTIDerivedB;

/* Define type_info structures */
struct type_info {
 const char *name;
};

struct type_info typeinfo_for_int = { "int" };
struct type_info typeinfo_for_RTTIBase = { "RTTIBase" };
struct type_info typeinfo_for_RTTIDerivedA = { "RTTIDerivedA" };
struct type_info typeinfo_for_RTTIDerivedB = { "RTTIDerivedB" };

/* Forward declarations for vtable pointers */
extern int off_1187C;
extern int off_11894;
extern int off_11968;
extern int off_1197C;
extern int off_11990;

/* Define vtable pointers as global variables */
int off_1187C = 0;
int off_11894 = 0;
int off_11968 = 0;
int off_1197C = 0;
int off_11990 = 0;

/* Forward declarations for thunk functions */
int virtual_thunk_to_DiamondDerived_func(DiamondDerived *self);

/* Forward declarations for C++ runtime functions */
int type_info_operator_eq(unsigned int, struct type_info *);
void *_dynamic_cast(void *, const struct __class_type_info *, const struct __class_type_info *, int);
void *_cxa_allocate_exception(unsigned int);
void _cxa_throw(void *, struct type_info *, void *);

/* Define __class_type_info struct */
struct __class_type_info {
 const char *name;
};

/* Stub implementations for C++ runtime functions */
int type_info_operator_eq(unsigned int a, struct type_info *b)
{
 return 0;
}

void *_dynamic_cast(void *a, const struct __class_type_info *b, const struct __class_type_info *c, int d)
{
 return 0;
}

void *_cxa_allocate_exception(unsigned int size)
{
 static char exception_buffer[256];
 return exception_buffer;
}

void _cxa_throw(void *a, struct type_info *b, void *c)
{
 /* Stub - does nothing */
}

/* Forward declarations for template functions */
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);

/* Stub declarations for std namespace */
extern void *__ioinit;

struct Container_int {
 int size;
 int data[10];
};

struct Container_double {
 int size;
 double data[10];
};

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/5-1/5-1_gcc_O1_g
 * Processor: arm
 */

/* Stub for call_weak_fn */
int call_weak_fn(void) { return 0; }

/* Function: .init_proc @ 0x109B0 */
int init_proc()
{
 return call_weak_fn();
}


/* Stub for JUMPOUT */
#define JUMPOUT(x) do { } while(0)

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
size_t test_cpp_member_func()
{
 SimpleClass obj; // [sp+0h] [bp-30h] BYREF

 strncpy(obj.name, "Test", 0x1Fu);
 obj.name[31] = 0;
 return strlen(obj.name) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x10C6C */
int test_cpp_constructor()
{
 unsigned int *v0; // r0
 int v1; // r3
 int v2; // r4

 v0 = (unsigned int *)operator new[](0x14u);
 v0[1] = 10;
 v0[2] = 20;
 v0[3] = 30;
 v0[4] = 40;
 v1 = LifecycleClass_instance_count++;
 v2 = v1 + 21;
 operator delete[](v0);
 --LifecycleClass_instance_count;
 return v2 + 1000 * LifecycleClass_instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x10CD0 */
int call_virtual_func(Base *obj, int x)
{
 return (*obj->_vtable)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x10CE4 */
int test_cpp_virtual_func()
{
 int v0; // r4
 Base base; // [sp+0h] [bp-18h] BYREF
 Derived derived; // [sp+4h] [bp-14h] BYREF

 base._vtable = (int (**)(...))&off_1187C;
 derived._vtable = (int (**)(...))&off_11894;
 derived.multiplier = 3;
 v0 = call_virtual_func(&base, 5);
 return v0 + 21 + call_virtual_func((Base *)&derived, 5);
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x10D68 */
int test_cpp_multiple_inheritance()
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x10D70 */
int test_cpp_diamond_inheritance()
{
 int v0; // r4
 DiamondDerived obj; // [sp+4h] [bp-24h] BYREF

 obj.middleB._vtable = (int (**)(...))&off_11968;
 obj.dataB = 50;
 v0 = virtual_thunk_to_DiamondDerived_func((DiamondDerived *)&obj.middleB);
 obj.dataB = 100;
 return v0 + virtual_thunk_to_DiamondDerived_func((DiamondDerived *)&obj.middleB);
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x10DF4 */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x10DFC */
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


/* Function: _Z23test_cpp_template_classv @ 0x10EAC */
int test_cpp_template_class()
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x10EB4 */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x10EBC */
void test_cpp_exception()
{
 unsigned int *exception; // r0

 exception = (unsigned int *)_cxa_allocate_exception(4u);
 *exception = 42;
 _cxa_throw(exception, (struct type_info *)&typeinfo_for_int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x10F78 */
int test_cpp_smart_ptr()
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x10F84 */
size_t test_cpp_rtti()
{
 void *v0; // r5
 void *v1; // r4
 int v2; // r6
 const char *v3; // r0
 size_t v4; // r6

 v0 = (void *)operator new(4u);
 *(unsigned int *)v0 = off_1197C;
 v1 = (void *)operator new(4u);
 *(unsigned int *)v1 = off_11990;
 if ( type_info_operator_eq(*(unsigned int *)(*(unsigned int *)v0 - 4), &typeinfo_for_RTTIDerivedA) )
 v2 = 10;
 else
 v2 = 0;
 if ( type_info_operator_eq(*(unsigned int *)(*(unsigned int *)v1 - 4), &typeinfo_for_RTTIDerivedB) )
 v2 += 20;
 if ( _dynamic_cast(
 v0,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedA,
 0) )
 {
 v2 += 100;
 }
 if ( _dynamic_cast(
 v1,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedB,
 0) )
 {
 v2 += 200;
 }
 v3 = *(const char **)(*(unsigned int *)(*(unsigned int *)v0 - 4) + 4);
 if ( v3 && *v3 == 42 )
 ++v3;
 v4 = v2 + strlen(v3);
 (*(void ( **)(void *))(*(unsigned int *)v0 + 4))(v0);
 (*(void ( **)(void *))(*(unsigned int *)v1 + 4))(v1);
 return v4;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x11074 */
void test_cpp_oo_features()
{
 size_t v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r0
 int v5; // r0

 v0 = test_cpp_member_func();
 printf("test_cpp_member_func: %zu\n", v0);
 v1 = test_cpp_constructor();
 printf("test_cpp_constructor: %d\n", v1);
 v2 = test_cpp_virtual_func();
 printf("test_cpp_virtual_func: %d\n", v2);
 v3 = test_cpp_multiple_inheritance();
 printf("test_cpp_multiple_inheritance: %d\n", v3);
 v4 = test_cpp_diamond_inheritance();
 printf("test_cpp_diamond_inheritance: %d\n", v4);
 printf("test_cpp_operator_overload: %d\n", 22);
 v5 = test_cpp_template_func();
 printf("test_cpp_template_func: %d\n", v5);
 printf("test_cpp_template_class: %d\n", 16);
 printf("test_cpp_lambda: %d\n", 85);
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
 __asm__ volatile ("pop {r4, pc}");
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x111AC */
void GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 /* std::ios_base::Init::Init(&std::__ioinit); */
 /* _aeabi_atexit(&std::__ioinit, std::ios_base::Init::~Init, &_dso_handle); */
}


/* Function: _ZN4Base12virtual_funcEi @ 0x111DC */
int Base_virtual_func(Base *self, int x)
{
 return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x111E4 */
const char * Base_getName(const Base *self)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x111F0 */
void * Base_D2(Base *self)
{
 return self;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x111F4 */
int Derived_virtual_func(Derived *self, int x)
{
 return x * self->multiplier;
}


/* Function: _ZNK7Derived7getNameEv @ 0x11200 */
const char * Derived_getName(const Derived *self)
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x1120C */
int MultiDerived_funcA(MultiDerived *self)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x11214 */
int MultiDerived_funcB(MultiDerived *self)
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x1121C */
int non_virtual_thunk_to_MultiDerived_funcB(MultiDerived *self)
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x11224 */
int MiddleA_func(MiddleA *self)
{
 return *(int *)((char *)&self->dataA + *((unsigned int *)self->_vtable - 3)) + 150;
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x1123C */
int virtual_thunk_to_MiddleA_func(MiddleA *self)
{
 return *(int *)((char *)&self->dataA
 + *((unsigned int *)self->_vtable - 3)
 + *(*(unsigned int **)((char *)&self->_vtable + *((unsigned int *)self->_vtable - 3)) - 3))
 + 150;
}


/* Function: _ZN7MiddleB4funcEv @ 0x11260 */
int MiddleB_func(MiddleB *self)
{
 return *(int *)((char *)&self->dataB + *((unsigned int *)self->_vtable - 3)) + 200;
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x11278 */
int virtual_thunk_to_MiddleB_func(MiddleB *self)
{
 return *(int *)((char *)&self->dataB
 + *((unsigned int *)self->_vtable - 3)
 + *(*(unsigned int **)((char *)&self->_vtable + *((unsigned int *)self->_vtable - 3)) - 3))
 + 200;
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1129C */
int DiamondDerived_func(DiamondDerived *self)
{
 return *(int *)((char *)&self->dataA + *((unsigned int *)self->middleA._vtable - 3)) + 250;
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x112B4 */
int virtual_thunk_to_DiamondDerived_func(DiamondDerived *self)
{
 return *(int *)((char *)&self->dataA
 + *((unsigned int *)self->middleA._vtable - 3)
 + *(*(unsigned int **)((char *)&self->middleA._vtable + *((unsigned int *)self->middleA._vtable - 3)) - 3))
 + 250;
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x112D8 */
int non_virtual_thunk_to_DiamondDerived_func(DiamondDerived *self)
{
 return *(unsigned int *)((char *)self + *(unsigned int *)(*(&self[-1].dataB + 1) - 12) - 4) + 250;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x112F0 */
int RTTIDerivedA_getType(const RTTIDerivedA *self)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x112F8 */
int RTTIDerivedB_getType(const RTTIDerivedB *self)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x11300 */
void * RTTIDerivedB_D2(RTTIDerivedB *self)
{
 return self;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x11304 */
void * RTTIDerivedA_D2(RTTIDerivedA *self)
{
 return self;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x11308 */
void * DiamondDerived_D1(DiamondDerived *self)
{
 return self;
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x1130C */
void virtual_thunk_to_DiamondDerived_D1(DiamondDerived *self)
{
 ;
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x1131C */
void non_virtual_thunk_to_DiamondDerived_D1(DiamondDerived *self)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x11324 */
void * MultiDerived_D2(MultiDerived *self)
{
 return self;
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x11328 */
void non_virtual_thunk_to_MultiDerived_D1(MultiDerived *self)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x11330 */
void * Derived_D2(Derived *self)
{
 return self;
}


/* Function: _ZN4BaseD0Ev @ 0x11334 */
void * Base_D0(Base *self)
{
 operator delete(self, 4u);
 return self;
}


/* Function: _ZN7DerivedD0Ev @ 0x1134C */
void * Derived_D0(Derived *self)
{
 operator delete(self, 8u);
 return self;
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x11364 */
void * MultiDerived_D0(MultiDerived *self)
{
 operator delete(self, 0x10u);
 return self;
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x1137C */
void non_virtual_thunk_to_MultiDerived_D0(MultiDerived *self)
{
 operator delete(&self[-1].BaseB, 0x10u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x11398 */
void * RTTIDerivedA_D0(RTTIDerivedA *self)
{
 operator delete(self, 4u);
 return self;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x113B0 */
void * RTTIDerivedB_D0(RTTIDerivedB *self)
{
 operator delete(self, 4u);
 return self;
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x113C8 */
void * DiamondDerived_D0(DiamondDerived *self)
{
 operator delete(self, 0x18u);
 return self;
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x113E0 */
void virtual_thunk_to_DiamondDerived_D0(DiamondDerived *self)
{
 operator delete((char *)self + *((unsigned int *)self->middleA._vtable - 4), 0x18u);
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x11404 */
void non_virtual_thunk_to_DiamondDerived_D0(DiamondDerived *self)
{
 operator delete(&self[-1].dataB + 1, 0x18u);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x11420 */
int template_max_int(int a, int b)
{
 if ( a < b )
 return b;
 return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1142C */
double template_max_double(double a, double b)
{
 double v2; // r4

 v2 = a;
 if ( a <= b )
 return b;
 return v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1145C */
void template_swap_int(int *a, int *b)
{
 int v2; // r3

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x11470 */
Container_int * Container_int_Ctor(Container_int *self)
{
 self->size = 0;
 return self;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1147C */
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


/* Function: _ZNK9ContainerIiE3getEi @ 0x11494 */
int Container_int_get(const Container_int *self, int index)
{
 if ( index < 0 )
 return 0;
 if ( self->size > index )
 return self->data[index];
 return 0;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x114C0 */
int Container_int_getSize(const Container_int *self)
{
 return self->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x114C8 */
Container_double * Container_double_Ctor(Container_double *self)
{
 self->size = 0;
 return self;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x114D4 */
void Container_double_push(Container_double *self, int a2, double value)
{
 int size; // r1

 size = self->size;
 if ( size <= 9 )
 {
 self->size = size + 1;
 self->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x114F0 */
double Container_double_get(const Container_double *self, int index)
{
 const double *v3; // t0

 if ( index < 0 )
 return 0.0;
 if ( self->size <= index )
 return 0.0;
 v3 = &self->data[index];
 return *v3;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x11528 */
int Container_double_getSize(const Container_double *self)
{
 return self->size;
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
