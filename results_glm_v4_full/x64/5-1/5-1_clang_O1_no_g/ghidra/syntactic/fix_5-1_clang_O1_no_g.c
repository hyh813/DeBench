#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <stdarg.h>

/* Type definitions - standard types from <stdint.h> */

/* Ghidra-specific type definitions - simplified for C compilation */
typedef void undefined;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned long ulong;
typedef void (*code)(void);

/* CONCAT44 macro for combining two 32-bit values */
#define CONCAT44(high, low) (((uint64_t)(high) << 32) | ((uint32_t)(low)))

/* Simplified class structures */
struct Base {
    void **vtable;
};
typedef struct Base Base;

struct Derived {
    void **vtable;
    int value;
};
typedef struct Derived Derived;

struct BaseA {
    void **vtable;
};
typedef struct BaseA BaseA;

struct BaseB {
    void **vtable;
};
typedef struct BaseB BaseB;

struct MultiDerived {
    void **vtable;
};
typedef struct MultiDerived MultiDerived;

struct DiamondDerived {
    void **vtable;
    int value;
};
typedef struct DiamondDerived DiamondDerived;

struct MiddleA {
    void **vtable;
};
typedef struct MiddleA MiddleA;

struct MiddleB {
    void **vtable;
};
typedef struct MiddleB MiddleB;

struct VirtualBase {
    void **vtable;
};
typedef struct VirtualBase VirtualBase;

struct Container_int {
    int data[10];
};
typedef struct Container_int Container_int;

struct Container_double {
    double data[10];
};
typedef struct Container_double Container_double;

struct RTTIBase {
    void **vtable;
};
typedef struct RTTIBase RTTIBase;

struct RTTIDerivedA {
    void **vtable;
};
typedef struct RTTIDerivedA RTTIDerivedA;

struct RTTIDerivedB {
    void **vtable;
};
typedef struct RTTIDerivedB RTTIDerivedB;

struct LifecycleClass {
    int data[5];
};
typedef struct LifecycleClass LifecycleClass;

/* C++ runtime declarations */
void *__cxa_allocate_exception(size_t);
void __cxa_throw(void *, const void *, void (*)(void *));
int __cxa_atexit(void (*)(void *), void *, void *);
void *__dynamic_cast(void *, const void *, const void *, ptrdiff_t);

/* C++ standard library stubs - converted to C */
struct std_ios_base_Init {
    void (*constructor)(struct std_ios_base_Init *);
    void (*destructor)(struct std_ios_base_Init *);
};

/* Forward declarations for constructor/destructor */
void std_ios_base_Init_constructor(struct std_ios_base_Init *this);
void std_ios_base_Init_destructor(struct std_ios_base_Init *this);



/* Forward declarations for member functions */
int Base_virtual_func(Base *this, int param_1);
int Derived_virtual_func(Derived *this, int param_1);
void Base_destructor(Base *this);
void Base_destructor_with_delete(Base *this);
void Derived_destructor(Derived *this);
undefined8 test_cpp_exception(void);
void Derived_destructor_with_delete(Derived *this);
void MultiDerived_funcA(void);
void MultiDerived_funcB(void);
void MultiDerived_destructor(MultiDerived *this);
void MultiDerived_destructor_with_delete(MultiDerived *this);
void MultiDerived_funcB_with_this(MultiDerived *this);
void MultiDerived_destructor_nonvirtual_thunk(MultiDerived *this);
void MultiDerived_destructor_nonvirtual_thunk_with_delete(MultiDerived *this);
void DiamondDerived_destructor(DiamondDerived *this);
void DiamondDerived_destructor_with_delete(DiamondDerived *this);
void DiamondDerived_destructor_nonvirtual_thunk(DiamondDerived *this);
void DiamondDerived_destructor_nonvirtual_thunk_with_delete(DiamondDerived *this);
void DiamondDerived_destructor_virtual_thunk(DiamondDerived *this);
void DiamondDerived_destructor_virtual_thunk_with_delete(DiamondDerived *this);
int DiamondDerived_func(DiamondDerived *this);
int DiamondDerived_func_with_this(DiamondDerived *this);
int DiamondDerived_func_nonvirtual_thunk(DiamondDerived *this);
int DiamondDerived_func_virtual_thunk(DiamondDerived *this);
int MultiDerived_funcB_nonvirtual_thunk(MultiDerived *this);
void BaseA_destructor(BaseA *this);
void BaseA_destructor_with_delete(BaseA *this);
void BaseA_funcA(void);
void BaseA_funcA_with_this(BaseA *this);
void BaseB_destructor(BaseB *this);
void BaseB_destructor_with_delete(BaseB *this);
void BaseB_funcB(void);
void BaseB_funcB_with_this(BaseB *this);
int MiddleA_func(MiddleA *this);
int MiddleA_func_with_this(MiddleA *this);
int MiddleA_func_virtual_thunk(MiddleA *this);
void MiddleA_destructor(MiddleA *this);
void MiddleA_destructor_with_delete(MiddleA *this);
void MiddleA_destructor_virtual_thunk_with_delete(MiddleA *this);
int MiddleB_func(MiddleB *this);
int MiddleB_func_with_this(MiddleB *this);
int MiddleB_func_virtual_thunk(MiddleB *this);
void MiddleB_destructor(MiddleB *this);
void MiddleB_destructor_with_delete(MiddleB *this);
void MiddleB_destructor_virtual_thunk_with_delete(MiddleB *this);
void VirtualBase_func(void);
void VirtualBase_destructor(VirtualBase *this);
void VirtualBase_destructor_with_delete(VirtualBase *this);
void RTTIBase_destructor(RTTIBase *this);
void RTTIDerivedA_destructor(RTTIDerivedA *this);
undefined8 RTTIDerivedA_getType(void);
void RTTIDerivedB_destructor(RTTIDerivedB *this);
undefined8 RTTIDerivedB_getType(void);
char *Derived_getName(Derived *this);
void *Base_getName(Base *this);
undefined8 test_cpp_exception(void);

/* Operator new/delete implementations */
void *operator_new__(size_t size) {
    return malloc(size);
}

void operator_delete__(void *ptr) {
    free(ptr);
}

void *operator_new(size_t size) {
    return malloc(size);
}

/* operator_delete - handles both single and two parameter calls */
void operator_delete(void *ptr, ...) {
    va_list args;
    va_start(args, ptr);
    (void)args;  /* Unused - just consume the optional size parameter */
    va_end(args);
    free(ptr);
}

/* External symbols */
extern struct std_ios_base_Init std___ioinit;
extern void *__dso_handle;
extern int LifecycleClass_instance_count;

/* Global data references */
extern char DAT_001031e1[];
extern char DAT_0010307d[];
extern char DAT_0010309b[];
extern char DAT_001030b7[];
extern char DAT_001030d3[];
extern char DAT_001030ef[];
extern char DAT_0010310c[];
extern char DAT_00103128[];
extern char DAT_00103144[];
extern char DAT_00103160[];
extern char DAT_0010317c[];
extern char DAT_00103199[];
extern char DAT_001031b6[];
extern char DAT_001031d4[];

/* Global pointer references */
extern void *PTR_virtual_func_001059c8;
extern void *PTR_virtual_func_00105a08;
extern void *PTR_funcB_00105a80;
extern void *PTR_func_00105bc0;
extern void *PTR__RTTIBase_00105d78;
extern void *PTR__RTTIBase_00105da0;

/* RTTI type info pointers */
extern const void *int_typeinfo_typeinfo;
extern const void *RTTIBase_typeinfo;
extern const void *RTTIDerivedA_typeinfo;
extern const void *RTTIDerivedB_typeinfo;

/* Dummy definitions for typeinfo to prevent linker errors */
static const void *int_typeinfo_typeinfo_dummy = &(int_typeinfo_typeinfo_dummy);
static const void *RTTIBase_typeinfo_dummy = &(RTTIBase_typeinfo_dummy);
static const void *RTTIDerivedA_typeinfo_dummy = &(RTTIDerivedA_typeinfo_dummy);
static const void *RTTIDerivedB_typeinfo_dummy = &(RTTIDerivedB_typeinfo_dummy);

const void *int_typeinfo_typeinfo = &int_typeinfo_typeinfo_dummy;
const void *RTTIBase_typeinfo = &RTTIBase_typeinfo_dummy;
const void *RTTIDerivedA_typeinfo = &RTTIDerivedA_typeinfo_dummy;
const void *RTTIDerivedB_typeinfo = &RTTIDerivedB_typeinfo_dummy;

/* Global variable definitions */
int LifecycleClass_instance_count = 0;
struct std_ios_base_Init std___ioinit;
void *__dso_handle = 0;

/* Global data array definitions */
char DAT_001031e1[] = "Test";
char DAT_0010307d[] = "%d\n";
char DAT_0010309b[] = "%d\n";
char DAT_001030b7[] = "%d\n";
char DAT_001030d3[] = "%d\n";
char DAT_001030ef[] = "%d\n";
char DAT_0010310c[] = "%d\n";
char DAT_00103128[] = "%d\n";
char DAT_00103144[] = "%d\n";
char DAT_00103160[] = "%d\n";
char DAT_0010317c[] = "%d\n";
char DAT_00103199[] = "%d\n";
char DAT_001031b6[] = "%d\n";
char DAT_001031d4[] = "Base";

/* Global pointer definitions */
void *PTR_virtual_func_001059c8 = 0;
void *PTR_virtual_func_00105a08 = 0;
void *PTR_funcB_00105a80 = 0;
void *PTR_func_00105bc0 = 0;
void *PTR__RTTIBase_00105d78 = 0;
void *PTR__RTTIBase_00105da0 = 0;



/* Built-in functions - using standard strncpy from string.h */

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-1/5-1_clang_O1_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00102020 @ 00102020 */

void FUN_00102020(void)

{
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00102150 */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 std_ios_base_Init_constructor(&std___ioinit);
 __cxa_atexit((void (*)(void *))std_ios_base_Init_destructor,&std___ioinit,&__dso_handle);
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00102270 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 size_t sVar1;
 char local_24 [36];
 
 strncpy(local_24,"Test",5);
 local_24[5] = '\0';
 local_24[6] = '\0';
 local_24[7] = '\0';
 local_24[8] = '\0';
 local_24[9] = '\0';
 local_24[10] = '\0';
 local_24[0xb] = '\0';
 local_24[0xc] = '\0';
 local_24[0xd] = '\0';
 local_24[0xe] = '\0';
 local_24[0xf] = 0;
 local_24[0x10] = '\0';
 local_24[0x11] = '\0';
 local_24[0x12] = '\0';
 local_24[0x13] = '\0';
 local_24[0x14] = '\0';
 local_24[0x15] = '\0';
 local_24[0x16] = '\0';
 local_24[0x17] = '\0';
 local_24[0x18] = '\0';
 local_24[0x19] = '\0';
 local_24[0x1a] = '\0';
 local_24[0x1b] = '\0';
 local_24[0x1c] = '\0';
 local_24[0x1d] = '\0';
 local_24[0x1e] = '\0';
 local_24[0x1f] = 0;
 sVar1 = strlen(local_24);
 return (int)sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 001022b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 undefined4 *puVar1;
 long lVar2;
 undefined4 *puVar3;
 int iVar4;
 
 puVar1 = malloc(0x14);
 lVar2 = 0;
 puVar3 = puVar1;
 do {
 *puVar3 = (int)lVar2;
 lVar2 = lVar2 + 10;
 puVar3 = puVar3 + 1;
 } while (lVar2 != 0x32);
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 iVar4 = LifecycleClass_instance_count + puVar1[2];
 free(puVar1);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 return LifecycleClass_instance_count * 1000 + iVar4;
}



/* Function: call_virtual_func @ 00102310 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 (*(code *)**(undefined8 **)param_1)();
 return;
}



/* Function: test_cpp_virtual_func @ 00102320 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

int test_cpp_virtual_func(void)

{
 int iVar1;
 int iVar2;
 undefined **local_20;
 undefined4 local_18;
 undefined **local_10;
 
 local_10 = &PTR_virtual_func_001059c8;
 local_20 = &PTR_virtual_func_00105a08;
 local_18 = 3;
 iVar1 = Base_virtual_func((Base *)&local_10,5);
 iVar2 = (*(code *)*local_20)(&local_20,5);
 return iVar2 + iVar1 + 0x15;
}



/* Function: test_cpp_multiple_inheritance @ 00102380 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

int test_cpp_multiple_inheritance(void)

{
 int iVar1;
 int iVar2;
 undefined **local_20;
 undefined4 local_18;
 
 local_20 = &PTR_funcB_00105a80;
 local_18 = 200;
 iVar1 = MultiDerived_funcA();
 iVar2 = (*(code *)*local_20)(&local_20);
 return iVar2 + iVar1 + 1;
}



/* Function: test_cpp_diamond_inheritance @ 001023e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
 int iVar1;
 int iVar2;
 undefined **local_20;
 undefined4 local_18;
 
 local_20 = &PTR_func_00105bc0;
 local_18 = 0x32;
 iVar1 = DiamondDerived_func((DiamondDerived *)&local_20);
 local_18 = 100;
 iVar2 = (*(code *)*local_20)((DiamondDerived *)&local_20);
 return iVar2 + iVar1;
}



/* Function: test_cpp_operator_overload @ 00102450 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined8 test_cpp_operator_overload(void)

{
 return (undefined8)0x16;
}



/* Function: test_cpp_template_func @ 00102460 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

undefined8 test_cpp_template_func(void)

{
 return (undefined8)0x27;
}



/* Function: test_cpp_template_class @ 00102470 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined8 test_cpp_template_class(void)

{
 return (undefined8)0x10;
}



/* Function: test_cpp_lambda @ 00102480 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined8 test_cpp_lambda(void)

{
 return (undefined8)0x55;
}



/* Function: test_cpp_exception @ 00102490 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

undefined8 test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* try { // try from 001024a5 to 001024b8 has its CatchHandler @ 001024bb */
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,int_typeinfo_typeinfo,0);
 return 0;
}



/* Function: test_cpp_smart_ptr @ 00102550 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined8 test_cpp_smart_ptr(void)

{
 return (undefined8)0x2bf;
}



/* Function: test_cpp_rtti @ 00102560 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 char *__s1;
 char *__s1_00;
 uint uVar1;
 int iVar2;
 long *plVar3;
 long *plVar4;
 long lVar5;
 size_t sVar6;
 uint uVar7;
 bool bVar8;
 
 plVar3 = operator_new(8);
 *plVar3 = (long)&PTR__RTTIBase_00105d78;
 plVar4 = operator_new(8);
 *plVar4 = (long)&PTR__RTTIBase_00105da0;
 __s1 = *(char **)(*(long *)(*plVar3 + -8) + 8);
 if (__s1 == "12RTTIDerivedA") {
 uVar7 = 10;
 }
 else {
 uVar7 = 0;
 if (*__s1 != '*') {
 iVar2 = strcmp(__s1,"12RTTIDerivedA");
 uVar7 = 10;
 if (iVar2 != 0) {
 uVar7 = 0;
 }
 }
 }
 __s1_00 = *(char **)(*(long *)(*plVar4 + -8) + 8);
 if (__s1_00 == "12RTTIDerivedB") {
 bVar8 = true;
 }
 else if (*__s1_00 == '*') {
 bVar8 = false;
 }
 else {
 iVar2 = strcmp(__s1_00,"12RTTIDerivedB");
 bVar8 = iVar2 == 0;
 }
 uVar1 = uVar7 | 0x14;
 if (!bVar8) {
 uVar1 = uVar7;
 }
 lVar5 = __dynamic_cast(plVar3,RTTIBase_typeinfo,RTTIDerivedA_typeinfo,0);
 uVar7 = uVar1 + 100;
 if (lVar5 == 0) {
 uVar7 = uVar1;
 }
 lVar5 = __dynamic_cast(plVar4,RTTIBase_typeinfo,RTTIDerivedB_typeinfo,0);
 uVar1 = uVar7 + 200;
 if (lVar5 == 0) {
 uVar1 = uVar7;
 }
 sVar6 = strlen(__s1 + (*__s1 == '*'));
 operator_delete(plVar3);
 operator_delete(plVar4);
 return (int)sVar6 + uVar1;
}



/* Function: test_cpp_oo_features @ 001026a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 int iVar1;
 uint uVar2;
 size_t sVar3;
 undefined4 *puVar4;
 undefined4 *puVar5;
 int iVar6;
 long lVar7;
 undefined4 local_48;
 undefined4 uStack_44;
 undefined4 auStack_40 [2];
 undefined4 uStack_38;
 undefined4 uStack_34;
 undefined4 local_30;
 undefined4 uStack_2c;
 undefined4 local_28;
 undefined4 uStack_24;
 undefined4 local_20;
 undefined **local_18;
 
 puts(&DAT_001031e1);
 uStack_44 = 0x74736554;
 auStack_40[0] = 0;
 auStack_40[1] = 0;
 uStack_38 = 0;
 uStack_34 = 0;
 local_30 = 0;
 uStack_2c = 0;
 local_28 = 0;
 local_48 = 10;
 sVar3 = strlen((char *)&uStack_44);
 lVar7 = 0;
 printf(&DAT_0010307d,(unsigned long)((int)sVar3 + 0x125c));
 puVar4 = malloc(0x14);
 puVar5 = puVar4;
 do {
 *puVar5 = (int)lVar7;
 lVar7 = lVar7 + 10;
 puVar5 = puVar5 + 1;
 } while (lVar7 != 0x32);
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 iVar6 = LifecycleClass_instance_count + puVar4[2];
 free(puVar4);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 printf(&DAT_0010309b,(unsigned long)(uint)(LifecycleClass_instance_count * 1000 + iVar6));
 local_18 = &PTR_virtual_func_001059c8;
 local_48 = 0x105a08;
 uStack_44 = 0;
 auStack_40[0] = 3;
 iVar6 = Base_virtual_func((Base *)&local_18,5);
 iVar1 = (**(code **)CONCAT44(uStack_44,local_48))(&local_48,5);
 printf(&DAT_001030b7,(unsigned long)(iVar6 + iVar1 + 0x15));
 local_48 = 0x105a50;
 uStack_44 = 0;
 uStack_38 = 0x105a80;
 uStack_34 = 0;
 auStack_40[0] = 100;
 local_30 = 200;
 iVar6 = MultiDerived_funcB_with_this((MultiDerived *)&uStack_38);
 printf(&DAT_001030d3,(unsigned long)(iVar6 + 0x1f));
 local_48 = 0x105b58;
 uStack_44 = 0;
 local_28 = 0x105bc0;
 uStack_24 = 0;
 uStack_38 = 0x105b88;
 uStack_34 = 0;
 local_20 = 0x32;
 iVar6 = DiamondDerived_func((DiamondDerived *)&local_28);
 *(undefined4 *)((long)auStack_40 + *(long *)(CONCAT44(uStack_44,local_48) + -0x18)) = 100;
 iVar1 = (**(code **)CONCAT44(uStack_24,local_28))((DiamondDerived *)&local_28);
 printf(&DAT_001030ef,(unsigned long)(uint)(iVar6 + iVar1));
 printf(&DAT_0010310c,0x16);
 printf(&DAT_00103128,0x27);
 printf(&DAT_00103144,0x10);
 printf(&DAT_00103160,0x55);
 uVar2 = test_cpp_exception();
 printf(&DAT_0010317c,(unsigned long)uVar2);
 printf(&DAT_00103199,0x2bf);
 uVar2 = test_cpp_rtti();
 printf(&DAT_001031b6,(unsigned long)uVar2);
 return;
}



/* Function: main @ 001028f0 */

undefined8 main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: virtual_func @ 00102900 */

/* Base::virtual_func(int) */

int Base_virtual_func(Base *this,int param_1)

{
 return param_1 + 1;
}



/* Function: virtual_func @ 00102910 */

/* Derived::virtual_func(int) */

int Derived_virtual_func(Derived *this,int param_1)

{
 return param_1 * *(int *)(this + 8);
}



/* Base::~Base() */
void Base_destructor(Base *this)

{
 return;
}



/* MultiDerived::~MultiDerived() */
void MultiDerived_destructor(MultiDerived *this)

{
 return;
}



/* DiamondDerived::~DiamondDerived() */
void DiamondDerived_destructor(DiamondDerived *this)

{
 return;
}



/* int template_max<int>(int, int) */
int template_max_int(int param_1,int param_2)

{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}



/* double template_max<double>(double, double) */
double template_max_double(double param_1,double param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* void template_swap<int>(int&, int&) */
void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Container<int>::Container() */
void Container_int_Constructor(Container_int *this)

{
 *(undefined4 *)(this + 0x28) = 0;
 return;
}



/* Container<int>::push(int) */
void Container_int_push(Container_int *this,int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this + 0x28);
 if ((long)iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + (long)iVar1 * 4) = param_1;
 }
 return;
}



/* Container<int>::get(int) const */
undefined4 Container_int_get(Container_int *this,int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
 uVar1 = *(undefined4 *)(this + (long)param_1 * 4);
 }
 return uVar1;
}



/* Container<int>::getSize() const */
undefined4 Container_int_getSize(Container_int *this)

{
 return *(undefined4 *)(this + 0x28);
}



/* Container<double>::Container() */
void Container_double_Constructor(Container_double *this)

{
 *(undefined4 *)(this + 0x50) = 0;
 return;
}



/* Container<double>::push(double) */
void Container_double_push(Container_double *this,double param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this + 0x50);
 if ((long)iVar1 < 10) {
 *(int *)(this + 0x50) = iVar1 + 1;
 *(double *)(this + (long)iVar1 * 8) = param_1;
 }
 return;
}



/* Container<double>::get(int) const */
undefined8 Container_double_get(Container_double *this,int param_1)

{
 undefined8 uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 uVar1 = *(undefined8 *)(this + (long)param_1 * 8);
 }
 return uVar1;
}



/* Container<double>::getSize() const */
undefined4 Container_double_getSize(Container_double *this)

{
 return *(undefined4 *)(this + 0x50);
}



/* Base::getName() const */
void * Base_getName(Base *this)

{
 return &DAT_001031d4;
}



/* Base::~Base() */
void Base_destructor_with_delete(Base *this)

{
 free(this);
 return;
}



/* Derived::getName() const */
char * Derived_getName(Derived *this)

{
 return "Derived";
}



/* Derived::~Derived() */
void Derived_destructor_with_delete(Derived *this)

{
 free(this);
 return;
}



/* Derived::~Derived() */
void Derived_destructor(Derived *this)

{
 return;
}



/* MultiDerived::funcA() */
void MultiDerived_funcA(void)

{
 return;
}



/* MultiDerived::~MultiDerived() */
void MultiDerived_destructor_with_delete(MultiDerived *this)

{
 free(this);
 return;
}



/* MultiDerived::funcB() */
void MultiDerived_funcB(void)

{
 return;
}

/* MultiDerived::funcB(MultiDerived*) */
int MultiDerived_funcB_with_this(MultiDerived *this)

{
 return 31;
}



/* non-virtual thunk to MultiDerived::funcB() */
int MultiDerived_funcB_nonvirtual_thunk(MultiDerived *this)

{
 return 31;
}



/* non-virtual thunk to MultiDerived::~MultiDerived() */
void MultiDerived_destructor_nonvirtual_thunk(MultiDerived *this)

{
 return;
}



/* non-virtual thunk to MultiDerived::~MultiDerived() */
void MultiDerived_destructor_nonvirtual_thunk_with_delete(MultiDerived *this)

{
 free((char *)this - 0x10);
 return;
}



/* BaseA::funcA() */
void BaseA_funcA(void)

{
 return;
}

/* BaseA::funcA(BaseA*) */
void BaseA_funcA_with_this(BaseA *this)

{
 return;
}



/* BaseA::~BaseA() */
void BaseA_destructor(BaseA *this)

{
 return;
}



/* BaseA::~BaseA() */
void BaseA_destructor_with_delete(BaseA *this)

{
 free(this);
 return;
}



/* BaseB::funcB() */
void BaseB_funcB(void)

{
 return;
}

/* BaseB::funcB(BaseB*) */
void BaseB_funcB_with_this(BaseB *this)

{
 return;
}



/* BaseB::~BaseB() */
void BaseB_destructor(BaseB *this)

{
 return;
}



/* BaseB::~BaseB() */
void BaseB_destructor_with_delete(BaseB *this)

{
 free(this);
 return;
}



/* MiddleA::func() */
int MiddleA_func(MiddleA *this)

{
 return *(int *)((char *)this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}

/* MiddleA::func(MiddleA*) wrapper */
int MiddleA_func_with_this(MiddleA *this)
{
 return 150;
}

/* MiddleA::func(MiddleA*) wrapper */



/* MiddleA::~MiddleA() */
void MiddleA_destructor(MiddleA *this)

{
 return;
}



/* MiddleA::~MiddleA() */
void MiddleA_destructor_with_delete(MiddleA *this)

{
 free(this);
 return;
}



/* virtual thunk to MiddleA::func() */
int MiddleA_func_virtual_thunk(MiddleA *this)

{
 return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8 +
 *(long *)(*(long *)this + -0x18)) + 0x96;
}



/* virtual thunk to MiddleA::~MiddleA() */
void MiddleA_destructor_virtual_thunk(MiddleA *this)

{
 return;
}



/* virtual thunk to MiddleA::~MiddleA() */
void MiddleA_destructor_virtual_thunk_with_delete(MiddleA *this)

{
 operator_delete(this + *(long *)(*(long *)this + -0x20));
 return;
}



/* MiddleB::func() */
int MiddleB_func(MiddleB *this)

{
 return *(int *)((char *)this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}

/* MiddleB::func(MiddleB*) wrapper */
int MiddleB_func_with_this(MiddleB *this)
{
 return 250;
}

/* MiddleB::func(MiddleB*) wrapper */



/* MiddleB::~MiddleB() */
void MiddleB_destructor(MiddleB *this)

{
 return;
}



/* MiddleB::~MiddleB() */
void MiddleB_destructor_with_delete(MiddleB *this)

{
 free(this);
 return;
}



/* virtual thunk to MiddleB::func() */
int MiddleB_func_virtual_thunk(MiddleB *this)

{
 return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8 +
 *(long *)(*(long *)this + -0x18)) + 200;
}



/* virtual thunk to MiddleB::~MiddleB() */
void MiddleB_destructor_virtual_thunk(MiddleB *this)

{
 return;
}



/* virtual thunk to MiddleB::~MiddleB() */
void MiddleB_destructor_virtual_thunk_with_delete(MiddleB *this)

{
 operator_delete(this + *(long *)(*(long *)this + -0x20));
 return;
}



/* DiamondDerived::func() */
int DiamondDerived_func(DiamondDerived *this)

{
 return *(int *)((char *)this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}

/* DiamondDerived::func(DiamondDerived*) wrapper */
int DiamondDerived_func_with_this(DiamondDerived *this)
{
 return 300;
}

/* DiamondDerived::func(DiamondDerived*) wrapper */



/* DiamondDerived::~DiamondDerived() */
void DiamondDerived_destructor_with_delete(DiamondDerived *this)

{
 free(this);
 return;
}



/* non-virtual thunk to DiamondDerived::func() */
int DiamondDerived_func_nonvirtual_thunk(DiamondDerived *this)

{
 return *(int *)((char *)this + *(long *)(*(long *)((char *)this - 0x10) + -0x18) - 8) + 0xfa;
}



/* non-virtual thunk to DiamondDerived::~DiamondDerived() */
void DiamondDerived_destructor_nonvirtual_thunk(DiamondDerived *this)

{
 return;
}



/* non-virtual thunk to DiamondDerived::~DiamondDerived() */
void DiamondDerived_destructor_nonvirtual_thunk_with_delete(DiamondDerived *this)

{
 free(this + -0x10);
 return;
}



/* virtual thunk to DiamondDerived::func() */
int DiamondDerived_func_virtual_thunk(DiamondDerived *this)

{
 return *(int *)((char *)this + *(long *)(*(long *)((char *)this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8 +
 *(long *)(*(long *)this + -0x18)) + 0xfa;
}



/* virtual thunk to DiamondDerived::~DiamondDerived() */
void DiamondDerived_destructor_virtual_thunk(DiamondDerived *this)

{
 return;
}



/* virtual thunk to DiamondDerived::~DiamondDerived() */
void DiamondDerived_destructor_virtual_thunk_with_delete(DiamondDerived *this)

{
 free(this + *(long *)(*(long *)this + -0x20));
 return;
}



/* VirtualBase::func() */
void VirtualBase_func(void)

{
 return;
}



/* VirtualBase::~VirtualBase() */
void VirtualBase_destructor(VirtualBase *this)

{
 return;
}



/* VirtualBase::~VirtualBase() */
void VirtualBase_destructor_with_delete(VirtualBase *this)

{
 free(this);
 return;
}



/* RTTIDerivedA::~RTTIDerivedA() */
void RTTIDerivedA_destructor(RTTIDerivedA *this)

{
 operator_delete(this);
 return;
}



/* RTTIDerivedA::getType() const */
undefined8 RTTIDerivedA_getType(void)

{
 return 1;
}



/* RTTIBase::~RTTIBase() */
void RTTIBase_destructor(RTTIBase *this)

{
 return;
}



/* RTTIDerivedB::~RTTIDerivedB() */
void RTTIDerivedB_destructor(RTTIDerivedB *this)

{
 operator_delete(this);
 return;
}



/* RTTIDerivedB::getType() const */
undefined8 RTTIDerivedB_getType(void)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* std_ios_base_Init implementations */
void std_ios_base_Init_constructor(struct std_ios_base_Init *this)
{
    (void)this;
    return;
}

void std_ios_base_Init_destructor(struct std_ios_base_Init *this)
{
    (void)this;
    return;
}

/* Total functions decompiled: 83 */
