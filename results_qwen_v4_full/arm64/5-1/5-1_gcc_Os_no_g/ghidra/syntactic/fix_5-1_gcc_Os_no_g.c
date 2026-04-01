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
typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;

/* Additional type definitions */
typedef void (*code)(void);
typedef unsigned long ulong;

/* Calling convention macros for C++ compatibility */
#define __thiscall
#define __cdecl

/* External declarations */
extern long ___stack_chk_guard;
extern long __stack_chk_guard;
extern void *__dso_handle;
extern char completed_0;
extern undefined **PTR_virtual_func_00113868;
extern undefined **PTR_virtual_func_00113898;
extern int LifecycleClass_instance_count;
extern undefined *PTR__RTTIDerivedA_00113b58;
extern undefined *PTR__RTTIDerivedB_00113b80;
extern undefined *PTR_func_00113ac8;
extern undefined *PTR_func_00113af8;
extern undefined *PTR_func_00113b30;
extern undefined *PTR_func_001138e0;
extern undefined *PTR_func_00113918;
extern undefined *PTR_func_00113958;
extern undefined *PTR_func_00113990;
extern char DAT_001025a0;
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

/* C++ exception handling functions */
extern void *__cxa_allocate_exception(unsigned long);
extern void __cxa_throw(void *, void *, void *);
extern void __cxa_finalize(void *);
extern void __cxa_atexit(void (*)(void *), void *, void *);
extern void *operator_new(unsigned long);
extern void *operator_new__(unsigned long);
extern void operator_delete(void *, unsigned long);
extern void operator_delete__(void *);
extern void __stack_chk_fail(void);
extern int __printf_chk(int, const char *, ...);
extern int puts(const char *);
extern char *strncpy(char *, const char *, unsigned long);
extern unsigned long strlen(const char *);
extern int strcmp(const char *, const char *);
extern void *__dynamic_cast(void *, void *, void *, int);

/* Forward declarations for C++ classes */
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct VirtualBase VirtualBase;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;
typedef struct unique_ptr_int unique_ptr_int;
typedef struct unique_ptr_int_array unique_ptr_int_array;

/* Forward function declarations */
extern void test_cpp_oo_features(void);
extern void deregister_tm_clones(void);
extern int template_max_int(int param_1,int param_2);
extern double template_max_double(double param_1,double param_2);
extern void template_swap_int(int *param_1,int *param_2);
extern void Container_int_push(Container_int *this,int param_1);
extern int DiamondDerived_func(DiamondDerived *this);
extern void DiamondDerived__DiamondDerived(DiamondDerived *this);
struct Container_int {
 undefined8 field_0;
 undefined8 field_8;
 undefined8 field_10;
 undefined8 field_18;
 undefined8 field_20;
 int size;
};
struct Container_double {
 undefined8 field_0;
 undefined8 field_8;
 undefined8 field_10;
 undefined8 field_18;
 undefined8 field_20;
 undefined8 field_28;
 undefined8 field_30;
 undefined8 field_38;
 undefined8 field_40;
 undefined8 field_48;
 int size;
};
struct Derived {
 undefined8 vtable;
 int field_8;
};
struct MiddleA {
 undefined8 vtable;
 undefined8 field_8;
 undefined8 field_10;
 undefined8 field_18;
 undefined8 field_20;
 undefined8 field_28;
};
struct MiddleB {
 undefined8 vtable;
 undefined8 field_8;
 undefined8 field_10;
 undefined8 field_18;
 undefined8 field_20;
 undefined8 field_28;
};
struct MultiDerived {
 undefined8 vtable;
 undefined8 field_8;
 undefined8 field_10;
 undefined8 field_18;
 undefined8 field_20;
 undefined8 field_28;
};
struct DiamondDerived {
 undefined8 vtable;
 undefined8 field_8;
 undefined8 field_10;
 undefined8 field_18;
 undefined8 field_20;
 undefined8 field_28;
};
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct LifecycleClass LifecycleClass;
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-1/5-1_gcc_Os_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101650 @ 00101650 */

void FUN_00101650(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: test_cpp_exception @ 00101800 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 undefined *typeinfo_ptr;
 
 typeinfo_ptr = (undefined *)0x0;
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 0010182c to 0010182f has its CatchHandler @ 00101830 */
 __cxa_throw(puVar1,typeinfo_ptr,(void *)0);
}



/* Function: main @ 001018d0 */

undefined8 main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I_test_cpp_member_func @ 001018e8 */

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
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return (int)sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 00101ac0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00101ad8 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x00101ae4. Too many branches */
 /* WARNING: Treating indirect jump as call */
 void (*func_ptr)(Base *, int) = (void (*)(Base *, int))**(undefined8 **)param_1;
 func_ptr(param_1,param_2);
 return;
}



/* Function: test_cpp_virtual_func @ 00101ae8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

void test_cpp_virtual_func(void)

{
 undefined ***local_20;
 undefined ***local_18;
 undefined4 local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_20 = &PTR_virtual_func_00113868;
 local_18 = &PTR_virtual_func_00113898;
 local_10 = 3;
 call_virtual_func((Base *)local_20,5);
 call_virtual_func((Base *)local_18,5);
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}



/* Function: test_cpp_multiple_inheritance @ 00101b78 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined8 test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_operator_overload @ 00101b80 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined8 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00101b88 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

void test_cpp_template_func(void)

{
 int iVar1;
 double dVar2;
 int local_10;
 int local_c;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 iVar1 = template_max_int(3,7);
 dVar2 = template_max_double(2.5,1.5);
 local_10 = 10;
 local_c = 0x14;
 template_swap_int(&local_10,&local_c);
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}



/* Function: test_cpp_template_class @ 00101c30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

int test_cpp_template_class(void)

{
 int iVar1;
 int local_38 [10];
 int local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_10 = 1;
 local_38[0] = 10;
 Container_int_push((Container_int *)local_38,0x14);
 Container_int_push((Container_int *)local_38,0x1e);
 iVar1 = local_38[0];
 if (local_10 < 1) {
 iVar1 = 0;
 }
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return local_10 + iVar1 + 3;
}



/* Function: test_cpp_lambda @ 00101cc0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined8 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_rtti @ 00101cc8 */

/* WARNING: Removing unreachable block (ram,0x00101d68) */
/* WARNING: Removing unreachable block (ram,0x00101d74) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 char cVar1;
 int iVar2;
 void **plVar3;
 void **plVar4;
 long lVar5;
 size_t sVar6;
 int iVar7;
 char *__s1;
 long lVar8;
 
 plVar3 = (void **)operator_new(8);
 *plVar3 = (void *)&PTR__RTTIDerivedA_00113b58;
 plVar4 = (void **)operator_new(8);
 lVar8 = (long)(uintptr_t)plVar3;
 *plVar4 = (void *)&PTR__RTTIDerivedB_00113b80;
 __s1 = *(char **)(*(long *)(lVar8 + -8) + 8);
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
 if (__dynamic_cast(plVar3,(void *)0,(void *)0,0) != (void *)0) {
 iVar2 = iVar7 + 0x78;
 }
 if (__dynamic_cast(plVar4,(void *)0,(void *)0,0) != (void *)0) {
 iVar2 = iVar2 + 200;
 }
  if (cVar1 == '*') {
 __s1 = __s1 + 1;
 }
  sVar6 = strlen(__s1);
  (*(void (**)(void *))(lVar8 + 8))(plVar3);
  (*(void (**)(void *))(*plVar4 + 8))(plVar4);
  return iVar2;
}



/* Function: test_cpp_smart_ptr @ 00101e24 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined8 test_cpp_smart_ptr(void)

{
 undefined8 local_20;
 undefined4 *puStack_18;
 undefined8 *local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 puStack_18 = (undefined4 *)operator_new(4);
 local_20 = 0;
 *puStack_18 = 200;
 /* try { // try from 00101e68 to 00101e6b has its CatchHandler @ 00101ec8 */
 local_10 = (undefined8 *)operator_new__(0x14);
 *local_10 = 0x200000001;
 local_10[1] = 0x400000003;
 *(undefined4 *)(local_10 + 2) = 5;

 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return 0x2bf;
}



/* Function: test_cpp_diamond_inheritance @ 00101ef8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
 int iVar1;
 int iVar2;
 undefined **local_38 [2];
 undefined **local_28;
 undefined **local_18;
 undefined4 local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_38[0] = &PTR_func_00113ac8;
 local_18 = &PTR_func_00113b30;
 local_28 = &PTR_func_00113af8;
 local_10 = 0x32;
 iVar1 = DiamondDerived_func((DiamondDerived *)local_18);
 local_10 = 100;
 iVar2 = DiamondDerived_func((DiamondDerived *)local_18);
 DiamondDerived__DiamondDerived((DiamondDerived *)local_38);
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar1 + iVar2;
}



/* Function: test_cpp_oo_features @ 00101fa0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 undefined4 uVar1;
 
 puts(&DAT_001025b2);
 uVar1 = test_cpp_member_func();
 __printf_chk(1,&DAT_001025d6,uVar1);
 uVar1 = test_cpp_constructor();
 __printf_chk(1,&DAT_001025f4,uVar1);
 uVar1 = test_cpp_virtual_func();
 __printf_chk(1,&DAT_00102610,uVar1);
 uVar1 = test_cpp_multiple_inheritance();
 __printf_chk(1,&DAT_0010262c,uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,&DAT_00102648,uVar1);
 uVar1 = test_cpp_operator_overload();
 __printf_chk(1,&DAT_00102665,uVar1);
 uVar1 = test_cpp_template_func();
 __printf_chk(1,&DAT_00102681,uVar1);
 uVar1 = test_cpp_template_class();
 __printf_chk(1,&DAT_0010269d,uVar1);
 uVar1 = test_cpp_lambda();
 __printf_chk(1,&DAT_001026b9,uVar1);
 test_cpp_exception();
 __printf_chk(1,&DAT_001026d5,0);
 uVar1 = test_cpp_smart_ptr();
 __printf_chk(1,&DAT_001026f2,uVar1);
 uVar1 = test_cpp_rtti();
 __printf_chk(1,&DAT_0010270f,uVar1);
 return;
}



/* Function: virtual_func @ 001020d8 */

/* Base::virtual_func(int) */

int __thiscall Base_virtual_func(Base *this,int param_1)

{
 return param_1 + 1;
}



/* Function: getName @ 001020e0 */

/* Base::getName() const */

undefined * Base_getName(void)

{
 return &DAT_001025a0;
}



/* Function: ~Base @ 001020ec */

/* Base::~Base() */

void __thiscall Base__Base(Base *this)

{
 return;
}



/* Function: virtual_func @ 001020f0 */

/* Derived::virtual_func(int) */

int __thiscall Derived_virtual_func(Derived *this,int param_1)

{
 return param_1 * *(int *)(this + 8);
}



/* Function: getName @ 001020fc */

/* Derived::getName() const */

char * Derived_getName(void)

{
 return "Derived";
}



/* Function: funcA @ 00102108 */

/* MultiDerived::funcA() */

undefined8 MultiDerived_funcA(void)

{
 return 0x1e;
}







/* Function: funcB @ 00102118 */

/* non-virtual thunk to MultiDerived::funcB() */

undefined8 __thiscall MultiDerived_funcB(MultiDerived *this)

{
 return 0x28;
}



/* Function: func @ 00102120 */

/* VirtualBase::func() */

undefined8 VirtualBase_func(VirtualBase *this)

{
 return 100;
}



/* Function: ~VirtualBase @ 00102128 */

/* VirtualBase::~VirtualBase() */

void __thiscall VirtualBase__VirtualBase(VirtualBase *this)

{
 return;
}



/* Function: func @ 0010212c */

/* MiddleA::func() */

int __thiscall MiddleA_func(MiddleA *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}



/* Function: func @ 00102144 */

/* virtual thunk to MiddleA::func() */

void __thiscall MiddleA_func_virtual_thunk(MiddleA *this)

{
 MiddleA_func(this + *(long *)(*(long *)this + -0x18));
 return;
}



/* Function: func @ 00102154 */

/* MiddleB::func() */

int __thiscall MiddleB_func(MiddleB *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}



/* Function: func @ 0010216c */

/* virtual thunk to MiddleB::func() */

void __thiscall MiddleB_func_virtual_thunk(MiddleB *this)

{
 MiddleB_func(this + *(long *)(*(long *)this + -0x18));
 return;
}



/* Function: func @ 0010217c */

/* DiamondDerived::func() */

int __thiscall DiamondDerived_func(DiamondDerived *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}



/* Function: func @ 00102194 */

/* virtual thunk to DiamondDerived::func() */

void __thiscall DiamondDerived_func_virtual_thunk(DiamondDerived *this)

{
 DiamondDerived_func(this + *(long *)(*(long *)this + -0x18));
 return;
}



/* Function: func @ 001021a4 */

/* non-virtual thunk to DiamondDerived::func() */

void __thiscall DiamondDerived_func_thunk(DiamondDerived *this)

{
 VirtualBase_func((VirtualBase *)(this + -0x10));
 return;
}



/* Function: ~MiddleA @ 001021ac */

/* MiddleA::~MiddleA() */

void MiddleA__MiddleA_base(MiddleA *this)

{
 *(undefined ***)this = &PTR_func_001138e0;
 *(undefined ***)(this + 0x10) = &PTR_func_00113918;
 return;
}



/* Function: ~MiddleA @ 001021c8 */

/* virtual thunk to MiddleA::~MiddleA() */

void MiddleA__MiddleA_virtual_thunk(MiddleA *this)

{
 long lVar1;
 
 lVar1 = *(long *)(*(long *)this + -0x20);
 *(undefined ***)(this + lVar1) = &PTR_func_001138e0;
 *(undefined ***)(this + lVar1 + 0x10) = &PTR_func_00113918;
 return;
}



/* Function: ~MiddleB @ 001021f0 */

/* MiddleB::~MiddleB() */

void MiddleB__MiddleB_base(MiddleB *this)

{
 *(undefined ***)this = &PTR_func_00113958;
 *(undefined ***)(this + 0x10) = &PTR_func_00113990;
 return;
}



/* Function: ~MiddleB @ 0010220c */

/* virtual thunk to MiddleB::~MiddleB() */

void MiddleB__MiddleB_virtual_thunk(MiddleB *this)

{
 long lVar1;
 
 lVar1 = *(long *)(*(long *)this + -0x20);
 *(undefined ***)(this + lVar1) = &PTR_func_00113958;
 *(undefined ***)(this + lVar1 + 0x10) = &PTR_func_00113990;
 return;
}



/* Function: getType @ 00102234 */

/* RTTIDerivedA::getType() const */

undefined8 RTTIDerivedA_getType(void)

{
 return 1;
}



/* Function: getType @ 0010223c */

/* RTTIDerivedB::getType() const */

undefined8 RTTIDerivedB_getType(void)

{
 return 2;
}











/* Function: ~MultiDerived @ 0010224c */

/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived__MultiDerived_base(MultiDerived *this)

{
 return;
}



/* Function: ~MultiDerived @ 00102250 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived__MultiDerived_non_virtual_thunk(MultiDerived *this)

{
 return;
}







/* Function: ~Base @ 00102258 */

/* Base::~Base() deleting */

void __thiscall Base__Base_deleting(Base *this)

{
 operator_delete(this,8);
}



/* Function: ~Derived @ 00102260 */

/* Derived::~Derived() */

void Derived__Derived(Derived *this)

{
 operator_delete(this,0x10);
}



/* Function: ~MultiDerived @ 00102268 */

/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived__MultiDerived_complete(MultiDerived *this)

{
 operator_delete(this,0x20);
 return;
}



/* Function: ~MultiDerived @ 00102270 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived__MultiDerived_non_virtual_thunk2(MultiDerived *this)

{
 MultiDerived__MultiDerived_complete(this + -0x10);
 return;
}



/* Function: ~VirtualBase @ 00102278 */

/* VirtualBase::~VirtualBase() deleting */

void __thiscall VirtualBase__VirtualBase_deleting(VirtualBase *this)

{
 operator_delete(this,0x10);
 return;
}



/* Function: ~RTTIDerivedB @ 00102280 */

/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this)

{
 operator_delete(this,8);
 return;
}



/* Function: ~RTTIDerivedA @ 00102288 */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this)

{
 operator_delete(this,8);
 return;
}



/* Function: ~MiddleA @ 00102290 */

/* MiddleA::~MiddleA() */

void MiddleA__MiddleA_complete(MiddleA *this)

{
 *(undefined ***)this = &PTR_func_001138e0;
 *(undefined ***)(this + 0x10) = &PTR_func_00113918;
 operator_delete(this,0x20);
 return;
}



/* Function: ~MiddleA @ 001022b0 */

/* virtual thunk to MiddleA::~MiddleA() */

void MiddleA__MiddleA_virtual_thunk2(MiddleA *this)

{
 MiddleA__MiddleA_complete(this + *(long *)(*(long *)this + -0x20));
 return;
}



/* Function: ~MiddleB @ 001022c0 */

/* MiddleB::~MiddleB() */

void MiddleB__MiddleB_complete(MiddleB *this)

{
 *(undefined ***)this = &PTR_func_00113958;
 *(undefined ***)(this + 0x10) = &PTR_func_00113990;
 operator_delete(this,0x20);
 return;
}



/* Function: ~MiddleB @ 001022e0 */

/* virtual thunk to MiddleB::~MiddleB() */

void MiddleB__MiddleB_virtual_thunk2(MiddleB *this)

{
 MiddleB__MiddleB_complete(this + *(long *)(*(long *)this + -0x20));
 return;
}



/* Function: ~MiddleA @ 001022f0 */

/* MiddleA::~MiddleA() */

void MiddleA__MiddleA_deleting(MiddleA *this)

{
 int in_w1 = 0;
 undefined **ppuVar1;
 undefined8 *in_x2 = *(undefined8 **)this;
 undefined8 puVar2;
 undefined **ppuVar3;
 
 if (in_w1 == 0) {
 ppuVar3 = (undefined **)*in_x2;
 }
 else {
 ppuVar3 = &PTR_func_001138e0;
 }
 *(undefined ***)this = ppuVar3;
  if (in_w1 == 0) {
    ppuVar1 = (undefined **)in_x2[1];
    puVar2 = (undefined8)ppuVar3[-3];
  }
  else {
    puVar2 = 0x10;
    ppuVar1 = &PTR_func_00113918;
  }
  *(undefined ***)(this + puVar2) = ppuVar1;
  return;
}



/* Function: ~MiddleA @ 0010232c */

/* MiddleA::~MiddleA() */

void MiddleA__MiddleA_scalar_deleting(MiddleA *this)

{
 MiddleA__MiddleA_deleting(this);
 return;
}



/* Function: ~MiddleB @ 00102338 */

/* MiddleB::~MiddleB() */

void MiddleB__MiddleB_deleting(MiddleB *this)

{
 int in_w1 = 0;
 undefined **ppuVar1;
 undefined8 *in_x2 = *(undefined8 **)this;
 undefined8 puVar2;
 undefined **ppuVar3;
 
 if (in_w1 == 0) {
 ppuVar3 = (undefined **)*in_x2;
 }
 else {
 ppuVar3 = &PTR_func_00113958;
 }
 *(undefined ***)this = ppuVar3;
 if (in_w1 == 0) {
 ppuVar1 = (undefined **)in_x2[1];
 puVar2 = (undefined8)ppuVar3[-3];
 }
 else {
 puVar2 = 0x10;
 ppuVar1 = &PTR_func_00113990;
 }
 *(undefined ***)(this + puVar2) = ppuVar1;
 return;
}



/* Function: ~MiddleB @ 00102374 */

/* MiddleB::~MiddleB() */

void MiddleB__MiddleB_scalar_deleting(MiddleB *this)

{
 MiddleB__MiddleB_deleting(this);
 return;
}



/* Function: template_max_int @ 00102380 */

/* int template_max_int(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_max_double @ 0010238c */

/* double template_max_double(double, double) */

double template_max_double(double param_1,double param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap_int @ 00102398 */

/* void template_swap_int(int*, int*) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 001023ac */

/* Container_int::Container() */

void __thiscall Container_int_Container(Container_int *this)

{
 *(undefined4 *)(this + 0x28) = 0;
 return;
}



/* Function: push @ 001023b4 */

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



/* Function: get @ 001023d0 */

/* Container_int::get(int) const */

undefined4 __thiscall Container_int_get(Container_int *this,int param_1)

{
 undefined4 uVar1;
 
 if ((param_1 < 0) || (*(int *)(this + 0x28) <= param_1)) {
 uVar1 = 0;
 }
 else {
 uVar1 = *(undefined4 *)(this + (long)param_1 * 4);
 }
 return uVar1;
}



/* Function: getSize @ 001023f0 */

/* Container_int::getSize() const */

undefined4 __thiscall Container_int_getSize(Container_int *this)

{
 return *(undefined4 *)(this + 0x28);
}



/* Function: Container @ 001023f8 */

/* Container_double::Container() */

void __thiscall Container_double_Container(Container_double *this)

{
 *(undefined4 *)(this + 0x50) = 0;
 return;
}



/* Function: push @ 00102400 */

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



/* Function: get @ 0010241c */

/* Container_double::get(int) const */

undefined8 __thiscall Container_double_get(Container_double *this,int param_1)

{
 ulong uVar1;
 undefined8 uVar2;
 
 if ((param_1 < 0) || (*(int *)(this + 0x50) <= param_1)) {
 uVar1 = 0;
 }
 else {
 uVar1 = *(ulong *)(this + (long)param_1 * 8);
 }
 uVar2 = (undefined8)uVar1;
 return uVar2;
}



/* Function: getSize @ 0010243c */

/* Container_double::getSize() const */

undefined4 __thiscall Container_double_getSize(Container_double *this)

{
 return *(undefined4 *)(this + 0x50);
}



/* Function: ~unique_ptr @ 00102444 */

/* unique_ptr_int::~unique_ptr() */

void __thiscall
unique_ptr_int__unique_ptr
 (unique_ptr_int *this)

{
 if (*(void **)this != (void *)0x0) {
 operator_delete(*(void **)this,4);
 }
 return;
}



/* Function: ~unique_ptr @ 00102458 */

/* unique_ptr_int_array::~unique_ptr() */

void __thiscall
unique_ptr_int_array__unique_ptr
 (unique_ptr_int_array *this)

{
 if (*(void **)this != (void *)0x0) {
 operator_delete__(*(void **)this);
 }
 return;
}



/* Function: ~DiamondDerived @ 00102468 */

/* DiamondDerived::~DiamondDerived() */

void DiamondDerived__DiamondDerived_base(DiamondDerived *this)

{
 undefined **ppuVar1;
 undefined *puVar2;
 
 ppuVar1 = &PTR_func_00113ac8;
 *(undefined ***)this = ppuVar1;
 puVar2 = (undefined *)0x20;
 ppuVar1 = &PTR_func_00113b30;
 *(undefined ***)(this + (long)puVar2) = ppuVar1;
 ppuVar1 = &PTR_func_00113af8;
 *(undefined ***)(this + 0x10) = ppuVar1;
 MiddleB__MiddleB_base((MiddleB *)(this + 0x10));
 MiddleA__MiddleA_base((MiddleA *)this);
 return;
}



/* Function: ~DiamondDerived @ 00102518 */

/* DiamondDerived::~DiamondDerived() */

void DiamondDerived__DiamondDerived(DiamondDerived *this)

{
 DiamondDerived__DiamondDerived_base(this);
 return;
}



/* Function: ~DiamondDerived @ 00102524 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived__DiamondDerived_non_virtual_thunk(DiamondDerived *this)

{
 DiamondDerived__DiamondDerived(this + -0x10);
 return;
}



/* Function: ~DiamondDerived @ 0010252c */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived__DiamondDerived_virtual_thunk(DiamondDerived *this)

{
 DiamondDerived__DiamondDerived(this + *(long *)(*(long *)this + -0x20));
 return;
}



/* Function: ~DiamondDerived @ 0010253c */

/* DiamondDerived::~DiamondDerived() */

void DiamondDerived__DiamondDerived_complete(DiamondDerived *this)

{
 DiamondDerived__DiamondDerived_base(this);
 operator_delete(this,0x30);
 return;
}



/* Function: ~DiamondDerived @ 00102564 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived__DiamondDerived_non_virtual_thunk2(DiamondDerived *this)

{
 DiamondDerived__DiamondDerived_complete(this + -0x10);
 return;
}



/* Function: ~DiamondDerived @ 0010256c */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived__DiamondDerived_virtual_thunk2(DiamondDerived *this)

{
 DiamondDerived__DiamondDerived_complete(this + *(long *)(*(long *)this + -0x20));
 return;
}



/* Function: ~DiamondDerived @ 0010257c */

/* DiamondDerived::~DiamondDerived() */

void DiamondDerived__DiamondDerived_scalar_deleting(DiamondDerived *this)

{
 DiamondDerived__DiamondDerived_complete(this);
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 89 */
