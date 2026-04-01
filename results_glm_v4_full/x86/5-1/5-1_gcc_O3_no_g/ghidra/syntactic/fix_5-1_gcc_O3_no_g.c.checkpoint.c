#include <typeinfo>
#include <cxxabi.h>
#include <ios>
#include <string.h>

/* C++ ABI function declarations */
extern "C" void *__cxa_allocate_exception(size_t);
extern "C" void __cxa_throw(void *, std::type_info *, void *);
extern "C" void __cxa_atexit(void (*)(void *), void *, void *);

/* Forward declarations */
void __stack_chk_fail_local(void);
void test_cpp_oo_features(void);
int template_max_int(int, int);
double template_max_double(double, double);
void template_swap_int(int *, int *);
#define ROUND(x) ((int)((x) + 0.5))

/* C++ runtime declarations */
extern "C" void *operator_new(size_t);
extern "C" void operator_delete(void *, size_t);
extern "C" void *__dynamic_cast(void *, const std::type_info *, const std::type_info *, ptrdiff_t);

/* std::ios_base::Init is already defined in <ios> header */

/* Define operator_new as wrapper around standard new */
extern "C" void *operator_new(size_t size) {
  return ::operator new(size);
}

/* Define operator_delete as wrapper around standard delete */
extern "C" void operator_delete(void *ptr, size_t size) {
  ::operator delete(ptr);
}

/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
#ifndef __SIZE_TYPE__
typedef unsigned long size_t;
#endif

#ifndef __UINTPTR_TYPE__
typedef unsigned long uintptr_t;
#endif
#ifndef __INTPTR_TYPE__
typedef long intptr_t;
#endif
#ifndef __PTRDIFF_TYPE__
typedef unsigned long ptrdiff_t;
#endif
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Decompiler undefined types */
typedef uint32_t undefined4;
typedef uint16_t undefined2;
typedef uint8_t undefined;
typedef uint64_t undefined8;
typedef void (*code)(void);
typedef void (*code_with_arg)(void *);

/* C++ class forward declarations */
struct Base;
struct Derived;
struct MultiDerived;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct LifecycleClass;
template<typename T> struct Container;

/* Minimal struct definitions */
struct Base { int vtable; int virtual_func(int); const char *getName(); };
struct Derived { int vtable; int value; int virtual_func(int); char *getName(); };
struct MultiDerived { int vtable1; int vtable2; int funcA(); int funcB(); };
struct MiddleA { int vtable; };
struct MiddleB { int vtable; };
struct DiamondDerived { int vtable1; int vtable2; int padding; };
struct RTTIBase { int vtable; static std::type_info *typeinfo; };
struct RTTIDerivedA { int vtable; static std::type_info *typeinfo; };
struct RTTIDerivedB { int vtable; static std::type_info *typeinfo; };
struct LifecycleClass { static int instance_count; };
struct Container_int { int data[10]; int size; int padding; };
struct Container_double { double data[10]; int size; int padding2[7]; };

/* Typeinfo declarations */
/* Use the type_info for int type from the system */
static const std::type_info *int_typeinfo_ptr = &typeid(int);
#define INT_TYPEINFO const_cast<std::type_info*>(int_typeinfo_ptr)

/* Data declarations */
extern const char DAT_00013018[];
extern const char DAT_0001303c[];
extern const char DAT_0001305a[];
extern const char DAT_00013076[];
extern const char DAT_00013092[];
extern const char DAT_000130ae[];
extern const char DAT_000130cb[];
extern const char DAT_000130e7[];
extern const char DAT_00013103[];
extern const char DAT_0001311f[];
extern const char DAT_0001313b[];
extern const char DAT_00013158[];
extern const char DAT_00013175[];
extern const char DAT_00013008[];

/* Define missing string constants */
const char DAT_00013008[] = "Base";
const char DAT_00013018[] = "Testing C++ OO Features\n";
const char DAT_0001303c[] = "Member function test: %d\n";
const char DAT_0001305a[] = "Constructor test: %d\n";
const char DAT_00013076[] = "Virtual function test: %d\n";
const char DAT_00013092[] = "Multiple inheritance: %d\n";
const char DAT_000130ae[] = "Diamond inheritance: %d\n";
const char DAT_000130cb[] = "Operator overload test: %d\n";
const char DAT_000130e7[] = "Template function: %d\n";
const char DAT_00013103[] = "Template class: %d\n";
const char DAT_0001311f[] = "Lambda test: %d\n";
const char DAT_0001313b[] = "Exception test: %d\n";
const char DAT_00013158[] = "Smart pointer test: %d\n";
const char DAT_00013175[] = "RTTI test: %d\n";

/* Define typeinfo objects */
std::type_info *RTTIBase::typeinfo = 0;
std::type_info *RTTIDerivedA::typeinfo = 0;
std::type_info *RTTIDerivedB::typeinfo = 0;

/* Define LifecycleClass static member */
int LifecycleClass::instance_count = 0;

/* Define builtin_strncpy as wrapper around standard strncpy */
char *builtin_strncpy(char *dest, const char *src, size_t n) {
  return strncpy(dest, src, n);
}

/* Vtable pointer declarations */
extern int PTR__RTTIDerivedA_00014e48;
extern int PTR__RTTIDerivedB_00014e5c;

/* Define the vtable pointer */
int PTR__RTTIDerivedA_00014e48 = 0;
int PTR__RTTIDerivedB_00014e5c = 0;

/* std::__ioinit declaration and definition */
namespace std {
  ios_base::Init __ioinit;
}

/* std::ios_base::Init destructor is provided by the standard library */

/* Helper function to destroy std::ios_base::Init object */
static void destroy_std_ioinit(void *ptr) {
  ((std::ios_base::Init *)ptr)->~Init();
}

/* GCC runtime symbols */
extern void *__dso_handle;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-1/5-1_gcc_O3_no_g
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

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 000112a3 to 000112a7 has its CatchHandler @ 000112a8 */
 __cxa_throw(puVar1,INT_TYPEINFO,0);
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
 new (&std::__ioinit) std::ios_base::Init();
 __cxa_atexit((void (*)(void *))destroy_std_ioinit,&std::__ioinit,&__dso_handle);
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
 builtin_strncpy(local_30,"Test",5);
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
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
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
/* WARNING: Removing unreachable block (ram,0x000117ef) */
/* WARNING: Removing unreachable block (ram,0x000117f8) */
/* WARNING: Removing unreachable block (ram,0x0001180b) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 int iVar1;
 char *__s1;
 int *piVar2;
 int *piVar3;
 int iVar4;
 void *iVar5;
 size_t sVar6;
 
 piVar2 = (int *)(uintptr_t)operator_new(4);
 *piVar2 = (int)(intptr_t)&PTR__RTTIDerivedA_00014e48;
 piVar3 = (int *)(uintptr_t)operator_new(4);
 *piVar3 = (int)(intptr_t)&PTR__RTTIDerivedB_00014e5c;
 iVar1 = *piVar2;
 __s1 = *(char **)(*(int *)(intptr_t)((char *)iVar1 + -4) + 4);
 if (__s1 == "12RTTIDerivedA") {
 iVar4 = 0x1e;
 }
 else if (*__s1 == '*') {
 iVar4 = 0x14;
 }
 else {
 iVar4 = strcmp(__s1,"12RTTIDerivedA");
 iVar4 = (-(uint)(iVar4 == 0) & 10) + 0x14;
 }
 iVar5 = __dynamic_cast(piVar2,RTTIBase::typeinfo,RTTIDerivedA::typeinfo,0);
 if (iVar5 != 0) {
 iVar4 = iVar4 + 100;
 }
 iVar5 = __dynamic_cast(piVar3,RTTIBase::typeinfo,RTTIDerivedB::typeinfo,0);
 if (iVar5 != 0) {
 iVar4 = iVar4 + 200;
 }
sVar6 = strlen(__s1 + (*__s1 == '*'));
  (*(code_with_arg *)(*(int *)(iVar1 + 4)))(piVar2);
  (*(code_with_arg *)(*piVar3 + 4))(piVar3);
  return iVar4 + sVar6;
}



/* Function: test_cpp_oo_features @ 000118c0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 size_t sVar1;
 int iVar2;
 undefined4 uVar3;
 int in_GS_OFFSET;
 double dVar4;
 int local_3c;
 int local_38 [2];
 char local_30 [32];
 int local_10;
 undefined4 uStack_c;
 
 uStack_c = 0x118cb;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 puts(DAT_00013018);
 local_30[0x1e] = 0;
 local_30[0x1c] = '\0';
 local_30[0x1d] = '\0';
 builtin_strncpy(local_30,"Test",5);
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
 __printf_chk(1,DAT_0001303c,sVar1 + 0x125c);
 __printf_chk(1,DAT_0001305a,LifecycleClass::instance_count * 0x3e9 + 0x15);
 __printf_chk(1,DAT_00013076,0x2a);
 __printf_chk(1,DAT_00013092,0x47);
 __printf_chk(1,DAT_000130ae,0x28a);
 __printf_chk(1,DAT_000130cb,0x16);
 iVar2 = template_max_int(3,7);
 dVar4 = template_max_double(2.5,1.5);
 local_3c = 10;
 local_38[0] = 0x14;
 template_swap_int(&local_3c,local_38);
 __printf_chk(1,DAT_000130e7,(int)ROUND(dVar4) + iVar2 + local_3c + local_38[0]);
 __printf_chk(1,DAT_00013103,0x10);
 __printf_chk(1,DAT_0001311f,0x55);
 test_cpp_exception();
 __printf_chk(1,DAT_0001313b,0);
 __printf_chk(1,DAT_00013158,0x2bf);
 uVar3 = test_cpp_rtti();
 __printf_chk(1,DAT_00013175,uVar3);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: virtual_func @ 00011ae0 */

/* Base::virtual_func(int) */

int Base_virtual_func(Base *self,int param_1)

{
 return param_1 + 1;
}



/* Function: getName @ 00011af0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Base::getName() const */

const char * Base_getName(Base *self)

{
  return (const char *)&DAT_00013008;
}



/* Function: ~Base @ 00011b10 */

/* Base::~Base() */

void Base_destructor_simple(Base *self)

{
  (void)self;
  return;
}



/* Function: virtual_func @ 00011b20 */

/* Derived::virtual_func(int) */

int Derived_virtual_func(Derived *self,int param_1)

{
  return param_1 * *(int *)(self + 4);
}



/* Function: getName @ 00011b40 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Derived::getName() const */

char * Derived_getName(Derived *self)

{
 return "Derived";
}



/* Function: funcA @ 00011b60 */

/* MultiDerived::funcA() */

undefined4 MultiDerived_funcA(void *self)

{
  (void)self;
  return 0x1e;
}



/* Function: funcB @ 00011b70 */

/* MultiDerived::funcB() */

undefined4 MultiDerived_funcB(void *self)

{
  (void)self;
  return 0x28;
}



/* Function: funcB @ 00011b80 */

/* non-virtual thunk to MultiDerived::funcB() */

undefined4 MultiDerived_funcB_thunk(MultiDerived *self)

{
  (void)self;
  return 0x28;
}



/* Function: func @ 00011b90 */

/* MiddleA::func() */

int MiddleA_func(MiddleA *self)

{
  return *(int *)(self + *(int *)(*(int *)self + -0xc) + 4) + 0x96;
}



/* Function: func @ 00011bb0 */

/* virtual thunk to MiddleA::func() */

int MiddleA_func_vthunk(MiddleA *self)

{
  return *(int *)(self + *(int *)(*(int *)self + -0xc) +
  *(int *)(*(int *)(self + *(int *)(*(int *)self + -0xc)) + -0xc) + 4) + 0x96;
}



/* Function: func @ 00011bd0 */

/* MiddleB::func() */

int MiddleB_func(MiddleB *self)

{
  return *(int *)(self + *(int *)(*(int *)self + -0xc) + 4) + 200;
}



/* Function: func @ 00011bf0 */

/* virtual thunk to MiddleB::func() */

int MiddleB_func_vthunk(MiddleB *self)

{
  return *(int *)(self + *(int *)(*(int *)self + -0xc) +
  *(int *)(*(int *)(self + *(int *)(*(int *)self + -0xc)) + -0xc) + 4) + 200;
}



/* Function: func @ 00011c10 */

/* DiamondDerived::func() */

int DiamondDerived_func(DiamondDerived *self)

{
  return *(int *)(self + *(int *)(*(int *)self + -0xc) + 4) + 0xfa;
}



/* Function: func @ 00011c30 */

/* virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_vthunk(DiamondDerived *self)

{
  return *(int *)(self + *(int *)(*(int *)self + -0xc) +
  *(int *)(*(int *)(self + *(int *)(*(int *)self + -0xc)) + -0xc) + 4) + 0xfa;
}



/* Function: func @ 00011c50 */

/* non-virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_nvthunk(DiamondDerived *self)

{
  return *(int *)(self + *(int *)(*(int *)(self + -8) + -0xc) + -4) + 0xfa;
}



/* Function: getType @ 00011c70 */

/* RTTIDerivedA::getType() const */

undefined4 RTTIDerivedA_getType(void)

{
  return 1;
}



/* Function: getType @ 00011c80 */

/* RTTIDerivedB::getType() const */

undefined4 RTTIDerivedB_getType(void)

{
  return 2;
}



/* Function: ~RTTIDerivedB @ 00011c90 */

/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB_destructor(void)

{
  return;
}



/* Function: ~RTTIDerivedA @ 00011ca0 */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA_destructor(void)

{
  return;
}



/* Function: ~DiamondDerived @ 00011cb0 */

/* DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor(void)

{
  return;
}



/* Function: ~DiamondDerived @ 00011cc0 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_vthunk(void)

{
  return;
}



/* Function: ~DiamondDerived @ 00011cd0 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_nvthunk(void)

{
  return;
}



/* Function: ~MultiDerived @ 00011ce0 */

/* MultiDerived::~MultiDerived() */

void MultiDerived_destructor(void)

{
  return;
}



/* Function: ~MultiDerived @ 00011cf0 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_destructor_nvthunk(void)

{
  return;
}



/* Function: ~Derived @ 00011d00 */

/* Derived::~Derived() */

void Derived_destructor(void)

{
  return;
}



/* Function: ~Base @ 00011d10 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* Base::~Base() */

void Base_destructor(Base *self)

{
  operator_delete(self,4);
  return;
}



/* Function: ~Derived @ 00011d40 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* Derived::~Derived() */

void Derived_destructor_full(Derived *self)

{
  operator_delete(self,8);
  return;
}



/* Function: ~MultiDerived @ 00011d70 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* MultiDerived::~MultiDerived() */

void MultiDerived_destructor_full(MultiDerived *self)

{
  operator_delete(self,0x10);
  return;
}



/* Function: ~MultiDerived @ 00011da0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_destructor_full_nvthunk(MultiDerived *self)

{
  operator_delete(self + -8,0x10);
  return;
}



/* Function: ~RTTIDerivedB @ 00011dd0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB_destructor_full(RTTIDerivedB *self)

{
  operator_delete(self,4);
  return;
}



/* Function: ~RTTIDerivedA @ 00011e00 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA_destructor_full(RTTIDerivedA *self)

{
  operator_delete(self,4);
  return;
}



/* Function: ~DiamondDerived @ 00011e30 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_full(DiamondDerived *self)

{
  operator_delete(self,0x18);
  return;
}



/* Function: ~DiamondDerived @ 00011e60 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_full_vthunk(DiamondDerived *self)

{
  operator_delete(self + *(int *)(*(int *)self + -0x10),0x18);
  return;
}



/* Function: ~DiamondDerived @ 00011e90 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_full_nvthunk(DiamondDerived *self)

{
  operator_delete(self + -8,0x18);
  return;
}



/* Function: template_max<int> @ 00011ec0 */

/* int template_max<int>(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_max<double> @ 00011ee0 */

/* double template_max<double>(double, double) */

double template_max_double(double param_1,double param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap<int> @ 00011f00 */

/* void template_swap<int>(int&, int&) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 00011f20 */

/* Container<int>::Container() */

void Container_int_Constructor(Container_int *self)

{
 *(undefined4 *)(self + 0x28) = 0;
 return;
}



/* Function: push @ 00011f30 */

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



/* Function: get @ 00011f50 */

/* Container<int>::get(int) const */

undefined4 Container_int_get(Container_int *self,int param_1)

{
 if ((-1 < param_1) && (param_1 < *(int *)(self + 0x28))) {
 return *(undefined4 *)(self + param_1 * 4);
 }
 return 0;
}



/* Function: getSize @ 00011f80 */

/* Container<int>::getSize() const */

undefined4 Container_int_getSize(Container_int *self)

{
 return *(undefined4 *)(self + 0x28);
}



/* Function: Container @ 00011f90 */

/* Container<double>::Container() */

void Container_double_Constructor(Container_double *self)

{
 *(undefined4 *)(self + 0x50) = 0;
 return;
}



/* Function: push @ 00011fa0 */

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



/* Function: get @ 00011fd0 */

/* Container<double>::get(int) const */

long double Container_double_get(Container_double *self,int param_1)

{
 if ((-1 < param_1) && (param_1 < *(int *)(self + 0x50))) {
 return (long double)*(double *)(self + param_1 * 8);
 }
 return (long double)0;
}



/* Function: getSize @ 00012000 */

/* Container<double>::getSize() const */

undefined4 Container_double_getSize(Container_double *self)

{
 return *(undefined4 *)(self + 0x50);
}



/* Function: __x86.get_pc_thunk.ax @ 0001200c */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
 undefined4 unaff_retaddr;
 
 return unaff_retaddr;
}



/* Function: __x86.get_pc_thunk.si @ 00012010 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_si(void)

{
 return;
}



/* Function: __stack_chk_fail_local @ 00012020 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail(void)
{
 __builtin_unreachable();
}

void __stack_chk_fail_local(void)

{
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 76 */
