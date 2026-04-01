/* Forward declarations for classes and vtables */

/* size_t definition */
#ifndef __SIZE_T
#define __SIZE_T
typedef unsigned int size_t;
#endif

struct Base;
struct Derived;
struct MultiDerived;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct LifecycleClass;
struct SimpleClass;
struct Container_int;
struct Container_double;

/* Vtable pointers - will be defined */
extern void* off_1162C;
extern void* off_11640;

/* Type info declarations */
struct type_info {
    virtual ~type_info();
    const char* _m_name;
};

struct __class_type_info : type_info {};
struct __si_class_type_info : __class_type_info {};

/* SimpleClass */
struct SimpleClass {
    char name[32];
};

/* LifecycleClass */
struct LifecycleClass {
    static int instance_count;
};

/* Base class */
struct Base {
    virtual int virtual_func(int x);
    virtual ~Base();
    const char* getName();
};

struct _vtable_Base {
    void** _vptr_Base;
};

/* Derived class */
struct Derived : Base {
    int multiplier;
    virtual int virtual_func(int x);
    virtual ~Derived();
};

/* MultiDerived class */
struct MultiDerived : Derived, Base {
    int dataA;
    int dataB;
    virtual int funcA();
    virtual int funcB();
    virtual ~MultiDerived();
};

/* MiddleA class */
struct MiddleA {
    void** _vptr_MiddleA;
    int dataA;
    virtual int func();
};

/* MiddleB class */
struct MiddleB {
    void** _vptr_MiddleB;
    int dataB;
    virtual int func();
};

/* DiamondDerived class */
struct DiamondDerived : MiddleA, MiddleB {
    int dataC;
    virtual int func();
    virtual ~DiamondDerived();
};

/* RTTI classes */
struct RTTIBase {
    virtual ~RTTIBase();
    virtual int getType() = 0;
};

struct RTTIDerivedA : RTTIBase {
    virtual int getType();
    virtual ~RTTIDerivedA();
};

struct RTTIDerivedB : RTTIBase {
    virtual int getType();
    virtual ~RTTIDerivedB();
};

/* Template class Container */
template<typename T>
struct Container {
    int size;
    T data[10];
    Container();
    void push(T value);
    T get(int idx);
    int getSize();
};

/* Template specializations will be needed */
template<>
struct Container<int> {
    int size;
    int data[10];
    Container<int>();
    void push(int value);
    int get(int idx);
    int getSize();
};

template<>
struct Container<double> {
    int size;
    double data[10];
    Container<double>();
    void push(double value);
    double get(int idx);
    int getSize();
};

/* External function declarations */
extern "C" {
    void* operator new(unsigned int size);
    void operator delete(void* ptr, unsigned int size);
    void puts(const char* s);
    size_t strlen(const char* s);
    char* strncpy(char* dest, const char* src, unsigned int n);
    int _printf_chk(int flag, const char* format, ...);
    void* _cxa_allocate_exception(unsigned int size);
    void _cxa_throw(void* exception, struct type_info* info, void (*dest)(void*));
    void* _cxa_begin_catch(void* exc);
    void* _cxa_end_catch();
    void _cxa_rethrow();
    int _dynamic_cast(void* ptr, const struct __class_type_info* from, const struct __class_type_info* to, int vtable_offset);
    void* __aeabi_atexit(void* obj, void (*destructor)(void*), void* dso_handle);
    void __stack_chk_fail();
    void abort();
    int __aeabi_unwind_cpp_pr0();
    int __aeabi_d2iz(double d);
    int __aeabi_dcmpgt(double a, double b);
    void std__ios_base__Init__Init(void* self);
    void std__ios_base__Init__D1(void* self);
    void std__ios_base__Init__C1(void* self);
    int std__type_info__operator__eq(const type_info* lhs, const type_info* rhs);
    void** _ZNSt8ios_base4InitE;
    void** _ZNSt8ios_base4InitC1E;
    void _gmon_start_();
    void* __libc_start_main;
    void __cxa_end_cleanup();
    void __gxx_personality_v0();
}

/* Namespace for C++ standard library components */
namespace std {
    struct ios_base {
        struct Init {
            Init();
            ~Init();
        };
    };
    static ios_base::Init __ioinit;
}

/* Forward declare ios_base::Init before extern declarations */
struct _ZNSt8ios_base4InitE;
struct _ZNSt8ios_base4InitC1E;

/* Weak function for initialization */
int call_weak_fn();

/* Main function - entry point */
int main() {
    return 0;
}

/* Data section references */
extern char s[];
extern char unk_11474[];
extern char unk_11494[];
extern char unk_114B0[];
extern char unk_114CC[];
extern char unk_114E8[];
extern char unk_11508[];
extern char unk_11524[];
extern char unk_11540[];
extern char unk_1155c[];
extern void* _dso_handle;
