/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-1/5-1_clang_O1_no_g
 * Processor: arm
 */

#include <stdint.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/* Forward class declarations */
struct Base;
struct Derived;
struct MultiDerived;
struct DiamondDerived;
struct BaseA;
struct BaseB;
struct MiddleA;
struct MiddleB;
struct VirtualBase;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct Container;
struct LifecycleClass;

/* Define std namespace as a struct for C compatibility */
struct std_type_info {
    const char* name;
};

/* Define std as empty namespace placeholder */
struct std {
};

/* __class_type_info structure definition for RTTI support */
struct __class_type_info {
    const char* name;  /* Type name */
    void* vtable;      /* Virtual table pointer */
};

/* Global variables */
extern unsigned long long xmmword_2689;
extern void* _dso_handle;
extern unsigned char off_139A8[8];
extern unsigned char off_139E8[8];
extern unsigned char off_13A30[8];
extern unsigned char off_13A60[8];
extern unsigned char off_13B38[8];
extern unsigned char off_13B68[8];
extern unsigned char off_13BA0[8];
extern unsigned char off_13D58[8];
extern unsigned char off_13D80[8];
extern const char *asc_25F9;
extern const char *aCppL301D;
extern const char *aCppL302D;
extern const char *aCppL303D;
extern const char *aCppL304D;
extern const char *aCppL305D;
extern const char *aCppL306D;
extern const char *aCppL307D;
extern const char *aCppL308D;
extern const char *aCppL309D;

/* Operator new/delete declarations (renamed for C compatibility) */
extern void* operator_new(size_t size);
extern void operator_delete(void* ptr);
extern void* operator_new_array(size_t size);
extern void operator_delete_array(void* ptr);

/* Implement operator new/delete */
void* operator_new(size_t size) {
    return malloc(size);
}

void operator_delete(void* ptr) {
    free(ptr);
}

void* operator_new_array(size_t size) {
    return malloc(size);
}

void operator_delete_array(void* ptr) {
    free(ptr);
}

/* C++ runtime declarations */
extern int __cxa_atexit(void (*func)(void*), void* arg, void* dso_handle);
extern void* __cxa_allocate_exception(size_t size);
extern void __cxa_throw(void* exception, const void* tinfo, void (*dest)(void*));
extern const struct std_type_info* _ZTIi;  // typeinfo for int
extern const struct std_type_info* _ZTI4Base;  // typeinfo for Base
extern const struct std_type_info* _ZTI7Derived;  // typeinfo for Derived
extern const struct std_type_info* _ZTI12RTTIDerivedA;  // typeinfo for RTTIDerivedA
extern const struct std_type_info* _ZTI12RTTIDerivedB;  // typeinfo for RTTIDerivedB
extern const struct std_type_info* _ZTI8RTTIBase;  // typeinfo for RTTIBase

/* C++ runtime declarations - ios_base is a C++ class */
extern void* _ZNSt8ios_base4InitC1Ev(void* this);
extern void* _ZNSt8ios_base4InitD1Ev(void* this);
extern unsigned char __ioinit[8];

/* Type info for 'int' */
struct type_info_for_int {
    const char* name;
};

/* Type info structures */
struct type_info_for_Base {
    void* vtable;
    const char* name;
};

struct type_info_for_Derived {
    void* vtable;
    const char* name;
};

struct type_info_for_RTTIDerivedA {
    void* vtable;
    const char* name;
};

struct type_info_for_RTTIDerivedB {
    void* vtable;
    const char* name;
};

struct type_info_for_RTTIBase {
    void* vtable;
    const char* name;
};

/* LifecycleClass with static member */
struct LifecycleClass {
    int instance_count;
};
extern int LifecycleClass_instance_count;

/* Type info instances (global objects) */
extern struct type_info_for_int typeinfo_for_int;
extern struct type_info_for_Base typeinfo_for_Base;
extern struct type_info_for_Derived typeinfo_for_Derived;
extern struct type_info_for_RTTIBase typeinfo_for_RTTIBase;
extern struct type_info_for_RTTIDerivedA typeinfo_for_RTTIDerivedA;
extern struct type_info_for_RTTIDerivedB typeinfo_for_RTTIDerivedB;

/* Base class */
struct Base {
    long long (*virtual_func)(struct Base* this, int a2);
    const char* (*getName)(struct Base* this);
    void (*destructor)(struct Base* this);
};

/* Derived class */
struct Derived {
    long long (*virtual_func)(struct Derived* this, int a2);
    const char* (*getName)(struct Derived* this);
    void (*destructor)(struct Derived* this);
    unsigned int padding[2];
};

/* MultiDerived class */
struct MultiDerived {
    long long (*funcA)(struct MultiDerived* this);
    long long (*funcB)(struct MultiDerived* this);
    void (*destructor)(struct MultiDerived* this);
};

/* Diamond inheritance classes */
struct BaseA {
    long long (*funcA)(struct BaseA* this);
    void (*destructor)(struct BaseA* this);
};

struct BaseB {
    long long (*funcB)(struct BaseB* this);
    void (*destructor)(struct BaseB* this);
};

struct MiddleA {
    long long (*func)(struct MiddleA* this);
    void (*destructor)(struct MiddleA* this);
};

struct MiddleB {
    long long (*func)(struct MiddleB* this);
    void (*destructor)(struct MiddleB* this);
};

struct DiamondDerived {
    long long (*func)(struct DiamondDerived* this);
    void (*destructor)(struct DiamondDerived* this);
};

/* VirtualBase class */
struct VirtualBase {
    long long (*func)(struct VirtualBase* this);
    void (*destructor)(struct VirtualBase* this);
};

/* RTTI classes */
struct RTTIBase {
    void (*destructor)(struct RTTIBase* this);
};

struct RTTIDerivedA {
    long long (*getType)(struct RTTIDerivedA* this);
    void (*destructor)(struct RTTIDerivedA* this);
};

struct RTTIDerivedB {
    long long (*getType)(struct RTTIDerivedB* this);
    void (*destructor)(struct RTTIDerivedB* this);
};

/* Container template */
struct Container {
    /* C++ template removed for C compatibility */
    long long (*constructor)(void* this);
    long long (*push)(void* this, int a2);
    long long (*get)(void* this, int a2);
    long long (*getSize)(void* this);
};

/* Dynamic cast */
extern void* __dynamic_cast(void* src_ptr, const struct __class_type_info* src_type,
                              const struct __class_type_info* dst_type, int src2dst_offset);

/* Weak function declaration */
extern long long call_weak_fn(void);

/* Thunk function declarations (renamed to valid C++) */
long long _non_virtual_thunk_to_MultiDerived_funcB(struct MultiDerived* this);
void _non_virtual_thunk_to_MultiDerived_D1Ev(struct MultiDerived* this);
void _non_virtual_thunk_to_MultiDerived_D0Ev(struct MultiDerived* this);
long long _virtual_thunk_to_MiddleA_func(struct MiddleA* this);
void _virtual_thunk_to_MiddleA_D1Ev(struct MiddleA* this);
void _virtual_thunk_to_MiddleA_D0Ev(struct MiddleA* this);
long long _virtual_thunk_to_MiddleB_func(struct MiddleB* this);
void _virtual_thunk_to_MiddleB_D1Ev(struct MiddleB* this);
void _virtual_thunk_to_MiddleB_D0Ev(struct MiddleB* this);
long long _non_virtual_thunk_to_DiamondDerived_func(struct DiamondDerived* this);
void _non_virtual_thunk_to_DiamondDerived_D1Ev(struct DiamondDerived* this);
void _non_virtual_thunk_to_DiamondDerived_D0Ev(struct DiamondDerived* this);
long long _virtual_thunk_to_DiamondDerived_func(struct DiamondDerived* this);
void _virtual_thunk_to_DiamondDerived_D1Ev(struct DiamondDerived* this);
void _virtual_thunk_to_DiamondDerived_D0Ev(struct DiamondDerived* this);

/* Additional function declarations */
long long _ZN4Base12virtual_funcEi(struct Base *this, int a2);
long long _ZN7Derived12virtual_funcEi(struct Derived *this, int a2);
long long _ZN12MultiDerived5funcAEv(struct MultiDerived *this);
long long _ZN12MultiDerived5funcBEv(struct MultiDerived *this);
long long _ZN14DiamondDerived4funcEv(struct DiamondDerived *this);

/* Function: .init_proc @ 0x1618 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_1630 @ 0x1630 */
void sub_1630()
{
 return;
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x17C0 */
long long GLOBAL__sub_I_5_1_cpp()
{
 _ZNSt8ios_base4InitC1Ev(&__ioinit);
 return __cxa_atexit((void (*)(void *))_ZNSt8ios_base4InitD1Ev, &__ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* Weak function stub */
long long call_weak_fn(void) {
    return 0;
}




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

 v0 = (unsigned int *)operator_new_array(0x14u);
 v1 = 0;
 for ( i = 0; i != 5; ++i )
 {
 v0[i] = v1;
 v1 += 10;
 }
 v3 = v0[2] + ++LifecycleClass_instance_count;
 operator_delete_array(v0);
 return (unsigned int)(v3 + 1000 * --LifecycleClass_instance_count);
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x19D0 */
long long call_virtual_func(struct Base* a1, int a2)
{
 return a1->virtual_func(a1, a2);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x19EC */
long long test_cpp_virtual_func(void)
{
 int v0; // w19
 long long v2; // [xsp+0h] [xbp-10h] BYREF
 int v3; // [xsp+8h] [xbp-8h]
 struct Base* v4; // [xsp+28h] [xbp+18h] BYREF

 v4 = (struct Base*)&off_139A8;
 v3 = 3;
 _ZN4Base12virtual_funcEi(v4, 5);
 v0 = _ZN4Base12virtual_funcEi(v4, 5);
 return v0 + (unsigned int)_ZN7Derived12virtual_funcEi((struct Derived *)&v2, 5) + 21;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1A5C */
long long test_cpp_multiple_inheritance(void)
{
 int v0; // w20
 struct MultiDerived* v2; // [xsp+0h] [xbp-20h] BYREF
 int v3; // [xsp+8h] [xbp-18h]
 struct MultiDerived* v4; // [xsp+10h] [xbp-10h] BYREF
 int v5; // [xsp+18h] [xbp-8h]

 v2 = (struct MultiDerived*)&off_13A30;
 v4 = (struct MultiDerived*)&off_13A60;
 v3 = 100;
 v5 = 200;
 v0 = _ZN12MultiDerived5funcAEv((struct MultiDerived *)&v2);
 return v0 + _ZN12MultiDerived5funcBEv((struct MultiDerived *)&v4) + 1;
}


/* Diamond inheritance classes */
long long test_cpp_diamond_inheritance(void)
{
 int v0; // w0
 struct DiamondDerived* v2; // [xsp+0h] [xbp-30h]
 struct DiamondDerived* v3; // [xsp+10h] [xbp-20h]
 struct DiamondDerived* v4; // [xsp+20h] [xbp-10h] BYREF
 int v5; // [xsp+28h] [xbp-8h]

 v2 = (struct DiamondDerived*)&off_13B38;
 v4 = (struct DiamondDerived*)&off_13BA0;
 v3 = (struct DiamondDerived*)&off_13B68;
 v5 = 50;
 v0 = _virtual_thunk_to_DiamondDerived_func((struct DiamondDerived *)&v4);
 v5 = 100;
 return _ZN14DiamondDerived4funcEv((struct DiamondDerived *)&v4) + v0;
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

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct std_type_info *)&typeinfo_for_int, 0);
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

 v0 = (long long *)operator_new(8u);
 *v0 = (long long)off_13D58;
 v1 = (unsigned long long *)operator_new(8u);
v2 = *v0;
*v1 = 0;
v3 = v1;
*v1 = (unsigned long long)off_13D80;
v4 = *(const char**)((uintptr_t)(*(const void**)(v2 - 8)) + sizeof(void*));
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
 v6 = *(const char**)(*(const void**)(*(unsigned long long *)v3 - 8LL) + sizeof(void*));
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
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedA,
 0) )
 {
 v8 += 100;
 }
 if ( __dynamic_cast(
 v3,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedB,
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
 operator_delete(v0);
 operator_delete(v3);
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
 struct Base* v11; // [xsp+8h] [xbp-38h] BYREF
 unsigned char v12[40]; // [xsp+10h] [xbp-30h] BYREF
 int v13; // [xsp+38h] [xbp-8h]

 puts(asc_25F9);
 *(unsigned int *)v12 = 10;
 *(unsigned long long *)&v12[4] = *(unsigned long long *)"Test";
 memset(&v12[19], 0, 17);
 v0 = strlen(&v12[4]);
 printf(aCppL301D, (unsigned int)(v0 + 4700));
 v1 = (unsigned int *)operator_new_array(0x14u);
 v2 = 0;
 for ( i = 0; i != 5; ++i )
 {
 v1[i] = v2;
 v2 += 10;
 }
 v4 = v1[2] + ++LifecycleClass_instance_count;
 operator_delete_array(v1);
 v4 = v1[2] + ++LifecycleClass_instance_count;
 operator_delete_array(v1);
 v5 = (unsigned int)(v4 + 1000 * --LifecycleClass_instance_count);
 printf(aCppL302D, v5);
 *(unsigned int *)&v12[8] = 3;
 v11 = (struct Base*)&off_139A8;
 *(unsigned long long *)v12 = (unsigned long long)&off_139E8;
 v6 = _ZN4Base12virtual_funcEi(v11, 5);
 v7 = (*(struct Base *)v12).virtual_func((struct Base *)v12, 5);
 printf(aCppL303D, (unsigned int)(v6 + v7 + 21));
 *(unsigned long long *)v12 = (unsigned long long)&off_13A30;
 *(unsigned long long *)&v12[16] = (unsigned long long)&off_13A60;
 *(unsigned int *)&v12[8] = 100;
 *(unsigned int *)&v12[24] = 200;
 v8 = _non_virtual_thunk_to_MultiDerived_funcB((struct MultiDerived *)&v12[16]);
 printf(aCppL304D, (unsigned int)(v8 + 31));
 *(unsigned long long *)v12 = (unsigned long long)&off_13B38;
 *(unsigned long long *)&v12[32] = (unsigned long long)&off_13BA0;
 *(unsigned long long *)&v12[16] = (unsigned long long)&off_13B68;
 v13 = 50;
 v9 = _virtual_thunk_to_DiamondDerived_func((struct DiamondDerived *)&v12[32]);
 *(unsigned int *)&v12[*(unsigned long long *)(*(unsigned long long *)v12 + 0xFFFFFFFFFFFFFFE8LL) + 8] = 100;
 v10 = _ZN14DiamondDerived4funcEv((struct DiamondDerived *)&v12[32]);
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
long long _ZN4Base12virtual_funcEi(struct Base *this, int a2)
{
 return (unsigned int)(a2 + 1);
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x2070 */
long long _ZN7Derived12virtual_funcEi(struct Derived *this, int a2)
{
 return (unsigned int)(*((unsigned int *)this + 2) * a2);
}


/* Function: _ZN4BaseD2Ev @ 0x207C */
void _ZN4BaseD2Ev(struct Base *this)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x2080 */
void _ZN12MultiDerivedD2Ev(struct MultiDerived *this)
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x2084 */
void _ZN14DiamondDerivedD1Ev(struct DiamondDerived *this)
{
 ;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x2088 */
long long _Z12template_maxIiET_S0_S0_(long long result, int a2)
{
 if ( (int)result <= a2 )
 return (unsigned int)a2;
 else
 return (unsigned int)result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x2094 */
double _Z12template_maxIdET_S0_S0_(double result, double a2)
{
 if ( result <= a2 )
 return a2;
 return result;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x20A0 */
int * _Z13template_swapIiEvRT_S1_(int *result, int *a2)
{
 int v2; // w9

 v2 = *result;
 *result = *a2;
 *a2 = v2;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x20B4 */
long long _ZN9ContainerIiEC2Ev(long long result)
{
 *(unsigned int *)(result + 40) = 0;
 return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x20BC */
long long _ZN9ContainerIiE4pushEi(long long result, int a2)
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
long long _ZNK9ContainerIiE3getEi(long long a1, int a2)
{
 long long result; // x0

 result = 0;
 if ( (a2 & 0x80000000) == 0 && *(unsigned int *)(a1 + 40) > a2 )
 return *(unsigned int *)(a1 + 4LL * a2);
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x20F8 */
long long _ZNK9ContainerIiE7getSizeEv(long long a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x2100 */
long long _ZN9ContainerIdEC2Ev(long long result)
{
 *(unsigned int *)(result + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x2108 */
long long _ZN9ContainerIdE4pushEd(long long result, double a2)
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
double _ZNK9ContainerIdE3getEi(long long a1, int a2)
{
 double result; // d0

 result = 0.0;
 if ( (a2 & 0x80000000) == 0 && *(unsigned int *)(a1 + 80) > a2 )
 return *(double *)(a1 + 8LL * a2);
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x2140 */
long long _ZNK9ContainerIdE7getSizeEv(long long a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: _ZNK4Base7getNameEv @ 0x2148 */
const char * _ZNK4Base7getNameEv(struct Base *this)
{
 return "Base";
}


/* Function: _ZN4BaseD0Ev @ 0x2154 */
void _ZN4BaseD0Ev(struct Base *this)
{
 operator_delete(this);
}


/* Function: _ZNK7Derived7getNameEv @ 0x2168 */
const char * _ZNK7Derived7getNameEv(struct Derived *this)
{
 return "Derived";
}


/* Function: _ZN7DerivedD0Ev @ 0x2174 */
void _ZN7DerivedD0Ev(struct Derived *this)
{
 operator_delete(this);
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x2188 */
long long _ZN12MultiDerived5funcAEv(struct MultiDerived *this)
{
 return 30;
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x2190 */
void _ZN12MultiDerivedD0Ev(struct MultiDerived *this)
{
 operator_delete(this);
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x21A4 */
long long _ZN12MultiDerived5funcBEv(struct MultiDerived *this)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x21AC */
long long _non_virtual_thunk_to_MultiDerived_funcB(struct MultiDerived *this)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x21B4 */
void _non_virtual_thunk_to_MultiDerived_D1Ev(struct MultiDerived *this)
{
 ;
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x21B8 */
void _non_virtual_thunk_to_MultiDerived_D0Ev(struct MultiDerived *this)
{
 operator_delete((char *)this - 16);
}


/* Function: _ZN5BaseA5funcAEv @ 0x21D0 */
long long _ZN5BaseA5funcAEv(struct BaseA *this)
{
 return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x21D8 */
void _ZN5BaseAD2Ev(struct BaseA *this)
{
 ;
}


/* Function: _ZN5BaseAD0Ev @ 0x21DC */
void _ZN5BaseAD0Ev(struct BaseA *this)
{
 operator_delete(this);
}


/* Function: _ZN5BaseB5funcBEv @ 0x21F0 */
long long _ZN5BaseB5funcBEv(struct BaseB *this)
{
 return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x21F8 */
void _ZN5BaseBD2Ev(struct BaseB *this)
{
 ;
}


/* Function: _ZN5BaseBD0Ev @ 0x21FC */
void _ZN5BaseBD0Ev(struct BaseB *this)
{
 operator_delete(this);
}


/* Function: _ZN7MiddleA4funcEv @ 0x2210 */
long long _ZN7MiddleA4funcEv(struct MiddleA *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 150);
}


/* Function: _ZN7MiddleAD1Ev @ 0x2228 */
void _ZN7MiddleAD1Ev(struct MiddleA *this)
{
 ;
}


/* Function: _ZN7MiddleAD0Ev @ 0x222C */
void _ZN7MiddleAD0Ev(struct MiddleA *this)
{
 operator_delete(this);
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x2240 */
long long _virtual_thunk_to_MiddleA_func(struct MiddleA *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this
 + *(unsigned long long *)(*(unsigned long long *)this - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) - 24LL)
 + 8)
 + 150);
}


/* Function: _ZTv0_n32_N7MiddleAD1Ev @ 0x2264 */
void _virtual_thunk_to_MiddleA_D1Ev(struct MiddleA *this)
{
 ;
}


/* Function: _ZTv0_n32_N7MiddleAD0Ev @ 0x2268 */
void _virtual_thunk_to_MiddleA_D0Ev(struct MiddleA *this)
{
 operator_delete((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL));
}


/* Function: _ZN7MiddleB4funcEv @ 0x2288 */
long long _ZN7MiddleB4funcEv(struct MiddleB *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 200);
}


/* Function: _ZN7MiddleBD1Ev @ 0x22A0 */
void _ZN7MiddleBD1Ev(struct MiddleB *this)
{
 ;
}


/* Function: _ZN7MiddleBD0Ev @ 0x22A4 */
void _ZN7MiddleBD0Ev(struct MiddleB *this)
{
 operator_delete(this);
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x22B8 */
long long _virtual_thunk_to_MiddleB_func(struct MiddleB *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this
 + *(unsigned long long *)(*(unsigned long long *)this - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) - 24LL)
 + 8)
 + 200);
}


/* Function: _ZTv0_n32_N7MiddleBD1Ev @ 0x22DC */
void _virtual_thunk_to_MiddleB_D1Ev(struct MiddleB *this)
{
 ;
}


/* Function: _ZTv0_n32_N7MiddleBD0Ev @ 0x22E0 */
void _virtual_thunk_to_MiddleB_D0Ev(struct MiddleB *this)
{
 operator_delete((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x2300 */
long long _ZN14DiamondDerived4funcEv(struct DiamondDerived *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 250);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x2318 */
void _ZN14DiamondDerivedD0Ev(struct DiamondDerived *this)
{
 operator_delete(this);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x232C */
long long _non_virtual_thunk_to_DiamondDerived_func(struct DiamondDerived *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*((unsigned long long *)this - 2) - 24LL) - 8) + 250);
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x2344 */
void _non_virtual_thunk_to_DiamondDerived_D1Ev(struct DiamondDerived *this)
{
 ;
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x2348 */
void _non_virtual_thunk_to_DiamondDerived_D0Ev(struct DiamondDerived *this)
{
 operator_delete((char *)this - 16);
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x2360 */
long long _virtual_thunk_to_DiamondDerived_func(struct DiamondDerived *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this
 + *(unsigned long long *)(*(unsigned long long *)this - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) - 24LL)
 + 8)
 + 250);
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x2384 */
void _virtual_thunk_to_DiamondDerived_D1Ev(struct DiamondDerived *this)
{
 ;
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x2388 */
void _virtual_thunk_to_DiamondDerived_D0Ev(struct DiamondDerived *this)
{
 operator_delete((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL));
}


/* Function: _ZN11VirtualBase4funcEv @ 0x23A8 */
long long _ZN11VirtualBase4funcEv(struct VirtualBase *this)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x23B0 */
void _ZN11VirtualBaseD2Ev(struct VirtualBase *this)
{
 ;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x23B4 */
void _ZN11VirtualBaseD0Ev(struct VirtualBase *this)
{
 operator_delete(this);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x23C8 */
void _ZN12RTTIDerivedAD0Ev(struct RTTIDerivedA *this)
{
 operator_delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x23DC */
long long _ZNK12RTTIDerivedA7getTypeEv(struct RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x23E4 */
void _ZN8RTTIBaseD2Ev(struct RTTIBase *this)
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x23E8 */
void _ZN12RTTIDerivedBD0Ev(struct RTTIDerivedB *this)
{
 operator_delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x23FC */
long long _ZNK12RTTIDerivedB7getTypeEv(struct RTTIDerivedB *this)
{
 return 2;
}


/* Function: .term_proc @ 0x2404 */
void term_proc()
{
 ;
}


/* Global variable definitions (from original binary's data sections) */
unsigned long long xmmword_2689 = 0;
void* _dso_handle = 0;

/* Vtable pointers and type info */
unsigned char off_139A8[8] = {0};
unsigned char off_139E8[8] = {0};
unsigned char off_13A30[8] = {0};
unsigned char off_13A60[8] = {0};
unsigned char off_13B38[8] = {0};
unsigned char off_13B68[8] = {0};
unsigned char off_13BA0[8] = {0};
unsigned char off_13D58[8] = {0};
unsigned char off_13D80[8] = {0};

/* String constants */
const char *asc_25F9 = "C++ Object-Oriented Features Test";
const char *aCppL301D = "Member function: %d\n";
const char *aCppL302D = "Constructor result: %lld\n";
const char *aCppL303D = "Virtual function: %d\n";
const char *aCppL304D = "Multiple inheritance: %d\n";
const char *aCppL305D = "Diamond inheritance: %d\n";
const char *aCppL306D = "Operator overload: %d\n";
const char *aCppL307D = "Template function: %d\n";
const char *aCppL308D = "Template class: %d\n";
const char *aCppL309D = "Lambda: %d\n";

/* io initialization */
unsigned char __ioinit[8] = {0};

/* Static class member */
int LifecycleClass_instance_count = 0;

/* Vtable for std::type_info */
const void* type_info_vtable[4] = {
    (const void*)0,  /* destructor */
    (const void*)0,  /* operator== */
    (const void*)0,  /* operator!= */
    (const void*)0   /* name() */
};

/* Type info objects */
struct type_info_for_int typeinfo_for_int = {type_info_vtable, "int"};
struct type_info_for_Base typeinfo_for_Base = {type_info_vtable, "4Base"};
struct type_info_for_Derived typeinfo_for_Derived = {type_info_vtable, "7Derived"};
struct type_info_for_RTTIBase typeinfo_for_RTTIBase = {type_info_vtable, "8RTTIBase"};
struct type_info_for_RTTIDerivedA typeinfo_for_RTTIDerivedA = {type_info_vtable, "12RTTIDerivedA"};
struct type_info_for_RTTIDerivedB typeinfo_for_RTTIDerivedB = {type_info_vtable, "12RTTIDerivedB"};

/* C++ RTTI type info symbols (mangled names for linking) */
const struct std_type_info* _ZTIi = (const struct std_type_info*)&typeinfo_for_int;
const struct std_type_info* _ZTI4Base = (const struct std_type_info*)&typeinfo_for_Base;
const struct std_type_info* _ZTI7Derived = (const struct std_type_info*)&typeinfo_for_Derived;
const struct std_type_info* _ZTI8RTTIBase = (const struct std_type_info*)&typeinfo_for_RTTIBase;
const struct std_type_info* _ZTI12RTTIDerivedA = (const struct std_type_info*)&typeinfo_for_RTTIDerivedA;
const struct std_type_info* _ZTI12RTTIDerivedB = (const struct std_type_info*)&typeinfo_for_RTTIDerivedB;

/* Vtable arrays (8 bytes each) */
unsigned char vtable_for_Base[8] = {0};
unsigned char vtable_for_Derived[8] = {0};
unsigned char vtable_for_MultiDerived[8] = {0};
unsigned char vtable_for_DiamondDerived[8] = {0};
unsigned char vtable_for_BaseA[8] = {0};
unsigned char vtable_for_BaseB[8] = {0};
unsigned char vtable_for_MiddleA[8] = {0};
unsigned char vtable_for_MiddleB[8] = {0};
unsigned char vtable_for_VirtualBase[8] = {0};
unsigned char vtable_for_RTTIBase[8] = {0};
unsigned char vtable_for_RTTIDerivedA[8] = {0};
unsigned char vtable_for_RTTIDerivedB[8] = {0};
unsigned char vtable_for_ContainerInt[8] = {0};
unsigned char vtable_for_ContainerDouble[8] = {0};

/* Implement C++ runtime functions that are needed for linking */

/* __gxx_personality_v0 - exception personality routine (stub) */
int __gxx_personality_v0() {
    return 0;
}

/* ARM-specific unwind helper functions */
void __aeabi_unwind_cpp_pr0(void) {
}

void __aeabi_unwind_cpp_pr1(void) {
}

void __aeabi_unwind_cpp_pr2(void) {
}

/* _Unwind_Resume - unwind resume function (stub) */
void _Unwind_Resume(void* exception) {
    (void)exception;
    abort();
}

/* __cxa_begin_catch - begin exception handling (stub) */
void* __cxa_begin_catch(void* exception) {
    return exception;
}

/* __cxa_end_catch - end exception handling (stub) */
void __cxa_end_catch() {
}

/* __cxa_rethrow - rethrow exception (stub) */
void __cxa_rethrow() {
    abort();
}

/* __gmon_start__ - profiling startup (stub) */
void __gmon_start__() {
}

/* Additional C++ runtime function implementations needed for linking */

/* __cxa_allocate_exception - allocate exception object */
void* __cxa_allocate_exception(size_t size) {
    return malloc(size);
}

/* __cxa_throw - throw exception */
void __cxa_throw(void* exception, const void* tinfo, void (*dest)(void*)) {
    (void)tinfo;
    (void)dest;
    /* For stub purposes, just abort - real implementation would unwind */
    free(exception);
    abort();
}

/* __cxa_atexit - register cleanup function */
int __cxa_atexit(void (*func)(void*), void* arg, void* dso_handle) {
    (void)func;
    (void)arg;
    (void)dso_handle;
    /* Stub - return success */
    return 0;
}

/* __cxa_finalize - cleanup functions */
void __cxa_finalize(void* dso_handle) {
    (void)dso_handle;
    /* Stub - no cleanup needed */
}

/* __dynamic_cast - dynamic cast operation */
void* __dynamic_cast(void* src_ptr, const struct __class_type_info* src_type,
                      const struct __class_type_info* dst_type, int src2dst_offset) {
    (void)src_type;
    (void)dst_type;
    (void)src2dst_offset;
    /* Simple stub - return src_ptr for now */
    return src_ptr;
}

/* Mangled names for operator new/delete (needed for C++ linkage) */
void* _Znwm(size_t size) {
    return malloc(size);
}

void _ZdlPv(void* ptr) {
    free(ptr);
}

void* _Znam(size_t size) {
    return malloc(size);
}

void _ZdaPv(void* ptr) {
    free(ptr);
}

/* C++ std::ios_base initialization functions (stubs) */
void* _ZNSt8ios_base4InitC1Ev(void* this) {
    (void)this;
    return this;
}

void* _ZNSt8ios_base4InitD1Ev(void* this) {
    (void)this;
    return this;
}

/* Total functions decompiled: 85, failed: 23 */
