/* Auto-injected type definitions by preprocessor */
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

// Missing global variables
extern unsigned long ___stack_chk_guard;
extern unsigned long __stack_chk_guard;
extern char completed_0;
extern void *__dso_handle;

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
    virtual char *getName() override;
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

class DiamondDerived : public MiddleA, public MiddleB {
public:
    int value;
    virtual int func() override;
    virtual ~DiamondDerived();
};

class MultiDerived : public Base {
public:
    virtual unsigned long long funcA();
    virtual unsigned long long funcB();
    virtual ~MultiDerived();
};

class RTTIBase {
public:
    virtual ~RTTIBase();
};

class RTTIDerivedA : public RTTIBase {
public:
    virtual unsigned long long getType();
    virtual ~RTTIDerivedA();
};

class RTTIDerivedB : public RTTIBase {
public:
    virtual unsigned long long getType();
    virtual ~RTTIDerivedB();
};

class LifecycleClass {
public:
    static int instance_count;
};

// Forward declarations for template functions
template<typename T>
T template_max_(T param_1, T param_2);

template<typename T>
void template_swap_(T *param_1, T *param_2);

// Forward declarations for template classes with specializations
template<typename T> class Container;

// End of class definitions

// Template class Container implementation
template<typename T>
class Container {
public:
    T data[10];
    unsigned int size;
    Container() : size(0) {}
    void push(T value) {
        if (size < 10) {
            data[size++] = value;
        }
    }
    T get(int index) {
        if (index >= 0 && index < (int)size) {
            return data[index];
        }
        return T();
    }
    unsigned int getSize() {
        return size;
    }
};

// Explicit template instantiations
template class Container<int>;
template class Container<double>;

// Forward declarations for functions
void call_virtual_func(Base *param_1, int param_2);

// Forward declaration for test_cpp_exception
unsigned long long test_cpp_exception(void);

// Static member definition
int LifecycleClass::instance_count = 0;

// Virtual function table pointers (these would normally be in a vtable)
extern int (*PTR_virtual_func_00113958)(Base*, int);
extern int (*PTR_virtual_func_00113988)(Derived*, int);
extern int (*PTR_func_00113b30)(DiamondDerived*);
extern const char DAT_00102148[];
extern const char DAT_00102170[];
extern const char DAT_00102190[];
extern const char DAT_001021b0[];
extern const char DAT_001021d0[];
extern const char DAT_001021f0[];
extern const char DAT_00102210[];
extern const char DAT_00102230[];
extern const char DAT_00102250[];
extern const char DAT_00102270[];
extern const char DAT_00102290[];
extern const char DAT_001022b0[];
extern const char DAT_001022d0[];
extern const char DAT_00102130[];
extern void* PTR__RTTIDerivedA_00113b58;
extern void* PTR__RTTIDerivedB_00113b80;

// Type info structures for RTTI
namespace std {
    class ios_base::Init {};
    ios_base::Init __ioinit;
}

namespace int_ {
    static char* typeinfo = nullptr;
}

namespace double_ {
    static char* typeinfo = nullptr;
}

namespace RTTIBase {
    static char typeinfo[] = "7RTTIBase";
}

namespace RTTIDerivedA {
    static char typeinfo[] = "12RTTIDerivedA";
}

namespace RTTIDerivedB {
    static char typeinfo[] = "12RTTIDerivedB";
}

// SHA256: 02a1cabe0fe00f6c2b4447d507395f198ebea74125e99fad8cd9bf08ec08f66f

// Function: _init @ 0x101458
// Forward declarations
void call_weak_fn(void *ctx);
int main(void);

int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn(ctx);
 return iVar1;
}

// Function: FUN_00101470 @ 0x101470
void FUN_00101470(void)
{
 (*(void *)(char *)0x0)();
 return;
}

// Forward declarations for external functions with proper signatures
int puts(char *__s);
size_t strlen(char *__s);
void __stack_chk_fail(void);
void *__cxa_allocate_exception(unsigned long);
void __cxa_throw(void *, void *, void *);
void __cxa_finalize(void *);
int __libc_start_main(int (*main)(void), void *arg, void *stack);
void *operator_new(unsigned long);
void *operator_new__(unsigned long);
void operator_delete(void *, unsigned long);
void operator_delete__(void *, unsigned long);
char *strncpy(char *__dest, char *__src, size_t __n);
void *__dynamic_cast(void *, void *, void *, void *, int);
int __cxa_atexit(void (*)(void *), void *, void *);
void __cxa_end_catch(void);
void __cxa_rethrow(void);
void abort(void);
int strcmp(const char *__s1, const char *__s2);
int __printf_chk(int __flag, const char *__format, ...);
void __gmon_start__(void);

// Forward declarations for template functions
int template_max_int_(int, int);
double template_max_double_(double, double);
void template_swap_int_(int *, int *);

// Forward declarations for functions
void call_weak_fn(void *ctx);
int main(void);
int test_cpp_member_func(void);
int test_cpp_constructor(void);
void call_virtual_func(Base *param_1, int param_2);
int test_cpp_virtual_func(void);
unsigned long long test_cpp_multiple_inheritance(void);
unsigned long long test_cpp_diamond_inheritance(void);
unsigned long long test_cpp_operator_overload(void);
void test_cpp_template_func(void);
unsigned long long test_cpp_template_class(void);
unsigned long long test_cpp_lambda(void);
void test_cpp_exception(void);
unsigned long long test_cpp_smart_ptr(void);
int test_cpp_rtti(void);
void test_cpp_oo_features(void);

// Function: <EXTERNAL>::__gmon_start__ @ 0x101600
void __gmon_start__(void)
{
 __gmon_start__();
 return;
}

// Function: _start @ 0x101640
void _start(unsigned long long param_1)
{
 unsigned long long param_9;
 void *stack_guard = 0;
 __libc_start_main((int (*)(void))main,param_9,stack_guard,0,0,param_1);
 // Should not reach here
 while(1) { }
}

// Function: call_weak_fn @ 0x101674
void call_weak_fn(void)
{
 __gmon_start__();
 return;
}

// Function: deregister_tm_clones @ 0x101690
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1016c0
void register_tm_clones(void)
{
 return;
}

// Function: FUN_001016fc @ 0x1016fc
void FUN_001016fc(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x101700
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: test_cpp_member_func @ 0x101754
int test_cpp_member_func(void)
{
 size_t sVar1;
 char acStack_2c [31];
 char local_d;
 long local_8;
 local_8 = ___stack_chk_guard;
 strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar1 = strlen(acStack_2c);
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return (int)sVar1 + 0x125c;
}

// Function: test_cpp_constructor @ 0x1017cc
int test_cpp_constructor(void)
{
 int iVar1;
 void *pvVar2;
 pvVar2 = operator_new__(0x14);
 *(unsigned int *)((long)pvVar2 + 4) = 10;
 *(unsigned int *)((long)pvVar2 + 8) = 0x14;
 *(unsigned int *)((long)pvVar2 + 0xc) = 0x1e;
 *(unsigned int *)((long)pvVar2 + 0x10) = 0x28;
 iVar1 = LifecycleClass::instance_count + 0x15;
 LifecycleClass::instance_count = LifecycleClass::instance_count + 1;
 operator_delete__(pvVar2);
 LifecycleClass::instance_count = LifecycleClass::instance_count + -1;
 return iVar1 + LifecycleClass::instance_count * 1000;
}

// Function: call_virtual_func @ 0x101838
void call_virtual_func(Base *param_1,int param_2)
{
 // Call virtual function through vtable
 void **vtable = *(void ***)((void **)param_1);
 ((int (*)(Base*, int))vtable[0])(param_1, param_2);
 return;
}

// Function: test_cpp_virtual_func @ 0x101854
int test_cpp_virtual_func(void)
{
 int iVar1;
 int iVar2;
 char **local_20;
 char **local_18;
 unsigned int local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_20 = &PTR_virtual_func_00113958;
 local_18 = &PTR_virtual_func_00113988;
 local_10 = 3;
 call_virtual_func((Base *)&local_20,5);
 call_virtual_func((Base *)&local_18,5);
 iVar1 = 0x14;
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return iVar1;
}

// Function: test_cpp_multiple_inheritance @ 0x1018e4
unsigned long long test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x1018ec
unsigned long long test_cpp_diamond_inheritance(void)
{
 int iVar1;
 int iVar2;
 char **local_18;
 unsigned int local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_18 = &PTR_func_00113b30;
 local_10 = 0x32;
 iVar1 = ((int (*)(DiamondDerived *))(*(int (**)(char **))(*(long *)local_18 + 8)))(local_18);
 local_10 = 100;
 iVar2 = ((int (*)(DiamondDerived *))(*(int (**)(char **))(*(long *)local_18 + 8)))(local_18);
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return (unsigned long long)(iVar1 + iVar2);
}

// Function: test_cpp_operator_overload @ 0x101988
unsigned long long test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x101990
void test_cpp_template_func(void)
{
 int iVar1;
 double dVar2;
 int local_10;
 int local_c;
 long local_8;
 local_8 = ___stack_chk_guard;
 iVar1 = template_max_int_(3,7);
 dVar2 = template_max_double_(2.5,1.5);
 local_10 = 10;
 local_c = 0x14;
 template_swap_int_(&local_10,&local_c);
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: test_cpp_template_class @ 0x101a38
unsigned long long test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x101a40
unsigned long long test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_exception @ 0x101a48
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&int::typeinfo,0);
 return;
}

// Function: test_cpp_smart_ptr @ 0x101b20
unsigned long long test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x101b28
int test_cpp_rtti(void)
{
 int iVar1;
 long *plVar2;
 long *plVar3;
 long lVar4;
 size_t sVar5;
 int iVar6;
 char *__s1;
 long lVar7;
 plVar2 = (long *)operator_new(8);
 *plVar2 = (long)&PTR__RTTIDerivedA_00113b58;
 plVar3 = (long *)operator_new(8);
 *plVar3 = (long)&PTR__RTTIDerivedB_00113b80;
 lVar7 = *plVar2;
 __s1 = *(char **)(*(long *)(lVar7 + -8) + 8);
 iVar6 = 10;
 if ((__s1 != "12RTTIDerivedA") && (iVar6 = 0, *__s1 != '*')) {
 iVar1 = strcmp(__s1,"12RTTIDerivedA");
 iVar6 = 10;
 if (iVar1 != 0) {
 iVar6 = 0;
 }
 }
 lVar4 = __dynamic_cast(plVar2,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 iVar1 = iVar6 + 0x78;
 if (lVar4 == 0) {
 iVar1 = iVar6 + 0x14;
 }
 lVar4 = __dynamic_cast(plVar3,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 iVar6 = iVar1 + 200;
 if (lVar4 == 0) {
 iVar6 = iVar1;
 }
 if (*__s1 == '*') {
 __s1 = __s1 + 1;
 }
 sVar5 = strlen(__s1);
 (**(void **)(lVar7 + 8))(plVar2);
 (**(void **)(*plVar3 + 8))(plVar3);
 return iVar6 + (int)sVar5;
}

// Function: test_cpp_oo_features @ 0x101c8c
void test_cpp_oo_features(void)
{
 unsigned int uVar1;
 puts(DAT_00102148);
 uVar1 = test_cpp_member_func();
 __printf_chk(1,DAT_00102170,uVar1);
 uVar1 = test_cpp_constructor();
 __printf_chk(1,DAT_00102190,uVar1);
 uVar1 = test_cpp_virtual_func();
 __printf_chk(1,DAT_001021b0,uVar1);
 uVar1 = test_cpp_multiple_inheritance();
 __printf_chk(1,DAT_001021d0,uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,DAT_001021f0,uVar1);
 __printf_chk(1,DAT_00102210,0x16);
 uVar1 = test_cpp_template_func();
 __printf_chk(1,DAT_00102230,uVar1);
 __printf_chk(1,DAT_00102250,0x10);
 __printf_chk(1,DAT_00102270,0x55);
 uVar1 = test_cpp_exception();
 __printf_chk(1,DAT_00102290,uVar1);
 uVar1 = test_cpp_smart_ptr();
 __printf_chk(1,DAT_001022b0,uVar1);
 uVar1 = test_cpp_rtti();
 __printf_chk(1,DAT_001022d0,uVar1);
 return;
}

// Function: main @ 0x101dbc
unsigned long long main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x101dd4
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 std::ios_base::Init::Init((Init *)&std::__ioinit);
 __cxa_atexit(std::ios_base::Init::_Init,&std::__ioinit,&__dso_handle);
 return;
}

// Function: Base::virtual_func @ 0x101e18
int Base::virtual_func(int param_1)
{
 return param_1 + 1;
}

// Function: Base::getName @ 0x101e20
unsigned char * Base::getName(void)
{
 return &DAT_00102130;
}

// Function: Base::~Base @ 0x101e2c
Base::~Base()
{
 return;
}

// Function: Derived::virtual_func @ 0x101e30
int Derived::virtual_func(int param_1)
{
    Derived *this = (Derived*)((char*)&param_1 - __builtin_offsetof(Derived, member));
    return param_1 * this->member;
}

// Function: Derived::getName @ 0x101e3c
char * Derived::getName(void)
{
 return "Derived";
}

// Function: MultiDerived::funcA @ 0x101e48
unsigned long long MultiDerived::funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived::funcB @ 0x101e50
unsigned long long MultiDerived::funcB(void)
{
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x101e58
unsigned long long __thiscall MultiDerived::funcB(MultiDerived *this)
{
 return 0x28;
}

// Function: MiddleA::func @ 0x101e60
int MiddleA::func()
{
 return *(int *)((char *)this + 8) + 0x96;
}

// Function: MiddleB::func @ 0x101e9c
int MiddleB::func()
{
 MiddleB *this = (MiddleB *)((char *)this - 0);
 return *(int *)((char *)this + 8) + 200;
}

// Function: MiddleB::func @ 0x101eb4
int MiddleB::func(MiddleB *this)
{
 return *(int *)((char *)this + 8) + 200;
}

// Function: DiamondDerived::func @ 0x101ed8
int DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)((char *)this + 8) + 0xfa;
}

// Function: RTTIDerivedA::getType @ 0x101f2c
unsigned long long RTTIDerivedA::getType(void)
{
 return 1;
}

// Function: RTTIDerivedB::getType @ 0x101f34
unsigned long long RTTIDerivedB::getType(void)
{
 return 2;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x101f3c
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x101f40
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x101f44
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x101f48
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x101f4c
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x101f50
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x101f54
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 return;
}

// Function: Derived::~Derived @ 0x101f58
void __thiscall Derived::_Derived(Derived *this)
{
 return;
}

// Function: Base::~Base @ 0x101f5c
void __thiscall Base::_Base(Base *this)
{
 operator_delete(this);
 return;
}

// Function: Derived::~Derived @ 0x101f74
void __thiscall Derived::_Derived(Derived *this)
{
 operator_delete(this,0x10);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x101f8c
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 operator_delete(this,0x20);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x101fa4
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 operator_delete(this + -0x10,0x20);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x101fc0
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
 operator_delete(this,8);
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x101fd8
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
 operator_delete(this,8);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x101ff0
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 operator_delete(this,0x30);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102008
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 operator_delete(this + *(long *)(*(long *)this + -0x20),0x30);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x10202c
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 operator_delete(this + -0x10,0x30);
 return;
}

// Function: template_max<int> @ 0x102048
int template_max_int_(int param_1,int param_2)
{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x102054
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x102060
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x102074
void Container_int_Constructor(Container<int> *this)
{
 *(unsigned int *)((char *)this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x10207c
void Container_int_push(Container<int> *this, int param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)this + 0x28);
 if (iVar1 < 10) {
 *(int *)((char *)this + 0x28) = iVar1 + 1;
 *(int *)((char *)this + (long)iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x102098
unsigned int Container_int_get(Container<int> *this, int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (uVar1 = 0, param_1 < *(int *)((char *)this + 0x28))) {
 uVar1 = *(unsigned int *)((char *)this + (long)param_1 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x1020c0
unsigned int Container_int_getSize(Container<int> *this)
{
 return *(unsigned int *)((char *)this + 0x28);
}

// Function: Container<double>::Container @ 0x1020c8
void Container_double_Constructor(Container<double> *this)
{
 *(unsigned int *)((char *)this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x1020d0
void Container_double_push(Container<double> *this, double param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)this + 0x50);
 if (iVar1 < 10) {
 *(int *)((char *)this + 0x50) = iVar1 + 1;
 *(double *)((char *)this + (long)iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container<double>::get @ 0x1020ec
unsigned long long Container_double_get(Container<double> *this, int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)((char *)this + 0x50))) {
 uVar1 = *(unsigned long long *)((char *)this + (long)param_1 * 8);
 }
 return uVar1;
}

// Function: Container<double>::getSize @ 0x10210c
unsigned int Container_double_getSize(Container<double> *this)
{
 return *(unsigned int *)((char *)this + 0x50);
}

// Function: _fini @ 0x102114
void _fini(void)
{
 return;
}

