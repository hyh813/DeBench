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
typedef unsigned long long ulonglong;

/* Additional types for decompiled code */
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef void (*code)(void);

/* Ghidra macro for extracting lower 4 bytes from 8-byte value */
#define SUB84(val, offset) ((int)(val))

/* Forward class declarations */
class LifecycleClass { public: static int instance_count; };
class DiamondDerived;
int DiamondDerived_func(DiamondDerived*);
int template_max_int(int, int);
double template_max_double(double, double);
void template_swap_int(int*, int*);
int LifecycleClass::instance_count = 0;

class Base { public: virtual int virtual_func(int); virtual char* getName(); virtual ~Base(); };
class Derived : public Base { public: virtual int virtual_func(int); virtual char* getName(); virtual ~Derived(); };
class MultiDerived : public Base { public: undefined4 funcA(); undefined4 funcB(); undefined4 funcB_thunk(); virtual ~MultiDerived(); };
class MiddleA { public: int func(); int func_thunk(); virtual ~MiddleA(); };
class MiddleB { public: int func(); int func_thunk(); virtual ~MiddleB(); };
class DiamondDerived { public: int func(); int func_thunk(); int func_thunk2(); virtual ~DiamondDerived(); };
class type_info { public: int dummy; };
int type_info_equal(type_info*, type_info*);

class RTTIBase { public: static type_info typeinfo; virtual ~RTTIBase(); };
class RTTIDerivedA { public: static type_info typeinfo; undefined4 getType(); virtual ~RTTIDerivedA(); };
class RTTIDerivedB { public: static type_info typeinfo; undefined4 getType(); virtual ~RTTIDerivedB(); };

class Init { public: Init(); ~Init(); };

namespace std {
class ios_base { public: class Init { public: Init(); ~Init(); }; };
}

template<typename T> class Container { public: Container(); void push(T); T get(int); int getSize(); };
typedef Container<int> Container_int;
typedef Container<double> Container_double;

/* External declarations */
extern "C" {
void* operator_new__(unsigned int);
void operator_delete__(void*);
void* operator_new(unsigned int);
void* operator_new_placement(unsigned int, void*);
void operator_delete(void*, unsigned int);
void __cxa_throw(void*, void*, void*);
void* __cxa_allocate_exception(unsigned int);
void* __dynamic_cast_wrapper(void*, void*, void*, int);
int __dynamic_cast_wrapper_int(void*, void*, void*, int);
void __stack_chk_fail(void);
int __aeabi_atexit(void*, void*, void*);
int __aeabi_d2iz(int, int);
int __aeabi_dcmpgt(int, int, int, int);
void* memcpy(void*, void*, unsigned long);
char* strncpy(char*, const char*, unsigned long);
unsigned long strlen(const char*);
int puts(const char*);
int __printf_chk(int, const char*, ...);
void* malloc(unsigned long);
void free(void*);
}

void operator_delete__(void* ptr) {
 operator_delete(ptr, 0);
}

void* operator_new(unsigned int size) {
 return malloc(size);
}

void* operator_new__(unsigned int size) {
 return operator_new(size);
}

void operator_delete(void* ptr, unsigned int size) {
 free(ptr);
}

int type_info_equal(type_info* t1, type_info* t2) {
 return (t1 == t2) ? 1 : 0;
}

void* __dynamic_cast_wrapper(void* obj, void* base_type, void* derived_type, int flags) {
 return obj;
}

/* External data */
void* PTR_virtual_func_0001187c = 0;
void* PTR_virtual_func_00011894 = 0;
void* PTR_func_00011968 = 0;
void* PTR__RTTIDerivedA_0001197c = 0;
void* PTR__RTTIDerivedB_00011990 = 0;
type_info RTTIDerivedA_typeinfo;
type_info RTTIDerivedB_typeinfo;
type_info RTTIBase_typeinfo;
namespace std {
extern Init __ioinit;
}
extern void* __dso_handle;
char DAT_000115cc = 'B';
char DAT_000115e4 = 'T';
char DAT_00011608 = 'M';
char DAT_00011628 = 'C';
char DAT_00011644 = 'V';
char DAT_00011660 = 'I';
char DAT_0001167c = 'D';
char DAT_0001169c = 'O';
char DAT_000116b8 = 'F';
char DAT_000116d4 = 'S';
char DAT_000116f0 = 'L';
char DAT_0001170c = 'E';
char DAT_0001172c = 'P';
char DAT_0001174c = 'R';

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

void call_virtual_func(Base *param_1,int param_2)

{
 (*(code *)**(undefined4 **)param_1)();
 return;
}



/* Function: test_cpp_virtual_func @ 00010ce4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

void test_cpp_virtual_func(void)

{
 int iVar1;
 undefined8 uVar2;
 undefined **local_18;
 undefined **local_14;
 undefined4 local_10;
 int local_c;
 
 local_c = 0;
  local_18 = (undefined **)&PTR_virtual_func_0001187c;
 local_14 = (undefined **)&PTR_virtual_func_00011894;
 local_10 = 3;
 call_virtual_func((Base *)local_18,5);
 call_virtual_func((Base *)local_14,5);
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
 undefined **local_14;
 undefined4 local_10;
 int local_c;
 
 local_c = 0;
  local_14 = (undefined **)&PTR_func_00011968;
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

void test_cpp_template_func(void)

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
 template_max_double(1.5,2.5);
 local_1c = 10;
 local_18 = 0x14;
 template_swap_int(&local_1c,&local_18);
 uVar2 = __aeabi_d2iz(extraout_r0,extraout_r1);
 if (local_14 == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
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
 __cxa_throw(puVar1,&RTTIBase_typeinfo,0);
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
 int iVar4;
 char *__s;
 size_t sVar5;
 
 piVar1 = (int*)operator_new(4);
 *piVar1 = (int)&PTR__RTTIDerivedA_0001197c;
 piVar2 = (int*)operator_new(4);
 *piVar2 = (int)&PTR__RTTIDerivedB_00011990;
 iVar3 = type_info_equal
 ((type_info *)(((int)(*piVar1)) + -4),&RTTIDerivedA_typeinfo);
 if (iVar3 == 0) {
 iVar3 = 0;
 }
 else {
 iVar3 = 10;
 }
 iVar4 = type_info_equal
 ((type_info *)(((int)(*piVar2)) + -4),&RTTIDerivedB_typeinfo);
 if (iVar4 != 0) {
 iVar3 = iVar3 + 0x14;
 }
 iVar4 = (int)__dynamic_cast_wrapper((void*)piVar1,(void*)&RTTIBase_typeinfo,(void*)&RTTIDerivedA_typeinfo,0);
 if (iVar4 != 0) {
 iVar3 = iVar3 + 100;
 }
 iVar4 = (int)__dynamic_cast_wrapper((void*)piVar2,(void*)&RTTIBase_typeinfo,(void*)&RTTIDerivedB_typeinfo,0);
 if (iVar4 != 0) {
 iVar3 = iVar3 + 200;
 }
 iVar4 = *piVar1;
 __s = *(char **)((intptr_t)iVar4 - 4 + 4);
 if (*__s == '*') {
 __s = __s + 1;
 }
 sVar5 = strlen(__s);
 (*(code *)(iVar4 + 4))();
 (*(code *)(*piVar2 + 4))();
 return iVar3 + sVar5;
}



/* Function: test_cpp_oo_features @ 00011074 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 undefined4 uVar1;
 
 puts(&DAT_000115e4);
 uVar1 = test_cpp_member_func();
 __printf_chk(1,&DAT_00011608,uVar1);
 uVar1 = test_cpp_constructor();
 __printf_chk(1,&DAT_00011628,uVar1);
 test_cpp_virtual_func();
 __printf_chk(1,&DAT_00011644,0);
 uVar1 = test_cpp_multiple_inheritance();
 __printf_chk(1,&DAT_00011660,uVar1);
 test_cpp_diamond_inheritance();
 __printf_chk(1,&DAT_0001167c,0);
 __printf_chk(1,&DAT_0001169c,0x16);
 test_cpp_template_func();
 __printf_chk(1,&DAT_000116b8,0);
 __printf_chk(1,&DAT_000116d4,0x10);
 __printf_chk(1,&DAT_000116f0,0x55);
 test_cpp_exception();
 __printf_chk(1,&DAT_0001170c,0);
 uVar1 = test_cpp_smart_ptr();
 __printf_chk(1,&DAT_0001172c,uVar1);
 uVar1 = test_cpp_rtti();
 __printf_chk(1,&DAT_0001174c,uVar1);
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
 return;
}



/* Function: virtual_func @ 000111dc */

/* Base::virtual_func(int) */

int Base::virtual_func(int param_1)

{
 return param_1 + 1;
}



/* Function: getName @ 000111e4 */

/* Base::getName() const */

char* Base::getName()

{
 return (char*)&DAT_000115cc;
}



/* Function: ~Base @ 000111f0 */

/* Base::~Base() */

Base::~Base()

{
}



/* Function: virtual_func @ 000111f4 */

/* Derived::virtual_func(int) */

int Derived::virtual_func(int param_1)

{
 return param_1 * 10;
}



/* Function: getName @ 00011200 */

/* Derived::getName() const */

char* Derived::getName()

{
 return "Derived";
}



/* Function: funcA @ 0001120c */

/* MultiDerived::funcA() */

undefined4 MultiDerived::funcA()

{
 return 0x1e;
}



/* Function: funcB @ 00011214 */

/* MultiDerived::funcB() */

undefined4 MultiDerived::funcB()

{
 return 0x28;
}



/* Function: funcB @ 0001121c */

/* non-virtual thunk to MultiDerived::funcB() */

undefined4 MultiDerived::funcB_thunk()

{
 return 0x28;
}



/* Function: func @ 00011224 */

/* MiddleA::func() */

int MiddleA::func()

{
 return 0x96;
}



/* Function: func @ 0001123c */

/* virtual thunk to MiddleA::func() */

int MiddleA::func_thunk()

{
 return 0x96;
}



/* Function: func @ 00011260 */

/* MiddleB::func() */

int MiddleB::func()

{
 return 200;
}



/* Function: func @ 00011278 */

/* virtual thunk to MiddleB::func() */

int MiddleB::func_thunk()

{
 return 200;
}



/* Function: func @ 0001129c */

/* DiamondDerived::func() */

int DiamondDerived::func()

{
 return 0xfa;
}



/* Function: func @ 000112b4 */

/* virtual thunk to DiamondDerived::func() */

int DiamondDerived::func_thunk()

{
 return 0xfa;
}



/* Function: func @ 000112d8 */

/* non-virtual thunk to DiamondDerived::func() */

int DiamondDerived::func_thunk2()

{
 return 0xfa;
}



/* Function: getType @ 000112f0 */

/* RTTIDerivedA::getType() const */

undefined4 RTTIDerivedA::getType()

{
 return 1;
}



/* Function: getType @ 000112f8 */

/* RTTIDerivedB::getType() const */

undefined4 RTTIDerivedB::getType()

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 00011300 */

/* RTTIDerivedB::~RTTIDerivedB() */

RTTIDerivedB::~RTTIDerivedB()

{
}



/* Function: ~RTTIDerivedA @ 00011304 */

/* RTTIDerivedA::~RTTIDerivedA() */

RTTIDerivedA::~RTTIDerivedA()

{
}



/* Function: ~DiamondDerived @ 00011308 */

/* DiamondDerived::~DiamondDerived() */

DiamondDerived::~DiamondDerived()

{
}



/* Function: ~DiamondDerived_thunk @ 0001130c */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_thunk()

{
}



/* Function: ~DiamondDerived_thunk2 @ 0001131c */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_thunk2()

{
}



/* Function: ~MultiDerived @ 00011324 */

/* MultiDerived::~MultiDerived() */

MultiDerived::~MultiDerived()

{
}







/* Function: ~Derived @ 00011330 */

/* Derived::~Derived() */

Derived::~Derived()

{
}











/* Function: ~MultiDerived @ 00011364 */

/* MultiDerived::~MultiDerived() */

void MultiDerived2_destructor()

{
}



/* Function: ~MultiDerived @ 0001137c */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived2_thunk_destructor()

{
}



/* Function: ~RTTIDerivedA @ 00011398 */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA2_destructor()

{
}



/* Function: ~RTTIDerivedB @ 000113b0 */

/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB2_destructor()

{
}



/* Function: ~DiamondDerived2 @ 000113c8 */

/* DiamondDerived::~DiamondDerived() */

void DiamondDerived2_destructor()

{
}



/* Function: ~DiamondDerived2_thunk @ 000113e0 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived2_thunk()

{
}



/* Function: ~DiamondDerived2_thunk2 @ 00011404 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived2_thunk2()

{
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
 int r0;
 int r1;
 int r2;
 int r3;
 int iVar5;
 r0 = SUB84(param_1,0);
 r1 = (int)((ulonglong)param_1 >> 0x20);
 r2 = SUB84(param_2,0);
 r3 = 0;
 iVar5 = __aeabi_dcmpgt(r0, r1, r2, r3);
 if (iVar5 > 0) {
 return param_1;
 }
 return param_2;
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

void Container_int_Constructor(Container_int *param_1)
{
 *(undefined4 *)((int)param_1 + 0x28) = 0;
 return;
}



/* Function: push @ 0001147c */

/* Container<int>::push(int) */

void Container_int_push(Container_int *param_1,int param_2)
{
 int iVar1;
 
 iVar1 = *(int *)((int)param_1 + 0x28);
 if (iVar1 < 10) {
 *(int *)((int)param_1 + 0x28) = iVar1 + 1;
 *(int *)((int)param_1 + iVar1 * 4) = param_2;
 }
 return;
}



/* Function: get @ 00011494 */

/* Container<int>::get(int) const */

undefined4 Container_int_get(Container_int *param_1,int param_2)
{
 if (param_2 < 0) {
 return 0;
 }
 if (*(int *)((int)param_1 + 0x28) <= param_2) {
 return 0;
 }
 return *(undefined4 *)((int)param_1 + param_2 * 4);
}



/* Function: getSize @ 000114c0 */

/* Container<int>::getSize() const */

undefined4 Container_int_getSize(Container_int *param_1)
{
 return *(undefined4 *)((int)param_1 + 0x28);
}



/* Function: Container @ 000114c8 */

/* Container<double>::Container() */

void Container_double_Constructor(Container_double *param_1)
{
 *(undefined4 *)((int)param_1 + 0x50) = 0;
 return;
}



/* Function: push @ 000114d4 */

/* Container<double>::push(double) */

undefined4 Container_double_push(Container_double *param_1, double param_2)
{
 undefined4 *puVar1;
 int iVar2;
 
 iVar2 = *(int *)((int)param_1 + 0x50);
 if (iVar2 < 10) {
 *(int *)((int)param_1 + 0x50) = iVar2 + 1;
 puVar1 = (undefined4 *)((int)param_1 + iVar2 * 8);
 *puVar1 = SUB84(param_2,0);
 puVar1[1] = (undefined4)((ulonglong)param_2 >> 0x20);
 }
 return SUB84(param_2,0);
}



/* Function: get @ 000114f0 */

/* Container<double>::get(int) const */

undefined8 Container_double_get(Container_double *param_1,int param_2)
{
 if (param_2 < 0) {
 return 0;
 }
 if (*(int *)((int)param_1 + 0x50) <= param_2) {
 return 0;
 }
 return *(undefined8 *)((int)param_1 + param_2 * 8);
}



/* Function: getSize @ 00011528 */

/* Container<double>::getSize() const */

undefined4 Container_double_getSize(Container_double *param_1)
{
 return *(undefined4 *)((int)param_1 + 0x50);
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 69 */
