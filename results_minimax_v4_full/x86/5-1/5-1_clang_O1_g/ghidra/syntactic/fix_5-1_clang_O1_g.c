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

/* Ghidra undefined types */
typedef unsigned char undefined;
typedef unsigned int undefined4;
typedef unsigned short undefined2;
typedef unsigned long undefined8;
typedef unsigned long long undefined8_ll;
typedef void (*code)();
typedef int (*_func_int)();

/* Forward declarations for all classes */
struct Base;
struct Derived;
struct SimpleClass;
struct LifecycleClass;
struct MultiDerived;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct VirtualBase;
template<typename T> struct Container;
struct BaseA;
struct BaseB;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;

/* Forward declarations for all member functions - using proper C++ syntax */
namespace BaseNS {
    int virtual_func(Base* thisPointer, int x);
    void dtor_Base(Base* thisPointer);
    char* getName(Base* thisPointer);
}

namespace DerivedNS {
    int virtual_func(Derived* thisPointer, int x);
    void dtor_Derived(Derived* thisPointer);
    char* getName(Derived* thisPointer);
}

namespace MultiDerivedNS {
    int funcA(MultiDerived* thisPointer);
    void dtor_MultiDerived(MultiDerived* thisPointer);
    int funcB(MultiDerived* thisPointer);
}

namespace DiamondDerivedNS {
    int func(DiamondDerived* thisPointer);
    void dtor_DiamondDerived(DiamondDerived* thisPointer);
}

namespace MiddleANS {
    int func(MiddleA* thisPointer);
    void dtor_MiddleA(MiddleA* thisPointer);
}

namespace MiddleBNS {
    int func(MiddleB* thisPointer);
    void dtor_MiddleB(MiddleB* thisPointer);
}

namespace VirtualBaseNS {
    int func(VirtualBase* thisPointer);
    void dtor_VirtualBase(VirtualBase* thisPointer);
}

namespace BaseANS {
    int funcA(BaseA* thisPointer);
    void dtor_BaseA(BaseA* thisPointer);
}

namespace BaseBNS {
    int funcB(BaseB* thisPointer);
    void dtor_BaseB(BaseB* thisPointer);
}

namespace RTTIDerivedANS {
    void dtor_RTTIDerivedA(RTTIDerivedA* thisPointer);
    int getType(RTTIDerivedA* thisPointer);
}

namespace RTTIBaseNS {
    void dtor_RTTIBase(RTTIBase* thisPointer);
}

namespace RTTIDerivedBNS {
    void dtor_RTTIDerivedB(RTTIDerivedB* thisPointer);
    int getType(RTTIDerivedB* thisPointer);
}

namespace std {
    struct ios_base {
        struct Init {
            ~Init() {}
        };
    };
}

/* Thunk functions for multiple inheritance */
void _ZThn8_N12MultiDerived5funcBEv(void);
void _ZThn8_N12MultiDerivedD1Ev(void);
void _ZThn8_N12MultiDerivedD0Ev(void);
void _ZTv0_n12_N7MiddleA4funcEv(void);
void _ZTv0_n16_N7MiddleAD1Ev(void);
void _ZTv0_n16_N7MiddleAD0Ev(void);
void _ZTv0_n12_N7MiddleB4funcEv(void);
void _ZTv0_n16_N7MiddleBD1Ev(void);
void _ZTv0_n16_N7MiddleBD0Ev(void);
void _ZThn8_N14DiamondDerived4funcEv(void);
void _ZThn8_N14DiamondDerivedD1Ev(void);
void _ZThn8_N14DiamondDerivedD0Ev(void);
void _ZTv0_n12_N14DiamondDerived4funcEv(void);
void _ZTv0_n16_N14DiamondDerivedD1Ev(void);
void _ZTv0_n16_N14DiamondDerivedD0Ev(void);

/* Virtual table pointers */
extern void* PTR_virtual_func_00015ce4;
extern void* PTR_virtual_func_00015d04;
extern void* PTR_funcA_00015d28;
extern void* PTR__ZThn8_N12MultiDerived5funcBEv_00015d40;
extern void* PTR_func_00015db0;
extern void* PTR__ZTv0_n12_N14DiamondDerived4funcEv_00015de4;
extern void* PTR__ZThn8_N14DiamondDerived4funcEv_00015dc8;
extern void* PTR__RTTIBase_00015ecc;
extern void* PTR__RTTIBase_00015ee0;

/* Virtual tables */
typedef int (*vfunc_t)();
typedef int (*vfunc_Base_t)(Base*, int);
typedef int (*vfunc_MultiDerived_t)(MultiDerived*, int);
typedef int (*vfunc_DiamondDerived_t)(DiamondDerived*, int);
typedef int (*vfunc_MiddleA_t)(MiddleA*, int);
typedef int (*vfunc_MiddleB_t)(MiddleB*, int);
typedef int (*vfunc_VirtualBase_t)(VirtualBase*, int);
typedef int (*vfunc_BaseA_t)(BaseA*, int);
typedef int (*vfunc_BaseB_t)(BaseB*, int);
typedef void (*vfunc_dtor_t)(void*);

/* String constants */
extern const char DAT_000131e5[];
extern const char DAT_00013081[];
extern const char DAT_0001309f[];
extern const char DAT_000130bb[];
extern const char DAT_000130d7[];
extern const char DAT_000130f3[];
extern const char DAT_00013110[];
extern const char DAT_0001312c[];
extern const char DAT_00013148[];
extern const char DAT_00013164[];
extern const char DAT_00013180[];
extern const char DAT_0001319d[];
extern const char DAT_000131ba[];

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-1/5-1_clang_O1_g
 * Processor: x86
 * Compiler Spec: gcc
 */

/* Standard library includes */
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <new>
#include <typeinfo>
#include <stdexcept>

/* External declarations for C++ runtime */
extern "C" {
void *__cxa_allocate_exception(size_t);
void __cxa_throw(void*, void*, void*);
void __cxa_atexit(void (*)(void*), void*, void*);
void* __dynamic_cast(void*, const void*, const void*, const void*, long);
void* __dso_handle;
}

/* Forward declarations for C++ standard library */
namespace std {
struct __ioinit_holder { static int init; };
static int __ioinit = 0;

struct Init {
    ~Init() {}
};
}

/* Class definitions */
struct Base {
    int multiplier;
    void** _vptr_Base;
};

struct Derived : public Base {
    void** _vptr_Derived;
};

struct SimpleClass {
    char name[36];
};

struct LifecycleClass {
    int data[5];
    static int instance_count;
};

struct MultiDerived {
    struct {
        void** _vptr_BaseA;
        int dataA;
    } super_BaseA;
    struct {
        void** _vptr_BaseB;
        int dataB;
    } super_BaseB;
};

struct MiddleA {
    void** _vptr_MiddleA;
    int dataA;
};

struct MiddleB {
    void** _vptr_MiddleB;
    int dataB;
};

struct DiamondDerived {
    MiddleA super_MiddleA;
    MiddleB super_MiddleB;
};

struct VirtualBase {
    void** _vptr_VirtualBase;
};

template<typename T>
struct Container {
    int size;
    T data[10];
};

struct BaseA {
    void** _vptr_BaseA;
    int dataA;
};

struct BaseB {
    void** _vptr_BaseB;
    int dataB;
};

struct RTTIBase {
    void** vtable;
};

struct RTTIDerivedA : public RTTIBase {
    void** vtable_derivedA;
};

struct RTTIDerivedB : public RTTIBase {
    void** vtable_derivedB;
};

/* Type info structures */
struct type_info {
    const char* name;
};

/* CRT stub function _init removed by preprocessor */

/* Global variable definitions for static members */
int LifecycleClass::instance_count = 0;

/* Operator new/delete wrapper functions */
void* operator_new__(size_t size) {
    return operator new(size);
}

void operator_delete__(void* ptr) {
    operator delete(ptr);
}

/* type_info for int */
namespace int_ {
    struct type_info { const char* name; };
    const type_info typeinfo = {"int"};
}

/* RTTI type_info structures - using namespace to match __cxa_throw usage */
namespace RTTIBaseNS {
    struct type_info { const char* name; };
    const type_info typeinfo = {"9RTTIBase"};
}

namespace RTTIDerivedANS {
    struct type_info { const char* name; };
    const type_info typeinfo = {"12RTTIDerivedA"};
}

namespace RTTIDerivedBNS {
    struct type_info { const char* name; };
    const type_info typeinfo = {"12RTTIDerivedB"};
}

// For __dynamic_cast calls - these need to be accessible as references
const ::type_info& RTTIBase_type_info = RTTIBaseNS::typeinfo;
const ::type_info& RTTIDerivedA_type_info = RTTIDerivedANS::typeinfo;
const ::type_info& RTTIDerivedB_type_info = RTTIDerivedBNS::typeinfo;




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00011170 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 std::Init::Init(&std::__ioinit);
 __cxa_atexit(std::Init::~Init,&std::__ioinit,&__dso_handle);
 return;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 000111dc */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 000111e0 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 00011319 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 0001131d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: test_cpp_member_func @ 00011330 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)

{
 size_t sVar1;
 char local_28 [36];
 
 /* Unresolved local var: SimpleClass obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r2@[???] */
 strncpy(local_28,"Test",5);
 local_28[5] = '\0';
 local_28[6] = '\0';
 local_28[7] = '\0';
 local_28[8] = '\0';
 local_28[9] = '\0';
 local_28[10] = '\0';
 local_28[0xb] = '\0';
 local_28[0xc] = '\0';
 local_28[0xd] = '\0';
 local_28[0xe] = '\0';
 local_28[0xf] = '\0';
 local_28[0x10] = '\0';
 local_28[0x11] = '\0';
 local_28[0x12] = '\0';
 local_28[0x13] = '\0';
 local_28[0x14] = '\0';
 local_28[0x15] = '\0';
 local_28[0x16] = '\0';
 local_28[0x17] = '\0';
 local_28[0x18] = '\0';
 local_28[0x19] = '\0';
 local_28[0x1a] = '\0';
 local_28[0x1b] = '\0';
 local_28[0x1c] = '\0';
 local_28[0x1d] = '\0';
 local_28[0x1e] = '\0';
 local_28[0x1f] = 0;
 sVar1 = strlen(local_28);
 return sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 000113b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 int *piVar1;
 int *piVar2;
 int iVar3;
 
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 iVar3 = 0;
 piVar1 = operator_new__(0x14);
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



/* Function: call_virtual_func @ 00011420 */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 
 iVar1 = (**obj->_vptr_Base)(obj,x);
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 00011450 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
 int iVar1;
 int iVar2;
 undefined **local_14;
 undefined4 local_10;
 Base local_c;
 
 /* Unresolved local var: Base base@[???]
 Unresolved local var: Derived derived@[???]
 Unresolved local var: Base * pd@[???]
 Unresolved local var: Base * pb@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r4@[???] */
 local_c._vptr_Base = (_func_int **)&PTR_virtual_func_00015ce4;
 local_14 = &PTR_virtual_func_00015d04;
 local_10 = 3;
 iVar1 = Base::virtual_func(&local_c,5);
 iVar2 = (*(code *)*local_14)((Base *)local_14,5);
 return iVar2 + iVar1 + 0x15;
}



/* Function: test_cpp_multiple_inheritance @ 000114b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Exceeded maximum restarts with more pending */

int test_cpp_multiple_inheritance(void)

{
 int iVar1;
 int iVar2;
 MultiDerived local_1c;
 
 /* Unresolved local var: MultiDerived obj@[???]
 Unresolved local var: BaseB * pb@[???]
 Unresolved local var: BaseA * pa@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int ptr_equal@[???]
 Unresolved local var: int r2@[???] */
 local_1c.super_BaseA._vptr_BaseA = (_func_int **)&PTR_funcA_00015d28;
 local_1c.super_BaseB._vptr_BaseB = (_func_int **)&PTR__ZThn8_N12MultiDerived5funcBEv_00015d40;
 local_1c.super_BaseA.dataA = 100;
 local_1c.super_BaseB.dataB = 200;
 iVar1 = MultiDerived::funcA(&local_1c);
 iVar2 = (**local_1c.super_BaseB._vptr_BaseB)(&local_1c.super_BaseB);
 return iVar2 + iVar1 + 1;
}



/* Function: test_cpp_diamond_inheritance @ 00011510 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_diamond_inheritance(void)

{
 int extraout_EAX;
 int iVar1;
 undefined **local_14;
 undefined4 local_10;
 
 /* Unresolved local var: DiamondDerived obj@[???]
 Unresolved local var: VirtualBase * pb@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 local_14 = &PTR__ZTv0_n12_N14DiamondDerived4funcEv_00015de4;
 local_10 = 0x32;
 _ZTv0_n12_N14DiamondDerived4funcEv();
 local_10 = 100;
 iVar1 = (*(code *)*local_14)(&local_14);
 return iVar1 + extraout_EAX;
}



/* Function: test_cpp_operator_overload @ 00011580 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 /* Unresolved local var: Point p1@[???]
 Unresolved local var: Point p2@[???]
 Unresolved local var: Point p3@[???]
 Unresolved local var: bool eq@[???] */
 return 0x16;
}



/* Function: test_cpp_template_func @ 00011590 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: double r2@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 return 0x27;
}



/* Function: test_cpp_template_class @ 000115a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
 /* Unresolved local var: Container<int> int_container@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: double r3@[???]
 Unresolved local var: Container<double> double_container@[???] */
 return 0x10;
}



/* Function: test_cpp_lambda @ 000115b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
 /* Unresolved local var: int capture_by_value@[???]
 Unresolved local var: int capture_by_ref@[???]
 Unresolved local var: anon_class_8_2_336b0e7f lambda1@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: anon_class_1_0_00000001 lambda2@[???] */
 return 0x55;
}



/* Function: test_cpp_exception @ 000115c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 /* Unresolved local var: int result@[???]
 Unresolved local var: int e@[???]
 Unresolved local var: BaseException * e@[???]
 Unresolved local var: DerivedException * e@[???] */
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* try { // try from 000115e5 to 000115fe has its CatchHandler @ 00011601 */
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,&int_::typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 000116b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
 /* Unresolved local var: unique_ptr<int,_std::default_delete<int>_> ptr1@[???]
 Unresolved local var: unique_ptr<int,_std::default_delete<int>_> ptr2@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: unique_ptr<int[],_std::default_delete<int[]>_>
 arr@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)>
 ptr3@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: deleter_type deleter@[???] */
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 000116c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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
 
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: RTTIBase * obj2@[???]
 Unresolved local var: int result@[???] */
 piVar1 = operator_new__(4);
 *piVar1 = (int)&PTR__RTTIBase_00015ecc;
 piVar2 = operator_new__(4);
 *piVar2 = (int)&PTR__RTTIBase_00015ee0;
 __s1 = *(char **)(*(int *)(*piVar1 + -4) + 4);
 if (__s1 == "12RTTIDerivedA") {
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
 __s1_00 = *(char **)(*(int *)(*piVar2 + -4) + 4);
 if (__s1_00 == "12RTTIDerivedB") {
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
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 iVar3 = __dynamic_cast(piVar1,&RTTIBaseNS::typeinfo,&RTTIDerivedANS::typeinfo,0);
 uVar6 = uVar5 + 100;
 if (iVar3 == 0) {
 uVar6 = uVar5;
 }
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 iVar3 = __dynamic_cast(piVar2,&RTTIBaseNS::typeinfo,&RTTIDerivedBNS::typeinfo,0);
 uVar5 = uVar6 + 200;
 if (iVar3 == 0) {
 uVar5 = uVar6;
 }
 sVar4 = strlen(__s1 + (*__s1 == '*'));
 (**(code **)(*piVar1 + 4))(piVar1);
 (**(code **)(*piVar2 + 4))(piVar2);
 return sVar4 + uVar5;
}



/* Function: test_cpp_oo_features @ 00011810 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_cpp_oo_features(void)

{
 char *pcVar1;
 size_t sVar2;
 int *piVar3;
 int iVar4;
 int extraout_EAX;
 int extraout_EAX_00;
 int *piVar5;
 int iVar6;
 undefined **local_3c;
 char local_38 [4];
 undefined **local_34;
 undefined4 local_30;
 undefined **local_2c;
 undefined4 local_28;
 undefined4 local_24;
 undefined4 local_20;
 undefined3 uStack_1c;
 undefined1 local_19;
 Base local_14 [2];
 
 puts(&DAT_000131e5);
 /* Unresolved local var: SimpleClass obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r2@[???] */
 strncpy(local_38,"Test",4);
 local_34 = (undefined **)0x0;
 local_30 = 0;
 local_2c = (undefined **)0x0;
 local_28 = 0;
 local_24 = 0;
 local_20 = 0;
 uStack_1c = 0;
 local_19 = 0;
 local_3c = (undefined **)0xa;
 sVar2 = strlen(local_38);
 printf(&DAT_00013081,sVar2 + 0x125c);
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 iVar6 = 0;
 piVar3 = operator_new__(0x14);
 piVar5 = piVar3;
 do {
 /* Unresolved local var: size_t i@[???] */
 *piVar5 = iVar6;
 iVar6 = iVar6 + 10;
 piVar5 = piVar5 + 1;
 } while (iVar6 != 0x32);
 LifecycleClass::instance_count = LifecycleClass::instance_count + 1;
 iVar6 = LifecycleClass::instance_count + piVar3[2];
 operator_delete__(piVar3);
 LifecycleClass::instance_count = LifecycleClass::instance_count + -1;
 printf(&DAT_0001309f,LifecycleClass::instance_count * 1000 + iVar6);
 /* Unresolved local var: Base base@[???]
 Unresolved local var: Derived derived@[???]
 Unresolved local var: Base * pd@[???]
 Unresolved local var: Base * pb@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r4@[???] */
 local_14[0]._vptr_Base = (_func_int **)&PTR_virtual_func_00015ce4;
 local_3c = &PTR_virtual_func_00015d04;
 local_38[0] = '\x03';
 local_38[1] = '\0';
 local_38[2] = '\0';
 local_38[3] = '\0';
 iVar6 = Base::virtual_func(local_14,5);
 iVar4 = (*(code *)*local_3c)(&local_3c,5);
 printf(&DAT_000130bb,iVar4 + iVar6 + 0x15);
 /* Unresolved local var: MultiDerived obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: BaseB * pb@[???]
 Unresolved local var: BaseA * pa@[???]
 Unresolved local var: int ptr_equal@[???]
 Unresolved local var: int r2@[???] */
 local_3c = &PTR_funcA_00015d28;
 local_34 = &PTR__ZThn8_N12MultiDerived5funcBEv_00015d40;
 local_38[0] = 'd';
 local_38[1] = '\0';
 local_38[2] = '\0';
 local_38[3] = '\0';
 local_30 = 200;
 _ZThn8_N12MultiDerived5funcBEv();
 printf(&DAT_000130d7,extraout_EAX + 0x1f);
 /* Unresolved local var: DiamondDerived obj@[???]
 Unresolved local var: VirtualBase * pb@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 local_3c = &PTR_func_00015db0;
 local_2c = &PTR__ZTv0_n12_N14DiamondDerived4funcEv_00015de4;
 local_34 = &PTR__ZThn8_N14DiamondDerived4funcEv_00015dc8;
 local_28 = 0x32;
 _ZTv0_n12_N14DiamondDerived4funcEv();
 pcVar1 = local_38 + (int)local_3c[-3];
 pcVar1[0] = 'd';
 pcVar1[1] = '\0';
 pcVar1[2] = '\0';
 pcVar1[3] = '\0';
 iVar6 = (*(code *)*local_2c)(&local_2c);
 printf(&DAT_000130f3,iVar6 + extraout_EAX_00);
 printf(&DAT_00013110,0x16);
 printf(&DAT_0001312c,0x27);
 printf(&DAT_00013148,0x10);
 printf(&DAT_00013164,0x55);
 iVar6 = test_cpp_exception();
 printf(&DAT_00013180,iVar6);
 printf(&DAT_0001319d,0x2bf);
 iVar6 = test_cpp_rtti();
 printf(&DAT_000131ba,iVar6);
 return;
}



/* Function: main @ 00011ab0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: virtual_func @ 00011ad0 */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int Base::virtual_func(Base *this,int x)

{
 return x + 1;
}



/* Function: virtual_func @ 00011ae0 */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int Derived::virtual_func(Derived *this,int x)

{
 return this->multiplier * x;
}



/* Function: ~Base @ 00011af0 */

/* DWARF original prototype: void ~Base(Base * this) */

void Base::~Base(Base *this)

{
 return;
}



/* Function: ~MultiDerived @ 00011b00 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this) */

void MultiDerived::~MultiDerived(MultiDerived *this)

{
 return;
}



/* Function: ~DiamondDerived @ 00011b10 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this) */

void DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 return;
}

template<typename T>
T template_max(T a, T b) {
 if (b < a) {
 b = a;
 }
 return b;
}

template<>
int template_max<int>(int a, int b) {
 if (b < a) {
 b = a;
 }
 return b;
}



/* Function: template_max<double> @ 00011b30 */

template<>
double template_max<double>(double a,double b)

{
 if (b <= a || a != b) {
 b = a;
 }
 return b;
}



/* Function: template_swap<int> @ 00011b50 */

void template_swap<int>(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container @ 00011b70 */

/* DWARF original prototype: void Container(Container<int> * this) */

void Container<int>::Container(Container<int> *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 00011b80 */

/* DWARF original prototype: void push(Container<int> * this, int value) */

void Container<int>::push(Container<int> *this,int value)

{
 int iVar1;
 
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00011ba0 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int Container<int>::get(Container<int> *this,int idx)

{
 int iVar1;
 
 iVar1 = 0;
 if ((-1 < idx) && (idx < this->size)) {
 iVar1 = this->data[idx];
 }
 return iVar1;
}



/* Function: getSize @ 00011bc0 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int Container<int>::getSize(Container<int> *this)

{
 return this->size;
}



/* Function: Container @ 00011bd0 */

/* DWARF original prototype: void Container(Container<double> * this) */

void Container<double>::Container(Container<double> *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 00011be0 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void __thiscall Container<double>::push(Container<double> *this,double value)

{
 int iVar1;
 
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00011c00 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double __thiscall Container<double>::get(Container<double> *this,int idx)

{
 double dVar1;
 
 dVar1 = 0.0;
 if ((-1 < idx) && (idx < this->size)) {
 dVar1 = this->data[idx];
 }
 return dVar1;
}



/* Function: getSize @ 00011c20 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int __thiscall Container<double>::getSize(Container<double> *this)

{
 return this->size;
}



/* Function: getName @ 00011c30 */

/* DWARF original prototype: char * getName(Base * this) */

char * __thiscall Base::getName(Base *this)

{
 return "Base";
}



/* Function: ~Base @ 00011c50 */

/* DWARF original prototype: void ~Base(Base * this) */

void Base::~Base(Base *this)

{
 operator_delete__(this);
 return;
}



/* Function: getName @ 00011c80 */

/* DWARF original prototype: char * getName(Derived * this) */

char * __thiscall Derived::getName(Derived *this)

{
 return "Derived";
}



/* Function: ~Derived @ 00011ca0 */

/* DWARF original prototype: void ~Derived(Derived * this) */

void __thiscall Derived::~Derived(Derived *this)

{
 operator_delete__(this);
 return;
}



/* Function: funcA @ 00011cd0 */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int __thiscall MultiDerived::funcA(MultiDerived *this)

{
 return 0x1e;
}



/* Function: ~MultiDerived @ 00011ce0 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this) */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 operator_delete__(this);
 return;
}



/* Function: funcB @ 00011d10 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int __thiscall MultiDerived::funcB(MultiDerived *this)

{
 return 0x28;
}



/* Function: _ZThn8_N12MultiDerived5funcBEv @ 00011d20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn8_N12MultiDerived5funcBEv(void)

{
 return;
}



/* Function: _ZThn8_N12MultiDerivedD1Ev @ 00011d30 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn8_N12MultiDerivedD1Ev(void)

{
 return;
}



/* Function: _ZThn8_N12MultiDerivedD0Ev @ 00011d40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn8_N12MultiDerivedD0Ev(void)

{
 int in_stack_00000004;
 
 operator_delete__((void *)(in_stack_00000004 + -8));
 return;
}



/* Function: funcA @ 00011d70 */

/* DWARF original prototype: int funcA(BaseA * this) */

int __thiscall BaseA::funcA(BaseA *this)

{
 return 10;
}



/* Function: ~BaseA @ 00011d80 */

/* DWARF original prototype: void ~BaseA(BaseA * this) */

void __thiscall BaseA::~BaseA(BaseA *this)

{
 return;
}



/* Function: ~BaseA @ 00011d90 */

/* DWARF original prototype: void ~BaseA(BaseA * this) */

void __thiscall BaseA::~BaseA(BaseA *this)

{
 operator_delete__(this);
 return;
}



/* Function: funcB @ 00011dc0 */

/* DWARF original prototype: int funcB(BaseB * this) */

int __thiscall BaseB::funcB(BaseB *this)

{
 return 0x14;
}



/* Function: ~BaseB @ 00011dd0 */

/* DWARF original prototype: void ~BaseB(BaseB * this) */

void __thiscall BaseB::~BaseB(BaseB *this)

{
 return;
}



/* Function: ~BaseB @ 00011de0 */

/* DWARF original prototype: void ~BaseB(BaseB * this) */

void __thiscall BaseB::~BaseB(BaseB *this)

{
 operator_delete__(this);
 return;
}



/* Function: func @ 00011e10 */

/* DWARF original prototype: int func(MiddleA * this) */

int __thiscall MiddleA::func(MiddleA *this)

{
 return *(int *)((int)&this->dataA + (int)this->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: ~MiddleA @ 00011e30 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this) */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
 return;
}



/* Function: ~MiddleA @ 00011e40 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this) */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
 operator_delete__(this);
 return;
}



/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 00011e70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n12_N7MiddleA4funcEv(void)

{
 return;
}



/* Function: _ZTv0_n16_N7MiddleAD1Ev @ 00011e90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n16_N7MiddleAD1Ev(void)

{
 return;
}



/* Function: _ZTv0_n16_N7MiddleAD0Ev @ 00011ea0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n16_N7MiddleAD0Ev(void)

{
 int *in_stack_00000004;
 
 operator_delete__((void *)((int)in_stack_00000004 + *(int *)(*in_stack_00000004 + -0x10)));
 return;
}



/* Function: func @ 00011ed0 */

/* DWARF original prototype: int func(MiddleB * this) */

int __thiscall MiddleB::func(MiddleB *this)

{
 return *(int *)((int)&this->dataB + (int)this->_vptr_MiddleB[-3]) + 200;
}



/* Function: ~MiddleB @ 00011ef0 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this) */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
 return;
}



/* Function: ~MiddleB @ 00011f00 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this) */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
 operator_delete__(this);
 return;
}



/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 00011f30 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n12_N7MiddleB4funcEv(void)

{
 return;
}



/* Function: _ZTv0_n16_N7MiddleBD1Ev @ 00011f50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n16_N7MiddleBD1Ev(void)

{
 return;
}



/* Function: _ZTv0_n16_N7MiddleBD0Ev @ 00011f60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n16_N7MiddleBD0Ev(void)

{
 int *in_stack_00000004;
 
 operator_delete__((void *)((int)in_stack_00000004 + *(int *)(*in_stack_00000004 + -0x10)));
 return;
}



/* Function: func @ 00011f90 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
 return *(int *)((int)&(this->super_MiddleA).dataA + (int)(this->super_MiddleA)._vptr_MiddleA[-3])
 + 0xfa;
}



/* Function: ~DiamondDerived @ 00011fb0 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this) */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 operator_delete__(this);
 return;
}



/* Function: _ZThn8_N14DiamondDerived4funcEv @ 00011fe0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn8_N14DiamondDerived4funcEv(void)

{
 return;
}



/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 00012000 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn8_N14DiamondDerivedD1Ev(void)

{
 return;
}



/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 00012010 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn8_N14DiamondDerivedD0Ev(void)

{
 int in_stack_00000004;
 
 operator_delete__((void *)(in_stack_00000004 + -8));
 return;
}



/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 00012040 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n12_N14DiamondDerived4funcEv(void)

{
 return;
}



/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 00012060 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n16_N14DiamondDerivedD1Ev(void)

{
 return;
}



/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 00012070 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n16_N14DiamondDerivedD0Ev(void)

{
 int *in_stack_00000004;
 
 operator_delete__((void *)((int)in_stack_00000004 + *(int *)(*in_stack_00000004 + -0x10)));
 return;
}



/* Function: func @ 000120a0 */

/* DWARF original prototype: int func(VirtualBase * this) */

int __thiscall VirtualBase::func(VirtualBase *this)

{
 return 100;
}



/* Function: ~VirtualBase @ 000120b0 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this) */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this)

{
 return;
}



/* Function: ~VirtualBase @ 000120c0 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this) */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this)

{
 operator_delete__(this);
 return;
}



/* Function: ~RTTIDerivedA @ 000120f0 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
 operator_delete__(this);
 return;
}



/* Function: getType @ 00012120 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA::getType(RTTIDerivedA *this)

{
 return 1;
}



/* Function: ~RTTIBase @ 00012130 */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this) */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
 return;
}



/* Function: ~RTTIDerivedB @ 00012140 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
 operator_delete__(this);
 return;
}



/* Function: getType @ 00012170 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB::getType(RTTIDerivedB *this)

{
 return 2;
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 88 */
