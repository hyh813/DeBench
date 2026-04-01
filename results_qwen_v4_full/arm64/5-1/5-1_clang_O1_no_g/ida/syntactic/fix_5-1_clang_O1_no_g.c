/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-1/5-1_clang_O1_no_g
 * Processor: arm
 */

#include <stdint.h>

/* Forward declarations for C++ classes */
struct Base;
struct Derived;
struct MultiDerived;
struct DiamondDerived;
struct MiddleA;
struct MiddleB;
struct BaseA;
struct BaseB;
struct VirtualBase;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct LifecycleClass;

/* C++ class definitions */
struct Base { };
struct Derived { };
struct MultiDerived { };
struct DiamondDerived { };
struct MiddleA { };
struct MiddleB { };
struct BaseA { };
struct BaseB { };
struct VirtualBase { };
struct RTTIBase { };
struct RTTIDerivedA { };
struct RTTIDerivedB { };
struct LifecycleClass { };

/* Typedefs for C++ classes to use without 'struct' keyword */
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct DiamondDerived DiamondDerived;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct BaseA BaseA;
typedef struct BaseB BaseB;
typedef struct VirtualBase VirtualBase;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct LifecycleClass LifecycleClass;

/* C++ operator declarations */
void *cpp_operator_new(unsigned long size);
void *cpp_operator_new_array(unsigned long size);
void cpp_operator_delete(void *ptr);
void cpp_operator_delete_array(void *ptr);

/* LifecycleClass static member */
int LifecycleClass_instance_count = 0;

/* External variables */
long long xmmword_2689 = 0;
char std__ioinit = 0;
long long *off_139A8 = 0;
long long *off_139E8 = 0;
long long *off_13A30 = 0;
long long *off_13A60 = 0;
long long *off_13B38 = 0;
long long *off_13BA0 = 0;
long long *off_13B68 = 0;
long long *off_13D58 = 0;
long long *off_13D80 = 0;
char *asc_25F9 = 0;
char *aCppL301D = 0;
char *aCppL302D = 0;
char *aCppL303D = 0;
char *aCppL304D = 0;
char *aCppL305D = 0;
char *aCppL306D = 0;
char *aCppL307D = 0;
char *aCppL308D = 0;
char *aCppL309D = 0;
long long typeinfo_for_RTTIBase = 0;
long long typeinfo_for_RTTIDerivedA = 0;
long long typeinfo_for_RTTIDerivedB = 0;

/* Function declarations */
long long virtual_func(long long **a1, int a2);
long long funcA(long long **a1);
unsigned long strlen(const char *s);
int strcmp(const char *s1, const char *s2);
void *puts(const char *s);
void *__dynamic_cast(const void *, const void *, const void *, int);
long long virtual_thunk_to_DiamondDerived_func(DiamondDerived *this);
void *__cxa_allocate_exception(unsigned long size);
void __cxa_throw(void *exception, void *type_info, void *dest);
void *memset(void *s, int c, unsigned long n);
int printf(const char *format, ...);
long long non_virtual_thunk_to_MultiDerived_funcB(MultiDerived *this);

/* Function: .init_proc @ 0x1618 */
long long call_weak_fn(void);
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_1630 @ 0x1630 */
void JUMPOUT(int);
void sub_1630()
{
 JUMPOUT(0);
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x17C0 */
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
extern void *__dso_handle;
long long GLOBAL__sub_I_5_1_cpp()
{
 return __cxa_atexit((void (*)(void *))0, &std__ioinit, &__dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x1914 */
long long test_cpp_member_func(void)
{
 unsigned char v1[31]; // [xsp+Ch] [xbp-24h] BYREF
 char v2; // [xsp+2Bh] [xbp-5h]

 v2 = 0;
 *(unsigned long long *)v1 = *(unsigned long long *)"Test";
 *(unsigned long long *)&v1[15] = xmmword_2689;
 return (unsigned int)strlen(v1) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1964 */
long long test_cpp_constructor(void)
{
 unsigned int *v0; // x0
 int v1; // w8
 long long i; // x9
 int v3; // w20

 v0 = (unsigned int *)cpp_operator_new_array(0x14u);
 v1 = 0;
 for ( i = 0; i != 5; ++i )
 {
 v0[i] = v1;
 v1 += 10;
 }
 v3 = v0[2] + ++LifecycleClass_instance_count;
 cpp_operator_delete_array(v0);
 return (unsigned int)(v3 + 1000 * --LifecycleClass_instance_count);
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x19D0 */
long long call_virtual_func(long long ( **a1)(long long **))
{
 return (*a1)((long long **)a1);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x19EC */
long long test_cpp_virtual_func(void)
{
 int v0; // w19
 long long v2; // [xsp+0h] [xbp-10h] BYREF
 int v3; // [xsp+8h] [xbp-8h]
 long long ( **v4)(Base *__hidden, int); // [xsp+28h] [xbp+18h] BYREF

 v4 = (long long ( **)(Base *__hidden, int))off_139A8;
 v3 = 3;
 v0 = virtual_func((long long **)v4, 5);
 return v0 + (unsigned int)virtual_func((long long **)v2, 5) + 21;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1A5C */
long long test_cpp_multiple_inheritance(void)
{
 int v0; // w20
 long long ( **v2)(MultiDerived *__hidden); // [xsp+0h] [xbp-20h] BYREF
 int v3; // [xsp+8h] [xbp-18h]
 unsigned int ( **v4)(MultiDerived *__hidden); // [xsp+10h] [xbp-10h] BYREF
 int v5; // [xsp+18h] [xbp-8h]

 v2 = (long long ( **)(MultiDerived *__hidden))off_13A30;
 v4 = (unsigned int ( **)(MultiDerived *__hidden))off_13A60;
 v3 = 100;
 v5 = 200;
 v0 = funcA((long long **)v2);
 return v0 + (*v4)((MultiDerived *)v4) + 1;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1ACC */
long long test_cpp_diamond_inheritance(void)
{
 int v0; // w0
 long long ( **v2)(DiamondDerived *__hidden); // [xsp+0h] [xbp-30h]
 long long ( **v3)(DiamondDerived *__hidden); // [xsp+10h] [xbp-20h]
 unsigned int ( **v4)(DiamondDerived *__hidden); // [xsp+20h] [xbp-10h] BYREF
 DiamondDerived *v5; // [xsp+28h] [xbp-8h]

 v2 = (long long ( **)(DiamondDerived *__hidden))off_13B38;
 v4 = (unsigned int ( **)(DiamondDerived *__hidden))off_13BA0;
 v3 = (long long ( **)(DiamondDerived *__hidden))off_13B68;
 v5 = (DiamondDerived *)((unsigned long long)v4);
 v0 = virtual_thunk_to_DiamondDerived_func(v5);
 v5 = (DiamondDerived *)((unsigned long long)v5 + 50);
 return (unsigned int)(*v4)(v5) + v0;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1B54 */
long long test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1B5C */
long long test_cpp_template_func(void)
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0x1B64 */
long long test_cpp_template_class(void)
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x1B6C */
long long test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x1B74 */
void test_cpp_exception(void)
{
 unsigned int *exception; // x0

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (void *)0, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1C64 */
long long test_cpp_smart_ptr(void)
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x1C6C */
long long test_cpp_rtti(void)
{
 long long *v0; // x19
 unsigned long long *v1; // x0
 long long v2; // x8
 const void *v3; // x20
 const char *v4; // x21
 int v5; // w22
 const char *v6; // x0
 int v7; // w8
 int v8; // w23
 int v9; // w22
 const char *v10; // x0
 int v11; // w21

 v0 = (long long *)cpp_operator_new(8u);
 *v0 = (long long)off_13D58;
 v1 = (unsigned long long *)cpp_operator_new(8u);
 v2 = *v0;
 *v1 = 0;
 v3 = (const void *)v1;
 *v1 = (unsigned long long)off_13D80;
 v4 = *(const char **)(*(unsigned long long *)(v2 - 8) + 8LL);
 if ( v4 == "12RTTIDerivedA" )
 {
 v5 = 10;
 }
 else if ( *v4 == 42 )
 {
 v5 = 0;
 }
 else if ( !strcmp(v4, "12RTTIDerivedA") )
 {
 v5 = 10;
 }
 else
 {
 v5 = 0;
 }
 v6 = *(const char **)(*(unsigned long long *)(*(unsigned long long *)v3 - 8LL) + 8LL);
 if ( v6 == "12RTTIDerivedB" )
 v7 = 1;
 else
 v7 = *v6 != 42 && strcmp(v6, "12RTTIDerivedB") == 0;
 if ( v7 )
 v8 = v5 | 0x14;
 else
 v8 = v5;
 if ( __dynamic_cast(
 v0,
 (const void *)&typeinfo_for_RTTIBase,
 (const void *)&typeinfo_for_RTTIDerivedA,
 0) )
 {
 v8 += 100;
 }
 if ( __dynamic_cast(
 v3,
 (const void *)&typeinfo_for_RTTIBase,
 (const void *)&typeinfo_for_RTTIDerivedB,
 0) )
 {
 v9 = v8 + 200;
 }
 else
 {
 v9 = v8;
 }
 if ( *v4 == 42 )
 v10 = v4 + 1;
 else
 v10 = v4;
 v11 = strlen(v10);
 (*(void ( **)(long long *))(*v0 + 8))(v0);
 (*(void ( **)(const void *))(*(unsigned long long *)v3 + 8LL))(v3);
 return (unsigned int)(v9 + v11);
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1E04 */
void test_cpp_oo_features(void)
{
 int v0; // w0
 unsigned int *v1; // x0
 int v2; // w8
 long long i; // x9
 int v4; // w20
 long long v5; // x1
 int v6; // w19
 int v7; // w0
 int v8; // w0
 int v9; // w20
 int v10; // w0
 long long ( **v11)(Base *__hidden, int); // [xsp+8h] [xbp-38h] BYREF
 unsigned char v12[40]; // [xsp+10h] [xbp-30h] BYREF
 int v13; // [xsp+38h] [xbp-8h]

 puts(asc_25F9);
 *(unsigned int *)v12 = 10;
 *(unsigned long long *)&v12[4] = *(unsigned long long *)"Test";
 memset(&v12[19], 0, 17);
 v0 = strlen(&v12[4]);
 printf(aCppL301D, (unsigned int)(v0 + 4700));
 v1 = (unsigned int *)cpp_operator_new_array(0x14u);
 v2 = 0;
 for ( i = 0; i != 5; ++i )
 {
 v1[i] = v2;
 v2 += 10;
 }
 v4 = v1[2] + ++LifecycleClass_instance_count;
 cpp_operator_delete_array(v1);
 v5 = (long long)(v4 + 1000 * --LifecycleClass_instance_count);
 printf(aCppL302D, v5);
 *(unsigned int *)&v12[8] = 3;
 v11 = (long long ( **)(Base *__hidden, int))off_139A8;
 *(unsigned long long *)v12 = (unsigned long long)off_139E8;
 v6 = virtual_func((long long **)&v11, 5);
 v7 = virtual_func((long long **)&v11, 5);
 printf(aCppL303D, (unsigned int)(v6 + v7 + 21));
 *(unsigned long long *)v12 = (unsigned long long)off_13A30;
 *(unsigned long long *)&v12[16] = (unsigned long long)off_13A60;
 *(unsigned int *)&v12[8] = 100;
 *(unsigned int *)&v12[24] = 200;
 v8 = non_virtual_thunk_to_MultiDerived_funcB((MultiDerived *)&v12[16]);
 printf(aCppL304D, (unsigned int)(v8 + 31));
 *(unsigned long long *)v12 = (unsigned long long)off_13B38;
 *(unsigned long long *)&v12[32] = (unsigned long long)off_13BA0;
 *(unsigned long long *)&v12[16] = (unsigned long long)off_13B68;
 v13 = 50;
 v9 = virtual_thunk_to_DiamondDerived_func((DiamondDerived *)&v12[32]);
 *(unsigned int *)&v12[*(unsigned long long *)(*(unsigned long long *)v12 + 0xFFFFFFFFFFFFFFE8LL) + 8] = 100;
 v10 = (**(long long ( ***)(DiamondDerived *__hidden))&v12[32])((DiamondDerived *)&v12[32]);
 printf(aCppL305D, (unsigned int)(v10 + v9));
 printf(aCppL306D, 22);
 printf(aCppL307D, 39);
 printf(aCppL308D, 16);
 printf(aCppL309D, 85);
 test_cpp_exception();
}


/* Function: main @ 0x2050 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x2068 */
long long Base_virtual_func(Base *this, int a2)
{
 return (unsigned int)(a2 + 1);
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x2070 */
long long Derived_virtual_func(Derived *this, int a2)
{
 return (unsigned int)(*((unsigned int *)this + 2) * a2);
}


/* Function: _ZN4BaseD2Ev @ 0x207C */
void Base_D2(Base *this)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x2080 */
void MultiDerived_D2(MultiDerived *this)
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x2084 */
void DiamondDerived_D1(DiamondDerived *this)
{
 ;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x2088 */
long long template_max_int(long long result, int a2)
{
 if ( (int)result <= a2 )
 return (unsigned int)a2;
 else
 return (unsigned int)result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x2094 */
double template_max_double(double result, double a2)
{
 if ( result <= a2 )
 return a2;
 return result;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x20A0 */
int * template_swap_int(int *result, int *a2)
{
 int v2; // w9

 v2 = *result;
 *result = *a2;
 *a2 = v2;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x20B4 */
long long Container_int_Constructor(long long result)
{
 *(unsigned int *)(result + 40) = 0;
 return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x20BC */
long long Container_int_push(long long result, int a2)
{
 long long v2; // x8

 v2 = *(int *)(result + 40);
 if ( (int)v2 <= 9 )
 {
 *(unsigned int *)(result + 40) = v2 + 1;
 *(unsigned int *)(result + 4 * v2) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x20D8 */
long long Container_int_get(long long a1, int a2)
{
 long long result; // x0

 result = 0;
 if ( (a2 & 0x80000000) == 0 && *(unsigned int *)(a1 + 40) > a2 )
 return *(unsigned int *)(a1 + 4LL * a2);
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x20F8 */
long long Container_int_getSize(long long a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x2100 */
long long Container_double_Constructor(long long result)
{
 *(unsigned int *)(result + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x2108 */
long long Container_double_push(long long result, double a2)
{
 long long v2; // x8

 v2 = *(int *)(result + 80);
 if ( (int)v2 <= 9 )
 {
 *(double *)(result + 8 * v2) = a2;
 *(unsigned int *)(result + 80) = v2 + 1;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x2124 */
double Container_double_get(long long a1, int a2)
{
 double result; // d0

 result = 0.0;
 if ( (a2 & 0x80000000) == 0 && *(unsigned int *)(a1 + 80) > a2 )
 return *(double *)(a1 + 8LL * a2);
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x2140 */
long long Container_double_getSize(long long a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: _ZNK4Base7getNameEv @ 0x2148 */
const char * Base_getName(Base *this)
{
 return "Base";
}


/* Function: _ZN4BaseD0Ev @ 0x2154 */
void Base_D0(Base *this)
{
 cpp_operator_delete(this);
}


/* Function: _ZNK7Derived7getNameEv @ 0x2168 */
const char * Derived_getName(Derived *this)
{
 return "Derived";
}


/* Function: _ZN7DerivedD0Ev @ 0x2174 */
void Derived_D0(Derived *this)
{
 cpp_operator_delete(this);
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x2188 */
long long MultiDerived_funcA(MultiDerived *this)
{
 return 30;
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x2190 */
void MultiDerived_D0(MultiDerived *this)
{
 cpp_operator_delete(this);
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x21A4 */
long long MultiDerived_funcB(MultiDerived *this)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x21AC */
long long non_virtual_thunk_to_MultiDerived_funcB(MultiDerived *this)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x21B4 */
void non_virtual_thunk_to_MultiDerived_D1(MultiDerived *this)
{
 ;
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x21B8 */
void non_virtual_thunk_to_MultiDerived_D0(MultiDerived *this)
{
 cpp_operator_delete((char *)this - 16);
}


/* Function: _ZN5BaseA5funcAEv @ 0x21D0 */
long long BaseA_funcA(BaseA *this)
{
 return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x21D8 */
void BaseA_D2(BaseA *this)
{
 ;
}


/* Function: _ZN5BaseAD0Ev @ 0x21DC */
void BaseA_D0(BaseA *this)
{
 cpp_operator_delete(this);
}


/* Function: _ZN5BaseB5funcBEv @ 0x21F0 */
long long BaseB_funcB(BaseB *this)
{
 return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x21F8 */
void BaseB_D2(BaseB *this)
{
 ;
}


/* Function: _ZN5BaseBD0Ev @ 0x21FC */
void BaseB_D0(BaseB *this)
{
 cpp_operator_delete(this);
}


/* Function: _ZN7MiddleA4funcEv @ 0x2210 */
long long MiddleA_func(MiddleA *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 150);
}


/* Function: _ZN7MiddleAD1Ev @ 0x2228 */
void MiddleA_D1(MiddleA *this)
{
 ;
}


/* Function: _ZN7MiddleAD0Ev @ 0x222C */
void MiddleA_D0(MiddleA *this)
{
 cpp_operator_delete(this);
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x2240 */
long long virtual_thunk_to_MiddleA_func(MiddleA *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this
 + *(unsigned long long *)(*(unsigned long long *)this - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) - 24LL)
 + 8)
 + 150);
}


/* Function: _ZTv0_n32_N7MiddleAD1Ev @ 0x2264 */
void virtual_thunk_to_MiddleA_D1(MiddleA *this)
{
 ;
}


/* Function: _ZTv0_n32_N7MiddleAD0Ev @ 0x2268 */
void virtual_thunk_to_MiddleA_D0(MiddleA *this)
{
 cpp_operator_delete((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL));
}


/* Function: _ZN7MiddleB4funcEv @ 0x2288 */
long long MiddleB_func(MiddleB *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 200);
}


/* Function: _ZN7MiddleBD1Ev @ 0x22A0 */
void MiddleB_D1(MiddleB *this)
{
 ;
}


/* Function: _ZN7MiddleBD0Ev @ 0x22A4 */
void MiddleB_D0(MiddleB *this)
{
 cpp_operator_delete(this);
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x22B8 */
long long virtual_thunk_to_MiddleB_func(MiddleB *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this
 + *(unsigned long long *)(*(unsigned long long *)this - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) - 24LL)
 + 8)
 + 200);
}


/* Function: _ZTv0_n32_N7MiddleBD1Ev @ 0x22DC */
void virtual_thunk_to_MiddleB_D1(MiddleB *this)
{
 ;
}


/* Function: _ZTv0_n32_N7MiddleBD0Ev @ 0x22E0 */
void virtual_thunk_to_MiddleB_D0(MiddleB *this)
{
 cpp_operator_delete((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x2300 */
long long DiamondDerived_func(DiamondDerived *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 250);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x2318 */
void DiamondDerived_D0(DiamondDerived *this)
{
 cpp_operator_delete(this);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x232C */
long long non_virtual_thunk_to_DiamondDerived_func(DiamondDerived *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*((unsigned long long *)this - 2) - 24LL) - 8) + 250);
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x2344 */
void non_virtual_thunk_to_DiamondDerived_D1(DiamondDerived *this)
{
 ;
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x2348 */
void non_virtual_thunk_to_DiamondDerived_D0(DiamondDerived *this)
{
 cpp_operator_delete((char *)this - 16);
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x2360 */
long long virtual_thunk_to_DiamondDerived_func(DiamondDerived *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this
 + *(unsigned long long *)(*(unsigned long long *)this - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) - 24LL)
 + 8)
 + 250);
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x2384 */
void virtual_thunk_to_DiamondDerived_D1(DiamondDerived *this)
{
 ;
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x2388 */
void virtual_thunk_to_DiamondDerived_D0(DiamondDerived *this)
{
 cpp_operator_delete((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL));
}


/* Function: _ZN11VirtualBase4funcEv @ 0x23A8 */
long long VirtualBase_func(VirtualBase *this)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x23B0 */
void VirtualBase_D2(VirtualBase *this)
{
 ;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x23B4 */
void VirtualBase_D0(VirtualBase *this)
{
 cpp_operator_delete(this);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x23C8 */
void RTTIDerivedA_D0(RTTIDerivedA *this)
{
 cpp_operator_delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x23DC */
long long RTTIDerivedA_getType(RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x23E4 */
void RTTIBase_D2(RTTIBase *this)
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x23E8 */
void RTTIDerivedB_D0(RTTIDerivedB *this)
{
 cpp_operator_delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x23FC */
long long RTTIDerivedB_getType(RTTIDerivedB *this)
{
 return 2;
}


/* Function: .term_proc @ 0x2404 */
void term_proc()
{
 ;
}


/* FAILED to decompile: _Znam @ 0x14140 */

/* FAILED to decompile: puts @ 0x14150 */

/* FAILED to decompile: strlen @ 0x14158 */

/* FAILED to decompile: __cxa_begin_catch @ 0x14160 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x14168 */

/* FAILED to decompile: __cxa_finalize @ 0x14170 */

/* FAILED to decompile: __libc_start_main @ 0x14180 */

/* FAILED to decompile: _ZdlPv @ 0x14188 */

/* FAILED to decompile: _Znwm @ 0x14190 */

/* FAILED to decompile: __dynamic_cast @ 0x14198 */

/* FAILED to decompile: __cxa_atexit @ 0x141A0 */

/* FAILED to decompile: _ZdaPv @ 0x141A8 */

/* FAILED to decompile: strcmp @ 0x141B8 */

/* FAILED to decompile: __cxa_rethrow @ 0x141C0 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x141C8 */

/* FAILED to decompile: abort @ 0x141D0 */

/* FAILED to decompile: __cxa_end_catch @ 0x141D8 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x141E0 */

/* FAILED to decompile: __cxa_throw @ 0x141E8 */

/* FAILED to decompile: _Unwind_Resume @ 0x141F8 */

/* FAILED to decompile: printf @ 0x14200 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x14208 */

/* FAILED to decompile: __gmon_start__ @ 0x14218 */

/* Total functions decompiled: 85, failed: 23 */
