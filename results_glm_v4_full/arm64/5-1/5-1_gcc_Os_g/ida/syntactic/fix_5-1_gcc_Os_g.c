/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-1/5-1_gcc_Os_g
 * Processor: arm
 */

#include <stddef.h>
#include <string.h>

/* Forward declarations for C++ compatibility */
struct ios_base;
struct ios_base__Init {
    void (*Init)(struct ios_base__Init *const this);
    void (*dtor_Init)(struct ios_base__Init *const this);
};

struct type_info;
struct __class_type_info;

/* Class definitions */
struct Base {
    void **_vptr_Base;
    int (*virtual_func)(void *self, int x);
    const char *(*getName)(const void *self);
    void (*dtor_Base)(void *self);
};

struct Derived {
    void **_vptr_Base;
    int multiplier;
    int (*virtual_func)(void *self, int x);
    const char *(*getName)(const void *self);
    void (*dtor_Derived)(void *self);
};

struct SimpleClass {
    char name[32];
};

/* Stub class for LifecycleClass */
struct LifecycleClass {
    int dummy;
};

struct VirtualBase {
    void **_vptr_VirtualBase;
    int (*func)(void *self);
    void (*dtor_VirtualBase)(void *self);
};

struct MiddleA {
    void **_vptr_MiddleA;
    int (*func)(void *self);
    void (*dtor_MiddleA)(void *self);
    int (*dtor_MiddleA_complete)(void *self, int, void**);
    int dataA[4];
};

struct MiddleB {
    void **_vptr_MiddleB;
    int (*func)(void *self);
    void (*dtor_MiddleB)(void *self);
    void (*dtor_MiddleB_complete)(void *self, int, void**);
    int dataB[4];
};

struct MultiDerived {
    void **_vptr_Base;
    int (*virtual_func)(void *self, int x);
    const char *(*getName)(const void *self);
    void (*dtor_MultiDerived)(void *self);
    void (*dtor_MultiDerived_complete)(void *self);
    void **_vptr_MultiDerived;
    int (*funcA)(void *self);
    int (*funcB)(void *self);
    char padding[8];
};

struct RTTIBase {
    void **_vptr;
    int (*getType)(const void *self);
    void (*dtor_RTTIBase)(void *self);
};

struct RTTIDerivedA {
    void **_vptr;
    int (*getType)(const void *self);
    void (*dtor_RTTIDerivedA)(void *self);
};

struct RTTIDerivedB {
    void **_vptr;
    int (*getType)(const void *self);
    void (*dtor_RTTIDerivedB)(void *self);
};

struct DiamondDerived {
    void **_vptr_MiddleA;
    int (*func)(void *self);
    void (*dtor_DiamondDerived)(void *self);
    void (*dtor_DiamondDerived_complete)(void *self, int, void**);
    int dataA[8];
};

struct Container {
    int dummy;
};

struct __uniq_ptr_impl {
    void *_M_head_impl;
    char gap0[8];
};

struct __uniq_ptr_data {
    struct __uniq_ptr_impl _M_t;
};

struct unique_ptr {
    struct __uniq_ptr_data _M_t;
    void (*destructor)(struct unique_ptr *const this);
};

/* Typedefs for using struct names without 'struct' keyword */
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct SimpleClass SimpleClass;
typedef struct VirtualBase VirtualBase;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct MultiDerived MultiDerived;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct DiamondDerived DiamondDerived;

/* C-compatible typedefs for template instantiations */
typedef struct Container_int {
    int data[10];
    int size;
} Container_int;

typedef struct Container_double {
    double data[10];
    int size;
} Container_double;

/* CRT stub function declarations */
long long call_weak_fn(void);
void JUMPOUT(int offset);

/* External symbols */
extern void *_Znwj(size_t size);  /* operator new */
extern void *_Znaj(size_t size);  /* operator new[] */
extern void _ZdlPv(void *ptr, size_t size);   /* operator delete */
extern void _ZdaPv(void *ptr);   /* operator delete[] */
extern void *__cxa_allocate_exception(size_t);
extern void __cxa_throw(void *, struct type_info *, void (*)(void *));
extern void *__dynamic_cast(void *, const struct __class_type_info *, const struct __class_type_info *, ptrdiff_t);
extern void __cxa_atexit(void (*)(void *), void *, void *);
extern void *_dso_handle;

extern struct ios_base__Init std___ioinit;

/* Forward declarations */
void test_cpp_oo_features(void);

/* Static member declarations */
extern int LifecycleClass_instance_count;

/* Template function forward declarations */
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);

/* unique_ptr destructor forward declarations */
void unique_ptr_int_D2(struct unique_ptr *const this);
void unique_ptr_int_array_D2(struct unique_ptr *const this);

/* DiamondDerived destructor forward declaration */
void DiamondDerived_D1(DiamondDerived *const this);

/* Container template forward declarations */
void Container_int_Container(Container_int *const this);
void Container_int_push(Container_int *const this, int value);
int Container_int_get(const Container_int *const this, int idx);
int Container_int_getSize(const Container_int *const this);

extern int puts(const char *);
extern int __printf_chk(int, const char *, ...);
extern size_t strlen(const char *);
extern char *strncpy(char *, const char *, size_t);
extern int strcmp(const char *, const char *);

/* RTTI type info symbols */
extern struct type_info type_info_for_int;
extern struct type_info typeinfo_for_RTITIBase;
extern struct type_info typeinfo_for_RTITIDerivedA;
extern struct type_info typeinfo_for_RTITIDerivedB;

extern void *off_13868;
extern void *off_13898;
extern void *off_13B58;
extern void *off_13B80;
extern void *off_13AC8;
extern void *off_13B30;
extern void *off_13AF8;
extern void *off_138E0;
extern void *off_13918;
extern void *off_13958;
extern void *off_13990;
extern void *off_13A90;
extern void *off_13A80;
extern char *asc_25B2;
extern const char *unk_25D6;
extern const char *unk_25F4;
extern const char *unk_2610;
extern const char *unk_262C;
extern const char *unk_2648;
extern const char *unk_2665;
extern const char *unk_2681;
extern const char *unk_269D;
extern const char *unk_26B9;

struct __class_type_info;

/* Forward declarations for function prototypes */
struct Base;
struct MiddleA;
struct MiddleB;
struct MultiDerived;
struct DiamondDerived;

/* Function prototypes for thunks */
long long virtual_thunk_to_MiddleA_func(MiddleA *this);
long long virtual_thunk_to_MiddleB_func(MiddleB *this);
long long virtual_thunk_to_DiamondDerived_func(DiamondDerived *this);
long long non_virtual_thunk_to_MultiDerived_funcB(MultiDerived *this);
long long non_virtual_thunk_to_DiamondDerived_func(DiamondDerived *this);
void virtual_thunk_to_MiddleA_d1(MiddleA *this);
void virtual_thunk_to_MiddleB_d1(MiddleB *this);
void virtual_thunk_to_DiamondDerived_d1(DiamondDerived *this);
void virtual_thunk_to_MiddleA_d0(MiddleA *this);
void virtual_thunk_to_MiddleB_d0(MiddleB *this);
void virtual_thunk_to_DiamondDerived_d0(DiamondDerived *this);
void non_virtual_thunk_to_MultiDerived_d1(MultiDerived *this);
void non_virtual_thunk_to_MultiDerived_d0(MultiDerived *this);
void non_virtual_thunk_to_DiamondDerived_d1(DiamondDerived *this);
void non_virtual_thunk_to_DiamondDerived_d0(DiamondDerived *this);

/* Function: .init_proc @ 0x1638 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_1650 @ 0x1650 */
void sub_1650()
{
 JUMPOUT(0);
}


/* Function: _Z18test_cpp_exceptionv @ 0x1800 */
int test_cpp_exception()
{
 unsigned int *exception; // x0

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, &type_info_for_int, 0);
 return 0;
}


/* Function: main @ 0x18D0 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x18E8 */
void GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 ((void (*)(struct ios_base__Init *const))std___ioinit.Init)(&std___ioinit);
 __cxa_atexit((void (*)(void *))std___ioinit.dtor_Init, &std___ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x1A54 */
int test_cpp_member_func()
{
 char *v0; // x0
 SimpleClass obj; // [xsp+10h] [xbp+10h] BYREF

 v0 = strncpy(obj.name, "Test", 0x1Fu);
 obj.name[31] = 0;
 return strlen(v0) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1AC0 */
int test_cpp_constructor()
{
 return LifecycleClass_instance_count + 21 + 1000 * LifecycleClass_instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x1AD8 */
int call_virtual_func(Base *obj, int x)
{
 return (*(int (*)(Base *, int))obj->_vptr_Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1AE8 */
int test_cpp_virtual_func()
{
 int v0; // w19
 Base base; // [xsp+20h] [xbp+20h] BYREF
 Derived derived; // [xsp+28h] [xbp+28h] BYREF

	base._vptr_Base = (void **)(void *)&off_13868;
	derived._vptr_Base = (void **)(void *)&off_13898;
 derived.multiplier = 3;
 v0 = call_virtual_func(&base, 5);
 return v0 + 21 + call_virtual_func((Base *)&derived, 5);
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1B78 */
int test_cpp_multiple_inheritance()
{
 return 71;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1B80 */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1B88 */
int test_cpp_template_func()
{
 int v0; // w19
 double v1; // d8
 int a; // [xsp+20h] [xbp+20h] BYREF
 int b; // [xsp+24h] [xbp+24h] BYREF

 v0 = template_max_int(3, 7);
 v1 = template_max_double(2.5, 1.5);
 a = 10;
 b = 20;
 template_swap_int(&a, &b);
 return (int)v1 + v0 + a + b;
}


/* Function: _Z23test_cpp_template_classv @ 0x1C30 */
int test_cpp_template_class()
{
 int v0; // w1
 int r2[10]; // [xsp+28h] [xbp+28h] BYREF
 int v3; // [xsp+50h] [xbp+50h]

 v3 = 1;
 r2[0] = 10;
 Container_int_push((Container_int *const)r2, 20);
 Container_int_push((Container_int *const)r2, 30);
 v0 = r2[0];
 if ( v3 <= 0 )
 v0 = 0;
 return v3 + v0 + 3;
}


/* Function: _Z15test_cpp_lambdav @ 0x1CC0 */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z13test_cpp_rttiv @ 0x1CC8 */
int test_cpp_rtti()
{
 long long *v0; // x21
 void *v1; // x20
 void *v2; // x23
 char *v3; // x22
 int v4; // w24
 int v5; // w19
 int v6; // w19
 int v7; // w19

	v0 = (long long *)_Znwj(8u);
	*v0 = (long long)(void *)off_13B58;
	v1 = (void *)_Znwj(8u);
	v2 = (void *)*v0;
	*(unsigned long long *)v1 = (unsigned long long)(void *)off_13B80;
	v3 = *(char **)(*(unsigned long long *)((unsigned long long)v2 - 8) + 8LL);
 v4 = (unsigned char)*v3;
 if ( !strcmp(v3, "12RTTIDerivedA") )
 {
 v5 = 10;
 }
 else if ( v4 == 42 )
 {
 v5 = 0;
 }
 else if ( !strcmp(*(const char **)(*(unsigned long long *)(v2 - 8) + 8LL), "12RTTIDerivedA") )
 {
 v5 = 10;
 }
 else
 {
 v5 = 0;
 }
 v6 = v5 + 20;
 if ( __dynamic_cast(
 (void *)v0,
 (const struct __class_type_info *)&typeinfo_for_RTITIBase,
 (const struct __class_type_info *)&typeinfo_for_RTITIDerivedA,
 0) )
 {
 v6 += 100;
 }
 if ( __dynamic_cast(
 v1,
 (const struct __class_type_info *)&typeinfo_for_RTITIBase,
 (const struct __class_type_info *)&typeinfo_for_RTITIDerivedB,
 0) )
 {
 v6 += 200;
 }
 if ( v4 == 42 )
 ++v3;
 v7 = v6 + strlen(v3);
 ((void (*)(long long *))((void **)v0)[1])((long long *)v0);
 ((void (*)(long long *))((void **)v1)[1])((long long *)v1);
 return v7;
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1E24 */
int test_cpp_smart_ptr()
{
 long long v0; // x0
 struct unique_ptr ptr2; // [xsp+30h] [xbp+30h] BYREF
 struct unique_ptr arr; // [xsp+40h] [xbp+40h] BYREF

	*(unsigned long long *)&ptr2._M_t._M_t.gap0 = 0;
	ptr2._M_t._M_t._M_head_impl = (int *)_Znwj(4u);
 *ptr2._M_t._M_t._M_head_impl = 200;
 v0 = (long long)_Znaj(0x14u);
 *(unsigned long long *)&arr._M_t._M_t.gap0 = (unsigned long long)v0;
 *(unsigned long long *)v0 = 0x200000001LL;
 *(unsigned long long *)(v0 + 8) = 0x400000003LL;
 *(unsigned int *)(v0 + 16) = 5;
 unique_ptr_int_array_D2(&arr);
 unique_ptr_int_D2(&ptr2);
 return 703;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1EF8 */
int test_cpp_diamond_inheritance()
{
 int v0; // w19
 int v1; // w19
 unsigned char obj[44]; // [xsp+28h] [xbp+28h] BYREF

 *(unsigned long long *)obj = (unsigned long long)&off_13AC8;
 *(unsigned long long *)&obj[32] = (unsigned long long)&off_13B30;
 *(unsigned long long *)&obj[16] = (unsigned long long)&off_13AF8;
 *(unsigned int *)&obj[40] = 50;
 v0 = virtual_thunk_to_DiamondDerived_func((DiamondDerived *)&obj[32]);
 *(unsigned int *)&obj[40] = 100;
 v1 = v0 + virtual_thunk_to_DiamondDerived_func((DiamondDerived *)&obj[32]);
 DiamondDerived_D1((DiamondDerived *const)obj);
 return v1;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1FA0 */
void test_cpp_oo_features()
{
 int v0; // w0
 int v1; // w0
 int v2; // w0
 int v3; // w0
 int v4; // w0
 int v5; // w0
 int v6; // w0
 int v7; // w0
 int v8; // w0

 puts(asc_25B2);
 v0 = test_cpp_member_func();
 __printf_chk(1, unk_25D6, v0);
 v1 = test_cpp_constructor();
 __printf_chk(1, unk_25F4, v1);
 v2 = test_cpp_virtual_func();
 __printf_chk(1, unk_2610, v2);
 v3 = test_cpp_multiple_inheritance();
 __printf_chk(1, unk_262C, v3);
 v4 = test_cpp_diamond_inheritance();
 __printf_chk(1, unk_2648, v4);
 v5 = test_cpp_operator_overload();
 __printf_chk(1, unk_2665, v5);
 v6 = test_cpp_template_func();
 __printf_chk(1, unk_2681, v6);
 v7 = test_cpp_template_class();
 __printf_chk(1, unk_269D, v7);
 v8 = test_cpp_lambda();
 __printf_chk(1, unk_26B9, v8);
 test_cpp_exception();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x20D8 */
int Base_virtual_func(Base *const this, int x)
{
 return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x20E0 */
const char * Base_getName(const Base *const this)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x20EC */
void Base_D2(Base *const this)
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x20F0 */
int Derived_virtual_func(Derived *const this, int x)
{
 return x * this->multiplier;
}


/* Function: _ZNK7Derived7getNameEv @ 0x20FC */
const char * Derived_getName(const Derived *const this)
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x2108 */
int MultiDerived_funcA(MultiDerived *const this)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x2110 */
int MultiDerived_funcB(MultiDerived *const this)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x2118 */
long long non_virtual_thunk_to_MultiDerived_funcB(MultiDerived *this)
{
 return 40;
}


/* Function: _ZN11VirtualBase4funcEv @ 0x2120 */
int VirtualBase_func(VirtualBase *const this)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x2128 */
void VirtualBase_D2(VirtualBase *const this)
{
 ;
}


/* Function: _ZN7MiddleA4funcEv @ 0x212C */
int MiddleA_func(MiddleA *const this)
{
 return *(int *)((char *)&this->dataA + *((unsigned long long *)this->_vptr_MiddleA - 3)) + 150;
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x2144 */
long long virtual_thunk_to_MiddleA_func(MiddleA *this)
{
 return MiddleA_func((MiddleA *)((char *)this + *((unsigned long long *)this->_vptr_MiddleA - 3)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x2154 */
int MiddleB_func(MiddleB *const this)
{
 return *(int *)((char *)&this->dataB + *((unsigned long long *)this->_vptr_MiddleB - 3)) + 200;
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x216C */
long long virtual_thunk_to_MiddleB_func(MiddleB *this)
{
 return MiddleB_func((MiddleB *)((char *)this + *((unsigned long long *)this->_vptr_MiddleB - 3)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x217C */
int DiamondDerived_func(DiamondDerived *const this)
{
 return *(int *)((char *)&this->dataA + *((unsigned long long *)this->_vptr_MiddleA - 3)) + 250;
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x2194 */
long long virtual_thunk_to_DiamondDerived_func(DiamondDerived *this)
{
 return DiamondDerived_func((DiamondDerived *)((char *)this + *((unsigned long long *)this->_vptr_MiddleA - 3)));
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x21A4 */
long long non_virtual_thunk_to_DiamondDerived_func(DiamondDerived *this)
{
 return DiamondDerived_func((DiamondDerived *)((char *)this - 16));
}


/* Function: _ZN7MiddleAD1Ev @ 0x21AC */
void MiddleA_D1(MiddleA *const this)
{
 this->_vptr_MiddleA = (void **)&off_138E0;
 *((unsigned long long *)&this->dataA + 1) = (unsigned long long)&off_13918;
}


/* Function: _ZTv0_n32_N7MiddleAD1Ev @ 0x21C8 */
void virtual_thunk_to_MiddleA_d1(MiddleA *this)
{
 unsigned long long *v1; // x3

	v1 = (unsigned long long *)((char *)&this->_vptr_MiddleA + *((unsigned long long *)this->_vptr_MiddleA - 4));
 *v1 = (unsigned long long)&off_138E0;
 v1[2] = (unsigned long long)&off_13918;
}


/* Function: _ZN7MiddleBD1Ev @ 0x21F0 */
void MiddleB_D1(MiddleB *const this)
{
 this->_vptr_MiddleB = (void **)&off_13958;
 *((unsigned long long *)&this->dataB + 1) = (unsigned long long)&off_13990;
}


/* Function: _ZTv0_n32_N7MiddleBD1Ev @ 0x220C */
void virtual_thunk_to_MiddleB_d1(MiddleB *this)
{
 unsigned long long *v1; // x3

	v1 = (unsigned long long *)((char *)&this->_vptr_MiddleB + *((unsigned long long *)this->_vptr_MiddleB - 4));
 *v1 = (unsigned long long)&off_13958;
 v1[2] = (unsigned long long)&off_13990;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x2234 */
int RTTIDerivedA_getType(const RTTIDerivedA *const this)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x223C */
int RTTIDerivedB_getType(const RTTIDerivedB *const this)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x2244 */
void RTTIDerivedB_D2(RTTIDerivedB *const this)
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x2248 */
void RTTIDerivedA_D2(RTTIDerivedA *const this)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x224C */
void MultiDerived_D2(MultiDerived *const this)
{
 ;
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x2250 */
void non_virtual_thunk_to_MultiDerived_d1(MultiDerived *this)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x2254 */
void Derived_D2(Derived *const this)
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x2258 */
void Base_D0(Base *const this)
{
 _ZdlPv(this, 8u);
}


/* Function: _ZN7DerivedD0Ev @ 0x2260 */
void Derived_D0(Derived *const this)
{
 _ZdlPv(this, 0x10u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x2268 */
void MultiDerived_D0(MultiDerived *const this)
{
 _ZdlPv(this, 0x20u);
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x2270 */
void non_virtual_thunk_to_MultiDerived_d0(MultiDerived *this)
{
 MultiDerived_D0((MultiDerived *)((char *)this - 16));
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x2278 */
void VirtualBase_D0(VirtualBase *const this)
{
 _ZdlPv(this, 0x10u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x2280 */
void RTTIDerivedB_D0(RTTIDerivedB *const this)
{
 _ZdlPv(this, 8u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x2288 */
void RTTIDerivedA_D0(RTTIDerivedA *const this)
{
 _ZdlPv(this, 8u);
}


/* Function: _ZN7MiddleAD0Ev @ 0x2290 */
void MiddleA_D0(MiddleA *const this)
{
	this->_vptr_MiddleA = (void **)&off_138E0;
	*((unsigned long long *)&this->dataA + 1) = (unsigned long long)&off_13918;
 _ZdlPv(this, 0x20u);
}


/* Function: _ZTv0_n32_N7MiddleAD0Ev @ 0x22B0 */
void virtual_thunk_to_MiddleA_d0(MiddleA *this)
{
 MiddleA_D0((MiddleA *)((char *)this + *((unsigned long long *)this->_vptr_MiddleA - 4)));
}


/* Function: _ZN7MiddleBD0Ev @ 0x22C0 */
void MiddleB_D0(MiddleB *const this)
{
	this->_vptr_MiddleB = (void **)&off_13958;
	*((unsigned long long *)&this->dataB + 1) = (unsigned long long)&off_13990;
 _ZdlPv(this, 0x20u);
}


/* Function: _ZTv0_n32_N7MiddleBD0Ev @ 0x22E0 */
void virtual_thunk_to_MiddleB_d0(MiddleB *this)
{
 MiddleB_D0((MiddleB *)((char *)this + *((unsigned long long *)this->_vptr_MiddleB - 4)));
}


/* Function: _ZN7MiddleAD4Ev @ 0x22F0 */
void MiddleA_D4(MiddleA *const this, const int __in_chrg, const void **const __vtt_parm)
{
 void **v3;
 void **v4;
 long long v5;

 if ( __in_chrg )
 v3 = (void **)&off_138E0;
 else
 v3 = (void **)__vtt_parm;
 this->_vptr_MiddleA = v3;
 if ( __in_chrg )
 {
 v5 = 16;
 v4 = (void **)&off_13918;
 }
 else
 {
 v4 = (void **)__vtt_parm[1];
 v5 = (long long)*(v3 - 3);
 }
 *(void ***)((char *)&this->_vptr_MiddleA + v5) = v4;
}


/* Function: _ZN7MiddleAD2Ev @ 0x232C */
void MiddleA_D2(MiddleA *const this, const void **const __vtt_parm)
{
 MiddleA_D4(this, 0, __vtt_parm);
}


/* Function: _ZN7MiddleBD4Ev @ 0x2338 */
void MiddleB_D4(MiddleB *const this, const int __in_chrg, const void **const __vtt_parm)
{
 void **v3;
 void **v4;
 long long v5;

 if ( __in_chrg )
 v3 = (void **)&off_13958;
 else
 v3 = (void **)__vtt_parm;
 this->_vptr_MiddleB = v3;
 if ( __in_chrg )
 {
 v5 = 16;
 v4 = (void **)&off_13990;
 }
 else
 {
 v4 = (void **)__vtt_parm[1];
 v5 = (long long)*(v3 - 3);
 }
 *(void ***)((char *)&this->_vptr_MiddleB + v5) = v4;
}


/* Function: _ZN7MiddleBD2Ev @ 0x2374 */
void MiddleB_D2(MiddleB *const this, const void **const __vtt_parm)
{
 MiddleB_D4(this, 0, __vtt_parm);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x2380 */
int template_max_int(int a, int b)
{
 if ( a < b )
 return b;
 return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x238C */
double template_max_double(double a, double b)
{
 if ( a <= b )
 return b;
 return a;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x2398 */
void template_swap_int(int *a, int *b)
{
 int v2; // w2

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x23AC */
void Container_int_Container(Container_int *const this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x23B4 */
void Container_int_push(Container_int *const this, int value)
{
 int size; // w2

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x23D0 */
int Container_int_get(const Container_int *const this, int idx)
{
 if ( idx < 0 || this->size <= idx )
 return 0;
 else
 return this->data[idx];
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x23F0 */
int Container_int_getSize(const Container_int *const this)
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x23F8 */
void Container_double_Container(Container_double *const this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x2400 */
void Container_double_push(Container_double *const this, double value)
{
 int size; // w1

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x241C */
double Container_double_get(const Container_double *const this, int idx)
{
 if ( idx < 0 || this->size <= idx )
 return 0.0;
 else
 return this->data[idx];
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x243C */
int Container_double_getSize(const Container_double *const this)
{
 return this->size;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x2444 */
void unique_ptr_int_D2(struct unique_ptr *const this)
{
 void *v1; // x0

 v1 = this->_M_t._M_t._M_head_impl;
 if ( v1 )
 _ZdlPv(v1, 4u);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x2458 */
void unique_ptr_int_array_D2(struct unique_ptr *const this)
{
 void *v1; // x0

 v1 = this->_M_t._M_t._M_head_impl;
 if ( v1 )
 _ZdaPv(v1);
}


/* Function: _ZN14DiamondDerivedD4Ev @ 0x2468 */
void DiamondDerived_D4(
 DiamondDerived *const this,
 const int __in_chrg,
 const void **const __vtt_parm)
{
 void **v6;
 long long v7;
 void **v8;
 void **v9;
 const void **v10;
 const void **v11;
 const void **v12;
 const void **v13;

 if ( __in_chrg )
 v6 = (void **)&off_13AC8;
 else
 v6 = (void **)(void *)__vtt_parm;
 this->_vptr_MiddleA = v6;
 if ( __in_chrg )
 {
 v7 = 32;
 v8 = (void **)&off_13B30;
 }
 else
 {
 v7 = (long long)*(v6 - 3);
 v8 = (void **)__vtt_parm[5];
 }
 *(void ***)((char *)&this->_vptr_MiddleA + v7) = v8;
 if ( __in_chrg )
 v9 = (void **)(void *)&off_13AF8;
 else
 v9 = (void **)__vtt_parm[6];
 v10 = __vtt_parm + 3;
 v11 = __vtt_parm + 1;
 *((unsigned long long *)&this->dataA + 1) = (unsigned long long)v9;
 v12 = (const void **)(void *)off_13A90;
 if ( !__in_chrg )
 v12 = v10;
 MiddleB_D4((MiddleB *const)(&this->dataA + 2), __in_chrg ? 2 : 0, v12);
 v13 = (const void **)off_13A80;
 if ( !__in_chrg )
 v13 = v11;
 MiddleA_D4((MiddleA *const)this, __in_chrg ? 2 : 0, v13);
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x2518 */
void DiamondDerived_D1(DiamondDerived *const this)
{
 DiamondDerived_D4(this, 2, 0);
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x2524 */
void non_virtual_thunk_to_DiamondDerived_d1(DiamondDerived *this)
{
 DiamondDerived_D1((DiamondDerived *)((char *)this - 16));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x252C */
void virtual_thunk_to_DiamondDerived_d1(DiamondDerived *this)
{
 DiamondDerived_D1((DiamondDerived *)((char *)this + *((unsigned long long *)this->_vptr_MiddleA - 4)));
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x253C */
void DiamondDerived_D0(DiamondDerived *const this)
{
 DiamondDerived_D1(this);
 _ZdlPv(this, 0x30u);
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x2564 */
void non_virtual_thunk_to_DiamondDerived_d0(DiamondDerived *this)
{
 DiamondDerived_D0((DiamondDerived *)((char *)this - 16));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x256C */
void virtual_thunk_to_DiamondDerived_d0(DiamondDerived *this)
{
 DiamondDerived_D0((DiamondDerived *)((char *)this + (ptrdiff_t)*((unsigned long long *)this->_vptr_MiddleA - 4)));
}


/* Function: _ZN14DiamondDerivedD2Ev @ 0x257C */
void DiamondDerived_D2(DiamondDerived *const this, const void **const __vtt_parm)
{
 DiamondDerived_D4(this, 0, __vtt_parm);
}


/* Function: .term_proc @ 0x2588 */
void term_proc()
{
 ;
}


/* FAILED to decompile: _Znam @ 0x14090 */

/* FAILED to decompile: puts @ 0x140A0 */

/* FAILED to decompile: strlen @ 0x140A8 */

/* FAILED to decompile: __stack_chk_fail @ 0x140B0 */

/* FAILED to decompile: __cxa_begin_catch @ 0x140B8 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x140C8 */

/* FAILED to decompile: __cxa_finalize @ 0x140D0 */

/* FAILED to decompile: __libc_start_main @ 0x140E0 */

/* FAILED to decompile: _Znwm @ 0x140E8 */

/* FAILED to decompile: _ZdlPvm @ 0x140F0 */

/* FAILED to decompile: strncpy @ 0x140F8 */

/* FAILED to decompile: __dynamic_cast @ 0x14100 */

/* FAILED to decompile: __cxa_atexit @ 0x14108 */

/* FAILED to decompile: _ZdaPv @ 0x14110 */

/* FAILED to decompile: strcmp @ 0x14120 */

/* FAILED to decompile: __cxa_rethrow @ 0x14128 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x14130 */

/* FAILED to decompile: abort @ 0x14138 */

/* FAILED to decompile: __cxa_end_catch @ 0x14140 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x14148 */

/* FAILED to decompile: __cxa_throw @ 0x14150 */

/* FAILED to decompile: _Unwind_Resume @ 0x14160 */

/* FAILED to decompile: __printf_chk @ 0x14168 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x14170 */

/* FAILED to decompile: __gmon_start__ @ 0x14180 */

/* Total functions decompiled: 89, failed: 25 */
