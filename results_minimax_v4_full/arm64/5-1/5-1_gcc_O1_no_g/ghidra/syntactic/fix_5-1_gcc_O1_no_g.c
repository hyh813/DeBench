/* Auto-injected type definitions by preprocessor */
#include <stddef.h>
#include <string.h>
#include <stdio.h>

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
typedef uint8_t undefined;
typedef uint8_t undefined1;
typedef uint32_t undefined4;
typedef uint64_t undefined8;
typedef void (*code)(void);

// External variables for stack protection
extern uintptr_t __stack_chk_guard;
extern uintptr_t ___stack_chk_guard;

// CRT extern declarations
extern void *__dso_handle;
extern void __cxa_finalize(void *);
extern void deregister_tm_clones(void);

// Global variable for completion flag
char completed_0;

// Forward declarations for C++ classes with vtable pointers
struct typeinfo;
struct Init;
struct Container_int_;
struct Container_double_;
struct Base;
struct Derived;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct MultiDerived;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct LifecycleClass;
struct RTTIBase;
struct type_info;

// Define struct definitions
struct Base { void **vtable; int virtual_func(int); };
struct Derived { void **vtable; int value; int virtual_func(int); };
struct MiddleA { void **vtable; int offset; int func(); };
struct MiddleB { void **vtable; int offset; int func(); };
struct DiamondDerived { void **vtable; int value; int func(); };
struct MultiDerived { void **vtable; int a; int b; undefined8 funcA(); undefined8 funcB(); };
struct RTTIDerivedA { void **vtable; undefined8 getType(); };
struct RTTIDerivedB { void **vtable; undefined8 getType(); };

// Forward declarations for RTTI classes
struct RTTIBase { void **vtable; };

// Define LifecycleClass with static member
struct LifecycleClass {
    static int instance_count;
};
int LifecycleClass::instance_count = 0;

// Typedefs for C compatibility (allows using 'Base' instead of 'struct Base')
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct MultiDerived MultiDerived;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct LifecycleClass LifecycleClass;
typedef struct RTTIBase RTTIBase;

// Forward declarations for C++ classes with vtable pointers

void call_virtual_func(Base *param_1, int param_2);

// Define LifecycleClass instance_count static member
int LifecycleClass::instance_count = 0;

// External functions for stack protection and memory management
void __stack_chk_fail(void);
void *__builtin_new(size_t size);
void operator_delete__(void *ptr);
void *operator_new__(size_t size);

// External function pointers
extern undefined8 PTR_virtual_func_00113958;
extern undefined8 PTR_virtual_func_00113988;
extern undefined8 PTR_func_00113b30;
extern undefined8 PTR__RTTIDerivedA_00113b58;
extern undefined8 PTR__RTTIDerivedB_00113b80;

// Forward declarations for template functions
// Macros to handle C++ template instantiation syntax in C
#define template_max_int template_max<int>
#define template_max_double template_max<double>
#define template_swap_int template_swap<int>

// Actual template function declarations (using C-compatible syntax)
int template_max(int param_1, int param_2);
double template_max(double param_1, double param_2);
void template_swap(int *param_1, int *param_2);

// External string literals (DAT_ variables)
extern char DAT_00102130[];
extern char DAT_00102148[];
extern char DAT_00102170[];
extern char DAT_00102190[];
extern char DAT_001021b0[];
extern char DAT_001021d0[];
extern char DAT_001021f0[];
extern char DAT_00102210[];
extern char DAT_00102230[];
extern char DAT_00102250[];
extern char DAT_00102270[];
extern char DAT_00102290[];
extern char DAT_001022b0[];
extern char DAT_001022d0[];

// Template function definitions
template<typename T> T template_max(T param_1, T param_2) {
    if (param_1 < param_2) {
        param_1 = param_2;
    }
    return param_1;
}

template<typename T> void template_swap(T *param_1, T *param_2) {
    T temp = *param_1;
    *param_1 = *param_2;
    *param_2 = temp;
}

// External operator functions
void *operator_new(size_t size);

// Define static member
int LifecycleClass::instance_count = 0;

// RTTI typeinfo structures
struct typeinfo {
    void *vtable;
    char *name;
};

struct type_info {
    void *vtable;
    char *name;
};

// Declare LifecycleClass instance_count static member
struct LifecycleClass {
    static int instance_count;
};

// RTTI typeinfo static member declarations (actual definitions are below)
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct int_;

// Define static typeinfo members as global variables (C-compatible)
struct type_info RTTIBase_type_info = {0, (char *)"9RTTIBase"};
struct type_info RTTIDerivedA_type_info = {0, (char *)"12RTTIDerivedA"};
struct type_info RTTIDerivedB_type_info = {0, (char *)"12RTTIDerivedB"};
struct type_info int__type_info = {0, (char *)"3int"};

// External functions
void *__cxa_allocate_exception(size_t size);
void __cxa_throw(void *exception, struct typeinfo *info, void (*dtor)(void *));
void *__dynamic_cast(void *ptr, struct typeinfo *src_type, struct typeinfo *dst_type, long adjust);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-1/5-1_gcc_O1_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101470 @ 00101470 */

void FUN_00101470(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_001016fc @ 001016fc */

void FUN_001016fc(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00101754 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 size_t sVar1;
 char acStack_2c [31];
 undefined1 local_d;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar1 = strlen(acStack_2c);
 if (local_8 - ___stack_chk_guard == 0) {
 return (int)sVar1 + 0x125c;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(sVar1,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: test_cpp_constructor @ 001017cc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 int iVar1;
 void *pvVar2;
 
 pvVar2 = operator_new__(0x14);
 *(undefined4 *)((long)pvVar2 + 4) = 10;
 *(undefined4 *)((long)pvVar2 + 8) = 0x14;
 *(undefined4 *)((long)pvVar2 + 0xc) = 0x1e;
 *(undefined4 *)((long)pvVar2 + 0x10) = 0x28;
 iVar1 = LifecycleClass::instance_count + 0x15;
 LifecycleClass::instance_count = LifecycleClass::instance_count + 1;
 operator_delete__(pvVar2);
 LifecycleClass::instance_count = LifecycleClass::instance_count + -1;
 return iVar1 + LifecycleClass::instance_count * 1000;
}



/* Function: call_virtual_func @ 00101838 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 (*(code *)**(undefined8 **)param_1)(param_1,param_2);
 return;
}



/* Function: test_cpp_virtual_func @ 00101854 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

void test_cpp_virtual_func(void)

{
 int iVar1;
 int iVar2;
 undefined **local_20;
 undefined **local_18;
 undefined4 local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_20 = &PTR_virtual_func_00113958;
 local_18 = &PTR_virtual_func_00113988;
 local_10 = 3;
 iVar1 = call_virtual_func((Base *)&local_20,5);
 iVar2 = call_virtual_func((Base *)&local_18,5);
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(iVar1 + 0x15 + iVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: test_cpp_multiple_inheritance @ 001018e4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined8 test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 001018ec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

void test_cpp_diamond_inheritance(void)

{
 int iVar1;
 int iVar2;
 undefined **local_18;
 undefined4 local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_18 = &PTR_func_00113b30;
 local_10 = 0x32;
 iVar1 = DiamondDerived::func((DiamondDerived *)&local_18);
 local_10 = 100;
 iVar2 = DiamondDerived::func((DiamondDerived *)&local_18);
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(iVar1 + iVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: test_cpp_operator_overload @ 00101988 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined8 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00101990 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

void test_cpp_template_func(void)

{
 int iVar1;
 double dVar2;
 int local_10;
 int local_c;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 iVar1 = template_max<int>(3,7);
 dVar2 = template_max<double>(2.5,1.5);
 local_10 = 10;
 local_c = 0x14;
 template_swap<int>(&local_10,&local_c);
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail((int)dVar2 + iVar1 + local_10 + local_c,&__stack_chk_guard,0,
 local_8 - ___stack_chk_guard);
}



/* Function: test_cpp_template_class @ 00101a38 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined8 test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 00101a40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined8 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_exception @ 00101a48 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 00101a74 to 00101a77 has its CatchHandler @ 00101a78 */
 __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 00101b20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined8 test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00101b28 */

/* WARNING: Removing unreachable block (ram,0x00101bd4) */
/* WARNING: Removing unreachable block (ram,0x00101be0) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

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
 
 plVar2 = operator_new(8);
 *plVar2 = (long)&PTR__RTTIDerivedA_00113b58;
 plVar3 = operator_new(8);
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
 lVar4 = __dynamic_cast(plVar2,&RTTIBase::type_info,&RTTIDerivedA::type_info,0);
 iVar1 = iVar6 + 0x78;
 if (lVar4 == 0) {
 iVar1 = iVar6 + 0x14;
 }
 lVar4 = __dynamic_cast(plVar3,&RTTIBase::type_info,&RTTIDerivedB::type_info,0);
 iVar6 = iVar1 + 200;
 if (lVar4 == 0) {
 iVar6 = iVar1;
 }
 if (*__s1 == '*') {
 __s1 = __s1 + 1;
 }
 sVar5 = strlen(__s1);
 (**(code **)(lVar7 + 8))(plVar2);
 (**(code **)(*plVar3 + 8))(plVar3);
 return iVar6 + (int)sVar5;
}



/* Function: test_cpp_oo_features @ 00101c8c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 undefined4 uVar1;
 
 puts(&DAT_00102148);
 uVar1 = test_cpp_member_func();
 __printf_chk(1,&DAT_00102170,uVar1);
 uVar1 = test_cpp_constructor();
 __printf_chk(1,&DAT_00102190,uVar1);
 uVar1 = test_cpp_virtual_func();
 __printf_chk(1,&DAT_001021b0,uVar1);
 uVar1 = test_cpp_multiple_inheritance();
 __printf_chk(1,&DAT_001021d0,uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,&DAT_001021f0,uVar1);
 __printf_chk(1,&DAT_00102210,0x16);
 uVar1 = test_cpp_template_func();
 __printf_chk(1,&DAT_00102230,uVar1);
 __printf_chk(1,&DAT_00102250,0x10);
 __printf_chk(1,&DAT_00102270,0x55);
 uVar1 = test_cpp_exception();
 __printf_chk(1,&DAT_00102290,uVar1);
 uVar1 = test_cpp_smart_ptr();
 __printf_chk(1,&DAT_001022b0,uVar1);
 uVar1 = test_cpp_rtti();
 __printf_chk(1,&DAT_001022d0,uVar1);
 return;
}



/* Function: main @ 00101dbc */

undefined8 main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I_test_cpp_member_func @ 00101dd4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

void _GLOBAL__sub_I_test_cpp_member_func(void)

{
 std::ios_base::Init::Init((Init *)&std::__ioinit);
 __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
 return;
}



/* Function: virtual_func @ 00101e18 */

/* Base::virtual_func(int) */

int __thiscall Base::virtual_func(Base *this,int param_1)

{
 return param_1 + 1;
}



/* Function: getName @ 00101e20 */

/* Base::getName() const */

undefined1 * Base::getName(void)

{
 return &DAT_00102130;
}



/* Function: ~Base @ 00101e2c */

/* Base::~Base() */

void __thiscall Base::~Base(Base *this)

{
 return;
}



/* Function: virtual_func @ 00101e30 */

/* Derived::virtual_func(int) */

int __thiscall Derived::virtual_func(Derived *this,int param_1)

{
 return param_1 * *(int *)(this + 8);
}



/* Function: getName @ 00101e3c */

/* Derived::getName() const */

char * Derived::getName(void)

{
 return "Derived";
}



/* Function: funcA @ 00101e48 */

/* MultiDerived::funcA() */

undefined8 MultiDerived::funcA(void)

{
 return 0x1e;
}



/* Function: funcB @ 00101e50 */

/* MultiDerived::funcB() */

undefined8 MultiDerived::funcB(void)

{
 return 0x28;
}



/* Function: funcB @ 00101e58 */

/* non-virtual thunk to MultiDerived::funcB() */

undefined8 __thiscall MultiDerived::funcB(MultiDerived *this)

{
 return 0x28;
}



/* Function: func @ 00101e60 */

/* MiddleA::func() */

int __thiscall MiddleA::func(MiddleA *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}



/* Function: func @ 00101e78 */

/* virtual thunk to MiddleA::func() */

int __thiscall MiddleA::func(MiddleA *this)

{
 return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) +
 *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}



/* Function: func @ 00101e9c */

/* MiddleB::func() */

int __thiscall MiddleB::func(MiddleB *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}



/* Function: func @ 00101eb4 */

/* virtual thunk to MiddleB::func() */

int __thiscall MiddleB::func(MiddleB *this)

{
 return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) +
 *(long *)(*(long *)this + -0x18) + 8) + 200;
}



/* Function: func @ 00101ed8 */

/* DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}



/* Function: func @ 00101ef0 */

/* virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
 return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) +
 *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}



/* Function: func @ 00101f14 */

/* non-virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
 return *(int *)(this + *(long *)(*(long *)(this + -0x10) + -0x18) + -8) + 0xfa;
}



/* Function: getType @ 00101f2c */

/* RTTIDerivedA::getType() const */

undefined8 RTTIDerivedA::getType(void)

{
 return 1;
}



/* Function: getType @ 00101f34 */

/* RTTIDerivedB::getType() const */

undefined8 RTTIDerivedB::getType(void)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 00101f3c */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
 return;
}



/* Function: ~RTTIDerivedA @ 00101f40 */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
 return;
}



/* Function: ~DiamondDerived @ 00101f44 */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 return;
}



/* Function: ~DiamondDerived @ 00101f48 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 return;
}



/* Function: ~DiamondDerived @ 00101f4c */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 return;
}



/* Function: ~MultiDerived @ 00101f50 */

/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 return;
}



/* Function: ~MultiDerived @ 00101f54 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 return;
}



/* Function: ~Derived @ 00101f58 */

/* Derived::~Derived() */

void __thiscall Derived::~Derived(Derived *this)

{
 return;
}



/* Function: ~Base @ 00101f5c */

/* Base::~Base() */

void __thiscall Base::~Base(Base *this)

{
 operator_delete(this,8);
 return;
}



/* Function: ~Derived @ 00101f74 */

/* Derived::~Derived() */

void __thiscall Derived::~Derived(Derived *this)

{
 operator_delete(this,0x10);
 return;
}



/* Function: ~MultiDerived @ 00101f8c */

/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 operator_delete(this,0x20);
 return;
}



/* Function: ~MultiDerived @ 00101fa4 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 operator_delete(this + -0x10,0x20);
 return;
}



/* Function: ~RTTIDerivedA @ 00101fc0 */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
 operator_delete(this,8);
 return;
}



/* Function: ~RTTIDerivedB @ 00101fd8 */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
 operator_delete(this,8);
 return;
}



/* Function: ~DiamondDerived @ 00101ff0 */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 operator_delete(this,0x30);
 return;
}



/* Function: ~DiamondDerived @ 00102008 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 operator_delete(this + *(long *)(*(long *)this + -0x20),0x30);
 return;
}



/* Function: ~DiamondDerived @ 0010202c */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 operator_delete(this + -0x10,0x30);
 return;
}



/* Function: template_max<int> @ 00102048 */

/* int template_max<int>(int, int) */

int template_max<int>(int param_1,int param_2)

{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_max<double> @ 00102054 */

/* double template_max<double>(double, double) */

double template_max<double>(double param_1,double param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap<int> @ 00102060 */

/* void template_swap<int>(int&, int&) */

void template_swap<int>(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 00102074 */

/* Container<int>::Container() */

void __thiscall Container<int>::Container(Container<int> *this)

{
 *(undefined4 *)(this + 0x28) = 0;
 return;
}



/* Function: push @ 0010207c */

/* Container<int>::push(int) */

void __thiscall Container<int>::push(Container<int> *this,int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this + 0x28);
 if (iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + (long)iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get @ 00102098 */

/* Container<int>::get(int) const */

undefined4 __thiscall Container<int>::get(Container<int> *this,int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (uVar1 = 0, param_1 < *(int *)(this + 0x28))) {
 uVar1 = *(undefined4 *)(this + (long)param_1 * 4);
 }
 return uVar1;
}



/* Function: getSize @ 001020c0 */

/* Container<int>::getSize() const */

undefined4 __thiscall Container<int>::getSize(Container<int> *this)

{
 return *(undefined4 *)(this + 0x28);
}



/* Function: Container @ 001020c8 */

/* Container<double>::Container() */

void __thiscall Container<double>::Container(Container<double> *this)

{
 *(undefined4 *)(this + 0x50) = 0;
 return;
}



/* Function: push @ 001020d0 */

/* Container<double>::push(double) */

void __thiscall Container<double>::push(Container<double> *this,double param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this + 0x50);
 if (iVar1 < 10) {
 *(int *)(this + 0x50) = iVar1 + 1;
 *(double *)(this + (long)iVar1 * 8) = param_1;
 }
 return;
}



/* Function: get @ 001020ec */

/* Container<double>::get(int) const */

undefined1 [16] __thiscall Container<double>::get(Container<double> *this,int param_1)

{
 ulong uVar1;
 undefined1 auVar2 [16];
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 uVar1 = *(ulong *)(this + (long)param_1 * 8);
 }
 auVar2._8_8_ = 0;
 auVar2._0_8_ = uVar1;
 return auVar2;
}



/* Function: getSize @ 0010210c */

/* Container<double>::getSize() const */

undefined4 __thiscall Container<double>::getSize(Container<double> *this)

{
 return *(undefined4 *)(this + 0x50);
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 70 */
