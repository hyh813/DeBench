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

/* Ghidra decompiler types */
typedef uint8_t undefined1;
typedef uint32_t undefined4;
typedef uint64_t undefined8;
typedef void undefined;
typedef unsigned long ulong;

/* Function pointer type for virtual function calls */
typedef void (*code)(void);
typedef void (*vfn_void)(void *);

#include <string.h>

/* Forward declarations for C++ classes */
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct DiamondDerived DiamondDerived;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct Init Init;
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;
typedef struct LifecycleClass LifecycleClass;
typedef struct RTTIBase RTTIBase;

/* Forward declarations for template functions */
int template_max_int(int param_1, int param_2);
double template_max_double(double param_1, double param_2);
void template_swap_int(int *param_1, int *param_2);

/* External function declarations */
extern void __cxa_finalize(void *dso_handle);
extern void deregister_tm_clones(void);
extern void __stack_chk_fail(int arg1, void *arg2, int arg3, long arg4);
extern void *operator_new__(size_t size);
extern void operator_delete__(void *ptr, size_t size);
extern void *operator_new(size_t size);
extern void operator_delete(void *ptr, size_t size);
extern void *__cxa_allocate_exception(size_t size);
extern void __cxa_throw(void *thrown_exception, void *tinfo, void *dest);
extern void __cxa_atexit(void *func, void *arg, void *dso);
extern void *__dynamic_cast(void *src_ptr, void *from_type, void *to_type, int src2to_offset);

/* RTTI typeinfo symbols */
extern void *RTTIBase_typeinfo;
extern void *RTTIDerivedA_typeinfo;
extern void *RTTIDerivedB_typeinfo;
extern void *PTR__RTTIDerivedA_00113b58;
extern void *PTR__RTTIDerivedB_00113b80;
extern void *int_typeinfo;
extern int puts(const char *s);
extern int __printf_chk(int flag, const char *format, ...);
extern int strcmp(const char *s1, const char *s2);
extern size_t strlen(const char *s);
extern char *strncpy(char *dest, const char *src, size_t n);

/* Global variables */
extern long ___stack_chk_guard;
extern long __stack_chk_guard;
extern char completed_0;
extern void *__dso_handle;
extern int LifecycleClass_instance_count;
extern code PTR_virtual_func_00113958;
extern code PTR_virtual_func_00113988;
extern code PTR_func_00113b30;
extern void *PTR__RTTIDerivedA_00113b58;
extern void *PTR__RTTIDerivedB_00113b80;
extern char DAT_00102130;
extern char DAT_00102148;
extern char DAT_00102170;
extern char DAT_00102190;
extern char DAT_001021b0;
extern char DAT_001021d0;
extern char DAT_001021f0;
extern char DAT_00102210;
extern char DAT_00102230;
extern char DAT_00102250;
extern char DAT_00102270;
extern char DAT_00102290;
extern char DAT_001022b0;
extern char DAT_001022d0;
extern Init std___ioinit;
extern void std_ios_base_Init_Init(Init *this);
extern void std_ios_base_Init__Init(Init *this);
extern int DiamondDerived_func(DiamondDerived *this);
extern void Base__Base(Base *this);
extern void Base__Base_deleting(Base *this);
extern void Derived__Derived(Derived *this);
extern void Derived__Derived_deleting(Derived *this);
extern void MultiDerived__MultiDerived(MultiDerived *this);
extern void MultiDerived__MultiDerived_deleting(MultiDerived *this);
extern void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this);
extern void RTTIDerivedA__RTTIDerivedA_deleting(RTTIDerivedA *this);
extern void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this);
extern void RTTIDerivedB__RTTIDerivedB_deleting(RTTIDerivedB *this);
extern void DiamondDerived__DiamondDerived(DiamondDerived *this);
extern void DiamondDerived__DiamondDerived_deleting(DiamondDerived *this);
extern void DiamondDerived__DiamondDerived_thunk1(DiamondDerived *this);
extern void DiamondDerived__DiamondDerived_thunk2(DiamondDerived *this);
extern void DiamondDerived__DiamondDerived_deleting_thunk1(DiamondDerived *this);
extern void DiamondDerived__DiamondDerived_deleting_thunk2(DiamondDerived *this);
extern void MultiDerived__MultiDerived_thunk(MultiDerived *this);
extern void MultiDerived__MultiDerived_deleting_thunk(MultiDerived *this);

/* Global variable declarations */
extern code PTR_virtual_func_00113958;
extern code PTR_virtual_func_00113988;
extern char DAT_00102130;
extern char DAT_00102148;
extern char DAT_00102170;
extern char DAT_00102190;
extern char DAT_001021b0;
extern char DAT_001021d0;
extern char DAT_001021f0;
extern char DAT_00102210;
extern char DAT_00102230;
extern char DAT_00102250;
extern char DAT_00102270;
extern char DAT_00102290;
extern char DAT_001022b0;
extern char DAT_001022d0;
extern Init std___ioinit;

/* Struct definitions */
struct LifecycleClass {
    int dummy;
};

struct RTTIBase {
    const char *type_name;
};

struct Base {
    void *vtable;
};

struct Derived {
    void *vtable;
    int multiplier;
};

struct MultiDerived {
    void *vtable;
    char padding[16];
};

struct DiamondDerived {
    void *vtable;
    char padding[32];
};

struct MiddleA {
    void *vtable;
    char padding[16];
};

struct MiddleB {
    void *vtable;
    char padding[16];
};

struct RTTIDerivedA {
    void *vtable;
};

struct RTTIDerivedB {
    void *vtable;
};

struct Init {
    int dummy;
};

struct Container_int {
    int data[10];
    int size;
};

struct Container_double {
    double data[10];
    int size;
};

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
 __stack_chk_fail((int)sVar1,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
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
 iVar1 = LifecycleClass_instance_count + 0x15;
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 operator_delete__(pvVar2, 0x14);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 return iVar1 + LifecycleClass_instance_count * 1000;
}



/* Function: call_virtual_func @ 00101838 */

/* call_virtual_func(Base*, int) */

int call_virtual_func(Base *param_1,int param_2)

{
 code *vfunc = *(code **)param_1;
 typedef int (*vfn_t)(Base *, int);
 return ((vfn_t)vfunc)(param_1, param_2);
}



/* Function: test_cpp_virtual_func @ 00101854 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

int test_cpp_virtual_func(void)

{
 int iVar1;
 int iVar2;
 code *local_20;
 code *local_18;
 undefined4 local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_20 = &PTR_virtual_func_00113958;
 local_18 = &PTR_virtual_func_00113988;
 local_10 = 3;
 iVar1 = call_virtual_func((Base *)&local_20,5);
 iVar2 = call_virtual_func((Base *)&local_18,5);
 if (local_8 - ___stack_chk_guard == 0) {
 return 0;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(iVar1 + iVar2 + 0x15,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: test_cpp_multiple_inheritance @ 001018e4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

int test_cpp_multiple_inheritance(void)

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
 code *local_18;
 undefined4 local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_18 = &PTR_func_00113b30;
 local_10 = 0x32;
 iVar1 = DiamondDerived_func((DiamondDerived *)local_18);
 local_10 = 100;
 iVar2 = DiamondDerived_func((DiamondDerived *)local_18);
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(iVar1 + iVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: test_cpp_operator_overload @ 00101988 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

int test_cpp_operator_overload(void)

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
 iVar1 = template_max_int(3,7);
 dVar2 = template_max_double(2.5,1.5);
 local_10 = 10;
 local_c = 0x14;
 template_swap_int(&local_10,&local_c);
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

int test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 00101a40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

int test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_exception @ 00101a48 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

int test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 00101a74 to 00101a77 has its CatchHandler @ 00101a78 */
 __cxa_throw(puVar1,int_typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 00101b20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

int test_cpp_smart_ptr(void)

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
 *plVar2 = (long)PTR__RTTIDerivedA_00113b58;
 plVar3 = operator_new(8);
 *plVar3 = (long)PTR__RTTIDerivedB_00113b80;
 lVar7 = (long)*plVar2;
 __s1 = *(char **)(*(long *)(lVar7 + -8) + 8);
 iVar6 = 10;
 if ((__s1 != "12RTTIDerivedA") && (iVar6 = 0, *__s1 != '*')) {
 iVar1 = strcmp(__s1,"12RTTIDerivedA");
 iVar6 = 10;
 if (iVar1 != 0) {
 iVar6 = 0;
 }
 }
 lVar4 = (long)__dynamic_cast(plVar2, RTTIBase_typeinfo, RTTIDerivedA_typeinfo, 0);
 iVar1 = iVar6 + 0x78;
 if (lVar4 == 0) {
 iVar1 = iVar6 + 0x14;
 }
 lVar4 = (long)__dynamic_cast(plVar3, RTTIBase_typeinfo, RTTIDerivedB_typeinfo, 0);
 iVar6 = iVar1 + 200;
 if (lVar4 == 0) {
 iVar6 = iVar1;
 }
 if (*__s1 == '*') {
 __s1 = __s1 + 1;
 }
 sVar5 = strlen(__s1);
 return iVar6 + (int)sVar5;
}



/* Function: test_cpp_oo_features @ 00101c8c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 int iVar1;
 
 puts(&DAT_00102148);
 iVar1 = test_cpp_member_func();
 __printf_chk(1,&DAT_00102170,iVar1);
 iVar1 = test_cpp_constructor();
 __printf_chk(1,&DAT_00102190,iVar1);
 iVar1 = test_cpp_virtual_func();
 __printf_chk(1,&DAT_001021b0,iVar1);
 iVar1 = test_cpp_multiple_inheritance();
 __printf_chk(1,&DAT_001021d0,iVar1);
 iVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,&DAT_001021f0,iVar1);
 __printf_chk(1,&DAT_00102210,0x16);
 iVar1 = test_cpp_template_func();
 __printf_chk(1,&DAT_00102230,iVar1);
 __printf_chk(1,&DAT_00102250,0x10);
 __printf_chk(1,&DAT_00102270,0x55);
 iVar1 = test_cpp_exception();
 __printf_chk(1,&DAT_00102290,iVar1);
 iVar1 = test_cpp_smart_ptr();
 __printf_chk(1,&DAT_001022b0,iVar1);
 iVar1 = test_cpp_rtti();
 __printf_chk(1,&DAT_001022d0,iVar1);
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
 std_ios_base_Init_Init((Init *)&std___ioinit);
 __cxa_atexit(std_ios_base_Init__Init,&std___ioinit,&__dso_handle);
 return;
}



/* Function: virtual_func @ 00101e18 */

/* Base::virtual_func(int) */

int Base_virtual_func(Base *this,int param_1)
{
 return param_1 + 1;
}



/* Function: getName @ 00101e20 */

/* Base::getName() const */

undefined1 * Base_getName(void)

{
 return &DAT_00102130;
}







/* Function: virtual_func @ 00101e30 */

/* Derived::virtual_func(int) */

int Derived_virtual_func(Derived *this,int param_1)

{
 return param_1 * *(int *)(this + 8);
}



/* Function: getName @ 00101e3c */

/* Derived::getName() const */

char * Derived_getName(void)

{
 return "Derived";
}



/* Function: funcA @ 00101e48 */

/* MultiDerived::funcA() */

undefined8 MultiDerived_funcA(void)

{
 return 0x1e;
}



/* Function: funcB @ 00101e50 */

/* MultiDerived::funcB() */

undefined8 MultiDerived_funcB(void)

{
 return 0x28;
}



/* Function: funcB @ 00101e58 */

/* non-virtual thunk to MultiDerived::funcB() */

int MultiDerived_funcB_thunk(MultiDerived *this)

{
 return 0x28;
}



/* Function: func @ 00101e60 */

/* MiddleA::func() */

int MiddleA_func(MiddleA *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}



/* Function: func @ 00101e78 */

/* virtual thunk to MiddleA::func() */

int MiddleA_func_thunk(MiddleA *this)

{
 return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) +
 *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}



/* Function: func @ 00101e9c */

/* MiddleB::func() */

int MiddleB_func(MiddleB *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}



/* Function: func @ 00101eb4 */

/* virtual thunk to MiddleB::func() */

int MiddleB_func_thunk(MiddleB *this)

{
 return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) +
 *(long *)(*(long *)this + -0x18) + 8) + 200;
}



/* Function: func @ 00101ed8 */

/* DiamondDerived::func() */

int DiamondDerived_func(DiamondDerived *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}



/* Function: func @ 00101ef0 */

/* virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_thunk(DiamondDerived *this)

{
 return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) +
 *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}



/* Function: func @ 00101f14 */

/* non-virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_thunk2(DiamondDerived *this)

{
 return *(int *)(this + *(long *)(*(long *)(this + -0x10) + -0x18) + -8) + 0xfa;
}



/* Function: getType @ 00101f2c */

/* RTTIDerivedA::getType() const */

undefined8 RTTIDerivedA_getType(void)

{
 return 1;
}



/* Function: getType @ 00101f34 */

/* RTTIDerivedB::getType() const */

undefined8 RTTIDerivedB_getType(void)

{
 return 2;
}



































/* Function: ~Base @ 00101f5c */

/* Base::~Base() */

void Base__Base_deleting(Base *this)

{
 operator_delete(this,8);
 return;
}



/* Function: ~Derived @ 00101f74 */

/* Derived::~Derived() */

void Derived__Derived_deleting(Derived *this)

{
 operator_delete(this,0x10);
 return;
}



/* Function: ~MultiDerived @ 00101f8c */

/* MultiDerived::~MultiDerived() */

void MultiDerived__MultiDerived_deleting(MultiDerived *this)

{
 operator_delete(this,0x20);
 return;
}



/* Function: ~MultiDerived @ 00101fa4 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived__MultiDerived_deleting_thunk(MultiDerived *this)

{
 operator_delete(this + -0x10,0x20);
 return;
}



/* Function: ~RTTIDerivedA @ 00101fc0 */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA__RTTIDerivedA_deleting(RTTIDerivedA *this)

{
 operator_delete(this,8);
 return;
}



/* Function: ~RTTIDerivedB @ 00101fd8 */

/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB__RTTIDerivedB_deleting(RTTIDerivedB *this)

{
 operator_delete(this,8);
 return;
}



/* Function: ~DiamondDerived @ 00101ff0 */

/* DiamondDerived::~DiamondDerived() */

void DiamondDerived__DiamondDerived_deleting(DiamondDerived *this)

{
 operator_delete(this,0x30);
 return;
}



/* Function: ~DiamondDerived @ 00102008 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived__DiamondDerived_deleting_thunk1(DiamondDerived *this)

{
 operator_delete(this + *(long *)(*(long *)this + -0x20),0x30);
 return;
}



/* Function: ~DiamondDerived @ 0010202c */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived__DiamondDerived_deleting_thunk2(DiamondDerived *this)

{
 operator_delete(this + -0x10,0x30);
 return;
}



/* Function: template_max<int> @ 00102048 */

/* int template_max<int>(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_max<double> @ 00102054 */

/* double template_max<double>(double, double) */

double template_max_double(double param_1,double param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap<int> @ 00102060 */

/* void template_swap<int>(int&, int&) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 00102074 */

/* Container<int>::Container() */

void Container_int__Container(Container_int *this)

{
 *(int *)(this + 0x28) = 0;
 return;
}



/* Function: push @ 0010207c */

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



/* Function: get @ 00102098 */

/* Container<int>::get(int) const */

undefined4 Container_int_get(Container_int *this,int param_1)

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

undefined4 Container_int_getSize(Container_int *this)

{
 return *(undefined4 *)(this + 0x28);
}



/* Function: Container @ 001020c8 */

/* Container<double>::Container() */

void Container_double__Container(Container_double *this)

{
 *(undefined4 *)(this + 0x50) = 0;
 return;
}



/* Function: push @ 001020d0 */

/* Container<double>::push(double) */

void Container_double_push(Container_double *this,double param_1)

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

uint64_t Container_double_get(Container_double *this,int param_1)

{
 uint64_t uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 uVar1 = *(uint64_t *)(this + (long)param_1 * 8);
 }
 return uVar1;
}



/* Function: getSize @ 0010210c */

/* Container<double>::getSize() const */

uint32_t Container_double_getSize(Container_double *this)

{
 return *(uint32_t *)(this + 0x50);
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 70 */
