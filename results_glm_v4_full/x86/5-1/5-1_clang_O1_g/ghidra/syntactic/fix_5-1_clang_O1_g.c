/* Auto-injected type definitions by preprocessor */
#include <stdint.h>
/* size_t, ssize_t, uintptr_t, intptr_t, ptrdiff_t are already defined by standard headers */

/* Standard C/C++ includes */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stddef.h>



/* Additional type definitions for decompiled code */
typedef void undefined;
typedef uint32_t undefined4;
typedef uint8_t undefined1;
typedef uint16_t undefined2;
typedef struct { uint8_t data[3]; } undefined3;

/* std::ios_base definition - converted to C */
struct std_ios_base_Init {
    void (*ctor)(struct std_ios_base_Init *);
    void (*dtor)(struct std_ios_base_Init *);
};

/* Forward declarations for structs used in virtual functions */
struct VirtualBase;
struct Base;
struct Derived;
struct MultiDerived;
struct DiamondDerived;
struct BaseA;
struct BaseB;
struct MiddleA;
struct MiddleB;
struct RTTIDerivedA;
struct RTTIDerivedB;

/* Forward declarations for virtual functions */
int Base_virtual_func(struct Base *this, int x);
int Derived_virtual_func(struct Derived *this, int x);
int MultiDerived_funcA(struct MultiDerived *this);
int MultiDerived_funcB(struct MultiDerived *this);
int DiamondDerived_func(struct DiamondDerived *this);
int VirtualBase_func(struct VirtualBase *this);
int RTTIDerivedA_getType(struct RTTIDerivedA *this);
int RTTIDerivedB_getType(struct RTTIDerivedB *this);

/* Forward declarations for mangled name functions */
int _ZTv0_n12_N14DiamondDerived4funcEv(struct VirtualBase *this);
int _ZThn8_N12MultiDerived5funcBEv(struct BaseB *this);
int _ZThn8_N12MultiDerived5funcAEv(struct BaseA *this);
void _ZThn8_N12MultiDerivedD1Ev(struct BaseB *this);
void _ZThn8_N12MultiDerivedD0Ev(struct BaseB *this);
int _ZTv0_n12_N7MiddleA4funcEv(struct VirtualBase *this);
void _ZTv0_n16_N7MiddleAD1Ev(struct VirtualBase *this);
void _ZTv0_n16_N7MiddleAD0Ev(struct VirtualBase *this);
int _ZTv0_n12_N7MiddleB4funcEv(struct VirtualBase *this);
void _ZTv0_n16_N7MiddleBD1Ev(struct VirtualBase *this);
void _ZTv0_n16_N7MiddleBD0Ev(struct VirtualBase *this);
int _ZThn8_N14DiamondDerived4funcEv(struct MiddleB *this);
void _ZThn8_N14DiamondDerivedD1Ev(struct MiddleB *this);
void _ZThn8_N14DiamondDerivedD0Ev(struct MiddleB *this);
void _ZTv0_n16_N14DiamondDerivedD1Ev(struct VirtualBase *this);
void _ZTv0_n16_N14DiamondDerivedD0Ev(struct VirtualBase *this);

/* Class definitions */
struct VirtualBase {
    void **_vptr_VirtualBase;
};
typedef struct VirtualBase VirtualBase;

struct Base {
    void **_vptr_Base;
    int multiplier;
};
typedef struct Base Base;

struct Derived {
    struct Base base;
    int multiplier;
    void **_vptr_Derived;
};
typedef struct Derived Derived;

struct BaseA {
    void **_vptr_BaseA;
    int dataA;
};
typedef struct BaseA BaseA;

struct BaseB {
    void **_vptr_BaseB;
    int dataB;
};
typedef struct BaseB BaseB;

struct MiddleA {
    struct VirtualBase *virtual_base;
    void **_vptr_MiddleA;
    int dataA;
};
typedef struct MiddleA MiddleA;

struct MiddleB {
    struct VirtualBase *virtual_base;
    void **_vptr_MiddleB;
    int dataB;
};
typedef struct MiddleB MiddleB;

struct MultiDerived {
    struct BaseA super_BaseA;
    struct BaseB super_BaseB;
};
typedef struct MultiDerived MultiDerived;

struct DiamondDerived {
    struct MiddleA super_MiddleA;
    struct MiddleB super_MiddleB;
};
typedef struct DiamondDerived DiamondDerived;

struct SimpleClass {
    char data[36];
};
typedef struct SimpleClass SimpleClass;

struct LifecycleClass {
    int data[5];
};
typedef struct LifecycleClass LifecycleClass;

struct Point {
    int x, y;
};
typedef struct Point Point;

struct RTTIBase {
    const struct std_type_info *typeinfo;
    int (*_vptr_RTTIBase)(void *);
};
typedef struct RTTIBase RTTIBase;

struct RTTIDerivedA {
    const struct std_type_info *typeinfo;
    int (*_vptr_RTTIDerivedA)(void *);
};
typedef struct RTTIDerivedA RTTIDerivedA;

struct RTTIDerivedB {
    const struct std_type_info *typeinfo;
    int (*_vptr_RTTIDerivedB)(void *);
};
typedef struct RTTIDerivedB RTTIDerivedB;

struct Container_int {
    int size;
    int data[10];
};
typedef struct Container_int Container_int;

struct Container_double {
    int size;
    double data[10];
};
typedef struct Container_double Container_double;

/* Function pointer type definitions */
typedef void (*code)(void);
typedef int (*_func_int)(void);
typedef int (*code_int)(void *, int);

/* C++ exception and runtime support */
extern void __cxa_atexit(void (*func)(void*), void* obj, void* dso_handle);
extern void* __dso_handle;

/* Type info stubs for RTTI */
struct std_type_info {
    void (*vptr)(void);
    const char* (*name)(const struct std_type_info *);
    bool (*equals)(const struct std_type_info *, const struct std_type_info *);
    bool (*not_equals)(const struct std_type_info *, const struct std_type_info *);
};

/* New/delete operators */
void* _operator_new(size_t size);
void _operator_delete(void* ptr);
void* _operator_new__(size_t size);
void _operator_delete__(void* ptr);

/* Implementations of new/delete operators */
void* _operator_new(size_t size) {
    return malloc(size);
}

void _operator_delete(void* ptr) {
    if (ptr) free(ptr);
}

void* _operator_new__(size_t size) {
    return malloc(size);
}

void _operator_delete__(void* ptr) {
    if (ptr) free(ptr);
}

/* Exception handling */
void* __cxa_allocate_exception(size_t size);
void __cxa_throw(void* obj, const struct std_type_info* tinfo, void* dest);
void* __dynamic_cast(void* ptr, const struct std_type_info* src, const struct std_type_info* dst, int offset);

/* Implementations of exception handling functions */
void* __cxa_allocate_exception(size_t size) {
    return malloc(size);
}

void __cxa_throw(void* obj, const struct std_type_info* tinfo, void* dest) {
    /* Stub - should throw exception, but just free and return for now */
    free(obj);
    exit(1);
}

void* __dynamic_cast(void* ptr, const struct std_type_info* src, const struct std_type_info* dst, int offset) {
    /* Stub implementation - for testing purposes, just return ptr adjusted by offset */
    if (ptr == NULL) return NULL;
    return (void*)((char*)ptr + offset);
}



/* Built-in function wrappers */
#define builtin_strncpy strncpy



/* Type info object declarations */
extern struct std_type_info std_type_info_for_int;

extern struct std_type_info int_typeinfo;

/* Type info object definitions */
struct std_type_info std_type_info_for_int = {
    NULL,
    NULL,
    NULL,
    NULL
};

struct std_type_info int_typeinfo = {
    NULL,
    NULL,
    NULL,
    NULL
};

/* Global variables */
int LifecycleClass_instance_count;
struct std_ios_base_Init std___ioinit;

/* Global data string definitions */
char DAT_000131e5[] = "=== Testing C++ Member Functions ===\n";
char DAT_00013081[] = "member_func result: %d\n";
char DAT_0001309f[] = "constructor result: %d\n";
char DAT_000130bb[] = "virtual_func result: %d\n";
char DAT_000130d7[] = "multiple_inheritance result: %d\n";
char DAT_000130f3[] = "diamond_inheritance result: %d\n";
char DAT_00013110[] = "operator_overload result: %d\n";
char DAT_0001312c[] = "template_func result: %d\n";
char DAT_00013148[] = "template_class result: %d\n";
char DAT_00013164[] = "lambda result: %d\n";
char DAT_00013180[] = "exception result: %d\n";
char DAT_0001319d[] = "smart_ptr result: %d\n";
char DAT_000131ba[] = "rtti result: %d\n";

/* Global function pointers */
void* PTR_virtual_func_00015ce4 = (void*)Base_virtual_func;
void* PTR_virtual_func_00015d04 = (void*)Derived_virtual_func;
void* PTR_funcA_00015d28 = (void*)MultiDerived_funcA;
void* PTR__ZThn8_N12MultiDerived5funcBEv_00015d40 = (void*)MultiDerived_funcB;
void* PTR__ZTv0_n12_N14DiamondDerived4funcEv_00015de4 = (void*)DiamondDerived_func;
void* PTR_func_00015db0 = (void*)VirtualBase_func;
void* PTR__ZThn8_N14DiamondDerived4funcEv_00015dc8 = (void*)DiamondDerived_func;
void* PTR__RTTIBase_00015ecc = NULL;
void* PTR__RTTIBase_00015ee0 = NULL;



/* Stub implementations for mangled name functions */

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-1/5-1_clang_O1_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 (*(code *)(void *)0x0)();
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00011170 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 /* Initialize C++ I/O */
 (void)__dso_handle;
 __cxa_atexit((void (*)(void*))0,&std___ioinit,&__dso_handle);
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
 builtin_strncpy(local_28,"Test",5);
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
 piVar1 = _operator_new__(0x14);
 piVar2 = piVar1;
 do {
 *piVar2 = iVar3;
 iVar3 = iVar3 + 10;
 piVar2 = piVar2 + 1;
 } while (iVar3 != 0x32);
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 iVar3 = LifecycleClass_instance_count + piVar1[2];
 _operator_delete__(piVar1);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 return LifecycleClass_instance_count * 1000 + iVar3;
}



/* Function: call_virtual_func @ 00011420 */

int call_virtual_func(struct Base *obj,int x)

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
 struct Derived local_20;
 struct Base local_c;
 
 /* Unresolved local var: Base base@[???]
 Unresolved local var: Derived derived@[???]
 Unresolved local var: Base * pd@[???]
 Unresolved local var: Base * pb@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r4@[???] */
 local_c._vptr_Base = (void **)&PTR_virtual_func_00015ce4;
 local_20._vptr_Derived = (void **)&PTR_virtual_func_00015d04;
 local_20.base._vptr_Base = (void **)&PTR_virtual_func_00015d04;
 local_20.multiplier = 3;
 iVar1 = Base_virtual_func(&local_c,5);
 iVar2 = Derived_virtual_func(&local_20,5);
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
 local_1c.super_BaseA._vptr_BaseA = (void **)&PTR_funcA_00015d28;
 local_1c.super_BaseB._vptr_BaseB = (void **)&PTR__ZThn8_N12MultiDerived5funcBEv_00015d40;
 local_1c.super_BaseA.dataA = 100;
 local_1c.super_BaseB.dataB = 200;
 iVar1 = MultiDerived_funcA(&local_1c);
 iVar2 = (**local_1c.super_BaseB._vptr_BaseB)(&local_1c.super_BaseB);
 return iVar2 + iVar1 + 1;
}



/* Function: test_cpp_diamond_inheritance @ 00011510 */

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
 local_obj.super_MiddleA._vptr_MiddleA = (void **)&PTR__ZTv0_n12_N14DiamondDerived4funcEv_00015de4;
 local_obj.super_MiddleB._vptr_MiddleB = (void **)&PTR__ZThn8_N14DiamondDerived4funcEv_00015dc8;
 extraout_EAX = _ZTv0_n12_N14DiamondDerived4funcEv((struct VirtualBase *)&local_obj);
 iVar1 = _ZThn8_N14DiamondDerived4funcEv(&local_obj.super_MiddleB);
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
 __cxa_throw(puVar1,&int_typeinfo,0);
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
 const char *__s1;
 const char *__s1_00;
 struct RTTIDerivedA *obj1;
 struct RTTIDerivedB *obj2;
 int iVar3;
 size_t sVar4;
 unsigned int uVar5;
 unsigned int uVar6;
 bool bVar7;
 
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: RTTIBase * obj2@[???]
 Unresolved local var: int result@[???] */
 obj1 = _operator_new(sizeof(struct RTTIDerivedA));
 obj1->typeinfo = &int_typeinfo;
 obj1->_vptr_RTTIDerivedA = (int (*)(void *))RTTIDerivedA_getType;
 
 obj2 = _operator_new(sizeof(struct RTTIDerivedB));
 obj2->typeinfo = &int_typeinfo;
 obj2->_vptr_RTTIDerivedB = (int (*)(void *))RTTIDerivedB_getType;
 
 uVar6 = 10;
 uVar5 = uVar6 | 0x14;
 bVar7 = 1;
 uVar5 = uVar6 | 0x14;
 iVar3 = (int)__dynamic_cast(obj1,&int_typeinfo,&int_typeinfo,0);
 uVar6 = uVar5 + 100;
 if (iVar3 == 0) {
 uVar6 = uVar5;
 }
 iVar3 = (int)__dynamic_cast(obj2,&int_typeinfo,&int_typeinfo,0);
 uVar5 = uVar6 + 200;
 if (iVar3 == 0) {
 uVar5 = uVar6;
 }
 sVar4 = strlen("RTTIDerivedA");
 iVar3 = obj1->_vptr_RTTIDerivedA(obj1);
 iVar3 = obj2->_vptr_RTTIDerivedB(obj2);
 _operator_delete(obj1);
 _operator_delete(obj2);
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
 struct Base local_14 [2];
 
 puts(&DAT_000131e5);
 /* Unresolved local var: SimpleClass obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r2@[???] */
 builtin_strncpy(local_38,"Test",4);
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
 piVar3 = _operator_new__(0x14);
 piVar5 = piVar3;
 do {
 /* Unresolved local var: size_t i@[???] */
 *piVar5 = iVar6;
 iVar6 = iVar6 + 10;
 piVar5 = piVar5 + 1;
 } while (iVar6 != 0x32);
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 iVar6 = LifecycleClass_instance_count + piVar3[2];
 _operator_delete__(piVar3);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 printf(&DAT_0001309f,LifecycleClass_instance_count * 1000 + iVar6);
 /* Unresolved local var: Base base@[???]
 Unresolved local var: Derived derived@[???]
 Unresolved local var: Base * pd@[???]
 Unresolved local var: Base * pb@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r4@[???] */
 {
 struct Derived local_20;
 local_14[0]._vptr_Base = (void **)&PTR_virtual_func_00015ce4;
 local_20._vptr_Derived = (void **)&PTR_virtual_func_00015d04;
 local_20.base._vptr_Base = (void **)&PTR_virtual_func_00015d04;
 local_20.multiplier = 3;
 iVar6 = Base_virtual_func(local_14,5);
 iVar4 = (*(code_int)*local_20._vptr_Derived)(&local_20,5);
 }
 printf(&DAT_000130bb,iVar4 + iVar6 + 0x15);
 /* Unresolved local var: MultiDerived obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: BaseB * pb@[???]
 Unresolved local var: BaseA * pa@[???]
 Unresolved local var: int ptr_equal@[???]
 Unresolved local var: int r2@[???] */
 {
 MultiDerived md_obj;
 md_obj.super_BaseA._vptr_BaseA = (void **)&PTR_funcA_00015d28;
 md_obj.super_BaseB._vptr_BaseB = (void **)&PTR__ZThn8_N12MultiDerived5funcBEv_00015d40;
 md_obj.super_BaseA.dataA = 100;
 md_obj.super_BaseB.dataB = 200;
 extraout_EAX = _ZThn8_N12MultiDerived5funcBEv(&md_obj.super_BaseB);
 }
 printf(&DAT_000130d7,extraout_EAX + 0x1f);
 /* Unresolved local var: DiamondDerived obj@[???]
 Unresolved local var: VirtualBase * pb@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 {
 DiamondDerived dd_obj;
 dd_obj.super_MiddleA._vptr_MiddleA = (void **)&PTR__ZTv0_n12_N14DiamondDerived4funcEv_00015de4;
 dd_obj.super_MiddleB._vptr_MiddleB = (void **)&PTR__ZThn8_N14DiamondDerived4funcEv_00015dc8;
 extraout_EAX_00 = _ZTv0_n12_N14DiamondDerived4funcEv((struct VirtualBase *)&dd_obj);
 iVar6 = _ZThn8_N14DiamondDerived4funcEv(&dd_obj.super_MiddleB);
 }
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

int Base_virtual_func(Base *this,int x)

{
 (void)this;
 return x + 1;
}



/* Function: virtual_func @ 00011ae0 */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int Derived_virtual_func(Derived *this,int x)

{
 (void)x;
 return this->multiplier * x;
}



/* Function: ~Base @ 00011af0 */

/* DWARF original prototype: void ~Base(Base * this) */

void Base_dtor(Base *this)

{
 (void)this;
 return;
}



/* Function: ~MultiDerived @ 00011b00 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this) */

void MultiDerived_dtor(MultiDerived *this)

{
 (void)this;
 return;
}



/* Function: ~DiamondDerived @ 00011b10 */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this) */

void DiamondDerived_dtor(DiamondDerived *this)

{
 (void)this;
 return;
}



/* Function: template_max<int> @ 00011b20 */

int template_max_int(int a,int b)

{
 if (b < a) {
 b = a;
 }
 return b;
}



/* Function: template_max<double> @ 00011b30 */

double template_max_double(double a,double b)

{
 if (b <= a || a != b) {
 b = a;
 }
 return b;
}



/* Function: template_swap<int> @ 00011b50 */

void template_swap_int(int *a,int *b)

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

void Container_int_Container(Container_int *this)

{
 (void)this;
 this->size = 0;
 return;
}



/* Function: push @ 00011b80 */

/* DWARF original prototype: void push(Container<int> * this, int value) */

void Container_int_push(Container_int *this,int value)

{
 int iVar1;
 
 (void)value;
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00011ba0 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int Container_int_get(Container_int *this,int idx)

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

int Container_int_getSize(Container_int *this)

{
 (void)this;
 return this->size;
}



/* Function: Container @ 00011bd0 */

/* DWARF original prototype: void Container(Container<double> * this) */

void Container_double_Container(Container_double *this)

{
 (void)this;
 this->size = 0;
 return;
}



/* Function: push @ 00011be0 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void Container_double_push(Container_double *this,double value)

{
 int iVar1;
 
 (void)value;
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00011c00 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double Container_double_get(Container_double *this,int idx)

{
 double dVar1;
 
 (void)idx;
 dVar1 = 0.0;
 if ((-1 < idx) && (idx < this->size)) {
 dVar1 = this->data[idx];
 }
 return dVar1;
}



/* Function: getSize @ 00011c20 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int Container_double_getSize(Container_double *this)

{
 (void)this;
 return this->size;
}



/* Function: getName @ 00011c30 */

/* DWARF original prototype: char * getName(Base * this) */

char * Base_getName(Base *this)

{
 (void)this;
 return "Base";
}



/* Function: getName @ 00011c60 */

/* DWARF original prototype: char * getName(Derived * this) */

char * Derived_getName(Derived *this)

{
 (void)this;
 return "Derived";
}



/* Function: ~Base @ 00011c50 */

/* DWARF original prototype: void ~Base(Base * this) */

void Base_deleting_dtor(Base *this)

{
 _operator_delete(this);
 (void)this;
 return;
}



/* Function: ~Derived @ 00011ca0 */

/* DWARF original prototype: void ~Derived(Derived * this) */

void Derived_dtor(Derived *this)

{
 (void)this;
 return;
}



/* Function: funcA @ 00011cd0 */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int MultiDerived_funcA(MultiDerived *this)

{
 (void)this;
 return 0x1e;
}



/* Function: ~MultiDerived @ 00011ce0 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this) */

void MultiDerived_dtor(MultiDerived *this)

{
 (void)this;
 return;
}



/* Function: funcB @ 00011d10 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int MultiDerived_funcB(MultiDerived *this)

{
 (void)this;
 return 0x28;
}



/* Function: _ZThn8_N12MultiDerived5funcBEv @ 00011d20 */

int _ZThn8_N12MultiDerived5funcBEv(struct BaseB *this)

{
 /* Adjust this pointer by -8 to get MultiDerived* */
 struct MultiDerived *md = (struct MultiDerived *)((char *)this - 8);
 return MultiDerived_funcB(md);
}



/* Function: _ZThn8_N12MultiDerived5funcAEv @ 00011d10 */

int _ZThn8_N12MultiDerived5funcAEv(struct BaseA *this)

{
 /* Adjust this pointer by 0 to get MultiDerived* (no offset needed for first base) */
 struct MultiDerived *md = (struct MultiDerived *)((char *)this);
 return MultiDerived_funcA(md);
}



/* Function: _ZThn8_N12MultiDerivedD1Ev @ 00011d30 */

void _ZThn8_N12MultiDerivedD1Ev(struct BaseB *this)

{
 /* Adjust this pointer by -8 to get MultiDerived* and call destructor */
 struct MultiDerived *md = (struct MultiDerived *)((char *)this - 8);
 MultiDerived_dtor(md);
}



/* Function: _ZThn8_N12MultiDerivedD0Ev @ 00011d40 */

void _ZThn8_N12MultiDerivedD0Ev(struct BaseB *this)

{
 /* Adjust this pointer by -8 to get MultiDerived*, call destructor, then delete */
 struct MultiDerived *md = (struct MultiDerived *)((char *)this - 8);
 MultiDerived_dtor(md);
 _operator_delete(md);
}



/* Function: funcA @ 00011d70 */

/* DWARF original prototype: int funcA(BaseA * this) */

int BaseA_funcA(BaseA *this)

{
 (void)this;
 return 10;
}



/* Function: ~BaseA @ 00011d80 */

/* DWARF original prototype: void ~BaseA(BaseA * this) */

void BaseA_dtor(BaseA *this)

{
 (void)this;
 return;
}



/* Function: ~BaseA @ 00011d90 */

/* DWARF original prototype: void ~BaseA(BaseA * this) */

void BaseA_deleting_dtor(BaseA *this)

{
 _operator_delete(this);
 (void)this;
 return;
}



/* Function: funcB @ 00011dc0 */

/* DWARF original prototype: int funcB(BaseB * this) */

int BaseB_funcB(BaseB *this)

{
 (void)this;
 return 0x14;
}



/* Function: ~BaseB @ 00011dd0 */

/* DWARF original prototype: void ~BaseB(BaseB * this) */

void BaseB_dtor(BaseB *this)

{
 (void)this;
 return;
}



/* Function: ~BaseB @ 00011de0 */

/* DWARF original prototype: void ~BaseB(BaseB * this) */

void BaseB_deleting_dtor(BaseB *this)

{
 _operator_delete(this);
 (void)this;
 return;
}



/* Function: func @ 00011e10 */

/* DWARF original prototype: int func(MiddleA * this) */

int MiddleA_func(MiddleA *this)

{
 (void)this;
 return *(int *)((int)&this->dataA + (int)this->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: ~MiddleA @ 00011e30 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this) */

void MiddleA_dtor(MiddleA *this)

{
 (void)this;
 return;
}



/* Function: ~MiddleA @ 00011e40 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this) */

void MiddleA_deleting_dtor(MiddleA *this)

{
 _operator_delete(this);
 (void)this;
 return;
}



/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 00011e70 */

int _ZTv0_n12_N7MiddleA4funcEv(struct VirtualBase *this)

{
 /* Virtual thunk - adjust this pointer to get MiddleA* and call func */
 struct MiddleA *ma = (struct MiddleA *)((char *)this + 12);
 return MiddleA_func(ma);
}



/* Function: _ZTv0_n16_N7MiddleAD1Ev @ 00011e90 */

void _ZTv0_n16_N7MiddleAD1Ev(struct VirtualBase *this)

{
 /* Virtual thunk - adjust this pointer to get MiddleA* and call destructor */
 struct MiddleA *ma = (struct MiddleA *)((char *)this + 16);
 MiddleA_dtor(ma);
}



/* Function: _ZTv0_n16_N7MiddleAD0Ev @ 00011ea0 */

void _ZTv0_n16_N7MiddleAD0Ev(struct VirtualBase *this)

{
 /* Virtual thunk - adjust this pointer to get MiddleA*, call destructor, then delete */
 struct MiddleA *ma = (struct MiddleA *)((char *)this + 16);
 MiddleA_dtor(ma);
 _operator_delete(ma);
}



/* Function: func @ 00011ed0 */

/* DWARF original prototype: int func(MiddleB * this) */

int MiddleB_func(MiddleB *this)

{
 (void)this;
 return *(int *)((int)&this->dataB + (int)this->_vptr_MiddleB[-3]) + 200;
}



/* Function: ~MiddleB @ 00011ef0 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this) */

void MiddleB_dtor(MiddleB *this)

{
 (void)this;
 return;
}



/* Function: ~MiddleB @ 00011f00 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this) */

void MiddleB_deleting_dtor(MiddleB *this)

{
 _operator_delete(this);
 (void)this;
 return;
}



/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 00011f30 */

int _ZTv0_n12_N7MiddleB4funcEv(struct VirtualBase *this)

{
 /* Virtual thunk - adjust this pointer to get MiddleB* and call func */
 struct MiddleB *mb = (struct MiddleB *)((char *)this + 12);
 return MiddleB_func(mb);
}



/* Function: _ZTv0_n16_N7MiddleBD1Ev @ 00011f50 */

void _ZTv0_n16_N7MiddleBD1Ev(struct VirtualBase *this)

{
 /* Virtual thunk - adjust this pointer to get MiddleB* and call destructor */
 struct MiddleB *mb = (struct MiddleB *)((char *)this + 16);
 MiddleB_dtor(mb);
}



/* Function: _ZTv0_n16_N7MiddleBD0Ev @ 00011f60 */

void _ZTv0_n16_N7MiddleBD0Ev(struct VirtualBase *this)

{
 /* Virtual thunk - adjust this pointer to get MiddleB*, call destructor, then delete */
 struct MiddleB *mb = (struct MiddleB *)((char *)this + 16);
 MiddleB_dtor(mb);
 _operator_delete(mb);
}



/* Function: func @ 00011f90 */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int DiamondDerived_func(DiamondDerived *this)

{
 (void)this;
 return *(int *)((int)&(this->super_MiddleA).dataA + (int)(this->super_MiddleA)._vptr_MiddleA[-3])
 + 0xfa;
}



/* Function: ~DiamondDerived @ 00011fb0 */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this) */

void DiamondDerived_dtor(DiamondDerived *this)

{
 (void)this;
 return;
}



/* Function: _ZThn8_N14DiamondDerived4funcEv @ 00011fe0 */

int _ZThn8_N14DiamondDerived4funcEv(struct MiddleB *this)

{
 /* Non-virtual thunk - adjust this pointer to get DiamondDerived* and call func */
 struct DiamondDerived *dd = (struct DiamondDerived *)((char *)this - 8);
 return DiamondDerived_func(dd);
}



/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 00012000 */

void _ZThn8_N14DiamondDerivedD1Ev(struct MiddleB *this)

{
 /* Non-virtual thunk - adjust this pointer to get DiamondDerived* and call destructor */
 struct DiamondDerived *dd = (struct DiamondDerived *)((char *)this - 8);
 DiamondDerived_dtor(dd);
}



/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 00012010 */

void _ZThn8_N14DiamondDerivedD0Ev(struct MiddleB *this)

{
 /* Non-virtual thunk - adjust this pointer to get DiamondDerived*, call destructor, then delete */
 struct DiamondDerived *dd = (struct DiamondDerived *)((char *)this - 8);
 DiamondDerived_dtor(dd);
 _operator_delete(dd);
}



/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 00012040 */

int _ZTv0_n12_N14DiamondDerived4funcEv(struct VirtualBase *this)

{
 /* Virtual thunk - adjust this pointer to get DiamondDerived* and call func */
 struct DiamondDerived *dd = (struct DiamondDerived *)((char *)this + 12);
 return DiamondDerived_func(dd);
}



/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 00012060 */

void _ZTv0_n16_N14DiamondDerivedD1Ev(struct VirtualBase *this)

{
 /* Virtual thunk - adjust this pointer to get DiamondDerived* and call destructor */
 struct DiamondDerived *dd = (struct DiamondDerived *)((char *)this + 16);
 DiamondDerived_dtor(dd);
}



/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 00012070 */

void _ZTv0_n16_N14DiamondDerivedD0Ev(struct VirtualBase *this)

{
 /* Virtual thunk - adjust this pointer to get DiamondDerived*, call destructor, then delete */
 struct DiamondDerived *dd = (struct DiamondDerived *)((char *)this + 16);
 DiamondDerived_dtor(dd);
 _operator_delete(dd);
}



/* Function: func @ 000120a0 */

/* DWARF original prototype: int func(VirtualBase * this) */

int VirtualBase_func(VirtualBase *this)

{
 (void)this;
 return 100;
}



/* Function: ~VirtualBase @ 000120b0 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this) */

void VirtualBase_dtor(VirtualBase *this)

{
 (void)this;
 return;
}



/* Function: ~VirtualBase @ 000120c0 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this) */

void VirtualBase_deleting_dtor(VirtualBase *this)

{
 _operator_delete(this);
 (void)this;
 return;
}



/* Function: ~RTTIDerivedA @ 000120f0 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

void RTTIDerivedA_dtor(RTTIDerivedA *this)

{
 _operator_delete(this);
 (void)this;
 return;
}



/* Function: getType @ 00012120 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int RTTIDerivedA_getType(RTTIDerivedA *this)

{
 (void)this;
 return 1;
}



/* Function: ~RTTIBase @ 00012130 */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this) */

void RTTIBase_dtor(RTTIBase *this)

{
 (void)this;
 return;
}



/* Function: ~RTTIDerivedB @ 00012140 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

void RTTIDerivedB_dtor(RTTIDerivedB *this)

{
 _operator_delete(this);
 (void)this;
 return;
}



/* Function: getType @ 00012170 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int RTTIDerivedB_getType(RTTIDerivedB *this)

{
 (void)this;
 return 2;
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 88 */
