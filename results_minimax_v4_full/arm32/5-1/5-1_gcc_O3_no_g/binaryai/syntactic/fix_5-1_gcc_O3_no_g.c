// Forward declarations and type definitions
#include <cstddef>
#include <cstdio>
#include <new>
#include <typeinfo>

// Define __thiscall for non-MSVC compilers (it's a calling convention hint)
#ifndef _MSC_VER
#define __thiscall
#endif

struct type_info {
    virtual ~type_info();
};

type_info::~type_info() {}

namespace std {
    struct ios_base {
        struct Init {
            Init();
            ~Init();
        };
    };
    ios_base::Init __ioinit;
}

// Global variables
char completed_0 = 0;
// __dso_handle is typically provided by crtbegin.o - declare as weak to avoid multiple definition
extern void *__dso_handle __attribute__((weak));

// Class definitions
class Base {
public:
    virtual int virtual_func(int param_1);
    virtual unsigned char *getName();
    virtual ~Base();
};

class Derived : public Base {
public:
    int member;
    virtual int virtual_func(int param_1) override;
    virtual unsigned char *getName() override;
    virtual ~Derived();
};

class MiddleA {
public:
    virtual int func();
};

class MiddleB {
public:
    virtual int func();
};

class MultiDerived : public MiddleA, public MiddleB {
public:
    virtual unsigned int funcA();
    virtual unsigned int funcB();
    virtual ~MultiDerived();
};

class DiamondDerived : public MiddleA, public MiddleB {
public:
    virtual int func() override;
    virtual ~DiamondDerived();
};

class RTTIBase {
public:
    virtual ~RTTIBase();
};

// Note: RTTI type_info objects are compiler-generated in C++
// The extern declarations below provide dummy symbols for linking

// These are just placeholder declarations to satisfy the linker
// The actual vtable and typeinfo are compiler-generated

// RTTIBase destructor implementation
RTTIBase::~RTTIBase()
{
}

class RTTIDerivedA : public RTTIBase {
public:
    virtual unsigned int getType();
    virtual ~RTTIDerivedA();
};

class RTTIDerivedB : public RTTIBase {
public:
    virtual unsigned int getType();
    virtual ~RTTIDerivedB();
};

class LifecycleClass {
public:
    static int instance_count;
};

class Container_int_;
class Container_double_;

// Template functions
int template_max_int_(int param_1, int param_2);
double template_max_double_(double param_1, double param_2);
void template_swap_int_(int *param_1, int *param_2);

// External declarations (weak definitions for linking)
// Note: RTTI type_info objects are compiler-generated in C++

// Data pointers
char DAT_000114c0[] = "Base";
char DAT_000114d8[] = "Testing C++ Features";
char DAT_000114fc[] = "test_cpp_member_func: %d\n";
char DAT_0001151c[] = "test_cpp_constructor: %d\n";
char DAT_00011538[] = "test_cpp_virtual_func: %u\n";
char DAT_00011554[] = "test_cpp_multiple_inheritance: %u\n";
char DAT_00011570[] = "test_cpp_diamond_inheritance: %u\n";
char DAT_00011590[] = "test_cpp_operator_overload: %u\n";
char DAT_000115ac[] = "template_max: %d\n";
char DAT_000115c8[] = "test_cpp_template_class: %u\n";
char DAT_000115e4[] = "test_cpp_lambda: %u\n";
char DAT_00011600[] = "test_cpp_exception: %u\n";
char DAT_00011620[] = "test_cpp_smart_ptr: %u\n";
char DAT_00011640[] = "test_cpp_rtti: %u\n";
void *PTR__RTTIDerivedA_000116b4;
void *PTR__RTTIDerivedB_000116c8;

int LifecycleClass::instance_count = 0;

// External C library function declarations
extern "C" {
    void *__cxa_allocate_exception(size_t) __attribute__((weak));
    void __cxa_throw(void*, void*, void*) __attribute__((weak));
    void *__cxa_begin_catch(void*) __attribute__((weak));
    void __cxa_end_catch(void) __attribute__((weak));
    void __gmon_start__(void) __attribute__((weak));
    int __stack_chk_fail(int, ...) __attribute__((weak));
    int __aeabi_d2iz(double) __attribute__((weak));
    int __aeabi_dcmpgt(double, double) __attribute__((weak));
    void *operator_new(size_t) __attribute__((weak));
    void operator_delete(void*, unsigned int) __attribute__((weak));
    void abort(void) __attribute__((weak));
    int puts(const char*) __attribute__((weak));
    size_t strlen(const char*) __attribute__((weak));
    char *strncpy(char*, const char*, size_t) __attribute__((weak));
    int __printf_chk(int, const char*, ...) __attribute__((weak));
    int __libc_start_main(int(*)(int, char**), int, void(*)(void), void(*)(void), void(*)(void), unsigned int) __attribute__((weak));
    void *__dynamic_cast(const void*, const type_info*, const type_info*) __attribute__((weak));
    int __aeabi_atexit(void*, void*, void*) __attribute__((weak));
}

// __gmon_start__ is declared as weak extern above - no separate definition needed

// Implementation of test_cpp_member_func
int test_cpp_member_func(void)
{
    size_t sVar1;
    char acStack_2c[31];
    char local_d;
    int local_c;
    local_c = 0;
    strncpy(acStack_2c, "Test", 0x1f);
    local_d = 0;
    sVar1 = strlen(acStack_2c);
    if (local_c == 0) {
        return sVar1 + 0x125c;
    }
    __stack_chk_fail(0, 0, 0, 0);
    return 0;
}

// Implementation of test_cpp_constructor
int test_cpp_constructor(void)
{
    return LifecycleClass::instance_count * 0x3e9 + 0x15;
}

// Implementation of virtual function call
void call_virtual_func(Base *param_1, int param_2)
{
    // Call the first virtual function from the vtable
    typedef void (*VirtualFunc)(Base*);
    VirtualFunc vf = (VirtualFunc)(*(void**)(*(void**)param_1));
    vf(param_1);
    return;
}

// Implementations
unsigned int test_cpp_virtual_func(void) { return 0x2a; }
unsigned int test_cpp_multiple_inheritance(void) { return 0x47; }
unsigned int test_cpp_diamond_inheritance(void) { return 0x28a; }
unsigned int test_cpp_operator_overload(void) { return 0x16; }
unsigned int test_cpp_template_class(void) { return 0x10; }
unsigned int test_cpp_lambda(void) { return 0x55; }
unsigned int test_cpp_smart_ptr(void) { return 0x2bf; }

// Template function implementations
int template_max_int_(int param_1, int param_2)
{
    if (param_1 < param_2) {
        param_1 = param_2;
    }
    return param_1;
}

double template_max_double_(double param_1, double param_2)
{
    double result = param_1 > param_2 ? param_1 : param_2;
    return result;
}

void template_swap_int_(int *param_1, int *param_2)
{
    int iVar1;
    iVar1 = *param_1;
    *param_1 = *param_2;
    *param_2 = iVar1;
    return;
}

// Container class definitions
class Container_int_ {
private:
    int data[10];
    unsigned int size;
public:
    Container_int_();
    void push(int value);
    unsigned int get(int index);
    unsigned int getSize();
};

class Container_double_ {
private:
    double data[10];
    unsigned int size;
public:
    Container_double_();
    void push(double value);
    unsigned long long get(int index);
    unsigned int getSize();
};

// Container<int> implementation
Container_int_::Container_int_()
{
    size = 0;
}

void Container_int_::push(int param_1)
{
    int iVar1;
    iVar1 = size;
    if (iVar1 < 10) {
        size = iVar1 + 1;
        data[iVar1] = param_1;
    }
}

unsigned int Container_int_::get(int param_1)
{
    if ((-1 < param_1) && (param_1 < (int)size)) {
        return (unsigned int)data[param_1];
    }
    return 0;
}

unsigned int Container_int_::getSize()
{
    return size;
}

// Container<double> implementation
Container_double_::Container_double_()
{
    size = 0;
}

void Container_double_::push(double param_1)
{
    int iVar1;
    iVar1 = size;
    if (iVar1 < 10) {
        size = iVar1 + 1;
        data[iVar1] = param_1;
    }
}

unsigned long long Container_double_::get(int param_1)
{
    if ((-1 < param_1) && (param_1 < (int)size)) {
        return *(unsigned long long *)&data[param_1];
    }
    return 0;
}

unsigned int Container_double_::getSize()
{
    return size;
}

// Member function implementations
int Base::virtual_func(int param_1)
{
    return param_1 + 1;
}

unsigned char *Base::getName(void)
{
    return (unsigned char *)"Base";
}

Base::~Base()
{
}

int Derived::virtual_func(int param_1)
{
    return param_1 * *(int *)(this + 4);
}

unsigned char *Derived::getName(void)
{
    return (unsigned char *)"Derived";
}

Derived::~Derived() {}

unsigned int MultiDerived::funcA(void)
{
    return 0x1e;
}

unsigned int MultiDerived::funcB(void)
{
    return 0x28;
}

int MiddleA::func()
{
    return 150;
}

int MiddleB::func()
{
    return 200;
}

int DiamondDerived::func()
{
    return 250;
}

DiamondDerived::~DiamondDerived() {}

MultiDerived::~MultiDerived() {}

unsigned int RTTIDerivedA::getType(void)
{
    return 1;
}

RTTIDerivedA::~RTTIDerivedA() {}

unsigned int RTTIDerivedB::getType(void)
{
    return 2;
}

RTTIDerivedB::~RTTIDerivedB() {}

// Exception test function
unsigned int test_cpp_exception(void)
{
    unsigned int *puVar1;
    puVar1 = (unsigned int *)__cxa_allocate_exception(4);
    *puVar1 = 0x2a;
    // Use a dummy type_info pointer - real RTTI would require proper typeid()
    __cxa_throw(puVar1, (std::type_info*)nullptr, 0);
    return 0;
}

// RTTI test function
int test_cpp_rtti(void)
{
    int iVar1;
    int iVar2;
    int iVar3 = 0;
    int iVar4;
    size_t sVar5;
    RTTIDerivedA *derivedA = new RTTIDerivedA();
    RTTIDerivedB *derivedB = new RTTIDerivedB();
    
    iVar1 = (derivedA != 0) ? 1 : 0;
    if (iVar1 == 0) {
        iVar3 = 0x14;
        iVar2 = 0;
    }
    else {
        iVar2 = 10;
        iVar3 = 0x1e;
    }
    iVar4 = (derivedB != 0) ? 1 : 0;
    if (iVar4 != 0) {
        iVar2 = iVar3;
    }
    
    iVar1 = 0;
    if (iVar1 != 0) {
        iVar2 = iVar2 + 100;
    }
    iVar1 = 0;
    if (iVar1 != 0) {
        iVar2 = iVar2 + 200;
    }
    
    const char *name = typeid(*derivedA).name();
    if (*name == '*') {
        name = name + 1;
    }
    sVar5 = strlen(name);
    
    delete derivedA;
    delete derivedB;
    return iVar2 + sVar5;
}

// Template function test
void test_cpp_template_func(void)
{
    int result = template_max_int_(3, 7);
    double dresult = template_max_double_(3.0, 7.0);
    int a = 10, b = 20;
    template_swap_int_(&a, &b);
    int iresult = (int)dresult;
}

// Main test function
void test_cpp_oo_features(void)
{
    puts("Testing C++ Features");
    int memberResult = test_cpp_member_func();
    printf("test_cpp_member_func: %d\n", memberResult);
    printf("test_cpp_constructor: %d\n", test_cpp_constructor());
    printf("test_cpp_virtual_func: %u\n", test_cpp_virtual_func());
    printf("test_cpp_multiple_inheritance: %u\n", test_cpp_multiple_inheritance());
    printf("test_cpp_diamond_inheritance: %u\n", test_cpp_diamond_inheritance());
    printf("test_cpp_operator_overload: %u\n", test_cpp_operator_overload());
    
    int tmax = template_max_int_(3, 7);
    printf("template_max: %d\n", tmax);
    printf("test_cpp_template_class: %u\n", test_cpp_template_class());
    printf("test_cpp_lambda: %u\n", test_cpp_lambda());
    
    try {
        test_cpp_exception();
    } catch (...) {
        printf("test_cpp_exception: 0\n");
    }
    
    printf("test_cpp_smart_ptr: %u\n", test_cpp_smart_ptr());
    printf("test_cpp_rtti: %u\n", (unsigned int)test_cpp_rtti());
}

// Main function
int main(void)
{
    test_cpp_oo_features();
    return 0;
}

// Helper class to handle destructor registration
struct InitDestructor {
    ~InitDestructor() {
        // Properly destroy the iostream static object
        std::__ioinit.~Init();
    }
};

// Static object to trigger destructor at program exit
static InitDestructor init_destructor;

// Initialization - use proper C linkage for destructor callback
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
    // Properly initialize the iostream static object
    new (&std::__ioinit) std::ios_base::Init();
    return;
}

// Stack variable
static void (*stack_fini)(void) = NULL;

// Start function
void _start(unsigned int param_1, unsigned int param_2)
{
    __libc_start_main((int(*)(int, char**))main, param_2, stack_fini, 0, 0, param_1);
    abort();
}

// Weak function
void call_weak_fn(void)
{
    __gmon_start__();
    return;
}

// TM clones
void deregister_tm_clones(void) { return; }
void register_tm_clones(void) { return; }
void __do_global_dtors_aux(void)
{
    if (completed_0 != '\0') {
        return;
    }
    deregister_tm_clones();
    completed_0 = 1;
    return;
}

// Init and fini
int _init(void *ctx)
{
    call_weak_fn();
    return 0;
}

void _fini(void)
{
    return;
}

// Dummy implementations for undefined references
void FUN_0001092c(void)
{
    // Empty - was a NULL function pointer call
    return;
}

