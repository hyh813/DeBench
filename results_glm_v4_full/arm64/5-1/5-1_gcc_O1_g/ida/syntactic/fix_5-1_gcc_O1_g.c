/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-1/5-1_gcc_O1_g
 * Processor: arm
 */

/* Class definitions */
struct SimpleClass {
    char name[32];
};

struct Base {
    void **_vptr;
};

struct Derived {
    void **_vptr;
    int multiplier;
};

struct MiddleA {
    void **_vptr;
    int dataA;
};

struct MiddleB {
    void **_vptr;
    int dataB;
};

struct MultiDerived {
    void **_vptr;
    int dataA;
    int dataB;
};

struct DiamondDerived {
    void **_vptr;
    int dataA;
    int dataB;
};

struct RTTIDerivedA {
    void **_vptr;
};

struct RTTIDerivedB {
    void **_vptr;
};

struct RTTIBase {
    void **_vptr;
};

/* Container class definitions for templates */
struct Container_int {
    int size;
    int data[10];
};

struct Container_double {
    int size;
    double data[10];
};

struct LifecycleClass {
    int instance_count;
};

#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>

/* Standard library function declarations */
extern void *malloc(unsigned long size);
extern void free(void *ptr);

/* Base class type info structure for dynamic_cast */
struct __class_type_info {
    const char *_name;
};

/* Ensure type_info is compatible with __class_type_info for dynamic_cast */
struct type_info {
    const char *_name;
};

/* Type info instances for RTTI */
static const char int_type_name[] = "i";
static const char RTTIBase_type_name[] = "7RTTIBase";
static const char RTTIDerivedA_type_name[] = "12RTTIDerivedA";
static const char RTTIDerivedB_type_name[] = "12RTTIDerivedB";

static const struct type_info int_type_info = { int_type_name };
static const struct type_info RTTIBase_type_info = { RTTIBase_type_name };
static const struct type_info RTTIDerivedA_type_info = { RTTIDerivedA_type_name };
static const struct type_info RTTIDerivedB_type_info = { RTTIDerivedB_type_name };

/* Function forward declarations */
void Base_dtor(struct Base *this);
void Derived_dtor(struct Derived *this);
int Base_virtual_func(struct Base *this, int x);
void Base_deleting_destructor(struct Base *this);
int Derived_virtual_func(struct Derived *this, int x);
void Derived_deleting_destructor(struct Derived *this);
int DiamondDerived_func(struct DiamondDerived *this);
void DiamondDerived_deleting_destructor(struct DiamondDerived *this);
void RTTIDerivedA_deleting_destructor(struct RTTIDerivedA *this);
void RTTIDerivedB_deleting_destructor(struct RTTIDerivedB *this);
long long thunk_non_virtual_MultiDerived_funcB(struct MultiDerived *this);
long long thunk_virtual_MiddleA_func(struct MiddleA *this);
long long thunk_virtual_MiddleB_func(struct MiddleB *this);
long long thunk_non_virtual_DiamondDerived_func(struct DiamondDerived *this);
long long thunk_virtual_DiamondDerived_func(struct DiamondDerived *this);
void thunk_non_virtual_DiamondDerived_destructor(struct DiamondDerived *this);
void thunk_virtual_DiamondDerived_destructor(struct DiamondDerived *this);
void thunk_non_virtual_MultiDerived_non_deleting_destructor(struct MultiDerived *this);
void thunk_virtual_DiamondDerived_deleting_destructor(struct DiamondDerived *this);
void thunk_non_virtual_DiamondDerived_deleting_destructor(struct DiamondDerived *this);

/* Vtable structures for proper linking */

/* Base vtable - contains type info, destructor, and virtual functions */
const void *off_13958[] = {
    &RTTIBase_type_info,  /* typeinfo */
    (void *)Base_deleting_destructor,  /* deleting destructor */
    (void *)Base_virtual_func,  /* virtual_func */
};

/* Derived vtable - overrides Base virtual functions */
const void *off_13988[] = {
    &RTTIBase_type_info,  /* typeinfo */
    (void *)Derived_deleting_destructor,  /* deleting destructor */
    (void *)Derived_virtual_func,  /* virtual_func */
};

/* DiamondDerived vtable - primary vtable (MiddleA path) */
const void *off_13B30[] = {
    &RTTIBase_type_info,  /* typeinfo */
    (void *)DiamondDerived_deleting_destructor,  /* deleting destructor */
    (void *)DiamondDerived_func,  /* func */
    (void *)16,  /* offset to top */
    (void *)0,  /* RTTI offset */
};

/* RTTIDerivedA vtable */
const void *off_13B58[] = {
    &RTTIDerivedA_type_info,  /* typeinfo */
    (void *)RTTIDerivedA_deleting_destructor,  /* deleting destructor */
};

/* RTTIDerivedB vtable */
const void *off_13B80[] = {
    &RTTIDerivedB_type_info,  /* typeinfo */
    (void *)RTTIDerivedB_deleting_destructor,  /* deleting destructor */
};

/* External string constants */
const char *asc_2148 = "Testing C++ Features:";
const char *unk_2170 = "  test_cpp_member_func: %d\n";
const char *unk_2190 = "  test_cpp_constructor: %d\n";
const char *unk_21B0 = "  test_cpp_virtual_func: %d\n";
const char *unk_21D0 = "  test_cpp_multiple_inheritance: %d\n";
const char *unk_21F0 = "  test_cpp_diamond_inheritance: %d\n";
const char *unk_2210 = "  test_cpp_operator_overload: %d\n";
const char *unk_2230 = "  test_cpp_template_func: %d\n";
const char *unk_2250 = "  test_cpp_template_class: %d\n";
const char *unk_2270 = "  test_cpp_lambda: %d\n";

/* Function declarations */
void *operator_new_array(unsigned long size);
void operator_delete_array(void *ptr);
void *operator_new(unsigned long size);
void operator_delete(void *ptr, unsigned long size);
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
int LifecycleClass_instance_count;
void _ZdlPv(void *ptr, unsigned long size);
void _ZdaPv(void *ptr);
long long call_weak_fn(void);
void JUMPOUT(int x);
void exit(int status);

/* Forward declarations */
struct DiamondDerived;
struct RTTIBase;

/* C-compatible std::ios_base::Init for C++ runtime support */
struct std_ios_base_Init {
    void (*ctor)(struct std_ios_base_Init *this);
    void (*dtor)(struct std_ios_base_Init *this);
};
void std_ios_base_Init_ctor(struct std_ios_base_Init *this);
void std_ios_base_Init_dtor(struct std_ios_base_Init *this);
struct std_ios_base_Init std___ioinit;
void *_dso_handle = &_dso_handle;

/* C++ typeid emulation */
#define typeid(x) (&x##_type_info)

long long thunk_virtual_DiamondDerived_func(struct DiamondDerived *this);
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);
void *__cxa_allocate_exception(unsigned long size);
void *__dynamic_cast(void *obj, const struct __class_type_info *src, const struct __class_type_info *dst, int offset);
void __cxa_throw(void *thrown_exception, struct type_info *tinfo, void (*dest)(void*));
int Base_virtual_func(struct Base *this, int x);
void Base_deleting_destructor(struct Base *this);
int Derived_virtual_func(struct Derived *this, int x);
void Derived_deleting_destructor(struct Derived *this);
int DiamondDerived_func(struct DiamondDerived *this);
void DiamondDerived_deleting_destructor(struct DiamondDerived *this);
void RTTIDerivedA_deleting_destructor(struct RTTIDerivedA *this);
void RTTIDerivedB_deleting_destructor(struct RTTIDerivedB *this);

/* Stub implementations for runtime support functions */
void *operator_new(unsigned long size)
{
    extern void *malloc(unsigned long size);
    return malloc(size);
}

void operator_delete(void *ptr, unsigned long size)
{
    (void)size;
    extern void free(void *ptr);
    free(ptr);
}

void *operator_new_array(unsigned long size)
{
    return operator_new(size);
}

void operator_delete_array(void *ptr)
{
    operator_delete(ptr, 0);
}

void _ZdlPv(void *ptr, unsigned long size)
{
    operator_delete(ptr, size);
}

long long call_weak_fn(void)
{
    return 0;
}

void JUMPOUT(int x)
{
    (void)x;
}

void *__cxa_allocate_exception(unsigned long size)
{
    return operator_new(size);
}

void *__dynamic_cast(void *obj, const struct __class_type_info *src, const struct __class_type_info *dst, int offset)
{
    if (!obj || !src || !dst)
        return NULL;
    if (src == dst)
        return (char *)obj + offset;
    return NULL;
}

/* Function: .init_proc @ 0x1458 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_1470 @ 0x1470 */
void sub_1470()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x1754 */
int test_cpp_member_func()
{
 struct SimpleClass obj; // [xsp+20h] [xbp+20h] BYREF

 strncpy(obj.name, "Test", 0x1Fu);
 obj.name[31] = 0;
 return strlen(obj.name) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x17CC */
int test_cpp_constructor()
{
 unsigned int *v0; // x0
 int v1; // w1
 int v2; // w19

 v0 = (unsigned int *)operator_new_array(0x14u);
 v0[1] = 10;
 v0[2] = 20;
 v0[3] = 30;
 v0[4] = 40;
 v1 = LifecycleClass_instance_count++;
 v2 = v1 + 21;
 operator_delete_array(v0);
 --LifecycleClass_instance_count;
 return v2 + 1000 * LifecycleClass_instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x1838 */
int call_virtual_func(struct Base *obj, int x)
{
 return ((int (*)(struct Base *, int))(*obj->_vptr))(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1854 */
int test_cpp_virtual_func()
{
 int v0; // w19
 struct Base base; // [xsp+20h] [xbp+20h] BYREF
 struct Derived derived; // [xsp+28h] [xbp+28h] BYREF

 base._vptr = (void **)&off_13958;
 derived._vptr = (void **)&off_13988;
 derived.multiplier = 3;
 v0 = call_virtual_func(&base, 5);
 return v0 + 21 + call_virtual_func((struct Base *)&derived, 5);
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x18E4 */
int test_cpp_multiple_inheritance()
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x18EC */
int test_cpp_diamond_inheritance()
{
 int v0; // w19
 unsigned char obj_32[24]; // [xsp+48h] [xbp+48h] BYREF

 *(void **)obj_32 = (void *)&off_13B30;
 *(unsigned int *)&obj_32[8] = 50;
 v0 = thunk_virtual_DiamondDerived_func((struct DiamondDerived *)obj_32);
 *(unsigned int *)&obj_32[8] = 100;
 return v0 + thunk_virtual_DiamondDerived_func((struct DiamondDerived *)obj_32);
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1988 */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1990 */
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


/* Function: _Z23test_cpp_template_classv @ 0x1A38 */
int test_cpp_template_class()
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x1A40 */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x1A48 */
int test_cpp_exception()
{
 unsigned int *exception; // x0

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, &int_type_info, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1B20 */
int test_cpp_smart_ptr()
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x1B28 */
int test_cpp_rtti()
{
 long long *v0; // x20
 void *v1; // x21
 long long v2; // x23
 char *v3; // x22
 int v4; // w19
 int v5; // w19
 const char *v6; // x0
 int v7; // w19

 v0 = (long long *)operator_new(8u);
 *v0 = (unsigned long long)off_13B58;
 v1 = (void *)operator_new(8u);
 *(unsigned long long *)v1 = (unsigned long long)off_13B80;
 v2 = *v0;
 v3 = RTTIDerivedA_type_info._name;
 v4 = 10;
 if ( v3 != "12RTTIDerivedA" )
 {
 v4 = 0;
 if ( *v3 != 42 )
 {
 if ( !strcmp(*(const char **)(*(unsigned long long *)(*v0 - 8) + 8LL), "12RTTIDerivedA") )
 v4 = 10;
 else
 v4 = 0;
 }
 }
 v5 = v4 + 20;
 if ( __dynamic_cast(
 v0,
 (const struct __class_type_info *)&RTTIBase_type_info,
 (const struct __class_type_info *)&RTTIDerivedA_type_info,
 0) )
 {
 v5 += 100;
 }
 if ( __dynamic_cast(
 v1,
 (const struct __class_type_info *)&RTTIBase_type_info,
 (const struct __class_type_info *)&RTTIDerivedB_type_info,
 0) )
 {
 v5 += 200;
 }
 if ( *v3 == 42 )
 v6 = v3 + 1;
 else
 v6 = v3;
 v7 = v5 + strlen(v6);
 (*(void ( **)(long long *))(v2 + 8))(v0);
 (*(void ( **)(void *))(*(unsigned long long *)v1 + 8LL))(v1);
 return v7;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1C8C */
void test_cpp_oo_features()
{
 unsigned int v0; // w0
 unsigned int v1; // w0
 unsigned int v2; // w0
 unsigned int v3; // w0
 unsigned int v4; // w0
 unsigned int v5; // w0

 puts(asc_2148);
 v0 = test_cpp_member_func();
 __printf_chk(1, unk_2170, v0);
 v1 = test_cpp_constructor();
 __printf_chk(1, unk_2190, v1);
 v2 = test_cpp_virtual_func();
 __printf_chk(1, unk_21B0, v2);
 v3 = test_cpp_multiple_inheritance();
 __printf_chk(1, unk_21D0, v3);
 v4 = test_cpp_diamond_inheritance();
 __printf_chk(1, unk_21F0, v4);
 __printf_chk(1, unk_2210, 22);
 v5 = test_cpp_template_func();
 __printf_chk(1, unk_2230, v5);
 __printf_chk(1, unk_2250, 16);
 __printf_chk(1, unk_2270, 85);
 test_cpp_exception();
}


/* Function: main @ 0x1DBC */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x1DD4 */
void _GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 std_ios_base_Init_ctor(&std___ioinit);
 __cxa_atexit((void (*)(void *))std_ios_base_Init_dtor, &std___ioinit, &_dso_handle);
}


/* Function: _ZN4Base12virtual_funcEi @ 0x1E18 */
int Base_virtual_func(struct Base *this, int x)
{
 return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x1E20 */
const char * Base_getName(const struct Base *this)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x1E2C */
void Base_dtor(struct Base *this)
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1E30 */
int Derived_virtual_func(struct Derived *this, int x)
{
 return x * this->multiplier;
}


/* Function: _ZNK7Derived7getNameEv @ 0x1E3C */
const char * Derived_getName(const struct Derived *this)
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x1E48 */
int MultiDerived_funcA(struct MultiDerived *this)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x1E50 */
int MultiDerived_funcB(struct MultiDerived *this)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x1E58 */
long long thunk_non_virtual_MultiDerived_funcB(struct MultiDerived *this)
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x1E60 */
int func_MiddleA(struct MiddleA *const this)
{
 return *(int *)((char *)&this->dataA + *((unsigned long long *)this->_vptr - 3)) + 150;
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x1E78 */
long long thunk_virtual_MiddleA_func(struct MiddleA *this)
{
 return (unsigned int)(*(int *)((char *)&this->dataA
 + *((unsigned long long *)this->_vptr - 3)
 + *(*(unsigned long long **)((char *)&this->_vptr + *((unsigned long long *)this->_vptr - 3)) - 3))
 + 150);
}


/* Function: _ZN7MiddleB4funcEv @ 0x1E9C */
int func_MiddleB(struct MiddleB *const this)
{
 return *(int *)((char *)&this->dataB + *((unsigned long long *)this->_vptr - 3)) + 200;
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x1EB4 */
long long thunk_virtual_MiddleB_func(struct MiddleB *this)
{
 return (unsigned int)(*(int *)((char *)&this->dataB
 + *((unsigned long long *)this->_vptr - 3)
 + *(*(unsigned long long **)((char *)&this->_vptr + *((unsigned long long *)this->_vptr - 3)) - 3))
 + 200);
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1ED8 */
int DiamondDerived_func(struct DiamondDerived *this)
{
 return *(int *)((char *)&this->dataA + *((unsigned long long *)this->_vptr - 3)) + 250;
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x1EF0 */
long long thunk_virtual_DiamondDerived_func(struct DiamondDerived *this)
{
 return DiamondDerived_func(this);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x1F14 */
long long thunk_non_virtual_DiamondDerived_func(struct DiamondDerived *this)
{
 return DiamondDerived_func(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1F2C */
int RTTIDerivedA_getType(const struct RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1F34 */
int RTTIDerivedB_getType(const struct RTTIDerivedB *this)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x1F3C */
void RTTIDerivedB_dtor(struct RTTIDerivedB *this)
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x1F40 */
void RTTIDerivedA_dtor(struct RTTIDerivedA *this)
{
 ;
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x1F48 */
void thunk_non_virtual_DiamondDerived_destructor(struct DiamondDerived *this)
{
 ;
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x1F4C */
void thunk_virtual_DiamondDerived_destructor(struct DiamondDerived *this)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1F50 */
void MultiDerived_dtor(struct MultiDerived *this)
{
 ;
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x1F54 */
void thunk_non_virtual_MultiDerived_non_deleting_destructor(struct MultiDerived *this)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x1F58 */
void Derived_dtor(struct Derived *this)
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x1F5C */
void Base_deleting_destructor(struct Base *this)
{
 _ZdlPv(this, 8u);
}


/* Function: _ZN7DerivedD0Ev @ 0x1F74 */
void Derived_deleting_destructor(struct Derived *this)
{
 _ZdlPv(this, 0x10u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x1F8C */
void MultiDerived_deleting_destructor(struct MultiDerived *this)
{
 _ZdlPv(this, 0x20u);
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x1FA4 */
void thunk_non_virtual_MultiDerived_destructor(struct MultiDerived *this)
{
 operator_delete(&this[-1].dataB, 0x20u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1FC0 */
void RTTIDerivedA_deleting_destructor(struct RTTIDerivedA *this)
{
 operator_delete(this, 8u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1FD8 */
void RTTIDerivedB_deleting_destructor(struct RTTIDerivedB *this)
{
 operator_delete(this, 8u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x1FF0 */
void DiamondDerived_deleting_destructor(struct DiamondDerived *this)
{
 operator_delete(this, 0x30u);
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x2008 */
void thunk_virtual_DiamondDerived_deleting_destructor(struct DiamondDerived *this)
{
 operator_delete((char *)this + *((unsigned long long *)this->_vptr - 4), 0x30u);
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x202C */
void thunk_non_virtual_DiamondDerived_deleting_destructor(struct DiamondDerived *this)
{
 operator_delete(&this[-1].dataB + 2, 0x30u);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x2048 */
int template_max_int(int a, int b)
{
 if ( a < b )
 return b;
 return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x2054 */
double template_max_double(double a, double b)
{
 if ( a <= b )
 return b;
 return a;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x2060 */
void template_swap_int(int *a, int *b)
{
 int v2; // w2

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x2074 */
void Container_int_ctor(struct Container_int *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x207C */
void Container_int_push(struct Container_int *this, int value)
{
 int size; // w2

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x2098 */
int Container_int_get(const struct Container_int *this, int idx)
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


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x20C0 */
int Container_int_getSize(const struct Container_int *this)
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x20C8 */
void Container_double_ctor(struct Container_double *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x20D0 */
void Container_double_push(struct Container_double *this, double value)
{
 int size; // w1

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x20EC */
double Container_double_get(const struct Container_double *this, int idx)
{
 double result; // d0

 result = 0.0;
 if ( (idx & 0x80000000) == 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x210C */
int Container_double_getSize(const struct Container_double *this)
{
 return this->size;
}


/* Function: .term_proc @ 0x2114 */
void term_proc()
{
 ;
}

/* Stub implementations for standard library functions */

/* puts - write string to stdout with newline */
int puts(const char *s)
{
    while (*s)
    {
        putchar(*s);
        s++;
    }
    putchar('\n');
    return 1;
}

/* strcmp - compare two strings */
int strcmp(const char *s1, const char *s2)
{
    while (*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return *(const unsigned char *)s1 - *(const unsigned char *)s2;
}

/* __printf_chk - format checked printf */
int __printf_chk(int flag, const char *format, ...)
{
    va_list args;
    int result;
    
    va_start(args, format);
    result = vprintf(format, args);
    va_end(args);
    
    return result;
}


/* Stub implementations for additional runtime functions */

/* _Znam - operator new[] */
void *_Znam(unsigned long size)
{
    return operator_new_array(size);
}

/* _Znwm - operator new */
void *_Znwm(unsigned long size)
{
    return operator_new(size);
}

/* _ZdlPvm - operator delete with size */
void _ZdlPvm(void *ptr, unsigned long size)
{
    operator_delete(ptr, size);
}

/* _ZdaPv - operator delete[] */
void _ZdaPv(void *ptr)
{
    operator_delete_array(ptr);
}

/* strlen - get string length */
size_t strlen(const char *s)
{
    const char *p = s;
    while (*p)
        p++;
    return p - s;
}

/* strncpy - copy string with limit */
char *strncpy(char *dest, const char *src, size_t n)
{
    size_t i;
    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];
    for (; i < n; i++)
        dest[i] = '\0';
    return dest;
}

/* __stack_chk_fail - stack protector failure */
void __stack_chk_fail(void)
{
    while (1)
        ;
}

/* __cxa_begin_catch - exception handling */
void *__cxa_begin_catch(void *exception_object)
{
    return exception_object;
}

/* __cxa_end_catch - end exception handling */
void __cxa_end_catch(void)
{
}

/* __cxa_rethrow - rethrow exception */
void __cxa_rethrow(void)
{
}

/* __cxa_finalize - cleanup at exit */
void __cxa_finalize(void *dso_handle)
{
    (void)dso_handle;
}

/* __gxx_personality_v0 - C++ exception personality */
int __gxx_personality_v0(int version, int actions, long long exception_class,
                         void *exception_object,
                         void *context)
{
    (void)version;
    (void)actions;
    (void)exception_class;
    (void)exception_object;
    (void)context;
    return -1;  /* Return failure to indicate no handler found */
}

/* _Unwind_Resume - resume unwinding after exception */
void _Unwind_Resume(void *exception_object)
{
    (void)exception_object;
    while (1)
        ;
}

/* abort - abnormal program termination */
void abort(void)
{
    while (1)
        ;
}

/* __gmon_start__ - profiling startup */
void __gmon_start__(void)
{
}

/* _Unwind_Exception - exception handling structure */
struct _Unwind_Exception {
    unsigned long long exception_class;
    unsigned long long exception_cleanup;
    unsigned long long private_1;
    unsigned long long private_2;
    unsigned long long private_3;
    unsigned long long private_4;
};

/* _Unwind_Context - unwind context structure */
struct _Unwind_Context {
    unsigned long long data[10];
};

/* __cxa_pure_virtual - called when pure virtual function is invoked */
void __cxa_pure_virtual(void)
{
    abort();
}

/* __cxa_throw - throw C++ exception */
void __cxa_throw(void *thrown_exception, struct type_info *tinfo, void (*dest)(void*))
{
    (void)thrown_exception;
    (void)tinfo;
    (void)dest;
    abort();
}

/* __cxa_atexit - register exit handler */
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle)
{
    (void)func;
    (void)arg;
    (void)dso_handle;
    return 0;
}

/* __libc_start_main - libc startup wrapper */
int __libc_start_main(int (*main)(int, char **, char **),
                      int argc, char **argv,
                      int (*init)(void), void (*fini)(void),
                      void (*rtld_fini)(void), void *stack_end)
{
    (void)init;
    (void)fini;
    (void)rtld_fini;
    (void)stack_end;
    exit(main(argc, argv, NULL));
    return 0;
}

/* std::ios_base::Init constructor */
void _ZNSt8ios_base4InitC1Ev(struct std_ios_base_Init *this)
{
    std_ios_base_Init_ctor(this);
}

/* std::ios_base::Init destructor */
void _ZNSt8ios_base4InitD1Ev(struct std_ios_base_Init *this)
{
    std_ios_base_Init_dtor(this);
}

/* std::ios_base::Init constructor implementation */
void std_ios_base_Init_ctor(struct std_ios_base_Init *this)
{
    (void)this;
}

/* std::ios_base::Init destructor implementation */
void std_ios_base_Init_dtor(struct std_ios_base_Init *this)
{
    (void)this;
}

/* exit - terminate program */
void exit(int status)
{
    (void)status;
    while (1)
        ;
}

/* vprintf - formatted output to stdout */
int vprintf(const char *format, va_list args)
{
    int count = 0;
    while (*format)
    {
        if (*format == '%' && *(format + 1))
        {
            format++;
            switch (*format)
            {
                case 'd':
                case 'i':
                {
                    int val = va_arg(args, int);
                    if (val < 0)
                    {
                        putchar('-');
                        count++;
                        val = -val;
                    }
                    if (val == 0)
                    {
                        putchar('0');
                        count++;
                    }
                    else
                    {
                        char buf[12];
                        int i = 0;
                        while (val > 0)
                        {
                            buf[i++] = '0' + (val % 10);
                            val /= 10;
                        }
                        while (i > 0)
                        {
                            putchar(buf[--i]);
                            count++;
                        }
                    }
                    break;
                }
                case 'u':
                {
                    unsigned int val = va_arg(args, unsigned int);
                    if (val == 0)
                    {
                        putchar('0');
                        count++;
                    }
                    else
                    {
                        char buf[11];
                        int i = 0;
                        while (val > 0)
                        {
                            buf[i++] = '0' + (val % 10);
                            val /= 10;
                        }
                        while (i > 0)
                        {
                            putchar(buf[--i]);
                            count++;
                        }
                    }
                    break;
                }
                case 'x':
                {
                    unsigned int val = va_arg(args, unsigned int);
                    if (val == 0)
                    {
                        putchar('0');
                        count++;
                    }
                    else
                    {
                        char buf[9];
                        int i = 0;
                        while (val > 0)
                        {
                            int digit = val % 16;
                            buf[i++] = (digit < 10) ? ('0' + digit) : ('a' + digit - 10);
                            val /= 16;
                        }
                        while (i > 0)
                        {
                            putchar(buf[--i]);
                            count++;
                        }
                    }
                    break;
                }
                case 's':
                {
                    char *str = va_arg(args, char *);
                    if (str)
                    {
                        while (*str)
                        {
                            putchar(*str);
                            count++;
                            str++;
                        }
                    }
                    break;
                }
                default:
                    putchar('%');
                    putchar(*format);
                    count += 2;
            }
        }
        else
        {
            putchar(*format);
            count++;
        }
        format++;
    }
    return count;
}

/* printf - formatted output to stdout */
int printf(const char *format, ...)
{
    va_list args;
    int result;
    va_start(args, format);
    result = vprintf(format, args);
    va_end(args);
    return result;
}

/* putchar - output a character to stdout */
int putchar(int c)
{
    (void)c;
    return c;
}
