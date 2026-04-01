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
typedef void (*code)(void);
typedef void (*code_with_arg)(void*);
#define __thiscall

#include <string.h>
#include <stdio.h>
#include <stdarg.h>

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/5-1/5-1_gcc_O3_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* Forward declarations for C++ classes */
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;
typedef struct type_info type_info;
typedef struct Init Init;

struct Base {
    int vtable_ptr;
};

struct Derived {
    int vtable_ptr;
    int value;
};

struct MultiDerived {
    int vtable_ptr;
    int value_a;
    int value_b;
    int padding;
};

struct MiddleA {
    int vtable_ptr;
    int value;
};

struct MiddleB {
    int vtable_ptr;
    int value;
};

struct DiamondDerived {
    int vtable_ptr;
    int base_value;
    int middle_a_offset;
    int middle_b_offset;
    int value;
};

struct type_info {
    const char* name;
};

struct RTTIDerivedA {
    int vtable_ptr;
    struct type_info typeinfo;
};

struct RTTIDerivedB {
    int vtable_ptr;
    struct type_info typeinfo;
};

struct Container_int {
    int data[10];
    int size;
};

struct Container_double {
    double data[10];
    int size;
};

struct RTTIBase_typeinfo {
    struct type_info base;
};

struct RTTIDerivedA_typeinfo {
    struct type_info base;
};

struct RTTIDerivedB_typeinfo {
    struct type_info base;
};




/* CRT stub function _init removed by preprocessor */

/* Forward declarations for external functions */
extern void* __cxa_allocate_exception(size_t size);
extern void __cxa_throw(void* exc, void* type, void* dest);
extern void* operator_new(size_t size);
extern void operator_delete(void* ptr, size_t size);
extern void __stack_chk_fail(void);
extern int __printf_chk(int flag, const char* format, ...);
extern int puts(const char* s);
extern int __aeabi_d2iz(double d);
extern int __aeabi_dcmpgt(double a, double b);
extern void* __dynamic_cast(void* src, void* src_type, void* dst_type, int ptrdiff);
extern void* std__ioinit;
extern void* __dso_handle;
extern int __aeabi_atexit(void* obj, void* dtor, void* dso);

/* Forward declarations for missing types and functions */
typedef struct LifecycleClass LifecycleClass;
struct LifecycleClass {
    int instance_count;
};
extern int LifecycleClass_instance_count;
extern int template_max_int(int param_1, int param_2);
extern double template_max_double(double param_1, double param_2);
extern void template_swap_int(int *param_1, int *param_2);
extern void test_cpp_exception(void);
extern void test_cpp_oo_features(void);
extern int PTR__RTTIDerivedA_000116b4;
extern int PTR__RTTIDerivedB_000116c8;
extern char DAT_000114c0[];
extern char DAT_000114d8[];
extern char DAT_000114fc[];
extern char DAT_0001151c[];
extern char DAT_00011538[];
extern char DAT_00011554[];
extern char DAT_00011570[];
extern char DAT_00011590[];
extern char DAT_000115ac[];
extern char DAT_000115c8[];
extern char DAT_000115e4[];
extern char DAT_00011600[];
extern char DAT_00011620[];
extern char DAT_00011640[];

/* Define missing global variables */
char DAT_000114c0[] = "Base";
char DAT_000114d8[] = "Testing C++ OO features";
char DAT_000114fc[] = "String length: %d\n";
char DAT_0001151c[] = "Constructor result: %d\n";
char DAT_00011538[] = "Virtual func result: %d\n";
char DAT_00011554[] = "Multiple inheritance result: %d\n";
char DAT_00011570[] = "Diamond inheritance result: %d\n";
char DAT_00011590[] = "Operator overload result: %d\n";
char DAT_000115ac[] = "Template result: %d\n";
char DAT_000115c8[] = "Template class result: %d\n";
char DAT_000115e4[] = "Lambda result: %d\n";
char DAT_00011600[] = "Exception caught: %d\n";
char DAT_00011620[] = "Smart ptr result: %d\n";
char DAT_00011640[] = "RTTI result: %d\n";

int LifecycleClass_instance_count = 0;

/* Define missing RTTI typeinfo structures */
struct RTTIBase_typeinfo RTTIBase_typeinfo = {{"Base"}};
struct RTTIDerivedA_typeinfo RTTIDerivedA_typeinfo = {{"DerivedA"}};
struct RTTIDerivedB_typeinfo RTTIDerivedB_typeinfo = {{"DerivedB"}};

/* Define missing pointer variables */
int PTR__RTTIDerivedA_000116b4 = (int)&RTTIDerivedA_typeinfo;
int PTR__RTTIDerivedB_000116c8 = (int)&RTTIDerivedB_typeinfo;

/* Define missing external variables */
void* std__ioinit = 0;
void* __dso_handle = 0;

/* Stub implementation for __aeabi_d2iz - convert double to int */
__attribute__((weak)) int __aeabi_d2iz(double d)
{
    return (int)d;
}

/* Stub implementation for __aeabi_dcmpgt - compare doubles */
__attribute__((weak)) int __aeabi_dcmpgt(double a, double b)
{
    return (a > b) ? 1 : 0;
}

/* Stub implementation for __cxa_allocate_exception */
__attribute__((weak)) void* __cxa_allocate_exception(size_t size)
{
    static char exception_buffer[64];
    return exception_buffer;
}

/* Stub implementation for __cxa_throw */
__attribute__((weak)) void __cxa_throw(void* exc, void* type, void* dest)
{
    /* Does not return - simulate by infinite loop or exit */
    while(1);
}

/* Stub implementation for operator_new */
__attribute__((weak)) void* operator_new(size_t size)
{
    static char heap_buffer[1024];
    static size_t offset = 0;
    void* ptr = heap_buffer + offset;
    offset += size;
    if (offset > sizeof(heap_buffer)) offset = 0;
    return ptr;
}

/* Stub implementation for operator_delete */
__attribute__((weak)) void operator_delete(void* ptr, size_t size)
{
    /* No-op for stub */
}

/* Stub implementation for __dynamic_cast */
__attribute__((weak)) void* __dynamic_cast(void* src, void* src_type, void* dst_type, int ptrdiff)
{
    return src;
}

/* Stub implementation for __aeabi_atexit */
__attribute__((weak)) int __aeabi_atexit(void* obj, void* dtor, void* dso)
{
    return 0;
}

/* Stub implementation for __stack_chk_fail */
__attribute__((weak)) void __stack_chk_fail(void)
{
    while(1);
}

/* Stub implementation for __printf_chk */
__attribute__((weak)) int __printf_chk(int flag, const char* format, ...)
{
    va_list args;
    va_start(args, format);
    int result = vprintf(format, args);
    va_end(args);
    return result;
}

/* Function: FUN_0001092c @ 0001092c */

void FUN_0001092c(void)

{
 (*(code *)(void *)0x0)();
 return;
}



/* Function: test_cpp_exception @ 00010a60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,(void*)0,0);
}



/* Function: main @ 00010b18 */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I_test_cpp_member_func @ 00010b28 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

void _GLOBAL__sub_I_test_cpp_member_func(void)

{
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00010c50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 size_t sVar1;
 char acStack_2c [31];
 undefined1 local_d;
 int local_c;
 
 local_c = 0;
 strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar1 = strlen(acStack_2c);
 if (local_c == 0) {
 return sVar1 + 0x125c;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: test_cpp_constructor @ 00010cbc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00010cdc */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x00010ce4. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*(code *)**(undefined4 **)param_1)();
 return;
}



/* Function: test_cpp_virtual_func @ 00010ce8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

undefined4 test_cpp_virtual_func(void)

{
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 00010cf0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined4 test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00010cf8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

undefined4 test_cpp_diamond_inheritance(void)

{
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00010d04 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined4 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00010d0c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

void test_cpp_template_func(void)

{
 int iVar1;
 undefined4 extraout_r0;
 undefined4 extraout_r1;
 double extraout_d0;
 double extraout_d1;
 undefined8 uVar2;
 int iStack_1c;
 int iStack_18;
 int local_14;
 
 local_14 = 0;
 iVar1 = template_max_int(3,7);
 template_max_double(extraout_d0,extraout_d1);
 iStack_1c = 10;
 iStack_18 = 0x14;
 template_swap_int(&iStack_1c,&iStack_18);
 uVar2 = __aeabi_d2iz(extraout_d0);
 if (local_14 == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: test_cpp_template_class @ 00010db4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined4 test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 00010dbc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined4 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_smart_ptr @ 00010dc4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined4 test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00010dd0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 int *piVar1;
 int *piVar2;
 int iVar3;
 int iVar4;
 char *__s;
 size_t sVar5;
 int iVar6;
 
 piVar1 = (int*)operator_new(4);
 *piVar1 = PTR__RTTIDerivedA_000116b4;
 piVar2 = (int*)operator_new(4);
 *piVar2 = PTR__RTTIDerivedB_000116c8;
 iVar3 = 0;
 if (iVar3 == 0) {
 iVar3 = 0x14;
 iVar6 = 0;
 }
 else {
 iVar6 = 10;
 iVar3 = 0x1e;
 }
 iVar4 = 0;
 if (iVar4 != 0) {
 iVar6 = iVar3;
 }
 iVar3 = (int)__dynamic_cast((void*)piVar1,(void*)&RTTIBase_typeinfo,(void*)&RTTIDerivedA_typeinfo,0);
 if (iVar3 != 0) {
 iVar6 = iVar6 + 100;
 }
 iVar3 = (int)__dynamic_cast((void*)piVar2,(void*)&RTTIBase_typeinfo,(void*)&RTTIDerivedB_typeinfo,0);
 iVar4 = *piVar1;
 if (iVar3 != 0) {
 iVar6 = iVar6 + 200;
 }
 __s = *(char **)(*(int *)(iVar4 + -4) + 4);
 if (*__s == '*') {
 __s = __s + 1;
 }
 sVar5 = strlen(__s);
  ((void(*)(void*))**(code **)(iVar4 + 4))(piVar1);
  ((void(*)(void*))**(code **)(*piVar2 + 4))(piVar2);
 return iVar6 + sVar5;
}



/* Function: test_cpp_oo_features @ 00010ed4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 size_t sVar1;
 int iVar2;
 undefined4 extraout_r0;
 int iVar3;
 undefined4 uVar4;
 undefined4 extraout_r1;
 double extraout_d0;
 double extraout_d1;
 int local_40;
 int local_3c [2];
 char acStack_34 [31];
 undefined1 local_15;
 int local_14;
 
 local_14 = 0;
 puts(DAT_000114d8);
 strncpy(acStack_34,"Test",0x1f);
 local_15 = 0;
 sVar1 = strlen(acStack_34);
 __printf_chk(1,DAT_000114fc,sVar1 + 0x125c);
 __printf_chk(1,DAT_0001151c,LifecycleClass_instance_count * 0x3e9 + 0x15);
 __printf_chk(1,DAT_00011538,0x2a);
 __printf_chk(1,DAT_00011554,0x47);
 __printf_chk(1,DAT_00011570,0x28a);
 __printf_chk(1,DAT_00011590,0x16);
 iVar2 = template_max_int(3,7);
 template_max_double(extraout_d0,extraout_d1);
 local_40 = 10;
 local_3c[0] = 0x14;
 template_swap_int(&local_40,&local_3c[0]);
 iVar3 = __aeabi_d2iz(extraout_d0);
 __printf_chk(1,DAT_000115ac,iVar3 + iVar2 + local_40 + local_3c[0]);
 __printf_chk(1,DAT_000115c8,0x10);
 __printf_chk(1,DAT_000115e4,0x55);
 test_cpp_exception();
 __printf_chk(1,DAT_00011600,0);
 __printf_chk(1,DAT_00011620,0x2bf);
 uVar4 = test_cpp_rtti();
 if (local_14 == 0) {
 __printf_chk(1,DAT_00011640,uVar4);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: virtual_func @ 000110d0 */

/* Base::virtual_func(int) */

static int Base_virtual_func(Base *this_ptr,int param_1)

{
 return param_1 + 1;
}



/* Function: getName @ 000110d8 */

/* Base::getName() const */

static char * Base_getName(Base *this_ptr)

{
 (void)this_ptr;
 return DAT_000114c0;
}







/* Function: virtual_func @ 000110e8 */

/* Derived::virtual_func(int) */

static int Derived_virtual_func(Derived *this_ptr,int param_1)

{
 return param_1 * *(int *)(this_ptr + 4);
}



/* Function: getName @ 000110f4 */

/* Derived::getName() const */

static char * Derived_getName(Derived *this_ptr)

{
 (void)this_ptr;
 return "Derived";
}



/* Function: funcA @ 00011100 */

/* MultiDerived::funcA() */

static undefined4 MultiDerived_funcA(void)

{
 return 0x1e;
}



/* Function: funcB @ 00011108 */

/* MultiDerived::funcB() */

static undefined4 MultiDerived_funcB(void)

{
 return 0x28;
}



/* Function: funcB @ 00011110 */

/* non-virtual thunk to MultiDerived::funcB() */

static undefined4 MultiDerived_funcB_thunk(MultiDerived *this_ptr)

{
 return 0x28;
}



/* Function: func @ 00011118 */

/* MiddleA::func() */

static int MiddleA_func(MiddleA *this_ptr)

{
 return *(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc) + 4) + 0x96;
}



/* Function: func @ 00011130 */

/* virtual thunk to MiddleA::func() */

static int MiddleA_func_thunk(MiddleA *this_ptr)

{
 return *(int *)(this_ptr + *(int *)(*(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc)) + -0xc) +
 *(int *)(*(int *)this_ptr + -0xc) + 4) + 0x96;
}



/* Function: func @ 00011154 */

/* MiddleB::func() */

static int MiddleB_func(MiddleB *this_ptr)

{
 return *(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc) + 4) + 200;
}



/* Function: func @ 0001116c */

/* virtual thunk to MiddleB::func() */

static int MiddleB_func_thunk(MiddleB *this_ptr)

{
 return *(int *)(this_ptr + *(int *)(*(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc)) + -0xc) +
 *(int *)(*(int *)this_ptr + -0xc) + 4) + 200;
}



/* Function: func @ 00011190 */

/* DiamondDerived::func() */

static int DiamondDerived_func(DiamondDerived *this_ptr)

{
 return *(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc) + 4) + 0xfa;
}



/* Function: func @ 000111a8 */

/* virtual thunk to DiamondDerived::func() */

static int DiamondDerived_func_thunk(DiamondDerived *this_ptr)

{
 return *(int *)(this_ptr + *(int *)(*(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc)) + -0xc) +
 *(int *)(*(int *)this_ptr + -0xc) + 4) + 0xfa;
}



/* Function: func @ 000111cc */

/* non-virtual thunk to DiamondDerived::func() */

static int DiamondDerived_func_nonvirtual_thunk(DiamondDerived *this_ptr)

{
 return *(int *)(this_ptr + *(int *)(*(int *)(this_ptr + -8) + -0xc) + -4) + 0xfa;
}



/* Function: getType @ 000111e4 */

/* RTTIDerivedA::getType() const */

static undefined4 RTTIDerivedA_getType(void)

{
 return 1;
}



/* Function: getType @ 000111ec */

/* RTTIDerivedB::getType() const */

static undefined4 RTTIDerivedB_getType(void)

{
 return 2;
}











/* DiamondDerived::~DiamondDerived() */

static DiamondDerived * DiamondDerived_destructor(DiamondDerived *this_ptr)

{
 return this_ptr;
}



/* virtual thunk to DiamondDerived::~DiamondDerived() */

static DiamondDerived * DiamondDerived_destructor_thunk(DiamondDerived *this_ptr)

{
 return this_ptr + *(int *)(*(int *)this_ptr + -0x10);
}



/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

static DiamondDerived * DiamondDerived_destructor_nonvirtual_thunk(DiamondDerived *this_ptr)

{
 return this_ptr + -8;
}



/* MultiDerived::~MultiDerived() */

static MultiDerived * MultiDerived_destructor(MultiDerived *this_ptr)

{
 return this_ptr;
}



/* non-virtual thunk to MultiDerived::~MultiDerived() */

static MultiDerived * MultiDerived_destructor_thunk(MultiDerived *this_ptr)

{
 (void)this_ptr;
 return 0;
}











































/* Function: template_max<int> @ 00011314 */

/* int template_max<int>(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_max<double> @ 00011320 */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00011334 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* double template_max<double>(double, double) */

double template_max_double(double param_1,double param_2)

{
 double result;
 if (param_1 > param_2) {
  result = param_1;
 }
 else {
  result = param_2;
 }
 return result;
}



/* Function: template_swap @ 00011350 */

/* void template_swap<int>(int&, int&) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 00011364 */

/* Container<int>::Container() */

void Container_int_Constructor(Container_int *this_ptr)

{
 *(undefined4 *)(this_ptr + 0x28) = 0;
 return;
}



/* Function: push @ 00011370 */

/* Container<int>::push(int) */

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



/* Function: get @ 00011388 */

/* Container<int>::get(int) const */

undefined4 Container_int_get(Container_int *this_ptr,int param_1)

{
 if ((-1 < param_1) && (param_1 < *(int *)(this_ptr + 0x28))) {
 return *(undefined4 *)(this_ptr + param_1 * 4);
 }
 return 0;
}



/* Function: getSize @ 000113ac */

/* Container<int>::getSize() const */

undefined4 Container_int_getSize(Container_int *this_ptr)

{
 return *(undefined4 *)(this_ptr + 0x28);
}



/* Function: Container @ 000113b4 */

/* Container<double>::Container() */

void Container_double_Constructor(Container_double *this_ptr)

{
 *(undefined4 *)(this_ptr + 0x50) = 0;
 return;
}



/* Function: push @ 000113c0 */

/* Container<double>::push(double) */

undefined4 Container_double_push(Container_double *this_ptr,double param_1)

{
 int iVar1;
 undefined4 *puVar2;
 
 iVar1 = *(int *)(this_ptr + 0x50);
 if (iVar1 < 10) {
 puVar2 = (undefined4 *)(this_ptr + iVar1 * 8);
 *(int *)(this_ptr + 0x50) = iVar1 + 1;
 *puVar2 = ((int*)&param_1)[0];
 puVar2[1] = ((int*)&param_1)[1];
 }
 return ((int*)&param_1)[0];
}



/* Function: get @ 000113f0 */

/* Container<double>::get(int) const */

undefined8 Container_double_get(Container_double *this_ptr,int param_1)

{
 if ((-1 < param_1) && (param_1 < *(int *)(this_ptr + 0x50))) {
 return *(undefined8 *)(this_ptr + param_1 * 8);
 }
 return 0;
}



/* Function: getSize @ 0001141c */

/* Container<double>::getSize() const */

undefined4 Container_double_getSize(Container_double *this_ptr)

{
 return *(undefined4 *)(this_ptr + 0x50);
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 69 */
