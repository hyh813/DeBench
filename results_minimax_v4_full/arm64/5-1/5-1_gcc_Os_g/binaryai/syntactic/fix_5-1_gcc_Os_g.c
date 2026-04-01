// Force C++ mode - MUST be at the very beginning, before any code
// NOTE: This file MUST be compiled as C++, not C!
// Compile with: g++ -o output source.cpp -std=c++11

// In C++ mode, we don't need (and don't want) any of these defines
// Just use standard C++ keywords - no compat layer needed
// (keeping the file as pure C++)

#include <stddef.h>
#include <stdint.h>

// Decompiled by BinaryAI
// SHA256: 7e572efce9a9d351dd239448e317e9135c09e459c23cd8ad6c44e7afba2f2b9b

// Forward declarations for template functions
template<typename T> T template_max(T a, T b) { return a > b ? a : b; }
template<typename T> void template_swap(T* a, T* b) { T tmp = *a; *a = *b; *b = tmp; }

// Make sure we're using C++ types
#ifdef __cplusplus
#include <stddef.h>
#include <cstdint>
#else
// Use C types - already defined above
#endif
int template_max_int_(int param_1,int param_2);
double template_max_double_(double param_1,double param_2);
void template_swap_int_(int *param_1,int *param_2);

// Forward declarations for template classes
template<typename T> struct Container;
// Forward declare the concrete types
struct Container_int_;
struct Container_double_;

// Forward declarations for smart pointers
struct std_default_delete_int {
    void operator()(int* p) const;
};
struct std_default_delete_int_array {
    void operator()(int* p) const;
};
struct unique_ptr_int_std__default_delete_int__;
struct unique_ptr_int___std__default_delete_int____;

// Forward declarations for RTTI types
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;

// Forward declarations for inheritance classes
struct VirtualBase;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct MultiDerived;

// Type info for exceptions (will be defined later)
extern char int_typeinfo;
extern char RTTIBase_typeinfo;
extern char RTTIDerivedA_typeinfo;
extern char RTTIDerivedB_typeinfo;

// Global variables needed by the code
unsigned long ___stack_chk_guard;
unsigned long __stack_chk_guard;
char completed_0 = 0;
void *__dso_handle = 0;

// Forward declarations for classes - define std namespace first
namespace std {
    class ios_base {
    public:
        class Init {
        public:
            Init() {}
        };
        Init __ioinit;
    };
}

// Forward declare Base and Derived classes before use
class Base;
class Derived;
class LifecycleClass;

// Forward declare all inheritance classes before use
class VirtualBase;
class MiddleA;
class MiddleB;
class DiamondDerived;
class MultiDerived;

// Forward declare RTTI types
class RTTIBase;
class RTTIDerivedA;
class RTTIDerivedB;

// Forward declare template class specializations
// (no duplicates needed)

// Forward declare smart pointer types

// Define typeinfo for int (needed by exception handling)
namespace int {
    extern char typeinfo;
}

namespace RTTIBase {
    extern char typeinfo;
}

namespace RTTIDerivedA {
    extern char typeinfo;
}

namespace RTTIDerivedB {
    extern char typeinfo;
}

// Class definitions - must be complete before functions use them
class Base {
public:
    virtual int virtual_func(int param_1);
    virtual ~Base();
    virtual char *getName();
    int value;
};

class Derived : public Base {
public:
    virtual int virtual_func(int param_1) override;
    virtual ~Derived();
    virtual char *getName() override;
    int multiplier;
};

class LifecycleClass {
public:
    static int instance_count;
};

// Define inheritance classes before functions use them
class VirtualBase {
public:
    virtual unsigned long long func();
    virtual ~VirtualBase();
};

class MiddleA {
public:
    virtual int func();
    virtual ~MiddleA();
};

class MiddleB {
public:
    virtual int func();
    virtual ~MiddleB();
};

class DiamondDerived : public VirtualBase, public MiddleA, public MiddleB {
public:
    virtual int func();
    virtual ~DiamondDerived();
};

class MultiDerived {
public:
    virtual unsigned long long funcA();
    virtual unsigned long long funcB();
    virtual ~MultiDerived();
};

// RTTI class definitions
class RTTIBase {
public:
    virtual ~RTTIBase();
};

class RTTIDerivedA : public RTTIBase {
public:
    virtual ~RTTIDerivedA();
    unsigned long long getType();
};

class RTTIDerivedB : public RTTIBase {
public:
    virtual ~RTTIDerivedB();
    unsigned long long getType();
};

// Template class definitions
template<typename T>
struct Container {
    void push(T value);
    T get(int index);
    unsigned int getSize();
    T data[10];
    unsigned int size;
};

// Specializations
template<>
struct Container<int> {
    void push(int value);
    int get(int index);
    unsigned int getSize();
    int data[10];
    unsigned int size;
};

template<>
struct Container<double> {
    void push(double value);
    double get(int index);
    unsigned int getSize();
    double data[10];
    unsigned int size;
};

// Virtual function table pointers (external)
extern void* PTR_virtual_func_00113868;
extern void* PTR_virtual_func_00113898;

// Forward declarations for classes - must come BEFORE functions that use them as parameters
class Base;
class Derived;
class LifecycleClass;
class VirtualBase;
class MiddleA;
class MiddleB;
class DiamondDerived;
class MultiDerived;
class RTTIBase;
class RTTIDerivedA;
class RTTIDerivedB;

// Forward declarations for functions
int call_weak_fn(int param_1);
void test_cpp_oo_features(void);

// Function: _init @ 0x101638
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn((int)ctx);
 return iVar1;
}

// Function: FUN_00101650 @ 0x101650
void FUN_00101650(void)
{
 (*(void *)(char *)0x0)();
 return;
}

// Function: <EXTERNAL>::operator.new[] @ 0x101670
void * operator_new__(unsigned long param_1)
{
 void *pvVar1;
 pvVar1 = operator_new__(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::puts @ 0x101680
int puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::strlen @ 0x101690
size_t strlen(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x1016a0
void __stack_chk_fail(void)
{
 __stack_chk_fail();
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x1016b0
void __cxa_begin_catch(void)
{
 __cxa_begin_catch();
 return;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x1016c0
void __cxa_allocate_exception(void)
{
 __cxa_allocate_exception();
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x1016d0
void __cxa_finalize(void)
{
 __cxa_finalize();
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x1016e0
void __libc_start_main(void)
{
 __libc_start_main();
 return;
}

// Function: <EXTERNAL>::operator.new @ 0x1016f0
void * operator_new(unsigned long param_1)
{
 void *pvVar1;
 pvVar1 = operator_new(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::operator.delete @ 0x101700
void operator_delete(void *param_1,unsigned long param_2)
{
 operator_delete(param_1,param_2);
 return;
}

// Function: <EXTERNAL>::strncpy @ 0x101710
char * strncpy(char *__dest,char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = strncpy(__dest,__src,__n);
 return pcVar1;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x101720
void __dynamic_cast(void)
{
 __dynamic_cast();
 return;
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x101730
void __cxa_atexit(void)
{
 __cxa_atexit();
 return;
}

// Function: <EXTERNAL>::operator.delete[] @ 0x101740
void operator_delete__(void *param_1)
{
 operator_delete__(param_1);
 return;
}

// Function: <EXTERNAL>::strcmp @ 0x101750
int strcmp(char *__s1,char *__s2)
{
 int iVar1;
 iVar1 = strcmp(__s1,__s2);
 return iVar1;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x101760
void __cxa_rethrow(void)
{
 __cxa_rethrow();
 return;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x101770
void __thiscall std::ios_base::Init::Init(Init *this)
{
 Init(this);
 return;
}

// Function: <EXTERNAL>::abort @ 0x101780
void abort(void)
{
 abort();
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x101790
void __cxa_end_catch(void)
{
 __cxa_end_catch();
 return;
}

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x1017a0
void __gxx_personality_v0(void)
{
 __gxx_personality_v0();
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x1017b0
void __cxa_throw(void)
{
 __cxa_throw();
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x1017c0
void _Unwind_Resume(void)
{
 _Unwind_Resume();
}

// Function: <EXTERNAL>::__printf_chk @ 0x1017d0
void __printf_chk(void)
{
 __printf_chk();
 return;
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x1017e0
void __gmon_start__(void)
{
 __gmon_start__();
 return;
}

// Function: test_cpp_exception @ 0x101800
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&int::typeinfo,0);
}

// Function: main @ 0x1018d0
unsigned long long main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x1018e8
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 std::ios_base::Init::Init((Init *)&std::__ioinit);
 __cxa_atexit(std::ios_base::Init::_Init,&std::__ioinit,&__dso_handle);
 return;
}

void _start(unsigned long long param_1)
{
 unsigned long long param_9;
 __libc_start_main(main,param_9,0,0,0,param_1);
 abort();
}

// Function: call_weak_fn @ 0x101974
void call_weak_fn(void)

// Function: deregister_tm_clones @ 0x101990
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1019c0
void register_tm_clones(void)
{
 return;
}

// Function: FUN_001019fc @ 0x1019fc
void FUN_001019fc(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x101a00
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: test_cpp_member_func @ 0x101a54
int test_cpp_member_func(void)
{
 char *__s;
 size_t sVar1;
 char acStack_2c [31];
 char local_d;
 long local_8;
 local_8 = ___stack_chk_guard;
 __s = strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar1 = strlen(__s);
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail(sVar1,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return (int)sVar1 + 0x125c;
}

// Function: test_cpp_constructor @ 0x101ac0
int test_cpp_constructor(void)
{
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x101ad8
void call_virtual_func(Base *param_1,int param_2)
{
 (***(void ***)param_1)(param_1,param_2);
 return;
}

// Function: test_cpp_virtual_func @ 0x101ae8
void test_cpp_virtual_func(void)
{
 int iVar1;
 int iVar2;
 char **local_20;
 char **local_18;
 unsigned int local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_20 = &PTR_virtual_func_00113868;
 local_18 = &PTR_virtual_func_00113898;
 local_10 = 3;
 iVar1 = call_virtual_func((Base *)&local_20,5);
 iVar2 = call_virtual_func((Base *)&local_18,5);
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail(iVar1 + 0x15 + iVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return;
}

// Function: test_cpp_multiple_inheritance @ 0x101b78
unsigned long long test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_operator_overload @ 0x101b80
unsigned long long test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x101b88
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
 __stack_chk_fail((int)dVar2 + iVar1 + local_10 + local_c,&__stack_chk_guard,0,
 local_8 - ___stack_chk_guard);
 }
 return;
}

// Function: test_cpp_template_class @ 0x101c30
int test_cpp_template_class(void)
{
 int iVar1;
 int local_38 [10];
 int local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_10 = 1;
 local_38[0] = 10;
 Container<int>::push((Container_int_ *)local_38,0x14);
 Container<int>::push((Container_int_ *)local_38,0x1e);
 iVar1 = local_38[0];
 if (local_10 < 1) {
 iVar1 = 0;
 }
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail(local_10 + iVar1,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return local_10 + iVar1 + 3;
}

// Function: test_cpp_lambda @ 0x101cc0
unsigned long long test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_rtti @ 0x101cc8
int test_cpp_rtti(void)
{
 char cVar1;
 int iVar2;
 long *plVar3;
 long *plVar4;
 long lVar5;
 size_t sVar6;
 int iVar7;
 char *__s1;
 long lVar8;
 plVar3 = (long *)operator_new(8);
 *plVar3 = (long)&PTR__RTTIDerivedA_00113b58;
 plVar4 = (long *)operator_new(8);
 lVar8 = *plVar3;
 *plVar4 = (long)&PTR__RTTIDerivedB_00113b80;
 __s1 = *(char **)(*(long *)(lVar8 + -8) + 8);
 cVar1 = *__s1;
 if (__s1 == "12RTTIDerivedA") {
 iVar7 = 10;
 }
 else if (cVar1 == '*') {
 iVar7 = 0;
 }
 else {
 iVar2 = strcmp(__s1,"12RTTIDerivedA");
 iVar7 = 0;
 if (iVar2 == 0) {
 iVar7 = 10;
 }
 }
 iVar2 = iVar7 + 0x14;
 lVar5 = __dynamic_cast(plVar3,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 if (lVar5 != 0) {
 iVar2 = iVar7 + 0x78;
 }
 lVar5 = __dynamic_cast(plVar4,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 if (lVar5 != 0) {
 iVar2 = iVar2 + 200;
 }
 if (cVar1 == '*') {
 __s1 = __s1 + 1;
 }
 sVar6 = strlen(__s1);
 (**(void **)(lVar8 + 8))(plVar3);
 (**(void **)(*plVar4 + 8))(plVar4);
 return iVar2 + (int)sVar6;
}

// Function: test_cpp_smart_ptr @ 0x101e24
unsigned long long test_cpp_smart_ptr(void)
{
 unsigned long long local_20;
 unsigned int *puStack_18;
 unsigned long long *local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 puStack_18 = (unsigned int *)operator_new(4);
 local_20 = 0;
 *puStack_18 = 200;
 local_10 = (unsigned long long *)operator_new__(0x14);
 *local_10 = 0x200000001;
 local_10[1] = 0x400000003;
 *(unsigned int *)(local_10 + 2) = 5;
 std::unique_ptr<int[],std::default_delete<int[]>>::_unique_ptr
 ((unique_ptr_int___std__default_delete_int____ *)&local_10);
 std::unique_ptr<int,std::default_delete<int>>::_unique_ptr
 ((unique_ptr_int_std__default_delete_int__ *)&puStack_18);
 std::unique_ptr<int,std::default_delete<int>>::_unique_ptr
 ((unique_ptr_int_std__default_delete_int__ *)&local_20);
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return 0x2bf;
}

// Function: test_cpp_diamond_inheritance @ 0x101ef8
int test_cpp_diamond_inheritance(void)
{
 int iVar1;
 int iVar2;
 char **local_38 [2];
 char **local_28;
 char **local_18;
 unsigned int local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_38[0] = &PTR_func_00113ac8;
 local_18 = &PTR_func_00113b30;
 local_28 = &PTR_func_00113af8;
 local_10 = 0x32;
 iVar1 = DiamondDerived::func((DiamondDerived *)&local_18);
 local_10 = 100;
 iVar2 = DiamondDerived::func((DiamondDerived *)&local_18);
 DiamondDerived::_DiamondDerived((DiamondDerived *)local_38);
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return iVar1 + iVar2;
}

// Function: test_cpp_oo_features @ 0x101fa0
void test_cpp_oo_features(void)
{
 unsigned int uVar1;
 puts(&DAT_001025b2);
 uVar1 = test_cpp_member_func();
 __printf_chk(1,&DAT_001025d6,uVar1);
 uVar1 = test_cpp_constructor();
 __printf_chk(1,&DAT_001025f4,uVar1);
 uVar1 = test_cpp_virtual_func();
 __printf_chk(1,&DAT_00102610,uVar1);
 uVar1 = test_cpp_multiple_inheritance();
 __printf_chk(1,&DAT_0010262c,uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,&DAT_00102648,uVar1);
 uVar1 = test_cpp_operator_overload();
 __printf_chk(1,&DAT_00102665,uVar1);
 uVar1 = test_cpp_template_func();
 __printf_chk(1,&DAT_00102681,uVar1);
 uVar1 = test_cpp_template_class();
 __printf_chk(1,&DAT_0010269d,uVar1);
 uVar1 = test_cpp_lambda();
 __printf_chk(1,&DAT_001026b9,uVar1);
 uVar1 = test_cpp_exception();
 __printf_chk(1,&DAT_001026d5,uVar1);
 uVar1 = test_cpp_smart_ptr();
 __printf_chk(1,&DAT_001026f2,uVar1);
 uVar1 = test_cpp_rtti();
 __printf_chk(1,&DAT_0010270f,uVar1);
 return;
}

// Function: Base::virtual_func @ 0x1020d8
int __thiscall Base::virtual_func(Base *this,int param_1)
{
 return param_1 + 1;
}

// Function: Base::getName @ 0x1020e0
char * Base::getName(void)
{
 return &DAT_001025a0;
}

// Function: Base::~Base @ 0x1020ec
void __thiscall Base::_Base(Base *this)
{
 return;
}

// Function: Derived::virtual_func @ 0x1020f0
int __thiscall Derived::virtual_func(Derived *this,int param_1)
{
 return param_1 * *(int *)(this + 8);
}

// Function: Derived::getName @ 0x1020fc
char * Derived::getName(void)
{
 return "Derived";
}

// Function: MultiDerived::funcA @ 0x102108
unsigned long long MultiDerived::funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived::funcB @ 0x102110
unsigned long long MultiDerived::funcB(void)
{
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x102118
unsigned long long __thiscall MultiDerived::funcB(MultiDerived *this)
{
 return 0x28;
}

// Function: VirtualBase::func @ 0x102120
unsigned long long VirtualBase::func(void)
{
 return 100;
}

// Function: VirtualBase::~VirtualBase @ 0x102128
void __thiscall VirtualBase::_VirtualBase(VirtualBase *this)
{
 return;
}

// Function: MiddleA::func @ 0x10212c
int __thiscall MiddleA::func(MiddleA *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}

// Function: MiddleA::func @ 0x102144
void __thiscall MiddleA::func(MiddleA *this)
{
 func(this + *(long *)(*(long *)this + -0x18));
 return;
}

// Function: MiddleB::func @ 0x102154
int __thiscall MiddleB::func(MiddleB *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}

// Function: MiddleB::func @ 0x10216c
void __thiscall MiddleB::func(MiddleB *this)
{
 func(this + *(long *)(*(long *)this + -0x18));
 return;
}

// Function: DiamondDerived::func @ 0x10217c
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived::func @ 0x102194
void __thiscall DiamondDerived::func(DiamondDerived *this)
{
 func(this + *(long *)(*(long *)this + -0x18));
 return;
}

// Function: DiamondDerived::func @ 0x1021a4
void __thiscall DiamondDerived::func(DiamondDerived *this)
{
 func(this + -0x10);
 return;
}

// Function: MiddleA::~MiddleA @ 0x1021ac
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
 *(char ***)this = &PTR_func_001138e0;
 *(char ***)(this + 0x10) = &PTR_func_00113918;
 return;
}

// Function: MiddleA::~MiddleA @ 0x1021c8
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
 long lVar1;
 lVar1 = *(long *)(*(long *)this + -0x20);
 *(char ***)(this + lVar1) = &PTR_func_001138e0;
 *(char ***)(this + lVar1 + 0x10) = &PTR_func_00113918;
 return;
}

// Function: MiddleB::~MiddleB @ 0x1021f0
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
 *(char ***)this = &PTR_func_00113958;
 *(char ***)(this + 0x10) = &PTR_func_00113990;
 return;
}

// Function: MiddleB::~MiddleB @ 0x10220c
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
 long lVar1;
 lVar1 = *(long *)(*(long *)this + -0x20);
 *(char ***)(this + lVar1) = &PTR_func_00113958;
 *(char ***)(this + lVar1 + 0x10) = &PTR_func_00113990;
 return;
}

// Function: RTTIDerivedA::getType @ 0x102234
unsigned long long RTTIDerivedA::getType(void)
{
 return 1;
}

// Function: RTTIDerivedB::getType @ 0x10223c
unsigned long long RTTIDerivedB::getType(void)
{
 return 2;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x102244
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x102248
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x10224c
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x102250
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 return;
}

// Function: Derived::~Derived @ 0x102254
void __thiscall Derived::_Derived(Derived *this)
{
 return;
}

// Function: Base::~Base @ 0x102258
void __thiscall Base::_Base(Base *this)
{
 operator_delete(this,8);
 return;
}

// Function: Derived::~Derived @ 0x102260
void __thiscall Derived::_Derived(Derived *this)
{
 operator_delete(this,0x10);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x102268
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 operator_delete(this,0x20);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x102270
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 _MultiDerived(this + -0x10);
 return;
}

// Function: VirtualBase::~VirtualBase @ 0x102278
void __thiscall VirtualBase::_VirtualBase(VirtualBase *this)
{
 operator_delete(this,0x10);
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x102280
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
 operator_delete(this,8);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x102288
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
 operator_delete(this,8);
 return;
}

// Function: MiddleA::~MiddleA @ 0x102290
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
 *(char ***)this = &PTR_func_001138e0;
 *(char ***)(this + 0x10) = &PTR_func_00113918;
 operator_delete(this,0x20);
 return;
}

// Function: MiddleA::~MiddleA @ 0x1022b0
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
 _MiddleA(this + *(long *)(*(long *)this + -0x20));
 return;
}

// Function: MiddleB::~MiddleB @ 0x1022c0
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
 *(char ***)this = &PTR_func_00113958;
 *(char ***)(this + 0x10) = &PTR_func_00113990;
 operator_delete(this,0x20);
 return;
}

// Function: MiddleB::~MiddleB @ 0x1022e0
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
 _MiddleB(this + *(long *)(*(long *)this + -0x20));
 return;
}

// Function: MiddleA::~MiddleA @ 0x1022f0
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
 int in_w1;
 char **ppuVar1;
 unsigned long long *in_x2;
 char *puVar2;
 char **ppuVar3;
 if (in_w1 == 0) {
 ppuVar3 = (char **)*in_x2;
 }
 else {
 ppuVar3 = &PTR_func_001138e0;
 }
 *(char ***)this = ppuVar3;
 if (in_w1 == 0) {
 ppuVar1 = (char **)in_x2[1];
 puVar2 = ppuVar3[-3];
 }
 else {
 puVar2 = (char *)0x10;
 ppuVar1 = &PTR_func_00113918;
 }
 *(char ***)(this + (long)puVar2) = ppuVar1;
 return;
}

// Function: MiddleA::~MiddleA @ 0x10232c
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
 _MiddleA(this);
 return;
}

// Function: MiddleB::~MiddleB @ 0x102338
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
 int in_w1;
 char **ppuVar1;
 unsigned long long *in_x2;
 char *puVar2;
 char **ppuVar3;
 if (in_w1 == 0) {
 ppuVar3 = (char **)*in_x2;
 }
 else {
 ppuVar3 = &PTR_func_00113958;
 }
 *(char ***)this = ppuVar3;
 if (in_w1 == 0) {
 ppuVar1 = (char **)in_x2[1];
 puVar2 = ppuVar3[-3];
 }
 else {
 puVar2 = (char *)0x10;
 ppuVar1 = &PTR_func_00113990;
 }
 *(char ***)(this + (long)puVar2) = ppuVar1;
 return;
}

// Function: MiddleB::~MiddleB @ 0x102374
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
 _MiddleB(this);
 return;
}

// Function: template_max<int> @ 0x102380
int template_max_int_(int param_1,int param_2)
{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x10238c
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x102398
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x1023ac
void __thiscall Container<int>::Container(Container_int_ *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x1023b4
void __thiscall Container<int>::push(Container_int_ *this,int param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x28);
 if (iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + (long)iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x1023d0
unsigned int __thiscall Container<int>::get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 if ((param_1 < 0) || (*(int *)(this + 0x28) <= param_1)) {
 uVar1 = 0;
 }
 else {
 uVar1 = *(unsigned int *)(this + (long)param_1 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x1023f0
unsigned int __thiscall Container<int>::getSize(Container_int_ *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container<double>::Container @ 0x1023f8
void __thiscall Container<double>::Container(Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x102400
void __thiscall Container<double>::push(Container_double_ *this,double param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x50);
 if (iVar1 < 10) {
 *(int *)(this + 0x50) = iVar1 + 1;
 *(double *)(this + (long)iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container<double>::get @ 0x10241c
unsigned long long __thiscall Container<double>::get(Container_double_ *this,int param_1)
{
 unsigned long long uVar1;
 if ((param_1 < 0) || (*(int *)(this + 0x50) <= param_1)) {
 uVar1 = 0;
 }
 else {
 uVar1 = *(unsigned long long *)(this + (long)param_1 * 8);
 }
 return uVar1;
}

// Function: Container<double>::getSize @ 0x10243c
unsigned int __thiscall Container<double>::getSize(Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: std::unique_ptr<int,std::default_delete<int>>::~unique_ptr @ 0x102444
void __thiscall
std::unique_ptr<int,std::default_delete<int>>::_unique_ptr
 (unique_ptr_int_std__default_delete_int__ *this)
{
 if (*(void **)this != (void *)0x0) {
 operator_delete(*(void **)this,4);
 return;
 }
 return;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::~unique_ptr @ 0x102458
void __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::_unique_ptr
 (unique_ptr_int___std__default_delete_int____ *this)
{
 if (*(void **)this != (void *)0x0) {
 operator_delete__(*(void **)this);
 return;
 }
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102468
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 char **ppuVar1;
 char *puVar2;
 int in_w1;
 unsigned long long *in_x2;
 if (in_w1 == 0) {
 ppuVar1 = (char **)*in_x2;
 }
 else {
 ppuVar1 = &PTR_func_00113ac8;
 }
 *(char ***)this = ppuVar1;
 if (in_w1 == 0) {
 puVar2 = ppuVar1[-3];
 ppuVar1 = (char **)in_x2[5];
 }
 else {
 puVar2 = (char *)0x20;
 ppuVar1 = &PTR_func_00113b30;
 }
 *(char ***)(this + (long)puVar2) = ppuVar1;
 if (in_w1 == 0) {
 ppuVar1 = (char **)in_x2[6];
 }
 else {
 ppuVar1 = &PTR_func_00113af8;
 }
 *(char ***)(this + 0x10) = ppuVar1;
 MiddleB::_MiddleB((MiddleB *)(this + 0x10));
 MiddleA::_MiddleA((MiddleA *)this);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102518
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102524
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this + -0x10);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x10252c
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this + *(long *)(*(long *)this + -0x20));
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x10253c
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this);
 operator_delete(this,0x30);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102564
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this + -0x10);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x10256c
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this + *(long *)(*(long *)this + -0x20));
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x10257c
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this);
 return;
}

// Function: _fini @ 0x102588
void _fini(void)
{
 return;
}

