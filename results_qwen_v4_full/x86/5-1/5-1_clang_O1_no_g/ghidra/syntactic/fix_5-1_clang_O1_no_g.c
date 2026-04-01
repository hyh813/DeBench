/* Auto-injected type definitions by preprocessor */
typedef unsigned int undefined4;
typedef unsigned short undefined2;
typedef unsigned char undefined1;
typedef unsigned long undefined;
typedef void (*code)(void);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-1/5-1_clang_O1_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

/* Forward declarations for C++ classes */
typedef struct Base { int dummy; } Base;
typedef struct Derived { int dummy; } Derived;
typedef struct MultiDerived { int dummy; } MultiDerived;
typedef struct DiamondDerived { int dummy; } DiamondDerived;
typedef struct BaseA { int dummy; } BaseA;
typedef struct BaseB { int dummy; } BaseB;
typedef struct MiddleA { int dummy; } MiddleA;
typedef struct MiddleB { int dummy; } MiddleB;
typedef struct VirtualBase { int dummy; } VirtualBase;
typedef struct RTTIBase { int dummy; } RTTIBase;
typedef struct RTTIDerivedA { int dummy; } RTTIDerivedA;
typedef struct RTTIDerivedB { int dummy; } RTTIDerivedB;
typedef struct Container_int { int dummy; } Container_int;
typedef struct Container_double { int dummy; } Container_double;
typedef struct Init { int dummy; } Init;

/* Global variable declarations */
extern int LifecycleClass_instance_count;
extern void *std___ioinit;
extern void *__dso_handle;
extern void *PTR_virtual_func_00015ce4;
extern void *PTR_virtual_func_00015d04;
extern void *PTR_funcA_00015d28;
extern void *PTR_funcB_00015d40;
extern void *PTR_func_00015db0;
extern void *PTR_func_00015dc8;
extern void *PTR_func_00015de4;
extern void *PTR__RTTIBase_00015ecc;
extern void *PTR__RTTIBase_00015ee0;
extern void *RTTIBase_typeinfo;
extern void *RTTIDerivedA_typeinfo;
extern void *RTTIDerivedB_typeinfo;
extern char UNK_000131d8[];
extern char DAT_000131e5[];
extern char DAT_00013081[];
extern char DAT_0001309f[];
extern char DAT_000130bb[];
extern char DAT_000130d7[];
extern char DAT_000130f3[];
extern char DAT_00013110[];
extern char DAT_0001312c[];
extern char DAT_00013148[];
extern char DAT_00013164[];
extern char DAT_00013180[];
extern char DAT_0001319d[];
extern char DAT_000131ba[];

/* Function declarations */
void *operator_new(size_t size);
void *operator_new__(size_t size);
void operator_delete(void *ptr);
void operator_delete__(void *ptr);
void *__cxa_allocate_exception(size_t size);
void __cxa_throw(void *exc, void *typeinfo, void *dest);
int __cxa_atexit(void (*func)(void*), void *arg, void *dso);
void *__dynamic_cast(void *src, void *src_type, void *dst_type, int flags);
int __cxa_begin_catch(void *exc);
void __cxa_end_catch(void);
int test_cpp_member_func(void);
int test_cpp_constructor(void);
void call_virtual_func(Base *param_1,int param_2);
int test_cpp_virtual_func(void);
int test_cpp_multiple_inheritance(void);
int test_cpp_diamond_inheritance(void);
int test_cpp_operator_overload(void);
undefined4 test_cpp_template_func(void);
undefined4 test_cpp_template_class(void);
undefined4 test_cpp_lambda(void);
undefined4 test_cpp_exception(void);
undefined4 test_cpp_smart_ptr(void);
int test_cpp_rtti(void);
void test_cpp_oo_features(void);
int strcmp(const char *s1, const char *s2);
size_t strlen(const char *s);
char *strncpy(char *dest, const char *src, size_t n);
int printf(const char *format, ...);
int puts(const char *s);

/* C++ class method declarations */
int Base_virtual_func(Base *this, int param_1);
int Derived_virtual_func(Derived *this, int param_1);
void Base_destructor(Base *this);
void Base_destructor2(Base *this);
void Derived_destructor(Derived *this);
void BaseA_destructor2(BaseA *this);
void BaseB_destructor2(BaseB *this);
void MiddleA_destructor2(MiddleA *this);
void MiddleB_destructor2(MiddleB *this);
void DiamondDerived_destructor2(DiamondDerived *this);
void VirtualBase_destructor2(VirtualBase *this);
void MultiDerived_destructor(MultiDerived *this);
void MultiDerived_destructor2(MultiDerived *this);
void DiamondDerived_destructor(DiamondDerived *this);
void VirtualBase_destructor(VirtualBase *this);
undefined4 MultiDerived_funcA(void);
undefined4 MultiDerived_funcB(void);
undefined4 MultiDerived_funcB_thunk(MultiDerived *this);
undefined4 BaseA_funcA(void);
undefined4 BaseB_funcB(void);
int DiamondDerived_func(DiamondDerived *this);
int MiddleA_func(MiddleA *this);
int MiddleB_func(MiddleB *this);
undefined4 VirtualBase_func(VirtualBase *this);
undefined4 RTTIDerivedA_getType(void);
undefined4 RTTIDerivedB_getType(void);
void RTTIBase_destructor(RTTIBase *this);
void RTTIDerivedA_destructor(RTTIDerivedA *this);
void RTTIDerivedB_destructor(RTTIDerivedB *this);
void BaseA_destructor(BaseA *this);
void BaseB_destructor(BaseB *this);
void MiddleA_destructor(MiddleA *this);
void MiddleB_destructor(MiddleB *this);
char * Base_getName(void);
char * Derived_getName(void);
void MultiDerived_destructor_thunk(MultiDerived *this);
void MultiDerived_destructor_thunk2(MultiDerived *this);
void MiddleA_destructor_thunk(MiddleA *this);
void MiddleA_destructor_thunk2(MiddleA *this);
int MiddleA_func_thunk(MiddleA *this);
void MiddleB_destructor_thunk(MiddleB *this);
void MiddleB_destructor_thunk2(MiddleB *this);
int MiddleB_func_thunk(MiddleB *this);
void DiamondDerived_destructor_thunk(DiamondDerived *this);
void DiamondDerived_destructor_thunk2(DiamondDerived *this);
void DiamondDerived_destructor_thunk3(DiamondDerived *this);
void DiamondDerived_destructor_thunk4(DiamondDerived *this);
int DiamondDerived_func_thunk(DiamondDerived *this);
int DiamondDerived_func_thunk2(DiamondDerived *this);
void BaseA_destructor(BaseA *this);
void BaseB_destructor(BaseB *this);
void MiddleA_destructor(MiddleA *this);
void MiddleB_destructor(MiddleB *this);

/* Global variable definitions */
int LifecycleClass_instance_count = 0;
void *std___ioinit = 0;
void *__dso_handle = 0;

/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00011170 */

void _GLOBAL__sub_I_5_1_cpp(void)

{
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
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 size_t sVar1;
 char local_28 [36];
 
 strncpy(local_28,"Test",5);
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
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 int *piVar1;
 int *piVar2;
 int iVar3;
 
 iVar3 = 0;
 piVar1 = operator_new__(0x14);
 piVar2 = piVar1;
 do {
 *piVar2 = iVar3;
 iVar3 = iVar3 + 10;
 piVar2 = piVar2 + 1;
 } while (iVar3 != 0x32);
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 iVar3 = LifecycleClass_instance_count + piVar1[2];
 operator_delete__(piVar1);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 return LifecycleClass_instance_count * 1000 + iVar3;
}



/* Function: call_virtual_func @ 00011420 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 (*(code *)**(undefined4 **)param_1)(param_1,param_2);
 return;
}



/* Function: test_cpp_virtual_func @ 00011450 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

int test_cpp_virtual_func(void)

{
 int iVar1;
 int iVar2;
 undefined **local_14;
 undefined4 local_10;
 undefined **local_c;
 
 local_c = &PTR_virtual_func_00015ce4;
 local_14 = &PTR_virtual_func_00015d04;
 local_10 = 3;
 iVar1 = Base_virtual_func((Base *)&local_c,5);
 iVar2 = (*(code *)*local_14)(&local_14,5);
 return iVar2 + iVar1 + 0x15;
}



/* Function: test_cpp_multiple_inheritance @ 000114b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

int test_cpp_multiple_inheritance(void)

{
 int iVar1;
 int iVar2;
 undefined **local_14;
 undefined4 local_10;
 
 local_14 = &PTR_funcB_00015d40;
 local_10 = 200;
 iVar1 = MultiDerived_funcA();
 iVar2 = (*(code *)*local_14)(&local_14);
 return iVar2 + iVar1 + 1;
}



/* Function: test_cpp_diamond_inheritance @ 00011510 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
 int iVar1;
 int iVar2;
 undefined **local_14;
 undefined4 local_10;
 
 local_14 = &PTR_func_00015de4;
 local_10 = 0x32;
 iVar1 = DiamondDerived_func((DiamondDerived *)&local_14);
 local_10 = 100;
 iVar2 = (*(code *)*local_14)((DiamondDerived *)&local_14);
 return iVar2 + iVar1;
}



/* Function: test_cpp_operator_overload @ 00011580 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined4 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00011590 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

undefined4 test_cpp_template_func(void)

{
 return 0x27;
}



/* Function: test_cpp_template_class @ 000115a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined4 test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 000115b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined4 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_exception @ 000115c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

undefined4 test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&PTR__RTTIBase_00015ecc,(void *)0);
 return 0;
}



/* Function: test_cpp_smart_ptr @ 000116b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined4 test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 000116c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 char *__s1;
 char *__s1_00;
 int *piVar1;
 int *piVar2;
 int iVar3;
 size_t sVar4;
 uint uVar5;
 uint uVar6;
 bool bVar7;
 
 piVar1 = operator_new(4);
 *piVar1 = (int)&PTR__RTTIBase_00015ecc;
 piVar2 = operator_new(4);
 *piVar2 = (int)&PTR__RTTIBase_00015ee0;
 __s1 = *(char **)(*(int *)(*piVar1 + -4) + 4);
 if (__s1 == "12RTTIDerivedA") {
 uVar6 = 10;
 }
 else {
 uVar6 = 0;
 if (*__s1 != '*') {
 iVar3 = strcmp(__s1,"12RTTIDerivedA");
 uVar6 = 10;
 if (iVar3 != 0) {
 uVar6 = 0;
 }
 }
 }
 __s1_00 = *(char **)(*(int *)(*piVar2 + -4) + 4);
 if (__s1_00 == "12RTTIDerivedB") {
 bVar7 = true;
 }
 else if (*__s1_00 == '*') {
 bVar7 = false;
 }
 else {
 iVar3 = strcmp(__s1_00,"12RTTIDerivedB");
 bVar7 = iVar3 == 0;
 }
 uVar5 = uVar6 | 0x14;
 if (!bVar7) {
 uVar5 = uVar6;
 }
 iVar3 = __dynamic_cast(piVar1,RTTIBase_typeinfo,RTTIDerivedA_typeinfo,0);
 uVar6 = uVar5 + 100;
 if (iVar3 == 0) {
 uVar6 = uVar5;
 }
 iVar3 = __dynamic_cast(piVar2,RTTIBase_typeinfo,RTTIDerivedB_typeinfo,0);
 uVar5 = uVar6 + 200;
 if (iVar3 == 0) {
 uVar5 = uVar6;
 }
 sVar4 = strlen(__s1 + (*__s1 == '*'));
 (**(code **)(*piVar1 + 4))(piVar1);
 (**(code **)(*piVar2 + 4))(piVar2);
 return sVar4 + uVar5;
}



/* Function: test_cpp_oo_features @ 00011810 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 char *pcVar1;
 size_t sVar2;
 int *piVar3;
 int iVar4;
 undefined4 uVar5;
 int *piVar6;
 int iVar7;
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
 undefined **local_14 [2];
 
 puts(&DAT_000131e5);
 strncpy(local_38,"Test",4);
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
 iVar7 = 0;
 piVar3 = operator_new__(0x14);
 piVar6 = piVar3;
 do {
 *piVar6 = iVar7;
 iVar7 = iVar7 + 10;
 piVar6 = piVar6 + 1;
 } while (iVar7 != 0x32);
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 iVar7 = LifecycleClass_instance_count + piVar3[2];
 operator_delete__(piVar3);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 printf(&DAT_0001309f,LifecycleClass_instance_count * 1000 + iVar7);
 local_14[0] = &PTR_virtual_func_00015ce4;
 local_3c = &PTR_virtual_func_00015d04;
 local_38[0] = '\x03';
 local_38[1] = '\0';
 local_38[2] = '\0';
 local_38[3] = '\0';
 iVar7 = Base_virtual_func((Base *)local_14,5);
 iVar4 = (*(code *)*local_3c)(&local_3c,5);
 printf(&DAT_000130bb,iVar4 + iVar7 + 0x15);
 local_3c = &PTR_funcA_00015d28;
 local_34 = &PTR_funcB_00015d40;
 local_38[0] = 'd';
 local_38[1] = '\0';
 local_38[2] = '\0';
 local_38[3] = '\0';
 local_30 = 200;
 iVar7 = MultiDerived_funcB();
 printf(&DAT_000130d7,iVar7 + 0x1f);
 local_3c = &PTR_func_00015db0;
 local_2c = &PTR_func_00015de4;
 local_34 = &PTR_func_00015dc8;
 local_28 = 0x32;
 iVar7 = DiamondDerived_func((DiamondDerived *)&local_2c);
 pcVar1 = local_38 + (int)local_3c[-3];
 pcVar1[0] = 'd';
 pcVar1[1] = '\0';
 pcVar1[2] = '\0';
 pcVar1[3] = '\0';
 iVar4 = (*(code *)*local_2c)((DiamondDerived *)&local_2c);
 printf(&DAT_000130f3,iVar4 + iVar7);
 printf(&DAT_00013110,0x16);
 printf(&DAT_0001312c,0x27);
 printf(&DAT_00013148,0x10);
 printf(&DAT_00013164,0x55);
 uVar5 = test_cpp_exception();
 printf(&DAT_00013180,uVar5);
 printf(&DAT_0001319d,0x2bf);
 uVar5 = test_cpp_rtti();
 printf(&DAT_000131ba,uVar5);
 return;
}



/* Function: main @ 00011ab0 */

undefined4 main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: virtual_func @ 00011ad0 */

/* Base_virtual_func(int) */

int Base_virtual_func(Base *this,int param_1)

{
 return param_1 + 1;
}



/* Function: virtual_func @ 00011ae0 */

/* Derived_virtual_func(int) */

int Derived_virtual_func(Derived *this,int param_1)

{
 return *(int *)(this + 4) * param_1;
}



/* Function: Base_destructor @ 00011af0 */

/* Base_destructor() */

void Base_destructor(Base *this)

{
 return;
}



/* Function: MultiDerived_destructor @ 00011b00 */

/* MultiDerived_destructor() */

void MultiDerived_destructor(MultiDerived *this)

{
 return;
}



/* Function: DiamondDerived_destructor @ 00011b10 */

/* DiamondDerived_destructor() */

void DiamondDerived_destructor(DiamondDerived *this)

{
 return;
}



/* Function: template_max_int @ 00011b20 */

/* int template_max_int(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: template_max_double @ 00011b30 */

/* double template_max_double(double, double) */

double template_max_double(double param_1,double param_2)

{
 if (param_2 <= param_1 || param_1 != param_2) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: template_swap_int @ 00011b50 */

/* void template_swap_int(int*, int*) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container_int_constructor @ 00011b70 */

/* Container_int_constructor() */

void Container_int_constructor(Container_int *this)

{
 *(undefined4 *)(this + 0x28) = 0;
 return;
}



/* Function: Container_int_push @ 00011b80 */

/* Container_int_push(int) */

void Container_int_push(Container_int *this,int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this + 0x28);
 if (iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + iVar1 * 4) = param_1;
 }
 return;
}



/* Function: Container_int_get @ 00011ba0 */

/* Container_int_get(int) */

undefined4 Container_int_get(Container_int *this,int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
 uVar1 = *(undefined4 *)(this + param_1 * 4);
 }
 return uVar1;
}



/* Function: Container_int_getSize @ 00011bc0 */

/* Container_int_getSize() */

undefined4 Container_int_getSize(Container_int *this)

{
 return *(undefined4 *)(this + 0x28);
}



/* Function: Container_double_constructor @ 00011bd0 */

/* Container_double_constructor() */

void Container_double_constructor(Container_double *this)

{
 *(undefined4 *)(this + 0x50) = 0;
 return;
}



/* Function: Container_double_push @ 00011be0 */

/* Container_double_push(double) */

void Container_double_push(Container_double *this,double param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this + 0x50);
 if (iVar1 < 10) {
 *(int *)(this + 0x50) = iVar1 + 1;
 *(double *)(this + iVar1 * 8) = param_1;
 }
 return;
}



/* Function: Container_double_get @ 00011c00 */

/* Container_double_get(int) */

longdouble Container_double_get(Container_double *this,int param_1)

{
 longdouble lVar1;
 
 lVar1 = (longdouble)0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 lVar1 = (longdouble)*(double *)(this + param_1 * 8);
 }
 return lVar1;
}



/* Function: Container_double_getSize @ 00011c20 */

/* Container_double_getSize() */

undefined4 Container_double_getSize(Container_double *this)

{
 return *(undefined4 *)(this + 0x50);
}



/* Function: getName @ 00011c30 */

/* Base_getName() */

char * Base_getName(void)

{
 return &UNK_000131d8;
}



/* Function: FUN_00011c35 @ 00011c35 */

int FUN_00011c35(void)

{
 int unaff_retaddr;
 
 return unaff_retaddr + 0x15a3;
}



/* Function: Base_destructor @ 00011c50 */

/* Base_destructor() */

void Base_destructor2(Base *this)

{
 operator_delete(this);
 return;
}



/* Function: getName @ 00011c80 */

/* Derived_getName() */

char * Derived_getName(void)

{
 return "Derived";
}



/* Function: FUN_00011c85 @ 00011c85 */

int FUN_00011c85(void)

{
 int unaff_retaddr;
 
 return unaff_retaddr + 0x1558;
}



/* Function: Derived_destructor @ 00011ca0 */

/* Derived_destructor() */

void Derived_destructor(Derived *this)

{
 operator_delete(this);
 return;
}



/* Function: funcA @ 00011cd0 */

/* MultiDerived_funcA() */

undefined4 MultiDerived_funcA(void)

{
 return 0x1e;
}



/* Function: MultiDerived_destructor @ 00011ce0 */

/* MultiDerived_destructor() */

void MultiDerived_destructor2(MultiDerived *this)

{
 operator_delete(this);
 return;
}



/* Function: funcB @ 00011d10 */

/* MultiDerived_funcB() */

undefined4 MultiDerived_funcB(void)

{
 return 0x28;
}



/* Function: funcB @ 00011d20 */

/* non-virtual thunk to MultiDerived_funcB() */

undefined4 MultiDerived_funcB_thunk(MultiDerived *this)

{
 return 0x28;
}



/* Function: MultiDerived_destructor @ 00011d30 */

/* non-virtual thunk to MultiDerived_destructor() */

void MultiDerived_destructor_thunk(MultiDerived *this)

{
 return;
}



/* Function: MultiDerived_destructor @ 00011d40 */

/* non-virtual thunk to MultiDerived_destructor() */

void MultiDerived_destructor_thunk2(MultiDerived *this)

{
 operator_delete(this + -8);
 return;
}



/* Function: funcA @ 00011d70 */

/* BaseA_funcA() */

undefined4 BaseA_funcA(void)

{
 return 10;
}



/* Function: BaseA_destructor @ 00011d80 */

/* BaseA_destructor() */

void BaseA_destructor(BaseA *this)

{
 return;
}



/* Function: BaseA_destructor @ 00011d90 */

/* BaseA_destructor() */

void BaseA_destructor2(BaseA *this)

{
 operator_delete(this);
 return;
}



/* Function: funcB @ 00011dc0 */

/* BaseB_funcB() */

undefined4 BaseB_funcB(void)

{
 return 0x14;
}



/* Function: BaseB_destructor @ 00011dd0 */

/* BaseB_destructor() */

void BaseB_destructor(BaseB *this)

{
 return;
}



/* Function: BaseB_destructor @ 00011de0 */

/* BaseB_destructor() */

void BaseB_destructor2(BaseB *this)

{
 operator_delete(this);
 return;
}



/* Function: func @ 00011e10 */

/* MiddleA_func() */

int MiddleA_func(MiddleA *this)

{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0x96;
}



/* Function: MiddleA_destructor @ 00011e30 */

/* MiddleA_destructor() */

void MiddleA_destructor(MiddleA *this)

{
 return;
}



/* Function: MiddleA_destructor @ 00011e40 */

/* MiddleA_destructor() */

void MiddleA_destructor2(MiddleA *this)

{
 operator_delete(this);
 return;
}



/* Function: func @ 00011e70 */

/* virtual thunk to MiddleA_func() */

int MiddleA_func_thunk(MiddleA *this)

{
 return *(int *)(this + *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4 +
 *(int *)(*(int *)this + -0xc)) + 0x96;
}



/* Function: MiddleA_destructor @ 00011e90 */

/* virtual thunk to MiddleA_destructor() */

void MiddleA_destructor_thunk(MiddleA *this)

{
 return;
}



/* Function: MiddleA_destructor @ 00011ea0 */

/* virtual thunk to MiddleA_destructor() */

void MiddleA_destructor_thunk2(MiddleA *this)

{
 operator_delete(this + *(int *)(*(int *)this + -0x10));
 return;
}



/* Function: func @ 00011ed0 */

/* MiddleB_func() */

int MiddleB_func(MiddleB *this)

{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 200;
}



/* Function: MiddleB_destructor @ 00011ef0 */

/* MiddleB_destructor() */

void MiddleB_destructor(MiddleB *this)

{
 return;
}



/* Function: MiddleB_destructor @ 00011f00 */

/* MiddleB_destructor() */

void MiddleB_destructor2(MiddleB *this)

{
 operator_delete(this);
 return;
}



/* Function: func @ 00011f30 */

/* virtual thunk to MiddleB_func() */

int MiddleB_func_thunk(MiddleB *this)

{
 return *(int *)(this + *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4 +
 *(int *)(*(int *)this + -0xc)) + 200;
}



/* Function: MiddleB_destructor @ 00011f50 */

/* virtual thunk to MiddleB_destructor() */

void MiddleB_destructor_thunk(MiddleB *this)

{
 return;
}



/* Function: MiddleB_destructor @ 00011f60 */

/* virtual thunk to MiddleB_destructor() */

void MiddleB_destructor_thunk2(MiddleB *this)

{
 operator_delete(this + *(int *)(*(int *)this + -0x10));
 return;
}



/* Function: func @ 00011f90 */

/* DiamondDerived_func() */

int DiamondDerived_func(DiamondDerived *this)

{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0xfa;
}



/* Function: DiamondDerived_destructor @ 00011fb0 */

/* DiamondDerived_destructor() */

void DiamondDerived_destructor2(DiamondDerived *this)

{
 operator_delete(this);
 return;
}



/* Function: func @ 00011fe0 */

/* non-virtual thunk to DiamondDerived_func() */

int DiamondDerived_func_thunk(DiamondDerived *this)

{
 return *(int *)(this + *(int *)(*(int *)(this + -8) + -0xc) + -4) + 0xfa;
}



/* Function: DiamondDerived_destructor @ 00012000 */

/* non-virtual thunk to DiamondDerived_destructor() */

void DiamondDerived_destructor_thunk(DiamondDerived *this)

{
 return;
}



/* Function: DiamondDerived_destructor @ 00012010 */

/* non-virtual thunk to DiamondDerived_destructor() */

void DiamondDerived_destructor_thunk2(DiamondDerived *this)

{
 operator_delete(this + -8);
 return;
}



/* Function: func @ 00012040 */

/* virtual thunk to DiamondDerived_func() */

int DiamondDerived_func_thunk2(DiamondDerived *this)

{
 return *(int *)(this + *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4 +
 *(int *)(*(int *)this + -0xc)) + 0xfa;
}



/* Function: DiamondDerived_destructor @ 00012060 */

/* virtual thunk to DiamondDerived_destructor() */

void DiamondDerived_destructor_thunk3(DiamondDerived *this)

{
 return;
}



/* Function: DiamondDerived_destructor @ 00012070 */

/* virtual thunk to DiamondDerived_destructor() */

void DiamondDerived_destructor_thunk4(DiamondDerived *this)

{
 operator_delete(this + *(int *)(*(int *)this + -0x10));
 return;
}



/* Function: func @ 000120a0 */

/* VirtualBase_func() */

undefined4 VirtualBase_func(void)

{
 return 100;
}



/* Function: VirtualBase_destructor @ 000120b0 */

/* VirtualBase_destructor() */

void VirtualBase_destructor(VirtualBase *this)

{
 return;
}



/* Function: VirtualBase_destructor @ 000120c0 */

/* VirtualBase_destructor() */

void VirtualBase_destructor2(VirtualBase *this)

{
 operator_delete(this);
 return;
}



/* Function: RTTIDerivedA_destructor @ 000120f0 */

/* RTTIDerivedA_destructor() */

void RTTIDerivedA_destructor(RTTIDerivedA *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 00012120 */

/* RTTIDerivedA_getType() */

undefined4 RTTIDerivedA_getType(void)

{
 return 1;
}



/* Function: RTTIBase_destructor @ 00012130 */

/* RTTIBase_destructor() */

void RTTIBase_destructor(RTTIBase *this)

{
 return;
}



/* Function: RTTIDerivedB_destructor @ 00012140 */

/* RTTIDerivedB_destructor() */

void RTTIDerivedB_destructor(RTTIDerivedB *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 00012170 */

/* RTTIDerivedB_getType() */

undefined4 RTTIDerivedB_getType(void)

{
 return 2;
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 90 */
