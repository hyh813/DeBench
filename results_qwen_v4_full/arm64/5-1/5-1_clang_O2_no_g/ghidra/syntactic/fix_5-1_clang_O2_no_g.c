/* Auto-injected type definitions by preprocessor */
#include <string.h>
#include <stdio.h>

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
typedef unsigned long ulong;

/* Ghidra decompiler types */
typedef void (*code)(void);
typedef uint8_t undefined1;
typedef uint32_t undefined4;
typedef uint8_t undefined7[7];
typedef uint64_t undefined8;

/* Forward declarations */
typedef struct Base { undefined8 *vtable; } Base;
typedef struct LifecycleClass { undefined8 data[10]; } LifecycleClass;
typedef struct Container_int { undefined4 data[10]; undefined4 size; } Container_int;
typedef struct Container_double { double data[10]; undefined4 size; } Container_double;
typedef struct RTTIBase { undefined8 *vtable; } RTTIBase;
typedef struct RTTIDerivedA { undefined8 *vtable; } RTTIDerivedA;
typedef struct RTTIDerivedB { undefined8 *vtable; } RTTIDerivedB;
static int LifecycleClass_instance_count = 0;
static undefined8 PTR__RTTIBase_00111d58 = 0;
static undefined8 PTR__RTTIBase_00111d80 = 0;

/* RTTI typeinfo structures */
typedef struct type_info {
    undefined8 vtable;
    char *name;
} type_info;

/* RTTI typeinfo definitions */
static type_info _ZTI8RTTIBase = {0, "RTTIBase"};
static type_info _ZTI12RTTIDerivedA = {0, "RTTIDerivedA"};
static type_info _ZTI12RTTIDerivedB = {0, "RTTIDerivedB"};

/* RTTI typeinfo pointers - defined as type_info* */
static type_info *RTTIBase_typeinfo = 0;
static type_info *RTTIDerivedA_typeinfo = 0;
static type_info *RTTIDerivedB_typeinfo = 0;

/* Initialize RTTI pointers */
void init_rtti_pointers(void) {
    PTR__RTTIBase_00111d58 = (undefined8)&_ZTI8RTTIBase;
    PTR__RTTIBase_00111d80 = (undefined8)&_ZTI8RTTIBase;
    RTTIBase_typeinfo = &_ZTI8RTTIBase;
    RTTIDerivedA_typeinfo = &_ZTI12RTTIDerivedA;
    RTTIDerivedB_typeinfo = &_ZTI12RTTIDerivedB;
}
char DAT_00101728[] = "";
char DAT_001015d1[] = "";
char DAT_001015ef[] = "";
char DAT_0010160b[] = "";
char DAT_00101627[] = "";
char DAT_00101643[] = "";
char DAT_00101660[] = "";
char DAT_0010167c[] = "";
char DAT_00101698[] = "";
char DAT_001016b4[] = "";
char DAT_001016d0[] = "";
char DAT_001016ed[] = "";
char DAT_0010170a[] = "";

/* Function declarations */
void *__cxa_allocate_exception(size_t size);
void __cxa_throw(void *obj, void *type_info, void *dest) __attribute__((noreturn));
void *operator_new(size_t size);
void operator_delete(void *ptr);
long __dynamic_cast(void *src, void *src_type, void *dst_type, int flags, long offset);
extern int printf(const char *format, ...);
extern int puts(const char *s);
extern size_t strlen(const char *s);
extern void exit(int status);
void init_rtti_pointers(void);
int test_cpp_oo_features(void);
void test_cpp_exception(void);
int test_cpp_member_func(void);
int test_cpp_constructor(void);
undefined8 test_cpp_virtual_func(void);
undefined8 test_cpp_multiple_inheritance(void);
undefined8 test_cpp_diamond_inheritance(void);
undefined8 test_cpp_operator_overload(void);
undefined8 test_cpp_template_func(void);
undefined8 test_cpp_template_class(void);
undefined8 test_cpp_lambda(void);
undefined8 test_cpp_smart_ptr(void);
int test_cpp_rtti(void);



/* C++ runtime stub implementations */
void *__cxa_allocate_exception(size_t size) {
    return (void *)0;
}

void __cxa_throw(void *obj, void *type_info, void *dest) {
    exit(1);
}

void *operator_new(size_t size) {
    return (void *)0;
}

void operator_delete(void *ptr) {
    return;
}

long __dynamic_cast(void *src, void *src_type, void *dst_type, int flags, long offset) {
    return 0;
}

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-1/5-1_clang_O2_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00100d60 @ 00100d60 */

void FUN_00100d60(void)

{
 (*(code *)(undefined8 *)0x0)();
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00100ec0 */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_00100fbc @ 00100fbc */

void FUN_00100fbc(void)

{
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00101014 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 size_t sVar1;
 undefined4 local_38;
 undefined8 local_34;
 undefined7 uStack_2c;
 undefined1 uStack_25;
 undefined7 uStack_24;
 undefined8 uStack_1d;
 undefined1 local_15;
 
 local_15 = 0;
 local_38 = 10;
 *(undefined8*)&uStack_2c = 0;
 local_34 = 0x74736554;
 uStack_1d = 0;
 uStack_25 = 0;
 *(undefined8*)&uStack_24 = 0;
 sVar1 = strlen((char *)((ulong)&local_38 | 4));
 return (int)sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 00101064 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 0010107c */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x00101084. Too many branches */
 /* WARNING: Treating indirect jump as call */
 void (*vfunc)(Base *, int) = (void (*)(Base *, int))param_1->vtable[0];
 if (vfunc) vfunc(param_1, param_2);
 return;
}



/* Function: test_cpp_virtual_func @ 00101088 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

undefined8 test_cpp_virtual_func(void)

{
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 00101090 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined8 test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00101098 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

undefined8 test_cpp_diamond_inheritance(void)

{
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 001010a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined8 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 001010a8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

undefined8 test_cpp_template_func(void)

{
 return 0x27;
}



/* Function: test_cpp_template_class @ 001010b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined8 test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 001010b8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined8 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_exception @ 001010c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,(void *)0,0);
}



/* Function: test_cpp_smart_ptr @ 001011b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined8 test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 001011b8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 undefined8 *puVar1;
 long *plVar2;
 long lVar3;
 int iVar4;
 
 puVar1 = operator_new(8);
 *puVar1 = (undefined8)PTR__RTTIBase_00111d58;
 plVar2 = operator_new(8);
 *plVar2 = (long)PTR__RTTIBase_00111d80;
 lVar3 = __dynamic_cast(puVar1,(void *)RTTIBase_typeinfo,(void *)RTTIDerivedA_typeinfo,0,0);
 iVar4 = 0x1e;
 if (lVar3 != 0) {
 iVar4 = 0x82;
 }
 lVar3 = __dynamic_cast(plVar2,(void *)RTTIBase_typeinfo,(void *)RTTIDerivedB_typeinfo,0,0);
 if (lVar3 != 0) {
 iVar4 = iVar4 + 200;
 }
 operator_delete(puVar1);
 operator_delete(plVar2);
 return iVar4 + 0xe;
}



/* Function: test_cpp_oo_features @ 00101278 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

int test_cpp_oo_features(void)

{
 int iVar1;
 size_t sVar2;
 ulong uVar3;
 undefined8 *puVar4;
 long *plVar5;
 long lVar6;
 undefined4 local_58;
 undefined8 local_54;
 undefined7 uStack_4c;
 undefined1 uStack_45;
 undefined7 uStack_44;
 undefined8 uStack_3d;
 undefined1 local_35;
 
 puts(DAT_00101728);
 local_35 = 0;
 local_58 = 10;
 *(undefined8*)&uStack_4c = 0;
 local_54 = 0x74736554;
 uStack_3d = 0;
 uStack_45 = 0;
 *(undefined8*)&uStack_44 = 0;
 sVar2 = strlen((char *)((ulong)&local_58 | 4));
 printf(DAT_001015d1,(ulong)((int)sVar2 + 0x125c));
 printf(DAT_001015ef,(ulong)(LifecycleClass_instance_count * 0x3e9 + 0x15));
 printf(DAT_0010160b,0x2a);
 printf(DAT_00101627,0x47);
 printf(DAT_00101643,0x28a);
 printf(DAT_00101660,0x16);
 printf(DAT_0010167c,0x27);
 printf(DAT_00101698,0x10);
 printf(DAT_001016b4,0x55);
 test_cpp_exception();
 printf(DAT_001016d0,0x2a);
 printf(DAT_001016ed,0x2bf);
 puVar4 = operator_new(8);
 *puVar4 = (undefined8)PTR__RTTIBase_00111d58;
 plVar5 = operator_new(8);
 *plVar5 = (long)PTR__RTTIBase_00111d80;
 lVar6 = __dynamic_cast(puVar4,(void *)RTTIBase_typeinfo,(void *)RTTIDerivedA_typeinfo,0,0);
 iVar1 = 0x1e;
 if (lVar6 != 0) {
 iVar1 = 0x82;
 }
 lVar6 = __dynamic_cast(plVar5,(void *)RTTIBase_typeinfo,(void *)RTTIDerivedB_typeinfo,0,0);
 if (lVar6 != 0) {
 iVar1 = iVar1 + 200;
 }
 operator_delete(puVar4);
 operator_delete(plVar5);
 iVar1 = printf(DAT_0010170a,(ulong)(iVar1 + 0xe));
 return iVar1;
}



/* Function: main @ 0010144c */

undefined8 main(void)

{
 init_rtti_pointers();
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max_int @ 00101464 */

/* int template_max_int(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_max_double @ 00101470 */

/* double template_max_double(double, double) */

double template_max_double(double param_1,double param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap_int @ 0010147c */

/* void template_swap_int(int*, int*) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container_int_constructor @ 00101490 */

/* Container_int::Container_int() */

void Container_int_constructor(Container_int *this)

{
 *(undefined4 *)(this + 0x28) = 0;
 return;
}



/* Function: push_int @ 00101498 */

/* Container_int::push(int) */

void Container_int_push(Container_int *this,int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this + 0x28);
 if (iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + (long)iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get_int @ 001014b4 */

/* Container_int::get(int) const */

undefined4 Container_int_get(Container_int *this,int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
 uVar1 = *(undefined4 *)(this + (ulong)param_1 * 4);
 }
 return uVar1;
}



/* Function: getSize_int @ 001014d4 */

/* Container_int::getSize() const */

undefined4 Container_int_getSize(Container_int *this)

{
 return *(undefined4 *)(this + 0x28);
}



/* Function: Container_double_constructor @ 001014dc */

/* Container_double::Container_double() */

void Container_double_constructor(Container_double *this)

{
 *(undefined4 *)(this + 0x50) = 0;
 return;
}



/* Function: push_double @ 001014e4 */

/* Container_double::push(double) */

void Container_double_push(Container_double *this,double param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this + 0x50);
 if (iVar1 < 10) {
 *(double *)(this + (long)iVar1 * 8) = param_1;
 *(int *)(this + 0x50) = iVar1 + 1;
 }
 return;
}



/* Function: get_double @ 00101500 */

/* Container_double::get(int) const */

undefined8 Container_double_get(Container_double *this,int param_1)

{
 ulong uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 uVar1 = *(ulong *)(this + (ulong)param_1 * 8);
 }
 return uVar1;
}



/* Function: getSize_double @ 0010151c */

/* Container_double::getSize() const */

undefined4 Container_double_getSize(Container_double *this)

{
 return *(undefined4 *)(this + 0x50);
}



/* Function: RTTIDerivedA_destructor @ 00101524 */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA_destructor(RTTIDerivedA *this)

{
 operator_delete(this);
 return;
}



/* Function: RTTIDerivedA_getType @ 00101528 */

/* RTTIDerivedA::getType() const */

undefined8 RTTIDerivedA_getType(RTTIDerivedA *this)

{
 return 1;
}



/* Function: RTTIBase_destructor @ 00101530 */

/* RTTIBase::~RTTIBase() */

void RTTIBase_destructor(RTTIBase *this)

{
 return;
}



/* Function: RTTIDerivedB_destructor @ 00101534 */

/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB_destructor(RTTIDerivedB *this)

{
 operator_delete(this);
 return;
}



/* Function: RTTIDerivedB_getType @ 00101538 */

/* RTTIDerivedB::getType() const */

undefined8 RTTIDerivedB_getType(RTTIDerivedB *this)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 41 */
