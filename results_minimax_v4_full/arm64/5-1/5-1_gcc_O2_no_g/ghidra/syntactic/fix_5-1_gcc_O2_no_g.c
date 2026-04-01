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

/* Additional types used in decompiled code */
typedef uint64_t undefined8;
typedef uint32_t undefined4;
typedef uint8_t undefined1;
typedef uint16_t undefined2;
typedef uint64_t ulong;
typedef int64_t longlong;
typedef void code;
typedef void (*code_ptr)(void);
typedef uint8_t undefined;

/* Standard library includes */
#include <string.h>
#include <stdio.h>

/* Standard library functions */
int strncpy(char *, const char *, size_t);
size_t strlen(const char *);
int strcmp(const char *, const char *);
int puts(const char *);
int __printf_chk(int, const char *, ...);
void __stack_chk_fail(void);

/* CRT stub functions */
void deregister_tm_clones(void);

/* Stack guard variables */
extern uintptr_t __stack_chk_guard;
extern uintptr_t ___stack_chk_guard;

/* C++ runtime functions */
void *__cxa_allocate_exception(size_t);
void __cxa_throw(void *exception, const void *typeinfo, void (*destructor)(void *));
void *__cxa_begin_catch(void *);
void __cxa_end_catch(void *);
int __cxa_atexit(void (*destructor)(void *), void *arg, void *dso_handle);
void __cxa_finalize(void *);
void *__dynamic_cast(const void *, const void *, const void *, long);

/* Standard functions */
void deregister_tm_clones(void);

/* Forward declarations */
void test_cpp_oo_features(void);

/* C++ operator functions */
void *operator_new(size_t);
void operator_delete(void *, size_t);

/* External data references */
extern void *PTR__RTTIDerivedA_00112c28;
extern void *PTR__RTTIDerivedB_00112c50;

/* Forward struct declarations for C++ classes */
struct Base;
struct Derived;
struct LifecycleClass;

/* Template function forward declarations - C compatible versions */
int template_max_int(int, int);
double template_max_double(double, double);
void template_swap_int(int *, int *);

/* std namespace mock - C compatible approach */
struct Init {
    char dummy;
};
static struct Init std___ioinit;
void Init_Init(struct Init *this) {}
void Init_destructor(struct Init *this) {}

/* RTTI type info structures */
struct typeinfo {
    void *vtable;
    char *name;
};
struct RTTIBase {
    struct typeinfo typeinfo;
};
struct RTTIDerivedA {
    struct typeinfo typeinfo;
};
struct RTTIDerivedB {
    struct typeinfo typeinfo;
};

/* Class definitions */
struct Base {
    void *vtable;
};

struct Derived {
    void *vtable;
    int value;
};

struct MiddleA {
    void *vtable;
};

struct MiddleB {
    void *vtable;
};

struct MultiDerived {
    void *vtable;
};

struct DiamondDerived {
    void *vtable;
};

/* Container template class - C compatible version */
struct Container_int {
    int data[10];
    int size;
};

struct Container_double {
    double data[10];
    int size;
};

/* Note: RTTIDerivedA, RTTIDerivedB, RTTIBase defined above with typeinfo members */

struct LifecycleClass {
    int instance_count;
};

/* Global variable definition for LifecycleClass */
int LifecycleClass_instance_count = 0;

/* RTTI type info globals */
struct typeinfo RTTIBase_typeinfo = {0, "7RTTIBase"};
struct typeinfo RTTIDerivedA_typeinfo = {0, "12RTTIDerivedA"};
struct typeinfo RTTIDerivedB_typeinfo = {0, "12RTTIDerivedB"};

/* Template function definitions - C compatible versions */
/* template_max and template_swap are defined later as non-template functions */

struct Init {};

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-1/5-1_gcc_O2_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */


/* Forward declarations */
void test_cpp_oo_features(void);

/* Forward struct declarations for C++ classes */
struct Base;
struct Derived;
struct MiddleA;
struct MiddleB;
struct MultiDerived;
struct DiamondDerived;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct RTTIBase;
struct LifecycleClass;
struct Init;
struct Container_int;
struct Container_double;

/* Forward declarations for template class methods */
void Container_int_Container(void);
void Container_int_push(void *, int);
int Container_int_get(void *, int);
int Container_int_getSize(void);
void Container_double_Container(void);
void Container_double_push(void *, double);
void Container_double_get(void *, int);

/* RTTI type info structures */
struct typeinfo {
    void *vtable;
    char *name;
};

/* Additional forward declarations for C++ classes */
struct RTTIDerivedA;
struct RTTIDerivedB;
struct RTTIBase;
struct MiddleA;
struct MiddleB;
struct MultiDerived;
struct DiamondDerived;

/* Forward declarations for template functions - removed C++ template syntax */
/* Concrete instantiations will be used instead */

/* std namespace mock - C compatible approach */
struct std_ios_base_Init {
    char dummy;
};
static struct std_ios_base_Init std___ioinit;
void std_ios_base_Init_Init(struct std_ios_base_Init *this) {}
void std_ios_base_Init_destructor(struct std_ios_base_Init *this) {}

/* Global variable definitions */
int LifecycleClass_instance_count = 0;

/* Global variables */
extern char completed_0;
extern void *__dso_handle;

/* Data references */
extern char DAT_00101b10;
extern char DAT_00101b38;
extern char DAT_00101b58;
extern char DAT_00101b78;
extern char DAT_00101b98;
extern char DAT_00101bb8;
extern char DAT_00101bd8;
extern char DAT_00101bf8;
extern char DAT_00101c18;
extern char DAT_00101c38;
extern char DAT_00101c58;
extern char DAT_00101c78;
extern char DAT_00101c98;
extern char DAT_00101af8;

/* Function: FUN_00100eb0 @ 00100eb0 */

void FUN_00100eb0(void)

{
 (*(code *)(void *)0x0)();
 return;
}



/* Function: test_cpp_exception @ 00101040 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 0010106c to 0010106f has its CatchHandler @ 00101070 */
 __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: main @ 00101120 */

undefined8 main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I_test_cpp_member_func @ 00101140 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

void _GLOBAL__sub_I_test_cpp_member_func(void)

{
 std_ios_base_Init_Init(&std___ioinit);
 __cxa_atexit(std_ios_base_Init_destructor,&std___ioinit,&__dso_handle);
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_0010123c @ 0010123c */

void FUN_0010123c(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 001012a0 */

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
 if (local_8 - ___stack_chk_guard == 0) {
 return (int)sVar1 + 0x125c;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(sVar1,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: test_cpp_constructor @ 00101310 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00101330 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(void *param_1,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x0010133c. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*(code *)**(undefined8 **)param_1)(param_1,param_2);
 return;
}



/* Function: test_cpp_virtual_func @ 00101340 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

undefined8 test_cpp_virtual_func(void)

{
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 00101350 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined8 test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00101360 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

undefined8 test_cpp_diamond_inheritance(void)

{
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00101370 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined8 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00101380 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

void test_cpp_template_func(void)

{
 int iVar1;
 double dVar2;
 int local_10;
 int iStack_c;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 iVar1 = template_max_int(3,7);
 dVar2 = template_max_double(2.5,1.5);
 local_10 = 10;
 iStack_c = 0x14;
 template_swap_int(&local_10,&iStack_c);
 if (local_8 == ___stack_chk_guard) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail((int)dVar2 + iVar1 + local_10 + iStack_c);
}



/* Function: test_cpp_template_class @ 00101420 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined8 test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 00101430 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined8 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_smart_ptr @ 00101440 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined8 test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Forward struct declarations for RTTI classes */
struct Base;
struct Derived;
struct MiddleA;
struct MiddleB;
struct MultiDerived;
struct DiamondDerived;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct RTTIBase;
struct Container_int;
struct Container_double;

/* Function: test_cpp_rtti @ 00101450 */

/* WARNING: Removing unreachable block (ram,0x001014f8) */
/* WARNING: Removing unreachable block (ram,0x00101504) */
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
 
 iVar7 = 10;
 plVar3 = operator_new(8);
 *plVar3 = (long)&PTR__RTTIDerivedA_00112c28;
 plVar4 = operator_new(8);
 lVar8 = *plVar3;
 __s1 = *(char **)(*(long *)(lVar8 + -8) + 8);
 *plVar4 = (long)&PTR__RTTIDerivedB_00112c50;
 cVar1 = *__s1;
 if ((__s1 != "12RTTIDerivedA") && (iVar7 = 0, cVar1 != '*')) {
 iVar2 = strcmp(__s1,"12RTTIDerivedA");
 iVar7 = 0;
 if (iVar2 == 0) {
 iVar7 = 10;
 }
 }
 lVar5 = __dynamic_cast(plVar3,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar2 = iVar7 + 0x78;
 if (lVar5 == 0) {
 iVar2 = iVar7 + 0x14;
 }
 lVar5 = __dynamic_cast(plVar4,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 iVar7 = iVar2 + 200;
 if (lVar5 == 0) {
 iVar7 = iVar2;
 }
 if (cVar1 == '*') {
 __s1 = __s1 + 1;
 }
 sVar6 = strlen(__s1);
 (**(code **)(lVar8 + 8))(plVar3);
 (**(code **)(*plVar4 + 8))(plVar4);
 return iVar7 + (int)sVar6;
}



/* Function: test_cpp_oo_features @ 001015b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 undefined4 uVar1;
 size_t sVar2;
 char acStack_2c [31];
 undefined1 local_d;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 puts(&DAT_00101b10);
 strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar2 = strlen(acStack_2c);
 __printf_chk(1,&DAT_00101b38,(int)sVar2 + 0x125c);
 uVar1 = test_cpp_constructor();
 __printf_chk(1,&DAT_00101b58,uVar1);
 __printf_chk(1,&DAT_00101b78,0x2a);
 __printf_chk(1,&DAT_00101b98,0x47);
 uVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,&DAT_00101bb8,uVar1);
 __printf_chk(1,&DAT_00101bd8,0x16);
 uVar1 = test_cpp_template_func();
 __printf_chk(1,&DAT_00101bf8,uVar1);
 __printf_chk(1,&DAT_00101c18,0x10);
 __printf_chk(1,&DAT_00101c38,0x55);
 uVar1 = test_cpp_exception();
 __printf_chk(1,&DAT_00101c58,uVar1);
 uVar1 = test_cpp_smart_ptr();
 __printf_chk(1,&DAT_00101c78,uVar1);
 uVar1 = test_cpp_rtti();
 if (local_8 - ___stack_chk_guard == 0) {
 __printf_chk(1,&DAT_00101c98);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(local_8 - ___stack_chk_guard,&__stack_chk_guard,uVar1,0);
}



/* Function: Base_virtual_func @ 00101740 */

/* Base::virtual_func(int) */

int Base_virtual_func(void *this, int param_1)

{
 return param_1 + 1;
}



/* Function: Base_getName @ 00101750 */

/* Base::getName() const */

undefined1 * Base_getName(void)

{
 return &DAT_00101af8;
}



/* Function: Base_destructor @ 00101760 */

/* Base::~Base() */

void Base_destructor(struct Base *this)

{
 return;
}



/* Function: Base_getName @ 00101750 */

/* Base::getName() const */

undefined1 * Base_getName(void)

{
 return &DAT_00101af8;
}



/* Function: Base_destructor @ 00101760 */

/* Base::~Base() */

void Base_destructor(Base *this)

{
 return;
}



/* Function: Derived_virtual_func @ 00101770 */

/* Derived::virtual_func(int) */

int Derived_virtual_func(Derived *this,int param_1)

{
 return param_1 * *(int *)(this + 8);
}



/* Function: Derived_getName @ 00101780 */

/* Derived::getName() const */

char * Derived_getName(void)

{
 return "Derived";
}



/* Function: MultiDerived_funcA @ 00101790 */

/* MultiDerived::funcA() */

undefined8 MultiDerived_funcA(void)

{
 return 0x1e;
}



/* Function: MultiDerived_funcB @ 001017a0 */

/* MultiDerived::funcB() */

undefined8 MultiDerived_funcB(void)

{
 return 0x28;
}



/* Function: funcB @ 001017b0 */

/* non-virtual thunk to MultiDerived::funcB() */

undefined8 __thiscall MultiDerived::funcB(MultiDerived *this)

{
 return 0x28;
}



/* Function: MiddleA_func @ 001017c0 */

/* MiddleA::func() */

int MiddleA_func(MiddleA *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}



/* Function: func @ 001017e0 */

/* virtual thunk to MiddleA::func() */

int __thiscall MiddleA::func(MiddleA *this)

{
 return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) +
 *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}



/* Function: func @ 00101810 */

/* MiddleB::func() */

int __thiscall MiddleB::func(MiddleB *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}



/* Function: func @ 00101830 */

/* virtual thunk to MiddleB::func() */

int __thiscall MiddleB::func(MiddleB *this)

{
 return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) +
 *(long *)(*(long *)this + -0x18) + 8) + 200;
}



/* Function: func @ 00101860 */

/* DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}



/* Function: func @ 00101880 */

/* virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
 return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) +
 *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}



/* Function: func @ 001018a4 */

/* non-virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
 return *(int *)(this + *(long *)(*(long *)(this + -0x10) + -0x18) + -8) + 0xfa;
}



/* Function: getType @ 001018c0 */

/* RTTIDerivedA::getType() const */

undefined8 RTTIDerivedA::getType(void)

{
 return 1;
}



/* Function: getType @ 001018d0 */

/* RTTIDerivedB::getType() const */

undefined8 RTTIDerivedB::getType(void)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 001018e0 */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
 return;
}



/* Function: ~RTTIDerivedA @ 001018f0 */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
 return;
}



/* Function: ~DiamondDerived @ 00101900 */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 return;
}



/* Function: ~DiamondDerived @ 00101904 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 return;
}



/* Function: ~DiamondDerived @ 00101910 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 return;
}



/* Function: ~MultiDerived @ 00101920 */

/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 return;
}



/* Function: ~MultiDerived @ 00101924 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 return;
}



/* Function: ~Derived @ 00101930 */

/* Derived::~Derived() */

void __thiscall Derived::~Derived(Derived *this)

{
 return;
}



/* Function: ~Base @ 00101940 */

/* Base::~Base() */

void Base_destructor(Base *this)

{
 operator_delete(this,8);
 return;
}



/* Function: ~Derived @ 00101950 */

/* Derived::~Derived() */

void __thiscall Derived::~Derived(Derived *this)

{
 operator_delete(this,0x10);
 return;
}



/* Function: ~MultiDerived @ 00101960 */

/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 operator_delete(this,0x20);
 return;
}



/* Function: ~MultiDerived @ 00101970 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 operator_delete(this + -0x10,0x20);
 return;
}



/* Function: ~RTTIDerivedB @ 00101980 */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
 operator_delete(this,8);
 return;
}



/* Function: ~RTTIDerivedA @ 00101990 */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
 operator_delete(this,8);
 return;
}



/* Function: ~DiamondDerived @ 001019a0 */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 operator_delete(this,0x30);
 return;
}



/* Function: ~DiamondDerived @ 001019b0 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 operator_delete(this + *(long *)(*(long *)this + -0x20),0x30);
 return;
}



/* Function: ~DiamondDerived @ 001019c4 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 operator_delete(this + -0x10,0x30);
 return;
}



/* Function: template_max_int @ 001019d0 */

/* int template_max<int>(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_max<double> @ 001019e0 */

/* double template_max<double>(double, double) */

double template_max<double>(double param_1,double param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap<int> @ 001019f0 */

/* void template_swap<int>(int&, int&) */

void template_swap<int>(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 00101a10 */

/* Container<int>::Container() */

void __thiscall Container<int>::Container(Container<int> *this)

{
 *(undefined4 *)(this + 0x28) = 0;
 return;
}



/* Function: push @ 00101a20 */

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



/* Function: get @ 00101a40 */

/* Container<int>::get(int) const */

undefined4 __thiscall Container<int>::get(Container<int> *this,int param_1)

{
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
 return *(undefined4 *)(this + (long)param_1 * 4);
 }
 return 0;
}



/* Function: getSize @ 00101a70 */

/* Container<int>::getSize() const */

undefined4 __thiscall Container<int>::getSize(Container<int> *this)

{
 return *(undefined4 *)(this + 0x28);
}



/* Function: Container @ 00101a80 */

/* Container<double>::Container() */

void __thiscall Container<double>::Container(Container<double> *this)

{
 *(undefined4 *)(this + 0x50) = 0;
 return;
}



/* Function: push @ 00101a90 */

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



/* Function: get @ 00101ab0 */

/* Container<double>::get(int) const */

undefined1 [16] __thiscall Container<double>::get(Container<double> *this,int param_1)

{
 undefined1 auVar1 [16];
 
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 auVar1._0_8_ = *(ulong *)(this + (long)param_1 * 8);
 auVar1._8_8_ = 0;
 return auVar1;
 }
 return ZEXT816(0);
}



/* Function: getSize @ 00101ad0 */

/* Container<double>::getSize() const */

undefined4 __thiscall Container<double>::getSize(Container<double> *this)

{
 return *(undefined4 *)(this + 0x50);
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 70 */
