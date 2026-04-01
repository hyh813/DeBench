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
typedef unsigned int undefined4;
typedef unsigned short undefined2;
typedef unsigned char undefined1;
typedef unsigned long long undefined8;

/* Ghidra-specific macros */
#define SUB84(val, offset) ((unsigned int)((unsigned long long)(val) >> (offset)))
#define CONCAT44(hi, lo) (((unsigned long long)(hi) << 32) | (lo))
typedef unsigned long long ulonglong;

/* Forward declarations for container types */
struct Container_int {
 char data[0xA0];
};
struct Container_double {
 char data[0x100];
};

/* Type definitions */
typedef double double_t;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/5-1/5-1_clang_O2_no_g
 * Processor: ARM
 * Compiler Spec: default
 */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/* Forward declarations for C++ types */
typedef void (*code)();
struct Base;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;

/* Forward declarations for C++ operators and functions */
void* operator_new(size_t);
void operator_delete(void*);
void* __cxa_allocate_exception(size_t);
void __cxa_throw(void*, void*, void*);
int __dynamic_cast(void*, void*, void*, int);

/* Forward declarations for missing types and globals */
struct LifecycleClass {
 int instance_count;
};
int LifecycleClass_instance_count = 0;
int int_typeinfo = 0;
int PTR__RTTIBase_00021ed8 = 0;
int PTR__RTTIBase_00021eec = 0;
int RTTIBase_typeinfo = 0;
int RTTIDerivedA_typeinfo = 0;
int RTTIDerivedB_typeinfo = 0;
char DAT_0001134c[] = "Test string";
char DAT_000111f5[] = "";
char DAT_00011213[] = "";
char DAT_0001122f[] = "";
char DAT_0001124b[] = "";
char DAT_00011267[] = "";
char DAT_00011284[] = "";
char DAT_000112a0[] = "";
char DAT_000112bc[] = "";
char DAT_000112d8[] = "";
char DAT_000112f4[] = "";
char DAT_00011311[] = "";
char DAT_0001132e[] = "";

/* C++ runtime stub implementations */
void* operator_new(size_t size) {
 return malloc(size);
}

void operator_delete(void* ptr) {
 free(ptr);
}

void* __cxa_allocate_exception(size_t size) {
 return malloc(size);
}

void __cxa_throw(void* exc, void* type, void* dest) {
 /* Stub - doesn't return in real implementation */
}

int __dynamic_cast(void* src, void* src_type, void* dst_type, int flags) {
 return 0; /* Stub - return 0 for failed cast */
}

/* CRT stub function _init removed by preprocessor */




/* Function: _GLOBAL__sub_I_5_1.cpp @ 00010958 */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00010afc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

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



/* Function: test_cpp_constructor @ 00010b64 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00010b80 */

/* call_virtual_func(Base*) */

void call_virtual_func(Base *param_1)

{
 /* WARNING: Could not recover jumptable at 0x00010b88. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*(code *)*(undefined4 **)param_1)();
 return;
}



/* Function: test_cpp_virtual_func @ 00010b8c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

undefined4 test_cpp_virtual_func(void)

{
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 00010b94 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined4 test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00010b9c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

undefined4 test_cpp_diamond_inheritance(void)

{
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00010ba8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined4 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00010bb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

undefined4 test_cpp_template_func(void)

{
 return 0x27;
}



/* Function: test_cpp_template_class @ 00010bb8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined4 test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 00010bc0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined4 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_exception @ 00010bc8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,(void*)&int_typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 00010c98 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined4 test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00010ca4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 undefined4 *puVar1;
 int *piVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 
 puVar1 = (undefined4 *)operator_new(4);
 *puVar1 = (undefined4)&PTR__RTTIBase_00021ed8;
 piVar2 = (int *)operator_new(4);
 *piVar2 = (int)&PTR__RTTIBase_00021eec;
 iVar3 = __dynamic_cast(puVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar4 = __dynamic_cast(piVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 operator_delete(puVar1);
 (*(void (*)(void*))(*(int*)((char*)*piVar2 + 4)))(piVar2);
 iVar5 = 0x82;
 if (iVar3 == 0) {
 iVar5 = 0x1e;
 }
 if (iVar4 != 0) {
 iVar5 = iVar5 + 200;
 }
 return iVar5 + 0xe;
}



/* Function: test_cpp_oo_features @ 00010d70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 size_t sVar1;
 undefined4 uVar2;
 undefined4 *puVar3;
 int *piVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 undefined4 local_38;
 undefined4 uStack_34;
 undefined4 uStack_30;
 undefined4 local_2c;
 undefined4 uStack_28;
 undefined4 uStack_24;
 undefined4 uStack_20;
 undefined2 local_1c;
 undefined1 local_1a;
 undefined1 local_19;
 
 printf("%s\n", &DAT_0001134c);
 local_38 = 0x74736554;
 uStack_34 = 0;
 uStack_30 = 0;
 local_2c = 0;
 uStack_28 = 0;
 uStack_24 = 0;
 uStack_20 = 0;
 local_1c = 0;
 local_1a = 0;
 local_19 = 0;
 sVar1 = strlen((char *)&local_38);
 printf("%d\n",sVar1 + 0x125c);
 printf("%d\n",LifecycleClass_instance_count * 0x3e9 + 0x15);
 printf("%d\n",0x2a);
 printf("%d\n",0x47);
 printf("%d\n",0x28a);
 printf("%d\n",0x16);
 printf("%d\n",0x27);
 printf("%d\n",0x10);
 printf("%d\n",0x55);
 uVar2 = 0;
 printf("%d\n",uVar2);
 printf("%d\n",0x2bf);
 puVar3 = (undefined4 *)operator_new(4);
 *puVar3 = (undefined4)&PTR__RTTIBase_00021ed8;
 piVar4 = (int *)operator_new(4);
 *piVar4 = (int)&PTR__RTTIBase_00021eec;
 iVar5 = __dynamic_cast(puVar3,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar6 = __dynamic_cast(piVar4,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 operator_delete(puVar3);
 (*(void (*)(void*))(*(int*)((char*)*piVar4 + 4)))(piVar4);
 iVar7 = 0x82;
 if (iVar5 == 0) {
 iVar7 = 0x1e;
 }
 if (iVar6 != 0) {
 iVar7 = iVar7 + 200;
 }
 printf("%d\n",iVar7 + 0xe);
 return;
}



/* Function: main @ 00010fac */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max_int @ 00010fc0 */

/* int template_max_int(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_max_double @ 00010fcc */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00010fe0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* double template_max_double(double, double) */

double template_max_double(double param_1,double param_2)

{
 if (param_1 > param_2) {
 return param_1;
 }
 return param_2;
}



/* Function: template_swap_int @ 00011000 */

/* void template_swap_int(int*, int*) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container_int @ 00011014 */

/* Container_int::Container_int() */

void Container_int_Constructor(Container_int *this_ptr)

{
 *(undefined4 *)(this_ptr + 0x28) = 0;
 return;
}



/* Function: push_int @ 00011020 */

/* Container_int::push_int(int) */

void Container_int_push(Container_int *this_ptr,int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this_ptr + 0x28);
 if (iVar1 < 10) {
 *(int *)(this_ptr + 0x28) = iVar1 + 1;
 *(int *)(this_ptr + iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get_int @ 00011038 */

/* Container_int::get_int(int) const */

undefined4 Container_int_get(Container_int *this_ptr,int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0;
 if (param_1 < 0) {
 return 0;
 }
 if (param_1 < *(int *)(this_ptr + 0x28)) {
 uVar1 = *(undefined4 *)(this_ptr + param_1 * 4);
 }
 return uVar1;
}



/* Function: getSize_int @ 00011058 */

/* Container_int::getSize_int() const */

undefined4 Container_int_getSize(Container_int *this_ptr)

{
 return *(undefined4 *)(this_ptr + 0x28);
}



/* Function: Container_double @ 00011060 */

/* Container_double::Container_double() */

void Container_double_Constructor(Container_double *this_ptr)

{
 *(undefined4 *)(this_ptr + 0x50) = 0;
 return;
}



/* Function: push_double @ 0001106c */

/* Container_double::push_double(double) */

undefined4 Container_double_push(Container_double *this_ptr,double_t param_1)

{
 undefined4 *puVar1;
 int iVar2;
 
 iVar2 = *(int *)(this_ptr + 0x50);
 if (9 < iVar2) {
 return 0;
 }
 puVar1 = (undefined4 *)(this_ptr + iVar2 * 8);
 *puVar1 = SUB84(param_1,0);
 puVar1[1] = (int)((ulonglong)param_1 >> 0x20);
 *(int *)(this_ptr + 0x50) = iVar2 + 1;
 return 0;
}



/* Function: get_double @ 00011090 */

/* Container_double::get_double(int) const */

undefined8 Container_double_get(Container_double *this_ptr,int param_1)

{
 undefined4 uVar1;
 undefined4 uVar2;
 
 uVar2 = 0;
 uVar1 = 0;
 if (-1 < param_1) {
 if (param_1 < *(int *)(this_ptr + 0x50)) {
 uVar1 = *(undefined4 *)(this_ptr + param_1 * 8);
 uVar2 = *(undefined4 *)(this_ptr + param_1 * 8 + 4);
 }
 return CONCAT44(uVar2,uVar1);
 }
 return 0;
}



/* Function: getSize_double @ 000110bc */

/* Container_double::getSize_double() const */

undefined4 Container_double_getSize(Container_double *this_ptr)

{
 return *(undefined4 *)(this_ptr + 0x50);
}



/* Function: RTTIDerivedA_destructor @ 000110c4 */

/* RTTIDerivedA::destructor() */

void RTTIDerivedA_destructor(RTTIDerivedA *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: RTTIDerivedA_getType @ 000110c8 */

/* RTTIDerivedA::getType() */

undefined4 RTTIDerivedA_getType(RTTIDerivedA *this_ptr)

{
 return 1;
}



/* Function: RTTIBase_destructor @ 000110d0 */

/* RTTIBase::destructor() */

RTTIBase * RTTIBase_destructor(RTTIBase *this_ptr)

{
 return this_ptr;
}



/* Function: RTTIDerivedB_destructor @ 000110d4 */

/* RTTIDerivedB::destructor() */

void RTTIDerivedB_destructor(RTTIDerivedB *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: RTTIDerivedB_getType @ 000110d8 */

/* RTTIDerivedB::getType() */

undefined4 RTTIDerivedB_getType(RTTIDerivedB *this_ptr)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 39 */
