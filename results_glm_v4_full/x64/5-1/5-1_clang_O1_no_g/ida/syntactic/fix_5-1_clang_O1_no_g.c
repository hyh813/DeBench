/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_clang_O1_no_g
 * Processor: pc
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <new>
#include <math.h>
#include <cmath>
#include <typeinfo>
#include <ios>
#include <cstring>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <exception>
#include <cstdarg>
#include <cxxabi.h>
#include <stdint.h>

/* C++ runtime support types */
namespace __cxxabiv1 {
    struct __class_type_info {
        const char* __name;
        __class_type_info(const char* n) : __name(n) {}
        virtual ~__class_type_info();
    };
    
    struct __si_class_type_info : __class_type_info {
        __class_type_info* __base;
        __si_class_type_info(const char* n, __class_type_info* base) 
            : __class_type_info(n), __base(base) {}
    };
    
    struct __vmi_class_type_info : __class_type_info {
        __vmi_class_type_info(const char* n) : __class_type_info(n) {}
    };
}

/* Implement __class_type_info virtual destructor */
__cxxabiv1::__class_type_info::~__class_type_info() {}

namespace std {
    class type_info {
    public:
        virtual ~type_info() {}
        const char* name() const noexcept { return __name; }
        bool before(const type_info& arg) const noexcept { return __name < arg.__name; }
        bool operator==(const type_info& arg) const noexcept { return __name == arg.__name; }
        bool operator!=(const type_info& arg) const noexcept { return __name != arg.__name; }
        
    protected:
        explicit type_info(const char* name) : __name(name) {}
        
    private:
        const char* __name;
    };
    
    class bad_alloc : public exception {
    public:
        bad_alloc() noexcept;
        bad_alloc(const bad_alloc&) noexcept;
        bad_alloc& operator=(const bad_alloc&) noexcept;
        virtual const char* what() const noexcept;
        virtual ~bad_alloc() noexcept;
    };
}

/* Forward declare C++ ABI functions */
extern "C" {
void *__cxa_allocate_exception(size_t);
void __cxa_throw(void *, std::type_info *, void (*)(void *));
void *__dynamic_cast(void *, const __cxxabiv1::__class_type_info *, const __cxxabiv1::__class_type_info *, ptrdiff_t);
int __cxa_atexit(void (*)(void *), void *, void *);
}



/* Function stubs for typeinfo references */
namespace std {
    class ios_base {
    public:
        class Init {
        public:
            Init();
            ~Init();
        };
    };
}

/* Implement std::ios_base::Init constructor and destructor */
std::ios_base::Init::Init() {}
std::ios_base::Init::~Init() {}

/* Implement operator new and delete */
void *operator new(size_t size) {
    if (size == 0) size = 1;
    void *p = malloc(size);
    if (!p) throw std::bad_alloc();
    return p;
}

void operator delete(void *ptr) noexcept {
    free(ptr);
}

/* Implement operator new[] and delete[] */
void *operator new[](size_t size) {
    return operator new(size);
}

void operator delete[](void *ptr) noexcept {
    operator delete(ptr);
}

/* Thunk function wrappers */
/* Functions implemented below - no extern declarations needed */

/* Typeinfo stubs */
static const char typeinfo_name_int[] = "i";
static std::type_info typeinfo_for_int(typeinfo_name_int);
static const char typeinfo_name_RTTIBase[] = "8RTTIBase";
static __cxxabiv1::__class_type_info typeinfo_for_RTTIBase(typeinfo_name_RTTIBase);
static const char typeinfo_name_RTTIDerivedA[] = "12RTTIDerivedA";
static __cxxabiv1::__class_type_info typeinfo_for_RTTIDerivedA(typeinfo_name_RTTIDerivedA);
static const char typeinfo_name_RTTIDerivedB[] = "12RTTIDerivedB";
static __cxxabiv1::__class_type_info typeinfo_for_RTTIDerivedB(typeinfo_name_RTTIDerivedB);

/* Forward declarations for C++ classes */
struct Base;
struct Derived;
struct MultiDerived;
struct DiamondDerived;
struct BaseA;
struct BaseB;
struct MiddleA;
struct MiddleB;
struct VirtualBase;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct LifecycleClass;

template<typename T>
struct Container;

/* Stub for LifecycleClass */
struct LifecycleClass {
    static int instance_count;
};
int LifecycleClass::instance_count = 0;

/* Stub for Base class */
struct Base {
    virtual ~Base() {}
    virtual long long virtual_func(int a2);
    virtual const char *getName() const;
    void operator delete(void *p);
};

/* Stub for Derived class */
struct Derived : Base {
    virtual ~Derived() {}
    virtual long long virtual_func(int a2);
    virtual const char *getName() const;
    void operator delete(void *p);
    int data[3];
};

/* Stub for MultiDerived class */
struct MultiDerived : BaseA, BaseB {
    virtual ~MultiDerived() {}
    virtual long long funcA();
    virtual long long funcB();
    virtual long long virtual_func(int a2);
    virtual const char *getName() const;
    void operator delete(void *p);
};

/* Stub for DiamondDerived class */
struct DiamondDerived : MiddleA, MiddleB {
    virtual ~DiamondDerived() {}
    virtual long long func();
    virtual long long virtual_func(int a2);
    virtual const char *getName() const;
    void operator delete(void *p);
};

/* Stub for BaseA class */
struct BaseA {
    virtual ~BaseA() {}
    virtual long long funcA();
    virtual long long virtual_func(int a2);
    virtual const char *getName() const;
    void operator delete(void *p);
};

/* Stub for BaseB class */
struct BaseB {
    virtual ~BaseB() {}
    virtual long long funcB();
    virtual long long virtual_func(int a2);
    virtual const char *getName() const;
    void operator delete(void *p);
};

/* Stub for MiddleA class */
struct MiddleA : virtual BaseA, virtual VirtualBase {
    virtual ~MiddleA() {}
    virtual long long func();
    virtual long long virtual_func(int a2);
    virtual const char *getName() const;
    void operator delete(void *p);
    int value;
};

/* Stub for MiddleB class */
struct MiddleB : virtual BaseB, virtual VirtualBase {
    virtual ~MiddleB() {}
    virtual long long func();
    virtual long long virtual_func(int a2);
    virtual const char *getName() const;
    void operator delete(void *p);
    int value;
};

/* Stub for VirtualBase class */
struct VirtualBase {
    virtual ~VirtualBase() {}
    virtual long long func();
    virtual long long virtual_func(int a2);
    virtual const char *getName() const;
    void operator delete(void *p);
};

/* Stub for RTTI classes */
struct RTTIBase {
    virtual ~RTTIBase() {}
    virtual long long virtual_func(int a2);
    virtual const char *getName() const;
    void operator delete(void *p);
};

struct RTTIDerivedA : RTTIBase {
    virtual ~RTTIDerivedA() {}
    virtual long long getType();
    virtual long long virtual_func(int a2);
    virtual const char *getName() const;
    void operator delete(void *p);
};

struct RTTIDerivedB : RTTIBase {
    virtual ~RTTIDerivedB() {}
    virtual long long getType();
    virtual long long virtual_func(int a2);
    virtual const char *getName() const;
    void operator delete(void *p);
};

/* Stub for Container template */
template<typename T>
struct Container {
    int count;
    T data[10];
    Container() : count(0) {}
    long long push(T a2);
    T get(int a2);
    long long getSize();
};

/* Specializations for Container<int> */
template<>
struct Container<int> {
    int count;
    int data[10];
    Container() : count(0) {}
    long long push(int a2);
    int get(int a2);
    long long getSize();
};

/* Specializations for Container<double> */
template<>
struct Container<double> {
    int count;
    double data[10];
    Container() : count(0) {}
    long long push(double a2);
    double get(int a2);
    long long getSize();
};

/* Global variable stubs */
extern const unsigned __int128 xmmword_3262;
extern long long off_59C8;
extern long long off_5A08;
extern long long off_5A50;
extern long long off_5A80;
extern long long off_5B58;
extern long long off_5B88;
extern long long off_5BC0;
extern long long off_5D78;
extern long long off_5DA0;
extern long long (*off_5A50_func)(void *);
extern long long (*off_5A80_func)(void *);
extern long long (*off_5B88_func)(void *);
extern const char *s;
extern const char *format;
extern const char *aCppL302D;
extern const char *aCppL303D;
extern const char *aCppL304D;
extern const char *aCppL305D;
extern const char *aCppL306D;
extern const char *aCppL307D;
extern const char *aCppL308D;
extern const char *aCppL309D;

/* Global variable definitions */
const unsigned __int128 xmmword_3262 = 0;
long long off_59C8 = 0;
long long off_5A08 = 0;
long long off_5A50 = 0;
long long off_5A80 = 0;
long long off_5B58 = 0;
long long off_5B88 = 0;
long long off_5BC0 = 0;
long long off_5D78 = 0;
long long off_5DA0 = 0;
long long (*off_5A50_func)(void *) = 0;
long long (*off_5A80_func)(void *) = 0;
long long (*off_5B88_func)(void *) = 0;
const char *s = "";
const char *format = "";
const char *aCppL302D = "";
const char *aCppL303D = "";
const char *aCppL304D = "";
const char *aCppL305D = "";
const char *aCppL306D = "";
const char *aCppL307D = "";
const char *aCppL308D = "";
const char *aCppL309D = "";

/* Stub for CRT globals */
void *_gmon_start__ = 0;
void *_dso_handle = 0;
std::ios_base::Init __ioinit;

/* Stub macros */
#define JUMPOUT(x) return

/* Forward declarations for thunk functions */
long long virtual_thunk_to_DiamondDerived_func(DiamondDerived *this);
long long virtual_thunk_to_DiamondDerived_func_2(DiamondDerived *this);
long long non_virtual_thunk_to_MultiDerived_funcB(MultiDerived *this);
void non_virtual_thunk_to_MultiDerived_D1(MultiDerived *this);
void non_virtual_thunk_to_MultiDerived_D0(MultiDerived *this);
long long virtual_thunk_to_MiddleA_func(MiddleA *this);
void virtual_thunk_to_MiddleA_D1(MiddleA *this);
void virtual_thunk_to_MiddleA_D0(MiddleA *this);
long long virtual_thunk_to_MiddleB_func(MiddleB *this);
void virtual_thunk_to_MiddleB_D1(MiddleB *this);
void virtual_thunk_to_MiddleB_D0(MiddleB *this);
long long non_virtual_thunk_to_DiamondDerived_func(DiamondDerived *this);
void non_virtual_thunk_to_DiamondDerived_D1(DiamondDerived *this);
void non_virtual_thunk_to_DiamondDerived_D0(DiamondDerived *this);
void virtual_thunk_to_DiamondDerived_D1_2(DiamondDerived *this);
void virtual_thunk_to_DiamondDerived_D0_2(DiamondDerived *this);
long long non_virtual_thunk_to_MultiDerived_funcA(MultiDerived *this);
long long non_virtual_thunk_to_DiamondDerived_func_3(DiamondDerived *this);

/* Function: .init_proc @ 0x2000 - removed by preprocessor */


/* Function: sub_2020 @ 0x2020 */
void sub_2020()
{
 JUMPOUT(0);
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x2150 */
int GLOBAL__sub_I_5_1_cpp()
{
 std::ios_base::Init::Init((std::ios_base::Init *)&std::__ioinit);
 return __cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x2270 */
long long test_cpp_member_func(void)
{
 unsigned char s[31]; // [rsp+4h] [rbp-24h] BYREF
 char v2; // [rsp+23h] [rbp-5h]

 *(unsigned long long *)s = xmmword_3262;
 *(unsigned long long *)&s[15] = *(__int128 *)((char *)&xmmword_3262 + 15);
 v2 = 0;
 return (unsigned int)strlen(s) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x22B0 */
long long test_cpp_constructor(void)
{
 unsigned int *v0; // rax
 long long v1; // rcx
 unsigned int *v2; // rdx
 int v3; // ebx

 v0 = (unsigned int *)operator new[](0x14u);
 v1 = 0;
 v2 = v0;
 do
 {
 *v2 = v1;
 v1 += 10;
 ++v2;
 }
 while ( v1 != 50 );
 ++LifecycleClass::instance_count;
 v3 = v0[2] + LifecycleClass::instance_count;
 operator delete[](v0);
 --LifecycleClass::instance_count;
 return (unsigned int)(v3 + 1000 * LifecycleClass::instance_count);
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x2310 */
long long call_virtual_func(Base *a1)
{
 return (**(long long ( ***)(Base *))a1)(a1);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x2320 */
long long test_cpp_virtual_func(void)
{
 int v0; // ebx
 long long v2; // [rsp+8h] [rbp-20h] BYREF
 int v3; // [rsp+10h] [rbp-18h]
 long long ( **v4)(Base *__hidden, int); // [rsp+18h] [rbp-10h] BYREF

 v4 = &off_59C8;
 v3 = 3;
 v0 = Base::virtual_func((Base *)&v4, 5);
 return v0 + (unsigned int)Derived::virtual_func((Derived *)&v2, 5) + 21;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x2380 */
long long test_cpp_multiple_inheritance(void)
{
 int v0; // ebx
 long long ( **v2)(MultiDerived *__hidden); // [rsp+8h] [rbp-30h] BYREF
 int v3; // [rsp+10h] [rbp-28h]
 long long ( **v4)(MultiDerived *__hidden); // [rsp+18h] [rbp-20h] BYREF
 int v5; // [rsp+20h] [rbp-18h]

 v2 = &off_5A50;
 v4 = &off_5A80;
 v3 = 100;
 v5 = 200;
 v0 = MultiDerived::funcA((MultiDerived *)&v2);
 return v0 + (unsigned int)(*v4)((MultiDerived *)&v4) + 1;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x23E0 */
long long test_cpp_diamond_inheritance(void)
{
 int v0; // ebp
 unsigned int v2[2]; // [rsp+10h] [rbp-38h]
 long long ( **v3)(DiamondDerived *__hidden); // [rsp+18h] [rbp-30h]
 long long ( **v4)(DiamondDerived *__hidden); // [rsp+28h] [rbp-20h] BYREF
 int v5; // [rsp+30h] [rbp-18h]

 v4 = &off_5BC0;
 v3 = &off_5B88;
 v5 = 50;
 v0 = virtual_thunk_to_DiamondDerived_func((DiamondDerived *)&v4);
 *(unsigned int *)((char *)v2 + (unsigned long long)*(&off_5B58 - 3)) = 100;
 return v0 + (unsigned int)(*v4)((DiamondDerived *)&v4);
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x2450 */
long long test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x2460 */
long long test_cpp_template_func(void)
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0x2470 */
long long test_cpp_template_class(void)
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x2480 */
long long test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x2490 */
void test_cpp_exception(void)
{
 unsigned int *exception; // rax

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&typeinfo_for_int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x2550 */
long long test_cpp_smart_ptr(void)
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x2560 */
long long test_cpp_rtti(void)
{
 void *v0; // r14
 void *v1; // r13
 const char *v2; // r15
 int v3; // ebx
 const char *v4; // rdi
 bool v5; // al
 int v6; // ebp
 int v7; // ebx
 int v8; // ebp
 int v9; // ebx

 v0 = (void *)operator new(8u);
 *(unsigned long long *)v0 = off_5D78;
 v1 = (void *)operator new(8u);
 *(unsigned long long *)v1 = off_5DA0;
 v2 = *(const char **)(*(unsigned long long *)(*(unsigned long long *)v0 - 8LL) + 8LL);
 if ( v2 == "12RTTIDerivedA" )
 {
 v3 = 10;
 }
 else
 {
 v3 = 0;
 if ( *v2 != 42 )
 {
 v3 = 10;
 if ( strcmp(*(const char **)(*(unsigned long long *)(*(unsigned long long *)v0 - 8LL) + 8LL), "12RTTIDerivedA") )
 v3 = 0;
 }
 }
 v4 = *(const char **)(*(unsigned long long *)(*(unsigned long long *)v1 - 8LL) + 8LL);
 v5 = v4 == "12RTTIDerivedB" || *v4 != 42 && strcmp(v4, "12RTTIDerivedB") == 0;
 v6 = v3 | 0x14;
 if ( !v5 )
 v6 = v3;
 v7 = v6 + 100;
 if ( !__dynamic_cast(
 v0,
 (const __cxxabiv1::__class_type_info *)&typeinfo_for_RTTIBase,
 (const __cxxabiv1::__class_type_info *)&typeinfo_for_RTTIDerivedA,
 0) )
 v7 = v6;
 v8 = v7 + 200;
 if ( !__dynamic_cast(
 v1,
 (const __cxxabiv1::__class_type_info *)&typeinfo_for_RTTIBase,
 (const __cxxabiv1::__class_type_info *)&typeinfo_for_RTTIDerivedB,
 0) )
 v8 = v7;
 v9 = strlen(&v2[*v2 == 42]);
 (*(void ( **)(void *))(*(unsigned long long *)v0 + 8LL))(v0);
 (*(void ( **)(void *))(*(unsigned long long *)v1 + 8LL))(v1);
 return (unsigned int)(v8 + v9);
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x26A0 */
void test_cpp_oo_features(void)
{
 int v0; // eax
 long long v1; // rbx
 unsigned int *v2; // rax
 unsigned int *v3; // rcx
 int v4; // ebx
 int v5; // ebx
 int v6; // eax
 int v7; // eax
 int v8; // ebp
 int v9; // eax
 unsigned char s[40]; // [rsp+0h] [rbp-48h] BYREF
 int v11; // [rsp+28h] [rbp-20h]
 long long ( **v12)(Base *__hidden, int); // [rsp+30h] [rbp-18h] BYREF

 puts(::s);
 *(unsigned long long *)&s[4] = xmmword_3262;
 memset(&s[19], 0, 17);
 *(unsigned int *)s = 10;
 v0 = strlen(&s[4]);
 v1 = 0;
 printf(format, (unsigned int)(v0 + 4700));
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
 printf(aCppL302D, (unsigned int)(v4 + 1000 * LifecycleClass::instance_count));
 v12 = &off_59C8;
 *(unsigned long long *)s = &off_5A08;
 *(unsigned int *)&s[8] = 3;
 v5 = Base::virtual_func((Base *)&v12, 5);
 v6 = (**(long long ( ***)(unsigned char *, long long))s)(s, 5);
 printf(aCppL303D, (unsigned int)(v5 + v6 + 21));
 *(unsigned long long *)s = &off_5A50;
 *(unsigned long long *)&s[16] = &off_5A80;
 *(unsigned int *)&s[8] = 100;
 *(unsigned int *)&s[24] = 200;
 v7 = non_virtual_thunk_to_MultiDerived_funcB((MultiDerived *)&s[16]);
 printf(aCppL304D, (unsigned int)(v7 + 31));
 *(unsigned long long *)s = &off_5B58;
 *(unsigned long long *)&s[32] = &off_5BC0;
 *(unsigned long long *)&s[16] = &off_5B88;
 v11 = 50;
 v8 = virtual_thunk_to_DiamondDerived_func_2((DiamondDerived *)&s[32]);
 *(unsigned int *)&s[*(unsigned long long *)(*(unsigned long long *)s - 24LL) + 8] = 100;
 v9 = (**(long long ( ***)(unsigned char *))&s[32])(&s[32]);
 printf(aCppL305D, (unsigned int)(v9 + v8));
 printf(aCppL306D, 22);
 printf(aCppL307D, 39);
 printf(aCppL308D, 16);
 printf(aCppL309D, 85);
 test_cpp_exception();
}


/* Function: main @ 0x28F0 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x2900 */
long long Base::virtual_func(int a2)
{
 return (unsigned int)(a2 + 1);
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x2910 */
long long Derived::virtual_func(int a2)
{
 return (unsigned int)(*((unsigned int *)this + 2) * a2);
}

/* Function: _ZN12MultiDerived12virtual_funcEi @ stub */
long long MultiDerived::virtual_func(int a2)
{
    return a2 + 30;
}

/* Function: _ZNK12MultiDerived7getNameEv @ stub */
const char * MultiDerived::getName() const
{
    return "MultiDerived";
}

/* Function: _ZN14DiamondDerived12virtual_funcEi @ stub */
long long DiamondDerived::virtual_func(int a2)
{
    return a2 + 50;
}

/* Function: _ZNK14DiamondDerived7getNameEv @ stub */
const char * DiamondDerived::getName() const
{
    return "DiamondDerived";
}

/* Function: _ZN5BaseA12virtual_funcEi @ stub */
long long BaseA::virtual_func(int a2)
{
    return a2 + 10;
}

/* Function: _ZNK5BaseA7getNameEv @ stub */
const char * BaseA::getName() const
{
    return "BaseA";
}

/* Function: _ZN5BaseB12virtual_funcEi @ stub */
long long BaseB::virtual_func(int a2)
{
    return a2 + 20;
}

/* Function: _ZNK5BaseB7getNameEv @ stub */
const char * BaseB::getName() const
{
    return "BaseB";
}

/* Function: _ZN7MiddleA12virtual_funcEi @ stub */
long long MiddleA::virtual_func(int a2)
{
    return a2 + 40;
}

/* Function: _ZNK7MiddleA7getNameEv @ stub */
const char * MiddleA::getName() const
{
    return "MiddleA";
}

/* Function: _ZN7MiddleB12virtual_funcEi @ stub */
long long MiddleB::virtual_func(int a2)
{
    return a2 + 60;
}

/* Function: _ZNK7MiddleB7getNameEv @ stub */
const char * MiddleB::getName() const
{
    return "MiddleB";
}

/* Function: _ZN11VirtualBase12virtual_funcEi @ stub */
long long VirtualBase::virtual_func(int a2)
{
    return a2 + 70;
}

/* Function: _ZNK11VirtualBase7getNameEv @ stub */
const char * VirtualBase::getName() const
{
    return "VirtualBase";
}

/* Function: _ZN8RTTIBase12virtual_funcEi @ stub */
long long RTTIBase::virtual_func(int a2)
{
    return a2 + 80;
}

/* Function: _ZNK8RTTIBase7getNameEv @ stub */
const char * RTTIBase::getName() const
{
    return "RTTIBase";
}

/* Function: _ZN12RTTIDerivedA12virtual_funcEi @ stub */
long long RTTIDerivedA::virtual_func(int a2)
{
    return a2 + 90;
}

/* Function: _ZNK12RTTIDerivedA7getNameEv @ stub */
const char * RTTIDerivedA::getName() const
{
    return "RTTIDerivedA";
}

/* Function: _ZN12RTTIDerivedB12virtual_funcEi @ stub */
long long RTTIDerivedB::virtual_func(int a2)
{
    return a2 + 100;
}

/* Function: _ZNK12RTTIDerivedB7getNameEv @ stub */
const char * RTTIDerivedB::getName() const
{
    return "RTTIDerivedB";
}


/* Function: _ZN4BaseD2Ev @ 0x2920 */
Base::~Base()
{
    operator delete(this);
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x2930 */
MultiDerived::~MultiDerived()
{
    operator delete(this);
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x2940 */
DiamondDerived::~DiamondDerived()
{
    operator delete(this);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x2950 */
long long template_max<int>(unsigned int a1, unsigned int a2)
{
 long long result; // rax

 result = a2;
 if ( (int)a1 > (int)a2 )
 return a1;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x2960 */
double template_max<double>(double a1, double a2)
{
 return fmax(a1, a2);
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x2970 */
long long template_swap<int>(unsigned int *a1, unsigned int *a2)
{
 long long result; // rax

 result = (unsigned int)*a1;
 *a1 = *a2;
 *a2 = result;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x2980 */
Container<int>::Container()
{
 count = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x2990 */
long long Container<int>::push(int a2)
{
 long long result; // rax

 result = count;
 if ( result <= 9 )
 {
 count = (int)result + 1;
 data[result] = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x29B0 */
int Container<int>::get(int a2)
{
 int result; // rax

 result = 0;
 if ( a2 >= 0 && count > a2 )
 return data[a2];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x29D0 */
long long Container<int>::getSize()
{
 return count;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x29E0 */
Container<double>::Container()
{
 count = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x29F0 */
long long Container<double>::push(double a2)
{
 long long result; // rax

 result = count;
 if ( result <= 9 )
 {
 count = (int)result + 1;
 data[result] = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x2A10 */
double Container<double>::get(int a2)
{
 double result; // xmm0_8

 result = 0.0;
 if ( a2 >= 0 && (unsigned int)count > a2 )
 return data[a2];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x2A30 */
long long Container<double>::getSize()
{
 return count;
}


/* Function: _ZNK4Base7getNameEv @ 0x2A40 */
const char * Base::getName() const
{
 return "Base";
}





/* Function: _ZNK7Derived7getNameEv @ 0x2A60 */
const char * Derived::getName() const
{
 return "Derived";
}





/* Function: _ZN12MultiDerived5funcAEv @ 0x2A80 */
long long MultiDerived::funcA()
{
 return 30;
}





/* Function: _ZN12MultiDerived5funcBEv @ 0x2AA0 */
long long MultiDerived::funcB()
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x2AB0 */
long long _ZThn16_N12MultiDerived5funcBEv(MultiDerived *this)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcAEv @ 0x2AB8 */
long long _ZThn16_N12MultiDerived5funcAEv(MultiDerived *this)
{
 return 30;
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x2AC0 */
void _ZThn16_N12MultiDerivedD1Ev(MultiDerived *this)
{
 ;
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x2AD0 */
void _ZThn16_N12MultiDerivedD0Ev(MultiDerived *this)
{
 operator delete((char *)this - 16);
}


/* Function: _ZN5BaseA5funcAEv @ 0x2AE0 */
long long BaseA::funcA()
{
 return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x2AF0 */
BaseA::~BaseA()
{
    operator delete(this);
}





/* Function: _ZN5BaseB5funcBEv @ 0x2B10 */
long long BaseB::funcB()
{
 return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x2B20 */
BaseB::~BaseB()
{
    operator delete(this);
}





/* Function: _ZN7MiddleA4funcEv @ 0x2B40 */
long long MiddleA::func()
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 150);
}


/* Function: _ZN7MiddleAD1Ev @ 0x2B60 */
MiddleA::~MiddleA()
{
    operator delete(this);
}





/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x2B80 */
long long _ZTv0_n24_N7MiddleA4funcEv(MiddleA *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this
 + *(unsigned long long *)(*(unsigned long long *)this - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) - 24LL)
 + 8)
 + 150);
}


/* Function: _ZTv0_n32_N7MiddleAD1Ev @ 0x2BA0 */
void _ZTv0_n32_N7MiddleAD1Ev(MiddleA *this)
{
 ;
}


/* Function: _ZTv0_n32_N7MiddleAD0Ev @ 0x2BB0 */
void _ZTv0_n32_N7MiddleAD0Ev(MiddleA *this)
{
 operator delete((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL));
}


/* Function: _ZN7MiddleB4funcEv @ 0x2BC0 */
long long MiddleB::func()
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 200);
}


/* Function: _ZN7MiddleBD1Ev @ 0x2BE0 */
MiddleB::~MiddleB()
{
    operator delete(this);
}





/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x2C00 */
long long _ZTv0_n24_N7MiddleB4funcEv(MiddleB *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this
 + *(unsigned long long *)(*(unsigned long long *)this - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) - 24LL)
 + 8)
 + 200);
}


/* Function: _ZTv0_n32_N7MiddleBD1Ev @ 0x2C20 */
void _ZTv0_n32_N7MiddleBD1Ev(MiddleB *this)
{
 ;
}


/* Function: _ZTv0_n32_N7MiddleBD0Ev @ 0x2C30 */
void _ZTv0_n32_N7MiddleBD0Ev(MiddleB *this)
{
 operator delete((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x2C40 */
long long DiamondDerived::func()
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 250);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x2C60 */
void _ZN14DiamondDerivedD0Ev(DiamondDerived *this)
{
 operator delete(this);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x2C70 */
long long _ZThn16_N14DiamondDerived4funcEv(DiamondDerived *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*((unsigned long long *)this - 2) - 24LL) - 8) + 250);
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x2C90 */
void _ZThn16_N14DiamondDerivedD1Ev(DiamondDerived *this)
{
 ;
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x2CA0 */
void _ZThn16_N14DiamondDerivedD0Ev(DiamondDerived *this)
{
 operator delete((char *)this - 16);
}


/* Function: _ZThn32_N14DiamondDerived4funcEv @ 0x2CA8 */
long long _ZThn32_N14DiamondDerived4funcEv(DiamondDerived *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this
 + *(unsigned long long *)(*(unsigned long long *)this - 32LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL)) - 24LL)
 + 8)
 + 250);
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x2CB0 */
long long _ZTv0_n24_N14DiamondDerived4funcEv(DiamondDerived *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this
 + *(unsigned long long *)(*(unsigned long long *)this - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) - 24LL)
 + 8)
 + 250);
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x2CD0 */
void _ZTv0_n32_N14DiamondDerivedD1Ev(DiamondDerived *this)
{
 ;
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x2CE0 */
void _ZTv0_n32_N14DiamondDerivedD0Ev(DiamondDerived *this)
{
 operator delete((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL));
}


/* Function: _ZN11VirtualBase4funcEv @ 0x2CF0 */
long long VirtualBase::func()
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x2D00 */
VirtualBase::~VirtualBase()
{
    operator delete(this);
}





/* Function: _ZN12RTTIDerivedAD0Ev @ 0x2D20 */
RTTIDerivedA::~RTTIDerivedA()
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x2D30 */
long long RTTIDerivedA::getType()
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x2D40 */
RTTIBase::~RTTIBase()
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x2D50 */
RTTIDerivedB::~RTTIDerivedB()
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x2D60 */
long long RTTIDerivedB::getType()
{
 return 2;
}


/* Function: .term_proc @ 0x2D68 */
void term_proc()
{
 ;
}

/* FAILED to decompile: __cxa_begin_catch @ 0x6100 */

/* FAILED to decompile: strlen @ 0x6108 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x6110 */

/* FAILED to decompile: __libc_start_main @ 0x6120 */

/* FAILED to decompile: __cxa_atexit @ 0x6128 */

/* FAILED to decompile: _ZdlPv @ 0x6130 */

/* FAILED to decompile: _Znwm @ 0x6138 */

/* FAILED to decompile: __dynamic_cast @ 0x6140 */

/* FAILED to decompile: _ZdaPv @ 0x6148 */

/* FAILED to decompile: strcmp @ 0x6158 */

/* FAILED to decompile: __cxa_rethrow @ 0x6160 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x6168 */

/* FAILED to decompile: puts @ 0x6170 */

/* FAILED to decompile: __cxa_end_catch @ 0x6178 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x6180 */

/* FAILED to decompile: __cxa_throw @ 0x6188 */

/* FAILED to decompile: _Unwind_Resume @ 0x6198 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x61A0 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x61A8 */

/* FAILED to decompile: __gmon_start__ @ 0x61B8 */

/* Total functions decompiled: 84, failed: 22 */

/* Thunk function implementations */
long long virtual_thunk_to_DiamondDerived_func(DiamondDerived *this)
{
    return DiamondDerived::func(this);
}

long long non_virtual_thunk_to_MultiDerived_funcB(MultiDerived *this)
{
    return MultiDerived::funcB((MultiDerived *)((char *)this + 16));
}

void non_virtual_thunk_to_MultiDerived_D1(MultiDerived *this)
{
    MultiDerived::~MultiDerived((MultiDerived *)((char *)this + 16));
}

void non_virtual_thunk_to_MultiDerived_D0(MultiDerived *this)
{
    operator delete((char *)this + 16);
}

long long virtual_thunk_to_MiddleA_func(MiddleA *this)
{
    return MiddleA::func(this);
}

void virtual_thunk_to_MiddleA_D1(MiddleA *this)
{
    MiddleA::~MiddleA(this);
}

void virtual_thunk_to_MiddleA_D0(MiddleA *this)
{
    operator delete((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL));
}

long long virtual_thunk_to_MiddleB_func(MiddleB *this)
{
    return MiddleB::func(this);
}

void virtual_thunk_to_MiddleB_D1(MiddleB *this)
{
    MiddleB::~MiddleB(this);
}

void virtual_thunk_to_MiddleB_D0(MiddleB *this)
{
    operator delete((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL));
}

long long non_virtual_thunk_to_DiamondDerived_func(DiamondDerived *this)
{
    return DiamondDerived::func((DiamondDerived *)((char *)this + 16));
}

void non_virtual_thunk_to_DiamondDerived_D1(DiamondDerived *this)
{
    DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this + 16));
}

void non_virtual_thunk_to_DiamondDerived_D0(DiamondDerived *this)
{
    operator delete((char *)this + 16);
}

long long virtual_thunk_to_DiamondDerived_func_2(DiamondDerived *this)
{
    return DiamondDerived::func(this);
}

void virtual_thunk_to_DiamondDerived_D1_2(DiamondDerived *this)
{
    DiamondDerived::~DiamondDerived(this);
}

void virtual_thunk_to_DiamondDerived_D0_2(DiamondDerived *this)
{
    operator delete((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL));
}

long long non_virtual_thunk_to_MultiDerived_funcA(MultiDerived *this)
{
    return MultiDerived::funcA((MultiDerived *)((char *)this + 16));
}

long long non_virtual_thunk_to_DiamondDerived_func_3(DiamondDerived *this)
{
    return DiamondDerived::func((DiamondDerived *)((char *)this + 16));
}
