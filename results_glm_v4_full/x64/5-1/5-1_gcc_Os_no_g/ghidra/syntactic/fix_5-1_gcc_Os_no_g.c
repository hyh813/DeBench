#include <stdlib.h>

/* Auto-injected type definitions by preprocessor */
#ifndef uint8_t
typedef unsigned char uint8_t;
#endif
#ifndef uint16_t
typedef unsigned short uint16_t;
#endif
#ifndef uint32_t
typedef unsigned int uint32_t;
#endif
#ifndef uint64_t
typedef unsigned long long uint64_t;
#endif
#ifndef int8_t
typedef signed char int8_t;
#endif
#ifndef int16_t
typedef short int16_t;
#endif
#ifndef int32_t
typedef int int32_t;
#endif
#ifndef int64_t
typedef long long int64_t;
#endif
#ifndef size_t
typedef unsigned long size_t;
#endif
#ifndef ssize_t
typedef long ssize_t;
#endif
#ifndef uintptr_t
typedef unsigned long uintptr_t;
#endif
#ifndef intptr_t
typedef long intptr_t;
#endif
#ifndef ptrdiff_t
typedef unsigned long ptrdiff_t;
#endif
#ifndef intmax_t
typedef long long intmax_t;
#endif
#ifndef uintmax_t
typedef unsigned long long uintmax_t;
#endif

/* Forward declarations for C++ ABI functions */
void __stack_chk_fail(void);
void *operator_new(size_t);
void *operator_new__(size_t);
void operator_delete(void *, size_t);
void operator_delete__(void *);

/* Implement C++ ABI function stubs */
void __stack_chk_fail(void) {
    /* Stack corruption detected - infinite loop to halt */
    while(1);
}

void *operator_new(size_t size) {
    return malloc(size);
}

void *operator_new__(size_t size) {
    return malloc(size);
}

void operator_delete(void *ptr, size_t size) {
    (void)size;
    free(ptr);
}

void operator_delete__(void *ptr) {
    free(ptr);
}

/* Forward declarations for virtual table pointers */
extern void *PTR_func_00105920;
extern void *PTR_func_00105958;
extern void *PTR_func_00105998;
extern void *PTR_func_001059d0;
extern void *PTR_func_00105b08;
extern void *PTR_func_00105b38;
extern void *PTR_func_00105b70;
extern void *PTR__RTTIDerivedA_00105b98;
extern void *PTR__RTTIDerivedB_00105bc0;

/* Define virtual table pointers */
void *PTR_func_00105920 = (void *)0;
void *PTR_func_00105958 = (void *)0;
void *PTR_func_00105998 = (void *)0;
void *PTR_func_001059d0 = (void *)0;
void *PTR_func_00105b08 = (void *)0;
void *PTR_func_00105b38 = (void *)0;
void *PTR_func_00105b70 = (void *)0;
void *PTR__RTTIDerivedA_00105b98 = (void *)0;
void *PTR__RTTIDerivedB_00105bc0 = (void *)0;

/* C++ class opaque type definitions */
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct VirtualBase VirtualBase;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;
typedef struct Container Container;

/* Full Container structure definition */
struct Container {
    int size;
    union {
        int int_data[10];
        double double_data[10];
    };
};

struct Container_int {
    int size;
    int data[10];
};

struct Container_double {
    int size;
    double data[10];
};
typedef struct LifecycleClass LifecycleClass;

/* Define Base and Derived structures */
struct Base {
    void **vptr;
};

struct Derived {
    void **vptr;
    int value;
};

struct MultiDerived {
    void **vptr;
    int value;
    int value2;
};

/* Define MiddleA, MiddleB, and DiamondDerived structures */
struct MiddleA {
    void **vptr;
    void **vptr2;
};

struct MiddleB {
    void **vptr;
    void **vptr2;
};

struct DiamondDerived {
    void **vptr;
    void **vptr2;
    void **vptr3;
    int padding[4];
};

/* Forward declarations for class methods */
int DiamondDerived_func(DiamondDerived *self);
void DiamondDerived_destructor_complete(DiamondDerived *self);

/* Standard library includes */
#include <string.h>
#include <stdio.h>

/* Additional type definitions for Ghidra compatibility */
typedef void undefined;
typedef uint8_t undefined1;
typedef uint32_t undefined4;
typedef uint64_t undefined8;
typedef void (*code)(void);

/* type_info definition for RTTI */
typedef struct type_info {
    const char *_vptr;
    const char *name;
} type_info;

/* Forward declarations for C++ ABI functions */
void *__cxa_allocate_exception(size_t);
void __cxa_throw(void *, const struct type_info *, void (*)(void *));

/* Implement C++ exception handling stubs */
void *__cxa_allocate_exception(size_t size) {
    return malloc(size);
}

void __cxa_throw(void *exception_obj, const struct type_info *tinfo, void (*dest)(void *)) {
    (void)exception_obj;
    (void)tinfo;
    (void)dest;
    /* In a real implementation, this would unwind the stack and call catch handlers */
    /* For decompiled code stub, just abort */
    abort();
}
int __cxa_atexit(void (*)(void *), void *, void *);
void *__dynamic_cast(void *, const struct type_info *, const struct type_info *, ptrdiff_t);
int __printf_chk(int, const char *, ...);
int template_max_int(int, int);
double template_max_double(double, double);
void template_swap_int(int *, int *);
void Container_int_push(Container_int *self, int param_1);
void std_unique_ptr_int_destructor(void **self);
void std_unique_ptr_int_array_destructor(void **self);

/* Forward declarations for global symbols */
extern type_info int_typeinfo;
extern struct type_info RTTIBase_typeinfo;
extern struct type_info RTTIDerivedA_typeinfo;
extern struct type_info RTTIDerivedB_typeinfo;
extern struct Init std___ioinit;
extern void* __dso_handle;

/* Define missing type info structures */
struct type_info RTTIBase_typeinfo = {0, "RTTIBase"};
struct type_info RTTIDerivedA_typeinfo = {0, "RTTIDerivedA"};
struct type_info RTTIDerivedB_typeinfo = {0, "RTTIDerivedB"};

/* Define string data constants */
static char DAT_00103004[] = "Base";
static char DAT_00103016[] = "=== C++ OO Features Test ===";
static char DAT_0010303a[] = "  Member func result: %d\n";
static char DAT_00103074[] = "  Virtual func result: %d\n";
static char DAT_001030ac[] = "  Diamond inheritance result: %d\n";
static char DAT_001030e5[] = "  Template func result: %d\n";
static char DAT_00103101[] = "  Template class result: %d\n";
static char DAT_00103139[] = "  Exception test\n";
static char DAT_00103156[] = "  Smart ptr result: %d\n";
static char DAT_00103173[] = "  RTTI result: %d\n";



/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-1/5-1_gcc_Os_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00102020 @ 00102020 */

void FUN_00102020(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: test_cpp_exception @ 001022a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 001022c4 to 001022c8 has its CatchHandler @ 001022c9 */
 __cxa_throw(puVar1,&int_typeinfo,0);
}



/* Function: main @ 00102367 */

/* Forward declaration */
void test_cpp_oo_features(void);

int main(void)

{
 undefined1 auVar1 [16];
 unsigned long in_RAX;
 
 test_cpp_oo_features();
 *(unsigned long *)(&auVar1[8]) = 0;
 *(unsigned long *)(&auVar1[0]) = in_RAX;
 return 0;
}








/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00102489 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 char *__s;
 size_t sVar1;
 long in_FS_OFFSET;
 char local_30 [31];
 undefined1 local_11;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 __s = strncpy(local_30,"Test",0x1f);
 local_11 = 0;
 sVar1 = strlen(__s);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return (int)sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 001024e3 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 extern int LifecycleClass_instance_count;
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 001024f5 */

/* call_virtual_func(Base*, int) */

int call_virtual_func(Base *param_1,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x001024fc. Too many branches */
 /* WARNING: Treating indirect jump as call */
 return (*(int (*)(Base *, int))**(void ***)param_1)(param_1, param_2);
}



/* Function: test_cpp_virtual_func @ 001024fe */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

int test_cpp_virtual_func(void)

{
 int iVar1;
 int iVar2;
 long in_FS_OFFSET;
 Base *local_28;
 Base *local_20;
 int local_18;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_18 = 3;
 iVar1 = call_virtual_func(local_28,local_18);
 iVar2 = call_virtual_func(local_20,local_18);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar1 + 0x15 + iVar2;
}



/* Function: test_cpp_multiple_inheritance @ 00102571 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined8 test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_operator_overload @ 0010257b */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined8 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00102585 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

int test_cpp_template_func(void)

{
 int iVar1;
 long in_FS_OFFSET;
 double dVar2;
 int local_18;
 int local_14;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 iVar1 = template_max_int(3,7);
 dVar2 = template_max_double(2.5,1.5);
 local_18 = 10;
 local_14 = 0x14;
 template_swap_int(&local_18,&local_14);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return (int)dVar2 + iVar1 + local_18 + local_14;
}



/* Function: test_cpp_template_class @ 00102618 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

int test_cpp_template_class(void)

{
 int iVar1;
 long in_FS_OFFSET;
 int local_3c [10];
 int local_14;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_14 = 1;
 local_3c[0] = 10;
 Container_int_push((Container_int *)local_3c,0x14);
 Container_int_push((Container_int *)local_3c,0x1e);
 iVar1 = 0;
 if (0 < local_14) {
 iVar1 = local_3c[0];
 }
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return local_14 + 3 + iVar1;
}



/* Function: test_cpp_lambda @ 0010268d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined8 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_rtti @ 00102697 */

/* WARNING: Removing unreachable block (ram,0x00102723) */
/* WARNING: Removing unreachable block (ram,0x00102728) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 long lVar1;
 int iVar2;
 long *plVar3;
 long *plVar4;
 long lVar5;
 size_t sVar6;
 unsigned int uVar7;
 char *__s1;
 
 uVar7 = 10;
 plVar3 = (long *)operator_new(8);
 *plVar3 = (long)&PTR__RTTIDerivedA_00105b98;
 plVar4 = (long *)operator_new(8);
 lVar1 = *plVar3;
 *plVar4 = (long)&PTR__RTTIDerivedB_00105bc0;
 __s1 = *(char **)(*(long *)(lVar1 + -8) + 8);
 if ((__s1 != "12RTTIDerivedA") && (uVar7 = 0, *__s1 != '*')) {
 iVar2 = strcmp(__s1,"12RTTIDerivedA");
 uVar7 = -(unsigned int)(iVar2 == 0) & 10;
 }
  iVar2 = uVar7 + 0x14;
 lVar5 = (long)__dynamic_cast(plVar3,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 if (lVar5 != 0) {
 iVar2 = uVar7 + 0x78;
 }
 lVar5 = (long)__dynamic_cast(plVar4,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 if (lVar5 != 0) {
 iVar2 = iVar2 + 200;
 }
 if (*__s1 == '*') {
 __s1 = __s1 + 1;
 }
 sVar6 = strlen(__s1);
 ((void (*)(void))(*(void **)(lVar1 + 8)))();
 ((void (*)(void))(*(void **)(*plVar4 + 8)))();
 return iVar2 + (int)sVar6;
}



/* Function: test_cpp_smart_ptr @ 001027ac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined8 test_cpp_smart_ptr(void)

{
 long in_FS_OFFSET;
 undefined8 local_38;
 undefined4 *local_30;
 undefined8 *local_28;
 long local_20;
 
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 local_30 = (undefined4 *)operator_new(4);
 local_38 = 0;
 *local_30 = 200;
 /* try { // try from 001027f3 to 001027f7 has its CatchHandler @ 0010284e */
 local_28 = (undefined8 *)operator_new__(0x14);
 *local_28 = 0x200000001;
 local_28[1] = 0x400000003;
 *(undefined4 *)(local_28 + 2) = 5;
 std_unique_ptr_int_array_destructor((void **)&local_28);
 std_unique_ptr_int_destructor((void **)&local_30);
 std_unique_ptr_int_destructor((void **)&local_38);
 if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return 0x2bf;
}



/* Function: test_cpp_diamond_inheritance @ 0010287c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
 int iVar1;
 int iVar2;
 long in_FS_OFFSET;
 undefined **local_50 [2];
 undefined **local_40;
 undefined **local_30;
 undefined4 local_28;
 long local_20;
 
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0x32;
  local_50[0] = &PTR_func_00105b08;
  local_30 = &PTR_func_00105b70;
  local_40 = &PTR_func_00105b38;
  iVar1 = DiamondDerived_func((DiamondDerived *)&local_30);
  local_28 = 100;
  iVar2 = DiamondDerived_func((DiamondDerived *)&local_30);
  DiamondDerived_destructor_complete((DiamondDerived *)local_50);
 if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar1 + iVar2;
}



/* Function: test_cpp_oo_features @ 0010290d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 undefined4 uVar1;
 undefined8 in_RAX;
 
 puts((const char *)&DAT_00103016);
 uVar1 = test_cpp_member_func();
 __printf_chk(1,(const char *)&DAT_0010303a,uVar1);
 test_cpp_constructor();
 __printf_chk(1,(const char *)0);
 uVar1 = test_cpp_virtual_func();
 __printf_chk(1,(const char *)&DAT_00103074,uVar1);
 test_cpp_multiple_inheritance();
 __printf_chk(1,(const char *)0);
 uVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,(const char *)&DAT_001030ac,uVar1);
 test_cpp_operator_overload();
 __printf_chk(1,(const char *)0);
 uVar1 = test_cpp_template_func();
 __printf_chk(1,(const char *)&DAT_001030e5,uVar1);
 uVar1 = test_cpp_template_class();
 __printf_chk(1,(const char *)&DAT_00103101,uVar1);
 test_cpp_lambda();
 __printf_chk(1,(const char *)0);
 test_cpp_exception();
 __printf_chk(1,(const char *)&DAT_00103139);
 uVar1 = test_cpp_smart_ptr();
 __printf_chk(1,(const char *)&DAT_00103156,uVar1);
 uVar1 = test_cpp_rtti();
 __printf_chk(1,(const char *)&DAT_00103173,uVar1,in_RAX);
 return;
}



/* Function: virtual_func @ 00102a58 */

/* Base::virtual_func(int) */

int Base_virtual_func(Base *self,int param_1)

{
 return param_1 + 1;
}



/* Function: getName @ 00102a60 */

/* Base::getName() const */

undefined * Base_getName(void)

{
 return &DAT_00103004;
}



/* Function: ~Base @ 00102a6c */

/* Base::~Base() */

void Base_destructor(Base *self)

{
 return;
}



/* Function: virtual_func @ 00102a72 */

/* Derived::virtual_func(int) */

int Derived_virtual_func(Derived *self,int param_1)

{
 return *(int *)(self + 8) * param_1;
}



/* Function: getName @ 00102a7e */

/* Derived::getName() const */

char * Derived_getName(void)

{
 return "Derived";
}



/* Function: funcA @ 00102a8a */

/* MultiDerived::funcA() */

void MultiDerived_funcA(void)

{
 return;
}



/* Function: funcB @ 00102a94 */

/* MultiDerived::funcB() */

void MultiDerived_funcB(void)

{
 return;
}



/* Function: funcB @ 00102a9e */

/* non-virtual thunk to MultiDerived::funcB() */

void MultiDerived_funcB_thunk(MultiDerived *self)

{
 return;
}



/* Function: func @ 00102aa8 */

/* VirtualBase::func() */

void VirtualBase_func(void)

{
 return;
}



/* Function: ~VirtualBase @ 00102ab2 */

/* VirtualBase::~VirtualBase() */

void VirtualBase_destructor(VirtualBase *self)

{
 return;
}



/* Function: func @ 00102ab8 */

/* MiddleA::func() */

int MiddleA_func(MiddleA *self)

{
 return *(int *)(self + *(long *)(*(long *)self + -0x18) + 8) + 0x96;
}



/* Function: func @ 00102acd */

/* virtual thunk to MiddleA::func() */

int MiddleA_func_virtual_thunk(MiddleA *self)

{
 return MiddleA_func((MiddleA *)(self + *(long *)(*(long *)self + -0x18)));
}



/* Function: func @ 00102ada */

/* MiddleB::func() */

int MiddleB_func(MiddleB *self)

{
 return *(int *)(self + *(long *)(*(long *)self + -0x18) + 8) + 200;
}



/* Function: func @ 00102aef */

/* virtual thunk to MiddleB::func() */

int MiddleB_func_virtual_thunk(MiddleB *self)

{
 return MiddleB_func((MiddleB *)(self + *(long *)(*(long *)self + -0x18)));
}



/* Function: func @ 00102afc */

/* DiamondDerived::func() */

int DiamondDerived_func(DiamondDerived *self)

{
 return *(int *)(self + *(long *)(*(long *)self + -0x18) + 8) + 0xfa;
}



/* Function: func @ 00102b11 */

/* virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_virtual_thunk(DiamondDerived *self)

{
 return DiamondDerived_func((DiamondDerived *)(self + *(long *)(*(long *)self + -0x18)));
}



/* Function: func @ 00102b1e */

/* non-virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_nonvirtual_thunk(DiamondDerived *self)

{
 return DiamondDerived_func((DiamondDerived *)(self + -0x10));
}



/* Function: ~MiddleA @ 00102b28 */

/* MiddleA::~MiddleA() */

void MiddleA_destructor(MiddleA *self)

{
 *(undefined ***)self = &PTR_func_00105920;
 *(undefined ***)(self + 0x10) = &PTR_func_00105958;
 return;
}



/* Function: ~MiddleA @ 00102b3f */

/* virtual thunk to MiddleA::~MiddleA() */

void MiddleA_destructor_virtual_thunk(MiddleA *self)

{
 long lVar1;
 
 lVar1 = *(long *)(*(long *)self + -0x20);
 *(undefined ***)(self + lVar1) = &PTR_func_00105920;
 *(undefined ***)(self + lVar1 + 0x10) = &PTR_func_00105958;
 return;
}



/* Function: ~MiddleB @ 00102b5e */

/* MiddleB::~MiddleB() */

void MiddleB_destructor(MiddleB *self)

{
 *(undefined ***)self = &PTR_func_00105998;
 *(undefined ***)(self + 0x10) = &PTR_func_001059d0;
 return;
}



/* Function: ~MiddleB @ 00102b75 */

/* virtual thunk to MiddleB::~MiddleB() */

void MiddleB_destructor_virtual_thunk(MiddleB *self)

{
 long lVar1;
 
 lVar1 = *(long *)(*(long *)self + -0x20);
 *(undefined ***)(self + lVar1) = &PTR_func_00105998;
 *(undefined ***)(self + lVar1 + 0x10) = &PTR_func_001059d0;
 return;
}



/* Function: getType @ 00102b94 */

/* RTTIDerivedA::getType() const */

undefined8 RTTIDerivedA_getType(RTTIDerivedA *self)

{
    return 1;
}



/* Function: getType @ 00102b9e */

/* RTTIDerivedB::getType() const */

undefined8 RTTIDerivedB_getType(RTTIDerivedB *self)

{
    return 2;
}



/* Function: ~RTTIDerivedB @ 00102ba8 */

/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB_destructor_1(RTTIDerivedB *self)

{
 return;
}



/* Function: ~RTTIDerivedA @ 00102bae */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA_destructor_1(RTTIDerivedA *self)

{
 return;
}



/* Function: ~MultiDerived @ 00102bb4 */

/* MultiDerived::~MultiDerived() */

void MultiDerived_destructor(MultiDerived *self)

{
 return;
}



/* Function: ~MultiDerived @ 00102bb9 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_destructor_nonvirtual_thunk(MultiDerived *self)

{
 return;
}



/* Function: ~Derived @ 00102bbe */

/* Derived::~Derived() */

void Derived_destructor(Derived *self)

{
 return;
}



/* Function: ~Base @ 00102bc4 */

/* Base::~Base() */

void Base_destructor_deleting(Base *self)

{
 operator_delete(self,8);
 return;
}



/* Function: ~Derived @ 00102bd2 */

/* Derived::~Derived() */

void Derived_destructor_deleting(Derived *self)

{
 operator_delete(self,0x10);
 return;
}



/* Function: ~MultiDerived @ 00102be0 */

/* MultiDerived::~MultiDerived() */

void MultiDerived_destructor_deleting(MultiDerived *self)

{
 operator_delete(self,0x20);
 return;
}



/* Function: ~MultiDerived @ 00102bee */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_destructor_nonvirtual_thunk_to_deleting(MultiDerived *self)

{
 MultiDerived_destructor(self + -0x10);
 return;
}



/* Function: ~VirtualBase @ 00102bf8 */

/* VirtualBase::~VirtualBase() */

void VirtualBase_destructor_deleting(VirtualBase *self)

{
 operator_delete(self,0x10);
 return;
}



/* Function: ~RTTIDerivedB @ 00102c06 */

/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB_destructor_deleting(RTTIDerivedB *self)

{
 operator_delete(self,8);
 return;
}



/* Function: ~RTTIDerivedA @ 00102c14 */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA_destructor_deleting(RTTIDerivedA *self)

{
 operator_delete(self,8);
 return;
}



/* Function: ~MiddleA @ 00102c22 */

/* MiddleA::~MiddleA() */

void MiddleA_destructor_deleting(MiddleA *self)

{
 *(undefined ***)self = &PTR_func_00105920;
 *(undefined ***)(self + 0x10) = &PTR_func_00105958;
 operator_delete(self,0x20);
 return;
}



/* Function: ~MiddleA @ 00102c42 */

/* virtual thunk to MiddleA::~MiddleA() */

void MiddleA_destructor_deleting_virtual_thunk(MiddleA *self)

{
 MiddleA_destructor(self + *(long *)(*(long *)self + -0x20));
 return;
}



/* Function: ~MiddleB @ 00102c50 */

/* MiddleB::~MiddleB() */

void MiddleB_destructor_deleting(MiddleB *self)

{
 *(undefined ***)self = &PTR_func_00105998;
 *(undefined ***)(self + 0x10) = &PTR_func_001059d0;
 operator_delete(self,0x20);
 return;
}



/* Function: ~MiddleB @ 00102c70 */

/* virtual thunk to MiddleB::~MiddleB() */

void MiddleB_destructor_deleting_virtual_thunk(MiddleB *self)

{
 MiddleB_destructor(self + *(long *)(*(long *)self + -0x20));
 return;
}



/* Function: ~MiddleA @ 00102c7e */

/* MiddleA::~MiddleA() */

void MiddleA_destructor_base(MiddleA *self, undefined8 *in_RDX, int in_ESI)

{
 undefined **ppuVar1;
 undefined *puVar2;
 undefined **ppuVar3;
 
 ppuVar1 = &PTR_func_00105920;
 if (in_ESI == 0) {
 ppuVar1 = (undefined **)*in_RDX;
 }
 *(undefined ***)self = ppuVar1;
 ppuVar3 = &PTR_func_00105958;
 puVar2 = (undefined *)0x10;
 if (in_ESI == 0) {
 ppuVar3 = (undefined **)in_RDX[1];
 puVar2 = ppuVar1[-3];
 }
 *(undefined ***)(self + (long)puVar2) = ppuVar3;
 return;
}



/* Function: ~MiddleA @ 00102cb0 */

/* MiddleA::~MiddleA() */

void MiddleA_destructor_complete(MiddleA *self)

{
 MiddleA_destructor(self);
 return;
}



/* Function: ~MiddleB @ 00102cbe */

/* MiddleB::~MiddleB() */

void MiddleB_destructor_base(MiddleB *self, undefined8 *in_RDX, int in_ESI)

{
 undefined **ppuVar1;
 undefined *puVar2;
 undefined **ppuVar3;
 
 ppuVar1 = &PTR_func_00105998;
 if (in_ESI == 0) {
 ppuVar1 = (undefined **)*in_RDX;
 }
 *(undefined ***)self = ppuVar1;
 ppuVar3 = &PTR_func_001059d0;
 puVar2 = (undefined *)0x10;
 if (in_ESI == 0) {
 ppuVar3 = (undefined **)in_RDX[1];
 puVar2 = ppuVar1[-3];
 }
 *(undefined ***)(self + (long)puVar2) = ppuVar3;
 return;
}



/* Function: ~MiddleB @ 00102cf0 */

/* MiddleB::~MiddleB() */

void MiddleB_destructor_complete(MiddleB *self)

{
 MiddleB_destructor(self);
 return;
}



/* Function: template_max<int> @ 00102cfe */

/* int template_max<int>(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_2 <= param_1) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: template_max<double> @ 00102d0a */

/* double template_max<double>(double, double) */

double template_max_double(double param_1,double param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap<int> @ 00102d13 */

/* void template_swap<int>(int&, int&) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 00102d20 */

/* Container<int>::Container() */

void Container_int_Constructor(Container_int *self)

{
 *(undefined4 *)(self + 0x28) = 0;
 return;
}



/* Function: push @ 00102d2c */

/* Container<int>::push(int) */

void Container_int_push(Container_int *self,int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(self + 0x28);
 if (iVar1 < 10) {
 *(int *)(self + 0x28) = iVar1 + 1;
 *(int *)(self + (long)iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get @ 00102d44 */

/* Container<int>::get(int) const */

undefined4 Container_int_get(Container_int *self,int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(self + 0x28))) {
 uVar1 = *(undefined4 *)(self + (long)param_1 * 4);
 }
 return uVar1;
}



/* Function: getSize @ 00102d5a */

/* Container<int>::getSize() const */

undefined4 Container_int_getSize(Container_int *self)

{
  return *(undefined4 *)(self + 0x28);
}



/* Function: Container @ 00102d62 */

/* Container<double>::Container() */

void Container_double_Constructor(Container_double *self)

{
  *(undefined4 *)(self + 0x50) = 0;
  return;
}



/* Function: push @ 00102d6e */

/* Container<double>::push(double) */

void Container_double_push(Container_double *self, double param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(self + 0x50);
  if (iVar1 < 10) {
    *(int *)(self + 0x50) = iVar1 + 1;
    *(double *)(self + (long)iVar1 * 8) = param_1;
  }
  return;
}



/* Function: get @ 00102d88 */

/* Container<double>::get(int) const */

undefined8 Container_double_get(Container_double *self, int param_1)

{
 undefined8 uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(self + 0x50))) {
 uVar1 = *(undefined8 *)(self + (long)param_1 * 8);
 }
 return uVar1;
}



/* Function: getSize @ 00102da2 */

/* Container<double>::getSize() const */

undefined4 Container_double_getSize(Container_double *self)

{
  return *(undefined4 *)(self + 0x50);
}



/* Function: ~unique_ptr @ 00102daa */

/* std::unique_ptr<int, std::default_delete<int> >::~unique_ptr() */

void std_unique_ptr_int_destructor(void **self)

{
 if (*self != (void *)0x0) {
 operator_delete(*self,4);
 return;
 }
 return;
}



/* Function: ~unique_ptr @ 00102dc2 */

/* std::unique_ptr<int [], std::default_delete<int []> >::~unique_ptr() */

void std_unique_ptr_int_array_destructor(void **self)

{
 if (*self != (void *)0x0) {
 operator_delete__(*self);
 }
 return;
 return;
}



/* Function: ~DiamondDerived @ 00102dd4 */

/* DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_base(DiamondDerived *self)

{
 undefined **ppuVar1;
 undefined **ppuVar2;
 undefined8 *in_RDX;
 undefined *puVar3;
 int in_ESI;
 
 ppuVar1 = &PTR_func_00105b08;
 if (in_ESI == 0) {
 ppuVar1 = (undefined **)*in_RDX;
 }
 *(undefined ***)self = ppuVar1;
 ppuVar2 = &PTR_func_00105b70;
 puVar3 = (undefined *)0x20;
 if (in_ESI == 0) {
 ppuVar2 = (undefined **)in_RDX[5];
 puVar3 = ppuVar1[-3];
 }
 *(undefined ***)(self + (long)puVar3) = ppuVar2;
 ppuVar1 = &PTR_func_00105b38;
 if (in_ESI == 0) {
 ppuVar1 = (undefined **)in_RDX[6];
 }
 *(undefined ***)(self + 0x10) = ppuVar1;
 MiddleB_destructor((MiddleB *)(self + 0x10));
 MiddleA_destructor((MiddleA *)self);
 return;
}



/* Function: ~DiamondDerived @ 00102e5e */

/* DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_complete(DiamondDerived *self)

{
 DiamondDerived_destructor_base(self);
 return;
}



/* Function: ~DiamondDerived @ 00102e6e */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_nonvirtual_thunk(DiamondDerived *self)

{
 DiamondDerived_destructor_base(self + -0x10);
 return;
}



/* Function: ~DiamondDerived @ 00102e78 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_virtual_thunk(DiamondDerived *self)

{
 DiamondDerived_destructor_base(self + *(long *)(*(long *)self + -0x20));
 return;
}



/* Function: ~DiamondDerived @ 00102e86 */

/* DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_deleting(DiamondDerived *self)

{
 DiamondDerived_destructor_base(self);
 operator_delete(self,0x30);
 return;
}



/* Function: ~DiamondDerived @ 00102eab */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_deleting_nonvirtual_thunk(DiamondDerived *self)

{
 DiamondDerived_destructor_base(self + -0x10);
 return;
}



/* Function: ~DiamondDerived @ 00102eb5 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_deleting_virtual_thunk(DiamondDerived *self)

{
 DiamondDerived_destructor_base(self + *(long *)(*(long *)self + -0x20));
 return;
}



/* Function: ~DiamondDerived @ 00102ec2 */

/* DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_deleting_complete(DiamondDerived *self)

{
 DiamondDerived_destructor_base(self);
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 87 */
