#include <string.h>
#include <stdio.h>

/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;

typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Ghidra decompiler types */
typedef void *undefined;
typedef unsigned int undefined4;
typedef unsigned short undefined2;
typedef unsigned char undefined1;
typedef int (*_func_int)(void);
typedef void (*code)(void);

/* C++ class/struct definitions */
typedef struct Base {
    void **_vptr_Base;
} Base;

typedef struct Derived {
    Base base;
    int multiplier;
} Derived;

typedef struct LifecycleClass {
    int instance_count;
} LifecycleClass;

typedef struct BaseA {
    void **_vptr_BaseA;
    int dataA;
} BaseA;

typedef struct BaseB {
    void **_vptr_BaseB;
    int dataB;
} BaseB;

typedef struct MultiDerived {
    BaseA super_BaseA;
    BaseB super_BaseB;
} MultiDerived;

typedef struct VirtualBase {
    void **_vptr_VirtualBase;
    int data;
} VirtualBase;

typedef struct MiddleA {
    VirtualBase super_VirtualBase;
    void **_vptr_MiddleA;
    int dataA;
} MiddleA;

typedef struct MiddleB {
    VirtualBase super_VirtualBase;
    void **_vptr_MiddleB;
    int dataB;
} MiddleB;

typedef struct DiamondDerived {
    MiddleA super_MiddleA;
    MiddleB super_MiddleB;
} DiamondDerived;

typedef struct RTTIBase {
    void **_vptr_RTTIBase;
} RTTIBase;

typedef struct RTTIDerivedA {
    RTTIBase base;
} RTTIDerivedA;

typedef struct RTTIDerivedB {
    RTTIBase base;
} RTTIDerivedB;

typedef struct Container_int {
    int size;
    int data[10];
} Container_int;

typedef struct Container_double {
    int size;
    double data[10];
} Container_double;

/* Global variables */
int LifecycleClass_instance_count = 0;

/* External function declarations */
void *operator_new(unsigned long size);
void operator_delete(void *ptr);

/* Stub implementations for operator new/delete */
void *operator_new__(unsigned long size)
{
    return operator_new(size);
}

void operator_delete__(void *ptr)
{
    operator_delete(ptr);
}

/* Implementations for C++ runtime functions */
#include <stdlib.h>

void *operator_new(unsigned long size)
{
    return malloc(size);
}

void operator_delete(void *ptr)
{
    free(ptr);
}

void *__cxa_allocate_exception(unsigned long size)
{
    return malloc(size);
}

void __cxa_throw(void *exc, void *typeinfo, void *dest)
{
    /* Stub - does not return in real implementation */
    (void)exc;
    (void)typeinfo;
    (void)dest;
}

int __dynamic_cast(void *src, void *src_type, void *dst_type, int flags)
{
    /* Stub implementation */
    (void)src;
    (void)src_type;
    (void)dst_type;
    (void)flags;
    return 0;
}

/* Forward declarations for C++ member functions */
int Base_virtual_func_impl(Base * this_ptr,int x);
int Derived_virtual_func_impl(Derived * this_ptr,int x);
int MultiDerived_funcA(MultiDerived * this_ptr);

/* External pointer declarations */
extern int PTR_virtual_func_00022cf0;
extern int PTR_virtual_func_00022d10;
extern int PTR_funcA_00022d34;
extern int PTR__ZThn8_N12MultiDerived5funcBEv_00022d4c;
extern int PTR__ZTv0_n12_N14DiamondDerived4funcEv_00022df0;
extern int PTR_func_00022dbc;
extern int PTR__ZThn8_N14DiamondDerived4funcEv_00022dd4;
extern int PTR__RTTIBase_00022ed8;
extern int PTR__RTTIBase_00022eec;

/* Define PTR symbols as global variables */
int PTR_virtual_func_00022cf0 = 0;
int PTR_virtual_func_00022d10 = 0;
int PTR_funcA_00022d34 = 0;
int PTR__ZThn8_N12MultiDerived5funcBEv_00022d4c = 0;
int PTR__ZTv0_n12_N14DiamondDerived4funcEv_00022df0 = 0;
int PTR_func_00022dbc = 0;
int PTR__ZThn8_N14DiamondDerived4funcEv_00022dd4 = 0;
int PTR__RTTIBase_00022ed8 = 0;
int PTR__RTTIBase_00022eec = 0;

/* External function declarations */
void _ZTv0_n12_N14DiamondDerived4funcEv(void);
void _ZThn8_N12MultiDerived5funcBEv(void);

/* External data declarations */
extern char DAT_00011c71[];
extern char DAT_00011b0d[];
extern char DAT_00011b2b[];
extern char DAT_00011b47[];
extern char DAT_00011b63[];
extern char DAT_00011b7f[];
extern char DAT_00011b9c[];
extern char DAT_00011bb8[];
extern char DAT_00011bd4[];
extern char DAT_00011bf0[];
extern char DAT_00011c0c[];
extern char DAT_00011c29[];
extern char DAT_00011c46[];

/* Define DAT symbols as global variables */
char DAT_00011c71[] = "Test";
char DAT_00011b0d[] = "";
char DAT_00011b2b[] = "";
char DAT_00011b47[] = "";
char DAT_00011b63[] = "";
char DAT_00011b7f[] = "";
char DAT_00011b9c[] = "";
char DAT_00011bb8[] = "";
char DAT_00011bd4[] = "";
char DAT_00011bf0[] = "";
char DAT_00011c0c[] = "";
char DAT_00011c29[] = "";
char DAT_00011c46[] = "";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/5-1/5-1_clang_O1_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: _GLOBAL__sub_I_5_1.cpp @ 00010cb8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 /* C++ initialization stub - no-op for C compilation */
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00010e60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)

{
 size_t sVar1;
 undefined4 local_28;
 undefined4 uStack_24;
 undefined4 uStack_20;
 undefined4 local_1c;
 undefined4 uStack_18;
 undefined4 uStack_14;
 undefined4 uStack_10;
 undefined2 local_c;
 undefined1 local_a;
 undefined1 local_9;
 
 /* Unresolved local var: SimpleClass obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r2@[???] */
 local_28 = 0x74736554;
 uStack_24 = 0;
 uStack_20 = 0;
 local_1c = 0;
 uStack_18 = 0;
 uStack_14 = 0;
 uStack_10 = 0;
 local_c = 0;
 local_a = 0;
 local_9 = 0;
 sVar1 = strlen((char *)&local_28);
 return sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 00010ed0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 void *pvVar1;
 int iVar2;
 int iVar3;
 
 /* Unresolved local var: int result@[???] */
 /* Unresolved local var: LifecycleClass obj@[???] */
 pvVar1 = operator_new__(0x14);
 iVar2 = 0;
 iVar3 = 0;
 do {
 /* Unresolved local var: size_t i@[???] */
 *(int *)((int)pvVar1 + iVar3 * -4) = iVar2;
 iVar2 = iVar2 + 10;
 iVar3 = iVar3 + -1;
 } while (iVar3 != -5);
 iVar2 = LifecycleClass_instance_count + 1;
 iVar3 = *(int *)((int)pvVar1 + 8);
 LifecycleClass_instance_count = iVar2;
 operator_delete__(pvVar1);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 return LifecycleClass_instance_count * 1000 + iVar3 + iVar2;
}



/* Function: call_virtual_func @ 00010f48 */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 
 iVar1 = ((int (*)(Base *, int))((void **)obj->_vptr_Base)[0])(obj, x);
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 00010f64 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
 int iVar1;
 int iVar2;
 void **local_14;
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
 local_c._vptr_Base = (void **)&PTR_virtual_func_00022cf0;
 local_10 = 3;
 local_14 = (void **)&PTR_virtual_func_00022d10;
 iVar1 = Base_virtual_func_impl(&local_c,5);
 iVar2 = ((int (*)(void *, int))local_14[0])(local_14, 5);
 return iVar1 + iVar2 + 0x15;
}



/* Function: test_cpp_multiple_inheritance @ 00010fdc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
 int iVar1;
 int iVar2;
 MultiDerived local_20;
 
 /* Unresolved local var: MultiDerived obj@[???]
 Unresolved local var: BaseA * pa@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int ptr_equal@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: BaseB * pb@[???] */
 local_20.super_BaseB.dataB = 200;
 local_20.super_BaseA.dataA = 100;
 local_20.super_BaseA._vptr_BaseA = (void **)PTR_funcA_00022d34;
 local_20.super_BaseB._vptr_BaseB = (void **)PTR__ZThn8_N12MultiDerived5funcBEv_00022d4c;
 iVar1 = MultiDerived_funcA(&local_20);
 iVar2 = ((int (*)(void))((void **)local_20.super_BaseB._vptr_BaseB)[0])();
 return iVar1 + iVar2 + 1;
}



/* Function: test_cpp_diamond_inheritance @ 0001104c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_diamond_inheritance(void)

{
 int extraout_r0;
 int iVar1;
 undefined4 **local_18;
 undefined4 local_14;
 
 /* Unresolved local var: DiamondDerived obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: VirtualBase * pb@[???] */
 local_14 = 0x32;
 local_18 = (undefined4 **)&PTR__ZTv0_n12_N14DiamondDerived4funcEv_00022df0;
 local_14 = 100;
 iVar1 = ((int (*)(void *))local_18[0])(local_18);
 return iVar1 + extraout_r0;
}



/* Function: test_cpp_operator_overload @ 000110d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 /* Unresolved local var: Point p1@[???]
 Unresolved local var: Point p2@[???]
 Unresolved local var: Point p3@[???]
 Unresolved local var: bool eq@[???] */
 return 0x16;
}



/* Function: test_cpp_template_func @ 000110d8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: double r2@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 return 0x27;
}



/* Function: test_cpp_template_class @ 000110e0 */

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



/* Function: test_cpp_lambda @ 000110e8 */

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



/* Function: test_cpp_exception @ 000110f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 /* Unresolved local var: int result@[???]
 Unresolved local var: int e@[???]
 Unresolved local var: BaseException * e@[???]
 Unresolved local var: DerivedException * e@[???] */
 /* Unresolved local var: int e@[???] */
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,(void *)0,0);
}



/* Function: test_cpp_smart_ptr @ 000111c0 */

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



/* Function: test_cpp_rtti @ 000111cc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 int *piVar1;
 int *piVar2;
 int iVar3;
 char *pcVar4;
 int iVar5;
 size_t sVar6;
 char *__s1;
 uint32_t uVar7;
 bool bVar8;
 
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: RTTIBase * obj2@[???]
 Unresolved local var: int result@[???] */
 piVar1 = (int *)operator_new__(4);
 *piVar1 = (int)&PTR__RTTIBase_00022ed8;
 piVar2 = (int *)operator_new__(4);
 uVar7 = 0;
 *piVar2 = 0;
 *piVar2 = (int)&PTR__RTTIBase_00022eec;
 __s1 = *(char **)(*(int *)(*piVar1 + -4) + 4);
 if (__s1 == "12RTTIDerivedA") {
 uVar7 = 10;
 }
 else if (*__s1 != '*') {
 iVar3 = strcmp(__s1,"12RTTIDerivedA");
 uVar7 = 0;
 if (iVar3 == 0) {
 uVar7 = 10;
 }
 }
 pcVar4 = *(char **)(*(int *)(*piVar2 + -4) + 4);
 if (pcVar4 == "12RTTIDerivedB") {
 bVar8 = true;
 }
 else {
 bVar8 = false;
 if (*pcVar4 != '*') {
 iVar3 = strcmp(pcVar4,"12RTTIDerivedB");
 bVar8 = iVar3 == 0;
 }
 }
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 iVar3 = __dynamic_cast(piVar1,&PTR__RTTIBase_00022ed8,&PTR__RTTIBase_00022eec,0);
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 iVar5 = __dynamic_cast(piVar2,&PTR__RTTIBase_00022ed8,&PTR__RTTIBase_00022eec,0);
 pcVar4 = __s1 + 1;
 if (*__s1 != '*') {
 pcVar4 = __s1;
 }
 sVar6 = strlen(pcVar4);
 (*(void (**)(void))(*piVar1 + 4))();
 (*(void (**)(void))(*piVar2 + 4))();
 if (bVar8) {
 uVar7 = uVar7 | 0x14;
 }
 if (iVar3 != 0) {
 uVar7 = uVar7 + 100;
 }
 if (iVar5 != 0) {
 uVar7 = uVar7 + 200;
 }
 return uVar7 + sVar6;
}



/* Function: test_cpp_oo_features @ 0001136c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_cpp_oo_features(void)

{
 undefined **ppuVar1;
 size_t sVar2;
 void *pvVar3;
 int extraout_r0;
 int extraout_r0_00;
 int iVar4;
 int iVar5;
 void **local_40;
 undefined **local_3c [4];
 undefined4 local_2c;
 undefined4 uStack_28;
 undefined4 uStack_24;
 undefined2 local_20;
 undefined1 local_1e;
 undefined1 local_1d;
 Base local_1c;
 
 puts((char *)&DAT_00011c71);
 /* Unresolved local var: SimpleClass obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r2@[???] */
 local_3c[0] = (undefined **)0x74736554;
 local_3c[1] = (undefined **)0x0;
 local_3c[2] = (undefined **)0x0;
 local_3c[3] = (undefined **)0x0;
 local_2c = 0;
 uStack_28 = 0;
 uStack_24 = 0;
 local_20 = 0;
 local_1e = 0;
 iVar5 = 0;
 local_1d = 0;
 local_40 = (void **)0xa;
 sVar2 = strlen((char *)local_3c);
 printf("%d", sVar2 + 0x125c);
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 pvVar3 = operator_new__(0x14);
 iVar4 = 0;
 do {
 /* Unresolved local var: size_t i@[???] */
 *(int *)((int)pvVar3 + iVar4 * -4) = iVar5;
 iVar5 = iVar5 + 10;
 iVar4 = iVar4 + -1;
 } while (iVar4 != -5);
 iVar4 = LifecycleClass_instance_count + 1;
 iVar5 = *(int *)((int)pvVar3 + 8);
 LifecycleClass_instance_count = iVar4;
 operator_delete__(pvVar3);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 printf("%d", LifecycleClass_instance_count * 1000 + iVar5 + iVar4);
 /* Unresolved local var: Base base@[???]
 Unresolved local var: Derived derived@[???]
 Unresolved local var: Base * pd@[???]
 Unresolved local var: Base * pb@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r4@[???] */
 local_1c._vptr_Base = (void **)&PTR_virtual_func_00022cf0;
 local_3c[0] = (undefined **)0x3;
 local_40 = (void **)&PTR_virtual_func_00022d10;
 iVar4 = Base_virtual_func_impl(&local_1c,5);
 iVar5 = ((int (*)(void *, int))local_40[0])(local_40, 5);
 printf("%d", iVar4 + iVar5 + 0x15);
 /* Unresolved local var: MultiDerived obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: BaseA * pa@[???]
 Unresolved local var: int ptr_equal@[???]
 Unresolved local var: int r2@[???] */
 local_3c[1] = (undefined **)&PTR__ZThn8_N12MultiDerived5funcBEv_00022d4c;
 local_3c[2] = (undefined **)0xc8;
 local_3c[0] = (undefined **)0x64;
 local_40 = (void **)&PTR_funcA_00022d34;
 printf("%d", extraout_r0 + 0x1f);
 /* Unresolved local var: DiamondDerived obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 local_3c[3] = (undefined **)&PTR__ZTv0_n12_N14DiamondDerived4funcEv_00022df0;
 local_2c = 0x32;
 local_40 = (void **)&PTR_func_00022dbc;
 local_3c[1] = (undefined **)&PTR__ZThn8_N14DiamondDerived4funcEv_00022dd4;
 ppuVar1 = local_3c[3];
 *(undefined4 *)((int)local_3c + (int)((void **)local_40)[-3]) = 100;
 iVar4 = ((int (*)(void *))((*ppuVar1)[0]))(local_3c + 3);
 printf("%d", iVar4 + extraout_r0_00);
 printf("%d", 0x16);
 printf("%d", 0x27);
 printf("%d", 0x10);
 printf("%d", 0x55);
 iVar4 = test_cpp_exception();
 printf("%d", iVar4);
 printf("%d", 0x2bf);
 iVar4 = test_cpp_rtti();
 printf("%d", iVar4);
 return;
}



/* Function: main @ 00011648 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: virtual_func @ 0001165c */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int Base_virtual_func_impl(Base * this_ptr,int x)

{
 return x + 1;
}



/* Function: virtual_func @ 00011664 */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int Derived_virtual_func_impl(Derived * this_ptr,int x)

{
 return this_ptr->multiplier * x;
}



/* Function: Base_destructor @ 00011670 */

/* DWARF original prototype: void ~Base(Base * this) */

void Base_destructor(Base *this_ptr)

{
 return;
}



/* Function: MultiDerived_destructor @ 00011674 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this) */

void MultiDerived_destructor(MultiDerived *this_ptr)

{
 return;
}



/* Function: DiamondDerived_destructor @ 00011678 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this) */

void DiamondDerived_destructor(DiamondDerived *this_ptr)

{
 return;
}



/* Function: template_max_int @ 0001167c */

int template_max_int(int a,int b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_max_double @ 00011688 */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x0001169c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

double template_max_double(double a,double b)

{
 if (a > b) {
 return a;
 }
 return b;
}



/* Function: template_swap_int @ 000116bc */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container_int @ 000116d0 */

/* DWARF original prototype: void Container(Container<int> * this) */

void Container_int_Constructor(Container_int *this_ptr)

{
 this_ptr->size = 0;
 return;
}



/* Function: push_int @ 000116dc */

/* DWARF original prototype: void push(Container<int> * this, int value) */

void Container_int_push(Container_int *this_ptr,int value)

{
 int iVar1;
 
 iVar1 = this_ptr->size;
 if (iVar1 < 10) {
 this_ptr->size = iVar1 + 1;
 this_ptr->data[iVar1] = value;
 }
 return;
}



/* Function: get_int @ 000116f4 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int Container_int_get(Container_int *this_ptr,int idx)

{
 int iVar1;
 
 iVar1 = 0;
 if (idx < 0) {
 return 0;
 }
 if (idx < this_ptr->size) {
 iVar1 = this_ptr->data[idx];
 }
 return iVar1;
}



/* Function: getSize_int @ 00011714 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int Container_int_getSize(Container_int *this_ptr)

{
 return this_ptr->size;
}



/* Function: Container_double @ 0001171c */

/* DWARF original prototype: void Container(Container<double> * this) */

void Container_double_Constructor(Container_double *this_ptr)

{
 this_ptr->size = 0;
 return;
}



/* Function: push_double @ 00011728 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void Container_double_push(Container_double *this_ptr,double value)

{
 undefined4 in_r2;
 undefined4 in_r3;
 int iVar1;
 
 iVar1 = this_ptr->size;
 if (9 < iVar1) {
 return;
 }
 *(undefined4 *)((char *)this_ptr->data + iVar1 * 8) = in_r2;
 *(undefined4 *)((int)(this_ptr->data + iVar1) + 4) = in_r3;
 this_ptr->size = iVar1 + 1;
 return;
}



/* Function: get_double @ 0001174c */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double Container_double_get(Container_double *this_ptr,int idx)

{
 double in_d0;
 
 if (-1 < idx) {
 return in_d0;
 }
 return in_d0;
}



/* Function: getSize_double @ 00011778 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int Container_double_getSize(Container_double *this_ptr)

{
 return this_ptr->size;
}



/* Function: getName @ 00011780 */

/* DWARF original prototype: char * getName(Base * this) */

char * Base_getName(Base * this_ptr)

{
 return "Base";
}



/* Function: Base_destructor_impl @ 00011790 */

/* DWARF original prototype: void ~Base(Base * this) */

void Base_destructor_impl(Base *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: getName @ 000117a0 */

/* DWARF original prototype: char * getName(Derived * this) */

char * Derived_getName(Derived * this_ptr)

{
 return "Derived";
}



/* Function: Derived_destructor @ 000117b0 */

/* DWARF original prototype: void ~Derived(Derived * this) */

void Derived_destructor(Derived *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: funcA @ 000117c0 */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int MultiDerived_funcA(MultiDerived * this_ptr)

{
 return 0x1e;
}



/* Function: MultiDerived_destructor_impl @ 000117c8 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this) */

void MultiDerived_destructor_impl(MultiDerived *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: funcB @ 000117d8 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int MultiDerived_funcB(MultiDerived *this_ptr)

{
 return 0x28;
}



/* Function: _ZThn8_N12MultiDerived5funcBEv @ 000117e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn8_N12MultiDerived5funcBEv(void)

{
 return;
}



/* Function: _ZThn8_N12MultiDerivedD1Ev @ 000117e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn8_N12MultiDerivedD1Ev(void)

{
 return;
}



/* Function: _ZThn8_N12MultiDerivedD0Ev @ 000117ec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn8_N12MultiDerivedD0Ev(void)

{
 int in_r0;
 
 operator_delete((void *)(in_r0 + -8));
 return;
}



/* Function: funcA @ 00011800 */

/* DWARF original prototype: int funcA(BaseA * this) */

int BaseA_funcA(BaseA * this_ptr)

{
 return 10;
}



/* Function: BaseA_destructor @ 00011808 */

/* DWARF original prototype: void ~BaseA(BaseA * this) */

void BaseA_destructor(BaseA *this_ptr)

{
 return;
}



/* Function: BaseA_destructor_impl @ 0001180c */

/* DWARF original prototype: void ~BaseA(BaseA * this) */

void BaseA_destructor_impl(BaseA *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: funcB @ 0001181c */

/* DWARF original prototype: int funcB(BaseB * this) */

int BaseB_funcB(BaseB * this_ptr)

{
 return 0x14;
}



/* Function: BaseB_destructor @ 00011824 */

/* DWARF original prototype: void ~BaseB(BaseB * this) */

void BaseB_destructor(BaseB *this_ptr)

{
 return;
}



/* Function: BaseB_destructor_impl @ 00011828 */

/* DWARF original prototype: void ~BaseB(BaseB * this) */

void BaseB_destructor_impl(BaseB *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: func @ 00011838 */

/* DWARF original prototype: int func(MiddleA * this) */

int MiddleA_func(MiddleA *this_ptr)

{
 int *vptr = (int *)this_ptr->_vptr_MiddleA;
 return *(int *)((int)&(this_ptr->dataA) + (int)(vptr[-3])) + 0x96;
}



/* Function: MiddleA_destructor @ 00011850 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this) */

void MiddleA_destructor(MiddleA *this_ptr)

{
 return;
}



/* Function: MiddleA_destructor_impl @ 00011854 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this) */

void MiddleA_destructor_impl(MiddleA *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 00011864 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n12_N7MiddleA4funcEv(void)

{
 return;
}



/* Function: _ZTv0_n16_N7MiddleAD1Ev @ 00011884 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n16_N7MiddleAD1Ev(void)

{
 return;
}



/* Function: _ZTv0_n16_N7MiddleAD0Ev @ 00011888 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n16_N7MiddleAD0Ev(void)

{
 int *in_r0;
 
 operator_delete((void *)((int)in_r0 + *(int *)(*in_r0 + -0x10)));
 return;
}



/* Function: func @ 000118a4 */

/* DWARF original prototype: int func(MiddleB * this) */

int MiddleB_func(MiddleB *this_ptr)

{
 int *vptr = (int *)this_ptr->_vptr_MiddleB;
 return *(int *)((int)&(this_ptr->dataB) + (int)(vptr[-3])) + 200;
}



/* Function: MiddleB_destructor @ 000118bc */

/* DWARF original prototype: void ~MiddleB(MiddleB * this) */

void MiddleB_destructor(MiddleB *this_ptr)

{
 return;
}



/* Function: MiddleB_destructor_impl @ 000118c0 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this) */

void MiddleB_destructor_impl(MiddleB *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 000118d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n12_N7MiddleB4funcEv(void)

{
 return;
}



/* Function: _ZTv0_n16_N7MiddleBD1Ev @ 000118f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n16_N7MiddleBD1Ev(void)

{
 return;
}



/* Function: _ZTv0_n16_N7MiddleBD0Ev @ 000118f4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n16_N7MiddleBD0Ev(void)

{
 int *in_r0;
 
 operator_delete((void *)((int)in_r0 + *(int *)(*in_r0 + -0x10)));
 return;
}



/* Function: func @ 00011910 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int DiamondDerived_func(DiamondDerived *this_ptr)

{
 int *vptr = (int *)(this_ptr->super_MiddleA)._vptr_MiddleA;
 return *(int *)((int)&((this_ptr->super_MiddleA).dataA) + (int)(vptr[-3])) + 0xfa;
}



/* Function: DiamondDerived_destructor_impl @ 00011928 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this) */

void DiamondDerived_destructor_impl(DiamondDerived *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: _ZThn8_N14DiamondDerived4funcEv @ 00011938 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn8_N14DiamondDerived4funcEv(void)

{
 return;
}



/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 00011950 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn8_N14DiamondDerivedD1Ev(void)

{
 return;
}



/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 00011954 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn8_N14DiamondDerivedD0Ev(void)

{
 int in_r0;
 
 operator_delete((void *)(in_r0 + -8));
 return;
}



/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 00011968 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n12_N14DiamondDerived4funcEv(void)

{
 return;
}



/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 00011988 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n16_N14DiamondDerivedD1Ev(void)

{
 return;
}



/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0001198c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n16_N14DiamondDerivedD0Ev(void)

{
 int *in_r0;
 
 operator_delete((void *)((int)in_r0 + *(int *)(*in_r0 + -0x10)));
 return;
}



/* Function: func @ 000119a8 */

/* DWARF original prototype: int func(VirtualBase * this) */

int VirtualBase_func(VirtualBase * this_ptr)

{
 return 100;
}



/* Function: VirtualBase_destructor @ 000119b0 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this) */

void VirtualBase_destructor(VirtualBase *this_ptr)

{
 return;
}



/* Function: VirtualBase_destructor_impl @ 000119b4 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this) */

void VirtualBase_destructor_impl(VirtualBase *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: RTTIDerivedA_destructor @ 000119c4 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

void RTTIDerivedA_destructor(RTTIDerivedA *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: getType @ 000119d4 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int RTTIDerivedA_getType(RTTIDerivedA * this_ptr)

{
 return 1;
}



/* Function: RTTIBase_destructor @ 000119dc */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this) */

void RTTIBase_destructor(RTTIBase *this_ptr)

{
 return;
}



/* Function: RTTIDerivedB_destructor @ 000119e0 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

void RTTIDerivedB_destructor(RTTIDerivedB *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: getType @ 000119f0 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int RTTIDerivedB_getType(RTTIDerivedB * this_ptr)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 83 */
