/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
/* size_t is defined by the standard library */
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Forward declarations and class definitions */
void *operator new(unsigned int size);
void *operator new[](unsigned int size);
void operator delete(void *ptr);
void operator delete[](void *ptr);

/* External declarations */
extern "C" void *call_weak_fn(void);
#define JUMPOUT(addr) ((void(*)())addr)()

/* C++ exception handling functions */
extern "C" void *_cxa_allocate_exception(unsigned int size);
extern "C" void _cxa_throw(void *exception, void *type_info, void *dest);
extern "C" void *_cxa_begin_catch(void *exception);
extern "C" void _cxa_end_catch(void) throw();
extern "C" void _cxa_rethrow(void) throw();
extern "C" void _cxa_end_cleanup(void) throw();
extern "C" int _cxa_atexit(void (*func)(void *), void *arg, void *dso);

/* C++ RTTI and dynamic_cast */
struct type_info {};
extern "C" void *_dynamic_cast(const void *src, const void *src_type, const void *dst_type, unsigned int src2dst);

/* Standard C library functions */
extern "C" int strcmp(const char *s1, const char *s2);
extern "C" int printf(const char *format, ...);
extern "C" int puts(const char *s);
extern "C" unsigned int strlen(const char *s);
extern "C" void abort(void);
extern "C" void *memcpy(void *dest, const void *src, unsigned int n);
extern "C" char *strcpy(char *dest, const char *src);

/* ARM specific */
extern "C" int __aeabi_unwind_cpp_pr0();
extern "C" void __gmon_start__();

/* C library functions */
#include <string.h>
#define HIBYTE(x) (*((unsigned char *)&x + 1))

/* Vtable pointers for virtual functions */
extern void *off_12CF0;
extern void *off_12D34;
extern void *off_12D4C;
extern void *off_12DF0;
extern void *off_12DBC;
extern void *off_12DD4;
extern void *off_12ED8;
extern void *off_12EEC;
extern void *off_12D10;

/* External string constants */
extern char asc_1C71[];
extern char aCppL301D[];
extern char aCppL302D[];
extern char aCppL303D[];
extern char aCppL304D[];
extern char aCppL305D[];
extern char aCppL306D[];
extern char aCppL307D[];
extern char aCppL308D[];
extern char aCppL309D[];
extern unsigned char byte_9;

/* Standard library namespace */
namespace std {
    class ios_base {
    public:
        class Init {
        public:
            Init() {}
            ~Init() {}
        };
    };
}
extern std::ios_base::Init __ioinit;
extern void *_dso_handle;

/* Class definitions */
class Base {
public:
    virtual int virtual_func(int x);
    virtual ~Base();
    const char *getName() const;
    int (**_vptr$Base)(void);
};

class Derived : public Base {
public:
    int multiplier;
    virtual int virtual_func(int x) override;
    virtual ~Derived();
    const char *getName() const;
};

class MultiDerived : public Base {
public:
    int dataA;
    int dataB;
    void **_vptr$BaseA;
    void **_vptr$BaseB;
    int funcA();
    int funcB();
    virtual ~MultiDerived();
};

class BaseA {
public:
    int dataA;
    void **_vptr$BaseA;
    int funcA();
    virtual ~BaseA();
};

class BaseB {
public:
    int dataB;
    void **_vptr$BaseB;
    int funcB();
    virtual ~BaseB();
};

class MiddleA : virtual public BaseA {
public:
    void **_vptr$MiddleA;
    int func();
    virtual ~MiddleA();
};

class MiddleB : virtual public BaseB {
public:
    void **_vptr$MiddleB;
    int func();
    virtual ~MiddleB();
};

class DiamondDerived : public MiddleA, public MiddleB {
public:
    int dataA;
    int dataB;
    int func();
    virtual ~DiamondDerived();
};

class VirtualBase {
public:
    virtual int func() = 0;
    virtual ~VirtualBase();
};

class RTTIBase {
public:
    virtual ~RTTIBase() {}
};

class RTTIDerivedA : public RTTIBase {
public:
    virtual ~RTTIDerivedA();
    int getType() const;
};

class RTTIDerivedB : public RTTIBase {
public:
    virtual ~RTTIDerivedB();
    int getType() const;
};

class LifecycleClass {
public:
    static int instance_count;
};

template<typename T>
class Container {
public:
    T data[10];
    int size;
    Container();
    void push(T value);
    T get(int idx) const;
    int getSize() const;
};

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/5-1/5-1_clang_O1_g
 * Processor: arm
 */

/* Function: .init_proc @ 0xB84 */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_B90 @ 0xB90 */
void sub_B90()
{
 JUMPOUT(0);
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0xCB8 */
void GLOBAL__sub_I_5_1_cpp()
{
 std::ios_base::Init::Init((std::ios_base::Init *)&std::__ioinit);
 _cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0xE60 */
size_t test_cpp_member_func()
{
 unsigned short v1[4]; // [sp+8h] [bp-28h] BYREF
 int v2; // [sp+10h] [bp-20h]
 int v3; // [sp+14h] [bp-1Ch]
 int v4; // [sp+18h] [bp-18h]
 int v5; // [sp+1Ch] [bp-14h]
 int v6; // [sp+20h] [bp-10h]
 short v7; // [sp+24h] [bp-Ch]
 char v8; // [sp+26h] [bp-Ah]
 char v9; // [sp+27h] [bp-9h]

 strcpy((char *)v1, "Test");
 HIBYTE(v1[2]) = 0;
 v1[3] = 0;
 v2 = 0;
 v3 = 0;
 v4 = 0;
 v5 = 0;
 v6 = 0;
 v7 = 0;
 v8 = 0;
 v9 = 0;
 return (size_t)strlen((const char *)v1) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0xED0 */
int test_cpp_constructor()
{
 unsigned int *v0; // r0
 int v1; // r1
 int i; // r2
 int v3; // r4
 void *v4; // r6

 v0 = (unsigned int *)operator new[](0x14u);
 v1 = 0;
 for ( i = 0; i != -5; --i )
 {
 v0[-i] = v1;
 v1 += 10;
 }
 v3 = ++LifecycleClass::instance_count;
 v4 = v0[2];
 operator delete[](v0);
 --LifecycleClass::instance_count;
 return (int)v4 + v3 + 1000 * LifecycleClass::instance_count;
}

void test_cpp_oo_features()
{
}


/* Function: _Z17call_virtual_funcP4Basei @ 0xF48 */
int call_virtual_func(Base *obj, int x)
{
 return ((int ( *)(Base *, int))*obj->_vptr$Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0xF64 */
int test_cpp_virtual_func()
{
 int v0; // r4
 Derived v2; // [sp+4h] [bp-14h] BYREF
 Base v3; // [sp+Ch] [bp-Ch] BYREF

 v3._vptr$Base = (void **)&off_12CF0;
 v2.multiplier = 3;
 v0 = Base::virtual_func(&v3, 5);
 return v0 + Derived::virtual_func(&v2, 5) + 21;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0xFDC */
int test_cpp_multiple_inheritance()
{
 int v0; // r5
 int v1; // r0
 MultiDerived v3; // [sp+0h] [bp-20h] BYREF

 v3.dataB = 200;
 v3.dataA = 100;
 v3._vptr$BaseA = (int (**)(void))&off_12D34;
 v3._vptr$BaseB = (int (**)(void))&off_12D4C;
 v0 = MultiDerived::funcA(&v3);
 (*v3._vptr$BaseB)();
 return v0 + v1 + 1;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x104C */
int test_cpp_diamond_inheritance()
{
 int v0; // r0
 int v1; // r5
 int v2; // r0
 unsigned int (**v4)(DiamondDerived *__hidden); // [sp+0h] [bp-28h]
 unsigned int (**v5)(DiamondDerived *__hidden); // [sp+8h] [bp-20h]
 unsigned int (**v6)(DiamondDerived *__hidden); // [sp+10h] [bp-18h]
 int v7; // [sp+14h] [bp-14h]
 DiamondDerived dd; // [sp+18h] [bp-10h] BYREF

 v6 = &off_12DF0;
 v4 = &off_12DBC;
 v5 = &off_12DD4;
 dd._vptr$MiddleA = (void (**)())v6;
 dd._vptr$MiddleB = (void (**)())v4;
 v0 = DiamondDerived::func(&dd);
 v1 = v0;
 v7 = 100;
 dd._vptr$MiddleA = (void (**)())v5;
 dd._vptr$MiddleB = (void (**)())v4;
 v2 = DiamondDerived::func(&dd);
 return v2 + v1;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x10D0 */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x10D8 */
int test_cpp_template_func()
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0x10E0 */
int test_cpp_template_class()
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x10E8 */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x10F0 */
void test_cpp_exception()
{
 unsigned int *exception; // r0

 exception = _cxa_allocate_exception(4u);
 *exception = 42;
 _cxa_throw(exception, (struct type_info *)&`typeinfo for'int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x11C0 */
int test_cpp_smart_ptr()
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x11CC */
size_t test_cpp_rtti()
{
 void *v0; // r4
 void *v1; // r5
 int v2; // r7
 char *v3; // r6
 const char *v4; // r0
 int v5; // r10
 void *v6; // r8
 void *v7; // r9
 const char *v8; // r0
 size_t v9; // r6

 v0 = (void *)operator new(4u);
 *(unsigned int *)v0 = &off_12ED8;
 v1 = (void *)operator new(4u);
 v2 = 0;
 *(unsigned int *)v1 = 0;
 *(unsigned int *)v1 = &off_12EEC;
 v3 = *(char **)(*(unsigned int *)(*(unsigned int *)v0 - 4) + 4);
 if ( v3 == "12RTTIDerivedA" )
 {
 v2 = 10;
 }
 else if ( *v3 != 42 )
 {
 v2 = 0;
 if ( !strcmp(*(const char **)(*(unsigned int *)(*(unsigned int *)v0 - 4) + 4), "12RTTIDerivedA") )
 v2 = 10;
 }
 v4 = *(const char **)(*(unsigned int *)(*(unsigned int *)v1 - 4) + 4);
 if ( v4 == "12RTTIDerivedB" )
 {
 v5 = 1;
 }
 else
 {
 v5 = 0;
 if ( *v4 != 42 )
 v5 = strcmp(v4, "12RTTIDerivedB") == 0;
 }
 v6 = _dynamic_cast(
 v0,
 (const struct __class_type_info *)&`typeinfo for'RTTIBase,
 (const struct __class_type_info *)&`typeinfo for'RTTIDerivedA,
 0);
 v7 = _dynamic_cast(
 v1,
 (const struct __class_type_info *)&`typeinfo for'RTTIBase,
 (const struct __class_type_info *)&`typeinfo for'RTTIDerivedB,
 0);
 v8 = v3 + 1;
 if ( *v3 != 42 )
 v8 = v3;
 v9 = strlen(v8);
 (*(void ( **)(void *))(*(unsigned int *)v0 + 4))(v0);
 (*(void ( **)(void *))(*(unsigned int *)v1 + 4))(v1);
 if ( v5 )
 v2 |= 0x14u;
 if ( v6 )
 v2 += 100;
 if ( v7 )
 v2 += 200;
 return v2 + v9;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x136C */
void test_cpp_oo_features()
{
 int v0; // r4
 size_t v1; // r0
 unsigned int *v2; // r0
 int i; // r1
 int v4; // r4
 int v5; // r6
 int v6; // r5
 int v7; // r0
 int v8; // r0
 int v9; // r0
 int v10; // r6
 void ( **v11)(); // r1
 int v12; // r0
 unsigned int (**v13)(DiamondDerived *__hidden); // [sp+0h] [bp-40h] BYREF
 unsigned int v14[2]; // [sp+4h] [bp-3Ch] BYREF
 int v15; // [sp+Ch] [bp-34h]
 void ( **v16)(); // [sp+10h] [bp-30h]
 int v17; // [sp+14h] [bp-2Ch]
 int v18; // [sp+18h] [bp-28h]
 int v19; // [sp+1Ch] [bp-24h]
 short v20; // [sp+20h] [bp-20h]
 char v21; // [sp+22h] [bp-1Eh]
 char v22; // [sp+23h] [bp-1Dh]
 Base v23; // [sp+24h] [bp-1Ch] BYREF

 puts(asc_1C71);
 strcpy((char *)v14, "Test");
 BYTE1(v14[1]) = 0;
 HIWORD(v14[1]) = 0;
 v15 = 0;
 v16 = 0;
 v17 = 0;
 v18 = 0;
 v19 = 0;
 v20 = 0;
 v21 = 0;
 v0 = 0;
 v22 = 0;
 v13 = (unsigned int (**)(DiamondDerived *__hidden))(byte_9 + 1);
 v1 = strlen((const char *)v14);
 printf(aCppL301D, v1 + 4700);
 v2 = (unsigned int *)operator new[](0x14u);
 for ( i = 0; i != -5; --i )
 {
 v2[-i] = v0;
 v0 += 10;
 }
 v4 = ++LifecycleClass::instance_count;
 v5 = v2[2];
 operator delete[](v2);
 --LifecycleClass::instance_count;
 printf(aCppL302D, v5 + v4 + 1000 * LifecycleClass::instance_count);
 v23._vptr$Base = (void (**)(void))&off_12CF0;
 v14[0] = 3;
 v13 = (void (**)(void))&off_12D10;
 v6 = ((int (*)(Base *, int))*v23._vptr$Base[0])(&v23, 5);
 v7 = ((int (*)(Derived *, int))*(*(void ***)v13)[0])((Derived *)v13, 5);
 printf(aCppL303D, v6 + v7 + 21);
 v14[1] = (unsigned int)&off_12D4C;
 v15 = 200;
 v14[0] = 100;
 v13 = (unsigned int (**)(DiamondDerived *__hidden))&off_12D34;
 `non-virtual thunk to'MultiDerived::funcB();
 printf(aCppL304D, v8 + 31);
 v16 = (void ( **)())&off_12DF0;
 v17 = 50;
 v13 = &off_12DBC;
 v14[1] = &off_12DD4;
 `virtual thunk to'DiamondDerived::func();
 v10 = v9;
 v11 = v16;
 *(unsigned int *)((char *)v14 + *(unsigned int *)((char *)v13 + 0xFFFFFFF4)) = 100;
 (*v11)();
 printf(aCppL305D, v12 + v10);
 printf(aCppL306D, 22);
 printf(aCppL307D, 39);
 printf(aCppL308D, 16);
 printf(aCppL309D, 85);
 test_cpp_exception();
}


/* Function: main @ 0x1648 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x165C */
int Base::virtual_func(Base *this, int x)
{
 return x + 1;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1664 */
int Derived::virtual_func(Derived *this, int x)
{
 return this->multiplier * x;
}


/* Function: _ZN4BaseD2Ev @ 0x1670 */
void Base::~Base(Base *this)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1674 */
void MultiDerived::~MultiDerived(MultiDerived *this)
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x1678 */
void DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 ;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x167C */
int template_max<int>(int a, int b)
{
 if ( a <= b )
 return b;
 return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1688 */
int template_max<double>(double a, double b)
{
 int v2; // r5

 v2 = LODWORD(b);
 if ( a > b )
 return LODWORD(a);
 return v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x16BC */
void template_swap<int>(int *a, int *b)
{
 int v2; // r2

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x16D0 */
void Container<int>::Container(Container<int> *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x16DC */
void Container<int>::push(Container<int> *this, int value)
{
 int size; // r2

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x16F4 */
int Container<int>::get(const Container<int> *this, int idx)
{
 int result; // r0

 result = 0;
 if ( idx >= 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1714 */
int Container<int>::getSize(const Container<int> *this)
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x171C */
void Container<double>::Container(Container<double> *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1728 */
void Container<double>::push(Container<double> *this, double value)
{
 int size; // r12

 size = this->size;
 if ( size <= 9 )
 {
 this->data[size] = value;
 this->size = size + 1;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x174C */
double Container<double>::get(const Container<double> *this, int idx)
{
 double result; // r0

 result = 0.0;
 if ( idx >= 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1778 */
int Container<double>::getSize(const Container<double> *this)
{
 return this->size;
}


/* Function: _ZNK4Base7getNameEv @ 0x1780 */
const char * Base::getName(const Base *this)
{
 return "Base";
}


/* Function: _ZN4BaseD0Ev @ 0x1790 */
void Base::~Base(Base *this)
{
 operator delete(this);
}


/* Function: _ZNK7Derived7getNameEv @ 0x17A0 */
const char * Derived::getName(const Derived *this)
{
 return "Derived";
}


/* Function: _ZN7DerivedD0Ev @ 0x17B0 */
void Derived::~Derived(Derived *this)
{
 operator delete(this);
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x17C0 */
int MultiDerived::funcA(MultiDerived *this)
{
 return 30;
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x17C8 */
void MultiDerived::~MultiDerived(MultiDerived *this)
{
 operator delete(this);
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x17D8 */
int MultiDerived::funcB(MultiDerived *this)
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x17E0 */
void `non-virtual thunk to'MultiDerived::funcB()
{
 ;
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x17E8 */
void `non-virtual thunk to'MultiDerived::~MultiDerived()
{
 ;
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x17EC */
void `non-virtual thunk to'MultiDerived::~MultiDerived(int a1)
{
 operator delete((void *)(a1 - 8));
}


/* Function: _ZN5BaseA5funcAEv @ 0x1800 */
int BaseA::funcA(BaseA *this)
{
 return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x1808 */
void BaseA::~BaseA(BaseA *this)
{
 ;
}


/* Function: _ZN5BaseAD0Ev @ 0x180C */
void BaseA::~BaseA(BaseA *this)
{
 operator delete(this);
}


/* Function: _ZN5BaseB5funcBEv @ 0x181C */
int BaseB::funcB(BaseB *this)
{
 return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x1824 */
void BaseB::~BaseB(BaseB *this)
{
 ;
}


/* Function: _ZN5BaseBD0Ev @ 0x1828 */
void BaseB::~BaseB(BaseB *this)
{
 operator delete(this);
}


/* Function: _ZN7MiddleA4funcEv @ 0x1838 */
int MiddleA::func(MiddleA *this)
{
 return *(int *)((char *)&this->dataA + *((unsigned int *)this->_vptr$MiddleA - 3)) + 150;
}


/* Function: _ZN7MiddleAD1Ev @ 0x1850 */
void MiddleA::~MiddleA(MiddleA *this)
{
 ;
}


/* Function: _ZN7MiddleAD0Ev @ 0x1854 */
void MiddleA::~MiddleA(MiddleA *this)
{
 operator delete(this);
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x1864 */
void `virtual thunk to'MiddleA::func()
{
 ;
}


/* Function: _ZTv0_n16_N7MiddleAD1Ev @ 0x1884 */
void `virtual thunk to'MiddleA::~MiddleA()
{
 ;
}


/* Function: _ZTv0_n16_N7MiddleAD0Ev @ 0x1888 */
void `virtual thunk to'MiddleA::~MiddleA(unsigned int *a1)
{
 operator delete((char *)a1 + *(unsigned int *)(*a1 - 16));
}


/* Function: _ZN7MiddleB4funcEv @ 0x18A4 */
int MiddleB::func(MiddleB *this)
{
 return *(int *)((char *)&this->dataB + *((unsigned int *)this->_vptr$MiddleB - 3)) + 200;
}


/* Function: _ZN7MiddleBD1Ev @ 0x18BC */
void MiddleB::~MiddleB(MiddleB *this)
{
 ;
}


/* Function: _ZN7MiddleBD0Ev @ 0x18C0 */
void MiddleB::~MiddleB(MiddleB *this)
{
 operator delete(this);
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x18D0 */
void `virtual thunk to'MiddleB::func()
{
 ;
}


/* Function: _ZTv0_n16_N7MiddleBD1Ev @ 0x18F0 */
void `virtual thunk to'MiddleB::~MiddleB()
{
 ;
}


/* Function: _ZTv0_n16_N7MiddleBD0Ev @ 0x18F4 */
void `virtual thunk to'MiddleB::~MiddleB(unsigned int *a1)
{
 operator delete((char *)a1 + *(unsigned int *)(*a1 - 16));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1910 */
int DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)((char *)&this->dataA + *((unsigned int *)this->_vptr$MiddleA - 3)) + 250;
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x1928 */
void DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 operator delete(this);
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x1938 */
void `non-virtual thunk to'DiamondDerived::func()
{
 ;
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x1950 */
void `non-virtual thunk to'DiamondDerived::~DiamondDerived()
{
 ;
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x1954 */
void `non-virtual thunk to'DiamondDerived::~DiamondDerived(int a1)
{
 operator delete((void *)(a1 - 8));
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x1968 */
void `virtual thunk to'DiamondDerived::func()
{
 ;
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x1988 */
void `virtual thunk to'DiamondDerived::~DiamondDerived()
{
 ;
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x198C */
void `virtual thunk to'DiamondDerived::~DiamondDerived(unsigned int *a1)
{
 operator delete((char *)a1 + *(unsigned int *)(*a1 - 16));
}


/* Function: _ZN11VirtualBase4funcEv @ 0x19A8 */
int VirtualBase::func(VirtualBase *this)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x19B0 */
void VirtualBase::~VirtualBase(VirtualBase *this)
{
 ;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x19B4 */
void VirtualBase::~VirtualBase(VirtualBase *this)
{
 operator delete(this);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x19C4 */
void RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x19D4 */
int RTTIDerivedA::getType(const RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x19DC */
void RTTIBase::~RTTIBase(RTTIBase *this)
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x19E0 */
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x19F0 */
int RTTIDerivedB::getType(const RTTIDerivedB *this)
{
 return 2;
}


/* Function: .term_proc @ 0x19F8 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp__Znwj @ 0x130CC */

/* FAILED to decompile: __imp___cxa_begin_catch @ 0x130D0 */

/* FAILED to decompile: __imp___cxa_allocate_exception @ 0x130D4 */

/* FAILED to decompile: __imp_printf @ 0x130D8 */

/* FAILED to decompile: __imp_puts @ 0x130DC */

/* FAILED to decompile: __imp___libc_start_main @ 0x130E4 */

/* FAILED to decompile: __imp__Znaj @ 0x130E8 */

/* FAILED to decompile: __imp_abort @ 0x130EC */

/* FAILED to decompile: __imp__ZdlPv @ 0x130F0 */

/* FAILED to decompile: __imp___cxa_end_cleanup @ 0x130F4 */

/* FAILED to decompile: __imp___dynamic_cast @ 0x130F8 */

/* FAILED to decompile: __imp___cxa_atexit @ 0x130FC */

/* FAILED to decompile: __imp__ZdaPv @ 0x13100 */

/* FAILED to decompile: __imp___cxa_rethrow @ 0x13108 */

/* FAILED to decompile: __imp_strlen @ 0x1310C */

/* FAILED to decompile: __imp__ZNSt8ios_base4InitC1Ev @ 0x13110 */

/* FAILED to decompile: __imp___cxa_end_catch @ 0x13114 */

/* FAILED to decompile: __imp___gxx_personality_v0 @ 0x13118 */

/* FAILED to decompile: __imp_strcmp @ 0x1311C */

/* FAILED to decompile: __imp___cxa_throw @ 0x13120 */

/* FAILED to decompile: __imp___aeabi_dcmpgt @ 0x13124 */

/* FAILED to decompile: __aeabi_unwind_cpp_pr0 @ 0x1312C */

/* FAILED to decompile: __imp___cxa_finalize @ 0x13130 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x13134 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x1313C */

/* Total functions decompiled: 85, failed: 25 */
