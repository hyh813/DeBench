/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-1/5-1_gcc_O3_g
 * Processor: arm
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Type definitions for C++ classes */
typedef struct SimpleClass {
    char name[32];
} SimpleClass;

typedef struct Base {
    void **_vptr;
} Base;

typedef struct Derived {
    void **_vptr;
    int multiplier;
} Derived;

typedef struct MultiDerived {
    void **_vptr;
    Base BaseA;
    Base BaseB;
    int dataA;
    int dataB;
} MultiDerived;

typedef struct MiddleA {
    void **_vptr;
    int dataA;
} MiddleA;

typedef struct MiddleB {
    void **_vptr;
    int dataB;
} MiddleB;

typedef struct DiamondDerived {
    void **_vptr;
    MiddleA middleA;
    MiddleB middleB;
    int dataA;
    int dataB;
} DiamondDerived;

typedef struct RTTIBase {
    void **_vptr;
} RTTIBase;

typedef struct RTTIDerivedA {
    void **_vptr;
} RTTIDerivedA;

typedef struct RTTIDerivedB {
    void **_vptr;
} RTTIDerivedB;

typedef struct LifecycleClass {
    int instance_count;
} LifecycleClass;

typedef struct Container_int {
    int size;
    int data[10];
} Container_int;

typedef struct Container_double {
    int size;
    double data[10];
} Container_double;

/* Global variables */
int LifecycleClass_instance_count = 0;

/* Type info structures */
struct type_info {
    const char *name;
};

struct __class_type_info {
    struct type_info base;
};

/* Define type info structures */
static struct __class_type_info typeinfo_for_RTTIBase = { { "8RTTIBase" } };
static struct __class_type_info typeinfo_for_RTTIDerivedA = { { "12RTTIDerivedA" } };
static struct __class_type_info typeinfo_for_RTTIDerivedB = { { "12RTTIDerivedB" } };

/* Global offset variables - point to typeinfo structures */
long long off_12C28 = (long long)&typeinfo_for_RTTIDerivedA;
long long off_12C50 = (long long)&typeinfo_for_RTTIDerivedB;
const char *asc_1BA0 = "Testing C++ OO features";
const char *unk_1BC8 = "strlen result: %d\n";
const char *unk_1BE8 = "LifecycleClass: %d\n";
const char *unk_1C08 = "virtual_func: %d\n";
const char *unk_1C28 = "multiple_inheritance: %d\n";
const char *unk_1C48 = "diamond_inheritance: %d\n";
const char *unk_1C68 = "operator_overload: %d\n";
const char *unk_1C88 = "template_func: %d\n";
const char *unk_1CA8 = "template_class: %d\n";
const char *unk_1CC8 = "lambda: %d\n";


/* Template function implementations */
int template_max_int(int a, int b) {
    if (a < b) return b;
    return a;
}

double template_max_double(double a, double b) {
    if (a <= b) return b;
    return a;
}

void template_swap_int(int *a, int *b) {
    int v2 = *a;
    *a = *b;
    *b = v2;
}

/* External declarations */
extern int printf(const char *format, ...);
extern int puts(const char *s);
extern size_t strlen(const char *s);
extern char *strncpy(char *dest, const char *src, size_t n);
extern int strcmp(const char *s1, const char *s2);

/* __dynamic_cast - stub implementation */
int __dynamic_cast(void *obj, const struct __class_type_info *from, const struct __class_type_info *to, int flags)
{
 /* Simplified RTTI check - return non-zero if types match */
 if (from == to) return 1;
 return 0;
}

/* C++ operator new/delete - stub implementations */
void *operator_new(unsigned long size)
{
 return malloc(size);
}

void operator_delete(void *ptr, unsigned long size)
{
 free(ptr);
}

/* C++ mangled name aliases for linker */
void *_Znwm(unsigned long size) { return operator_new(size); }
void _ZdlPvm(void *ptr, unsigned long size) { operator_delete(ptr, size); }

/* Forward declarations */
void test_cpp_oo_features();
void test_cpp_exception();
int test_cpp_member_func();
int test_cpp_constructor();
int call_virtual_func(Base *obj, int x);
int test_cpp_virtual_func();
int test_cpp_multiple_inheritance();
int test_cpp_diamond_inheritance();
int test_cpp_operator_overload();
int test_cpp_template_func();
int test_cpp_template_class();
int test_cpp_lambda();
int test_cpp_smart_ptr();
int test_cpp_rtti();
long long call_weak_fn();
void JUMPOUT(int x);

/* C++ runtime functions - stub implementations for linking */

/* JUMPOUT stub implementation */
void JUMPOUT(int x) { }

/* C++ exception handling stubs */
void __cxa_begin_catch(void *exc) { }
void *__cxa_allocate_exception(unsigned long size) { return malloc(size); }
void __cxa_finalize(void *d) { }
void __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle) { }
void __cxa_end_catch(void) { }
void __cxa_rethrow(void) { }
void __cxa_throw(void *exc, void *tinfo, void *dest) { }

/* C++ personality function stub */
int __gxx_personality_v0(int version, int actions, long long exception_class, void *ue_header, void *context) { return 0; }

/* C++ iostream initialization stubs */
void _ZNSt8ios_base4InitC1Ev(void *this) { }
void _ZNSt8ios_base4InitD1Ev(void *this) { }

/* Unwind stub */
void _Unwind_Resume(void *exc) { }

/* Stack check stub */
void __stack_chk_fail(void) { }

/* C++ operator new/delete - already defined above */

/* Function: .init_proc @ 0xE90 */
void init_proc()
{
 call_weak_fn();
}


/* Function: sub_EB0 @ 0xEB0 */
void sub_EB0()
{
 JUMPOUT(0);
}


/* Function: _Z18test_cpp_exceptionv @ 0x1040 */
void test_cpp_exception()
{
 /* Exception handling stub - removed for C compatibility */
}


/* Function: main @ 0x1120 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
 return 0;
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x1140 */
/* Removed - C++ global constructor stub not needed for C */



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn - stub implementation */
long long call_weak_fn()
{
 return 0;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x12A0 */
int test_cpp_member_func()
{
 char *v0; // x0
 SimpleClass obj; // [xsp+10h] [xbp+10h] BYREF

 v0 = strncpy(obj.name, "Test", 0x1Fu);
 obj.name[31] = 0;
 return strlen(v0) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1310 */
int test_cpp_constructor()
{
 return LifecycleClass_instance_count + 21 + 1000 * LifecycleClass_instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x1330 */
int call_virtual_func(Base *obj, int x)
{
 return ((int (*)(Base *, int))obj->_vptr[0])(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1340 */
int test_cpp_virtual_func()
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1350 */
int test_cpp_multiple_inheritance()
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1360 */
int test_cpp_diamond_inheritance()
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1370 */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1380 */
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


/* Function: _Z23test_cpp_template_classv @ 0x1420 */
int test_cpp_template_class()
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x1430 */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1440 */
int test_cpp_smart_ptr()
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x1450 */
int test_cpp_rtti()
{
 long long *v0; // x21
 void *v1; // x20
 long long v2; // x24
 const char *v3; // x23
 int v4; // w25
 int v5; // w22
 int v6; // w19
 const char *v7; // x0
 int v8; // w19

 v0 = (long long *)operator_new(8u);
 *v0 = (long long)off_12C28;
 v1 = (void *)operator_new(8u);
 v2 = *v0;
 v3 = *(const char **)(*(unsigned long long *)(*v0 - 8) + 8LL);
 *(unsigned long long *)v1 = off_12C50;
 if ( v3 == "12RTTIDerivedA" )
 {
 v4 = *(unsigned char *)v3;
 v5 = 30;
 }
 else
 {
 v4 = *(unsigned char *)v3;
 if ( v4 == 42 )
 {
 v5 = 20;
 }
 else if ( !strcmp(v3, "12RTTIDerivedA") )
 {
 v5 = 30;
 }
 else
 {
 v5 = 20;
 }
 }
 v6 = v5;
 if ( __dynamic_cast(
 v0,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedA,
 0) )
 {
 v6 = v5 + 100;
 }
 if ( __dynamic_cast(
 v1,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedB,
 0) )
 {
 v6 += 200;
 }
 if ( v4 == 42 )
 v7 = v3 + 1;
 else
 v7 = v3;
 v8 = v6 + strlen(v7);
/* Destructor calls - simplified for C compatibility */
 /* v0 and v1 would be deleted here in C++ */
 return v8;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x15F0 */
void test_cpp_oo_features()
{
 int v0; // w0
 int v1; // w19
 double v2; // d8
 int a; // [xsp+28h] [xbp+28h] BYREF
 int b; // [xsp+2Ch] [xbp+2Ch] BYREF
 char v5[36]; // [xsp+34h] [xbp+34h] BYREF

 puts(asc_1BA0);
 strncpy(v5, "Test", 0x1Fu);
 v5[31] = 0;
 v0 = strlen(v5);
 printf(unk_1BC8, (unsigned int)(v0 + 4700));
 printf(
 unk_1BE8,
 (unsigned int)(LifecycleClass_instance_count + 21 + 1000 * LifecycleClass_instance_count));
 printf(unk_1C08, 42);
 printf(unk_1C28, 71);
 printf(unk_1C48, 650);
 printf(unk_1C68, 22);
 v1 = template_max_int(3, 7);
 v2 = template_max_double(2.5, 1.5);
 a = 10;
 b = 20;
 template_swap_int(&a, &b);
 printf(unk_1C88, (unsigned int)((int)v2 + v1 + a + b));
 printf(unk_1CA8, 16);
 printf(unk_1CC8, 85);
 test_cpp_exception();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x17D0 */
int Base_virtual_func(Base *const this, int x)
{
 return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x17E0 */
const char * Base_getName(const Base *const this)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x17F0 */
void Base_D2(Base *const this)
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1800 */
int Derived_virtual_func(Derived *const this, int x)
{
 return x * this->multiplier;
}


/* Function: _ZNK7Derived7getNameEv @ 0x1810 */
const char * Derived_getName(const Derived *const this)
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x1820 */
int MultiDerived_funcA(MultiDerived *const this)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x1830 */
int MultiDerived_funcB(MultiDerived *const this)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x1840 */
long long thunk_MultiDerived_funcB(MultiDerived *this)
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x1850 */
int MiddleA_func(MiddleA *const this)
{
 return *(int *)((char *)&this->dataA + *((unsigned long long *)this->_vptr - 3)) + 150;
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x1870 */
long long thunk_MiddleA_func(MiddleA *this)
{
 return (unsigned int)(*(int *)((char *)&this->dataA
 + *((unsigned long long *)this->_vptr - 3)
 + *(*(unsigned long long **)((char *)&this->_vptr + *((unsigned long long *)this->_vptr - 3)) - 3))
 + 150);
}


/* Function: _ZN7MiddleB4funcEv @ 0x18A0 */
int MiddleB_func(MiddleB *const this)
{
 return *(int *)((char *)&this->dataB + *((unsigned long long *)this->_vptr - 3)) + 200;
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x18C0 */
long long thunk_MiddleB_func(MiddleB *this)
{
 return (unsigned int)(*(int *)((char *)&this->dataB
 + *((unsigned long long *)this->_vptr - 3)
 + *(*(unsigned long long **)((char *)&this->_vptr + *((unsigned long long *)this->_vptr - 3)) - 3))
 + 200);
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x18F0 */
int DiamondDerived_func(DiamondDerived *const this)
{
 return *(int *)((char *)&this->dataA + *((unsigned long long *)this->_vptr - 3)) + 250;
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x1910 */
long long thunk_DiamondDerived_func(DiamondDerived *this)
{
 return (unsigned int)(*(int *)((char *)&this->dataA
 + *((unsigned long long *)this->_vptr - 3)
 + *(*(unsigned long long **)((char *)&this->_vptr + *((unsigned long long *)this->_vptr - 3)) - 3))
 + 250);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x1934 */
long long thunk_DiamondDerived_func2(DiamondDerived *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*((unsigned long long *)&this[-1].dataB + 1) - 24LL) - 8) + 250);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1950 */
int RTTIDerivedA_getType(const RTTIDerivedA *const this)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1960 */
int RTTIDerivedB_getType(const RTTIDerivedB *const this)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x1970 */
void RTTIDerivedB_D2(RTTIDerivedB *const this)
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x1980 */
void RTTIDerivedA_D2(RTTIDerivedA *const this)
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x1990 */
void DiamondDerived_D1(DiamondDerived *const this)
{
 ;
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x1994 */
void virtual_thunk_DiamondDerived_D1(DiamondDerived *this)
{
 ;
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x19A0 */
void non_virtual_thunk_DiamondDerived_D1(DiamondDerived *this)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x19B0 */
void MultiDerived_D2(MultiDerived *const this)
{
 ;
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x19B4 */
void non_virtual_thunk_MultiDerived_D1(MultiDerived *this)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x19C0 */
void Derived_D2(Derived *const this)
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x19D0 */
void Base_D0(Base *const this)
{
 operator_delete(this, 8u);
}


/* Function: _ZN7DerivedD0Ev @ 0x19E0 */
void Derived_D0(Derived *const this)
{
 operator_delete(this, 0x10u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x19F0 */
void MultiDerived_D0(MultiDerived *const this)
{
 operator_delete(this, 0x20u);
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x1A00 */
void non_virtual_thunk_MultiDerived_D0(MultiDerived *this)
{
 operator_delete(&this[-1].BaseB, 0x20u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1A10 */
void RTTIDerivedB_D0(RTTIDerivedB *const this)
{
 operator_delete(this, 8u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1A20 */
void RTTIDerivedA_D0(RTTIDerivedA *const this)
{
 operator_delete(this, 8u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x1A30 */
void DiamondDerived_D0(DiamondDerived *const this)
{
 operator_delete(this, 0x30u);
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x1A40 */
void virtual_thunk_DiamondDerived_D0(DiamondDerived *this)
{
 operator_delete((char *)this + *((unsigned long long *)this->_vptr - 4), 0x30u);
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x1A54 */
void non_virtual_thunk_DiamondDerived_D0(DiamondDerived *this)
{
 operator_delete(&this[-1].dataB + 2, 0x30u);
}





/* Function: _ZN9ContainerIiEC2Ev @ 0x1AA0 */
void Container_int_Constructor(Container_int *const this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1AB0 */
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


/* Function: _ZNK9ContainerIiE3getEi @ 0x1AD0 */
int Container_int_get(const Container_int *const this, int idx)
{
 int result; // w0

 result = 0;
 if ( (idx & 0x80000000) == 0 )
 {
 result = 0;
 if ( this->size > idx )
 return this->data[idx];
 }
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1B00 */
int Container_int_getSize(const Container_int *const this)
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1B10 */
void Container_double_Constructor(Container_double *const this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1B20 */
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


/* Function: _ZNK9ContainerIdE3getEi @ 0x1B40 */
double Container_double_get(const Container_double *const this, int idx)
{
 double result; // d0

 result = 0.0;
 if ( (idx & 0x80000000) == 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1B60 */
int Container_double_getSize(const Container_double *const this)
{
 return this->size;
}


/* Function: .term_proc @ 0x1B68 */
void term_proc()
{
 ;
}


/* FAILED to decompile: puts @ 0x130A0 */

/* FAILED to decompile: strlen @ 0x130A8 */

/* FAILED to decompile: __stack_chk_fail @ 0x130B0 */

/* FAILED to decompile: __cxa_begin_catch @ 0x130B8 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x130C8 */

/* FAILED to decompile: __cxa_finalize @ 0x130D0 */

/* FAILED to decompile: __libc_start_main @ 0x130E0 */

/* FAILED to decompile: _Znwm @ 0x130E8 */

/* FAILED to decompile: _ZdlPvm @ 0x130F0 */

/* FAILED to decompile: strncpy @ 0x130F8 */

/* FAILED to decompile: __dynamic_cast @ 0x13100 */

/* FAILED to decompile: __cxa_atexit @ 0x13108 */

/* FAILED to decompile: strcmp @ 0x13118 */

/* FAILED to decompile: __cxa_rethrow @ 0x13120 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x13128 */

/* FAILED to decompile: abort @ 0x13130 */

/* FAILED to decompile: __cxa_end_catch @ 0x13138 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x13140 */

/* FAILED to decompile: __cxa_throw @ 0x13148 */

/* FAILED to decompile: _Unwind_Resume @ 0x13150 */

/* FAILED to decompile: __printf_chk @ 0x13158 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x13160 */

/* FAILED to decompile: __gmon_start__ @ 0x13170 */

/* Total functions decompiled: 70, failed: 23 */
