/* Standard library includes */
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <typeinfo>

/* External declarations for runtime functions */
extern "C" {
    void *_cxa_allocate_exception(unsigned long);
    void _cxa_throw(void*, const std::type_info*, void*);
    void *_cxa_begin_catch(void*);
    void _cxa_end_catch();
    void _cxa_rethrow();
    void *_cxa_end_cleanup();
    int _aeabi_atexit(void*, void*, void*);
    void *__gxx_personality_v0;
    void abort();
    void _stack_chk_fail();
    int puts(const char*);
    int __printf_chk(int, const char*, ...);
    size_t strlen(const char*);
    char *strncpy(char*, const char*, size_t);
    int __aeabi_atexit(void*, void*, void*);
    int __aeabi_d2iz(double);
    int __aeabi_dcmpgt(double, double);
    void *operator new(size_t);
    void *operator new[](size_t);
    void operator delete(void*) noexcept;
    void operator delete(void*, unsigned long) noexcept;
    void operator delete[](void*) noexcept;
    void _dynamic_cast();
    int _libc_start_main();
    void _gmon_start__();
}

/* Forward declarations for C++ classes */
struct Base;
struct Derived;
struct MultiDerived;
struct VirtualBase;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;

namespace std {
    namespace ios_base {
        struct Init {
            Init();
            ~Init();
        };
    }
    using ios_base::Init;
    
    struct type_info {
        virtual ~type_info();
        bool operator==(const type_info&) const;
        bool operator!=(const type_info&) const;
    };
}

extern std::ios_base::Init __ioinit;
void *_dso_handle;

/* Type info structures */
struct type_info_int {};
struct type_info_RTTIBase {};
struct type_info_RTTIDerivedA {};
struct type_info_RTTIDerivedB {};

/* Forward declarations for template functions */
template<typename T>
T template_max(T a, T b);

template<typename T>
void template_swap(T* a, T* b);

/* Forward declarations for Container class */
struct Container_int;
struct Container_double;

namespace Container_int_impl {
    void push(Container_int* c, int val);
    int get(Container_int* c, int idx);
    int getSize(Container_int* c);
}

namespace Container_double_impl {
    void push(Container_double* c, double val);
    double get(Container_double* c, int idx);
    int getSize(Container_double* c);
}

struct Container_int {
    int data[10];
    int size;
};

struct Container_double {
    double data[10];
    int size;
};

namespace Container_int_impl {
    inline void push(Container_int* c, int val) {
        if (c->size < 10) {
            c->data[c->size++] = val;
        }
    }
    inline int get(Container_int* c, int idx) {
        if (idx < 0 || idx >= c->size) return 0;
        return c->data[idx];
    }
    inline int getSize(Container_int* c) {
        return c->size;
    }
}

/* Lifecycle class */
struct LifecycleClass {
    static int instance_count;
};

/* Base class for virtual function tests */
struct Base {
    virtual int virtual_func(int);
    virtual ~Base();
    const char* getName();
    virtual void* operator new(unsigned long);
    virtual void operator delete(void*, unsigned long);
};

struct Derived : Base {
    int multiplier;
    virtual int virtual_func(int);
    virtual ~Derived();
};

/* MultiDerived for multiple inheritance */
struct MultiDerived : Base, Derived {
    int valueA;
    int valueB;
    virtual ~MultiDerived();
    int funcA();
    int funcB();
    int non_virtual_thunk_to_MultiDerived_funcB();
    void non_virtual_thunk_to_MultiDerived_destructor();
};

/* Virtual base classes */
struct VirtualBase {
    virtual int func();
    virtual ~VirtualBase();
    virtual void* operator new(unsigned long);
    virtual void operator delete(void*, unsigned long);
};

struct MiddleA : VirtualBase {
    virtual int func();
    virtual ~MiddleA();
    void* operator new(unsigned long);
    void operator delete(void*, unsigned long);
};

struct MiddleB : VirtualBase {
    virtual int func();
    virtual ~MiddleB();
    void* operator new(unsigned long);
    void operator delete(void*, unsigned long);
};

struct DiamondDerived : MiddleA, MiddleB {
    virtual int func();
    virtual ~DiamondDerived();
};

/* RTTI test classes */
struct RTTIBase {
    virtual ~RTTIBase();
    virtual int getType() = 0;
};

struct RTTIDerivedA : RTTIBase {
    virtual int getType();
    virtual ~RTTIDerivedA();
    void* operator new(unsigned long);
    void operator delete(void*, unsigned long);
};

struct RTTIDerivedB : RTTIBase {
    virtual int getType();
    virtual ~RTTIDerivedB();
    void* operator new(unsigned long);
    void operator delete(void*, unsigned long);
};

/* Unique ptr implementation */
namespace std {
    template<typename T, typename Deleter = void(*)(T*)>
    struct unique_ptr {
        T* ptr;
        Deleter deleter;
        
        unique_ptr() : ptr(nullptr), deleter(nullptr) {}
        explicit unique_ptr(T* p) : ptr(p), deleter(nullptr) {}
        ~unique_ptr() { if (ptr) deleter(ptr); }
        
        T& operator*() { return *ptr; }
        T* operator->() { return ptr; }
        operator bool() const { return ptr != nullptr; }
    };
    
    template<typename T>
    struct unique_ptr<T[]> {
        T* ptr;
        
        unique_ptr() : ptr(nullptr) {}
        explicit unique_ptr(T* p) : ptr(p) {}
        ~unique_ptr() { if (ptr) delete[] ptr; }
        
        T& operator[](size_t i) { return ptr[i]; }
        operator bool() const { return ptr != nullptr; }
    };
}

/* Virtual tables (vtables) - external declarations */
extern void* off_11AF0;
extern void* off_11B08;
extern void* off_11B2C;
extern void* off_11B48;
extern void* off_11B68;
extern void* off_11B84;
extern void* off_11C20;
extern void* off_11C38;
extern void* off_11C54;
extern void* off_11C68;
extern void* off_11C7C;

/* Data for format strings */
extern const char unk_1188A[];
extern const char unk_118A8[];
extern const char unk_118C4[];
extern const char unk_118E0[];
extern const char unk_118FC[];
extern const char unk_11919[];
extern const char unk_11935[];
extern const char unk_11951[];
extern const char unk_1196D[];

/* Static string */
static const char s[] = "Testing C++ OOP Features:\n";

/* Function: .init_proc @ 0x109B0 */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_109BC @ 0x109BC */
void sub_109BC()
{
 JUMPOUT(0);
}


/* Function: _Z18test_cpp_exceptionv @ 0x10B08 */
void test_cpp_exception(void)
{
 unsigned int *exception; // r0

 exception = _cxa_allocate_exception(4u);
 *exception = 42;
 _cxa_throw(exception, (struct type_info *)&typeinfo_for_int, 0);
}


/* Function: main @ 0x10BBC */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x10BCC */
int GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 std::ios_base::Init::Init((std::ios_base::Init *)&std::__ioinit);
 return _aeabi_atexit(&std::__ioinit, std::ios_base::Init::~Init, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x10CF4 */
size_t test_cpp_member_func(void)
{
 char dest[32]; // [sp+4h] [bp-2Ch] BYREF

 strncpy(dest, "Test", 0x1Fu);
 dest[31] = 0;
 return strlen(dest) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x10D60 */
int test_cpp_constructor(void)
{
 return LifecycleClass::instance_count + 21 + 1000 * LifecycleClass::instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x10D7C */
int call_virtual_func(int ( ***a1))
{
 return (**a1)(a1);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x10D88 */
int test_cpp_virtual_func(int a1, int a2, int a3, int ( **a4)(unsigned int))
{
 int v4; // r4
 int ( **v6)(unsigned int); // [sp+0h] [bp-18h] BYREF
 int ( **v7[5])(unsigned int); // [sp+4h] [bp-14h] BYREF

 v7[2] = a4;
 v6 = (int ( **)(unsigned int))&off_11AF0;
 v7[0] = (int ( **)(unsigned int))&off_11B08;
 v7[1] = (int ( **)(unsigned int))3;
 v4 = call_virtual_func(&v6);
 return v4 + 21 + call_virtual_func(v7);
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x10E08 */
int test_cpp_multiple_inheritance(void)
{
 return 71;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x10E10 */
int test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x10E18 */
int test_cpp_template_func(int a1, int a2, int a3, int a4)
{
 int v4; // r4
 double v5; // r6
 int v7; // [sp+4h] [bp-1Ch] BYREF
 int v8; // [sp+8h] [bp-18h] BYREF

 v4 = template_max<int>(3, 7, a3, 0, a1, a2, a3, a4);
 v5 = COERCE_DOUBLE(template_max<double>(0, 1074003968, 0, 1073217536));
 v7 = 10;
 v8 = 20;
 template_swap<int>(&v7, &v8);
 return (int)v5 + v4 + v7 + v8;
}


/* Function: _Z23test_cpp_template_classv @ 0x10EC0 */
int test_cpp_template_class(void)
{
 int v0; // r3
 unsigned int v2[10]; // [sp+0h] [bp-38h] BYREF
 int v3; // [sp+28h] [bp-10h]

 v3 = 1;
 v2[0] = 10;
 Container<int>::push(v2, 20);
 Container<int>::push(v2, 30);
 if ( v3 > 0 )
 v0 = v2[0];
 else
 v0 = 0;
 return v3 + v0 + 3;
}


/* Function: _Z15test_cpp_lambdav @ 0x10F40 */
int test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z13test_cpp_rttiv @ 0x10F48 */
size_t test_cpp_rtti(void)
{
 void *v0; // r6
 void *v1; // r5
 int v2; // r4
 const char *v3; // r0
 size_t v4; // r4

 v0 = (void *)operator new(4u);
 *(unsigned int *)v0 = off_11C68;
 v1 = (void *)operator new(4u);
 *(unsigned int *)v1 = off_11C7C;
 if ( std::type_info::operator==(*(unsigned int *)(*(unsigned int *)v0 - 4), &typeinfo_RTTIDerivedA) )
 v2 = 10;
 else
 v2 = 0;
 if ( std::type_info::operator==(*(unsigned int *)(*(unsigned int *)v1 - 4), &typeinfo_RTTIDerivedB) )
 v2 += 20;
 if ( _dynamic_cast(
 v0,
 (const struct __class_type_info *)&typeinfo_RTTIBase,
 (const struct __class_type_info *)&typeinfo_RTTIDerivedA,
 0) )
 {
 v2 += 100;
 }
 if ( _dynamic_cast(
 v1,
 (const struct __class_type_info *)&typeinfo_RTTIBase,
 (const struct __class_type_info *)&typeinfo_RTTIDerivedB,
 0) )
 {
 v2 += 200;
 }
 v3 = *(const char **)(*(unsigned int *)(*(unsigned int *)v0 - 4) + 4);
 if ( *v3 == 42 )
 ++v3;
 v4 = v2 + strlen(v3);
 (*(void ( **)(void *))(*(unsigned int *)v0 + 4))(v0);
 (*(void ( **)(void *))(*(unsigned int *)v1 + 4))(v1);
 return v4;
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x11038 */
int test_cpp_smart_ptr(int a1, int a2, int a3, int a4)
{
 unsigned int *v4; // r0
 unsigned int *v5; // r0
 int v7; // [sp+0h] [bp-18h] BYREF
 unsigned int *v8; // [sp+4h] [bp-14h] BYREF
 unsigned int v9[4]; // [sp+8h] [bp-10h] BYREF

 v9[1] = a4;
 v4 = (unsigned int *)operator new(4u);
 *v4 = 200;
 v8 = v4;
 v7 = 0;
 v5 = (unsigned int *)operator new[](0x14u);
 *v5 = 1;
 v5[1] = 2;
 v5[2] = 3;
 v5[3] = 4;
 v9[0] = v5;
 v5[4] = 5;
 std::unique_ptr<int []>::~unique_ptr(v9);
 std::unique_ptr<int>::~unique_ptr(&v8);
 std::unique_ptr<int>::~unique_ptr(&v7);
 return 703;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x110EC */
int test_cpp_diamond_inheritance(void)
{
 int v0; // r4
 int v1; // r4
 unsigned int v3[4]; // [sp+4h] [bp-24h] BYREF
 unsigned int (**v4)(DiamondDerived *__hidden); // [sp+14h] [bp-14h] BYREF
 int v5; // [sp+18h] [bp-10h]

 v3[0] = &off_11C20;
 v3[2] = &off_11C38;
 v4 = &off_11C54;
 v5 = 50;
 v0 = virtual thunk_to_DiamondDerived_func((DiamondDerived *)&v4);
 v5 = 100;
 v1 = v0 + virtual thunk_to_DiamondDerived_func((DiamondDerived *)&v4);
 DiamondDerived::~DiamondDerived((DiamondDerived *)v3);
 return v1;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1117C */
void test_cpp_oo_features(void)
{
 size_t v0; // r0
 int v1; // r0
 long long v2; // r0
 int v3; // r2
 int ( **v4)(unsigned int); // r3
 int v5; // r0
 int v6; // r0
 int v7; // r0
 int v8; // r0
 long long v9; // r0
 int v10; // r2
 int v11; // r3
 int v12; // r0
 int v13; // r0
 int v14; // r0

 puts(s);
 v0 = test_cpp_member_func();
 _printf_chk(1, &unk_1188A, v0);
 v1 = test_cpp_constructor();
 v2 = _printf_chk(1, &unk_118A8, v1);
 v5 = test_cpp_virtual_func(v2, SHIDWORD(v2), v3, v4);
 _printf_chk(1, &unk_118C4, v5);
 v6 = test_cpp_multiple_inheritance();
 _printf_chk(1, &unk_118E0, v6);
 v7 = test_cpp_diamond_inheritance();
 _printf_chk(1, &unk_118FC, v7);
 v8 = test_cpp_operator_overload();
 v9 = _printf_chk(1, &unk_11919, v8);
 v12 = test_cpp_template_func(v9, SHIDWORD(v9), v10, v11);
 _printf_chk(1, &unk_11935, v12);
 v13 = test_cpp_template_class();
 _printf_chk(1, &unk_11951, v13);
 v14 = test_cpp_lambda();
 _printf_chk(1, &unk_1196D, v14);
 test_cpp_exception();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x112B0 */
int Base::virtual_func(int a2)
{
 return a2 + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x112B8 */
const char * Base::getName_()
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x112C4 */
Base::~Base()
{
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x112C8 */
int Derived::virtual_func(int a2)
{
 return a2 * *((unsigned int *)this + 1);
}


/* Function: _ZNK7Derived7getNameEv @ 0x112D4 */
const char * Derived::getName_()
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x112E0 */
int MultiDerived::funcA()
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x112E8 */
int MultiDerived::funcB()
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x112F0 */
int non_virtual_thunk_to_MultiDerived_funcB(MultiDerived *this)
{
 return 40;
}


/* Function: _ZN11VirtualBase4funcEv @ 0x112F8 */
int VirtualBase::func()
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x11300 */
void VirtualBase::~VirtualBase()
{
}


/* Function: _ZN7MiddleA4funcEv @ 0x11304 */
int MiddleA::func()
{
 return *(unsigned int *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12) + 4) + 150;
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x1131C */
int virtual thunk_to_MiddleA_func(MiddleA *this)
{
 return MiddleA::func((MiddleA *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x11330 */
int MiddleB::func()
{
 return *(unsigned int *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12) + 4) + 200;
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x11348 */
int virtual thunk_to_MiddleB_func(MiddleB *this)
{
 return MiddleB::func((MiddleB *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1135C */
int DiamondDerived::func(DiamondDerived *this)
{
 return *(unsigned int *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12) + 4) + 250;
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x11374 */
int virtual thunk_to_DiamondDerived_func(DiamondDerived *this)
{
 return DiamondDerived::func((DiamondDerived *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12)));
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x11388 */
int non_virtual_thunk_to_DiamondDerived_func(DiamondDerived *this)
{
 return DiamondDerived::func((DiamondDerived *)((char *)this - 8));
}


/* Function: _ZN7MiddleAD1Ev @ 0x11390 */
void MiddleA::~MiddleA()
{
 *(unsigned int *)this = &off_11B2C;
 *((unsigned int *)this + 2) = &off_11B48;
}


/* Function: _ZTv0_n16_N7MiddleAD1Ev @ 0x113A8 */
void virtual_thunk_to_MiddleA_destructor(MiddleA *this)
{
 int v1; // r1

 v1 = *(unsigned int *)(*(unsigned int *)this - 16);
 *(unsigned int *)((char *)this + v1) = &off_11B2C;
 *(unsigned int *)((char *)this + v1 + 8) = &off_11B48;
}


/* Function: _ZN7MiddleBD1Ev @ 0x113D0 */
void MiddleB::~MiddleB()
{
 *(unsigned int *)this = &off_11B68;
 *((unsigned int *)this + 2) = &off_11B84;
}


/* Function: _ZTv0_n16_N7MiddleBD1Ev @ 0x113E8 */
void virtual_thunk_to_MiddleB_destructor(MiddleB *this)
{
 int v1; // r1

 v1 = *(unsigned int *)(*(unsigned int *)this - 16);
 *(unsigned int *)((char *)this + v1) = &off_11B68;
 *(unsigned int *)((char *)this + v1 + 8) = &off_11B84;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x11410 */
int RTTIDerivedA::getType(RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x11418 */
int RTTIDerivedB::getType(RTTIDerivedB *this)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x11420 */
RTTIDerivedB::~RTTIDerivedB()
{
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x11424 */
RTTIDerivedA::~RTTIDerivedA()
{
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x11428 */
MultiDerived::~MultiDerived()
{
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x1142C */
void non_virtual_thunk_to_MultiDerived_destructor(MultiDerived *this)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x11434 */
void Derived::~Derived(Derived *this)
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x11438 */
Base::~Base()
{
 operator delete((void*)this);
}


/* Function: _ZN7DerivedD0Ev @ 0x11450 */
void Derived::~Derived(Derived *this)
{
 operator delete(this, 8u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x11468 */
void MultiDerived::~MultiDerived(MultiDerived *this)
{
 operator delete(this, 0x10u);
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x11480 */
void non_virtual_thunk_to_MultiDerived_destructor(MultiDerived *this)
{
 MultiDerived::~MultiDerived((MultiDerived *)((char *)this - 8));
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x11488 */
void VirtualBase::~VirtualBase(VirtualBase *this)
{
 operator delete(this, 8u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x114A0 */
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
 operator delete(this, 4u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x114B8 */
void RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
 operator delete(this, 4u);
}


/* Function: _ZN7MiddleAD0Ev @ 0x114D0 */
void MiddleA::~MiddleA(MiddleA *this)
{
 *(unsigned int *)this = &off_11B2C;
 *((unsigned int *)this + 2) = &off_11B48;
 operator delete(this, 0x10u);
}


/* Function: _ZTv0_n16_N7MiddleAD0Ev @ 0x114FC */
void virtual_thunk_to_MiddleA_destructor(MiddleA *this)
{
 MiddleA::~MiddleA((MiddleA *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 16)));
}


/* Function: _ZN7MiddleBD0Ev @ 0x11510 */
void MiddleB::~MiddleB(MiddleB *this)
{
 *(unsigned int *)this = &off_11B68;
 *((unsigned int *)this + 2) = &off_11B84;
 operator delete(this, 0x10u);
}


/* Function: _ZTv0_n16_N7MiddleBD0Ev @ 0x1153C */
void virtual_thunk_to_MiddleB_destructor(MiddleB *this)
{
 MiddleB::~MiddleB((MiddleB *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 16)));
}


/* Function: _ZN7MiddleAD2Ev @ 0x11550 */
void MiddleA::~MiddleA()
{
}


/* Function: _ZN7MiddleBD2Ev @ 0x11568 */
void MiddleB::~MiddleB(MiddleB *this, int *a2)
{
 int v2; // r2

 v2 = *a2;
 *(unsigned int *)this = *a2;
 *(unsigned int *)((char *)this + *(unsigned int *)(v2 - 12)) = a2[1];
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x11580 */
int template_max<int>(int result, int a2)
{
 if ( result < a2 )
 return a2;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1158C */
long long template_max<double>(double a1, double a2)
{
 double v2; // r4

 v2 = a1;
 if ( a1 <= a2 )
 v2 = a2;
 return *(unsigned long long *)&v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x115BC */
int * template_swap<int>(int *result, int *a2)
{
 int v2; // r3

 v2 = *result;
 *result = *a2;
 *a2 = v2;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x115D0 */
int Container<int>::Container(int result)
{
 *(unsigned int *)(result + 40) = 0;
 return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x115DC */
int Container_int_impl::push(Container_int* result, int a2)
{
 int v2; // r3

 v2 = *(unsigned int *)(result + 40);
 if ( v2 <= 9 )
 {
 *(unsigned int *)(result + 40) = v2 + 1;
 *(unsigned int *)(result + 4 * v2) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x115F4 */
int Container<int>::get(int a1, int a2)
{
 if ( a2 < 0 || *(unsigned int *)(a1 + 40) <= a2 )
 return 0;
 else
 return *(unsigned int *)(a1 + 4 * a2);
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x11618 */
int Container<int>::getSize(int a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x11620 */
int Container<double>::Container(int result)
{
 *(unsigned int *)(result + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1162C */
unsigned int * Container<double>::push(unsigned int *result, int a2, int a3, int a4)
{
 int v4; // r1

 v4 = result[20];
 if ( v4 <= 9 )
 {
 result[20] = v4 + 1;
 result += 2 * v4;
 *result = a3;
 result[1] = a4;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1164C */
long long Container<double>::get(int a1, int a2)
{
 if ( a2 < 0 || a2 >= *(unsigned int *)(a1 + 80) )
 return 0;
 else
 return *(unsigned long long *)(a1 + 8 * a2);
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x11678 */
int Container<double>::getSize(int a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x11680 */
void ** std::unique_ptr<int>::~unique_ptr(void **a1)
{
 void *v2; // r0

 v2 = *a1;
 if ( v2 )
 operator delete(v2, 4u);
 return a1;
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x116A4 */
void ** std::unique_ptr<int []>::~unique_ptr(void **a1)
{
 void *v2; // r0

 v2 = *a1;
 if ( v2 )
 operator delete[](v2);
 return a1;
}


/* Function: _ZN14DiamondDerivedD4Ev @ 0x116C4 */
void DiamondDerived::~DiamondDerived(DiamondDerived *this, int a2, int *a3)
{
 int v4; // r3
 unsigned int (**v7)(DiamondDerived *__hidden); // r2
 unsigned int (**v8)(DiamondDerived *__hidden); // r3
 int *v9; // r1
 int *v10; // r1

 if ( a2 )
 v4 = (int)&off_11C20;
 else
 v4 = *a3;
 *(unsigned int *)this = v4;
 if ( a2 )
 v4 = 16;
 if ( a2 )
 {
 v7 = &off_11C54;
 }
 else
 {
 v4 = *(unsigned int *)(v4 - 12);
 v7 = (unsigned int (**)(DiamondDerived *__hidden))a3[5];
 }
 *(unsigned int *)((char *)this + v4) = v7;
 if ( a2 )
 v8 = &off_11C38;
 else
 v8 = (unsigned int (**)(DiamondDerived *__hidden))a3[6];
 if ( a2 )
 v9 = (int *)&off_11C04;
 else
 v9 = a3 + 3;
 *((unsigned int *)this + 2) = v8;
 MiddleB::~MiddleB((DiamondDerived *)((char *)this + 8), v9);
 if ( a2 )
 v10 = (int *)&off_11BFC;
 else
 v10 = a3 + 1;
 MiddleA::~MiddleA(this, v10);
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x11748 */
void DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived(this, 2, 0);
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x11754 */
void non_virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this - 8));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x1175C */
void virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 16)));
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x11770 */
void DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived(this);
 operator delete(this, 0x18u);
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x11790 */
void non_virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this - 8));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x11798 */
void `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 16)));
}


/* Function: _ZN14DiamondDerivedD2Ev @ 0x117AC */
void DiamondDerived::~DiamondDerived(DiamondDerived *this, int *a2)
{
 DiamondDerived::~DiamondDerived(this, 0, a2);
}


/* Function: .term_proc @ 0x117B8 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __aeabi_unwind_cpp_pr0 @ 0x220A0 */

/* FAILED to decompile: __imp___cxa_end_catch @ 0x220A4 */

/* FAILED to decompile: __imp_strncpy @ 0x220A8 */

/* FAILED to decompile: __imp__ZdaPv @ 0x220AC */

/* FAILED to decompile: __imp___aeabi_d2iz @ 0x220B0 */

/* FAILED to decompile: __imp_abort @ 0x220B4 */

/* FAILED to decompile: __imp___cxa_throw @ 0x220B8 */

/* FAILED to decompile: __imp___libc_start_main @ 0x220BC */

/* FAILED to decompile: __imp___cxa_end_cleanup @ 0x220C0 */

/* FAILED to decompile: __imp___gxx_personality_v0 @ 0x220C4 */

/* FAILED to decompile: __imp___printf_chk @ 0x220C8 */

/* FAILED to decompile: __imp___aeabi_atexit @ 0x220CC */

/* FAILED to decompile: __imp___aeabi_dcmpgt @ 0x220D0 */

/* FAILED to decompile: __imp__ZNSt8ios_base4InitD1Ev @ 0x220D4 */

/* FAILED to decompile: __imp___dynamic_cast @ 0x220D8 */

/* FAILED to decompile: __imp__ZNSt8ios_base4InitC1Ev @ 0x220DC */

/* FAILED to decompile: __imp_strlen @ 0x220E0 */

/* FAILED to decompile: __imp__Znwj @ 0x220E4 */

/* FAILED to decompile: __imp__ZNKSt9type_infoeqERKS_ @ 0x220E8 */

/* FAILED to decompile: __imp___cxa_begin_catch @ 0x220EC */

/* FAILED to decompile: __imp_puts @ 0x220F0 */

/* FAILED to decompile: __imp__ZdlPvj @ 0x220F4 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x220F8 */

/* FAILED to decompile: __imp___cxa_rethrow @ 0x220FC */

/* FAILED to decompile: __imp___cxa_allocate_exception @ 0x22100 */

/* FAILED to decompile: __imp__Znaj @ 0x22104 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x2210C */

/* Total functions decompiled: 87, failed: 27 */
