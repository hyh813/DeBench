#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Define __readfsqword intrinsic for GCC
static inline unsigned long long __readfsqword(unsigned long long offset) {
    unsigned long long val;
    __asm__ volatile("movq %%fs:(%1), %0" : "=r"(val) : "r"(offset));
    return val;
}

// Define type_info structures
struct type_info {
    const char *name;
};

// Forward declarations for classes
struct Base;
struct Derived;
struct MultiDerived;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct LifecycleClass;
template<typename T> struct Container;

// Full class definitions for proper compilation
struct Base {
    long long vtable;
    int member1;
    virtual ~Base();
};

struct Derived {
    long long vtable;
    int member1;
    int member2;
    int virtual_value;
    virtual ~Derived();
};

struct MultiDerived {
    long long vtable;
    int member1;
    int member2;
    int middleA_value;
    int middleB_value;
    int derived_value;
    virtual ~MultiDerived();
};

struct MiddleA {
    long long vtable;
    int value;
};

struct MiddleB {
    long long vtable;
    int value;
};

struct DiamondDerived {
    long long vtable;
    int middleA_value;
    int middleB_value;
    int derived_value;
};

struct RTTIDerivedA {
    long long vtable;
    int type;
    virtual ~RTTIDerivedA();
};

struct RTTIDerivedB {
    long long vtable;
    int type;
    virtual ~RTTIDerivedB();
};

struct RTTIBase {
    long long vtable;
};

struct LifecycleClass {
    static long long instance_count;
};

// External declarations
extern "C" {
    void __cxa_throw(void* exception, struct type_info* info, void (*dest)(void*));
    void* __cxa_allocate_exception(unsigned int size);
    void* __cxa_begin_catch(void* exc);
    void __cxa_end_catch();
    void __cxa_rethrow();
    int __cxa_atexit(void (*func)(void*), void* arg, void* dso);
    int strcmp(const char* s1, const char* s2);
    size_t strlen(const char* s);
    int __printf_chk(int flag, const char* format, ...);
    void* operator new(size_t size);
    void operator delete(void* ptr);
    void operator delete(void* ptr, size_t size);
    void* __dynamic_cast(const void* src, const struct __class_type_info* from, const struct __class_type_info* to, unsigned long long offset);
}

// GCC RTTI type info structures
struct __class_type_info {
    const char* name;
};

// Template function declarations
template<typename T>
T template_max(T a, T b);

template<typename T>
void template_swap(T* a, T* b);

// Global string
char s[] = "Hello";
// External declaration for _gmon_start__
extern void _gmon_start__(void);

long long (**init_proc())(void)
{
 long long (**result)(void); // rax

 result = &_gmon_start__;
 if ( &_gmon_start__ )
 return (long long (**)(void))_gmon_start__();
 return result;
}


/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 // Empty function - was a jump target
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 sub_1020();
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
 sub_1020();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
 sub_1020();
}


/* Function: sub_1060 @ 0x1060 */
void sub_1060()
{
 sub_1020();
}


/* Function: sub_1070 @ 0x1070 */
void sub_1070()
{
 sub_1020();
}


/* Function: sub_1080 @ 0x1080 */
void sub_1080()
{
 sub_1020();
}


/* Function: sub_1090 @ 0x1090 */
void sub_1090()
{
 sub_1020();
}


/* Function: sub_10A0 @ 0x10A0 */
void sub_10A0()
{
 sub_1020();
}


/* Function: sub_10B0 @ 0x10B0 */
void sub_10B0()
{
 sub_1020();
}


/* Function: sub_10C0 @ 0x10C0 */
void sub_10C0()
{
 sub_1020();
}


/* Function: sub_10D0 @ 0x10D0 */
void sub_10D0()
{
 sub_1020();
}


/* Function: sub_10E0 @ 0x10E0 */
void sub_10E0()
{
 sub_1020();
}


/* Function: sub_10F0 @ 0x10F0 */
void sub_10F0()
{
 sub_1020();
}


/* Function: sub_1100 @ 0x1100 */
void sub_1100()
{
 sub_1020();
}


/* Function: sub_1110 @ 0x1110 */
void sub_1110()
{
 sub_1020();
}


/* Function: sub_1120 @ 0x1120 */
void sub_1120()
{
 sub_1020();
}


/* Function: _Z18test_cpp_exceptionv @ 0x1240 */
void test_cpp_exception(void)
{
 unsigned int *exception;

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&typeinfo_for_int, 0);
}


/* Function: main @ 0x1310 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
 return 0;
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x1330 */
int GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 // Stub for global constructor - ios_base::Init not available in C
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Define type_info symbols for RTTI (GCC uses backtick prefix)
static const char typeinfo_for_int[] = "int";
static const char typeinfo_for_RTTIBase[] = "RTTIBase";
static const char typeinfo_for_RTTIDerivedA[] = "RTTIDerivedA";
static const char typeinfo_for_RTTIDerivedB[] = "RTTIDerivedB";
static const char typeinfo_for_Base[] = "Base";
static const char typeinfo_for_Derived[] = "Derived";
static const char typeinfo_for_MultiDerived[] = "MultiDerived";
static const char typeinfo_for_DiamondDerived[] = "DiamondDerived";
static const char typeinfo_for_MiddleA[] = "MiddleA";
static const char typeinfo_for_MiddleB[] = "MiddleB";

// Virtual function table pointers
static const void* vtable_Base[] = { (void*)&typeinfo_for_Base };
static const void* vtable_Derived[] = { (void*)&typeinfo_for_Derived };
static const void* vtable_MultiDerived[] = { (void*)&typeinfo_for_MultiDerived };
static const void* vtable_DiamondDerived[] = { (void*)&typeinfo_for_DiamondDerived };
static const void* vtable_MiddleA[] = { (void*)&typeinfo_for_MiddleA };
static const void* vtable_MiddleB[] = { (void*)&typeinfo_for_MiddleB };
static const void* vtable_RTTIDerivedA[] = { (void*)&typeinfo_for_RTTIDerivedA };
static const void* vtable_RTTIDerivedB[] = { (void*)&typeinfo_for_RTTIDerivedB };

// Forward declare classes for vtable references
struct Base;
struct Derived;
struct MultiDerived;
struct DiamondDerived;
struct MiddleA;
struct MiddleB;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;

/* Function: _Z20test_cpp_member_funcv @ 0x1450 */
long long test_cpp_member_func(void)
{
 char s[8]; // [rsp+4h] [rbp-34h] BYREF
 long long v2; // [rsp+Ch] [rbp-2Ch]
 long long v3; // [rsp+14h] [rbp-24h]
 int v4; // [rsp+1Ch] [rbp-1Ch]
 short v5; // [rsp+20h] [rbp-18h]
 char v6; // [rsp+22h] [rbp-16h]
 char v7; // [rsp+23h] [rbp-15h]
 unsigned long long v8; // [rsp+28h] [rbp-10h]

 v8 = __readfsqword(0x28u);
 v6 = 0;
 *(unsigned long long *)s = 1953719636;
 v2 = 0;
 v3 = 0;
 v4 = 0;
 v5 = 0;
 v7 = 0;
 return (unsigned int)strlen(s) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x14D0 */
long long test_cpp_constructor(void)
{
 return (unsigned int)(1001 * LifecycleClass::instance_count + 21);
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x14F0 */
long long call_virtual_func(Base *a1)
{
 return (**(long long ( ***)(Base *))a1)(a1);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1500 */
long long test_cpp_virtual_func(void)
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1510 */
long long test_cpp_multiple_inheritance(void)
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1520 */
long long test_cpp_diamond_inheritance(void)
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1530 */
long long test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1540 */
long long test_cpp_template_func(void)
{
 int v0; // ebx
 double v2; // [rsp+8h] [rbp-20h]
 int v3; // [rsp+10h] [rbp-18h] BYREF
 int v4; // [rsp+14h] [rbp-14h] BYREF
 unsigned long long v5; // [rsp+18h] [rbp-10h]

 v5 = __readfsqword(0x28u);
 v0 = template_max<int>(3, 7);
 v3 = 10;
 v2 = template_max<double>(2.5, 1.5);
 v4 = 20;
 template_swap<int>(&v3, &v4);
 return (unsigned int)(v4 + v3 + v0 + (int)v2);
}


/* Function: _Z23test_cpp_template_classv @ 0x15E0 */
long long test_cpp_template_class(void)
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x15F0 */
long long test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1600 */
long long test_cpp_smart_ptr(void)
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x1610 */
long long test_cpp_rtti(void)
{
 int v0; // ebx
 long long *v1; // r13
 unsigned long long *v2; // rax
 long long v3; // r14
 const void *v4; // rbp
 long long v5; // rax
 const char *v6; // r12
 int v7; // ebx
 unsigned int v8; // r12d

 v0 = 10;
 v1 = (long long *)operator new(8u);
 *v1 = (long long)off_3C70;
 v2 = (unsigned long long *)operator new(8u);
 v3 = *v1;
 v4 = v2;
 *v2 = off_3C98;
 v5 = *(unsigned long long *)(v3 - 8);
 v6 = *(const char **)(v5 + 8);
 if ( v6 != "12RTTIDerivedA" )
 {
 v0 = 0;
 if ( *v6 != 42 )
 v0 = strcmp(*(const char **)(v5 + 8), "12RTTIDerivedA") == 0 ? 0xA : 0;
 }
 v7 = v0 + 20;
 if ( __dynamic_cast(
 v1,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedA,
 0) )
 {
 v7 += 100;
 }
 if ( __dynamic_cast(
 v4,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedB,
 0) )
 {
 v7 += 200;
 }
 v8 = v7 + strlen(&v6[*v6 == 42]);
 (*(void ( **)(long long *))(v3 + 8))(v1);
 (*(void ( **)(const void *))(*(unsigned long long *)v4 + 8LL))(v4);
 return v8;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1740 */
void test_cpp_oo_features(void)
{
 int v0; // eax
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax
 char s[8]; // [rsp+4h] [rbp-34h] BYREF
 long long v5; // [rsp+Ch] [rbp-2Ch]
 long long v6; // [rsp+14h] [rbp-24h]
 int v7; // [rsp+1Ch] [rbp-1Ch]
 short v8; // [rsp+20h] [rbp-18h]
 char v9; // [rsp+22h] [rbp-16h]
 char v10; // [rsp+23h] [rbp-15h]
 unsigned long long v11; // [rsp+28h] [rbp-10h]

 v11 = __readfsqword(0x28u);
 puts(::s);
 *(unsigned long long *)s = 1953719636;
 v5 = 0;
 v6 = 0;
 v7 = 0;
 v8 = 0;
 v9 = 0;
 v10 = 0;
 v0 = strlen(s);
 __printf_chk(1, &unk_203C, (unsigned int)(v0 + 4700));
 v1 = test_cpp_constructor();
 __printf_chk(1, &unk_205A, v1);
 __printf_chk(1, &unk_2076, 42);
 __printf_chk(1, &unk_2092, 71);
 v2 = test_cpp_diamond_inheritance();
 __printf_chk(1, &unk_20AE, v2);
 __printf_chk(1, &unk_20CB, 22);
 v3 = test_cpp_template_func();
 __printf_chk(1, &unk_20E7, v3);
 __printf_chk(1, &unk_2103, 16);
 __printf_chk(1, &unk_211F, 85);
 test_cpp_exception();
}


/* Function: Base_virtual_func @ 0x18F0 */
long long Base_virtual_func(void* this_ptr, int a2)
{
 return (unsigned int)(a2 + 1);
}


/* Function: _ZNK4Base7getNameEv @ 0x1900 */
const char * Base_getName(void)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x1910 */
void Base::~Base()
{
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1920 */
long long Derived::virtual_func(Derived *this_ptr, int a2)
{
 return (unsigned int)(a2 * *((unsigned int *)this_ptr + 2));
}


/* Function: _ZNK7Derived7getNameEv @ 0x1930 */
const char * Derived::getName(Derived *this_ptr)
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x1940 */
long long MultiDerived::funcA(MultiDerived *this_ptr)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x1950 */
long long MultiDerived::funcB(MultiDerived *this_ptr)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x1960 */
long long non_virtual_thunk_to_MultiDerived_funcB(MultiDerived *this_ptr)
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x1970 */
long long MiddleA::func(MiddleA *this_ptr)
{
 return (unsigned int)(*(unsigned int *)((char *)this_ptr + *(unsigned long long *)(*(unsigned long long *)this_ptr - 24LL) + 8) + 150);
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x1990 */
long long virtual_thunk_to_MiddleA_func(MiddleA *this_ptr)
{
 return (unsigned int)(*(unsigned int *)((char *)this_ptr
 + *(unsigned long long *)(*(unsigned long long *)this_ptr - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)this_ptr + *(unsigned long long *)(*(unsigned long long *)this_ptr - 24LL)) - 24LL)
 + 8)
 + 150);
}


/* Function: _ZN7MiddleB4funcEv @ 0x19B0 */
long long MiddleB::func(MiddleB *this_ptr)
{
 return (unsigned int)(*(unsigned int *)((char *)this_ptr + *(unsigned long long *)(*(unsigned long long *)this_ptr - 24LL) + 8) + 200);
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x19D0 */
long long virtual_thunk_to_MiddleB_func(MiddleB *this_ptr)
{
 return (unsigned int)(*(unsigned int *)((char *)this_ptr
 + *(unsigned long long *)(*(unsigned long long *)this_ptr - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)this_ptr + *(unsigned long long *)(*(unsigned long long *)this_ptr - 24LL)) - 24LL)
 + 8)
 + 200);
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x19F0 */
long long DiamondDerived::func(DiamondDerived *this_ptr)
{
 return (unsigned int)(*(unsigned int *)((char *)this_ptr + *(unsigned long long *)(*(unsigned long long *)this_ptr - 24LL) + 8) + 250);
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x1A10 */
long long virtual_thunk_to_DiamondDerived_func(DiamondDerived *this_ptr)
{
 return (unsigned int)(*(unsigned int *)((char *)this_ptr
 + *(unsigned long long *)(*(unsigned long long *)this_ptr - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)this_ptr + *(unsigned long long *)(*(unsigned long long *)this_ptr - 24LL)) - 24LL)
 + 8)
 + 250);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x1A30 */
long long non_virtual_thunk_to_DiamondDerived_func(DiamondDerived *this_ptr)
{
 return (unsigned int)(*(unsigned int *)((char *)this_ptr + *(unsigned long long *)(*((unsigned long long *)this_ptr - 2) - 24LL) - 8) + 250);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1A50 */
long long RTTIDerivedA::getType(RTTIDerivedA *this_ptr)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1A60 */
long long RTTIDerivedB::getType(RTTIDerivedB *this_ptr)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x1A70 */
RTTIDerivedB::~RTTIDerivedB()
{
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x1A80 */
RTTIDerivedA::~RTTIDerivedA()
{
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x1A90 */
DiamondDerived::~DiamondDerived()
{
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x1AA0 */
void virtual_thunk_to_DiamondDerived_dtor(DiamondDerived *this_ptr)
{
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x1AB0 */
void non_virtual_thunk_to_DiamondDerived_dtor(DiamondDerived *this_ptr)
{
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1AC0 */
MultiDerived::~MultiDerived()
{
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x1AD0 */
void non_virtual_thunk_to_MultiDerived_dtor(MultiDerived *this_ptr)
{
}


/* Function: _ZN7DerivedD2Ev @ 0x1AE0 */
void Derived::~Derived()
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x1AF0 */
Base::~Base()
{
}


/* Function: _ZN7DerivedD0Ev @ 0x1B00 */
Derived::~Derived()
{
 operator delete(this, 0x10u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x1B10 */
MultiDerived::~MultiDerived()
{
 operator delete(this, 0x20u);
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x1B20 */
void non_virtual_thunk_to_MultiDerived_dtor(MultiDerived *this_ptr)
{
 operator delete((char *)this_ptr - 16, 0x20u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1B40 */
RTTIDerivedB::~RTTIDerivedB()
{
 operator delete(this, 8u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1B50 */
RTTIDerivedA::~RTTIDerivedA()
{
 operator delete(this, 8u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x1B60 */
DiamondDerived::~DiamondDerived()
{
 operator delete(this, 0x30u);
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x1B70 */
void virtual_thunk_to_DiamondDerived_dtor(DiamondDerived *this_ptr)
{
 operator delete((char *)this_ptr + *(unsigned long long *)(*(unsigned long long *)this_ptr - 32LL), 0x30u);
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x1B90 */
void non_virtual_thunk_to_DiamondDerived_dtor(DiamondDerived *this_ptr)
{
 operator delete((char *)this_ptr - 16, 0x30u);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1BB0 */
long long template_max<int>(unsigned int a1, unsigned int a2)
{
 long long result; // rax

 result = a2;
 if ( (int)a1 >= (int)a2 )
 return a1;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1BC0 */
double template_max<double>(double a1, double a2)
{
 return fmax(a1, a2);
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1BD0 */
long long template_swap<int>(unsigned int *a1, unsigned int *a2)
{
 long long result; // rax

 result = (unsigned int)*a1;
 *a1 = *a2;
 *a2 = result;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1BE0 */
void Container<int>::Container(long long a1)
{
 *(unsigned int *)(a1 + 40) = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1BF0 */
long long Container<int>::push(long long a1, int a2)
{
 long long result; // rax

 result = *(int *)(a1 + 40);
 if ( (int)result <= 9 )
 {
 *(unsigned int *)(a1 + 40) = result + 1;
 *(unsigned int *)(a1 + 4 * result) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x1C10 */
long long Container<int>::get(long long a1, int a2)
{
 long long result; // rax

 result = 0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 40) > a2 )
 return *(unsigned int *)(a1 + 4LL * a2);
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1C30 */
long long Container<int>::getSize(long long a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1C40 */
void Container<double>::Container(long long a1)
{
 *(unsigned int *)(a1 + 80) = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1C50 */
long long Container<double>::push(long long a1, double a2)
{
 long long result; // rax

 result = *(int *)(a1 + 80);
 if ( (int)result <= 9 )
 {
 *(unsigned int *)(a1 + 80) = result + 1;
 *(double *)(a1 + 8 * result) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1C70 */
double Container<double>::get(long long a1, int a2)
{
 double result; // xmm0_8

 result = 0.0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 80) > a2 )
 return *(double *)(a1 + 8LL * a2);
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1CA0 */
long long Container<double>::getSize(long long a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: .term_proc @ 0x1CA8 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __printf_chk @ 0x4048 */

/* FAILED to decompile: __cxa_begin_catch @ 0x4050 */

/* FAILED to decompile: strlen @ 0x4058 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x4060 */

/* FAILED to decompile: __libc_start_main @ 0x4070 */

/* FAILED to decompile: __cxa_atexit @ 0x4078 */

/* FAILED to decompile: _Znwm @ 0x4080 */

/* FAILED to decompile: _ZdlPvm @ 0x4088 */

/* FAILED to decompile: __stack_chk_fail @ 0x4090 */

/* FAILED to decompile: __dynamic_cast @ 0x4098 */

/* FAILED to decompile: strcmp @ 0x40A8 */

/* FAILED to decompile: __cxa_rethrow @ 0x40B0 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x40B8 */

/* FAILED to decompile: puts @ 0x40C0 */

/* FAILED to decompile: __cxa_end_catch @ 0x40C8 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x40D0 */

/* FAILED to decompile: __cxa_throw @ 0x40D8 */

/* FAILED to decompile: _Unwind_Resume @ 0x40E0 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x40E8 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x40F0 */

/* FAILED to decompile: __gmon_start__ @ 0x4100 */

/* Total functions decompiled: 85, failed: 21 */
