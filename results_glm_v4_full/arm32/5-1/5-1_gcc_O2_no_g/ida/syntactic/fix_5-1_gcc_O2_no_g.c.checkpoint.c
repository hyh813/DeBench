#include <string.h>
#include <stdio.h>
#include <new>

/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;

/* ssize_t is already defined by system headers */
typedef unsigned long uintptr_t;
typedef long intptr_t;
/* ptrdiff_t is already defined by system headers (string.h) */
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/5-1/5-1_gcc_O2_no_g
 * Processor: arm
 */

/* Forward declarations for C++ types */
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct RTTIBase RTTIBase;
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;
typedef struct type_info type_info;
typedef struct __class_type_info __class_type_info;
typedef struct ios_base ios_base;

/* type_info structure for RTTI */
struct type_info {
    const char *vptr;
    const char *name;
};

/* __class_type_info structure for dynamic_cast */
struct __class_type_info {
    const char *vptr;
    const char *name;
};

/* RTTI type info objects */
extern struct type_info typeinfo_for_int;
extern struct type_info typeinfo_for_RTTIDerivedA;
extern struct type_info typeinfo_for_RTTIDerivedB;
extern struct type_info typeinfo_for_RTIBase;





/* RTTI helper function */
extern int std_type_info_operator_equals(const struct type_info *a, const struct type_info *b);

/* Dynamic cast function */
extern void *_dynamic_cast(void *src, const struct __class_type_info *src_type, const struct __class_type_info *dst_type, int offset);

/* Template function forward declarations */
extern int template_max_int(int result, int a2);
extern long long template_max_double(double a1, double a2);
extern int * template_swap_int(int *result, int *a2);

/* LifecycleClass static member */
extern int LifecycleClass_instance_count;

/* C++ exception handling functions */
extern void *__cxa_allocate_exception(unsigned int size);
extern void __cxa_throw(void *exception, struct type_info *type_info, void (*dest)(void *));

/* Forward declarations for functions defined later in this file */
extern void test_cpp_oo_features(void);

/* I/O initialization functions */
extern void std_ios_base_Init_Constructor(struct std_ios_base_Init *_this);
extern void std_ios_base_Init_Destructor(struct std_ios_base_Init *_this);

/* AEABI atexit function */
extern int __aeabi_atexit(void *obj, void (*dtor)(void *), void *dso_handle);

/* Printf_chk function for fortified printf */
extern int _printf_chk(int flag, const char *format, ...);

/* SHIDWORD macro - extract high 32 bits of a 64-bit value */
#define SHIDWORD(x) ((int)((uint64_t)(x) >> 32))

struct std_ios_base_Init {
  int dummy;
};



/* Weak function stub */
extern int call_weak_fn(void);

/* JUMPOUT macro for control flow */
#define JUMPOUT(x) return







/* Function: _Z18test_cpp_exceptionv @ 0x10A60 */
void test_cpp_exception(void)
{
 unsigned int *exception; // r0

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&typeinfo_for_int, 0);
}


/* Function: main @ 0x10B18 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}






/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x10C50 */
int test_cpp_member_func(void)
{
 char dest[32]; // [sp+4h] [bp-2Ch] BYREF

 strncpy(dest, "Test", 0x1Fu);
 dest[31] = 0;
 return (int)(strlen(dest) + 4700);
}


/* Function: _Z20test_cpp_constructorv @ 0x10CBC */
int test_cpp_constructor(void)
{
 return LifecycleClass_instance_count + 21 + 1000 * LifecycleClass_instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x10CDC */
int call_virtual_func(unsigned int *a1)
{
 return (**(int (***)(unsigned int *))a1)(a1);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x10CE8 */
int test_cpp_virtual_func(void)
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x10CF0 */
int test_cpp_multiple_inheritance(void)
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x10CF8 */
int test_cpp_diamond_inheritance(void)
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x10D04 */
int test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x10D0C */
int test_cpp_template_func(int a1, int a2, int a3)
{
 int v3; // r4
 double v4; // r6
 int v6; // [sp+4h] [bp-1Ch] BYREF
 int v7; // [sp+8h] [bp-18h] BYREF

 v3 = template_max_int(3, 7);
 v4 = template_max_double(0, 1074003968);
 v6 = 10;
 v7 = 20;
 template_swap_int(&v6, &v7);
 return v3 + (int)v4 + v6 + v7;
}


/* Function: _Z23test_cpp_template_classv @ 0x10DB4 */
int test_cpp_template_class(void)
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x10DBC */
int test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x10DC4 */
int test_cpp_smart_ptr(void)
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x10DD0 */
size_t test_cpp_rtti(void)
{
 return 0;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x10EC8 */
void test_cpp_oo_features(void)
{
 ;
}


/* Function: _ZN4Base12virtual_funcEi @ 0x11048 */
int Base_virtual_func(Base *_this, int a2)
{
 return a2 + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x11050 */
const char * Base_getName(Base *_this)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x1105C */
void Base_destructor(Base *_this)
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x11060 */
int Derived_virtual_func(Derived *_this, int a2)
{
 return a2 * *((unsigned int *)_this + 1);
}


/* Function: _ZNK7Derived7getNameEv @ 0x1106C */
const char * Derived_getName(Derived *_this)
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x11078 */
int MultiDerived_funcA(MultiDerived *_this)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x11080 */
int MultiDerived_funcB(MultiDerived *_this)
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x11088 */
int non_virtual_thunk_to_MultiDerived_funcB(MultiDerived *_this)
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x11090 */
int MiddleA_func(MiddleA *_this)
{
 return *(unsigned int *)((char *)_this + *(unsigned int *)(*(unsigned int *)_this - 12) + 4) + 150;
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x110A8 */
int virtual_thunk_to_MiddleA_func(MiddleA *_this)
{
 return *(unsigned int *)((char *)_this
 + *(unsigned int *)(*(unsigned int *)_this - 12)
 + *(unsigned int *)(*(unsigned int *)((char *)_this + *(unsigned int *)(*(unsigned int *)_this - 12)) - 12)
 + 4)
 + 150;
}


/* Function: _ZN7MiddleB4funcEv @ 0x110CC */
int MiddleB_func(MiddleB *_this)
{
 return *(unsigned int *)((char *)_this + *(unsigned int *)(*(unsigned int *)_this - 12) + 4) + 200;
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x110E4 */
int virtual_thunk_to_MiddleB_func(MiddleB *_this)
{
 return *(unsigned int *)((char *)_this
 + *(unsigned int *)(*(unsigned int *)_this - 12)
 + *(unsigned int *)(*(unsigned int *)((char *)_this + *(unsigned int *)(*(unsigned int *)_this - 12)) - 12)
 + 4)
 + 200;
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x11108 */
int DiamondDerived_func(DiamondDerived *_this)
{
 return *(unsigned int *)((char *)_this + *(unsigned int *)(*(unsigned int *)_this - 12) + 4) + 250;
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x11120 */
int virtual_thunk_to_DiamondDerived_func(DiamondDerived *_this)
{
 return *(unsigned int *)((char *)_this
 + *(unsigned int *)(*(unsigned int *)_this - 12)
 + *(unsigned int *)(*(unsigned int *)((char *)_this + *(unsigned int *)(*(unsigned int *)_this - 12)) - 12)
 + 4)
 + 250;
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x11144 */
int non_virtual_thunk_to_DiamondDerived_func(DiamondDerived *_this)
{
 return *(unsigned int *)((char *)_this + *(unsigned int *)(*((unsigned int *)_this - 2) - 12) - 4) + 250;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1115C */
int RTTIDerivedA_getType(RTTIDerivedA *_this)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x11164 */
int RTTIDerivedB_getType(RTTIDerivedB *_this)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x1116C */
void RTTIDerivedB_destructor(RTTIDerivedB *_this)
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x11170 */
void RTTIDerivedA_destructor(RTTIDerivedA *_this)
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x11174 */
void DiamondDerived_destructor(DiamondDerived *_this)
{
 ;
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x11178 */
void virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *_this)
{
 ;
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x11188 */
void non_virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *_this)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x11190 */
void MultiDerived_destructor(MultiDerived *_this)
{
 ;
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x11194 */
void non_virtual_thunk_to_MultiDerived_destructor(MultiDerived *_this)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x1119C */
void Derived_destructor(Derived *_this)
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x111A0 */
void Base_deleting(Base *_this)
{
 operator delete(_this, 4u);
}


/* Function: _ZN7DerivedD0Ev @ 0x111B8 */
void Derived_deleting(Derived *_this)
{
 operator delete(_this, 8u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x111D0 */
void MultiDerived_deleting(MultiDerived *_this)
{
 operator delete(_this, 0x10u);
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x111E8 */
void non_virtual_thunk_to_MultiDerived_deleting(MultiDerived *_this)
{
 operator delete((char *)_this - 8, 0x10u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x11204 */
void RTTIDerivedB_deleting(RTTIDerivedB *_this)
{
 operator delete(_this, 4u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1121C */
void RTTIDerivedA_deleting(RTTIDerivedA *_this)
{
 operator delete(_this, 4u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x11234 */
void DiamondDerived_deleting(DiamondDerived *_this)
{
 operator delete(_this, 0x18u);
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x1124C */
void virtual_thunk_to_DiamondDerived_deleting(DiamondDerived *_this)
{
 operator delete((char *)_this + *(unsigned int *)(*(unsigned int *)_this - 16), 0x18u);
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x11270 */
void non_virtual_thunk_to_DiamondDerived_deleting2(DiamondDerived *_this)
{
 operator delete((char *)_this - 8, 0x18u);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1128C */
int template_max_int(int result, int a2)
{
 if ( result < a2 )
 return a2;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x11298 */
long long template_max_double(double a1, double a2)
{
 double v2; // r4

 v2 = a1;
 if ( a1 <= a2 )
 v2 = a2;
 return *(unsigned long long *)&v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x112C8 */
int * template_swap_int(int *result, int *a2)
{
 int v2; // r3

 v2 = *result;
 *result = *a2;
 *a2 = v2;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x112DC */
int Container_int_Constructor(int *result)
{
 *(unsigned int *)((char *)result + 40) = 0;
 return (int)result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x112E8 */
int *Container_int_push(int *result, int a2)
{
 int v2; // r3

 v2 = *(unsigned int *)((char *)result + 40);
 if ( v2 <= 9 )
 {
 *(unsigned int *)((char *)result + 40) = v2 + 1;
 *(unsigned int *)((char *)result + 4 * v2) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x11300 */
int Container_int_get(int *a1, int a2)
{
 if ( a2 >= 0 && *(unsigned int *)((char *)a1 + 40) > a2 )
 return *(unsigned int *)((char *)a1 + 4 * a2);
 else
 return 0;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x11324 */
int Container_int_getSize(int *a1)
{
 return *(unsigned int *)((char *)a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1132C */
int Container_double_Constructor(int *result)
{
 *(unsigned int *)((char *)result + 80) = 0;
 return (int)result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x11338 */
int *Container_double_push(int *result, int a2, int a3, int a4)
{
 int v5; // r3
 int v7; // r2
 unsigned int *v8; // r3

 v5 = *(unsigned int *)((char *)result + 80);
 if ( v5 <= 9 )
 {
 v7 = v5 + 1;
 v8 = (unsigned int *)((char *)result + 8 * v5);
 *(unsigned int *)((char *)result + 80) = v7;
 *v8 = a3;
 v8[1] = a4;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x11368 */
long long Container_double_get(int *a1, int a2)
{
 if ( a2 >= 0 && a2 < *(unsigned int *)((char *)a1 + 80) )
 return *(unsigned long long *)((char *)a1 + 8 * a2);
 else
 return 0;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x11394 */
int Container_double_getSize(int *a1)
{
 return *(unsigned int *)((char *)a1 + 80);
}


/* Function: .term_proc @ 0x1139C */
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
