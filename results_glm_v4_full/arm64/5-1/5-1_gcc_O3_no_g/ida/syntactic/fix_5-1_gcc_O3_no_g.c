/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-1/5-1_gcc_O3_no_g
 * Processor: arm
 */

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>

/* Forward declarations */
struct type_info;
struct __class_type_info {
    const char *name;
};
struct _Unwind_Exception;
struct _Unwind_Context;

/* C++ runtime function declarations */
void *__cxa_allocate_exception(unsigned int size);
void __cxa_throw(void *exception, struct type_info *tinfo, void (*dest)(void *));
void test_cpp_oo_features(void);

/* C++ runtime function implementations */
void *__cxa_allocate_exception(unsigned int size) {
    extern void *malloc(unsigned int);
    return malloc(size);
}

void __cxa_throw(void *exception, struct type_info *tinfo, void (*dest)(void *)) {
    extern void abort(void);
    abort();  // Stub - would normally unwind stack
}

/* std::ios_base::Init function declarations */
void std_ios_base_Init_Init(void *init);
void std_ios_base_Init_dtor(void *init);

/* std::ios_base::Init function implementations */
void std_ios_base_Init_Init(void *init) {
    // Stub - does nothing
}

void std_ios_base_Init_dtor(void *init) {
    // Stub - does nothing
}

/* Operator new/delete function declarations (mangled names for C compilation) */
void *_Znwj(unsigned int size);
void _ZdlPv(void *ptr);

/* Operator new/delete implementations */
void *_Znwj(unsigned int size) {
    extern void *malloc(unsigned int);
    return malloc(size);
}

void _ZdlPv(void *ptr) {
    extern void free(void *ptr);
    free(ptr);
}

/* C++ runtime function declarations */
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
void *__dynamic_cast(void *src_ptr, const struct __class_type_info *src_type, const struct __class_type_info *dst_type, int src2dst_offset);
int __gxx_personality_v0(int version, int actions, unsigned long long exception_class, struct _Unwind_Exception *exception_info, struct _Unwind_Context *context);
void _Unwind_Resume(struct _Unwind_Exception *exception_info);
void __stack_chk_fail(void);

/* C++ runtime function implementations */
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle) {
    return 0;  // Stub - would normally register destructor
}

void *__dynamic_cast(void *src_ptr, const struct __class_type_info *src_type, const struct __class_type_info *dst_type, int src2dst_offset) {
    return src_ptr;  // Simple stub - returns src if types match in real implementation
}

/* Exception handling personality function */
int __gxx_personality_v0(int version, int actions, unsigned long long exception_class, struct _Unwind_Exception *exception_info, struct _Unwind_Context *context) {
    extern void abort(void);
    abort();  // Stub - would normally handle exception unwinding
    return 0;
}

/* Exception unwinding resume function */
void _Unwind_Resume(struct _Unwind_Exception *exception_info) {
    extern void abort(void);
    abort();  // Stub - would normally resume unwinding
}

/* Stack canary failure function */
void __stack_chk_fail(void) {
    extern void abort(void);
    abort();  // Stub - called when stack corruption is detected
}

/* Forward declarations for global C++ runtime objects */
extern void *_dso_handle;
extern struct std___ioinit std___ioinit;

/* Type info for int */
struct type_info {
    const char *name;
};
extern const struct type_info type_info_for_int;





/* C++ template function declarations (mangled names for C compilation) */
long long template_max_int_(long long a, int b);
double template_max_double_(double a, double b);
int* template_swap_int_(int *a, int *b);

/* Function: .init_proc @ 0xE90 */
long long call_weak_fn(void) {
    return 0;
}

long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_EB0 @ 0xEB0 */
void sub_EB0()
{
 return;
}

/* Function: _Z18test_cpp_exceptionv @ 0x1040 */
void test_cpp_exception(void)
{
 unsigned int *exception; // x0

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&type_info_for_int, 0);
}


/* Function: main @ 0x1120 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
 return 0;
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x1140 */
long long GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 std_ios_base_Init_Init(&std___ioinit);
 return __cxa_atexit((void (*)(void *))std_ios_base_Init_dtor, &std___ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */



/* C library function declarations */
int puts(const char *s);
int printf(const char *format, ...);
int vprintf(const char *format, va_list ap);
int __printf_chk(int flag, const char *format, ...);
int strcmp(const char *s1, const char *s2);
char *strncpy(char *dest, const char *src, size_t n);
size_t strlen(const char *s);
int vsnprintf(char *str, size_t size, const char *format, va_list ap);

/* C library function implementations */
int puts(const char *s) {
    extern int printf(const char *format, ...);
    return printf("%s\n", s);
}

int __printf_chk(int flag, const char *format, ...) {
    extern int printf(const char *format, ...);
    va_list args;
    va_start(args, format);
    int ret = vprintf(format, args);
    va_end(args);
    return ret;
}

int vprintf(const char *format, va_list ap) {
    char buffer[1024];
    vsnprintf(buffer, sizeof(buffer), format, ap);
    extern int puts(const char *s);
    return puts(buffer);
}

/* Global variables for C++ runtime */
void *_dso_handle;
struct std___ioinit {
    char data[32];
} std___ioinit;

/* Type info definitions for C++ runtime */
const struct type_info type_info_for_int = { "int" };
const struct __class_type_info typeinfo_for_RTTIBase = { "9RTTIBase" };
const struct __class_type_info typeinfo_for_RTTIDerivedA = { "12RTTIDerivedA" };
const struct __class_type_info typeinfo_for_RTTIDerivedB = { "12RTTIDerivedB" };

/* Vtable pointer definitions */
static const void *vtable_RTTIBase[2] = { NULL, NULL };
static const void *vtable_RTTIDerivedA[2] = { NULL, NULL };
static const void *vtable_RTTIDerivedB[2] = { NULL, NULL };
const void *off_12C28 = vtable_RTTIBase;
const void *off_12C50 = vtable_RTTIDerivedA;
const void *off_12C78 = vtable_RTTIDerivedB;

/* String constant definitions */
const char asc_1BA0[] = "Testing C++ OO features";
const char unk_1BC8[] = "";
const char unk_1BE8[] = "";
const char unk_1C08[] = "";
const char unk_1C28[] = "";
const char unk_1C48[] = "";
const char unk_1C68[] = "";
const char unk_1C88[] = "";
const char unk_1CA8[] = "";
const char unk_1CC8[] = "";


/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */

/* LifecycleClass definition */
struct LifecycleClass {
    int data;
};

/* Static member definition for LifecycleClass */
int LifecycleClass_instance_count = 0;

/* Forward declarations for classes used in the code */
struct Base;
struct Derived;
struct MultiDerived;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct Container;

/* Type aliases for C++ type names used in decompiled code */
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;

/* Class type definitions for decompiled code */
struct Base {
    const void **vtable;  // vptr
};

struct Derived {
    const void **vtable;  // vptr
    unsigned int data1;   // additional member
    unsigned int data2;   // additional member
};

struct RTTIBase {
    const void **vtable;  // vptr
};

struct RTTIDerivedA {
    const void **vtable;  // vptr
};

struct RTTIDerivedB {
    const void **vtable;  // vptr
};

struct MultiDerived {
    const void **vtable;
    const void **vtable2;
    unsigned int data1;
    unsigned int data2;
};

struct MiddleA {
    const void **vtable;
    const void **vtable2;
    unsigned int data;
};

struct MiddleB {
    const void **vtable;
    const void **vtable2;
    unsigned int data;
};

struct DiamondDerived {
    const void **vtable;
    const void **vtable2;
    unsigned int data;
};

struct Container_int {
    unsigned int size;
    int data[10];
};

struct Container_double {
    unsigned int size;
    double data[10];
};

/* Function: _Z20test_cpp_member_funcv @ 0x12A0 */
long long test_cpp_member_func(void)
{
 char *v0; // x0
 char dest[36]; // [xsp+14h] [xbp+14h] BYREF

 v0 = strncpy(dest, "Test", 0x1Fu);
 dest[31] = 0;
 return (unsigned int)strlen(v0) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1310 */
long long test_cpp_constructor(void)
{
 return (unsigned int)(LifecycleClass_instance_count + 21 + 1000 * LifecycleClass_instance_count);
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x1330 */
long long call_virtual_func(long long ( ***a1)(unsigned long long))
{
 return (**a1)((unsigned long long)a1);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1340 */
long long test_cpp_virtual_func(void)
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1350 */
long long test_cpp_multiple_inheritance(void)
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1360 */
long long test_cpp_diamond_inheritance(void)
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1370 */
long long test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1380 */
long long test_cpp_template_func(void)
{
 int v0; // w0
 int v1; // w19
 double v2; // d8
 int v4; // [xsp+20h] [xbp+20h] BYREF
 int v5; // [xsp+24h] [xbp+24h] BYREF

 v0 = (int)template_max_int_(3, 7);
 v1 = v0;
 v2 = template_max_double_(2.5, 1.5);
 v4 = 10;
 v5 = 20;
 template_swap_int_(&v4, &v5);
 return (unsigned int)((int)v2 + v1 + v4 + v5);
}


/* Function: _Z23test_cpp_template_classv @ 0x1420 */
long long test_cpp_template_class(void)
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x1430 */
long long test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1440 */
long long test_cpp_smart_ptr(void)
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x1450 */
long long test_cpp_rtti(void)
{
 long long *v0; // x21
 void *v1; // x20
 long long v2; // x24
 const char *v3; // x23
 int v4; // w25
 int v5; // w22
 int v6; // w19
 const char *v7; // x0
 unsigned int v8; // w19

 v0 = (long long *)_Znwj(8u);
 *v0 = (long long)&off_12C28;
 v1 = (void *)_Znwj(8u);
 v2 = *v0;
 v3 = *(const char **)(*(unsigned long long *)(*v0 - 8) + 8LL);
 *(unsigned long long *)v1 = (unsigned long long)&off_12C50;
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
 &typeinfo_for_RTTIBase,
 &typeinfo_for_RTTIDerivedA,
 0) )
 {
 v6 = v5 + 100;
 }
 if ( __dynamic_cast(
 v1,
 &typeinfo_for_RTTIBase,
 &typeinfo_for_RTTIDerivedB,
 0) )
 {
 v6 += 200;
 }
 if ( v4 == 42 )
 v7 = v3 + 1;
 else
 v7 = v3;
 v8 = v6 + strlen(v7);
 (*(void ( **)(long long *))(v2 + 8))(v0);
 (*(void ( **)(void *))(*(unsigned long long *)v1 + 8LL))(v1);
 return v8;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x15F0 */
void test_cpp_oo_features(void)
{
 int v0; // w0
 int v3; // w0
 int v4; // w19
 double v5; // d8
 int v6; // [xsp+28h] [xbp+28h] BYREF
 int v7; // [xsp+2Ch] [xbp+2Ch] BYREF
 char v8[36]; // [xsp+34h] [xbp+34h] BYREF

 puts(asc_1BA0);
 strncpy(v8, "Test", 0x1Fu);
 v8[31] = 0;
 v0 = strlen(v8);
 __printf_chk(1, "%d", (unsigned int)(v0 + 4700));
 __printf_chk(
 1,
 "%d",
 (unsigned int)(LifecycleClass_instance_count + 21 + 1000 * LifecycleClass_instance_count));
 __printf_chk(1, "%d", 42);
 __printf_chk(1, "%d", 71);
 __printf_chk(1, "%d", 650);
 __printf_chk(1, "%d", 22);
 v3 = (int)template_max_int_(3, 7);
 v4 = v3;
 v5 = template_max_double_(2.5, 1.5);
 v6 = 10;
 v7 = 20;
 template_swap_int_(&v6, &v7);
 __printf_chk(1, "%d", (unsigned int)((int)v5 + v4 + v6 + v7));
 __printf_chk(1, "%d", 16);
 __printf_chk(1, "%d", 85);
 test_cpp_exception();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x17D0 */
long long Base_virtual_func(Base *this, int a2)
{
 return (unsigned int)(a2 + 1);
}


/* Function: _ZNK4Base7getNameEv @ 0x17E0 */
const char * Base_getName(Base *this)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x17F0 */
void Base_destructor(Base *this)
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1800 */
long long Derived_virtual_func(Derived *this, int a2)
{
 return (unsigned int)(a2 * *((unsigned int *)this + 2));
}


/* Function: _ZNK7Derived7getNameEv @ 0x1810 */
const char * Derived_getName(Derived *this)
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x1820 */
long long MultiDerived_funcA(struct MultiDerived *this)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x1830 */
long long MultiDerived_funcB(struct MultiDerived *this)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x1840 */
long long MultiDerived__non_virtual_thunk_to_funcB(struct MultiDerived *this)
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x1850 */
long long MiddleA_func(struct MiddleA *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 150);
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x1870 */
long long MiddleA__virtual_thunk_to_func(struct MiddleA *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this
 + *(unsigned long long *)(*(unsigned long long *)this - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) - 24LL)
 + 8)
 + 150);
}


/* Function: _ZN7MiddleB4funcEv @ 0x18A0 */
long long MiddleB_func(struct MiddleB *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 200);
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x18C0 */
long long MiddleB__virtual_thunk_to_func(struct MiddleB *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this
 + *(unsigned long long *)(*(unsigned long long *)this - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) - 24LL)
 + 8)
 + 200);
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x18F0 */
long long DiamondDerived_func(struct DiamondDerived *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 250);
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x1910 */
long long DiamondDerived__virtual_thunk_to_func(struct DiamondDerived *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this
 + *(unsigned long long *)(*(unsigned long long *)this - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) - 24LL)
 + 8)
 + 250);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x1934 */
long long DiamondDerived__non_virtual_thunk_to_func(struct DiamondDerived *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*((unsigned long long *)this - 2) - 24LL) - 8) + 250);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1950 */
long long RTTIDerivedA_getType(RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1960 */
long long RTTIDerivedB_getType(RTTIDerivedB *this)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x1970 */
void RTTIDerivedB_destructor(RTTIDerivedB *this)
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x1980 */
void RTTIDerivedA_destructor(RTTIDerivedA *this)
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x1990 */
void DiamondDerived_destructor(struct DiamondDerived *this)
{
 ;
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x1994 */
void DiamondDerived_virtual_thunk_to_destructor(struct DiamondDerived *this)
{
 ;
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x19A0 */
void DiamondDerived_non_virtual_thunk_to_destructor(struct DiamondDerived *this)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x19B0 */
void MultiDerived_destructor(struct MultiDerived *this)
{
 ;
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x19B4 */
void MultiDerived_non_virtual_thunk_to_destructor(struct MultiDerived *this)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x19C0 */
void Derived_destructor(Derived *this)
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x19D0 */
void Base_deleting_destructor(Base *this)
{
 _ZdlPv(this);
}


/* Function: _ZN7DerivedD0Ev @ 0x19E0 */
void Derived_deleting_destructor(Derived *this)
{
 _ZdlPv(this);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x19F0 */
void MultiDerived_deleting_destructor(struct MultiDerived *this)
{
 _ZdlPv(this);
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x1A00 */
void MultiDerived_non_virtual_thunk_to_deleting_destructor(struct MultiDerived *this)
{
 _ZdlPv((char *)this - 16);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1A10 */
void RTTIDerivedB_deleting_destructor(RTTIDerivedB *this)
{
 _ZdlPv(this);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1A20 */
void RTTIDerivedA_deleting_destructor(RTTIDerivedA *this)
{
 _ZdlPv(this);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x1A30 */
void DiamondDerived_deleting_destructor(struct DiamondDerived *this)
{
 _ZdlPv(this);
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x1A40 */
void DiamondDerived_virtual_thunk_to_deleting_destructor(struct DiamondDerived *this)
{
 _ZdlPv((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL));
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x1A54 */
void DiamondDerived_non_virtual_thunk_to_deleting_destructor(struct DiamondDerived *this)
{
 _ZdlPv((char *)this - 16);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1A60 */
long long template_max_int_(long long result, int a2)
{
 if ( (int)result < a2 )
 return (unsigned int)a2;
 else
 return (unsigned int)result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1A70 */
double template_max_double_(double result, double a2)
{
 if ( result <= a2 )
 return a2;
 return result;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1A80 */
int * template_swap_int_(int *result, int *a2)
{
 int v2; // w2

 v2 = *result;
 *result = *a2;
 *a2 = v2;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1AA0 */
long long Container_int_Constructor(long long result)
{
 *(unsigned int *)(result + 40) = 0;
 return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1AB0 */
long long Container_int_push(long long result, int a2)
{
 int v2; // w2

 v2 = *(unsigned int *)(result + 40);
 if ( v2 <= 9 )
 {
 *(unsigned int *)(result + 40) = v2 + 1;
 *(unsigned int *)(result + 4LL * v2) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x1AD0 */
long long Container_int_get(long long a1, int a2)
{
 long long result; // x0

 result = 0;
 if ( (a2 & 0x80000000) == 0 )
 {
 result = 0;
 if ( *(unsigned int *)(a1 + 40) > a2 )
 return *(unsigned int *)(a1 + 4LL * a2);
 }
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1B00 */
long long Container_int_getSize(long long a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1B10 */
long long Container_double_Constructor(long long result)
{
 *(unsigned int *)(result + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1B20 */
long long Container_double_push(long long result, double a2)
{
 int v2; // w1

 v2 = *(unsigned int *)(result + 80);
 if ( v2 <= 9 )
 {
 *(unsigned int *)(result + 80) = v2 + 1;
 *(double *)(result + 8LL * v2) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1B40 */
double Container_double_get(long long a1, int a2)
{
 double result; // d0

 result = 0.0;
 if ( (a2 & 0x80000000) == 0 && *(unsigned int *)(a1 + 80) > a2 )
 return *(double *)(a1 + 8LL * a2);
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1B60 */
long long Container_double_getSize(long long a1)
{
 return *(unsigned int *)(a1 + 80);
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
