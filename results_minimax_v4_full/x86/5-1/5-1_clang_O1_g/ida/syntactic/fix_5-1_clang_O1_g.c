/* Auto-injected type definitions by preprocessor */
#ifdef __cplusplus
#define EXTERN_C extern "C"
#else
#define EXTERN_C
#endif

#include <stddef.h>
#include <stdint.h>

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Macro definitions for byte manipulation */
#define HIBYTE(x) (*((unsigned char *)&(x) + 1))
#define BYTE1(x) (*((unsigned char *)&(x) + 1))
#define HIWORD(x) (*((unsigned short *)&(x) + 1))

/* Standard C library functions */
int strcmp(const char *s1, const char *s2);
char *strcpy(char *dest, const char *src);
size_t strlen(const char *s);
void *memset(void *s, int c, size_t n);
int printf(const char *format, ...);
int puts(const char *s);
void __cxa_throw(void *thrown_exception, void *tinfo, void *dest);
void *__cxa_allocate_exception(size_t thrown_size);
void __cxa_rethrow(void);
void *__cxa_begin_catch(void *exception);
void __cxa_end_catch(void);
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
void *__dynamic_cast(const void *src, const void *src_typeinfo, const void *dst_typeinfo, long adjust);
void _Unwind_Resume(void *arg);
int __libc_start_main(int (*main)(int, char**, char**), int argc, char **argv, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);

/* C++ operators */
void *operator new(size_t size);
void *operator new[](size_t size);
void operator delete(void *ptr);
void operator delete[](void *ptr);

/* Forward declarations for C++ classes */
struct Base;
struct Derived;
struct MultiDerived;
struct DiamondDerived;
template<typename T> struct Container;
struct LifecycleClass;
struct BaseA;
struct BaseB;
struct VirtualBase;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct MiddleA;
struct MiddleB;

/* Template class definition */
template<typename T>
struct Container {
    int size;
    T data[10];
    Container();
    void push(T value);
    T get(int idx) const;
    int getSize() const;
};

/* Class definitions */
struct Base {
    int (**_vptr$Base)(void);
    int virtual_func(int x);
    const char *getName() const;
    ~Base();
    Base();
};

struct Derived : Base {
    int multiplier;
    int virtual_func(int x);
    const char *getName() const;
    ~Derived();
    Derived();
};

struct BaseA {
    int dataA;
    int (**_vptr$BaseA)(void);
    int funcA();
    ~BaseA();
    BaseA();
};

struct MiddleA : virtual BaseA {
    int (**_vptr$MiddleA)(void);
    int func();
    ~MiddleA();
    MiddleA();
};

struct BaseB {
    int dataB;
    int (**_vptr$BaseB)(void);
    int funcB();
    ~BaseB();
    BaseB();
};

struct MiddleB : virtual BaseB {
    int (**_vptr$MiddleB)(void);
    int func();
    ~MiddleB();
    MiddleB();
};

struct MultiDerived {
    int (**_vptr$BaseA)(void);
    int dataA;
    int (**_vptr$BaseB)(void);
    int dataB;
    int funcA();
    int funcB();
    ~MultiDerived();
    MultiDerived();
};

struct DiamondDerived : MiddleA, MiddleB {
    int dataA;
    int dataB;
    int func();
    ~DiamondDerived();
    DiamondDerived();
};

struct LifecycleClass {
    static int instance_count;
};

int LifecycleClass::instance_count = 0;

struct VirtualBase {
    int data;
    int func();
    ~VirtualBase();
    VirtualBase();
};

struct RTTIBase {
    ~RTTIBase();
};

struct RTTIDerivedA : RTTIBase {
    int getType() const;
    ~RTTIDerivedA();
};

struct RTTIDerivedB : RTTIBase {
    int getType() const;
    ~RTTIDerivedB();
};

/* Typeinfo for RTTI - these are needed for dynamic_cast */
extern const char typeinfo_for_RTTIBase[];
extern const char typeinfo_for_RTTIDerivedA[];
extern const char typeinfo_for_RTTIDerivedB[];
extern unsigned int dword_0;
extern unsigned char byte_9;
extern char aCppL301D[];
extern char aCppL302D[];
extern char aCppL303D[];
extern char aCppL304D[];
extern char aCppL305D[];
extern char aCppL306D[];
extern char aCppL307D[];
extern char aCppL308D[];
extern char aCppL309D[];
extern char asc_31E5[];

/* Vtable pointers - these would be external in real binary */
extern int (**off_5CE4)(void);
extern int (**off_5D04)(void);
extern int (**off_5D28)(void);
extern int (**off_5D40)(void);
extern int (**off_5DB0)(void);
extern int (**off_5DC8)(void);
extern int (**off_5DE4)(void);
extern int (**off_5ECC)(void);
extern int (**off_5EE0)(void);

/* Namespace std */
namespace std {
    struct ios_base {
        struct Init {
            Init();
            ~Init();
        };
    };
}
std::ios_base::Init __ioinit;

/* Missing extern variable */
extern int _dso_handle;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-1/5-1_clang_O1_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x1000 - CRT initialization stub */
void init_proc()
{
 /* CRT initialization - stub functions from libgcc */
}


/* Function: sub_1030 @ 0x1030 - PLT stub */
void sub_1030()
{
 /* Jump to imported function via GOT */
}


/* Function: sub_1160 @ 0x1160 - virtual function call via vtable */
int sub_1160(int a1)
{
 return (*(int (**)(void))(a1 - 24))();
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x1170 */
void GLOBAL__sub_I_5_1_cpp()
{
 std::ios_base::Init::Init((std::ios_base::Init *)&std::__ioinit);
 __cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_11DC @ 0x11DC */
void sub_11DC()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x11E0 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1319 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x131D */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: _Z20test_cpp_member_funcv @ 0x1330 */
size_t test_cpp_member_func()
{
 unsigned short s[4]; // [esp+14h] [ebp-28h] BYREF
 int v2; // [esp+1Ch] [ebp-20h]
 int v3; // [esp+20h] [ebp-1Ch]
 int v4; // [esp+24h] [ebp-18h]
 int v5; // [esp+28h] [ebp-14h]
 unsigned char v6[8]; // [esp+2Ch] [ebp-10h] BYREF

 strcpy((char *)s, "Test");
 s[2] = 0;
 s[3] = 0;
 v2 = 0;
 v3 = 0;
 v4 = 0;
 v5 = 0;
 memset(v6, 0, sizeof(v6));
 return strlen((const char *)s) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x13B0 */
int test_cpp_constructor()
{
 int v0; // esi
 unsigned int *v1; // eax
 unsigned int *v2; // ecx
 int v3; // esi

 v0 = 0;
 v1 = (unsigned int *)operator new[](0x14u);
 v2 = v1;
 do
 {
 *v2 = v0;
 v0 += 10;
 ++v2;
 }
 while ( v0 != 50 );
 ++LifecycleClass::instance_count;
 v3 = v1[2] + LifecycleClass::instance_count;
 operator delete[](v1);
 --LifecycleClass::instance_count;
 return v3 + 1000 * LifecycleClass::instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x1420 */
int call_virtual_func(Base *obj, int x)
{
 return ((int ( *)(Base *, int))*obj->_vptr$Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1450 */
int test_cpp_virtual_func()
{
 int v0; // esi
 Base v2[2]; // [esp+8h] [ebp-14h] BYREF
 Base v3; // [esp+10h] [ebp-Ch] BYREF

 v3._vptr$Base = (int (**)(void))&off_5CE4;
 v2[1]._vptr$Base = (int (**)(void))(&dword_0 + 3);
 v0 = Base::virtual_func(&v3, 5);
 return v0 + Derived::virtual_func((Derived *)v2, 5) + 21;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x14B0 */
int test_cpp_multiple_inheritance()
{
 int v0; // eax
 int v1; // ebx
 MultiDerived v2; // [esp+10h] [ebp-1Ch] BYREF

 v2._vptr$BaseA = (int (**)(void))&off_5D28;
 v2._vptr$BaseB = (int (**)(void))&off_5D40;
 v2.dataA = 100;
 v2.dataB = 200;
 v0 = MultiDerived::funcA(&v2);
 v1 = (*(int (**)(void))v2._vptr$BaseB)((BaseB *)&v2);
 return v0 + v1 + 1;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1510 */
int test_cpp_diamond_inheritance()
{
 int v0; // eax
 int v1; // ebx
 unsigned int v2[3]; // [esp+Ch] [ebp-20h]
 unsigned int v3[5]; // [esp+18h] [ebp-14h] BYREF

 v3[0] = (unsigned int)&off_5DE4;
 v2[1] = (unsigned int)&off_5DC8;
 v3[1] = 50;
 /* virtual thunk call to DiamondDerived::func */
 v0 = (*(int ( **)(unsigned int *))v3[0])(v3);
 *(unsigned int *)((char *)v2 + (unsigned int)*(&off_5DB0 - 3)) = 100;
 v1 = (*(int ( **)(unsigned int *))v3[0])(v3);
 return v0 + v1;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1580 */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1590 */
int test_cpp_template_func()
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0x15A0 */
int test_cpp_template_class()
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x15B0 */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x15C0 */
void test_cpp_exception()
{
 unsigned int *exception; // eax

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 /* type_info pointer - using int typeid */
 __cxa_throw(exception, (void*)0, (void (*)(void*))0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x16B0 */
int test_cpp_smart_ptr()
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x16C0 */
size_t test_cpp_rtti()
{
 unsigned int *v0; // edi
 unsigned int *v1; // ebp
 const char *v2; // ecx
 int v3; // esi
 char *v4; // eax
 bool v5; // al
 int v6; // ebp
 void *v7; // eax
 int v8; // edi
 void *v9; // eax
 int v10; // ecx
 int v11; // edi
 size_t v12; // ebp
 char *s1; // [esp+0h] [ebp-1Ch]
 unsigned int *v15; // [esp+4h] [ebp-18h]
 void *lpsrc; // [esp+8h] [ebp-14h]

 v0 = (unsigned int *)operator new(4u);
 *v0 = &off_5ECC;
 v1 = (unsigned int *)operator new(4u);
 *v1 = &off_5EE0;
 v2 = *(const char **)(*(unsigned int *)(*v0 - 4) + 4);
 s1 = (char *)v2;
 if ( v2 == "RTTIDerivedA" )
 {
 v3 = 10;
 }
 else
 {
 v3 = 0;
 if ( *v2 != 42 )
 {
 v3 = 10;
 if ( strcmp(v2, "RTTIDerivedA") )
 v3 = 0;
 }
 }
 v4 = *(char **)(*(unsigned int *)(*v1 - 4) + 4);
 lpsrc = v1;
 v5 = v4 == "RTTIDerivedB" || *v4 != 42 && strcmp(v4, "RTTIDerivedB") == 0;
 v6 = v3 | 0x14;
 if ( !v5 )
 v6 = v3;
 v7 = __dynamic_cast(
 v0,
 (const void *)&typeinfo_for_RTTIBase,
 (const void *)&typeinfo_for_RTTIDerivedA,
 0);
 v15 = v0;
 v8 = v6 + 100;
 if ( !v7 )
 v8 = v6;
 v9 = __dynamic_cast(
 lpsrc,
 (const void *)&typeinfo_for_RTTIBase,
 (const void *)&typeinfo_for_RTTIDerivedB,
 0);
 v10 = v8 + 200;
 if ( !v9 )
 v10 = v8;
 v11 = v10;
 v12 = strlen(&s1[(*s1 == 42) ? 1 : 0]);
 (*(void ( **)(unsigned int *))(*v15 + 4))(v15);
 (*(void ( **)(void *))(*(unsigned int *)lpsrc + 4))(lpsrc);
 return v11 + v12;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1810 */
void test_cpp_oo_features()
{
 size_t v0; // eax
 int v1; // esi
 unsigned int *v2; // eax
 unsigned int *v3; // ecx
 int v4; // esi
 int v5; // esi
 int v6; // eax
 int v7; // eax
 int v8; // eax
 int v9; // esi
 int v10; // eax
 unsigned int ( **v11)(DiamondDerived *__hidden); // [esp+10h] [ebp-3Ch] BYREF
 unsigned int s[2]; // [esp+14h] [ebp-38h] BYREF
 int v13; // [esp+1Ch] [ebp-30h]
 unsigned int ( **v14)(DiamondDerived *__hidden); // [esp+20h] [ebp-2Ch] BYREF
 int v15; // [esp+24h] [ebp-28h]
 int v16; // [esp+28h] [ebp-24h]
 unsigned char v17[8]; // [esp+2Ch] [ebp-20h] BYREF
 Base v18; // [esp+38h] [ebp-14h] BYREF

 puts(asc_31E5);
 strcpy((char *)s, "Test");
 BYTE1(s[1]) = 0;
 HIWORD(s[1]) = 0;
 v13 = 0;
 v14 = 0;
 v15 = 0;
 v16 = 0;
 memset(v17, 0, sizeof(v17));
 v11 = (unsigned int ( **)(DiamondDerived *__hidden))(byte_9 + 1);
 v0 = strlen((const char *)s);
 printf(aCppL301D, v0 + 4700);
 v1 = 0;
 v2 = (unsigned int *)operator new[](0x14u);
 v3 = v2;
 do
 {
 *v3 = v1;
 v1 += 10;
 ++v3;
 }
 while ( v1 != 50 );
 ++LifecycleClass::instance_count;
 v4 = v2[2] + LifecycleClass::instance_count;
 operator delete[](v2);
 --LifecycleClass::instance_count;
 printf(aCppL302D, v4 + 1000 * LifecycleClass::instance_count);
 v18._vptr$Base = (int (**)(void))&off_5CE4;
 v11 = (unsigned int ( **)(DiamondDerived *__hidden))&off_5D04;
 s[0] = 3;
 v5 = Base::virtual_func(&v18, 5);
 v6 = Derived::virtual_func((Derived *)&v11, 5);
 printf(aCppL303D, v5 + v6 + 21);
 v11 = (unsigned int ( **)(DiamondDerived *__hidden))&off_5D28;
 s[1] = &off_5D40;
 s[0] = 100;
 v13 = 200;
 v7 = MultiDerived::funcB((MultiDerived *)((char *)&v11 + 8));
 printf(aCppL304D, v7 + 31);
 v11 = &off_5DB0;
 v14 = &off_5DE4;
 s[1] = &off_5DC8;
 v15 = 50;
 `virtual thunk to'DiamondDerived::func((DiamondDerived *)((char *)&v11 + 8));
 v9 = v8;
 *(unsigned int *)((char *)s + (unsigned int)*(v11 - 3)) = 100;
 v10 = (*v14)((DiamondDerived *)&v14);
 printf(aCppL305D, v9 + v10);
 printf(aCppL306D, 22);
 printf(aCppL307D, 39);
 printf(aCppL308D, 16);
 printf(aCppL309D, 85);
 test_cpp_exception();
}


/* Function: main @ 0x1AB0 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x1AD0 */
int Base::virtual_func(Base *this, int x)
{
 return x + 1;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1AE0 */
int Derived::virtual_func(Derived *this, int x)
{
 return x * this->multiplier;
}


/* Function: _ZN4BaseD2Ev @ 0x1AF0 */
void Base::~Base(Base *this)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1B00 */
void MultiDerived::~MultiDerived(MultiDerived *this)
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x1B10 */
void DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 ;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1B20 */
int template_max_int(int a, int b)
{
 int result; // eax

 result = b;
 if ( a > b )
 return a;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1B30 */
long double template_max_double(long double a, long double b)
{
 long double v2; // fst6

 v2 = b;
 if ( a > (long double)b )
 return a;
 return v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1B50 */
void template_swap_int(int *a, int *b)
{
 int v2; // edx

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1B70 */
void Container<int>::Container(Container<int> *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1B80 */
void Container<int>::push(Container<int> *this, int value)
{
 int size; // ecx

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x1BA0 */
int Container<int>::get(const Container<int> *this, int idx)
{
 int result; // eax

 result = 0;
 if ( idx >= 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1BC0 */
int Container<int>::getSize(const Container<int> *this)
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1BD0 */
void Container<double>::Container(Container<double> *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1BE0 */
void Container<double>::push(Container<double> *this, double value)
{
 int size; // ecx

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1C00 */
double Container<double>::get(const Container<double> *this, int idx)
{
 long double result; // fst7

 result = 0.0;
 if ( idx >= 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1C20 */
int Container<double>::getSize(const Container<double> *this)
{
 return this->size;
}


/* Function: _ZNK4Base7getNameEv @ 0x1C30 */
const char * Base::getName(const Base *this)
{
 return "Base";
}


/* Function: _ZN4BaseD0Ev @ 0x1C50 */
void Base::~Base(Base *this)
{
 operator delete(this);
}


/* Function: _ZNK7Derived7getNameEv @ 0x1C80 */
const char * Derived::getName(const Derived *this)
{
 return "Derived";
}


/* Function: _ZN7DerivedD0Ev @ 0x1CA0 */
void Derived::~Derived(Derived *this)
{
 operator delete(this);
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x1CD0 */
int MultiDerived::funcA(MultiDerived *this)
{
 return 30;
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x1CE0 */
void MultiDerived::~MultiDerived(MultiDerived *this)
{
 operator delete(this);
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x1D10 */
int MultiDerived::funcB(MultiDerived *this)
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x1D20 */
void __ZN12MultiDerived5funcBEv_thunk_n8()
{
 ;
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x1D30 */
void `non-virtual thunk to'MultiDerived::~MultiDerived()
{
 ;
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x1D40 */
void `non-virtual thunk to'MultiDerived::~MultiDerived(int a1)
{
 operator delete((void *)(a1 - 8));
}


/* Function: _ZN5BaseA5funcAEv @ 0x1D70 */
int BaseA::funcA(BaseA *this)
{
 return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x1D80 */
void BaseA::~BaseA(BaseA *this)
{
 ;
}


/* Function: _ZN5BaseAD0Ev @ 0x1D90 */
void BaseA::~BaseA(BaseA *this)
{
 operator delete(this);
}


/* Function: _ZN5BaseB5funcBEv @ 0x1DC0 */
int BaseB::funcB(BaseB *this)
{
 return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x1DD0 */
void BaseB::~BaseB(BaseB *this)
{
 ;
}


/* Function: _ZN5BaseBD0Ev @ 0x1DE0 */
void BaseB::~BaseB(BaseB *this)
{
 operator delete(this);
}


/* Function: _ZN7MiddleA4funcEv @ 0x1E10 */
int MiddleA::func(MiddleA *this)
{
 return *(int *)((char *)&this->dataA + *((unsigned int *)this->_vptr$MiddleA - 3)) + 150;
}


/* Function: _ZN7MiddleAD1Ev @ 0x1E30 */
void MiddleA::~MiddleA(MiddleA *this)
{
 ;
}


/* Function: _ZN7MiddleAD0Ev @ 0x1E40 */
void MiddleA::~MiddleA(MiddleA *this)
{
 operator delete(this);
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x1E70 */
void `virtual thunk to'MiddleA::func()
{
 ;
}


/* Function: _ZTv0_n16_N7MiddleAD1Ev @ 0x1E90 */
void `virtual thunk to'MiddleA::~MiddleA()
{
 ;
}


/* Function: _ZTv0_n16_N7MiddleAD0Ev @ 0x1EA0 */
void `virtual thunk to'MiddleA::~MiddleA(unsigned int *a1)
{
 operator delete((char *)a1 + *(unsigned int *)(*a1 - 16));
}


/* Function: _ZN7MiddleB4funcEv @ 0x1ED0 */
int MiddleB::func(MiddleB *this)
{
 return *(int *)((char *)&this->dataB + *((unsigned int *)this->_vptr$MiddleB - 3)) + 200;
}


/* Function: _ZN7MiddleBD1Ev @ 0x1EF0 */
void MiddleB::~MiddleB(MiddleB *this)
{
 ;
}


/* Function: _ZN7MiddleBD0Ev @ 0x1F00 */
void MiddleB::~MiddleB(MiddleB *this)
{
 operator delete(this);
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x1F30 */
void `virtual thunk to'MiddleB::func()
{
 ;
}


/* Function: _ZTv0_n16_N7MiddleBD1Ev @ 0x1F50 */
void `virtual thunk to'MiddleB::~MiddleB()
{
 ;
}


/* Function: _ZTv0_n16_N7MiddleBD0Ev @ 0x1F60 */
void `virtual thunk to'MiddleB::~MiddleB(unsigned int *a1)
{
 operator delete((char *)a1 + *(unsigned int *)(*a1 - 16));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1F90 */
int DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)((char *)&this->dataA + *((unsigned int *)this->_vptr$MiddleA - 3)) + 250;
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x1FB0 */
void DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 operator delete(this);
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x1FE0 */
void `non-virtual thunk to'DiamondDerived::func()
{
 ;
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x2000 */
void `non-virtual thunk to'DiamondDerived::~DiamondDerived()
{
 ;
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x2010 */
void `non-virtual thunk to'DiamondDerived::~DiamondDerived(int a1)
{
 operator delete((void *)(a1 - 8));
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x2040 */
void `virtual thunk to'DiamondDerived::func()
{
 ;
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x2060 */
void `virtual thunk to'DiamondDerived::~DiamondDerived()
{
 ;
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x2070 */
void `virtual thunk to'DiamondDerived::~DiamondDerived(unsigned int *a1)
{
 operator delete((char *)a1 + *(unsigned int *)(*a1 - 16));
}


/* Function: _ZN11VirtualBase4funcEv @ 0x20A0 */
int VirtualBase::func(VirtualBase *this)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x20B0 */
void VirtualBase::~VirtualBase(VirtualBase *this)
{
 ;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x20C0 */
void VirtualBase::~VirtualBase(VirtualBase *this)
{
 operator delete(this);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x20F0 */
void RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x2120 */
int RTTIDerivedA::getType(const RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x2130 */
void RTTIBase::~RTTIBase(RTTIBase *this)
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x2140 */
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x2170 */
int RTTIDerivedB::getType(const RTTIDerivedB *this)
{
 return 2;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x21CC */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: _Znwj @ 0x6084 */

/* FAILED to decompile: __cxa_finalize @ 0x6088 */

/* FAILED to decompile: __cxa_begin_catch @ 0x608C */

/* FAILED to decompile: __cxa_allocate_exception @ 0x6090 */

/* FAILED to decompile: strlen @ 0x6094 */

/* FAILED to decompile: __cxa_atexit @ 0x6098 */

/* FAILED to decompile: strcmp @ 0x60A0 */

/* FAILED to decompile: __libc_start_main @ 0x60A4 */

/* FAILED to decompile: _Znaj @ 0x60A8 */

/* FAILED to decompile: _ZdlPv @ 0x60AC */

/* FAILED to decompile: __dynamic_cast @ 0x60B0 */

/* FAILED to decompile: _ZdaPv @ 0x60B4 */

/* FAILED to decompile: printf @ 0x60BC */

/* FAILED to decompile: __cxa_rethrow @ 0x60C0 */

/* FAILED to decompile: puts @ 0x60C4 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x60C8 */

/* FAILED to decompile: __cxa_end_catch @ 0x60CC */

/* FAILED to decompile: __gxx_personality_v0 @ 0x60D0 */

/* FAILED to decompile: __cxa_throw @ 0x60D4 */

/* FAILED to decompile: _Unwind_Resume @ 0x60DC */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x60E0 */

/* Total functions decompiled: 90, failed: 21 */
