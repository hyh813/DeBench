
/* typedef long ssize_t; - already defined in system headers */
/* typedef unsigned long size_t; - already defined in system headers */
/* typedef long intptr_t; - already defined in system headers */
/* typedef long long intmax_t; - already defined in system headers */
/* typedef unsigned long long uintmax_t; - already defined in system headers */
/* typedef unsigned int uint; - redefined by system headers as unsigned long */
/* typedef unsigned int uint; */
typedef unsigned char uchar;
typedef int c_bool;
#ifndef __cplusplus
typedef int bool;
#define true 1
#define false 0
#endif
typedef double double64_t;

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/* Forward declarations for C++ classes */
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct DiamondDerived DiamondDerived;
typedef struct LifecycleClass LifecycleClass;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct BaseA BaseA;
typedef struct BaseB BaseB;
typedef struct VirtualBase VirtualBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct RTTIBase RTTIBase;
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;

/* Define LifecycleClass structure */
struct LifecycleClass {
    int dummy[4];  // 0x14 bytes as used in test_cpp_constructor
};

/* Define Container structures */
struct Container_int {
    int data[10];
    uint32_t size;
};

struct Container_double {
    double data[10];
    uint32_t size;
};

/* Static member declarations */
extern int LifecycleClass_instance_count;


/* Function pointer types */
typedef void (*code_void)(void *);
typedef uint32_t (*code_uint32)(void);
typedef int (*code)(void *);
typedef int (*code_int)(void *, int);

/* Data constants */
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
extern char DAT_00011c64[];

/* Static members - removed (defined above) */

/* C++ runtime functions */
extern void *operator_new__(size_t);
extern void *operator_new(size_t);
extern void operator_delete__(void *);
extern void operator_delete(void *);
extern void *__cxa_allocate_exception(size_t);
extern void __cxa_throw(void *, void *, void *);
extern void *__dynamic_cast(void *, void *, void *, int);
extern int __aeabi_dcmpgt(double64_t, double64_t);
extern uint32_t SUB84(double64_t, int);
extern uint64_t CONCAT44(uint32_t, uint32_t);

/* Virtual function table pointers */
extern void *PTR_virtual_func_00022cf0;
extern void *PTR_virtual_func_00022d10;
extern void *PTR_funcB_00022d4c;
extern void *PTR_func_00022df0;
extern void *PTR_funcA_00022d34;
extern void *PTR_func_00022dbc;
extern void *PTR_func_00022dd4;
extern void *PTR__RTTIBase_00022ed8;
extern void *PTR__RTTIBase_00022eec;

/* Function declarations - using original C++ naming for virtual func implementations */
int Base_virtual_func(Base *self, int param_1);
int Derived_virtual_func(Derived *self, int param_1);
uint32_t MultiDerived_funcA(MultiDerived *self);
uint32_t MultiDerived_funcB(void);
int DiamondDerived_func(DiamondDerived *self);
int Base__virtual_func(Base *self, int param_1);
int Derived__virtual_func(Derived *self, int param_1);
int MiddleA_func_thunk(MiddleA *self);
int MiddleB_func_thunk(MiddleB *self);
uint32_t VirtualBase_func(void *self);
uint32_t RTTIDerivedA_getType(void);
uint32_t RTTIDerivedB_getType(void);
void MiddleA_destructor_thunk1(MiddleA *self);
void MiddleA_destructor_thunk2(MiddleA *self);
void MiddleB_destructor_thunk1(MiddleB *self);
void MiddleB_destructor_thunk2(MiddleB *self);
void DiamondDerived_destructor2(DiamondDerived *self);
void DiamondDerived_destructor_thunk1(DiamondDerived *self);
void DiamondDerived_destructor_thunk2(DiamondDerived *self);
void VirtualBase_destructor1(VirtualBase *self);
void VirtualBase_destructor2(VirtualBase *self);
void RTTIDerivedA_destructor(RTTIDerivedA *this);
void RTTIBase_destructor(RTTIBase *this);
void RTTIDerivedB_destructor(RTTIDerivedB *this);

/* Additional static member typeinfo declarations */
extern void *int_typeinfo;
extern void *RTTIBase_typeinfo;
extern void *RTTIDerivedA_typeinfo;
extern void *RTTIDerivedB_typeinfo;

/* Implement missing runtime functions */
void operator_delete(void *ptr) {
    free(ptr);
}

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/5-1/5-1_clang_O1_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: _GLOBAL__sub_I_5_1.cpp @ 00010cb8 */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 /* C++ iostream initialization stub */
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00010e60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 size_t sVar1;
 uint32_t local_28;
 uint32_t uStack_24;
 uint32_t uStack_20;
 uint32_t local_1c;
 uint32_t uStack_18;
 uint32_t uStack_14;
 uint32_t uStack_10;
 uint16_t local_c;
 uint8_t local_a;
 uint8_t local_9;
 
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
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 void *pvVar1;
 int iVar2;
 int iVar3;
 
 pvVar1 = operator_new__(0x14);
 iVar2 = 0;
 iVar3 = 0;
 do {
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

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 code_int func_ptr = (code_int)(*(void **)param_1);
 func_ptr(param_1, param_2);
 return;
}



/* Function: test_cpp_virtual_func @ 00010f64 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

int test_cpp_virtual_func(void)

{
 int iVar1;
 int iVar2;
 void **local_14;
 uint32_t local_10;
 void **local_c;
 
 local_c = &PTR_virtual_func_00022cf0;
 local_10 = 3;
 local_14 = &PTR_virtual_func_00022d10;
 iVar1 = Base_virtual_func((Base *)local_c, 5);
 iVar2 = Derived_virtual_func((Derived *)local_14, 5);
 return iVar1 + iVar2 + 0x15;
}



/* Function: test_cpp_multiple_inheritance @ 00010fdc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

int test_cpp_multiple_inheritance(void)

{
 int iVar1;
 int iVar2;
 void **local_18;
 uint32_t local_14;
 
 local_14 = 200;
 local_18 = &PTR_funcB_00022d4c;
 iVar1 = MultiDerived_funcA((MultiDerived *)0);
 iVar2 = MultiDerived_funcB();
 return iVar1 + iVar2 + 1;
}



/* Function: test_cpp_diamond_inheritance @ 0001104c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
 int iVar1;
 int iVar2;
 void **local_18;
 uint32_t local_14;
 
 local_14 = 0x32;
 local_18 = &PTR_func_00022df0;
 iVar1 = DiamondDerived_func((DiamondDerived *)&local_18);
 local_14 = 100;
 iVar2 = (*(code *)*local_18)((DiamondDerived *)&local_18);
 return iVar2 + iVar1;
}



/* Function: test_cpp_operator_overload @ 000110d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

uint32_t test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 000110d8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

uint32_t test_cpp_template_func(void)

{
 return 0x27;
}



/* Function: test_cpp_template_class @ 000110e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

uint32_t test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 000110e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

uint32_t test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_exception @ 000110f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 uint32_t *puVar1;
 
 puVar1 = (uint32_t *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,&int_typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 000111c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

uint32_t test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 000111cc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 int *piVar1;
 int *piVar2;
 int iVar3;
 char *pcVar4;
 int iVar5;
 size_t sVar6;
 char *__s1;
 uint uVar7;
 bool bVar8;
 
 piVar1 = (int *)operator_new(4);
 *(void **)piVar1 = &PTR__RTTIBase_00022ed8;
 piVar2 = (int *)operator_new(4);
 uVar7 = 0;
 *piVar2 = 0;
 *(void **)piVar2 = &PTR__RTTIBase_00022eec;
 __s1 = *(char **)(*(int *)(*(int *)piVar1 + -4) + 4);
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
 pcVar4 = *(char **)(*(int *)(*(int *)piVar2 + -4) + 4);
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
	iVar3 = (int)__dynamic_cast(piVar1,RTTIBase_typeinfo,RTTIDerivedA_typeinfo,0);
	iVar5 = (int)__dynamic_cast(piVar2,RTTIBase_typeinfo,RTTIDerivedB_typeinfo,0);
 pcVar4 = __s1 + 1;
 if (*__s1 != '*') {
 pcVar4 = __s1;
 }
 sVar6 = strlen(pcVar4);
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
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 void **ppuVar1;
 size_t sVar2;
 void *pvVar3;
 uint32_t uVar4;
 int iVar5;
 int iVar6;
 void **local_40;
 uint32_t local_3c;
 void **local_38;
 uint32_t local_34;
 void **local_30;
 uint32_t local_2c;
 uint32_t uStack_28;
 uint32_t uStack_24;
 uint16_t local_20;
 uint8_t local_1e;
 uint8_t local_1d;
 void **local_1c;
 
 fputs((char *)&DAT_00011c71, stdout);
 local_3c = 0x74736554;
 local_38 = (void **)0x0;
 local_34 = 0;
 local_30 = (void **)0x0;
 local_2c = 0;
 uStack_28 = 0;
 uStack_24 = 0;
 local_20 = 0;
 local_1e = 0;
 iVar6 = 0;
 local_1d = 0;
 local_40 = (void **)0xa;
 sVar2 = strlen((char *)&local_3c);
 printf("%s", &DAT_00011b0d);
 pvVar3 = operator_new__(0x14);
 iVar5 = 0;
 do {
 *(int *)((int)pvVar3 + iVar5 * -4) = iVar6;
 iVar6 = iVar6 + 10;
 iVar5 = iVar5 + -1;
 } while (iVar5 != -5);
 iVar5 = LifecycleClass_instance_count + 1;
 iVar6 = *(int *)((int)pvVar3 + 8);
 LifecycleClass_instance_count = iVar5;
 operator_delete__(pvVar3);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
	printf("%d", LifecycleClass_instance_count * 1000 + iVar6 + iVar5);
	local_1c = &PTR_virtual_func_00022cf0;
 local_3c = 3;
 local_40 = &PTR_virtual_func_00022d10;
 iVar5 = Base_virtual_func((Base *)local_1c, 5);
 iVar6 = Derived_virtual_func((Derived *)local_40, 5);
	printf("%d", iVar5 + iVar6 + 0x15);
	local_38 = &PTR_funcB_00022d4c;
 local_34 = 200;
 local_3c = 100;
 local_40 = &PTR_funcA_00022d34;
	iVar5 = MultiDerived_funcB();
	printf("%u", (uint32_t)(iVar5 + 0x1f));
	local_30 = &PTR_func_00022df0;
 local_2c = 0x32;
 local_40 = &PTR_func_00022dbc;
 local_38 = &PTR_func_00022dd4;
	iVar5 = DiamondDerived_func((DiamondDerived *)&local_30);
 ppuVar1 = local_30;
 *(uint32_t *)((int)&local_3c + (int)local_40[-3]) = 100;
	iVar6 = DiamondDerived_func((DiamondDerived *)&local_30);
	printf("%u", (uint32_t)(iVar6 + iVar5));
	printf("%s", &DAT_00011b9c);
	printf("%s", &DAT_00011bb8);
	printf("%s", &DAT_00011bd4);
	printf("%s", &DAT_00011bf0);
	printf("\n");
	test_cpp_exception();
	printf("%s", &DAT_00011c0c);
	printf("%u", (uint32_t)0x2bf);
	uVar4 = test_cpp_rtti();
	printf("%u", (uint32_t)uVar4);
	return;
}



/* Function: main @ 00011648 */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: virtual_func @ 0001165c */

/* Base::virtual_func(int) */

int Base_virtual_func(Base *this,int param_1)

{
 return param_1 + 1;
}



/* Function: virtual_func @ 00011664 */

/* Derived::virtual_func(int) */

int Derived_virtual_func(Derived *this,int param_1)

{
 return *(int *)(this + 4) * param_1;
}



/* Function: ~Base @ 00011670 */

/* Base::~Base() */

Base * Base_destructor(Base *this)

{
 return this;
}



/* Function: ~MultiDerived @ 00011674 */

/* MultiDerived::~MultiDerived() */

MultiDerived * MultiDerived_destructor(MultiDerived *this)

{
 return this;
}



/* Function: ~DiamondDerived @ 00011678 */

/* DiamondDerived::~DiamondDerived() */

DiamondDerived * DiamondDerived_destructor(DiamondDerived *this)

{
 return this;
}



/* Function: template_max<int> @ 0001167c */

/* int template_max<int>(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_max<double> @ 00011688 */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x0001169c */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* double template_max<double>(double, double) */

double template_max_double(double param_1,double param_2)

{
 if (!__aeabi_dcmpgt(param_1, param_2)) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap<int> @ 000116bc */

/* void template_swap<int>(int&, int&) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 000116d0 */

/* Container<int>::Container() */

void Container_int_constructor(Container_int *this)

{
 *(uint32_t *)((int)this + 0x28) = 0;
 return;
}



/* Function: push @ 000116dc */

/* Container<int>::push(int) */

void Container_int_push(Container_int *this,int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)((int)this + 0x28);
 if (iVar1 < 10) {
 *(int *)((int)this + 0x28) = iVar1 + 1;
 *(int *)((int)this + iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get @ 000116f4 */

/* Container<int>::get(int) const */

uint32_t Container_int_get(Container_int *this,int param_1)

{
 uint32_t uVar1;
 
 uVar1 = 0;
 if (param_1 < 0) {
 return 0;
 }
 if (param_1 < *(int *)((int)this + 0x28)) {
 uVar1 = *(uint32_t *)((int)this + param_1 * 4);
 }
 return uVar1;
}



/* Function: getSize @ 00011714 */

/* Container<int>::getSize() const */

uint32_t Container_int_getSize(Container_int *this)

{
 return *(uint32_t *)((int)this + 0x28);
}



/* Function: Container @ 0001171c */

/* Container<double>::Container() */

void Container_double_constructor(Container_double *this)

{
 *(uint32_t *)((int)this + 0x50) = 0;
 return;
}



/* Function: push @ 00011728 */

/* Container<double>::push(double) */

uint32_t Container_double_push(Container_double *this,double param_1)

{
 uint32_t *puVar1;
 int iVar2;
 
 iVar2 = *(int *)((int)this + 0x50);
 if (9 < iVar2) {
 return SUB84(param_1,0);
 }
 puVar1 = (uint32_t *)((int)this) + iVar2 * 8;
 *puVar1 = 0;
 puVar1[1] = 0;
 *(int *)((int)this + 0x50) = iVar2 + 1;
 return SUB84(param_1,0);
}



/* Function: get @ 0001174c */

/* Container<double>::get(int) const */

uint64_t Container_double_get(Container_double *this,int param_1)

{
 uint32_t uVar1;
 uint32_t uVar2;
 
 uVar2 = 0;
 uVar1 = 0;
 if (-1 < param_1) {
 if (param_1 < *(int *)((int)this + 0x50)) {
 uVar1 = *(uint32_t *)((int)this + param_1 * 8);
 uVar2 = *(uint32_t *)((int)this + param_1 * 8 + 4);
 return CONCAT44(uVar2,uVar1);
 }
 }
 return 0;
}



/* Function: getSize @ 00011778 */

/* Container<double>::getSize() const */

uint32_t Container_double_getSize(Container_double *this)

{
 return *(uint32_t *)((int)this + 0x50);
}



/* Function: getName @ 00011780 */

/* Base::getName() const */

void * Base_getName(void)

{
 return &DAT_00011c64;
}



/* Function: ~Base @ 00011790 */

/* Base::~Base() */

void Base_destructor_delete(Base *self)

{
    operator_delete(self);
    return;
}



/* Function: getName @ 000117a0 */

/* Derived::getName() const */

char * Derived_getName(void)

{
 return "Derived";
}



/* Function: ~Derived @ 000117b0 */

/* Derived::~Derived() */

void Derived_destructor(Derived *self)

{
    operator_delete(self);
    return;
}



/* Function: funcA @ 000117c0 */

/* MultiDerived::funcA() */

uint32_t MultiDerived_funcA(MultiDerived *self)

{
 return 0x1e;
}



/* Function: ~MultiDerived @ 000117c8 */

/* MultiDerived::~MultiDerived() */

void MultiDerived_destructor2(MultiDerived *self)

{
    operator_delete(self);
    return;
}



/* Function: funcB @ 000117d8 */

/* MultiDerived::funcB() */

uint32_t MultiDerived_funcB(void)

{
 return 0x28;
}



/* Function: funcB @ 000117e0 */

/* non-virtual thunk to MultiDerived::funcB() */

uint32_t MultiDerived_funcB_thunk(MultiDerived *this)

{
 return 0x28;
}



/* Function: ~MultiDerived @ 000117e8 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

MultiDerived * MultiDerived_destructor_thunk1(MultiDerived *this)

{
 return this;
}



/* Function: ~MultiDerived @ 000117ec */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_destructor_thunk2(MultiDerived *this)

{
 operator_delete((MultiDerived *)((int)this - 8));
 return;
}



/* Function: funcA @ 00011800 */

/* BaseA::funcA() */

uint32_t BaseA_funcA(void)

{
 return 10;
}



/* Function: ~BaseA @ 00011808 */

/* BaseA::~BaseA() */

BaseA * BaseA_destructor1(BaseA *self)

{
 return self;
}



/* Function: ~BaseA @ 0x0001180c */

/* BaseA::~BaseA() */

void BaseA_destructor2(BaseA *param_1)

{
    operator_delete(param_1);
    return;
}



/* Function: funcB @ 0001181c */

/* BaseB::funcB() */

uint32_t BaseB_funcB(void)

{
 return 0x14;
}



/* Function: ~BaseB @ 00011824 */

/* BaseB::~BaseB() */

BaseB * BaseB_destructor1(BaseB *self)

{
 return self;
}



/* Function: ~BaseB @ 00011828 */

/* BaseB::~BaseB() */

void BaseB_destructor2(BaseB *param_1)

{
    operator_delete(param_1);
    return;
}



/* Function: func @ 00011838 */

/* MiddleA::func() */

int MiddleA_func(MiddleA *this)

{
 return *(int *)((int)this + *(int *)(*(int *)this + -0xc) + 4) + 0x96;
}



/* Function: ~MiddleA @ 00011850 */

/* MiddleA::~MiddleA() */

MiddleA * MiddleA_destructor1(MiddleA *self)

{
 return self;
}



/* Function: ~MiddleA @ 00011854 */

/* MiddleA::~MiddleA() */

void MiddleA_destructor2(MiddleA *param_1)

{
    operator_delete(param_1);
    return;
}



/* Function: func @ 00011864 */

/* virtual thunk to MiddleA::func() */

int MiddleA_func_thunk(MiddleA *self)

{
 return *(int *)((int)self + *(int *)(*(int *)self + -0xc) +
 *(int *)(*(int *)((int)self + *(int *)(*(int *)self) + -0xc)) + -0xc) + 4) + 0x96;
}



/* Function: ~MiddleA @ 00011884 */

/* virtual thunk to MiddleA::~MiddleA() */

MiddleA * MiddleA_destructor_thunk1(MiddleA *self)

{
 return self;
}



/* Function: ~MiddleA @ 00011888 */

/* virtual thunk to MiddleA::~MiddleA() */

void MiddleA_destructor_thunk2(MiddleA *self)

{
 operator_delete((void *)((int)self + *(int *)(*(int *)self + -0x10)));
 return;
}



/* Function: func @ 000118a4 */

/* MiddleB::func() */

int MiddleB_func(MiddleB *this)

{
 return *(int *)((int)this + *(int *)(*(int *)this + -0xc) + 4) + 200;
}



/* Function: ~MiddleB @ 000118bc */

/* MiddleB::~MiddleB() */

MiddleB * MiddleB_destructor1(MiddleB *self)

{
 return self;
}



/* Function: ~MiddleB @ 000118c0 */

/* MiddleB::~MiddleB() */

void MiddleB_destructor2(MiddleB *param_1)

{
    operator_delete(param_1);
    return;
}



/* Function: func @ 000118d0 */

/* virtual thunk to MiddleB::func() */

int MiddleB_func_thunk2(MiddleB *self)

{
 return (intptr_t)*(int *)((int)self + *(int *)(*(int *)self + -0xc) +
 *(int *)(*(int *)((int)self + *(int *)(*(int *)self + -0xc)) + -0xc) + 4) + 200;
}



/* Function: ~MiddleB @ 000118f0 */
/* virtual thunk to MiddleB::~MiddleB() */

void MiddleB_destructor_thunk1(MiddleB *self)

{
 return;
}



/* Function: ~MiddleB @ 000118f4 */
/* virtual thunk to MiddleB::~MiddleB() */

void MiddleB_destructor_thunk2(MiddleB *self)

{
 operator_delete((void *)((int)self + *(int *)(*(int *)self + -0x10)));
 return;
}



/* Function: func @ 00011910 */

/* DiamondDerived::func() */

int DiamondDerived_func(DiamondDerived *self)

{
	return (intptr_t)*(int *)((int)self + *(int *)(*(int *)self + -0xc) + 4) + 0xfa;
}



/* Function: ~DiamondDerived @ 00011928 */
/* DiamondDerived::~DiamondDerived() */

DiamondDerived * DiamondDerived_destructor2(DiamondDerived *self)

{
	operator_delete(self);
	return self;
}



/* Function: func @ 00011938 */

/* non-virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_thunk2(DiamondDerived *self)

{
	return (intptr_t)*(int *)((int)self - 8 + *(int *)(*(int *)((int)self - 8) + -0xc) + 4) + 0xfa;
}



/* Function: ~DiamondDerived @ 00011950 */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_thunk1(DiamondDerived *self)

{
	return;
}



/* Function: ~DiamondDerived @ 00011954 */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_thunk2(DiamondDerived *self)

{
	operator_delete((void *)((int)self + -8));
	return;
}



/* Function: func @ 00011968 */

/* virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_thunk3(DiamondDerived *self)

{
 int offset1 = (int)*(int *)((int)self + -0xc);
 int offset2 = (int)*(int *)((int)self + offset1 + -0xc);
 return (intptr_t)*(int *)((int)self + offset1 + offset2 + 4) + 0xfa;
}



/* Function: ~DiamondDerived @ 00011988 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

DiamondDerived * DiamondDerived_destructor_thunk3(DiamondDerived *param_1)

{
 return param_1;
}



/* Function: ~DiamondDerived @ 0001198c */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_thunk4(DiamondDerived *self)

{
 int offset = (int)*(int *)((int)self + -0x10);
 operator_delete((void *)((int)self + offset));
	return;
}



/* Function: func @ 000119a8 */

/* VirtualBase::func() */

uint32_t VirtualBase_func(void *self)

{
 return 100;
}



/* Function: ~VirtualBase @ 000119b0 */
/* VirtualBase::~VirtualBase() */

VirtualBase * VirtualBase_destructor1(VirtualBase *param_1)

{
	return param_1;
}



/* Function: ~VirtualBase @ 000119b4 */
/* VirtualBase::~VirtualBase() */

void VirtualBase_destructor2(VirtualBase *param_1)

{
	operator_delete(param_1);
	return;
}



/* Function: ~RTTIDerivedA @ 000119c4 */
/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA_destructor(RTTIDerivedA *self)

{
	operator_delete(self);
	return;
}



/* Function: getType @ 000119d4 */

/* RTTIDerivedA::getType() const */

uint32_t RTTIDerivedA_getType(void)

{
 return 1;
}



/* Function: ~RTTIBase @ 000119dc */
/* RTTIBase::~RTTIBase() */

void RTTIBase_destructor(RTTIBase *self)

{
 return;
}



/* Function: ~RTTIDerivedB @ 000119e0 */
/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB_destructor(RTTIDerivedB *self)

{
	operator_delete(self);
	return;
}



/* Function: getType @ 000119f0 */

/* RTTIDerivedB::getType() const */

uint32_t RTTIDerivedB_getType(void)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 83 */
