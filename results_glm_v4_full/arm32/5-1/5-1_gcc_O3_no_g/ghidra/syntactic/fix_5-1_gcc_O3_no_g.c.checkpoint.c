/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;

/* ssize_t defined in system headers */
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef void (*code)(void);

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/* Ghidra undefined type definitions */
typedef unsigned int undefined;
typedef unsigned int undefined4;
typedef unsigned char undefined1;
typedef unsigned long long undefined8;

/* Forward declarations for C++ classes */
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct RTTIBase RTTIBase;
typedef struct type_info type_info;
typedef struct Init Init;
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;

/* Minimal struct definitions with vtable pointers */
struct Base { void **vtable; };
struct Derived { void **vtable; int value; };
struct MultiDerived { void **vtable; };
struct MiddleA { void **vtable; };
struct MiddleB { void **vtable; };
struct DiamondDerived { void **vtable; };
struct RTTIDerivedA { void **vtable; };
struct RTTIDerivedB { void **vtable; };
struct RTTIBase { void **vtable; };
struct Init { };
struct Container_int {
  void *vtable;
  int data[10];
  int count;
  void (*Constructor)(Container_int *);
  void (*push)(Container_int *, int);
  int (*get)(Container_int *, int);
  int (*getSize)(Container_int *);
};
struct Container_double {
  void *vtable;
  double data[10];
  int count;
  void (*Constructor)(Container_double *);
  void (*push)(Container_double *, double);
  double (*get)(Container_double *, int);
  int (*getSize)(Container_double *);
};

/* Forward declarations for std namespace */
/* Commented out for C compatibility - std namespace declaration
namespace std {
  class ios_base {
  public:
    class Init {
    public:
      Init();
      ~Init();
    };
  };
  extern Init __ioinit;
};
*/
typedef struct std_Init std_Init;
struct std_Init { };
extern std_Init __ioinit;

/* Forward declarations for C++ runtime functions */
extern "C" void *__cxa_allocate_exception(size_t);
extern "C" void __cxa_throw(void *, void *, void *);
extern "C" void __aeabi_atexit(void *, void (*)(void *), void *);
extern "C" void __stack_chk_fail(void);
extern "C" int __aeabi_d2iz(double);
extern "C" int __printf_chk(int, const char *, ...);
extern "C" int __aeabi_dcmpgt(double, double);
extern "C" void *operator_new(size_t);
extern "C" void operator_delete(void *, size_t);
extern "C" void *__dso_handle;
extern "C" void *__dynamic_cast(void *, const type_info *, const type_info *, ptrdiff_t);

/* Forward declarations for template functions */
extern int template_max_int(int, int);
extern double template_max_double(double, double);
extern void template_swap_int(int *, int *);

/* Forward declarations for test functions */
extern void test_cpp_oo_features(void);

/* Forward declarations for LifecycleClass */
typedef struct LifecycleClass LifecycleClass;
struct LifecycleClass { };
int LifecycleClass_instance_count = 0;

/* Typeinfo declarations for RTTI classes */
struct type_info {
  const char *_name;
};
type_info RTTIDerivedA_typeinfo = { "RTTIDerivedA" };
type_info RTTIDerivedB_typeinfo = { "RTTIDerivedB" };
type_info RTTIBase_typeinfo = { "RTTIBase" };

/* External data references */
void *PTR__RTTIDerivedA_000116b4 = NULL;
void *PTR__RTTIDerivedB_000116c8 = NULL;

/* C++ operator new/delete implementations */
extern "C" void *operator_new(size_t size) {
    return malloc(size);
}

extern "C" void operator_delete(void *ptr, size_t size) {
    (void)size;  /* unused parameter */
    free(ptr);
}

/* C++ I/O initialization object */
std_Init __ioinit;
char DAT_000114d8[] = "Testing C++ OO Features\n";
char DAT_000114fc[] = "Member func result: %d\n";
char DAT_0001151c[] = "Constructor test: %d\n";
char DAT_00011538[] = "%d\n";
char DAT_00011554[] = "%d\n";
char DAT_00011570[] = "%d\n";
char DAT_00011590[] = "%d\n";
char DAT_000115ac[] = "%d\n";
char DAT_000115c8[] = "%d\n";
char DAT_000115e4[] = "%d\n";
char DAT_00011600[] = "%d\n";
char DAT_00011620[] = "%d\n";
char DAT_00011640[] = "RTTI test: %d\n";
char DAT_000114c0[] = "Base";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/5-1/5-1_gcc_O3_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_0001092c @ 0001092c */

void FUN_0001092c(void)

{
 (*(code *)(undefined *)0x0)();
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
 __cxa_throw(puVar1,0,0);
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
 /* placement new simplified */
 /* __ioinit.~Init(); - C++ destructor call removed for C compatibility */
 __aeabi_atexit(&__ioinit,(void (*)(void *))0,&__dso_handle);
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
 uVar2 = __aeabi_d2iz(*(double *)&extraout_r0);
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
	type_info *type_info_ptr;
	int iVar3;
 int iVar4;
 char *__s;
 size_t sVar5;
 int iVar6;
 
 piVar1 = (int *)operator_new(4);
 *piVar1 = (int)&PTR__RTTIDerivedA_000116b4;
 piVar2 = (int *)operator_new(4);
 type_info_ptr = *(type_info **)(*piVar1 + -4);
*piVar2 = (int)&PTR__RTTIDerivedB_000116c8;
	iVar3 = (type_info_ptr == &RTTIDerivedA_typeinfo);
	if (iVar3 == 0) {
 iVar3 = 0x14;
 iVar6 = 0;
 }
 else {
 iVar6 = 10;
 iVar3 = 0x1e;
 }
 iVar4 = (*(type_info **)(*piVar2 + -4) == &RTTIDerivedB_typeinfo);
 if (iVar4 != 0) {
 iVar6 = iVar3;
 }
	iVar3 = (int)__dynamic_cast(piVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 if (iVar3 != 0) {
 iVar6 = iVar6 + 100;
 }
iVar3 = (int)__dynamic_cast(piVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 iVar4 = *piVar1;
 if (iVar3 != 0) {
 iVar6 = iVar6 + 200;
 }
 __s = *(char **)(*(int *)(iVar4 + -4) + 4);
 if (*__s == '*') {
 __s = __s + 1;
 }
 sVar5 = strlen(__s);
 (**(code **)(iVar4 + 4))();
 (**(code **)(*piVar2 + 4))();
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
 iVar3 = __aeabi_d2iz(*(double *)&extraout_r0);
 __printf_chk(1,DAT_000115ac,iVar3 + iVar2 + local_40 + local_3c[0]);
 __printf_chk(1,DAT_000115c8,0x10);
 __printf_chk(1,DAT_000115e4,0x55);
 test_cpp_exception();
 __printf_chk(1,DAT_00011600,0x2a);
 test_cpp_exception();
 __printf_chk(1,DAT_00011600,0x2a);
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

int Base_virtual_func(Base *this_ptr,int param_1)

{
 return param_1 + 1;
}



/* Function: getName @ 000110d8 */

/* Base::getName() const */

undefined1 * Base_getName(Base *this_ptr)

{
 return (undefined1 *)&DAT_000114c0;
}



/* Function: ~Base @ 000110e4 */

/* Base::~Base() */

Base * Base_destructor(Base *this_ptr)

{
 return this_ptr;
}



/* Function: virtual_func @ 000110e8 */

/* Derived::virtual_func(int) */

int Derived_virtual_func(Derived *this_ptr,int param_1)

{
 return param_1 * *(int *)(this_ptr + 4);
}



/* Function: getName @ 000110f4 */

/* Derived::getName() const */

char * Derived_getName(Derived *this_ptr)

{
 return "Derived";
}



/* Function: funcA @ 00011100 */

/* MultiDerived::funcA() */

undefined4 MultiDerived_funcA(MultiDerived *this_ptr)

{
 return 0x1e;
}



/* Function: funcB @ 00011108 */

/* MultiDerived::funcB() */

undefined4 MultiDerived_funcB(MultiDerived *this_ptr)

{
 return 0x28;
}



/* Function: funcB @ 00011110 */

/* non-virtual thunk to MultiDerived::funcB() */

undefined4 MultiDerived_funcB_thunk(void)

{
 return 0x28;
}



/* Function: func @ 00011118 */

/* MiddleA::func() */

int MiddleA_func(MiddleA *this_ptr)

{
 return *(int *)((char *)this_ptr + *(int *)(*(int *)((char *)this_ptr) + -0xc) + 4) + 0x96;
}



/* Function: func @ 00011130 */

/* virtual thunk to MiddleA::func() */

int MiddleA_func_thunk(MiddleA *this_ptr)

{
 return *(int *)(this_ptr + *(int *)(*(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc)) + -0xc) +
 *(int *)(*(int *)this_ptr + -0xc) + 4) + 0x96;
}



/* Function: func @ 00011154 */

/* MiddleB::func() */

int MiddleB_func(MiddleB *this_ptr, int param_1)

{
 return *(int *)((char *)this_ptr + *(int *)(*(int *)((char *)this_ptr) + -0xc) + 4) + param_1;
}



/* Function: func @ 0001116c */

/* virtual thunk to MiddleB::func() */

int MiddleB_func_thunk(MiddleB *this_ptr)

{
 return *(int *)(this_ptr + *(int *)(*(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc)) + -0xc) +
 *(int *)(*(int *)this_ptr + -0xc) + 4) + 200;
}



/* Function: func @ 00011190 */

/* DiamondDerived::func() */

int DiamondDerived_func(DiamondDerived *this_ptr, int param_1)

{
 return *(int *)((char *)this_ptr + *(int *)(*(int *)((char *)this_ptr) + -0xc) + 4) + param_1;
}



/* Function: func @ 000111a8 */

/* virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_thunk(DiamondDerived *this_ptr)

{
 return *(int *)((char *)this_ptr + *(int *)(*(int *)((char *)this_ptr + *(int *)(*(int *)((char *)this_ptr) + -0xc)) + -0xc) +
 *(int *)(*(int *)((char *)this_ptr) + -0xc) + 4) + 0xfa;
}



/* Function: func @ 000111cc */

/* non-virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_thunk2(DiamondDerived *this_ptr)

{
 return *(int *)((char *)this_ptr + *(int *)(*(int *)((char *)this_ptr + -8) + -0xc) + -4) + 0xfa;
}



/* Function: getType @ 000111e4 */

/* RTTIDerivedA::getType() const */

undefined4 RTTIDerivedA_getType(RTTIDerivedA *this_ptr)

{
 return 1;
}



/* Function: getType @ 000111ec */

/* RTTIDerivedB::getType() const */

undefined4 RTTIDerivedB_getType(RTTIDerivedB *this_ptr)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 000111f4 */

/* RTTIDerivedB::~RTTIDerivedB() */

RTTIDerivedB * RTTIDerivedB_destructor(RTTIDerivedB *this_ptr)

{
 return this_ptr;
}



/* Function: ~RTTIDerivedA @ 000111f8 */

/* RTTIDerivedA::~RTTIDerivedA() */

RTTIDerivedA * RTTIDerivedA_destructor(RTTIDerivedA *this_ptr)

{
 return this_ptr;
}



/* Function: ~DiamondDerived @ 000111fc */

/* DiamondDerived::~DiamondDerived() */

DiamondDerived * DiamondDerived_destructor(DiamondDerived *this_ptr)

{
 return this_ptr;
}



/* Function: ~DiamondDerived @ 00011200 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

DiamondDerived * DiamondDerived_destructor_thunk(DiamondDerived *this_p)

{
 return this_p + *(int *)(*(int *)this_p + -0x10);
}



/* Function: ~DiamondDerived @ 00011210 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

DiamondDerived * DiamondDerived_destructor_thunk2(DiamondDerived *this_p)

{
 return this_p + -8;
}



/* Function: ~MultiDerived @ 00011218 */

/* MultiDerived::~MultiDerived() */

MultiDerived * MultiDerived_destructor(MultiDerived *this_ptr)

{
 return this_ptr;
}



/* Function: ~MultiDerived @ 0001121c */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

MultiDerived * MultiDerived_destructor_thunk(MultiDerived *this_p)

{
 return this_p + -8;
}



/* Function: ~Derived @ 00011224 */

/* Derived::~Derived() */

Derived * Derived_destructor(Derived *this_ptr)

{
 return this_ptr;
}



/* Function: ~Base @ 00011228 */

/* Base::~Base() */

Base * Base_deleting_destructor(Base *this_ptr)

{
 operator_delete(this_ptr,4);
 return this_ptr;
}



/* Function: ~Derived @ 00011240 */

/* Derived::~Derived() */

Derived * Derived_deleting_destructor(Derived *this_ptr)

{
 operator_delete(this_ptr,8);
 return this_ptr;
}



/* Function: ~MultiDerived @ 00011258 */

/* MultiDerived::~MultiDerived() */

MultiDerived * MultiDerived_deleting_destructor(MultiDerived *this_ptr)

{
 operator_delete(this_ptr,0x10);
 return this_ptr;
}



/* Function: ~MultiDerived @ 00011270 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

MultiDerived * MultiDerived_deleting_destructor_thunk(MultiDerived *this_ptr)

{
 operator_delete(this_ptr + -8,0x10);
 return this_ptr + -8;
}



/* Function: ~RTTIDerivedB @ 0001128c */

/* RTTIDerivedB::~RTTIDerivedB() */

RTTIDerivedB * RTTIDerivedB_deleting_destructor(RTTIDerivedB *this_ptr)

{
 operator_delete(this_ptr,4);
 return this_ptr;
}



/* Function: ~RTTIDerivedA @ 000112a4 */

/* RTTIDerivedA::~RTTIDerivedA() */

RTTIDerivedA * RTTIDerivedA_deleting_destructor(RTTIDerivedA *this_ptr)

{
 operator_delete(this_ptr,4);
 return this_ptr;
}



/* Function: ~DiamondDerived @ 000112bc */

/* DiamondDerived::~DiamondDerived() */

DiamondDerived * DiamondDerived_deleting_destructor(DiamondDerived *this_ptr)

{
 operator_delete(this_ptr,0x18);
 return this_ptr;
}



/* Function: ~DiamondDerived @ 000112d4 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

DiamondDerived * DiamondDerived_deleting_destructor_thunk(DiamondDerived *this_ptr)

{
 int iVar1;
 
 iVar1 = *(int *)(*(int *)this_ptr + -0x10);
 operator_delete(this_ptr + iVar1,0x18);
 return this_ptr + iVar1;
}



/* Function: ~DiamondDerived @ 000112f8 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

DiamondDerived * DiamondDerived_deleting_destructor_thunk2(DiamondDerived *this_ptr)

{
 operator_delete(this_ptr + -8,0x18);
 return this_ptr + -8;
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
 if (__aeabi_dcmpgt(param_1, param_2) != 0) return param_1;
	return param_2;
}



/* Function: template_swap<int> @ 00011350 */

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

void Container_double_push(Container_double *this_ptr,double param_1)

{
 int iVar1;
 uint32_t *puVar2;
 double dVal;
 uint32_t uVals[2];
 
 iVar1 = *(int *)((char *)this_ptr + 0x50);
 if (iVar1 < 10) {
 dVal = param_1;
 memcpy(uVals, &dVal, sizeof(double));
 puVar2 = (uint32_t *)((char *)this_ptr + iVar1 * 8);
 *(int *)((char *)this_ptr + 0x50) = iVar1 + 1;
 puVar2[0] = uVals[0];
 puVar2[1] = uVals[1];
 }
}



/* Function: get @ 000113f0 */

/* Container<double>::get(int) const */

undefined8 Container_double_get(Container_double *this_ptr,int param_1)

{
 double result;
 uint32_t uVals[2];
 if ((-1 < param_1) && (param_1 < *(int *)((char *)this_ptr + 0x50))) {
 uVals[0] = *(uint32_t *)((char *)this_ptr + param_1 * 8);
 uVals[1] = *(uint32_t *)((char *)this_ptr + param_1 * 8 + 4);
 memcpy(&result, uVals, sizeof(double));
 return *(undefined8 *)&result;
 }
 return 0;
}



/* Function: getSize @ 0001141c */

/* Container<double>::getSize() const */

int Container_double_getSize(Container_double *this_ptr)

{
 return *(int *)((char *)this_ptr + 0x50);
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 69 */
