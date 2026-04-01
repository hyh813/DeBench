/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-1/5-1_gcc_O3_g
 * Processor: arm
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

// typeinfo is C++ only, forward declare for C compatibility
struct type_info;

// Forward declarations for classes
struct SimpleClass;
struct Base;
struct Derived;
struct LifecycleClass;
struct MiddleA;
struct MiddleB;
struct MultiDerived;
struct DiamondDerived;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
template<typename T> struct Container;

// Forward declarations for template functions
template<typename T> T template_max(T a, T b);
template<typename T> void template_swap(T *a, T *b);

// Forward declarations for C++ runtime functions
void *__cxa_allocate_exception(size_t thrown_size);
void __cxa_throw(void *exception, struct type_info *info, void (*dest) (void *));
void *__cxa_begin_catch(void *exception);
void __cxa_end_catch();
void __cxa_rethrow();
int __cxa_atexit(void (*func) (void *), void *arg, void *dso_handle);
void *operator new(size_t size);
void operator delete(void *ptr, size_t size);
void *operator new[](size_t size);
void operator delete[](void *ptr, size_t size);

// Forward declarations for test functions
void test_cpp_oo_features();
int test_cpp_member_func();
int test_cpp_constructor();
int call_virtual_func(struct Base *obj, int x);
int test_cpp_virtual_func();
int test_cpp_multiple_inheritance();
int test_cpp_diamond_inheritance();
int test_cpp_operator_overload();
int test_cpp_template_func();
int test_cpp_template_class();
int test_cpp_lambda();
int test_cpp_smart_ptr();
int test_cpp_rtti();
int test_cpp_exception();

// Forward declarations for C++ runtime functions (additional)
void *__dynamic_cast(const void *src, const struct __class_type_info *dst_type, const struct __class_type_info *src_type, void *src2);

// Forward declarations for classes (needed by functions)
struct SimpleClass;
struct Base;
struct Derived;
struct LifecycleClass;
struct MiddleA;
struct MiddleB;
struct MultiDerived;
struct DiamondDerived;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;

// Template function declarations (forward)
template<typename T> T template_max(T a, T b);
template<typename T> void template_swap(T *a, T *b);

// type_info for int (used by exception handling)
extern struct type_info type_info_for_int;

// Template container forward declaration
template<typename T> struct Container;

// Template function definitions
template<typename T>
T template_max(T a, T b) {
    return (a < b) ? b : a;
}

template<typename T>
void template_swap(T *a, T *b) {
    T temp = *a;
    *a = *b;
    *b = temp;
}

// Forward declaration for CRT stub
long long call_weak_fn(void);

// Class forward declarations
struct SimpleClass;
struct Base;
struct Derived;
struct LifecycleClass;
struct MiddleA;
struct MiddleB;
struct MultiDerived;
struct DiamondDerived;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
template<typename T> struct Container;

// Forward declarations for template functions
template<typename T> T template_max(T a, T b);
template<typename T> void template_swap(T *a, T *b);
struct MiddleA;
struct MiddleB;
struct MultiDerived;
struct DiamondDerived;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
template<typename T> struct Container;

// Template function declarations
template<typename T> T template_max(T a, T b);
template<typename T> void template_swap(T *a, T *b);

// LifecycleClass definition
struct LifecycleClass {
public:
    static int instance_count;
};

int LifecycleClass::instance_count = 0;

// External symbols used in RTTI
extern void *off_12C28;
extern void *off_12C50;

// Class definitions with virtual tables
struct Base {
    void **_vptr.Base;
    int data;
    virtual int virtual_func(int x);
    virtual const char *getName();
    virtual ~Base();
};

struct Derived {
    void **_vptr.Derived;
    int data;
    int multiplier;
    virtual int virtual_func(int x);
    virtual const char *getName();
    virtual ~Derived();
};

struct MiddleA {
    void **_vptr.MiddleA;
    int dataA;
    virtual int func();
};

struct MiddleB {
    void **_vptr.MiddleB;
    int dataB;
    virtual int func();
};

struct MultiDerived {
    void **_vptr.Base;
    int data;
    void *BaseB;
    int dataB;
    int multiplier;
    virtual int virtual_func(int x);
    virtual const char *getName();
    int funcA();
    int funcB();
    virtual ~MultiDerived();
};

struct DiamondDerived {
    void **_vptr.MiddleA;
    int dataA;
    void **_vptr.MiddleB;
    int dataB;
    virtual int func();
    virtual ~DiamondDerived();
};

struct RTTIBase {
    void **_vptr.RTTIBase;
};

struct RTTIDerivedA : RTTIBase {
    virtual int getType();
    virtual ~RTTIDerivedA();
};

struct RTTIDerivedB : RTTIBase {
    virtual int getType();
    virtual ~RTTIDerivedB();
};

/* Function: .init_proc @ 0xE90 */
long long init_proc()
{
 return call_weak_fn();
}


// Forward declaration for JUMPOUT
void JUMPOUT(long long addr);

/* Function: sub_EB0 @ 0xEB0 */
void sub_EB0()
{
 JUMPOUT(0);
}


/* Function: _Z18test_cpp_exceptionv @ 0x1040 */
int test_cpp_exception()
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
}


// Forward declaration for std namespace components
struct _Static_init_complete {};
extern struct _Static_init_complete __ioinit;
extern void *_dso_handle;

/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x1140 */
void GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 // Stub for static initialization - actual implementation would call std::ios_base::Init::Init
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */

// SimpleClass definition
struct SimpleClass {
    char name[32];
};

// Forward declarations for template functions (needed by test_cpp_member_func)
template<typename T> T template_max(T a, T b);
template<typename T> void template_swap(T *a, T *b);

// Forward declarations for classes (needed by functions)
struct Base;
struct Derived;
struct LifecycleClass;

// Template function declarations (forward)
template<typename T> T template_max(T a, T b);
template<typename T> void template_swap(T *a, T *b);

// Template function definitions
template<typename T>
T template_max(T a, T b) {
    return (a < b) ? b : a;
}

template<typename T>
void template_swap(T *a, T *b) {
    T temp = *a;
    *a = *b;
    *b = temp;
}

// LifecycleClass definition
struct LifecycleClass {
public:
    static int instance_count;
};

int LifecycleClass::instance_count = 0;

// Forward declarations for classes (needed by functions)
struct SimpleClass;
struct Base;
struct Derived;
struct LifecycleClass;

// Forward declarations for template functions
template<typename T> T template_max(T a, T b);
template<typename T> void template_swap(T *a, T *b);

/* Function: _Z20test_cpp_member_funcv @ 0x12A0 */
int test_cpp_member_func()
{
 // Using file-scoped declarations

 char *v0; // x0
 struct SimpleClass obj; // [xsp+10h] [xbp+10h] BYREF

 v0 = strncpy(obj.name, "Test", 0x1Fu);
 obj.name[31] = 0;
 return strlen(v0) + 4700;
}


// Forward declaration for LifecycleClass
struct LifecycleClass;

/* Function: _Z20test_cpp_constructorv @ 0x1310 */
int test_cpp_constructor()
{
 return LifecycleClass::instance_count + 21 + 1000 * LifecycleClass::instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x1330 */
int call_virtual_func(struct Base *obj, int x)
{
 return (*obj->_vptr.Base)(obj, x);
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

 v0 = template_max<int>(3, 7);
 v1 = template_max<double>(2.5, 1.5);
 a = 10;
 b = 20;
 template_swap<int>(&a, &b);
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

 v0 = (long long *)operator new(8u);
 *v0 = (long long)off_12C28;
 v1 = (void *)operator new(8u);
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
 (const struct __class_type_info *)&`typeinfo for'RTTIBase,
 (const struct __class_type_info *)&`typeinfo for'RTTIDerivedA,
 0) )
 {
 v6 = v5 + 100;
 }
 if ( __dynamic_cast(
 v1,
 (const struct __class_type_info *)&`typeinfo for'RTTIBase,
 (const struct __class_type_info *)&`typeinfo for'RTTIDerivedB,
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


// Forward declarations for classes
struct Base;
struct Derived;
struct LifecycleClass;

// Forward declarations for template functions
template<typename T> T template_max(T a, T b);
template<typename T> void template_swap(T *a, T *b);

// Forward declarations for classes
struct LifecycleClass;

// Forward declarations for template functions
template<typename T> T template_max(T a, T b);
template<typename T> void template_swap(T *a, T *b);

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
 __printf_chk(1, &unk_1BC8, (unsigned int)(v0 + 4700));
 __printf_chk(
 1,
 &unk_1BE8,
 (unsigned int)(LifecycleClass::instance_count + 21 + 1000 * LifecycleClass::instance_count));
 __printf_chk(1, &unk_1C08, 42);
 __printf_chk(1, &unk_1C28, 71);
 __printf_chk(1, &unk_1C48, 650);
 __printf_chk(1, &unk_1C68, 22);
 v1 = template_max<int>(3, 7);
 v2 = template_max<double>(2.5, 1.5);
 a = 10;
 b = 20;
 template_swap<int>(&a, &b);
 __printf_chk(1, &unk_1C88, (unsigned int)((int)v2 + v1 + a + b));
 __printf_chk(1, &unk_1CA8, 16);
 __printf_chk(1, &unk_1CC8, 85);
 test_cpp_exception();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x17D0 */
int Base::virtual_func(Base *const this, int x)
{
 return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x17E0 */
const char * Base::getName(const Base *const this)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x17F0 */
void Base::~Base(Base *const this)
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1800 */
int Derived::virtual_func(Derived *const this, int x)
{
 return x * this->multiplier;
}


/* Function: _ZNK7Derived7getNameEv @ 0x1810 */
const char * Derived::getName(const Derived *const this)
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x1820 */
int MultiDerived::funcA(MultiDerived *const this)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x1830 */
int MultiDerived::funcB(MultiDerived *const this)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x1840 */
struct non_virtual_thunk_to_MultiDerived::funcB(MultiDerived *this)
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x1850 */
int MiddleA::func(MiddleA *const this)
{
 return *(int *)((char *)&this->dataA + *((unsigned long long *)this->_vptr.MiddleA - 3)) + 150;
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x1870 */
long long virtual_thunk_to_MiddleA::func(MiddleA *this)
{
 return (unsigned int)(*(int *)((char *)&this->dataA
 + *((unsigned long long *)this->_vptr.MiddleA - 3)
 + *(*(unsigned long long **)((char *)&this->_vptr.MiddleA + *((unsigned long long *)this->_vptr.MiddleA - 3)) - 3))
 + 150);
}


/* Function: _ZN7MiddleB4funcEv @ 0x18A0 */
int MiddleB::func(MiddleB *const this)
{
 return *(int *)((char *)&this->dataB + *((unsigned long long *)this->_vptr.MiddleB - 3)) + 200;
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x18C0 */
long long virtual_thunk_to_MiddleB::func(MiddleB *this)
{
 return (unsigned int)(*(int *)((char *)&this->dataB
 + *((unsigned long long *)this->_vptr.MiddleB - 3)
 + *(*(unsigned long long **)((char *)&this->_vptr.MiddleB + *((unsigned long long *)this->_vptr.MiddleB - 3)) - 3))
 + 200);
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x18F0 */
int DiamondDerived::func(DiamondDerived *const this)
{
 return *(int *)((char *)&this->dataA + *((unsigned long long *)this->_vptr.MiddleA - 3)) + 250;
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x1910 */
long long virtual_thunk_to_DiamondDerived::func(DiamondDerived *this)
{
 return (unsigned int)(*(int *)((char *)&this->dataA
 + *((unsigned long long *)this->_vptr.MiddleA - 3)
 + *(*(unsigned long long **)((char *)&this->_vptr.MiddleA + *((unsigned long long *)this->_vptr.MiddleA - 3)) - 3))
 + 250);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x1934 */
long long non_virtual_thunk_to_DiamondDerived::func(DiamondDerived *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*((unsigned long long *)&this[-1].dataB + 1) - 24LL) - 8) + 250);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1950 */
int RTTIDerivedA::getType(const RTTIDerivedA *const this)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1960 */
int RTTIDerivedB::getType(const RTTIDerivedB *const this)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x1970 */
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *const this)
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x1980 */
void RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *const this)
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x1990 */
void DiamondDerived::~DiamondDerived(DiamondDerived *const this)
{
 ;
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x1994 */
void virtual_thunk_to_DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 ;
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x19A0 */
void non_virtual_thunk_to_DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x19B0 */
void MultiDerived::~MultiDerived(MultiDerived *const this)
{
 ;
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x19B4 */
void non_virtual_thunk_to_MultiDerived::~MultiDerived(MultiDerived *this)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x19C0 */
void Derived::~Derived(Derived *const this)
{
 ;
}


// Forward declaration for operator delete
void operator delete(void *ptr, size_t size);

/* Function: _ZN4BaseD0Ev @ 0x19D0 */
void Base::~Base(Base *const this)
{
 operator delete(this, 8u);
}


/* Function: _ZN7DerivedD0Ev @ 0x19E0 */
void Derived::~Derived(Derived *const this)
{
 operator delete(this, 0x10u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x19F0 */
void MultiDerived::~MultiDerived(MultiDerived *const this)
{
 operator delete(this, 0x20u);
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x1A00 */
void non_virtual_thunk_to_MultiDerived::~MultiDerived(MultiDerived *this)
{
 operator delete(&this[-1].BaseB, 0x20u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1A10 */
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *const this)
{
 operator delete(this, 8u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1A20 */
void RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *const this)
{
 operator delete(this, 8u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x1A30 */
void DiamondDerived::~DiamondDerived(DiamondDerived *const this)
{
 operator delete(this, 0x30u);
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x1A40 */
void virtual_thunk_to_DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 operator delete((char *)this + *((unsigned long long *)this->_vptr.MiddleA - 4), 0x30u);
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x1A54 */
void non_virtual_thunk_to_DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 operator delete(&this[-1].dataB + 2, 0x30u);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1A60 */
int template_max<int>(int a, int b)
{
 if ( a < b )
 return b;
 return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1A70 */
double template_max<double>(double a, double b)
{
 if ( a <= b )
 return b;
 return a;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1A80 */
void template_swap<int>(int *a, int *b)
{
 int v2; // w2

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1AA0 */
void Container<int>::Container(Container<int> *const this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1AB0 */
void Container<int>::push(Container<int> *const this, int value)
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
int Container<int>::get(const Container<int> *const this, int idx)
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
int Container<int>::getSize(const Container<int> *const this)
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1B10 */
void Container<double>::Container(Container<double> *const this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1B20 */
void Container<double>::push(Container<double> *const this, double value)
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
double Container<double>::get(const Container<double> *const this, int idx)
{
 double result; // d0

 result = 0.0;
 if ( (idx & 0x80000000) == 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1B60 */
int Container<double>::getSize(const Container<double> *const this)
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
