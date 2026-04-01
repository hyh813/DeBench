/* Auto-injected type definitions by preprocessor */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

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
typedef unsigned int undefined4;
typedef unsigned short undefined2;
typedef unsigned char undefined1;
typedef void (*code)(void*);

/* Forward declarations for C++ classes */
typedef struct Base Base;
typedef struct LifecycleClass LifecycleClass;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;

/* Base class with vptr */
struct Base {
 void *_vptr_Base;
};

/* LifecycleClass with instance_count */
struct LifecycleClass {
 int instance_count;
};

/* RTTIBase with typeinfo */
struct RTTIBase {
 void *typeinfo;
};

/* Container_int struct */
struct Container_int {
 int size;
 int data[10];
};

/* Container_double struct */
struct Container_double {
 int size;
 double data[10];
};

/* External function declarations */
void *operator_new(unsigned int size);
void operator_delete(void *ptr);
void *__cxa_allocate_exception(unsigned int size);
void __cxa_throw(void *exc, void *typeinfo, void *destructor);
int __dynamic_cast(void *src, void *src_type, void *dst_type, int flags);

/* C++ runtime stub implementations */
void *operator_new(unsigned int size)
{
 return malloc(size);
}

void operator_delete(void *ptr)
{
 free(ptr);
}

void *__cxa_allocate_exception(unsigned int size)
{
 return malloc(size);
}

void __cxa_throw(void *exc, void *typeinfo, void *destructor)
{
 /* Stub - does not return in real implementation */
 while(1);
}

int __dynamic_cast(void *src, void *src_type, void *dst_type, int flags)
{
 /* Stub implementation */
 return 0;
}

/* Global variables */
int LifecycleClass_instance_count = 0;
void *PTR__RTTIBase_00021ed8 = 0;
void *PTR__RTTIBase_00021eec = 0;
void *RTTIBase_typeinfo = 0;
void *RTTIDerivedA_typeinfo = 0;
void *RTTIDerivedB_typeinfo = 0;
const char DAT_0001134c[] = "Test C++ OO Features";
const char DAT_000111f5[] = "%d\n";
const char DAT_00011213[] = "%d\n";
const char DAT_0001122f[] = "%d\n";
const char DAT_0001124b[] = "%d\n";
const char DAT_00011267[] = "%d\n";
const char DAT_00011284[] = "%d\n";
const char DAT_000112a0[] = "%d\n";
const char DAT_000112bc[] = "%d\n";
const char DAT_000112d8[] = "%d\n";
const char DAT_000112f4[] = "%d\n";
const char DAT_00011311[] = "%d\n";
const char DAT_0001132e[] = "%d\n";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/5-1/5-1_clang_O2_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: _GLOBAL__sub_I_5_1.cpp @ 00010958 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 /* C++ iostream initialization stub - removed for C compilation */
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00010afc */

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



/* Function: test_cpp_constructor @ 00010b64 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00010b80 */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x00010b88. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = ((int (*)(void*))obj->_vptr_Base)(obj);
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 00010b8c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
 /* Unresolved local var: Derived derived@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r4@[???]
 Unresolved local var: Base base@[???]
 Unresolved local var: Base * pb@[???]
 Unresolved local var: Base * pd@[???] */
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 00010b94 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
 /* Unresolved local var: MultiDerived obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int ptr_equal@[???]
 Unresolved local var: BaseA * pa@[???]
 Unresolved local var: BaseB * pb@[???] */
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00010b9c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_diamond_inheritance(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: DiamondDerived obj@[???]
 Unresolved local var: VirtualBase * pb@[???] */
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00010ba8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 /* Unresolved local var: Point p1@[???]
 Unresolved local var: Point p2@[???]
 Unresolved local var: Point p3@[???]
 Unresolved local var: bool eq@[???] */
 return 0x16;
}



/* Function: test_cpp_template_func @ 00010bb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: double r2@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 return 0x27;
}



/* Function: test_cpp_template_class @ 00010bb8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
 /* Unresolved local var: Container<int> int_container@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: double r3@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: Container<double> double_container@[???] */
 return 0x10;
}



/* Function: test_cpp_lambda @ 00010bc0 */

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



/* Function: test_cpp_exception @ 00010bc8 */

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
 __cxa_throw(puVar1,RTTIBase_typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 00010c98 */

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



/* Function: test_cpp_rtti @ 00010ca4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 undefined4 *puVar1;
 int *piVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: int result@[???]
 Unresolved local var: RTTIBase * obj2@[???] */
 puVar1 = (undefined4 *)operator_new(4);
 *puVar1 = (undefined4)PTR__RTTIBase_00021ed8;
 piVar2 = (int *)operator_new(4);
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 *piVar2 = (int)PTR__RTTIBase_00021eec;
 iVar3 = __dynamic_cast(puVar1,RTTIBase_typeinfo,RTTIDerivedA_typeinfo,0);
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 iVar4 = __dynamic_cast(piVar2,RTTIBase_typeinfo,RTTIDerivedB_typeinfo,0);
 operator_delete(puVar1);
 (*(code *)(*piVar2 + 4))(piVar2);
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

void test_cpp_oo_features(void)

{
 size_t sVar1;
 int iVar2;
 undefined4 *puVar3;
 int *piVar4;
 int iVar5;
 int iVar6;
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
 
 puts(DAT_0001134c);
 /* Unresolved local var: SimpleClass obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r2@[???] */
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
 printf(DAT_000111f5,sVar1 + 0x125c);
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 printf(DAT_00011213,LifecycleClass_instance_count * 0x3e9 + 0x15);
 printf(DAT_0001122f,0x2a);
 printf(DAT_0001124b,0x47);
 printf(DAT_00011267,0x28a);
 printf(DAT_00011284,0x16);
 printf(DAT_000112a0,0x27);
 printf(DAT_000112bc,0x10);
 printf(DAT_000112d8,0x55);
 iVar2 = test_cpp_exception();
 printf(DAT_000112f4,iVar2);
 printf(DAT_00011311,0x2bf);
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: int result@[???]
 Unresolved local var: RTTIBase * obj2@[???] */
 puVar3 = (undefined4 *)operator_new(4);
 *puVar3 = (undefined4)PTR__RTTIBase_00021ed8;
 piVar4 = (int *)operator_new(4);
 *piVar4 = (int)PTR__RTTIBase_00021eec;
 iVar2 = __dynamic_cast(puVar3,RTTIBase_typeinfo,RTTIDerivedA_typeinfo,0);
 iVar5 = __dynamic_cast(piVar4,RTTIBase_typeinfo,RTTIDerivedB_typeinfo,0);
 operator_delete(puVar3);
 (*(code *)(*piVar4 + 4))(piVar4);
 iVar6 = 0x82;
 if (iVar2 == 0) {
 iVar6 = 0x1e;
 }
 if (iVar5 != 0) {
 iVar6 = iVar6 + 200;
 }
 printf(DAT_0001132e,iVar6 + 0xe);
 return;
}



/* Function: main @ 00010fac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max_int @ 00010fc0 */

int template_max_int(int a,int b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_max_double @ 00010fcc */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00010fe0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

double template_max_double(double a,double b)

{
 if (a > b) {
  return a;
 }
 return b;
}



/* Function: template_swap_int @ 00011000 */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container_int @ 00011014 */

/* DWARF original prototype: void Container_int(Container_int * this) */

void Container_int_Container(Container_int *self)
{
 self->size = 0;
 return;
}



/* Function: push_int @ 00011020 */

/* DWARF original prototype: void push_int(Container_int * this, int value) */

void Container_int_push(Container_int *self,int value)
{
 int iVar1;
 
 iVar1 = self->size;
 if (iVar1 < 10) {
 self->size = iVar1 + 1;
 self->data[iVar1] = value;
 }
 return;
}



/* Function: get_int @ 00011038 */

/* DWARF original prototype: int get_int(Container_int * this, int idx) */

int Container_int_get(Container_int *self,int idx)
{
 int iVar1;
 
 iVar1 = 0;
 if (idx < 0) {
 return 0;
 }
 if (idx < self->size) {
 iVar1 = self->data[idx];
 }
 return iVar1;
}



/* Function: getSize_int @ 00011058 */

/* DWARF original prototype: int getSize_int(Container_int * this) */

int Container_int_getSize(Container_int *self)
{
 return self->size;
}



/* Function: Container_double @ 00011060 */

/* DWARF original prototype: void Container_double(Container_double * this) */

void Container_double_Container(Container_double *self)
{
 self->size = 0;
 return;
}



/* Function: push_double @ 0001106c */

/* DWARF original prototype: void push_double(Container_double * this, double value) */

void Container_double_push(Container_double *self,double value)
{
 int iVar1;
 
 iVar1 = self->size;
 if (9 < iVar1) {
 return;
 }
 self->data[iVar1] = value;
 self->size = iVar1 + 1;
 return;
}



/* Function: get_double @ 00011090 */

/* DWARF original prototype: double get_double(Container_double * this, int idx) */

double Container_double_get(Container_double *self,int idx)
{
 if (idx < 0) {
 return 0.0;
 }
 if (idx < self->size) {
 return self->data[idx];
 }
 return 0.0;
}



/* Function: getSize_double @ 000110bc */

/* DWARF original prototype: int getSize_double(Container_double * this) */

int Container_double_getSize(Container_double *self)
{
 return self->size;
}



/* Function: RTTIDerivedA_destructor @ 000110c4 */

/* DWARF original prototype: void RTTIDerivedA_destructor(RTTIDerivedA * this) */

void RTTIDerivedA_destructor(RTTIDerivedA *self)
{
 operator_delete(self);
 return;
}



/* Function: RTTIDerivedA_getType @ 000110c8 */

/* DWARF original prototype: int RTTIDerivedA_getType(RTTIDerivedA * this) */

int RTTIDerivedA_getType(RTTIDerivedA *self)
{
 return 1;
}



/* Function: RTTIBase_destructor @ 000110d0 */

/* DWARF original prototype: void RTTIBase_destructor(RTTIBase * this) */

void RTTIBase_destructor(RTTIBase *self)
{
 return;
}



/* Function: RTTIDerivedB_destructor @ 000110d4 */

/* DWARF original prototype: void RTTIDerivedB_destructor(RTTIDerivedB * this) */

void RTTIDerivedB_destructor(RTTIDerivedB *self)
{
 operator_delete(self);
 return;
}



/* Function: RTTIDerivedB_getType @ 000110d8 */

/* DWARF original prototype: int RTTIDerivedB_getType(RTTIDerivedB * this) */

int RTTIDerivedB_getType(RTTIDerivedB *self)
{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 39 */
