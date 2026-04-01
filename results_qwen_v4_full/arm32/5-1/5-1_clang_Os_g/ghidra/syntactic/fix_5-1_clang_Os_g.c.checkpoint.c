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
typedef unsigned int undefined4;
typedef unsigned short undefined2;
typedef unsigned char undefined1;

/* Forward declarations for C++ classes */
struct Base;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct LifecycleClass;

/* Container struct definitions */
struct Container_int {
 int size;
 int data[10];
};

struct Container_double {
 int size;
 double data[10];
};

/* External function declarations */
size_t strlen(const char *s);
void *operator_new(size_t size);
void operator_delete(void *ptr);
void *__dynamic_cast(void *src, void *src_type, void *dst_type, int src_ptr_dist);
void __cxa_throw(void *exc, void *tinfo, void *dest);
void *__cxa_allocate_exception(size_t size);
int printf(const char *format, ...);
int puts(const char *s);

/* Stub implementations for C++ runtime functions */
void __cxa_throw(void *exc, void *tinfo, void *dest) {
 while(1); /* Infinite loop - exception handling stub */
}

void *__cxa_allocate_exception(size_t size) {
 return operator_new(size);
}

/* Stub implementations for C++ operators */
void *operator_new(size_t size) {
 /* Simple stub - returns a static buffer */
 static char buffer[4096];
 static size_t offset = 0;
 void *ptr = buffer + offset;
 offset += size;
 if (offset > 4096) offset = 0;
 return ptr;
}

void operator_delete(void *ptr) {
 /* Stub - no-op */
 return;
}

void *__dynamic_cast(void *src, void *src_type, void *dst_type, int src_ptr_dist) {
 return (void *)0; /* Default to null for stub */
}

/* External typeinfo declarations */
extern void *int_typeinfo;
extern void *RTTIBase_typeinfo;
extern void *RTTIDerivedA_typeinfo;
extern void *RTTIDerivedB_typeinfo;

/* External data declarations */
extern void *PTR__RTTIBase_00021ed8;
extern void *PTR__RTTIBase_00021eec;

/* Define missing data symbols */
void *PTR__RTTIBase_00021eec = (void *)0x21eec;
void *PTR__RTTIBase_00021ed8 = (void *)0x21ed8;
int LifecycleClass_instance_count = 0;
char DAT_00011177 = '%';
char DAT_00011294 = 'T';
char DAT_0001113d = '%';
char DAT_0001115b = '%';
char DAT_00011193 = '%';
char DAT_000111af = '%';
char DAT_000111cc = '%';
char DAT_000111e8 = '%';
char DAT_00011204 = '%';
char DAT_00011220 = '%';
char DAT_0001123c = '%';
char DAT_00011259 = '%';
char DAT_00011276 = '%';
extern char DAT_0001113d;
extern char DAT_0001115b;
extern char DAT_00011177;
extern char DAT_00011193;
extern char DAT_000111af;
extern char DAT_000111cc;
extern char DAT_000111e8;
extern char DAT_00011204;
extern char DAT_00011220;
extern char DAT_0001123c;
extern char DAT_00011259;
extern char DAT_00011276;

/* Ghidra decompiler types */
typedef void (*code)(void);
typedef unsigned long long ulonglong;

/* Ghidra macro for extracting 4 bytes from 8-byte value */
#define SUB84(val, offset) ((unsigned int)((val) >> ((offset) * 8)))

/* LifecycleClass static member */
extern int LifecycleClass_instance_count;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/5-1/5-1_clang_Os_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: _GLOBAL__sub_I_5_1.cpp @ 00010958 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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
 iVar1 = ((int (*)())**(int **)obj)();
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
 __cxa_throw(puVar1,int_typeinfo,0);
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
 *puVar1 = (undefined4)((uintptr_t)&PTR__RTTIBase_00021ed8);
 piVar2 = (int *)operator_new(4);
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 *piVar2 = (int)((uintptr_t)&PTR__RTTIBase_00021eec);
 iVar3 = (int)__dynamic_cast(puVar1,RTTIBase_typeinfo,RTTIDerivedA_typeinfo,0);
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 iVar4 = (int)__dynamic_cast(piVar2,RTTIBase_typeinfo,RTTIDerivedB_typeinfo,0);
 operator_delete(puVar1);
 ((void (*)(int *))(*piVar2 + 4))(piVar2);
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
 
 puts(&DAT_00011294);
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
 printf(&DAT_0001113d,sVar1 + 0x125c);
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 printf(&DAT_0001115b,LifecycleClass_instance_count * 0x3e9 + 0x15);
 printf(&DAT_00011177,0x2a);
 printf(&DAT_00011193,0x47);
 printf(&DAT_000111af,0x28a);
 printf(&DAT_000111cc,0x16);
 printf(&DAT_000111e8,0x27);
 printf(&DAT_00011204,0x10);
 printf(&DAT_00011220,0x55);
 iVar2 = test_cpp_exception();
 printf(&DAT_0001123c,iVar2);
 printf(&DAT_00011259,0x2bf);
 iVar2 = test_cpp_rtti();
 printf(&DAT_00011276,iVar2);
 return;
}



/* Function: main @ 00010ef4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max_int @ 00010f08 */

int template_max_int(int a,int b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_max_double @ 00010f14 */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00010f28 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

double template_max_double(double a,double b)

{
 if (a > b) {
 return a;
 }
 return b;
}



/* Function: template_swap_int @ 00010f48 */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container_int @ 00010f5c */

/* DWARF original prototype: void Container(Container<int> * this) */

void Container_int_Constructor(struct Container_int *this_ptr)

{
 this_ptr->size = 0;
 return;
}



/* Function: push @ 00010f68 */

/* DWARF original prototype: void push(Container<int> * this, int value) */

void Container_int_push(struct Container_int *this_ptr,int value)

{
 int iVar1;
 
 iVar1 = this_ptr->size;
 if (iVar1 < 10) {
 this_ptr->size = iVar1 + 1;
 this_ptr->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00010f80 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int Container_int_get(struct Container_int *this_ptr,int idx)

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



/* Function: getSize @ 00010fa0 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int Container_int_getSize(struct Container_int *this_ptr)

{
 return this_ptr->size;
}



/* Function: Container_double @ 00010fa8 */

/* DWARF original prototype: void Container(Container<double> * this) */

void Container_double_Constructor(struct Container_double *this_ptr)

{
 this_ptr->size = 0;
 return;
}



/* Function: push @ 00010fb4 */

/* DWARF original prototype: void push(Container<double> * this, int value) */

void Container_double_push(struct Container_double *this_ptr,double value)

{
 int iVar1;
 
 iVar1 = this_ptr->size;
 if (9 < iVar1) {
 return;
 }
 ((undefined4 *)this_ptr->data)[iVar1] = *((undefined4 *)&value);
 ((undefined4 *)this_ptr->data)[iVar1 + 1] = *(((undefined4 *)&value) + 1);
 this_ptr->size = iVar1 + 1;
 return;
}



/* Function: get @ 00010fd8 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double Container_double_get(struct Container_double *this_ptr,int idx)

{
 double result;
 unsigned int *data_ptr;
 
 result = 0.0;
 if (idx > -1 && idx < this_ptr->size) {
 data_ptr = (unsigned int *)this_ptr->data;
 ((unsigned int *)&result)[0] = data_ptr[idx * 2];
 ((unsigned int *)&result)[1] = data_ptr[(idx * 2) + 1];
 }
 return result;
}



/* Function: getSize @ 00011004 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int Container_double_getSize(struct Container_double *this_ptr)

{
 return this_ptr->size;
}



/* Function: ~RTTIDerivedA @ 0001100c */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

void RTTIDerivedA_destructor(void *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: getType @ 00011010 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int RTTIDerivedA_getType(void *this_ptr)

{
 return 1;
}



/* Function: ~RTTIBase @ 00011018 */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this) */

void RTTIBase_destructor(void *this_ptr)

{
 return;
}



/* Function: ~RTTIDerivedB @ 0001101c */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

void RTTIDerivedB_destructor(void *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: getType @ 00011020 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int RTTIDerivedB_getType(void *this_ptr)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 39 */
