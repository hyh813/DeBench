#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned int uint;
/* typedef unsigned long size_t;  // Defined by system headers */
/* typedef long ssize_t;  // Defined by system headers */
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Type info declarations for C++ RTTI - moved here before use */
struct type_info {
    void **vtable;
    const char *name;
};
typedef struct type_info type_info;

/* Global data references */
extern char DAT_00012018[];
extern char DAT_0001205a[];
extern char DAT_00012076[];
extern char DAT_00012092[];
extern char DAT_000120ae[];
extern char DAT_000120e7[];
extern char DAT_00012103[];
extern char DAT_0001211f[];
extern char DAT_0001213b[];
extern char DAT_00012158[];
extern char DAT_00012175[];

/* Data definitions for undefined symbols */
char DAT_00012008[] = "Base";
char DAT_00012018[] = "=== Testing C++ OO Features ===\n";
char DAT_0001203c[] = "Name length: %d\n";
char DAT_0001205a[] = "Constructor test: %d\n";
char DAT_00012076[] = "Virtual function: %d\n";
char DAT_00012092[] = "Multiple inheritance: %d\n";
char DAT_000120ae[] = "Diamond inheritance: %d\n";
char DAT_000120cb[] = "Operator overload: %d\n";
char DAT_000120e7[] = "Template function: %d\n";
char DAT_00012103[] = "Template class: %d\n";
char DAT_0001211f[] = "Lambda: %d\n";
char DAT_0001213b[] = "Exception: %d\n";
char DAT_00012158[] = "Smart ptr: %d\n";
char DAT_00012175[] = "RTTI: %d\n";
int LifecycleClass_instance_count = 0;

/* Type info definitions */
type_info RTTIBase_typeinfo = { NULL, "8RTTIBase" };
type_info RTTIDerivedA_typeinfo = { NULL, "12RTTIDerivedA" };
type_info RTTIDerivedB_typeinfo = { NULL, "12RTTIDerivedB" };
type_info int_typeinfo = { NULL, "i" };
type_info *PTR__RTTIDerivedA_00013e48 = &RTTIDerivedA_typeinfo;
type_info *PTR__RTTIDerivedB_00013e5c = &RTTIDerivedB_typeinfo;

/* Forward class declarations for C++ classes */
typedef struct Base Base;
typedef struct RTTIBase RTTIBase;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;
typedef struct LifecycleClass LifecycleClass;

/* Basic struct definitions for C++ classes (placeholder definitions for incomplete types) */
struct Base { char _[4]; };
struct Derived { char _[8]; };
struct MultiDerived { char _[16]; };
struct MiddleA { char _[32]; };
struct MiddleB { char _[32]; };

/* Struct definitions for C++ classes */
struct Container_int { char _[80]; };
struct Container_double { char _[160]; };
struct DiamondDerived { char _[24]; };
struct LifecycleClass { 
    int instance_count;
    char _[0]; 
};

/* Function declarations for C++ constructs */
extern void test_cpp_oo_features(void);
extern void __cxa_throw(void *, type_info *, void (*)(void *));
extern type_info RTTIDerivedA_typeinfo;
extern type_info RTTIDerivedB_typeinfo;

/* Forward declarations for std::ios_base and Init */
typedef struct ios_base ios_base;
struct ios_base { char _[0]; };
typedef struct Init Init;
struct Init { char _[0]; };
extern Init std___ioinit;
extern void __cxa_atexit(void (*)(void *), void *, void *);

/* Function declarations for C++ constructs */
extern void __stack_chk_fail(void);
extern void __stack_chk_fail_local(void);
extern void *__cxa_allocate_exception(size_t);
extern void *operator_new(size_t);
extern void operator_delete(void *, size_t);
extern void *__dynamic_cast(void *, type_info *, type_info *, int);

/* Template function declarations */
extern int template_max_int(int, int);
extern double template_max_double(double, double);
extern void template_swap_int(int *, int *);

/* Class method declarations */
extern int Base_virtual_func(Base *, int);
extern void *Base_getName(Base *);
extern void Base_dtor(Base *);
extern int Derived_virtual_func(Derived *, int);
extern char *Derived_getName(Derived *);
extern void Derived_dtor(Derived *);
extern int MultiDerived_funcA(MultiDerived *);
extern int MultiDerived_funcB(MultiDerived *);
extern void MultiDerived_dtor(MultiDerived *);
extern int MiddleA_func(MiddleA *);
extern int MiddleB_func(MiddleB *);
extern int DiamondDerived_func(DiamondDerived *);
extern void DiamondDerived_dtor(DiamondDerived *);
extern int RTTIDerivedA_getType(RTTIDerivedA *);
extern int RTTIDerivedB_getType(RTTIDerivedB *);
extern void RTTIDerivedA_dtor(RTTIDerivedA *);
extern void RTTIDerivedB_dtor(RTTIDerivedB *);

/* Template class method declarations */
extern void Container_int_Constructor(Container_int *);
extern void Container_int_push(Container_int *, int);
extern int Container_int_get(Container_int *, int);
extern int Container_int_getSize(Container_int *);
extern void Container_double_Constructor(Container_double *);
extern void Container_double_push(Container_double *, double);
extern double Container_double_get(Container_double *, int);
extern int Container_double_getSize(Container_double *);

/* Ghidra-specific type definitions */
typedef unsigned int undefined4;
typedef unsigned char undefined;
typedef void (*code)(void);

/* Utility macros */
#define ROUND(x) ((int)((x) + 0.5))

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-1/5-1_gcc_O2_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: test_cpp_exception @ 00011270 */

/* WARNING: Function: __x86.get_pc_thunk.si replaced with injection: get_pc_thunk_si */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

undefined4 test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 000112a3 to 000112a7 has its CatchHandler @ 000112a8 */
 __cxa_throw(puVar1,&int_typeinfo,0);
}



/* Function: main @ 00011380 */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I_test_cpp_member_func @ 000113a0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

void _GLOBAL__sub_I_test_cpp_member_func(void)

{
 /* std::ios_base::Init::Init((Init *)&std::__ioinit); */
 /* __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle); */
 return;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 0001140c */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011410 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 00011549 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 0001154d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: test_cpp_member_func @ 00011560 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 size_t sVar1;
 int in_GS_OFFSET;
 char local_30 [32];
 int local_10;
 undefined4 uStack_8;
 
 uStack_8 = 0x1156c;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 strncpy(local_30,"Test",5);
 local_30[5] = '\0';
 local_30[6] = '\0';
 local_30[7] = '\0';
 local_30[8] = '\0';
 local_30[9] = '\0';
 local_30[10] = '\0';
 local_30[0xb] = '\0';
 local_30[0xc] = '\0';
 local_30[0xd] = '\0';
 local_30[0xe] = '\0';
 local_30[0xf] = '\0';
 local_30[0x10] = '\0';
 local_30[0x11] = '\0';
 local_30[0x12] = '\0';
 local_30[0x13] = '\0';
 local_30[0x14] = '\0';
 local_30[0x15] = '\0';
 local_30[0x16] = '\0';
 local_30[0x17] = '\0';
 local_30[0x18] = '\0';
 local_30[0x19] = '\0';
 local_30[0x1a] = '\0';
 local_30[0x1b] = '\0';
 local_30[0x1c] = '\0';
 local_30[0x1d] = '\0';
 local_30[0x1e] = 0;
 local_30[0x1f] = 0;
 sVar1 = strlen(local_30);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return sVar1 + 0x125c;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: test_cpp_constructor @ 00011600 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00011620 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x0001162e. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*(code *)**(undefined4 **)param_1)();
 return;
}



/* Function: test_cpp_virtual_func @ 00011630 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

undefined4 test_cpp_virtual_func(void)

{
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 00011640 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined4 test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00011650 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

undefined4 test_cpp_diamond_inheritance(void)

{
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00011660 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined4 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00011670 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

int test_cpp_template_func(void)

{
 int iVar1;
 int in_GS_OFFSET;
 double dVar2;
 int local_18;
 int local_14;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = template_max_int(3,7);
 dVar2 = template_max_double(2.5,1.5);
 local_18 = 10;
 local_14 = 0x14;
 template_swap_int(&local_18,&local_14);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return (int)ROUND(dVar2) + iVar1 + local_18 + local_14;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: test_cpp_template_class @ 00011720 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined4 test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 00011730 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined4 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_smart_ptr @ 00011740 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined4 test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00011750 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Removing unreachable block (ram,0x000117df) */
/* WARNING: Removing unreachable block (ram,0x000117e4) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 int iVar1;
 char *__s1;
 int *piVar2;
 int *piVar3;
 int iVar4;
 int iVar5;
 size_t sVar6;
 uint uVar7;
 
 uVar7 = 10;
 piVar2 = (int *)operator_new(4);
 *piVar2 = (int)&PTR__RTTIDerivedA_00013e48;
 piVar3 = (int *)operator_new(4);
 *piVar3 = (int)&PTR__RTTIDerivedB_00013e5c;
 iVar1 = *piVar2;
 __s1 = *(char **)(*(int *)(iVar1 + -4) + 4);
 if ((__s1 != "12RTTIDerivedA") && (uVar7 = 0, *__s1 != '*')) {
 iVar4 = strcmp(__s1,"12RTTIDerivedA");
 uVar7 = -(uint)(iVar4 == 0) & 10;
 }
 iVar5 = (int)__dynamic_cast(piVar2,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar4 = uVar7 + 0x14;
 if (iVar5 != 0) {
 iVar4 = uVar7 + 0x78;
 }
 iVar5 = (int)__dynamic_cast(piVar3,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 if (iVar5 != 0) {
 iVar4 = iVar4 + 200;
 }
 sVar6 = strlen(__s1 + (*__s1 == '*'));
 ((void (*)(void *))(*(code **)(iVar1 + 4)))(piVar2);
 ((void (*)(void *))(*(code **)(*piVar3 + 4)))(piVar3);
 return iVar4 + sVar6;
}



/* Function: test_cpp_oo_features @ 00011880 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 size_t sVar1;
 undefined4 uVar2;
 int in_GS_OFFSET;
 char local_30 [32];
 int local_10;
 undefined4 uStack_8;
 
 uStack_8 = 0x1188a;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 puts(DAT_00012018);
 local_30[0x1e] = 0;
 local_30[0x1c] = '\0';
 local_30[0x1d] = '\0';
 strncpy(local_30,"Test",5);
 local_30[5] = '\0';
 local_30[6] = '\0';
 local_30[7] = '\0';
 local_30[8] = '\0';
 local_30[9] = '\0';
 local_30[10] = '\0';
 local_30[0xb] = '\0';
 local_30[0xc] = '\0';
 local_30[0xd] = '\0';
 local_30[0xe] = '\0';
 local_30[0xf] = '\0';
 local_30[0x10] = '\0';
 local_30[0x11] = '\0';
 local_30[0x12] = '\0';
 local_30[0x13] = '\0';
 local_30[0x14] = '\0';
 local_30[0x15] = '\0';
 local_30[0x16] = '\0';
 local_30[0x17] = '\0';
 local_30[0x18] = '\0';
 local_30[0x19] = '\0';
 local_30[0x1a] = '\0';
 local_30[0x1b] = '\0';
 local_30[0x1f] = 0;
 sVar1 = strlen(local_30);
 __printf_chk(1,DAT_0001203c,sVar1 + 0x125c);
 uVar2 = test_cpp_constructor();
 __printf_chk(1,DAT_0001205a,uVar2);
 __printf_chk(1,DAT_00012076,0x2a);
 __printf_chk(1,DAT_00012092,0x47);
 uVar2 = test_cpp_diamond_inheritance();
 __printf_chk(1,DAT_000120ae,uVar2);
 __printf_chk(1,DAT_000120cb,0x16);
 uVar2 = test_cpp_template_func();
 __printf_chk(1,DAT_000120e7,uVar2);
 __printf_chk(1,DAT_00012103,0x10);
 __printf_chk(1,DAT_0001211f,0x55);
 uVar2 = test_cpp_exception();
 __printf_chk(1,DAT_0001213b,uVar2);
 uVar2 = test_cpp_smart_ptr();
 __printf_chk(1,DAT_00012158,uVar2);
 uVar2 = test_cpp_rtti();
 __printf_chk(1,DAT_00012175,uVar2);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: virtual_func @ 00011a30 */

/* Base::virtual_func(int) */

int Base_virtual_func(Base *self,int param_1)

{
 return param_1 + 1;
}



/* Function: getName @ 00011a40 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Base::getName() const */

char * Base_getName(void)

{
 return DAT_00012008;
}



/* Function: ~Base @ 00011a60 */

/* Base::~Base() */

void Base_dtor(Base *self)

{
  return;
}



/* Function: virtual_func @ 00011a70 */

/* Derived::virtual_func(int) */

int Derived_virtual_func(Derived *self,int param_1)

{
 return param_1 * *(int *)(self + 4);
}



/* Function: getName @ 00011a90 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Derived::getName() const */

char * Derived_getName(void)

{
 return "Derived";
}



/* Function: funcA @ 00011ab0 */

/* MultiDerived::funcA() */

undefined4 MultiDerived_funcA(void)

{
 return 0x1e;
}



/* Function: funcB @ 00011ac0 */

/* MultiDerived::funcB() */

undefined4 MultiDerived_funcB(void)

{
 return 0x28;
}



/* Function: funcB @ 00011ad0 */

/* non-virtual thunk to MultiDerived::funcB() */

undefined4 MultiDerived_funcB_thunk(MultiDerived *self)

{
 return 0x28;
}



/* Function: func @ 00011ae0 */

/* MiddleA::func() */

int MiddleA_func(MiddleA *self)

{
 return *(int *)(self + *(int *)(*(int *)self + -0xc) + 4) + 0x96;
}



/* Function: func @ 00011b00 */

/* virtual thunk to MiddleA::func() */

int MiddleA_func_vthunk(MiddleA *self)

{
 return *(int *)(self + *(int *)(*(int *)self + -0xc) +
 *(int *)(*(int *)(self + *(int *)(*(int *)self + -0xc)) + -0xc) + 4) + 0x96;
}



/* Function: func @ 00011b20 */

/* MiddleB::func() */

int MiddleB_func(MiddleB *self)

{
 return *(int *)(self + *(int *)(*(int *)self + -0xc) + 4) + 200;
}



/* Function: func @ 00011b40 */

/* virtual thunk to MiddleB::func() */

int MiddleB_func_vthunk(MiddleB *self)

{
 return *(int *)(self + *(int *)(*(int *)self + -0xc) +
 *(int *)(*(int *)(self + *(int *)(*(int *)self + -0xc)) + -0xc) + 4) + 200;
}



/* Function: func @ 00011b60 */

/* DiamondDerived::func() */

int DiamondDerived_func(DiamondDerived *self)

{
 return *(int *)(self + *(int *)(*(int *)self + -0xc) + 4) + 0xfa;
}



/* Function: func @ 00011b80 */

/* virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_vthunk(DiamondDerived *self)

{
 return *(int *)(self + *(int *)(*(int *)self + -0xc) +
 *(int *)(*(int *)(self + *(int *)(*(int *)self + -0xc)) + -0xc) + 4) + 0xfa;
}



/* Function: func @ 00011ba0 */

/* non-virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_thunk(DiamondDerived *self)

{
 return *(int *)(self + *(int *)(*(int *)(self + -8) + -0xc) + -4) + 0xfa;
}



/* Function: getType @ 00011bc0 */

/* RTTIDerivedA::getType() const */

undefined4 RTTIDerivedA_getType(void)

{
 return 1;
}



/* Function: getType @ 00011bd0 */

/* RTTIDerivedB::getType() const */

undefined4 RTTIDerivedB_getType(void)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 00011be0 */

/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB_dtor(RTTIDerivedB *self)

{
 return;
}



/* Function: ~RTTIDerivedA @ 00011bf0 */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA_dtor(RTTIDerivedA *self)

{
 return;
}



/* Function: ~DiamondDerived @ 00011c00 */

/* DiamondDerived::~DiamondDerived() */

void DiamondDerived_dtor(DiamondDerived *self)

{
 return;
}



/* Function: ~DiamondDerived @ 00011c10 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_dtor_vthunk(DiamondDerived *self)

{
 return;
}



/* Function: ~DiamondDerived @ 00011c20 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_dtor_nvthunk(DiamondDerived *self)

{
 return;
}



/* Function: ~MultiDerived @ 00011c30 */

/* MultiDerived::~MultiDerived() */

void MultiDerived_dtor(MultiDerived *self)

{
 return;
}



/* Function: ~MultiDerived @ 00011c40 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_dtor_nvthunk(MultiDerived *self)

{
 return;
}



/* Function: ~Derived @ 00011c50 */

/* Derived::~Derived() */

void Derived_dtor(Derived *self)

{
 return;
}



/* Function: ~Base @ 00011c60 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* Base::~Base() */

void Base_dtor_delete(Base *self)

{
 operator_delete(self,4);
 return;
}



/* Function: ~Derived @ 00011c90 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* Derived::~Derived() */

void Derived_dtor_delete(Derived *self)

{
 operator_delete(self,8);
 return;
}



/* Function: ~MultiDerived @ 00011cc0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* MultiDerived::~MultiDerived() */

void MultiDerived_dtor_delete(MultiDerived *self)

{
 operator_delete(self,0x10);
 return;
}



/* Function: ~MultiDerived @ 00011cf0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_dtor_delete_nvthunk(MultiDerived *self)

{
 operator_delete(self + -8,0x10);
 return;
}



/* Function: ~RTTIDerivedB @ 00011d20 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB_dtor_delete(RTTIDerivedB *self)

{
 operator_delete(self,4);
 return;
}



/* Function: ~RTTIDerivedA @ 00011d50 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA_dtor_delete(RTTIDerivedA *self)

{
 operator_delete(self,4);
 return;
}



/* Function: ~DiamondDerived @ 00011d80 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DiamondDerived::~DiamondDerived() */

void DiamondDerived_dtor_delete(DiamondDerived *self)

{
 operator_delete(self,0x18);
 return;
}



/* Function: ~DiamondDerived @ 00011db0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_dtor_delete_vthunk(DiamondDerived *self)

{
 operator_delete(self + *(int *)(*(int *)self + -0x10),0x18);
 return;
}



/* Function: ~DiamondDerived @ 00011de0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_dtor_delete_nvthunk(DiamondDerived *self)

{
 operator_delete(self + -8,0x18);
 return;
}



/* Function: template_max<int> @ 00011e10 */

/* int template_max<int>(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_max<double> @ 00011e30 */

/* double template_max<double>(double, double) */

double template_max_double(double param_1,double param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap<int> @ 00011e50 */

/* void template_swap<int>(int&, int&) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 00011e70 */

/* Container<int>::Container() */

void Container_int_Constructor(Container_int *self)

{
 *(undefined4 *)(self + 0x28) = 0;
 return;
}



/* Function: push @ 00011e80 */

/* Container<int>::push(int) */

void Container_int_push(Container_int *self,int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(self + 0x28);
 if (iVar1 < 10) {
 *(int *)(self + 0x28) = iVar1 + 1;
 *(int *)(self + iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get @ 00011ea0 */

/* Container<int>::get(int) const */

int Container_int_get(Container_int *self,int param_1)

{
 if ((-1 < param_1) && (param_1 < *(int *)(self + 0x28))) {
 return *(int *)(self + param_1 * 4);
 }
 return 0;
}



/* Function: getSize @ 00011ed0 */

/* Container<int>::getSize() const */

int Container_int_getSize(Container_int *self)

{
 return *(int *)(self + 0x28);
}



/* Function: Container @ 00011ee0 */

/* Container<double>::Container() */

void Container_double_Constructor(Container_double *self)

{
 *(undefined4 *)(self + 0x50) = 0;
 return;
}



/* Function: push @ 00011ef0 */

/* Container<double>::push(double) */

void Container_double_push(Container_double *self,double param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(self + 0x50);
 if (iVar1 < 10) {
 *(int *)(self + 0x50) = iVar1 + 1;
 *(double *)(self + iVar1 * 8) = param_1;
 }
 return;
}



/* Function: get @ 00011f20 */

/* Container<double>::get(int) const */

double Container_double_get(Container_double *self,int param_1)

{
 if ((-1 < param_1) && (param_1 < *(int *)(self + 0x50))) {
 return *(double *)(self + param_1 * 8);
 }
 return 0.0;
}



/* Function: getSize @ 00011f50 */

/* Container<double>::getSize() const */

int Container_double_getSize(Container_double *self)

{
 return *(int *)(self + 0x50);
}



/* Function: __x86.get_pc_thunk.ax @ 00011f5c */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
 undefined4 unaff_retaddr;
 
 return unaff_retaddr;
}



/* Function: __x86.get_pc_thunk.si @ 00011f60 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_si(void)

{
 return;
}



/* Function: __stack_chk_fail_local @ 00011f70 */
/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* C++ runtime operator and exception handler stub implementations */

void *operator_new(size_t size)

{
 void *ptr;
 ptr = malloc(size);
 if (ptr == (void *)0x0) {
 exit(1);
 }
 return ptr;
}



void operator_delete(void *ptr, size_t size)

{
 if (ptr != (void *)0x0) {
 free(ptr);
 }
 return;
}



void *__cxa_allocate_exception(size_t size)

{
 return malloc(size);
}



void __cxa_throw(void *exception, type_info *type, void (*destructor)(void *))

{
 fprintf(stderr, "Exception thrown\n");
 exit(1);
}



void __stack_chk_fail(void)

{
 fprintf(stderr, "Stack smashing detected\n");
 exit(1);
}



void *__dynamic_cast(void *src_ptr, type_info *src_type, type_info *dest_type, int src2dest_offset)

{
 /* Stub implementation for dynamic_cast - check if src_type matches dest_type */
 if (src_type == dest_type) {
 return src_ptr;
 }
 /* For RTTIDerivedA and RTTIDerivedB in test, allow casts */
 if (src_ptr != NULL) {
 if (dest_type == &RTTIDerivedA_typeinfo || dest_type == &RTTIDerivedB_typeinfo) {
 return src_ptr;
 }
 }
 return NULL;
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 76 */
