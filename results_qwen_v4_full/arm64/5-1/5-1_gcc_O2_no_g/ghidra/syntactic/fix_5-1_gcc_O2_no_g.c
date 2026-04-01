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

/* Ghidra decompiler types */
typedef uint8_t undefined1;
typedef uint32_t undefined4;
typedef uint64_t undefined8;
typedef undefined8 undefined;
typedef void (*code)(void);

/* Calling convention macros */
#define __thiscall

/* Forward declarations for C++ classes */
typedef struct Base Base;

/* Additional function forward declarations */
extern void test_cpp_oo_features(void);
extern void deregister_tm_clones(void);
extern int template_max_int(int param_1, int param_2);
extern double template_max_double(double param_1, double param_2);
extern void template_swap_int(int *param_1, int *param_2);
extern void test_cpp_exception(void);
extern int test_cpp_member_func(void);
extern int test_cpp_constructor(void);
extern void call_virtual_func(Base *param_1, int param_2);
extern undefined8 test_cpp_virtual_func(void);
extern undefined8 test_cpp_multiple_inheritance(void);
extern undefined8 test_cpp_diamond_inheritance(void);
extern undefined8 test_cpp_operator_overload(void);
extern undefined8 test_cpp_template_func(void);
extern undefined8 test_cpp_template_class(void);
extern undefined8 test_cpp_lambda(void);
extern undefined8 test_cpp_smart_ptr(void);
extern int test_cpp_rtti(void);
/* C++ operator new/delete stub implementations */
void *operator_new(size_t size) {
    return (void*)0; /* stub */
}

void operator_delete(void *ptr) {
    /* stub */
    (void)ptr;
}

/* Global variable declarations */
extern long ___stack_chk_guard;
extern long __stack_chk_guard;
extern void *__dso_handle;
static char completed_0 = 0;
static void *PTR__RTTIDerivedA_00112c28 = (void*)"12RTTIDerivedA";
static void *PTR__RTTIDerivedB_00112c50 = (void*)"12RTTIDerivedB";
static int LifecycleClass_instance_count = 0;
static char DAT_00101b10[] = "Testing C++ OO features";
static char DAT_00101b38[] = "String length: %d\n";
static char DAT_00101b58[] = "Constructor result: %d\n";
static char DAT_00101b78[] = "Virtual func result: %d\n";
static char DAT_00101b98[] = "Multiple inheritance result: %d\n";
static char DAT_00101bb8[] = "Diamond inheritance result: %d\n";
static char DAT_00101bd8[] = "Operator overload result: %d\n";
static char DAT_00101bf8[] = "Template func result: %d\n";
static char DAT_00101c18[] = "Template class result: %d\n";
static char DAT_00101c38[] = "Lambda result: %d\n";
static char DAT_00101c58[] = "Exception caught: %d\n";
static char DAT_00101c78[] = "Smart ptr result: %d\n";
static char DAT_00101c98[] = "All tests passed\n";
static char DAT_00101af8[] = "Base";

/* C++ exception handling functions */
extern void *__cxa_allocate_exception(size_t);
extern void __cxa_throw(void *exception, void *typeinfo, void (*dest)(void *));
extern int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
extern void __cxa_finalize(void *dso_handle);
extern void *__dynamic_cast(void *src, void *src_type, void *dst_type, long src2dst);

/* C++ runtime stub implementations */
void *__cxa_allocate_exception(size_t size) {
    return (void*)0; /* stub */
}

void __cxa_throw(void *exception, void *typeinfo, void (*dest)(void *)) {
    /* stub - does not return in real implementation */
    (void)exception;
    (void)typeinfo;
    (void)dest;
}

int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle) {
    (void)func;
    (void)arg;
    (void)dso_handle;
    return 0; /* stub */
}

void __cxa_finalize(void *dso_handle) {
    (void)dso_handle;
    /* stub */
}

void *__dynamic_cast(void *src, void *src_type, void *dst_type, long src2dst) {
    (void)src;
    (void)src_type;
    (void)dst_type;
    (void)src2dst;
    return (void*)0; /* stub */
}

/* RTTI typeinfo declarations */
static void *RTTIBase_typeinfo = (void*)"Base_typeinfo";
static void *RTTIDerivedA_typeinfo = (void*)"DerivedA_typeinfo";
static void *RTTIDerivedB_typeinfo = (void*)"DerivedB_typeinfo";

/* Other external functions */
extern void __stack_chk_fail(void);
extern int strcmp(const char *s1, const char *s2);
extern size_t strlen(const char *s);
extern char *strncpy(char *dest, const char *src, size_t n);
extern int puts(const char *s);
extern int __printf_chk(int flag, const char *format, ...);

typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct Init Init;
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;
typedef struct LifecycleClass LifecycleClass;

/* Struct definitions for incomplete types */
struct MiddleA { undefined8 vtable; };
struct MiddleB { undefined8 vtable; };
struct DiamondDerived { undefined8 vtable; };
struct Base { undefined8 vtable; };
struct Derived { undefined8 vtable; };
struct MultiDerived { undefined8 vtable; };
struct RTTIBase { undefined8 vtable; };
struct RTTIDerivedA { undefined8 vtable; };
struct RTTIDerivedB { undefined8 vtable; };
struct Init { undefined8 data; };
struct Container_int { undefined4 data[10]; undefined4 size; };
struct Container_double { double data[10]; undefined4 size; };
struct LifecycleClass { undefined8 data; };

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-1/5-1_gcc_O2_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00100eb0 @ 00100eb0 */

void FUN_00100eb0(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: test_cpp_exception @ 00101040 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 0010106c to 0010106f has its CatchHandler @ 00101070 */
 __cxa_throw(puVar1,(void*)0,0);
}



/* Function: main @ 00101120 */

undefined8 main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I_test_cpp_member_func @ 00101140 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

void _GLOBAL__sub_I_test_cpp_member_func(void)

{
 /* std::ios_base::Init::Init((Init *)&std::__ioinit); */
 /* __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle); */
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





void deregister_tm_clones(void)
{
 return;
}





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_0010123c @ 0010123c */

void FUN_0010123c(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 001012a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 char *__s;
 size_t sVar1;
 char acStack_2c [31];
 undefined1 local_d;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 __s = strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar1 = strlen(__s);
 if (local_8 - ___stack_chk_guard == 0) {
 return (int)sVar1 + 0x125c;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: test_cpp_constructor @ 00101310 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00101330 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x0010133c. Too many branches */
 /* WARNING: Treating indirect jump as call */
 ((void (*)(Base *, int))**(undefined8 **)param_1)(param_1,param_2);
 return;
}



/* Function: test_cpp_virtual_func @ 00101340 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

undefined8 test_cpp_virtual_func(void)

{
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 00101350 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined8 test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00101360 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

undefined8 test_cpp_diamond_inheritance(void)

{
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00101370 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined8 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00101380 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

undefined8 test_cpp_template_func(void)

{
 int iVar1;
 double dVar2;
 int local_10;
 int iStack_c;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 iVar1 = template_max_int(3,7);
 dVar2 = template_max_double(2.5,1.5);
 local_10 = 10;
 iStack_c = 0x14;
 template_swap_int(&local_10,&iStack_c);
 if (local_8 == ___stack_chk_guard) {
 return 0x2a;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: test_cpp_template_class @ 00101420 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined8 test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 00101430 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined8 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_smart_ptr @ 00101440 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined8 test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00101450 */

/* WARNING: Removing unreachable block (ram,0x001014f8) */
/* WARNING: Removing unreachable block (ram,0x00101504) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 long *plVar3;
 long *plVar4;
 long lVar5;
 int iVar7;
 
 iVar7 = 10;
 plVar3 = operator_new(8);
 *plVar3 = (long)PTR__RTTIDerivedA_00112c28;
 plVar4 = operator_new(8);
 *plVar4 = (long)PTR__RTTIDerivedB_00112c50;
 lVar5 = (long)__dynamic_cast(plVar3,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar7 = iVar7 + 0x78;
 if (lVar5 == 0) {
 iVar7 = iVar7 + 0x14;
 }
 lVar5 = (long)__dynamic_cast(plVar4,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 iVar7 = iVar7 + 200;
 if (lVar5 == 0) {
 iVar7 = iVar7 - 200;
 }
 return iVar7;
}



/* Function: test_cpp_oo_features @ 001015b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 undefined4 uVar1;
 size_t sVar2;
 char acStack_2c [31];
 undefined1 local_d;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 puts(DAT_00101b10);
 strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar2 = strlen(acStack_2c);
 __printf_chk(1,DAT_00101b38,(int)sVar2 + 0x125c);
 uVar1 = test_cpp_constructor();
 __printf_chk(1,DAT_00101b58,uVar1);
 __printf_chk(1,DAT_00101b78,0x2a);
 __printf_chk(1,DAT_00101b98,0x47);
 uVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,DAT_00101bb8,uVar1);
 __printf_chk(1,DAT_00101bd8,0x16);
 uVar1 = test_cpp_template_func();
 __printf_chk(1,DAT_00101bf8,uVar1);
 __printf_chk(1,DAT_00101c18,0x10);
 __printf_chk(1,DAT_00101c38,0x55);
 test_cpp_exception();
 test_cpp_exception();
 __printf_chk(1,DAT_00101c58,0);
 uVar1 = test_cpp_smart_ptr();
 __printf_chk(1,DAT_00101c78,uVar1);
 test_cpp_rtti();
 if (local_8 - ___stack_chk_guard == 0) {
 __printf_chk(1,DAT_00101c98);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: virtual_func @ 00101740 */

/* Base_virtual_func(int) */

int __thiscall Base_virtual_func(Base *this,int param_1)

{
 return param_1 + 1;
}



/* Function: getName @ 00101750 */

/* Base_getName() const */

undefined1 * Base_getName(void)

{
 return DAT_00101af8;
}



/* Function: _Base @ 00101760 */

/* Base__Base() */

void __thiscall Base__Base(Base *this)

{
 return;
}



/* Function: virtual_func @ 00101770 */

/* Derived_virtual_func(int) */

int __thiscall Derived_virtual_func(Derived *this,int param_1)

{
 return param_1 * *(int *)(this + 8);
}



/* Function: getName @ 00101780 */

/* Derived_getName() const */

char * Derived_getName(void)

{
 return "Derived";
}



/* Function: funcA @ 00101790 */

/* MultiDerived_funcA() */

undefined8 MultiDerived_funcA(void)

{
 return 0x1e;
}



/* Function: funcB @ 001017a0 */

/* MultiDerived_funcB() */

undefined8 MultiDerived_funcB(void)

{
 return 0x28;
}



/* Function: funcB @ 001017b0 */

/* non-virtual thunk to MultiDerived_funcB() */

undefined8 __thiscall MultiDerived_funcB_non_virtual_thunk(MultiDerived *this)

{
 return 0x28;
}



/* Function: func @ 001017c0 */

/* MiddleA_func() */

int __thiscall MiddleA_func(MiddleA *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}



/* Function: func @ 001017e0 */

/* virtual thunk to MiddleA_func() */

int __thiscall MiddleA_func_virtual_thunk(MiddleA *this)

{
 return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) +
 *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}



/* Function: func @ 00101810 */

/* MiddleB_func() */

int __thiscall MiddleB_func(MiddleB *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}



/* Function: func @ 00101830 */

/* virtual thunk to MiddleB_func() */

int __thiscall MiddleB_func_virtual_thunk(MiddleB *this)

{
 return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) +
 *(long *)(*(long *)this + -0x18) + 8) + 200;
}



/* Function: func @ 00101860 */

/* DiamondDerived_func() */

int __thiscall DiamondDerived_func(DiamondDerived *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}



/* Function: func @ 00101880 */

/* virtual thunk to DiamondDerived_func() */

int __thiscall DiamondDerived_func_virtual_thunk(DiamondDerived *this)

{
 return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) +
 *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}



/* Function: func @ 001018a4 */

/* non-virtual thunk to DiamondDerived_func() */

int __thiscall DiamondDerived_func_non_virtual_thunk(DiamondDerived *this)

{
 return *(int *)(this + *(long *)(*(long *)(this + -0x10) + -0x18) + -8) + 0xfa;
}



/* Function: getType @ 001018c0 */

/* RTTIDerivedA_getType() const */

undefined8 RTTIDerivedA_getType(void)

{
 return 1;
}



/* Function: getType @ 001018d0 */

/* RTTIDerivedB_getType() const */

undefined8 RTTIDerivedB_getType(void)

{
 return 2;
}



/* Function: _RTTIDerivedB @ 001018e0 */

/* RTTIDerivedB__RTTIDerivedB() */

void __thiscall RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this)

{
 return;
}



/* Function: _RTTIDerivedA @ 001018f0 */

/* RTTIDerivedA__RTTIDerivedA() */

void __thiscall RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this)

{
 return;
}



/* Function: _DiamondDerived @ 00101900 */

/* DiamondDerived__DiamondDerived() */

void __thiscall DiamondDerived__DiamondDerived(DiamondDerived *this)

{
 return;
}



/* Function: _DiamondDerived_virtual_thunk @ 00101904 */

/* virtual thunk to DiamondDerived__DiamondDerived() */

void __thiscall DiamondDerived__DiamondDerived_virtual_thunk(DiamondDerived *this)

{
 return;
}



/* Function: _DiamondDerived_non_virtual_thunk @ 00101910 */

/* non-virtual thunk to DiamondDerived__DiamondDerived() */

void __thiscall DiamondDerived__DiamondDerived_non_virtual_thunk(DiamondDerived *this)

{
 return;
}



/* Function: _MultiDerived @ 00101920 */

/* MultiDerived__MultiDerived() */

void __thiscall MultiDerived__MultiDerived(MultiDerived *this)

{
 return;
}



/* Function: _MultiDerived @ 00101924 */

/* non-virtual thunk to MultiDerived__MultiDerived() */

void __thiscall MultiDerived__MultiDerived_non_virtual_thunk(MultiDerived *this)

{
 return;
}



/* Function: _Derived @ 00101930 */

/* Derived__Derived() */

void __thiscall Derived__Derived(Derived *this)

{
 return;
}



/* Function: _Base @ 00101940 */

/* Base__Base_destructor() */

void __thiscall Base__Base_destructor(Base *this)

{
 operator_delete(this);
 return;
}







/* Function: _MultiDerived @ 00101960 */

/* MultiDerived__MultiDerived_destructor() */

void __thiscall MultiDerived__MultiDerived_destructor(MultiDerived *this)

{
 operator_delete(this);
 return;
}



/* Function: _MultiDerived @ 00101970 */

/* non-virtual thunk to MultiDerived__MultiDerived_destructor() */

void __thiscall MultiDerived__MultiDerived_destructor_non_virtual_thunk(MultiDerived *this)

{
 operator_delete(this + -0x10);
 return;
}























/* Function: template_max_int @ 001019d0 */

/* int template_max_int(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_max_double @ 001019e0 */

/* double template_max_double(double, double) */

double template_max_double(double param_1,double param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap_int @ 001019f0 */

/* void template_swap_int(int&, int&) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container_int_Constructor @ 00101a10 */

/* Container_int::Container_int() */

void __thiscall Container_int_Constructor(Container_int *this)

{
 *(undefined4 *)(this + 0x28) = 0;
 return;
}



/* Function: Container_int_push @ 00101a20 */

/* Container_int::push(int) */

void __thiscall Container_int_push(Container_int *this,int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this + 0x28);
 if (iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + (long)iVar1 * 4) = param_1;
 }
 return;
}



/* Function: Container_int_get @ 00101a40 */

/* Container_int::get(int) const */

undefined4 __thiscall Container_int_get(Container_int *this,int param_1)

{
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
 return *(undefined4 *)(this + (long)param_1 * 4);
 }
 return 0;
}



/* Function: Container_int_getSize @ 00101a70 */

/* Container_int::getSize() const */

undefined4 __thiscall Container_int_getSize(Container_int *this)

{
 return *(undefined4 *)(this + 0x28);
}



/* Function: Container_double_Constructor @ 00101a80 */

/* Container_double::Container_double() */

void __thiscall Container_double_Constructor(Container_double *this)

{
 *(undefined4 *)(this + 0x50) = 0;
 return;
}



/* Function: Container_double_push @ 00101a90 */

/* Container_double::push(double) */

void __thiscall Container_double_push(Container_double *this,double param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this + 0x50);
 if (iVar1 < 10) {
 *(int *)(this + 0x50) = iVar1 + 1;
 *(double *)(this + (long)iVar1 * 8) = param_1;
 }
 return;
}



/* Function: Container_double_get @ 00101ab0 */

/* Container_double::get(int) const */

undefined8 __thiscall Container_double_get(Container_double *this,int param_1)

{
 undefined8 uVar1;
 
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 uVar1 = *(undefined8 *)(this + (long)param_1 * 8);
 return uVar1;
 }
 return 0;
}



/* Function: Container_double_getSize @ 00101ad0 */

/* Container_double::getSize() const */

undefined4 __thiscall Container_double_getSize(Container_double *this)

{
 return *(undefined4 *)(this + 0x50);
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 70 */
