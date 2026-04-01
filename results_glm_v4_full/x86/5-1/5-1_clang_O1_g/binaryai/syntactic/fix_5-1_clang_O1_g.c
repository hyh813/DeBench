/* Compile this file as C++ */
#ifdef __cplusplus
#else
#error "This file must be compiled as C++. Use -x c++ flag or rename to .cpp extension"
#endif

#include <stdio.h>
#include <string.h>
#include <stddef.h>

/* Ensure printf and other stdio functions are available */
extern "C" {
    int printf(const char *format, ...);
    int puts(const char *s);
}

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
typedef unsigned int uint;
typedef unsigned char bool;
#define true 1
#define false 0

/* Forward class declarations */
class Base;
class Derived;
class MultiDerived;
class DiamondDerived;
class BaseA;
class BaseB;
class MiddleA;
class MiddleB;
class VirtualBase;
class LifecycleClass;
class RTTIBase;
class RTTIDerivedA;
class RTTIDerivedB;

/* Forward function declarations for static members */
char *Base_getName();
char *Derived_getName();
int MiddleA_func();
int MiddleB_func();

template<typename T> class Container;
typedef Container<int> Container_int_;
typedef Container<double> Container_double_;

/* Container template class definition */
template<typename T>
class Container {
public:
    Container();
    void push(T value);
    T get(int index);
    unsigned int getSize();
private:
    T data[10];
    unsigned int size;
};

/* std::type_info is defined in <typeinfo> header from C++ standard library */

/* Minimal type_info implementation for RTTI support */
namespace std {
    class type_info {
    public:
        const char *name;
        type_info(const char *n) : name(n) {}
        bool operator==(const type_info& rhs) const { return name == rhs.name || strcmp(name, rhs.name) == 0; }
        bool operator!=(const type_info& rhs) const { return !(*this == rhs); }
        bool before(const type_info& rhs) const { return strcmp(name, rhs.name) < 0; }
        virtual ~type_info() {}
    };
}

/* RTTI type_info objects for exception handling and dynamic_cast */
std::type_info typeinfo_for_int("int");

/* Data symbol placeholders - definitions */
void *PTR_virtual_func_00015ce4;
void *PTR_virtual_func_00015d04;
void *PTR_funcB_00015d40;
void *PTR_func_00015de4;
void *PTR_funcA_00015d28;
void *PTR_func_00015db0;
void *PTR_func_00015dc8;
void *PTR__RTTIBase_00015ecc;
void *PTR__RTTIBase_00015ee0;
char DAT_000131e5[1] = {0};
char DAT_00013081[1] = {0};
char DAT_0001309f[1] = {0};
char DAT_000130bb[1] = {0};
char DAT_000130d7[1] = {0};
char DAT_000130f3[1] = {0};
char DAT_00013110[1] = {0};
char DAT_0001312c[1] = {0};
char DAT_00013148[1] = {0};
char DAT_00013164[1] = {0};
char DAT_00013180[1] = {0};
char DAT_0001319d[1] = {0};
char DAT_000131ba[1] = {0};
char UNK_000131d8[1] = {0};
void *__dso_handle;

/* Class definitions */
class Base {
public:
    virtual int virtual_func(int param_1);
    static char *getName();
    virtual ~Base();
};

static char *Base_getName() {
    return "Base";
}

class Derived : public Base {
protected:
    int value;
public:
    virtual int virtual_func(int param_1);
    static char *getName();
    virtual ~Derived();
};

static char *Derived_getName() {
    return "Derived";
}

class MultiDerived {
public:
    static unsigned int funcA();
    static unsigned int funcB();
    virtual ~MultiDerived();
};

class DiamondDerived : public MiddleA, public MiddleB {
public:
    static int func();
    virtual ~DiamondDerived();
};

class BaseA {
public:
    static unsigned int funcA();
    virtual ~BaseA();
};

class BaseB {
public:
    static unsigned int funcB();
    virtual ~BaseB();
};

class MiddleA : public BaseA {
public:
    static int func();
    virtual ~MiddleA();
};

inline int MiddleA_func() {
    return MiddleA::func();
}

class MiddleB : public BaseB {
public:
    static int func();
    virtual ~MiddleB();
};

inline int MiddleB_func() {
    return MiddleB::func();
}

class VirtualBase {
public:
    static unsigned int func();
    virtual ~VirtualBase();
};

class LifecycleClass {
public:
    static int instance_count;
};

class RTTIBase {
public:
    static std::type_info typeinfo;
    virtual ~RTTIBase();
};

class RTTIDerivedA : public RTTIBase {
public:
    static std::type_info typeinfo;
    static unsigned int getType();
    virtual ~RTTIDerivedA();
};

class RTTIDerivedB : public RTTIBase {
public:
    static std::type_info typeinfo;
    static unsigned int getType();
    virtual ~RTTIDerivedB();
};

/*/* Initialize static members */
int LifecycleClass::instance_count = 0;
std::type_info RTTIBase::typeinfo("9RTTIBase");
std::type_info RTTIDerivedA::typeinfo("12RTTIDerivedA");
std::type_info RTTIDerivedB::typeinfo("12RTTIDerivedB");

/* External function declarations */
extern void __gmon_start__(void);
extern void frame_dummy(void);
extern int __do_global_ctors_aux(void);
extern int __cxa_atexit(void (*func)(void *), void *arg, void *dso);
extern void *__cxa_begin_catch(void *);
extern void *__dynamic_cast(void *obj, void *src, void *dst, int);
extern void __x86_get_pc_thunk_di(void);
extern int main(void);
extern void *operator_new(unsigned long);
extern void *operator_new__(unsigned long);
extern void operator_delete(void *);
extern void operator_delete__(void *);
extern void __libc_start_main(int (*main)(void), int argc, void *argv, void *init, void *fini, void *rtld_fini, void *stack_end);

/* Dummy std namespace declarations */
namespace std {
    struct __ioinit_type {};
    static __ioinit_type __ioinit;
}

namespace std {
    namespace ios_base {
        struct Init {
            Init() {}
            ~Init() {}
            static void _Init_() {}
            static void Init_() {}
        };
    }
    static void ios_base_Init_Init_wrapper(void *) {}

// Decompiled by BinaryAI
// SHA256: 0a96bd41cb195b9185632e927b93f27c13250273ffd623ed96f7f06e151b4daf

// Function: _init @ 0x11000
int _init(void *ctx)
{
 int iVar1;
 __gmon_start__();
 frame_dummy();
 iVar1 = __do_global_ctors_aux();
 return iVar1;
}

// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 ((void (*)(void))0x0)();
 return;
}

// Function: <EXTERNAL>::operator.new @ 0x11040
void * operator_new(unsigned long param_1)
{
 return (void *)0;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x11050
void *__cxa_begin_catch(void *param_1)
{
 return (void *)0;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x11060
void *__cxa_allocate_exception(size_t)
{
 return (void *)0;
}



// Function: <EXTERNAL>::__cxa_atexit @ 0x11080
int __cxa_atexit(void (*func)(void *), void *arg, void *dso)
{
 return 0;
}



// Function: <EXTERNAL>::__libc_start_main @ 0x110a0
void __libc_start_main(int (*main)(void), int argc, void *argv, void *init, void *fini, void *rtld_fini, void *stack_end)
{
 return;
}

// Function: <EXTERNAL>::operator.new[] @ 0x110b0
void * operator_new__(unsigned long param_1)
{
 return (void *)0;
}

// Function: <EXTERNAL>::operator.delete @ 0x110c0
void operator_delete(void *param_1)
{
 return;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x110d0
void *__dynamic_cast(void *obj, void *src, void *dst, int param_4)
{
 return (void *)0;
}

// Function: <EXTERNAL>::operator.delete[] @ 0x110e0
void operator_delete__(void *param_1)
{
 return;
}



// Function: <EXTERNAL>::__cxa_rethrow @ 0x11100
void __cxa_rethrow(void)
{
 return;
}

// Function: <EXTERNAL>::puts @ 0x11110
// puts is provided by stdio.h

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x11120
void std_ios_base_Init_Init(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x11130
void __cxa_end_catch(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x11140
void __cxa_throw(void *, void *, void *)
{
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x11150
void _Unwind_Resume(void *)
{
}

// Function: FUN_00011160 @ 0x11160
void FUN_00011160(void)
{
 int unaff_EBX;
 (**(void **)(unaff_EBX + -0x18))();
 return;
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x11170
void _GLOBAL__sub_I_5_1_cpp(void)
{
 std::ios_base::Init obj;
 __cxa_atexit((void (*)(void *))std::ios_base_Init_Init_wrapper,&std::__ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x111b0
void _start(unsigned int param_1,unsigned int param_2)
{
 char auStack_8 [8];
 void *stack_ptr = auStack_8;
 __libc_start_main(main,param_2,stack_ptr,0,0,(void *)param_1,stack_ptr);
}

// Function: __i686.get_pc_thunk.bx @ 0x111dc
void __i686_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.bx @ 0x111e0
void __x86_get_pc_thunk_bx(void)
{
 return;
}

// Function: deregister_tm_clones @ 0x111f0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x11230
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x11280
void __do_global_dtors_aux(void)
{
 uint uVar1;
 int unaff_EDI;
 __x86_get_pc_thunk_di();
 if (*(char *)(unaff_EDI + 0x4ddf) == '\0') {
 if (*(int *)(unaff_EDI + 0x4d5b) != 0) {
 FUN_00011160(*(unsigned int *)(unaff_EDI + 0x4dcb));
 }
 uVar1 = *(uint *)(unaff_EDI + 0x4de3);
 while (uVar1 < ((unaff_EDI + 0x4a17) - (unaff_EDI + 0x4a13) >> 2) - 1U) {
 *(uint *)(unaff_EDI + 0x4de3) = uVar1 + 1;
 (**(void **)(unaff_EDI + 0x4a13 + (uVar1 + 1) * 4))();
 uVar1 = *(uint *)(unaff_EDI + 0x4de3);
 }
 deregister_tm_clones();
 *(char *)(unaff_EDI + 0x4ddf) = 1;
 }
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x11319
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x1131d
int __x86_get_pc_thunk_di(void)
{
 int val;
 asm volatile ("mov %%edi, %0" : "=r"(val));
 return val;
}

// Function: test_cpp_member_func @ 0x11330
int test_cpp_member_func(void)
{
 size_t sVar1;
 unsigned int local_28;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned int local_14;
 unsigned int local_10;
 unsigned int uStack_c;
 local_28 = 0x74736554;
 local_24 = 0;
 local_20 = 0;
 local_1c = 0;
 local_18 = 0;
 local_14 = 0;
 local_10 = 0;
 uStack_c = 0;
 sVar1 = strlen((char *)&local_28);
 return sVar1 + 0x125c;
}

// Function: test_cpp_constructor @ 0x113b0
int test_cpp_constructor(void)
{
 int *piVar1;
 int *piVar2;
 int iVar3;
 iVar3 = 0;
 piVar1 = (int *)operator_new__(0x14);
 piVar2 = piVar1;
 do {
 *piVar2 = iVar3;
 iVar3 = iVar3 + 10;
 piVar2 = piVar2 + 1;
 } while (iVar3 != 0x32);
 LifecycleClass::instance_count = LifecycleClass::instance_count + 1;
 iVar3 = LifecycleClass::instance_count + piVar1[2];
 operator_delete__(piVar1);
 LifecycleClass::instance_count = LifecycleClass::instance_count + -1;
 return LifecycleClass::instance_count * 1000 + iVar3;
}

// Function: call_virtual_func @ 0x11420
void call_virtual_func(Base *param_1,int param_2)
{
 ((int (*)(Base *, int))(*(void **)param_1))(param_1,param_2);
 return;
}

// Function: test_cpp_virtual_func @ 0x11450
int test_cpp_virtual_func(void)
{
 int iVar1;
 int iVar2;
 iVar1 = Base::virtual_func((Base *)0,5);
 iVar2 = Base::virtual_func((Base *)0,5);
 return iVar2 + iVar1 + 0x15;
}

// Function: test_cpp_multiple_inheritance @ 0x114b0
int test_cpp_multiple_inheritance(void)
{
 int iVar1;
 int iVar2;
 iVar1 = MultiDerived::funcA();
 iVar2 = MultiDerived::funcB();
 return iVar2 + iVar1 + 1;
}

// Function: test_cpp_diamond_inheritance @ 0x11510
int test_cpp_diamond_inheritance(void)
{
 int iVar1;
 int iVar2;
 iVar1 = DiamondDerived::func((DiamondDerived *)0);
 iVar2 = DiamondDerived::func((DiamondDerived *)0);
 return iVar2 + iVar1;
}

// Function: test_cpp_operator_overload @ 0x11580
unsigned int test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x11590
unsigned int test_cpp_template_func(void)
{
 return 0x27;
}

// Function: test_cpp_template_class @ 0x115a0
unsigned int test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x115b0
unsigned int test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_exception @ 0x115c0
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&typeinfo_for_int,0);
}

// Function: test_cpp_smart_ptr @ 0x116b0
unsigned int test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x116c0
int test_cpp_rtti(void)
{
 char *__s1;
 char *__s1_00;
 int *piVar1;
 int *piVar2;
 int iVar3;
 size_t sVar4;
 uint uVar5;
 uint uVar6;
 bool bVar7;
 piVar1 = (int *)operator_new(4);
 *piVar1 = (int)&PTR__RTTIBase_00015ecc;
 piVar2 = (int *)operator_new(4);
 *piVar2 = (int)&PTR__RTTIBase_00015ee0;
 __s1 = RTTIDerivedA::typeinfo.name;
 if (__s1 == (char *)"12RTTIDerivedA") {
 uVar6 = 10;
 }
 else {
 uVar6 = 0;
 if (*__s1 != '*') {
 iVar3 = strcmp(__s1,"12RTTIDerivedA");
 uVar6 = 10;
 if (iVar3 != 0) {
 uVar6 = 0;
 }
 }
 }
 __s1_00 = RTTIDerivedB::typeinfo.name;
 if (__s1_00 == (char *)"12RTTIDerivedB") {
 bVar7 = true;
 }
 else if (*__s1_00 == '*') {
 bVar7 = false;
 }
 else {
 iVar3 = strcmp(__s1_00,"12RTTIDerivedB");
 bVar7 = iVar3 == 0;
 }
 uVar5 = uVar6 | 0x14;
 if (!bVar7) {
 uVar5 = uVar6;
 }
 iVar3 = (int)__dynamic_cast(piVar1,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 uVar6 = uVar5 + 100;
 if (iVar3 == 0) {
 uVar6 = uVar5;
 }
 iVar3 = (int)__dynamic_cast(piVar2,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 uVar5 = uVar6 + 200;
 if (iVar3 == 0) {
 uVar5 = uVar6;
 }
 sVar4 = strlen(__s1 + (*__s1 == '*'));
 operator_delete(piVar1);
 operator_delete(piVar2);
 return sVar4 + uVar5;
}

// Function: test_cpp_oo_features @ 0x11810
void test_cpp_oo_features(void)
{
 size_t sVar1;
 int *piVar2;
 int iVar3;
 unsigned int uVar4;
 int *piVar5;
 int iVar6;
 void **local_3c;
 void **local_38 [4];
 unsigned int local_28;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int uStack_1c;
 char **local_14 [2];
 puts("Test string");
 local_38[0] = (void **)0x74736554;
 local_38[1] = (void **)0x0;
 local_38[2] = (void **)0x0;
 local_38[3] = (void **)0x0;
 local_28 = 0;
 local_24 = 0;
 local_20 = 0;
 uStack_1c = 0;
 local_3c = (void **)0xa;
 sVar1 = strlen((char *)local_38);
 printf("test_cpp_member_func result: %d\n", sVar1 + 0x125c);
 iVar6 = 0;
 piVar2 = (int *)operator_new__(0x14);
 piVar5 = piVar2;
 do {
 *piVar5 = iVar6;
 iVar6 = iVar6 + 10;
 piVar5 = piVar5 + 1;
 } while (iVar6 != 0x32);
 LifecycleClass::instance_count = LifecycleClass::instance_count + 1;
 iVar6 = LifecycleClass::instance_count + piVar2[2];
 operator_delete__(piVar2);
 LifecycleClass::instance_count = LifecycleClass::instance_count + -1;
 printf("test_cpp_constructor result: %d\n", LifecycleClass::instance_count * 1000 + iVar6);
 local_14[0] = &PTR_virtual_func_00015ce4;
 local_3c = (void **)&PTR_virtual_func_00015d04;
 local_38[0] = (void **)0x3;
 iVar6 = Base::virtual_func((Base *)local_14,5);
 iVar3 = (**local_3c)(&local_3c,5);
 printf("test_cpp_virtual_func result: %d\n", iVar3 + iVar6 + 0x15);
 local_3c = (void **)&PTR_funcA_00015d28;
 local_38[1] = (void **)&PTR_funcB_00015d40;
 local_38[0] = (void **)0x64;
 local_38[2] = (void **)0xc8;
 iVar6 = MultiDerived::funcA();
 printf("test_cpp_multiple_inheritance result: %d\n", iVar6 + 0x1f);
 local_3c = (void **)&PTR_func_00015db0;
 local_38[3] = (void **)&PTR_func_00015de4;
 local_38[1] = (void **)&PTR_func_00015dc8;
 local_28 = 0x32;
 iVar6 = DiamondDerived::func((DiamondDerived *)(local_38 + 3));
 *(unsigned int *)((int)local_38 + (int)local_3c[-3]) = 100;
 iVar3 = (**local_38[3])(local_38 + 3);
 printf("test_cpp_diamond_inheritance result: %d\n", iVar3 + iVar6);
 printf("test_cpp_operator_overload result: %d\n", 0x16);
 printf("test_cpp_template_func result: %d\n", 0x27);
 printf("test_cpp_template_class result: %d\n", 0x10);
 printf("test_cpp_lambda result: %d\n", 0x55);
 test_cpp_exception();
 printf("Exception caught: %d\n", 0x2a);
 printf("test_cpp_smart_ptr result: %d\n", 0x2bf);
 uVar4 = test_cpp_rtti();
 printf("test_cpp_rtti result: %d\n", uVar4);
 return;
}

// Function: main @ 0x11ab0
int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: Base::virtual_func @ 0x11ad0
int  Base::virtual_func(int param_1)
{
 return param_1 + 1;
}

// Function: Derived::virtual_func @ 0x11ae0
int Derived::virtual_func(int param_1)
{
 return this->value * param_1;
}





// Function: template_max<int> @ 0x11b20
int template_max_int_(int param_1,int param_2)
{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: template_max<double> @ 0x11b30
double template_max_double_(double param_1,double param_2)
{
 if (param_2 <= param_1 || param_1 != param_2) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: template_swap<int> @ 0x11b50
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x11b70
Container<int>::Container()
{
 this->size = 0;
}

// Function: Container<int>::push @ 0x11b80
void Container<int>::push(int param_1)
{
 unsigned int iVar1;
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = param_1;
 }
}

// Function: Container<int>::get @ 0x11ba0
int Container<int>::get(int param_1)
{
 if ((-1 < param_1) && (this->size != param_1 && param_1 <= this->size)) {
 return this->data[param_1];
 }
 return 0;
}

// Function: Container<int>::getSize @ 0x11bc0
unsigned int Container<int>::getSize()
{
 return this->size;
}

// Function: Container<double>::Container @ 0x11bd0
Container<double>::Container()
{
 this->size = 0;
}

// Function: Container<double>::push @ 0x11be0
void Container<double>::push(double param_1)
{
 unsigned int iVar1;
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = param_1;
 }
}

// Function: Container<double>::get @ 0x11c00
double Container<double>::get(int param_1)
{
 if ((-1 < param_1) && (this->size != param_1 && param_1 <= this->size)) {
 return this->data[param_1];
 }
 return 0.0;
}

// Function: Container<double>::getSize @ 0x11c20
unsigned int Container<double>::getSize()
{
 return this->size;
}

// Function: Base::getName @ 0x11c30
char * Base::getName(void)
{
 return &UNK_000131d8;
}

// Function: FUN_00011c35 @ 0x11c35
int FUN_00011c35(void)
{
 int unaff_retaddr;
 return unaff_retaddr + 0x15a3;
}

// Function: Base::~Base @ 0x11c50
Base::~Base()
{
}

// Function: Derived::getName @ 0x11c80
char * Derived::getName(void)
{
 return "Derived";
}

// Function: FUN_00011c85 @ 0x11c85
int FUN_00011c85(void)
{
 int unaff_retaddr;
 return unaff_retaddr + 0x1558;
}

// Function: Derived::~Derived @ 0x11ca0
Derived::~Derived()
{
}

// Function: MultiDerived::funcA @ 0x11cd0
unsigned int MultiDerived::funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived::~MultiDerived @ 0x11ce0
void  MultiDerived::~MultiDerived()
{
}

// Function: MultiDerived::funcB @ 0x11d10
unsigned int MultiDerived::funcB(void)
{
 return 0x28;
}



// Function: BaseA::funcA @ 0x11d70
unsigned int BaseA::funcA(void)
{
 return 10;
}

// Function: BaseA::~BaseA @ 0x11d90
BaseA::~BaseA()
{
}

// Function: BaseB::funcB @ 0x11dc0
unsigned int BaseB::funcB(void)
{
 return 0x14;
}

// Function: BaseB::~BaseB @ 0x11de0
BaseB::~BaseB()
{
}

// Function: MiddleA::func @ 0x11e10
int MiddleA::func()
{
 return 0x96;
}

// Function: MiddleA::~MiddleA @ 0x11e40
MiddleA::~MiddleA()
{
}

// Function: MiddleB::func @ 0x11ed0
int MiddleB::func()
{
 return 200;
}

// Function: MiddleB::~MiddleB @ 0x11f00
MiddleB::~MiddleB()
{
}

// Function: DiamondDerived::func @ 0x11f90
int DiamondDerived::func()
{
 return 0xfa;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11fb0
DiamondDerived::~DiamondDerived()
{
}

// Function: VirtualBase::func @ 0x120a0
unsigned int VirtualBase::func()
{
 return 100;
}

// Function: VirtualBase::~VirtualBase @ 0x120c0
VirtualBase::~VirtualBase()
{
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x120f0
RTTIDerivedA::~RTTIDerivedA()
{
}

// Function: RTTIDerivedA::getType @ 0x12120
unsigned int RTTIDerivedA::getType(void)
{
 return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x12130
RTTIBase::~RTTIBase()
{
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x12140
RTTIDerivedB::~RTTIDerivedB()
{
}

// Function: RTTIDerivedB::getType @ 0x12170
unsigned int RTTIDerivedB::getType(void)
{
 return 2;
}

// Function: __do_global_ctors_aux @ 0x12180
void __do_global_ctors_aux(void)
{
 _GLOBAL__sub_I_5_1_cpp();
 return;
}

// Function: _fini @ 0x121cc
void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

