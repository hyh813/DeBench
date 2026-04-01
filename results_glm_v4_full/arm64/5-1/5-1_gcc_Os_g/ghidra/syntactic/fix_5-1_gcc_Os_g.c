#include <stdint.h>
#include <stdlib.h>
#include <string.h>

/* Auto-injected type definitions by preprocessor */
#ifndef uint8_t
typedef unsigned char uint8_t;
#endif
#ifndef uint16_t
typedef unsigned short uint16_t;
#endif
#ifndef uint32_t
typedef unsigned int uint32_t;
#endif
#ifndef uint
typedef unsigned int uint;
#endif

#ifndef int8_t
typedef signed char int8_t;
#endif
#ifndef int16_t
typedef short int16_t;
#endif
#ifndef int32_t
typedef int int32_t;
#endif

#ifndef size_t
typedef unsigned long size_t;
#endif
#ifndef ssize_t
typedef long ssize_t;
#endif
#ifndef uintptr_t
typedef unsigned long uintptr_t;
#endif
#ifndef intptr_t
typedef long intptr_t;
#endif
#ifndef ptrdiff_t
typedef unsigned long ptrdiff_t;
#endif


#ifndef ulong
typedef unsigned long ulong;
#endif

#include <string.h>

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-1/5-1_gcc_Os_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */

/* Forward declarations for C++ classes */
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct SimpleClass SimpleClass;
typedef struct DiamondDerived DiamondDerived;
typedef struct LifecycleClass LifecycleClass;
typedef struct MultiDerived MultiDerived;
typedef struct VirtualBase VirtualBase;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;

/* Type definition for undefined4 - Ghidra type for 32-bit value */
typedef uint32_t undefined4;
typedef uint64_t undefined8;
typedef void undefined;
typedef unsigned char undefined1;

/* Virtual function table pointer type */
typedef int (*_func_int_varargs)(void);
typedef void (*code)(void);

/* SimpleClass structure */
struct SimpleClass {
    char name[32];
};

/* Base class with virtual table pointer */
struct Base {
    _func_int_varargs **_vptr_Base;
};

/* Derived class inheriting from Base */
struct Derived {
    struct Base super_Base;
    int multiplier;
};

/* LifecycleClass structure */
struct LifecycleClass {
    int instance_count;
};

/* VirtualBase class */
struct VirtualBase {
    _func_int_varargs **_vptr_VirtualBase;
};

/* MiddleA class */
struct MiddleA {
    _func_int_varargs **_vptr_MiddleA;
    int _16_8_;
    int dataA;
    void *field_0x10;
};

/* MiddleB class */
struct MiddleB {
    _func_int_varargs **_vptr_MiddleB;
    int _16_8_;
    int dataB;
    void *field_0x10;
};

/* DiamondDerived class with multiple inheritance */
struct DiamondDerived {
    struct MiddleA super_MiddleA;
    void *_32_8_;
    int _40_4_;
    char field_0x20[8];
};

/* MultiDerived class */
struct MultiDerived {
    struct Base super_BaseA;
    struct Base super_BaseB;
};

/* RTTI Base class */
struct RTTIBase {
    void *_vptr_RTTIBase;
};

/* RTTIDerivedA class */
struct RTTIDerivedA {
    void *_vptr;
};

/* RTTIDerivedB class */
struct RTTIDerivedB {
    void *_vptr;
};

/* Template classes - explicit specializations for C compatibility */
struct Container_int {
    int size;
    int data[10];
    void (*push)(struct Container_int *this, int value);
    int (*get)(struct Container_int *this, int idx);
    int (*getSize)(struct Container_int *this);
};

struct Container_double {
    int size;
    double data[10];
    void (*push)(struct Container_double *this, double value);
    double (*get)(struct Container_double *this, int idx);
    int (*getSize)(struct Container_double *this);
};

/* std::unique_ptr stub structures for C compatibility */
struct type_info {
    const char *_name;
};

/* unique_ptr<int[]> structure for array specializations */
struct unique_ptr_int_array {
    struct {
        struct {
            void *_M_t;
        } _M_t;
    } _M_t;
    void (*destructor)(struct unique_ptr_int_array *this, int __in_chrg);
};

/* std::ios_base::Init structure */
struct ios_base_Init {
    void (*constructor)(struct ios_base_Init *this);
    void (*destructor)(struct ios_base_Init *this);
};

/* Function declarations for std::ios_base::Init */
extern void std_ios_base_Init_constructor(struct ios_base_Init *this);
extern void std_ios_base_Init_destructor(struct ios_base_Init *this);

/* Namespace aliases for C++ compatibility */
typedef struct ios_base_Init std_ios_base_Init;
typedef struct type_info std_type_info;

/* Global variables */
extern struct ios_base_Init std___ioinit;
extern char DAT_001025b2;
extern char DAT_001025d6;
extern char DAT_001025f4;
extern char DAT_00102610;
extern char DAT_0010262c;
extern char DAT_00102648;
extern char DAT_00102665;
extern char DAT_00102681;
extern char DAT_0010269d;
extern char DAT_001026b9;
extern char DAT_001026d5;
extern char DAT_001026f2;
extern char DAT_0010270f;

/* Standard library functions */
extern int puts(const char *s);

struct default_delete_int {
    char placeholder;
};

/* Simplified unique_ptr<int> structure */
struct __uniq_ptr_impl_int {
    void *_M_t;
};

struct __uniq_ptr_data_int {
    void *_M_t;
};

struct unique_ptr_int {
    struct {
        struct __uniq_ptr_impl_int _M_t;
    } _M_t;
    void (*destructor)(struct unique_ptr_int *this, int __in_chrg);
};

/* Replacement for undefined4 in test_cpp_exception */
#define undefined4 uint32_t

/* Stack protection variables */
extern unsigned long ___stack_chk_guard;
extern unsigned long __stack_chk_guard;

#include <stdio.h>

/* Forward declarations */
void test_cpp_oo_features(void);
void *__cxa_allocate_exception(size_t size);
void *__dynamic_cast(void *src_ptr, void *from_type, void *to_type, ptrdiff_t offset);
int DiamondDerived_func(DiamondDerived *this);
void DiamondDerived_destructor(DiamondDerived *this);
void DiamondDerived_destructor3(DiamondDerived *this);
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);

void *operator_new(size_t size);
void operator_delete(void *ptr, size_t size);
void operator_delete__(void *ptr);
void __cxa_throw(void *thrown_exception, void *tinfo, void (*dest)(void*));
void Container_int_push(struct Container_int *this, int value);
int Container_int_get(struct Container_int *this, int idx);
void __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
void __cxa_finalize(void *dso_handle);
void __stack_chk_fail(void *, void *, int, long);
void deregister_tm_clones(void);
void unique_ptr_array_destructor(struct unique_ptr_int_array *this, int __in_chrg);
void unique_ptr_int_destructor(struct unique_ptr_int *this, int __in_chrg);
int __printf_chk(int flag, const char *format, ...);

/* Global variables */
extern char completed_0;
extern void *__dso_handle;
extern void *PTR_virtual_func_00113868;
extern void *PTR_virtual_func_00113898;
extern void *PTR__RTTIDerivedA_00113b58;
extern void *PTR__RTTIDerivedB_00113b80;
extern void *PTR_func_00113ac8;
extern void *PTR_func_00113b30;
extern void *PTR_func_00113af8;
extern void *PTR_func_001138e0;
extern void *PTR_func_00113918;
extern void *PTR_func_00113958;
extern void *PTR_func_00113990;
extern void *PTR_PTR_00113a90;
extern void *PTR_PTR_00113a80;
extern void *PTR_ptr_00113a80;
extern void *PTR_ptr_00113a90;

/* Function: FUN_00101650 @ 00101650 */

void FUN_00101650(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: test_cpp_exception @ 00101800 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 /* Unresolved local var: int result@[???] */
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 0010182c to 0010182f has its CatchHandler @ 00101830 */
 __cxa_throw(puVar1,0,0);
}



/* Function: main @ 001018d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 001018e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I__Z20test_cpp_member_funcv(void)

{
 std_ios_base_Init_constructor(&std___ioinit);
 __cxa_atexit((void (*)(void *))std_ios_base_Init_destructor,&std___ioinit,&__dso_handle);
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_001019fc @ 001019fc */

void FUN_001019fc(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00101a54 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)

{
 long lVar1;
 char *__s;
 size_t sVar2;
 SimpleClass obj;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 lVar1 = ___stack_chk_guard;
 __s = strncpy(obj.name,"Test",0x1f);
 obj.name[0x1f] = '\0';
 sVar2 = strlen(__s);
 if (lVar1 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail((void *)(uintptr_t)sVar2,&__stack_chk_guard,0,(int)(lVar1 - ___stack_chk_guard));
 }
 return (int)sVar2 + 0x125c;
}



/* Function: test_cpp_constructor @ 00101ac0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 return 0 * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00101ad8 */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 int (*func)(Base *, int);
 
 /* WARNING: Could not recover jumptable at 0x00101ae4. Too many branches */
 /* WARNING: Treating indirect jump as call */
 func = (int (*)(Base *, int))*obj->_vptr_Base;
 iVar1 = func(obj, x);
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 00101ae8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
 long lVar1;
 int iVar2;
 int iVar3;
 Base base;
 Derived derived;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: Base * pb@[???]
 Unresolved local var: Base * pd@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r4@[???] */
 lVar1 = ___stack_chk_guard;
 base._vptr_Base = (_func_int_varargs **)&PTR_virtual_func_00113868;
 derived.super_Base._vptr_Base = (_func_int_varargs **)&PTR_virtual_func_00113898;
 derived.multiplier = 3;
 iVar2 = call_virtual_func(&base,5);
 iVar3 = call_virtual_func(&derived.super_Base,5);
 iVar3 = iVar2 + 0x15 + iVar3;
 if (lVar1 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail((void *)(uintptr_t)iVar3,&__stack_chk_guard,0,lVar1 - ___stack_chk_guard);
 }
 return iVar3;
}



/* Function: test_cpp_multiple_inheritance @ 00101b78 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
 /* Unresolved local var: MultiDerived obj@[???]
 Unresolved local var: BaseA * pa@[???]
 Unresolved local var: BaseB * pb@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int ptr_equal@[???] */
 return 0x47;
}



/* Function: test_cpp_operator_overload @ 00101b80 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 /* Unresolved local var: Point p1@[???]
 Unresolved local var: Point p2@[???]
 Unresolved local var: Point p3@[???]
 Unresolved local var: bool eq@[???] */
 return 0x16;
}



/* Function: test_cpp_template_func @ 00101b88 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 int iVar1;
 double dVar2;
 int a;
 int b;
 long local_8;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: double r2@[???] */
 local_8 = ___stack_chk_guard;
 iVar1 = template_max_int(3,7);
 dVar2 = template_max_double(2.5,1.5);
 a = 10;
 b = 0x14;
 template_swap_int(&a,&b);
 iVar1 = (int)dVar2 + iVar1 + a + b;
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail((void *)(uintptr_t)iVar1,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return iVar1;
}



/* Function: test_cpp_template_class @ 00101c30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
 int iVar1;
 long lVar2;
 struct Container_int int_container;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: Container<double> double_container@[???]
 Unresolved local var: double r3@[???] */
 lVar2 = ___stack_chk_guard;
 int_container.size = 1;
 int_container.data[0] = 10;
 Container_int_push(&int_container,0x14);
 Container_int_push(&int_container,0x1e);
 iVar1 = Container_int_get(&int_container, 0);
 if (int_container.size < 1) {
 iVar1 = 0;
 }
 if (lVar2 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail((void *)(uintptr_t)(int_container.size + iVar1),&__stack_chk_guard,0,lVar2 - ___stack_chk_guard);
 }
 return int_container.size + iVar1 + 3;
}



/* Function: test_cpp_lambda @ 00101cc0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
 /* Unresolved local var: int capture_by_value@[???]
 Unresolved local var: int capture_by_ref@[???]
 Unresolved local var: anon_struct_16_2_484633fb lambda1@[???]
 Unresolved local var: anon_struct_1_0_00000001 lambda2@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 0x55;
}



/* Function: test_cpp_rtti @ 00101cc8 */

/* WARNING: Removing unreachable block (ram,0x00101d68) */
/* WARNING: Removing unreachable block (ram,0x00101d74) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 char cVar1;
 int iVar2;
 long *plVar3;
 long *plVar4;
 long lVar5;
 size_t sVar6;
 int iVar7;
 char *__s1;
 long lVar8;
 
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: RTTIBase * obj2@[???]
 Unresolved local var: int result@[???] */
plVar3 = operator_new(8);
	*(void **)plVar3 = &PTR__RTTIDerivedA_00113b58;
	plVar4 = operator_new(8);
	lVar8 = (intptr_t)*(void **)plVar3;
 *(void **)plVar4 = &PTR__RTTIDerivedB_00113b80;
 __s1 = *(char **)(*(intptr_t *)((char *)lVar8 - 8) + 8);
 cVar1 = *__s1;
 if (__s1 == "12RTTIDerivedA") {
 iVar7 = 10;
 }
 else if (cVar1 == '*') {
 iVar7 = 0;
 }
 else {
 iVar2 = strcmp(__s1,"12RTTIDerivedA");
 iVar7 = 0;
 if (iVar2 == 0) {
 iVar7 = 10;
 }
 }
iVar2 = iVar7 + 0x14;
	/* Unresolved local var: RTTIDerivedA * derivedA@[???] */
	lVar5 = (long)__dynamic_cast(plVar3,0,0,0);
 if (lVar5 != 0) {
 iVar2 = iVar7 + 0x78;
}
	/* Unresolved local var: RTTIDerivedB * derivedB@[???] */
	lVar5 = (long)__dynamic_cast(plVar4,0,0,0);
 if (lVar5 != 0) {
 iVar2 = iVar2 + 200;
 }
 if (cVar1 == '*') {
 __s1 = __s1 + 1;
 }
 sVar6 = strlen(__s1);
 {
 void (*func_ptr)(void*);
 func_ptr = *(void (**)(void*))(lVar8 + 8);
 func_ptr(plVar3);
 }
 {
 void (*func_ptr)(void*);
 func_ptr = *(void (**)(void*))(*plVar4 + 8);
 func_ptr(plVar4);
 }
 return iVar2 + (int)sVar6;
}



/* Function: test_cpp_smart_ptr @ 00101e24 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
 long lVar1;
 int __in_chrg;
 int __in_chrg_00;
 struct unique_ptr_int ptr1;
 struct unique_ptr_int ptr2;
 struct unique_ptr_int_array arr;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: anon_struct_1_0_00000001_for__M_head_impl deleter@[???]
 Unresolved local var: unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_>
 ptr3@[???]
 Unresolved local var: int r3@[???] */
 lVar1 = ___stack_chk_guard;
 ptr2._M_t._M_t._M_t = (void *)operator_new(4);
 ptr1._M_t._M_t._M_t = (void *)0x0;
 *(undefined4 *)ptr2._M_t._M_t._M_t = 200;
 /* try { // try from 00101e68 to 00101e6b has its CatchHandler @ 00101ec8 */
 arr._M_t._M_t._M_t = (void *)operator_new(0x14);
 *(undefined8 *)(intptr_t)&arr._M_t._M_t = 0x200000001;
 *(undefined8 *)((intptr_t)&arr._M_t._M_t + 8) = 0x400000003;
 *(undefined4 *)((intptr_t)&arr._M_t._M_t + 0x10) = 5;
 unique_ptr_array_destructor(&arr,5);
 unique_ptr_int_destructor(&ptr2,__in_chrg);
 unique_ptr_int_destructor(&ptr1,__in_chrg_00);
 if (lVar1 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail((void *)0,&__stack_chk_guard,0,lVar1 - ___stack_chk_guard);
 }
 return 0x2bf;
}



/* Function: test_cpp_diamond_inheritance @ 00101ef8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

int test_cpp_diamond_inheritance(void)

{
 long lVar1;
 int iVar2;
 int iVar3;
 DiamondDerived obj;
 
 /* Unresolved local var: VirtualBase * pb@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 lVar1 = ___stack_chk_guard;
 obj.super_MiddleA._vptr_MiddleA = (_func_int_varargs **)&PTR_func_00113ac8;
 obj._32_8_ = (void *)(intptr_t)&PTR_func_00113b30;
 obj.super_MiddleA._16_8_ = (int)(intptr_t)&PTR_func_00113af8;
 obj._40_4_ = 0x32;
 iVar2 = DiamondDerived_func((DiamondDerived *)&obj.field_0x20);
 obj._40_4_ = 100;
 iVar3 = DiamondDerived_func((DiamondDerived *)&obj.field_0x20);
 DiamondDerived_destructor(&obj);
 if (lVar1 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,0,0,lVar1 - ___stack_chk_guard);
 }
 return iVar2 + iVar3;
}



/* Function: test_cpp_oo_features @ 00101fa0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void test_cpp_oo_features(void)

{
 int iVar1;
 
 puts(&DAT_001025b2);
 iVar1 = test_cpp_member_func();
 __printf_chk(1,&DAT_001025d6,iVar1);
 iVar1 = test_cpp_constructor();
 __printf_chk(1,&DAT_001025f4,iVar1);
 iVar1 = test_cpp_virtual_func();
 __printf_chk(1,&DAT_00102610,iVar1);
 iVar1 = test_cpp_multiple_inheritance();
 __printf_chk(1,&DAT_0010262c,iVar1);
 iVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,&DAT_00102648,iVar1);
 iVar1 = test_cpp_operator_overload();
 __printf_chk(1,&DAT_00102665,iVar1);
 iVar1 = test_cpp_template_func();
 __printf_chk(1,&DAT_00102681,iVar1);
 iVar1 = test_cpp_template_class();
 __printf_chk(1,&DAT_0010269d,iVar1);
 iVar1 = test_cpp_lambda();
 __printf_chk(1,&DAT_001026b9,iVar1);
 iVar1 = test_cpp_exception();
 __printf_chk(1,&DAT_001026d5,iVar1);
 iVar1 = test_cpp_smart_ptr();
 __printf_chk(1,&DAT_001026f2,iVar1);
 iVar1 = test_cpp_rtti();
 __printf_chk(1,&DAT_0010270f,iVar1);
 return;
}



/* Function: virtual_func @ 001020d8 */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int Base_virtual_func(Base *this,int x)

{
 return x + 1;
}



/* Function: getName @ 001020e0 */

/* DWARF original prototype: char * getName(Base * this) */

char * Base_getName(Base *this)

{
 return "Base";
}



/* Function: ~Base @ 001020ec */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void Base_destructor(Base *this,int __in_chrg)

{
 return;
}



/* Function: virtual_func @ 001020f0 */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int Derived_virtual_func(Derived *this,int x)

{
 return x * this->multiplier;
}



/* Function: getName @ 001020fc */

/* DWARF original prototype: char * getName(Derived * this) */

char * Derived_getName(Derived *this)

{
 return "Derived";
}



/* Function: funcA @ 00102108 */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int MultiDerived_funcA(MultiDerived *this)

{
 return 0x1e;
}



/* Function: funcB @ 00102110 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int MultiDerived_funcB(MultiDerived *this)

{
 return 0x28;
}



/* Function: funcB @ 00102118 */

/* non-virtual thunk to MultiDerived::funcB() */

undefined8 MultiDerived_funcB_thunk(MultiDerived *this)

{
 return 0x28;
}



/* Function: func @ 00102120 */

/* DWARF original prototype: int func(VirtualBase * this) */

int VirtualBase_func(VirtualBase *this)

{
 return 100;
}



/* Function: ~VirtualBase @ 00102128 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this, int __in_chrg) */

void VirtualBase_destructor(VirtualBase *this,int __in_chrg)

{
 return;
}



/* Function: func @ 0010212c */

/* DWARF original prototype: int func(MiddleA * this) */

int MiddleA_func(MiddleA *this)

{
 return *(int *)((long)&this->dataA + (long)this->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: func @ 00102144 */

/* virtual thunk to MiddleA::func() */

int MiddleA_func_thunk(MiddleA *this)

{
 int iVar1;
 
 iVar1 = MiddleA_func((MiddleA *)((intptr_t)&this->_vptr_MiddleA + (intptr_t)this->_vptr_MiddleA[-3]));
 return iVar1;
}



/* Function: func @ 00102154 */

/* DWARF original prototype: int func(MiddleB * this) */

int MiddleB_func(MiddleB *this)

{
 return *(int *)((long)&this->dataB + (long)this->_vptr_MiddleB[-3]) + 200;
}



/* Function: func @ 0010216c */

/* virtual thunk to MiddleB::func() */

int MiddleB_func_thunk(MiddleB *this)

{
 int iVar1;
 
 iVar1 = MiddleB_func((MiddleB *)((intptr_t)&this->_vptr_MiddleB + (intptr_t)this->_vptr_MiddleB[-3]));
 return iVar1;
}



/* Function: func @ 0010217c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int DiamondDerived_func_impl(DiamondDerived *this)

{
 return *(int *)((long)&(this->super_MiddleA).dataA + (long)(this->super_MiddleA)._vptr_MiddleA[-3]
 ) + 0xfa;
}



/* Function: func @ 00102194 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_thunk1(DiamondDerived *this)

{
 int iVar1;
 
 iVar1 = DiamondDerived_func_impl((DiamondDerived *)
 ((intptr_t)&(this->super_MiddleA)._vptr_MiddleA +
 (intptr_t)(this->super_MiddleA)._vptr_MiddleA[-3]));
 return iVar1;
}



/* Function: func @ 001021a4 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::func() */

int DiamondDerived_func(DiamondDerived *this)

{
 int iVar1;
 
 iVar1 = DiamondDerived_func_impl((DiamondDerived *)&this[-1].field_0x20);
 return iVar1;
}



/* Function: ~MiddleA @ 001021ac */

/* DWARF original prototype: void ~MiddleA(MiddleA * this) */

void MiddleA_destructor1(MiddleA *this)

{
 this->_vptr_MiddleA = (_func_int_varargs **)&PTR_func_001138e0;
 *(undefined ***)&this->field_0x10 = &PTR_func_00113918;
 return;
}



/* Function: ~MiddleA @ 001021c8 */

/* virtual thunk to MiddleA::~MiddleA() */

void MiddleA_destructor_thunk(MiddleA *this)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = this->_vptr_MiddleA[-4];
 *(undefined ***)((long)&this->_vptr_MiddleA + (long)p_Var1) = &PTR_func_001138e0;
 *(undefined ***)(&this->field_0x10 + (long)p_Var1) = &PTR_func_00113918;
 return;
}



/* Function: ~MiddleB @ 001021f0 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this) */

void MiddleB_destructor1(MiddleB *this)

{
 this->_vptr_MiddleB = (_func_int_varargs **)&PTR_func_00113958;
 *(undefined ***)&this->field_0x10 = &PTR_func_00113990;
 return;
}



/* Function: ~MiddleB @ 0010220c */

/* virtual thunk to MiddleB::~MiddleB() */

void MiddleB_destructor_thunk(MiddleB *this)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = this->_vptr_MiddleB[-4];
 *(undefined ***)((long)&this->_vptr_MiddleB + (long)p_Var1) = &PTR_func_00113958;
 *(undefined ***)(&this->field_0x10 + (long)p_Var1) = &PTR_func_00113990;
 return;
}



/* Function: getType @ 00102234 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int RTTIDerivedA_getType(RTTIDerivedA *this)

{
 return 1;
}



/* Function: getType @ 0010223c */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int RTTIDerivedB_getType(RTTIDerivedB *this)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 00102244 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void RTTIDerivedB_destructor(RTTIDerivedB *this,int __in_chrg)

{
 return;
}



/* Function: ~RTTIDerivedA @ 00102248 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void RTTIDerivedA_destructor(RTTIDerivedA *this,int __in_chrg)

{
 return;
}



/* Function: ~MultiDerived @ 0010224c */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void MultiDerived_destructor(MultiDerived *this,int __in_chrg)

{
 return;
}



/* Function: ~MultiDerived @ 00102250 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_destructor_thunk(MultiDerived *this)

{
 return;
}



/* Function: ~Derived @ 00102254 */

/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void Derived_destructor1(Derived *this,int __in_chrg)

{
 return;
}



/* Function: ~Base @ 00102258 */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void Base_destructor2(Base *this,int __in_chrg)

{
 operator_delete(this,8);
 return;
}



/* Function: ~Derived @ 00102260 */

/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void Derived_destructor2(Derived *this,int __in_chrg)

{
 operator_delete(this,0x10);
 return;
}



/* Function: ~MultiDerived @ 00102268 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void MultiDerived_destructor2(MultiDerived *this,int __in_chrg)

{
 operator_delete(this,0x20);
 return;
}



/* Function: ~MultiDerived @ 00102270 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_destructor_thunk2(MultiDerived *this)

{
 int in_w1;
 
 MultiDerived_destructor2((MultiDerived *)&this[-1].super_BaseB,in_w1);
 return;
}



/* Function: ~VirtualBase @ 00102278 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this, int __in_chrg) */

void VirtualBase_destructor2(VirtualBase *this,int __in_chrg)

{
 operator_delete(this,0x10);
 return;
}



/* Function: ~RTTIDerivedB @ 00102280 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void RTTIDerivedB_destructor2(RTTIDerivedB *this,int __in_chrg)

{
 operator_delete(this,8);
 return;
}



/* Function: ~RTTIDerivedA @ 00102288 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void RTTIDerivedA_destructor2(RTTIDerivedA *this,int __in_chrg)

{
 operator_delete(this,8);
 return;
}



/* Function: ~MiddleA @ 00102290 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this) */

void MiddleA_destructor2(MiddleA *this)

{
 this->_vptr_MiddleA = (_func_int_varargs **)&PTR_func_001138e0;
 *(undefined ***)&this->field_0x10 = &PTR_func_00113918;
 operator_delete(this,0x20);
 return;
}



/* Function: ~MiddleA @ 001022b0 */

/* virtual thunk to MiddleA::~MiddleA() */

void MiddleA_destructor_thunk2(MiddleA *this)

{
 MiddleA_destructor2((MiddleA *)((long)&this->_vptr_MiddleA + (long)this->_vptr_MiddleA[-4]));
 return;
}



/* Function: ~MiddleB @ 001022c0 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this) */

void MiddleB_destructor2(MiddleB *this)

{
 this->_vptr_MiddleB = (_func_int_varargs **)&PTR_func_00113958;
 *(undefined ***)&this->field_0x10 = &PTR_func_00113990;
 operator_delete(this,0x20);
 return;
}



/* Function: ~MiddleB @ 001022e0 */

/* virtual thunk to MiddleB::~MiddleB() */

void MiddleB_destructor_thunk2(MiddleB *this)

{
 MiddleB_destructor2((MiddleB *)((long)&this->_vptr_MiddleB + (long)this->_vptr_MiddleB[-4]));
 return;
}



/* Function: ~MiddleA @ 001022f0 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this, int __in_chrg, void * * __vtt_parm) */

void MiddleA_destructor3(MiddleA *this,int __in_chrg,void **__vtt_parm)

{
 undefined **ppuVar1;
 _func_int_varargs *p_Var2;
 undefined **ppuVar3;
 
 if (__in_chrg == 0) {
 ppuVar3 = *__vtt_parm;
 }
 else {
 ppuVar3 = &PTR_func_001138e0;
 }
 this->_vptr_MiddleA = (_func_int_varargs **)ppuVar3;
 if (__in_chrg == 0) {
 ppuVar1 = __vtt_parm[1];
 p_Var2 = ((_func_int_varargs **)ppuVar3)[-3];
 }
 else {
 p_Var2 = (_func_int_varargs *)0x10;
 ppuVar1 = &PTR_func_00113918;
 }
 *(undefined ***)((long)&this->_vptr_MiddleA + (long)p_Var2) = ppuVar1;
 return;
}



/* Function: ~MiddleA @ 0010232c */

/* DWARF original prototype: void ~MiddleA(MiddleA * this, void * * __vtt_parm) */

void MiddleA_destructor4(MiddleA *this,void **__vtt_parm)

{
 MiddleA_destructor3(this,0,__vtt_parm);
 return;
}



/* Function: ~MiddleB @ 00102338 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this, int __in_chrg, void * * __vtt_parm) */

void MiddleB_destructor3(MiddleB *this,int __in_chrg,void **__vtt_parm)

{
 undefined **ppuVar1;
 _func_int_varargs *p_Var2;
 undefined **ppuVar3;
 
 if (__in_chrg == 0) {
 ppuVar3 = *__vtt_parm;
 }
 else {
 ppuVar3 = &PTR_func_00113958;
 }
 this->_vptr_MiddleB = (_func_int_varargs **)ppuVar3;
 if (__in_chrg == 0) {
 ppuVar1 = __vtt_parm[1];
 p_Var2 = ((_func_int_varargs **)ppuVar3)[-3];
 }
 else {
 p_Var2 = (_func_int_varargs *)0x10;
 ppuVar1 = &PTR_func_00113990;
 }
 *(undefined ***)((long)&this->_vptr_MiddleB + (long)p_Var2) = ppuVar1;
 return;
}



/* Function: ~MiddleB @ 00102374 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this, void * * __vtt_parm) */

void MiddleB_destructor4(MiddleB *this,void **__vtt_parm)

{
 MiddleB_destructor3(this,0,__vtt_parm);
 return;
}



/* Function: template_max<int> @ 00102380 */

int template_max_int(int a,int b)

{
 if (a < b) {
 a = b;
 }
 return a;
}



/* Function: template_max<double> @ 0010238c */

double template_max_double(double a,double b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_swap<int> @ 00102398 */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container @ 001023ac */

/* DWARF original prototype: void Container(Container<int> * this) */

void Container_int_Container(Container_int *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 001023b4 */

/* DWARF original prototype: void push(Container<int> * this, int value) */

void Container_int_push(Container_int *this,int value)

{
 int iVar1;
 
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 001023d0 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int Container_int_get(Container_int *this,int idx)

{
 int iVar1;
 
 if ((idx < 0) || (this->size <= idx)) {
 iVar1 = 0;
 }
 else {
 iVar1 = this->data[idx];
 }
 return iVar1;
}



/* Function: getSize @ 001023f0 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int Container_int_getSize(Container_int *this)

{
 return this->size;
}



/* Function: Container @ 001023f8 */

/* DWARF original prototype: void Container(Container<double> * this) */

void Container_double_Container(Container_double *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 00102400 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void Container_double_push(Container_double *this,double value)

{
 int iVar1;
 
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 0010241c */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double Container_double_get(Container_double *this,int idx)

{
 double dVar1;
 
 if ((idx < 0) || (this->size <= idx)) {
 dVar1 = 0.0;
 }
 else {
 dVar1 = this->data[idx];
 }
 return dVar1;
}



/* Function: getSize @ 0010243c */

/* DWARF original prototype: int getSize(Container<double> * this) */

int Container_double_getSize(Container_double *this)

{
 return this->size;
}



/* Function: ~unique_ptr @ 00102444 */

/* DWARF original prototype: void ~unique_ptr(unique_ptr<int,_std::default_delete<int>_> * this, int
 __in_chrg) */

void
std_unique_ptr_destructor
 (struct unique_ptr_int *this,int __in_chrg)

{
 void *ptr;
 
 /* Unresolved local var: int * * __ptr@[DW_OP_reg0(x0)] */
 ptr = this->_M_t._M_t._M_t;
 if (ptr != (void *)0x0) {
 operator_delete(ptr,4);
 return;
 }
 return;
}



/* Function: ~unique_ptr @ 00102458 */

/* DWARF original prototype: void ~unique_ptr(unique_ptr<int_[],_std::default_delete<int_[]>_> *
 this, int __in_chrg) */

void
std_unique_ptr_array_destructor
 (struct unique_ptr_int_array *this,int __in_chrg)

{
 void *ptr;
 
 /* Unresolved local var: int * * __ptr@[DW_OP_reg0(x0)] */
 ptr = this->_M_t._M_t._M_t;
 if (ptr != (void *)0x0) {
 operator_delete__(ptr);
 return;
 }
 return;
}



/* Function: ~DiamondDerived @ 00102468 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void
DiamondDerived_destructor1(DiamondDerived *this,int __in_chrg,void **__vtt_parm)

{
 undefined **ppuVar1;
 _func_int_varargs *p_Var2;
 void **this_00;
 
 if (__in_chrg == 0) {
 ppuVar1 = *__vtt_parm;
 }
 else {
 ppuVar1 = &PTR_func_00113ac8;
 }
 (this->super_MiddleA)._vptr_MiddleA = (_func_int_varargs **)ppuVar1;
 if (__in_chrg == 0) {
 p_Var2 = ((_func_int_varargs **)ppuVar1)[-3];
 ppuVar1 = __vtt_parm[5];
 }
 else {
 p_Var2 = (_func_int_varargs *)0x20;
 ppuVar1 = &PTR_func_00113b30;
 }
 *(undefined ***)((long)p_Var2 + (long)&(this->super_MiddleA)._vptr_MiddleA) = ppuVar1;
 if (__in_chrg == 0) {
 ppuVar1 = __vtt_parm[6];
 }
 else {
 ppuVar1 = &PTR_func_00113af8;
 }
 this_00 = &(this->super_MiddleA).field_0x10;
 *(void **)this_00 = ppuVar1;
 ppuVar1 = &PTR_PTR_00113a90;
 if (__in_chrg == 0) {
 ppuVar1 = __vtt_parm + 3;
 }
 MiddleB_destructor4((MiddleB *)this_00,ppuVar1);
 ppuVar1 = &PTR_PTR_00113a80;
 if (__in_chrg == 0) {
 ppuVar1 = __vtt_parm + 1;
 }
 MiddleA_destructor4(&this->super_MiddleA,ppuVar1);
 return;
}



/* Function: ~DiamondDerived @ 00102518 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this) */

void DiamondDerived_destructor2(DiamondDerived *this)

{
 DiamondDerived_destructor1(this,2,(void **)0x0);
 return;
}



/* Function: ~DiamondDerived @ 00102524 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_thunk_nv1(DiamondDerived *this)

{
 DiamondDerived_destructor3((DiamondDerived *)&this[-1].field_0x20);
 return;
}



/* Function: ~DiamondDerived @ 0010252c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_thunk_v1(DiamondDerived *this)

{
 DiamondDerived_destructor3((DiamondDerived *)
 ((long)&(this->super_MiddleA)._vptr_MiddleA +
 (long)(this->super_MiddleA)._vptr_MiddleA[-4]));
 return;
}



/* Function: ~DiamondDerived @ 0010253c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this) */

void DiamondDerived_destructor3(DiamondDerived *this)

{
 DiamondDerived_destructor2(this);
 operator_delete(this,0x30);
 return;
}



/* Function: ~DiamondDerived @ 00102564 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_thunk_nv2(DiamondDerived *this)

{
 DiamondDerived_destructor3((DiamondDerived *)&this[-1].field_0x20);
 return;
}



/* Function: ~DiamondDerived @ 0010256c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_thunk_v2(DiamondDerived *this)

{
 DiamondDerived_destructor3((DiamondDerived *)
 ((long)&(this->super_MiddleA)._vptr_MiddleA +
 (long)(this->super_MiddleA)._vptr_MiddleA[-4]));
 return;
}



/* Function: ~DiamondDerived @ 0010257c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, void * * __vtt_parm) */

void DiamondDerived_destructor4(DiamondDerived *this,void **__vtt_parm)

{
 DiamondDerived_destructor1(this,0,__vtt_parm);
 return;
}



/* C++ runtime support functions - stub implementations */
#include <stdlib.h>

void *operator_new(size_t size)
{
 return malloc(size);
}

void operator_delete(void *ptr, size_t size)
{
 (void)size;
 if (ptr != NULL) {
 free(ptr);
 }
}

void operator_delete__(void *ptr)
{
 if (ptr != NULL) {
 free(ptr);
 }
}

void *__cxa_allocate_exception(size_t size)
{
 return malloc(size);
}

void *__dynamic_cast(void *src_ptr, void *from_type, void *to_type, ptrdiff_t offset)
{
 (void)src_ptr;
 (void)from_type;
 (void)to_type;
 (void)offset;
 return NULL;
}

void __cxa_throw(void *thrown_exception, void *tinfo, void (*dest)(void*))
{
 (void)thrown_exception;
 (void)tinfo;
 (void)dest;
}

void __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle)
{
 (void)func;
 (void)arg;
 (void)dso_handle;
}

void __cxa_finalize(void *dso_handle)
{
 (void)dso_handle;
}

void __stack_chk_fail(void *, void *, int, long)
{
 abort();
}

void deregister_tm_clones(void)
{
}

/* Wrapper functions to match forward declarations */

void unique_ptr_int_destructor(struct unique_ptr_int *this, int __in_chrg)
{
 std_unique_ptr_destructor(this, __in_chrg);
}

void unique_ptr_array_destructor(struct unique_ptr_int_array *this, int __in_chrg)
{
 std_unique_ptr_array_destructor(this, __in_chrg);
}

/* DiamondDerived_destructor wrapper */
void DiamondDerived_destructor(DiamondDerived *this)
{
 DiamondDerived_destructor3(this);
}

/* Global PTR definitions */
void *PTR_virtual_func_00113868 = 0;
void *PTR_virtual_func_00113898 = 0;
void *PTR__RTTIDerivedA_00113b58 = 0;
void *PTR__RTTIDerivedB_00113b80 = 0;
void *PTR_func_00113ac8 = 0;
void *PTR_func_00113b30 = 0;
void *PTR_func_00113af8 = 0;
void *PTR_func_001138e0 = 0;
void *PTR_func_00113918 = 0;
void *PTR_func_00113958 = 0;
void *PTR_func_00113990 = 0;
void *PTR_PTR_00113a90 = 0;
void *PTR_PTR_00113a80 = 0;
void *PTR_ptr_00113a80 = 0;
void *PTR_ptr_00113a90 = 0;

/* Missing global variable definitions */
struct ios_base_Init std___ioinit = {0};
char completed_0 = 0;
char DAT_001025b2 = 0;
char DAT_001025d6 = 0;
char DAT_001025f4 = 0;
char DAT_00102610 = 0;
char DAT_0010262c = 0;
char DAT_00102648 = 0;
char DAT_00102665 = 0;
char DAT_00102681 = 0;
char DAT_0010269d = 0;
char DAT_001026b9 = 0;
char DAT_001026d5 = 0;
char DAT_001026f2 = 0;
char DAT_0010270f = 0;

/* DSO handle definition for C++ runtime */
void *__dso_handle = (void *)&__dso_handle;




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 89 */
