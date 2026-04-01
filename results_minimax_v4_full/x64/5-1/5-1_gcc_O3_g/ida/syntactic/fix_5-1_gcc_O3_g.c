/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_gcc_O3_g
 * Processor: pc
 */

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <typeinfo>
#include <cmath>

// External declarations for runtime functions
extern "C" {
    void __gmon_start__(void);
    void *__cxa_allocate_exception(unsigned long long size);
    void __cxa_throw(void *exception, void *type_info, void (*destructor)(void *));
    void *__cxa_begin_catch(void *exception);
    void __cxa_end_catch(void);
    void __cxa_rethrow(void);
    int __stack_chk_fail(void);
    void *__dynamic_cast(const void *src, const void *src_type, const void *dst_type, long long offset);
    int strcmp(const char *s1, const char *s2);
    size_t strlen(const char *s);
    int __printf_chk(int flag, const char *format, ...);
    int __cxa_atexit(void (*destructor)(void *), void *arg, void *dso_handle);
    void *_dso_handle;
}

// C++ operators (not C functions)
void *operator new(size_t);
void operator delete(void *);

// GCC intrinsic for reading FS segment register (stack canary)
#ifdef __GNUC__
static inline unsigned long long __readfsqword(unsigned long long offset) {
    unsigned long long result;
    __asm__ volatile("movq %%fs:%1, %0" : "=r"(result) : "m"(*(const char *)offset));
    return result;
}
#endif

/* Function: .init_proc @ 0x1000 */
void init_proc(void)
{
 if ( &__gmon_start__ )
  __gmon_start__();
}


/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 // JUMPOUT - unreachable code in original binary
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
void test_cpp_exception()
{
 unsigned int *exception; // rax

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&typeid(int), 0);
}


// Forward declarations for template functions
template<typename T> T template_max(T a, T b);
template<> int template_max(int a, int b);
template<> double template_max(double a, double b);
template<typename T> void template_swap(T *a, T *b);

// Class definitions
class Base {
public:
    virtual int virtual_func(int x);
    virtual ~Base();
    const char *getName() const;
    virtual void dummy() {}
};

class Derived : public Base {
public:
    int multiplier;
    int virtual_func(int x) override;
    const char *getName() const;
    ~Derived();
};

class SimpleClass {
public:
    char name[32];
};

class LifecycleClass {
public:
    static int instance_count;
    LifecycleClass() { instance_count++; }
    ~LifecycleClass() { instance_count--; }
};

class MultiDerived : public Derived {
public:
    int data;
    int funcA();
    int funcB();
    ~MultiDerived();
};

class MiddleA {
public:
    int dataA;
    int func();
    virtual ~MiddleA() {}
};

class MiddleB {
public:
    int dataB;
    int func();
    virtual ~MiddleB() {}
};

class DiamondDerived : public MiddleA, public MiddleB {
public:
    int func();
    ~DiamondDerived();
};

class RTTIBase {
public:
    virtual ~RTTIBase() {}
};

class RTTIDerivedA : public RTTIBase {
public:
    int getType() const;
    ~RTTIDerivedA();
};

class RTTIDerivedB : public RTTIBase {
public:
    int getType() const;
    ~RTTIDerivedB();
};

template<class T> class Container {
public:
    T data[10];
    int size;
    Container();
    void push(T value);
    T get(int idx) const;
    int getSize() const;
};

// Forward declarations for functions used before defined
void test_cpp_oo_features();

/* Function: main @ 0x1310 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


// Stub for std::__ioinit - CRT initialization
namespace std {
    class ios_base;
    namespace __ioinit {
        extern ios_base Init;
    }
}

void GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 std::ios_base::Init::Init(&std::__ioinit);
 _cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x1450 */
int test_cpp_member_func()
{
 SimpleClass obj; // [rsp+0h] [rbp-38h] BYREF
 unsigned long long v2; // [rsp+28h] [rbp-10h]

 v2 = __readfsqword(0x28u);
 *(unsigned long long *)obj.name = 1953719636;
 memset(&obj.name[8], 0, 24);
 return strlen(obj.name) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x14D0 */
int test_cpp_constructor()
{
 return 1001 * LifecycleClass::instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x14F0 */
int call_virtual_func(Base *obj, int x)
{
 return (*obj->_vptr_Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1500 */
int test_cpp_virtual_func()
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1510 */
int test_cpp_multiple_inheritance()
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1520 */
int test_cpp_diamond_inheritance()
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1530 */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1540 */
int test_cpp_template_func()
{
 double v0; // xmm2_8
 int v1; // ebx
 double r2; // [rsp+8h] [rbp-20h]
 int a; // [rsp+10h] [rbp-18h] BYREF
 int b; // [rsp+14h] [rbp-14h] BYREF
 unsigned long long v6; // [rsp+18h] [rbp-10h]

 v6 = __readfsqword(0x28u);
 v1 = template_max(3, 7);
 a = 10;
 r2 = template_max<double>(1.5, v0);
 b = 20;
 template_swap<int>(&a, &b);
 return b + a + v1 + (int)r2;
}


/* Function: _Z23test_cpp_template_classv @ 0x15E0 */
int test_cpp_template_class()
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x15F0 */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1600 */
int test_cpp_smart_ptr()
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x1610 */
int test_cpp_rtti()
{
 long long *v0; // r13
 unsigned long long *v1; // rax
 long long v2; // r15
 const void *v3; // rbp
 long long v4; // rax
 const char *v5; // r12
 int v6; // r14d
 int v7; // r12d
 int v9; // ebx

 v0 = (long long *)operator new(8u);
 *v0 = (long long)off_3C70;
 v1 = (unsigned long long *)operator new(8u);
 v2 = *v0;
 v3 = v1;
 *v1 = off_3C98;
 v4 = *(unsigned long long *)(v2 - 8);
 v5 = *(const char **)(v4 + 8);
 if ( v5 == "12RTTIDerivedA" )
 {
 v6 = 30;
 }
 else if ( *v5 == 42 )
 {
 v6 = 20;
 }
 else
 {
 v6 = strcmp(*(const char **)(v4 + 8), "12RTTIDerivedA") == 0 ? 30 : 20;
 }
 v9 = v6;
 if ( __dynamic_cast(
 v0,
 (const __class_type_info *)typeid(RTTIBase).name(),
 (const __class_type_info *)typeid(RTTIDerivedA).name(),
 0) )
 {
 v9 = v6 + 100;
 }
 if ( __dynamic_cast(
 v3,
 (const __class_type_info *)typeid(RTTIBase).name(),
 (const __class_type_info *)typeid(RTTIDerivedB).name(),
 0) )
 {
 v9 += 200;
 }
 v7 = v9 + strlen(&v5[*v5 == 42]);
 (*(void ( **)(long long *))(v2 + 8))(v0);
 (*(void ( **)(const void *))(*(unsigned long long *)v3 + 8LL))(v3);
 return v7;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1780 */
void test_cpp_oo_features()
{
 double v0; // xmm2_8
 int v1; // eax
 int v2; // ebx
 double v3; // [rsp+8h] [rbp-50h]
 int a; // [rsp+18h] [rbp-40h] BYREF
 int b; // [rsp+1Ch] [rbp-3Ch] BYREF
 char s[8]; // [rsp+24h] [rbp-34h] BYREF
 long long v7; // [rsp+2Ch] [rbp-2Ch]
 long long v8; // [rsp+34h] [rbp-24h]
 int v9; // [rsp+3Ch] [rbp-1Ch]
 short v10; // [rsp+40h] [rbp-18h]
 char v11; // [rsp+42h] [rbp-16h]
 char v12; // [rsp+43h] [rbp-15h]
 unsigned long long v13; // [rsp+48h] [rbp-10h]

 v13 = __readfsqword(0x28u);
 puts("s");
 *(unsigned long long *)s = 1953719636;
 v7 = 0;
 v8 = 0;
 v9 = 0;
 v10 = 0;
 v11 = 0;
 v12 = 0;
 v1 = strlen(s);
 __printf_chk(1, &unk_203C, (unsigned int)(v1 + 4700));
 __printf_chk(1, &unk_205A, (unsigned int)(1001 * LifecycleClass::instance_count + 21));
 __printf_chk(1, &unk_2076, 42);
 __printf_chk(1, &unk_2092, 71);
 __printf_chk(1, &unk_20AE, 650);
 __printf_chk(1, &unk_20CB, 22);
 v2 = template_max(3, 7);
 a = 10;
 v3 = template_max<double>(1.5, v0);
 b = 20;
 template_swap<int>(&a, &b);
 __printf_chk(1, &unk_20E7, (unsigned int)(b + a + v2 + (int)v3));
 __printf_chk(1, &unk_2103, 16);
 __printf_chk(1, &unk_211F, 85);
 test_cpp_exception();
}


// Method: Base::virtual_func
int Base::virtual_func(int x)
{
 return x + 1;
}


// Method: Base::getName
const char *Base::getName() const
{
 return "Base";
}


// Destructor: Base::~Base
void Base::~Base()
{
}


// Method: Derived::virtual_func
int Derived::virtual_func(int x)
{
 return x * multiplier;
}


// Method: Derived::getName
const char * Derived::getName() const
{
 return "Derived";
}


// Method: MultiDerived::funcA
int MultiDerived::funcA()
{
 return 30;
}


// Method: MultiDerived::funcB
int MultiDerived::funcB()
{
 return 40;
}


// Thunk function for MultiDerived::funcB
long long MultiDerived_funcB_thunk(MultiDerived *this)
{
 return MultiDerived::funcB();
}


// Method: MiddleA::func
int MiddleA::func()
{
 return dataA + 150;
}


// Method: MiddleB::func
int MiddleB::func()
{
 return dataB + 200;
}


// Virtual thunk to MiddleB::func
long long MiddleB_func_virtual_thunk(MiddleB *this_ptr)
{
 return (unsigned int)(*(int *)((char *)&this_ptr->dataB
 + *((unsigned long long *)this_ptr->_vptr_MiddleB - 3)
 + *(*(unsigned long long **)((char *)&this_ptr->_vptr_MiddleB + *((unsigned long long *)this_ptr->_vptr_MiddleB - 3)) - 3))
 + 200);
}


// Method: DiamondDerived::func
int DiamondDerived::func()
{
 return dataA + 250;
}


// Virtual thunk to DiamondDerived::func
long long DiamondDerived_func_virtual_thunk(DiamondDerived *this)
{
 return (unsigned int)(*(int *)((char *)&this->dataA
 + *((unsigned long long *)this->_vptr_MiddleA - 3)
 + *(*(unsigned long long **)((char *)&this->_vptr_MiddleA + *((unsigned long long *)this->_vptr_MiddleA - 3)) - 3))
 + 250);
}


// Non-virtual thunk to DiamondDerived::func
long long DiamondDerived_func_thunk(DiamondDerived *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*((unsigned long long *)&this[-1].dataB + 1) - 24LL) - 8) + 250);
}


// Method: RTTIDerivedA::getType
int RTTIDerivedA::getType() const
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1B00 */
int RTTIDerivedB::getType() const
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x1B10 */
RTTIDerivedB::~RTTIDerivedB()
{
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x1B20 */
RTTIDerivedA::~RTTIDerivedA()
{
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x1B30 */
DiamondDerived::~DiamondDerived()
{
}


// Virtual thunk to DiamondDerived::~DiamondDerived
void DiamondDerived_destructor_virtual_thunk(DiamondDerived *this)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1B60 */
MultiDerived::~MultiDerived()
{
}


// Non-virtual thunk to MultiDerived::~MultiDerived
void MultiDerived_destructor_thunk(MultiDerived *this_ptr)
{
 (void)this_ptr;
}


/* Function: _ZN7DerivedD2Ev @ 0x1B80 */
Derived::~Derived()
{
}


/* Function: _ZN4BaseD0Ev @ 0x1B90 */
Base::~Base()
{
 operator delete(this, 8u);
}


/* Function: _ZN7DerivedD0Ev @ 0x1BA0 */
Derived::~Derived()
{
 operator delete(this, 0x10u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x1BB0 */
MultiDerived::~MultiDerived()
{
 operator delete(this, 0x20u);
}


// Non-virtual thunk to MultiDerived::~MultiDerived
void MultiDerived_destructor_thunk(MultiDerived *this_ptr)
{
 (void)this_ptr;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1BE0 */
RTTIDerivedB::~RTTIDerivedB()
{
 operator delete(this, 8u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1BF0 */
RTTIDerivedA::~RTTIDerivedA()
{
 operator delete(this, 8u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x1C00 */
DiamondDerived::~DiamondDerived()
{
 operator delete(this, 0x30u);
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x1C10 */
void DiamondDerived_virtual_thunk_destructor(DiamondDerived *this)
{
 operator delete((char *)this + *((unsigned long long *)this->_vptr_MiddleA - 4), 0x30u);
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x1C30 */
void DiamondDerived_nonvirtual_thunk_destructor(DiamondDerived *this)
{
 operator delete(&this[-1].dataB + 2, 0x30u);
}


// Template function: template_max<int>
int template_max(int a, int b)
{
 int result; // eax

 result = b;
 if ( a >= b )
 return a;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1C60 */
double template_max<double>(double a1, double a, double b)
{
 return fmax(a1, a);
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1C70 */
void template_swap<int>(int *a, int *b)
{
 int v2; // eax

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1C80 */
void Container<int>::Container(Container<int> *const this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1C90 */
void Container<int>::push(Container<int> *const this, int value)
{
 long long size; // rax

 size = this->size;
 if ( (int)size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x1CB0 */
int Container<int>::get(const Container<int> *const this, int idx)
{
 int result; // eax

 result = 0;
 if ( idx >= 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1CD0 */
int Container<int>::getSize(const Container<int> *const this)
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1CE0 */
void Container<double>::Container(Container<double> *const this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1CF0 */
void Container<double>::push(Container<double> *const this, double a2, double value)
{
 long long size; // rax

 size = this->size;
 if ( (int)size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = a2;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1D10 */
double Container<double>::get(const Container<double> *const this, int idx)
{
 double result; // xmm0_8

 result = 0.0;
 if ( idx >= 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1D40 */
int Container<double>::getSize(const Container<double> *const this)
{
 return this->size;
}


/* Function: .term_proc @ 0x1D48 */
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
