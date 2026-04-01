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

/* Additional type definitions for decompiled code */
typedef unsigned int undefined4;
typedef unsigned long undefined8;
typedef void undefined;
typedef unsigned char byte;
typedef void (*code)(void);
typedef unsigned int uint;

/* External function declarations */
extern void __stack_chk_fail(void);
extern void *operator_new(size_t);
extern void *operator_new__(size_t);
extern void operator_delete(void *);
extern void operator_delete__(void *);
extern size_t strlen(const char *);
extern char *builtin_strncpy(char *, const char *, size_t);
extern int strcmp(const char *, const char *);
extern int puts(const char *);
extern int __printf_chk(int, const char *, ...);
extern void *__cxa_allocate_exception(size_t);
extern void __cxa_throw(void *, void *, void *);
extern void *__dynamic_cast(void *, void *, void *, int);
extern int __cxa_atexit(void (*)(void *), void *, void *);

/* Forward function declarations */
extern int DiamondDerived_func(struct DiamondDerived *);
extern int template_max_int(int, int);
extern double template_max_double(double, double);
extern void template_swap_int(int *, int *);

/* External variable declarations */
extern void *PTR_virtual_func_001059a0;
extern void *PTR_virtual_func_001059d0;
extern void *PTR__RTTIDerivedA_00105ba0;
extern void *PTR__RTTIDerivedB_00105bc8;

/* RTTI typeinfo declarations */
extern void *RTTIBase_typeinfo;
extern void *RTTIDerivedA_typeinfo;
extern void *RTTIDerivedB_typeinfo;
extern void *int_typeinfo;

/* Forward class declarations */
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
struct Container_int;
struct Container_double;

/* Struct definitions for incomplete types */
struct Container_int {
 undefined4 data[10];
 undefined4 size;
 undefined4 padding[9];
};

struct Container_double {
 double data[10];
 undefined4 size;
 undefined4 padding[17];
};

struct MiddleA {
 long vtable;
 undefined4 data[8];
};

struct MiddleB {
 long vtable;
 undefined4 data[8];
};

struct DiamondDerived {
 long vtable;
 undefined4 data[20];
};

struct MultiDerived {
 long vtable;
 undefined4 data[12];
};

struct Derived {
 long vtable;
 undefined4 data[8];
};

struct RTTIDerivedA {
 long vtable;
 undefined4 data[8];
};

struct RTTIDerivedB {
 long vtable;
 undefined4 data[8];
};

/* std namespace declarations */
namespace std {
 class ios_base {
  public:
   class Init {
    public:
     Init();
     ~Init();
   };
 };
 void *__ioinit;
}

/* Global variables */
extern int LifecycleClass_instance_count;
extern void *std___ioinit;
extern void *__dso_handle;
extern char DAT_00103018;
extern char DAT_0010303c;
extern char DAT_0010305a;
extern char DAT_00103076;
extern char DAT_00103092;
extern char DAT_001030ae;
extern char DAT_001030cb;
extern char DAT_001030e7;
extern char DAT_00103103;
extern char DAT_0010311f;
extern char DAT_0010313b;
extern char DAT_00103158;
extern char DAT_00103175;
extern char DAT_00103004;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-1/5-1_gcc_O1_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00102020 @ 00102020 */

void FUN_00102020(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00102369 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 size_t sVar1;
 long in_FS_OFFSET;
 char local_34 [36];
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 builtin_strncpy(local_34,"Test",5);
 local_34[5] = '\0';
 local_34[6] = '\0';
 local_34[7] = '\0';
 local_34[8] = '\0';
 local_34[9] = '\0';
 local_34[10] = '\0';
 local_34[0xb] = '\0';
 local_34[0xc] = '\0';
 local_34[0xd] = '\0';
 local_34[0xe] = '\0';
 local_34[0xf] = '\0';
 local_34[0x10] = '\0';
 local_34[0x11] = '\0';
 local_34[0x12] = '\0';
 local_34[0x13] = '\0';
 local_34[0x14] = '\0';
 local_34[0x15] = '\0';
 local_34[0x16] = '\0';
 local_34[0x17] = '\0';
 local_34[0x18] = '\0';
 local_34[0x19] = '\0';
 local_34[0x1a] = '\0';
 local_34[0x1b] = '\0';
 local_34[0x1c] = '\0';
 local_34[0x1d] = '\0';
 local_34[0x1e] = 0;
 local_34[0x1f] = 0;
 sVar1 = strlen(local_34);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return (int)sVar1 + 0x125c;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: test_cpp_constructor @ 001023de */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 int iVar1;
 void *pvVar2;
 
 pvVar2 = operator_new__(0x14);
 *(undefined4 *)((long)pvVar2 + 4) = 10;
 *(undefined4 *)((long)pvVar2 + 8) = 0x14;
 *(undefined4 *)((long)pvVar2 + 0xc) = 0x1e;
 *(undefined4 *)((long)pvVar2 + 0x10) = 0x28;
 iVar1 = LifecycleClass_instance_count + 0x15;
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 operator_delete__(pvVar2);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 return LifecycleClass_instance_count * 1000 + iVar1;
}



/* Function: call_virtual_func @ 0010243c */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 (*(code *)**(undefined8 **)param_1)();
 return;
}



/* Function: test_cpp_virtual_func @ 0010244e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

int test_cpp_virtual_func(void)

{
 int iVar1;
 int iVar2;
 long in_FS_OFFSET;
 undefined **local_30;
 undefined **local_28;
 undefined4 local_20;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_30 = &PTR_virtual_func_001059a0;
 local_28 = &PTR_virtual_func_001059d0;
 local_20 = 3;
 call_virtual_func((Base *)&local_30,5);
 call_virtual_func((Base *)&local_28,5);
 iVar1 = 0;
 iVar2 = 0;
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar1 + 0x15 + iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: test_cpp_multiple_inheritance @ 001024c6 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined8 test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 001024d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
 int iVar1;
 int iVar2;
 long in_FS_OFFSET;
 undefined8 local_38;
 undefined4 local_30;
 long local_20;
 
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 local_38 = 0x105b78;
 local_30 = 0x32;
 iVar1 = DiamondDerived_func((DiamondDerived *)&local_38);
 local_30 = 100;
 iVar2 = DiamondDerived_func((DiamondDerived *)&local_38);
 if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar2 + iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: test_cpp_operator_overload @ 0010254c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined8 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00102556 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

int test_cpp_template_func(void)

{
 int iVar1;
 long in_FS_OFFSET;
 double dVar2;
 int local_18;
 int local_14;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 iVar1 = template_max_int(3,7);
 dVar2 = template_max_double(2.5,1.5);
 local_18 = 10;
 local_14 = 0x14;
 template_swap_int(&local_18,&local_14);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return (int)dVar2 + iVar1 + local_18 + local_14;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: test_cpp_template_class @ 001025e5 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined8 test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 001025ef */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined8 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_exception @ 001025f9 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 00102620 to 00102624 has its CatchHandler @ 00102625 */
 __cxa_throw(puVar1,&int_typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 001026d1 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined8 test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 001026db */

/* WARNING: Removing unreachable block (ram,0x00102769) */
/* WARNING: Removing unreachable block (ram,0x0010276e) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 long lVar1;
 char *__s1;
 int iVar2;
 long *plVar3;
 long *plVar4;
 long lVar5;
 size_t sVar6;
 uint uVar7;
 
plVar3 = (long *)operator_new(8);
*plVar3 = (long)(uintptr_t)PTR__RTTIDerivedA_00105ba0;
plVar4 = (long *)operator_new(8);
*plVar4 = (long)(uintptr_t)PTR__RTTIDerivedB_00105bc8;
 lVar1 = *plVar3;
 __s1 = *(char **)((long)*(long *)(lVar1 + -8) + 8);
 uVar7 = 10;
 if ((__s1 != "12RTTIDerivedA") && (uVar7 = 0, *__s1 != '*')) {
  iVar2 = strcmp(__s1,"12RTTIDerivedA");
  uVar7 = -(unsigned int)(iVar2 == 0) & 10;
 }
 lVar5 = __dynamic_cast((void *)plVar3,(void *)&RTTIBase_typeinfo,(void *)&RTTIDerivedA_typeinfo,0);
 iVar2 = uVar7 + 0x14;
 if (lVar5 != 0) {
 iVar2 = uVar7 + 0x78;
 }
 lVar5 = __dynamic_cast((void *)plVar4,(void *)&RTTIBase_typeinfo,(void *)&RTTIDerivedB_typeinfo,0);
 if (lVar5 != 0) {
 iVar2 = iVar2 + 200;
 }
 sVar6 = strlen(__s1 + (*__s1 == '*'));
 (**(code **)(lVar1 + 8))();
 (**(code **)(*plVar4 + 8))();
 return iVar2 + (int)sVar6;
}



/* Function: test_cpp_oo_features @ 00102801 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 undefined4 uVar1;
 
 puts(&DAT_00103018);
 uVar1 = test_cpp_member_func();
 __printf_chk(1,&DAT_0010303c,uVar1);
 uVar1 = test_cpp_constructor();
 __printf_chk(1,&DAT_0010305a,uVar1);
 uVar1 = test_cpp_virtual_func();
 __printf_chk(1,&DAT_00103076,uVar1);
 uVar1 = test_cpp_multiple_inheritance();
 __printf_chk(1,&DAT_00103092,uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,&DAT_001030ae,uVar1);
 __printf_chk(1,&DAT_001030cb,0x16);
 uVar1 = test_cpp_template_func();
 __printf_chk(1,&DAT_001030e7,uVar1);
 __printf_chk(1,&DAT_00103103,0x10);
 __printf_chk(1,&DAT_0010311f,0x55);
 test_cpp_exception();
 __printf_chk(1,&DAT_0010313b,0);
 uVar1 = test_cpp_smart_ptr();
 __printf_chk(1,&DAT_00103158,uVar1);
 uVar1 = test_cpp_rtti();
 __printf_chk(1,&DAT_00103175,uVar1);
 return;
}



/* Function: main @ 00102970 */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I_test_cpp_member_func @ 00102987 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

void _GLOBAL__sub_I_test_cpp_member_func(void)

{
 return;
}



/* Function: virtual_func @ 001029b4 */

/* Base_virtual_func(int) */

int Base_virtual_func(struct Base *this_ptr,int param_1)

{
 return param_1 + 1;
}



/* Function: getName @ 001029bc */

/* Base_getName() const */

undefined * Base_getName(struct Base *this_ptr)

{
 return &DAT_00103004;
}







/* Function: virtual_func @ 001029ce */

/* Derived_virtual_func(int) */

int Derived_virtual_func(struct Derived *this_ptr,int param_1)

{
 return param_1 * *(int *)(this_ptr + 8);
}



/* Function: getName @ 001029da */

/* Derived_getName() const */

char * Derived_getName(struct Derived *this_ptr)

{
 return "Derived";
}



/* Function: funcA @ 001029e6 */

/* MultiDerived_funcA() */

undefined8 MultiDerived_funcA(void)

{
 return 0x1e;
}



/* Function: funcB @ 001029f0 */

/* MultiDerived_funcB() */

undefined8 MultiDerived_funcB(void)

{
 return 0x28;
}



/* Function: funcB @ 001029fa */

/* non-virtual thunk to MultiDerived_funcB() */

 undefined8 MultiDerived_funcB_thunk(struct MultiDerived *this_ptr)

{
 return 0x28;
}



/* Function: func @ 00102a04 */

/* MiddleA_func() */

int MiddleA_func(struct MiddleA *this_ptr)

{
 return *(int *)(this_ptr + *(long *)(*(long *)this_ptr + -0x18) + 8) + 0x96;
}



/* Function: func @ 00102a19 */

/* virtual thunk to MiddleA_func() */

int MiddleA_func_thunk(struct MiddleA *this_ptr)

{
 return *(int *)(this_ptr + *(long *)(*(long *)this_ptr + -0x18) +
 *(long *)(*(long *)(this_ptr + *(long *)(*(long *)this_ptr + -0x18)) + -0x18) + 8) + 0x96;
}



/* Function: func @ 00102a36 */

/* MiddleB_func() */

int MiddleB_func(struct MiddleB *this_ptr)

{
 return *(int *)(this_ptr + *(long *)(*(long *)this_ptr + -0x18) + 8) + 200;
}



/* Function: func @ 00102a4b */

/* virtual thunk to MiddleB_func() */

int MiddleB_func_thunk(struct MiddleB *this_ptr)

{
 return *(int *)(this_ptr + *(long *)(*(long *)this_ptr + -0x18) +
 *(long *)(*(long *)(this_ptr + *(long *)(*(long *)this_ptr + -0x18)) + -0x18) + 8) + 200;
}



/* Function: func @ 00102a68 */

/* DiamondDerived_func() */

int DiamondDerived_func(struct DiamondDerived *this_ptr)

{
 return *(int *)(this_ptr + *(long *)(*(long *)this_ptr + -0x18) + 8) + 0xfa;
}



/* Function: func @ 00102a7d */

/* virtual thunk to DiamondDerived_func() */

int DiamondDerived_func_thunk(struct DiamondDerived *this_ptr)

{
 return *(int *)(this_ptr + *(long *)(*(long *)this_ptr + -0x18) +
 *(long *)(*(long *)(this_ptr + *(long *)(*(long *)this_ptr + -0x18)) + -0x18) + 8) + 0xfa;
}



/* Function: func @ 00102a99 */

/* non-virtual thunk to DiamondDerived_func() */

int DiamondDerived_func_nonvirtual_thunk(struct DiamondDerived *this_ptr)

{
 return *(int *)(this_ptr + *(long *)(*(long *)(this_ptr + -0x10) + -0x18) + -8) + 0xfa;
}



/* Function: getType @ 00102ab0 */

/* RTTIDerivedA_getType() const */

undefined8 RTTIDerivedA_getType(void)

{
 return 1;
}



/* Function: getType @ 00102aba */

/* RTTIDerivedB_getType() const */

undefined8 RTTIDerivedB_getType(void)

{
 return 2;
}















/* Function: ~DiamondDerived @ 00102ad5 */

/* non-virtual thunk to DiamondDerived_destructor() */

void DiamondDerived_destructor_nonvirtual_thunk(struct DiamondDerived *this_ptr)

{
 return;
}



/* Function: ~DiamondDerived @ 00102ada */

/* virtual thunk to DiamondDerived_destructor() */

void DiamondDerived_destructor_thunk(struct DiamondDerived *this_ptr)

{
 return;
}







/* Function: ~MultiDerived @ 00102ae5 */

/* non-virtual thunk to MultiDerived_destructor() */

void MultiDerived_destructor_nonvirtual_thunk(struct MultiDerived *this_ptr)

{
 return;
}







/* Function: ~Base @ 00102af0 */

/* Base_destructor() */

void Base_destructor(struct Base *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: ~Derived @ 00102b08 */

/* Derived_destructor() */

void Derived_destructor(struct Derived *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: ~MultiDerived @ 00102b20 */

/* MultiDerived_destructor() */

void MultiDerived_destructor(struct MultiDerived *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: ~MultiDerived @ 00102b37 */

/* non-virtual thunk to MultiDerived_destructor() */

void MultiDerived_destructor_nonvirtual_thunk2(struct MultiDerived *this_ptr)

{
 operator_delete(this_ptr + -0x10);
 return;
}



/* Function: ~RTTIDerivedA @ 00102b52 */

/* RTTIDerivedA_destructor() */

void RTTIDerivedA_destructor(struct RTTIDerivedA *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: ~RTTIDerivedB @ 00102b6a */

/* RTTIDerivedB_destructor() */

void RTTIDerivedB_destructor(struct RTTIDerivedB *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: ~DiamondDerived @ 00102b82 */

/* DiamondDerived_destructor() */

void DiamondDerived_destructor(struct DiamondDerived *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: ~DiamondDerived @ 00102b99 */

/* virtual thunk to DiamondDerived_destructor() */

void DiamondDerived_destructor_thunk2(struct DiamondDerived *this_ptr)

{
 operator_delete((void *)((long)this_ptr + *(long *)(*(long *)this_ptr + -0x20)));
 return;
}



/* Function: ~DiamondDerived @ 00102bb7 */

/* non-virtual thunk to DiamondDerived_destructor() */

void DiamondDerived_destructor_nonvirtual_thunk2(struct DiamondDerived *this_ptr)

{
 operator_delete((void *)((long)this_ptr + -0x10));
 return;
}



/* Function: template_max_int @ 00102bd2 */

/* int template_max_int(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_2 <= param_1) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: template_max_double @ 00102bde */

/* double template_max_double(double, double) */

double template_max_double(double param_1,double param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap_int @ 00102be7 */

/* void template_swap_int(int*, int*) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container_int @ 00102bf4 */

/* Container_int_constructor() */

void Container_int_constructor(struct Container_int *this_ptr)

{
 *(undefined4 *)(this_ptr + 0x28) = 0;
 return;
}



/* Function: push @ 00102c00 */

/* Container_int_push(int) */

void Container_int_push(struct Container_int *this_ptr,int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this_ptr + 0x28);
 if (iVar1 < 10) {
 *(int *)(this_ptr + 0x28) = iVar1 + 1;
 *(int *)(this_ptr + (long)iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get @ 00102c18 */

/* Container_int_get(int) const */

undefined4 Container_int_get(struct Container_int *this_ptr,int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this_ptr + 0x28))) {
 uVar1 = *(undefined4 *)(this_ptr + (long)param_1 * 4);
 }
 return uVar1;
}



/* Function: getSize @ 00102c34 */

/* Container_int_getSize() const */

undefined4 Container_int_getSize(struct Container_int *this_ptr)

{
 return *(undefined4 *)(this_ptr + 0x28);
}



/* Function: Container_double @ 00102c3c */

/* Container_double_constructor() */

void Container_double_constructor(struct Container_double *this_ptr)

{
 *(undefined4 *)(this_ptr + 0x50) = 0;
 return;
}



/* Function: push @ 00102c48 */

/* Container_double_push(double) */

void Container_double_push(struct Container_double *this_ptr,double param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this_ptr + 0x50);
 if (iVar1 < 10) {
 *(int *)(this_ptr + 0x50) = iVar1 + 1;
 *(double *)(this_ptr + (long)iVar1 * 8) = param_1;
 }
 return;
}



/* Function: get @ 00102c62 */

/* Container_double_get(int) const */

undefined8 Container_double_get(struct Container_double *this_ptr,int param_1)

{
 undefined8 uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this_ptr + 0x50))) {
 uVar1 = *(undefined8 *)(this_ptr + (long)param_1 * 8);
 }
 return uVar1;
}



/* Function: getSize @ 00102c7e */

/* Container_double_getSize() const */

undefined4 Container_double_getSize(struct Container_double *this_ptr)

{
 return *(undefined4 *)(this_ptr + 0x50);
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 68 */
