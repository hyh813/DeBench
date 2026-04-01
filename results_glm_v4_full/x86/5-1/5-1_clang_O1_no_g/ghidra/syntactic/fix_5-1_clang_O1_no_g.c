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
typedef unsigned int uint;
typedef _Bool bool;

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <stdlib.h>

/* Ghidra type compatibility */
typedef void undefined;
typedef uint32_t undefined4;
typedef uint16_t undefined2;
typedef uint8_t undefined1;
typedef struct { uint8_t bytes[3]; } undefined3;
typedef void (*code)(void);
typedef void (*code_varargs)(void*, ...);

/* External C++ ABI declarations */
extern void __cxa_atexit(void (*func)(void*), void* arg, void* dso_handle);
extern void* __cxa_allocate_exception(size_t size);
extern void __cxa_throw(void* exc, void* type, void* dest);
extern void* __dynamic_cast(void* obj, void* src_type, void* dst_type, ptrdiff_t offset);
extern void* __dso_handle;

/* Standard library function declarations */
extern int puts(const char* s);
extern int printf(const char* format, ...);
extern size_t strlen(const char* s);
extern int strcmp(const char* s1, const char* s2);
extern char* strncpy(char* dest, const char* src, size_t n);

/* C++ standard library stubs */
typedef struct {
    void (*Init_ctor)(void*);
    void (*Init_dtor)(void*);
} ios_base_Init;
typedef struct {
    ios_base_Init Init;
} ios_base;
extern ios_base_Init std___ioinit;

/* RTTI type_info stubs */
typedef struct type_info {
    const char* name;
} type_info;

typedef struct {
    type_info typeinfo;
} RTTIBase_class;
typedef struct {
    type_info typeinfo;
} RTTIDerivedA_class;
typedef struct {
    type_info typeinfo;
} RTTIDerivedB_class;

extern type_info int_typeinfo;
extern type_info RTTIBase_typeinfo;
extern type_info RTTIDerivedA_typeinfo;
extern type_info RTTIDerivedB_typeinfo;

/* Container template types */
typedef struct {
    void* vtable;
    int _size;
    int data[10];
} Container_int;

typedef struct {
    void* vtable;
    int _size;
    double data[10];
} Container_double;

/* Stub global variables */
void* PTR_virtual_func_00015ce4;
void* PTR_virtual_func_00015d04;
void* PTR_funcA_00015d28;
void* PTR_funcB_00015d40;
void* PTR_func_00015db0;
void* PTR_func_00015dc8;
void* PTR_func_00015de4;
void* PTR__RTTIBase_00015ecc;
void* PTR__RTTIBase_00015ee0;
char DAT_000131e5[] = "Testing C++ OO Features";
char DAT_00013081[] = "test_cpp_member_func: %d\n";
char DAT_0001309f[] = "test_cpp_constructor: %d\n";
char DAT_000130bb[] = "test_cpp_virtual_func: %d\n";
char DAT_000130d7[] = "test_cpp_multiple_inheritance: %d\n";
char DAT_000130f3[] = "test_cpp_diamond_inheritance: %d\n";
char DAT_00013110[] = "test_cpp_operator_overload: %d\n";
char DAT_0001312c[] = "test_cpp_template_func: %d\n";
char DAT_00013148[] = "test_cpp_template_class: %d\n";
char DAT_00013164[] = "test_cpp_lambda: %d\n";
char DAT_00013180[] = "test_cpp_exception: %d\n";
char DAT_0001319d[] = "test_cpp_smart_ptr: %d\n";
char DAT_000131ba[] = "test_cpp_rtti: %d\n";
void* UNK_000131d8;

/* Memory operators */
void* operator_new(size_t size) { 
    if (size == 0) return malloc(1);
    return malloc(size); 
}
void operator_delete(void* ptr) { 
    if (ptr) free(ptr); 
}

/* Builtins */
void builtin_strncpy(char* dest, const char* src, size_t n) {
    strncpy(dest, src, n);
}

/* Lifecycle class stub - converted to C */
int LifecycleClass_instance_count = 0;

/* Static type_info definitions */
type_info Base_typeinfo = { "4Base" };
type_info Derived_typeinfo = { "7Derived" };
type_info MultiDerived_typeinfo = { "12MultiDerived" };
type_info BaseA_typeinfo = { "5BaseA" };
type_info BaseB_typeinfo = { "5BaseB" };
type_info MiddleA_typeinfo = { "8MiddleA" };
type_info MiddleB_typeinfo = { "8MiddleB" };
type_info DiamondDerived_typeinfo = { "14DiamondDerived" };
type_info VirtualBase_typeinfo = { "10VirtualBase" };
type_info RTTIBase_typeinfo = { "8RTTIBase" };
type_info RTTIDerivedA_typeinfo = { "12RTTIDerivedA" };
type_info RTTIDerivedB_typeinfo = { "12RTTIDerivedB" };

/* Base classes for virtual functions */
struct Base {
    void* vtable;
};

struct Derived {
    void* vtable;
    int value;
};

struct MultiDerived {
    void* vtable;
};

struct BaseA {
    void* vtable;
};

struct BaseB {
    void* vtable;
};

struct MiddleA {
    void* vtable;
};

struct MiddleB {
    void* vtable;
};

struct DiamondDerived {
    void* vtable;
};

struct VirtualBase {
    void* vtable;
};

struct RTTIBase {
    void* vtable;
};

struct RTTIDerivedA {
    void* vtable;
};

struct RTTIDerivedB {
    void* vtable;
};

/* Function declarations */
void call_virtual_func(Base *param_1,int param_2);
int Base_virtual_func(Base *this,int param_1);
int __thiscall Derived_virtual_func(Derived *this,int param_1);
void __thiscall Base_dtor(Base *this);
void __thiscall Base_delete(Base *this);
void* __thiscall Base_getName(Base *this);
void __thiscall Derived_dtor(Derived *this);
char* __thiscall Derived_getName(Derived *this);
void* operator_new(size_t size);
void operator_delete(void* ptr);
int test_cpp_exception(void);
int test_cpp_rtti(void);
int MultiDerived_funcA(void);

int MultiDerived_funcB(MultiDerived *this);
int __thiscall MultiDerived_funcB_thunk(MultiDerived *this);
void __thiscall MultiDerived_dtor(MultiDerived *this);
void __thiscall MultiDerived_dtor_thunk(MultiDerived *this);
void __thiscall MultiDerived_dtor_thunk2(MultiDerived *this);
int __thiscall BaseA_funcA(BaseA *this);
void __thiscall BaseA_dtor(BaseA *this);
void __thiscall BaseA_dtor2(BaseA *this);
int __thiscall BaseB_funcB(BaseB *this);
void __thiscall BaseB_dtor(BaseB *this);
void __thiscall BaseB_dtor2(BaseB *this);
int __thiscall DiamondDerived_func(DiamondDerived *this);
int __thiscall MiddleA_func(void);
void __thiscall MiddleA_dtor(MiddleA *this);
void __thiscall MiddleA_dtor2(MiddleA *this);
int __thiscall MiddleA_func_thunk(MiddleA *this);
void __thiscall MiddleA_dtor_thunk(MiddleA *this);
void __thiscall MiddleA_dtor_thunk2(MiddleA *this);
int __thiscall MiddleB_func(MiddleB *this);
void __thiscall MiddleB_dtor(MiddleB *this);
void __thiscall MiddleB_dtor2(MiddleB *this);
int __thiscall MiddleB_func_thunk(MiddleB *this);
void __thiscall MiddleB_dtor_thunk(MiddleB *this);
void __thiscall MiddleB_dtor_thunk2(MiddleB *this);
void __thiscall DiamondDerived_delete(DiamondDerived *this);
int __thiscall DiamondDerived_func_thunk1(DiamondDerived *this);
void __thiscall DiamondDerived_dtor_thunk(DiamondDerived *this);
void __thiscall DiamondDerived_dtor_thunk2(DiamondDerived *this);
int __thiscall DiamondDerived_func_thunk2(DiamondDerived *this);
void __thiscall DiamondDerived_dtor_thunk3(DiamondDerived *this);
void __thiscall DiamondDerived_dtor_thunk4(DiamondDerived *this);
int __thiscall VirtualBase_func(VirtualBase *this);
void __thiscall VirtualBase_dtor(VirtualBase *this);
void __thiscall VirtualBase_dtor2(VirtualBase *this);
void __thiscall RTTIDerivedA_dtor(RTTIDerivedA *this);
int __thiscall RTTIDerivedA_getType(RTTIDerivedA *this);
void __thiscall RTTIBase_dtor(RTTIBase *this);
void __thiscall RTTIDerivedB_dtor(RTTIDerivedB *this);
int __thiscall RTTIDerivedB_getType(RTTIDerivedB *this);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-1/5-1_clang_O1_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 /* Stub - original had null pointer dereference */
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00011170 */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 /* C++ initialization stubbed for C compilation */
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
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 int *piVar1;
 int *piVar2;
 int iVar3;
 
 iVar3 = 0;
 piVar1 = operator_new(0x14);
 piVar2 = piVar1;
 do {
 *piVar2 = iVar3;
 iVar3 = iVar3 + 10;
 piVar2 = piVar2 + 1;
 } while (iVar3 != 0x32);
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 iVar3 = LifecycleClass_instance_count + piVar1[2];
 operator_delete(piVar1);
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
 void **local_14;
 int local_10;
 void **local_c;
 
 local_c = (void**)&PTR_virtual_func_00015ce4;
 local_14 = (void**)&PTR_virtual_func_00015d04;
 local_10 = 3;
 iVar1 = Base_virtual_func((Base *)local_c,5);
 iVar2 = (*(code *)*local_14)(local_14,5);
 return iVar2 + iVar1 + 0x15;
}



/* Function: test_cpp_multiple_inheritance @ 000114b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

int test_cpp_multiple_inheritance(void)

{
 int iVar1;
 int iVar2;
 void **local_14;
 int local_10;
 
 local_14 = (void**)&PTR_funcB_00015d40;
 local_10 = 200;
 iVar1 = MultiDerived_funcA();
 iVar2 = (*(code *)*local_14)(local_14);
 return iVar2 + iVar1 + 1;
}



/* Function: test_cpp_diamond_inheritance @ 00011510 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
 int iVar1;
 int iVar2;
 void **local_14;
 int local_10;
 
 local_14 = (void**)&PTR_func_00015de4;
 local_10 = 0x32;
 iVar1 = DiamondDerived_func((DiamondDerived *)local_14);
 local_10 = 100;
 iVar2 = (*(code *)*local_14)((DiamondDerived *)local_14);
 return iVar2 + iVar1;
}



/* Function: test_cpp_operator_overload @ 00011580 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

int test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00011590 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

int test_cpp_template_func(void)

{
 return 0x27;
}



/* Function: test_cpp_template_class @ 000115a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

int test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 000115b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

int test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_exception @ 000115c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

int test_cpp_exception(void)

{
 int *puVar1;
 
 puVar1 = (int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* try { // try from 000115e5 to 000115fe has its CatchHandler @ 00011601 */
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,&int_typeinfo,0);
 return 0;
}



/* Function: test_cpp_smart_ptr @ 000116b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

int test_cpp_smart_ptr(void)

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
 
 piVar1 = (int*)operator_new(4);
 *(void**)piVar1 = &PTR__RTTIBase_00015ecc;
 piVar2 = (int*)operator_new(4);
 *(void**)piVar2 = &PTR__RTTIBase_00015ee0;
 __s1 = *(char **)((char*)piVar1 + 4);
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
 __s1_00 = *(char **)((char*)piVar2 + 4);
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
 iVar3 = __dynamic_cast(piVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 uVar6 = uVar5 + 100;
 if (iVar3 == 0) {
 uVar6 = uVar5;
 }
 iVar3 = __dynamic_cast(piVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 uVar5 = uVar6 + 200;
 if (iVar3 == 0) {
 uVar5 = uVar6;
 }
 sVar4 = strlen(__s1 + (*__s1 == '*'));
 (**(code **)((char*)piVar1 + 4))((void*)piVar1);
 (**(code **)((char*)piVar2 + 4))((void*)piVar2);
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
 int uVar5;
 int *piVar6;
 int iVar7;
 void **local_3c;
 char local_38 [4];
 void **local_34;
 int local_30;
 void **local_2c;
 int local_28;
 int local_24;
 int local_20;
 int uStack_1c;
 int local_19;
 void **local_14 [2];
 
 puts(&DAT_000131e5);
 builtin_strncpy(local_38,"Test",4);
 local_34 = (void **)0x0;
 local_30 = 0;
 local_2c = (void **)0x0;
 local_28 = 0;
 local_24 = 0;
 local_20 = 0;
 uStack_1c = 0;
 local_19 = 0;
 local_3c = (void **)0xa;
 sVar2 = strlen(local_38);
 printf(&DAT_00013081,sVar2 + 0x125c);
 iVar7 = 0;
 piVar3 = operator_new(0x14);
 piVar6 = piVar3;
 do {
 *piVar6 = iVar7;
 iVar7 = iVar7 + 10;
 piVar6 = piVar6 + 1;
 } while (iVar7 != 0x32);
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 iVar7 = LifecycleClass_instance_count + piVar3[2];
 operator_delete(piVar3);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 printf(&DAT_0001309f,LifecycleClass_instance_count * 1000 + iVar7);
 local_14[0] = &PTR_virtual_func_00015ce4;
 local_3c = &PTR_virtual_func_00015d04;
 local_38[0] = '\x03';
 local_38[1] = '\0';
 local_38[2] = '\0';
 local_38[3] = '\0';
 iVar7 = Base_virtual_func((Base *)local_14,5);
 iVar4 = (*(code *)*local_3c)(local_3c,5);
 printf(&DAT_000130bb,iVar4 + iVar7 + 0x15);
 iVar7 = MultiDerived_funcB((MultiDerived *)&PTR_funcB_00015d40) + MultiDerived_funcA();
 printf(&DAT_000130d7,iVar7 + 0x1f);
 local_38[0] = 'd';
 local_38[1] = '\0';
 local_38[2] = '\0';
 local_38[3] = '\0';
 local_30 = 200;
 iVar7 = MultiDerived_funcB((MultiDerived *)local_34) + MultiDerived_funcA();
 printf(&DAT_000130d7,iVar7 + 0x1f);
 local_3c = &PTR_func_00015db0;
 local_2c = &PTR_func_00015de4;
 local_34 = &PTR_func_00015dc8;
 local_28 = 0x32;
 iVar7 = DiamondDerived_func((DiamondDerived *)&local_2c);
 pcVar1 = (char*)local_38 + 0;
 *pcVar1 = 'd';
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

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: virtual_func @ 00011ad0 */

/* Base::virtual_func(int) */

int Base_virtual_func(Base *this,int param_1)

{
 return param_1 + 1;
}



/* Function: virtual_func @ 00011ae0 */

/* Derived::virtual_func(int) */

int __thiscall Derived_virtual_func(Derived *this,int param_1)

{
 return *(int *)((char*)this + 4) * param_1;
}



/* Function: Base_dtor @ 00011af0 */

/* Base::~Base() */

void __thiscall Base_dtor(Base *this)

{
 return;
}



/* Function: MultiDerived_dtor @ 00011b00 */

/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived_dtor(MultiDerived *this)

{
 return;
}



/* Function: DiamondDerived_dtor @ 00011b10 */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived_dtor(DiamondDerived *this)

{
 return;
}



/* Function: template_max<int> @ 00011b20 */

/* int template_max<int>(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: template_max<double> @ 00011b30 */

/* double template_max<double>(double, double) */

double template_max_double(double param_1,double param_2)

{
 if (param_2 <= param_1 || param_1 != param_2) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: template_swap<int> @ 00011b50 */

/* void template_swap<int>(int&, int&) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 00011b70 */

/* Container<int>::Container() */

void __thiscall Container_int_Constructor(Container_int *this)

{
 this->_size = 0;
 return;
}



/* Function: push @ 00011b80 */

/* Container<int>::push(int) */

void __thiscall Container_int_push(Container_int *this,int param_1)

{
 int iVar1;
 
 iVar1 = this->_size;
 if (iVar1 < 10) {
 this->_size = iVar1 + 1;
 this->data[iVar1] = param_1;
 }
 return;
}



/* Function: get @ 00011ba0 */

/* Container<int>::get(int) const */

int __thiscall Container_int_get(Container_int *this,int param_1)

{
 int uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < this->_size)) {
 uVar1 = this->data[param_1];
 }
 return uVar1;
}



/* Function: getSize @ 00011bc0 */

/* Container<int>::getSize() const */

int __thiscall Container_int_getSize(Container_int *this)

{
 return this->_size;
}



/* Function: Container @ 00011bd0 */

/* Container<double>::Container() */

void __thiscall Container_double_Constructor(Container_double *this)

{
 this->_size = 0;
 return;
}



/* Function: push @ 00011be0 */

/* Container<double>::push(double) */

void __thiscall Container_double_push(Container_double *this,double param_1)

{
 int iVar1;
 
 iVar1 = this->_size;
 if (iVar1 < 10) {
 this->_size = iVar1 + 1;
 this->data[iVar1] = param_1;
 }
 return;
}



/* Function: get @ 00011c00 */

/* Container<double>::get(int) const */

double __thiscall Container_double_get(Container_double *this,int param_1)

{
 double lVar1;
 
 lVar1 = (double)0;
 if ((-1 < param_1) && (param_1 < this->_size)) {
 lVar1 = this->data[param_1];
 }
 return lVar1;
}



/* Function: getSize @ 00011c20 */

/* Container<double>::getSize() const */

int __thiscall Container_double_getSize(Container_double *this)

{
 return this->_size;
}



/* Function: getName @ 00011c30 */

/* Base::getName() const */

void* Base_getName(Base *this)

{
 return &UNK_000131d8;
}



/* Function: FUN_00011c35 @ 00011c35 */

int FUN_00011c35(void)

{
 return 0x15a3;
}



/* Function: Base_delete @ 00011c50 */

/* Base::~Base() */

void Base_delete(Base *this)

{
 operator_delete(this);
 return;
}



/* Function: getName @ 00011c80 */

/* Derived::getName() const */

char* __thiscall Derived_getName(Derived *this)

{
 return "Derived";
}



/* Function: FUN_00011c85 @ 00011c85 */

int FUN_00011c85(void)

{
 return 0x1558;
}



/* Function: Derived_dtor @ 00011ca0 */

/* Derived::~Derived() */

void Derived_dtor(Derived *this)

{
 operator_delete(this);
 return;
}



/* Function: funcA @ 00011cd0 */

/* MultiDerived::funcA() */

int MultiDerived_funcA(void)

{
 return 0x1e;
}



/* Function: MultiDerived_dtor @ 00011ce0 */

/* MultiDerived::~MultiDerived() */

void MultiDerived_dtor(MultiDerived *this)

{
 operator_delete(this);
 return;
}



/* Function: funcB @ 00011d10 */

/* MultiDerived::funcB() */

int MultiDerived_funcB(MultiDerived *this)

{
 return 0x28;
}



/* Function: funcB @ 00011d20 */

/* non-virtual thunk to MultiDerived::funcB() */

int MultiDerived_funcB_thunk(MultiDerived *this)

{
 return 0x28;
}



/* Function: MultiDerived_dtor_thunk @ 00011d30 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_dtor_thunk(MultiDerived *this)

{
 return;
}



/* Function: MultiDerived_dtor_thunk2 @ 00011d40 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_dtor_thunk2(MultiDerived *this)

{
 operator_delete((void*)((char*)this - 8));
 return;
}



/* Function: funcA @ 00011d70 */

/* BaseA::funcA() */

int __thiscall BaseA_funcA(BaseA *this)

{
 return 10;
}



/* Function: BaseA_dtor @ 00011d80 */

/* BaseA::~BaseA() */

void __thiscall BaseA_dtor(BaseA *this)

{
 return;
}



/* Function: BaseA_dtor2 @ 00011d90 */

/* BaseA::~BaseA() */

void BaseA_dtor2(BaseA *this)

{
 operator_delete(this);
 return;
}



/* Function: funcB @ 00011dc0 */

/* BaseB::funcB() */

int __thiscall BaseB_funcB(BaseB *this)

{
 return 0x14;
}



/* Function: BaseB_dtor @ 00011dd0 */

/* BaseB::~BaseB() */

void __thiscall BaseB_dtor(BaseB *this)

{
 return;
}



/* Function: BaseB_dtor2 @ 00011de0 */

/* BaseB::~BaseB() */

void BaseB_dtor2(BaseB *this)

{
 operator_delete(this);
 return;
}



/* Function: func @ 00011e10 */

/* MiddleA::func() */

int __thiscall MiddleA_func(void)

{
 return 0x96;
}



/* Function: MiddleA_dtor @ 00011e30 */

/* MiddleA::~MiddleA() */

void __thiscall MiddleA_dtor(MiddleA *this)

{
 return;
}



/* Function: MiddleA_dtor2 @ 00011e40 */

/* MiddleA::~MiddleA() */

void MiddleA_dtor2(MiddleA *this)

{
 operator_delete(this);
 return;
}



/* Function: func @ 00011e70 */

/* virtual thunk to MiddleA::func() */

int MiddleA_func_thunk(MiddleA *this)

{
 return *(int *)(this + *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4 +
 *(int *)(*(int *)this + -0xc)) + 0x96;
}



/* Function: MiddleA_dtor_thunk @ 00011e90 */

/* virtual thunk to MiddleA::~MiddleA() */

void MiddleA_dtor_thunk(MiddleA *this)

{
 return;
}



/* Function: MiddleA_dtor_thunk2 @ 00011ea0 */

/* virtual thunk to MiddleA::~MiddleA() */

void MiddleA_dtor_thunk2(MiddleA *this)

{
 operator_delete((void*)((char*)this + *(int *)((char*)*(int *)this + -0x10)));
 return;
}



/* Function: func @ 00011ed0 */

/* MiddleB::func() */

int __thiscall MiddleB_func(MiddleB *this)

{
 return *(int *)((char*)this + *(int *)((char*)*(int *)this + -0xc) + 4) + 200;
}



/* Function: MiddleB_dtor @ 00011ef0 */

/* MiddleB::~MiddleB() */

void __thiscall MiddleB_dtor(MiddleB *this)

{
 return;
}



/* Function: MiddleB_dtor2 @ 00011f00 */

/* MiddleB::~MiddleB() */

void __thiscall MiddleB_dtor2(MiddleB *this)

{
 operator_delete(this);
 return;
}



/* Function: func @ 00011f30 */

/* virtual thunk to MiddleB::func() */

int MiddleB_func_thunk(MiddleB *this)

{
 return *(int *)(this + *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4 +
 *(int *)(*(int *)this + -0xc)) + 200;
}



/* Function: MiddleB_dtor_thunk @ 00011f50 */

/* virtual thunk to MiddleB::~MiddleB() */

void MiddleB_dtor_thunk(MiddleB *this)

{
 return;
}



/* Function: MiddleB_dtor_thunk2 @ 00011f60 */

/* virtual thunk to MiddleB::~MiddleB() */

void MiddleB_dtor_thunk2(MiddleB *this)

{
 operator_delete((void*)((char*)this + *(int *)((char*)*(int *)this + -0x10)));
 return;
}



/* Function: func @ 00011f90 */

/* DiamondDerived::func() */

int __thiscall DiamondDerived_func(DiamondDerived *this)

{
 return *(int *)((char*)this + *(int *)((char*)*(int *)this + -0xc) + 4) + 0xfa;
}



/* Function: DiamondDerived_delete @ 00011fb0 */

/* DiamondDerived::~DiamondDerived() */

void DiamondDerived_delete(DiamondDerived *this)

{
 operator_delete(this);
 return;
}



/* Function: func @ 00011fe0 */

/* non-virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_thunk1(DiamondDerived *this)

{
 return *(int *)((char*)this + *(int *)((char*)((char*)this - 8) + -0xc) + -4) + 0xfa;
}



/* Function: DiamondDerived_dtor_thunk @ 00012000 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_dtor_thunk(DiamondDerived *this)

{
 return;
}



/* Function: DiamondDerived_dtor_thunk2 @ 00012010 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_dtor_thunk2(DiamondDerived *this)

{
 operator_delete((void*)((char*)this - 8));
 return;
}



/* Function: func @ 00012040 */

/* virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_thunk2(DiamondDerived *this)

{
 return *(int *)((char*)this + *(int *)((char*)((char*)this + *(int *)((char*)*(int *)this + -0xc)) + -0xc) + 4 +
 *(int *)((char*)*(int *)this + -0xc)) + 0xfa;
}



/* Function: DiamondDerived_dtor_thunk3 @ 00012060 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_dtor_thunk3(DiamondDerived *this)

{
 return;
}



/* Function: DiamondDerived_dtor_thunk4 @ 00012070 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_dtor_thunk4(DiamondDerived *this)

{
 operator_delete((void*)((char*)this + *(int *)((char*)*(int *)this + -0x10)));
 return;
}



/* Function: func @ 000120a0 */

/* VirtualBase::func() */

int __thiscall VirtualBase_func(VirtualBase *this)

{
 return 100;
}



/* Function: VirtualBase_dtor @ 000120b0 */

/* VirtualBase::~VirtualBase() */

void __thiscall VirtualBase_dtor(VirtualBase *this)

{
 return;
}



/* Function: VirtualBase_dtor2 @ 000120c0 */

/* VirtualBase::~VirtualBase() */

void VirtualBase_dtor2(VirtualBase *this)

{
 operator_delete(this);
 return;
}



/* Function: ~RTTIDerivedA @ 000120f0 */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA_dtor(RTTIDerivedA *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 00012120 */

/* RTTIDerivedA::getType() const */

int __thiscall RTTIDerivedA_getType(RTTIDerivedA *this)

{
 return 1;
}



/* Function: ~RTTIBase @ 00012130 */

/* RTTIBase::~RTTIBase() */

void __thiscall RTTIBase_dtor(RTTIBase *this)

{
 return;
}



/* Function: ~RTTIDerivedB @ 00012140 */

/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB_dtor(RTTIDerivedB *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 00012170 */

/* RTTIDerivedB::getType() const */

int __thiscall RTTIDerivedB_getType(RTTIDerivedB *this)

{
 return 2;
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 90 */
