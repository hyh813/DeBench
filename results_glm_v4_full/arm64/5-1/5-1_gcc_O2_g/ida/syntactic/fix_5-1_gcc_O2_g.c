/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-1/5-1_gcc_O2_g
 * Processor: arm
 */

#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>

/* Forward declarations for C++ classes used in the code */
struct SimpleClass {
    char name[32];
};

struct Base {
    void *_vptr_Base;
};

struct Derived {
    void *_vptr_Derived;
    int multiplier;
};

struct MultiDerived {
    struct Base BaseA;
    struct Base BaseB;
};

struct MiddleA {
    void *_vptr_MiddleA;
    int dataA;
};

struct MiddleB {
    void *_vptr_MiddleB;
    int dataB;
};

struct DiamondDerived {
    struct MiddleA middleA;
    struct MiddleB middleB;
    int dataA;
    int dataB;
};

struct RTTIDerivedA {
    void *_vptr;
};

struct RTTIDerivedB {
    void *_vptr;
};

struct Container_int {
    int size;
    int data[10];
};

struct Container_double {
    int size;
    double data[10];
};

/* LifecycleClass stub for test_cpp_constructor */
extern int lifecycle_instance_count;

/* Template function forward declarations */
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);

/* Forward declarations for test functions */
void test_cpp_oo_features(void);

/* Forward declarations for typeinfo and destructor functions used in vtables */
extern struct type_info typeinfo_for_RTIDerivedA;
extern struct type_info typeinfo_for_RTIDerivedB;
extern void RTTIDerivedA_destructor(struct RTTIDerivedA *const this);
extern void RTTIDerivedB_destructor(struct RTTIDerivedB *const this);

/* Vtable for type_info class - points to type_info name offset */
const void *type_info_vtable[2] = {
    (void *)8,  /* Offset to name member in type_info struct */
    NULL       /* Destructor */
};

/* Vtable structures - typeinfo pointer followed by virtual function pointers */
void *off_12C28[2] = {&typeinfo_for_RTIDerivedA, (void *)RTTIDerivedA_destructor};
void *off_12C50[2] = {&typeinfo_for_RTIDerivedB, (void *)RTTIDerivedB_destructor};

/* typeinfo structure for RTTI - with vtable pointer at offset 0 */
struct type_info {
    const void **vptr;  /* vtable pointer */
    const char *name;   /* type name string */
};

/* Stub typeinfo definitions */
struct type_info typeinfo_for_RTIBase = {type_info_vtable, "RTIBase"};
struct type_info typeinfo_for_RTIDerivedA = {type_info_vtable, "12RTTIDerivedA"};
struct type_info typeinfo_for_RTIDerivedB = {type_info_vtable, "12RTTIDerivedB"};
struct type_info typeinfo_for_int = {type_info_vtable, "i"};

/* External string literals */
extern const char *asc_1B10;
extern const char *unk_1B38;
extern const char *unk_1B58;
extern const char *unk_1B78;
extern const char *unk_1B98;
extern const char *unk_1BB8;
extern const char *unk_1BD8;
extern const char *unk_1BF8;
extern const char *unk_1C18;
extern const char *unk_1C38;

/* String literal definitions */
const char *asc_1B10 = "=== C++ Object-Oriented Features Test ===";
const char *unk_1B38 = "test_cpp_member_func: %d\n";
const char *unk_1B58 = "test_cpp_constructor: %d\n";
const char *unk_1B78 = "test_cpp_virtual_func: %d\n";
const char *unk_1B98 = "test_cpp_multiple_inheritance: %d\n";
const char *unk_1BB8 = "test_cpp_diamond_inheritance: %d\n";
const char *unk_1BD8 = "test_cpp_operator_overload: %d\n";
const char *unk_1BF8 = "test_cpp_template_func: %d\n";
const char *unk_1C18 = "test_cpp_template_class: %d\n";
const char *unk_1C38 = "test_cpp_lambda: %d\n";

/* C++ runtime function declarations */
extern void *__cxa_allocate_exception(unsigned int size);
extern void __cxa_throw(void *exception, struct type_info *type_info, void (*dest)(void *));
extern void *__dynamic_cast(void *obj, const void *from_type, const void *to_type, ptrdiff_t offset);
void *__cpp_operator_new(unsigned long size);
void __cpp_operator_delete(void *ptr, unsigned long size);
extern int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);

/* Stub implementations for C++ runtime functions */
void *__cxa_allocate_exception(unsigned int size) {
    static unsigned char exception_buffer[32];
    (void)size;
    return exception_buffer;
}

void __cxa_throw(void *exception, struct type_info *type_info, void (*dest)(void *)) {
    (void)exception;
    (void)type_info;
    (void)dest;
}

void *__dynamic_cast(void *obj, const void *from_type, const void *to_type, ptrdiff_t offset) {
    (void)obj;
    (void)from_type;
    (void)to_type;
    (void)offset;
    return NULL;
}

void *__cpp_operator_new(unsigned long size) {
    return malloc(size);
}

void __cpp_operator_delete(void *ptr, unsigned long size) {
    (void)size;
    free(ptr);
}

/* Mangled operator new/delete for C++ linking */
void *_Znwm(unsigned long size) {
    return malloc(size);
}

void _ZdlPvm(void *ptr, unsigned long size) {
    (void)size;
    free(ptr);
}

int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle) {
    (void)func;
    (void)arg;
    (void)dso_handle;
    return 0;
}

/* Stub functions for decompiler artifacts */
static inline void JUMPOUT(int addr) { (void)addr; }
extern long long call_weak_fn(void);

/* Additional function declaration for __printf_chk (GNU extension) */
extern int __printf_chk(int flag, const char *format, ...);

/* Implementation of __printf_chk - wraps standard printf */
int __printf_chk(int flag, const char *format, ...) {
    (void)flag;
    va_list args;
    va_start(args, format);
    int result = vprintf(format, args);
    va_end(args);
    return result;
}

/* puts implementation for linking */
int puts(const char *s) {
    return printf("%s\n", s);
}

/* Function: .init_proc @ 0xE90 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_EB0 @ 0xEB0 */
void sub_EB0()
{
 JUMPOUT(0);
}


/* Function: _Z18test_cpp_exceptionv @ 0x1040 */
int test_cpp_exception()
{
 unsigned int *exception; // x0
 extern struct type_info typeinfo_for_int;

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, &typeinfo_for_int, (void (*)(void *))0);
}


/* Forward declaration for std::ios_base::Init object */
struct std_ios_base_Init {
    char dummy[32];
};
extern struct std_ios_base_Init std___ioinit;

/* Function: main @ 0x1120 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x1140 */
void GLOBAL__sub_I__Z20test_cpp_member_funcv(void) __attribute__((constructor));
void GLOBAL__sub_I__Z20test_cpp_member_funcv(void)
{
 extern void std_ios_base_Init_Init(void *obj);
 extern void std_ios_base_Init_Destroy(void *obj);
 extern void *_dso_handle;
 
 std_ios_base_Init_Init(&std___ioinit);
 __cxa_atexit((void (*)(void *))std_ios_base_Init_Destroy, &std___ioinit, &_dso_handle);
}

/* Stub std::ios_base::Init */
struct std_ios_base_Init std___ioinit = {0};

void *_dso_handle = NULL;

void std_ios_base_Init_Init(void *obj) { (void)obj; }
void std_ios_base_Init_Destroy(void *obj) { (void)obj; }

/* Mangled name aliases for C++ linking */
void _ZNSt8ios_base4InitC1Ev(void *obj) __attribute__((alias("std_ios_base_Init_Init")));
void _ZNSt8ios_base4InitD1Ev(void *obj) __attribute__((alias("std_ios_base_Init_Destroy")));



/* CRT stub function _start removed by preprocessor */



/* CRT stub function call_weak_fn removed by preprocessor */

/* Stub implementation for call_weak_fn */
long long call_weak_fn(void)
{
    return 0;
}

/* Stub for __gmon_start__ - profiling startup */
void __gmon_start__(void)
{
}




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x12A0 */
int test_cpp_member_func()
{
 char *v0; // x0
 struct SimpleClass obj; // [xsp+10h] [xbp+10h] BYREF

 v0 = strncpy(obj.name, "Test", 0x1Fu);
 obj.name[31] = 0;
 return strlen(v0) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1310 */
int test_cpp_constructor()
{
 return lifecycle_instance_count + 21 + 1000 * lifecycle_instance_count;
}

/* LifecycleClass static member definition */
int lifecycle_instance_count = 0;


/* Function: _Z17call_virtual_funcP4Basei @ 0x1330 */
int call_virtual_func(struct Base *obj, int x)
{
 return (*((int (**)(struct Base *, int))obj->_vptr_Base))(obj, x);
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
 int v0; // w19
 long long *v1; // x21
 void *v2; // x20
 long long v3; // x24
 const char *v4; // x23
 int v5; // w25
 int v6; // w19
 const char *v7; // x0
 int v8; // w19

 v0 = 10;
 v1 = (long long *)__cpp_operator_new(8u);
 *v1 = (long long)off_12C28;
 v2 = __cpp_operator_new(8u);
 v3 = *v1;
 v4 = *(const char **)(*(unsigned long long *)(*v1 - 8) + 8LL);
 *(unsigned long long *)v2 = (unsigned long long)off_12C50;
 v5 = *(unsigned char *)v4;
 if ( v4 != "12RTTIDerivedA" )
 {
 v0 = 0;
 if ( v5 != 42 )
 {
 if ( !strcmp(v4, "12RTTIDerivedA") )
 v0 = 10;
 else
 v0 = 0;
 }
 }
 v6 = v0 + 20;
 if ( __dynamic_cast(
 v1,
 (const void *)&typeinfo_for_RTIBase,
 (const void *)&typeinfo_for_RTIDerivedA,
 0) )
 {
 v6 += 100;
 }
 if ( __dynamic_cast(
 v2,
 (const void *)&typeinfo_for_RTIBase,
 (const void *)&typeinfo_for_RTIDerivedB,
 0) )
 {
 v6 += 200;
 }
 if ( v5 == 42 )
 v7 = v4 + 1;
 else
 v7 = v4;
 v8 = v6 + strlen(v7);
 (*(void ( **)(long long *))(v3 + 8))(v1);
 (*(void ( **)(void *))(*(unsigned long long *)v2 + 8LL))(v2);
 return v8;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x15B0 */
void test_cpp_oo_features()
{
 int v0; // w0
 unsigned int v1; // w0
 unsigned int v2; // w0
 unsigned int v3; // w0
 char v4[36]; // [xsp+24h] [xbp+24h] BYREF

 puts(asc_1B10);
 strncpy(v4, "Test", 0x1Fu);
 v4[31] = 0;
 v0 = strlen(v4);
 __printf_chk(1, unk_1B38, (unsigned int)(v0 + 4700));
 v1 = test_cpp_constructor();
 __printf_chk(1, unk_1B58, v1);
 __printf_chk(1, unk_1B78, 42);
 __printf_chk(1, unk_1B98, 71);
 v2 = test_cpp_diamond_inheritance();
 __printf_chk(1, unk_1BB8, v2);
 __printf_chk(1, unk_1BD8, 22);
 v3 = test_cpp_template_func();
 __printf_chk(1, unk_1BF8, v3);
 __printf_chk(1, unk_1C18, 16);
 __printf_chk(1, unk_1C38, 85);
 test_cpp_exception();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x1740 */
int Base_virtual_func(struct Base *const this, int x)
{
 return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x1750 */
const char * Base_getName(const struct Base *const this)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x1760 */
void Base_destructor(struct Base *const this)
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1770 */
int Derived_virtual_func(struct Derived *const this, int x)
{
 return x * this->multiplier;
}


/* Function: _ZNK7Derived7getNameEv @ 0x1780 */
const char * Derived_getName(const struct Derived *const this)
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x1790 */
int MultiDerived_funcA(struct MultiDerived *const this)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x17A0 */
int MultiDerived_funcB(struct MultiDerived *const this)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x17B0 */
long long non_virtual_thunk_to_MultiDerived_funcB(struct MultiDerived *this)
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x17C0 */
int MiddleA_func(struct MiddleA *const this)
{
 return *(int *)((char *)&this->dataA + *((unsigned long long *)this->_vptr_MiddleA - 3)) + 150;
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x17E0 */
long long virtual_thunk_to_MiddleA_func(struct MiddleA *this)
{
 return (unsigned int)(*(int *)((char *)&this->dataA
 + *((unsigned long long *)this->_vptr_MiddleA - 3)
 + *(*(unsigned long long **)((char *)&this->_vptr_MiddleA + *((unsigned long long *)this->_vptr_MiddleA - 3)) - 3))
 + 150);
}


/* Function: _ZN7MiddleB4funcEv @ 0x1810 */
int MiddleB_func(struct MiddleB *const this)
{
 return *(int *)((char *)&this->dataB + *((unsigned long long *)this->_vptr_MiddleB - 3)) + 200;
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x1830 */
long long virtual_thunk_to_MiddleB_func(struct MiddleB *this)
{
 return (unsigned int)(*(int *)((char *)&this->dataB
 + *((unsigned long long *)this->_vptr_MiddleB - 3)
 + *(*(unsigned long long **)((char *)&this->_vptr_MiddleB + *((unsigned long long *)this->_vptr_MiddleB - 3)) - 3))
 + 200);
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1860 */
int DiamondDerived_func(struct DiamondDerived *const this)
{
 return *(int *)((char *)&this->dataA + *((unsigned long long *)this->middleA._vptr_MiddleA - 3)) + 250;
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x1880 */
long long virtual_thunk_to_DiamondDerived_func(struct DiamondDerived *this)
{
 return (unsigned int)(*(int *)((char *)&this->dataA
 + *((unsigned long long *)this->middleA._vptr_MiddleA - 3)
 + *(*(unsigned long long **)((char *)&this->middleA._vptr_MiddleA + *((unsigned long long *)this->middleA._vptr_MiddleA - 3)) - 3))
 + 250);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x18A4 */
long long non_virtual_thunk_to_DiamondDerived_func(struct DiamondDerived *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*((unsigned long long *)&this[-1].dataB + 1) - 24LL) - 8) + 250);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x18C0 */
int RTTIDerivedA_getType(const struct RTTIDerivedA *const this)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x18D0 */
int RTTIDerivedB_getType(const struct RTTIDerivedB *const this)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x18E0 */
void RTTIDerivedB_destructor(struct RTTIDerivedB *const this)
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x18F0 */
void RTTIDerivedA_destructor(struct RTTIDerivedA *const this)
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x1900 */
void DiamondDerived_destructor(struct DiamondDerived *const this)
{
 ;
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x1904 */
void virtual_thunk_to_DiamondDerived_destructor(struct DiamondDerived *this)
{
 ;
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x1910 */
void non_virtual_thunk_to_DiamondDerived_destructor(struct DiamondDerived *this)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1920 */
void MultiDerived_destructor(struct MultiDerived *const this)
{
 ;
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x1924 */
void non_virtual_thunk_to_MultiDerived_destructor(struct MultiDerived *this)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x1930 */
void Derived_destructor(struct Derived *const this)
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x1940 */
void Base_deleting_destructor(struct Base *const this)
{
 __cpp_operator_delete(this, 8u);
}


/* Function: _ZN7DerivedD0Ev @ 0x1950 */
void Derived_deleting_destructor(struct Derived *const this)
{
 __cpp_operator_delete(this, 0x10u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x1960 */
void MultiDerived_deleting_destructor(struct MultiDerived *const this)
{
 __cpp_operator_delete(this, 0x20u);
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x1970 */
void non_virtual_thunk_to_MultiDerived_deleting_destructor(struct MultiDerived *this)
{
 __cpp_operator_delete(&this[-1].BaseB, 0x20u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1980 */
void RTTIDerivedB_deleting_destructor(struct RTTIDerivedB *const this)
{
 __cpp_operator_delete(this, 8u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1990 */
void RTTIDerivedA_deleting_destructor(struct RTTIDerivedA *const this)
{
 __cpp_operator_delete(this, 8u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x19A0 */
void DiamondDerived_deleting_destructor(struct DiamondDerived *const this)
{
 __cpp_operator_delete(this, 0x30u);
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x19B0 */
void virtual_thunk_to_DiamondDerived_deleting_destructor(struct DiamondDerived *this)
{
 __cpp_operator_delete((char *)this + *((unsigned long long *)this->middleA._vptr_MiddleA - 4), 0x30u);
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x19C4 */
void non_virtual_thunk_to_DiamondDerived_deleting_destructor(struct DiamondDerived *this)
{
 __cpp_operator_delete(&this[-1].dataB + 2, 0x30u);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x19D0 */
int template_max_int(int a, int b)
{
 if ( a < b )
 return b;
 return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x19E0 */
double template_max_double(double a, double b)
{
 if ( a <= b )
 return b;
 return a;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x19F0 */
void template_swap_int(int *a, int *b)
{
 int v2; // w2

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1A10 */
void Container_int_Constructor(struct Container_int *const this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1A20 */
void Container_int_push(struct Container_int *const this, int value)
{
 int size; // w2

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x1A40 */
int Container_int_get(const struct Container_int *const this, int idx)
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


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1A70 */
int Container_int_getSize(const struct Container_int *const this)
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1A80 */
void Container_double_Constructor(struct Container_double *const this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1A90 */
void Container_double_push(struct Container_double *const this, double value)
{
 int size; // w1

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1AB0 */
double Container_double_get(const struct Container_double *const this, int idx)
{
 double result; // d0

 result = 0.0;
 if ( (idx & 0x80000000) == 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1AD0 */
int Container_double_getSize(const struct Container_double *const this)
{
 return this->size;
}


/* Function: .term_proc @ 0x1AD8 */
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
