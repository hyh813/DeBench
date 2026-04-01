#include <string.h>
#include <stdio.h>

/* Auto-injected type definitions by preprocessor */
#include <stdint.h>
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;

/* Forward declarations for C++ memory management */
void *operator_new(size_t size);
void operator_delete(void *ptr, size_t size);

/* Ghidra decompiler types */
typedef unsigned int undefined;
typedef unsigned char undefined1;
typedef unsigned int undefined4;
typedef unsigned long undefined8;
typedef void (*code)(void);
typedef unsigned long ulong;

/* Calling convention macros for ARM64 */
#define __thiscall

/* Function pointer types for virtual calls */
typedef int (*virtfunc_int)(void *this, int param);
typedef void (*virtfunc_void)(void *this);

/* Forward declarations for C++ classes */
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct LifecycleClass LifecycleClass;
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;
typedef struct Init Init;

/* Forward declarations for C++ member functions */
void std_ios_base_Init_Init(Init *this);
int Base_virtual_func(Base *this, int param_1);
undefined1 *Base_getName(Base *this);
void Base_destructor(Base *this);
void Base_destructor_delete(Base *this);
int Derived_virtual_func(Derived *this, int param_1);
char *Derived_getName(Derived *this);
void Derived_destructor(Derived *this);
void Derived_destructor_delete(Derived *this);
undefined8 MultiDerived_funcA(MultiDerived *this);
undefined8 MultiDerived_funcB(MultiDerived *this);
undefined8 MultiDerived_funcB_thunk(MultiDerived *this);
void MultiDerived_destructor(MultiDerived *this);
void MultiDerived_destructor_thunk_nv(MultiDerived *this);
void MultiDerived_destructor_delete(MultiDerived *this);
void MultiDerived_destructor_delete_thunk_nv(MultiDerived *this);
int MiddleA_func(MiddleA *this);
int MiddleA_func_thunk(MiddleA *this);
int MiddleB_func(MiddleB *this);
int MiddleB_func_thunk(MiddleB *this);
int DiamondDerived_func(DiamondDerived *this);
int DiamondDerived_func_thunk(DiamondDerived *this);
int DiamondDerived_func_thunk2(DiamondDerived *this);
void DiamondDerived_destructor(DiamondDerived *this);
void DiamondDerived_destructor_thunk_v(DiamondDerived *this);
void DiamondDerived_destructor_thunk_nv(DiamondDerived *this);
void DiamondDerived_destructor_delete(DiamondDerived *this);
void DiamondDerived_destructor_delete_thunk_v(DiamondDerived *this);
void DiamondDerived_destructor_delete_thunk_nv(DiamondDerived *this);
undefined8 RTTIDerivedA_getType(RTTIDerivedA *this);
undefined8 RTTIDerivedB_getType(RTTIDerivedB *this);
void RTTIDerivedA_destructor(RTTIDerivedA *this);
void RTTIDerivedA_destructor_delete(RTTIDerivedA *this);
void RTTIDerivedB_destructor(RTTIDerivedB *this);
void RTTIDerivedB_destructor_delete(RTTIDerivedB *this);
void Container_int_Constructor(Container_int *this);
void Container_int_push(Container_int *this, int param_1);
undefined4 Container_int_get(Container_int *this, int param_1);
undefined4 Container_int_getSize(Container_int *this);
void Container_double_Constructor(Container_double *this);
void Container_double_push(Container_double *this, double param_1);
ulong Container_double_get(Container_double *this, int param_1);
undefined4 Container_double_getSize(Container_double *this);

/* Init struct definition */
struct Init {
 char data[40];
};

/* Container class definitions */
struct Container_int {
 char data[40];
 int size;
};

struct Container_double {
 char data[80];
 int size;
};

/* External stack protection variables */
long ___stack_chk_guard = 0;
long __stack_chk_guard = 0;
void __stack_chk_fail(void) { }

/* printf_chk function */
#include <stdarg.h>
int __printf_chk(int flag, const char *format, ...) {
 va_list args;
 va_start(args, format);
 int ret = vprintf(format, args);
 va_end(args);
 return ret;
}

/* puts function stub */
int puts(const char *s) {
 return printf("%s\n", s);
}

/* CRT initialization variables */
char completed_0 = 0;

/* CRT clone functions */
void __cxa_finalize(void *p) { }
void deregister_tm_clones(void) { }

/* Forward declarations for template functions */
int template_max_int(int param_1,int param_2);
double template_max_double(double param_1,double param_2);
void template_swap_int(int *param_1,int *param_2);

/* C++ exception handling functions */
void *__cxa_allocate_exception(size_t size) { void *p = operator_new(size); return p; }
void __cxa_throw(void *exception, void *typeinfo, void *dest) { }
void __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle) { }
void *__dso_handle = 0;
void *__dynamic_cast(void *obj, void *src_type, void *dst_type, int flags) { return obj; }

/* C++ RTTI and typeinfo */
void *int_typeinfo = 0;
void *RTTIBase_typeinfo = 0;
void *RTTIDerivedA_typeinfo = 0;
void *RTTIDerivedB_typeinfo = 0;
void *PTR__RTTIDerivedA_00112c28 = 0;
void *PTR__RTTIDerivedB_00112c50 = 0;

/* C++ memory management */
#include <stdlib.h>
void exit(int status);
void *operator_new(size_t size) { return malloc(size); }
void operator_delete(void *ptr, size_t size) { free(ptr); }

/* Forward declaration for test_cpp_oo_features */
void test_cpp_oo_features(void);

/* std namespace objects */
Init std___ioinit = {0};
void std_ios_base_Init_Init(Init *this) { }
void std_ios_base_Init__Init(void *this) { }

/* Implementation for std_ios_base_Init__Init */
void std_ios_base_Init__Init_impl(void *this) { }



/* External data references */
char DAT_00101b88[] = "Base";
char DAT_00101ba0[] = "Testing C++ OO features";
char DAT_00101bc8[] = "%d";
char DAT_00101be8[] = "%d";
char DAT_00101c08[] = "%d";
char DAT_00101c28[] = "%d";
char DAT_00101c48[] = "%d";
char DAT_00101c68[] = "%d";
char DAT_00101c88[] = "%d";
char DAT_00101ca8[] = "%d";
char DAT_00101cc8[] = "%d";
char DAT_00101ce8[] = "%d";
char DAT_00101d08[] = "%d";
char DAT_00101d28[] = "%s";

/* C++ class static members */
int LifecycleClass_instance_count = 0;

/* C++ class definitions */
struct Base {
 void *vtable;
 int value;
};

struct Derived {
 void *vtable;
 int value;
 int multiplier;
};

struct MultiDerived {
 void *vtable;
 int value;
 int multiplier;
 char padding[16];
};

struct MiddleA {
 void *vtable;
 int value;
};

struct MiddleB {
 void *vtable;
 int value;
};

struct DiamondDerived {
 void *vtable;
 int value;
 char padding[24];
};

struct RTTIBase {
 void *vtable;
};

struct RTTIDerivedA {
 void *vtable;
 int type;
};

struct RTTIDerivedB {
 void *vtable;
 int type;
};

struct LifecycleClass {
 int instance_id;
};

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-1/5-1_gcc_O3_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00100eb0 @ 00100eb0 */

void FUN_00100eb0(void)

{
 (*(code *)(undefined *)0x0)();
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
 __cxa_throw(puVar1,&int_typeinfo,0);
}



/* Function: main @ 00101120 */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I_test_cpp_member_func @ 00101140 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

void _GLOBAL__sub_I_test_cpp_member_func(void)

{
 std_ios_base_Init_Init((Init *)&std___ioinit);
 __cxa_atexit((void (*)(void *))std_ios_base_Init__Init,&std___ioinit,&__dso_handle);
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
 __stack_chk_fail();
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

void call_virtual_func(Base *param_1,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x0010133c. Too many branches */
 /* WARNING: Treating indirect jump as call */
 ((virtfunc_int)*(undefined8 **)param_1)(param_1,param_2);
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
 __stack_chk_fail();
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



/* Function: test_cpp_rtti @ 00101450 */

/* WARNING: Removing unreachable block (ram,0x001014fc) */
/* WARNING: Removing unreachable block (ram,0x00101508) */
/* WARNING: Removing unreachable block (ram,0x00101510) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 int iVar1;
 int iVar2;
 long *plVar3;
 long *plVar4;
 long lVar5;
 size_t sVar6;
 char *__s1;
 long lVar7;
 char cVar8;
 
plVar3 = (long *)(uintptr_t)operator_new(8);
*plVar3 = (long)((uintptr_t)PTR__RTTIDerivedA_00112c28);
plVar4 = (long *)(uintptr_t)operator_new(8);
lVar7 = (long)((uintptr_t)plVar3);
__s1 = *(char **)((void *)((uintptr_t)*plVar3 + -8) + 8);
*plVar4 = (long)((uintptr_t)PTR__RTTIDerivedB_00112c50);
 if (__s1 == "12RTTIDerivedA") {
 cVar8 = '1';
 iVar2 = 0x1e;
 }
 else {
 cVar8 = *__s1;
 if (cVar8 == '*') {
 iVar2 = 0x14;
 }
 else {
 iVar1 = strcmp(__s1,"12RTTIDerivedA");
 iVar2 = 0x14;
 if (iVar1 == 0) {
 iVar2 = 0x1e;
 }
 }
 }
 lVar5 = (long)(uintptr_t)__dynamic_cast(plVar3,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar1 = iVar2 + 100;
 if (lVar5 == 0) {
 iVar1 = iVar2;
 }
 lVar5 = (long)(uintptr_t)__dynamic_cast(plVar4,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 iVar2 = iVar1 + 200;
 if (lVar5 == 0) {
 iVar2 = iVar1;
 }
 if (cVar8 == '*') {
 __s1 = __s1 + 1;
 }
 sVar6 = strlen(__s1);
 ((virtfunc_void)*(long **)((uintptr_t)lVar7 + 8))(plVar3);
 ((virtfunc_void)*(long **)((uintptr_t)*plVar4 + 8))(plVar4);
 return iVar2 + (int)sVar6;
}



/* Function: test_cpp_oo_features @ 001015f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 int iVar1;
 undefined4 uVar2;
 size_t sVar3;
 double dVar4;
 int local_38;
 int aiStack_34 [2];
 char acStack_2c [31];
 undefined1 local_d;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 puts(DAT_00101ba0);
 strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar3 = strlen(acStack_2c);
 __printf_chk(1,DAT_00101bc8,"%d",(int)sVar3 + 0x125c);
 __printf_chk(1,DAT_00101be8,"%d",LifecycleClass_instance_count * 0x3e9 + 0x15);
 __printf_chk(1,DAT_00101c08,"%d",0x2a);
 __printf_chk(1,DAT_00101c28,"%d",0x47);
 __printf_chk(1,DAT_00101c48,"%d",0x28a);
 __printf_chk(1,DAT_00101c68,"%d",0x16);
 iVar1 = template_max_int(3,7);
 dVar4 = template_max_double(2.5,1.5);
 local_38 = 10;
 aiStack_34[0] = 0x14;
 template_swap_int(&local_38,aiStack_34);
 __printf_chk(1,DAT_00101c88,"%d",(int)dVar4 + iVar1 + local_38 + aiStack_34[0]);
 __printf_chk(1,DAT_00101ca8,"%d",0x10);
 __printf_chk(1,DAT_00101cc8,"%d",0x55);
 test_cpp_exception();
 test_cpp_exception();
 __printf_chk(1,DAT_00101ce8,"%d",0);
 __printf_chk(1,DAT_00101d08,"%d",0x2bf);
 uVar2 = test_cpp_rtti();
 if (local_8 - ___stack_chk_guard == 0) {
 __printf_chk(1,DAT_00101d28,"%s","");
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: virtual_func @ 001017d0 */

/* Base_virtual_func(int) */

int __thiscall Base_virtual_func(Base *this,int param_1)

{
 return param_1 + 1;
}



/* Function: getName @ 001017e0 */

/* Base_getName() const */

undefined1 * Base_getName(Base *this)

{
 return (undefined1 *)&DAT_00101b88;
}



/* Function: _Base_destructor @ 001017f0 */

/* Base::~Base() */

void __thiscall Base_destructor(Base *this)

{
 return;
}



/* Function: virtual_func @ 00101800 */

/* Derived_virtual_func(int) */

int __thiscall Derived_virtual_func(Derived *this,int param_1)

{
 return param_1 * *(int *)(this + 8);
}



/* Function: getName @ 00101810 */

/* Derived_getName() const */

char * Derived_getName(Derived *this)

{
 return "Derived";
}



/* Function: funcA @ 00101820 */

/* MultiDerived_funcA() */

undefined8 MultiDerived_funcA(MultiDerived *this)

{
 return 0x1e;
}



/* Function: funcB @ 00101830 */

/* MultiDerived_funcB() */

undefined8 MultiDerived_funcB(MultiDerived *this)

{
 return 0x28;
}



/* Function: funcB @ 00101840 */

/* non-virtual thunk to MultiDerived_funcB() */

undefined8 __thiscall MultiDerived_funcB_thunk(MultiDerived *this)

{
 return 0x28;
}



/* Function: func @ 00101850 */

/* MiddleA_func() */

int __thiscall MiddleA_func(MiddleA *this)

{
 return *(int *)((char *)this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}



/* Function: func @ 00101870 */

/* virtual thunk to MiddleA_func() */

int __thiscall MiddleA_func_thunk(MiddleA *this)

{
 return *(int *)((char *)this + *(long *)(*(long *)((char *)this + *(long *)(*(long *)this + -0x18)) + -0x18) +
 *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}



/* Function: func @ 001018a0 */

/* MiddleB_func() */

int __thiscall MiddleB_func(MiddleB *this)

{
 return *(int *)((char *)this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}



/* Function: func @ 001018c0 */

/* virtual thunk to MiddleB_func() */

int __thiscall MiddleB_func_thunk(MiddleB *this)

{
 return *(int *)((char *)this + *(long *)(*(long *)((char *)this + *(long *)(*(long *)this + -0x18)) + -0x18) +
 *(long *)(*(long *)this + -0x18) + 8) + 200;
}



/* Function: func @ 001018f0 */

/* DiamondDerived_func() */

int __thiscall DiamondDerived_func(DiamondDerived *this)

{
 return *(int *)((char *)this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}



/* Function: func @ 00101910 */

/* virtual thunk to DiamondDerived_func() */

int __thiscall DiamondDerived_func_thunk(DiamondDerived *this)

{
 return *(int *)((char *)this + *(long *)(*(long *)((char *)this + *(long *)(*(long *)this + -0x18)) + -0x18) +
 *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}



/* Function: func @ 00101934 */

/* non-virtual thunk to DiamondDerived_func() */

int __thiscall DiamondDerived_func_thunk2(DiamondDerived *this)

{
 return *(int *)((char *)this + *(long *)(*(long *)((char *)this + -0x10) + -0x18) + -8) + 0xfa;
}



/* Function: getType @ 00101950 */

/* RTTIDerivedA_getType() const */

undefined8 RTTIDerivedA_getType(RTTIDerivedA *this)

{
 return 1;
}



/* Function: getType @ 00101960 */

/* RTTIDerivedB_getType() const */

undefined8 RTTIDerivedB_getType(RTTIDerivedB *this)

{
 return 2;
}



/* Function: _RTTIDerivedB_destructor @ 00101970 */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB_destructor(RTTIDerivedB *this)

{
 return;
}



/* Function: _RTTIDerivedA_destructor @ 00101980 */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA_destructor(RTTIDerivedA *this)

{
 return;
}



/* Function: _DiamondDerived_destructor @ 00101990 */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived_destructor(DiamondDerived *this)

{
 return;
}



/* Function: _DiamondDerived_destructor @ 00101994 */

/* virtual thunk to DiamondDerived_destructor() */

void __thiscall DiamondDerived_destructor_thunk_v(DiamondDerived *this)

{
 return;
}



/* Function: _DiamondDerived_destructor @ 001019a0 */

/* non-virtual thunk to DiamondDerived_destructor() */

void __thiscall DiamondDerived_destructor_thunk_nv(DiamondDerived *this)

{
 return;
}



/* Function: _MultiDerived_destructor @ 001019b0 */

/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived_destructor(MultiDerived *this)

{
 return;
}



/* Function: _MultiDerived_destructor @ 001019b4 */

/* non-virtual thunk to MultiDerived_destructor() */

void __thiscall MultiDerived_destructor_thunk_nv(MultiDerived *this)

{
 return;
}



/* Function: _Derived_destructor @ 001019c0 */

/* Derived::~Derived() */

void __thiscall Derived_destructor(Derived *this)

{
 return;
}



/* Function: _Base_destructor @ 001019d0 */

/* Base::~Base() deleting */

void __thiscall Base_destructor_delete(Base *this)

{
 operator_delete(this,8);
 return;
}



/* Function: _Derived_destructor @ 001019e0 */

/* Derived::~Derived() deleting */

void __thiscall Derived_destructor_delete(Derived *this)

{
 operator_delete(this,0x10);
 return;
}



/* Function: _MultiDerived_destructor @ 001019f0 */

/* MultiDerived::~MultiDerived() deleting */

void __thiscall MultiDerived_destructor_delete(MultiDerived *this)

{
 operator_delete(this,0x20);
 return;
}



/* Function: _MultiDerived_destructor @ 00101a00 */

/* non-virtual thunk to MultiDerived_destructor_delete() */

void __thiscall MultiDerived_destructor_delete_thunk_nv(MultiDerived *this)

{
 operator_delete(this + -0x10,0x20);
 return;
}



/* Function: _RTTIDerivedB_destructor @ 00101a10 */

/* RTTIDerivedB::~RTTIDerivedB() deleting */

void __thiscall RTTIDerivedB_destructor_delete(RTTIDerivedB *this)

{
 operator_delete(this,8);
 return;
}



/* Function: _RTTIDerivedA_destructor @ 00101a20 */

/* RTTIDerivedA::~RTTIDerivedA() deleting */

void __thiscall RTTIDerivedA_destructor_delete(RTTIDerivedA *this)

{
 operator_delete(this,8);
 return;
}



/* Function: _DiamondDerived_destructor @ 00101a30 */

/* DiamondDerived::~DiamondDerived() deleting */

void __thiscall DiamondDerived_destructor_delete(DiamondDerived *this)

{
 operator_delete(this,0x30);
 return;
}



/* Function: _DiamondDerived_destructor @ 00101a40 */

/* virtual thunk to DiamondDerived_destructor_delete() */

void __thiscall DiamondDerived_destructor_delete_thunk_v(DiamondDerived *this)

{
 operator_delete((char *)this + *(long *)(*(long *)this + -0x20),0x30);
 return;
}



/* Function: _DiamondDerived_destructor @ 00101a54 */

/* non-virtual thunk to DiamondDerived_destructor_delete() */

void __thiscall DiamondDerived_destructor_delete_thunk_nv(DiamondDerived *this)

{
 operator_delete((char *)this + -0x10,0x30);
 return;
}



/* Function: template_max_int @ 00101a60 */

/* int template_max_int(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_max_double @ 00101a70 */

/* double template_max_double(double, double) */

double template_max_double(double param_1,double param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap_int @ 00101a80 */

/* void template_swap_int(int*, int*) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container_int @ 00101aa0 */

/* Container_int::Container_int() */

void __thiscall Container_int_Constructor(Container_int *this)

{
 *(undefined4 *)(this + 0x28) = 0;
 return;
}



/* Function: push @ 00101ab0 */

/* Container_int::push(int) */

void __thiscall Container_int_push(Container_int *this,int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this + 0x28);
 if (iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + (long)iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get @ 00101ad0 */

/* Container_int::get(int) const */

undefined4 __thiscall Container_int_get(Container_int *this,int param_1)

{
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
 return *(undefined4 *)(this + (long)param_1 * 4);
 }
 return 0;
}



/* Function: getSize @ 00101b00 */

/* Container_int::getSize() const */

undefined4 __thiscall Container_int_getSize(Container_int *this)

{
 return *(undefined4 *)(this + 0x28);
}



/* Function: Container_double @ 00101b10 */

/* Container_double::Container_double() */

void __thiscall Container_double_Constructor(Container_double *this)

{
 *(undefined4 *)(this + 0x50) = 0;
 return;
}



/* Function: push @ 00101b20 */

/* Container_double::push(double) */

void __thiscall Container_double_push(Container_double *this,double param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this + 0x50);
 if (iVar1 < 10) {
 *(int *)(this + 0x50) = iVar1 + 1;
 *(double *)(this + (long)iVar1 * 8) = param_1;
 }
 return;
}



/* Function: get @ 00101b40 */

/* Container_double::get(int) const */

ulong __thiscall Container_double_get(Container_double *this,int param_1)

{
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 return *(ulong *)(this + (long)param_1 * 8);
 }
 return 0;
}



/* Function: getSize @ 00101b60 */

/* Container_double::getSize() const */

undefined4 __thiscall Container_double_getSize(Container_double *this)

{
 return *(undefined4 *)(this + 0x50);
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 70 */
