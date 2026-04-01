/* Standard library includes */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long long undefined8;
typedef unsigned int undefined4;
typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Ghidra undefined types */
typedef uint8_t undefined;
typedef uint8_t undefined1;
typedef uint32_t undefined4;
typedef uint64_t undefined8;

/* Ghidra function pointer type */
typedef void (*code)();

/* Stack guard for stack protection */
extern void *___stack_chk_guard;
extern void *__stack_chk_guard;

/* Forward declarations for C++ classes */
struct Base;
struct Derived;
struct MultiDerived;
struct VirtualBase;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct LifecycleClass;
struct Container;
struct Container_int;
struct Container_double;
struct RTTIBase;

/* C-compatible typedefs for forward-declared structs */
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct VirtualBase VirtualBase;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;

/* Global variables used by CRT stubs */
extern char completed_0;
extern void *__dso_handle;

/* CRT stub functions */
extern void deregister_tm_clones(void);

/* Global variables used by CRT */
extern char completed_0;
extern void *__dso_handle;

/* CRT functions */
extern void deregister_tm_clones(void);

/* C++ exception runtime functions */
extern "C" {
void* __cxa_allocate_exception(size_t);
void __cxa_throw(void*, void*, void*);
}

/* C++ namespace and class definitions */
#ifdef __cplusplus
namespace std {
struct ios_base {
    struct Init {
        Init();
        ~Init();
    };
};
extern ios_base::Init __ioinit;
}
#else
/* C compatibility: declare as extern variables */
typedef struct _ios_base_init {
    int _unused;
} _ios_base_init;
extern _ios_base_init __ioinit;
/* C compatibility: define std namespace as empty */
#define std 
#endif

/* Function declarations */
void test_cpp_oo_features(void);
void __stack_chk_fail(void);

/* C-compatible helper functions for std::ios_base::Init - declared early for forward reference */
void std_init_function(void *ptr);
void std_destroy_function(void *ptr);

/* Forward declarations for classes */
struct LifecycleClass;
struct Container;
struct Container_int;
struct Container_double;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;

/* LifecycleClass definition with static member */
struct LifecycleClass {
    int placeholder;
};

/* Define the static member as a global for C compatibility */
int LifecycleClass_instance_count = 0;

/* operator_new function declaration */
void* operator_new(unsigned long size);

/* operator_new__ function declaration (variant) */
void* operator_new__(unsigned long size);

/* operator_delete function declaration */
void operator_delete(void *ptr, unsigned long size);

/* operator_delete__ function declaration (variant) */
void operator_delete__(void *ptr);

/* std::unique_ptr destructor declarations */
void std_unique_ptr_int_default_delete_dtor(void *this_ptr);
void std_unique_ptr_array_default_delete_dtor(void *this_ptr);

/* RTTI typeinfo pointers for derived classes */
extern undefined8 PTR__RTTIDerivedA_00113b58;
extern undefined8 PTR__RTTIDerivedB_00113b80;

/* String literals used in the binary */
extern char DAT_001025b2[];
extern char DAT_001025d6[];
extern char DAT_001025f4[];
extern char DAT_00102610[];
extern char DAT_0010262c[];
extern char DAT_00102648[];
extern char DAT_00102665[];
extern char DAT_00102681[];
extern char DAT_0010269d[];
extern char DAT_001026b9[];
extern char DAT_001026d5[];
extern char DAT_001026f2[];
extern char DAT_0010270f[];

/* Forward declarations for virtual function pointers */
extern undefined8 PTR_func_00113ac8;
extern undefined8 PTR_func_00113b30;
extern undefined8 PTR_func_00113af8;
extern undefined8 PTR_func_001138e0;
extern undefined8 PTR_func_00113918;
extern undefined8 PTR_func_00113958;
extern undefined8 PTR_func_00113990;

/* RTTI typeinfo for dynamic_cast - C-compatible definitions */
/* Base typeinfo for __dynamic_cast */
struct __rtti_base_typeinfo {
    void* (*cast)(void*, void*, void*, long);
    const char *name;
};

struct __rtti_derivedA_typeinfo {
    void* (*cast)(void*, void*, void*, long);
    const char *name;
};

struct __rtti_derivedB_typeinfo {
    void* (*cast)(void*, void*, void*, long);
    const char *name;
};

/* Define typeinfo structures */
struct __rtti_base_typeinfo RTTIBase_typeinfo = { 0, "RTTIBase" };
struct __rtti_derivedA_typeinfo RTTIDerivedA_typeinfo = { 0, "RTTIDerivedA" };
struct __rtti_derivedB_typeinfo RTTIDerivedB_typeinfo = { 0, "RTTIDerivedB" };

/* C-compatible typeinfo pointers for use in __dynamic_cast */
void *RTTIBase_typeinfo_ptr = (void*)&RTTIBase_typeinfo;
void *RTTIDerivedA_typeinfo_ptr = (void*)&RTTIDerivedA_typeinfo;
void *RTTIDerivedB_typeinfo_ptr = (void*)&RTTIDerivedB_typeinfo;

/* Define typeinfo as structure pointers - compatible with __dynamic_cast */
#define typeinfo_ptr RTTIBase_typeinfo_ptr

/* RTTI typeinfo for derived classes */
struct RTTIDerivedA_RTTI {
    void* base;
};
struct RTTIDerivedB_RTTI {
    void* base;
};

/* String literals */
/* String literals - use const char* for printf compatibility */
static const char *DAT_001025a0 = "Base";
static const char *DAT_001025b2 = "Testing C++ Features:\n";
static const char *DAT_001025d6 = "Member function test: %d\n";
static const char *DAT_001025f4 = "Constructor test: %d\n";
static const char *DAT_00102610 = "Virtual function test: %d\n";
static const char *DAT_0010262c = "Multiple inheritance test: %d\n";
static const char *DAT_00102648 = "Diamond inheritance test: %d\n";
static const char *DAT_00102665 = "Operator overload test: %d\n";
static const char *DAT_00102681 = "Template function test: %d\n";
static const char *DAT_0010269d = "Template class test: %d\n";
static const char *DAT_001026b9 = "Lambda test: %d\n";
static const char *DAT_001026d5 = "Exception test: %d\n";
static const char *DAT_001026f2 = "Smart pointer test: %d\n";
static const char *DAT_0010270f = "RTTI test: %d\n";

/* Forward declarations for template functions */
int template_max_int(int, int);
double template_max_double(double, double);
void template_swap_int(int*, int*);

/* Container class declarations - must come before method declarations */
typedef struct Container_int {
    int data[10];
    int size;
} Container_int;

typedef struct Container_double {
    double data[10];
    int size;
} Container_double;

/* Container class method declarations */
void Container_int_push(Container_int *this, int value);
void Container_double_push(Container_double *this, double value);

/* Template function wrappers for C compatibility */
#define template_max(T) template_max_##T
#define template_swap(T) template_swap_##T

/* Global variable for ios_base::Init - C compatibility */
int std_ioinit = 0;

/* Template function declarations - use C-compatible function names */
int template_max_int(int, int);
double template_max_double(double, double);
void template_swap_int(int*, int*);

/* Container template class methods - C-compatible function names */
void Container_int_Constructor(void *this);
void Container_int_push(void *this, int param_1);
int Container_int_get(void *this, int param_1);
int Container_int_getSize(void *this);
void Container_double_Constructor(void *this);
void Container_double_push(void *this, double param_1);
void Container_double_get(void *this, int param_1);
int Container_double_getSize(void *this);

/* Container class declarations - single definition */
struct Container_int {
    int data[10];
    int size;
};

struct Container_double {
    double data[10];
    int size;
};

/* Base container for template compatibility */
typedef struct Container {
    int data[10];
    int size;
} Container;

/* Forward declarations for virtual function tables */
extern undefined8 PTR_virtual_func_00113868;
extern undefined8 PTR_virtual_func_00113898;

/* std namespace helpers - simplified for C compatibility */
struct std_ios_base_Init {
    void Init() {}
    void ~Init() {}
};
struct std_ios_base {
    struct std_ios_base_Init Init;
};

/* C++ exception runtime functions */
extern void* __cxa_allocate_exception(size_t);
extern void __cxa_throw(void*, void*, void*);
extern void __cxa_finalize(void*);
extern int __cxa_atexit(void (*)(void*), void*, void*);

/* Dynamic cast runtime */
extern void* __dynamic_cast(void*, void*, void*, long);

/* Stack protector guard - provided by linker */
extern void *___stack_chk_guard;
extern void *__stack_chk_guard;

/* Function pointer type */
typedef void (*code)();

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-1/5-1_gcc_Os_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101650 @ 00101650 */

void FUN_00101650(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: test_cpp_exception @ 00101800 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 0010182c to 0010182f has its CatchHandler @ 00101830 */
 __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: main @ 001018d0 */

undefined8 main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I_test_cpp_member_func @ 001018e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

void _GLOBAL__sub_I_test_cpp_member_func(void)

{
 /* Call ios_base::Init constructor - use C-compatible approach */
 std_init_function(&__ioinit);
 __cxa_atexit(std_destroy_function,&__ioinit,&__dso_handle);
 return;
}

/* C-compatible helper functions for std::ios_base::Init */
void std_init_function(void *ptr) { }
void std_destroy_function(void *ptr) { }




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_001019fc @ 001019fc */

void FUN_001019fc(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00101a54 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 char *__s;
 size_t sVar1;
 char acStack_2c [31];
 undefined1 local_d;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 __s = strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar1 = strlen(__s);
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(sVar1,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return (int)sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 00101ac0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 /* Access static member via global variable approach for C compatibility */
 extern int LifecycleClass_instance_count;
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00101ad8 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x00101ae4. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*(code *)**(undefined8 **)param_1)(param_1,param_2);
 return;
}



/* Function: test_cpp_virtual_func @ 00101ae8 */

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
 local_20 = &PTR_virtual_func_00113868;
 local_18 = &PTR_virtual_func_00113898;
 local_10 = 3;
 iVar1 = call_virtual_func((Base *)&local_20,5);
 iVar2 = call_virtual_func((Base *)&local_18,5);
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(iVar1 + 0x15 + iVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return;
}



/* Function: test_cpp_multiple_inheritance @ 00101b78 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined8 test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_operator_overload @ 00101b80 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined8 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00101b88 */

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
 iVar1 = template_max_int(3,7);
 dVar2 = template_max_double(2.5,1.5);
 local_10 = 10;
 local_c = 0x14;
 template_swap_int(&local_10,&local_c);
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail((int)dVar2 + iVar1 + local_10 + local_c,&__stack_chk_guard,0,
 local_8 - ___stack_chk_guard);
 }
 return;
}



/* Function: test_cpp_template_class @ 00101c30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

int test_cpp_template_class(void)

{
 int iVar1;
 int local_38 [10];
 int local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_10 = 1;
 local_38[0] = 10;
 Container_int_push(local_38,0x14);
 Container_int_push(local_38,0x1e);
 iVar1 = local_38[0];
 if (local_10 < 1) {
 iVar1 = 0;
 }
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(local_10 + iVar1,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return local_10 + iVar1 + 3;
}



/* Function: test_cpp_lambda @ 00101cc0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined8 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_rtti @ 00101cc8 */

/* WARNING: Removing unreachable block (ram,0x00101d68) */
/* WARNING: Removing unreachable block (ram,0x00101d74) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

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
 
 plVar3 = operator_new(8);
 *plVar3 = (long)&PTR__RTTIDerivedA_00113b58;
 plVar4 = operator_new(8);
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
 lVar5 = __dynamic_cast(plVar3,RTTIBase_typeinfo_ptr,RTTIDerivedA_typeinfo_ptr,0);
 if (lVar5 != 0) {
 iVar2 = iVar7 + 0x78;
 }
 lVar5 = __dynamic_cast(plVar4,RTTIBase_typeinfo_ptr,RTTIDerivedB_typeinfo_ptr,0);
 if (lVar5 != 0) {
 iVar2 = iVar2 + 200;
 }
 if (cVar1 == '*') {
 __s1 = __s1 + 1;
 }
 sVar6 = strlen(__s1);
 (**(code **)(lVar8 + 8))(plVar3);
 (**(code **)(*plVar4 + 8))(plVar4);
 return iVar2 + (int)sVar6;
}



/* Function: test_cpp_smart_ptr @ 00101e24 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined8 test_cpp_smart_ptr(void)

{
 undefined8 local_20;
 undefined4 *puStack_18;
 undefined8 *local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 puStack_18 = operator_new(4);
 local_20 = 0;
 *puStack_18 = 200;
 /* try { // try from 00101e68 to 00101e6b has its CatchHandler @ 00101ec8 */
 local_10 = operator_new__(0x14);
 *local_10 = 0x200000001;
 local_10[1] = 0x400000003;
 *(undefined4 *)(local_10 + 2) = 5;
 std_unique_ptr_array_default_delete_dtor(&local_10);
 std_unique_ptr_int_default_delete_dtor(&puStack_18);
 std_unique_ptr_int_default_delete_dtor(&local_20);
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return 0x2bf;
}



/* Function: test_cpp_diamond_inheritance @ 00101ef8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
 int iVar1;
 int iVar2;
 undefined **local_38 [2];
 undefined **local_28;
 undefined **local_18;
 undefined4 local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_38[0] = &PTR_func_00113ac8;
 local_18 = &PTR_func_00113b30;
 local_28 = &PTR_func_00113af8;
 local_10 = 0x32;
 iVar1 = DiamondDerived::func((DiamondDerived *)&local_18);
 local_10 = 100;
 iVar2 = DiamondDerived::func((DiamondDerived *)&local_18);
 DiamondDerived::~DiamondDerived((DiamondDerived *)local_38);
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return iVar1 + iVar2;
}



/* Function: test_cpp_oo_features @ 00101fa0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 undefined4 uVar1;
 
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



/* Function: virtual_func @ 001020d8 */

/* Base::virtual_func(int) */

int Base_virtual_func(Base *this,int param_1)

{
 return param_1 + 1;
}



/* Function: getName @ 001020e0 */

/* Base::getName() const */

undefined * Base_getName(void)

{
 return &DAT_001025a0;
}



/* Function: ~Base @ 001020ec */

/* Base::~Base() */

void Base_dtor(Base *this)

{
 return;
}



/* Function: virtual_func @ 001020f0 */

/* Derived::virtual_func(int) */

int Derived_virtual_func(Derived *this,int param_1)

{
 return param_1 * *(int *)(this + 8);
}



/* Function: getName @ 001020fc */

/* Derived::getName() const */

char * Derived_getName(void)

{
 return "Derived";
}



/* Function: funcA @ 00102108 */

/* MultiDerived::funcA() */

undefined8 MultiDerived::funcA(void)

{
 return 0x1e;
}



/* Function: funcB @ 00102110 */

/* MultiDerived::funcB() */

undefined8 MultiDerived::funcB(void)

{
 return 0x28;
}



/* Function: funcB @ 00102118 */

/* non-virtual thunk to MultiDerived::funcB() */

undefined8 __thiscall MultiDerived::funcB(MultiDerived *this)

{
 return 0x28;
}



/* Function: func @ 00102120 */

/* VirtualBase::func() */

undefined8 VirtualBase::func(void)

{
 return 100;
}



/* Function: VirtualBase_dtor @ 00102128 */

/* VirtualBase::~VirtualBase() */

void VirtualBase_dtor(VirtualBase *this)

{
 return;
}



/* Function: func @ 0010212c */

/* MiddleA::func() */

int MiddleA_func(MiddleA *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}



/* Function: func @ 00102144 */

/* virtual thunk to MiddleA::func() */

void __thiscall MiddleA::func(MiddleA *this)

{
 func(this + *(long *)(*(long *)this + -0x18));
 return;
}



/* Function: func @ 00102154 */

/* MiddleB::func() */

int __thiscall MiddleB::func(MiddleB *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}



/* Function: func @ 0010216c */

/* virtual thunk to MiddleB::func() */

void __thiscall MiddleB::func(MiddleB *this)

{
 func(this + *(long *)(*(long *)this + -0x18));
 return;
}



/* Function: func @ 0010217c */

/* DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}



/* Function: func @ 00102194 */

/* virtual thunk to DiamondDerived::func() */

void __thiscall DiamondDerived::func(DiamondDerived *this)

{
 func(this + *(long *)(*(long *)this + -0x18));
 return;
}



/* Function: func @ 001021a4 */

/* non-virtual thunk to DiamondDerived::func() */

void __thiscall DiamondDerived::func(DiamondDerived *this)

{
 func(this + -0x10);
 return;
}



/* Function: MiddleA_dtor @ 001021ac */

/* MiddleA::~MiddleA() */

void MiddleA_dtor(MiddleA *this)

{
 *(undefined ***)this = &PTR_func_001138e0;
 *(undefined ***)(this + 0x10) = &PTR_func_00113918;
 return;
}



/* Function: ~MiddleA @ 001021c8 */

/* virtual thunk to MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
 long lVar1;
 
 lVar1 = *(long *)(*(long *)this + -0x20);
 *(undefined ***)(this + lVar1) = &PTR_func_001138e0;
 *(undefined ***)(this + lVar1 + 0x10) = &PTR_func_00113918;
 return;
}



/* Function: ~MiddleB @ 001021f0 */

/* MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
 *(undefined ***)this = &PTR_func_00113958;
 *(undefined ***)(this + 0x10) = &PTR_func_00113990;
 return;
}



/* Function: ~MiddleB @ 0010220c */

/* virtual thunk to MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
 long lVar1;
 
 lVar1 = *(long *)(*(long *)this + -0x20);
 *(undefined ***)(this + lVar1) = &PTR_func_00113958;
 *(undefined ***)(this + lVar1 + 0x10) = &PTR_func_00113990;
 return;
}



/* Function: getType @ 00102234 */

/* RTTIDerivedA::getType() const */

undefined8 RTTIDerivedA::getType(void)

{
 return 1;
}



/* Function: getType @ 0010223c */

/* RTTIDerivedB::getType() const */

undefined8 RTTIDerivedB::getType(void)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 00102244 */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
 return;
}



/* Function: ~RTTIDerivedA @ 00102248 */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
 return;
}



/* Function: ~MultiDerived @ 0010224c */

/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 return;
}



/* Function: ~MultiDerived @ 00102250 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 return;
}



/* Function: ~Derived @ 00102254 */

/* Derived::~Derived() */

void __thiscall Derived::~Derived(Derived *this)

{
 return;
}



/* Function: ~Base @ 00102258 */

/* Base::~Base() */

void __thiscall Base::~Base(Base *this)

{
 operator_delete(this,8);
 return;
}



/* Function: ~Derived @ 00102260 */

/* Derived::~Derived() */

void __thiscall Derived::~Derived(Derived *this)

{
 operator_delete(this,0x10);
 return;
}



/* Function: ~MultiDerived @ 00102268 */

/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 operator_delete(this,0x20);
 return;
}



/* Function: ~MultiDerived @ 00102270 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 ~MultiDerived(this + -0x10);
 return;
}



/* Function: ~VirtualBase @ 00102278 */

/* VirtualBase::~VirtualBase() */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this)

{
 operator_delete(this,0x10);
 return;
}



/* Function: ~RTTIDerivedB @ 00102280 */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
 operator_delete(this,8);
 return;
}



/* Function: ~RTTIDerivedA @ 00102288 */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
 operator_delete(this,8);
 return;
}



/* Function: ~MiddleA @ 00102290 */

/* MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
 *(undefined ***)this = &PTR_func_001138e0;
 *(undefined ***)(this + 0x10) = &PTR_func_00113918;
 operator_delete(this,0x20);
 return;
}



/* Function: ~MiddleA @ 001022b0 */

/* virtual thunk to MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
 ~MiddleA(this + *(long *)(*(long *)this + -0x20));
 return;
}



/* Function: ~MiddleB @ 001022c0 */

/* MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
 *(undefined ***)this = &PTR_func_00113958;
 *(undefined ***)(this + 0x10) = &PTR_func_00113990;
 operator_delete(this,0x20);
 return;
}



/* Function: ~MiddleB @ 001022e0 */

/* virtual thunk to MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
 ~MiddleB(this + *(long *)(*(long *)this + -0x20));
 return;
}



/* Function: ~MiddleA @ 001022f0 */

/* MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
 int in_w1;
 undefined **ppuVar1;
 undefined8 *in_x2;
 undefined *puVar2;
 undefined **ppuVar3;
 
 if (in_w1 == 0) {
 ppuVar3 = (undefined **)*in_x2;
 }
 else {
 ppuVar3 = &PTR_func_001138e0;
 }
 *(undefined ***)this = ppuVar3;
 if (in_w1 == 0) {
 ppuVar1 = (undefined **)in_x2[1];
 puVar2 = ppuVar3[-3];
 }
 else {
 puVar2 = (undefined *)0x10;
 ppuVar1 = &PTR_func_00113918;
 }
 *(undefined ***)(this + (long)puVar2) = ppuVar1;
 return;
}



/* Function: ~MiddleA @ 0010232c */

/* MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
 ~MiddleA(this);
 return;
}



/* Function: ~MiddleB @ 00102338 */

/* MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
 int in_w1;
 undefined **ppuVar1;
 undefined8 *in_x2;
 undefined *puVar2;
 undefined **ppuVar3;
 
 if (in_w1 == 0) {
 ppuVar3 = (undefined **)*in_x2;
 }
 else {
 ppuVar3 = &PTR_func_00113958;
 }
 *(undefined ***)this = ppuVar3;
 if (in_w1 == 0) {
 ppuVar1 = (undefined **)in_x2[1];
 puVar2 = ppuVar3[-3];
 }
 else {
 puVar2 = (undefined *)0x10;
 ppuVar1 = &PTR_func_00113990;
 }
 *(undefined ***)(this + (long)puVar2) = ppuVar1;
 return;
}



/* Function: ~MiddleB @ 00102374 */

/* MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
 ~MiddleB(this);
 return;
}



/* Function: template_max<int> @ 00102380 */

/* int template_max<int>(int, int) */

int template_max<int>(int param_1,int param_2)

{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_max<double> @ 0010238c */

/* double template_max<double>(double, double) */

double template_max<double>(double param_1,double param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap<int> @ 00102398 */

/* void template_swap<int>(int&, int&) */

void template_swap<int>(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container_int_Constructor @ 001023ac */

/* Container<int>::Container() */

void Container_int_Constructor(Container_int *this)

{
 *(undefined4 *)((uintptr_t)this + 0x28) = 0;
 return;
}



/* Function: Container_int_push @ 001023b4 */

/* Container<int>::push(int) */

void Container_int_push(Container_int *this,int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this + 0x28);
 if (iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + (long)iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get @ 001023d0 */

/* Container<int>::get(int) const */

undefined4 __thiscall Container<int>::get(Container<int> *this,int param_1)

{
 undefined4 uVar1;
 
 if ((param_1 < 0) || (*(int *)(this + 0x28) <= param_1)) {
 uVar1 = 0;
 }
 else {
 uVar1 = *(undefined4 *)(this + (long)param_1 * 4);
 }
 return uVar1;
}



/* Function: getSize @ 001023f0 */

/* Container<int>::getSize() const */

undefined4 __thiscall Container<int>::getSize(Container<int> *this)

{
 return *(undefined4 *)(this + 0x28);
}



/* Function: Container @ 001023f8 */

/* Container<double>::Container() */

void __thiscall Container<double>::Container(Container<double> *this)

{
 *(undefined4 *)(this + 0x50) = 0;
 return;
}



/* Function: push @ 00102400 */

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



/* Function: get @ 0010241c */

/* Container<double>::get(int) const */

undefined1 [16] __thiscall Container<double>::get(Container<double> *this,int param_1)

{
 ulong uVar1;
 undefined1 auVar2 [16];
 
 if ((param_1 < 0) || (*(int *)(this + 0x50) <= param_1)) {
 uVar1 = 0;
 }
 else {
 uVar1 = *(ulong *)(this + (long)param_1 * 8);
 }
 auVar2._8_8_ = 0;
 auVar2._0_8_ = uVar1;
 return auVar2;
}



/* Function: getSize @ 0010243c */

/* Container<double>::getSize() const */

undefined4 __thiscall Container<double>::getSize(Container<double> *this)

{
 return *(undefined4 *)(this + 0x50);
}



/* Function: std_unique_ptr_int_default_delete_dtor @ 00102444 */

/* std::unique_ptr<int, std::default_delete<int> >::~unique_ptr() */

void std_unique_ptr_int_default_delete_dtor(void *this_ptr)

{
 void **ptr = (void **)this_ptr;
 if (*ptr != (void *)0x0) {
 operator_delete(*ptr, (unsigned long)4);
 return;
 }
 return;
}



/* Function: std_unique_ptr_array_default_delete_dtor @ 00102458 */

/* std::unique_ptr<int [], std::default_delete<int []> >::~unique_ptr() */

void std_unique_ptr_array_default_delete_dtor(void *this_ptr)

{
 void **ptr = (void **)this_ptr;
 if (*ptr != (void *)0x0) {
 operator_delete__(*ptr);
 return;
 }
 return;
}



/* Function: ~DiamondDerived @ 00102468 */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 undefined **ppuVar1;
 undefined *puVar2;
 int in_w1;
 undefined8 *in_x2;
 
 if (in_w1 == 0) {
 ppuVar1 = (undefined **)*in_x2;
 }
 else {
 ppuVar1 = &PTR_func_00113ac8;
 }
 *(undefined ***)this = ppuVar1;
 if (in_w1 == 0) {
 puVar2 = ppuVar1[-3];
 ppuVar1 = (undefined **)in_x2[5];
 }
 else {
 puVar2 = (undefined *)0x20;
 ppuVar1 = &PTR_func_00113b30;
 }
 *(undefined ***)(this + (long)puVar2) = ppuVar1;
 if (in_w1 == 0) {
 ppuVar1 = (undefined **)in_x2[6];
 }
 else {
 ppuVar1 = &PTR_func_00113af8;
 }
 *(undefined ***)(this + 0x10) = ppuVar1;
 MiddleB::~MiddleB((MiddleB *)(this + 0x10));
 MiddleA::~MiddleA((MiddleA *)this);
 return;
}



/* Function: ~DiamondDerived @ 00102518 */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived(this);
 return;
}



/* Function: ~DiamondDerived @ 00102524 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived(this + -0x10);
 return;
}



/* Function: ~DiamondDerived @ 0010252c */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived(this + *(long *)(*(long *)this + -0x20));
 return;
}



/* Function: ~DiamondDerived @ 0010253c */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived(this);
 operator_delete(this,0x30);
 return;
}



/* Function: ~DiamondDerived @ 00102564 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived(this + -0x10);
 return;
}



/* Function: ~DiamondDerived @ 0010256c */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived(this + *(long *)(*(long *)this + -0x20));
 return;
}



/* Function: ~DiamondDerived @ 0010257c */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived(this);
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 89 */
