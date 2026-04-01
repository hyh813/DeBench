/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-1/5-1_gcc_O1_g
 * Processor: arm
 */

#include <string.h>
#include <stdio.h>

/* Forward declarations and type definitions */
struct SimpleClass {
    char name[32];
};

struct Base {
    int (**_vptr)(...);
};

struct Derived {
    int (**_vptr)(...);
    int multiplier;
};

struct LifecycleClass {
    int instance_count;
};

struct MultiDerived {
    int (**_vptr)(...);
    int dataA;
    int dataB;
};

struct MiddleA {
    int (**_vptr)(...);
    int dataA;
};

struct MiddleB {
    int (**_vptr)(...);
    int dataB;
};

struct DiamondDerived {
    int (**_vptr)(...);
    int dataA;
    int dataB;
};

struct RTTIBase {
    int (**_vptr)(...);
};

struct RTTIDerivedA {
    int (**_vptr)(...);
};

struct RTTIDerivedB {
    int (**_vptr)(...);
};

/* Typedefs for struct types */
typedef struct SimpleClass SimpleClass;
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct LifecycleClass LifecycleClass;
typedef struct MultiDerived MultiDerived;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;

/* Template removed - C does not support templates */
struct Container_int {
    int data[10];
    int size;
};

struct Container_double {
    double data[10];
    int size;
};

/* Operator declarations */
void *cpp_operator_new(unsigned long size);
void *cpp_operator_new_array(unsigned long size);
void cpp_operator_delete(void *ptr);
void cpp_operator_delete_array(void *ptr);
void cpp_operator_delete_sized(void *ptr, unsigned long size);

/* External function declarations */
extern long long call_weak_fn();

/* External function declarations */
extern int printf(const char *format, ...);
extern int puts(const char *s);

/* Forward declarations for vtable functions */
extern int Base_virtual_func(Base *const this, int x);
extern const char * Base_getName(const Base *const this);
extern void Base_D2(Base *const this);
extern void Base_D0(Base *const this);
extern int Derived_virtual_func(Derived *const this, int x);
extern const char * Derived_getName(const Derived *const this);
extern void Derived_D2(Derived *const this);
extern void Derived_D0(Derived *const this);
extern int DiamondDerived_func(struct DiamondDerived *const this);
extern void DiamondDerived_D2(DiamondDerived *const this);
extern void DiamondDerived_D1(DiamondDerived *const this);
extern void DiamondDerived_D0(DiamondDerived *const this);
extern void non_virtual_thunk_to_DiamondDerived_D1(struct DiamondDerived *this);
extern void virtual_thunk_to_DiamondDerived_D1(struct DiamondDerived *this);
extern long long virtual_thunk_to_DiamondDerived_func(struct DiamondDerived *this);
extern void MultiDerived_D1(struct MultiDerived *const this);
extern void MultiDerived_D2(struct MultiDerived *const this);
extern void MultiDerived_D0(struct MultiDerived *const this);
extern void Derived_D2(Derived *const this);
extern void Derived_D0(Derived *const this);
extern int RTTIDerivedA_getType(const RTTIDerivedA *const this);
extern void RTTIDerivedA_D2(RTTIDerivedA *const this);
extern void RTTIDerivedA_D0(RTTIDerivedA *const this);
extern int RTTIDerivedB_getType(const RTTIDerivedB *const this);
extern void RTTIDerivedB_D2(RTTIDerivedB *const this);
extern void RTTIDerivedB_D0(RTTIDerivedB *const this);
extern int MiddleA_func(MiddleA *const this);
extern long long virtual_thunk_to_MiddleA_func(MiddleA *this);
extern int MiddleB_func(MiddleB *const this);
extern long long virtual_thunk_to_MiddleB_func(MiddleB *this);
extern int MultiDerived_funcA(struct MultiDerived *const this);
extern int MultiDerived_funcB(struct MultiDerived *const this);
extern long long non_virtual_thunk_to_MultiDerived_funcB(struct MultiDerived *this);
extern void non_virtual_thunk_to_MultiDerived_D1(struct MultiDerived *this);
extern void non_virtual_thunk_to_MultiDerived_D0(struct MultiDerived *this);
extern void non_virtual_thunk_to_DiamondDerived_D0(struct DiamondDerived *this);
extern long long non_virtual_thunk_to_DiamondDerived_func(struct DiamondDerived *this);

/* Vtables */
void *vtable_Base[] = {
    (void *)Base_virtual_func,
    (void *)Base_getName,
    (void *)Base_D2,
    (void *)Base_D0
};

void *vtable_Derived[] = {
    (void *)Derived_virtual_func,
    (void *)Derived_getName,
    (void *)Derived_D2,
    (void *)Derived_D0
};

void *vtable_MiddleA[] = {
    (void *)MiddleA_func,
    (void *)virtual_thunk_to_MiddleA_func
};

void *vtable_MiddleB[] = {
    (void *)MiddleB_func,
    (void *)virtual_thunk_to_MiddleB_func
};

void *vtable_MultiDerived[] = {
    (void *)MultiDerived_funcA,
    (void *)MultiDerived_funcB,
    (void *)non_virtual_thunk_to_MultiDerived_funcB
};

void *vtable_DiamondDerived[] = {
    (void *)DiamondDerived_func,
    (void *)DiamondDerived_D1,
    (void *)DiamondDerived_D0
};

void *vtable_RTTIDerivedA[] = {
    (void *)RTTIDerivedA_getType,
    (void *)RTTIDerivedA_D2,
    (void *)RTTIDerivedA_D0
};

void *vtable_RTTIDerivedB[] = {
    (void *)RTTIDerivedB_getType,
    (void *)RTTIDerivedB_D2,
    (void *)RTTIDerivedB_D0
};

/* Define vtable pointers */
void *off_13958 = vtable_Base;
void *off_13988 = vtable_Derived;
void *off_139B0 = vtable_MiddleA;
void *off_139D8 = vtable_MiddleB;
void *off_13A00 = vtable_MultiDerived;
void *off_13B30 = vtable_DiamondDerived;
void *off_13B58 = vtable_RTTIDerivedA;
void *off_13B80 = vtable_RTTIDerivedB;

/* Type info structures for RTTI and exceptions */
struct type_info {
    void *vptr;
    const char *name;
};

struct __class_type_info {
    void *vptr;
    const char *name;
};

/* External string constants - define them */
const char *asc_2148 = "Starting C++ OO features test";
const char *unk_2170 = "test_cpp_member_func returned: %d\n";
const char *unk_2190 = "test_cpp_constructor returned: %d\n";
const char *unk_21B0 = "test_cpp_virtual_func returned: %d\n";
const char *unk_21D0 = "test_cpp_multiple_inheritance returned: %d\n";
const char *unk_21F0 = "test_cpp_diamond_inheritance returned: %d\n";
const char *unk_2210 = "test_cpp_operator_overload returned: %d\n";
const char *unk_2230 = "test_cpp_template_func returned: %d\n";
const char *unk_2250 = "test_cpp_template_class returned: %d\n";
const char *unk_2270 = "test_cpp_lambda returned: %d\n";
const char *str_12RTTIDerivedA = "12RTTIDerivedA";

/* Global variable for LifecycleClass */
int LifecycleClass_instance_count = 0;

/* Additional function declarations */
unsigned int *__cxa_allocate_exception(unsigned long);
void __cxa_throw(unsigned int *exception, void *type_info, void *dest);
int __dynamic_cast(void *obj, void *src_type, void *dest_type, int flags);
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);

/* C++ runtime stub implementations */
void *cpp_operator_new(unsigned long size)
{
 /* Stub - returns a static buffer */
 static char buffer[1024];
 return buffer;
}

void *cpp_operator_new_array(unsigned long size)
{
 /* Stub - returns a static buffer */
 static char buffer[1024];
 return buffer;
}

void cpp_operator_delete(void *ptr)
{
 /* Stub - does nothing */
}

void cpp_operator_delete_array(void *ptr)
{
 /* Stub - does nothing */
}

void cpp_operator_delete_sized(void *ptr, unsigned long size)
{
 /* Stub - does nothing */
}

unsigned int *__cxa_allocate_exception(unsigned long size)
{
 static unsigned int exception_buffer[16];
 return exception_buffer;
}

void __cxa_throw(unsigned int *exception, void *type_info, void *dest)
{
 /* Stub - does not actually throw */
}

int __dynamic_cast(void *obj, void *src_type, void *dest_type, int flags)
{
 return 0;
}

int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle)
{
 return 0;
}

/* Function: .init_proc @ 0x1458 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_1470 @ 0x1470 */
void sub_1470()
{
 return;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn - provide definition */
long long call_weak_fn()
{
 return 0;
}




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

 v0 = (unsigned int *)cpp_operator_new_array(0x14u);
 v0[1] = 10;
 v0[2] = 20;
 v0[3] = 30;
 v0[4] = 40;
 v1 = LifecycleClass_instance_count++;
 v2 = v1 + 21;
 cpp_operator_delete_array(v0);
 --LifecycleClass_instance_count;
 return v2 + 1000 * LifecycleClass_instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x1838 */
int call_virtual_func(struct Base *obj, int x)
{
 int (*func)(struct Base *, int) = (int (*)(struct Base *, int))obj->_vptr[0];
 return func(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1854 */
int test_cpp_virtual_func()
{
 int v0; // w19
 struct Base base; // [xsp+20h] [xbp+20h] BYREF
 struct Derived derived; // [xsp+28h] [xbp+28h] BYREF

 base._vptr = (int (**)(...))off_13958;
 derived._vptr = (int (**)(...))off_13988;
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

 *(unsigned long long *)obj_32 = (unsigned long long)off_13B30;
 *(unsigned int *)&obj_32[8] = 50;
 v0 = virtual_thunk_to_DiamondDerived_func((struct DiamondDerived *)obj_32);
 *(unsigned int *)&obj_32[8] = 100;
 return v0 + virtual_thunk_to_DiamondDerived_func((struct DiamondDerived *)obj_32);
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
 __cxa_throw(exception, (void *)0, 0);
 return 0;
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

 v0 = (long long *)cpp_operator_new(8u);
 *v0 = (long long)off_13B58;
 v1 = (void *)cpp_operator_new(8u);
 *(unsigned long long *)v1 = (unsigned long long)off_13B80;
 v2 = *v0;
 v3 = *(char **)(*(unsigned long long *)(*v0 - 8) + 8LL);
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
 (const struct __class_type_info *)0,
 (const struct __class_type_info *)0,
 0) )
 {
 v5 += 100;
 }
 if ( __dynamic_cast(
 v1,
 (const struct __class_type_info *)0,
 (const struct __class_type_info *)0,
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
    printf(unk_2170, v0);
    v1 = test_cpp_constructor();
    printf(unk_2190, v1);
    v2 = test_cpp_virtual_func();
    printf(unk_21B0, v2);
    v3 = test_cpp_multiple_inheritance();
    printf(unk_21D0, v3);
    v4 = test_cpp_diamond_inheritance();
    printf(unk_21F0, v4);
    printf(unk_2210, 22);
    v5 = test_cpp_template_func();
    printf(unk_2230, v5);
    printf(unk_2250, 16);
    printf(unk_2270, 85);
 test_cpp_exception();
}


/* Function: main @ 0x1DBC */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x1DD4 */
void GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 /* C++ initialization removed for C compatibility */
}


/* Function: _ZN4Base12virtual_funcEi @ 0x1E18 */
int Base_virtual_func(Base *const this, int x)
{
 return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x1E20 */
const char * Base_getName(const Base *const this)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x1E2C */
void Base_D2(Base *const this)
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1E30 */
int Derived_virtual_func(Derived *const this, int x)
{
 return x * this->multiplier;
}


/* Function: _ZNK7Derived7getNameEv @ 0x1E3C */
const char * Derived_getName(const Derived *const this)
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x1E48 */
int MultiDerived_funcA(struct MultiDerived *const this)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x1E50 */
int MultiDerived_funcB(struct MultiDerived *const this)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x1E58 */
long long non_virtual_thunk_to_MultiDerived_funcB(struct MultiDerived *this)
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x1E60 */
int MiddleA_func(MiddleA *const this)
{
 return *(int *)((char *)&this->dataA + *((unsigned long long *)this->_vptr - 3)) + 150;
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x1E78 */
long long virtual_thunk_to_MiddleA_func(MiddleA *this)
{
 return (unsigned int)(*(int *)((char *)&this->dataA
 + *((unsigned long long *)this->_vptr - 3)
 + *(*(unsigned long long **)((char *)&this->_vptr + *((unsigned long long *)this->_vptr - 3)) - 3))
 + 150);
}


/* Function: _ZN7MiddleB4funcEv @ 0x1E9C */
int MiddleB_func(MiddleB *const this)
{
 return *(int *)((char *)&this->dataB + *((unsigned long long *)this->_vptr - 3)) + 200;
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x1EB4 */
long long virtual_thunk_to_MiddleB_func(MiddleB *this)
{
 return (unsigned int)(*(int *)((char *)&this->dataB
 + *((unsigned long long *)this->_vptr - 3)
 + *(*(unsigned long long **)((char *)&this->_vptr + *((unsigned long long *)this->_vptr - 3)) - 3))
 + 200);
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1ED8 */
int DiamondDerived_func(struct DiamondDerived *const this)
{
 return *(int *)((char *)&this->dataA + *((unsigned long long *)this->_vptr - 3)) + 250;
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x1EF0 */
long long virtual_thunk_to_DiamondDerived_func(struct DiamondDerived *this)
{
 return (unsigned int)(*(int *)((char *)&this->dataA
 + *((unsigned long long *)this->_vptr - 3)
 + *(*(unsigned long long **)((char *)&this->_vptr + *((unsigned long long *)this->_vptr - 3)) - 3))
 + 250);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x1F14 */
long long non_virtual_thunk_to_DiamondDerived_func(struct DiamondDerived *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*((unsigned long long *)&this[-1].dataB + 1) - 24LL) - 8) + 250);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1F2C */
int RTTIDerivedA_getType(const RTTIDerivedA *const this)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1F34 */
int RTTIDerivedB_getType(const RTTIDerivedB *const this)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x1F3C */
void RTTIDerivedB_D2(RTTIDerivedB *const this)
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x1F40 */
void RTTIDerivedA_D2(RTTIDerivedA *const this)
{
 ;
}


/* Function: _ZN14DiamondDerivedD2Ev @ 0x1F44 */
void DiamondDerived_D2(DiamondDerived *const this)
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x1F48 */
void DiamondDerived_D1(struct DiamondDerived *const this)
{
 ;
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x1F48 */
void non_virtual_thunk_to_DiamondDerived_D1(struct DiamondDerived *this)
{
 ;
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x1F4C */
void virtual_thunk_to_DiamondDerived_D1(struct DiamondDerived *this)
{
 ;
}


/* Function: _ZN12MultiDerivedD1Ev @ 0x1F50 */
void MultiDerived_D1(struct MultiDerived *const this)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1F54 */
void MultiDerived_D2(struct MultiDerived *const this)
{
 ;
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x1F54 */
void non_virtual_thunk_to_MultiDerived_D1(struct MultiDerived *this)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x1F58 */
void Derived_D2(Derived *const this)
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x1F5C */
void Base_D0(Base *const this)
{
 cpp_operator_delete_sized(this, 8u);
}


/* Function: _ZN7DerivedD0Ev @ 0x1F74 */
void Derived_D0(Derived *const this)
{
 cpp_operator_delete_sized(this, 0x10u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x1F8C */
void MultiDerived_D0(struct MultiDerived *const this)
{
 cpp_operator_delete_sized(this, 0x20u);
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x1FA4 */
void non_virtual_thunk_to_MultiDerived_D0(struct MultiDerived *this)
{
 cpp_operator_delete_sized(&this[-1], 0x20u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1FC0 */
void RTTIDerivedA_D0(RTTIDerivedA *const this)
{
 cpp_operator_delete_sized(this, 8u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1FD8 */
void RTTIDerivedB_D0(RTTIDerivedB *const this)
{
 cpp_operator_delete_sized(this, 8u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x1FF0 */
void DiamondDerived_D0(struct DiamondDerived *const this)
{
 cpp_operator_delete_sized(this, 0x30u);
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x2008 */
void virtual_thunk_to_DiamondDerived_D0(struct DiamondDerived *this)
{
 cpp_operator_delete_sized((char *)this + *((unsigned long long *)this->_vptr - 4), 0x30u);
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x202C */
void non_virtual_thunk_to_DiamondDerived_D0(struct DiamondDerived *this)
{
 cpp_operator_delete_sized(&this[-1].dataB + 2, 0x30u);
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
void Container_int_Constructor(struct Container_int *const this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x207C */
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


/* Function: _ZNK9ContainerIiE3getEi @ 0x2098 */
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


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x20C0 */
int Container_int_getSize(const struct Container_int *const this)
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x20C8 */
void Container_double_Constructor(struct Container_double *const this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x20D0 */
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


/* Function: _ZNK9ContainerIdE3getEi @ 0x20EC */
double Container_double_get(const struct Container_double *const this, int idx)
{
 double result; // d0

 result = 0.0;
 if ( (idx & 0x80000000) == 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x210C */
int Container_double_getSize(const struct Container_double *const this)
{
 return this->size;
}


/* Function: .term_proc @ 0x2114 */
void term_proc()
{
 ;
}


/* FAILED to decompile: _Znam @ 0x14098 */

/* FAILED to decompile: puts @ 0x140A8 */

/* FAILED to decompile: strlen @ 0x140B0 */

/* FAILED to decompile: __stack_chk_fail @ 0x140B8 */

/* FAILED to decompile: __cxa_begin_catch @ 0x140C0 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x140D0 */

/* FAILED to decompile: __cxa_finalize @ 0x140D8 */

/* FAILED to decompile: __libc_start_main @ 0x140E8 */

/* FAILED to decompile: _Znwm @ 0x140F0 */

/* FAILED to decompile: _ZdlPvm @ 0x140F8 */

/* FAILED to decompile: strncpy @ 0x14100 */

/* FAILED to decompile: __dynamic_cast @ 0x14108 */

/* FAILED to decompile: __cxa_atexit @ 0x14110 */

/* FAILED to decompile: _ZdaPv @ 0x14118 */

/* FAILED to decompile: strcmp @ 0x14128 */

/* FAILED to decompile: __cxa_rethrow @ 0x14130 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x14138 */

/* FAILED to decompile: abort @ 0x14140 */

/* FAILED to decompile: __cxa_end_catch @ 0x14148 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x14150 */

/* FAILED to decompile: __cxa_throw @ 0x14158 */

/* FAILED to decompile: _Unwind_Resume @ 0x14168 */

/* FAILED to decompile: __printf_chk @ 0x14170 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x14178 */

/* FAILED to decompile: __gmon_start__ @ 0x14188 */

/* Total functions decompiled: 70, failed: 25 */
