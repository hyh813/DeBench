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
/* size_t is already defined by <string.h> */
/* ssize_t is already defined by system headers */
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Missing type definitions */
typedef unsigned char undefined1;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned char undefined;
typedef void (*code)(void);
typedef void (*code_ptr)(void);
typedef unsigned long long ulonglong;

/* Forward declarations for new/delete operators */
void *operator_new__(size_t size);
void operator_delete__(void *ptr);
void *operator_new(size_t size);
void operator_delete(void *ptr);

/* Standard library stubs */
namespace std {
    class ios_base {
    public:
        class Init {
        public:
            Init() {}
            ~Init() {}
        };
        static Init __ioinit;
    };
    
    struct type_info {
        const char *name;
    };
    bool operator==(const type_info&, const type_info&) { return true; }
}

/* Forward declarations */
struct Base;
struct Derived;
struct MultiDerived;
struct DiamondDerived;
struct MiddleA;
struct MiddleB;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct RTTIBase;
struct LifecycleClass;
struct Init;
struct Container;

/* Template function forward declarations */
int template_max_int(int param_1, int param_2);
double template_max_double(double param_1, double param_2);
void template_swap_int(int *param_1, int *param_2);

/* Missing RTTI function declarations */
void *__dynamic_cast(void *ptr, const std::type_info *src, const std::type_info *dst, int offset);
void *__cxa_allocate_exception(size_t size);
void __cxa_throw(void *obj, const std::type_info *tinfo, void *dest);
int __aeabi_dcmpgt(double a, double b) {
    return a > b ? 1 : 0;
}

/* DiamondDerived function forward declaration */
int DiamondDerived_func(DiamondDerived *self);

/* Additional function forward declarations for vtable initialization */
int Base_virtual_func(Base *self, int param_1);
int Derived_virtual_func(Derived *self, int param_1);
int RTTIDerivedA_getType(void);
int RTTIDerivedB_getType(void);

/* Vtable pointer declarations */
extern void *PTR_virtual_func_0001187c;
extern void *PTR_virtual_func_00011894;
extern void *PTR_func_00011968;
extern void *PTR__RTTIDerivedA_0001197c;
extern void *PTR__RTTIDerivedB_00011990;

/* Data declarations */
extern char DAT_00011628[];
extern char DAT_00011644[];
extern char DAT_00011660[];
extern char DAT_0001167c[];
extern char DAT_000116b8[];
extern char DAT_000116f0[];
extern char DAT_0001170c[];
extern char DAT_0001172c[];
extern char DAT_0001174c[];
extern char DAT_000115cc[];

/* String data definitions */
char DAT_000115e4[] = "Testing C++ Member Functions\n";
char DAT_00011608[] = "Member function result: %d\n";
char DAT_0001169c[] = "Operator overload result: %d\n";
char DAT_000116d4[] = "Template class result: %d\n";
char DAT_00011628[] = "Constructor result: %d\n";
char DAT_00011644[] = "Virtual function result: %d\n";
char DAT_00011660[] = "Multiple inheritance result: %d\n";
char DAT_0001167c[] = "Diamond inheritance result: %d\n";
char DAT_000116b8[] = "Template function result: %d\n";
char DAT_000116f0[] = "Lambda result: %d\n";
char DAT_0001170c[] = "Exception result: %d\n";
char DAT_0001172c[] = "Smart pointer result: %d\n";
char DAT_0001174c[] = "RTTI result: %d\n";
char DAT_000115cc[] = "Base";

/* Vtable pointer definitions */
void *PTR_virtual_func_0001187c = (void *)Base_virtual_func;
void *PTR_virtual_func_00011894 = (void *)Derived_virtual_func;
void *PTR_func_00011968 = (void *)DiamondDerived_func;
void *PTR__RTTIDerivedA_0001197c = (void *)RTTIDerivedA_getType;
void *PTR__RTTIDerivedB_00011990 = (void *)RTTIDerivedB_getType;

/* RTTI typeinfo definitions */
std::type_info RTTIBase::typeinfo = {"RTTIBase"};
std::type_info RTTIDerivedA::typeinfo = {"RTTIDerivedA"};
std::type_info RTTIDerivedB::typeinfo = {"RTTIDerivedB"};

/* Missing function implementations */
int __printf_chk(int flag, const char *fmt, ...) {
    va_list args;
    va_start(args, fmt);
    int ret = vprintf(fmt, args);
    va_end(args);
    return ret;
}

void *__cxa_allocate_exception(size_t size) {
    return operator_new(size);
}

void *__dynamic_cast(void *ptr, const std::type_info *src, const std::type_info *dst, int offset) {
    /* Simplified implementation - always return the pointer */
    return ptr;
}

/* Function declarations */
void __stack_chk_fail(void) __attribute__((noreturn));

/* Empty class definitions for member function resolution */
struct Base { void *vtable; };
struct Derived : Base { int data; };
struct MultiDerived : Base, Derived { void *vtable; };
struct MiddleA : Base { void *vtable; };
struct MiddleB : Base { void *vtable; };
struct DiamondDerived : MiddleA, MiddleB { void *vtable; };
struct RTTIBase { void *vtable; static std::type_info typeinfo; };
struct RTTIDerivedA { void *vtable; static std::type_info typeinfo; };
struct RTTIDerivedB { void *vtable; static std::type_info typeinfo; };
struct LifecycleClass { static int instance_count; };
struct Init { };
struct Container { void *vtable; };

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/5-1/5-1_gcc_O1_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_000109bc @ 000109bc */

void FUN_000109bc(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00010c00 */

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



/* Function: test_cpp_constructor @ 00010c6c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 void *pvVar1;
 int iVar2;
 
 pvVar1 = operator_new__(0x14);
 *(undefined4 *)((int)pvVar1 + 4) = 10;
 *(undefined4 *)((int)pvVar1 + 8) = 0x14;
 *(undefined4 *)((int)pvVar1 + 0xc) = 0x1e;
 *(undefined4 *)((int)pvVar1 + 0x10) = 0x28;
 iVar2 = LifecycleClass::instance_count + 0x15;
 LifecycleClass::instance_count = LifecycleClass::instance_count + 1;
 operator_delete__(pvVar1);
 LifecycleClass::instance_count = LifecycleClass::instance_count + -1;
 return iVar2 + LifecycleClass::instance_count * 1000;
}



/* Function: call_virtual_func @ 00010cd0 */

/* call_virtual_func(Base*, int) */

int call_virtual_func(Base *param_1,int param_2)

{
 (*(code *)**(undefined4 **)param_1)();
 return 0;
}



/* Function: test_cpp_virtual_func @ 00010ce4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

void test_cpp_virtual_func(void)

{
 int iVar1;
 undefined8 uVar2;
 void **local_18;
 void **local_14;
 undefined4 local_10;
 int local_c;
 
 local_c = 0;
 local_18 = &PTR_virtual_func_0001187c;
 local_14 = &PTR_virtual_func_00011894;
 local_10 = 3;
 iVar1 = call_virtual_func((Base *)local_18,5);
 uVar2 = call_virtual_func((Base *)local_14,5);
 if (local_c == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: test_cpp_multiple_inheritance @ 00010d68 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined4 test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00010d70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

void test_cpp_diamond_inheritance(void)

{
 int iVar1;
 undefined8 uVar2;
 void **local_14;
 undefined4 local_10;
 int local_c;
 
 local_c = 0;
 local_14 = &PTR_func_00011968;
 local_10 = 0x32;
	iVar1 = DiamondDerived_func((DiamondDerived *)local_14);
 local_10 = 100;
 uVar2 = DiamondDerived_func((DiamondDerived *)local_14);
 if (local_c == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: test_cpp_operator_overload @ 00010df4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined4 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00010dfc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

int test_cpp_template_func(void)

{
 int iVar1;
 undefined4 extraout_r0;
 undefined4 extraout_r1;
 double extraout_d0;
 double extraout_d1;
 undefined8 uVar2;
 int local_1c;
 int local_18;
 int local_14;
 
 local_14 = 0;
 iVar1 = template_max_int(3,7);
	extraout_d0 = template_max_double(*(double *)&extraout_d0,*(double *)&extraout_d1);
 local_1c = 10;
 local_18 = 0x14;
	template_swap_int(&local_1c,&local_18);
 if (local_14 == 0) {
 return 0;
 }
 return 0;
}



/* Function: test_cpp_template_class @ 00010eac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined4 test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 00010eb4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined4 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_exception @ 00010ebc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 {
   static std::type_info dummy_typeinfo = {"exception"};
   __cxa_throw(puVar1,&dummy_typeinfo,0);
 }
}



/* Function: test_cpp_smart_ptr @ 00010f78 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined4 test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00010f84 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 int *piVar1;
 int *piVar2;
 int iVar3;
 void *iVar4;
 char *__s;
 size_t sVar5;
 
 piVar1 = (int *)operator_new(4);
 *piVar1 = (int)&PTR__RTTIDerivedA_0001197c;
 piVar2 = (int *)operator_new(4);
 *piVar2 = (int)&PTR__RTTIDerivedB_00011990;
 iVar3 = ((*(std::type_info **)(*piVar1 + -4) != 0) != 0);
 if (iVar3 == 0) {
 iVar3 = 0;
 }
 else {
 iVar3 = 10;
 }
 iVar4 = (void*)((*(std::type_info **)((void*)(*piVar2) - 4) != 0));
 if (iVar4 != 0) {
 iVar3 = iVar3 + 0x14;
 }
 iVar4 = __dynamic_cast(piVar1,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 if (iVar4 != 0) {
 iVar3 = iVar3 + 100;
 }
 iVar4 = (int *)__dynamic_cast(piVar2,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 if (iVar4 != 0) {
 iVar3 = iVar3 + 200;
 }
	iVar4 = piVar1;
 __s = *(char **)((char *)iVar4 + 4);
 if (*__s == '*') {
 __s = __s + 1;
 }
 sVar5 = strlen(__s);
 ((void (*)(void *))(*(void **)((char *)iVar4 + 8)))(piVar1);
 ((void (*)(void *))(*(void **)((char *)*(int *)piVar2 + 8)))(piVar2);
 return iVar3 + sVar5;
}



/* Function: test_cpp_oo_features @ 00011074 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 undefined4 uVar1;
 
 puts(DAT_000115e4);
 uVar1 = test_cpp_member_func();
 __printf_chk(1,DAT_00011608,uVar1);
 uVar1 = test_cpp_constructor();
 __printf_chk(1,DAT_00011628,uVar1);
 test_cpp_virtual_func();
 __printf_chk(1,DAT_00011644,0);
 uVar1 = test_cpp_multiple_inheritance();
 __printf_chk(1,DAT_00011660,uVar1);
 test_cpp_diamond_inheritance();
 __printf_chk(1,DAT_0001167c,0);
 __printf_chk(1,DAT_0001169c,0x16);
 uVar1 = test_cpp_template_func();
 __printf_chk(1,DAT_000116b8,uVar1);
 __printf_chk(1,DAT_000116d4,0x10);
 __printf_chk(1,DAT_000116f0,0x55);
 test_cpp_exception();
 __printf_chk(1,DAT_0001170c,0);
 uVar1 = test_cpp_smart_ptr();
 __printf_chk(1,DAT_0001172c,uVar1);
 uVar1 = test_cpp_rtti();
 __printf_chk(1,DAT_0001174c,uVar1);
 return;
}



/* Function: main @ 0001119c */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I_test_cpp_member_func @ 000111ac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

void _GLOBAL__sub_I_test_cpp_member_func(void)

{
	/* Simple initialization without placement new */
	/* The static member already has an implicit constructor call */
	return;
}



/* Function: virtual_func @ 000111dc */

/* Base::virtual_func(int) */

int Base_virtual_func(Base *self,int param_1)

{
 return param_1 + 1;
}



/* Function: getName @ 000111e4 */

/* Base::getName() const */

char * Base_getName(void)

{
 return DAT_000115cc;
}



/* Function: ~Base @ 000111f0 */

/* Base::~Base() */

void Base_destructor_1(Base *self)

{
 return;
}



/* Function: virtual_func @ 000111f4 */

/* Derived::virtual_func(int) */

int Derived_virtual_func(Derived *self,int param_1)

{
 return param_1 * *(int *)(self + 4);
}



/* Function: getName @ 00011200 */

/* Derived::getName() const */

char * Derived_getName(void)

{
 return "Derived";
}



/* Function: funcA @ 0001120c */

/* MultiDerived::funcA() */

undefined4 MultiDerived_funcA(void)

{
 return 0x1e;
}



/* Function: funcB @ 00011214 */

/* MultiDerived::funcB() */

undefined4 MultiDerived_funcB(void)

{
 return 0x28;
}



/* Function: funcB @ 0001121c */

/* non-virtual thunk to MultiDerived::funcB() */

undefined4 MultiDerived_funcB_thunk(MultiDerived *self)

{
 return 0x28;
}



/* Function: func @ 00011224 */

/* MiddleA::func() */

int MiddleA_func(MiddleA *self)

{
 int offset;
 offset = *(int *)((char *)*(int *)self - 0xc);
 return *(int *)((char *)self + offset + 4) + 0x96;
}



/* Function: func @ 0001123c */

/* virtual thunk to MiddleA::func() */

int MiddleA_func__virtual_thunk(void *param_1)

{
 MiddleA *self = (MiddleA *)param_1;
 int offset1, offset2;
 offset1 = *(int *)((char *)*(int *)self - 0xc);
 offset2 = *(int *)((char *)*(int *)((char *)self + offset1) - 0xc);
 return *(int *)((char *)self + offset2 + offset1 + 4) + 0x96;
}



/* Function: func @ 00011260 */

/* MiddleB::func() */

int MiddleB_func(MiddleB *self)

{
 int offset;
 offset = *(int *)((char *)*(int *)self - 0xc);
 return *(int *)((char *)self + offset + 4) + 200;
}



/* Function: func @ 00011278 */

/* virtual thunk to MiddleB::func() */

int MiddleB_func__virtual_thunk(void *param_1)

{
 MiddleB *self = (MiddleB *)param_1;
 int offset = *(int *)((char *)*(int *)self - 0xc);
 return *(int *)((char *)self + offset + 4) + 200;
}



/* Function: func @ 0001129c */

/* DiamondDerived::func() */

int DiamondDerived_func(DiamondDerived *self)

{
 int offset;
 offset = *(int *)((char *)*(int *)self - 0xc);
 return *(int *)((char *)self + offset + 4) + 0xfa;
}



/* Function: func @ 000112b4 */

/* virtual thunk to DiamondDerived::func() */

int DiamondDerived_func__virtual_thunk(DiamondDerived *self)

{
 return *(int *)(self + *(int *)(*(int *)(self + *(int *)(*(int *)self + -0xc)) + -0xc) +
 *(int *)(*(int *)self + -0xc) + 4) + 0xfa;
}



/* Function: func @ 000112d8 */

/* non-virtual thunk to DiamondDerived::func() */

int DiamondDerived_func__nonvirtual_thunk(DiamondDerived *self)

{
 return *(int *)(self + *(int *)(*(int *)(self + -8) + -0xc) + -4) + 0xfa;
}



/* Function: getType @ 000112f0 */

/* RTTIDerivedA::getType() const */

undefined4 RTTIDerivedA_getType(void)

{
 return 1;
}



/* Function: getType @ 000112f8 */

/* RTTIDerivedB::getType() const */

undefined4 RTTIDerivedB_getType(void)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 00011300 */

/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB_destructor_1(RTTIDerivedB *self)

{
 return;
}



/* Function: ~RTTIDerivedA @ 00011304 */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA_destructor_1(RTTIDerivedA *self)

{
 return;
}



/* Function: ~DiamondDerived @ 00011308 */

/* DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_1(DiamondDerived *self)

{
 return;
}



/* Function: ~DiamondDerived @ 0001130c */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor__virtual_thunk(DiamondDerived *self)

{
 DiamondDerived *adjusted_self = self + *(int *)(*(int *)self + -0x10);
 operator_delete(adjusted_self);
}



/* Function: ~DiamondDerived @ 0001131c */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

DiamondDerived * DiamondDerived_destructor__nonvirtual_thunk(DiamondDerived *self)

{
 return self + -8;
}



/* Function: ~MultiDerived @ 00011324 */

/* MultiDerived::~MultiDerived() */

void MultiDerived_destructor_1(MultiDerived *self)

{
 return;
}



/* Function: ~MultiDerived @ 00011328 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

MultiDerived * MultiDerived_destructor__nonvirtual_thunk(MultiDerived *self)

{
 return self + -8;
}



/* Function: ~Derived @ 00011330 */

/* Derived::~Derived() */

void Derived_destructor_1(Derived *self)

{
 return;
}



/* Function: ~Base @ 00011334 */

/* Base::~Base() */

Base * Base_destructor_delete(Base *self)

{
 operator_delete(self);
 return self;
}



/* Function: ~Derived @ 0001134c */

/* Derived::~Derived() */

Derived * Derived_destructor_delete(Derived *self)

{
 operator_delete(self);
 return self;
}



/* Function: ~MultiDerived @ 00011364 */

/* MultiDerived::~MultiDerived() */

MultiDerived * MultiDerived_destructor_2(MultiDerived *self)

{
 operator_delete(self);
 return self;
}



/* Function: ~MultiDerived @ 0001137c */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

MultiDerived * MultiDerived_destructor_2__nonvirtual_thunk(MultiDerived *self)

{
 operator_delete(self + -8);
 return self + -8;
}



/* Function: ~RTTIDerivedA @ 00011398 */

/* RTTIDerivedA::~RTTIDerivedA() */

RTTIDerivedA * RTTIDerivedA_destructor_delete(RTTIDerivedA *self)

{
 operator_delete(self);
 return self;
}



/* Function: ~RTTIDerivedB @ 000113b0 */

/* RTTIDerivedB::~RTTIDerivedB() */

RTTIDerivedB * RTTIDerivedB_destructor_delete(RTTIDerivedB *self)

{
 operator_delete(self);
 return self;
}



/* Function: ~DiamondDerived @ 000113c8 */

/* DiamondDerived::~DiamondDerived() */

DiamondDerived * DiamondDerived_destructor_2(DiamondDerived *self)

{
 operator_delete(self);
 return self;
}



/* Function: ~DiamondDerived @ 000113e0 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_2__virtual_thunk(DiamondDerived *self)

{
 int iVar1;
 
 iVar1 = *(int *)(*(int *)self + -0x10);
 operator_delete(self + iVar1);
}



/* Function: ~DiamondDerived @ 00011404 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

DiamondDerived * DiamondDerived_destructor_2__nonvirtual_thunk(DiamondDerived *self)

{
 operator_delete(self + -8);
 return self + -8;
}



/* Function: template_max<int> @ 00011420 */

/* int template_max<int>(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_max<double> @ 0001142c */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00011440 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* double template_max<double>(double, double) */

double template_max_double(double param_1,double param_2)

{
 if (!__aeabi_dcmpgt(param_1, param_2)) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap<int> @ 0001145c */

/* void template_swap<int>(int&, int&) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 00011470 */

/* Container<int>::Container() */

void Container_int_Constructor(Container *self)

{
 *(undefined4 *)((int)self + 0x28) = 0;
 return;
}



/* Function: push @ 0001147c */

/* Container<int>::push(int) */

void Container_int__push(Container *self,int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)((int)self + 0x28);
 if (iVar1 < 10) {
 *(int *)((int)self + 0x28) = iVar1 + 1;
 *(int *)((int)self + iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get @ 00011494 */

/* Container<int>::get(int) const */

undefined4 Container_int__get(Container *self,int param_1)

{
 if (param_1 < 0) {
 return 0;
 }
 if (*(int *)((int)self + 0x28) <= param_1) {
 return 0;
 }
 return *(undefined4 *)((int)self + param_1 * 4);
}



/* Function: getSize @ 000114c0 */

/* Container<int>::getSize() const */

undefined4 Container_int__getSize(Container *self)

{
 return *(undefined4 *)((int)self + 0x28);
}



/* Function: Container @ 000114c8 */

/* Container<double>::Container() */

void Container_double_Constructor(Container *self)

{
 *(undefined4 *)((int)self + 0x50) = 0;
 return;
}



/* Function: push @ 000114d4 */

/* Container<double>::push(double) */

undefined4 Container_double__push(Container *self, double param_1)

{
 int iVar2;
 undefined4 *puVar1;
 
 iVar2 = *(int *)((int)self + 0x50);
 if (iVar2 < 10) {
 *(int *)((int)self + 0x50) = iVar2 + 1;
 puVar1 = (undefined4 *)((int)self + iVar2 * 8);
 *(double *)puVar1 = param_1;
 }
 return 0;
}



/* Function: get @ 000114f0 */

/* Container<double>::get(int) const */

undefined8 Container_double_get(Container *self, int param_1)

{
 if (param_1 < 0) {
 return 0;
 }
 if (*(int *)((int)self + 0x50) <= param_1) {
 return 0;
 }
 return *(undefined8 *)((int)self + param_1 * 8);
}



/* Function: getSize @ 00011528 */

/* Container<double>::getSize() const */

int Container_double_getSize(Container *self)

{
 return *(undefined4 *)((int)self + 0x50);
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 69 */
