/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_gcc_O2_no_g
 * Processor: pc
 */

#include <cstring>
#include <cmath>
#include <ios>
#include <typeinfo>
#include <cxxabi.h>
#include <cstdlib>

/* External declarations */
extern "C" void *_gmon_start__(void);

/* Vtable and data declarations */
static const void *off_3C70 = NULL;
static const void *off_3C98 = NULL;
static const char *s = "Testing C++ OO Features\n";
static const char unk_203C[] = "Member function result: %d\n";
static const char unk_205A[] = "Constructor result: %d\n";
static const char unk_2076[] = "Virtual function result: %d\n";
static const char unk_2092[] = "Multiple inheritance result: %d\n";
static const char unk_20AE[] = "Diamond inheritance result: %d\n";
static const char unk_20CB[] = "Operator overload result: %d\n";
static const char unk_20E7[] = "Template function result: %d\n";
static const char unk_2103[] = "Template class result: %d\n";
static const char unk_211F[] = "Lambda result: %d\n";

/* Exception handling declarations */
extern "C" void *__cxa_allocate_exception(std::size_t thrown_size);
extern "C" void __cxa_throw(void *thrown_exception, std::type_info *tinfo, void (*dest)(void *));
extern "C" int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);

/* Type info for int */
const std::type_info& typeinfo_for_int = typeid(int);

/* Forward function declarations */
void test_cpp_oo_features(void);

/* Forward template function declarations */
long long template_max_int(unsigned int a1, unsigned int a2);
double template_max_double(double a1, double a2);
long long template_swap_int(unsigned int *a1, unsigned int *a2);

/* Macro definitions */
#define JUMPOUT(x) __builtin_unreachable()




/* Function: _Z18test_cpp_exceptionv @ 0x1240 */
void test_cpp_exception(void)
{
 unsigned int *exception; // rax

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (std::type_info *)&typeinfo_for_int, 0);
}


/* Function: main @ 0x1310 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
 return 0;
}


/* Global variables for std::ios initialization */
namespace std {
    ios_base::Init __ioinit;
}
static void *_dso_handle = NULL;

/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x1330 */
/* Helper function for atexit */
static void ios_init_cleanup(void *arg) {
    ((std::ios_base::Init*)arg)->~Init();
}

int GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 new (&std::__ioinit) std::ios_base::Init();
 return __cxa_atexit(ios_init_cleanup, &std::__ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */

/* Forward declarations */
class Base;
class Derived;
class MultiDerived;
class MiddleA;
class MiddleB;
class DiamondDerived;
class RTTIDerivedA;
class RTTIDerivedB;
class RTTIBase;
class Base2;

/* LifecycleClass definition for test_cpp_constructor */
class LifecycleClass {
public:
    static unsigned int instance_count;
};

unsigned int LifecycleClass::instance_count = 0;

/* Type info declarations - will be initialized after class definitions */

/* __dynamic_cast declaration */
extern "C" void *__dynamic_cast(const void *src_ptr, const struct __class_type_info *src_type, const struct __class_type_info *dst_type, int src2dst_offset);

/* Vtable declarations */
extern void *__ZTV4Base[];
extern void *__ZTV5Base2[];

/* Class definitions */
class Base {
public:
    virtual long long virtual_func(int a2);
    virtual const char* getName();
    virtual ~Base();
    void operator delete(void* ptr, unsigned long size);
};

class Base2 {
public:
    virtual long long funcA();
    virtual long long funcB();
    inline Base2() {}
    virtual ~Base2();
};

class Derived : public Base {
public:
    virtual long long virtual_func(int a2);
    virtual const char* getName();
    virtual ~Derived();
    void operator delete(void* ptr, unsigned long size);
    unsigned int data[3];
};

class MultiDerived : public Base, public Base2 {
public:
    virtual long long funcA();
    virtual long long funcB();
    virtual ~MultiDerived();
    void operator delete(void* ptr, unsigned long size);
};

class MiddleA : virtual public Base {
public:
    virtual long long func();
};

class MiddleB : virtual public Base {
public:
    virtual long long func();
};

class DiamondDerived : public MiddleA, public MiddleB {
public:
    virtual long long func();
    virtual ~DiamondDerived();
    void operator delete(void* ptr);
};

class RTTIBase {
public:
    virtual ~RTTIBase() {}
};

class RTTIDerivedA : public RTTIBase {
public:
    virtual long long getType();
    virtual ~RTTIDerivedA();
    void operator delete(void* ptr);
};

class RTTIDerivedB : public RTTIBase {
public:
    virtual long long getType();
    virtual ~RTTIDerivedB();
    void operator delete(void* ptr);
};

/* Type info - initialized after class definitions */
const std::type_info& typeinfo_for_Base = typeid(Base);
const std::type_info& typeinfo_for_Base2 = typeid(Base2);
const std::type_info& typeinfo_for_RTTIBase = typeid(RTTIBase);
const std::type_info& typeinfo_for_RTTIDerivedA = typeid(RTTIDerivedA);
const std::type_info& typeinfo_for_RTTIDerivedB = typeid(RTTIDerivedB);

/* Vtable definitions */
/* Vtable for Base2 - defined after class definition and typeinfo */
void *__ZTV5Base2[] = {
    (void *)0,                     /* RTTI pointer */
    (void *)0,                     /* offset to top */
    (void *)(-16),                 /* RTTI offset */
    (void *)&typeinfo_for_Base2,   /* typeinfo for Base2 */
    (void *)0,                     /* funcA() - resolved at link time */
    (void *)0,                     /* funcB() - resolved at link time */
    (void *)0                      /* destructor - resolved at link time */
};

/* Explicit inline type_info objects to ensure linker symbols are emitted */
namespace {
    inline const std::type_info& _typeinfo_ref_Base = typeid(Base);
    inline const std::type_info& _typeinfo_ref_Base2 = typeid(Base2);
    inline const std::type_info& _typeinfo_ref_RTTIBase = typeid(RTTIBase);
    inline const std::type_info& _typeinfo_ref_RTTIDerivedA = typeid(RTTIDerivedA);
    inline const std::type_info& _typeinfo_ref_RTTIDerivedB = typeid(RTTIDerivedB);
}

/* Force emission of all typeinfo symbols */
static void __force_typeinfo_emission() {
    (void)_typeinfo_ref_Base;
    (void)_typeinfo_ref_Base2;
    (void)_typeinfo_ref_RTTIBase;
    (void)_typeinfo_ref_RTTIDerivedA;
    (void)_typeinfo_ref_RTTIDerivedB;
}

/* Explicit typeinfo definitions to ensure linker symbols are available */
namespace {
    const char base_name[] = "4Base";
    const char base2_name[] = "5Base2";
    const char rttibase_name[] = "7RTTIBase";
    const char rttideriveda_name[] = "12RTTIDerivedA";
    const char rttiderivedb_name[] = "12RTTIDerivedB";
}

/* Stack canary intrinsic */
static inline unsigned long long __readfsqword(unsigned long long offset) {
    unsigned long long value;
    __asm__ volatile ("mov %%fs:%1, %0" : "=r" (value) : "m" (*(const unsigned long long *)(offset)));
    return value;
}


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
 v0 = template_max_int(3, 7);
 v3 = 10;
 v2 = template_max_double(2.5, 1.5);
 v4 = 20;
 template_swap_int((unsigned int *)&v3, (unsigned int *)&v4);
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
 v1 = (long long *)(operator new(8u));
 *v1 = (long long)off_3C70;
 v2 = (unsigned long long *)(operator new(8u));
 v3 = *v1;
 v4 = v2;
 *v2 = (unsigned long long)off_3C98;
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
 __printf_chk(1, unk_203C, (unsigned int)(v0 + 4700));
 v1 = test_cpp_constructor();
 __printf_chk(1, unk_205A, v1);
 __printf_chk(1, unk_2076, 42);
 __printf_chk(1, unk_2092, 71);
 v2 = test_cpp_diamond_inheritance();
 __printf_chk(1, unk_20AE, v2);
 __printf_chk(1, unk_20CB, 22);
 v3 = test_cpp_template_func();
 __printf_chk(1, unk_20E7, v3);
 __printf_chk(1, unk_2103, 16);
 __printf_chk(1, unk_211F, 85);
 test_cpp_exception();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x18F0 */
long long Base::virtual_func(int a2)
{
 return (unsigned int)(a2 + 1);
}


/* Function: _ZNK4Base7getNameEv @ 0x1900 */
const char * Base::getName()
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x1910 */
Base::~Base()
{
 ;
}


/* Function: _ZN5Base2D2Ev @ 0x1918 */
Base2::~Base2()
{
 ;
}


/* Function: _ZN5Base25funcAEv @ 0x1919 */
long long Base2::funcA()
{
 return 0;
}


/* Function: _ZN5Base25funcBEv @ 0x191A */
long long Base2::funcB()
{
 return 0;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1920 */
long long Derived::virtual_func(int a2)
{
 return (unsigned int)(a2 * *((unsigned int *)this + 2));
}


/* Function: _ZNK7Derived7getNameEv @ 0x1930 */
const char * Derived::getName()
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x1940 */
long long MultiDerived::funcA()
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x1950 */
long long MultiDerived::funcB()
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x1960 */
long long MultiDerived_funcB_nonvirtual_thunk(MultiDerived *_this)
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x1970 */
long long MiddleA::func()
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 150);
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x1990 */
long long MiddleA_func_virtual_thunk(MiddleA *_this)
{
 return (unsigned int)(*(unsigned int *)((char *)_this
 + *(unsigned long long *)(*(unsigned long long *)_this - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)_this + *(unsigned long long *)(*(unsigned long long *)_this - 24LL)) - 24LL)
 + 8)
 + 150);
}


/* Function: _ZN7MiddleB4funcEv @ 0x19B0 */
long long MiddleB::func()
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 200);
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x19D0 */
long long MiddleB_func_virtual_thunk(MiddleB *_this)
{
 return (unsigned int)(*(unsigned int *)((char *)_this
 + *(unsigned long long *)(*(unsigned long long *)_this - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)_this + *(unsigned long long *)(*(unsigned long long *)_this - 24LL)) - 24LL)
 + 8)
 + 200);
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x19F0 */
long long DiamondDerived::func()
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 250);
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x1A10 */
long long DiamondDerived_func_virtual_thunk(DiamondDerived *_this)
{
 return (unsigned int)(*(unsigned int *)((char *)_this
 + *(unsigned long long *)(*(unsigned long long *)_this - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)_this + *(unsigned long long *)(*(unsigned long long *)_this - 24LL)) - 24LL)
 + 8)
 + 250);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x1A30 */
long long DiamondDerived_func_nonvirtual_thunk(DiamondDerived *_this)
{
 return (unsigned int)(*(unsigned int *)((char *)_this + *(unsigned long long *)(*((unsigned long long *)_this - 2) - 24LL) - 8) + 250);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1A50 */
long long RTTIDerivedA::getType()
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1A60 */
long long RTTIDerivedB::getType()
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x1A70 */
RTTIDerivedB::~RTTIDerivedB()
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x1A80 */
RTTIDerivedA::~RTTIDerivedA()
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x1A90 */
DiamondDerived::~DiamondDerived()
{
 ;
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x1AA0 */
void DiamondDerived_deleting_virtual_thunk(DiamondDerived *_this)
{
 ;
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x1AB0 */
void DiamondDerived_deleting_nonvirtual_thunk(DiamondDerived *_this)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1AC0 */
MultiDerived::~MultiDerived()
{
 ;
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x1AD0 */
void MultiDerived_deleting_nonvirtual_thunk(MultiDerived *_this)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x1AE0 */
Derived::~Derived()
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x1AF0 */
void Base::operator delete(void* ptr, unsigned long size)
{
 ::operator delete(ptr, 8u);
}


/* Function: _ZN7DerivedD0Ev @ 0x1B00 */
void Derived::operator delete(void* ptr, unsigned long size)
{
 ::operator delete(ptr, 0x10u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x1B10 */
void MultiDerived::operator delete(void* ptr, unsigned long size)
{
 ::operator delete(ptr, 0x20u);
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x1B20 */
void MultiDerived_delete_nonvirtual_thunk(MultiDerived *_this)
{
 ::operator delete((char *)_this - 16, 0x20u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1B40 */
void RTTIDerivedB::operator delete(void* ptr)
{
 ::operator delete(ptr, 8u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1B50 */
void RTTIDerivedA::operator delete(void* ptr)
{
 ::operator delete(ptr, 8u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x1B60 */
void DiamondDerived::operator delete(void* ptr)
{
 ::operator delete(ptr, 0x30u);
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x1B70 */
void DiamondDerived_delete_virtual_thunk(DiamondDerived *_this)
{
 ::operator delete((char *)_this + *(unsigned long long *)(*(unsigned long long *)_this - 32LL), 0x30u);
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x1B90 */
void DiamondDerived_delete_nonvirtual_thunk(DiamondDerived *_this)
{
 ::operator delete((char *)_this - 16, 0x30u);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1BB0 */
long long template_max_int(unsigned int a1, unsigned int a2)
{
 long long result; // rax

 result = a2;
 if ( (int)a1 >= (int)a2 )
 return a1;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1BC0 */
double template_max_double(double a1, double a2)
{
 return fmax(a1, a2);
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1BD0 */
long long template_swap_int(unsigned int *a1, unsigned int *a2)
{
 long long result; // rax

 result = (unsigned int)*a1;
 *a1 = *a2;
 *a2 = result;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1BE0 */
void Container_int_Constructor(long long a1)
{
 *(unsigned int *)(a1 + 40) = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1BF0 */
long long Container_int_push(long long a1, int a2)
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
long long Container_int_get(long long a1, int a2)
{
 long long result; // rax

 result = 0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 40) > a2 )
 return *(unsigned int *)(a1 + 4LL * a2);
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1C30 */
long long Container_int_getSize(long long a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1C40 */
void Container_double_Constructor(long long a1)
{
 *(unsigned int *)(a1 + 80) = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1C50 */
long long Container_double_push(long long a1, double a2)
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
double Container_double_get(long long a1, int a2)
{
 double result; // xmm0_8

 result = 0.0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 80) > a2 )
 return *(double *)(a1 + 8LL * a2);
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1CA0 */
long long Container_double_getSize(long long a1)
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
