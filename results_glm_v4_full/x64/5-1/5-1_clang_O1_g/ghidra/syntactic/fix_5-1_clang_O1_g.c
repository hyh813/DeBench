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

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/* Type definitions for C++ structures */
typedef int (*_vfunc_type)(void *, int);
typedef int (*_func_int)(void *, int);

/* Ghidra decompiler types */
typedef void undefined;
typedef int undefined4;
typedef void *undefined_ptr;

/* Standard type aliases */
typedef unsigned long ulong;
typedef unsigned int uint;
typedef int bool;
#define true 1
#define false 0

/* Ghidra macro for concatenating two 32-bit values into 64-bit */
#define CONCAT44(low, high) (((unsigned long long)(high) << 32) | ((unsigned long long)(low) & 0xFFFFFFFF))

/* Forward declarations for C++ classes */
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct DiamondDerived DiamondDerived;
typedef struct BaseA BaseA;
typedef struct BaseB BaseB;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct VirtualBase VirtualBase;
typedef struct SimpleClass SimpleClass;
typedef struct LifecycleClass LifecycleClass;
typedef struct Point Point;
typedef struct BaseException BaseException;
typedef struct DerivedException DerivedException;

/* SimpleClass structure (minimal definition for compilation) */
struct SimpleClass {
    char data[16];
};

/* Point structure */
struct Point {
    int x;
    int y;
};

/* LifecycleClass structure */
struct LifecycleClass {
    int data[5];
};

/* BaseException structure */
struct BaseException {
    _vptr_Base_type _vptr_Base;
};

/* DerivedException structure */
struct DerivedException {
    BaseException base;
};
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;

/* Template specializations */
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;

/* Virtual table pointer type - direct function pointer */
typedef int (*_vfunc_Base)(Base *, int);
typedef _vfunc_Base _vptr_Base_type;
typedef int (*_vfunc_Derived)(Derived *, int);
typedef _vfunc_Derived _vptr_Derived_type;
typedef int (*_vfunc_BaseA)(BaseA *, int);
typedef _vfunc_BaseA _vptr_BaseA_type;
typedef int (*_vfunc_BaseB)(BaseB *, int);
typedef _vfunc_BaseB _vptr_BaseB_type;
typedef int (*_vfunc_MiddleA)(MiddleA *);
typedef _vfunc_MiddleA _vptr_MiddleA_type;
typedef int (*_vfunc_MiddleB)(MiddleB *);
typedef _vfunc_MiddleB _vptr_MiddleB_type;
typedef int (*_vfunc_DiamondDerived)(DiamondDerived *);
typedef _vfunc_DiamondDerived _vptr_DiamondDerived_type;

/* Forward declarations for virtual functions */
int Base_virtual_func(Base *this, int x);
int Derived_virtual_func(Derived *this, int x);
int MultiDerived_funcA(MultiDerived *this);
int MultiDerived_funcB(MultiDerived *this);
int BaseA_funcA(BaseA *this);
int BaseB_funcB(BaseB *this);
int MiddleA_func(MiddleA *this);
int MiddleB_func(MiddleB *this);
int DiamondDerived_func(DiamondDerived *this);
int VirtualBase_func(VirtualBase *this);
int RTTIDerivedA_getType(RTTIDerivedA *this);
int RTTIDerivedB_getType(RTTIDerivedB *this);

/* Forward declarations for destructors */
void Base_dtor(Base *this);
void Base_dtor2(Base *this);
void Derived_dtor(Derived *this);
void MultiDerived_dtor(MultiDerived *this);
void MultiDerived_dtor2(MultiDerived *this);
void DiamondDerived_dtor(DiamondDerived *this);
void DiamondDerived_dtor2(DiamondDerived *this);
void BaseA_dtor(BaseA *this);
void BaseA_dtor2(BaseA *this);
void BaseB_dtor(BaseB *this);
void BaseB_dtor2(BaseB *this);
void MiddleA_dtor(MiddleA *this);
void MiddleA_dtor2(MiddleA *this);
void MiddleB_dtor(MiddleB *this);
void MiddleB_dtor2(MiddleB *this);
void VirtualBase_dtor(VirtualBase *this);
void VirtualBase_dtor2(VirtualBase *this);
void RTTIBase_dtor(RTTIBase *this);
void RTTIDerivedA_dtor(RTTIDerivedA *this);
void RTTIDerivedB_dtor(RTTIDerivedB *this);

/* Forward declarations for virtual thunks */
int _ZThn16_N12MultiDerived5funcBEv(MultiDerived *this);
void _ZThn16_N12MultiDerivedD1Ev(MultiDerived *this);
void _ZThn16_N12MultiDerivedD0Ev(MultiDerived *this);
int _ZTv0_n24_N7MiddleA4funcEv(MiddleA *this);
void _ZTv0_n32_N7MiddleAD1Ev(MiddleA *this);
void _ZTv0_n32_N7MiddleAD0Ev(MiddleA *this);
int _ZTv0_n24_N7MiddleB4funcEv(MiddleB *this);
void _ZTv0_n32_N7MiddleBD1Ev(MiddleB *this);
void _ZTv0_n32_N7MiddleBD0Ev(MiddleB *this);
int _ZThn16_N14DiamondDerived4funcEv(DiamondDerived *this);
void _ZThn16_N14DiamondDerivedD1Ev(DiamondDerived *this);
void _ZThn16_N14DiamondDerivedD0Ev(DiamondDerived *this);
int _ZTv0_n24_N14DiamondDerived4funcEv(DiamondDerived *this);
void _ZTv0_n32_N14DiamondDerivedD1Ev(DiamondDerived *this);
void _ZTv0_n32_N14DiamondDerivedD0Ev(DiamondDerived *this);

/* Forward declarations for container functions */
void Container_int_ctor(Container_int *this);
void Container_int_push(Container_int *this, int value);
int Container_int_get(Container_int *this, int idx);
int Container_int_getSize(Container_int *this);
void Container_double_ctor(Container_double *this);
void Container_double_push(Container_double *this, double value);
double Container_double_get(Container_double *this, int idx);
int Container_double_getSize(Container_double *this);

/* Base class structure */
struct Base {
    _vptr_Base_type _vptr_Base;
};

/* Derived class structure */
struct Derived {
    _vptr_Base_type _vptr_Base;
    int multiplier;
};

/* BaseA structure */
struct BaseA {
    _vptr_BaseA_type _vptr_BaseA;
    int dataA;
};

/* BaseB structure */
struct BaseB {
    _vptr_BaseB_type _vptr_BaseB;
    int dataB;
};

/* MultiDerived structure (multiple inheritance) */
struct MultiDerived {
    BaseA super_BaseA;
    BaseB super_BaseB;
};

/* MiddleA structure */
struct MiddleA {
    _vptr_MiddleA_type _vptr_MiddleA;
    int dataA;
};

/* MiddleB structure */
struct MiddleB {
    _vptr_MiddleB_type _vptr_MiddleB;
    int dataB;
};

/* DiamondDerived structure */
struct DiamondDerived {
    MiddleA super_MiddleA;
    MiddleB super_MiddleB;
};

/* VirtualBase structure */
struct VirtualBase {
    _vptr_Base_type _vptr_Base;
};

/* RTTIBase structure */
struct RTTIBase {
    _vptr_Base_type _vptr_Base;
};

/* RTTIDerivedA structure */
struct RTTIDerivedA {
    _vptr_Base_type _vptr_Base;
};

/* RTTIDerivedB structure */
struct RTTIDerivedB {
    _vptr_Base_type _vptr_Base;
};

/* Container<int> structure */
struct Container_int {
    int size;
    int data[10];
};

/* Container<double> structure */
struct Container_double {
    int size;
    double data[10];
};

/* LifecycleClass static member */
int LifecycleClass_instance_count = 0;

/* External typeinfo references */
extern const void int_typeinfo;
extern const void RTTIBase_typeinfo;
extern const void RTTIDerivedA_typeinfo;
extern const void RTTIDerivedB_typeinfo;

/* Define typeinfo symbols */
const void int_typeinfo = 0;
const void RTTIBase_typeinfo = 0;
const void RTTIDerivedA_typeinfo = 0;
const void RTTIDerivedB_typeinfo = 0;

/* Typeinfo structures */
typedef struct std_type_info std_type_info;
struct std_type_info {
    const char *_name;
};



/* External vtable pointers - define as NULL for compilation */
void *PTR_virtual_func_001059c8 = 0;
void *PTR_virtual_func_00105a08 = 0;
void *PTR_funcA_00105a50 = 0;
void *PTR__ZThn16_N12MultiDerived5funcBEv_00105a80 = 0;
void *PTR__ZTv0_n24_N14DiamondDerived4funcEv_00105bc0 = 0;
void *PTR__RTTIBase_00105d78 = 0;
void *PTR__RTTIBase_00105da0 = 0;

/* External data references - define as empty strings for compilation */
const char DAT_001031e1[1] = "";
const char DAT_0010307d[1] = "";
const char DAT_0010309b[1] = "";
const char DAT_001030b7[1] = "";
const char DAT_001030d3[1] = "";
const char DAT_001030ef[1] = "";
const char DAT_0010310c[1] = "";
const char DAT_00103128[1] = "";
const char DAT_00103144[1] = "";
const char DAT_00103160[1] = "";
const char DAT_0010317c[1] = "";
const char DAT_00103199[1] = "";
const char DAT_001031b6[1] = "";

/* std::ios_base::Init constructor/destructor stubs */
void std_ios_base_Init_Init(struct std_ios_base_Init *this) {
    (void)this;
}

void std_ios_base_Init_dtor(struct std_ios_base_Init *this) {
    (void)this;
}

/* C++ runtime functions */
extern void *__cxa_allocate_exception(size_t);
extern void __cxa_throw(void *, const void *, void (*)(void *));
extern void __dynamic_cast(void *, const void *, const void *, ptrdiff_t);
extern void __cxa_atexit(void (*)(void *), void *, void *);
extern void *__dso_handle;
void *__dso_handle = 0;

/* std::ios_base types */
typedef struct std_ios_base std_ios_base;
struct std_ios_base {
    int dummy;
};

/* std::ios_base::Init type */
typedef struct std_ios_base_Init std_ios_base_Init;
struct std_ios_base_Init {
    int _i_ref;
};

/* Forward declarations for std::ios_base::Init */
void std_ios_base_Init_Init(struct std_ios_base_Init *this);
void std_ios_base_Init_dtor(struct std_ios_base_Init *this);

/* Global objects */
std_ios_base_Init std___ioinit;

/* Memory operators */
extern void *operator_new(size_t);
extern void operator_delete(void *);
extern void *operator_new__(size_t);
extern void operator_delete__(void *);

/* Define operator new/delete implementations */
void *operator_new(size_t size) {
    return malloc(size);
}

void operator_delete(void *ptr) {
    free(ptr);
}

/* Wrapper functions for operator new/delete with double underscores */
void *operator_new__(size_t size) {
    return operator_new(size);
}

void operator_delete__(void *ptr) {
    operator_delete(ptr);
}

/* Built-in functions */
#define builtin_strncpy strncpy

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-1/5-1_clang_O1_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */

/* Forward declarations */
void _GLOBAL__sub_I__5_1_cpp(void);

/* Function: FUN_00102020 @ 00102020 */

void FUN_00102020(void)

{
 ((void (*)(void))0)();
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00102150 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I__5_1_cpp(void)

{
 std_ios_base_Init_Init((std_ios_base_Init *)&std___ioinit);
 std_ios_base_Init_dtor((std_ios_base_Init *)&std___ioinit);
 __cxa_atexit((void (*)(void *))std_ios_base_Init_dtor,(void *)&std___ioinit,(void *)&__dso_handle);
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00102270 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)

{
 size_t sVar1;
 char local_24 [36];
 
 /* Unresolved local var: SimpleClass obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 builtin_strncpy(local_24,"Test",5);
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

int test_cpp_constructor(void)

{
 undefined4 *puVar1;
 long lVar2;
 undefined4 *puVar3;
 int iVar4;
 
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 puVar1 = operator_new__(0x14);
 lVar2 = 0;
 puVar3 = puVar1;
 do {
 /* Unresolved local var: size_t i@[???] */
 *puVar3 = (int)lVar2;
 lVar2 = lVar2 + 10;
 puVar3 = puVar3 + 1;
 } while (lVar2 != 0x32);
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 iVar4 = LifecycleClass_instance_count + puVar1[2];
 operator_delete__(puVar1);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 return LifecycleClass_instance_count * 1000 + iVar4;
}



/* Function: call_virtual_func @ 00102310 */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 
 iVar1 = (*obj->_vptr_Base)(obj, x);
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 00102320 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
 int iVar1;
 int iVar2;
 void *local_20;
 Base local_10;
 
 /* Unresolved local var: Base base@[???]
 Unresolved local var: Derived derived@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: Base * pb@[???]
 Unresolved local var: Base * pd@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r4@[???] */
 local_10._vptr_Base = (_vptr_Base_type)(void *)&PTR_virtual_func_001059c8;
 local_20 = (void *)&PTR_virtual_func_00105a08;
 iVar1 = Base_virtual_func(&local_10,5);
 iVar2 = Base_virtual_func(&local_10,5);
 return iVar2 + iVar1 + 0x15;
}



/* Function: test_cpp_multiple_inheritance @ 00102380 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
 int iVar1;
 int iVar2;
 MultiDerived local_30;
 
 /* Unresolved local var: MultiDerived obj@[???]
 Unresolved local var: BaseB * pb@[???]
 Unresolved local var: BaseA * pa@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int ptr_equal@[???] */
 local_30.super_BaseA._vptr_BaseA = (_vptr_BaseA_type)(void *)&PTR_funcA_00105a50;
 local_30.super_BaseB._vptr_BaseB = (_vptr_BaseB_type)(void *)&PTR__ZThn16_N12MultiDerived5funcBEv_00105a80;
 local_30.super_BaseA.dataA = 100;
 local_30.super_BaseB.dataB = 200;
 iVar1 = MultiDerived_funcA(&local_30);
 iVar2 = ((int (*)(BaseB *, int))local_30.super_BaseB._vptr_BaseB)(&local_30.super_BaseB, 0);
 return iVar2 + iVar1 + 1;
}



/* Function: test_cpp_diamond_inheritance @ 001023e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_diamond_inheritance(void)

{
 int extraout_EAX;
 int iVar1;
 DiamondDerived local_obj;
 
 /* Unresolved local var: DiamondDerived obj@[???]
 Unresolved local var: VirtualBase * pb@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 local_obj.super_MiddleA._vptr_MiddleA = (_vptr_MiddleA_type)(void *)&PTR__ZTv0_n24_N14DiamondDerived4funcEv_00105bc0;
 local_obj.super_MiddleA.dataA = 0x32;
 extraout_EAX = DiamondDerived_func(&local_obj);
 local_obj.super_MiddleA.dataA = 100;
 iVar1 = DiamondDerived_func(&local_obj);
 return iVar1 + extraout_EAX;
}



/* Function: test_cpp_operator_overload @ 00102450 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 /* Unresolved local var: Point p1@[???]
 Unresolved local var: Point p2@[???]
 Unresolved local var: bool eq@[???]
 Unresolved local var: Point p3@[???] */
 return 0x16;
}



/* Function: test_cpp_template_func @ 00102460 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: double r2@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 return 0x27;
}



/* Function: test_cpp_template_class @ 00102470 */

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



/* Function: test_cpp_lambda @ 00102480 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
 /* Unresolved local var: int capture_by_value@[???]
 Unresolved local var: int capture_by_ref@[???]
 Unresolved local var: anon_class_16_2_b9b285fb lambda1@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: anon_class_1_0_00000001 lambda2@[???] */
 return 0x55;
}



/* Function: test_cpp_exception @ 00102490 */

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
 /* try { // try from 001024a5 to 001024b8 has its CatchHandler @ 001024bb */
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,&int_typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 00102550 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
 /* Unresolved local var: unique_ptr<int,_std::default_delete<int>_> ptr1@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)>
 ptr3@[???]
 Unresolved local var: unique_ptr<int[],_std::default_delete<int[]>_>
 arr@[???]
 Unresolved local var: unique_ptr<int,_std::default_delete<int>_> ptr2@[???]
 Unresolved local var: deleter_type deleter@[???] */
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00102560 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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
 
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: RTTIBase * obj2@[???]
 Unresolved local var: int result@[???] */
 plVar3 = operator_new(8);
 *plVar3 = (long)&PTR__RTTIBase_00105d78;
 plVar4 = operator_new(8);
 *plVar4 = (long)&PTR__RTTIBase_00105da0;
 __s1 = "12RTTIDerivedA";
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
 __s1_00 = "12RTTIDerivedB";
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
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 lVar5 = (long)plVar3;
 uVar7 = uVar1 + 100;
 if (lVar5 == 0) {
 uVar7 = uVar1;
 }
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 lVar5 = (long)plVar4;
 uVar1 = uVar7 + 200;
 if (lVar5 == 0) {
 uVar1 = uVar7;
 }
 sVar6 = strlen(__s1);
 RTTIBase_dtor((RTTIBase *)plVar3);
 RTTIBase_dtor((RTTIBase *)plVar4);
 operator_delete(plVar3);
 operator_delete(plVar4);
 return (int)sVar6 + uVar1;
}



/* Function: test_cpp_oo_features @ 001026a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_cpp_oo_features(void)

{
 int iVar1;
 int extraout_EAX;
 int extraout_EAX_00;
 uint uVar2;
 size_t sVar3;
 undefined4 *puVar4;
 undefined4 *puVar5;
 int iVar6;
 long lVar7;
 undefined4 local_48;
 undefined4 uStack_44;
 undefined4 auStack_40 [10];
 Base local_18;
 
 puts(&DAT_001031e1);
 /* Unresolved local var: SimpleClass obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 uStack_44 = 0x74736554;
 auStack_40[0] = 0;
 auStack_40[1] = 0;
 auStack_40[2] = 0;
 auStack_40[3] = 0;
 auStack_40[4] = 0;
 auStack_40[5] = 0;
 auStack_40[6] = 0;
 local_48 = 10;
 sVar3 = strlen((char *)&uStack_44);
 lVar7 = 0;
 printf(&DAT_0010307d,(ulong)((int)sVar3 + 0x125c));
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 puVar4 = operator_new__(0x14);
 /* Unresolved local var: size_t i@[???] */
 puVar5 = puVar4;
 do {
 *puVar5 = (int)lVar7;
 lVar7 = lVar7 + 10;
 puVar5 = puVar5 + 1;
 } while (lVar7 != 0x32);
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 iVar6 = LifecycleClass_instance_count + puVar4[2];
 operator_delete__(puVar4);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 printf(&DAT_0010309b,(ulong)(uint)(LifecycleClass_instance_count * 1000 + iVar6));
 /* Unresolved local var: Base base@[???]
 Unresolved local var: Derived derived@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: Base * pb@[???]
 Unresolved local var: Base * pd@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r4@[???] */
 local_18._vptr_Base = (_vptr_Base_type)&PTR_virtual_func_001059c8;
 iVar6 = Base_virtual_func(&local_18,5);
 iVar1 = Base_virtual_func(&local_18,5);
 printf(&DAT_001030b7,(ulong)(iVar6 + iVar1 + 0x15));
 /* Unresolved local var: MultiDerived obj@[???]
 Unresolved local var: BaseA * pa@[???]
 Unresolved local var: BaseB * pb@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int ptr_equal@[???] */
 local_48 = 0x105a50;
 uStack_44 = 0;
 auStack_40[2] = 0x105a80;
 auStack_40[3] = 0;
 auStack_40[0] = 100;
 auStack_40[4] = 200;
 extraout_EAX = 0x1f;
 printf(&DAT_001030d3,(ulong)(extraout_EAX + 0x1f));
 /* Unresolved local var: DiamondDerived obj@[???]
 Unresolved local var: VirtualBase * pb@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 local_48 = 0x105b58;
 uStack_44 = 0;
 auStack_40[6] = 0x105bc0;
 auStack_40[7] = 0;
 auStack_40[2] = 0x105b88;
 auStack_40[3] = 0;
 auStack_40[8] = 0x32;
 extraout_EAX_00 = 0x32;
 iVar6 = 0x32;
 printf(&DAT_001030ef,(ulong)(uint)(extraout_EAX_00 + iVar6));
 printf(&DAT_0010310c,0x16);
 printf(&DAT_00103128,0x27);
 printf(&DAT_00103144,0x10);
 printf(&DAT_00103160,0x55);
 uVar2 = test_cpp_exception();
 printf(&DAT_0010317c,(ulong)uVar2);
 printf(&DAT_00103199,0x2bf);
 uVar2 = test_cpp_rtti();
 printf(&DAT_001031b6,(ulong)uVar2);
 return;
}



/* Function: main @ 001028f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: virtual_func @ 00102900 */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int Base_virtual_func(Base *this,int x)

{
 return x + 1;
}



/* Function: virtual_func @ 00102910 */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int Derived_virtual_func(Derived *this,int x)

{
 return x * this->multiplier;
}



/* Function: ~Base @ 00102920 */

/* DWARF original prototype: void ~Base(Base * this) */

void Base_dtor(Base *this)

{
 return;
}



/* Function: ~MultiDerived @ 00102930 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this) */

void MultiDerived_dtor(MultiDerived *this)

{
 return;
}



/* Function: ~DiamondDerived @ 00102940 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this) */

void DiamondDerived_dtor(DiamondDerived *this)

{
 return;
}



/* Function: template_max<int> @ 00102950 */

int template_max_int(int a,int b)

{
 if (b < a) {
 b = a;
 }
 return b;
}



/* Function: template_max<double> @ 00102960 */

double template_max_double(double a,double b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_swap<int> @ 00102970 */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container @ 00102980 */

/* DWARF original prototype: void Container(Container<int> * this) */

void Container_int_ctor(Container_int *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 00102990 */

/* DWARF original prototype: void push(Container<int> * this, int value) */

void Container_int_push(Container_int *this,int value)

{
 int iVar1;
 
 iVar1 = this->size;
 if ((long)iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 001029b0 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int Container_int_get(Container_int *this,int idx)

{
 int iVar1;
 
 iVar1 = 0;
 if ((-1 < idx) && (iVar1 = 0, idx < this->size)) {
 iVar1 = this->data[idx];
 }
 return iVar1;
}



/* Function: getSize @ 001029d0 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int Container_int_getSize(Container_int *this)

{
 return this->size;
}



/* Function: Container @ 001029e0 */

/* DWARF original prototype: void Container(Container<double> * this) */

void Container_double_ctor(Container_double *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 001029f0 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void Container_double_push(Container_double *this,double value)

{
 int iVar1;
 
 iVar1 = this->size;
 if ((long)iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00102a10 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double Container_double_get(Container_double *this,int idx)

{
 double dVar1;
 
 dVar1 = 0.0;
 if ((-1 < idx) && (idx < this->size)) {
 dVar1 = this->data[idx];
 }
 return dVar1;
}



/* Function: getSize @ 00102a30 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int Container_double_getSize(Container_double *this)

{
 return this->size;
}



/* Function: getName @ 00102a40 */

/* DWARF original prototype: char * getName(Base * this) */

char * Base_getName(Base *this)

{
 return "Base";
}



/* Function: ~Base @ 00102a50 */

/* DWARF original prototype: void ~Base(Base * this) */

void Base_dtor2(Base *this)

{
 operator_delete(this);
 return;
}



/* Function: getName @ 00102a60 */

/* DWARF original prototype: char * getName(Derived * this) */

char * Derived_getName(Derived *this)

{
 return "Derived";
}



/* Function: ~Derived @ 00102a70 */

/* DWARF original prototype: void ~Derived(Derived * this) */

void Derived_dtor(Derived *this)

{
 operator_delete(this);
 return;
}



/* Function: funcA @ 00102a80 */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int MultiDerived_funcA(MultiDerived *this)

{
 return 0x1e;
}



/* Function: ~MultiDerived @ 00102a90 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this) */

void MultiDerived_dtor2(MultiDerived *this)

{
 operator_delete(this);
 return;
}



/* Function: funcB @ 00102aa0 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int MultiDerived_funcB(MultiDerived *this)

{
 return 0x28;
}



/* Function: _ZThn16_N12MultiDerived5funcBEv @ 00102ab0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _ZThn16_N12MultiDerived5funcBEv(MultiDerived *this)

{
    return MultiDerived_funcB((MultiDerived *)((char *)this - 0x10));
}



/* Function: _ZThn16_N12MultiDerivedD1Ev @ 00102ac0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn16_N12MultiDerivedD1Ev(MultiDerived *this)

{
    MultiDerived_dtor2((MultiDerived *)((char *)this - 0x10));
}



/* Function: _ZThn16_N12MultiDerivedD0Ev @ 00102ad0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn16_N12MultiDerivedD0Ev(MultiDerived *this)

{
 operator_delete((void *)((char *)this - 0x10));
 return;
}



/* Function: funcA @ 00102ae0 */

/* DWARF original prototype: int funcA(BaseA * this) */

int BaseA_funcA(BaseA *this)

{
 return 10;
}



/* Function: ~BaseA @ 00102af0 */

/* DWARF original prototype: void ~BaseA(BaseA * this) */

void BaseA_dtor(BaseA *this)

{
 return;
}



/* Function: ~BaseA @ 00102b00 */

/* DWARF original prototype: void ~BaseA(BaseA * this) */

void BaseA_dtor2(BaseA *this)

{
 operator_delete(this);
 return;
}



/* Function: funcB @ 00102b10 */

/* DWARF original prototype: int funcB(BaseB * this) */

int BaseB_funcB(BaseB *this)

{
 return 0x14;
}



/* Function: ~BaseB @ 00102b20 */

/* DWARF original prototype: void ~BaseB(BaseB * this) */

void BaseB_dtor(BaseB *this)

{
 return;
}



/* Function: ~BaseB @ 00102b30 */

/* DWARF original prototype: void ~BaseB(BaseB * this) */

void BaseB_dtor2(BaseB *this)

{
 operator_delete(this);
 return;
}



/* Function: func @ 00102b40 */

/* DWARF original prototype: int func(MiddleA * this) */

int MiddleA_func(MiddleA *this)

{
 return this->dataA + 0x96;
}



/* Function: ~MiddleA @ 00102b60 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this) */

void MiddleA_dtor(MiddleA *this)

{
 return;
}



/* Function: ~MiddleA @ 00102b70 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this) */

void MiddleA_dtor2(MiddleA *this)

{
 operator_delete(this);
 return;
}



/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 00102b80 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _ZTv0_n24_N7MiddleA4funcEv(MiddleA *this)

{
    return MiddleA_func((MiddleA *)((char *)this - 0x18));
}



/* Function: _ZTv0_n32_N7MiddleAD1Ev @ 00102ba0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n32_N7MiddleAD1Ev(MiddleA *this)

{
    MiddleA_dtor2((MiddleA *)((char *)this - 0x18));
}



/* Function: _ZTv0_n32_N7MiddleAD0Ev @ 00102bb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n32_N7MiddleAD0Ev(MiddleA *this)

{
 operator_delete((void *)((char *)this - 0x18));
 return;
}



/* Function: func @ 00102bc0 */

/* DWARF original prototype: int func(MiddleB * this) */

int MiddleB_func(MiddleB *this)

{
 return this->dataB + 200;
}



/* Function: ~MiddleB @ 00102be0 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this) */

void MiddleB_dtor(MiddleB *this)

{
 return;
}



/* Function: ~MiddleB @ 00102bf0 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this) */

void MiddleB_dtor2(MiddleB *this)

{
 operator_delete(this);
 return;
}



/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 00102c00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _ZTv0_n24_N7MiddleB4funcEv(MiddleB *this)

{
    return MiddleB_func((MiddleB *)((char *)this - 0x18));
}



/* Function: _ZTv0_n32_N7MiddleBD1Ev @ 00102c20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n32_N7MiddleBD1Ev(MiddleB *this)

{
    MiddleB_dtor2((MiddleB *)((char *)this - 0x18));
}



/* Function: _ZTv0_n32_N7MiddleBD0Ev @ 00102c30 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n32_N7MiddleBD0Ev(MiddleB *this)

{
 operator_delete((void *)((char *)this - 0x18));
 return;
}



/* Function: func @ 00102c40 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int DiamondDerived_func(DiamondDerived *this)

{
 return (this->super_MiddleA).dataA + 0xfa;
}



/* Function: ~DiamondDerived @ 00102c60 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this) */

void DiamondDerived_dtor2(DiamondDerived *this)

{
 operator_delete(this);
 return;
}



/* Function: _ZThn16_N14DiamondDerived4funcEv @ 00102c70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _ZThn16_N14DiamondDerived4funcEv(DiamondDerived *this)

{
    return DiamondDerived_func((DiamondDerived *)((char *)this - 0x10));
}



/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 00102c90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn16_N14DiamondDerivedD1Ev(DiamondDerived *this)

{
    DiamondDerived_dtor2((DiamondDerived *)((char *)this - 0x10));
}



/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 00102ca0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn16_N14DiamondDerivedD0Ev(DiamondDerived *this)

{
 operator_delete((void *)((char *)this - 0x10));
 return;
}



/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 00102cb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _ZTv0_n24_N14DiamondDerived4funcEv(DiamondDerived *this)

{
    return DiamondDerived_func((DiamondDerived *)((char *)this - 0x18));
}



/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 00102cd0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n32_N14DiamondDerivedD1Ev(DiamondDerived *this)

{
    DiamondDerived_dtor2((DiamondDerived *)((char *)this - 0x18));
}



/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 00102ce0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n32_N14DiamondDerivedD0Ev(DiamondDerived *this)

{
 operator_delete((void *)((char *)this - 0x18));
 return;
}



/* Function: func @ 00102cf0 */

/* DWARF original prototype: int func(VirtualBase * this) */

int VirtualBase_func(VirtualBase *this)

{
 return 100;
}



/* Function: ~VirtualBase @ 00102d00 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this) */

void VirtualBase_dtor(VirtualBase *this)

{
 return;
}



/* Function: ~VirtualBase @ 00102d10 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this) */

void VirtualBase_dtor2(VirtualBase *this)

{
 operator_delete(this);
 return;
}



/* Function: ~RTTIDerivedA @ 00102d20 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

void RTTIDerivedA_dtor(RTTIDerivedA *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 00102d30 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int RTTIDerivedA_getType(RTTIDerivedA *this)

{
 return 1;
}



/* Function: ~RTTIBase @ 00102d40 */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this) */

void RTTIBase_dtor(RTTIBase *this)

{
 return;
}



/* Function: ~RTTIDerivedB @ 00102d50 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

void RTTIDerivedB_dtor(RTTIDerivedB *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 00102d60 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int RTTIDerivedB_getType(RTTIDerivedB *this)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 83 */
