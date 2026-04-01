/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_gcc_O1_no_g
 * Processor: pc
 */

// Forward declarations and class definitions
struct Base;
struct Derived;
struct MultiDerived;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct LifecycleClass;

// Standard library declarations
namespace std {
    namespace ios_base {
        struct Init {
            Init();
            ~Init();
        };
    }
    static ios_base::Init __ioinit;
}

// C library declarations
#include <stddef.h>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <new>

extern "C" {

size_t strlen(const char *s);
int strcmp(const char *s1, const char *s2);
void *malloc(size_t size);
void free(void *ptr);

void __cxa_throw(void *exception, void *type_info, void *destructor);
void *__cxa_allocate_exception(size_t size);
void *__cxa_begin_catch(void *exception);
void __cxa_end_catch();
void __cxa_rethrow();
void *__cxa_finalize(void *module);
void __stack_chk_fail();
int __gxx_personality_v0();
void _Unwind_Resume();
void __libc_start_main(void *main, int argc, void *argv, void *dtor);
void __gmon_start__();
void *_Znwm(size_t size);
void _ZdaPv(void *ptr);
void _ZdlPvm(void *ptr, size_t size);
void *_Znam(size_t size);

// Dynamic cast
void *__dynamic_cast(const void *sub, const void *base, const void *derived, long long offset);

} // extern "C"

// __readfsqword intrinsic
unsigned long long __readfsqword(unsigned long long offset);

// Virtual table pointers (vtables)
extern long long off_59A0;
extern long long off_59D0;
extern long long off_5B78;
extern long long off_5BA0;
extern long long off_5BC8;

// Virtual thunk functions
long long DiamondDerived_func_virtual_thunk(DiamondDerived *self);

// Template function declarations
long long template_max_int(unsigned int a1, unsigned int a2);
double template_max_double(double a1, double a2);
long long template_swap_int(unsigned int *a1, unsigned int *a2);

// RTTI typeinfo declarations
struct type_info;
extern type_info typeinfo_for_RTTIBase;
extern type_info typeinfo_for_RTTIDerivedA;
extern type_info typeinfo_for_RTTIDerivedB;
extern type_info typeinfo_for_int;

// Class definitions
struct Base {
    virtual long long virtual_func(int a2);
    virtual const char *getName();
    virtual ~Base();
};

struct Derived : public Base {
    long long virtual_func(int a2) override;
    const char *getName() override;
    ~Derived();
};

struct MultiDerived : public Derived {
    long long funcA();
    long long funcB();
    ~MultiDerived();
};

struct MiddleA {
    virtual long long func();
};

struct MiddleB {
    virtual long long func();
};

struct DiamondDerived : public MiddleA, public MiddleB {
    long long func();
    ~DiamondDerived();
};

struct RTTIDerivedA {
    virtual long long getType();
    virtual ~RTTIDerivedA();
};

struct RTTIDerivedB {
    virtual long long getType();
    virtual ~RTTIDerivedB();
};

struct LifecycleClass {
    static int instance_count;
};

struct Container_Base {
    virtual ~Container_Base();
};

template<typename T>
struct Container {
    T data[10];
    unsigned int size;
    long long push(T value);
    long long get(int idx);
    long long getSize();
};

template<>
struct Container<int> {
    int data[10];
    unsigned int size;
    long long push(int value);
    long long get(int idx);
    long long getSize();
};

template<>
struct Container<double> {
    double data[10];
    unsigned int size;
    long long push(double value);
    long long get(int idx);
    long long getSize();
};

// Static member definition
int LifecycleClass::instance_count = 0;

/* Function: .init_proc @ 0x2000 */
long long (**init_proc())(void)
{
 long long (**result)(void); // rax

 result = (long long (**)(void))&__gmon_start__;
 return result;
}


/* Function: sub_2020 @ 0x2020 */
void sub_2020()
{
}


/* Function: sub_2030 @ 0x2030 */
void sub_2030()
{
 sub_2020();
}


/* Function: sub_2040 @ 0x2040 */
void sub_2040()
{
 sub_2020();
}


/* Function: sub_2050 @ 0x2050 */
void sub_2050()
{
 sub_2020();
}


/* Function: sub_2060 @ 0x2060 */
void sub_2060()
{
 sub_2020();
}


/* Function: sub_2070 @ 0x2070 */
void sub_2070()
{
 sub_2020();
}


/* Function: sub_2080 @ 0x2080 */
void sub_2080()
{
 sub_2020();
}


/* Function: sub_2090 @ 0x2090 */
void sub_2090()
{
 sub_2020();
}


/* Function: sub_20A0 @ 0x20A0 */
void sub_20A0()
{
 sub_2020();
}


/* Function: sub_20B0 @ 0x20B0 */
void sub_20B0()
{
 sub_2020();
}


/* Function: sub_20C0 @ 0x20C0 */
void sub_20C0()
{
 sub_2020();
}


/* Function: sub_20D0 @ 0x20D0 */
void sub_20D0()
{
 sub_2020();
}


/* Function: sub_20E0 @ 0x20E0 */
void sub_20E0()
{
 sub_2020();
}


/* Function: sub_20F0 @ 0x20F0 */
void sub_20F0()
{
 sub_2020();
}


/* Function: sub_2100 @ 0x2100 */
void sub_2100()
{
 sub_2020();
}


/* Function: sub_2110 @ 0x2110 */
void sub_2110()
{
 sub_2020();
}


/* Function: sub_2120 @ 0x2120 */
void sub_2120()
{
 sub_2020();
}


/* Function: sub_2130 @ 0x2130 */
void sub_2130()
{
 sub_2020();
}


/* Function: sub_2140 @ 0x2140 */
void sub_2140()
{
 sub_2020();
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x2369 */
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
 *(unsigned long long *)s = 1953719636;
 v2 = 0;
 v3 = 0;
 v4 = 0;
 v5 = 0;
 v6 = 0;
 v7 = 0;
 return (unsigned int)strlen(s) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x23DE */
long long test_cpp_constructor(void)
{
 unsigned int *v0; // rdi
 int v1; // eax
 int v2; // ebx

 v0 = (unsigned int *)operator new[](0x14u);
 v0[1] = 10;
 v0[2] = 20;
 v0[3] = 30;
 v0[4] = 40;
 v1 = LifecycleClass::instance_count++;
 v2 = v1 + 21;
 operator delete[](v0);
 --LifecycleClass::instance_count;
 return (unsigned int)(v2 + 1000 * LifecycleClass::instance_count);
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x243C */
long long call_virtual_func(Base *a1)
{
 return (**(long long ( ***)(Base *))a1)(a1);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x244E */
long long test_cpp_virtual_func(void)
{
 int v0; // ebx
 long long ( **v2)(Base *__hidden, int); // [rsp+8h] [rbp-30h] BYREF
 long long ( **v3)(Derived *__hidden, int); // [rsp+10h] [rbp-28h] BYREF
 int v4; // [rsp+18h] [rbp-20h]
 unsigned long long v5; // [rsp+28h] [rbp-10h]

 v5 = __readfsqword(0x28u);
 v2 = &off_59A0;
 v3 = &off_59D0;
 v4 = 3;
 v0 = call_virtual_func((Base *)&v2);
 return v0 + (unsigned int)call_virtual_func((Base *)&v3) + 21;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x24C6 */
long long test_cpp_multiple_inheritance(void)
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x24D0 */
long long test_cpp_diamond_inheritance(void)
{
 int v0; // ebx
 long long ( **v2)(DiamondDerived *__hidden); // [rsp+20h] [rbp-38h] BYREF
 int v3; // [rsp+28h] [rbp-30h]
 unsigned long long v4; // [rsp+38h] [rbp-20h]

 v4 = __readfsqword(0x28u);
 v2 = &off_5B78;
 v3 = 50;
 v0 = DiamondDerived_func_virtual_thunk((DiamondDerived *)&v2);
 v3 = 100;
 return v0 + (unsigned int)DiamondDerived_func_virtual_thunk((DiamondDerived *)&v2);
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x254C */
long long test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x2556 */
long long test_cpp_template_func(void)
{
 int v0; // ebx
 double v2; // [rsp+8h] [rbp-20h]
 int v3; // [rsp+10h] [rbp-18h] BYREF
 int v4; // [rsp+14h] [rbp-14h] BYREF
 unsigned long long v5; // [rsp+18h] [rbp-10h]

 v5 = __readfsqword(0x28u);
 v0 = template_max_int(3, 7);
 v2 = template_max_double(2.5, 1.5);
 v3 = 10;
 v4 = 20;
 template_swap_int(&v3, &v4);
 return (unsigned int)(v4 + v3 + v0 + (int)v2);
}


/* Function: _Z23test_cpp_template_classv @ 0x25E5 */
long long test_cpp_template_class(void)
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x25EF */
long long test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x25F9 */
void test_cpp_exception(void)
{
 unsigned int *exception; // rdi

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&typeinfo_for_int, 0);
}

// type_info_for_int definition would go here


/* Function: _Z18test_cpp_smart_ptrv @ 0x26D1 */
long long test_cpp_smart_ptr(void)
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x26DB */
long long test_cpp_rtti(void)
{
 long long *v0; // r12
 void *v1; // r13
 long long v2; // r14
 const char *v3; // rbp
 int v4; // ebx
 int v5; // ebx
 unsigned int v6; // ebx

 v0 = (long long *)operator new(8u);
 *v0 = (long long)off_5BA0;
 v1 = (void *)operator new(8u);
 *(unsigned long long *)v1 = off_5BC8;
 v2 = *v0;
 v3 = *(const char **)(*(unsigned long long *)(*v0 - 8) + 8LL);
 v4 = 10;
 if ( v3 != "12RTTIDerivedA" )
 {
 v4 = 0;
 if ( *v3 != 42 )
 v4 = strcmp(*(const char **)(*(unsigned long long *)(*v0 - 8) + 8LL), "12RTTIDerivedA") == 0 ? 0xA : 0;
 }
 v5 = v4 + 20;
 if ( __dynamic_cast(
 v0,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedA,
 0) )
 {
 v5 += 100;
 }
 if ( __dynamic_cast(
 v1,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedB,
 0) )
 {
 v5 += 200;
 }
 v6 = strlen(&v3[*v3 == 42]) + v5;
 (*(void ( **)(long long *))(v2 + 8))(v0);
 (*(void ( **)(void *))(*(unsigned long long *)v1 + 8LL))(v1);
 return v6;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x2801 */
void test_cpp_oo_features(void)
{
 unsigned int v0; // eax
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax
 unsigned int v4; // eax
 unsigned int v5; // eax

 puts(s);
 v0 = test_cpp_member_func();
 __printf_chk(1, &unk_303C, v0);
 v1 = test_cpp_constructor();
 __printf_chk(1, &unk_305A, v1);
 v2 = test_cpp_virtual_func();
 __printf_chk(1, &unk_3076, v2);
 v3 = test_cpp_multiple_inheritance();
 __printf_chk(1, &unk_3092, v3);
 v4 = test_cpp_diamond_inheritance();
 __printf_chk(1, &unk_30AE, v4);
 __printf_chk(1, &unk_30CB, 22);
 v5 = test_cpp_template_func();
 __printf_chk(1, &unk_30E7, v5);
 __printf_chk(1, &unk_3103, 16);
 __printf_chk(1, &unk_311F, 85);
 test_cpp_exception();
}


/* Function: main @ 0x2970 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x2987 */
int GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 std::ios_base::Init::Init((std::ios_base::Init *)&std::__ioinit);
 return __cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
}


/* Function: _ZN4Base12virtual_funcEi @ 0x29B4 */
long long Base::virtual_func(Base *self, int a2)
{
 return (unsigned int)(a2 + 1);
}


/* Function: _ZNK4Base7getNameEv @ 0x29BC */
const char * Base::getName(Base *self)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x29C8 */
Base::~Base()
{
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x29CE */
long long Derived::virtual_func(Derived *self, int a2)
{
 return (unsigned int)(*((unsigned int *)self + 2) * a2);
}


/* Function: _ZNK7Derived7getNameEv @ 0x29DA */
const char * Derived::getName(Derived *self)
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x29E6 */
long long MultiDerived::funcA(MultiDerived *self)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x29F0 */
long long MultiDerived::funcB(MultiDerived *self)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x29FA */
long long MultiDerived_funcB_thunk(MultiDerived *self)
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x2A04 */
long long MiddleA::func(MiddleA *self)
{
 return (unsigned int)(*(unsigned int *)((char *)self + *(unsigned long long *)(*(unsigned long long *)self - 24LL) + 8) + 150);
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x2A19 */
long long MiddleA_func_virtual_thunk(MiddleA *self)
{
 return (unsigned int)(*(unsigned int *)((char *)self
 + *(unsigned long long *)(*(unsigned long long *)self - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)self + *(unsigned long long *)(*(unsigned long long *)self - 24LL)) - 24LL)
 + 8)
 + 150);
}


/* Function: _ZN7MiddleB4funcEv @ 0x2A36 */
long long MiddleB::func(MiddleB *self)
{
 return (unsigned int)(*(unsigned int *)((char *)self + *(unsigned long long *)(*(unsigned long long *)self - 24LL) + 8) + 200);
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x2A4B */
long long MiddleB_func_virtual_thunk(MiddleB *self)
{
 return (unsigned int)(*(unsigned int *)((char *)self
 + *(unsigned long long *)(*(unsigned long long *)self - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)self + *(unsigned long long *)(*(unsigned long long *)self - 24LL)) - 24LL)
 + 8)
 + 200);
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x2A68 */
long long DiamondDerived::func(DiamondDerived *self)
{
 return (unsigned int)(*(unsigned int *)((char *)self + *(unsigned long long *)(*(unsigned long long *)self - 24LL) + 8) + 250);
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x2A7D */
long long DiamondDerived_func_virtual_thunk(DiamondDerived *self)
{
 return (unsigned int)(*(unsigned int *)((char *)self
 + *(unsigned long long *)(*(unsigned long long *)self - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)self + *(unsigned long long *)(*(unsigned long long *)self - 24LL)) - 24LL)
 + 8)
 + 250);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x2A99 */
long long DiamondDerived_func_nonvirtual_thunk(DiamondDerived *self)
{
 return (unsigned int)(*(unsigned int *)((char *)self + *(unsigned long long *)(*((unsigned long long *)self - 2) - 24LL) - 8) + 250);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x2AB0 */
long long RTTIDerivedA::getType(RTTIDerivedA *self)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x2ABA */
long long RTTIDerivedB::getType(RTTIDerivedB *self)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x2AC4 */
RTTIDerivedB::~RTTIDerivedB()
{
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x2ACA */
RTTIDerivedA::~RTTIDerivedA()
{
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x2AD0 */
DiamondDerived::~DiamondDerived()
{
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x2AD5 */
void DiamondDerived_nonvirtual_thunk_d1(DiamondDerived *self)
{
 ;
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x2ADA */
void DiamondDerived_virtual_thunk_d1(DiamondDerived *self)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x2AE0 */
MultiDerived::~MultiDerived()
{
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x2AE5 */
void MultiDerived_nonvirtual_thunk_d1(MultiDerived *self)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x2AEA */
Derived::~Derived()
{
}


/* Function: _ZN4BaseD0Ev @ 0x2AF0 */
Base::~Base()
{
 operator delete((void*)this);
}


/* Function: _ZN7DerivedD0Ev @ 0x2B08 */
Derived::~Derived()
{
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x2B20 */
MultiDerived::~MultiDerived()
{
 operator delete((void*)this);
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x2B37 */
void MultiDerived_nonvirtual_thunk_d0(MultiDerived *self)
{
 operator delete((char *)self - 16);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x2B52 */
RTTIDerivedA::~RTTIDerivedA()
{
 operator delete((void*)this);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x2B6A */
RTTIDerivedB::~RTTIDerivedB()
{
 operator delete((void*)this);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x2B82 */
DiamondDerived::~DiamondDerived()
{
 operator delete((void*)this);
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x2B99 */
void DiamondDerived_virtual_thunk_d0(DiamondDerived *self)
{
 operator delete((char *)self + *(unsigned long long *)(*(unsigned long long *)self - 32LL));
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x2BB7 */
void DiamondDerived_nonvirtual_thunk_d0(DiamondDerived *self)
{
 operator delete((char *)self - 16);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x2BD2 */
long long template_max_int(unsigned int a1, unsigned int a2)
{
 long long result; // rax

 result = a2;
 if ( (int)a1 >= (int)a2 )
 return a1;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x2BDE */
double template_max_double(double a1, double a2)
{
 return fmax(a1, a2);
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x2BE7 */
long long template_swap_int(unsigned int *a1, unsigned int *a2)
{
 long long result; // rax

 result = (unsigned int)*a1;
 *a1 = *a2;
 *a2 = result;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x2BF4 */
Container<int>::Container()
{
 *(unsigned int *)(a1 + 40) = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x2C00 */
long long Container<int>::push(long long a1, int a2)
{
 long long result; // rax

 result = *(unsigned int *)(a1 + 40);
 if ( (int)result <= 9 )
 {
 *(unsigned int *)(a1 + 40) = result + 1;
 result = (int)result;
 *(unsigned int *)(a1 + 4LL * (int)result) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x2C18 */
long long Container<int>::get(long long a1, int a2)
{
 long long result; // rax

 result = 0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 40) > a2 )
 return *(unsigned int *)(a1 + 4LL * a2);
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x2C34 */
long long Container<int>::getSize(long long a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x2C3C */
void Container<double>::Container()
{
 *(unsigned int *)(a1 + 80) = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x2C48 */
long long Container<double>::push(long long a1, double a2)
{
 long long result; // rax

 result = *(unsigned int *)(a1 + 80);
 if ( (int)result <= 9 )
 {
 *(unsigned int *)(a1 + 80) = result + 1;
 result = (int)result;
 *(double *)(a1 + 8LL * (int)result) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x2C62 */
double Container<double>::get(long long a1, int a2)
{
 double result; // xmm0_8

 result = 0.0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 80) > a2 )
 return *(double *)(a1 + 8LL * a2);
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x2C7E */
long long Container<double>::getSize(long long a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: .term_proc @ 0x2C88 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __printf_chk @ 0x6048 */

/* FAILED to decompile: _Znam @ 0x6050 */

/* FAILED to decompile: __cxa_begin_catch @ 0x6058 */

/* FAILED to decompile: strlen @ 0x6060 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x6068 */

/* FAILED to decompile: __libc_start_main @ 0x6078 */

/* FAILED to decompile: __cxa_atexit @ 0x6080 */

/* FAILED to decompile: _Znwm @ 0x6088 */

/* FAILED to decompile: _ZdlPvm @ 0x6090 */

/* FAILED to decompile: __stack_chk_fail @ 0x6098 */

/* FAILED to decompile: __dynamic_cast @ 0x60A0 */

/* FAILED to decompile: _ZdaPv @ 0x60A8 */

/* FAILED to decompile: strcmp @ 0x60B8 */

/* FAILED to decompile: __cxa_rethrow @ 0x60C0 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x60C8 */

/* FAILED to decompile: puts @ 0x60D0 */

/* FAILED to decompile: __cxa_end_catch @ 0x60D8 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x60E0 */

/* FAILED to decompile: __cxa_throw @ 0x60E8 */

/* FAILED to decompile: _Unwind_Resume @ 0x60F8 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x6100 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x6108 */

/* FAILED to decompile: __gmon_start__ @ 0x6118 */

/* Total functions decompiled: 87, failed: 23 */
