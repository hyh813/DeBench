/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-1/5-1_clang_O1_g
 * Processor: arm
 */

/* Header includes */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/* Forward declarations and class definitions */
struct Base {
    void **_vptr$Base;
    int (*virtual_func)(int x);
    const char *(*getName)(void);
    void (*destructor)(void);
};
typedef struct Base Base;

/* Global variable declarations */
int LifecycleClass_instance_count = 0;

/* C++ runtime function declarations */
extern void __cxa_throw(void *obj, void *typeinfo, void *dest);
extern void *__dynamic_cast(void *obj, const void *from_type, const void *to_type, int offset);
extern unsigned long long xmmword_2689;
extern void *_dso_handle;
extern int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);

/* Forward declare std namespace symbols for decompiled code */
/* Stub for std::ios_base::Init */
struct std_ios_base_Init {
    void *_vptr;
};
typedef struct std_ios_base_Init std_ios_base_Init;

/* Typeinfo structure for RTTI */
struct __class_type_info {
    void **_vptr;
};

/* Typeinfo symbol declarations */
extern const struct __class_type_info typeinfo_for_int;
extern const struct __class_type_info typeinfo_for_RTITBase;
extern const struct __class_type_info typeinfo_for_RTITDerivedA;
extern const struct __class_type_info typeinfo_for_RTITDerivedB;
extern const struct __class_type_info typeinfo_for_RTTIBase;
extern const struct __class_type_info typeinfo_for_RTTIDerivedA;
extern const struct __class_type_info typeinfo_for_RTTIDerivedB;

/* String constant declarations */
extern const char asc_25F9[];
extern const char aCppL301D[];
extern const char aCppL302D[];
extern const char aCppL303D[];
extern const char aCppL304D[];
extern const char aCppL305D[];
extern const char aCppL306D[];
extern const char aCppL307D[];
extern const char aCppL308D[];
extern const char aCppL309D[];
extern const char aCppL401D[];
extern const char aCppL402D[];
extern const char aCppL403D[];

/* Constructor/destructor declarations */
extern void std_ios_base_Init_ctor(std_ios_base_Init *this);
extern void std_ios_base_Init_dtor(std_ios_base_Init *this);

/* Global instance */
extern std_ios_base_Init std_ioinit;

/* Vtable pointer references (external symbols) */
extern void *off_139A8[];
extern void *off_139E8[];
extern void *off_13A30[];
extern void *off_13A60[];
extern void *off_13B38[];
extern void *off_13B68[];
extern void *off_13BA0[];
extern void *off_13D58[];
extern void *off_13D80[];

struct Derived {
    void **_vptr$Base;
    int multiplier;
};
typedef struct Derived Derived;

struct BaseA {
    void **_vptr$BaseA;
};
typedef struct BaseA BaseA;

struct BaseB {
    void **_vptr$BaseB;
};
typedef struct BaseB BaseB;

struct MultiDerived {
    struct BaseA BaseA;
    struct BaseB BaseB;
    int dataA;
    int dataB;
};
typedef struct MultiDerived MultiDerived;

struct MiddleA {
    void **_vptr$MiddleA;
    int dataA;
};
typedef struct MiddleA MiddleA;

struct MiddleB {
    void **_vptr$MiddleB;
    int dataB;
};
typedef struct MiddleB MiddleB;

struct DiamondDerived {
    struct MiddleA MiddleA;
    struct MiddleB MiddleB;
    void **_vptr$DiamondDerived;
};
typedef struct DiamondDerived DiamondDerived;

struct LifecycleClass {
    int instance_count;
};
typedef struct LifecycleClass LifecycleClass;

struct Container_int {
    int size;
    int data[10];
};
typedef struct Container_int Container_int;

struct Container_double {
    int size;
    double data[10];
};
typedef struct Container_double Container_double;

struct VirtualBase {
    void **_vptr$VirtualBase;
    int (*func)(void);
    void (*destructor)(void);
};
typedef struct VirtualBase VirtualBase;

struct RTTIBase {
    void **_vptr$RTTIBase;
};
typedef struct RTTIBase RTTIBase;

struct RTTIDerivedA {
    struct RTTIBase RTTIBase;
    void **_vptr$RTTIDerivedA;
    void (*destructor)(void);
    int (*getType)(void);
};
typedef struct RTTIDerivedA RTTIDerivedA;

struct RTTIDerivedB {
    struct RTTIBase RTTIBase;
    void **_vptr$RTTIDerivedB;
    void (*destructor)(void);
    int (*getType)(void);
};
typedef struct RTTIDerivedB RTTIDerivedB;

/* Forward declarations */
extern long long call_weak_fn(void);
extern int Base_virtual_func(struct Base *this, int x);
extern void Base_d2(Base *this);
extern void Base_d0(Base *this);
extern const char * Base_getName(const struct Base *this);
extern int Derived_virtual_func(struct Derived *this, int x);
extern void Derived_d0(Derived *this);
extern const char * Derived_getName(const Derived *this);
extern int MultiDerived_funcA(struct MultiDerived *this);
extern int MultiDerived_funcB(struct MultiDerived *this);
extern int BaseA_funcA(struct BaseA *this);
extern void BaseA_d2(struct BaseA *this);
extern void BaseA_d0(struct BaseA *this);
extern int BaseB_funcB(struct BaseB *this);
extern void BaseB_d2(struct BaseB *this);
extern void BaseB_d0(struct BaseB *this);
extern int MiddleA_func(struct MiddleA *this);
extern void MiddleA_d1(struct MiddleA *this);
extern void MiddleA_d0(struct MiddleA *this);
extern int virtual_thunk_to_MiddleA_func(void);
extern void virtual_thunk_to_MiddleA_d1(void);
extern void virtual_thunk_to_MiddleA_d0(void);
extern int MiddleB_func(struct MiddleB *this);
extern void MiddleB_d1(struct MiddleB *this);
extern void MiddleB_d0(struct MiddleB *this);
extern int virtual_thunk_to_MiddleB_func(void);
extern void virtual_thunk_to_MiddleB_d1(void);
extern void virtual_thunk_to_MiddleB_d0(void);
extern int DiamondDerived_func(struct DiamondDerived *this);
extern void DiamondDerived_d1(struct DiamondDerived *this);
extern void DiamondDerived_d0(struct DiamondDerived *this);
extern int virtual_thunk_to_DiamondDerived_func(void);
extern void virtual_thunk_to_DiamondDerived_d1(void);
extern void virtual_thunk_to_DiamondDerived_d0(void);
extern int RTTIDerivedA_getType(const RTTIDerivedA *this);
extern void RTTIDerivedA_d0(RTTIDerivedA *this);
extern int RTTIDerivedB_getType(const RTTIDerivedB *this);
extern void RTTIDerivedB_d0(RTTIDerivedB *this);

/* Function: .init_proc @ 0x1618 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_1630 @ 0x1630 */
void sub_1630()
{
 __builtin_unreachable();
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x17C0 */
void GLOBAL__sub_I_5_1_cpp()
{
 std_ios_base_Init_ctor(&std_ioinit);
 __cxa_atexit((void (*)(void *))&std_ios_base_Init_dtor, &std_ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x1914 */
int test_cpp_member_func()
{
 unsigned char v1[31]; // [xsp+Ch] [xbp-24h] BYREF
 char v2; // [xsp+2Bh] [xbp-5h]

 v2 = 0;
 *(unsigned long long *)v1 = *(unsigned long long *)"Test";
 *(unsigned long long *)&v1[15] = xmmword_2689;
 return strlen(v1) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1964 */
int test_cpp_constructor()
{
 unsigned int *v0; // x0
 int v1; // w8
 long long i; // x9
 int v3; // w20

 v0 = (unsigned int *)malloc(0x14u);
 v1 = 0;
 for ( i = 0; i != 5; ++i )
 {
 v0[i] = v1;
 v1 += 10;
 }
 v3 = v0[2] + ++LifecycleClass_instance_count;
 free(v0);
 return v3 + 1000 * --LifecycleClass_instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x19D0 */
int call_virtual_func(struct Base *obj, int x)
{
 return ((long long ( *)(struct Base *, int))*obj->_vptr$Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x19EC */
int test_cpp_virtual_func()
{
 int v0; // w19
 struct Derived v2; // [xsp+0h] [xbp-10h] BYREF
 struct Base v3; // [xsp+28h] [xbp+18h] BYREF

 v3._vptr$Base = (void **)&off_139A8;
 v2._vptr$Base = (void **)&off_139E8;
 v2.multiplier = 3;
 v0 = Base_virtual_func((struct Base *)&v3, 5);
 return v0 + Derived_virtual_func(&v2, 5) + 21;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1A5C */
int test_cpp_multiple_inheritance()
{
 int v0; // w20
 int v1; // w0
 struct MultiDerived v3; // [xsp+0h] [xbp-20h] BYREF

 v3.BaseA._vptr$BaseA = (void **)&off_13A30;
 v3.BaseB._vptr$BaseB = (void **)&off_13A60;
 v3.dataA = 100;
 v3.dataB = 200;
 v0 = MultiDerived_funcA(&v3);
 v1 = MultiDerived_funcB(&v3);
 return v0 + v1 + 1;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1ACC */
int test_cpp_diamond_inheritance()
{
 int v0; // w0
 int v1; // w20
 int v2; // w0
 void **v4; // [xsp+0h] [xbp-30h]
 void **v5; // [xsp+10h] [xbp-20h]
 void **v6; // [xsp+20h] [xbp-10h]
 int v7; // [xsp+28h] [xbp-8h]

 v4 = (void **)off_13B38;
 v6 = (void **)off_13BA0;
 v5 = (void **)off_13B68;
 ((void (*)(void))(*((void **)v4)))();
 v0 = 0;
 v1 = v0;
 v7 = 100;
 ((void (*)(void))(*((void **)v6)))();
 v2 = 0;
 return v2 + v1;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1B54 */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1B5C */
int test_cpp_template_func()
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0x1B64 */
int test_cpp_template_class()
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x1B6C */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x1B74 */
int test_cpp_exception()
{
 unsigned int *exception; // x0

 exception = (unsigned int *)malloc(4u);
 *exception = 42;
 __cxa_throw(exception, &typeinfo_for_int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1C64 */
int test_cpp_smart_ptr()
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x1C6C */
int test_cpp_rtti()
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

 v0 = (long long *)malloc(8u);
 *(void **)v0 = &off_13D58;
 v1 = (unsigned long long *)malloc(8u);
 v2 = *v0;
 *v1 = 0;
 v3 = v1;
 *(void **)v1 = &off_13D80;
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
 (*(void ( **)(const void *))(*(unsigned long long *)v3 + 8LL))(v3);
 return v9 + v11;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1E04 */
void test_cpp_oo_features()
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
 int v9; // w0
 int v10; // w20
 int v11; // w0
 Base v12; // [xsp+8h] [xbp-38h] BYREF
 unsigned char v13[40]; // [xsp+10h] [xbp-30h] BYREF
 int v14; // [xsp+38h] [xbp-8h]

 puts(asc_25F9);
 *(unsigned int *)v13 = 10;
 *(unsigned long long *)&v13[4] = *(unsigned long long *)"Test";
 memset(&v13[19], 0, 17);
 v0 = strlen(&v13[4]);
 printf(aCppL301D, (unsigned int)(v0 + 4700));
 v1 = (unsigned int *)malloc(0x14u);
 v2 = 0;
 for ( i = 0; i != 5; ++i )
 {
 v1[i] = v2;
 v2 += 10;
 }
 v4 = v1[2] + ++LifecycleClass_instance_count;
 free(v1);
 v5 = (unsigned int)(v4 + 1000 * --LifecycleClass_instance_count);
 printf(aCppL302D, v5);
 *(unsigned int *)&v13[8] = 3;
 v12._vptr$Base = (void **)&off_139A8;
 *(void **)v13 = off_139E8;
 v6 = Base_virtual_func(&v12, 5);
 v7 = (**(long long ( ***)(unsigned char *, long long))v13)(v13, 5);
 printf(aCppL303D, (unsigned int)(v6 + v7 + 21));
 *(void **)v13 = off_13A30;
 *(void **)&v13[16] = off_13A60;
 *(unsigned int *)&v13[8] = 100;
 *(unsigned int *)&v13[24] = 200;
 ((void (*)(void))(*((void **)(&v13[16]))))();
 v10 = 0;
 v8 = MultiDerived_funcA((struct MultiDerived *)v13);
 printf(aCppL304D, (unsigned int)(v8 + 31));
 *(void **)v13 = off_13B38;
 *(void **)&v13[32] = off_13BA0;
 *(void **)&v13[16] = off_13B68;
 v14 = 50;
 ((void (*)(void))(*((void **)(&v13[16]))))();
 ((void (*)(void))(*((void **)(&v13[32]))))();
 v11 = 0;
 v9 = v8 + v11 + v10;
 v10 = v9;
 printf(aCppL305D, (unsigned int)(v11 + v10));
 printf(aCppL306D, 22);
 printf(aCppL307D, 39);
 printf(aCppL308D, 16);
 printf(aCppL309D, 85);
 test_cpp_exception();
}


/* Function: sub_2008 @ 0x2008 */
// positive sp value has been detected, the output may be wrong!
long long sub_2008(unsigned int a1)
{
 unsigned int v1; // w0

 printf(aCppL401D, a1);
 printf(aCppL402D, 703);
 v1 = test_cpp_rtti();
 return printf(aCppL403D, v1);
}


/* Typeinfo symbol definitions (stubs for RTTI) */
const struct __class_type_info typeinfo_for_int = { NULL };
const struct __class_type_info typeinfo_for_RTITBase = { NULL };
const struct __class_type_info typeinfo_for_RTITDerivedA = { NULL };
const struct __class_type_info typeinfo_for_RTITDerivedB = { NULL };
const struct __class_type_info typeinfo_for_RTTIBase = { NULL };
const struct __class_type_info typeinfo_for_RTTIDerivedA = { NULL };
const struct __class_type_info typeinfo_for_RTTIDerivedB = { NULL };

/* Vtable definitions */
void *off_139A8[] = {
    (void *)Base_virtual_func,
    (void *)Base_d2,
    (void *)Base_d0,
    (void *)Base_getName
};

void *off_139E8[] = {
    (void *)Derived_virtual_func,
    (void *)Base_d2,
    (void *)Derived_d0,
    (void *)Derived_getName
};

void *off_13A30[] = {
    (void *)BaseA_funcA,
    (void *)BaseA_d2,
    (void *)BaseA_d0
};

void *off_13A60[] = {
    (void *)BaseB_funcB,
    (void *)BaseB_d2,
    (void *)BaseB_d0
};

void *off_13B38[] = {
    (void *)MiddleA_func,
    (void *)MiddleA_d1,
    (void *)MiddleA_d0,
    (void *)virtual_thunk_to_MiddleA_func,
    (void *)virtual_thunk_to_MiddleA_d1,
    (void *)virtual_thunk_to_MiddleA_d0
};

void *off_13B68[] = {
    (void *)MiddleB_func,
    (void *)MiddleB_d1,
    (void *)MiddleB_d0,
    (void *)virtual_thunk_to_MiddleB_func,
    (void *)virtual_thunk_to_MiddleB_d1,
    (void *)virtual_thunk_to_MiddleB_d0
};

void *off_13BA0[] = {
    (void *)DiamondDerived_func,
    (void *)DiamondDerived_d1,
    (void *)DiamondDerived_d0,
    (void *)virtual_thunk_to_DiamondDerived_func,
    (void *)virtual_thunk_to_DiamondDerived_d1,
    (void *)virtual_thunk_to_DiamondDerived_d0
};

void *off_13D58[] = {
    (void *)RTTIDerivedA_getType,
    (void *)RTTIDerivedA_d0,
    (void *)0,
    (void *)"12RTTIDerivedA"
};

void *off_13D80[] = {
    (void *)RTTIDerivedB_getType,
    (void *)RTTIDerivedB_d0,
    (void *)0,
    (void *)"12RTTIDerivedB"
};

/* String constant definitions */
const char asc_25F9[] = "Testing C++ Object-Oriented Features:";
const char aCppL301D[] = "  String result: %d\n";
const char aCppL302D[] = "  Constructor result: %d\n";
const char aCppL303D[] = "  Virtual function result: %d\n";
const char aCppL304D[] = "  Multiple inheritance result: %d\n";
const char aCppL305D[] = "  Diamond inheritance result: %d\n";
const char aCppL306D[] = "  Operator overload result: %d\n";
const char aCppL307D[] = "  Template function result: %d\n";
const char aCppL308D[] = "  Template class result: %d\n";
const char aCppL309D[] = "  Lambda result: %d\n";
const char aCppL401D[] = "Test result: %d\n";
const char aCppL402D[] = "  Smart pointer result: %d\n";
const char aCppL403D[] = "  RTTI result: %d\n";

/* Global instance definition */
std_ios_base_Init std_ioinit;

/* Function: main @ 0x2050 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: sub_205C @ 0x205C */
// positive sp value has been detected, the output may be wrong!
long long sub_205C()
{
 return 0;
}


/* Function: _ZN4Base12virtual_funcEi @ 0x2068 */
int Base_virtual_func(struct Base *this, int x)
{
 return x + 1;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x2070 */
int Derived_virtual_func(struct Derived *this, int x)
{
 return this->multiplier * x;
}


/* Function: _ZN4BaseD2Ev @ 0x207C */
void Base_d2(Base *this)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x2080 */
void MultiDerived_d2(MultiDerived *this)
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x2084 */
void DiamondDerived_d1(DiamondDerived *this)
{
 ;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x2088 */
int template_max_int(int a, int b)
{
 if ( a <= b )
 return b;
 return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x2094 */
double template_max_double(double a, double b)
{
 if ( a <= b )
 return b;
 return a;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x20A0 */
void template_swap_int(int *a, int *b)
{
 int v2; // w9

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x20B4 */
void Container_int_Container(struct Container_int *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x20BC */
void Container_int_push(struct Container_int *this, int value)
{
 long long size; // x8

 size = this->size;
 if ( (int)size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x20D8 */
int Container_int_get(const struct Container_int *this, int idx)
{
 int result; // w0

 result = 0;
 if ( (idx & 0x80000000) == 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x20F8 */
int Container_int_getSize(const struct Container_int *this)
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x2100 */
void Container_double_Container(struct Container_double *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x2108 */
void Container_double_push(struct Container_double *this, double value)
{
 long long size; // x8

 size = this->size;
 if ( (int)size <= 9 )
 {
 this->data[size] = value;
 this->size = size + 1;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x2124 */
double Container_double_get(const struct Container_double *this, int idx)
{
 double result; // d0

 result = 0.0;
 if ( (idx & 0x80000000) == 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x2140 */
int Container_double_getSize(const struct Container_double *this)
{
 return this->size;
}


/* Function: _ZNK4Base7getNameEv @ 0x2148 */
const char * Base_getName(const struct Base *this)
{
 return "Base";
}


/* Function: _ZN4BaseD0Ev @ 0x2154 */
void Base_d0(Base *this)
{
 free(this);
}


/* Function: _ZNK7Derived7getNameEv @ 0x2168 */
const char * Derived_getName(const Derived *this)
{
 return "Derived";
}


/* Function: _ZN7DerivedD0Ev @ 0x2174 */
void Derived_d0(Derived *this)
{
 free(this);
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x2188 */
int MultiDerived_funcA(MultiDerived *this)
{
 return 30;
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x2190 */
void MultiDerived_d0(struct MultiDerived *this)
{
 free(this);
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x21A4 */
int MultiDerived_funcB(struct MultiDerived *this)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x21AC */
int non_virtual_thunk_to_MultiDerived_funcB()
{
 return 1;
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x21B4 */
void non_virtual_thunk_to_MultiDerived_d1()
{
 ;
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x21B8 */
void non_virtual_thunk_to_MultiDerived_d0()
{
 long long v0; // x0

 free((void *)(v0 - 16));
}


/* Function: _ZN5BaseA5funcAEv @ 0x21D0 */
int BaseA_funcA(struct BaseA *this)
{
 return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x21D8 */
void BaseA_d2(struct BaseA *this)
{
 ;
}


/* Function: _ZN5BaseAD0Ev @ 0x21DC */
void BaseA_d0(struct BaseA *this)
{
 free(this);
}


/* Function: _ZN5BaseB5funcBEv @ 0x21F0 */
int BaseB_funcB(struct BaseB *this)
{
 return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x21F8 */
void BaseB_d2(struct BaseB *this)
{
 ;
}


/* Function: _ZN5BaseBD0Ev @ 0x21FC */
void BaseB_d0(struct BaseB *this)
{
 free(this);
}


/* Function: _ZN7MiddleA4funcEv @ 0x2210 */
int MiddleA_func(struct MiddleA *this)
{
 return *(int *)((char *)&this->dataA + *((unsigned long long *)this->_vptr$MiddleA - 3)) + 150;
}


/* Function: _ZN7MiddleAD2Ev @ 0x2224 */
void MiddleA_d2(struct MiddleA *this)
{
 ;
}


/* Function: _ZN7MiddleAD1Ev @ 0x2228 */
void MiddleA_d1(struct MiddleA *this)
{
 ;
}


/* Function: _ZN7MiddleAD0Ev @ 0x222C */
void MiddleA_d0(struct MiddleA *this)
{
 free(this);
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x2240 */
int virtual_thunk_to_MiddleA_func(struct MiddleA *this)
{
 return 1;
}


/* Function: _ZTv0_n32_N7MiddleAD1Ev @ 0x2264 */
void virtual_thunk_to_MiddleA_d1(struct MiddleA *this)
{
 ;
}


/* Function: _ZTv0_n32_N7MiddleAD0Ev @ 0x2268 */
void virtual_thunk_to_MiddleA_d0(struct MiddleA *this)
{
 free((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL));
}


/* Function: _ZThn16_N7MiddleA4funcEv @ 0x2288 */
int non_virtual_thunk_to_MiddleA_func()
{
 return 1;
}


/* Function: _ZThn16_N7MiddleAD1Ev @ 0x2290 */
void non_virtual_thunk_to_MiddleA_d1()
{
 ;
}


/* Function: _ZThn16_N7MiddleAD0Ev @ 0x2298 */
void non_virtual_thunk_to_MiddleA_d0()
{
 long long v0; // x0

 free((void *)(v0 - 16));
}


/* Function: _ZN7MiddleB4funcEv @ 0x22B0 */
int MiddleB_func(struct MiddleB *this)
{
 return *(int *)((char *)&this->dataB + *((unsigned long long *)this->_vptr$MiddleB - 3)) + 200;
}


/* Function: _ZN7MiddleBD2Ev @ 0x22B4 */
void MiddleB_d2(struct MiddleB *this)
{
 ;
}


/* Function: _ZN7MiddleBD1Ev @ 0x22B8 */
void MiddleB_d1(struct MiddleB *this)
{
 ;
}


/* Function: _ZN7MiddleBD0Ev @ 0x22BC */
void MiddleB_d0(struct MiddleB *this)
{
 free(this);
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x22B8 */
int virtual_thunk_to_MiddleB_func(struct MiddleB *this)
{
 return 1;
}


/* Function: _ZTv0_n32_N7MiddleBD1Ev @ 0x22DC */
void virtual_thunk_to_MiddleB_d1(struct MiddleB *this)
{
 ;
}


/* Function: _ZTv0_n32_N7MiddleBD0Ev @ 0x22E0 */
void virtual_thunk_to_MiddleB_d0(struct MiddleB *this)
{
 free((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL));
}

/* Function: _ZN14DiamondDerived4funcEv @ 0x2300 */
int DiamondDerived_func(struct DiamondDerived *this)
{
 return *(int *)((char *)&this->MiddleA.dataA + *((unsigned long long *)this->MiddleA._vptr$MiddleA - 3)) + 250;
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x2318 */
void DiamondDerived_d0(struct DiamondDerived *this)
{
 free(this);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x232C */
int non_virtual_thunk_to_DiamondDerived_func()
{
 return 1;
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x2344 */
void non_virtual_thunk_to_DiamondDerived_d1()
{
 ;
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x2348 */
void non_virtual_thunk_to_DiamondDerived_d0()
{
 long long v0; // x0

 free((void *)(v0 - 16));
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x2360 */
int virtual_thunk_to_DiamondDerived_func(struct DiamondDerived *this)
{
 return 1;
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x2384 */
void virtual_thunk_to_DiamondDerived_d1(struct DiamondDerived *this)
{
 ;
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x2388 */
void virtual_thunk_to_DiamondDerived_d0(struct DiamondDerived *this)
{
 free((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL));
}


/* Function: _ZN11VirtualBase4funcEv @ 0x23A8 */
int VirtualBase_func(struct VirtualBase *this)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x23B0 */
void VirtualBase_d2(struct VirtualBase *this)
{
 ;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x23B4 */
void VirtualBase_d0(struct VirtualBase *this)
{
 free(this);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x23C8 */
void RTTIDerivedA_d0(RTTIDerivedA *this)
{
 free(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x23DC */
int RTTIDerivedA_getType(const RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x23E4 */
void RTTIBase_d2(RTTIBase *this)
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x23E8 */
void RTTIDerivedB_d0(RTTIDerivedB *this)
{
 free(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x23FC */
int RTTIDerivedB_getType(const RTTIDerivedB *this)
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

/* Total functions decompiled: 87, failed: 23 */
